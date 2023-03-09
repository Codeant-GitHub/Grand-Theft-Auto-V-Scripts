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
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_36[2] = { 0, 0 };
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80[2] = { 0, 0 };
	int iLocal_81[2] = { 0, 0 };
	int iLocal_82[2] = { 0, 0 };
	int iLocal_83[2] = { 0, 0 };
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	vector3 vLocal_92 = { 0f, 0f, 0f };
	vector3 vLocal_93 = { 0f, 0f, 0f };
	vector3 vLocal_94 = { 0f, 0f, 0f };
	vector3 vLocal_95[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_96 = { 0f, 0f, 0f };
	float fLocal_97 = 0f;
	char* sLocal_98 = NULL;
	var uLocal_99 = 16;
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
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_278[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_279 = 0;
	int iLocal_280[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_281[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_282[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_283[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_284[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_285[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303[2] = { 0, 0 };
	int iLocal_304[2] = { 0, 0 };
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	int iLocal_320 = 0;
	int iLocal_321 = 0;
	int iLocal_322 = 0;
	int iLocal_323 = 0;
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328[2] = { 0, 0 };
	int iLocal_329[2] = { 0, 0 };
	int iLocal_330[2] = { 0, 0 };
	int iLocal_331[2] = { 0, 0 };
	int iLocal_332[2] = { 0, 0 };
	int iLocal_333[2] = { 0, 0 };
	int iLocal_334[2] = { 0, 0 };
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340[2] = { 0, 0 };
	int iLocal_341[2] = { 0, 0 };
	int iLocal_342 = 0;
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	int iLocal_359 = 0;
	int iLocal_360 = 0;
	int iLocal_361[2] = { 0, 0 };
	int iLocal_362 = 0;
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
	vLocal_92 = { 27.7189f, -608.7927f, 30.6293f };
	vLocal_96 = { 903.1f, -1548.8f, 29.8f };
	fLocal_97 = 0f;
	if (unk_0x9EC5BDC006623C42(3))
	{
		unk_0x65BA35D6D61F1574("FHPRB_STOP");
		func_204();
		func_203();
	}
	if (func_202(0))
	{
		unk_0x2EE8D1440C9060EF("FINPRB", 0);
	}
	unk_0x9315FCF6CFE2AB41("WorkerPedMainGroup", &iLocal_264);
	unk_0x9315FCF6CFE2AB41("GuardMainGroup", &iLocal_265);
	unk_0x8C4EA5F6857553AE(joaat("packer"), true);
	unk_0xD2E80177F27FD43F(5, iLocal_265, 1862763509);
	unk_0xD2E80177F27FD43F(5, iLocal_264, 1862763509);
	unk_0xD2E80177F27FD43F(1, iLocal_265, iLocal_264);
	unk_0xD2E80177F27FD43F(1, iLocal_264, iLocal_265);
	unk_0xD2E80177F27FD43F(1, iLocal_265, -1533126372);
	unk_0xD2E80177F27FD43F(1, -1533126372, iLocal_265);
	unk_0xD2E80177F27FD43F(1, iLocal_264, -1533126372);
	unk_0xD2E80177F27FD43F(1, -1533126372, iLocal_264);
	while (true)
	{
		unk_0x65F534DDBF48606F("M_FINPRB", 0);
		if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
		{
			unk_0x5FEE418CE11E6DDE(unk_0x33CD235DF1E6A94E(), 230, false);
		}
		func_200();
		if (iLocal_272 == 0)
		{
			if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) > 0)
			{
				func_199(27, 1);
				iLocal_272 = 1;
			}
		}
		if (iLocal_295 == 1)
		{
			func_195();
		}
		func_192();
		func_185();
		func_177();
		func_172();
		func_169();
		switch (iLocal_28)
		{
			case 0:
				func_168();
				break;
			
			case 1:
				func_165();
				break;
			
			case 2:
				func_141();
				break;
			
			case 3:
				func_139();
				break;
			
			case 4:
				func_115();
				break;
			
			case 5:
				func_20();
				break;
			
			case 6:
				func_1();
				break;
		}
		wait(0);
	}
}

void func_1()
{
	switch (iLocal_53)
	{
		case 0:
			unk_0xD362430CD61A9B08();
			unk_0xEDF90B96BED57BCE(1);
			unk_0x65BA35D6D61F1574("FHPRA_FAIL");
			switch (iLocal_30)
			{
				case 0:
					break;
				
				case 4:
					sLocal_98 = "FPB_FAIL1";
					break;
				
				case 3:
					sLocal_98 = "FPB_FAIL2";
					break;
				
				case 1:
					sLocal_98 = "FPB_FAIL3";
					break;
				
				case 2:
					sLocal_98 = "FPB_FAIL10";
					break;
				
				case 5:
					if (func_14() == 0)
					{
						sLocal_98 = "FPB_FAIL7";
					}
					if (func_14() == 2)
					{
						sLocal_98 = "FPB_FAIL8";
					}
					if (func_14() == 1)
					{
						sLocal_98 = "FPB_FAIL9";
					}
					break;
				
				case 6:
					sLocal_98 = "FPB_FAIL11";
					break;
			}
			if (iLocal_30 == 0)
			{
				func_6(0);
			}
			else
			{
				func_4(sLocal_98);
			}
			iLocal_53 = 1;
			break;
		
		case 1:
			if (func_3())
			{
				if (func_2())
				{
				}
				func_203();
			}
			break;
	}
}

int func_2()
{
	if (Global_93682 == 7)
	{
		return 1;
	}
	return 0;
}

int func_3()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_93682 == 7 || Global_93682 == 8)
	{
		return 1;
	}
	return 0;
}

void func_4(char* sParam0)
{
	func_5(sParam0);
	func_6(0);
}

void func_5(char* sParam0)
{
	if (!unk_0x786AF4A44E1B5B4B(sParam0))
	{
		if (unk_0x625A8786A9CA5F9A(sParam0) <= 16)
		{
			StringCopy(&Global_71822, sParam0, 16);
			StringCopy(&Global_71826, "", 16);
			if (unk_0x239E30C22D4EE2C6())
			{
				unk_0x692BB84FC63FB91E();
			}
		}
	}
}

void func_6(int iParam0)
{
	int iVar0;
	
	if (Global_106565.f_9079 || func_202(0))
	{
		iVar0 = func_13();
		if (!func_7(iVar0))
		{
			return;
		}
		unk_0x8950ED5730F62EE8(&(Global_84464[iVar0 /*5*/].f_1), 5);
		Global_93718 = iParam0;
	}
}

int func_7(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_12();
	if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
	{
		unk_0xD4285932032EABD0(5000);
	}
	iVar0 = Global_84464[iParam0 /*5*/];
	iVar1 = Global_71859.f_109[iVar0 /*4*/];
	func_11(iVar1, 1);
	unk_0xAF40CD16D7F807F4(unk_0x95B959F18401C09A());
	unk_0x111AE40E9C93AF52(unk_0x95B959F18401C09A());
	func_8(&(Global_106565.f_2357.f_539), iVar1);
	if (Global_87887 == Global_93719)
	{
		Global_106565.f_9079.f_330[iVar1 /*6*/].f_1++;
	}
	if (!unk_0x0E4018692D92041D(Global_84500[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
		{
			unk_0x476CFECD9A50C6EC(0);
		}
	}
	Global_106565.f_9079.f_330[iVar1 /*6*/].f_2++;
	Global_87887 = Global_93719;
	if (iParam0 == -1)
	{
		if (Global_106565.f_9079)
		{
		}
		return 0;
	}
	if (unk_0x0E4018692D92041D(Global_84464[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (unk_0x0E4018692D92041D(Global_84464[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_8(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_106565.f_18527[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0x0E4018692D92041D(Global_106565.f_9079.f_99.f_219[0], 9))
		{
		}
		else
		{
			vVar2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_10(Global_106565.f_18527[iVar0], &vVar2, &fVar3))
			{
				Global_106565.f_18527[iVar0] = 318;
				func_9(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_91102[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_91102[iVar0 /*29*/].f_9 = 0f;
				Global_91102[iVar0 /*29*/].f_12 = 0f;
				Global_91102[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_91102[iVar0 /*29*/].f_10 = 0f;
				Global_91102[iVar0 /*29*/].f_13 = 0f;
				Global_91102[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_91102[iVar0 /*29*/].f_11 = 0f;
				Global_91102[iVar0 /*29*/].f_14 = 0f;
				Global_91102[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_91102[iVar0 /*29*/].f_26 = 0f;
				Global_91102[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_91102[iVar0 /*29*/].f_27 = 0f;
				Global_91102[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_91102[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_9(var uParam0)
{
	*uParam0 = -15;
}

int func_10(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_10(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_10(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_11(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_87697[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_87697[iParam0 /*2*/] = 0;
	}
}

void func_12()
{
	Global_93717 = 1;
	if (unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1))
	{
		if (unk_0x786AF4A44E1B5B4B(&Global_71822))
		{
			switch (func_14())
			{
				case 0:
					StringCopy(&Global_71822, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_71822, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_71822, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_71826, "", 16);
		}
		Global_93717 = 0;
	}
	else if (!unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
	{
		if (unk_0x786AF4A44E1B5B4B(&Global_71822))
		{
			switch (func_14())
			{
				case 0:
					StringCopy(&Global_71822, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_71822, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_71822, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_71826, "", 16);
		}
		Global_93717 = 0;
		unk_0x8950ED5730F62EE8(&(Global_93682.f_20), 25);
	}
}

int func_13()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0x0E4018692D92041D(Global_84464[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_14()
{
	func_15();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_15()
{
	int iVar0;
	
	if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
	{
		if (func_19(Global_106565.f_2357.f_539.f_4321) != unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()))
		{
			iVar0 = func_18(unk_0x33CD235DF1E6A94E());
			if (func_17(iVar0) && (!func_16(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_17(Global_106565.f_2357.f_539.f_4321))
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

bool func_16(int iParam0)
{
	return Global_36425 == iParam0;
}

bool func_17(int iParam0)
{
	return iParam0 < 3;
}

int func_18(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		iVar1 = unk_0x541D5C57194E73C4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_19(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_19(int iParam0)
{
	if (func_17(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_20()
{
	func_169();
	if (iLocal_53 == 0)
	{
		if (iLocal_266 == 1)
		{
			func_34();
			iLocal_266 = 0;
		}
		iLocal_273 = 0;
		iLocal_274 = 0;
		iLocal_275 = 0;
		unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), false, 0);
		if (func_33(iLocal_37, 0))
		{
			if (!func_32(iLocal_37))
			{
				while (!func_31(iLocal_37, 0))
				{
					wait(0);
				}
			}
		}
		if (func_33(iLocal_39, 0))
		{
			if (!func_32(iLocal_39))
			{
				while (!func_31(iLocal_39, 0))
				{
					wait(0);
				}
			}
		}
		if (func_33(iLocal_38, 0))
		{
			if (!func_32(iLocal_38))
			{
				while (!func_31(iLocal_38, 0))
				{
					wait(0);
				}
			}
		}
		if (unk_0xBB5E373390A5F824())
		{
			if (!func_30())
			{
				unk_0x340F713A0F70CAE2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true));
			}
			func_27(iLocal_33, -1, 1);
		}
		if (!unk_0x73DA1542B2F0C458())
		{
			unk_0xACCDA78123DB57B0(800);
		}
		iLocal_295 = 1;
		iLocal_53 = 1;
	}
	if (iLocal_53 == 1)
	{
		if (unk_0x765F6FEEFF39224F(iLocal_33))
		{
			if (unk_0x91D5C8283D19AF49(iLocal_33, 0))
			{
				if (func_14() == 0)
				{
					if (func_33(iLocal_39, 0))
					{
						if (unk_0x10930B9CAD4111C2(iLocal_39, iLocal_33, 0))
						{
							unk_0xED68CDDDE25A144E(iLocal_39);
							unk_0x5D94F4D6FE7DA516(iLocal_39);
							unk_0x4A852F02088ECC9D(iLocal_39, true);
							unk_0x0FF06FD8DEB3AB01(iLocal_39, iLocal_33, 0);
						}
					}
					if (func_33(iLocal_38, 0))
					{
						if (unk_0x10930B9CAD4111C2(iLocal_38, iLocal_33, 0))
						{
							unk_0xED68CDDDE25A144E(iLocal_38);
							unk_0x5D94F4D6FE7DA516(iLocal_38);
							unk_0x4A852F02088ECC9D(iLocal_38, true);
							unk_0x0FF06FD8DEB3AB01(iLocal_38, iLocal_33, 0);
						}
					}
				}
				if (func_14() == 2)
				{
					if (func_33(iLocal_37, 0))
					{
						if (unk_0x10930B9CAD4111C2(iLocal_37, iLocal_33, 0))
						{
							unk_0xED68CDDDE25A144E(iLocal_37);
							unk_0x5D94F4D6FE7DA516(iLocal_37);
							unk_0x4A852F02088ECC9D(iLocal_37, true);
							unk_0x0FF06FD8DEB3AB01(iLocal_37, iLocal_33, 0);
						}
					}
					if (func_33(iLocal_38, 0))
					{
						if (unk_0x10930B9CAD4111C2(iLocal_38, iLocal_33, 0))
						{
							unk_0xED68CDDDE25A144E(iLocal_38);
							unk_0x5D94F4D6FE7DA516(iLocal_38);
							unk_0x4A852F02088ECC9D(iLocal_38, true);
							unk_0x0FF06FD8DEB3AB01(iLocal_38, iLocal_33, 0);
						}
					}
				}
				if (func_14() == 1)
				{
					if (func_33(iLocal_37, 0))
					{
						if (unk_0x10930B9CAD4111C2(iLocal_37, iLocal_33, 0))
						{
							unk_0xED68CDDDE25A144E(iLocal_37);
							unk_0x5D94F4D6FE7DA516(iLocal_37);
							unk_0x4A852F02088ECC9D(iLocal_37, true);
							unk_0x0FF06FD8DEB3AB01(iLocal_37, iLocal_33, 0);
						}
					}
					if (func_33(iLocal_39, 0))
					{
						if (unk_0x10930B9CAD4111C2(iLocal_39, iLocal_33, 0))
						{
							unk_0xED68CDDDE25A144E(iLocal_39);
							unk_0x5D94F4D6FE7DA516(iLocal_39);
							unk_0x4A852F02088ECC9D(iLocal_39, true);
							unk_0x0FF06FD8DEB3AB01(iLocal_39, iLocal_33, 0);
						}
					}
				}
				if (unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iLocal_33, 0))
				{
					unk_0x0FF06FD8DEB3AB01(unk_0x33CD235DF1E6A94E(), iLocal_33, 0);
				}
			}
		}
		settimerb(0);
		iLocal_53 = 2;
	}
	if (iLocal_53 == 2)
	{
		if (unk_0x765F6FEEFF39224F(iLocal_33))
		{
			if (unk_0x91D5C8283D19AF49(iLocal_33, 0))
			{
				if (iLocal_275 == 0)
				{
					if (func_14() == 0)
					{
						if (func_33(iLocal_39, 0))
						{
							if (!unk_0x10930B9CAD4111C2(iLocal_39, iLocal_33, 0))
							{
								if (func_32(iLocal_39))
								{
									if (func_24(iLocal_39))
									{
										iLocal_275 = 1;
									}
								}
								else
								{
									iLocal_275 = 1;
								}
							}
						}
						else
						{
							iLocal_273 = 1;
						}
						if (func_33(iLocal_38, 0))
						{
							if (!unk_0x10930B9CAD4111C2(iLocal_38, iLocal_33, 0))
							{
								if (func_32(iLocal_38))
								{
									if (func_24(iLocal_38))
									{
										iLocal_275 = 1;
									}
								}
								else
								{
									iLocal_275 = 1;
								}
							}
						}
						else
						{
							iLocal_274 = 1;
						}
					}
					if (func_14() == 2)
					{
						if (func_33(iLocal_37, 0))
						{
							if (!unk_0x10930B9CAD4111C2(iLocal_37, iLocal_33, 0))
							{
								if (func_32(iLocal_37))
								{
									if (func_24(iLocal_37))
									{
										iLocal_275 = 1;
									}
								}
								else
								{
									iLocal_275 = 1;
								}
							}
						}
						else
						{
							iLocal_273 = 1;
						}
						if (func_33(iLocal_38, 0))
						{
							if (!unk_0x10930B9CAD4111C2(iLocal_38, iLocal_33, 0))
							{
								if (func_32(iLocal_38))
								{
									if (func_24(iLocal_38))
									{
										iLocal_275 = 1;
									}
								}
								else
								{
									iLocal_275 = 1;
								}
							}
						}
						else
						{
							iLocal_274 = 1;
						}
					}
					if (func_14() == 1)
					{
						if (func_33(iLocal_37, 0))
						{
							if (!unk_0x10930B9CAD4111C2(iLocal_37, iLocal_33, 0))
							{
								if (func_32(iLocal_37))
								{
									if (func_24(iLocal_37))
									{
										iLocal_275 = 1;
									}
								}
								else
								{
									iLocal_275 = 1;
								}
							}
						}
						else
						{
							iLocal_273 = 1;
						}
						if (func_33(iLocal_39, 0))
						{
							if (!unk_0x10930B9CAD4111C2(iLocal_39, iLocal_33, 0))
							{
								if (func_32(iLocal_39))
								{
									if (func_24(iLocal_39))
									{
										iLocal_275 = 1;
									}
								}
								else
								{
									iLocal_275 = 1;
								}
							}
						}
						else
						{
							iLocal_274 = 1;
						}
					}
					if (iLocal_273 == 1 && iLocal_274 == 1)
					{
						iLocal_275 = 1;
					}
				}
				else if (!unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iLocal_33, 1))
				{
					unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), true, 0);
					settimerb(0);
					iLocal_53 = 3;
				}
			}
		}
	}
	if (iLocal_53 == 3)
	{
		if (unk_0x765F6FEEFF39224F(iLocal_33))
		{
			if (unk_0x91D5C8283D19AF49(iLocal_33, 0))
			{
				unk_0x65EE1E8C987CD1DB(iLocal_33, 0);
				unk_0xD303E20CB0AE4AD0(iLocal_33, 2);
				unk_0xF70578F5CD9822CB(iLocal_33, true);
			}
		}
		if (unk_0x765F6FEEFF39224F(iLocal_32))
		{
			if (unk_0x91D5C8283D19AF49(iLocal_32, 0))
			{
				unk_0xF70578F5CD9822CB(iLocal_32, true);
			}
		}
		iLocal_53 = 4;
	}
	if (iLocal_53 == 4)
	{
		func_21();
	}
}

void func_21()
{
	func_22(0, 0);
	func_203();
}

void func_22(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_56496)
	{
		Global_56496 = iParam1;
	}
	if (bParam0)
	{
		if ((func_202(0) && Global_71836.f_1 == 1) && func_23(Global_71836))
		{
		}
		else
		{
			Global_56494 = 1;
		}
	}
	if (Global_106565.f_9079 || func_202(0))
	{
		iVar0 = func_13();
		iVar1 = Global_84464[iVar0 /*5*/];
		uVar2 = Global_71859.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_106565.f_9079)
			{
			}
			return;
		}
		if (unk_0x0E4018692D92041D(Global_84464[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (unk_0x0E4018692D92041D(Global_84464[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0x8950ED5730F62EE8(&(Global_84464[iVar0 /*5*/].f_1), 4);
		unk_0x8950ED5730F62EE8(&Global_71838, 1);
		Global_71854 = uVar2;
		Global_71855 = unk_0xE3903F59E2F22150();
	}
}

int func_23(int iParam0)
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

int func_24(int iParam0)
{
	int iVar0;
	
	return 0;
	if (!unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		iVar0 = func_18(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_25(iVar0) != iParam0)
		{
			return 0;
		}
		if (!unk_0x0E4018692D92041D(Global_89566, iVar0))
		{
			return 0;
		}
		unk_0xCE689A8E8C42ED78(&Global_89566, iVar0);
		return 1;
	}
	return 0;
}

int func_25(int iParam0)
{
	if (iParam0 > 3)
	{
		return 0;
	}
	if (iParam0 == func_14())
	{
		return unk_0x33CD235DF1E6A94E();
	}
	return Global_91190[func_26(iParam0)];
}

int func_26(int iParam0)
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

void func_27(int iParam0, int iParam1, int iParam2)
{
	if (func_29() && func_30())
	{
		while (Global_93677 != 6)
		{
			wait(0);
		}
		unk_0xD5CD4268EDE6F40E(0);
		if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
		{
			if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
			{
				unk_0x104FA8DC0E2278E8(unk_0x33CD235DF1E6A94E());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
			{
				if (unk_0x765F6FEEFF39224F(iParam0))
				{
					if (unk_0x91D5C8283D19AF49(iParam0, 0))
					{
						if (!unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iParam0, 0))
						{
							unk_0x094626C0798AE1F8(unk_0x33CD235DF1E6A94E(), iParam0, iParam1);
							unk_0xD6EDA274D82E8678(0f, 1065353216);
							unk_0xC7E6A5D90DED6E0B(0f);
							wait(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
			{
				unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), true, 0);
			}
		}
		unk_0xC6FB169E3887184D();
		func_28(0);
	}
}

void func_28(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x8950ED5730F62EE8(&(Global_93682.f_20), 13);
	}
	else
	{
		unk_0xCE689A8E8C42ED78(&(Global_93682.f_20), 13);
	}
}

int func_29()
{
	if (Global_93682 == 10 || Global_93682 == 9)
	{
		return 1;
	}
	return 0;
}

bool func_30()
{
	return unk_0x0E4018692D92041D(Global_93682.f_20, 13);
}

int func_31(int iParam0, int iParam1)
{
	int iVar0;
	
	return 0;
	if (!unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		iVar0 = func_18(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_25(iVar0) != iParam0)
		{
			return 0;
		}
		if (unk_0x0E4018692D92041D(Global_89566, iVar0))
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == unk_0x33CD235DF1E6A94E())
			{
				return 0;
			}
		}
		if (unk_0x0E4018692D92041D(Global_89565, iVar0))
		{
			unk_0x0568F2C15E27B386(iParam0, 0, 0);
			unk_0x43D47AD82DA3C6EC(iParam0, false, 1);
			unk_0x8950ED5730F62EE8(&Global_89566, iVar0);
			return 1;
		}
	}
	return 0;
}

int func_32(int iParam0)
{
	int iVar0;
	
	return 0;
	if (!unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		iVar0 = func_18(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_25(iVar0) != iParam0)
		{
			return 0;
		}
		if (unk_0x0E4018692D92041D(Global_89566, iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_33(int iParam0, int iParam1)
{
	int iVar0;
	
	return 0;
	if (!unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		iVar0 = func_18(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_25(iVar0) != iParam0)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == unk_0x33CD235DF1E6A94E())
			{
				return 0;
			}
		}
		if (unk_0x0E4018692D92041D(Global_89565, iVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_34()
{
	iLocal_295 = 0;
	iLocal_337 = 0;
	unk_0x98F04A4FFB4AD01C(unk_0x95B959F18401C09A(), 0, 0);
	unk_0x66D901F8097E8E86(unk_0x95B959F18401C09A(), 0);
	if (!unk_0xBB5E373390A5F824())
	{
		unk_0x7EDEAEAED85BEE4F(0);
	}
	func_113();
	unk_0xD362430CD61A9B08();
	func_112();
	func_111();
	func_36();
	if (!func_30())
	{
		func_35();
	}
	unk_0xC7E6A5D90DED6E0B(0f);
}

void func_35()
{
	switch (iLocal_28)
	{
		case 2:
			unk_0xBEADAF07D2339505(unk_0x33CD235DF1E6A94E(), 856.9501f, -1573.177f, 29.4751f, 1, false, 0, 1);
			unk_0x3C990C409B3845DE(unk_0x33CD235DF1E6A94E(), 288.3586f);
			break;
		
		case 3:
			unk_0xBEADAF07D2339505(unk_0x33CD235DF1E6A94E(), 856.9501f, -1573.177f, 29.4751f, 1, false, 0, 1);
			unk_0x3C990C409B3845DE(unk_0x33CD235DF1E6A94E(), 288.3586f);
			break;
		
		case 4:
			if (unk_0x765F6FEEFF39224F(iLocal_33))
			{
				if (unk_0x91D5C8283D19AF49(iLocal_33, 0))
				{
					if (!unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iLocal_33, 0))
					{
						unk_0x094626C0798AE1F8(unk_0x33CD235DF1E6A94E(), iLocal_33, -1);
					}
				}
			}
			break;
		
		case 5:
			if (unk_0x765F6FEEFF39224F(iLocal_33))
			{
				if (unk_0x91D5C8283D19AF49(iLocal_33, 0))
				{
					if (!unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iLocal_33, 0))
					{
						unk_0x094626C0798AE1F8(unk_0x33CD235DF1E6A94E(), iLocal_33, -1);
					}
				}
			}
			break;
	}
}

void func_36()
{
	switch (iLocal_28)
	{
		case 3:
			iLocal_313 = 0;
			iLocal_314 = 0;
			iLocal_315 = 0;
			func_107();
			if (func_106() && func_103(7f, 7f, 7f, 1))
			{
				func_101();
				while (!func_100())
				{
					wait(0);
				}
				iLocal_34 = func_37(818.8139f, -1610.406f, 30.7951f, 264.412f);
			}
			unk_0x4B06B5746CBEC99F(0.01f);
			break;
		
		case 4:
			iLocal_313 = 0;
			iLocal_314 = 0;
			iLocal_315 = 0;
			func_107();
			if (unk_0x765F6FEEFF39224F(iLocal_33))
			{
				if (unk_0x91D5C8283D19AF49(iLocal_33, 0))
				{
					unk_0xBEADAF07D2339505(iLocal_33, 89.2131f, -596.9456f, 30.6224f, 1, false, 0, 1);
					unk_0x3C990C409B3845DE(iLocal_33, 161.1163f);
				}
			}
			unk_0xCE04CE961AF41AB9(41f, -615f, 30f, 50f, 1, 1, 0, false);
			break;
		
		case 5:
			iLocal_313 = 1;
			iLocal_314 = 1;
			iLocal_315 = 1;
			func_107();
			unk_0xCE04CE961AF41AB9(41f, -615f, 30f, 50f, 1, 1, 0, false);
			if (unk_0x765F6FEEFF39224F(iLocal_33))
			{
				if (unk_0x91D5C8283D19AF49(iLocal_33, 0))
				{
					unk_0xBEADAF07D2339505(iLocal_33, 28.4065f, -608.9371f, 30.6293f, 1, false, 0, 1);
					unk_0x3C990C409B3845DE(iLocal_33, 70.7778f);
				}
			}
			unk_0xB815670C37E03CDE(joaat("s_m_m_security_01"));
			while (!unk_0x5D98D654CDC2165A(joaat("s_m_m_security_01")))
			{
				wait(0);
			}
			if (!unk_0x765F6FEEFF39224F(iLocal_40))
			{
				iLocal_40 = unk_0x9BA5CF280376EEA4(26, joaat("s_m_m_security_01"), 64.904f, -617.9949f, 30.7028f, 223.555f, 1, true);
				unk_0x71CA80D41E1338B4(joaat("s_m_m_security_01"));
				unk_0x5FEE418CE11E6DDE(iLocal_40, 324, true);
			}
			break;
	}
}

int func_37(vector3 vParam0, float fParam1)
{
	return func_38(&(Global_97130.f_2890), vParam0, fParam1, 0);
}

int func_38(var uParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	int iVar0;
	vector3 vVar1;
	bool bVar2;
	var uVar3;
	int iVar4;
	
	if (func_99(uParam0))
	{
		if (func_98(vParam1, 0f, 0f, 0f, 0))
		{
			vParam1 = { *uParam0 };
			fParam2 = uParam0->f_6;
		}
		if (uParam0->f_12.f_66 == joaat("monster") || uParam0->f_12.f_66 == joaat("marshall"))
		{
			if (unk_0xC2F708DE8AD68197(vParam1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0, 1))
			{
				vParam1 = { -850.93f, 158.82f, 65.7f };
				fParam2 = 89.5f;
			}
		}
		if (func_97(uParam0))
		{
			unk_0xCE04CE961AF41AB9(vParam1, 5f, 1, 0, 0, false);
			func_96(vParam1, 5f, 0);
			iVar0 = unk_0xC651C43AB13A15E5(uParam0->f_12.f_66, vParam1, fParam2, 1, 1, 0);
			if (unk_0x765F6FEEFF39224F(iVar0))
			{
				vVar1 = { unk_0xFBB1F99A825CAB09(iVar0, true) };
				if (vdist2(vVar1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					unk_0xC7C47D4054903839(iVar0, vParam1, 0, 0, 1);
				}
				func_79(iVar0, &(uParam0->f_12), 0, 1);
				bVar2 = true;
				if (unk_0x444D956C7F94526E(uParam0->f_12.f_66) || unk_0xC692A86D0A8FD54C(uParam0->f_12.f_66))
				{
					if (!unk_0x934475E2C2780CD7(vParam1.x, vParam1.y, (vParam1.z + 30f), vParam1.x, vParam1.y, (vParam1.z - 30f), &uVar3))
					{
						bVar2 = false;
					}
				}
				if (bVar2)
				{
					unk_0x1B2303F9DC2D90D5(iVar0, 1084227584);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam3)
					{
						if (unk_0x0C2E237744BA0026(unk_0x541D5C57194E73C4(iVar0)))
						{
							func_78(uParam0->f_11, 1);
						}
						else if (unk_0x9E374B5F44A76AE2(unk_0x541D5C57194E73C4(iVar0)))
						{
							func_78(uParam0->f_11, 2);
						}
					}
					unk_0xD5386CD3834C2895(iVar0, 0);
					unk_0x26D5EA44545890ED(iVar0, 0);
					unk_0x09993E7216CF52C4(iVar0, true);
					func_77(iVar0, uParam0->f_11);
				}
				else if ((!func_74(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && unk_0xCE3CFF625BEBAA04(unk_0xD178EF744F20B712(), "startup_positioning"))
				{
					iVar4 = func_73(iVar0);
					if (iVar4 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_66(iVar4);
					}
				}
				if (((Global_93682 != 13 && Global_93682 != 10) && Global_93682 != 11) && Global_93682 != 12)
				{
					if (unk_0x36163153849DFDA1(&(Global_93682.f_3)) == Global_71397)
					{
						if (uParam0->f_12.f_66 == Global_106565.f_32743.f_69[21 /*78*/].f_66)
						{
							func_63(24, 0);
							func_66(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_39(iVar0, uParam0->f_11);
				}
				unk_0x71CA80D41E1338B4(uParam0->f_12.f_66);
				vVar1 = { unk_0xFBB1F99A825CAB09(iVar0, true) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_39(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_45(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0x7BDC41A7CA0C77A2(iParam0, -1, 0);
		if (!unk_0x765F6FEEFF39224F(iVar0))
		{
			iVar0 = unk_0xDAF93A0E27EE6FC7(iParam0, -1);
		}
		if (unk_0x765F6FEEFF39224F(iVar0) && !unk_0xBC2FC12AD0FBF72E(iVar0))
		{
			if (unk_0x541D5C57194E73C4(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x541D5C57194E73C4(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x541D5C57194E73C4(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_106565.f_2357.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x541D5C57194E73C4(iParam0) == Global_106565.f_32743.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0x786AF4A44E1B5B4B(&(Global_106565.f_32743.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0xCE3CFF625BEBAA04(unk_0x00D614EBCFFD919D(iParam0), &(Global_106565.f_32743.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_106565.f_32743.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_106565.f_32743.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0x541D5C57194E73C4(iParam0) == Global_106565.f_32743.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0x786AF4A44E1B5B4B(&(Global_106565.f_32743.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0xCE3CFF625BEBAA04(unk_0x00D614EBCFFD919D(iParam0), &(Global_106565.f_32743.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_106565.f_32743.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_106565.f_32743.f_5590 = iParam1;
	Global_71314 = iParam0;
	Global_106565.f_32743.f_5588 = 1;
	func_40(iParam0, &(Global_106565.f_32743.f_5510));
}

void func_40(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		func_44(uParam1);
		uParam1->f_66 = unk_0x541D5C57194E73C4(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x00D614EBCFFD919D(iParam0), 16);
		*uParam1 = unk_0x4FD199DD0B583F5C(iParam0);
		unk_0x344F2893FA037279(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xEB9780F1DB69CCB5(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xBA1F4FDFE2E12FFE(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x362EE6C496FA3D80(iParam0);
		uParam1->f_67 = unk_0xE84981C3FDDC67C7(iParam0);
		uParam1->f_69 = unk_0x6598BA4640D7E61A(iParam0);
		uParam1->f_70 = unk_0xAF60E30B2CC603B2(iParam0);
		unk_0x7BC172C1973D1722(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x425E187882F60326(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0xA8DC0D4489FEC63C(iParam0, 2))
		{
			unk_0x8950ED5730F62EE8(&(uParam1->f_77), 28);
		}
		if (unk_0xA8DC0D4489FEC63C(iParam0, 3))
		{
			unk_0x8950ED5730F62EE8(&(uParam1->f_77), 29);
		}
		if (unk_0xA8DC0D4489FEC63C(iParam0, 0))
		{
			unk_0x8950ED5730F62EE8(&(uParam1->f_77), 30);
		}
		if (unk_0xA8DC0D4489FEC63C(iParam0, 1))
		{
			unk_0x8950ED5730F62EE8(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_43(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x8D9FD90A001D447C(iParam0, 0))
		{
			uParam1->f_68 = unk_0xDFEA91A83C472035(iParam0);
		}
		if (unk_0x57D74362A8BD1490(uParam1->f_66))
		{
			if (unk_0x411E3F93EC413BF3(iParam0))
			{
				switch (unk_0x6379DAF3AD61121F(iParam0))
				{
					case 3:
					case 0:
						unk_0xCE689A8E8C42ED78(&(uParam1->f_77), 23);
						unk_0x8950ED5730F62EE8(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						unk_0xCE689A8E8C42ED78(&(uParam1->f_77), 23);
						unk_0xCE689A8E8C42ED78(&(uParam1->f_77), 22);
						break;
					
					case 5:
						unk_0x8950ED5730F62EE8(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x8950ED5730F62EE8(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0xEEBF939BC404D2BE(iParam0))
		{
			unk_0x8950ED5730F62EE8(&(uParam1->f_77), 9);
		}
		if (unk_0xFB89D9B67066DB2C(iParam0))
		{
			unk_0x8950ED5730F62EE8(&(uParam1->f_77), 10);
		}
		if (unk_0x17097E17C445781F(iParam0))
		{
			unk_0x8950ED5730F62EE8(&(uParam1->f_77), 13);
			unk_0xB6BB43D4EAC89240(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0xDBEA4F184CA4EA54(iParam0))
		{
			unk_0x8950ED5730F62EE8(&(uParam1->f_77), 12);
		}
		func_42(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x34B1602009421B58(iParam0, iVar0 + 1))
			{
				unk_0x8950ED5730F62EE8(&(uParam1->f_77), func_41(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x7E0C34F3D4B48A15(iParam0, 0))
		{
			unk_0x8950ED5730F62EE8(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0xCE689A8E8C42ED78(&(uParam1->f_77), 11);
		}
		if (unk_0xA0EDFFB6CF5B314A(iParam0, "IgnoredByQuickSave") && unk_0x821D9C8EA372B2F8(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x8950ED5730F62EE8(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0xCE689A8E8C42ED78(&(uParam1->f_77), 27);
		}
	}
}

int func_41(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_42(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x91D5C8283D19AF49(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xCD2E94F6C3101AFC(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0x44DCCCE026DA934A(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (unk_0x44DCCCE026DA934A(*iParam0, iVar1))
			{
				switch (unk_0x57BBAEE53EDFE2D0(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0xEECA910C75BFF02B(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x9EA1E2F3ADA356E7(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x9EA1E2F3ADA356E7(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_43(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case -998177792:
			return 1;
		
		default:
	}
	return 0;
}

void func_44(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_45(int iParam0)
{
	if ((((((((((!unk_0x765F6FEEFF39224F(iParam0) || !unk_0x91D5C8283D19AF49(iParam0, 0)) || func_61(iParam0, 0, 0)) || func_61(iParam0, 1, 0)) || func_61(iParam0, 2, 0)) || func_60(iParam0) != 145) || func_59(iParam0)) || func_58(iParam0)) || func_57(iParam0)) || func_56(iParam0)) || !func_46(unk_0x541D5C57194E73C4(iParam0)))
	{
		if (func_58(iParam0))
		{
		}
		if (func_58(iParam0))
		{
		}
		if (func_61(iParam0, 0, 0))
		{
		}
		if (func_61(iParam0, 1, 0))
		{
		}
		if (func_61(iParam0, 2, 0))
		{
		}
		if (func_60(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_46(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_47(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0x444D956C7F94526E(iParam0) || unk_0x57D74362A8BD1490(iParam0)) || unk_0x097E7778E3E162E8(iParam0)) || unk_0xFFB467183FEE27C4(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case 1938952078:
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_47(int iParam0, bool bParam1)
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
		if (!func_55())
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
		if ((((!func_54() && !func_53()) && !func_52()) && !func_51()) && !func_55())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xDB36A8F522CBC12D() || unk_0x4CE1DD5CFC1F941E()) || unk_0xF5DB888C353E2BED())
		{
		}
		else if (!func_52())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_50(iParam0))
		{
			return 0;
		}
	}
	if (!func_48(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_48(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_49())
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

int func_49()
{
	if (unk_0x4CE1DD5CFC1F941E())
	{
		return unk_0xFCAD2CB678396284();
	}
	return 0;
}

int func_50(int iParam0)
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

int func_51()
{
	return 0;
}

int func_52()
{
	return 1;
}

int func_53()
{
	return 1;
}

int func_54()
{
	if (unk_0xE9D7B652961D4AA3(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_55()
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

int func_56(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x541D5C57194E73C4(iParam0);
	sVar1 = unk_0x00D614EBCFFD919D(iParam0);
	if (iVar0 == joaat("speedo") && unk_0xCE3CFF625BEBAA04(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_47(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_57(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x765F6FEEFF39224F(Global_91073[iVar0]))
		{
			if (Global_91073[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_58(int iParam0)
{
	int iVar0;
	
	if (unk_0x765F6FEEFF39224F(iParam0) && unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x765F6FEEFF39224F(Global_91043[iVar0]) && unk_0x91D5C8283D19AF49(Global_91043[iVar0], 0))
			{
				if (Global_91043[iVar0] == iParam0 && unk_0x541D5C57194E73C4(Global_91043[iVar0]) == unk_0x541D5C57194E73C4(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_59(int iParam0)
{
	int iVar0;
	
	if (unk_0x765F6FEEFF39224F(Global_70409.f_484[24]))
	{
		if (iParam0 == Global_70409.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x765F6FEEFF39224F(Global_70409.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_70409.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_60(int iParam0)
{
	int iVar0;
	
	if (!unk_0x765F6FEEFF39224F(iParam0))
	{
		return 145;
	}
	if (!unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x765F6FEEFF39224F(Global_91043[iVar0]))
		{
			if (Global_91043[iVar0] == iParam0)
			{
				return Global_91053[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_61(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0x765F6FEEFF39224F(iParam0) || !unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_62(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || unk_0x0E4018692D92041D(Global_106565.f_7223[iVar2], 0))
		{
			if (unk_0xE9B30318257F029D(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_62(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

void func_63(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_65(iParam0, 0))
		{
			func_64(iParam0, 1, 0);
			func_64(iParam0, 2, 0);
			func_64(iParam0, 3, 0);
			func_64(iParam0, 4, 0);
			func_64(iParam0, 0, 1);
			Global_70409[iParam0] = 1;
		}
	}
	else
	{
		func_64(iParam0, 0, 0);
	}
}

void func_64(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x8950ED5730F62EE8(&(Global_106565.f_32743[iParam0]), iParam1);
	}
	else
	{
		unk_0xCE689A8E8C42ED78(&(Global_106565.f_32743[iParam0]), iParam1);
	}
}

bool func_65(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_106565.f_32743[iParam0], iParam1);
}

void func_66(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_70(&(Global_70409.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x765F6FEEFF39224F(Global_70409.f_139[iParam0]))
		{
			bVar0 = true;
			if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
			{
				if (unk_0x91D5C8283D19AF49(Global_70409.f_139[iParam0], 0))
				{
					if (unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), Global_70409.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0x0D21E1FDE062ED99(Global_70409.f_139[iParam0], true, 1);
				unk_0x7AC8DF0B83EB4C6B(&(Global_70409.f_139[iParam0]));
			}
		}
		Global_70409[iParam0] = 1;
		if (unk_0x0E4018692D92041D(Global_70409.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_65(iParam0, 0)) && Global_71318.f_66 == 0) && Global_106565.f_32743.f_1958[Global_70409.f_555[0 /*21*/].f_14] != 0) && Global_106565.f_32743.f_1958[Global_70409.f_555[0 /*21*/].f_14] > 3) && (!func_68(0, Global_70409.f_555[0 /*21*/].f_12) || !func_68(1, Global_70409.f_555[0 /*21*/].f_12)))
			{
				func_67(&(Global_106565.f_32743.f_69[Global_70409.f_555[0 /*21*/].f_14 /*78*/]), &Global_71318);
				Global_71396 = Global_106565.f_32743.f_5591;
			}
			func_63(iParam0, 0);
		}
	}
}

void func_67(var uParam0, var uParam1)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

int func_68(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_69(&(Global_106565.f_32743.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_47(Global_106565.f_32743.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_69(var uParam0)
{
	return *uParam0;
}

int func_70(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_71(0, 1);
			uParam0->f_12 = 0;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 20);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_71(0, 1);
			uParam0->f_12 = 0;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 20);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_71(1, 1);
			uParam0->f_12 = 1;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 20);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_71(1, 2);
			uParam0->f_12 = 1;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 19);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_71(1, 1);
			uParam0->f_12 = 1;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 20);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_71(1, 2);
			uParam0->f_12 = 1;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 19);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_71(2, 1);
			uParam0->f_12 = 2;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 20);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_71(2, 1);
			uParam0->f_12 = 2;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 20);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_71(2, 1);
			uParam0->f_12 = 2;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 20);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 0);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 21);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 14);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 10);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 12);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 0);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 21);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 14);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 10);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 12);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 0);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 21);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 14);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 10);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 12);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 0);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 21);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 14);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 10);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 12);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 22);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 0);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 21);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 14);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 10);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 12);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 22);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 0);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 21);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 14);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 10);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 12);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 22);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 0);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 21);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 14);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 10);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 12);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 0);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 21);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 14);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 10);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 12);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 0);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 21);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 14);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 10);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 12);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 23);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 0);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 21);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 14);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 10);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 12);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 24);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 28);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 0);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 21);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 14);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 10);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 12);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 24);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 28);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 0);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 21);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 14);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 10);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 12);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 24);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 28);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 10);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 12);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 27);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 24);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 10);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 12);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 27);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 24);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 10);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 12);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 27);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 24);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 10);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 11);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 13);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 10);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 11);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 13);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 9);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 9);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 23);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 23);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = 1938952078;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 23);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 2);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 30);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 2);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 22);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_55())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 13);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 2);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 1);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 23);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_55())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 13);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 2);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 1);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 23);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 0);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 21);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 23);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 6);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 30);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 23);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 30);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 23);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0x0E4018692D92041D(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_106565.f_32743.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_98(Global_106565.f_32743.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_106565.f_32743.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_106565.f_32743.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_106565.f_32743.f_1934[uParam0->f_14];
		}
	}
	if (unk_0x0E4018692D92041D(uParam0->f_9, 19))
	{
		if (!func_98(Global_106565.f_2357.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_106565.f_2357.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_106565.f_2357.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0x0E4018692D92041D(uParam0->f_9, 20))
	{
		if (!func_98(Global_106565.f_2357.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_106565.f_2357.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_106565.f_2357.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_71(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_17(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_72(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_72(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_106565.f_9079.f_99.f_58[128] && !Global_106565.f_9079.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_106565.f_9079.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_106565.f_9079.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

int func_73(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((unk_0x765F6FEEFF39224F(Global_70409.f_484[iVar0]) && !unk_0xD62C4419A41F106A(Global_70409.f_484[iVar0], 0)) && unk_0x91D5C8283D19AF49(Global_70409.f_484[iVar0], 0))
		{
			unk_0x344F2893FA037279(iParam0, &iVar1, &iVar2);
			unk_0x344F2893FA037279(Global_70409.f_484[iVar0], &iVar3, &iVar4);
			if (((unk_0x541D5C57194E73C4(iParam0) == unk_0x541D5C57194E73C4(Global_70409.f_484[iVar0]) && unk_0xE84981C3FDDC67C7(iParam0) == unk_0xE84981C3FDDC67C7(Global_70409.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_74(int iParam0, vector3 vParam1, bool bParam2)
{
	int iVar0;
	var uVar1[3];
	int iVar2;
	int iVar3;
	
	iVar0 = unk_0x541D5C57194E73C4(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_76(iParam0, Global_70409.f_139[38], 0))
			{
				func_66(38);
				return 1;
			}
			break;
		
		case 1938952078:
			if (func_76(iParam0, Global_70409.f_139[43], 1))
			{
				func_66(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar2 = unk_0x2437CAE892D2F387(unk_0x33CD235DF1E6A94E(), &uVar1);
			iVar3 = 0;
			while (iVar3 <= (iVar2 - 1))
			{
				if (func_76(iParam0, uVar1[iVar3], 1) && func_75(unk_0xFBB1F99A825CAB09(uVar1[iVar3], true), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!bParam2 || func_98(vParam1, 0f, 0f, 0f, 0)) || unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(iParam0, true), unk_0xFBB1F99A825CAB09(uVar1[iVar3], true), true) < 10f)
					{
						unk_0x7AC8DF0B83EB4C6B(&iParam0);
						return 1;
					}
					else
					{
						return 0;
					}
				}
				iVar3++;
			}
			break;
		
		case joaat("luxor2"):
			if ((unk_0x765F6FEEFF39224F(Global_70409.f_484[14]) && unk_0x91D5C8283D19AF49(iParam0, 0)) && unk_0x91D5C8283D19AF49(Global_70409.f_484[14], 0))
			{
				if (unk_0x541D5C57194E73C4(Global_70409.f_484[14]) == joaat("luxor2") && unk_0xE84981C3FDDC67C7(iParam0) == unk_0xE84981C3FDDC67C7(Global_70409.f_484[14]))
				{
					func_66(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((unk_0x765F6FEEFF39224F(Global_70409.f_484[20]) && unk_0x91D5C8283D19AF49(iParam0, 0)) && unk_0x91D5C8283D19AF49(Global_70409.f_484[20], 0))
			{
				if (unk_0x541D5C57194E73C4(Global_70409.f_484[20]) == joaat("swift2") && unk_0xE84981C3FDDC67C7(iParam0) == unk_0xE84981C3FDDC67C7(Global_70409.f_484[20]))
				{
					func_66(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_75(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)
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

int func_76(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((unk_0x765F6FEEFF39224F(iParam1) && !unk_0xD62C4419A41F106A(iParam1, 0)) && unk_0x91D5C8283D19AF49(iParam1, 0))
	{
		if (bParam2)
		{
			unk_0x344F2893FA037279(iParam0, &iVar0, &iVar1);
			unk_0x344F2893FA037279(iParam1, &iVar2, &iVar3);
			if (iVar0 == iVar2 && iVar1 == iVar3)
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

void func_77(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0x765F6FEEFF39224F(Global_91043[iVar0]))
		{
			Global_91043[iVar0] = iParam0;
			Global_91053[iVar0] = iParam1;
			Global_91063[iVar0] = unk_0x541D5C57194E73C4(iParam0);
			if (unk_0x0C2E237744BA0026(Global_91063[iVar0]))
			{
				Global_91091[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_91091[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_78(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x765F6FEEFF39224F(Global_91043[iVar0]))
		{
			if (iParam0 == 145 || Global_91053[iVar0] == iParam0)
			{
				if (iParam1 == 0 || unk_0x541D5C57194E73C4(Global_91043[iVar0]) == func_71(iParam0, iParam1))
				{
					if (!unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), Global_91043[iVar0], 0))
					{
						unk_0x0D21E1FDE062ED99(Global_91043[iVar0], false, 1);
						unk_0x7AC8DF0B83EB4C6B(&(Global_91043[iVar0]));
						Global_91053[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_79(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		if (!func_88(iParam0))
		{
			if (unk_0x36163153849DFDA1(&(uParam1->f_1)) != 0)
			{
				unk_0x6F10E9B95245828B(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < unk_0x0E8FDE8C0E616A4C())
			{
				unk_0x177C85C6D06E7E04(iParam0, *uParam1);
			}
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (unk_0x0E4018692D92041D(uParam1->f_77, func_41(iVar0 + 1)))
			{
			}
			else
			{
				unk_0x8950ED5730F62EE8(&(uParam1->f_77), func_41(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0x0E4018692D92041D(uParam1->f_77, func_41(iVar1 + 1)))
			{
			}
			else
			{
				unk_0x8950ED5730F62EE8(&(uParam1->f_77), func_41(iVar1 + 1));
			}
		}
		if (uParam1->f_66 == 433954513)
		{
			unk_0x783094EA0E540662(iParam0, 0);
			if (unk_0xEECA910C75BFF02B(iParam0, 5) != -1)
			{
				unk_0x783094EA0E540662(iParam0, 1);
			}
		}
		if (unk_0x0E4018692D92041D(uParam1->f_77, 13))
		{
			unk_0xB652C463DE18181E(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x7437B994D9F2A07A(iParam0);
		}
		if (unk_0x0E4018692D92041D(uParam1->f_77, 12))
		{
			unk_0x5AA2C10BC3876E75(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x2AB433FAF38DC9B4(iParam0);
		}
		unk_0x65EA11CF317FE4FA(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0x4A7AB87632044178(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0x0E4018692D92041D(uParam1->f_77, 15) || func_87(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_86())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		unk_0x4D394438E3492CCE(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !func_43(uParam1->f_66))
		{
			unk_0xBF98CE54BD141AFF(iParam0, 0);
		}
		else
		{
			unk_0xBF98CE54BD141AFF(iParam0, 0);
			unk_0xBF98CE54BD141AFF(iParam0, uParam1->f_65);
		}
		unk_0x4459178BAF2918E1(iParam0, !unk_0x0E4018692D92041D(uParam1->f_77, 9));
		if (bParam2)
		{
			unk_0xD303E20CB0AE4AD0(iParam0, uParam1->f_70);
		}
		unk_0xB8A3AC2A7B2465FD(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0xA7CD654BB1AF9419(iParam0, 2, unk_0x0E4018692D92041D(uParam1->f_77, 28));
		unk_0xA7CD654BB1AF9419(iParam0, 3, unk_0x0E4018692D92041D(uParam1->f_77, 29));
		unk_0xA7CD654BB1AF9419(iParam0, 0, unk_0x0E4018692D92041D(uParam1->f_77, 30));
		unk_0xA7CD654BB1AF9419(iParam0, 1, unk_0x0E4018692D92041D(uParam1->f_77, 31));
		unk_0x2D5A67427544788C(iParam0, unk_0x0E4018692D92041D(uParam1->f_77, 10));
		if (unk_0x864DE9BC3905751B(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0x40DFA7AAEFC8F34C(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0xC3622EC0E0215A79(unk_0x541D5C57194E73C4(iParam0)))
			{
				if (unk_0x9E374B5F44A76AE2(unk_0x541D5C57194E73C4(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_85(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_85(iParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0x8D9FD90A001D447C(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0x72B72EA288B11371(iParam0, 1);
			}
			else
			{
				unk_0x474234FD6A8029F8(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_80(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0x097E7778E3E162E8(uParam1->f_66) && !unk_0x444D956C7F94526E(uParam1->f_66))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (unk_0x0E4018692D92041D(uParam1->f_77, func_41(iVar2 + 1)))
				{
					if (!unk_0x34B1602009421B58(iParam0, iVar2 + 1))
					{
						unk_0x3A3707C1ECABF993(iParam0, iVar2 + 1, false);
					}
				}
				else if (unk_0x34B1602009421B58(iParam0, iVar2 + 1))
				{
					unk_0x3A3707C1ECABF993(iParam0, iVar2 + 1, true);
				}
				iVar2++;
			}
		}
		if ((unk_0x541D5C57194E73C4(iParam0) == joaat("sheava") || unk_0x541D5C57194E73C4(iParam0) == joaat("omnis")) || unk_0x541D5C57194E73C4(iParam0) == joaat("le7b"))
		{
			if (unk_0xEECA910C75BFF02B(iParam0, 0) == -1)
			{
				unk_0x3A3707C1ECABF993(iParam0, 1, false);
			}
		}
		if (((unk_0x57D74362A8BD1490(uParam1->f_66) && unk_0x65DCCFD295360BFB(iParam0)) && !unk_0xD470A4E16E9AAE0E(iParam0, -2118308144)) && !((((Global_4456448.f_55685 == 6 || Global_4456448.f_55685 == 7) || Global_4456448.f_55685 == 18) || Global_4456448.f_55685 == 19) && Global_4456448.f_2 == 20))
		{
			if (!unk_0x0E4018692D92041D(uParam1->f_77, 23))
			{
				if (unk_0x0E4018692D92041D(uParam1->f_77, 22))
				{
					unk_0x6B091F0028E6FE5F(iParam0, 2);
				}
				else
				{
					unk_0x6B091F0028E6FE5F(iParam0, 3);
				}
			}
			else
			{
				unk_0x6B091F0028E6FE5F(iParam0, 4);
			}
		}
		if (unk_0x0E4018692D92041D(uParam1->f_77, 27))
		{
			unk_0x6767500A150CF86F(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0x6767500A150CF86F(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_80(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x91D5C8283D19AF49(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xCD2E94F6C3101AFC(*iParam0) == 0)
	{
		return 0;
	}
	unk_0x520614EF43727019(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			unk_0xBCD21D2535E4A2C9(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				unk_0xBCD21D2535E4A2C9(*iParam0, iVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					unk_0xC8A936C78C6F2FB7(*iParam0, 255);
				}
				else
				{
					unk_0xC8A936C78C6F2FB7(*iParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				unk_0xBCD21D2535E4A2C9(*iParam0, iVar1, false);
			}
		}
		else if (unk_0xEECA910C75BFF02B(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0x230C57280E1AB399(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0xB4B3AEABE432069B(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0xB4B3AEABE432069B(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0xB4B3AEABE432069B(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_84(unk_0x541D5C57194E73C4(*iParam0), 1) && unk_0xEECA910C75BFF02B(*iParam0, 24) != func_83(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0xB4B3AEABE432069B(*iParam0, 24, func_83(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_82(iParam0);
	if (func_81(*iParam0))
	{
		unk_0xA155CCFA52A9A0C4(*iParam0, 1);
		unk_0x09993E7216CF52C4(*iParam0, true);
	}
	return 1;
}

int func_81(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((unk_0x765F6FEEFF39224F(iParam0) && unk_0x91D5C8283D19AF49(iParam0, 0)) && unk_0xCD2E94F6C3101AFC(iParam0) > 0)
	{
		unk_0x520614EF43727019(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0xEECA910C75BFF02B(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0xA8D8B8C75983E4D9(iParam0, iVar1, unk_0xEECA910C75BFF02B(iParam0, iVar1)), 16);
				iVar2 = unk_0x36163153849DFDA1(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x36163153849DFDA1("MNU_CAGE") || iVar2 == unk_0x36163153849DFDA1("SABRE_CAG"))
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

void func_82(var uParam0)
{
	switch (unk_0x541D5C57194E73C4(*uParam0))
	{
		case -1700874274:
			if (unk_0xEECA910C75BFF02B(*uParam0, 4) == 0)
			{
				unk_0xB4B3AEABE432069B(*uParam0, 13, 0, false);
			}
			else
			{
				unk_0x230C57280E1AB399(*uParam0, 13);
			}
			break;
	}
}

int func_83(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0x765F6FEEFF39224F(iParam0) && unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		switch (unk_0x541D5C57194E73C4(iParam0))
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
		iVar0 = unk_0x3DE306309922F8D1(iParam0, 38);
		iVar1 = unk_0x3DE306309922F8D1(iParam0, 24);
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

int func_84(int iParam0, int iParam1)
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
			if (!Global_262145.f_14096)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14097)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14095)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14098)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14100)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14099)
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
			if (Global_262145.f_18543)
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
			if (Global_262145.f_18545)
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
			if (Global_262145.f_18549)
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
			if (Global_262145.f_18546)
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
			if (Global_262145.f_18553)
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
			if (Global_262145.f_18551)
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
			if (Global_262145.f_18556)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 1356124575:
			if (Global_262145.f_20499)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -1924433270:
			if (Global_262145.f_20500)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -2061049099:
		case 373261600:
		case 1742022738:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 628003514:
		case 1537277726:
		case 1239571361:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 1009171724:
		case -1924800695:
		case -1744505657:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case -27326686:
		case -1812949672:
		case -1374500452:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 1721676810:
		case 840387324:
		case -715746948:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case -688189648:
		case -1375060657:
		case -1293924613:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 668439077:
		case -1694081890:
		case -2042350822:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
	}
	return 0;
}

void func_85(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xCD2E94F6C3101AFC(iParam0) > 0)
	{
		unk_0x520614EF43727019(iParam0, 0);
		iVar0 = unk_0xEECA910C75BFF02B(iParam0, 24);
		iVar1 = unk_0x9EA1E2F3ADA356E7(iParam0, 24);
		unk_0x4FF8F6D30BFBB224(iParam0, iParam1);
		if (unk_0x541D5C57194E73C4(iParam0) == joaat("tornado6") || unk_0x541D5C57194E73C4(iParam0) == -1804415708)
		{
			return;
		}
		if (iVar0 == -1)
		{
			unk_0x230C57280E1AB399(iParam0, 24);
		}
		else
		{
			unk_0xB4B3AEABE432069B(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

bool func_86()
{
	return unk_0xE9D7B652961D4AA3(-1691188696);
}

int func_87(int iParam0)
{
	int iVar0;
	
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		if (unk_0x91D5C8283D19AF49(iParam0, 0))
		{
			if (unk_0x854E8B95CE1C5D29("MPBitset", 3))
			{
				if (unk_0xA0EDFFB6CF5B314A(iParam0, "MPBitset"))
				{
					iVar0 = unk_0xE48FAA8A938257C9(iParam0, "MPBitset");
				}
				return unk_0x0E4018692D92041D(iVar0, 4);
			}
		}
	}
	return 0;
}

int func_88(int iParam0)
{
	if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		if (!func_94(unk_0x95B959F18401C09A(), -1))
		{
			iParam0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
		}
	}
	if (!unk_0x765F6FEEFF39224F(iParam0))
	{
		return 0;
	}
	if (unk_0xD62C4419A41F106A(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		return 0;
	}
	if (func_90(unk_0x95B959F18401C09A()) == 3)
	{
		if (unk_0x765F6FEEFF39224F(iParam0) && unk_0x91D5C8283D19AF49(iParam0, 0))
		{
			if (func_89(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_89(int iParam0)
{
	if (unk_0x854E8B95CE1C5D29("FMDeliverableID", 3))
	{
		if (unk_0xA0EDFFB6CF5B314A(iParam0, "FMDeliverableID"))
		{
			return unk_0xE48FAA8A938257C9(iParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_90(int iParam0)
{
	if (func_93(iParam0) == 233)
	{
		return func_91(iParam0);
	}
	return -1;
}

int func_91(int iParam0)
{
	if (func_92(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_181;
	}
	return -1;
}

int func_92(int iParam0, int iParam1)
{
	if (Global_1626536[iParam0 /*603*/].f_11.f_33 != -1 || (iParam1 && Global_1626536[iParam0 /*603*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_93(int iParam0)
{
	if (func_92(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_33;
	}
	return -1;
}

int func_94(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_95(iParam0, 1, 1))
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

int func_95(int iParam0, bool bParam1, bool bParam2)
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

void func_96(vector3 vParam0, float fParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_70(&(Global_70409.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0x16E00F066AFFEA0D(vParam0, Global_70409.f_555[0 /*21*/], bParam2) <= fParam1)
			{
				func_66(iVar0);
			}
		}
		iVar0++;
	}
}

int func_97(var uParam0)
{
	if (func_99(uParam0))
	{
		if (unk_0x5D98D654CDC2165A(uParam0->f_12.f_66))
		{
			return 1;
		}
		else
		{
			return 0;
		}
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

bool func_98(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_99(var uParam0)
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_47(uParam0->f_12.f_66, 0))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == joaat("stunt") && func_75(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

bool func_100()
{
	return func_97(&(Global_97130.f_2890));
}

void func_101()
{
	func_102(&(Global_97130.f_2890));
}

void func_102(var uParam0)
{
	if (func_99(uParam0))
	{
		unk_0xB815670C37E03CDE(uParam0->f_12.f_66);
	}
}

int func_103(vector3 vParam0, int iParam1)
{
	return func_104(Global_97130.f_2890.f_12.f_66, vParam0, iParam1);
}

int func_104(int iParam0, vector3 vParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam2 == 1)
	{
		vParam1 = { func_105() };
	}
	unk_0xFEF5F9BB57EA2E8D(iParam0, &vVar0, &vVar1);
	if ((vVar1.x - vVar0.x) > vParam1.x)
	{
		return 0;
	}
	else if ((vVar1.y - vVar0.y) > vParam1.y)
	{
		return 0;
	}
	else if ((vVar1.z - vVar0.z) > vParam1.z)
	{
		return 0;
	}
	return 1;
}

Vector3 func_105()
{
	return 2.55f, 5.665f, 2.55f;
}

int func_106()
{
	return func_99(&(Global_97130.f_2890));
}

void func_107()
{
	unk_0xB815670C37E03CDE(joaat("armytrailer2"));
	unk_0xB815670C37E03CDE(joaat("packer"));
	unk_0xB815670C37E03CDE(joaat("s_m_y_construct_01"));
	unk_0xB815670C37E03CDE(joaat("s_m_m_security_01"));
	unk_0xB815670C37E03CDE(joaat("bison2"));
	while ((((!unk_0x5D98D654CDC2165A(joaat("armytrailer2")) || !unk_0x5D98D654CDC2165A(joaat("packer"))) || !unk_0x5D98D654CDC2165A(joaat("s_m_y_construct_01"))) || !unk_0x5D98D654CDC2165A(joaat("s_m_m_security_01"))) || !unk_0x5D98D654CDC2165A(joaat("bison2")))
	{
		wait(0);
	}
	if (!unk_0x765F6FEEFF39224F(iLocal_32))
	{
		if (unk_0x765F6FEEFF39224F(Global_90209[1]))
		{
			unk_0x0D21E1FDE062ED99(Global_90209[1], true, 1);
			iLocal_32 = Global_90209[1];
			unk_0x320D9994786BCA17(iLocal_32);
		}
		else
		{
			iLocal_32 = unk_0xC651C43AB13A15E5(joaat("armytrailer2"), 919.303f, -1553.88f, 29.7789f, 167.1917f, 1, 1, 0);
			unk_0x320D9994786BCA17(iLocal_32);
		}
	}
	if (!unk_0x765F6FEEFF39224F(iLocal_33))
	{
		if (unk_0x765F6FEEFF39224F(Global_90209[2]))
		{
			unk_0x0D21E1FDE062ED99(Global_90209[2], true, 1);
			iLocal_33 = Global_90209[2];
			unk_0x09993E7216CF52C4(iLocal_33, true);
			unk_0xD303E20CB0AE4AD0(iLocal_33, 7);
			func_110(iLocal_33, -1);
			func_109(iLocal_33, -1);
		}
		else
		{
			iLocal_33 = unk_0xC651C43AB13A15E5(joaat("packer"), 919.303f, -1553.88f, 29.7789f, 167.1917f, 1, 1, 0);
			unk_0x09993E7216CF52C4(iLocal_33, true);
			unk_0xD303E20CB0AE4AD0(iLocal_33, 7);
			func_110(iLocal_33, -1);
			func_109(iLocal_33, -1);
		}
	}
	unk_0x44C3E7DEB0315CD4(iLocal_33, iLocal_32, 0.5f);
	unk_0x71CA80D41E1338B4(joaat("armytrailer2"));
	unk_0x71CA80D41E1338B4(joaat("packer"));
	unk_0x71CA80D41E1338B4(joaat("bison2"));
	if (!unk_0x765F6FEEFF39224F(iLocal_35[0]))
	{
		if (unk_0x765F6FEEFF39224F(Global_90209.f_9[0]))
		{
			unk_0x0D21E1FDE062ED99(Global_90209.f_9[0], true, 1);
			iLocal_35[0] = Global_90209.f_9[0];
			unk_0x0648A75D3F60E864(iLocal_35[0], iLocal_264);
			func_108(iLocal_35[0], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x4A852F02088ECC9D(iLocal_35[0], true);
		}
		else
		{
			iLocal_35[0] = unk_0x9BA5CF280376EEA4(26, joaat("s_m_y_construct_01"), 912.34f, -1543.297f, 29.6469f, 16.169f, 1, true);
			unk_0x0648A75D3F60E864(iLocal_35[0], iLocal_264);
			if (unk_0x89F20C4A841A3473(912.3f, -1542.6f, 30.4f, 3f, 0))
			{
				unk_0x1EC46D51C0C9524B(iLocal_35[0], 912.3f, -1542.6f, 30.4f, 5f, 0);
			}
			unk_0x4A852F02088ECC9D(iLocal_35[0], true);
			func_108(iLocal_35[0], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
		}
	}
	if (!unk_0x765F6FEEFF39224F(iLocal_35[1]))
	{
		if (unk_0x765F6FEEFF39224F(Global_90209.f_9[1]))
		{
			unk_0x0D21E1FDE062ED99(Global_90209.f_9[1], true, 1);
			iLocal_35[1] = Global_90209.f_9[1];
			unk_0x0648A75D3F60E864(iLocal_35[1], iLocal_264);
			func_108(iLocal_35[1], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x4A852F02088ECC9D(iLocal_35[1], true);
		}
		else
		{
			iLocal_35[1] = unk_0x9BA5CF280376EEA4(26, joaat("s_m_y_construct_01"), 917.5028f, -1517.401f, 29.9673f, 158.5738f, 1, true);
			unk_0x0648A75D3F60E864(iLocal_35[1], iLocal_264);
			if (unk_0x89F20C4A841A3473(917.5028f, -1517.401f, 29.9673f, 3f, 0))
			{
				unk_0x1EC46D51C0C9524B(iLocal_35[1], 917.5028f, -1517.401f, 29.9673f, 5f, 0);
			}
			func_108(iLocal_35[1], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x4A852F02088ECC9D(iLocal_35[1], true);
		}
	}
	if (!unk_0x765F6FEEFF39224F(iLocal_35[2]))
	{
		if (unk_0x765F6FEEFF39224F(Global_90209.f_9[2]))
		{
			unk_0x0D21E1FDE062ED99(Global_90209.f_9[2], true, 1);
			iLocal_35[2] = Global_90209.f_9[2];
			unk_0x0648A75D3F60E864(iLocal_35[2], iLocal_264);
			func_108(iLocal_35[2], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x4A852F02088ECC9D(iLocal_35[2], true);
		}
		else
		{
			iLocal_35[2] = unk_0x9BA5CF280376EEA4(26, joaat("s_m_y_construct_01"), 869.6423f, -1541.423f, 29.2516f, 346.9848f, 1, true);
			unk_0x0648A75D3F60E864(iLocal_35[2], iLocal_264);
			if (unk_0x89F20C4A841A3473(869.6423f, -1541.423f, 29.2516f, 3f, 0))
			{
				unk_0x1EC46D51C0C9524B(iLocal_35[2], 869.6423f, -1541.423f, 29.2516f, 5f, 0);
			}
			func_108(iLocal_35[2], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x4A852F02088ECC9D(iLocal_35[2], true);
		}
	}
	if (!unk_0x765F6FEEFF39224F(iLocal_35[3]))
	{
		if (unk_0x765F6FEEFF39224F(Global_90209.f_9[3]))
		{
			unk_0x0D21E1FDE062ED99(Global_90209.f_9[3], true, 1);
			iLocal_35[3] = Global_90209.f_9[3];
			unk_0x0648A75D3F60E864(iLocal_35[3], iLocal_264);
			func_108(iLocal_35[3], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x4A852F02088ECC9D(iLocal_35[3], true);
		}
		else
		{
			iLocal_35[3] = unk_0x9BA5CF280376EEA4(26, joaat("s_m_y_construct_01"), 884.3046f, -1573.188f, 29.8247f, 182.9722f, 1, true);
			unk_0x0648A75D3F60E864(iLocal_35[3], iLocal_264);
			if (unk_0x89F20C4A841A3473(884.3046f, -1573.188f, 29.8247f, 3f, 0))
			{
				unk_0x1EC46D51C0C9524B(iLocal_35[3], 884.3046f, -1573.188f, 29.8247f, 5f, 0);
			}
			func_108(iLocal_35[3], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x4A852F02088ECC9D(iLocal_35[3], true);
		}
	}
	if (!unk_0x765F6FEEFF39224F(iLocal_35[4]))
	{
		if (unk_0x765F6FEEFF39224F(Global_90209.f_9[4]))
		{
			unk_0x0D21E1FDE062ED99(Global_90209.f_9[4], true, 1);
			iLocal_35[4] = Global_90209.f_9[4];
			unk_0x0648A75D3F60E864(iLocal_35[4], iLocal_264);
			func_108(iLocal_35[4], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x4A852F02088ECC9D(iLocal_35[4], true);
		}
		else
		{
			iLocal_35[4] = unk_0x9BA5CF280376EEA4(26, joaat("s_m_y_construct_01"), 903.8805f, -1575.02f, 29.8327f, 308.1952f, 1, true);
			unk_0x0648A75D3F60E864(iLocal_35[4], iLocal_264);
			if (unk_0x89F20C4A841A3473(903.8805f, -1575.02f, 29.8327f, 3f, 0))
			{
				unk_0x1EC46D51C0C9524B(iLocal_35[4], 903.8805f, -1575.02f, 29.8327f, 5f, 0);
			}
			func_108(iLocal_35[4], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x4A852F02088ECC9D(iLocal_35[4], true);
		}
	}
	if (!unk_0x765F6FEEFF39224F(iLocal_35[5]))
	{
		if (unk_0x765F6FEEFF39224F(Global_90209.f_9[5]))
		{
			unk_0x0D21E1FDE062ED99(Global_90209.f_9[5], true, 1);
			iLocal_35[5] = Global_90209.f_9[5];
			unk_0x0648A75D3F60E864(iLocal_35[5], iLocal_264);
			func_108(iLocal_35[5], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x4A852F02088ECC9D(iLocal_35[5], true);
		}
		else
		{
			iLocal_35[5] = unk_0x9BA5CF280376EEA4(26, joaat("s_m_y_construct_01"), 906.2186f, -1575.108f, 29.8125f, 55.9906f, 1, true);
			unk_0x0648A75D3F60E864(iLocal_35[5], iLocal_264);
			if (unk_0x89F20C4A841A3473(906.2186f, -1575.108f, 29.8125f, 3f, 0))
			{
				unk_0x1EC46D51C0C9524B(iLocal_35[5], 906.2186f, -1575.108f, 29.8125f, 5f, 0);
			}
			func_108(iLocal_35[5], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x4A852F02088ECC9D(iLocal_35[5], true);
		}
	}
	if (!unk_0x765F6FEEFF39224F(iLocal_35[6]))
	{
		if (unk_0x765F6FEEFF39224F(Global_90209.f_9[8]))
		{
			unk_0x0D21E1FDE062ED99(Global_90209.f_9[8], true, 1);
			iLocal_35[6] = Global_90209.f_9[8];
			unk_0x0648A75D3F60E864(iLocal_35[6], iLocal_264);
			func_108(iLocal_35[6], 20f, 5f, 120f, -45f, 45f);
			unk_0x4A852F02088ECC9D(iLocal_35[6], true);
		}
		else
		{
			iLocal_35[6] = unk_0x9BA5CF280376EEA4(26, joaat("s_m_y_construct_01"), 889.285f, -1561.485f, 29.6539f, 22.2456f, 1, true);
			unk_0x0648A75D3F60E864(iLocal_35[6], iLocal_264);
			if (unk_0x89F20C4A841A3473(889.285f, -1561.485f, 29.6539f, 3f, 0))
			{
				unk_0x1EC46D51C0C9524B(iLocal_35[6], 889.285f, -1561.485f, 29.6539f, 5f, 0);
			}
			func_108(iLocal_35[6], 20f, 5f, 120f, -45f, 45f);
			unk_0x4A852F02088ECC9D(iLocal_35[6], true);
		}
	}
	if (!unk_0x765F6FEEFF39224F(iLocal_36[0]))
	{
		if (unk_0x765F6FEEFF39224F(Global_90209.f_9[6]))
		{
			unk_0x0D21E1FDE062ED99(Global_90209.f_9[6], true, 1);
			iLocal_36[0] = Global_90209.f_9[6];
			unk_0x0648A75D3F60E864(iLocal_36[0], iLocal_265);
			func_108(iLocal_36[0], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x4A852F02088ECC9D(iLocal_36[0], true);
			unk_0x697EBA5CF1A6AB57(iLocal_36[0], joaat("weapon_pistol"), 100, false, false);
			unk_0x5464B9731013E08C(iLocal_36[0], "S_M_M_GENERICSECURITY_01_LATINO_MINI_01");
		}
		else
		{
			iLocal_36[0] = unk_0x9BA5CF280376EEA4(26, joaat("s_m_m_security_01"), 863.1551f, -1564.572f, 29.3231f, 130.7946f, 1, true);
			unk_0x0648A75D3F60E864(iLocal_36[0], iLocal_265);
			func_108(iLocal_36[0], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x4A852F02088ECC9D(iLocal_36[0], true);
			unk_0x697EBA5CF1A6AB57(iLocal_36[0], joaat("weapon_pistol"), 100, false, false);
			unk_0x5464B9731013E08C(iLocal_36[0], "S_M_M_GENERICSECURITY_01_LATINO_MINI_01");
		}
	}
	if (!unk_0x765F6FEEFF39224F(iLocal_36[1]))
	{
		if (unk_0x765F6FEEFF39224F(Global_90209.f_9[7]))
		{
			unk_0x0D21E1FDE062ED99(Global_90209.f_9[7], true, 1);
			iLocal_36[1] = Global_90209.f_9[7];
			unk_0x0648A75D3F60E864(iLocal_36[1], iLocal_265);
			func_108(iLocal_36[1], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x4A852F02088ECC9D(iLocal_36[1], true);
			unk_0x697EBA5CF1A6AB57(iLocal_36[1], joaat("weapon_pistol"), 100, false, false);
			unk_0x5464B9731013E08C(iLocal_36[1], "S_M_M_GENERICSECURITY_01_LATINO_MINI_02");
		}
		else
		{
			iLocal_36[1] = unk_0x9BA5CF280376EEA4(26, joaat("s_m_m_security_01"), 940.2881f, -1573.877f, 29.3866f, 269.1856f, 1, true);
			unk_0x0648A75D3F60E864(iLocal_36[1], iLocal_265);
			func_108(iLocal_36[1], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x4A852F02088ECC9D(iLocal_36[1], true);
			unk_0x697EBA5CF1A6AB57(iLocal_36[1], joaat("weapon_pistol"), 100, false, false);
			unk_0x5464B9731013E08C(iLocal_36[1], "S_M_M_GENERICSECURITY_01_LATINO_MINI_02");
		}
	}
	unk_0x71CA80D41E1338B4(joaat("s_m_y_construct_01"));
	unk_0x71CA80D41E1338B4(joaat("s_m_m_security_01"));
}

void func_108(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (!unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		unk_0x18E5E2B41CD6CE17(iParam0, fParam1);
		unk_0x7E92DEE57ADB65E9(iParam0, fParam2);
		unk_0xC733703096DC0A81(iParam0, (fParam3 / 2f));
		unk_0xE248392F80E099F7(iParam0, fParam4);
		unk_0x2F0BCF622D7975E8(iParam0, fParam5);
	}
}

void func_109(int iParam0, int iParam1)
{
	Global_56505 = iParam0;
	Global_56506 = iParam1;
}

void func_110(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_56507 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_68589)
	{
		if (iParam1 == -1 || Global_68590[iVar0 /*9*/] == iParam1)
		{
			if (Global_68590[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_68590[iVar0 /*9*/].f_6 = iParam0;
				Global_68590[iVar0 /*9*/].f_7 = 1;
				Global_68590[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_111()
{
	iLocal_54 = 0;
	while (iLocal_54 <= 6)
	{
		if (unk_0x765F6FEEFF39224F(iLocal_35[iLocal_54]) && unk_0x9E08E12414BD4476(iLocal_35[iLocal_54], 1))
		{
			unk_0x4B8B69DAE5BAC592(&(iLocal_35[iLocal_54]));
		}
		iLocal_54++;
	}
	if (unk_0x765F6FEEFF39224F(iLocal_36[0]) && unk_0x9E08E12414BD4476(iLocal_36[0], 1))
	{
		unk_0x4B8B69DAE5BAC592(&(iLocal_36[0]));
	}
	if (unk_0x765F6FEEFF39224F(iLocal_36[1]) && unk_0x9E08E12414BD4476(iLocal_36[1], 1))
	{
		unk_0x4B8B69DAE5BAC592(&(iLocal_36[1]));
	}
	if (unk_0x765F6FEEFF39224F(iLocal_37) && unk_0x9E08E12414BD4476(iLocal_37, 1))
	{
		unk_0x4B8B69DAE5BAC592(&iLocal_37);
	}
	if (unk_0x765F6FEEFF39224F(iLocal_38) && unk_0x9E08E12414BD4476(iLocal_38, 1))
	{
		unk_0x4B8B69DAE5BAC592(&iLocal_38);
	}
	if (unk_0x765F6FEEFF39224F(iLocal_39) && unk_0x9E08E12414BD4476(iLocal_39, 1))
	{
		unk_0x4B8B69DAE5BAC592(&iLocal_39);
	}
	if (unk_0x765F6FEEFF39224F(iLocal_40) && unk_0x9E08E12414BD4476(iLocal_40, 1))
	{
		unk_0x4B8B69DAE5BAC592(&iLocal_40);
	}
	if (!func_30())
	{
		unk_0xBEADAF07D2339505(unk_0x33CD235DF1E6A94E(), 519.1906f, -2980.994f, 5.0443f, 1, false, 0, 1);
		unk_0x3C990C409B3845DE(unk_0x33CD235DF1E6A94E(), 270.1911f);
	}
	if (unk_0x765F6FEEFF39224F(iLocal_32) && unk_0x9E08E12414BD4476(iLocal_32, 1))
	{
		unk_0x7AC8DF0B83EB4C6B(&iLocal_32);
	}
	if (unk_0x765F6FEEFF39224F(Global_90209[3]))
	{
		unk_0x0D21E1FDE062ED99(Global_90209[3], true, 0);
		unk_0x7AC8DF0B83EB4C6B(&(Global_90209[3]));
	}
	if (unk_0x765F6FEEFF39224F(iLocal_33) && unk_0x9E08E12414BD4476(iLocal_33, 1))
	{
		unk_0x7AC8DF0B83EB4C6B(&iLocal_33);
	}
	unk_0xFF2DEA68E2D3602E("cellphone@str");
	unk_0xFF2DEA68E2D3602E("misscarsteal4@director_grip");
	unk_0x33854B8151B6D8EC("FHPRB_START");
	unk_0x33854B8151B6D8EC("FHPRB_TRUCK");
	unk_0x33854B8151B6D8EC("FHPRB_COPS");
	unk_0x33854B8151B6D8EC("FHPRB_LOST");
	unk_0x33854B8151B6D8EC("FHPRB_STOP");
	unk_0xCE04CE961AF41AB9(889.5f, -1553.8f, 30f, 150f, 1, 0, 0, false);
}

void func_112()
{
	if (unk_0xE38E3CF1625A4145(iLocal_49))
	{
		unk_0x1ABDB383C83A336A(&iLocal_49);
	}
	if (unk_0xE38E3CF1625A4145(iLocal_50))
	{
		unk_0x1ABDB383C83A336A(&iLocal_50);
	}
	if (unk_0xE38E3CF1625A4145(iLocal_51))
	{
		unk_0x1ABDB383C83A336A(&iLocal_51);
	}
	if (unk_0xE38E3CF1625A4145(iLocal_52))
	{
		unk_0x1ABDB383C83A336A(&iLocal_52);
	}
}

void func_113()
{
	Global_14732 = 0;
	func_114();
}

void func_114()
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

void func_115()
{
	func_133();
	if (iLocal_53 == 0)
	{
		if (iLocal_266 == 1)
		{
			func_34();
			iLocal_266 = 0;
		}
		iLocal_267 = 0;
		iLocal_269 = 0;
		iLocal_346 = 0;
		iLocal_85 = 0;
		iLocal_86 = 0;
		unk_0xD875615F72CD34A6(5);
		unk_0xFF2DEA68E2D3602E("cellphone@str");
		unk_0xFF2DEA68E2D3602E("misscarsteal4@director_grip");
		if (!unk_0x73DA1542B2F0C458())
		{
			unk_0x340F713A0F70CAE2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true));
			unk_0xACCDA78123DB57B0(800);
		}
		unk_0x4B06B5746CBEC99F(1f);
		unk_0xB5D26BFA756D0D11(10f, 5f, 4);
		iLocal_295 = 1;
		iLocal_53 = 1;
	}
	if (iLocal_53 == 1)
	{
		func_132(&uLocal_99, 3, 0, "LESTER", 0, 1);
		if (func_14() == 0)
		{
			func_132(&uLocal_99, 0, unk_0x33CD235DF1E6A94E(), "MICHAEL", 0, 1);
		}
		if (func_14() == 1)
		{
			func_132(&uLocal_99, 1, unk_0x33CD235DF1E6A94E(), "FRANKLIN", 0, 1);
		}
		if (func_14() == 2)
		{
			func_132(&uLocal_99, 2, unk_0x33CD235DF1E6A94E(), "TREVOR", 0, 1);
		}
		iLocal_53 = 2;
	}
	if (iLocal_53 == 2)
	{
		if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) == 0)
		{
			if (func_14() == 0)
			{
				if (func_122(&uLocal_99, 12, "FHPBAUD", "FHPB_CHAT1", 7, 1, 0, 0, 0))
				{
					unk_0xB5D26BFA756D0D11(5f, 5f, 4);
					settimera(0);
					iLocal_53 = 3;
				}
			}
			if (func_14() == 1)
			{
				if (func_122(&uLocal_99, 12, "FHPBAUD", "FHPB_CHAT3", 7, 1, 0, 0, 0))
				{
					unk_0xB5D26BFA756D0D11(5f, 5f, 4);
					settimera(0);
					iLocal_53 = 3;
				}
			}
			if (func_14() == 2)
			{
				if (func_122(&uLocal_99, 12, "FHPBAUD", "FHPB_CHAT2", 7, 1, 0, 0, 0))
				{
					unk_0xB5D26BFA756D0D11(5f, 5f, 4);
					settimera(0);
					iLocal_53 = 3;
				}
			}
		}
	}
	if (iLocal_53 == 3)
	{
		if (!unk_0xE38E3CF1625A4145(iLocal_50))
		{
			if (!func_121())
			{
				if (timera() > 10500)
				{
					iLocal_50 = func_119(vLocal_92, 1);
				}
			}
		}
		if (func_121())
		{
			iLocal_53 = 4;
		}
	}
	if (iLocal_53 == 4)
	{
		if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) == 0)
		{
			if (unk_0x91D5C8283D19AF49(iLocal_33, 0))
			{
				if (unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iLocal_33, 0))
				{
					if (unk_0xC16D1B065E3EEA79(iLocal_33))
					{
						if (unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), vLocal_92, 4f, 4f, 2f, true, true, 2))
						{
							if (func_117(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), 4f, 3, 0.5f, 0, 1, 0))
							{
								unk_0x65BA35D6D61F1574("FHPRB_STOP");
								if (unk_0xE38E3CF1625A4145(iLocal_50))
								{
									unk_0x1ABDB383C83A336A(&iLocal_50);
								}
								unk_0xB5D26BFA756D0D11(5f, 5f, 4);
								func_116(0, -1);
								iLocal_53 = 0;
								iLocal_28 = 5;
							}
						}
					}
				}
			}
		}
	}
}

void func_116(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (Global_56502)
	{
	}
	Global_56502 = 0;
	if (bParam0)
	{
		Global_56503 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_68589)
		{
			if (Global_56719[Global_68590[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_68590[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_68589)
		{
			if (Global_68590[iVar0 /*9*/] > 0)
			{
				if (Global_68590[iVar0 /*9*/] == iParam1)
				{
					Global_68590[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

int func_117(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x3FD9339AA95E323F(0, 71, 1);
	unk_0x3FD9339AA95E323F(0, 72, 1);
	unk_0x3FD9339AA95E323F(0, 76, 1);
	unk_0x3FD9339AA95E323F(0, 73, 1);
	unk_0x3FD9339AA95E323F(0, 59, 1);
	unk_0x3FD9339AA95E323F(0, 60, 1);
	if (bParam5)
	{
		unk_0x3FD9339AA95E323F(0, 75, 1);
	}
	unk_0x3FD9339AA95E323F(0, 80, 1);
	if (!bParam6)
	{
		unk_0x3FD9339AA95E323F(0, 69, 1);
		unk_0x3FD9339AA95E323F(0, 70, 1);
		unk_0x3FD9339AA95E323F(0, 68, 1);
	}
	unk_0x3FD9339AA95E323F(0, 74, 1);
	unk_0x3FD9339AA95E323F(0, 86, 1);
	unk_0x3FD9339AA95E323F(0, 81, 1);
	unk_0x3FD9339AA95E323F(0, 82, 1);
	unk_0x3FD9339AA95E323F(0, 138, 1);
	unk_0x3FD9339AA95E323F(0, 136, 1);
	unk_0x3FD9339AA95E323F(0, 114, 1);
	unk_0x3FD9339AA95E323F(0, 107, 1);
	unk_0x3FD9339AA95E323F(0, 110, 1);
	unk_0x3FD9339AA95E323F(0, 89, 1);
	unk_0x3FD9339AA95E323F(0, 89, 1);
	unk_0x3FD9339AA95E323F(0, 87, 1);
	unk_0x3FD9339AA95E323F(0, 88, 1);
	unk_0x3FD9339AA95E323F(0, 113, 1);
	unk_0x3FD9339AA95E323F(0, 115, 1);
	unk_0x3FD9339AA95E323F(0, 116, 1);
	unk_0x3FD9339AA95E323F(0, 117, 1);
	unk_0x3FD9339AA95E323F(0, 118, 1);
	unk_0x3FD9339AA95E323F(0, 119, 1);
	unk_0x3FD9339AA95E323F(0, 131, 1);
	unk_0x3FD9339AA95E323F(0, 132, 1);
	unk_0x3FD9339AA95E323F(0, 123, 1);
	unk_0x3FD9339AA95E323F(0, 126, 1);
	unk_0x3FD9339AA95E323F(0, 129, 1);
	unk_0x3FD9339AA95E323F(0, 130, 1);
	unk_0x3FD9339AA95E323F(0, 133, 1);
	unk_0x3FD9339AA95E323F(0, 134, 1);
	unk_0xCD3A495F8C74A0B6();
	func_118(iParam0);
	if ((unk_0xE3903F59E2F22150() - Global_29) > 500)
	{
		unk_0xA4DF1E31BCDF9978(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0xE3903F59E2F22150();
	if (!unk_0xD62C4419A41F106A(iParam0, 0))
	{
		if (unk_0x7EECA16E87982278(unk_0x8BB475EA09C9A0EB(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_118(int iParam0)
{
	if (!unk_0xD62C4419A41F106A(iParam0, 0))
	{
		if (unk_0x3A337D69D2D7C0FF(iParam0))
		{
			if (unk_0x3677406194B5F225(iParam0))
			{
				unk_0x5D1C3DFAF9A33FD4(iParam0, 0);
			}
		}
	}
}

int func_119(vector3 vParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x2C0ED4741A007C6A(vParam0);
	unk_0xCE5C49921A521962(iVar0, func_120(unk_0xB331FCEB94EB05C8(), 1f, 1f));
	unk_0x1C316779E36C1967(iVar0, bParam1);
	return iVar0;
}

float func_120(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_121()
{
	if (Global_15866 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_122(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_131(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_15914 = 0;
	Global_15873 = 1;
	Global_15880 = 0;
	Global_15875 = 0;
	Global_16857 = 0;
	Global_16859 = 0;
	Global_16863 = 0;
	Global_15871 = 0;
	Global_15918 = 0;
	Global_15920 = 0;
	if (iParam5 == 1)
	{
		Global_15878 = 1;
	}
	else
	{
		Global_15878 = 0;
	}
	Global_2621441 = 0;
	return func_123(sParam3, iParam4, bParam8);
}

int func_123(char* sParam0, int iParam1, bool bParam2)
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
					func_114();
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
		if (func_130(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_129();
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
				func_128();
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
				if (func_127())
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
			if (func_126())
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
			func_125();
			Global_15876 = bParam2;
		}
		Global_15868 = iParam1;
		StringCopy(&Global_15485, sParam0, 24);
		Global_14732 = 0;
		func_124();
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
		func_114();
	}
	return 0;
}

void func_124()
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

void func_125()
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

int func_126()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_127()
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

void func_128()
{
	if (func_16(14))
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
		Global_14553 = func_14();
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

void func_129()
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

bool func_130(int iParam0, int iParam1)
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

void func_131(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15320 = { *uParam0 };
	Global_1739 = iParam1;
	StringCopy(&Global_15936, sParam2, 24);
	Global_16855 = iParam5;
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

void func_132(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_133()
{
	if (unk_0x91D5C8283D19AF49(iLocal_33, 0))
	{
		if (unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iLocal_33, 0))
		{
			if (unk_0xC16D1B065E3EEA79(iLocal_33))
			{
				if (func_138("HELP_1"))
				{
					unk_0xEDF90B96BED57BCE(1);
				}
				if (unk_0xE38E3CF1625A4145(iLocal_49))
				{
					unk_0x1ABDB383C83A336A(&iLocal_49);
				}
				if (unk_0xE38E3CF1625A4145(iLocal_52))
				{
					if (iLocal_294 == 1)
					{
						if (unk_0xE3903F59E2F22150() < iLocal_85 + 7500)
						{
							unk_0xD362430CD61A9B08();
						}
					}
					unk_0x1ABDB383C83A336A(&iLocal_52);
				}
				if (iLocal_28 == 4)
				{
					if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) == 0)
					{
						if (iLocal_346 == 0)
						{
							unk_0x33854B8151B6D8EC("FHPRB_COPS");
							unk_0x65BA35D6D61F1574("FHPRB_LOST");
							iLocal_346 = 1;
						}
						if (iLocal_269 == 1)
						{
							if (unk_0xE3903F59E2F22150() < iLocal_86 + 7500)
							{
								unk_0xD362430CD61A9B08();
							}
							iLocal_269 = 0;
						}
						if (iLocal_53 > 3)
						{
							if (!unk_0xE38E3CF1625A4145(iLocal_50))
							{
								iLocal_50 = func_119(vLocal_92, 1);
							}
							if (iLocal_267 == 0)
							{
								if (!unk_0xC4B7D5901EDA35B5())
								{
									func_137("GOD_2", 7500, 1);
									iLocal_267 = 1;
								}
							}
						}
					}
					else
					{
						if (unk_0xE38E3CF1625A4145(iLocal_50))
						{
							unk_0x1ABDB383C83A336A(&iLocal_50);
						}
						if (iLocal_269 == 0)
						{
							unk_0xD362430CD61A9B08();
							func_137("GOD_4", 7500, -1);
							unk_0x65BA35D6D61F1574("FHPRB_COPS");
							iLocal_86 = unk_0xE3903F59E2F22150();
							iLocal_269 = 1;
							iLocal_346 = 0;
						}
					}
				}
			}
			else
			{
				if (unk_0xE38E3CF1625A4145(iLocal_49))
				{
					unk_0x1ABDB383C83A336A(&iLocal_49);
				}
				if (unk_0xE38E3CF1625A4145(iLocal_50))
				{
					unk_0x1ABDB383C83A336A(&iLocal_50);
				}
				if (unk_0x91D5C8283D19AF49(iLocal_32, 0))
				{
					if (!unk_0xE38E3CF1625A4145(iLocal_52))
					{
						iLocal_52 = func_135(iLocal_32, 0, 0);
						unk_0xBF11C8A43770C598(iLocal_52, true);
						if (unk_0xC4B7D5901EDA35B5())
						{
							unk_0xD362430CD61A9B08();
						}
						if (iLocal_294 == 0)
						{
							func_137("GOD_6", 7500, -1);
							iLocal_85 = unk_0xE3903F59E2F22150();
							iLocal_294 = 1;
						}
						if (!func_138("HELP_1"))
						{
							func_134("HELP_1");
						}
					}
				}
			}
		}
		else
		{
			if (unk_0xE38E3CF1625A4145(iLocal_52))
			{
				unk_0x1ABDB383C83A336A(&iLocal_52);
			}
			if (unk_0xE38E3CF1625A4145(iLocal_50))
			{
				unk_0x1ABDB383C83A336A(&iLocal_50);
			}
			if (unk_0x91D5C8283D19AF49(iLocal_33, 0))
			{
				if (!unk_0xE38E3CF1625A4145(iLocal_49))
				{
					iLocal_49 = func_135(iLocal_33, 0, 0);
					unk_0xBF11C8A43770C598(iLocal_49, true);
				}
			}
			if (iLocal_270 == 0)
			{
				unk_0xD362430CD61A9B08();
				func_137("GOD_5", 7500, -1);
				iLocal_270 = 1;
			}
		}
	}
}

void func_134(char* sParam0)
{
	unk_0x37621D6689F9E3C3(sParam0);
	unk_0x092150016C06C431(0, 1, true, -1);
}

int func_135(int iParam0, bool bParam1, bool bParam2)
{
	return func_136(iParam0, !bParam1, bParam2);
}

int func_136(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0x765F6FEEFF39224F(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x8848A15CBDADDC60(iParam0);
	if (unk_0x680558231C80291D(iParam0))
	{
		unk_0xCE5C49921A521962(iVar0, func_120(unk_0xB331FCEB94EB05C8(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xBF11C8A43770C598(iVar0, bParam1);
		}
		else
		{
			unk_0xB9E84A421C105943(iVar0, 2);
		}
	}
	else if (unk_0x068481DAF84B9654(iParam0))
	{
		unk_0xCE5C49921A521962(iVar0, func_120(unk_0xB331FCEB94EB05C8(), 0.7f, 0.7f));
		unk_0xBF11C8A43770C598(iVar0, bParam1);
	}
	else if (unk_0xA3A29DB165882310(iParam0))
	{
		unk_0xCE5C49921A521962(iVar0, func_120(unk_0xB331FCEB94EB05C8(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_137(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x0C9D26BBBEE23407(sParam0);
	unk_0x495407AC2D466930(iParam1, 1);
}

int func_138(char* sParam0)
{
	unk_0x6D39881CA5436178(sParam0);
	return unk_0xA32C2C4DF096C08A(0);
}

void func_139()
{
	if (iLocal_53 > 1)
	{
		func_133();
	}
	if (iLocal_53 == 0)
	{
		if (iLocal_266 == 1)
		{
			func_34();
			iLocal_266 = 0;
		}
		iLocal_296 = 0;
		iLocal_297 = 0;
		iLocal_298 = 0;
		iLocal_299 = 0;
		iLocal_300 = 0;
		iLocal_301 = 0;
		iLocal_302 = 0;
		iLocal_303[0] = 0;
		iLocal_303[1] = 0;
		iLocal_304[0] = 0;
		iLocal_304[1] = 0;
		iLocal_305 = 0;
		iLocal_306 = 0;
		iLocal_307 = 0;
		iLocal_308 = 0;
		iLocal_309 = 0;
		iLocal_310 = 0;
		iLocal_311 = 0;
		iLocal_318 = 0;
		iLocal_319 = 0;
		iLocal_320 = 0;
		iLocal_321 = 0;
		iLocal_322 = 0;
		iLocal_323 = 0;
		iLocal_324 = 0;
		iLocal_325 = 0;
		iLocal_326 = 0;
		iLocal_327 = 0;
		iLocal_328[0] = 0;
		iLocal_328[1] = 0;
		iLocal_329[0] = 0;
		iLocal_329[1] = 0;
		iLocal_330[0] = 0;
		iLocal_330[1] = 0;
		iLocal_331[0] = 0;
		iLocal_331[1] = 0;
		iLocal_332[0] = 0;
		iLocal_332[1] = 0;
		iLocal_333[0] = 0;
		iLocal_333[1] = 0;
		iLocal_334[0] = 0;
		iLocal_334[1] = 0;
		iLocal_336 = 0;
		iLocal_339 = 0;
		iLocal_340[0] = 0;
		iLocal_341[0] = 0;
		iLocal_340[1] = 0;
		iLocal_341[1] = 0;
		iLocal_343 = 0;
		iLocal_344 = 0;
		iLocal_345 = 0;
		iLocal_359 = 0;
		iLocal_270 = 0;
		iLocal_271 = 0;
		iLocal_276 = 0;
		iLocal_286 = 0;
		iLocal_287 = 0;
		iLocal_288 = 0;
		iLocal_289 = 0;
		iLocal_290 = 0;
		iLocal_291 = 0;
		iLocal_292 = 0;
		iLocal_293 = 0;
		iLocal_294 = 0;
		iLocal_312 = 0;
		iLocal_342 = 0;
		iLocal_360 = 0;
		iLocal_362 = 0;
		iLocal_335 = 0;
		iLocal_85 = 0;
		iLocal_86 = 0;
		iLocal_54 = 0;
		while (iLocal_54 <= 6)
		{
			iLocal_268[iLocal_54] = 0;
			iLocal_282[iLocal_54] = 0;
			iLocal_284[iLocal_54] = 0;
			iLocal_285[iLocal_54] = 0;
			iLocal_283[iLocal_54] = 0;
			iLocal_54++;
		}
		unk_0x0483D0035D6E46FD("cellphone@str");
		unk_0x0483D0035D6E46FD("misscarsteal4@director_grip");
		if (unk_0x91D5C8283D19AF49(iLocal_33, 0))
		{
			if (!unk_0xE38E3CF1625A4145(iLocal_49))
			{
				iLocal_49 = func_135(iLocal_33, 0, 0);
				unk_0xBF11C8A43770C598(iLocal_49, true);
			}
		}
		unk_0xD875615F72CD34A6(0);
		if (unk_0xBB5E373390A5F824())
		{
			if (!func_30())
			{
				unk_0x340F713A0F70CAE2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true));
			}
			if (unk_0x765F6FEEFF39224F(iLocal_34))
			{
				func_27(iLocal_34, -1, 1);
				unk_0x65F544B458249682(&iLocal_34);
			}
			else
			{
				func_27(0, -1, 1);
			}
		}
		if (!unk_0x73DA1542B2F0C458())
		{
			unk_0xACCDA78123DB57B0(800);
		}
		unk_0x65BA35D6D61F1574("FHPRB_START");
		unk_0xCE04CE961AF41AB9(43.5f, -615.8f, 32.4f, 50f, 1, 0, 0, false);
		iLocal_295 = 1;
		iLocal_53 = 1;
	}
	if (iLocal_53 == 1)
	{
		if (iLocal_342 == 0)
		{
			if (!unk_0xC4B7D5901EDA35B5())
			{
				unk_0xB5D26BFA756D0D11(5f, 8f, 4);
				func_137("GOD_1", 7500, 1);
				iLocal_342 = 1;
			}
		}
		if (unk_0x91D5C8283D19AF49(iLocal_33, 0))
		{
			if (unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iLocal_33, 0))
			{
				unk_0x65BA35D6D61F1574("FHPRB_TRUCK");
				if (unk_0xE38E3CF1625A4145(iLocal_49))
				{
					unk_0x1ABDB383C83A336A(&iLocal_49);
				}
				func_140(656, 0);
				unk_0x4B06B5746CBEC99F(1f);
				iLocal_53 = 2;
			}
		}
	}
	if (iLocal_53 == 2)
	{
		if (unk_0x91D5C8283D19AF49(iLocal_33, 0))
		{
			if (unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iLocal_33, 0))
			{
				if (unk_0xC16D1B065E3EEA79(iLocal_33))
				{
					if (func_138("HELP_1"))
					{
						unk_0xEDF90B96BED57BCE(1);
					}
					if (unk_0xE38E3CF1625A4145(iLocal_49))
					{
						unk_0x1ABDB383C83A336A(&iLocal_49);
					}
					if (unk_0xE38E3CF1625A4145(iLocal_52))
					{
						unk_0x1ABDB383C83A336A(&iLocal_52);
					}
					if (unk_0x16E00F066AFFEA0D(vLocal_93, vLocal_96, true) < 100f)
					{
						if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) == 0)
						{
							if (iLocal_271 == 1)
							{
								if (unk_0xE3903F59E2F22150() < iLocal_86 + 7500)
								{
									unk_0xD362430CD61A9B08();
									iLocal_271 = 0;
								}
							}
							if (iLocal_312 == 0)
							{
								unk_0xB5D26BFA756D0D11(5f, 8f, 4);
								func_137("GOD_7", 7500, -1);
								iLocal_312 = 1;
							}
						}
						else if (iLocal_271 == 0)
						{
							unk_0xB5D26BFA756D0D11(5f, 8f, 4);
							unk_0xCF33FE51707573DB("SCRIPTED_SCANNER_REPORT_BS_PREP_B_01", 0f);
							iLocal_86 = unk_0xE3903F59E2F22150();
							func_137("GOD_4", 7500, -1);
							iLocal_271 = 1;
						}
					}
					else if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) == 0)
					{
						iLocal_53 = 0;
						iLocal_28 = 4;
					}
				}
				else
				{
					if (unk_0xE38E3CF1625A4145(iLocal_49))
					{
						unk_0x1ABDB383C83A336A(&iLocal_49);
					}
					if (unk_0x91D5C8283D19AF49(iLocal_32, 0))
					{
						if (!unk_0xE38E3CF1625A4145(iLocal_52))
						{
							iLocal_52 = func_135(iLocal_32, 0, 0);
							unk_0xBF11C8A43770C598(iLocal_52, true);
							if (unk_0xC4B7D5901EDA35B5())
							{
								unk_0xD362430CD61A9B08();
							}
							if (iLocal_294 == 0)
							{
								func_137("GOD_6", 7500, -1);
								iLocal_294 = 1;
							}
							if (!func_138("HELP_1"))
							{
								func_134("HELP_1");
							}
						}
					}
				}
			}
			else
			{
				if (unk_0xE38E3CF1625A4145(iLocal_52))
				{
					unk_0x1ABDB383C83A336A(&iLocal_52);
				}
				if (unk_0x91D5C8283D19AF49(iLocal_33, 0))
				{
					if (!unk_0xE38E3CF1625A4145(iLocal_49))
					{
						iLocal_49 = func_135(iLocal_33, 0, 0);
						unk_0xBF11C8A43770C598(iLocal_49, true);
					}
				}
				if (iLocal_270 == 0)
				{
					unk_0xD362430CD61A9B08();
					func_137("GOD_5", 7500, -1);
					iLocal_270 = 1;
				}
			}
		}
	}
}

void func_140(int iParam0, bool bParam1)
{
	int iVar0;
	
	Global_56504 = iParam0;
	if (!Global_56502)
	{
		Global_56502 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_68589)
		{
			if (Global_68590[iVar0 /*9*/] == iParam0)
			{
				Global_68590[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_141()
{
	if (iLocal_53 == 0)
	{
		if (iLocal_266 == 1)
		{
			func_34();
			iLocal_266 = 0;
		}
		func_164();
		func_107();
		if (!unk_0x73DA1542B2F0C458())
		{
			unk_0x340F713A0F70CAE2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true));
			unk_0xACCDA78123DB57B0(800);
		}
		if (unk_0x765F6FEEFF39224F(Global_90209[3]))
		{
			if (unk_0x91D5C8283D19AF49(Global_90209[3], 0))
			{
				if (unk_0x097E7778E3E162E8(unk_0x541D5C57194E73C4(Global_90209[3])))
				{
					unk_0x0D21E1FDE062ED99(Global_90209[3], true, 1);
					func_143(1.0095f, -631.9655f, 34.7259f, 349.0681f, 0, 145);
				}
				if (((unk_0x0C2E237744BA0026(unk_0x541D5C57194E73C4(Global_90209[3])) || unk_0x9E374B5F44A76AE2(unk_0x541D5C57194E73C4(Global_90209[3]))) || unk_0xC3622EC0E0215A79(unk_0x541D5C57194E73C4(Global_90209[3]))) || unk_0x86A90EB179092418(unk_0x541D5C57194E73C4(Global_90209[3])))
				{
					unk_0x0D21E1FDE062ED99(Global_90209[3], true, 1);
					func_143(49.0052f, -599.5534f, 30.6299f, 158.5544f, 0, 145);
				}
			}
		}
		func_142(79);
		iLocal_295 = 1;
		iLocal_53 = 1;
	}
	if (iLocal_53 == 1)
	{
		iLocal_53 = 0;
		iLocal_28 = 3;
	}
}

void func_142(int iParam0)
{
	if (Global_90634 != -1)
	{
		if (iParam0 == Global_90634)
		{
			Global_90638 = 1;
			return;
		}
	}
}

void func_143(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	vector3 vVar0;
	var uVar1;
	
	if (unk_0x765F6FEEFF39224F(Global_97130.f_4))
	{
		if (unk_0x91D5C8283D19AF49(Global_97130.f_4, 0))
		{
			if (func_163(24) != Global_97130.f_4)
			{
				if (iParam2 == 1)
				{
					if (func_160(unk_0xFBB1F99A825CAB09(Global_97130.f_4, true), iParam3, &vVar0, &uVar1))
					{
						vParam0 = { vVar0 };
						fParam1 = uVar1;
					}
				}
				func_144(Global_97130.f_4, vParam0, fParam1, 24, 0);
			}
		}
	}
}

void func_144(int iParam0, vector3 vParam1, float fParam2, int iParam3, bool bParam4)
{
	struct<60> Var0;
	
	if (unk_0x765F6FEEFF39224F(iParam0) && unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		if (iParam3 != 24 && iParam3 != 25)
		{
			return;
		}
		if (iParam3 == 24)
		{
			if (unk_0x765F6FEEFF39224F(Global_70409.f_484[25]) && unk_0x91D5C8283D19AF49(Global_70409.f_484[25], 0))
			{
				if (Global_70409.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam4)
		{
			if ((unk_0xF3E8C179636ED71E(iParam0) || unk_0x541D5C57194E73C4(iParam0) == joaat("bus")) || unk_0x541D5C57194E73C4(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_159(iParam3);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_40(iParam0, &Var0);
		if (func_98(vParam1, 0f, 0f, 0f, 0))
		{
			vParam1 = { unk_0xFBB1F99A825CAB09(iParam0, true) };
			fParam2 = unk_0xC472E34C8FBEC678(iParam0);
		}
		if (iParam3 == 24)
		{
			if (unk_0x36163153849DFDA1(unk_0xD178EF744F20B712()) != joaat("vehicle_gen_controller"))
			{
				Global_71397 = unk_0x36163153849DFDA1(unk_0xD178EF744F20B712());
			}
		}
		func_157(iParam3, &Var0, vParam1, fParam2, func_60(iParam0));
		func_145(iParam3, iParam0, 0);
	}
}

void func_145(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_70(&(Global_70409.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0x0E4018692D92041D(Global_70409.f_555[0 /*21*/].f_9, 12) && !unk_0x0E4018692D92041D(Global_70409.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_70409.f_555[0 /*21*/].f_4 != unk_0x541D5C57194E73C4(iParam1))
		{
			return;
		}
	}
	if (Global_71316 != -1 && Global_71316 != iParam0)
	{
		return;
	}
	if (unk_0x765F6FEEFF39224F(iParam1))
	{
		if (unk_0x91D5C8283D19AF49(iParam1, 0))
		{
			if (!unk_0x5A04E3BD0B5E7E49(iParam1))
			{
				unk_0x0D21E1FDE062ED99(iParam1, true, 1);
			}
			if (iParam0 == 24)
			{
				Global_106565.f_32743.f_4801 = func_146();
			}
			if (iParam1 != Global_70409.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_163(iParam0);
					if ((unk_0x765F6FEEFF39224F(iVar0) && unk_0x91D5C8283D19AF49(iVar0, 0)) && iParam1 != iVar0)
					{
						func_39(iVar0, 145);
					}
				}
				Global_71315 = iParam1;
				Global_71316 = iParam0;
				Global_71317 = iParam2;
			}
		}
	}
}

var func_146()
{
	var uVar0;
	
	func_156(&uVar0, unk_0xE6A7CE90720B9037());
	func_155(&uVar0, unk_0x7EA67BD818402745());
	func_154(&uVar0, unk_0x13348E86D5B8A052());
	func_149(&uVar0, unk_0x020A28FAE1C09250());
	func_148(&uVar0, unk_0x2C02CAA9C4127339());
	func_147(&uVar0, unk_0xED3F08F762AAA55A());
	return uVar0;
}

void func_147(var uParam0, int iParam1)
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

void func_148(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_149(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_153(*uParam0);
	iVar1 = func_151(*uParam0);
	if (iParam1 < 1 || iParam1 > func_150(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

int func_150(int iParam0, int iParam1)
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

var func_151(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_152(unk_0x0E4018692D92041D(iParam0, 31), -1, 1)) + 2011;
}

int func_152(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_153(var uParam0)
{
	return uParam0 & 15;
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

void func_157(int iParam0, var uParam1, vector3 vParam2, float fParam3, int iParam4)
{
	if (func_70(&(Global_70409.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x0E4018692D92041D(Global_70409.f_555[0 /*21*/].f_9, 10))
		{
			func_158(iParam0);
			func_67(uParam1, &(Global_106565.f_32743.f_69[Global_70409.f_555[0 /*21*/].f_14 /*78*/]));
			if (unk_0x0E4018692D92041D(Global_70409.f_555[0 /*21*/].f_9, 11))
			{
				Global_106565.f_32743.f_1864[Global_70409.f_555[0 /*21*/].f_14 /*3*/] = { vParam2 };
				Global_106565.f_32743.f_1934[Global_70409.f_555[0 /*21*/].f_14] = fParam3;
			}
			else
			{
				Global_106565.f_32743.f_1864[Global_70409.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_106565.f_32743.f_1934[Global_70409.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_106565.f_32743.f_1958[Global_70409.f_555[0 /*21*/].f_14] = iParam4 + 1;
			func_63(iParam0, 1);
		}
	}
}

void func_158(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_70(&(Global_70409.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x765F6FEEFF39224F(Global_70409.f_139[iParam0]))
		{
			unk_0x0D21E1FDE062ED99(Global_70409.f_139[iParam0], true, 1);
			unk_0x65F544B458249682(&(Global_70409.f_139[iParam0]));
			Global_70409.f_139[iParam0] = 0;
		}
		if (unk_0x0E4018692D92041D(Global_70409.f_555[0 /*21*/].f_9, 13))
		{
			func_63(iParam0, 0);
		}
	}
}

void func_159(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_158(iParam0);
	func_63(iParam0, 0);
}

int func_160(vector3 vParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	iVar0 = func_161(vParam0, iParam1, 1);
	switch (iVar0)
	{
		case 0:
			*uParam2 = { -827.351f, 157.785f, 68.2143f };
			*uParam3 = 85.1509f;
			return 1;
			break;
		
		case 1:
		case 2:
			*uParam2 = { 1992.523f, 3813.916f, 31.1008f };
			*uParam3 = 122.1498f;
			return 1;
			break;
		
		case 3:
			*uParam2 = { -1184.258f, -1496.556f, 3.3895f };
			*uParam3 = 303.2098f;
			return 1;
			break;
		
		case 4:
			*uParam2 = { 118.1067f, -1325.906f, 28.3706f };
			*uParam3 = 123.5016f;
			return 1;
			break;
		
		case 5:
			*uParam2 = { -18.118f, -1455.126f, 29.5004f };
			*uParam3 = 273.2822f;
			return 1;
			break;
		
		case 6:
			*uParam2 = { 1.5947f, 543.4017f, 173.4644f };
			*uParam3 = 310.7556f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_161(vector3 vParam0, int iParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (Global_88750[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_88750[iVar0 /*10*/].f_9 == iParam1 || iParam1 == 145)
			{
				if (func_162(iVar0) || iParam2 == 0)
				{
					fVar1 = unk_0x16E00F066AFFEA0D(vParam0, Global_88750[iVar0 /*10*/].f_3, true);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

bool func_162(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_106565.f_7223[iParam0], 0);
}

int func_163(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_70409.f_139[iParam0];
}

void func_164()
{
	Global_87890 = 1;
}

void func_165()
{
	unk_0xF4197686EF83F52A(unk_0x95B959F18401C09A(), 1);
	unk_0x4B06B5746CBEC99F(0.01f);
	iLocal_44 = unk_0x0335D8135051EA56(861.6f, -1599.7f, 27.9f, 961.8f, -1476.4f, 49.7f, 0, 1, 1, 1);
	iLocal_45 = unk_0x0335D8135051EA56(851.2f, -1598.2f, 29.7f, 855.7f, -1587.1f, 33f, 0, 1, 1, 1);
	iLocal_46 = unk_0x0335D8135051EA56(859.4f, -1569.6f, 32.3f, 865.4f, -1561f, 28.7f, 0, 1, 1, 1);
	iLocal_47 = unk_0x0335D8135051EA56(939f, -1576.8f, 33f, 943.8f, -1571.3f, 28.9f, 0, 1, 1, 1);
	iLocal_42 = unk_0x0335D8135051EA56(5.4f, -588f, 39.1f, 57.4f, -678.8f, 25.4f, 0, 1, 1, 1);
	iLocal_43 = unk_0x0335D8135051EA56(50.9f, -641.6f, 37.7f, 81.1f, -608.4f, 29.5f, 0, 1, 1, 1);
	if (func_29())
	{
		if (Global_87889 == 1)
		{
			func_167(28.4065f, -608.9371f, 30.6293f, 70.7778f, 1, 0);
			iLocal_360 = 1;
			iLocal_266 = 1;
			iLocal_53 = 0;
			iLocal_28 = 5;
		}
		else if (func_166() == 0)
		{
			if (func_106() && func_103(7f, 7f, 7f, 1))
			{
				func_167(818.8139f, -1610.406f, 30.7951f, 264.412f, 1, 0);
			}
			else
			{
				func_167(825.5603f, -1605.825f, 30.9548f, 312.5221f, 1, 0);
			}
			iLocal_266 = 1;
			iLocal_360 = 1;
			iLocal_53 = 0;
			iLocal_28 = 3;
		}
	}
	else if (func_202(0))
	{
		iLocal_266 = 1;
		iLocal_360 = 1;
		iLocal_53 = 0;
		iLocal_28 = 3;
	}
	else
	{
		iLocal_53 = 0;
		iLocal_28 = 2;
	}
}

int func_166()
{
	if (!Global_93682 == 10 && !Global_93682 == 9)
	{
		return 0;
	}
	return Global_93682.f_2;
}

void func_167(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_29())
	{
		unk_0x9980AE643A60F372(0);
		unk_0xCE689A8E8C42ED78(&(Global_93682.f_20), 2);
		unk_0xD5CD4268EDE6F40E(1);
		if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
		{
			unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), false, 0);
		}
		Global_93678 = { vParam0 };
		Global_93681 = fParam1;
		Global_93677 = 1;
		if (iParam2 == 1)
		{
			unk_0x8950ED5730F62EE8(&(Global_93682.f_20), 14);
		}
		else
		{
			unk_0xCE689A8E8C42ED78(&(Global_93682.f_20), 14);
		}
		if (iParam3 == 1)
		{
			unk_0x8950ED5730F62EE8(&(Global_93682.f_20), 24);
		}
		else
		{
			unk_0xCE689A8E8C42ED78(&(Global_93682.f_20), 24);
		}
		func_28(1);
	}
}

void func_168()
{
	if (!func_29())
	{
		iLocal_28 = 1;
	}
	else
	{
		iLocal_28 = 1;
	}
}

void func_169()
{
	if (!unk_0x765F6FEEFF39224F(iLocal_40))
	{
		if (unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), 45f, -616.2f, 30.8f, true) < 150f)
		{
			unk_0xB815670C37E03CDE(joaat("s_m_m_security_01"));
			if (unk_0x5D98D654CDC2165A(joaat("s_m_m_security_01")))
			{
				iLocal_40 = unk_0x9BA5CF280376EEA4(26, joaat("s_m_m_security_01"), 64.904f, -617.9949f, 30.7028f, 223.555f, 1, true);
				unk_0x5FEE418CE11E6DDE(iLocal_40, 324, true);
			}
			unk_0x71CA80D41E1338B4(joaat("s_m_m_security_01"));
		}
	}
	if (unk_0x765F6FEEFF39224F(iLocal_40))
	{
		if (!unk_0xBC2FC12AD0FBF72E(iLocal_40))
		{
			if (unk_0x89F20C4A841A3473(65.2f, -617.2f, 30.8f, 5f, 0))
			{
				if (iLocal_337 == 0)
				{
					if (unk_0x3F219400E5FE4B69(iLocal_40))
					{
						unk_0xED68CDDDE25A144E(iLocal_40);
					}
					else
					{
						unk_0x31826EF4A8BC8E9F(iLocal_40);
					}
					unk_0xA9128AA30F3036C7(iLocal_40, 65.2f, -617.2f, 31f, 2f, 0);
					unk_0x897EF720254BBEA3(iLocal_40, true);
					iLocal_89 = unk_0xE3903F59E2F22150();
					iLocal_337 = 1;
				}
				else if (unk_0xE3903F59E2F22150() > iLocal_89 + 5000)
				{
					if (!unk_0x5896FA9B8FD8B022(iLocal_40))
					{
						iLocal_337 = 0;
					}
				}
			}
			if (func_171(unk_0x33CD235DF1E6A94E(), iLocal_40, 1) < 20f)
			{
				if (iLocal_316 == 0)
				{
					unk_0xC4A347124F39D998(iLocal_40, unk_0x33CD235DF1E6A94E(), -1, 1072, 3);
					iLocal_316 = 1;
				}
			}
			else if (iLocal_316 == 1)
			{
				unk_0xC4A347124F39D998(iLocal_40, unk_0x33CD235DF1E6A94E(), 1, 0, 2);
				iLocal_316 = 0;
			}
		}
	}
	if (unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), 45f, -616.2f, 30.8f, true) < 50f)
	{
		if (iLocal_338 == 0)
		{
			iLocal_90 = 498972213;
			iLocal_91 = -512924631;
			unk_0x1D8D48272A2B8F0F(iLocal_90, -1184516519, 61f, -633f, 32f, 1, 1, 0);
			unk_0x1D8D48272A2B8F0F(iLocal_91, -1184516519, 66f, -618f, 32f, 1, 1, 0);
			iLocal_338 = 1;
		}
		if (iLocal_338 == 1)
		{
			if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) == 0)
			{
				if (vLocal_93.x > 35f)
				{
					if (fLocal_97 < 1f)
					{
						fLocal_97 = (fLocal_97 + 0.02f);
					}
					else
					{
						fLocal_97 = 1f;
					}
					if (fLocal_97 <= 1f)
					{
						unk_0x1ABC36611CBE0E84(iLocal_90, fLocal_97, 0, 1);
						unk_0x1ABC36611CBE0E84(iLocal_91, fLocal_97, 0, 1);
						unk_0x046ED2CF120C8949(iLocal_90, 4, 0, 1);
						unk_0x046ED2CF120C8949(iLocal_91, 4, 0, 1);
						iLocal_317 = 0;
					}
				}
				if (vLocal_93.x < 35f)
				{
					if (fLocal_97 > 0f)
					{
						fLocal_97 = (fLocal_97 - 0.02f);
					}
					else
					{
						fLocal_97 = 0f;
					}
					if (fLocal_97 >= 0f)
					{
						unk_0x1ABC36611CBE0E84(iLocal_90, fLocal_97, 0, 1);
						unk_0x1ABC36611CBE0E84(iLocal_91, fLocal_97, 0, 1);
						unk_0x046ED2CF120C8949(iLocal_90, 4, 0, 1);
						unk_0x046ED2CF120C8949(iLocal_91, 4, 0, 1);
						iLocal_317 = 0;
					}
				}
			}
			else if (iLocal_317 == 0)
			{
				if (vLocal_93.x < 35f)
				{
					if (fLocal_97 > 0f)
					{
						fLocal_97 = (fLocal_97 - 0.02f);
					}
					else
					{
						fLocal_97 = 0f;
					}
					if (fLocal_97 >= 0f)
					{
						unk_0x1ABC36611CBE0E84(iLocal_90, fLocal_97, 0, 1);
						unk_0x1ABC36611CBE0E84(iLocal_91, fLocal_97, 0, 1);
						unk_0x046ED2CF120C8949(iLocal_90, 4, 0, 1);
						unk_0x046ED2CF120C8949(iLocal_91, 4, 0, 1);
						iLocal_317 = 1;
					}
				}
			}
		}
		if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), 62.90151f, -638.6329f, 29.9188f, 70.78919f, -617.1338f, 36.91788f, 10.75f, 0, true, 0))
		{
			if (unk_0x765F6FEEFF39224F(iLocal_40))
			{
				if (!unk_0xBC2FC12AD0FBF72E(iLocal_40))
				{
					if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) == 0)
					{
						if (iLocal_314 == 0)
						{
							if (iLocal_313 == 0)
							{
								func_132(&uLocal_99, 4, iLocal_40, "FHPBSecGuard", 0, 1);
								if (func_170(&uLocal_99, "FHPBAUD", "FHPB_CHAT20", 7, 0, 0, 0))
								{
									iLocal_313 = 1;
								}
							}
						}
						else if (iLocal_315 == 0)
						{
							func_132(&uLocal_99, 4, iLocal_40, "FHPBSecGuard", 0, 1);
							if (func_170(&uLocal_99, "FHPBAUD", "FHPB_CHAT22", 7, 0, 0, 0))
							{
								iLocal_315 = 1;
							}
						}
					}
					else if (iLocal_314 == 0)
					{
						func_132(&uLocal_99, 4, iLocal_40, "FHPBSecGuard", 0, 1);
						if (func_170(&uLocal_99, "FHPBAUD", "FHPB_CHAT21", 7, 0, 0, 0))
						{
							iLocal_314 = 1;
						}
					}
				}
			}
		}
	}
}

bool func_170(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_131(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_123(sParam2, iParam3, 0);
}

float func_171(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!unk_0xD62C4419A41F106A(iParam0, 0))
	{
		vVar0 = { unk_0xFBB1F99A825CAB09(iParam0, true) };
	}
	else
	{
		vVar0 = { unk_0xFBB1F99A825CAB09(iParam0, false) };
	}
	if (!unk_0xD62C4419A41F106A(iParam1, 0))
	{
		vVar1 = { unk_0xFBB1F99A825CAB09(iParam1, true) };
	}
	else
	{
		vVar1 = { unk_0xFBB1F99A825CAB09(iParam1, false) };
	}
	return unk_0x16E00F066AFFEA0D(vVar0, vVar1, bParam2);
}

void func_172()
{
	int iVar0;
	
	if (!unk_0xC4B7D5901EDA35B5())
	{
		if (!func_176() || !unk_0x75E8D03BBC787BAD())
		{
			if (iLocal_28 == 3)
			{
				if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0) && iLocal_31 == 0)
				{
					if (func_14() == 0)
					{
						if (iLocal_29 == 1)
						{
							if (iLocal_291 == 0)
							{
								if (func_174() && func_173())
								{
									if (func_170(&uLocal_99, "SOL1AUD", "SOL1_SEE5", 7, 0, 0, 0))
									{
										iLocal_88 = unk_0xE3903F59E2F22150();
										iLocal_291 = 1;
									}
								}
							}
						}
						if (iLocal_29 == 1)
						{
							if (iLocal_291 == 1 && unk_0xE3903F59E2F22150() > iLocal_88 + 7000)
							{
								if (func_174() && func_173())
								{
									if (func_170(&uLocal_99, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
									{
										iLocal_88 = unk_0xE3903F59E2F22150();
									}
								}
							}
						}
					}
					if (iLocal_29 == 2)
					{
						if (iLocal_325 == 0)
						{
							if (func_174())
							{
								if (func_170(&uLocal_99, "SOL1AUD", "SOL1_SEC3", 7, 0, 0, 0))
								{
									iLocal_79 = unk_0xE3903F59E2F22150();
									iLocal_325 = 1;
								}
							}
						}
					}
				}
				else if (iLocal_31 == 2 && iLocal_29 == 1)
				{
					if (iLocal_336 == 0)
					{
						if (func_174() && func_173())
						{
							if (func_170(&uLocal_99, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
							{
								iLocal_84 = unk_0xE3903F59E2F22150();
								iLocal_336 = 1;
							}
						}
					}
					else if (unk_0xE3903F59E2F22150() > iLocal_84 + 8000)
					{
						if (func_174() && func_173())
						{
							if (func_170(&uLocal_99, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
							{
								iLocal_84 = unk_0xE3903F59E2F22150();
							}
						}
					}
				}
				if (iLocal_29 == 4)
				{
					if (iLocal_290 == 0)
					{
						func_113();
						if (func_174())
						{
							unk_0x96C4B46F194803A7(unk_0x33CD235DF1E6A94E(), &iVar0, 1);
							if (iVar0 != joaat("weapon_unarmed") && iVar0 != 0)
							{
								if (func_170(&uLocal_99, "SOL1AUD", "SOL1_ARM3", 7, 0, 0, 0))
								{
									iLocal_61 = unk_0xE3903F59E2F22150();
									iLocal_286 = 1;
									iLocal_290 = 1;
								}
							}
							else
							{
								iLocal_61 = unk_0xE3903F59E2F22150();
								iLocal_286 = 1;
								iLocal_290 = 1;
							}
						}
					}
					if (iLocal_290 == 1)
					{
						if (iLocal_286 == 0)
						{
							iLocal_61 = unk_0xE3903F59E2F22150();
							iLocal_286 = 1;
						}
						if (iLocal_286 == 1)
						{
							if (unk_0xE3903F59E2F22150() > iLocal_61 + 9000)
							{
								if (func_174())
								{
									if (func_170(&uLocal_99, "SOL1AUD", "SOL1_PAN3", 7, 0, 0, 0))
									{
										iLocal_286 = 0;
									}
								}
							}
						}
					}
				}
				if (iLocal_29 == 3)
				{
					if (iLocal_322 == 1)
					{
						if (iLocal_288 == 0)
						{
							if (iLocal_289 == 1)
							{
								if (func_174())
								{
									if (func_170(&uLocal_99, "SOL1AUD", "SOL1_STEAL3", 7, 0, 0, 0))
									{
										iLocal_288 = 1;
									}
								}
							}
						}
					}
					if (iLocal_287 == 0)
					{
						if (unk_0x765F6FEEFF39224F(iLocal_33))
						{
							if (unk_0x91D5C8283D19AF49(iLocal_33, 0))
							{
								if (unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iLocal_33, 0))
								{
									if (func_174())
									{
										if (func_170(&uLocal_99, "SOL1AUD", "SOL1_OUT3", 7, 0, 0, 0))
										{
											iLocal_62 = unk_0xE3903F59E2F22150();
											iLocal_288 = 1;
										}
									}
								}
							}
						}
					}
					if (unk_0xE3903F59E2F22150() > iLocal_62 + 10000)
					{
						if (unk_0x765F6FEEFF39224F(iLocal_33))
						{
							if (unk_0x91D5C8283D19AF49(iLocal_33, 0))
							{
								if (unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iLocal_33, 0))
								{
									if (func_174())
									{
										if (func_170(&uLocal_99, "SOL1AUD", "SOL1_OUT3", 7, 0, 0, 0))
										{
											iLocal_62 = unk_0xE3903F59E2F22150();
										}
									}
								}
							}
						}
					}
					if (iLocal_323 == 1)
					{
						if (iLocal_324 == 0)
						{
							if (func_174())
							{
								if (func_170(&uLocal_99, "SOL1AUD", "SOL1_SEC3", 7, 0, 0, 0))
								{
									iLocal_324 = 1;
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_173()
{
	if (func_14() == 0)
	{
		func_132(&uLocal_99, 0, unk_0x33CD235DF1E6A94E(), "MICHAEL", 0, 1);
		return 1;
	}
	if (func_14() == 1)
	{
		func_132(&uLocal_99, 1, unk_0x33CD235DF1E6A94E(), "FRANKLIN", 0, 1);
		return 1;
	}
	if (func_14() == 2)
	{
		func_132(&uLocal_99, 2, unk_0x33CD235DF1E6A94E(), "TREVOR", 0, 1);
		return 1;
	}
	return 0;
}

int func_174()
{
	int iVar0;
	
	iLocal_57 = 0;
	while (iLocal_57 <= 6)
	{
		if (unk_0x765F6FEEFF39224F(iLocal_35[iLocal_57]))
		{
			if (!unk_0xBC2FC12AD0FBF72E(iLocal_35[iLocal_57]))
			{
				iVar0 = func_175(unk_0x33CD235DF1E6A94E(), iLocal_264, 0, 0, -1);
				if (unk_0x765F6FEEFF39224F(iVar0))
				{
					if (!unk_0xBC2FC12AD0FBF72E(iVar0))
					{
					}
				}
				if (iVar0 == iLocal_35[iLocal_57] && func_171(unk_0x33CD235DF1E6A94E(), iVar0, 1) < 15f)
				{
					func_132(&uLocal_99, 5, iLocal_35[iLocal_57], "CONSTRUCTION3", 0, 1);
					return 1;
				}
			}
		}
		iLocal_57++;
	}
	return 0;
}

int func_175(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0[16];
	int iVar1;
	
	iVar1 = 0;
	if (!unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		unk_0xB62DA19846051096(iParam0, &iVar0, iParam4);
		iVar1 = 0;
		while (iVar1 <= (iVar0 - 1))
		{
			if (unk_0x765F6FEEFF39224F(iVar0[iVar1]))
			{
				if (!unk_0xBC2FC12AD0FBF72E(iVar0[iVar1]))
				{
					if (unk_0xC408CC95C7202D67(iVar0[iVar1]) == iParam1)
					{
						if (iParam2 <= 0)
						{
							if (iParam3 == 1)
							{
								if (unk_0x3F219400E5FE4B69(iVar0[iVar1]))
								{
									return iVar0[iVar1];
								}
							}
							else
							{
								return iVar0[iVar1];
							}
						}
						else if (iVar1 + iParam2) <= (iVar0 - 1)
						{
							if (unk_0x765F6FEEFF39224F(iVar0[(iVar1 + iParam2)]))
							{
								if (!unk_0xBC2FC12AD0FBF72E(iVar0[(iVar1 + iParam2)]))
								{
									if (unk_0xC408CC95C7202D67(iVar0[(iVar1 + iParam2)]) == iParam1)
									{
										if (iParam3 == 1)
										{
											if (unk_0x3F219400E5FE4B69(iVar0[(iVar1 + iParam2)]))
											{
												return iVar0[(iVar1 + iParam2)];
											}
										}
										else
										{
											return iVar0[(iVar1 + iParam2)];
										}
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_176()
{
	if (Global_15866 != 0 || unk_0x12BF789190D82474())
	{
		return 1;
	}
	return 0;
}

void func_177()
{
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		if (unk_0xB15E06E3E9C9AEA5(unk_0x33CD235DF1E6A94E()) && unk_0x5DACF31D3AC5ED8D(unk_0x33CD235DF1E6A94E()))
		{
			unk_0x4B06B5746CBEC99F(0f);
		}
		else
		{
			unk_0x4B06B5746CBEC99F(1f);
		}
	}
	func_184();
	if (iLocal_303[0])
	{
		if (func_171(unk_0x33CD235DF1E6A94E(), iLocal_36[0], 1) < 20f && unk_0xDAAA48CE50D80F52(iLocal_36[0], unk_0x33CD235DF1E6A94E()))
		{
			if (iLocal_328[0] == 0)
			{
				unk_0xC4A347124F39D998(iLocal_36[0], unk_0x33CD235DF1E6A94E(), -1, 1072, 3);
				iLocal_328[0] = 1;
			}
			if (iLocal_328[0] == 1)
			{
				if (unk_0xD76D6BCC14B95CE1(iLocal_36[0], 150319005) != 0 || unk_0xD76D6BCC14B95CE1(iLocal_36[0], 150319005) != 1)
				{
					iLocal_328[0] = 0;
				}
			}
		}
		else if (iLocal_328[0] == 1)
		{
			unk_0xC4A347124F39D998(iLocal_36[0], unk_0x33CD235DF1E6A94E(), 1, 0, 2);
			iLocal_328[0] = 0;
		}
	}
	if (iLocal_303[1])
	{
		if (func_171(unk_0x33CD235DF1E6A94E(), iLocal_36[1], 1) < 20f && unk_0xDAAA48CE50D80F52(iLocal_36[1], unk_0x33CD235DF1E6A94E()))
		{
			if (iLocal_328[1] == 0)
			{
				unk_0xC4A347124F39D998(iLocal_36[1], unk_0x33CD235DF1E6A94E(), -1, 1072, 3);
				iLocal_328[1] = 1;
			}
			if (iLocal_328[1] == 1)
			{
				if (unk_0xD76D6BCC14B95CE1(iLocal_36[1], 150319005) != 0 || unk_0xD76D6BCC14B95CE1(iLocal_36[1], 150319005) != 1)
				{
					iLocal_328[1] = 0;
				}
			}
		}
		else if (iLocal_328[1] == 1)
		{
			unk_0xC4A347124F39D998(iLocal_36[1], unk_0x33CD235DF1E6A94E(), 1, 0, 2);
			iLocal_328[1] = 0;
		}
	}
	if (iLocal_303[0] && iLocal_303[1])
	{
		if (func_171(unk_0x33CD235DF1E6A94E(), iLocal_36[0], 1) < func_171(unk_0x33CD235DF1E6A94E(), iLocal_36[1], 1))
		{
			iLocal_298 = 1;
			iLocal_299 = 0;
		}
		else
		{
			iLocal_298 = 0;
			iLocal_299 = 1;
		}
	}
	else
	{
		if (iLocal_303[0] && !iLocal_303[1])
		{
			iLocal_298 = 1;
			iLocal_299 = 0;
		}
		if (iLocal_303[1] && !iLocal_303[0])
		{
			iLocal_298 = 0;
			iLocal_299 = 1;
		}
	}
	switch (iLocal_31)
	{
		case 0:
			if (unk_0xB98788B42580C4A8("SCRAP_SECURITY"))
			{
				if (!unk_0x7FC8FAE3451A21AD("SCRAP_SECURITY"))
				{
					unk_0x8411BDAD24F96365("SCRAP_SECURITY", true);
				}
				if (unk_0x7FC8FAE3451A21AD("SCRAP_SECURITY"))
				{
					if (unk_0x765F6FEEFF39224F(iLocal_36[0]))
					{
						if (!unk_0xBC2FC12AD0FBF72E(iLocal_36[0]))
						{
							if (!unk_0xD30A58E4712EEDDB(iLocal_36[0]))
							{
								if (unk_0x89F20C4A841A3473(863.1551f, -1564.572f, 29.3231f, 5f, 1))
								{
									iLocal_83[0] = unk_0xE3903F59E2F22150();
									if (!unk_0x0A3EB09120E78BA4(iLocal_36[0]))
									{
										if (iLocal_341[0] == 0)
										{
											unk_0x46061A66C745755A(iLocal_36[0], 863.1551f, -1564.572f, 29.3231f, 5f, 0);
											iLocal_340[0] = 0;
											iLocal_341[0] = 1;
										}
									}
								}
								else if (unk_0xE3903F59E2F22150() > iLocal_83[0] + 2000)
								{
									if (unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(iLocal_36[0], true), 863.1551f, -1564.572f, 29.3231f, true) > 3f)
									{
										if (iLocal_340[0] == 0)
										{
											unk_0x7E268975AF5EA74F(iLocal_36[0], 863.1551f, -1564.572f, 29.3231f, 1f, -1, 1048576000, 0, 1193033728);
											iLocal_341[0] = 0;
											iLocal_340[0] = 1;
										}
									}
								}
							}
						}
					}
					if (unk_0x765F6FEEFF39224F(iLocal_36[1]))
					{
						if (!unk_0xBC2FC12AD0FBF72E(iLocal_36[1]))
						{
							if (!unk_0xD30A58E4712EEDDB(iLocal_36[1]))
							{
								if (unk_0x89F20C4A841A3473(940.2881f, -1573.877f, 29.3866f, 5f, 1))
								{
									iLocal_83[1] = unk_0xE3903F59E2F22150();
									if (!unk_0x0A3EB09120E78BA4(iLocal_36[1]))
									{
										if (iLocal_341[1] == 0)
										{
											unk_0x46061A66C745755A(iLocal_36[1], 940.2881f, -1573.877f, 29.3866f, 5f, 0);
											iLocal_340[1] = 0;
											iLocal_341[1] = 1;
										}
									}
								}
								else if (unk_0xE3903F59E2F22150() > iLocal_83[1] + 2000)
								{
									if (unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(iLocal_36[1], true), 940.2881f, -1573.877f, 29.3866f, true) > 3f)
									{
										if (iLocal_340[1] == 0)
										{
											unk_0x7E268975AF5EA74F(iLocal_36[1], 940.2881f, -1573.877f, 29.3866f, 1f, -1, 1048576000, 0, 1193033728);
											iLocal_341[1] = 0;
											iLocal_340[1] = 1;
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (unk_0x765F6FEEFF39224F(iLocal_36[0]))
			{
				if (!unk_0xBC2FC12AD0FBF72E(iLocal_36[0]))
				{
					if (func_171(unk_0x33CD235DF1E6A94E(), iLocal_36[0], 1) < 20f)
					{
						if ((func_183(unk_0x33CD235DF1E6A94E()) == joaat("weapon_unarmed") || unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0)) || func_182(0))
						{
							if (unk_0x910FF514D7BC5674(unk_0x33CD235DF1E6A94E(), iLocal_36[0], 100f) || unk_0xDAAA48CE50D80F52(iLocal_36[0], unk_0x33CD235DF1E6A94E()))
							{
								if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), 860.4606f, -1563.58f, 28.81788f, 865.0807f, -1575.088f, 30.93324f, 5.75f, 0, true, 0) || unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, 0, true, 0))
								{
									if (iLocal_334[0] == 0)
									{
										if (!unk_0x910FF514D7BC5674(iLocal_36[0], unk_0x33CD235DF1E6A94E(), 45f))
										{
											if (!unk_0x3F219400E5FE4B69(iLocal_36[0]))
											{
												unk_0x31826EF4A8BC8E9F(iLocal_36[0]);
											}
											else
											{
												unk_0xED68CDDDE25A144E(iLocal_36[0]);
											}
											unk_0x11C4AF4137F2A4B5(iLocal_36[0], unk_0x33CD235DF1E6A94E(), 5000);
											iLocal_82[0] = unk_0xE3903F59E2F22150();
											func_181(iLocal_36[0]);
											iLocal_334[0] = 1;
										}
									}
									if (iLocal_334[0] == 1)
									{
										if (unk_0xE3903F59E2F22150() > iLocal_82[0] + 5000)
										{
											iLocal_334[0] = 0;
										}
									}
									if (iLocal_304[0] == 0 && iLocal_304[1] == 0)
									{
										if (iLocal_302 == 0)
										{
											func_179(iLocal_36[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 6);
											iLocal_66 = unk_0xE3903F59E2F22150();
											iLocal_302 = 1;
										}
										else if (unk_0xE3903F59E2F22150() > iLocal_66 + 15000)
										{
											func_179(iLocal_36[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
											iLocal_66 = unk_0xE3903F59E2F22150();
										}
									}
									else
									{
										if (iLocal_304[0] == 1)
										{
											if (iLocal_305 == 0)
											{
												func_179(iLocal_36[0], "PROVOKE_GEBERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_72 = unk_0xE3903F59E2F22150();
												iLocal_305 = 1;
											}
											else if (unk_0xE3903F59E2F22150() > iLocal_72 + 15000)
											{
												func_179(iLocal_36[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_72 = unk_0xE3903F59E2F22150();
											}
										}
										if (iLocal_304[1] == 1)
										{
											if (iLocal_306 == 0)
											{
												func_179(iLocal_36[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_73 = unk_0xE3903F59E2F22150();
												iLocal_306 = 1;
											}
											else if (unk_0xE3903F59E2F22150() > iLocal_73 + 15000)
											{
												func_179(iLocal_36[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_73 = unk_0xE3903F59E2F22150();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			if (unk_0x765F6FEEFF39224F(iLocal_36[1]))
			{
				if (!unk_0xBC2FC12AD0FBF72E(iLocal_36[1]))
				{
					if (func_171(unk_0x33CD235DF1E6A94E(), iLocal_36[1], 1) < 15f)
					{
						if ((func_183(unk_0x33CD235DF1E6A94E()) == joaat("weapon_unarmed") || unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0)) || func_182(0))
						{
							if (unk_0x910FF514D7BC5674(unk_0x33CD235DF1E6A94E(), iLocal_36[1], 100f))
							{
								if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), 939.8862f, -1575.635f, 28.59783f, 952.9254f, -1575.484f, 33.19459f, 13.75f, 0, true, 0))
								{
									if (iLocal_334[1] == 0)
									{
										if (!unk_0x910FF514D7BC5674(iLocal_36[1], unk_0x33CD235DF1E6A94E(), 45f))
										{
											if (!unk_0x3F219400E5FE4B69(iLocal_36[1]))
											{
												unk_0x31826EF4A8BC8E9F(iLocal_36[1]);
											}
											else
											{
												unk_0xED68CDDDE25A144E(iLocal_36[1]);
											}
											unk_0x11C4AF4137F2A4B5(iLocal_36[1], unk_0x33CD235DF1E6A94E(), 5000);
											iLocal_82[1] = unk_0xE3903F59E2F22150();
											func_181(iLocal_36[1]);
											iLocal_334[1] = 1;
										}
									}
									if (iLocal_334[1] == 1)
									{
										if (unk_0xE3903F59E2F22150() > iLocal_82[1] + 5000)
										{
											iLocal_334[1] = 0;
										}
									}
									if (iLocal_304[0] == 0 && iLocal_304[1] == 0)
									{
										if (iLocal_302 == 0)
										{
											func_179(iLocal_36[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
											iLocal_66 = unk_0xE3903F59E2F22150();
											iLocal_302 = 1;
										}
										else if (unk_0xE3903F59E2F22150() > iLocal_66 + 15000)
										{
											func_179(iLocal_36[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
											iLocal_66 = unk_0xE3903F59E2F22150();
										}
									}
									else
									{
										if (iLocal_304[1] == 1)
										{
											if (iLocal_305 == 0)
											{
												func_179(iLocal_36[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
												iLocal_72 = unk_0xE3903F59E2F22150();
												iLocal_305 = 1;
											}
											else if (unk_0xE3903F59E2F22150() > iLocal_72 + 15000)
											{
												func_179(iLocal_36[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_72 = unk_0xE3903F59E2F22150();
											}
										}
										if (iLocal_304[0] == 1)
										{
											if (iLocal_306 == 0)
											{
												func_179(iLocal_36[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
												iLocal_73 = unk_0xE3903F59E2F22150();
												iLocal_306 = 1;
											}
											else if (unk_0xE3903F59E2F22150() > iLocal_73 + 15000)
											{
												func_179(iLocal_36[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_73 = unk_0xE3903F59E2F22150();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (iLocal_360 == 0)
			{
				iLocal_360 = 1;
			}
			if (func_178() || iLocal_297 == 1)
			{
				if (unk_0x765F6FEEFF39224F(iLocal_36[0]))
				{
					if (!unk_0xBC2FC12AD0FBF72E(iLocal_36[0]))
					{
						if (unk_0xDAAA48CE50D80F52(iLocal_36[0], unk_0x33CD235DF1E6A94E()))
						{
							iLocal_81[0] = unk_0xE3903F59E2F22150();
							iLocal_332[0] = 1;
							if (iLocal_331[0] == 0)
							{
								if (unk_0x3F219400E5FE4B69(iLocal_36[0]))
								{
									unk_0xED68CDDDE25A144E(iLocal_36[0]);
								}
								else
								{
									unk_0x31826EF4A8BC8E9F(iLocal_36[0]);
								}
								unk_0x28F648743D7DE312(iLocal_36[0], 50, true);
								unk_0x277716E9E7CC0692(iLocal_36[0], unk_0x33CD235DF1E6A94E(), 0, 16);
								func_181(iLocal_36[0]);
								iLocal_331[0] = 1;
							}
						}
						else if (iLocal_333[0] == 0)
						{
							if (iLocal_332[0] == 0)
							{
								if (unk_0x3F219400E5FE4B69(iLocal_36[0]))
								{
									unk_0xED68CDDDE25A144E(iLocal_36[0]);
								}
								else
								{
									unk_0x31826EF4A8BC8E9F(iLocal_36[0]);
								}
								unk_0x7E268975AF5EA74F(iLocal_36[0], unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), 3f, -1, 1048576000, 0, 1193033728);
								func_181(iLocal_36[0]);
								iLocal_333[0] = 1;
							}
							if (iLocal_332[0] == 1)
							{
								if (unk_0xE3903F59E2F22150() > iLocal_81[0] + 500)
								{
									if (unk_0x3F219400E5FE4B69(iLocal_36[0]))
									{
										unk_0xED68CDDDE25A144E(iLocal_36[0]);
									}
									else
									{
										unk_0x31826EF4A8BC8E9F(iLocal_36[0]);
									}
									unk_0x7E268975AF5EA74F(iLocal_36[0], unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), 3f, -1, 1048576000, 0, 1193033728);
									func_181(iLocal_36[0]);
									iLocal_333[0] = 1;
								}
							}
						}
					}
				}
				if (unk_0x765F6FEEFF39224F(iLocal_36[1]))
				{
					if (!unk_0xBC2FC12AD0FBF72E(iLocal_36[1]))
					{
						if (unk_0xDAAA48CE50D80F52(iLocal_36[1], unk_0x33CD235DF1E6A94E()))
						{
							iLocal_81[1] = unk_0xE3903F59E2F22150();
							iLocal_332[1] = 1;
							if (iLocal_331[1] == 0)
							{
								if (unk_0x3F219400E5FE4B69(iLocal_36[1]))
								{
									unk_0xED68CDDDE25A144E(iLocal_36[1]);
								}
								else
								{
									unk_0x31826EF4A8BC8E9F(iLocal_36[1]);
								}
								unk_0x28F648743D7DE312(iLocal_36[1], 50, true);
								unk_0x277716E9E7CC0692(iLocal_36[1], unk_0x33CD235DF1E6A94E(), 0, 16);
								func_181(iLocal_36[1]);
								iLocal_331[1] = 1;
							}
						}
						else if (iLocal_333[1] == 0)
						{
							if (iLocal_332[1] == 0)
							{
								if (unk_0x3F219400E5FE4B69(iLocal_36[1]))
								{
									unk_0xED68CDDDE25A144E(iLocal_36[1]);
								}
								else
								{
									unk_0x31826EF4A8BC8E9F(iLocal_36[1]);
								}
								unk_0x7E268975AF5EA74F(iLocal_36[1], unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), 3f, -1, 1048576000, 0, 1193033728);
								func_181(iLocal_36[1]);
								iLocal_333[1] = 1;
							}
							if (iLocal_332[1] == 1)
							{
								if (unk_0xE3903F59E2F22150() > iLocal_81[1] + 500)
								{
									if (unk_0x3F219400E5FE4B69(iLocal_36[1]))
									{
										unk_0xED68CDDDE25A144E(iLocal_36[1]);
									}
									else
									{
										unk_0x31826EF4A8BC8E9F(iLocal_36[1]);
									}
									unk_0x7E268975AF5EA74F(iLocal_36[1], unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), 3f, -1, 1048576000, 0, 1193033728);
									func_181(iLocal_36[1]);
									iLocal_333[1] = 1;
								}
							}
						}
					}
				}
				if (func_178())
				{
					if (iLocal_307 == 0)
					{
						if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) < 2)
						{
							unk_0xD875615F72CD34A6(5);
							unk_0x4B06B5746CBEC99F(1f);
							unk_0x98F04A4FFB4AD01C(unk_0x95B959F18401C09A(), 2, 0);
							unk_0x66D901F8097E8E86(unk_0x95B959F18401C09A(), 0);
							iLocal_307 = 1;
						}
					}
					if (iLocal_298 == 1)
					{
						if (iLocal_300 == 0)
						{
							if (func_171(unk_0x33CD235DF1E6A94E(), iLocal_36[0], 1) < 20f)
							{
								if (!unk_0x07292B2EDB334B14(iLocal_36[0]))
								{
									func_179(iLocal_36[0], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
									iLocal_71 = unk_0xE3903F59E2F22150();
									iLocal_300 = 1;
								}
							}
						}
						else if (unk_0xE3903F59E2F22150() > iLocal_71 + 7000)
						{
							if (func_171(unk_0x33CD235DF1E6A94E(), iLocal_36[0], 1) < 20f)
							{
								if (!unk_0x07292B2EDB334B14(iLocal_36[0]))
								{
									func_179(iLocal_36[0], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
									iLocal_71 = unk_0xE3903F59E2F22150();
								}
							}
						}
					}
					if (iLocal_299 == 1)
					{
						if (iLocal_300 == 0)
						{
							if (func_171(unk_0x33CD235DF1E6A94E(), iLocal_36[1], 1) < 20f)
							{
								if (!unk_0x07292B2EDB334B14(iLocal_36[1]))
								{
									func_179(iLocal_36[1], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
									iLocal_71 = unk_0xE3903F59E2F22150();
									iLocal_300 = 1;
								}
							}
						}
						else if (unk_0xE3903F59E2F22150() > iLocal_71 + 7000)
						{
							if (func_171(unk_0x33CD235DF1E6A94E(), iLocal_36[1], 1) < 20f)
							{
								if (!unk_0x07292B2EDB334B14(iLocal_36[1]))
								{
									func_179(iLocal_36[1], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
									iLocal_71 = unk_0xE3903F59E2F22150();
								}
							}
						}
					}
				}
				else
				{
					if (iLocal_339 == 0)
					{
						iLocal_41 = func_175(unk_0x33CD235DF1E6A94E(), -1533126372, 0, 0, 28);
						if (iLocal_41 != 0)
						{
							if (unk_0x765F6FEEFF39224F(iLocal_41))
							{
								if (!unk_0xBC2FC12AD0FBF72E(iLocal_41))
								{
									if (func_171(unk_0x33CD235DF1E6A94E(), iLocal_41, 1) < 35f)
									{
										iLocal_339 = 1;
									}
								}
							}
						}
					}
					if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) > 0 && iLocal_339 == 0)
					{
						if (iLocal_298 == 1)
						{
							if (iLocal_301 == 0)
							{
								if (func_171(unk_0x33CD235DF1E6A94E(), iLocal_36[0], 1) < 20f)
								{
									if (!unk_0x07292B2EDB334B14(iLocal_36[0]))
									{
										func_179(iLocal_36[0], "GENERIC_INSULT_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
										iLocal_70 = unk_0xE3903F59E2F22150();
										iLocal_301 = 1;
									}
								}
							}
							else if (unk_0xE3903F59E2F22150() > iLocal_70 + 7000)
							{
								if (func_171(unk_0x33CD235DF1E6A94E(), iLocal_36[0], 1) < 20f)
								{
									if (!unk_0x07292B2EDB334B14(iLocal_36[0]))
									{
										func_179(iLocal_36[0], "GENERIC_CURSE_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
										iLocal_70 = unk_0xE3903F59E2F22150();
									}
								}
							}
						}
						if (iLocal_299 == 1)
						{
							if (iLocal_301 == 0)
							{
								if (func_171(unk_0x33CD235DF1E6A94E(), iLocal_36[1], 1) < 20f)
								{
									if (!unk_0x07292B2EDB334B14(iLocal_36[1]))
									{
										func_179(iLocal_36[1], "GENERIC_INSULT_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
										iLocal_70 = unk_0xE3903F59E2F22150();
										iLocal_301 = 1;
									}
								}
							}
							else if (unk_0xE3903F59E2F22150() > iLocal_70 + 7000)
							{
								if (func_171(unk_0x33CD235DF1E6A94E(), iLocal_36[1], 1) < 20f)
								{
									if (!unk_0x07292B2EDB334B14(iLocal_36[1]))
									{
										func_179(iLocal_36[1], "GENERIC_CURSE_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
										iLocal_70 = unk_0xE3903F59E2F22150();
									}
								}
							}
						}
					}
				}
			}
			if (!func_178())
			{
				if (iLocal_309 == 0)
				{
					if (unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), 893.2f, -1556.5f, 30f, true) < 18f)
					{
						if (unk_0x765F6FEEFF39224F(iLocal_36[0]))
						{
							if (!unk_0xBC2FC12AD0FBF72E(iLocal_36[0]))
							{
								if (unk_0xDAAA48CE50D80F52(iLocal_36[0], unk_0x33CD235DF1E6A94E()))
								{
									iLocal_65 = unk_0xE3903F59E2F22150();
									iLocal_309 = 1;
								}
							}
						}
						if (unk_0x765F6FEEFF39224F(iLocal_36[1]))
						{
							if (!unk_0xBC2FC12AD0FBF72E(iLocal_36[1]))
							{
								if (unk_0xDAAA48CE50D80F52(iLocal_36[1], unk_0x33CD235DF1E6A94E()))
								{
									iLocal_65 = unk_0xE3903F59E2F22150();
									iLocal_309 = 1;
								}
							}
						}
					}
				}
				if (iLocal_297 == 0)
				{
					if (unk_0x765F6FEEFF39224F(iLocal_36[0]))
					{
						if (!unk_0xBC2FC12AD0FBF72E(iLocal_36[0]))
						{
							if (func_171(unk_0x33CD235DF1E6A94E(), iLocal_36[0], 1) > 4f)
							{
								if (unk_0xDAAA48CE50D80F52(iLocal_36[0], unk_0x33CD235DF1E6A94E()))
								{
									if (iLocal_329[0] == 0)
									{
										if (unk_0x3F219400E5FE4B69(iLocal_36[0]))
										{
											unk_0xED68CDDDE25A144E(iLocal_36[0]);
										}
										else
										{
											unk_0x31826EF4A8BC8E9F(iLocal_36[0]);
										}
										unk_0x3C0F6044C54799A8(iLocal_36[0], unk_0x33CD235DF1E6A94E(), -1, 0.5f, 2f, 1073741824, 0);
										func_181(iLocal_36[0]);
										iLocal_329[0] = 1;
									}
									iLocal_80[0] = unk_0xE3903F59E2F22150();
								}
								else if (unk_0xE3903F59E2F22150() > iLocal_80[0] + 500)
								{
									if (iLocal_330[0] == 0)
									{
										if (unk_0x3F219400E5FE4B69(iLocal_36[0]))
										{
											unk_0xED68CDDDE25A144E(iLocal_36[0]);
										}
										else
										{
											unk_0x31826EF4A8BC8E9F(iLocal_36[0]);
										}
										unk_0x7E268975AF5EA74F(iLocal_36[0], unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), 2f, -1, 1048576000, 0, 1193033728);
										func_181(iLocal_36[0]);
										iLocal_330[0] = 1;
									}
								}
							}
							else if (iLocal_361[0] == 0)
							{
								if (unk_0x3F219400E5FE4B69(iLocal_36[0]))
								{
									unk_0xED68CDDDE25A144E(iLocal_36[0]);
								}
								else
								{
									unk_0x31826EF4A8BC8E9F(iLocal_36[0]);
								}
								unk_0x99414FB2D30425C1(&uLocal_48);
								unk_0x11C4AF4137F2A4B5(0, unk_0x33CD235DF1E6A94E(), 0);
								unk_0x7D575FC8F42508D8(0, 2000);
								unk_0x656E3BB78935070E(uLocal_48, 1);
								unk_0xC734F59A13D39AEF(uLocal_48);
								unk_0x13A2D602CD10CBAC(iLocal_36[0], uLocal_48);
								unk_0xA7A57E7757ED035E(&uLocal_48);
								func_181(iLocal_36[0]);
								iLocal_361[0] = 1;
							}
							if (iLocal_335 == 0)
							{
								if (iLocal_326 == 0 || iLocal_302 == 1)
								{
									if (iLocal_296 == 0)
									{
										if (func_171(unk_0x33CD235DF1E6A94E(), iLocal_36[0], 1) < 10f)
										{
											if (!unk_0x07292B2EDB334B14(iLocal_36[0]))
											{
												func_179(iLocal_36[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 1);
												iLocal_67 = unk_0xE3903F59E2F22150();
												iLocal_68 = unk_0xE3903F59E2F22150();
												iLocal_65 = unk_0xE3903F59E2F22150();
												iLocal_309 = 1;
												iLocal_296 = 1;
												iLocal_304[0] = 1;
											}
										}
									}
									else if (unk_0xE3903F59E2F22150() > iLocal_67 + 7000)
									{
										if (func_171(unk_0x33CD235DF1E6A94E(), iLocal_36[0], 1) < 10f)
										{
											if (!unk_0x07292B2EDB334B14(iLocal_36[0]))
											{
												func_179(iLocal_36[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
												iLocal_67 = unk_0xE3903F59E2F22150();
											}
										}
									}
								}
								else if (iLocal_302 == 0)
								{
									if (iLocal_327 == 0)
									{
										if (func_171(unk_0x33CD235DF1E6A94E(), iLocal_36[0], 1) < 10f)
										{
											if (!unk_0x07292B2EDB334B14(iLocal_36[0]))
											{
												func_179(iLocal_36[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 8);
												iLocal_296 = 1;
												iLocal_327 = 1;
											}
										}
									}
								}
							}
							else if (unk_0xE3903F59E2F22150() > iLocal_68 + 7000)
							{
								if (func_171(unk_0x33CD235DF1E6A94E(), iLocal_36[0], 1) < 15f)
								{
									if (!unk_0x07292B2EDB334B14(iLocal_36[0]))
									{
										func_179(iLocal_36[0], "FIGHT", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
										iLocal_68 = unk_0xE3903F59E2F22150();
									}
								}
							}
						}
					}
					if (unk_0x765F6FEEFF39224F(iLocal_36[1]))
					{
						if (!unk_0xBC2FC12AD0FBF72E(iLocal_36[1]))
						{
							if (func_171(unk_0x33CD235DF1E6A94E(), iLocal_36[1], 1) > 4f)
							{
								if (unk_0xDAAA48CE50D80F52(iLocal_36[1], unk_0x33CD235DF1E6A94E()))
								{
									if (iLocal_329[1] == 0)
									{
										if (unk_0x3F219400E5FE4B69(iLocal_36[1]))
										{
											unk_0xED68CDDDE25A144E(iLocal_36[1]);
										}
										else
										{
											unk_0x31826EF4A8BC8E9F(iLocal_36[1]);
										}
										unk_0x3C0F6044C54799A8(iLocal_36[1], unk_0x33CD235DF1E6A94E(), -1, 0.5f, 2f, 1073741824, 0);
										func_181(iLocal_36[1]);
										iLocal_329[1] = 1;
									}
									iLocal_80[1] = unk_0xE3903F59E2F22150();
								}
								else if (unk_0xE3903F59E2F22150() > iLocal_80[1] + 500)
								{
									if (iLocal_330[1] == 0)
									{
										if (unk_0x3F219400E5FE4B69(iLocal_36[1]))
										{
											unk_0xED68CDDDE25A144E(iLocal_36[1]);
										}
										else
										{
											unk_0x31826EF4A8BC8E9F(iLocal_36[1]);
										}
										unk_0x7E268975AF5EA74F(iLocal_36[1], unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), 2f, -1, 1048576000, 0, 1193033728);
										func_181(iLocal_36[1]);
										iLocal_330[1] = 1;
									}
								}
							}
							else if (iLocal_361[1] == 0)
							{
								if (unk_0x3F219400E5FE4B69(iLocal_36[1]))
								{
									unk_0xED68CDDDE25A144E(iLocal_36[1]);
								}
								else
								{
									unk_0x31826EF4A8BC8E9F(iLocal_36[1]);
								}
								unk_0x99414FB2D30425C1(&uLocal_48);
								unk_0x11C4AF4137F2A4B5(0, unk_0x33CD235DF1E6A94E(), 0);
								unk_0x7D575FC8F42508D8(0, 2000);
								unk_0x656E3BB78935070E(uLocal_48, 1);
								unk_0xC734F59A13D39AEF(uLocal_48);
								unk_0x13A2D602CD10CBAC(iLocal_36[1], uLocal_48);
								unk_0xA7A57E7757ED035E(&uLocal_48);
								func_181(iLocal_36[1]);
								iLocal_361[1] = 1;
							}
							if (iLocal_335 == 0)
							{
								if (iLocal_326 == 0 || iLocal_302 == 1)
								{
									if (iLocal_296 == 0)
									{
										if (func_171(unk_0x33CD235DF1E6A94E(), iLocal_36[1], 1) < 10f)
										{
											if (!unk_0x07292B2EDB334B14(iLocal_36[1]))
											{
												func_179(iLocal_36[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_67 = unk_0xE3903F59E2F22150();
												iLocal_69 = unk_0xE3903F59E2F22150();
												iLocal_65 = unk_0xE3903F59E2F22150();
												iLocal_309 = 1;
												iLocal_296 = 1;
												iLocal_304[1] = 1;
											}
										}
									}
									else if (unk_0xE3903F59E2F22150() > iLocal_67 + 7000)
									{
										if (func_171(unk_0x33CD235DF1E6A94E(), iLocal_36[1], 1) < 10f)
										{
											if (!unk_0x07292B2EDB334B14(iLocal_36[1]))
											{
												func_179(iLocal_36[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 11);
												iLocal_67 = unk_0xE3903F59E2F22150();
											}
										}
									}
								}
								else if (iLocal_302 == 0)
								{
									if (iLocal_327 == 0)
									{
										if (func_171(unk_0x33CD235DF1E6A94E(), iLocal_36[1], 1) < 10f)
										{
											if (!unk_0x07292B2EDB334B14(iLocal_36[1]))
											{
												func_179(iLocal_36[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 8);
												iLocal_296 = 1;
												iLocal_327 = 1;
											}
										}
									}
								}
							}
							else if (unk_0xE3903F59E2F22150() > iLocal_69 + 7000)
							{
								if (func_171(unk_0x33CD235DF1E6A94E(), iLocal_36[1], 1) < 10f)
								{
									if (!unk_0x07292B2EDB334B14(iLocal_36[1]))
									{
										func_179(iLocal_36[1], "FIGHT", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 11);
										iLocal_69 = unk_0xE3903F59E2F22150();
									}
								}
							}
						}
					}
					if (iLocal_309 == 1)
					{
						if (iLocal_335 == 0)
						{
							if (unk_0xE3903F59E2F22150() > iLocal_65 + 22000)
							{
								iLocal_335 = 1;
							}
						}
					}
					if (iLocal_309 == 1)
					{
						if (iLocal_297 == 0)
						{
							if (unk_0xE3903F59E2F22150() > iLocal_65 + 30000)
							{
								unk_0x98F04A4FFB4AD01C(unk_0x95B959F18401C09A(), 2, 0);
								iLocal_297 = 1;
							}
						}
					}
					if (unk_0x765F6FEEFF39224F(iLocal_33))
					{
						if (unk_0x91D5C8283D19AF49(iLocal_33, 0))
						{
							if (unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iLocal_33, 1))
							{
								if (unk_0xDAAA48CE50D80F52(iLocal_36[0], unk_0x33CD235DF1E6A94E()) || unk_0xDAAA48CE50D80F52(iLocal_36[1], unk_0x33CD235DF1E6A94E()))
								{
									iLocal_297 = 1;
								}
							}
							if (func_171(unk_0x33CD235DF1E6A94E(), iLocal_33, 1) < 5f && unk_0x707FFB0E65C1C546(unk_0x33CD235DF1E6A94E()))
							{
								if (unk_0xDAAA48CE50D80F52(iLocal_36[0], unk_0x33CD235DF1E6A94E()) || unk_0xDAAA48CE50D80F52(iLocal_36[1], unk_0x33CD235DF1E6A94E()))
								{
									iLocal_297 = 1;
								}
							}
						}
					}
					if (unk_0x765F6FEEFF39224F(iLocal_36[0]))
					{
						if (!unk_0xBC2FC12AD0FBF72E(iLocal_36[0]))
						{
							if (unk_0xA08B8AEC5B1A55D6(unk_0x33CD235DF1E6A94E()))
							{
								if (unk_0xE7A1E8F9E47DE4A7(unk_0x33CD235DF1E6A94E()))
								{
									if (unk_0xDAAA48CE50D80F52(iLocal_36[0], unk_0x33CD235DF1E6A94E()))
									{
										iLocal_297 = 1;
									}
								}
							}
						}
					}
					if (unk_0x765F6FEEFF39224F(iLocal_36[1]))
					{
						if (!unk_0xBC2FC12AD0FBF72E(iLocal_36[1]))
						{
							if (unk_0xA08B8AEC5B1A55D6(unk_0x33CD235DF1E6A94E()))
							{
								if (unk_0xE7A1E8F9E47DE4A7(unk_0x33CD235DF1E6A94E()))
								{
									if (unk_0xDAAA48CE50D80F52(iLocal_36[1], unk_0x33CD235DF1E6A94E()))
									{
										iLocal_297 = 1;
									}
								}
							}
						}
					}
				}
			}
			break;
	}
}

int func_178()
{
	if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		iLocal_64 = 0;
		while (iLocal_64 <= 6)
		{
			if (unk_0x765F6FEEFF39224F(iLocal_35[iLocal_64]))
			{
				if (!unk_0xBC2FC12AD0FBF72E(iLocal_35[iLocal_64]))
				{
					if (func_183(unk_0x33CD235DF1E6A94E()) != joaat("weapon_unarmed") && !func_182(0))
					{
						if (unk_0xDAAA48CE50D80F52(iLocal_35[iLocal_64], unk_0x33CD235DF1E6A94E()))
						{
							return 1;
						}
					}
				}
			}
			iLocal_64++;
		}
		if (unk_0x765F6FEEFF39224F(iLocal_36[0]))
		{
			if (!unk_0xBC2FC12AD0FBF72E(iLocal_36[0]))
			{
				if (func_183(unk_0x33CD235DF1E6A94E()) != joaat("weapon_unarmed") && !func_182(0))
				{
					if (unk_0xDAAA48CE50D80F52(iLocal_36[0], unk_0x33CD235DF1E6A94E()))
					{
						return 1;
					}
				}
			}
		}
		if (unk_0x765F6FEEFF39224F(iLocal_36[1]))
		{
			if (!unk_0xBC2FC12AD0FBF72E(iLocal_36[1]))
			{
				if (func_183(unk_0x33CD235DF1E6A94E()) != joaat("weapon_unarmed") && !func_182(0))
				{
					if (unk_0xDAAA48CE50D80F52(iLocal_36[1], unk_0x33CD235DF1E6A94E()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_179(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xF0502D0584CCD9A6(iParam0, sParam1, sParam2, func_180(iParam3), 0);
}

int func_180(int iParam0)
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

void func_181(int iParam0)
{
	if (iParam0 == iLocal_36[0])
	{
		iLocal_328[0] = 0;
		iLocal_340[0] = 0;
		iLocal_341[0] = 0;
		iLocal_334[0] = 0;
		iLocal_331[0] = 0;
		iLocal_333[0] = 0;
		iLocal_329[0] = 0;
		iLocal_330[0] = 0;
		iLocal_361[0] = 0;
	}
	if (iParam0 == iLocal_36[1])
	{
		iLocal_328[1] = 0;
		iLocal_340[1] = 0;
		iLocal_341[1] = 0;
		iLocal_334[1] = 0;
		iLocal_331[1] = 0;
		iLocal_333[1] = 0;
		iLocal_329[1] = 0;
		iLocal_330[1] = 0;
		iLocal_361[1] = 0;
	}
}

int func_182(int iParam0)
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

int func_183(int iParam0)
{
	var uVar0;
	
	unk_0x96C4B46F194803A7(iParam0, &uVar0, 1);
	return uVar0;
}

void func_184()
{
	if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
	{
		if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
		{
			vLocal_93 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true) };
		}
	}
	if (unk_0x765F6FEEFF39224F(iLocal_36[0]))
	{
		if (!unk_0xBC2FC12AD0FBF72E(iLocal_36[0]))
		{
			vLocal_95[0 /*3*/] = { unk_0xFBB1F99A825CAB09(iLocal_36[0], true) };
		}
	}
	if (unk_0x765F6FEEFF39224F(iLocal_36[1]))
	{
		if (!unk_0xBC2FC12AD0FBF72E(iLocal_36[1]))
		{
			vLocal_95[1 /*3*/] = { unk_0xFBB1F99A825CAB09(iLocal_36[1], true) };
		}
	}
	if (unk_0x765F6FEEFF39224F(iLocal_36[0]))
	{
		if (!unk_0xBC2FC12AD0FBF72E(iLocal_36[0]))
		{
			iLocal_303[0] = 1;
		}
		else
		{
			iLocal_303[0] = 0;
		}
	}
	else
	{
		iLocal_303[0] = 0;
	}
	if (unk_0x765F6FEEFF39224F(iLocal_36[1]))
	{
		if (!unk_0xBC2FC12AD0FBF72E(iLocal_36[1]))
		{
			iLocal_303[1] = 1;
		}
		else
		{
			iLocal_303[1] = 0;
		}
	}
	else
	{
		iLocal_303[1] = 0;
	}
	if (iLocal_31 != 0)
	{
		if (iLocal_31 == 1)
		{
			if (iLocal_303[0] == 1)
			{
				if (iLocal_303[1] == 1)
				{
					if (func_171(unk_0x33CD235DF1E6A94E(), iLocal_36[0], 1) < func_171(unk_0x33CD235DF1E6A94E(), iLocal_36[1], 1))
					{
						if (func_171(unk_0x33CD235DF1E6A94E(), iLocal_36[0], 1) < 20f)
						{
							if (((vLocal_93.x < vLocal_95[0 /*3*/] && !unk_0x910FF514D7BC5674(unk_0x33CD235DF1E6A94E(), iLocal_36[0], 90f)) && !unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, true, 0)) && !unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, 0, true, 0))
							{
								iLocal_31 = 0;
								iLocal_340[0] = 0;
								iLocal_341[0] = 0;
								iLocal_340[1] = 0;
								iLocal_341[1] = 0;
								iLocal_83[0] = unk_0xE3903F59E2F22150();
								iLocal_83[1] = unk_0xE3903F59E2F22150();
							}
						}
						else if (vLocal_93.x < vLocal_95[0 /*3*/])
						{
							iLocal_31 = 0;
							iLocal_340[0] = 0;
							iLocal_341[0] = 0;
							iLocal_340[1] = 0;
							iLocal_341[1] = 0;
							iLocal_83[0] = unk_0xE3903F59E2F22150();
							iLocal_83[1] = unk_0xE3903F59E2F22150();
						}
					}
					else if (func_171(unk_0x33CD235DF1E6A94E(), iLocal_36[1], 1) < 15f)
					{
						if ((vLocal_93.x > vLocal_95[1 /*3*/] && !unk_0x910FF514D7BC5674(unk_0x33CD235DF1E6A94E(), iLocal_36[1], 90f)) && !unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, true, 0))
						{
							iLocal_31 = 0;
							iLocal_340[0] = 0;
							iLocal_341[0] = 0;
							iLocal_340[1] = 0;
							iLocal_341[1] = 0;
							iLocal_83[0] = unk_0xE3903F59E2F22150();
							iLocal_83[1] = unk_0xE3903F59E2F22150();
						}
					}
					else if (vLocal_93.x > vLocal_95[1 /*3*/])
					{
						iLocal_31 = 0;
						iLocal_340[0] = 0;
						iLocal_341[0] = 0;
						iLocal_340[1] = 0;
						iLocal_341[1] = 0;
						iLocal_83[0] = unk_0xE3903F59E2F22150();
						iLocal_83[1] = unk_0xE3903F59E2F22150();
					}
				}
				else if (func_171(unk_0x33CD235DF1E6A94E(), iLocal_36[0], 1) < func_171(unk_0x33CD235DF1E6A94E(), iLocal_36[1], 1))
				{
					if (func_171(unk_0x33CD235DF1E6A94E(), iLocal_36[0], 1) < 15f)
					{
						if ((vLocal_93.x < vLocal_95[0 /*3*/] && !unk_0x910FF514D7BC5674(unk_0x33CD235DF1E6A94E(), iLocal_36[0], 90f)) && !unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, true, 0))
						{
							iLocal_31 = 0;
							iLocal_340[0] = 0;
							iLocal_341[0] = 0;
							iLocal_340[1] = 0;
							iLocal_341[1] = 0;
							iLocal_83[0] = unk_0xE3903F59E2F22150();
							iLocal_83[1] = unk_0xE3903F59E2F22150();
						}
					}
					else if (vLocal_93.x < vLocal_95[0 /*3*/])
					{
						iLocal_31 = 0;
						iLocal_340[0] = 0;
						iLocal_341[0] = 0;
						iLocal_340[1] = 0;
						iLocal_341[1] = 0;
						iLocal_83[0] = unk_0xE3903F59E2F22150();
						iLocal_83[1] = unk_0xE3903F59E2F22150();
					}
				}
			}
			else if (iLocal_303[1] == 1)
			{
				if (func_171(unk_0x33CD235DF1E6A94E(), iLocal_36[1], 1) < 15f)
				{
					if ((vLocal_93.x > vLocal_95[1 /*3*/] && !unk_0x910FF514D7BC5674(unk_0x33CD235DF1E6A94E(), iLocal_36[1], 90f)) && !unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, true, 0))
					{
						iLocal_31 = 0;
						iLocal_340[0] = 0;
						iLocal_341[0] = 0;
						iLocal_340[1] = 0;
						iLocal_341[1] = 0;
						iLocal_83[0] = unk_0xE3903F59E2F22150();
						iLocal_83[1] = unk_0xE3903F59E2F22150();
					}
				}
				else if (vLocal_93.x > vLocal_95[1 /*3*/])
				{
					iLocal_31 = 0;
					iLocal_340[0] = 0;
					iLocal_341[0] = 0;
					iLocal_340[1] = 0;
					iLocal_341[1] = 0;
					iLocal_83[0] = unk_0xE3903F59E2F22150();
					iLocal_83[1] = unk_0xE3903F59E2F22150();
				}
			}
		}
		if (iLocal_31 == 2)
		{
			if (iLocal_297 == 0)
			{
				if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, true, 0) || vLocal_93.x > 942f)
				{
					if (!unk_0xBC2FC12AD0FBF72E(iLocal_36[1]))
					{
						if (vLocal_93.x > vLocal_95[1 /*3*/])
						{
							if (!unk_0x910FF514D7BC5674(unk_0x33CD235DF1E6A94E(), iLocal_36[1], 90f))
							{
								iLocal_31 = 0;
								iLocal_340[0] = 0;
								iLocal_341[0] = 0;
								iLocal_340[1] = 0;
								iLocal_341[1] = 0;
								iLocal_83[0] = unk_0xE3903F59E2F22150();
								iLocal_83[1] = unk_0xE3903F59E2F22150();
							}
						}
					}
					else if (vLocal_93.x > 942f)
					{
						if (!unk_0x910FF514D7BC5674(unk_0x33CD235DF1E6A94E(), iLocal_36[1], 90f))
						{
							iLocal_31 = 0;
							iLocal_340[0] = 0;
							iLocal_341[0] = 0;
							iLocal_340[1] = 0;
							iLocal_341[1] = 0;
							iLocal_83[0] = unk_0xE3903F59E2F22150();
							iLocal_83[1] = unk_0xE3903F59E2F22150();
						}
					}
				}
				if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, true, 0) || vLocal_93.x < 860f)
				{
					if (!unk_0xBC2FC12AD0FBF72E(iLocal_36[0]))
					{
						if (vLocal_93.x < vLocal_95[0 /*3*/])
						{
							if (!unk_0x910FF514D7BC5674(unk_0x33CD235DF1E6A94E(), iLocal_36[0], 90f))
							{
								iLocal_31 = 0;
								iLocal_340[0] = 0;
								iLocal_341[0] = 0;
								iLocal_340[1] = 0;
								iLocal_341[1] = 0;
								iLocal_83[0] = unk_0xE3903F59E2F22150();
								iLocal_83[1] = unk_0xE3903F59E2F22150();
							}
						}
					}
					else if (vLocal_93.x < 860f)
					{
						if (!unk_0x910FF514D7BC5674(unk_0x33CD235DF1E6A94E(), iLocal_36[0], 90f))
						{
							iLocal_31 = 0;
							iLocal_340[0] = 0;
							iLocal_341[0] = 0;
							iLocal_340[1] = 0;
							iLocal_341[1] = 0;
							iLocal_83[0] = unk_0xE3903F59E2F22150();
							iLocal_83[1] = unk_0xE3903F59E2F22150();
						}
					}
				}
			}
		}
	}
	if (iLocal_31 != 1)
	{
		if (iLocal_31 != 2)
		{
			if (iLocal_303[0] == 1)
			{
				if (func_171(unk_0x33CD235DF1E6A94E(), iLocal_36[0], 1) < 20f)
				{
					if ((func_183(unk_0x33CD235DF1E6A94E()) == joaat("weapon_unarmed") || unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0)) || func_182(0))
					{
						if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), 860.4606f, -1563.58f, 28.81788f, 865.0807f, -1575.088f, 30.93324f, 5.75f, 0, true, 0))
						{
							if (vLocal_93.x > vLocal_95[0 /*3*/] || unk_0x910FF514D7BC5674(unk_0x33CD235DF1E6A94E(), iLocal_36[0], 90f))
							{
								iLocal_31 = 1;
							}
						}
						if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, 0, true, 0))
						{
							iLocal_31 = 1;
						}
					}
				}
			}
			if (iLocal_303[1] == 1)
			{
				if (func_171(unk_0x33CD235DF1E6A94E(), iLocal_36[1], 1) < 15f)
				{
					if ((func_183(unk_0x33CD235DF1E6A94E()) == joaat("weapon_unarmed") || unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0)) || func_182(0))
					{
						if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), 939.8862f, -1575.635f, 28.59783f, 952.9254f, -1575.484f, 33.19459f, 13.75f, 0, true, 0))
						{
							if (vLocal_93.x < vLocal_95[1 /*3*/] || unk_0x910FF514D7BC5674(unk_0x33CD235DF1E6A94E(), iLocal_36[1], 90f))
							{
								iLocal_31 = 1;
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_31 != 2)
	{
		if (unk_0xCA12322D8FBBDBEE(-1, 892.9f, -1552.4f, 30f, 40f))
		{
			iLocal_31 = 2;
			iLocal_297 = 1;
		}
		if (iLocal_359 == 1)
		{
			iLocal_31 = 2;
			iLocal_297 = 1;
		}
		if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) != 0)
		{
			if (unk_0x765F6FEEFF39224F(iLocal_36[0]))
			{
				if (!unk_0xBC2FC12AD0FBF72E(iLocal_36[0]))
				{
					if (unk_0xDAAA48CE50D80F52(iLocal_36[0], unk_0x33CD235DF1E6A94E()))
					{
						iLocal_31 = 2;
						iLocal_297 = 1;
					}
				}
			}
			if (unk_0x765F6FEEFF39224F(iLocal_36[1]))
			{
				if (!unk_0xBC2FC12AD0FBF72E(iLocal_36[1]))
				{
					if (unk_0xDAAA48CE50D80F52(iLocal_36[1], unk_0x33CD235DF1E6A94E()))
					{
						iLocal_31 = 2;
						iLocal_297 = 1;
					}
				}
			}
		}
		if (iLocal_326 == 0)
		{
			if (iLocal_325 == 1)
			{
				if (unk_0xE3903F59E2F22150() > iLocal_79 + 4000)
				{
					iLocal_78 = 0;
					while (iLocal_78 <= 6)
					{
						if (func_176())
						{
							if (unk_0x765F6FEEFF39224F(iLocal_35[iLocal_78]))
							{
								if (!unk_0xBC2FC12AD0FBF72E(iLocal_35[iLocal_78]))
								{
									if (unk_0x7826A583D163D837(iLocal_35[iLocal_78]))
									{
										iLocal_31 = 2;
										iLocal_326 = 1;
									}
								}
							}
						}
						iLocal_78++;
					}
				}
			}
		}
		if ((iLocal_29 == 4 || iLocal_29 == 3) || iLocal_325 == 1)
		{
			iLocal_31 = 2;
			iLocal_322 = 1;
			iLocal_297 = 1;
		}
		if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
		{
			if (iLocal_303[0] == 1)
			{
				if (func_183(unk_0x33CD235DF1E6A94E()) != joaat("weapon_unarmed") && !func_182(0))
				{
					if (unk_0xDAAA48CE50D80F52(iLocal_36[0], unk_0x33CD235DF1E6A94E()))
					{
						iLocal_31 = 2;
					}
				}
			}
			if (iLocal_303[1] == 1)
			{
				if (func_183(unk_0x33CD235DF1E6A94E()) != joaat("weapon_unarmed") && !func_182(0))
				{
					if (unk_0xDAAA48CE50D80F52(iLocal_36[1], unk_0x33CD235DF1E6A94E()))
					{
						iLocal_31 = 2;
					}
				}
			}
		}
		if (unk_0x16E00F066AFFEA0D(vLocal_93, vLocal_96, true) < 36f)
		{
			if (iLocal_303[0] == 1)
			{
				if (unk_0xDAAA48CE50D80F52(iLocal_36[0], unk_0x33CD235DF1E6A94E()))
				{
					iLocal_31 = 2;
				}
				if (func_171(iLocal_36[0], unk_0x33CD235DF1E6A94E(), 1) < 20f)
				{
					if (unk_0xDF201DA86440289A(unk_0x95B959F18401C09A(), iLocal_36[0]))
					{
						iLocal_31 = 2;
					}
				}
			}
			if (iLocal_303[1] == 1)
			{
				if (vLocal_93.z < 36f || unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
				{
					if (unk_0xDAAA48CE50D80F52(iLocal_36[1], unk_0x33CD235DF1E6A94E()))
					{
						iLocal_31 = 2;
					}
					if (func_171(iLocal_36[1], unk_0x33CD235DF1E6A94E(), 1) < 20f)
					{
						if (unk_0xDF201DA86440289A(unk_0x95B959F18401C09A(), iLocal_36[1]))
						{
							iLocal_31 = 2;
						}
					}
				}
			}
		}
		if (iLocal_303[0] == 1)
		{
			if (func_171(unk_0x33CD235DF1E6A94E(), iLocal_36[0], 1) < 20f)
			{
				if (vLocal_93.x > vLocal_95[0 /*3*/] && unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, true, 0))
				{
					if (unk_0xDAAA48CE50D80F52(iLocal_36[0], unk_0x33CD235DF1E6A94E()) || unk_0xDF201DA86440289A(unk_0x95B959F18401C09A(), iLocal_36[0]))
					{
						iLocal_31 = 2;
					}
				}
			}
		}
		if (iLocal_303[1] == 1)
		{
			if (func_171(unk_0x33CD235DF1E6A94E(), iLocal_36[1], 1) < 20f)
			{
				if (vLocal_93.x < vLocal_95[1 /*3*/] && unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, true, 0))
				{
					if (unk_0xDAAA48CE50D80F52(iLocal_36[1], unk_0x33CD235DF1E6A94E()) || unk_0xDF201DA86440289A(unk_0x95B959F18401C09A(), iLocal_36[1]))
					{
						iLocal_31 = 2;
					}
				}
			}
		}
	}
}

void func_185()
{
	iLocal_55 = 0;
	while (iLocal_55 <= 6)
	{
		if (unk_0x765F6FEEFF39224F(iLocal_35[iLocal_55]))
		{
			if (!unk_0xBC2FC12AD0FBF72E(iLocal_35[iLocal_55]))
			{
				if (iLocal_278[iLocal_55] == 0)
				{
					if (func_171(unk_0x33CD235DF1E6A94E(), iLocal_35[iLocal_55], 1) > 20f)
					{
						iLocal_278[iLocal_55] = 1;
					}
				}
				if (iLocal_278[iLocal_55] == 1)
				{
					if (func_171(unk_0x33CD235DF1E6A94E(), iLocal_35[iLocal_55], 1) < 20f)
					{
						iLocal_278[iLocal_55] = 0;
					}
				}
			}
			else if (iLocal_278[iLocal_55] == 0)
			{
				iLocal_278[iLocal_55] = 1;
			}
		}
		else if (iLocal_278[iLocal_55] == 0)
		{
			iLocal_278[iLocal_55] = 1;
		}
		iLocal_55++;
	}
	if (((((iLocal_278[0] == 1 && iLocal_278[1] == 1) && iLocal_278[2] == 1) && iLocal_278[3] == 1) && iLocal_278[4] == 1) && iLocal_278[5] == 1)
	{
		iLocal_279 = 1;
	}
	else
	{
		iLocal_279 = 0;
	}
	iLocal_54 = 0;
	while (iLocal_54 <= 6)
	{
		if (unk_0x765F6FEEFF39224F(iLocal_35[iLocal_54]))
		{
			if (!unk_0xBC2FC12AD0FBF72E(iLocal_35[iLocal_54]))
			{
				func_190(iLocal_35[iLocal_54]);
				if (iLocal_28 == 3 || iLocal_28 == 4)
				{
					if (iLocal_31 == 2 && iLocal_29 == 0)
					{
						func_189(1);
						if (iLocal_311 == 1)
						{
							func_113();
						}
					}
					if (unk_0x5A55F54738BBF615(iLocal_35[iLocal_54], 18))
					{
						if (iLocal_29 != 4)
						{
							func_189(4);
							if (iLocal_311 == 1)
							{
								func_187();
							}
							iLocal_359 = 1;
						}
					}
					if (iLocal_29 != 4)
					{
						if (unk_0xCA12322D8FBBDBEE(-1, 892.9f, -1552.4f, 30f, 40f))
						{
							func_189(4);
							if (iLocal_311 == 1)
							{
								func_187();
							}
						}
					}
					if ((((((((func_186(iLocal_35[iLocal_54], iLocal_35[0]) || func_186(iLocal_35[iLocal_54], iLocal_35[1])) || func_186(iLocal_35[iLocal_54], iLocal_35[2])) || func_186(iLocal_35[iLocal_54], iLocal_35[3])) || func_186(iLocal_35[iLocal_54], iLocal_35[4])) || func_186(iLocal_35[iLocal_54], iLocal_35[5])) || func_186(iLocal_35[iLocal_54], iLocal_35[6])) || func_186(iLocal_35[iLocal_54], iLocal_36[0])) || func_186(iLocal_35[iLocal_54], iLocal_36[1]))
					{
						if (iLocal_29 != 4)
						{
							func_189(4);
							if (iLocal_311 == 1)
							{
								func_187();
							}
							iLocal_359 = 1;
						}
					}
					if ((func_183(unk_0x33CD235DF1E6A94E()) == joaat("weapon_unarmed") || unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1)) || func_182(0))
					{
						if (iLocal_297 == 0)
						{
							if (func_171(unk_0x33CD235DF1E6A94E(), iLocal_35[iLocal_54], 1) > 20f)
							{
								if (iLocal_277[iLocal_54] == 1)
								{
									iLocal_277[iLocal_54] = 0;
								}
								if (((((iLocal_279 == 1 && iLocal_29 != 0) && iLocal_29 != 2) && iLocal_29 != 3) && iLocal_29 != 4) && iLocal_31 != 2)
								{
									func_189(0);
								}
							}
							if (func_171(unk_0x33CD235DF1E6A94E(), iLocal_35[iLocal_54], 1) < 20f && unk_0xDAAA48CE50D80F52(iLocal_35[iLocal_54], unk_0x33CD235DF1E6A94E()))
							{
								if (((iLocal_29 != 1 && iLocal_29 != 2) && iLocal_29 != 3) && iLocal_29 != 4)
								{
									if (iLocal_326 == 0 && iLocal_297 == 0)
									{
										func_189(1);
										if (iLocal_311 == 1)
										{
											func_113();
										}
									}
									else
									{
										func_189(3);
										if (iLocal_311 == 1)
										{
											func_187();
										}
									}
								}
							}
							if (func_171(unk_0x33CD235DF1E6A94E(), iLocal_35[iLocal_54], 1) < 20f && unk_0xDAAA48CE50D80F52(iLocal_35[iLocal_54], unk_0x33CD235DF1E6A94E()))
							{
								if (iLocal_277[iLocal_54] == 0)
								{
									iLocal_60[iLocal_54] = unk_0xE3903F59E2F22150();
									iLocal_277[iLocal_54] = 1;
								}
								if (iLocal_277[iLocal_54] == 1)
								{
									if (unk_0xE3903F59E2F22150() > iLocal_60[iLocal_54] + 24000)
									{
										if ((iLocal_29 != 2 && iLocal_29 != 3) && iLocal_29 != 4)
										{
											func_189(2);
											if (iLocal_311 == 1)
											{
												func_187();
											}
										}
									}
								}
							}
						}
						if (iLocal_297 == 1)
						{
							if (func_171(unk_0x33CD235DF1E6A94E(), iLocal_35[iLocal_54], 1) < 20f && unk_0xDAAA48CE50D80F52(iLocal_35[iLocal_54], unk_0x33CD235DF1E6A94E()))
							{
								if (iLocal_29 != 3 && iLocal_29 != 4)
								{
									func_189(3);
									if (iLocal_311 == 1)
									{
										func_187();
									}
								}
							}
						}
						if (unk_0xA08B8AEC5B1A55D6(unk_0x33CD235DF1E6A94E()))
						{
							if (iLocal_308 == 0)
							{
								iLocal_74 = unk_0xE3903F59E2F22150();
								iLocal_308 = 1;
							}
							else if (unk_0xE3903F59E2F22150() > iLocal_74 + 3000)
							{
								if (func_171(unk_0x33CD235DF1E6A94E(), iLocal_35[iLocal_54], 1) < 20f && unk_0xDAAA48CE50D80F52(iLocal_35[iLocal_54], unk_0x33CD235DF1E6A94E()))
								{
									if (iLocal_29 != 3 && iLocal_29 != 4)
									{
										func_189(3);
										if (iLocal_311 == 1)
										{
											func_187();
										}
									}
								}
							}
						}
						else if (iLocal_308 == 1)
						{
							iLocal_308 = 0;
						}
						if (unk_0x765F6FEEFF39224F(iLocal_33))
						{
							if (unk_0x91D5C8283D19AF49(iLocal_33, 0))
							{
								if (unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iLocal_33, 1))
								{
									if (unk_0xDAAA48CE50D80F52(iLocal_35[iLocal_54], unk_0x33CD235DF1E6A94E()))
									{
										if (iLocal_29 != 3 && iLocal_29 != 4)
										{
											iLocal_289 = 1;
											func_189(3);
											if (iLocal_311 == 1)
											{
												func_187();
											}
										}
									}
								}
								if (func_171(unk_0x33CD235DF1E6A94E(), iLocal_33, 1) < 5f && unk_0x707FFB0E65C1C546(unk_0x33CD235DF1E6A94E()))
								{
									if (unk_0xDAAA48CE50D80F52(iLocal_35[iLocal_54], unk_0x33CD235DF1E6A94E()))
									{
										if (iLocal_29 != 3 && iLocal_29 != 4)
										{
											iLocal_289 = 1;
											func_189(3);
											if (iLocal_311 == 1)
											{
												func_187();
											}
										}
									}
									if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), 917.3436f, -1554.42f, 29.26611f, 916.8774f, -1556.441f, 33.00661f, 2.25f, 0, true, 0))
									{
										if (unk_0x765F6FEEFF39224F(iLocal_35[0]))
										{
											if (!unk_0xBC2FC12AD0FBF72E(iLocal_35[0]))
											{
												if (unk_0x18FB647D79B09657(iLocal_35[0], 912.3f, -1542.6f, 30f, 3f, 3f, 3f, false, true, 0))
												{
													if (iLocal_29 != 3 && iLocal_29 != 4)
													{
														iLocal_289 = 1;
														func_189(3);
														if (iLocal_311 == 1)
														{
															func_187();
														}
													}
												}
											}
										}
									}
								}
							}
						}
						if (unk_0x765F6FEEFF39224F(iLocal_35[6]))
						{
							if (!unk_0xBC2FC12AD0FBF72E(iLocal_35[6]))
							{
								if (func_171(unk_0x33CD235DF1E6A94E(), iLocal_35[6], 1) < 20f)
								{
									if ((unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), 928.7163f, -1546.671f, 27.34603f, 921.8971f, -1549.752f, 34.04724f, 6.25f, 0, true, 0) || unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), 931.868f, -1545.185f, 27.3653f, 925.8857f, -1547.303f, 34.07205f, 3.5f, 0, true, 0)) || unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), 929.4908f, -1524.829f, 32.84098f, 929.3696f, -1545.288f, 37.34258f, 5f, 0, true, 0))
									{
										if (unk_0xDAAA48CE50D80F52(iLocal_35[6], unk_0x33CD235DF1E6A94E()))
										{
											if (vLocal_93.z > 31f)
											{
												if (iLocal_29 != 3 && iLocal_29 != 4)
												{
													iLocal_323 = 1;
													func_189(3);
													if (iLocal_311 == 1)
													{
														func_187();
													}
												}
											}
											else if (((iLocal_29 != 1 && iLocal_29 != 2) && iLocal_29 != 3) && iLocal_29 != 4)
											{
												func_189(1);
												if (iLocal_311 == 1)
												{
													func_113();
												}
											}
										}
									}
								}
							}
						}
					}
					else
					{
						if (iLocal_276 == 0)
						{
							iLocal_59 = unk_0xE3903F59E2F22150();
							iLocal_276 = 1;
						}
						if (iLocal_276 == 1)
						{
							if (unk_0xE3903F59E2F22150() > iLocal_59 + 4000 || iLocal_29 == 3)
							{
								if (func_171(unk_0x33CD235DF1E6A94E(), iLocal_35[iLocal_54], 1) < 20f)
								{
									if (unk_0xDAAA48CE50D80F52(iLocal_35[iLocal_54], unk_0x33CD235DF1E6A94E()))
									{
										if (iLocal_29 != 4)
										{
											func_189(4);
											if (iLocal_311 == 1)
											{
												func_187();
											}
										}
									}
								}
							}
						}
						if (func_171(unk_0x33CD235DF1E6A94E(), iLocal_35[iLocal_54], 1) < 40f)
						{
							if (unk_0x5DACF31D3AC5ED8D(unk_0x33CD235DF1E6A94E()))
							{
								if (unk_0xDAAA48CE50D80F52(iLocal_35[iLocal_54], unk_0x33CD235DF1E6A94E()) || unk_0xDF201DA86440289A(unk_0x95B959F18401C09A(), iLocal_35[iLocal_54]))
								{
									if (iLocal_29 != 4)
									{
										func_189(4);
										if (iLocal_311 == 1)
										{
											func_187();
										}
									}
								}
							}
						}
					}
				}
			}
		}
		iLocal_54++;
	}
}

int func_186(int iParam0, int iParam1)
{
	if (((func_171(iParam0, iParam1, 1) < 20f && unk_0x910FF514D7BC5674(iParam0, iParam1, 90f)) && !unk_0xBC2FC12AD0FBF72E(iParam0)) && unk_0xBC2FC12AD0FBF72E(iParam1))
	{
		return 1;
	}
	return 0;
}

void func_187()
{
	Global_14732 = 0;
	func_188();
}

void func_188()
{
	unk_0x3F4DBD0F910C454B();
	Global_16877 = 0;
	if (unk_0x12BF789190D82474())
	{
		unk_0xD92171BC6C48DB90(false);
		Global_15866 = 6;
	}
}

void func_189(int iParam0)
{
	iLocal_29 = iParam0;
	iLocal_58 = 0;
}

void func_190(int iParam0)
{
	iLocal_56 = 0;
	while (iLocal_56 <= 6)
	{
		if (iParam0 == iLocal_35[iLocal_56])
		{
			if (func_171(unk_0x33CD235DF1E6A94E(), iParam0, 1) < 20f && unk_0xDAAA48CE50D80F52(iParam0, unk_0x33CD235DF1E6A94E()))
			{
				if (iLocal_280[iLocal_56] == 0)
				{
					unk_0xC4A347124F39D998(iParam0, unk_0x33CD235DF1E6A94E(), -1, 1072, 3);
					iLocal_280[iLocal_56] = 1;
				}
			}
			else if (iLocal_280[iLocal_56] == 1)
			{
				unk_0xC4A347124F39D998(iParam0, unk_0x33CD235DF1E6A94E(), 1, 1072, 3);
				iLocal_280[iLocal_56] = 0;
			}
		}
		iLocal_56++;
	}
	switch (iLocal_29)
	{
		case 0:
			if (iLocal_58 == 0)
			{
				unk_0x4A852F02088ECC9D(iParam0, true);
				if (iParam0 == iLocal_35[0])
				{
					if (unk_0x89F20C4A841A3473(912.2f, -1542.5f, 29.8f, 3f, 0))
					{
						if (unk_0xD76D6BCC14B95CE1(iLocal_35[0], 1647992574) != 1 && unk_0xD76D6BCC14B95CE1(iLocal_35[0], -1680762137) != 1)
						{
							unk_0x46061A66C745755A(iLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[1])
				{
					if (unk_0x89F20C4A841A3473(917.4f, -1517.4f, 30f, 3f, 0))
					{
						if (unk_0xD76D6BCC14B95CE1(iLocal_35[1], 1647992574) != 1 && unk_0xD76D6BCC14B95CE1(iLocal_35[1], -1680762137) != 1)
						{
							unk_0x46061A66C745755A(iLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[2])
				{
					if (unk_0x89F20C4A841A3473(869.8f, -1541.2f, 29.4f, 3f, 0))
					{
						if (unk_0xD76D6BCC14B95CE1(iLocal_35[2], 1647992574) != 1 && unk_0xD76D6BCC14B95CE1(iLocal_35[2], -1680762137) != 1)
						{
							unk_0x46061A66C745755A(iLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[3])
				{
					if (unk_0x89F20C4A841A3473(884.2f, -1574.1f, 30f, 3f, 0))
					{
						if (unk_0xD76D6BCC14B95CE1(iLocal_35[3], 1647992574) != 1 && unk_0xD76D6BCC14B95CE1(iLocal_35[3], -1680762137) != 1)
						{
							unk_0x46061A66C745755A(iLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[4])
				{
					if (unk_0x89F20C4A841A3473(904f, -1575f, 30f, 3f, 0))
					{
						if (unk_0xD76D6BCC14B95CE1(iLocal_35[4], 1647992574) != 1 && unk_0xD76D6BCC14B95CE1(iLocal_35[4], -1680762137) != 1)
						{
							unk_0x46061A66C745755A(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[5])
				{
					if (unk_0x89F20C4A841A3473(905.9f, -1574.8f, 29.9f, 3f, 0))
					{
						if (unk_0xD76D6BCC14B95CE1(iLocal_35[5], 1647992574) != 1 && unk_0xD76D6BCC14B95CE1(iLocal_35[5], -1680762137) != 1)
						{
							unk_0x46061A66C745755A(iLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[6])
				{
					if (unk_0x89F20C4A841A3473(889.5f, -1562f, 29.7f, 3f, 0))
					{
						if (unk_0xD76D6BCC14B95CE1(iLocal_35[6], 1647992574) != 1 && unk_0xD76D6BCC14B95CE1(iLocal_35[6], -1680762137) != 1)
						{
							unk_0x46061A66C745755A(iLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
						}
					}
				}
				iLocal_58++;
			}
			if (iLocal_58 == 1)
			{
				if (unk_0x765F6FEEFF39224F(iLocal_35[4]))
				{
					if (!unk_0xBC2FC12AD0FBF72E(iLocal_35[4]))
					{
						if (unk_0x765F6FEEFF39224F(iLocal_35[5]))
						{
							if (!unk_0xBC2FC12AD0FBF72E(iLocal_35[5]))
							{
								if (func_171(unk_0x33CD235DF1E6A94E(), iLocal_35[4], 1) < 25f)
								{
									if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), 926.455f, -1582.384f, 29.32759f, 909.6322f, -1581.374f, 31.58907f, 9.5f, 0, true, 0) || vLocal_93.y > -1573f)
									{
										if (iLocal_311 == 0)
										{
											func_132(&uLocal_99, 3, iLocal_35[4], "CONSTRUCTION2", 0, 1);
											func_132(&uLocal_99, 5, iLocal_35[5], "CONSTRUCTION3", 0, 1);
											unk_0xC4A347124F39D998(iLocal_35[4], iLocal_35[5], -1, 0, 2);
											unk_0xC4A347124F39D998(iLocal_35[5], iLocal_35[4], -1, 0, 2);
											if (!func_176())
											{
												if (!unk_0xC4B7D5901EDA35B5() || !unk_0x75E8D03BBC787BAD())
												{
													if (func_170(&uLocal_99, "SOL1AUD", "SOL1_TALK", 6, 1, 1, 0))
													{
														iLocal_311 = 1;
													}
												}
											}
										}
									}
								}
								if (unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), 921.9f, -1556.5f, 30f, 5f, 5f, 5f, false, true, 1))
								{
									if (iLocal_318 == 0)
									{
										iLocal_76 = unk_0xE3903F59E2F22150();
										iLocal_318 = 1;
									}
									if (iLocal_318 == 1)
									{
										if (unk_0xE3903F59E2F22150() > iLocal_76 + 4000)
										{
											if (iLocal_311 == 0)
											{
												func_132(&uLocal_99, 3, iLocal_35[4], "CONSTRUCTION2", 0, 1);
												func_132(&uLocal_99, 5, iLocal_35[5], "CONSTRUCTION3", 0, 1);
												unk_0xC4A347124F39D998(iLocal_35[4], iLocal_35[5], -1, 0, 2);
												unk_0xC4A347124F39D998(iLocal_35[5], iLocal_35[4], -1, 0, 2);
												if (!func_176())
												{
													if (!unk_0xC4B7D5901EDA35B5() || !unk_0x75E8D03BBC787BAD())
													{
														if (func_170(&uLocal_99, "SOL1AUD", "SOL1_TALK", 6, 1, 1, 0))
														{
															iLocal_311 = 1;
														}
													}
												}
											}
										}
									}
								}
								if (iLocal_311 == 1 && !func_176())
								{
									if (iLocal_310 == 0)
									{
										if (unk_0x89F20C4A841A3473(865f, -1558.1f, 29.5f, 3f, 0))
										{
											unk_0xE0DAC4ABE9900D9A(iLocal_35[4]);
											unk_0xE0DAC4ABE9900D9A(iLocal_35[5]);
											unk_0xA9128AA30F3036C7(iLocal_35[4], 865f, -1558.1f, 29.5f, 3f, 0);
											iLocal_310 = 1;
										}
									}
								}
							}
						}
					}
				}
				if (iParam0 == iLocal_35[6])
				{
					if (iLocal_319 == 0)
					{
						if (iLocal_320 == 0)
						{
							iLocal_77 = unk_0xE3903F59E2F22150();
							iLocal_320 = 1;
						}
						if (unk_0xE3903F59E2F22150() > iLocal_77 + 30000)
						{
							if (iLocal_319 == 0)
							{
								if (unk_0x89F20C4A841A3473(925f, -1561f, 30f, 3f, 0))
								{
									unk_0xA9128AA30F3036C7(iLocal_35[6], 925f, -1561f, 30f, 3f, 0);
									iLocal_319 = 1;
									iLocal_320 = 0;
								}
							}
						}
					}
					if (iLocal_319 == 1)
					{
						if (unk_0x18FB647D79B09657(iLocal_35[6], 925f, -1561f, 30f, 3f, 3f, 3f, false, true, 0))
						{
							if (func_171(unk_0x33CD235DF1E6A94E(), iLocal_35[6], 1) < 15f && vLocal_93.z < 40f)
							{
								if (iLocal_321 == 0)
								{
									if (unk_0x89F20C4A841A3473(909.5f, -1515.5f, 30f, 3f, 0))
									{
										unk_0x46061A66C745755A(iLocal_35[6], 909.5f, -1515.5f, 30f, 50f, 0);
										iLocal_321 = 1;
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (iLocal_58 == 0)
			{
				iLocal_56 = 0;
				while (iLocal_56 <= 6)
				{
					if (iLocal_31 == 0)
					{
						if (iParam0 == iLocal_35[iLocal_56])
						{
							if (func_171(unk_0x33CD235DF1E6A94E(), iParam0, 1) < 20f)
							{
								if (iLocal_281[iLocal_56] == 0)
								{
									if (unk_0xDAAA48CE50D80F52(iParam0, unk_0x33CD235DF1E6A94E()) || unk_0xDF201DA86440289A(unk_0x95B959F18401C09A(), iParam0))
									{
										if (!unk_0x3F219400E5FE4B69(iParam0))
										{
											unk_0x31826EF4A8BC8E9F(iParam0);
										}
										if (unk_0x3F219400E5FE4B69(iParam0))
										{
											unk_0xED68CDDDE25A144E(iParam0);
										}
										unk_0x99414FB2D30425C1(&uLocal_48);
										unk_0x3C0F6044C54799A8(0, unk_0x33CD235DF1E6A94E(), -1, 2f, 1f, 1073741824, 0);
										unk_0x11C4AF4137F2A4B5(0, unk_0x33CD235DF1E6A94E(), 0);
										unk_0xC734F59A13D39AEF(uLocal_48);
										unk_0x13A2D602CD10CBAC(iParam0, uLocal_48);
										unk_0xA7A57E7757ED035E(&uLocal_48);
										unk_0x4A852F02088ECC9D(iParam0, true);
										iLocal_280[iLocal_56] = 0;
										iLocal_281[iLocal_56] = 1;
									}
								}
								if (iLocal_281[iLocal_56] == 1)
								{
									if (!unk_0x910FF514D7BC5674(iParam0, unk_0x33CD235DF1E6A94E(), 45f))
									{
										unk_0x11C4AF4137F2A4B5(iParam0, unk_0x33CD235DF1E6A94E(), 0);
										iLocal_281[iLocal_56] = 0;
									}
								}
							}
							else
							{
								if (iLocal_281[iLocal_56] == 1)
								{
									iLocal_281[iLocal_56] = 0;
								}
								if (iParam0 == iLocal_35[0])
								{
									if (unk_0x89F20C4A841A3473(912.2f, -1542.5f, 29.8f, 3f, 0))
									{
										if (unk_0xD76D6BCC14B95CE1(iLocal_35[0], 1647992574) != 1 && unk_0xD76D6BCC14B95CE1(iLocal_35[0], -1680762137) != 1)
										{
											unk_0x46061A66C745755A(iLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
											unk_0x4A852F02088ECC9D(iLocal_35[0], true);
										}
									}
								}
								if (iParam0 == iLocal_35[1])
								{
									if (unk_0x89F20C4A841A3473(917.4f, -1517.4f, 30f, 3f, 0))
									{
										if (unk_0xD76D6BCC14B95CE1(iLocal_35[1], 1647992574) != 1 && unk_0xD76D6BCC14B95CE1(iLocal_35[1], -1680762137) != 1)
										{
											unk_0x46061A66C745755A(iLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
											unk_0x4A852F02088ECC9D(iLocal_35[1], true);
										}
									}
								}
								if (iParam0 == iLocal_35[2])
								{
									if (unk_0x89F20C4A841A3473(869.8f, -1541.2f, 29.4f, 3f, 0))
									{
										if (unk_0xD76D6BCC14B95CE1(iLocal_35[2], 1647992574) != 1 && unk_0xD76D6BCC14B95CE1(iLocal_35[2], -1680762137) != 1)
										{
											unk_0x46061A66C745755A(iLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
											unk_0x4A852F02088ECC9D(iLocal_35[2], true);
										}
									}
								}
								if (iParam0 == iLocal_35[3])
								{
									if (unk_0x89F20C4A841A3473(884.2f, -1574.1f, 30f, 3f, 0))
									{
										if (unk_0xD76D6BCC14B95CE1(iLocal_35[3], 1647992574) != 1 && unk_0xD76D6BCC14B95CE1(iLocal_35[3], -1680762137) != 1)
										{
											unk_0x46061A66C745755A(iLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
											unk_0x4A852F02088ECC9D(iLocal_35[3], true);
										}
									}
								}
								if (iParam0 == iLocal_35[4])
								{
									if (unk_0x89F20C4A841A3473(904f, -1575f, 30f, 3f, 0))
									{
										if (unk_0xD76D6BCC14B95CE1(iLocal_35[4], 1647992574) != 1 && unk_0xD76D6BCC14B95CE1(iLocal_35[4], -1680762137) != 1)
										{
											unk_0x46061A66C745755A(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
											unk_0x4A852F02088ECC9D(iLocal_35[4], true);
										}
									}
								}
								if (iParam0 == iLocal_35[5])
								{
									if (unk_0x89F20C4A841A3473(905.9f, -1574.8f, 29.9f, 3f, 0))
									{
										if (unk_0xD76D6BCC14B95CE1(iLocal_35[5], 1647992574) != 1 && unk_0xD76D6BCC14B95CE1(iLocal_35[5], -1680762137) != 1)
										{
											unk_0x46061A66C745755A(iLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
											unk_0x4A852F02088ECC9D(iLocal_35[5], true);
										}
									}
								}
								if (iParam0 == iLocal_35[6])
								{
									if (unk_0x89F20C4A841A3473(889.5f, -1562f, 29.7f, 3f, 0))
									{
										if (unk_0xD76D6BCC14B95CE1(iLocal_35[6], 1647992574) != 1 && unk_0xD76D6BCC14B95CE1(iLocal_35[6], -1680762137) != 1)
										{
											unk_0x46061A66C745755A(iLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
											unk_0x4A852F02088ECC9D(iLocal_35[6], true);
										}
									}
								}
							}
						}
					}
					else if (iParam0 == iLocal_35[iLocal_56])
					{
						if (func_171(unk_0x33CD235DF1E6A94E(), iParam0, 1) < 20f)
						{
							if (iLocal_281[iLocal_56] == 0)
							{
								if (unk_0xDAAA48CE50D80F52(iParam0, unk_0x33CD235DF1E6A94E()) || unk_0xDF201DA86440289A(unk_0x95B959F18401C09A(), iParam0))
								{
									if (!unk_0x3F219400E5FE4B69(iParam0))
									{
										unk_0x31826EF4A8BC8E9F(iParam0);
									}
									if (unk_0x3F219400E5FE4B69(iParam0))
									{
										unk_0xED68CDDDE25A144E(iParam0);
									}
									unk_0x99414FB2D30425C1(&uLocal_48);
									unk_0x11C4AF4137F2A4B5(0, unk_0x33CD235DF1E6A94E(), 0);
									unk_0xC4A347124F39D998(0, unk_0x33CD235DF1E6A94E(), -1, 1072, 3);
									unk_0xC734F59A13D39AEF(uLocal_48);
									unk_0x13A2D602CD10CBAC(iParam0, uLocal_48);
									unk_0xA7A57E7757ED035E(&uLocal_48);
									unk_0x4A852F02088ECC9D(iParam0, true);
									iLocal_280[iLocal_56] = 0;
									iLocal_281[iLocal_56] = 1;
								}
							}
							if (iLocal_281[iLocal_56] == 1)
							{
								if (!unk_0x910FF514D7BC5674(iParam0, unk_0x33CD235DF1E6A94E(), 45f))
								{
									unk_0x11C4AF4137F2A4B5(iParam0, unk_0x33CD235DF1E6A94E(), 0);
									iLocal_281[iLocal_56] = 0;
								}
							}
						}
						else
						{
							if (iLocal_281[iLocal_56] == 1)
							{
								iLocal_281[iLocal_56] = 0;
							}
							if (iParam0 == iLocal_35[0])
							{
								if (unk_0x89F20C4A841A3473(912.2f, -1542.5f, 29.8f, 3f, 0))
								{
									if (unk_0xD76D6BCC14B95CE1(iLocal_35[0], 1647992574) != 1 && unk_0xD76D6BCC14B95CE1(iLocal_35[0], -1680762137) != 1)
									{
										unk_0x46061A66C745755A(iLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
										unk_0x4A852F02088ECC9D(iLocal_35[0], true);
									}
								}
							}
							if (iParam0 == iLocal_35[1])
							{
								if (unk_0x89F20C4A841A3473(917.4f, -1517.4f, 30f, 3f, 0))
								{
									if (unk_0xD76D6BCC14B95CE1(iLocal_35[1], 1647992574) != 1 && unk_0xD76D6BCC14B95CE1(iLocal_35[1], -1680762137) != 1)
									{
										unk_0x46061A66C745755A(iLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
										unk_0x4A852F02088ECC9D(iLocal_35[1], true);
									}
								}
							}
							if (iParam0 == iLocal_35[2])
							{
								if (unk_0x89F20C4A841A3473(869.8f, -1541.2f, 29.4f, 3f, 0))
								{
									if (unk_0xD76D6BCC14B95CE1(iLocal_35[2], 1647992574) != 1 && unk_0xD76D6BCC14B95CE1(iLocal_35[2], -1680762137) != 1)
									{
										unk_0x46061A66C745755A(iLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
										unk_0x4A852F02088ECC9D(iLocal_35[2], true);
									}
								}
							}
							if (iParam0 == iLocal_35[3])
							{
								if (unk_0x89F20C4A841A3473(884.2f, -1574.1f, 30f, 3f, 0))
								{
									if (unk_0xD76D6BCC14B95CE1(iLocal_35[3], 1647992574) != 1 && unk_0xD76D6BCC14B95CE1(iLocal_35[3], -1680762137) != 1)
									{
										unk_0x46061A66C745755A(iLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
										unk_0x4A852F02088ECC9D(iLocal_35[3], true);
									}
								}
							}
							if (iParam0 == iLocal_35[4])
							{
								if (unk_0x89F20C4A841A3473(904f, -1575f, 30f, 3f, 0))
								{
									if (unk_0xD76D6BCC14B95CE1(iLocal_35[4], 1647992574) != 1 && unk_0xD76D6BCC14B95CE1(iLocal_35[4], -1680762137) != 1)
									{
										unk_0x46061A66C745755A(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
										unk_0x4A852F02088ECC9D(iLocal_35[4], true);
									}
								}
							}
							if (iParam0 == iLocal_35[5])
							{
								if (unk_0x89F20C4A841A3473(905.9f, -1574.8f, 29.9f, 3f, 0))
								{
									if (unk_0xD76D6BCC14B95CE1(iLocal_35[5], 1647992574) != 1 && unk_0xD76D6BCC14B95CE1(iLocal_35[5], -1680762137) != 1)
									{
										unk_0x46061A66C745755A(iLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
										unk_0x4A852F02088ECC9D(iLocal_35[5], true);
									}
								}
							}
							if (iParam0 == iLocal_35[6])
							{
								if (unk_0x89F20C4A841A3473(889.5f, -1562f, 29.7f, 3f, 0))
								{
									if (unk_0xD76D6BCC14B95CE1(iLocal_35[6], 1647992574) != 1 && unk_0xD76D6BCC14B95CE1(iLocal_35[6], -1680762137) != 1)
									{
										unk_0x46061A66C745755A(iLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
										unk_0x4A852F02088ECC9D(iLocal_35[6], true);
									}
								}
							}
						}
					}
					iLocal_56++;
				}
			}
			break;
		
		case 2:
			if (iLocal_360 == 0)
			{
				iLocal_360 = 1;
			}
			if (iLocal_58 == 0)
			{
				unk_0xD2E80177F27FD43F(5, iLocal_264, 1862763509);
				iLocal_58++;
			}
			if (iLocal_58 == 1)
			{
				iLocal_56 = 0;
				while (iLocal_56 <= 6)
				{
					if (iParam0 == iLocal_35[iLocal_56])
					{
						if (func_171(iParam0, unk_0x33CD235DF1E6A94E(), 1) < 15f)
						{
							if (func_171(iParam0, unk_0x33CD235DF1E6A94E(), 1) > 3f)
							{
								if (unk_0xD76D6BCC14B95CE1(iParam0, 242628503) != 0 || unk_0xD76D6BCC14B95CE1(iParam0, 242628503) != 1)
								{
									if (!unk_0x3F219400E5FE4B69(iParam0))
									{
										unk_0x31826EF4A8BC8E9F(iParam0);
									}
									if (unk_0x3F219400E5FE4B69(iParam0))
									{
										unk_0xED68CDDDE25A144E(iParam0);
									}
									unk_0x99414FB2D30425C1(&uLocal_48);
									unk_0x3C0F6044C54799A8(0, unk_0x33CD235DF1E6A94E(), -1, 1f, 1f, 1073741824, 0);
									unk_0x11C4AF4137F2A4B5(0, unk_0x33CD235DF1E6A94E(), 0);
									unk_0xC734F59A13D39AEF(uLocal_48);
									unk_0x13A2D602CD10CBAC(iParam0, uLocal_48);
									unk_0xA7A57E7757ED035E(&uLocal_48);
									iLocal_280[iLocal_56] = 0;
								}
							}
						}
						else
						{
							if (iParam0 == iLocal_35[0])
							{
								if (unk_0x89F20C4A841A3473(912.2f, -1542.5f, 29.8f, 3f, 0))
								{
									if (unk_0xD76D6BCC14B95CE1(iLocal_35[0], 1647992574) != 1 && unk_0xD76D6BCC14B95CE1(iLocal_35[0], -1680762137) != 1)
									{
										unk_0x46061A66C745755A(iLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
										unk_0x4A852F02088ECC9D(iLocal_35[0], true);
									}
								}
							}
							if (iParam0 == iLocal_35[1])
							{
								if (unk_0x89F20C4A841A3473(917.4f, -1517.4f, 30f, 3f, 0))
								{
									if (unk_0xD76D6BCC14B95CE1(iLocal_35[1], 1647992574) != 1 && unk_0xD76D6BCC14B95CE1(iLocal_35[1], -1680762137) != 1)
									{
										unk_0x46061A66C745755A(iLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
										unk_0x4A852F02088ECC9D(iLocal_35[1], true);
									}
								}
							}
							if (iParam0 == iLocal_35[2])
							{
								if (unk_0x89F20C4A841A3473(869.8f, -1541.2f, 29.4f, 3f, 0))
								{
									if (unk_0xD76D6BCC14B95CE1(iLocal_35[2], 1647992574) != 1 && unk_0xD76D6BCC14B95CE1(iLocal_35[2], -1680762137) != 1)
									{
										unk_0x46061A66C745755A(iLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
										unk_0x4A852F02088ECC9D(iLocal_35[2], true);
									}
								}
							}
							if (iParam0 == iLocal_35[3])
							{
								if (unk_0x89F20C4A841A3473(884.2f, -1574.1f, 30f, 3f, 0))
								{
									if (unk_0xD76D6BCC14B95CE1(iLocal_35[3], 1647992574) != 1 && unk_0xD76D6BCC14B95CE1(iLocal_35[3], -1680762137) != 1)
									{
										unk_0x46061A66C745755A(iLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
										unk_0x4A852F02088ECC9D(iLocal_35[3], true);
									}
								}
							}
							if (iParam0 == iLocal_35[4])
							{
								if (unk_0x89F20C4A841A3473(904f, -1575f, 30f, 3f, 0))
								{
									if (unk_0xD76D6BCC14B95CE1(iLocal_35[4], 1647992574) != 1 && unk_0xD76D6BCC14B95CE1(iLocal_35[4], -1680762137) != 1)
									{
										unk_0x46061A66C745755A(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
										unk_0x4A852F02088ECC9D(iLocal_35[4], true);
									}
								}
							}
							if (iParam0 == iLocal_35[5])
							{
								if (unk_0x89F20C4A841A3473(905.9f, -1574.8f, 29.9f, 3f, 0))
								{
									if (unk_0xD76D6BCC14B95CE1(iLocal_35[5], 1647992574) != 1 && unk_0xD76D6BCC14B95CE1(iLocal_35[5], -1680762137) != 1)
									{
										unk_0x46061A66C745755A(iLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
										unk_0x4A852F02088ECC9D(iLocal_35[5], true);
									}
								}
							}
							if (iParam0 == iLocal_35[6])
							{
								if (unk_0x89F20C4A841A3473(889.5f, -1562f, 29.7f, 3f, 0))
								{
									if (unk_0xD76D6BCC14B95CE1(iLocal_35[6], 1647992574) != 1 && unk_0xD76D6BCC14B95CE1(iLocal_35[6], -1680762137) != 1)
									{
										unk_0x46061A66C745755A(iLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
										unk_0x4A852F02088ECC9D(iLocal_35[6], true);
									}
								}
							}
						}
					}
					iLocal_56++;
				}
			}
			break;
		
		case 3:
			if (iLocal_360 == 0)
			{
				iLocal_360 = 1;
			}
			if (iLocal_292 == 0)
			{
				if (iLocal_293 == 0)
				{
					iLocal_63 = unk_0xE3903F59E2F22150();
					iLocal_293 = 1;
				}
				if (iLocal_293 == 1)
				{
					if (unk_0xE3903F59E2F22150() > iLocal_63 + 9000)
					{
						unk_0xD875615F72CD34A6(5);
						unk_0x4B06B5746CBEC99F(1f);
						unk_0x98F04A4FFB4AD01C(unk_0x95B959F18401C09A(), 2, 0);
						unk_0x66D901F8097E8E86(unk_0x95B959F18401C09A(), 0);
						iLocal_292 = 1;
					}
				}
			}
			if (iLocal_58 == 0)
			{
				unk_0xD2E80177F27FD43F(5, iLocal_264, 1862763509);
				iLocal_58++;
			}
			if (iLocal_58 == 1)
			{
				if (iLocal_28 == 3)
				{
					iLocal_56 = 0;
					while (iLocal_56 <= 6)
					{
						if (iParam0 == iLocal_35[iLocal_56])
						{
							if (func_171(iParam0, unk_0x33CD235DF1E6A94E(), 1) < 100f)
							{
								if (iLocal_282[iLocal_56] == 0)
								{
									unk_0x4A852F02088ECC9D(iParam0, true);
									iLocal_282[iLocal_56] = 1;
								}
								if (iLocal_283[iLocal_56] == 0)
								{
									if (!unk_0x3F219400E5FE4B69(iParam0))
									{
										unk_0x31826EF4A8BC8E9F(iParam0);
									}
									if (unk_0x3F219400E5FE4B69(iParam0))
									{
										unk_0xED68CDDDE25A144E(iParam0);
									}
									unk_0x77631BBB824DF500(iParam0, 100f, 0);
									iLocal_280[iLocal_56] = 0;
									iLocal_283[iLocal_56] = 1;
								}
							}
						}
						iLocal_56++;
					}
					if (iLocal_345 == 0)
					{
						if (unk_0x765F6FEEFF39224F(iLocal_35[0]))
						{
							if (!unk_0xBC2FC12AD0FBF72E(iLocal_35[0]))
							{
								if (unk_0x765F6FEEFF39224F(iLocal_33))
								{
									if (unk_0x91D5C8283D19AF49(iLocal_33, 0))
									{
										if (unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iLocal_33, 1) && unk_0x18FB647D79B09657(iLocal_33, 919.2f, -1554.4f, 30f, 4f, 4f, 4f, false, true, 0))
										{
											if (!unk_0x3F219400E5FE4B69(iLocal_35[0]))
											{
												unk_0x31826EF4A8BC8E9F(iLocal_35[0]);
											}
											if (unk_0x3F219400E5FE4B69(iLocal_35[0]))
											{
												unk_0xED68CDDDE25A144E(iLocal_35[0]);
											}
											unk_0x99414FB2D30425C1(&uLocal_48);
											unk_0x7E268975AF5EA74F(0, 917.8f, -1561f, 29f, 3f, -1, 1048576000, 0, 1193033728);
											unk_0x11C4AF4137F2A4B5(0, unk_0x33CD235DF1E6A94E(), 0);
											unk_0x108754262311D34F(0, "misscarsteal4@director_grip", "mcs_2_loop_grip1", 8f, -8f, -1, 1, 0, 0, 0, 0);
											unk_0xC734F59A13D39AEF(uLocal_48);
											unk_0x13A2D602CD10CBAC(iLocal_35[0], uLocal_48);
											unk_0xA7A57E7757ED035E(&uLocal_48);
											iLocal_345 = 1;
										}
									}
								}
							}
						}
					}
					if (iLocal_345 == 1 && iLocal_362 == 0)
					{
						if (unk_0x765F6FEEFF39224F(iLocal_35[0]))
						{
							if (!unk_0xBC2FC12AD0FBF72E(iLocal_35[0]))
							{
								if (unk_0x18FB647D79B09657(iLocal_35[0], 917.8f, -1561f, 29f, 2f, 2f, 2f, false, true, 0))
								{
									func_132(&uLocal_99, 3, iLocal_35[0], "FHPrepBWorker", 0, 1);
									func_179(iLocal_35[0], "FHPB_BBAA", "FHPrepBWorker", 4);
									iLocal_362 = 1;
								}
							}
						}
					}
					if (iLocal_344 == 0)
					{
						if (unk_0xE3903F59E2F22150() > iLocal_63 + 3000)
						{
							if (unk_0x765F6FEEFF39224F(iLocal_35[5]))
							{
								if (!unk_0xBC2FC12AD0FBF72E(iLocal_35[5]))
								{
									unk_0x108754262311D34F(iLocal_35[5], "cellphone@str", "cellphone_call_listen_c", 4f, -8f, -1, 49, 0, 0, 0, 0);
									iLocal_87 = unk_0xE3903F59E2F22150();
									iLocal_344 = 1;
								}
							}
						}
					}
					else if (iLocal_343 == 0)
					{
						if (unk_0xE3903F59E2F22150() > iLocal_87 + 5000)
						{
							if (unk_0x765F6FEEFF39224F(iLocal_35[5]))
							{
								if (!unk_0xBC2FC12AD0FBF72E(iLocal_35[5]))
								{
									unk_0xED68CDDDE25A144E(iLocal_35[5]);
									unk_0x277716E9E7CC0692(iLocal_35[5], unk_0x33CD235DF1E6A94E(), 0, 16);
									iLocal_343 = 1;
								}
							}
						}
					}
				}
				iLocal_56 = 0;
				while (iLocal_56 <= 6)
				{
					if (iLocal_268[iLocal_56] == 0)
					{
						if (iParam0 == iLocal_35[iLocal_56])
						{
							if (unk_0x765F6FEEFF39224F(iParam0))
							{
								if (!unk_0xBC2FC12AD0FBF72E(iParam0))
								{
									unk_0x4A852F02088ECC9D(iParam0, true);
									if (unk_0xF0D230FB550CD6EB(iParam0, 0))
									{
										if (func_171(iParam0, unk_0x33CD235DF1E6A94E(), 1) > 200f)
										{
											if (!unk_0x3F219400E5FE4B69(iParam0))
											{
												unk_0x31826EF4A8BC8E9F(iParam0);
											}
											if (unk_0x3F219400E5FE4B69(iParam0))
											{
												unk_0xED68CDDDE25A144E(iParam0);
											}
											unk_0xECCD4FDA45197F97(iParam0, unk_0x33CD235DF1E6A94E(), 1000f, -1, 0, 0);
											iLocal_268[iLocal_56] = 1;
										}
									}
									else if (func_171(iParam0, unk_0x33CD235DF1E6A94E(), 1) > 100f)
									{
										if (!unk_0x3F219400E5FE4B69(iParam0))
										{
											unk_0x31826EF4A8BC8E9F(iParam0);
										}
										if (unk_0x3F219400E5FE4B69(iParam0))
										{
											unk_0xED68CDDDE25A144E(iParam0);
										}
										unk_0xECCD4FDA45197F97(iParam0, unk_0x33CD235DF1E6A94E(), 1000f, -1, 0, 0);
										iLocal_268[iLocal_56] = 1;
									}
								}
							}
						}
					}
					iLocal_56++;
				}
			}
			if (iLocal_28 == 4)
			{
				iLocal_56 = 0;
				while (iLocal_56 <= 6)
				{
					if (iLocal_268[iLocal_56] == 0)
					{
						if (iParam0 == iLocal_35[iLocal_56])
						{
							if (unk_0x765F6FEEFF39224F(iParam0))
							{
								if (!unk_0xBC2FC12AD0FBF72E(iParam0))
								{
									if (!unk_0x3F219400E5FE4B69(iParam0))
									{
										unk_0x31826EF4A8BC8E9F(iParam0);
									}
									if (unk_0x3F219400E5FE4B69(iParam0))
									{
										unk_0xED68CDDDE25A144E(iParam0);
									}
									unk_0x4A852F02088ECC9D(iParam0, true);
									unk_0xECCD4FDA45197F97(iParam0, unk_0x33CD235DF1E6A94E(), 1000f, -1, 0, 0);
									unk_0x897EF720254BBEA3(iParam0, true);
									unk_0x1F45B4626AC4A4C0(&iParam0);
									iLocal_268[iLocal_56] = 1;
								}
							}
						}
					}
					iLocal_56++;
				}
			}
			break;
		
		case 4:
			if (iLocal_360 == 0)
			{
				iLocal_360 = 1;
			}
			if (iLocal_292 == 0)
			{
				if (iLocal_293 == 0)
				{
					iLocal_63 = unk_0xE3903F59E2F22150();
					iLocal_293 = 1;
				}
				if (iLocal_293 == 1)
				{
					if (unk_0xE3903F59E2F22150() > iLocal_63 + 6000)
					{
						unk_0xD875615F72CD34A6(5);
						unk_0x4B06B5746CBEC99F(1f);
						unk_0x98F04A4FFB4AD01C(unk_0x95B959F18401C09A(), 2, 0);
						unk_0x66D901F8097E8E86(unk_0x95B959F18401C09A(), 0);
						iLocal_292 = 1;
					}
				}
			}
			if (iLocal_58 == 0)
			{
				unk_0xD2E80177F27FD43F(5, iLocal_264, 1862763509);
				unk_0x4A852F02088ECC9D(iParam0, true);
				iLocal_58++;
			}
			if (iLocal_58 == 1)
			{
				iLocal_56 = 0;
				while (iLocal_56 <= 6)
				{
					if (unk_0x765F6FEEFF39224F(iLocal_35[iLocal_56]))
					{
						if (!unk_0xBC2FC12AD0FBF72E(iLocal_35[iLocal_56]))
						{
							if (func_171(unk_0x33CD235DF1E6A94E(), iLocal_35[iLocal_56], 1) < 15f)
							{
								if (func_191(iLocal_35[iLocal_56], 6))
								{
									if (unk_0xDAAA48CE50D80F52(iLocal_35[iLocal_56], unk_0x33CD235DF1E6A94E()))
									{
										if (iLocal_285[iLocal_56] == 0)
										{
											if (!unk_0x3F219400E5FE4B69(iLocal_35[iLocal_56]))
											{
												unk_0x31826EF4A8BC8E9F(iLocal_35[iLocal_56]);
											}
											if (unk_0x3F219400E5FE4B69(iLocal_35[iLocal_56]))
											{
												unk_0xED68CDDDE25A144E(iLocal_35[iLocal_56]);
											}
											unk_0x8CF360BBBD42762D(iLocal_35[iLocal_56], -1, unk_0x33CD235DF1E6A94E(), -1, 0);
											iLocal_285[iLocal_56] = 1;
											iLocal_284[iLocal_56] = 0;
											iLocal_280[iLocal_56] = 0;
											iLocal_75 = unk_0xE3903F59E2F22150();
										}
									}
									else if (unk_0xE3903F59E2F22150() > iLocal_75 + 300)
									{
										iLocal_284[iLocal_56] = 0;
									}
								}
								else if (iLocal_284[iLocal_56] == 0)
								{
									if (!unk_0x3F219400E5FE4B69(iLocal_35[iLocal_56]))
									{
										unk_0x31826EF4A8BC8E9F(iLocal_35[iLocal_56]);
									}
									if (unk_0x3F219400E5FE4B69(iLocal_35[iLocal_56]))
									{
										unk_0xED68CDDDE25A144E(iLocal_35[iLocal_56]);
									}
									unk_0xECCD4FDA45197F97(iLocal_35[iLocal_56], unk_0x33CD235DF1E6A94E(), 250f, -1, 0, 0);
									iLocal_284[iLocal_56] = 1;
									iLocal_285[iLocal_56] = 0;
								}
							}
							else if (iLocal_284[iLocal_56] == 0)
							{
								if (!unk_0x3F219400E5FE4B69(iLocal_35[iLocal_56]))
								{
									unk_0x31826EF4A8BC8E9F(iLocal_35[iLocal_56]);
								}
								if (unk_0x3F219400E5FE4B69(iLocal_35[iLocal_56]))
								{
									unk_0xED68CDDDE25A144E(iLocal_35[iLocal_56]);
								}
								unk_0xECCD4FDA45197F97(iLocal_35[iLocal_56], unk_0x33CD235DF1E6A94E(), 250f, -1, 0, 0);
								iLocal_284[iLocal_56] = 1;
								iLocal_285[iLocal_56] = 0;
							}
						}
					}
					iLocal_56++;
				}
			}
			break;
	}
}

int func_191(int iParam0, int iParam1)
{
	if (unk_0x765F6FEEFF39224F(iParam0) && !unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		if (unk_0x9ED464AAA493C8EF(unk_0x33CD235DF1E6A94E(), iParam1))
		{
			if (unk_0xAC6A512C64D9A9C0(unk_0x95B959F18401C09A(), iParam0) || unk_0xC2ECB90E2DFA5802(unk_0x95B959F18401C09A(), iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_192()
{
	iLocal_37 = func_25(0);
	iLocal_38 = func_25(1);
	iLocal_39 = func_25(2);
	if (func_33(iLocal_37, 0))
	{
		if (!unk_0xBC2FC12AD0FBF72E(iLocal_37))
		{
			if (!func_32(iLocal_37))
			{
				if (!func_194())
				{
					if (func_193(iLocal_37))
					{
						if (func_31(iLocal_37, 0))
						{
							unk_0x0D21E1FDE062ED99(iLocal_37, true, 1);
							unk_0x4A852F02088ECC9D(iLocal_37, true);
							unk_0xED68CDDDE25A144E(iLocal_37);
							iLocal_350 = 0;
							iLocal_353 = 0;
							iLocal_356 = 0;
						}
					}
				}
			}
			else
			{
				if (iLocal_350 == 0)
				{
					if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
					{
						iLocal_350 = 1;
					}
					else if (unk_0xF0D230FB550CD6EB(iLocal_37, 0))
					{
						if (!unk_0x10930B9CAD4111C2(iLocal_37, unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), 0))
						{
							iLocal_350 = 1;
						}
					}
				}
				if (iLocal_350 == 0)
				{
					if (func_194())
					{
						iLocal_350 = 1;
					}
				}
				if (iLocal_347 == 1)
				{
					if ((func_193(iLocal_37) && unk_0x9E08E12414BD4476(iLocal_37, 1)) && iLocal_350 == 0)
					{
						vLocal_94 = { unk_0xFBB1F99A825CAB09(iLocal_37, true) };
						unk_0x6CB3E644E3FBFEF0(vLocal_94.x, vLocal_94.y, vLocal_92.x, vLocal_92.y);
						if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) == 0)
						{
							if (iLocal_353 == 0)
							{
								if (unk_0x656BB209FFCEE74A(vLocal_94.x, vLocal_94.y, vLocal_92.x, vLocal_92.y))
								{
									unk_0x6ED1018181C54CFB(iLocal_37, unk_0xF2C96862595654B4(iLocal_37, 0), vLocal_92, 4, 30f, 786468, 3f, 15f, 0);
									iLocal_356 = 0;
									iLocal_353 = 1;
								}
							}
						}
						else if (unk_0x765F6FEEFF39224F(unk_0xACC2D6D9762C28BB(vLocal_94, 200f, joaat("police3"), 32768)))
						{
							if (iLocal_356 == 0)
							{
								unk_0x2BC4614F764725A6(iLocal_37, unk_0xF2C96862595654B4(iLocal_37, 0), unk_0xACC2D6D9762C28BB(vLocal_94, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, 1);
								iLocal_353 = 0;
								iLocal_356 = 1;
							}
						}
						else if (iLocal_353 == 0)
						{
							if (unk_0x656BB209FFCEE74A(vLocal_94.x, vLocal_94.y, vLocal_92.x, vLocal_92.y))
							{
								unk_0x6ED1018181C54CFB(iLocal_37, unk_0xF2C96862595654B4(iLocal_37, 0), vLocal_92, 4, 30f, 786468, 3f, 15f, 0);
								iLocal_356 = 0;
								iLocal_353 = 1;
							}
						}
					}
					else
					{
						iLocal_350 = 1;
					}
				}
				if (iLocal_350 == 1)
				{
					if (func_24(iLocal_37))
					{
						iLocal_350 = 0;
					}
				}
			}
		}
	}
	if (func_33(iLocal_39, 0))
	{
		if (!unk_0xBC2FC12AD0FBF72E(iLocal_39))
		{
			if (!func_32(iLocal_39))
			{
				if (!func_194())
				{
					if (func_193(iLocal_39))
					{
						if (func_31(iLocal_39, 0))
						{
							unk_0x0D21E1FDE062ED99(iLocal_39, true, 1);
							unk_0x4A852F02088ECC9D(iLocal_39, true);
							unk_0xED68CDDDE25A144E(iLocal_39);
							iLocal_352 = 0;
							iLocal_354 = 0;
							iLocal_357 = 0;
						}
					}
				}
			}
			else
			{
				if (iLocal_352 == 0)
				{
					if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
					{
						iLocal_352 = 1;
					}
					else if (unk_0xF0D230FB550CD6EB(iLocal_39, 0))
					{
						if (!unk_0x10930B9CAD4111C2(iLocal_39, unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), 0))
						{
							iLocal_352 = 1;
						}
					}
				}
				if (iLocal_352 == 0)
				{
					if (func_194())
					{
						iLocal_352 = 1;
					}
				}
				if (iLocal_348 == 1)
				{
					if ((func_193(iLocal_39) && unk_0x9E08E12414BD4476(iLocal_39, 1)) && iLocal_352 == 0)
					{
						vLocal_94 = { unk_0xFBB1F99A825CAB09(iLocal_39, true) };
						unk_0x6CB3E644E3FBFEF0(vLocal_94.x, vLocal_94.y, vLocal_92.x, vLocal_92.y);
						if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) == 0)
						{
							if (iLocal_354 == 0)
							{
								if (unk_0x656BB209FFCEE74A(vLocal_94.x, vLocal_94.y, vLocal_92.x, vLocal_92.y))
								{
									unk_0x6ED1018181C54CFB(iLocal_39, unk_0xF2C96862595654B4(iLocal_39, 0), vLocal_92, 4, 30f, 786468, 3f, 15f, 0);
									iLocal_357 = 0;
									iLocal_354 = 1;
								}
							}
						}
						else if (unk_0x765F6FEEFF39224F(unk_0xACC2D6D9762C28BB(vLocal_94, 200f, joaat("police3"), 32768)))
						{
							if (iLocal_357 == 0)
							{
								unk_0x2BC4614F764725A6(iLocal_39, unk_0xF2C96862595654B4(iLocal_39, 0), unk_0xACC2D6D9762C28BB(vLocal_94, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, 1);
								iLocal_354 = 0;
								iLocal_357 = 1;
							}
						}
						else if (iLocal_354 == 0)
						{
							if (unk_0x656BB209FFCEE74A(vLocal_94.x, vLocal_94.y, vLocal_92.x, vLocal_92.y))
							{
								unk_0x6ED1018181C54CFB(iLocal_39, unk_0xF2C96862595654B4(iLocal_39, 0), vLocal_92, 4, 30f, 786468, 3f, 15f, 0);
								iLocal_357 = 0;
								iLocal_354 = 1;
							}
						}
					}
					else
					{
						iLocal_352 = 1;
					}
				}
				if (iLocal_352 == 1)
				{
					if (func_24(iLocal_39))
					{
						iLocal_352 = 0;
					}
				}
			}
		}
	}
	if (func_33(iLocal_38, 0))
	{
		if (!unk_0xBC2FC12AD0FBF72E(iLocal_38))
		{
			if (!func_32(iLocal_38))
			{
				if (!func_194())
				{
					if (func_193(iLocal_38))
					{
						if (func_31(iLocal_38, 0))
						{
							unk_0x0D21E1FDE062ED99(iLocal_38, true, 1);
							unk_0x4A852F02088ECC9D(iLocal_38, true);
							unk_0xED68CDDDE25A144E(iLocal_38);
							iLocal_351 = 0;
							iLocal_355 = 0;
							iLocal_358 = 0;
						}
					}
				}
			}
			else
			{
				if (iLocal_351 == 0)
				{
					if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
					{
						iLocal_351 = 1;
					}
					else if (unk_0xF0D230FB550CD6EB(iLocal_38, 0))
					{
						if (!unk_0x10930B9CAD4111C2(iLocal_38, unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), 0))
						{
							iLocal_351 = 1;
						}
					}
				}
				if (iLocal_351 == 0)
				{
					if (func_194())
					{
						iLocal_351 = 1;
					}
				}
				if (iLocal_349 == 1)
				{
					if ((func_193(iLocal_38) && unk_0x9E08E12414BD4476(iLocal_38, 1)) && iLocal_351 == 0)
					{
						vLocal_94 = { unk_0xFBB1F99A825CAB09(iLocal_38, true) };
						unk_0x6CB3E644E3FBFEF0(vLocal_94.x, vLocal_94.y, vLocal_92.x, vLocal_92.y);
						if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) == 0)
						{
							if (iLocal_355 == 0)
							{
								if (unk_0x656BB209FFCEE74A(vLocal_94.x, vLocal_94.y, vLocal_92.x, vLocal_92.y))
								{
									unk_0x6ED1018181C54CFB(iLocal_38, unk_0xF2C96862595654B4(iLocal_38, 0), vLocal_92, 4, 30f, 786468, 3f, 15f, 0);
									iLocal_358 = 0;
									iLocal_355 = 1;
								}
							}
						}
						else if (unk_0x765F6FEEFF39224F(unk_0xACC2D6D9762C28BB(vLocal_94, 200f, joaat("police3"), 32768)))
						{
							if (iLocal_358 == 0)
							{
								unk_0x2BC4614F764725A6(iLocal_38, unk_0xF2C96862595654B4(iLocal_38, 0), unk_0xACC2D6D9762C28BB(vLocal_94, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, 1);
								iLocal_355 = 0;
								iLocal_358 = 1;
							}
						}
						else if (iLocal_355 == 0)
						{
							if (unk_0x656BB209FFCEE74A(vLocal_94.x, vLocal_94.y, vLocal_92.x, vLocal_92.y))
							{
								unk_0x6ED1018181C54CFB(iLocal_38, unk_0xF2C96862595654B4(iLocal_38, 0), vLocal_92, 4, 30f, 786468, 3f, 15f, 0);
								iLocal_358 = 0;
								iLocal_355 = 1;
							}
						}
					}
					else
					{
						iLocal_351 = 1;
					}
				}
				if (iLocal_351 == 1)
				{
					if (func_24(iLocal_38))
					{
						iLocal_351 = 0;
					}
				}
			}
		}
	}
}

int func_193(int iParam0)
{
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()) && unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		if (!unk_0xBC2FC12AD0FBF72E(iParam0))
		{
			if (unk_0x10930B9CAD4111C2(iParam0, unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), 0) && unk_0x7BDC41A7CA0C77A2(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), -1, 0) == iParam0)
			{
				if (unk_0x765F6FEEFF39224F(iLocal_33))
				{
					if (unk_0x91D5C8283D19AF49(iLocal_33, 0))
					{
						if ((unk_0x10930B9CAD4111C2(iParam0, iLocal_33, 0) && unk_0x7BDC41A7CA0C77A2(iLocal_33, -1, 0) == iParam0) && !unk_0x18FB647D79B09657(iLocal_33, vLocal_92, 3f, 3f, 3f, false, true, 0))
						{
							if (iParam0 == iLocal_37)
							{
								iLocal_347 = 1;
							}
							if (iParam0 == iLocal_39)
							{
								iLocal_348 = 1;
							}
							if (iParam0 == iLocal_38)
							{
								iLocal_349 = 1;
							}
							return 1;
						}
					}
				}
			}
		}
	}
	if (iParam0 == iLocal_37)
	{
		iLocal_347 = 0;
	}
	if (iParam0 == iLocal_39)
	{
		iLocal_348 = 0;
	}
	if (iParam0 == iLocal_38)
	{
		iLocal_349 = 0;
	}
	return 0;
}

bool func_194()
{
	return Global_17270;
}

void func_195()
{
	if (unk_0x765F6FEEFF39224F(iLocal_33))
	{
		if (!unk_0x91D5C8283D19AF49(iLocal_33, 0))
		{
			func_198(3);
			return;
		}
		else
		{
			if (func_197(&iLocal_33))
			{
				func_198(2);
				return;
			}
			if (unk_0x765F6FEEFF39224F(iLocal_32))
			{
				if (!unk_0x91D5C8283D19AF49(iLocal_32, 0))
				{
					func_198(1);
					return;
				}
				if (unk_0x91D5C8283D19AF49(iLocal_32, 0))
				{
					if (!unk_0xC16D1B065E3EEA79(iLocal_33))
					{
						if ((unk_0x948A37B10533FA15(iLocal_32) || func_196(iLocal_32)) || func_197(&iLocal_32))
						{
							func_198(1);
							return;
						}
					}
				}
			}
		}
	}
	if (iLocal_28 == 3 || iLocal_28 == 4)
	{
		if (unk_0x765F6FEEFF39224F(iLocal_32))
		{
			if (unk_0x91D5C8283D19AF49(iLocal_32, 0))
			{
				if (func_171(iLocal_32, unk_0x33CD235DF1E6A94E(), 1) > 600f)
				{
					func_198(5);
					return;
				}
			}
		}
	}
	if (unk_0x765F6FEEFF39224F(iLocal_40))
	{
		if (unk_0xBC2FC12AD0FBF72E(iLocal_40))
		{
			func_198(6);
			return;
		}
	}
}

int func_196(int iParam0)
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

int func_197(int iParam0)
{
	if (unk_0x91D5C8283D19AF49(*iParam0, 0))
	{
		if (((unk_0x67001C5CC88C66A8(*iParam0, 0, 7000) || unk_0x67001C5CC88C66A8(*iParam0, 3, 30000)) || unk_0x67001C5CC88C66A8(*iParam0, 2, 30000)) || unk_0x67001C5CC88C66A8(*iParam0, 1, 40000))
		{
			return 1;
		}
	}
	return 0;
}

void func_198(int iParam0)
{
	iLocal_30 = iParam0;
	if (iLocal_28 != 6)
	{
		iLocal_28 = 6;
		iLocal_53 = 0;
	}
}

void func_199(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_106565.f_9079.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_106565.f_9079.f_99.f_58[iParam0] = iParam1;
}

void func_200()
{
	if (iLocal_28 == 5)
	{
		if (iLocal_360 == 0)
		{
			func_201(657);
		}
	}
}

void func_201(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	Global_56495 = 0;
	if (!Global_56719[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_68589)
	{
		if (Global_68590[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_68590[iVar1 /*9*/].f_1 = 1;
			Global_68590[iVar1 /*9*/].f_2 = 0f;
			if (Global_68590[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

bool func_202(bool bParam0)
{
	if (!bParam0 && unk_0x1BCDA92AD0A7835B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x0E4018692D92041D(Global_71838, 0);
}

void func_203()
{
	unk_0xF4197686EF83F52A(unk_0x95B959F18401C09A(), 0);
	unk_0x8C4EA5F6857553AE(joaat("packer"), false);
	unk_0x8C4EA5F6857553AE(joaat("phantom"), false);
	unk_0x33854B8151B6D8EC("FHPRB_START");
	unk_0x33854B8151B6D8EC("FHPRB_TRUCK");
	unk_0x33854B8151B6D8EC("FHPRB_COPS");
	unk_0x33854B8151B6D8EC("FHPRB_LOST");
	unk_0x33854B8151B6D8EC("FHPRB_STOP");
	unk_0xF1CFA0046BB67893(iLocal_42, 0);
	unk_0xF1CFA0046BB67893(iLocal_43, 0);
	unk_0xF1CFA0046BB67893(iLocal_44, 0);
	unk_0xF1CFA0046BB67893(iLocal_45, 0);
	unk_0xF1CFA0046BB67893(iLocal_46, 0);
	unk_0xF1CFA0046BB67893(iLocal_47, 0);
	if (unk_0xB98788B42580C4A8("SCRAP_SECURITY"))
	{
		if (unk_0x7FC8FAE3451A21AD("SCRAP_SECURITY"))
		{
			unk_0x8411BDAD24F96365("SCRAP_SECURITY", false);
		}
	}
	unk_0xD875615F72CD34A6(5);
	if (unk_0x36CDBD83DF514AC4(iLocal_90))
	{
		unk_0x7D212A857AEA88CA(iLocal_90);
	}
	if (unk_0x36CDBD83DF514AC4(iLocal_91))
	{
		unk_0x7D212A857AEA88CA(iLocal_91);
	}
	unk_0x5894DC159447E10A();
}

void func_204()
{
	int iVar0;
	
	if (unk_0x07AB0925A06BD5AD("buddyDeathResponse"))
	{
		start_new_script("buddyDeathResponse", 1424);
	}
	if (Global_106565.f_9079 || func_202(0))
	{
		if (!func_205())
		{
			iVar0 = func_13();
			if (iVar0 != -1)
			{
				if (!func_7(iVar0))
				{
					return;
				}
				unk_0x8950ED5730F62EE8(&(Global_84464[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_12();
		}
	}
}

int func_205()
{
	if (((Global_93682 == 13 || Global_93682 == 10) || Global_93682 == 11) || Global_93682 == 12)
	{
		return 0;
	}
	return 1;
}

