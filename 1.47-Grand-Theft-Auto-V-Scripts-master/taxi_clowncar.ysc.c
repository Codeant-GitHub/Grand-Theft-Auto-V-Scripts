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
	var uLocal_47 = -1;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 1000;
	var uLocal_55 = 1000;
	var uLocal_56 = 0;
	int iLocal_57[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
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
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	bool bLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	vector3 vLocal_77 = { 0f, 0f, 0f };
	var uLocal_78 = 0;
	int iLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	int iLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	bool bLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 1132396544;
	var uLocal_93 = 1132396544;
	var uLocal_94 = 1132396544;
	var uLocal_95 = 0;
	var uLocal_96 = -1082130432;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 8;
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
	var uLocal_156 = -1;
	var uLocal_157 = 1092616192;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	int iLocal_160 = 0;
	struct<21> Local_161 = { 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<10> Local_162[15];
	int iLocal_163 = 0;
	float fLocal_164 = 0f;
	struct<2> Local_165 = { 0, 16 } ;
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
	vector3 vLocal_230 = { 0f, 0f, 0f };
	vector3 vLocal_231 = { 0f, 0f, 0f };
	vector3 vLocal_232 = { 0f, 0f, 0f };
	vector3 vLocal_233 = { 0f, 0f, 0f };
	vector3 vLocal_234 = { 0f, 0f, 0f };
	vector3 vLocal_235 = { 0f, 0f, 0f };
	vector3 vLocal_236 = { 0f, 0f, 0f };
	vector3 vLocal_237 = { 0f, 0f, 0f };
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	int iLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	int iLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	bool bLocal_248 = 0;
	bool bLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	bool bLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	float fLocal_255 = 0f;
	float fLocal_256 = 0f;
	float fLocal_257 = 0f;
	var uLocal_258[4] = { 0, 0, 0, 0 };
	var uLocal_259[4] = { 0, 0, 0, 0 };
	struct<429> Local_260 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_261 = 0;
	struct<27> Local_262 = { 3, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3 } ;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 3;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 3;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 5;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 3;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 3;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 1;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 4;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 4;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 4;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 1;
	var uLocal_331 = 2;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	vector3 vLocal_338[1] = {{ 0f, 0f, 0f } };
	int iLocal_339 = 0;
	var uLocal_340 = 0;
	vector3 vLocal_341 = { 0f, 0f, 0f };
	vector3 vLocal_342 = { 0f, 0f, 0f };
	int iLocal_343 = 0;
	bool bLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	bool bLocal_347 = 0;
	struct<28> Local_348 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 5;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 1097859072;
	var uLocal_395 = 1500;
	var uLocal_396 = 45;
	var uLocal_397 = 1103626240;
	var uLocal_398 = 5;
	int iLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
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
	iLocal_71 = unk_0xFD411B1045595D7D();
	iLocal_72 = unk_0x5E82627D2AFEFEE1();
	vLocal_77 = { 500f, 500f, 500f };
	fLocal_255 = 98f;
	fLocal_256 = 55f;
	fLocal_257 = 60f;
	iLocal_339 = 1;
	vLocal_341 = { -1284.367f, 295.7437f, 63.83044f };
	vLocal_342 = { -1286.218f, 292.573f, 63.7927f };
	if (unk_0x9EC5BDC006623C42(67))
	{
		func_410(2);
		func_406();
	}
	unk_0xC48A4BABDFAAB2B9(1);
	func_393();
	while (true)
	{
		if (unk_0x765F6FEEFF39224F(Local_260.f_2))
		{
			func_8();
		}
		else
		{
			func_1(&Local_260);
		}
		wait(0);
	}
}

void func_1(var uParam0)
{
	uParam0->f_2 = unk_0x33CD235DF1E6A94E();
	func_6(&(uParam0->f_244));
	uParam0->f_428 = func_2();
}

int func_2()
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_3(unk_0x33CD235DF1E6A94E());
	if (iVar1 == 0)
	{
		iVar0 = joaat("sp0_dist_driving_car");
	}
	else if (iVar1 == 2)
	{
		iVar0 = joaat("sp2_dist_driving_car");
	}
	else if (iVar1 == 1)
	{
		iVar0 = joaat("sp1_dist_driving_car");
	}
	else
	{
		iVar0 = joaat("sp0_dist_driving_car");
	}
	return iVar0;
}

