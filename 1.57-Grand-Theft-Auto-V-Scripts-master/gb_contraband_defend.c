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
	struct<270> Local_124 = { 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, -1, -1, -1, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0 } ;
	struct<11> Local_125[32];
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	struct<8> Local_145[10];
	var uLocal_146[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	int iLocal_150 = 0;
	var uLocal_151 = 0;
	int iLocal_152 = 0;
	char* sLocal_153 = NULL;
	var uLocal_154 = 16;
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
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	int iLocal_320 = 0;
	int iLocal_321 = 0;
	struct<21> Local_322 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	iLocal_129 = -2;
	iLocal_130 = -1;
	sLocal_153 = "";
	if (unk_0x02BFF15CAA701972() && func_1340(unk_0x1146A9AE09CE2B14(), 0, 1))
	{
		func_1288(ScriptParam_322);
	}
	else
	{
		func_1234();
	}
	while (true)
	{
		func_1233();
		if (func_1225())
		{
			func_1234();
		}
		Global_1681722.f_2 = Local_124.f_267;
		Global_1681722.f_3 = Local_124.f_268;
		switch (func_1224(unk_0xDD0E57E73E5C4BF6()))
		{
			case 0:
				if (unk_0x952AB441FA24BF16("ALARM_BELL_02", 0, -1))
				{
					if (func_1223() == 1)
					{
						if (func_1222())
						{
							func_1221();
							if (func_1220())
							{
								func_1203(169, 1, func_1218(), 0);
								func_1202();
								func_1200();
							}
							else
							{
								func_1203(169, 0, func_1218(), 0);
							}
							Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/] = 1;
						}
					}
					else if (func_1223() == 4)
					{
						Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/] = 3;
					}
				}
				break;
			
			case 1:
				if (func_1195(1))
				{
					Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/] = 2;
				}
				if (func_1223() == 1)
				{
					func_1187();
					func_1104();
					func_457();
					func_441();
					if (!func_440())
					{
						if (func_1220() || func_438())
						{
							func_283(&(Global_1368721.f_534), &Global_1368721, 28, &(Global_1368721.f_1), &(Global_1368721.f_117), -1, 0, 0);
						}
					}
					else
					{
						func_278();
					}
					func_220();
					func_219();
				}
				else if (func_1223() == 4)
				{
					Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/] = 3;
				}
				func_213();
				break;
			
			case 3:
				func_212(&(Local_124.f_224));
				if (func_211(&(Local_124.f_224)))
				{
					Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/] = 4;
				}
				break;
			
			case 2:
				Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/] = 4;
			
			case 4:
				func_1234();
				break;
		}
		if (unk_0x443E2CA72E118E64())
		{
			switch (func_1223())
			{
				case 0:
					if (func_1218() > -1)
					{
						func_209();
						func_207();
						func_206();
						func_203();
						if (func_43())
						{
							unk_0x9FCD56F864077E14(&(Local_124.f_267), &(Local_124.f_268));
							func_37();
							Local_124 = 1;
							Local_124.f_218 = unk_0xDD0E57E73E5C4BF6();
							Local_124.f_219 = unk_0x1146A9AE09CE2B14();
							func_1203(169, 1, func_1218(), 0);
						}
					}
					break;
				
				case 1:
					func_29();
					func_203();
					func_22();
					func_4();
					if (func_2())
					{
						Local_124 = 4;
					}
					else if (func_1())
					{
						Local_124 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()
{
	if (Global_2544210.f_5191.f_41)
	{
		Global_2544210.f_5191.f_41 = 0;
		return 1;
	}
	return 0;
}

int func_2()
{
	if (func_3())
	{
		return 1;
	}
	if (unk_0x234B68AC2E35ED5A(Local_124.f_1, 2))
	{
		return 1;
	}
	return 0;
}

int func_3()
{
	return 0;
}

void func_4()
{
	switch (Local_124.f_214)
	{
		case 0:
			func_19();
			func_17();
			if (func_440())
			{
				func_15();
				func_5();
			}
			if (unk_0x234B68AC2E35ED5A(Local_124.f_1, 1))
			{
				Local_124.f_214 = 2;
			}
			else if (unk_0x234B68AC2E35ED5A(Local_124.f_1, 3))
			{
				Local_124.f_214 = 2;
			}
			else if (unk_0x234B68AC2E35ED5A(Local_124.f_1, 4))
			{
				Local_124.f_214 = 2;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			break;
	}
}

void func_5()
{
	int iVar0;
	int iVar1;
	
	if (Local_124.f_215 > -1)
	{
		return;
	}
	if (!func_12())
	{
		return;
	}
	if (!func_11(&(Local_124.f_228)))
	{
		if (unk_0x234B68AC2E35ED5A(Local_124.f_1, 6))
		{
			if (unk_0x234B68AC2E35ED5A(Local_124.f_1, 11))
			{
				if (!unk_0x234B68AC2E35ED5A(Local_124.f_1, 7))
				{
					func_10(&(Local_124.f_228), 0, 0);
				}
			}
		}
	}
	if (func_11(&(Local_124.f_228)))
	{
		if (Local_124.f_222 > 0)
		{
			if (unk_0x234B68AC2E35ED5A(Local_124.f_1, 7))
			{
				func_9(&(Local_124.f_228));
				Local_124.f_222 = 255;
			}
			else
			{
				iVar0 = func_8();
				iVar1 = func_7();
				if (func_6(&(Local_124.f_228), iVar0, 0))
				{
					func_9(&(Local_124.f_228));
					Local_124.f_222 = (Local_124.f_222 - iVar1);
					if (Local_124.f_222 < 0)
					{
						Local_124.f_222 = 0;
					}
				}
			}
		}
		if (Local_124.f_222 <= 0)
		{
			if (!unk_0x234B68AC2E35ED5A(Local_124.f_1, 9))
			{
				unk_0x191DDA30577F440A(&(Local_124.f_1), 9);
			}
		}
	}
}

int func_6(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_10(uParam0, bParam2, 0);
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

int func_7()
{
	return 10;
}

int func_8()
{
	return 2000;
}

void func_9(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_10(var uParam0, bool bParam1, bool bParam2)
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

bool func_11(var uParam0)
{
	return uParam0->f_1;
}

int func_12()
{
	int iVar0;
	
	if (unk_0x159BC3DDA80D71AC(Local_124.f_2[0 /*10*/].f_2))
	{
		if (func_13(Local_124.f_2[0 /*10*/].f_2))
		{
			iVar0 = unk_0x27FC1B0077581B37(unk_0x854C404AEB476240(Local_124.f_2[0 /*10*/].f_2), -1, 0);
			if (iVar0 != 0)
			{
				if (!unk_0xECEC7528A52B4EE8(iVar0))
				{
					if (!unk_0x72D30262CF8C8603(iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_13(var uParam0)
{
	if (unk_0xB7D6400C89373777(uParam0))
	{
		return !func_14(unk_0x854C404AEB476240(uParam0));
	}
	return 0;
}

int func_14(int iParam0)
{
	if (unk_0x419E13582192CFEA(uParam0))
	{
		if (unk_0xE50EB54E0F21BED0(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xBFCE58B2B3249999(iParam0, 0))
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

void func_15()
{
	if (!func_440())
	{
		return;
	}
	if (!unk_0x234B68AC2E35ED5A(Local_124.f_1, 6))
	{
		if (!func_11(&(Local_124.f_234)))
		{
			func_10(&(Local_124.f_234), 0, 0);
		}
		if (func_6(&(Local_124.f_234), func_16(), 0))
		{
			unk_0x191DDA30577F440A(&(Local_124.f_1), 6);
		}
	}
}

int func_16()
{
	return 60000;
}

void func_17()
{
	if (!func_440())
	{
		return;
	}
	if (!func_11(&(Local_124.f_238)))
	{
		func_10(&(Local_124.f_238), 0, 0);
	}
	else if (func_6(&(Local_124.f_238), func_18(), 0))
	{
		unk_0x191DDA30577F440A(&(Local_124.f_1), 15);
	}
}

int func_18()
{
	return 1800000;
}

void func_19()
{
	if (func_440())
	{
		return;
	}
	if (!func_11(&(Local_124.f_236)))
	{
		func_10(&(Local_124.f_236), 0, 0);
		return;
	}
	else if (!func_6(&(Local_124.f_236), func_21(), 0))
	{
		return;
	}
	if (!func_11(&(Local_124.f_226)))
	{
		func_10(&(Local_124.f_226), 0, 0);
	}
	else if (func_6(&(Local_124.f_226), func_20(), 0))
	{
		unk_0x191DDA30577F440A(&(Local_124.f_1), 3);
	}
}

int func_20()
{
	return Global_262145.f_16318;
}

int func_21()
{
	return Local_124.f_223;
}

void func_22()
{
	int iVar0;
	int iVar1;
	
	if (func_28())
	{
		return;
	}
	if (unk_0x443E2CA72E118E64())
	{
		iVar1 = 0;
		while (iVar1 < 10)
		{
			switch (Local_124.f_2[iVar1 /*10*/].f_9)
			{
				case 0:
					if (unk_0x159BC3DDA80D71AC(Local_124.f_2[iVar1 /*10*/].f_1))
					{
						if (func_440())
						{
							Local_124.f_2[iVar1 /*10*/].f_9 = 8;
						}
						else
						{
							Local_124.f_2[iVar1 /*10*/].f_9 = 6;
						}
					}
					break;
				
				case 8:
					if (unk_0x234B68AC2E35ED5A(Local_124.f_1, 6))
					{
						Local_124.f_2[iVar1 /*10*/].f_9 = 1;
					}
					else
					{
						func_25(iVar0, iVar1);
					}
					break;
				
				case 1:
					if (unk_0x159BC3DDA80D71AC(Local_124.f_2[iVar1 /*10*/].f_1))
					{
						if (func_440())
						{
							func_25(iVar0, iVar1);
						}
					}
					break;
				
				case 2:
					break;
				
				case 3:
					if (func_440())
					{
						if (unk_0x159BC3DDA80D71AC(Local_124.f_2[iVar1 /*10*/].f_1))
						{
							if (!func_24(Local_124.f_2[iVar1 /*10*/].f_1))
							{
								if (!unk_0x530FB711AE9CF518(unk_0x8A437068C87289B7(Local_124.f_2[iVar1 /*10*/].f_1)))
								{
									Local_124.f_2[iVar1 /*10*/].f_9 = 7;
								}
							}
						}
					}
					break;
				
				case 5:
					break;
				
				case 4:
					break;
				
				case 6:
					break;
				
				case 7:
					func_23(iVar1);
					break;
			}
			iVar1++;
		}
	}
}

void func_23(int iParam0)
{
	if (func_440())
	{
		if (iParam0 == 1)
		{
			if (unk_0x159BC3DDA80D71AC(Local_124.f_2[iParam0 /*10*/].f_1))
			{
				if (!func_24(Local_124.f_2[iParam0 /*10*/].f_1))
				{
					if (unk_0x530FB711AE9CF518(unk_0x8A437068C87289B7(Local_124.f_2[iParam0 /*10*/].f_1)))
					{
						if (unk_0x159BC3DDA80D71AC(Local_124.f_2[0 /*10*/].f_1))
						{
							if (func_24(Local_124.f_2[0 /*10*/].f_1))
							{
								Local_124.f_2[iParam0 /*10*/].f_9 = 3;
							}
						}
					}
				}
			}
		}
	}
}

int func_24(var uParam0)
{
	if (unk_0xB7D6400C89373777(uParam0))
	{
		return unk_0xECEC7528A52B4EE8(unk_0x8A437068C87289B7(uParam0));
	}
	return 1;
}

void func_25(int iParam0, int iParam1)
{
	if (!func_24(Local_124.f_2[iParam1 /*10*/].f_1))
	{
		if (unk_0x530FB711AE9CF518(unk_0x8A437068C87289B7(Local_124.f_2[iParam1 /*10*/].f_1)))
		{
			if (unk_0x234B68AC2E35ED5A(Local_124.f_205, iParam1))
			{
				unk_0x191DDA30577F440A(&(Local_124.f_204), iParam1);
				iParam0 = unk_0x8A437068C87289B7(Local_124.f_2[iParam1 /*10*/].f_1);
				if (func_27(&iParam0))
				{
					Local_124.f_2[iParam1 /*10*/].f_9 = 2;
				}
				else
				{
					Local_124.f_2[iParam1 /*10*/].f_9 = 7;
				}
			}
			else if (unk_0x234B68AC2E35ED5A(Local_124.f_206, iParam1))
			{
				unk_0x191DDA30577F440A(&(Local_124.f_204), iParam1);
				iParam0 = unk_0x8A437068C87289B7(Local_124.f_2[iParam1 /*10*/].f_1);
				if (func_27(&iParam0))
				{
					Local_124.f_2[iParam1 /*10*/].f_9 = 2;
				}
				else
				{
					Local_124.f_2[iParam1 /*10*/].f_9 = 7;
				}
			}
			else if (unk_0x234B68AC2E35ED5A(Local_124.f_207, iParam1))
			{
				unk_0x191DDA30577F440A(&(Local_124.f_204), iParam1);
				iParam0 = unk_0x8A437068C87289B7(Local_124.f_2[iParam1 /*10*/].f_1);
				if (func_27(&iParam0))
				{
					Local_124.f_2[iParam1 /*10*/].f_9 = 2;
				}
				else
				{
					Local_124.f_2[iParam1 /*10*/].f_9 = 7;
				}
			}
			else if (func_26())
			{
				unk_0x191DDA30577F440A(&(Local_124.f_204), iParam1);
				iParam0 = unk_0x8A437068C87289B7(Local_124.f_2[iParam1 /*10*/].f_1);
				if (func_27(&iParam0))
				{
					Local_124.f_2[iParam1 /*10*/].f_9 = 2;
				}
				else
				{
					Local_124.f_2[iParam1 /*10*/].f_9 = 7;
				}
			}
			else
			{
				func_23(iParam1);
			}
		}
		else if (Local_124.f_2[iParam1 /*10*/].f_9 != 7)
		{
			Local_124.f_2[iParam1 /*10*/].f_9 = 7;
		}
	}
}

int func_26()
{
	if (unk_0x159BC3DDA80D71AC(Local_124.f_2[0 /*10*/].f_1))
	{
		if (func_24(Local_124.f_2[0 /*10*/].f_1))
		{
			return 1;
		}
	}
	if (unk_0x159BC3DDA80D71AC(Local_124.f_2[1 /*10*/].f_1))
	{
		if (func_24(Local_124.f_2[1 /*10*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_27(int iParam0)
{
	if (unk_0xC49311A2A500FF09(*iParam0, 0))
	{
		if (unk_0x27FC1B0077581B37(unk_0xDA8C680C9B8BFAAF(*iParam0), -1, 0) == *iParam0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_28()
{
	return ((((((unk_0x234B68AC2E35ED5A(Local_124.f_1, 1) || unk_0x234B68AC2E35ED5A(Local_124.f_1, 3)) || unk_0x234B68AC2E35ED5A(Local_124.f_1, 4)) || unk_0x234B68AC2E35ED5A(Local_124.f_1, 5)) || unk_0x234B68AC2E35ED5A(Local_124.f_1, 8)) || unk_0x234B68AC2E35ED5A(Local_124.f_1, 9)) || unk_0x234B68AC2E35ED5A(Local_124.f_1, 15));
}

void func_29()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	var uVar6;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = -1;
	bVar3 = false;
	bVar4 = true;
	if (Local_124 != 4)
	{
		iLocal_128 = 0;
		while (iLocal_128 < unk_0x5E72DF7B8C03AA05())
		{
			if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iLocal_128)))
			{
				iVar5 = unk_0x539ED6DF32477DE0(unk_0x6750311806FF130A(iLocal_128));
				if (!func_34(iVar5, 0))
				{
					if (func_1340(iVar5, 1, 1))
					{
					}
					func_33(iLocal_128);
					func_32(iLocal_128);
					if (func_440())
					{
						if (!unk_0x234B68AC2E35ED5A(Local_124.f_1, 8))
						{
							if (unk_0x234B68AC2E35ED5A(Local_125[iLocal_128 /*11*/].f_1, 9))
							{
								unk_0x191DDA30577F440A(&(Local_124.f_1), 8);
							}
						}
						if (!unk_0x234B68AC2E35ED5A(Local_124.f_1, 6))
						{
							if (unk_0x234B68AC2E35ED5A(Local_125[iLocal_128 /*11*/].f_1, 7))
							{
								unk_0x191DDA30577F440A(&(Local_124.f_1), 6);
							}
						}
						if (!unk_0x234B68AC2E35ED5A(Local_124.f_1, 11))
						{
							if (unk_0x234B68AC2E35ED5A(Local_125[iLocal_128 /*11*/].f_1, 10))
							{
								unk_0x191DDA30577F440A(&(Local_124.f_1), 11);
							}
						}
						if (!unk_0x234B68AC2E35ED5A(Local_124.f_217, iLocal_128))
						{
							if (unk_0x234B68AC2E35ED5A(Local_125[iLocal_128 /*11*/].f_1, 8))
							{
								unk_0x191DDA30577F440A(&(Local_124.f_217), iLocal_128);
							}
						}
						else if (!unk_0x234B68AC2E35ED5A(Local_125[iLocal_128 /*11*/].f_1, 8))
						{
							unk_0xC664C0067EEAB8D1(&(Local_124.f_217), iLocal_128);
						}
						if (iVar2 == -1)
						{
							if (unk_0x234B68AC2E35ED5A(Local_125[iLocal_128 /*11*/].f_1, 3))
							{
								iVar2 = iLocal_128;
							}
						}
						if (!unk_0x234B68AC2E35ED5A(Local_124.f_1, 4))
						{
							if (unk_0x234B68AC2E35ED5A(Local_125[iLocal_128 /*11*/].f_1, 2))
							{
								unk_0x191DDA30577F440A(&(Local_124.f_1), 4);
								Local_124.f_221 = Local_124.f_216;
							}
						}
						if (!unk_0x234B68AC2E35ED5A(Local_124.f_1, 17))
						{
							if (unk_0x234B68AC2E35ED5A(Local_125[iLocal_128 /*11*/].f_1, 15))
							{
								unk_0x191DDA30577F440A(&(Local_124.f_1), 17);
							}
						}
						if (bVar4)
						{
							if (unk_0x234B68AC2E35ED5A(Local_124.f_1, 4))
							{
								if (!unk_0x234B68AC2E35ED5A(Local_125[iLocal_128 /*11*/].f_1, 14))
								{
									bVar4 = false;
								}
							}
							else
							{
								bVar4 = false;
							}
						}
					}
					else if (!unk_0x234B68AC2E35ED5A(Local_124.f_1, 13))
					{
						if (unk_0x234B68AC2E35ED5A(Local_125[iLocal_128 /*11*/].f_1, 11))
						{
							unk_0x191DDA30577F440A(&(Local_124.f_1), 13);
						}
					}
					if (!unk_0x234B68AC2E35ED5A(Local_124.f_1, 2))
					{
						if (!bVar3)
						{
							if (func_28())
							{
								if (!unk_0x234B68AC2E35ED5A(Local_125[iLocal_128 /*11*/].f_1, 4))
								{
									bVar3 = true;
								}
							}
							else
							{
								bVar3 = true;
							}
						}
					}
					if (!unk_0x234B68AC2E35ED5A(Local_124.f_1, 16))
					{
						if (unk_0x234B68AC2E35ED5A(Local_125[iLocal_128 /*11*/].f_1, 13))
						{
							unk_0x191DDA30577F440A(&(Local_124.f_1), 16);
						}
					}
				}
			}
			else if (!unk_0x234B68AC2E35ED5A(Local_124.f_1, 5))
			{
				if (Local_124.f_218 > -1)
				{
					if (iLocal_128 == Local_124.f_218)
					{
						unk_0x191DDA30577F440A(&(Local_124.f_1), 5);
					}
				}
			}
			iLocal_128++;
		}
		func_31();
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (unk_0x234B68AC2E35ED5A(Local_124.f_209, iVar1))
			{
				iVar0++;
			}
			iVar1++;
		}
		if (Local_124.f_213 != iVar0)
		{
			Local_124.f_213 = iVar0;
		}
		if (!unk_0x234B68AC2E35ED5A(Local_124.f_1, 1))
		{
			if (iVar0 >= func_30())
			{
				unk_0x191DDA30577F440A(&(Local_124.f_1), 1);
			}
		}
		if (func_440())
		{
			if (!unk_0x234B68AC2E35ED5A(Local_124.f_1, 7))
			{
				if (Local_124.f_217 != 0)
				{
					unk_0x191DDA30577F440A(&(Local_124.f_1), 7);
				}
			}
			else if (Local_124.f_217 == 0)
			{
				unk_0xC664C0067EEAB8D1(&(Local_124.f_1), 7);
			}
			if (!func_28())
			{
				if (Local_124.f_215 != iVar2)
				{
					Local_124.f_215 = iVar2;
					if (Local_124.f_215 > -1)
					{
						uVar6 = unk_0x539ED6DF32477DE0(unk_0x6750311806FF130A(Local_124.f_215));
						Local_124.f_216 = uVar6;
					}
					else
					{
						Local_124.f_216 = -1;
					}
				}
			}
			if (!unk_0x234B68AC2E35ED5A(Local_124.f_1, 18))
			{
				if (bVar4)
				{
					unk_0x191DDA30577F440A(&(Local_124.f_1), 18);
				}
			}
		}
		if (!unk_0x234B68AC2E35ED5A(Local_124.f_1, 2))
		{
			if (!bVar3)
			{
				unk_0x191DDA30577F440A(&(Local_124.f_1), 2);
			}
		}
	}
}

int func_30()
{
	switch (Local_124.f_197)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
		case 8:
			return 6;
		
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 20:
			return 8;
		
		case 7:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 21:
			return 10;
		
		default:
	}
	return 8;
}

void func_31()
{
	int iVar0;
	
	if (func_440())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x159BC3DDA80D71AC(Local_124.f_2[iVar0 /*10*/].f_1))
		{
			if (!unk_0x234B68AC2E35ED5A(Local_124.f_209, iVar0))
			{
				if (!func_11(&(Local_124.f_240[iVar0 /*2*/])))
				{
					if (func_24(Local_124.f_2[iVar0 /*10*/].f_1))
					{
						func_10(&(Local_124.f_240[iVar0 /*2*/]), 0, 0);
					}
				}
				else if (func_6(&(Local_124.f_240[iVar0 /*2*/]), 10000, 0))
				{
					unk_0x191DDA30577F440A(&(Local_124.f_209), iVar0);
				}
			}
		}
		iVar0++;
	}
}

void func_32(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!unk_0x234B68AC2E35ED5A(Local_124.f_205, iVar0))
		{
			if (unk_0x234B68AC2E35ED5A(Local_125[iParam0 /*11*/].f_5, iVar0))
			{
				unk_0x191DDA30577F440A(&(Local_124.f_205), iVar0);
			}
		}
		if (!unk_0x234B68AC2E35ED5A(Local_124.f_206, iVar0))
		{
			if (unk_0x234B68AC2E35ED5A(Local_125[iParam0 /*11*/].f_2, iVar0))
			{
				unk_0x191DDA30577F440A(&(Local_124.f_206), iVar0);
			}
		}
		if (!unk_0x234B68AC2E35ED5A(Local_124.f_208, iVar0))
		{
			if (unk_0x234B68AC2E35ED5A(Local_125[iParam0 /*11*/].f_3, iVar0))
			{
				unk_0x191DDA30577F440A(&(Local_124.f_208), iVar0);
			}
		}
		if (!unk_0x234B68AC2E35ED5A(Local_124.f_207, iVar0))
		{
			if (unk_0x234B68AC2E35ED5A(Local_125[iParam0 /*11*/].f_4, iVar0))
			{
				unk_0x191DDA30577F440A(&(Local_124.f_207), iVar0);
			}
		}
		if (!unk_0x234B68AC2E35ED5A(Local_124.f_209, iVar0))
		{
			if (unk_0x234B68AC2E35ED5A(Local_125[iParam0 /*11*/].f_6, iVar0))
			{
				unk_0x191DDA30577F440A(&(Local_124.f_209), iVar0);
			}
			else if (unk_0x234B68AC2E35ED5A(Local_125[iParam0 /*11*/].f_7, iVar0))
			{
				unk_0x191DDA30577F440A(&(Local_124.f_209), iVar0);
			}
			else if (unk_0x234B68AC2E35ED5A(Local_125[iParam0 /*11*/].f_8, iVar0))
			{
				unk_0x191DDA30577F440A(&(Local_124.f_209), iVar0);
			}
		}
		iVar0++;
	}
}

void func_33(int iParam0)
{
	int iVar0;
	
	if (func_440())
	{
		return;
	}
	if (!unk_0x234B68AC2E35ED5A(Local_124.f_210, iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (unk_0x159BC3DDA80D71AC(Local_124.f_2[iVar0 /*10*/].f_2))
			{
				if (func_13(Local_124.f_2[iVar0 /*10*/].f_2))
				{
					unk_0xFF9949B46A7C6F95(unk_0x854C404AEB476240(Local_124.f_2[iVar0 /*10*/].f_2), unk_0x539ED6DF32477DE0(unk_0x6750311806FF130A(iParam0)), 1);
					unk_0x191DDA30577F440A(&(Local_124.f_210), iParam0);
				}
			}
			else
			{
				unk_0x191DDA30577F440A(&(Local_124.f_210), iParam0);
			}
			iVar0++;
		}
	}
}

bool func_34(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1146A9AE09CE2B14())
	{
		bVar0 = func_35(-1, 0) == 8;
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

int func_35(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_36();
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

int func_36()
{
	return Global_1312763;
}

void func_37()
{
	struct<3> Var0;
	
	Var0 = { func_40() };
	if (!func_39(Var0))
	{
		func_38(&(Local_124.f_269), Var0, 1, 1103626240);
	}
}

void func_38(var uParam0, struct<3> Param1, int iParam2, int iParam3)
{
	if (!unk_0x6CFCAD853B84B192(*uParam0))
	{
		*uParam0 = unk_0x2F0D1CE923B94A1B(Param1 - Vector(iParam3, iParam3, iParam3), Param1 + Vector(iParam3, iParam3, iParam3), 1f, 0.25f, iParam2, 1);
	}
}

int func_39(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_40()
{
	return func_41(Local_124.f_197 + 1);
}

Vector3 func_41(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	if (!func_42(iParam0))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 1:
			Var0 = { 58.3f, -2560.8f, 5.0046f };
			break;
		
		case 2:
			Var0 = { -1082.958f, -1254.855f, 4.4214f };
			break;
		
		case 3:
			Var0 = { 900.0288f, -1029.762f, 33.9714f };
			break;
		
		case 4:
			Var0 = { 247.7398f, -1950.657f, 22.0817f };
			break;
		
		case 5:
			Var0 = { -404.5349f, 189.8157f, 80.518f };
			break;
		
		case 6:
			Var0 = { -1048.123f, -2017.136f, 12.1616f };
			break;
		
		case 7:
			Var0 = { -1267.888f, -818.313f, 16.0992f };
			break;
		
		case 8:
			Var0 = { -879.1935f, -2731.856f, 12.8285f };
			break;
		
		case 9:
			Var0 = { 274.4458f, -3004f, 4.6994f };
			break;
		
		case 10:
			Var0 = { 1566.514f, -2137.776f, 76.6229f };
			break;
		
		case 11:
			Var0 = { -314.3864f, -2721.792f, 5.0003f };
			break;
		
		case 12:
			Var0 = { 497.1263f, -635.2617f, 23.8849f };
			break;
		
		case 13:
			Var0 = { -546.1532f, -1775.258f, 20.6843f };
			break;
		
		case 14:
			Var0 = { -307.6485f, -1364.914f, 30.2957f };
			break;
		
		case 15:
			Var0 = { 366.4851f, 333.3937f, 102.4653f };
			break;
		
		case 16:
			Var0 = { 921.407f, -1556.423f, 29.7756f };
			break;
		
		case 17:
			Var0 = { 746.1452f, -882.8884f, 24.0639f };
			break;
		
		case 18:
			Var0 = { 1042.462f, -2177.798f, 30.4457f };
			break;
		
		case 19:
			Var0 = { 1013.842f, -2514.939f, 27.3049f };
			break;
		
		case 20:
			Var0 = { -272.0028f, 193.3204f, 84.5697f };
			break;
		
		case 21:
			Var0 = { 549.6728f, -1929.794f, 23.8145f };
			break;
		
		case 22:
			Var0 = { 126.5327f, -2200.172f, 5.0333f };
			break;
	}
	return Var0;
}

int func_42(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_43()
{
	int iVar0;
	
	if (func_440())
	{
		func_66();
		if (!func_65())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < func_30())
		{
			func_44(iVar0);
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < func_30())
		{
			if (!unk_0x159BC3DDA80D71AC(Local_124.f_2[iVar0 /*10*/].f_1))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_44(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	var uVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	
	iVar0 = func_64();
	fVar3 = func_63();
	if (!unk_0x159BC3DDA80D71AC(Local_124.f_2[iParam0 /*10*/].f_1))
	{
		if (unk_0x035BBFB481EB12F2(1))
		{
			if (func_62(iVar0))
			{
				if (func_61(Local_124.f_2[iParam0 /*10*/].f_5, 0f, 0f, 0f, 0))
				{
					if (func_47(iParam0, &Var1, &uVar2))
					{
						Local_124.f_2[iParam0 /*10*/].f_5 = { Var1 };
						Local_124.f_2[iParam0 /*10*/].f_8 = uVar2;
					}
				}
				else if (func_46(&(Local_124.f_2[iParam0 /*10*/].f_1), 22, iVar0, Local_124.f_2[iParam0 /*10*/].f_5, Local_124.f_2[iParam0 /*10*/].f_8, 1, 1, 1))
				{
					unk_0x1B0723EFE914C031(unk_0x8A437068C87289B7(Local_124.f_2[iParam0 /*10*/].f_1), 1);
					unk_0xBE91B077ADADE97F(unk_0x8A437068C87289B7(Local_124.f_2[iParam0 /*10*/].f_1), 1);
					unk_0x2271ED1E65FB75EE(unk_0x8A437068C87289B7(Local_124.f_2[iParam0 /*10*/].f_1), Global_1575024);
					unk_0xB8FD45B9686D7177(unk_0x8A437068C87289B7(Local_124.f_2[iParam0 /*10*/].f_1), 1);
					if ((iParam0 % 2) == 0)
					{
						iVar4 = unk_0x5E7C0A485B91DB87(unk_0x8A437068C87289B7(Local_124.f_2[iParam0 /*10*/].f_1));
						fVar5 = to_float(iVar4);
						if (fVar3 != 0f)
						{
							fVar5 = (fVar5 * fVar3);
						}
						iVar4 = round(fVar5);
						unk_0xF8E5239A2E6E0754(unk_0x8A437068C87289B7(Local_124.f_2[iParam0 /*10*/].f_1), iVar4);
						unk_0xC595907BB71C921D(unk_0x8A437068C87289B7(Local_124.f_2[iParam0 /*10*/].f_1), iVar4, 0);
						unk_0x2BD4A25EBA9A42AD(unk_0x8A437068C87289B7(Local_124.f_2[iParam0 /*10*/].f_1), 100);
						unk_0xD82D50E4AC0D46B9(unk_0x8A437068C87289B7(Local_124.f_2[iParam0 /*10*/].f_1), joaat("weapon_assaultrifle"), 9999999, 0, 1);
					}
					else
					{
						unk_0xD82D50E4AC0D46B9(unk_0x8A437068C87289B7(Local_124.f_2[iParam0 /*10*/].f_1), joaat("weapon_assaultrifle"), 9999999, 0, 1);
					}
					unk_0x7B28A83A0D3DD0F9(unk_0x8A437068C87289B7(Local_124.f_2[iParam0 /*10*/].f_1), 281, 1);
					unk_0xEA480A62F5D29812(unk_0x8A437068C87289B7(Local_124.f_2[iParam0 /*10*/].f_1), 1);
					unk_0x7B28A83A0D3DD0F9(unk_0x8A437068C87289B7(Local_124.f_2[iParam0 /*10*/].f_1), 42, 1);
					unk_0x7BC3A9305442B7FD(unk_0x8A437068C87289B7(Local_124.f_2[iParam0 /*10*/].f_1), 1);
					unk_0xA415F00D0E0DFBCE(unk_0x8A437068C87289B7(Local_124.f_2[iParam0 /*10*/].f_1), 43, 1);
					unk_0xA415F00D0E0DFBCE(unk_0x8A437068C87289B7(Local_124.f_2[iParam0 /*10*/].f_1), 44, 1);
					unk_0x2BDB866C1791F9D7(unk_0x8A437068C87289B7(Local_124.f_2[iParam0 /*10*/].f_1), 1);
					if (func_45(iParam0))
					{
						unk_0xA415F00D0E0DFBCE(unk_0x8A437068C87289B7(Local_124.f_2[iParam0 /*10*/].f_1), 0, 0);
					}
					unk_0x7B28A83A0D3DD0F9(unk_0x8A437068C87289B7(Local_124.f_2[iParam0 /*10*/].f_1), 146, 1);
					unk_0xD478F2D087D53713(unk_0x8A437068C87289B7(Local_124.f_2[iParam0 /*10*/].f_1), Local_124.f_2[iParam0 /*10*/].f_5, 7f, 0, 0);
					unk_0x504B26425DFF773C(unk_0x8A437068C87289B7(Local_124.f_2[iParam0 /*10*/].f_1), 1);
					unk_0x191DDA30577F440A(&(Local_124.f_203), iParam0);
				}
			}
		}
	}
	return 0;
}

int func_45(int iParam0)
{
	switch (Local_124.f_197)
	{
		case 1:
			if (iParam0 == 0 || iParam0 == 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_46(var uParam0, int iParam1, int iParam2, struct<3> Param3, var uParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	if (!unk_0x035BBFB481EB12F2(1))
	{
		return 0;
	}
	iVar0 = unk_0x0FDCFECB2EF2BC1C(iParam1, iParam2, Param3, uParam4, iParam6, bParam5);
	*uParam0 = unk_0x818C6D67AB3F266B(iVar0);
	if (unk_0xB7D6400C89373777(*uParam0))
	{
		unk_0x8B58E7AC53EED9F1(iVar0, iParam7);
		if (unk_0x895470BB92940DC6(iVar0))
		{
			if (bParam5)
			{
				unk_0xFEDD7E9148CF3B3E(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_47(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = iParam0;
	if (!func_61(Local_124.f_103[iVar0 /*5*/], 0f, 0f, 0f, 0))
	{
		if (!Local_124.f_103[iVar0 /*5*/].f_4)
		{
			if (func_48(Local_124.f_103[iVar0 /*5*/], 1f, 1065353216, 1065353216, 1084227584, 0, 0, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
			{
				*uParam1 = { Local_124.f_103[iVar0 /*5*/] };
				*uParam2 = Local_124.f_103[iVar0 /*5*/].f_3;
				Local_124.f_103[iVar0 /*5*/].f_4 = 1;
				return 1;
			}
			else
			{
				if (unk_0x4B1BAFAB7E8F4DA7(Local_124.f_103[iVar0 /*5*/], 1f))
				{
					bVar1 = true;
				}
				else if (unk_0x95F3ABD15748A3D6(Local_124.f_103[iVar0 /*5*/], Local_124.f_103[iVar0 /*5*/].f_1, (Local_124.f_103[iVar0 /*5*/].f_2 + 1f), 1f) || unk_0x95F3ABD15748A3D6(Local_124.f_103[iVar0 /*5*/], 1f))
				{
					bVar1 = true;
				}
				if (bVar1)
				{
					if (!unk_0x234B68AC2E35ED5A(Local_124.f_212, iVar0))
					{
						unk_0x6AF7EE4DD9F8B944(Local_124.f_103[iVar0 /*5*/], 5f, 1, 0, 0, 1);
						unk_0x191DDA30577F440A(&(Local_124.f_212), iVar0);
					}
				}
			}
		}
	}
	return 0;
}

int func_48(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	Global_2405077.f_2 = 0;
	if (fParam1 > 0f)
	{
		if (unk_0x4B1BAFAB7E8F4DA7(Param0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (unk_0x95F3ABD15748A3D6(Param0.x, Param0.f_1, (Param0.f_2 + 1f), fParam2) || unk_0x95F3ABD15748A3D6(Param0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (unk_0x091D6114DC63264E(Param0, fParam3, iParam16))
		{
			return 0;
		}
	}
	Global_2405077.f_2++;
	if (bParam11)
	{
		if (unk_0x1009A332C2986B7C(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405077.f_2++;
	if (fParam12 > 0f)
	{
		if (func_54(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_2405077.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_49(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2405077.f_2++;
	return 1;
}

int func_49(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_1340(unk_0x1146A9AE09CE2B14(), 1, 1))
		{
			if (!unk_0x8B6A925F148E0E94())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0x0BABEFEA577FCFA4(func_51(unk_0x1146A9AE09CE2B14()), Param0, 1) <= (fVar2 + fParam1))
				{
					if (unk_0x3D6C3476988DE6E1(Param0, fParam1))
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
		if (func_1340(iVar1, 1, 1))
		{
			if (!func_34(iVar1, 0) && unk_0xEBB066F8EADD0C1F(unk_0x1146A9AE09CE2B14(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0x1146A9AE09CE2B14()))
				{
					if ((func_50(iVar1) || !bParam8) && !Global_2426865[iVar1 /*449*/].f_268)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!unk_0x7C3E030BC3ED6671(iVar1) == -1)
							{
								if (unk_0x7C3E030BC3ED6671(iVar1) == unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && unk_0x7C3E030BC3ED6671(iVar1) != unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()))) || unk_0x7C3E030BC3ED6671(iVar1) == -1)
							{
								if (unk_0x0BABEFEA577FCFA4(func_51(iVar1), Param0, 1) <= (fVar2 + fParam1))
								{
									if (unk_0xD9A82F3AB1350294(iVar1, Param0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x7C3E030BC3ED6671(iVar1) != iParam6 || unk_0x7C3E030BC3ED6671(iVar1) == -1)
						{
							if (unk_0x0BABEFEA577FCFA4(func_51(iVar1), Param0, 1) <= (fVar2 + fParam1))
							{
								if (unk_0xD9A82F3AB1350294(iVar1, Param0, fParam1))
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

int func_50(int iParam0)
{
	if (unk_0xDC89C3FDCADCA32F(unk_0xD56332194D622ECE(iParam0)) || Global_2426865[iParam0 /*449*/].f_254)
	{
		return 1;
	}
	return 0;
}

Vector3 func_51(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_53() && Global_1590908[iVar0 /*874*/].f_844) && !func_39(Global_1590908[iVar0 /*874*/].f_845))
	{
		return Global_1590908[iVar0 /*874*/].f_845;
	}
	return func_52(iParam0);
}

Vector3 func_52(int iParam0)
{
	return unk_0xD6E677FAD7521410(unk_0xD56332194D622ECE(iParam0), 0);
}

bool func_53()
{
	return Global_2453009.f_19;
}

int func_54(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && unk_0x1146A9AE09CE2B14() != iVar1) || iParam6 == 0)
		{
			if (func_1340(iVar1, bParam2, bParam3))
			{
				if (unk_0xEBB066F8EADD0C1F(unk_0x1146A9AE09CE2B14(), iVar1))
				{
					if (!bParam5 || (!unk_0xECEC7528A52B4EE8(unk_0xD56332194D622ECE(iVar1)) && func_50(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()) != unk_0x7C3E030BC3ED6671(iVar1))) || unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()) == -1)
						{
							if (((unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()) == -1 && uParam7) && bParam4) && func_55(iVar1))
							{
							}
							else if (unk_0x419E13582192CFEA(unk_0xD56332194D622ECE(iVar1)))
							{
								if (unk_0x0BABEFEA577FCFA4(func_52(iVar1), Param0, 1) < fParam1)
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

int func_55(int iParam0)
{
	if (func_60(unk_0x1146A9AE09CE2B14(), iParam0))
	{
		return 1;
	}
	Global_2518253 = { func_59(iParam0) };
	if (unk_0x9B050CE2036A4DAD(&Global_2518253))
	{
		return 1;
	}
	if (func_56(unk_0x1146A9AE09CE2B14(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_56(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_58(iParam0);
	if (!iVar0 == func_57())
	{
		if (iVar0 == func_58(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_57()
{
	return -1;
}

int func_58(int iParam0)
{
	if (iParam0 != func_57())
	{
		return Global_1630816[iParam0 /*597*/].f_11;
	}
	return func_57();
}

struct<13> func_59(int iParam0)
{
	struct<13> Var0;
	
	unk_0x483D665D1287B547(iParam0, &Var0, 13);
	return Var0;
}

int func_60(int iParam0, int iParam1)
{
	if (unk_0x29712F962253A7EB())
	{
		Global_2518253 = { func_59(iParam0) };
		Global_2518266 = { func_59(iParam1) };
		if (unk_0xDA1611E46AAEA71B(&Global_2518253))
		{
			if (unk_0xDA1611E46AAEA71B(&Global_2518266))
			{
				unk_0xEDDAF8F99F371228(&Global_2518183, 35, &Global_2518253);
				unk_0xEDDAF8F99F371228(&Global_2518218, 35, &Global_2518266);
				if (Global_2518183 == Global_2518218)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_61(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.x == Param1.x && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_62(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x16E516CA9C88FF48(iParam0);
	return unk_0xA9C0BBFB9CBB66F1(iParam0);
}

float func_63()
{
	return 2f;
}

int func_64()
{
	int iVar0;
	
	switch (Local_124.f_195)
	{
		case 0:
			iVar0 = joaat("g_m_m_armgoon_01");
			break;
		
		case 1:
			iVar0 = joaat("g_m_m_mexboss_01");
			break;
		
		case 2:
			iVar0 = joaat("g_m_y_korean_02");
			break;
	}
	return iVar0;
}

int func_65()
{
	if (!unk_0x159BC3DDA80D71AC(Local_124.f_2[0 /*10*/].f_2))
	{
		return 0;
	}
	if (!unk_0x159BC3DDA80D71AC(Local_124.f_2[0 /*10*/].f_1))
	{
		return 0;
	}
	if (!unk_0x159BC3DDA80D71AC(Local_124.f_2[1 /*10*/].f_1))
	{
		return 0;
	}
	return 1;
}

int func_66()
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	var uVar3;
	struct<31> Var4;
	struct<3> Var5;
	
	iVar0 = func_202();
	iVar1 = func_64();
	if (!unk_0x159BC3DDA80D71AC(Local_124.f_2[0 /*10*/].f_2))
	{
		if (unk_0xA8911798335DCDA2(1))
		{
			if (func_62(iVar0))
			{
				if (!func_61(Local_124.f_262, 0f, 0f, 0f, 0))
				{
					Var2 = { Local_124.f_262 };
					uVar3 = Local_124.f_265;
					if (!unk_0x234B68AC2E35ED5A(Local_124.f_211, 0))
					{
						unk_0x6AF7EE4DD9F8B944(Var2, 5f, 1, 0, 0, 1);
						unk_0x191DDA30577F440A(&(Local_124.f_211), 0);
					}
					if (func_199(&(Local_124.f_2[0 /*10*/].f_2), iVar0, Var2, uVar3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
					{
						unk_0x577BE43A512C41FE(unk_0x8A437068C87289B7(Local_124.f_2[0 /*10*/].f_2), 1);
						func_198(unk_0x854C404AEB476240(Local_124.f_2[0 /*10*/].f_2));
						unk_0xED4E91A1FC7ABBF6(unk_0x854C404AEB476240(Local_124.f_2[0 /*10*/].f_2), 0);
						unk_0x410F7E904016F85F(unk_0x854C404AEB476240(Local_124.f_2[0 /*10*/].f_2), 0, 0);
						unk_0xD4DF29F3D7B97053(unk_0x854C404AEB476240(Local_124.f_2[0 /*10*/].f_2), 1);
						unk_0x1F7ED1C13023483B(unk_0x854C404AEB476240(Local_124.f_2[0 /*10*/].f_2), 0);
						unk_0xAC2B08493719B297(unk_0x854C404AEB476240(Local_124.f_2[0 /*10*/].f_2), 1);
						unk_0x47DE5E87A1AC7CBD(unk_0x854C404AEB476240(Local_124.f_2[0 /*10*/].f_2), 0.08f);
						unk_0xC595907BB71C921D(unk_0x854C404AEB476240(Local_124.f_2[0 /*10*/].f_2), Global_262145.f_15262, 0);
						unk_0x1FB6C0DF282CC98A(unk_0x854C404AEB476240(Local_124.f_2[0 /*10*/].f_2), 1);
						unk_0x4551B6FEB638C979(unk_0x854C404AEB476240(Local_124.f_2[0 /*10*/].f_2), 1);
						unk_0x9467B0584C318BAD(unk_0x854C404AEB476240(Local_124.f_2[0 /*10*/].f_2), 1);
						unk_0x70B2AB1977EB9053(unk_0x854C404AEB476240(Local_124.f_2[0 /*10*/].f_2), 2, 2);
						unk_0x70B2AB1977EB9053(unk_0x854C404AEB476240(Local_124.f_2[0 /*10*/].f_2), 3, 2);
					}
				}
				else
				{
					Var4.f_4 = 1125515264;
					Var4.f_5 = 1;
					Var4.f_6 = 1;
					Var4.f_8 = 1082130432;
					Var4.f_9 = 1176255488;
					Var4.f_10 = 1;
					Var4.f_13 = 1;
					Var4.f_15 = 2;
					Var4.f_22 = 2;
					Var4.f_25 = 1;
					Var4.f_26 = 1;
					Var4.f_29 = 1123024896;
					Var4.f_30 = 1;
					Var4 = 0f;
					Var4.f_1 = 0;
					Var4.f_4 = 200f;
					Var4.f_5 = 1;
					Var4.f_6 = 1;
					Var4.f_12 = 1;
					Var4.f_3 = 1;
					Var5 = { func_196(Local_124.f_2[0 /*10*/].f_5, Local_124.f_2[0 /*10*/].f_8, 20f) };
					if (func_68(Local_124.f_2[0 /*10*/].f_5, Var5, iVar0, 0, &(Local_124.f_262), &(Local_124.f_2[0 /*10*/].f_8), &Var4))
					{
						Local_124.f_265 = Local_124.f_2[0 /*10*/].f_8;
					}
				}
			}
		}
	}
	if (unk_0x159BC3DDA80D71AC(Local_124.f_2[0 /*10*/].f_2))
	{
		if (!unk_0x159BC3DDA80D71AC(Local_124.f_2[0 /*10*/].f_1))
		{
			if (unk_0x035BBFB481EB12F2(1))
			{
				if (func_62(iVar1))
				{
					if (func_67(&(Local_124.f_2[0 /*10*/].f_1), Local_124.f_2[0 /*10*/].f_2, 22, iVar1, -1, 1, 1, 1))
					{
						unk_0x1B0723EFE914C031(unk_0x8A437068C87289B7(Local_124.f_2[0 /*10*/].f_1), 1);
						unk_0xEA44C65D5434D223(unk_0x8A437068C87289B7(Local_124.f_2[0 /*10*/].f_1), 1, 0);
						unk_0xBE91B077ADADE97F(unk_0x8A437068C87289B7(Local_124.f_2[0 /*10*/].f_1), 1);
						unk_0x2271ED1E65FB75EE(unk_0x8A437068C87289B7(Local_124.f_2[0 /*10*/].f_1), Global_1575024);
						unk_0x7B28A83A0D3DD0F9(unk_0x8A437068C87289B7(Local_124.f_2[0 /*10*/].f_1), 42, 1);
						unk_0xA415F00D0E0DFBCE(unk_0x8A437068C87289B7(Local_124.f_2[0 /*10*/].f_1), 3, 0);
						unk_0xA415F00D0E0DFBCE(unk_0x8A437068C87289B7(Local_124.f_2[0 /*10*/].f_1), 2, 1);
					}
				}
			}
		}
	}
	if (unk_0x159BC3DDA80D71AC(Local_124.f_2[0 /*10*/].f_1))
	{
		if (!unk_0x159BC3DDA80D71AC(Local_124.f_2[1 /*10*/].f_1))
		{
			if (unk_0x035BBFB481EB12F2(1))
			{
				if (func_62(iVar1))
				{
					if (func_67(&(Local_124.f_2[1 /*10*/].f_1), Local_124.f_2[0 /*10*/].f_2, 22, iVar1, 0, 1, 1, 1))
					{
						unk_0x1B0723EFE914C031(unk_0x8A437068C87289B7(Local_124.f_2[1 /*10*/].f_1), 1);
						unk_0xEA44C65D5434D223(unk_0x8A437068C87289B7(Local_124.f_2[1 /*10*/].f_1), 1, 0);
						unk_0xBE91B077ADADE97F(unk_0x8A437068C87289B7(Local_124.f_2[1 /*10*/].f_1), 1);
						unk_0x2271ED1E65FB75EE(unk_0x8A437068C87289B7(Local_124.f_2[1 /*10*/].f_1), Global_1575024);
						unk_0x7B28A83A0D3DD0F9(unk_0x8A437068C87289B7(Local_124.f_2[1 /*10*/].f_1), 42, 1);
						unk_0xA415F00D0E0DFBCE(unk_0x8A437068C87289B7(Local_124.f_2[1 /*10*/].f_1), 3, 0);
						unk_0xA415F00D0E0DFBCE(unk_0x8A437068C87289B7(Local_124.f_2[1 /*10*/].f_1), 2, 1);
						unk_0xA415F00D0E0DFBCE(unk_0x8A437068C87289B7(Local_124.f_2[1 /*10*/].f_1), 5, 1);
						unk_0xD82D50E4AC0D46B9(unk_0x8A437068C87289B7(Local_124.f_2[1 /*10*/].f_1), joaat("weapon_microsmg"), 9999999, 0, 1);
						Local_124.f_2[1 /*10*/].f_2 = Local_124.f_2[0 /*10*/].f_2;
					}
				}
			}
		}
	}
	return 0;
}

int func_67(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x035BBFB481EB12F2(1))
	{
		return 0;
	}
	if (!unk_0xB7D6400C89373777(uParam1))
	{
		return 0;
	}
	if (!unk_0xBFCE58B2B3249999(unk_0x854C404AEB476240(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x818C6D67AB3F266B(unk_0x42F3C85A00B4FC7B(unk_0x854C404AEB476240(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0xB7D6400C89373777(*uParam0))
	{
		unk_0x8B58E7AC53EED9F1(unk_0x8A437068C87289B7(*uParam0), iParam7);
		if (unk_0x895470BB92940DC6(unk_0x8A437068C87289B7(*uParam0)))
		{
			if (bParam5)
			{
				unk_0xFEDD7E9148CF3B3E(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_68(struct<3> Param0, struct<3> Param1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6)
{
	bool bVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<61> Var5;
	struct<61> Var6;
	
	bVar0 = false;
	if (uParam6->f_14)
	{
		if (uParam6->f_25)
		{
			uParam6->f_25 = 0;
		}
	}
	if (!func_193())
	{
		return 0;
	}
	if (func_192() && !Global_2405077.f_679 == unk_0x2053F6ACFD4ED4BC())
	{
		if (!Global_2405077.f_675 == 0)
		{
			Global_2405077.f_675 = 0;
			func_191();
			func_190();
		}
	}
	if (!unk_0x62D18D65FE22FF39() == Global_2405077.f_674)
	{
		if (!Global_2405077.f_675 == 0)
		{
			if (unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Global_2405077.f_678) < func_189(0))
			{
				return 0;
			}
			else
			{
				Global_2405077.f_675 = 0;
			}
		}
	}
	else
	{
		if (unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Global_2405077.f_676) > 30000)
		{
			Global_2405077.f_675 = 0;
		}
		if (!Global_2405077.f_675 == 0)
		{
			if (unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Global_2405077.f_678) > func_189(1))
			{
				Global_2405077.f_675 = 0;
			}
		}
	}
	if (uParam6->f_6)
	{
		if (func_182(Param0))
		{
			if (func_181(&Param0, 1))
			{
			}
		}
	}
	if (!Global_2405077.f_675 == 0)
	{
		if (vdist(Global_2405077.f_694, Param0) > 50f)
		{
			return 0;
		}
		if (Global_2405077.f_697 != iParam2)
		{
			return 0;
		}
	}
	unk_0xABAA7F8FD10DCDF2((Param0.x - 100f), (Param0.f_1 - 100f), (Param0.x + 100f), (Param0.f_1 + 100f));
	if (Global_2405077.f_675 == 0)
	{
		Global_2405077.f_681 = 0;
		Global_2405077.f_676 = unk_0xCB3024ED32EBF9EC();
		Global_2405077.f_674 = unk_0x62D18D65FE22FF39();
		Global_2405077.f_678 = unk_0xCB3024ED32EBF9EC();
		Global_2405077.f_694 = { Param0 };
		Global_2405077.f_697 = iParam2;
		Global_2405077.f_680 = unk_0xCB3024ED32EBF9EC();
		func_180();
		func_191();
		if (!uParam6->f_27 || (((((((func_179(Param0, 1, 1133903872) && !uParam6->f_28) && !Global_2544210.f_924) && !Global_2544210.f_913) && !Global_2544210.f_921) && !Global_2544210.f_925) && !Global_2544210.f_933) && !Global_2544210.f_945))
		{
			func_160(Param0, iParam2);
		}
		if (func_145(Param0))
		{
			func_160(Param0, iParam2);
		}
		Global_2405077.f_675 = 2;
	}
	switch (Global_2405077.f_675)
	{
		case 2:
			if (unk_0xA1CB00B61C47B900((Param0.x - 100f), (Param0.f_1 - 100f), (Param0.x + 100f), (Param0.f_1 + 100f)))
			{
				Global_2405077.f_682 = { Param0 };
				Global_2405077.f_685 = 0f;
				if (Global_2544210.f_924)
				{
					fVar2 = 10f;
					fVar3 = 5f;
					fVar4 = 5f;
				}
				else
				{
					fVar2 = 4f;
					fVar3 = 1f;
					fVar4 = 1f;
				}
				if (((uParam6->f_3 && func_48(Param0, fVar2, fVar3, fVar4, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam6->f_7) && !func_143(Param0, *uParam5, iParam2, unk_0x1146A9AE09CE2B14(), 0))
				{
					Global_2405077.f_682 = { Param0 };
					Global_2405077.f_685 = *uParam5;
				}
				else
				{
					Var5.f_6 = 1082130432;
					Var5.f_7 = 1176255488;
					Var5.f_8 = 1;
					Var5.f_10 = 1;
					Var5.f_13 = 1;
					Var5.f_15 = 1;
					Var5.f_16 = 1;
					Var5.f_31 = 1;
					Var5.f_34 = joaat("tailgater");
					Var5.f_38 = 2;
					Var5.f_45 = 2;
					Var5.f_49 = 1123024896;
					Var5.f_53 = 999;
					Var5.f_54 = 1176256410;
					Var5.f_55 = 1;
					Var5.f_56 = 1;
					Var5.f_57 = 1;
					Var5.f_9 = iParam3;
					Var5.f_3 = 7f;
					Var5.f_10 = uParam6->f_5;
					Var5.f_4 = *uParam6;
					Var5.f_13 = uParam6->f_1;
					Var5.f_14 = uParam6->f_2;
					Var5.f_5 = uParam6->f_4;
					Var5.f_15 = uParam6->f_6;
					Var5.f_11 = uParam6->f_7;
					Var5.f_6 = uParam6->f_8;
					Var5.f_7 = uParam6->f_9;
					Var5.f_16 = uParam6->f_10;
					Var5.f_17 = uParam6->f_11;
					Var5 = { Param1 };
					Var5.f_12 = 1;
					Var5.f_34 = iParam2;
					Var5.f_31 = uParam6->f_13;
					if (uParam6->f_32 && Global_2405077.f_681 > 0)
					{
						Var5.f_30 = 0;
						Var5.f_29 = 1;
					}
					else
					{
						Var5.f_30 = uParam6->f_30;
						Var5.f_29 = uParam6->f_31;
					}
					Var5.f_48 = uParam6->f_14;
					Var5.f_56 = uParam6->f_25;
					Var5.f_57 = uParam6->f_26;
					Var5.f_49 = uParam6->f_29;
					Var5.f_59 = uParam6->f_33;
					Var5.f_60 = uParam6->f_34;
					iVar1 = 0;
					while (iVar1 < 2)
					{
						Var5.f_38[iVar1 /*3*/] = { uParam6->f_15[iVar1 /*3*/] };
						Var5.f_45[iVar1] = uParam6->f_22[iVar1];
						iVar1++;
					}
					func_89(&(Global_2405077.f_682), &(Global_2405077.f_685), &Var5);
				}
				func_86(Global_2405077.f_682, Global_2405077.f_685, iParam2, &(Global_2405077.f_672));
				Global_2405077.f_670 = 0;
				Global_2405077.f_671 = 0;
				Global_2405077.f_681++;
				Global_2405077.f_677 = unk_0xCB3024ED32EBF9EC();
				Global_2405077.f_676 = unk_0xCB3024ED32EBF9EC();
				Global_2405077.f_675 = 3;
			}
			break;
		
		case 3:
			if (Global_2405077.f_670)
			{
				if (Global_2405077.f_672 == Global_2405077.f_673)
				{
					if (Global_2405077.f_671)
					{
						if (uParam6->f_12 && !uParam6->f_11)
						{
							if (func_85(Global_2405077.f_682, Global_2405077.f_685, iParam2, 1, 1036831949))
							{
								Global_2405077.f_675 = 4;
								Global_2405077.f_699 = unk_0xCB3024ED32EBF9EC();
							}
							else
							{
								bVar0 = true;
							}
						}
						else
						{
							bVar0 = true;
						}
					}
					else
					{
						func_83(Global_2405077.f_682, 0);
						func_82(-1);
					}
				}
				else
				{
					Global_2405077.f_670 = 0;
					Global_2405077.f_671 = 0;
				}
			}
			else if (unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Global_2405077.f_677) > 3000)
			{
				func_82(-1);
			}
			break;
		
		case 4:
			if (uParam6->f_12 && !uParam6->f_11)
			{
				if (unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Global_2405077.f_699) < 10000)
				{
					if (unk_0xB02FAE47395D3028(Global_2405077.f_698))
					{
						if (unk_0x61C86D1F86F629E4(Global_2405077.f_698))
						{
							if (!unk_0xED1E23A658F29D8D(Global_2405077.f_698))
							{
								if (func_81(Global_2405077.f_682, Global_2405077.f_685, iParam2, unk_0x1146A9AE09CE2B14(), 0) || func_70(Global_2405077.f_682, Global_2405077.f_685, iParam2, 1, 0, 0, 0, 1, 0))
								{
									func_83(Global_2405077.f_682, 0);
									func_82(-1);
								}
								else
								{
									bVar0 = true;
								}
							}
							else
							{
								func_83(Global_2405077.f_682, 0);
								func_82(-1);
							}
						}
					}
					else
					{
						func_82(-1);
					}
				}
				else
				{
					func_82(1);
				}
			}
			else
			{
				bVar0 = true;
			}
			break;
		
		case 5:
			Global_2405077.f_682 = { Param0 };
			Global_2405077.f_685 = 0f;
			Var6.f_6 = 1082130432;
			Var6.f_7 = 1176255488;
			Var6.f_8 = 1;
			Var6.f_10 = 1;
			Var6.f_13 = 1;
			Var6.f_15 = 1;
			Var6.f_16 = 1;
			Var6.f_31 = 1;
			Var6.f_34 = joaat("tailgater");
			Var6.f_38 = 2;
			Var6.f_45 = 2;
			Var6.f_49 = 1123024896;
			Var6.f_53 = 999;
			Var6.f_54 = 1176256410;
			Var6.f_55 = 1;
			Var6.f_56 = 1;
			Var6.f_57 = 1;
			Var6.f_9 = iParam3;
			Var6.f_3 = 3.5f;
			Var6.f_10 = uParam6->f_5;
			Var6.f_4 = *uParam6;
			Var6.f_12 = 1;
			Var6.f_13 = 0;
			Var6.f_15 = uParam6->f_6;
			Var6.f_11 = uParam6->f_7;
			Var6.f_6 = uParam6->f_8;
			Var6.f_7 = uParam6->f_9;
			Var6 = { Param1 };
			Var6.f_34 = iParam2;
			Var6.f_31 = uParam6->f_13;
			Var6.f_30 = 1;
			Var6.f_48 = uParam6->f_14;
			Var6.f_56 = uParam6->f_25;
			Var6.f_57 = uParam6->f_26;
			Var6.f_30 = uParam6->f_30;
			Var6.f_29 = uParam6->f_31;
			Var6.f_59 = uParam6->f_33;
			Var6.f_60 = uParam6->f_34;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				Var6.f_38[iVar1 /*3*/] = { uParam6->f_15[iVar1 /*3*/] };
				Var6.f_45[iVar1] = uParam6->f_22[iVar1];
				iVar1++;
			}
			Var6.f_49 = uParam6->f_29;
			func_89(&(Global_2405077.f_682), &(Global_2405077.f_685), &Var6);
			Global_2405077.f_675 = 6;
			break;
		
		case 6:
			bVar0 = true;
			break;
	}
	Global_2405077.f_694 = { Param0 };
	Global_2405077.f_697 = iParam2;
	Global_2405077.f_678 = unk_0xCB3024ED32EBF9EC();
	if (bVar0)
	{
		Global_2405077.f_515 = 0;
		*uParam4 = { Global_2405077.f_682 };
		*uParam5 = Global_2405077.f_685;
		func_69(1);
		return 1;
	}
	return 0;
}

void func_69(bool bParam0)
{
	Global_2405077.f_675 = 0;
	func_180();
	func_191();
	if (bParam0)
	{
		func_190();
	}
}

int func_70(struct<3> Param0, float fParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	float fVar6;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam7 == 1 && unk_0x1146A9AE09CE2B14() != iVar1) || iParam7 == 0)
		{
			if (func_1340(iVar1, bParam3, bParam4))
			{
				if (unk_0xEBB066F8EADD0C1F(unk_0x1146A9AE09CE2B14(), iVar1))
				{
					if (!bParam6 || (!unk_0xECEC7528A52B4EE8(unk_0xD56332194D622ECE(iVar1)) && func_50(iVar1)))
					{
						if ((!bParam5 || (bParam5 == 1 && unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()) != unk_0x7C3E030BC3ED6671(iVar1))) || unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()) == -1)
						{
							if (((unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()) == -1 && iParam8) && bParam5) && func_55(iVar1))
							{
							}
							else if (unk_0x419E13582192CFEA(unk_0xD56332194D622ECE(iVar1)))
							{
								fVar2 = 0.1f;
								if (unk_0xC49311A2A500FF09(unk_0xD56332194D622ECE(iVar1), 0))
								{
									iVar3 = unk_0x75B58B38E45C6F9A(unk_0xD56332194D622ECE(iVar1), 0);
									if (unk_0x419E13582192CFEA(iVar3) && !unk_0xE50EB54E0F21BED0(iVar3, 0))
									{
										iVar4 = unk_0x6471F4759775FCA4(iVar3);
										Var5 = { unk_0xD6E677FAD7521410(iVar3, 0) };
										fVar6 = unk_0xA8D713A937F31250(iVar3);
										if (func_80(Param0, fParam1, iParam2, Var5, fVar6, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_71(func_52(iVar1), Param0, fParam1, iParam2, fVar2))
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

int func_71(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	if (vdist(Param0, Param1) < func_79(iParam3, 1008981770))
	{
		func_72(Param1, fParam2, iParam3, &Var0, &Var1, &fVar2, fParam4);
		if (unk_0x09C4C80EA1D5B2F7(Param0, Var0, Var1, fVar2, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_72(struct<3> Param0, float fParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	
	Var0 = { 0f, 1f, 0f };
	func_78(&Var0, 0f, 0f, fParam1);
	Var0 = { Var0 / FtoV(vmag(Var0)) };
	func_73(iParam2, &Var1, &Var2, 1086324736, 1080033280, 1077936128);
	Var3 = { Param0 + Var0 * FtoV((Var2.f_1 + fParam6)) };
	Var3.f_2 = (Var3.f_2 - ((0.5f * unk_0x0BCA9ADE67DF9DD8((Var2.f_2 - Var1.f_2))) + fParam6));
	Var4 = { Param0 - Var0 * FtoV(((Var1.f_1 * -1f) + fParam6)) };
	Var4.f_2 = (Var4.f_2 + ((0.5f * unk_0x0BCA9ADE67DF9DD8((Var2.f_2 - Var1.f_2))) + fParam6));
	*uParam3 = { Var3 };
	*uParam4 = { Var4 };
	*uParam5 = unk_0x0BCA9ADE67DF9DD8((Var2.x - Var1.x));
}

void func_73(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (unk_0x3F1DFD4C1BC6827A(iParam0))
	{
		unk_0xC78A38E5FBC66080(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_76(iParam0);
		if (iVar0 != 0)
		{
			func_74(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}
	if (vmag(*uParam1) <= 0.01f || vmag(*uParam2) <= 0.01f)
	{
		if (iParam0 == joaat("kosatka"))
		{
			if (fParam4 < 20.7f)
			{
				fParam4 = 20.7f;
			}
			if (fParam3 < 137.2f)
			{
				fParam3 = 137.2f;
			}
			if (fParam5 < 21.1f)
			{
				fParam5 = 21.1f;
			}
		}
		*uParam1 = (0f - (fParam4 * 0.5f));
		*uParam2 = (0f + (fParam4 * 0.5f));
		uParam1->f_1 = (0f - (fParam3 * 0.5f));
		uParam2->f_1 = (0f + (fParam3 * 0.5f));
		uParam1->f_2 = (0f - (fParam5 * 0.5f));
		uParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_74(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_75(iParam0, &Global_1315836);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x3F1DFD4C1BC6827A(Global_1315836[iVar0]))
		{
			unk_0xC78A38E5FBC66080(Global_1315836[iVar0], &(Global_1315840[iVar0 /*3*/]), &(Global_1315847[iVar0 /*3*/]));
		}
		if (vmag(Global_1315840[iVar0 /*3*/]) <= 0.01f || vmag(Global_1315847[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1315840[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1315847[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1315840[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1315847[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1315840[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1315847[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1315854[iVar0] = (Global_1315847[iVar0 /*3*/] - Global_1315840[iVar0 /*3*/]);
		Global_1315857[iVar0] = (Global_1315847[iVar0 /*3*/].f_1 - Global_1315840[iVar0 /*3*/].f_1);
		Global_1315860[iVar0] = (Global_1315847[iVar0 /*3*/].f_2 - Global_1315840[iVar0 /*3*/].f_2);
		if (Global_1315854[iVar0] > Global_1315863)
		{
			Global_1315863 = Global_1315854[iVar0];
		}
		if (Global_1315860[iVar0] > Global_1315864)
		{
			Global_1315864 = Global_1315860[iVar0];
		}
		iVar0++;
	}
	Global_1315865 = (Global_1315863 * -0.5f);
	Global_1315868 = (Global_1315863 * 0.5f);
	Global_1315865.f_1 = ((((0.5f * Global_1315857[0]) + Global_1315857[1]) + Global_1315836.f_3) * -1f);
	Global_1315868.f_1 = (0.5f * Global_1315857[0]);
	Global_1315865.f_2 = (Global_1315860[0] * -0.5f);
	Global_1315868.f_2 = (Global_1315860[0] * 0.5f);
	*uParam1 = { Global_1315865 };
	*uParam2 = { Global_1315868 };
}

void func_75(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = joaat("hauler2");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 2:
			(*uParam1)[0] = joaat("phantom3");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 3:
			(*uParam1)[0] = joaat("nightshark");
			(*uParam1)[1] = joaat("trailersmall2");
			uParam1->f_3 = 0.5f;
			break;
	}
}

int func_76(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_77(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_77(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_78(var uParam0, struct<3> Param1)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	
	fVar0 = cos(Param1.x);
	fVar1 = sin(Param1.x);
	Var2.x = *uParam0;
	Var2.f_1 = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	Var2.f_2 = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { Var2 };
	fVar0 = cos(Param1.f_1);
	fVar1 = sin(Param1.f_1);
	Var2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	Var2.f_1 = uParam0->f_1;
	Var2.f_2 = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { Var2 };
	fVar0 = cos(Param1.f_2);
	fVar1 = sin(Param1.f_2);
	Var2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	Var2.f_1 = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	Var2.f_2 = uParam0->f_2;
	*uParam0 = { Var2 };
}

float func_79(int iParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_73(iParam0, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
	Var2 = { Var1 - Var0 };
	fVar3 = (sqrt(((((Var2.x * 0.5f) * (Var2.x * 0.5f)) + ((Var2.f_1 * 0.5f) * (Var2.f_1 * 0.5f))) + ((Var2.f_2 * 0.5f) * (Var2.f_2 * 0.5f)))) + fParam1);
	return fVar3;
}

int func_80(struct<3> Param0, float fParam1, int iParam2, struct<3> Param3, float fParam4, int iParam5, int iParam6)
{
	if (func_71(Param0, Param3, fParam4, iParam5, 1036831949))
	{
		return 1;
	}
	func_72(Param0, fParam1, iParam2, &Global_1713901, &(Global_1713901.f_3), &(Global_1713901.f_6), 1036831949);
	func_72(Param3, fParam4, iParam5, &(Global_1713901.f_7), &(Global_1713901.f_10), &(Global_1713901.f_13), 1036831949);
	if (unk_0x55D9593FF40BF91B(Global_1713901, Global_1713901.f_3, Global_1713901.f_6, Global_1713901.f_7, Global_1713901.f_10, Global_1713901.f_13))
	{
		return 1;
	}
	return 0;
}

int func_81(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (func_1340(iVar1, 0, 1) && func_1340(iParam3, 0, 1))
			{
				if (Global_2418033.f_261[iVar0])
				{
					if (func_71(Global_2418033.f_131[iVar0 /*3*/], Param0, fParam1, iParam2, 1036831949))
					{
						return 1;
					}
				}
				else if (func_71(func_52(iVar1), Param0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2418033.f_261[iVar0])
			{
				if (func_71(Global_2418033.f_131[iVar0 /*3*/], Param0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (func_1340(iVar1, 0, 0))
			{
				if (unk_0x419E13582192CFEA(unk_0xD56332194D622ECE(iVar1)))
				{
					if (func_71(func_52(iVar1), Param0, fParam1, iParam2, 1036831949))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_82(int iParam0)
{
	if (Global_2405077.f_681 < 20 && unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Global_2405077.f_680) < 30000)
	{
		if (iParam0 == -1 || (iParam0 > -1 && Global_2405077.f_681 < iParam0))
		{
			Global_2405077.f_675 = 2;
		}
		else
		{
			Global_2405077.f_675 = 5;
		}
	}
	else
	{
		Global_2405077.f_675 = 5;
	}
}

void func_83(struct<3> Param0, int iParam1)
{
	struct<3> Var0;
	
	if (iParam1 == 0 && func_84(Param0, 0.01f))
	{
		return;
	}
	if (iParam1 < 30 && vmag(Param0) > 0f)
	{
		Var0 = { Global_2405077.f_2735[iParam1 /*3*/] };
		Global_2405077.f_2735[iParam1 /*3*/] = { Param0 };
		func_83(Var0, iParam1 + 1);
	}
}

int func_84(struct<3> Param0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (vdist(Param0, Global_2405077.f_2735[iVar0 /*3*/]) < fParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_85(struct<3> Param0, float fParam1, int iParam2, bool bParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var1;
	var uVar2;
	int iVar3;
	float fVar4;
	
	if (!unk_0x443E2CA72E118E64())
	{
		return 0;
	}
	else
	{
		func_191();
		iVar3 = 0;
		while (iVar3 < 3)
		{
			if (Global_2405077.f_686[iVar3] == -1 && unk_0x443E2CA72E118E64())
			{
				func_72(Param0, fParam1, iParam2, &Var0, &Var1, &uVar2, fParam4);
				if (bParam3)
				{
					fVar4 = unk_0x0BCA9ADE67DF9DD8((Var0.f_2 - Var1.f_2));
					Var0.f_2 = (Var0.f_2 + ((fVar4 * 0.5f) - 2f));
					Var1.f_2 = (Var1.f_2 + (fVar4 * 0.5f));
				}
				Global_2405077.f_686[iVar3] = unk_0xC7776239A391CCD0(Var0, Var1, fParam4);
				Global_2405077.f_690[iVar3] = unk_0x62D18D65FE22FF39();
				Global_2405077.f_698 = Global_2405077.f_686[iVar3];
				return 1;
			}
			iVar3++;
		}
	}
	return 0;
}

void func_86(struct<3> Param0, var uParam1, int iParam2, var uParam3)
{
	struct<8> Var0;
	
	*uParam3 = func_88(&Param0, &uParam1, &iParam2);
	Var0 = 1926582096;
	Var0.f_1 = unk_0x1146A9AE09CE2B14();
	Var0.f_2 = { Param0 };
	Var0.f_5 = uParam1;
	Var0.f_6 = iParam2;
	Var0.f_7 = *uParam3;
	unk_0xA5C82A39FF8ED272(1, &Var0, 8, func_87(1, 1));
}

var func_87(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xC502CD39B4994F3A(iVar1);
		if (func_1340(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x1146A9AE09CE2B14() || iParam0)
			{
				if (bParam1)
				{
					unk_0x191DDA30577F440A(&uVar0, iVar1);
				}
				else if (!func_34(iVar2, 0))
				{
					unk_0x191DDA30577F440A(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_88(var uParam0, var uParam1, var uParam2)
{
	char cVar0[64];
	int iVar1;
	
	StringCopy(&cVar0, "", 64);
	StringIntConCat(&cVar0, round(*uParam0), 64);
	StringIntConCat(&cVar0, round(uParam0->f_1), 64);
	StringIntConCat(&cVar0, round(uParam0->f_2), 64);
	StringIntConCat(&cVar0, round(*uParam1), 64);
	StringIntConCat(&cVar0, *uParam2, 64);
	iVar1 = unk_0x15173FB88ABC94F9(&cVar0);
	return iVar1;
}

void func_89(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_2405077.f_1753 > 0)
	{
		iVar0 = 0;
		while (func_138(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			uParam2->f_33 = 0;
		}
		else
		{
			return;
		}
	}
	iVar0 = 0;
	while (func_90(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_90(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	float fVar20;
	int iVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	struct<3> Var25;
	var uVar26;
	struct<3> Var27;
	float fVar28;
	bool bVar29;
	
	iVar0 = 0;
	if (!vmag(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_134(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	}
	if (uParam2->f_51)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_48)
	{
		if (func_129(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
	}
	iVar3 = 0;
	iVar8 = 1;
	if (uParam2->f_11)
	{
		iVar3 += 2;
		iVar3++;
		iVar8 = 0;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar3++;
		iVar8 = 0;
	}
	iVar3 += 4;
	fVar11 = 3f;
	fVar12 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			fVar11 = 3f;
			fVar12 = 5f;
			break;
		
		case 1:
			fVar11 = 2.75f;
			fVar12 = 7.5f;
			break;
		
		default:
			fVar11 = 2.5f;
			fVar12 = 10f;
			break;
	}
	iVar13 = 0;
	Global_2412555.f_162 = 0;
	Global_2412555.f_163 = 0;
	Global_2412555.f_164 = -99;
	Global_2412555.f_165 = { 0f, 0f, 0f };
	iVar14 = 0;
	while (iVar14 < 40)
	{
		Global_2412555[iVar14 /*3*/] = { 0f, 0f, 0f };
		Global_2412555.f_121[iVar14] = 0f;
		iVar14++;
	}
	iVar15 = 1;
	if (func_76(uParam2->f_34) != 0)
	{
		iVar15 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar6 = unk_0xA10A963F310E9A56(*uParam0, (iVar0 * iVar15), &fVar2, &iVar7, iVar3, fVar11, fVar12);
		if (unk_0x197809C7C480B379(iVar6))
		{
			unk_0x94D607F083224BCF(iVar6, &Var1);
			bVar10 = false;
			if (Global_2412555.f_164 == iVar6)
			{
				bVar10 = true;
			}
			Global_2412555.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !unk_0x4664EA53DEDF81DD(iVar6)) || unk_0x16EF1D267886F0A5(iVar6))
			{
				unk_0x8748E0122DD45064(Var1, &uVar4, &uVar5);
				if (vdist(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_122(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar5 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar5 & 16 == 0)
							{
								if ((uVar5 & 128 == 0 && uVar5 & 256 == 0) && uVar5 & 512 == 0)
								{
									if (!func_119(Var1))
									{
										Var1 = { func_114(Var1, &fVar2, iVar7, uParam2->f_9, *uParam2, iVar8, uParam2->f_11, uParam2->f_34, &bVar9, bVar10, 1, uParam2->f_51, uParam2->f_60) };
										if (vmag(Var1) > 0f)
										{
											if (!func_113(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_109(Var1, uParam2))
														{
															if ((uParam2->f_48 && !func_129(&Var1, 0)) || uParam2->f_48 == 0)
															{
																bVar16 = true;
																if (!bVar10)
																{
																	if (bVar9)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar16 = false;
																	}
																}
																if (vmag(Var1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && vdist(Var1.x, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																	{
																		if ((uParam2->f_12 && !func_108(Var1, fVar2, uParam2->f_34, unk_0x1146A9AE09CE2B14(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_134(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar17 = uParam2->f_31;
																					bVar18 = true;
																					iVar19 = 1;
																					fVar20 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						fVar20 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar20 = (fVar20 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar18 = true;
																						iVar19 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar20 = (fVar20 * 0.375f);
																							}
																						}
																					}
																					iVar21 = 0;
																					if (!func_107(Var1, fVar2, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_48(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar21 = 1;
																							}
																						}
																						else if (func_48(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_70(Var1, fVar2, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																						{
																							iVar21 = 1;
																						}
																					}
																					if (iVar21 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar23 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar22 = func_99(Var1, uParam2->f_54, &fVar23);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar22 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar22 < uParam2->f_53)
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2412555.f_162)
																										{
																											Global_2412555[iVar14 /*3*/] = { 0f, 0f, 0f };
																											Global_2412555.f_121[iVar14] = 0f;
																											iVar14++;
																										}
																										Global_2412555.f_162 = 0;
																										uParam2->f_53 = iVar22;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2412555.f_162 == 0)
																									{
																										Global_2412555[0 /*3*/] = { Var1 };
																										Global_2412555.f_121[0] = fVar2;
																									}
																									else
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2412555.f_162 + 1)
																										{
																											if (iVar14 < 40)
																											{
																												if (vdist2(Var1, uParam2->f_35) < vdist2(Global_2412555[iVar14 /*3*/], uParam2->f_35))
																												{
																													func_98(Var1, fVar2, iVar14);
																													iVar14 = Global_2412555.f_162 + 1;
																												}
																											}
																											iVar14++;
																										}
																									}
																									Global_2412555.f_162++;
																									if (Global_2412555.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412555.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2412555[Global_2412555.f_162 /*3*/] = { Var1 };
																									Global_2412555.f_121[Global_2412555.f_162] = fVar2;
																									Global_2412555.f_162++;
																									if (func_109(Var1, uParam2))
																									{
																										Global_2412555.f_163++;
																									}
																									if (Global_2412555.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412555.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { Var1 };
																							*uParam1 = fVar2;
																							return 1;
																						}
																					}
																					else if (bVar16)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { Var1 };
																					*uParam1 = fVar2;
																					return 1;
																				}
																			}
																		}
																		else
																		{
																			iVar13++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_32)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar13++;
					}
				}
				else
				{
					iVar13++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar13) || iVar0 >= 100)
			{
				if (Global_2412555.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2412555[0 /*3*/] };
						*uParam1 = Global_2412555.f_121[0];
						return 1;
					}
					else
					{
						if (Global_2412555.f_163 > 0 && !Global_2412555.f_163 == Global_2412555.f_162)
						{
							func_96(0, uParam2);
						}
						iVar24 = unk_0xB36B8558948EA7A8(0, Global_2412555.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar24 = 0;
						}
						Var25 = { Global_2412555[0 /*3*/] };
						uVar26 = Global_2412555.f_121[0];
						Global_2412555[0 /*3*/] = { Global_2412555[iVar24 /*3*/] };
						Global_2412555.f_121[0] = Global_2412555.f_121[iVar24];
						Global_2412555[iVar24 /*3*/] = { Var25 };
						Global_2412555.f_121[iVar24] = uVar26;
						*uParam0 = { Global_2412555[0 /*3*/] };
						*uParam1 = Global_2412555.f_121[0];
						return 1;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						return 0;
					}
					else
					{
						func_95(iVar13, *uParam0, &iVar0, &Var1, &fVar2, uParam2, iVar8, iVar7, iVar3, fVar11, fVar12, bVar9);
						Var27 = { Var1 };
						fVar28 = fVar2;
						if (!uParam2->f_50)
						{
							bVar29 = true;
						}
						else
						{
							bVar29 = false;
						}
						if (func_134(uParam2->f_35, &Var27, &(uParam2->f_38), &(uParam2->f_45), bVar29, 1) || func_129(&Var27, bVar29))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var27 };
								*uParam1 = fVar28;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								return 0;
							}
							else
							{
								*uParam0 = { Var27 };
								*uParam1 = fVar28;
								return 1;
							}
						}
						else
						{
							*uParam0 = { Var27 };
							*uParam1 = fVar28;
							return 1;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 3)
			{
				return 0;
			}
			else
			{
				func_91(&Global_1312061, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return 1;
			}
		}
		Global_2412555.f_164 = iVar6;
	}
	return 0;
}

void func_91(var uParam0, var uParam1, var uParam2, struct<3> Param3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = vdist(*(uParam0[iVar2 /*4*/]), Param3);
		if (fVar1 < fVar0)
		{
			if (!func_92(*(uParam0[iVar2 /*4*/]), 5f, unk_0x1146A9AE09CE2B14(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*uParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

int func_92(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_94(Param0, fParam1, iParam2, iParam3, 0) || func_93(Param0, iParam2, iParam4))
	{
		return 1;
	}
	return 0;
}

int func_93(struct<3> Param0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam1 == iVar0 || iParam2 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (!Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
				{
					if (func_71(Param0, Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
					{
						if (func_1340(iVar2, 0, 1) && func_1340(iParam1, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_94(struct<3> Param0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam2 == iVar0 || iParam3 == 1)
		{
			iVar1 = iVar0;
			bVar2 = false;
			if (bParam4)
			{
				if (func_1340(iVar1, 0, 1) && func_1340(iParam2, 0, 1))
				{
					if (unk_0x7C3E030BC3ED6671(iVar1) == unk_0x7C3E030BC3ED6671(iParam2))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_1340(iVar1, 0, 1) && func_1340(iParam2, 0, 1))
				{
					if (Global_2418033.f_261[iVar0])
					{
						if (vdist(Global_2418033.f_131[iVar0 /*3*/], Param0) < fParam1)
						{
							return 1;
						}
					}
					else if (vdist(func_52(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2418033.f_261[iVar0])
				{
					if (vdist(Global_2418033.f_131[iVar0 /*3*/], Param0) < fParam1)
					{
						return 1;
					}
				}
				else if (func_1340(iVar1, 0, 1))
				{
					if (vdist(func_52(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_95(int iParam0, struct<3> Param1, int iParam2, var uParam3, float fParam4, var uParam5, int iParam6, int iParam7, int iParam8, float fParam9, float fParam10, bool bParam11)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam2 = unk_0xB36B8558948EA7A8((1 + iParam0), (40 + iParam0));
		unk_0x87BE0E4947F798AC(Param1, *iParam2, uParam3, fParam4, &iParam7, iParam8, fParam9, fParam10);
		*uParam3 = { func_114(*uParam3, fParam4, iParam7, uParam5->f_9, *uParam5, iParam6, uParam5->f_11, uParam5->f_34, &bParam11, 0, 0, uParam5->f_51, uParam5->f_60) };
		if (!func_119(*uParam3))
		{
			iVar0 = 999;
			return;
		}
		iVar0++;
	}
}

void func_96(int iParam0, var uParam1)
{
	if (!func_109(Global_2412555[iParam0 /*3*/], uParam1))
	{
		Global_2412555.f_162 = (Global_2412555.f_162 - 1);
		func_97(iParam0);
		if (Global_2412555.f_162 > Global_2412555.f_163)
		{
			func_96(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_96(iParam0 + 1, uParam1);
	}
}

void func_97(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2412555[iParam0 /*3*/] = { Global_2412555[iParam0 + 1 /*3*/] };
			Global_2412555.f_121[iParam0] = Global_2412555.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_98(struct<3> Param0, float fParam1, int iParam2)
{
	struct<3> Var0;
	var uVar1;
	
	Var0 = { Global_2412555[iParam2 /*3*/] };
	uVar1 = Global_2412555.f_121[iParam2];
	Global_2412555[iParam2 /*3*/] = { Param0 };
	Global_2412555.f_121[iParam2] = fParam1;
	if (iParam2 <= Global_2412555.f_162 && iParam2 < 39)
	{
		if (vmag(Var0) > 0f)
		{
			func_98(Var0, uVar1, iParam2 + 1);
		}
	}
}

int func_99(struct<3> Param0, float fParam1, float fParam2)
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	
	fVar4 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar3 = iVar0;
		if (func_100(iVar3))
		{
			Var1 = { func_52(iVar3) };
			fVar5 = vdist(Param0, Var1);
			if (fVar5 < fParam1)
			{
				if (fVar5 < fVar4)
				{
					fVar4 = fVar5;
				}
				iVar2++;
			}
		}
		iVar0++;
	}
	*fParam2 = fVar4;
	return iVar2;
}

int func_100(int iParam0)
{
	if (func_1340(iParam0, 0, 1))
	{
		if (!func_105(iParam0))
		{
			if (unk_0xEBB066F8EADD0C1F(unk_0x1146A9AE09CE2B14(), iParam0))
			{
				if (!unk_0x7C3E030BC3ED6671(iParam0) == unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()))
				{
					if (func_102(unk_0x1146A9AE09CE2B14(), 1, 0))
					{
						if (!func_101(unk_0x7C3E030BC3ED6671(iParam0), unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0x7C3E030BC3ED6671(iParam0) == -1 && unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()) == -1)
				{
					if (!func_102(unk_0x1146A9AE09CE2B14(), 1, 0))
					{
						if (!func_55(iParam0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_101(int iParam0, int iParam1, int iParam2)
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
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 0);
				
				case 1:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 1);
				
				case 2:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 2);
				
				case 3:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 4);
				
				case 1:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 5);
				
				case 2:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 6);
				
				case 3:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 8);
				
				case 1:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 9);
				
				case 2:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 10);
				
				case 3:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 12);
				
				case 1:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 13);
				
				case 2:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 14);
				
				case 3:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_102(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_103(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590908[iParam0 /*874*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_103(int iParam0)
{
	return func_104(iParam0);
}

bool func_104(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_11.f_1, 0);
}

int func_105(int iParam0)
{
	if (func_34(iParam0, 0))
	{
		return 1;
	}
	if (func_106())
	{
		if (iParam0 == unk_0x1146A9AE09CE2B14())
		{
			return 1;
		}
	}
	if (unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_106()
{
	return unk_0x234B68AC2E35ED5A(Global_2359302, 3);
}

int func_107(struct<3> Param0, float fParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar4;
	
	iVar0 = 1;
	iVar0 += 2;
	iVar0 += 4;
	iVar0 += 8;
	iVar0 += 16;
	iVar0 += 32;
	iVar0 += 64;
	iVar0 = (iVar0 + 131076);
	iVar1 = unk_0x7A0F33AA19956CEB(Param0, 30f, 0, iVar0);
	if (unk_0x419E13582192CFEA(iVar1) && !unk_0xE50EB54E0F21BED0(iVar1, 0))
	{
		iVar2 = unk_0x6471F4759775FCA4(iVar1);
		Var3 = { unk_0xD6E677FAD7521410(iVar1, 0) };
		fVar4 = unk_0xA8D713A937F31250(iVar1);
		if (func_80(Param0, fParam1, iParam2, Var3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	iVar1 = unk_0x7A0F33AA19956CEB(Param0, 30f, 0, iVar0);
	if (unk_0x419E13582192CFEA(iVar1) && !unk_0xE50EB54E0F21BED0(iVar1, 0))
	{
		iVar2 = unk_0x6471F4759775FCA4(iVar1);
		Var3 = { unk_0xD6E677FAD7521410(iVar1, 0) };
		fVar4 = unk_0xA8D713A937F31250(iVar1);
		if (func_80(Param0, fParam1, iParam2, Var3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_108(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (func_81(Param0, fParam1, iParam2, iParam3, iParam4) || func_143(Param0, fParam1, iParam2, iParam3, iParam5))
	{
		return 1;
	}
	return 0;
}

int func_109(struct<3> Param0, var uParam1)
{
	if (uParam1->f_18)
	{
		switch (uParam1->f_26)
		{
			case 0:
				if (func_112(Param0, uParam1->f_19, uParam1->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_110(Param0, uParam1->f_19, uParam1->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0x09C4C80EA1D5B2F7(Param0, uParam1->f_19, uParam1->f_22, uParam1->f_25, 0, 1))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

int func_110(struct<3> Param0, struct<3> Param1, struct<3> Param2, bool bParam3, bool bParam4)
{
	func_111(&Param1, &Param2);
	if (((!Param0.x >= Param1.x || !Param0.f_1 >= Param1.f_1) || !Param0.x <= Param2.x) || !Param0.f_1 <= Param2.f_1)
	{
		return 0;
	}
	if (bParam3 && bParam4)
	{
		return 1;
	}
	else if (bParam3)
	{
		if (Param0.f_2 >= Param1.f_2)
		{
			return 1;
		}
	}
	else if (bParam4)
	{
		if (Param0.f_2 <= Param2.f_2)
		{
			return 1;
		}
	}
	else if (Param0.f_2 >= Param1.f_2 && Param0.f_2 <= Param2.f_2)
	{
		return 1;
	}
	return 0;
}

void func_111(var uParam0, var uParam1)
{
	var uVar0;
	
	if (*uParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = uVar0;
	}
	if (uParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = uParam0->f_1;
		uParam0->f_1 = uVar0;
	}
	if (uParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = uParam0->f_2;
		uParam0->f_2 = uVar0;
	}
}

bool func_112(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3 && bParam4)
	{
		Param0.f_2 = 0f;
		Param1.f_2 = 0f;
		return vdist(Param0, Param1) < (fParam2 + 0.01f);
	}
	else if (bParam3)
	{
		if (Param0.f_2 > Param1.f_2)
		{
			Param0.f_2 = Param1.f_2;
		}
		return vdist(Param0, Param1) < (fParam2 + 0.01f);
	}
	else if (bParam4)
	{
		if (Param0.f_2 < Param1.f_2)
		{
			Param0.f_2 = Param1.f_2;
		}
		return vdist(Param0, Param1) < (fParam2 + 0.01f);
	}
	return vdist(Param0, Param1) < (fParam2 + 0.01f);
}

int func_113(struct<3> Param0, float fParam1)
{
	int iVar0;
	
	if (func_102(unk_0x1146A9AE09CE2B14(), 1, 0))
	{
		if (Global_4718592.f_32298 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4718592.f_32298)
			{
				if (Global_4718592.f_32299[iVar0 /*121*/].f_7 != 0)
				{
					if (func_71(Param0, Global_4718592.f_32299[iVar0 /*121*/], Global_4718592.f_32299[iVar0 /*121*/].f_6, Global_4718592.f_32299[iVar0 /*121*/].f_7, fParam1))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4718592.f_5739 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4718592.f_5739)
			{
				if (Global_4718592.f_5742[iVar0 /*346*/].f_15 != 0)
				{
					if (func_71(Param0, Global_4718592.f_5742[iVar0 /*346*/], Global_4718592.f_5742[iVar0 /*346*/].f_3, Global_4718592.f_5742[iVar0 /*346*/].f_15, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4718592.f_70985 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4718592.f_70985)
			{
				if (Global_4718592.f_70989[iVar0 /*392*/].f_12 != 0)
				{
					if (func_71(Param0, Global_4718592.f_70989[iVar0 /*392*/], Global_4718592.f_70989[iVar0 /*392*/].f_3, Global_4718592.f_70989[iVar0 /*392*/].f_12, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_969056.f_268 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_969056.f_268)
			{
				if (unk_0x419E13582192CFEA(Global_969056.f_233[iVar0]) && !unk_0xE50EB54E0F21BED0(Global_969056.f_233[iVar0], 0))
				{
					if (func_71(Param0, unk_0xD6E677FAD7521410(Global_969056.f_233[iVar0], 1), unk_0xA8D713A937F31250(Global_969056.f_233[iVar0]), unk_0x6471F4759775FCA4(Global_969056.f_233[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_969056.f_266 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_969056.f_266)
			{
				if (unk_0x419E13582192CFEA(Global_969056.f_119[iVar0]) && !unk_0xE50EB54E0F21BED0(Global_969056.f_119[iVar0], 0))
				{
					if (func_71(Param0, unk_0xD6E677FAD7521410(Global_969056.f_119[iVar0], 1), unk_0xA8D713A937F31250(Global_969056.f_119[iVar0]), unk_0x6471F4759775FCA4(Global_969056.f_119[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

Vector3 func_114(struct<3> Param0, var uParam1, int iParam2, bool bParam3, struct<3> Param4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10, bool bParam11, var uParam12)
{
	struct<3> Var0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	float fVar10;
	struct<3> Var11;
	struct<3> Var12;
	struct<3> Var13;
	
	if (bParam11)
	{
		if (vmag(Param4) > 0f)
		{
			if (!func_117(Param0, *uParam1, Param4))
			{
				*uParam1 = (*uParam1 + 180f);
			}
		}
		return Param0;
	}
	unk_0x8748E0122DD45064(Param0, &uVar1, &uVar2);
	if (uVar2 & 1024 == 0 && !bParam6)
	{
		unk_0x74F971D19CAD1757(Param0, 1f, 1, &uVar3, &uVar3, &iVar4, &iVar5, &fVar6, iParam5);
		if (iVar4 == iVar5)
		{
			*uParam8 = 1;
		}
		if (bParam10)
		{
			if (!uVar2 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar4 + iVar5) != iParam2)
			{
				return 0f, 0f, 0f;
			}
			if (unk_0xE267416B80E7921F(iParam7) && func_116(Param0))
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam9 && *uParam8)
		{
			*uParam1 = (*uParam1 + 180f);
			if (*uParam1 > 360f)
			{
				*uParam1 = (*uParam1 + -360f);
			}
		}
		if (*uParam1 <= 90f || *uParam1 > 270f)
		{
			bVar8 = true;
		}
		else
		{
			bVar8 = false;
		}
		bVar9 = false;
		if (bVar8)
		{
			if (iVar4 == 0)
			{
				if (bParam10)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam2 == iVar4)
			{
				bVar9 = true;
			}
		}
		else if (iVar5 == 0)
		{
			if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam2 == iVar5)
		{
			bVar9 = true;
		}
		if (fVar6 < 0f)
		{
			fVar7 = 0f;
		}
		else
		{
			if (bVar8)
			{
				if (bVar9)
				{
					fVar7 = (4.2f * (to_float(iVar4) * 0.5f));
				}
				else
				{
					fVar7 = (4.2f * to_float(iVar4));
				}
				if (bVar9)
				{
					if (iVar4 > 2)
					{
						fVar7 = (fVar7 + (IntToFloat((iVar4 - 2)) * 1f));
					}
				}
				else if (iVar4 > 1)
				{
					fVar7 = (fVar7 + (IntToFloat((iVar4 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar9)
				{
					fVar7 = (4.2f * (to_float(iVar5) * 0.5f));
				}
				else
				{
					fVar7 = (4.2f * to_float(iVar5));
				}
				if (bVar9)
				{
					if (iVar5 > 2)
					{
						fVar7 = (fVar7 + (IntToFloat((iVar5 - 2)) * 1f));
					}
				}
				else if (iVar5 > 1)
				{
					fVar7 = (fVar7 + (IntToFloat((iVar5 - 1)) * 1f));
				}
			}
			if (!uVar2 & 64 == 0)
			{
				fVar7 = (fVar7 + (0.95f * fVar6));
			}
			if (!uVar2 & 4 == 0 || !uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + -0.5f);
			}
			if ((!uVar2 & 32 == 0 && uVar2 & 4 == 0) && uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + -1f);
			}
			if (!bParam3 || !uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + (4.2f * -0.5f));
			}
			if (!iParam7 == 0)
			{
				if (uVar2 & 8 != 0)
				{
					fVar10 = func_115(iParam7, 3.5f);
				}
				else
				{
					fVar10 = func_115(iParam7, 1.5f);
				}
				if (fVar10 > 1.8f)
				{
					fVar7 = (fVar7 + ((fVar10 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (vmag(Param4) > 0f)
	{
		if (!func_117(Param0, *uParam1, Param4))
		{
			if ((bParam3 || uParam12) || ((uVar2 & 1024 != 0 || Param0.f_2 == 0f) && bParam6))
			{
				*uParam1 = (*uParam1 + 180f);
			}
			else if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar7 < 0f)
	{
		fVar7 = 0f;
	}
	Var0 = { unk_0x26C2ACB261895E70(Param0, *uParam1, fVar7, 0f, 0f) };
	if (bParam3)
	{
		if (unk_0xA625D96BDE6A2827(Param0, *uParam1, &Var11))
		{
			Var12 = { Var11 - Param0 };
			if (!iParam7 == 0)
			{
				Var13 = { Var12 / FtoV(vmag(Var12)) };
				if (uVar2 & 8 != 0)
				{
					fVar10 = func_115(iParam7, 3.5f);
				}
				else
				{
					fVar10 = func_115(iParam7, 1.5f);
				}
				Var13 = { Var13 * FtoV((fVar10 * 0.5f)) };
				Var12 = { Var12 - Var13 };
				Var11 = { Param0 + Var12 };
			}
			Var13 = { Var0 - Var11 };
			Var0 = { Var11 };
		}
	}
	return Var0;
}

float func_115(int iParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	func_73(iParam0, &fVar0, &fVar1, 1086324736, 1080033280, 1077936128);
	fVar2 = (fVar1 - fVar0);
	if (fVar2 < fParam1)
	{
		return fParam1;
	}
	return fVar2;
}

int func_116(struct<3> Param0)
{
	float fVar0;
	
	if (unk_0x7956E831D8C0C17C(Param0.x, Param0.f_1, (Param0.f_2 + 500f), &fVar0, 0, 0))
	{
		fVar0 = (fVar0 - Param0.f_2);
		if (fVar0 > 6f)
		{
			return 1;
		}
	}
	return 0;
}

int func_117(struct<3> Param0, float fParam1, struct<3> Param2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { 0f, 1f, 0f };
	func_78(&Var0, 0f, 0f, fParam1);
	Var1 = { Param2 - Param0 };
	if (func_118(Var1, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

float func_118(struct<3> Param0, struct<3> Param1)
{
	return (((Param0.x * Param1.x) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

int func_119(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_121(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2412262[iVar1])
	{
		if (func_120(Param0, &(Global_2411559[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2412262[8])
	{
		if (func_120(Param0, &(Global_2411559[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_120(struct<3> Param0, var uParam1)
{
	return unk_0x09C4C80EA1D5B2F7(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 1);
}

int func_121(struct<2> Param0, var uParam1)
{
	if (Param0.f_1 > Global_2411550[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2411550[1])
	{
		if (Param0 < Global_2411554[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2411550[2])
	{
		if (Param0 < Global_2411554[1])
		{
			return 3;
		}
		else if (Param0 < Global_2411554[2])
		{
			return 4;
		}
		else if (Param0 < Global_2411554[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

int func_122(var uParam0, bool bParam1)
{
	var uVar0;
	struct<3> Var1;
	float fVar2;
	
	if (func_128(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			fVar2 = unk_0x644B8DBA4F69BB73(0.01f, 360f);
			func_127(&Var1, Global_2405077.f_592, Global_2405077.f_595, 1036831949, 0, fVar2);
			if (func_123(Var1, &uVar0) || func_128(Var1))
			{
				Var1 = { *uParam0 };
				func_127(&Var1, Global_2405077.f_592, Global_2405077.f_595, 1036831949, 1, fVar2);
			}
			*uParam0 = { Var1 };
		}
	}
	return 0;
}

int func_123(struct<3> Param0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (func_126())
	{
		return 0;
	}
	iVar1 = func_125();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2405077.f_367[iVar0 /*12*/].f_9 == 1)
		{
			if (func_124(Param0, &(Global_2405077.f_367[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam1 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_124(struct<3> Param0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	switch (uParam1->f_10)
	{
		case 0:
			return func_112(Param0, *uParam1, ((uParam1->f_6 + fParam2) + (IntToFloat(Global_2405077.f_2733) * uParam1->f_8)), bParam3, bParam4);
			break;
		
		case 1:
			return func_110(Param0, *uParam1 + Vector((fParam2 * -1f), (fParam2 * -1f), (fParam2 * -1f)), uParam1->f_3 + Vector(fParam2, fParam2, fParam2), bParam3, bParam4);
			break;
		
		case 2:
			if (bParam3 && bParam4)
			{
				return unk_0x09C4C80EA1D5B2F7(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0);
			}
			else if (bParam3)
			{
				if (unk_0x09C4C80EA1D5B2F7(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0) && !(Param0.f_2 < uParam1->f_2 && Param0.f_2 < uParam1->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam4)
			{
				if (unk_0x09C4C80EA1D5B2F7(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0) && !(Param0.f_2 > uParam1->f_2 && Param0.f_2 > uParam1->f_3.f_2))
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
				return unk_0x09C4C80EA1D5B2F7(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 1);
			}
			break;
	}
	return 0;
}

int func_125()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2405077.f_367[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_126()
{
	return Global_1683970.f_502;
}

void func_127(var uParam0, struct<3> Param1, float fParam2, float fParam3, bool bParam4, float fParam5)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { *uParam0 - Param1 };
	Var0.f_2 = 0f;
	if (vmag(Var0) > 0f)
	{
		Var0 = { Var0 / FtoV(vmag(Var0)) };
	}
	else
	{
		Var0 = { 0f, 1f, 0f };
		if (fParam5 == 0f)
		{
			func_78(&Var0, 0f, 0f, unk_0x644B8DBA4F69BB73(0f, 360f));
		}
		else
		{
			func_78(&Var0, 0f, 0f, fParam5);
		}
	}
	Var0 = { Var0 * FtoV((fParam2 + fParam3)) };
	if (!bParam4)
	{
		Var1 = { Param1 + Var0 };
	}
	else
	{
		Var1 = { Param1 - Var0 };
	}
	*uParam0 = Var1.x;
	uParam0->f_1 = Var1.f_1;
}

int func_128(struct<3> Param0)
{
	float fVar0;
	
	if (Global_2405077.f_595 > 0f)
	{
		fVar0 = vdist(Param0, Global_2405077.f_592);
		if (fVar0 < Global_2405077.f_595)
		{
			return 1;
		}
	}
	return 0;
}

bool func_129(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2405077.f_26.f_18)
	{
		switch (Global_2405077.f_26.f_17)
		{
			case 0:
				if (func_112(*uParam0, Global_2405077.f_26.f_10, Global_2405077.f_26.f_16, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_110(*uParam0, Global_2405077.f_26.f_10, Global_2405077.f_26.f_13, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (unk_0x09C4C80EA1D5B2F7(*uParam0, Global_2405077.f_26.f_10, Global_2405077.f_26.f_13, Global_2405077.f_26.f_16, 0, 1))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_130(*uParam0, Global_2405077.f_26.f_10, Global_2405077.f_26.f_13, Global_2405077.f_26.f_16, Global_2405077.f_26.f_17, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

Vector3 func_130(struct<3> Param0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4, float fParam5, bool bParam6)
{
	int iVar0;
	struct<3> Var1;
	
	switch (iParam4)
	{
		case 0:
			func_127(&Param0, Param1, fParam3, fParam5, bParam6, 0);
			break;
		
		case 1:
			func_133(&Param0, Param1, Param2, fParam5, bParam6);
			break;
		
		case 2:
			func_131(&Param0, Param1, Param2, fParam3, fParam5, bParam6);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		unk_0x9FB743331EC18DF4(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam4)
		{
			case 0:
				if (!func_112(Var1, Param1, fParam3, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_110(Var1, Param1, Param2, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 2:
				if (!unk_0x09C4C80EA1D5B2F7(Var1, Param1, Param2, fParam3, 0, 1))
				{
					return Var1;
				}
				break;
		}
		iVar0++;
	}
	return Param0;
}

void func_131(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3, float fParam4, bool bParam5)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var5;
	float fVar6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	struct<3> Var10;
	struct<3> Var11;
	
	Var0 = { Param2 - Param1 };
	Var0.f_2 = 0f;
	Var1 = { *uParam0 - Param1 };
	Var1.f_2 = 0f;
	Var2 = { func_132(0f, 0f, 1f, Var0) };
	Var2 = { Var2 / FtoV(vmag(Var2)) };
	fVar3 = (vmag(Var1) * sin(unk_0x6EE46314283D3C7D(Var0.x, Var0.f_1, Var1.x, Var1.f_1)));
	if (fVar3 < (fParam3 * 0.5f))
	{
		if (!bParam5)
		{
			if (func_118(Var2, Var1) >= 0f)
			{
				Var2 = { Var2 * FtoV((((fParam3 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				Var2 = { Var2 * FtoV(((((fParam3 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_118(Var2, Var1) >= 0f)
		{
			Var2 = { Var2 * FtoV(((((fParam3 * 0.5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			Var2 = { Var2 * FtoV((((fParam3 * 0.5f) + fVar3) + fParam4)) };
		}
		Var4 = { *uParam0 + Var2 };
		fVar6 = vdist(Param1.x, Param1.f_1, 0f, Param2.x, Param2.f_1, 0f);
		Var7 = { Param1 + Param2 / Vector(2f, 2f, 2f) };
		Var7.f_2 = 0f;
		Var2 = { func_132(0f, 0f, 1f, Var0) };
		Var2 = { Var2 / FtoV(vmag(Var2)) };
		Var2 = { Var2 * FtoV((fParam3 * 0.5f)) };
		Var8 = { Var7 - Var2 };
		Var9 = { Var7 + Var2 };
		Var10 = { Var9 - Var8 };
		Var10.f_2 = 0f;
		Var11 = { *uParam0 - Var8 };
		Var11.f_2 = 0f;
		Var2 = { func_132(0f, 0f, 1f, Var10) };
		Var2 = { Var2 / FtoV(vmag(Var2)) };
		fVar3 = (vmag(Var11) * sin(unk_0x6EE46314283D3C7D(Var10.x, Var10.f_1, Var11.x, Var11.f_1)));
		if (!bParam5)
		{
			if (func_118(Var2, Var11) >= 0f)
			{
				Var2 = { Var2 * FtoV((((fVar6 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				Var2 = { Var2 * FtoV(((((fVar6 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_118(Var2, Var11) >= 0f)
		{
			Var2 = { Var2 * FtoV(((((fVar6 * 0.5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			Var2 = { Var2 * FtoV((((fVar6 * 0.5f) + fVar3) + fParam4)) };
		}
		Var5 = { *uParam0 + Var2 };
		if (vdist(Var4, *uParam0, uParam0->f_1, 0f) < vdist(Var5, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { Var4 };
		}
		else
		{
			*uParam0 = { Var5 };
		}
	}
}

Vector3 func_132(struct<3> Param0, struct<3> Param1)
{
	return ((Param0.f_1 * Param1.f_2) - (Param0.f_2 * Param1.f_1)), ((Param0.f_2 * Param1.x) - (Param0.x * Param1.f_2)), ((Param0.x * Param1.f_1) - (Param0.f_1 * Param1.x));
}

void func_133(var uParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, float fParam5, bool bParam6)
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	Var0 = { *uParam0 };
	fVar1 = (*uParam0 - Param1);
	fVar2 = (*uParam0 - Param3);
	if (fVar1 < fVar2)
	{
		fVar3 = fVar1;
	}
	else
	{
		fVar3 = fVar2;
	}
	fVar4 = (uParam0->f_1 - Param1.f_1);
	fVar5 = (uParam0->f_1 - Param3.f_1);
	if (fVar4 < fVar5)
	{
		fVar6 = fVar4;
	}
	else
	{
		fVar6 = fVar5;
	}
	Var0 = { *uParam0 };
	if (!bParam6)
	{
		if (fVar3 < fVar6)
		{
			if (fVar1 < fVar2)
			{
				Var0.x = (Param1 - fParam5);
			}
			else
			{
				Var0.x = (Param3 + fParam5);
			}
		}
		else if (fVar4 < fVar5)
		{
			Var0.f_1 = (Param1.f_1 - fParam5);
		}
		else
		{
			Var0.f_1 = (Param3.f_1 + fParam5);
		}
	}
	else if (fVar3 < fVar6)
	{
		if (fVar1 < fVar2)
		{
			Var0.x = (Param3 + fParam5);
		}
		else
		{
			Var0.x = (Param1 - fParam5);
		}
	}
	else if (fVar4 < fVar5)
	{
		Var0.f_1 = (Param3.f_1 + fParam5);
	}
	else
	{
		Var0.f_1 = (Param1.f_1 - fParam5);
	}
	*uParam0 = { Var0 };
}

int func_134(struct<3> Param0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;
	
	if (func_182(Param0))
	{
		if (func_137(uParam1, bParam4, 0, 1, 1))
		{
			if (bParam4)
			{
			}
			return 1;
		}
	}
	if (func_135(uParam1, bParam4, 1))
	{
		if (bParam4)
		{
		}
		return 1;
	}
	if (bParam5)
	{
		if (func_84(*uParam1, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (vdist(*uParam1, *(uParam2[iVar0 /*3*/])) < (*uParam3)[iVar0])
		{
			if (bParam4)
			{
				func_127(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

int func_135(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	
	if (func_123(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			Var2 = { *uParam0 };
			func_136(&Var2, &(Global_2405077.f_367[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_123(Var2, &uVar1) || func_128(Var2))
			{
				Var2 = { *uParam0 };
				func_136(&Var2, &(Global_2405077.f_367[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { Var2 };
		}
		return 1;
	}
	return 0;
}

void func_136(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_130(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2405077.f_2733) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_130(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_130(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_127(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2405077.f_2733) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_133(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_131(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

int func_137(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2410002[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2410002[iVar0 /*17*/].f_16))
			{
				if (func_124(*uParam0, &(Global_2410002[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2410002[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2410002[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_136(&Var1, &(Global_2410002[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_137(&Var1, 0, 0, 0, 1))
							{
								Var1 = { *uParam0 };
								func_136(&Var1, &(Global_2410002[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { Var1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_138(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	float fVar9;
	bool bVar10;
	int iVar11;
	float fVar12;
	struct<3> Var13;
	var uVar14;
	
	if (Global_2405077.f_1753 > 0)
	{
		iVar1 = 0;
		iVar2 = 0;
		if (!vmag(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_134(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_129(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
		Global_2412555.f_162 = 0;
		Global_2412555.f_163 = 0;
		iVar5 = 0;
		while (iVar5 < 40)
		{
			Global_2412555[iVar5 /*3*/] = { 0f, 0f, 0f };
			Global_2412555.f_121[iVar5] = 0f;
			iVar5++;
		}
		if (uParam2->f_30)
		{
			func_141(*uParam0);
		}
		else if (uParam2->f_29)
		{
			func_140();
		}
		else
		{
			func_139();
		}
		iVar1 = 0;
		while (iVar1 < Global_2405077.f_1753)
		{
			iVar2 = Global_2405077.f_2159[iVar1];
			if (iVar2 > -1 && iVar2 < 101)
			{
				Var3 = { Global_2405077.f_1754[iVar2 /*4*/] };
				fVar4 = Global_2405077.f_1754[iVar2 /*4*/].f_3;
				if (vmag(Var3) > 0f)
				{
					if ((uParam2->f_57 && vdist(Var3, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && vdist(Var3.x, Var3.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !func_108(Var3, fVar4, uParam2->f_34, unk_0x1146A9AE09CE2B14(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_134(uParam2->f_35, &Var3, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar6 = uParam2->f_31;
										bVar7 = true;
										iVar8 = 1;
										fVar9 = uParam2->f_49;
										if (!uParam2->f_55)
										{
											iVar6 = 0;
											bVar7 = false;
											iVar8 = 0;
											fVar9 = 1f;
										}
										else if (uParam2->f_17)
										{
											iVar6 = 0;
											bVar7 = false;
											iVar8 = 0;
											if (uParam2->f_33 == 1)
											{
												fVar9 = (fVar9 * 0.375f);
											}
										}
										else
										{
											bVar7 = true;
											iVar8 = 1;
											if (uParam2->f_28)
											{
												if (uParam2->f_33 == 1)
												{
													fVar9 = (fVar9 * 0.375f);
												}
											}
										}
										bVar10 = false;
										if (!func_107(Var3, fVar4, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_48(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar10 = true;
												}
											}
											else if (func_48(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_70(Var3, fVar4, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
											{
												bVar10 = true;
											}
										}
										if (bVar10)
										{
											if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
											{
												fVar12 = 0f;
												if (uParam2->f_52)
												{
													iVar11 = func_99(Var3, uParam2->f_54, &fVar12);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar11 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar11 < uParam2->f_53)
														{
															iVar5 = 0;
															while (iVar5 < Global_2412555.f_162)
															{
																Global_2412555[iVar5 /*3*/] = { 0f, 0f, 0f };
																Global_2412555.f_121[iVar5] = 0f;
																iVar5++;
															}
															Global_2412555.f_162 = 0;
															uParam2->f_53 = iVar11;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2412555.f_162 == 0)
														{
															Global_2412555[0 /*3*/] = { Var3 };
															Global_2412555.f_121[0] = fVar4;
														}
														else
														{
															iVar5 = 0;
															while (iVar5 < Global_2412555.f_162 + 1)
															{
																if (iVar5 < 40)
																{
																	if (vdist2(Var3, uParam2->f_35) < vdist2(Global_2412555[iVar5 /*3*/], uParam2->f_35))
																	{
																		func_98(Var3, fVar4, iVar5);
																		iVar5 = Global_2412555.f_162 + 1;
																	}
																}
																iVar5++;
															}
														}
														Global_2412555.f_162++;
														if (Global_2412555.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2405077.f_1753;
															}
															else if (Global_2412555.f_162 == 40)
															{
																iVar1 = Global_2405077.f_1753;
															}
														}
													}
													else
													{
														Global_2412555[Global_2412555.f_162 /*3*/] = { Var3 };
														Global_2412555.f_121[Global_2412555.f_162] = fVar4;
														Global_2412555.f_162++;
														if (Global_2412555.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2405077.f_1753;
															}
															else if (Global_2412555.f_162 == 40)
															{
																iVar1 = Global_2405077.f_1753;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { Var3 };
												*uParam1 = fVar4;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { Var3 };
										*uParam1 = fVar4;
										return 1;
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
		if (Global_2412555.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2412555[0 /*3*/] };
				*uParam1 = Global_2412555.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2412555.f_163 > 0 && !Global_2412555.f_163 == Global_2412555.f_162)
				{
					func_96(0, uParam2);
				}
				iVar0 = unk_0xB36B8558948EA7A8(0, Global_2412555.f_162);
				Var13 = { Global_2412555[0 /*3*/] };
				uVar14 = Global_2412555.f_121[0];
				Global_2412555[0 /*3*/] = { Global_2412555[iVar0 /*3*/] };
				Global_2412555.f_121[0] = Global_2412555.f_121[iVar0];
				Global_2412555[iVar0 /*3*/] = { Var13 };
				Global_2412555.f_121[iVar0] = uVar14;
				*uParam0 = { Global_2412555[0 /*3*/] };
				*uParam1 = Global_2412555.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return 0;
			}
			else if (uParam2->f_59 && Global_2405077.f_1753 > 0)
			{
				iVar0 = unk_0xB36B8558948EA7A8(0, Global_2405077.f_1753);
				*uParam0 = { Global_2405077.f_1754[iVar0 /*4*/] };
				*uParam1 = Global_2405077.f_1754[iVar0 /*4*/].f_3;
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

void func_139()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_2405077.f_1753)
	{
		Global_2405077.f_2159[iVar0] = iVar0;
		iVar0++;
	}
}

void func_140()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = 0;
	while (iVar0 < Global_2405077.f_1753)
	{
		Global_2405077.f_2159[iVar0] = iVar0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2405077.f_1753)
	{
		iVar1 = unk_0xB36B8558948EA7A8(0, Global_2405077.f_1753);
		iVar2 = unk_0xB36B8558948EA7A8(0, Global_2405077.f_1753);
		uVar3 = Global_2405077.f_2159[iVar1];
		Global_2405077.f_2159[iVar1] = Global_2405077.f_2159[iVar2];
		Global_2405077.f_2159[iVar2] = uVar3;
		iVar0++;
	}
}

void func_141(struct<3> Param0)
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_2405077.f_1753)
	{
		uVar1 = func_142(Param0, fVar0, &fVar0);
		Global_2405077.f_2159[iVar2] = uVar1;
		iVar2++;
	}
}

int func_142(struct<3> Param0, float fParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = -1;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_2405077.f_1753)
	{
		fVar2 = vdist2(Param0, Global_2405077.f_1754[iVar3 /*4*/]);
		if (fVar2 < fVar1 && fVar2 > fParam1)
		{
			iVar0 = iVar3;
			fVar1 = fVar2;
		}
		iVar3++;
	}
	*fParam2 = fVar1;
	return iVar0;
}

int func_143(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (func_144(Param0, iParam2, Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_80(Param0, fParam1, iParam2, Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_1340(iVar2, 0, 1) && func_1340(iParam3, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_144(struct<3> Param0, int iParam1, struct<3> Param2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_79(iParam1, 1008981770);
	fVar1 = func_79(iParam3, 1008981770);
	fVar2 = vdist(Param0, Param2);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_145(struct<3> Param0)
{
	var uVar0;
	
	if (Global_2544210.f_924 && func_146(Param0, &uVar0))
	{
		return 1;
	}
	return 0;
}

int func_146(struct<3> Param0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	*uParam1 = -1;
	iVar2 = func_159(Param0, 0);
	if (!iVar2 == -1)
	{
		iVar0 = 83;
		while (iVar0 <= 87)
		{
			iVar1 = iVar0;
			if (func_147(iVar1))
			{
				if (func_159(Global_1683970.f_516[iVar0 /*3*/], 0) == iVar2)
				{
					*uParam1 = iVar0 + 1000;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_147(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_158(iParam0);
	if (Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_266 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11;
	if (iVar1 != func_57())
	{
		if (Global_1590908[iVar1 /*874*/].f_267.f_266 == iVar0)
		{
			return 1;
		}
	}
	if (Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_319.f_6 == iParam0)
	{
		return 1;
	}
	if (func_157(unk_0x1146A9AE09CE2B14(), 0) || (func_154(unk_0x1146A9AE09CE2B14()) && func_152(func_153(unk_0x1146A9AE09CE2B14())) == 12))
	{
		return 1;
	}
	if (func_151(unk_0x1146A9AE09CE2B14()) || (func_154(unk_0x1146A9AE09CE2B14()) && func_152(func_153(unk_0x1146A9AE09CE2B14())) == 8))
	{
		return 1;
	}
	if (func_150(unk_0x1146A9AE09CE2B14()) || (func_154(unk_0x1146A9AE09CE2B14()) && func_152(func_153(unk_0x1146A9AE09CE2B14())) == 5))
	{
		return 1;
	}
	if (func_149(unk_0x1146A9AE09CE2B14()) || (func_154(unk_0x1146A9AE09CE2B14()) && func_152(func_153(unk_0x1146A9AE09CE2B14())) == 10))
	{
		return 1;
	}
	if (func_148(unk_0x1146A9AE09CE2B14()) || (func_154(unk_0x1146A9AE09CE2B14()) && func_152(func_153(unk_0x1146A9AE09CE2B14())) == 6))
	{
		return 1;
	}
	return 0;
}

int func_148(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (func_1340(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_152(Global_2426865[iParam0 /*449*/].f_319.f_6) == 6;
			}
		}
	}
	return 0;
}

int func_149(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (func_1340(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_152(Global_2426865[iParam0 /*449*/].f_319.f_6) == 10;
			}
		}
	}
	return 0;
}

int func_150(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (func_1340(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1 && Global_2426865[iParam0 /*449*/].f_319.f_9 != func_57())
			{
				return func_152(Global_2426865[iParam0 /*449*/].f_319.f_6) == 5;
			}
		}
	}
	return 0;
}

int func_151(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (func_1340(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1 && Global_2426865[iParam0 /*449*/].f_319.f_9 != func_57())
			{
				return func_152(Global_2426865[iParam0 /*449*/].f_319.f_6) == 8;
			}
		}
	}
	return 0;
}

int func_152(int iParam0)
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

int func_153(int iParam0)
{
	if (iParam0 != func_57() && func_1340(iParam0, 1, 1))
	{
		return Global_2426865[iParam0 /*449*/].f_319.f_16;
	}
	return -1;
}

int func_154(int iParam0)
{
	if (iParam0 != func_57() && func_1340(iParam0, 1, 1))
	{
		if (func_156(iParam0) && !func_155(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_155(int iParam0)
{
	if (iParam0 != func_57() && func_1340(iParam0, 1, 1))
	{
		return unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_319, 4);
	}
	return 0;
}

int func_156(int iParam0)
{
	if (iParam0 != func_57() && func_1340(iParam0, 1, 1))
	{
		return unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_319, 3);
	}
	return 0;
}

int func_157(int iParam0, bool bParam1)
{
	var uVar0;
	
	if (bParam1)
	{
		if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
		{
			uVar0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
			if (unk_0x6471F4759775FCA4(uVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_57())
	{
		if (func_1340(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1 && Global_2426865[iParam0 /*449*/].f_319.f_9 != func_57())
			{
				return func_152(Global_2426865[iParam0 /*449*/].f_319.f_6) == 12;
			}
		}
	}
	return 0;
}

int func_158(int iParam0)
{
	switch (iParam0)
	{
		case 83:
			return 1;
			break;
		
		case 84:
			return 2;
			break;
		
		case 85:
			return 3;
			break;
		
		case 86:
			return 4;
			break;
		
		case 87:
			return 5;
			break;
	}
	return 0;
}

int func_159(struct<3> Param0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2410002[iVar0 /*17*/].f_9 == 1 || iParam1 == 0)
		{
			if (func_124(Param0, &(Global_2410002[iVar0 /*17*/]), 0.1f, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_160(struct<3> Param0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2[3];
	int iVar3[3];
	
	if (Global_2405077.f_45.f_318)
	{
		return;
	}
	if (!func_178())
	{
		if (iParam1 == 0)
		{
		}
		iVar1 = func_177(Param0);
		if (iVar1 > -1)
		{
			func_190();
			switch (iVar1)
			{
				case 0:
					func_176(-1139.678f, -2694.165f, 12.949f, 283.4298f);
					func_176(-1137.455f, -2690.167f, 12.9448f, 283.0835f);
					func_176(-1135.02f, -2685.912f, 12.9412f, 283.8219f);
					func_176(-1099.898f, -2688.611f, 12.9473f, 295.3925f);
					func_176(-1110.51f, -2693.236f, 12.9595f, 298.84f);
					func_176(-1081.807f, -2690.015f, 12.7567f, 219.1729f);
					func_176(-1075.586f, -2697.09f, 12.7567f, 224.8977f);
					func_176(-1095.133f, -2659.995f, 12.7567f, 190.9326f);
					func_176(-1096.511f, -2649.483f, 12.6066f, 182.7913f);
					break;
				
				case 1:
					func_176(-1411.731f, -533.6462f, 30.2703f, 215.116f);
					func_176(-1416.407f, -527.0309f, 30.6453f, 215.2683f);
					func_176(-1432.146f, -580.9922f, 29.5263f, 118.3858f);
					func_176(-1438.8f, -584.4678f, 29.595f, 118.1207f);
					break;
				
				case 2:
					func_176(-780.5905f, 292.8159f, 84.673f, 97.2697f);
					func_176(-788.6147f, 291.8073f, 84.72f, 97.7348f);
					func_176(-765.572f, 294.4459f, 84.5182f, 93.9327f);
					func_176(-756.9962f, 294.8176f, 84.4061f, 93.9545f);
					break;
				
				case 3:
					func_176(-647.9388f, 40.9257f, 38.9494f, 356.4108f);
					func_176(-647.239f, 49.2068f, 40.7135f, 355.9723f);
					func_176(-620.1517f, 3.6633f, 40.5904f, 98.3813f);
					func_176(-610.5603f, 5.1258f, 41.2404f, 98.696f);
					break;
				
				case 4:
					func_176(-943.2437f, -487.8443f, 35.7504f, 208.6441f);
					func_176(-949.2938f, -476.3759f, 36.0878f, 208.1432f);
					func_176(-955.3208f, -465.3984f, 36.3328f, 206.9198f);
					func_176(-959.5925f, -457.0372f, 36.5226f, 207.7534f);
					break;
				
				case 5:
					func_176(-966.1365f, -401.5364f, 36.6824f, 27.6587f);
					func_176(-934.9108f, -413.4091f, 36.5161f, 118.0149f);
					func_176(-920.2501f, -405.6656f, 36.5869f, 117.2407f);
					func_176(-971.7031f, -390.5213f, 36.7118f, 26.8016f);
					break;
				
				case 6:
					func_176(-58.1347f, -573.486f, 36.5789f, 341.8442f);
					func_176(-64.227f, -590.2214f, 35.1654f, 338.972f);
					func_176(-67.0332f, -599.2827f, 35.1787f, 341.5854f);
					func_176(-71.8651f, -612.8891f, 35.1574f, 339.8537f);
					break;
				
				case 7:
					func_176(-232.1917f, -978.1431f, 28.166f, 160.2115f);
					func_176(-229.6225f, -970.9731f, 28.1636f, 160.2397f);
					func_176(-251.993f, -998.3963f, 28.3747f, 249.3297f);
					func_176(-262.222f, -994.5226f, 29.23f, 249.4673f);
					break;
				
				case 8:
					func_176(151.624f, -1309.343f, 28.2023f, 243.201f);
					func_176(152.7886f, -1305.608f, 28.2023f, 243.9973f);
					func_176(145.8017f, -1287.19f, 28.312f, 120.6275f);
					func_176(142.8935f, -1282.286f, 28.3156f, 120.3024f);
					break;
				
				case 9:
					func_176(-2333.575f, 272.6518f, 168.4671f, 23.0287f);
					func_176(-2322.187f, 277.638f, 168.4671f, 23.4249f);
					func_176(-2316.222f, 279.9105f, 168.4671f, 23.0175f);
					func_176(-2314.396f, 290.9f, 168.4671f, 114.3983f);
					func_176(-2316.81f, 296.424f, 168.4671f, 113.6228f);
					func_176(-2318.572f, 299.2423f, 168.4671f, 293.83f);
					func_176(-2327.902f, 291.6653f, 168.4671f, 294.1158f);
					func_176(-2330.711f, 274.0757f, 168.4671f, 205.2184f);
					func_176(-2345.082f, 277.3852f, 168.4671f, 113.4219f);
					func_176(-2347.777f, 282.6038f, 168.4671f, 292.7772f);
					func_176(-2339.33f, 293.4399f, 168.4671f, 114.2739f);
					func_176(-2352.681f, 294.4205f, 168.4671f, 115.5597f);
					break;
				
				case 10:
					func_174(78);
					break;
				
				case 11:
					func_174(79);
					break;
				
				case 12:
					func_174(82);
					break;
				
				case 13:
					func_174(81);
					break;
				
				case 14:
					func_174(73);
					break;
				
				case 15:
					func_176(382.9244f, 443.8122f, 142.9934f, 78.3408f);
					func_176(391.2023f, 442.4812f, 142.5089f, 82.2125f);
					func_176(400.1477f, 441.0816f, 142.0776f, 83.4259f);
					func_176(414.2964f, 439.2628f, 141.5056f, 80.8689f);
					break;
				
				case 16:
					func_174(75);
					break;
				
				case 17:
					func_174(76);
					break;
				
				case 18:
					func_174(77);
					break;
				
				case 19:
					func_176(-921.9734f, 704.0754f, 150.8142f, 96.5139f);
					func_176(-904.7881f, 708.9782f, 149.8261f, 108.2109f);
					func_176(-931.6637f, 703.693f, 151.369f, 87.7447f);
					func_176(-943.8763f, 704.2332f, 152.0993f, 87.6764f);
					break;
				
				case 20:
					func_174(80);
					break;
				
				case 21:
				case 25:
					func_174(87);
					break;
				
				case 22:
				case 26:
					func_174(88);
					break;
				
				case 23:
				case 27:
					func_174(89);
					break;
				
				case 24:
				case 28:
					func_174(90);
					break;
				
				case 29:
				case 30:
					if (func_173(iParam1))
					{
						func_174(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_29);
					}
					break;
				
				case 31:
					func_176(-352.53f, -1836.742f, 21.924f, 274.8f);
					func_176(-336.412f, -1837.341f, 22.497f, 264.6f);
					func_176(-320.707f, -1840.342f, 23.195f, 257.4f);
					func_176(-304.646f, -1843.295f, 24.219f, 261.599f);
					func_176(-288.991f, -1844.123f, 25.228f, 269.599f);
					func_176(-273.031f, -1842.69f, 26.27f, 278.199f);
					func_176(-361.271f, -1814.526f, 21.63f, 96.399f);
					func_176(-343.939f, -1813.331f, 22.368f, 87.999f);
					func_176(-326.881f, -1814.914f, 23.106f, 78.799f);
					func_176(-310.941f, -1818.223f, 23.957f, 78.799f);
					func_176(-294.16f, -1820.207f, 25.092f, 89.199f);
					func_176(-277.392f, -1819.237f, 26.283f, 100.199f);
					func_176(-257.213f, -1838.977f, 27.318f, 285.799f);
					func_176(-261.286f, -1815.615f, 27.439f, 110.399f);
					func_176(-246.086f, -1808.691f, 28.576f, 117.398f);
					func_176(-231.901f, -1800.767f, 28.619f, 119.398f);
					func_176(-199.77f, -1989.34f, 26.62f, 180.997f);
					func_176(-201.159f, -1971.41f, 26.62f, 190.798f);
					func_176(-205.571f, -1954.537f, 26.62f, 199.998f);
					func_176(-197.879f, -1940.822f, 26.62f, 114.998f);
					func_176(-141.311f, -1967.41f, 21.805f, 91.997f);
					func_176(-141.145f, -1977.861f, 21.813f, 91.997f);
					func_176(-140.565f, -1988.289f, 21.815f, 91.997f);
					func_176(-145.045f, -2032.168f, 21.956f, 73.597f);
					func_176(-147.923f, -2041.781f, 21.956f, 73.597f);
					func_176(-185.791f, -1948.005f, 26.62f, 18.596f);
					func_176(-181.155f, -1965.422f, 26.62f, 8.196f);
					func_176(-179.172f, -1984.332f, 26.62f, 1.396f);
					func_176(-225.88f, -1824.637f, 28.897f, 299.596f);
					func_176(-211.722f, -1816.401f, 28.859f, 300.796f);
					func_176(-217.99f, -1792.624f, 28.649f, 119.196f);
					func_176(-203.828f, -1784.264f, 28.678f, 119.996f);
					func_176(-194.254f, -2018.756f, 26.62f, 75f);
					func_176(-186.956f, -2031.369f, 26.62f, 338f);
					func_176(-194.916f, -2047.94f, 26.62f, 329.8f);
					func_176(-205.565f, -2064.553f, 26.62f, 320.2f);
					func_176(-218.606f, -2077.97f, 26.62f, 311.2f);
					func_176(-233.372f, -2089.601f, 26.62f, 304f);
					func_176(-207.822f, -2002.11f, 26.62f, 173.799f);
					func_176(-207.567f, -2027.579f, 26.62f, 158.599f);
					func_176(-215.235f, -2042.272f, 26.62f, 148.999f);
					func_176(-227.643f, -2058.498f, 26.62f, 138.799f);
					func_176(-242.977f, -2071.452f, 26.62f, 125.798f);
					func_176(-256.624f, -2087.982f, 26.62f, 204.198f);
					func_176(-249.549f, -2098.767f, 26.62f, 294.198f);
					func_176(-228.998f, -2048.889f, 26.62f, 141.198f);
					func_176(-176.963f, -2009.239f, 24.519f, 261.597f);
					func_176(-195.128f, -1806.447f, 28.814f, 299.997f);
					func_176(-180.02f, -1797.414f, 28.797f, 299.997f);
					func_176(-165.796f, -1787.672f, 28.788f, 304.597f);
					func_176(-188.124f, -1774.765f, 28.711f, 123.197f);
					func_176(-417.428f, -1836.374f, 19.238f, 121.797f);
					func_176(-430.967f, -1844.844f, 18.468f, 121.797f);
					func_176(-444.94f, -1853.739f, 17.786f, 121.797f);
					break;
			}
		}
		else if (func_170(Param0, &iVar2, &iVar3) || (func_146(Param0, &(iVar2[0])) && (unk_0x48E10529AEAE00F9(iParam1) || unk_0xE267416B80E7921F(iParam1))))
		{
			func_190();
			iVar0 = 0;
			while (iVar0 < iVar2)
			{
				if (iVar2[iVar0] > 1000)
				{
					iVar2[iVar0] = (iVar2[iVar0] - 1000);
					iVar3[iVar0] = 1;
				}
				if (iVar2[iVar0] >= 83 && iVar2[iVar0] <= 87)
				{
					Global_2405077.f_515 = 1;
				}
				if (!iVar3[iVar0] && func_169(iVar2[iVar0], -1))
				{
					if (func_173(iParam1))
					{
						func_174(iVar2[iVar0]);
					}
				}
				else if (iVar3[iVar0])
				{
					if (((func_168(unk_0x7D2B9E6A64637269()) || func_167(unk_0x7D2B9E6A64637269())) && unk_0x48E10529AEAE00F9(iParam1)) || unk_0xE267416B80E7921F(iParam1))
					{
						if (func_166(iParam1))
						{
							func_165(iVar2[iVar0]);
						}
						else if (func_164(iParam1))
						{
							func_163(iVar2[iVar0]);
							func_165(iVar2[iVar0]);
						}
						else
						{
							func_163(iVar2[iVar0]);
							func_165(iVar2[iVar0]);
						}
					}
					else
					{
						func_161(iVar2[iVar0], iParam1);
					}
				}
				else
				{
					func_174(iVar2[iVar0]);
				}
				iVar0++;
			}
		}
	}
}

void func_161(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 23:
			func_176(434.1898f, 6535.824f, 27.0084f, 66.9998f);
			func_176(434.9146f, 6539.661f, 26.9691f, 66.9998f);
			func_176(435.1928f, 6543.298f, 26.889f, 66.9998f);
			func_176(429.8495f, 6506.581f, 27.1807f, 59.7997f);
			func_176(429.8463f, 6511.11f, 27.0717f, 60.9997f);
			func_176(434.2748f, 6581.816f, 26.1303f, 85.1993f);
			func_176(443.1016f, 6580.717f, 26.0739f, 85.1993f);
			func_176(451.9748f, 6579.937f, 26.0319f, 85.1993f);
			break;
		
		case 26:
			func_176(-148.9694f, 6325.552f, 30.4564f, 224.1983f);
			func_176(-154.9585f, 6331.287f, 30.5809f, 225.7983f);
			func_176(-136.8806f, 6347.622f, 30.4906f, 43.9982f);
			func_176(-142.1459f, 6342.532f, 30.49f, 44.7982f);
			func_176(-136.6504f, 6357.062f, 30.4907f, 43.9982f);
			func_176(-151.1909f, 6358.461f, 30.4907f, 223.398f);
			func_176(-141.4154f, 6365.831f, 30.4907f, 43.3979f);
			func_176(-147.8279f, 6378.042f, 30.5012f, 312.7973f);
			break;
		
		case 24:
			func_176(60.7522f, 6465.807f, 30.3941f, 213.3973f);
			func_176(57.4131f, 6462.55f, 30.3663f, 213.3973f);
			func_176(48.0438f, 6452.668f, 30.3245f, 213.3973f);
			func_176(40.6765f, 6445.235f, 30.3475f, 213.3973f);
			func_176(37.8298f, 6442.521f, 30.3489f, 213.3973f);
			func_176(35.0212f, 6439.866f, 30.3332f, 213.3973f);
			func_176(32.1837f, 6437.21f, 30.2991f, 213.3973f);
			func_176(29.4732f, 6434.526f, 30.3702f, 213.3973f);
			break;
		
		case 25:
			func_176(-377.1927f, 6142.805f, 30.3409f, 315.3965f);
			func_176(-383.3481f, 6136.154f, 30.3752f, 315.3965f);
			func_176(-395.8286f, 6123.635f, 30.2987f, 46.3965f);
			func_176(-389.1636f, 6117.241f, 30.3641f, 46.3965f);
			func_176(-370.6174f, 6129.779f, 30.4414f, 45.7965f);
			func_176(-360.983f, 6130.575f, 30.4401f, 45.7965f);
			func_176(-416.8689f, 6103.411f, 30.3852f, 325.7964f);
			func_176(-420.9229f, 6095.657f, 30.3155f, 334.7964f);
			break;
		
		case 22:
			func_176(45.2181f, 6341.107f, 30.2296f, 14.3964f);
			func_176(41.6057f, 6339.476f, 30.2306f, 14.3964f);
			func_176(39.2508f, 6359.469f, 30.2398f, 207.3965f);
			func_176(36.3203f, 6356.893f, 30.2398f, 207.3965f);
			func_176(51.6043f, 6365.022f, 30.2399f, 33.5965f);
			func_176(65.6465f, 6380.626f, 30.2398f, 212.9964f);
			func_176(24.8587f, 6366.36f, 30.2286f, 32.7965f);
			func_176(19.6254f, 6360.736f, 30.2305f, 32.7965f);
			break;
		
		case 28:
			func_176(94.0245f, 181.2181f, 103.5566f, 160.3953f);
			func_176(91.0039f, 182.2811f, 103.6179f, 160.3953f);
			func_176(68.365f, 148.2105f, 103.5812f, 339.9951f);
			func_176(62.2104f, 150.5185f, 103.6101f, 339.9951f);
			func_176(69.5198f, 186.4278f, 103.9415f, 69.7949f);
			func_176(62.59f, 189.0833f, 103.9981f, 69.7949f);
			func_176(55.6095f, 191.8089f, 104.2827f, 69.7949f);
			func_176(154.7309f, 182.1333f, 104.6903f, 160.1945f);
			break;
		
		case 31:
			func_176(322.4916f, -714.5293f, 28.1574f, 158.5941f);
			func_176(329.5591f, -694.4284f, 28.1656f, 158.5941f);
			func_176(324.565f, -684.3934f, 28.3133f, 247.194f);
			func_176(326.4054f, -679.9403f, 28.3192f, 247.194f);
			func_176(297.1177f, -804.3891f, 28.4859f, 160.594f);
			func_176(288.5461f, -814.6994f, 28.1563f, 163.194f);
			func_176(286.0127f, -821.7357f, 28.3093f, 163.194f);
			func_176(283.6725f, -828.9533f, 28.1247f, 158.994f);
			break;
		
		case 29:
			func_176(-1448.551f, -355.0512f, 43.3715f, 313.3925f);
			func_176(-1454.819f, -359.998f, 42.7885f, 311.3925f);
			func_176(-1462.675f, -360.1352f, 42.9255f, 223.392f);
			func_176(-1447.965f, -368.3028f, 42.5412f, 5.9918f);
			func_176(-1468.678f, -353.4619f, 43.2024f, 217.7916f);
			func_176(-1473.219f, -346.7773f, 43.5318f, 213.9913f);
			func_176(-1490.742f, -420.1957f, 35.9291f, 229.1911f);
			func_176(-1496.003f, -395.7657f, 38.1394f, 45.7909f);
			break;
		
		case 30:
			func_176(-1174.491f, -1381.01f, 3.9253f, 116.5903f);
			func_176(-1183.148f, -1392.559f, 3.6319f, 304.9901f);
			func_176(-1160.964f, -1417.759f, 3.7043f, 65.7899f);
			func_176(-1151.611f, -1411.377f, 3.9411f, 63.5895f);
			func_176(-1167.187f, -1424.07f, 3.4884f, 123.5897f);
			func_176(-1148.22f, -1409.164f, 4.0217f, 63.5895f);
			func_176(-1137.11f, -1372.818f, 3.8993f, 27.5895f);
			func_176(-1140.608f, -1365.747f, 4.0573f, 27.5895f);
			break;
		
		case 27:
			func_176(1414.237f, -1656.344f, 60.2449f, 332.7893f);
			func_176(1416.668f, -1659.933f, 60.6982f, 332.7893f);
			func_176(1419.327f, -1663.972f, 61.2382f, 332.7893f);
			func_176(1421.557f, -1667.367f, 61.7479f, 332.7893f);
			func_176(1423.744f, -1670.853f, 62.3125f, 332.7893f);
			func_176(1412.157f, -1652.746f, 59.9105f, 332.7893f);
			func_176(1426.201f, -1673.598f, 62.7133f, 330.1893f);
			func_176(1435.804f, -1694.73f, 65.0743f, 352.5892f);
			break;
		
		case 33:
			func_176(2810.787f, 4435.92f, 47.5295f, 20.7996f);
			func_176(2808.413f, 4443.922f, 47.3732f, 14.7995f);
			func_176(2806.298f, 4451.786f, 47.1865f, 15.3995f);
			func_176(2803.925f, 4459.858f, 46.9823f, 15.3995f);
			func_176(2801.756f, 4467.755f, 46.8147f, 15.3995f);
			func_176(2893.563f, 4430.258f, 47.338f, 105.9994f);
			func_176(2903.725f, 4425.854f, 47.3523f, 23.1992f);
			func_176(2907.076f, 4418.059f, 47.6301f, 23.1992f);
			break;
		
		case 36:
			func_176(1680.448f, 4821.131f, 41.0599f, 186.399f);
			func_176(1679.76f, 4829.447f, 40.9167f, 186.399f);
			func_176(1678.668f, 4838.03f, 41.0221f, 187.7989f);
			func_176(1677.612f, 4846.028f, 41.0452f, 187.7989f);
			func_176(1675.851f, 4860.434f, 41.0901f, 187.7989f);
			func_176(1674.843f, 4868.343f, 41.0684f, 187.7989f);
			func_176(1673.543f, 4875.752f, 41.0684f, 186.7986f);
			func_176(1672.525f, 4884.972f, 41.0478f, 186.7986f);
			break;
		
		case 34:
			func_176(422.863f, 3583.901f, 32.2386f, 313.5986f);
			func_176(426.6211f, 3583.208f, 32.2386f, 313.5986f);
			func_176(430.466f, 3582.042f, 32.2386f, 313.5986f);
			func_176(434.2751f, 3580.881f, 32.2386f, 313.5986f);
			func_176(438.1525f, 3579.911f, 32.2386f, 313.5986f);
			func_176(442.0173f, 3578.948f, 32.2386f, 313.5986f);
			func_176(420.2694f, 3572.995f, 32.2385f, 353.7984f);
			func_176(424.4825f, 3572.1f, 32.2386f, 348.1984f);
			break;
		
		case 35:
			func_176(627.005f, 2726.019f, 40.7692f, 4.3984f);
			func_176(620.9771f, 2725.759f, 40.7897f, 4.3984f);
			func_176(614.8536f, 2725.355f, 40.8321f, 4.3984f);
			func_176(611.1158f, 2737.387f, 40.9734f, 185.3984f);
			func_176(598.9713f, 2736.261f, 41.0602f, 186.5986f);
			func_176(592.6151f, 2735.886f, 41.0602f, 186.5986f);
			func_176(586.0421f, 2735.9f, 41.0535f, 186.5986f);
			func_176(627.4468f, 2742.742f, 40.8963f, 183.5979f);
			break;
		
		case 32:
			func_176(214.3318f, 2492.26f, 53.9736f, 312.7978f);
			func_176(213.9953f, 2496.666f, 53.8128f, 312.7978f);
			func_176(213.7524f, 2501.251f, 53.5958f, 312.7978f);
			func_176(213.6645f, 2505.908f, 53.3477f, 312.7978f);
			func_176(213.4478f, 2510.734f, 53.1055f, 312.7978f);
			func_176(212.9148f, 2515.268f, 52.9376f, 312.7978f);
			func_176(211.5983f, 2519.216f, 52.6753f, 312.7978f);
			func_176(210.1288f, 2523.187f, 52.3493f, 312.7978f);
			break;
		
		case 38:
			func_176(153.6785f, -2476.192f, 4.9877f, 178.4004f);
			func_176(150.9209f, -2516.979f, 4.9909f, 179.9999f);
			func_176(150.9499f, -2524.965f, 4.9905f, 179.9999f);
			func_176(153.866f, -2467.242f, 4.9877f, 178.4004f);
			func_176(150.8115f, -2533.139f, 4.9895f, 180.0004f);
			func_176(153.8647f, -2433.386f, 5.2336f, 170.2002f);
			func_176(142.7427f, -2536.147f, 5f, 205.0002f);
			func_176(138.8267f, -2535.865f, 5f, 205.0002f);
			break;
		
		case 41:
			func_176(-341.4255f, -2734.451f, 5.0413f, 314.8f);
			func_176(-334.0134f, -2741.43f, 5.0269f, 314.8f);
			func_176(-329.7832f, -2745.604f, 5.0196f, 314.8f);
			func_176(-336.4781f, -2716.139f, 5.0028f, 134.1994f);
			func_176(-334.2752f, -2718.888f, 5.0048f, 135.1992f);
			func_176(-327.6603f, -2725.645f, 5.0103f, 135.1992f);
			func_176(-323.1619f, -2730.345f, 5.0099f, 135.1992f);
			func_176(-316.3481f, -2737.087f, 5.0033f, 135.1992f);
			break;
		
		case 39:
			func_176(1143.73f, -3105.091f, 4.8989f, 146.1979f);
			func_176(1140.009f, -3104.954f, 4.8985f, 146.1979f);
			func_176(1136.267f, -3104.69f, 4.8969f, 146.1979f);
			func_176(1132.732f, -3104.277f, 4.8944f, 146.1979f);
			func_176(1128.724f, -3104.54f, 4.896f, 146.1979f);
			func_176(1125.106f, -3104.057f, 4.8942f, 146.1979f);
			func_176(1117.8f, -3103.674f, 4.8922f, 146.1979f);
			func_176(1114.015f, -3103.448f, 4.8931f, 146.1979f);
			break;
		
		case 40:
			func_176(653.1188f, -2700.255f, 5.2101f, 24.7971f);
			func_176(656.1305f, -2707.245f, 5.214f, 24.7971f);
			func_176(659.3307f, -2714.378f, 5.2188f, 22.7968f);
			func_176(662.2627f, -2722.228f, 5.2188f, 19.1968f);
			func_176(649.2115f, -2728.359f, 5.1124f, 20.5967f);
			func_176(646.2606f, -2720.833f, 5.1103f, 21.3967f);
			func_176(643.4582f, -2713.846f, 5.1099f, 21.3967f);
			func_176(640.3513f, -2706.571f, 5.108f, 21.3967f);
			break;
		
		case 37:
			func_176(-260.5913f, -2615.255f, 5.0502f, 274.5953f);
			func_176(-253.2161f, -2614.896f, 5.0502f, 271.5953f);
			func_176(-245.6569f, -2614.862f, 5.0502f, 271.5953f);
			func_176(-238.214f, -2614.847f, 5.0502f, 271.5953f);
			func_176(-238.013f, -2630.961f, 5.0331f, 271.3949f);
			func_176(-260.9724f, -2631.418f, 5.0355f, 276.9951f);
			func_176(-253.401f, -2631.108f, 5.0319f, 272.195f);
			func_176(-245.5563f, -2631.06f, 5.0323f, 272.195f);
			break;
		
		case 83:
			func_176(-1190.795f, -3371.393f, 12.945f, 348.399f);
			func_176(-1185.634f, -3373.893f, 12.945f, 348.399f);
			func_176(-1114.818f, -3414.185f, 12.945f, 314.199f);
			func_176(-1110.976f, -3416.37f, 12.945f, 314.199f);
			func_176(-1098.621f, -3460.792f, 12.9453f, 329.799f);
			func_176(-1093.31f, -3463.464f, 12.9453f, 329.799f);
			func_176(-1089.433f, -3443.234f, 12.945f, 329.799f);
			func_176(-1084.271f, -3446.31f, 12.945f, 329.799f);
			func_176(-1093.808f, -3452.407f, 12.9451f, 329.799f);
			func_176(-1088.383f, -3455.466f, 12.9451f, 329.799f);
			func_176(-1118.474f, -3411.385f, 12.9451f, 313.199f);
			func_176(-1181.003f, -3375.658f, 12.945f, 346.799f);
			func_176(-1212.071f, -3382.283f, 12.9451f, 328.999f);
			func_176(-1217.708f, -3378.623f, 12.9451f, 328.999f);
			func_176(-1216.986f, -3390.396f, 12.9452f, 328.999f);
			func_176(-1222.566f, -3386.707f, 12.9452f, 328.999f);
			func_176(-1222.06f, -3398.882f, 12.9452f, 328.999f);
			func_176(-1227.698f, -3394.946f, 12.9451f, 328.999f);
			func_176(-1097.517f, -3472.086f, 12.9453f, 328.999f);
			func_176(-1102.951f, -3468.619f, 12.9452f, 328.999f);
			func_176(-1227.253f, -3407.38f, 12.9452f, 328.999f);
			func_176(-1232.836f, -3403.572f, 12.9452f, 328.999f);
			break;
		
		case 84:
			func_176(-1364.879f, -3285.201f, 12.945f, 330.2f);
			func_176(-1359.229f, -3288.52f, 12.945f, 330.2f);
			func_176(-1369.636f, -3293.617f, 12.945f, 330.2f);
			func_176(-1363.881f, -3296.796f, 12.945f, 330.2f);
			func_176(-1432.898f, -3247.702f, 12.945f, 330.2f);
			func_176(-1437.282f, -3255.429f, 12.945f, 330.2f);
			func_176(-1441.623f, -3262.969f, 12.945f, 330.2f);
			func_176(-1443.954f, -3251.006f, 12.945f, 330.2f);
			func_176(-1374.159f, -3301.61f, 12.945f, 330.2f);
			func_176(-1368.508f, -3304.924f, 12.945f, 330.2f);
			func_176(-1359.905f, -3276.118f, 12.9448f, 330.4f);
			func_176(-1354.228f, -3279.63f, 12.9448f, 330.4f);
			func_176(-1406.493f, -3246.223f, 12.9449f, 344.5997f);
			func_176(-1411.058f, -3243.62f, 12.9449f, 344.5997f);
			func_176(-1415.326f, -3241.014f, 12.9449f, 344.5997f);
			func_176(-1419.899f, -3238.116f, 12.9449f, 344.5997f);
			func_176(-1370.986f, -3268.945f, 12.9449f, 322.3996f);
			func_176(-1365.735f, -3272.363f, 12.9449f, 322.3996f);
			func_176(-1373.341f, -3313.206f, 12.9448f, 329.5996f);
			func_176(-1379.091f, -3310.004f, 12.9448f, 330.7996f);
			func_176(-1436.989f, -3228.515f, 12.9449f, 343.9996f);
			func_176(-1444.064f, -3273.751f, 12.945f, 330.7996f);
			break;
		
		case 85:
			func_176(-2060.105f, 3186.159f, 31.81f, 329.599f);
			func_176(-2065.521f, 3189.007f, 31.81f, 150.199f);
			func_176(-2055.006f, 3194.989f, 31.81f, 329.599f);
			func_176(-2060.471f, 3197.816f, 31.81f, 150.199f);
			func_176(-2049.611f, 3204.032f, 31.81f, 329.599f);
			func_176(-2055.048f, 3206.958f, 31.81f, 150.199f);
			func_176(-2049.627f, 3216.253f, 31.81f, 150.199f);
			func_176(-2039.024f, 3222.121f, 31.81f, 329.599f);
			func_176(-2044.17f, 3213.208f, 31.81f, 329.599f);
			func_176(-2044.672f, 3224.638f, 31.81f, 150.199f);
			func_176(-2060.486f, 3165.928f, 31.8103f, 133.9988f);
			func_176(-2055.707f, 3163.053f, 31.8103f, 133.9988f);
			func_176(-2050.911f, 3160.092f, 31.8103f, 133.9988f);
			func_176(-1974.635f, 3137.847f, 31.8103f, 149.5986f);
			func_176(-1970.354f, 3145.22f, 31.8103f, 149.5986f);
			func_176(-1965.709f, 3153.221f, 31.8103f, 149.5986f);
			func_176(-1960.991f, 3161.346f, 31.8103f, 149.5986f);
			func_176(-1983.17f, 3131.33f, 31.8103f, 149.5986f);
			func_176(-1976.614f, 3127.627f, 31.8103f, 149.5986f);
			func_176(-1991.582f, 3127.264f, 31.8103f, 167.7985f);
			func_176(-1995.584f, 3129.369f, 31.8103f, 167.7985f);
			func_176(-1999.335f, 3131.182f, 31.8103f, 167.7985f);
			break;
		
		case 86:
			func_176(-1843.828f, 3085.094f, 31.81f, 165.8f);
			func_176(-1828.571f, 3084.114f, 31.841f, 329.2f);
			func_176(-1823.414f, 3092.762f, 31.843f, 330f);
			func_176(-1819.045f, 3100.435f, 31.845f, 330f);
			func_176(-1833.313f, 3075.722f, 31.838f, 330f);
			func_176(-1847.648f, 3076.8f, 31.835f, 165.8f);
			func_176(-1838.479f, 3078.576f, 31.863f, 150.599f);
			func_176(-1833.605f, 3086.784f, 31.863f, 150.599f);
			func_176(-1828.424f, 3095.617f, 31.863f, 150.599f);
			func_176(-1823.95f, 3102.821f, 31.862f, 150.599f);
			func_176(-1819.284f, 3110.67f, 31.8615f, 150.2f);
			func_176(-1814.545f, 3108.229f, 31.8476f, 330.6f);
			func_176(-1853.939f, 3076.271f, 31.8105f, 176.7996f);
			func_176(-1857.726f, 3078.668f, 31.8105f, 176.7996f);
			func_176(-1861.626f, 3080.777f, 31.8105f, 176.7996f);
			func_176(-1865.584f, 3083.136f, 31.8103f, 176.7996f);
			func_176(-1869.255f, 3085.565f, 31.8103f, 176.7996f);
			func_176(-1913.263f, 3125.342f, 31.8103f, 150.7988f);
			func_176(-1917.546f, 3127.678f, 31.8103f, 150.7988f);
			func_176(-1922.74f, 3130.555f, 31.8103f, 150.7988f);
			func_176(-1927.676f, 3133.413f, 31.8103f, 150.7988f);
			func_176(-1932.418f, 3136.273f, 31.8103f, 150.7988f);
			break;
		
		case 87:
			func_176(-2538.561f, 3303.172f, 31.814f, 296.999f);
			func_176(-2530.309f, 3307.445f, 31.816f, 296.999f);
			func_176(-2521.733f, 3311.833f, 31.817f, 296.999f);
			func_176(-2512.881f, 3316.428f, 31.819f, 296.999f);
			func_176(-2502.952f, 3321.518f, 31.821f, 296.999f);
			func_176(-2542.613f, 3310.728f, 31.814f, 296.999f);
			func_176(-2534.195f, 3314.753f, 31.815f, 296.999f);
			func_176(-2525.635f, 3318.97f, 31.817f, 296.999f);
			func_176(-2516.674f, 3323.545f, 31.819f, 296.999f);
			func_176(-2507.153f, 3328.454f, 31.82f, 296.999f);
			func_176(-2547.689f, 3298.791f, 31.812f, 296.999f);
			func_176(-2551.261f, 3306.304f, 31.8123f, 296.999f);
			func_176(-2497.446f, 3333.296f, 31.821f, 296.999f);
			func_176(-2494.089f, 3326.065f, 31.8218f, 296.999f);
			func_176(-2453.405f, 3255.388f, 31.8276f, 167.1986f);
			func_176(-2449.37f, 3253.417f, 31.8276f, 167.1986f);
			func_176(-2445.49f, 3251.138f, 31.8276f, 167.1986f);
			func_176(-2441.575f, 3248.888f, 31.8276f, 167.1986f);
			func_176(-2437.319f, 3246.554f, 31.8277f, 167.1986f);
			func_176(-2432.723f, 3244.232f, 31.8277f, 167.1986f);
			func_176(-2485.273f, 3330.891f, 31.8239f, 298.1979f);
			func_176(-2488.82f, 3338.365f, 31.8226f, 298.1979f);
			break;
		
		case 89:
			if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_59 == 0)
			{
				func_176(1284.416f, 2890.299f, 45.0276f, 336.3999f);
				func_176(1273.248f, 2901.428f, 45.0426f, 338.3999f);
				func_176(1262.945f, 2911.535f, 43.2959f, 341.9999f);
				func_176(1272.094f, 2873.387f, 45.3443f, 328.5991f);
				func_176(1259.785f, 2892.217f, 45.1126f, 339.9999f);
				func_176(1231.279f, 2910.881f, 43.3085f, 12f);
				func_176(1306.515f, 2839.475f, 46.8947f, 132.3996f);
				func_176(1307.453f, 2825.276f, 45.1566f, 127.1998f);
				func_176(1257.029f, 2872.157f, 45.9766f, 338.5992f);
				func_176(1225.764f, 2930.095f, 41.6173f, 14.7999f);
			}
			else
			{
				func_176(1265.123f, 2836.949f, 47.1021f, 119.9996f);
				func_176(1258.145f, 2831.643f, 46.4503f, 135.7993f);
				func_176(1240.847f, 2828.721f, 46.4388f, 39.5992f);
				func_176(1236.877f, 2835.49f, 46.3491f, 22.9991f);
				func_176(1235.697f, 2843.403f, 46.0231f, 2.7991f);
				func_176(1237.686f, 2850.607f, 45.5261f, 335.5991f);
				func_176(1241.126f, 2858.816f, 45.0176f, 339.7991f);
				func_176(1249.715f, 2810.588f, 47.2648f, 255.1992f);
				func_176(1257.696f, 2808.609f, 47.014f, 266.1992f);
				func_176(1265.577f, 2808.353f, 46.7598f, 277.199f);
				func_176(1273.808f, 2808.484f, 46.3872f, 263.999f);
				func_176(1282.535f, 2807.134f, 45.9705f, 250.7989f);
				func_176(1290.168f, 2803.745f, 45.8005f, 238.7988f);
				func_176(1296.445f, 2798.777f, 46.0903f, 228.9988f);
				func_176(1302.041f, 2792.33f, 45.957f, 221.7987f);
				func_176(1251.389f, 2825.818f, 45.9856f, 119.1982f);
				func_176(1285.48f, 2819.238f, 45.044f, 228.3993f);
				func_176(1293.023f, 2814.164f, 44.8859f, 233.399f);
				func_176(1242.18f, 2814.153f, 47.7108f, 227.3991f);
				func_176(1236.362f, 2819.623f, 47.6845f, 224.399f);
				func_176(1231.532f, 2825.855f, 47.4649f, 210.5992f);
				func_176(1228.177f, 2833.423f, 47.3171f, 197.5993f);
				func_176(1243.095f, 2866.749f, 44.6219f, 353.7992f);
				func_176(1307.346f, 2785.787f, 46.1136f, 219.9997f);
				func_176(1300.752f, 2808.224f, 44.5688f, 228.9997f);
				func_176(1306.571f, 2802.468f, 44.6275f, 224.1992f);
				func_176(1244.465f, 2875.697f, 44.5839f, 353.7992f);
				func_176(1312.441f, 2795.427f, 45.2701f, 218.5991f);
			}
			break;
		
		case 90:
			if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_59 == 0)
			{
				func_176(14.4916f, 2660.726f, 79.0178f, 310.1999f);
				func_176(3.855f, 2672.388f, 78.437f, 319.2f);
				func_176(-7.057f, 2682.247f, 77.472f, 319.2f);
				func_176(-14.041f, 2663.43f, 77.4221f, 319.2f);
				func_176(41.8086f, 2597.059f, 81.3524f, 301.9997f);
				func_176(60.2273f, 2609.745f, 79.5672f, 305.9998f);
				func_176(34.0188f, 2659.723f, 78.9894f, 314.2f);
				func_176(29.4879f, 2675.34f, 76.0202f, 314.2f);
				func_176(19.0088f, 2686.16f, 75.6897f, 314.2f);
				func_176(7.6101f, 2697.113f, 76.2923f, 314.2f);
			}
			else
			{
				func_176(50.6405f, 2633.902f, 79.4503f, 305.1998f);
				func_176(46.2894f, 2639.951f, 79.9122f, 305.1998f);
				func_176(55.3668f, 2627.773f, 79.6363f, 305.1998f);
				func_176(59.9522f, 2620.408f, 80.0499f, 305.1998f);
				func_176(42.1486f, 2646.073f, 80.108f, 305.1998f);
				func_176(68.1481f, 2630.07f, 77.0725f, 305.1998f);
				func_176(62.6048f, 2637.014f, 76.1722f, 305.1998f);
				func_176(57.3543f, 2643.56f, 75.5301f, 305.1998f);
				func_176(52.611f, 2649.698f, 76.1354f, 305.1998f);
				func_176(74.5845f, 2640.475f, 72.602f, 305.1998f);
				func_176(68.5462f, 2646.784f, 71.6298f, 305.1998f);
				func_176(62.426f, 2652.977f, 71.7029f, 305.1998f);
				func_176(79.5597f, 2650.835f, 68.668f, 305.1998f);
				func_176(72.6035f, 2656.857f, 67.3294f, 305.1998f);
				func_176(83.4156f, 2660.237f, 64.3198f, 305.1998f);
				func_176(102.851f, 2688.009f, 51.732f, 224f);
				func_176(109.815f, 2681.012f, 51.112f, 224f);
				func_176(116.355f, 2674.26f, 50.529f, 224f);
				func_176(125.138f, 2665.98f, 49.8f, 224f);
				func_176(132.228f, 2659.865f, 49.26f, 228.4f);
				func_176(139.354f, 2653.536f, 48.737f, 228.4f);
				func_176(88.512f, 2702.995f, 53.042f, 224.199f);
				func_176(81.565f, 2710.357f, 53.67f, 224.199f);
				func_176(75.156f, 2716.981f, 54.223f, 224.199f);
				func_176(68.442f, 2723.806f, 54.775f, 226.199f);
				func_176(61.449f, 2730.606f, 55.308f, 226.199f);
				func_176(53.702f, 2738.167f, 55.855f, 226.199f);
				func_176(91.2443f, 2667.262f, 59.9931f, 314.599f);
			}
			break;
		
		case 91:
			if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_59 == 0)
			{
				func_176(2772.011f, 3889.062f, 42.94f, 145.4f);
				func_176(2785.592f, 3880.409f, 43.695f, 146.199f);
				func_176(2788.387f, 3898.107f, 45.364f, 140.999f);
				func_176(2801.558f, 3912.485f, 44.931f, 131.999f);
				func_176(2805.531f, 3892.253f, 47.01f, 106.399f);
				func_176(2824.791f, 3894.787f, 47.4293f, 105.3989f);
				func_176(2761.739f, 3945.948f, 44.59f, 135.398f);
				func_176(2814.589f, 3930.404f, 44.816f, 134.9978f);
				func_176(2747.627f, 3930.92f, 43.8497f, 138.3978f);
				func_176(2796.312f, 3928.316f, 42.6106f, 134.5979f);
			}
			else
			{
				func_176(2730.174f, 3890.294f, 42.435f, 54.6f);
				func_176(2714.633f, 3918.283f, 42.938f, 16f);
				func_176(2716.533f, 3910.15f, 42.699f, 19.6f);
				func_176(2757.499f, 3874.045f, 42.724f, 64.8f);
				func_176(2747.99f, 3878.676f, 42.561f, 62.8f);
				func_176(2738.337f, 3884.314f, 42.614f, 57.2f);
				func_176(2711.836f, 3926.255f, 42.931f, 21.6f);
				func_176(2707.586f, 3934.558f, 42.984f, 27.6f);
				func_176(2702.361f, 3943.039f, 42.951f, 30.6f);
				func_176(2696.696f, 3951.317f, 43.012f, 34.8f);
				func_176(2766.778f, 3868.911f, 42.822f, 59.8f);
				func_176(2775.397f, 3863.697f, 43.204f, 54.2f);
				func_176(2738.841f, 3869.927f, 42.492f, 242.799f);
				func_176(2746.49f, 3865.861f, 42.808f, 239.599f);
				func_176(2754.829f, 3861.039f, 42.906f, 240.799f);
				func_176(2762.616f, 3856.316f, 42.895f, 240.799f);
				func_176(2770.463f, 3851.383f, 43.216f, 233.199f);
				func_176(2778.129f, 3844.914f, 43.26f, 229.199f);
				func_176(2785.341f, 3837.918f, 43.141f, 224.999f);
				func_176(2730.65f, 3875.186f, 42.437f, 231.999f);
				func_176(2724.14f, 3880.885f, 42.469f, 224.599f);
				func_176(2718.541f, 3887.508f, 42.614f, 217.399f);
				func_176(2783.246f, 3857.409f, 43.175f, 45.199f);
				func_176(2790.716f, 3850.631f, 43.125f, 45.199f);
				func_176(2690.655f, 3959.246f, 43.255f, 40.199f);
				func_176(2797.912f, 3842.523f, 43.166f, 40.199f);
				func_176(2791.836f, 3830.845f, 43.14f, 221.999f);
				func_176(2712.952f, 3894.566f, 42.484f, 14.799f);
			}
			break;
		
		case 92:
			if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_59 == 0)
			{
				func_176(3374.661f, 5559.709f, 12.3726f, 138.7999f);
				func_176(3366.365f, 5569.449f, 13.9704f, 112.8f);
				func_176(3358.493f, 5581.463f, 16.1783f, 112.8f);
				func_176(3356.705f, 5595.363f, 15.4029f, 112.8f);
				func_176(3336.662f, 5552.357f, 19.491f, 249.6f);
				func_176(3336.791f, 5567.825f, 20.432f, 249.6f);
				func_176(3335.259f, 5599.046f, 22.4606f, 249.6f);
				func_176(3336.811f, 5613.029f, 22.2159f, 249.6f);
				func_176(3354.696f, 5609.699f, 15.9453f, 111.3999f);
				func_176(3354.006f, 5624.206f, 16.018f, 111.3999f);
			}
			else
			{
				func_176(3372.053f, 5506.134f, 20.8174f, 99.5999f);
				func_176(3374.923f, 5520.177f, 20.3207f, 86f);
				func_176(3350.643f, 5490.432f, 18.8423f, 139.9997f);
				func_176(3364.189f, 5502.98f, 19.648f, 125.7999f);
				func_176(3354.101f, 5484.773f, 19.619f, 116.399f);
				func_176(3365.919f, 5519.949f, 18.8008f, 102.9988f);
				func_176(3341.889f, 5506.809f, 19.584f, 161.199f);
				func_176(3338.581f, 5497.709f, 19.376f, 161.199f);
				func_176(3335.674f, 5489.348f, 19.542f, 161.199f);
				func_176(3332.019f, 5479.563f, 19.738f, 150.998f);
				func_176(3327.404f, 5470.857f, 19.302f, 159.398f);
				func_176(3323.903f, 5461.49f, 18.492f, 156.398f);
				func_176(3320.016f, 5452.957f, 17.834f, 153.198f);
				func_176(3315.782f, 5444.61f, 17.115f, 150.798f);
				func_176(3335.451f, 5455.723f, 18.2323f, 162.1979f);
				func_176(3338.788f, 5464.803f, 18.8631f, 163.7977f);
				func_176(3362.476f, 5488.211f, 20.4432f, 108.5979f);
				func_176(3371.259f, 5491.274f, 21.5286f, 104.9989f);
				func_176(3342.201f, 5517.014f, 19.642f, 170.199f);
				func_176(3343.267f, 5526.085f, 18.902f, 175.598f);
				func_176(3343.531f, 5536.075f, 18.217f, 178.598f);
				func_176(3357.257f, 5496.71f, 18.9729f, 132.5977f);
				func_176(3342.346f, 5473.345f, 19.1235f, 159.3987f);
				func_176(3347.236f, 5480.447f, 19.4672f, 131.199f);
				func_176(3357.623f, 5516.9f, 16.9016f, 118.7991f);
				func_176(3361.366f, 5545.886f, 15.5532f, 118.7991f);
				func_176(3352.612f, 5541.013f, 16.3238f, 131.999f);
				func_176(3343.349f, 5546.494f, 17.8738f, 173.9988f);
			}
			break;
		
		case 93:
			if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_59 == 0)
			{
				func_176(43.848f, 6845.657f, 13.379f, 247.2f);
				func_176(50.379f, 6861.146f, 15.105f, 247.2f);
				func_176(32.501f, 6871.777f, 13.3283f, 247.2f);
				func_176(38.437f, 6885.796f, 13.3627f, 247.2f);
				func_176(55.806f, 6875.081f, 14.824f, 247.2f);
				func_176(11.616f, 6877.079f, 11.466f, 247.2f);
				func_176(18.954f, 6891.633f, 11.37f, 247.2f);
				func_176(26.68f, 6907.587f, 11.869f, 247.2f);
				func_176(7.479f, 6907.895f, 12.024f, 247.2f);
				func_176(44.9981f, 6901.352f, 11.9426f, 247.2f);
			}
			else
			{
				func_176(35.591f, 6836.608f, 13.288f, 274.4f);
				func_176(36.028f, 6830.135f, 13.801f, 270.8f);
				func_176(35.114f, 6823.884f, 14.527f, 260.8f);
				func_176(48.779f, 6838.693f, 14.337f, 273.6f);
				func_176(56.738f, 6821.8f, 15.244f, 244.8f);
				func_176(48.377f, 6825.895f, 14.656f, 249.8f);
				func_176(49.11f, 6831.439f, 13.991f, 274.8f);
				func_176(53.544f, 6818.275f, 16.342f, 243f);
				func_176(46.162f, 6821.945f, 15.483f, 249.8f);
				func_176(60.129f, 6836.8f, 15.605f, 269.6f);
				func_176(40.88f, 6802.952f, 20.113f, 242.6f);
				func_176(48.203f, 6799.134f, 20.897f, 244.4f);
				func_176(70.449f, 6809.271f, 16.846f, 243f);
				func_176(61.436f, 6814.266f, 16.71f, 244.2f);
				func_176(56.142f, 6793.458f, 19.806f, 242.6f);
				func_176(65.759f, 6791.12f, 18.433f, 276.4f);
				func_176(77.305f, 6805.391f, 18.558f, 245.6f);
				func_176(85.893f, 6800.243f, 18.535f, 249.8f);
				func_176(56.85f, 6780.582f, 18.822f, 297.999f);
				func_176(65.636f, 6784.669f, 18.789f, 293.799f);
				func_176(74.121f, 6788.498f, 18.739f, 293.799f);
				func_176(97.779f, 6796.32f, 19.02f, 276.799f);
				func_176(106.76f, 6796.983f, 18.914f, 272.599f);
				func_176(112.387f, 6802.858f, 18.994f, 210.599f);
				func_176(117.58f, 6802.644f, 18.663f, 209.399f);
				func_176(122.481f, 6802.693f, 18.468f, 209.399f);
				func_176(127.182f, 6802.686f, 18.218f, 209.399f);
				func_176(132.429f, 6801.882f, 17.949f, 209.399f);
			}
			break;
		
		case 94:
			if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_59 == 0)
			{
				func_176(-2213.552f, 2283.726f, 31.7464f, 293.7993f);
				func_176(-2196.71f, 2290.824f, 32.0819f, 293.7993f);
				func_176(-2232.397f, 2274.252f, 31.602f, 296.7993f);
				func_176(-2180.471f, 2296.206f, 32.9612f, 287.5992f);
				func_176(-2180.87f, 2419.649f, 0.2324f, 147.7987f);
				func_176(-2180.166f, 2436.91f, 0.2325f, 144.5987f);
				func_176(-2185.271f, 2457.022f, 0.2062f, 160.1985f);
				func_176(-2329.465f, 2393.603f, 2.5699f, 289.7982f);
				func_176(-2328.978f, 2380.406f, 2.7911f, 289.7982f);
				func_176(-2333.665f, 2366.641f, 3.4939f, 289.7982f);
			}
			else
			{
				func_176(-2239.671f, 2390.292f, 10.756f, 189.2002f);
				func_176(-2217.413f, 2392.471f, 12.2202f, 189.2002f);
				func_176(-2238.863f, 2381.56f, 13.1388f, 185.2003f);
				func_176(-2215.695f, 2383.035f, 14.9809f, 189.4004f);
				func_176(-2238.044f, 2372.67f, 15.07f, 187.4004f);
				func_176(-2215.96f, 2374.251f, 17.0939f, 187.4004f);
				func_176(-2237.494f, 2364.467f, 15.3155f, 186.2004f);
				func_176(-2216.857f, 2365.651f, 18.9029f, 173.0005f);
				func_176(-2218.526f, 2357.065f, 20.7893f, 179.0004f);
				func_176(-2237.625f, 2348.108f, 20.9097f, 179.0004f);
				func_176(-2218.447f, 2348.733f, 22.9621f, 179.0004f);
				func_176(-2238.18f, 2339.141f, 22.5602f, 174.8003f);
				func_176(-2218.771f, 2340.131f, 25.5237f, 177.2002f);
				func_176(-2238.998f, 2330.958f, 25.7263f, 175.8005f);
				func_176(-2219.221f, 2331.934f, 28.5604f, 177.8006f);
				func_176(-2219.077f, 2324.066f, 30.9043f, 198.8006f);
				func_176(-2239.413f, 2322.913f, 28.0647f, 177.8008f);
				func_176(-2240.014f, 2313.951f, 29.5314f, 170.6008f);
				func_176(-2241.543f, 2305.819f, 30.7136f, 163.4006f);
				func_176(-2244.904f, 2298.388f, 31.4166f, 148.2005f);
				func_176(-2249.31f, 2290.892f, 31.5742f, 139.2004f);
				func_176(-2211.896f, 2319.581f, 31.7538f, 259.4002f);
				func_176(-2203.961f, 2320.016f, 31.9895f, 271.4001f);
				func_176(-2255.106f, 2285.415f, 31.617f, 130.3999f);
				func_176(-2196.17f, 2320.341f, 32.2704f, 270.6003f);
				func_176(-2261.335f, 2280.203f, 31.6562f, 130.0002f);
				func_176(-2268.447f, 2275.528f, 31.7095f, 124.4001f);
				func_176(-2188.258f, 2319.985f, 32.5649f, 267.3998f);
			}
			break;
		
		case 95:
			if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_59 == 0)
			{
				func_176(4.0332f, 3378.618f, 41.0822f, 247.1989f);
				func_176(38.819f, 3321.2f, 37.0283f, 203.999f);
				func_176(26.877f, 3309.062f, 37.93f, 191.9991f);
				func_176(15.6727f, 3297.846f, 39.0535f, 191.9991f);
				func_176(-24.2865f, 3367.527f, 41.4783f, 264.399f);
				func_176(-23.1279f, 3352.254f, 40.52f, 280.399f);
				func_176(-25.5802f, 3337.243f, 40.7142f, 320.1988f);
				func_176(97.4844f, 3335.385f, 34.6164f, 7.9981f);
				func_176(20.409f, 3370.839f, 38.8393f, 235.799f);
				func_176(48.457f, 3336.586f, 35.8912f, 270.3979f);
			}
			else
			{
				func_176(25.9869f, 3349.706f, 36.0366f, 273.9994f);
				func_176(25.0176f, 3356.915f, 36.4258f, 276.9998f);
				func_176(36.2443f, 3351.358f, 36.2386f, 272.5997f);
				func_176(35.9352f, 3358.816f, 37.0033f, 276.7998f);
				func_176(25.9651f, 3342.673f, 36.2157f, 270.7997f);
				func_176(30.027f, 3292.351f, 38.604f, 140.199f);
				func_176(49.1614f, 3358.589f, 35.9759f, 263.5988f);
				func_176(48.288f, 3352.494f, 35.5841f, 261.1988f);
				func_176(23.897f, 3283.152f, 39.381f, 145.399f);
				func_176(60.9182f, 3356.21f, 35.8814f, 255.3988f);
				func_176(18.723f, 3274.025f, 40.054f, 155.799f);
				func_176(59.0177f, 3350.004f, 35.3204f, 255.7989f);
				func_176(36.958f, 3298.847f, 38.001f, 127.799f);
				func_176(54.165f, 3311.582f, 36.517f, 303.799f);
				func_176(61.607f, 3317.105f, 35.916f, 306.999f);
				func_176(68.994f, 3323.129f, 35.364f, 308.199f);
				func_176(76.266f, 3329.467f, 34.805f, 311.399f);
				func_176(82.757f, 3335.915f, 34.344f, 316.598f);
				func_176(46.5977f, 3306.196f, 37.1628f, 304.9976f);
				func_176(14.664f, 3263.688f, 40.931f, 160.398f);
				func_176(50.8234f, 3324.118f, 36.2129f, 305.1976f);
				func_176(11.7852f, 3256.101f, 41.7031f, 159.198f);
				func_176(89.575f, 3343.311f, 33.932f, 318.398f);
				func_176(58.4154f, 3329.423f, 35.6197f, 305.5979f);
				func_176(65.3201f, 3334.253f, 35.1903f, 306.5977f);
				func_176(72.1063f, 3339.793f, 34.8449f, 308.5977f);
				func_176(95.6614f, 3349.917f, 33.696f, 316.1977f);
				func_176(85.4387f, 3353.183f, 33.8047f, 317.9978f);
			}
			break;
		
		case 96:
			if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_59 == 0)
			{
				func_176(2135.708f, 1757.503f, 102.073f, 40.999f);
				func_176(2148.674f, 1764.557f, 102.75f, 40.999f);
				func_176(2160.511f, 1771.173f, 104.149f, 40.999f);
				func_176(2172.842f, 1777.391f, 105.369f, 40.999f);
				func_176(2127.938f, 1736.353f, 100.835f, 222.199f);
				func_176(2141.682f, 1739.865f, 99.833f, 222.199f);
				func_176(2152.786f, 1747.776f, 99.785f, 222.199f);
				func_176(2166.356f, 1754.682f, 100.07f, 220.399f);
				func_176(2090.66f, 1701.805f, 101.681f, 243.199f);
				func_176(2066.149f, 1716.735f, 102.112f, 228.2f);
			}
			else
			{
				func_176(2073.044f, 1725.935f, 102.5096f, 225.2f);
				func_176(2077.24f, 1730.299f, 102.5247f, 225.2f);
				func_176(2081.68f, 1734.742f, 102.5588f, 225.2f);
				func_176(2086.052f, 1739.045f, 102.6618f, 225.2f);
				func_176(2090.55f, 1743.53f, 102.6058f, 225.2f);
				func_176(2095.295f, 1748.274f, 102.3022f, 225.2f);
				func_176(2101.779f, 1721.807f, 101.927f, 225.2f);
				func_176(2107.08f, 1727.001f, 101.932f, 225.2f);
				func_176(2095.867f, 1716.475f, 101.925f, 225.2f);
				func_176(2112.387f, 1732.492f, 101.849f, 225.2f);
				func_176(2089.718f, 1710.779f, 101.978f, 225.2f);
				func_176(2111.639f, 1717.132f, 100.855f, 225.2f);
				func_176(2117.297f, 1722.655f, 100.704f, 225.2f);
				func_176(2105.821f, 1711.672f, 101.065f, 225.2f);
				func_176(2098.759f, 1704.866f, 101.209f, 225.2f);
				func_176(2121.208f, 1713.145f, 99.65f, 225.2f);
				func_176(2115.34f, 1707.542f, 99.829f, 225.2f);
				func_176(2109.211f, 1702.247f, 100.079f, 225.2f);
				func_176(2124.167f, 1704.036f, 98.584f, 225.2f);
				func_176(2118.181f, 1698.253f, 98.645f, 225.2f);
				func_176(2127.253f, 1694.878f, 97.078f, 225.2f);
				func_176(2117.786f, 1738.219f, 101.839f, 225.2f);
				func_176(2122.34f, 1728.011f, 100.627f, 225.2f);
				func_176(2126.288f, 1718.542f, 99.501f, 225.2f);
				func_176(2129.762f, 1709.847f, 98.352f, 225.2f);
				func_176(2132.765f, 1700.777f, 96.999f, 225.2f);
				func_176(2120.399f, 1689.165f, 97.388f, 225.2f);
				func_176(2098.994f, 1747.929f, 102.2403f, 225.2f);
			}
			break;
		
		case 97:
			if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_59 == 0)
			{
				func_176(1871.691f, 358.5369f, 162.1067f, 153.1979f);
				func_176(1858.966f, 351.2935f, 161.7614f, 166.598f);
				func_176(1873.611f, 342.6637f, 161.6936f, 142.998f);
				func_176(1887.645f, 343.1557f, 162.1659f, 138.5979f);
				func_176(1888.644f, 328.0839f, 161.7489f, 139.398f);
				func_176(1898.596f, 315.2232f, 161.4418f, 173.7979f);
				func_176(1896.729f, 266.5388f, 161.1619f, 113.5978f);
				func_176(1900.167f, 281.3884f, 161.7807f, 115.197f);
				func_176(1856.286f, 294.624f, 161.442f, 167.9966f);
				func_176(1868.622f, 309.7907f, 162.6084f, 155.1968f);
			}
			else
			{
				func_176(1856.378f, 255.9146f, 162.7158f, 147.6202f);
				func_176(1837.279f, 227.3696f, 165.2592f, 164.3995f);
				func_176(1835.192f, 219.3931f, 167.5468f, 169.9994f);
				func_176(1833.557f, 211.859f, 169.864f, 169.9994f);
				func_176(1839.534f, 194.4053f, 171.3841f, 172.9989f);
				func_176(1838.289f, 185.8157f, 171.2585f, 174.1989f);
				func_176(1837.478f, 177.0607f, 170.7063f, 174.1989f);
				func_176(1840.463f, 202.6959f, 170.8702f, 174.1989f);
				func_176(1836.296f, 168.7307f, 170.5786f, 174.1989f);
				func_176(1835.412f, 159.3162f, 170.4163f, 171.1989f);
				func_176(1826.91f, 214.9648f, 172.2502f, 18.7986f);
				func_176(1823.805f, 223.0288f, 172.0794f, 21.7986f);
				func_176(1820.599f, 231.144f, 172.2987f, 21.7986f);
				func_176(1817.245f, 239.1232f, 172.0878f, 21.7986f);
				func_176(1814.089f, 247.0423f, 171.7386f, 24.9986f);
				func_176(1810.879f, 255.6553f, 171.7517f, 19.3986f);
				func_176(1807.729f, 265.4899f, 172.2307f, 15.1986f);
				func_176(1823.147f, 197.3122f, 172.235f, 192.3984f);
				func_176(1824.641f, 184.4241f, 171.5948f, 183.3985f);
				func_176(1825.019f, 171.2314f, 170.5843f, 183.3985f);
				func_176(1824.748f, 162.8998f, 170.4961f, 173.1985f);
				func_176(1817.345f, 214.6964f, 172.5223f, 203.9982f);
				func_176(1813.466f, 222.3717f, 172.3316f, 200.9982f);
				func_176(1809.114f, 230.8225f, 172.346f, 205.1983f);
				func_176(1805.594f, 239.3896f, 172.0033f, 197.9984f);
				func_176(1802.515f, 247.4269f, 171.8964f, 197.9984f);
				func_176(1833.982f, 150.4025f, 170.411f, 163.7985f);
				func_176(1823.079f, 154.5105f, 170.8194f, 163.7985f);
			}
			break;
		
		case 123:
		case 124:
		case 125:
			func_162(896.357f, -3.23695f, 77.7645f, 147.3987f, iParam1, 0);
			func_162(899.759f, -5.54885f, 77.7645f, 147.3987f, iParam1, 0);
			func_162(903.021f, -7.62495f, 77.7645f, 147.3987f, iParam1, 0);
			func_162(906.474f, -9.70314f, 77.7645f, 147.3987f, iParam1, 0);
			func_162(909.884f, -11.888f, 77.7645f, 147.3987f, iParam1, 0);
			func_162(913.209f, -14.0965f, 77.7645f, 147.3987f, iParam1, 0);
			func_162(879.578f, 7.26725f, 77.7646f, 147.3987f, iParam1, 0);
			func_162(876.642f, 9.05555f, 77.7646f, 147.3987f, iParam1, 0);
			func_162(873.534f, 10.8622f, 77.7646f, 147.3987f, iParam1, 0);
			func_162(869.685f, -7.55887f, 77.7646f, 237.3985f, iParam1, 0);
			func_162(867.866f, -10.464f, 77.7646f, 237.3985f, iParam1, 0);
			func_162(866.077f, -13.4579f, 77.7646f, 237.3985f, iParam1, 0);
			func_162(864.322f, -16.4335f, 77.7646f, 237.3985f, iParam1, 0);
			func_162(862.534f, -19.2652f, 77.7644f, 237.3985f, iParam1, 0);
			func_162(887.524f, -18.7251f, 77.7647f, 237.3985f, iParam1, 0);
			func_162(885.594f, -21.7041f, 77.7647f, 237.3985f, iParam1, 0);
			func_162(883.691f, -24.7685f, 77.7647f, 237.3985f, iParam1, 0);
			func_162(881.827f, -27.7084f, 77.7644f, 237.3985f, iParam1, 0);
			func_162(880.013f, -30.5612f, 77.7644f, 237.3985f, iParam1, 0);
			func_162(884.931f, -17.2169f, 77.7646f, 57.5983f, iParam1, 0);
			func_162(883.043f, -20.1063f, 77.7646f, 57.5983f, iParam1, 0);
			func_162(881.118f, -22.9962f, 77.7644f, 57.5983f, iParam1, 0);
			func_162(879.345f, -25.9389f, 77.7644f, 57.5983f, iParam1, 0);
			func_162(877.631f, -28.8543f, 77.7644f, 57.5983f, iParam1, 0);
			func_162(903.231f, -28.6965f, 77.7647f, 57.5983f, iParam1, 0);
			func_162(901.368f, -31.6316f, 77.7647f, 57.5983f, iParam1, 0);
			func_162(899.552f, -34.4844f, 77.7647f, 57.5983f, iParam1, 0);
			func_162(897.669f, -37.4419f, 77.7647f, 57.5983f, iParam1, 0);
			func_162(895.831f, -40.3309f, 77.7647f, 57.5983f, iParam1, 0);
			func_162(932.842f, -25.6631f, 77.7647f, 147.798f, iParam1, 0);
			func_162(935.693f, -27.516f, 77.7647f, 147.798f, iParam1, 0);
			func_162(938.593f, -29.5809f, 77.7647f, 147.798f, iParam1, 0);
			break;
		
		default:
			break;
	}
}

void func_162(struct<3> Param0, float fParam1, int iParam2, bool bParam3)
{
	struct<2> Var0;
	struct<2> Var1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4;
	
	if (!iParam2 == 0)
	{
		func_73(iParam2, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
		fVar2 = (Var1.f_1 - Var0.f_1);
		if (bParam3)
		{
			fVar2 = (fVar2 * -1f);
		}
		fVar2 = (fVar2 * 0.5f);
		Var3 = { 0f, fVar2, 0f };
		Var4 = { unk_0x26C2ACB261895E70(Param0, fParam1, Var3) };
		func_176(Var4, fParam1);
	}
	else
	{
		func_176(Param0, fParam1);
	}
}

void func_163(int iParam0)
{
	switch (iParam0)
	{
		case 83:
			func_176(-1133.454f, -3371.672f, 12.945f, 329.799f);
			func_176(-1119.748f, -3379.991f, 12.945f, 329.799f);
			func_176(-1147.602f, -3363.505f, 12.945f, 329.799f);
			func_176(-1161.988f, -3354.852f, 12.945f, 329.799f);
			func_176(-1116.563f, -3358.99f, 12.945f, 329.799f);
			func_176(-1131.23f, -3350.104f, 12.945f, 329.799f);
			func_176(-1145.252f, -3341.608f, 12.945f, 329.799f);
			func_176(-1115.202f, -3339.265f, 12.945f, 329.799f);
			func_176(-1129.559f, -3330.697f, 12.945f, 329.799f);
			func_176(-1114.664f, -3320.954f, 12.945f, 329.799f);
			func_176(-1199.923f, -3369.502f, 12.945f, 350.399f);
			func_176(-1212.069f, -3363.568f, 12.945f, 350.399f);
			func_176(-1223.637f, -3356.694f, 12.945f, 350.399f);
			func_176(-1102.284f, -3420.613f, 12.945f, 354.599f);
			func_176(-1091.131f, -3427.396f, 12.945f, 354.599f);
			func_176(-1079.372f, -3434.306f, 12.945f, 354.599f);
			func_176(-1067.498f, -3441.878f, 13.114f, 354.599f);
			func_176(-1055.714f, -3448.819f, 12.977f, 354.599f);
			func_176(-1043.37f, -3455.796f, 13.146f, 354.599f);
			func_176(-1017.023f, -3382.777f, 12.8401f, 330.6f);
			func_176(-1010.608f, -3386.103f, 12.8401f, 330.6f);
			func_176(-1004.658f, -3389.823f, 12.8401f, 330.6f);
			func_176(-998.3798f, -3393.644f, 12.8401f, 330.6f);
			func_176(-991.5242f, -3397.297f, 12.8401f, 330.6f);
			func_176(-985.0826f, -3401.247f, 12.8401f, 330.6f);
			func_176(-978.2733f, -3405.031f, 12.8401f, 330.6f);
			func_176(-971.724f, -3409.109f, 12.8401f, 330.6f);
			func_176(-964.4719f, -3413.202f, 13.1463f, 330.6f);
			func_176(-1022.94f, -3392.372f, 12.8401f, 330.6f);
			func_176(-1016.219f, -3395.82f, 12.8401f, 330.6f);
			func_176(-1009.873f, -3399.143f, 12.8401f, 330.6f);
			func_176(-1003.436f, -3402.982f, 12.8401f, 330.6f);
			func_176(-997.0872f, -3406.928f, 12.8401f, 330.6f);
			func_176(-990.2305f, -3410.548f, 12.8401f, 330.6f);
			func_176(-983.4429f, -3414.093f, 12.8401f, 330.6f);
			func_176(-976.8809f, -3417.846f, 12.8401f, 330.6f);
			func_176(-969.4039f, -3421.727f, 13.1463f, 330.6f);
			func_176(-1028.251f, -3401.834f, 12.8401f, 330.6f);
			func_176(-1021.631f, -3405.433f, 12.8401f, 330.6f);
			func_176(-1015.209f, -3408.563f, 12.8401f, 330.6f);
			func_176(-1008.81f, -3412.484f, 12.8401f, 330.6f);
			func_176(-1002.277f, -3415.987f, 12.8401f, 330.6f);
			func_176(-995.7023f, -3419.97f, 12.8401f, 330.6f);
			func_176(-989.1453f, -3423.988f, 12.8401f, 330.6f);
			func_176(-982.6298f, -3427.981f, 12.8401f, 330.6f);
			func_176(-974.9305f, -3431.833f, 13.1463f, 330.6f);
			break;
		
		case 84:
			func_176(-1356.991f, -3242.228f, 12.945f, 330f);
			func_176(-1369.313f, -3234.758f, 12.945f, 330f);
			func_176(-1381.751f, -3227.408f, 12.945f, 330f);
			func_176(-1394.302f, -3220.021f, 12.945f, 330f);
			func_176(-1354.339f, -3223.129f, 12.945f, 330f);
			func_176(-1366.302f, -3215.809f, 12.945f, 330f);
			func_176(-1378.492f, -3208.645f, 12.945f, 330f);
			func_176(-1350.322f, -3203.405f, 12.945f, 330f);
			func_176(-1362.684f, -3196.451f, 12.945f, 330f);
			func_176(-1347.089f, -3182.69f, 12.945f, 330f);
			func_176(-1452.642f, -3222.367f, 12.945f, 347.799f);
			func_176(-1464.229f, -3215.108f, 12.945f, 347.799f);
			func_176(-1476.133f, -3207.652f, 12.945f, 347.799f);
			func_176(-1488.295f, -3200.033f, 12.945f, 347.799f);
			func_176(-1336.877f, -3272.344f, 12.945f, 8.199f);
			func_176(-1323.381f, -3279.614f, 12.945f, 8.199f);
			func_176(-1309.671f, -3287.749f, 12.945f, 8.199f);
			func_176(-1296.963f, -3294.511f, 12.945f, 8.199f);
			func_176(-1501.978f, -3193.849f, 12.945f, 350.599f);
			func_176(-1344.716f, -3288.333f, 12.9445f, 331.2f);
			func_176(-1338.141f, -3290.335f, 12.9445f, 331.2f);
			func_176(-1331.473f, -3294.178f, 12.9445f, 331.2f);
			func_176(-1324.921f, -3297.998f, 12.9445f, 331.2f);
			func_176(-1318.129f, -3301.957f, 12.9445f, 331.2f);
			func_176(-1350.466f, -3294.226f, 12.9445f, 331.2f);
			func_176(-1343.482f, -3297.576f, 12.9445f, 331.2f);
			func_176(-1336.398f, -3302.456f, 12.9445f, 331.2f);
			func_176(-1329.82f, -3306.82f, 12.945f, 331.2f);
			func_176(-1322.761f, -3310.353f, 12.945f, 331.2f);
			func_176(-1316.587f, -3314.556f, 12.945f, 331.2f);
			func_176(-1326.538f, -3318.499f, 12.945f, 331.2f);
			func_176(-1335.74f, -3313.678f, 12.945f, 331.2f);
			func_176(-1350.848f, -3302.619f, 12.9446f, 331.2f);
			func_176(-1357.961f, -3306.886f, 12.945f, 331.2f);
			func_176(-1335.202f, -3322.428f, 12.9452f, 331.2f);
			func_176(-1351.401f, -3311.566f, 12.9452f, 331.2f);
			func_176(-1344.255f, -3305.965f, 12.9451f, 331.2f);
			func_176(-1299.832f, -3305.573f, 12.945f, 331.2f);
			func_176(-1293.414f, -3309.413f, 12.945f, 331.2f);
			func_176(-1286.835f, -3313.157f, 12.945f, 331.2f);
			func_176(-1303.988f, -3313.1f, 12.945f, 331.2f);
			func_176(-1297.402f, -3316.699f, 12.945f, 331.2f);
			func_176(-1290.969f, -3320.519f, 12.945f, 331.2f);
			func_176(-1308.27f, -3320.612f, 12.945f, 331.2f);
			func_176(-1301.968f, -3324.714f, 12.945f, 331.2f);
			func_176(-1295.483f, -3328.422f, 12.945f, 331.2f);
			break;
		
		case 85:
			func_176(-2039.992f, 3132.191f, 31.81f, 149.399f);
			func_176(-2025.075f, 3128.63f, 31.81f, 197.599f);
			func_176(-2049.589f, 3142.464f, 31.81f, 109.199f);
			func_176(-2088.648f, 3081.327f, 31.81f, 150.599f);
			func_176(-2070.669f, 3111.575f, 31.81f, 123.399f);
			func_176(-2053.385f, 3109.703f, 31.81f, 150.599f);
			func_176(-2044.448f, 3094.012f, 31.81f, 181.799f);
			func_176(-2071.825f, 3093.477f, 31.81f, 150.599f);
			func_176(-2060.579f, 3085.924f, 31.81f, 150.599f);
			func_176(-2062.712f, 3066.073f, 31.81f, 150.599f);
			func_176(-2094.385f, 3190.445f, 31.81f, 117.799f);
			func_176(-2083.056f, 3182.885f, 31.81f, 117.799f);
			func_176(-2071.578f, 3175.554f, 31.81f, 117.799f);
			func_176(-2120.249f, 3173.97f, 31.81f, 25.199f);
			func_176(-2067.547f, 3146.325f, 31.81f, 14.998f);
			func_176(-2080.506f, 3154.591f, 31.81f, 15.798f);
			func_176(-2093.278f, 3159.793f, 31.81f, 14.798f);
			func_176(-2106.614f, 3167.605f, 31.81f, 21.198f);
			func_176(-2106.347f, 3196.902f, 31.81f, 117.799f);
			func_176(-2024.425f, 3102.707f, 31.8103f, 150.7997f);
			func_176(-2018.074f, 3099.056f, 31.8103f, 150.7997f);
			func_176(-2009.032f, 3094.171f, 31.8103f, 150.7997f);
			func_176(-2002.923f, 3090.669f, 31.8103f, 150.7997f);
			func_176(-1996.542f, 3087.201f, 31.8103f, 150.7997f);
			func_176(-1990.232f, 3083.534f, 31.8103f, 150.7997f);
			func_176(-1983.518f, 3080.033f, 31.8103f, 150.7997f);
			func_176(-2029.16f, 3094.357f, 31.8103f, 150.7997f);
			func_176(-2022.431f, 3090.703f, 31.8103f, 150.7997f);
			func_176(-2013.702f, 3086.015f, 31.8103f, 150.7997f);
			func_176(-2007.67f, 3082.42f, 31.8103f, 150.7997f);
			func_176(-2001.211f, 3078.569f, 31.8103f, 150.7997f);
			func_176(-1994.644f, 3074.654f, 31.8103f, 150.7997f);
			func_176(-1987.934f, 3070.654f, 31.8103f, 150.7997f);
			func_176(-2033.776f, 3086.031f, 31.8103f, 150.7997f);
			func_176(-2026.929f, 3082.094f, 31.8103f, 150.7997f);
			func_176(-2018.663f, 3077.341f, 31.8103f, 150.7997f);
			func_176(-2012.345f, 3073.707f, 31.8103f, 150.7997f);
			func_176(-2006.052f, 3070.089f, 31.8103f, 150.7997f);
			func_176(-1999.169f, 3066.132f, 31.8103f, 150.7997f);
			func_176(-1992.542f, 3062.257f, 31.8103f, 150.7997f);
			func_176(-2038.545f, 3077.344f, 31.8103f, 150.7997f);
			func_176(-2031.587f, 3073.344f, 31.8103f, 150.7997f);
			func_176(-2021.909f, 3067.715f, 31.8103f, 150.7997f);
			func_176(-2012.886f, 3063.219f, 31.8103f, 150.7997f);
			func_176(-2003.481f, 3057.141f, 31.8103f, 150.7997f);
			func_176(-1996.618f, 3053.195f, 31.8103f, 150.7997f);
			break;
		
		case 86:
			func_176(-1885.187f, 3095.344f, 31.81f, 150.2f);
			func_176(-1898.637f, 3072.816f, 31.811f, 150.2f);
			func_176(-1886.469f, 3065.78f, 31.811f, 150.2f);
			func_176(-1874.621f, 3058.437f, 31.81f, 150.2f);
			func_176(-1862.818f, 3051.244f, 31.81f, 150.2f);
			func_176(-1915.317f, 3041.652f, 31.811f, 150.2f);
			func_176(-1896.724f, 2997.848f, 31.81f, 150.2f);
			func_176(-1932.975f, 3011.781f, 31.81f, 150.2f);
			func_176(-1875.668f, 3034.438f, 31.811f, 150.2f);
			func_176(-1886.144f, 3016.285f, 31.81f, 150.2f);
			func_176(-1913.706f, 3104.196f, 31.81f, 118.599f);
			func_176(-1925.44f, 3112.236f, 31.81f, 118.599f);
			func_176(-1938.08f, 3119.383f, 31.81f, 118.599f);
			func_176(-1927.822f, 3072.679f, 31.81f, 13.399f);
			func_176(-1940.575f, 3079.031f, 31.81f, 13.399f);
			func_176(-1953.344f, 3084.888f, 31.81f, 13.399f);
			func_176(-1965.91f, 3091.929f, 31.81f, 13.399f);
			func_176(-1978.86f, 3100.029f, 31.81f, 13.399f);
			func_176(-1950.928f, 3126.457f, 31.81f, 118.999f);
			func_176(-1975.282f, 3083.046f, 31.8103f, 150.1997f);
			func_176(-1969.362f, 3079.909f, 31.8103f, 150.1997f);
			func_176(-1963.673f, 3076.887f, 31.8103f, 150.1997f);
			func_176(-1958.524f, 3073.899f, 31.8103f, 150.1997f);
			func_176(-1979.828f, 3074.704f, 31.8103f, 150.1997f);
			func_176(-1973.901f, 3071.418f, 31.8103f, 150.1997f);
			func_176(-1967.917f, 3068.089f, 31.8103f, 150.1997f);
			func_176(-1949.916f, 3068.72f, 31.8103f, 150.1997f);
			func_176(-1961.934f, 3064.6f, 31.8103f, 150.1997f);
			func_176(-1984.332f, 3067.03f, 31.8103f, 150.1997f);
			func_176(-1978.182f, 3063.286f, 31.8103f, 150.1997f);
			func_176(-1972.061f, 3060.191f, 31.8103f, 150.1997f);
			func_176(-1952.61f, 3059.551f, 31.8103f, 150.1997f);
			func_176(-1956.958f, 3051.589f, 31.8103f, 150.1997f);
			func_176(-1988.778f, 3059.135f, 31.8103f, 150.1997f);
			func_176(-1982.174f, 3055.591f, 31.8103f, 150.1997f);
			func_176(-1975.579f, 3051.898f, 31.8103f, 150.1997f);
			func_176(-1969.139f, 3048.28f, 31.8103f, 150.1997f);
			func_176(-1962.25f, 3044.256f, 31.8103f, 150.1997f);
			func_176(-1989.48f, 3050.467f, 31.8103f, 150.1997f);
			func_176(-1977.325f, 3043.786f, 31.8103f, 150.1997f);
			func_176(-1971.07f, 3040.306f, 31.8103f, 150.1997f);
			func_176(-1964.409f, 3037.118f, 31.8103f, 150.1997f);
			func_176(-1998.375f, 3042.349f, 31.8103f, 150.1997f);
			func_176(-1991.769f, 3038.47f, 31.8103f, 150.1997f);
			func_176(-1978.718f, 3035.164f, 31.8103f, 150.1997f);
			func_176(-1971.483f, 3031.316f, 31.8103f, 150.1997f);
			break;
		
		case 87:
			func_176(-2484.323f, 3249.294f, 31.828f, 151f);
			func_176(-2495.313f, 3255.746f, 31.828f, 151f);
			func_176(-2472.644f, 3242.684f, 31.828f, 151f);
			func_176(-2506.313f, 3262.27f, 31.823f, 151f);
			func_176(-2461.494f, 3235.93f, 31.828f, 151f);
			func_176(-2505.602f, 3238.049f, 31.828f, 151f);
			func_176(-2481.937f, 3224.8f, 31.828f, 151f);
			func_176(-2516.813f, 3244.266f, 31.823f, 151f);
			func_176(-2470.03f, 3217.899f, 31.828f, 151f);
			func_176(-2493.933f, 3231.308f, 31.828f, 151f);
			func_176(-2443.467f, 3227.753f, 31.828f, 175.8f);
			func_176(-2431.365f, 3220.9f, 31.828f, 175.8f);
			func_176(-2419.883f, 3214.708f, 31.828f, 175.8f);
			func_176(-2501.903f, 3272.865f, 31.822f, 123.999f);
			func_176(-2513.555f, 3280.176f, 31.817f, 123.999f);
			func_176(-2524.776f, 3287.276f, 31.973f, 123.999f);
			func_176(-2407.718f, 3208.055f, 31.827f, 176.199f);
			func_176(-2395.689f, 3201.125f, 31.827f, 176.199f);
			func_176(-2383.498f, 3194.211f, 31.833f, 176.199f);
			func_176(-2426.219f, 3238.211f, 31.8616f, 150.5996f);
			func_176(-2419.052f, 3233.866f, 31.8726f, 150.5996f);
			func_176(-2412.069f, 3229.854f, 31.8859f, 150.5996f);
			func_176(-2405.282f, 3225.809f, 31.8841f, 150.5996f);
			func_176(-2398.624f, 3222.135f, 31.9249f, 150.5996f);
			func_176(-2391.729f, 3218.229f, 31.9354f, 150.5996f);
			func_176(-2384.727f, 3214.524f, 31.9585f, 150.5996f);
			func_176(-2377.55f, 3210.461f, 31.9192f, 150.5996f);
			func_176(-2369.96f, 3205.835f, 31.8267f, 150.5996f);
			func_176(-2404.498f, 3235.728f, 31.8959f, 150.5996f);
			func_176(-2397.481f, 3232.375f, 31.9879f, 150.5996f);
			func_176(-2390.524f, 3228.125f, 31.9758f, 150.5996f);
			func_176(-2383.986f, 3223.995f, 31.986f, 150.5996f);
			func_176(-2377.176f, 3219.695f, 31.9615f, 150.5996f);
			func_176(-2370.524f, 3215.946f, 32.002f, 150.5996f);
			func_176(-2400.23f, 3243.846f, 31.8311f, 150.5996f);
			func_176(-2393.28f, 3240.281f, 32.0164f, 150.5996f);
			func_176(-2386.355f, 3236.819f, 32.0616f, 150.5996f);
			func_176(-2379.382f, 3232.74f, 32.0318f, 150.5996f);
			func_176(-2372.314f, 3229.196f, 32.0177f, 150.5996f);
			func_176(-2365.153f, 3225.732f, 32.0145f, 150.5996f);
			func_176(-2395.04f, 3252.644f, 31.8557f, 150.5996f);
			func_176(-2388.684f, 3249.092f, 32.0198f, 150.5996f);
			func_176(-2382.127f, 3245.045f, 32.0086f, 150.5996f);
			func_176(-2374.905f, 3240.938f, 32.0085f, 150.5996f);
			func_176(-2368.14f, 3237.328f, 32.0177f, 150.5996f);
			func_176(-2361.068f, 3233.396f, 31.9573f, 150.5996f);
			break;
		
		default:
			break;
	}
}

int func_164(int iParam0)
{
	switch (iParam0)
	{
		case joaat("microlight"):
		case joaat("havok"):
		case joaat("seabreeze"):
		case joaat("rogue"):
		case joaat("pyro"):
		case joaat("buzzard"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("volatus"):
		case joaat("cuban800"):
		case joaat("besra"):
		case joaat("duster"):
		case joaat("stunt"):
		case joaat("velum"):
		case joaat("velum2"):
		case joaat("vestra"):
		case joaat("lazer"):
		case joaat("alphaz1"):
		case joaat("howard"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("starling"):
			return 1;
		
		default:
	}
	return 0;
}

void func_165(int iParam0)
{
	switch (iParam0)
	{
		case 83:
		case 84:
			func_176(-947.712f, -3367.704f, 12.944f, 60f);
			func_176(-904.692f, -3293.072f, 12.944f, 60f);
			func_176(-863.71f, -3221.978f, 12.944f, 60f);
			func_176(-966.418f, -3162.773f, 12.944f, 60f);
			func_176(-1007.435f, -3233.93f, 12.944f, 60f);
			func_176(-1050.455f, -3308.559f, 12.944f, 60f);
			func_176(-1145.673f, -3253.456f, 12.944f, 60f);
			func_176(-1098.386f, -3181.428f, 12.944f, 60f);
			func_176(-1060.474f, -3108.903f, 12.944f, 60f);
			func_176(-1155.391f, -3053.632f, 12.944f, 60f);
			func_176(-1196.114f, -3125.146f, 12.948f, 60f);
			func_176(-1235.552f, -3201.86f, 12.944f, 60f);
			func_176(-1344.446f, -3139.177f, 12.944f, 60f);
			func_176(-1301.308f, -3064.341f, 12.944f, 60f);
			func_176(-1260.135f, -2992.912f, 12.944f, 60f);
			func_176(-1364.244f, -2932.9f, 12.98f, 60f);
			func_176(-1405.284f, -3004.108f, 12.96f, 60f);
			func_176(-1448.29f, -3078.72f, 12.95f, 60f);
			func_176(-1535.732f, -3028.318f, 12.945f, 60f);
			func_176(-1492.639f, -2953.558f, 12.945f, 60f);
			func_176(-1451.506f, -2882.2f, 12.944f, 60f);
			func_176(-1553.927f, -2823.12f, 13.002f, 60f);
			func_176(-1595.097f, -2894.571f, 12.944f, 60f);
			func_176(-1637.836f, -2968.714f, 12.945f, 60f);
			func_176(-1740.971f, -2911.484f, 12.944f, 330f);
			func_176(-1696.293f, -2833.978f, 12.944f, 330f);
			func_176(-1651.502f, -2756.273f, 12.945f, 330f);
			func_176(-1588.258f, -2647.575f, 12.944f, 330f);
			func_176(-1536.862f, -2681.378f, 12.945f, 330f);
			func_176(-1529.025f, -2544.485f, 12.944f, 330f);
			break;
		
		case 85:
		case 86:
		case 87:
			func_176(-1970.422f, 2825.696f, 31.81f, 60.4f);
			func_176(-2033.307f, 2855.526f, 31.83f, 60.4f);
			func_176(-2091.018f, 2888.691f, 31.81f, 60.4f);
			func_176(-2206.717f, 2955.363f, 31.81f, 60.4f);
			func_176(-2268.817f, 2990.846f, 31.81f, 60.4f);
			func_176(-2324.039f, 3023.154f, 31.811f, 60.4f);
			func_176(-2435.806f, 3087.705f, 31.824f, 60.4f);
			func_176(-2543.753f, 3149.909f, 31.821f, 60.4f);
			func_176(-1944.848f, 2898.798f, 31.81f, 125.398f);
			func_176(-1978.705f, 2924.367f, 31.846f, 151.999f);
			func_176(-2064.849f, 2955.153f, 31.867f, 151.199f);
			func_176(-2106.165f, 2980.687f, 31.81f, 104.599f);
			func_176(-2302.367f, 3088.676f, 31.814f, 150.598f);
			func_176(-2152.113f, 2924.162f, 31.81f, 60.198f);
			func_176(-2488.232f, 3118.146f, 31.822f, 59.798f);
			func_176(-2277.922f, 3133.756f, 31.811f, 120.598f);
			func_176(-2604.776f, 3185.186f, 31.812f, 59.998f);
			func_176(-2608.107f, 3305.049f, 31.812f, 60.198f);
			func_176(-2718.936f, 3323.203f, 31.81f, 201.198f);
			func_176(-2658.718f, 3216.499f, 31.812f, 59.998f);
			func_176(-2380.372f, 3055.341f, 31.826f, 60.4f);
			func_176(-2790.616f, 3286.24f, 31.812f, 240.397f);
			func_176(-2770.946f, 3322.605f, 31.812f, 240.397f);
			func_176(-2678.805f, 3339.186f, 31.812f, 199.597f);
			func_176(-2743.882f, 3224.094f, 31.81f, 303.397f);
			func_176(-2701.354f, 3203.092f, 31.994f, 328.397f);
			func_176(-2249.816f, 2944.609f, 31.937f, 330.196f);
			func_176(-2586.579f, 3137.286f, 31.935f, 330.196f);
			func_176(-2134.76f, 2878.728f, 31.81f, 330.196f);
			func_176(-1949.075f, 2861.21f, 31.811f, 58.798f);
			break;
		
		default:
			break;
	}
}

int func_166(int iParam0)
{
	switch (iParam0)
	{
		case joaat("hydra"):
		case joaat("dodo"):
		case joaat("mammatus"):
		case joaat("annihilator"):
		case joaat("tula"):
		case joaat("hunter"):
		case joaat("mogul"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("shamal"):
		case joaat("savage"):
		case joaat("luxor"):
		case joaat("luxor2"):
		case joaat("nimbus"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("valkyrie"):
		case joaat("titan"):
		case joaat("skylift"):
		case joaat("miljet"):
		case joaat("bombushka"):
		case joaat("volatol"):
		case joaat("alkonost"):
			return 1;
		
		default:
	}
	return 0;
}

int func_167(int iParam0)
{
	if (!unk_0x419E13582192CFEA(iParam0))
	{
		return 0;
	}
	if (vdist(unk_0xD6E677FAD7521410(iParam0, 1), -1308.118f, -2934.27f, 13.7545f) < 1000f)
	{
		return 1;
	}
	return 0;
}

int func_168(int iParam0)
{
	if (!unk_0x419E13582192CFEA(iParam0))
	{
		return 0;
	}
	if (vdist(unk_0xD6E677FAD7521410(iParam0, 1), -2270.245f, 3127.913f, 31.8118f) < 1000f)
	{
		return 1;
	}
	return 0;
}

int func_169(int iParam0, int iParam1)
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

int func_170(struct<2> Param0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	iVar2 = 0;
	fVar3 = 50f;
	iVar0 = 1;
	while (iVar0 <= 127)
	{
		if (iVar2 < *uParam2)
		{
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (vdist(Param0, Param0.f_1, 0f, Global_1049961[iVar0 /*1951*/].f_3[iVar1 /*3*/], Global_1049961[iVar0 /*1951*/].f_3[iVar1 /*3*/].f_1, 0f) < fVar3)
				{
					(*uParam2)[iVar2] = iVar0;
					(*uParam3)[iVar2] = 0;
					iVar2++;
					iVar1 = 99;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 154)
	{
		fVar3 = 50f;
		if (iVar0 >= 83 && iVar0 <= 87)
		{
			if (func_147(iVar0))
			{
				fVar3 = 300f;
			}
			else
			{
				fVar3 = 0f;
			}
		}
		if (iVar0 >= 89 && iVar0 <= 97)
		{
			if (func_171(iVar0))
			{
				fVar3 = 75f;
			}
			else
			{
				fVar3 = 0f;
			}
		}
		if (iVar0 >= 123 && iVar0 <= 125)
		{
			fVar3 = 150f;
		}
		if (iVar2 < *uParam2)
		{
			fVar4 = vdist(Param0, Param0.f_1, 0f, Global_1683970.f_516[iVar0 /*3*/], Global_1683970.f_516[iVar0 /*3*/].f_1, 0f);
			if (fVar4 < fVar3)
			{
				(*uParam2)[iVar2] = iVar0;
				(*uParam3)[iVar2] = 1;
				iVar2++;
			}
		}
		iVar0++;
	}
	if (iVar2 > 0)
	{
		return 1;
	}
	return 0;
}

int func_171(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_172(iParam0);
	if (Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_273 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11;
	if (iVar1 != func_57())
	{
		if (Global_1590908[iVar1 /*874*/].f_267.f_273 == iVar0)
		{
			return 1;
		}
	}
	if (Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_319.f_6 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_172(int iParam0)
{
	switch (iParam0)
	{
		case 89:
			return 1;
			break;
		
		case 90:
			return 2;
			break;
		
		case 91:
			return 3;
			break;
		
		case 92:
			return 4;
			break;
		
		case 93:
			return 5;
			break;
		
		case 94:
			return 6;
			break;
		
		case 95:
			return 7;
			break;
		
		case 96:
			return 8;
			break;
		
		case 97:
			return 9;
			break;
	}
	return 0;
}

int func_173(int iParam0)
{
	if ((unk_0x69AF387D1A91914C(iParam0) || unk_0x3DA0AF866B552ECB(iParam0)) || unk_0x2F040F7AF0534E16(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_174(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			func_176(-602.6942f, 690.0488f, 148.1567f, 75.0245f);
			func_176(-612.8933f, 692.116f, 148.7577f, 79.1005f);
			func_176(-626.1633f, 694.6517f, 149.6835f, 75.1121f);
			func_176(-639.3558f, 696.9992f, 150.5134f, 77.481f);
			break;
		
		case joaat("mpsv_lp0_31"):
			func_176(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			func_176(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_176(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_176(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		
		case 82:
			func_176(382.9244f, 443.8122f, 142.9934f, 78.3408f);
			func_176(391.2023f, 442.4812f, 142.5089f, 82.2125f);
			func_176(400.1477f, 441.0816f, 142.0776f, 83.4259f);
			func_176(414.2964f, 439.2628f, 141.5056f, 80.8689f);
			break;
		
		case 81:
			func_176(-1294.64f, 468.1975f, 96.4245f, 141.8551f);
			func_176(-1300.508f, 468.0167f, 96.8298f, 139.6287f);
			func_176(-1283.894f, 467.2136f, 95.4036f, 95.058f);
			func_176(-1273.584f, 454.4406f, 94.2269f, 30.8724f);
			break;
		
		case 73:
			func_176(-209.2598f, 509.0326f, 130.7979f, 97.2043f);
			func_176(-221.7214f, 507.2553f, 128.5651f, 92.2773f);
			func_176(-237.2848f, 506.8763f, 125.8112f, 85.9315f);
			func_176(-255.5678f, 507.9559f, 122.3364f, 85.1752f);
			break;
		
		case 75:
			func_176(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			func_176(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_176(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_176(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		
		case 76:
			func_176(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			func_176(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_176(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_176(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			break;
		
		case 77:
			func_176(128.4334f, 578.7522f, 182.2934f, 106.5458f);
			func_176(97.7791f, 576.8907f, 181.5599f, 91.3539f);
			func_176(83.5896f, 576.4791f, 181.0832f, 89.7262f);
			func_176(69.9599f, 575.9902f, 180.5019f, 91.4926f);
			break;
		
		case 80:
			func_176(-872.1293f, 698.7591f, 148.5084f, 339.673f);
			func_176(-916.5449f, 695.5253f, 150.5625f, 272.7097f);
			func_176(-907.3458f, 695.8158f, 150.396f, 270.6491f);
			func_176(-923.6974f, 691.4489f, 150.9506f, 357.4356f);
			break;
		
		case 87:
			if (func_175())
			{
				func_176(-1608.297f, -556.875f, 33.406f, 310f);
				func_176(-1616.095f, -563.402f, 33.049f, 309.4f);
				func_176(-1560.29f, -531.69f, 34.576f, 35.3994f);
				func_176(-1555.303f, -538.781f, 34.044f, 35.3994f);
			}
			else
			{
				func_176(-1605.148f, -552.5016f, 33.4606f, 309.4211f);
				func_176(-1616.306f, -561.6959f, 32.9867f, 309.4369f);
				func_176(-1582.681f, -534.1682f, 34.4171f, 307.8589f);
				func_176(-1619.657f, -531.5862f, 33.4254f, 128.9132f);
				func_176(-1560.257f, -532.3268f, 34.5436f, 216.0882f);
				func_176(-1553.698f, -541.3412f, 33.8662f, 215.8465f);
				func_176(-1611.769f, -601.588f, 31.2908f, 50.7362f);
				func_176(-1600.63f, -610.1141f, 30.5087f, 51.7297f);
			}
			break;
		
		case 88:
			if (func_175())
			{
				func_176(-1402.362f, -511.396f, 30.888f, 35.4f);
				func_176(-1356.617f, -531.0343f, 29.7588f, 124.9982f);
				func_176(-1407.634f, -503.839f, 31.35f, 35.4f);
				func_176(-1346.007f, -523.3546f, 30.6339f, 125.9976f);
			}
			else
			{
				func_176(-1390.604f, -528.6405f, 29.8387f, 35.4572f);
				func_176(-1357.085f, -531.4611f, 29.7218f, 125.0906f);
				func_176(-1346.236f, -523.9114f, 30.6f, 124.7302f);
				func_176(-1337.852f, -518.1096f, 31.2329f, 124.6998f);
				func_176(-1336.39f, -556.0637f, 29.7514f, 33.8088f);
				func_176(-1340.214f, -508.9828f, 31.4089f, 98.7714f);
				func_176(-1348.607f, -510.3536f, 30.9263f, 99.2425f);
				func_176(-1380.764f, -536.3867f, 29.3128f, 63.6203f);
			}
			break;
		
		case 89:
			if (func_175())
			{
				func_176(-102.737f, -597.379f, 35.053f, 160.999f);
				func_176(-97.793f, -589.568f, 35.082f, 134.799f);
				func_176(-110.357f, -619.402f, 35.055f, 160.599f);
				func_176(-112.561f, -627.723f, 35.046f, 165.399f);
			}
			else
			{
				func_176(-108.2604f, -613.6386f, 35.055f, 160.8063f);
				func_176(-103.0375f, -598.4797f, 35.0538f, 161.1968f);
				func_176(-112.84f, -629.6357f, 35.0662f, 174.9843f);
				func_176(-98.7403f, -590.3209f, 35.075f, 139.7632f);
				func_176(-98.3748f, -612.642f, 35.137f, 161.1124f);
				func_176(-92.595f, -595.4065f, 35.1888f, 161.3083f);
				func_176(-104.4742f, -630.1472f, 35.1396f, 161.184f);
				func_176(-74.1068f, -619.9417f, 35.1488f, 340.9123f);
			}
			break;
		
		case 90:
			if (func_175())
			{
				func_176(-59.349f, -779.238f, 43.134f, 228.398f);
				func_176(-41.6311f, -789.1425f, 43.1323f, 255.5993f);
				func_176(-65.212f, -772.66f, 43.151f, 219.398f);
				func_176(-33.0648f, -789.3544f, 43.1287f, 279.5989f);
			}
			else
			{
				func_176(-59.684f, -779.4568f, 43.114f, 228.7591f);
				func_176(-52.7425f, -784.7151f, 43.1134f, 237.7756f);
				func_176(-45.2736f, -788.4313f, 43.1133f, 250.2438f);
				func_176(-35.9308f, -789.8549f, 43.1167f, 271.1923f);
				func_176(-64.6911f, -762.4548f, 43.1316f, 35.6897f);
				func_176(-24.9853f, -786.8022f, 43.1163f, 297.8276f);
				func_176(-86.2083f, -739.3044f, 43.0546f, 204.9405f);
				func_176(-9.239f, -773.0505f, 43.0788f, 318.0367f);
			}
			break;
		
		case 91:
			func_176(246.5035f, -1798.749f, 26.1131f, 212.5996f);
			func_176(247.8968f, -1797.017f, 26.1131f, 212.5996f);
			func_176(249.3848f, -1795.374f, 26.1131f, 212.5996f);
			func_176(250.8498f, -1793.695f, 26.1131f, 212.5996f);
			func_176(262.9285f, -1784.205f, 26.1131f, 164.5991f);
			func_176(266.8129f, -1787.476f, 26.1131f, 164.5991f);
			func_176(264.814f, -1785.801f, 26.1131f, 164.5991f);
			func_176(269.0069f, -1789.16f, 26.1131f, 164.5991f);
			break;
		
		case 92:
			func_176(-1464.5f, -927.9f, 9f, 296.7991f);
			func_176(-1466f, -926.1f, 9f, 296.7991f);
			func_176(-1467.9f, -924.7f, 9f, 296.7991f);
			func_176(-1469.7f, -923.7f, 9f, 296.7991f);
			func_176(-1462.481f, -931.2933f, 9.1294f, 296.5982f);
			func_176(-1460.639f, -932.9284f, 9.1315f, 296.5982f);
			func_176(-1454.923f, -931.1019f, 9.0872f, 237.1973f);
			func_176(-1450.848f, -934.5874f, 8.4514f, 237.1973f);
			break;
		
		case 93:
			func_176(30.0784f, -1024.16f, 28.4469f, 234.5994f);
			func_176(29.1695f, -1026.719f, 28.4453f, 234.5994f);
			func_176(28.2538f, -1029.296f, 28.4421f, 234.5994f);
			func_176(27.3737f, -1031.767f, 28.3937f, 234.5994f);
			func_176(32.6932f, -1017.063f, 28.4531f, 234.5994f);
			func_176(33.672f, -1014.399f, 28.4552f, 234.5994f);
			func_176(37.488f, -1014.344f, 28.4781f, 175.5986f);
			func_176(39.4909f, -1015.097f, 28.484f, 175.5986f);
			break;
		
		case 94:
			func_176(45.0033f, 2784.392f, 56.8782f, 103.5999f);
			func_176(43.316f, 2785.903f, 56.8782f, 103.5999f);
			func_176(41.6126f, 2787.36f, 56.8782f, 103.5999f);
			func_176(39.9584f, 2788.773f, 56.8782f, 103.5999f);
			func_176(35.2347f, 2792.135f, 56.8781f, 208.7997f);
			func_176(33.7771f, 2790.379f, 56.8781f, 208.7997f);
			func_176(30.7578f, 2786.8f, 56.8781f, 208.7997f);
			func_176(29.3121f, 2785.045f, 56.8745f, 208.7997f);
			break;
		
		case 95:
			func_176(-332.5679f, 6069.145f, 30.2175f, 152.9999f);
			func_176(-334.2811f, 6070.787f, 30.2212f, 152.9999f);
			func_176(-335.9948f, 6072.454f, 30.2455f, 152.9999f);
			func_176(-337.675f, 6074.252f, 30.2727f, 152.9999f);
			func_176(-339.3682f, 6075.904f, 30.3074f, 152.9999f);
			func_176(-341.0913f, 6077.729f, 30.3114f, 152.9999f);
			func_176(-342.9239f, 6079.522f, 30.3122f, 152.9999f);
			func_176(-344.6985f, 6081.302f, 30.3097f, 152.9999f);
			break;
		
		case 96:
			func_176(1738.422f, 3716.779f, 33.0787f, 6.9999f);
			func_176(1736.207f, 3715.989f, 33.094f, 6.9999f);
			func_176(1748.442f, 3714.17f, 33.0889f, 39.399f);
			func_176(1750.475f, 3715.007f, 33.1067f, 39.399f);
			func_176(1747.18f, 3721.102f, 33.007f, 95.199f);
			func_176(1746.413f, 3723.255f, 32.9738f, 95.199f);
			func_176(1740.67f, 3717.613f, 33.0616f, 8.199f);
			func_176(1733.937f, 3715.08f, 33.1236f, 8.199f);
			break;
		
		case 97:
			func_176(947.9371f, -1452.737f, 30.143f, 331.5991f);
			func_176(950.2141f, -1452.826f, 30.1364f, 331.5991f);
			func_176(952.4588f, -1452.882f, 30.129f, 331.5991f);
			func_176(954.6608f, -1452.869f, 30.1303f, 331.5991f);
			func_176(935.1006f, -1452.701f, 30.1907f, 316.999f);
			func_176(932.5459f, -1452.579f, 30.2194f, 316.999f);
			func_176(929.9319f, -1452.567f, 30.2647f, 316.999f);
			func_176(927.4857f, -1452.446f, 30.3167f, 316.999f);
			break;
		
		case 98:
			func_176(186.6051f, 306.8702f, 104.389f, 162.3999f);
			func_176(184.3881f, 306.7666f, 104.3845f, 162.3999f);
			func_176(182.1681f, 306.6823f, 104.375f, 162.3999f);
			func_176(183.3219f, 296.2871f, 104.3707f, 350.7995f);
			func_176(180.9933f, 296.3411f, 104.3704f, 350.7995f);
			func_176(178.6569f, 296.4709f, 104.3701f, 350.7995f);
			func_176(195.1475f, 304.4284f, 104.4644f, 77.3989f);
			func_176(195.0814f, 301.8218f, 104.5287f, 77.3989f);
			break;
		
		case 99:
			func_176(-31.2801f, -200.3394f, 51.3551f, 5.3995f);
			func_176(-33.3895f, -199.7716f, 51.355f, 5.3995f);
			func_176(-35.4307f, -199.1125f, 51.3549f, 5.3995f);
			func_176(-37.5545f, -198.5244f, 51.3549f, 5.3995f);
			func_176(-17.9628f, -206.2525f, 51.3702f, 29.399f);
			func_176(-14.8043f, -207.5648f, 51.4707f, 29.399f);
			func_176(-11.8482f, -208.6405f, 51.5633f, 29.399f);
			func_176(-9.1304f, -209.4894f, 51.6472f, 29.399f);
			break;
		
		case 100:
			func_176(2478.52f, 4082.137f, 36.8208f, 227.5999f);
			func_176(2477.557f, 4079.946f, 36.8014f, 227.5999f);
			func_176(2465.123f, 4081.35f, 37.0655f, 167.4f);
			func_176(2463.017f, 4082.271f, 37.0653f, 167.4f);
			func_176(2467.7f, 4080.332f, 37.0649f, 167.4f);
			func_176(2469.587f, 4079.538f, 37.061f, 167.4f);
			func_176(2481.354f, 4088.553f, 36.9131f, 209.4f);
			func_176(2482.442f, 4091.023f, 36.9472f, 209.4f);
			break;
		
		case 101:
			func_176(-32.1085f, 6407.398f, 30.4903f, 291.1999f);
			func_176(-29.4917f, 6404.578f, 30.4903f, 291.1999f);
			func_176(-26.4319f, 6401.523f, 30.4903f, 291.1999f);
			func_176(-23.3427f, 6398.638f, 30.4903f, 291.1999f);
			func_176(-20.7035f, 6395.76f, 30.4885f, 291.1999f);
			func_176(-23.7283f, 6412.838f, 30.4904f, 176.5999f);
			func_176(-20.5405f, 6409.805f, 30.4905f, 176.5999f);
			func_176(-17.3045f, 6406.66f, 30.4904f, 176.5999f);
			break;
		
		case 102:
			func_176(-1138.057f, -1572.18f, 3.4157f, 125.9996f);
			func_176(-1142.03f, -1574.983f, 3.4133f, 125.9996f);
			func_176(-1145.05f, -1592.81f, 3.3855f, 306.5991f);
			func_176(-1139.933f, -1589.211f, 3.3978f, 306.5991f);
			func_176(-1124.295f, -1578.776f, 3.3854f, 306.5991f);
			func_176(-1119.954f, -1575.551f, 3.3852f, 306.5991f);
			func_176(-1124.942f, -1562.985f, 3.2916f, 168.9988f);
			func_176(-1127.039f, -1564.395f, 3.292f, 168.9988f);
			break;
		
		default:
			break;
	}
}

bool func_175()
{
	return Global_2453009.f_17;
}

void func_176(struct<3> Param0, float fParam1)
{
	if (Global_2405077.f_1753 < 101)
	{
		if (vmag(Param0) <= 0.01f)
		{
			return;
		}
		Global_2405077.f_1754[Global_2405077.f_1753 /*4*/] = { Param0 };
		Global_2405077.f_1754[Global_2405077.f_1753 /*4*/].f_3 = fParam1;
		Global_2405077.f_1753++;
	}
}

int func_177(struct<3> Param0)
{
	int iVar0;
	
	if (vdist(Global_2405077.f_2902, Param0) < Global_2405077.f_2910)
	{
		return Global_2405077.f_2905;
	}
	Global_2405077.f_2902 = { Param0 };
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Param0.f_2 <= 0f)
		{
			Param0.f_2 = ((Global_2412316[iVar0 /*7*/].f_2 + Global_2412316[iVar0 /*7*/].f_3.f_2) * 0.5f);
		}
		if (func_120(Param0, &(Global_2412316[iVar0 /*7*/])))
		{
			Global_2405077.f_2905 = iVar0;
			return iVar0;
		}
		iVar0++;
	}
	Global_2405077.f_2905 = -1;
	return -1;
}

int func_178()
{
	if (unk_0x234B68AC2E35ED5A(Global_4456448.f_13, 0) && !Global_2453903.f_6343)
	{
		return 0;
	}
	return 0;
}

int func_179(struct<2> Param0, var uParam1, bool bParam2, float fParam3)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = 0;
	iVar0 = 83;
	while (iVar0 <= 84 + 1)
	{
		if (bParam2)
		{
			if (func_147(iVar0))
			{
				fVar1 = fParam3;
			}
			else
			{
				fVar1 = 0f;
			}
		}
		else
		{
			fVar1 = fParam3;
		}
		fVar2 = vdist(Param0, Param0.f_1, 0f, Global_1683970.f_516[iVar0 /*3*/], Global_1683970.f_516[iVar0 /*3*/].f_1, 0f);
		if (fVar2 < fVar1)
		{
			iVar3++;
		}
		iVar0++;
	}
	if (iVar3 > 0)
	{
		return 1;
	}
	return 0;
}

void func_180()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		Global_2405077.f_2735[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
}

int func_181(var uParam0, bool bParam1)
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { *uParam0 };
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Var1.f_2 <= 0f)
		{
			Var1.f_2 = ((Global_2412272[iVar0 /*7*/].f_2 + Global_2412272[iVar0 /*7*/].f_3.f_2) * 0.5f);
		}
		if (func_120(Var1, &(Global_2412272[iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_131(&Var1, Global_2412272[iVar0 /*7*/], Global_2412272[iVar0 /*7*/].f_3, Global_2412272[iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_182(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!Global_2405077.f_514 && !Global_2405077.f_515)
	{
		if (!Global_2405077.f_45.f_316)
		{
			if (!func_186(unk_0x1146A9AE09CE2B14(), 1))
			{
				return 1;
			}
			if (!func_185(Param0, 1008981770))
			{
				if (!func_137(&Param0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_137(&Param0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_184(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { func_183(&(Global_2405077.f_45[iVar0 /*12*/])) };
					if (!func_137(&Var1, 0, 0, 0, 1))
					{
						if (!func_137(&Param0, 0, 0, 0, 1))
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

Vector3 func_183(var uParam0)
{
	switch (uParam0->f_10)
	{
		case 0:
			return *uParam0;
			break;
		
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
			break;
	}
	return *uParam0;
}

int func_184(struct<3> Param0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405077.f_45[iVar0 /*12*/].f_9)
		{
			if (func_124(Param0, &(Global_2405077.f_45[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_185(struct<3> Param0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405077.f_45[iVar0 /*12*/].f_9)
		{
			if (func_124(Param0, &(Global_2405077.f_45[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_186(int iParam0, bool bParam1)
{
	if (func_188() != 0)
	{
		return func_187(iParam0) != 0;
	}
	return func_102(iParam0, bParam1, 0);
}

int func_187(int iParam0)
{
	if (func_1340(iParam0, 0, 1))
	{
		return Global_2426865[iParam0 /*449*/].f_1;
	}
	return 0;
}

int func_188()
{
	return Global_31345;
}

int func_189(bool bParam0)
{
	if (unk_0x8B6A925F148E0E94())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

void func_190()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 101)
	{
		Global_2405077.f_1754[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2405077.f_1753 = 0;
}

void func_191()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x4BE697D014536271(Global_2405077.f_690[iVar0]))
		{
			if (unk_0x62D18D65FE22FF39() == Global_2405077.f_690[iVar0])
			{
				if (!Global_2405077.f_686[iVar0] == -1)
				{
					if (unk_0xB02FAE47395D3028(Global_2405077.f_686[iVar0]))
					{
						unk_0x120FD3F0779D3C4C(Global_2405077.f_686[iVar0]);
						Global_2405077.f_686[iVar0] = -1;
					}
					else
					{
						Global_2405077.f_686[iVar0] = -1;
					}
				}
			}
		}
		else if (!Global_2405077.f_686[iVar0] == -1)
		{
			Global_2405077.f_686[iVar0] = -1;
		}
		iVar0++;
	}
}

int func_192()
{
	if (!Global_2405077.f_605 == 0 && unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Global_2405077.f_610) < func_189(0))
	{
		return 1;
	}
	return 0;
}

int func_193()
{
	if (unk_0xF471787D45ADC2C1())
	{
		if (!unk_0xE544790FBAA57D4F() > 7 && !unk_0xE544790FBAA57D4F() == 5)
		{
			return 0;
		}
	}
	if (Global_2405077.f_516 == unk_0x2053F6ACFD4ED4BC())
	{
		return 0;
	}
	if (!func_195(unk_0x1146A9AE09CE2B14()) && !func_194())
	{
		return 0;
	}
	return 1;
}

bool func_194()
{
	return Global_1312878;
}

int func_195(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0x234B68AC2E35ED5A(Global_2441237.f_1, iParam0);
	}
	return 1;
}

Vector3 func_196(struct<3> Param0, float fParam1, float fParam2)
{
	struct<3> Var0;
	
	Var0 = { 0f, 1f, 0f };
	func_197(Var0, fParam1);
	Var0.x = (Var0.x * fParam2);
	Var0.f_1 = (Var0.f_1 * fParam2);
	Var0.f_2 = (Var0.f_2 * fParam2);
	Var0 = { Var0 + Param0 };
	return Var0;
}

Vector3 func_197(struct<3> Param0, float fParam1)
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	
	fVar1 = sin(fParam1);
	fVar2 = cos(fParam1);
	Var0.x = ((Param0.x * fVar2) - (Param0.f_1 * fVar1));
	Var0.f_1 = ((Param0.x * fVar1) + (Param0.f_1 * fVar2));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

void func_198(int iParam0)
{
	if (!func_440())
	{
		switch (Local_124.f_195)
		{
			case 0:
				unk_0x473DA067A7AE5435(iParam0, 0);
				break;
			
			case 1:
				unk_0x473DA067A7AE5435(iParam0, 2);
				break;
			
			case 2:
				break;
		}
	}
	else
	{
		unk_0xC612552622E74D36(iParam0, 15, 1);
		unk_0xA2FEFE3BBCD9FB23(iParam0, 0, 156);
	}
}

int func_199(var uParam0, int iParam1, struct<3> Param2, var uParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	float fVar0;
	int iVar1;
	
	if (!unk_0x3F1DFD4C1BC6827A(iParam1))
	{
		return 0;
	}
	if (!unk_0xA8911798335DCDA2(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		unk_0xB7D390F8F682127B(Param2, fVar0, 0, 0, 0, 0, 0, 0);
	}
	iVar1 = unk_0x170478CC84C8AE2F(iParam1, Param2, uParam3, iParam5, iParam4, iParam12);
	if (unk_0x419E13582192CFEA(iVar1))
	{
		*uParam0 = unk_0x431E33F39AEFC4C4(iVar1);
		Global_2544210.f_6610 = iVar1;
		if (unk_0xB7D6400C89373777(*uParam0))
		{
			if (bParam13)
			{
				unk_0x6DA4D1FB7DCE9FD8(iVar1, 1);
			}
			unk_0x8B58E7AC53EED9F1(iVar1, iParam8);
			if (unk_0x895470BB92940DC6(iVar1))
			{
				if (bParam6)
				{
					unk_0xFEDD7E9148CF3B3E(*uParam0, 1);
				}
				else
				{
					unk_0xFEDD7E9148CF3B3E(*uParam0, 0);
				}
				if (bParam11)
				{
					unk_0x84CE5E7CD3A7E197(*uParam0, unk_0x1146A9AE09CE2B14(), 1);
				}
			}
			unk_0x2AC1ECA957EB9158(iVar1, iParam7);
			unk_0xF4B0F1D16C5ECDB7(iVar1, 1);
			if (bParam10)
			{
				unk_0xD1A5295FE7ADF001(iVar1);
				unk_0x65FFB0A9D15E084E(iVar1, 5, 5, 1f);
			}
			func_200(Param2, uParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_200(struct<3> Param0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_201(unk_0x1146A9AE09CE2B14(), Param0, iParam2) > -1)
	{
		if ((Global_2405077.f_2919[1 /*6*/].f_5 == iParam3 && Global_2405077.f_2919[1 /*6*/].f_4 == iParam2) && vdist(Global_2405077.f_2919[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2405077.f_2919[iVar0 /*6*/] = { Global_2405077.f_2919[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2405077.f_2919[1 /*6*/] = { Param0 };
		Global_2405077.f_2919[1 /*6*/].f_3 = uParam1;
		Global_2405077.f_2919[1 /*6*/].f_4 = iParam2;
		Global_2405077.f_2919[1 /*6*/].f_5 = iParam3;
	}
}

int func_201(int iParam0, struct<3> Param1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam2)
			{
				Var2 = { Param1 };
				if (unk_0x0BCA9ADE67DF9DD8((Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (vdist(Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_202()
{
	int iVar0;
	
	switch (Local_124.f_195)
	{
		case 0:
			iVar0 = joaat("mule");
			break;
		
		case 1:
			iVar0 = joaat("mule");
			break;
		
		case 2:
			iVar0 = joaat("mule");
			break;
	}
	return iVar0;
}

void func_203()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x443E2CA72E118E64())
	{
		return;
	}
	if (func_440())
	{
		return;
	}
	if (Local_124.f_209 != 0)
	{
		return;
	}
	if (!func_11(&(Local_124.f_230)))
	{
		func_10(&(Local_124.f_230), 0, 0);
	}
	iVar1 = func_205();
	if (!func_6(&(Local_124.f_230), 15000, 0))
	{
		iVar0 = 0;
		while (iVar0 < func_204())
		{
			iVar2 = 0;
			if (!unk_0x159BC3DDA80D71AC(Local_124.f_199[iVar0]))
			{
				if (unk_0xA8911798335DCDA2(1))
				{
					if (func_62(iVar1))
					{
						if (!func_61(Local_124.f_179[iVar0 /*5*/], 0f, 0f, 0f, 0))
						{
							if (func_48(Local_124.f_179[iVar0 /*5*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
							{
								if (!unk_0x234B68AC2E35ED5A(Local_124.f_211, iVar0))
								{
									unk_0x6AF7EE4DD9F8B944(Local_124.f_179[iVar0 /*5*/], 5f, 1, 0, 0, 1);
									unk_0x191DDA30577F440A(&(Local_124.f_211), iVar0);
								}
								if (func_199(&(Local_124.f_199[iVar0]), iVar1, Local_124.f_179[iVar0 /*5*/], Local_124.f_179[iVar0 /*5*/].f_3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
								{
									unk_0xBB18EA5F1620FF5F(unk_0x854C404AEB476240(Local_124.f_199[iVar0]), 1);
									func_198(unk_0x854C404AEB476240(Local_124.f_199[iVar0]));
								}
							}
							else
							{
								if (unk_0x4B1BAFAB7E8F4DA7(Local_124.f_179[iVar0 /*5*/], 6f))
								{
									iVar2 = 1;
								}
								else if (unk_0x95F3ABD15748A3D6(Local_124.f_179[iVar0 /*5*/], Local_124.f_179[iVar0 /*5*/].f_1, (Local_124.f_179[iVar0 /*5*/].f_2 + 1f), 1f) || unk_0x95F3ABD15748A3D6(Local_124.f_179[iVar0 /*5*/], 1f))
								{
									iVar2 = 1;
								}
								if (iVar2 == 1)
								{
									if (!unk_0x234B68AC2E35ED5A(Local_124.f_211, iVar0))
									{
										unk_0x6AF7EE4DD9F8B944(Local_124.f_179[iVar0 /*5*/], 6f, 1, 0, 0, 1);
										unk_0x191DDA30577F440A(&(Local_124.f_211), iVar0);
									}
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
}

int func_204()
{
	switch (Local_124.f_197)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
		case 8:
			return 2;
		
		default:
	}
	return 3;
}

int func_205()
{
	int iVar0;
	
	switch (Local_124.f_195)
	{
		case 0:
			iVar0 = joaat("speedo");
			break;
		
		case 1:
			iVar0 = joaat("burrito3");
			break;
		
		case 2:
			iVar0 = joaat("gburrito2");
			break;
	}
	return iVar0;
}

void func_206()
{
	if (unk_0x234B68AC2E35ED5A(Local_124.f_1, 12))
	{
		return;
	}
	switch (Local_124.f_197)
	{
		case 0:
			Local_124.f_261 = unk_0x0823FA7465392E20(31.1862f, -2594.657f, -50f, 68.0247f, -2551.956f, 50f, 1, 1, 1, 1);
			break;
		
		case 1:
			Local_124.f_261 = unk_0x0823FA7465392E20(-1109.664f, -1297.61f, -50f, -1074.653f, -1223.725f, 50f, 1, 1, 1, 1);
			break;
		
		case 2:
			Local_124.f_261 = unk_0x0823FA7465392E20(859.394f, -1082.382f, -50f, 914.3219f, -1008.526f, 50f, 1, 1, 1, 1);
			break;
		
		case 3:
			Local_124.f_261 = unk_0x0823FA7465392E20(240.8218f, -1997.975f, -50f, 243.8696f, -1933.894f, 50f, 1, 1, 1, 1);
			break;
		
		case 4:
			Local_124.f_261 = unk_0x0823FA7465392E20(-451.6602f, 171.9769f, -50f, -397.3188f, 222.9419f, 50f, 1, 1, 1, 1);
			break;
		
		case 5:
			Local_124.f_261 = unk_0x0823FA7465392E20(-1059.294f, -2044.054f, -50f, -1011.896f, -1884.057f, 140.3546f, 1, 1, 1, 1);
			break;
		
		case 6:
			Local_124.f_261 = unk_0x0823FA7465392E20(-1284.743f, -836.3273f, -50f, -1246.317f, -774.2995f, 50f, 1, 1, 1, 1);
			break;
		
		case 7:
			Local_124.f_261 = unk_0x0823FA7465392E20(-924.5807f, -2758.87f, -50.9462f, -789.014f, -2731.518f, 112.94f, 1, 1, 1, 1);
			break;
		
		case 8:
			Local_124.f_261 = unk_0x0823FA7465392E20(253.779f, -3039.713f, -50f, 308.8536f, -2986.068f, 50f, 1, 1, 1, 1);
			break;
		
		case 9:
			Local_124.f_261 = unk_0x0823FA7465392E20(1515.631f, -2191.266f, -50f, 1597.112f, -2059.625f, 150f, 1, 1, 1, 1);
			break;
		
		case 10:
			Local_124.f_261 = unk_0x0823FA7465392E20(-348.6945f, -2731.759f, -50f, -230.5551f, -2670.349f, 50.0003f, 1, 1, 1, 1);
			break;
		
		case 11:
			Local_124.f_261 = unk_0x0823FA7465392E20(464.591f, -669.6168f, -50f, 598.1423f, -499.8008f, 50f, 1, 1, 1, 1);
			break;
		
		case 12:
			Local_124.f_261 = unk_0x0823FA7465392E20(-564.2241f, -1836.488f, -50f, -498.0586f, -1768.227f, 50f, 1, 1, 1, 1);
			break;
		
		case 13:
			Local_124.f_261 = unk_0x0823FA7465392E20(-357.3719f, -1413.902f, -50f, -287.5592f, -1320.63f, 50f, 1, 1, 1, 1);
			break;
		
		case 14:
			Local_124.f_261 = unk_0x0823FA7465392E20(302.4282f, 333.8127f, -50f, 359.9608f, 361.1776f, 150f, 1, 1, 1, 1);
			break;
		
		case 15:
			Local_124.f_261 = unk_0x0823FA7465392E20(883.963f, -1600.535f, -50f, 980.0828f, -1532.579f, 50f, 1, 1, 1, 1);
			break;
		
		case 16:
			Local_124.f_261 = unk_0x0823FA7465392E20(691.8906f, -946.6288f, -50f, 792.8187f, -856.2645f, 50f, 1, 1, 1, 1);
			break;
		
		case 17:
			Local_124.f_261 = unk_0x0823FA7465392E20(931.0925f, -2203.321f, -50f, 1054.687f, -2104.696f, 50f, 1, 1, 1, 1);
			break;
		
		case 18:
			Local_124.f_261 = unk_0x0823FA7465392E20(909.5201f, -2548.777f, -50f, 1079.576f, -2480.221f, 50f, 1, 1, 1, 1);
			break;
		
		case 19:
			Local_124.f_261 = unk_0x0823FA7465392E20(-285.6858f, 169.6409f, -50f, -231.663f, 249.5953f, 150f, 1, 1, 1, 1);
			break;
		
		case 20:
			Local_124.f_261 = unk_0x0823FA7465392E20(490.689f, -2005.857f, -50f, 557.8708f, -1886.362f, 124.4746f, 1, 1, 1, 1);
			break;
		
		case 21:
			Local_124.f_261 = unk_0x0823FA7465392E20(88.2044f, -2235.053f, -50f, 199.7525f, -2183.485f, 50f, 1, 1, 1, 1);
			break;
	}
	unk_0x191DDA30577F440A(&(Local_124.f_1), 12);
}

void func_207()
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	if (Local_124.f_223 == 0)
	{
		Var0 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0) };
		Var1 = { func_208() };
		fVar2 = unk_0x0BABEFEA577FCFA4(Var0, Var1, 0);
		if (fVar2 > 2500f)
		{
			Local_124.f_223 = Global_262145.f_16313;
		}
		else if (fVar2 > 2000f)
		{
			Local_124.f_223 = Global_262145.f_16314;
		}
		else if (fVar2 > 1500f)
		{
			Local_124.f_223 = Global_262145.f_16315;
		}
		else if (fVar2 > 1000f)
		{
			Local_124.f_223 = Global_262145.f_16316;
		}
		else
		{
			Local_124.f_223 = Global_262145.f_16317;
		}
	}
}

Vector3 func_208()
{
	switch (Local_124.f_197)
	{
		case 0:
			return 57.4898f, -2566.763f, 5.2753f;
		
		case 1:
			return -1080.198f, -1262.176f, 4.6922f;
		
		case 2:
			return 902.1754f, -1028.345f, 33.9666f;
		
		case 3:
			return 248.97f, -1955.611f, 22.1629f;
		
		case 4:
			return -420.2774f, 183.9635f, 79.5661f;
		
		case 5:
			return -1048.901f, -2013.738f, 12.1616f;
		
		case 6:
			return -1269.405f, -811.931f, 16.1114f;
		
		case 7:
			return -872.9662f, -2735.341f, 12.9538f;
		
		case 8:
			return 273.7365f, -3019.411f, 4.7024f;
		
		case 9:
			return 1561.409f, -2134.272f, 76.4751f;
		
		case 10:
			return -304.1417f, -2695.407f, 5.0003f;
		
		case 11:
			return 504.3576f, -651.182f, 23.7512f;
		
		case 12:
			return -529.7162f, -1779.501f, 20.3865f;
		
		case 13:
			return -297.2056f, -1362.507f, 30.2971f;
		
		case 14:
			return 346.6934f, 338.6926f, 104.2013f;
		
		case 15:
			return 962.1667f, -1557.684f, 29.8012f;
		
		case 16:
			return 749.9839f, -887.2051f, 24.0879f;
		
		case 17:
			return 1008.78f, -2144.658f, 29.5516f;
		
		case 18:
			return 1010.923f, -2523.426f, 27.3091f;
		
		case 19:
			return -259.173f, 200.7894f, 84.0941f;
		
		case 20:
			return 540.001f, -1945.595f, 23.9847f;
		
		case 21:
			return 95.5855f, -2215.18f, 5.1712f;
		
		default:
	}
	return 941.8403f, -1560.594f, 30.9244f;
}

void func_209()
{
	int iVar0;
	
	if (!func_61(Local_124.f_103[0 /*5*/], 0f, 0f, 0f, 0))
	{
		return;
	}
	func_210();
	iVar0 = func_1218();
	switch (iVar0)
	{
		case 99:
			switch (Local_124.f_197)
			{
				case 0:
					Local_124.f_2[0 /*10*/].f_5 = { 81.7918f, -2554.375f, 5f };
					Local_124.f_2[0 /*10*/].f_8 = 268.2536f;
					break;
				
				case 1:
					Local_124.f_2[0 /*10*/].f_5 = { -1065.693f, -1275.444f, 4.9818f };
					Local_124.f_2[0 /*10*/].f_8 = 120.7465f;
					break;
				
				case 2:
					Local_124.f_2[0 /*10*/].f_5 = { 905.6629f, -1003.347f, 33.8966f };
					Local_124.f_2[0 /*10*/].f_8 = 271.0984f;
					break;
				
				case 3:
					Local_124.f_2[0 /*10*/].f_5 = { 231.9853f, -1935.578f, 22.4437f };
					Local_124.f_2[0 /*10*/].f_8 = 322.2929f;
					break;
				
				case 4:
					Local_124.f_2[0 /*10*/].f_5 = { -399.3887f, 230.6774f, 82.492f };
					Local_124.f_2[0 /*10*/].f_8 = 270.2787f;
					break;
				
				case 5:
					Local_124.f_2[0 /*10*/].f_5 = { -1086.639f, -2005.462f, 12.0063f };
					Local_124.f_2[0 /*10*/].f_8 = 11.8952f;
					break;
				
				case 6:
					Local_124.f_2[0 /*10*/].f_5 = { -1244.429f, -884.493f, 11.165f };
					Local_124.f_2[0 /*10*/].f_8 = 126.962f;
					break;
				
				case 7:
					Local_124.f_2[0 /*10*/].f_5 = { -835.0118f, -2630.999f, 12.9249f };
					Local_124.f_2[0 /*10*/].f_8 = 328.7649f;
					break;
				
				case 8:
					Local_124.f_2[0 /*10*/].f_5 = { 296.2087f, -3013.953f, 4.9212f };
					Local_124.f_2[0 /*10*/].f_8 = 0.24f;
					break;
				
				case 9:
					Local_124.f_2[0 /*10*/].f_5 = { 1413.249f, -1954.944f, 64.6238f };
					Local_124.f_2[0 /*10*/].f_8 = 326.5977f;
					break;
				
				case 10:
					Local_124.f_2[0 /*10*/].f_5 = { -318.5519f, -2671.678f, 5.0502f };
					Local_124.f_2[0 /*10*/].f_8 = 318.3914f;
					break;
				
				case 11:
					Local_124.f_2[0 /*10*/].f_5 = { 504.8237f, -711.9799f, 23.9127f };
					Local_124.f_2[0 /*10*/].f_8 = 177.966f;
					break;
				
				case 12:
					Local_124.f_2[0 /*10*/].f_5 = { -524.3798f, -1770.964f, 20.3834f };
					Local_124.f_2[0 /*10*/].f_8 = 245.3696f;
					break;
				
				case 13:
					Local_124.f_2[0 /*10*/].f_5 = { -286.5591f, -1359.238f, 30.3043f };
					Local_124.f_2[0 /*10*/].f_8 = 180.1492f;
					break;
				
				case 14:
					Local_124.f_2[0 /*10*/].f_5 = { 343.9299f, 321.1165f, 103.4987f };
					Local_124.f_2[0 /*10*/].f_8 = 75.8829f;
					break;
				
				case 15:
					Local_124.f_2[0 /*10*/].f_5 = { 974.6287f, -1540.746f, 29.4172f };
					Local_124.f_2[0 /*10*/].f_8 = 4.069f;
					break;
				
				case 16:
					Local_124.f_2[0 /*10*/].f_5 = { 777.0914f, -937.4927f, 24.7044f };
					Local_124.f_2[0 /*10*/].f_8 = 186.7581f;
					break;
				
				case 17:
					Local_124.f_2[0 /*10*/].f_5 = { 997.4642f, -2087.759f, 30.2136f };
					Local_124.f_2[0 /*10*/].f_8 = 275.8696f;
					break;
				
				case 18:
					Local_124.f_2[0 /*10*/].f_5 = { 987.9297f, -2461.676f, 27.3773f };
					Local_124.f_2[0 /*10*/].f_8 = 85.6201f;
					break;
				
				case 19:
					Local_124.f_2[0 /*10*/].f_5 = { -227.6549f, 188.3366f, 78.676f };
					Local_124.f_2[0 /*10*/].f_8 = 178.634f;
					break;
				
				case 20:
					Local_124.f_2[0 /*10*/].f_5 = { 460.4135f, -1932.892f, 23.6765f };
					Local_124.f_2[0 /*10*/].f_8 = 295.2699f;
					break;
				
				case 21:
					Local_124.f_2[0 /*10*/].f_5 = { 241.4945f, -2093.446f, 16.3114f };
					Local_124.f_2[0 /*10*/].f_8 = 225.7471f;
					break;
				
				default:
					Local_124.f_2[0 /*10*/].f_5 = { 974.6287f, -1540.746f, 29.4172f };
					Local_124.f_2[0 /*10*/].f_8 = 4.069f;
					break;
			}
			break;
		
		case 0:
			switch (Local_124.f_197)
			{
				case 0:
					Local_124.f_103[0 /*5*/] = { 48.6581f, -2562.141f, 5f };
					Local_124.f_103[0 /*5*/].f_3 = 18.2728f;
					Local_124.f_103[1 /*5*/] = { 51.6031f, -2571.123f, 5.0046f };
					Local_124.f_103[1 /*5*/].f_3 = 345.3663f;
					Local_124.f_103[2 /*5*/] = { 56.6838f, -2564.757f, 5.0641f };
					Local_124.f_103[2 /*5*/].f_3 = 55.4785f;
					Local_124.f_103[3 /*5*/] = { 62.9447f, -2585.068f, 5.0046f };
					Local_124.f_103[3 /*5*/].f_3 = 271.0223f;
					Local_124.f_103[4 /*5*/] = { 65.0669f, -2563.442f, 5f };
					Local_124.f_103[4 /*5*/].f_3 = 316.6382f;
					Local_124.f_103[5 /*5*/] = { 47.7942f, -2575.388f, 9.0407f };
					Local_124.f_103[5 /*5*/].f_3 = 37.4409f;
					Local_124.f_179[0 /*5*/] = { 61.478f, -2560.506f, 5f };
					Local_124.f_179[0 /*5*/].f_3 = 238.6826f;
					Local_124.f_179[1 /*5*/] = { 49.6015f, -2564.766f, 5.0046f };
					Local_124.f_179[1 /*5*/].f_3 = 154.2891f;
					break;
				
				case 1:
					Local_124.f_103[0 /*5*/] = { -1078.744f, -1271.7f, 9.5625f };
					Local_124.f_103[0 /*5*/].f_3 = 274.4253f;
					Local_124.f_103[1 /*5*/] = { -1087.233f, -1257.104f, 9.5625f };
					Local_124.f_103[1 /*5*/].f_3 = 354.2453f;
					Local_124.f_103[2 /*5*/] = { -1072.724f, -1267.841f, 4.9577f };
					Local_124.f_103[2 /*5*/].f_3 = 193.2412f;
					Local_124.f_103[3 /*5*/] = { -1085.99f, -1254.825f, 4.431f };
					Local_124.f_103[3 /*5*/].f_3 = 304.0791f;
					Local_124.f_103[4 /*5*/] = { -1081.952f, -1259.029f, 4.5607f };
					Local_124.f_103[4 /*5*/].f_3 = 251.1138f;
					Local_124.f_103[5 /*5*/] = { -1063.538f, -1257.842f, 5.0206f };
					Local_124.f_103[5 /*5*/].f_3 = 31.8546f;
					Local_124.f_179[0 /*5*/] = { -1063.267f, -1260.492f, 5.0582f };
					Local_124.f_179[0 /*5*/].f_3 = 134.6062f;
					Local_124.f_179[1 /*5*/] = { -1080.071f, -1255.526f, 4.4927f };
					Local_124.f_179[1 /*5*/].f_3 = 282.3716f;
					break;
				
				case 2:
					Local_124.f_103[0 /*5*/] = { 902.5689f, -1021.511f, 33.9664f };
					Local_124.f_103[0 /*5*/].f_3 = 337.3475f;
					Local_124.f_103[1 /*5*/] = { 894.0451f, -1020.726f, 33.9665f };
					Local_124.f_103[1 /*5*/].f_3 = 303.745f;
					Local_124.f_103[2 /*5*/] = { 901.3245f, -1033.82f, 33.9661f };
					Local_124.f_103[2 /*5*/].f_3 = 343.5762f;
					Local_124.f_103[3 /*5*/] = { 909.4354f, -1035.19f, 33.9662f };
					Local_124.f_103[3 /*5*/].f_3 = 175.276f;
					Local_124.f_103[4 /*5*/] = { 900.9361f, -1044.508f, 38.9808f };
					Local_124.f_103[4 /*5*/].f_3 = 150.7164f;
					Local_124.f_103[5 /*5*/] = { 894.3841f, -1032.681f, 38.9808f };
					Local_124.f_103[5 /*5*/].f_3 = 327.9728f;
					Local_124.f_179[0 /*5*/] = { 900.9302f, -1019.053f, 33.967f };
					Local_124.f_179[0 /*5*/].f_3 = 294.1935f;
					Local_124.f_179[1 /*5*/] = { 905.7681f, -1034.471f, 33.9661f };
					Local_124.f_179[1 /*5*/].f_3 = 222.0787f;
					break;
				
				case 3:
					Local_124.f_103[0 /*5*/] = { 241.6933f, -1941.756f, 22.6063f };
					Local_124.f_103[0 /*5*/].f_3 = 54.0685f;
					Local_124.f_103[1 /*5*/] = { 247.0794f, -1955.052f, 22.2033f };
					Local_124.f_103[1 /*5*/].f_3 = 350.0075f;
					Local_124.f_103[2 /*5*/] = { 260.179f, -1959.165f, 22.0967f };
					Local_124.f_103[2 /*5*/].f_3 = 284.5439f;
					Local_124.f_103[3 /*5*/] = { 258.183f, -1967.262f, 21.487f };
					Local_124.f_103[3 /*5*/].f_3 = 173.9707f;
					Local_124.f_103[4 /*5*/] = { 248.7987f, -1959.507f, 27.2402f };
					Local_124.f_103[4 /*5*/].f_3 = 231.9236f;
					Local_124.f_103[5 /*5*/] = { 233.8911f, -1946.98f, 27.2402f };
					Local_124.f_103[5 /*5*/].f_3 = 342.0352f;
					Local_124.f_179[0 /*5*/] = { 260.5989f, -1964.07f, 21.7532f };
					Local_124.f_179[0 /*5*/].f_3 = 147.0433f;
					Local_124.f_179[1 /*5*/] = { 241.5964f, -1944.464f, 22.3678f };
					Local_124.f_179[1 /*5*/].f_3 = 73.2698f;
					break;
				
				case 4:
					Local_124.f_103[0 /*5*/] = { -405.6343f, 182.3138f, 79.2232f };
					Local_124.f_103[0 /*5*/].f_3 = 306.9303f;
					Local_124.f_103[1 /*5*/] = { -420.0244f, 184.8413f, 79.6851f };
					Local_124.f_103[1 /*5*/].f_3 = 228.321f;
					Local_124.f_103[2 /*5*/] = { -428.4716f, 185.8607f, 79.7578f };
					Local_124.f_103[2 /*5*/].f_3 = 44.5389f;
					Local_124.f_103[3 /*5*/] = { -435.6789f, 179.3023f, 74.3213f };
					Local_124.f_103[3 /*5*/].f_3 = 85.0906f;
					Local_124.f_103[4 /*5*/] = { -399.305f, 190.302f, 80.5987f };
					Local_124.f_103[4 /*5*/].f_3 = 85.1506f;
					Local_124.f_103[5 /*5*/] = { -438.713f, 183.3993f, 74.2764f };
					Local_124.f_103[5 /*5*/].f_3 = 351.0685f;
					Local_124.f_179[0 /*5*/] = { -436.8526f, 183.3829f, 74.3109f };
					Local_124.f_179[0 /*5*/].f_3 = 7.2644f;
					Local_124.f_179[1 /*5*/] = { -405.3793f, 187.1801f, 79.9864f };
					Local_124.f_179[1 /*5*/].f_3 = 354.7918f;
					break;
				
				case 5:
					Local_124.f_103[0 /*5*/] = { -1069.206f, -2014.558f, 12.1616f };
					Local_124.f_103[0 /*5*/].f_3 = 201.0558f;
					Local_124.f_103[1 /*5*/] = { -1063.069f, -2014.715f, 12.1616f };
					Local_124.f_103[1 /*5*/].f_3 = 141.4469f;
					Local_124.f_103[2 /*5*/] = { -1067.427f, -2023.773f, 12.2027f };
					Local_124.f_103[2 /*5*/].f_3 = 197.023f;
					Local_124.f_103[3 /*5*/] = { -1060.439f, -2024.766f, 12.1616f };
					Local_124.f_103[3 /*5*/].f_3 = 152.4942f;
					Local_124.f_103[4 /*5*/] = { -1052.16f, -2022.239f, 12.1616f };
					Local_124.f_103[4 /*5*/].f_3 = 146.7409f;
					Local_124.f_103[5 /*5*/] = { -1051.755f, -2029.141f, 12.1616f };
					Local_124.f_103[5 /*5*/].f_3 = 82.1706f;
					Local_124.f_103[6 /*5*/] = { -1073.135f, -2011.029f, 12.6172f };
					Local_124.f_103[6 /*5*/].f_3 = 214.1918f;
					Local_124.f_103[7 /*5*/] = { -1071.441f, -2002.931f, 14.7905f };
					Local_124.f_103[7 /*5*/].f_3 = 187.3056f;
					Local_124.f_179[0 /*5*/] = { -1052.354f, -2025.611f, 12.1616f };
					Local_124.f_179[0 /*5*/].f_3 = 358.8676f;
					Local_124.f_179[1 /*5*/] = { -1066.611f, -2016.299f, 12.1616f };
					Local_124.f_179[1 /*5*/].f_3 = 280.333f;
					Local_124.f_179[2 /*5*/] = { -1063.965f, -2024.623f, 12.1831f };
					Local_124.f_179[2 /*5*/].f_3 = 269.67f;
					break;
				
				case 6:
					Local_124.f_103[0 /*5*/] = { -1280.076f, -805.8421f, 16.508f };
					Local_124.f_103[0 /*5*/].f_3 = 57.9953f;
					Local_124.f_103[1 /*5*/] = { -1286.231f, -811.6383f, 16.4521f };
					Local_124.f_103[1 /*5*/].f_3 = 35.4979f;
					Local_124.f_103[2 /*5*/] = { -1277.371f, -821.9402f, 16.1003f };
					Local_124.f_103[2 /*5*/].f_3 = 239.3392f;
					Local_124.f_103[3 /*5*/] = { -1267.488f, -824.3138f, 16.0992f };
					Local_124.f_103[3 /*5*/].f_3 = 144.6389f;
					Local_124.f_103[4 /*5*/] = { -1262.181f, -824.9617f, 16.0996f };
					Local_124.f_103[4 /*5*/].f_3 = 39.795f;
					Local_124.f_103[5 /*5*/] = { -1287.23f, -791.7753f, 16.5858f };
					Local_124.f_103[5 /*5*/].f_3 = 140.3937f;
					Local_124.f_179[0 /*5*/] = { -1273.327f, -823.6479f, 16.0992f };
					Local_124.f_179[0 /*5*/].f_3 = 254.419f;
					Local_124.f_179[1 /*5*/] = { -1285.171f, -807.566f, 16.5295f };
					Local_124.f_179[1 /*5*/].f_3 = 146.8347f;
					break;
				
				case 7:
					Local_124.f_103[0 /*5*/] = { -886.5272f, -2713.691f, 12.8285f };
					Local_124.f_103[0 /*5*/].f_3 = 330.9706f;
					Local_124.f_103[1 /*5*/] = { -876.2014f, -2718.661f, 12.9446f };
					Local_124.f_103[1 /*5*/].f_3 = 335.853f;
					Local_124.f_103[2 /*5*/] = { -882.2947f, -2732.553f, 12.8285f };
					Local_124.f_103[2 /*5*/].f_3 = 33.564f;
					Local_124.f_103[3 /*5*/] = { -884.4581f, -2724.486f, 12.8285f };
					Local_124.f_103[3 /*5*/].f_3 = 22.4268f;
					Local_124.f_103[4 /*5*/] = { -887.4197f, -2737.267f, 12.8285f };
					Local_124.f_103[4 /*5*/].f_3 = 356.0724f;
					Local_124.f_103[5 /*5*/] = { -894.7762f, -2736.815f, 12.8285f };
					Local_124.f_103[5 /*5*/].f_3 = 164.3784f;
					Local_124.f_103[6 /*5*/] = { -897.211f, -2750.013f, 12.9445f };
					Local_124.f_103[6 /*5*/].f_3 = 321.2128f;
					Local_124.f_103[7 /*5*/] = { -882.6691f, -2745.853f, 12.9362f };
					Local_124.f_103[7 /*5*/].f_3 = 64.3587f;
					Local_124.f_103[8 /*5*/] = { -907.6017f, -2749.353f, 12.9445f };
					Local_124.f_103[8 /*5*/].f_3 = 335.7514f;
					Local_124.f_103[9 /*5*/] = { -869.9126f, -2715.025f, 12.9446f };
					Local_124.f_103[9 /*5*/].f_3 = 8.2036f;
					Local_124.f_179[0 /*5*/] = { -882.8745f, -2713.687f, 12.8285f };
					Local_124.f_179[0 /*5*/].f_3 = 239.8798f;
					Local_124.f_179[1 /*5*/] = { -883.874f, -2728.786f, 12.8285f };
					Local_124.f_179[1 /*5*/].f_3 = 201.2263f;
					Local_124.f_179[2 /*5*/] = { -891.2535f, -2737.411f, 12.8285f };
					Local_124.f_179[2 /*5*/].f_3 = 92.5365f;
					break;
				
				case 8:
					Local_124.f_103[0 /*5*/] = { 258.4958f, -3019.888f, 4.7612f };
					Local_124.f_103[0 /*5*/].f_3 = 190.0675f;
					Local_124.f_103[1 /*5*/] = { 273.9505f, -3013.159f, 4.7016f };
					Local_124.f_103[1 /*5*/].f_3 = 68.4427f;
					Local_124.f_103[2 /*5*/] = { 273.0544f, -3016.924f, 4.7049f };
					Local_124.f_103[2 /*5*/].f_3 = 136.0059f;
					Local_124.f_103[3 /*5*/] = { 274.0455f, -2995.704f, 4.7009f };
					Local_124.f_103[3 /*5*/].f_3 = 145.0681f;
					Local_124.f_103[4 /*5*/] = { 277.7727f, -3020.606f, 10.5614f };
					Local_124.f_103[4 /*5*/].f_3 = 59.5107f;
					Local_124.f_103[5 /*5*/] = { 277.1279f, -3034.719f, 10.5614f };
					Local_124.f_103[5 /*5*/].f_3 = 113.9025f;
					Local_124.f_179[0 /*5*/] = { 266.3998f, -3022.136f, 4.7302f };
					Local_124.f_179[0 /*5*/].f_3 = 14.1592f;
					Local_124.f_179[1 /*5*/] = { 270.9944f, -2999.383f, 4.7128f };
					Local_124.f_179[1 /*5*/].f_3 = 145.314f;
					break;
				
				case 9:
					Local_124.f_103[0 /*5*/] = { 1546.335f, -2124.289f, 76.1382f };
					Local_124.f_103[0 /*5*/].f_3 = 17.7805f;
					Local_124.f_103[1 /*5*/] = { 1554.385f, -2125.222f, 76.3125f };
					Local_124.f_103[1 /*5*/].f_3 = 10.9741f;
					Local_124.f_103[2 /*5*/] = { 1558.224f, -2118.532f, 76.3765f };
					Local_124.f_103[2 /*5*/].f_3 = 15.6854f;
					Local_124.f_103[3 /*5*/] = { 1547.75f, -2143.708f, 76.4844f };
					Local_124.f_103[3 /*5*/].f_3 = 154.3238f;
					Local_124.f_103[4 /*5*/] = { 1552.05f, -2147.172f, 76.5383f };
					Local_124.f_103[4 /*5*/].f_3 = 147.9245f;
					Local_124.f_103[5 /*5*/] = { 1563.341f, -2138.102f, 76.5841f };
					Local_124.f_103[5 /*5*/].f_3 = 149.5447f;
					Local_124.f_103[6 /*5*/] = { 1561.244f, -2133.029f, 76.4828f };
					Local_124.f_103[6 /*5*/].f_3 = 76.8144f;
					Local_124.f_103[7 /*5*/] = { 1569.277f, -2130.628f, 77.3351f };
					Local_124.f_103[7 /*5*/].f_3 = 112.2364f;
					Local_124.f_179[0 /*5*/] = { 1550.601f, -2145.957f, 76.5271f };
					Local_124.f_179[0 /*5*/].f_3 = 296.1894f;
					Local_124.f_179[1 /*5*/] = { 1563.138f, -2135.943f, 76.5206f };
					Local_124.f_179[1 /*5*/].f_3 = 260.3118f;
					Local_124.f_179[2 /*5*/] = { 1550.38f, -2123.159f, 76.2165f };
					Local_124.f_179[2 /*5*/].f_3 = 235.2799f;
					break;
				
				case 10:
					Local_124.f_103[0 /*5*/] = { -307.7643f, -2684.145f, 5.0079f };
					Local_124.f_103[0 /*5*/].f_3 = 10.2057f;
					Local_124.f_103[1 /*5*/] = { -298.4151f, -2685.329f, 5.1595f };
					Local_124.f_103[1 /*5*/].f_3 = 34.7011f;
					Local_124.f_103[2 /*5*/] = { -309.9699f, -2692.377f, 5.1532f };
					Local_124.f_103[2 /*5*/].f_3 = 231.6414f;
					Local_124.f_103[3 /*5*/] = { -315.5637f, -2698.447f, 6.55f };
					Local_124.f_103[3 /*5*/].f_3 = 279.1803f;
					Local_124.f_103[4 /*5*/] = { -307.4792f, -2699.072f, 5.0003f };
					Local_124.f_103[4 /*5*/].f_3 = 2.2931f;
					Local_124.f_103[5 /*5*/] = { -304.3626f, -2700.868f, 5.0003f };
					Local_124.f_103[5 /*5*/].f_3 = 253.2487f;
					Local_124.f_103[6 /*5*/] = { -306.5913f, -2707.836f, 5.1532f };
					Local_124.f_103[6 /*5*/].f_3 = 313.0547f;
					Local_124.f_103[7 /*5*/] = { -303.2011f, -2711.413f, 5.0003f };
					Local_124.f_103[7 /*5*/].f_3 = 288.4283f;
					Local_124.f_179[0 /*5*/] = { -304.9815f, -2709.62f, 5.0003f };
					Local_124.f_179[0 /*5*/].f_3 = 135.5251f;
					Local_124.f_179[1 /*5*/] = { -305.7259f, -2696.407f, 5.0003f };
					Local_124.f_179[1 /*5*/].f_3 = 207.3978f;
					Local_124.f_179[2 /*5*/] = { -303.8944f, -2685.304f, 5.0003f };
					Local_124.f_179[2 /*5*/].f_3 = 255.2084f;
					break;
				
				case 11:
					Local_124.f_103[0 /*5*/] = { 518.3859f, -657.3704f, 23.7512f };
					Local_124.f_103[0 /*5*/].f_3 = 138.1634f;
					Local_124.f_103[1 /*5*/] = { 519.1835f, -649.9944f, 23.7512f };
					Local_124.f_103[1 /*5*/].f_3 = 17.4978f;
					Local_124.f_103[2 /*5*/] = { 495.9756f, -648.6689f, 31.7074f };
					Local_124.f_103[2 /*5*/].f_3 = 283.3737f;
					Local_124.f_103[3 /*5*/] = { 504.1287f, -641.0121f, 23.7369f };
					Local_124.f_103[3 /*5*/].f_3 = 303.125f;
					Local_124.f_103[4 /*5*/] = { 498.1048f, -638.1683f, 23.9727f };
					Local_124.f_103[4 /*5*/].f_3 = 289.9783f;
					Local_124.f_103[5 /*5*/] = { 499.259f, -630.4283f, 23.7512f };
					Local_124.f_103[5 /*5*/].f_3 = 194.1317f;
					Local_124.f_103[6 /*5*/] = { 508.6016f, -626.3681f, 23.7571f };
					Local_124.f_103[6 /*5*/].f_3 = 343.9152f;
					Local_124.f_103[7 /*5*/] = { 497.44f, -661.5337f, 27.617f };
					Local_124.f_103[7 /*5*/].f_3 = 199.5863f;
					Local_124.f_179[0 /*5*/] = { 517.3517f, -654.2748f, 23.7512f };
					Local_124.f_179[0 /*5*/].f_3 = 150.2542f;
					Local_124.f_179[1 /*5*/] = { 505.3363f, -645.2184f, 23.7512f };
					Local_124.f_179[1 /*5*/].f_3 = 23.9108f;
					Local_124.f_179[2 /*5*/] = { 508.3529f, -630.1296f, 23.7512f };
					Local_124.f_179[2 /*5*/].f_3 = 127.1383f;
					break;
				
				case 12:
					Local_124.f_103[0 /*5*/] = { -546.3519f, -1769.694f, 20.5902f };
					Local_124.f_103[0 /*5*/].f_3 = 277.4846f;
					Local_124.f_103[1 /*5*/] = { -541.7958f, -1776.458f, 20.5973f };
					Local_124.f_103[1 /*5*/].f_3 = 356.3462f;
					Local_124.f_103[2 /*5*/] = { -534.571f, -1772.565f, 20.4432f };
					Local_124.f_103[2 /*5*/].f_3 = 23.1421f;
					Local_124.f_103[3 /*5*/] = { -527.7571f, -1776.274f, 20.367f };
					Local_124.f_103[3 /*5*/].f_3 = 255.9772f;
					Local_124.f_103[4 /*5*/] = { -531.6744f, -1781.516f, 20.4994f };
					Local_124.f_103[4 /*5*/].f_3 = 295.9945f;
					Local_124.f_103[5 /*5*/] = { -555.2966f, -1799.182f, 21.5471f };
					Local_124.f_103[5 /*5*/].f_3 = 327.6154f;
					Local_124.f_103[6 /*5*/] = { -549.1064f, -1786.567f, 21.012f };
					Local_124.f_103[6 /*5*/].f_3 = 334.4709f;
					Local_124.f_103[7 /*5*/] = { -518.8139f, -1785.754f, 20.6425f };
					Local_124.f_103[7 /*5*/].f_3 = 206.6088f;
					Local_124.f_179[0 /*5*/] = { -556.8245f, -1795.383f, 21.5195f };
					Local_124.f_179[0 /*5*/].f_3 = 204.3955f;
					Local_124.f_179[1 /*5*/] = { -531.0875f, -1774.35f, 20.4042f };
					Local_124.f_179[1 /*5*/].f_3 = 77.9003f;
					Local_124.f_179[2 /*5*/] = { -548.1949f, -1767.868f, 20.6224f };
					Local_124.f_179[2 /*5*/].f_3 = 102.3641f;
					break;
				
				case 13:
					Local_124.f_103[0 /*5*/] = { -295.7925f, -1366.301f, 30.3114f };
					Local_124.f_103[0 /*5*/].f_3 = 200.7773f;
					Local_124.f_103[1 /*5*/] = { -294.7914f, -1361.439f, 30.3099f };
					Local_124.f_103[1 /*5*/].f_3 = 280.8006f;
					Local_124.f_103[2 /*5*/] = { -294.8237f, -1355.167f, 30.3168f };
					Local_124.f_103[2 /*5*/].f_3 = 223.8718f;
					Local_124.f_103[3 /*5*/] = { -291.4968f, -1352.201f, 30.2753f };
					Local_124.f_103[3 /*5*/].f_3 = 205.2611f;
					Local_124.f_103[4 /*5*/] = { -294.7546f, -1345.713f, 30.3095f };
					Local_124.f_103[4 /*5*/].f_3 = 323.2399f;
					Local_124.f_103[5 /*5*/] = { -291.2322f, -1339.262f, 30.2775f };
					Local_124.f_103[5 /*5*/].f_3 = 257.2056f;
					Local_124.f_103[6 /*5*/] = { -295.7278f, -1331.49f, 30.3084f };
					Local_124.f_103[6 /*5*/].f_3 = 75.2552f;
					Local_124.f_103[7 /*5*/] = { -293.849f, -1328.756f, 30.2182f };
					Local_124.f_103[7 /*5*/].f_3 = 328.9491f;
					Local_124.f_179[0 /*5*/] = { -292.8152f, -1332.385f, 30.1537f };
					Local_124.f_179[0 /*5*/].f_3 = 29.6972f;
					Local_124.f_179[1 /*5*/] = { -291.6872f, -1348.131f, 30.282f };
					Local_124.f_179[1 /*5*/].f_3 = 166.5207f;
					Local_124.f_179[2 /*5*/] = { -295.23f, -1364.201f, 30.3097f };
					Local_124.f_179[2 /*5*/].f_3 = 108.2429f;
					break;
				
				case 14:
					Local_124.f_103[0 /*5*/] = { 344.5797f, 336.7456f, 104.1594f };
					Local_124.f_103[0 /*5*/].f_3 = 346.2658f;
					Local_124.f_103[1 /*5*/] = { 342.3423f, 332.3715f, 103.7572f };
					Local_124.f_103[1 /*5*/].f_3 = 102.4295f;
					Local_124.f_103[2 /*5*/] = { 341.1604f, 310.392f, 103.4193f };
					Local_124.f_103[2 /*5*/].f_3 = 61.0026f;
					Local_124.f_103[3 /*5*/] = { 346.6567f, 309.6925f, 103.1454f };
					Local_124.f_103[3 /*5*/].f_3 = 257.871f;
					Local_124.f_103[4 /*5*/] = { 350.7382f, 328.2918f, 103.2696f };
					Local_124.f_103[4 /*5*/].f_3 = 117.8644f;
					Local_124.f_103[5 /*5*/] = { 354.2978f, 327.3369f, 103.0974f };
					Local_124.f_103[5 /*5*/].f_3 = 177.6163f;
					Local_124.f_103[6 /*5*/] = { 366.9816f, 326.3944f, 102.6179f };
					Local_124.f_103[6 /*5*/].f_3 = 201.951f;
					Local_124.f_103[7 /*5*/] = { 363.9641f, 322.1239f, 102.6943f };
					Local_124.f_103[7 /*5*/].f_3 = 243.2871f;
					Local_124.f_179[0 /*5*/] = { 343.0425f, 312.0052f, 103.3437f };
					Local_124.f_179[0 /*5*/].f_3 = 258.1888f;
					Local_124.f_179[1 /*5*/] = { 360.5493f, 322.6658f, 102.7946f };
					Local_124.f_179[1 /*5*/].f_3 = 286.3943f;
					Local_124.f_179[2 /*5*/] = { 343.9996f, 332.1288f, 103.7176f };
					Local_124.f_179[2 /*5*/].f_3 = 7.4532f;
					break;
				
				case 15:
					Local_124.f_103[0 /*5*/] = { 962.8411f, -1572.776f, 29.5579f };
					Local_124.f_103[0 /*5*/].f_3 = 198.1588f;
					Local_124.f_103[1 /*5*/] = { 958.9659f, -1572.392f, 29.6097f };
					Local_124.f_103[1 /*5*/].f_3 = 93.0019f;
					Local_124.f_103[2 /*5*/] = { 974.9329f, -1566.858f, 29.5658f };
					Local_124.f_103[2 /*5*/].f_3 = 171.6639f;
					Local_124.f_103[3 /*5*/] = { 977.1616f, -1563.333f, 29.6385f };
					Local_124.f_103[3 /*5*/].f_3 = 4.8635f;
					Local_124.f_103[4 /*5*/] = { 961.7667f, -1559.233f, 29.8001f };
					Local_124.f_103[4 /*5*/].f_3 = 241.449f;
					Local_124.f_103[5 /*5*/] = { 961.8814f, -1556.363f, 29.807f };
					Local_124.f_103[5 /*5*/].f_3 = 275.0858f;
					Local_124.f_103[6 /*5*/] = { 968.3688f, -1552.087f, 29.6598f };
					Local_124.f_103[6 /*5*/].f_3 = 176.2653f;
					Local_124.f_103[7 /*5*/] = { 965.8116f, -1547.661f, 29.6223f };
					Local_124.f_103[7 /*5*/].f_3 = 333.7709f;
					Local_124.f_103[8 /*5*/] = { 957.9225f, -1553.855f, 33.7974f };
					Local_124.f_103[8 /*5*/].f_3 = 308.3917f;
					Local_124.f_103[9 /*5*/] = { 957.7077f, -1566.216f, 33.7974f };
					Local_124.f_103[9 /*5*/].f_3 = 219.3558f;
					Local_124.f_179[0 /*5*/] = { 965.2025f, -1549.952f, 29.6078f };
					Local_124.f_179[0 /*5*/].f_3 = 41.5896f;
					Local_124.f_179[1 /*5*/] = { 974.5963f, -1564.88f, 29.5937f };
					Local_124.f_179[1 /*5*/].f_3 = 251.9554f;
					Local_124.f_179[2 /*5*/] = { 960.7539f, -1572.775f, 29.6016f };
					Local_124.f_179[2 /*5*/].f_3 = 322.5412f;
					break;
				
				case 16:
					Local_124.f_103[0 /*5*/] = { 764.532f, -917.6445f, 24.3477f };
					Local_124.f_103[0 /*5*/].f_3 = 200.6824f;
					Local_124.f_103[1 /*5*/] = { 757.4073f, -914.5825f, 24.2703f };
					Local_124.f_103[1 /*5*/].f_3 = 268.7243f;
					Local_124.f_103[2 /*5*/] = { 763.8087f, -928.9955f, 24.4204f };
					Local_124.f_103[2 /*5*/].f_3 = 359.3907f;
					Local_124.f_103[3 /*5*/] = { 762.9298f, -935.2947f, 24.4307f };
					Local_124.f_103[3 /*5*/].f_3 = 337.1544f;
					Local_124.f_103[4 /*5*/] = { 720.5742f, -888.9393f, 23.2796f };
					Local_124.f_103[4 /*5*/].f_3 = 301.5278f;
					Local_124.f_103[5 /*5*/] = { 763.72f, -888.6782f, 24.0956f };
					Local_124.f_103[5 /*5*/].f_3 = 196.7567f;
					Local_124.f_103[6 /*5*/] = { 763.0903f, -884.3161f, 23.9395f };
					Local_124.f_103[6 /*5*/].f_3 = 321.9963f;
					Local_124.f_103[7 /*5*/] = { 743.7985f, -872.6409f, 24.0443f };
					Local_124.f_103[7 /*5*/].f_3 = 251.8575f;
					Local_124.f_103[8 /*5*/] = { 741.907f, -881.8726f, 24.0428f };
					Local_124.f_103[8 /*5*/].f_3 = 268.2814f;
					Local_124.f_103[9 /*5*/] = { 752.8027f, -884.268f, 24.1054f };
					Local_124.f_103[9 /*5*/].f_3 = 282.8442f;
					Local_124.f_179[0 /*5*/] = { 763.8987f, -886.4079f, 24.0887f };
					Local_124.f_179[0 /*5*/].f_3 = 85.7335f;
					Local_124.f_179[1 /*5*/] = { 744.0313f, -877.4133f, 24.0497f };
					Local_124.f_179[1 /*5*/].f_3 = 152.0251f;
					Local_124.f_179[2 /*5*/] = { 763.1165f, -916.4111f, 24.3315f };
					Local_124.f_179[2 /*5*/].f_3 = 133.3755f;
					break;
				
				case 17:
					Local_124.f_103[0 /*5*/] = { 1003.053f, -2149.714f, 37.3448f };
					Local_124.f_103[0 /*5*/].f_3 = 182.3138f;
					Local_124.f_103[1 /*5*/] = { 1010.169f, -2135.276f, 29.5516f };
					Local_124.f_103[1 /*5*/].f_3 = 349.7712f;
					Local_124.f_103[2 /*5*/] = { 1011.614f, -2142.546f, 29.5516f };
					Local_124.f_103[2 /*5*/].f_3 = 2.675f;
					Local_124.f_103[3 /*5*/] = { 1018.429f, -2145.479f, 29.5994f };
					Local_124.f_103[3 /*5*/].f_3 = 263.1569f;
					Local_124.f_103[4 /*5*/] = { 1020.569f, -2148.083f, 30.5334f };
					Local_124.f_103[4 /*5*/].f_3 = 259.3002f;
					Local_124.f_103[5 /*5*/] = { 1011.448f, -2146.674f, 29.5516f };
					Local_124.f_103[5 /*5*/].f_3 = 139.4625f;
					Local_124.f_103[6 /*5*/] = { 1013.688f, -2150.349f, 30.5334f };
					Local_124.f_103[6 /*5*/].f_3 = 91.3056f;
					Local_124.f_103[7 /*5*/] = { 1011.563f, -2153.055f, 29.5516f };
					Local_124.f_103[7 /*5*/].f_3 = 44.0468f;
					Local_124.f_103[8 /*5*/] = { 1008.21f, -2156.475f, 29.5516f };
					Local_124.f_103[8 /*5*/].f_3 = 347.5848f;
					Local_124.f_103[9 /*5*/] = { 1007.324f, -2161.736f, 29.5516f };
					Local_124.f_103[9 /*5*/].f_3 = 172.5634f;
					Local_124.f_179[0 /*5*/] = { 1007.872f, -2138.394f, 29.5516f };
					Local_124.f_179[0 /*5*/].f_3 = 139.8753f;
					Local_124.f_179[1 /*5*/] = { 1013.982f, -2145.138f, 29.5516f };
					Local_124.f_179[1 /*5*/].f_3 = 259.47f;
					Local_124.f_179[2 /*5*/] = { 1008.767f, -2160.593f, 29.5516f };
					Local_124.f_179[2 /*5*/].f_3 = 200.1719f;
					break;
				
				case 18:
					Local_124.f_103[0 /*5*/] = { 1016.825f, -2498.752f, 27.3493f };
					Local_124.f_103[0 /*5*/].f_3 = 61.8849f;
					Local_124.f_103[1 /*5*/] = { 996.0087f, -2540.799f, 27.3073f };
					Local_124.f_103[1 /*5*/].f_3 = 3.7927f;
					Local_124.f_103[2 /*5*/] = { 1017.77f, -2493.367f, 27.3879f };
					Local_124.f_103[2 /*5*/].f_3 = 88.4198f;
					Local_124.f_103[3 /*5*/] = { 1012.715f, -2506.288f, 27.302f };
					Local_124.f_103[3 /*5*/].f_3 = 27.7498f;
					Local_124.f_103[4 /*5*/] = { 996.7639f, -2512.485f, 27.302f };
					Local_124.f_103[4 /*5*/].f_3 = 40.6136f;
					Local_124.f_103[5 /*5*/] = { 1015.915f, -2514.646f, 27.3035f };
					Local_124.f_103[5 /*5*/].f_3 = 56.6315f;
					Local_124.f_103[6 /*5*/] = { 1011.236f, -2524.491f, 27.3083f };
					Local_124.f_103[6 /*5*/].f_3 = 15.7729f;
					Local_124.f_103[7 /*5*/] = { 1006.954f, -2527.826f, 27.3043f };
					Local_124.f_103[7 /*5*/].f_3 = 101.1154f;
					Local_124.f_103[8 /*5*/] = { 999.3998f, -2523.023f, 27.302f };
					Local_124.f_103[8 /*5*/].f_3 = 354.1063f;
					Local_124.f_103[9 /*5*/] = { 994.9509f, -2527.176f, 27.302f };
					Local_124.f_103[9 /*5*/].f_3 = 125.381f;
					Local_124.f_179[0 /*5*/] = { 1012.638f, -2502.169f, 27.302f };
					Local_124.f_179[0 /*5*/].f_3 = 316.6046f;
					Local_124.f_179[1 /*5*/] = { 1013.986f, -2523.53f, 27.3055f };
					Local_124.f_179[1 /*5*/].f_3 = 240.5153f;
					Local_124.f_179[2 /*5*/] = { 996.9083f, -2523.664f, 27.302f };
					Local_124.f_179[2 /*5*/].f_3 = 164.8845f;
					break;
				
				case 19:
					Local_124.f_103[0 /*5*/] = { -266.5881f, 190.2768f, 84.3252f };
					Local_124.f_103[0 /*5*/].f_3 = 121.811f;
					Local_124.f_103[1 /*5*/] = { -271.8751f, 195.5884f, 84.6149f };
					Local_124.f_103[1 /*5*/].f_3 = 274.2204f;
					Local_124.f_103[2 /*5*/] = { -265.1418f, 201.9027f, 84.4806f };
					Local_124.f_103[2 /*5*/].f_3 = 181.8879f;
					Local_124.f_103[3 /*5*/] = { -261.9281f, 201.8817f, 84.2857f };
					Local_124.f_103[3 /*5*/].f_3 = 253.3033f;
					Local_124.f_103[4 /*5*/] = { -260.6143f, 186.3196f, 84.0337f };
					Local_124.f_103[4 /*5*/].f_3 = 4.0892f;
					Local_124.f_103[5 /*5*/] = { -255.9788f, 194.8307f, 83.7181f };
					Local_124.f_103[5 /*5*/].f_3 = 103.808f;
					Local_124.f_103[6 /*5*/] = { -252.9307f, 192.114f, 82.7736f };
					Local_124.f_103[6 /*5*/].f_3 = 262.768f;
					Local_124.f_103[7 /*5*/] = { -242.0461f, 190.5416f, 79.3582f };
					Local_124.f_103[7 /*5*/].f_3 = 200.5955f;
					Local_124.f_103[8 /*5*/] = { -241.619f, 202.893f, 82.2432f };
					Local_124.f_103[8 /*5*/].f_3 = 209.8882f;
					Local_124.f_103[9 /*5*/] = { -235.1685f, 202.9628f, 82.1429f };
					Local_124.f_103[9 /*5*/].f_3 = 338.4766f;
					Local_124.f_179[0 /*5*/] = { -237.4442f, 203.1399f, 82.1887f };
					Local_124.f_179[0 /*5*/].f_3 = 159.4961f;
					Local_124.f_179[1 /*5*/] = { -251.6716f, 193.9603f, 82.6293f };
					Local_124.f_179[1 /*5*/].f_3 = 87.8942f;
					Local_124.f_179[2 /*5*/] = { -266.8874f, 193.015f, 84.3937f };
					Local_124.f_179[2 /*5*/].f_3 = 65.6299f;
					break;
				
				case 20:
					Local_124.f_103[0 /*5*/] = { 534.4465f, -1941.385f, 30.2292f };
					Local_124.f_103[0 /*5*/].f_3 = 311.177f;
					Local_124.f_103[1 /*5*/] = { 558.1476f, -1927.909f, 23.7833f };
					Local_124.f_103[1 /*5*/].f_3 = 342.9807f;
					Local_124.f_103[2 /*5*/] = { 546.3505f, -1928.6f, 23.8219f };
					Local_124.f_103[2 /*5*/].f_3 = 311.7955f;
					Local_124.f_103[3 /*5*/] = { 547.1193f, -1947.377f, 23.9851f };
					Local_124.f_103[3 /*5*/].f_3 = 250.7509f;
					Local_124.f_103[4 /*5*/] = { 572.5258f, -1930.575f, 23.7494f };
					Local_124.f_103[4 /*5*/].f_3 = 346.9088f;
					Local_124.f_103[5 /*5*/] = { 539.3912f, -1923.777f, 23.9851f };
					Local_124.f_103[5 /*5*/].f_3 = 316.7842f;
					Local_124.f_103[6 /*5*/] = { 563.26f, -1920.301f, 23.7598f };
					Local_124.f_103[6 /*5*/].f_3 = 325.4008f;
					Local_124.f_103[7 /*5*/] = { 533.5303f, -1938.4f, 23.9851f };
					Local_124.f_103[7 /*5*/].f_3 = 309.4188f;
					Local_124.f_179[0 /*5*/] = { 548.8199f, -1930.106f, 23.8175f };
					Local_124.f_179[0 /*5*/].f_3 = 159.5928f;
					Local_124.f_179[1 /*5*/] = { 551.0328f, -1946.83f, 23.9851f };
					Local_124.f_179[1 /*5*/].f_3 = 84.4521f;
					Local_124.f_179[2 /*5*/] = { 561.5193f, -1927.552f, 23.7627f };
					Local_124.f_179[2 /*5*/].f_3 = 80.685f;
					break;
				
				case 21:
					Local_124.f_103[0 /*5*/] = { 110.1075f, -2228.434f, 5.1712f };
					Local_124.f_103[0 /*5*/].f_3 = 265.3441f;
					Local_124.f_103[1 /*5*/] = { 109.2036f, -2234.949f, 5.0633f };
					Local_124.f_103[1 /*5*/].f_3 = 271.2665f;
					Local_124.f_103[2 /*5*/] = { 92.4692f, -2228.285f, 5.0333f };
					Local_124.f_103[2 /*5*/].f_3 = 246.2804f;
					Local_124.f_103[3 /*5*/] = { 89.8902f, -2221.848f, 5.0483f };
					Local_124.f_103[3 /*5*/].f_3 = 77.5276f;
					Local_124.f_103[4 /*5*/] = { 119.3045f, -2188.549f, 4.9608f };
					Local_124.f_103[4 /*5*/].f_3 = 260.6882f;
					Local_124.f_103[5 /*5*/] = { 135.5824f, -2185.041f, 5.0909f };
					Local_124.f_103[5 /*5*/].f_3 = 248.253f;
					Local_124.f_103[6 /*5*/] = { 102.5402f, -2183.203f, 4.953f };
					Local_124.f_103[6 /*5*/].f_3 = 254.5778f;
					Local_124.f_103[7 /*5*/] = { 93.2016f, -2199.761f, 5.0431f };
					Local_124.f_103[7 /*5*/].f_3 = 178.9871f;
					Local_124.f_103[8 /*5*/] = { 95.4634f, -2193.558f, 5.0313f };
					Local_124.f_103[8 /*5*/].f_3 = 283.6666f;
					Local_124.f_103[9 /*5*/] = { 99.6321f, -2203.004f, 5.181f };
					Local_124.f_103[9 /*5*/].f_3 = 312.4828f;
					Local_124.f_179[0 /*5*/] = { 95.909f, -2196.279f, 5.0431f };
					Local_124.f_179[0 /*5*/].f_3 = 139.258f;
					Local_124.f_179[1 /*5*/] = { 120.4857f, -2191.816f, 5.0209f };
					Local_124.f_179[1 /*5*/].f_3 = 159.3418f;
					Local_124.f_179[2 /*5*/] = { 109.2645f, -2231.557f, 5.0333f };
					Local_124.f_179[2 /*5*/].f_3 = 62.2714f;
					break;
				
				default:
					Local_124.f_103[0 /*5*/] = { 968.5941f, -1557.899f, 29.6842f };
					Local_124.f_103[0 /*5*/].f_3 = 114.28f;
					Local_124.f_103[1 /*5*/] = { 965.9659f, -1571.214f, 29.5878f };
					Local_124.f_103[1 /*5*/].f_3 = 62.3577f;
					Local_124.f_103[2 /*5*/] = { 951.7892f, -1575.491f, 29.434f };
					Local_124.f_103[2 /*5*/].f_3 = 41.1548f;
					Local_124.f_103[3 /*5*/] = { 939.3943f, -1575.787f, 29.345f };
					Local_124.f_103[3 /*5*/].f_3 = 85.4368f;
					Local_124.f_103[4 /*5*/] = { 928.4522f, -1577.374f, 29.4239f };
					Local_124.f_103[4 /*5*/].f_3 = 336.8404f;
					Local_124.f_103[5 /*5*/] = { 921.6147f, -1573.96f, 29.6373f };
					Local_124.f_103[5 /*5*/].f_3 = 337.606f;
					Local_124.f_103[6 /*5*/] = { 920.303f, -1564.142f, 29.7523f };
					Local_124.f_103[6 /*5*/].f_3 = 52.3963f;
					Local_124.f_103[7 /*5*/] = { 918.5511f, -1552.143f, 29.7808f };
					Local_124.f_103[7 /*5*/].f_3 = 244.4705f;
					Local_124.f_103[8 /*5*/] = { 922.5096f, -1543.686f, 29.8074f };
					Local_124.f_103[8 /*5*/].f_3 = 8.0474f;
					Local_124.f_103[9 /*5*/] = { 910.6829f, -1547.757f, 29.6528f };
					Local_124.f_103[9 /*5*/].f_3 = 217.9933f;
					Local_124.f_103[10 /*5*/] = { 910.2541f, -1557.902f, 29.7034f };
					Local_124.f_103[10 /*5*/].f_3 = 237.5501f;
					Local_124.f_103[11 /*5*/] = { 909.9764f, -1572.07f, 29.791f };
					Local_124.f_103[11 /*5*/].f_3 = 287.341f;
					Local_124.f_179[0 /*5*/] = { 912.0468f, -1562.435f, 29.7522f };
					Local_124.f_179[0 /*5*/].f_3 = 305.0547f;
					Local_124.f_179[1 /*5*/] = { 903.5677f, -1559.325f, 29.6796f };
					Local_124.f_179[1 /*5*/].f_3 = 301.2764f;
					Local_124.f_179[2 /*5*/] = { 970.6998f, -1558.555f, 29.6813f };
					Local_124.f_179[2 /*5*/].f_3 = 43.0116f;
					break;
			}
			break;
	}
}

var func_210()
{
	if (Local_124.f_195 != -1)
	{
		return Local_124.f_195;
	}
	Local_124.f_195 = unk_0xB36B8558948EA7A8(0, 3);
	return Local_124.f_195;
}

int func_211(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_212(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x443E2CA72E118E64())
		{
			func_10(uParam0, 0, 0);
		}
	}
}

void func_213()
{
	char* sVar0;
	
	func_218();
	if (unk_0x234B68AC2E35ED5A(iLocal_127, 9))
	{
		return;
	}
	if (func_1220())
	{
		if (!unk_0x234B68AC2E35ED5A(iLocal_127, 0))
		{
			unk_0x8FF71A24509DA743("DisableFlightMusic", 1);
			unk_0x8FF71A24509DA743("WantedMusicDisabled", 1);
			unk_0x191DDA30577F440A(&iLocal_127, 0);
		}
		if (!unk_0x234B68AC2E35ED5A(iLocal_127, 1))
		{
			if (!func_440())
			{
				sVar0 = "EXEC1_UNDER_ATTACK_START";
			}
			else
			{
				sVar0 = "EXEC1_DEFEND_FLEEING_START";
			}
			if (unk_0xFB8A6909539A30B1(sVar0))
			{
				unk_0x191DDA30577F440A(&iLocal_127, 1);
			}
		}
		if (!func_440())
		{
			if (!unk_0x234B68AC2E35ED5A(iLocal_127, 3))
			{
				if (unk_0x234B68AC2E35ED5A(Local_124.f_1, 13))
				{
					if (unk_0xFB8A6909539A30B1("EXEC1_UNDER_ATTACK_ARRIVE_SMA"))
					{
						unk_0x191DDA30577F440A(&iLocal_127, 3);
					}
				}
			}
		}
		if (!func_440())
		{
			if (unk_0x234B68AC2E35ED5A(Local_124.f_1, 1))
			{
				if (!unk_0x234B68AC2E35ED5A(iLocal_127, 4))
				{
					if (unk_0xFB8A6909539A30B1("EXEC1_UNDER_ATTACK_STOP"))
					{
						unk_0x191DDA30577F440A(&iLocal_127, 4);
					}
				}
			}
		}
		if (!unk_0x234B68AC2E35ED5A(iLocal_127, 6))
		{
			if ((((unk_0x234B68AC2E35ED5A(Local_124.f_1, 3) || unk_0x234B68AC2E35ED5A(Local_124.f_1, 15)) || unk_0x234B68AC2E35ED5A(Local_124.f_1, 5)) || unk_0x234B68AC2E35ED5A(Local_124.f_1, 9)) || unk_0x234B68AC2E35ED5A(Local_124.f_1, 8))
			{
				if (unk_0xFB8A6909539A30B1("EXEC1_UNDER_ATTACK_FAIL"))
				{
					unk_0x191DDA30577F440A(&iLocal_127, 6);
				}
			}
		}
		if (func_440())
		{
			if (!unk_0x234B68AC2E35ED5A(iLocal_127, 16))
			{
				if (Local_124.f_215 == -1)
				{
					if (func_214("DCONTRA_OBJ4"))
					{
						if (unk_0xFB8A6909539A30B1("EXEC1_DEFEND_FLEEING_RETRIEVE_SMA"))
						{
							unk_0x191DDA30577F440A(&iLocal_127, 16);
						}
					}
				}
			}
			if (!unk_0x234B68AC2E35ED5A(iLocal_127, 17))
			{
				if (Local_124.f_215 != -1)
				{
					if (unk_0xFB8A6909539A30B1("EXEC1_DEFEND_FLEEING_RETURN_SMA"))
					{
						unk_0x191DDA30577F440A(&iLocal_127, 17);
					}
				}
			}
			if (!unk_0x234B68AC2E35ED5A(iLocal_127, 18))
			{
				if (unk_0x234B68AC2E35ED5A(Local_124.f_1, 4))
				{
					if (unk_0xFB8A6909539A30B1("EXEC1_DEFEND_FLEEING_STOP"))
					{
						unk_0x191DDA30577F440A(&iLocal_127, 18);
					}
				}
			}
		}
	}
}

int func_214(char* sParam0)
{
	if (unk_0xAB6A270F84A8781E(sParam0))
	{
		return 0;
	}
	if (!func_217())
	{
		return 0;
	}
	if (Global_1312603 == 11)
	{
		if (unk_0xCF7E9D7EE2349689(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (unk_0xCF7E9D7EE2349689(sParam0) > 23)
	{
		return 0;
	}
	return func_215(sParam0);
}

bool func_215(char* sParam0)
{
	if (!func_217())
	{
		return 0;
	}
	if (Global_1312603 == 11)
	{
		return func_216(sParam0);
	}
	if (unk_0xAB6A270F84A8781E(sParam0))
	{
		return 0;
	}
	return unk_0x15173FB88ABC94F9(sParam0) == unk_0x15173FB88ABC94F9(&(Global_1312603.f_12));
}

bool func_216(char* sParam0)
{
	if (!func_217())
	{
		return 0;
	}
	if (unk_0xAB6A270F84A8781E(sParam0))
	{
		return 0;
	}
	return unk_0x15173FB88ABC94F9(sParam0) == unk_0x15173FB88ABC94F9(&(Global_1312603.f_16));
}

int func_217()
{
	if (Global_1312603 == 20)
	{
		return 0;
	}
	return 1;
}

void func_218()
{
	if (unk_0x234B68AC2E35ED5A(iLocal_127, 8))
	{
		if (unk_0x234B68AC2E35ED5A(iLocal_127, 9))
		{
			if (!unk_0x234B68AC2E35ED5A(iLocal_127, 10))
			{
				if (unk_0x234B68AC2E35ED5A(iLocal_127, 11))
				{
					if (!unk_0x234B68AC2E35ED5A(iLocal_127, 12))
					{
						unk_0x4F62815699141072(1);
						unk_0x8FF71A24509DA743("AllowScoreAndRadio", 0);
					}
				}
				if (!unk_0x234B68AC2E35ED5A(iLocal_127, 15))
				{
					if (unk_0xFB8A6909539A30B1("APT_COUNTDOWN_30S_KILL"))
					{
						unk_0x191DDA30577F440A(&iLocal_127, 15);
					}
				}
				if (unk_0x234B68AC2E35ED5A(iLocal_127, 15))
				{
					if (!unk_0x234B68AC2E35ED5A(iLocal_127, 13))
					{
						if (unk_0xFB8A6909539A30B1("APT_FADE_IN_RADIO"))
						{
							unk_0x191DDA30577F440A(&iLocal_127, 13);
						}
					}
					if (unk_0x234B68AC2E35ED5A(iLocal_127, 13))
					{
						unk_0x191DDA30577F440A(&iLocal_127, 10);
					}
				}
			}
		}
	}
}

void func_219()
{
	struct<3> Var0;
	float fVar1;
	
	if (!func_1220() && !func_438())
	{
		return;
	}
	if (unk_0x234B68AC2E35ED5A(iLocal_126, 15))
	{
		if (!unk_0x234B68AC2E35ED5A(iLocal_126, 16))
		{
			if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0x8E9D6E2DA3B756D5() == 0)
				{
					unk_0x20D884FB6567BAD5(5);
					unk_0xD63E470D46B4F8A5(unk_0x1146A9AE09CE2B14(), 2, 0);
					unk_0x87524F5C1E0857AB(unk_0x1146A9AE09CE2B14(), 0);
					unk_0x191DDA30577F440A(&iLocal_126, 16);
				}
			}
		}
		return;
	}
	if (func_440())
	{
		if (unk_0x159BC3DDA80D71AC(Local_124.f_2[0 /*10*/].f_2))
		{
			Var0 = { unk_0xD6E677FAD7521410(unk_0x854C404AEB476240(Local_124.f_2[0 /*10*/].f_2), 0) };
		}
	}
	else
	{
		Var0 = { func_40() };
	}
	fVar1 = vdist2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0), Var0);
	if (!unk_0x234B68AC2E35ED5A(iLocal_126, 17))
	{
		if (fVar1 < 250000f)
		{
			unk_0x20D884FB6567BAD5(0);
			unk_0x191DDA30577F440A(&iLocal_126, 17);
		}
	}
	else if (fVar1 > 360000f)
	{
		unk_0x20D884FB6567BAD5(5);
		unk_0xC664C0067EEAB8D1(&iLocal_126, 17);
	}
}

void func_220()
{
	struct<3> Var0;
	
	if (!func_1220() && !func_438())
	{
		return;
	}
	if (func_440())
	{
		if (unk_0x159BC3DDA80D71AC(Local_124.f_2[0 /*10*/].f_2))
		{
			Var0 = { unk_0xD6E677FAD7521410(unk_0x854C404AEB476240(Local_124.f_2[0 /*10*/].f_2), 0) };
		}
	}
	else
	{
		Var0 = { func_40() };
	}
	if (!func_61(Var0, 0f, 0f, 0f, 0))
	{
		func_221(169, Var0, &uLocal_151, 1140457472, 1144750080, 0);
	}
}

void func_221(int iParam0, struct<3> Param1, var uParam2, float fParam3, float fParam4, int iParam5)
{
	float fVar0;
	float fVar1;
	
	if ((((func_277(unk_0x1146A9AE09CE2B14()) && !func_276(unk_0x1146A9AE09CE2B14())) && !unk_0x234B68AC2E35ED5A(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_1, 8)) && (func_275(unk_0x1146A9AE09CE2B14()) || func_274(unk_0x1146A9AE09CE2B14()))) || func_39(Param1))
	{
		return;
	}
	Global_1681713 = { Param1 };
	fVar0 = vdist(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0), Param1);
	func_272(iParam0, fVar0);
	if (unk_0xA300BD5F71A8C704() && unk_0xC62ED852B1172A41() == 15)
	{
		if (func_271(unk_0x1146A9AE09CE2B14()) || func_269(unk_0x1146A9AE09CE2B14()))
		{
			if (!unk_0xE7C97806E87E54EE(1344549371))
			{
				unk_0x8C07DE9C165DA375(1344549371);
			}
		}
		else if (unk_0xE7C97806E87E54EE(1344549371))
		{
			unk_0xDB94CFF813F20EA8(1344549371);
		}
	}
	if (fVar0 < fParam3)
	{
		if (!(func_268(unk_0x1146A9AE09CE2B14(), 21) || func_268(unk_0x1146A9AE09CE2B14(), 25)))
		{
			func_267(Param1, 1, 0);
		}
		if (!*uParam2 && func_1340(unk_0x1146A9AE09CE2B14(), 1, 1))
		{
			*uParam2 = 1;
			if (func_266(iParam0))
			{
				unk_0x5E84945E26CAEF1F(func_265(iParam0));
				if (func_264(iParam0, -1))
				{
					unk_0x20D884FB6567BAD5(0);
					if (unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) > 0)
					{
						unk_0xD63E470D46B4F8A5(unk_0x1146A9AE09CE2B14(), 0, 1);
						unk_0x87524F5C1E0857AB(unk_0x1146A9AE09CE2B14(), 1);
					}
					unk_0x191DDA30577F440A(&(Global_1681713.f_3), 0);
				}
			}
			if (func_263(iParam0))
			{
				fVar1 = func_261(iParam0);
				if (fVar1 != 1f)
				{
					func_258(fVar1);
					unk_0x191DDA30577F440A(&(Global_1681713.f_3), 1);
				}
			}
			if (!Global_2391045)
			{
				if (func_257(iParam0) && func_271(unk_0x1146A9AE09CE2B14()))
				{
					func_255(1);
					func_254(2);
				}
			}
			func_253(19);
		}
	}
	else
	{
		if (fVar0 > fParam4)
		{
			if (func_252(unk_0x1146A9AE09CE2B14(), 19))
			{
				func_251(19);
			}
		}
		if (*uParam2 && func_1340(unk_0x1146A9AE09CE2B14(), 1, 1))
		{
			*uParam2 = 0;
			if (func_266(iParam0))
			{
				if (unk_0x234B68AC2E35ED5A(Global_1681713.f_3, 0))
				{
					unk_0x5E84945E26CAEF1F(1f);
					unk_0x20D884FB6567BAD5(5);
					unk_0xC664C0067EEAB8D1(&(Global_1681713.f_3), 0);
				}
			}
			if (func_263(iParam0))
			{
				func_250();
				unk_0xC664C0067EEAB8D1(&(Global_1681713.f_3), 1);
			}
			if (iParam5 && !func_277(unk_0x1146A9AE09CE2B14()))
			{
				if (func_248(unk_0x1146A9AE09CE2B14()) != 152)
				{
					func_224();
				}
			}
			if (func_223(2))
			{
				func_255(0);
				func_222(2);
			}
		}
	}
}

void func_222(int iParam0)
{
	unk_0xC664C0067EEAB8D1(&(Global_2544210.f_5191.f_46), iParam0);
}

bool func_223(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_2544210.f_5191.f_46, iParam0);
}

void func_224()
{
	unk_0x26E4F443B23A3AEB(&(Global_2405077.f_24), &Global_2409343, 2);
	unk_0x26E4F443B23A3AEB(&(Global_2405077.f_26), &Global_2409345, 19);
	func_246();
	func_227(1, 1, 0);
	func_225();
}

void func_225()
{
	func_226(0, 0);
}

void func_226(int iParam0, int iParam1)
{
	Global_2405077.f_22 = iParam0;
	Global_2405077.f_23 = iParam1;
}

void func_227(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		unk_0x26E4F443B23A3AEB(&(Global_2405077.f_45), &Global_2409364, 322);
	}
	else
	{
		Global_2405077.f_45 = { Global_2409364 };
		Global_2405077.f_45.f_49 = { Global_2409364.f_49 };
		Global_2405077.f_45.f_52 = Global_2409364.f_52;
		Global_2405077.f_45.f_53 = Global_2409364.f_53;
	}
	if (bParam0)
	{
		func_245();
	}
	if (!bParam2)
	{
		func_230(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_229(0);
	func_228();
}

void func_228()
{
	struct<6> Var0;
	
	if (Global_2405077.f_489.f_1 == unk_0x62D18D65FE22FF39())
	{
		Global_2405077.f_489 = { Var0 };
	}
}

void func_229(bool bParam0)
{
	if (bParam0)
	{
		Global_2405077.f_712 = 0;
	}
	else
	{
		Global_2405077.f_712 = 1;
	}
}

void func_230(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_244())
		{
			func_243();
		}
		Global_2405077.f_713.f_518 = unk_0x62D18D65FE22FF39();
		Global_2405077.f_713.f_504 = iParam1;
		Global_2405077.f_713.f_505 = iParam2;
		Global_2405077.f_713.f_506 = iParam10;
		func_241();
		func_234(8, 0, 0, 0, 0);
		Global_2405077.f_713.f_507 = iParam11;
		Global_2405077.f_713.f_512 = iParam3;
		Global_2405077.f_713.f_513 = iParam4;
		Global_2405077.f_713.f_510 = iParam5;
		Global_2405077.f_713.f_511 = iParam6;
		Global_2405077.f_713.f_514 = iParam7;
		Global_2405077.f_713.f_515 = iParam8;
		Global_2405077.f_713.f_516 = iParam9;
		Global_2405077.f_713.f_517 = iParam14;
		Global_2405077.f_713.f_508 = iParam12;
		Global_2405077.f_713.f_509 = iParam13;
		Global_2405077.f_1752 = 1;
	}
	else
	{
		func_231();
	}
}

void func_231()
{
	if (func_244() && !func_233())
	{
		func_243();
	}
	if (func_233())
	{
		func_232();
	}
	else
	{
		func_241();
		func_234(0, 0, 0, 0, 0);
		Global_2405077.f_1752 = 0;
		Global_2405077.f_1751 = 0;
	}
}

void func_232()
{
	unk_0x26E4F443B23A3AEB(&(Global_2405077.f_713), &(Global_2405077.f_1232), 519);
	Global_2405077.f_489 = { Global_2405077.f_495 };
	if (unk_0x62D18D65FE22FF39() == Global_2405077.f_713.f_518)
	{
		Global_2405077.f_1751 = 0;
	}
}

int func_233()
{
	if ((Global_2405077.f_1751 && !unk_0x62D18D65FE22FF39() == Global_2405077.f_1232.f_518) && unk_0x4BE697D014536271(Global_2405077.f_1232.f_518))
	{
		return 1;
	}
	return 0;
}

void func_234(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2441237.f_2012.f_703.f_16 != func_57())
	{
		if (unk_0x234B68AC2E35ED5A(Global_2426865[Global_2441237.f_2012.f_703.f_16 /*449*/].f_417, 0) && func_235())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2412723 = 0;
	}
	Global_2405077.f_489 = iParam0;
	Global_2405077.f_489.f_1 = unk_0x62D18D65FE22FF39();
	Global_2405077.f_489.f_2 = iParam1;
	Global_2405077.f_489.f_3 = iParam2;
	Global_2405077.f_489.f_4 = iParam3;
	Global_2405077.f_489.f_5 = iParam4;
}

int func_235()
{
	if ((((((func_248(unk_0x1146A9AE09CE2B14()) == 229 || func_248(unk_0x1146A9AE09CE2B14()) == 191) || func_240()) || func_239()) || func_238(unk_0x1146A9AE09CE2B14())) || Global_2518927.f_227 == 1) || (Global_2405077.f_1752 && func_236(unk_0x1146A9AE09CE2B14())))
	{
		return 0;
	}
	return 1;
}

int func_236(int iParam0)
{
	if (func_275(iParam0))
	{
		return 1;
	}
	if (func_237(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_237(int iParam0)
{
	return func_252(iParam0, 20);
}

int func_238(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (!unk_0x02BFF15CAA701972())
	{
		return 0;
	}
	if (iParam0 == unk_0x1146A9AE09CE2B14())
	{
		return Global_2518926;
	}
	else
	{
		uVar0 = unk_0xD56332194D622ECE(iParam0);
		if (unk_0x419E13582192CFEA(uVar0))
		{
			iVar1 = unk_0x6471F4759775FCA4(iVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

var func_239()
{
	return Global_1574420;
}

int func_240()
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

void func_241()
{
	if (func_244() && !func_233())
	{
		func_243();
	}
	func_242();
	Global_2405077.f_713 = 0;
}

void func_242()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2405077.f_713.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_243()
{
	if (func_233())
	{
		if (Global_2405077.f_713.f_518 == Global_2405077.f_1232.f_518)
		{
			return;
		}
	}
	if (!unk_0x62D18D65FE22FF39() == Global_2405077.f_713.f_518)
	{
		unk_0x26E4F443B23A3AEB(&(Global_2405077.f_1232), &(Global_2405077.f_713), 519);
		Global_2405077.f_495 = { Global_2405077.f_489 };
		Global_2405077.f_1751 = 1;
	}
}

int func_244()
{
	if ((Global_2405077.f_1752 && !unk_0x62D18D65FE22FF39() == Global_2405077.f_713.f_518) && unk_0x4BE697D014536271(Global_2405077.f_713.f_518))
	{
		return 1;
	}
	return 0;
}

void func_245()
{
	unk_0x26E4F443B23A3AEB(&(Global_2405077.f_367), &Global_2409686, 121);
}

void func_246()
{
	func_247();
}

void func_247()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2405077.f_2262[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2405077.f_2261 = 0;
}

int func_248(int iParam0)
{
	if (func_249(iParam0, 0))
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_33;
	}
	return -1;
}

int func_249(int iParam0, int iParam1)
{
	if (Global_1630816[iParam0 /*597*/].f_11.f_33 != -1 || (iParam1 && Global_1630816[iParam0 /*597*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_250()
{
	if (unk_0x4BE697D014536271(Global_2544210.f_5187))
	{
		if (!Global_2544210.f_5187 == unk_0x62D18D65FE22FF39() && Global_2544210.f_5186 < 1f)
		{
			return;
		}
	}
	Global_2544210.f_5187 = -1;
	Global_2544210.f_5186 = 1f;
}

void func_251(int iParam0)
{
	unk_0xC664C0067EEAB8D1(&(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_4), iParam0);
}

bool func_252(int iParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_11.f_4, iParam1);
}

void func_253(int iParam0)
{
	unk_0x191DDA30577F440A(&(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_4), iParam0);
}

void func_254(int iParam0)
{
	unk_0x191DDA30577F440A(&(Global_2544210.f_5191.f_46), iParam0);
}

void func_255(int iParam0)
{
	if (func_256() && iParam0)
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

int func_256()
{
	if ((((Global_968397 != -1 && Global_968397 != 33) && Global_968397 != 35) && Global_968397 != 37) && Global_968397 != 21)
	{
		return 1;
	}
	return 0;
}

int func_257(int iParam0)
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

void func_258(float fParam0)
{
	float fVar0;
	
	if (unk_0x15173FB88ABC94F9(unk_0x471C98FD94C0A5FD()) == func_259())
	{
		return;
	}
	fVar0 = (Global_2544210.f_5186 - fParam0);
	if (unk_0x4BE697D014536271(Global_2544210.f_5187))
	{
		if (!Global_2544210.f_5187 == unk_0x62D18D65FE22FF39() && unk_0x0BCA9ADE67DF9DD8(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2544210.f_5186 = fParam0;
	Global_2544210.f_5187 = unk_0x62D18D65FE22FF39();
}

int func_259()
{
	switch (func_188())
	{
		case 0:
			return func_260();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_260()
{
	switch (Global_2465851)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

float func_261(int iParam0)
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
	if (func_262(iParam0) == 0)
	{
		return 0f;
	}
	return 1f;
}

int func_262(int iParam0)
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

int func_263(int iParam0)
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

int func_264(int iParam0, int iParam1)
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

float func_265(int iParam0)
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

int func_266(int iParam0)
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

void func_267(struct<3> Param0, int iParam1, int iParam2)
{
	Global_2405077.f_45.f_49 = { Param0 };
	Global_2405077.f_45.f_52 = iParam1;
	Global_2405077.f_45.f_53 = iParam2;
}

bool func_268(int iParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_217, iParam1);
}

int func_269(int iParam0)
{
	if (func_270(iParam0))
	{
		if (func_271(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_270(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (Global_1630816[iParam0 /*597*/].f_11 != func_57())
		{
			return Global_1630816[iParam0 /*597*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_271(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_252(iParam0, 9);
	}
	return 0;
}

void func_272(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = func_273(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_1200();
	}
}

int func_273(int iParam0)
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_12700;
		
		case 142:
			return Global_262145.f_12688;
		
		case 157:
			return Global_262145.f_12655;
		
		case 159:
			return Global_262145.f_12638;
		
		case 162:
			return Global_262145.f_12749;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return -1;
}

int func_274(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x234B68AC2E35ED5A(Global_1630816[iVar0 /*597*/].f_1, 0);
	}
	return 0;
}

int func_275(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x234B68AC2E35ED5A(Global_1630816[iVar0 /*597*/].f_1, 7);
	}
	return 0;
}

bool func_276(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_1, 2);
}

int func_277(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1630816[iVar0 /*597*/] != -1;
	}
	return 0;
}

void func_278()
{
	if (!func_440())
	{
		return;
	}
	if (!unk_0x234B68AC2E35ED5A(Local_124.f_1, 4))
	{
		return;
	}
	if (!unk_0x234B68AC2E35ED5A(Local_124.f_1, 18))
	{
		return;
	}
	if (unk_0x234B68AC2E35ED5A(Local_124.f_1, 17))
	{
		if (unk_0x159BC3DDA80D71AC(Local_124.f_2[0 /*10*/].f_2) && unk_0xB364346471C3B028(Local_124.f_2[0 /*10*/].f_2))
		{
			if (func_13(Local_124.f_2[0 /*10*/].f_2))
			{
				if (!unk_0x1F9D47D45E125FA6(unk_0x854C404AEB476240(Local_124.f_2[0 /*10*/].f_2)))
				{
					func_282(&(Local_124.f_2[0 /*10*/].f_2));
				}
			}
		}
		return;
	}
	if (unk_0x234B68AC2E35ED5A(Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_1, 15))
	{
		return;
	}
	if (unk_0x159BC3DDA80D71AC(Local_124.f_2[0 /*10*/].f_2))
	{
		if (func_13(Local_124.f_2[0 /*10*/].f_2))
		{
			if (func_279(Local_124.f_2[0 /*10*/].f_2))
			{
				if (unk_0xB364346471C3B028(Local_124.f_2[0 /*10*/].f_2))
				{
					unk_0x407B7FBB86B988B9(unk_0x854C404AEB476240(Local_124.f_2[0 /*10*/].f_2), 1, 1);
					unk_0x191DDA30577F440A(&(Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_1), 15);
				}
			}
		}
	}
}

int func_279(var uParam0)
{
	if (unk_0xE5AEA27726895658(uParam0))
	{
		return 1;
	}
	if (func_280(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_280(var uParam0)
{
	if (!unk_0x443E2CA72E118E64())
	{
		return 0;
	}
	if (!unk_0x159BC3DDA80D71AC(uParam0))
	{
		return 0;
	}
	if (func_281(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_281(var uParam0)
{
	if (unk_0xB7D6400C89373777(uParam0))
	{
		unk_0x1AA7FA4BBD799B88(uParam0);
		return unk_0xB364346471C3B028(uParam0);
	}
	return 0;
}

void func_282(var uParam0)
{
	var uVar0;
	
	if (unk_0xB7D6400C89373777(*uParam0))
	{
		if (!unk_0xB364346471C3B028(*uParam0))
		{
		}
	}
	if (unk_0x159BC3DDA80D71AC(*uParam0))
	{
		uVar0 = unk_0xD93F965CFAC1D06A(*uParam0);
		unk_0x24DBE20C830AE9AB(&uVar0);
	}
}

void func_283(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)
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
	
	if (func_428(iParam2))
	{
		return;
	}
	fVar10 = -1f;
	iVar11 = -1;
	iVar12 = -1;
	iVar14 = 0;
	iVar15 = 0;
	uParam3->f_36 = 0;
	if (func_426() || iParam2 == 28)
	{
		if (func_372(uParam1, iParam2, uParam3, Global_1574200, 0, func_424(), sParam7))
		{
			func_371(1);
			if ((!func_369() && !func_367()) || unk_0x234B68AC2E35ED5A(Global_2544210.f_4655, 1))
			{
				if (func_366())
				{
					func_361();
				}
				else
				{
					unk_0x53CE6C5893F65093(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_360(1);
						Global_1574200 = 0;
						iVar19 = -1;
						if (Global_1574421 != 1)
						{
							func_359(uParam1, 0, 0);
							if (unk_0x234B68AC2E35ED5A(uParam3->f_33, 7))
							{
								unk_0xC664C0067EEAB8D1(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 28)
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
								if (func_1340(unk_0xC502CD39B4994F3A(iVar17), 0, 1))
								{
									iVar3 = unk_0xC502CD39B4994F3A(iVar17);
									if (!func_34(iVar3, 0))
									{
										if ((func_355(iVar3) || Global_2426865[iVar3 /*449*/].f_245 != -1) || func_354(iVar3))
										{
											iVar9 = iVar3;
											if (func_270(iVar3))
											{
												iVar1[iVar9] = iVar20;
												iVar20++;
												iVar0++;
												func_351(&iVar1, iVar3, &iVar20, &iVar0);
											}
										}
									}
								}
								iVar17++;
							}
						}
						if (!func_348(unk_0x1146A9AE09CE2B14(), 0) && func_248(unk_0x1146A9AE09CE2B14()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							if (func_347())
							{
								if (func_1340(unk_0xC502CD39B4994F3A(iVar17), 0, 1))
								{
									iVar3 = unk_0xC502CD39B4994F3A(iVar17);
								}
								else
								{
									iVar3 = func_57();
								}
							}
							else
							{
								iVar3 = (uParam0[iVar17 /*42*/])->f_1;
							}
							if ((func_346(iVar3) && func_342(iVar3, iParam2)) && func_1340(iVar3, 0, 1))
							{
								iVar9 = iVar3;
								iVar7 = Global_1590908[iVar9 /*874*/].f_205.f_6;
								Var6 = { func_337(iVar3) };
								if (iVar3 == unk_0x1146A9AE09CE2B14())
								{
									uParam3->f_35 = iVar18;
								}
								StringCopy(&(uParam3->f_1), unk_0xF04DBC0AC5A2AB23(iVar3), 64);
								*(uParam4[iVar17 /*13*/]) = { func_59(iVar3) };
								iVar5 = func_331(iVar3);
								sVar4 = "";
								if (iVar5 != 0)
								{
									sVar4 = unk_0x05FCBB2D6BF4C399(iVar5);
								}
								Global_1574200++;
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
									if (!func_347())
									{
										iVar15 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_326(&iVar8, &fVar10, (uParam0[iVar17 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_325(iParam5, 1, 0, 0), 16);
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
								iVar16 = func_320(iVar3, 0);
								if (bVar2)
								{
									if (func_319(iVar3, 1) && iVar1[iVar9] != -1)
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
								if (func_318(iParam5))
								{
									func_317(iVar3, uParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar8, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
								}
								else
								{
									func_317(iVar3, uParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar11, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
								}
								unk_0x191DDA30577F440A(&iVar14, iVar3);
								iVar18++;
							}
							iVar17++;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							iVar3 = unk_0xC502CD39B4994F3A(iVar17);
							if (func_1340(iVar3, 0, 1) && !unk_0x234B68AC2E35ED5A(iVar14, iVar3))
							{
								iVar3 = unk_0xC502CD39B4994F3A(iVar17);
							}
							else
							{
								iVar3 = func_57();
							}
							if (func_346(iVar3))
							{
								if (func_1340(unk_0xC502CD39B4994F3A(iVar17), 0, 1))
								{
									iVar9 = iVar3;
									iVar7 = Global_1590908[iVar9 /*874*/].f_205.f_6;
									Var6 = { func_337(iVar3) };
									*(uParam4[iVar17 /*13*/]) = { func_59(iVar3) };
									iVar5 = func_331(iVar3);
									sVar4 = "";
									if (iVar5 != 0)
									{
										sVar4 = unk_0x05FCBB2D6BF4C399(iVar5);
									}
									Global_1574200++;
									iVar16 = func_320(iVar3, 1);
									if (bVar2)
									{
										if (func_319(iVar3, 1))
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
									func_296(iVar3, unk_0xF04DBC0AC5A2AB23(iVar3), uParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar16, iVar15);
									iVar18++;
								}
							}
							iVar17++;
						}
						if (unk_0x234B68AC2E35ED5A(uParam3->f_33, 11))
						{
							func_293(uParam3, uParam1, iParam2);
						}
						func_9(&(uParam3->f_21));
						func_292();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0x234B68AC2E35ED5A(uParam3->f_33, 7))
						{
							func_291(uParam3, uParam1);
							func_290(uParam1, 0, 1);
							unk_0x191DDA30577F440A(&(uParam3->f_33), 7);
						}
						func_291(uParam3, uParam1);
						if (!unk_0x234B68AC2E35ED5A(uParam3->f_33, 11))
						{
							unk_0x191DDA30577F440A(&(uParam3->f_33), 11);
						}
						if (func_286(uParam3))
						{
							Global_1574421 = 1;
						}
						func_284(uParam3);
						if (Global_1574421 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574421 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0xDAE4BC89A198A6AF(*uParam1))
					{
						unk_0x0F33095580A670CE(7);
						unk_0x43D93129BD1AD792(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0x0F33095580A670CE(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_292();
			func_360(0);
			if (unk_0x234B68AC2E35ED5A(uParam3->f_33, 7))
			{
				unk_0xC664C0067EEAB8D1(&(uParam3->f_33), 7);
			}
			if (unk_0x234B68AC2E35ED5A(uParam3->f_33, 10))
			{
				unk_0xC664C0067EEAB8D1(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0x17552FF90A99ABEA();
}

void func_284(var uParam0)
{
	if (!func_11(&(uParam0->f_21)))
	{
		func_10(&(uParam0->f_21), 0, 0);
	}
	else if (func_6(&(uParam0->f_21), 250, 0))
	{
		func_9(&(uParam0->f_21));
		func_285(0);
	}
}

void func_285(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574421 != 2)
		{
			Global_1574421 = 2;
		}
	}
	else
	{
		switch (Global_1574421)
		{
			case 0:
				Global_1574421 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_286(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0;
	iVar0 = uParam0->f_37;
	iVar3 = unk_0xC502CD39B4994F3A(uParam0->f_37);
	if (iVar3 != func_57() && func_1340(iVar3, 0, 1))
	{
		Var2 = { func_59(iVar3) };
		iVar1 = func_289(uParam0, uParam0->f_37);
		if (func_288(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x36E030BD64FC108B(&Var2))
					{
						if (unk_0x510494EE6BA1AFB1(&Var2))
						{
							iVar4 = 1;
							func_287(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x9FA24EA712B9DC35(&Var2))
					{
						iVar4 = 1;
						func_287(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x36E030BD64FC108B(&Var2))
					{
						if (!unk_0x510494EE6BA1AFB1(&Var2))
						{
							iVar4 = 1;
							func_287(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar4 = 1;
						func_287(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x36E030BD64FC108B(&Var2))
					{
						if (!unk_0x9FA24EA712B9DC35(&Var2))
						{
							iVar4 = 1;
							func_287(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x9FA24EA712B9DC35(&Var2))
					{
						iVar4 = 1;
						func_287(uParam0, iVar0, 0);
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

void func_287(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_288(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x3699D36B67CC8836(&uParam0, 13);
}

var func_289(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_290(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x704F8697BB515627(*uParam0, "COLLAPSE"))
	{
		unk_0x9D7453DF8B7E9E0B(iParam1);
		unk_0x392841D58D2EED1D();
	}
	if (iParam2 == 1)
	{
		if (unk_0x704F8697BB515627(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0x392841D58D2EED1D();
		}
	}
}

void func_291(var uParam0, var uParam1)
{
	if (!unk_0x234B68AC2E35ED5A(uParam0->f_33, 10))
	{
		unk_0x704F8697BB515627(*uParam1, "SET_HIGHLIGHT");
		unk_0x9E3D03981E2E9AD9(uParam0->f_35);
		unk_0x392841D58D2EED1D();
		unk_0x191DDA30577F440A(&(uParam0->f_33), 10);
	}
}

void func_292()
{
	if (Global_1574421 != 0)
	{
		Global_1574421 = 0;
	}
}

void func_293(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0xC502CD39B4994F3A(iVar0);
		if (iVar2 != func_57())
		{
			if (func_1340(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_295(uParam0->f_38[iVar0 /*2*/], 0, iParam2);
					func_294(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1590908[iVar0 /*874*/].f_205.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_294(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xDAE4BC89A198A6AF(*uParam0))
	{
		if (unk_0x704F8697BB515627(*uParam0, "SET_ICON"))
		{
			unk_0x9E3D03981E2E9AD9(iParam1);
			unk_0x9E3D03981E2E9AD9(iParam2);
			if (iParam2 == 65)
			{
				unk_0x9E3D03981E2E9AD9(iParam3);
			}
			unk_0x392841D58D2EED1D();
		}
	}
}

int func_295(int iParam0, bool bParam1, int iParam2)
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

void func_296(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_316() && iParam4 < func_315())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574202)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574421 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x704F8697BB515627(*uParam2, sVar1))
		{
			unk_0x9E3D03981E2E9AD9(iParam4);
			if (unk_0x234B68AC2E35ED5A(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_314("");
			}
			else
			{
				unk_0x9E3D03981E2E9AD9(iParam10);
			}
			func_314(sParam1);
			unk_0x9E3D03981E2E9AD9(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_314("");
			}
			else
			{
				unk_0x9E3D03981E2E9AD9(65);
			}
			unk_0x9E3D03981E2E9AD9(-1);
			func_314("");
			if (uParam3->f_108 == 6)
			{
				func_314("");
			}
			else
			{
				func_314(&sParam5);
			}
			func_301(uParam3, iParam0);
			unk_0x386C67F2B8055D74(sParam9);
			unk_0x386C67F2B8055D74(sParam9);
			if (func_300(uParam3))
			{
				func_299("DPAD_FRIEND");
			}
			else if (func_298(uParam3))
			{
				func_299("DPAD_FRIEND");
			}
			else if (func_297(uParam3))
			{
				func_299("DPAD_CREW");
			}
			else
			{
				func_299("");
			}
			unk_0x392841D58D2EED1D();
		}
	}
}

bool func_297(var uParam0)
{
	return unk_0x234B68AC2E35ED5A(uParam0->f_33, 6);
}

bool func_298(var uParam0)
{
	return unk_0x234B68AC2E35ED5A(uParam0->f_33, 5);
}

void func_299(char* sParam0)
{
	unk_0x35CA0C119E6A2A27(sParam0);
	unk_0xD4B2C39F7AD5A6A6();
}

int func_300(var uParam0)
{
	if (func_298(uParam0) && func_297(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_301(var uParam0, int iParam1)
{
	if (func_313(iParam1))
	{
		unk_0x9E3D03981E2E9AD9(121);
	}
	else if (func_305(iParam1))
	{
		unk_0x9E3D03981E2E9AD9(122);
	}
	else if (((unk_0x234B68AC2E35ED5A(Global_4456448.f_27, 15) && iParam1 > -1) && iParam1 < 32) && unk_0x234B68AC2E35ED5A(Global_2426865[iParam1 /*449*/].f_426, 0))
	{
		unk_0x9E3D03981E2E9AD9(123);
	}
	else
	{
		if (func_302())
		{
			uParam0->f_36 = 0;
		}
		unk_0x9D7453DF8B7E9E0B(uParam0->f_36);
	}
}

int func_302()
{
	if (unk_0xE45310E861787FC2())
	{
		if (func_303() || func_175())
		{
			return 1;
		}
	}
	return 0;
}

bool func_303()
{
	if (unk_0xE45310E861787FC2())
	{
		return func_175();
	}
	return func_304(Global_4456448.f_85535);
}

int func_304(int iParam0)
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

int func_305(int iParam0)
{
	if ((func_1340(iParam0, 0, 1) && func_309()) && func_306(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_306(int iParam0, bool bParam1)
{
	return func_307(iParam0, bParam1, 1);
}

int func_307(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_57())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_308(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1630816[iParam0 /*597*/].f_11;
	if (iVar0 != func_57() && Global_1630816[iVar0 /*597*/].f_11.f_425 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_308(int iParam0, int iParam1)
{
	if (iParam0 != func_57())
	{
		if (Global_1630816[iParam0 /*597*/].f_11 != func_57())
		{
			if (Global_1630816[iParam0 /*597*/].f_11 == iParam0 && Global_1630816[iParam0 /*597*/].f_11.f_425 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_309()
{
	if (func_277(unk_0x1146A9AE09CE2B14()) || func_312())
	{
		if (!func_310(unk_0x1146A9AE09CE2B14()))
		{
			return 0;
		}
	}
	return 1;
}

int func_310(int iParam0)
{
	if (func_311(iParam0) == 236 || func_311(iParam0) == 150)
	{
		return func_275(iParam0);
	}
	return 0;
}

int func_311(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1630816[iVar0 /*597*/];
	}
	return -1;
}

int func_312()
{
	switch (func_248(unk_0x1146A9AE09CE2B14()))
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

int func_313(int iParam0)
{
	if (func_302())
	{
		if (func_1340(iParam0, 0, 1))
		{
			return func_270(iParam0);
		}
	}
	if ((func_1340(iParam0, 0, 1) && func_309()) && func_308(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_314(char* sParam0)
{
	unk_0x5FEAD10623875182(sParam0);
}

int func_315()
{
	int iVar0;
	
	if (Global_1574202)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_316()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574202)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_317(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_316() && iParam3 < func_315())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574202)
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
		if (Global_1574421 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xDAE4BC89A198A6AF(*uParam1))
		{
			if (unk_0x704F8697BB515627(*uParam1, sVar1))
			{
				unk_0x9E3D03981E2E9AD9(iParam3);
				if (unk_0x234B68AC2E35ED5A(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_314("");
				}
				else
				{
					unk_0x9E3D03981E2E9AD9(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0xAB6A270F84A8781E(sParam16))
				{
					func_299(sParam16);
				}
				else
				{
					func_314(&(uParam2->f_1));
				}
				unk_0x9E3D03981E2E9AD9(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_314("");
				}
				else
				{
					unk_0x9E3D03981E2E9AD9(65);
				}
				if (iParam12 == 1)
				{
					unk_0x9E3D03981E2E9AD9(iVar0);
				}
				else
				{
					unk_0x9E3D03981E2E9AD9(-1);
				}
				if (func_347())
				{
					func_314("");
				}
				else if (uParam2->f_108 == 6 && !unk_0xAB6A270F84A8781E(sParam16))
				{
					unk_0x35CA0C119E6A2A27("FM_AE_ONE_INT");
					unk_0x1896EC0B030A48A2(sParam16);
					unk_0x38CD3C04C877C35F(iParam17);
					unk_0xD4B2C39F7AD5A6A6();
				}
				else if (uParam2->f_108 == 5 && !unk_0xAB6A270F84A8781E(sParam16))
				{
					unk_0x35CA0C119E6A2A27("FM_AE_ONE_INT");
					unk_0x1896EC0B030A48A2(sParam16);
					unk_0x38CD3C04C877C35F(iParam17);
					unk_0xD4B2C39F7AD5A6A6();
				}
				else if (uParam2->f_108 == 7 && !unk_0xAB6A270F84A8781E(sParam16))
				{
					unk_0x35CA0C119E6A2A27("FM_AE_TWO_INT");
					unk_0x1896EC0B030A48A2(sParam16);
					unk_0x38CD3C04C877C35F(iParam17);
					unk_0xD4B2C39F7AD5A6A6();
				}
				else if (uParam2->f_108 == 8 && !unk_0xAB6A270F84A8781E(&(uParam2->f_104)))
				{
					unk_0x35CA0C119E6A2A27("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x21300A5159EC89B1(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						unk_0x38CD3C04C877C35F(iParam10);
					}
					unk_0x1896EC0B030A48A2(&(uParam2->f_104));
					unk_0xD4B2C39F7AD5A6A6();
				}
				else if (uParam2->f_108 == 9)
				{
					unk_0x35CA0C119E6A2A27("FM_AE_CASH");
					unk_0xDA0C49A6D01B065C(iParam10, 1);
					unk_0xD4B2C39F7AD5A6A6();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						unk_0x35CA0C119E6A2A27("FM_AE_CASH");
						unk_0xDA0C49A6D01B065C(iParam10, 1);
						unk_0xD4B2C39F7AD5A6A6();
					}
					else
					{
						unk_0x35CA0C119E6A2A27("FM_NG_CASH");
						unk_0xDA0C49A6D01B065C(iParam10, 1);
						unk_0xD4B2C39F7AD5A6A6();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !unk_0xAB6A270F84A8781E(&(uParam2->f_104)))
					{
						func_299(&(uParam2->f_104));
					}
					else
					{
						func_314("");
					}
				}
				else if (iParam14 != -1)
				{
					unk_0x35CA0C119E6A2A27("STRING");
					unk_0x4E2EF4B6B665F3F4(iParam14, 6);
					unk_0xD4B2C39F7AD5A6A6();
				}
				else if (fParam13 != -1f)
				{
					unk_0x35CA0C119E6A2A27("NUMBER");
					unk_0x21300A5159EC89B1(fParam13, 1);
					unk_0xD4B2C39F7AD5A6A6();
				}
				else if (iParam10 != -1)
				{
					unk_0x9E3D03981E2E9AD9(iParam10);
				}
				else
				{
					func_314("");
				}
				if (uParam2->f_108 == 6)
				{
					func_314("");
				}
				else
				{
					func_314(&sParam4);
				}
				func_301(uParam2, iParam0);
				if (iParam12 == 1 || unk_0xAB6A270F84A8781E(sParam8))
				{
					func_314("");
					func_314("");
				}
				else
				{
					unk_0x386C67F2B8055D74(sParam8);
					unk_0x386C67F2B8055D74(sParam8);
				}
				if (func_300(uParam2))
				{
					func_299("DPAD_FRIEND");
				}
				else if (func_298(uParam2))
				{
					func_299("DPAD_FRIEND");
				}
				else if (func_297(uParam2))
				{
					func_299("DPAD_CREW");
				}
				else
				{
					func_299("");
				}
				unk_0x392841D58D2EED1D();
			}
		}
	}
}

int func_318(int iParam0)
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

bool func_319(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_270(iParam0))
		{
			return 0;
		}
	}
	return Global_1630816[iParam0 /*597*/].f_11 != func_57();
}

int func_320(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_277(iParam0)) && !func_237(iParam0))
	{
		iVar0 = func_324();
	}
	iVar1 = func_323(iParam0);
	if (!iVar1 == -1)
	{
		return func_321(iVar1);
	}
	return iVar0;
}

int func_321(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_322(iParam0);
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

var func_322(int iParam0)
{
	return Global_2418033.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_323(int iParam0)
{
	if (!iParam0 == func_57())
	{
		if (func_319(iParam0, 1))
		{
			return Global_2418033.f_818.f_11[func_58(iParam0)];
		}
	}
	return -1;
}

int func_324()
{
	return 21;
}

char* func_325(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
			if (unk_0xA700E2BE6F531543())
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
			if (unk_0xA700E2BE6F531543())
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

int func_326(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_330(iParam3))
	{
		*fParam1 = (func_327(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_318(iParam3))
	{
		*fParam1 = (func_327(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_327(int iParam0, int iParam1)
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
			if (unk_0xA700E2BE6F531543())
			{
				return to_float(iParam1);
			}
			else
			{
				return func_329(to_float(iParam1));
			}
			break;
		
		case 2:
			if (unk_0xA700E2BE6F531543())
			{
				return to_float(iParam1);
			}
			else
			{
				return func_328(to_float(iParam1));
			}
			break;
	}
	return to_float(iParam1);
}

float func_328(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_329(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_330(int iParam0)
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

int func_331(int iParam0)
{
	int iVar0;
	
	iVar0 = func_334(iParam0);
	if (iVar0 == -1)
	{
		func_332(iParam0, 1);
		return 0;
	}
	Global_1391551[iVar0 /*5*/].f_4 = 1;
	return Global_1391551[iVar0 /*5*/].f_2;
}

void func_332(int iParam0, bool bParam1)
{
	if (!func_1340(iParam0, 0, 1))
	{
		return;
	}
	if (func_334(iParam0) != -1)
	{
		return;
	}
	if (Global_1391714)
	{
		if (iParam0 == Global_1391714.f_1)
		{
			return;
		}
	}
	if (func_333(iParam0))
	{
		return;
	}
	if (Global_1391752 >= 32)
	{
		return;
	}
	Global_1391719[Global_1391752] = iParam0;
	Global_1391752++;
	if (bParam1)
	{
	}
}

int func_333(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1391752)
	{
		if (Global_1391719[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_334(int iParam0)
{
	int iVar0;
	
	if (!func_1340(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1391712 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1391712)
	{
		if (Global_1391551[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0xEC92E04062037949(Global_1391551[iVar0 /*5*/].f_2) && unk_0x80B82FD1974E28E0(Global_1391551[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_335(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_335(int iParam0)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_1391712)
	{
		return;
	}
	if (unk_0xEC92E04062037949(Global_1391551[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1391551[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, unk_0x05FCBB2D6BF4C399(Global_1391551[iParam0 /*5*/].f_2), 64);
			unk_0x514A976A99458342(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		unk_0x2311DD7B841CBAB0(Global_1391551[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1391712)
	{
		Global_1391551[iVar2 /*5*/] = { Global_1391551[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_336(&(Global_1391551[iVar2 /*5*/]));
	Global_1391712 = (Global_1391712 - 1);
}

void func_336(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_57();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x02BFF15CAA701972())
	{
		uParam0->f_3 = unk_0x551F46B3C7DFB654();
	}
}

struct<4> func_337(int iParam0)
{
	struct<4> Var0;
	
	if (func_1340(iParam0, 0, 1))
	{
		Global_2518253 = { func_59(iParam0) };
		if (unk_0x2322DD4FBF5E4E2F())
		{
			if (func_288(Global_2518253))
			{
				if (!unk_0x94D4A49E53F5209A(&Global_2518253))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0x68B90AB279E39C7B(0))
		{
			return Var0;
		}
		if (func_341(&Global_2518253))
		{
			Global_2518183 = { func_339(iParam0) };
			func_338(&Global_2518183, &Var0);
		}
	}
	return Var0;
}

void func_338(var uParam0, var uParam1)
{
	unk_0xDE25303DF0CA8E75(uParam0, 35, uParam1);
}

struct<35> func_339(int iParam0)
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_340(iParam0))
	{
		return Global_1312934[unk_0x1146A9AE09CE2B14() /*35*/];
	}
	Var0 = { func_59(iParam0) };
	unk_0xEDDAF8F99F371228(&Var1, 35, &Var0);
	return Var1;
}

int func_340(int iParam0)
{
	if (iParam0 == unk_0x1146A9AE09CE2B14())
	{
		return 1;
	}
	return 0;
}

int func_341(var uParam0)
{
	if (unk_0x5B99D5C0DE301BD3())
	{
		if (unk_0x29712F962253A7EB() && unk_0xDA1611E46AAEA71B(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_342(int iParam0, int iParam1)
{
	if (iParam1 == 27)
	{
		if ((func_276(iParam0) || func_345(iParam0)) || func_344(iParam0))
		{
			return 0;
		}
	}
	if (!func_343(iParam0))
	{
		return 0;
	}
	if ((!func_355(iParam0) && Global_2426865[iParam0 /*449*/].f_245 == -1) && !func_354(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_343(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_139, 22);
}

bool func_344(int iParam0)
{
	if (func_276(iParam0))
	{
		return 1;
	}
	return unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_1, 8);
}

int func_345(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_1, 10) || unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_1, 9));
	}
	return 0;
}

int func_346(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_57())
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
		if (unk_0x234B68AC2E35ED5A(Global_1590908[iVar0 /*874*/].f_139, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_347()
{
	switch (func_248(unk_0x1146A9AE09CE2B14()))
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
	switch (func_311(unk_0x1146A9AE09CE2B14()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_237(unk_0x1146A9AE09CE2B14()))
	{
		switch (func_248(unk_0x1146A9AE09CE2B14()))
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
	if (func_310(unk_0x1146A9AE09CE2B14()))
	{
		return 1;
	}
	return 0;
}

int func_348(int iParam0, int iParam1)
{
	if (Global_1630816[iParam0 /*597*/].f_11.f_33 != -1 && func_349(Global_1630816[iParam0 /*597*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1630816[iParam0 /*597*/].f_11.f_32 != -1)
	{
		if (func_349(Global_1630816[iParam0 /*597*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_349(int iParam0)
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
	return func_350(iParam0, 0);
	return 0;
}

int func_350(int iParam0, int iParam1)
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

void func_351(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_1340(unk_0xC502CD39B4994F3A(iVar0), 0, 1))
		{
			iVar1 = unk_0xC502CD39B4994F3A(iVar0);
			if (!func_34(iVar1, 0))
			{
				if ((func_355(iVar1) || Global_2426865[iVar1 /*449*/].f_245 != -1) || func_354(iVar1))
				{
					if (func_352(iVar1, iParam1, 0))
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

int func_352(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_57())
	{
		if (!bParam2)
		{
			if (func_353(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1630816[iParam0 /*597*/].f_11 != func_57())
		{
			return iParam1 == Global_1630816[iParam0 /*597*/].f_11;
		}
	}
	return 0;
}

int func_353(int iParam0, int iParam1)
{
	if (iParam1 != func_57())
	{
		if (iParam0 != func_57())
		{
			if (Global_1630816[iParam0 /*597*/].f_11 != func_57())
			{
				if (Global_1630816[iParam0 /*597*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

bool func_354(int iParam0)
{
	return Global_1590908[iParam0 /*874*/].f_192 != 0;
}

int func_355(int iParam0)
{
	if (!func_1340(iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_1340(unk_0x1146A9AE09CE2B14(), 0, 1))
	{
		return 0;
	}
	if (!func_356(iParam0))
	{
		return 0;
	}
	if ((unk_0xEBB066F8EADD0C1F(iParam0, unk_0x1146A9AE09CE2B14()) || func_248(iParam0) == 233) || func_248(iParam0) == 271)
	{
		return 1;
	}
	return 0;
}

int func_356(int iParam0)
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = func_357(unk_0x1146A9AE09CE2B14());
	bVar1 = func_357(iParam0);
	if ((bVar0 && !bVar1) || (!bVar0 && bVar1))
	{
		return 0;
	}
	return 1;
}

bool func_357(int iParam0)
{
	return func_358(&(Global_2426865[iParam0 /*449*/].f_435), 0);
}

bool func_358(var uParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(*uParam0, iParam1);
}

void func_359(var uParam0, int iParam1, int iParam2)
{
	if (unk_0xDAE4BC89A198A6AF(*uParam0))
	{
		unk_0x704F8697BB515627(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x9E3D03981E2E9AD9(iParam1);
		unk_0x9E3D03981E2E9AD9(iParam2);
		unk_0x392841D58D2EED1D();
	}
}

void func_360(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1379105.f_2 == 0)
		{
			Global_1379105.f_2 = 1;
		}
	}
	else if (Global_1379105.f_2 == 1)
	{
		Global_1379105.f_2 = 0;
	}
}

void func_361()
{
	if (unk_0x234B68AC2E35ED5A(Global_2544210.f_4655, 1))
	{
		if (func_365())
		{
			func_362();
		}
	}
}

void func_362()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2441237.f_2841[iVar0 /*80*/].f_2 != 0)
		{
			Global_2441237.f_2841[iVar0 /*80*/].f_2 = 5;
			func_363(&(Global_2441237.f_2841[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_363(var uParam0, int iParam1)
{
	func_364(uParam0, iParam1);
}

void func_364(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_365()
{
	return Global_2441237.f_2841[0 /*80*/].f_1 != 0;
}

int func_366()
{
	if (unk_0x234B68AC2E35ED5A(Global_2544210.f_4655, 0) && func_365())
	{
		return 1;
	}
	if (unk_0x234B68AC2E35ED5A(Global_2544210.f_4655, 1) && func_365())
	{
		return 1;
	}
	return 0;
}

int func_367()
{
	if (func_365())
	{
		if (func_368(Global_2441237.f_2841[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_368(int iParam0)
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

int func_369()
{
	if (func_365())
	{
		if (func_370(Global_2441237.f_2841[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_370(int iParam0)
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

void func_371(int iParam0)
{
	if (Global_1379105.f_1 != Global_1379105)
	{
		Global_1379105.f_1 = Global_1379105;
	}
	if (Global_1379105 != iParam0)
	{
		Global_1379105 = iParam0;
	}
}

int func_372(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
{
	struct<4> Var0;
	char* sVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	char* sVar6;
	
	StringCopy(&Var0, "", 16);
	bVar2 = iParam1 == 20;
	bVar3 = func_423(iParam1);
	fVar4 = func_422();
	iVar5 = -1;
	if (iParam1 == 27 || iParam1 == 28)
	{
		if (func_421())
		{
			if (func_420() > 0 && Global_1574202)
			{
				unk_0xD8A14DD983454D11();
				unk_0x643A5EAD42A4060C(fVar4);
				unk_0xEFD424FDD55A6EC7(18);
				if (unk_0xE8FFE38E2BA32BD6())
				{
					unk_0xBD35EB504610C23C();
				}
				unk_0xEFD424FDD55A6EC7(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_406())
		{
			func_405(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0x234B68AC2E35ED5A(Global_2544210.f_4658, 26))
	{
		func_405(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_11(&(uParam2->f_19)))
	{
		if (func_420() == 1)
		{
			func_404(bVar3, uParam0, 0);
			func_10(&(uParam2->f_19), 0, 0);
			func_405(uParam0, uParam2, 0);
			unk_0x191DDA30577F440A(&(Global_2544210.f_4659), 5);
		}
	}
	if (func_11(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0xE8FFE38E2BA32BD6())
		{
			unk_0xBD35EB504610C23C();
		}
		unk_0xEFD424FDD55A6EC7(10);
		if (func_6(&(uParam2->f_19), 10000, 0) || (func_420() == 0 && !bParam5))
		{
			func_405(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar2 == 0)
			{
				func_403();
				if (iParam1 == 27 || iParam1 == 28)
				{
					unk_0xD8A14DD983454D11();
				}
				unk_0xEFD424FDD55A6EC7(18);
			}
			if (!unk_0x234B68AC2E35ED5A(uParam2->f_33, 0))
			{
				if (bVar2 == 0)
				{
					func_403();
					if (iParam1 == 27 || iParam1 == 28)
					{
						unk_0xD8A14DD983454D11();
					}
					unk_0xEFD424FDD55A6EC7(18);
				}
				unk_0x643A5EAD42A4060C(fVar4);
				if (func_404(bVar3, uParam0, 0))
				{
					func_359(uParam0, 0, 0);
					sVar1 = func_401(iParam1, &(Global_4456448.f_85542), bParam4);
					Var0 = { func_399(iParam1) };
					if (bParam4)
					{
						func_396(uParam0, sVar1, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 27)
					{
						func_389(uParam0, func_393(uParam2), func_390(uParam2), -1);
					}
					else if (iParam1 == 28)
					{
						sVar6 = func_382(uParam2);
						if (!unk_0xAB6A270F84A8781E(sParam6))
						{
							sVar6 = sParam6;
						}
						func_380(uParam0, sVar6, func_381(), -1);
					}
					else if (func_302())
					{
						uParam2->f_34 = Global_1574201;
						func_396(uParam0, sVar1, &Var0, 1, -1, Global_1574201, 1);
					}
					else if (bVar2)
					{
						iVar5 = func_373(iParam1);
						uParam2->f_34 = Global_1574201;
						func_396(uParam0, sVar1, "", 0, iVar5, Global_1574201, 1);
					}
					else
					{
						iVar5 = func_373(iParam1);
						func_396(uParam0, sVar1, &Var0, 1, iVar5, -1, 1);
					}
					unk_0x191DDA30577F440A(&(uParam2->f_33), 0);
				}
			}
			if (unk_0x234B68AC2E35ED5A(uParam2->f_33, 0))
			{
				Global_1574200 = uParam3;
				Global_1574199 = 1;
				unk_0x643A5EAD42A4060C(fVar4);
				if (bVar2)
				{
					if (uParam2->f_34 != Global_1574201)
					{
						unk_0xC664C0067EEAB8D1(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_373(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_379())
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
			if (func_378(unk_0x1146A9AE09CE2B14()))
			{
				iVar0 = 20;
			}
			if (func_377(unk_0x1146A9AE09CE2B14()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_376(unk_0x1146A9AE09CE2B14()))
	{
		iVar0 = 2;
	}
	if (func_374())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_374()
{
	if (unk_0xE45310E861787FC2())
	{
		return func_53();
	}
	return func_375(Global_4456448.f_85535);
}

int func_375(int iParam0)
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

bool func_376(int iParam0)
{
	return Global_2426865[iParam0 /*449*/].f_119 == 4;
}

bool func_377(int iParam0)
{
	return Global_2426865[iParam0 /*449*/].f_119 == 7;
}

bool func_378(int iParam0)
{
	return Global_2426865[iParam0 /*449*/].f_119 == 2;
}

bool func_379()
{
	return Global_4456448.f_1 == 0;
}

void func_380(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0xDAE4BC89A198A6AF(*uParam0))
	{
		unk_0x704F8697BB515627(*uParam0, "SET_TITLE");
		if (unk_0xAB6A270F84A8781E(sParam2))
		{
			func_299(sParam1);
		}
		else
		{
			unk_0x35CA0C119E6A2A27("FM_AE_BRACKT");
			unk_0x1896EC0B030A48A2(sParam1);
			unk_0x1896EC0B030A48A2(sParam2);
			unk_0xD4B2C39F7AD5A6A6();
		}
		func_299("");
		if (iParam3 != -1)
		{
			unk_0x9E3D03981E2E9AD9(iParam3);
		}
		unk_0x392841D58D2EED1D();
	}
}

char* func_381()
{
	switch (func_248(unk_0x1146A9AE09CE2B14()))
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

char* func_382(var uParam0)
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
	switch (func_248(unk_0x1146A9AE09CE2B14()))
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
			if (func_385())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_384(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_384(1))
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
			if (func_383(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_182))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_383(int iParam0)
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

bool func_384(bool bParam0)
{
	return func_306(unk_0x1146A9AE09CE2B14(), bParam0);
}

bool func_385()
{
	return (func_388() && func_386(func_387()));
}

bool func_386(int iParam0)
{
	return func_308(iParam0, 1);
}

int func_387()
{
	return Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_35;
}

bool func_388()
{
	return Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/] == 148;
}

void func_389(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0xDAE4BC89A198A6AF(*uParam0))
	{
		unk_0x704F8697BB515627(*uParam0, "SET_TITLE");
		if (unk_0xAB6A270F84A8781E(sParam2))
		{
			func_299(sParam1);
		}
		else if (func_311(unk_0x1146A9AE09CE2B14()) == 133)
		{
			unk_0x35CA0C119E6A2A27("FM_AE_BRACKT_C");
			unk_0x1896EC0B030A48A2(sParam1);
			unk_0x1896EC0B030A48A2(sParam2);
			unk_0xD4B2C39F7AD5A6A6();
		}
		else
		{
			unk_0x35CA0C119E6A2A27("FM_AE_BRACKT");
			unk_0x1896EC0B030A48A2(sParam1);
			unk_0x1896EC0B030A48A2(sParam2);
			unk_0xD4B2C39F7AD5A6A6();
		}
		func_299("");
		if (iParam3 != -1)
		{
			unk_0x9E3D03981E2E9AD9(iParam3);
		}
		unk_0x392841D58D2EED1D();
	}
}

char* func_390(var uParam0)
{
	int iVar0;
	
	iVar0 = func_311(unk_0x1146A9AE09CE2B14());
	if (func_392())
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
			switch (func_391())
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

int func_391()
{
	if (func_311(unk_0x1146A9AE09CE2B14()) == 133)
	{
		return Global_2544210.f_5112;
	}
	return -1;
}

bool func_392()
{
	return Global_1590781;
}

char* func_393(var uParam0)
{
	int iVar0;
	
	iVar0 = func_311(unk_0x1146A9AE09CE2B14());
	if (func_392())
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
			if (func_395() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_395() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_391())
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
			if (func_394() == 1)
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

int func_394()
{
	return Global_2544210.f_5115;
}

int func_395()
{
	if (func_311(unk_0x1146A9AE09CE2B14()) == 132)
	{
		return Global_2544210.f_5110;
	}
	return -1;
}

void func_396(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xDAE4BC89A198A6AF(*uParam0))
	{
		unk_0x704F8697BB515627(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_314(sParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x35CA0C119E6A2A27(sParam1);
			unk_0x38CD3C04C877C35F(iParam5);
			unk_0xD4B2C39F7AD5A6A6();
		}
		else
		{
			func_299(sParam1);
		}
		if (func_421() && iParam6)
		{
			if (func_398())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x35CA0C119E6A2A27("LBD_DPD_CNT");
			unk_0x38CD3C04C877C35F(iVar0);
			unk_0x38CD3C04C877C35F(iVar1);
			unk_0xD4B2C39F7AD5A6A6();
		}
		else
		{
			func_299(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x9E3D03981E2E9AD9(iParam4);
			if (func_397(unk_0x1146A9AE09CE2B14()))
			{
				unk_0x9E3D03981E2E9AD9(166);
			}
			else if (func_53())
			{
				unk_0x9E3D03981E2E9AD9(220);
			}
		}
		unk_0x392841D58D2EED1D();
	}
}

int func_397(int iParam0)
{
	if (func_378(iParam0) || func_377(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_398()
{
	return Global_1574202;
}

struct<4> func_399(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_400(unk_0x1146A9AE09CE2B14()) || func_376(unk_0x1146A9AE09CE2B14()))
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
			StringIntConCat(&Var0, Global_4456448.f_527, 16);
			break;
	}
	if (func_302() && unk_0xE45310E861787FC2())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_527, 16);
	}
	return Var0;
}

bool func_400(int iParam0)
{
	return Global_2426865[iParam0 /*449*/].f_119 == 5;
}

char* func_401(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_302() || unk_0xAB6A270F84A8781E(sParam1)))
	{
		uVar0 = func_402();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 25)
	{
		if (Global_1574440 == 0)
		{
			Global_1574440 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0xAB6A270F84A8781E(sParam1))
	{
		if (Global_1574440 == 1)
		{
			Global_1574440 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574440 == 0)
		{
			Global_1574440 = 1;
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

char* func_402()
{
	if (unk_0xC33B9889A311ABB0())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x5381ADE2AB48C34C())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0x8E3B6139DCC5E397())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0x4FCCBCCCB1A46E9F())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_403()
{
	Global_42937 = 1;
}

bool func_404(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0x42AA2CCF0B61DCD8("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0x42AA2CCF0B61DCD8("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0x42AA2CCF0B61DCD8("mp_matchmaking_card");
	}
	return unk_0xDAE4BC89A198A6AF(*uParam1);
}

void func_405(var uParam0, var uParam1, bool bParam2)
{
	unk_0xC664C0067EEAB8D1(&(uParam1->f_33), 7);
	Global_1574200 = 0;
	func_292();
	Global_1574199 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_11(&(uParam1->f_19)))
		{
			func_9(&(uParam1->f_19));
			unk_0xC664C0067EEAB8D1(&(Global_2544210.f_4659), 5);
		}
	}
	if (unk_0xDAE4BC89A198A6AF(*uParam0))
	{
		unk_0x3D9BC07C93913E04(uParam0);
	}
	if (unk_0x234B68AC2E35ED5A(uParam1->f_33, 0))
	{
		unk_0xC664C0067EEAB8D1(&(uParam1->f_33), 0);
	}
	unk_0x643A5EAD42A4060C(0f);
}

int func_406()
{
	if (func_419())
	{
		return 0;
	}
	if (func_418())
	{
		return 0;
	}
	if (!func_416())
	{
		return 0;
	}
	if (!func_414())
	{
		return 0;
	}
	if (func_413(8, -1))
	{
		return 0;
	}
	if (func_420() == 2)
	{
		return 0;
	}
	if (Global_2544210.f_4610)
	{
		return 0;
	}
	if (func_412())
	{
		return 0;
	}
	else if (!func_102(unk_0x1146A9AE09CE2B14(), 1, 0) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_411(1) || func_409(1)) || Global_22531.f_124) || Global_22531)
	{
		return 0;
	}
	if (unk_0xA300BD5F71A8C704())
	{
		return 0;
	}
	if (func_408() && Global_1702509 == 2)
	{
		return 0;
	}
	if (func_105(unk_0x1146A9AE09CE2B14()) && !func_408())
	{
		return 0;
	}
	if (Global_1669334)
	{
		return 0;
	}
	if (Global_1669339)
	{
		return 0;
	}
	if (func_223(0))
	{
		return 0;
	}
	if (unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_27, 4))
	{
		return 0;
	}
	if (Global_1372046)
	{
		return 0;
	}
	if ((Global_1696742.f_718.f_5 || Global_1699568.f_718.f_5) || Global_1695770.f_718.f_5)
	{
		return 0;
	}
	if ((Global_1703513.f_724.f_5 || Global_1703513.f_744.f_724.f_5) || Global_1703513.f_1497.f_724.f_5)
	{
		return 0;
	}
	if (Global_1710289.f_726.f_5)
	{
		return 0;
	}
	if (func_407(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if ((Global_1372082 || Global_1372083) || Global_1372084)
	{
		return 0;
	}
	return 1;
}

bool func_407(int iParam0)
{
	if (iParam0 == func_57())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_319.f_4, 6);
}

bool func_408()
{
	return (unk_0x234B68AC2E35ED5A(Global_4456448.f_30, 12) && unk_0x234B68AC2E35ED5A(Global_1702510, 0));
}

int func_409(bool bParam0)
{
	if (unk_0x4AA05D0E8631839E())
	{
		if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
		{
			if (func_410(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0x5C6675393464A814(0, 25) || unk_0x5C6675393464A814(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_22531.f_130)
	{
		return 0;
	}
	if (unk_0x5C6675393464A814(0, 19) || (!bParam0 && unk_0x51794501073F0A33(0, 19)))
	{
		return 1;
	}
	if (unk_0x3640D836D145B814())
	{
		if (((unk_0x5C6675393464A814(0, 166) || unk_0x5C6675393464A814(0, 167)) || unk_0x5C6675393464A814(0, 168)) || unk_0x5C6675393464A814(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0x51794501073F0A33(0, 166) || unk_0x51794501073F0A33(0, 167)) || unk_0x51794501073F0A33(0, 168)) || unk_0x51794501073F0A33(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_410(int iParam0)
{
	int iVar0;
	
	if (unk_0x8ACA9ACB93EC151E())
	{
		if (!unk_0xECEC7528A52B4EE8(iParam0))
		{
			unk_0xBDC364B886846D11(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_411(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22531.f_4 && Global_22531.f_104 == 4);
	}
	return Global_22531.f_4;
}

bool func_412()
{
	return Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_192 != 0;
}

bool func_413(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1379108.f_203[iParam1];
			}
			break;
	}
	return unk_0x234B68AC2E35ED5A(Global_1379108.f_1048, iParam0);
}

int func_414()
{
	if (func_415() == 0)
	{
		return 1;
	}
	return 0;
}

int func_415()
{
	return Global_1312485.f_18;
}

int func_416()
{
	if (func_417())
	{
		return 1;
	}
	if (unk_0x8B6A925F148E0E94())
	{
		return 0;
	}
	if (unk_0x4E38E404B98F3D9A() || unk_0x07BE48DF95787FCB())
	{
		return 0;
	}
	if (unk_0xA2DFFBCD9CFB74A3())
	{
		return 0;
	}
	return 1;
}

bool func_417()
{
	return Global_1312458;
}

bool func_418()
{
	return Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/] == 5;
}

bool func_419()
{
	return unk_0xDFB7BFA6482FEE1E() <= Global_22670.f_6135 + 100;
}

int func_420()
{
	return Global_1379108.f_68;
}

int func_421()
{
	if (Global_1574201 > 16)
	{
		return 1;
	}
	return 0;
}

float func_422()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x037D8E0CFB994CB5()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_423(int iParam0)
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

int func_424()
{
	if (func_425(unk_0x1146A9AE09CE2B14()))
	{
		return Global_1319186;
	}
	return 0;
}

int func_425(int iParam0)
{
	if (unk_0x02BFF15CAA701972())
	{
		if (func_34(iParam0, 0))
		{
			return unk_0x206C14525FF9EA88(iParam0);
		}
	}
	return 0;
}

int func_426()
{
	if (func_424())
	{
		return 1;
	}
	if (func_344(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if (func_392())
	{
		return 1;
	}
	if (func_277(unk_0x1146A9AE09CE2B14()))
	{
		switch (func_311(unk_0x1146A9AE09CE2B14()))
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
				if (!func_427(unk_0x1146A9AE09CE2B14()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_427(unk_0x1146A9AE09CE2B14()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_427(unk_0x1146A9AE09CE2B14()))
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

bool func_427(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_1, 4);
}

int func_428(int iParam0)
{
	if (iParam0 == 28)
	{
		if ((func_277(unk_0x1146A9AE09CE2B14()) && !func_237(unk_0x1146A9AE09CE2B14())) && !func_310(unk_0x1146A9AE09CE2B14()))
		{
			return 1;
		}
	}
	if (iParam0 == 27)
	{
		if (func_249(unk_0x1146A9AE09CE2B14(), 0) && func_237(unk_0x1146A9AE09CE2B14()))
		{
			return 1;
		}
		if (func_429(unk_0x1146A9AE09CE2B14()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_429(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_277(iParam0) && !func_276(iParam0)) && !unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_1, 8));
	bVar2 = func_237(iParam0);
	uVar3 = func_437();
	uVar4 = func_431();
	if ((bVar1 && (func_275(iParam0) || func_274(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_271(iParam0)) && !func_430(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2544210.f_5191.f_219 != iVar0)
	{
		Global_2544210.f_5191.f_219 = iVar0;
	}
	return iVar0;
}

bool func_430(int iParam0)
{
	return func_252(iParam0, 19);
}

int func_431()
{
	if ((func_252(unk_0x1146A9AE09CE2B14(), 21) || func_252(unk_0x1146A9AE09CE2B14(), 22)) || func_434())
	{
		return 1;
	}
	if (func_432())
	{
		func_253(22);
		return 1;
	}
	return 0;
}

int func_432()
{
	if (func_249(unk_0x1146A9AE09CE2B14(), 0))
	{
		if (((func_437() && !func_433()) || func_268(unk_0x1146A9AE09CE2B14(), 21)) || func_268(unk_0x1146A9AE09CE2B14(), 25))
		{
			return 1;
		}
		else
		{
			func_251(27);
		}
	}
	return 0;
}

bool func_433()
{
	return Global_1312436.f_1;
}

bool func_434()
{
	return func_435(390, -1);
}

int func_435(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2592627[iParam0 /*3*/][func_436(iParam1)];
	if (unk_0xEB399571DCA129A9(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_436(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_36();
		if (iVar1 > -1)
		{
			Global_2555428 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2555428 = 1;
		}
	}
	return iVar0;
}

bool func_437()
{
	return Global_1312436;
}

int func_438()
{
	int iVar0;
	
	iVar0 = -1;
	if (!func_34(unk_0x1146A9AE09CE2B14(), 0))
	{
		iVar0 = unk_0xDD0E57E73E5C4BF6();
	}
	else
	{
		iVar0 = func_439();
	}
	if (iVar0 != -1)
	{
		return unk_0x234B68AC2E35ED5A(Local_125[iVar0 /*11*/].f_1, 1);
	}
	return 0;
}

int func_439()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_755;
	if (unk_0x8CFC2F41A749E236(iVar1))
	{
		if (unk_0xFCC26BA7572E9F1F(iVar1))
		{
			iVar2 = unk_0x4645C707A0067CB6(iVar1);
			iVar0 = iVar2;
		}
	}
	return iVar0;
}

bool func_440()
{
	return Local_124.f_196 == 99;
}

void func_441()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x1131A9F5A725F45A(1))
	{
		iVar1 = unk_0x5F0847A02025CAB5(1, iVar0);
		switch (iVar1)
		{
			case 185:
				func_442(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_442(int iParam0)
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<14> Var6;
	int iVar7;
	int iVar8;
	
	if (unk_0x53858F1E03A88AE1(1, iParam0, &Var0, 13))
	{
		iVar7 = 0;
		while (iVar7 < 10)
		{
			if (!unk_0x234B68AC2E35ED5A(Local_124.f_209, iVar7))
			{
				if (!unk_0x234B68AC2E35ED5A(Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_6, iVar7))
				{
					if (unk_0x419E13582192CFEA(Var0))
					{
						if (unk_0x55F5BD4ABD80B211(Var0))
						{
							if (!unk_0x234B68AC2E35ED5A(Local_124.f_205, iVar7))
							{
								if (!unk_0x234B68AC2E35ED5A(Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_5, iVar7))
								{
									if (unk_0x159BC3DDA80D71AC(Local_124.f_2[iVar7 /*10*/].f_2))
									{
										if (unk_0x419E13582192CFEA(unk_0x854C404AEB476240(Local_124.f_2[iVar7 /*10*/].f_2)))
										{
											if (unk_0x611CD1312FD3CA66(Var0) == unk_0x854C404AEB476240(Local_124.f_2[iVar7 /*10*/].f_2))
											{
												if (unk_0x419E13582192CFEA(Var0.f_1))
												{
													if (unk_0xA2CCAAC7F5CA3F49(Var0.f_1))
													{
														if (unk_0xFAA5505029C4B5A6(Var0.f_1) == unk_0x7D2B9E6A64637269())
														{
															if (func_1221() == Local_124.f_218)
															{
																unk_0x191DDA30577F440A(&(Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_5), iVar7);
															}
														}
														else if (unk_0x72D30262CF8C8603(unk_0xFAA5505029C4B5A6(Var0.f_1)))
														{
															iVar8 = unk_0xCB567ED25393C1DF(unk_0xFAA5505029C4B5A6(Var0.f_1));
															if (!unk_0xFCC26BA7572E9F1F(iVar8))
															{
																unk_0x191DDA30577F440A(&(Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_5), iVar7);
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
						else if (unk_0xA2CCAAC7F5CA3F49(Var0))
						{
							iVar2 = unk_0xFAA5505029C4B5A6(Var0);
							if (unk_0x159BC3DDA80D71AC(Local_124.f_2[iVar7 /*10*/].f_1))
							{
								if (iVar2 == unk_0x8A437068C87289B7(Local_124.f_2[iVar7 /*10*/].f_1))
								{
									if (unk_0x419E13582192CFEA(Var0.f_1))
									{
										if (unk_0xA2CCAAC7F5CA3F49(Var0.f_1))
										{
											iVar1 = unk_0xFAA5505029C4B5A6(Var0.f_1);
											if (unk_0x72D30262CF8C8603(iVar1))
											{
												iVar4 = unk_0xCB567ED25393C1DF(iVar1);
												if (unk_0xFCC26BA7572E9F1F(iVar4))
												{
													if (Var0.f_5)
													{
														if (iVar4 == unk_0x1146A9AE09CE2B14())
														{
															unk_0x191DDA30577F440A(&(Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_6), iVar7);
															if (!func_440())
															{
																Var6.f_2 = -1173488682;
																Var6.f_10 = unk_0x1146A9AE09CE2B14();
																func_455(Var6, func_456(0));
															}
														}
													}
												}
												else if (!unk_0x234B68AC2E35ED5A(Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_7, iVar7))
												{
													if (Var0.f_5)
													{
														unk_0x191DDA30577F440A(&(Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_7), iVar7);
													}
												}
											}
											else if (!unk_0x234B68AC2E35ED5A(Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_8, iVar7))
											{
												if (Var0.f_5)
												{
													unk_0x191DDA30577F440A(&(Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_8), iVar7);
												}
											}
										}
										else if (!unk_0x234B68AC2E35ED5A(Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_8, iVar7))
										{
											if (Var0.f_5)
											{
												unk_0x191DDA30577F440A(&(Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_8), iVar7);
											}
										}
									}
								}
							}
						}
					}
				}
			}
			iVar7++;
		}
		if (!unk_0x234B68AC2E35ED5A(iLocal_126, 15))
		{
			if (unk_0x419E13582192CFEA(Var0))
			{
				if (unk_0xA2CCAAC7F5CA3F49(Var0))
				{
					iVar2 = unk_0xFAA5505029C4B5A6(Var0);
					if (func_454(unk_0x6471F4759775FCA4(iVar2)))
					{
						unk_0x191DDA30577F440A(&iLocal_126, 15);
					}
				}
				else if (unk_0x55F5BD4ABD80B211(Var0))
				{
					if (func_453(unk_0x6471F4759775FCA4(Var0)))
					{
						if (!func_452(unk_0x7D2B9E6A64637269(), unk_0x611CD1312FD3CA66(Var0), 0))
						{
							if (!func_451(unk_0x611CD1312FD3CA66(Var0), 0, 1))
							{
								unk_0x191DDA30577F440A(&iLocal_126, 15);
							}
						}
					}
				}
			}
		}
	}
	if (func_438())
	{
		if (!func_252(unk_0x1146A9AE09CE2B14(), 20))
		{
			if (unk_0x419E13582192CFEA(Var0))
			{
				if (unk_0xA2CCAAC7F5CA3F49(Var0))
				{
					iVar2 = unk_0xFAA5505029C4B5A6(Var0);
					if (unk_0x72D30262CF8C8603(iVar2))
					{
						iVar3 = unk_0xCB567ED25393C1DF(iVar2);
						if (unk_0x419E13582192CFEA(Var0.f_1))
						{
							if (unk_0xA2CCAAC7F5CA3F49(Var0.f_1))
							{
								iVar1 = unk_0xFAA5505029C4B5A6(Var0.f_1);
								if (unk_0x72D30262CF8C8603(iVar1))
								{
									iVar4 = unk_0xCB567ED25393C1DF(iVar1);
									if (iVar4 == unk_0x1146A9AE09CE2B14())
									{
										if (unk_0xFCC26BA7572E9F1F(iVar3))
										{
											if (func_319(iVar3, 1))
											{
												if (Local_124.f_218 > -1)
												{
													iVar5 = unk_0x539ED6DF32477DE0(unk_0x6750311806FF130A(Local_124.f_218));
													if (func_352(iVar3, iVar5, 1))
													{
														func_443(0);
														func_1200();
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

void func_443(int iParam0)
{
	if (!func_237(unk_0x1146A9AE09CE2B14()))
	{
		if (iParam0 || func_429(unk_0x1146A9AE09CE2B14()) != 0)
		{
			func_253(20);
			func_444(func_446());
			if (func_277(unk_0x1146A9AE09CE2B14()))
			{
				if (!unk_0x234B68AC2E35ED5A(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_1, 8))
				{
					unk_0x191DDA30577F440A(&(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_1), 8);
				}
			}
		}
	}
}

void func_444(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_8742)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_445() /*5557*/].f_675.f_4237[iVar0 /*3*/] == iParam0)
		{
			if (Global_1312588.f_1[iVar0] == -1)
			{
				Global_1312588.f_1[iVar0] = iParam0;
				Global_1312588 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_445()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_446()
{
	int iVar0;
	
	iVar0 = func_248(unk_0x1146A9AE09CE2B14());
	if (func_450(iVar0) == 0 || func_450(iVar0) == 3)
	{
		return -1;
	}
	if (func_449(iVar0))
	{
		return 65;
	}
	if (func_448(iVar0))
	{
		return 66;
	}
	if (func_447(iVar0))
	{
		return 63;
	}
	return 64;
}

int func_447(int iParam0)
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

int func_448(int iParam0)
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

int func_449(int iParam0)
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

int func_450(int iParam0)
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

int func_451(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0x3CF5ADE443D18312(iParam0) + 1;
	if (!unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!unk_0x9B73EB6255D4AE81(iParam0, (iVar0 - 1), 0))
			{
				iVar2 = unk_0x27FC1B0077581B37(iParam0, (iVar0 - 1), 0);
				if (bParam1)
				{
					if (unk_0x419E13582192CFEA(iVar2))
					{
						if (unk_0x72D30262CF8C8603(iVar2))
						{
							if (!bParam2 && func_56(unk_0xCB567ED25393C1DF(iVar2), unk_0x1146A9AE09CE2B14()))
							{
							}
							else
							{
								return 1;
							}
						}
					}
				}
				else if (!unk_0xECEC7528A52B4EE8(iVar2))
				{
					if (unk_0x72D30262CF8C8603(iVar2))
					{
						if (!bParam2 && func_56(unk_0xCB567ED25393C1DF(iVar2), unk_0x1146A9AE09CE2B14()))
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

int func_452(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x419E13582192CFEA(iParam0) && !unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
		if (unk_0x419E13582192CFEA(iParam1) && !unk_0xE50EB54E0F21BED0(iParam1, 0))
		{
			if (unk_0xF41EB7643E61A928(iParam0, iParam1, iParam2))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_453(int iParam0)
{
	switch (iParam0)
	{
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("polmav"):
		case joaat("policeb"):
		case joaat("policet"):
		case joaat("policeold2"):
		case joaat("policeold1"):
		case joaat("sheriff"):
		case joaat("sheriff2"):
			return 1;
			break;
	}
	return 0;
}

int func_454(int iParam0)
{
	switch (iParam0)
	{
		case joaat("s_m_y_cop_01"):
		case joaat("s_f_y_cop_01"):
		case joaat("s_m_y_swat_01"):
		case joaat("s_m_m_fiboffice_01"):
		case joaat("s_m_y_sheriff_01"):
		case joaat("s_f_y_sheriff_01"):
		case joaat("s_m_y_ranger_01"):
		case joaat("s_f_y_ranger_01"):
		case joaat("s_m_y_blackops_01"):
		case joaat("s_m_m_armoured_01"):
		case joaat("s_m_y_pilot_01"):
		case joaat("s_m_m_fibsec_01"):
			return 1;
			break;
	}
	return 0;
}

void func_455(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0 = 153488394;
	Param0.f_1 = unk_0x1146A9AE09CE2B14();
	if (!iParam13 == 0)
	{
		unk_0xA5C82A39FF8ED272(1, &Param0, 14, iParam13);
	}
}

int func_456(int iParam0)
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
			if (func_1340(iVar2, 0, 0))
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

void func_457()
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (!func_34(unk_0x1146A9AE09CE2B14(), 0))
	{
		if (unk_0x234B68AC2E35ED5A(iLocal_126, 10))
		{
			unk_0xC664C0067EEAB8D1(&iLocal_126, 10);
		}
		return;
	}
	iVar0 = Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_755;
	if (!unk_0x234B68AC2E35ED5A(iLocal_126, 10))
	{
		if (Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_1 != 0)
		{
			Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_1 = 0;
		}
		unk_0x191DDA30577F440A(&iLocal_126, 10);
	}
	if (!unk_0x234B68AC2E35ED5A(iLocal_126, 11))
	{
		unk_0x191DDA30577F440A(&iLocal_126, 11);
		func_1103();
	}
	if (unk_0x8CFC2F41A749E236(iVar0))
	{
		if (unk_0xFCC26BA7572E9F1F(iVar0))
		{
			uVar1 = unk_0x4645C707A0067CB6(iVar0);
			iVar2 = uVar1;
			iVar3 = Local_125[iVar2 /*11*/].f_9;
			switch (iVar3)
			{
				case 0:
					func_954();
					func_939();
					func_930();
					func_458();
					break;
				
				case 2:
					func_458();
					break;
				
				case 3:
					func_1234();
					break;
				}
			}
	}
}

void func_458()
{
	struct<20> Var0;
	int iVar1;
	char* sVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	iVar1 = func_57();
	iVar4 = unk_0xDD0E57E73E5C4BF6();
	iVar5 = unk_0x1146A9AE09CE2B14();
	if (func_34(unk_0x1146A9AE09CE2B14(), 0))
	{
		iVar4 = func_439();
		iVar5 = Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_755;
	}
	if (!unk_0x234B68AC2E35ED5A(Local_125[iVar4 /*11*/].f_1, 4))
	{
		if (!unk_0x234B68AC2E35ED5A(iLocal_126, 3))
		{
			if (unk_0x234B68AC2E35ED5A(Local_124.f_1, 1))
			{
				if (iVar4 == Local_124.f_218 || func_1221() == Local_124.f_218)
				{
					if (func_429(unk_0x1146A9AE09CE2B14()) >= 2)
					{
						sVar2 = func_924(iVar5);
						uVar3 = func_923(iVar5);
						func_921(87, "BIGM_DEFENDED", "BIGM_CONTRAS", sVar2, uVar3, 0, -1, -1, -1, 2, -1);
					}
					if (iVar5 == unk_0x1146A9AE09CE2B14())
					{
						if (!unk_0x234B68AC2E35ED5A(iLocal_126, 6))
						{
							func_801(1, 1, 0, 0, -1, -1, -1, -1, -1, 0);
							unk_0x191DDA30577F440A(&iLocal_126, 6);
						}
						func_639(169, 1, &Var0, 0);
						unk_0x1CA32AD653DA7B78(unk_0x1146A9AE09CE2B14());
					}
				}
				else if (func_438())
				{
				}
				iLocal_135 = func_20();
				iLocal_136 = (func_20() - func_638(&(Local_124.f_226), 0, 0));
				unk_0x191DDA30577F440A(&iLocal_126, 3);
			}
			else if (unk_0x234B68AC2E35ED5A(Local_124.f_1, 4))
			{
				if (unk_0x234B68AC2E35ED5A(Local_125[iVar4 /*11*/].f_1, 14))
				{
					if (Local_124.f_221 >= 0)
					{
						iVar1 = unk_0xC502CD39B4994F3A(Local_124.f_221);
						if (iVar1 == iVar5)
						{
							func_598(87, "BIGM_SECURED", "BIGM_CONTRAYR", 1, -1, 2, 1, 0);
						}
						else if (func_429(iVar5) >= 2)
						{
							sVar2 = func_924(iVar5);
							uVar3 = func_923(iVar5);
							func_921(87, "BIGM_SECURED", "BIGM_CONTRAGR", sVar2, uVar3, 0, -1, -1, -1, 2, -1);
						}
					}
					if (iVar5 == unk_0x1146A9AE09CE2B14())
					{
						if (!unk_0x234B68AC2E35ED5A(iLocal_126, 6))
						{
							func_801(1, 1, 0, 0, -1, -1, -1, -1, -1, 0);
							unk_0x191DDA30577F440A(&iLocal_126, 6);
						}
						func_639(169, 1, &Var0, 0);
						unk_0x1CA32AD653DA7B78(unk_0x1146A9AE09CE2B14());
					}
					iLocal_135 = func_20();
					iLocal_136 = (func_20() - func_638(&(Local_124.f_226), 0, 0));
					unk_0x191DDA30577F440A(&iLocal_126, 3);
				}
			}
			else if (unk_0x234B68AC2E35ED5A(Local_124.f_1, 3))
			{
				if (unk_0xDD0E57E73E5C4BF6() == Local_124.f_218 || func_1221() == Local_124.f_218)
				{
					if (func_429(iVar5) >= 2)
					{
						sVar2 = func_924(iVar5);
						uVar3 = func_923(unk_0x1146A9AE09CE2B14());
						func_921(88, "BIGM_DCLOST", "BIGM_CONTRAFD", sVar2, uVar3, 0, -1, -1, -1, 2, -1);
					}
					if (iVar5 == unk_0x1146A9AE09CE2B14())
					{
						if (!unk_0x234B68AC2E35ED5A(iLocal_126, 6))
						{
							func_801(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							unk_0x191DDA30577F440A(&iLocal_126, 6);
						}
						func_639(169, 0, &Var0, 0);
					}
				}
				iLocal_135 = func_20();
				iLocal_136 = (func_20() - func_638(&(Local_124.f_226), 0, 0));
				unk_0x191DDA30577F440A(&iLocal_126, 3);
			}
			else if (unk_0x234B68AC2E35ED5A(Local_124.f_1, 9))
			{
				if (func_548())
				{
					if (func_429(iVar5) >= 2)
					{
						sVar2 = func_924(iVar5);
						uVar3 = func_923(iVar5);
						func_921(88, "BIGM_DCLOST", "BIGM_CONTRALS", sVar2, uVar3, 0, -1, -1, -1, 2, -1);
					}
				}
				if (iVar5 == unk_0x1146A9AE09CE2B14())
				{
					if (!unk_0x234B68AC2E35ED5A(iLocal_126, 6))
					{
						func_801(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
						unk_0x191DDA30577F440A(&iLocal_126, 6);
					}
					func_639(169, 0, &Var0, 0);
				}
				iLocal_135 = func_20();
				iLocal_136 = (func_20() - func_638(&(Local_124.f_226), 0, 0));
				unk_0x191DDA30577F440A(&iLocal_126, 3);
			}
			else if (unk_0x234B68AC2E35ED5A(Local_124.f_1, 8))
			{
				if (func_548())
				{
					if (func_429(iVar5) >= 2)
					{
						sVar2 = func_924(iVar5);
						uVar3 = func_923(iVar5);
						func_921(88, "BIGM_DCLOST", "BIGM_CONTRALS", sVar2, uVar3, 0, -1, -1, -1, 2, -1);
					}
				}
				if (iVar5 == unk_0x1146A9AE09CE2B14())
				{
					if (!unk_0x234B68AC2E35ED5A(iLocal_126, 6))
					{
						func_801(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
						unk_0x191DDA30577F440A(&iLocal_126, 6);
					}
					func_639(169, 0, &Var0, 0);
				}
				iLocal_135 = func_20();
				iLocal_136 = (func_20() - func_638(&(Local_124.f_226), 0, 0));
				unk_0x191DDA30577F440A(&iLocal_126, 3);
			}
			else if (unk_0x234B68AC2E35ED5A(Local_124.f_1, 15))
			{
				if (func_548())
				{
					if (func_429(iVar5) >= 2)
					{
						sVar2 = func_924(iVar5);
						uVar3 = func_923(iVar5);
						func_921(88, "BIGM_DCLOST", "BIGM_CONTRALS", sVar2, uVar3, 0, -1, -1, -1, 2, -1);
					}
				}
				if (iVar5 == unk_0x1146A9AE09CE2B14())
				{
					if (!unk_0x234B68AC2E35ED5A(iLocal_126, 6))
					{
						func_801(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
						unk_0x191DDA30577F440A(&iLocal_126, 6);
					}
					func_639(169, 0, &Var0, 0);
				}
				iLocal_135 = func_20();
				iLocal_136 = (func_20() - func_638(&(Local_124.f_226), 0, 0));
				unk_0x191DDA30577F440A(&iLocal_126, 3);
			}
			else if (unk_0x234B68AC2E35ED5A(Local_124.f_1, 5))
			{
				if (func_548())
				{
					if (func_1220())
					{
						if (func_429(iVar5) >= 2)
						{
						}
					}
					else if (func_429(iVar5) >= 2)
					{
						func_598(88, "GB_WORK_OVER", "BIGM_HUNTRBQ", 1, -1, 2, 1, 0);
					}
				}
				if (iVar5 == unk_0x1146A9AE09CE2B14())
				{
					if (!unk_0x234B68AC2E35ED5A(iLocal_126, 6))
					{
						func_801(0, 8, 0, 0, -1, -1, -1, -1, -1, 0);
						unk_0x191DDA30577F440A(&iLocal_126, 6);
					}
					func_639(169, 0, &Var0, 0);
				}
				unk_0x191DDA30577F440A(&iLocal_126, 3);
			}
		}
		if (unk_0x234B68AC2E35ED5A(iLocal_126, 3))
		{
			func_1103();
			if (unk_0xDD0E57E73E5C4BF6() == Local_124.f_218)
			{
				if (!unk_0x234B68AC2E35ED5A(Local_124.f_1, 16) && !unk_0x234B68AC2E35ED5A(Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_1, 13))
				{
					if ((((unk_0x234B68AC2E35ED5A(Local_124.f_1, 15) || unk_0x234B68AC2E35ED5A(Local_124.f_1, 8)) || unk_0x234B68AC2E35ED5A(Local_124.f_1, 3)) || func_11(&(Local_124.f_226))) || (func_440() && unk_0x234B68AC2E35ED5A(Local_124.f_1, 9)))
					{
						func_491();
					}
					else
					{
						unk_0x191DDA30577F440A(&(Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_1), 13);
						if (!func_490(38))
						{
							func_489(38);
						}
					}
					if (iLocal_137 == 2)
					{
						unk_0x191DDA30577F440A(&(Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_1), 13);
					}
					if (iLocal_137 == 3)
					{
						unk_0x191DDA30577F440A(&(Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_1), 13);
					}
				}
			}
			if (!unk_0x234B68AC2E35ED5A(iLocal_127, 8))
			{
				func_487();
				func_485();
				unk_0x191DDA30577F440A(&iLocal_127, 8);
			}
			if (!unk_0x234B68AC2E35ED5A(iLocal_126, 7))
			{
				if (Local_124.f_219 != -1)
				{
					if (unk_0x234B68AC2E35ED5A(iLocal_126, 5))
					{
						if (unk_0x8CFC2F41A749E236(unk_0xC502CD39B4994F3A(Local_124.f_219)))
						{
							func_483(unk_0xC502CD39B4994F3A(Local_124.f_219), 432, 0, 0);
							func_482(unk_0xC502CD39B4994F3A(Local_124.f_219), 1, 0, 0);
							func_481(unk_0xC502CD39B4994F3A(Local_124.f_219), 0, 0, 0);
							func_480(unk_0xC502CD39B4994F3A(Local_124.f_219), 0);
							func_477(unk_0xC502CD39B4994F3A(Local_124.f_219), Global_262145.f_12533, 0, 0);
							unk_0x191DDA30577F440A(&iLocal_126, 7);
						}
					}
				}
			}
			if (func_459(&uLocal_138, 1, 0) && (unk_0x234B68AC2E35ED5A(Local_124.f_1, 16) || unk_0x234B68AC2E35ED5A(Local_124.f_1, 5)))
			{
				if (iVar4 == unk_0xDD0E57E73E5C4BF6())
				{
					unk_0x191DDA30577F440A(&(Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_1), 4);
				}
			}
		}
	}
}

int func_459(var uParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	func_253(29);
	if ((*uParam0 > 0 && !func_365()) && func_429(unk_0x1146A9AE09CE2B14()) != 0)
	{
		if (!func_475())
		{
			func_474();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_11(&(uParam0->f_3)))
			{
				func_10(&(uParam0->f_3), 0, 0);
			}
			else if (func_6(&(uParam0->f_3), 1000, 0))
			{
				unk_0x191DDA30577F440A(&(Global_1681713.f_3), 2);
				if (bParam1)
				{
					unk_0x191DDA30577F440A(&(Global_2544210.f_4655), 0);
					func_10(&(uParam0->f_5), 0, 0);
				}
				func_10(&(uParam0->f_1), 0, 0);
				func_473(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_11(&(uParam0->f_5)))
			{
				if (func_6(&(uParam0->f_5), 3000, 0))
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
				func_466(iParam2);
				func_473(uParam0, 2);
			}
			break;
		
		case 2:
			func_466(0);
			if (func_6(&(uParam0->f_1), 15000, 0))
			{
				if (func_460(func_461(0)))
				{
					unk_0x66AE54CE92457FEE(1);
				}
				func_473(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_6(&(uParam0->f_1), 23500, 0))
			{
				unk_0xC664C0067EEAB8D1(&(Global_2544210.f_4655), 1);
				unk_0xC664C0067EEAB8D1(&(Global_1681713.f_3), 2);
				func_473(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0xC664C0067EEAB8D1(&(Global_2544210.f_4655), 1);
			unk_0xC664C0067EEAB8D1(&(Global_1681713.f_3), 2);
			return 1;
	}
	return 0;
}

bool func_460(char* sParam0)
{
	unk_0x4A4799828818A508(sParam0);
	return unk_0x0222F263F70347A8(0);
}

char* func_461(int iParam0)
{
	if (((func_464(unk_0x1146A9AE09CE2B14()) || func_463(unk_0x1146A9AE09CE2B14())) || func_385()) || iParam0)
	{
		if (func_463(unk_0x1146A9AE09CE2B14()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_349(func_462()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_462()
{
	return Global_1658176;
}

bool func_463(int iParam0)
{
	return func_350(func_248(iParam0), 0);
}

bool func_464(int iParam0)
{
	return func_465(func_248(iParam0));
}

int func_465(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/] == 148 && func_308(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_35, 1))
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

void func_466(int iParam0)
{
	if (unk_0x234B68AC2E35ED5A(Global_2544210.f_4655, 0))
	{
		if (((((((((((!unk_0x232F50D37AC94ECF() && !unk_0x234B68AC2E35ED5A(Global_2544210.f_836, 2)) && func_1340(unk_0x1146A9AE09CE2B14(), 1, 1)) && !Global_74428) && !Global_59279) && !unk_0x8B6A925F148E0E94()) && !func_252(unk_0x1146A9AE09CE2B14(), 22)) && func_429(unk_0x1146A9AE09CE2B14()) != 0) && !func_471(func_472())) && !func_464(unk_0x1146A9AE09CE2B14())) && !func_470(func_248(unk_0x1146A9AE09CE2B14()))) && !func_469(func_248(unk_0x1146A9AE09CE2B14())))
		{
			unk_0x191DDA30577F440A(&(Global_2544210.f_4655), 1);
			func_468(func_461(iParam0), -1);
			func_467(1);
			unk_0xC664C0067EEAB8D1(&(Global_2544210.f_4655), 0);
		}
	}
}

void func_467(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_384(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_365())
	{
		unk_0x9B0169E27978C1A2(-1, "Boss_Message_Orange", sVar0, 0);
	}
}

void func_468(char* sParam0, int iParam1)
{
	unk_0xDDEC6D09154BA73A(sParam0);
	unk_0x4A5DC2FF6E0B609F(0, 0, 0, iParam1);
}

int func_469(int iParam0)
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

int func_470(int iParam0)
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

int func_471(int iParam0)
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

int func_472()
{
	var uVar0;
	
	uVar0 = unk_0x471C98FD94C0A5FD();
	if (unk_0xDA654EB115F9FF7D(uVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_RAMPED_UP"))
	{
		return 220;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_GUNRUNNING"))
	{
		return 225;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_GUNRUNNING_DEFEND"))
	{
		return 227;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_SMUGGLER"))
	{
		return 229;
	}
	else if (unk_0xDA654EB115F9FF7D(uVar0, "GB_FM_GANGOPS"))
	{
		return 233;
	}
	return 0;
}

void func_473(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_474()
{
	Global_2465049 = 1;
}

int func_475()
{
	if (((((((func_248(unk_0x1146A9AE09CE2B14()) == 170 || func_248(unk_0x1146A9AE09CE2B14()) == 219) || func_248(unk_0x1146A9AE09CE2B14()) == 221) || func_248(unk_0x1146A9AE09CE2B14()) == 220) || func_248(unk_0x1146A9AE09CE2B14()) == 216) || func_248(unk_0x1146A9AE09CE2B14()) == 215) || func_248(unk_0x1146A9AE09CE2B14()) == 214) || func_248(unk_0x1146A9AE09CE2B14()) == 218)
	{
		return 1;
	}
	if (func_476(unk_0x1146A9AE09CE2B14()))
	{
		return 1;
	}
	return 0;
}

int func_476(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (func_1340(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_152(Global_2426865[iParam0 /*449*/].f_319.f_6) == 2;
			}
		}
	}
	return 0;
}

void func_477(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_479(iParam0))
	{
		return;
	}
	if (func_478(&(Global_2416162.f_756[iParam0]), &(Global_2416162.f_1119[iParam0]), &(Global_2416162.f_392), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2416162.f_558[iParam0] = uParam1;
		}
	}
}

int func_478(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)
{
	if (bParam5)
	{
		if (!unk_0x4BE697D014536271(*uParam1) || *uParam1 == unk_0x62D18D65FE22FF39())
		{
			*uParam1 = unk_0x62D18D65FE22FF39();
			*uParam0 = unk_0x62D18D65FE22FF39();
		}
	}
	if (!unk_0x4BE697D014536271(*uParam0) || *uParam0 == unk_0x62D18D65FE22FF39())
	{
		if (bParam3)
		{
			if (!unk_0x234B68AC2E35ED5A(*uParam2, iParam4))
			{
				*uParam6 = 1;
				unk_0x191DDA30577F440A(uParam2, iParam4);
			}
			*uParam0 = unk_0x62D18D65FE22FF39();
		}
		else
		{
			if (unk_0x234B68AC2E35ED5A(*uParam2, iParam4))
			{
				*uParam6 = 1;
				unk_0xC664C0067EEAB8D1(uParam2, iParam4);
			}
			if (*uParam1 == unk_0x62D18D65FE22FF39())
			{
				*uParam1 = -1;
			}
			*uParam0 = -1;
		}
		return 1;
	}
	else if (unk_0x4BE697D014536271(*uParam1) && !*uParam1 == unk_0x62D18D65FE22FF39())
	{
	}
	return 0;
}

int func_479(int iParam0)
{
	if (iParam0 == func_57())
	{
		return 1;
	}
	if (unk_0x15173FB88ABC94F9(unk_0x471C98FD94C0A5FD()) == func_259())
	{
		return 1;
	}
	return 0;
}

void func_480(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x191DDA30577F440A(&(Global_2416162.f_368), iParam0);
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&(Global_2416162.f_368), iParam0);
	}
	if (unk_0x575B7C28D81C0B4D(Global_2416162[iParam0]))
	{
		if (bParam1)
		{
			unk_0x72D460C6FC1A44BE(Global_2416162[iParam0], 0);
		}
		else
		{
			unk_0x72D460C6FC1A44BE(Global_2416162[iParam0], 1);
		}
	}
}

void func_481(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_479(iParam0))
	{
		return;
	}
	if (func_478(&(Global_2416162.f_822[iParam0]), &(Global_2416162.f_1185[iParam0]), &(Global_2416162.f_367), bParam1, iParam0, bParam3, &uVar0))
	{
		func_480(iParam0, bParam2);
	}
}

void func_482(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_479(iParam0))
	{
		return;
	}
	if (func_478(&(Global_2416162.f_624[iParam0]), &(Global_2416162.f_987[iParam0]), &(Global_2416162.f_389), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2416162.f_459[iParam0] = iParam1;
		}
	}
}

void func_483(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	
	if (func_479(iParam0))
	{
		return;
	}
	if (func_478(&(Global_2416162.f_591[iParam0]), &(Global_2416162.f_954[iParam0]), &(Global_2416162.f_388), bParam2, iParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_2416162.f_426[iParam0] = iParam1;
		}
		if (bVar0)
		{
			func_484();
		}
	}
}

void func_484()
{
	Global_2416162.f_1651 = 1;
}

void func_485()
{
	int iVar0;
	int iVar1;
	
	if (!func_440())
	{
		return;
	}
	if (!unk_0x234B68AC2E35ED5A(iLocal_126, 9))
	{
		unk_0x191DDA30577F440A(&iLocal_126, 9);
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = unk_0xC502CD39B4994F3A(iVar0);
			if (unk_0x8CFC2F41A749E236(iVar1))
			{
				if (iVar1 != unk_0x1146A9AE09CE2B14())
				{
					func_483(iVar1, 478, 0, 0);
					func_482(iVar1, func_486(iLocal_150), 0, 0);
				}
			}
			iVar0++;
		}
	}
}

int func_486(int iParam0)
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
	unk_0xB4D5E37C91862216(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_487()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x575B7C28D81C0B4D(uLocal_146[iVar0]))
		{
			unk_0x1AD5BCFEC31BB8D9(&(uLocal_146[iVar0]));
		}
		iVar0++;
	}
	if (unk_0x575B7C28D81C0B4D(uLocal_149))
	{
		unk_0x1AD5BCFEC31BB8D9(&uLocal_149);
	}
	if (unk_0x575B7C28D81C0B4D(uLocal_147))
	{
		unk_0x1AD5BCFEC31BB8D9(&uLocal_147);
	}
	if (unk_0x575B7C28D81C0B4D(uLocal_148))
	{
		unk_0x1AD5BCFEC31BB8D9(&uLocal_148);
	}
	if (unk_0x234B68AC2E35ED5A(iLocal_126, 12))
	{
		unk_0x791B4C3811D53DFA(uLocal_134);
		unk_0x315DA2F7337A8638("ALARM_BELL_02");
		unk_0xC664C0067EEAB8D1(&iLocal_126, 12);
	}
	if (((func_460("DCONTRA_HLP1") || func_460("DCONTRA_HLP2")) || func_460("DCONTRA_HLPVCR")) || func_460("DCONTRA_HLPCR"))
	{
		unk_0x66AE54CE92457FEE(1);
	}
	func_488();
}

void func_488()
{
	if (unk_0x234B68AC2E35ED5A(iLocal_126, 14))
	{
		func_241();
		func_230(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
		unk_0xC664C0067EEAB8D1(&iLocal_126, 14);
	}
}

void func_489(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x191DDA30577F440A(&(Global_2544210.f_5191.f_7[iVar0]), iVar1);
}

bool func_490(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0x234B68AC2E35ED5A(Global_2544210.f_5191.f_7[iVar0], iVar1);
}

void func_491()
{
	float fVar0;
	
	if (func_440())
	{
		if (unk_0x234B68AC2E35ED5A(Local_124.f_1, 9) || unk_0x234B68AC2E35ED5A(Local_124.f_1, 8))
		{
			func_492(func_547());
			if (!func_490(36))
			{
				func_489(36);
			}
		}
	}
	else if (func_11(&(Local_124.f_226)))
	{
		if (iLocal_136 <= 0)
		{
			func_492(func_547());
			if (!func_490(36))
			{
				func_489(36);
			}
		}
		else
		{
			fVar0 = (to_float((iLocal_135 - iLocal_136)) / to_float(iLocal_135));
			fVar0 = (fVar0 * 0.5f);
			func_492(fVar0);
			if (!func_490(37))
			{
				func_489(37);
			}
		}
	}
}

void func_492(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Local_124.f_197 + 1;
	iVar1 = func_546(iVar0);
	if (iVar1 > 0)
	{
		iVar2 = round((to_float(iVar1) * fParam0));
		if (to_float(iVar2) > (to_float(iVar1) / 2f))
		{
			iVar2 = (iVar2 - 1);
		}
		func_493(iVar0, iVar2, 0, 0, &iLocal_137, 0);
	}
	else
	{
		unk_0x191DDA30577F440A(&(Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_1), 13);
	}
}

void func_493(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam1 <= 0)
	{
		if (iParam1 == 0)
		{
		}
		*uParam4 = 3;
		return;
	}
	if (*uParam4 != 0 && *uParam4 != 1)
	{
		*uParam4 = 0;
	}
	iVar0 = func_546(iParam0);
	iVar1 = func_545(iParam0);
	if (!func_544())
	{
		if (iVar1 >= 0 && iVar0 >= iParam1)
		{
			iVar2 = (func_546(iParam0) - iParam1);
			iVar3 = 0;
			if (bParam5)
			{
				iVar3 = iParam1;
			}
			func_530(iParam0, iVar1, iVar2, iVar3, 0, 11);
			func_528(func_529(iVar1), iVar2, -1, 1);
			Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_108[iVar1 /*3*/].f_1 = iVar2;
			if (iVar3 != 0)
			{
				func_524(iParam0, iVar3);
				func_520(iParam0, iVar3);
			}
			if (unk_0xE45310E861787FC2())
			{
				unk_0x33797E8C1A8667FE(10);
			}
			func_517(1490700264, 10, 0);
			*uParam4 = 2;
		}
		else
		{
			*uParam4 = 3;
		}
	}
	else if (iVar1 >= 0 && iVar0 >= iParam1)
	{
		iVar4 = (func_546(iParam0) - iParam1);
		iVar5 = 0;
		if (bParam5)
		{
			iVar5 = iParam1;
		}
		if (func_494(iVar1, iParam1, iVar5, iParam2, iParam3, uParam4, Global_2544210.f_5191.f_385))
		{
			if (*uParam4 == 2)
			{
				func_530(iParam0, iVar1, iVar4, iVar5, 0, 11);
				func_528(func_529(iVar1), iVar4, -1, 1);
				Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_108[iVar1 /*3*/].f_1 = iVar4;
				if (iVar5 != 0)
				{
					func_520(iParam0, iVar5);
				}
				if (unk_0xE45310E861787FC2())
				{
					unk_0x33797E8C1A8667FE(10);
				}
				func_517(1490700264, 10, 0);
				*uParam4 = 2;
			}
			else if (*uParam4 == 3)
			{
				*uParam4 = 3;
			}
		}
	}
	else
	{
		*uParam4 = 3;
	}
}

bool func_494(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (*uParam5 != 0 && *uParam5 != 1)
	{
		*uParam5 = 0;
	}
	switch (*uParam5)
	{
		case 0:
			iVar0 = func_516(iParam0);
			iVar1 = func_514(0, iParam1, 0, -1);
			iVar2 = func_513(iParam0);
			iVar3 = func_512(iParam0);
			switch (iParam4)
			{
				case 0:
					iVar4 = -1003644442;
					break;
				
				case 1:
					iVar4 = 402112378;
					break;
				
				case 2:
					iVar4 = 1283718111;
					break;
				
				case 3:
					iVar4 = 1783677420;
					break;
			}
			if (iParam4 == 0 || func_508(78225582, -1799524201, iVar1, -788753717, 1, 0, 1, 4, iVar0, 3))
			{
				if (func_508(78225582, 69656641, iVar2, -788753717, iParam1, 0, 1, 4, 0, 3))
				{
					if (iParam2 == 0 || func_508(78225582, 69656641, iVar3, -788753717, iParam2, 0, 1, 4, 0, 3))
					{
						if (func_508(78225582, -739932302, iVar4, -788753717, 1, iParam3, 0, 4, iVar2, 3))
						{
							*uParam5 = 1;
						}
						else
						{
							*uParam5 = 3;
						}
					}
					else
					{
						*uParam5 = 3;
					}
				}
				else
				{
					*uParam5 = 3;
				}
			}
			else
			{
				*uParam5 = 3;
			}
			if (*uParam5 == 1 && func_503())
			{
			}
			else
			{
				*uParam5 = 3;
				func_498(func_502());
			}
			break;
		
		case 1:
			if (func_497(func_502()))
			{
				if (func_496(func_502()) == 2)
				{
					if (iParam3 > 0)
					{
						unk_0xC547D58DB56BD8E8(func_495(func_502()));
						unk_0x5770EF297A89065D(iParam3, iParam6);
					}
					*uParam5 = 2;
					func_498(func_502());
				}
				else
				{
					*uParam5 = 3;
					func_498(func_502());
				}
			}
			break;
	}
	return *uParam5 != 1;
}

int func_495(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4265506[iParam0 /*85*/].f_66;
	}
	return -1;
}

int func_496(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4265506[iParam0 /*85*/].f_66.f_2;
	}
	return 0;
}

int func_497(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4265506[iParam0 /*85*/].f_66.f_2 != 1;
	}
	return 0;
}

void func_498(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_544())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_501(iParam0))
		{
			if (!bVar0)
			{
				unk_0x2BC717FE20953774();
			}
		}
		else if (!bVar0)
		{
			unk_0x9046783C7B581580(Global_4265506[iParam0 /*85*/].f_66);
		}
		func_499(&(Global_4265506[iParam0 /*85*/]));
	}
}

void func_499(var uParam0)
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
	func_500(&(uParam0->f_14));
	func_500(&(uParam0->f_14.f_13));
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

void func_500(var uParam0)
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

int func_501(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4265506[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

int func_502()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_495(iVar0) != 2147483647)
		{
			if (func_501(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_503()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_544())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_502();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0x4D51377BFFA53BFA(func_36()) || unk_0xD699DB7515D82955())
		{
			if (func_507(Global_4265506[iVar2 /*85*/].f_66.f_6, Global_4265506[iVar2 /*85*/].f_66.f_4, Global_4265506[iVar2 /*85*/].f_66.f_1) == 1)
			{
				Global_4267008 = 1;
			}
			return 0;
		}
		if (Global_2464661)
		{
			if (Global_4265506[iVar2 /*85*/].f_66.f_6 == 1067618600 || Global_4265506[iVar2 /*85*/].f_66.f_6 == -1303831698)
			{
				Global_4267009 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_495(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || unk_0xDA727DD48FB63842(iVar3))
		{
			Global_4265506[iVar2 /*85*/].f_66.f_13 = 1;
			Global_4265506[iVar2 /*85*/].f_66.f_12 = 0;
			Global_4265506[iVar2 /*85*/].f_66.f_14 = unk_0x2053F6ACFD4ED4BC();
			if (bVar0)
			{
				Global_4265506[iVar2 /*85*/].f_66.f_8 = 1;
				Global_4265506[iVar2 /*85*/].f_66.f_12 = 1;
			}
			Global_4265506[iVar2 /*85*/].f_66.f_18 = 0;
			if (bVar0 || iVar1)
			{
				func_504(Global_4265506[iVar2 /*85*/], iVar2);
			}
			Global_4266993 = 1;
			return 1;
		}
	}
	return 0;
}

void func_504(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	struct<3> Var0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.x = -384079069;
	Var0.f_1 = unk_0x1146A9AE09CE2B14();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam19;
	iVar1 = func_506(Var0.f_1);
	if ((Global_262145.f_23756 && !Global_262145.f_23757) && !Global_262145.f_23758)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_505();
		unk_0xA5C82A39FF8ED272(1, &Var0, 36, iVar1);
	}
}

void func_505()
{
	unk_0xA7988ABD4140D469("AM_ARENA_SHP");
}

int func_506(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0x191DDA30577F440A(&uVar0, iParam0);
	}
	return uVar0;
}

int func_507(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -31156877:
			case -327918414:
			case 550898518:
			case 835976347:
			case 1347433368:
			case -1100963799:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case 1982688246:
				return 0;
				break;
			
			case 1718438689:
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
			case -664597565:
			case 599804707:
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
			case 443347049:
			case 403506509:
			case -883876414:
			case -1064150715:
			case -1387253055:
			case -716963152:
			case 1138089938:
			case -561012053:
			case 1240683675:
			case 1241904665:
			case -494565059:
			case 827308208:
			case -1857685192:
			case 1698417709:
			case -2017925037:
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
			case 1668610896:
			case -2032529561:
				return 1;
				break;
			
			case 1515774909:
			case 1173654533:
			case -899802304:
			case -663944335:
			case 1208553146:
			case -613221010:
			case -671062876:
			case 291576838:
			case -1276678868:
			case 711665950:
			case -407201236:
			case -754024203:
			case -1885444887:
			case 1931729587:
			case 1064954035:
			case -180141073:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case -876847842:
			case 68030260:
				return 2;
				break;
			
			default:
				return 0;
				break;
		}
		switch (iParam1)
		{
			case -319306689:
			case -466527264:
			case 1925965142:
			case 592152676:
			case 2035612943:
			case 1568659720:
			case -1224479447:
			case 1220095570:
			case 2050320631:
			case 592672421:
			case -842062976:
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
				return 1;
				break;
			
			case 1775876058:
			case -518651910:
				return 2;
				break;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_508(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_544())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x4D51377BFFA53BFA(func_36()) || unk_0xD699DB7515D82955())
		{
			Global_4267008 = 1;
			return 0;
		}
		if (Global_2464661)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_4267009 = 1;
				return 0;
			}
		}
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar1 = func_502();
	if (iVar1 == -1)
	{
		if (!func_510(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_509(iParam1))
		{
			Var2 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		Global_4265506[iVar1 /*85*/].f_66.f_1 = Var2.f_2;
		Global_4265506[iVar1 /*85*/].f_66.f_15 = Var2;
		Global_4265506[iVar1 /*85*/].f_66.f_16 = Var2.f_1;
		if (bVar0 || unk_0x4DF58B7B15FFA2F7(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_509(int iParam0)
{
	switch (iParam0)
	{
		case -221807075:
		case -1224924353:
		case -2121967344:
		case 1394405165:
		case -2052814106:
		case 1701289268:
		case -1796535835:
		case -1928802392:
		case 581564040:
		case 23048035:
		case 2117376854:
		case -1377881127:
		case -504675202:
		case 1906937290:
		case -1616616027:
		case -1799524201:
		case 269396419:
		case 69656641:
		case -103880010:
		case -1494913648:
			return 1;
			break;
	}
	return 0;
}

int func_510(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_544())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x4D51377BFFA53BFA(func_36()) || unk_0xD699DB7515D82955())
		{
			Global_4267008 = 1;
			return 0;
		}
		if (Global_2464661)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_4267009 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 15)
	{
		if (Global_4265506[iVar1 /*85*/].f_66.f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_4265506[iVar1 /*85*/].f_66.f_5 == 1)
		{
			return 0;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*iParam0 = 0;
	if (!bVar0)
	{
		if (unk_0x04C87DD342542625())
		{
			unk_0x2BC717FE20953774();
		}
	}
	if (bVar0 || unk_0x07C2962447C9CA2A(&iVar3, iParam2, uParam3, uParam4))
	{
		*iParam0 = func_511(iVar3, iParam1, -2085313189, uParam3, iParam2, 0, 1, uParam4, uParam5, 0, bVar0);
		return 1;
	}
	return 0;
}

int func_511(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, bool bParam6, var uParam7, var uParam8, int iParam9, bool bParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4265506[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_544())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4265506[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4265506[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4265506[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4265506[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4265506[iVar0 /*85*/].f_66.f_7 = uParam3;
			Global_4265506[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4265506[iVar0 /*85*/].f_66 = iParam0;
			Global_4265506[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4265506[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4265506[iVar0 /*85*/].f_66.f_10 = uParam7;
			Global_4265506[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4265506[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4265506[iVar0 /*85*/].f_66.f_14 = unk_0x2053F6ACFD4ED4BC();
			Global_4265506[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4266993 = 0;
			if (bParam6)
			{
				Global_4265506[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && bParam10)
			{
				func_504(Global_4265506[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_512(int iParam0)
{
	char cVar0[64];
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "MP_STAT_SPCONTOTALFORWHOUSE0_v0", 64);
			break;
		
		case 1:
			StringCopy(&cVar0, "MP_STAT_SPCONTOTALFORWHOUSE1_v0", 64);
			break;
		
		case 2:
			StringCopy(&cVar0, "MP_STAT_SPCONTOTALFORWHOUSE2_v0", 64);
			break;
		
		case 3:
			StringCopy(&cVar0, "MP_STAT_SPCONTOTALFORWHOUSE3_v0", 64);
			break;
		
		case 4:
			StringCopy(&cVar0, "MP_STAT_SPCONTOTALFORWHOUSE4_v0", 64);
			break;
	}
	if (unk_0xAB6A270F84A8781E(&cVar0))
	{
		return -1;
	}
	return unk_0x15173FB88ABC94F9(&cVar0);
}

int func_513(int iParam0)
{
	char cVar0[64];
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "MP_STAT_CONTOTALFORWHOUSE0_v0", 64);
			break;
		
		case 1:
			StringCopy(&cVar0, "MP_STAT_CONTOTALFORWHOUSE1_v0", 64);
			break;
		
		case 2:
			StringCopy(&cVar0, "MP_STAT_CONTOTALFORWHOUSE2_v0", 64);
			break;
		
		case 3:
			StringCopy(&cVar0, "MP_STAT_CONTOTALFORWHOUSE3_v0", 64);
			break;
		
		case 4:
			StringCopy(&cVar0, "MP_STAT_CONTOTALFORWHOUSE4_v0", 64);
			break;
	}
	if (unk_0xAB6A270F84A8781E(&cVar0))
	{
		return -1;
	}
	return unk_0x15173FB88ABC94F9(&cVar0);
}

int func_514(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	char* sVar0;
	
	func_515(&sVar0, bParam0, iParam1, bParam2, iParam3);
	return unk_0x15173FB88ABC94F9(&sVar0);
}

void func_515(char* sParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam1)
	{
		if (iParam2 == -1)
		{
			StringCopy(sParam0, "CB_NONE_0_t0_v0", 64);
		}
		else if (bParam3)
		{
			StringCopy(sParam0, "CB_BUY_", 64);
			StringIntConCat(sParam0, iParam2, 64);
			StringConCat(sParam0, "_t1_v", 64);
			StringIntConCat(sParam0, iParam4, 64);
		}
		else
		{
			StringCopy(sParam0, "CB_BUY_", 64);
			StringIntConCat(sParam0, iParam2, 64);
			StringConCat(sParam0, "_t0_v0", 64);
		}
	}
	else
	{
		StringCopy(sParam0, "CB_SELL_0_t0_v0", 64);
	}
}

int func_516(int iParam0)
{
	char cVar0[64];
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORWHOUSE0_v0", 64);
			break;
		
		case 1:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORWHOUSE1_v0", 64);
			break;
		
		case 2:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORWHOUSE2_v0", 64);
			break;
		
		case 3:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORWHOUSE3_v0", 64);
			break;
		
		case 4:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORWHOUSE4_v0", 64);
			break;
	}
	if (unk_0xAB6A270F84A8781E(&cVar0))
	{
		return -1;
	}
	return unk_0x15173FB88ABC94F9(&cVar0);
}

void func_517(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_519(iParam1, iParam2))
	{
		iVar0 = func_518();
		Global_2463392[iVar0] = iParam1;
		Global_2463403[iVar0] = iParam0;
	}
}

int func_518()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2463392[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_519(int iParam0, var uParam1)
{
	if (Global_1312890)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312902) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_520(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 5;
	while (iVar0 >= 0)
	{
		if (iVar1 < iParam1)
		{
			if (Global_1683681[iVar0] == iParam0)
			{
				Global_1683674[iVar0] = 0;
				Global_1683681[iVar0] = 0;
				iVar1++;
			}
		}
		iVar0 = (iVar0 + -1);
	}
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_1683681[iVar0] == 0)
		{
			if (iVar2 == -1)
			{
				iVar2 = 0;
			}
		}
		else if (iVar2 != -1)
		{
			Global_1683674[iVar2] = Global_1683674[iVar0];
			Global_1683681[iVar2] = Global_1683681[iVar0];
			Global_1683674[iVar0] = 0;
			Global_1683681[iVar0] = 0;
			iVar2++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_522(func_523(iVar0), Global_1683674[iVar0], -1, 1);
		func_522(func_521(iVar0), Global_1683681[iVar0], -1, 1);
		iVar0++;
	}
}

int func_521(int iParam0)
{
	if (iParam0 == 0)
	{
		return 7648;
	}
	else if (iParam0 == 1)
	{
		return 7649;
	}
	else if (iParam0 == 2)
	{
		return 7650;
	}
	else if (iParam0 == 3)
	{
		return 7651;
	}
	else if (iParam0 == 4)
	{
		return 7652;
	}
	else if (iParam0 == 5)
	{
		return 7653;
	}
	return 7648;
}

var func_522(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iVar0 = unk_0x7DAFCA3E4EC9113B((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0x5A0258255BDE2FB1((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x7DAFCA3E4EC9113B((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0x5A0258255BDE2FB1((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x7DAFCA3E4EC9113B((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0x5A0258255BDE2FB1((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x7DAFCA3E4EC9113B((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0x5A0258255BDE2FB1((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x83F92F0DDD94A22D((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0x5A0258255BDE2FB1((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x83F92F0DDD94A22D((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0x5A0258255BDE2FB1((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0x5A0258255BDE2FB1((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0x5A0258255BDE2FB1((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0x5A0258255BDE2FB1((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0x5A0258255BDE2FB1((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0x5A0258255BDE2FB1((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0x5A0258255BDE2FB1((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0x5A0258255BDE2FB1((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - unk_0x5A0258255BDE2FB1((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - unk_0x5A0258255BDE2FB1((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - unk_0x5A0258255BDE2FB1((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 19018), 0, 1, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - unk_0x5A0258255BDE2FB1((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 22194), 0, 1, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - unk_0x5A0258255BDE2FB1((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 25538), 0, 1, iParam2, "_CASINOPSTAT_INT");
		iVar1 = ((iParam0 - 25538) - unk_0x5A0258255BDE2FB1((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 27258), 0, 1, iParam2, "_CASINOHSTPSTAT_INT");
		iVar1 = ((iParam0 - 27258) - unk_0x5A0258255BDE2FB1((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 28483), 0, 1, iParam2, "_SU20PSTAT_INT");
		iVar1 = ((iParam0 - 28483) - unk_0x5A0258255BDE2FB1((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 30483), 0, 1, iParam2, "_HISLANDPSTAT_INT");
		iVar1 = ((iParam0 - 30483) - unk_0x5A0258255BDE2FB1((iParam0 - 30483)) * 8) * 8;
	}
	else if (iParam0 >= 30707 && iParam0 < 31707)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 30707), 0, 1, iParam2, "_TUNERPSTAT_INT");
		iVar1 = ((iParam0 - 30707) - unk_0x5A0258255BDE2FB1((iParam0 - 30707)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0x5A0258255BDE2FB1((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0x5A0258255BDE2FB1((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0xD99D30290D6BDAC2(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_523(int iParam0)
{
	if (iParam0 == 0)
	{
		return 7642;
	}
	else if (iParam0 == 1)
	{
		return 7643;
	}
	else if (iParam0 == 2)
	{
		return 7644;
	}
	else if (iParam0 == 3)
	{
		return 7645;
	}
	else if (iParam0 == 4)
	{
		return 7646;
	}
	else if (iParam0 == 5)
	{
		return 7647;
	}
	return 7642;
}

void func_524(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_527(func_545(iParam0));
	iVar1 = func_526(iVar0, -1, 0);
	if (iVar1 >= iParam1)
	{
		func_525(iVar0, (iVar1 - iParam1), -1, 1, 0);
	}
}

void func_525(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2555716[iParam0 /*3*/][func_436(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xAC4FD27671081628(iVar0, iParam1, iParam3);
	}
}

int func_526(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 12074)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2555716[iParam0 /*3*/][func_436(iParam1)];
		if (unk_0xD885BEFA31A18D47(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_527(int iParam0)
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

void func_528(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2555716[iParam0 /*3*/][func_436(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xAC4FD27671081628(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1390455[func_436(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1390461[func_436(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1390467[func_436(iParam2)] = iParam1;
			break;
		
		case 791:
			Global_1390473[func_436(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1390479[func_436(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1390425[func_436(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1390431[func_436(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1390437[func_436(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1390443[func_436(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1390449[func_436(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1390395[func_436(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1390401[func_436(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1390407[func_436(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1390413[func_436(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1390419[func_436(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1390485[func_436(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1390491[func_436(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1390497[func_436(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1390503[func_436(iParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1390509[func_436(iParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1390515[func_436(iParam2)] = iParam1;
			break;
		
		case 7235:
			Global_1390521[func_436(iParam2)] = iParam1;
			break;
		
		case 640:
			Global_1390527[func_436(iParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1390533[func_436(iParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2595335[0 /*3*/][func_436(iParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2595335[1 /*3*/][func_436(iParam2)] = iParam1;
			break;
		
		case 2931:
			Global_2595335[2 /*3*/][func_436(iParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2595335[3 /*3*/][func_436(iParam2)] = iParam1;
			break;
		
		case 10441:
			Global_2595490[func_436(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1390539[func_436(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1390545[func_436(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1390551[func_436(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1390557[func_436(iParam2)] = iParam1;
			break;
		
		case 9537:
			Global_1390563[func_436(iParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1390569[func_436(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2595411[0 /*3*/][func_436(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2595411[1 /*3*/][func_436(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2595411[2 /*3*/][func_436(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2595411[3 /*3*/][func_436(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2595411[4 /*3*/][func_436(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2595493[0 /*3*/][func_436(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2595493[1 /*3*/][func_436(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2595493[2 /*3*/][func_436(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2595493[3 /*3*/][func_436(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2595493[4 /*3*/][func_436(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2595509[0 /*3*/][func_436(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2595509[1 /*3*/][func_436(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2595509[2 /*3*/][func_436(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2595509[3 /*3*/][func_436(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2595509[4 /*3*/][func_436(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2595411[5 /*3*/][func_436(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2595335[4 /*3*/][func_436(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2595525[func_436(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2595534[func_436(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2595528[func_436(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2595537[func_436(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2595531[func_436(iParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2595540[func_436(iParam2)] = iParam1;
			break;
		
		case 3691:
			Global_2595543[func_436(iParam2)] = iParam1;
			break;
		
		case 3231:
			Global_2595411[6 /*3*/][func_436(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2595335[5 /*3*/][func_436(iParam2)] = iParam1;
			break;
		
		case 3236:
			Global_2595411[7 /*3*/][func_436(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2595335[6 /*3*/][func_436(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2595411[8 /*3*/][func_436(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2595335[7 /*3*/][func_436(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2595411[9 /*3*/][func_436(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2595335[8 /*3*/][func_436(iParam2)] = iParam1;
			break;
		
		case 4027:
			Global_2595411[10 /*3*/][func_436(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2595335[9 /*3*/][func_436(iParam2)] = iParam1;
			break;
		
		case 4030:
			Global_2595411[11 /*3*/][func_436(iParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2595335[10 /*3*/][func_436(iParam2)] = iParam1;
			break;
		
		case 6111:
			Global_2595411[12 /*3*/][func_436(iParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2595335[11 /*3*/][func_436(iParam2)] = iParam1;
			break;
		
		case 6169:
			Global_2595411[13 /*3*/][func_436(iParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2595335[12 /*3*/][func_436(iParam2)] = iParam1;
			break;
		
		case 6547:
			Global_2595411[14 /*3*/][func_436(iParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2595335[13 /*3*/][func_436(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2595411[15 /*3*/][func_436(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2595335[14 /*3*/][func_436(iParam2)] = iParam1;
			break;
		
		case 6563:
			Global_2595411[16 /*3*/][func_436(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2595335[15 /*3*/][func_436(iParam2)] = iParam1;
			break;
		
		case 6566:
			Global_2595411[17 /*3*/][func_436(iParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2595335[16 /*3*/][func_436(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2595335[17 /*3*/][func_436(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2595335[18 /*3*/][func_436(iParam2)] = iParam1;
			break;
		
		case 7289:
			Global_2595335[19 /*3*/][func_436(iParam2)] = iParam1;
			break;
		
		case 8012:
			Global_2595335[20 /*3*/][func_436(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2595546[func_436(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2595549[func_436(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2595552[func_436(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2595555[func_436(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2595558[func_436(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2595561[func_436(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2595564[func_436(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2595567[func_436(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2595570[func_436(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2595573[func_436(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2595576[func_436(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2595579[func_436(iParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2595582[func_436(iParam2)] = iParam1;
			break;
		
		case 8904:
			Global_2595585[func_436(iParam2)] = iParam1;
			break;
		
		case 8536:
			Global_2595335[21 /*3*/][func_436(iParam2)] = iParam1;
			break;
		
		case 8981:
			Global_2595411[23 /*3*/][func_436(iParam2)] = iParam1;
			break;
		
		case 8979:
			Global_2595335[22 /*3*/][func_436(iParam2)] = iParam1;
			break;
		
		case 8984:
			Global_2595411[24 /*3*/][func_436(iParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2595335[23 /*3*/][func_436(iParam2)] = iParam1;
			break;
		
		case 9623:
			Global_2595335[24 /*3*/][func_436(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_529(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3643;
		
		case 1:
			return 3644;
		
		case 2:
			return 3645;
		
		case 3:
			return 3646;
		
		case 4:
			return 3647;
		
		default:
	}
	return 12074;
}

void func_530(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
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
	bool bVar9;
	int iVar10;
	int iVar11;
	
	if (bParam4)
	{
		iVar0 = func_546(iParam0);
		while (iVar0 <= (iParam2 - 1))
		{
			if (iVar0 < func_543(iParam0))
			{
				if (iVar2 < iParam3)
				{
					if (func_541(func_542(iParam0), iVar0))
					{
						iVar3 = func_540(iParam5);
						func_538(iParam1, iVar0, func_539(iVar3), 1, -1);
						iVar2++;
					}
					else
					{
						iVar4 = 0;
						while (iVar4 <= (iParam2 - 1))
						{
							if (func_541(func_542(iParam0), iVar4))
							{
								if (!func_535(func_536(func_537(iParam1, iVar4, -1, -1))))
								{
									iVar5 = func_537(iParam1, iVar4, -1, -1);
									iVar6 = func_540(iParam5);
									func_538(iParam1, iVar4, func_539(iVar6), 1, -1);
									func_538(iParam1, (iParam2 - 1), iVar5, 1, -1);
									iVar2++;
									return;
								}
							}
							iVar4++;
						}
					}
				}
				else
				{
					iVar7 = 0;
					iVar8 = func_532(iParam0, iVar0, iParam5);
					if (iVar0 > 0 && !func_531(func_542(iParam0), iVar0))
					{
						while (iVar8 == func_536(func_537(iParam1, (iVar0 - 1), -1, -1)) && iVar7 < 10)
						{
							iVar8 = func_532(iParam0, iVar0, iParam5);
							iVar7++;
						}
					}
					if (iVar8 != 0)
					{
						if (func_537(iParam1, iVar0, -1, -1) == 0)
						{
							func_538(iParam1, iVar0, func_539(iVar8), 1, -1);
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = iParam2;
		while (iVar0 <= (func_546(iParam0) - 1))
		{
			if (iVar0 < func_543(iParam0))
			{
				if (iParam3 > 0)
				{
					iVar1 = 0;
					while (iVar1 <= (func_546(iParam0) - 1))
					{
						if (func_535(func_536(func_537(iParam1, iVar1, -1, -1))))
						{
							if (!func_535(func_536(func_537(iParam1, iVar0, -1, -1))))
							{
								iVar10 = func_537(iParam1, iVar1, -1, -1);
								func_538(iParam1, iVar1, func_537(iParam1, iVar0, -1, -1), 1, -1);
								func_538(iParam1, iVar0, iVar10, 1, -1);
							}
						}
						iVar1++;
					}
				}
				else if (func_535(func_536(func_537(iParam1, iVar0, -1, -1))))
				{
					bVar9 = false;
					iVar1 = 0;
					while (iVar1 <= 5)
					{
						if (!bVar9)
						{
							if (iParam2 >= iVar1)
							{
								if (func_541(func_542(iParam0), iVar1))
								{
									if (!func_535(func_536(func_537(iParam1, iVar1, -1, -1))))
									{
										iVar11 = func_537(iParam1, iVar1, -1, -1);
										func_538(iParam1, iVar1, func_537(iParam1, iVar0, -1, -1), 1, -1);
										func_538(iParam1, iVar0, iVar11, 1, -1);
										bVar9 = true;
									}
								}
							}
						}
						iVar1++;
					}
				}
			}
			iVar0++;
		}
		iVar0 = iParam2;
		while (iVar0 <= (func_546(iParam0) - 1))
		{
			if (iVar0 < func_543(iParam0))
			{
				func_538(iParam1, iVar0, func_539(0), 1, -1);
			}
			iVar0++;
		}
	}
	Global_1683804 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Global_1683800[iVar0] = 0;
		iVar0++;
	}
}

int func_531(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 0;
		
		case 2:
			if (((((((iParam1 > 13 && iParam1 < 21) || (iParam1 > 34 && iParam1 < 42)) || (iParam1 > 55 && iParam1 < 63)) || (iParam1 > 76 && iParam1 < 84)) || (iParam1 > 89 && iParam1 < 93)) || (iParam1 > 98 && iParam1 < 102)) || (iParam1 > 107 && iParam1 < 109))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_532(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	bool bVar1;
	var uVar2;
	
	iVar0 = unk_0xB36B8558948EA7A8(0, 2);
	if (func_531(func_542(iParam0), iParam1))
	{
		iVar0 = unk_0xB36B8558948EA7A8(0, 4);
	}
	bVar1 = false;
	if ((iVar0 == 1 || iVar0 == 2) || iVar0 == 3)
	{
		bVar1 = true;
	}
	uVar2 = func_534(func_542(iParam0), iParam1);
	return func_533(uParam2, uVar2, bVar1);
}

int func_533(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0xB36B8558948EA7A8(0, 2);
	iVar1 = uParam0;
	iVar2 = uParam1;
	if (bParam2)
	{
		switch (iVar1)
		{
			case 0:
				switch (iVar2)
				{
					case 0:
						switch (iVar0)
						{
							case 0:
								return joaat("ex_prop_crate_closed_sc");
							
							case 1:
								return joaat("ex_prop_crate_closed_ms");
							
							default:
						}
						break;
					
					case 1:
						return joaat("ex_prop_crate_closed_bc");
				}
				break;
			
			case 1:
				switch (iVar2)
				{
					case 0:
						switch (iVar0)
						{
							case 0:
								return joaat("ex_prop_crate_closed_sc");
							
							case 1:
								return -1958;
							
							default:
						}
						break;
					
					case 1:
						return joaat("ex_prop_crate_closed_bc");
				}
				break;
			
			case 4:
				switch (iVar2)
				{
					case 0:
						switch (iVar0)
						{
							case 0:
								return joaat("ex_prop_crate_closed_sc");
							
							case 1:
								return joaat("ex_prop_crate_closed_mw");
							
							default:
						}
						break;
					
					case 1:
						return joaat("ex_prop_crate_closed_bc");
				}
				break;
			}
	}
	switch (iVar1)
	{
		case 0:
			switch (iVar2)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_med_sc");
						
						case 1:
							return joaat("ex_prop_crate_biohazard_sc");
						
						default:
					}
					break;
				
				case 1:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_med_bc");
						
						case 1:
							return joaat("ex_prop_crate_biohazard_bc");
						
						default:
					}
					break;
			}
			break;
		
		case 1:
			switch (iVar2)
			{
				case 0:
					return joaat("ex_prop_crate_tob_sc");
				
				case 1:
					return joaat("ex_prop_crate_tob_bc");
				
				default:
			}
			break;
		
		case 2:
			switch (iVar2)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_art_sc");
						
						case 1:
							return joaat("ex_prop_crate_art_02_sc");
						
						default:
					}
					break;
				
				case 1:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_art_bc");
						
						case 1:
							return joaat("ex_prop_crate_art_02_bc");
						
						default:
					}
					break;
			}
			break;
		
		case 3:
			switch (iVar2)
			{
				case 0:
					return joaat("ex_prop_crate_elec_sc");
				
				case 1:
					return joaat("ex_prop_crate_elec_bc");
				
				default:
			}
			break;
		
		case 4:
			switch (iVar2)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_ammo_sc");
						
						case 1:
							return joaat("ex_prop_crate_expl_sc");
						
						default:
					}
					break;
				
				case 1:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_ammo_bc");
						
						case 1:
							return joaat("ex_prop_crate_expl_bc");
						
						default:
					}
					break;
			}
			break;
		
		case 5:
			iVar0 = unk_0xB36B8558948EA7A8(0, 3);
			switch (iVar2)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_narc_sc");
						
						case 1:
							return joaat("ex_prop_crate_pharma_sc");
						
						case 2:
							return joaat("ex_prop_crate_highend_pharma_sc");
						
						default:
					}
					break;
				
				case 1:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_narc_bc");
						
						case 1:
							return joaat("ex_prop_crate_pharma_bc");
						
						case 2:
							return joaat("ex_prop_crate_highend_pharma_bc");
						
						default:
					}
					break;
			}
			break;
		
		case 6:
			switch (iVar2)
			{
				case 0:
					return joaat("ex_prop_crate_gems_sc");
				
				case 1:
					return joaat("ex_prop_crate_gems_bc");
				
				default:
			}
			break;
		
		case 7:
			switch (iVar2)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_wlife_sc");
						
						case 1:
							return joaat("ex_prop_crate_furjacket_sc");
						
						default:
					}
					break;
				
				case 1:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_wlife_bc");
						
						case 1:
							return joaat("ex_prop_crate_furjacket_bc");
						
						default:
					}
					break;
			}
			break;
		
		case 8:
			switch (iVar2)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_money_sc");
						
						case 1:
							return joaat("ex_prop_crate_clothing_sc");
						
						default:
					}
					break;
				
				case 1:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_money_bc");
						
						case 1:
							return joaat("ex_prop_crate_clothing_bc");
						
						default:
					}
					break;
			}
			break;
		
		case 9:
			switch (iVar2)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_jewels_sc");
						
						case 1:
							return joaat("ex_prop_crate_jewels_racks_sc");
						
						default:
					}
					break;
				
				case 1:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_jewels_bc");
						
						case 1:
							return joaat("ex_prop_crate_jewels_racks_bc");
						
						default:
					}
					break;
			}
			break;
		
		case 10:
			switch (iVar2)
			{
				case 0:
					return joaat("ex_prop_crate_bull_sc_02");
				
				case 1:
					return joaat("ex_prop_crate_bull_bc_02");
				
				default:
			}
			break;
	}
	return 0;
}

int func_534(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return unk_0xB36B8558948EA7A8(0, 2);
		
		case 2:
			if (((((((iParam1 > 13 && iParam1 < 21) || (iParam1 > 34 && iParam1 < 42)) || (iParam1 > 55 && iParam1 < 63)) || (iParam1 > 76 && iParam1 < 84)) || (iParam1 > 89 && iParam1 < 93)) || (iParam1 > 98 && iParam1 < 102)) || (iParam1 > 107 && iParam1 < 109))
			{
				return 1;
			}
			else
			{
				return unk_0xB36B8558948EA7A8(0, 2);
			}
			break;
	}
	return -1;
}

int func_535(int iParam0)
{
	switch (iParam0)
	{
		case joaat("ex_prop_crate_oegg"):
		case joaat("ex_prop_crate_minig"):
		case joaat("ex_prop_crate_xldiam"):
		case joaat("ex_prop_crate_shide"):
		case joaat("ex_prop_crate_freel"):
		case joaat("ex_prop_crate_watch"):
			return 1;
		
		default:
	}
	return 0;
}

int func_536(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return joaat("ex_prop_crate_closed_sc");
		
		case 2:
			return joaat("ex_prop_crate_med_sc");
		
		case 3:
			return joaat("ex_prop_crate_tob_sc");
		
		case 4:
			return joaat("ex_prop_crate_art_sc");
		
		case 5:
			return joaat("ex_prop_crate_elec_sc");
		
		case 6:
			return joaat("ex_prop_crate_ammo_sc");
		
		case 7:
			return joaat("ex_prop_crate_narc_sc");
		
		case 8:
			return joaat("ex_prop_crate_gems_sc");
		
		case 9:
			return joaat("ex_prop_crate_wlife_sc");
		
		case 10:
			return joaat("ex_prop_crate_jewels_sc");
		
		case 11:
			return joaat("ex_prop_crate_bull_sc_02");
		
		case 12:
			return joaat("ex_prop_crate_closed_bc");
		
		case 13:
			return joaat("ex_prop_crate_med_bc");
		
		case 14:
			return joaat("ex_prop_crate_tob_bc");
		
		case 15:
			return joaat("ex_prop_crate_art_bc");
		
		case 16:
			return joaat("ex_prop_crate_elec_bc");
		
		case 17:
			return joaat("ex_prop_crate_ammo_bc");
		
		case 18:
			return joaat("ex_prop_crate_narc_bc");
		
		case 19:
			return joaat("ex_prop_crate_gems_bc");
		
		case 20:
			return joaat("ex_prop_crate_wlife_bc");
		
		case 21:
			return joaat("ex_prop_crate_jewels_bc");
		
		case 22:
			return joaat("ex_prop_crate_bull_bc_02");
		
		case 23:
			return joaat("ex_prop_crate_oegg");
		
		case 24:
			return joaat("ex_prop_crate_minig");
		
		case 25:
			return joaat("ex_prop_crate_xldiam");
		
		case 26:
			return joaat("ex_prop_crate_shide");
		
		case 27:
			return joaat("ex_prop_crate_freel");
		
		case 28:
			return joaat("ex_prop_crate_watch");
		
		case 29:
			return joaat("ex_prop_crate_expl_sc");
		
		case 30:
			return joaat("ex_prop_crate_expl_bc");
		
		case 31:
			return joaat("ex_prop_crate_jewels_racks_sc");
		
		case 32:
			return joaat("ex_prop_crate_jewels_racks_bc");
		
		case 33:
			return joaat("ex_prop_crate_furjacket_sc");
		
		case 34:
			return joaat("ex_prop_crate_furjacket_bc");
		
		case 35:
			return joaat("ex_prop_crate_pharma_sc");
		
		case 36:
			return joaat("ex_prop_crate_pharma_bc");
		
		case 37:
			return joaat("ex_prop_crate_highend_pharma_sc");
		
		case 38:
			return joaat("ex_prop_crate_highend_pharma_bc");
		
		case 39:
			return joaat("ex_prop_crate_biohazard_sc");
		
		case 40:
			return joaat("ex_prop_crate_biohazard_bc");
		
		case 41:
			return joaat("ex_prop_crate_clothing_sc");
		
		case 42:
			return joaat("ex_prop_crate_clothing_bc");
		
		case 43:
			return joaat("ex_prop_crate_money_sc");
		
		case 44:
			return joaat("ex_prop_crate_money_bc");
		
		case 45:
			return joaat("ex_prop_crate_closed_ms");
		
		case 46:
			return -1958;
		
		case 47:
			return joaat("ex_prop_crate_closed_mw");
		
		case 48:
			return joaat("ex_prop_crate_art_02_bc");
		
		case 49:
			return joaat("ex_prop_crate_art_02_sc");
		
		default:
	}
	return 0;
}

int func_537(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	char cVar2[64];
	int iVar3;
	int iVar4;
	
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			iParam1 += 111;
			break;
		
		case 2:
			iParam1 += 222;
			break;
		
		case 3:
			iParam1 += 333;
			break;
		
		case 4:
			iParam1 += 444;
			break;
	}
	iVar0 = 0;
	iVar1 = func_36();
	if (iParam3 > -1)
	{
		iVar1 = iParam3;
	}
	StringCopy(&cVar2, "MP", 64);
	StringIntConCat(&cVar2, iVar1, 64);
	StringConCat(&cVar2, "_WAREHOUSE_CRATES", 64);
	StringIntConCat(&cVar2, (iParam1 / 8), 64);
	iVar3 = unk_0x15173FB88ABC94F9(&cVar2);
	iVar4 = (8 * (iParam1 % 8));
	if (0 != iVar3)
	{
		if (!unk_0x167E0AAAC47615D0(iVar3, &iVar0, iVar4, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

var func_538(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	int iVar1;
	char cVar2[64];
	int iVar3;
	int iVar4;
	
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			iParam1 += 111;
			break;
		
		case 2:
			iParam1 += 222;
			break;
		
		case 3:
			iParam1 += 333;
			break;
		
		case 4:
			iParam1 += 444;
			break;
	}
	iVar1 = func_36();
	if (iParam4 > -1)
	{
		iVar1 = iParam4;
	}
	StringCopy(&cVar2, "MP", 64);
	StringIntConCat(&cVar2, iVar1, 64);
	StringConCat(&cVar2, "_WAREHOUSE_CRATES", 64);
	StringIntConCat(&cVar2, (iParam1 / 8), 64);
	iVar3 = unk_0x15173FB88ABC94F9(&cVar2);
	iVar4 = (8 * (iParam1 % 8));
	if (iParam2 < 0)
	{
		iParam2 = 255;
	}
	if (0 != iVar3)
	{
		uVar0 = unk_0xD99D30290D6BDAC2(iVar3, iParam2, iVar4, 8, iParam3);
	}
	return uVar0;
}

int func_539(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case joaat("ex_prop_crate_closed_sc"):
			return 1;
		
		case joaat("ex_prop_crate_med_sc"):
			return 2;
		
		case joaat("ex_prop_crate_tob_sc"):
			return 3;
		
		case joaat("ex_prop_crate_art_sc"):
			return 4;
		
		case joaat("ex_prop_crate_elec_sc"):
			return 5;
		
		case joaat("ex_prop_crate_ammo_sc"):
			return 6;
		
		case joaat("ex_prop_crate_narc_sc"):
			return 7;
		
		case joaat("ex_prop_crate_gems_sc"):
			return 8;
		
		case joaat("ex_prop_crate_wlife_sc"):
			return 9;
		
		case joaat("ex_prop_crate_jewels_sc"):
			return 10;
		
		case joaat("ex_prop_crate_bull_sc_02"):
			return 11;
		
		case joaat("ex_prop_crate_closed_bc"):
			return 12;
		
		case joaat("ex_prop_crate_med_bc"):
			return 13;
		
		case joaat("ex_prop_crate_tob_bc"):
			return 14;
		
		case joaat("ex_prop_crate_art_bc"):
			return 15;
		
		case joaat("ex_prop_crate_elec_bc"):
			return 16;
		
		case joaat("ex_prop_crate_ammo_bc"):
			return 17;
		
		case joaat("ex_prop_crate_narc_bc"):
			return 18;
		
		case joaat("ex_prop_crate_gems_bc"):
			return 19;
		
		case joaat("ex_prop_crate_wlife_bc"):
			return 20;
		
		case joaat("ex_prop_crate_jewels_bc"):
			return 21;
		
		case joaat("ex_prop_crate_bull_bc_02"):
			return 22;
		
		case joaat("ex_prop_crate_oegg"):
			return 23;
		
		case joaat("ex_prop_crate_minig"):
			return 24;
		
		case joaat("ex_prop_crate_xldiam"):
			return 25;
		
		case joaat("ex_prop_crate_shide"):
			return 26;
		
		case joaat("ex_prop_crate_freel"):
			return 27;
		
		case joaat("ex_prop_crate_watch"):
			return 28;
		
		case joaat("ex_prop_crate_expl_sc"):
			return 29;
		
		case joaat("ex_prop_crate_expl_bc"):
			return 30;
		
		case joaat("ex_prop_crate_jewels_racks_sc"):
			return 31;
		
		case joaat("ex_prop_crate_jewels_racks_bc"):
			return 32;
		
		case joaat("ex_prop_crate_furjacket_sc"):
			return 33;
		
		case joaat("ex_prop_crate_furjacket_bc"):
			return 34;
		
		case joaat("ex_prop_crate_pharma_sc"):
			return 35;
		
		case joaat("ex_prop_crate_pharma_bc"):
			return 36;
		
		case joaat("ex_prop_crate_highend_pharma_sc"):
			return 37;
		
		case joaat("ex_prop_crate_highend_pharma_bc"):
			return 38;
		
		case joaat("ex_prop_crate_biohazard_sc"):
			return 39;
		
		case joaat("ex_prop_crate_biohazard_bc"):
			return 40;
		
		case joaat("ex_prop_crate_clothing_sc"):
			return 41;
		
		case joaat("ex_prop_crate_clothing_bc"):
			return 42;
		
		case joaat("ex_prop_crate_money_sc"):
			return 43;
		
		case joaat("ex_prop_crate_money_bc"):
			return 44;
		
		case joaat("ex_prop_crate_closed_ms"):
			return 45;
		
		case joaat("ex_prop_crate_closed_rw"):
			return 46;
		
		case joaat("ex_prop_crate_closed_mw"):
			return 47;
		
		case joaat("ex_prop_crate_art_02_bc"):
			return 48;
		
		case joaat("ex_prop_crate_art_02_sc"):
			return 49;
		
		default:
	}
	return 0;
}

int func_540(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 2:
			return joaat("ex_prop_crate_oegg");
		
		case 4:
			return joaat("ex_prop_crate_minig");
		
		case 6:
			return joaat("ex_prop_crate_xldiam");
		
		case 7:
			return joaat("ex_prop_crate_shide");
		
		case 8:
			return joaat("ex_prop_crate_freel");
		
		case 9:
			return joaat("ex_prop_crate_watch");
		
		default:
	}
	return 0;
}

int func_541(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 1;
		
		case 2:
			if ((((((iParam1 < 7 || (iParam1 > 20 && iParam1 < 28)) || (iParam1 > 41 && iParam1 < 49)) || (iParam1 > 62 && iParam1 < 70)) || (iParam1 > 83 && iParam1 < 87)) || (iParam1 > 92 && iParam1 < 96)) || (iParam1 > 101 && iParam1 < 105))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_542(int iParam0)
{
	if (func_42(iParam0))
	{
		switch (iParam0)
		{
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 9:
				return 0;
			
			case 10:
			case 11:
			case 12:
			case 13:
			case 14:
			case 15:
			case 21:
			case 7:
				return 1;
			
			case 16:
			case 17:
			case 18:
			case 19:
			case 20:
			case 22:
			case 6:
			case 8:
				return 2;
			}
		
		default:
	}
	return 3;
}

int func_543(int iParam0)
{
	int iVar0;
	
	if (func_42(iParam0))
	{
		iVar0 = func_542(iParam0);
		if (iVar0 == 0)
		{
			return 16;
		}
		else if (iVar0 == 1)
		{
			return 42;
		}
		else
		{
			return 111;
		}
	}
	return 0;
}

int func_544()
{
	if (unk_0x3640D836D145B814())
	{
		return unk_0x57FB3D94D590E8BC();
	}
	return 0;
}

int func_545(int iParam0)
{
	int iVar0;
	
	if (func_42(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_108[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_546(int iParam0)
{
	int iVar0;
	
	if (func_42(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (iParam0 == Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_108[iVar0 /*3*/])
			{
				return Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_108[iVar0 /*3*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

float func_547()
{
	if (!func_440())
	{
		return (to_float(Global_262145.f_16311) * 0.01f);
	}
	return (to_float(Global_262145.f_16312) * 0.01f);
}

int func_548()
{
	int iVar0;
	
	if (!func_34(unk_0x1146A9AE09CE2B14(), 0))
	{
		if (!func_549(1, 1, 1, 0))
		{
			if (unk_0x234B68AC2E35ED5A(Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_1, 12))
			{
				unk_0xC664C0067EEAB8D1(&(Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_1), 12);
			}
			return 0;
		}
		if (func_431())
		{
			if (unk_0x234B68AC2E35ED5A(Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_1, 12))
			{
				unk_0xC664C0067EEAB8D1(&(Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_1), 12);
			}
			return 0;
		}
		if (!unk_0x234B68AC2E35ED5A(Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_1, 12))
		{
			unk_0x191DDA30577F440A(&(Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_1), 12);
		}
	}
	else
	{
		iVar0 = func_439();
		if (iVar0 == -1)
		{
			return 0;
		}
		if (!unk_0x234B68AC2E35ED5A(Local_125[iVar0 /*11*/].f_1, 12))
		{
			return 0;
		}
	}
	return 1;
}

int func_549(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_597(unk_0x1146A9AE09CE2B14(), 29))
	{
		return 0;
	}
	if (func_268(unk_0x1146A9AE09CE2B14(), 21))
	{
		return 0;
	}
	if (func_268(unk_0x1146A9AE09CE2B14(), 25))
	{
		return 0;
	}
	if (bParam2)
	{
		if (unk_0xD09C9D030AFD3F25())
		{
			return 0;
		}
	}
	if (!func_343(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x2D61488C347F8402())
		{
			return 0;
		}
	}
	if (func_596(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if (func_595())
	{
		return 0;
	}
	if (func_418())
	{
		return 0;
	}
	if (func_594())
	{
		return 0;
	}
	if (func_412())
	{
		return 0;
	}
	if (unk_0xE45310E861787FC2())
	{
		return 0;
	}
	if (func_103(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if (!func_414())
	{
		return 0;
	}
	if (func_268(unk_0x1146A9AE09CE2B14(), 0) || func_268(unk_0x1146A9AE09CE2B14(), 3))
	{
		return 0;
	}
	if ((func_268(unk_0x1146A9AE09CE2B14(), 12) || func_268(unk_0x1146A9AE09CE2B14(), 14)) || func_268(unk_0x1146A9AE09CE2B14(), 13))
	{
		return 0;
	}
	if (func_591(unk_0x1146A9AE09CE2B14(), 0, -1))
	{
		if (!func_559())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_558())
		{
			return 0;
		}
	}
	if (Global_1669334)
	{
		return 0;
	}
	if (func_557(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if (func_556())
	{
		return 0;
	}
	if (func_555(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if ((func_156(unk_0x1146A9AE09CE2B14()) && func_153(unk_0x1146A9AE09CE2B14()) == 123) && !bParam3)
	{
		return 0;
	}
	if (func_554())
	{
		return 0;
	}
	if (unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_27, 4))
	{
		return 0;
	}
	if (func_553(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if (func_238(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if (!func_237(unk_0x1146A9AE09CE2B14()))
	{
		if (func_552(unk_0x1146A9AE09CE2B14()))
		{
			return 0;
		}
	}
	if (func_550())
	{
		return 0;
	}
	return 1;
}

bool func_550()
{
	return func_551() == 1;
}

int func_551()
{
	return Global_1710155;
}

int func_552(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1627455[iVar0 /*105*/].f_77.f_27 != 0;
	}
	return 0;
}

int func_553(int iParam0)
{
	if (Global_2426865[iParam0 /*449*/].f_270.f_4 != 0 || Global_2426865[iParam0 /*449*/].f_270.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_554()
{
	return Global_1683970.f_4477 != -1;
}

int func_555(int iParam0)
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

int func_556()
{
	if (Global_4254512.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_557(int iParam0)
{
	if (!func_1340(iParam0, 0, 1))
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_873, 2);
}

bool func_558()
{
	return Global_99422.f_364 > 0;
}

int func_559()
{
	int iVar0;
	
	iVar0 = func_248(unk_0x1146A9AE09CE2B14());
	if (((func_590(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_29) || func_589(unk_0x1146A9AE09CE2B14())) || func_588(unk_0x1146A9AE09CE2B14())) || func_583(unk_0x1146A9AE09CE2B14()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_582(unk_0x1146A9AE09CE2B14()))
	{
		if (func_448(iVar0) || func_581(iVar0))
		{
			return 1;
		}
	}
	if (func_476(unk_0x1146A9AE09CE2B14()))
	{
		if (func_581(iVar0))
		{
			return 1;
		}
	}
	if (func_580(unk_0x1146A9AE09CE2B14()))
	{
		if (func_579(iVar0))
		{
			return 1;
		}
	}
	if (func_578(unk_0x1146A9AE09CE2B14()))
	{
		if (func_577(iVar0))
		{
			return 1;
		}
	}
	if (func_576(unk_0x1146A9AE09CE2B14()))
	{
		if (func_575(iVar0))
		{
			return 1;
		}
	}
	if (func_574(unk_0x1146A9AE09CE2B14()))
	{
		if (func_573(iVar0))
		{
			return 1;
		}
	}
	if (func_157(unk_0x1146A9AE09CE2B14(), 0))
	{
		if (func_447(iVar0))
		{
			if (func_571(unk_0x1146A9AE09CE2B14()))
			{
				return 1;
			}
		}
	}
	if (func_570(unk_0x1146A9AE09CE2B14()))
	{
		if (func_569(iVar0))
		{
			return 1;
		}
		if (func_568(iVar0))
		{
			return 1;
		}
		if (func_567())
		{
			return 1;
		}
	}
	if (func_566(unk_0x1146A9AE09CE2B14()))
	{
		if (func_565())
		{
			return 1;
		}
	}
	if (func_564(unk_0x1146A9AE09CE2B14()))
	{
		if (func_568(iVar0))
		{
			return 1;
		}
	}
	if (func_563(unk_0x1146A9AE09CE2B14()))
	{
		if (func_562(iVar0))
		{
			return 1;
		}
	}
	if (func_561(unk_0x1146A9AE09CE2B14()))
	{
		if (func_560(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_560(int iParam0)
{
	switch (iParam0)
	{
		case 276:
			return 1;
		
		default:
	}
	return 0;
}

int func_561(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (func_1340(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_152(Global_2426865[iParam0 /*449*/].f_319.f_6) == 22;
			}
		}
	}
	return 0;
}

int func_562(int iParam0)
{
	switch (iParam0)
	{
		case 271:
			return 1;
		
		default:
	}
	return 0;
}

int func_563(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (func_1340(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_152(Global_2426865[iParam0 /*449*/].f_319.f_6) == 21;
			}
		}
	}
	return 0;
}

int func_564(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (func_1340(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1 && Global_2426865[iParam0 /*449*/].f_319.f_9 != func_57())
			{
				return func_152(Global_2426865[iParam0 /*449*/].f_319.f_6) == 20;
			}
		}
	}
	return 0;
}

bool func_565()
{
	return Global_2544210.f_6695;
}

int func_566(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (func_1340(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_152(Global_2426865[iParam0 /*449*/].f_319.f_6) == 16;
			}
		}
	}
	return 0;
}

bool func_567()
{
	return Global_2544210.f_6694;
}

int func_568(int iParam0)
{
	switch (iParam0)
	{
		case 256:
			return 1;
		
		default:
	}
	return 0;
}

int func_569(int iParam0)
{
	switch (iParam0)
	{
		case 158:
			return 1;
		
		default:
	}
	return 0;
}

int func_570(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (func_1340(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_152(Global_2426865[iParam0 /*449*/].f_319.f_6) == 14;
			}
		}
	}
	return 0;
}

int func_571(int iParam0)
{
	if (func_572(iParam0) != func_57())
	{
		return func_572(iParam0) == func_58(iParam0);
	}
	return 0;
}

int func_572(int iParam0)
{
	return Global_1630816[iParam0 /*597*/].f_11.f_35;
}

int func_573(int iParam0)
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

int func_574(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (func_1340(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_152(Global_2426865[iParam0 /*449*/].f_319.f_6) == 11;
			}
		}
	}
	return 0;
}

int func_575(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_576(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (func_1340(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_152(Global_2426865[iParam0 /*449*/].f_319.f_6) == 9;
			}
		}
	}
	return 0;
}

int func_577(int iParam0)
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

int func_578(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (func_1340(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_152(Global_2426865[iParam0 /*449*/].f_319.f_6) == 7;
			}
		}
	}
	return 0;
}

int func_579(int iParam0)
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

int func_580(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (func_1340(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_152(Global_2426865[iParam0 /*449*/].f_319.f_6) == 4;
			}
		}
	}
	return 0;
}

int func_581(int iParam0)
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

int func_582(int iParam0)
{
	if (func_169(Global_1590908[iParam0 /*874*/].f_267.f_29, -1))
	{
		return 1;
	}
	return 0;
}

int func_583(int iParam0)
{
	if (func_584(Global_1590908[iParam0 /*874*/].f_267.f_29, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_584(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_585(unk_0x1146A9AE09CE2B14(), 0);
	}
	if (bParam1)
	{
		if (func_585(unk_0x1146A9AE09CE2B14(), 0))
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

bool func_585(int iParam0, bool bParam1)
{
	if (Global_1590744 != func_57())
	{
		if (!func_587(Global_1590744))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0x1146A9AE09CE2B14() != Global_1590744)
			{
				if (unk_0x234B68AC2E35ED5A(Global_2426865[Global_1590744 /*449*/].f_199, 24) || func_586(Global_1590744))
				{
					return 1;
				}
			}
		}
	}
	return unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_199, 24);
}

int func_586(int iParam0)
{
	if (iParam0 != func_57())
	{
		return unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_199, 9);
	}
	return 0;
}

int func_587(int iParam0)
{
	if (iParam0 != func_57())
	{
		return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_353, 2);
	}
	return 0;
}

int func_588(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (func_1340(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_152(Global_2426865[iParam0 /*449*/].f_319.f_6) == 1;
			}
		}
	}
	return 0;
}

int func_589(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (func_1340(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_152(Global_2426865[iParam0 /*449*/].f_319.f_6) == 0;
			}
		}
	}
	return 0;
}

int func_590(int iParam0)
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

int func_591(int iParam0, bool bParam1, int iParam2)
{
	if (Global_1590908[iParam0 /*874*/].f_267.f_29 > 0)
	{
		if (bParam1)
		{
			if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_27, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
	{
		if (iParam2 == -1 || func_152(Global_2426865[iParam0 /*449*/].f_319.f_6) != iParam2)
		{
			if (bParam1)
			{
				return func_592(iParam0) == iParam0;
			}
			return 1;
		}
	}
	return 0;
}

int func_592(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_57())
	{
		return iParam0;
	}
	if (func_593(iParam0) != -1)
	{
		iVar0 = func_152(func_593(iParam0));
		if ((iVar0 == 2 || iVar0 == 1) || iVar0 == 0)
		{
			if (func_319(iParam0, 0))
			{
				return func_58(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_57();
		}
		return Global_2426865[iParam0 /*449*/].f_319.f_9;
	}
	return func_57();
}

int func_593(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (func_1340(iParam0, 1, 1))
		{
			return Global_2426865[iParam0 /*449*/].f_319.f_6;
		}
		else if (((Global_1312902 || Global_2405077.f_2678) && iParam0 == unk_0x1146A9AE09CE2B14()) && func_1340(iParam0, 1, 0))
		{
			return Global_2426865[iParam0 /*449*/].f_319.f_6;
		}
	}
	return -1;
}

bool func_594()
{
	return Global_1312902;
}

bool func_595()
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_36.f_18, 0);
}

int func_596(int iParam0)
{
	if (func_102(iParam0, 1, 0))
	{
		if (Global_1590908[iParam0 /*874*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_597(int iParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_11.f_5, iParam1);
}

int func_598(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	func_637(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_363(&(Var0.f_69), iParam7);
	}
	return func_599(&Var0);
}

int func_599(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2441237.f_3163)
		{
			return 0;
		}
	}
	func_610(uParam0, uParam0->f_17);
	func_609(uParam0);
	if (func_53())
	{
		func_609(uParam0);
	}
	if (func_608(uParam0->f_1))
	{
		func_601();
		if (Global_2441237.f_2841[0 /*80*/].f_2 == 0)
		{
			Global_2441237.f_2841[0 /*80*/] = { *uParam0 };
			if (func_600(uParam0->f_69, 8192))
			{
				Global_1669340 = 1;
			}
			return 1;
		}
		if (((Global_2441237.f_2841[0 /*80*/].f_1 == 13 || Global_2441237.f_2841[0 /*80*/].f_1 == 53) || Global_2441237.f_2841[0 /*80*/].f_1 == 54) || Global_2441237.f_2841[0 /*80*/].f_1 == 58)
		{
			Global_2441237.f_2841[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2441237.f_2841[iVar0 + 1 /*80*/] = { Global_2441237.f_2841[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2441237.f_2841[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2441237.f_2841[iVar0 /*80*/].f_2 == 0)
		{
			Global_2441237.f_2841[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_601();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_363(&(Global_2441237.f_2841[iVar0 /*80*/].f_69), 2);
				Global_2441237.f_2841[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_600(uParam0->f_69, 128))
			{
				if (func_368(Global_2441237.f_2841[iVar0 /*80*/].f_1))
				{
					Global_2441237.f_2841[iVar0 /*80*/].f_2 = 5;
					func_363(&(Global_2441237.f_2841[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_600(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_601()
{
	bool bVar0;
	
	if (Global_2441237.f_3164)
	{
		return;
	}
	if (!Global_77516)
	{
		Global_77516 = 1;
		bVar0 = true;
	}
	func_602();
	if (bVar0)
	{
		Global_77516 = 0;
	}
}

void func_602()
{
	Global_2441237.f_3165 = 0;
	Global_2441237.f_3165.f_578 = 0;
	func_606(&(Global_2441237.f_3165.f_1));
	Global_2441237.f_3165.f_1.f_1 = 0;
	func_603(&(Global_2441237.f_3165.f_1), 1);
}

void func_603(var uParam0, int iParam1)
{
	if (uParam0->f_1 != 0)
	{
		unk_0x3D9BC07C93913E04(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if ((uParam0->f_562 || iParam1) && uParam0->f_4 != 0)
	{
		if (unk_0x3640D836D145B814())
		{
			unk_0x704F8697BB515627(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0x9D7453DF8B7E9E0B(0);
			unk_0x392841D58D2EED1D();
		}
		unk_0x3D9BC07C93913E04(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		unk_0xA82C5CF50055A1B4(0);
		uParam0->f_564 = 0;
	}
	if (!Global_77516)
	{
		if (!unk_0x06883FE08D5D5F4A(unk_0x638BDC79E655C1C2()))
		{
			if (!Global_77517)
			{
				if (unk_0x8B6A925F148E0E94() && !func_605(0))
				{
					unk_0x6E1E3A5B1F9AB95B(800);
				}
			}
		}
	}
	func_604(0);
}

void func_604(int iParam0)
{
	Global_77508 = iParam0;
	Global_77509 = iParam0;
}

bool func_605(bool bParam0)
{
	if (!bParam0 && unk_0x636F1F53CC61D2C9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x234B68AC2E35ED5A(Global_77496, 0);
}

void func_606(var uParam0)
{
	func_607(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_607(var uParam0)
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

int func_608(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

void func_609(var uParam0)
{
	if (func_370(uParam0->f_1))
	{
		uParam0->f_72 = func_324();
	}
}

void func_610(var uParam0, int iParam1)
{
	if (func_370(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_57() || !func_1340(iParam1, 0, 1))
	{
		return;
	}
	if (func_368(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_611(iParam1, -2, 0, 0, 0);
		}
	}
}

int func_611(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	
	if (func_105(iParam0) && !bParam4)
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
		iVar0 = unk_0x7C3E030BC3ED6671(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_80260[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_105(unk_0x1146A9AE09CE2B14()) || (func_636() && func_635())) && !unk_0x234B68AC2E35ED5A(Global_2544210.f_4658, 31)) && !bParam4)
	{
		uVar1 = func_634();
		if (unk_0x419E13582192CFEA(uVar1))
		{
			if (unk_0x72D30262CF8C8603(iVar1))
			{
				if (unk_0xCB567ED25393C1DF(iVar1) != -1)
				{
					if (func_1340(unk_0xCB567ED25393C1DF(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0xE45310E861787FC2()) && iParam1 < 4)
						{
							if (Global_4456448.f_80260[iParam1] != -1)
							{
								return func_632(iParam1, iParam0, 0);
							}
							else
							{
								return func_623(iParam0, unk_0xCB567ED25393C1DF(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_623(iParam0, unk_0xCB567ED25393C1DF(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0xE45310E861787FC2()) && iParam1 < 4)
			{
				if (Global_4456448.f_80260[iParam1] != -1)
				{
					return func_632(iParam1, iParam0, 0);
				}
				else
				{
					return func_612(0, -1, 0);
				}
			}
			else
			{
				return func_612(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0xE45310E861787FC2()) && iParam1 < 4)
	{
		if (Global_4456448.f_80260[iParam1] != -1)
		{
			return func_632(iParam1, iParam0, 0);
		}
		else
		{
			return func_623(iParam0, unk_0x1146A9AE09CE2B14(), iParam1, bParam2, bParam3);
		}
	}
	return func_623(iParam0, unk_0x1146A9AE09CE2B14(), iParam1, bParam2, bParam3);
}

int func_612(bool bParam0, int iParam1, bool bParam2)
{
	return func_613(unk_0x1146A9AE09CE2B14(), bParam0, iParam1, bParam2);
}

int func_613(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x8CFC2F41A749E236(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x7C3E030BC3ED6671(iParam0);
	if ((func_622() || (func_621() && func_619())) && Global_1390582.f_1)
	{
		if (bParam1)
		{
			return func_618(iParam2, iVar0);
		}
		else
		{
			return func_618(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_101(iVar0, iParam2, 0) && !unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_617(1);
				}
				else
				{
					return func_617(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_4456448.f_4, 20))
			{
				return func_614(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_614(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_617(1);
	}
	return func_617(0);
}

int func_614(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_616(iParam0, iParam1, iParam3);
	if (func_615(Global_4456448.f_85535, 1))
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

int func_615(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4456448.f_133963 == 65)
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
		if (iParam0 == Global_262145.f_9191[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_616(int iParam0, int iParam1, int iParam2)
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
			if (!func_101(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_617(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_618(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_616(iParam1, iParam0, 4);
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

bool func_619()
{
	if (func_620())
	{
		return 1;
	}
	return unk_0x234B68AC2E35ED5A(Global_4456448.f_138135, 4);
}

bool func_620()
{
	return unk_0x234B68AC2E35ED5A(Global_4456448.f_127830, 12);
}

bool func_621()
{
	if (unk_0xE45310E861787FC2())
	{
		return unk_0x234B68AC2E35ED5A(Global_4456448.f_138135, 0);
	}
	return ((unk_0x234B68AC2E35ED5A(Global_4456448.f_138135, 0) || Global_1660806) && unk_0x636F1F53CC61D2C9(joaat("fm_deathmatch_creator")) > 0);
}

int func_622()
{
	if (func_620() && unk_0xE45310E861787FC2())
	{
		return 1;
	}
	return 0;
}

int func_623(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x7C3E030BC3ED6671(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1590908[iVar2 /*874*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_626())
			{
				iVar3 = func_323(iParam0);
				if (!iVar3 == -1)
				{
					return func_321(iVar3);
				}
			}
			if ((func_625(iParam1, iParam0, iVar0, 0) && !unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 18)) || ((func_101(unk_0x7C3E030BC3ED6671(iParam1), unk_0x7C3E030BC3ED6671(iParam0), 0) && unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 23)) && !unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 18)))
			{
				return func_617(1);
			}
			else if (unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 26))
			{
				return func_624(1);
			}
			else
			{
				return func_613(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574425 || Global_1574416) || Global_1590908[iParam0 /*874*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574425 == 1 && Global_1574435 == 0))
			{
				return func_617(1);
			}
			else
			{
				return func_613(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574420 && Global_1573914.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_323(iParam0);
	if (!iVar4 == -1)
	{
		return func_321(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_624(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_625(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x7C3E030BC3ED6671(iParam0) == -1 && unk_0x7C3E030BC3ED6671(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x7C3E030BC3ED6671(iParam0) == unk_0x7C3E030BC3ED6671(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x7C3E030BC3ED6671(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x7C3E030BC3ED6671(iParam0) == iParam2;
	}
	return unk_0x7C3E030BC3ED6671(iParam0) == iParam2;
}

int func_626()
{
	if (((((func_175() || func_631()) || func_53()) || func_630()) || func_629()) || func_627())
	{
		return 1;
	}
	if (unk_0xE45310E861787FC2() && unk_0x234B68AC2E35ED5A(Global_4456448.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_627()
{
	return func_628(Global_4456448.f_85535);
}

int func_628(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_30524[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_629()
{
	return Global_2453009.f_24;
}

var func_630()
{
	return Global_2453009.f_21;
}

var func_631()
{
	return Global_2453009.f_18;
}

int func_632(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969056.f_14[iParam0];
	if (func_626())
	{
		iVar2 = func_323(iParam1);
		if (!iVar2 == -1)
		{
			return func_321(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0x234B68AC2E35ED5A(Global_4456448.f_594[iParam0 /*16832*/].f_7429[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_57())
	{
		if (Global_4456448.f_80260[iParam0] != -1 && Global_4456448.f_80260[iParam0] <= 4)
		{
			if (Global_4456448.f_80260[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_80260[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_80260[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_80260[iParam0] == 4)
			{
				if (unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 29))
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
				iVar0 = Global_4456448.f_80260[iParam0];
			}
		}
		else
		{
			iVar0 = func_613(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0x234B68AC2E35ED5A(Global_4456448.f_21, 13))
		{
			iVar0 = func_633(iParam0);
		}
		if (unk_0x234B68AC2E35ED5A(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 26) && !func_101(iParam0, unk_0x7C3E030BC3ED6671(iParam1), 0))
		{
			iVar0 = func_624(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_633(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_134108;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_134109;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_134110;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_134111;
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

var func_634()
{
	return Global_2359302.f_2;
}

bool func_635()
{
	return unk_0x234B68AC2E35ED5A(Global_2359302, 4);
}

bool func_636()
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_36.f_18, 14);
}

void func_637(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_57();
	uParam1->f_18 = func_57();
	uParam1->f_19 = func_57();
	uParam1->f_20 = func_57();
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

int func_638(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x02BFF15CAA701972() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), *uParam0);
		}
		else
		{
			return unk_0x2D57EADCBEDDB2AA(unk_0xCB3024ED32EBF9EC(), *uParam0);
		}
	}
	return unk_0x2D57EADCBEDDB2AA(unk_0xDFB7BFA6482FEE1E(), *uParam0);
}

void func_639(int iParam0, bool bParam1, var uParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	func_799(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		iVar1 = (iVar1 + func_798(iParam0, uParam2->f_13, bParam3));
		if (iParam0 == 233)
		{
			iVar6 = (uParam2->f_10 / uParam2->f_11) * 100;
			iVar1 = ((iVar1 / 100) * iVar6);
		}
		if ((iParam0 == 158 && uParam2->f_21 == 1) && !uParam2->f_22)
		{
			iVar1 = 200;
		}
		iVar1 = round((to_float(iVar1) / to_float(uParam2->f_4)));
		iVar1 = round((IntToFloat(iVar1) * fVar3));
		iVar1 = round((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = (iVar0 + func_797(iParam0, bParam3));
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
	if (func_795(iParam0))
	{
		if (bParam1)
		{
			if (func_794(unk_0x1146A9AE09CE2B14()) > 0)
			{
				func_793();
			}
			else
			{
				func_792();
			}
		}
		else
		{
			func_791();
		}
	}
	func_778(iParam0, bParam1, uParam2, &iVar0, &uVar4);
	func_776(iParam0, uParam2, &iVar0, &iVar5);
	func_752(iParam0, uParam2, &iVar0, &iVar5);
	func_749(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	func_732(iParam0, uParam2, &iVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_2544210.f_5191.f_385 = uVar4;
	}
	else
	{
		Global_2544210.f_5191.f_385 = iVar5;
	}
	iVar8 = func_387();
	if (iVar8 != func_57() && iParam0 != 148)
	{
		if (func_319(unk_0x1146A9AE09CE2B14(), 0))
		{
			if (!func_352(unk_0x1146A9AE09CE2B14(), iVar8, 1))
			{
				func_718(&iVar0, 1);
			}
		}
	}
	func_714(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_1681722.f_10 = iVar1;
		func_713();
		func_674(0, unk_0x7D2B9E6A64637269(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1681722.f_9 = iVar0;
		func_657(iParam0, iVar0, iVar7, uVar4, iVar5, uParam2);
		func_656(iParam0, iVar0);
		if (func_655(iParam0))
		{
			if (func_654(iParam0) > -1)
			{
				func_653(func_654(iParam0), iVar0);
			}
		}
		Global_2465707 = iVar0;
		func_652(&Global_2463963, 0, 0);
	}
	if (func_271(unk_0x1146A9AE09CE2B14()) || func_237(unk_0x1146A9AE09CE2B14()))
	{
		func_646(iParam0);
	}
	if (func_465(iParam0))
	{
		Global_1681740.f_13 = iVar0;
		Global_1681740.f_14 = iVar1;
	}
	if (func_470(iParam0))
	{
		Global_1681794.f_13 = iVar0;
		Global_1681794.f_14 = iVar1;
	}
	if (func_579(iParam0))
	{
		Global_1681857.f_12 = iVar0;
		Global_1681857.f_13 = iVar1;
	}
	if (func_577(iParam0))
	{
		Global_1681901.f_12 = iVar0;
		Global_1681901.f_13 = iVar1;
	}
	if (func_575(iParam0))
	{
		Global_1681955.f_12 = iVar0;
		Global_1681955.f_13 = iVar1;
	}
	if (func_469(iParam0))
	{
		if (func_645(iParam0))
		{
			Global_1682037.f_12 = iVar0;
			Global_1682037.f_13 = iVar1;
		}
		else if (func_641(iParam0))
		{
			Global_1682091.f_12 = iVar0;
			Global_1682091.f_13 = iVar1;
		}
	}
	if (func_640(iParam0))
	{
		Global_1682175.f_12 = iVar0;
		Global_1682175.f_13 = iVar1;
	}
	if (func_569(iParam0))
	{
		Global_1682250.f_16 = iVar0;
		Global_1682250.f_17 = iVar1;
	}
	if (func_568(iParam0))
	{
		Global_1682337.f_16 = iVar0;
		Global_1682337.f_17 = iVar1;
	}
	if (func_562(iParam0))
	{
		Global_1682470.f_15 = iVar0;
		Global_1682470.f_16 = iVar1;
	}
}

int func_640(int iParam0)
{
	switch (iParam0)
	{
		case 243:
			return 1;
		
		default:
	}
	return 0;
}

int func_641(int iParam0)
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && func_642(func_643(unk_0x1146A9AE09CE2B14()))))
	{
		return 1;
	}
	return 0;
}

int func_642(int iParam0)
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

int func_643(int iParam0)
{
	if (func_248(iParam0) == 237 || func_248(iParam0) == 250)
	{
		return func_644(iParam0);
	}
	return -1;
}

int func_644(int iParam0)
{
	if (func_249(iParam0, 0))
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_182;
	}
	return -1;
}

int func_645(int iParam0)
{
	if (iParam0 == 237)
	{
		return 1;
	}
	return 0;
}

void func_646(int iParam0)
{
	if (func_651(unk_0x1146A9AE09CE2B14()) && func_650())
	{
		if (func_448(iParam0))
		{
			func_648(10571, -1);
		}
		else if (func_449(iParam0))
		{
			func_648(10573, -1);
		}
		else if (func_350(iParam0, 1))
		{
			func_648(10574, -1);
		}
		else if (func_647(iParam0))
		{
			func_648(10575, -1);
		}
	}
}

int func_647(int iParam0)
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

void func_648(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_526(iParam0, func_436(iParam1), 0);
	iVar0++;
	if (!func_649(iParam0))
	{
		func_525(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_528(iParam0, iVar0, iParam1, 1);
	}
}

int func_649(int iParam0)
{
	if (Global_1390376)
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
			case 10441:
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
				return 1;
				break;
			}
	}
	return 0;
}

bool func_650()
{
	return func_386(unk_0x1146A9AE09CE2B14());
}

bool func_651(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_125, 14);
}

void func_652(var uParam0, bool bParam1, bool bParam2)
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

void func_653(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23677 == 0 || Global_262145.f_23677 == 1)
		{
			if (!unk_0x3640D836D145B814() || Global_262145.f_23677 == 1)
			{
				Global_2544210.f_283 = iParam0;
				if (iParam1 > Global_262145.f_6755)
				{
					iParam1 = Global_262145.f_6755;
				}
				Global_2544210.f_284 = iParam1;
				Global_2544210.f_285 = 0;
			}
		}
	}
}

int func_654(int iParam0)
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

int func_655(int iParam0)
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

void func_656(int iParam0, int iParam1)
{
	if (func_651(unk_0x1146A9AE09CE2B14()) && func_650())
	{
		if (func_448(iParam0) && iParam1 > 0)
		{
			func_525(10572, (func_526(10572, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

void func_657(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	struct<2> Var7;
	
	iVar5 = func_673();
	if (iVar5 != func_57())
	{
		func_672(iVar5, &uVar0, &uVar1);
	}
	bVar6 = !func_671(1);
	Var7.f_1 = -1;
	switch (iParam0)
	{
		case 168:
			if (!func_544())
			{
				unk_0x5770EF297A89065D(iParam1, uParam3);
			}
			break;
		
		case 190:
			if (func_650())
			{
				if (!func_544())
				{
					Var7 = { func_670() };
					unk_0xEAEC74D0C3BE5CA5(iParam1, unk_0x15173FB88ABC94F9(func_669(Var7)), func_668(Var7), iParam4);
				}
			}
			else if (func_544())
			{
				func_664(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4265506[iVar4 /*85*/].f_6 = uVar0;
				Global_4265506[iVar4 /*85*/].f_7 = uVar1;
				Global_4265506[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x5770EF297A89065D(iParam1, iParam4);
			}
			break;
		
		case 226:
			if (func_663())
			{
				if (!func_544())
				{
					unk_0xEAEC74D0C3BE5CA5(iParam1, unk_0x15173FB88ABC94F9(func_669(func_662(unk_0x1146A9AE09CE2B14()))), 5, iParam4);
				}
			}
			else if (func_544())
			{
				func_664(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4265506[iVar4 /*85*/].f_6 = uVar0;
				Global_4265506[iVar4 /*85*/].f_7 = uVar1;
				Global_4265506[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x5770EF297A89065D(iParam1, iParam4);
			}
			break;
		
		case 230:
			if (func_663())
			{
				if (!func_544())
				{
					iVar2 = func_658(uParam5->f_16, iParam4);
					iVar3 = iParam1;
					if (iVar2 > 0)
					{
						iVar3 = (iVar3 - iVar2);
					}
					if (iParam2 > 0)
					{
						iVar3 = (iVar3 - iParam2);
					}
					unk_0xCC29ABFF6ADFDE69(iVar3, iParam4, iParam2, iVar2, uParam5->f_16);
				}
			}
			else if (func_544())
			{
				func_664(463142405, iParam1, &iVar4, 0, 1, 0);
				Global_4265506[iVar4 /*85*/].f_6 = uVar0;
				Global_4265506[iVar4 /*85*/].f_7 = uVar1;
				Global_4265506[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x57338FC01D78BA44(uVar0, uVar1, iParam1, bVar6);
			}
			break;
		
		case 233:
			if (func_544())
			{
				func_664(1407278493, iParam1, &iVar4, 0, 1, 0);
				Global_4265506[iVar4 /*85*/].f_6 = uVar0;
				Global_4265506[iVar4 /*85*/].f_7 = uVar1;
				Global_4265506[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x5EDA486C8AECA356(iParam1);
			}
			break;
		
		case 237:
			if (func_663())
			{
				if (!func_544())
				{
					unk_0x624394FE858634D7(iParam1, uParam5->f_20, iParam4);
				}
			}
			else if (func_544())
			{
				func_664(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4265506[iVar4 /*85*/].f_6 = uVar0;
				Global_4265506[iVar4 /*85*/].f_7 = uVar1;
				Global_4265506[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x5770EF297A89065D(iParam1, iParam4);
			}
			break;
		
		case 250:
			if (func_544())
			{
				func_664(-961034881, iParam1, &iVar4, 0, 1, 0);
				Global_4265506[iVar4 /*85*/].f_6 = uVar0;
				Global_4265506[iVar4 /*85*/].f_7 = uVar1;
				Global_4265506[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0xF31622289C134E5A(iParam1);
			}
			break;
		
		case 249:
			if (func_544())
			{
				func_664(1135468152, iParam1, &iVar4, 0, 1, 0);
				Global_4265506[iVar4 /*85*/].f_6 = uVar0;
				Global_4265506[iVar4 /*85*/].f_7 = uVar1;
				Global_4265506[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x3A22644C8900D074(iParam1);
			}
			break;
		
		case 242:
		case 244:
		case 248:
		case 241:
		case 239:
		case 240:
			if (func_544())
			{
				func_664(-634726636, iParam1, &iVar4, 0, 1, 0);
				Global_4265506[iVar4 /*85*/].f_6 = uVar0;
				Global_4265506[iVar4 /*85*/].f_7 = uVar1;
				Global_4265506[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0xB91DFEF32DEB33DB(iParam1);
			}
			break;
		
		case 243:
			if (func_544())
			{
				func_664(1698417709, iParam1, &iVar4, 0, 1, 0);
				Global_4265506[iVar4 /*85*/].f_6 = uVar0;
				Global_4265506[iVar4 /*85*/].f_7 = uVar1;
				Global_4265506[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0xB4F8EBDFC90D5044(iParam1);
			}
			break;
		
		case 158:
			if (uParam5->f_22)
			{
				if (func_544())
				{
					func_664(1668610896, iParam1, &iVar4, 0, 1, 0);
				}
				else
				{
					unk_0x6BB4249BA6AD63A1(iParam1, 0, 0, 1, iParam1, 0, 0);
				}
			}
			else if (func_544())
			{
				func_664(-2032529561, iParam1, &iVar4, 0, 1, 0);
			}
			else
			{
				unk_0x6BB4249BA6AD63A1(iParam1, 1, iParam1, 0, 0, 0, 0);
			}
			break;
		
		default:
			if (func_544())
			{
				func_664(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4265506[iVar4 /*85*/].f_6 = uVar0;
				Global_4265506[iVar4 /*85*/].f_7 = uVar1;
				Global_4265506[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x08D3EECA50D3697F(uVar0, uVar1, iParam1, bVar6);
			}
			break;
	}
}

int func_658(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_661(iParam0, iParam1);
	fVar1 = (to_float(func_659(iParam0, iParam1)) * fVar0);
	return round(fVar1);
}

int func_659(int iParam0, int iParam1)
{
	return (func_660(iParam0) * iParam1);
}

int func_660(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return Global_262145.f_22490;
		
		case 0:
			return Global_262145.f_22491;
		
		case 1:
			return Global_262145.f_22492;
		
		case 2:
			return Global_262145.f_22493;
		
		case 3:
			return Global_262145.f_22494;
		
		case 4:
			return Global_262145.f_22495;
		
		case 5:
			return Global_262145.f_22496;
		
		case 6:
			return Global_262145.f_22497;
		
		case 7:
			return Global_262145.f_22498;
		
		default:
	}
	return 0;
}

float func_661(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = to_float(Global_262145.f_22500);
	switch (iParam0)
	{
		case -1:
		case 8:
			return 0f;
		
		case 7:
			fVar0 = Global_262145.f_22502;
			fVar1 = to_float(Global_262145.f_22499);
			break;
		
		case 3:
			fVar0 = Global_262145.f_22502;
			fVar1 = to_float(Global_262145.f_22499);
			break;
		
		case 0:
			fVar0 = Global_262145.f_22503;
			break;
		
		case 1:
			fVar0 = Global_262145.f_22503;
			break;
		
		case 4:
			fVar0 = Global_262145.f_22503;
			break;
		
		case 6:
			fVar0 = Global_262145.f_22504;
			fVar1 = to_float(Global_262145.f_22501);
			break;
		
		case 2:
			fVar0 = Global_262145.f_22504;
			fVar1 = to_float(Global_262145.f_22501);
			break;
		
		case 5:
			fVar0 = Global_262145.f_22504;
			fVar1 = to_float(Global_262145.f_22501);
			break;
	}
	iVar2 = floor((to_float(iParam1) / fVar1));
	return (to_float(iVar2) * fVar0);
}

int func_662(int iParam0)
{
	if (iParam0 == func_57())
	{
		return 0;
	}
	return Global_1590908[iParam0 /*874*/].f_267.f_185[5 /*12*/];
}

bool func_663()
{
	return func_270(unk_0x1146A9AE09CE2B14());
}

void func_664(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_544())
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
			if (iParam1 > 0 || Global_262145.f_27873)
			{
				func_665(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_665(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
		case -1752851493:
		case 1051883823:
			if (iParam1 > 0 || Global_262145.f_27873)
			{
				func_665(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_665(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_665(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_544())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x4D51377BFFA53BFA(func_36()) || unk_0xD699DB7515D82955())
		{
			Global_4267008 = 1;
			return 0;
		}
		if (Global_2464661)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4267009 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4265506[iVar2 /*85*/].f_66.f_2 == 0)
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
	if ((bVar0 || iVar1) || unk_0x9FAA2C7154E262DA(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0xDA727DD48FB63842(iVar4))
		{
			*uParam0 = func_511(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4265506[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4265506[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4266993 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4267007 = 1;
			Global_4267010 = iParam4;
			Global_4267012 = iParam3;
			Global_4267013 = 1;
			Global_4267011 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4267010 = iParam4;
			Global_4267012 = iParam3;
			Global_4267013 = 1;
			Global_4267011 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_667(1, iParam4);
			Global_4267007 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_666(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_666(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x191DDA30577F440A(&(Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_126.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_498(iParam0);
	}
}

void func_667(int iParam0, var uParam1)
{
	Global_2465846 = uParam1;
	Global_2465845 = iParam0;
}

int func_668(int iParam0)
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

char* func_669(int iParam0)
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

struct<2> func_670()
{
	return Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_194;
}

bool func_671(bool bParam0)
{
	return func_319(unk_0x1146A9AE09CE2B14(), bParam0);
}

void func_672(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1630816[iParam0 /*597*/].f_11.f_8[0];
	*uParam2 = Global_1630816[iParam0 /*597*/].f_11.f_8[1];
}

int func_673()
{
	return Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11;
}

int func_674(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_675(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_675(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_685(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x419E13582192CFEA(iParam1))
		{
			if (unk_0xA2CCAAC7F5CA3F49(iParam1))
			{
				uVar1 = unk_0xFAA5505029C4B5A6(iParam1);
				func_681(unk_0x885F3A431ECE75E3(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_676(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_676(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_679(iParam0, 1) };
	if (iParam0 == func_678(unk_0x7D2B9E6A64637269()))
	{
		func_677(1);
	}
	func_681(Var0, iParam1, 0, sParam2, iParam3);
}

void func_677(int iParam0)
{
	Global_2441237.f_2009 = iParam0;
}

int func_678(int iParam0)
{
	return iParam0;
}

Vector3 func_679(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	
	if (unk_0xB90EB35E662F9812())
	{
		Var1 = { unk_0x25D8B90D7AB16D2F(2) };
	}
	if (iParam0 == func_680(unk_0x7D2B9E6A64637269()) && unk_0x5F95E51ABC3FC59A(unk_0x264EE27FDED1DCA1()) == 4)
	{
		Var0 = { unk_0x9E695CE384C77EF0(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0xD6E677FAD7521410(iParam0, 0) };
	}
	fVar2 = 0f;
	if (!unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
		fVar2 = unk_0xA8D713A937F31250(iParam0);
		if (unk_0x5F95E51ABC3FC59A(unk_0x264EE27FDED1DCA1()) == 4)
		{
			fVar2 = Var1.f_2;
		}
	}
	unk_0xC78A38E5FBC66080(unk_0x6471F4759775FCA4(iParam0), &Var3, &Var4);
	if (bParam1)
	{
		fVar5 = (Var4.f_2 + 0.18f);
	}
	else
	{
		fVar5 = (Var3.f_2 + 0.18f);
	}
	Var0 = { unk_0x26C2ACB261895E70(Var0, fVar2, 0f, 0f, fVar5) };
	return Var0;
}

int func_680(int iParam0)
{
	return iParam0;
}

void func_681(struct<3> Param0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2441237.f_1408[iVar0 /*30*/].f_6 == 0 || Global_2441237.f_1408[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2441237.f_1408[iVar1 /*30*/] = { Param0 };
			Global_2441237.f_1408[iVar1 /*30*/].f_6 = 1;
			Global_2441237.f_1408[iVar1 /*30*/].f_4 = func_684(Global_2441237.f_1408[iVar1 /*30*/], &Global_1312335, &Global_1312336);
			Global_2441237.f_1408[iVar1 /*30*/].f_7 = unk_0x551F46B3C7DFB654();
			Global_2441237.f_1408[iVar1 /*30*/].f_3 = iParam1;
			Global_2441237.f_1408[iVar1 /*30*/].f_8 = iParam2;
			Global_2441237.f_1408[iVar1 /*30*/].f_9 = func_683();
			Global_2441237.f_1408[iVar1 /*30*/].f_10 = func_682();
			StringCopy(&(Global_2441237.f_1408[iVar1 /*30*/].f_22), sParam3, 16);
			Global_2441237.f_1408[iVar1 /*30*/].f_26 = unk_0x5FBE5EA201067B5E(unk_0x551F46B3C7DFB654(), iParam4);
		}
	}
}

int func_682()
{
	if (Global_2441237.f_2009)
	{
		Global_2441237.f_2009 = 0;
		return 1;
	}
	Global_2441237.f_2009 = 0;
	return 0;
}

var func_683()
{
	var uVar0;
	
	uVar0 = Global_2441237.f_2011;
	Global_2441237.f_2011 = 1;
	return uVar0;
}

float func_684(struct<3> Param0, var uParam1, var uParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x0BABEFEA577FCFA4(unk_0xEE77BC5A16EEF2B4(), Param0, 1);
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

var func_685(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_686(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_686(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_712(unk_0x1146A9AE09CE2B14()) || func_711(unk_0x1146A9AE09CE2B14()))
	{
		if (Global_262145.f_9807 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9807;
		}
	}
	else if (func_374() || func_710(unk_0x1146A9AE09CE2B14()))
	{
		if (Global_262145.f_22962 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22962;
		}
	}
	else if (Global_262145.f_6806 > 15000)
	{
		iVar2 = 15000;
	}
	else
	{
		iVar2 = Global_262145.f_6806;
	}
	if (func_709(uParam2))
	{
	}
	if (func_708())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_706(iVar1);
		fVar3 = (to_float(iVar1) * Global_262145.f_1);
		iVar1 = round(fVar3);
		if (bParam10)
		{
			iVar1 = func_705(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_703(0, &iVar1);
					break;
				
				case 3:
					func_703(1, &iVar1);
					break;
				
				case 1:
					func_701(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1694735)
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
			func_700(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_696((func_699(unk_0x1146A9AE09CE2B14()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0xDD217DE18BBC8E71(iVar1, iParam8, iParam9);
				if (Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_36.f_2 != -1)
				{
					func_700(1166, iVar1, -1);
				}
				func_691(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_687((func_689(unk_0x1146A9AE09CE2B14()) + iVar1));
			}
			else
			{
				func_687((func_689(unk_0x1146A9AE09CE2B14()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_687(int iParam0)
{
	if (func_708())
	{
		Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_205.f_5 = iParam0;
		func_688(joaat("mpply_globalxp"), iParam0);
	}
}

void func_688(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xAC4FD27671081628(iVar0, uParam1, 1);
	}
}

int func_689(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_1340(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x1146A9AE09CE2B14())
			{
				return func_690(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1590908[iParam0 /*874*/].f_205.f_5;
			}
		}
		else
		{
			return func_690(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_690(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0xD885BEFA31A18D47(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_691(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_59(unk_0x1146A9AE09CE2B14()) };
	if (unk_0x29712F962253A7EB())
	{
		if (unk_0xDA1611E46AAEA71B(&Var0))
		{
			iVar1 = func_694(func_695(&Var0));
			if (iVar1 == 0)
			{
				func_693(&Global_1390382, iParam0);
				func_692(joaat("mpply_crew_local_xp_0"), Global_1390382);
			}
			else if (iVar1 == 1)
			{
				func_693(&Global_1390383, iParam0);
				func_692(joaat("mpply_crew_local_xp_1"), Global_1390383);
			}
			else if (iVar1 == 2)
			{
				func_693(&Global_1390384, iParam0);
				func_692(joaat("mpply_crew_local_xp_2"), Global_1390384);
			}
			else if (iVar1 == 3)
			{
				func_693(&Global_1390385, iParam0);
				func_692(joaat("mpply_crew_local_xp_3"), Global_1390385);
			}
			else if (iVar1 == 4)
			{
				func_693(&Global_1390386, iParam0);
				func_692(joaat("mpply_crew_local_xp_4"), Global_1390386);
			}
		}
	}
}

void func_692(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xAC4FD27671081628(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1390377 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1390379 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1390379 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1390380 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1390381 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1390382 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1390383 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1390384 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1390385 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1390386 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1390387 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1390388 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1390389 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1390390 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1390391 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1390392 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1390393 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_693(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_694(int iParam0)
{
	if (iParam0 == Global_1390377)
	{
		return 0;
	}
	else if (iParam0 == Global_1390378)
	{
		return 1;
	}
	else if (iParam0 == Global_1390379)
	{
		return 2;
	}
	else if (iParam0 == Global_1390380)
	{
		return 3;
	}
	else if (iParam0 == Global_1390381)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_695(var uParam0)
{
	if (unk_0x29712F962253A7EB())
	{
		if (unk_0xDA1611E46AAEA71B(uParam0))
		{
			return Global_2463440;
		}
	}
	return Global_2463440;
}

void func_696(int iParam0, int iParam1, int iParam2)
{
	if (func_708())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9775 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1390527[func_436(-1)])
				{
					unk_0xDD217DE18BBC8E71(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1390527[func_436(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9774 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0xDD217DE18BBC8E71(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9774 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0xDD217DE18BBC8E71(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_195(unk_0x1146A9AE09CE2B14()))
		{
			Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_205.f_1 = iParam0;
			Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_205.f_6 = func_697(iParam0, 1);
		}
		func_528(640, iParam0, -1, 1);
		func_525(641, func_697(iParam0, 1), -1, 1, 0);
		Global_1390527[func_436(-1)] = iParam0;
		func_517(-1109644434, 7, 0);
	}
}

int func_697(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_698(iParam0, 0);
}

int func_698(int iParam0, int iParam1)
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
		if (Global_293361[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_293361[iVar3] < iParam0)
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

int func_699(int iParam0)
{
	if (Global_1312485.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x1146A9AE09CE2B14())
			{
				return Global_1390527[func_436(-1)];
			}
			else if (func_195(iParam0))
			{
				return Global_1590908[iParam0 /*874*/].f_205.f_1;
			}
		}
	}
	else
	{
		return Global_1390527[func_436(-1)];
	}
	return 0;
}

void func_700(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_526(iParam0, func_436(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_649(iParam0))
	{
		func_525(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_528(iParam0, iVar0, iParam2, 1);
	}
}

void func_701(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14());
	iVar0 = 0;
	while (iVar0 < unk_0x5E72DF7B8C03AA05())
	{
		iVar4 = unk_0x6750311806FF130A(iVar0);
		if (unk_0xF46EDF82CA845956(iVar4))
		{
			iVar5 = unk_0x539ED6DF32477DE0(iVar4);
			if (unk_0x7C3E030BC3ED6671(iVar5) != -1)
			{
				if (unk_0x7C3E030BC3ED6671(iVar5) == iVar1 || func_101(unk_0x7C3E030BC3ED6671(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x1146A9AE09CE2B14())
					{
						if (func_60(unk_0x1146A9AE09CE2B14(), iVar5))
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
		iVar6 = round((func_702(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round((func_702(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_702(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_703(bool bParam0, int iParam1)
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
		while (iVar0 < unk_0x5E72DF7B8C03AA05())
		{
			iVar3 = iVar0;
			if (unk_0xF46EDF82CA845956(iVar3))
			{
				iVar4 = unk_0x539ED6DF32477DE0(iVar3);
				if (func_1340(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x1146A9AE09CE2B14())
					{
						iVar1++;
						if (func_60(unk_0x1146A9AE09CE2B14(), iVar4))
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
			if (func_1340(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x1146A9AE09CE2B14())
				{
					if (func_704(unk_0x1146A9AE09CE2B14(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_60(unk_0x1146A9AE09CE2B14(), iVar4))
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
		iVar5 = round((func_702(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round((func_702(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_704(int iParam0, int iParam1)
{
	return vdist(func_52(iParam0), func_52(iParam1));
	return 0f;
}

int func_705(int iParam0)
{
	int iVar0;
	
	if (unk_0xB4A6144FE4FF5B78() != 3)
	{
		return *iParam0;
	}
	iVar0 = round((func_702(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_706(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x909F156FC4077611(iParam0) > func_699(unk_0x1146A9AE09CE2B14()))
		{
			iParam0 = -func_699(unk_0x1146A9AE09CE2B14());
		}
	}
	if (func_707(8000, 0, 0) > 0)
	{
		if (func_707(8000, 0, 0) < (iParam0 + func_699(unk_0x1146A9AE09CE2B14())))
		{
			iParam0 = (func_707(8000, 0, 0) - func_699(unk_0x1146A9AE09CE2B14()));
		}
	}
	return iParam0;
}

int func_707(int iParam0, bool bParam1, int iParam2)
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
	return Global_293361[iParam0];
}

int func_708()
{
	return 1;
}

int func_709(var uParam0)
{
	if (unk_0x4030103C8B148AFC(uParam0))
	{
		return 1;
	}
	else if (unk_0xDA654EB115F9FF7D(uParam0, "") || unk_0xDA654EB115F9FF7D(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_710(int iParam0)
{
	return func_575(func_248(iParam0));
}

bool func_711(int iParam0)
{
	return Global_2426865[iParam0 /*449*/].f_119 == 2;
}

bool func_712(int iParam0)
{
	return Global_2426865[iParam0 /*449*/].f_119 == 7;
}

void func_713()
{
	Global_2465048 = 1;
}

void func_714(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_223(7))
	{
		return;
	}
	iVar0 = func_717(iParam0);
	iVar1 = func_716(iParam0);
	iVar2 = unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(Global_2544210.f_5191.f_268, unk_0x551F46B3C7DFB654()));
	if (func_715(iParam0) != -1)
	{
		if (iVar2 > func_715(iParam0))
		{
			iVar2 = func_715(iParam0);
		}
	}
	else if (iVar2 > Global_262145.f_12573)
	{
		iVar2 = Global_262145.f_12573;
	}
	iVar3 = floor((to_float(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_715(int iParam0)
{
	if (func_350(iParam0, 0) || func_449(iParam0))
	{
		return Global_262145.f_18666;
	}
	if (func_448(iParam0))
	{
		return Global_262145.f_18665;
	}
	switch (iParam0)
	{
		case 192:
			return Global_262145.f_18662;
		
		case 191:
			return Global_262145.f_18664;
		
		case 190:
			return Global_262145.f_18663;
		
		case 227:
			return Global_262145.f_21224;
		
		case 226:
			return Global_262145.f_21212;
		
		case 225:
			return Global_262145.f_21232;
		
		case 230:
			return Global_262145.f_22487;
		
		case 229:
			return Global_262145.f_22391;
		
		case 233:
			return Global_262145.f_22967;
		
		case 237:
			return Global_262145.f_24130;
		
		case 238:
			return Global_262145.f_24241;
		
		case 249:
			return Global_262145.f_24257;
		
		case 243:
			return Global_262145.f_26590;
		
		default:
	}
	return -1;
}

int func_716(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12664;
		
		case 152:
			return Global_262145.f_12699;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_12687;
		
		case 157:
			return Global_262145.f_12654;
		
		case 159:
			return Global_262145.f_12637;
		
		case 164:
			return Global_262145.f_12677;
		
		case 160:
			return Global_262145.f_12727;
		
		case 162:
			return Global_262145.f_12747;
		
		case 163:
			return Global_262145.f_12712;
		
		case 154:
			return Global_262145.f_12782;
		
		case 155:
			return Global_262145.f_12772;
		
		case 153:
			return Global_262145.f_12736;
		
		case 170:
			return Global_262145.f_15174;
		
		case 171:
			return Global_262145.f_15233;
		
		case 172:
			return Global_262145.f_15251;
		
		case 173:
			return Global_262145.f_15192;
		
		case 166:
			return Global_262145.f_15207;
		
		case 167:
			return Global_262145.f_15298;
		
		case 169:
			return Global_262145.f_15270;
		
		case 168:
			return Global_262145.f_15263;
		
		case 179:
			return Global_262145.f_18545;
		
		case 180:
			return Global_262145.f_18323;
		
		case 182:
			return Global_262145.f_18323;
		
		case 183:
			return Global_262145.f_18323;
		
		case 185:
			return Global_262145.f_18323;
		
		case 186:
			return Global_262145.f_18323;
		
		case 189:
			return Global_262145.f_18545;
		
		case 190:
			return Global_262145.f_18199;
		
		case 191:
			return Global_262145.f_18290;
		
		case 192:
			return Global_262145.f_18084;
		
		case 193:
			return Global_262145.f_18545;
		
		case 194:
			return Global_262145.f_18545;
		
		case 195:
			return Global_262145.f_18323;
		
		case 197:
			return Global_262145.f_18323;
		
		case 198:
			return Global_262145.f_18323;
		
		case 199:
			return Global_262145.f_18545;
		
		case 200:
			return Global_262145.f_18545;
		
		case 201:
			return Global_262145.f_18545;
		
		case 205:
			return Global_262145.f_18545;
		
		case 207:
			return Global_262145.f_18323;
		
		case 208:
			return Global_262145.f_18323;
		
		case 209:
			return Global_262145.f_18323;
		
		case 210:
			return Global_262145.f_18545;
		
		case 211:
			return Global_262145.f_18545;
		
		case 214:
			return Global_262145.f_19395;
		
		case 215:
			return Global_262145.f_19397;
		
		case 216:
			return Global_262145.f_19399;
		
		case 217:
			return Global_262145.f_19401;
		
		case 218:
			return Global_262145.f_19403;
		
		case 219:
			return Global_262145.f_19405;
		
		case 220:
			return Global_262145.f_19407;
		
		case 221:
			return Global_262145.f_19409;
		
		case 225:
			if (!func_663())
			{
				return Global_262145.f_21234;
			}
			break;
		
		case 226:
			if (!func_663())
			{
				return Global_262145.f_21214;
			}
			break;
		
		case 227:
			if (!func_663())
			{
				return Global_262145.f_21226;
			}
			break;
		
		case 229:
			if (!func_663())
			{
				return Global_262145.f_22393;
			}
			break;
		
		case 230:
			if (!func_663())
			{
				return Global_262145.f_22489;
			}
			break;
		
		case 233:
			if (!func_663())
			{
				return Global_262145.f_22966;
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
			if (!func_663())
			{
				return Global_262145.f_24132;
			}
			break;
		
		case 238:
			if (!func_663())
			{
				return Global_262145.f_24243;
			}
			break;
		
		case 249:
			if (!func_663())
			{
				return Global_262145.f_24259;
			}
			break;
		
		case 243:
			if (!func_663())
			{
				return Global_262145.f_26593;
			}
			break;
		
		case 158:
			if (!func_663())
			{
				return 100;
			}
			break;
	}
	return 0;
}

int func_717(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12663;
		
		case 152:
			return Global_262145.f_12698;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_12686;
		
		case 157:
			return Global_262145.f_12653;
		
		case 159:
			return Global_262145.f_12636;
		
		case 164:
			return Global_262145.f_12676;
		
		case 160:
			return Global_262145.f_12726;
		
		case 162:
			return Global_262145.f_12746;
		
		case 163:
			return Global_262145.f_12711;
		
		case 154:
			return Global_262145.f_12781;
		
		case 155:
			return Global_262145.f_12771;
		
		case 153:
			return Global_262145.f_12735;
		
		case 170:
			return Global_262145.f_15173;
		
		case 171:
			return Global_262145.f_15232;
		
		case 172:
			return Global_262145.f_15250;
		
		case 173:
			return Global_262145.f_15191;
		
		case 166:
			return Global_262145.f_15206;
		
		case 179:
			return Global_262145.f_18544;
		
		case 180:
			return Global_262145.f_18322;
		
		case 182:
			return Global_262145.f_18322;
		
		case 183:
			return Global_262145.f_18322;
		
		case 185:
			return Global_262145.f_18322;
		
		case 186:
			return Global_262145.f_18322;
		
		case 189:
			return Global_262145.f_18544;
		
		case 193:
			return Global_262145.f_18544;
		
		case 194:
			return Global_262145.f_18544;
		
		case 195:
			return Global_262145.f_18322;
		
		case 197:
			return Global_262145.f_18322;
		
		case 198:
			return Global_262145.f_18322;
		
		case 199:
			return Global_262145.f_18544;
		
		case 200:
			return Global_262145.f_18544;
		
		case 201:
			return Global_262145.f_18544;
		
		case 205:
			return Global_262145.f_18544;
		
		case 207:
			return Global_262145.f_18322;
		
		case 208:
			return Global_262145.f_18322;
		
		case 209:
			return Global_262145.f_18322;
		
		case 210:
			return Global_262145.f_18544;
		
		case 211:
			return Global_262145.f_18544;
		
		case 190:
			if (func_384(0))
			{
				return Global_262145.f_18198;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (func_384(0))
			{
				return Global_262145.f_18289;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (func_384(0))
			{
				return Global_262145.f_18083;
			}
			else
			{
				return 0;
			}
			break;
		
		case 214:
			return Global_262145.f_19394;
		
		case 215:
			return Global_262145.f_19396;
		
		case 216:
			return Global_262145.f_19398;
		
		case 217:
			return Global_262145.f_19400;
		
		case 218:
			return Global_262145.f_19402;
		
		case 219:
			return Global_262145.f_19404;
		
		case 220:
			return Global_262145.f_19406;
		
		case 221:
			return Global_262145.f_19408;
		
		case 225:
			if (func_384(0))
			{
				return Global_262145.f_21233;
			}
			break;
		
		case 226:
			if (func_384(0))
			{
				return Global_262145.f_21213;
			}
			break;
		
		case 227:
			if (func_384(0))
			{
				return Global_262145.f_21225;
			}
			break;
		
		case 229:
			if (func_384(0))
			{
				return Global_262145.f_22392;
			}
			break;
		
		case 230:
			if (func_384(0))
			{
				return Global_262145.f_22488;
			}
			break;
		
		case 233:
			if (func_384(0))
			{
				return Global_262145.f_22968;
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
			if (func_384(0))
			{
				return Global_262145.f_24131;
			}
			break;
		
		case 238:
			if (func_384(0))
			{
				return Global_262145.f_24242;
			}
			break;
		
		case 249:
			if (func_384(0))
			{
				return Global_262145.f_24258;
			}
			break;
		
		case 243:
			return Global_262145.f_26589;
		
		case 158:
			if (func_384(0))
			{
				return 500;
			}
			break;
	}
	return 0;
}

void func_718(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_663())
		{
			if (func_671(0))
			{
				if (!func_384(0))
				{
					if (unk_0x8CFC2F41A749E236(func_673()))
					{
						if (func_731() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_731());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_729(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_722("GB_BCUT_TICK1", func_673(), iVar0, 0, 0, 1);
						}
						func_489(20);
						func_719(func_673(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_719(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_1340(iParam0, 0, 1))
	{
		Var0 = -1855721397;
		Var0.f_1 = unk_0x1146A9AE09CE2B14();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_721(iParam0);
		func_720(&(Var0.f_6), &(Var0.f_7));
		unk_0xA5C82A39FF8ED272(1, &Var0, 8, func_506(iParam0));
	}
}

void func_720(var uParam0, var uParam1)
{
	*uParam0 = Global_1658176.f_9;
	*uParam1 = Global_1658176.f_10;
}

var func_721(int iParam0)
{
	return Global_1630816[iParam0 /*597*/].f_508;
}

int func_722(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0xEBB066F8EADD0C1F(unk_0x1146A9AE09CE2B14(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0xF04DBC0AC5A2AB23(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0xF04DBC0AC5A2AB23(iParam1), 64);
		}
		if (unk_0xAB6A270F84A8781E(&Var1))
		{
		}
		unk_0xAD97A7EDCF347FBB(sParam0);
		unk_0xB2A9BDF905DC5A51(func_611(iParam1, -2, 1, 0, 0));
		unk_0xA91D83F2CC1345A6(func_727(&Var1));
		if (!iParam3 == 0)
		{
			unk_0xB2A9BDF905DC5A51(iParam3);
		}
		unk_0x38CD3C04C877C35F(iParam2);
		iVar0 = unk_0x02B23FCAC192C764(0, 1);
		func_723(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_723(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_726() || !unk_0xE45310E861787FC2()) || !func_34(unk_0x1146A9AE09CE2B14(), 0))
	{
		return;
	}
	iVar0 = func_724(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1678174.f_5[iVar0 /*53*/] = iParam0;
		Global_1678174.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1678174.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1678174.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1678174.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1678174.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1678174.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1678174.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1678174.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1678174.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1678174.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1678174.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_724(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1678174 - 1))
	{
		if (iParam0 > Global_1678174.f_5[iVar0 /*53*/].f_1)
		{
			func_725(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1678174++;
	if (Global_1678174 > 5)
	{
		Global_1678174 = 5;
		return Global_1678174;
	}
	return (Global_1678174 - 1);
}

void func_725(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1678174.f_5[iVar0 /*53*/] = { Global_1678174.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_726()
{
	return unk_0x14FA206D9CE730A9(-1762644250);
}

var func_727(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_728(&cVar0);
}

var func_728(char[4] cParam0)
{
	return cParam0;
}

void func_729(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_730(1);
	}
	else
	{
		iVar1 = func_730(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_730(bool bParam0)
{
	if (bParam0)
	{
		return round((0.05f * 100f));
	}
	return Global_262145.f_12568;
}

int func_731()
{
	return Global_262145.f_12567;
}

void func_732(int iParam0, var uParam1, int iParam2, var uParam3)
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
	
	bVar18 = func_384(1);
	bVar19 = false;
	if (iParam0 == 237)
	{
		if (func_663())
		{
			iVar17 = unk_0x1146A9AE09CE2B14();
		}
		else
		{
			iVar17 = func_673();
		}
		iVar11 = iVar17;
		if (iVar11 != -1)
		{
			iVar0 = Global_1590908[iVar11 /*874*/].f_851.f_1;
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
				iVar2 = Global_1590908[iVar11 /*874*/].f_851.f_2;
			}
			else
			{
				iVar2 = func_748(Global_1590908[iVar11 /*874*/].f_851, *uParam3);
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
			iVar10 = func_747(*iParam2);
			if (iVar10 > 0)
			{
				if (iVar17 == unk_0x1146A9AE09CE2B14())
				{
					func_746("TICK_TCUT", iVar10, 0);
				}
				*iParam2 = (*iParam2 - iVar10);
			}
			Global_1682037.f_49 = *uParam3;
			if (iVar17 == unk_0x1146A9AE09CE2B14())
			{
				if (iVar2 > 0)
				{
					func_745(iVar2);
				}
				if (*uParam3 > 0)
				{
					func_743(*uParam3);
				}
				iVar6 = func_742(&uVar5);
				iVar7 = Global_262145.f_24161;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar9 = ceil((IntToFloat(iVar6) * Global_262145.f_24160));
				iVar8 = ((*iParam2 / 100) * iVar9);
				*iParam2 = (*iParam2 + iVar8);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_489(140);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar18)
					{
						iVar21 = 0;
						while (iVar21 < unk_0x5E72DF7B8C03AA05())
						{
							iVar22 = iVar21;
							if (unk_0xF46EDF82CA845956(iVar22))
							{
								iVar23 = unk_0x539ED6DF32477DE0(iVar22);
								if (func_741(iVar23))
								{
									func_733(iVar23, 1, 198210293);
								}
							}
							iVar21++;
						}
					}
				}
				Global_2544210.f_5191.f_384 = *iParam2;
			}
			else if (bVar18)
			{
				fVar16 = Global_262145.f_24133;
				iVar3 = ceil((IntToFloat(*iParam2) * fVar16));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_24134;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1694747 = *iParam2;
					func_489(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_733(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_735(iParam0);
	func_734(iParam0, uVar0, iParam1, iParam2);
}

void func_734(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<8> Var0;
	
	Var0 = 1152266822;
	Var0.f_1 = unk_0x1146A9AE09CE2B14();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_721(iParam0);
	func_720(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_57())
	{
		if (unk_0x8CFC2F41A749E236(iParam0))
		{
			unk_0xA5C82A39FF8ED272(1, &Var0, 8, func_506(iParam0));
		}
	}
}

int func_735(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_740();
	iVar0 = func_738(iParam0, iVar0);
	iVar1 = Global_1630816[func_673() /*597*/].f_11.f_424;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_15134));
	if (iVar0 < func_737())
	{
		iVar0 = func_737();
	}
	if (iVar0 > func_736())
	{
		iVar0 = func_736();
	}
	return iVar0;
}

int func_736()
{
	return Global_262145.f_15135;
}

int func_737()
{
	return Global_262145.f_16310;
}

int func_738(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_794(iParam0) * func_739());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_739()
{
	return Global_262145.f_16309;
}

var func_740()
{
	return Global_262145.f_12559;
}

int func_741(int iParam0)
{
	if (unk_0x8CFC2F41A749E236(iParam0))
	{
		if (iParam0 != unk_0x1146A9AE09CE2B14())
		{
			if (func_352(iParam0, unk_0x1146A9AE09CE2B14(), 0))
			{
				if (!func_252(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_742(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0x8CFC2F41A749E236(unk_0xC502CD39B4994F3A(iVar0)))
		{
			iVar2 = unk_0xC502CD39B4994F3A(iVar0);
			if (!func_34(iVar2, 0) && !func_352(iVar2, unk_0x1146A9AE09CE2B14(), 1))
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

void func_743(int iParam0)
{
	func_744(iParam0, 7238);
}

void func_744(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_526(iParam1, -1, 0);
	func_525(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_745(int iParam0)
{
	func_744(iParam0, 7233);
}

int func_746(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0xAD97A7EDCF347FBB(sParam0);
	unk_0x38CD3C04C877C35F(iParam1);
	iVar0 = unk_0x02B23FCAC192C764(0, 1);
	if (bParam2)
	{
		func_723(3, sParam0, 2, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	}
	else
	{
		func_723(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

int func_747(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = to_float(iParam0);
	fVar1 = (fVar0 * Global_262145.f_24162);
	if (fVar1 > 100000f)
	{
		fVar1 = 100000f;
	}
	return round(fVar1);
}

int func_748(struct<5> Param0, int iParam1)
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

void func_749(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)
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
	bVar16 = func_384(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_663())
		{
			iVar15 = unk_0x1146A9AE09CE2B14();
		}
		else
		{
			iVar15 = func_673();
		}
		if (iVar15 != -1)
		{
			iVar0 = (uParam1->f_15 + uParam1->f_8);
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
			iVar2 = func_659(uParam1->f_16, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_658(uParam1->f_16, *uParam3);
				if (iVar9 > 0)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (func_751(*iParam2) > 0)
			{
				if (iVar15 == unk_0x1146A9AE09CE2B14())
				{
					func_746("SMTICK_RONCUT", func_751(*iParam2), 0);
				}
				*iParam2 = (*iParam2 - func_751(*iParam2));
			}
			if (iVar15 == unk_0x1146A9AE09CE2B14())
			{
				func_750(iVar2, iVar9);
				iVar6 = func_742(&uVar5);
				iVar7 = Global_262145.f_22506;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = ceil((IntToFloat(iVar6) * Global_262145.f_22505));
				*uParam4 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + *uParam4);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_489(44);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar16)
					{
						iVar18 = 0;
						while (iVar18 < unk_0x5E72DF7B8C03AA05())
						{
							iVar19 = iVar18;
							if (unk_0xF46EDF82CA845956(iVar19))
							{
								iVar20 = unk_0x539ED6DF32477DE0(iVar19);
								if (func_741(iVar20))
								{
									func_733(iVar20, 1, 1160415507);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2544210.f_5191.f_384 = *iParam2;
			}
			else if (bVar16)
			{
				fVar14 = Global_262145.f_22439;
				iVar3 = ceil((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_22440;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1694747 = *iParam2;
					func_489(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_750(int iParam0, int iParam1)
{
	if (iParam0 > 0)
	{
		func_744(iParam0, 6118);
	}
	if (iParam1 > 0)
	{
		func_744(iParam1, 6119);
	}
}

int func_751(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = to_float(iParam0);
	fVar1 = (fVar0 * Global_262145.f_22473);
	if (fVar1 > to_float(Global_262145.f_22474))
	{
		fVar1 = to_float(Global_262145.f_22474);
	}
	return round(fVar1);
}

void func_752(int iParam0, var uParam1, int iParam2, var uParam3)
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
	
	bVar17 = func_384(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_663())
		{
			iVar15 = unk_0x1146A9AE09CE2B14();
		}
		else
		{
			iVar15 = func_673();
		}
		if (iVar15 != -1)
		{
			iVar16 = func_662(iVar15);
			iVar0 = (func_775(iVar15, iVar16) + uParam1->f_8);
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
			iVar2 = func_771(iVar15, iVar16, iVar1);
			if (uParam1->f_14 == 0)
			{
				iVar2 = ceil((IntToFloat(iVar2) * Global_262145.f_21216));
			}
			else
			{
				iVar2 = ceil((IntToFloat(iVar2) * Global_262145.f_21215));
			}
			*iParam2 = (*iParam2 + iVar2);
			if (iVar15 == unk_0x1146A9AE09CE2B14())
			{
				func_766(iVar16, iVar2);
				if (func_762(iVar16) >= Global_262145.f_20762 || iVar2 >= Global_262145.f_20762)
				{
					func_753(5);
				}
				iVar6 = func_742(&uVar5);
				iVar7 = round(Global_262145.f_21218);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = ceil((IntToFloat(iVar6) * Global_262145.f_21217));
				iVar9 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + iVar9);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_489(108);
					}
					else
					{
						func_489(110);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar17)
					{
						iVar18 = 0;
						while (iVar18 < unk_0x5E72DF7B8C03AA05())
						{
							iVar19 = iVar18;
							if (unk_0xF46EDF82CA845956(iVar19))
							{
								iVar20 = unk_0x539ED6DF32477DE0(iVar19);
								if (func_741(iVar20))
								{
									func_733(iVar20, 1, -1905128202);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2544210.f_5191.f_384 = *iParam2;
			}
			else if (bVar17)
			{
				fVar14 = Global_262145.f_21219;
				iVar3 = ceil((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_21220;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1694747 = *iParam2;
					func_489(112);
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

void func_753(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_20750)
			{
				if (func_755(Global_262145.f_20751))
				{
					func_754("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0);
				}
			}
			break;
		
		case 1:
			if (Global_262145.f_20752)
			{
				if (func_755(Global_262145.f_20753))
				{
					func_754("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0);
				}
			}
			break;
		
		case 2:
			if (Global_262145.f_20754)
			{
				if (func_755(Global_262145.f_20755))
				{
					func_754("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0);
				}
			}
			break;
		
		case 3:
			if (Global_262145.f_20756)
			{
				if (func_755(Global_262145.f_20757))
				{
					func_754("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0);
				}
			}
			break;
		
		case 4:
			if (Global_262145.f_20758)
			{
				if (func_755(Global_262145.f_20759))
				{
					func_754("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0);
				}
			}
			break;
		
		case 5:
			if (Global_262145.f_20760)
			{
				if (func_755(Global_262145.f_20761))
				{
					func_746("CLOTHAWDSTRAP3", Global_262145.f_20762, 0);
				}
			}
			break;
		
		case 6:
			if (Global_262145.f_20763)
			{
				if (func_755(Global_262145.f_20764))
				{
					func_746("CLOTHAWDSTRAP5", Global_262145.f_20898, 0);
				}
			}
			break;
		
		case 7:
			if (Global_262145.f_20766)
			{
				if (func_755(Global_262145.f_20767))
				{
					func_754("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0);
				}
			}
			break;
		
		case 8:
			if (Global_262145.f_20768)
			{
				if (func_755(Global_262145.f_20769))
				{
					func_754("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0);
				}
			}
			break;
		
		case 9:
			if (Global_262145.f_20770)
			{
				if (func_755(Global_262145.f_20771))
				{
					func_754("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0);
				}
			}
			break;
		
		case 10:
			if (Global_262145.f_20772)
			{
				if (func_755(Global_262145.f_20773))
				{
					func_754("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0);
				}
			}
			break;
		
		case 11:
			if (Global_262145.f_20774)
			{
				if (func_755(Global_262145.f_20775))
				{
					func_754("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0);
				}
			}
			break;
		
		case 12:
			if (Global_262145.f_20776)
			{
				if (func_755(Global_262145.f_20777))
				{
					func_754("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0);
				}
			}
			break;
		
		case 13:
			if (Global_262145.f_20778)
			{
				if (func_755(Global_262145.f_20779))
				{
					func_754("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0);
				}
			}
			break;
		
		case 14:
			if (Global_262145.f_20780)
			{
				if (func_755(Global_262145.f_20781))
				{
					func_754("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0);
				}
			}
			break;
	}
}

int func_754(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	unk_0xAD97A7EDCF347FBB(sParam0);
	if (!iParam2 == 0)
	{
		unk_0xB2A9BDF905DC5A51(iParam2);
	}
	if (!iParam3 == 0)
	{
		unk_0xB2A9BDF905DC5A51(iParam3);
	}
	unk_0x1896EC0B030A48A2(sParam1);
	if (!bParam4)
	{
		iVar0 = unk_0x02B23FCAC192C764(0, 1);
	}
	else
	{
		Global_2518253 = { func_59(unk_0x1146A9AE09CE2B14()) };
		if (unk_0xEDDAF8F99F371228(&Global_2518183, 35, &Global_2518253))
		{
			iVar1 = 0;
			if (unk_0xDA654EB115F9FF7D(&(Global_2518183.f_22), "Leader") && Global_2518183.f_30 == 0)
			{
				iVar1 = 1;
			}
			if (Global_2518183.f_21 > 0)
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 1;
			}
			iVar0 = unk_0x05F3E4A6F62A5ACD(iVar2, unk_0xD30CB36AEC29F5CC(&Global_2518183, 35), &(Global_2518183.f_17), Global_2518183.f_30, iVar1, 0, Global_2518183, unk_0xF04DBC0AC5A2AB23(unk_0x1146A9AE09CE2B14()), Global_1314059, Global_1314060, Global_1314061);
		}
		else
		{
			iVar0 = unk_0x02B23FCAC192C764(0, 1);
		}
	}
	func_723(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_755(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_JBIB_19_0"):
		case joaat("DLC_MP_GR_F_JBIB_25_0"):
		case -1191485992:
		case joaat("CLO_GRF_U_25_0"):
			if (!func_759(15417, -1, -1))
			{
				func_758(15417, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_JBIB_19_1"):
		case joaat("DLC_MP_GR_F_JBIB_25_1"):
		case -1407302654:
		case joaat("CLO_GRF_U_25_1"):
			if (!func_759(15418, -1, -1))
			{
				func_758(15418, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_JBIB_20_0"):
		case joaat("DLC_MP_GR_F_JBIB_26_0"):
		case joaat("CLO_GRM_U_20_0"):
		case -1850642937:
			if (!func_759(15425, -1, -1))
			{
				func_758(15425, 1, -1, 1);
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
			if (!func_759(15405, -1, -1))
			{
				func_758(15405, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_1"):
		case joaat("DLC_MP_GR_F_DECL_5_1"):
		case joaat("CLO_GRM_DECL_20"):
		case 1374601256:
			if (!func_759(15393, -1, -1))
			{
				func_758(15393, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_2"):
		case joaat("DLC_MP_GR_F_DECL_5_2"):
		case joaat("CLO_GRM_DECL_21"):
		case -660288110:
			if (!func_759(15409, -1, -1))
			{
				func_758(15409, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_3"):
		case joaat("DLC_MP_GR_F_DECL_5_3"):
		case -1005186539:
		case joaat("CLO_GRF_DECL_22"):
			if (!func_759(15396, -1, -1))
			{
				func_758(15396, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_4"):
		case joaat("DLC_MP_GR_F_DECL_5_4"):
		case joaat("CLO_GRM_DECL_23"):
		case -1132522169:
			if (!func_759(15412, -1, -1))
			{
				func_758(15412, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_5"):
		case joaat("DLC_MP_GR_F_DECL_5_5"):
		case 1110085176:
		case joaat("CLO_GRF_DECL_24"):
			if (!func_435(209, -1))
			{
				func_756(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_6"):
		case joaat("DLC_MP_GR_F_DECL_5_6"):
		case joaat("CLO_GRM_DECL_25"):
		case -182614393:
			if (!func_759(15403, -1, -1))
			{
				func_758(15403, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_7"):
		case joaat("DLC_MP_GR_F_DECL_5_7"):
		case -1496983695:
		case joaat("CLO_GRF_DECL_26"):
			if (!func_435(209, -1))
			{
				func_756(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_8"):
		case joaat("DLC_MP_GR_F_DECL_5_8"):
		case joaat("CLO_GRM_DECL_27"):
		case -646852824:
			if (!func_759(15389, -1, -1))
			{
				func_758(15389, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_9"):
		case joaat("DLC_MP_GR_F_DECL_5_9"):
		case 420690954:
		case joaat("CLO_GRF_DECL_28"):
			if (!func_435(209, -1))
			{
				func_756(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_10"):
		case joaat("DLC_MP_GR_F_DECL_5_10"):
		case joaat("CLO_GRM_DECL_29"):
		case 1717168382:
			if (!func_759(15398, -1, -1))
			{
				func_758(15398, 1, -1, 1);
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
			if (!func_759(15400, -1, -1))
			{
				func_758(15400, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_1"):
		case joaat("DLC_MP_GR_F_PHEAD_6_1"):
		case joaat("DLC_MP_GR_M_PHEAD_7_1"):
		case joaat("DLC_MP_GR_F_PHEAD_7_1"):
		case 2065127290:
		case joaat("CLO_GRF_PH_6_1"):
			if (!func_435(209, -1))
			{
				func_756(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_2"):
		case joaat("DLC_MP_GR_F_PHEAD_6_2"):
		case joaat("DLC_MP_GR_M_PHEAD_7_2"):
		case joaat("DLC_MP_GR_F_PHEAD_7_2"):
		case -56403312:
		case joaat("CLO_GRF_PH_6_2"):
			if (!func_759(15408, -1, -1))
			{
				func_758(15408, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_3"):
		case joaat("DLC_MP_GR_F_PHEAD_6_3"):
		case joaat("DLC_MP_GR_M_PHEAD_7_3"):
		case joaat("DLC_MP_GR_F_PHEAD_7_3"):
		case -292700571:
		case joaat("CLO_GRF_PH_6_3"):
			if (!func_435(209, -1))
			{
				func_756(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_4"):
		case joaat("DLC_MP_GR_F_PHEAD_6_4"):
		case joaat("DLC_MP_GR_M_PHEAD_7_4"):
		case joaat("DLC_MP_GR_F_PHEAD_7_4"):
		case -648899601:
		case joaat("CLO_GRF_PH_6_4"):
			if (!func_759(15411, -1, -1))
			{
				func_758(15411, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_5"):
		case joaat("DLC_MP_GR_F_PHEAD_6_5"):
		case joaat("DLC_MP_GR_M_PHEAD_7_5"):
		case joaat("DLC_MP_GR_F_PHEAD_7_5"):
		case -889194678:
		case joaat("CLO_GRF_PH_6_5"):
			if (!func_759(15397, -1, -1))
			{
				func_758(15397, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_6"):
		case joaat("DLC_MP_GR_F_PHEAD_6_6"):
		case joaat("DLC_MP_GR_M_PHEAD_7_6"):
		case joaat("DLC_MP_GR_F_PHEAD_7_6"):
		case 867092646:
		case joaat("CLO_GRF_PH_6_6"):
			if (!func_759(15413, -1, -1))
			{
				func_758(15413, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_7"):
		case joaat("DLC_MP_GR_F_PHEAD_6_7"):
		case joaat("DLC_MP_GR_M_PHEAD_7_7"):
		case joaat("DLC_MP_GR_F_PHEAD_7_7"):
		case 627387411:
		case joaat("CLO_GRF_PH_6_7"):
			if (!func_759(15391, -1, -1))
			{
				func_758(15391, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_8"):
		case joaat("DLC_MP_GR_F_PHEAD_6_8"):
		case joaat("DLC_MP_GR_M_PHEAD_7_8"):
		case joaat("DLC_MP_GR_F_PHEAD_7_8"):
		case joaat("CLO_GRM_PH_6_8"):
		case 1682427144:
			if (!func_759(15388, -1, -1))
			{
				func_758(15388, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_9"):
		case joaat("DLC_MP_GR_F_PHEAD_6_9"):
		case joaat("DLC_MP_GR_M_PHEAD_7_9"):
		case joaat("DLC_MP_GR_F_PHEAD_7_9"):
		case 35480964:
		case joaat("CLO_GRF_PH_6_9"):
			if (!func_435(209, -1))
			{
				func_756(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_10"):
		case joaat("DLC_MP_GR_F_PHEAD_6_10"):
		case joaat("DLC_MP_GR_M_PHEAD_7_10"):
		case joaat("DLC_MP_GR_F_PHEAD_7_10"):
		case joaat("CLO_GRM_PH_6_10"):
		case 1377465778:
			if (!func_759(15401, -1, -1))
			{
				func_758(15401, 1, -1, 1);
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
			if (!func_759(15394, -1, -1))
			{
				func_758(15394, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_001_M"):
		case joaat("MP_Gunrunning_Award_001_F"):
		case -1367129204:
		case joaat("CLO_GRF_DECL_1"):
			if (!func_435(209, -1))
			{
				func_756(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_002_M"):
		case joaat("MP_Gunrunning_Award_002_F"):
		case joaat("CLO_GRM_DECL_2"):
		case -1438775324:
			if (!func_759(15406, -1, -1))
			{
				func_758(15406, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_003_M"):
		case joaat("MP_Gunrunning_Award_003_F"):
		case -1686659723:
		case joaat("CLO_GRF_DECL_3"):
			if (!func_759(15395, -1, -1))
			{
				func_758(15395, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_004_M"):
		case joaat("MP_Gunrunning_Award_004_F"):
		case 1992217604:
		case joaat("CLO_GRF_DECL_4"):
			if (!func_435(209, -1))
			{
				func_756(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_005_M"):
		case joaat("MP_Gunrunning_Award_005_F"):
		case -1934557208:
		case joaat("CLO_GRF_DECL_5"):
			if (!func_759(15410, -1, -1))
			{
				func_758(15410, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_006_M"):
		case joaat("MP_Gunrunning_Award_006_F"):
		case -1034032319:
		case joaat("CLO_GRF_DECL_6"):
			if (!func_759(15407, -1, -1))
			{
				func_758(15407, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_007_M"):
		case joaat("MP_Gunrunning_Award_007_F"):
		case 1747334867:
		case joaat("CLO_GRF_DECL_7"):
			if (!func_435(209, -1))
			{
				func_756(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_008_M"):
		case joaat("MP_Gunrunning_Award_008_F"):
		case 236389050:
		case joaat("CLO_GRF_DECL_8"):
			if (!func_435(209, -1))
			{
				func_756(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_009_M"):
		case joaat("MP_Gunrunning_Award_009_F"):
		case joaat("CLO_GRM_DECL_9"):
		case 908992470:
			if (!func_759(15414, -1, -1))
			{
				func_758(15414, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_010_M"):
		case joaat("MP_Gunrunning_Award_010_F"):
		case joaat("CLO_GRM_DECL_10"):
		case -1021993708:
			if (!func_759(15415, -1, -1))
			{
				func_758(15415, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_011_M"):
		case joaat("MP_Gunrunning_Award_011_F"):
		case 479676642:
		case joaat("CLO_GRF_DECL_11"):
			if (!func_759(15399, -1, -1))
			{
				func_758(15399, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_012_M"):
		case joaat("MP_Gunrunning_Award_012_F"):
		case 242920617:
		case joaat("CLO_GRF_DECL_12"):
			if (!func_759(15404, -1, -1))
			{
				func_758(15404, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_013_M"):
		case joaat("MP_Gunrunning_Award_013_F"):
		case -1219723702:
		case joaat("CLO_GRF_DECL_13"):
			if (!func_435(209, -1))
			{
				func_756(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_014_M"):
		case joaat("MP_Gunrunning_Award_014_F"):
		case joaat("CLO_GRM_DECL_14"):
		case 2087194554:
			if (!func_759(15392, -1, -1))
			{
				func_758(15392, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_015_M"):
		case joaat("MP_Gunrunning_Award_015_F"):
		case joaat("CLO_GRM_DECL_15"):
		case 981732339:
			if (!func_759(15390, -1, -1))
			{
				func_758(15390, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_016_M"):
		case joaat("MP_Gunrunning_Award_016_F"):
		case joaat("CLO_GRM_DECL_16"):
		case 1271443068:
			if (!func_759(15402, -1, -1))
			{
				func_758(15402, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_017_M"):
		case joaat("MP_Gunrunning_Award_017_F"):
		case joaat("CLO_GRM_DECL_17"):
		case -1785118184:
			if (!func_759(15416, -1, -1))
			{
				func_758(15416, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_018_M"):
		case joaat("MP_Gunrunning_Award_018_F"):
		case 2029126042:
		case joaat("CLO_GRF_DECL_18"):
			if (!func_435(209, -1))
			{
				func_756(209, 1, -1, 1);
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
			if (!func_759(15426, -1, -1))
			{
				func_758(15426, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_020_M"):
		case joaat("MP_Gunrunning_Award_020_F"):
		case 1281631799:
		case joaat("CLO_GRF_DECL_31"):
			if (!func_759(15422, -1, -1))
			{
				func_758(15422, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_020_M_ALT"):
		case joaat("MP_Gunrunning_Award_020_F_ALT"):
		case 447234752:
		case joaat("CLO_GRF_DECL_32"):
			if (!func_759(15423, -1, -1))
			{
				func_758(15423, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_021_M"):
		case joaat("MP_Gunrunning_Award_021_F"):
		case 278933172:
		case joaat("CLO_GRF_DECL_33"):
			if (!func_759(15421, -1, -1))
			{
				func_758(15421, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_022_M"):
		case joaat("MP_Gunrunning_Award_026_F"):
		case -562607521:
		case joaat("CLO_GRF_DECL_34"):
			if (!func_759(15427, -1, -1))
			{
				func_758(15427, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_023_M"):
		case joaat("MP_Gunrunning_Award_023_F"):
		case 755492739:
		case joaat("CLO_GRF_DECL_35"):
			if (!func_759(15419, -1, -1))
			{
				func_758(15419, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_024_M"):
		case joaat("MP_Gunrunning_Award_024_F"):
		case -85982412:
		case joaat("CLO_GRF_DECL_36"):
			if (!func_759(15420, -1, -1))
			{
				func_758(15420, 1, -1, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_756(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_757())
	{
		iVar0 = Global_2592627[iParam0 /*3*/][func_436(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x6ACB137CE7852248(iVar0, iParam1, iParam3);
		}
	}
}

int func_757()
{
	return 1;
	return 0;
}

int func_758(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	var uVar18;
	var uVar19;
	var uVar20;
	var uVar21;
	var uVar22;
	var uVar23;
	var uVar24;
	var uVar25;
	var uVar26;
	
	if (iParam2 == -1)
	{
		iParam2 = func_36();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xACDC64E5D157EC08((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x5002208C5710DBEB((iParam0 - 0)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xACDC64E5D157EC08((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x5002208C5710DBEB((iParam0 - 192)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xACDC64E5D157EC08((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x5002208C5710DBEB((iParam0 - 513)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xACDC64E5D157EC08((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x5002208C5710DBEB((iParam0 - 705)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x20CEBFA2EEC4CA42((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x5002208C5710DBEB((iParam0 - 3111)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x20CEBFA2EEC4CA42((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x5002208C5710DBEB((iParam0 - 2919)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x783924BA309D8E09((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x5002208C5710DBEB((iParam0 - 4207)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x783924BA309D8E09((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x5002208C5710DBEB((iParam0 - 4335)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x783924BA309D8E09((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x5002208C5710DBEB((iParam0 - 6029)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x783924BA309D8E09((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x5002208C5710DBEB((iParam0 - 7385)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x783924BA309D8E09((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x5002208C5710DBEB((iParam0 - 7321)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0x783924BA309D8E09((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x5002208C5710DBEB((iParam0 - 9361)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0x783924BA309D8E09((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x5002208C5710DBEB((iParam0 - 15369)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0x783924BA309D8E09((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x5002208C5710DBEB((iParam0 - 15562)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = unk_0x783924BA309D8E09((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x5002208C5710DBEB((iParam0 - 15946)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		uVar17 = unk_0x783924BA309D8E09((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x5002208C5710DBEB((iParam0 - 18098)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		uVar18 = unk_0x783924BA309D8E09((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x5002208C5710DBEB((iParam0 - 22066)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		uVar19 = unk_0x783924BA309D8E09((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x5002208C5710DBEB((iParam0 - 24962)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		uVar20 = unk_0x783924BA309D8E09((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - unk_0x5002208C5710DBEB((iParam0 - 26810)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar20, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		uVar21 = unk_0x783924BA309D8E09((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - unk_0x5002208C5710DBEB((iParam0 - 28098)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar21, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		uVar22 = unk_0x783924BA309D8E09((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - unk_0x5002208C5710DBEB((iParam0 - 28355)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar22, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		uVar23 = unk_0x783924BA309D8E09((iParam0 - 30227), 0, 1, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - unk_0x5002208C5710DBEB((iParam0 - 30227)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar23, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		uVar24 = unk_0x783924BA309D8E09((iParam0 - 30355), 0, 1, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - unk_0x5002208C5710DBEB((iParam0 - 30355)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar24, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		uVar25 = unk_0x783924BA309D8E09((iParam0 - 30515), 0, 1, iParam2, "_HISLANDPSTAT_BOOL");
		iVar1 = ((iParam0 - 30515) - unk_0x5002208C5710DBEB((iParam0 - 30515)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar25, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 31707 && iParam0 < 32283)
	{
		uVar26 = unk_0x783924BA309D8E09((iParam0 - 31707), 0, 1, iParam2, "_TUNERPSTAT_BOOL");
		iVar1 = ((iParam0 - 31707) - unk_0x5002208C5710DBEB((iParam0 - 31707)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(uVar26, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_759(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_36();
	}
	iVar1 = func_761(iParam0, iParam1);
	uVar2 = func_760(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xE51D1C588E8D869E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_760(int iParam0)
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

int func_761(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_36();
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

int func_762(int iParam0)
{
	int iVar0;
	
	iVar0 = func_764(iParam0);
	return func_526(func_763(iVar0), -1, 0);
}

int func_763(int iParam0)
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

int func_764(int iParam0)
{
	int iVar0;
	
	if (func_765(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_185[iVar0 /*12*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_765(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_766(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_764(iParam0);
	iVar1 = func_763(iVar0);
	iVar2 = (func_526(iVar1, -1, 0) + iParam1);
	func_525(iVar1, iVar2, -1, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_768(9357, -1, -1) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_185[iVar0 /*12*/] != 0)
			{
				iVar1 = func_763(iVar0);
				iVar3 = (iVar3 + func_526(iVar1, -1, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_767(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_522(9357, iVar5, -1, 1);
	}
}

int func_767(int iParam0)
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

int func_768(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_36();
	}
	iVar0 = 0;
	iVar1 = func_770(iParam0, iParam1);
	uVar2 = func_769(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x167E0AAAC47615D0(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_769(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0x5A0258255BDE2FB1((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0x5A0258255BDE2FB1((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0x5A0258255BDE2FB1((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0x5A0258255BDE2FB1((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0x5A0258255BDE2FB1((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0x5A0258255BDE2FB1((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0x5A0258255BDE2FB1((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0x5A0258255BDE2FB1((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0x5A0258255BDE2FB1((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0x5A0258255BDE2FB1((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0x5A0258255BDE2FB1((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0x5A0258255BDE2FB1((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0x5A0258255BDE2FB1((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0x5A0258255BDE2FB1((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0x5A0258255BDE2FB1((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0x5A0258255BDE2FB1((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - unk_0x5A0258255BDE2FB1((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - unk_0x5A0258255BDE2FB1((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - unk_0x5A0258255BDE2FB1((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - unk_0x5A0258255BDE2FB1((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = ((iParam0 - 25538) - unk_0x5A0258255BDE2FB1((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = ((iParam0 - 27258) - unk_0x5A0258255BDE2FB1((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = ((iParam0 - 28483) - unk_0x5A0258255BDE2FB1((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar0 = ((iParam0 - 30483) - unk_0x5A0258255BDE2FB1((iParam0 - 30483)) * 8) * 8;
	}
	else if (iParam0 >= 30707 && iParam0 < 31707)
	{
		iVar0 = ((iParam0 - 30707) - unk_0x5A0258255BDE2FB1((iParam0 - 30707)) * 8) * 8;
	}
	return iVar0;
}

int func_770(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_36();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0x7DAFCA3E4EC9113B((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x7DAFCA3E4EC9113B((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x7DAFCA3E4EC9113B((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x7DAFCA3E4EC9113B((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x83F92F0DDD94A22D((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x83F92F0DDD94A22D((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 25538), 0, 1, iParam1, "_CASINOPSTAT_INT");
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 27258), 0, 1, iParam1, "_CASINOHSTPSTAT_INT");
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 28483), 0, 1, iParam1, "_SU20PSTAT_INT");
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 30483), 0, 1, iParam1, "_HISLANDPSTAT_INT");
	}
	else if (iParam0 >= 30707 && iParam0 < 31707)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 30707), 0, 1, iParam1, "_TUNERPSTAT_INT");
	}
	return iVar0;
}

int func_771(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_668(iParam1);
	if (func_765(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_17139;
				if (func_772(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_17144);
				}
				if (func_772(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_17149);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_17138;
				if (func_772(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_17143);
				}
				if (func_772(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_17148);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_17137;
				if (func_772(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_17142);
				}
				if (func_772(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_17147);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_17135;
				if (func_772(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_17140);
				}
				if (func_772(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_17145);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_17136;
				if (func_772(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_17141);
				}
				if (func_772(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_17146);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_262145.f_21241;
				if (func_772(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_21243);
				}
				if (func_772(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_21242);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_772(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_774(iParam0, iParam1))
	{
		iVar0 = func_773(iParam0, iParam1);
		return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_773(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_765(iParam1) && iParam0 != func_57())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_774(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_765(iParam1) && iParam0 != func_57())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_775(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_57())
	{
		return 0;
	}
	if (func_765(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/] == iParam1)
			{
				return Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_776(int iParam0, var uParam1, int iParam2, var uParam3)
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
			if (func_650())
			{
				Var0 = { func_670() };
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
				iVar6 = func_771(unk_0x1146A9AE09CE2B14(), Var0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar7 = (to_float(iVar6) * Global_262145.f_18774);
					iVar6 = round(fVar7);
				}
				else
				{
					fVar8 = (to_float(iVar6) * Global_262145.f_18773);
					iVar6 = round(fVar8);
				}
				*iParam2 = (*iParam2 + iVar6);
				iVar10 = func_742(&uVar9);
				iVar11 = round(Global_262145.f_18764);
				if (iVar10 > iVar11)
				{
					iVar10 = iVar11;
				}
				iVar12 = ceil((IntToFloat(iVar10) * Global_262145.f_18763));
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
					func_489(86);
				}
				Global_2544210.f_5191.f_384 = *iParam2;
			}
			else if (func_384(0))
			{
				Var14 = { func_777(func_673()) };
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
				iVar20 = func_771(func_673(), Var14, *uParam3);
				if (Var14.f_1 == 1)
				{
					iVar20 = ceil((IntToFloat(iVar20) * Global_262145.f_18774));
				}
				else if (Var14.f_1 == 0)
				{
					iVar20 = ceil((IntToFloat(iVar20) * Global_262145.f_18773));
				}
				*iParam2 = (*iParam2 + iVar20);
				fVar21 = Global_262145.f_18813;
				iVar22 = ceil((IntToFloat(*iParam2) * fVar21));
				*iParam2 = iVar22;
				iVar23 = Global_262145.f_18814;
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

struct<2> func_777(int iParam0)
{
	return Global_1630816[iParam0 /*597*/].f_11.f_194;
}

void func_778(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
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
		if (func_270(unk_0x1146A9AE09CE2B14()))
		{
			if (bParam1)
			{
				func_790();
			}
			func_789();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_270(unk_0x1146A9AE09CE2B14()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_784(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_183));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_783(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_742(&uVar2);
					iVar4 = Global_262145.f_16320;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = ceil((IntToFloat(iVar3) * Global_262145.f_15529));
					iVar6 = ((*iParam3 / 100) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_489(44);
					}
				}
				func_781(*iParam3);
				func_780();
				Global_2544210.f_5191.f_384 = *iParam3;
				iVar7 = 0;
				while (iVar7 < unk_0x5E72DF7B8C03AA05())
				{
					iVar8 = iVar7;
					if (unk_0xF46EDF82CA845956(iVar8))
					{
						iVar9 = unk_0x539ED6DF32477DE0(iVar8);
						if (func_741(iVar9))
						{
							func_733(iVar9, 1, -1292453789);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_270(unk_0x1146A9AE09CE2B14()))
		{
			func_779();
		}
	}
}

void func_779()
{
	int iVar0;
	
	iVar0 = Global_2595531[func_36()];
	iVar0++;
	func_528(3669, iVar0, -1, 1);
}

void func_780()
{
	int iVar0;
	
	iVar0 = Global_2595537[func_36()];
	iVar0++;
	func_528(3668, iVar0, -1, 1);
}

void func_781(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2595540[func_36()];
	iVar0 = (iVar0 + iParam0);
	func_528(3670, iVar0, -1, 1);
	if (func_768(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_782(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_522(7666, iVar2, -1, 1);
	}
}

int func_782(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_16453;
			break;
		
		case 2:
			return Global_262145.f_16454;
			break;
		
		case 3:
			return Global_262145.f_16455;
			break;
		
		case 4:
			return Global_262145.f_16456;
			break;
		
		case 5:
			return Global_262145.f_16457;
			break;
		
		case 6:
			return Global_262145.f_16458;
			break;
		
		case 7:
			return Global_262145.f_16459;
			break;
		
		case 8:
			return Global_262145.f_16460;
			break;
		
		case 9:
			return Global_262145.f_16461;
			break;
		
		case 10:
			return Global_262145.f_16462;
			break;
		
		case 11:
			return Global_262145.f_16463;
			break;
		
		case 12:
			return Global_262145.f_16464;
			break;
		
		case 13:
			return Global_262145.f_16465;
			break;
		
		case 14:
			return Global_262145.f_16466;
			break;
		
		case 15:
			return Global_262145.f_16467;
			break;
		
		case 16:
			return Global_262145.f_16468;
			break;
		
		case 17:
			return Global_262145.f_16469;
			break;
		
		case 18:
			return Global_262145.f_16470;
			break;
		
		case 19:
			return Global_262145.f_16471;
			break;
		
		case 20:
			return Global_262145.f_16472;
			break;
		
		case 21:
			return Global_262145.f_16473;
			break;
		
		case 22:
			return Global_262145.f_16474;
			break;
		
		case 23:
			return Global_262145.f_16475;
			break;
		
		case 24:
			return Global_262145.f_16476;
			break;
	}
	return 0;
}

var func_783(int iParam0)
{
	if (iParam0 >= Global_262145.f_15507)
	{
		return Global_262145.f_15528;
	}
	else if (iParam0 >= Global_262145.f_15506)
	{
		return Global_262145.f_15527;
	}
	else if (iParam0 >= Global_262145.f_15505)
	{
		return Global_262145.f_15526;
	}
	else if (iParam0 >= Global_262145.f_15504)
	{
		return Global_262145.f_15525;
	}
	else if (iParam0 >= Global_262145.f_15503)
	{
		return Global_262145.f_15524;
	}
	else if (iParam0 >= Global_262145.f_15502)
	{
		return Global_262145.f_15523;
	}
	else if (iParam0 >= Global_262145.f_15501)
	{
		return Global_262145.f_15522;
	}
	else if (iParam0 >= Global_262145.f_15500)
	{
		return Global_262145.f_15521;
	}
	else if (iParam0 >= Global_262145.f_15499)
	{
		return Global_262145.f_15520;
	}
	else if (iParam0 >= Global_262145.f_15498)
	{
		return Global_262145.f_15519;
	}
	else if (iParam0 >= Global_262145.f_15497)
	{
		return Global_262145.f_15518;
	}
	else if (iParam0 >= Global_262145.f_15496)
	{
		return Global_262145.f_15517;
	}
	else if (iParam0 >= Global_262145.f_15495)
	{
		return Global_262145.f_15516;
	}
	else if (iParam0 >= Global_262145.f_15494)
	{
		return Global_262145.f_15515;
	}
	else if (iParam0 >= Global_262145.f_15493)
	{
		return Global_262145.f_15514;
	}
	else if (iParam0 >= Global_262145.f_15492)
	{
		return Global_262145.f_15513;
	}
	else if (iParam0 >= Global_262145.f_15491)
	{
		return Global_262145.f_15512;
	}
	else if (iParam0 >= Global_262145.f_15490)
	{
		return Global_262145.f_15511;
	}
	else if (iParam0 >= Global_262145.f_15489)
	{
		return Global_262145.f_15510;
	}
	else if (iParam0 >= Global_262145.f_15488)
	{
		return Global_262145.f_15509;
	}
	return Global_262145.f_15508;
}

int func_784(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_788(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_787(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_786(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_785(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_785(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_786(unk_0xB36B8558948EA7A8(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_785(int iParam0)
{
	int iVar0;
	
	if (func_42(iParam0))
	{
		iVar0 = func_527(func_545(iParam0));
		return func_526(iVar0, -1, 0);
	}
	return 0;
}

int func_786(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_15707;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_15705;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_15709;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_15703;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_15701;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_15711;
	}
	return 0;
}

int func_787(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_42(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1683674[iVar0] == iParam1 && Global_1683681[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_788(int iParam0)
{
	int iVar0;
	
	if (func_42(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_108[iVar0 /*3*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_789()
{
	int iVar0;
	
	iVar0 = Global_2595528[func_36()];
	iVar0++;
	Global_2595528[func_36()] = iVar0;
	func_528(3667, iVar0, -1, 1);
}

void func_790()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2595525[func_36()];
	iVar1 = Global_2595534[func_36()];
	iVar0++;
	iVar1++;
	Global_2595525[func_36()] = iVar0;
	Global_2595534[func_36()] = iVar1;
	Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_130 = iVar1;
	func_528(3665, iVar0, -1, 1);
	func_528(3666, iVar1, -1, 1);
}

void func_791()
{
	if (func_663())
	{
		Global_2453903.f_3075.f_134 = 0;
		Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_424 = Global_2453903.f_3075.f_134;
	}
}

void func_792()
{
	if (func_663())
	{
		if (Global_2453903.f_3075.f_134 < 10)
		{
			Global_2453903.f_3075.f_134++;
			Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_424 = Global_2453903.f_3075.f_134;
		}
	}
}

void func_793()
{
	if (func_663())
	{
		if (Global_2453903.f_3075.f_134 > 0)
		{
			Global_2453903.f_3075.f_134 = (Global_2453903.f_3075.f_134 - 1);
			Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_424 = Global_2453903.f_3075.f_134;
		}
	}
}

int func_794(int iParam0)
{
	return Global_1630816[iParam0 /*597*/].f_11.f_28;
}

int func_795(int iParam0)
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
			if (func_671(1) && !func_384(1))
			{
				if (func_796(func_673()))
				{
					return 1;
				}
			}
			break;
	}
	if (func_262(iParam0) == 0)
	{
		if (func_671(1) && !func_384(1))
		{
			if (func_796(func_673()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_796(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_27, 26);
}

int func_797(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return Global_262145.f_18460;
	}
	switch (iParam0)
	{
		case 142:
			return round((IntToFloat(Global_262145.f_12684) * Global_262145.f_12689));
		
		case 157:
			return 0;
		
		case 159:
			return round((IntToFloat(Global_262145.f_12634) * Global_262145.f_12639));
		
		case 151:
			return 0;
		
		case 148:
			return round((IntToFloat(Global_262145.f_12661) * Global_262145.f_12665));
		
		case 164:
			return round((IntToFloat(Global_262145.f_12674) * Global_262145.f_12678));
		
		case 152:
			return round((IntToFloat(Global_262145.f_12696) * Global_262145.f_12701));
		
		case 153:
			return round((IntToFloat(Global_262145.f_12858) * Global_262145.f_12859));
		
		case 154:
			return round((IntToFloat(Global_262145.f_12864) * Global_262145.f_12865));
		
		case 155:
			return round((IntToFloat(Global_262145.f_12862) * Global_262145.f_12863));
		
		case 160:
			return round((IntToFloat(Global_262145.f_12856) * Global_262145.f_12857));
		
		case 162:
			return round((IntToFloat(Global_262145.f_12860) * Global_262145.f_12861));
		
		case 163:
			return round((IntToFloat(Global_262145.f_12854) * Global_262145.f_12855));
		
		case 170:
			return 0;
		
		case 171:
			return Global_262145.f_15230;
		
		case 172:
			return Global_262145.f_15246;
		
		case 173:
			return Global_262145.f_15189;
		
		case 166:
			return 0;
		
		case 179:
			return Global_262145.f_18468;
		
		case 180:
			return Global_262145.f_18343;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_18351;
		
		case 185:
			return Global_262145.f_18360;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_18556;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_18573;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_18420;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_18604;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_18482;
		
		case 205:
			return Global_262145.f_18591;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_18449;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_18586;
		
		case 211:
			return Global_262145.f_18550;
		
		case 214:
			return Global_262145.f_19144;
		
		case 215:
			return Global_262145.f_19154;
		
		case 216:
			return Global_262145.f_19164;
		
		case 217:
			return Global_262145.f_19173;
		
		case 218:
			return Global_262145.f_19182;
		
		case 219:
			return Global_262145.f_19198;
		
		case 241:
			return Global_262145.f_24278;
		
		case 242:
			return Global_262145.f_24274;
		
		case 248:
			return Global_262145.f_24277;
		
		case 244:
			return Global_262145.f_24275;
		
		case 239:
			return Global_262145.f_24279;
		
		case 240:
			return Global_262145.f_24280;
		
		case 243:
			return Global_262145.f_26588;
		
		default:
	}
	return 0;
}

int func_798(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return Global_262145.f_18461;
	}
	switch (iParam0)
	{
		case 142:
			return round((IntToFloat(Global_262145.f_12685) * Global_262145.f_12690));
		
		case 157:
			return 0;
		
		case 159:
			return round((IntToFloat(Global_262145.f_12635) * Global_262145.f_12640));
		
		case 151:
			return 0;
		
		case 148:
			return round((IntToFloat(Global_262145.f_12662) * Global_262145.f_12666));
		
		case 164:
			return round((IntToFloat(Global_262145.f_12675) * Global_262145.f_12679));
		
		case 152:
			return round((IntToFloat(Global_262145.f_12697) * Global_262145.f_12702));
		
		case 153:
			return round((IntToFloat(Global_262145.f_12734) * Global_262145.f_12737));
		
		case 154:
			return round((IntToFloat(Global_262145.f_12780) * Global_262145.f_12783));
		
		case 155:
			return round((IntToFloat(Global_262145.f_12770) * Global_262145.f_12773));
		
		case 160:
			return round((IntToFloat(Global_262145.f_12725) * Global_262145.f_12728));
		
		case 162:
			return round((IntToFloat(Global_262145.f_12745) * Global_262145.f_12750));
		
		case 163:
			return round((IntToFloat(Global_262145.f_12710) * Global_262145.f_12713));
		
		case 170:
			return Global_262145.f_15172;
		
		case 171:
			return Global_262145.f_15231;
		
		case 172:
			return Global_262145.f_15247;
		
		case 173:
			return Global_262145.f_15190;
		
		case 166:
			return 0;
		
		case 167:
			return Global_262145.f_17269;
		
		case 168:
			return Global_262145.f_17268;
		
		case 179:
			return Global_262145.f_18469;
		
		case 180:
			return Global_262145.f_18344;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_18352;
		
		case 185:
			return Global_262145.f_18361;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_18557;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_18574;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_18421;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_18605;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_18483;
		
		case 205:
			return Global_262145.f_18592;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_18450;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_18587;
		
		case 211:
			return Global_262145.f_18551;
		
		case 214:
			return Global_262145.f_19145;
		
		case 215:
			return Global_262145.f_19155;
		
		case 216:
			return Global_262145.f_19165;
		
		case 217:
			return Global_262145.f_19174;
		
		case 218:
			return Global_262145.f_19183;
		
		case 219:
			return Global_262145.f_19199;
		
		case 178:
			if (func_663())
			{
				return Global_262145.f_19022;
			}
			else if (bParam1)
			{
				return Global_262145.f_19023;
			}
			break;
		
		case 188:
			if (func_663())
			{
				return Global_262145.f_19106;
			}
			else if (bParam1)
			{
				return Global_262145.f_19107;
			}
			break;
		
		case 225:
			if (func_663() && !func_650())
			{
				if (func_796(unk_0x1146A9AE09CE2B14()))
				{
					return Global_262145.f_21229;
				}
				else
				{
					return Global_262145.f_21230;
				}
			}
			else if (func_650())
			{
				return Global_262145.f_21231;
			}
			break;
		
		case 226:
			if (func_663() && !func_650())
			{
				if (func_796(unk_0x1146A9AE09CE2B14()))
				{
					return Global_262145.f_21209;
				}
				else
				{
					return Global_262145.f_21210;
				}
			}
			else if (func_650())
			{
				return Global_262145.f_21211;
			}
			break;
		
		case 227:
			if (func_663() && !func_650())
			{
				if (func_796(unk_0x1146A9AE09CE2B14()))
				{
					return Global_262145.f_21221;
				}
				else
				{
					return Global_262145.f_21222;
				}
			}
			else if (func_650())
			{
				return Global_262145.f_21223;
			}
			break;
		
		case 229:
			if (func_663() && !func_650())
			{
				if (func_796(unk_0x1146A9AE09CE2B14()))
				{
					return Global_262145.f_22388;
				}
				else
				{
					return Global_262145.f_22389;
				}
			}
			else if (func_650())
			{
				return Global_262145.f_22390;
			}
			break;
		
		case 230:
			if (func_663() && !func_650())
			{
				if (func_796(unk_0x1146A9AE09CE2B14()))
				{
					return Global_262145.f_22484;
				}
				else
				{
					return Global_262145.f_22485;
				}
			}
			else if (func_650())
			{
				return Global_262145.f_22486;
			}
			break;
		
		case 233:
			if (func_663() && !func_650())
			{
				if (func_796(unk_0x1146A9AE09CE2B14()))
				{
					return Global_262145.f_22964;
				}
				else
				{
					return Global_262145.f_22965;
				}
			}
			else if (func_650())
			{
				return Global_262145.f_22963;
			}
			break;
		
		case 241:
			return Global_262145.f_24285;
		
		case 242:
			return Global_262145.f_24281;
		
		case 244:
			return Global_262145.f_24282;
		
		case 248:
			return Global_262145.f_24284;
		
		case 239:
			return Global_262145.f_24286;
		
		case 240:
			return Global_262145.f_24287;
		
		case 237:
			if (func_663() && !func_650())
			{
				if (func_796(unk_0x1146A9AE09CE2B14()))
				{
					return Global_262145.f_24127;
				}
				else
				{
					return Global_262145.f_24128;
				}
			}
			else if (func_650())
			{
				return Global_262145.f_24129;
			}
			break;
		
		case 238:
			if (func_663() && !func_650())
			{
				if (func_796(unk_0x1146A9AE09CE2B14()))
				{
					return Global_262145.f_24238;
				}
				else
				{
					return Global_262145.f_24239;
				}
			}
			else if (func_650())
			{
				return Global_262145.f_24240;
			}
			break;
		
		case 249:
			if (func_663() && !func_650())
			{
				if (func_796(unk_0x1146A9AE09CE2B14()))
				{
					return Global_262145.f_24254;
				}
				else
				{
					return Global_262145.f_24255;
				}
			}
			else if (func_650())
			{
				return Global_262145.f_24256;
			}
			break;
		
		case 243:
			if (func_663() && !func_650())
			{
				if (func_796(unk_0x1146A9AE09CE2B14()))
				{
					return Global_262145.f_26591;
				}
				else
				{
					return Global_262145.f_26592;
				}
			}
			else if (func_650())
			{
				return Global_262145.f_26591;
			}
			break;
		
		case 158:
			if (func_663() && !func_650())
			{
				if (func_796(unk_0x1146A9AE09CE2B14()))
				{
					return 1500;
				}
				else
				{
					return 1000;
				}
			}
			else if (func_650())
			{
				return 1500;
			}
			break;
	}
	return 0;
}

void func_799(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_800(iParam0))
	{
		if (!func_663())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_12578;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (func_319(unk_0x1146A9AE09CE2B14(), 1))
	{
		if (func_465(iParam0))
		{
			*uParam1 = (Global_262145.f_18320 / 100f);
			*uParam2 = (Global_262145.f_18320 / 100f);
		}
		else if (iParam0 == 242)
		{
			*uParam1 = Global_262145.f_24288;
			*uParam2 = Global_262145.f_24288;
		}
		else if (iParam0 == 244)
		{
			*uParam1 = Global_262145.f_24289;
			*uParam2 = Global_262145.f_24289;
		}
		else if (iParam0 == 248)
		{
			*uParam1 = Global_262145.f_24291;
			*uParam2 = Global_262145.f_24291;
		}
		else if (iParam0 == 241)
		{
			*uParam1 = Global_262145.f_24292;
			*uParam2 = Global_262145.f_24292;
		}
		else if (iParam0 == 239)
		{
			*uParam1 = Global_262145.f_24293;
			*uParam2 = Global_262145.f_24293;
		}
		else if (iParam0 == 240)
		{
			*uParam1 = Global_262145.f_24294;
			*uParam2 = Global_262145.f_24294;
		}
		else
		{
			*uParam1 = Global_262145.f_12575;
			*uParam2 = Global_262145.f_12574;
		}
	}
	else if (func_465(iParam0))
	{
		*uParam1 = (Global_262145.f_18321 / 100f);
		*uParam2 = (Global_262145.f_18321 / 100f);
	}
	else if (iParam0 == 242)
	{
		*uParam1 = Global_262145.f_24295;
		*uParam2 = Global_262145.f_24295;
	}
	else if (iParam0 == 244)
	{
		*uParam1 = Global_262145.f_24296;
		*uParam2 = Global_262145.f_24296;
	}
	else if (iParam0 == 248)
	{
		*uParam1 = Global_262145.f_24298;
		*uParam2 = Global_262145.f_24298;
	}
	else if (iParam0 == 241)
	{
		*uParam1 = Global_262145.f_24299;
		*uParam2 = Global_262145.f_24299;
	}
	else if (iParam0 == 239)
	{
		*uParam1 = Global_262145.f_24300;
		*uParam2 = Global_262145.f_24300;
	}
	else if (iParam0 == 240)
	{
		*uParam1 = Global_262145.f_24301;
		*uParam2 = Global_262145.f_24301;
	}
	else
	{
		*uParam1 = Global_262145.f_12577;
		*uParam2 = Global_262145.f_12576;
	}
	iVar0 = func_387();
	if (iVar0 != func_57())
	{
		if (func_352(unk_0x1146A9AE09CE2B14(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_800(int iParam0)
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

void func_801(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x02BFF15CAA701972())
	{
		return;
	}
	if (bParam9)
	{
		iVar0 = func_311(unk_0x1146A9AE09CE2B14());
		Global_1682001.f_4 = func_920();
		Global_1682001.f_5 = func_919();
		if (func_274(unk_0x1146A9AE09CE2B14()) || func_275(unk_0x1146A9AE09CE2B14()))
		{
			Global_1682001.f_6 = 1;
		}
		else
		{
			Global_1682001.f_6 = 0;
		}
		Global_1682001.f_1 = func_913(bParam9);
		Global_1682001.f_8 = unk_0x666C16A4ED8F3098();
		Global_1682001.f_9 = func_912(bParam0);
		Global_1682001.f_10 = iParam1;
		Global_1682001.f_17 = Global_1682001.f_2;
		Global_1682001.f_18 = Global_1682001.f_2;
		Global_1682001.f_19 = func_911();
		Global_1682001.f_21 = (Global_1682001.f_8 - Global_1682001.f_7);
		if (func_319(unk_0x1146A9AE09CE2B14(), 1))
		{
			Global_1682001.f_23 = func_912(func_384(1));
		}
		Global_1682001.f_24 = func_910(unk_0x1146A9AE09CE2B14());
		Global_1682001.f_28 = func_909(unk_0x1146A9AE09CE2B14());
		if (Global_1682001.f_24 > 2)
		{
			Global_1682001.f_24 = 2;
		}
		func_907(iVar0);
	}
	else
	{
		iVar0 = func_248(unk_0x1146A9AE09CE2B14());
	}
	if (func_465(iVar0))
	{
		Global_1681740.f_2 = func_920();
		Global_1681740.f_3 = func_919();
		Global_1681740.f_50 = iParam4;
		Global_1681740.f_51 = iParam5;
		Global_1681740.f_10 = unk_0x666C16A4ED8F3098();
		Global_1681740.f_20 = (Global_1681740.f_10 - Global_1681740.f_9);
		Global_1681740.f_12 = iParam1;
		Global_1681740.f_19 = func_903(iVar0, bParam0, func_906(bParam3));
		if (bParam0)
		{
			Global_1681740.f_11 = 1;
		}
		else
		{
			Global_1681740.f_11 = 0;
		}
		if ((func_271(unk_0x1146A9AE09CE2B14()) || func_430(unk_0x1146A9AE09CE2B14())) || func_237(unk_0x1146A9AE09CE2B14()))
		{
			Global_1681740.f_8 = 1;
		}
		else
		{
			Global_1681740.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_1681740.f_43 = 0;
			Global_1681740.f_45 = func_902(func_673(), iParam2);
			Global_1681740.f_47 = iParam7;
			Global_1681740.f_46 = iParam6;
			Global_1681740.f_52 = func_901(func_673(), iParam2);
		}
		func_899(iVar0);
	}
	else if (func_470(iVar0))
	{
		Global_1681794.f_2 = func_920();
		Global_1681794.f_3 = func_919();
		Global_1681794.f_10 = unk_0x666C16A4ED8F3098();
		Global_1681794.f_19 = (Global_1681794.f_10 - Global_1681794.f_9);
		Global_1681794.f_12 = iParam1;
		if (bParam0)
		{
			Global_1681794.f_11 = 1;
		}
		else
		{
			Global_1681794.f_11 = 0;
		}
		if ((func_271(unk_0x1146A9AE09CE2B14()) || func_430(unk_0x1146A9AE09CE2B14())) || func_237(unk_0x1146A9AE09CE2B14()))
		{
			Global_1681794.f_8 = 1;
		}
		else
		{
			Global_1681794.f_8 = 0;
		}
		func_897(iVar0);
	}
	else if (func_579(iVar0))
	{
		Global_1681857.f_2 = func_920();
		Global_1681857.f_3 = func_919();
		Global_1681857.f_9 = unk_0x666C16A4ED8F3098();
		Global_1681857.f_18 = (Global_1681857.f_9 - Global_1681857.f_8);
		Global_1681857.f_11 = iParam1;
		Global_1681857.f_7 = func_911();
		Global_1681857.f_42 = func_895(func_36(), 5);
		iVar1 = unk_0x1146A9AE09CE2B14();
		iVar2 = func_662(iVar1);
		Global_1681857.f_28 = iVar2;
		Global_1681857.f_29 = func_912((func_894(iVar1) || func_893(iVar1)));
		Global_1681857.f_30 = func_912(func_892(iVar1));
		Global_1681857.f_32 = func_912(func_891(iVar1));
		Global_1681857.f_33 = func_912(func_890(iVar1));
		Global_1681857.f_34 = func_912(func_889(iVar1));
		Global_1681857.f_35 = func_912(func_888(0, iVar1) == 1);
		Global_1681857.f_36 = func_912(func_887(iVar1));
		Global_1681857.f_37 = func_912(func_886(iVar1));
		Global_1681857.f_38 = func_912(func_885(iVar1));
		Global_1681857.f_39 = func_912(func_772(iVar1, iVar2, 0));
		Global_1681857.f_40 = func_912(func_772(iVar1, iVar2, 2));
		Global_1681857.f_41 = func_912(func_772(iVar1, iVar2, 1));
		if (func_884(iVar1))
		{
			Global_1681857.f_31 = 2;
		}
		else if (func_883(iVar1))
		{
			Global_1681857.f_31 = 1;
		}
		if (bParam0)
		{
			Global_1681857.f_10 = 1;
		}
		else
		{
			Global_1681857.f_10 = 0;
		}
		if ((func_271(unk_0x1146A9AE09CE2B14()) || func_430(unk_0x1146A9AE09CE2B14())) || func_237(unk_0x1146A9AE09CE2B14()))
		{
			Global_1681857.f_6 = 1;
		}
		else
		{
			Global_1681857.f_6 = 0;
		}
		Global_1681857.f_21 = -2;
		Global_1681857.f_22 = -2;
		func_881(iVar0);
	}
	else if (func_577(iVar0))
	{
		Global_1681901.f_2 = func_920();
		Global_1681901.f_3 = func_919();
		if ((func_271(unk_0x1146A9AE09CE2B14()) || func_430(unk_0x1146A9AE09CE2B14())) || func_237(unk_0x1146A9AE09CE2B14()))
		{
			Global_1681901.f_6 = 1;
		}
		else
		{
			Global_1681901.f_6 = 0;
		}
		Global_1681901.f_9 = unk_0x666C16A4ED8F3098();
		Global_1681901.f_10 = func_912(bParam0);
		Global_1681901.f_11 = iParam1;
		Global_1681901.f_17 = func_880(func_387());
		Global_1681901.f_18 = (Global_1681901.f_9 - Global_1681901.f_8);
		Global_1681901.f_20 = iParam8;
		Global_1681901.f_21 = -2;
		Global_1681901.f_22 = -2;
		Global_1681901.f_27 = func_879();
		Global_1681901.f_29 = func_526(6109, -1, 0);
		Global_1681901.f_30 = func_526(6105, -1, 0);
		Global_1681901.f_31 = func_526(6106, -1, 0);
		Global_1681901.f_32 = func_526(6108, -1, 0);
		Global_1681901.f_33 = func_526(6107, -1, 0);
		Global_1681901.f_34 = func_526(6110, -1, 0);
		Global_1681901.f_36 = func_912(func_384(1));
		Global_1681901.f_37 = func_877();
		func_863();
		func_861(iVar0);
	}
	else if (func_575(iVar0))
	{
		Global_1681955.f_2 = func_920();
		Global_1681955.f_3 = func_919();
		if ((func_271(unk_0x1146A9AE09CE2B14()) || func_430(unk_0x1146A9AE09CE2B14())) || func_237(unk_0x1146A9AE09CE2B14()))
		{
			Global_1681955.f_6 = 1;
		}
		else
		{
			Global_1681955.f_6 = 0;
		}
		Global_1681955.f_9 = unk_0x666C16A4ED8F3098();
		Global_1681955.f_10 = func_912(bParam0);
		Global_1681955.f_11 = iParam1;
		Global_1681955.f_18 = (Global_1681955.f_9 - Global_1681955.f_8);
		Global_1681955.f_20 = iParam8;
		Global_1681955.f_23 = Global_786547;
		Global_1681955.f_36 = Global_786547.f_1;
		Global_1681955.f_24 = func_526(6159, -1, 0);
		Global_1681955.f_25 = func_526(6164, -1, 0);
		Global_1681955.f_26 = func_526(6165, -1, 0);
		Global_1681955.f_27 = func_912((((func_860() || func_859()) || func_858()) || func_857(unk_0x1146A9AE09CE2B14())));
		Global_1681955.f_28 = func_526(6166, -1, 0);
		Global_1681955.f_29 = func_912(func_856());
		Global_1681955.f_35 = -1;
		Global_1681955.f_38 = -1;
		Global_1681955.f_39 = Global_1681955.f_4;
		Global_1681955.f_40 = Global_1681955.f_5;
		Global_1681955.f_41 = func_920();
		Global_1681955.f_42 = func_912(func_384(1));
		Global_1681955.f_44 = Global_1681955.f_18;
		func_854(iVar0);
	}
	else if (func_641(iVar0))
	{
		if (Global_1682091.f_2 == -1)
		{
			Global_1682091.f_2 = func_920();
		}
		if (Global_1682091.f_3 == -1)
		{
			Global_1682091.f_3 = func_919();
		}
		if ((func_271(unk_0x1146A9AE09CE2B14()) || func_430(unk_0x1146A9AE09CE2B14())) || func_237(unk_0x1146A9AE09CE2B14()))
		{
			Global_1682091.f_6 = 1;
		}
		else
		{
			Global_1682091.f_6 = 0;
		}
		Global_1682091.f_1 = func_913(0);
		Global_1682091.f_7 = func_911();
		Global_1682091.f_9 = unk_0x666C16A4ED8F3098();
		Global_1682091.f_10 = func_912(bParam0);
		Global_1682091.f_11 = iParam1;
		if (func_673() != -1)
		{
			Global_1682091.f_17 = func_853(func_673());
		}
		Global_1682091.f_18 = (Global_1682091.f_9 - Global_1682091.f_8);
		Global_1682091.f_19 = Global_2544210.f_6682;
		Global_1682091.f_28 = func_909(unk_0x1146A9AE09CE2B14());
		Global_1682091.f_29 = func_912(func_852(unk_0x1146A9AE09CE2B14()));
		Global_1682091.f_30 = func_912(func_851(unk_0x1146A9AE09CE2B14()));
		Global_1682091.f_31 = func_850(unk_0x1146A9AE09CE2B14());
		if (func_319(unk_0x1146A9AE09CE2B14(), 1))
		{
			Global_1682091.f_33 = func_912(func_384(1));
		}
		if (Global_1682091.f_34 > 2)
		{
			Global_1682091.f_34 = 2;
		}
		func_848(iVar0);
	}
	else if (func_645(iVar0))
	{
		Global_1682037.f_2 = func_920();
		Global_1682037.f_3 = func_919();
		if ((func_271(unk_0x1146A9AE09CE2B14()) || func_430(unk_0x1146A9AE09CE2B14())) || func_237(unk_0x1146A9AE09CE2B14()))
		{
			Global_1682037.f_6 = 1;
		}
		else
		{
			Global_1682037.f_6 = 0;
		}
		Global_1682037.f_1 = func_913(0);
		Global_1682037.f_9 = unk_0x666C16A4ED8F3098();
		Global_1682037.f_10 = func_912(bParam0);
		Global_1682037.f_11 = iParam1;
		Global_1682037.f_18 = (Global_1682037.f_9 - Global_1682037.f_8);
		Global_1682037.f_28 = func_909(unk_0x1146A9AE09CE2B14());
		if (Global_1682037.f_28)
		{
			Global_1682037.f_29 = func_847(unk_0x1146A9AE09CE2B14());
		}
		else
		{
			Global_1682037.f_29 = 0;
		}
		Global_1682037.f_30 = func_831(unk_0x1146A9AE09CE2B14(), 4, -1);
		Global_1682037.f_31 = func_850(unk_0x1146A9AE09CE2B14());
		Global_1682037.f_32 = func_912(func_830(unk_0x1146A9AE09CE2B14()));
		Global_1682037.f_33 = func_912(func_829(unk_0x1146A9AE09CE2B14()));
		Global_1682037.f_34 = func_912(func_828(unk_0x1146A9AE09CE2B14()));
		Global_1682037.f_35 = func_912(func_827(unk_0x1146A9AE09CE2B14()));
		Global_1682037.f_36 = func_826(unk_0x1146A9AE09CE2B14());
		Global_1682037.f_37 = func_825(unk_0x1146A9AE09CE2B14());
		Global_1682037.f_39 = func_824(unk_0x1146A9AE09CE2B14());
		if (func_319(unk_0x1146A9AE09CE2B14(), 1))
		{
			Global_1682037.f_41 = func_912(func_384(1));
		}
		if (Global_1682037.f_42 > 2)
		{
			Global_1682037.f_42 = 2;
		}
		func_822(iVar0);
	}
	else if (func_640(iVar0))
	{
		Global_1682175.f_2 = func_920();
		Global_1682175.f_3 = func_919();
		Global_1682175.f_4 = func_821(func_673());
		Global_1682175.f_5 = func_820(func_673());
		if ((func_271(unk_0x1146A9AE09CE2B14()) || func_430(unk_0x1146A9AE09CE2B14())) || func_237(unk_0x1146A9AE09CE2B14()))
		{
			Global_1682175.f_6 = 1;
		}
		else
		{
			Global_1682175.f_6 = 0;
		}
		Global_1682175.f_7 = func_911();
		Global_1682175.f_9 = unk_0x666C16A4ED8F3098();
		Global_1682175.f_10 = func_912(bParam0);
		Global_1682175.f_11 = iParam1;
		if (func_387() != -1)
		{
			Global_1682175.f_17 = func_853(func_387());
		}
		Global_1682175.f_18 = (Global_1682175.f_9 - Global_1682175.f_8);
		Global_1682175.f_21 = 1;
		Global_1682175.f_22 = 1;
		Global_1682175.f_25 = func_819(unk_0x1146A9AE09CE2B14());
		Global_1682175.f_27 = func_912(func_818(unk_0x1146A9AE09CE2B14()));
		Global_1682175.f_28 = func_814(21, -1);
		Global_1682175.f_29 = func_912(func_813(unk_0x1146A9AE09CE2B14()));
		func_811(iVar0);
	}
	else if (func_569(iVar0))
	{
		if (func_673() != -1)
		{
			Global_1682250.f_6 = func_821(func_673());
			Global_1682250.f_7 = func_820(func_673());
		}
		if (func_319(unk_0x1146A9AE09CE2B14(), 1))
		{
			Global_1682250.f_8 = func_912(func_384(1));
		}
		Global_1682250.f_10 = func_911();
		Global_1682250.f_11 = 1;
		Global_1682250.f_13 = (unk_0x666C16A4ED8F3098() - Global_1710053);
		Global_1682250.f_14 = iParam1;
		Global_1682250.f_19 = 1;
		Global_1682250.f_20 = 1;
		func_809(iVar0);
	}
	else if (func_568(iVar0))
	{
		Global_1682337.f_2 = func_920();
		if (func_673() != -1)
		{
			Global_1682337.f_6 = func_821(func_673());
			Global_1682337.f_7 = func_820(func_673());
		}
		Global_1682337.f_8 = func_912(func_384(1));
		Global_1682337.f_10 = func_911();
		Global_1682337.f_11 = 1;
		Global_1682337.f_14 = iParam1;
		func_807(iVar0);
	}
	else if (func_806(iVar0))
	{
		Global_1682449.f_2 = func_920();
		Global_1682449.f_9 = 1;
		Global_1682449.f_10 = bParam0;
		Global_1682449.f_11 = iParam1;
		func_804(iVar0);
	}
	else if (func_562(iVar0))
	{
		if (func_673() != -1)
		{
			Global_1682470.f_5 = func_821(func_673());
			Global_1682470.f_6 = func_820(func_673());
		}
		Global_1682470.f_7 = func_912(func_384(1));
		Global_1682470.f_9 = func_911();
		Global_1682470.f_10 = 1;
		Global_1682470.f_13 = iParam1;
		func_802(iVar0);
	}
	else
	{
		Global_1681722.f_6 = unk_0x666C16A4ED8F3098();
		if (bParam0)
		{
			Global_1681722.f_7 = 1;
		}
		else
		{
			Global_1681722.f_7 = 0;
		}
		Global_1681722.f_8 = iParam1;
		if (Global_1681722.f_4 == 0)
		{
			if ((func_271(unk_0x1146A9AE09CE2B14()) || func_430(unk_0x1146A9AE09CE2B14())) || func_237(unk_0x1146A9AE09CE2B14()))
			{
				Global_1681722.f_4 = 1;
			}
		}
	}
}

void func_802(int iParam0)
{
	unk_0x1A67DFBF1F5C3835(&Global_1682470);
	func_803();
}

void func_803()
{
	struct<32> Var0;
	
	Global_1682470 = { Var0 };
}

void func_804(int iParam0)
{
	unk_0x47F6F4E3A427902C(&Global_1682449);
	func_805();
}

void func_805()
{
	struct<21> Var0;
	
	Global_1682449 = { Var0 };
}

int func_806(int iParam0)
{
	switch (iParam0)
	{
		case 258:
			return 1;
		
		default:
	}
	return 0;
}

void func_807(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x4E1CF9E6DC044F6E(&Global_1682337);
	func_808();
}

void func_808()
{
	struct<35> Var0;
	
	Global_1682337 = { Var0 };
	Global_1682337.f_23 = 0;
	Global_1682337.f_22 = 0;
	Global_1682337.f_21 = 0;
}

void func_809(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0xE895584921D5DCB3(&Global_1682250);
	func_810();
}

void func_810()
{
	struct<36> Var0;
	
	Global_1682250 = { Var0 };
	Global_1682250.f_23 = 0;
	Global_1682250.f_22 = 0;
	Global_1682250.f_21 = 0;
}

void func_811(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x75C657917FB4003B(&Global_1682175);
	func_812();
}

void func_812()
{
	struct<31> Var0;
	
	Global_1682175 = { Var0 };
}

int func_813(int iParam0)
{
	if (iParam0 != func_57())
	{
		return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_371.f_2, 6);
	}
	return 0;
}

int func_814(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_36();
	}
	if (iParam0 == 7 && !Global_262145.f_17163)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_817(iParam0);
		if (iVar1 == 0 && func_526(5395, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_816(-1) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_909(unk_0x1146A9AE09CE2B14()) && iVar1 == 1)
		{
			return 1237;
		}
		if (func_815(-1) && iVar1 == 3)
		{
			return 1238;
		}
	}
	if (iParam0 == 0)
	{
		return Global_1390533[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_2595490[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 26)
		{
			return 0;
		}
		return Global_2595335[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

bool func_815(int iParam0)
{
	return func_526(9516, iParam0, 0) != 0;
}

bool func_816(int iParam0)
{
	if (!Global_262145.f_23851)
	{
		return 0;
	}
	return func_526(7209, iParam0, 0) != 0;
}

int func_817(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 4)
	{
		return iParam0;
	}
	return -1;
}

int func_818(int iParam0)
{
	if (iParam0 != func_57())
	{
		return Global_1590908[iParam0 /*874*/].f_267.f_371 != 0;
	}
	return 0;
}

int func_819(int iParam0)
{
	if (func_248(iParam0) == 243)
	{
		return func_644(iParam0);
	}
	return -1;
}

int func_820(int iParam0)
{
	if (iParam0 == func_57())
	{
		return -1;
	}
	return Global_1630816[iParam0 /*597*/].f_11.f_8[1];
}

int func_821(int iParam0)
{
	if (iParam0 == func_57())
	{
		return -1;
	}
	return Global_1630816[iParam0 /*597*/].f_11.f_8[0];
}

void func_822(int iParam0)
{
	unk_0xB1E79F9A1E81311C(&Global_1682037);
	func_823();
}

void func_823()
{
	struct<54> Var0;
	
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
	Global_1682037 = { Var0 };
}

int func_824(int iParam0)
{
	if (iParam0 != func_57())
	{
		return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_336, 12);
	}
	return 0;
}

int func_825(int iParam0)
{
	if (iParam0 != func_57())
	{
		return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_336, 10);
	}
	return 0;
}

int func_826(int iParam0)
{
	if (iParam0 != func_57())
	{
		return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_336, 11);
	}
	return 0;
}

bool func_827(int iParam0)
{
	if (iParam0 == func_57())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 4);
}

bool func_828(int iParam0)
{
	if (iParam0 == func_57())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 3);
}

bool func_829(int iParam0)
{
	if (iParam0 == func_57())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 2);
}

bool func_830(int iParam0)
{
	if (iParam0 == func_57())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 1);
}

int func_831(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == func_57() || !func_846(iParam1))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			return func_841(iParam0, iParam2);
		
		case 1:
			return func_839(iParam0, iParam2);
		
		case 3:
			return func_838(iParam0);
		
		case 2:
			return func_833(iParam0, iParam2);
		
		case 4:
			return func_832(iParam0);
		
		default:
	}
	return 0;
}

bool func_832(int iParam0)
{
	if (unk_0xE45310E861787FC2())
	{
		return unk_0x234B68AC2E35ED5A(Global_4456448.f_127840.f_14, 6);
	}
	if (iParam0 == func_57())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 6);
}

int func_833(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 10:
			return func_837(iParam0);
		
		case 11:
			return func_836(iParam0);
		
		case 12:
			return func_835(iParam0);
		
		case 13:
			return func_834(iParam0);
		
		default:
	}
	return 0;
}

bool func_834(int iParam0)
{
	if (iParam0 == func_57())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 15);
}

bool func_835(int iParam0)
{
	if (iParam0 == func_57())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 14);
}

bool func_836(int iParam0)
{
	if (iParam0 == func_57())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 13);
}

bool func_837(int iParam0)
{
	if (iParam0 == func_57())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 12);
}

bool func_838(int iParam0)
{
	if (unk_0xE45310E861787FC2())
	{
		return unk_0x234B68AC2E35ED5A(Global_4456448.f_127840.f_14, 11);
	}
	if (iParam0 == func_57())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 5);
}

int func_839(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 5:
			return func_840(iParam0);
		
		case 6:
			return func_830(iParam0);
		
		case 7:
			return func_829(iParam0);
		
		case 8:
			return func_828(iParam0);
		
		case 9:
			return func_827(iParam0);
		
		default:
	}
	return 0;
}

bool func_840(int iParam0)
{
	if (iParam0 == func_57())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 0);
}

int func_841(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_845(iParam0);
		
		case 1:
			return func_844(iParam0);
		
		case 2:
			return func_843(iParam0);
		
		case 3:
			return func_842(iParam0);
		
		case 4:
			return func_850(iParam0);
		
		default:
	}
	return 0;
}

bool func_842(int iParam0)
{
	if (iParam0 == func_57())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 10);
}

bool func_843(int iParam0)
{
	if (iParam0 == func_57())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 9);
}

bool func_844(int iParam0)
{
	if (iParam0 == func_57())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 8);
}

bool func_845(int iParam0)
{
	if (iParam0 == func_57())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 7);
}

bool func_846(int iParam0)
{
	return (iParam0 != -1 && iParam0 != 6);
}

int func_847(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_57())
	{
		return 0;
	}
	iVar0 = 1;
	if (func_831(iParam0, 2, 13))
	{
		iVar0 = 5;
	}
	else if (func_831(iParam0, 2, 12))
	{
		iVar0 = 4;
	}
	else if (func_831(iParam0, 2, 11))
	{
		iVar0 = 3;
	}
	else if (func_831(iParam0, 2, 10))
	{
		iVar0 = 2;
	}
	return iVar0;
}

void func_848(int iParam0)
{
	unk_0x63C4B5C08A6803B2(&Global_1682091);
	func_849();
}

void func_849()
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
	Global_1682091 = { Var0 };
}

int func_850(int iParam0)
{
	if (unk_0xE45310E861787FC2())
	{
		return unk_0x234B68AC2E35ED5A(Global_4456448.f_127840.f_14, 12);
	}
	if (iParam0 != -1)
	{
		return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_353, 31);
	}
	return 0;
}

bool func_851(int iParam0)
{
	if (iParam0 == func_57())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_324.f_1, 0);
}

bool func_852(int iParam0)
{
	if (unk_0xE45310E861787FC2())
	{
		return unk_0x234B68AC2E35ED5A(Global_4456448.f_127840.f_14, 5);
	}
	if (iParam0 == func_57())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_324.f_1, 19);
}

var func_853(int iParam0)
{
	return Global_1590908[iParam0 /*874*/].f_205.f_6;
}

void func_854(int iParam0)
{
	unk_0x347A83B3F61970C7(&Global_1681955);
	func_855();
}

void func_855()
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
	Global_1681955 = { Var0 };
	Global_1681955.f_16 = 0;
}

bool func_856()
{
	return func_526(6158, -1, 0) != 0;
}

int func_857(int iParam0)
{
	if (iParam0 != func_57())
	{
		return Global_1590908[iParam0 /*874*/].f_267.f_273 != 0;
	}
	return 0;
}

bool func_858()
{
	return func_526(6166, -1, 0) == 3;
}

bool func_859()
{
	return func_526(6166, -1, 0) == 2;
}

bool func_860()
{
	return func_526(6166, -1, 0) == 1;
}

void func_861(int iParam0)
{
	unk_0x1CB9689363D61451(&Global_1681901);
	func_862();
}

void func_862()
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
	Global_1681901 = { Var0 };
	Global_1681901.f_23 = 0;
	Global_1681901.f_24 = 0;
	Global_1681901.f_16 = 0;
}

void func_863()
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
		iVar2 = (iVar0 + func_874(12));
		func_873(iVar2, &iVar1, 1);
		if (iVar1 >= 0)
		{
			if (Global_1323703[iVar1 /*142*/].f_66 != 0 && func_865(Global_1323703[iVar1 /*142*/].f_66, 1))
			{
				if (Global_2544210.f_958 != iVar1)
				{
					if (func_864(Global_1323703[iVar1 /*142*/].f_66))
					{
						if (Global_1323703[iVar1 /*142*/].f_66 != 0)
						{
							iVar3 = Global_1323703[iVar1 /*142*/].f_66;
						}
						switch (iVar0)
						{
							case 0:
								Global_1681901.f_38 = iVar3;
								break;
							
							case 1:
								Global_1681901.f_39 = iVar3;
								break;
							
							case 2:
								Global_1681901.f_40 = iVar3;
								break;
							
							case 3:
								Global_1681901.f_41 = iVar3;
								break;
							
							case 4:
								Global_1681901.f_42 = iVar3;
								break;
							
							case 5:
								Global_1681901.f_43 = iVar3;
								break;
							
							case 6:
								Global_1681901.f_44 = iVar3;
								break;
							
							case 7:
								Global_1681901.f_45 = iVar3;
								break;
							
							case 8:
								Global_1681901.f_46 = iVar3;
								break;
							
							case 9:
								Global_1681901.f_47 = iVar3;
								break;
							}
						}
					}
				}
		}
		iVar0++;
	}
}

int func_864(int iParam0)
{
	switch (iParam0)
	{
		case joaat("buzzard"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("hydra"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("havok"):
		case joaat("hunter"):
		case joaat("volatus"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("annihilator"):
		case joaat("mogul"):
		case joaat("rogue"):
		case joaat("starling"):
		case joaat("seabreeze"):
		case joaat("microlight"):
		case joaat("tula"):
		case joaat("lazer"):
		case joaat("pyro"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("howard"):
		case joaat("bombushka"):
		case joaat("alphaz1"):
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
		case joaat("akula"):
		case joaat("volatol"):
		case joaat("strikeforce"):
		case joaat("seasparrow"):
		case joaat("alkonost"):
		case joaat("annihilator2"):
			return 1;
		
		default:
	}
	return 0;
}

int func_865(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xB4DD528ED76ED647(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !unk_0x02BFF15CAA701972()) || (iParam0 == joaat("buffalo3") && !unk_0x02BFF15CAA701972())) || (iParam0 == joaat("gauntlet2") && !unk_0x02BFF15CAA701972())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x02BFF15CAA701972()))
	{
		if (!func_872())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0xE4F2BC3D40737711())
		{
			if (unk_0x953EAC8A463313E4(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0xD1ABD511D9C326A3(Var1))
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
		if ((((!func_871() && !func_870()) && !func_869()) && !func_868()) && !func_872())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x2322DD4FBF5E4E2F() || unk_0x3640D836D145B814()) || unk_0xE22116C6D321FECA())
		{
		}
		else if (!func_869())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_867(iParam0))
		{
			return 0;
		}
	}
	if (!func_866(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_866(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_544())
	{
		return 1;
	}
	unk_0xB4989F41D2C06478(&iVar0, &uVar1);
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
	if (!unk_0x14D8BAC5AEFB49EB(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_867(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2518293)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x666C16A4ED8F3098();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_6770 && !Global_262145.f_13100) && iVar1 < Global_262145.f_13101)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14400 && iVar1 < Global_262145.f_14412)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14396 && iVar1 < Global_262145.f_14408)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14397 && iVar1 < Global_262145.f_14409)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14398 && iVar1 < Global_262145.f_14410)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14399 && iVar1 < Global_262145.f_14411)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14401 && iVar1 < Global_262145.f_14413)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14402 && iVar1 < Global_262145.f_14405)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14403 && iVar1 < Global_262145.f_14406)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14404 && iVar1 < Global_262145.f_14407)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_17032 && iVar1 < Global_262145.f_16997)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_17027 && iVar1 < Global_262145.f_16992)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_17031 && iVar1 < Global_262145.f_16996)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_17030 && iVar1 < Global_262145.f_16995)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_17024 && iVar1 < Global_262145.f_16989)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_17025 && iVar1 < Global_262145.f_16990)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_17028 && iVar1 < Global_262145.f_16993)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_17029 && iVar1 < Global_262145.f_16994)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_17026 && iVar1 < Global_262145.f_16991)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_17034 && iVar1 < Global_262145.f_16999)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_17035 && iVar1 < Global_262145.f_17000)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_17023 && iVar1 < Global_262145.f_16988)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_17022 && iVar1 < Global_262145.f_16987)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_17021 && iVar1 < Global_262145.f_16986)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_17033 && iVar1 < Global_262145.f_16998)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_17036 && iVar1 < Global_262145.f_17001)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_17037 && iVar1 < Global_262145.f_17002)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_17038 && iVar1 < Global_262145.f_17003)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_17039 && iVar1 < Global_262145.f_17004)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_17186 && iVar1 < Global_262145.f_17208)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_17187 && iVar1 < Global_262145.f_17209)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_17188 && iVar1 < Global_262145.f_17210)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_17189 && iVar1 < Global_262145.f_17211)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_17190 && iVar1 < Global_262145.f_17212)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_17191 && iVar1 < Global_262145.f_17213)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_17193 && iVar1 < Global_262145.f_17214)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_17194 && iVar1 < Global_262145.f_17215)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_17195 && iVar1 < Global_262145.f_17216)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_17196 && iVar1 < Global_262145.f_17217)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_17197 && iVar1 < Global_262145.f_17218)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_17198 && iVar1 < Global_262145.f_17219)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_17199 && iVar1 < Global_262145.f_17220)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_17205 && iVar1 < Global_262145.f_17227)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_17202 && iVar1 < Global_262145.f_17223)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_17203 && iVar1 < Global_262145.f_17224)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_17204 && iVar1 < Global_262145.f_17225)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_17192 && iVar1 < Global_262145.f_17226)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_17206 && iVar1 < Global_262145.f_17228)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_17200 && iVar1 < Global_262145.f_17221)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_17201 && iVar1 < Global_262145.f_17222)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_17207 && iVar1 < Global_262145.f_17229)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_18838 && iVar1 < Global_262145.f_18935)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_18839 && iVar1 < Global_262145.f_18936)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_18840 && iVar1 < Global_262145.f_18937)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_18841 && iVar1 < Global_262145.f_18938)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_18842 && iVar1 < Global_262145.f_18939)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_18843 && iVar1 < Global_262145.f_18940)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_18844 && iVar1 < Global_262145.f_18941)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_18845 && iVar1 < Global_262145.f_18942)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_18846 && iVar1 < Global_262145.f_18943)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_18847 && iVar1 < Global_262145.f_18944)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_18848 && iVar1 < Global_262145.f_18945)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_18849 && iVar1 < Global_262145.f_18946)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_18850 && iVar1 < Global_262145.f_18947)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_18851 && iVar1 < Global_262145.f_18948)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_18852 && iVar1 < Global_262145.f_18949)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_18853 && iVar1 < Global_262145.f_18950)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_18854 && iVar1 < Global_262145.f_18951)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_18855 && iVar1 < Global_262145.f_18952)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_18856 && iVar1 < Global_262145.f_18953)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_18857 && iVar1 < Global_262145.f_18954)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_18858 && iVar1 < Global_262145.f_18955)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18859 && iVar1 < Global_262145.f_18956)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_18860 && iVar1 < Global_262145.f_18957)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_18861 && iVar1 < Global_262145.f_18958)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_18862 && iVar1 < Global_262145.f_18959)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_19919 && iVar1 < Global_262145.f_19915)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_19920 && iVar1 < Global_262145.f_19916)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_19921 && iVar1 < Global_262145.f_19917)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_19922 && iVar1 < Global_262145.f_19918)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_20800 && iVar1 < Global_262145.f_20808)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_20801 && iVar1 < Global_262145.f_20809)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_20802 && iVar1 < Global_262145.f_20810)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_20803 && iVar1 < Global_262145.f_20811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_20804 && iVar1 < Global_262145.f_20812)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_20805 && iVar1 < Global_262145.f_20813)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_21580 && iVar1 < Global_262145.f_21600)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_21592 && iVar1 < Global_262145.f_21612)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_21583 && iVar1 < Global_262145.f_21603)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_21593 && iVar1 < Global_262145.f_21613)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_21581 && iVar1 < Global_262145.f_21601)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_21597 && iVar1 < Global_262145.f_21617)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_21595 && iVar1 < Global_262145.f_21615)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_21596 && iVar1 < Global_262145.f_21616)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_21591 && iVar1 < Global_262145.f_21611)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_21598 && iVar1 < Global_262145.f_21618)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_21594 && iVar1 < Global_262145.f_21614)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_21590 && iVar1 < Global_262145.f_21610)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_21582 && iVar1 < Global_262145.f_21602)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_21584 && iVar1 < Global_262145.f_21604)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_21585 && iVar1 < Global_262145.f_21605)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_21586 && iVar1 < Global_262145.f_21606)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_21587 && iVar1 < Global_262145.f_21607)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_21588 && iVar1 < Global_262145.f_21608)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_21589 && iVar1 < Global_262145.f_21609)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_22541 && iVar1 < Global_262145.f_22569)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_22542 && iVar1 < Global_262145.f_22570)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_22543 && iVar1 < Global_262145.f_22571)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_22544 && iVar1 < Global_262145.f_22572)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_22545 && iVar1 < Global_262145.f_22573)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_22546 && iVar1 < Global_262145.f_22574)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_22547 && iVar1 < Global_262145.f_22575)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_22548 && iVar1 < Global_262145.f_22576)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_22549 && iVar1 < Global_262145.f_22577)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_22550 && iVar1 < Global_262145.f_22578)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_22551 && iVar1 < Global_262145.f_22579)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_22552 && iVar1 < Global_262145.f_22580)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_22553 && iVar1 < Global_262145.f_22581)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_22554 && iVar1 < Global_262145.f_22582)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_22555 && iVar1 < Global_262145.f_22583)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_22556 && iVar1 < Global_262145.f_22584)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_22557 && iVar1 < Global_262145.f_22585)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_22558 && iVar1 < Global_262145.f_22586)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_22559 && iVar1 < Global_262145.f_22587)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_22560 && iVar1 < Global_262145.f_22588)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_22561 && iVar1 < Global_262145.f_22589)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_22562 && iVar1 < Global_262145.f_22590)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_22563 && iVar1 < Global_262145.f_22591)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_22564 && iVar1 < Global_262145.f_22592)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_22565 && iVar1 < Global_262145.f_22593)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_22566 && iVar1 < Global_262145.f_22594)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_22567 && iVar1 < Global_262145.f_22595)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_22568 && iVar1 < Global_262145.f_22596)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_23761 && iVar1 < Global_262145.f_23777)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_23762 && iVar1 < Global_262145.f_23778)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_23766 && iVar1 < Global_262145.f_23782)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_23769 && iVar1 < Global_262145.f_23785)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_23774 && iVar1 < Global_262145.f_23790)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_23768 && iVar1 < Global_262145.f_23784)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_23760 && iVar1 < Global_262145.f_23776)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_23767 && iVar1 < Global_262145.f_23783)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_23773 && iVar1 < Global_262145.f_23789)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_23772 && iVar1 < Global_262145.f_23788)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_23763 && iVar1 < Global_262145.f_23779)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_23765 && iVar1 < Global_262145.f_23781)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_23775 && iVar1 < Global_262145.f_23791)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_23771 && iVar1 < Global_262145.f_23787)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_23764 && iVar1 < Global_262145.f_23780)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_23770 && iVar1 < Global_262145.f_23786)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_23851 && iVar1 < Global_262145.f_23838)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_23852 && iVar1 < Global_262145.f_23839)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_23857 && iVar1 < Global_262145.f_23844)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_23856 && iVar1 < Global_262145.f_23843)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_23854 && iVar1 < Global_262145.f_23841)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_23860 && iVar1 < Global_262145.f_23847)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_23862 && iVar1 < Global_262145.f_23849)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_23863 && iVar1 < Global_262145.f_23850)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_23861 && iVar1 < Global_262145.f_23848)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_23853 && iVar1 < Global_262145.f_23840)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_23855 && iVar1 < Global_262145.f_23842)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_23859 && iVar1 < Global_262145.f_23846)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_23858 && iVar1 < Global_262145.f_23845)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("monster3"))
	{
	}
	else if (iParam0 == joaat("cerberus"))
	{
	}
	else if (iParam0 == joaat("cerberus2"))
	{
	}
	else if (iParam0 == joaat("cerberus3"))
	{
	}
	else if (iParam0 == joaat("brutus"))
	{
	}
	else if (iParam0 == joaat("brutus2"))
	{
	}
	else if (iParam0 == joaat("brutus3"))
	{
	}
	else if (iParam0 == joaat("scarab"))
	{
	}
	else if (iParam0 == joaat("scarab2"))
	{
	}
	else if (iParam0 == joaat("scarab3"))
	{
	}
	else if (iParam0 == joaat("imperator"))
	{
	}
	else if (iParam0 == joaat("imperator2"))
	{
	}
	else if (iParam0 == joaat("imperator3"))
	{
	}
	else if (iParam0 == joaat("zr380"))
	{
	}
	else if (iParam0 == joaat("zr3802"))
	{
	}
	else if (iParam0 == joaat("zr3803"))
	{
	}
	else if (iParam0 == joaat("impaler"))
	{
	}
	else if (iParam0 == joaat("deveste"))
	{
		if (!Global_262145.f_26267 && iVar1 < Global_262145.f_26269)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toros"))
	{
		if (!Global_262145.f_25280 && iVar1 < Global_262145.f_25273)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique"))
	{
		if (!Global_262145.f_25281 && iVar1 < Global_262145.f_25274)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_25282 && iVar1 < Global_262145.f_25275)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_25283 && iVar1 < Global_262145.f_25276)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_26268 && iVar1 < Global_262145.f_26270)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_25284 && iVar1 < Global_262145.f_25277)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_25285 && iVar1 < Global_262145.f_25278)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_25286 && iVar1 < Global_262145.f_25279)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thrax"))
	{
		if (!Global_262145.f_25291 && iVar1 < Global_262145.f_25312)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("drafter"))
	{
		if (!Global_262145.f_25292 && iVar1 < Global_262145.f_25313)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("locust"))
	{
		if (!Global_262145.f_25293 && iVar1 < Global_262145.f_25314)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("novak"))
	{
		if (!Global_262145.f_25294 && iVar1 < Global_262145.f_25315)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zorrusso"))
	{
		if (!Global_262145.f_25295 && iVar1 < Global_262145.f_25316)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet3"))
	{
		if (!Global_262145.f_25296 && iVar1 < Global_262145.f_25317)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi7"))
	{
		if (!Global_262145.f_25297 && iVar1 < Global_262145.f_25318)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion3"))
	{
		if (!Global_262145.f_25298 && iVar1 < Global_262145.f_25319)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nebula"))
	{
		if (!Global_262145.f_25299 && iVar1 < Global_262145.f_25320)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hellion"))
	{
		if (!Global_262145.f_25300 && iVar1 < Global_262145.f_25321)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dynasty"))
	{
		if (!Global_262145.f_25301 && iVar1 < Global_262145.f_25322)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rrocket"))
	{
		if (!Global_262145.f_25302 && iVar1 < Global_262145.f_25323)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote2"))
	{
		if (!Global_262145.f_25303 && iVar1 < Global_262145.f_25324)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet4"))
	{
		if (!Global_262145.f_25304 && iVar1 < Global_262145.f_25325)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara2"))
	{
		if (!Global_262145.f_25305 && iVar1 < Global_262145.f_25326)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jugular"))
	{
		if (!Global_262145.f_25306 && iVar1 < Global_262145.f_25327)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("s80"))
	{
		if (!Global_262145.f_25307 && iVar1 < Global_262145.f_25328)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("krieger"))
	{
		if (!Global_262145.f_25308 && iVar1 < Global_262145.f_25329)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("emerus"))
	{
		if (!Global_262145.f_25309 && iVar1 < Global_262145.f_25330)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neo"))
	{
		if (!Global_262145.f_25310 && iVar1 < Global_262145.f_25331)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("paragon"))
	{
		if (!Global_262145.f_25311 && iVar1 < Global_262145.f_25332)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asbo"))
	{
		if (!Global_262145.f_28111 && iVar1 < Global_262145.f_28132)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjo"))
	{
		if (!Global_262145.f_28112 && iVar1 < Global_262145.f_28133)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("everon"))
	{
		if (!Global_262145.f_28113 && iVar1 < Global_262145.f_28134)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue2"))
	{
		if (!Global_262145.f_28114 && iVar1 < Global_262145.f_28135)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite2"))
	{
		if (!Global_262145.f_28115 && iVar1 < Global_262145.f_28136)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sugoi"))
	{
		if (!Global_262145.f_28116 && iVar1 < Global_262145.f_28137)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan2"))
	{
		if (!Global_262145.f_28117 && iVar1 < Global_262145.f_28138)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("outlaw"))
	{
		if (!Global_262145.f_28118 && iVar1 < Global_262145.f_28139)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagrant"))
	{
		if (!Global_262145.f_28119 && iVar1 < Global_262145.f_28140)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("komoda"))
	{
		if (!Global_262145.f_28120 && iVar1 < Global_262145.f_28141)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stryder"))
	{
		if (!Global_262145.f_28121 && iVar1 < Global_262145.f_28142)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("furia"))
	{
		if (!Global_262145.f_28122 && iVar1 < Global_262145.f_28143)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zhaba"))
	{
		if (!Global_262145.f_28123 && iVar1 < Global_262145.f_28144)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jb7002"))
	{
		if (!Global_262145.f_28124 && iVar1 < Global_262145.f_28145)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("firetruk"))
	{
		if (!Global_262145.f_28125 && iVar1 < Global_262145.f_28146)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_28126 && iVar1 < Global_262145.f_28147)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_28127 && iVar1 < Global_262145.f_28148)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_28128 && iVar1 < Global_262145.f_28149)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minitank"))
	{
		if (!Global_262145.f_28129 && iVar1 < Global_262145.f_28150)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_28130 && iVar1 < Global_262145.f_28151)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_28131 && iVar1 < Global_262145.f_28152)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula"))
	{
		if ((!Global_262145.f_28154 && iVar1 < Global_262145.f_28155) && !Global_262145.f_28109)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula2"))
	{
		if ((!Global_262145.f_28157 && iVar1 < Global_262145.f_28158) && !Global_262145.f_28110)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("imorgon"))
	{
		if (!Global_262145.f_28162 && iVar1 < Global_262145.f_28165)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebla"))
	{
		if (!Global_262145.f_28163 && iVar1 < Global_262145.f_28166)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vstr"))
	{
		if (!Global_262145.f_28164 && iVar1 < Global_262145.f_28167)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet5"))
	{
		if (!Global_262145.f_29178 && iVar1 < Global_262145.f_28843)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("club"))
	{
		if (!Global_262145.f_28829 && iVar1 < Global_262145.f_28850)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dukes3"))
	{
		if (!Global_262145.f_28830 && iVar1 < Global_262145.f_28836)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite3"))
	{
		if (!Global_262145.f_29176 && iVar1 < Global_262145.f_28844)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote3"))
	{
		if (!Global_262145.f_29177 && iVar1 < Global_262145.f_28845)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("glendale2"))
	{
		if (!Global_262145.f_28823 && iVar1 < Global_262145.f_28842)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penumbra2"))
	{
		if (!Global_262145.f_28824 && iVar1 < Global_262145.f_28851)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("landstalker2"))
	{
		if (!Global_262145.f_28825 && iVar1 < Global_262145.f_28841)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seminole2"))
	{
		if (!Global_262145.f_28826 && iVar1 < Global_262145.f_28839)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tigon"))
	{
		if (!Global_262145.f_29172 && iVar1 < Global_262145.f_28846)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel1"))
	{
		if (!Global_262145.f_29173 && iVar1 < Global_262145.f_28847)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel2"))
	{
		if (!Global_262145.f_29174 && iVar1 < Global_262145.f_28848)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette4"))
	{
		if (!Global_262145.f_29175 && iVar1 < Global_262145.f_28849)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manana2"))
	{
		if (!Global_262145.f_28827 && iVar1 < Global_262145.f_28838)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga3"))
	{
		if (!Global_262145.f_28828 && iVar1 < Global_262145.f_28840)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toreador"))
	{
		if (!Global_262145.f_29620 && iVar1 < Global_262145.f_29603)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("annihilator2"))
	{
		if (!Global_262145.f_29621 && iVar1 < Global_262145.f_29604)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alkonost"))
	{
		if (!Global_262145.f_29622 && iVar1 < Global_262145.f_29605)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patrolboat"))
	{
		if (!Global_262145.f_29623 && iVar1 < Global_262145.f_29606)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("longfin"))
	{
		if (!Global_262145.f_29624 && iVar1 < Global_262145.f_29607)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("winky"))
	{
		if (!Global_262145.f_29625 && iVar1 < Global_262145.f_29608)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto"))
	{
		if (!Global_262145.f_29626 && iVar1 < Global_262145.f_29609)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto2"))
	{
		if (!Global_262145.f_29627 && iVar1 < Global_262145.f_29610)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italirsx"))
	{
		if (!Global_262145.f_29628 && iVar1 < Global_262145.f_29611)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("weevil"))
	{
		if (Global_262145.f_29637)
		{
		}
		else if (!Global_262145.f_29629 && iVar1 < Global_262145.f_29612)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez2"))
	{
		if (!Global_262145.f_29630 && iVar1 < Global_262145.f_29613)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamtruck"))
	{
		if (!Global_262145.f_29631 && iVar1 < Global_262145.f_29614)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vetir"))
	{
		if (!Global_262145.f_29632 && iVar1 < Global_262145.f_29615)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("squaddie"))
	{
		if (!Global_262145.f_29633 && iVar1 < Global_262145.f_29616)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso2"))
	{
		if (Global_262145.f_29638)
		{
		}
		else if (!Global_262145.f_29634 && iVar1 < Global_262145.f_29617)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dinghy5"))
	{
		if (!Global_262145.f_29635 && iVar1 < Global_262145.f_29618)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("verus"))
	{
		if (!Global_262145.f_29636 && iVar1 < Global_262145.f_29619)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tailgater2"))
	{
		if (!Global_262145.f_30484 && iVar1 < Global_262145.f_30467)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("euros"))
	{
		if (!Global_262145.f_30485 && iVar1 < Global_262145.f_30468)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan3"))
	{
		if (!Global_262145.f_30486 && iVar1 < Global_262145.f_30469)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rt3000"))
	{
		if (!Global_262145.f_30487 && iVar1 < Global_262145.f_30470)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vectre"))
	{
		if (!Global_262145.f_30488 && iVar1 < Global_262145.f_30471)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zr350"))
	{
		if (!Global_262145.f_30489 && iVar1 < Global_262145.f_30472)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("warrener2"))
	{
		if (!Global_262145.f_30490 && iVar1 < Global_262145.f_30473)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("calico"))
	{
		if (!Global_262145.f_30491 && iVar1 < Global_262145.f_30474)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("remus"))
	{
		if (!Global_262145.f_30492 && iVar1 < Global_262145.f_30475)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cypher"))
	{
		if (!Global_262145.f_30493 && iVar1 < Global_262145.f_30476)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator7"))
	{
		if (!Global_262145.f_30494 && iVar1 < Global_262145.f_30477)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester4"))
	{
		if (!Global_262145.f_30495 && iVar1 < Global_262145.f_30478)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("futo2"))
	{
		if (!Global_262145.f_30496 && iVar1 < Global_262145.f_30479)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator8"))
	{
		if (!Global_262145.f_30497 && iVar1 < Global_262145.f_30480)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("previon"))
	{
		if (!Global_262145.f_30498 && iVar1 < Global_262145.f_30481)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("growler"))
	{
		if (!Global_262145.f_30499 && iVar1 < Global_262145.f_30482)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet6"))
	{
		if (!Global_262145.f_30500 && iVar1 < Global_262145.f_30483)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_868()
{
	return 0;
}

int func_869()
{
	return 1;
}

int func_870()
{
	return 1;
}

int func_871()
{
	if (unk_0x14FA206D9CE730A9(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_872()
{
	var uVar0;
	
	if (unk_0xB2EC8B4970766623())
	{
		if (unk_0x1D0F0A8090E1551E())
		{
			if (unk_0x722D5CFE95568B02())
			{
				unk_0xD885BEFA31A18D47(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x191DDA30577F440A(&uVar0, 2);
				unk_0x191DDA30577F440A(&uVar0, 4);
				unk_0x191DDA30577F440A(&uVar0, 6);
				unk_0x191DDA30577F440A(&Global_25, 2);
				unk_0x191DDA30577F440A(&Global_25, 4);
				unk_0x191DDA30577F440A(&Global_25, 6);
				unk_0xAC4FD27671081628(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0xF7701A907195ED86())
				{
					iVar0 = unk_0xC82CD1DB42480082(866);
					unk_0x191DDA30577F440A(&iVar0, 0);
					unk_0x0E32F508F8A14DE9(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_151130 == 2)
	{
		return 1;
	}
	else if (Global_151130 == 3)
	{
		return 0;
	}
	if (unk_0xF7701A907195ED86())
	{
		if (unk_0x234B68AC2E35ED5A(unk_0xC82CD1DB42480082(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_873(int iParam0, int iParam1, bool bParam2)
{
	if (Global_262145.f_10335)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_1678528[iParam0] - 1);
		if (bParam2)
		{
			if ((unk_0x2053F6ACFD4ED4BC() % 5) == 0)
			{
			}
		}
	}
	else
	{
		*iParam1 = -1;
	}
}

int func_874(int iParam0)
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
		
		case 22:
			return 268;
			break;
		
		case 23:
			return 281;
			break;
		
		case 24:
			return 294;
			break;
		
		case 25:
			return 307;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_817(iParam0);
		return func_876(iVar0);
	}
	return (func_875(iParam0, -1, 1) * iParam0);
}

int func_875(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_584(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_590(iParam1))
			{
				return 0;
			}
			else if (func_169(iParam1, -1))
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
			else if (iParam1 == 126)
			{
				return 10;
			}
			else if (iParam1 == 127)
			{
				return 10;
			}
			else if (iParam1 <= 127 && iParam1 > 0)
			{
				if (Global_1049961[iParam1 /*1951*/].f_33 == 2)
				{
					if (bParam2)
					{
						return 3;
					}
					else
					{
						return 2;
					}
				}
				else if (Global_1049961[iParam1 /*1951*/].f_33 == 6)
				{
					if (bParam2)
					{
						return 8;
					}
					else
					{
						return 6;
					}
				}
				else if (Global_1049961[iParam1 /*1951*/].f_33 == 10)
				{
					if (bParam2)
					{
						return 13;
					}
					else
					{
						return 10;
					}
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
		case 23:
		case 24:
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
		
		case 22:
			return 10;
			break;
		
		case 25:
			return 10;
			break;
	}
	return 0;
}

int func_876(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 156;
		
		case 2:
			return 223;
		
		case 1:
			return 224;
		
		case 3:
			return 278;
		
		default:
	}
	return -1;
}

var func_877()
{
	var uVar0;
	
	uVar0 = func_878();
	if (!func_663())
	{
		if (func_673() != func_57())
		{
			uVar0 = func_910(func_673()) + 1;
		}
	}
	return uVar0;
}

int func_878()
{
	return func_910(unk_0x1146A9AE09CE2B14()) + 1;
}

int func_879()
{
	return func_526(6115, -1, 0);
}

int func_880(int iParam0)
{
	if (func_319(iParam0, 1))
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_426;
	}
	return -1;
}

void func_881(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x25A7052BD3A74454(&Global_1681857);
	func_882();
}

void func_882()
{
	struct<44> Var0;
	
	Global_1681857 = { Var0 };
	Global_1681857.f_23 = 0;
	Global_1681857.f_24 = 0;
	Global_1681857.f_16 = 0;
}

bool func_883(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_353, 12);
}

bool func_884(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_353, 13);
}

int func_885(int iParam0)
{
	if (iParam0 != func_57())
	{
		if ((unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 12) || unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 13)) || unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 14))
		{
			return 1;
		}
	}
	return 0;
}

int func_886(int iParam0)
{
	if (iParam0 != func_57())
	{
		if ((unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 0) || unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 1)) || unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_887(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (((((unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 3) || unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 4)) || unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 5)) || unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 0)) || unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 1)) || unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_888(int iParam0, int iParam1)
{
	if (iParam1 == func_57())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 0))
			{
				return 3;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 3))
			{
				return 2;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 6))
			{
				return 4;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 9))
			{
				return 1;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 12))
			{
				return 7;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 15))
			{
				return 5;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 18))
			{
				return 6;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 21))
			{
				return 0;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 24))
			{
				return 8;
			}
			break;
		
		case 1:
			if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 1))
			{
				return 3;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 4))
			{
				return 2;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 7))
			{
				return 4;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 10))
			{
				return 1;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 13))
			{
				return 7;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 16))
			{
				return 5;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 19))
			{
				return 6;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 22))
			{
				return 0;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 25))
			{
				return 8;
			}
			break;
		
		case 2:
			if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 2))
			{
				return 3;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 5))
			{
				return 2;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 8))
			{
				return 4;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 11))
			{
				return 1;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 14))
			{
				return 7;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 17))
			{
				return 5;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 20))
			{
				return 6;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 23))
			{
				return 0;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam1 /*874*/].f_267.f_261, 26))
			{
				return 8;
			}
			break;
	}
	return 0;
}

int func_889(int iParam0)
{
	if (iParam0 != func_57())
	{
		if ((unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 6) || unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 7)) || unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 8))
		{
			return 1;
		}
	}
	return 0;
}

bool func_890(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_353, 8);
}

bool func_891(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_353, 7);
}

bool func_892(int iParam0)
{
	if (iParam0 == func_57())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_353, 9);
}

bool func_893(int iParam0)
{
	if (iParam0 == func_57())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_353, 11);
}

bool func_894(int iParam0)
{
	if (iParam0 == func_57())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_353, 10);
}

int func_895(int iParam0, int iParam1)
{
	return func_526(func_896(iParam1), iParam0, 0);
}

int func_896(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3900;
		
		case 1:
			return 3929;
		
		case 2:
			return 3933;
		
		case 3:
			return 3937;
		
		case 4:
			return 3941;
		
		case 5:
			return 5452;
		
		default:
	}
	return 3900;
}

void func_897(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x23BA98A349F4B91D(&Global_1681794);
	func_898();
}

void func_898()
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
	Global_1681794 = { Var0 };
	Global_1681794.f_24 = 0;
	Global_1681794.f_25 = 0;
	Global_1681794.f_17 = 0;
}

void func_899(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0xE68A21B882B190D2(&Global_1681740);
	func_900();
}

void func_900()
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
	Global_1681740 = { Var0 };
	Global_1681740.f_29 = 0;
	Global_1681740.f_30 = 0;
	Global_1681740.f_17 = 0;
}

int func_901(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_772(iParam0, iParam1, 2);
	bVar1 = func_772(iParam0, iParam1, 1);
	bVar2 = func_772(iParam0, iParam1, 0);
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

int func_902(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_57())
	{
		return 0;
	}
	if (func_765(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/] == iParam1)
			{
				return Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_903(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_448(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17878;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17877;
		}
		else
		{
			iVar0 = Global_262145.f_17859;
		}
		iVar1 = 19;
	}
	else if (func_581(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_350(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_17858;
			iVar1 = 20;
		}
	}
	else if (func_465(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17878;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17877;
		}
		else
		{
			iVar0 = Global_262145.f_17859;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		unk_0x271E26F00E8A6125(func_821(func_673()), func_820(func_673()), func_920(), func_919(), iVar1, iVar0);
	}
	func_905(iVar0);
	func_904(iVar0);
	return iVar0;
}

void func_904(int iParam0)
{
	int iVar0;
	
	iVar0 = func_526(3970, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_465 = iVar0;
	func_525(3970, iVar0, -1, 1, 0);
}

void func_905(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x1146A9AE09CE2B14();
	Global_1630816[iVar0 /*597*/].f_11.f_464 = (Global_1630816[iVar0 /*597*/].f_11.f_464 + iParam0);
	if (Global_1630816[iVar0 /*597*/].f_11.f_464 < -9999)
	{
		Global_1630816[iVar0 /*597*/].f_11.f_464 = 9999;
	}
	else if (Global_1630816[iVar0 /*597*/].f_11.f_464 > 9999)
	{
		Global_1630816[iVar0 /*597*/].f_11.f_464 = 9999;
	}
}

int func_906(bool bParam0)
{
	if (bParam0)
	{
		return 0;
	}
	if (func_271(unk_0x1146A9AE09CE2B14()) || func_237(unk_0x1146A9AE09CE2B14()))
	{
		return 1;
	}
	return 0;
}

void func_907(var uParam0)
{
	unk_0x091644086E892B74(&Global_1682001);
	func_908();
}

void func_908()
{
	struct<36> Var0;
	
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
	Global_1682001 = { Var0 };
}

int func_909(int iParam0)
{
	if (iParam0 != func_57())
	{
		return Global_1590908[iParam0 /*874*/].f_267.f_324 != 0;
	}
	return 0;
}

int func_910(int iParam0)
{
	if (func_58(iParam0) == func_57())
	{
		return 0;
	}
	return Global_1630816[iParam0 /*597*/].f_11.f_19;
}

int func_911()
{
	int iVar0;
	
	if (func_650())
	{
		return 4;
	}
	else if (func_663())
	{
		if (func_796(unk_0x1146A9AE09CE2B14()))
		{
			return 8;
		}
		return 6;
	}
	if (func_384(1))
	{
		iVar0 = func_880(unk_0x1146A9AE09CE2B14());
		if (iVar0 == -1)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_671(1))
	{
		if (func_796(func_673()))
		{
			return 9;
		}
		return 7;
	}
	return -2;
}

int func_912(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_913(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = -1;
	if (bParam0)
	{
		iVar0 = func_311(unk_0x1146A9AE09CE2B14());
	}
	else
	{
		iVar0 = func_248(unk_0x1146A9AE09CE2B14());
	}
	if (iVar0 != -1)
	{
	}
	switch (iVar0)
	{
		case 236:
			iVar2 = func_918(unk_0x1146A9AE09CE2B14());
			iVar1 = iVar2;
			break;
		
		case 150:
			iVar2 = func_916(unk_0x1146A9AE09CE2B14());
			iVar1 = iVar2;
			break;
		
		case 237:
			iVar2 = func_915(unk_0x1146A9AE09CE2B14());
			if (func_642(func_643(unk_0x1146A9AE09CE2B14())))
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
			iVar2 = func_915(unk_0x1146A9AE09CE2B14());
			iVar1 = 300;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 238:
			iVar2 = func_914(unk_0x1146A9AE09CE2B14());
			iVar1 = 400;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 249:
			iVar2 = func_914(unk_0x1146A9AE09CE2B14());
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

int func_914(int iParam0)
{
	if (func_248(unk_0x1146A9AE09CE2B14()) == 238 || func_248(unk_0x1146A9AE09CE2B14()) == 249)
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_474;
	}
	return -1;
}

int func_915(int iParam0)
{
	if (func_248(unk_0x1146A9AE09CE2B14()) == 237 || func_248(unk_0x1146A9AE09CE2B14()) == 250)
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_473;
	}
	return -1;
}

int func_916(int iParam0)
{
	return func_917(iParam0, 150);
}

int func_917(int iParam0, int iParam1)
{
	if (func_311(iParam0) == iParam1)
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_471;
	}
	return -1;
}

int func_918(int iParam0)
{
	return func_917(iParam0, 236);
}

int func_919()
{
	if (Global_1681722.f_3 != 0)
	{
		return Global_1681722.f_3;
	}
	return -1;
}

int func_920()
{
	if (Global_1681722.f_2 != 0)
	{
		return Global_1681722.f_2;
	}
	return -1;
}

int func_921(int iParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_57();
	iVar1 = func_57();
	iVar2 = func_57();
	return func_922(iParam0, sParam1, sParam2, sParam3, uParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

int func_922(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
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
	func_637(uParam0, &Var0, iParam9, sParam2, sParam1);
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
	func_363(&(Var0.f_69), 4);
	return func_599(&Var0);
}

int func_923(int iParam0)
{
	int iVar0;
	
	iVar0 = func_323(iParam0);
	if (iVar0 != -1)
	{
		return func_321(iVar0);
	}
	return 1;
}

char* func_924(int iParam0)
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == unk_0x1146A9AE09CE2B14())
	{
		sVar0 = func_929(&(Global_1630816[iParam0 /*597*/].f_11.f_105));
		return sVar0;
	}
	if (Global_1630816[iParam0 /*597*/].f_11.f_121 != Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_121)
	{
		sVar0 = func_927(iParam0, 0);
		return sVar0;
	}
	if (((func_252(iParam0, 28) || func_252(unk_0x1146A9AE09CE2B14(), 28)) || func_926(iParam0)) && !func_925(iParam0))
	{
		return func_927(iParam0, 0);
	}
	iVar1 = func_58(iParam0);
	if (iVar1 != func_57())
	{
		if (iVar1 != unk_0x1146A9AE09CE2B14())
		{
			if (!unk_0x2322DD4FBF5E4E2F() && !unk_0x68E0E843A17D2933(0, -1, 1))
			{
				return func_927(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_57())
	{
		sVar0 = func_929(&(Global_1630816[iVar1 /*597*/].f_11.f_105));
		if (unk_0xAB6A270F84A8781E(sVar0))
		{
			return func_927(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_925(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_59(iParam0) };
	if (unk_0x2322DD4FBF5E4E2F())
	{
		if (unk_0x68B90AB279E39C7B(0))
		{
			if (unk_0x94D4A49E53F5209A(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_926(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_57())
	{
		Var0 = { func_59(iParam0) };
		if (unk_0xE22116C6D321FECA() || unk_0x3640D836D145B814())
		{
			if (unk_0x68B90AB279E39C7B(0))
			{
				return 0;
			}
		}
		else if (unk_0x2322DD4FBF5E4E2F())
		{
			if (unk_0x68B90AB279E39C7B(0))
			{
				if (unk_0x94D4A49E53F5209A(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

var func_927(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_306(iParam0, 1))
		{
			return func_928();
		}
	}
	return unk_0x3A2A8DAFDBEC4CFE("GB_REST_ACC");
}

var func_928()
{
	return unk_0x3A2A8DAFDBEC4CFE("GB_REST_ACCM");
}

var func_929(var uParam0)
{
	return uParam0;
}

void func_930()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (func_28())
	{
		return;
	}
	if (func_440())
	{
		if (func_11(&(Local_124.f_238)))
		{
			iVar1 = (func_18() - 300000);
			bVar0 = func_6(&(Local_124.f_238), iVar1, 0);
			if (bVar0)
			{
				func_938();
				if ((func_18() - func_638(&(Local_124.f_238), 0, 0)) > 0)
				{
					if ((func_18() - func_638(&(Local_124.f_238), 0, 0)) > 30000)
					{
						func_937((func_18() - func_638(&(Local_124.f_238), 0, 0)), "GB_WORK_END", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, -1);
					}
					else
					{
						func_937((func_18() - func_638(&(Local_124.f_238), 0, 0)), "GB_WORK_END", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
					}
				}
				else
				{
					func_937(0, "GB_WORK_END", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
				}
			}
		}
		return;
	}
	if (!func_1220() && !func_438())
	{
		return;
	}
	if (!func_548())
	{
		return;
	}
	iVar2 = unk_0x1146A9AE09CE2B14();
	if (func_34(unk_0x1146A9AE09CE2B14(), 0))
	{
		iVar2 = Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_755;
	}
	iVar3 = func_429(iVar2);
	if (iVar3 < 3)
	{
		return;
	}
	iVar4 = (func_30() - Local_124.f_213);
	if (unk_0x234B68AC2E35ED5A(Local_124.f_1, 13))
	{
		func_934(iVar4, "DCONTRA_HUD1", -1, 1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (func_11(&(Local_124.f_226)))
	{
		iVar5 = func_20();
		iVar6 = (func_20() - func_638(&(Local_124.f_226), 0, 0));
		func_931(iVar6, iVar5, "DCONTRA_HUD2", 1, -1, 2, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
	}
	else
	{
		iVar5 = func_20();
		iVar6 = func_20();
		func_931(iVar6, iVar5, "DCONTRA_HUD2", 1, -1, 2, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
	}
}

void func_931(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_933(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1380638.f_1 = 1;
		func_932(0, iVar0);
		Global_1380638.f_1135[iVar0] = iParam0;
		Global_1380638.f_1135.f_11[iVar0] = iParam1;
		StringCopy(&(Global_1380638.f_1135.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1380638.f_1135.f_194[iVar0] = iParam3;
		Global_1380638.f_1135.f_183[iVar0] = iParam4;
		Global_1380638.f_1135.f_216[iVar0] = iParam5;
		Global_1380638.f_1135.f_227[iVar0 /*3*/] = iParam6;
		Global_1380638.f_1135.f_227[iVar0 /*3*/].f_1 = iParam7;
		Global_1380638.f_1135.f_258[iVar0] = iParam8;
		Global_1380638.f_1135.f_269[iVar0] = iParam9;
		Global_1380638.f_1135.f_312[iVar0] = iParam10;
		Global_1380638.f_1135.f_323[iVar0] = iParam11;
		Global_1380638.f_1135.f_334[iVar0] = iParam12;
		Global_1380638.f_1135.f_345[iVar0] = iParam13;
		Global_1380638.f_1130 = 1;
		Global_1380638.f_1135.f_356[iVar0] = iParam14;
		Global_1380638.f_1135.f_367[iVar0] = iParam15;
		Global_1380638.f_1135.f_378[iVar0] = iParam16;
		Global_1380638.f_1135.f_389[iVar0] = iParam17;
		Global_1380638.f_1135.f_400[iVar0] = iParam18;
		Global_1380638.f_1135.f_411[iVar0] = iParam19;
		Global_1380638.f_1135.f_422[iVar0] = iParam20;
		Global_1380638.f_1135.f_433[iVar0] = iParam21;
		Global_1380638.f_1135.f_444[iVar0] = iParam22;
		Global_1380638.f_1135.f_455[iVar0] = iParam23;
		Global_1380638.f_1135.f_466[iVar0] = iParam24;
		Global_1380638.f_1135.f_205[iVar0] = iParam25;
		Global_1380638.f_1135.f_477[iVar0] = iParam26;
		Global_1380638.f_1135.f_488[iVar0] = iParam27;
		Global_1380638.f_1135.f_499[iVar0] = iParam28;
		Global_1380638.f_1135.f_510[iVar0] = iParam29;
		Global_1380638.f_1135.f_521[iVar0] = iParam30;
		Global_1380638.f_1135.f_532[iVar0] = iParam31;
		Global_1380638.f_1135.f_543[iVar0] = iParam32;
		Global_1380638.f_1135.f_554[iVar0] = iParam33;
		Global_1380638.f_1135.f_565[iVar0] = iParam34;
		Global_1380638.f_1135.f_576[iVar0] = iParam35;
		Global_1380638.f_1135.f_587[iVar0] = iParam36;
	}
}

void func_932(int iParam0, int iParam1)
{
	unk_0x191DDA30577F440A(&(Global_1380638.f_6736[iParam0]), iParam1);
}

bool func_933(int iParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(Global_1380638.f_6736[iParam0], iParam1);
}

void func_934(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_933(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1380638.f_1 = 1;
		func_932(6, iVar0);
		Global_1380638.f_3999[iVar0] = iParam0;
		StringCopy(&(Global_1380638.f_3999.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1380638.f_3999.f_183[iVar0] = iParam3;
		Global_1380638.f_3999.f_172[iVar0] = iParam2;
		Global_1380638.f_3999.f_260[iVar0] = iParam4;
		Global_1380638.f_3999.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1380638.f_3999.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1380638.f_3999.f_443[iVar0] = iParam7;
		Global_1380638.f_3999.f_454[iVar0] = iParam8;
		Global_1380638.f_3999.f_497[iVar0] = iParam9;
		Global_1380638.f_3999.f_508[iVar0] = iParam10;
		Global_1380638.f_3999.f_205[iVar0] = iParam11;
		Global_1380638.f_3999.f_216[iVar0] = iParam12;
		Global_1380638.f_3999.f_227[iVar0] = iParam13;
		Global_1380638.f_3999.f_238[iVar0] = iParam14;
		Global_1380638.f_3999.f_249[iVar0] = iParam15;
		Global_1380638.f_3999.f_519[iVar0] = iParam16;
		Global_1380638.f_3999.f_530[iVar0] = iParam17;
		Global_1380638.f_3999.f_541[iVar0] = iParam18;
		Global_1380638.f_3999.f_552[iVar0] = iParam19;
		Global_1380638.f_3999.f_563[iVar0] = iParam20;
		Global_1380638.f_3999.f_574[iVar0] = iParam21;
		Global_1380638.f_3999.f_585[iVar0] = iParam22;
		Global_1380638.f_3999.f_596[iVar0] = iParam23;
		Global_1380638.f_3999.f_607[iVar0] = iParam24;
		Global_1380638.f_3999.f_194[iVar0] = iParam25;
		if (iParam15 == 5 && func_936())
		{
			Global_1380638.f_1130 = 1;
		}
		if (unk_0x3640D836D145B814())
		{
			iVar2 = 0;
			unk_0x32C9F8FADAAEEFE6(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1380638.f_1134 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1380638.f_1133 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1380638.f_1130 = 1;
			}
			if (func_935())
			{
				Global_1380638.f_1134 = 1;
			}
		}
	}
}

int func_935()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x3640D836D145B814())
	{
		unk_0x32C9F8FADAAEEFE6(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_936()
{
	if (((unk_0xFA1A73C829B8839F() == 8 || unk_0xFA1A73C829B8839F() == 9) || unk_0xFA1A73C829B8839F() == 10) || unk_0xFA1A73C829B8839F() == 12)
	{
		return 1;
	}
	return 0;
}

void func_937(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_933(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1380638.f_1 = 1;
		func_932(7, iVar0);
		Global_1380638.f_4617[iVar0] = iParam0;
		StringCopy(&(Global_1380638.f_4617.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1380638.f_4617.f_172[iVar0] = iParam2;
		Global_1380638.f_4617.f_216[iVar0] = iParam3;
		Global_1380638.f_4617.f_183[iVar0] = iParam4;
		Global_1380638.f_4617.f_194[iVar0] = iParam5;
		Global_1380638.f_4617.f_249[iVar0] = iParam6;
		Global_1380638.f_4617.f_260[iVar0] = iParam7;
		Global_1380638.f_4617.f_205[iVar0] = iParam8;
		Global_1380638.f_4617.f_314[iVar0] = iParam9;
		Global_1380638.f_4617.f_325[iVar0] = iParam10;
		Global_1380638.f_4617.f_357[iVar0] = iParam11;
		Global_1380638.f_4617.f_238[iVar0] = iParam12;
		Global_1380638.f_4617.f_271[iVar0] = iParam13;
		Global_1380638.f_4617.f_368[iVar0] = iParam14;
		Global_1380638.f_4617.f_379[iVar0] = iParam15;
		Global_1380638.f_4617.f_390[iVar0] = iParam16;
		Global_1380638.f_4617.f_227[iVar0] = iParam17;
	}
}

void func_938()
{
	Global_1380638.f_1131 = 1;
}

void func_939()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar3 = unk_0x1146A9AE09CE2B14();
	iVar4 = unk_0xDD0E57E73E5C4BF6();
	if (!unk_0x234B68AC2E35ED5A(iLocal_126, 1))
	{
		return;
	}
	if (func_34(unk_0x1146A9AE09CE2B14(), 0))
	{
		iVar4 = func_439();
		iVar3 = Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_755;
	}
	iVar5 = func_429(iVar3);
	if (!func_548())
	{
		if (func_214("DCONTRA_OBJ"))
		{
			func_1103();
		}
		if (func_214("DCONTRA_OBJ2"))
		{
			func_1103();
		}
		if (func_214("DCONTRA_OBJ3"))
		{
			func_1103();
		}
		if (func_214("DCONTRA_OBJ4"))
		{
			func_1103();
		}
		if (func_214("DCONTRA_TOBJ"))
		{
			func_1103();
		}
		if (func_214("DCONTRA_TOBJ2"))
		{
			func_1103();
		}
		if (func_214("DCONTRA_TOBJ3"))
		{
			func_1103();
		}
		if (func_214("DCONTRA_WOBJ"))
		{
			func_1103();
		}
		return;
	}
	if (iVar5 < 3)
	{
		if (func_214("DCONTRA_OBJ"))
		{
			func_1103();
		}
		if (func_214("DCONTRA_OBJ2"))
		{
			func_1103();
		}
		if (func_214("DCONTRA_OBJ3"))
		{
			func_1103();
		}
		if (func_214("DCONTRA_OBJ4"))
		{
			func_1103();
		}
		if (func_214("DCONTRA_TOBJ"))
		{
			func_1103();
		}
		if (func_214("DCONTRA_TOBJ2"))
		{
			func_1103();
		}
		if (func_214("DCONTRA_TOBJ3"))
		{
			func_1103();
		}
		if (func_214("DCONTRA_WOBJ"))
		{
			func_1103();
		}
		return;
	}
	if (func_28())
	{
		return;
	}
	if (!func_440())
	{
		if (!unk_0x234B68AC2E35ED5A(Local_124.f_1, 13) && !unk_0x234B68AC2E35ED5A(Local_125[iVar4 /*11*/].f_1, 11))
		{
			if (!func_214("DCONTRA_WOBJ"))
			{
				func_953("DCONTRA_WOBJ", 0);
			}
		}
		else if (iVar4 == Local_124.f_218)
		{
			if (!func_214("DCONTRA_OBJ"))
			{
				func_953("DCONTRA_OBJ", 0);
			}
		}
		else if (func_1221() == Local_124.f_218)
		{
			if (!func_214("DCONTRA_OBJ"))
			{
				func_953("DCONTRA_OBJ", 0);
			}
		}
	}
	else if (func_952())
	{
		if (iVar4 == Local_124.f_218)
		{
			if (!func_214("DCONTRA_OBJ2"))
			{
				func_953("DCONTRA_OBJ2", 0);
			}
		}
		else if (func_1221() == Local_124.f_218)
		{
			if (!func_214("DCONTRA_OBJ2"))
			{
				func_953("DCONTRA_OBJ2", 0);
			}
		}
	}
	else
	{
		if (func_214("DCONTRA_OBJ2"))
		{
			func_1103();
		}
		if (func_214("DCONTRA_TOBJ2"))
		{
			func_1103();
		}
		if (Local_124.f_216 < 0)
		{
			if (!func_214("DCONTRA_OBJ4"))
			{
				func_953("DCONTRA_OBJ4", 0);
			}
		}
		else
		{
			iVar2 = func_951();
			if (iVar2 != func_57())
			{
				if (unk_0xFCC26BA7572E9F1F(iVar2))
				{
					if (iVar2 == iVar3)
					{
						if (!func_214("DCONTRA_OBJ3"))
						{
							func_953("DCONTRA_OBJ3", 0);
						}
					}
					else if (!func_214("DCONTRA_TOBJ3"))
					{
						iVar0 = func_323(iVar2);
						if (iVar0 > -1)
						{
							iVar1 = func_321(iVar0);
							func_940("DCONTRA_TOBJ3", "DCONTRA_CBAND", iVar1, 0);
						}
					}
				}
			}
		}
	}
}

void func_940(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_941(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1312603 = 19;
		Global_1312603.f_56 = iParam2;
	}
}

int func_941(char* sParam0, char* sParam1, bool bParam2, var uParam3)
{
	if (unk_0xAB6A270F84A8781E(sParam0))
	{
		return 0;
	}
	if (unk_0xCF7E9D7EE2349689(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0xAB6A270F84A8781E(sParam1))
	{
		return 0;
	}
	if (func_950(sParam0, sParam1) && Global_1312603.f_56 == Global_1312603.f_58)
	{
		return 0;
	}
	func_945();
	Global_1312603 = 3;
	StringCopy(&(Global_1312603.f_1), unk_0x471C98FD94C0A5FD(), 32);
	Global_1312603.f_9 = unk_0x15173FB88ABC94F9(&(Global_1312603.f_1));
	StringCopy(&(Global_1312603.f_12), sParam0, 16);
	StringCopy(&(Global_1312603.f_16), sParam1, 64);
	Global_1312603.f_58 = uParam3;
	Global_1312603.f_56 = uParam3;
	func_944();
	func_943(bParam2);
	func_942();
	return 1;
}

void func_942()
{
	unk_0x191DDA30577F440A(&(Global_1312603.f_59), 1);
}

void func_943(bool bParam0)
{
	if (bParam0)
	{
		unk_0x191DDA30577F440A(&(Global_1312603.f_59), 0);
		return;
	}
	unk_0xC664C0067EEAB8D1(&(Global_1312603.f_59), 0);
}

void func_944()
{
	Global_1312603.f_10 = unk_0x5FBE5EA201067B5E(unk_0x551F46B3C7DFB654(), 86400000);
	Global_1312603.f_11 = unk_0x551F46B3C7DFB654();
}

void func_945()
{
	func_947();
	func_946(0);
}

void func_946(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x02BFF15CAA701972();
	Global_1312603 = 20;
	StringCopy(&(Global_1312603.f_1), "", 32);
	Global_1312603.f_9 = 0;
	if (bVar0)
	{
		Global_1312603.f_10 = unk_0x551F46B3C7DFB654();
		Global_1312603.f_11 = unk_0x551F46B3C7DFB654();
	}
	StringCopy(&(Global_1312603.f_12), "", 16);
	StringCopy(&(Global_1312603.f_16), "", 64);
	StringCopy(&(Global_1312603.f_32), "", 64);
	Global_1312603.f_52 = 0;
	Global_1312603.f_53 = 0;
	Global_1312603.f_54 = 0;
	Global_1312603.f_55 = -1;
	Global_1312603.f_56 = 0;
	Global_1312603.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_947()
{
	if (!func_949())
	{
	}
	if (func_217())
	{
		unk_0xEB16010DBE2A2950(&(Global_1312603.f_12));
		func_948();
		unk_0xEDA1E269A9237146();
	}
}

void func_948()
{
	switch (Global_1312603)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x38CD3C04C877C35F(Global_1312603.f_52);
			return;
		
		case 2:
			unk_0x38CD3C04C877C35F(Global_1312603.f_52);
			unk_0x38CD3C04C877C35F(Global_1312603.f_53);
			return;
		
		case 3:
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_16));
			return;
		
		case 4:
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_16));
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_32));
			return;
		
		case 5:
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_16));
			return;
		
		case 6:
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_56);
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_16));
			return;
		
		case 7:
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_16));
			return;
		
		case 8:
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_56);
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_16));
			return;
		
		case 9:
			unk_0x5F14E9A3543AFD0E(&(Global_1312603.f_16));
			return;
		
		case 10:
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_16));
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_32));
			return;
		
		case 12:
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_16));
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_32));
			return;
		
		case 13:
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_56);
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_16));
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_57);
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_32));
			return;
		
		case 11:
			unk_0x5F14E9A3543AFD0E(&(Global_1312603.f_16));
			return;
		
		case 14:
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_56);
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_16));
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_56);
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_32));
			return;
		
		case 15:
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_56);
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_16));
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_57);
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_32));
			return;
		
		case 17:
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_16));
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_32));
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_56);
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_48));
			return;
		
		case 16:
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_56);
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_16));
			return;
		
		case 19:
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_56);
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_16));
			return;
		
		case 18:
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_16));
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_56);
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_48));
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_32));
			return;
		
		default:
	}
}

int func_949()
{
	if (!func_217())
	{
		return 0;
	}
	unk_0x40542ED8EFC7D2D7(&(Global_1312603.f_12));
	func_948();
	return unk_0xB4BAEA083E2652CB();
}

bool func_950(char* sParam0, char* sParam1)
{
	if (!func_217())
	{
		return 0;
	}
	if (unk_0xAB6A270F84A8781E(sParam0))
	{
		return 0;
	}
	if (unk_0xAB6A270F84A8781E(sParam1))
	{
		return 0;
	}
	if (!unk_0x15173FB88ABC94F9(sParam0) == unk_0x15173FB88ABC94F9(&(Global_1312603.f_12)))
	{
		return 0;
	}
	return unk_0x15173FB88ABC94F9(sParam1) == unk_0x15173FB88ABC94F9(&(Global_1312603.f_16));
}

int func_951()
{
	int iVar0;
	
	iVar0 = func_57();
	if (Local_124.f_216 > -1)
	{
		iVar0 = unk_0xC502CD39B4994F3A(Local_124.f_216);
	}
	return iVar0;
}

int func_952()
{
	var uVar0;
	var uVar1;
	
	if (unk_0x159BC3DDA80D71AC(Local_124.f_2[0 /*10*/].f_2))
	{
		if (func_13(Local_124.f_2[0 /*10*/].f_2))
		{
			uVar0 = unk_0x854C404AEB476240(Local_124.f_2[0 /*10*/].f_2);
			if (unk_0x159BC3DDA80D71AC(Local_124.f_2[0 /*10*/].f_1))
			{
				if (!func_24(Local_124.f_2[0 /*10*/].f_1))
				{
					uVar1 = unk_0x8A437068C87289B7(Local_124.f_2[0 /*10*/].f_1);
					if (unk_0xF41EB7643E61A928(uVar1, uVar0, 0))
					{
						return 1;
					}
				}
			}
			if (unk_0x159BC3DDA80D71AC(Local_124.f_2[1 /*10*/].f_1))
			{
				if (!func_24(Local_124.f_2[1 /*10*/].f_1))
				{
					iVar1 = unk_0x8A437068C87289B7(Local_124.f_2[1 /*10*/].f_1);
					if (unk_0xF41EB7643E61A928(iVar1, iVar0, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_953(char* sParam0, bool bParam1)
{
	if (unk_0xAB6A270F84A8781E(sParam0))
	{
		return;
	}
	if (unk_0xCF7E9D7EE2349689(sParam0) > 23)
	{
		return;
	}
	if (func_215(sParam0))
	{
		return;
	}
	func_945();
	Global_1312603 = 0;
	StringCopy(&(Global_1312603.f_1), unk_0x471C98FD94C0A5FD(), 32);
	Global_1312603.f_9 = unk_0x15173FB88ABC94F9(&(Global_1312603.f_1));
	StringCopy(&(Global_1312603.f_12), sParam0, 16);
	func_944();
	func_943(bParam1);
	func_942();
}

void func_954()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_1220() && !func_438())
	{
		return;
	}
	if (!unk_0x234B68AC2E35ED5A(iLocal_126, 18))
	{
		iVar0 = func_429(unk_0x1146A9AE09CE2B14());
		if (iVar0 >= 2)
		{
			unk_0x191DDA30577F440A(&iLocal_126, 18);
			func_1063(-1, 0, 0, -1, 0, 0);
		}
	}
	if (!func_548())
	{
		return;
	}
	iVar1 = unk_0xDD0E57E73E5C4BF6();
	iVar2 = unk_0x1146A9AE09CE2B14();
	if (func_34(unk_0x1146A9AE09CE2B14(), 0))
	{
		iVar1 = func_439();
		iVar2 = Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_755;
	}
	if (!unk_0x234B68AC2E35ED5A(iLocal_126, 1))
	{
		iVar0 = func_429(iVar2);
		if (iVar0 >= 2)
		{
			if (iVar1 == Local_124.f_218)
			{
				if (func_440())
				{
					if (func_982())
					{
						func_598(86, "BIGM_DEFEND", "BIGM_DEFEND3", 1, -1, 2, 1, 0);
						unk_0x191DDA30577F440A(&iLocal_126, 1);
					}
				}
				else if (func_982())
				{
					func_598(86, "BIGM_DEFEND", "BIGM_DEFEND2", 1, -1, 2, 1, 0);
					unk_0x191DDA30577F440A(&iLocal_126, 1);
				}
				if (unk_0x234B68AC2E35ED5A(iLocal_126, 1))
				{
					if (iVar2 == unk_0x1146A9AE09CE2B14())
					{
						func_981(1);
					}
				}
			}
			else if (func_1221() == Local_124.f_218)
			{
				if (func_440())
				{
					if (func_955(func_976(1), "DCONTRA_TXT2", 2, 0, 0, 0, 0, 1, 0, 1))
					{
						func_598(86, "BIGM_DEFEND", "BIGM_DEFEND3", 1, -1, 2, 1, 0);
					}
				}
				else if (func_955(func_976(1), "DCONTRA_TXT1", 2, 0, 0, 0, 0, 1, 0, 1))
				{
					func_598(86, "BIGM_DEFEND", "BIGM_DEFEND4", 1, -1, 2, 1, 0);
				}
				if (iVar2 == unk_0x1146A9AE09CE2B14())
				{
					func_981(1);
				}
				unk_0x191DDA30577F440A(&iLocal_126, 1);
			}
			else
			{
				unk_0x191DDA30577F440A(&iLocal_126, 1);
			}
		}
		else
		{
			unk_0x191DDA30577F440A(&iLocal_126, 1);
		}
	}
}

int func_955(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0xC664C0067EEAB8D1(&Global_7668, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_957(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8375 = iParam6;
			Global_8278[3 /*6*/] = { func_956(iParam0) };
			Global_8355 = iParam0;
			unk_0x191DDA30577F440A(&Global_7668, 1);
			unk_0x191DDA30577F440A(&Global_7668, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_956(int iParam0)
{
	return Global_1878[iParam0 /*29*/].f_3;
}

int func_957(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0xDA654EB115F9FF7D(sParam14, sParam15))
	{
	}
	func_969();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_19798 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_19798 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_19798 == 1)
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
		if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
		{
			if (unk_0x0A0080A9EB535EC7(unk_0x7D2B9E6A64637269()))
			{
				return 0;
			}
		}
		if (Global_112293.f_14049[Global_19798 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x636F1F53CC61D2C9(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x636F1F53CC61D2C9(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_968() == 0)
	{
		func_966();
		return 0;
	}
	func_965(Global_22192);
	StringCopy(&(Global_112293.f_14139[Global_22192 /*104*/]), sParam1, 64);
	Global_112293.f_14139[Global_22192 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_112293.f_14139[Global_22192 /*104*/].f_24 = iParam2;
	}
	Global_112293.f_14139[Global_22192 /*104*/].f_25 = iParam7;
	Global_112293.f_14139[Global_22192 /*104*/].f_26 = uParam8;
	Global_112293.f_14139[Global_22192 /*104*/].f_29 = uParam9;
	Global_112293.f_14139[Global_22192 /*104*/].f_30 = uParam12;
	Global_112293.f_14139[Global_22192 /*104*/].f_31 = uParam11;
	Global_112293.f_14139[Global_22192 /*104*/].f_28 = 0;
	Global_112293.f_14139[Global_22192 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_112293.f_14139[Global_22192 /*104*/].f_33), sParam4, 64);
	Global_112293.f_14139[Global_22192 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_112293.f_14139[Global_22192 /*104*/].f_50), sParam5, 64);
	Global_112293.f_14139[Global_22192 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_112293.f_14139[Global_22192 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_112293.f_14139[Global_22192 /*104*/].f_83), sParam15, 64);
	if (unk_0x234B68AC2E35ED5A(Global_7668, 10))
	{
		Global_112293.f_14139[Global_22192 /*104*/].f_99[0] = 1;
		Global_112293.f_14139[Global_22192 /*104*/].f_99[1] = 1;
		Global_112293.f_14139[Global_22192 /*104*/].f_99[2] = 1;
		Global_8374 = 4;
		func_964(0);
		func_964(2);
		func_964(1);
	}
	else
	{
		func_969();
		switch (iParam16)
		{
			case 3:
				Global_112293.f_14139[Global_22192 /*104*/].f_99[Global_19798] = 1;
				break;
			
			case 0:
				Global_112293.f_14139[Global_22192 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_112293.f_14139[Global_22192 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_112293.f_14139[Global_22192 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_19798)
			{
				case 0:
					func_964(0);
					Global_8374 = 0;
					break;
				
				case 1:
					func_964(1);
					Global_8374 = 1;
					break;
				
				case 2:
					func_964(2);
					Global_8374 = 2;
					break;
				
				case 3:
					func_964(3);
					Global_8374 = 3;
					break;
				
				default:
					Global_8374 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0x234B68AC2E35ED5A(Global_7668, 10))
		{
			Global_112293.f_14049[0 /*20*/].f_17 = 1;
			Global_112293.f_14049[1 /*20*/].f_17 = 1;
			Global_112293.f_14049[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_112293.f_14049[Global_19798 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_112293.f_14049[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_112293.f_14049[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_112293.f_14049[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_22194[Global_22192] = 0;
	if (bParam10)
	{
		func_969();
		if (Global_19741)
		{
			StringCopy(&Global_19787, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_19798)
			{
				case 0:
					StringCopy(&Global_19787, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_19787, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_19787, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_19787, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8473[Global_19798 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_594())
			{
				unk_0x9B0169E27978C1A2(-1, "Text_Arrive_Tone", &Global_19787, 1);
			}
		}
	}
	if (!Global_19985)
	{
		if (Global_19798.f_1 == 6)
		{
			func_963(Global_19779, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_960(1);
			func_963(Global_19779, "DISPLAY_VIEW", 1f, to_float(Global_19778), -1082130432, -1082130432, -1082130432);
		}
	}
	func_958(uParam0, sParam1);
	return 1;
}

void func_958(var uParam0, char* sParam1)
{
	if (!func_959())
	{
		return;
	}
	unk_0xE02F4C3522882D1E(uParam0, 1654525105, unk_0x15173FB88ABC94F9(sParam1), 0);
}

int func_959()
{
	if (!Global_262145.f_28376)
	{
		return 0;
	}
	if (!Global_77248)
	{
		return 0;
	}
	if (unk_0x1146A9AE09CE2B14() == func_57())
	{
		return 0;
	}
	if (func_237(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if (unk_0x234B68AC2E35ED5A(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0xE45310E861787FC2())
	{
		return 0;
	}
	return 1;
}

void func_960(int iParam0)
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
	
	Global_22193 = 0;
	Global_8273 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_8237[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_962(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7675[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7675[iVar1 /*15*/].f_4)
					{
						if (Global_8237[iVar0] == 0)
						{
							Global_8201[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0x234B68AC2E35ED5A(Global_7669, 3))
								{
									iVar2 = 42;
									Global_19988 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_19988 = 0;
								}
								unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
								unk_0x9E3D03981E2E9AD9(1);
								unk_0x9E3D03981E2E9AD9(iVar0);
								unk_0x9E3D03981E2E9AD9(Global_7675[iVar1 /*15*/].f_10);
								unk_0x9E3D03981E2E9AD9(0);
								func_299(&(Global_7675[iVar1 /*15*/]));
								unk_0x9E3D03981E2E9AD9(iVar2);
								unk_0x392841D58D2EED1D();
							}
							if (Global_2463492)
							{
								if (iVar1 == 14)
								{
									func_961(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(Global_22188), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_8237[iVar0] = 1;
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
				if (iParam0 == Global_7675[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7675[iVar1 /*15*/].f_4)
					{
						if (Global_8237[iVar0] == 0)
						{
							Global_8201[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_112293.f_14139[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_112293.f_14139[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_112293.f_14139[iVar3 /*104*/].f_99[Global_19798] == 1)
											{
												Global_22193++;
											}
										}
									}
									iVar3++;
								}
								func_961(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(Global_22193), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_77248)
								{
									iVar4 = 0;
									iVar4 = Global_4271213;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4271214[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4271214[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4271214[iVar5 /*104*/].f_99[Global_19798] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_961(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_19798)
									{
										case 0:
											iVar6 = Global_43193;
											break;
										
										case 1:
											iVar6 = Global_43194;
											break;
										
										case 2:
											iVar6 = Global_43195;
											break;
										
										default:
											break;
									}
									func_961(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(iVar6), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_961(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(Global_22188), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
								unk_0x9E3D03981E2E9AD9(1);
								unk_0x9E3D03981E2E9AD9(iVar0);
								unk_0x9E3D03981E2E9AD9(Global_7675[iVar1 /*15*/].f_10);
								unk_0x9E3D03981E2E9AD9(0);
								func_299(&(Global_7675[iVar1 /*15*/]));
								unk_0x9E3D03981E2E9AD9(Global_7674);
								unk_0x392841D58D2EED1D();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x234B68AC2E35ED5A(Global_7669, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
								unk_0x9E3D03981E2E9AD9(1);
								unk_0x9E3D03981E2E9AD9(iVar0);
								unk_0x9E3D03981E2E9AD9(Global_7675[iVar1 /*15*/].f_10);
								unk_0x9E3D03981E2E9AD9(0);
								func_299(&(Global_7675[iVar1 /*15*/]));
								unk_0x9E3D03981E2E9AD9(iVar7);
								unk_0x392841D58D2EED1D();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x234B68AC2E35ED5A(Global_7669, 3))
								{
									iVar8 = 42;
									Global_19988 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_19988 = 0;
								}
								unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
								unk_0x9E3D03981E2E9AD9(1);
								unk_0x9E3D03981E2E9AD9(iVar0);
								unk_0x9E3D03981E2E9AD9(Global_7675[iVar1 /*15*/].f_10);
								unk_0x9E3D03981E2E9AD9(0);
								func_299(&(Global_7675[iVar1 /*15*/]));
								unk_0x9E3D03981E2E9AD9(iVar8);
								unk_0x392841D58D2EED1D();
							}
							else if (iVar1 == 8)
							{
								unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
								unk_0x9E3D03981E2E9AD9(1);
								unk_0x9E3D03981E2E9AD9(iVar0);
								unk_0x9E3D03981E2E9AD9(Global_7675[iVar1 /*15*/].f_10);
								unk_0x9E3D03981E2E9AD9(0);
								func_299(&(Global_7675[iVar1 /*15*/]));
								unk_0x9E3D03981E2E9AD9(42);
								unk_0x392841D58D2EED1D();
							}
							else if ((iVar1 == 23 && unk_0xDA654EB115F9FF7D(&(Global_7675[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0x234B68AC2E35ED5A(Global_7669, 6))
							{
								unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
								unk_0x9E3D03981E2E9AD9(1);
								unk_0x9E3D03981E2E9AD9(iVar0);
								unk_0x9E3D03981E2E9AD9(Global_7675[iVar1 /*15*/].f_10);
								unk_0x9E3D03981E2E9AD9(0);
								func_299(&(Global_7675[iVar1 /*15*/]));
								unk_0x9E3D03981E2E9AD9(42);
								unk_0x392841D58D2EED1D();
							}
							else if (Global_7675[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1627190.f_1;
								func_961(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(iVar9), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_961(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(0), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_8237[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_961(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0x704F8697BB515627(uParam0, sParam1);
	unk_0x9E3D03981E2E9AD9(round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x9E3D03981E2E9AD9(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x9E3D03981E2E9AD9(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x9E3D03981E2E9AD9(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x9E3D03981E2E9AD9(round(fParam6));
	}
	if (!unk_0xAB6A270F84A8781E(sParam7))
	{
		func_299(sParam7);
	}
	if (!unk_0xAB6A270F84A8781E(sParam8))
	{
		func_299(sParam8);
	}
	if (!unk_0xAB6A270F84A8781E(sParam9))
	{
		func_299(sParam9);
	}
	if (!unk_0xAB6A270F84A8781E(sParam10))
	{
		func_299(sParam10);
	}
	if (!unk_0xAB6A270F84A8781E(sParam11))
	{
		func_299(sParam11);
	}
	unk_0x392841D58D2EED1D();
}

bool func_962(int iParam0)
{
	return Global_42009 == iParam0;
}

void func_963(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x704F8697BB515627(uParam0, sParam1);
	unk_0x9E3D03981E2E9AD9(round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x9E3D03981E2E9AD9(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x9E3D03981E2E9AD9(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x9E3D03981E2E9AD9(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x9E3D03981E2E9AD9(round(fParam6));
	}
	unk_0x392841D58D2EED1D();
}

void func_964(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_112293.f_14049[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_965(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0x1947D86A2BB06F8D();
	uVar1 = unk_0x942C8DFFBBCB3EB4();
	uVar2 = unk_0xCA86FAB7FADC8353();
	uVar3 = unk_0x9E6858A319A1F6F2();
	uVar4 = unk_0xA91C851005050418() + 1;
	uVar5 = unk_0x77D50D8E8FF785AC();
	Global_112293.f_14139[iParam0 /*104*/].f_18 = uVar0;
	Global_112293.f_14139[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_112293.f_14139[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_112293.f_14139[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_112293.f_14139[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_112293.f_14139[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_966()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_77248)
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
	Global_22192 = 34;
	Global_112293.f_14139[Global_22192 /*104*/].f_18 = -1;
	Global_112293.f_14139[Global_22192 /*104*/].f_18.f_1 = 0;
	Global_112293.f_14139[Global_22192 /*104*/].f_18.f_2 = 0;
	Global_112293.f_14139[Global_22192 /*104*/].f_18.f_3 = 0;
	Global_112293.f_14139[Global_22192 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_967(Global_112293.f_14139[iVar2 /*104*/].f_18, Global_112293.f_14139[Global_22192 /*104*/].f_18))
		{
			Global_22192 = iVar2;
		}
		iVar2++;
	}
	Global_112293.f_14139[Global_22192 /*104*/].f_24 = 1;
}

int func_967(struct<6> Param0, struct<6> Param1)
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

int func_968()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_77248)
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
		if (Global_112293.f_14139[iVar2 /*104*/].f_24 == 0)
		{
			Global_22192 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_22192 = 34;
	Global_112293.f_14139[Global_22192 /*104*/].f_18 = -1;
	Global_112293.f_14139[Global_22192 /*104*/].f_18.f_1 = 0;
	Global_112293.f_14139[Global_22192 /*104*/].f_18.f_2 = 0;
	Global_112293.f_14139[Global_22192 /*104*/].f_18.f_3 = 0;
	Global_112293.f_14139[Global_22192 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_112293.f_14139[iVar2 /*104*/].f_24 == 0 || Global_112293.f_14139[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_967(Global_112293.f_14139[iVar2 /*104*/].f_18, Global_112293.f_14139[Global_22192 /*104*/].f_18))
			{
				Global_22192 = iVar2;
			}
		}
		if (Global_112293.f_14139[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_22192 == 34)
	{
		return 0;
	}
	Global_112293.f_14139[Global_22192 /*104*/].f_99[0] = 0;
	Global_112293.f_14139[Global_22192 /*104*/].f_99[1] = 0;
	Global_112293.f_14139[Global_22192 /*104*/].f_99[2] = 0;
	return 1;
}

void func_969()
{
	if (func_962(14))
	{
		if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
		{
			if (unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()) == Global_112293.f_28048[0 /*29*/])
			{
				Global_19798 = 0;
			}
			else if (unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()) == Global_112293.f_28048[1 /*29*/])
			{
				Global_19798 = 1;
			}
			else if (unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()) == Global_112293.f_28048[2 /*29*/])
			{
				Global_19798 = 2;
			}
			else
			{
				Global_19798 = 0;
			}
		}
	}
	else
	{
		Global_19798 = func_970();
		if (Global_19798 == 145)
		{
			Global_19798 = 3;
		}
		if (Global_77248)
		{
			Global_19798 = 3;
		}
		if (Global_19798 > 3)
		{
			Global_19798 = 3;
		}
	}
}

var func_970()
{
	func_971();
	return Global_112293.f_2361.f_539.f_4321;
}

void func_971()
{
	int iVar0;
	
	if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()))
	{
		if (func_974(Global_112293.f_2361.f_539.f_4321) != unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()))
		{
			iVar0 = func_973(unk_0x7D2B9E6A64637269());
			if (func_972(iVar0) && (!func_962(14) || Global_111244))
			{
				if (Global_112293.f_2361.f_539.f_4321 != iVar0 && func_972(Global_112293.f_2361.f_539.f_4321))
				{
					Global_112293.f_2361.f_539.f_4322 = Global_112293.f_2361.f_539.f_4321;
				}
				Global_112293.f_2361.f_539.f_4323 = iVar0;
				Global_112293.f_2361.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_112293.f_2361.f_539.f_4321 != 145)
			{
				Global_112293.f_2361.f_539.f_4323 = Global_112293.f_2361.f_539.f_4321;
			}
			return;
		}
	}
	Global_112293.f_2361.f_539.f_4321 = 145;
}

bool func_972(int iParam0)
{
	return iParam0 < 3;
}

int func_973(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x419E13582192CFEA(uParam0))
	{
		iVar1 = unk_0x6471F4759775FCA4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_974(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_974(int iParam0)
{
	if (func_972(iParam0))
	{
		return func_975(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_975(int iParam0)
{
	return Global_1878[iParam0 /*29*/];
}

int func_976(bool bParam0)
{
	if (func_979(bParam0))
	{
		if (bParam0 && func_978())
		{
			func_977(22, Global_19798, 1);
			return 22;
		}
		else
		{
			return 75;
		}
	}
	if (bParam0 && func_978())
	{
		func_977(22, Global_19798, 1);
		return 22;
	}
	return 74;
}

void func_977(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1878[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_112293.f_28048[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

int func_978()
{
	int iVar0;
	
	iVar0 = func_58(unk_0x1146A9AE09CE2B14());
	if (((iVar0 != unk_0x1146A9AE09CE2B14() && iVar0 != func_57()) && unk_0x8CFC2F41A749E236(iVar0)) && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

bool func_979(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		iVar0 = func_58(unk_0x1146A9AE09CE2B14());
		if (func_978())
		{
			if (func_980(iVar0))
			{
				return 1;
			}
			return 0;
		}
	}
	return func_526(3224, -1, 0) != 0;
}

bool func_980(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_27, 29);
}

void func_981(bool bParam0)
{
	if (bParam0)
	{
		if (!func_252(unk_0x1146A9AE09CE2B14(), 9))
		{
			if (func_429(unk_0x1146A9AE09CE2B14()) != 0)
			{
				func_253(9);
			}
		}
	}
	else if (func_252(unk_0x1146A9AE09CE2B14(), 9))
	{
		func_251(9);
	}
}

int func_982()
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_976(1);
	switch (iLocal_152)
	{
		case 0:
			sLocal_153 = func_1062();
			if (func_979(1))
			{
				func_1061(&uLocal_154, 3, 0, "EXECPA_MALE", 0, 1);
			}
			else
			{
				func_1061(&uLocal_154, 2, 0, "EXECPA_FEMALE", 0, 1);
			}
			iLocal_152++;
			break;
		
		case 1:
			if (func_1055(0, 1, 0, 1))
			{
				unk_0x191DDA30577F440A(&uVar1, 4);
				if (func_983(&uLocal_154, iVar0, "EXCALAU", sLocal_153, uVar1, 0))
				{
					iLocal_152++;
					return 1;
				}
			}
			break;
		
		case 2:
			break;
	}
	return 0;
}

int func_983(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, int iParam5)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_1053())
	{
		return 0;
	}
	if (func_1052())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_984(uParam0, iParam1, sParam2, sParam3, 1, iParam5, uParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

int func_984(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, int iParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xAB6A270F84A8781E(sParam2))
	{
		return 0;
	}
	if (unk_0xCF7E9D7EE2349689(sParam2) > 7)
	{
		return 0;
	}
	if (unk_0xAB6A270F84A8781E(sParam3))
	{
		return 0;
	}
	if (unk_0xCF7E9D7EE2349689(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = unk_0x15173FB88ABC94F9(unk_0x471C98FD94C0A5FD());
	iVar1 = func_1051(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0xAB6A270F84A8781E(iParam7))
	{
		iVar2 = unk_0x15173FB88ABC94F9(iParam7);
	}
	if (func_1050(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_1045(uParam6))
	{
		return 0;
	}
	if (func_1042(iVar0, iVar1, iVar2))
	{
		if (func_1041())
		{
			return 0;
		}
		func_1040();
		return func_991(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, iParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_990(iParam4))
	{
		return 0;
	}
	func_985(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}

void func_985(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, var uParam6)
{
	Global_1372345.f_40.f_1 = iParam0;
	Global_1372345.f_40.f_2 = iParam1;
	Global_1372345.f_40.f_3 = iParam2;
	StringCopy(&(Global_1372345.f_40.f_4), sParam3, 16);
	Global_1372345.f_40.f_8 = iParam4;
	Global_1372345.f_40.f_9 = iParam5;
	Global_1372345.f_40.f_14 = uParam6;
	func_986(iParam4);
	func_1040();
	Global_1372345.f_40.f_13 = unk_0x5FBE5EA201067B5E(unk_0x551F46B3C7DFB654(), 7000);
}

void func_986(int iParam0)
{
	if (func_989(iParam0))
	{
		func_988();
		return;
	}
	func_987();
}

void func_987()
{
	Global_1372345.f_40.f_10 = 0;
}

void func_988()
{
	Global_1372345.f_40.f_10 = 1;
}

int func_989(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return 1;
		
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return 0;
		
		default:
	}
	return 0;
}

bool func_990(int iParam0)
{
	return iParam0 > Global_1372345.f_40.f_8;
}

int func_991(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, var uParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_1039();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_1036(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_1033(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_1036(uParam0, sParam3, sParam4);
		}
		return func_1016(uParam0, iParam1, sParam3, sParam4, uParam7);
	}
	if (iParam5 == 5)
	{
		return func_1015(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_1011(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_1010(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_992(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_992(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_1009();
	bVar0 = true;
	if (func_994(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_993(120000);
		return 1;
	}
	return 0;
}

void func_993(int iParam0)
{
	Global_1372345.f_40.f_11 = unk_0x5FBE5EA201067B5E(unk_0x551F46B3C7DFB654(), iParam0);
	Global_1372345.f_40.f_12 = 1;
}

int func_994(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_57();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0xF04DBC0AC5A2AB23(iVar0);
		iVar1 = func_331(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x42CE89CF8FB079E5(unk_0x551F46B3C7DFB654(), Global_1372345.f_40.f_13))
			{
				return 0;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_1008(uParam5, bParam6, &iVar3);
	uVar5 = func_1006(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0xAB6A270F84A8781E(sParam8))
	{
		iVar6++;
		if (!unk_0xAB6A270F84A8781E(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0xDA654EB115F9FF7D(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (unk_0x234B68AC2E35ED5A(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0x234B68AC2E35ED5A(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0xAB6A270F84A8781E(sVar2))
	{
		bVar12 = func_1005(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_998(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0x234B68AC2E35ED5A(iParam4, 0))
	{
		func_997();
	}
	func_1009();
	func_996();
	func_995();
	return 1;
}

void func_995()
{
	Global_1372345.f_57 = 0;
	Global_1372345.f_57.f_1 = 0;
}

void func_996()
{
	Global_1372345.f_40 = 3;
}

void func_997()
{
	unk_0x191DDA30577F440A(&Global_7668, 8);
}

int func_998(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_999(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8375 = iParam6;
			unk_0x191DDA30577F440A(&Global_4272479, 0);
		}
		return 1;
	}
	return 0;
}

int func_999(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0xDA654EB115F9FF7D(sParam14, sParam15))
	{
	}
	func_969();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_19798 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_19798 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_19798 == 1)
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
		if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
		{
			if (unk_0x0A0080A9EB535EC7(unk_0x7D2B9E6A64637269()))
			{
				return 0;
			}
		}
		if (Global_4272464 == 1)
		{
			return 0;
		}
		if (unk_0x636F1F53CC61D2C9(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (unk_0x636F1F53CC61D2C9(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_1004() == 0)
	{
		func_1002();
		return 0;
	}
	func_1001(Global_4272463);
	StringCopy(&(Global_4271214[Global_4272463 /*104*/]), sParam1, 64);
	Global_4271214[Global_4272463 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_4271214[Global_4272463 /*104*/].f_24 = iParam2;
	}
	Global_4271214[Global_4272463 /*104*/].f_25 = iParam7;
	Global_4271214[Global_4272463 /*104*/].f_26 = uParam8;
	Global_4271214[Global_4272463 /*104*/].f_29 = uParam9;
	Global_4271214[Global_4272463 /*104*/].f_30 = uParam12;
	Global_4271214[Global_4272463 /*104*/].f_31 = uParam11;
	Global_4271214[Global_4272463 /*104*/].f_28 = 0;
	Global_4271214[Global_4272463 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_4271214[Global_4272463 /*104*/].f_33), sParam4, 64);
	Global_4271214[Global_4272463 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_4271214[Global_4272463 /*104*/].f_50), sParam5, 64);
	Global_4271214[Global_4272463 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_4271214[Global_4272463 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_4271214[Global_4272463 /*104*/].f_83), sParam15, 64);
	func_969();
	switch (iParam16)
	{
		case 3:
			Global_4271214[Global_4272463 /*104*/].f_99[Global_19798] = 1;
			break;
		
		case 0:
			Global_4271214[Global_4272463 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_4271214[Global_4272463 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_4271214[Global_4272463 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_19798)
		{
			case 0:
				func_964(0);
				break;
			
			case 1:
				func_964(1);
				break;
			
			case 2:
				func_964(2);
				break;
			
			case 3:
				func_964(3);
				break;
			
			default:
				break;
			}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_4272464 = 1;
				break;
			
			case 0:
				Global_4272464 = 1;
				break;
			
			case 2:
				Global_4272464 = 1;
				break;
			
			case 1:
				Global_4272464 = 1;
				break;
			}
	}
	Global_22194[Global_4272463] = 0;
	if (bParam10)
	{
		func_969();
		if (Global_19741)
		{
			StringCopy(&Global_19787, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_19798)
			{
				case 0:
					StringCopy(&Global_19787, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_19787, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_19787, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_19787, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8473[Global_19798 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_594())
			{
				unk_0x9B0169E27978C1A2(-1, "Text_Arrive_Tone", &Global_19787, 1);
			}
		}
	}
	if (!Global_19985)
	{
		if (Global_19798.f_1 == 6)
		{
			func_963(Global_19779, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_960(1);
			func_963(Global_19779, "DISPLAY_VIEW", 1f, to_float(Global_19778), -1082130432, -1082130432, -1082130432);
		}
	}
	func_1000(uParam0, sParam1);
	return 1;
}

void func_1000(var uParam0, char* sParam1)
{
	if (!func_959())
	{
		return;
	}
	unk_0xE02F4C3522882D1E(uParam0, -1180597171, unk_0x15173FB88ABC94F9(sParam1), 0);
}

void func_1001(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0x1947D86A2BB06F8D();
	uVar1 = unk_0x942C8DFFBBCB3EB4();
	uVar2 = unk_0xCA86FAB7FADC8353();
	uVar3 = unk_0x9E6858A319A1F6F2();
	uVar4 = unk_0xA91C851005050418() + 1;
	uVar5 = unk_0x77D50D8E8FF785AC();
	Global_4271214[iParam0 /*104*/].f_18 = uVar0;
	Global_4271214[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_4271214[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_4271214[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_4271214[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_4271214[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_1002()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_4272463 = 11;
	Global_4271214[Global_4272463 /*104*/].f_18 = -1;
	Global_4271214[Global_4272463 /*104*/].f_18.f_1 = 0;
	Global_4271214[Global_4272463 /*104*/].f_18.f_2 = 0;
	Global_4271214[Global_4272463 /*104*/].f_18.f_3 = 0;
	Global_4271214[Global_4272463 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_1003(Global_4271214[iVar2 /*104*/].f_18, Global_4271214[Global_4272463 /*104*/].f_18))
		{
			Global_4272463 = iVar2;
		}
		iVar2++;
	}
	Global_4271214[Global_4272463 /*104*/].f_24 = 1;
}

int func_1003(struct<6> Param0, struct<6> Param1)
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

int func_1004()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_4271214[iVar2 /*104*/].f_24 == 0)
		{
			Global_4272463 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4272463 = 11;
	Global_4271214[Global_4272463 /*104*/].f_18 = -1;
	Global_4271214[Global_4272463 /*104*/].f_18.f_1 = 0;
	Global_4271214[Global_4272463 /*104*/].f_18.f_2 = 0;
	Global_4271214[Global_4272463 /*104*/].f_18.f_3 = 0;
	Global_4271214[Global_4272463 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_4271214[iVar2 /*104*/].f_24 == 0 || Global_4271214[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_1003(Global_4271214[iVar2 /*104*/].f_18, Global_4271214[Global_4272463 /*104*/].f_18))
			{
				Global_4272463 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4272463 == 11)
	{
		return 0;
	}
	Global_4271214[Global_4272463 /*104*/].f_99[0] = 0;
	Global_4271214[Global_4272463 /*104*/].f_99[1] = 0;
	Global_4271214[Global_4272463 /*104*/].f_99[2] = 0;
	return 1;
}

int func_1005(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	iVar0 = 3;
	if (func_999(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8375 = iParam10;
			unk_0x191DDA30577F440A(&Global_4272479, 0);
		}
		return 1;
	}
	return 0;
}

int func_1006(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_1007(2, iParam1);
	return iParam0;
}

void func_1007(int iParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	
	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	switch (iParam0)
	{
		case 1:
			bVar0 = true;
			break;
		
		case 2:
			bVar1 = true;
			break;
		
		default:
			return;
	}
	if (bVar0)
	{
		switch (*uParam1)
		{
			case 1:
			case 3:
				break;
			
			case 0:
				*uParam1 = 1;
				break;
			
			case 2:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*uParam1)
		{
			case 2:
			case 3:
				break;
			
			case 0:
				*uParam1 = 2;
				break;
			
			case 1:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
}

var func_1008(char* sParam0, bool bParam1, int iParam2)
{
	if (unk_0xAB6A270F84A8781E(uParam0))
	{
		return sLocal_18;
	}
	if (unk_0xDA654EB115F9FF7D(sParam0, sLocal_18))
	{
		return sLocal_18;
	}
	func_1007(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0x3A2A8DAFDBEC4CFE(sParam0);
}

void func_1009()
{
	Global_1372345.f_40.f_9 = 4;
}

int func_1010(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_1009();
	bVar0 = false;
	return func_994(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_1011(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_1012(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_1012(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_57();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0xF04DBC0AC5A2AB23(iVar0);
		iVar1 = func_331(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x42CE89CF8FB079E5(unk_0x551F46B3C7DFB654(), Global_1372345.f_40.f_13))
			{
				return 0;
			}
		}
		Global_22186 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_1008(uParam5, bParam6, &iVar3);
	uVar5 = func_1006(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0xAB6A270F84A8781E(sParam8))
	{
		iVar6++;
		if (!unk_0xAB6A270F84A8781E(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0xDA654EB115F9FF7D(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (unk_0x234B68AC2E35ED5A(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0x234B68AC2E35ED5A(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0xAB6A270F84A8781E(sVar2))
	{
		bVar12 = func_1014(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_955(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0x234B68AC2E35ED5A(iParam4, 0))
	{
		func_997();
	}
	func_1013();
	func_996();
	func_995();
	return 1;
}

void func_1013()
{
	Global_1372345.f_40.f_9 = 3;
}

int func_1014(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	unk_0xC664C0067EEAB8D1(&Global_7668, 10);
	iVar0 = 3;
	if (func_957(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8375 = iParam10;
			Global_8278[3 /*6*/] = { func_956(iParam0) };
			Global_8355 = iParam0;
			StringCopy(&Global_8356, sParam5, 64);
			unk_0x191DDA30577F440A(&Global_7668, 1);
			unk_0x191DDA30577F440A(&Global_7668, 7);
		}
		return 1;
	}
	return 0;
}

int func_1015(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
	}
	if (unk_0xB800560AF60FDD2E(unk_0x7D2B9E6A64637269()))
	{
		return 0;
	}
	func_1013();
	bVar0 = true;
	if (func_1012(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_993(120000);
		return 1;
	}
	return 0;
}

int func_1016(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		if (unk_0xB800560AF60FDD2E(unk_0x7D2B9E6A64637269()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (unk_0x234B68AC2E35ED5A(uParam4, 7))
	{
		iVar1 = 9;
	}
	if (unk_0x234B68AC2E35ED5A(iParam4, 4))
	{
		bVar0 = func_1032(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_1022(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (unk_0x234B68AC2E35ED5A(iParam4, 3))
		{
			func_1021(1);
		}
		if (unk_0x234B68AC2E35ED5A(iParam4, 5))
		{
			func_1020(1);
		}
		func_1019();
		func_996();
		func_1018();
		func_1017();
		return 1;
	}
	return 0;
}

void func_1017()
{
	Global_2553851 = 0;
}

void func_1018()
{
	Global_1372345.f_57 = 1;
	Global_1372345.f_57.f_1 = 0;
}

void func_1019()
{
	Global_1372345.f_40.f_9 = 1;
}

void func_1020(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x191DDA30577F440A(&Global_7670, 0);
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&Global_7670, 0);
	}
}

void func_1021(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x191DDA30577F440A(&Global_7668, 20);
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&Global_7668, 20);
	}
}

int func_1022(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_1031(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_21173 = 0;
	Global_21132 = 1;
	Global_21139 = 0;
	Global_21134 = 0;
	Global_22116 = 0;
	Global_22118 = 0;
	Global_22122 = 0;
	Global_21130 = 0;
	Global_21177 = 0;
	Global_21179 = 0;
	Global_2621441 = 0;
	return func_1023(sParam3, iParam4, bParam7);
}

int func_1023(char* sParam0, int iParam1, bool bParam2)
{
	Global_21126 = 0;
	if (Global_21125 == 0 || Global_21127 == 2)
	{
		if (Global_21125 != 0)
		{
			if (iParam1 > Global_21127)
			{
				if (Global_21132 == 0)
				{
					unk_0x75B41F5020877259(0);
					Global_19798.f_1 = 3;
					Global_21125 = 0;
					Global_21126 = 1;
					Global_21178 = 0;
					Global_21121 = 0;
					Global_21122 = 0;
					Global_21136 = 0;
					Global_21135 = 0;
					Global_19797 = 0;
				}
				else
				{
					func_1030();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x6C2F471E0CF8D4CF())
		{
			return 0;
		}
		if (func_413(8, -1))
		{
			return 0;
		}
		Global_21201 = { Global_21195 };
		func_1029();
		Global_20414 = { Global_20579 };
		Global_21131 = Global_21132;
		Global_21138 = Global_21139;
		Global_2621442 = Global_2621441;
		Global_21140 = { Global_21156 };
		Global_21133 = Global_21134;
		Global_22115 = Global_22116;
		Global_22123 = { Global_22129 };
		Global_22117 = Global_22118;
		Global_22119 = Global_22120;
		Global_22121 = Global_22122;
		Global_20744.f_370 = Global_22114;
		Global_20744.f_368 = Global_22112;
		Global_20744.f_369 = Global_22113;
		Global_21121 = Global_21122;
		if (Global_21131)
		{
			unk_0xC664C0067EEAB8D1(&Global_7668, 20);
			unk_0xC664C0067EEAB8D1(&Global_7669, 17);
			unk_0xC664C0067EEAB8D1(&Global_7670, 0);
			if (bParam2)
			{
				func_969();
				if (Global_8473[Global_19798 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19798.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19764 == 1)
			{
				return 0;
			}
			if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
			{
				if (unk_0x97AEEA04505AFDC3(unk_0x7D2B9E6A64637269()))
				{
					return 0;
				}
				if (func_1028())
				{
					return 0;
				}
				if (unk_0xB800560AF60FDD2E(unk_0x7D2B9E6A64637269()))
				{
					return 0;
				}
				if (unk_0x6B9E71121F5B8154(unk_0x7D2B9E6A64637269()))
				{
					return 0;
				}
				if (unk_0xA115FBF153CD1608(unk_0x7D2B9E6A64637269()))
				{
					return 0;
				}
				if (unk_0xF6AD8282F4B81331(unk_0x7D2B9E6A64637269(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_77248)
				{
					if (unk_0x0297E633EADA2182(unk_0x7D2B9E6A64637269()))
					{
						return 0;
					}
					if (unk_0xF4D8C7957C89929B(unk_0x1146A9AE09CE2B14()))
					{
						return 0;
					}
					if (unk_0x8A92595B8AA1D4E9(unk_0x7D2B9E6A64637269()))
					{
						return 0;
					}
					if (unk_0x3C4ADC6B88FA8A08(unk_0x1146A9AE09CE2B14(), 0))
					{
						return 0;
					}
				}
			}
			if (func_1027())
			{
				return 0;
			}
			else
			{
				switch (Global_19798.f_1)
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
				if (unk_0x234B68AC2E35ED5A(Global_7668, 9))
				{
					return 0;
				}
			}
			func_1026();
			Global_21135 = bParam2;
		}
		Global_21127 = iParam1;
		StringCopy(&Global_20744, sParam0, 24);
		Global_19991 = 0;
		func_1025();
		func_1024();
		return 1;
	}
	if (Global_21125 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21127 || iParam1 == Global_21127)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_1030();
	}
	return 0;
}

void func_1024()
{
	if (!func_959())
	{
		return;
	}
	if (Global_21131)
	{
		MemCopy(&(Global_1710127.f_1), {Global_20744}, 4);
		Global_1710127 = Global_6983;
		Global_1710127.f_6 = Global_21135;
	}
}

void func_1025()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19993[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x75B41F5020877259(0);
	Global_21125 = 1;
}

void func_1026()
{
	Global_21178 = Global_21177;
	Global_21172 = Global_21173;
	Global_21219 = { Global_21207 };
	Global_21225 = { Global_21213 };
	Global_21180 = Global_21179;
	Global_21249 = { Global_21231 };
	Global_21255 = { Global_21237 };
	Global_21261 = { Global_21243 };
	Global_21267 = { Global_21273 };
	Global_6983 = Global_6984;
	Global_6985 = Global_6986;
	Global_21136 = Global_21137;
	Global_21138 = Global_21139;
	Global_21140 = { Global_21156 };
	Global_21129 = Global_21130;
	Global_22141 = 0;
	Global_21174 = 0;
	Global_21175 = 0;
	unk_0xC664C0067EEAB8D1(&Global_7669, 16);
}

int func_1027()
{
	if (Global_19798.f_1 == 1 || Global_19798.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_1028()
{
	int iVar0;
	int iVar1;
	
	if (Global_77248)
	{
		iVar0 = 0;
		unk_0xBDC364B886846D11(unk_0x7D2B9E6A64637269(), &iVar1, 1);
		if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xC1DFA5E3535B69F6() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
	{
		if (unk_0xC4D136140D260163(unk_0x7D2B9E6A64637269(), 78, 1))
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

void func_1029()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20414[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20414[iVar0 /*10*/].f_1), "", 24);
		Global_20414[iVar0 /*10*/].f_7 = 0;
		Global_20414[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20414.f_161 = -99;
	Global_20414.f_162 = { 0f, 0f, 0f };
}

void func_1030()
{
	unk_0xBA3738C78262143F();
	Global_22136 = 0;
	if ((unk_0x8820F6FCD373F9F7() || Global_19798.f_1 == 9) || Global_19797 == 1)
	{
		unk_0x75B41F5020877259(0);
		Global_21125 = 6;
		Global_19798.f_1 = 3;
		return;
	}
	if (unk_0x6C2F471E0CF8D4CF())
	{
		unk_0x75B41F5020877259(1);
		Global_21125 = 6;
		return;
	}
}

void func_1031(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20579 = { *uParam0 };
	Global_6984 = iParam1;
	StringCopy(&Global_21195, sParam2, 24);
	Global_22114 = iParam5;
	if (iParam3 == 0)
	{
		Global_22112 = 1;
		Global_22110 = 0;
	}
	else
	{
		Global_22112 = 0;
		Global_22110 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22113 = 1;
		Global_22111 = 0;
	}
	else
	{
		Global_22113 = 0;
		Global_22111 = 1;
	}
}

int func_1032(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_1031(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_21173 = 1;
	Global_21132 = 1;
	Global_21139 = 0;
	Global_21134 = 0;
	Global_22116 = 0;
	Global_22118 = 0;
	Global_22122 = 0;
	Global_21130 = 0;
	Global_21177 = 0;
	Global_21179 = 0;
	Global_2621441 = 0;
	return func_1023(sParam3, iParam4, bParam7);
}

int func_1033(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
	}
	if (unk_0xB800560AF60FDD2E(unk_0x7D2B9E6A64637269()))
	{
		return 0;
	}
	if (func_1035(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_1034();
		func_1019();
		func_996();
		func_1018();
		func_1017();
		return 1;
	}
	return 0;
}

void func_1034()
{
	Global_22143 = 0;
}

bool func_1035(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_1031(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_21173 = 0;
	Global_21132 = 1;
	Global_21139 = 0;
	Global_21134 = 1;
	Global_22116 = 0;
	Global_22118 = 0;
	Global_22122 = 0;
	Global_21130 = 0;
	Global_21177 = 1;
	Global_21179 = 0;
	StringCopy(&Global_21273, sParam5, 24);
	Global_2621441 = 0;
	return func_1023(sParam3, iParam4, bParam8);
}

int func_1036(var uParam0, char* sParam1, char* sParam2)
{
	if (func_1038(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_1037();
		func_996();
		func_1018();
		return 1;
	}
	return 0;
}

void func_1037()
{
	Global_1372345.f_40.f_9 = 2;
}

bool func_1038(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1031(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21132 = 0;
	Global_21134 = 0;
	Global_21139 = 0;
	Global_22116 = 0;
	Global_22118 = 0;
	Global_22122 = 0;
	Global_2621441 = 0;
	return func_1023(sParam2, iParam3, 0);
}

void func_1039()
{
	Global_1372345.f_55 = Global_1372345.f_40.f_1;
	Global_1372345.f_55.f_1 = Global_1372345.f_40.f_10;
}

void func_1040()
{
	Global_1372345.f_40 = 1;
}

bool func_1041()
{
	return Global_1372345.f_40 == 1;
}

int func_1042(int iParam0, int iParam1, int iParam2)
{
	if (!func_1043(iParam0))
	{
		return 0;
	}
	if (Global_1372345.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1372345.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_1043(int iParam0)
{
	if (!func_1044())
	{
		return 0;
	}
	if (!Global_1372345.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_1044()
{
	if (Global_1372345.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_1045(int iParam0)
{
	if (func_1049())
	{
		return 0;
	}
	if (func_1048())
	{
		return 0;
	}
	if (func_1047(0))
	{
		return 0;
	}
	if (Global_1312485.f_18 != 0)
	{
		return 0;
	}
	if (Global_1669334 || func_556())
	{
		return 0;
	}
	if (!unk_0x234B68AC2E35ED5A(uParam0, 6))
	{
		if (func_1046())
		{
			return 0;
		}
	}
	return 1;
}

bool func_1046()
{
	return unk_0x42CE89CF8FB079E5(unk_0x551F46B3C7DFB654(), Global_1390181);
}

int func_1047(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19798.f_1 > 3)
		{
			if (unk_0x234B68AC2E35ED5A(Global_7668, 14))
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
	if (unk_0x636F1F53CC61D2C9(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19798.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_1048()
{
	return Global_1372345.f_40 == 3;
}

bool func_1049()
{
	return func_1027();
}

int func_1050(int iParam0, int iParam1, int iParam2)
{
	if (!func_1048())
	{
		return 0;
	}
	return func_1042(iParam0, iParam1, iParam2);
}

int func_1051(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0x15173FB88ABC94F9(&cVar0);
}

bool func_1052()
{
	return Global_2550920.f_1;
}

int func_1053()
{
	if (Global_1372533.f_2)
	{
		return 1;
	}
	return func_1054();
}

bool func_1054()
{
	return func_1049();
}

int func_1055(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0xE8FFE38E2BA32BD6())
	{
		return 0;
	}
	if (func_1060())
	{
		return 0;
	}
	if (!unk_0xE0A6F16F546C8274())
	{
		return 0;
	}
	if (func_419())
	{
		return 0;
	}
	if (func_595())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_102(unk_0x1146A9AE09CE2B14(), 1, 0))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_1059(unk_0x1146A9AE09CE2B14()))
		{
			return 0;
		}
	}
	if (func_1058())
	{
		return 0;
	}
	if (unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		return 0;
	}
	if (unk_0xA300BD5F71A8C704())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0xDF02DA324F934755(unk_0x1146A9AE09CE2B14()))
		{
			return 0;
		}
	}
	if (Global_1574199)
	{
		return 0;
	}
	if (func_1057())
	{
		return 0;
	}
	if (func_1056())
	{
		return 0;
	}
	if (func_412())
	{
		return 0;
	}
	if (Global_74428)
	{
		return 0;
	}
	if (Global_2554335)
	{
		return 0;
	}
	if (func_238(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	return 1;
}

bool func_1056()
{
	return Global_2453009.f_691;
}

bool func_1057()
{
	return Global_2453009.f_844;
}

bool func_1058()
{
	return Global_2441237.f_3165.f_578;
}

int func_1059(int iParam0)
{
	if (Global_2426865[iParam0 /*449*/].f_217 == 0)
	{
		return 0;
	}
	return 1;
}

int func_1060()
{
	if (Global_21125 != 0 || unk_0x6C2F471E0CF8D4CF())
	{
		return 1;
	}
	return 0;
}

void func_1061(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_77248)
	{
		if (!unk_0xECEC7528A52B4EE8(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x9CF2691831C7455F(iParam2, 0);
			}
			else
			{
				unk_0x9CF2691831C7455F(iParam2, 1);
			}
		}
		if (!unk_0xECEC7528A52B4EE8(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x354924FCEF0851C8(iParam2, 0);
			}
			else
			{
				unk_0x354924FCEF0851C8(iParam2, 1);
			}
		}
	}
}

char* func_1062()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = !func_979(1);
	iVar1 = unk_0xB36B8558948EA7A8(0, 3);
	if (!func_440())
	{
		if (bVar0)
		{
			switch (iVar1)
			{
				case 0:
					return "EXCAL_ATTAF";
				
				case 1:
					return "EXCAL_ATTAF2";
				
				default:
			}
			return "EXCAL_ATTAF3";
		}
		else
		{
			switch (iVar1)
			{
				case 0:
					return "EXCAL_ATTAM";
				
				case 1:
					return "EXCAL_ATTAM2";
				
				default:
			}
			return "EXCAL_ATTAM3";
		}
	}
	else if (bVar0)
	{
		switch (iVar1)
		{
			case 0:
				return "EXCAL_STOLEF";
			
			case 1:
				return "EXCAL_STOLF2";
			
			default:
		}
		return "EXCAL_STOLF3";
	}
	else
	{
		switch (iVar1)
		{
			case 0:
				return "EXCAL_STOLEM";
			
			case 1:
				return "EXCAL_STOLM2";
			
			default:
		}
		return "EXCAL_STOLM3";
	}
	return "";
}

void func_1063(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (bParam5)
	{
		iVar0 = func_311(unk_0x1146A9AE09CE2B14());
		Global_1682001 = iVar0;
		Global_1682001.f_1 = iParam0;
		if (func_673() != func_57())
		{
			Global_1682001.f_2 = func_821(func_673());
			Global_1682001.f_3 = func_820(func_673());
		}
		if (func_387() != func_57())
		{
			func_672(func_387(), &(Global_1682001.f_2), &(Global_1682001.f_3));
		}
		Global_1682001.f_7 = unk_0x666C16A4ED8F3098();
		Global_1682001.f_28 = func_909(unk_0x1146A9AE09CE2B14());
		Global_1682001.f_13 = 0;
		Global_1682001.f_14 = 0;
		if (func_319(unk_0x1146A9AE09CE2B14(), 1))
		{
			Global_1682001.f_23 = func_912(func_384(1));
		}
	}
	else
	{
		iVar0 = func_248(unk_0x1146A9AE09CE2B14());
	}
	if (iParam2 || func_465(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_1681740 = iVar0;
		if (func_448(iVar0))
		{
			Global_1681740.f_1 = 4;
		}
		else if (func_581(iVar0))
		{
			Global_1681740.f_1 = 5;
		}
		else if (func_350(iVar0, 0))
		{
			Global_1681740.f_1 = 2;
			if (func_647(iVar0))
			{
				Global_1681740.f_1 = 3;
			}
		}
		else
		{
			Global_1681740.f_1 = 1;
		}
		if (func_673() != func_57())
		{
			Global_1681740.f_4 = func_821(func_673());
			Global_1681740.f_5 = func_820(func_673());
		}
		if (func_387() != func_57())
		{
			func_672(func_387(), &(Global_1681740.f_6), &(Global_1681740.f_7));
		}
		Global_1681740.f_9 = unk_0x666C16A4ED8F3098();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_1681740.f_27 = 1;
			Global_1681740.f_28 = 1;
		}
		if (iParam0 != -1)
		{
			Global_1681740.f_26 = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_1681740.f_40 = func_668(iParam1);
			Global_1681740.f_41 = func_1102();
			Global_1681740.f_42 = func_775(unk_0x1146A9AE09CE2B14(), iParam1);
			Global_1681740.f_44 = func_902(unk_0x1146A9AE09CE2B14(), iParam1);
		}
		if (!func_663() || iVar0 != 192)
		{
			Global_1681740.f_53 = 0;
		}
	}
	else if (func_579(iVar0))
	{
		if (iVar0 == 225 || iVar0 == 226)
		{
			Global_1681857 = iParam0 + 1;
		}
		else if (iVar0 == 227)
		{
			Global_1681857 = iParam0 + 1;
		}
		else
		{
			Global_1681857 = func_1101(unk_0x1146A9AE09CE2B14());
		}
		switch (iVar0)
		{
			case 225:
				if (func_644(unk_0x1146A9AE09CE2B14()) == 0)
				{
					Global_1681857.f_1 = 0;
				}
				else
				{
					Global_1681857.f_1 = 1;
				}
				break;
			
			case 226:
				Global_1681857.f_1 = 2;
				break;
			
			case 227:
				Global_1681857.f_1 = 3;
				break;
		}
		Global_1681857.f_21 = 1;
		Global_1681857.f_22 = 1;
		if (func_673() != func_57())
		{
			Global_1681857.f_4 = func_821(func_673());
			Global_1681857.f_5 = func_820(func_673());
		}
		if (func_387() != func_57())
		{
			func_672(func_387(), &(Global_1681857.f_4), &(Global_1681857.f_5));
		}
		Global_1681857.f_8 = unk_0x666C16A4ED8F3098();
		if (iParam0 != -1)
		{
			Global_1681857.f_20 = iParam0;
		}
	}
	else if (func_470(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
		}
		Global_1681794 = iVar0;
		Global_1681740.f_1 = 1;
		if (func_673() != func_57())
		{
			Global_1681794.f_4 = func_821(func_673());
			Global_1681794.f_5 = func_820(func_673());
		}
		if (func_387() != func_57())
		{
			func_672(func_387(), &(Global_1681794.f_6), &(Global_1681794.f_7));
		}
		Global_1681794.f_9 = unk_0x666C16A4ED8F3098();
		if (iParam0 != -1)
		{
			Global_1681794.f_21 = iParam0;
		}
	}
	else if (func_577(iVar0))
	{
		Global_1681901 = iVar0;
		Global_1681901.f_1 = iParam0;
		Global_1681901.f_21 = 1;
		Global_1681901.f_22 = 1;
		if (func_673() != func_57())
		{
			Global_1681901.f_4 = func_821(func_673());
			Global_1681901.f_5 = func_820(func_673());
		}
		if (func_387() != func_57())
		{
			func_672(func_387(), &(Global_1681901.f_4), &(Global_1681901.f_5));
		}
		Global_1681901.f_8 = unk_0x666C16A4ED8F3098();
		if (iParam0 != -1)
		{
			Global_1681901.f_20 = iParam0;
		}
		Global_1681901.f_27 = func_895(func_36(), 5);
		Global_1681901.f_28 = func_912(func_1100(unk_0x1146A9AE09CE2B14()));
		Global_1681901.f_29 = func_526(6109, -1, 0);
		Global_1681901.f_30 = func_526(6105, -1, 0);
		Global_1681901.f_31 = func_526(6106, -1, 0);
		Global_1681901.f_32 = func_526(6108, -1, 0);
		Global_1681901.f_33 = func_526(6107, -1, 0);
		Global_1681901.f_34 = func_526(6110, -1, 0);
		Global_1681901.f_7 = func_911();
		Global_1681901.f_51 = func_912(bParam4);
	}
	else if (func_575(iVar0))
	{
		Global_1681955 = iVar0;
		Global_1681955.f_1 = iParam0;
		Global_1681955.f_21 = 1;
		Global_1681955.f_22 = 1;
		if (func_673() != func_57())
		{
			Global_1681955.f_4 = func_821(func_673());
			Global_1681955.f_5 = func_820(func_673());
		}
		if (func_387() != func_57())
		{
			func_672(func_387(), &(Global_1681955.f_4), &(Global_1681955.f_5));
		}
		Global_1681955.f_8 = unk_0x666C16A4ED8F3098();
		if (iParam0 != -1)
		{
			Global_1681955.f_20 = iParam0;
		}
		Global_1681955.f_24 = func_526(6159, -1, 0);
		Global_1681955.f_25 = func_526(6164, -1, 0);
		Global_1681955.f_26 = func_526(6165, -1, 0);
		Global_1681955.f_27 = func_912((((func_860() || func_859()) || func_858()) || func_857(unk_0x1146A9AE09CE2B14())));
		Global_1681955.f_28 = func_526(6166, -1, 0);
		Global_1681955.f_29 = func_912(func_856());
		Global_1681955.f_31 = 0;
		Global_1681955.f_30 = 0;
		Global_1681955.f_32 = 0;
		Global_1681955.f_33 = 0;
		Global_1681955.f_34 = 0;
		Global_1681955.f_16 = 0;
		Global_1681955.f_7 = func_911();
	}
	else if (((((((((iVar0 == 250 || iVar0 == 238) || iVar0 == 242) || iVar0 == 244) || iVar0 == 248) || iVar0 == 241) || iVar0 == 239) || iVar0 == 240) || iVar0 == 249) || (iVar0 == 237 && func_642(func_643(unk_0x1146A9AE09CE2B14()))))
	{
		Global_1682091 = iVar0;
		Global_1682091.f_1 = iParam0;
		Global_1682091.f_21 = 1;
		Global_1682091.f_22 = 1;
		Global_1682091.f_7 = func_911();
		if (func_673() != func_57())
		{
			Global_1682091.f_4 = func_821(func_673());
			Global_1682091.f_5 = func_820(func_673());
		}
		if (func_387() != func_57())
		{
			func_672(func_387(), &(Global_1682091.f_4), &(Global_1682091.f_5));
		}
		if (func_673() != -1)
		{
			Global_1682091.f_17 = func_853(func_673());
		}
		Global_1682091.f_8 = unk_0x666C16A4ED8F3098();
		Global_1682091.f_28 = func_909(unk_0x1146A9AE09CE2B14());
		Global_1682091.f_16 = 0;
		Global_1682091.f_24 = 0;
		Global_1682091.f_23 = 0;
		if (func_319(unk_0x1146A9AE09CE2B14(), 1))
		{
			Global_1682091.f_33 = func_912(func_384(1));
		}
	}
	else if (iVar0 == 237)
	{
		Global_1682037 = iVar0;
		Global_1682037.f_1 = iParam0;
		Global_1682037.f_21 = 1;
		Global_1682037.f_22 = 1;
		Global_1682037.f_7 = func_911();
		Global_1682037.f_24 = 0;
		Global_1682037.f_23 = 0;
		Global_1682037.f_16 = 0;
		if (func_673() != func_57())
		{
			Global_1682037.f_4 = func_821(func_673());
			Global_1682037.f_5 = func_820(func_673());
		}
		Global_1682037.f_28 = func_909(unk_0x1146A9AE09CE2B14());
		if (Global_1682037.f_28)
		{
			Global_1682037.f_29 = func_847(unk_0x1146A9AE09CE2B14());
		}
		else
		{
			Global_1682037.f_29 = 0;
		}
		Global_1682037.f_30 = func_831(unk_0x1146A9AE09CE2B14(), 4, -1);
		Global_1682037.f_31 = func_850(unk_0x1146A9AE09CE2B14());
		Global_1682037.f_32 = func_912(func_830(unk_0x1146A9AE09CE2B14()));
		Global_1682037.f_33 = func_912(func_829(unk_0x1146A9AE09CE2B14()));
		Global_1682037.f_34 = func_912(func_828(unk_0x1146A9AE09CE2B14()));
		Global_1682037.f_35 = func_912(func_827(unk_0x1146A9AE09CE2B14()));
		Global_1682037.f_36 = func_826(unk_0x1146A9AE09CE2B14());
		Global_1682037.f_37 = func_825(unk_0x1146A9AE09CE2B14());
		Global_1682037.f_39 = func_824(unk_0x1146A9AE09CE2B14());
		if (func_319(unk_0x1146A9AE09CE2B14(), 1))
		{
			Global_1682037.f_41 = func_912(func_384(1));
		}
		if (func_387() != func_57())
		{
			func_672(func_387(), &(Global_1682037.f_4), &(Global_1682037.f_5));
		}
		Global_1682037.f_8 = unk_0x666C16A4ED8F3098();
		Global_1682037.f_28 = func_909(unk_0x1146A9AE09CE2B14());
	}
	else if (func_640(iVar0))
	{
		Global_1682175 = iVar0;
		Global_1682175.f_1 = func_644(unk_0x1146A9AE09CE2B14());
		Global_1682175.f_2 = func_920();
		Global_1682175.f_3 = func_919();
		Global_1682175.f_4 = func_821(func_673());
		Global_1682175.f_5 = func_820(func_673());
		Global_1682175.f_7 = func_911();
		Global_1682175.f_8 = unk_0x666C16A4ED8F3098();
		if (func_673() != -1)
		{
			Global_1682175.f_17 = func_853(func_673());
		}
		Global_1682175.f_21 = 1;
		Global_1682175.f_22 = 1;
		Global_1682175.f_25 = iParam0;
		Global_1682175.f_27 = func_912(func_818(unk_0x1146A9AE09CE2B14()));
		Global_1682175.f_28 = func_814(21, -1);
	}
	else if (func_569(iVar0))
	{
		Global_1682250 = Global_786547.f_1;
		Global_1682250.f_2 = Global_786547;
		Global_1682250.f_6 = func_821(func_673());
		Global_1682250.f_7 = func_820(func_673());
		if (func_319(unk_0x1146A9AE09CE2B14(), 1))
		{
			Global_1682250.f_8 = func_912(func_384(1));
		}
		if (func_673() != -1)
		{
			Global_1682250.f_9 = func_853(func_673());
		}
		Global_1682250.f_10 = func_911();
		Global_1682250.f_19 = 1;
		Global_1682250.f_20 = 1;
		Global_1682250.f_21 = 0;
		Global_1682250.f_22 = 0;
		Global_1682250.f_23 = 0;
		Global_1710053 = unk_0x666C16A4ED8F3098();
	}
	else if (func_568(iVar0))
	{
		Global_1682337 = Global_786547.f_1;
		Global_1682337.f_3 = Global_786547;
		Global_1682337.f_6 = func_821(func_673());
		Global_1682337.f_7 = func_820(func_673());
		if (func_319(unk_0x1146A9AE09CE2B14(), 1))
		{
			Global_1682337.f_8 = func_912(func_384(1));
		}
		if (func_673() != -1)
		{
			Global_1682337.f_9 = func_853(func_673());
		}
		Global_1682337.f_10 = func_911();
		Global_1682337.f_21 = 0;
		Global_1682337.f_22 = 0;
		Global_1682337.f_23 = 0;
		Global_1682337.f_26 = func_1083(1);
		Global_1682337.f_34 = func_1083(0);
		Global_1682337.f_15 = !func_352(unk_0x1146A9AE09CE2B14(), func_387(), 1);
	}
	else if (func_806(iVar0))
	{
		Global_1682449 = iParam0;
		Global_1682449.f_1 = iVar0;
		Global_1682449.f_3 = func_821(func_673());
		Global_1682449.f_4 = func_820(func_673());
		Global_1682449.f_5 = func_912(func_384(1));
		Global_1682449.f_6 = func_911();
		Global_1682449.f_7 = func_853(func_673());
		Global_1682449.f_8 = 0;
	}
	else if (func_562(iVar0))
	{
		Global_1682470 = Global_786547.f_1;
		Global_1682470.f_27 = Global_786547;
		Global_1682470.f_5 = func_821(func_673());
		Global_1682470.f_6 = func_820(func_673());
		if (func_319(unk_0x1146A9AE09CE2B14(), 1))
		{
			Global_1682470.f_7 = func_912(func_384(1));
		}
		if (func_673() != -1)
		{
			Global_1682470.f_8 = func_853(func_673());
		}
		Global_1682470.f_9 = func_911();
		Global_1682470.f_18 = 1;
		Global_1682470.f_19 = 1;
		Global_1682470.f_20 = 0;
		Global_1682470.f_21 = 0;
		Global_1682470.f_22 = 0;
		Global_1682470.f_23 = func_1083(1);
		Global_1682470.f_24 = func_1083(0);
		Global_1682470.f_14 = !func_352(unk_0x1146A9AE09CE2B14(), func_387(), 1);
	}
	else
	{
		if (func_673() != func_57())
		{
			Global_1681722 = func_821(func_673());
			Global_1681722.f_1 = func_820(func_673());
		}
		Global_1681722.f_5 = unk_0x666C16A4ED8F3098();
		Global_1681722.f_13 = func_1082();
		Global_1681722.f_15 = 0;
		if (func_671(1))
		{
			if (func_387() == func_673())
			{
				Global_1681722.f_15 = 1;
			}
		}
		if (func_1081())
		{
			Global_1681857.f_28 = 1;
		}
		if (((((func_1080() || func_1079()) || func_1078()) || func_1077()) || func_1076()) || func_1075(unk_0x1146A9AE09CE2B14()))
		{
			Global_1681857.f_30 = 1;
		}
		if (func_1073(func_1074(joaat("trailersmall2"))))
		{
			Global_1681857.f_32 = 1;
		}
		if (func_1067(func_1072(joaat("caddy"))))
		{
			Global_1681857.f_31 = 1;
		}
		if (func_894(unk_0x1146A9AE09CE2B14()) || func_893(unk_0x1146A9AE09CE2B14()))
		{
			Global_1681857.f_29 = 1;
		}
		if (func_890(unk_0x1146A9AE09CE2B14()))
		{
			Global_1681857.f_33 = 1;
			Global_1681857.f_34 = 1;
		}
		if (func_891(unk_0x1146A9AE09CE2B14()))
		{
			Global_1681857.f_36 = 1;
		}
		if (func_888(0, unk_0x1146A9AE09CE2B14()) == 1)
		{
			Global_1681857.f_35 = 1;
		}
		if (func_1066(unk_0x1146A9AE09CE2B14(), 3, &uVar1))
		{
			Global_1681857.f_37 = 1;
		}
		if (func_1066(unk_0x1146A9AE09CE2B14(), 7, &uVar1))
		{
			Global_1681857.f_38 = 1;
		}
		if (func_1065(unk_0x1146A9AE09CE2B14()))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = func_1064(unk_0x1146A9AE09CE2B14(), iVar2);
				if (func_772(unk_0x1146A9AE09CE2B14(), iVar3, 0))
				{
					Global_1681857.f_39 = 1;
				}
				if (func_772(unk_0x1146A9AE09CE2B14(), iVar3, 2))
				{
					Global_1681857.f_40 = 1;
				}
				if (func_772(unk_0x1146A9AE09CE2B14(), iVar3, 1))
				{
					Global_1681857.f_41 = 1;
				}
				iVar2++;
			}
		}
	}
}

int func_1064(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == func_57())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_765(Global_1590908[iParam0 /*874*/].f_267.f_185[iParam1 /*12*/]))
	{
		uVar0 = Global_1590908[iParam0 /*874*/].f_267.f_185[iParam1 /*12*/];
	}
	return uVar0;
}

int func_1065(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_57())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1066(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 != func_57())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam1 == func_888(iVar0, iParam0))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1067(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_814(11, -1) == 0)
	{
		return 0;
	}
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = (iParam0 + func_874(11));
		func_873(iVar1, &iVar0, 1);
		iVar2 = func_814(func_1069(iVar1), -1);
		if (iVar2 > 0)
		{
		}
		else if (iVar0 >= 0)
		{
		}
		if (iVar0 >= 0)
		{
			iVar3 = func_526(func_1068(4, iVar0), -1, 0);
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

int func_1068(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
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
				
				case joaat("mpsv_lp0_31"):
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
				
				case 271:
					return 8538;
				
				case 272:
					return 8545;
				
				case 273:
					return 8552;
				
				case 274:
					return 8559;
				
				case 275:
					return 8566;
				
				case 276:
					return 8573;
				
				case 277:
					return 8580;
				
				case 278:
					return 8587;
				
				case 279:
					return 8594;
				
				case 280:
					return 8601;
				
				case 281:
					return 8985;
				
				case 282:
					return 8992;
				
				case 283:
					return 8999;
				
				case 284:
					return 9006;
				
				case 285:
					return 9013;
				
				case 286:
					return 9020;
				
				case 287:
					return 9027;
				
				case 288:
					return 9034;
				
				case 289:
					return 9041;
				
				case 290:
					return 9048;
				
				case 291:
					return 9055;
				
				case 292:
					return 9061;
				
				case 293:
					return 9067;
				
				case 294:
					return 9073;
				
				case 295:
					return 9080;
				
				case 296:
					return 9087;
				
				case 297:
					return 9094;
				
				case 298:
					return 9101;
				
				case 299:
					return 9108;
				
				case 300:
					return 9115;
				
				case 301:
					return 9122;
				
				case 302:
					return 9129;
				
				case 303:
					return 9136;
				
				case 304:
					return 9143;
				
				case 305:
					return 9149;
				
				case 306:
					return 9155;
				
				case 307:
					return 9636;
				
				case 308:
					return 9643;
				
				case 309:
					return 9650;
				
				case 310:
					return 9657;
				
				case 311:
					return 9664;
				
				case 312:
					return 9671;
				
				case 313:
					return 9678;
				
				case 314:
					return 9685;
				
				case 315:
					return 9692;
				
				case 316:
					return 9699;
				
				default:
			}
			break;
		
		case 2:
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
				
				case joaat("mpsv_lp0_31"):
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
				
				case 271:
					return 8539;
				
				case 272:
					return 8546;
				
				case 273:
					return 8553;
				
				case 274:
					return 8560;
				
				case 275:
					return 8567;
				
				case 276:
					return 8574;
				
				case 277:
					return 8581;
				
				case 278:
					return 8588;
				
				case 279:
					return 8595;
				
				case 280:
					return 8602;
				
				case 281:
					return 8986;
				
				case 282:
					return 8993;
				
				case 283:
					return 9000;
				
				case 284:
					return 9007;
				
				case 285:
					return 9014;
				
				case 286:
					return 9021;
				
				case 287:
					return 9028;
				
				case 288:
					return 9035;
				
				case 289:
					return 9042;
				
				case 290:
					return 9049;
				
				case 291:
					return 9056;
				
				case 292:
					return 9062;
				
				case 293:
					return 9068;
				
				case 294:
					return 9074;
				
				case 295:
					return 9081;
				
				case 296:
					return 9088;
				
				case 297:
					return 9095;
				
				case 298:
					return 9102;
				
				case 299:
					return 9109;
				
				case 300:
					return 9116;
				
				case 301:
					return 9123;
				
				case 302:
					return 9130;
				
				case 303:
					return 9137;
				
				case 304:
					return 9144;
				
				case 305:
					return 9150;
				
				case 306:
					return 9156;
				
				case 307:
					return 9637;
				
				case 308:
					return 9644;
				
				case 309:
					return 9651;
				
				case 310:
					return 9658;
				
				case 311:
					return 9665;
				
				case 312:
					return 9672;
				
				case 313:
					return 9679;
				
				case 314:
					return 9686;
				
				case 315:
					return 9693;
				
				case 316:
					return 9700;
				
				default:
			}
			break;
		
		case 3:
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
				
				case joaat("mpsv_lp0_31"):
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
				
				case 271:
					return 8540;
				
				case 272:
					return 8547;
				
				case 273:
					return 8554;
				
				case 274:
					return 8561;
				
				case 275:
					return 8568;
				
				case 276:
					return 8575;
				
				case 277:
					return 8582;
				
				case 278:
					return 8589;
				
				case 279:
					return 8596;
				
				case 280:
					return 8603;
				
				case 281:
					return 8987;
				
				case 282:
					return 8994;
				
				case 283:
					return 9001;
				
				case 284:
					return 9008;
				
				case 285:
					return 9015;
				
				case 286:
					return 9022;
				
				case 287:
					return 9029;
				
				case 288:
					return 9036;
				
				case 289:
					return 9043;
				
				case 290:
					return 9050;
				
				case 291:
					return 9057;
				
				case 292:
					return 9063;
				
				case 293:
					return 9069;
				
				case 294:
					return 9075;
				
				case 295:
					return 9082;
				
				case 296:
					return 9089;
				
				case 297:
					return 9096;
				
				case 298:
					return 9103;
				
				case 299:
					return 9110;
				
				case 300:
					return 9117;
				
				case 301:
					return 9124;
				
				case 302:
					return 9131;
				
				case 303:
					return 9138;
				
				case 304:
					return 9145;
				
				case 305:
					return 9151;
				
				case 306:
					return 9157;
				
				case 307:
					return 9638;
				
				case 308:
					return 9645;
				
				case 309:
					return 9652;
				
				case 310:
					return 9659;
				
				case 311:
					return 9666;
				
				case 312:
					return 9673;
				
				case 313:
					return 9680;
				
				case 314:
					return 9687;
				
				case 315:
					return 9694;
				
				case 316:
					return 9701;
				
				default:
			}
			break;
		
		case 4:
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
					return 3336;
				
				case 78:
					return 3344;
				
				case joaat("mpsv_lp0_31"):
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
					return 4132;
				
				case 101:
					return 4140;
				
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
					return 4292;
				
				case 121:
					return 4300;
				
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
					return 4452;
				
				case 141:
					return 4460;
				
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
				
				case 271:
					return 8541;
				
				case 272:
					return 8548;
				
				case 273:
					return 8555;
				
				case 274:
					return 8562;
				
				case 275:
					return 8569;
				
				case 276:
					return 8576;
				
				case 277:
					return 8583;
				
				case 278:
					return 8590;
				
				case 279:
					return 8597;
				
				case 280:
					return 8604;
				
				case 281:
					return 8988;
				
				case 282:
					return 8995;
				
				case 283:
					return 9002;
				
				case 284:
					return 9009;
				
				case 285:
					return 9016;
				
				case 286:
					return 9023;
				
				case 287:
					return 9030;
				
				case 288:
					return 9037;
				
				case 289:
					return 9044;
				
				case 290:
					return 9051;
				
				case 291:
					return 9058;
				
				case 292:
					return 9064;
				
				case 293:
					return 9070;
				
				case 294:
					return 9076;
				
				case 295:
					return 9083;
				
				case 296:
					return 9090;
				
				case 297:
					return 9097;
				
				case 298:
					return 9104;
				
				case 299:
					return 9111;
				
				case 300:
					return 9118;
				
				case 301:
					return 9125;
				
				case 302:
					return 9132;
				
				case 303:
					return 9139;
				
				case 304:
					return 9146;
				
				case 305:
					return 9152;
				
				case 306:
					return 9158;
				
				case 307:
					return 9639;
				
				case 308:
					return 9646;
				
				case 309:
					return 9653;
				
				case 310:
					return 9660;
				
				case 311:
					return 9667;
				
				case 312:
					return 9674;
				
				case 313:
					return 9681;
				
				case 314:
					return 9688;
				
				case 315:
					return 9695;
				
				case 316:
					return 9702;
				
				default:
			}
			break;
		
		case 5:
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
				
				case 23:
					return 1864;
				
				case 24:
					return 1870;
				
				case 25:
					return 1876;
				
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
				
				case 36:
					return 2241;
				
				case 37:
					return 2247;
				
				case 38:
					return 2253;
				
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
				
				case 49:
					return 2904;
				
				case 50:
					return 2910;
				
				case 51:
					return 2916;
				
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
				
				case 62:
					return 3028;
				
				case 63:
					return 3034;
				
				case 64:
					return 3040;
				
				case 65:
					return 3241;
				
				case 66:
					return 3249;
				
				case 67:
					return 3257;
				
				case 68:
					return 3265;
				
				case 69:
					return 3273;
				
				case 70:
					return 3281;
				
				case 71:
					return 3289;
				
				case 72:
					return 3297;
				
				case 73:
					return 3305;
				
				case 74:
					return 3313;
				
				case 75:
					return 3321;
				
				case 76:
					return 3329;
				
				case 77:
					return 3337;
				
				case 78:
					return 3345;
				
				case joaat("mpsv_lp0_31"):
					return 3353;
				
				case 80:
					return 3361;
				
				case 81:
					return 3369;
				
				case 82:
					return 3377;
				
				case 83:
					return 3385;
				
				case 84:
					return 3393;
				
				case 85:
					return 3401;
				
				case 86:
					return 3408;
				
				case 87:
					return 3415;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4037;
				
				case 89:
					return 4045;
				
				case 90:
					return 4053;
				
				case 91:
					return 4061;
				
				case 92:
					return 4069;
				
				case 93:
					return 4077;
				
				case 94:
					return 4085;
				
				case 95:
					return 4093;
				
				case 96:
					return 4101;
				
				case 97:
					return 4109;
				
				case 98:
					return 4117;
				
				case 99:
					return 4125;
				
				case 100:
					return 4133;
				
				case 101:
					return 4141;
				
				case 102:
					return 4149;
				
				case 103:
					return 4157;
				
				case 104:
					return 4165;
				
				case 105:
					return 4173;
				
				case 106:
					return 4181;
				
				case 107:
					return 4189;
				
				case 108:
					return 4197;
				
				case 109:
					return 4205;
				
				case 110:
					return 4213;
				
				case 111:
					return 4221;
				
				case 112:
					return 4229;
				
				case 113:
					return 4237;
				
				case 114:
					return 4245;
				
				case 115:
					return 4253;
				
				case 116:
					return 4261;
				
				case 117:
					return 4269;
				
				case 118:
					return 4277;
				
				case 119:
					return 4285;
				
				case 120:
					return 4293;
				
				case 121:
					return 4301;
				
				case 122:
					return 4309;
				
				case 123:
					return 4317;
				
				case 124:
					return 4325;
				
				case 125:
					return 4333;
				
				case 126:
					return 4341;
				
				case 127:
					return 4349;
				
				case 128:
					return 4357;
				
				case 129:
					return 4365;
				
				case 130:
					return 4373;
				
				case 131:
					return 4381;
				
				case 132:
					return 4389;
				
				case 133:
					return 4397;
				
				case 134:
					return 4405;
				
				case 135:
					return 4413;
				
				case 136:
					return 4421;
				
				case 137:
					return 4429;
				
				case 138:
					return 4437;
				
				case 139:
					return 4445;
				
				case 140:
					return 4453;
				
				case 141:
					return 4461;
				
				case 142:
					return 4469;
				
				case 143:
					return 4477;
				
				case 144:
					return 4485;
				
				case 145:
					return 4493;
				
				case 146:
					return 4501;
				
				case 147:
					return 4509;
				
				case 148:
					return 4517;
				
				case 149:
					return 4525;
				
				case 150:
					return 4533;
				
				case 151:
					return 4541;
				
				case 152:
					return 4549;
				
				case 153:
					return 4557;
				
				case 154:
					return 4565;
				
				case 155:
					return 4573;
				
				case 156:
					return 4581;
				
				case 157:
					return 4589;
				
				case 158:
					return 5482;
				
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
				
				case 271:
					return 8542;
				
				case 272:
					return 8549;
				
				case 273:
					return 8556;
				
				case 274:
					return 8563;
				
				case 275:
					return 8570;
				
				case 276:
					return 8577;
				
				case 277:
					return 8584;
				
				case 278:
					return 8591;
				
				case 279:
					return 8598;
				
				case 280:
					return 8605;
				
				case 281:
					return 8989;
				
				case 282:
					return 8996;
				
				case 283:
					return 9003;
				
				case 284:
					return 9010;
				
				case 285:
					return 9017;
				
				case 286:
					return 9024;
				
				case 287:
					return 9031;
				
				case 288:
					return 9038;
				
				case 289:
					return 9045;
				
				case 290:
					return 9052;
				
				case 291:
					return 9059;
				
				case 292:
					return 9065;
				
				case 293:
					return 9071;
				
				case 294:
					return 9077;
				
				case 295:
					return 9084;
				
				case 296:
					return 9091;
				
				case 297:
					return 9098;
				
				case 298:
					return 9105;
				
				case 299:
					return 9112;
				
				case 300:
					return 9119;
				
				case 301:
					return 9126;
				
				case 302:
					return 9133;
				
				case 303:
					return 9140;
				
				case 304:
					return 9147;
				
				case 305:
					return 9153;
				
				case 306:
					return 9159;
				
				case 307:
					return 9640;
				
				case 308:
					return 9647;
				
				case 309:
					return 9654;
				
				case 310:
					return 9661;
				
				case 311:
					return 9668;
				
				case 312:
					return 9675;
				
				case 313:
					return 9682;
				
				case 314:
					return 9689;
				
				case 315:
					return 9696;
				
				case 316:
					return 9703;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1636;
				
				case 1:
					return 1643;
				
				case 2:
					return 1650;
				
				case 3:
					return 1657;
				
				case 4:
					return 1664;
				
				case 5:
					return 1671;
				
				case 6:
					return 1678;
				
				case 7:
					return 1685;
				
				case 8:
					return 1692;
				
				case 9:
					return 1699;
				
				case 13:
					return 1724;
				
				case 14:
					return 1803;
				
				case 15:
					return 1810;
				
				case 16:
					return 1817;
				
				case 17:
					return 1824;
				
				case 18:
					return 1831;
				
				case 19:
					return 1838;
				
				case 20:
					return 1845;
				
				case 21:
					return 1852;
				
				case 22:
					return 1859;
				
				case 26:
					return 2173;
				
				case 27:
					return 2180;
				
				case 28:
					return 2187;
				
				case 29:
					return 2194;
				
				case 30:
					return 2201;
				
				case 31:
					return 2208;
				
				case 32:
					return 2215;
				
				case 33:
					return 2222;
				
				case 34:
					return 2229;
				
				case 35:
					return 2236;
				
				case 39:
					return 2836;
				
				case 40:
					return 2843;
				
				case 41:
					return 2850;
				
				case 42:
					return 2857;
				
				case 43:
					return 2864;
				
				case 44:
					return 2871;
				
				case 45:
					return 2878;
				
				case 46:
					return 2885;
				
				case 47:
					return 2892;
				
				case 48:
					return 2899;
				
				case 52:
					return 2960;
				
				case 53:
					return 2967;
				
				case 54:
					return 2974;
				
				case 55:
					return 2981;
				
				case 56:
					return 2988;
				
				case 57:
					return 2995;
				
				case 58:
					return 3002;
				
				case 59:
					return 3009;
				
				case 60:
					return 3016;
				
				case 61:
					return 3023;
				
				case 65:
					return 3244;
				
				case 66:
					return 3252;
				
				case 67:
					return 3260;
				
				case 68:
					return 3268;
				
				case 69:
					return 3276;
				
				case 70:
					return 3284;
				
				case 71:
					return 3292;
				
				case 72:
					return 3300;
				
				case 73:
					return 3308;
				
				case 74:
					return 3316;
				
				case 75:
					return 3324;
				
				case 76:
					return 3332;
				
				case 77:
					return 3340;
				
				case 78:
					return 3348;
				
				case joaat("mpsv_lp0_31"):
					return 3356;
				
				case 80:
					return 3364;
				
				case 81:
					return 3372;
				
				case 82:
					return 3380;
				
				case 83:
					return 3388;
				
				case 84:
					return 3396;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4040;
				
				case 89:
					return 4048;
				
				case 90:
					return 4056;
				
				case 91:
					return 4064;
				
				case 92:
					return 4072;
				
				case 93:
					return 4080;
				
				case 94:
					return 4088;
				
				case 95:
					return 4096;
				
				case 96:
					return 4104;
				
				case 97:
					return 4112;
				
				case 98:
					return 4120;
				
				case 99:
					return 4128;
				
				case 100:
					return 4136;
				
				case 101:
					return 4144;
				
				case 102:
					return 4152;
				
				case 103:
					return 4160;
				
				case 104:
					return 4168;
				
				case 105:
					return 4176;
				
				case 106:
					return 4184;
				
				case 107:
					return 4192;
				
				case 108:
					return 4200;
				
				case 109:
					return 4208;
				
				case 110:
					return 4216;
				
				case 111:
					return 4224;
				
				case 112:
					return 4232;
				
				case 113:
					return 4240;
				
				case 114:
					return 4248;
				
				case 115:
					return 4256;
				
				case 116:
					return 4264;
				
				case 117:
					return 4272;
				
				case 118:
					return 4280;
				
				case 119:
					return 4288;
				
				case 120:
					return 4296;
				
				case 121:
					return 4304;
				
				case 122:
					return 4312;
				
				case 123:
					return 4320;
				
				case 124:
					return 4328;
				
				case 125:
					return 4336;
				
				case 126:
					return 4344;
				
				case 127:
					return 4352;
				
				case 128:
					return 4360;
				
				case 129:
					return 4368;
				
				case 130:
					return 4376;
				
				case 131:
					return 4384;
				
				case 132:
					return 4392;
				
				case 133:
					return 4400;
				
				case 134:
					return 4408;
				
				case 135:
					return 4416;
				
				case 136:
					return 4424;
				
				case 137:
					return 4432;
				
				case 138:
					return 4440;
				
				case 139:
					return 4448;
				
				case 140:
					return 4456;
				
				case 141:
					return 4464;
				
				case 142:
					return 4472;
				
				case 143:
					return 4480;
				
				case 144:
					return 4488;
				
				case 145:
					return 4496;
				
				case 146:
					return 4504;
				
				case 147:
					return 4512;
				
				case 148:
					return 4520;
				
				case 149:
					return 4528;
				
				case 150:
					return 4536;
				
				case 151:
					return 4544;
				
				case 152:
					return 4552;
				
				case 153:
					return 4560;
				
				case 154:
					return 4568;
				
				case 155:
					return 4576;
				
				case 156:
					return 4584;
				
				case 157:
					return 4592;
				
				case 158:
					return 5485;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5933;
				
				case 160:
					return 5940;
				
				case 161:
					return 5947;
				
				case 162:
					return 5954;
				
				case 163:
					return 5961;
				
				case 164:
					return 5968;
				
				case 165:
					return 5975;
				
				case 166:
					return 5982;
				
				case 167:
					return 5989;
				
				case 168:
					return 5996;
				
				case 169:
					return 6003;
				
				case 170:
					return 6010;
				
				case 171:
					return 6017;
				
				case 172:
					return 6024;
				
				case 173:
					return 6031;
				
				case 174:
					return 6038;
				
				case 175:
					return 6045;
				
				case 176:
					return 6052;
				
				case 177:
					return 6059;
				
				case 178:
					return 6066;
				
				case 179:
					return 6073;
				
				case 180:
					return 6080;
				
				case 181:
					return 6087;
				
				case 182:
					return 6094;
				
				case 183:
					return 6101;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6178;
				
				case 185:
					return 6185;
				
				case 186:
					return 6192;
				
				case 187:
					return 6199;
				
				case 188:
					return 6206;
				
				case 189:
					return 6213;
				
				case 190:
					return 6220;
				
				case 191:
					return 6227;
				
				case 192:
					return 6234;
				
				case 193:
					return 6241;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6575;
				
				case 195:
					return 6582;
				
				case 196:
					return 6589;
				
				case 197:
					return 6596;
				
				case 198:
					return 6603;
				
				case 199:
					return 6610;
				
				case 200:
					return 6617;
				
				case 201:
					return 6624;
				
				case 202:
					return 6631;
				
				case 203:
					return 6638;
				
				case 204:
					return 6645;
				
				case 205:
					return 6652;
				
				case 206:
					return 6659;
				
				case 207:
					return 6666;
				
				case 208:
					return 6673;
				
				case 209:
					return 6680;
				
				case 210:
					return 6687;
				
				case 211:
					return 6694;
				
				case 212:
					return 6701;
				
				case 213:
					return 6708;
				
				case 214:
					return 6715;
				
				case 215:
					return 6722;
				
				case 216:
					return 6729;
				
				case 217:
					return 6736;
				
				case 218:
					return 6743;
				
				case 219:
					return 6750;
				
				case 220:
					return 6757;
				
				case 221:
					return 6764;
				
				case 222:
					return 6771;
				
				case 223:
					return 6778;
				
				case 224:
					return 6785;
				
				case 225:
					return 6792;
				
				case 226:
					return 6799;
				
				case 227:
					return 6806;
				
				case 228:
					return 6813;
				
				case 229:
					return 6820;
				
				case 230:
					return 6827;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7297;
				
				case 232:
					return 7304;
				
				case 233:
					return 7311;
				
				case 234:
					return 7318;
				
				case 235:
					return 7325;
				
				case 236:
					return 7332;
				
				case 237:
					return 7339;
				
				case 238:
					return 7346;
				
				case 239:
					return 7353;
				
				case 240:
					return 7360;
				
				case 241:
					return 7367;
				
				case 242:
					return 7374;
				
				case 243:
					return 7381;
				
				case 244:
					return 7388;
				
				case 245:
					return 7395;
				
				case 246:
					return 7402;
				
				case 247:
					return 7409;
				
				case 248:
					return 7416;
				
				case 249:
					return 7423;
				
				case 250:
					return 7430;
				
				case 251:
					return 7437;
				
				case 252:
					return 7444;
				
				case 253:
					return 7451;
				
				case 254:
					return 7458;
				
				case 255:
					return 7465;
				
				case 256:
					return 7472;
				
				case 257:
					return 7479;
				
				case 258:
					return 7486;
				
				case 259:
					return 7493;
				
				case 260:
					return 7500;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8020;
				
				case 262:
					return 8027;
				
				case 263:
					return 8034;
				
				case 264:
					return 8041;
				
				case 265:
					return 8048;
				
				case 266:
					return 8055;
				
				case 267:
					return 8062;
				
				case 268:
					return 8069;
				
				case 269:
					return 8076;
				
				case 270:
					return 8083;
				
				case 271:
					return 8544;
				
				case 272:
					return 8551;
				
				case 273:
					return 8558;
				
				case 274:
					return 8565;
				
				case 275:
					return 8572;
				
				case 276:
					return 8579;
				
				case 277:
					return 8586;
				
				case 278:
					return 8593;
				
				case 279:
					return 8600;
				
				case 280:
					return 8607;
				
				case 281:
					return 8991;
				
				case 282:
					return 8998;
				
				case 283:
					return 9005;
				
				case 284:
					return 9012;
				
				case 285:
					return 9019;
				
				case 286:
					return 9026;
				
				case 287:
					return 9033;
				
				case 288:
					return 9040;
				
				case 289:
					return 9047;
				
				case 290:
					return 9054;
				
				case 294:
					return 9079;
				
				case 295:
					return 9086;
				
				case 296:
					return 9093;
				
				case 297:
					return 9100;
				
				case 298:
					return 9107;
				
				case 299:
					return 9114;
				
				case 300:
					return 9121;
				
				case 301:
					return 9128;
				
				case 302:
					return 9135;
				
				case 303:
					return 9142;
				
				case 307:
					return 9642;
				
				case 308:
					return 9649;
				
				case 309:
					return 9656;
				
				case 310:
					return 9663;
				
				case 311:
					return 9670;
				
				case 312:
					return 9677;
				
				case 313:
					return 9684;
				
				case 314:
					return 9691;
				
				case 315:
					return 9698;
				
				case 316:
					return 9705;
				
				default:
			}
			break;
		
		case 7:
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
				
				case 10:
					return 1705;
				
				case 11:
					return 1711;
				
				case 12:
					return 1717;
				
				case 13:
					return 1723;
				
				case 14:
					return 1802;
				
				case 15:
					return 1809;
				
				case 16:
					return 1816;
				
				case 17:
					return 1823;
				
				case 18:
					return 1830;
				
				case 19:
					return 1837;
				
				case 20:
					return 1844;
				
				case 21:
					return 1851;
				
				case 22:
					return 1858;
				
				case 23:
					return 1865;
				
				case 24:
					return 1871;
				
				case 25:
					return 1877;
				
				case 26:
					return 2172;
				
				case 27:
					return 2179;
				
				case 28:
					return 2186;
				
				case 29:
					return 2193;
				
				case 30:
					return 2200;
				
				case 31:
					return 2207;
				
				case 32:
					return 2214;
				
				case 33:
					return 2221;
				
				case 34:
					return 2228;
				
				case 35:
					return 2235;
				
				case 36:
					return 2242;
				
				case 37:
					return 2248;
				
				case 38:
					return 2254;
				
				case 39:
					return 2835;
				
				case 40:
					return 2842;
				
				case 41:
					return 2849;
				
				case 42:
					return 2856;
				
				case 43:
					return 2863;
				
				case 44:
					return 2870;
				
				case 45:
					return 2877;
				
				case 46:
					return 2884;
				
				case 47:
					return 2891;
				
				case 48:
					return 2898;
				
				case 49:
					return 2905;
				
				case 50:
					return 2911;
				
				case 51:
					return 2917;
				
				case 52:
					return 2959;
				
				case 53:
					return 2966;
				
				case 54:
					return 2973;
				
				case 55:
					return 2980;
				
				case 56:
					return 2987;
				
				case 57:
					return 2994;
				
				case 58:
					return 3001;
				
				case 59:
					return 3008;
				
				case 60:
					return 3015;
				
				case 61:
					return 3022;
				
				case 62:
					return 3029;
				
				case 63:
					return 3035;
				
				case 64:
					return 3041;
				
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
					return 3339;
				
				case 78:
					return 3347;
				
				case joaat("mpsv_lp0_31"):
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
				
				case 85:
					return 3402;
				
				case 86:
					return 3409;
				
				case 87:
					return 3416;
				
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
					return 4135;
				
				case 101:
					return 4143;
				
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
					return 4295;
				
				case 121:
					return 4303;
				
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
					return 4455;
				
				case 141:
					return 4463;
				
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
					return 5932;
				
				case 160:
					return 5939;
				
				case 161:
					return 5946;
				
				case 162:
					return 5953;
				
				case 163:
					return 5960;
				
				case 164:
					return 5967;
				
				case 165:
					return 5974;
				
				case 166:
					return 5981;
				
				case 167:
					return 5988;
				
				case 168:
					return 5995;
				
				case 169:
					return 6002;
				
				case 170:
					return 6009;
				
				case 171:
					return 6016;
				
				case 172:
					return 6023;
				
				case 173:
					return 6030;
				
				case 174:
					return 6037;
				
				case 175:
					return 6044;
				
				case 176:
					return 6051;
				
				case 177:
					return 6058;
				
				case 178:
					return 6065;
				
				case 179:
					return 6072;
				
				case 180:
					return 6079;
				
				case 181:
					return 6086;
				
				case 182:
					return 6093;
				
				case 183:
					return 6100;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6177;
				
				case 185:
					return 6184;
				
				case 186:
					return 6191;
				
				case 187:
					return 6198;
				
				case 188:
					return 6205;
				
				case 189:
					return 6212;
				
				case 190:
					return 6219;
				
				case 191:
					return 6226;
				
				case 192:
					return 6233;
				
				case 193:
					return 6240;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6574;
				
				case 195:
					return 6581;
				
				case 196:
					return 6588;
				
				case 197:
					return 6595;
				
				case 198:
					return 6602;
				
				case 199:
					return 6609;
				
				case 200:
					return 6616;
				
				case 201:
					return 6623;
				
				case 202:
					return 6630;
				
				case 203:
					return 6637;
				
				case 204:
					return 6644;
				
				case 205:
					return 6651;
				
				case 206:
					return 6658;
				
				case 207:
					return 6665;
				
				case 208:
					return 6672;
				
				case 209:
					return 6679;
				
				case 210:
					return 6686;
				
				case 211:
					return 6693;
				
				case 212:
					return 6700;
				
				case 213:
					return 6707;
				
				case 214:
					return 6714;
				
				case 215:
					return 6721;
				
				case 216:
					return 6728;
				
				case 217:
					return 6735;
				
				case 218:
					return 6742;
				
				case 219:
					return 6749;
				
				case 220:
					return 6756;
				
				case 221:
					return 6763;
				
				case 222:
					return 6770;
				
				case 223:
					return 6777;
				
				case 224:
					return 6784;
				
				case 225:
					return 6791;
				
				case 226:
					return 6798;
				
				case 227:
					return 6805;
				
				case 228:
					return 6812;
				
				case 229:
					return 6819;
				
				case 230:
					return 6826;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7296;
				
				case 232:
					return 7303;
				
				case 233:
					return 7310;
				
				case 234:
					return 7317;
				
				case 235:
					return 7324;
				
				case 236:
					return 7331;
				
				case 237:
					return 7338;
				
				case 238:
					return 7345;
				
				case 239:
					return 7352;
				
				case 240:
					return 7359;
				
				case 241:
					return 7366;
				
				case 242:
					return 7373;
				
				case 243:
					return 7380;
				
				case 244:
					return 7387;
				
				case 245:
					return 7394;
				
				case 246:
					return 7401;
				
				case 247:
					return 7408;
				
				case 248:
					return 7415;
				
				case 249:
					return 7422;
				
				case 250:
					return 7429;
				
				case 251:
					return 7436;
				
				case 252:
					return 7443;
				
				case 253:
					return 7450;
				
				case 254:
					return 7457;
				
				case 255:
					return 7464;
				
				case 256:
					return 7471;
				
				case 257:
					return 7478;
				
				case 258:
					return 7485;
				
				case 259:
					return 7492;
				
				case 260:
					return 7499;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8019;
				
				case 262:
					return 8026;
				
				case 263:
					return 8033;
				
				case 264:
					return 8040;
				
				case 265:
					return 8047;
				
				case 266:
					return 8054;
				
				case 267:
					return 8061;
				
				case 268:
					return 8068;
				
				case 269:
					return 8075;
				
				case 270:
					return 8082;
				
				case 271:
					return 8543;
				
				case 272:
					return 8550;
				
				case 273:
					return 8557;
				
				case 274:
					return 8564;
				
				case 275:
					return 8571;
				
				case 276:
					return 8578;
				
				case 277:
					return 8585;
				
				case 278:
					return 8592;
				
				case 279:
					return 8599;
				
				case 280:
					return 8606;
				
				case 281:
					return 8990;
				
				case 282:
					return 8997;
				
				case 283:
					return 9004;
				
				case 284:
					return 9011;
				
				case 285:
					return 9018;
				
				case 286:
					return 9025;
				
				case 287:
					return 9032;
				
				case 288:
					return 9039;
				
				case 289:
					return 9046;
				
				case 290:
					return 9053;
				
				case 291:
					return 9060;
				
				case 292:
					return 9066;
				
				case 293:
					return 9072;
				
				case 294:
					return 9078;
				
				case 295:
					return 9085;
				
				case 296:
					return 9092;
				
				case 297:
					return 9099;
				
				case 298:
					return 9106;
				
				case 299:
					return 9113;
				
				case 300:
					return 9120;
				
				case 301:
					return 9127;
				
				case 302:
					return 9134;
				
				case 303:
					return 9141;
				
				case 304:
					return 9148;
				
				case 305:
					return 9154;
				
				case 306:
					return 9160;
				
				case 307:
					return 9641;
				
				case 308:
					return 9648;
				
				case 309:
					return 9655;
				
				case 310:
					return 9662;
				
				case 311:
					return 9669;
				
				case 312:
					return 9676;
				
				case 313:
					return 9683;
				
				case 314:
					return 9690;
				
				case 315:
					return 9697;
				
				case 316:
					return 9704;
				
				default:
			}
			break;
	}
	return 1630;
}

int func_1069(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 317)
	{
		iVar0 = 0;
		while (iVar0 < 26)
		{
			if (iParam0 >= func_874(iVar0) && iParam0 < func_1070(iVar0))
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_1070(int iParam0)
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
		
		case 22:
			return 278;
			break;
		
		case 23:
			return 294;
			break;
		
		case 24:
			return 307;
			break;
		
		case 25:
			return 317;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_817(iParam0);
		return func_1071(iVar0);
	}
	return (func_875(iParam0, -1, 1) * iParam0 + 1);
}

int func_1071(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 157;
		
		case 2:
			return 224;
		
		case 1:
			return 227;
		
		case 3:
			return 279;
		
		default:
	}
	return -1;
}

int func_1072(int iParam0)
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

int func_1073(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = iParam0 + 157;
		func_873(iVar1, &iVar0, 1);
		if (iVar0 >= 0)
		{
			iVar2 = func_526(func_1068(4, iVar0), -1, 0);
			if (iVar2 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1074(int iParam0)
{
	switch (iParam0)
	{
		case joaat("trailersmall2"):
			return 0;
			break;
	}
	return -1;
}

int func_1075(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (Global_1590908[iParam0 /*874*/].f_267.f_341 != 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1076()
{
	return func_526(6544, -1, 0) != 0;
}

bool func_1077()
{
	return func_526(6165, -1, 0) != 0;
}

bool func_1078()
{
	return func_526(5382, -1, 0) != 0;
}

bool func_1079()
{
	return func_526(3830, -1, 0) != 0;
}

bool func_1080()
{
	return func_526(3225, -1, 0) != 0;
}

bool func_1081()
{
	return func_526(5381, -1, 0) != 0;
}

int func_1082()
{
	int iVar0;
	
	iVar0 = func_673();
	if (iVar0 != func_57())
	{
		return Global_1630816[iVar0 /*597*/].f_11.f_99;
	}
	return 0;
}

var func_1083(bool bParam0)
{
	var uVar0;
	int iVar1;
	
	iVar1 = unk_0x1146A9AE09CE2B14();
	if (bParam0)
	{
		if (func_1097(4, 0))
		{
			unk_0x191DDA30577F440A(&uVar0, 0);
		}
		if (func_1097(5, 0))
		{
			unk_0x191DDA30577F440A(&uVar0, 1);
		}
		if (func_1097(6, 1))
		{
			unk_0x191DDA30577F440A(&uVar0, 2);
		}
		if (func_1097(1, 0))
		{
			unk_0x191DDA30577F440A(&uVar0, 3);
		}
		if (func_1097(2, 0))
		{
			unk_0x191DDA30577F440A(&uVar0, 4);
		}
		if (func_1097(3, 0))
		{
			unk_0x191DDA30577F440A(&uVar0, 5);
		}
		if ((((func_1096(61) || func_1096(62)) || func_1096(63)) || func_1096(64)) || func_1096(65))
		{
			unk_0x191DDA30577F440A(&uVar0, 6);
		}
		if (func_796(iVar1))
		{
			unk_0x191DDA30577F440A(&uVar0, 7);
		}
		if (func_1095(iVar1, 0))
		{
			unk_0x191DDA30577F440A(&uVar0, 8);
		}
		if (func_1095(iVar1, 1))
		{
			unk_0x191DDA30577F440A(&uVar0, 9);
		}
		if (func_1095(iVar1, 2))
		{
			unk_0x191DDA30577F440A(&uVar0, 10);
		}
		if (func_651(iVar1))
		{
			unk_0x191DDA30577F440A(&uVar0, 11);
		}
		if (func_1091(iVar1, 3))
		{
			unk_0x191DDA30577F440A(&uVar0, 12);
		}
		if (func_1091(iVar1, 4))
		{
			unk_0x191DDA30577F440A(&uVar0, 13);
		}
		if (func_1091(iVar1, 2))
		{
			unk_0x191DDA30577F440A(&uVar0, 14);
		}
		if (func_1091(iVar1, 6))
		{
			unk_0x191DDA30577F440A(&uVar0, 15);
		}
		if (func_1091(iVar1, 5))
		{
			unk_0x191DDA30577F440A(&uVar0, 16);
		}
		if (func_1089(iVar1))
		{
			unk_0x191DDA30577F440A(&uVar0, 17);
		}
		if (func_1091(iVar1, 1))
		{
			unk_0x191DDA30577F440A(&uVar0, 18);
		}
		if (func_1100(iVar1))
		{
			unk_0x191DDA30577F440A(&uVar0, 19);
		}
		if (func_857(iVar1))
		{
			unk_0x191DDA30577F440A(&uVar0, 20);
		}
		if (func_1075(iVar1))
		{
			unk_0x191DDA30577F440A(&uVar0, 21);
		}
		if (func_909(iVar1))
		{
			unk_0x191DDA30577F440A(&uVar0, 22);
		}
		if (func_818(iVar1))
		{
			unk_0x191DDA30577F440A(&uVar0, 23);
		}
		if (func_1088(iVar1))
		{
			unk_0x191DDA30577F440A(&uVar0, 24);
		}
		if (func_1087(iVar1))
		{
			unk_0x191DDA30577F440A(&uVar0, 25);
		}
		if (func_891(iVar1))
		{
			unk_0x191DDA30577F440A(&uVar0, 26);
		}
		if (func_1086(iVar1))
		{
			unk_0x191DDA30577F440A(&uVar0, 27);
		}
		if (func_850(iVar1))
		{
			unk_0x191DDA30577F440A(&uVar0, 28);
		}
		if (func_1085(iVar1))
		{
			unk_0x191DDA30577F440A(&uVar0, 29);
		}
		if (func_1084(iVar1))
		{
			unk_0x191DDA30577F440A(&uVar0, 30);
		}
	}
	return uVar0;
}

bool func_1084(int iParam0)
{
	return Global_1590908[iParam0 /*874*/].f_267.f_452 != 0;
}

bool func_1085(int iParam0)
{
	if (iParam0 == func_57())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_445, 0);
}

int func_1086(int iParam0)
{
	if (iParam0 != func_57())
	{
		return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_272, 1);
	}
	return 0;
}

bool func_1087(int iParam0)
{
	return Global_2426865[iParam0 /*449*/].f_270;
}

int func_1088(int iParam0)
{
	if (iParam0 != func_57())
	{
		return Global_1590908[iParam0 /*874*/].f_267.f_395 != 0;
	}
	return 0;
}

bool func_1089(int iParam0)
{
	return func_1090(iParam0) != 0;
}

int func_1090(int iParam0)
{
	if (iParam0 == func_57())
	{
		return 0;
	}
	return Global_1590908[iParam0 /*874*/].f_267.f_136;
}

int func_1091(int iParam0, int iParam1)
{
	if (iParam0 == func_57())
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			return func_1094(iParam0);
		
		case 2:
			return func_1093(iParam0, 4);
		
		case 3:
			return func_1093(iParam0, 3);
		
		case 4:
			return func_1093(iParam0, 1);
		
		case 5:
			return func_1093(iParam0, 0);
		
		case 6:
			return func_1093(iParam0, 2);
		
		case 0:
			if (func_1100(iParam0) || func_1092(iParam0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_1092(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (Global_1590908[iParam0 /*874*/].f_267.f_108[iVar0 /*3*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1093(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE45310E861787FC2())
	{
		return 1;
	}
	if (iParam0 == func_57())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/] != 0)
		{
			iVar1 = Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/];
			if (func_668(iVar1) == iParam1)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_1094(int iParam0)
{
	return func_662(iParam0) != 0;
}

int func_1095(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_57())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1590908[iParam0 /*874*/].f_267.f_108[iVar0 /*3*/] != 0)
		{
			if (func_542(Global_1590908[iParam0 /*874*/].f_267.f_108[iVar0 /*3*/]) == iParam1)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_1096(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 26)
	{
		if (Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1097(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 < 1 || iParam0 > 10)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 127)
	{
		if (func_1099(iVar0) == iParam0 && (!func_1098(iVar0) || !bParam1))
		{
			if (func_1096(iVar0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_1098(int iParam0)
{
	switch (iParam0)
	{
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			return 1;
		
		default:
	}
	return 0;
}

int func_1099(int iParam0)
{
	switch (iParam0)
	{
		case 86:
			return 8;
			break;
		
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
			return 10;
			break;
		
		case 87:
		case 88:
		case 89:
		case 90:
			return 9;
			break;
		
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
			return 7;
			break;
		
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
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
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
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
		case 84:
		case 85:
			return 6;
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			return 5;
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			return 4;
			break;
		
		case 24:
		case 26:
		case 27:
		case 54:
		case 56:
		case 57:
			return 3;
			break;
		
		case 25:
		case 28:
		case 32:
		case 33:
		case 50:
		case 52:
		case 53:
		case 55:
			return 2;
			break;
		
		case 29:
		case 30:
		case 31:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 51:
		case 58:
		case 59:
		case 60:
			return 1;
			break;
	}
	return 0;
}

int func_1100(int iParam0)
{
	if (iParam0 != func_57())
	{
		return Global_1590908[iParam0 /*874*/].f_267.f_266 != 0;
	}
	return 0;
}

int func_1101(int iParam0)
{
	if (func_248(iParam0) == 225 || func_248(iParam0) == 226)
	{
		return func_644(iParam0);
	}
	return -1;
}

var func_1102()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_774(unk_0x1146A9AE09CE2B14(), iVar0))
		{
			unk_0x191DDA30577F440A(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

void func_1103()
{
	if (!func_217())
	{
		return;
	}
	if (!unk_0x15173FB88ABC94F9(unk_0x471C98FD94C0A5FD()) == Global_1312603.f_9)
	{
		return;
	}
	func_945();
}

void func_1104()
{
	if (func_34(unk_0x1146A9AE09CE2B14(), 0))
	{
		return;
	}
	switch (Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_9)
	{
		case 0:
			func_1157();
			func_458();
			if (Local_124.f_214 == 2)
			{
				Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_9 = 2;
			}
			else if (Local_124.f_214 == 3)
			{
				Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_9 = 3;
			}
			break;
		
		case 2:
			func_1105();
			func_458();
			if (Local_124.f_214 == 3)
			{
				Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_9 = 3;
			}
			break;
		
		case 3:
			func_1234();
			break;
	}
}

void func_1105()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	
	iVar0 = unk_0xDD0E57E73E5C4BF6();
	iVar1 = Local_124.f_197 + 1;
	if (func_34(unk_0x1146A9AE09CE2B14(), 0))
	{
		iVar0 = func_439();
	}
	if (!func_440())
	{
		if (!unk_0x234B68AC2E35ED5A(Local_125[iVar0 /*11*/].f_1, 14))
		{
			unk_0x191DDA30577F440A(&(Local_125[iVar0 /*11*/].f_1), 14);
		}
		return;
	}
	if (!func_1155())
	{
		if (!unk_0x234B68AC2E35ED5A(Local_125[iVar0 /*11*/].f_1, 14))
		{
			unk_0x191DDA30577F440A(&(Local_125[iVar0 /*11*/].f_1), 14);
		}
		return;
	}
	if (unk_0x159BC3DDA80D71AC(Local_124.f_2[0 /*10*/].f_2))
	{
		if (func_13(Local_124.f_2[0 /*10*/].f_2))
		{
			if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), unk_0x854C404AEB476240(Local_124.f_2[0 /*10*/].f_2), 0))
			{
				return;
			}
		}
	}
	if (!unk_0x234B68AC2E35ED5A(Local_125[iVar0 /*11*/].f_1, 14))
	{
		if (!func_1120(iVar1, unk_0xDD0E57E73E5C4BF6()))
		{
			if (!unk_0x234B68AC2E35ED5A(iLocal_126, 13))
			{
				if (func_1118(unk_0x1146A9AE09CE2B14(), iVar1))
				{
					unk_0x191DDA30577F440A(&iLocal_126, 13);
				}
			}
			else
			{
				bVar4 = true;
				iVar2 = 0;
				while (iVar2 < unk_0x5E72DF7B8C03AA05())
				{
					if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar2)))
					{
						iVar3 = unk_0x539ED6DF32477DE0(unk_0x6750311806FF130A(iVar2));
						if (func_1118(iVar3, iVar1))
						{
							if (!func_1113(iVar3, iVar1))
							{
								bVar4 = false;
							}
						}
					}
					iVar2++;
				}
				if (bVar4)
				{
					func_1106();
				}
			}
		}
		else
		{
			unk_0x191DDA30577F440A(&(Local_125[iVar0 /*11*/].f_1), 14);
		}
	}
}

void func_1106()
{
	func_1107();
}

void func_1107()
{
	int iVar0;
	
	if (func_1112(unk_0x1146A9AE09CE2B14()))
	{
		iVar0 = func_1111(unk_0x1146A9AE09CE2B14());
		if (!func_1110(3, iVar0))
		{
			func_1108(3, iVar0);
		}
	}
}

void func_1108(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	func_1109(iParam1, &iVar0, &iVar1);
	switch (iParam0)
	{
		case 0:
			unk_0x191DDA30577F440A(&(Global_1683970.f_2524[iVar0]), iVar1);
			return;
			break;
		
		case 1:
			unk_0x191DDA30577F440A(&(Global_1683970.f_2530[iVar0]), iVar1);
			return;
			break;
		
		case 2:
			unk_0x191DDA30577F440A(&(Global_1683970.f_2536[iVar0]), iVar1);
			return;
			break;
		
		case 3:
			unk_0x191DDA30577F440A(&(Global_1683970.f_3160[iVar0]), iVar1);
			return;
			break;
		
		case 4:
			unk_0x191DDA30577F440A(&(Global_1683970.f_3166[iVar0]), iVar1);
			return;
			break;
		
		case 5:
			unk_0x191DDA30577F440A(&(Global_1683970.f_3440[iVar0]), iVar1);
			return;
			break;
		
		case 6:
			unk_0x191DDA30577F440A(&(Global_1683970.f_3446[iVar0]), iVar1);
			return;
			break;
		
		case 7:
			unk_0x191DDA30577F440A(&(Global_1683970.f_3452[iVar0]), iVar1);
			return;
			break;
		
		case 8:
			unk_0x191DDA30577F440A(&(Global_1683970.f_3472[iVar0]), iVar1);
			return;
			break;
		
		case 9:
			unk_0x191DDA30577F440A(&(Global_1683970.f_3478[iVar0]), iVar1);
			return;
			break;
		
		case 10:
			unk_0x191DDA30577F440A(&(Global_1683970.f_3172[iVar0]), iVar1);
			return;
			break;
		
		case 11:
			unk_0x191DDA30577F440A(&(Global_1683970.f_3458[iVar0]), iVar1);
			return;
			break;
		
		case 12:
			unk_0x191DDA30577F440A(&(Global_1683970.f_3464[iVar0]), iVar1);
			return;
			break;
		
		case 13:
			unk_0x191DDA30577F440A(&(Global_1683970.f_3181[iVar0]), iVar1);
			return;
			break;
	}
}

void func_1109(int iParam0, var uParam1, var uParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	*uParam1 = floor((to_float(iParam0) / 32f));
	*uParam2 = (iParam0 - *uParam1 * 32);
}

int func_1110(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	func_1109(iParam1, &iVar0, &iVar1);
	switch (iParam0)
	{
		case 0:
			return unk_0x234B68AC2E35ED5A(Global_1683970.f_2524[iVar0], iVar1);
			break;
		
		case 1:
			return unk_0x234B68AC2E35ED5A(Global_1683970.f_2530[iVar0], iVar1);
			break;
		
		case 2:
			return unk_0x234B68AC2E35ED5A(Global_1683970.f_2536[iVar0], iVar1);
			break;
		
		case 3:
			return unk_0x234B68AC2E35ED5A(Global_1683970.f_3160[iVar0], iVar1);
			break;
		
		case 4:
			return unk_0x234B68AC2E35ED5A(Global_1683970.f_3166[iVar0], iVar1);
			break;
		
		case 5:
			return unk_0x234B68AC2E35ED5A(Global_1683970.f_3440[iVar0], iVar1);
			break;
		
		case 6:
			return unk_0x234B68AC2E35ED5A(Global_1683970.f_3446[iVar0], iVar1);
			break;
		
		case 7:
			return unk_0x234B68AC2E35ED5A(Global_1683970.f_3452[iVar0], iVar1);
			break;
		
		case 8:
			return unk_0x234B68AC2E35ED5A(Global_1683970.f_3472[iVar0], iVar1);
			break;
		
		case 9:
			return unk_0x234B68AC2E35ED5A(Global_1683970.f_3478[iVar0], iVar1);
			break;
		
		case 10:
			return unk_0x234B68AC2E35ED5A(Global_1683970.f_3172[iVar0], iVar1);
			break;
		
		case 11:
			return unk_0x234B68AC2E35ED5A(Global_1683970.f_3458[iVar0], iVar1);
			break;
		
		case 12:
			return unk_0x234B68AC2E35ED5A(Global_1683970.f_3464[iVar0], iVar1);
			break;
		
		case 13:
			return unk_0x234B68AC2E35ED5A(Global_1683970.f_3181[iVar0], iVar1);
			break;
	}
	return 0;
}

int func_1111(int iParam0)
{
	if (iParam0 != func_57())
	{
		return Global_2426865[iParam0 /*449*/].f_319.f_15;
	}
	return -1;
}

int func_1112(int iParam0)
{
	bool bVar0;
	
	if (iParam0 != func_57() && (func_1340(iParam0, 1, 1) || Global_2405077.f_2678))
	{
		bVar0 = unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_319, 1);
		return bVar0;
	}
	return 0;
}

bool func_1113(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_1116(iParam1);
	return func_1114(iParam0, iVar0);
}

int func_1114(int iParam0, int iParam1)
{
	if (iParam0 != func_57() && func_1340(iParam0, 1, 1))
	{
		if (func_1112(iParam0))
		{
			if (func_1111(iParam0) == iParam1)
			{
				if (func_1115(iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_1115(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_319, 2);
}

int func_1116(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 154)
	{
		if (func_1117(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1117(int iParam0)
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
			return 3;
			break;
		
		case 3:
			return 4;
			break;
		
		case 4:
			return 5;
			break;
		
		case 5:
			return 6;
			break;
		
		case 6:
			return 7;
			break;
		
		case 7:
			return 8;
			break;
		
		case 8:
			return 9;
			break;
		
		case 9:
			return 10;
			break;
		
		case 10:
			return 11;
			break;
		
		case 11:
			return 12;
			break;
		
		case 12:
			return 13;
			break;
		
		case 13:
			return 14;
			break;
		
		case 14:
			return 15;
			break;
		
		case 15:
			return 16;
			break;
		
		case 16:
			return 17;
			break;
		
		case 17:
			return 18;
			break;
		
		case 18:
			return 19;
			break;
		
		case 19:
			return 20;
			break;
		
		case 20:
			return 21;
			break;
		
		case 21:
			return 22;
			break;
	}
	return 0;
}

bool func_1118(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_1116(iParam1);
	return func_1119(iParam0, iVar0);
}

int func_1119(int iParam0, int iParam1)
{
	if (iParam0 != func_57() && func_1340(iParam0, 1, 1))
	{
		if (func_1112(iParam0))
		{
			if (func_1111(iParam0) == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1120(int iParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	var uVar2;
	
	iVar0 = func_1116(iParam0);
	if (func_1110(4, iVar0))
	{
		return 1;
	}
	else if (!func_1154(iVar0))
	{
		if (func_1153(iParam0, iParam1, &Var1, &uVar2))
		{
			func_1121(iVar0, 1, 1, Var1, uVar2, 0, 0, 0);
		}
		else
		{
			func_1121(iVar0, 1, 0, Var1, 0, 0, 0, 0);
		}
	}
	return 0;
}

int func_1121(int iParam0, bool bParam1, bool bParam2, struct<3> Param3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!func_1152(iParam0))
	{
		return 0;
	}
	bParam5 = true;
	if (func_1112(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if (!bParam5)
	{
		if (!(func_1151(iParam0) || func_1126(iParam0, 0, 1)))
		{
			func_1125(iParam0);
			return 0;
		}
	}
	else
	{
		func_1108(2, iParam0);
	}
	if (func_1110(0, iParam0))
	{
		return 0;
	}
	func_1108(0, iParam0);
	func_1124(4, iParam0);
	func_1123(iParam0);
	if (bParam2)
	{
		func_1108(1, iParam0);
		Global_1683970.f_2542[iParam0 /*3*/] = { Param3 };
		Global_1683970.f_3005[iParam0] = iParam4;
	}
	else
	{
		func_1124(1, iParam0);
		Global_1683970.f_2542[iParam0 /*3*/] = { 0f, 0f, 0f };
		Global_1683970.f_3005[iParam0] = 0f;
	}
	if (bParam1)
	{
		func_1124(3, iParam0);
	}
	else
	{
		func_1108(3, iParam0);
	}
	func_1124(10, iParam0);
	if (bParam6)
	{
		func_1108(10, iParam0);
	}
	func_1124(13, iParam0);
	if (bParam7)
	{
		func_1108(13, iParam0);
	}
	func_1122(1, iParam0);
	return 1;
}

void func_1122(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		if (!unk_0x234B68AC2E35ED5A(Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_319, 1))
		{
			unk_0x191DDA30577F440A(&(Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_319), 1);
			unk_0xC664C0067EEAB8D1(&(Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_319), 2);
			Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_319.f_15 = iParam1;
			func_652(&(Global_1683970.f_3188), 0, 0);
		}
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&(Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_319), 1);
		func_1108(4, iParam1);
		Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_319.f_15 = -1;
		func_9(&(Global_1683970.f_3188));
	}
}

void func_1123(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0xDA8C680C9B8BFAAF(unk_0x7D2B9E6A64637269());
	if (iVar0 != 0)
	{
		if (!unk_0xE50EB54E0F21BED0(iVar0, 0) && !unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
		{
			if (unk_0x27FC1B0077581B37(iVar0, -1, 0) == unk_0x7D2B9E6A64637269())
			{
				Global_1683970.f_3257 = iParam0;
				Global_1683970.f_3258 = iVar0;
				func_652(&(Global_1683970.f_3259), 0, 0);
				Global_1683970.f_3261 = 0;
			}
		}
	}
}

void func_1124(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	func_1109(iParam1, &iVar0, &iVar1);
	switch (iParam0)
	{
		case 0:
			unk_0xC664C0067EEAB8D1(&(Global_1683970.f_2524[iVar0]), iVar1);
			return;
			break;
		
		case 1:
			unk_0xC664C0067EEAB8D1(&(Global_1683970.f_2530[iVar0]), iVar1);
			return;
			break;
		
		case 2:
			unk_0xC664C0067EEAB8D1(&(Global_1683970.f_2536[iVar0]), iVar1);
			return;
			break;
		
		case 3:
			unk_0xC664C0067EEAB8D1(&(Global_1683970.f_3160[iVar0]), iVar1);
			return;
			break;
		
		case 4:
			unk_0xC664C0067EEAB8D1(&(Global_1683970.f_3166[iVar0]), iVar1);
			return;
			break;
		
		case 5:
			unk_0xC664C0067EEAB8D1(&(Global_1683970.f_3440[iVar0]), iVar1);
			return;
			break;
		
		case 6:
			unk_0xC664C0067EEAB8D1(&(Global_1683970.f_3446[iVar0]), iVar1);
			return;
			break;
		
		case 7:
			unk_0xC664C0067EEAB8D1(&(Global_1683970.f_3452[iVar0]), iVar1);
			return;
			break;
		
		case 8:
			unk_0xC664C0067EEAB8D1(&(Global_1683970.f_3472[iVar0]), iVar1);
			return;
			break;
		
		case 9:
			unk_0xC664C0067EEAB8D1(&(Global_1683970.f_3478[iVar0]), iVar1);
			return;
			break;
		
		case 10:
			unk_0xC664C0067EEAB8D1(&(Global_1683970.f_3172[iVar0]), iVar1);
			return;
			break;
		
		case 11:
			unk_0xC664C0067EEAB8D1(&(Global_1683970.f_3458[iVar0]), iVar1);
			return;
			break;
		
		case 12:
			unk_0xC664C0067EEAB8D1(&(Global_1683970.f_3464[iVar0]), iVar1);
			return;
			break;
		
		case 13:
			unk_0xC664C0067EEAB8D1(&(Global_1683970.f_3181[iVar0]), iVar1);
			return;
			break;
	}
}

void func_1125(int iParam0)
{
	if (!func_1152(iParam0))
	{
		return;
	}
	func_1124(0, iParam0);
	func_1124(1, iParam0);
	func_1124(2, iParam0);
	func_1124(3, iParam0);
	func_1124(4, iParam0);
	func_1124(10, iParam0);
	Global_1683970.f_2542[iParam0 /*3*/] = { 0f, 0f, 0f };
	Global_1683970.f_3005[iParam0] = 0f;
	if (Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_319.f_15 == iParam0)
	{
		Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_319.f_15 = -1;
		unk_0xC664C0067EEAB8D1(&(Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_319), 2);
		unk_0xC664C0067EEAB8D1(&(Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_319), 1);
	}
	if (unk_0x234B68AC2E35ED5A(Global_1683970.f_1, 22))
	{
		unk_0xC664C0067EEAB8D1(&(Global_1683970.f_1), 22);
	}
	unk_0xC664C0067EEAB8D1(&(Global_1683970.f_6), 9);
}

int func_1126(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if ((func_1340(unk_0x1146A9AE09CE2B14(), 1, 1) || Global_2405077.f_2678) && (!func_1150() || func_1144()))
	{
		if (func_1142(iParam0))
		{
			return 0;
		}
		if (Global_1683970.f_3507 == iParam0)
		{
			return 0;
		}
		if (func_152(iParam0) == 5)
		{
			if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
			{
				if (func_1141())
				{
					if (unk_0x234B68AC2E35ED5A(Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_319, 5))
					{
						return 1;
					}
				}
			}
			if (func_580(unk_0x1146A9AE09CE2B14()))
			{
				if (func_1144())
				{
					return 1;
				}
			}
		}
		if (func_152(iParam0) == 4)
		{
			if (func_150(unk_0x1146A9AE09CE2B14()) || (func_1140() && unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0)))
			{
				if (func_1144())
				{
					if (func_1137(Global_1590745) == iParam0)
					{
						return 1;
					}
				}
			}
		}
		if (func_152(iParam0) == 8)
		{
			if (func_576(unk_0x1146A9AE09CE2B14()))
			{
				if (func_1144())
				{
					return 1;
				}
			}
			if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
			{
				if (func_1141())
				{
					iVar0 = unk_0x27FC1B0077581B37(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0), -1, 0);
					if (unk_0x419E13582192CFEA(iVar0))
					{
						if (func_1340(unk_0xCB567ED25393C1DF(iVar0), 1, 1))
						{
							if (unk_0x234B68AC2E35ED5A(Global_2426865[unk_0xCB567ED25393C1DF(iVar0) /*449*/].f_319, 5) && func_1136(unk_0xCB567ED25393C1DF(iVar0)))
							{
								return 1;
							}
						}
					}
				}
			}
		}
		if (func_152(iParam0) == 9)
		{
			if (func_151(unk_0x1146A9AE09CE2B14()) || (func_1135() && unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0)))
			{
				if (func_1144())
				{
					if (func_1133(func_1134(Global_1590750)) == iParam0)
					{
						return 1;
					}
				}
			}
		}
		if (iParam0 == 122 && Global_2453903.f_6528)
		{
			return 0;
		}
		if (iParam2 && func_1128(iParam0))
		{
			return 1;
		}
		else if (iParam1 && func_1127(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_1127(int iParam0)
{
	if (func_1154(iParam0))
	{
		return func_1110(2, iParam0);
	}
	return 0;
}

int func_1128(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 210;
	if (func_1129(iParam0))
	{
		iVar0 = 150;
	}
	Var1 = { Global_1683970.f_979[iParam0 /*3*/] };
	if (!func_39(Var1))
	{
		return unk_0x0BABEFEA577FCFA4(func_52(unk_0x1146A9AE09CE2B14()), Var1, 1) <= IntToFloat(iVar0);
	}
	return 0;
}

int func_1129(int iParam0)
{
	if (func_1340(unk_0x1146A9AE09CE2B14(), 1, 1))
	{
		switch (iParam0)
		{
			case 81:
				if (func_1132(unk_0x1146A9AE09CE2B14()))
				{
					if (!func_1131(unk_0x1146A9AE09CE2B14()))
					{
						return 1;
					}
				}
				break;
			
			case 117:
				if (func_1130(unk_0x1146A9AE09CE2B14()))
				{
					if (!func_1131(unk_0x1146A9AE09CE2B14()))
					{
						return 1;
					}
				}
				break;
			}
	}
	return 0;
}

int func_1130(int iParam0)
{
	if (iParam0 != func_57())
	{
		return unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_319.f_3, 4);
	}
	return 0;
}

int func_1131(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (func_1340(iParam0, 1, 1))
		{
			return Global_2426865[iParam0 /*449*/].f_319.f_6 != -1;
		}
		else if ((Global_1312902 && iParam0 == unk_0x1146A9AE09CE2B14()) && func_1340(iParam0, 1, 0))
		{
			return Global_2426865[iParam0 /*449*/].f_319.f_6 != -1;
		}
	}
	return 0;
}

int func_1132(int iParam0)
{
	if (iParam0 != func_57())
	{
		return unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_319, 6);
	}
	return 0;
}

int func_1133(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 154)
	{
		if (func_152(iVar0) == 9)
		{
			if (func_172(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_1134(int iParam0)
{
	if (iParam0 == func_57())
	{
		return 0;
	}
	return Global_1590908[iParam0 /*874*/].f_267.f_273;
}

bool func_1135()
{
	return unk_0x234B68AC2E35ED5A(Global_1683970.f_2, 10);
}

int func_1136(int iParam0)
{
	if (iParam0 != func_57())
	{
		return unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_319.f_2, 7);
	}
	return 0;
}

int func_1137(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_57())
	{
		return -1;
	}
	iVar0 = func_662(iParam0);
	if (!iVar0 == 0)
	{
		return func_1138(iVar0);
	}
	return -1;
}

int func_1138(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 154)
	{
		if (func_1139(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1139(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return 1;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 3;
			break;
		
		case 25:
			return 4;
			break;
		
		case 26:
			return 5;
			break;
		
		case 27:
			return 6;
			break;
		
		case 28:
			return 7;
			break;
		
		case 29:
			return 8;
			break;
		
		case 30:
			return 9;
			break;
		
		case 31:
			return 10;
			break;
		
		case 32:
			return 11;
			break;
		
		case 33:
			return 12;
			break;
		
		case 34:
			return 13;
			break;
		
		case 35:
			return 14;
			break;
		
		case 36:
			return 15;
			break;
		
		case 37:
			return 16;
			break;
		
		case 38:
			return 17;
			break;
		
		case 39:
			return 18;
			break;
		
		case 40:
			return 19;
			break;
		
		case 41:
			return 20;
			break;
		
		case 70:
			return 21;
			break;
		
		case 71:
			return 22;
			break;
		
		case 72:
			return 23;
			break;
		
		case 73:
			return 24;
			break;
		
		case 74:
			return 25;
			break;
		
		case 75:
			return 26;
			break;
		
		case 76:
			return 27;
			break;
		
		case 77:
			return 28;
			break;
		
		case 78:
			return 29;
			break;
		
		case joaat("mpsv_lp0_31"):
			return 30;
			break;
		
		case 80:
			return 31;
			break;
	}
	return 0;
}

bool func_1140()
{
	return unk_0x234B68AC2E35ED5A(Global_1683970, 17);
}

int func_1141()
{
	if (func_1340(unk_0x1146A9AE09CE2B14(), 1, 1))
	{
		if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
		{
			if (unk_0x27FC1B0077581B37(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0), -1, 0) != unk_0x7D2B9E6A64637269())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1142(int iParam0)
{
	if (unk_0xE45310E861787FC2() && !func_1143(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_1143(int iParam0)
{
	if (Global_1683970.f_3526)
	{
		if (((((func_152(iParam0) == 6 || func_152(iParam0) == 10) || func_152(iParam0) == 9) || func_152(iParam0) == 14) || func_152(iParam0) == 17) || func_152(iParam0) == 11)
		{
			return 1;
		}
	}
	return 0;
}

int func_1144()
{
	if (func_1340(unk_0x1146A9AE09CE2B14(), 1, 1))
	{
		if (func_580(unk_0x1146A9AE09CE2B14()))
		{
			if (Global_1590746 != func_57())
			{
				if (func_891(Global_1590746))
				{
					if ((func_1132(Global_1590746) && !func_1149()) && !func_1148())
					{
						return 1;
					}
				}
			}
		}
		else if (func_150(unk_0x1146A9AE09CE2B14()) || (func_1140() && unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0)))
		{
			if (Global_1590745 != func_57())
			{
				if (func_891(Global_1590745))
				{
					if ((func_1132(Global_1590745) && !func_1148()) && !func_1149())
					{
						return 1;
					}
				}
			}
		}
		else if (func_576(unk_0x1146A9AE09CE2B14()))
		{
			if (Global_1590751 != func_57())
			{
				if (func_1086(Global_1590751))
				{
					if ((func_1147(Global_1590751) && !func_1146()) && !func_1145())
					{
						return 1;
					}
				}
			}
		}
		else if (func_151(unk_0x1146A9AE09CE2B14()) || (func_1135() && unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0)))
		{
			if (Global_1590750 != func_57())
			{
				if (func_1086(Global_1590750))
				{
					if ((func_1147(Global_1590750) && !func_1145()) && !func_1146())
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_1145()
{
	return unk_0x234B68AC2E35ED5A(Global_1683970.f_2, 3);
}

bool func_1146()
{
	return unk_0x234B68AC2E35ED5A(Global_1683970.f_2, 4);
}

int func_1147(int iParam0)
{
	if (iParam0 != func_57())
	{
		return unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_319.f_2, 6);
	}
	return 0;
}

bool func_1148()
{
	return unk_0x234B68AC2E35ED5A(Global_1683970, 30);
}

bool func_1149()
{
	return unk_0x234B68AC2E35ED5A(Global_1683970, 31);
}

bool func_1150()
{
	int iVar0;
	
	iVar0 = unk_0x636F1F53CC61D2C9(joaat("am_mp_smpl_interior_int"));
	return iVar0 > 0;
}

int func_1151(int iParam0)
{
	if ((unk_0x08F338D098BF714B(unk_0x1146A9AE09CE2B14(), "AM_MP_SMPL_INTERIOR_EXT", iParam0) || unk_0x3F466B2A5F02D328("AM_MP_SMPL_INTERIOR_EXT", iParam0, 1, 0)) || func_1110(12, iParam0))
	{
		return 1;
	}
	return 0;
}

int func_1152(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 154)
	{
		return 1;
	}
	return 0;
}

int func_1153(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (func_542(iParam0))
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -4.3114f, 5.8923f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -4.3114f, 4.3923f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -2.8114f, 5.8923f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -2.8114f, 4.3923f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -6.1997f, 8.7449f, 0.0001f };
					*uParam3 = 260f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -6.6f, 7.345f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -6.6f, 5.7449f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -6.1997f, 4.2449f, 0.0001f };
					*uParam3 = 280f;
					return 1;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -7.6002f, 5.7561f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -7.6002f, 3.7561f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -7.6002f, 1.7561f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -7.6002f, -0.2439f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
			}
			break;
	}
	return 0;
}

bool func_1154(int iParam0)
{
	return func_1110(0, iParam0);
}

int func_1155()
{
	if (unk_0x234B68AC2E35ED5A(iLocal_126, 13))
	{
		return 1;
	}
	if (unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		return 0;
	}
	if (unk_0x0BABEFEA577FCFA4(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), func_1156(Local_124.f_197 + 1), 1) > 100f)
	{
		return 0;
	}
	return 1;
}

Vector3 func_1156(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	if (!func_42(iParam0))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 1:
			Var0 = { 50.9205f, -2560.01f, 6f };
			break;
		
		case 2:
			Var0 = { -1074.852f, -1257.452f, 5.6938f };
			break;
		
		case 3:
			Var0 = { 901.936f, -1019.425f, 34.9666f };
			break;
		
		case 4:
			Var0 = { 253.9006f, -1955.933f, 22.9477f };
			break;
		
		case 5:
			Var0 = { -426.279f, 180.9043f, 80.6855f };
			break;
		
		case 6:
			Var0 = { -1050.36f, -2023.939f, 12.1616f };
			break;
		
		case 7:
			Var0 = { -1275.378f, -815.4295f, 17.1148f };
			break;
		
		case 8:
			Var0 = { -883.2906f, -2730.542f, 12.8285f };
			break;
		
		case 9:
			Var0 = { 269.6765f, -3016.279f, 5.7176f };
			break;
		
		case 10:
			Var0 = { 1561.402f, -2138.697f, 77.5275f };
			break;
		
		case 11:
			Var0 = { -303.7892f, -2698.39f, 6.0003f };
			break;
		
		case 12:
			Var0 = { 507.2061f, -649.5859f, 24.7512f };
			break;
		
		case 13:
			Var0 = { -525.8206f, -1775.87f, 21.3501f };
			break;
		
		case 14:
			Var0 = { -291.6372f, -1352.556f, 31.3146f };
			break;
		
		case 15:
			Var0 = { 348.6436f, 324.428f, 104.3185f };
			break;
		
		case 16:
			Var0 = { 922.0838f, -1561.299f, 29.7475f };
			break;
		
		case 17:
			Var0 = { 763.7448f, -885.2086f, 25.0869f };
			break;
		
		case 18:
			Var0 = { 1043.884f, -2172.603f, 30.471f };
			break;
		
		case 19:
			Var0 = { 1001.659f, -2511.88f, 28.302f };
			break;
		
		case 20:
			Var0 = { -263.138f, 194.3424f, 85.184f };
			break;
		
		case 21:
			Var0 = { 547.8112f, -1942.514f, 23.9851f };
			break;
		
		case 22:
			Var0 = { 88.9678f, -2216.882f, 6.0613f };
			break;
	}
	return Var0;
}

void func_1157()
{
	func_1186();
	func_954();
	func_1185();
	func_1182();
	func_939();
	func_1179();
	func_1163();
	func_1159();
	func_930();
	func_1158();
}

void func_1158()
{
}

void func_1159()
{
	struct<3> Var0;
	float fVar1;
	
	if (func_440())
	{
		return;
	}
	if (func_28())
	{
		return;
	}
	Var0 = { func_1156(Local_124.f_197 + 1) };
	fVar1 = vdist2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0), Var0);
	if (fVar1 < 62500f)
	{
		if (!unk_0x234B68AC2E35ED5A(iLocal_126, 14))
		{
			func_230(1, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
			func_1160();
			unk_0x191DDA30577F440A(&iLocal_126, 14);
		}
	}
	else if (fVar1 > 250000f)
	{
		func_488();
	}
}

void func_1160()
{
	int iVar0;
	
	if (func_440())
	{
		return;
	}
	iVar0 = Local_124.f_197 + 1;
	switch (iVar0)
	{
		case 1:
			func_1161(93.9801f, -2532.177f, 5.0778f, 124.1404f, 1065353216);
			func_1161(96.7817f, -2536.936f, 5f, 121.982f, 1065353216);
			func_1161(106.1278f, -2539.717f, 5.0003f, 111.4201f, 1065353216);
			func_1161(7.7245f, -2598.042f, 5.0075f, 283.2584f, 1065353216);
			func_1161(13.7512f, -2602.234f, 5.0069f, 290.8908f, 1065353216);
			func_1161(113.3588f, -2586.112f, 5.0121f, 88.5573f, 1065353216);
			func_1161(111.6119f, -2592.456f, 5.0229f, 78.4188f, 1065353216);
			func_1161(8.5363f, -2518.204f, 5.0163f, 213.3867f, 1065353216);
			break;
		
		case 2:
			func_1161(-1150.759f, -1273.248f, 5.7478f, 282.4241f, 1065353216);
			func_1161(-1019.696f, -1323.524f, 4.9009f, 45.7692f, 1065353216);
			func_1161(-1012.756f, -1319.543f, 4.9001f, 43.138f, 1065353216);
			func_1161(-1005.033f, -1315.236f, 4.941f, 58.4519f, 1065353216);
			func_1161(-1014.173f, -1307.516f, 5.2364f, 52.7034f, 1065353216);
			func_1161(-1022.801f, -1245.642f, 5.014f, 106.8874f, 1065353216);
			func_1161(-1112.947f, -1296.568f, 4.258f, 298.12f, 1065353216);
			func_1161(-1118.264f, -1218.13f, 1.5169f, 188.9163f, 1065353216);
			break;
		
		case 3:
			func_1161(856.3708f, -1013.008f, 28.4203f, 271.5768f, 1065353216);
			func_1161(863.5153f, -993.5998f, 29.2774f, 239.646f, 1065353216);
			func_1161(933.4873f, -990.8866f, 37.0241f, 127.1206f, 1065353216);
			func_1161(932.2711f, -1007.077f, 36.7075f, 90.5105f, 1065353216);
			func_1161(867.5297f, -1076.188f, 27.7798f, 268.1065f, 1065353216);
			func_1161(868.5233f, -1092.591f, 27.7269f, 302.3375f, 1065353216);
			func_1161(927.5185f, -1092.741f, 33.1574f, 50.444f, 1065353216);
			func_1161(936.7908f, -1078.382f, 34.7149f, 77.3112f, 1065353216);
			break;
		
		case 4:
			func_1161(243.2832f, -1999.028f, 18.8177f, 341.0091f, 1065353216);
			func_1161(273.1573f, -2010.138f, 18.6668f, 29.2809f, 1065353216);
			func_1161(171.7093f, -1951.986f, 18.7677f, 286.1576f, 1065353216);
			func_1161(186.7918f, -1911.818f, 21.7781f, 235.4626f, 1065353216);
			func_1161(201.1726f, -1898.231f, 23.2412f, 220.1641f, 1065353216);
			func_1161(223.3617f, -1889.273f, 24.4098f, 178.0541f, 1065353216);
			func_1161(260.1144f, -1909.984f, 24.8323f, 142.8378f, 1065353216);
			func_1161(289.037f, -1933.327f, 24.3999f, 148.1186f, 1065353216);
			break;
		
		case 5:
			func_1161(-444.3442f, 229.0294f, 82.0416f, 232.9779f, 1065353216);
			func_1161(-446.8376f, 224.1595f, 82.0175f, 236.8468f, 1065353216);
			func_1161(-398.6772f, 227.0964f, 82.593f, 160.9651f, 1065353216);
			func_1161(-412.1818f, 224.1092f, 82.5148f, 207.9725f, 1065353216);
			func_1161(-368.4009f, 193.0408f, 82.6566f, 97.3058f, 1065353216);
			func_1161(-471.0459f, 153.4937f, 77.0803f, 301.4885f, 1065353216);
			func_1161(-492.4609f, 191.0608f, 69.9316f, 260.3055f, 1065353216);
			func_1161(-492.152f, 185.6411f, 69.9316f, 267.4302f, 1065353216);
			break;
		
		case 6:
			func_1161(-1119.86f, -2022.411f, 12.2297f, 292.6461f, 1065353216);
			func_1161(-1102.049f, -1983.884f, 12.1406f, 223.9062f, 1065353216);
			func_1161(-1084.243f, -1968.423f, 12.1514f, 204.0761f, 1065353216);
			func_1161(-1033.419f, -2068.45f, 12.4615f, 33.9101f, 1065353216);
			func_1161(-1037.025f, -2088.586f, 12.6459f, 21.4939f, 1065353216);
			func_1161(-1056.915f, -2088.188f, 12.2919f, 8.2791f, 1065353216);
			func_1161(-1020.213f, -2077.749f, 12.7601f, 40.6275f, 1065353216);
			func_1161(-1032.6f, -2101.71f, 12.6309f, 20.9321f, 1065353216);
			break;
		
		case 7:
			func_1161(-1323.561f, -801.4799f, 16.5991f, 309.0983f, 1065353216);
			func_1161(-1334.537f, -788.2323f, 18.9061f, 263.1596f, 1065353216);
			func_1161(-1333.08f, -758.4105f, 19.367f, 226.0109f, 1065353216);
			func_1161(-1326.314f, -754.1177f, 19.367f, 215.8053f, 1065353216);
			func_1161(-1252.46f, -880.908f, 11.1188f, 6.1107f, 1065353216);
			func_1161(-1234.162f, -868.6242f, 11.821f, 83.8965f, 1065353216);
			func_1161(-1234.714f, -903.713f, 11.0757f, 22.5172f, 1065353216);
			func_1161(-1274.141f, -860.0457f, 11.2177f, 313.1372f, 1065353216);
			break;
		
		case 8:
			func_1161(-954.9498f, -2765.854f, 12.9446f, 300.864f, 1065353216);
			func_1161(-967.7481f, -2758.093f, 12.8166f, 282.6459f, 1065353216);
			func_1161(-974.1952f, -2721.633f, 12.7566f, 258.5829f, 1065353216);
			func_1161(-956.0557f, -2704.292f, 12.831f, 242.288f, 1065353216);
			func_1161(-900.7191f, -2652.238f, 12.7618f, 177.695f, 1065353216);
			func_1161(-870.0709f, -2643.078f, 12.9495f, 171.6949f, 1065353216);
			func_1161(-837.4813f, -2697.67f, 12.8121f, 98.2582f, 1065353216);
			func_1161(-830.3173f, -2716.68f, 12.9445f, 57.01767f, 1065353216);
			break;
		
		case 9:
			func_1161(246.686f, -2954.608f, 4.8465f, 201.0552f, 1065353216);
			func_1161(237.4989f, -2960.046f, 4.8401f, 219.4444f, 1065353216);
			func_1161(278.0732f, -2933.848f, 4.6858f, 173.7103f, 1065353216);
			func_1161(305.2663f, -2953.124f, 4.9916f, 152.1779f, 1065353216);
			func_1161(306.9686f, -3051.72f, 4.8569f, 73.9139f, 1065353216);
			func_1161(290.1032f, -3067.022f, 4.9168f, 22.2414f, 1065353216);
			func_1161(248.4644f, -3081.733f, 4.8082f, 5.7888f, 1065353216);
			func_1161(213.5583f, -3006.335f, 4.8585f, 281.9704f, 1065353216);
			break;
		
		case 10:
			func_1161(1533.422f, -2207.716f, 76.5674f, 341.3423f, 1065353216);
			func_1161(1518.683f, -2197.165f, 76.0905f, 323.85f, 1065353216);
			func_1161(1505.83f, -2149.169f, 76.2134f, 287.7332f, 1065353216);
			func_1161(1517.668f, -2071.069f, 76.2881f, 218.4776f, 1065353216);
			func_1161(1513.971f, -2047.472f, 76.3438f, 229.7462f, 1065353216);
			func_1161(1562.546f, -2050.737f, 76.4175f, 158.5163f, 1065353216);
			func_1161(1571.823f, -2065.519f, 76.0999f, 139.3434f, 1065353216);
			func_1161(1559.668f, -2212.969f, 77.2272f, 30.3786f, 1065353216);
			break;
		
		case 11:
			func_1161(-244.4574f, -2679.464f, 5.0003f, 115.7166f, 1065353216);
			func_1161(-247.8431f, -2669.538f, 5.0003f, 137.3239f, 1065353216);
			func_1161(-273.936f, -2646.584f, 5.1595f, 138.4986f, 1065353216);
			func_1161(-283.7866f, -2643.465f, 5.1536f, 145.8487f, 1065353216);
			func_1161(-338.5266f, -2716.292f, 5.0016f, 353.4592f, 1065353216);
			func_1161(-340.0283f, -2721.088f, 5.0015f, 349.123f, 1065353216);
			func_1161(-284.5308f, -2623.301f, 5.0382f, 150.473f, 1065353216);
			func_1161(-257.3565f, -2632.506f, 5.0221f, 131.679f, 1065353216);
			break;
		
		case 12:
			func_1161(515.9905f, -720.5799f, 23.8387f, 5.6255f, 1065353216);
			func_1161(497.1281f, -728.9662f, 23.8776f, 343.3149f, 1065353216);
			func_1161(447.638f, -685.7243f, 27.4277f, 285.8884f, 1065353216);
			func_1161(449.3201f, -668.7817f, 27.3296f, 271.4846f, 1065353216);
			func_1161(498.4707f, -568.4258f, 23.747f, 193.0118f, 1065353216);
			func_1161(514.7365f, -562.4415f, 23.7507f, 158.6247f, 1065353216);
			func_1161(527.8929f, -562.6914f, 23.7997f, 164.4089f, 1065353216);
			func_1161(544.1755f, -594.525f, 23.7432f, 152.6498f, 1065353216);
			break;
		
		case 13:
			func_1161(-518.2458f, -1828.47f, 21.5839f, 6.9263f, 1065353216);
			func_1161(-493.7525f, -1823.626f, 21.8486f, 29.4302f, 1065353216);
			func_1161(-450.3873f, -1794.818f, 20.7743f, 85.0772f, 1065353216);
			func_1161(-597.9962f, -1729.797f, 22.139f, 232.3263f, 1065353216);
			func_1161(-581.0703f, -1718.014f, 21.9858f, 214.5117f, 1065353216);
			func_1161(-449.3808f, -1766.115f, 19.5349f, 112.1522f, 1065353216);
			func_1161(-541.6173f, -1821.735f, 21.9225f, 317.0811f, 1065353216);
			func_1161(-618.6395f, -1711.974f, 23.0683f, 235.603f, 1065353216);
			break;
		
		case 14:
			func_1161(-291.3686f, -1274.791f, 29.4583f, 184.0252f, 1065353216);
			func_1161(-260.6114f, -1286.958f, 30.0291f, 148.6145f, 1065353216);
			func_1161(-245.4854f, -1358.204f, 30.606f, 97.9413f, 1065353216);
			func_1161(-258.2249f, -1408.08f, 30.2904f, 46.1851f, 1065353216);
			func_1161(-293.8492f, -1408.819f, 30.2952f, 0.4148f, 1065353216);
			func_1161(-335.4179f, -1371.286f, 30.2957f, 304.5049f, 1065353216);
			func_1161(-337.6552f, -1333.524f, 30.3008f, 289.5995f, 1065353216);
			func_1161(-339.4502f, -1311.185f, 30.2086f, 224.0032f, 1065353216);
			break;
		
		case 15:
			func_1161(296.9105f, 339.6927f, 104.52f, 250.3169f, 1065353216);
			func_1161(286.231f, 324.1514f, 104.6652f, 267.2802f, 1065353216);
			func_1161(314.8456f, 295.4021f, 104.543f, 341.0804f, 1065353216);
			func_1161(356.8475f, 275.1253f, 102.1478f, 349.9545f, 1065353216);
			func_1161(403.6933f, 290.7596f, 101.9871f, 47.5594f, 1065353216);
			func_1161(416.5997f, 309.7407f, 101.987f, 69.7807f, 1065353216);
			func_1161(388.4496f, 357.7741f, 101.479f, 81.7557f, 1065353216);
			func_1161(323.6804f, 367.7533f, 104.3807f, 251.082f, 1065353216);
			break;
		
		case 16:
			func_1161(983.1635f, -1507.116f, 30.4318f, 115.3138f, 1065353216);
			func_1161(976.6813f, -1462.792f, 30.4421f, 170.1272f, 1065353216);
			func_1161(965.1019f, -1457.18f, 30.1302f, 187.7104f, 1065353216);
			func_1161(954.3276f, -1500.289f, 29.9441f, 234.0993f, 1065353216);
			func_1161(967.4816f, -1632.333f, 29.1107f, 353.4453f, 1065353216);
			func_1161(890.0863f, -1572.723f, 29.84f, 281.6886f, 1065353216);
			func_1161(905.2548f, -1543.512f, 29.5311f, 219.2688f, 1065353216);
			func_1161(922.9328f, -1544.217f, 29.8062f, 181.6137f, 1065353216);
			break;
		
		case 17:
			func_1161(754.465f, -835.6287f, 24.8675f, 202.5404f, 1065353216);
			func_1161(760.689f, -821.2197f, 25.2721f, 185.6987f, 1065353216);
			func_1161(799.4153f, -825.4905f, 25.19f, 155.4635f, 1065353216);
			func_1161(833.3179f, -912.5907f, 24.5379f, 96.2594f, 1065353216);
			func_1161(836.246f, -921.1563f, 25.0122f, 86.3203f, 1065353216);
			func_1161(798.7469f, -975.9729f, 25.1518f, 41.5425f, 1065353216);
			func_1161(753.8427f, -972.2688f, 23.9505f, 340.2511f, 1065353216);
			func_1161(737.0633f, -940.94f, 23.8394f, 264.3263f, 1065353216);
			break;
		
		case 18:
			func_1161(1021.727f, -2096.922f, 29.9949f, 131.5094f, 1065353216);
			func_1161(1004.22f, -2097.619f, 30.1617f, 218.0245f, 1065353216);
			func_1161(1048.305f, -2162.876f, 31.0285f, 17.1583f, 1065353216);
			func_1161(1053.165f, -2138.979f, 31.6269f, 138.5871f, 1065353216);
			func_1161(992.7523f, -2239.598f, 29.5519f, 335.4291f, 1065353216);
			func_1161(975.8146f, -2201.123f, 29.5516f, 290.5504f, 1065353216);
			func_1161(1035.371f, -2203.133f, 30.8934f, 77.8725f, 1065353216);
			func_1161(1040.114f, -2203.875f, 30.8934f, 62.6027f, 1065353216);
			break;
		
		case 19:
			func_1161(957.4448f, -2452.676f, 27.553f, 231.7168f, 1065353216);
			func_1161(957.0999f, -2474.014f, 27.4957f, 267.1929f, 1065353216);
			func_1161(945.7234f, -2497.031f, 27.453f, 256.6793f, 1065353216);
			func_1161(946.9409f, -2478.706f, 27.3433f, 233.4717f, 1065353216);
			func_1161(932.4327f, -2534.006f, 27.3027f, 231.8695f, 1065353216);
			func_1161(900.2678f, -2552.213f, 27.4211f, 283.9405f, 1065353216);
			func_1161(1028.407f, -2477.004f, 27.5034f, 91.0284f, 1065353216);
			func_1161(1021.066f, -2459.521f, 27.5462f, 131.3309f, 1065353216);
			break;
		
		case 20:
			func_1161(-237.7643f, 248.6469f, 91.0445f, 196.7769f, 1065353216);
			func_1161(-202.8588f, 245.9139f, 91.0419f, 127.8667f, 1065353216);
			func_1161(-199.1134f, 179.474f, 76.6409f, 79.199f, 1065353216);
			func_1161(-217.1594f, 141.0364f, 68.6993f, 21.5726f, 1065353216);
			func_1161(-240.5069f, 139.3272f, 68.6369f, 352.6409f, 1065353216);
			func_1161(-280.1349f, 153.3907f, 74.2578f, 344.9672f, 1065353216);
			func_1161(-177.5456f, 215.1789f, 87.8734f, 101.2481f, 1065353216);
			func_1161(-174.6252f, 206.0641f, 87.426f, 84.7397f, 1065353216);
			break;
		
		case 21:
			func_1161(578.9037f, -1883.818f, 24.4357f, 190.9878f, 1065353216);
			func_1161(601.1657f, -1872.286f, 23.7783f, 136.6622f, 1065353216);
			func_1161(573.7683f, -1869.375f, 24.1791f, 138.5911f, 1065353216);
			func_1161(531.532f, -1858.341f, 24.332f, 211.7805f, 1065353216);
			func_1161(542.208f, -1844.02f, 24.332f, 187.9743f, 1065353216);
			func_1161(502.1498f, -1917.516f, 24.3684f, 289.8235f, 1065353216);
			func_1161(512.4601f, -1985.896f, 23.9851f, 299.9174f, 1065353216);
			func_1161(479.1975f, -1908.422f, 24.2436f, 282.8994f, 1065353216);
			break;
		
		case 22:
			func_1161(172.8245f, -2183.052f, 5.0294f, 116.2516f, 1065353216);
			func_1161(173.7597f, -2198.917f, 5.171f, 72.2949f, 1065353216);
			func_1161(173.7982f, -2224.849f, 5.171f, 126.6793f, 1065353216);
			func_1161(181.6316f, -2238.538f, 5.0035f, 61.6889f, 1065353216);
			func_1161(147.6168f, -2252.883f, 5.0856f, 63.8371f, 1065353216);
			func_1161(147.2348f, -2244.339f, 5.0856f, 70.1362f, 1065353216);
			func_1161(178.0549f, -2206.273f, 5.0238f, 38.9746f, 1065353216);
			func_1161(176.9219f, -2223.301f, 5.0329f, 133.7211f, 1065353216);
			break;
	}
}

void func_1161(struct<3> Param0, float fParam1, int iParam2)
{
	func_1162(Param0, fParam1, iParam2);
}

void func_1162(struct<3> Param0, var uParam1, var uParam2)
{
	if (!Global_2405077.f_1752)
	{
	}
	if (Global_2405077.f_713 < 100)
	{
		if (vmag(Param0) <= 0.01f)
		{
			return;
		}
		Global_2405077.f_713.f_1[Global_2405077.f_713 /*5*/] = { Param0 };
		Global_2405077.f_713.f_1[Global_2405077.f_713 /*5*/].f_3 = uParam1;
		Global_2405077.f_713.f_1[Global_2405077.f_713 /*5*/].f_4 = uParam2;
		Global_2405077.f_713++;
	}
}

void func_1163()
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	
	if (!func_440())
	{
		return;
	}
	if (!unk_0x234B68AC2E35ED5A(iLocal_126, 19))
	{
		if (unk_0x159BC3DDA80D71AC(Local_124.f_2[0 /*10*/].f_2))
		{
			if (func_13(Local_124.f_2[0 /*10*/].f_2))
			{
				unk_0x51D29810E2319A09(unk_0x854C404AEB476240(Local_124.f_2[0 /*10*/].f_2), 0, 0);
				unk_0x191DDA30577F440A(&iLocal_126, 19);
			}
		}
	}
	if (!unk_0x234B68AC2E35ED5A(Local_124.f_1, 8))
	{
		if (!unk_0x234B68AC2E35ED5A(Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_1, 9))
		{
			if (unk_0x159BC3DDA80D71AC(Local_124.f_2[0 /*10*/].f_2))
			{
				if (!func_13(Local_124.f_2[0 /*10*/].f_2))
				{
					unk_0x191DDA30577F440A(&(Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_1), 9);
				}
			}
		}
	}
	if (!unk_0x234B68AC2E35ED5A(Local_124.f_1, 6))
	{
		if (!unk_0x234B68AC2E35ED5A(Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_1, 7))
		{
			if (unk_0x159BC3DDA80D71AC(Local_124.f_2[0 /*10*/].f_2))
			{
				Var1 = { unk_0xD6E677FAD7521410(unk_0x854C404AEB476240(Local_124.f_2[0 /*10*/].f_2), 0) };
				if (vdist2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0), Var1) < 90000f)
				{
					unk_0x191DDA30577F440A(&(Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_1), 7);
				}
			}
		}
	}
	if (iLocal_129 == -2)
	{
		if (unk_0x159BC3DDA80D71AC(Local_124.f_2[0 /*10*/].f_2))
		{
			if (func_13(Local_124.f_2[0 /*10*/].f_2))
			{
				if (!unk_0x234B68AC2E35ED5A(Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_1, 8))
				{
					if (func_1178(unk_0x854C404AEB476240(Local_124.f_2[0 /*10*/].f_2)))
					{
						unk_0x191DDA30577F440A(&(Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_1), 8);
					}
				}
				else if (!func_1178(unk_0x854C404AEB476240(Local_124.f_2[0 /*10*/].f_2)))
				{
					unk_0xC664C0067EEAB8D1(&(Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_1), 8);
				}
			}
		}
	}
	if (!unk_0x234B68AC2E35ED5A(Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_1, 2) && !unk_0x234B68AC2E35ED5A(Local_124.f_1, 4))
	{
		if (unk_0x159BC3DDA80D71AC(Local_124.f_2[0 /*10*/].f_2))
		{
			iVar0 = unk_0x854C404AEB476240(Local_124.f_2[0 /*10*/].f_2);
			if (unk_0xBFCE58B2B3249999(iVar0, 0))
			{
				if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
				{
					if (unk_0x530FB711AE9CF518(unk_0x7D2B9E6A64637269()))
					{
						if (unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0) == iVar0)
						{
							if (unk_0x27FC1B0077581B37(iVar0, -1, 0) == unk_0x7D2B9E6A64637269())
							{
								if (!unk_0x234B68AC2E35ED5A(Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_1, 3))
								{
									unk_0x191DDA30577F440A(&(Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_1), 3);
								}
							}
							else if (unk_0x234B68AC2E35ED5A(Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_1, 3))
							{
								unk_0xC664C0067EEAB8D1(&(Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_1), 3);
							}
						}
						else if (unk_0x234B68AC2E35ED5A(Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_1, 3))
						{
							unk_0xC664C0067EEAB8D1(&(Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_1), 3);
						}
					}
					else if (unk_0x234B68AC2E35ED5A(Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_1, 3))
					{
						unk_0xC664C0067EEAB8D1(&(Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_1), 3);
					}
				}
				else if (unk_0x234B68AC2E35ED5A(Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_1, 3))
				{
					unk_0xC664C0067EEAB8D1(&(Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_1), 3);
				}
			}
		}
	}
	iVar2 = func_57();
	iVar3 = func_57();
	if (iLocal_129 != Local_124.f_215)
	{
		if (!func_28())
		{
			if (!func_952())
			{
				if (unk_0x575B7C28D81C0B4D(uLocal_149))
				{
					unk_0x1AD5BCFEC31BB8D9(&uLocal_149);
				}
				if (Local_124.f_215 == unk_0xDD0E57E73E5C4BF6())
				{
					func_1177(1);
				}
				else if (Local_124.f_215 > -1)
				{
					iVar2 = func_1176();
					if (iVar2 != func_57())
					{
						if (func_671(1))
						{
							iVar3 = func_673();
							if (iVar3 != func_57())
							{
								if (func_352(iVar2, iVar3, 1))
								{
									func_483(iVar2, 478, 1, 0);
									func_482(iVar2, func_486(iLocal_150), 1, 0);
									func_1177(1);
								}
							}
						}
						func_1174("DCONTRA_TCKV", iVar2, 0, 0, 0, 1, 0);
					}
				}
				else if (Local_124.f_215 == -1)
				{
					if (unk_0x575B7C28D81C0B4D(uLocal_147))
					{
						unk_0x1AD5BCFEC31BB8D9(&uLocal_147);
					}
					iVar2 = func_1173();
					if (iVar2 != func_57())
					{
						func_483(iVar2, 478, 0, 0);
						func_482(iVar2, func_486(iLocal_150), 0, 0);
					}
					func_1172(3, 1);
				}
				iLocal_129 = Local_124.f_215;
			}
			else
			{
				func_1172(1, 0);
			}
		}
	}
	func_1171();
	func_1169(0);
	func_1164();
}

void func_1164()
{
	int iVar0;
	struct<3> Var1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	iVar0 = func_1176();
	Var1 = { func_40() };
	if (unk_0x575B7C28D81C0B4D(uLocal_147))
	{
		unk_0xB4D5E37C91862216(12, &uVar2, &uVar3, &uVar4, &uVar5);
		unk_0x22B88F4BA785575E(1, Var1, 0f, 0f, 0f, 0f, 0f, 0f, 0.6f, 0.6f, 1f, uVar2, uVar3, uVar4, 100, 0, 0, 2, 0, 0, 0, 0);
	}
	if (unk_0x159BC3DDA80D71AC(Local_124.f_2[0 /*10*/].f_2))
	{
		if (unk_0xB364346471C3B028(Local_124.f_2[0 /*10*/].f_2))
		{
			if (!unk_0x234B68AC2E35ED5A(Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_1, 2))
			{
				if (iVar0 == unk_0x1146A9AE09CE2B14())
				{
					if (!unk_0xECEC7528A52B4EE8(unk_0xD56332194D622ECE(iVar0)))
					{
						if (unk_0x591190E69BE43117(unk_0xD56332194D622ECE(iVar0), Var1, 6f, 6f, 2f, 0, 1, 0))
						{
							func_1165(unk_0x854C404AEB476240(Local_124.f_2[0 /*10*/].f_2), &uLocal_319, 0, 1);
							if (unk_0xA6BE8F025C6B653F(unk_0x854C404AEB476240(Local_124.f_2[0 /*10*/].f_2)))
							{
								unk_0xBB18EA5F1620FF5F(unk_0x854C404AEB476240(Local_124.f_2[0 /*10*/].f_2), 1);
							}
							unk_0x191DDA30577F440A(&(Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_1), 2);
						}
					}
				}
			}
		}
	}
}

int func_1165(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	if (!func_1167(iParam0, 1, 1, 0, 0, 0, 1, 0, 1))
	{
		if (unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), *uParam1)) > 1000)
		{
			iVar0 = 0;
			while (iVar0 < 32)
			{
				iVar1 = unk_0xC502CD39B4994F3A(iVar0);
				if (func_1340(iVar1, 0, 1))
				{
					if (unk_0xF41EB7643E61A928(unk_0xD56332194D622ECE(iVar1), iParam0, 0))
					{
						func_1166(func_506(iVar1), 0, 0f, 0, 0, 0, -1);
					}
				}
				iVar0++;
			}
			*uParam1 = unk_0x551F46B3C7DFB654();
		}
	}
	else if (!unk_0xA6BE8F025C6B653F(iParam0))
	{
		unk_0x13F856602366FE17(iParam0);
	}
	else
	{
		if (bParam3)
		{
			unk_0xBB18EA5F1620FF5F(iParam0, 1);
		}
		unk_0xA2C015B68CE01357(iParam0, 0);
		if (bParam2)
		{
			unk_0x8F160110753EB17B(iParam0, 1);
		}
		return 1;
	}
	return 0;
}

void func_1166(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<9> Var0;
	
	Var0 = -1005623606;
	Var0.f_1 = unk_0x1146A9AE09CE2B14();
	Var0.f_7 = iParam6;
	Var0.f_4 = iParam1;
	Var0.f_5 = iParam4;
	Var0.f_2 = fParam2;
	Var0.f_3 = iParam3;
	Var0.f_6 = iParam5;
	Var0.f_8 = unk_0x2053F6ACFD4ED4BC();
	if (!iParam0 == 0)
	{
		unk_0xA5C82A39FF8ED272(1, &Var0, 9, iParam0);
	}
}

int func_1167(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = unk_0x3CF5ADE443D18312(iParam0) + 1;
	if (iParam4 || !unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_1168(iParam0, (iVar0 - 1), bParam6, iParam7);
			if (unk_0x419E13582192CFEA(iVar2))
			{
				if (iParam3 && iVar2 == unk_0x7D2B9E6A64637269())
				{
				}
				else if (bParam2)
				{
					if (unk_0x72D30262CF8C8603(iVar2))
					{
						iVar3 = unk_0xCB567ED25393C1DF(iVar2);
						if (((!unk_0xECEC7528A52B4EE8(iVar2) && iVar3 != func_57()) && func_1340(iVar3, 1, 1)) || iParam8)
						{
							if (unk_0x6C9038EC46DA62DE(unk_0xCB567ED25393C1DF(iVar2)) == 0)
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
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!unk_0xECEC7528A52B4EE8(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_1168(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	if (!unk_0x9B73EB6255D4AE81(iParam0, iParam1, iParam3))
	{
		iVar0 = unk_0x27FC1B0077581B37(iParam0, iParam1, iParam3);
	}
	if (bParam2)
	{
		if (!unk_0x419E13582192CFEA(iVar0) && !unk_0xE50EB54E0F21BED0(iParam0, 0))
		{
			iVar0 = unk_0xC6F40BA22FFB861E(iParam0, iParam1);
			if (!unk_0xE50EB54E0F21BED0(iVar0, 0))
			{
				if (unk_0x4E8DA737B686529A(iVar0, 451360105) == 1 || unk_0x4E8DA737B686529A(iVar0, -828834893) == 1)
				{
					if (vdist(unk_0xD6E677FAD7521410(iParam0, 0), unk_0xD6E677FAD7521410(iVar0, 0)) < 10f)
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

void func_1169(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (func_2())
	{
		return;
	}
	if (unk_0x159BC3DDA80D71AC(Local_124.f_2[iParam0 /*10*/].f_2))
	{
		if (func_13(Local_124.f_2[iParam0 /*10*/].f_2))
		{
			if (unk_0x575B7C28D81C0B4D(uLocal_149))
			{
				if (Local_124.f_216 > -1)
				{
					unk_0xB4D5E37C91862216(9, &uVar0, &uVar1, &uVar2, &uVar3);
				}
				else if (iLocal_129 == -2)
				{
					unk_0xB4D5E37C91862216(6, &uVar0, &uVar1, &uVar2, &uVar3);
				}
				else
				{
					unk_0xB4D5E37C91862216(9, &uVar0, &uVar1, &uVar2, &uVar3);
				}
				func_1170(unk_0x854C404AEB476240(Local_124.f_2[iParam0 /*10*/].f_2), uVar0, uVar1, uVar2, 0);
			}
		}
	}
}

void func_1170(int iParam0, var uParam1, var uParam2, var uParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	fVar2 = 0.5f;
	unk_0xC78A38E5FBC66080(unk_0x6471F4759775FCA4(uParam0), &Var0, &Var1);
	fVar3 = ((Var1.f_2 - Var0.f_2) / 2f);
	fVar4 = (Var1.f_2 - fVar3);
	if (fVar2 <= (fVar4 + 0.1f))
	{
		fVar2 = (fVar4 + 0.4f);
	}
	fVar2 = (fVar2 + fParam4);
	unk_0x22B88F4BA785575E(2, unk_0xD6E677FAD7521410(iParam0, 1) + Vector((((Var1.f_2 - Var0.f_2) / 2f) + fVar2), 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uParam1, uParam2, uParam3, 100, 1, 1, 2, 0, 0, 0, 0);
}

void func_1171()
{
	if (iLocal_129 == -2)
	{
		if (unk_0x575B7C28D81C0B4D(uLocal_149))
		{
			if (iLocal_130 != Local_124.f_222)
			{
				iLocal_130 = Local_124.f_222;
				unk_0x97A41BF3F05FC07D(uLocal_149, iLocal_130);
			}
		}
	}
	else if (iLocal_130 != 255)
	{
		iLocal_130 = 255;
	}
}

void func_1172(int iParam0, bool bParam1)
{
	if (!unk_0x575B7C28D81C0B4D(uLocal_149))
	{
		if (unk_0x159BC3DDA80D71AC(Local_124.f_2[0 /*10*/].f_2))
		{
			if (func_13(Local_124.f_2[0 /*10*/].f_2))
			{
				uLocal_149 = unk_0xB20BB447C131B310(unk_0x854C404AEB476240(Local_124.f_2[0 /*10*/].f_2));
				unk_0xC5BBAB0F8336ECB7(uLocal_149, 12);
				unk_0x252BE56DB93DF816(uLocal_149, 478);
				unk_0xFA3E6ADC3E5D386E(uLocal_149, iParam0);
				if (bParam1)
				{
					unk_0x13CC211F9F7ACE7F(uLocal_149, 1);
				}
			}
		}
	}
}

int func_1173()
{
	int iVar0;
	
	iVar0 = func_57();
	if (iLocal_129 < 0)
	{
		return iVar0;
	}
	if (unk_0x8CFC2F41A749E236(unk_0xC502CD39B4994F3A(iLocal_129)))
	{
		iVar0 = unk_0xC502CD39B4994F3A(iLocal_129);
	}
	return iVar0;
}

int func_1174(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = unk_0x7C3E030BC3ED6671(iParam1);
	if (unk_0xEBB066F8EADD0C1F(unk_0x1146A9AE09CE2B14(), iParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var2, unk_0xF04DBC0AC5A2AB23(iParam1), 64);
		}
		else
		{
			StringCopy(&Var2, unk_0xF04DBC0AC5A2AB23(iParam1), 64);
		}
		if (unk_0xAB6A270F84A8781E(&Var2))
		{
		}
		unk_0xAD97A7EDCF347FBB(sParam0);
		if ((iVar1 != -1 && unk_0xE45310E861787FC2()) && iVar1 < 4)
		{
			if (Global_4456448.f_80260[iVar1] != -1)
			{
				unk_0xB2A9BDF905DC5A51(func_632(iVar1, iParam1, 0));
			}
			else
			{
				unk_0xB2A9BDF905DC5A51(func_611(iParam1, -2, 1, 0, 0));
			}
		}
		else
		{
			unk_0xB2A9BDF905DC5A51(func_611(iParam1, -2, 1, 0, 0));
		}
		unk_0xA91D83F2CC1345A6(func_727(&Var2));
		if (!bParam4)
		{
			iVar0 = unk_0x02B23FCAC192C764(0, 1);
		}
		else
		{
			Global_2518253 = { func_59(iParam1) };
			if (unk_0xEDDAF8F99F371228(&Global_2518183, 35, &Global_2518253))
			{
				iVar3 = 0;
				if (unk_0xDA654EB115F9FF7D(&(Global_2518183.f_22), "Leader") && Global_2518183.f_30 == 0)
				{
					iVar3 = 1;
				}
				if (Global_2518183.f_21 > 0)
				{
					iVar4 = 0;
				}
				else
				{
					iVar4 = 1;
				}
				if (bParam5)
				{
					if (bParam6)
					{
						Var2 = { func_1175(&Var2) };
					}
					iVar0 = unk_0x05F3E4A6F62A5ACD(iVar4, unk_0xD30CB36AEC29F5CC(&Global_2518183, 35), &(Global_2518183.f_17), Global_2518183.f_30, iVar3, 0, Global_2518183, &Var2, Global_1314059, Global_1314060, Global_1314061);
				}
				else
				{
					iVar0 = unk_0x3C42479A3436E320(iVar4, unk_0xD30CB36AEC29F5CC(&Global_2518183, 35), &(Global_2518183.f_17), Global_2518183.f_30, iVar3, 0, Global_2518183, Global_1314059, Global_1314060, Global_1314061);
				}
			}
			else
			{
				iVar0 = unk_0x02B23FCAC192C764(0, 1);
			}
		}
		func_723(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

struct<16> func_1175(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

int func_1176()
{
	int iVar0;
	
	iVar0 = func_57();
	if (Local_124.f_216 > -1)
	{
		if (unk_0x8CFC2F41A749E236(unk_0xC502CD39B4994F3A(Local_124.f_216)))
		{
			iVar0 = unk_0xC502CD39B4994F3A(Local_124.f_216);
		}
	}
	return iVar0;
}

void func_1177(bool bParam0)
{
	struct<3> Var0;
	
	if (!unk_0x575B7C28D81C0B4D(uLocal_147))
	{
		Var0 = { func_40() };
		uLocal_147 = unk_0x27E44C95E1D1461C(Var0);
		if (bParam0)
		{
			unk_0x13CC211F9F7ACE7F(uLocal_147, 1);
		}
	}
}

int func_1178(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		return 0;
	}
	Var0 = { unk_0xD6E677FAD7521410(uParam0, 0) };
	if (unk_0x0BABEFEA577FCFA4(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), Var0, 0) < 50f)
	{
		return 1;
	}
	if (unk_0xB4E725A8915BDF60(iParam0))
	{
		if (unk_0x3D6C3476988DE6E1(Var0, 1f))
		{
			if (unk_0x895779B17E5AA5FE(unk_0x7D2B9E6A64637269(), iParam0, 17))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_1179()
{
	int iVar0;
	
	if (!func_548())
	{
		if (func_460("DCONTRA_HLP1"))
		{
			unk_0x66AE54CE92457FEE(1);
		}
		if (func_460("DCONTRA_HLP2"))
		{
			unk_0x66AE54CE92457FEE(1);
		}
		if (func_460("DCONTRA_HLPCR"))
		{
			unk_0x66AE54CE92457FEE(1);
		}
		if (func_460("DCONTRA_HLPVCR"))
		{
			unk_0x66AE54CE92457FEE(1);
		}
		return;
	}
	iVar0 = func_429(unk_0x1146A9AE09CE2B14());
	if (iVar0 < 2)
	{
		if (func_460("DCONTRA_HLP1"))
		{
			unk_0x66AE54CE92457FEE(1);
		}
		if (func_460("DCONTRA_HLP2"))
		{
			unk_0x66AE54CE92457FEE(1);
		}
		if (func_460("DCONTRA_HLPVCR"))
		{
			unk_0x66AE54CE92457FEE(1);
		}
		if (func_460("DCONTRA_HLPCR"))
		{
			unk_0x66AE54CE92457FEE(1);
		}
		return;
	}
	if (func_28())
	{
		return;
	}
	if (!unk_0x234B68AC2E35ED5A(iLocal_126, 1))
	{
		return;
	}
	if (!unk_0x234B68AC2E35ED5A(iLocal_126, 2))
	{
		if (!func_1181(86))
		{
			if (func_1055(0, 1, 1, 1))
			{
				if (unk_0xDD0E57E73E5C4BF6() == Local_124.f_218)
				{
					if (func_440())
					{
						func_468("DCONTRA_HLP3", -1);
					}
					else
					{
						func_468("DCONTRA_HLP1", -1);
					}
					func_467(1);
					unk_0x191DDA30577F440A(&iLocal_126, 2);
				}
				else if (func_1221() == Local_124.f_218)
				{
					if (func_440())
					{
						func_468("DCONTRA_HLP4", -1);
					}
					else
					{
						func_468("DCONTRA_HLP2", -1);
					}
					func_467(1);
					unk_0x191DDA30577F440A(&iLocal_126, 2);
				}
			}
		}
	}
	else if (!unk_0x234B68AC2E35ED5A(iLocal_126, 8))
	{
		if (!func_440())
		{
			if (func_1055(0, 1, 1, 1))
			{
				if (func_663())
				{
					func_468("DCONTRA_HLPVCR", -1);
				}
				else
				{
					func_468("DCONTRA_HLPCR", -1);
				}
				func_467(1);
				unk_0x191DDA30577F440A(&iLocal_126, 8);
			}
		}
	}
	if (func_440())
	{
		if (unk_0x234B68AC2E35ED5A(iLocal_126, 2))
		{
			if (!unk_0x234B68AC2E35ED5A(iLocal_126, 4))
			{
				if (func_1055(0, 1, 1, 1))
				{
					func_1180("DCONTRA_HLPLS", "DCONTRA_VBLP", -1);
					func_467(1);
					unk_0x191DDA30577F440A(&iLocal_126, 4);
					unk_0x191DDA30577F440A(&(Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_1), 10);
				}
			}
		}
	}
}

void func_1180(char* sParam0, char* sParam1, int iParam2)
{
	unk_0xDDEC6D09154BA73A(sParam0);
	unk_0x1896EC0B030A48A2(sParam1);
	unk_0x4A5DC2FF6E0B609F(0, 0, 0, iParam2);
}

bool func_1181(int iParam0)
{
	return Global_2441237.f_2841[0 /*80*/].f_1 == iParam0;
}

void func_1182()
{
	struct<3> Var0;
	
	if (!unk_0x234B68AC2E35ED5A(iLocal_126, 12))
	{
		if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
		{
			Var0 = { func_1183(func_1116(Local_124.f_197 + 1)) };
			if (unk_0x0BABEFEA577FCFA4(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), Var0, 1) <= 200f)
			{
				uLocal_134 = unk_0x5AD02BBC63E31E46();
				unk_0x4569EA65F1B056ED(uLocal_134, "Bell_02", Var0, "ALARMS_SOUNDSET", 0, 0, 0);
				unk_0x191DDA30577F440A(&iLocal_126, 12);
			}
		}
	}
}

Vector3 func_1183(int iParam0)
{
	struct<3> Var0;
	
	func_1184(iParam0, &Var0);
	return Var0;
}

void func_1184(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 54.191f, -2569.248f, 5.0046f };
			break;
		
		case 1:
			*uParam1 = { -1083.054f, -1261.893f, 4.534f };
			break;
		
		case 2:
			*uParam1 = { 896.3665f, -1035.749f, 34.1096f };
			break;
		
		case 3:
			*uParam1 = { 247.473f, -1956.943f, 22.1908f };
			break;
		
		case 4:
			*uParam1 = { -424.828f, 185.825f, 79.775f };
			break;
		
		case 5:
			*uParam1 = { -1042.482f, -2023.516f, 12.1616f };
			break;
		
		case 6:
			*uParam1 = { -1268.119f, -812.2741f, 16.1075f };
			break;
		
		case 7:
			*uParam1 = { -873.65f, -2735.948f, 12.9438f };
			break;
		
		case 8:
			*uParam1 = { 274.5224f, -3015.413f, 4.6993f };
			break;
		
		case 9:
			*uParam1 = { 1569.69f, -2129.792f, 77.3351f };
			break;
		
		case 10:
			*uParam1 = { -315.551f, -2698.654f, 6.5495f };
			break;
		
		case 11:
			*uParam1 = { 499.81f, -651.982f, 23.909f };
			break;
		
		case 12:
			*uParam1 = { -528.5296f, -1784.573f, 20.5853f };
			break;
		
		case 13:
			*uParam1 = { -295.8596f, -1353.238f, 30.3138f };
			break;
		
		case 14:
			*uParam1 = { 349.839f, 328.889f, 103.272f };
			break;
		
		case 15:
			*uParam1 = { 926.2818f, -1560.311f, 29.7404f };
			break;
		
		case 16:
			*uParam1 = { 759.566f, -909.466f, 24.244f };
			break;
		
		case 17:
			*uParam1 = { 1037.813f, -2173.062f, 30.5334f };
			break;
		
		case 18:
			*uParam1 = { 1019.116f, -2511.69f, 27.302f };
			break;
		
		case 19:
			*uParam1 = { -245.3405f, 203.3286f, 82.818f };
			break;
		
		case 20:
			*uParam1 = { 539.346f, -1945.682f, 23.984f };
			break;
		
		case 21:
			*uParam1 = { 96.1538f, -2216.4f, 5.1712f };
			break;
	}
}

void func_1185()
{
	struct<3> Var0;
	
	if (func_440())
	{
		return;
	}
	if (func_28())
	{
		return;
	}
	if (!unk_0x234B68AC2E35ED5A(iLocal_126, 1))
	{
		return;
	}
	if (!unk_0x234B68AC2E35ED5A(Local_124.f_1, 13))
	{
		if (!unk_0x234B68AC2E35ED5A(Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_1, 11))
		{
			Var0 = { func_40() };
			if (vdist2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0), Var0) < 22500f)
			{
				unk_0x191DDA30577F440A(&(Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_1), 11);
			}
		}
		if (func_548())
		{
			if (!unk_0x575B7C28D81C0B4D(uLocal_148))
			{
				uLocal_148 = unk_0x27E44C95E1D1461C(func_40());
				unk_0x13CC211F9F7ACE7F(uLocal_148, 1);
			}
		}
		else if (unk_0x575B7C28D81C0B4D(uLocal_148))
		{
			unk_0x1AD5BCFEC31BB8D9(&uLocal_148);
		}
	}
	else if (unk_0x575B7C28D81C0B4D(uLocal_148))
	{
		unk_0x1AD5BCFEC31BB8D9(&uLocal_148);
	}
}

void func_1186()
{
	if (!unk_0x234B68AC2E35ED5A(Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_1, 1))
	{
		if (!func_1220())
		{
			if (unk_0x234B68AC2E35ED5A(Local_124.f_1, 6))
			{
				func_255(1);
				unk_0x191DDA30577F440A(&(Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_1), 1);
			}
		}
	}
}

void func_1187()
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (func_28())
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (func_440())
		{
			if (!unk_0x234B68AC2E35ED5A(Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_2, iVar1))
			{
				if (!unk_0x234B68AC2E35ED5A(Local_124.f_206, iVar1))
				{
					if (unk_0x159BC3DDA80D71AC(Local_124.f_2[iVar1 /*10*/].f_1))
					{
						if (!func_24(Local_124.f_2[iVar1 /*10*/].f_1))
						{
							if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
							{
								if (func_1221() == Local_124.f_218)
								{
									if (func_1193(unk_0x8A437068C87289B7(Local_124.f_2[iVar1 /*10*/].f_1)))
									{
										unk_0x191DDA30577F440A(&(Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_2), iVar1);
									}
								}
							}
						}
					}
				}
			}
			if (!unk_0x234B68AC2E35ED5A(Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_3, iVar1))
			{
				if (!unk_0x234B68AC2E35ED5A(Local_124.f_208, iVar1))
				{
					if (unk_0x159BC3DDA80D71AC(Local_124.f_2[iVar1 /*10*/].f_2))
					{
						if (func_1192(iVar1))
						{
							unk_0x191DDA30577F440A(&(Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_3), iVar1);
						}
					}
				}
			}
			if (!unk_0x234B68AC2E35ED5A(Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_4, iVar1))
			{
				if (!unk_0x234B68AC2E35ED5A(Local_124.f_207, iVar1))
				{
					if (unk_0x159BC3DDA80D71AC(Local_124.f_2[iVar1 /*10*/].f_1))
					{
						if (!func_24(Local_124.f_2[iVar1 /*10*/].f_1))
						{
							if (unk_0x3E72EB0926A107F9(unk_0xD6E677FAD7521410(unk_0x8A437068C87289B7(Local_124.f_2[iVar1 /*10*/].f_1), 1), 10f, 1))
							{
								unk_0x191DDA30577F440A(&(Local_125[unk_0xDD0E57E73E5C4BF6() /*11*/].f_4), iVar1);
							}
						}
					}
				}
			}
		}
		if (func_548())
		{
			if (!func_440())
			{
				if (unk_0x234B68AC2E35ED5A(Local_124.f_1, 13))
				{
					func_1189(Local_124.f_2[iVar1 /*10*/].f_1, &(Local_145[iVar1 /*8*/]), -1082130432, 0, 1, 0, 0, -1, -1, 1, 0);
				}
			}
			else if (unk_0x159BC3DDA80D71AC(Local_124.f_2[iVar1 /*10*/].f_1))
			{
				if (!func_24(Local_124.f_2[iVar1 /*10*/].f_1))
				{
					if (!unk_0xC49311A2A500FF09(unk_0x8A437068C87289B7(Local_124.f_2[iVar1 /*10*/].f_1), 0))
					{
						func_1189(Local_124.f_2[iVar1 /*10*/].f_1, &(Local_145[iVar1 /*8*/]), -1082130432, 0, 0, 0, 0, -1, -1, 1, 0);
					}
				}
				else
				{
					func_1189(Local_124.f_2[iVar1 /*10*/].f_1, &(Local_145[iVar1 /*8*/]), -1082130432, 0, 0, 0, 0, -1, -1, 1, 0);
				}
			}
		}
		switch (Local_124.f_2[iVar1 /*10*/].f_9)
		{
			case 1:
				if (unk_0x443E2CA72E118E64())
				{
					if (unk_0x159BC3DDA80D71AC(Local_124.f_2[iVar1 /*10*/].f_2))
					{
						if (func_13(Local_124.f_2[iVar1 /*10*/].f_2))
						{
							if (!func_24(Local_124.f_2[iVar1 /*10*/].f_1))
							{
								if (unk_0x2C10A11A684CFE96(unk_0x8A437068C87289B7(Local_124.f_2[iVar1 /*10*/].f_1), unk_0x854C404AEB476240(Local_124.f_2[iVar1 /*10*/].f_2)))
								{
									uVar3 = unk_0x8A437068C87289B7(Local_124.f_2[iVar1 /*10*/].f_1);
									if (func_27(&uVar3))
									{
										if (unk_0x4E8DA737B686529A(unk_0x8A437068C87289B7(Local_124.f_2[iVar1 /*10*/].f_1), -258271821) != 1 && unk_0x4E8DA737B686529A(unk_0x8A437068C87289B7(Local_124.f_2[iVar1 /*10*/].f_1), -258271821) != 0)
										{
											unk_0x0509CE092AC81B7C(unk_0x8A437068C87289B7(Local_124.f_2[iVar1 /*10*/].f_1), unk_0x854C404AEB476240(Local_124.f_2[iVar1 /*10*/].f_2), 25f, 786603);
										}
									}
								}
							}
						}
					}
				}
				break;
			
			case 2:
				if (unk_0x443E2CA72E118E64())
				{
					if (unk_0x159BC3DDA80D71AC(Local_124.f_2[iVar1 /*10*/].f_2))
					{
						if (unk_0x159BC3DDA80D71AC(Local_124.f_2[iVar1 /*10*/].f_1))
						{
							if (func_13(Local_124.f_2[iVar1 /*10*/].f_2))
							{
								if (!func_24(Local_124.f_2[iVar1 /*10*/].f_1))
								{
									if (unk_0x2C10A11A684CFE96(unk_0x8A437068C87289B7(Local_124.f_2[iVar1 /*10*/].f_1), unk_0x854C404AEB476240(Local_124.f_2[iVar1 /*10*/].f_2)))
									{
										if ((unk_0x4E8DA737B686529A(unk_0x8A437068C87289B7(Local_124.f_2[iVar1 /*10*/].f_1), -258271821) != 1 && unk_0x4E8DA737B686529A(unk_0x8A437068C87289B7(Local_124.f_2[iVar1 /*10*/].f_1), -258271821) != 0) || unk_0x234B68AC2E35ED5A(Local_124.f_204, iVar1))
										{
											unk_0x0509CE092AC81B7C(unk_0x8A437068C87289B7(Local_124.f_2[iVar1 /*10*/].f_1), unk_0x854C404AEB476240(Local_124.f_2[iVar1 /*10*/].f_2), 30f, 786469);
											if (unk_0x234B68AC2E35ED5A(Local_124.f_204, iVar1))
											{
												unk_0xC664C0067EEAB8D1(&(Local_124.f_204), iVar1);
											}
										}
									}
								}
							}
						}
					}
				}
				break;
			
			case 3:
				if (unk_0x159BC3DDA80D71AC(Local_124.f_2[iVar1 /*10*/].f_1))
				{
					if (!func_24(Local_124.f_2[iVar1 /*10*/].f_1))
					{
						iVar2 = unk_0x4E8DA737B686529A(unk_0x8A437068C87289B7(Local_124.f_2[iVar1 /*10*/].f_1), -828834893);
						if (iVar2 != 1 && iVar2 != 0)
						{
							if (func_279(Local_124.f_2[iVar1 /*10*/].f_1))
							{
								unk_0xBE91B077ADADE97F(unk_0x8A437068C87289B7(Local_124.f_2[iVar1 /*10*/].f_1), 1);
								unk_0xCC5ED49CF9C9215F(unk_0x8A437068C87289B7(Local_124.f_2[iVar1 /*10*/].f_1), 0, 0);
							}
						}
					}
				}
				break;
			
			case 5:
				break;
			
			case 4:
				break;
			
			case 7:
				if (unk_0x159BC3DDA80D71AC(Local_124.f_2[iVar1 /*10*/].f_1))
				{
					if (!func_24(Local_124.f_2[iVar1 /*10*/].f_1))
					{
						iVar2 = unk_0x4E8DA737B686529A(unk_0x8A437068C87289B7(Local_124.f_2[iVar1 /*10*/].f_1), -1442466670);
						if (iVar2 != 1 && iVar2 != 0)
						{
							if (func_279(Local_124.f_2[iVar1 /*10*/].f_1))
							{
								if (unk_0xB364346471C3B028(Local_124.f_2[iVar1 /*10*/].f_1))
								{
									unk_0xBE91B077ADADE97F(unk_0x8A437068C87289B7(Local_124.f_2[iVar1 /*10*/].f_1), 0);
									unk_0x99EBE9AD8C344773(unk_0x8A437068C87289B7(Local_124.f_2[iVar1 /*10*/].f_1), 299f, 0);
								}
							}
						}
					}
				}
				break;
			
			case 6:
				if (unk_0x159BC3DDA80D71AC(Local_124.f_2[iVar1 /*10*/].f_1))
				{
					if (!func_24(Local_124.f_2[iVar1 /*10*/].f_1))
					{
						iVar2 = unk_0x4E8DA737B686529A(unk_0x8A437068C87289B7(Local_124.f_2[iVar1 /*10*/].f_1), 1120685857);
						if (iVar2 != 1 && iVar2 != 0)
						{
							unk_0xBE91B077ADADE97F(unk_0x8A437068C87289B7(Local_124.f_2[iVar1 /*10*/].f_1), 0);
							Var0 = { func_208() };
							unk_0x52E6B1ACC4B9D6DC(unk_0x8A437068C87289B7(Local_124.f_2[iVar1 /*10*/].f_1), Var0, 250f, 0);
						}
					}
				}
				break;
		}
		iVar1++;
	}
	func_1188();
}

void func_1188()
{
	if (unk_0x159BC3DDA80D71AC(Local_124.f_2[iLocal_321 /*10*/].f_1))
	{
		if (!func_24(Local_124.f_2[iLocal_321 /*10*/].f_1))
		{
			if (!unk_0x234B68AC2E35ED5A(uLocal_320, iLocal_321))
			{
				unk_0xEE46C75CC4278490(Local_124.f_2[iLocal_321 /*10*/].f_1, 1);
				unk_0x191DDA30577F440A(&iLocal_320, iLocal_321);
			}
		}
	}
	iLocal_321++;
	if (iLocal_321 == 10)
	{
		iLocal_321 = 0;
	}
}

void func_1189(var uParam0, var uParam1, float fParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10)
{
	if (unk_0xB7D6400C89373777(uParam0))
	{
		if (func_194())
		{
			Global_2441237 = unk_0x1146A9AE09CE2B14();
		}
		if (bParam3)
		{
			func_1191(unk_0x8A437068C87289B7(uParam0), uParam1, 1, Global_2441237, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9, iParam10);
		}
		else
		{
			func_1191(unk_0x8A437068C87289B7(uParam0), uParam1, -1, Global_2441237, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9, iParam10);
		}
	}
	else if (unk_0x575B7C28D81C0B4D(*uParam1))
	{
		func_1190(uParam1);
	}
}

void func_1190(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0x575B7C28D81C0B4D(*uParam0))
	{
		unk_0x1AD5BCFEC31BB8D9(uParam0);
		bVar0 = true;
	}
	if (unk_0x575B7C28D81C0B4D(uParam0->f_1))
	{
		unk_0x1AD5BCFEC31BB8D9(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0x419E13582192CFEA(uParam0->f_7))
	{
		if (!unk_0xE50EB54E0F21BED0(uParam0->f_7, 0))
		{
			if (unk_0x91D137360A62E65D(uParam0->f_7))
			{
				unk_0x3AC990743D2354F7(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

int func_1191(int iParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, var uParam11)
{
	bool bVar0;
	
	if (iParam3 == 0)
	{
		iParam3 = unk_0x638BDC79E655C1C2();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0xECEC7528A52B4EE8(uParam0))
	{
		if (!unk_0x91D137360A62E65D(iParam0))
		{
			bVar0 = true;
			if (unk_0x6A86865E010A134F(iParam0) && uParam11)
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				if (iParam8 == -1)
				{
					unk_0x3AC990743D2354F7(iParam0, 1);
				}
				else
				{
					unk_0x69C541DE38607868(iParam0, 1, iParam8);
				}
				uParam1->f_7 = iParam0;
				unk_0x1934F7E4E24F3FA5(iParam0, iParam2);
				unk_0xF7DBAEA10D027AEE(iParam0, fParam6);
				if (unk_0x575B7C28D81C0B4D(*uParam1))
				{
					unk_0xC5BBAB0F8336ECB7(*uParam1, 7);
				}
			}
		}
		if (!iParam9 == -1)
		{
			unk_0xA83471E5EF1B0F8F(iParam0, iParam9);
		}
		unk_0x5587484C0CD0306E(iParam0, uParam4);
		unk_0x4846DFBEB498024C(iParam0, uParam5);
		*uParam1 = unk_0xC9B8E88428C4C45A(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0x575B7C28D81C0B4D(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0xFA3E6ADC3E5D386E(*uParam1, iParam8);
				}
				if (!unk_0xAB6A270F84A8781E(uParam7))
				{
					unk_0x0702C81DAF64325D("STRING");
					if (bParam10)
					{
						unk_0xA91D83F2CC1345A6(sParam7);
					}
					else
					{
						unk_0x1896EC0B030A48A2(sParam7);
					}
					unk_0x5AC2C33175100EF3(*uParam1);
				}
				unk_0xC5BBAB0F8336ECB7(*uParam1, 7);
			}
		}
		if (!unk_0x234B68AC2E35ED5A(uParam1->f_6, 2))
		{
			if (unk_0x575B7C28D81C0B4D(*uParam1))
			{
				unk_0x191DDA30577F440A(&(uParam1->f_6), 2);
			}
		}
		if (unk_0xC49311A2A500FF09(iParam0, 0))
		{
			uParam1->f_1 = unk_0xA4920568F5B9D8E9(iParam0);
			if (!unk_0x234B68AC2E35ED5A(uParam1->f_6, 3))
			{
				if (unk_0x575B7C28D81C0B4D(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						unk_0xFA3E6ADC3E5D386E(uParam1->f_1, iParam8);
					}
					if (!unk_0xAB6A270F84A8781E(sParam7))
					{
						unk_0x0702C81DAF64325D("STRING");
						if (bParam10)
						{
							unk_0xA91D83F2CC1345A6(sParam7);
						}
						else
						{
							unk_0x1896EC0B030A48A2(sParam7);
						}
						unk_0x5AC2C33175100EF3(uParam1->f_1);
					}
					unk_0xC5BBAB0F8336ECB7(uParam1->f_1, 7);
					unk_0x191DDA30577F440A(&(uParam1->f_6), 3);
				}
			}
			else if (!unk_0x575B7C28D81C0B4D(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				unk_0xC664C0067EEAB8D1(&(uParam1->f_6), 3);
			}
		}
		else if (unk_0x575B7C28D81C0B4D(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0xC664C0067EEAB8D1(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_1192(int iParam0)
{
	if (unk_0x159BC3DDA80D71AC(Local_124.f_2[iParam0 /*10*/].f_2))
	{
		if (func_13(Local_124.f_2[iParam0 /*10*/].f_2))
		{
			if (unk_0x0D628BB90DA6214A(unk_0x854C404AEB476240(Local_124.f_2[iParam0 /*10*/].f_2), 0, 7000) || unk_0x0D628BB90DA6214A(unk_0x854C404AEB476240(Local_124.f_2[iParam0 /*10*/].f_2), 1, 40000))
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

int func_1193(var uParam0)
{
	var uVar0;
	var uVar1;
	
	if (unk_0x87BE50F80F3FCEAB(unk_0x1146A9AE09CE2B14(), uParam0))
	{
		return 1;
	}
	if (unk_0x4140085B99B17F97(unk_0x1146A9AE09CE2B14(), uParam0))
	{
		return 1;
	}
	if (func_1194())
	{
		if (unk_0xE5B011B4A813BDC4(unk_0x1146A9AE09CE2B14(), &uVar0))
		{
			if (unk_0xA2CCAAC7F5CA3F49(uVar0))
			{
				uVar1 = unk_0xFAA5505029C4B5A6(iVar0);
				if (unk_0x419E13582192CFEA(uVar1))
				{
					if (!unk_0xE50EB54E0F21BED0(iVar1, 0))
					{
						if (unk_0xC49311A2A500FF09(iVar1, 0))
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

bool func_1194()
{
	return Global_1574419;
}

int func_1195(bool bParam0)
{
	if (!func_1199(unk_0x1146A9AE09CE2B14(), 3) && func_1198(1))
	{
		return 1;
	}
	if (Global_2544210.f_5191.f_42)
	{
		Global_2544210.f_5191.f_42 = 0;
		return 1;
	}
	if (bParam0)
	{
		if (func_387() == func_57() || !func_1340(func_387(), 0, 1))
		{
			return 1;
		}
	}
	if (func_1199(unk_0x1146A9AE09CE2B14(), 1) && !func_571(unk_0x1146A9AE09CE2B14()))
	{
		if (func_1196())
		{
			return 1;
		}
	}
	return 0;
}

int func_1196()
{
	if (func_155(unk_0x1146A9AE09CE2B14()) && func_1197())
	{
		return 1;
	}
	if (func_550())
	{
		return 1;
	}
	return 0;
}

int func_1197()
{
	switch (func_152(func_153(unk_0x1146A9AE09CE2B14())))
	{
		case 11:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_1198(bool bParam0)
{
	bool bVar0;
	
	if (!func_671(1) && func_387() != unk_0x1146A9AE09CE2B14())
	{
		bVar0 = false;
		if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_57 != func_57())
		{
			if (func_1340(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_57, 0, 1))
			{
				if ((Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_24 == 4 || Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_24 == 8) || Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_24 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_450(func_248(unk_0x1146A9AE09CE2B14())) == 0 || func_450(func_248(unk_0x1146A9AE09CE2B14())) == 3)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_489(31);
				if (func_465(func_248(unk_0x1146A9AE09CE2B14())))
				{
					func_489(81);
				}
				if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_57 != func_57() && unk_0x8CFC2F41A749E236(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_57))
				{
					Global_1627034 = func_611(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_57, -2, 0, 0, 0);
					if (!func_386(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_57))
					{
						func_489(88);
					}
				}
				else
				{
					Global_1627034 = 1;
				}
				Global_1627018 = { Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_105 };
			}
			return 1;
		}
	}
	return 0;
}

int func_1199(int iParam0, int iParam1)
{
	if (func_249(iParam0, 0))
	{
		return func_450(Global_1630816[iParam0 /*597*/].f_11.f_33) == iParam1;
	}
	return 0;
}

void func_1200()
{
	if (!func_1201(unk_0x1146A9AE09CE2B14()))
	{
		func_253(25);
	}
}

bool func_1201(int iParam0)
{
	return func_252(iParam0, 25);
}

void func_1202()
{
	int iVar0;
	
	iVar0 = func_323(unk_0x1146A9AE09CE2B14());
	iLocal_150 = func_321(iVar0);
}

void func_1203(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	float fVar0;
	
	if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_33 != iParam0)
	{
		func_1217(-1);
		Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_33 = iParam0;
		if (func_1216() != -1)
		{
			func_1215(-1);
		}
		if (func_1214() != -1)
		{
			func_1213(-1);
		}
		func_1212(iParam2);
		func_1210(iParam0);
		if (!func_263(iParam0))
		{
			fVar0 = func_261(iParam0);
			if (fVar0 != 1f)
			{
				func_258(fVar0);
				unk_0x191DDA30577F440A(&(Global_1681713.f_3), 1);
			}
		}
		if (!func_266(iParam0) || iParam3)
		{
			if (func_264(iParam0, iParam2) && iParam3 == 1)
			{
				unk_0x20D884FB6567BAD5(0);
				if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
				{
					unk_0xD63E470D46B4F8A5(unk_0x1146A9AE09CE2B14(), 0, 0);
					unk_0x87524F5C1E0857AB(unk_0x1146A9AE09CE2B14(), 0);
				}
				unk_0x191DDA30577F440A(&(Global_1681713.f_3), 0);
			}
			else if (unk_0x8E9D6E2DA3B756D5() < 5)
			{
				unk_0x5E84945E26CAEF1F(1f);
				unk_0x20D884FB6567BAD5(5);
			}
		}
		if (func_437())
		{
			func_253(27);
		}
		if (bParam1)
		{
			if (!func_431())
			{
				func_255(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((unk_0x234B68AC2E35ED5A(Global_2544210.f_4622, 1) || unk_0x234B68AC2E35ED5A(Global_2544210.f_4622, 4)) || unk_0x234B68AC2E35ED5A(Global_2544210.f_4622, 0))
			{
				func_489(6);
			}
			func_1209();
		}
		if (((iParam0 == 164 || iParam0 == 208) || iParam0 == 250) || iParam0 == 237)
		{
			unk_0xE63D792F88BFF242(3, 0);
			unk_0xE63D792F88BFF242(5, 0);
		}
		if (func_277(unk_0x1146A9AE09CE2B14()) && func_271(unk_0x1146A9AE09CE2B14()))
		{
			unk_0x191DDA30577F440A(&(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_1), 8);
		}
		func_1205();
		if (func_1204(iParam0))
		{
			unk_0xE63D792F88BFF242(3, 0);
			unk_0xE63D792F88BFF242(5, 0);
			unk_0x191DDA30577F440A(&(Global_1681713.f_3), 6);
		}
		Global_2544210.f_6682 = 0;
	}
}

int func_1204(int iParam0)
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

void func_1205()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	uVar3 = func_1208();
	iVar2 = func_58(unk_0x1146A9AE09CE2B14());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0xC502CD39B4994F3A(iVar0);
		if (unk_0x8CFC2F41A749E236(iVar1))
		{
			if (func_352(iVar1, iVar2, 1) || func_1206(iVar1, unk_0x1146A9AE09CE2B14()))
			{
				unk_0xAA7E522FFB31B2B3(unk_0x1146A9AE09CE2B14(), iVar1, uVar3);
				unk_0xAA7E522FFB31B2B3(iVar1, unk_0x1146A9AE09CE2B14(), uVar3);
			}
		}
		iVar0++;
	}
}

int func_1206(int iParam0, int iParam1)
{
	if (func_319(iParam0, 1) && func_319(iParam1, 1))
	{
		return (func_1207(iParam0) == func_58(iParam1) || func_1207(iParam1) == func_58(iParam0));
	}
	return 0;
}

int func_1207(int iParam0)
{
	if (func_319(iParam0, 1))
	{
		return Global_1630816[func_58(iParam0) /*597*/].f_11.f_459;
	}
	return func_57();
}

int func_1208()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_673();
	if (iVar0 != func_57())
	{
		if (func_1340(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return unk_0x234B68AC2E35ED5A(Global_1630816[iVar1 /*597*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_1209()
{
	if (unk_0x234B68AC2E35ED5A(Global_2544210.f_4622, 1))
	{
		unk_0xC664C0067EEAB8D1(&(Global_2544210.f_4622), 1);
	}
	if (unk_0x234B68AC2E35ED5A(Global_2544210.f_4622, 4))
	{
		unk_0xC664C0067EEAB8D1(&(Global_2544210.f_4622), 4);
	}
	if (unk_0x234B68AC2E35ED5A(Global_2544210.f_4622, 6))
	{
		unk_0xC664C0067EEAB8D1(&(Global_2544210.f_4622), 6);
	}
	unk_0xC664C0067EEAB8D1(&(Global_2544210.f_4622), 0);
	unk_0xC664C0067EEAB8D1(&(Global_2544210.f_4622), 2);
	unk_0xC664C0067EEAB8D1(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_873), 17);
	if (Global_2544210.f_4624 > 0)
	{
		unk_0x20D884FB6567BAD5(Global_2544210.f_4624);
	}
	Global_2544210.f_4623 = 0;
}

void func_1210(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_526(3793, -1, 0);
	iVar1 = func_1211(iParam0);
	if (iVar1 != -1)
	{
		unk_0x191DDA30577F440A(&iVar0, iVar1);
		func_525(3793, iVar0, -1, 1, 0);
	}
}

int func_1211(int iParam0)
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

void func_1212(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x1146A9AE09CE2B14();
	if (Global_1630816[iVar0 /*597*/].f_11.f_182 != iParam0)
	{
		Global_1630816[iVar0 /*597*/].f_11.f_182 = iParam0;
	}
}

void func_1213(int iParam0)
{
	if (Global_2544210.f_5191.f_343 != iParam0)
	{
		Global_2544210.f_5191.f_343 = iParam0;
	}
}

int func_1214()
{
	return Global_2544210.f_5191.f_343;
}

void func_1215(int iParam0)
{
	if (Global_2544210.f_5191.f_342 != iParam0)
	{
		Global_2544210.f_5191.f_342 = iParam0;
	}
}

int func_1216()
{
	return Global_2544210.f_5191.f_342;
}

void func_1217(int iParam0)
{
	Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_32 = iParam0;
}

int func_1218()
{
	struct<4> Var0;
	int iVar1;
	
	if (Local_124.f_196 != -1)
	{
		return Local_124.f_196;
	}
	Var0 = { func_1219() };
	Local_124.f_198 = func_546(Var0);
	Local_124.f_197 = (Var0 - 1);
	if (Local_124.f_197 < 0)
	{
		Local_124.f_197 = 0;
	}
	if (Local_124.f_196 == -1)
	{
		iVar1 = unk_0xB36B8558948EA7A8(0, 10);
		if (iVar1 > 7)
		{
			Local_124.f_196 = 99;
		}
		else
		{
			Local_124.f_196 = 0;
		}
		if (Global_262145.f_15398 && Local_124.f_196 == 0)
		{
			Local_124.f_196 = 99;
		}
		else if (Global_262145.f_15397 && Local_124.f_196 == 99)
		{
			Local_124.f_196 = 0;
		}
	}
	return Local_124.f_196;
}

struct<4> func_1219()
{
	return Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_183;
}

int func_1220()
{
	int iVar0;
	
	iVar0 = func_1221();
	if (iVar0 > -1)
	{
		if (Local_124.f_218 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_1221()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0xDD0E57E73E5C4BF6();
	iVar1 = unk_0x1146A9AE09CE2B14();
	if (func_34(unk_0x1146A9AE09CE2B14(), 0))
	{
		iVar0 = func_439();
		iVar1 = Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_755;
	}
	if (Local_125[iVar0 /*11*/].f_10 != -1)
	{
		return Local_125[iVar0 /*11*/].f_10;
	}
	if (func_270(iVar1))
	{
		Local_125[iVar0 /*11*/].f_10 = iVar0;
		if (iVar0 == Local_124.f_218)
		{
			func_981(1);
		}
	}
	else if (func_319(iVar1, 1))
	{
		iVar2 = func_673();
		if (iVar2 != func_57())
		{
			if (unk_0xFCC26BA7572E9F1F(iVar2))
			{
				Local_125[iVar0 /*11*/].f_10 = unk_0x4645C707A0067CB6(iVar2);
			}
		}
	}
	return Local_125[iVar0 /*11*/].f_10;
}

int func_1222()
{
	if (func_440())
	{
		if (!func_65())
		{
			return 0;
		}
	}
	return 1;
}

int func_1223()
{
	return Local_124;
}

int func_1224(int iParam0)
{
	return Local_125[iParam0 /*11*/];
}

int func_1225()
{
	var uVar0;
	
	func_1230(&uVar0);
	if (Global_1312878 == 0)
	{
		if (!unk_0x02BFF15CAA701972())
		{
			return 1;
		}
	}
	if (func_1229())
	{
		return 1;
	}
	if (Global_2465749)
	{
		return 1;
	}
	if (func_1228())
	{
		return 1;
	}
	if (func_1227(159))
	{
		if (!func_1226())
		{
			return 1;
		}
	}
	if (func_1227(157))
	{
		return 1;
	}
	if (!unk_0x0B4295B1608BB934())
	{
		return 1;
	}
	if (func_259() != 0)
	{
		if (unk_0x636F1F53CC61D2C9(func_259()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1226()
{
	return Global_2453009.f_698;
}

int func_1227(int iParam0)
{
	if (unk_0x7B95B829DF1701E0(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_1228()
{
	return Global_2463497;
}

bool func_1229()
{
	return Global_2453009.f_693;
}

void func_1230(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	
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
					func_1231(iVar0);
					break;
				
				case -1320260596:
					unk_0x53858F1E03A88AE1(1, iVar0, &Var3, 4);
					if (Var3.f_2 == -2138305833)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_1231(int iParam0)
{
	struct<3> Var0;
	var uVar1;
	var uVar2;
	bool bVar3;
	
	if (unk_0x53858F1E03A88AE1(1, iParam0, &Var0, 3))
	{
		if (func_1340(Var0.f_1, 1, 1))
		{
			uVar1 = unk_0xD56332194D622ECE(Var0.f_1);
			if (unk_0x419E13582192CFEA(uVar1))
			{
				if (unk_0xC49311A2A500FF09(iVar1, 0))
				{
					uVar2 = unk_0x75B58B38E45C6F9A(iVar1, 0);
					if (unk_0xF2A0B4A5DE0987FB(uVar2, Var0.f_2) && unk_0x8ED8428AB65B7367())
					{
						if (func_1232(uVar2, &bVar3))
						{
							unk_0x2B360ED559ED11A6(uVar2, Var0.f_2);
						}
						if (bVar3)
						{
							unk_0x795957CD3A0042C8(&uVar2);
						}
					}
				}
			}
		}
	}
}

int func_1232(int iParam0, var uParam1)
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

void func_1233()
{
	wait(0);
}

void func_1234()
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (!func_34(unk_0x1146A9AE09CE2B14(), 0))
	{
		if (unk_0x234B68AC2E35ED5A(iLocal_126, 18))
		{
			if (!unk_0x234B68AC2E35ED5A(iLocal_126, 6))
			{
				if (unk_0x02BFF15CAA701972())
				{
					if (func_1220() || func_438())
					{
						func_801(0, 4, 0, 0, -1, -1, -1, -1, -1, 0);
						unk_0x191DDA30577F440A(&iLocal_126, 6);
					}
				}
			}
			uVar0 = Local_124.f_196;
			iVar1 = -1;
			iVar2 = -1;
			iVar3 = Local_124.f_197 + 1;
			iVar4 = Local_124.f_198;
			iVar5 = -1;
			bVar6 = !func_440();
			iVar7 = -1;
			iVar8 = 0;
			iVar9 = 0;
			iVar5 = Local_124.f_213;
			if (unk_0x234B68AC2E35ED5A(Local_124.f_1, 1) || unk_0x234B68AC2E35ED5A(Local_124.f_1, 4))
			{
				iVar7 = 2;
			}
			else if (unk_0x234B68AC2E35ED5A(Local_124.f_1, 8))
			{
				iVar7 = 1;
			}
			else if (((unk_0x234B68AC2E35ED5A(Local_124.f_1, 3) || unk_0x234B68AC2E35ED5A(Local_124.f_1, 9)) || unk_0x234B68AC2E35ED5A(Local_124.f_1, 15)) || unk_0x234B68AC2E35ED5A(Local_124.f_1, 5))
			{
				iVar7 = 0;
			}
			if (unk_0x02BFF15CAA701972())
			{
				Global_1681722.f_2 = Local_124.f_267;
				Global_1681722.f_3 = Local_124.f_268;
				func_1280(uVar0, iVar1, iVar2, iVar3, iVar4, iVar5, iVar7, iVar8, iVar9, bVar6);
			}
		}
	}
	func_488();
	if (unk_0x5FB5CBC5FDADA3C9(unk_0x7D2B9E6A64637269()) == iLocal_131)
	{
		unk_0x2271ED1E65FB75EE(unk_0x7D2B9E6A64637269(), uLocal_133);
	}
	if (unk_0x02BFF15CAA701972())
	{
		if (unk_0x443E2CA72E118E64())
		{
			unk_0xE6B53A6E51AAA49F(Local_124.f_261, 1);
		}
		func_485();
	}
	func_1279();
	if (Local_124.f_219 != -1)
	{
		if (unk_0x234B68AC2E35ED5A(iLocal_126, 5))
		{
			if (unk_0x8CFC2F41A749E236(unk_0xC502CD39B4994F3A(Local_124.f_219)))
			{
				func_483(unk_0xC502CD39B4994F3A(Local_124.f_219), 432, 0, 0);
				func_482(unk_0xC502CD39B4994F3A(Local_124.f_219), 1, 0, 0);
				func_481(unk_0xC502CD39B4994F3A(Local_124.f_219), 0, 0, 0);
				func_480(unk_0xC502CD39B4994F3A(Local_124.f_219), 0);
				func_477(unk_0xC502CD39B4994F3A(Local_124.f_219), Global_262145.f_12533, 0, 0);
			}
		}
	}
	if (func_223(0))
	{
		func_222(0);
	}
	if (unk_0x234B68AC2E35ED5A(iLocal_127, 0))
	{
		if (!unk_0x234B68AC2E35ED5A(iLocal_127, 2))
		{
			unk_0x8FF71A24509DA743("DisableFlightMusic", 0);
			unk_0x8FF71A24509DA743("WantedMusicDisabled", 0);
		}
	}
	unk_0x191DDA30577F440A(&iLocal_127, 8);
	func_218();
	unk_0x2A385285C52FE593(1);
	func_981(0);
	func_1278(&(Local_124.f_269), 1);
	func_1236(1, 0);
	if (!func_34(unk_0x1146A9AE09CE2B14(), 0))
	{
		unk_0x20D884FB6567BAD5(5);
	}
	func_1235();
}

void func_1235()
{
	unk_0x4BFE89D21F9885DC();
}

void func_1236(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_1368721.f_1.f_108 != 0)
	{
		Global_1368721.f_1.f_108 = 0;
	}
	Global_1368721.f_1.f_109 = -1;
	Global_1368721.f_1.f_110 = -1;
	if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_33 == 167 || Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_33 == 168)
	{
		func_1276();
		unk_0xC664C0067EEAB8D1(&(Global_1681713.f_3), 4);
	}
	if ((func_650() && iParam1 != 0) && Global_262145.f_17160)
	{
		if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_33 == 190 || Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_33 == 192)
		{
			func_1258(unk_0x1146A9AE09CE2B14(), iParam1, 1, 0);
		}
	}
	if (((Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_33 == 164 || Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_33 == 208) || Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_33 == 250) || Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_33 == 237)
	{
		unk_0xE63D792F88BFF242(3, 1);
		unk_0xE63D792F88BFF242(5, 1);
	}
	if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_33 != -1)
	{
		Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_33 = -1;
		if (!unk_0x234B68AC2E35ED5A(Global_1574671.f_1, 14) && !func_277(unk_0x1146A9AE09CE2B14()))
		{
			func_255(0);
		}
	}
	else if (func_1256(unk_0x1146A9AE09CE2B14()) != -1)
	{
		func_1217(-1);
	}
	func_1255(func_57());
	if (func_223(16))
	{
		func_222(16);
	}
	func_1252(0);
	func_1212(-1);
	func_1251();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_1249(iVar0);
		iVar0++;
	}
	if (unk_0x234B68AC2E35ED5A(Global_1681713.f_3, 0))
	{
		unk_0x5E84945E26CAEF1F(1f);
		unk_0x20D884FB6567BAD5(5);
		unk_0xC664C0067EEAB8D1(&(Global_1681713.f_3), 0);
	}
	if (unk_0x234B68AC2E35ED5A(Global_1681713.f_3, 5))
	{
		unk_0xC664C0067EEAB8D1(&(Global_1681713.f_3), 5);
	}
	iVar1 = func_472();
	if ((func_349(iVar1) || iVar1 == 205) || iVar1 == 210)
	{
		func_1248(-1);
	}
	else if (((iVar1 == 201 || iVar1 == 200) || iVar1 == 179) || func_448(iVar1))
	{
		func_1245(-1, 1);
	}
	else if (((((func_471(iVar1) || func_1244(iVar1)) || func_1243(iVar1)) || func_579(iVar1)) || func_577(iVar1)) || func_575(iVar1))
	{
	}
	else
	{
		func_1245(-1, 1);
	}
	func_251(19);
	func_251(20);
	func_251(21);
	func_251(22);
	func_251(27);
	func_222(3);
	func_222(4);
	func_222(7);
	func_1242();
	if (func_271(unk_0x1146A9AE09CE2B14()))
	{
		func_981(0);
	}
	func_251(29);
	Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_57 = func_57();
	if (Global_2544210.f_5191.f_42 != 0)
	{
		Global_2544210.f_5191.f_42 = 0;
	}
	if (bParam0)
	{
		func_224();
	}
	if (!func_277(unk_0x1146A9AE09CE2B14()))
	{
		func_250();
		unk_0xC664C0067EEAB8D1(&(Global_1681713.f_3), 1);
	}
	if (unk_0x234B68AC2E35ED5A(Global_1681713.f_3, 6))
	{
		unk_0xE63D792F88BFF242(3, 1);
		unk_0xE63D792F88BFF242(5, 1);
		unk_0xC664C0067EEAB8D1(&(Global_1681713.f_3), 6);
	}
	if (unk_0x234B68AC2E35ED5A(Global_1681713.f_3, 7))
	{
		unk_0xC664C0067EEAB8D1(&(Global_1681713.f_3), 7);
	}
	if (unk_0x234B68AC2E35ED5A(Global_1681713.f_3, 8))
	{
		func_1241("IMPEXP_SELFDES", 0);
		func_1239("IMPEXP_SELFDES");
		unk_0xC664C0067EEAB8D1(&(Global_1681713.f_3), 8);
	}
	func_1237(iVar1, 0);
}

void func_1237(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x234B68AC2E35ED5A(Global_1681713.f_3, 9))
		{
			unk_0xB84B43B766630B5C(func_1238(iParam0));
			unk_0x191DDA30577F440A(&(Global_1681713.f_3), 9);
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Global_1681713.f_3, 9))
	{
		unk_0xC0BBE340BE2AA02D(func_1238(iParam0));
		unk_0xC664C0067EEAB8D1(&(Global_1681713.f_3), 9);
	}
}

char* func_1238(int iParam0)
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

void func_1239(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x4030103C8B148AFC(&(Global_112293.f_14139[iVar0 /*104*/])))
		{
			if (unk_0xDA654EB115F9FF7D(&(Global_112293.f_14139[iVar0 /*104*/]), sParam0))
			{
				if (Global_112293.f_14139[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					func_969();
					Global_112293.f_14139[iVar0 /*104*/].f_99[Global_19798] = 0;
					if (func_1240(iVar0))
					{
					}
					else
					{
						Global_112293.f_14139[iVar0 /*104*/].f_24 = 0;
						Global_112293.f_14139[iVar0 /*104*/].f_28 = 0;
						Global_112293.f_14139[iVar0 /*104*/].f_29 = 0;
					}
					unk_0xAE77D1668DA754A8(Global_112293.f_14139[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

int func_1240(int iParam0)
{
	if ((Global_112293.f_14139[iParam0 /*104*/].f_99[0] == 1 || Global_112293.f_14139[iParam0 /*104*/].f_99[1] == 1) || Global_112293.f_14139[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_1241(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x4030103C8B148AFC(&(Global_112293.f_14139[iVar0 /*104*/])))
		{
			if (unk_0xDA654EB115F9FF7D(&(Global_112293.f_14139[iVar0 /*104*/]), sParam0))
			{
				if (Global_112293.f_14139[iVar0 /*104*/].f_24 == 0)
				{
				}
				Global_112293.f_14139[iVar0 /*104*/].f_24 = 1;
				if (Global_112293.f_14139[iVar0 /*104*/].f_25 == 1)
				{
					if (Global_112293.f_14139[iVar0 /*104*/].f_99[0] == 1)
					{
						Global_112293.f_14049[0 /*20*/].f_17 = 0;
					}
					if (Global_112293.f_14139[iVar0 /*104*/].f_99[1] == 1)
					{
						Global_112293.f_14049[1 /*20*/].f_17 = 0;
					}
					if (Global_112293.f_14139[iVar0 /*104*/].f_99[2] == 1)
					{
						Global_112293.f_14049[2 /*20*/].f_17 = 0;
					}
					if (Global_112293.f_14139[iVar0 /*104*/].f_99[3] == 1)
					{
						Global_112293.f_14049[3 /*20*/].f_17 = 0;
					}
					Global_112293.f_14139[iVar0 /*104*/].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_112293.f_14139[iVar0 /*104*/].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_1242()
{
	if (func_1201(unk_0x1146A9AE09CE2B14()))
	{
		func_251(25);
	}
}

int func_1243(int iParam0)
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

int func_1244(int iParam0)
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

void func_1245(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_472();
	}
	if (iParam0 > 0)
	{
		if (func_673() != func_57())
		{
			if (func_572(unk_0x1146A9AE09CE2B14()) == unk_0x1146A9AE09CE2B14())
			{
				Global_2519724.f_93[func_1247(iParam0)] = 1;
			}
		}
		iVar0 = func_1247(159);
		if (func_1246(iVar0, Global_262145.f_12784, bParam1))
		{
			func_9(&(Global_2519724[iVar0 /*2*/]));
			func_10(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1247(157);
		if (func_1246(iVar0, Global_262145.f_12784, bParam1))
		{
			func_9(&(Global_2519724[iVar0 /*2*/]));
			func_10(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1247(148);
		if (func_1246(iVar0, Global_262145.f_12784, bParam1))
		{
			func_9(&(Global_2519724[iVar0 /*2*/]));
			func_10(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1247(164);
		if (func_1246(iVar0, Global_262145.f_12784, bParam1))
		{
			func_9(&(Global_2519724[iVar0 /*2*/]));
			func_10(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1247(142);
		if (func_1246(iVar0, Global_262145.f_12784, bParam1))
		{
			func_9(&(Global_2519724[iVar0 /*2*/]));
			func_10(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1247(152);
		if (func_1246(iVar0, Global_262145.f_12784, bParam1))
		{
			func_9(&(Global_2519724[iVar0 /*2*/]));
			func_10(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1247(166);
		if (func_1246(iVar0, Global_262145.f_12784, bParam1))
		{
			func_9(&(Global_2519724[iVar0 /*2*/]));
			func_10(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1247(170);
		if (func_1246(iVar0, Global_262145.f_12784, bParam1))
		{
			func_9(&(Global_2519724[iVar0 /*2*/]));
			func_10(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1247(173);
		if (func_1246(iVar0, Global_262145.f_12784, bParam1))
		{
			func_9(&(Global_2519724[iVar0 /*2*/]));
			func_10(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1247(179);
		if (func_1246(iVar0, Global_262145.f_12784, bParam1))
		{
			func_9(&(Global_2519724[iVar0 /*2*/]));
			func_10(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1247(200);
		if (func_1246(iVar0, Global_262145.f_12784, bParam1))
		{
			func_9(&(Global_2519724[iVar0 /*2*/]));
			func_10(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1247(201);
		if (func_1246(iVar0, Global_262145.f_12784, bParam1))
		{
			func_9(&(Global_2519724[iVar0 /*2*/]));
			func_10(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1247(182);
		if (func_1246(iVar0, Global_262145.f_12785, 0))
		{
			func_9(&(Global_2519724[iVar0 /*2*/]));
			func_10(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1247(183);
		if (func_1246(iVar0, Global_262145.f_12785, 0))
		{
			func_9(&(Global_2519724[iVar0 /*2*/]));
			func_10(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1247(185);
		if (func_1246(iVar0, Global_262145.f_12785, 0))
		{
			func_9(&(Global_2519724[iVar0 /*2*/]));
			func_10(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1247(186);
		if (func_1246(iVar0, Global_262145.f_12785, 0))
		{
			func_9(&(Global_2519724[iVar0 /*2*/]));
			func_10(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1247(180);
		if (func_1246(iVar0, Global_262145.f_12785, 0))
		{
			func_9(&(Global_2519724[iVar0 /*2*/]));
			func_10(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1247(195);
		if (func_1246(iVar0, Global_262145.f_12785, 0))
		{
			func_9(&(Global_2519724[iVar0 /*2*/]));
			func_10(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1247(197);
		if (func_1246(iVar0, Global_262145.f_12785, 0))
		{
			func_9(&(Global_2519724[iVar0 /*2*/]));
			func_10(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1247(198);
		if (func_1246(iVar0, Global_262145.f_12785, 0))
		{
			func_9(&(Global_2519724[iVar0 /*2*/]));
			func_10(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1247(207);
		if (func_1246(iVar0, Global_262145.f_12785, 0))
		{
			func_9(&(Global_2519724[iVar0 /*2*/]));
			func_10(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1247(208);
		if (func_1246(iVar0, Global_262145.f_12785, 0))
		{
			func_9(&(Global_2519724[iVar0 /*2*/]));
			func_10(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1247(209);
		if (func_1246(iVar0, Global_262145.f_12785, 0))
		{
			func_9(&(Global_2519724[iVar0 /*2*/]));
			func_10(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1247(214);
		if (func_1246(iVar0, Global_262145.f_12785, 0))
		{
			func_9(&(Global_2519724[iVar0 /*2*/]));
			func_10(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1247(215);
		if (func_1246(iVar0, Global_262145.f_12785, 0))
		{
			func_9(&(Global_2519724[iVar0 /*2*/]));
			func_10(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1247(216);
		if (func_1246(iVar0, Global_262145.f_12785, 0))
		{
			func_9(&(Global_2519724[iVar0 /*2*/]));
			func_10(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1247(217);
		if (func_1246(iVar0, Global_262145.f_12785, 0))
		{
			func_9(&(Global_2519724[iVar0 /*2*/]));
			func_10(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1247(218);
		if (func_1246(iVar0, Global_262145.f_12785, 0))
		{
			func_9(&(Global_2519724[iVar0 /*2*/]));
			func_10(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1247(219);
		if (func_1246(iVar0, Global_262145.f_12785, 0))
		{
			func_9(&(Global_2519724[iVar0 /*2*/]));
			func_10(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1247(220);
		if (func_1246(iVar0, Global_262145.f_12785, 0))
		{
			func_9(&(Global_2519724[iVar0 /*2*/]));
			func_10(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1247(221);
		if (func_1246(iVar0, Global_262145.f_12785, 0))
		{
			func_9(&(Global_2519724[iVar0 /*2*/]));
			func_10(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_1246(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_252(unk_0x1146A9AE09CE2B14(), 19) && !func_252(unk_0x1146A9AE09CE2B14(), 20)) && !func_252(unk_0x1146A9AE09CE2B14(), 9))
		{
			return 0;
		}
	}
	if (Global_2519724.f_93[iParam0] == 1 && func_11(&(Global_2519724[iParam0 /*2*/])))
	{
		if (func_638(&(Global_2519724[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2519724.f_93[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_1247(int iParam0)
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

void func_1248(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_472();
	}
	if (iParam0 > 0)
	{
		if (func_673() != func_57())
		{
			Global_2519724.f_93[func_1247(iParam0)] = 1;
		}
		iVar0 = func_1247(155);
		if (func_1246(iVar0, Global_262145.f_12785, 0))
		{
			func_9(&(Global_2519724[iVar0 /*2*/]));
			func_10(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1247(163);
		if (func_1246(iVar0, Global_262145.f_12785, 0))
		{
			func_9(&(Global_2519724[iVar0 /*2*/]));
			func_10(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1247(160);
		if (func_1246(iVar0, Global_262145.f_12785, 0))
		{
			func_9(&(Global_2519724[iVar0 /*2*/]));
			func_10(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1247(153);
		if (func_1246(iVar0, Global_262145.f_12785, 0))
		{
			func_9(&(Global_2519724[iVar0 /*2*/]));
			func_10(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1247(162);
		if (func_1246(iVar0, Global_262145.f_12785, 0))
		{
			func_9(&(Global_2519724[iVar0 /*2*/]));
			func_10(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1247(154);
		if (func_1246(iVar0, Global_262145.f_12785, 0))
		{
			func_9(&(Global_2519724[iVar0 /*2*/]));
			func_10(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1247(171);
		if (func_1246(iVar0, Global_262145.f_12785, 0))
		{
			func_9(&(Global_2519724[iVar0 /*2*/]));
			func_10(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1247(172);
		if (func_1246(iVar0, Global_262145.f_12785, 0))
		{
			func_9(&(Global_2519724[iVar0 /*2*/]));
			func_10(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1247(199);
		if (func_1246(iVar0, Global_262145.f_12785, 0))
		{
			func_9(&(Global_2519724[iVar0 /*2*/]));
			func_10(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1247(194);
		if (func_1246(iVar0, Global_262145.f_12785, 0))
		{
			func_9(&(Global_2519724[iVar0 /*2*/]));
			func_10(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1247(193);
		if (func_1246(iVar0, Global_262145.f_12785, 0))
		{
			func_9(&(Global_2519724[iVar0 /*2*/]));
			func_10(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1247(210);
		if (func_1246(iVar0, Global_262145.f_12785, 0))
		{
			func_9(&(Global_2519724[iVar0 /*2*/]));
			func_10(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1247(205);
		if (func_1246(iVar0, Global_262145.f_12785, 0))
		{
			func_9(&(Global_2519724[iVar0 /*2*/]));
			func_10(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1247(189);
		if (func_1246(iVar0, Global_262145.f_12785, 0))
		{
			func_9(&(Global_2519724[iVar0 /*2*/]));
			func_10(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1247(211);
		if (func_1246(iVar0, Global_262145.f_12785, 0))
		{
			func_9(&(Global_2519724[iVar0 /*2*/]));
			func_10(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_1249(int iParam0)
{
	if (!func_61(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_151[iParam0 /*3*/], func_1250(), 0))
	{
		Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_151[iParam0 /*3*/] = { func_1250() };
	}
	if (!func_61(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_126[iParam0 /*3*/], func_1250(), 0))
	{
		Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_126[iParam0 /*3*/] = { func_1250() };
	}
}

Vector3 func_1250()
{
	struct<3> Var0;
	
	return Var0;
}

void func_1251()
{
	struct<20> Var0;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573914 = { Var0 };
	Global_1573914.f_13 = func_57();
	if (unk_0x234B68AC2E35ED5A(Global_1573348, 3))
	{
		unk_0xC664C0067EEAB8D1(&Global_1573348, 3);
	}
}

void func_1252(bool bParam0)
{
	if (bParam0)
	{
		if (!func_597(unk_0x1146A9AE09CE2B14(), 14))
		{
			func_1254(14);
		}
	}
	else if (func_597(unk_0x1146A9AE09CE2B14(), 14))
	{
		func_1253(14);
	}
}

void func_1253(int iParam0)
{
	unk_0xC664C0067EEAB8D1(&(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_5), iParam0);
}

void func_1254(int iParam0)
{
	unk_0x191DDA30577F440A(&(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_5), iParam0);
}

void func_1255(int iParam0)
{
	if (func_270(unk_0x1146A9AE09CE2B14()))
	{
		if (unk_0x1146A9AE09CE2B14() != iParam0)
		{
			if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_459 != iParam0)
			{
				Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_459 = iParam0;
				if (iParam0 != func_57())
				{
				}
			}
		}
	}
}

int func_1256(int iParam0)
{
	if (func_1257(iParam0, 0))
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_32;
	}
	return -1;
}

int func_1257(int iParam0, int iParam1)
{
	if (Global_1630816[iParam0 /*597*/].f_11.f_32 != -1 || (iParam1 && Global_1630816[iParam0 /*597*/].f_11.f_33 != -1))
	{
		return 1;
	}
	return 0;
}

void func_1258(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (func_774(iParam0, iParam1) && func_1275(iParam0, iParam1))
	{
		iVar0 = func_773(iParam0, iParam1);
		func_1262(iVar0, bParam2, bParam3);
		func_1259(iVar0, 1);
	}
}

void func_1259(int iParam0, int iParam1)
{
	if (!func_1261(iParam0))
	{
		return;
	}
	func_758(func_1260(iParam0), iParam1, -1, 1);
	Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_185[iParam0 /*12*/].f_6 = iParam1;
}

int func_1260(int iParam0)
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

bool func_1261(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 6);
}

void func_1262(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = false;
	iVar2 = func_1064(unk_0x1146A9AE09CE2B14(), iParam0);
	if (!bParam1)
	{
		func_1274(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2518510[iParam0];
		iVar0 = func_1273(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1683820 = -1;
		}
		func_1272(iParam0, 0, bParam2);
	}
	else if (func_1270(iParam0, bParam2))
	{
		iVar0 = func_1269(iVar2, 0);
		iVar3 = func_902(unk_0x1146A9AE09CE2B14(), iVar2);
		iVar4 = func_1268(iVar2, bParam2);
		iVar5 = func_1269(iVar2, bParam2);
		fVar6 = (to_float(iVar5) / to_float(iVar4));
		iVar0 = (iVar0 - round((to_float(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_1267(iVar2) && func_1266(unk_0x1146A9AE09CE2B14(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_1274(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_1265(unk_0x1146A9AE09CE2B14(), iVar2) > 0)
		{
			func_1264(iParam0, (Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_185[iParam0 /*12*/].f_2 - (func_1268(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_1269(iVar2, bParam2) / func_1265(unk_0x1146A9AE09CE2B14(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_1267(iVar2) && func_1266(unk_0x1146A9AE09CE2B14(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_1263(unk_0x1146A9AE09CE2B14(), iVar2, iVar0, bParam2);
}

void func_1263(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 == func_57())
	{
		return;
	}
	if (func_765(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/] == iParam1)
			{
				if (bParam3)
				{
					Global_1590908[iParam0 /*874*/].f_267.f_259 = iParam2;
				}
				else
				{
					Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/].f_9 = iParam2;
				}
			}
			iVar0++;
		}
	}
}

void func_1264(int iParam0, int iParam1)
{
	if (iParam0 != -1 && iParam1 != Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_185[iParam0 /*12*/].f_2)
	{
		Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_185[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_1265(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_57())
	{
		return 0;
	}
	if (func_765(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/] == iParam1)
			{
				return Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1266(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_57())
	{
		return 0;
	}
	if (func_765(iParam1) && func_1267(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/] == iParam1)
			{
				return Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/].f_11;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_1267(int iParam0)
{
	return func_668(iParam0) == 5;
}

int func_1268(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_668(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_17129;
			if (func_772(unk_0x1146A9AE09CE2B14(), iParam0, 0))
			{
				uVar0 = Global_262145.f_17134;
			}
			break;
		
		case 3:
			uVar0 = Global_262145.f_17128;
			if (func_772(unk_0x1146A9AE09CE2B14(), iParam0, 0))
			{
				uVar0 = Global_262145.f_17133;
			}
			break;
		
		case 4:
			uVar0 = Global_262145.f_17127;
			if (func_772(unk_0x1146A9AE09CE2B14(), iParam0, 0))
			{
				uVar0 = Global_262145.f_17132;
			}
			break;
		
		case 0:
			uVar0 = Global_262145.f_17125;
			if (func_772(unk_0x1146A9AE09CE2B14(), iParam0, 0))
			{
				uVar0 = Global_262145.f_17130;
			}
			break;
		
		case 2:
			uVar0 = Global_262145.f_17126;
			if (func_772(unk_0x1146A9AE09CE2B14(), iParam0, 0))
			{
				uVar0 = Global_262145.f_17131;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_262145.f_21255;
				if (func_772(unk_0x1146A9AE09CE2B14(), iParam0, 0))
				{
					uVar0 = Global_262145.f_21256;
				}
			}
			else
			{
				uVar0 = Global_262145.f_21239;
				if (func_772(unk_0x1146A9AE09CE2B14(), iParam0, 0))
				{
					uVar0 = Global_262145.f_21240;
				}
			}
			break;
	}
	return uVar0;
}

int func_1269(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_668(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_17110;
			if (func_772(unk_0x1146A9AE09CE2B14(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_17119);
			}
			if (func_772(unk_0x1146A9AE09CE2B14(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_17124);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_17111;
			if (func_772(unk_0x1146A9AE09CE2B14(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_17118);
			}
			if (func_772(unk_0x1146A9AE09CE2B14(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_17123);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_17112;
			if (func_772(unk_0x1146A9AE09CE2B14(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_17117);
			}
			if (func_772(unk_0x1146A9AE09CE2B14(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_17122);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_17113;
			if (func_772(unk_0x1146A9AE09CE2B14(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_17115);
			}
			if (func_772(unk_0x1146A9AE09CE2B14(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_17120);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_17114;
			if (func_772(unk_0x1146A9AE09CE2B14(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_17116);
			}
			if (func_772(unk_0x1146A9AE09CE2B14(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_17121);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				iVar0 = Global_262145.f_21252;
			}
			else
			{
				iVar0 = Global_262145.f_21236;
			}
			if (func_772(unk_0x1146A9AE09CE2B14(), iParam0, 0))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_21253);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_21237);
				}
			}
			if (func_772(unk_0x1146A9AE09CE2B14(), iParam0, 1))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_21254);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_21238);
				}
			}
			if (func_1266(unk_0x1146A9AE09CE2B14(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_1270(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_759(15384, -1, -1);
	}
	return func_759(func_1271(iParam0), -1, -1);
}

int func_1271(int iParam0)
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

void func_1272(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_758(15384, iParam1, -1, 1);
		return;
	}
	func_758(func_1271(iParam0), iParam1, -1, 1);
}

int func_1273(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2518510[iParam0];
	iVar1 = func_1064(unk_0x1146A9AE09CE2B14(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_2518517;
	}
	if (func_1267(iVar1))
	{
		if (func_1266(unk_0x1146A9AE09CE2B14(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_1274(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_2518517 = iParam1;
		return;
	}
	Global_2518510[iParam0] = iParam1;
}

int func_1275(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_774(iParam0, iParam1))
	{
		iVar0 = func_773(iParam0, iParam1);
		if (Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/].f_4 > 0 && Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_1276()
{
	unk_0xC664C0067EEAB8D1(&(Global_2544210.f_1800), 28);
	unk_0xC664C0067EEAB8D1(&(Global_2544210.f_1800), 29);
	func_1277(24);
}

void func_1277(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xC664C0067EEAB8D1(&(Global_2544210.f_5191.f_7[iVar0]), iVar1);
}

void func_1278(var uParam0, int iParam1)
{
	if (unk_0x6CFCAD853B84B192(*uParam0))
	{
		unk_0x96BEEBF07BE42616(*uParam0, iParam1);
	}
}

void func_1279()
{
	unk_0x45881466B05A8703(iLocal_132);
	unk_0x45881466B05A8703(iLocal_131);
}

void func_1280(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	var uVar0;
	struct<24> Var1;
	int iVar2;
	struct<25> Var3;
	struct<25> Var4;
	struct<26> Var5;
	
	uVar0 = unk_0x471C98FD94C0A5FD();
	iVar2 = func_58(unk_0x1146A9AE09CE2B14());
	Var1 = Global_1681722;
	Var1.f_1 = Global_1681722.f_1;
	Var1.f_4 = Global_1681722.f_4;
	Var1.f_5 = Global_1681722.f_5;
	Var1.f_6 = Global_1681722.f_6;
	Var1.f_7 = Global_1681722.f_7;
	Var1.f_8 = Global_1681722.f_8;
	Var1.f_9 = Global_1681722.f_9;
	Var1.f_10 = Global_1681722.f_10;
	Var1.f_2 = Global_1681722.f_2;
	Var1.f_3 = Global_1681722.f_3;
	Var1.f_11 = iParam3;
	Var1.f_12 = iParam2;
	Var1.f_13 = uParam0;
	Var1.f_14 = func_1287();
	Var1.f_16 = iParam1;
	Var1.f_21 = iParam7;
	Var1.f_22 = iParam8;
	if (func_663())
	{
		Var1.f_23 = func_912(unk_0x234B68AC2E35ED5A(Global_1683970.f_4, 4));
	}
	else
	{
		Var1.f_23 = 0;
	}
	if (iVar2 != func_57() && unk_0x8CFC2F41A749E236(iVar2))
	{
		Var1.f_17 = iParam4;
		Var1.f_18 = func_1286(iVar2, iParam3);
		Var1.f_19 = round(((to_float(iParam4) / to_float(func_543(iParam3))) * 100f));
		Var1.f_20 = (100 - round(((to_float(func_1283(iParam3, iVar2)) / to_float(func_543(iParam3))) * 100f)));
		Var1.f_15 = func_1282(iVar2);
	}
	if (unk_0x02BFF15CAA701972())
	{
		if (unk_0xDA654EB115F9FF7D(uVar0, "GB_CONTRABAND_SELL"))
		{
			Var3 = { Var1 };
			Var3.f_24 = iParam5;
			unk_0xB9F9B06BE925BC54(&Var3);
		}
		else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_CONTRABAND_BUY"))
		{
			unk_0x5A6DF6C4E8E9F3E4(&Var1);
		}
		else if (unk_0xDA654EB115F9FF7D(sVar0, "GB_CONTRABAND_DEFEND"))
		{
			if (bParam9 == 1)
			{
				Var4 = { Var1 };
				Var4.f_24 = iParam5;
				unk_0x2851A0E816B8224D(&Var4);
			}
			else
			{
				Var5 = { Var1 };
				Var5.f_24 = iParam5;
				Var5.f_25 = iParam6;
				unk_0x10C56E48AC346549(&Var5);
			}
		}
	}
	func_1281();
}

void func_1281()
{
	struct<18> Var0;
	
	Global_1681722 = { Var0 };
}

int func_1282(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (Global_1590908[iParam0 /*874*/].f_267.f_108[iVar0 /*3*/] > 0 && Global_1590908[iParam0 /*874*/].f_267.f_108[iVar0 /*3*/] <= 22)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_1283(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (func_1285(iParam1, iParam0))
	{
		iVar0 = func_1284(iParam0, iParam1);
		iVar1 = func_542(iParam0);
		if (iVar1 == 2)
		{
			return (111 - iVar0);
		}
		else if (iVar1 == 1)
		{
			return (42 - iVar0);
		}
		else
		{
			return (16 - iVar0);
		}
	}
	return 0;
}

int func_1284(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_42(iParam0))
	{
		iVar0 = 0;
		{
			{