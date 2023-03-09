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
	float fLocal_46 = 0f;
	var uLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	vector3 vLocal_51[16] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_52[16] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	vector3 vLocal_53 = { 0f, 0f, 0f };
	vector3 vLocal_54 = { 0f, 0f, 0f };
	vector3 vLocal_55 = { 0f, 0f, 0f };
	vector3 vLocal_56 = { 0f, 0f, 0f };
	float fLocal_57 = 0f;
	vector3 vLocal_58 = { 0f, 0f, 0f };
	vector3 vLocal_59 = { 0f, 0f, 0f };
	float fLocal_60 = 0f;
	vector3 vLocal_61 = { 0f, 0f, 0f };
	vector3 vLocal_62 = { 0f, 0f, 0f };
	float fLocal_63 = 0f;
	vector3 vLocal_64 = { 0f, 0f, 0f };
	vector3 vLocal_65 = { 0f, 0f, 0f };
	float fLocal_66 = 0f;
	vector3 vLocal_67 = { 0f, 0f, 0f };
	vector3 vLocal_68 = { 0f, 0f, 0f };
	float fLocal_69 = 0f;
	vector3 vLocal_70 = { 0f, 0f, 0f };
	vector3 vLocal_71 = { 0f, 0f, 0f };
	float fLocal_72 = 0f;
	vector3 vLocal_73 = { 0f, 0f, 0f };
	vector3 vLocal_74 = { 0f, 0f, 0f };
	float fLocal_75 = 0f;
	bool bLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	bool bLocal_79 = 0;
	int iLocal_80 = 0;
	bool bLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	bool bLocal_84 = 0;
	int iLocal_85 = 0;
	float fLocal_86 = 0f;
	float fLocal_87 = 0f;
	float fLocal_88 = 0f;
	float fLocal_89 = 0f;
	var uLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	var uLocal_97[2] = { 0, 0 };
	int iLocal_98[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	var uLocal_102[4] = { 0, 0, 0, 0 };
	int iLocal_103[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_104 = 0;
	var uLocal_105[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_106 = 0;
	var uLocal_107 = 0;
	int iLocal_108 = 0;
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
	var uLocal_132 = 8;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 4;
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
	var uLocal_151 = 4;
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
	var uLocal_166 = 4;
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
	var uLocal_181 = 4;
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
	var uLocal_196 = 4;
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
	var uLocal_211 = 4;
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
	var uLocal_226 = 4;
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
	var uLocal_241 = 4;
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
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	char* sLocal_262 = NULL;
	char* sLocal_263 = NULL;
	char* sLocal_264 = NULL;
	char* sLocal_265 = NULL;
	char* sLocal_266 = NULL;
	char* sLocal_267 = NULL;
	char* sLocal_268 = NULL;
	char* sLocal_269 = NULL;
	int iLocal_270 = 0;
	var uLocal_271 = 16;
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
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
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
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
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
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	int iLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 5;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 5;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	
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
	fLocal_46 = -1f;
	vLocal_53 = { -1109.213f, 4914.744f, 216.101f };
	vLocal_54 = { -1034.6f, 4918.6f, 205.9f };
	vLocal_55 = { -1066.963f, 4873.13f, 207.3281f };
	vLocal_56 = { -1112.946f, 4986.957f, 241.133f };
	fLocal_57 = 72.3125f;
	vLocal_58 = { -1138.386f, 4872.04f, 207.5488f };
	vLocal_59 = { -1091.959f, 4983.27f, 241.1698f };
	fLocal_60 = 57.8125f;
	vLocal_61 = { -1171.648f, 4888.658f, 211.0756f };
	vLocal_62 = { -1137.907f, 4926.572f, 240.999f };
	fLocal_63 = 17.9375f;
	vLocal_64 = { -1177.981f, 4903.231f, 212.477f };
	vLocal_65 = { -1153.398f, 4902.631f, 241.155f };
	fLocal_66 = 17.9375f;
	vLocal_67 = { -1175.693f, 4904.839f, 207.5207f };
	vLocal_68 = { -1142.08f, 4985.32f, 241.2887f };
	fLocal_69 = 36.375f;
	vLocal_70 = { -1106.212f, 4860.086f, 206.1207f };
	vLocal_71 = { -1105.016f, 4873.854f, 241.1453f };
	fLocal_72 = 11.5625f;
	vLocal_73 = { -1044.268f, 4916.587f, 209.8365f };
	vLocal_74 = { -1063.605f, 4972.88f, 241.1299f };
	fLocal_75 = 12.875f;
	iLocal_96 = 4;
	iLocal_261 = "REPLAY_TMG";
	sLocal_262 = "CMN_TDIED";
	if (unk_0x9EC5BDC006623C42(26))
	{
		func_188();
	}
	if (unk_0x130EFDEF56EB4C27())
	{
		unk_0x5894DC159447E10A();
	}
	while (true)
	{
		wait(0);
		if (unk_0xA80721FDC3BDCCDB() || iLocal_77)
		{
			unk_0x4B06B5746CBEC99F(0f);
			switch (iLocal_50)
			{
				case 0:
					if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
					{
						if (Global_106565.f_24989.f_5 >= iLocal_96 && !func_187())
						{
							iLocal_50 = 2;
						}
						func_184();
						func_181();
					}
					break;
				
				case 1:
					unk_0x4AE93B307FDB2941(unk_0x95B959F18401C09A());
					if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
					{
						if (timera() > 2000)
						{
							if (iLocal_91 == 1)
							{
								func_180();
							}
							else if (iLocal_91 == 2)
							{
								func_152();
							}
						}
						if (timera() > 1300)
						{
							if (iLocal_93 < 3)
							{
								func_151();
							}
							else
							{
								func_150();
							}
						}
						if (iLocal_78)
						{
							func_137(26, 1);
							iLocal_78 = 0;
							iLocal_50 = 0;
						}
					}
					break;
				
				case 2:
					unk_0x4AE93B307FDB2941(unk_0x95B959F18401C09A());
					if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
					{
						func_109();
					}
					unk_0x046ED2CF120C8949(Global_35548[9 /*31*/], 0, 0, 1);
					unk_0x046ED2CF120C8949(Global_35548[10 /*31*/], 0, 0, 1);
					break;
				
				case 4:
					if (!unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
					{
						iLocal_50 = 3;
						break;
					}
					bLocal_79 = false;
					unk_0x4B06B5746CBEC99F(0f);
					iVar0 = 0;
					while (iVar0 < iLocal_98)
					{
						if (unk_0xBC2FC12AD0FBF72E(iLocal_98[iVar0]))
						{
							if (unk_0xE38E3CF1625A4145(uLocal_105[iVar0]))
							{
								unk_0x1ABDB383C83A336A(&(uLocal_105[iVar0]));
							}
						}
						else
						{
							if (unk_0x181998D7D100C503(iLocal_98[iVar0]))
							{
								if (unk_0xE38E3CF1625A4145(uLocal_105[iVar0]))
								{
									unk_0x1ABDB383C83A336A(&(uLocal_105[iVar0]));
								}
							}
							else if (unk_0x335C0645074963FE(iLocal_98[iVar0], unk_0x33CD235DF1E6A94E(), 30f, 30f, 30f, 0, 1, 0))
							{
								if (!func_108())
								{
									if (iLocal_95 < unk_0xE3903F59E2F22150())
									{
										iVar1 = unk_0x9EC3B269A34A2BEE(0, 3);
										if (iVar1 == 0)
										{
											func_98(&uLocal_271, "ACULTAU", "ACULT_SHOUT", 4, 0, 0, 0);
										}
										else if (iVar1 == 1)
										{
											func_97(&uLocal_271, 1, iLocal_98[iVar0], "ACULTMember1", 0, 1);
											func_98(&uLocal_271, "ACULTAU", "ACULT_FIGHT1", 4, 0, 0, 0);
										}
										else if (iVar1 == 2)
										{
											func_97(&uLocal_271, 2, iLocal_98[iVar0], "ACULTMember2", 0, 1);
											func_98(&uLocal_271, "ACULTAU", "ACULT_FIGHT2", 4, 0, 0, 0);
										}
										iLocal_95 = (unk_0xE3903F59E2F22150() + unk_0x9EC3B269A34A2BEE(4500, 6000));
									}
								}
							}
							bLocal_79 = true;
						}
						iVar0++;
					}
					if (!bLocal_79)
					{
						func_61();
					}
					break;
				
				case 3:
					if (!iLocal_77)
					{
						uLocal_109 = func_60();
						if (!unk_0x11AE7F6A404414C9(uLocal_109))
						{
							break;
						}
						func_59(&uLocal_114, 0);
						iLocal_77 = 1;
					}
					if (func_30(&uLocal_114, &uLocal_120, &uLocal_109, iLocal_261, sLocal_262, &bLocal_76, 78))
					{
						iLocal_94 = 0;
						unk_0xCEE359851F3C8198(iLocal_270);
						unk_0x74CCCCFC496FBDC7(iLocal_108);
						iVar0 = 0;
						while (iVar0 < iLocal_98)
						{
							if (unk_0x765F6FEEFF39224F(iLocal_98[iVar0]))
							{
								unk_0x4B8B69DAE5BAC592(&(iLocal_98[iVar0]));
							}
							iVar0++;
						}
						iVar0 = 0;
						while (iVar0 < iLocal_103)
						{
							if (unk_0x765F6FEEFF39224F(iLocal_103[iVar0]))
							{
								unk_0xEC26F4BFC9942A0C(&(iLocal_103[iVar0]));
							}
							iVar0++;
						}
						if (unk_0x117DAF3BF7232886(iLocal_106))
						{
							unk_0x189377BFBDC9127F(iLocal_106, false);
						}
						if (unk_0x765F6FEEFF39224F(iLocal_101))
						{
							unk_0xEC26F4BFC9942A0C(&iLocal_101);
						}
						if (unk_0x765F6FEEFF39224F(iLocal_101))
						{
							unk_0xEC26F4BFC9942A0C(&iLocal_101);
						}
						if (bLocal_76)
						{
							func_10();
							func_3(0);
							func_1(1);
							iLocal_77 = 0;
							iLocal_50 = 2;
						}
						else
						{
							iLocal_77 = 0;
							func_188();
						}
					}
					break;
			}
		}
		else if (bLocal_81)
		{
		}
		else
		{
			func_188();
		}
	}
}

void func_1(bool bParam0)
{
	if (bParam0)
	{
		unk_0x476CFECD9A50C6EC(0);
		unk_0xF84B1ACDA9DC2C16(1);
		unk_0x61FC243328EB16DD(0);
		func_2(1);
		Global_88970 = 1;
	}
	else
	{
		unk_0x476CFECD9A50C6EC(1);
		unk_0xF84B1ACDA9DC2C16(0);
		unk_0x61FC243328EB16DD(1);
		func_2(0);
		Global_88970 = 0;
	}
}

void func_2(bool bParam0)
{
	if ((Global_36425 == 9 || Global_36425 == 10) || Global_36425 == 5)
	{
		Global_105214 = bParam0;
		if (bParam0)
		{
		}
	}
	else
	{
		if (bParam0)
		{
		}
		Global_105214 = 0;
	}
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		func_9();
		if (Global_14553.f_1 == 10 || Global_14553.f_1 == 9)
		{
			unk_0x8950ED5730F62EE8(&Global_2424, 16);
		}
		Global_14553.f_1 = 1;
		if (func_8(0))
		{
			func_4(0);
		}
	}
	else if (Global_14553.f_1 == 1)
	{
		if (!Global_14553.f_1 == 0)
		{
			Global_14553.f_1 = 3;
		}
	}
}

void func_4(int iParam0)
{
	if (func_7())
	{
		return;
	}
	if (Global_14725)
	{
		func_6(0, 0);
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
	if (!func_5())
	{
		Global_14553.f_1 = 3;
	}
}

int func_5()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_8(0))
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

bool func_7()
{
	return unk_0x0E4018692D92041D(Global_1681628, 19);
}

int func_8(int iParam0)
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

void func_9()
{
	if (Global_14553.f_1 == 9 || Global_14553.f_1 == 10)
	{
		Global_15919 = 0;
		Global_15915 = 1;
	}
}

void func_10()
{
	func_20();
	func_13(0, 1);
	func_11(0, 1);
}

void func_11(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		func_13(0, 0);
		unk_0x0B1F8038F56C12B7("DeathFailOut", 0, 0);
		unk_0x8950ED5730F62EE8(&iLocal_48, 1);
		func_12(1, 2, 0);
		unk_0xA5D2A3EA42183C13(2);
	}
	else
	{
		if (unk_0x0E4018692D92041D(iLocal_48, 1) || iParam1)
		{
			unk_0xA94473FEE1796AED("DeathFailOut");
			func_12(0, 2, 1);
			unk_0xA5D2A3EA42183C13(0);
		}
		unk_0xCE689A8E8C42ED78(&iLocal_48, 1);
	}
}

void func_12(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 1)
	{
		unk_0x8950ED5730F62EE8(&iLocal_48, 2);
		if (!unk_0xB331FCEB94EB05C8())
		{
			if (iParam1 == 1)
			{
				unk_0xCBDC8BC7A589C76E(0.2f);
			}
			else
			{
				unk_0xCBDC8BC7A589C76E(0.075f);
			}
		}
	}
	else
	{
		if (unk_0x0E4018692D92041D(iLocal_48, 2) || iParam2)
		{
			if (!unk_0xB331FCEB94EB05C8())
			{
				unk_0xCBDC8BC7A589C76E(1f);
			}
		}
		unk_0xCE689A8E8C42ED78(&iLocal_48, 2);
	}
}

void func_13(int iParam0, int iParam1)
{
	char* sVar0;
	
	switch (func_14())
	{
		case 0:
			sVar0 = "DeathFailMichaelIn";
			break;
		
		case 1:
			sVar0 = "DeathFailFranklinIn";
			break;
		
		case 2:
			sVar0 = "DeathFailTrevorIn";
			break;
	}
	if (iParam0 == 1)
	{
		if (!unk_0x0E4018692D92041D(iLocal_48, 0) || iParam1)
		{
			unk_0x0B1F8038F56C12B7(sVar0, 0, 0);
			unk_0x8950ED5730F62EE8(&iLocal_48, 0);
			func_12(1, 1, 0);
			unk_0xA5D2A3EA42183C13(1);
		}
	}
	else
	{
		if (unk_0x0E4018692D92041D(iLocal_48, 0) || iParam1)
		{
			unk_0xA94473FEE1796AED(sVar0);
			func_12(0, 1, 1);
			unk_0xA5D2A3EA42183C13(0);
		}
		unk_0xCE689A8E8C42ED78(&iLocal_48, 0);
	}
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
	iLocal_48 = 0;
	iLocal_49 = 0;
	func_21(0, 1, 1, 0, 0, 0);
	func_3(1);
}