int func_3(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		iVar1 = unk_0x541D5C57194E73C4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_4(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_4(int iParam0)
{
	if (func_5(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_5(int iParam0)
{
	return iParam0 < 3;
}

void func_6(var uParam0)
{
	int iVar0;
	char cVar1[64];
	
	iVar0 = func_3(unk_0x33CD235DF1E6A94E());
	if (iVar0 == 0)
	{
		func_7(uParam0, 0, unk_0x33CD235DF1E6A94E(), "MICHAEL", 0, 1);
	}
	else if (iVar0 == 2)
	{
		func_7(uParam0, 0, unk_0x33CD235DF1E6A94E(), "TREVOR", 0, 1);
	}
	else if (iVar0 == 1)
	{
		func_7(uParam0, 0, unk_0x33CD235DF1E6A94E(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_7(uParam0, 0, unk_0x33CD235DF1E6A94E(), "MICHAEL", 0, 1);
		StringCopy(&cVar1, "Invalid enum passed to Taxi dialogue is: ", 64);
		StringIntConCat(&cVar1, iVar0, 64);
	}
	func_7(uParam0, 8, 0, "TaxiDispatch", 0, 1);
}

void func_7(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_8()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (func_392(&Local_260))
	{
		func_391(&Local_260);
		if (Local_260.f_410 > 0)
		{
			if (func_390(&Local_260, 0))
			{
				func_388();
			}
		}
		else if (func_387(&Local_260, 31) > 5f)
		{
			func_410(2);
			func_406();
		}
	}
	else
	{
		func_365(&Local_260, &uLocal_392);
		func_364(&Local_260);
		func_363(&Local_260, &uLocal_340, 0);
		if (Local_260.f_410 < 9)
		{
			func_350(&Local_260, &Local_262, &uLocal_392);
		}
		if (Local_260.f_410 > 5 && !iLocal_343)
		{
			iLocal_343 = 1;
			Local_262.f_16[0 /*3*/] = { 27.36738f, -1356.948f, 28.2181f };
			Local_262.f_16[1 /*3*/] = { 314.3014f, -266.3495f, 52.78319f };
			Local_262.f_16[2 /*3*/] = { -159.9642f, -856.5309f, 28.71328f };
			Local_262.f_26[0 /*3*/] = { 30.9791f, -1347.39f, 28.4939f };
			Local_262.f_26[1 /*3*/] = { 313.893f, -279.0695f, 53.1647f };
			Local_262.f_26[2 /*3*/] = { -88.0743f, -845.7833f, 40.797f };
		}
		if (Local_260.f_410 > 2)
		{
			if (!func_349(&Local_260))
			{
				if (!iLocal_345)
				{
					if (func_348())
					{
						func_346(&Local_262);
						iLocal_345 = 1;
					}
				}
				func_316();
			}
			else
			{
				func_297(&Local_260, "Taxi Not Driveable", func_315(&Local_260));
			}
		}
		if (Local_260.f_410 > 3)
		{
			if (!bVar3)
			{
				if (unk_0x91D5C8283D19AF49(Local_260.f_4, 0))
				{
					iVar0 = 0;
					while (iVar0 < 5)
					{
						if (!unk_0xD62C4419A41F106A(Local_262.f_4[iVar0], 0))
						{
							if (unk_0x91BBD269506D61D2(Local_262.f_4[iVar0], Local_260.f_4, 1))
							{
								bVar3 = true;
							}
						}
						iVar0++;
					}
				}
			}
			if (bVar3)
			{
				iVar1 = 0;
				while (iVar1 < 5)
				{
					if (!unk_0xD62C4419A41F106A(Local_262.f_4[iVar1], 0))
					{
						if (!unk_0xBC2FC12AD0FBF72E(Local_262.f_4[iVar1]))
						{
							unk_0xED68CDDDE25A144E(Local_262.f_4[iVar1]);
							unk_0xA7A57E7757ED035E(&iVar2);
							unk_0x99414FB2D30425C1(&iVar2);
							unk_0xECCD4FDA45197F97(0, Local_260.f_2, 1000f, -1, 0, 0);
							unk_0xC734F59A13D39AEF(iVar2);
							unk_0x13A2D602CD10CBAC(Local_262.f_4[iVar1], iVar2);
							unk_0xA7A57E7757ED035E(&iVar2);
						}
					}
					iVar1++;
				}
			}
		}
		if (Local_260.f_410 == 9)
		{
			func_273(&Local_260, 0, 1);
			func_272(&Local_260, &Local_262, 1128792064);
		}
		switch (Local_260.f_410)
		{
			case 0:
				func_271(&(vLocal_338[0 /*3*/]), "TAXI_SC_BN_10", 200);
				func_270(&Local_260, &vLocal_338);
				func_268();
				func_266();
				func_265();
				func_264(&Local_260, 16, 4f, 0);
				func_261(&Local_260, vLocal_341, vLocal_342, &Local_262);
				func_260(&Local_260);
				func_259(&Local_260, 1);
				break;
			
			case 1:
				if (func_256())
				{
					func_255();
					func_235();
					func_234(&Local_260);
					func_232(&(Local_260.f_100), 8);
					func_232(&(Local_260.f_100), 2048);
					func_232(&(Local_260.f_100), 256);
					Local_260.f_14 = { vLocal_341 };
					Local_260.f_49 = 0;
					func_259(&Local_260, 3);
				}
				break;
			
			case 3:
				if (func_224(&Local_260, 3))
				{
					func_223(&Local_260, 1, 0);
					func_222(&uLocal_409, vLocal_341, 20f, 0);
					func_259(&Local_260, 5);
				}
				break;
			
			case 5:
				func_221();
				if (func_201(&Local_260, &Local_262))
				{
					unk_0x1C6F24ECA1A88E67(Local_260.f_428, &(Local_260.f_42), -1);
					func_259(&Local_260, 15);
				}
				break;
			
			case 15:
				if (func_199(&Local_260, &Local_262))
				{
					func_195(&Local_260, 8, 1, 0, 0);
					if (!unk_0xD62C4419A41F106A(Local_262[0], 0))
					{
						unk_0x5FEE418CE11E6DDE(Local_262[0], 26, true);
					}
					if (!unk_0xD62C4419A41F106A(Local_262[1], 0))
					{
						unk_0x5FEE418CE11E6DDE(Local_262[1], 26, true);
					}
					if (!unk_0xD62C4419A41F106A(Local_262[2], 0))
					{
						unk_0x5FEE418CE11E6DDE(Local_262[2], 26, true);
					}
					func_194(&Local_260);
					func_192(&Local_260, 0);
					func_191();
					func_189(&Local_260, 11);
					func_264(&Local_260, 10, 0, 0);
					func_264(&Local_260, 6, 0, 0);
					func_188();
					Local_260.f_36 = unk_0x9562E33C057F7589(3f, 10f);
					func_186(&Local_262);
					func_259(&Local_260, 9);
				}
				if (unk_0x91D5C8283D19AF49(Local_260.f_4, 0))
				{
					if (!unk_0x10930B9CAD4111C2(Local_260.f_2, Local_260.f_4, 0))
					{
						func_182(&Local_260, &Local_262);
						func_259(&Local_260, 5);
					}
				}
				break;
			
			case 9:
				if (!bLocal_344)
				{
				}
				func_179(&Local_260);
				if (func_136(&Local_260, &Local_262, &Local_348, &uLocal_351))
				{
					func_135(&Local_348, -1, 1);
					if (func_134(&Local_262))
					{
						func_133(&Local_260, 0);
					}
					func_132(&Local_262);
					func_130(&Local_260);
					func_126(&Local_260);
					func_125(&Local_260);
					func_259(&Local_260, 27);
				}
				break;
			
			case 27:
				if (func_114(&Local_260, 1))
				{
					unk_0xA7A57E7757ED035E(&iVar2);
					unk_0x99414FB2D30425C1(&iVar2);
					unk_0x7E268975AF5EA74F(0, Local_262.f_26[0 /*3*/], 1f, 20000, 1048576000, 0, 1193033728);
					unk_0x976357E602648DDF(0, 0);
					if (unk_0x89F20C4A841A3473(Local_260.f_29, 4f, 1))
					{
						unk_0xA9128AA30F3036C7(0, Local_260.f_29, 4f, 0);
					}
					else
					{
						unk_0x43EAD1F94EC8561F(0, 350.8689f, 0);
						unk_0xF6D940C3CF409665(0, "WORLD_HUMAN_WINDOW_SHOP_BROWSE", 0, 0);
					}
					unk_0xC734F59A13D39AEF(iVar2);
					unk_0x13A2D602CD10CBAC(Local_260.f_3, iVar2);
					unk_0x897EF720254BBEA3(Local_260.f_3, true);
					func_259(&Local_260, 29);
				}
				break;
			
			case 29:
				if (!unk_0xBC2FC12AD0FBF72E(Local_260.f_3))
				{
					if (func_113(Local_260.f_3, 29.11295f, -1349.218f, 29.6128f, 1) < 3f)
					{
						unk_0x41E36A540F8F323F(Local_260.f_3, 60, true);
					}
				}
				if (func_79(&Local_260, &iLocal_399))
				{
					func_11(1, &Local_260, 0);
					func_264(&Local_260, 31, 0, 0);
					func_259(&Local_260, 30);
				}
				break;
			
			case 30:
				if (!unk_0xBC2FC12AD0FBF72E(Local_260.f_3))
				{
					if (func_113(Local_260.f_3, 29.11295f, -1349.218f, 29.6128f, 1) < 3f)
					{
						unk_0x41E36A540F8F323F(Local_260.f_3, 60, true);
					}
					if ((unk_0x18FB647D79B09657(Local_260.f_3, 31.05019f, -1347.285f, 29.49703f, 1f, 1f, 1f, false, true, 1) || func_9(Local_260.f_3, 1) > 50f) || func_387(&Local_260, 31) > 30f)
					{
						if (unk_0x18FB647D79B09657(Local_260.f_3, 31.05019f, -1347.285f, 29.49703f, 1f, 1f, 1f, false, true, 1))
						{
						}
						if (func_9(Local_260.f_3, 1) > 50f)
						{
						}
						if (func_387(&Local_260, 31) > 30f)
						{
						}
						unk_0x4A852F02088ECC9D(Local_260.f_3, false);
						unk_0xD2E80177F27FD43F(255, Local_260.f_413, 1862763509);
						unk_0x1F45B4626AC4A4C0(&(Local_260.f_3));
						func_406();
					}
				}
				else
				{
					func_406();
				}
				break;
			}
	}
}

float func_9(int iParam0, bool bParam1)
{
	return func_10(unk_0x378BD4B3881338C2(unk_0x3EE1295CEFBEFED4()), iParam0, bParam1);
}

float func_10(int iParam0, int iParam1, bool bParam2)
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

void func_11(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		func_55(uParam1);
		if (!unk_0xBC2FC12AD0FBF72E(uParam1->f_3))
		{
			unk_0x5FEE418CE11E6DDE(uParam1->f_3, 317, true);
		}
	}
	else
	{
		func_53(1, 0);
	}
	func_12(uParam1, bParam2);
}

void func_12(var uParam0, bool bParam1)
{
	func_391(uParam0);
	if (func_52())
	{
		func_50();
	}
	func_48();
	unk_0xD362430CD61A9B08();
	unk_0xEDF90B96BED57BCE(1);
	func_44(0);
	if (unk_0x91D5C8283D19AF49(uParam0->f_4, 0))
	{
		unk_0x09993E7216CF52C4(uParam0->f_4, false);
		unk_0x6FF8EF6DC21D25B9(uParam0->f_4);
		unk_0x251D428435E55081(uParam0->f_4);
	}
	func_41(uParam0->f_14, 1);
	func_39(uParam0->f_14, 1, 1114636288);
	func_38(&(uParam0->f_244), 3);
	unk_0x5FEE418CE11E6DDE(unk_0x33CD235DF1E6A94E(), 32, true);
	if (func_35())
	{
		unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), true, 0);
	}
	unk_0x6B9BB8BC34DAFFD9(1);
	func_25(0, 1, 1, 0, 0, 0);
	unk_0xDFF589A2149528CE(true);
	unk_0x35675D19812BDF22(true);
	if (unk_0x117DAF3BF7232886(*uParam0))
	{
		unk_0x2F8A4DF7D0DFF0A8(*uParam0, 0);
		unk_0x63F0B040CE6EDF0F(false, false, 3000, 1, 0, 0);
		unk_0x052830EE89C97404(true);
	}
	if (func_24(Global_106565.f_19091, 4))
	{
		func_22(&(Global_106565.f_19091), 4);
		unk_0x8C4EA5F6857553AE(func_21(), false);
	}
	if (bParam1)
	{
		func_20(uParam0);
	}
	func_19(uParam0);
	unk_0xFF2DEA68E2D3602E("gestures@m@standing@casual");
	unk_0xFF2DEA68E2D3602E("oddjobs@taxi@");
	unk_0xFF2DEA68E2D3602E("oddjobs@towingcome_here");
	if (unk_0x43E505744A9B715D())
	{
		func_17(uParam0->f_411);
	}
	if (!unk_0x5A8ABDA4992DA968(unk_0x3EE1295CEFBEFED4()))
	{
		unk_0x3449EA232F9B8EAD(unk_0x3EE1295CEFBEFED4(), true, 0);
	}
	unk_0x198BCB9897710EAB(round((func_13(&iLocal_82) * 1000f)), 12, 0);
}

float func_13(var uParam0)
{
	if (func_16(uParam0))
	{
		if (func_15(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_14(unk_0x0E4018692D92041D(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

float func_14(bool bParam0)
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

bool func_15(var uParam0)
{
	return unk_0x0E4018692D92041D(*uParam0, 2);
}

bool func_16(var uParam0)
{
	return unk_0x0E4018692D92041D(*uParam0, 1);
}

void func_17(int iParam0)
{
	var uVar0;
	
	if (iLocal_57[0] != 0)
	{
		MemCopy(&uVar0, {func_18(iParam0)}, 6);
		if (!unk_0x6D2E2622CA149402(&uVar0))
		{
		}
	}
}

struct<8> func_18(int iParam0)
{
	struct<8> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "TAXI_SC_N_NE", 32);
			break;
		
		case 1:
			StringCopy(&Var0, "TAXI_SC_N_TE", 32);
			break;
		
		case 2:
			StringCopy(&Var0, "TAXI_SC_N_DL", 32);
			break;
		
		case 3:
			StringCopy(&Var0, "TAXI_SC_N_GB", 32);
			break;
		
		case 4:
			StringCopy(&Var0, "TAXI_SC_N_TB", 32);
			break;
		
		case 5:
			StringCopy(&Var0, "TAXI_SC_N_CY", 32);
			break;
		
		case 6:
			StringCopy(&Var0, "TAXI_SC_N_GN", 32);
			break;
		
		case 7:
			StringCopy(&Var0, "TAXI_SC_N_CC", 32);
			break;
		
		case 8:
			StringCopy(&Var0, "TAXI_SC_N_FC", 32);
			break;
		
		case 9:
			StringCopy(&Var0, "TAXI_BLIP_CAR", 32);
			break;
		
		default:
			StringCopy(&Var0, "InvalidEnum", 32);
			break;
	}
	return Var0;
}

void func_19(var uParam0)
{
	unk_0x55A131BBB37B58A1(uParam0->f_51[0]);
}

void func_20(var uParam0)
{
	if (unk_0x765F6FEEFF39224F(uParam0->f_3))
	{
		if (!unk_0xD62C4419A41F106A(uParam0->f_3, 0))
		{
			if (!unk_0xF0D230FB550CD6EB(uParam0->f_3, 0))
			{
				unk_0x69267F2BCC4CAF14(uParam0->f_3);
			}
			unk_0x4A852F02088ECC9D(uParam0->f_3, false);
			unk_0xD2E80177F27FD43F(255, uParam0->f_413, 1862763509);
			if (unk_0x1CE8F0A08E65CA6A(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
			{
				unk_0xCCAF0916949DD646(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -8f);
			}
			else if (unk_0x1CE8F0A08E65CA6A(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
			{
				unk_0xCCAF0916949DD646(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -8f);
			}
			if (unk_0x1CE8F0A08E65CA6A(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
			{
				unk_0xCCAF0916949DD646(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -8f);
			}
			if (unk_0x1CE8F0A08E65CA6A(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0xCCAF0916949DD646(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", -8f);
			}
			unk_0x1F45B4626AC4A4C0(&(uParam0->f_3));
		}
	}
}

int func_21()
{
	return joaat("taxi");
}

void func_22(var uParam0, int iParam1)
{
	func_23(uParam0, iParam1);
}

void func_23(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_24(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_25(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0xCBE6E2953ED9652D(unk_0x95B959F18401C09A());
		unk_0xF4197686EF83F52A(unk_0x95B959F18401C09A(), 1);
		unk_0x11D1216D8F205785(unk_0x95B959F18401C09A(), 1);
		func_34(1);
		unk_0x9F86AEF7DC996029();
		unk_0x68F7298CC6F16961();
		if (Global_14553.f_1 > 3)
		{
			if (unk_0xA30F14B621E3269D())
			{
				unk_0xD92171BC6C48DB90(false);
			}
			if (!func_33())
			{
				Global_14553.f_1 = 3;
			}
			Global_15866 = 5;
		}
		func_32(1, iParam3, iParam2, 0);
		Global_56500 = 1;
		Global_68810 = 1;
		Global_71588 = 1;
	}
	else
	{
		func_34(0);
		unk_0xD384C2E6BE0D5ABF();
		Global_56500 = 0;
		if (bParam1)
		{
			unk_0x36296F11E96E764D();
		}
		unk_0xF4197686EF83F52A(unk_0x95B959F18401C09A(), 0);
		unk_0x11D1216D8F205785(unk_0x95B959F18401C09A(), 0);
		func_32(0, iParam3, iParam2, 0);
		if (unk_0xB331FCEB94EB05C8())
		{
			if (((((!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()) && !func_30(unk_0x95B959F18401C09A())) && !func_27(unk_0x95B959F18401C09A(), 0)) && !func_26()) && !bParam4) && !bParam5)
			{
				unk_0x9611832841071B69(unk_0x33CD235DF1E6A94E(), false);
			}
		}
		else if (((!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()) && !func_30(unk_0x95B959F18401C09A())) && !bParam4) && !bParam5)
		{
			unk_0x9611832841071B69(unk_0x33CD235DF1E6A94E(), false);
		}
		Global_71588 = 0;
	}
}

bool func_26()
{
	return unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_39.f_18, 14);
}

bool func_27(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x95B959F18401C09A())
	{
		bVar0 = func_28(-1, 0) == 8;
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

int func_28(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_29();
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

int func_29()
{
	return Global_1312745;
}

int func_30(int iParam0)
{
	if (func_27(iParam0, 0))
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

int func_32(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x4CE1DD5CFC1F941E())
	{
		if (unk_0xAB923D8907C25634() != iParam0 && uParam2)
		{
			unk_0xE5E26871D8586417(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_33()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_34(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x8950ED5730F62EE8(&Global_2423, 13);
	}
	else
	{
		unk_0xCE689A8E8C42ED78(&Global_2423, 13);
	}
}

int func_35()
{
	if (!func_37() && !func_36())
	{
		if (!unk_0x9808D9BE8CC3331B(unk_0x3EE1295CEFBEFED4()))
		{
			return 1;
		}
	}
	return 0;
}

int func_36()
{
	if (unk_0x1BCDA92AD0A7835B(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_37()
{
	if (unk_0x1BCDA92AD0A7835B(joaat("appinternet")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_38(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_39(vector3 vParam0, bool bParam1, float fParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { func_40(vParam0, 1f, -fParam2, -fParam2, -fParam2) };
	vVar1 = { func_40(vParam0, 1f, fParam2, fParam2, fParam2) };
	vVar0.z = (vVar0.z - 22f);
	vVar1.z = (vVar1.z + 22f);
	if (!bParam1)
	{
		unk_0x496BE3DBA113D228(vVar0, vVar1, false, 1);
	}
	else
	{
		unk_0xF699E61158861D53(vVar0, vVar1, true);
		unk_0xBD881F1B7ECAD975();
	}
}

Vector3 func_40(vector3 vParam0, float fParam1, struct<2> Param2, float fParam3)
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

void func_41(vector3 vParam0, bool bParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!func_42(vParam0, func_43(), 0))
	{
		vVar0 = { func_40(vParam0, 1f, -30f, -30f, -10f) };
		vVar1 = { func_40(vParam0, 1f, 30f, 30f, 10f) };
		unk_0x5856B9BF2B4E98C4(vVar0, vVar1, bParam1, 1);
	}
}

bool func_42(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

Vector3 func_43()
{
	vector3 vVar0;
	
	return vVar0;
}

void func_44(int iParam0)
{
	if (func_47())
	{
		return;
	}
	if (Global_14725)
	{
		func_45(0, 0);
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
	if (!func_33())
	{
		Global_14553.f_1 = 3;
	}
}

void func_45(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_46(0))
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

int func_46(int iParam0)
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

bool func_47()
{
	return unk_0x0E4018692D92041D(Global_1681628, 19);
}

void func_48()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_90645[iVar0 /*17*/] && !Global_90645[iVar0 /*17*/].f_1)
		{
			if (Global_90645[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_90645[iVar0 /*17*/].f_5 != 88 && Global_90645[iVar0 /*17*/].f_5 != 89) && Global_90645[iVar0 /*17*/].f_5 != 92)
				{
					func_49(Global_90645[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_49(int iParam0, bool bParam1)
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

void func_50()
{
	Global_14732 = 0;
	func_51();
}

void func_51()
{
	unk_0x3F4DBD0F910C454B();
	Global_16877 = 0;
	if (unk_0x12BF789190D82474())
	{
		unk_0xD92171BC6C48DB90(false);
		Global_15866 = 6;
	}
}

int func_52()
{
	if (Global_15866 != 0 || unk_0x12BF789190D82474())
	{
		return 1;
	}
	return 0;
}

void func_53(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			Global_106565.f_19091.f_22[0]++;
			func_54("Fares Completed ++ = ", Global_106565.f_19091.f_22[0]);
			break;
		
		case 1:
			Global_106565.f_19091.f_22[1]++;
			func_54("Fares Failed ++ = ", Global_106565.f_19091.f_22[1]);
			break;
		
		case 2:
			Global_106565.f_19091.f_22[2]++;
			func_54("Fares Accepted ++ ", Global_106565.f_19091.f_22[2]);
			break;
		
		case 3:
			Global_106565.f_19091.f_22[3]++;
			func_54("Fares Expired ++ ", Global_106565.f_19091.f_22[3]);
			break;
		
		case 13:
			Global_106565.f_19091.f_22[13]++;
			func_54("Passengers run ++ = ", Global_106565.f_19091.f_22[13]);
			break;
		
		case 14:
			Global_106565.f_19091.f_22[14]++;
			func_54("Passenger Forced to Pay ++ = ", Global_106565.f_19091.f_22[14]);
			break;
		
		case 4:
			if (iParam1 != 0)
			{
				if (iParam1 > Global_106565.f_19091.f_22[4])
				{
					Global_106565.f_19091.f_22[4] = iParam1;
					func_54("This distance ", iParam1);
					func_54(" is longer than current best", Global_106565.f_19091.f_22[4]);
				}
				else
				{
					func_54("Longest Distance Not Beat ", Global_106565.f_19091.f_22[4]);
				}
			}
			break;
		
		case 5:
			Global_106565.f_19091.f_22[5] = (Global_106565.f_19091.f_22[5] + iParam1);
			func_54("Total Distance w/ Passenger = ", Global_106565.f_19091.f_22[5]);
			break;
		
		case 6:
			if (iParam1 == 0)
			{
				Global_106565.f_19091.f_22[6]++;
			}
			else
			{
				Global_106565.f_19091.f_22[6] = (Global_106565.f_19091.f_22[6] + iParam1);
			}
			func_54("Wanted Levels ++ = ", Global_106565.f_19091.f_22[6]);
			break;
		
		case 7:
			if (iParam1 > 0)
			{
				Global_106565.f_19091.f_22[7] = (Global_106565.f_19091.f_22[7] + iParam1);
			}
			else
			{
				Global_106565.f_19091.f_22[7]++;
			}
			func_54("Wanted Levels Lost = ", Global_106565.f_19091.f_22[7]);
			break;
		
		case 8:
			Global_106565.f_19091.f_22[8]++;
			func_54("Taxis wrecked ++ = ", Global_106565.f_19091.f_22[8]);
			break;
		
		case 9:
			Global_106565.f_19091.f_22[9]++;
			func_54("Horn Honked ++ = ", Global_106565.f_19091.f_22[9]);
			break;
		
		case 10:
			Global_106565.f_19091.f_22[10] = (Global_106565.f_19091.f_22[10] + iParam1);
			func_54("Total Money Earned = ", Global_106565.f_19091.f_22[10]);
			break;
		
		case 11:
			Global_106565.f_19091.f_22[11] = (Global_106565.f_19091.f_22[11] + iParam1);
			func_54("Total Tips Earned = ", Global_106565.f_19091.f_22[11]);
			break;
		
		case 12:
			if (iParam1 > Global_106565.f_19091.f_22[12])
			{
				Global_106565.f_19091.f_22[12] = iParam1;
				func_54("New Highest Tip = ", Global_106565.f_19091.f_22[12]);
			}
			else
			{
				func_54("Highest Tip Not Reached = ", Global_106565.f_19091.f_22[12]);
			}
			break;
	}
}

void func_54(char* sParam0, int iParam1)
{
}

void func_55(var uParam0)
{
	func_53(0, 0);
	if (uParam0->f_411 != 9)
	{
		func_410(1);
		func_65(15, 1);
	}
	func_232(&(Global_106565.f_19091), 1024);
	if (!func_24(Global_106565.f_19091, 64))
	{
		func_56(func_63(func_64(uParam0)), 0, 0);
	}
}

void func_56(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_62((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_106565.f_10188[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_106565.f_10188[iParam0 /*12*/].f_6 == 11 || Global_106565.f_10188[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_106565.f_10188[iParam0 /*12*/].f_5 = 1;
		Global_106565.f_10188[iParam0 /*12*/].f_10 = iParam1;
		Global_106565.f_10188[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x3BDFDF06B92DF21C(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x3BDFDF06B92DF21C(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x3BDFDF06B92DF21C(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_57();
	}
}

void func_57()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_106301 = 0;
	Global_106302 = 0;
	Global_106303 = 0;
	Global_106304 = 0;
	Global_106305 = 0;
	Global_106306 = 0;
	Global_106307 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_106565.f_10188.f_3853;
	Global_106565.f_10188.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_106565.f_10188[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_106565.f_10188[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_106301++;
					fVar1 = (fVar1 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_106302++;
					fVar2 = (fVar2 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_106303++;
					fVar3 = (fVar3 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_106304++;
					fVar4 = (fVar4 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_106305++;
					fVar5 = (fVar5 + (Global_106565.f_10188[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_106306++;
					fVar6 = (fVar6 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_106307++;
					fVar7 = (fVar7 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_106284 > 0)
	{
		if (Global_106301 == Global_106284)
		{
			fVar1 = 55f;
		}
	}
	if (Global_106285 > 0)
	{
		if (Global_106302 == Global_106285)
		{
			fVar2 = 10f;
		}
	}
	if (Global_106286 > 0)
	{
		if (Global_106303 == Global_106286)
		{
			fVar3 = 0f;
		}
	}
	if (Global_106287 > 0)
	{
		if (Global_106304 == Global_106287)
		{
			fVar4 = 10f;
		}
	}
	if (Global_106288 > 0)
	{
		if (((Global_106305 == Global_106288 || (Global_106288 * 10 / Global_106305) < 41) || Global_106305 > Global_106291) || Global_106305 == Global_106291)
		{
			if (!unk_0x0E4018692D92041D(Global_106565.f_10188.f_3856, 14))
			{
				if (Global_106305 == Global_106288)
				{
					unk_0x3BDFDF06B92DF21C(joaat("num_rndevents_completed"), Global_106288, 0);
					unk_0x8950ED5730F62EE8(&(Global_106565.f_10188.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_106289 > 0)
	{
		if (Global_106306 == Global_106289)
		{
			fVar6 = 15f;
		}
	}
	if (Global_106290 > 0)
	{
		if (Global_106307 == Global_106290)
		{
			fVar7 = 5f;
		}
	}
	Global_106565.f_10188.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_106305 > Global_106291 || Global_106305 == Global_106291)
	{
		iVar9 = Global_106291;
	}
	else
	{
		iVar9 = Global_106305;
	}
	unk_0x12B6E23F244DDB0F(joaat("num_missions_completed"), Global_106301, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_missions_available"), Global_106284, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_minigames_completed"), Global_106302, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_minigames_available"), Global_106285, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_oddjobs_completed"), Global_106303, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_oddjobs_available"), Global_106286, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_rndpeople_completed"), Global_106304, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_rndpeople_available"), Global_106287, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_rndevents_available"), Global_106291, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_misc_completed"), (Global_106307 + Global_106306), 1);
	unk_0x12B6E23F244DDB0F(joaat("num_misc_available"), (Global_106290 + Global_106289), 1);
	Global_106308 = (Global_106301 * 100 / Global_106284);
	Global_106310 = ((Global_106303 + Global_106302) * 100 / (Global_106286 + Global_106285));
	Global_106309 = ((Global_106304 + iVar9) * 100 / (Global_106287 + Global_106291));
	Global_106311 = ((Global_106306 + Global_106307) * 100 / (Global_106289 + Global_106290));
	unk_0xB04A838EE49FBBAD(joaat("total_progress_made"), Global_106565.f_10188.f_3853, 1);
	unk_0x12B6E23F244DDB0F(joaat("percent_story_missions"), Global_106308, 1);
	unk_0x12B6E23F244DDB0F(joaat("percent_ambient_missions"), Global_106309, 1);
	unk_0x12B6E23F244DDB0F(joaat("percent_oddjobs"), Global_106310, 1);
	if (fVar8 > 0f && floor(fVar8) < floor(Global_106565.f_10188.f_3853))
	{
		func_61(13, floor(Global_106565.f_10188.f_3853));
	}
	if (!unk_0xDC17890B0B8B5081())
	{
		if (!Global_71590)
		{
			if (func_60() == 2 == 0 && !unk_0xB331FCEB94EB05C8())
			{
				if (unk_0xB16BC34F6CB4A57A())
				{
					Global_106299 = 0;
				}
				if (!Global_56494)
				{
					func_58();
				}
			}
		}
	}
}

int func_58()
{
	if (func_59(0))
	{
		return 0;
	}
	if (Global_93721.f_8)
	{
		if (Global_93721.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_93721.f_10 > 1)
	{
		return 0;
	}
	Global_93721.f_10++;
	return 1;
}

bool func_59(bool bParam0)
{
	if (!bParam0 && unk_0x1BCDA92AD0A7835B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x0E4018692D92041D(Global_71838, 0);
}

int func_60()
{
	return Global_25765;
}

int func_61(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x95FB4F650A03D477(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x6DD215A8A3129C26(iParam0, iParam1);
	}
	return 0;
}

int func_62(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_29();
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

int func_63(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 199;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 2:
			iVar0 = 201;
			break;
		
		case 3:
			iVar0 = 202;
			break;
		
		case 4:
			iVar0 = 203;
			break;
		
		case 5:
			iVar0 = 204;
			break;
		
		case 6:
			iVar0 = 205;
			break;
		
		case 7:
			iVar0 = 206;
			break;
		
		case 8:
			iVar0 = 207;
			break;
		
		case 9:
			break;
		
		default:
			iVar0 = 199;
			break;
	}
	return iVar0;
}

int func_64(var uParam0)
{
	return uParam0->f_411;
}

int func_65(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_66(iParam0, iParam1);
}

int func_66(int iParam0, int iParam1)
{
	if (func_78(14) && !func_77(iParam0))
	{
		return 0;
	}
	if (unk_0x321808B6A32CCA20(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_26012 != 0 && !Global_71590)
	{
		return 0;
	}
	if (func_76(&Global_4269608))
	{
		if (func_74(&Global_4269608, iParam0))
		{
			return 0;
		}
		if (func_67(&Global_4269608, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xBECC4FBAC9C8E5E7(iParam0))
		{
			return 0;
		}
		if (unk_0x321808B6A32CCA20(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_67(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x321808B6A32CCA20(iParam1))
	{
		return 0;
	}
	if (func_78(14) && !func_77(iParam1))
	{
		return 0;
	}
	if (func_74(uParam0, iParam1))
	{
		return 0;
	}
	if (func_73(uParam0) < 0f)
	{
		func_72(uParam0, 0);
	}
	func_70(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_68(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_68(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x321808B6A32CCA20(iParam1))
	{
		return 0;
	}
	if (func_78(14) && !func_77(iParam1))
	{
		return 0;
	}
	if (func_74(uParam0, iParam1))
	{
		return 0;
	}
	if (func_73(uParam0) < 0f)
	{
		func_72(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_69(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_69(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_70(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_71(uParam0, iVar0);
		iVar0++;
	}
	func_72(uParam0, (Global_4269607 - 0.5f));
}

void func_71(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_72(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_73(var uParam0)
{
	return uParam0->f_80;
}

bool func_74(var uParam0, int iParam1)
{
	return func_75(uParam0, iParam1) != -1;
}

int func_75(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_76(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_77(int iParam0)
{
	switch (iParam0)
	{
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
		
		default:
	}
	return 0;
}

bool func_78(int iParam0)
{
	return Global_36425 == iParam0;
}

int func_79(var uParam0, int iParam1)
{
	switch (iLocal_160)
	{
		case 0:
			if (!func_52() && func_387(uParam0, 0) > 1f)
			{
				if (func_35())
				{
					unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), true, 0);
				}
				func_112(uParam0);
				func_22(&(Global_106565.f_19091), 4096);
				func_109(iParam1, "TAXI_FARE_TITLE", uParam0->f_50, uParam0->f_56, ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105), uParam0->f_105, func_111(uParam0), "TAXI_FARE_MID", 4000, 1);
				iParam1->f_1 = 4000;
				unk_0x0F8EAEEC97DDBCB3(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", false);
				func_108(1);
				iLocal_160 = 6;
			}
			break;
		
		case 6:
			if (!func_102(iParam1, 0))
			{
				func_80(uParam0);
				func_264(uParam0, 0, 0, 0);
				func_108(0);
				iLocal_160 = 7;
				return 1;
			}
			break;
	}
	return 0;
}

void func_80(var uParam0)
{
	int iVar0;
	
	iVar0 = ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105);
	if (iVar0 > 0)
	{
		func_81(func_100(), 21, iVar0, 0, 0);
		func_53(10, iVar0);
		iLocal_57[0] = iVar0;
	}
}

void func_81(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_106565.f_28044[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_106565.f_28044[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_82(Global_106565.f_28044[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		unk_0x75D54ED6C1AD1642(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x12B6E23F244DDB0F(iVar1, iVar0, 1);
	}
}

int func_82(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_99();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_98(99, 1);
					func_97(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_97(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_97(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_96(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_91(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_97(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_97(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_97(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_91(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_97(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_97(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_97(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_97(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_97(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_97(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_97(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_97(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_97(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x535C9C52117DA0AD())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_97(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_97(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_97(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_97(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_97(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_97(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_91(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_97(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_97(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_97(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_97(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_97(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_97(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_90(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_98(95, iParam3);
					break;
				
				case 1:
					func_98(97, iParam3);
					break;
				
				case 2:
					func_98(96, iParam3);
					break;
			}
			func_98(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor((fVar0 * to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_85(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_85(iVar1);
	}
	iVar5 = (Global_53668[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_53668[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_53668[iVar2] = 2147483647;
				}
				else
				{
					Global_53668[iVar2] = (Global_53668[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_97(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_97(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_97(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_53668[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_53668[iVar2];
			Global_53668[iVar2] = (Global_53668[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_106565.f_20558.f_233[iVar2 /*69*/].f_2[Global_106565.f_20558.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_106565.f_20558.f_233[iVar2 /*69*/].f_2[Global_106565.f_20558.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_106565.f_20558.f_233[iVar2 /*69*/].f_2[Global_106565.f_20558.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_106565.f_20558.f_233[iVar2 /*69*/]++;
		Global_106565.f_20558.f_233[iVar2 /*69*/].f_1++;
		if (Global_106565.f_20558.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_106565.f_20558.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_84(iParam0);
	if (Global_36425 == 15)
	{
		func_83(0);
	}
	return 1;
}

void func_83(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53676[iVar0 /*3*/][0] = Global_106565.f_20558[iVar0];
		Global_53676.f_31[iVar0 /*3*/][0] = Global_106565.f_20558.f_11[iVar0];
		Global_53676.f_62[iVar0 /*3*/][0] = Global_106565.f_20558.f_22[iVar0];
		Global_53676.f_93[iVar0 /*3*/][0] = Global_106565.f_20558.f_33[iVar0];
		Global_53676.f_124[iVar0 /*3*/][0] = Global_106565.f_20558.f_44[iVar0];
		Global_53676.f_155[iVar0 /*3*/][0] = Global_106565.f_20558.f_55[iVar0];
		Global_53676.f_186[iVar0 /*3*/][0] = Global_106565.f_20558.f_66[iVar0];
		Global_53676.f_217[iVar0 /*3*/][0] = Global_106565.f_20558.f_77[iVar0];
		Global_53676.f_248[iVar0 /*3*/][0] = Global_106565.f_20558.f_88[iVar0];
		if (!bParam0)
		{
			Global_53676[iVar0 /*3*/][1] = Global_106565.f_20558[iVar0];
			Global_53676.f_31[iVar0 /*3*/][1] = Global_106565.f_20558.f_11[iVar0];
			Global_53676.f_62[iVar0 /*3*/][1] = Global_106565.f_20558.f_22[iVar0];
			Global_53676.f_93[iVar0 /*3*/][1] = Global_106565.f_20558.f_33[iVar0];
			Global_53676.f_124[iVar0 /*3*/][1] = Global_106565.f_20558.f_44[iVar0];
			Global_53676.f_155[iVar0 /*3*/][1] = Global_106565.f_20558.f_55[iVar0];
			Global_53676.f_186[iVar0 /*3*/][1] = Global_106565.f_20558.f_66[iVar0];
			Global_53676.f_217[iVar0 /*3*/][1] = Global_106565.f_20558.f_77[iVar0];
			Global_53676.f_248[iVar0 /*3*/][1] = Global_106565.f_20558.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_84(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_53668[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x12B6E23F244DDB0F(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x12B6E23F244DDB0F(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x12B6E23F244DDB0F(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_85(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_62(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_62(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_62(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_62(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_88(8269, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_88(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_88(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_88(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_88(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_88(8274, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!unk_0xB331FCEB94EB05C8())
	{
		if (unk_0x0E4018692D92041D(Global_106565.f_20558.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xCE689A8E8C42ED78(&(Global_106565.f_20558.f_471), iParam0);
		}
	}
	else if (unk_0x0E4018692D92041D(Global_106565.f_20558.f_471, iParam0) || unk_0x0E4018692D92041D(Global_2097152[func_87() /*10778*/].f_6165.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xCE689A8E8C42ED78(&(Global_106565.f_20558.f_471), iParam0);
		unk_0xCE689A8E8C42ED78(&(Global_2097152[func_87() /*10778*/].f_6165.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x1F85AD4B26B92795("COUP_RED");
		unk_0xFA6BEE2B1507FF1E(func_86(iParam0));
		unk_0xDE1BA36E3BACF7C1(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_86(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
		
		default:
	}
	return "";
}

int func_87()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_88(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_89(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x12B6E23F244DDB0F(iVar0, iParam1, iParam3);
	}
}

int func_89(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_29();
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

void func_90(int iParam0)
{
	func_98(93, iParam0);
	func_98(29, iParam0);
	func_98(30, iParam0);
}

bool func_91(int iParam0)
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
	
	if (iParam0 == 8)
	{
		return func_93(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_93(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_93(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_93(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0xEF4753434B24594D();
		iVar1 = func_92(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0xEF4753434B24594D();
		iVar3 = func_92(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0xEF4753434B24594D();
		iVar5 = func_92(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0xEF4753434B24594D();
		iVar7 = func_92(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0xEF4753434B24594D();
		iVar9 = func_92(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0xEF4753434B24594D();
		iVar11 = func_92(8274, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!unk_0xB331FCEB94EB05C8())
	{
		return unk_0x0E4018692D92041D(Global_106565.f_20558.f_471, iParam0);
	}
	return unk_0x0E4018692D92041D(Global_2097152[func_87() /*10778*/].f_6165.f_10, iParam0);
}

int func_92(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_89(iParam1)];
	if (unk_0x75D54ED6C1AD1642(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_93(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_29();
	}
	iVar1 = func_95(iParam0, iParam1);
	uVar2 = func_94(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xE35D1055B69473FB(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_94(int iParam0)
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

int func_95(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_29();
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

int func_96(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x321808B6A32CCA20(27))
	{
		return 0;
	}
	if (unk_0x75D54ED6C1AD1642(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x75D54ED6C1AD1642(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x75D54ED6C1AD1642(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x75D54ED6C1AD1642(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x12B6E23F244DDB0F(joaat("num_cash_spent"), iVar1, 1);
		func_61(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_65(27, 1);
	return 1;
}

void func_97(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x75D54ED6C1AD1642(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x12B6E23F244DDB0F(iParam0, iVar0, 1);
}

void func_98(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_52236[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0xB331FCEB94EB05C8())
	{
		return;
	}
	if (Global_52236[iParam0 /*7*/])
	{
		unk_0x75D54ED6C1AD1642(Global_52236[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x12B6E23F244DDB0F(Global_52236[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_99()
{
	int iVar0;
	
	if (unk_0x40863EBAEA2F03D7())
	{
		unk_0x75D54ED6C1AD1642(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_53668[0] == iVar0)
		{
			Global_53668[0] = iVar0;
		}
		unk_0x75D54ED6C1AD1642(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_53668[1] == iVar0)
		{
			Global_53668[1] = iVar0;
		}
		unk_0x75D54ED6C1AD1642(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_53668[2] == iVar0)
		{
			Global_53668[2] = iVar0;
		}
	}
}

int func_100()
{
	func_101();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_101()
{
	int iVar0;
	
	if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
	{
		if (func_4(Global_106565.f_2357.f_539.f_4321) != unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()))
		{
			iVar0 = func_3(unk_0x33CD235DF1E6A94E());
			if (func_5(iVar0) && (!func_78(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_5(Global_106565.f_2357.f_539.f_4321))
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

int func_102(var uParam0, int iParam1)
{
	if (!func_16(&(uParam0->f_2)))
	{
		func_106(&(uParam0->f_2));
	}
	unk_0x581AE7724ACAD410(14);
	unk_0xFF524AE40FB6301A(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0x833B1A3D9F713E03(2, 201) || uParam0->f_8)
		{
			if (!func_16(&(uParam0->f_5)))
			{
				func_106(&(uParam0->f_5));
				func_105(uParam0, 1051260355);
			}
		}
		if (func_16(&(uParam0->f_5)))
		{
			if (func_104(&(uParam0->f_5)) > 0.33f)
			{
				func_103(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_104(&(uParam0->f_2)) * 1000f) > to_float(uParam0->f_1)
	{
		if (!func_16(&(uParam0->f_5)))
		{
			func_106(&(uParam0->f_5));
			func_105(uParam0, 1051260355);
		}
		else if (func_104(&(uParam0->f_5)) > 0.33f)
		{
			func_103(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_103(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_104(int iParam0)
{
	if (func_16(iParam0))
	{
		if (func_15(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_14(unk_0x0E4018692D92041D(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

void func_105(var uParam0, float fParam1)
{
	unk_0xBB698266C5FDF0A7(*uParam0, "SHARD_ANIM_OUT");
	unk_0x4D9DA18AB3C2A466(uParam0->f_9);
	unk_0x8DAB5B12D7B9AD29(fParam1);
	unk_0x818901B332D5541D();
}

void func_106(int iParam0)
{
	func_107(iParam0, 0f);
}

void func_107(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_14(unk_0x0E4018692D92041D(*iParam0, 4)) - fParam1);
	unk_0x8950ED5730F62EE8(iParam0, 1);
	unk_0xCE689A8E8C42ED78(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_108(int iParam0)
{
	Global_71850 = iParam0;
	Global_71851 = iParam0;
}

void func_109(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9)
{
	unk_0xBB698266C5FDF0A7(*uParam0, func_110());
	unk_0x713FEBE56D2BD403("STRING");
	unk_0x75D3F9044123D4F9(iParam9);
	unk_0xFA6BEE2B1507FF1E(iParam1);
	unk_0x36F3AA9FFAAF8606();
	unk_0x713FEBE56D2BD403(sParam7);
	unk_0xE800DC85FDF60F85(iParam2);
	unk_0xE800DC85FDF60F85(iParam3);
	unk_0xFA6BEE2B1507FF1E(iParam6);
	unk_0xE800DC85FDF60F85(iParam5);
	unk_0xE800DC85FDF60F85(iParam4);
	unk_0x36F3AA9FFAAF8606();
	unk_0x818901B332D5541D();
	func_106(&(uParam0->f_2));
	uParam0->f_1 = iParam8;
	uParam0->f_9 = 1;
}

char* func_110()
{
	if (unk_0xB331FCEB94EB05C8())
	{
		return "SHOW_COND_SHARD_MESSAGE";
	}
	return "SHOW_SHARD_MIDSIZED_MESSAGE";
}

char* func_111(var uParam0)
{
	char* sVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			sVar0 = "TAXI_SC_BN_02";
			break;
		
		case 1:
			sVar0 = "TAXI_SC_BN_01";
			break;
		
		case 2:
			sVar0 = "TAXI_SC_BN_03";
			break;
		
		case 3:
			sVar0 = "TAXI_SC_BN_12";
			break;
		
		case 4:
			sVar0 = "TAXI_SC_BN_08";
			break;
		
		case 5:
			sVar0 = "TAXI_SC_BN_07";
			break;
		
		case 6:
			sVar0 = "TAXI_SC_KO";
			break;
		
		case 7:
			sVar0 = "TAXI_SC_BN_10";
			break;
		
		case 8:
			sVar0 = "TAXI_SC_BN_04";
			break;
	}
	return sVar0;
}

void func_112(var uParam0)
{
	int iVar0;
	
	Local_161.f_1 = to_float(uParam0->f_50);
	Local_161.f_2 = to_float(uParam0->f_56);
	func_53(11, uParam0->f_56);
	func_53(12, uParam0->f_56);
	iLocal_57[1] = uParam0->f_56;
	iLocal_57[2] = uParam0->f_56;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_60)
	{
		Local_161.f_4[iVar0 /*3*/] = { uParam0->f_60[iVar0 /*3*/] };
		if (unk_0x0E4018692D92041D(Local_161.f_4[iVar0 /*3*/], 2))
		{
			Local_161.f_3 = (Local_161.f_3 + IntToFloat(uParam0->f_60[iVar0 /*3*/].f_1));
		}
		iVar0++;
	}
	Local_161 = uParam0->f_411;
	Local_161.f_20 = ((Local_161.f_1 + Local_161.f_2) + Local_161.f_3);
}

float func_113(int iParam0, vector3 vParam1, bool bParam2)
{
	if (unk_0xD62C4419A41F106A(iParam0, 0))
	{
		return -1f;
	}
	return unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(iParam0, true), vParam1, bParam2);
}

int func_114(var uParam0, bool bParam1)
{
	if (!unk_0xD62C4419A41F106A(uParam0->f_3, 0))
	{
		if (func_124(uParam0) && func_120(uParam0, 1, 1084227584))
		{
			if (bParam1)
			{
				if (func_119(uParam0, 2097152))
				{
					func_115(uParam0);
				}
			}
			else
			{
				func_115(uParam0);
			}
		}
		else if (!func_124(uParam0))
		{
			if (bParam1)
			{
				if (func_119(uParam0, 2097152))
				{
					if (unk_0xD76D6BCC14B95CE1(uParam0->f_3, 451360105) == 7)
					{
						return 1;
					}
				}
			}
			else if (unk_0xD76D6BCC14B95CE1(uParam0->f_3, 451360105) == 7)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_115(var uParam0)
{
	vector3 vVar0;
	
	if (func_118(uParam0->f_29))
	{
		vVar0 = { uParam0->f_17 };
	}
	else
	{
		vVar0 = { uParam0->f_29 };
	}
	func_116(uParam0, vVar0);
}

void func_116(var uParam0, vector3 vParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (unk_0x91D5C8283D19AF49(uParam0->f_4, 0))
	{
		if (!unk_0xD62C4419A41F106A(uParam0->f_3, 0) && unk_0xEE984ED4E4A374BE(uParam0->f_3, uParam0->f_4))
		{
			vVar0 = { unk_0x2CA911E7569D12EA(uParam0->f_4, -1.78774f, -1.62399f, -0.6206f) };
			vVar1 = { unk_0x2CA911E7569D12EA(uParam0->f_4, 1.78498f, -1.24105f, -0.6422f) };
			if (func_117(uParam0->f_3, uParam0->f_4) == 0)
			{
				unk_0x0FF06FD8DEB3AB01(uParam0->f_3, uParam0->f_4, 512);
			}
			else if (unk_0x16E00F066AFFEA0D(vVar0, vParam1, false) < unk_0x16E00F066AFFEA0D(vVar1, vParam1, false) && unk_0x782B99DB55846C95(uParam0->f_3, uParam0->f_4, 1, 0, false))
			{
				unk_0x0FF06FD8DEB3AB01(uParam0->f_3, uParam0->f_4, 131072);
			}
			else if (unk_0x16E00F066AFFEA0D(vVar0, vParam1, false) >= unk_0x16E00F066AFFEA0D(vVar1, vParam1, false) && unk_0x782B99DB55846C95(uParam0->f_3, uParam0->f_4, 2, 0, false))
			{
				unk_0x0FF06FD8DEB3AB01(uParam0->f_3, uParam0->f_4, 262144);
			}
			else
			{
				unk_0x0FF06FD8DEB3AB01(uParam0->f_3, uParam0->f_4, 0);
			}
		}
	}
}

int func_117(int iParam0, int iParam1)
{
	if (!unk_0xD62C4419A41F106A(iParam0, 0) && !unk_0xD62C4419A41F106A(iParam1, 0))
	{
		if (unk_0xEE984ED4E4A374BE(iParam0, iParam1))
		{
			if (unk_0x7BDC41A7CA0C77A2(iParam1, -1, 0) == iParam0)
			{
				return -1;
			}
			if (unk_0x7BDC41A7CA0C77A2(iParam1, 0, 0) == iParam0)
			{
				return 0;
			}
			if (unk_0x7BDC41A7CA0C77A2(iParam1, 1, 0) == iParam0)
			{
				return 1;
			}
			if (unk_0x7BDC41A7CA0C77A2(iParam1, 2, 0) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

int func_118(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_119(var uParam0, int iParam1)
{
	if (iParam1 != 1073741824)
	{
		return (func_24(uParam0->f_81, iParam1) && !func_52());
	}
	return func_52();
}

int func_120(var uParam0, bool bParam1, float fParam2)
{
	if (unk_0x91D5C8283D19AF49(uParam0->f_4, 0))
	{
		if (unk_0x10930B9CAD4111C2(uParam0->f_2, uParam0->f_4, 0))
		{
			if (func_46(1))
			{
				func_44(0);
			}
			if (func_35())
			{
				func_123();
				return 1;
			}
			else if (func_121(uParam0->f_4, fParam2, 1, 1056964608, 0, 1, 0))
			{
				if (bParam1)
				{
					unk_0x3449EA232F9B8EAD(unk_0x3EE1295CEFBEFED4(), false, 256);
				}
				else
				{
					unk_0x3449EA232F9B8EAD(unk_0x3EE1295CEFBEFED4(), false, 0);
				}
			}
			unk_0xA56208AB5F9EC61A(uParam0->f_4, 1);
		}
	}
	return 0;
}

int func_121(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_122(iParam0);
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

void func_122(int iParam0)
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

void func_123()
{
	if (unk_0xB73BBE22563E911A(unk_0x95B959F18401C09A()))
	{
		unk_0x111AE40E9C93AF52(unk_0x95B959F18401C09A());
	}
}

int func_124(var uParam0)
{
	if (unk_0x91D5C8283D19AF49(uParam0->f_4, 0))
	{
		if (!unk_0xBC2FC12AD0FBF72E(uParam0->f_3))
		{
			if (unk_0x10930B9CAD4111C2(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_125(var uParam0)
{
	if (uParam0->f_56 >= uParam0->f_59)
	{
		uParam0->f_56 = ceil((IntToFloat(uParam0->f_50) * 0.4f));
	}
	else if (uParam0->f_56 < uParam0->f_59 && uParam0->f_56 >= uParam0->f_58)
	{
		uParam0->f_56 = ceil((IntToFloat(uParam0->f_50) * 0.15f));
	}
	else
	{
		uParam0->f_56 = 0;
	}
	if (!func_24(uParam0->f_55, 1))
	{
		func_232(&(uParam0->f_55), 1);
	}
}

void func_126(var uParam0)
{
	func_128();
	unk_0xD362430CD61A9B08();
	if (uParam0->f_56 < uParam0->f_58)
	{
		if (uParam0->f_411 == 0)
		{
			func_195(uParam0, 105, 1, 0, 0);
		}
		else
		{
			func_195(uParam0, 103, 1, 0, 0);
		}
		func_127(1);
	}
	else if (uParam0->f_56 >= uParam0->f_59)
	{
		func_195(uParam0, 101, 1, 0, 0);
	}
	else
	{
		func_195(uParam0, 102, 1, 0, 0);
	}
	func_264(uParam0, 16, 4f, 0);
}

void func_127(int iParam0)
{
	Global_105275.f_221 = iParam0;
}

void func_128()
{
	Global_14732 = 0;
	func_129();
}

void func_129()
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

void func_130(var uParam0)
{
	float fVar0;
	
	fVar0 = uParam0->f_41;
	fVar0 = func_131(fVar0);
	iLocal_57[4] = ceil(fVar0);
	iLocal_57[5] = ceil(fVar0);
	func_53(4, ceil(fVar0));
	func_53(5, ceil(fVar0));
	uParam0->f_50 = ceil((fVar0 * 100f));
}

float func_131(float fParam0)
{
	return (fParam0 * 0.0006213712f);
}

void func_132(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xC2FDDE313D5A5398(uParam0->f_73[iVar0]))
		{
			unk_0x91F3E4311D34B364(uParam0->f_73[iVar0], 0);
		}
		iVar0++;
	}
	iLocal_245 = 0;
}

void func_133(var uParam0, int iParam1)
{
	if (iParam1 < 5)
	{
		unk_0x8950ED5730F62EE8(&(uParam0->f_60[iParam1 /*3*/]), 2);
		uParam0->f_105 = (uParam0->f_105 + uParam0->f_60[iParam1 /*3*/].f_1);
	}
}

bool func_134(var uParam0)
{
	return ((uParam0->f_55[0] && uParam0->f_55[1]) && uParam0->f_55[2]);
}

void func_135(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 = 0;
	}
	else
	{
		*uParam0 = -1;
	}
	if (iParam1 > -1)
	{
		uParam0->f_27 = iParam1;
	}
}

int func_136(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	func_174(uParam0, uParam2, uParam1);
	if (func_173(uParam0) >= 14)
	{
		if (iLocal_250)
		{
			if (((func_387(uParam0, 11) > 20f && !func_52()) && !unk_0xC4B7D5901EDA35B5()) && !bLocal_248)
			{
				bLocal_248 = true;
			}
		}
	}
	if (uParam1->f_90 < 2)
	{
		if (uParam1->f_65 && !iLocal_250)
		{
			func_167(uParam0, uParam1, 0, uParam1->f_65);
			uParam1->f_65 = 0;
		}
		else
		{
			func_167(uParam0, uParam1, 0, 0);
		}
		if (uParam1->f_66 && uParam1->f_90 < 1)
		{
			if (!unk_0xBC2FC12AD0FBF72E((*uParam1)[uParam1->f_95]) && unk_0xF0D230FB550CD6EB((*uParam1)[uParam1->f_95], 0))
			{
				if (!iLocal_254)
				{
					if (func_166(uParam1[uParam1->f_95], &(uParam1->f_94)))
					{
						func_165(&(uParam1->f_95));
					}
				}
				else if (!uParam1->f_72)
				{
					unk_0xED68CDDDE25A144E((*uParam1)[uParam1->f_95]);
					unk_0x7D575FC8F42508D8((*uParam1)[uParam1->f_95], 500);
					uParam1->f_72 = 1;
				}
			}
		}
	}
	else if (!uParam1->f_62)
	{
		func_167(uParam0, uParam1, 1, 0);
	}
	if ((((unk_0xBC2FC12AD0FBF72E((*uParam1)[0]) || unk_0xBC2FC12AD0FBF72E((*uParam1)[1])) || unk_0xBC2FC12AD0FBF72E((*uParam1)[2])) || unk_0x91BBD269506D61D2((*uParam1)[1], uParam0->f_4, 1)) || unk_0x91BBD269506D61D2((*uParam1)[2], uParam0->f_4, 1))
	{
		uParam0->f_415 = 14;
		func_297(uParam0, "Passenger injured.", 14);
	}
	if (!func_151(uParam0, uParam1))
	{
		if (!unk_0x782B99DB55846C95(uParam0->f_2, uParam0->f_4, -1, 0, false))
		{
			unk_0x07C339D4328CA16C((*uParam1)[0], 0, 0);
			bLocal_252 = true;
			iLocal_253 = 0;
		}
	}
	else
	{
		if (bLocal_252)
		{
			if (unk_0x67FFBB75D2430704(uParam0->f_4, 0, 0))
			{
				if (!iLocal_253)
				{
					unk_0xC838CE9837D0ABAF((*uParam1)[0], uParam0->f_4, 20000, 0, 2f, 1, 0);
					iLocal_253 = 1;
				}
				if (func_10(uParam0->f_4, (*uParam1)[0], 1) > 40f)
				{
					func_297(uParam0, "Passenger left behind.", 8);
				}
			}
			if (unk_0x7BDC41A7CA0C77A2(uParam0->f_4, 0, 0) == (*uParam1)[0])
			{
				func_186(uParam1);
				bLocal_252 = false;
			}
		}
		func_148(uParam0, 1097859072, 1117782016);
		func_147(uParam0, &(uParam0->f_43));
		if (!bLocal_252 && !unk_0x10930B9CAD4111C2((*uParam1)[0], uParam0->f_4, 0))
		{
			func_297(uParam0, "Passenger left car.", 9);
		}
		switch (uParam1->f_90)
		{
			case 0:
				if (!uParam1->f_51[2])
				{
					if (func_113(uParam0->f_4, uParam1->f_16[2 /*3*/], 1) < 150f && !iLocal_254)
					{
						func_195(uParam0, 99, 1, 0, 0);
						iLocal_254 = 1;
					}
					if (unk_0x18FB647D79B09657(uParam0->f_4, uParam1->f_16[2 /*3*/], 5f, 5f, 2f, !uParam0->f_140, true, 0))
					{
						if (func_120(uParam0, 1, 4f))
						{
							if (!unk_0xBC2FC12AD0FBF72E((*uParam1)[2]))
							{
								unk_0x1ABDB383C83A336A(&(uParam1->f_36[2]));
								func_128();
								if (uParam1->f_95 == 2)
								{
									unk_0xED68CDDDE25A144E((*uParam1)[2]);
								}
								unk_0xA7A57E7757ED035E(&iVar0);
								unk_0x99414FB2D30425C1(&iVar0);
								unk_0x07C339D4328CA16C(0, 0, 0);
								unk_0x7E268975AF5EA74F(0, -98.0071f, -851.2611f, 40.9833f, 1f, 30000, 1048576000, 0, 1193033728);
								unk_0x7E268975AF5EA74F(0, -83.1601f, -835.3889f, 39.5744f, 1f, 20000, 1048576000, 0, 1193033728);
								unk_0xF6D940C3CF409665(0, "WORLD_HUMAN_STAND_MOBILE", 0, 0);
								unk_0xC734F59A13D39AEF(iVar0);
								unk_0x13A2D602CD10CBAC((*uParam1)[2], iVar0);
								unk_0xA7A57E7757ED035E(&iVar0);
								if (func_387(uParam0, 6) < fLocal_255)
								{
									uParam1->f_55[2] = 1;
									func_195(uParam0, 38, 1, 0, 0);
									uParam0->f_56 += 3;
								}
								else
								{
									uParam1->f_55[2] = 0;
									func_195(uParam0, 39, 1, 0, 0);
									uParam0->f_56 = (uParam0->f_56 - 3);
								}
								uParam1->f_90++;
								func_145(uParam0, 6);
							}
						}
					}
				}
				break;
			
			case 1:
				if ((!func_143((*uParam1)[2], uParam0->f_4) && func_387(uParam0, 20) > 1f) && !uParam1->f_51[2])
				{
					func_132(uParam1);
					uParam1->f_51[2] = 1;
					uParam0->f_26 = { 193.102f, -220.0569f, 52.8647f };
					uParam0->f_34 = 250.7f;
					unk_0x3449EA232F9B8EAD(unk_0x3EE1295CEFBEFED4(), true, 0);
				}
				else if (!func_140(uParam0) && unk_0x5A8ABDA4992DA968(unk_0x3EE1295CEFBEFED4()))
				{
					func_138(uParam3);
					func_135(uParam2, -1, 0);
					func_264(uParam0, 6, 0, 0);
					func_264(uParam0, 11, 0, 0);
					func_195(uParam0, 40, 1, 0, 0);
					if (!unk_0xE38E3CF1625A4145(uParam1->f_36[1]))
					{
						func_186(uParam1);
					}
					iLocal_254 = 0;
					uParam1->f_90++;
				}
				break;
			
			case 2:
				if (!uParam1->f_51[1])
				{
					if (func_113(uParam0->f_4, uParam1->f_16[1 /*3*/], 1) < 175f && !iLocal_254)
					{
						func_195(uParam0, 99, 1, 0, 0);
						iLocal_254 = 1;
					}
					if (unk_0x18FB647D79B09657(uParam0->f_4, uParam1->f_16[1 /*3*/], 5f, 5f, 2f, !uParam0->f_140, true, 0))
					{
						if (func_120(uParam0, 1, 4f))
						{
							if (!unk_0xBC2FC12AD0FBF72E((*uParam1)[1]))
							{
								func_128();
								unk_0x1ABDB383C83A336A(&(uParam1->f_36[1]));
								func_137(&(uParam0->f_4), uParam1[1], uParam1->f_26[1 /*3*/]);
								if (func_387(uParam0, 6) < fLocal_256)
								{
									uParam1->f_55[1] = 1;
									func_195(uParam0, 41, 1, 0, 0);
									uParam0->f_56 += 2;
								}
								else
								{
									uParam1->f_55[1] = 0;
									func_195(uParam0, 42, 1, 0, 0);
									uParam0->f_56 = (uParam0->f_56 - 2);
								}
								uParam1->f_90++;
								func_145(uParam0, 6);
							}
						}
					}
				}
				break;
			
			case 3:
				if ((!func_143((*uParam1)[1], uParam0->f_4) && func_387(uParam0, 20) > 1f) && !uParam1->f_51[1])
				{
					uParam1->f_51[1] = 1;
					uParam0->f_26 = { 51.4688f, -1302.042f, 28.1383f };
					uParam0->f_34 = 216.5f;
					unk_0x3449EA232F9B8EAD(unk_0x3EE1295CEFBEFED4(), true, 0);
				}
				else if (!func_140(uParam0) && unk_0x5A8ABDA4992DA968(unk_0x3EE1295CEFBEFED4()))
				{
					func_138(uParam3);
					func_135(uParam2, -1, 0);
					func_264(uParam0, 6, 0, 0);
					func_264(uParam0, 11, 0, 0);
					func_195(uParam0, 43, 1, 0, 0);
					iLocal_254 = 0;
					if (!unk_0xE38E3CF1625A4145(uParam1->f_36[0]))
					{
						func_186(uParam1);
					}
					uParam1->f_90++;
				}
				break;
			
			case 4:
				if (!uParam1->f_51[0])
				{
					if (func_113(uParam0->f_4, uParam1->f_16[0 /*3*/], 1) < 100f && !iLocal_254)
					{
						func_195(uParam0, 99, 1, 0, 0);
						iLocal_254 = 1;
					}
					if (unk_0x18FB647D79B09657(uParam0->f_4, uParam1->f_16[0 /*3*/], 5f, 5f, 2f, !uParam0->f_140, true, 0))
					{
						if (func_120(uParam0, 1, 4f))
						{
							unk_0x1ABDB383C83A336A(&(uParam1->f_36[0]));
							uParam1->f_51[0] = 1;
							func_128();
							if (func_387(uParam0, 6) < fLocal_257)
							{
								uParam1->f_55[0] = 1;
								uParam0->f_56 += 2;
							}
							else
							{
								uParam1->f_55[0] = 0;
								uParam0->f_56 = (uParam0->f_56 - 2);
							}
							return 1;
						}
					}
				}
				break;
			}
	}
	return 0;
}

void func_137(var uParam0, var uParam1, vector3 vParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	
	if (unk_0x91D5C8283D19AF49(*uParam0, 0))
	{
		if (!unk_0xD62C4419A41F106A(*uParam1, 0))
		{
			vVar0 = { unk_0x2CA911E7569D12EA(*uParam0, -1.78774f, -1.62399f, -0.6206f) };
			vVar1 = { unk_0x2CA911E7569D12EA(*uParam0, 1.78498f, -1.24105f, -0.6422f) };
			if (unk_0x16E00F066AFFEA0D(vVar0, vParam2, false) < unk_0x16E00F066AFFEA0D(vVar1, vParam2, false) && unk_0x782B99DB55846C95(*uParam1, *uParam0, 1, 0, false))
			{
				iVar2 = 131072;
			}
			else if (unk_0x16E00F066AFFEA0D(vVar0, vParam2, false) >= unk_0x16E00F066AFFEA0D(vVar1, vParam2, false) && unk_0x782B99DB55846C95(*uParam1, *uParam0, 2, 0, false))
			{
				iVar2 = 262144;
			}
			else
			{
				iVar2 = 16;
			}
			vVar4 = { 312.9961f, -274.4479f, 52.92882f };
			if (iVar2 == 16)
			{
				unk_0xA7A57E7757ED035E(&iVar3);
				unk_0x99414FB2D30425C1(&iVar3);
				unk_0x07C339D4328CA16C(0, 0, 0);
				unk_0x7E268975AF5EA74F(0, vVar4, 1f, 20000, 1048576000, 0, 1193033728);
				unk_0xA9128AA30F3036C7(0, vVar4, 5f, 0);
				unk_0x7E268975AF5EA74F(0, vParam2, 1f, 20000, 1048576000, 0, 1193033728);
				unk_0xC734F59A13D39AEF(iVar3);
				unk_0x13A2D602CD10CBAC(*uParam1, iVar3);
			}
			else
			{
				unk_0xA7A57E7757ED035E(&iVar3);
				unk_0x99414FB2D30425C1(&iVar3);
				unk_0x0FF06FD8DEB3AB01(0, *uParam0, iVar2);
				unk_0x7E268975AF5EA74F(0, vVar4, 1f, 20000, 1048576000, 0, 1193033728);
				unk_0xA9128AA30F3036C7(0, vVar4, 5f, 0);
				unk_0x7E268975AF5EA74F(0, vParam2, 1f, 20000, 1048576000, 0, 1193033728);
				unk_0xC734F59A13D39AEF(iVar3);
				unk_0x13A2D602CD10CBAC(*uParam1, iVar3);
			}
		}
	}
}

void func_138(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(uParam0[iVar0 /*8*/])->f_6 = 0;
		(uParam0[iVar0 /*8*/])->f_7 = 0;
		StringCopy(uParam0[iVar0 /*8*/], func_139(), 24);
		iVar0++;
	}
	unk_0xD362430CD61A9B08();
	func_50();
}

var func_139()
{
	var uVar0;
	
	return uVar0;
}

int func_140(var uParam0)
{
	if (func_52())
	{
		return 1;
	}
	if (func_142(uParam0, 17))
	{
		return 1;
	}
	if (func_142(uParam0, 14))
	{
		return 1;
	}
	if (func_141(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_141(var uParam0)
{
	return uParam0->f_110;
}

bool func_142(var uParam0, int iParam1)
{
	return func_16(&(uParam0->f_146[iParam1 /*3*/]));
}

int func_143(int iParam0, int iParam1)
{
	if (func_144(iParam0, iParam1))
	{
		if (unk_0x10930B9CAD4111C2(iParam0, iParam1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_144(int iParam0, int iParam1)
{
	if (unk_0x91D5C8283D19AF49(iParam1, 0))
	{
		if (!unk_0xBC2FC12AD0FBF72E(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_145(var uParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (!func_15(&(uParam0->f_146[iVar0 /*3*/])))
			{
				func_146(&(uParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (func_16(&(uParam0->f_146[iParam1 /*3*/])))
	{
		if (!func_15(&(uParam0->f_146[iParam1 /*3*/])))
		{
			func_146(&(uParam0->f_146[iParam1 /*3*/]));
		}
	}
}

void func_146(int iParam0)
{
	if (func_16(iParam0))
	{
		if (!func_15(iParam0))
		{
			iParam0->f_2 = (func_14(unk_0x0E4018692D92041D(*iParam0, 4)) - iParam0->f_1);
			unk_0x8950ED5730F62EE8(iParam0, 2);
		}
	}
}

void func_147(var uParam0, var uParam1)
{
	unk_0x1C6F24ECA1A88E67(uParam0->f_428, uParam1, -1);
	uParam0->f_41 = (*uParam1 - uParam0->f_42);
}

void func_148(var uParam0, float fParam1, float fParam2)
{
	if (func_124(uParam0) && func_24(uParam0->f_44, 4))
	{
		if ((unk_0x61DFE32FB87BC784(uParam0->f_4) || unk_0x8BB475EA09C9A0EB(uParam0->f_4) < 3f) && func_150(uParam0))
		{
			if (!func_142(uParam0, 2))
			{
				func_189(uParam0, 2);
			}
			else if (func_124(uParam0))
			{
				if (func_387(uParam0, 2) > fParam1 && !func_142(uParam0, 14))
				{
					if (func_37())
					{
						func_195(uParam0, 48, 1, 0, 0);
					}
					else
					{
						func_195(uParam0, 48, 1, 0, 0);
					}
					func_264(uParam0, 2, 0, 0);
					if (func_142(uParam0, 10))
					{
						func_264(uParam0, 10, 0, 0);
					}
				}
				if (!func_142(uParam0, 3))
				{
					func_264(uParam0, 3, 0, 0);
				}
				else if (func_387(uParam0, 3) >= fParam2)
				{
					func_149(uParam0, 3, 0);
					func_297(uParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_142(uParam0, 2))
			{
				func_149(uParam0, 2, 0);
			}
			if (func_142(uParam0, 3))
			{
				func_149(uParam0, 3, 0);
			}
		}
	}
}

void func_149(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam1 == 14)
	{
	}
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			func_103(&(uParam0->f_146[iVar0 /*3*/]));
			iVar0++;
		}
	}
	else
	{
		func_103(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam2)
	{
	}
}

int func_150(var uParam0)
{
	if (unk_0x91D5C8283D19AF49(uParam0->f_4, 0))
	{
		if (unk_0x7BDC41A7CA0C77A2(uParam0->f_4, -1, 0) == unk_0x33CD235DF1E6A94E())
		{
			return 1;
		}
	}
	return 0;
}

int func_151(var uParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	
	bVar1 = true;
	if (!unk_0x91D5C8283D19AF49(uParam0->f_4, 0))
	{
		func_297(uParam0, "IS_TAXI_RIDE_ALL_READY - Taxi not drivable.", 0);
	}
	else
	{
		func_164(uParam0, &(uParam1->f_40));
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0xBC2FC12AD0FBF72E((*uParam1)[iVar0]))
			{
				func_297(uParam0, "Passenger injured.", 15);
				bVar1 = false;
			}
			iVar0++;
		}
		if (bVar1)
		{
			if (func_152(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_152(var uParam0)
{
	if (unk_0x91D5C8283D19AF49(uParam0->f_4, 0))
	{
		if (unk_0x7BDC41A7CA0C77A2(uParam0->f_4, -1, 0) == uParam0->f_2)
		{
			if (func_142(uParam0, 14))
			{
				func_160(uParam0);
			}
			func_153(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_153(var uParam0, bool bParam1)
{
	if (unk_0x91D5C8283D19AF49(uParam0->f_4, 0))
	{
		if (bParam1)
		{
			if (unk_0xE38E3CF1625A4145(uParam0->f_8))
			{
				unk_0xE447A1B9434714F3(uParam0->f_8, 0);
				unk_0x1C316779E36C1967(uParam0->f_8, false);
				func_159(uParam0, &(uParam0->f_98), 4, 3);
			}
			else if (unk_0xE38E3CF1625A4145(uParam0->f_9))
			{
				unk_0xE447A1B9434714F3(uParam0->f_9, 0);
				unk_0x1C316779E36C1967(uParam0->f_9, false);
				unk_0xD362430CD61A9B08();
				if (func_124(uParam0))
				{
					func_195(uParam0, 2, 1, 0, 0);
				}
				else
				{
					func_159(uParam0, &(uParam0->f_98), 4, 3);
				}
			}
			func_154(uParam0, 0, 0);
		}
		else if (unk_0xE38E3CF1625A4145(uParam0->f_10))
		{
			unk_0x1ABDB383C83A336A(&(uParam0->f_10));
			if (unk_0xE38E3CF1625A4145(uParam0->f_8))
			{
				unk_0xE447A1B9434714F3(uParam0->f_8, 255);
				unk_0x1C316779E36C1967(uParam0->f_8, true);
			}
			else if (unk_0xE38E3CF1625A4145(uParam0->f_9))
			{
				if (uParam0->f_411 == 5 && uParam0->f_410 == 17)
				{
					unk_0xE447A1B9434714F3(uParam0->f_9, 0);
					unk_0x1C316779E36C1967(uParam0->f_9, false);
				}
				else if (uParam0->f_411 != 4)
				{
					unk_0xE447A1B9434714F3(uParam0->f_9, 255);
					unk_0x1C316779E36C1967(uParam0->f_9, true);
				}
			}
			unk_0xD362430CD61A9B08();
		}
	}
}

void func_154(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		func_391(uParam0);
	}
	if (!unk_0xE38E3CF1625A4145(uParam0->f_10))
	{
		uParam0->f_10 = func_157(uParam0->f_4, 1, 0);
		unk_0x1C95CD840303FC37(uParam0->f_10, "TAXI_BLIP_CAR");
		unk_0x1C316779E36C1967(uParam0->f_10, true);
		func_155(uParam0);
		if (bParam2)
		{
			unk_0xD362430CD61A9B08();
			func_195(uParam0, 3, 1, 0, 0);
		}
	}
}

void func_155(var uParam0)
{
	func_264(uParam0, 14, 0, 0);
	func_156();
}

void func_156()
{
	int iVar0;
	
	iVar0 = unk_0x8918EC905FC8975D();
	if (unk_0x91D5C8283D19AF49(iVar0, 0))
	{
		unk_0xE9739440E5BF08EE(-1, "Radio_Off", iVar0, "TAXI_SOUNDS", false, 0);
	}
}

int func_157(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0x765F6FEEFF39224F(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x8848A15CBDADDC60(iParam0);
	if (unk_0x680558231C80291D(iParam0))
	{
		unk_0xCE5C49921A521962(iVar0, func_158(unk_0xB331FCEB94EB05C8(), 1f, 1f));
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
		unk_0xCE5C49921A521962(iVar0, func_158(unk_0xB331FCEB94EB05C8(), 0.7f, 0.7f));
		unk_0xBF11C8A43770C598(iVar0, bParam1);
	}
	else if (unk_0xA3A29DB165882310(iParam0))
	{
		unk_0xCE5C49921A521962(iVar0, func_158(unk_0xB331FCEB94EB05C8(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_158(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_159(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_24(*uParam1, iParam2))
	{
		unk_0xD362430CD61A9B08();
		func_195(uParam0, iParam3, 1, 0, 0);
		func_232(uParam1, iParam2);
	}
}

void func_160(var uParam0)
{
	func_149(uParam0, 14, 0);
	func_149(uParam0, 15, 0);
	func_163();
	if (func_162())
	{
		func_161(0);
	}
}

void func_161(int iParam0)
{
	Global_16877 = iParam0;
}

int func_162()
{
	if (Global_16877 == 1)
	{
		return 1;
	}
	return 0;
}

void func_163()
{
	int iVar0;
	
	iVar0 = unk_0x8918EC905FC8975D();
	if (unk_0x91D5C8283D19AF49(iVar0, 0))
	{
		unk_0xE9739440E5BF08EE(-1, "Radio_On", iVar0, "TAXI_SOUNDS", false, 0);
	}
}

void func_164(var uParam0, var uParam1)
{
	if (unk_0x91D5C8283D19AF49(uParam0->f_4, 0))
	{
		if (!unk_0x10930B9CAD4111C2(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_142(uParam0, 14))
			{
				if (unk_0xE38E3CF1625A4145(*uParam1) && unk_0x163940E51B9C8A0D(*uParam1) > 0)
				{
					unk_0xE447A1B9434714F3(*uParam1, 0);
				}
				func_154(uParam0, 0, 0);
				func_195(uParam0, 2, 1, 1, 0);
			}
			else if (func_387(uParam0, 14) > 20f)
			{
				func_297(uParam0, "Player not in taxi.", 9);
			}
		}
		else
		{
			if (func_142(uParam0, 14))
			{
				func_160(uParam0);
			}
			if (unk_0xE38E3CF1625A4145(uParam0->f_10))
			{
				unk_0x1ABDB383C83A336A(&(uParam0->f_10));
			}
			if ((unk_0xE38E3CF1625A4145(*uParam1) && unk_0x163940E51B9C8A0D(*uParam1) < 255) && unk_0x002F527E1A3238DC(unk_0x3EE1295CEFBEFED4()) < 1)
			{
				unk_0xE447A1B9434714F3(*uParam1, 255);
				unk_0x1C316779E36C1967(*uParam1, true);
			}
		}
	}
}

void func_165(var uParam0)
{
	int iVar0;
	
	iVar0 = *uParam0;
	iVar0++;
	if (iVar0 == 3)
	{
		iVar0 = 0;
	}
	*uParam0 = iVar0;
}

int func_166(var uParam0, var uParam1)
{
	int iVar0;
	
	switch (*uParam1)
	{
		case 0:
			unk_0xA7A57E7757ED035E(&iVar0);
			unk_0x99414FB2D30425C1(&iVar0);
			unk_0x108754262311D34F(0, "oddjobs@taxi@gyn@cc@hotbox", "idle_b", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0x108754262311D34F(0, "oddjobs@taxi@gyn@cc@hotbox", "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0x108754262311D34F(0, "oddjobs@taxi@gyn@cc@hotbox", "idle_b", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0x108754262311D34F(0, "oddjobs@taxi@gyn@cc@hotbox", "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0x108754262311D34F(0, "oddjobs@taxi@gyn@cc@hotbox", "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0xC734F59A13D39AEF(iVar0);
			unk_0x13A2D602CD10CBAC(*uParam0, iVar0);
			*uParam1 = 1;
			break;
		
		case 1:
			if (unk_0xD76D6BCC14B95CE1(*uParam0, 242628503) != 1 || unk_0xD76D6BCC14B95CE1(*uParam0, 242628503) == 7)
			{
				*uParam1 = 0;
				return 1;
			}
			break;
	}
	return 0;
}

void func_167(var uParam0, var uParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	
	if (bLocal_248)
	{
		if (!uParam1->f_59)
		{
			if (!func_52())
			{
				func_171(&(uParam1->f_99));
				uParam1->f_59 = 1;
				func_170(uParam0, uParam1);
				uParam1->f_91 = unk_0xE3903F59E2F22150();
			}
		}
	}
	if (bLocal_249)
	{
		if (!uParam1->f_60)
		{
			if (!func_52())
			{
				uParam1->f_60 = 1;
				func_169(uParam0, uParam1);
				uParam1->f_91 = unk_0xE3903F59E2F22150();
				uParam1->f_92 = unk_0xE3903F59E2F22150();
			}
		}
	}
	uVar0 = func_168(uParam0);
	if (uParam1->f_59 || uParam1->f_60)
	{
		fVar2 = unk_0x8BB475EA09C9A0EB(uParam0->f_4);
		fVar3 = 4f;
		if (fVar2 >= fVar3)
		{
			fVar4 = 1f;
		}
		else
		{
			fVar4 = (fVar2 / fVar3);
		}
		if (uParam1->f_60)
		{
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 4)
			{
				if (unk_0xC2FDDE313D5A5398(uParam1->f_73[iVar1]))
				{
					unk_0x15B6C143EC14BC55(uParam1->f_73[iVar1], "speed", fVar4, 0);
				}
				iVar1++;
			}
		}
		if (uParam1->f_59)
		{
			unk_0x15B6C143EC14BC55(uParam1->f_88, "speed", fVar4, 0);
			unk_0x15B6C143EC14BC55(uParam1->f_89, "speed", fVar4, 0);
		}
	}
	if (unk_0x8BB475EA09C9A0EB(uParam0->f_4) >= 40f && !uParam1->f_63)
	{
		uParam1->f_91 = unk_0xE3903F59E2F22150();
		uParam1->f_63 = 1;
	}
	if ((unk_0x8BB475EA09C9A0EB(uParam0->f_4) < 40f && uParam1->f_63) && !bParam2)
	{
		uParam1->f_91 = unk_0xE3903F59E2F22150();
		uParam1->f_63 = 0;
		uParam1->f_62 = 0;
	}
	if (bParam2 && !uParam1->f_63)
	{
		uParam1->f_91 = unk_0xE3903F59E2F22150();
		uParam1->f_63 = 1;
	}
	if (((uParam1->f_59 || uParam1->f_60) && !uParam1->f_63) && !bParam2)
	{
		if (bParam3)
		{
			fVar8 = 0f;
			uParam1->f_61 = 1;
			uParam1->f_63 = 0;
			if (uParam1->f_60)
			{
				iVar1 = 0;
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (unk_0x1816D3DDD9D0FE59(uParam0->f_4, iVar1))
					{
						if (unk_0xC2FDDE313D5A5398(uParam1->f_73[iVar1]))
						{
							unk_0x15B6C143EC14BC55(uParam1->f_73[iVar1], "smoke", 1f, 0);
						}
					}
					else if (!unk_0x8F6C3DD0BB146CA3(uParam0->f_4, iVar1))
					{
						if ((unk_0xE3903F59E2F22150() % 2000) < 50)
						{
						}
						if (unk_0xC2FDDE313D5A5398(uParam1->f_73[iVar1]))
						{
							unk_0x15B6C143EC14BC55(uParam1->f_73[iVar1], "smoke", 1f, 0);
						}
					}
					else if (iVar1 > 1 && uVar0)
					{
						if (unk_0xC2FDDE313D5A5398(uParam1->f_73[iVar1]))
						{
							unk_0x15B6C143EC14BC55(uParam1->f_73[iVar1], "smoke", fVar8, 0);
						}
					}
					iVar1++;
				}
			}
			if (uParam1->f_59)
			{
				unk_0x15B6C143EC14BC55(uParam1->f_88, "smoke", fVar8, 0);
				unk_0x15B6C143EC14BC55(uParam1->f_89, "smoke", fVar8, 0);
			}
		}
		else
		{
			iVar6 = 6000;
			iVar5 = (unk_0xE3903F59E2F22150() - uParam1->f_91);
			if (iVar5 >= iVar6)
			{
				fVar8 = 0f;
				uParam1->f_61 = 1;
				uParam1->f_63 = 0;
			}
			else
			{
				fVar8 = (1f - (to_float(iVar5) / to_float(iVar6)));
			}
			if (uParam1->f_60)
			{
				iVar1 = 0;
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (unk_0x1816D3DDD9D0FE59(uParam0->f_4, iVar1))
					{
						if (unk_0xC2FDDE313D5A5398(uParam1->f_73[iVar1]))
						{
							unk_0x15B6C143EC14BC55(uParam1->f_73[iVar1], "smoke", 1f, 0);
						}
					}
					else if (!unk_0x8F6C3DD0BB146CA3(uParam0->f_4, iVar1))
					{
						if ((unk_0xE3903F59E2F22150() % 2000) < 50)
						{
						}
						if (unk_0xC2FDDE313D5A5398(uParam1->f_73[iVar1]))
						{
							unk_0x15B6C143EC14BC55(uParam1->f_73[iVar1], "smoke", 1f, 0);
						}
					}
					else if (iVar1 > 1 && uVar0)
					{
						if (unk_0xC2FDDE313D5A5398(uParam1->f_73[iVar1]))
						{
							unk_0x15B6C143EC14BC55(uParam1->f_73[iVar1], "smoke", fVar8, 0);
						}
					}
					iVar1++;
				}
			}
			if (uParam1->f_59)
			{
				unk_0x15B6C143EC14BC55(uParam1->f_88, "smoke", fVar8, 0);
				unk_0x15B6C143EC14BC55(uParam1->f_89, "smoke", fVar8, 0);
			}
		}
	}
	if ((uParam1->f_59 || uParam1->f_60) && ((uParam1->f_61 && !uParam1->f_62) || bParam2))
	{
		if (uParam1->f_63)
		{
			iVar7 = 6000;
			iVar5 = (unk_0xE3903F59E2F22150() - uParam1->f_91);
			if (iVar5 >= iVar7)
			{
				fVar8 = 1f;
				uParam1->f_62 = 1;
			}
			else
			{
				fVar8 = (to_float(iVar5) / to_float(iVar7));
			}
			if (uParam1->f_60)
			{
				iVar1 = 0;
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (unk_0x1816D3DDD9D0FE59(uParam0->f_4, iVar1))
					{
						if (unk_0xC2FDDE313D5A5398(uParam1->f_83[iVar1]))
						{
							unk_0x15B6C143EC14BC55(uParam1->f_83[iVar1], "smoke", fVar8, 0);
						}
					}
					else if (!unk_0x8F6C3DD0BB146CA3(uParam0->f_4, iVar1))
					{
						if (unk_0xC2FDDE313D5A5398(uParam1->f_78[iVar1]))
						{
							unk_0x15B6C143EC14BC55(uParam1->f_78[iVar1], "smoke", fVar8, 0);
						}
					}
					if (unk_0xC2FDDE313D5A5398(uParam1->f_73[iVar1]))
					{
						unk_0x15B6C143EC14BC55(uParam1->f_73[iVar1], "smoke", fVar8, 0);
					}
					iVar1++;
				}
			}
			if (uParam1->f_59)
			{
				unk_0x15B6C143EC14BC55(uParam1->f_88, "smoke", fVar8, 0);
				unk_0x15B6C143EC14BC55(uParam1->f_89, "smoke", fVar8, 0);
			}
		}
	}
}

int func_168(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x1816D3DDD9D0FE59(uParam0->f_4, iVar0))
		{
			if (!unk_0x0E4018692D92041D(uLocal_259[iVar0], 1))
			{
				unk_0x8950ED5730F62EE8(&(uLocal_259[iVar0]), 1);
			}
			if (unk_0x830B1D24ED3D5F55(uParam0->f_4, iVar0))
			{
				iVar1 = 0;
				if (!iLocal_250)
				{
					iLocal_250 = 1;
				}
			}
		}
		else if (unk_0x0E4018692D92041D(uLocal_259[iVar0], 1))
		{
			unk_0xCE689A8E8C42ED78(&(uLocal_259[iVar0]), 1);
		}
		if (!unk_0x8F6C3DD0BB146CA3(uParam0->f_4, iVar0))
		{
			iVar1 = 0;
			if (!unk_0x0E4018692D92041D(uLocal_258[iVar0], 1))
			{
				unk_0x8950ED5730F62EE8(&(uLocal_258[iVar0]), 1);
			}
			if (!iLocal_250)
			{
				iLocal_250 = 1;
			}
		}
		else if (unk_0x0E4018692D92041D(uLocal_258[iVar0], 1))
		{
			unk_0xCE689A8E8C42ED78(&(uLocal_258[iVar0]), 1);
		}
		iVar0++;
	}
	return iVar1;
}

void func_169(var uParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x91D5C8283D19AF49(uParam0->f_4, 0))
	{
		uParam1->f_73[0] = unk_0x36F0667378D07B9C("scr_ojtaxi_hotbox_trail", uParam0->f_4, vLocal_230, 0f, 0f, 0f, unk_0x9562E33C057F7589(0.4f, 0.6f), 0, 0, 0);
		uParam1->f_73[1] = unk_0x36F0667378D07B9C("scr_ojtaxi_hotbox_trail", uParam0->f_4, vLocal_232, 0f, 0f, 0f, unk_0x9562E33C057F7589(0.4f, 0.6f), 0, 0, 0);
		uParam1->f_73[2] = unk_0x36F0667378D07B9C("scr_ojtaxi_hotbox_trail", uParam0->f_4, vLocal_231, 0f, 0f, 0f, unk_0x9562E33C057F7589(0.8f, 1f), 0, 0, 0);
		uParam1->f_73[3] = unk_0x36F0667378D07B9C("scr_ojtaxi_hotbox_trail", uParam0->f_4, vLocal_233, 0f, 0f, 0f, unk_0x9562E33C057F7589(0.8f, 1f), 0, 0, 0);
		iVar0 = 0;
		while (iVar0 < 4)
		{
			unk_0x15B6C143EC14BC55(uParam1->f_73[iVar0], "smoke", 1f, 0);
			unk_0x15B6C143EC14BC55(uParam1->f_73[iVar0], "speed", 0f, 0);
			iVar0++;
		}
	}
}

void func_170(var uParam0, var uParam1)
{
	if (unk_0x91D5C8283D19AF49(uParam0->f_4, 0))
	{
		uParam1->f_88 = unk_0x36F0667378D07B9C("scr_ojtaxi_hotbox_door", uParam0->f_4, 0f, -0.15f, 0.2f, 0f, 0f, 0f, 1f, 0, 0, 0);
		uParam1->f_89 = unk_0x36F0667378D07B9C("scr_ojtaxi_hotbox_window", uParam0->f_4, 0f, -0.15f, 0.6f, 0f, 0f, 0f, 1f, 0, 0, 0);
	}
	unk_0xB44CDCE4C2063CEA(1);
}

void func_171(int iParam0)
{
	func_172(iParam0, 0f);
}

void func_172(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_14(unk_0x0E4018692D92041D(*iParam0, 4)) + fParam1);
	unk_0x8950ED5730F62EE8(iParam0, 1);
	unk_0xCE689A8E8C42ED78(iParam0, 2);
	iParam0->f_2 = 0f;
}

int func_173(var uParam0)
{
	return uParam0->f_416;
}

void func_174(var uParam0, var uParam1, var uParam2)
{
	if (!func_24(uParam0->f_44, 1))
	{
		switch (uParam0->f_412)
		{
			case 0:
				if (unk_0x002F527E1A3238DC(unk_0x3EE1295CEFBEFED4()) >= 1)
				{
					if (func_387(uParam0, 9) > 1f)
					{
						func_178(uParam0, unk_0x002F527E1A3238DC(unk_0x3EE1295CEFBEFED4()));
						func_195(uParam0, 50, 1, 0, 0);
						func_264(uParam0, 9, 0, 0);
						if (unk_0xE38E3CF1625A4145(uParam2->f_40))
						{
							unk_0xE447A1B9434714F3(uParam2->f_40, 0);
							unk_0x1C316779E36C1967(uParam2->f_40, false);
						}
						uParam0->f_140 = 1;
						uParam0->f_412 = 1;
					}
				}
				break;
			
			case 1:
				if (!func_52() && func_387(uParam0, 9) > 4f)
				{
					func_195(uParam0, 52, 1, 0, 0);
					uParam0->f_412 = 2;
				}
				break;
			
			case 2:
				if (func_177("TAXI_OBJ_POL", 0, 0))
				{
					func_195(uParam0, 51, 0, 0, 0);
					uParam0->f_412 = 3;
				}
				else if (unk_0x002F527E1A3238DC(unk_0x3EE1295CEFBEFED4()) < 1)
				{
					uParam0->f_412 = 3;
				}
				break;
			
			case 3:
				if (unk_0x09287BFEE1D9F6EF(unk_0x3EE1295CEFBEFED4(), func_176(uParam0)))
				{
					func_178(uParam0, unk_0x002F527E1A3238DC(unk_0x3EE1295CEFBEFED4()));
					func_53(6, 0);
				}
				if (!func_141(uParam0))
				{
					if (!unk_0x12BF789190D82474())
					{
						if (func_387(uParam0, 16) > 10f)
						{
							func_195(uParam0, 51, 1, 0, 0);
						}
					}
				}
				if (unk_0x002F527E1A3238DC(unk_0x3EE1295CEFBEFED4()) < 1)
				{
					if (unk_0xE38E3CF1625A4145(uParam2->f_40))
					{
						unk_0xE447A1B9434714F3(uParam2->f_40, 255);
						unk_0x1C316779E36C1967(uParam2->f_40, true);
					}
					uParam0->f_140 = 0;
					uParam0->f_412 = 4;
				}
				break;
			
			case 4:
				if (!func_52())
				{
					func_195(uParam0, 53, 1, 0, 1);
					func_53(7, func_176(uParam0));
					func_178(uParam0, 0);
					uParam0->f_412 = 5;
				}
				break;
			
			case 5:
				if (!func_52())
				{
					func_175(uParam1, -1, 4);
					uParam0->f_412 = 0;
				}
				break;
			}
	}
}

void func_175(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	if (iParam1 > -1)
	{
		uParam0->f_27 = iParam1;
	}
}

int func_176(var uParam0)
{
	return uParam0->f_106;
}

bool func_177(char* sParam0, int iParam1, int iParam2)
{
	unk_0x1B3E16C485B8DD94(sParam0);
	if (iParam1 == 1)
	{
		unk_0xFA6BEE2B1507FF1E(iParam2);
	}
	return unk_0xC8F93D36F11F7BE8();
}

void func_178(var uParam0, int iParam1)
{
	if (uParam0->f_106 != iParam1)
	{
		uParam0->f_106 = iParam1;
	}
}

void func_179(var uParam0)
{
	if (func_181(uParam0))
	{
		func_180(uParam0);
	}
}

void func_180(var uParam0)
{
	if (unk_0x749954286B0F4936() && uParam0->f_418.f_4 != 0)
	{
		uParam0->f_418.f_4 = 0;
	}
	switch (uParam0->f_418.f_4)
	{
		case 0:
			uParam0->f_418 = unk_0xDDB55BEB9D76717D();
			func_149(uParam0, 20, 0);
			uParam0->f_418.f_4++;
			break;
		
		case 1:
			if (uParam0->f_418.f_8 && !uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (func_387(uParam0, 20) > 3f)
				{
					func_195(uParam0, 87, 1, 0, 0);
					uParam0->f_418.f_8 = 0;
					uParam0->f_418.f_4++;
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_1)
			{
				if (!func_24(uParam0->f_81, 262144) || !func_24(uParam0->f_81, 1048576))
				{
					if (func_387(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_5 = 1;
						func_195(uParam0, 84, 1, 0, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (!func_24(uParam0->f_82, 67108864))
				{
					if (func_387(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_6 = 1;
						uParam0->f_418.f_8 = 0;
						func_195(uParam0, 85, 1, 0, 0);
						func_149(uParam0, 22, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418.f_7)
			{
				if (func_387(uParam0, 20) > 8f)
				{
					func_195(uParam0, 86, 1, 0, 0);
					uParam0->f_418.f_4++;
				}
			}
			break;
		
		case 2:
			if (func_24(uParam0->f_81, 262144) || func_24(uParam0->f_82, 67108864))
			{
				if (!func_142(uParam0, 22))
				{
					func_189(uParam0, 22);
				}
			}
			if (func_142(uParam0, 22) && func_387(uParam0, 22) > 15f)
			{
				if (uParam0->f_418 == uParam0->f_418.f_1)
				{
					if (!func_24(uParam0->f_81, 1048576))
					{
						func_195(uParam0, 84, 1, 0, 0);
						func_149(uParam0, 22, 0);
					}
				}
				else if (uParam0->f_418 == uParam0->f_418.f_2)
				{
					if (!func_24(uParam0->f_82, 134217728))
					{
						func_195(uParam0, 85, 1, 0, 0);
						func_149(uParam0, 22, 0);
					}
				}
			}
			break;
	}
}

bool func_181(var uParam0)
{
	return uParam0->f_120;
}

void func_182(var uParam0, var uParam1)
{
	func_185(uParam0, 1000);
	if ((!unk_0xD62C4419A41F106A((*uParam1)[0], 0) && !unk_0xD62C4419A41F106A((*uParam1)[1], 0)) && !unk_0xD62C4419A41F106A((*uParam1)[2], 0))
	{
		unk_0x31826EF4A8BC8E9F((*uParam1)[0]);
		unk_0x31826EF4A8BC8E9F((*uParam1)[1]);
		unk_0x31826EF4A8BC8E9F((*uParam1)[2]);
	}
	func_183();
	func_160(uParam0);
}

void func_183()
{
	Global_14732 = 0;
	func_184();
}

void func_184()
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

void func_185(var uParam0, int iParam1)
{
	if (unk_0x117DAF3BF7232886(*uParam0))
	{
		unk_0x2F8A4DF7D0DFF0A8(*uParam0, 0);
	}
	if (iParam1 > 0)
	{
		unk_0x63F0B040CE6EDF0F(false, true, iParam1, 1, 0, 0);
	}
	else
	{
		unk_0x63F0B040CE6EDF0F(false, false, 3000, 1, 0, 0);
	}
}

void func_186(var uParam0)
{
	if (!uParam0->f_51[2])
	{
		if (!unk_0xE38E3CF1625A4145(uParam0->f_36[2]))
		{
			uParam0->f_36[2] = func_187(uParam0->f_16[2 /*3*/], 1);
			uParam0->f_40 = uParam0->f_36[2];
		}
		if (!unk_0x6A179B2A6E1E9CF8(uParam0->f_36[2]))
		{
			unk_0x1C316779E36C1967(uParam0->f_36[2], true);
		}
	}
	else if (!uParam0->f_51[1])
	{
		if (!unk_0xE38E3CF1625A4145(uParam0->f_36[1]))
		{
			uParam0->f_36[1] = func_187(uParam0->f_16[1 /*3*/], 1);
			uParam0->f_40 = uParam0->f_36[1];
		}
		if (!unk_0x6A179B2A6E1E9CF8(uParam0->f_36[1]))
		{
			unk_0x1C316779E36C1967(uParam0->f_36[1], true);
		}
	}
	else
	{
		if (!unk_0xE38E3CF1625A4145(uParam0->f_36[0]))
		{
			uParam0->f_36[0] = func_187(uParam0->f_16[0 /*3*/], 1);
			uParam0->f_40 = uParam0->f_36[0];
		}
		if (!unk_0x6A179B2A6E1E9CF8(uParam0->f_36[0]))
		{
			unk_0x1C316779E36C1967(uParam0->f_36[0], true);
		}
	}
}

int func_187(vector3 vParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x2C0ED4741A007C6A(vParam0);
	unk_0xCE5C49921A521962(iVar0, func_158(unk_0xB331FCEB94EB05C8(), 1f, 1f));
	unk_0x1C316779E36C1967(iVar0, bParam1);
	return iVar0;
}

void func_188()
{
	func_232(&(Local_260.f_55), 2);
	func_232(&(Local_260.f_55), 4);
	func_232(&(Local_260.f_55), 16);
	func_232(&(Local_260.f_55), 64);
	func_232(&(Local_260.f_55), 256);
	func_232(&(Local_260.f_55), 512);
	func_232(&(Local_260.f_55), 1024);
	func_232(&(Local_260.f_55), 2048);
	func_232(&(Local_260.f_55), 4096);
	func_232(&(Local_260.f_55), 1073741824);
	func_232(&uLocal_392, 2);
}

void func_189(var uParam0, int iParam1)
{
	func_190(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_190(int iParam0)
{
	if (!func_16(iParam0))
	{
		func_106(iParam0);
	}
}

void func_191()
{
	unk_0x71CA80D41E1338B4(joaat("stretch"));
	unk_0x71CA80D41E1338B4(joaat("superd"));
	unk_0x71CA80D41E1338B4(Local_262.f_45[0]);
	unk_0x71CA80D41E1338B4(Local_262.f_45[1]);
	unk_0x71CA80D41E1338B4(Local_262.f_45[2]);
	unk_0x71CA80D41E1338B4(Local_262.f_45[3]);
	unk_0x71CA80D41E1338B4(Local_262.f_45[4]);
	unk_0xFF2DEA68E2D3602E("oddjobs@taxi@gyn@cc@intro");
	unk_0xFF2DEA68E2D3602E("amb@world_human_stand_impatient@female@no_sign@exit");
	unk_0xFF2DEA68E2D3602E("amb@world_human_stand_impatient@female@no_sign@base");
}

void func_192(var uParam0, bool bParam1)
{
	func_193(uParam0);
	if (bParam1)
	{
		if (!unk_0xE38E3CF1625A4145(uParam0->f_9))
		{
			uParam0->f_9 = func_187(uParam0->f_17, 1);
		}
		else if (unk_0x163940E51B9C8A0D(uParam0->f_9) == 0)
		{
			unk_0x4000D05DEA5F0328(1, 0f);
			unk_0xE447A1B9434714F3(uParam0->f_9, 255);
			unk_0xA0220BF0AB292278(uParam0->f_9, uParam0->f_17);
			unk_0x1C316779E36C1967(uParam0->f_9, true);
		}
	}
}

void func_193(var uParam0)
{
	if (unk_0xE38E3CF1625A4145(uParam0->f_8))
	{
		unk_0x1C316779E36C1967(uParam0->f_8, false);
		unk_0x1ABDB383C83A336A(&(uParam0->f_8));
	}
}

void func_194(var uParam0)
{
	unk_0xBADACD2849BC0E8C(unk_0x95B959F18401C09A());
	unk_0x3449EA232F9B8EAD(unk_0x3EE1295CEFBEFED4(), true, 0);
	func_185(uParam0, 1000);
}

void func_195(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	uParam0->f_416 = iParam1;
	if (bParam4)
	{
		func_264(uParam0, 16, 4f, 0);
		if (func_196(uParam0))
		{
			func_50();
		}
	}
	func_223(uParam0, iParam2, bParam3);
}

int func_196(var uParam0)
{
	vector3 vVar0;
	struct<6> Var1;
	
	StringCopy(&vVar0, uParam0->f_143, 24);
	if (func_52())
	{
		Var1 = { func_198() };
		if (!unk_0x786AF4A44E1B5B4B(&Var1))
		{
			StringConCat(&vVar0, "_obj1", 24);
			if (unk_0xCE3CFF625BEBAA04(&Var1, &vVar0))
			{
				return 1;
			}
			StringCopy(&vVar0, uParam0->f_143, 24);
			StringConCat(&vVar0, "_gret1", 24);
			func_197(&vVar0);
			if (unk_0xCE3CFF625BEBAA04(&Var1, &vVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_197(char* sParam0)
{
	StringConCat(sParam0, "F", 24);
}

struct<6> func_198()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15866 == 4)
	{
		return Global_15485;
	}
	return Var0;
}

bool func_199(var uParam0, var uParam1)
{
	return ((func_200((*uParam1)[0], uParam0) && func_200((*uParam1)[1], uParam0)) && func_200((*uParam1)[2], uParam0));
}

int func_200(int iParam0, var uParam1)
{
	if (unk_0x91D5C8283D19AF49(uParam1->f_4, 0))
	{
		if (!unk_0xBC2FC12AD0FBF72E(iParam0))
		{
			if (unk_0xEE984ED4E4A374BE(iParam0, uParam1->f_4))
			{
				return 1;
			}
		}
		else
		{
			func_297(uParam1, "Passenger was injured", 15);
		}
	}
	else
	{
		func_297(uParam1, "Taxi was destroyed", 0);
	}
	return 0;
}

int func_201(var uParam0, var uParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	func_220(uParam0, (*uParam1)[0]);
	func_220(uParam0, (*uParam1)[1]);
	func_220(uParam0, (*uParam1)[2]);
	if (unk_0x91D5C8283D19AF49(uParam0->f_4, 0))
	{
		if (!unk_0x10930B9CAD4111C2(uParam0->f_2, uParam0->f_4, 0))
		{
			func_218(uParam0, 1);
			if (func_35())
			{
				unk_0x3449EA232F9B8EAD(unk_0x3EE1295CEFBEFED4(), true, 0);
				func_182(uParam0, uParam1);
			}
		}
		else if (unk_0x09287BFEE1D9F6EF(unk_0x3EE1295CEFBEFED4(), 0))
		{
			func_216(uParam0);
		}
		else
		{
			if (func_142(uParam0, 14))
			{
				func_160(uParam0);
				func_215(uParam0, uParam1, 0);
			}
			if (func_142(uParam0, 9))
			{
				func_149(uParam0, 9, 0);
				unk_0xD362430CD61A9B08();
				if (unk_0xE38E3CF1625A4145(uParam0->f_8))
				{
					unk_0xE447A1B9434714F3(uParam0->f_8, 255);
					unk_0x1C316779E36C1967(uParam0->f_8, true);
				}
			}
			if (!unk_0xBC2FC12AD0FBF72E((*uParam1)[0]))
			{
				if (!uParam0->f_142)
				{
					fVar4 = ((unk_0x8BB475EA09C9A0EB(uParam0->f_4) / 5f) + 4f);
					if (uParam0->f_141)
					{
						if (func_214(uParam0, (*uParam1)[iLocal_238]) > 50f || func_13(&iLocal_239) > 5f)
						{
							func_297(uParam0, "Left Passenger", 8);
						}
					}
					switch (uParam0->f_48)
					{
						case 0:
							if (unk_0xD76D6BCC14B95CE1((*uParam1)[iLocal_238], 713668775) != 1 || ((func_10(unk_0x33CD235DF1E6A94E(), (*uParam1)[iLocal_238], 1) < 20f && func_213((*uParam1)[iLocal_238], uParam0->f_11, 1) <= 28f) && func_213(uParam0->f_4, uParam0->f_11, 1) <= 28f))
							{
								if (func_211(uParam0, uParam1, 40f))
								{
									uParam0->f_48++;
								}
							}
							break;
						
						case 1:
							if (func_210(uParam0, uParam1, 0, 1108082688, 1090519040, 1082130432))
							{
								uParam0->f_138 = 1;
								if (bLocal_86)
								{
									iVar0 = func_209(uParam0, &uVar1);
									if (!unk_0xD62C4419A41F106A(iVar0, 0))
									{
										unk_0x07C339D4328CA16C(iVar0, 0, 0);
									}
								}
								iVar3 = 0;
								while (iVar3 < 3)
								{
									unk_0xED68CDDDE25A144E((*uParam1)[iVar3]);
									unk_0xA7A57E7757ED035E(&iVar2);
									unk_0x99414FB2D30425C1(&iVar2);
									switch (iVar3)
									{
										case 0:
											if (!unk_0xF0D230FB550CD6EB((*uParam1)[iVar3], 0))
											{
												unk_0xC4A347124F39D998(0, uParam0->f_4, -1, 0, 2);
												unk_0x7D575FC8F42508D8(0, unk_0x9EC3B269A34A2BEE(1750, 2250));
												unk_0xC838CE9837D0ABAF(0, uParam0->f_4, 40000, 0, 1f, 1, 0);
											}
											break;
										
										case 1:
											if (!unk_0xF0D230FB550CD6EB((*uParam1)[iVar3], 0))
											{
												unk_0xC4A347124F39D998(0, uParam0->f_4, -1, 0, 2);
												unk_0xC838CE9837D0ABAF(0, uParam0->f_4, 40000, 1, 1f, 1, 0);
											}
											break;
										
										case 2:
											if (!unk_0xF0D230FB550CD6EB((*uParam1)[iVar3], 0))
											{
												unk_0xC4A347124F39D998(0, uParam0->f_4, -1, 0, 2);
												unk_0x7D575FC8F42508D8(0, unk_0x9EC3B269A34A2BEE(750, 1250));
												unk_0xC838CE9837D0ABAF(0, uParam0->f_4, 40000, 2, 1f, 1, 0);
											}
											break;
									}
									unk_0xC734F59A13D39AEF(iVar2);
									unk_0x13A2D602CD10CBAC((*uParam1)[iVar3], iVar2);
									iVar3++;
								}
								uParam0->f_48++;
							}
							else if (!func_150(uParam0))
							{
								unk_0xED68CDDDE25A144E((*uParam1)[0]);
								unk_0xED68CDDDE25A144E((*uParam1)[1]);
								unk_0xED68CDDDE25A144E((*uParam1)[2]);
							}
							else if ((unk_0xD76D6BCC14B95CE1((*uParam1)[0], 242628503) != 1 && unk_0xD76D6BCC14B95CE1((*uParam1)[0], 242628503) != 0) && func_214(uParam0, (*uParam1)[0]) > 8f)
							{
								unk_0xA7A57E7757ED035E(&(uParam0->f_243));
								unk_0x99414FB2D30425C1(&(uParam0->f_243));
								unk_0x11C4AF4137F2A4B5(0, uParam0->f_4, 0);
								unk_0x108754262311D34F(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
								unk_0xC734F59A13D39AEF(uParam0->f_243);
								unk_0x13A2D602CD10CBAC((*uParam1)[0], uParam0->f_243);
							}
							break;
						
						case 2:
							if (bLocal_86)
							{
								if (func_10(uParam0->f_4, (*uParam1)[0], 1) < 3f)
								{
									if (!func_208(uParam0, 1))
									{
										unk_0x31826EF4A8BC8E9F((*uParam1)[0]);
										unk_0x31826EF4A8BC8E9F((*uParam1)[1]);
										unk_0x31826EF4A8BC8E9F((*uParam1)[2]);
										func_297(uParam0, "You had a dead body in your back seat.", 5);
									}
								}
							}
							func_207(uParam0, uParam1);
							if (func_214(uParam0, (*uParam1)[0]) < fVar4 || func_35())
							{
								if (unk_0x10930B9CAD4111C2(uParam0->f_2, uParam0->f_4, 0))
								{
									if ((unk_0xF0D230FB550CD6EB((*uParam1)[0], 0) && unk_0xF0D230FB550CD6EB((*uParam1)[1], 0)) && unk_0xF0D230FB550CD6EB((*uParam1)[2], 0))
									{
										func_193(uParam0);
										unk_0x5FEE418CE11E6DDE((*uParam1)[0], 26, true);
										unk_0x5FEE418CE11E6DDE((*uParam1)[1], 26, true);
										unk_0x5FEE418CE11E6DDE((*uParam1)[2], 26, true);
										unk_0x5FEE418CE11E6DDE((*uParam1)[0], 104, true);
										func_149(uParam0, 5, 0);
										unk_0x74AB4B97208B4CC6();
										return 1;
									}
								}
							}
							else
							{
								if ((unk_0xE3903F59E2F22150() % 1000) < 50)
								{
								}
								unk_0x65A0E70E3C94DBD7(unk_0xFBB1F99A825CAB09((*uParam1)[0], true), fVar4, 0, 0, 255, 150);
							}
							if (func_206(uParam1))
							{
								unk_0xED68CDDDE25A144E((*uParam1)[0]);
								unk_0xED68CDDDE25A144E((*uParam1)[1]);
								unk_0xED68CDDDE25A144E((*uParam1)[2]);
								func_297(uParam0, "Left Passenger", 8);
							}
							if ((func_205(uParam0, uParam1) || func_204(uParam0, uParam1)) || func_203(uParam0, uParam1))
							{
								if (!unk_0xF0D230FB550CD6EB((*uParam1)[2], 0))
								{
									unk_0x7E268975AF5EA74F((*uParam1)[2], func_40(uParam0->f_11, 0f, 0.5f, 0.5f, 0f), 1f, 20000, 1048576000, 0, 1193033728);
									iLocal_238 = 2;
								}
								if (!unk_0xF0D230FB550CD6EB((*uParam1)[1], 0))
								{
									unk_0x7E268975AF5EA74F((*uParam1)[1], func_40(uParam0->f_11, 0f, 0.5f, 0.5f, 0f), 1f, 20000, 1048576000, 0, 1193033728);
									iLocal_238 = 1;
								}
								if (!unk_0xF0D230FB550CD6EB((*uParam1)[0], 0))
								{
									unk_0x7E268975AF5EA74F((*uParam1)[0], uParam0->f_11, 1f, 20000, 1048576000, 0, 1193033728);
									iLocal_238 = 0;
								}
								unk_0x1ABDB383C83A336A(&(uParam0->f_8));
								uParam0->f_8 = func_202((*uParam1)[iLocal_238], 0, 0);
								func_106(&iLocal_239);
								uParam0->f_48 = 0;
								iLocal_79 = 0;
							}
							break;
						}
				}
			}
			else
			{
				func_297(uParam0, "Passenger injured.", 9);
			}
		}
	}
	else
	{
		func_297(uParam0, "Taxi not drivable.", 9);
	}
	return 0;
}

int func_202(int iParam0, bool bParam1, bool bParam2)
{
	return func_157(iParam0, !bParam1, bParam2);
}

int func_203(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0xBC2FC12AD0FBF72E((*uParam1)[iVar0]) && !unk_0xF0D230FB550CD6EB((*uParam1)[iVar0], 0))
		{
			if (func_214(uParam0, (*uParam1)[iVar0]) > 28f)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_204(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0xBC2FC12AD0FBF72E((*uParam1)[iVar0]) && !unk_0xF0D230FB550CD6EB((*uParam1)[iVar0], 0))
		{
			if (func_213(uParam0->f_4, uParam0->f_11, 1) > 28f)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_205(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0xBC2FC12AD0FBF72E((*uParam1)[iVar0]) && !unk_0xF0D230FB550CD6EB((*uParam1)[iVar0], 0))
		{
			if (func_213((*uParam1)[iVar0], uParam0->f_11, 1) > 28f)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_206(var uParam0)
{
	if ((!unk_0xBC2FC12AD0FBF72E((*uParam0)[0]) && !unk_0xBC2FC12AD0FBF72E((*uParam0)[1])) && !unk_0xBC2FC12AD0FBF72E((*uParam0)[2]))
	{
		if ((unk_0xF0D230FB550CD6EB((*uParam0)[0], 0) || unk_0xF0D230FB550CD6EB((*uParam0)[1], 0)) || unk_0xF0D230FB550CD6EB((*uParam0)[2], 0))
		{
			if ((!unk_0xF0D230FB550CD6EB((*uParam0)[0], 0) || !unk_0xF0D230FB550CD6EB((*uParam0)[1], 0)) || !unk_0xF0D230FB550CD6EB((*uParam0)[2], 0))
			{
				if (!func_16(&iLocal_242))
				{
					func_190(&iLocal_242);
				}
				else if (func_104(&iLocal_242) > 15f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_207(var uParam0, var uParam1)
{
	if (unk_0x91D5C8283D19AF49(uParam0->f_4, 0))
	{
		if (!unk_0xBC2FC12AD0FBF72E((*uParam1)[iLocal_238]))
		{
			if (func_9((*uParam1)[iLocal_238], 1) > 30f)
			{
				if (unk_0xD76D6BCC14B95CE1((*uParam1)[iLocal_238], -1794415470) == 1 || unk_0xD76D6BCC14B95CE1((*uParam1)[iLocal_238], 242628503) == 1)
				{
					func_297(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_208(var uParam0, bool bParam1)
{
	int iVar0[3];
	int iVar1;
	
	if (unk_0x91D5C8283D19AF49(uParam0->f_4, 0))
	{
		iVar0[0] = unk_0x7BDC41A7CA0C77A2(uParam0->f_4, 1, 0);
		iVar0[1] = unk_0x7BDC41A7CA0C77A2(uParam0->f_4, 2, 0);
		iVar0[2] = unk_0x7BDC41A7CA0C77A2(uParam0->f_4, 0, 0);
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (unk_0x765F6FEEFF39224F(iVar0[iVar1]))
			{
				if (unk_0xD62C4419A41F106A(iVar0[iVar1], 0))
				{
					if (iVar1 == 0)
					{
						uParam0->f_7 = 1;
						if (bParam1)
						{
						}
					}
					else if (iVar1 == 1)
					{
						uParam0->f_7 = 2;
						if (bParam1)
						{
						}
					}
					else
					{
						uParam0->f_7 = 0;
						if (bParam1)
						{
						}
					}
					if (bParam1)
					{
					}
					return 0;
				}
			}
			iVar1++;
		}
		if ((unk_0xE3903F59E2F22150() % 1000) < 50)
		{
		}
	}
	return 1;
}

int func_209(var uParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x91D5C8283D19AF49(uParam0->f_4, 0))
	{
		iVar0 = unk_0x7BDC41A7CA0C77A2(uParam0->f_4, 1, 0);
		if (unk_0x765F6FEEFF39224F(iVar0))
		{
			*uParam1 = 1;
			return iVar0;
		}
		else
		{
			iVar0 = unk_0x7BDC41A7CA0C77A2(uParam0->f_4, 2, 0);
			if (unk_0x765F6FEEFF39224F(iVar0))
			{
				*uParam1 = 2;
				return iVar0;
			}
			else
			{
				iVar0 = unk_0x7BDC41A7CA0C77A2(uParam0->f_4, 0, 0);
				if (unk_0x765F6FEEFF39224F(iVar0))
				{
					*uParam1 = 0;
					return iVar0;
				}
			}
		}
	}
	return 0;
}

int func_210(var uParam0, var uParam1, int iParam2, float fParam3, float fParam4, float fParam5)
{
	if (!unk_0xD62C4419A41F106A((*uParam1)[0], 0))
	{
		if (!unk_0xC30D5C4DCAC8020A((*uParam1)[iLocal_238]) && func_9((*uParam1)[iLocal_238], 1) < fParam3)
		{
			if (!func_142(uParam0, 5))
			{
				func_264(uParam0, 5, 0, 0);
			}
		}
		else if (func_142(uParam0, 5))
		{
			func_149(uParam0, 5, 0);
		}
		if (((func_387(uParam0, 5) > IntToFloat(iParam2) && unk_0x8BB475EA09C9A0EB(uParam0->f_4) < fParam5) && !unk_0xC30D5C4DCAC8020A((*uParam1)[iLocal_238])) || func_9((*uParam1)[iLocal_238], 1) <= fParam4)
		{
			return 1;
		}
	}
	return 0;
}

int func_211(var uParam0, var uParam1, float fParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	int iVar3;
	int iVar4;
	
	iVar4 = unk_0x89DDAAE6EFF42DD9(uParam0->f_4, "windscreen");
	vVar2 = { unk_0x2D49816199C51B0C(uParam0->f_4, iVar4) };
	vVar2 = { unk_0x16068053F8800179(uParam0->f_4, vVar2) };
	vVar2.y = (vVar2.y + 1f);
	vVar0 = { unk_0x2CA911E7569D12EA(uParam0->f_4, vVar2) };
	vVar1 = { unk_0x2CA911E7569D12EA(uParam0->f_3, 0f, 0.25f, 0.9f) };
	unk_0x82EF7DCBEE45753D(vVar0, vVar1, 0, 0, 255, 255);
	switch (iLocal_79)
	{
		case 0:
			unk_0x4A852F02088ECC9D((*uParam1)[0], true);
			unk_0x4A852F02088ECC9D((*uParam1)[1], true);
			unk_0x4A852F02088ECC9D((*uParam1)[2], true);
			iLocal_79 = 1;
			break;
		
		case 1:
			if ((func_10(uParam0->f_4, (*uParam1)[iLocal_238], 0) <= fParam2 && !uParam0->f_142) && unk_0x7EECA16E87982278((vVar0.z - vVar1.z)) < 5f)
			{
				iVar3 = func_212(&(uParam0->f_409), vVar0, vVar1, 0);
				if (iVar3 == 0)
				{
					iLocal_79 = 2;
				}
			}
			break;
		
		case 2:
			unk_0xD362430CD61A9B08();
			func_195(uParam0, 4, 1, 0, 1);
			unk_0xED68CDDDE25A144E((*uParam1)[iLocal_238]);
			unk_0xC4A347124F39D998(uParam0->f_3, uParam0->f_4, -1, 2048, 4);
			unk_0xA7A57E7757ED035E(&(uParam0->f_243));
			unk_0x99414FB2D30425C1(&(uParam0->f_243));
			unk_0x108754262311D34F(0, "oddjobs@towingcome_here", "come_here_idle_a", 8f, -8f, -1, 49, 0, 0, 0, 0);
			unk_0x11C4AF4137F2A4B5(0, uParam0->f_4, 0);
			unk_0xC734F59A13D39AEF(uParam0->f_243);
			unk_0x13A2D602CD10CBAC((*uParam1)[iLocal_238], uParam0->f_243);
			return 1;
			break;
		
		case 3:
			iLocal_79 = 0;
			return 1;
			break;
	}
	return 0;
}

int func_212(var uParam0, vector3 vParam1, vector3 vParam2, bool bParam3)
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0x36FB861F8CCF0EA4(vParam1, vParam2, 511, 0, 7);
		if (bParam3)
		{
		}
	}
	else
	{
		iVar4 = unk_0x819B6E76423AE494(*uParam0, &iVar2, &uVar0, &uVar1, &uVar3);
		if (iVar4 == 2)
		{
			if (bParam3)
			{
			}
			if (iVar2 == 0)
			{
				*uParam0 = 0;
				return iVar2;
			}
			else
			{
				if (bParam3)
				{
				}
				*uParam0 = 0;
				return iVar2;
			}
		}
		else if (iVar4 == 0)
		{
			if (bParam3)
			{
			}
			*uParam0 = 0;
		}
	}
	return -1;
}

float func_213(int iParam0, vector3 vParam1, bool bParam2)
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

float func_214(var uParam0, int iParam1)
{
	if (!unk_0xD62C4419A41F106A(iParam1, 0))
	{
		if (func_150(uParam0))
		{
			return func_10(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

void func_215(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x91D5C8283D19AF49(uParam0->f_4, 0))
	{
		if (bParam2)
		{
			if (unk_0xE38E3CF1625A4145(uParam0->f_8))
			{
				unk_0xE447A1B9434714F3(uParam0->f_8, 0);
				unk_0x1C316779E36C1967(uParam0->f_8, false);
				func_159(uParam0, &(uParam0->f_98), 4, 3);
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (unk_0xE38E3CF1625A4145(uParam1->f_36[iVar0]))
					{
						unk_0xE447A1B9434714F3(uParam1->f_36[iVar0], 0);
					}
					iVar0++;
				}
				func_195(uParam0, 2, 1, 1, 0);
			}
			func_154(uParam0, 0, 0);
		}
		else if (unk_0xE38E3CF1625A4145(uParam0->f_10))
		{
			unk_0x1ABDB383C83A336A(&(uParam0->f_10));
			if (unk_0xE38E3CF1625A4145(uParam0->f_8))
			{
				unk_0xE447A1B9434714F3(uParam0->f_8, 255);
				unk_0x1C316779E36C1967(uParam0->f_8, true);
				func_159(uParam0, &(uParam0->f_98), 8, 1);
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (unk_0xE38E3CF1625A4145(uParam1->f_36[iVar0]))
					{
						unk_0xE447A1B9434714F3(uParam1->f_36[iVar0], 255);
					}
					iVar0++;
				}
			}
		}
	}
}

void func_216(var uParam0)
{
	func_220(uParam0, uParam0->f_3);
	if (func_150(uParam0))
	{
		if (func_142(uParam0, 14))
		{
			func_160(uParam0);
			if (unk_0xE38E3CF1625A4145(uParam0->f_10))
			{
				unk_0x1ABDB383C83A336A(&(uParam0->f_10));
			}
		}
	}
	if (!func_142(uParam0, 9))
	{
		if (unk_0xE38E3CF1625A4145(uParam0->f_8))
		{
			unk_0xE447A1B9434714F3(uParam0->f_8, 0);
			unk_0x1C316779E36C1967(uParam0->f_8, false);
		}
		func_264(uParam0, 9, 0, 0);
		func_217("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_217(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x0C9D26BBBEE23407(sParam0);
	unk_0x495407AC2D466930(iParam1, 1);
}

void func_218(var uParam0, bool bParam1)
{
	func_220(uParam0, uParam0->f_3);
	if (unk_0x91D5C8283D19AF49(uParam0->f_4, 0))
	{
		if (!unk_0x10930B9CAD4111C2(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_142(uParam0, 14))
			{
				if (func_52())
				{
					func_161(1);
				}
				func_219(uParam0, 11, 1);
				func_153(uParam0, 1);
				func_264(uParam0, 14, 0f, 1);
				if (uParam0->f_410 < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_124(uParam0))
				{
					if ((unk_0xE3903F59E2F22150() % 1000) < 50)
					{
					}
					if (unk_0xF0D230FB550CD6EB(uParam0->f_2, 0))
					{
						if (func_387(uParam0, 15) > 5f)
						{
							func_264(uParam0, 15, 0f, 1);
						}
					}
					if (func_387(uParam0, 14) > 20f)
					{
						func_297(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_387(uParam0, 14) > 20f)
				{
					if (func_9(uParam0->f_4, 1) > 40f)
					{
						func_297(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_297(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

void func_219(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_414 = iParam1;
	if (bParam2)
	{
	}
}

void func_220(var uParam0, int iParam1)
{
	if (unk_0x765F6FEEFF39224F(iParam1))
	{
		if (!unk_0xBC2FC12AD0FBF72E(iParam1))
		{
			if (unk_0x7E8740F26D4CAB87(unk_0x95B959F18401C09A()))
			{
				if ((unk_0x792D8D44CDA437C2(iParam1, joaat("weapon_stungun"), 0) || unk_0x792D8D44CDA437C2(iParam1, 0, 2)) || unk_0x792D8D44CDA437C2(iParam1, 0, 1))
				{
					func_297(uParam0, "Passenger injured by player with weapon.", 14);
				}
				unk_0xBADACD2849BC0E8C(unk_0x95B959F18401C09A());
			}
		}
	}
}

void func_221()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0x91D5C8283D19AF49(Local_260.f_4, 0))
	{
		if (func_150(&Local_260))
		{
			if (!iLocal_346)
			{
				iVar0 = unk_0x89DDAAE6EFF42DD9(Local_260.f_4, "window_lf");
				iVar1 = unk_0x89DDAAE6EFF42DD9(Local_260.f_4, "window_lr");
				iVar2 = unk_0x89DDAAE6EFF42DD9(Local_260.f_4, "window_rf");
				iVar3 = unk_0x89DDAAE6EFF42DD9(Local_260.f_4, "window_rr");
				vLocal_230 = { unk_0x2D49816199C51B0C(Local_260.f_4, iVar0) };
				vLocal_230 = { unk_0x16068053F8800179(Local_260.f_4, vLocal_230) };
				vLocal_234 = { vLocal_230 };
				vLocal_230.z = (vLocal_230.z + 0.15f);
				vLocal_230.y = (vLocal_230.y - 0.15f);
				vLocal_231 = { unk_0x2D49816199C51B0C(Local_260.f_4, iVar1) };
				vLocal_231 = { unk_0x16068053F8800179(Local_260.f_4, vLocal_231) };
				vLocal_235 = { vLocal_231 };
				vLocal_231.z = (vLocal_231.z + 0.15f);
				vLocal_232 = { unk_0x2D49816199C51B0C(Local_260.f_4, iVar2) };
				vLocal_232 = { unk_0x16068053F8800179(Local_260.f_4, vLocal_232) };
				vLocal_236 = { vLocal_232 };
				vLocal_232.z = (vLocal_232.z + 0.15f);
				vLocal_232.y = (vLocal_232.y - 0.15f);
				vLocal_233 = { unk_0x2D49816199C51B0C(Local_260.f_4, iVar3) };
				vLocal_233 = { unk_0x16068053F8800179(Local_260.f_4, vLocal_233) };
				vLocal_237 = { vLocal_233 };
				vLocal_233.z = (vLocal_233.z + 0.15f);
				iLocal_346 = 1;
			}
		}
		else if (iLocal_346)
		{
			iLocal_346 = 0;
		}
	}
}

void func_222(var uParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { func_40(vParam1, 1f, -fParam2, -fParam2, -22f) };
	vVar1 = { func_40(vParam1, 1f, fParam2, fParam2, 44f) };
	vVar0.z = (vVar0.z - 22f);
	vVar1.z = (vVar1.z + 22f);
	if (!bParam3)
	{
		unk_0x798B28A324675954(vVar0, vVar1);
		*uParam0 = unk_0x0335D8135051EA56(vVar0, vVar1, 0, 1, 1, 1);
		unk_0x9C47E5CDFB45F474(vParam1, fParam2, 0);
	}
	else
	{
		unk_0xBD881F1B7ECAD975();
		unk_0xF1CFA0046BB67893(*uParam0, 0);
	}
}

void func_223(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_110 = iParam1;
	if (bParam2)
	{
		func_50();
		func_264(uParam0, 16, 4f, 0);
		unk_0xD362430CD61A9B08();
	}
}

int func_224(var uParam0, int iParam1)
{
	if (!unk_0x8A7F864DAB908749(2))
	{
		return 0;
	}
	func_231(12);
	if (func_24(uParam0->f_44, 8))
	{
		if (!func_24(uParam0->f_44, 128))
		{
			if (unk_0x085941C2A0E1ABAF(unk_0x33CD235DF1E6A94E()) && !func_24(uParam0->f_44, 256))
			{
				func_232(&(uParam0->f_44), 256);
			}
			if (func_24(uParam0->f_44, 256) && unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
			{
				func_195(uParam0, 135, 1, 0, 1);
				func_232(&(uParam0->f_44), 128);
			}
		}
	}
	if (!func_228(uParam0, iParam1))
	{
		if (func_9(uParam0->f_3, 1) < 35f)
		{
			if (!func_24(uParam0->f_44, 8))
			{
				unk_0x11C4AF4137F2A4B5(uParam0->f_3, unk_0x33CD235DF1E6A94E(), 0);
				func_195(uParam0, 133, 1, 0, 1);
				func_232(&(uParam0->f_44), 8);
			}
		}
		if ((unk_0xBC2FC12AD0FBF72E(uParam0->f_3) || unk_0xD82CBCB7E04DDA8A(uParam0->f_3)) || func_9(uParam0->f_3, 1) > 400f)
		{
			func_297(uParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		uParam0->f_4 = unk_0xF2C96862595654B4(uParam0->f_2, 0);
		unk_0x09993E7216CF52C4(uParam0->f_4, true);
		if (unk_0x7BDC41A7CA0C77A2(uParam0->f_4, -1, 0) == uParam0->f_2)
		{
			unk_0x320D9994786BCA17(uParam0->f_4);
			func_226(uParam0);
			func_53(2, 0);
			bLocal_86 = true;
			func_190(&iLocal_82);
			return 1;
		}
		else
		{
			func_297(uParam0, "No Taxi", 21);
			func_225("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}

void func_225(char* sParam0, int iParam1)
{
	unk_0x37621D6689F9E3C3(sParam0);
	unk_0x092150016C06C431(0, 0, true, iParam1);
}

void func_226(var uParam0)
{
	if (!unk_0xD62C4419A41F106A(uParam0->f_4, 0))
	{
		if (func_227())
		{
		}
	}
}

int func_227()
{
	if (unk_0x0E4018692D92041D(unk_0x9EC3B269A34A2BEE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_228(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
		{
			iVar0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
			if (unk_0x91D5C8283D19AF49(iVar0, 0))
			{
				iVar1 = unk_0x541D5C57194E73C4(iVar0);
				bVar2 = func_230(iVar0);
				bVar3 = true;
				if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iVar1 == joaat("rhino") || iVar1 == joaat("ratloader")) || iVar1 == joaat("surfer")) || iVar1 == joaat("surfer2")) || iVar1 == joaat("armytanker")) || iVar1 == joaat("barracks")) || iVar1 == joaat("barracks2")) || iVar1 == joaat("crusader")) || iVar1 == joaat("utillitruck")) || iVar1 == joaat("utillitruck2")) || iVar1 == joaat("utillitruck3")) || iVar1 == joaat("airtug")) || iVar1 == joaat("caddy")) || iVar1 == joaat("caddy2")) || iVar1 == joaat("dloader")) || iVar1 == joaat("docktug")) || iVar1 == joaat("flatbed")) || iVar1 == joaat("ripley")) || iVar1 == joaat("romero")) || iVar1 == joaat("towtruck")) || iVar1 == joaat("towtruck2")) || iVar1 == joaat("airbus")) || iVar1 == joaat("bus")) || iVar1 == joaat("coach")) || iVar1 == joaat("rentalbus")) || iVar1 == joaat("tourbus")) || iVar1 == joaat("riot")) || iVar1 == joaat("trash")) || iVar1 == joaat("benson")) || iVar1 == joaat("biff")) || iVar1 == joaat("hauler")) || iVar1 == joaat("packer")) || iVar1 == joaat("phantom")) || iVar1 == joaat("pounder")) || iVar1 == joaat("bulldozer")) || iVar1 == joaat("handler")) || iVar1 == joaat("tiptruck2")) || iVar1 == joaat("cutter")) || iVar1 == joaat("dump")) || iVar1 == joaat("mixer")) || iVar1 == joaat("mixer2")) || iVar1 == joaat("rubble")) || iVar1 == joaat("scrap")) || iVar1 == joaat("tiptruck")) || iVar1 == joaat("camper")) || iVar1 == joaat("taco")) || iVar1 == joaat("boxville")) || iVar1 == joaat("boxville2")) || iVar1 == joaat("boxville3")) || iVar1 == joaat("burrito")) || iVar1 == joaat("burrito2")) || iVar1 == joaat("burrito3")) || iVar1 == joaat("burrito4")) || iVar1 == joaat("gburrito")) || iVar1 == joaat("journey")) || iVar1 == joaat("mule")) || iVar1 == joaat("mule2")) || iVar1 == joaat("pony")) || iVar1 == joaat("rumpo")) || iVar1 == joaat("rumpo2")) || iVar1 == joaat("speedo")) || iVar1 == joaat("speedo2")) || iVar1 == joaat("youga")) || iVar1 == joaat("mower")) || iVar1 == joaat("tractor")) || iVar1 == joaat("tractor2")) || iVar1 == joaat("fbi")) || iVar1 == joaat("fbi2")) || iVar1 == joaat("pranger")) || iVar1 == joaat("ambulance")) || iVar1 == joaat("dilettante2")) || iVar1 == 1938952078) || iVar1 == joaat("lguard")) || iVar1 == joaat("dune")) || iVar1 == joaat("pbus")) || iVar1 == joaat("police")) || iVar1 == joaat("police2")) || iVar1 == joaat("police3")) || iVar1 == joaat("police4")) || iVar1 == joaat("policeb")) || iVar1 == joaat("policet")) || iVar1 == joaat("sheriff")) || iVar1 == joaat("sheriff2")) || iVar1 == joaat("stockade"))
				{
					bVar3 = false;
				}
				if (uParam0->f_411 == 7)
				{
					if (iVar1 == joaat("bodhi2"))
					{
						bVar3 = false;
					}
				}
				bVar4 = false;
				if (unk_0x0C2E237744BA0026(iVar1))
				{
					if (unk_0x7BDC41A7CA0C77A2(iVar0, -1, 0) == unk_0x33CD235DF1E6A94E())
					{
						bVar4 = true;
					}
				}
				bVar5 = true;
				if (unk_0xC92AA0DBDDDE8BB8(iVar0) < iParam1)
				{
					bVar5 = false;
				}
				if (!bVar2)
				{
					if (!func_24(uParam0->f_44, 64))
					{
						if (unk_0x8A7F864DAB908749(2))
						{
							func_225("TX_VIP_DMGD", -1);
							if (func_229("TX_VIP_DMGD"))
							{
								func_232(&(uParam0->f_44), 64);
							}
						}
					}
					return 0;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!func_24(uParam0->f_44, 32))
					{
						if (unk_0x8A7F864DAB908749(2))
						{
							func_225("TX_VIP_CAR", -1);
							if (func_229("TX_VIP_CAR"))
							{
								func_232(&(uParam0->f_44), 32);
							}
						}
					}
					return 0;
				}
				else if (!bVar5)
				{
					if (!func_24(uParam0->f_44, 16))
					{
						if (unk_0x8A7F864DAB908749(2))
						{
							func_225("TX_VIP_SMALL", -1);
							if (func_229("TX_VIP_SMALL"))
							{
								func_232(&(uParam0->f_44), 16);
							}
						}
					}
					return 0;
				}
				return 1;
			}
		}
		else
		{
			func_22(&(uParam0->f_44), 16);
			func_22(&(uParam0->f_44), 64);
			func_22(&(uParam0->f_44), 32);
		}
	}
	return 0;
}

int func_229(char* sParam0)
{
	unk_0x6D39881CA5436178(sParam0);
	return unk_0xA32C2C4DF096C08A(0);
}

int func_230(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!unk_0xEED5625DB4F88798(iParam0, 0, 0))
	{
		iVar0++;
	}
	if (!unk_0xEED5625DB4F88798(iParam0, 1, 0))
	{
		iVar0++;
	}
	if (!unk_0xEED5625DB4F88798(iParam0, 4, 0))
	{
		iVar0++;
	}
	if (!unk_0xEED5625DB4F88798(iParam0, 5, 0))
	{
		iVar0++;
	}
	if (iVar0 < 2)
	{
		return 0;
	}
	if (unk_0x0C2E237744BA0026(unk_0x541D5C57194E73C4(iParam0)))
	{
		iVar1 = 0;
		if (!unk_0x830B1D24ED3D5F55(iParam0, 0))
		{
			iVar1++;
		}
		if (!unk_0x830B1D24ED3D5F55(iParam0, 1))
		{
			iVar1++;
		}
		if (!unk_0x830B1D24ED3D5F55(iParam0, 2))
		{
			iVar1++;
		}
		if (!unk_0x830B1D24ED3D5F55(iParam0, 3))
		{
			iVar1++;
		}
		if (iVar1 < 2)
		{
			return 0;
		}
	}
	return 1;
}

void func_231(int iParam0)
{
	var uVar0;
	vector3 vVar1[24];
	
	if (unk_0xD88B24C279C15EA1() || unk_0xDB36A8F522CBC12D())
	{
		uVar0 = iParam0;
		unk_0x0A919F27746977BF(8, &uVar0, 1, 1);
	}
	else if (unk_0xF3622D832771D4B9() || unk_0xF5DB888C353E2BED())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x7EB82D55AB02865C(8, &cVar1);
	}
}

void func_232(var uParam0, int iParam1)
{
	func_233(uParam0, iParam1);
}

void func_233(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_234(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_23(&(uParam0->f_100), iVar0);
		iVar0++;
	}
}

void func_235()
{
	Local_165 = 0;
	func_252(37258, 37233, 1);
	func_252(36994, 36971, 1);
	func_252(36909, 36884, 1);
	func_252(36812, 36788, 1);
	func_252(36678, 36657, 1);
	func_252(36604, 36579, 1);
	func_252(36437, 36414, 1);
}

int func_236(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_297(uParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_237(var uParam0)
{
	if (unk_0x765F6FEEFF39224F(uParam0->f_4))
	{
		if (func_239(uParam0->f_4))
		{
			func_238(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

void func_238(var uParam0, int iParam1)
{
	uParam0->f_117 = 1;
	uParam0->f_118 = iParam1;
}

int func_239(int iParam0)
{
	if (!unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x787CBB9DB6BA1A49(iParam0) < -100f)
	{
		return 1;
	}
	else if (unk_0x67001C5CC88C66A8(iParam0, 0, 40000) || unk_0x67001C5CC88C66A8(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

int func_240(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_297(uParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_241(var uParam0)
{
	if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) > 0)
	{
		if (func_242(uParam0->f_85, 32))
		{
			return 1;
		}
	}
	return 0;
}

bool func_242(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_243(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_238(uParam0, 11);
	return 1;
}

int func_244(var uParam0)
{
	if (unk_0x765F6FEEFF39224F(uParam0->f_4))
	{
		if (unk_0x8AE34E8B10270D31(uParam0->f_4) && !unk_0x156573D1AADB54ED(uParam0->f_4))
		{
			if (!func_142(uParam0, 25))
			{
				func_264(uParam0, 25, 0, 0);
			}
			else if (func_387(uParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_142(uParam0, 25))
		{
			func_149(uParam0, 25, 0);
		}
	}
	return 0;
}

int func_245(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_297(uParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_246(var uParam0)
{
	if (!unk_0xD62C4419A41F106A(uParam0->f_4, 0))
	{
		if (unk_0x8EDBE29FEAB08840(uParam0->f_4))
		{
			if (unk_0x67001C5CC88C66A8(uParam0->f_4, 0, 40000) || unk_0x67001C5CC88C66A8(uParam0->f_4, 1, 40000))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_247(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_297(uParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_248(var uParam0)
{
	if (!unk_0xD62C4419A41F106A(uParam0->f_4, 0))
	{
		if (unk_0x91D5C8283D19AF49(uParam0->f_4, 0))
		{
			if (unk_0x61DFE32FB87BC784(uParam0->f_4))
			{
				if (func_242(uParam0->f_86, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_249(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_297(uParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_250(var uParam0)
{
	if (unk_0x765F6FEEFF39224F(uParam0->f_4))
	{
		if (func_251(uParam0->f_4))
		{
			func_238(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

int func_251(int iParam0)
{
	if (!unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x787CBB9DB6BA1A49(iParam0) == 0f)
	{
		if (!unk_0x91D5C8283D19AF49(iParam0, 0))
		{
		}
		return 1;
	}
	else if (unk_0x67001C5CC88C66A8(iParam0, 0, 40000) || unk_0x67001C5CC88C66A8(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

void func_252(int iParam0, int iParam1, bool bParam2)
{
	if (Local_165 >= 16)
	{
		Local_165 = 16;
		return;
	}
	Local_165.f_1[Local_165 /*4*/] = 0;
	func_233(&(Local_165.f_1[Local_165 /*4*/]), 1);
	if (bParam2)
	{
		func_233(&(Local_165.f_1[Local_165 /*4*/]), 2);
	}
	Local_165.f_1[Local_165 /*4*/].f_2 = iParam0;
	Local_165.f_1[Local_165 /*4*/].f_3 = iParam1;
	Local_165++;
}

int func_253(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_297(uParam0, "Passenger injured.", 15);
	return 1;
}

int func_254(var uParam0)
{
	if (unk_0x765F6FEEFF39224F(uParam0->f_3))
	{
		if ((unk_0xBC2FC12AD0FBF72E(uParam0->f_3) || unk_0xD62C4419A41F106A(uParam0->f_3, 0)) || unk_0x17260B4EA0652E1C(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

void func_255()
{
	Local_162[5 /*10*/] = 5;
	Local_162[5 /*10*/].f_1 = 0;
	Local_162[5 /*10*/].f_2 = "TX_SPEED_N";
	Local_162[5 /*10*/].f_9 = 78;
	Local_162[0 /*10*/] = 5;
	Local_162[0 /*10*/].f_1 = 0;
	Local_162[0 /*10*/].f_2 = "TX_AIR_N";
	Local_162[0 /*10*/].f_9 = 76;
	Local_162[2 /*10*/] = 5;
	Local_162[2 /*10*/].f_1 = 0;
	Local_162[2 /*10*/].f_2 = "TX_QSTOP_N";
	Local_162[2 /*10*/].f_9 = 21;
	Local_162[1 /*10*/] = 10;
	Local_162[1 /*10*/].f_1 = 0;
	Local_162[1 /*10*/].f_2 = "TX_DRIFT_N";
	Local_162[1 /*10*/].f_9 = 71;
	Local_162[4 /*10*/] = 10;
	Local_162[4 /*10*/].f_1 = 0;
	Local_162[4 /*10*/].f_2 = "TX_SIDEWALK_N";
	Local_162[4 /*10*/].f_9 = 79;
	Local_162[6 /*10*/] = 10;
	Local_162[6 /*10*/].f_1 = 0;
	Local_162[6 /*10*/].f_2 = "TX_ONCOMING_N";
	Local_162[6 /*10*/].f_9 = 80;
	Local_162[9 /*10*/] = 15;
	Local_162[9 /*10*/].f_1 = 0;
	Local_162[9 /*10*/].f_2 = "TX_HITRUN_N";
	Local_162[9 /*10*/].f_9 = 82;
	Local_162[8 /*10*/] = 15;
	Local_162[8 /*10*/].f_1 = 0;
	Local_162[8 /*10*/].f_2 = "TX_RECKLESS_N";
	Local_162[8 /*10*/].f_9 = 72;
	Local_162[7 /*10*/] = 15;
	Local_162[7 /*10*/].f_1 = 0;
	Local_162[7 /*10*/].f_2 = "TX_ROLL_N";
	Local_162[7 /*10*/].f_9 = 74;
	Local_162[11 /*10*/] = 5;
	Local_162[11 /*10*/].f_1 = 0;
	Local_162[11 /*10*/].f_2 = "TX_SWERVE_N";
	Local_162[11 /*10*/].f_9 = 70;
	Local_162[12 /*10*/] = 5;
	Local_162[12 /*10*/].f_1 = 0;
	Local_162[12 /*10*/].f_2 = "TX_REVERSE_N";
	Local_162[12 /*10*/].f_9 = 69;
	Local_162[13 /*10*/] = 10;
	Local_162[13 /*10*/].f_1 = 0;
	Local_162[13 /*10*/].f_2 = "TX_OFFROAD_N";
	Local_162[13 /*10*/].f_9 = 67;
	Local_162[14 /*10*/] = 10;
	Local_162[14 /*10*/].f_1 = 0;
	Local_162[14 /*10*/].f_2 = "TX_NEARMIS_N";
	Local_162[14 /*10*/].f_9 = 75;
}

int func_256()
{
	if (!unk_0x5D98D654CDC2165A(Local_262.f_41[0]))
	{
		func_258("TAXI_ASSETS_STREAMED - Loading A_M_Y_BUSINESS_01", &iLocal_339, 1000);
		return 0;
	}
	if (!unk_0x5D98D654CDC2165A(Local_262.f_41[1]))
	{
		func_258("TAXI_ASSETS_STREAMED - Loading A_M_Y_BUSINESS_02", &iLocal_339, 1000);
		return 0;
	}
	if (!unk_0x5D98D654CDC2165A(Local_262.f_41[2]))
	{
		func_258("TAXI_ASSETS_STREAMED - Loading A_M_Y_GOLFER_01", &iLocal_339, 1000);
		return 0;
	}
	if (!unk_0x11AE7F6A404414C9(iLocal_399))
	{
		return 0;
	}
	if (!func_257(&iLocal_339, 1))
	{
		func_258("TAXI_ASSETS_STREAMED - Waiting for assets...", &iLocal_339, 1000);
		return 0;
	}
	return 1;
}

int func_257(int iParam0, bool bParam1)
{
	if (!unk_0x5D98D654CDC2165A(func_21()))
	{
		func_258("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 1000);
		return 0;
	}
	if (bParam1)
	{
		if (!unk_0xE9CCF312047EBEE0("gestures@m@standing@casual"))
		{
			func_258("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 1000);
			return 0;
		}
	}
	if (!unk_0xE9CCF312047EBEE0("oddjobs@taxi@"))
	{
		func_258("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0xE9CCF312047EBEE0("oddjobs@towingcome_here"))
	{
		func_258("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0xE9CCF312047EBEE0("misscommon@response"))
	{
		func_258("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x8A7F864DAB908749(2))
	{
		func_258("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 1000);
		return 0;
	}
	return 1;
}

void func_258(char* sParam0, int iParam1, int iParam2)
{
	if (unk_0xE3903F59E2F22150() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = unk_0xE3903F59E2F22150();
}

void func_259(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			uParam0->f_123 = "TRS_STREAMING";
			break;
		
		case 2:
			uParam0->f_123 = " TRS_FINDING_LOCATION ";
			break;
		
		case 3:
			uParam0->f_123 = " TRS_SPAWNING ";
			break;
		
		case 4:
			uParam0->f_123 = " TRS_SPAWN_CAR ";
			break;
		
		case 5:
			uParam0->f_123 = " TRS_MANAGE_PICKUP ";
			break;
		
		case 6:
			uParam0->f_123 = " TRS_PASSENGER_ENTER ";
			break;
		
		case 7:
			uParam0->f_123 = " TRS_WAIT_FOR_TIME ";
			break;
		
		case 8:
			uParam0->f_123 = " TRS_WAIT_FOR_TAIL ";
			break;
		
		case 9:
			uParam0->f_123 = " TRS_DRIVING_PASSENGER ";
			break;
		
		case 10:
			uParam0->f_123 = " TRS_WAIT_FOR_FULL_STOP ";
			break;
		
		case 18:
			uParam0->f_123 = " TRS_PRE_CUTSCENE ";
			break;
		
		case 11:
			uParam0->f_123 = " TRS_SWITCH_JOB ";
			break;
		
		case 19:
			uParam0->f_123 = " TRS_CUTSCENE ";
			break;
		
		case 20:
			uParam0->f_123 = " TRS_CUTSCENE_02 ";
			break;
		
		case 13:
			uParam0->f_123 = " TRS_CHASE_DRIVER ";
			break;
		
		case 12:
			uParam0->f_123 = " TRS_SAVE_DAMSEL ";
			break;
		
		case 14:
			uParam0->f_123 = " TRS_REVEAL_DESTINATION ";
			break;
		
		case 15:
			uParam0->f_123 = " TRS_WAIT_PARK ";
			break;
		
		case 16:
			uParam0->f_123 = " TRS_SEND_TO_STORE ";
			break;
		
		case 17:
			uParam0->f_123 = " TRS_WAIT_1ST_STOP ";
			break;
		
		case 22:
			uParam0->f_123 = " TRS_DROPPING_OFF ";
			break;
		
		case 25:
			uParam0->f_123 = " TRS_ESCAPE_POLICE ";
			break;
		
		case 26:
			uParam0->f_123 = " TRS_POLICE_ESCAPED ";
			break;
		
		case 24:
			uParam0->f_123 = " TRS_TIE_UP_LOSE_ENDS ";
			break;
		
		case 27:
			uParam0->f_123 = " TRS_REGULAR_PAYMENT ";
			break;
		
		case 23:
			uParam0->f_123 = " TRS_ELIMATE_ALL_ENEMIES ";
			break;
		
		case 28:
			uParam0->f_123 = " TRS_SPECIAL_ENDING ";
			break;
		
		case 29:
			uParam0->f_123 = " TRS_SCORECARD_GRADE ";
			break;
		
		case 30:
			uParam0->f_123 = " TRS_CLEANUP ";
			break;
		
		case 21:
			uParam0->f_123 = " TRS_WAIT_FOR_PASSENGER ";
			break;
		
		default:
			uParam0->f_123 = " TRS IS UNIDENTIFIED - FIX THIS ";
			break;
	}
	uParam0->f_410 = iParam1;
}

void func_260(var uParam0)
{
	if (!unk_0xBC2FC12AD0FBF72E(uParam0->f_3))
	{
		uParam0->f_8 = func_202(uParam0->f_3, 0, 0);
		unk_0x1C95CD840303FC37(uParam0->f_8, "TAXI_BLIP_PASS");
		unk_0x4000D05DEA5F0328(1, 0f);
		unk_0x1C316779E36C1967(uParam0->f_8, true);
	}
}

int func_261(var uParam0, vector3 vParam1, vector3 vParam2, var uParam3)
{
	uParam0->f_11 = { vParam1 };
	uParam0->f_14 = { vParam2 };
	func_41(uParam0->f_14, 0);
	unk_0xB7350047030F7672(uParam0->f_14, 25f, 0, 0, 0, 0, false, 0);
	if (unk_0x765F6FEEFF39224F(Global_105275.f_225[0]))
	{
		(*uParam3)[0] = Global_105275.f_225[0];
		(*uParam3)[1] = Global_105275.f_225[1];
		(*uParam3)[2] = Global_105275.f_225[2];
		unk_0x0D21E1FDE062ED99((*uParam3)[0], true, 1);
		unk_0x0D21E1FDE062ED99((*uParam3)[1], true, 1);
		unk_0x0D21E1FDE062ED99((*uParam3)[2], true, 1);
	}
	else
	{
		(*uParam3)[0] = unk_0x9BA5CF280376EEA4(26, uParam3->f_41[0], uParam0->f_11, -178.76f, 1, true);
		(*uParam3)[1] = unk_0x9BA5CF280376EEA4(26, uParam3->f_41[1], unk_0x2CA911E7569D12EA((*uParam3)[0], 0.5f, 0.5f, 0f), 21.77f, 1, true);
		(*uParam3)[2] = unk_0x9BA5CF280376EEA4(26, uParam3->f_41[1], unk_0x2CA911E7569D12EA((*uParam3)[0], 0.5f, -0.5f, 0f), -147.25f, 1, true);
	}
	func_263(uParam0, uParam3[0]);
	uParam3->f_51[0] = 0;
	uParam3->f_51[1] = 0;
	uParam3->f_51[2] = 0;
	uParam3->f_12[0] = 0;
	uParam3->f_12[1] = 1;
	uParam3->f_12[2] = 2;
	if ((!unk_0xBC2FC12AD0FBF72E((*uParam3)[0]) && !unk_0xBC2FC12AD0FBF72E((*uParam3)[1])) && !unk_0xBC2FC12AD0FBF72E((*uParam3)[2]))
	{
		unk_0x11C4AF4137F2A4B5((*uParam3)[1], (*uParam3)[0], 0);
		unk_0x11C4AF4137F2A4B5((*uParam3)[2], (*uParam3)[0], 0);
		unk_0x11C4AF4137F2A4B5((*uParam3)[0], (*uParam3)[1], 0);
	}
	if (!unk_0xBC2FC12AD0FBF72E((*uParam3)[2]))
	{
		func_7(&(uParam0->f_244), 5, (*uParam3)[2], "TaxiPaulie", 0, 1);
		unk_0x5464B9731013E08C((*uParam3)[2], "TaxiPaulie");
		unk_0x5FEE418CE11E6DDE((*uParam3)[2], 317, true);
	}
	if (!unk_0xBC2FC12AD0FBF72E((*uParam3)[1]))
	{
		func_7(&(uParam0->f_244), 4, (*uParam3)[1], "TaxiClyde", 0, 1);
		unk_0x5464B9731013E08C((*uParam3)[1], "TaxiClyde");
		unk_0x5FEE418CE11E6DDE((*uParam3)[1], 317, true);
	}
	if (!unk_0xBC2FC12AD0FBF72E((*uParam3)[0]))
	{
		func_7(&(uParam0->f_244), 3, (*uParam3)[0], "TaxiDarren", 0, 1);
		unk_0x5464B9731013E08C((*uParam3)[0], "TaxiDarren");
		unk_0x5FEE418CE11E6DDE((*uParam3)[0], 317, true);
		unk_0x9315FCF6CFE2AB41("TAXI_Passenger", &(uParam0->f_413));
		unk_0xD2E80177F27FD43F(1, uParam0->f_413, 1862763509);
		unk_0x0648A75D3F60E864((*uParam3)[0], uParam0->f_413);
		func_262((*uParam3)[1], uParam0->f_413);
		func_262((*uParam3)[2], uParam0->f_413);
		return 1;
	}
	return 0;
}

void func_262(int iParam0, int iParam1)
{
	if (!unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		unk_0x0648A75D3F60E864(iParam0, iParam1);
	}
}

void func_263(var uParam0, var uParam1)
{
	if (!unk_0xBC2FC12AD0FBF72E(*uParam1))
	{
		uParam0->f_3 = *uParam1;
	}
}

void func_264(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (fParam2 > 0f)
			{
				func_107(&(uParam0->f_146[iVar0 /*3*/]), fParam2);
			}
			else
			{
				func_106(&(uParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (fParam2 > 0f)
	{
		func_107(&(uParam0->f_146[iParam1 /*3*/]), fParam2);
	}
	else
	{
		func_106(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam3)
	{
	}
}

void func_265()
{
	unk_0x13157A56158089D8();
	unk_0x0483D0035D6E46FD("oddjobs@taxi@gyn@cc@hotbox");
}

void func_266()
{
	unk_0xB815670C37E03CDE(Local_262.f_45[0]);
	unk_0xB815670C37E03CDE(Local_262.f_45[1]);
	unk_0xB815670C37E03CDE(Local_262.f_45[2]);
	unk_0xB815670C37E03CDE(Local_262.f_45[3]);
	unk_0xB815670C37E03CDE(Local_262.f_45[4]);
	unk_0xB815670C37E03CDE(joaat("stretch"));
	unk_0xB815670C37E03CDE(joaat("superd"));
	unk_0x0483D0035D6E46FD("oddjobs@taxi@gyn@cc@intro");
	unk_0x0483D0035D6E46FD("amb@world_human_stand_impatient@female@no_sign@exit");
	unk_0x0483D0035D6E46FD("amb@world_human_stand_impatient@female@no_sign@base");
	iLocal_399 = func_267();
}

int func_267()
{
	return unk_0x199B24FF79A52CCF("MIDSIZED_MESSAGE");
}

void func_268()
{
	unk_0xB815670C37E03CDE(Local_262.f_41[0]);
	unk_0xB815670C37E03CDE(Local_262.f_41[1]);
	unk_0xB815670C37E03CDE(Local_262.f_41[2]);
	func_269(1);
}

void func_269(bool bParam0)
{
	unk_0xB815670C37E03CDE(func_21());
	if (bParam0)
	{
		unk_0x0483D0035D6E46FD("gestures@m@standing@casual");
	}
	unk_0x0483D0035D6E46FD("oddjobs@taxi@");
	unk_0x0483D0035D6E46FD("oddjobs@towingcome_here");
	unk_0x0483D0035D6E46FD("misscommon@response");
	unk_0x2EE8D1440C9060EF("TAXI", 2);
	if (!func_24(Global_106565.f_19091, 128))
	{
		func_232(&(Global_106565.f_19091), 128);
	}
}

void func_270(var uParam0, var uParam1)
{
	int iVar0;
	
	if (*uParam1 <= 5)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			unk_0xCE689A8E8C42ED78(&(uParam0->f_60[iVar0 /*3*/]), 1);
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			uParam0->f_60[iVar0 /*3*/] = { *(uParam1[iVar0 /*3*/]) };
			unk_0x8950ED5730F62EE8(&(uParam0->f_60[iVar0 /*3*/]), 1);
			unk_0xCE689A8E8C42ED78(&(uParam0->f_60[iVar0 /*3*/]), 2);
			iVar0++;
		}
	}
}

void func_271(var uParam0, char* sParam1, int iParam2)
{
	*uParam0 = 0;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = sParam1;
}

void func_272(var uParam0, var uParam1, float fParam2)
{
	int iVar0;
	
	if (!unk_0xD62C4419A41F106A(uParam0->f_2, 0))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (!unk_0xD62C4419A41F106A(uParam1->f_4[iVar0], 0))
			{
				if (func_10(uParam0->f_2, uParam1->f_4[iVar0], 1) > fParam2)
				{
					unk_0x1F45B4626AC4A4C0(&(uParam1->f_4[iVar0]));
				}
			}
			iVar0++;
		}
	}
	if (!unk_0xD62C4419A41F106A(uParam1->f_10, 0))
	{
		if (func_10(uParam0->f_2, uParam1->f_10, 1) > fParam2)
		{
			unk_0x65F544B458249682(&(uParam1->f_10));
			unk_0x65F544B458249682(&(uParam1->f_11));
		}
	}
}

void func_273(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_411 == 0)
	{
		if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) == 0)
		{
			if (bParam2)
			{
				if (func_387(uParam0, 10) > (20f + 10f))
				{
					if (uParam0->f_112)
					{
						func_195(uParam0, 92, 1, 0, 0);
						uParam0->f_112 = 0;
					}
					else
					{
						func_195(uParam0, 83, 1, 0, 0);
					}
					uParam0->f_113 = 1;
					func_264(uParam0, 10, 0f, 1);
				}
			}
			else if (func_387(uParam0, 10) > 20f)
			{
				if (uParam0->f_112)
				{
					func_195(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_195(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_264(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_411 == 1)
	{
		if (func_387(uParam0, 10) > 30f)
		{
			if (!func_52())
			{
				if (uParam0->f_112)
				{
					func_195(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_195(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_264(uParam0, 10, 0f, 1);
			}
		}
	}
	if (func_24(uParam0->f_100, 64))
	{
		if (!func_16(&(Local_162[5 /*10*/].f_6)))
		{
			func_190(&(Local_162[5 /*10*/].f_6));
		}
		else if (func_104(&(Local_162[5 /*10*/].f_6)) > 6f)
		{
			if (func_296(uParam0))
			{
				if (uParam0->f_113)
				{
					func_195(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_195(uParam0, Local_162[5 /*10*/].f_9, 1, 0, 0);
				}
				func_295(uParam0, 1);
				func_293(5, uParam0);
				func_292(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 1))
	{
		if (!func_16(&(Local_162[0 /*10*/].f_6)))
		{
			func_190(&(Local_162[0 /*10*/].f_6));
		}
		else if (func_104(&(Local_162[0 /*10*/].f_6)) > 5f)
		{
			if (func_291(uParam0))
			{
				func_295(uParam0, 1);
				func_293(0, uParam0);
				if (uParam0->f_113)
				{
					func_195(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_195(uParam0, Local_162[0 /*10*/].f_9, 1, 0, 0);
				}
				func_292(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 2))
	{
		if (!func_16(&(Local_162[1 /*10*/].f_6)))
		{
			func_190(&(Local_162[1 /*10*/].f_6));
		}
		else if (func_104(&(Local_162[1 /*10*/].f_6)) > 5f)
		{
			if (func_290(uParam0))
			{
				func_295(uParam0, 1);
				func_293(1, uParam0);
				if (uParam0->f_113)
				{
					func_195(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_195(uParam0, Local_162[1 /*10*/].f_9, 1, 0, 0);
				}
				func_292(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 2048))
	{
		if (!func_16(&(Local_162[8 /*10*/].f_6)))
		{
			if (unk_0x765F6FEEFF39224F(uParam0->f_4))
			{
				uParam0->f_46 = unk_0xE80842D7B53F8525(uParam0->f_4);
				func_190(&(Local_162[8 /*10*/].f_6));
			}
		}
		else if (func_104(&(Local_162[8 /*10*/].f_6)) > 7f || Local_162[8 /*10*/].f_1 == 0)
		{
			if (func_289(uParam0))
			{
				func_295(uParam0, 1);
				func_293(8, uParam0);
				func_292(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 128))
	{
		if (!func_16(&(Local_162[6 /*10*/].f_6)))
		{
			func_190(&(Local_162[6 /*10*/].f_6));
		}
		else if (func_104(&(Local_162[6 /*10*/].f_6)) > 5f)
		{
			if (func_288(uParam0))
			{
				func_295(uParam0, 1);
				func_293(6, uParam0);
				if (uParam0->f_113)
				{
					func_195(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_195(uParam0, Local_162[6 /*10*/].f_9, 1, 0, 0);
				}
				func_292(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 32))
	{
		if (!func_16(&(Local_162[4 /*10*/].f_6)))
		{
			func_190(&(Local_162[4 /*10*/].f_6));
		}
		else if (func_104(&(Local_162[4 /*10*/].f_6)) > 4f)
		{
			if (func_287(uParam0))
			{
				func_295(uParam0, 1);
				func_293(4, uParam0);
				if (uParam0->f_113)
				{
					func_195(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_195(uParam0, Local_162[4 /*10*/].f_9, 1, 0, 0);
				}
				func_292(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 256))
	{
		if (!func_16(&(Local_162[7 /*10*/].f_6)))
		{
			func_190(&(Local_162[7 /*10*/].f_6));
		}
		else if (func_104(&(Local_162[7 /*10*/].f_6)) > 5f || Local_162[7 /*10*/].f_1 == 0)
		{
			if (func_286(uParam0))
			{
				func_293(7, uParam0);
				func_295(uParam0, 1);
				if (uParam0->f_113)
				{
					func_195(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_195(uParam0, Local_162[7 /*10*/].f_9, 1, 0, 1);
				}
				func_292(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 8))
	{
		if (!func_16(&(Local_162[9 /*10*/].f_6)))
		{
			func_190(&(Local_162[9 /*10*/].f_6));
		}
		else if (func_104(&(Local_162[9 /*10*/].f_6)) <= 7f)
		{
			unk_0xBADACD2849BC0E8C(unk_0x95B959F18401C09A());
		}
		else if (func_104(&(Local_162[9 /*10*/].f_6)) > 7f || Local_162[9 /*10*/].f_1 == 0)
		{
			if (func_285(uParam0))
			{
				func_295(uParam0, 1);
				func_293(9, uParam0);
				if (uParam0->f_113)
				{
					func_195(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_195(uParam0, Local_162[9 /*10*/].f_9, 1, 0, 1);
				}
				func_292(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 16384))
	{
		if (!func_16(&(Local_162[13 /*10*/].f_6)))
		{
			func_190(&(Local_162[13 /*10*/].f_6));
		}
		else if (func_104(&(Local_162[13 /*10*/].f_6)) > 10f)
		{
			if (func_279(uParam0))
			{
				func_295(uParam0, 1);
				func_293(13, uParam0);
				if (uParam0->f_113)
				{
					func_195(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_195(uParam0, Local_162[13 /*10*/].f_9, 1, 0, 0);
				}
				func_292(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 32768))
	{
		if (!func_16(&(Local_162[14 /*10*/].f_6)))
		{
			func_190(&(Local_162[14 /*10*/].f_6));
		}
		else if (func_104(&(Local_162[14 /*10*/].f_6)) > 7f)
		{
			if (func_278(uParam0))
			{
				func_295(uParam0, 1);
				func_293(14, uParam0);
				if (uParam0->f_113)
				{
					func_195(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_195(uParam0, Local_162[14 /*10*/].f_9, 1, 0, 0);
				}
				func_292(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 4096))
	{
		if (!func_16(&(Local_162[11 /*10*/].f_6)))
		{
			func_190(&(Local_162[11 /*10*/].f_6));
		}
		else if (func_104(&(Local_162[11 /*10*/].f_6)) > 8f)
		{
			if (func_277(uParam0))
			{
				func_295(uParam0, 1);
				func_293(11, uParam0);
				if (uParam0->f_113)
				{
					func_195(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_195(uParam0, Local_162[11 /*10*/].f_9, 1, 0, 0);
				}
				func_292(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 8192))
	{
		if (!func_16(&(Local_162[12 /*10*/].f_6)))
		{
			func_190(&(Local_162[12 /*10*/].f_6));
		}
		else if (func_104(&(Local_162[12 /*10*/].f_6)) > 5f)
		{
			if (func_276(uParam0))
			{
				func_295(uParam0, 1);
				func_293(12, uParam0);
				if (uParam0->f_113)
				{
					func_195(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_195(uParam0, Local_162[12 /*10*/].f_9, 1, 0, 0);
				}
				func_292(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_100, 4))
	{
		if (!func_16(&(Local_162[2 /*10*/].f_6)))
		{
			func_275(&(Local_162[2 /*10*/].f_6), 0f);
		}
		else if (func_104(&(Local_162[2 /*10*/].f_6)) > 5f)
		{
			if (func_274(uParam0))
			{
				if (uParam0->f_113)
				{
					func_195(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_195(uParam0, Local_162[2 /*10*/].f_9, 1, 0, 0);
				}
				func_295(uParam0, 1);
				func_293(2, uParam0);
				func_292(uParam0);
			}
		}
	}
}

int func_274(var uParam0)
{
	float fVar0;
	
	if (!unk_0xBC2FC12AD0FBF72E(uParam0->f_2))
	{
		if ((!unk_0xD93CFE80D83E2106(uParam0->f_2) && !func_16(&(Local_162[0 /*10*/].f_3))) && !func_16(&(Local_162[1 /*10*/].f_3)))
		{
			if (!func_16(&(Local_162[2 /*10*/].f_3)))
			{
				uParam0->f_37 = unk_0x8BB475EA09C9A0EB(uParam0->f_2);
				if (uParam0->f_37 > 10f)
				{
					func_190(&(Local_162[2 /*10*/].f_3));
				}
			}
			else if (func_104(&(Local_162[2 /*10*/].f_3)) > 0.9f)
			{
				uParam0->f_38 = uParam0->f_37;
				uParam0->f_37 = unk_0x8BB475EA09C9A0EB(uParam0->f_2);
				fVar0 = (uParam0->f_38 - uParam0->f_37);
				func_103(&(Local_162[2 /*10*/].f_3));
				if (fVar0 > 10f && uParam0->f_37 < 12f)
				{
					return 1;
				}
			}
		}
		else
		{
			func_103(&(Local_162[2 /*10*/].f_3));
		}
	}
	return 0;
}

void func_275(int iParam0, float fParam1)
{
	if (!func_16(iParam0))
	{
		func_107(iParam0, fParam1);
	}
}

int func_276(var uParam0)
{
	vector3 vVar0;
	
	if (unk_0x91D5C8283D19AF49(uParam0->f_4, 0))
	{
		vVar0 = { unk_0xB813C678F8323528(uParam0->f_4, 1) };
		if (vVar0.y < -10f && !func_16(&(Local_162[0 /*10*/].f_3)))
		{
			if (!func_16(&(Local_162[12 /*10*/].f_3)))
			{
				func_190(&(Local_162[12 /*10*/].f_3));
			}
			else if (func_104(&(Local_162[12 /*10*/].f_3)) > 5f)
			{
				func_103(&(Local_162[12 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_103(&(Local_162[12 /*10*/].f_3));
		}
	}
	return 0;
}

int func_277(var uParam0)
{
	vector3 vVar0;
	
	if ((((((unk_0x91D5C8283D19AF49(uParam0->f_4, 0) && !func_16(&(Local_162[0 /*10*/].f_3))) && !func_16(&(Local_162[1 /*10*/].f_3))) && !func_16(&(Local_162[5 /*10*/].f_3))) && !func_16(&(Local_162[9 /*10*/].f_3))) && !func_16(&(Local_162[7 /*10*/].f_3))) && !func_16(&(Local_162[8 /*10*/].f_3)))
	{
		vVar0 = { unk_0xB813C678F8323528(uParam0->f_4, 1) };
		if (unk_0x7EECA16E87982278(vVar0.x) > 2.5f && !func_16(&(Local_162[0 /*10*/].f_3)))
		{
			if (!func_16(&(Local_162[11 /*10*/].f_3)))
			{
				func_190(&(Local_162[11 /*10*/].f_3));
				fLocal_164 = vVar0.x;
			}
			else if (func_104(&(Local_162[11 /*10*/].f_3)) < 1.5f && (unk_0x7EECA16E87982278(fLocal_164) - unk_0x7EECA16E87982278(vVar0.x)) < 0f)
			{
				func_103(&(Local_162[11 /*10*/].f_3));
				return 1;
			}
			else if (func_104(&(Local_162[11 /*10*/].f_3)) >= 1.5f)
			{
				func_103(&(Local_162[11 /*10*/].f_3));
				return 0;
			}
		}
	}
	return 0;
}

int func_278(var uParam0)
{
	if (((((unk_0x91D5C8283D19AF49(uParam0->f_4, 0) && !func_16(&(Local_162[0 /*10*/].f_3))) && !func_16(&(Local_162[8 /*10*/].f_3))) && !func_16(&(Local_162[5 /*10*/].f_3))) && !func_16(&(Local_162[9 /*10*/].f_3))) && !func_16(&(Local_162[7 /*10*/].f_3)))
	{
		if (!func_16(&(Local_162[14 /*10*/].f_3)))
		{
			uParam0->f_5 = unk_0xACC2D6D9762C28BB(unk_0xFBB1F99A825CAB09(uParam0->f_4, true), 10f, 0, 260);
			if (unk_0x765F6FEEFF39224F(uParam0->f_5))
			{
				if ((unk_0x8BB475EA09C9A0EB(uParam0->f_4) > 15f && func_10(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!unk_0xD62C4419A41F106A(uParam0->f_5, 0) && !unk_0x67FFBB75D2430704(uParam0->f_5, -1, 0)))
				{
					func_190(&(Local_162[14 /*10*/].f_3));
				}
			}
		}
		else if ((func_104(&(Local_162[14 /*10*/].f_3)) < 1.5f && func_10(uParam0->f_5, uParam0->f_4, 1) > 4.5f) && !unk_0x1235B764F6C5379B(uParam0->f_5))
		{
			func_103(&(Local_162[14 /*10*/].f_3));
			return 1;
		}
		else if (func_104(&(Local_162[14 /*10*/].f_3)) >= 1.5f)
		{
			func_103(&(Local_162[14 /*10*/].f_3));
			return 0;
		}
		else if (unk_0x1235B764F6C5379B(uParam0->f_5))
		{
			func_103(&(Local_162[14 /*10*/].f_3));
			return 0;
		}
	}
	return 0;
}

int func_279(var uParam0)
{
	if (((unk_0x91D5C8283D19AF49(uParam0->f_4, 0) && !func_16(&(Local_162[9 /*10*/].f_3))) && !func_16(&(Local_162[7 /*10*/].f_3))) && !func_16(&(Local_162[4 /*10*/].f_3)))
	{
		if (!func_280(uParam0->f_4) && unk_0x8BB475EA09C9A0EB(uParam0->f_4) > 15f)
		{
			if (!func_16(&(Local_162[13 /*10*/].f_3)))
			{
				func_190(&(Local_162[13 /*10*/].f_3));
			}
			else if (func_104(&(Local_162[13 /*10*/].f_3)) > 5f)
			{
				func_103(&(Local_162[13 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_103(&(Local_162[13 /*10*/].f_3));
		}
	}
	return 0;
}

bool func_280(int iParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	vector3 vVar7;
	vector3 vVar8;
	float fVar9;
	
	unk_0xC6CDE40F70F13196(unk_0xFBB1F99A825CAB09(iParam0, true), 1, &vVar0, 1, 3f, 0f);
	unk_0xC6CDE40F70F13196(unk_0xFBB1F99A825CAB09(iParam0, true), 2, &vVar1, 1, 3f, 0f);
	unk_0x446BC6EBC42BAFA8(vVar0, -1, &vVar2);
	fVar9 = vmag(vVar2 - vVar0);
	vVar3 = { func_284((vVar1.x - vVar0.x), (vVar1.y - vVar0.y), 0f) };
	vVar4 = { func_283(vVar3, 0) * Vector(fVar9, fVar9, fVar9) };
	vVar3 = { vVar3 * Vector(2f, 2f, 2f) };
	vVar5 = { vVar0 - vVar3 + vVar4 };
	vVar6 = { vVar0 - vVar3 - vVar4 };
	vVar7 = { vVar1 + vVar3 + vVar4 };
	vVar8 = { vVar1 + vVar3 - vVar4 };
	vVar8 = { vVar8 };
	return func_281(unk_0xFBB1F99A825CAB09(iParam0, true), vVar5, vVar6, vVar7);
}

int func_281(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	
	vParam0.z = 0f;
	vParam1.z = 0f;
	vParam2.z = 0f;
	vParam3.z = 0f;
	vVar0 = { func_284(vParam2 - vParam1) };
	vVar1 = { func_284(vParam3 - vParam1) };
	fVar2 = func_282(vParam0, vVar0);
	fVar3 = func_282(vParam1, vVar0);
	fVar4 = func_282(vParam2, vVar0);
	fVar5 = func_282(vParam0, vVar1);
	fVar6 = func_282(vParam1, vVar1);
	fVar7 = func_282(vParam3, vVar1);
	if (fVar3 > fVar4)
	{
		fVar8 = fVar3;
		fVar3 = fVar4;
		fVar4 = fVar8;
	}
	if (fVar2 < fVar3 || fVar2 > fVar4)
	{
		return 0;
	}
	if (fVar6 > fVar7)
	{
		fVar9 = fVar6;
		fVar6 = fVar7;
		fVar7 = fVar9;
	}
	if (fVar5 < fVar6 || fVar5 > fVar7)
	{
		return 0;
	}
	return 1;
}

float func_282(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_283(vector3 vParam0, int iParam1)
{
	vector3 vVar0;
	
	switch (iParam1)
	{
		case 0:
			vVar0.x = -vParam0.y;
			vVar0.y = vParam0.x;
			break;
		
		case 1:
			vVar0.x = -vParam0.x;
			vVar0.y = -vParam0.y;
			break;
		
		case 2:
			vVar0.x = vParam0.y;
			vVar0.y = -vParam0.x;
			break;
	}
	vVar0.z = vParam0.z;
	return vVar0;
}

Vector3 func_284(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

int func_285(var uParam0)
{
	if (unk_0x91D5C8283D19AF49(uParam0->f_4, 0))
	{
		if (unk_0x7BDC41A7CA0C77A2(uParam0->f_4, -1, 0) == unk_0x33CD235DF1E6A94E())
		{
			if (unk_0x7E8740F26D4CAB87(unk_0x95B959F18401C09A()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_286(var uParam0)
{
	if (unk_0x91D5C8283D19AF49(uParam0->f_4, 0))
	{
		if (unk_0x7BDC41A7CA0C77A2(uParam0->f_4, -1, 0) == unk_0x33CD235DF1E6A94E())
		{
			if (unk_0x95BBE5C8D52FE24B(uParam0->f_4))
			{
				if (!iLocal_163)
				{
					if (unk_0x582A50CDE1F806AE(uParam0->f_4) <= -145f || unk_0x582A50CDE1F806AE(uParam0->f_4) >= 145f)
					{
						iLocal_163 = 1;
					}
				}
			}
			else if (iLocal_163)
			{
				if (unk_0x582A50CDE1F806AE(uParam0->f_4) <= 35f && unk_0x582A50CDE1F806AE(uParam0->f_4) >= -35f)
				{
					iLocal_163 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_287(var uParam0)
{
	int iVar0;
	
	if (unk_0x91D5C8283D19AF49(uParam0->f_4, 0))
	{
		iVar0 = unk_0xD6F2465C123AFABB(unk_0x95B959F18401C09A());
		if (iVar0 == 0)
		{
			if (!func_16(&(Local_162[4 /*10*/].f_3)))
			{
				func_190(&(Local_162[4 /*10*/].f_3));
			}
			else if (func_104(&(Local_162[4 /*10*/].f_3)) > 2f)
			{
				func_103(&(Local_162[4 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_103(&(Local_162[4 /*10*/].f_3));
		}
	}
	return 0;
}

int func_288(var uParam0)
{
	int iVar0;
	
	if (unk_0x91D5C8283D19AF49(uParam0->f_4, 0))
	{
		iVar0 = unk_0x175878EE6AE912F7(unk_0x95B959F18401C09A());
		if (iVar0 == 0)
		{
			if (!func_16(&(Local_162[6 /*10*/].f_3)))
			{
				func_190(&(Local_162[6 /*10*/].f_3));
			}
			else if (func_104(&(Local_162[6 /*10*/].f_3)) > 3.5f)
			{
				func_103(&(Local_162[6 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_103(&(Local_162[6 /*10*/].f_3));
		}
	}
	return 0;
}

int func_289(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x91D5C8283D19AF49(uParam0->f_4, 0))
	{
		if (unk_0x0D386FBDF1E8CD84(uParam0->f_4))
		{
			iVar0 = unk_0xE80842D7B53F8525(uParam0->f_4);
			iVar1 = (uParam0->f_46 - iVar0);
			uParam0->f_46 = iVar0;
			unk_0x0D847D71D9E6142E(uParam0->f_4);
			if (IntToFloat(iVar1) > 10f)
			{
				if (uParam0->f_113)
				{
					func_195(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_195(uParam0, 72, 1, 0, 1);
				}
				func_103(&(Local_162[2 /*10*/].f_6));
				return 1;
			}
		}
	}
	return 0;
}

int func_290(var uParam0)
{
	vector3 vVar0;
	
	if (unk_0x91D5C8283D19AF49(uParam0->f_4, 0))
	{
		vVar0 = { unk_0xB813C678F8323528(uParam0->f_4, 1) };
		if (unk_0x7EECA16E87982278(vVar0.x) > 3f && !func_16(&(Local_162[0 /*10*/].f_3)))
		{
			if (!func_16(&(Local_162[1 /*10*/].f_3)))
			{
				func_190(&(Local_162[1 /*10*/].f_3));
			}
			else if (func_104(&(Local_162[1 /*10*/].f_3)) > 1.2f)
			{
				func_103(&(Local_162[1 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_103(&(Local_162[1 /*10*/].f_3));
		}
	}
	return 0;
}

int func_291(var uParam0)
{
	if (unk_0x91D5C8283D19AF49(uParam0->f_4, 0))
	{
		if (!unk_0x156573D1AADB54ED(uParam0->f_4) && unk_0x7DD221C91135596A(uParam0->f_4))
		{
			if (!func_16(&(Local_162[0 /*10*/].f_3)))
			{
				func_190(&(Local_162[0 /*10*/].f_3));
			}
			else if (func_104(&(Local_162[0 /*10*/].f_3)) > 0.7f)
			{
				func_103(&(Local_162[0 /*10*/].f_3));
				func_106(&(Local_162[1 /*10*/].f_6));
				return 1;
			}
		}
		else
		{
			func_103(&(Local_162[0 /*10*/].f_3));
		}
	}
	return 0;
}

void func_292(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_16(&(Local_162[iVar0 /*10*/].f_6)))
		{
			func_106(&(Local_162[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	func_264(uParam0, 10, 0f, 1);
	unk_0xBADACD2849BC0E8C(unk_0x95B959F18401C09A());
}

void func_293(int iParam0, var uParam1)
{
	Local_162[iParam0 /*10*/].f_1++;
	func_294(uParam1, iParam0);
	func_103(&(Local_162[iParam0 /*10*/].f_6));
	uParam1->f_112 = 1;
}

void func_294(var uParam0, int iParam1)
{
	uParam0->f_76 = (uParam0->f_76 + Local_162[iParam1 /*10*/]);
}

void func_295(var uParam0, int iParam1)
{
	uParam0->f_104 = (uParam0->f_104 + iParam1);
}

int func_296(var uParam0)
{
	if (unk_0x91D5C8283D19AF49(uParam0->f_4, 0))
	{
		if (unk_0x8BB475EA09C9A0EB(uParam0->f_4) > 25f)
		{
			if (!func_16(&(Local_162[5 /*10*/].f_3)))
			{
				func_190(&(Local_162[5 /*10*/].f_3));
			}
			else if (func_104(&(Local_162[5 /*10*/].f_3)) > 3.5f)
			{
				func_103(&(Local_162[5 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_103(&(Local_162[5 /*10*/].f_3));
		}
	}
	return 0;
}

void func_297(var uParam0, char* sParam1, int iParam2)
{
	vector3 vVar0;
	
	func_183();
	func_410(2);
	vVar0 = { func_314() };
	if ((!unk_0x786AF4A44E1B5B4B(&vVar0) && func_52()) && !unk_0xCE3CFF625BEBAA04(&vVar0, "NULL"))
	{
	}
	else
	{
		unk_0xD362430CD61A9B08();
		unk_0xEDF90B96BED57BCE(1);
		StringCopy(&vVar0, uParam0->f_143, 24);
		if (!unk_0xD62C4419A41F106A(uParam0->f_3, 0))
		{
			if (!func_124(uParam0))
			{
				if (unk_0x1CE8F0A08E65CA6A(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
				{
					unk_0xCCAF0916949DD646(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -8f);
				}
				else if (unk_0x1CE8F0A08E65CA6A(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
				{
					unk_0xCCAF0916949DD646(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -8f);
				}
				else if (unk_0x1CE8F0A08E65CA6A(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
				{
					unk_0xCCAF0916949DD646(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -8f);
				}
			}
		}
		uParam0->f_109 = 1;
		uParam0->f_121 = sParam1;
		uParam0->f_415 = iParam2;
		func_264(uParam0, 3, 0, 0);
		if (iParam2 == 8 || iParam2 == 18)
		{
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_aband2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_aband1", 24);
				}
				func_312(uParam0, &vVar0);
			}
			else if (!unk_0xBC2FC12AD0FBF72E(uParam0->f_3))
			{
				func_310(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 10)
		{
			if (uParam0->f_115)
			{
				StringConCat(&vVar0, "_aggro2", 24);
			}
			else
			{
				StringConCat(&vVar0, "_aggro", 24);
			}
			func_312(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (uParam0->f_415 == 15)
		{
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&vVar0, "_lost1", 24);
			func_312(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&vVar0, "_spotd1", 24);
			func_312(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&vVar0, "_wntd1", 24);
			func_312(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&vVar0, "_spook", 24);
			func_312(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
			if (func_124(uParam0))
			{
				if (unk_0x61DFE32FB87BC784(uParam0->f_4))
				{
					func_308(uParam0, 4096, 0);
				}
				else
				{
					func_308(uParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&vVar0, "_hit2", 24);
			func_312(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&vVar0, "_jak", 24);
			func_312(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 14)
		{
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_shot2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_shot1", 24);
				}
				func_312(uParam0, &vVar0);
			}
			else if (!unk_0xBC2FC12AD0FBF72E(uParam0->f_3))
			{
				func_310(uParam0->f_3, "CALL_COPS_COMMIT", uParam0->f_145, 4);
			}
			unk_0x98F04A4FFB4AD01C(unk_0x95B959F18401C09A(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&vVar0, "_shot1", 24);
			func_312(uParam0, &vVar0);
			unk_0x98F04A4FFB4AD01C(unk_0x95B959F18401C09A(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&vVar0, "_shot1", 24);
			func_312(uParam0, &vVar0);
			unk_0x98F04A4FFB4AD01C(unk_0x95B959F18401C09A(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_CK", 24);
		}
		else if (iParam2 == 11)
		{
			func_53(8, 0);
			iLocal_57[3] = 1;
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_noDri1", 24);
				}
				func_312(uParam0, &vVar0);
			}
			else if (!unk_0xBC2FC12AD0FBF72E(uParam0->f_3))
			{
				func_310(uParam0->f_3, "GENERIC_INSULT_MED", uParam0->f_145, 4);
			}
			func_308(uParam0, 0, 0);
			func_312(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_WAT", 24);
		}
		else if (iParam2 == 0)
		{
			func_53(8, 0);
			iLocal_57[3] = 1;
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_noDri1", 24);
				}
				func_312(uParam0, &vVar0);
			}
			else if (!unk_0xBC2FC12AD0FBF72E(uParam0->f_3))
			{
				func_310(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			func_312(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DR", 24);
		}
		else if (iParam2 == 1)
		{
			func_53(8, 0);
			iLocal_57[3] = 1;
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_noDri1", 24);
				}
				func_312(uParam0, &vVar0);
			}
			else if (!unk_0xBC2FC12AD0FBF72E(uParam0->f_3))
			{
				func_310(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&vVar0, "OJTX_QUIT_", 24);
			func_307(&vVar0);
			func_298(&(uParam0->f_244), "OJTXAUD", &vVar0, 7, 0, 0, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_CNCL", 24);
		}
		else if (iParam2 == 20)
		{
			if (uParam0->f_115)
			{
				StringConCat(&vVar0, "_aband2", 24);
			}
			else
			{
				StringConCat(&vVar0, "_fail1", 24);
			}
			func_312(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else
		{
			if (uParam0->f_411 != 9)
			{
				if (iParam2 != 21)
				{
					StringConCat(&vVar0, "_Fail1", 24);
				}
				else
				{
					StringConCat(&vVar0, "_aband1", 24);
				}
				if (uParam0->f_410 > 5)
				{
					func_312(uParam0, &vVar0);
				}
			}
			else if (!unk_0xBC2FC12AD0FBF72E(uParam0->f_3))
			{
				func_310(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
			func_53(3, 0);
		}
		func_264(uParam0, 3, 0f, 1);
	}
}

int func_298(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_306(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_299(sParam2, iParam3, 0);
}

int func_299(char* sParam0, int iParam1, bool bParam2)
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
					func_184();
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
		if (func_305(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_304();
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
				func_303();
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
				if (func_302())
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
			if (func_33())
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
			func_301();
			Global_15876 = bParam2;
		}
		Global_15868 = iParam1;
		StringCopy(&Global_15485, sParam0, 24);
		Global_14732 = 0;
		func_300();
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
		func_184();
	}
	return 0;
}

void func_300()
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

void func_301()
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

int func_302()
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

void func_303()
{
	if (func_78(14))
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
		Global_14553 = func_100();
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

void func_304()
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

bool func_305(int iParam0, int iParam1)
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

void func_306(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_307(char* sParam0)
{
	switch (func_3(unk_0x33CD235DF1E6A94E()))
	{
		case 0:
			StringConCat(sParam0, "M", 24);
			break;
		
		case 2:
			StringConCat(sParam0, "T", 24);
			break;
		
		case 1:
			StringConCat(sParam0, "F", 24);
			break;
		
		default:
			StringConCat(sParam0, "M", 24);
			break;
	}
}

void func_308(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xD62C4419A41F106A(uParam0->f_3, 0))
	{
		unk_0x4A852F02088ECC9D(uParam0->f_3, false);
		unk_0x0D847D71D9E6142E(uParam0->f_3);
		unk_0x33F6BE48E356DA27(uParam0->f_3, 3, false);
		unk_0x28F648743D7DE312(uParam0->f_3, 17, true);
		unk_0xED68CDDDE25A144E(uParam0->f_3);
		if ((func_113(uParam0->f_3, uParam0->f_29, 1) <= 200f && !func_118(uParam0->f_29)) && !bParam2)
		{
			func_309(uParam0);
		}
		else
		{
			unk_0x33F6BE48E356DA27(uParam0->f_3, 1024, true);
			unk_0x33F6BE48E356DA27(uParam0->f_3, 131072, true);
			unk_0x99414FB2D30425C1(&iVar0);
			unk_0x07C339D4328CA16C(0, 0, iParam1);
			if (uParam0->f_415 == 8)
			{
				unk_0xBD4591245C650283(0, 1193033728, 0);
			}
			else
			{
				unk_0xECCD4FDA45197F97(0, unk_0x33CD235DF1E6A94E(), 1000f, -1, 0, 0);
			}
			unk_0x976357E602648DDF(0, 0);
			unk_0xC734F59A13D39AEF(iVar0);
			unk_0x13A2D602CD10CBAC(uParam0->f_3, iVar0);
			unk_0xA7A57E7757ED035E(&iVar0);
		}
		unk_0x897EF720254BBEA3(uParam0->f_3, true);
	}
}

void func_309(var uParam0)
{
	int iVar0;
	
	if (!unk_0xD62C4419A41F106A(uParam0->f_3, 0))
	{
		if (func_42(func_43(), uParam0->f_29, 0))
		{
			if (uParam0->f_411 == 2)
			{
				unk_0x3C990C409B3845DE(uParam0->f_3, 84.9058f);
				unk_0x897EF720254BBEA3(uParam0->f_3, true);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0x3C990C409B3845DE(uParam0->f_3, 68.3138f);
				unk_0x897EF720254BBEA3(uParam0->f_3, true);
			}
			else
			{
				unk_0xBD4591245C650283(uParam0->f_3, 1193033728, 0);
			}
		}
		else
		{
			unk_0xED68CDDDE25A144E(uParam0->f_3);
			unk_0xA7A57E7757ED035E(&iVar0);
			unk_0x99414FB2D30425C1(&iVar0);
			unk_0x07C339D4328CA16C(0, 0, 0);
			unk_0x976357E602648DDF(0, 0);
			unk_0x7E268975AF5EA74F(0, uParam0->f_29, 1f, -1, 1048576000, 0, 1193033728);
			if (uParam0->f_411 == 2)
			{
				unk_0xF6D940C3CF409665(0, "WORLD_HUMAN_AA_SMOKE", 0, 0);
			}
			else if (uParam0->f_411 == 0)
			{
				unk_0x19E546F93EAB3D29(0, 1);
				unk_0x7E268975AF5EA74F(0, 813.9421f, 1172.681f, 329.7988f, 1f, -1, 1048576000, 0, 1193033728);
				unk_0x43EAD1F94EC8561F(0, 151.7794f, 0);
				unk_0xF6D940C3CF409665(0, "WORLD_HUMAN_SMOKING_POT", 0, 0);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0xA9128AA30F3036C7(0, uParam0->f_29, 15f, 0);
			}
			else if (uParam0->f_411 == 1)
			{
				unk_0xA9128AA30F3036C7(0, uParam0->f_29, 15f, 20000);
				unk_0xBD4591245C650283(0, 1193033728, 0);
			}
			else
			{
				unk_0x108754262311D34F(0, "oddjobs@taxi@", "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x108754262311D34F(0, "gestures@m@standing@casual", "gesture_pleased", 8f, -8f, -1, 0, 0, 0, 0, 0);
			}
			if (unk_0x89F20C4A841A3473(uParam0->f_29, 15f, 1))
			{
				unk_0xA9128AA30F3036C7(0, uParam0->f_29, 15f, 0);
			}
			else
			{
				unk_0xBD4591245C650283(0, 1193033728, 0);
			}
			unk_0xC734F59A13D39AEF(iVar0);
			unk_0x13A2D602CD10CBAC(uParam0->f_3, iVar0);
			unk_0xA7A57E7757ED035E(&iVar0);
		}
		unk_0x897EF720254BBEA3(uParam0->f_3, true);
	}
}

void func_310(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xF0502D0584CCD9A6(iParam0, sParam1, sParam2, func_311(iParam3), 0);
}

int func_311(int iParam0)
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

void func_312(var uParam0, char* sParam1)
{
	if (func_313(uParam0))
	{
		func_298(&(uParam0->f_244), uParam0->f_144, sParam1, 9, 0, 0, 0);
	}
}

int func_313(var uParam0)
{
	if (!unk_0xD62C4419A41F106A(uParam0->f_3, 0))
	{
		if (func_10(unk_0x33CD235DF1E6A94E(), uParam0->f_3, 1) < 40f && !unk_0xC30D5C4DCAC8020A(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_314()
{
	struct<6> Var0;
	int iVar1;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15866 == 4)
	{
		iVar1 = unk_0xF26F606F8B36E2AC();
		iVar1 = (iVar1 + Global_16876);
		if (iVar1 > -1)
		{
			return Global_14734[iVar1 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

int func_315(var uParam0)
{
	return uParam0->f_118;
}

void func_316()
{
	func_345(&Local_260);
	if (func_344(&Local_260, &Local_348))
	{
		switch (Local_348.f_27)
		{
			case 0:
				if (Local_260.f_410 == 9)
				{
					if (!func_140(&Local_260))
					{
						if (func_343("TAXI_OBJ_CC1") || unk_0xE38E3CF1625A4145(Local_262.f_36[2]))
						{
							Local_348.f_27++;
						}
						else if (func_173(&Local_260) != 10)
						{
							func_195(&Local_260, 10, 1, 0, 1);
						}
					}
				}
				break;
			
			case 1:
				if ((func_173(&Local_260) > 10 && func_173(&Local_260) != 15) && !func_140(&Local_260))
				{
					func_195(&Local_260, 15, 1, 0, 0);
					if (bLocal_347)
					{
					}
					func_189(&Local_260, 7);
				}
				break;
			
			case 2:
				if (!Local_262.f_66)
				{
					Local_262.f_66 = 1;
					bLocal_248 = true;
				}
				if (func_113(Local_260.f_4, Local_262.f_16[2 /*3*/], 1) < 530f)
				{
					Local_348.f_27++;
				}
				if (func_387(&Local_260, 11) > 17f || func_113(Local_260.f_4, Local_262.f_16[2 /*3*/], 1) < 700f)
				{
					func_195(&Local_260, 95, 1, 0, 0);
					if (bLocal_347)
					{
					}
				}
				else if ((unk_0xE3903F59E2F22150() % 1000) < 50)
				{
				}
				break;
			
			case 3:
				if ((func_173(&Local_260) > 10 && func_173(&Local_260) != 16) && !func_140(&Local_260))
				{
					func_195(&Local_260, 16, 1, 0, 0);
					if (bLocal_347)
					{
					}
				}
				break;
			
			case 4:
				if (func_113(Local_260.f_4, Local_262.f_16[2 /*3*/], 1) < 530f)
				{
					Local_348.f_27++;
				}
				if (func_387(&Local_260, 11) > 8f || func_113(Local_260.f_4, Local_262.f_16[2 /*3*/], 1) < 700f)
				{
					func_195(&Local_260, 94, 1, 0, 0);
					if (bLocal_347)
					{
					}
				}
				else if ((unk_0xE3903F59E2F22150() % 1000) < 50)
				{
				}
				break;
			
			case 5:
				if (func_387(&Local_260, 11) > 20f || func_113(Local_260.f_4, Local_262.f_16[2 /*3*/], 1) < 530f)
				{
					if (!iLocal_251)
					{
						iLocal_251 = 1;
					}
					if (!bLocal_249)
					{
						func_195(&Local_260, 96, 1, 0, 0);
						bLocal_249 = true;
						if (bLocal_347)
						{
						}
					}
				}
				else if ((unk_0xE3903F59E2F22150() % 1000) < 50)
				{
				}
				break;
			
			case 6:
				if (func_387(&Local_260, 18) > unk_0x9562E33C057F7589(8f, 16f))
				{
				}
				break;
			}
	}
	func_317(&Local_260, &uLocal_351, &Local_348, bLocal_347);
}

int func_317(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	func_325(uParam0, uParam1);
	if (((*uParam2 == -1 && uParam0->f_410 < 29) && !uParam0->f_109) && !func_142(uParam0, 2))
	{
		if (func_324(uParam1))
		{
			*uParam2 = 1;
			if (bParam3)
			{
			}
		}
		else if ((unk_0xE3903F59E2F22150() % 2000) < 50)
		{
		}
	}
	if (!uParam0->f_109)
	{
		switch (*uParam2)
		{
			case 1:
				if (!func_323(uParam0))
				{
					uParam2->f_7 = { func_322(uParam1) };
					func_298(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam3)
					{
					}
				}
				break;
			
			case 2:
				if (func_52())
				{
					uParam2->f_13 = { func_198() };
					if (unk_0xCE3CFF625BEBAA04(&(uParam2->f_13), &(uParam2->f_7)))
					{
						if (bParam3)
						{
						}
					}
				}
				else
				{
					func_233(&(uParam2->f_26), round(pow(2f, to_float(uParam2->f_27))));
					uParam2->f_27++;
					func_320(uParam1);
					func_264(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 3:
				if (func_141(uParam0))
				{
					if (func_52())
					{
						func_264(uParam0, 17, 0f, 1);
						uParam2->f_1 = { func_319() };
						if (unk_0x002F527E1A3238DC(unk_0x3EE1295CEFBEFED4()) >= 1)
						{
							*uParam2 = 0;
						}
						else
						{
							*uParam2 = 4;
						}
					}
				}
				else if (func_52())
				{
					uParam2->f_19 = { func_314() };
				}
				else
				{
					func_233(&(uParam2->f_26), round(pow(2f, to_float(uParam2->f_27))));
					uParam2->f_27++;
					func_320(uParam1);
					func_264(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 4:
				if (((!func_142(uParam0, 14) && !func_52()) && !func_141(uParam0)) && func_387(uParam0, 18) > 1f)
				{
					func_264(uParam0, 18, 0, 0);
					*uParam2 = 6;
					if (bParam3)
					{
					}
				}
				break;
			
			case 6:
				if (!func_52())
				{
					if (func_387(uParam0, 18) > 1f)
					{
						if (!unk_0x786AF4A44E1B5B4B(&(uParam2->f_1)))
						{
							func_318(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_13), &(uParam2->f_1), 8, 0, 0);
							if (bParam3)
							{
							}
						}
						*uParam2 = 3;
					}
				}
				break;
			
			case 7:
				if (!func_52())
				{
					func_233(&(uParam2->f_26), round(pow(2f, to_float(uParam2->f_27))));
					uParam2->f_27++;
					func_320(uParam1);
					func_264(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
			}
	}
	return 0;
}

int func_318(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_306(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15873 = 0;
	Global_15880 = 0;
	Global_15875 = 0;
	Global_16857 = 0;
	Global_16859 = 0;
	Global_16863 = 1;
	StringCopy(&Global_16870, sParam3, 24);
	Global_2621441 = 0;
	return func_299(sParam2, iParam4, 0);
}

struct<6> func_319()
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15866 == 4)
	{
		iVar1 = unk_0xF26F606F8B36E2AC();
		iVar1 = (iVar1 + Global_16876);
		iVar2 = iVar1 + 1;
		if (iVar2 > -1 && iVar1 > -1)
		{
			if (unk_0xEAF855A7DC28BC8D(&(Global_14734[iVar2 /*6*/])))
			{
				return Global_14734[iVar2 /*6*/];
			}
			else
			{
				iVar3 = iVar2;
				while (iVar3 < 70)
				{
					if (unk_0xEAF855A7DC28BC8D(&(Global_14734[iVar3 /*6*/])))
					{
						return Global_14734[iVar3 /*6*/];
						iVar3 = 70;
					}
					iVar3++;
				}
				return Var0;
			}
			return Global_14734[iVar1 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

void func_320(var uParam0)
{
	int iVar0;
	
	iVar0 = func_321(uParam0);
	if (iVar0 > -1)
	{
		func_22(&((uParam0[iVar0 /*8*/])->f_7), 2);
		func_22(&((uParam0[iVar0 /*8*/])->f_7), 4);
		func_232(&((uParam0[iVar0 /*8*/])->f_7), 8);
		StringCopy(uParam0[iVar0 /*8*/], func_139(), 24);
	}
}

int func_321(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_24((uParam0[iVar0 /*8*/])->f_7, 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

struct<6> func_322(var uParam0)
{
	int iVar0;
	struct<6> Var1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_24((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			Var1 = { *(uParam0[iVar0 /*8*/]) };
			func_232(&((uParam0[iVar0 /*8*/])->f_7), 4);
		}
		iVar0++;
	}
	return Var1;
}

int func_323(var uParam0)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (func_177("TX_OBJ_NEX_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_177("TX_OBJ_TIE_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_177("TX_OBJ_DL_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((func_177("TX_OBJ_GYB_DO", 0, 0) || func_177("TAXI_OBJ_GYB", 0, 0)) || func_177("TAXI_OBJ_GYB_2", 0, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_177("TX_OBJ_TTB_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 5:
			if ((func_177("TX_OBJ_CYI_DO", 0, 0) || func_177("TAXI_OBJ_CYI_01", 0, 0)) || func_177("TAXI_OBJ_CYI_02", 0, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (((func_177("TX_OBJ_GYN_DO", 0, 0) || func_177("TAXI_OBJ_GYN", 0, 0)) || func_177("TAXI_OBJ_GYN_TG", 0, 0)) || func_177("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return 1;
			}
			break;
		
		case 7:
			if ((func_177("TAXI_OBJ_CC1", 0, 0) || func_177("TAXI_OBJ_CC2", 0, 0)) || func_177("TAXI_OBJ_CC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if ((func_177("TAXI_OBJ_FTC1", 0, 0) || func_177("TAXI_OBJ_FTC2", 0, 0)) || func_177("TAXI_OBJ_FTC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 9:
			if (func_177("TX_OBJ_PRO_DO", 0, 0))
			{
				return 1;
			}
			break;
	}
	return (((((func_177("TAXI_OBJ_GETRUN", 0, 0) || func_177("TAXI_OBJ_DRIVE", 0, 0)) || func_177("TAXI_OBJ_RETURN", 0, 0)) || func_177("TAXI_OBJ_POL", 0, 0)) || func_177("TAXI_OBJ_RUNOUT", 0, 0)) || func_177("TAXI_OBJ_POL", 0, 0));
}

int func_324(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_24((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_325(var uParam0, var uParam1)
{
	vector3 vVar0;
	char cVar1[48];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5[8];
	bool bVar6;
	
	if (func_323(uParam0))
	{
	}
	else if (!uParam0->f_110)
	{
	}
	else if (func_142(uParam0, 14))
	{
		StringCopy(&vVar0, uParam0->f_143, 24);
		switch (func_173(uParam0))
		{
			case 55:
				StringConCat(&vVar0, "_lvMe1", 24);
				cVar1 = { vVar0 };
				func_342(&(uParam0->f_93), 3, &cVar1, 0, 1, 0);
				func_341(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_264(uParam0, 16, 0, 0);
				func_340(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_223(uParam0, 0, 0);
				break;
			
			case 2:
				if (!func_52())
				{
					if (uParam0->f_115)
					{
						StringConCat(&vVar0, "_retrn2", 24);
					}
					else
					{
						StringConCat(&vVar0, "_retrn1", 24);
					}
					if (uParam0->f_411 != 9)
					{
						func_339(uParam0, &vVar0, 0, 0, 8);
					}
				}
				else
				{
					func_336(uParam0, vVar0, func_338(uParam0, 2));
				}
				if (func_24(uParam0->f_98, 4))
				{
					func_264(uParam0, 16, 0, 0);
					func_223(uParam0, 0, 0);
				}
				func_159(uParam0, &(uParam0->f_98), 4, 3);
				break;
			
			case 3:
				if (func_387(uParam0, 16) > 1f)
				{
					func_161(1);
					if (uParam0->f_411 == 9)
					{
						func_217("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						func_217("TAXI_VIP_RETURN", 7500, 1);
					}
					func_264(uParam0, 16, 0, 0);
					func_223(uParam0, 0, 0);
				}
				break;
			
			case 65:
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_aggro2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_aggro", 24);
				}
				uParam0->f_107++;
				if (uParam0->f_411 != 9)
				{
					func_339(uParam0, &vVar0, 0, 1, 8);
				}
				else if (!unk_0xBC2FC12AD0FBF72E(uParam0->f_3))
				{
					func_310(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_145, 4);
				}
				break;
		}
	}
	else if ((func_387(uParam0, 16) > func_158(uParam0->f_411 == 0, 1f, 4f) && !uParam0->f_142) && (((uParam0->f_411 == 0 || uParam0->f_411 == 1) && !func_52()) || (uParam0->f_411 != 0 && uParam0->f_411 != 1)))
	{
		StringCopy(&vVar0, uParam0->f_143, 24);
		switch (func_173(uParam0))
		{
			case 142:
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_noDri1", 24);
				}
				func_339(uParam0, &vVar0, 1, 0, 8);
				break;
			
			case 56:
				StringConCat(&vVar0, "_lvMe2", 24);
				cVar1 = { vVar0 };
				func_342(&(uParam0->f_93), 3, &cVar1, 0, 1, 0);
				func_341(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_264(uParam0, 16, 0, 0);
				func_340(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_223(uParam0, 0, 0);
				break;
			
			case 0:
				if (uParam0->f_411 == 9)
				{
					func_298(&(uParam0->f_244), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				func_195(uParam0, 1, 1, 0, 0);
				break;
			
			case 1:
				func_264(uParam0, 16, 0, 0);
				func_195(uParam0, 4, 0, 0, 0);
				break;
			
			case 4:
				StringConCat(&vVar0, "_hail1", 24);
				cVar1 = { vVar0 };
				if (!func_24(uParam0->f_44, 128))
				{
					if ((uParam0->f_411 == 0 || uParam0->f_411 == 1) || uParam0->f_411 == 4)
					{
						func_342(&(uParam0->f_99), 4, &cVar1, 0, 1, 0);
						func_341(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
					}
					else
					{
						func_339(uParam0, &vVar0, 0, 0, 8);
					}
				}
				func_264(uParam0, 16, 4f, 0);
				uParam0->f_141 = 1;
				func_264(uParam0, 16, 0, 0);
				func_223(uParam0, 0, 0);
				break;
			
			case 5:
				if (uParam0->f_411 == 7)
				{
					func_217("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					func_217("TAXI_OBJ_PICKUP", 7500, 1);
				}
				uParam0->f_141 = 1;
				func_264(uParam0, 16, 0, 0);
				func_223(uParam0, 0, 0);
				break;
			
			case 8:
				StringConCat(&vVar0, "_obj1", 24);
				func_339(uParam0, &vVar0, 0, 0, 8);
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xE38E3CF1625A4145(uParam0->f_9))
					{
						uParam0->f_9 = func_187(uParam0->f_17, 1);
					}
					else if (unk_0x163940E51B9C8A0D(uParam0->f_9) == 0)
					{
						unk_0xE447A1B9434714F3(uParam0->f_9, 255);
						unk_0xA0220BF0AB292278(uParam0->f_9, uParam0->f_17);
						unk_0x1C316779E36C1967(uParam0->f_9, true);
					}
				}
				func_195(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 9:
				if ((uParam0->f_101 == 1 || uParam0->f_411 == 2) || uParam0->f_411 == 0)
				{
					StringConCat(&vVar0, "_gret1", 24);
				}
				else
				{
					switch (uParam0->f_102)
					{
						case 1:
							StringConCat(&vVar0, "_gret1", 24);
							break;
						
						case 0:
							StringConCat(&vVar0, "_gret2", 24);
							break;
						
						case 2:
							StringConCat(&vVar0, "_gret3", 24);
							break;
						
						default:
							StringConCat(&vVar0, "_gret4", 24);
							break;
						}
				}
				func_197(&vVar0);
				if (uParam0->f_411 != 9)
				{
					func_339(uParam0, &vVar0, 0, 0, 8);
				}
				else
				{
					func_310(uParam0->f_3, "TAXI_START", uParam0->f_145, 4);
				}
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xE38E3CF1625A4145(uParam0->f_9))
					{
						uParam0->f_9 = func_187(uParam0->f_17, 1);
					}
					else if (unk_0x163940E51B9C8A0D(uParam0->f_9) == 0)
					{
						unk_0xE447A1B9434714F3(uParam0->f_9, 255);
						unk_0xA0220BF0AB292278(uParam0->f_9, uParam0->f_17);
						unk_0x1C316779E36C1967(uParam0->f_9, true);
					}
				}
				func_195(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 7:
				StringConCat(&vVar0, "_dest2", 24);
				func_335(uParam0, 33554432, vVar0, "", 1, 8);
				func_264(uParam0, 16, 0, 0);
				func_195(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 10:
				if (!func_52())
				{
					func_334(uParam0, 0);
					func_232(&(uParam0->f_44), 4);
					func_264(uParam0, 16, 0, 0);
					func_195(uParam0, 13, 0, 0, 0);
				}
				break;
			
			case 14:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&vVar0, "_bant2", 24);
						break;
					
					case 1:
						StringConCat(&vVar0, "_bant1", 24);
						break;
					
					case 2:
						StringConCat(&vVar0, "_bant3", 24);
						break;
					
					default:
						StringConCat(&vVar0, "_bant1", 24);
						break;
				}
				func_197(&vVar0);
				func_332(vVar0, uParam1);
				func_264(uParam0, 16, 0, 0);
				func_264(uParam0, 11, 0, 0);
				func_223(uParam0, 0, 0);
				break;
			
			case 15:
				if (func_387(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&vVar0, "_ban1", 24);
					}
					else
					{
						StringConCat(&vVar0, "_bant1", 24);
						func_197(&vVar0);
					}
					func_332(vVar0, uParam1);
					func_232(&(uParam0->f_81), 67108864);
					func_264(uParam0, 16, 0, 0);
					func_264(uParam0, 11, 0, 0);
					func_223(uParam0, 0, 0);
				}
				break;
			
			case 16:
				if (func_387(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&vVar0, "_ban2", 24);
					}
					else if (uParam0->f_411 == 1)
					{
						StringConCat(&vVar0, "_banter", 24);
					}
					else
					{
						StringConCat(&vVar0, "_bant2", 24);
						if (uParam0->f_411 != 6)
						{
							func_197(&vVar0);
						}
					}
					func_332(vVar0, uParam1);
					func_264(uParam0, 11, 0, 0);
					func_264(uParam0, 16, 0, 0);
					func_223(uParam0, 0, 0);
				}
				break;
			
			case 17:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&vVar0, "_ban3", 24);
				}
				else
				{
					StringConCat(&vVar0, "_bant3", 24);
					func_197(&vVar0);
				}
				func_332(vVar0, uParam1);
				func_264(uParam0, 16, 0, 0);
				func_223(uParam0, 0, 0);
				break;
			
			case 18:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&vVar0, "_BAN4", 24);
				}
				else
				{
					StringConCat(&vVar0, "_bant4", 24);
				}
				func_197(&vVar0);
				func_332(vVar0, uParam1);
				func_264(uParam0, 16, 0, 0);
				func_223(uParam0, 0, 0);
				break;
			
			case 19:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&vVar0, "_BAN5", 24);
				}
				else
				{
					StringConCat(&vVar0, "_bant5", 24);
				}
				func_197(&vVar0);
				func_332(vVar0, uParam1);
				func_264(uParam0, 16, 0, 0);
				func_223(uParam0, 0, 0);
				break;
			
			case 20:
				StringConCat(&vVar0, "_dest2b", 24);
				func_197(&vVar0);
				func_332(vVar0, uParam1);
				func_264(uParam0, 16, 0, 0);
				func_264(uParam0, 11, 0, 0);
				func_223(uParam0, 0, 0);
				func_232(&(uParam0->f_82), 262144);
				uParam0->f_36 = 20f;
				break;
			
			case 23:
				StringConCat(&vVar0, "_seePt1", 24);
				func_339(uParam0, &vVar0, 0, 0, 8);
				func_195(uParam0, 24, 1, 0, 0);
				break;
			
			case 24:
				uParam0->f_417 = 24;
				func_264(uParam0, 16, 0, 0);
				func_223(uParam0, 0, 0);
				break;
			
			case 90:
				StringConCat(&vVar0, "_talk", 24);
				StringIntConCat(&vVar0, 1, 24);
				func_197(&vVar0);
				func_339(uParam0, &vVar0, 1, 0, 8);
				break;
			
			case 89:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&vVar0, "_deal1", 24);
						break;
					
					case 1:
						StringConCat(&vVar0, "_deal1", 24);
						break;
					
					default:
						StringConCat(&vVar0, "_deal1", 24);
						break;
				}
				func_339(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 91:
				StringConCat(&vVar0, "_ig1c", 24);
				func_339(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 27:
				StringConCat(&vVar0, "_bTime", 24);
				if (uParam0->f_411 == 2)
				{
					iVar3 = 8;
				}
				else
				{
					iVar3 = 3;
				}
				iVar2 = 0;
				while (iVar2 < iVar3)
				{
					switch (uParam0->f_411)
					{
						case 2:
							switch (iVar2)
							{
								case 3:
								case 5:
								case 6:
								case 7:
									iVar5[iVar2] = 0;
									break;
								
								default:
									iVar5[iVar2] = 1;
									break;
							}
							break;
						
						default:
							iVar5[iVar2] = 1;
							break;
					}
					iVar2++;
				}
				if (uParam0->f_411 == 2)
				{
					func_331(&(uParam0->f_90), 8, &vVar0, &iVar5, 1, 0);
				}
				else
				{
					func_331(&(uParam0->f_90), 3, &vVar0, &iVar5, 1, 0);
				}
				func_332(vVar0, uParam1);
				func_340(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_264(uParam0, 16, 0, 0);
				func_264(uParam0, 6, 0f, 1);
				func_223(uParam0, 0, 0);
				break;
			
			case 26:
				StringConCat(&vVar0, "_gTime", 24);
				iVar2 = 0;
				while (iVar2 < 8)
				{
					switch (uParam0->f_411)
					{
						case 2:
							switch (iVar2)
							{
								case 3:
								case 4:
								case 5:
								case 7:
									iVar5[iVar2] = 0;
									break;
								
								default:
									iVar5[iVar2] = 1;
									break;
							}
							break;
						
						default:
							iVar5[iVar2] = 1;
							break;
					}
					iVar2++;
				}
				if (uParam0->f_411 == 2)
				{
					func_331(&(uParam0->f_89), 8, &vVar0, &iVar5, 1, 0);
				}
				else
				{
					func_331(&(uParam0->f_89), 3, &vVar0, &iVar5, 1, 0);
				}
				func_332(vVar0, uParam1);
				func_340(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 1);
				func_264(uParam0, 16, 0, 0);
				func_264(uParam0, 6, 0f, 1);
				func_223(uParam0, 0, 0);
				break;
			
			case 12:
				func_217("TAXI_OBJ_GYB", 3500, 1);
				func_264(uParam0, 16, 0, 0);
				func_223(uParam0, 0, 0);
				break;
			
			case 11:
				if (uParam0->f_410 == 12 || uParam0->f_410 == 18)
				{
					func_217("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (uParam0->f_410 < 21)
				{
					func_217("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					func_217("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				uParam0->f_417 = 11;
				uParam0->f_141 = 1;
				func_264(uParam0, 16, 0, 0);
				func_223(uParam0, 0, 0);
				break;
			
			case 28:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&vVar0, "_dest1A", 24);
						break;
					
					case 1:
						StringConCat(&vVar0, "_dest1B", 24);
						break;
					
					default:
						StringConCat(&vVar0, "_dest1A", 24);
						break;
				}
				func_339(uParam0, &vVar0, 0, 0, 8);
				func_195(uParam0, 29, 1, 0, 0);
				break;
			
			case 29:
				if (!func_24(uParam0->f_98, 268435456))
				{
					func_217("TAXI_OBJ_CYI_01", 7500, 1);
					func_232(&(uParam0->f_98), 268435456);
				}
				uParam0->f_417 = 29;
				func_264(uParam0, 16, 0, 0);
				func_223(uParam0, 0, 0);
				break;
			
			case 30:
				StringConCat(&vVar0, "_rCar1", 24);
				func_197(&vVar0);
				func_332(vVar0, uParam1);
				uParam0->f_124 = { vVar0 };
				func_264(uParam0, 16, 0, 0);
				func_223(uParam0, 0, 0);
				break;
			
			case 31:
				StringConCat(&vVar0, "_rCar2", 24);
				func_197(&vVar0);
				func_332(vVar0, uParam1);
				uParam0->f_124 = { vVar0 };
				func_264(uParam0, 16, 0, 0);
				func_223(uParam0, 0, 0);
				break;
			
			case 32:
				StringConCat(&vVar0, "_rCar3", 24);
				func_197(&vVar0);
				func_332(vVar0, uParam1);
				uParam0->f_124 = { vVar0 };
				func_264(uParam0, 16, 0, 0);
				func_223(uParam0, 0, 0);
				break;
			
			case 33:
				func_217("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_417 = 33;
				func_264(uParam0, 16, 0, 0);
				func_223(uParam0, 0, 0);
				break;
			
			case 34:
				if (!func_24(uParam0->f_82, 8192))
				{
					if (func_387(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&vVar0, "_airBr1", 24);
						func_197(&vVar0);
						if (uParam0->f_411 == 5)
						{
							func_332(vVar0, uParam1);
						}
						else
						{
							func_339(uParam0, &vVar0, 0, 0, 8);
						}
						func_232(&(uParam0->f_82), 8192);
						func_264(uParam0, 16, 0, 0);
						func_264(uParam0, 11, 0, 0);
						func_223(uParam0, 0, 0);
					}
				}
				break;
			
			case 35:
				if (!func_24(uParam0->f_82, 16384))
				{
					StringConCat(&vVar0, "_seeD1", 24);
					func_197(&vVar0);
					func_339(uParam0, &vVar0, 0, 0, 8);
					func_232(&(uParam0->f_82), 16384);
				}
				break;
			
			case 36:
				if (!func_24(uParam0->f_82, 32768))
				{
					StringConCat(&vVar0, "_seeD2", 24);
					func_197(&vVar0);
					func_339(uParam0, &vVar0, 0, 0, 8);
					func_232(&(uParam0->f_82), 32768);
				}
				break;
			
			case 37:
				StringConCat(&vVar0, "_done1", 24);
				func_339(uParam0, &vVar0, 0, 0, 8);
				func_195(uParam0, 46, 1, 0, 0);
				break;
			
			case 138:
				if (uParam0->f_101 == 1)
				{
					StringConCat(&vVar0, "_ftc1", 24);
				}
				else
				{
					switch (uParam0->f_102)
					{
						case 1:
							StringConCat(&vVar0, "_ftc1", 24);
							break;
						
						case 0:
							StringConCat(&vVar0, "_ftc2", 24);
							break;
						
						case 2:
							StringConCat(&vVar0, "_ftc3", 24);
							break;
						
						default:
							StringConCat(&vVar0, "_ftc3", 24);
							break;
						}
				}
				func_197(&vVar0);
				func_339(uParam0, &vVar0, 0, 0, 8);
				func_195(uParam0, 139, 1, 0, 0);
				uParam0->f_417 = 139;
				func_223(uParam0, 0, 0);
				break;
			
			case 139:
				func_217("TAXI_OBJ_FTC2", 7500, 1);
				uParam0->f_417 = 13;
				func_195(uParam0, 13, 0, 0, 0);
				break;
			
			case 38:
				StringConCat(&vVar0, "_dOff1", 24);
				cVar1 = { vVar0 };
				iVar4 = unk_0x9EC3B269A34A2BEE(0, 120);
				if (!func_24(uParam0->f_82, 268435456))
				{
					if (iVar4 > 80)
					{
						StringConCat(&cVar1, "_1", 24);
					}
					else if (iVar4 > 40)
					{
						StringConCat(&cVar1, "_2", 24);
					}
					else
					{
						StringConCat(&cVar1, "_3", 24);
					}
					func_232(&(uParam0->f_82), 268435456);
				}
				else if (iVar4 > 80)
				{
					StringConCat(&cVar1, "_4", 24);
				}
				else if (iVar4 > 40)
				{
					StringConCat(&cVar1, "_5", 24);
				}
				else
				{
					StringConCat(&cVar1, "_6", 24);
				}
				func_341(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_264(uParam0, 16, 0, 0);
				func_223(uParam0, 0, 0);
				break;
			
			case 39:
				StringConCat(&vVar0, "_bdOff1", 24);
				cVar1 = { vVar0 };
				iVar4 = unk_0x9EC3B269A34A2BEE(0, 100);
				if (!func_24(uParam0->f_82, 268435456))
				{
					if (iVar4 < 50)
					{
						StringConCat(&cVar1, "_1", 24);
					}
					else
					{
						StringConCat(&cVar1, "_2", 24);
					}
					func_232(&(uParam0->f_82), 268435456);
				}
				else if (iVar4 < 50)
				{
					StringConCat(&cVar1, "_3", 24);
				}
				else
				{
					StringConCat(&cVar1, "_4", 24);
				}
				func_341(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_264(uParam0, 16, 0, 0);
				func_223(uParam0, 0, 0);
				break;
			
			case 41:
				StringConCat(&vVar0, "_dr2P", 24);
				func_339(uParam0, &vVar0, 0, 0, 8);
				func_264(uParam0, 16, 0, 0);
				func_223(uParam0, 0, 0);
				break;
			
			case 42:
				StringConCat(&vVar0, "_dr2N", 24);
				func_339(uParam0, &vVar0, 0, 0, 8);
				func_264(uParam0, 16, 0, 0);
				func_223(uParam0, 0, 0);
				break;
			
			case 40:
				StringConCat(&vVar0, "_dOff2", 24);
				func_339(uParam0, &vVar0, 0, 0, 8);
				func_195(uParam0, 44, 1, 0, 0);
				break;
			
			case 44:
				func_217("TAXI_OBJ_CC2", 7500, 1);
				uParam0->f_417 = 44;
				func_223(uParam0, 0, 0);
				func_195(uParam0, 97, 1, 0, 0);
				break;
			
			case 43:
				StringConCat(&vVar0, "_dOff3", 24);
				func_339(uParam0, &vVar0, 0, 0, 8);
				func_195(uParam0, 45, 1, 0, 0);
				break;
			
			case 45:
				if (!func_52())
				{
					func_217("TAXI_OBJ_CC3", 7500, 1);
					uParam0->f_417 = 45;
					func_223(uParam0, 0, 0);
					func_195(uParam0, 98, 1, 0, 0);
				}
				break;
			
			case 46:
				func_217("TAXI_OBJ_FTC3", 7500, 1);
				uParam0->f_417 = 46;
				func_223(uParam0, 0, 0);
				break;
			
			case 21:
				if (!func_24(uParam0->f_81, 1))
				{
					func_330(uParam0, 1, vVar0, "_sick1", 8);
					func_22(&(uParam0->f_81), 2);
				}
				else if (!func_24(uParam0->f_81, 2))
				{
					func_330(uParam0, 2, vVar0, "_sick2", 8);
					func_22(&(uParam0->f_81), 1);
				}
				func_340(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_223(uParam0, 0, 0);
				break;
			
			case 22:
				if (!func_24(uParam0->f_82, 2097152))
				{
					StringConCat(&vVar0, "_nopke1", 24);
				}
				else if (!func_24(uParam0->f_82, 4194304))
				{
					StringConCat(&vVar0, "_nopke2", 24);
				}
				func_232(&(uParam0->f_81), 2097152);
				func_339(uParam0, &vVar0, 0, 0, 8);
				func_264(uParam0, 16, 0, 0);
				func_340(17, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 1);
				func_223(uParam0, 0, 0);
				break;
			
			case 61:
				StringConCat(&vVar0, "_Puke1", 24);
				func_339(uParam0, &vVar0, 0, 0, 8);
				func_340(18, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				break;
			
			case 63:
				StringConCat(&vVar0, "_PkStp2", 24);
				func_339(uParam0, &vVar0, 0, 0, 8);
				func_340(20, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_264(uParam0, 16, 0, 0);
				func_223(uParam0, 0, 0);
				break;
			
			case 62:
				StringConCat(&vVar0, "_PkStp1", 24);
				func_339(uParam0, &vVar0, 0, 0, 8);
				func_340(19, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				break;
			
			case 64:
				StringConCat(&vVar0, "_PukeR1", 24);
				func_197(&vVar0);
				func_339(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 71:
				if (!func_24(uParam0->f_81, 4))
				{
					func_330(uParam0, 4, vVar0, "_turns1", 8);
				}
				else if (!func_24(uParam0->f_81, 8))
				{
					func_330(uParam0, 8, vVar0, "_turns2", 8);
				}
				else
				{
					func_330(uParam0, 8, vVar0, "_turns3", 8);
					func_22(&(uParam0->f_81), 4);
					func_22(&(uParam0->f_81), 8);
				}
				func_340(13, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_223(uParam0, 0, 0);
				break;
			
			case 72:
				if (func_329(uParam0))
				{
					func_336(uParam0, vVar0, func_338(uParam0, 72));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0xBC2FC12AD0FBF72E(uParam0->f_3))
					{
						func_310(uParam0->f_3, "CRASH_GENERIC", uParam0->f_145, 4);
					}
				}
				else if (uParam0->f_411 == 1)
				{
					StringConCat(&vVar0, "_carHt", 24);
					cVar1 = { vVar0 };
					func_342(&(uParam0->f_95), 5, &cVar1, 1, 0, 1);
					func_298(&(uParam0->f_244), uParam0->f_144, &cVar1, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&vVar0, "_carHt1", 24);
					cVar1 = { vVar0 };
					if (uParam0->f_411 == 0)
					{
						func_342(&(uParam0->f_95), 8, &cVar1, 1, 1, 0);
					}
					else
					{
						func_342(&(uParam0->f_95), 5, &cVar1, 1, 1, 0);
					}
					func_341(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				}
				func_340(2, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar1, 0);
				func_264(uParam0, 16, 0, 0);
				func_223(uParam0, 0, 0);
				break;
			
			case 73:
				StringConCat(&vVar0, "_genPnHi", 24);
				func_339(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 75:
				if (!func_24(uParam0->f_83, 128))
				{
					StringConCat(&vVar0, "_nMiss1", 24);
					func_298(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_232(&(uParam0->f_83), 128);
					func_22(&(uParam0->f_83), 256);
					func_264(uParam0, 16, 0, 0);
				}
				else if (!func_24(uParam0->f_83, 256))
				{
					StringConCat(&vVar0, "_nMiss2", 24);
					func_298(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_232(&(uParam0->f_83), 256);
					func_22(&(uParam0->f_83), 512);
					func_264(uParam0, 16, 0, 0);
				}
				else if (!func_24(uParam0->f_83, 512))
				{
					StringConCat(&vVar0, "_nMiss3", 24);
					func_298(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_232(&(uParam0->f_83), 512);
					func_22(&(uParam0->f_83), 128);
					func_264(uParam0, 16, 0, 0);
				}
				func_223(uParam0, 0, 0);
				break;
			
			case 76:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar6 = true;
				}
				if (!func_24(uParam0->f_83, 1))
				{
					StringConCat(&vVar0, "_air1", 24);
					if (bVar6)
					{
						func_197(&vVar0);
					}
					func_298(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_232(&(uParam0->f_83), 1);
					func_22(&(uParam0->f_83), 2);
					func_264(uParam0, 16, 0, 0);
				}
				else if (!func_24(uParam0->f_83, 2))
				{
					StringConCat(&vVar0, "_air2", 24);
					if (bVar6)
					{
						func_197(&vVar0);
					}
					func_298(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_232(&(uParam0->f_83), 2);
					if (uParam0->f_411 == 0)
					{
						func_22(&(uParam0->f_83), 4);
					}
					else
					{
						func_22(&(uParam0->f_83), 1);
					}
					func_264(uParam0, 16, 0, 0);
				}
				else if (!func_24(uParam0->f_83, 4))
				{
					StringConCat(&vVar0, "_air3", 24);
					if (bVar6)
					{
						func_197(&vVar0);
					}
					func_298(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_232(&(uParam0->f_83), 4);
					func_22(&(uParam0->f_83), 1);
					func_264(uParam0, 16, 0, 0);
				}
				func_340(11, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_223(uParam0, 0, 0);
				break;
			
			case 79:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar6 = true;
				}
				if (!func_24(uParam0->f_81, 4096))
				{
					func_335(uParam0, 4096, vVar0, "_sideW1", bVar6, 8);
				}
				else if (!func_24(uParam0->f_81, 8192))
				{
					func_335(uParam0, 8192, vVar0, "_sideW2", bVar6, 8);
				}
				func_340(15, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_223(uParam0, 0, 0);
				break;
			
			case 80:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar6 = true;
				}
				if (!func_24(uParam0->f_81, 16384))
				{
					func_335(uParam0, 16384, vVar0, "_opLne1", bVar6, 8);
				}
				else if (!func_24(uParam0->f_81, 32768))
				{
					func_335(uParam0, 32768, vVar0, "_opLne2", bVar6, 8);
				}
				func_340(14, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_223(uParam0, 0, 0);
				break;
			
			case 83:
				if (uParam0->f_411 == 0)
				{
					if (!func_24(uParam0->f_82, 8))
					{
						func_328(uParam0, 8, vVar0, "_bored1", 8, 0);
					}
					else if (!func_24(uParam0->f_82, 16))
					{
						func_328(uParam0, 16, vVar0, "_bored2", 8, 0);
					}
					else if (!func_24(uParam0->f_82, 32))
					{
						func_328(uParam0, 32, vVar0, "_bored3", 8, 0);
					}
					func_340(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
					func_223(uParam0, 0, 0);
				}
				if (uParam0->f_411 == 1)
				{
					StringConCat(&vVar0, "_good1", 24);
					cVar1 = { vVar0 };
					func_342(&(uParam0->f_93), 6, &cVar1, 0, 1, 0);
					func_341(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
					func_340(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
					func_264(uParam0, 16, 0, 0);
					func_223(uParam0, 0, 0);
				}
				break;
			
			case 92:
				StringConCat(&vVar0, "_EtoB1", 24);
				cVar1 = { vVar0 };
				func_342(&(uParam0->f_96), 2, &cVar1, 0, 1, 0);
				func_341(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_340(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_264(uParam0, 16, 0, 0);
				func_223(uParam0, 0, 0);
				break;
			
			case 93:
				StringConCat(&vVar0, "_BtoE1", 24);
				cVar1 = { vVar0 };
				func_342(&(uParam0->f_97), 2, &cVar1, 0, 1, 0);
				func_341(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_340(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_264(uParam0, 16, 0, 0);
				func_223(uParam0, 0, 0);
				break;
			
			case 81:
				if (!func_24(uParam0->f_81, 65536))
				{
					func_335(uParam0, 65536, vVar0, "_runLit1", 1, 8);
				}
				else if (!func_24(uParam0->f_81, 131072))
				{
					func_335(uParam0, 131072, vVar0, "_runLit2", 1, 8);
				}
				func_223(uParam0, 0, 0);
				break;
			
			case 82:
				if (func_329(uParam0))
				{
					func_336(uParam0, vVar0, func_338(uParam0, 82));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0xBC2FC12AD0FBF72E(uParam0->f_3))
					{
						func_310(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_145, 4);
					}
				}
				else if (!func_24(uParam0->f_83, 8))
				{
					StringConCat(&vVar0, "_hitR1", 24);
					func_197(&vVar0);
					func_298(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_232(&(uParam0->f_83), 8);
					func_22(&(uParam0->f_83), 16);
					func_264(uParam0, 16, 0, 0);
				}
				else if (!func_24(uParam0->f_83, 16))
				{
					StringConCat(&vVar0, "_hitR2", 24);
					func_197(&vVar0);
					func_298(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_232(&(uParam0->f_83), 16);
					func_22(&(uParam0->f_83), 32);
					func_264(uParam0, 16, 0, 0);
				}
				else if (!func_24(uParam0->f_83, 32))
				{
					StringConCat(&vVar0, "_hitR3", 24);
					func_197(&vVar0);
					func_298(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_232(&(uParam0->f_83), 32);
					if (uParam0->f_411 == 0)
					{
						func_22(&(uParam0->f_83), 64);
					}
					else
					{
						func_22(&(uParam0->f_83), 8);
					}
					func_264(uParam0, 16, 0, 0);
				}
				else if (!func_24(uParam0->f_83, 64))
				{
					StringConCat(&vVar0, "_hitR4", 24);
					func_197(&vVar0);
					func_298(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_232(&(uParam0->f_83), 64);
					func_22(&(uParam0->f_83), 8);
					func_264(uParam0, 16, 0, 0);
				}
				func_340(1, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_223(uParam0, 0, 0);
				break;
			
			case 65:
				if (!func_52())
				{
					if (uParam0->f_115)
					{
						StringConCat(&vVar0, "_aggro2", 24);
					}
					else
					{
						StringConCat(&vVar0, "_aggro", 24);
					}
					func_339(uParam0, &vVar0, 0, 1, 8);
				}
				else
				{
					func_336(uParam0, vVar0, func_338(uParam0, 65));
					func_223(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 66:
				if (!func_52())
				{
					if (uParam0->f_411 == 4)
					{
						StringCopy(&vVar0, "tm6_shoot", 24);
					}
					else if (uParam0->f_115)
					{
						StringConCat(&vVar0, "_shootlz", 24);
					}
					else
					{
						StringConCat(&vVar0, "_shoot", 24);
					}
					func_339(uParam0, &vVar0, 0, 1, 8);
				}
				else
				{
					func_336(uParam0, vVar0, func_338(uParam0, 66));
					func_223(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 13:
				if (uParam0->f_411 == 8)
				{
					if (!uParam0->f_109 && !func_52())
					{
						switch (uParam0->f_414)
						{
							case 3:
								StringConCat(&vVar0, "_warnC1", 24);
								func_339(uParam0, &vVar0, 0, 0, 8);
								break;
							
							case 6:
								StringConCat(&vVar0, "_warnF1", 24);
								func_339(uParam0, &vVar0, 0, 0, 8);
								break;
							
							case 1:
								StringConCat(&vVar0, "_far1", 24);
								func_339(uParam0, &vVar0, 0, 0, 8);
								func_340(21, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
								break;
							
							case 2:
								StringConCat(&vVar0, "_close1", 24);
								func_339(uParam0, &vVar0, 0, 0, 8);
								func_340(22, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
								break;
							
							case 10:
								StringConCat(&vVar0, "_hit1", 24);
								func_339(uParam0, &vVar0, 0, 0, 8);
								break;
							
							case 8:
								StringConCat(&vVar0, "_good1", 24);
								cVar1 = { vVar0 };
								func_342(&(uParam0->f_93), 6, &cVar1, 1, 1, 0);
								func_341(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
								func_340(23, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar1, 0);
								func_264(uParam0, 16, 0, 0);
								func_223(uParam0, 0, 0);
								break;
							
							case 9:
								if (!iLocal_58)
								{
									StringConCat(&vVar0, "_sBant1", 24);
									cVar1 = { vVar0 };
									func_339(uParam0, &vVar0, 0, 0, 8);
									func_264(uParam0, 16, 0, 0);
									func_264(uParam0, 11, 0, 0);
									func_223(uParam0, 0, 0);
									if (!iLocal_60)
									{
										iLocal_58 = 1;
									}
								}
								else
								{
									if (!iLocal_59)
									{
										StringConCat(&vVar0, "_bant3", 24);
										iLocal_59 = 1;
									}
									else
									{
										StringConCat(&vVar0, "_bant2", 24);
										iLocal_60 = 1;
									}
									func_197(&vVar0);
									func_339(uParam0, &vVar0, 0, 0, 8);
									func_264(uParam0, 16, 0, 0);
									func_264(uParam0, 11, 0, 0);
									func_223(uParam0, 0, 0);
									iLocal_58 = 0;
								}
								break;
							
							case 7:
								StringConCat(&vVar0, "_done1", 24);
								func_339(uParam0, &vVar0, 0, 0, 8);
								break;
						}
						func_195(uParam0, 143, 0, 0, 0);
					}
				}
				break;
			
			case 78:
				StringConCat(&vVar0, "_speed1", 24);
				cVar1 = { vVar0 };
				func_342(&(uParam0->f_87), 6, &cVar1, 1, 1, 0);
				func_341(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_340(10, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_264(uParam0, 16, 0, 0);
				func_223(uParam0, 0, 0);
				break;
			
			case 25:
				if (!func_24(uParam0->f_82, 1))
				{
					func_328(uParam0, 1, vVar0, "_close1", 8, 0);
				}
				else if (!func_24(uParam0->f_82, 2))
				{
					func_328(uParam0, 2, vVar0, "_close2", 8, 0);
				}
				else if (!func_24(uParam0->f_82, 4))
				{
					func_328(uParam0, 4, vVar0, "_close3", 8, 0);
				}
				func_223(uParam0, 0, 0);
				break;
			
			case 48:
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_stop2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_stop1", 24);
				}
				cVar1 = { vVar0 };
				func_342(&(uParam0->f_86), 4, &cVar1, 0, 1, 0);
				if (uParam0->f_411 != 9)
				{
					func_341(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				}
				else if (!unk_0xBC2FC12AD0FBF72E(uParam0->f_3))
				{
					func_310(uParam0->f_3, "TAXI_STOPPED", uParam0->f_145, 4);
				}
				func_264(uParam0, 16, 0, 0);
				func_340(5, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_223(uParam0, 0, 0);
				break;
			
			case 74:
				if (func_329(uParam0))
				{
					func_336(uParam0, vVar0, func_338(uParam0, 74));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0xBC2FC12AD0FBF72E(uParam0->f_3))
					{
						func_310(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_145, 4);
					}
				}
				else
				{
					StringConCat(&vVar0, "_roll1", 24);
					func_327(uParam0, vVar0, 8);
				}
				func_340(3, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_264(uParam0, 16, 0, 0);
				func_223(uParam0, 0, 0);
				break;
			
			case 70:
				if (!func_24(uParam0->f_83, 1024))
				{
					func_232(&(uParam0->f_83), 1024);
					func_264(uParam0, 16, 0, 0);
					StringConCat(&vVar0, "_swrv1", 24);
					func_197(&vVar0);
					func_298(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
				}
				else if (!func_24(uParam0->f_83, 2048))
				{
					func_232(&(uParam0->f_83), 2048);
					func_264(uParam0, 16, 0, 0);
					StringConCat(&vVar0, "_swrv2", 24);
					func_197(&vVar0);
					func_298(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
				}
				else if (!func_24(uParam0->f_83, 4096))
				{
					func_232(&(uParam0->f_83), 4096);
					func_264(uParam0, 16, 0, 0);
					StringConCat(&vVar0, "_swrv3", 24);
					func_197(&vVar0);
					func_298(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
				}
				func_223(uParam0, 0, 0);
				break;
			
			case 69:
				if (!func_24(uParam0->f_82, 1024))
				{
					func_328(uParam0, 1024, vVar0, "_rvrs1", 8, 1);
					func_22(&(uParam0->f_82), 2048);
				}
				else if (!func_24(uParam0->f_82, 2048))
				{
					func_328(uParam0, 2048, vVar0, "_rvrs2", 8, 1);
				}
				func_223(uParam0, 0, 0);
				break;
			
			case 67:
				StringConCat(&vVar0, "_ofrd1", 24);
				cVar1 = { vVar0 };
				func_342(&(uParam0->f_88), 4, &cVar1, 0, 1, 0);
				func_341(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_340(16, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar1, 0);
				func_264(uParam0, 16, 0, 0);
				func_223(uParam0, 0, 0);
				break;
			
			case 68:
				StringConCat(&vVar0, "_ofrdch1", 24);
				func_298(&(uParam0->f_244), uParam0->f_144, &vVar0, 9, 0, 0, 0);
				func_264(uParam0, 16, 0, 0);
				func_223(uParam0, 0, 0);
				break;
			
			case 49:
				StringConCat(&vVar0, "_losPol1", 24);
				func_339(uParam0, &vVar0, 0, 0, 8);
				func_195(uParam0, 52, 1, 0, 0);
				break;
			
			case 50:
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_lsPo2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_lsPo1", 24);
				}
				if (uParam0->f_411 != 9)
				{
					func_339(uParam0, &vVar0, 0, 0, 8);
				}
				else if (!unk_0xBC2FC12AD0FBF72E(uParam0->f_3))
				{
					func_310(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_145, 4);
				}
				func_264(uParam0, 16, 0, 0);
				func_223(uParam0, 0, 0);
				break;
			
			case 51:
				if (func_329(uParam0))
				{
					if (uParam0->f_411 == 2)
					{
						StringConCat(&vVar0, "_copBa1", 24);
						cVar1 = { vVar0 };
						cVar1 = { vVar0 };
						func_339(uParam0, &vVar0, 0, 0, 8);
						func_195(uParam0, 52, 1, 0, 0);
						func_264(uParam0, 16, 0, 0);
					}
					else
					{
						if (uParam0->f_411 == 5 && uParam0->f_410 > 9)
						{
							StringConCat(&vVar0, "_copBa2", 24);
						}
						else
						{
							StringConCat(&vVar0, "_copBa1", 24);
						}
						cVar1 = { vVar0 };
						func_339(uParam0, &vVar0, 0, 0, 8);
						func_264(uParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&vVar0, "_copBa1", 24);
					cVar1 = { vVar0 };
					func_342(&(uParam0->f_85), 6, &cVar1, 1, 1, 0);
					func_341(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
					func_264(uParam0, 16, 0, 0);
					func_223(uParam0, 0, 0);
				}
				break;
			
			case 53:
				StringConCat(&vVar0, "_evdeP1", 24);
				func_340(8, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_339(uParam0, &vVar0, 0, 0, 8);
				func_264(uParam0, 10, 0f, 1);
				break;
			
			case 52:
				if (unk_0x002F527E1A3238DC(unk_0x3EE1295CEFBEFED4()) >= 1)
				{
					func_217("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_417 = 52;
				}
				func_223(uParam0, 0, 0);
				break;
			
			case 54:
				StringConCat(&vVar0, "_cpFz1", 24);
				func_197(&vVar0);
				func_339(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 84:
				if (!func_24(uParam0->f_81, 262144))
				{
					func_335(uParam0, 262144, vVar0, "_rdCh1", 1, 8);
				}
				else if (!func_24(uParam0->f_81, 1048576))
				{
					if (uParam0->f_411 == 0 || uParam0->f_411 == 1)
					{
						func_335(uParam0, 1048576, vVar0, "_rdCh2", 1, 8);
					}
					else
					{
						func_335(uParam0, 1048576, vVar0, "_rdCh2", 0, 8);
					}
				}
				func_340(7, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_223(uParam0, 0, 0);
				break;
			
			case 85:
				if (!func_24(uParam0->f_82, 67108864))
				{
					if (uParam0->f_418.f_6)
					{
						func_326(uParam0, 67108864, vVar0, "_rdLk1", 1, 7);
					}
				}
				else if (!func_24(uParam0->f_82, 134217728))
				{
					func_326(uParam0, 134217728, vVar0, "_rdFv1", 0, 7);
				}
				func_340(6, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_223(uParam0, 0, 0);
				break;
			
			case 86:
				StringConCat(&vVar0, "_rdneu1", 24);
				func_339(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 87:
				StringConCat(&vVar0, "_rdtip1", 24);
				cVar1 = { vVar0 };
				StringConCat(&cVar1, "_", 24);
				StringIntConCat(&cVar1, uParam0->f_418.f_3, 24);
				func_341(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_264(uParam0, 16, 0, 0);
				func_223(uParam0, 0, 0);
				break;
			
			case 100:
				func_217("TAXI_OBJ_GYB_2", 7500, 1);
				uParam0->f_417 = 100;
				func_223(uParam0, 0, 0);
				break;
			
			case 47:
				if (uParam0->f_411 == 1)
				{
					StringConCat(&vVar0, "_horn", 24);
					func_339(uParam0, &vVar0, 0, 0, 8);
				}
				break;
			
			case 101:
				StringConCat(&vVar0, "_thank1", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_197(&vVar0);
				}
				func_232(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_339(uParam0, &vVar0, 0, 0, 8);
				}
				break;
			
			case 102:
				StringConCat(&vVar0, "_thank2", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_197(&vVar0);
				}
				func_232(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_339(uParam0, &vVar0, 0, 0, 8);
				}
				break;
			
			case 103:
				if (uParam0->f_411 == 4)
				{
					StringConCat(&vVar0, "_pissed1", 24);
				}
				else
				{
					StringConCat(&vVar0, "_thank3", 24);
				}
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_197(&vVar0);
				}
				func_232(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_339(uParam0, &vVar0, 0, 0, 8);
				}
				break;
			
			case 97:
				if (!func_24(uParam0->f_82, 65536))
				{
					if (func_387(uParam0, 11) > uParam0->f_36)
					{
						switch (uParam0->f_102)
						{
							case 0:
								StringConCat(&vVar0, "_ccba2", 24);
								break;
							
							case 1:
								StringConCat(&vVar0, "_ccba1", 24);
								break;
							
							default:
								StringConCat(&vVar0, "_ccba1", 24);
								break;
						}
						func_197(&vVar0);
						func_332(vVar0, uParam1);
						func_232(&(uParam0->f_82), 65536);
						func_264(uParam0, 16, 0, 0);
						func_264(uParam0, 11, 0, 0);
						func_223(uParam0, 0, 0);
					}
				}
				break;
			
			case 98:
				if (!func_24(uParam0->f_82, 131072))
				{
					if (func_387(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&vVar0, "_ccbb1", 24);
						func_197(&vVar0);
						func_332(vVar0, uParam1);
						func_232(&(uParam0->f_82), 131072);
						func_264(uParam0, 16, 0, 0);
						func_264(uParam0, 11, 0, 0);
						func_223(uParam0, 0, 0);
					}
				}
				break;
			
			case 99:
				if (!func_24(uParam0->f_82, 8388608))
				{
					StringConCat(&vVar0, "_close1", 24);
					func_232(&(uParam0->f_82), 8388608);
				}
				else if (!func_24(uParam0->f_82, 16777216))
				{
					StringConCat(&vVar0, "_close2", 24);
					func_232(&(uParam0->f_82), 16777216);
				}
				else if (!func_24(uParam0->f_82, 33554432))
				{
					StringConCat(&vVar0, "_close3", 24);
					func_232(&(uParam0->f_82), 33554432);
				}
				func_332(vVar0, uParam1);
				func_264(uParam0, 16, 0, 0);
				func_223(uParam0, 0, 0);
				break;
			
			case 58:
				if (uParam0->f_411 == 6)
				{
					StringConCat(&vVar0, "_kill1", 24);
					cVar1 = { vVar0 };
					func_342(&(uParam0->f_93), 6, &cVar1, 1, 1, 1);
					func_197(&vVar0);
					func_341(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				}
				else if (uParam0->f_411 == 8)
				{
					StringConCat(&vVar0, "_cheat1", 24);
					func_339(uParam0, &vVar0, 0, 0, 8);
				}
				else
				{
					StringConCat(&vVar0, "_kill1", 24);
					func_339(uParam0, &vVar0, 0, 0, 8);
				}
				func_264(uParam0, 16, 0, 0);
				func_223(uParam0, 0, 0);
				break;
			
			case 95:
				StringConCat(&vVar0, "_wndw2", 24);
				func_332(vVar0, uParam1);
				func_264(uParam0, 16, 0, 0);
				func_264(uParam0, 11, 0, 0);
				func_223(uParam0, 0, 0);
				break;
			
			case 94:
				StringConCat(&vVar0, "_wndw0", 24);
				func_332(vVar0, uParam1);
				func_264(uParam0, 16, 0, 0);
				func_264(uParam0, 11, 0, 0);
				func_223(uParam0, 0, 0);
				break;
			
			case 96:
				StringConCat(&vVar0, "_wndw1", 24);
				func_332(vVar0, uParam1);
				func_264(uParam0, 16, 0, 0);
				func_264(uParam0, 11, 0, 0);
				func_223(uParam0, 0, 0);
				break;
			
			case 113:
				StringConCat(&vVar0, "_csite1", 24);
				func_197(&vVar0);
				func_339(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 119:
				StringConCat(&vVar0, "_fair1", 24);
				func_197(&vVar0);
				func_339(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 115:
				StringConCat(&vVar0, "_AlCk1", 24);
				cVar1 = { vVar0 };
				func_342(&(uParam0->f_91), 5, &cVar1, 1, 1, 0);
				func_341(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_264(uParam0, 16, 0, 0);
				func_223(uParam0, 0, 0);
				break;
			
			case 116:
				StringConCat(&vVar0, "_eggG1", 24);
				cVar1 = { vVar0 };
				func_342(&(uParam0->f_92), 5, &cVar1, 1, 1, 0);
				func_341(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_264(uParam0, 16, 0, 0);
				func_223(uParam0, 0, 0);
				break;
			
			case 114:
				StringConCat(&vVar0, "_goons1", 24);
				func_339(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 59:
				StringConCat(&vVar0, "_oRun1", 24);
				func_339(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 117:
				StringConCat(&vVar0, "_gotG1", 24);
				func_339(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 118:
				StringConCat(&vVar0, "_getA1", 24);
				func_339(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 120:
				StringConCat(&vVar0, "_gnawy1", 24);
				func_339(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 121:
				StringConCat(&vVar0, "_grl1", 24);
				func_197(&vVar0);
				func_339(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 122:
				StringConCat(&vVar0, "_figt1", 24);
				func_339(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 123:
				StringConCat(&vVar0, "_gEgg1", 24);
				func_339(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 124:
				StringConCat(&vVar0, "_gEgg3", 24);
				func_339(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 125:
				StringConCat(&vVar0, "_gEgg2", 24);
				func_339(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 126:
				StringConCat(&vVar0, "_gLeav1", 24);
				func_339(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 127:
				StringConCat(&vVar0, "_aKill1", 24);
				func_339(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 129:
				StringConCat(&vVar0, "_gHelp1", 24);
				func_197(&vVar0);
				func_339(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 130:
				StringConCat(&vVar0, "_gDest1", 24);
				func_339(uParam0, &vVar0, 0, 0, 8);
				func_195(uParam0, 11, 1, 0, 0);
				break;
			
			case 128:
				StringConCat(&vVar0, "_gKO1", 24);
				func_339(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 132:
				StringConCat(&vVar0, "_gThank1", 24);
				func_232(&(uParam0->f_81), 2097152);
				func_339(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 131:
				StringConCat(&vVar0, "_gDriv1", 24);
				func_197(&vVar0);
				func_332(vVar0, uParam1);
				func_232(&(uParam0->f_81), 67108864);
				func_264(uParam0, 16, 0, 0);
				func_264(uParam0, 11, 0, 0);
				func_223(uParam0, 0, 0);
				break;
			
			case 60:
				StringConCat(&vVar0, "_cash1", 24);
				func_339(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 105:
				if (!func_24(uParam0->f_81, 33554432) && uParam0->f_411 != 9)
				{
					func_335(uParam0, 33554432, vVar0, "_noPay1", 1, 8);
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0xBC2FC12AD0FBF72E(uParam0->f_3))
					{
						func_310(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_145, 4);
					}
				}
				func_195(uParam0, 108, 1, 0, 0);
				break;
			
			case 106:
				StringConCat(&vVar0, "_foot", 24);
				func_298(&(uParam0->f_244), uParam0->f_144, &vVar0, 9, 0, 0, 0);
				func_264(uParam0, 16, 0, 0);
				func_223(uParam0, 0, 0);
				break;
			
			case 107:
				if (!func_24(uParam0->f_81, 268435456))
				{
					func_335(uParam0, 268435456, vVar0, "_kPay1", 1, 8);
				}
				func_195(uParam0, 52, 1, 0, 0);
				break;
			
			case 108:
				func_217("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_417 = 108;
				func_223(uParam0, 0, 0);
				break;
			
			case 109:
				if (!func_24(uParam0->f_81, 4194304))
				{
					if (uParam0->f_411 == 2 || uParam0->f_411 == 6)
					{
						func_335(uParam0, 4194304, vVar0, "_mPay1", 0, 8);
					}
					else if (uParam0->f_411 == 9)
					{
						if (!unk_0xBC2FC12AD0FBF72E(uParam0->f_3))
						{
							func_310(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_145, 4);
						}
					}
					else
					{
						func_335(uParam0, 4194304, vVar0, "_mPay1", 1, 8);
					}
				}
				func_195(uParam0, 111, 1, 0, 0);
				break;
			
			case 111:
				func_217("TAXI_OBJ_GETRUN", 7500, 1);
				uParam0->f_417 = 111;
				func_223(uParam0, 0, 0);
				break;
			
			case 110:
				StringConCat(&vVar0, "_runoff", 24);
				func_298(&(uParam0->f_244), uParam0->f_144, &vVar0, 9, 0, 0, 0);
				func_264(uParam0, 16, 0, 0);
				func_223(uParam0, 0, 0);
				break;
			
			case 141:
				if (!func_24(uParam0->f_81, 16777216))
				{
					func_335(uParam0, 16777216, vVar0, "_ret1", 1, 8);
				}
				func_223(uParam0, 0, 0);
				break;
			
			case 88:
				func_217("TAXI_TIEFLEE", 7500, 1);
				func_223(uParam0, 0, 0);
				break;
			
			case 57:
				if (!func_24(uParam0->f_98, 536870912))
				{
					func_217("TAXI_OBJ_CYI_1B", 7500, 1);
					func_232(&(uParam0->f_98), 536870912);
				}
				uParam0->f_417 = 57;
				func_223(uParam0, 0, 0);
				break;
			
			case 104:
				StringConCat(&vVar0, "_joke1", 24);
				func_197(&vVar0);
				func_339(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 136:
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_wronglz", 24);
				}
				else if (uParam0->f_116)
				{
					StringConCat(&vVar0, "_wrong2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_wrong", 24);
				}
				func_339(uParam0, &vVar0, 0, 0, 8);
				func_223(uParam0, 0, 0);
				break;
			
			case 140:
				StringConCat(&vVar0, "_shout", 24);
				func_339(uParam0, &vVar0, 0, 0, 8);
				func_223(uParam0, 0, 0);
				break;
			
			case 135:
				if (uParam0->f_411 == 4)
				{
					StringCopy(&vVar0, "tm6_jack", 24);
				}
				else
				{
					StringConCat(&vVar0, "_jack", 24);
				}
				func_339(uParam0, &vVar0, 0, 0, 8);
				func_223(uParam0, 0, 0);
				break;
			
			case 133:
				StringConCat(&vVar0, "_getCar", 24);
				func_339(uParam0, &vVar0, 1, 0, 8);
				func_195(uParam0, 134, 1, 0, 0);
				break;
			
			case 134:
				func_217("TX_VIP", 7500, 0);
				uParam0->f_417 = 134;
				func_195(uParam0, 0, 0, 0, 0);
				func_223(uParam0, 0, 0);
				break;
			}
	}
}

void func_326(var uParam0, int iParam1, vector3 vParam2, var uParam3, var uParam4, var uParam5, char* sParam6, bool bParam7, int iParam8)
{
	func_232(&(uParam0->f_82), iParam1);
	func_264(uParam0, 16, 0, 0);
	StringConCat(&vParam2, sParam6, 24);
	if (bParam7)
	{
		func_197(&vParam2);
	}
	func_298(&(uParam0->f_244), uParam0->f_144, &vParam2, iParam8, 0, 0, 0);
}

void func_327(var uParam0, struct<6> Param1, int iParam2)
{
	vector3 vVar0[24];
	
	cVar0 = { Param1 };
	if (!func_24(uParam0->f_82, 64))
	{
		func_232(&(uParam0->f_82), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_24(uParam0->f_82, 128))
	{
		func_232(&(uParam0->f_82), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, unk_0x9EC3B269A34A2BEE(1, 3), 24);
	}
	func_341(&(uParam0->f_244), uParam0->f_144, &Param1, &cVar0, iParam2, 0, 0);
	func_264(uParam0, 16, 0, 0);
}

void func_328(var uParam0, int iParam1, vector3 vParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, int iParam7, bool bParam8)
{
	func_232(&(uParam0->f_82), iParam1);
	func_264(uParam0, 16, 0, 0);
	StringConCat(&vParam2, sParam6, 24);
	if ((((uParam0->f_411 == 1 || uParam0->f_411 == 0) || uParam0->f_411 == 5) || uParam0->f_411 == 8) || uParam0->f_411 == 2)
	{
		if (bParam8)
		{
			func_197(&vParam2);
		}
	}
	func_298(&(uParam0->f_244), uParam0->f_144, &vParam2, iParam7, 0, 0, 0);
}

int func_329(var uParam0)
{
	if ((((((uParam0->f_411 == 2 || uParam0->f_411 == 3) || uParam0->f_411 == 4) || uParam0->f_411 == 5) || uParam0->f_411 == 6) || uParam0->f_411 == 7) || uParam0->f_411 == 8)
	{
		return 1;
	}
	return 0;
}

void func_330(var uParam0, int iParam1, vector3 vParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, int iParam7)
{
	func_232(&(uParam0->f_81), iParam1);
	func_264(uParam0, 16, 0, 0);
	StringConCat(&vParam2, sParam6, 24);
	func_298(&(uParam0->f_244), uParam0->f_144, &vParam2, iParam7, 0, 0, 0);
}

void func_331(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = to_float(iVar2);
		iVar1 = round(pow(2f, fVar0));
		if (!func_242(*uParam0, iVar1))
		{
			func_233(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				func_197(sParam2);
			}
			if (bParam4)
			{
				if (iVar2 == (iParam1 - 1))
				{
					*uParam0 = 0;
				}
			}
			return;
		}
		iVar2++;
	}
}

void func_332(char[24] cParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = func_333(uParam1);
	if (iVar0 > -1)
	{
		*(uParam1[iVar0 /*8*/]) = { cParam0 };
		func_232(&((uParam1[iVar0 /*8*/])->f_7), 2);
	}
}

int func_333(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0x786AF4A44E1B5B4B(uParam0[iVar0 /*8*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_334(var uParam0, bool bParam1)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (bParam1)
			{
				func_217("TX_OBJ_NEX_PU", 7500, 1);
			}
			else
			{
				func_217("TX_OBJ_NEX_DO", 7500, 1);
			}
			break;
		
		case 1:
			if (bParam1)
			{
				func_217("TX_OBJ_TIE_PU", 7500, 1);
			}
			else
			{
				func_217("TX_OBJ_TIE_DO", 7500, 1);
			}
			break;
		
		case 2:
			if (bParam1)
			{
				func_217("TX_OBJ_DL_PU", 7500, 1);
			}
			else
			{
				func_217("TX_OBJ_DL_DO", 7500, 1);
			}
			break;
		
		case 3:
			if (bParam1)
			{
				func_217("TX_OBJ_GYB_PU", 7500, 1);
			}
			else
			{
				func_217("TX_OBJ_GYB_DO", 7500, 1);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				func_217("TX_OBJ_TTB_PU", 7500, 1);
			}
			else
			{
				func_217("TX_OBJ_TTB_DO", 7500, 1);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				func_217("TX_OBJ_CYI_PU", 7500, 1);
			}
			else
			{
				func_217("TX_OBJ_CYI_DO", 7500, 1);
			}
			break;
		
		case 6:
			if (bParam1)
			{
				func_217("TX_OBJ_GYN_PU", 7500, 1);
			}
			else
			{
				func_217("TX_OBJ_GYN_DO", 7500, 1);
			}
			break;
		
		case 7:
			if (bParam1)
			{
				func_217("TX_OBJ_CC_PU", 7500, 1);
			}
			else
			{
				func_217("TAXI_OBJ_CC1", 7500, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				func_217("TX_OBJ_FC_PU", 7500, 1);
			}
			else
			{
				func_217("TAXI_OBJ_FTC1", 7500, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				func_217("TX_OBJ_PRO_PU", 7500, 1);
			}
			else
			{
				func_217("TX_OBJ_PRO_DO", 7500, 1);
			}
			break;
	}
	if (!bParam1)
	{
		uParam0->f_139 = 1;
	}
}

void func_335(var uParam0, int iParam1, vector3 vParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, bool bParam7, int iParam8)
{
	func_232(&(uParam0->f_81), iParam1);
	func_264(uParam0, 16, 0, 0);
	StringConCat(&vParam2, sParam6, 24);
	if (bParam7)
	{
		func_197(&vParam2);
	}
	func_298(&(uParam0->f_244), uParam0->f_144, &vParam2, iParam8, 0, 0, 0);
}

void func_336(var uParam0, char[12] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char* sParam5)
{
	func_264(uParam0, 16, 0, 0);
	func_264(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam5, 24);
	if (!unk_0xBC2FC12AD0FBF72E(uParam0->f_3))
	{
		unk_0x41EDD559141FF338(uParam0->f_3, &cParam1, func_337(uParam0));
	}
}

char* func_337(var uParam0)
{
	char* sVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			sVar0 = "TaxiFelipe";
			break;
		
		case 1:
			sVar0 = "TaxiOtis";
			break;
		
		case 2:
			sVar0 = "TaxiKwak";
			break;
		
		case 3:
			sVar0 = "TaxiWalter";
			break;
		
		case 4:
			sVar0 = "TaxiMiranda";
			break;
		
		case 5:
			sVar0 = "TaxiDerrick";
			break;
		
		case 6:
			sVar0 = "TaxiAlonzo";
			break;
		
		case 7:
			sVar0 = "TaxiDarren";
			break;
		
		case 8:
			sVar0 = "TaxiKeyla";
			break;
	}
	return sVar0;
}

char* func_338(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 72:
			switch (uParam0->f_411)
			{
				case 0:
					return "_ACRH";
				
				case 1:
					return "_ACRH";
				
				case 2:
					return "_ACAA";
				
				case 3:
					return "_ACRH";
				
				case 4:
					return "_AEAA";
				
				case 5:
					return "_DKAA";
				
				case 6:
					return "_ACAA";
				
				case 7:
					return "_ACAA";
				
				case 8:
					return "_ACRH";
				
				default:
			}
			return "_ACRH";
			break;
		
		case 82:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AHIT";
				
				case 1:
					return "_AHIT";
				
				case 2:
					return "_AEAA";
				
				case 3:
					return "_ADAA";
				
				case 4:
					return "_AFAA";
				
				case 5:
					return "_AFAA";
				
				case 6:
					return "_AEAA";
				
				case 7:
					return "_AHAA";
				
				case 8:
					return "_AEAA";
				
				default:
			}
			return "_AHIT";
			break;
		
		case 74:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AROL";
				
				case 1:
					return "_AROL";
				
				case 2:
					return "_AHAA";
				
				case 3:
					return "_AROL";
				
				case 4:
					return "_AGAA";
				
				case 5:
					return "_AROL";
				
				case 6:
					return "_AROL";
				
				case 7:
					return "_AROL";
				
				case 8:
					return "_AROL";
				
				default:
			}
			return "_AROL";
			break;
		
		case 65:
			switch (uParam0->f_411)
			{
				case 0:
					return "_ABAA";
				
				case 1:
					return "_FUAA";
				
				case 2:
					return "_AFAA";
				
				case 3:
					return "_DBAA";
				
				case 4:
					return "_DLAA";
				
				case 5:
					return "_DKAA";
				
				case 6:
					if (uParam0->f_115)
					{
						return "_EEAA";
					}
					else
					{
						return "_EFAA";
					}
					break;
				
				case 7:
					return "_DBAA";
				
				case 8:
					return "_EFAA";
				
				default:
					return "_AROL";
			}
			break;
		
		case 66:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AEAA";
				
				case 1:
					return "_ACAA";
				
				case 2:
					return "_AJAA";
				
				case 3:
					return "_AHAA";
				
				case 4:
					return "_AHAA";
				
				case 5:
					return "_AIAA";
				
				case 6:
					if (uParam0->f_115)
					{
						return "_AJAA";
					}
					else
					{
						return "_AGAA";
					}
					break;
				
				case 7:
					return "_AUAA";
				
				case 8:
					return "_AHAA";
				
				default:
					return "_AROL";
			}
			break;
		
		case 2:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AAAA";
				
				case 1:
					return "_AAAA";
				
				case 2:
					return "_ADAA";
				
				case 3:
					return "_ABAA";
				
				case 4:
					return "_AAAA";
				
				case 5:
					return "_ABAA";
				
				case 6:
					if (uParam0->f_115)
					{
						return "_AHAA";
					}
					else
					{
						return "_ABAA";
					}
					break;
				
				case 7:
					return "_BUAA";
				
				case 8:
					return "_ADAA";
				
				default:
					return "_AAAA";
			}
			break;
	}
	return "_ACRH";
}

int func_339(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_264(uParam0, 16, 0, 0);
	if (bParam3)
	{
		func_264(uParam0, 17, 0f, 1);
	}
	func_223(uParam0, iParam2, 0);
	return func_298(&(uParam0->f_244), uParam0->f_144, sParam1, iParam4, 0, 0, 0);
}

void func_340(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam5)
{
	if (iParam0 == 0)
	{
		if (func_24(*uParam2, 2))
		{
			if (!bParam5)
			{
				*uParam1 = (*uParam1 - 2);
			}
			else
			{
				*uParam1 += 3;
			}
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 8)
	{
		if (func_24(*uParam2, 1073741824))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 1)
	{
		if (func_24(*uParam2, 4))
		{
			if (!func_24(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_22(uParam2, 4096);
			}
		}
		else if (func_24(*uParam2, 8))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 5)
	{
		if (func_24(*uParam2, 512))
		{
			if (!func_24(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_22(uParam2, 4096);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (func_24(*uParam2, 16))
		{
			if (!func_24(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_22(uParam2, 4096);
			}
		}
		else if (func_24(*uParam2, 32))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 3)
	{
		if (func_24(*uParam2, 64))
		{
			if (!func_24(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_22(uParam2, 4096);
			}
		}
		else if (func_24(*uParam2, 128))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 4)
	{
		if (func_24(*uParam2, 256))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 6)
	{
		if (func_24(*uParam2, 1024))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 7)
	{
		if (func_24(*uParam2, 2048))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 9)
	{
		if (func_24(*uParam2, 8192))
		{
			if (func_24(*uParam2, 2097152))
			{
				*uParam1 += 3;
				*uParam3 = { cParam4 };
			}
			else if (func_24(*uParam2, 4194304))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 10)
	{
		if (func_24(*uParam2, 16384))
		{
			if (func_24(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
			else
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 11)
	{
		if (func_24(*uParam2, 32768))
		{
			if (func_24(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_24(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 12)
	{
		if (func_24(*uParam2, 65536))
		{
			if (func_24(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 13)
	{
		if (func_24(*uParam2, 131072))
		{
			if (func_24(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_24(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 14)
	{
		if (func_24(*uParam2, 262144))
		{
			if (func_24(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_24(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 15)
	{
		if (func_24(*uParam2, 524288))
		{
			if (func_24(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_24(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 16)
	{
		if (func_24(*uParam2, 1048576))
		{
			if (func_24(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_24(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 21)
	{
		if (func_24(*uParam2, 8388608))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 22)
	{
		if (func_24(*uParam2, 16777216))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 23)
	{
		if (func_24(*uParam2, 33554432))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 17)
	{
		if (func_24(*uParam2, 67108864))
		{
			if (func_24(*uParam2, 67108864))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 18)
	{
		if (func_24(*uParam2, 134217728))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 20)
	{
		if (func_24(*uParam2, 536870912))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 19)
	{
		if (func_24(*uParam2, 268435456))
		{
			*uParam1++;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 25)
	{
		if (func_24(*uParam2, 32768))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
}

int func_341(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_306(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15873 = 0;
	Global_15880 = 0;
	Global_15875 = 0;
	Global_16857 = 1;
	Global_16859 = 0;
	Global_16863 = 0;
	StringCopy(&Global_16870, sParam3, 24);
	Global_2621441 = 0;
	return func_299(sParam2, iParam4, 0);
}

void func_342(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = to_float(iVar2);
		iVar1 = round(pow(2f, fVar0));
		if (!func_242(*uParam0, iVar1))
		{
			func_233(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					func_197(sParam2);
				}
				else
				{
					func_197(sParam2);
				}
			}
			else
			{
				if (bParam4)
				{
					StringConCat(sParam2, "_", 24);
				}
				StringIntConCat(sParam2, iVar2 + 1, 24);
			}
			if (bParam3)
			{
				if (iVar2 == (iParam1 - 1))
				{
					*uParam0 = 0;
				}
			}
			return;
		}
		iVar2++;
	}
}

int func_343(char* sParam0)
{
	if (!unk_0x6D2E2622CA149402(sParam0))
	{
		if (func_177(sParam0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_344(var uParam0, var uParam1)
{
	return ((*uParam1 == -1 && uParam0->f_412 == 0) && !func_142(uParam0, 9));
}

void func_345(var uParam0)
{
	if (func_142(uParam0, 17))
	{
		if (!func_142(uParam0, 14))
		{
			if (!func_141(uParam0))
			{
				if (!func_52())
				{
					func_149(uParam0, 17, 1);
				}
			}
		}
	}
}

void func_346(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	
	if (unk_0x765F6FEEFF39224F(Global_105275.f_225[3]))
	{
		uParam0->f_4[0] = Global_105275.f_225[3];
		uParam0->f_4[1] = Global_105275.f_225[4];
		uParam0->f_4[2] = Global_105275.f_225[5];
		unk_0x0D21E1FDE062ED99(uParam0->f_4[0], true, 1);
		unk_0x0D21E1FDE062ED99(uParam0->f_4[1], true, 1);
		unk_0x0D21E1FDE062ED99(uParam0->f_4[2], true, 1);
	}
	else
	{
		uParam0->f_4[0] = unk_0x9BA5CF280376EEA4(26, uParam0->f_45[0], -1283.45f, 299.3781f, 63.9305f, 151.9095f, 1, true);
		uParam0->f_4[1] = unk_0x9BA5CF280376EEA4(26, uParam0->f_45[1], unk_0x2CA911E7569D12EA(uParam0->f_4[0], 1f, 1f, 0f), 90.5877f, 1, true);
		uParam0->f_4[2] = unk_0x9BA5CF280376EEA4(26, uParam0->f_45[2], unk_0x2CA911E7569D12EA(uParam0->f_4[0], -1f, 1f, 0f), 163.5411f, 1, true);
	}
	if (unk_0x765F6FEEFF39224F(Global_105275.f_225[6]))
	{
		uParam0->f_4[3] = Global_105275.f_225[6];
		uParam0->f_4[4] = Global_105275.f_225[7];
		unk_0x0D21E1FDE062ED99(uParam0->f_4[3], true, 1);
		unk_0x0D21E1FDE062ED99(uParam0->f_4[4], true, 1);
	}
	else
	{
		uParam0->f_4[3] = unk_0x9BA5CF280376EEA4(26, uParam0->f_45[3], -1282.83f, 306.2308f, 63.9354f, 163.5411f, 1, true);
		uParam0->f_4[4] = unk_0x9BA5CF280376EEA4(26, uParam0->f_45[4], -1280.987f, 305.4652f, 63.9499f, 90.5877f, 1, true);
	}
	if (unk_0x765F6FEEFF39224F(Global_105275.f_222[0]))
	{
		uParam0->f_10 = Global_105275.f_222[0];
		uParam0->f_11 = Global_105275.f_222[1];
		unk_0x0D21E1FDE062ED99(uParam0->f_10, true, 1);
		unk_0x0D21E1FDE062ED99(uParam0->f_11, true, 1);
	}
	else
	{
		uParam0->f_10 = unk_0xC651C43AB13A15E5(joaat("stretch"), -1290.724f, 284.893f, 63.7823f, 55.6864f, true, true, false);
		uParam0->f_11 = unk_0xC651C43AB13A15E5(joaat("superd"), -1288.964f, 296.9287f, 63.8537f, 67.6169f, true, true, false);
	}
	vVar2 = { -1276.693f, 312.9434f, 64.491f };
	vVar3 = { -1281.349f, 315.1646f, 64.4805f };
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (!unk_0xD62C4419A41F106A(uParam0->f_4[iVar1], 0))
		{
			unk_0x31826EF4A8BC8E9F(uParam0->f_4[iVar1]);
			unk_0xA7A57E7757ED035E(&iVar0);
			unk_0x99414FB2D30425C1(&iVar0);
			switch (iVar1)
			{
				case 0:
					unk_0x11C4AF4137F2A4B5(0, uParam0->f_4[1], 0);
					unk_0x108754262311D34F(0, "oddjobs@taxi@gyn@cc@intro", "f_impatient_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x108754262311D34F(0, "amb@world_human_stand_impatient@female@no_sign@base", "base", 4f, -4f, 4000, 0, 0, 0, 0, 0);
					unk_0x108754262311D34F(0, "amb@world_human_stand_impatient@female@no_sign@exit", "exit", 4f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0x2A25AECBD792A364(0, vVar2, 1f, 20000, 1193033728, 1056964608);
					unk_0x2A25AECBD792A364(0, vVar3, 1f, 20000, 1193033728, 1056964608);
					break;
				
				case 1:
					unk_0x11C4AF4137F2A4B5(0, uParam0->f_4[0], 0);
					unk_0x108754262311D34F(0, "oddjobs@taxi@gyn@cc@intro", "f_impatient_b", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x108754262311D34F(0, "amb@world_human_stand_impatient@female@no_sign@base", "base", 4f, -4f, 6000, 0, 0, 0, 0, 0);
					unk_0x108754262311D34F(0, "amb@world_human_stand_impatient@female@no_sign@exit", "exit", 4f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0x2A25AECBD792A364(0, vVar2, 1f, 20000, 1193033728, 1056964608);
					unk_0x2A25AECBD792A364(0, vVar3, 1f, 20000, 1193033728, 1056964608);
					break;
				
				case 2:
					unk_0x11C4AF4137F2A4B5(0, uParam0->f_4[0], 0);
					unk_0x108754262311D34F(0, "oddjobs@taxi@gyn@cc@intro", "f_impatient_c", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x108754262311D34F(0, "amb@world_human_stand_impatient@female@no_sign@base", "base", 4f, -4f, 8500, 0, 0, 0, 0, 0);
					unk_0x108754262311D34F(0, "amb@world_human_stand_impatient@female@no_sign@exit", "exit", 4f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0x2A25AECBD792A364(0, vVar2, 1f, 20000, 1193033728, 1056964608);
					unk_0x2A25AECBD792A364(0, vVar3, 1f, 20000, 1193033728, 1056964608);
					break;
				
				case 3:
					unk_0x11C4AF4137F2A4B5(0, uParam0->f_4[4], 0);
					unk_0xC4A347124F39D998(0, uParam0->f_4[4], 3, 2, 2);
					unk_0xB6065365472C28EC(0, uParam0->f_4[4], 16, 0f, 0f, 0f, 0f, 0f);
					break;
				
				case 4:
					unk_0x11C4AF4137F2A4B5(0, uParam0->f_4[3], 0);
					unk_0xC4A347124F39D998(0, uParam0->f_4[3], 3, 2, 2);
					unk_0xB6065365472C28EC(0, uParam0->f_4[3], 16, 0f, 0f, 0f, 0f, 0f);
					break;
			}
			unk_0xC734F59A13D39AEF(iVar0);
			unk_0x13A2D602CD10CBAC(uParam0->f_4[iVar1], iVar0);
		}
		iVar1++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (!unk_0xBC2FC12AD0FBF72E((*uParam0)[iVar1]) && (unk_0xD76D6BCC14B95CE1((*uParam0)[iVar1], 242628503) != 1 || unk_0xD76D6BCC14B95CE1((*uParam0)[iVar1], 242628503) == 7))
		{
			unk_0x4A852F02088ECC9D((*uParam0)[iVar1], true);
			unk_0x31826EF4A8BC8E9F((*uParam0)[iVar1]);
			unk_0xA7A57E7757ED035E(&iVar0);
			unk_0x99414FB2D30425C1(&iVar0);
			func_347(uParam0, iVar1, unk_0x9EC3B269A34A2BEE(1000, 2000));
			unk_0xC734F59A13D39AEF(iVar0);
			unk_0x13A2D602CD10CBAC((*uParam0)[iVar1], iVar0);
		}
		iVar1++;
	}
}

void func_347(var uParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	switch (iParam1)
	{
		case 0:
			unk_0x11C4AF4137F2A4B5(0, (*uParam0)[1], 0);
			unk_0xC4A347124F39D998(0, (*uParam0)[1], 3, 2, 2);
			unk_0x108754262311D34F(0, "oddjobs@taxi@gyn@cc@intro", "m_impatient_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
			break;
		
		case 1:
			unk_0x11C4AF4137F2A4B5(0, (*uParam0)[0], 0);
			unk_0xC4A347124F39D998(0, (*uParam0)[0], 3, 2, 2);
			unk_0x108754262311D34F(0, "oddjobs@taxi@gyn@cc@intro", "m_impatient_b", 8f, -8f, -1, 0, 0, 0, 0, 0);
			break;
		
		case 2:
			unk_0x11C4AF4137F2A4B5(0, (*uParam0)[0], 0);
			unk_0xC4A347124F39D998(0, (*uParam0)[0], 3, 2, 2);
			unk_0x108754262311D34F(0, "oddjobs@taxi@gyn@cc@intro", "m_impatient_c", 8f, -8f, -1, 0, 0, 0, 0, 0);
			break;
	}
}

int func_348()
{
	if (!unk_0x5D98D654CDC2165A(Local_262.f_45[0]))
	{
		func_258("TAXI_ASSETS_STREAMED - Loading TAXI_AMB_P0_AMANDA", &iLocal_339, 1000);
		return 0;
	}
	if (!unk_0x5D98D654CDC2165A(Local_262.f_45[1]))
	{
		func_258("TAXI_ASSETS_STREAMED - Loading TAXI_AMB_P1_BRENDA", &iLocal_339, 1000);
		return 0;
	}
	if (!unk_0x5D98D654CDC2165A(Local_262.f_45[2]))
	{
		func_258("TAXI_ASSETS_STREAMED - Loading TAXI_AMB_P2_CANDY", &iLocal_339, 1000);
		return 0;
	}
	if (!unk_0x5D98D654CDC2165A(Local_262.f_45[3]))
	{
		func_258("TAXI_ASSETS_STREAMED - Loading TAXI_AMB_P4_GUEST1", &iLocal_339, 1000);
		return 0;
	}
	if (!unk_0x5D98D654CDC2165A(Local_262.f_45[4]))
	{
		func_258("TAXI_ASSETS_STREAMED - Loading TAXI_AMB_P6_GUEST3", &iLocal_339, 1000);
		return 0;
	}
	if (!unk_0x5D98D654CDC2165A(joaat("stretch")))
	{
		func_258("TAXI_ASSETS_STREAMED - Loading STRETCH", &iLocal_339, 1000);
		return 0;
	}
	if (!unk_0x5D98D654CDC2165A(joaat("superd")))
	{
		func_258("TAXI_ASSETS_STREAMED - Loading SUPERD", &iLocal_339, 1000);
		return 0;
	}
	if (!unk_0xE9CCF312047EBEE0("oddjobs@taxi@gyn@cc@intro"))
	{
		func_258("TAXI_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@gyn@cc@intro Loading...", &iLocal_339, 1000);
		return 0;
	}
	if (!unk_0xE9CCF312047EBEE0("amb@world_human_stand_impatient@female@no_sign@exit"))
	{
		func_258("TAXI_ASSETS_STREAMED - Anim Dicts amb@world_human_stand_impatient@female@no_sign@exit Loading...", &iLocal_339, 1000);
		return 0;
	}
	if (!unk_0xE9CCF312047EBEE0("amb@world_human_stand_impatient@female@no_sign@base"))
	{
		func_258("TAXI_ASSETS_STREAMED - Anim Dicts amb@world_human_stand_impatient@female@no_sign@exit Loading...", &iLocal_339, 1000);
		return 0;
	}
	return 1;
}

bool func_349(var uParam0)
{
	return uParam0->f_117;
}

int func_350(var uParam0, var uParam1, var uParam2)
{
	var uVar0;
	int iVar1;
	
	if (!uParam0->f_109)
	{
		if ((func_356((*uParam1)[0], uParam0->f_4, uParam2, &uVar0, 0, 1, 0, 1, 1) || func_356((*uParam1)[1], uParam0->f_4, uParam2, &uVar0, 0, 1, 0, 1, 1)) || func_356((*uParam1)[2], uParam0->f_4, uParam2, &uVar0, 0, 1, 0, 1, 1))
		{
			func_354(uParam0, &uVar0, uParam2);
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (unk_0x91D5C8283D19AF49(uParam0->f_4, 0))
			{
				if (func_356(uParam1->f_4[iVar1], uParam0->f_4, uParam2, &uVar0, 0, 1, 0, 1, 1))
				{
					func_297(uParam0, "Taxi attacked the entourage", 9);
					return 1;
				}
			}
			iVar1++;
		}
		func_351(uParam0);
	}
	return 0;
}

void func_351(var uParam0)
{
	var uVar0;
	
	if (uParam0->f_410 < 7 && !uParam0->f_138)
	{
		if (((uParam0->f_411 == 9 && func_353()) && !func_150(uParam0)) || ((uParam0->f_411 != 9 && func_228(uParam0, 1)) && !func_150(uParam0)))
		{
			uVar0 = func_352(uParam0->f_4);
			unk_0x4955686EF8308B47(&uVar0);
			uParam0->f_4 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
			unk_0x0D21E1FDE062ED99(uParam0->f_4, true, 0);
			func_160(uParam0);
			func_153(uParam0, 0);
		}
	}
}

var func_352(var uParam0)
{
	return uParam0;
}

int func_353()
{
	int iVar0;
	
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
		{
			iVar0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
			if (unk_0x91D5C8283D19AF49(iVar0, 0))
			{
				if (unk_0x7BDC41A7CA0C77A2(iVar0, -1, 0) == unk_0x33CD235DF1E6A94E())
				{
					if (unk_0xD470A4E16E9AAE0E(iVar0, func_21()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_354(var uParam0, var uParam1, var uParam2)
{
	switch (*uParam1)
	{
		case 1:
			if (func_355(uParam0, 0, 1))
			{
				func_297(uParam0, "Aggro Aiming", 5);
			}
			break;
		
		case 4:
			if (func_355(uParam0, 0, 4))
			{
				func_297(uParam0, "Aggro Shot Near", 8);
			}
			break;
		
		case 8:
			if (func_355(uParam0, 0, 8))
			{
				func_297(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		
		case 16:
			if (func_355(uParam0, 1, 1))
			{
				func_297(uParam0, "Aggro Attacked", 14);
			}
			break;
		
		case 32:
			if (func_355(uParam0, 0, 1))
			{
				func_297(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		
		case 2:
			if (!func_24(*uParam2, 2) && func_124(uParam0))
			{
				func_297(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

int func_355(var uParam0, int iParam1, int iParam2)
{
	if (((uParam0->f_107 >= 2 && uParam0->f_410 < 29) || uParam0->f_410 <= 5) || (iParam1 && !uParam0->f_114))
	{
		return 1;
	}
	else if (!unk_0xD62C4419A41F106A(uParam0->f_3, 0))
	{
		if (!unk_0xC30D5C4DCAC8020A(uParam0->f_3))
		{
			if (iParam2 == 4)
			{
				func_195(uParam0, 66, 1, 0, 1);
			}
			else
			{
				func_195(uParam0, 65, 1, 0, 1);
			}
		}
	}
	return 0;
}

int func_356(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0x33CD235DF1E6A94E();
	if (!unk_0xD62C4419A41F106A(iVar0, 0) && !unk_0xD62C4419A41F106A(iParam0, 0))
	{
		if (!func_24(*uParam2, 1))
		{
			if (func_362(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_24(*uParam2, 2))
		{
			if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_24(*uParam2, 4))
		{
			if (func_360(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_24(*uParam2, 8))
		{
			if (func_359(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_24(*uParam2, 128);
		if (bParam4)
		{
			if (func_357(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_24(*uParam2, 16))
		{
			if (func_357(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (unk_0x765F6FEEFF39224F(iParam0))
	{
		if (iParam7 && unk_0x91BBD269506D61D2(iParam0, iVar0, 1))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_357(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_73)
		{
			iLocal_74 = unk_0xE80842D7B53F8525(iParam0);
			bLocal_73 = true;
		}
		iLocal_75 = unk_0xE80842D7B53F8525(iParam0);
		iLocal_76 = (iLocal_74 - iLocal_75);
		iVar0 = unk_0x8918EC905FC8975D();
		if (!unk_0xD62C4419A41F106A(iVar0, 0))
		{
			if (unk_0x91BBD269506D61D2(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_76) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_73)
		{
			if (unk_0x91BBD269506D61D2(iParam0, unk_0x33CD235DF1E6A94E(), 1))
			{
				if (IntToFloat(iLocal_76) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x91BBD269506D61D2(iParam0, unk_0x33CD235DF1E6A94E(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = unk_0x8918EC905FC8975D();
		if (!unk_0xD62C4419A41F106A(iVar1, 0))
		{
			if (unk_0x91BBD269506D61D2(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0xD62C4419A41F106A(iParam0, 0))
		{
			if (unk_0x2E9A4AE2A5B4D8E8(iParam0))
			{
				if (unk_0x457C8D55A1BB6B51(iParam0) == unk_0x33CD235DF1E6A94E())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0xA08B8AEC5B1A55D6(unk_0x33CD235DF1E6A94E()))
		{
			if (unk_0x18FB647D79B09657(iParam0, unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), 10f, 10f, 10f, false, true, 0))
			{
				if (unk_0x7E8740F26D4CAB87(unk_0x95B959F18401C09A()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x16BA85002E7063C6(unk_0x33CD235DF1E6A94E()))
	{
		if (unk_0x162E5B814E5F91B3(iParam0))
		{
			return 1;
		}
	}
	if (func_358(unk_0x33CD235DF1E6A94E(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x3AF2B3B68DD52355(iParam0) && func_9(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0xF0D230FB550CD6EB(iParam0, 0))
		{
			if (unk_0x4ED4D1D8B2023FD8(unk_0x33CD235DF1E6A94E(), unk_0xF2C96862595654B4(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0x4ED4D1D8B2023FD8(unk_0x33CD235DF1E6A94E(), iParam0))
		{
			return 1;
		}
		if (!unk_0xD62C4419A41F106A(iParam1, 0))
		{
			if (unk_0x91BBD269506D61D2(iParam1, unk_0x33CD235DF1E6A94E(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_358(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x96C4B46F194803A7(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0x5DACF31D3AC5ED8D(iParam0))
		{
			if (vdist(unk_0xFBB1F99A825CAB09(iParam0, true), unk_0xFBB1F99A825CAB09(iParam1, true)) < 2.5f)
			{
				if (unk_0x910FF514D7BC5674(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_359(int iParam0, int iParam1, var uParam2)
{
	if (unk_0x9ED464AAA493C8EF(iParam0, 4))
	{
		if (unk_0x5DACF31D3AC5ED8D(iParam0) && !unk_0xB15E06E3E9C9AEA5(iParam0))
		{
			if (unk_0x18FB647D79B09657(iParam1, unk_0xFBB1F99A825CAB09(iParam0, true), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_360(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar1;
	
	iVar1 = 0;
	if (!unk_0xD62C4419A41F106A(iParam1, 0))
	{
		vVar0 = { unk_0xFBB1F99A825CAB09(iParam1, true) };
	}
	if (unk_0x416C37C19CCE0077(vVar0, 4f, 1))
	{
		return 1;
	}
	if (unk_0xEA8CEFB1F41E5992(vVar0, to_float(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0x9ED464AAA493C8EF(iParam0, 2))
	{
		if (unk_0x5DACF31D3AC5ED8D(iParam0))
		{
			if (unk_0x18FB647D79B09657(iParam1, unk_0xFBB1F99A825CAB09(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
			{
				if (unk_0x910FF514D7BC5674(unk_0x22B02EC53152632C(iParam1), iParam0, 120f) && unk_0x72F7FAFD0710100C(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0xF0D230FB550CD6EB(unk_0x22B02EC53152632C(iParam1), 0))
			{
				iVar1 = unk_0xF2C96862595654B4(unk_0x22B02EC53152632C(iParam1), 0);
			}
			if (unk_0x105CB7A75E93DC77(iParam0) || func_361(iVar1))
			{
				if (unk_0x18FB647D79B09657(iParam1, unk_0xFBB1F99A825CAB09(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
				{
					if (unk_0x910FF514D7BC5674(unk_0x22B02EC53152632C(iParam1), iParam0, 120f) && unk_0x72F7FAFD0710100C(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0x34DB0AC28A1FDE20((vVar0.x - IntToFloat(uParam2->f_6)), (vVar0.y - IntToFloat(uParam2->f_6)), (vVar0.z - IntToFloat(uParam2->f_6)), (vVar0.x + IntToFloat(uParam2->f_6)), (vVar0.y + IntToFloat(uParam2->f_6)), (vVar0.z + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_361(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		if (unk_0x91D5C8283D19AF49(iParam0, 0))
		{
			if (unk_0x7BDC41A7CA0C77A2(iParam0, -1, 0) != 0)
			{
				if (unk_0x96C4B46F194803A7(unk_0x33CD235DF1E6A94E(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_10(unk_0x33CD235DF1E6A94E(), iParam0, 1) < 40f)
						{
							if (unk_0xDFD0ACB809AD97C9(unk_0x95B959F18401C09A(), &iVar1))
							{
								if ((unk_0x680558231C80291D(iVar1) && unk_0xEAE1362B9F5C7B18(iVar1) == iParam0) || (unk_0x068481DAF84B9654(iVar1) && unk_0x22B02EC53152632C(iVar1) == unk_0x7BDC41A7CA0C77A2(iParam0, -1, 0)))
								{
									if ((unk_0xA1248DEAD0B27B8E(unk_0x33CD235DF1E6A94E()) && unk_0xF1CDE9FD207C4CD8(0, 24)) || (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0) && unk_0xF1CDE9FD207C4CD8(0, 69)))
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
	}
	return 0;
}

int func_362(int iParam0, var uParam1)
{
	if (!unk_0xD62C4419A41F106A(iParam0, 0))
	{
		if (unk_0x9ED464AAA493C8EF(unk_0x33CD235DF1E6A94E(), 6))
		{
			if (unk_0xAC6A512C64D9A9C0(unk_0x95B959F18401C09A(), iParam0) || unk_0xC2ECB90E2DFA5802(unk_0x95B959F18401C09A(), iParam0))
			{
				if (unk_0x910FF514D7BC5674(iParam0, unk_0x33CD235DF1E6A94E(), 90f))
				{
					if (func_9(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0xE3903F59E2F22150();
						}
						else if ((unk_0xE3903F59E2F22150() - uParam1->f_1) > uParam1->f_3)
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

void func_363(var uParam0, var uParam1, bool bParam2)
{
	if (!func_24(uParam0->f_55, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!unk_0x786AF4A44E1B5B4B(&(uParam0->f_124)) && func_52())
				{
					*uParam1++;
				}
				break;
			
			case 1:
				if (!func_52())
				{
					StringCopy(&(uParam0->f_124), func_139(), 24);
					uParam0->f_56 = (uParam0->f_56 + uParam0->f_57);
					if (uParam0->f_56 < 0)
					{
						uParam0->f_56 = 0;
					}
					uParam0->f_57 = 0;
					*uParam1 = 0;
					if (bParam2)
					{
					}
				}
				break;
			}
	}
}

void func_364(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_410 >= 5)
	{
		if (unk_0x765F6FEEFF39224F(uParam0->f_4))
		{
			if (Local_165 > 0 && !func_242(Local_165.f_1[4 /*4*/], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_165 - 1))
				{
					if (func_242(Local_165.f_1[iVar0 /*4*/], 2))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_165.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!func_242(Local_165.f_1[iVar0 /*4*/], 4))
							{
								func_233(&(Local_165.f_1[iVar0 /*4*/]), 4);
								Local_165.f_1[iVar0 /*4*/].f_1 = unk_0xE3903F59E2F22150();
							}
						}
						else
						{
							func_23(&(Local_165.f_1[iVar0 /*4*/]), 12);
						}
						if (func_242(Local_165.f_1[iVar0 /*4*/], 4) && !func_242(Local_165.f_1[iVar0 /*4*/], 8))
						{
							Stack.Push(uParam0);
							Stack.Push(Local_165.f_1[iVar0 /*4*/].f_1);
							Call_Loc(Local_165.f_1[iVar0 /*4*/].f_3);
							if (StackVal)
							{
								func_233(&(Local_165.f_1[iVar0 /*4*/]), 8);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_297(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

int func_365(var uParam0, var uParam1)
{
	var uVar0;
	
	if (!func_142(uParam0, 27))
	{
		func_189(uParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!uParam0->f_109 && func_387(uParam0, 27) > 5f)
	{
		if (func_356(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_264(uParam0, 27, 0, 0);
			func_264(uParam0, 10, 0, 0);
			func_354(uParam0, &uVar0, uParam1);
		}
		func_351(uParam0);
	}
	if (uParam0->f_410 >= 3 && uParam0->f_410 <= 5)
	{
		func_366(uParam0);
	}
	if ((((!unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A()) && (unk_0x117DAF3BF7232886(*uParam0) && !unk_0x49D25022440E65EE(*uParam0))) && (unk_0x117DAF3BF7232886(uParam0->f_1) && !unk_0x49D25022440E65EE(uParam0->f_1))) && !unk_0xC4B7D5901EDA35B5()) && !func_52())
	{
		if (func_387(uParam0, 26) > 10f)
		{
			func_149(uParam0, 26, 0);
			unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), true, 0);
		}
	}
	else if (func_142(uParam0, 26))
	{
		func_149(uParam0, 26, 0);
	}
	return 0;
}

void func_366(var uParam0)
{
	if (!func_386(uParam0->f_429))
	{
		uParam0->f_429 = func_385();
		func_376(&(uParam0->f_429), 0, 0, unk_0x9EC3B269A34A2BEE(4, 7), 0, 0, 0);
	}
	else if (func_367(uParam0->f_429))
	{
		func_297(uParam0, "Player took too long to make pickup", 9);
	}
}

bool func_367(int iParam0)
{
	return func_368(func_385(), iParam0);
}

int func_368(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_386(iParam1) || !func_386(iParam0))
	{
		return 1;
	}
	iVar0 = func_374(iParam0);
	iVar1 = func_374(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_373(iParam0);
	iVar1 = func_373(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_372(iParam0);
	iVar1 = func_372(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_371(iParam0);
	iVar1 = func_371(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_370(iParam0);
	iVar1 = func_370(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_369(iParam0);
	iVar1 = func_369(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_369(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_370(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_371(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_372(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_373(int iParam0)
{
	return iParam0 & 15;
}

var func_374(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_375(unk_0x0E4018692D92041D(iParam0, 31), -1, 1)) + 2011;
}

int func_375(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_376(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_374(*uParam0);
	iVar1 = func_373(*uParam0);
	iVar2 = func_372(*uParam0);
	iVar3 = func_371(*uParam0);
	iVar4 = func_370(*uParam0);
	iVar5 = func_369(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_384(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_384(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_377(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_377(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_383(uParam0, iParam1);
	func_382(uParam0, iParam2);
	func_381(uParam0, iParam3);
	func_380(uParam0, iParam5);
	func_379(uParam0, iParam4);
	func_378(uParam0, iParam6);
}

void func_378(var uParam0, int iParam1)
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

void func_379(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_373(*uParam0);
	iVar1 = func_374(*uParam0);
	if (iParam1 < 1 || iParam1 > func_384(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_380(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_381(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_382(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_383(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_384(int iParam0, int iParam1)
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

int func_385()
{
	var uVar0;
	
	func_383(&uVar0, unk_0xE6A7CE90720B9037());
	func_382(&uVar0, unk_0x7EA67BD818402745());
	func_381(&uVar0, unk_0x13348E86D5B8A052());
	func_379(&uVar0, unk_0x020A28FAE1C09250());
	func_380(&uVar0, unk_0x2C02CAA9C4127339());
	func_378(&uVar0, unk_0xED3F08F762AAA55A());
	return uVar0;
}

int func_386(int iParam0)
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
	iVar0 = func_369(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_370(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_371(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_374(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_373(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_372(iParam0);
	if (iVar5 < 1 || iVar5 > func_384(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

float func_387(var uParam0, int iParam1)
{
	if (!func_16(&(uParam0->f_146[iParam1 /*3*/])))
	{
		func_190(&(uParam0->f_146[iParam1 /*3*/]));
	}
	return func_104(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_388()
{
	func_389(&Local_260);
	func_406();
}

void func_389(var uParam0)
{
	func_11(0, uParam0, 1);
	if (uParam0->f_411 != 9)
	{
		func_410(2);
	}
}

int func_390(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		return 1;
	}
	if ((((!func_52() && func_387(uParam0, 3) > 1f) || uParam0->f_415 == 18) || uParam0->f_415 == 14) || uParam0->f_415 == 15)
	{
		if (!unk_0xD62C4419A41F106A(uParam0->f_3, 0))
		{
			if (unk_0x91D5C8283D19AF49(uParam0->f_4, 0))
			{
				if (unk_0x10930B9CAD4111C2(uParam0->f_3, uParam0->f_4, 0))
				{
					if (func_64(uParam0) == 0 || func_242(uParam0->f_85, 32))
					{
						if (!unk_0x61DFE32FB87BC784(uParam0->f_4))
						{
							func_308(uParam0, 4160, 0);
						}
						else
						{
							func_308(uParam0, 0, 0);
						}
						return 1;
					}
					else
					{
						func_308(uParam0, 0, 0);
						return 1;
					}
				}
				else
				{
					func_308(uParam0, 0, 0);
					return 1;
				}
			}
			else
			{
				func_308(uParam0, 0, 0);
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if ((unk_0xE3903F59E2F22150() % 1000) < 50)
	{
	}
	return 0;
}

void func_391(var uParam0)
{
	if (unk_0xE38E3CF1625A4145(uParam0->f_8))
	{
		unk_0x1ABDB383C83A336A(&(uParam0->f_8));
	}
	if (unk_0xE38E3CF1625A4145(uParam0->f_9))
	{
		unk_0x1ABDB383C83A336A(&(uParam0->f_9));
	}
	if (unk_0xE38E3CF1625A4145(uParam0->f_10))
	{
		unk_0x1ABDB383C83A336A(&(uParam0->f_10));
	}
}

int func_392(var uParam0)
{
	if (uParam0->f_109 && uParam0->f_410 < 29)
	{
		return 1;
	}
	return 0;
}

void func_393()
{
	func_395(&Local_260, 7);
	Local_260.f_410 = 0;
	Local_260.f_23 = { -1248.422f, 252.6221f, 63.0799f };
	Local_260.f_33 = 34.4f;
	Local_260.f_26 = { -231.2259f, -889.5931f, 28.8903f };
	Local_260.f_34 = 251.9658f;
	Local_262.f_41[0] = joaat("a_m_y_business_02");
	Local_262.f_41[1] = joaat("a_m_y_business_02");
	Local_262.f_41[2] = joaat("a_m_y_business_02");
	Local_262.f_45[0] = joaat("a_f_y_beach_01");
	Local_262.f_45[1] = joaat("a_f_y_beach_01");
	Local_262.f_45[2] = joaat("a_f_y_beach_01");
	Local_262.f_45[3] = joaat("a_f_y_beach_01");
	Local_262.f_45[4] = joaat("a_m_y_business_01");
	func_394(&Local_260, 3, 6);
}

void func_394(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_58 = iParam1;
	uParam0->f_59 = iParam2;
}

void func_395(var uParam0, int iParam1)
{
	func_405(1);
	func_163();
	func_6(&(uParam0->f_244));
	func_404(uParam0);
	uParam0->f_411 = iParam1;
	if (!func_24(Global_106565.f_19091, 4))
	{
		func_232(&(Global_106565.f_19091), 4);
	}
	func_399(uParam0);
	func_397(uParam0);
	unk_0x5FEE418CE11E6DDE(unk_0x33CD235DF1E6A94E(), 32, false);
	uParam0->f_102 = (func_396(uParam0->f_411) % uParam0->f_101);
	uParam0->f_80 = 0;
	uParam0->f_428 = func_2();
	unk_0x2EE8D1440C9060EF("TAXI", 2);
}

int func_396(int iParam0)
{
	return Global_106565.f_19091.f_39[iParam0];
}

void func_397(var uParam0)
{
	switch (func_64(uParam0))
	{
		case 0:
			func_398(uParam0, "EXC", "Txm2", "Txm2aud");
			uParam0->f_101 = 2;
			break;
		
		case 1:
			func_398(uParam0, "TIE", "Txm1", "txm1aud");
			uParam0->f_101 = 1;
			break;
		
		case 2:
			func_398(uParam0, "DED", "Txm3", "Txm3aud");
			uParam0->f_101 = 1;
			break;
		
		case 3:
			func_398(uParam0, "GYB", "Txm12", "Txm12au");
			uParam0->f_101 = 2;
			break;
		
		case 4:
			func_398(uParam0, "TTB", "Txm6", "Txm6aud");
			uParam0->f_101 = 2;
			break;
		
		case 5:
			func_398(uParam0, "CUI", "Txm8", "Txm8aud");
			uParam0->f_101 = 1;
			break;
		
		case 6:
			func_398(uParam0, "GYN", "Txm9", "Txm9aud");
			uParam0->f_101 = 1;
			break;
		
		case 7:
			func_398(uParam0, "TCC", "Txm10", "Txm10au");
			uParam0->f_101 = 2;
			break;
		
		case 8:
			func_398(uParam0, "TFC", "Txm4", "Txm4aud");
			uParam0->f_101 = 1;
			break;
		
		case 9:
			func_398(uParam0, "PRO", "txmP", "TxmPaud");
			uParam0->f_101 = 1;
			break;
	}
}

void func_398(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	uParam0->f_122 = sParam1;
	uParam0->f_143 = sParam2;
	uParam0->f_144 = sParam3;
}

void func_399(var uParam0)
{
	int iVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			func_403(uParam0, 3);
			func_402(uParam0, 14);
			break;
		
		case 1:
			func_403(uParam0, 14);
			func_402(uParam0, 8);
			break;
		
		case 2:
			func_403(uParam0, 8);
			func_402(uParam0, 7);
			break;
		
		case 3:
			func_403(uParam0, 15);
			func_402(uParam0, 6);
			break;
		
		case 4:
			func_403(uParam0, 0);
			func_402(uParam0, 3);
			break;
		
		case 5:
			func_403(uParam0, 6);
			func_402(uParam0, 7);
			break;
		
		case 6:
			func_403(uParam0, 8);
			func_402(uParam0, 15);
			break;
		
		case 7:
			func_403(uParam0, 8);
			func_402(uParam0, 14);
			break;
		
		case 8:
			func_403(uParam0, 7);
			func_402(uParam0, 15);
			break;
		
		case 9:
			func_403(uParam0, unk_0x9EC3B269A34A2BEE(0, 17));
			iVar0 = func_401((uParam0->f_418.f_2 + unk_0x9EC3B269A34A2BEE(1, 17)), 0, 16);
			func_402(uParam0, iVar0);
			func_400(uParam0);
			uParam0->f_418.f_7 = 1;
			uParam0->f_418.f_8 = 1;
			break;
	}
}

void func_400(var uParam0)
{
	switch (uParam0->f_418.f_2)
	{
		case 2:
		case 8:
			uParam0->f_418.f_3 = 1;
			break;
		
		case 0:
		case 3:
		case 5:
		case 9:
		case 15:
			uParam0->f_418.f_3 = 2;
			break;
		
		case 4:
		case 10:
			uParam0->f_418.f_3 = 3;
			break;
		
		case 1:
		case 6:
		case 13:
			uParam0->f_418.f_3 = 4;
			break;
		
		case 11:
			uParam0->f_418.f_3 = 5;
			break;
		
		case 12:
		case 14:
			uParam0->f_418.f_3 = 6;
			break;
		
		case 7:
			uParam0->f_418.f_3 = 7;
			break;
	}
}

int func_401(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam1 > iParam2)
	{
		return -1;
	}
	if (iParam0 >= iParam1 && iParam0 <= iParam2)
	{
		return iParam0;
	}
	iVar0 = 0;
	if (iParam0 < iParam1)
	{
		if (iParam0 < 0)
		{
			iVar0 = -iParam0;
		}
	}
	else if (iParam1 < 0)
	{
		iVar0 = -iParam1;
	}
	iParam0 = (iParam0 + iVar0);
	iParam1 = (iParam1 + iVar0);
	iParam2 = (iParam2 + iVar0);
	iVar1 = (iParam2 - iParam1);
	if (iParam0 > iParam2)
	{
		iVar2 = (iParam0 - iParam2);
		iVar3 = (iVar2 % iVar1);
		iParam0 = (iParam1 + iVar3);
	}
	else
	{
		iVar2 = (iParam1 - iParam0);
		iVar3 = (iVar2 % iVar1);
		iParam0 = (iParam2 - iVar3);
	}
	return (iParam0 - iVar0);
}

void func_402(var uParam0, int iParam1)
{
	uParam0->f_418.f_1 = iParam1;
}

void func_403(var uParam0, int iParam1)
{
	uParam0->f_418.f_2 = iParam1;
}

void func_404(var uParam0)
{
	uParam0->f_2 = unk_0x33CD235DF1E6A94E();
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_14 = { func_43() };
	uParam0->f_17 = { func_43() };
	uParam0->f_35 = 0f;
	uParam0->f_76 = 0;
	uParam0->f_49 = 0;
	uParam0->f_109 = 0;
	uParam0->f_36 = 0f;
	uParam0->f_410 = 2;
	uParam0->f_123 = "TRS_FINDING_LOCATION";
	func_149(uParam0, 32, 0);
}

void func_405(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_105621, unk_0xD178EF744F20B712(), 24);
		Global_105615 = 1;
	}
	else
	{
		StringCopy(&Global_105621, "NULL", 24);
		Global_105615 = 0;
	}
}

void func_406()
{
	func_409(&Local_262);
	func_191();
	func_408();
	func_407();
	unk_0x5894DC159447E10A();
}

void func_407()
{
	unk_0xAEF90BD69E5087CF();
	unk_0xFF2DEA68E2D3602E("oddjobs@taxi@gyn@cc@hotbox");
}

void func_408()
{
	unk_0x71CA80D41E1338B4(Local_262.f_41[0]);
	unk_0x71CA80D41E1338B4(Local_262.f_41[1]);
	unk_0x71CA80D41E1338B4(Local_262.f_41[2]);
}

void func_409(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xC2FDDE313D5A5398(uParam0->f_73[iVar0]))
		{
			unk_0x09B7505F11567F76(uParam0->f_73[iVar0], 0);
		}
		iVar0++;
	}
}

void func_410(int iParam0)
{
	Global_105275.f_22 = iParam0;
}