void func_21(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0xCBE6E2953ED9652D(unk_0x95B959F18401C09A());
		unk_0xF4197686EF83F52A(unk_0x95B959F18401C09A(), 1);
		unk_0x11D1216D8F205785(unk_0x95B959F18401C09A(), 1);
		func_29(1);
		unk_0x9F86AEF7DC996029();
		unk_0x68F7298CC6F16961();
		if (Global_14553.f_1 > 3)
		{
			if (unk_0xA30F14B621E3269D())
			{
				unk_0xD92171BC6C48DB90(false);
			}
			if (!func_5())
			{
				Global_14553.f_1 = 3;
			}
			Global_15866 = 5;
		}
		func_28(1, iParam3, iParam2, 0);
		Global_56500 = 1;
		Global_68810 = 1;
		Global_71588 = 1;
	}
	else
	{
		func_29(0);
		unk_0xD384C2E6BE0D5ABF();
		Global_56500 = 0;
		if (bParam1)
		{
			unk_0x36296F11E96E764D();
		}
		unk_0xF4197686EF83F52A(unk_0x95B959F18401C09A(), 0);
		unk_0x11D1216D8F205785(unk_0x95B959F18401C09A(), 0);
		func_28(0, iParam3, iParam2, 0);
		if (unk_0xB331FCEB94EB05C8())
		{
			if (((((!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()) && !func_26(unk_0x95B959F18401C09A())) && !func_23(unk_0x95B959F18401C09A(), 0)) && !func_22()) && !bParam4) && !bParam5)
			{
				unk_0x9611832841071B69(unk_0x33CD235DF1E6A94E(), 0);
			}
		}
		else if (((!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()) && !func_26(unk_0x95B959F18401C09A())) && !bParam4) && !bParam5)
		{
			unk_0x9611832841071B69(unk_0x33CD235DF1E6A94E(), 0);
		}
		Global_71588 = 0;
	}
}

bool func_22()
{
	return unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_39.f_18, 14);
}

bool func_23(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x95B959F18401C09A())
	{
		bVar0 = func_24(-1, 0) == 8;
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

int func_24(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_25();
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

int func_25()
{
	return Global_1312745;
}

int func_26(int iParam0)
{
	if (func_23(iParam0, 0))
	{
		return 1;
	}
	if (func_27())
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

bool func_27()
{
	return unk_0x0E4018692D92041D(Global_2359302, 3);
}

int func_28(int iParam0, int iParam1, var uParam2, int iParam3)
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

void func_29(int iParam0)
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

int func_30(var uParam0, var uParam1, var uParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	switch (*uParam0)
	{
		case 0:
			*uParam0 = 1;
			unk_0xDEFB5E2E5CBD460A("DEATH_SCENE");
			unk_0x0F8EAEEC97DDBCB3(-1, "ScreenFlash", "WastedSounds", 1);
			func_58(&(uParam0->f_1));
			func_20();
			func_57(uParam1, (0.15f * 0.075f), 0.5f);
			unk_0x05CFB4D665C2A88D(1);
			break;
		
		case 1:
			if (func_55() || unk_0xBB5E373390A5F824())
			{
				*uParam0 = 2;
			}
			if (!func_54(uParam0->f_4, 4))
			{
				if (unk_0x3C05A6D663EA1B6A("OFFMISSION_WASTED", 0, -1))
				{
					unk_0x0F8EAEEC97DDBCB3(-1, "Bed", "WastedSounds", 1);
					func_52(&(uParam0->f_4), 4);
				}
			}
			if (IntToFloat(timera()) > (1500f * 0.2f))
			{
				if (!func_54(uParam0->f_4, 2))
				{
					unk_0x0F8EAEEC97DDBCB3(-1, "TextHit", "WastedSounds", 1);
					func_52(&(uParam0->f_4), 2);
				}
				func_31(uParam2, uParam1, iParam3, sParam4, iParam5, ((iParam6 - 4 & iParam6) - 2 & iParam6) | 16, 7, 1, 1097859072, 0);
			}
			break;
		
		case 2:
			if (func_31(uParam2, uParam1, iParam3, sParam4, iParam5, (((iParam6 - 8 & iParam6) - 4 & iParam6) - 2 & iParam6), 7, 1, 1097859072, 1))
			{
				func_13(0, 1);
				func_11(0, 1);
				func_20();
				if (*iParam5)
				{
					unk_0x9758ACDBBF1A37B0(1);
				}
				else if (!uParam0->f_5)
				{
					func_2(0);
				}
				unk_0x05CFB4D665C2A88D(0);
				unk_0xF84B1ACDA9DC2C16(0);
				*uParam0 = 3;
			}
			break;
		
		case 3:
			if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
			{
				unk_0x476CFECD9A50C6EC(1);
				func_13(0, 1);
				func_11(0, 1);
				unk_0x7CED302277C0F3D3("DEATH_SCENE");
				unk_0x05CFB4D665C2A88D(0);
				return 1;
			}
			break;
		
		case 4:
			unk_0x05CFB4D665C2A88D(0);
			return 1;
			break;
	}
	return 0;
}

int func_31(var uParam0, var uParam1, int iParam2, char* sParam3, var uParam4, int iParam5, int iParam6, bool bParam7, float fParam8, bool bParam9)
{
	switch (*uParam1)
	{
		case 0:
			if (!unk_0xBB5E373390A5F824() || unk_0x75A50A9E5219C397())
			{
				unk_0x7EDEAEAED85BEE4F(2500);
				unk_0x818D1850BE9E44A9();
			}
			if (bParam9)
			{
				unk_0x05CFB4D665C2A88D(1);
			}
			unk_0xCBDC8BC7A589C76E(0.2f);
			if (func_51(iParam5, 4))
			{
				if (unk_0x3C05A6D663EA1B6A("generic_failed", 0, -1))
				{
					*uParam1 = 1;
				}
			}
			else
			{
				*uParam1 = 1;
			}
			break;
		
		case 1:
			unk_0xBB698266C5FDF0A7(*uParam0, "SHOW_CENTERED_MP_MESSAGE_LARGE");
			unk_0x713FEBE56D2BD403("STRING");
			unk_0x75D3F9044123D4F9(6);
			unk_0xFA6BEE2B1507FF1E(iParam2);
			unk_0x36F3AA9FFAAF8606();
			func_50(sParam3);
			unk_0x4D9DA18AB3C2A466(100);
			unk_0x295B86DE57A0721D(true);
			unk_0x614EE52A69097A4C();
			if (func_51(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					unk_0xBB698266C5FDF0A7(*uParam0, "TRANSITION_UP");
					unk_0x8DAB5B12D7B9AD29(uParam1->f_134);
					unk_0x818901B332D5541D();
					uParam1->f_136 = 1;
				}
			}
			if (!func_51(iParam5, 1))
			{
				unk_0x6241DAE4CB0BE8A6(0);
			}
			func_49(&(uParam1->f_10), 0, 1, 1, 1);
			func_48(&(uParam1->f_10), "IB_RETRY", 2, 201, 1, 1, 0);
			func_48(&(uParam1->f_10), "FE_HLP16", 2, 202, 1, 1, 0);
			if (func_51(iParam5, 4))
			{
				unk_0x0F8EAEEC97DDBCB3(-1, "ScreenFlash", "MissionFailedSounds", 1);
			}
			if (func_51(iParam5, 8))
			{
				switch (func_14())
				{
					case 0:
						unk_0x0B1F8038F56C12B7("MinigameEndMichael", 500, 0);
						break;
					
					case 1:
						unk_0x0B1F8038F56C12B7("MinigameEndFranklin", 500, 0);
						break;
					
					case 2:
						unk_0x0B1F8038F56C12B7("MinigameEndTrevor", 500, 0);
						break;
					}
			}
			if (!func_47(&(uParam1->f_1)))
			{
				func_46(&(uParam1->f_1));
			}
			if (func_51(iParam5, 2))
			{
				if (!func_47(&(uParam1->f_4)))
				{
					func_46(&(uParam1->f_4));
				}
			}
			*uParam1 = 2;
			break;
		
		case 2:
			unk_0x58355301CBA19400();
			if (func_51(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					unk_0xBB698266C5FDF0A7(*uParam0, "TRANSITION_UP");
					unk_0x8DAB5B12D7B9AD29(uParam1->f_134);
					unk_0x818901B332D5541D();
					uParam1->f_136 = 1;
				}
			}
			unk_0x5C58D0ADA22491FA(iParam6);
			func_44(uParam0, 0, 0);
			if (!func_51(iParam5, 16) && (func_42(&(uParam1->f_1)) >= uParam1->f_135 || unk_0xBB5E373390A5F824()))
			{
				func_36(&(uParam1->f_10), 1128792064, iParam6, bParam7, 1, 1065353216);
				unk_0x0817B4F2C156A62D();
				if (unk_0x1771F6BAF60B44FA(2, 201))
				{
					uParam1->f_138 = 1;
					unk_0x0F8EAEEC97DDBCB3(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_51(iParam5, 1))
					{
						unk_0xDBF747FF76D31C20(0);
					}
					func_35(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
				else if (unk_0x1771F6BAF60B44FA(2, 202))
				{
					uParam1->f_138 = 0;
					unk_0x0F8EAEEC97DDBCB3(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_51(iParam5, 1))
					{
						unk_0xDBF747FF76D31C20(0);
					}
					func_35(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			if (func_51(iParam5, 2))
			{
				if (func_42(&(uParam1->f_4)) >= fParam8)
				{
					uParam1->f_138 = 0;
					unk_0x0F8EAEEC97DDBCB3(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_51(iParam5, 1))
					{
						unk_0xDBF747FF76D31C20(0);
					}
					func_35(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			break;
		
		case 3:
			func_44(uParam0, 0, 0);
			unk_0xCBDC8BC7A589C76E(1f);
			if (uParam1->f_138 || !((unk_0xCE3CFF625BEBAA04("stunt_plane_races", unk_0xD178EF744F20B712()) || unk_0xCE3CFF625BEBAA04("pilot_school", unk_0xD178EF744F20B712())) || (unk_0xCE3CFF625BEBAA04("bj", unk_0xD178EF744F20B712()) && unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))))
			{
				unk_0xACCDA78123DB57B0(2500);
			}
			if (func_51(iParam5, 64) && uParam1->f_138)
			{
				unk_0x7EDEAEAED85BEE4F(500);
			}
			func_32(&(uParam1->f_4));
			if (bParam9)
			{
				unk_0x05CFB4D665C2A88D(0);
			}
			*uParam1 = 4;
			break;
		
		case 4:
			if (func_42(&(uParam1->f_4)) <= 0.1f)
			{
				func_44(uParam0, 0, 0);
			}
			else
			{
				*uParam4 = uParam1->f_138;
				return 1;
			}
			break;
	}
	return 0;
}

void func_32(int iParam0)
{
	func_33(iParam0, 0f);
}

void func_33(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_34(unk_0x0E4018692D92041D(*iParam0, 4)) - fParam1);
	unk_0x8950ED5730F62EE8(iParam0, 1);
	unk_0xCE689A8E8C42ED78(iParam0, 2);
	iParam0->f_2 = 0f;
}

float func_34(bool bParam0)
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

void func_35(var uParam0)
{
	if (*uParam0 != 0)
	{
		unk_0x83A1D480DB0B52CC(uParam0);
		*uParam0 = 0;
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
}

void func_36(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	char* sVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	
	if (((unk_0x75A50A9E5219C397() || unk_0xD33DAC8D0D70A78C()) || unk_0xBB5E373390A5F824()) || unk_0x90346DACE0A79A81())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_41(uParam0))
	{
		return;
	}
	unk_0x58355301CBA19400();
	unk_0x5C58D0ADA22491FA(iParam2);
	if (!func_51(uParam0->f_1, 256) || (func_51(uParam0->f_1, 8192) && unk_0xEABBA3F8727C0FE7(2)))
	{
		unk_0xBB698266C5FDF0A7(*uParam0, "SET_CLEAR_SPACE");
		unk_0x8DAB5B12D7B9AD29(fParam1);
		unk_0x818901B332D5541D();
		unk_0xBB698266C5FDF0A7(*uParam0, "SET_MAX_WIDTH");
		unk_0x8DAB5B12D7B9AD29(fParam5);
		unk_0x818901B332D5541D();
		unk_0xBB698266C5FDF0A7(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x818901B332D5541D();
		if (unk_0x4CE1DD5CFC1F941E())
		{
			unk_0xBB698266C5FDF0A7(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			unk_0x295B86DE57A0721D(func_51(uParam0->f_1, 4096));
			unk_0x818901B332D5541D();
		}
		iVar5 = 0;
		iVar6 = 0;
		while (iVar6 < uParam0->f_123)
		{
			switch (uParam0->f_2[iVar6 /*15*/].f_2)
			{
				case 0:
					bVar4 = true;
					break;
				
				case 1:
					bVar4 = unk_0x5D79F3D06EB318A0(2);
					break;
				
				case 2:
					bVar4 = !unk_0x5D79F3D06EB318A0(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (unk_0xBB698266C5FDF0A7(*uParam0, "SET_DATA_SLOT"))
				{
					unk_0x4D9DA18AB3C2A466(iVar5);
					iVar5++;
					iVar7 = 0;
					while (iVar7 < uParam0->f_2[iVar6 /*15*/].f_14)
					{
						iVar0 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/];
						iVar1 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/].f_1;
						bVar2 = unk_0x0E4018692D92041D(uParam0->f_2[iVar6 /*15*/].f_13, iVar7);
						if (!unk_0x0E4018692D92041D(uParam0->f_2[iVar6 /*15*/].f_12, iVar7))
						{
							sVar3 = unk_0x4464D5595CEED843(iVar0, iVar1, bVar2);
						}
						else
						{
							sVar3 = unk_0xF745CA12DC8836EB(iVar0, iVar1, bVar2);
						}
						if (!unk_0x786AF4A44E1B5B4B(sVar3))
						{
							func_40(sVar3);
						}
						iVar7++;
					}
					if (!unk_0x786AF4A44E1B5B4B(uParam0->f_2[iVar6 /*15*/]))
					{
						func_50(uParam0->f_2[iVar6 /*15*/]);
					}
					if (unk_0x4CE1DD5CFC1F941E())
					{
						if (func_51(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								unk_0x295B86DE57A0721D(true);
								unk_0x4D9DA18AB3C2A466(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								unk_0x295B86DE57A0721D(false);
								unk_0x4D9DA18AB3C2A466(-1);
							}
						}
					}
					unk_0x818901B332D5541D();
				}
			}
			iVar6++;
		}
		fVar8 = func_39(bParam4, func_39(func_51(uParam0->f_1, 32), 1f, 0f), -1f);
		unk_0xBB698266C5FDF0A7(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x8DAB5B12D7B9AD29(fVar8);
		unk_0x818901B332D5541D();
		unk_0xBB698266C5FDF0A7(*uParam0, "SET_BACKGROUND_COLOUR");
		unk_0x8DAB5B12D7B9AD29(0f);
		unk_0x8DAB5B12D7B9AD29(0f);
		unk_0x8DAB5B12D7B9AD29(0f);
		unk_0x8DAB5B12D7B9AD29(80f);
		unk_0x818901B332D5541D();
		func_38(&(uParam0->f_1), 256);
		func_37(&(uParam0->f_1), 128);
	}
	unk_0xFF524AE40FB6301A(*uParam0, 255, 255, 255, 0, 0);
}

void func_37(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_38(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_39(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_40(char* sParam0)
{
	unk_0x3EFC6497702202D6(sParam0);
}

int func_41(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (unk_0x11AE7F6A404414C9(*uParam0))
		{
			func_38(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

float func_42(var uParam0)
{
	if (func_47(uParam0))
	{
		if (func_43(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_34(unk_0x0E4018692D92041D(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_43(var uParam0)
{
	return unk_0x0E4018692D92041D(*uParam0, 2);
}

int func_44(var uParam0, bool bParam1, bool bParam2)
{
	if (!func_47(&(uParam0->f_2)))
	{
		func_32(&(uParam0->f_2));
	}
	unk_0x581AE7724ACAD410(14);
	if (!bParam2)
	{
		unk_0xFF524AE40FB6301A(*uParam0, 255, 255, 255, 255, 0);
	}
	else if (bParam2)
	{
		unk_0xFF524AE40FB6301A(*uParam0, 255, 255, 255, 255, 0);
	}
	if (bParam1)
	{
		if (unk_0xF1CDE9FD207C4CD8(2, 201))
		{
			return 0;
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_42(&(uParam0->f_2)) * 1000f) > to_float(uParam0->f_1)
	{
		func_45(&(uParam0->f_2));
		return 0;
	}
	return 1;
}

void func_45(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_46(int iParam0)
{
	if (!func_47(iParam0))
	{
		func_32(iParam0);
	}
}

bool func_47(var uParam0)
{
	return unk_0x0E4018692D92041D(*uParam0, 1);
}

int func_48(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (iParam5 == 1)
	{
		iVar0 = 1;
	}
	iVar1 = uParam0->f_123;
	if (iVar1 < 8)
	{
		uParam0->f_2[iVar1 /*15*/] = sParam1;
		uParam0->f_2[iVar1 /*15*/].f_1 = iVar0;
		uParam0->f_2[iVar1 /*15*/].f_2 = iParam6;
		uParam0->f_2[iVar1 /*15*/].f_12 = 0;
		uParam0->f_2[iVar1 /*15*/].f_13 = 0;
		uParam0->f_2[iVar1 /*15*/].f_14 = 0;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		if (iParam4 == 1)
		{
			unk_0x8950ED5730F62EE8(&(uParam0->f_2[iVar1 /*15*/].f_13), 0);
		}
		uParam0->f_2[iVar1 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_49(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0x9E4935AAC82732AB("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_38(&(uParam0->f_1), 32);
	}
	if (unk_0x11AE7F6A404414C9(*uParam0))
	{
		func_38(&(uParam0->f_1), 1);
		if (bParam2)
		{
			unk_0x294D14EE061A66FD(*uParam0, 1);
		}
	}
	if (unk_0x4CE1DD5CFC1F941E())
	{
		if (bParam3)
		{
			func_38(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_38(&(uParam0->f_1), 8192);
	}
}

void func_50(char* sParam0)
{
	unk_0x713FEBE56D2BD403(sParam0);
	unk_0x36F3AA9FFAAF8606();
}

bool func_51(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_52(var uParam0, int iParam1)
{
	func_53(uParam0, iParam1);
}

void func_53(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_54(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_55()
{
	if (!unk_0x0E4018692D92041D(iLocal_48, 0) && !unk_0x0E4018692D92041D(iLocal_48, 1))
	{
		settimera(0);
		func_13(1, 0);
	}
	if (!unk_0x286C823E0969F22A())
	{
		unk_0xD362430CD61A9B08();
	}
	unk_0x3FD9339AA95E323F(2, 199, 1);
	unk_0x3FD9339AA95E323F(0, 59, 1);
	unk_0x3FD9339AA95E323F(0, 60, 1);
	unk_0x3FD9339AA95E323F(0, 37, 1);
	unk_0x3FD9339AA95E323F(0, 25, 1);
	unk_0x51B32CE3A24FE983();
	if (IntToFloat(timera()) > (1500f * 0.2f))
	{
		if (!unk_0x0E4018692D92041D(iLocal_48, 1))
		{
			func_11(1, 0);
			settimerb(0);
		}
		else if (IntToFloat(timerb()) > (1500f * 0.075f) || unk_0xBB5E373390A5F824())
		{
			if (!unk_0xBB5E373390A5F824())
			{
				if (!unk_0x75A50A9E5219C397())
				{
					unk_0x7EDEAEAED85BEE4F(1500);
				}
			}
			else if (iLocal_49 == 0)
			{
				iLocal_49 = unk_0xE3903F59E2F22150() + 1000;
				if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
				{
					unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), false, 0);
				}
				func_12(0, 2, 1);
				func_21(1, 1, 1, 0, 0, 0);
				func_3(1);
				unk_0x64B7F9F8020D2EBC(0);
				unk_0x9B49C1EA66E0B669(0);
				unk_0xEDF90B96BED57BCE(1);
				unk_0xD362430CD61A9B08();
				if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
				{
					unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), false, 0);
				}
				func_13(0, 0);
				func_56(0);
			}
			else if (unk_0xE3903F59E2F22150() < iLocal_49)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_56(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!unk_0x0E4018692D92041D(iLocal_48, 3))
			{
				unk_0xD5CD4268EDE6F40E(1);
				unk_0x8950ED5730F62EE8(&iLocal_48, 3);
			}
		}
		else if (unk_0x0E4018692D92041D(iLocal_48, 3))
		{
			unk_0xD5CD4268EDE6F40E(0);
			unk_0xCE689A8E8C42ED78(&iLocal_48, 3);
		}
	}
}

void func_57(var uParam0, float fParam1, float fParam2)
{
	if (func_47(&(uParam0->f_1)))
	{
		func_45(&(uParam0->f_1));
	}
	if (func_47(&(uParam0->f_4)))
	{
		func_45(&(uParam0->f_4));
	}
	func_35(&(uParam0->f_10));
	uParam0->f_134 = fParam1;
	uParam0->f_135 = fParam2;
	uParam0->f_137 = 1;
	uParam0->f_136 = 0;
	*uParam0 = 0;
}

void func_58(int iParam0)
{
	if (!func_47(iParam0))
	{
		func_46(iParam0);
	}
	else
	{
		func_32(iParam0);
	}
}

void func_59(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = iParam1;
	unk_0x3C05A6D663EA1B6A("OFFMISSION_WASTED", 0, -1);
}

var func_60()
{
	return unk_0x199B24FF79A52CCF("MP_BIG_MESSAGE_FREEMODE");
}

void func_61()
{
	if (!iLocal_80)
	{
		unk_0x37C9B4B0237ED18F("COUNTRYSIDE_ALTRUIST_CULT_01", 0);
		Global_106565.f_24989.f_5 = 1000;
		unk_0x53F48527D958ED8D(64);
		Global_106565.f_20558.f_472 = 54;
		uLocal_259 = unk_0x199B24FF79A52CCF("MIDSIZED_MESSAGE");
		func_96(1);
		while (!unk_0x11AE7F6A404414C9(uLocal_259))
		{
			wait(0);
		}
		unk_0xBB698266C5FDF0A7(uLocal_259, "SHOW_SHARD_MIDSIZED_MESSAGE");
		func_50("CULT_PASS");
		unk_0x614EE52A69097A4C();
		while (!func_95())
		{
			wait(0);
		}
		func_94();
		settimera(0);
		unk_0x0F8EAEEC97DDBCB3(-1, "PROPERTY_PURCHASE", "HUD_AWARDS", 1);
		iLocal_80 = 1;
	}
	unk_0xFF524AE40FB6301A(uLocal_259, 255, 255, 255, 255, 0);
	if (!iLocal_82)
	{
		if (timera() > 9500)
		{
			unk_0xBB698266C5FDF0A7(uLocal_259, "SHARD_ANIM_OUT");
			unk_0x4D9DA18AB3C2A466(1);
			unk_0x8DAB5B12D7B9AD29(0.33f);
			unk_0x818901B332D5541D();
			iLocal_82 = 1;
		}
	}
	if (timera() > 10000)
	{
		if (unk_0x11AE7F6A404414C9(uLocal_259))
		{
			unk_0x83A1D480DB0B52CC(&uLocal_259);
			func_96(0);
		}
		while (unk_0x16E00F066AFFEA0D(func_93(unk_0x95B959F18401C09A()), vLocal_53, 1) < 209f && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
		{
			wait(0);
		}
		func_62(18);
		func_188();
	}
}

void func_62(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_91();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_90())
	{
		func_68(iParam0);
		unk_0xF72C40745AA793F1(0, 0);
		Global_106556 = unk_0xE3903F59E2F22150();
		func_67(30000);
		StringCopy(&cVar0, func_66(Global_106554, 1), 64);
		if (func_65(Global_106554) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_106553, 64);
		}
		unk_0x3976D3CAA943B599(&cVar0, Global_106551, (unk_0xE3903F59E2F22150() - Global_106552), 0);
	}
	else if (unk_0x0E4018692D92041D(Global_106561, 0) && Global_106565.f_24989.f_2 < 3)
	{
		unk_0xCE689A8E8C42ED78(&Global_106561, 0);
	}
	func_64(&Global_25824);
	Global_106555 = 0;
	func_63(-1);
}

void func_63(int iParam0)
{
	Global_106554 = iParam0;
}

void func_64(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_36387)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_36386 = 0;
	Global_36388 = 0;
	Global_36425 = 15;
	Global_56491 = 0;
	Global_56492 = 0;
}

int func_65(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

char* func_66(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_67(int iParam0)
{
	Global_36976 = (unk_0xE3903F59E2F22150() + iParam0);
}

void func_68(int iParam0)
{
	func_69(iParam0, 0, func_89(iParam0));
}

void func_69(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_88();
	func_79(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_78(iParam0, &uVar0);
	Var1 = { func_70(&uVar0) };
}

struct<16> func_70(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_77(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_76(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_75(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_74(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_73(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_71(*uParam0), 64);
	return Var0;
}

int func_71(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_72(unk_0x0E4018692D92041D(iParam0, 31), -1, 1)) + 2011;
}

int func_72(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_73(var uParam0)
{
	return uParam0 & 15;
}

int func_74(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_75(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_76(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_77(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

void func_78(int iParam0, var uParam1)
{
	Global_106565.f_24989.f_43[iParam0] = *uParam1;
}

void func_79(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_71(*uParam0);
	iVar1 = func_73(*uParam0);
	iVar2 = func_74(*uParam0);
	iVar3 = func_77(*uParam0);
	iVar4 = func_76(*uParam0);
	iVar5 = func_75(*uParam0);
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
	iVar6 = func_87(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_87(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_80(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_80(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_86(uParam0, iParam1);
	func_85(uParam0, iParam2);
	func_84(uParam0, iParam3);
	func_83(uParam0, iParam5);
	func_82(uParam0, iParam4);
	func_81(uParam0, iParam6);
}

void func_81(var uParam0, int iParam1)
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

void func_82(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_73(*uParam0);
	iVar1 = func_71(*uParam0);
	if (iParam1 < 1 || iParam1 > func_87(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_83(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_84(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_85(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_86(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_87(int iParam0, int iParam1)
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

var func_88()
{
	var uVar0;
	
	func_86(&uVar0, unk_0xE6A7CE90720B9037());
	func_85(&uVar0, unk_0x7EA67BD818402745());
	func_84(&uVar0, unk_0x13348E86D5B8A052());
	func_82(&uVar0, unk_0x020A28FAE1C09250());
	func_83(&uVar0, unk_0x2C02CAA9C4127339());
	func_81(&uVar0, unk_0xED3F08F762AAA55A());
	return uVar0;
}

int func_89(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

int func_90()
{
	if ((Global_106554 == func_91() && unk_0x40AC0B9EFCB6A65B()) && Global_106555)
	{
		return 1;
	}
	return 0;
}

int func_91()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0xD178EF744F20B712(), 64);
	uVar1 = func_92(Var0);
	return uVar1;
}

int func_92(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x36163153849DFDA1(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

Vector3 func_93(int iParam0)
{
	return unk_0xFBB1F99A825CAB09(unk_0x378BD4B3881338C2(iParam0), 0);
}

void func_94()
{
	Global_26000 = 0;
	Global_26001 = 0;
	Global_26003 = 0;
	Global_26004 = 0;
	Global_26005 = 0;
}

int func_95()
{
	return 1;
}

void func_96(int iParam0)
{
	Global_71850 = iParam0;
	Global_71851 = iParam0;
}

void func_97(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_98(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_107(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_99(sParam2, iParam3, 0);
}

int func_99(char* sParam0, int iParam1, bool bParam2)
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
					func_106();
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
		if (func_105(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_104();
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
				func_103();
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
				if (func_102())
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
			if (func_5())
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
			func_101();
			Global_15876 = bParam2;
		}
		Global_15868 = iParam1;
		StringCopy(&Global_15485, sParam0, 24);
		Global_14732 = 0;
		func_100();
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
		func_106();
	}
	return 0;
}

void func_100()
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

void func_101()
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

int func_102()
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

void func_103()
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

void func_104()
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

bool func_105(int iParam0, int iParam1)
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

void func_106()
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

void func_107(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

int func_108()
{
	if (Global_15866 != 0 || unk_0x12BF789190D82474())
	{
		return 1;
	}
	return 0;
}

void func_109()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	switch (iLocal_94)
	{
		case 0:
			unk_0x10D261962C02BE0E("THUNDER", 20f);
			if (!unk_0x15DFB209D94E0277())
			{
				unk_0x3427206E004F448F("ac_ig_3_p3_b", 8);
			}
			unk_0xB815670C37E03CDE(joaat("a_m_o_acult_02"));
			unk_0xB815670C37E03CDE(joaat("a_m_y_acult_02"));
			unk_0xB815670C37E03CDE(-2022916910);
			unk_0xB815670C37E03CDE(-1322183878);
			unk_0xB815670C37E03CDE(joaat("prop_box_wood05a"));
			unk_0xB815670C37E03CDE(joaat("prop_security_case_01"));
			while ((((((!func_136() || !unk_0x5D98D654CDC2165A(joaat("a_m_o_acult_02"))) || !unk_0x5D98D654CDC2165A(joaat("a_m_y_acult_02"))) || !unk_0x5D98D654CDC2165A(-2022916910)) || !unk_0x5D98D654CDC2165A(-1322183878)) || !unk_0x5D98D654CDC2165A(joaat("prop_box_wood05a"))) || !unk_0x5D98D654CDC2165A(joaat("prop_security_case_01")))
			{
				wait(0);
			}
			iLocal_436 = func_129(unk_0x33CD235DF1E6A94E(), joaat("weapon_assaultrifle"), 1, 0, 0, 0, 0, 0, 0);
			if (unk_0x765F6FEEFF39224F(iLocal_436))
			{
				unk_0xEF6624A3AFF02A02(iLocal_436, "Trevors_weapon", 0, 0, 0);
			}
			unk_0xEF6624A3AFF02A02(0, "Rifle_Mag1^1", 3, unk_0x70418C66CB4C3F79(joaat("component_assaultrifle_clip_01")), 0);
			if (func_136() && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
			{
				unk_0xEF6624A3AFF02A02(unk_0x33CD235DF1E6A94E(), "TREVOR", 0, 0, 0);
				unk_0xEF6624A3AFF02A02(iLocal_98[11], "Cult_Master", 2, joaat("a_m_o_acult_02"), 0);
				unk_0xEF6624A3AFF02A02(iLocal_98[12], "Rear_Cult", 2, joaat("a_m_o_acult_02"), 0);
				unk_0xEF6624A3AFF02A02(iLocal_98[13], "Left_Old_Cult", 2, joaat("a_m_o_acult_02"), 0);
				unk_0xEF6624A3AFF02A02(iLocal_98[14], "Carbine_Cult", 2, joaat("a_m_y_acult_02"), 0);
				unk_0xEF6624A3AFF02A02(iLocal_98[15], "Shotgun_Cult", 2, joaat("a_m_y_acult_02"), 0);
				unk_0x2EC4FFC8740228D3(0);
			}
			wait(0);
			if (!bLocal_76 && Global_106565.f_24989.f_5 != 1000)
			{
				func_128();
			}
			if (unk_0x765F6FEEFF39224F(iLocal_98[0]))
			{
				unk_0x4B8B69DAE5BAC592(&(iLocal_98[0]));
			}
			if (unk_0x765F6FEEFF39224F(iLocal_98[1]))
			{
				unk_0x4B8B69DAE5BAC592(&(iLocal_98[1]));
			}
			if (unk_0x117DAF3BF7232886(iLocal_106))
			{
				unk_0x189377BFBDC9127F(iLocal_106, false);
			}
			if (unk_0x765F6FEEFF39224F(iLocal_101))
			{
				unk_0xEC26F4BFC9942A0C(&iLocal_101);
			}
			if (unk_0x765F6FEEFF39224F(iLocal_101))
			{
				unk_0xEC26F4BFC9942A0C(&iLocal_101);
			}
			unk_0x63F0B040CE6EDF0F(false, 0, 3000, 1, 0, 0);
			if (unk_0xE38E3CF1625A4145(iLocal_104))
			{
				unk_0x1ABDB383C83A336A(&iLocal_104);
			}
			func_21(1, 1, 1, 0, 0, 0);
			unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), false, 0);
			unk_0xEDF90B96BED57BCE(1);
			unk_0x35675D19812BDF22(0);
			unk_0xDFF589A2149528CE(0);
			if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
			{
				unk_0x098757942E2F9D44(unk_0x33CD235DF1E6A94E(), 1);
			}
			unk_0xCE04CE961AF41AB9(vLocal_53, 100f, 1, 0, 0, false);
			unk_0x0335D8135051EA56(vLocal_53 - Vector(100f, 60f, 80f), vLocal_53 + Vector(100f, 60f, 80f), 0, 1, 1, 1);
			unk_0x4B06B5746CBEC99F(0f);
			unk_0xA53C1C92EE35EC0E(3, 0);
			unk_0xA53C1C92EE35EC0E(5, 0);
			iLocal_108 = unk_0xD911392442636B60(-1173.509f, 4924.365f, 222.21f, 277.2293f, 2, 0, 2, 1);
			unk_0xB815670C37E03CDE(joaat("a_m_o_acult_01"));
			while (!unk_0x5D98D654CDC2165A(joaat("a_m_o_acult_01")))
			{
				wait(0);
			}
			iLocal_94 = 6;
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			break;
		
		case 6:
			if (unk_0x2442598EA366437F(0))
			{
				if (unk_0x3CA08F647CEAD042("CULT_MASTER", 0))
				{
					if (!unk_0x765F6FEEFF39224F(iLocal_98[11]))
					{
						iLocal_98[11] = unk_0x22B02EC53152632C(unk_0x0DBE02F22EF4C0B4("CULT_MASTER", 0));
					}
				}
				if (unk_0x3CA08F647CEAD042("REAR_CULT", 0))
				{
					if (!unk_0x765F6FEEFF39224F(iLocal_98[12]))
					{
						iLocal_98[12] = unk_0x22B02EC53152632C(unk_0x0DBE02F22EF4C0B4("REAR_CULT", 0));
					}
				}
				if (unk_0x3CA08F647CEAD042("LEFT_OLD_CULT", 0))
				{
					if (!unk_0x765F6FEEFF39224F(iLocal_98[13]))
					{
						iLocal_98[13] = unk_0x22B02EC53152632C(unk_0x0DBE02F22EF4C0B4("LEFT_OLD_CULT", 0));
					}
				}
				if (unk_0x3CA08F647CEAD042("CARBINE_CULT", 0))
				{
					if (!unk_0x765F6FEEFF39224F(iLocal_98[14]))
					{
						iLocal_98[14] = unk_0x22B02EC53152632C(unk_0x0DBE02F22EF4C0B4("CARBINE_CULT", 0));
					}
				}
				if (unk_0x3CA08F647CEAD042("SHOTGUN_CULT", 0))
				{
					if (!unk_0x765F6FEEFF39224F(iLocal_98[15]))
					{
						iLocal_98[15] = unk_0x22B02EC53152632C(unk_0x0DBE02F22EF4C0B4("SHOTGUN_CULT", 0));
					}
				}
				if (unk_0x3CA08F647CEAD042("TREVOR", 0))
				{
					unk_0x098757942E2F9D44(unk_0x33CD235DF1E6A94E(), 0);
					unk_0xBEADAF07D2339505(unk_0x33CD235DF1E6A94E(), -1173.531f, 4924.357f, 222.2101f, 1, 0, 0, 1);
					unk_0x3C990C409B3845DE(unk_0x33CD235DF1E6A94E(), 188.9369f);
					unk_0x7CF15CBDDF414EF0(unk_0x33CD235DF1E6A94E(), -1173.509f, 4924.365f, 222.21f, -1, 0, 0f, 1, 0, iLocal_108, 0);
					unk_0x880B00F3FAE4C022(unk_0x33CD235DF1E6A94E(), 1, 0);
				}
				if (unk_0x3CA08F647CEAD042("Trevors_weapon", 0))
				{
					unk_0x63B8AF155FC68CD7(iLocal_436, unk_0x33CD235DF1E6A94E());
				}
				unk_0xC7E6A5D90DED6E0B(91.3878f);
				unk_0xD6EDA274D82E8678(4.4337f, 1065353216);
				func_21(0, 1, 1, 0, 0, 0);
				unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), true, 0);
				unk_0x35675D19812BDF22(1);
				unk_0xDFF589A2149528CE(1);
				vLocal_51[0 /*3*/] = { -1044.632f, 4918.149f, 211.3315f };
				fLocal_52[0] = 254.8275f;
				vLocal_51[1 /*3*/] = { -1054.92f, 4915.155f, 210.8241f };
				fLocal_52[1] = 270.2025f;
				vLocal_51[2 /*3*/] = { -1051.859f, 4903.902f, 209.6199f };
				fLocal_52[2] = 299.8404f;
				vLocal_51[3 /*3*/] = { -1068.246f, 4899.532f, 213.2755f };
				fLocal_52[3] = 298.4257f;
				vLocal_51[4 /*3*/] = { -1083.322f, 4899.532f, 213.2755f };
				fLocal_52[4] = 283.5311f;
				vLocal_51[5 /*3*/] = { -1084.058f, 4933.805f, 228.2246f };
				fLocal_52[5] = 87.5233f;
				vLocal_51[6 /*3*/] = { -1081.976f, 4937.339f, 232.3275f };
				fLocal_52[6] = 109.6546f;
				vLocal_51[7 /*3*/] = { -1092.075f, 4939.958f, 217.3385f };
				fLocal_52[7] = 210.2433f;
				vLocal_51[8 /*3*/] = { -1101.798f, 4930.33f, 217.3544f };
				fLocal_52[8] = 203.732f;
				vLocal_51[9 /*3*/] = { -1070.675f, 4869.301f, 220.2917f };
				fLocal_52[9] = 39.1109f;
				vLocal_51[10 /*3*/] = { -1115.703f, 4878.439f, 225.8085f };
				fLocal_52[10] = 25.8472f;
				unk_0x9315FCF6CFE2AB41("rghCult", &iLocal_270);
				iVar1 = 0;
				while (iVar1 < iLocal_98)
				{
					if (((iVar1 == 0 || iVar1 == 5) || iVar1 == 6) || iVar1 == 10)
					{
						iLocal_98[iVar1] = unk_0x9BA5CF280376EEA4(26, joaat("a_m_o_acult_01"), vLocal_51[iVar1 /*3*/], fLocal_52[iVar1], 1, 1);
						unk_0xC475906893AEB995(iLocal_98[iVar1], 0);
						unk_0x697EBA5CF1A6AB57(iLocal_98[iVar1], joaat("weapon_assaultrifle"), -1, 1, 1);
						unk_0x34A51926277F67BC(iLocal_98[iVar1], 0);
						unk_0x52F5AAAD4824B17E(iLocal_98[iVar1], 2);
						unk_0x16D56D398FB73BE7(iLocal_98[iVar1], 50f, 20);
						unk_0xDE9FF07CFD5DC172(iLocal_98[iVar1], 5);
						unk_0x5F9955D3E93BCC84(iLocal_98[iVar1], 100f);
						unk_0x18E5E2B41CD6CE17(iLocal_98[iVar1], 100f);
						unk_0x7FC2040EB34E0E31(iLocal_98[iVar1], 150, 0);
						unk_0x41AAD0031D053A00(iLocal_98[iVar1], unk_0x9EC3B269A34A2BEE(40, 60));
						unk_0x277716E9E7CC0692(iLocal_98[iVar1], unk_0x33CD235DF1E6A94E(), 0, 16);
					}
					else if (iVar1 == 2)
					{
						iLocal_98[iVar1] = unk_0x9BA5CF280376EEA4(26, joaat("a_m_o_acult_02"), vLocal_51[iVar1 /*3*/], fLocal_52[iVar1], 1, 1);
						unk_0xC475906893AEB995(iLocal_98[iVar1], 0);
						unk_0x697EBA5CF1A6AB57(iLocal_98[iVar1], joaat("weapon_sawnoffshotgun"), -1, 1, 1);
						unk_0x28F648743D7DE312(iLocal_98[iVar1], 50, 1);
						unk_0x34A51926277F67BC(iLocal_98[iVar1], 2);
						unk_0x52F5AAAD4824B17E(iLocal_98[iVar1], 1);
						unk_0x16D56D398FB73BE7(iLocal_98[iVar1], 50f, 20);
						unk_0xDE9FF07CFD5DC172(iLocal_98[iVar1], 5);
						unk_0x5F9955D3E93BCC84(iLocal_98[iVar1], 100f);
						unk_0x18E5E2B41CD6CE17(iLocal_98[iVar1], 100f);
						unk_0x41AAD0031D053A00(iLocal_98[iVar1], unk_0x9EC3B269A34A2BEE(40, 60));
						unk_0x277716E9E7CC0692(iLocal_98[iVar1], unk_0x33CD235DF1E6A94E(), 0, 16);
					}
					else if (iVar1 > 10 && iVar1 < 20)
					{
						if (((((!unk_0xBC2FC12AD0FBF72E(iLocal_98[iVar1]) && !unk_0xBC2FC12AD0FBF72E(iLocal_98[11])) && !unk_0xBC2FC12AD0FBF72E(iLocal_98[12])) && !unk_0xBC2FC12AD0FBF72E(iLocal_98[13])) && !unk_0xBC2FC12AD0FBF72E(iLocal_98[14])) && !unk_0xBC2FC12AD0FBF72E(iLocal_98[15]))
						{
							unk_0x697EBA5CF1A6AB57(iLocal_98[11], joaat("weapon_pistol"), -1, 1, 1);
							unk_0x697EBA5CF1A6AB57(iLocal_98[12], joaat("weapon_assaultrifle"), -1, 1, 1);
							unk_0x697EBA5CF1A6AB57(iLocal_98[13], joaat("weapon_assaultrifle"), -1, 1, 1);
							unk_0x697EBA5CF1A6AB57(iLocal_98[14], joaat("weapon_carbinerifle"), -1, 1, 1);
							unk_0x697EBA5CF1A6AB57(iLocal_98[15], joaat("weapon_pumpshotgun"), -1, 1, 1);
							unk_0x28F648743D7DE312(iLocal_98[iVar1], 0, 1);
							unk_0x34A51926277F67BC(iLocal_98[iVar1], 3);
							unk_0x52F5AAAD4824B17E(iLocal_98[iVar1], 0);
							unk_0xDE9FF07CFD5DC172(iLocal_98[iVar1], 0);
							unk_0xE53211B793893FFD(iLocal_98[iVar1], 1f, 1f);
							unk_0x99414FB2D30425C1(&uLocal_107);
							unk_0x1E6D9DB41BEDAFB3(0, -1159.33f, 4924.412f, 221.6576f, unk_0x33CD235DF1E6A94E(), 2f, 1, 0.5f, 4f, 1, 0, 0, -957453492, 20000);
							unk_0x4DDF5809B68AA635(0, unk_0x33CD235DF1E6A94E(), 6000, 0);
							unk_0x4DDF5809B68AA635(0, unk_0x33CD235DF1E6A94E(), 4500, 0);
							unk_0x277716E9E7CC0692(0, unk_0x33CD235DF1E6A94E(), 0, 16);
							unk_0xC734F59A13D39AEF(uLocal_107);
							unk_0x13A2D602CD10CBAC(iLocal_98[15], uLocal_107);
							unk_0xA7A57E7757ED035E(&uLocal_107);
							unk_0x99414FB2D30425C1(&uLocal_107);
							unk_0x1E6D9DB41BEDAFB3(0, -1163.279f, 4932.933f, 222.541f, unk_0x33CD235DF1E6A94E(), 1f, 1, 0.5f, 4f, 1, 0, 0, -957453492, 20000);
							unk_0xB37A0BA7D41EA5E1(0, unk_0x33CD235DF1E6A94E(), 5000, 0);
							unk_0x4DDF5809B68AA635(0, unk_0x33CD235DF1E6A94E(), 7500, 0);
							unk_0x4DDF5809B68AA635(0, unk_0x33CD235DF1E6A94E(), 4500, 0);
							unk_0x277716E9E7CC0692(0, unk_0x33CD235DF1E6A94E(), 0, 16);
							unk_0xC734F59A13D39AEF(uLocal_107);
							unk_0x13A2D602CD10CBAC(iLocal_98[14], uLocal_107);
							unk_0xA7A57E7757ED035E(&uLocal_107);
							unk_0x99414FB2D30425C1(&uLocal_107);
							unk_0x4DDF5809B68AA635(0, unk_0x33CD235DF1E6A94E(), 2500, 0);
							unk_0xB37A0BA7D41EA5E1(0, unk_0x33CD235DF1E6A94E(), 5000, 0);
							unk_0x1E6D9DB41BEDAFB3(0, -1156.175f, 4926.073f, 221.3447f, unk_0x33CD235DF1E6A94E(), 2f, 1, 0.5f, 4f, 1, 0, 0, -957453492, 20000);
							unk_0x4DDF5809B68AA635(0, unk_0x33CD235DF1E6A94E(), 6500, 0);
							unk_0x4DDF5809B68AA635(0, unk_0x33CD235DF1E6A94E(), 4500, 0);
							unk_0x277716E9E7CC0692(0, unk_0x33CD235DF1E6A94E(), 0, 16);
							unk_0xC734F59A13D39AEF(uLocal_107);
							unk_0x13A2D602CD10CBAC(iLocal_98[13], uLocal_107);
							unk_0xA7A57E7757ED035E(&uLocal_107);
							unk_0x99414FB2D30425C1(&uLocal_107);
							unk_0x4DDF5809B68AA635(0, unk_0x33CD235DF1E6A94E(), 3000, 0);
							unk_0x1E6D9DB41BEDAFB3(0, -1157.962f, 4922.196f, 221.309f, unk_0x33CD235DF1E6A94E(), 2f, 1, 0.5f, 4f, 1, 0, 0, -957453492, 20000);
							unk_0x4DDF5809B68AA635(0, unk_0x33CD235DF1E6A94E(), 5500, 0);
							unk_0x4DDF5809B68AA635(0, unk_0x33CD235DF1E6A94E(), 4500, 0);
							unk_0x277716E9E7CC0692(0, unk_0x33CD235DF1E6A94E(), 0, 16);
							unk_0xC734F59A13D39AEF(uLocal_107);
							unk_0x13A2D602CD10CBAC(iLocal_98[12], uLocal_107);
							unk_0xA7A57E7757ED035E(&uLocal_107);
							unk_0x99414FB2D30425C1(&uLocal_107);
							unk_0x4DDF5809B68AA635(0, unk_0x33CD235DF1E6A94E(), 4500, 0);
							unk_0xB37A0BA7D41EA5E1(0, unk_0x33CD235DF1E6A94E(), 10000, 0);
							unk_0x1E6D9DB41BEDAFB3(0, -1161.475f, 4916.061f, 220.5658f, unk_0x33CD235DF1E6A94E(), 2f, 1, 0.5f, 4f, 1, 0, 0, -957453492, 20000);
							unk_0x4DDF5809B68AA635(0, unk_0x33CD235DF1E6A94E(), 4500, 0);
							unk_0x4DDF5809B68AA635(0, unk_0x33CD235DF1E6A94E(), 4500, 0);
							unk_0x277716E9E7CC0692(0, unk_0x33CD235DF1E6A94E(), 0, 16);
							unk_0xC734F59A13D39AEF(uLocal_107);
							unk_0x13A2D602CD10CBAC(iLocal_98[11], uLocal_107);
							unk_0xA7A57E7757ED035E(&uLocal_107);
							unk_0x897EF720254BBEA3(iLocal_98[iVar1], 1);
							unk_0x41E36A540F8F323F(iLocal_98[iVar1], 156, 1);
						}
					}
					else
					{
						iLocal_98[iVar1] = unk_0x9BA5CF280376EEA4(26, joaat("a_m_o_acult_02"), vLocal_51[iVar1 /*3*/], fLocal_52[iVar1], 1, 1);
						unk_0xC475906893AEB995(iLocal_98[iVar1], 0);
						unk_0x697EBA5CF1A6AB57(iLocal_98[iVar1], joaat("weapon_pistol"), -1, 1, 1);
						unk_0x28F648743D7DE312(iLocal_98[iVar1], 50, 1);
						unk_0x34A51926277F67BC(iLocal_98[iVar1], 2);
						unk_0x52F5AAAD4824B17E(iLocal_98[iVar1], 0);
						unk_0x16D56D398FB73BE7(iLocal_98[iVar1], 50f, 20);
						unk_0x1E0350F1D7702D6A(iLocal_98[iVar1], 1);
						unk_0xDE9FF07CFD5DC172(iLocal_98[iVar1], 5);
						unk_0x5F9955D3E93BCC84(iLocal_98[iVar1], 100f);
						unk_0x18E5E2B41CD6CE17(iLocal_98[iVar1], 100f);
						unk_0x41AAD0031D053A00(iLocal_98[iVar1], unk_0x9EC3B269A34A2BEE(40, 60));
						unk_0x277716E9E7CC0692(iLocal_98[iVar1], unk_0x33CD235DF1E6A94E(), 0, 16);
					}
					unk_0x0648A75D3F60E864(iLocal_98[iVar1], iLocal_270);
					unk_0x3C990C409B3845DE(iLocal_98[iVar1], func_127(unk_0xFBB1F99A825CAB09(iLocal_98[iVar1], 1), func_93(unk_0x95B959F18401C09A())));
					unk_0x4A852F02088ECC9D(iLocal_98[iVar1], 1);
					unk_0x5FEE418CE11E6DDE(iLocal_98[iVar1], 42, true);
					uLocal_105[iVar1] = func_125(iLocal_98[iVar1], 1, 145);
					iVar1++;
				}
				func_97(&uLocal_271, 0, unk_0x33CD235DF1E6A94E(), "TREVOR", 0, 1);
				func_97(&uLocal_271, 3, iLocal_98[11], "ACULTMaster", 0, 1);
				func_97(&uLocal_271, 4, 0, "ACULTGroup", 0, 1);
				unk_0x8950ED5730F62EE8(&iVar0, 1);
				unk_0x8950ED5730F62EE8(&iVar0, 3);
				unk_0x8950ED5730F62EE8(&iVar0, 4);
				if (!bLocal_76)
				{
					uLocal_102[0] = unk_0x3B3AEF3A73FB80C9(joaat("pickup_money_case"), -1074.165f, 4897.468f, 213.2754f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
					uLocal_102[1] = unk_0x3B3AEF3A73FB80C9(joaat("pickup_money_case"), -1094.671f, 4892.789f, 215.0707f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
					uLocal_102[2] = unk_0x3B3AEF3A73FB80C9(joaat("pickup_money_case"), -1113.95f, 4904.385f, 217.6001f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
					uLocal_102[3] = unk_0x3B3AEF3A73FB80C9(joaat("pickup_money_case"), -1145.273f, 4907.894f, 219.9734f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
				}
				uLocal_102[0] = uLocal_102[0];
				uLocal_102[1] = uLocal_102[1];
				uLocal_102[2] = uLocal_102[2];
				uLocal_102[3] = uLocal_102[3];
				iLocal_103[0] = unk_0x7CA67831169E8AA6(-1322183878, -1158.69f, 4915.709f, 220.2644f, 1, 1, 0);
				iLocal_103[1] = unk_0x7CA67831169E8AA6(-2022916910, -1156.246f, 4918.6f, 220.5432f, 1, 1, 0);
				iLocal_103[2] = unk_0x7CA67831169E8AA6(-1322183878, -1145.802f, 4931.816f, 219.9683f, 1, 1, 0);
				iLocal_103[3] = unk_0x7CA67831169E8AA6(-1322183878, -1133.369f, 4919.067f, 218.8385f, 1, 1, 0);
				iLocal_103[4] = unk_0x7CA67831169E8AA6(joaat("prop_box_wood05a"), -1132.025f, 4921.483f, 218.8244f, 1, 1, 0);
				iLocal_103[5] = unk_0x7CA67831169E8AA6(-2022916910, -1112.66f, 4929.268f, 217.1752f, 1, 1, 0);
				unk_0x1C8705F667F673EA(iLocal_103[0], 12.24288f, -0.014582f, 27.06056f, 2, 1);
				unk_0x1C8705F667F673EA(iLocal_103[1], 7.733739f, 9.432779f, -2.865618f, 2, 1);
				unk_0x1C8705F667F673EA(iLocal_103[2], 3.735082f, 4.551246f, 86.30917f, 2, 1);
				unk_0x1C8705F667F673EA(iLocal_103[3], 0.240341f, 1.095195f, 36.59031f, 2, 1);
				unk_0x1C8705F667F673EA(iLocal_103[4], 7.6772f, 1.232743f, 93.27483f, 2, 1);
				unk_0x1C8705F667F673EA(iLocal_103[5], 3.367802f, -5.14387f, 97.30567f, 2, 1);
				if (func_124() < 50)
				{
					unk_0xA126FE43AE9ADD79(unk_0x95B959F18401C09A(), 0.5f, 1);
				}
				if (func_123() != 18)
				{
					func_121(18);
				}
				if (!func_90())
				{
					func_110(0);
				}
				func_1(1);
				bLocal_76 = false;
				iLocal_50 = 4;
			}
			break;
	}
}

int func_110(int iParam0)
{
	if (func_115())
	{
		Global_106555 = 1;
		Global_106552 = unk_0xE3903F59E2F22150();
		if (func_114(Global_106554))
		{
			func_111(0);
		}
		unk_0xF72C40745AA793F1(1, "RE_TITLE");
		if (iParam0 && func_114(Global_106554))
		{
			unk_0x0B1FD891620F7745();
		}
		return 1;
	}
	return 0;
}

void func_111(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_106565.f_24989.f_2 < 3)
			{
				if (!unk_0x6B59932722922B69())
				{
					func_112(func_113(iParam0), -1);
					Global_106565.f_24989.f_2++;
					unk_0x8950ED5730F62EE8(&Global_106561, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x0E4018692D92041D(Global_106561, 1))
			{
				if (!unk_0x6B59932722922B69())
				{
					func_112(func_113(iParam0), -1);
					Global_106565.f_24989.f_3++;
					unk_0x8950ED5730F62EE8(&Global_106561, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x0E4018692D92041D(Global_106561, 2))
			{
				if (!unk_0x6B59932722922B69())
				{
					func_112(func_113(iParam0), -1);
					Global_106565.f_24989.f_4++;
					unk_0x8950ED5730F62EE8(&Global_106561, 2);
				}
			}
			break;
	}
}

void func_112(char* sParam0, int iParam1)
{
	unk_0x37621D6689F9E3C3(sParam0);
	unk_0x092150016C06C431(0, 0, 1, iParam1);
}

char* func_113(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_114(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

int func_115()
{
	switch (func_116(&Global_25824, 0, 5, 0, unk_0x8C40DC84EDF05997()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_116(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_91190.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_120(0))
		{
			return 0;
		}
		Global_36389++;
		*uParam0 = Global_36389;
		unk_0xF23201C524E43F1C(unk_0x3EE1295CEFBEFED4(), 0);
		Global_17272.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x3D732B99F6301C4D(8);
		}
		Global_36425 = iParam2;
		Global_36387 = *uParam0;
		Global_36388 = iParam4;
		Global_36386 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_36386 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_36386)
			{
				if (Global_36392[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_36387 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_118(iParam2))
		{
			return 0;
		}
		if (Global_36386 == 8)
		{
			return 0;
		}
		Global_36389++;
		*uParam0 = Global_36389;
		Global_36392[Global_36386 /*4*/] = Global_36389;
		Global_36392[Global_36386 /*4*/].f_1 = iParam1;
		Global_36392[Global_36386 /*4*/].f_2 = iParam2;
		Global_36392[Global_36386 /*4*/].f_3 = 0;
		Global_36386++;
		if (iParam4 != 0)
		{
			func_117(uParam0, iParam4);
		}
	}
	return 2;
}

void func_117(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_36386 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_36386)
	{
		if (Global_36392[iVar0 /*4*/] == *uParam0)
		{
			Global_36392[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_118(int iParam0)
{
	return func_119(iParam0, Global_36425);
}

int func_119(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_120(int iParam0)
{
	if (Global_36425 == 15)
	{
		return 0;
	}
	if (func_118(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_121(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_91();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_63(iParam0);
	unk_0x88B04627B159D024(0);
	unk_0xDCCE32451D4E5521(1);
	Global_106551 = 0;
	func_122();
}

void func_122()
{
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
		{
			unk_0x8C4EA5F6857553AE(unk_0x541D5C57194E73C4(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0)), 1);
		}
		unk_0x5FEE418CE11E6DDE(unk_0x33CD235DF1E6A94E(), 32, false);
	}
}

int func_123()
{
	return Global_106554;
}

int func_124()
{
	var uVar0;
	
	switch (func_14())
	{
		case 0:
			unk_0x75D54ED6C1AD1642(joaat("sp0_special_ability"), &uVar0, -1);
			break;
		
		case 1:
			unk_0x75D54ED6C1AD1642(joaat("sp1_special_ability"), &uVar0, -1);
			break;
		
		case 2:
			unk_0x75D54ED6C1AD1642(joaat("sp2_special_ability"), &uVar0, -1);
			break;
	}
	return uVar0;
}

int func_125(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_126(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xE38E3CF1625A4145(iVar0)) && unk_0xEAF855A7DC28BC8D(&(Global_106565.f_28044[iParam2 /*29*/].f_3)))
	{
		unk_0x1C95CD840303FC37(iVar0, &(Global_106565.f_28044[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_126(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0x765F6FEEFF39224F(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x8848A15CBDADDC60(iParam0);
	if (unk_0x680558231C80291D(iParam0))
	{
		unk_0xCE5C49921A521962(iVar0, func_39(unk_0xB331FCEB94EB05C8(), 1f, 1f));
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
		unk_0xCE5C49921A521962(iVar0, func_39(unk_0xB331FCEB94EB05C8(), 0.7f, 0.7f));
		unk_0xBF11C8A43770C598(iVar0, bParam1);
	}
	else if (unk_0xA3A29DB165882310(iParam0))
	{
		unk_0xCE5C49921A521962(iVar0, func_39(unk_0xB331FCEB94EB05C8(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_127(struct<2> Param0, float fParam1, struct<2> Param2, var uParam3)
{
	return unk_0x174C48E9E544E9A8((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

void func_128()
{
	Global_26001 = 1;
}

int func_129(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	int iVar6;
	int iVar7;
	
	iVar0 = 0;
	iVar2 = iParam1;
	if (!unk_0xEAF6E82C7BDE5A4C(iParam0, iParam1, 0))
	{
		iVar0 = 1;
	}
	if (iVar2 == joaat("weapon_unarmed"))
	{
		return 0;
	}
	iVar3 = 0;
	if (iParam2 == 1)
	{
		if (!unk_0xD62C4419A41F106A(iParam0, 0))
		{
			iVar3 = unk_0xFAF00EC53D4815FE(iParam0, iVar2);
		}
		if (iVar3 == -1)
		{
			iVar4 = unk_0x688593EC9461E416(iVar2);
			if (iVar4 > 0)
			{
				iVar3 = iVar4;
			}
			else
			{
				unk_0x29577D0C92766C53(iParam0, iVar2, &iVar3);
			}
		}
	}
	vVar5 = { unk_0xFBB1F99A825CAB09(iParam0, 0) - Vector(10f, 0f, 0f) };
	if (bParam3)
	{
		vVar5 = { iParam4, iParam5, iParam6 };
	}
	while (func_133(iVar2, iVar6) != 0)
	{
		if (!unk_0xD62C4419A41F106A(iParam0, 0))
		{
			if (unk_0xCC2C88B9353CAF70(iParam0, iVar2, func_133(iVar2, iVar6)))
			{
				if (func_132(func_133(iVar2, iVar6)))
				{
					iVar7 = unk_0x70418C66CB4C3F79(func_133(iVar2, iVar6));
				}
			}
		}
		iVar6++;
	}
	iVar1 = unk_0x99D60D17E2820498(iVar2, iVar3, vVar5, iVar0, 1065353216, iVar7, iParam7, iParam8);
	while (func_133(iVar2, iVar6) != 0)
	{
		if (!unk_0xD62C4419A41F106A(iParam0, 0))
		{
			if (unk_0xCC2C88B9353CAF70(iParam0, iVar2, func_133(iVar2, iVar6)))
			{
				unk_0x062CA5B6A29665F1(iVar1, func_133(iVar2, iVar6));
				func_130(iVar1, func_133(iVar2, iVar6));
			}
		}
		iVar6++;
	}
	if (!unk_0xD62C4419A41F106A(iParam0, 0))
	{
		if (unk_0xEAF6E82C7BDE5A4C(iParam0, iVar2, 0))
		{
			unk_0xA0DDB8AAFD50ADBA(iVar1, unk_0x4A37FD3869B2D716(iParam0, iVar2));
		}
	}
	return iVar1;
}

void func_130(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_131(iParam1);
	if (iVar0 != 0)
	{
		unk_0x062CA5B6A29665F1(iParam0, iVar0);
	}
}

int func_131(int iParam0)
{
	switch (iParam0)
	{
		case 1550611612:
			return -1258515792;
			break;
		
		case 368550800:
			return 438243936;
			break;
		
		case -1769069349:
			return -455079056;
			break;
		
		case 24902297:
			return 740920107;
			break;
		
		case -228041614:
			return -541616347;
			break;
		
		case -584961562:
			return 1809261196;
			break;
		
		case -1153175946:
			return -1646538868;
			break;
		
		case 1301287696:
			return -1290164948;
			break;
		
		case 1597093459:
			return -964465134;
			break;
		
		case 1769871776:
			return 1135718771;
			break;
		
		case -1827882671:
			return 1253942266;
			break;
		
		case 259780317:
			return -403805974;
			break;
		
		case -1973342474:
			return 691432737;
			break;
		
		case 1996130345:
			return 987648331;
			break;
		
		case -1455657812:
			return -431680535;
			break;
		
		case -1668263084:
			return -847582310;
			break;
		
		case 1308243489:
			return -92592218;
			break;
		
		case 1122574335:
			return -494548326;
			break;
		
		case 1420313469:
			return 730876697;
			break;
		
		case 109848390:
			return 583159708;
			break;
		
		case 593945703:
			return -1928503603;
			break;
		
		case 1142457062:
			return 520557834;
			break;
	}
	return 0;
}

int func_132(int iParam0)
{
	if ((((((((((((((((((((((((((((((((iParam0 == joaat("component_pistol_varmod_luxe") || iParam0 == joaat("component_combatpistol_varmod_lowrider")) || iParam0 == joaat("component_appistol_varmod_luxe")) || iParam0 == joaat("component_microsmg_varmod_luxe")) || iParam0 == joaat("component_smg_varmod_luxe")) || iParam0 == joaat("component_assaultrifle_varmod_luxe")) || iParam0 == joaat("component_carbinerifle_varmod_luxe")) || iParam0 == joaat("component_advancedrifle_varmod_luxe")) || iParam0 == joaat("component_mg_varmod_lowrider")) || iParam0 == joaat("component_combatmg_varmod_lowrider")) || iParam0 == joaat("component_pumpshotgun_varmod_lowrider")) || iParam0 == joaat("component_sniperrifle_varmod_luxe")) || iParam0 == joaat("component_assaultsmg_varmod_lowrider")) || iParam0 == joaat("component_pistol50_varmod_luxe")) || iParam0 == joaat("component_sawnoffshotgun_varmod_luxe")) || iParam0 == joaat("component_bullpuprifle_varmod_low")) || iParam0 == joaat("component_snspistol_varmod_lowrider")) || iParam0 == joaat("component_specialcarbine_varmod_lowrider")) || iParam0 == joaat("component_sawnoffshotgun_varmod_luxe")) || iParam0 == joaat("component_knuckle_varmod_pimp")) || iParam0 == joaat("component_knuckle_varmod_ballas")) || iParam0 == joaat("component_knuckle_varmod_dollar")) || iParam0 == joaat("component_knuckle_varmod_diamond")) || iParam0 == joaat("component_knuckle_varmod_hate")) || iParam0 == joaat("component_knuckle_varmod_love")) || iParam0 == joaat("component_knuckle_varmod_player")) || iParam0 == joaat("component_knuckle_varmod_king")) || iParam0 == joaat("component_knuckle_varmod_vagos")) || iParam0 == joaat("component_switchblade_varmod_var1")) || iParam0 == joaat("component_switchblade_varmod_var2")) || iParam0 == joaat("component_revolver_varmod_boss")) || iParam0 == joaat("component_revolver_varmod_goon")) || iParam0 == 1623028892)
	{
		return 1;
	}
	return 0;
}

int func_133(int iParam0, int iParam1)
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
		
		case -1121678507:
			switch (iParam1)
			{
				case 0:
					iVar0 = -2067221805;
					break;
				
				case 1:
					iVar0 = -1820405577;
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_135(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0x333B87730CE53032(iVar1))
					{
						if (unk_0xB94227C531A24A5C(iVar1, iVar2, &Var5))
						{
							if (!func_134(Var5.f_3))
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

int func_134(int iParam0)
{
	switch (iParam0)
	{
		case -1258515792:
		case 438243936:
		case -455079056:
		case 740920107:
		case -541616347:
		case 1809261196:
		case -1646538868:
		case -1290164948:
		case -964465134:
		case 1135718771:
		case 1253942266:
		case -403805974:
		case 691432737:
		case 987648331:
		case -431680535:
		case -847582310:
		case -92592218:
		case -494548326:
		case 730876697:
		case 583159708:
		case -1928503603:
		case 520557834:
			return 1;
			break;
	}
	return 0;
}

int func_135(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0xEE9976E9D3881F89();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x078B659F6F2C8960(iVar0, uParam1))
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

bool func_136()
{
	bool bVar0;
	
	bVar0 = unk_0xC7D0A132A56D5FCB();
	if (!Global_71589)
	{
		if (!bVar0)
		{
			Global_71589 = 1;
		}
	}
	return bVar0;
}

int func_137(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_138(iParam0, iParam1);
}

int func_138(int iParam0, int iParam1)
{
	if (func_16(14) && !func_149(iParam0))
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
	if (func_148(&Global_4269608))
	{
		if (func_146(&Global_4269608, iParam0))
		{
			return 0;
		}
		if (func_139(&Global_4269608, iParam0))
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

int func_139(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x321808B6A32CCA20(iParam1))
	{
		return 0;
	}
	if (func_16(14) && !func_149(iParam1))
	{
		return 0;
	}
	if (func_146(uParam0, iParam1))
	{
		return 0;
	}
	if (func_145(uParam0) < 0f)
	{
		func_144(uParam0, 0);
	}
	func_142(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_140(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_140(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x321808B6A32CCA20(iParam1))
	{
		return 0;
	}
	if (func_16(14) && !func_149(iParam1))
	{
		return 0;
	}
	if (func_146(uParam0, iParam1))
	{
		return 0;
	}
	if (func_145(uParam0) < 0f)
	{
		func_144(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_141(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_141(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_142(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_143(uParam0, iVar0);
		iVar0++;
	}
	func_144(uParam0, (Global_4269607 - 0.5f));
}

void func_143(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_144(var uParam0, float fParam1)
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

float func_145(var uParam0)
{
	return uParam0->f_80;
}

bool func_146(var uParam0, int iParam1)
{
	return func_147(uParam0, iParam1) != -1;
}

int func_147(var uParam0, int iParam1)
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

bool func_148(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_149(int iParam0)
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

void func_150()
{
	if (fLocal_87 > 0f)
	{
		fLocal_87 = (fLocal_87 - (0.6f / (1f / unk_0x7C475FA8D877007F())));
	}
	else
	{
		fLocal_87 = 0f;
	}
	if (fLocal_87 >= 0f)
	{
		unk_0x1ABC36611CBE0E84(Global_35548[10 /*31*/], fLocal_87, 0, 1);
		unk_0x046ED2CF120C8949(Global_35548[10 /*31*/], 4, 0, 1);
	}
	if (fLocal_86 < 0f)
	{
		fLocal_86 = (fLocal_86 + (0.6f / (1f / unk_0x7C475FA8D877007F())));
	}
	else
	{
		fLocal_86 = 0f;
	}
	if (fLocal_86 <= 0f)
	{
		unk_0x1ABC36611CBE0E84(Global_35548[9 /*31*/], fLocal_86, 0, 1);
		unk_0x046ED2CF120C8949(Global_35548[9 /*31*/], 4, 0, 1);
	}
}

void func_151()
{
	if (fLocal_87 < 1f)
	{
		fLocal_87 = (fLocal_87 + (0.6f / (1f / unk_0x7C475FA8D877007F())));
	}
	else
	{
		fLocal_87 = 1f;
	}
	if (fLocal_87 <= 1f)
	{
		unk_0x1ABC36611CBE0E84(Global_35548[10 /*31*/], fLocal_87, 0, 1);
		unk_0x046ED2CF120C8949(Global_35548[10 /*31*/], 4, 0, 1);
	}
	if (fLocal_86 > -1f)
	{
		fLocal_86 = (fLocal_86 - (0.6f / (1f / unk_0x7C475FA8D877007F())));
	}
	else
	{
		fLocal_86 = -1f;
	}
	if (fLocal_86 >= -1f)
	{
		unk_0x1ABC36611CBE0E84(Global_35548[9 /*31*/], fLocal_86, 0, 1);
		unk_0x046ED2CF120C8949(Global_35548[9 /*31*/], 4, 0, 1);
	}
}

void func_152()
{
	switch (iLocal_93)
	{
		case 0:
			unk_0xB815670C37E03CDE(joaat("a_m_o_acult_02"));
			unk_0xB815670C37E03CDE(joaat("prop_anim_cash_pile_02"));
			unk_0x0483D0035D6E46FD("random@altruist_cult");
			unk_0x7E2EAC500C9B54E3("AC_DELIVERED");
			unk_0x98C1605C20B2E0B9(joaat("weapon_assaultrifle"), 31, 0);
			if ((((unk_0x5D98D654CDC2165A(joaat("a_m_o_acult_02")) && unk_0x5D98D654CDC2165A(joaat("prop_anim_cash_pile_02"))) && unk_0xE9CCF312047EBEE0("random@altruist_cult")) && unk_0x7E2EAC500C9B54E3("AC_DELIVERED")) && unk_0x045F471986387527(joaat("weapon_assaultrifle")))
			{
				if (Global_106565.f_24989.f_5 < 2)
				{
					if (Global_106565.f_24989.f_5 == 0)
					{
						sLocal_269 = "ACULT_HI";
					}
					else
					{
						sLocal_269 = "ACULT_LEAVE5";
					}
					sLocal_263 = "cult_p5_guard";
					sLocal_265 = "cult_p5_trv";
					sLocal_266 = "cult_p5_victim_01";
					sLocal_267 = "cult_p5_victim_02";
					sLocal_268 = "cult_p5_cam";
					fLocal_89 = 0.75f;
					fLocal_88 = 0.999f;
				}
				else if (Global_106565.f_24989.f_5 >= 2)
				{
					sLocal_269 = "ACULT_CAPT";
					sLocal_263 = "cult_p7_guard_01";
					sLocal_264 = "cult_p7_guard_02";
					sLocal_265 = "cult_p7_trv";
					sLocal_266 = "cult_p7_victim_01";
					sLocal_267 = "cult_p7_victim_02";
					sLocal_268 = "cult_p7_cam";
					fLocal_89 = 0.98f;
					fLocal_88 = 0.98f;
					unk_0xB815670C37E03CDE(-2022916910);
					unk_0xB815670C37E03CDE(-1322183878);
					unk_0xB815670C37E03CDE(joaat("prop_box_wood05a"));
					unk_0xB815670C37E03CDE(joaat("prop_security_case_01"));
					if (!unk_0x15DFB209D94E0277())
					{
						unk_0x3427206E004F448F("ac_ig_3_p3_b", 8);
					}
				}
				if (unk_0xE38E3CF1625A4145(iLocal_104))
				{
					unk_0x1ABDB383C83A336A(&iLocal_104);
				}
				func_21(1, 1, 1, 0, 0, 0);
				unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), false, 0);
				unk_0xEDF90B96BED57BCE(1);
				unk_0x35675D19812BDF22(0);
				unk_0xDFF589A2149528CE(0);
				unk_0x098757942E2F9D44(unk_0x33CD235DF1E6A94E(), 1);
				unk_0x274C6068B660FFB4(unk_0x33CD235DF1E6A94E(), joaat("weapon_unarmed"), 1);
				unk_0x65BA35D6D61F1574("AC_DELIVERED");
				if (func_179())
				{
					func_178(0);
				}
				func_176();
				wait(0);
				if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
				{
					iLocal_99 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
					if (unk_0x91D5C8283D19AF49(iLocal_99, 0))
					{
						if (unk_0x61DFE32FB87BC784(iLocal_99))
						{
							iLocal_93++;
						}
					}
				}
				else
				{
					iLocal_99 = unk_0x8918EC905FC8975D();
					if (!unk_0xBC2FC12AD0FBF72E(uLocal_97[0]) && !unk_0xBC2FC12AD0FBF72E(uLocal_97[1]))
					{
						unk_0xED68CDDDE25A144E(uLocal_97[0]);
						unk_0x5D94F4D6FE7DA516(uLocal_97[0]);
						unk_0xED68CDDDE25A144E(uLocal_97[1]);
						unk_0x5D94F4D6FE7DA516(uLocal_97[1]);
					}
					iLocal_93++;
				}
			}
			break;
		
		case 1:
			if (unk_0x765F6FEEFF39224F(iLocal_99))
			{
				if (!unk_0x5A04E3BD0B5E7E49(iLocal_99))
				{
					unk_0x0D21E1FDE062ED99(iLocal_99, 1, 0);
				}
				if (unk_0x18FB647D79B09657(iLocal_99, vLocal_54, 13f, 13f, 13f, 0, 1, 0))
				{
					unk_0xBEADAF07D2339505(iLocal_99, -1028.415f, 4924.863f, 205.9386f, 0, 0, 0, 1);
					if (!unk_0xD62C4419A41F106A(iLocal_99, 0))
					{
						unk_0x3C990C409B3845DE(iLocal_99, 149.8882f);
						unk_0x1B2303F9DC2D90D5(iLocal_99, 1084227584);
					}
				}
			}
			unk_0xCE04CE961AF41AB9(vLocal_54, 12f, 1, 0, 0, false);
			unk_0xBEADAF07D2339505(unk_0x33CD235DF1E6A94E(), -1035.625f, 4915.152f, 205.5761f, 1, 0, 0, 1);
			unk_0x3C990C409B3845DE(unk_0x33CD235DF1E6A94E(), 128.2065f);
			if (!unk_0xBC2FC12AD0FBF72E(uLocal_97[0]) && !unk_0xBC2FC12AD0FBF72E(uLocal_97[1]))
			{
				unk_0xBEADAF07D2339505(uLocal_97[0], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 0f, 1f), 1, 0, 0, 1);
				unk_0x3C990C409B3845DE(uLocal_97[0], 128.2065f);
				unk_0xBEADAF07D2339505(uLocal_97[1], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 1f, 0f), 1, 0, 0, 1);
				unk_0x3C990C409B3845DE(uLocal_97[1], 128.2065f);
			}
			iLocal_98[0] = unk_0x9BA5CF280376EEA4(26, joaat("a_m_o_acult_02"), -1042.56f, 4913.516f, 207.0988f, 282.4169f, 1, 1);
			func_97(&uLocal_271, 1, iLocal_98[0], "ACULTMember1", 0, 1);
			if (Global_106565.f_24989.f_5 >= 2)
			{
				iLocal_98[1] = unk_0x9BA5CF280376EEA4(26, joaat("a_m_o_acult_02"), -1041.757f, 4908.49f, 207.2777f, 305.3168f, 1, 1);
				func_97(&uLocal_271, 2, iLocal_98[1], "ACULTMember2", 0, 1);
			}
			func_97(&uLocal_271, 0, unk_0x33CD235DF1E6A94E(), "TREVOR", 0, 1);
			func_97(&uLocal_271, 3, 0, "ACULTMaster", 0, 1);
			func_97(&uLocal_271, 4, 0, "ACULTGroup", 0, 1);
			func_98(&uLocal_271, "ACULTAU", sLocal_269, 4, 0, 0, 0);
			unk_0x4A852F02088ECC9D(iLocal_98[0], 1);
			iLocal_101 = unk_0x99D60D17E2820498(joaat("weapon_assaultrifle"), -1, unk_0xFBB1F99A825CAB09(iLocal_98[0], 1), 1, 1065353216, 0, 0, 1);
			unk_0x2F0A6390D863D337(iLocal_101, iLocal_98[0], unk_0xFCAF61876D23D31D(iLocal_98[0], 60309), 0.12f, 0.028f, -0.003f, -82.208f, -7.06f, -8.038f, 0, 0, 0, 0, 2, 1);
			if (Global_106565.f_24989.f_5 < 2)
			{
				iLocal_100 = unk_0x7CA67831169E8AA6(joaat("prop_anim_cash_pile_02"), vLocal_53, 1, 1, 0);
				unk_0x2F0A6390D863D337(iLocal_100, unk_0x33CD235DF1E6A94E(), unk_0xFCAF61876D23D31D(unk_0x33CD235DF1E6A94E(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			}
			else if (Global_106565.f_24989.f_5 >= 2)
			{
				unk_0x697EBA5CF1A6AB57(iLocal_98[1], joaat("weapon_assaultrifle"), -1, 1, 1);
			}
			iLocal_106 = unk_0x00E62F31D05EB2AC("DEFAULT_ANIMATED_CAMERA", 1);
			iLocal_92 = unk_0x38A6890195DD00D1(-1044.636f, 4915.204f, 212.32f, 0f, 0f, 110.52f, 2);
			unk_0x08798CBF817BA887(unk_0x33CD235DF1E6A94E(), iLocal_92, "random@altruist_cult", sLocal_265, 1000f, -2f, 4, 0, 1148846080, 0);
			unk_0x08798CBF817BA887(iLocal_98[0], iLocal_92, "random@altruist_cult", sLocal_263, 1000f, -2f, 4, 0, 1148846080, 0);
			if (Global_106565.f_24989.f_5 >= 2)
			{
				unk_0x08798CBF817BA887(iLocal_98[1], iLocal_92, "random@altruist_cult", sLocal_264, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			unk_0x76909D790DDFDCE9(iLocal_106, iLocal_92, sLocal_268, "random@altruist_cult");
			unk_0x63F0B040CE6EDF0F(true, 0, 3000, 1, 0, 0);
			if (!unk_0xBC2FC12AD0FBF72E(uLocal_97[0]) && !unk_0xBC2FC12AD0FBF72E(uLocal_97[1]))
			{
				unk_0x08798CBF817BA887(uLocal_97[0], iLocal_92, "random@altruist_cult", sLocal_266, 1000f, -2f, 4, 0, 1148846080, 0);
				unk_0x08798CBF817BA887(uLocal_97[1], iLocal_92, "random@altruist_cult", sLocal_267, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			iLocal_93++;
			break;
		
		case 2:
			if (!unk_0xBC2FC12AD0FBF72E(uLocal_97[0]))
			{
				if (unk_0x28C4F998CC33B00F(uLocal_97[0]))
				{
					func_174(uLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_174(uLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (!unk_0xBC2FC12AD0FBF72E(uLocal_97[1]))
			{
				if (unk_0x28C4F998CC33B00F(uLocal_97[1]))
				{
					func_174(uLocal_97[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_174(uLocal_97[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (unk_0x4EDDCE9AAE0FC976(iLocal_92) > fLocal_89)
			{
				iLocal_93++;
			}
			break;
		
		case 3:
			if (!unk_0xBC2FC12AD0FBF72E(uLocal_97[0]))
			{
				if (unk_0x28C4F998CC33B00F(uLocal_97[0]))
				{
					func_174(uLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_174(uLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (!unk_0xBC2FC12AD0FBF72E(uLocal_97[1]))
			{
				if (unk_0x28C4F998CC33B00F(uLocal_97[1]))
				{
					func_174(uLocal_97[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_174(uLocal_97[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (unk_0x4EDDCE9AAE0FC976(iLocal_92) > fLocal_88)
			{
				iLocal_93++;
			}
			break;
		
		case 4:
			if (Global_106565.f_24989.f_5 < 2)
			{
				func_128();
				if (unk_0x765F6FEEFF39224F(iLocal_98[0]))
				{
					unk_0x4B8B69DAE5BAC592(&(iLocal_98[0]));
				}
				if (unk_0x765F6FEEFF39224F(iLocal_98[1]))
				{
					unk_0x4B8B69DAE5BAC592(&(iLocal_98[1]));
				}
				if (unk_0x765F6FEEFF39224F(iLocal_100))
				{
					unk_0xEC26F4BFC9942A0C(&iLocal_100);
				}
				if (unk_0x765F6FEEFF39224F(iLocal_101))
				{
					unk_0xEC26F4BFC9942A0C(&iLocal_101);
				}
				unk_0xED68CDDDE25A144E(unk_0x33CD235DF1E6A94E());
				unk_0x3AAF29F17A3F9825(0, 0, 3, 0);
				unk_0x189377BFBDC9127F(iLocal_106, false);
				func_21(0, 1, 1, 0, 0, 0);
				unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), true, 0);
				unk_0x35675D19812BDF22(1);
				unk_0xDFF589A2149528CE(1);
				unk_0x098757942E2F9D44(unk_0x33CD235DF1E6A94E(), 0);
				unk_0xC7E6A5D90DED6E0B(0f);
				func_153(func_14(), 1, 2000, 0, 0);
			}
			unk_0x65BA35D6D61F1574("AC_DONE");
			Global_106565.f_24989.f_5 += 2;
			iLocal_78 = 1;
			break;
	}
}

void func_153(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
	func_154(Global_106565.f_28044[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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

int func_154(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_173();
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
					func_172(99, 1);
					func_171(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_171(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_171(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_169(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_164(5))
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
							func_171(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_171(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_171(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_164(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_171(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_171(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_171(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_171(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_171(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_171(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_171(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_171(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_171(joaat("sp2_money_spent_property"), iParam3);
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
									func_171(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_171(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_171(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_171(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_171(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_171(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_164(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_171(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_171(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_171(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_171(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_171(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_171(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_163(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_172(95, iParam3);
					break;
				
				case 1:
					func_172(97, iParam3);
					break;
				
				case 2:
					func_172(96, iParam3);
					break;
			}
			func_172(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor((fVar0 * to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_157(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_157(iVar1);
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
					func_171(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_171(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_171(joaat("sp2_total_cash_earned"), iParam3);
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
	func_156(iParam0);
	if (Global_36425 == 15)
	{
		func_155(0);
	}
	return 1;
}

void func_155(bool bParam0)
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

void func_156(int iParam0)
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

void func_157(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_162(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_162(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_162(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_162(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_160(8269, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_160(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_160(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_160(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_160(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_160(8274, 0, -1, 1, 0);
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
	else if (unk_0x0E4018692D92041D(Global_106565.f_20558.f_471, iParam0) || unk_0x0E4018692D92041D(Global_2097152[func_159() /*10778*/].f_6165.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xCE689A8E8C42ED78(&(Global_106565.f_20558.f_471), iParam0);
		unk_0xCE689A8E8C42ED78(&(Global_2097152[func_159() /*10778*/].f_6165.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x1F85AD4B26B92795("COUP_RED");
		unk_0xFA6BEE2B1507FF1E(func_158(iParam0));
		unk_0xDE1BA36E3BACF7C1(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_158(int iParam0)
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

int func_159()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_160(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_161(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x12B6E23F244DDB0F(iVar0, iParam1, iParam3);
	}
}

int func_161(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_25();
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

int func_162(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_25();
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

void func_163(int iParam0)
{
	func_172(93, iParam0);
	func_172(29, iParam0);
	func_172(30, iParam0);
}

bool func_164(int iParam0)
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
		return func_166(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_166(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_166(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_166(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0xEF4753434B24594D();
		iVar1 = func_165(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0xEF4753434B24594D();
		iVar3 = func_165(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0xEF4753434B24594D();
		iVar5 = func_165(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0xEF4753434B24594D();
		iVar7 = func_165(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0xEF4753434B24594D();
		iVar9 = func_165(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0xEF4753434B24594D();
		iVar11 = func_165(8274, -1, 0);
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
	return unk_0x0E4018692D92041D(Global_2097152[func_159() /*10778*/].f_6165.f_10, iParam0);
}

int func_165(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_161(iParam1)];
	if (unk_0x75D54ED6C1AD1642(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_166(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_25();
	}
	iVar1 = func_168(iParam0, iParam1);
	uVar2 = func_167(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xE35D1055B69473FB(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_167(int iParam0)
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

int func_168(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_25();
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

int func_169(bool bParam0)
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
		func_170(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_137(27, 1);
	return 1;
}

int func_170(int iParam0, int iParam1)
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

void func_171(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x75D54ED6C1AD1642(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x12B6E23F244DDB0F(iParam0, iVar0, 1);
}

void func_172(int iParam0, int iParam1)
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

void func_173()
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

void func_174(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xF0502D0584CCD9A6(uParam0, sParam1, sParam2, func_175(iParam3), 0);
}

int func_175(int iParam0)
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

void func_176()
{
	Global_14732 = 0;
	func_177();
}

void func_177()
{
	unk_0x3F4DBD0F910C454B();
	Global_16877 = 0;
	if (unk_0x12BF789190D82474())
	{
		unk_0xD92171BC6C48DB90(false);
		Global_15866 = 6;
	}
}

void func_178(int iParam0)
{
	Global_16877 = iParam0;
}

int func_179()
{
	if (Global_16877 == 1)
	{
		return 1;
	}
	return 0;
}

void func_180()
{
	switch (iLocal_93)
	{
		case 0:
			unk_0xB815670C37E03CDE(joaat("a_m_o_acult_02"));
			unk_0xB815670C37E03CDE(joaat("prop_anim_cash_pile_02"));
			unk_0x0483D0035D6E46FD("random@altruist_cult");
			unk_0x7E2EAC500C9B54E3("AC_DELIVERED");
			unk_0x98C1605C20B2E0B9(joaat("weapon_assaultrifle"), 31, 0);
			if ((((unk_0x5D98D654CDC2165A(joaat("a_m_o_acult_02")) && unk_0x5D98D654CDC2165A(joaat("prop_anim_cash_pile_02"))) && unk_0xE9CCF312047EBEE0("random@altruist_cult")) && unk_0x7E2EAC500C9B54E3("AC_DELIVERED")) && unk_0x045F471986387527(joaat("weapon_assaultrifle")))
			{
				if (Global_106565.f_24989.f_5 == 0)
				{
					sLocal_269 = "ACULT_HI";
					sLocal_263 = "cult_p2_guard";
					sLocal_265 = "cult_p2_trv";
					sLocal_266 = "cult_p2_victim";
					sLocal_268 = "cult_p2_cam";
					fLocal_89 = 0.8f;
					fLocal_88 = 0.968f;
				}
				else if (Global_106565.f_24989.f_5 == 1)
				{
					sLocal_269 = "ACULT_LEAVE3";
					sLocal_263 = "cult_p4_guard";
					sLocal_265 = "cult_p4_trv";
					sLocal_266 = "cult_p4_victim";
					sLocal_268 = "cult_p4_cam";
					fLocal_89 = 0.77f;
					fLocal_88 = 0.999f;
				}
				else if (Global_106565.f_24989.f_5 == 2)
				{
					sLocal_269 = "ACULT_LEAVE3";
					sLocal_263 = "cult_p4_guard";
					sLocal_265 = "cult_p4_trv";
					sLocal_266 = "cult_p4_victim";
					sLocal_268 = "cult_p4_cam";
					fLocal_89 = 0.77f;
					fLocal_88 = 0.999f;
				}
				else if (Global_106565.f_24989.f_5 >= 3)
				{
					sLocal_269 = "ACULT_CAPT";
					sLocal_263 = "cult_p7_guard_01";
					sLocal_264 = "cult_p7_guard_02";
					sLocal_265 = "cult_p7_trv";
					sLocal_266 = "cult_p7_victim_01";
					sLocal_268 = "cult_p7_cam";
					fLocal_89 = 0.98f;
					fLocal_88 = 0.98f;
					unk_0xB815670C37E03CDE(-2022916910);
					unk_0xB815670C37E03CDE(-1322183878);
					unk_0xB815670C37E03CDE(joaat("prop_box_wood05a"));
					unk_0xB815670C37E03CDE(joaat("prop_security_case_01"));
					if (!unk_0x15DFB209D94E0277())
					{
						unk_0x3427206E004F448F("ac_ig_3_p3_b", 8);
					}
				}
				if (unk_0xE38E3CF1625A4145(iLocal_104))
				{
					unk_0x1ABDB383C83A336A(&iLocal_104);
				}
				func_21(1, 1, 1, 0, 0, 0);
				unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), false, 0);
				unk_0xEDF90B96BED57BCE(1);
				unk_0x35675D19812BDF22(0);
				unk_0xDFF589A2149528CE(0);
				unk_0x098757942E2F9D44(unk_0x33CD235DF1E6A94E(), 1);
				unk_0x274C6068B660FFB4(unk_0x33CD235DF1E6A94E(), joaat("weapon_unarmed"), 1);
				unk_0x65BA35D6D61F1574("AC_DELIVERED");
				if (func_179())
				{
					func_178(0);
				}
				func_176();
				wait(0);
				if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
				{
					iLocal_99 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
					if (unk_0x91D5C8283D19AF49(iLocal_99, 0))
					{
						if (unk_0x61DFE32FB87BC784(iLocal_99))
						{
							iLocal_93++;
						}
					}
				}
				else
				{
					iLocal_99 = unk_0x8918EC905FC8975D();
					if (!unk_0xBC2FC12AD0FBF72E(uLocal_97[0]))
					{
						unk_0xED68CDDDE25A144E(uLocal_97[0]);
						unk_0x5D94F4D6FE7DA516(uLocal_97[0]);
					}
					iLocal_93++;
				}
			}
			break;
		
		case 1:
			if (unk_0x765F6FEEFF39224F(iLocal_99))
			{
				if (!unk_0x5A04E3BD0B5E7E49(iLocal_99))
				{
					unk_0x0D21E1FDE062ED99(iLocal_99, 1, 0);
				}
				if (unk_0x18FB647D79B09657(iLocal_99, vLocal_54, 13f, 13f, 13f, 0, 1, 0))
				{
					unk_0xBEADAF07D2339505(iLocal_99, -1028.415f, 4924.863f, 205.9386f, 0, 0, 0, 1);
					if (!unk_0xD62C4419A41F106A(iLocal_99, 0))
					{
						unk_0x3C990C409B3845DE(iLocal_99, 149.8882f);
						unk_0x1B2303F9DC2D90D5(iLocal_99, 1084227584);
					}
				}
			}
			unk_0xCE04CE961AF41AB9(vLocal_54, 12f, 1, 0, 0, false);
			unk_0xBEADAF07D2339505(unk_0x33CD235DF1E6A94E(), -1035.625f, 4915.152f, 205.5761f, 1, 0, 0, 1);
			unk_0x3C990C409B3845DE(unk_0x33CD235DF1E6A94E(), 128.2065f);
			if (!unk_0xBC2FC12AD0FBF72E(uLocal_97[0]))
			{
				unk_0xBEADAF07D2339505(uLocal_97[0], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 0f, 1f), 1, 0, 0, 1);
				unk_0x3C990C409B3845DE(uLocal_97[0], 128.2065f);
			}
			iLocal_98[0] = unk_0x9BA5CF280376EEA4(26, joaat("a_m_o_acult_02"), -1042.56f, 4913.516f, 207.0988f, 282.4169f, 1, 1);
			func_97(&uLocal_271, 1, iLocal_98[0], "ACULTMember1", 0, 1);
			if (Global_106565.f_24989.f_5 >= 3)
			{
				iLocal_98[1] = unk_0x9BA5CF280376EEA4(26, joaat("a_m_o_acult_02"), -1041.757f, 4908.49f, 207.2777f, 305.3168f, 1, 1);
				func_97(&uLocal_271, 2, iLocal_98[1], "ACULTMember2", 0, 1);
			}
			func_97(&uLocal_271, 0, unk_0x33CD235DF1E6A94E(), "TREVOR", 0, 1);
			func_97(&uLocal_271, 3, 0, "ACULTMaster", 0, 1);
			func_97(&uLocal_271, 4, 0, "ACULTGroup", 0, 1);
			if (Global_106565.f_24989.f_5 != 1 && Global_106565.f_24989.f_5 != 2)
			{
				func_98(&uLocal_271, "ACULTAU", sLocal_269, 4, 0, 0, 0);
			}
			settimerb(0);
			unk_0x4A852F02088ECC9D(iLocal_98[0], 1);
			iLocal_100 = unk_0x7CA67831169E8AA6(joaat("prop_anim_cash_pile_02"), vLocal_53, 1, 1, 0);
			iLocal_101 = unk_0x99D60D17E2820498(joaat("weapon_assaultrifle"), -1, unk_0xFBB1F99A825CAB09(iLocal_98[0], 1), 1, 1065353216, 0, 0, 1);
			unk_0x2F0A6390D863D337(iLocal_101, iLocal_98[0], unk_0xFCAF61876D23D31D(iLocal_98[0], 60309), 0.12f, 0.028f, -0.003f, -82.208f, -7.06f, -8.038f, 0, 0, 0, 0, 2, 1);
			if (Global_106565.f_24989.f_5 < 3)
			{
				if (Global_106565.f_24989.f_5 == 0)
				{
					unk_0x2F0A6390D863D337(iLocal_100, unk_0x33CD235DF1E6A94E(), unk_0xFCAF61876D23D31D(unk_0x33CD235DF1E6A94E(), 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				}
				else
				{
					unk_0x2F0A6390D863D337(iLocal_100, unk_0x33CD235DF1E6A94E(), unk_0xFCAF61876D23D31D(unk_0x33CD235DF1E6A94E(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				}
			}
			else if (Global_106565.f_24989.f_5 >= 3)
			{
				unk_0x697EBA5CF1A6AB57(iLocal_98[1], joaat("weapon_assaultrifle"), -1, 1, 1);
			}
			iLocal_106 = unk_0x00E62F31D05EB2AC("DEFAULT_ANIMATED_CAMERA", 1);
			iLocal_92 = unk_0x38A6890195DD00D1(-1044.636f, 4915.204f, 212.32f, 0f, 0f, 110.52f, 2);
			unk_0x08798CBF817BA887(unk_0x33CD235DF1E6A94E(), iLocal_92, "random@altruist_cult", sLocal_265, 1000f, -2f, 4, 0, 1148846080, 0);
			unk_0x08798CBF817BA887(iLocal_98[0], iLocal_92, "random@altruist_cult", sLocal_263, 1000f, -2f, 4, 0, 1148846080, 0);
			if (Global_106565.f_24989.f_5 >= 3)
			{
				unk_0x08798CBF817BA887(iLocal_98[1], iLocal_92, "random@altruist_cult", sLocal_264, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			unk_0x76909D790DDFDCE9(iLocal_106, iLocal_92, sLocal_268, "random@altruist_cult");
			unk_0x63F0B040CE6EDF0F(true, 0, 3000, 1, 0, 0);
			if (!unk_0xBC2FC12AD0FBF72E(uLocal_97[0]))
			{
				unk_0x08798CBF817BA887(uLocal_97[0], iLocal_92, "random@altruist_cult", sLocal_266, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			iLocal_93++;
			break;
		
		case 2:
			if (!unk_0xBC2FC12AD0FBF72E(uLocal_97[0]))
			{
				if (unk_0x28C4F998CC33B00F(uLocal_97[0]))
				{
					func_174(uLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_174(uLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (timerb() > 2000 && timerb() < 2100)
			{
				if (Global_106565.f_24989.f_5 == 1 || Global_106565.f_24989.f_5 == 2)
				{
					if (!func_108())
					{
						func_98(&uLocal_271, "ACULTAU", sLocal_269, 4, 0, 0, 0);
					}
				}
			}
			if (unk_0x4EDDCE9AAE0FC976(iLocal_92) > fLocal_89)
			{
				iLocal_93++;
			}
			break;
		
		case 3:
			if (!unk_0xBC2FC12AD0FBF72E(uLocal_97[0]))
			{
				if (unk_0x28C4F998CC33B00F(uLocal_97[0]))
				{
					func_174(uLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_174(uLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (Global_106565.f_24989.f_5 == 1 || Global_106565.f_24989.f_5 == 2)
			{
				if ((unk_0x4EDDCE9AAE0FC976(iLocal_92) > 0.9742857f && !iLocal_85) && unk_0xB813DCBD5002BC42() == 4)
				{
					unk_0x0B1F8038F56C12B7("CamPushInNeutral", 0, 0);
					unk_0x0F8EAEEC97DDBCB3(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					iLocal_85 = 1;
				}
			}
			if (unk_0x4EDDCE9AAE0FC976(iLocal_92) > fLocal_88)
			{
				iLocal_93++;
			}
			break;
		
		case 4:
			if (Global_106565.f_24989.f_5 < 3)
			{
				if (Global_106565.f_24989.f_5 != 1 && Global_106565.f_24989.f_5 != 2)
				{
					func_128();
					if (unk_0x765F6FEEFF39224F(iLocal_98[0]))
					{
						unk_0x4B8B69DAE5BAC592(&(iLocal_98[0]));
					}
					if (unk_0x765F6FEEFF39224F(iLocal_98[1]))
					{
						unk_0x4B8B69DAE5BAC592(&(iLocal_98[1]));
					}
				}
				else
				{
					settimerb(0);
					if (unk_0x765F6FEEFF39224F(iLocal_98[0]))
					{
						unk_0x0CDD28A9DFCE2FCE(iLocal_98[0], false, 0);
					}
					if (unk_0x765F6FEEFF39224F(iLocal_98[1]))
					{
						unk_0x0CDD28A9DFCE2FCE(iLocal_98[1], false, 0);
					}
					if (unk_0x765F6FEEFF39224F(uLocal_97[0]))
					{
						unk_0x0CDD28A9DFCE2FCE(uLocal_97[0], false, 0);
					}
					iLocal_93++;
				}
				if (unk_0x765F6FEEFF39224F(iLocal_100))
				{
					unk_0xEC26F4BFC9942A0C(&iLocal_100);
				}
				if (unk_0x765F6FEEFF39224F(iLocal_101))
				{
					unk_0xEC26F4BFC9942A0C(&iLocal_101);
				}
				unk_0xED68CDDDE25A144E(unk_0x33CD235DF1E6A94E());
				if (Global_106565.f_24989.f_5 == 0)
				{
					unk_0x13C3FE558ED056EE(unk_0x33CD235DF1E6A94E(), -668482597, 0, 0, 0);
					unk_0x0E7A95202BF2383F(unk_0x95B959F18401C09A(), 1f, 750, 0, 1, 0);
				}
				if (unk_0xCE3CFF625BEBAA04(sLocal_268, "cult_p4_cam"))
				{
					unk_0x63F0B040CE6EDF0F(false, 0, 3000, 1, 0, 0);
				}
				else
				{
					unk_0x3AAF29F17A3F9825(0, 0, 3, 0);
				}
				unk_0x189377BFBDC9127F(iLocal_106, false);
				func_21(0, 1, 1, 0, 0, 0);
				unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), true, 0);
				unk_0x35675D19812BDF22(1);
				unk_0xDFF589A2149528CE(1);
				unk_0x098757942E2F9D44(unk_0x33CD235DF1E6A94E(), 0);
				unk_0xC7E6A5D90DED6E0B(0f);
				func_153(func_14(), 1, 1000, 0, 0);
			}
			if (Global_106565.f_24989.f_5 != 1 && Global_106565.f_24989.f_5 != 2)
			{
				unk_0x65BA35D6D61F1574("AC_DONE");
				Global_106565.f_24989.f_5++;
				iLocal_78 = 1;
			}
			break;
		
		case 5:
			if (!func_108() || timerb() > 7000)
			{
				func_128();
				if (unk_0x765F6FEEFF39224F(iLocal_98[0]))
				{
					unk_0x4B8B69DAE5BAC592(&(iLocal_98[0]));
				}
				if (unk_0x765F6FEEFF39224F(iLocal_98[1]))
				{
					unk_0x4B8B69DAE5BAC592(&(iLocal_98[1]));
				}
				unk_0x65BA35D6D61F1574("AC_DONE");
				Global_106565.f_24989.f_5++;
				iLocal_78 = 1;
			}
			break;
	}
}

void func_181()
{
	if (func_183())
	{
		if (func_14() == 2)
		{
			if (unk_0x35412823BBDF596C(func_182()))
			{
				unk_0x6E4DFDF8EFB7AD50(func_182(), &uLocal_90, &iLocal_91);
				if (iLocal_91 == 1)
				{
					uLocal_97[0] = unk_0x0C517890387F4AE4(func_182(), 0);
					if (unk_0x18FB647D79B09657(uLocal_97[0], vLocal_54, 5f, 5f, 5f, 0, 1, 0))
					{
						if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
						{
							if (!unk_0xD62C4419A41F106A(unk_0x8918EC905FC8975D(), 0))
							{
								unk_0xA4DF1E31BCDF9978(unk_0x8918EC905FC8975D(), 10.5f, 5, 0);
							}
						}
						settimera(0);
						iLocal_50 = 1;
					}
				}
				else if (iLocal_91 == 2)
				{
					uLocal_97[0] = unk_0x0C517890387F4AE4(func_182(), 0);
					uLocal_97[1] = unk_0x0C517890387F4AE4(func_182(), 1);
					if (unk_0x18FB647D79B09657(uLocal_97[0], vLocal_54, 5f, 5f, 5f, 0, 1, 0) && unk_0x18FB647D79B09657(uLocal_97[1], vLocal_54, 5f, 5f, 5f, 0, 1, 0))
					{
						if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
						{
							if (!unk_0xD62C4419A41F106A(unk_0x8918EC905FC8975D(), 0))
							{
								unk_0xA4DF1E31BCDF9978(unk_0x8918EC905FC8975D(), 10.5f, 5, 0);
							}
						}
						settimera(0);
						iLocal_50 = 1;
					}
				}
			}
		}
	}
}

var func_182()
{
	return unk_0x733DE09777D47CD6(unk_0x3EE1295CEFBEFED4());
}

bool func_183()
{
	return Global_26000;
}

void func_184()
{
	if (func_187())
	{
		if (iLocal_260 == 0)
		{
			iLocal_260 = unk_0x0335D8135051EA56(vLocal_53 - Vector(100f, 60f, 80f), vLocal_53 + Vector(100f, 60f, 80f), 0, 1, 1, 1);
		}
		while (unk_0x16E00F066AFFEA0D(func_93(unk_0x95B959F18401C09A()), vLocal_53, 1) < 209f)
		{
			wait(0);
		}
	}
	if (func_14() == 0 || func_14() == 1)
	{
		if (unk_0x9AA1574E00850065(2017343592, 1862763509) != 5)
		{
			if (func_186())
			{
				unk_0xD2E80177F27FD43F(5, 2017343592, 1862763509);
			}
			else if (func_185())
			{
				unk_0xD2E80177F27FD43F(5, 2017343592, 1862763509);
			}
		}
	}
	else if (func_14() == 2)
	{
		if (unk_0x9AA1574E00850065(2017343592, 1862763509) != 5)
		{
			if (func_186())
			{
				if (unk_0x5DACF31D3AC5ED8D(unk_0x33CD235DF1E6A94E()) || (unk_0xA08B8AEC5B1A55D6(unk_0x33CD235DF1E6A94E()) && unk_0x0FFAAF12F0E94E37(unk_0x95B959F18401C09A())))
				{
					unk_0xD2E80177F27FD43F(5, 2017343592, 1862763509);
				}
			}
			else if (func_185())
			{
				unk_0xD2E80177F27FD43F(5, 2017343592, 1862763509);
			}
			else if (unk_0x9AA1574E00850065(2017343592, 1862763509) != 1)
			{
				unk_0xD2E80177F27FD43F(1, 2017343592, 1862763509);
			}
		}
	}
	if (func_186())
	{
		if (iLocal_83)
		{
			if (!unk_0x09287BFEE1D9F6EF(unk_0x95B959F18401C09A(), 3))
			{
				unk_0x65BA35D6D61F1574("AC_START");
			}
			unk_0x4B06B5746CBEC99F(0f);
			unk_0x37C9B4B0237ED18F("COUNTRYSIDE_ALTRUIST_CULT_01", 1);
			if (unk_0x8FCF53827AC6136E(Global_35548[9 /*31*/].f_2, 6f, Global_35548[9 /*31*/].f_5, 0))
			{
				unk_0x41D9972DE84520AB(Global_35548[9 /*31*/].f_5, Global_35548[9 /*31*/].f_2, 0, 0f, 0);
			}
			if (unk_0x8FCF53827AC6136E(Global_35548[10 /*31*/].f_2, 6f, Global_35548[10 /*31*/].f_5, 0))
			{
				unk_0x41D9972DE84520AB(Global_35548[10 /*31*/].f_5, Global_35548[10 /*31*/].f_2, 0, 0f, 0);
			}
			bLocal_84 = true;
			iLocal_83 = 0;
		}
	}
	else if (!iLocal_83)
	{
		if (unk_0x25A82BC061F5B71D())
		{
			unk_0x65BA35D6D61F1574("AC_END");
		}
		unk_0x4B06B5746CBEC99F(1f);
		unk_0x37C9B4B0237ED18F("COUNTRYSIDE_ALTRUIST_CULT_01", 0);
		if (!bLocal_84)
		{
			func_150();
		}
		iLocal_83 = 1;
	}
}

int func_185()
{
	if ((((((unk_0x7E480C68737C0B83(vLocal_55, vLocal_56, fLocal_57, 1) || unk_0x7E480C68737C0B83(vLocal_58, vLocal_59, fLocal_60, 1)) || unk_0x7E480C68737C0B83(vLocal_61, vLocal_62, fLocal_63, 1)) || unk_0x7E480C68737C0B83(vLocal_64, vLocal_65, fLocal_66, 1)) || unk_0x7E480C68737C0B83(vLocal_67, vLocal_68, fLocal_69, 1)) || unk_0x7E480C68737C0B83(vLocal_70, vLocal_71, fLocal_72, 1)) || unk_0x7E480C68737C0B83(vLocal_73, vLocal_74, fLocal_75, 1))
	{
		return 1;
	}
	return 0;
}

int func_186()
{
	if ((((((unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), vLocal_55, vLocal_56, fLocal_57, 0, 1, 0) || unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), vLocal_58, vLocal_59, fLocal_60, 0, 1, 0)) || unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), vLocal_61, vLocal_62, fLocal_63, 0, 1, 0)) || unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), vLocal_64, vLocal_65, fLocal_66, 0, 1, 0)) || unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), vLocal_67, vLocal_68, fLocal_69, 0, 1, 0)) || unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), vLocal_70, vLocal_71, fLocal_72, 0, 1, 0)) || unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), vLocal_73, vLocal_74, fLocal_75, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_187()
{
	if (Global_106565.f_24989.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

void func_188()
{
	unk_0xD2E80177F27FD43F(255, 2017343592, 1862763509);
	if (Global_106565.f_24989.f_5 >= iLocal_96 && Global_106565.f_24989.f_5 != 1000)
	{
		if (bLocal_76)
		{
			func_1(1);
			func_10();
			func_3(0);
			iLocal_50 = 3;
		}
		else
		{
			func_189(&uLocal_109);
			Global_88969 = 0;
			Global_88970 = 0;
			Global_88971 = 0;
			func_13(0, 1);
			func_11(0, 1);
			func_2(0);
			unk_0x61FC243328EB16DD(1);
			unk_0xF84B1ACDA9DC2C16(0);
			unk_0x9758ACDBBF1A37B0(0);
			func_3(0);
			unk_0x4B06B5746CBEC99F(1f);
			unk_0xA53C1C92EE35EC0E(3, 1);
			unk_0xA53C1C92EE35EC0E(5, 1);
			unk_0xFEE41843770AB969();
			iLocal_83 = 0;
			func_94();
			Global_106565.f_24989.f_5 = (iLocal_96 - 1);
			unk_0x5894DC159447E10A();
		}
	}
	else
	{
		unk_0x0ADAD7B4709951D1();
		func_189(&uLocal_109);
		Global_88969 = 0;
		Global_88970 = 0;
		Global_88971 = 0;
		func_13(0, 1);
		func_11(0, 1);
		func_2(0);
		unk_0x61FC243328EB16DD(1);
		unk_0xF84B1ACDA9DC2C16(0);
		unk_0x9758ACDBBF1A37B0(0);
		func_3(0);
		if (unk_0x11AE7F6A404414C9(uLocal_259))
		{
			unk_0x83A1D480DB0B52CC(&uLocal_259);
			func_96(0);
		}
		unk_0x4B06B5746CBEC99F(1f);
		unk_0xA53C1C92EE35EC0E(3, 1);
		unk_0xA53C1C92EE35EC0E(5, 1);
		unk_0xFEE41843770AB969();
		iLocal_83 = 0;
		unk_0x5894DC159447E10A();
	}
}

void func_189(var uParam0)
{
	if (unk_0x11AE7F6A404414C9(*uParam0))
	{
		unk_0x83A1D480DB0B52CC(uParam0);
		*uParam0 = 0;
	}
}

