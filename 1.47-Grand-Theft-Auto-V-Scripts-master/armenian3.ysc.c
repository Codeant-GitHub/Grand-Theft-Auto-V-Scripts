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
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50[5] = { 0, 0, 0, 0, 0 };
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	float fLocal_61 = 0f;
	float fLocal_62 = 0f;
	int iLocal_63 = 0;
	bool bLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	float fLocal_68 = 0f;
	float fLocal_69 = 0f;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 21;
	var uLocal_78 = 6;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	bool bLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	bool bLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	bool bLocal_99 = 0;
	int iLocal_100 = 0;
	vector3 vLocal_101 = { 0f, 0f, 0f };
	vector3 vLocal_102 = { 0f, 0f, 0f };
	vector3 vLocal_103 = { 0f, 0f, 0f };
	vector3 vLocal_104 = { 0f, 0f, 0f };
	vector3 vLocal_105 = { 0f, 0f, 0f };
	vector3 vLocal_106 = { 0f, 0f, 0f };
	vector3 vLocal_107 = { 0f, 0f, 0f };
	vector3 vLocal_108 = { 0f, 0f, 0f };
	vector3 vLocal_109 = { 0f, 0f, 0f };
	vector3 vLocal_110 = { 0f, 0f, 0f };
	vector3 vLocal_111 = { 0f, 0f, 0f };
	vector3 vLocal_112 = { 0f, 0f, 0f };
	vector3 vLocal_113 = { 0f, 0f, 0f };
	struct<6> Local_114 = { 0, 0, 0, 0, 0, 0 } ;
	char* sLocal_115 = NULL;
	char* sLocal_116 = NULL;
	char* sLocal_117 = NULL;
	char* sLocal_118 = NULL;
	char* sLocal_119 = NULL;
	char* sLocal_120 = NULL;
	char* sLocal_121 = NULL;
	char* sLocal_122 = NULL;
	char* sLocal_123 = NULL;
	int iLocal_124 = 0;
	vector3 vLocal_125 = { 0f, 0f, 0f };
	vector3 vLocal_126 = { 0f, 0f, 0f };
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142[5] = { 0, 0, 0, 0, 0 };
	int iLocal_143[2] = { 0, 0 };
	int iLocal_144[2] = { 0, 0 };
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	var uLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	var uLocal_171 = 0;
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
	int iLocal_182 = 0;
	struct<7> Local_183[7];
	int iLocal_184 = 0;
	int iLocal_185 = 0;
	int iLocal_186 = 0;
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190[3] = { 0, 0, 0 };
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	int iLocal_196 = 0;
	int iLocal_197 = 0;
	int iLocal_198 = 0;
	var uLocal_199 = 3;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 1092616192;
	var uLocal_206 = 1101004800;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 3;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = -1;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 1000;
	var uLocal_233 = 1000;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	int iLocal_239[4] = { 0, 0, 0, 0 };
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	char[] cLocal_242[8] = 0;
	int iLocal_243[120] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_244 = 0;
	int iLocal_245[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_246[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_247[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_248[4] = { 0, 0, 0, 0 };
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 4;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 4;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 4;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 4;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 4;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 4;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 16;
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
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
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
	bool bLocal_453 = 0;
	float fLocal_454 = 0f;
	int iLocal_455 = 0;
	int iLocal_456 = 0;
	char* sLocal_457 = NULL;
	int iLocal_458 = 0;
	int iLocal_459 = 0;
	bool bLocal_460 = 0;
#endregion

void __EntryFunction__()
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
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
	uLocal_46 = unk_0xFD411B1045595D7D();
	iLocal_47 = unk_0x5E82627D2AFEFEE1();
	iLocal_55 = -1;
	iLocal_57 = -1;
	iLocal_60 = 1000;
	fLocal_61 = 1000f;
	fLocal_62 = 1000f;
	vLocal_101 = { 0f, 0f, 0f };
	vLocal_102 = { -43.6345f, -1110.605f, 25.9582f };
	vLocal_103 = { 0f, 0f, 178.9958f };
	vLocal_104 = { -63.0336f, -1107.35f, 25.3198f };
	vLocal_105 = { -818.4653f, 180.4985f, 71.5139f };
	vLocal_106 = { -806.9441f, 171.6912f, 75.3206f };
	vLocal_107 = { -803.2621f, 176.0598f, 75.7406f };
	vLocal_108 = { -797.7103f, 181.8636f, 72.7925f };
	vLocal_109 = { -798.1318f, 181.0491f, 72.7808f };
	vLocal_110 = { -811.1514f, 187.6124f, 71.4744f };
	vLocal_111 = { -846.1608f, 158.1691f, 65.7346f };
	vLocal_112 = { -60.3707f, -1098.992f, 25.4262f };
	sLocal_115 = "missarmenian3";
	sLocal_116 = "missarmenian3mcs2";
	sLocal_117 = "missarmenian3leadinoutArmenian_3_int";
	sLocal_118 = "missarmenian3mcs_1a";
	sLocal_119 = "missarmenian3@simeon_tauntsidle_b";
	sLocal_120 = "MOVE_M@LEAF_BLOWER";
	sLocal_121 = "missarmenian3_gardener";
	sLocal_122 = "missarmenian3_tryopendoor";
	sLocal_123 = "missarmenian3leadinoutarm3_mcs_8";
	vLocal_125 = { -802.411f, 166.269f, 70.557f };
	vLocal_126 = { 0f, 0f, 20.64f };
	iLocal_173 = -1223666875;
	iLocal_174 = 1850241841;
	iLocal_175 = -378388578;
	iLocal_176 = 1893421006;
	iLocal_177 = -1887701248;
	iLocal_178 = -1831288286;
	iLocal_179 = -96283321;
	iLocal_180 = -293141277;
	iLocal_181 = 506750037;
	iLocal_182 = -1978427516;
	iLocal_184 = -1;
	iLocal_188 = -1;
	iLocal_191 = joaat("prop_controller_01");
	iLocal_192 = joaat("prop_headset_01");
	iLocal_193 = joaat("prop_tennis_rack_01");
	iLocal_194 = joaat("p_tennis_bag_01_s");
	iLocal_195 = joaat("weapon_pistol");
	cLocal_242 = "ARM3AUD";
	bLocal_453 = true;
	fLocal_454 = 1E-06f;
	if (unk_0x9EC5BDC006623C42(3))
	{
		func_879();
		func_878();
		func_873(0);
	}
	unk_0xC48A4BABDFAAB2B9(1);
	if (!func_872())
	{
		if (!unk_0x765F6FEEFF39224F(iLocal_138))
		{
			if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
			{
				if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
				{
					iLocal_138 = func_871();
					if (unk_0x765F6FEEFF39224F(iLocal_138) && !unk_0xD62C4419A41F106A(iLocal_138, 0))
					{
						unk_0x65EE1E8C987CD1DB(iLocal_138, 1);
						unk_0x0D21E1FDE062ED99(iLocal_138, true, 1);
						unk_0xFE8201EFB515D77B(iLocal_138, 1);
					}
				}
			}
		}
	}
	if (!Global_90209.f_357)
	{
		if (!func_872())
		{
			bLocal_89 = false;
			while (!func_845(2, &uLocal_70, 0, 1, 0, 1, 0))
			{
				bLocal_89 = true;
				wait(0);
			}
		}
	}
	if (unk_0x765F6FEEFF39224F(Global_90209.f_9[0]))
	{
		if (!unk_0xBC2FC12AD0FBF72E(Global_90209.f_9[0]))
		{
			iLocal_135 = Global_90209.f_9[0];
			unk_0x0D21E1FDE062ED99(iLocal_135, true, 1);
		}
	}
	if (unk_0x765F6FEEFF39224F(Global_90209.f_9[1]))
	{
		if (!unk_0xBC2FC12AD0FBF72E(Global_90209.f_9[1]))
		{
			iLocal_137 = Global_90209.f_9[1];
			unk_0x0D21E1FDE062ED99(iLocal_137, true, 1);
		}
	}
	if (unk_0x765F6FEEFF39224F(Global_90209[0]))
	{
		if (!unk_0xD62C4419A41F106A(Global_90209[0], 0))
		{
			iLocal_141 = Global_90209[0];
			unk_0x0D21E1FDE062ED99(iLocal_141, true, 1);
		}
	}
	if (unk_0x765F6FEEFF39224F(Global_90209[1]))
	{
		if (!unk_0xD62C4419A41F106A(Global_90209[1], 0))
		{
			iLocal_143[0] = Global_90209[1];
			unk_0x0D21E1FDE062ED99(iLocal_143[0], true, 1);
		}
	}
	if (unk_0x765F6FEEFF39224F(Global_90209[2]))
	{
		if (!unk_0xD62C4419A41F106A(Global_90209[2], 0))
		{
			iLocal_143[1] = Global_90209[2];
			unk_0x0D21E1FDE062ED99(iLocal_143[1], true, 1);
		}
	}
	if (unk_0x765F6FEEFF39224F(Global_90209[3]))
	{
		if (!unk_0xD62C4419A41F106A(Global_90209[3], 0))
		{
			iLocal_142[0] = Global_90209[3];
			unk_0x0D21E1FDE062ED99(iLocal_142[0], true, 1);
		}
	}
	if (unk_0x765F6FEEFF39224F(Global_90209[4]))
	{
		if (!unk_0xD62C4419A41F106A(Global_90209[4], 0))
		{
			iLocal_142[1] = Global_90209[4];
			unk_0x0D21E1FDE062ED99(iLocal_142[1], true, 1);
		}
	}
	if (unk_0x765F6FEEFF39224F(Global_90209[5]))
	{
		if (!unk_0xD62C4419A41F106A(Global_90209[5], 0))
		{
			iLocal_142[2] = Global_90209[5];
			unk_0x0D21E1FDE062ED99(iLocal_142[2], true, 1);
		}
	}
	if (unk_0x765F6FEEFF39224F(Global_90209[6]))
	{
		if (!unk_0xD62C4419A41F106A(Global_90209[6], 0))
		{
			iLocal_142[3] = Global_90209[6];
			unk_0x0D21E1FDE062ED99(iLocal_142[3], true, 1);
		}
	}
	func_844(2);
	if (!func_872())
	{
		if (unk_0xC7D0A132A56D5FCB())
		{
			func_836(1, 1, 1, 0, 0, 0);
			if (unk_0x765F6FEEFF39224F(iLocal_135) && !unk_0xBC2FC12AD0FBF72E(iLocal_135))
			{
				unk_0xEF6624A3AFF02A02(iLocal_135, "Siemon", 0, func_835(18), 0);
			}
			else
			{
				unk_0xEF6624A3AFF02A02(0, "Siemon", 2, func_835(18), 0);
			}
			if (unk_0x765F6FEEFF39224F(iLocal_137) && !unk_0xBC2FC12AD0FBF72E(iLocal_137))
			{
				unk_0xEF6624A3AFF02A02(iLocal_137, "customer", 0, joaat("a_m_m_bevhills_02"), 0);
			}
			else
			{
				unk_0xEF6624A3AFF02A02(0, "customer", 2, joaat("a_m_m_bevhills_02"), 0);
			}
			if (unk_0x765F6FEEFF39224F(iLocal_141) && !unk_0xD62C4419A41F106A(iLocal_141, 0))
			{
				unk_0xEF6624A3AFF02A02(iLocal_141, "Showroom_Car", 0, joaat("premier"), 0);
			}
			else
			{
				unk_0xEF6624A3AFF02A02(0, "Showroom_Car", 2, joaat("premier"), 0);
			}
			unk_0x2EC4FFC8740228D3(0);
			wait(0);
			func_827(-36.44376f, -1114.313f, 24.93915f, -58.57041f, -1111.052f, 37.43576f, 20f, -58.3923f, -1114.561f, 25.4358f, 74.8206f, func_834(), 1, 1, 1, 0, 0);
			if (bLocal_89)
			{
				func_825(&uLocal_70, 0, 0, 2000, 1, 1, 0, 1);
				iLocal_90 = 1;
			}
			unk_0xCE04CE961AF41AB9(-47.07522f, -1114.476f, 25.43581f, 7.5f, 1, 0, 0, false);
			unk_0xCE04CE961AF41AB9(-40.14164f, -1113.714f, 25.43738f, 5f, 1, 0, 0, false);
			unk_0xCE04CE961AF41AB9(-57.75611f, -1112.769f, 25.43581f, 10f, 1, 0, 0, false);
			unk_0xAF9EA4E314ED45C2(-801.0658f, 187.0313f, 71.60547f, -797.8655f, 178.3436f, 74.83471f, 9f, 0, 0, 1);
			unk_0x3754CDF254D9F523(1);
			func_822();
			iLocal_97 = 1;
		}
	}
	while (true)
	{
		unk_0x65F534DDBF48606F("M_Complications", 0);
		func_818();
		func_816();
		if (bLocal_89)
		{
			if (!func_872())
			{
				if (iLocal_90 == 0)
				{
					if (unk_0x286C823E0969F22A())
					{
						func_825(&uLocal_70, 0, 0, 2000, 1, 1, 0, 1);
						iLocal_90 = 1;
					}
				}
			}
			else
			{
				iLocal_90 = 1;
			}
		}
		if (func_815("ARM3_GUN"))
		{
			if (iLocal_236 >= 7 && iLocal_236 <= 10)
			{
				unk_0x3FD9339AA95E323F(0, 68, 1);
				unk_0x3FD9339AA95E323F(0, 73, 1);
			}
		}
		if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -856.008f, 170.521f, 56.53983f, -764.7679f, 168.5071f, 86.73279f, 45f, 0, 1, 0))
		{
			if (iLocal_158 == 0)
			{
				iLocal_158 = unk_0x30B9FCF52BAAEB11(-812.1879f, 179.9663f, 71.1639f, "V_Michael");
			}
			else if (iLocal_86 == 0)
			{
				unk_0xDDF57F769FD85704(iLocal_158);
				if (!unk_0x5FC25A9F19EB39FA(iLocal_158))
				{
				}
				else
				{
					iLocal_86 = 1;
				}
			}
			unk_0x17D569F7C0516CDF(-802.73f, 167.5f, 77.58f, 1f, joaat("v_ilev_mm_windowwc"), 0);
			if (!unk_0x765F6FEEFF39224F(iLocal_160))
			{
				if (func_812(joaat("v_ilev_mm_windowwc")))
				{
					unk_0xCE04CE961AF41AB9(-801.9f, 167.7f, 76.3f, 10f, 1, 0, 0, false);
					iLocal_160 = unk_0x7CA67831169E8AA6(joaat("v_ilev_mm_windowwc"), -801.9f, 167.7f, 76.3f, 1, true, 0);
					unk_0xF70578F5CD9822CB(iLocal_160, true);
					unk_0x71CA80D41E1338B4(joaat("v_ilev_mm_windowwc"));
				}
			}
			if (!unk_0x36CDBD83DF514AC4(iLocal_173))
			{
				unk_0x1D8D48272A2B8F0F(iLocal_173, joaat("v_ilev_mm_doorw"), -804.95f, 171.86f, 76.89f, 1, 1, 0);
			}
			if (!unk_0x36CDBD83DF514AC4(iLocal_174))
			{
				unk_0x1D8D48272A2B8F0F(iLocal_174, joaat("v_ilev_mm_doorson"), -806.77f, 174.02f, 76.89f, 1, 1, 0);
			}
			if (!unk_0x36CDBD83DF514AC4(iLocal_175))
			{
				unk_0x1D8D48272A2B8F0F(iLocal_175, joaat("v_ilev_mm_doordaughter"), -802.7f, 176.18f, 76.89f, 1, 1, 0);
			}
			if (!unk_0x36CDBD83DF514AC4(iLocal_176))
			{
				unk_0x1D8D48272A2B8F0F(iLocal_176, joaat("v_ilev_mm_doorw"), -809.28f, 177.86f, 76.89f, 1, 1, 0);
			}
			if (!unk_0x36CDBD83DF514AC4(iLocal_177))
			{
				unk_0x1D8D48272A2B8F0F(iLocal_177, joaat("v_ilev_mm_door"), -806.28f, 186.02f, 72.62f, 1, 1, 0);
			}
			if (iLocal_236 <= 7)
			{
				if (unk_0x36CDBD83DF514AC4(iLocal_173))
				{
					if (unk_0x66A61623D480DB63(iLocal_173) != -1f || unk_0x566E267835BAF87E(iLocal_173) != 4)
					{
						unk_0x1ABC36611CBE0E84(iLocal_173, -1f, 0, 0);
						unk_0x046ED2CF120C8949(iLocal_173, 4, 0, 1);
					}
				}
				if (unk_0x36CDBD83DF514AC4(iLocal_174))
				{
					if (unk_0x66A61623D480DB63(iLocal_174) != -1f || unk_0x566E267835BAF87E(iLocal_174) != 4)
					{
						unk_0x1ABC36611CBE0E84(iLocal_174, -1f, 0, 0);
						unk_0x046ED2CF120C8949(iLocal_174, 4, 0, 1);
					}
				}
				if (unk_0x36CDBD83DF514AC4(iLocal_175))
				{
					if (unk_0x66A61623D480DB63(iLocal_175) != 1f || unk_0x566E267835BAF87E(iLocal_175) != 4)
					{
						unk_0x1ABC36611CBE0E84(iLocal_175, 1f, 0, 0);
						unk_0x046ED2CF120C8949(iLocal_175, 4, 0, 1);
					}
				}
				if (!func_815("GarageDoorLockedSkip"))
				{
					if (!func_815("DoorLocked"))
					{
						if (unk_0x36CDBD83DF514AC4(iLocal_177))
						{
							if ((unk_0x66A61623D480DB63(iLocal_177) < (-0.4f - 0.05f) || unk_0x66A61623D480DB63(iLocal_177) > (-0.4f + 0.05f)) || unk_0x566E267835BAF87E(iLocal_177) != 4)
							{
								fVar0 = unk_0x66A61623D480DB63(iLocal_177);
								if (fVar0 < -0.4f)
								{
									fVar0 = (fVar0 + (0.1f * timestep()));
								}
								else if (fVar0 > -0.4f)
								{
									fVar0 = (fVar0 + (-0.1f * timestep()));
								}
								unk_0x1ABC36611CBE0E84(iLocal_177, fVar0, 0, 0);
								unk_0x046ED2CF120C8949(iLocal_177, 4, 0, 1);
							}
						}
						if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -806.8881f, 183.7755f, 71.3478f, -805.1901f, 184.4428f, 73.8478f, 3.5f, 0, 1, 0))
						{
							func_809("DoorLocked", 1);
						}
					}
					else if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -807.4023f, 189.0046f, 71.47892f, -815.2882f, 185.9782f, 74.95445f, 6.5f, 0, 1, 0))
					{
						if (func_808(4, joaat("v_ilev_mm_door"), -806.28f, 186.02f, 72.62f, 1, 1045220557, 1008981770, 0, 0))
						{
							func_809("GarageDoorSmoothClosed", 1);
						}
						else
						{
							func_809("GarageDoorSmoothClosed", 0);
						}
					}
					else if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -806.959f, 186.0461f, 70.97479f, -804.7082f, 180.1842f, 74.3478f, 7f, 0, 1, 0))
					{
						if (unk_0x36CDBD83DF514AC4(iLocal_177))
						{
							if ((unk_0x66A61623D480DB63(iLocal_177) < (-0.4f - 0.05f) || unk_0x66A61623D480DB63(iLocal_177) > (-0.4f + 0.05f)) || unk_0x566E267835BAF87E(iLocal_177) != 4)
							{
								fVar1 = unk_0x66A61623D480DB63(iLocal_177);
								if (fVar1 < -0.4f)
								{
									fVar1 = (fVar1 + (0.1f * timestep()));
								}
								else if (fVar1 > -0.4f)
								{
									fVar1 = (fVar1 + (-0.1f * timestep()));
								}
								unk_0x1ABC36611CBE0E84(iLocal_177, fVar1, 0, 0);
								unk_0x046ED2CF120C8949(iLocal_177, 3, 0, 1);
							}
						}
					}
					else if (unk_0x36CDBD83DF514AC4(iLocal_177))
					{
						if ((unk_0x66A61623D480DB63(iLocal_177) < (-0.4f - 0.05f) || unk_0x66A61623D480DB63(iLocal_177) > (-0.4f + 0.05f)) || unk_0x566E267835BAF87E(iLocal_177) != 4)
						{
							fVar2 = unk_0x66A61623D480DB63(iLocal_177);
							if (fVar2 < -0.4f)
							{
								fVar2 = (fVar2 + (0.1f * timestep()));
							}
							else if (fVar2 > -0.4f)
							{
								fVar2 = (fVar2 + (-0.1f * timestep()));
							}
							unk_0x1ABC36611CBE0E84(iLocal_177, fVar2, 0, 0);
							unk_0x046ED2CF120C8949(iLocal_177, 4, 0, 1);
						}
					}
				}
				else if (unk_0x36CDBD83DF514AC4(iLocal_177))
				{
					if (unk_0x66A61623D480DB63(iLocal_177) != 0f || unk_0x566E267835BAF87E(iLocal_177) != 4)
					{
						unk_0x1ABC36611CBE0E84(iLocal_177, 0f, 0, 0);
						unk_0x046ED2CF120C8949(iLocal_177, 4, 0, 1);
					}
				}
				if (unk_0x36CDBD83DF514AC4(iLocal_176))
				{
					if (unk_0x66A61623D480DB63(iLocal_176) != 0f || unk_0x566E267835BAF87E(iLocal_176) != 4)
					{
						unk_0x1ABC36611CBE0E84(iLocal_176, 0f, 0, 0);
						unk_0x046ED2CF120C8949(iLocal_176, 4, 0, 1);
					}
				}
			}
		}
		else if (!unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -864.316f, 170.8105f, 56.56639f, -757.0574f, 167.8198f, 77.38649f, 55f, 0, 1, 0))
		{
			if (iLocal_158 != 0)
			{
				if (iLocal_86 == 1)
				{
					unk_0x2F7BF094F3C2A257(iLocal_158);
					iLocal_86 = 0;
				}
			}
		}
		if (!unk_0x36CDBD83DF514AC4(iLocal_178))
		{
			unk_0x1D8D48272A2B8F0F(iLocal_178, joaat("v_ilev_fib_door1"), -31.72f, -1101.85f, 26.57f, 1, 1, 0);
		}
		if (!unk_0x36CDBD83DF514AC4(iLocal_179))
		{
			unk_0x1D8D48272A2B8F0F(iLocal_179, joaat("v_ilev_fib_door1"), -33.81f, -1107.58f, 26.57f, 1, 1, 0);
		}
		if (!unk_0x36CDBD83DF514AC4(iLocal_180))
		{
			unk_0x1D8D48272A2B8F0F(iLocal_180, joaat("v_ilev_csr_door_l"), -59.89f, -1092.95f, 26.88f, 1, 1, 0);
		}
		if (!unk_0x36CDBD83DF514AC4(iLocal_181))
		{
			unk_0x1D8D48272A2B8F0F(iLocal_181, joaat("v_ilev_csr_door_r"), -60.55f, -1094.75f, 26.89f, 1, 1, 0);
		}
		if (unk_0x36CDBD83DF514AC4(iLocal_178))
		{
			if (unk_0x66A61623D480DB63(iLocal_178) != 0f || unk_0x566E267835BAF87E(iLocal_178) != 4)
			{
				unk_0x1ABC36611CBE0E84(iLocal_178, 0f, 0, 0);
				unk_0x046ED2CF120C8949(iLocal_178, 4, 0, 1);
			}
		}
		if (unk_0x36CDBD83DF514AC4(iLocal_179))
		{
			if (unk_0x66A61623D480DB63(iLocal_179) != 0f || unk_0x566E267835BAF87E(iLocal_179) != 4)
			{
				unk_0x1ABC36611CBE0E84(iLocal_179, 0f, 0, 0);
				unk_0x046ED2CF120C8949(iLocal_179, 4, 0, 1);
			}
		}
		if (unk_0x36CDBD83DF514AC4(iLocal_180))
		{
			if (unk_0x566E267835BAF87E(iLocal_180) != 3)
			{
				unk_0x046ED2CF120C8949(iLocal_180, 3, 0, 1);
			}
		}
		if (unk_0x36CDBD83DF514AC4(iLocal_181))
		{
			if (unk_0x566E267835BAF87E(iLocal_181) != 3)
			{
				unk_0x046ED2CF120C8949(iLocal_181, 3, 0, 1);
			}
		}
		if (!unk_0x36CDBD83DF514AC4(iLocal_182))
		{
			unk_0x1D8D48272A2B8F0F(iLocal_182, joaat("prop_bh1_48_gate_1"), -8489343f, 179.3079f, 70.0247f, 1, 1, 0);
		}
		if (unk_0x36CDBD83DF514AC4(iLocal_182))
		{
			if (unk_0x66A61623D480DB63(iLocal_182) != 0f || unk_0x566E267835BAF87E(iLocal_182) != 4)
			{
				unk_0x1ABC36611CBE0E84(iLocal_182, 0f, 0, 0);
				unk_0x046ED2CF120C8949(iLocal_182, 4, 0, 1);
			}
		}
		if (Local_183[0 /*7*/].f_5 != -2097039789)
		{
			Local_183[0 /*7*/] = { func_807(38) };
			Local_183[1 /*7*/] = { func_807(39) };
			Local_183[2 /*7*/] = { func_807(41) };
			Local_183[3 /*7*/] = { func_807(42) };
			Local_183[4 /*7*/] = { func_807(43) };
			Local_183[5 /*7*/] = { func_807(44) };
			Local_183[6 /*7*/] = { func_807(46) };
		}
		iVar3 = 0;
		while (iVar3 < Local_183)
		{
			if (unk_0x36CDBD83DF514AC4(Local_183[iVar3 /*7*/].f_5))
			{
				if (unk_0x66A61623D480DB63(Local_183[iVar3 /*7*/].f_5) != 0f || unk_0x566E267835BAF87E(Local_183[iVar3 /*7*/].f_5) != 4)
				{
					unk_0x1ABC36611CBE0E84(Local_183[iVar3 /*7*/].f_5, 0f, 0, 0);
					unk_0x046ED2CF120C8949(Local_183[iVar3 /*7*/].f_5, 4, 0, 1);
				}
			}
			iVar3++;
		}
		if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -160.9063f, -1036.916f, 41.27324f, 95.39471f, -1132.606f, 18.23477f, 280f, 0, 1, 0) || (iLocal_236 >= 8 && iLocal_236 <= 9))
		{
			if (iLocal_159 == 0)
			{
				iLocal_159 = unk_0x30B9FCF52BAAEB11(vLocal_112, "v_carshowroom");
			}
			else if (iLocal_87 == 0)
			{
				unk_0xDDF57F769FD85704(iLocal_159);
				if (!unk_0x5FC25A9F19EB39FA(iLocal_159))
				{
				}
				else
				{
					iLocal_87 = 1;
				}
			}
		}
		else if (!unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -255.9818f, -1028.399f, 42.45829f, 135.9063f, -1172.973f, 21.36604f, 280f, 0, 1, 0))
		{
			if (iLocal_159 != 0)
			{
				if (iLocal_87 == 1)
				{
					unk_0x2F7BF094F3C2A257(iLocal_159);
					iLocal_87 = 0;
				}
			}
		}
		if (iLocal_159 != 0)
		{
			if (iLocal_236 > 7)
			{
				if (!func_815("ShowroomShutter"))
				{
					func_802(179, 1, 1, 1, 0);
					func_809("ShowroomShutter", 1);
				}
			}
		}
		if (unk_0x65F35477FEAD6F0F(unk_0x33CD235DF1E6A94E()) == iLocal_158)
		{
			if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -802.7543f, 167.4378f, 75.59586f, -804.5815f, 172.115f, 79.2408f, 3f, 0, 1, 0))
			{
				unk_0x41E36A540F8F323F(unk_0x33CD235DF1E6A94E(), 102, 1);
				unk_0x3FD9339AA95E323F(0, 22, 1);
			}
		}
		if (((((unk_0x4132E5728A18CB78(-850.43f, 139.94f, 61.96f, -770.38f, 191.25f, 74.2f, 1) && !unk_0x105CB7A75E93DC77(unk_0x33CD235DF1E6A94E())) && !unk_0xB15E06E3E9C9AEA5(unk_0x33CD235DF1E6A94E())) && func_801(unk_0x33CD235DF1E6A94E())) || unk_0xCF50815BECDF585D(-1, -848.4577f, 168.8738f, 58.59357f, -768.443f, 168.8347f, 93.19075f, 55f)) || ((unk_0x765F6FEEFF39224F(iLocal_139) && !unk_0xD62C4419A41F106A(iLocal_139, 0)) && unk_0xFC5B5CFF164247DB(iLocal_139)))
		{
			iLocal_237 = 17;
			func_788();
		}
		if (unk_0x765F6FEEFF39224F(func_787(0)))
		{
			unk_0xCBDEE923F851F500(func_787(0), 0);
		}
		if (unk_0x765F6FEEFF39224F(func_787(1)))
		{
			unk_0xCBDEE923F851F500(func_787(1), 0);
		}
		if (iLocal_85 == 0 || iLocal_456 == 1)
		{
			unk_0xDFF589A2149528CE(false);
			unk_0x35675D19812BDF22(0);
		}
		else
		{
			unk_0xDFF589A2149528CE(true);
			unk_0x35675D19812BDF22(1);
		}
		if (iLocal_236 == 2 || iLocal_236 == 3)
		{
			if (unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), -843.0493f, 172.7284f, 68.7735f, 150f, 150f, 150f, 0, 1, 0))
			{
				if (func_812(joaat("s_m_m_gardener_01")))
				{
					if (!unk_0x765F6FEEFF39224F(iLocal_136))
					{
						func_786(&iLocal_136, joaat("s_m_m_gardener_01"), -835.3764f, 184.7189f, 70.8434f, 331.4128f, 1);
						unk_0x71CA80D41E1338B4(joaat("s_m_m_gardener_01"));
						unk_0x7FC2040EB34E0E31(iLocal_136, 101, 0);
						unk_0x493912B04EA384EB(iLocal_136, 101);
						unk_0x93AA93DA1B137032(iLocal_136, 0, 0, 1, 0);
						unk_0x93AA93DA1B137032(iLocal_136, 3, 1, 0, 0);
						unk_0x93AA93DA1B137032(iLocal_136, 4, 1, 1, 0);
						unk_0x93AA93DA1B137032(iLocal_136, 8, 1, 0, 0);
						unk_0x93AA93DA1B137032(iLocal_136, 10, 2, 0, 0);
						unk_0x73D993BCA1CEC58D(iLocal_136, 0, 0, 1, false);
						unk_0x95EB51AE3552BCAC(iLocal_136, 1);
						unk_0x5F9955D3E93BCC84(iLocal_136, 10f);
						func_785(iLocal_136, 40f, 10f, 30f, -80f, 80f);
						unk_0x5FEE418CE11E6DDE(iLocal_136, 42, true);
						func_784(&uLocal_288, 2, iLocal_136, "GARDENER", 0, 1);
						iLocal_169 = unk_0x7CA67831169E8AA6(joaat("prop_leaf_blower_01"), -837.1777f, 181.6656f, 70.1302f, 1, true, 0);
						unk_0x2F0A6390D863D337(iLocal_169, iLocal_136, unk_0xFCAF61876D23D31D(iLocal_136, 28422), vLocal_101, vLocal_101, 0, 0, 0, 0, 2, 1);
					}
					else
					{
						if (unk_0x9F4718FD61B07058(iLocal_169))
						{
							if (iLocal_188 == -1)
							{
								if (unk_0xBE799439B122CA21("GARDEN_LEAF_BLOWER", 0, -1))
								{
									iLocal_188 = unk_0x8CCC0A0504C52531();
									unk_0xE9739440E5BF08EE(iLocal_188, "GARDENING_LEAFBLOWER_ANIM_TRIGGERED", iLocal_169, 0, 0, 0);
								}
							}
							if (!unk_0xC2FDDE313D5A5398(iLocal_189))
							{
								unk_0x13157A56158089D8();
								if (unk_0xD3957903B061A8C8())
								{
									iLocal_189 = unk_0x36F0667378D07B9C("ent_anim_leaf_blower", iLocal_169, 1f, 0f, -0.25f, 0f, -45f, 0f, 1f, 0, 0, 0);
								}
							}
						}
						if (unk_0x765F6FEEFF39224F(iLocal_136) && unk_0x73DA1542B2F0C458())
						{
							if (unk_0xBC2FC12AD0FBF72E(iLocal_136))
							{
								if (func_783("ARM3_GARDEN", 0, 0))
								{
									unk_0xD362430CD61A9B08();
								}
							}
							if (!unk_0xBC2FC12AD0FBF72E(iLocal_136))
							{
								if (func_782(sLocal_121))
								{
									if (!unk_0x1CE8F0A08E65CA6A(iLocal_136, sLocal_121, "Blower_Idle_a", 3) && unk_0xD76D6BCC14B95CE1(iLocal_136, 242628503) != 1)
									{
										unk_0x108754262311D34F(iLocal_136, sLocal_121, "Blower_Idle_a", 2f, -2f, -1, 8193, 0, 0, 0, 0);
									}
								}
								if (!unk_0xCDA107F8BEE35F40(sLocal_120))
								{
									unk_0x1FCB57E33CEA24E8(sLocal_120);
								}
								if (func_782(sLocal_121) && unk_0xCDA107F8BEE35F40(sLocal_120))
								{
									if (func_815("ARM3HLP_SNEAK"))
									{
										if (!func_815("GardenerAdvance"))
										{
											if (unk_0xE3903F59E2F22150() > iLocal_58)
											{
												unk_0x511559F67646F1C0(iLocal_136, sLocal_120, 1048576000);
												unk_0x6C3D450F961FEA9B(iLocal_136, sLocal_120);
												unk_0x99414FB2D30425C1(&uLocal_157);
												unk_0x7E268975AF5EA74F(0, -827.8197f, 191.4635f, 72.2064f, 0.5f, -1, 0.25f, 0, 299.3068f);
												unk_0x108754262311D34F(0, sLocal_121, "Blower_Idle_a", 2f, -2f, -1, 8193, 0, 0, 0, 0);
												unk_0xC734F59A13D39AEF(uLocal_157);
												unk_0x13A2D602CD10CBAC(iLocal_136, uLocal_157);
												unk_0xA7A57E7757ED035E(&uLocal_157);
												func_809("GardenerAdvance", 1);
											}
										}
									}
								}
							}
							if (func_782(sLocal_121))
							{
								if (!func_815("ACT_stealth_kill_a_gardener"))
								{
									unk_0xFB3EAFBC80EA7108(784239871, 1);
									func_809("ACT_stealth_kill_a_gardener", 1);
								}
							}
							if (unk_0x63E238348058FF52(unk_0x95B959F18401C09A()))
							{
								iLocal_58 = unk_0xE3903F59E2F22150() + 3000;
							}
							if (unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), unk_0xFBB1F99A825CAB09(iLocal_136, 0), 8f, 8f, 2f, 0, 1, 0))
							{
								unk_0xC4A347124F39D998(unk_0x33CD235DF1E6A94E(), iLocal_136, 3000, 0, 2);
							}
							if ((unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -847.8129f, 182.998f, 66.36266f, -811.2782f, 180.2509f, 81.59295f, 30f, 0, 1, 0) || unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -843.9734f, 159.8833f, 65.3092f, -809.6868f, 159.1634f, 76.78688f, 22f, 0, 1, 0)) || unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -796.666f, 190.5562f, 71.83492f, -819.0549f, 191.7352f, 84.2254f, 7f, 0, 1, 0))
							{
								unk_0x372667969DF165E8();
								if ((unk_0x105CB7A75E93DC77(unk_0x33CD235DF1E6A94E()) || unk_0xB15E06E3E9C9AEA5(unk_0x33CD235DF1E6A94E())) || !func_801(unk_0x33CD235DF1E6A94E()))
								{
									unk_0x877EFFFA3185C8EF(unk_0x95B959F18401C09A(), 28);
								}
								if (unk_0xBC2FC12AD0FBF72E(iLocal_136) || unk_0xFBEC827720F84540(iLocal_136, 287195044))
								{
									func_781(&iLocal_145);
									unk_0x35F11A916FDFCF32(iLocal_169, 1, 0);
									if (unk_0xC2FDDE313D5A5398(iLocal_189))
									{
										unk_0x91F3E4311D34B364(iLocal_189, 0);
									}
									if (iLocal_188 != -1)
									{
										unk_0xCBE6AF58552C63B2(iLocal_188);
										unk_0x44D426446FAF55FB(iLocal_188);
										iLocal_188 = -1;
									}
									func_780(29);
									func_809("GardenerTakedown", 1);
								}
								if (!unk_0xE38E3CF1625A4145(iLocal_145) && !func_815("GardenerTakedown"))
								{
									func_778(&iLocal_145, &iLocal_136, 1);
								}
								if (unk_0xC408CC95C7202D67(iLocal_136) != iLocal_197)
								{
									unk_0x0648A75D3F60E864(iLocal_136, iLocal_197);
								}
								if (!unk_0xBC2FC12AD0FBF72E(iLocal_136))
								{
									if (!func_815("GardenerAlert"))
									{
										if (!func_815("GardenerTakedown") || unk_0x9F4718FD61B07058(iLocal_169))
										{
											if (((((unk_0x71E0DAA57FE7D5C7(iLocal_136, 0) || unk_0x3AF2B3B68DD52355(iLocal_136)) || (unk_0xDF201DA86440289A(unk_0x95B959F18401C09A(), iLocal_136) && unk_0xE3903F59E2F22150() > iLocal_58)) || unk_0xF152E000CAF1FFFF(iLocal_136) != 0) || unk_0xD82CBCB7E04DDA8A(iLocal_136)) || (!unk_0x1CE8F0A08E65CA6A(iLocal_136, sLocal_121, "Blower_Idle_a", 3) && unk_0xD76D6BCC14B95CE1(iLocal_136, 242628503) != 1))
											{
												func_809("ARM3_GARDEN", 0);
												if ((func_776() % 2) == 0)
												{
													func_774("ARM3_GARDEN", 7, 1, 0);
												}
												else
												{
													func_774("ARM3_GARDEN2", 7, 1, 0);
												}
												func_809("ARM3_GARDEN", 1);
												unk_0xED68CDDDE25A144E(iLocal_136);
												unk_0xC4A347124F39D998(iLocal_136, unk_0x33CD235DF1E6A94E(), 1000, 1024, 2);
												unk_0x99414FB2D30425C1(&uLocal_157);
												unk_0x976357E602648DDF(0, 1);
												unk_0xF0122FB9444D4BC7(0, unk_0x33CD235DF1E6A94E());
												unk_0xC734F59A13D39AEF(uLocal_157);
												unk_0x13A2D602CD10CBAC(iLocal_136, uLocal_157);
												unk_0xA7A57E7757ED035E(&uLocal_157);
												while ((((unk_0x765F6FEEFF39224F(iLocal_136) && !unk_0xBC2FC12AD0FBF72E(iLocal_136)) && !unk_0x71E0DAA57FE7D5C7(iLocal_136, 0)) && !unk_0x3AF2B3B68DD52355(iLocal_136)) && unk_0xD76D6BCC14B95CE1(iLocal_136, 242628503) != 1)
												{
													func_773(0);
												}
												if ((unk_0x765F6FEEFF39224F(iLocal_136) && !unk_0xBC2FC12AD0FBF72E(iLocal_136)) && unk_0x1CE8F0A08E65CA6A(iLocal_136, sLocal_121, "Blower_Idle_a", 3))
												{
													unk_0xCCAF0916949DD646(iLocal_136, sLocal_121, "Blower_Idle_a", -8f);
												}
												unk_0x35F11A916FDFCF32(iLocal_169, 1, 0);
												if (unk_0xC2FDDE313D5A5398(iLocal_189))
												{
													unk_0x91F3E4311D34B364(iLocal_189, 0);
												}
												if (iLocal_188 != -1)
												{
													unk_0xCBE6AF58552C63B2(iLocal_188);
													unk_0x44D426446FAF55FB(iLocal_188);
													iLocal_188 = -1;
												}
												iLocal_59 = unk_0xE3903F59E2F22150() + 2000;
												if (unk_0x765F6FEEFF39224F(iLocal_136) && unk_0xBC2FC12AD0FBF72E(iLocal_136))
												{
													unk_0xB5D26BFA756D0D11(5.5f, 2f, 3);
												}
												func_809("GardenerAlert", 1);
											}
										}
									}
									else if (unk_0xE3903F59E2F22150() > iLocal_59)
									{
										func_773(500);
										iLocal_237 = 17;
										func_788();
									}
								}
							}
							else if (!unk_0xBC2FC12AD0FBF72E(iLocal_136))
							{
								if (unk_0xC408CC95C7202D67(iLocal_136) == iLocal_197)
								{
									if (unk_0x71E0DAA57FE7D5C7(iLocal_136, 0))
									{
										unk_0xED68CDDDE25A144E(iLocal_136);
									}
									unk_0x0648A75D3F60E864(iLocal_136, iLocal_196);
								}
							}
						}
					}
				}
			}
		}
		if (unk_0x765F6FEEFF39224F(uLocal_248[0]) && !unk_0xBC2FC12AD0FBF72E(uLocal_248[0]))
		{
			if ((((((unk_0x1CE8F0A08E65CA6A(uLocal_248[0], sLocal_115, "michaelappears_loop_michael", 3) && unk_0x204DEACC5BECF723(uLocal_248[0], sLocal_115, "michaelappears_loop_michael") >= 1f) || (unk_0x1CE8F0A08E65CA6A(uLocal_248[0], sLocal_115, "michaelappears_loop2_michael", 3) && unk_0x204DEACC5BECF723(uLocal_248[0], sLocal_115, "michaelappears_loop2_michael") >= 1f)) || (unk_0x1CE8F0A08E65CA6A(uLocal_248[0], sLocal_115, "michaelappears_loop3_michael", 3) && unk_0x204DEACC5BECF723(uLocal_248[0], sLocal_115, "michaelappears_loop3_michael") >= 1f)) || (unk_0x1CE8F0A08E65CA6A(uLocal_248[0], sLocal_115, "michaelappears_loop4_michael", 3) && unk_0x204DEACC5BECF723(uLocal_248[0], sLocal_115, "michaelappears_loop4_michael") >= 1f)) || (unk_0x1CE8F0A08E65CA6A(uLocal_248[0], sLocal_115, "michaelappears_loop5_michael", 3) && unk_0x204DEACC5BECF723(uLocal_248[0], sLocal_115, "michaelappears_loop5_michael") >= 1f)) || (unk_0x1CE8F0A08E65CA6A(uLocal_248[0], sLocal_115, "michaelappears_loop6_michael", 3) && unk_0x204DEACC5BECF723(uLocal_248[0], sLocal_115, "michaelappears_loop6_michael") >= 1f))
			{
				iVar4 = unk_0x9EC3B269A34A2BEE(0, 6);
				if (iVar4 == 0)
				{
					unk_0x108754262311D34F(uLocal_248[0], sLocal_115, "michaelappears_loop_michael", 4f, -4f, -1, 2, 0, 0, 0, 0);
				}
				else if (iVar4 == 1)
				{
					unk_0x108754262311D34F(uLocal_248[0], sLocal_115, "michaelappears_loop2_michael", 4f, -4f, -1, 2, 0, 0, 0, 0);
				}
				else if (iVar4 == 2)
				{
					unk_0x108754262311D34F(uLocal_248[0], sLocal_115, "michaelappears_loop3_michael", 4f, -4f, -1, 2, 0, 0, 0, 0);
				}
				else if (iVar4 == 3)
				{
					unk_0x108754262311D34F(uLocal_248[0], sLocal_115, "michaelappears_loop4_michael", 4f, -4f, -1, 2, 0, 0, 0, 0);
				}
				else if (iVar4 == 4)
				{
					unk_0x108754262311D34F(uLocal_248[0], sLocal_115, "michaelappears_loop5_michael", 4f, -4f, -1, 2, 0, 0, 0, 0);
				}
				else if (iVar4 == 5)
				{
					unk_0x108754262311D34F(uLocal_248[0], sLocal_115, "michaelappears_loop6_michael", 4f, -4f, -1, 2, 0, 0, 0, 0);
				}
			}
		}
		if (func_772() && iLocal_236 == 7)
		{
			if (unk_0x765F6FEEFF39224F(uLocal_248[0]))
			{
				if (((((((unk_0x1CE8F0A08E65CA6A(uLocal_248[0], sLocal_115, "michaelappears_intro_michael", 3) && unk_0x204DEACC5BECF723(uLocal_248[0], sLocal_115, "michaelappears_intro_michael") > 0.75f) || unk_0x1CE8F0A08E65CA6A(uLocal_248[0], sLocal_115, "michaelappears_loop_michael", 3)) || unk_0x1CE8F0A08E65CA6A(uLocal_248[0], sLocal_115, "michaelappears_loop2_michael", 3)) || unk_0x1CE8F0A08E65CA6A(uLocal_248[0], sLocal_115, "michaelappears_loop3_michael", 3)) || unk_0x1CE8F0A08E65CA6A(uLocal_248[0], sLocal_115, "michaelappears_loop4_michael", 3)) || unk_0x1CE8F0A08E65CA6A(uLocal_248[0], sLocal_115, "michaelappears_loop5_michael", 3)) || unk_0x1CE8F0A08E65CA6A(uLocal_248[0], sLocal_115, "michaelappears_loop6_michael", 3))
				{
					if (func_815("ARM3_DRIV") && unk_0xE3903F59E2F22150() > iLocal_56)
					{
						if (!func_815("ARM3_STOP"))
						{
							if (!unk_0x786AF4A44E1B5B4B(&Local_114))
							{
								if ((!unk_0xC4B7D5901EDA35B5() || unk_0x37FBC14B2F5D54DB(203) == 0) && !func_771())
								{
									if (unk_0x71D489B4139EA15B(iLocal_140, 90f) && unk_0x156573D1AADB54ED(iLocal_140))
									{
										StringCopy(&Local_114, func_770(), 24);
									}
								}
							}
						}
						if ((((((!func_768("ARM3_PHONE") && !func_768("ARM3_CRASH")) && !func_768("ARM3_FLIP")) && !func_768("ARM3_HIT")) && !func_768("ARM3_ROUTE")) && !func_768("ARM3_GOGO")) && !func_768("ARM3_GETOUT"))
						{
							if ((unk_0xE80842D7B53F8525(iLocal_140) < iLocal_60 || unk_0x660BC449336F0502(iLocal_140) < fLocal_61) || unk_0x787CBB9DB6BA1A49(iLocal_140) < fLocal_62)
							{
								if (func_768("ARM3_DRIV") || func_768(&Local_114))
								{
									Local_114 = { func_767() };
								}
								unk_0x41EDD559141FF338(func_787(0), "ARM3_BGAA", "MICHAEL");
								iLocal_60 = unk_0xE80842D7B53F8525(iLocal_140);
								fLocal_61 = unk_0x660BC449336F0502(iLocal_140);
								fLocal_62 = unk_0x787CBB9DB6BA1A49(iLocal_140);
								iLocal_56 = unk_0xE3903F59E2F22150() + 12000;
							}
							if (!unk_0x71D489B4139EA15B(iLocal_140, 90f))
							{
								if (func_768("ARM3_DRIV") || func_768(&Local_114))
								{
									Local_114 = { func_767() };
								}
								unk_0x41EDD559141FF338(func_787(0), "ARM3_BPAA", "MICHAEL");
								iLocal_56 = unk_0xE3903F59E2F22150() + 12000;
							}
							iVar5 = 0;
							iVar6 = func_766();
							iVar5 = 0;
							while (iVar5 < unk_0x77BABFD1D75AA582(0))
							{
								iVar7 = unk_0x5487531DB7DA4AB5(0, iVar5);
								switch (iVar7)
								{
									case 140:
									case 139:
										unk_0x286A5F0670063839(0, iVar5, &iVar6, 1);
										if (unk_0x765F6FEEFF39224F(iVar6))
										{
											if (unk_0x068481DAF84B9654(iVar6))
											{
												if (func_768("ARM3_DRIV") || func_768(&Local_114))
												{
													Local_114 = { func_767() };
												}
												unk_0x41EDD559141FF338(func_787(0), "ARM3_BHAA", "MICHAEL");
												if (iVar7 == 140)
												{
													func_765(24, 1, 0);
												}
												iLocal_56 = unk_0xE3903F59E2F22150() + 12000;
											}
										}
										break;
								}
								iVar5++;
							}
							if (!func_815("ARM3_STOP"))
							{
								if (((((unk_0x1CE8F0A08E65CA6A(uLocal_248[0], sLocal_115, "michaelappears_loop_michael", 3) || unk_0x1CE8F0A08E65CA6A(uLocal_248[0], sLocal_115, "michaelappears_loop2_michael", 3)) || unk_0x1CE8F0A08E65CA6A(uLocal_248[0], sLocal_115, "michaelappears_loop3_michael", 3)) || unk_0x1CE8F0A08E65CA6A(uLocal_248[0], sLocal_115, "michaelappears_loop4_michael", 3)) || unk_0x1CE8F0A08E65CA6A(uLocal_248[0], sLocal_115, "michaelappears_loop5_michael", 3)) || unk_0x1CE8F0A08E65CA6A(uLocal_248[0], sLocal_115, "michaelappears_loop6_michael", 3))
								{
									if (((!func_815("Destination1") && !func_815("Destination2")) && !func_815("Destination3")) && !func_815("Destination4"))
									{
										if (unk_0x8BB475EA09C9A0EB(iLocal_140) < 1f)
										{
											if (iLocal_57 == -1)
											{
												iLocal_57 = unk_0xE3903F59E2F22150() + 3000;
											}
										}
										else
										{
											iLocal_57 = -1;
										}
										if ((iLocal_57 != -1 && unk_0xE3903F59E2F22150() > iLocal_57) && !func_815("HaltVehicle"))
										{
											if (func_768("ARM3_DRIV") || func_768(&Local_114))
											{
												Local_114 = { func_767() };
											}
											unk_0x41EDD559141FF338(func_787(0), "ARM3_BJAA", "MICHAEL");
											iLocal_56 = unk_0xE3903F59E2F22150() + 12000;
										}
									}
								}
							}
							if (unk_0x5EBE50D55314CEAD(0, 75))
							{
								if (func_768("ARM3_DRIV") || func_768(&Local_114))
								{
									Local_114 = { func_767() };
								}
								unk_0x41EDD559141FF338(func_787(0), "ARM3_BKAA", "MICHAEL");
								iLocal_56 = unk_0xE3903F59E2F22150() + 12000;
							}
							if (func_764(1))
							{
								if (func_768("ARM3_DRIV") || func_768(&Local_114))
								{
									Local_114 = { func_767() };
								}
								unk_0x41EDD559141FF338(func_787(0), "ARM3_BLAA", "MICHAEL");
								func_762(0);
								func_760(1);
								iLocal_56 = unk_0xE3903F59E2F22150() + 12000;
							}
						}
					}
				}
			}
		}
		if (func_759() == 0)
		{
			func_758(unk_0x33CD235DF1E6A94E(), 22);
		}
		if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
		{
			func_758(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), 23);
			func_757(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), 26);
		}
		else
		{
			func_758(0, 23);
			func_757(0, 26);
		}
		unk_0x4AE93B307FDB2941(unk_0x95B959F18401C09A());
		unk_0x877EFFFA3185C8EF(unk_0x95B959F18401C09A(), 5);
		unk_0x877EFFFA3185C8EF(unk_0x95B959F18401C09A(), 2);
		unk_0x877EFFFA3185C8EF(unk_0x95B959F18401C09A(), 3);
		unk_0x877EFFFA3185C8EF(unk_0x95B959F18401C09A(), 4);
		func_753();
		func_752();
		switch (iLocal_236)
		{
			case 0:
				func_670();
				break;
			
			case 1:
				if (func_782(sLocal_117))
				{
					func_669();
				}
				break;
			
			case 2:
				if (func_782(sLocal_117))
				{
					func_612();
				}
				break;
			
			case 3:
				if ((func_812(joaat("bjxl")) && func_812(joaat("bison3"))) && func_782(sLocal_115))
				{
					func_603();
				}
				break;
			
			case 4:
				if ((((func_812(func_835(14)) && func_812(func_835(15))) && func_782(sLocal_115)) && func_782(sLocal_118)) && func_782(sLocal_116))
				{
					func_575();
				}
				break;
			
			case 5:
				if (((((func_812(func_835(14)) && func_812(func_835(15))) && func_812(func_835(17))) && func_812(func_835(25))) && func_782(sLocal_115)) && func_782(sLocal_116))
				{
					func_556();
				}
				break;
			
			case 6:
				if (func_812(func_555(0)) && func_782(sLocal_115))
				{
					func_331();
				}
				break;
			
			case 7:
				if (func_782(sLocal_115))
				{
					func_330();
				}
				func_327();
				break;
			
			case 8:
				func_323();
				break;
			
			case 9:
				if (func_782(sLocal_115) && func_812(joaat("prop_showroom_glass_1b")))
				{
					func_280();
				}
				break;
			
			case 10:
				if (func_812(func_835(18)) && func_782(sLocal_123))
				{
					func_273();
				}
				break;
			
			case 11:
				if (func_782(sLocal_119))
				{
					func_6();
				}
				break;
			
			case 12:
				func_1();
				break;
			
			case 13:
				func_788();
				break;
		}
		wait(0);
	}
}

void func_1()
{
	if (unk_0xBB5E373390A5F824())
	{
		unk_0xACCDA78123DB57B0(800);
	}
	func_822();
	if (unk_0x765F6FEEFF39224F(func_787(0)) && !unk_0xD62C4419A41F106A(func_787(0), 0))
	{
		unk_0x697EBA5CF1A6AB57(func_787(0), iLocal_195, 120, false, true);
		unk_0x274C6068B660FFB4(func_787(0), joaat("weapon_unarmed"), true);
	}
	if (unk_0x765F6FEEFF39224F(iLocal_142[0]) && !unk_0xD62C4419A41F106A(iLocal_142[0], 0))
	{
		unk_0xD303E20CB0AE4AD0(iLocal_142[0], 1);
		unk_0x9152A6430680BF0A(iLocal_142[0], 1);
	}
	if (unk_0x765F6FEEFF39224F(iLocal_142[1]) && !unk_0xD62C4419A41F106A(iLocal_142[1], 0))
	{
		unk_0xD303E20CB0AE4AD0(iLocal_142[1], 1);
		unk_0x9152A6430680BF0A(iLocal_142[1], 1);
	}
	if (unk_0x765F6FEEFF39224F(iLocal_142[2]) && !unk_0xD62C4419A41F106A(iLocal_142[2], 0))
	{
		unk_0xD303E20CB0AE4AD0(iLocal_142[2], 1);
		unk_0x9152A6430680BF0A(iLocal_142[2], 1);
	}
	if (unk_0x765F6FEEFF39224F(iLocal_142[3]) && !unk_0xD62C4419A41F106A(iLocal_142[3], 0))
	{
		unk_0xD303E20CB0AE4AD0(iLocal_142[3], 1);
		unk_0x9152A6430680BF0A(iLocal_142[3], 1);
	}
	func_2(0, 0);
	iLocal_88 = 1;
	func_873(0);
}

void func_2(bool bParam0, int iParam1)
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
		if ((func_5(0) && Global_71836.f_1 == 1) && func_4(Global_71836))
		{
		}
		else
		{
			Global_56494 = 1;
		}
	}
	if (Global_106565.f_9079 || func_5(0))
	{
		iVar0 = func_3();
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

int func_3()
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

int func_4(int iParam0)
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

bool func_5(bool bParam0)
{
	if (!bParam0 && unk_0x1BCDA92AD0A7835B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x0E4018692D92041D(Global_71838, 0);
}

void func_6()
{
	vector3 vVar0;
	vector3 vVar1;
	int iVar2;
	
	if (func_272())
	{
		func_211(5, "stageBeatDown", 1, 0, 0, 1);
		func_210(0, 1);
		func_209(115, 1);
		func_208(1);
		func_207(unk_0x95B959F18401C09A(), 1, 0);
		if (iLocal_66)
		{
			unk_0x816788E0CA50BB83(iLocal_65);
			unk_0x6BD09AFA46A11CA2(0, iLocal_67);
			iLocal_66 = 0;
		}
		iLocal_85 = 1;
		unk_0x99CB6BCAD3019AAF(0);
		func_760(1);
		if (unk_0x765F6FEEFF39224F(iLocal_140) && !unk_0xD62C4419A41F106A(iLocal_140, 0))
		{
			unk_0xD303E20CB0AE4AD0(iLocal_140, 1);
		}
		if (func_759() != 0)
		{
			func_202(&uLocal_248, 0);
			func_138(&uLocal_248, 1, 1, 0);
		}
		func_773(0);
		unk_0xCBE6E2953ED9652D(unk_0x95B959F18401C09A());
		unk_0x4A852F02088ECC9D(unk_0x33CD235DF1E6A94E(), 0);
		unk_0x92A2FAFA76B7EC9B(unk_0x33CD235DF1E6A94E(), 1, -1, 0);
		func_122(unk_0x33CD235DF1E6A94E(), 1, 0);
		unk_0x274C6068B660FFB4(unk_0x33CD235DF1E6A94E(), joaat("weapon_unarmed"), true);
		unk_0x4D5F3407F1F37E28(unk_0x33CD235DF1E6A94E(), 0, 0, 0, 0, 0, 0, 0, 0);
		func_121(&(uLocal_248[1]));
		unk_0x34A51926277F67BC(iLocal_135, 2);
		func_120(iLocal_135, 1);
		unk_0x141A3DB3233829B3(iLocal_135, 1);
		if (!unk_0xD62C4419A41F106A(iLocal_135, 0))
		{
			unk_0x9611832841071B69(iLocal_135, false);
		}
		func_778(&iLocal_152, &iLocal_135, 1);
		unk_0x3427206E004F448F("Armenian_3_MCS_9_concat", 8);
		if (!unk_0x7C71681384076318("ARM_3_BEAT_DOWN"))
		{
			unk_0xDEFB5E2E5CBD460A("ARM_3_BEAT_DOWN");
		}
		if (iLocal_184 == -1)
		{
			iLocal_184 = unk_0x6E6EB18FDAB9A074(-53.73703f, -1096.984f, 26.49465f, 1.25f, 0.5f, 1f, 30f, 0, 7);
		}
		unk_0x73DE193A69C3D683(-57.15079f, -1097.264f, 25.42232f, 3f);
		unk_0x73DE193A69C3D683(-51.97326f, -1093.51f, 25.42232f, 3.5f);
		if (!func_815("WindowSmashed"))
		{
			unk_0x5B1DF403216CD477("V_CARSHOWROOM_PS_WINDOW_UNBROKEN", "V_CARSHOWROOM_PS_WINDOW_BROKEN");
			func_809("WindowSmashed", 1);
		}
		unk_0xD875615F72CD34A6(0);
		unk_0x4B06B5746CBEC99F(0f);
		unk_0x88246B349FCC2454(-57.6017f, -1095.091f, 25.4343f, 500f, 0);
		unk_0xA53C1C92EE35EC0E(1, 0);
		unk_0xA53C1C92EE35EC0E(10, 0);
		unk_0xA53C1C92EE35EC0E(9, 0);
		unk_0xA53C1C92EE35EC0E(2, 0);
		unk_0xA53C1C92EE35EC0E(3, 0);
		unk_0xA53C1C92EE35EC0E(4, 0);
		unk_0xA53C1C92EE35EC0E(5, 0);
		unk_0xDF9905432E81DC6E(unk_0x95B959F18401C09A(), 0);
		unk_0x379324D4CAF6C2D1(0);
		unk_0x41E36A540F8F323F(iLocal_135, 149, 1);
		unk_0x41E36A540F8F323F(iLocal_135, 69, 1);
		bLocal_460 = false;
		if (func_119())
		{
			if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
			{
				unk_0xF70578F5CD9822CB(unk_0x33CD235DF1E6A94E(), true);
			}
			if (!unk_0xF0D230FB550CD6EB(iLocal_135, 0))
			{
				unk_0xF70578F5CD9822CB(iLocal_135, true);
			}
			if (iLocal_87 == 0)
			{
				iLocal_159 = unk_0x30B9FCF52BAAEB11(vLocal_112, "v_carshowroom");
				unk_0xDDF57F769FD85704(iLocal_159);
				while (!unk_0x5FC25A9F19EB39FA(iLocal_159))
				{
					func_773(0);
				}
				iLocal_87 = 1;
			}
			if (!bLocal_92)
			{
				func_118(-58.1243f, -1095.056f, 25.4345f, 1101004800);
			}
			if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
			{
				unk_0xF70578F5CD9822CB(unk_0x33CD235DF1E6A94E(), false);
			}
			if (!unk_0xF0D230FB550CD6EB(iLocal_135, 0))
			{
				unk_0xF70578F5CD9822CB(iLocal_135, false);
			}
			unk_0x31826EF4A8BC8E9F(unk_0x33CD235DF1E6A94E());
			func_117(unk_0x33CD235DF1E6A94E(), -58.1243f, -1095.056f, 25.4345f, 314.025f, 1);
			func_116(iLocal_140, -55.8188f, -1096.415f, 25.4344f, 305.0423f);
			unk_0xF70578F5CD9822CB(iLocal_140, true);
			unk_0xC7E6A5D90DED6E0B((func_115(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 1), -56.13f, -1097.6f, 25.16f) - unk_0xC472E34C8FBEC678(unk_0x33CD235DF1E6A94E())));
			uLocal_235 = unk_0x4ACCC545ABA180AC(-56.13f, -1097.6f, 25.16f, 10f, "DES_Showroom");
			while (!unk_0xC0832B9258378F00(uLocal_235))
			{
				uLocal_235 = unk_0x4ACCC545ABA180AC(-56.13f, -1097.6f, 25.16f, 10f, "DES_Showroom");
				func_773(0);
			}
			if (unk_0xC0832B9258378F00(uLocal_235))
			{
				if (unk_0x59AECBDFE1CC0576(uLocal_235) != 10)
				{
					unk_0xED0F188B4F015CBB(uLocal_235, 9);
				}
			}
			while (!unk_0x7B3767E83E6F888A(func_787(0)))
			{
				func_773(0);
			}
			func_773(500);
			func_117(iLocal_135, -55.6653f, -1093.487f, 25.4343f, 125.882f, 1);
			unk_0x576963EA28E5BD52(iLocal_135, iLocal_159);
			unk_0x4A852F02088ECC9D(iLocal_135, 1);
			unk_0x0648A75D3F60E864(iLocal_135, iLocal_197);
			unk_0x083F9B3B112E951F(iLocal_135, 1);
			unk_0x40C1F3276801777F(iLocal_135, func_787(0), 0f, -1f, 0f, 0);
			unk_0x880B00F3FAE4C022(iLocal_135, 0, 0);
			unk_0x9611832841071B69(iLocal_135, false);
			unk_0x7FC2040EB34E0E31(iLocal_135, 450, 0);
			unk_0x493912B04EA384EB(iLocal_135, 450);
			func_117(unk_0x33CD235DF1E6A94E(), -58.1243f, -1095.056f, 25.4345f, 314.025f, 1);
			unk_0x274C6068B660FFB4(unk_0x33CD235DF1E6A94E(), joaat("weapon_unarmed"), true);
			unk_0x40C1F3276801777F(func_787(0), iLocal_135, 0f, -1f, 0f, 0);
			unk_0x880B00F3FAE4C022(func_787(0), 0, 0);
			unk_0xC7E6A5D90DED6E0B(0f);
			unk_0xD6EDA274D82E8678(-10f, 1065353216);
			unk_0xB5D26BFA756D0D11(3f, 4f, 3);
			func_114(18);
			func_773(500);
			if (!iLocal_93)
			{
				if (unk_0xBB5E373390A5F824())
				{
					unk_0xACCDA78123DB57B0(500);
				}
			}
		}
	}
	else
	{
		func_112("ARM3_BEAT", 7500, 1);
		if (unk_0xA812C1043FE92B58())
		{
			func_21("Michael", func_787(0), 0, 2);
			unk_0xEE199BCFFA2081A1("Siemon", iLocal_135, 0);
		}
		switch (iLocal_48)
		{
			case 0:
				if (!unk_0x286C823E0969F22A() || iLocal_93 == 1)
				{
					if (unk_0x0C49CADF3A113E49(unk_0x33CD235DF1E6A94E()))
					{
						if (!func_815("Dodged"))
						{
							func_765(28, 1, 0);
							func_809("Dodged", 1);
						}
					}
					else if (func_815("Dodged"))
					{
						func_809("Dodged", 0);
					}
					if (!bLocal_460)
					{
						if (unk_0x712B120C5A12D9F5(iLocal_135, 330))
						{
							bLocal_460 = true;
						}
					}
					else
					{
						vVar0 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 1) };
						vVar1 = { unk_0xFBB1F99A825CAB09(iLocal_135, 1) };
						if (((unk_0x16E00F066AFFEA0D(vVar0, vVar1, true) < 3.5f && vVar0.z > (vVar1.z - 0.15f)) && vVar0.z < (vVar1.z + 0.15f)) && !unk_0x112676E834169F33(unk_0x33CD235DF1E6A94E()))
						{
							bLocal_460 = false;
						}
					}
					if (((((unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -32.00801f, -1102.252f, 25.43435f, -59.3003f, -1092.674f, 29.43435f, 15f, 0, 1, 0) || unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -34.02697f, -1115.379f, 25.42233f, -29.3368f, -1102.295f, 28.92233f, 5.5f, 0, 1, 0)) || unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -40.9341f, -1086.292f, 25.42233f, -25.77692f, -1091.713f, 28.9219f, 10.5f, 0, 1, 0)) || (iLocal_159 != 0 && unk_0x65F35477FEAD6F0F(unk_0x33CD235DF1E6A94E()) == iLocal_159)) && !bLocal_460) || iLocal_93 == 1)
					{
						unk_0x0648A75D3F60E864(iLocal_135, iLocal_197);
						func_781(&iLocal_151);
						func_778(&iLocal_152, &iLocal_135, 1);
						if (func_783("ARM3_BEATBACK", 0, 0))
						{
							unk_0xD362430CD61A9B08();
						}
						if (unk_0xC408CC95C7202D67(iLocal_135) == iLocal_197)
						{
							if (unk_0xD76D6BCC14B95CE1(iLocal_135, 780511057) != 1 && unk_0xD76D6BCC14B95CE1(iLocal_135, -71340211) != 1)
							{
								unk_0xED68CDDDE25A144E(iLocal_135);
								unk_0x05AB47B112CF24AE(iLocal_135);
								unk_0x277716E9E7CC0692(iLocal_135, func_787(0), 0, 16);
							}
						}
						if (!func_815("ARM3HLP_LOCKON"))
						{
							if (!unk_0xFAC8F20FBC764F4D())
							{
								func_19("ARM3HLP_LOCKON", 1, -1);
							}
						}
						else if (!func_815("ARM3HLP_FIGHT") && !func_815("ARM3HLP_FIGHT_KM"))
						{
							if ((func_18("ARM3HLP_LOCKON") && unk_0xE3903F59E2F22150() > iLocal_55) && unk_0xC2ECB90E2DFA5802(unk_0x95B959F18401C09A(), iLocal_135))
							{
								func_17(1);
							}
							if (!unk_0xFAC8F20FBC764F4D())
							{
								if (unk_0x5D79F3D06EB318A0(0))
								{
									func_19("ARM3HLP_FIGHT_KM", 1, -1);
								}
								else
								{
									func_19("ARM3HLP_FIGHT", 1, -1);
								}
							}
						}
						else if (!func_815("ARM3HLP_FIGHT2") && !func_815("ARM3HLP_FIGHT2_KM"))
						{
							if (!unk_0xFAC8F20FBC764F4D())
							{
								if (unk_0x5D79F3D06EB318A0(0))
								{
									func_19("ARM3HLP_FIGHT2_KM", 1, -1);
								}
								else
								{
									func_19("ARM3HLP_FIGHT2", 1, -1);
								}
							}
						}
						else if (!func_815("ARM3HLP_FSTAT"))
						{
							if (!unk_0xFAC8F20FBC764F4D())
							{
								func_19("ARM3HLP_FSTAT", 1, -1);
							}
						}
						else if (!func_815("ARM3HLP_FSTAT2"))
						{
							if (!unk_0xFAC8F20FBC764F4D())
							{
								func_19("ARM3HLP_FSTAT2", 1, -1);
							}
						}
						if (timera() > 2000 && unk_0x73DA1542B2F0C458())
						{
							if ((!unk_0xC4B7D5901EDA35B5() || unk_0x37FBC14B2F5D54DB(203) == 0) && !func_771())
							{
								if (!func_815("ARM3_SLAM"))
								{
									func_774("ARM3_SLAM", 7, 1, 0);
								}
								else if (unk_0xE3903F59E2F22150() > iLocal_51)
								{
									if (iLocal_50[0] == -1)
									{
										iLocal_50[0] = 10;
									}
									else if (iLocal_50[1] == -1)
									{
										iLocal_50[1] = 5;
									}
									if (iLocal_50[iLocal_49] > 0)
									{
										if (iLocal_49 == 0)
										{
											func_774("ARM3_FIGHTSI", 7, 0, 0);
										}
										else if (iLocal_49 == 1)
										{
											func_774("ARM3_SLAM2", 7, 0, 0);
										}
										iLocal_51 = (unk_0xE3903F59E2F22150() + unk_0x9EC3B269A34A2BEE(6000, 8000));
										iLocal_50[iLocal_49] = (iLocal_50[iLocal_49] - 1);
									}
									if (iLocal_49 == 0)
									{
										iLocal_49 = 1;
									}
									else if (iLocal_49 == 1)
									{
										iLocal_49 = 0;
									}
								}
							}
						}
						if (unk_0xC7D0A132A56D5FCB())
						{
							unk_0x9611832841071B69(iLocal_135, false);
							unk_0x41E36A540F8F323F(iLocal_135, 187, 1);
							if ((unk_0xBC2FC12AD0FBF72E(iLocal_135) || unk_0xE80842D7B53F8525(iLocal_135) < 170) || iLocal_93 == 1)
							{
								iLocal_93 = 0;
								func_114(17);
								if (unk_0x7C71681384076318("ARM_3_BEAT_DOWN"))
								{
									unk_0x7CED302277C0F3D3("ARM_3_BEAT_DOWN");
								}
								unk_0xEF6624A3AFF02A02(iLocal_135, "Siemon", 0, func_835(18), 3);
								unk_0xEF6624A3AFF02A02(iLocal_140, "Jimmys_Car", 0, 0, 0);
								func_836(1, 1, 1, 0, 0, 0);
								unk_0x2EC4FFC8740228D3(16);
								func_773(0);
								unk_0xD362430CD61A9B08();
								func_15();
								unk_0xF49FF7B4A27C1B94(iLocal_140, 0, 0, 0f);
								unk_0xED68CDDDE25A144E(unk_0x33CD235DF1E6A94E());
								unk_0xED68CDDDE25A144E(iLocal_135);
								unk_0x0648A75D3F60E864(iLocal_135, iLocal_196);
								unk_0xCE04CE961AF41AB9(-58.1243f, -1095.056f, 25.4345f, 100f, 1, 0, 0, false);
								unk_0x23298AB8A7D0F403(iLocal_140, false, 0);
								unk_0xF68C9C9A191F2B68(4);
								iLocal_85 = 0;
								unk_0x92A2FAFA76B7EC9B(unk_0x33CD235DF1E6A94E(), 0, -1, 0);
								if (unk_0xBB5E373390A5F824())
								{
									unk_0xACCDA78123DB57B0(500);
								}
								func_14();
							}
						}
						else
						{
							unk_0x9611832841071B69(iLocal_135, true);
						}
						settimerb(0);
					}
					else
					{
						unk_0x9611832841071B69(iLocal_135, true);
						if (!(((unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -32.00801f, -1102.252f, 25.43435f, -59.3003f, -1092.674f, 29.43435f, 15f, 0, 1, 0) || unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -34.02697f, -1115.379f, 25.42233f, -29.3368f, -1102.295f, 28.92233f, 5.5f, 0, 1, 0)) || unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -40.9341f, -1086.292f, 25.42233f, -25.77692f, -1091.713f, 28.9219f, 10.5f, 0, 1, 0)) || (iLocal_159 != 0 && unk_0x65F35477FEAD6F0F(unk_0x33CD235DF1E6A94E()) == iLocal_159)))
						{
							func_781(&iLocal_152);
							func_11(&iLocal_151, -58.1243f, -1095.056f, 25.4345f, 0);
							if (!func_815("ARM3_BEATBACK"))
							{
								func_822();
							}
							func_112("ARM3_BEATBACK", 7500, 1);
						}
						if (unk_0xC408CC95C7202D67(iLocal_135) == iLocal_197)
						{
							unk_0xED68CDDDE25A144E(iLocal_135);
							unk_0x05AB47B112CF24AE(iLocal_135);
							unk_0x0648A75D3F60E864(iLocal_135, iLocal_196);
						}
						if (!unk_0xD4B4F68F3449CBEC(iLocal_135, -58.61181f, -1093.174f, 25.42233f, -33.44392f, -1102.318f, 29.42233f, 12.5f, 0, 1, 0))
						{
							if (unk_0xD76D6BCC14B95CE1(iLocal_135, 242628503) != 1)
							{
								unk_0x99414FB2D30425C1(&uLocal_157);
								if (unk_0xD4B4F68F3449CBEC(iLocal_135, -62.596f, -1096.74f, 25.35229f, -59.57545f, -1102.166f, 29.41263f, 5f, 0, 1, 0))
								{
									unk_0x2A25AECBD792A364(0, -59.083f, -1097.82f, 25.4225f, 2f, 20000, 1193033728, 1056964608);
								}
								unk_0x7E268975AF5EA74F(0, -54.8776f, -1092.944f, 25.4344f, 2f, 20000, 1048576000, 0, 1193033728);
								unk_0x9F878FE3F23E2C8B(0, unk_0xFBB1F99A825CAB09(func_787(0), 1), 0);
								if (func_782(sLocal_119))
								{
									unk_0x108754262311D34F(0, sLocal_119, "cmon", 1.5f, -4f, -1, 16, 0, 0, 0, 0);
								}
								unk_0xC734F59A13D39AEF(uLocal_157);
								unk_0x13A2D602CD10CBAC(iLocal_135, uLocal_157);
								unk_0xA7A57E7757ED035E(&uLocal_157);
							}
						}
						else if (unk_0xD76D6BCC14B95CE1(iLocal_135, 242628503) != 1)
						{
							if (unk_0x910FF514D7BC5674(iLocal_135, unk_0x33CD235DF1E6A94E(), 20f))
							{
								if (func_782(sLocal_119))
								{
									if (((!unk_0x1CE8F0A08E65CA6A(iLocal_135, sLocal_119, "cmon", 3) || (unk_0x1CE8F0A08E65CA6A(iLocal_135, sLocal_119, "cmon", 3) && unk_0x204DEACC5BECF723(iLocal_135, sLocal_119, "cmon") >= 0.8f)) && (!unk_0x1CE8F0A08E65CA6A(iLocal_135, sLocal_119, "areyounotman", 3) || (unk_0x1CE8F0A08E65CA6A(iLocal_135, sLocal_119, "areyounotman", 3) && unk_0x204DEACC5BECF723(iLocal_135, sLocal_119, "areyounotman") >= 0.8f))) && (!unk_0x1CE8F0A08E65CA6A(iLocal_135, sLocal_119, "lookathim", 3) || (unk_0x1CE8F0A08E65CA6A(iLocal_135, sLocal_119, "lookathim", 3) && unk_0x204DEACC5BECF723(iLocal_135, sLocal_119, "lookathim") >= 0.8f)))
									{
										iVar2 = unk_0x9EC3B269A34A2BEE(0, 3);
										if (iVar2 == 0)
										{
											unk_0x108754262311D34F(iLocal_135, sLocal_119, "cmon", 4f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0xC4A347124F39D998(iLocal_135, func_787(0), -1, 1056, 4);
										}
										else if (iVar2 == 1)
										{
											unk_0x108754262311D34F(iLocal_135, sLocal_119, "areyounotman", 4f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0xC4A347124F39D998(iLocal_135, func_787(0), -1, 1056, 4);
										}
										else if (iVar2 == 2)
										{
											unk_0x108754262311D34F(iLocal_135, sLocal_119, "lookathim", 4f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0xC4A347124F39D998(iLocal_135, func_787(0), -1, 1056, 4);
										}
									}
								}
								if (unk_0x73DA1542B2F0C458())
								{
									if ((!unk_0xC4B7D5901EDA35B5() || unk_0x37FBC14B2F5D54DB(203) == 0) && !func_771())
									{
										if (unk_0xE3903F59E2F22150() > iLocal_51)
										{
											if (unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 1), unk_0xFBB1F99A825CAB09(iLocal_135, 1), true) < 25f)
											{
												iLocal_49 = 1;
												if (iLocal_50[iLocal_49] == -1)
												{
													iLocal_50[iLocal_49] = 5;
												}
												if (iLocal_50[iLocal_49] > 0)
												{
													func_774("ARM3_SIMS", 7, 0, 0);
													iLocal_51 = (unk_0xE3903F59E2F22150() + unk_0x9EC3B269A34A2BEE(10000, 15000));
													iLocal_50[iLocal_49] = (iLocal_50[iLocal_49] - 1);
												}
											}
											else if (func_768("ARM3_SIMS"))
											{
												func_9();
											}
										}
									}
								}
							}
							else
							{
								if ((unk_0x1CE8F0A08E65CA6A(iLocal_135, sLocal_119, "cmon", 3) || unk_0x1CE8F0A08E65CA6A(iLocal_135, sLocal_119, "areyounotman", 3)) || unk_0x1CE8F0A08E65CA6A(iLocal_135, sLocal_119, "lookathim", 3))
								{
									unk_0xED68CDDDE25A144E(iLocal_135);
								}
								if ((unk_0xD76D6BCC14B95CE1(iLocal_135, 1464580341) != 0 && unk_0xD76D6BCC14B95CE1(iLocal_135, 1464580341) != 1) && unk_0xD76D6BCC14B95CE1(iLocal_135, 1464580341) != 2)
								{
									unk_0x9F878FE3F23E2C8B(iLocal_135, unk_0xFBB1F99A825CAB09(func_787(0), 1), 1000);
								}
							}
						}
						if (!func_815("WantedLevel"))
						{
							if (timerb() > 20000)
							{
								unk_0x98F04A4FFB4AD01C(unk_0x95B959F18401C09A(), 3, 0);
								unk_0x66D901F8097E8E86(unk_0x95B959F18401C09A(), 0);
								func_809("WantedLevel", 1);
							}
						}
						if (unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 1), unk_0xFBB1F99A825CAB09(iLocal_135, 1), true) > 100f)
						{
							iLocal_237 = 19;
							func_788();
						}
					}
				}
				unk_0x581AE7724ACAD410(2);
				unk_0x3FD9339AA95E323F(0, 262, 1);
				unk_0x3FD9339AA95E323F(0, 261, 1);
				unk_0x3FD9339AA95E323F(0, 37, 1);
				unk_0x9C13A903FFBEA446(unk_0x95B959F18401C09A());
				break;
			
			case 1:
				if (!func_815("ARM3HLP_LOCKON"))
				{
					if (!unk_0xFAC8F20FBC764F4D())
					{
						func_19("ARM3HLP_LOCKON", 1, -1);
					}
				}
				else if (!func_815("ARM3HLP_FIGHT") && !func_815("ARM3HLP_FIGHT_KM"))
				{
					if (!unk_0xFAC8F20FBC764F4D())
					{
						if (unk_0x5D79F3D06EB318A0(0))
						{
							func_19("ARM3HLP_FIGHT_KM", 1, -1);
						}
						else
						{
							func_19("ARM3HLP_FIGHT", 1, -1);
						}
					}
				}
				else if (!func_815("ARM3HLP_FIGHT2") && !func_815("ARM3HLP_FIGHT2_KM"))
				{
					if (!unk_0xFAC8F20FBC764F4D())
					{
						if (unk_0x5D79F3D06EB318A0(0))
						{
							func_19("ARM3HLP_FIGHT2_KM", 1, -1);
						}
						else
						{
							func_19("ARM3HLP_FIGHT2", 1, -1);
						}
					}
				}
				else if (!func_815("ARM3HLP_FSTAT"))
				{
					if (!unk_0xFAC8F20FBC764F4D())
					{
						func_19("ARM3HLP_FSTAT", 1, -1);
					}
				}
				else if (!func_815("ARM3HLP_FSTAT2"))
				{
					if (!unk_0xFAC8F20FBC764F4D())
					{
						func_19("ARM3HLP_FSTAT2", 1, -1);
					}
				}
				if (unk_0x3CA08F647CEAD042("Michael", 0))
				{
				}
				if (unk_0x3CA08F647CEAD042("Jimmys_Car", 0))
				{
					unk_0x65EE1E8C987CD1DB(iLocal_140, 1);
					unk_0x23298AB8A7D0F403(iLocal_140, false, 0);
					unk_0x76CE32E50F0C5270(iLocal_140, 1);
					unk_0xF70578F5CD9822CB(iLocal_140, true);
				}
				if (unk_0x66D6584F4E8C88AE())
				{
					unk_0x1790B816B917D10E(0, 0, 1, 0);
					iLocal_94 = 1;
				}
				if (unk_0x15661F4AC08D433A())
				{
					if (iLocal_94)
					{
						func_118(-56.83f, -1094.947f, 25.4223f, 100f);
						unk_0xACCDA78123DB57B0(1000);
					}
					iLocal_94 = 0;
					func_836(0, 1, 1, 0, 0, 0);
					func_8();
				}
				break;
		}
		if ((unk_0x833B1A3D9F713E03(0, 24) || unk_0x833B1A3D9F713E03(0, 140)) || unk_0x833B1A3D9F713E03(0, 141))
		{
			func_809("FirstPunch", 1);
		}
		if (!func_815("FirstPunch") && timera() < 3000)
		{
			unk_0x41E36A540F8F323F(iLocal_135, 149, 1);
			unk_0x41E36A540F8F323F(iLocal_135, 69, 1);
		}
	}
	if (func_7())
	{
		unk_0x4742207943D8EB65();
		unk_0x1C4E3934365AD58F();
		while (unk_0xC7D0A132A56D5FCB())
		{
			func_773(0);
		}
		if (unk_0x7C71681384076318("ARM_3_BEAT_DOWN"))
		{
			unk_0x7CED302277C0F3D3("ARM_3_BEAT_DOWN");
		}
		func_121(&iLocal_135);
		func_781(&iLocal_151);
		func_781(&iLocal_152);
		func_760(0);
		unk_0xD875615F72CD34A6(6);
		unk_0x4B06B5746CBEC99F(1f);
		iLocal_236++;
	}
}

int func_7()
{
	int iVar0;
	
	if (iLocal_84 == 1)
	{
		settimera(0);
		iLocal_83 = 0;
		iLocal_84 = 0;
		iLocal_48 = 0;
		iLocal_49 = 0;
		iVar0 = 0;
		while (iVar0 < iLocal_50)
		{
			iLocal_50[iVar0] = -1;
			iVar0++;
		}
		iLocal_51 = 0;
		return 1;
	}
	return 0;
}

void func_8()
{
	iLocal_84 = 1;
}

void func_9()
{
	Global_14732 = 0;
	func_10();
}

void func_10()
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

void func_11(int iParam0, vector3 vParam1, int iParam2)
{
	if (!unk_0xE38E3CF1625A4145(*iParam0))
	{
		*iParam0 = func_12(vParam1, iParam2);
		unk_0xC51C58C963968740(*iParam0, 9);
	}
}

int func_12(vector3 vParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x2C0ED4741A007C6A(vParam0);
	unk_0xCE5C49921A521962(iVar0, func_13(unk_0xB331FCEB94EB05C8(), 1f, 1f));
	unk_0x1C316779E36C1967(iVar0, iParam1);
	return iVar0;
}

float func_13(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_14()
{
	settimera(0);
	iLocal_48++;
}

void func_15()
{
	Global_14732 = 0;
	func_16();
}

void func_16()
{
	unk_0x3F4DBD0F910C454B();
	Global_16877 = 0;
	if (unk_0x12BF789190D82474())
	{
		unk_0xD92171BC6C48DB90(false);
		Global_15866 = 6;
	}
}

void func_17(int iParam0)
{
	if (unk_0xFAC8F20FBC764F4D())
	{
		unk_0xEDF90B96BED57BCE(iParam0);
	}
}

int func_18(char* sParam0)
{
	unk_0x6D39881CA5436178(sParam0);
	return unk_0xA32C2C4DF096C08A(0);
}

void func_19(char* sParam0, bool bParam1, int iParam2)
{
	if (!unk_0xFAC8F20FBC764F4D() || (unk_0xFAC8F20FBC764F4D() && unk_0xE3903F59E2F22150() > iLocal_55))
	{
		if (!func_815(sParam0))
		{
			func_20(sParam0, iParam2);
			func_809(sParam0, bParam1);
			iLocal_55 = unk_0xE3903F59E2F22150() + 2000;
		}
	}
}

void func_20(char* sParam0, int iParam1)
{
	unk_0x37621D6689F9E3C3(sParam0);
	unk_0x092150016C06C431(0, 0, true, iParam1);
}

void func_21(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	struct<50> Var0;
	int iVar1;
	
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	func_22(iParam1, &Var0, iParam3);
	iVar1 = 0;
	while (iVar1 < 12)
	{
		unk_0xBFD0F8E7B0DF0A1B(sParam0, iVar1, Var0.f_13[iVar1], Var0[iVar1], iParam2);
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 9)
	{
		if (Var0.f_39[iVar1] == -1 || Var0.f_39[iVar1] == 255)
		{
			unk_0xA3FAF797B8885C09(sParam0, iVar1, -1, 0, iParam2);
		}
		else
		{
			unk_0xA3FAF797B8885C09(sParam0, iVar1, Var0.f_39[iVar1], Var0.f_49[iVar1], iParam2);
		}
		iVar1++;
	}
}

void func_22(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	struct<50> Var2;
	struct<14> Var3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Var2 = 12;
	Var2.f_13 = 12;
	Var2.f_26 = 12;
	Var2.f_39 = 9;
	Var2.f_49 = 9;
	iVar4 = unk_0x541D5C57194E73C4(iParam0);
	func_106(iParam0, &Var2, 0, -1);
	func_106(iParam0, uParam1, iParam2, -1);
	iVar5 = 0;
	iVar6 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (uParam1->f_13[iVar0] != Var2.f_13[iVar0] || (*uParam1)[iVar0] != Var2[iVar0])
		{
			if (func_103(iVar4, func_105(iVar0), func_104(iParam0, Var2.f_13[iVar0], Var2[iVar0], func_105(iVar0)), &uVar1))
			{
				Var3 = { func_33(iVar4, 2, uParam1->f_59, -1) };
				uParam1->f_13[2] = Var3.f_3;
				(*uParam1)[2] = Var3.f_4;
				iVar5 = 1;
			}
			if (func_31(iVar4, func_105(iVar0), func_104(iParam0, Var2.f_13[iVar0], Var2[iVar0], func_105(iVar0)), &uVar1))
			{
				Var3 = { func_33(iVar4, 1, uParam1->f_62, -1) };
				uParam1->f_13[1] = Var3.f_3;
				(*uParam1)[1] = Var3.f_4;
				iVar6 = 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (uParam1->f_39[iVar0] != Var2.f_39[iVar0] || uParam1->f_49[iVar0] != Var2.f_49[iVar0])
		{
			if (func_103(iVar4, 14, func_24(iParam0, Var2.f_39[iVar0], Var2.f_49[iVar0], iVar0), &uVar1))
			{
				Var3 = { func_33(iVar4, 2, uParam1->f_59, -1) };
				uParam1->f_13[2] = Var3.f_3;
				(*uParam1)[2] = Var3.f_4;
				iVar5 = 1;
			}
			if (func_31(iVar4, 14, func_24(iParam0, Var2.f_39[iVar0], Var2.f_49[iVar0], iVar0), &uVar1))
			{
				Var3 = { func_33(iVar4, 1, uParam1->f_62, -1) };
				uParam1->f_13[1] = Var3.f_3;
				(*uParam1)[1] = Var3.f_4;
				iVar6 = 1;
			}
		}
		iVar0++;
	}
	if (iVar6 || iVar5)
	{
		iVar7 = func_104(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
		iVar8 = func_104(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
		iVar9 = func_23(iVar4, iVar8, iVar7);
		if (iVar9 != -99)
		{
			Var3 = { func_33(iVar4, 0, iVar9, -1) };
			uParam1->f_13[0] = Var3.f_3;
			(*uParam1)[0] = Var3.f_4;
		}
	}
}

int func_23(int iParam0, int iParam1, int iParam2)
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

int func_24(int iParam0, int iParam1, int iParam2, int iParam3)
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
		return func_30(iParam3);
	}
	iVar0 = unk_0x541D5C57194E73C4(iParam0);
	iVar1 = unk_0xCA25F5F1E0708B9C(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			return func_26(unk_0x541D5C57194E73C4(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			return func_26(unk_0x541D5C57194E73C4(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = unk_0x20E6751DAB3C09C6(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= (iVar2 - 1))
	{
		iVar6 = unk_0x1C4C0FF903F4C757(iParam0, iParam3, iVar4);
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
					iVar3 = (iVar3 + func_25(iParam0, iParam3));
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
	return func_30(iParam3);
}

int func_25(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x541D5C57194E73C4(iParam0);
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

int func_26(int iParam0, int iParam1, int iParam2, int iParam3)
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
					return (func_29(iParam0) + iVar2);
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
		iVar7 = unk_0x51C67A1CC9BD53D6(iParam3, 7, -1, 0, -1, func_28(iParam2));
		iVar5 = 0;
		while (iVar5 < iVar7)
		{
			unk_0xC7FE3DDCFBE343DE(iVar5, &Var4);
			if (!unk_0xC4ED190294E9E658(Var4))
			{
				if (iParam1 == Var4.f_1)
				{
					return (func_27(iParam0, func_28(iParam2)) + iVar6);
				}
				iVar6++;
			}
			iVar5++;
		}
	}
	return -99;
}

int func_27(int iParam0, int iParam1)
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

int func_28(int iParam0)
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

int func_29(int iParam0)
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

int func_30(int iParam0)
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

int func_31(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iVar0 = func_32(iParam0);
		Global_106565.f_2357.f_539[iVar0 /*65*/].f_63 = iParam2;
		Global_106565.f_2357.f_539[iVar0 /*65*/].f_64 = iParam1;
		return 1;
	}
	return 0;
}

int func_32(int iParam0)
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

struct<14> func_33(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_102();
	if (iParam0 == joaat("player_zero"))
	{
		func_84(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_one"))
	{
		func_65(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_two"))
	{
		func_34(iParam1, iParam2);
	}
	return Global_71402[0 /*14*/];
}

void func_34(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_64(iParam1);
			break;
		
		case 2:
			func_63(iParam1);
			break;
		
		case 3:
			func_60(iParam1);
			break;
		
		case 4:
			func_59(iParam1);
			break;
		
		case 6:
			func_58(iParam1);
			break;
		
		case 5:
			func_57(iParam1);
			break;
		
		case 8:
			func_56(iParam1);
			break;
		
		case 9:
			func_55(iParam1);
			break;
		
		case 10:
			func_54(iParam1);
			break;
		
		case 1:
			func_53(iParam1);
			break;
		
		case 7:
			func_52(iParam1);
			break;
		
		case 11:
			func_51(iParam1);
			break;
		
		case 12:
			func_50(iParam1);
			break;
		
		case 13:
			func_49(iParam1);
			break;
		
		case 14:
			func_35(iParam1);
			break;
	}
}

void func_35(int iParam0)
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
	Global_71402[0 /*14*/].f_5 = 2;
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
		
		case 79:
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
			func_48(iVar7, iParam0, 155, -1);
			return;
			break;
	}
	func_36(&(Global_71402[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_36(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
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
	uParam0->f_12 = func_47(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (unk_0x36163153849DFDA1(sParam3) != unk_0x36163153849DFDA1("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		unk_0x8950ED5730F62EE8(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		unk_0x8950ED5730F62EE8(&(uParam0->f_6), 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			unk_0x8950ED5730F62EE8(&(uParam0->f_6), 5);
		}
		unk_0x8950ED5730F62EE8(&(uParam0->f_6), 1);
		unk_0x8950ED5730F62EE8(&(uParam0->f_6), 2);
		unk_0x8950ED5730F62EE8(&(uParam0->f_6), 6);
		if (func_46(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (unk_0xEA26831785699C09(Global_2621444, 1827025211, 0))
			{
				unk_0x8950ED5730F62EE8(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_44(Global_2621444, 1, 1, 1, -1))
			{
				unk_0xCE689A8E8C42ED78(&(uParam0->f_6), 2);
			}
			if (!func_44(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x8950ED5730F62EE8(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_44(Global_2621444, 1, 1, 1, -1))
			{
				unk_0xCE689A8E8C42ED78(&(uParam0->f_6), 2);
			}
			if (!func_44(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x8950ED5730F62EE8(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_44(Global_2621444, 1, 1, 1, -1))
			{
				unk_0xCE689A8E8C42ED78(&(uParam0->f_6), 2);
			}
			if (!func_44(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x8950ED5730F62EE8(&(uParam0->f_6), 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		unk_0x8950ED5730F62EE8(&(uParam0->f_6), 0);
		unk_0x8950ED5730F62EE8(&(uParam0->f_6), 5);
		if (func_43(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			unk_0x8950ED5730F62EE8(&(uParam0->f_6), 1);
		}
		if (func_43(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			unk_0x8950ED5730F62EE8(&(uParam0->f_6), 2);
		}
		if (!func_43(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			unk_0x8950ED5730F62EE8(&(uParam0->f_6), 4);
		}
	}
	else
	{
		unk_0x8950ED5730F62EE8(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_46(14))
			{
				return;
			}
			iVar0 = func_39(func_42(iParam1, uParam0->f_2), Global_71399, 0);
			if (unk_0x0E4018692D92041D(iVar0, uParam0->f_1))
			{
				unk_0x8950ED5730F62EE8(&(uParam0->f_6), 1);
			}
			iVar0 = func_39(func_38(iParam1, uParam0->f_2), Global_71399, 0);
			if (unk_0x0E4018692D92041D(iVar0, uParam0->f_1))
			{
				unk_0x8950ED5730F62EE8(&(uParam0->f_6), 2);
			}
			if (func_37(iParam1, uParam0->f_2, &iVar1))
			{
				iVar0 = func_39(iVar1, Global_71399, 0);
				if (!unk_0x0E4018692D92041D(iVar0, uParam0->f_1))
				{
					unk_0x8950ED5730F62EE8(&(uParam0->f_6), 4);
				}
			}
		}
		else
		{
			unk_0x8950ED5730F62EE8(&(uParam0->f_6), 1);
			unk_0x8950ED5730F62EE8(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			unk_0x8950ED5730F62EE8(&(uParam0->f_6), 1);
			unk_0x8950ED5730F62EE8(&(uParam0->f_6), 2);
		}
	}
}

bool func_37(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = 978;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 979;
					break;
				
				case 3:
					*uParam2 = 1429;
					break;
				
				case 4:
					*uParam2 = 995;
					break;
				
				case 6:
					*uParam2 = 1003;
					break;
				
				case 8:
					*uParam2 = 1430;
					break;
				
				case 9:
					*uParam2 = 1438;
					break;
				
				case 10:
					*uParam2 = 1440;
					break;
				
				case 1:
					*uParam2 = 1011;
					break;
				
				case 7:
					*uParam2 = 1441;
					break;
				
				case 11:
					*uParam2 = 987;
					break;
				
				case 14:
					*uParam2 = 1019;
					break;
				
				case 12:
					*uParam2 = 1030;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 980;
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
				
				case 7:
					*uParam2 = 1442;
					break;
				
				case 11:
					*uParam2 = 988;
					break;
				
				case 14:
					*uParam2 = 1020;
					break;
			}
			break;
		
		case 2:
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
		
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 998;
					break;
				
				case 6:
					*uParam2 = 1006;
					break;
				
				case 8:
					*uParam2 = 1433;
					break;
				
				case 11:
					*uParam2 = 990;
					break;
				
				case 14:
					*uParam2 = 1022;
					break;
			}
			break;
		
		case 4:
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
		
		case 5:
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
		
		case 6:
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
		
		case 7:
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
		
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1027;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1028;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1029;
					break;
			}
			break;
	}
	return *uParam2 != 978;
}

int func_38(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 927;
					break;
				
				case 3:
					return 1414;
					break;
				
				case 4:
					return 943;
					break;
				
				case 6:
					return 951;
					break;
				
				case 8:
					return 1415;
					break;
				
				case 9:
					return 1423;
					break;
				
				case 10:
					return 1425;
					break;
				
				case 1:
					return 959;
					break;
				
				case 7:
					return 1426;
					break;
				
				case 11:
					return 935;
					break;
				
				case 14:
					return 967;
					break;
				
				case 12:
					return 978;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 928;
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
				
				case 7:
					return 1427;
					break;
				
				case 11:
					return 936;
					break;
				
				case 14:
					return 968;
					break;
			}
			break;
		
		case 2:
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
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 946;
					break;
				
				case 6:
					return 954;
					break;
				
				case 8:
					return 1418;
					break;
				
				case 11:
					return 938;
					break;
				
				case 14:
					return 970;
					break;
			}
			break;
		
		case 4:
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
		
		case 5:
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
		
		case 6:
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
		
		case 7:
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
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 975;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 976;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 977;
					break;
			}
			break;
	}
	return 935;
}

int func_39(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_40(iParam1)];
	if (unk_0x75D54ED6C1AD1642(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_40(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_41();
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

int func_41()
{
	return Global_1312745;
}

int func_42(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 875;
					break;
				
				case 3:
					return 1399;
					break;
				
				case 4:
					return 891;
					break;
				
				case 6:
					return 899;
					break;
				
				case 8:
					return 1400;
					break;
				
				case 9:
					return 1408;
					break;
				
				case 10:
					return 1410;
					break;
				
				case 1:
					return 907;
					break;
				
				case 7:
					return 1411;
					break;
				
				case 11:
					return 883;
					break;
				
				case 14:
					return 915;
					break;
				
				case 12:
					return 926;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 876;
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
				
				case 7:
					return 1412;
					break;
				
				case 11:
					return 884;
					break;
				
				case 14:
					return 916;
					break;
			}
			break;
		
		case 2:
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
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 894;
					break;
				
				case 6:
					return 902;
					break;
				
				case 8:
					return 1403;
					break;
				
				case 11:
					return 886;
					break;
				
				case 14:
					return 918;
					break;
			}
			break;
		
		case 4:
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
		
		case 5:
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
		
		case 6:
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
		
		case 7:
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
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 923;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 924;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 925;
					break;
			}
			break;
	}
	return 883;
}

int func_43(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			unk_0x8950ED5730F62EE8(&(Global_106565.f_2357[iParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xCE689A8E8C42ED78(&(Global_106565.f_2357[iParam1 /*164*/][iParam3]), iParam4);
		}
		return unk_0x0E4018692D92041D(Global_106565.f_2357[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			unk_0x8950ED5730F62EE8(&(Global_106565.f_2357[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xCE689A8E8C42ED78(&(Global_106565.f_2357[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		return unk_0x0E4018692D92041D(Global_106565.f_2357[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			unk_0x8950ED5730F62EE8(&(Global_106565.f_2357[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xCE689A8E8C42ED78(&(Global_106565.f_2357[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		return unk_0x0E4018692D92041D(Global_106565.f_2357[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x8950ED5730F62EE8(&(Global_106565.f_2357[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xCE689A8E8C42ED78(&(Global_106565.f_2357[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			return unk_0x0E4018692D92041D(Global_106565.f_2357[iParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x8950ED5730F62EE8(&(Global_106565.f_2357[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xCE689A8E8C42ED78(&(Global_106565.f_2357[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			return unk_0x0E4018692D92041D(Global_106565.f_2357[iParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x8950ED5730F62EE8(&(Global_106565.f_2357[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xCE689A8E8C42ED78(&(Global_106565.f_2357[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			return unk_0x0E4018692D92041D(Global_106565.f_2357[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x8950ED5730F62EE8(&(Global_106565.f_2357[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xCE689A8E8C42ED78(&(Global_106565.f_2357[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			return unk_0x0E4018692D92041D(Global_106565.f_2357[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x8950ED5730F62EE8(&(Global_106565.f_2357[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xCE689A8E8C42ED78(&(Global_106565.f_2357[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			return unk_0x0E4018692D92041D(Global_106565.f_2357[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0x8950ED5730F62EE8(&(Global_106565.f_2357[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xCE689A8E8C42ED78(&(Global_106565.f_2357[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			return unk_0x0E4018692D92041D(Global_106565.f_2357[iParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				unk_0x8950ED5730F62EE8(&(Global_106565.f_2357[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xCE689A8E8C42ED78(&(Global_106565.f_2357[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			return unk_0x0E4018692D92041D(Global_106565.f_2357[iParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				unk_0x8950ED5730F62EE8(&(Global_106565.f_2357[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xCE689A8E8C42ED78(&(Global_106565.f_2357[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			return unk_0x0E4018692D92041D(Global_106565.f_2357[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				unk_0x8950ED5730F62EE8(&(Global_106565.f_2357[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xCE689A8E8C42ED78(&(Global_106565.f_2357[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			return unk_0x0E4018692D92041D(Global_106565.f_2357[iParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				unk_0x8950ED5730F62EE8(&(Global_106565.f_2357[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xCE689A8E8C42ED78(&(Global_106565.f_2357[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			return unk_0x0E4018692D92041D(Global_106565.f_2357[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x8950ED5730F62EE8(&(Global_106565.f_2357[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xCE689A8E8C42ED78(&(Global_106565.f_2357[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			return unk_0x0E4018692D92041D(Global_106565.f_2357[iParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x8950ED5730F62EE8(&(Global_106565.f_2357[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xCE689A8E8C42ED78(&(Global_106565.f_2357[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			return unk_0x0E4018692D92041D(Global_106565.f_2357[iParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x8950ED5730F62EE8(&(Global_106565.f_2357[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xCE689A8E8C42ED78(&(Global_106565.f_2357[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			return unk_0x0E4018692D92041D(Global_106565.f_2357[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x8950ED5730F62EE8(&(Global_106565.f_2357[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xCE689A8E8C42ED78(&(Global_106565.f_2357[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			return unk_0x0E4018692D92041D(Global_106565.f_2357[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			unk_0x8950ED5730F62EE8(&(Global_106565.f_2357[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xCE689A8E8C42ED78(&(Global_106565.f_2357[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		return unk_0x0E4018692D92041D(Global_106565.f_2357[iParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x8950ED5730F62EE8(&(Global_106565.f_2357[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xCE689A8E8C42ED78(&(Global_106565.f_2357[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			return unk_0x0E4018692D92041D(Global_106565.f_2357[iParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x8950ED5730F62EE8(&(Global_106565.f_2357[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xCE689A8E8C42ED78(&(Global_106565.f_2357[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			return unk_0x0E4018692D92041D(Global_106565.f_2357[iParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x8950ED5730F62EE8(&(Global_106565.f_2357[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xCE689A8E8C42ED78(&(Global_106565.f_2357[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			return unk_0x0E4018692D92041D(Global_106565.f_2357[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x8950ED5730F62EE8(&(Global_106565.f_2357[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xCE689A8E8C42ED78(&(Global_106565.f_2357[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			return unk_0x0E4018692D92041D(Global_106565.f_2357[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x8950ED5730F62EE8(&(Global_106565.f_2357[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xCE689A8E8C42ED78(&(Global_106565.f_2357[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			return unk_0x0E4018692D92041D(Global_106565.f_2357[iParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			unk_0x8950ED5730F62EE8(&(Global_106565.f_2357[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xCE689A8E8C42ED78(&(Global_106565.f_2357[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		return unk_0x0E4018692D92041D(Global_106565.f_2357[iParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x8950ED5730F62EE8(&(Global_106565.f_2357[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xCE689A8E8C42ED78(&(Global_106565.f_2357[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			return unk_0x0E4018692D92041D(Global_106565.f_2357[iParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x8950ED5730F62EE8(&(Global_106565.f_2357[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xCE689A8E8C42ED78(&(Global_106565.f_2357[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			return unk_0x0E4018692D92041D(Global_106565.f_2357[iParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x8950ED5730F62EE8(&(Global_106565.f_2357[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xCE689A8E8C42ED78(&(Global_106565.f_2357[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			return unk_0x0E4018692D92041D(Global_106565.f_2357[iParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			unk_0x8950ED5730F62EE8(&(Global_106565.f_2357[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xCE689A8E8C42ED78(&(Global_106565.f_2357[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		return unk_0x0E4018692D92041D(Global_106565.f_2357[iParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x8950ED5730F62EE8(&(Global_106565.f_2357[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xCE689A8E8C42ED78(&(Global_106565.f_2357[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			return unk_0x0E4018692D92041D(Global_106565.f_2357[iParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x8950ED5730F62EE8(&(Global_106565.f_2357[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xCE689A8E8C42ED78(&(Global_106565.f_2357[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			return unk_0x0E4018692D92041D(Global_106565.f_2357[iParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x8950ED5730F62EE8(&(Global_106565.f_2357[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xCE689A8E8C42ED78(&(Global_106565.f_2357[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			return unk_0x0E4018692D92041D(Global_106565.f_2357[iParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x8950ED5730F62EE8(&(Global_106565.f_2357[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xCE689A8E8C42ED78(&(Global_106565.f_2357[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			return unk_0x0E4018692D92041D(Global_106565.f_2357[iParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x8950ED5730F62EE8(&(Global_106565.f_2357[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xCE689A8E8C42ED78(&(Global_106565.f_2357[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			return unk_0x0E4018692D92041D(Global_106565.f_2357[iParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x8950ED5730F62EE8(&(Global_106565.f_2357[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xCE689A8E8C42ED78(&(Global_106565.f_2357[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			return unk_0x0E4018692D92041D(Global_106565.f_2357[iParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			unk_0x8950ED5730F62EE8(&(Global_106565.f_2357[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xCE689A8E8C42ED78(&(Global_106565.f_2357[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		return unk_0x0E4018692D92041D(Global_106565.f_2357[iParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x8950ED5730F62EE8(&(Global_106565.f_2357[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xCE689A8E8C42ED78(&(Global_106565.f_2357[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			return unk_0x0E4018692D92041D(Global_106565.f_2357[iParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x8950ED5730F62EE8(&(Global_106565.f_2357[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xCE689A8E8C42ED78(&(Global_106565.f_2357[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			return unk_0x0E4018692D92041D(Global_106565.f_2357[iParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x8950ED5730F62EE8(&(Global_106565.f_2357[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xCE689A8E8C42ED78(&(Global_106565.f_2357[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			return unk_0x0E4018692D92041D(Global_106565.f_2357[iParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x8950ED5730F62EE8(&(Global_106565.f_2357[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xCE689A8E8C42ED78(&(Global_106565.f_2357[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			return unk_0x0E4018692D92041D(Global_106565.f_2357[iParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x8950ED5730F62EE8(&(Global_106565.f_2357[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xCE689A8E8C42ED78(&(Global_106565.f_2357[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			return unk_0x0E4018692D92041D(Global_106565.f_2357[iParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0x8950ED5730F62EE8(&(Global_106565.f_2357[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xCE689A8E8C42ED78(&(Global_106565.f_2357[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			return unk_0x0E4018692D92041D(Global_106565.f_2357[iParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}
	return 0;
}

int func_44(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_71399;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_45(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_39(iVar2, iVar0, 0);
		return unk_0x0E4018692D92041D(iVar3, iVar1);
	}
	return 0;
}

bool func_45(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	*uParam2 = 10383;
	if ((bParam4 && Global_4266643) || (!bParam4 && bParam5))
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case 8886212:
					case -969630947:
						*uParam2 = 971;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1857811503:
					case -1198063650:
						*uParam2 = 971;
						*uParam3 = 20;
						return 1;
						break;
					
					case 552556691:
					case -1596927918:
						*uParam2 = 971;
						*uParam3 = 21;
						return 1;
						break;
					
					case 328711652:
					case 2093516866:
						*uParam2 = 971;
						*uParam3 = 22;
						return 1;
						break;
					
					case 1194403102:
					case 1863511255:
						*uParam2 = 971;
						*uParam3 = 23;
						return 1;
						break;
					
					case 1107630790:
					case 1503248869:
						*uParam2 = 971;
						*uParam3 = 24;
						return 1;
						break;
					
					case 1807937089:
					case 1263478096:
						*uParam2 = 971;
						*uParam3 = 25;
						return 1;
						break;
					
					case 1453442047:
					case 745170819:
						*uParam2 = 971;
						*uParam3 = 26;
						return 1;
						break;
					
					case -1071423629:
					case -1382822784:
					case 385813134:
						*uParam2 = 935;
						*uParam3 = 0;
						return 1;
						break;
					
					case -833094692:
					case -1731353868:
					case 675392787:
						*uParam2 = 935;
						*uParam3 = 1;
						return 1;
						break;
					
					case -1836153782:
					case -1960638561:
					case -238272479:
						*uParam2 = 935;
						*uParam3 = 2;
						return 1;
						break;
					
					case -1598414687:
					case 147161830:
					case 67757212:
						*uParam2 = 935;
						*uParam3 = 3;
						return 1;
						break;
					
					case 123661793:
					case -92608943:
					case -536372072:
						*uParam2 = 935;
						*uParam3 = 4;
						return 1;
						break;
					
					case 330958487:
					case -162931217:
					case -247578875:
						*uParam2 = 935;
						*uParam3 = 5;
						return 1;
						break;
					
					case -142717408:
					case 1665087452:
					case -854821214:
						*uParam2 = 935;
						*uParam3 = 7;
						return 1;
						break;
					
					case 1290696959:
					case 1012984348:
					case -1458295118:
						*uParam2 = 935;
						*uParam3 = 8;
						return 1;
						break;
					
					case 2059568454:
					case 933072050:
					case -1454802604:
						*uParam2 = 935;
						*uParam3 = 11;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 8886212:
					case -969630947:
						*uParam2 = 1023;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1857811503:
					case -1198063650:
						*uParam2 = 1023;
						*uParam3 = 20;
						return 1;
						break;
					
					case 552556691:
					case -1596927918:
						*uParam2 = 1023;
						*uParam3 = 21;
						return 1;
						break;
					
					case 328711652:
					case 2093516866:
						*uParam2 = 1023;
						*uParam3 = 22;
						return 1;
						break;
					
					case 1194403102:
					case 1863511255:
						*uParam2 = 1023;
						*uParam3 = 23;
						return 1;
						break;
					
					case 1107630790:
					case 1503248869:
						*uParam2 = 1023;
						*uParam3 = 24;
						return 1;
						break;
					
					case 1807937089:
					case 1263478096:
						*uParam2 = 1023;
						*uParam3 = 25;
						return 1;
						break;
					
					case 1453442047:
					case 745170819:
						*uParam2 = 1023;
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
					case -1795774903:
					case -379046860:
						*uParam2 = 971;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1655095722:
					case 472553912:
						*uParam2 = 971;
						*uParam3 = 20;
						return 1;
						break;
					
					case -1951624263:
					case 147288818:
						*uParam2 = 971;
						*uParam3 = 21;
						return 1;
						break;
					
					case -1586249913:
					case 1027988462:
						*uParam2 = 971;
						*uParam3 = 22;
						return 1;
						break;
					
					case -1472181024:
					case 788217689:
						*uParam2 = 971;
						*uParam3 = 23;
						return 1;
						break;
					
					case -1116178608:
					case 1338147047:
						*uParam2 = 971;
						*uParam3 = 24;
						return 1;
						break;
					
					case -1028914761:
					case 1095820292:
						*uParam2 = 971;
						*uParam3 = 25;
						return 1;
						break;
					
					case -654496167:
					case -1989217217:
						*uParam2 = 971;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case -1795774903:
					case -379046860:
						*uParam2 = 1023;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1655095722:
					case 472553912:
						*uParam2 = 1023;
						*uParam3 = 20;
						return 1;
						break;
					
					case -1951624263:
					case 147288818:
						*uParam2 = 1023;
						*uParam3 = 21;
						return 1;
						break;
					
					case -1586249913:
					case 1027988462:
						*uParam2 = 1023;
						*uParam3 = 22;
						return 1;
						break;
					
					case -1472181024:
					case 788217689:
						*uParam2 = 1023;
						*uParam3 = 23;
						return 1;
						break;
					
					case -1116178608:
					case 1338147047:
						*uParam2 = 1023;
						*uParam3 = 24;
						return 1;
						break;
					
					case -1028914761:
					case 1095820292:
						*uParam2 = 1023;
						*uParam3 = 25;
						return 1;
						break;
					
					case -654496167:
					case -1989217217:
						*uParam2 = 1023;
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
		if (Global_4266643)
		{
			iVar0 = unk_0x647623AC7BE9A663(iParam0);
		}
		else
		{
			iVar0 = unk_0xB9B60EF2EC7BFCC9(iParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = unk_0x647623AC7BE9A663(iParam0);
	}
	else
	{
		iVar0 = unk_0xB9B60EF2EC7BFCC9(iParam0);
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
					*uParam2 = 1759;
					break;
				
				case 1:
					*uParam2 = 1760;
					break;
				
				case 2:
					*uParam2 = 1761;
					break;
				
				case 3:
					*uParam2 = 1762;
					break;
				
				case 4:
					*uParam2 = 1763;
					break;
				
				case 5:
					*uParam2 = 1764;
					break;
				
				case 6:
					*uParam2 = 1771;
					break;
				
				case 7:
					*uParam2 = 1772;
					break;
				
				case 8:
					*uParam2 = 1773;
					break;
				
				case 9:
					*uParam2 = 1774;
					break;
				
				case 10:
					*uParam2 = 1775;
					break;
				
				case 11:
					*uParam2 = 1776;
					break;
				
				case 12:
					*uParam2 = 1777;
					break;
				
				case 13:
					*uParam2 = 1785;
					break;
				
				case 14:
					*uParam2 = 1786;
					break;
				
				case 15:
					*uParam2 = 1887;
					break;
				
				case 16:
					*uParam2 = 1888;
					break;
				
				case 17:
					*uParam2 = 1919;
					break;
				
				case 18:
					*uParam2 = 1933;
					break;
				
				case 19:
					*uParam2 = 1934;
					break;
				
				case 20:
					*uParam2 = 1935;
					break;
				
				case 21:
					*uParam2 = 1936;
					break;
				
				case 22:
					*uParam2 = 1937;
					break;
				
				case 23:
					*uParam2 = 2041;
					break;
				
				case 24:
					*uParam2 = 2042;
					break;
				
				case 25:
					*uParam2 = 2068;
					break;
				
				case 26:
					*uParam2 = 2069;
					break;
				
				case 27:
					*uParam2 = 2070;
					break;
				
				case 28:
					*uParam2 = 2071;
					break;
				
				case 29:
					*uParam2 = 2072;
					break;
				
				case 30:
					*uParam2 = 2073;
					break;
				
				case 31:
					*uParam2 = 2074;
					break;
				
				case 32:
					*uParam2 = 2075;
					break;
				
				case 33:
					*uParam2 = 2076;
					break;
				
				case 34:
					*uParam2 = 2077;
					break;
				
				case 35:
					*uParam2 = 2324;
					break;
				
				case 36:
					*uParam2 = 2325;
					break;
				
				case 37:
					*uParam2 = 2389;
					break;
				
				case 38:
					*uParam2 = 2390;
					break;
				
				case 39:
					*uParam2 = 2391;
					break;
				
				case 40:
					*uParam2 = 2392;
					break;
				
				case 41:
					*uParam2 = 2451;
					break;
				
				case 42:
					*uParam2 = 2452;
					break;
				
				case 43:
					*uParam2 = 2453;
					break;
				
				case 44:
					*uParam2 = 2454;
					break;
				
				case 45:
					*uParam2 = 2455;
					break;
				
				case 46:
					*uParam2 = 2456;
					break;
				
				case 47:
					*uParam2 = 2457;
					break;
				
				case 48:
					*uParam2 = 2458;
					break;
				
				case 49:
					*uParam2 = 2459;
					break;
				
				case 50:
					*uParam2 = 2460;
					break;
				
				case 51:
					*uParam2 = 2589;
					break;
				
				case 52:
					*uParam2 = 2590;
					break;
				
				case 53:
					*uParam2 = 2591;
					break;
				
				case 54:
					*uParam2 = 2592;
					break;
				
				case 55:
					*uParam2 = 2593;
					break;
				
				case 56:
					*uParam2 = 2594;
					break;
				
				case 57:
					*uParam2 = 2595;
					break;
				
				case 58:
					*uParam2 = 2596;
					break;
				
				case 59:
					*uParam2 = 2597;
					break;
				
				case 60:
					*uParam2 = 2598;
					break;
				
				case 61:
					*uParam2 = 2599;
					break;
				
				case 62:
					*uParam2 = 3196;
					break;
				
				case 63:
					*uParam2 = 3197;
					break;
				
				case 64:
					*uParam2 = 3198;
					break;
				
				case 65:
					*uParam2 = 3199;
					break;
				
				case 66:
					*uParam2 = 3200;
					break;
				
				case 67:
					*uParam2 = 3201;
					break;
				
				case 68:
					*uParam2 = 3669;
					break;
				
				case 69:
					*uParam2 = 3670;
					break;
				
				case 70:
					*uParam2 = 3671;
					break;
				
				case 71:
					*uParam2 = 3672;
					break;
				
				case 72:
					*uParam2 = 3673;
					break;
				
				case 73:
					*uParam2 = 3674;
					break;
				
				case 74:
					*uParam2 = 3675;
					break;
				
				case 75:
					*uParam2 = 3676;
					break;
				
				case 76:
					*uParam2 = 3677;
					break;
				
				case 77:
					*uParam2 = 3678;
					break;
				
				case 78:
					*uParam2 = 3792;
					break;
				
				case 79:
					*uParam2 = 3793;
					break;
				
				case 80:
					*uParam2 = 3794;
					break;
				
				case 81:
					*uParam2 = 3795;
					break;
				
				case 82:
					*uParam2 = 3796;
					break;
				
				case 83:
					*uParam2 = 3797;
					break;
				
				case 84:
					*uParam2 = 3798;
					break;
				
				case 85:
					*uParam2 = 3799;
					break;
				
				case 86:
					*uParam2 = 3902;
					break;
				
				case 87:
					*uParam2 = 3903;
					break;
				
				case 88:
					*uParam2 = 3904;
					break;
				
				case 89:
					*uParam2 = 5337;
					break;
				
				case 90:
					*uParam2 = 5338;
					break;
				
				case 91:
					*uParam2 = 5339;
					break;
				
				case 92:
					*uParam2 = 5340;
					break;
				
				case 93:
					*uParam2 = 5341;
					break;
				
				case 94:
					*uParam2 = 5342;
					break;
				
				case 95:
					*uParam2 = 5343;
					break;
				
				case 96:
					*uParam2 = 5344;
					break;
				
				case 97:
					*uParam2 = 5345;
					break;
				
				case 98:
					*uParam2 = 5346;
					break;
				
				case 99:
					*uParam2 = 5347;
					break;
			}
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 100:
					*uParam2 = 5348;
					break;
				
				case 101:
					*uParam2 = 5394;
					break;
				
				case 102:
					*uParam2 = 5395;
					break;
				
				case 103:
					*uParam2 = 5396;
					break;
				
				case 104:
					*uParam2 = 5397;
					break;
				
				case 105:
					*uParam2 = 5398;
					break;
				
				case 106:
					*uParam2 = 5399;
					break;
				
				case 107:
					*uParam2 = 5400;
					break;
				
				case 108:
					*uParam2 = 5401;
					break;
				
				case 109:
					*uParam2 = 5402;
					break;
				
				case 110:
					*uParam2 = 5403;
					break;
				
				case 111:
					*uParam2 = 5404;
					break;
				
				case 112:
					*uParam2 = 5405;
					break;
				
				case 113:
					*uParam2 = 5406;
					break;
				
				case 114:
					*uParam2 = 5407;
					break;
				
				case 115:
					*uParam2 = 5408;
					break;
				
				case 116:
					*uParam2 = 5409;
					break;
				
				case 117:
					*uParam2 = 5410;
					break;
				
				case 118:
					*uParam2 = 5411;
					break;
				
				case 119:
					*uParam2 = 5412;
					break;
				
				case 120:
					*uParam2 = 5413;
					break;
				
				case 121:
					*uParam2 = 5414;
					break;
				
				case 122:
					*uParam2 = 5415;
					break;
				
				case 123:
					*uParam2 = 5416;
					break;
				
				case 124:
					*uParam2 = 6122;
					break;
				
				case 125:
					*uParam2 = 6123;
					break;
				
				case 126:
					*uParam2 = 6124;
					break;
				
				case 127:
					*uParam2 = 6125;
					break;
				
				case 128:
					*uParam2 = 6126;
					break;
				
				case 129:
					*uParam2 = 6127;
					break;
				
				case 130:
					*uParam2 = 6128;
					break;
				
				case 131:
					*uParam2 = 6129;
					break;
				
				case 132:
					*uParam2 = 6130;
					break;
				
				case 133:
					*uParam2 = 6131;
					break;
				
				case 134:
					*uParam2 = 6132;
					break;
				
				case 135:
					*uParam2 = 6133;
					break;
				
				case 136:
					*uParam2 = 6134;
					break;
				
				case 137:
					*uParam2 = 6135;
					break;
				
				case 138:
					*uParam2 = 6136;
					break;
				
				case 139:
					*uParam2 = 6435;
					break;
				
				case 140:
					*uParam2 = 6436;
					break;
				
				case 141:
					*uParam2 = 6437;
					break;
				
				case 142:
					*uParam2 = 6438;
					break;
				
				case 143:
					*uParam2 = 6439;
					break;
				
				case 144:
					*uParam2 = 6440;
					break;
				
				case 145:
					*uParam2 = 6441;
					break;
				
				case 146:
					*uParam2 = 6442;
					break;
				
				case 147:
					*uParam2 = 6443;
					break;
				
				case 148:
					*uParam2 = 6444;
					break;
				
				case 149:
					*uParam2 = 6445;
					break;
				
				case 150:
					*uParam2 = 6446;
					break;
				
				case 151:
					*uParam2 = 6447;
					break;
				
				case 152:
					*uParam2 = 6448;
					break;
				
				case 153:
					*uParam2 = 6449;
					break;
				
				case 154:
					*uParam2 = 7266;
					break;
				
				case 155:
					*uParam2 = 7267;
					break;
				
				case 156:
					*uParam2 = 7268;
					break;
				
				case 157:
					*uParam2 = 7269;
					break;
				
				case 158:
					*uParam2 = 7270;
					break;
				
				case 159:
					*uParam2 = 7271;
					break;
				
				case 160:
					*uParam2 = 7272;
					break;
				
				case 161:
					*uParam2 = 7879;
					break;
				
				case 162:
					*uParam2 = 7880;
					break;
				
				case 163:
					*uParam2 = 7881;
					break;
				
				case 164:
					*uParam2 = 7882;
					break;
				
				case 165:
					*uParam2 = 7883;
					break;
				
				case 166:
					*uParam2 = 7884;
					break;
				
				case 167:
					*uParam2 = 7885;
					break;
				
				case 168:
					*uParam2 = 7886;
					break;
				
				case 169:
					*uParam2 = 7887;
					break;
				
				case 170:
					*uParam2 = 7888;
					break;
				
				case 171:
					*uParam2 = 7889;
					break;
				
				case 172:
					*uParam2 = 7890;
					break;
				
				case 173:
					*uParam2 = 7891;
					break;
				
				case 174:
					*uParam2 = 7892;
					break;
				
				case 175:
					*uParam2 = 7893;
					break;
				
				case 176:
					*uParam2 = 8299;
					break;
				
				case 177:
					*uParam2 = 8300;
					break;
				
				case 178:
					*uParam2 = 8301;
					break;
				
				case 179:
					*uParam2 = 8302;
					break;
				
				case 180:
					*uParam2 = 8303;
					break;
				
				case 181:
					*uParam2 = 8304;
					break;
				
				case 182:
					*uParam2 = 8305;
					break;
				
				case 183:
					*uParam2 = 8306;
					break;
				
				case 184:
					*uParam2 = 8307;
					break;
				
				case 185:
					*uParam2 = 8308;
					break;
				
				case 186:
					*uParam2 = 8309;
					break;
				
				case 187:
					*uParam2 = 8310;
					break;
				
				case 188:
					*uParam2 = 8311;
					break;
				
				case 189:
					*uParam2 = 8312;
					break;
				
				case 190:
					*uParam2 = 8313;
					break;
				
				case 191:
					*uParam2 = 8314;
					break;
				
				case 192:
					*uParam2 = 8315;
					break;
				
				case 193:
					*uParam2 = 8316;
					break;
				
				case 194:
					*uParam2 = 8317;
					break;
				
				case 195:
					*uParam2 = 8318;
					break;
				
				case 196:
					*uParam2 = 8319;
					break;
				
				case 197:
					*uParam2 = 8320;
					break;
				
				case 198:
					*uParam2 = 8321;
					break;
				
				case 199:
					*uParam2 = 8322;
					break;
				
				case 200:
					*uParam2 = 8323;
					break;
				
				default:
					break;
			}
			break;
		
		case 2:
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1765;
					break;
				
				case 1:
					*uParam2 = 1766;
					break;
				
				case 2:
					*uParam2 = 1767;
					break;
				
				case 3:
					*uParam2 = 1768;
					break;
				
				case 4:
					*uParam2 = 1769;
					break;
				
				case 5:
					*uParam2 = 1770;
					break;
				
				case 6:
					*uParam2 = 1778;
					break;
				
				case 7:
					*uParam2 = 1779;
					break;
				
				case 8:
					*uParam2 = 1780;
					break;
				
				case 9:
					*uParam2 = 1781;
					break;
				
				case 10:
					*uParam2 = 1782;
					break;
				
				case 11:
					*uParam2 = 1783;
					break;
				
				case 12:
					*uParam2 = 1784;
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
					*uParam2 = 1920;
					break;
				
				case 18:
					*uParam2 = 1938;
					break;
				
				case 19:
					*uParam2 = 1939;
					break;
				
				case 20:
					*uParam2 = 1940;
					break;
				
				case 21:
					*uParam2 = 1941;
					break;
				
				case 22:
					*uParam2 = 1942;
					break;
				
				case 23:
					*uParam2 = 2043;
					break;
				
				case 24:
					*uParam2 = 2044;
					break;
				
				case 25:
					*uParam2 = 2078;
					break;
				
				case 26:
					*uParam2 = 2079;
					break;
				
				case 27:
					*uParam2 = 2080;
					break;
				
				case 28:
					*uParam2 = 2081;
					break;
				
				case 29:
					*uParam2 = 2082;
					break;
				
				case 30:
					*uParam2 = 2083;
					break;
				
				case 31:
					*uParam2 = 2084;
					break;
				
				case 32:
					*uParam2 = 2085;
					break;
				
				case 33:
					*uParam2 = 2086;
					break;
				
				case 34:
					*uParam2 = 2087;
					break;
				
				case 35:
					*uParam2 = 2326;
					break;
				
				case 36:
					*uParam2 = 2327;
					break;
				
				case 37:
					*uParam2 = 2393;
					break;
				
				case 38:
					*uParam2 = 2394;
					break;
				
				case 39:
					*uParam2 = 2395;
					break;
				
				case 40:
					*uParam2 = 2396;
					break;
				
				case 41:
					*uParam2 = 2461;
					break;
				
				case 42:
					*uParam2 = 2462;
					break;
				
				case 43:
					*uParam2 = 2463;
					break;
				
				case 44:
					*uParam2 = 2464;
					break;
				
				case 45:
					*uParam2 = 2465;
					break;
				
				case 46:
					*uParam2 = 2466;
					break;
				
				case 47:
					*uParam2 = 2467;
					break;
				
				case 48:
					*uParam2 = 2468;
					break;
				
				case 49:
					*uParam2 = 2469;
					break;
				
				case 50:
					*uParam2 = 2470;
					break;
				
				case 51:
					*uParam2 = 2600;
					break;
				
				case 52:
					*uParam2 = 2601;
					break;
				
				case 53:
					*uParam2 = 2602;
					break;
				
				case 54:
					*uParam2 = 2603;
					break;
				
				case 55:
					*uParam2 = 2604;
					break;
				
				case 56:
					*uParam2 = 2605;
					break;
				
				case 57:
					*uParam2 = 2606;
					break;
				
				case 58:
					*uParam2 = 2607;
					break;
				
				case 59:
					*uParam2 = 2608;
					break;
				
				case 60:
					*uParam2 = 2609;
					break;
				
				case 61:
					*uParam2 = 2610;
					break;
				
				case 62:
					*uParam2 = 3202;
					break;
				
				case 63:
					*uParam2 = 3203;
					break;
				
				case 64:
					*uParam2 = 3204;
					break;
				
				case 65:
					*uParam2 = 3205;
					break;
				
				case 66:
					*uParam2 = 3206;
					break;
				
				case 67:
					*uParam2 = 3207;
					break;
				
				case 68:
					*uParam2 = 3679;
					break;
				
				case 69:
					*uParam2 = 3680;
					break;
				
				case 70:
					*uParam2 = 3681;
					break;
				
				case 71:
					*uParam2 = 3682;
					break;
				
				case 72:
					*uParam2 = 3683;
					break;
				
				case 73:
					*uParam2 = 3684;
					break;
				
				case 74:
					*uParam2 = 3685;
					break;
				
				case 75:
					*uParam2 = 3686;
					break;
				
				case 76:
					*uParam2 = 3687;
					break;
				
				case 77:
					*uParam2 = 3688;
					break;
				
				case 78:
					*uParam2 = 3800;
					break;
				
				case 79:
					*uParam2 = 3801;
					break;
				
				case 80:
					*uParam2 = 3802;
					break;
				
				case 81:
					*uParam2 = 3803;
					break;
				
				case 82:
					*uParam2 = 3804;
					break;
				
				case 83:
					*uParam2 = 3805;
					break;
				
				case 84:
					*uParam2 = 3806;
					break;
				
				case 85:
					*uParam2 = 3807;
					break;
				
				case 86:
					*uParam2 = 3905;
					break;
				
				case 87:
					*uParam2 = 3906;
					break;
				
				case 88:
					*uParam2 = 3907;
					break;
				
				case 89:
					*uParam2 = 5349;
					break;
				
				case 90:
					*uParam2 = 5350;
					break;
				
				case 91:
					*uParam2 = 5351;
					break;
				
				case 92:
					*uParam2 = 5352;
					break;
				
				case 93:
					*uParam2 = 5353;
					break;
				
				case 94:
					*uParam2 = 5354;
					break;
				
				case 95:
					*uParam2 = 5355;
					break;
				
				case 96:
					*uParam2 = 5356;
					break;
				
				case 97:
					*uParam2 = 5357;
					break;
				
				case 98:
					*uParam2 = 5358;
					break;
				
				case 99:
					*uParam2 = 5359;
					break;
			}
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 100:
					*uParam2 = 5360;
					break;
				
				case 101:
					*uParam2 = 5417;
					break;
				
				case 102:
					*uParam2 = 5418;
					break;
				
				case 103:
					*uParam2 = 5419;
					break;
				
				case 104:
					*uParam2 = 5420;
					break;
				
				case 105:
					*uParam2 = 5421;
					break;
				
				case 106:
					*uParam2 = 5422;
					break;
				
				case 107:
					*uParam2 = 5423;
					break;
				
				case 108:
					*uParam2 = 5424;
					break;
				
				case 109:
					*uParam2 = 5425;
					break;
				
				case 110:
					*uParam2 = 5426;
					break;
				
				case 111:
					*uParam2 = 5427;
					break;
				
				case 112:
					*uParam2 = 5428;
					break;
				
				case 113:
					*uParam2 = 5429;
					break;
				
				case 114:
					*uParam2 = 5430;
					break;
				
				case 115:
					*uParam2 = 5431;
					break;
				
				case 116:
					*uParam2 = 5432;
					break;
				
				case 117:
					*uParam2 = 5433;
					break;
				
				case 118:
					*uParam2 = 5434;
					break;
				
				case 119:
					*uParam2 = 5435;
					break;
				
				case 120:
					*uParam2 = 5436;
					break;
				
				case 121:
					*uParam2 = 5437;
					break;
				
				case 122:
					*uParam2 = 5438;
					break;
				
				case 123:
					*uParam2 = 5439;
					break;
				
				case 124:
					*uParam2 = 6137;
					break;
				
				case 125:
					*uParam2 = 6138;
					break;
				
				case 126:
					*uParam2 = 6139;
					break;
				
				case 127:
					*uParam2 = 6140;
					break;
				
				case 128:
					*uParam2 = 6141;
					break;
				
				case 129:
					*uParam2 = 6142;
					break;
				
				case 130:
					*uParam2 = 6143;
					break;
				
				case 131:
					*uParam2 = 6144;
					break;
				
				case 132:
					*uParam2 = 6145;
					break;
				
				case 133:
					*uParam2 = 6146;
					break;
				
				case 134:
					*uParam2 = 6147;
					break;
				
				case 135:
					*uParam2 = 6148;
					break;
				
				case 136:
					*uParam2 = 6149;
					break;
				
				case 137:
					*uParam2 = 6150;
					break;
				
				case 138:
					*uParam2 = 6151;
					break;
				
				case 139:
					*uParam2 = 6450;
					break;
				
				case 140:
					*uParam2 = 6451;
					break;
				
				case 141:
					*uParam2 = 6452;
					break;
				
				case 142:
					*uParam2 = 6453;
					break;
				
				case 143:
					*uParam2 = 6454;
					break;
				
				case 144:
					*uParam2 = 6455;
					break;
				
				case 145:
					*uParam2 = 6456;
					break;
				
				case 146:
					*uParam2 = 6457;
					break;
				
				case 147:
					*uParam2 = 6458;
					break;
				
				case 148:
					*uParam2 = 6459;
					break;
				
				case 149:
					*uParam2 = 6460;
					break;
				
				case 150:
					*uParam2 = 6461;
					break;
				
				case 151:
					*uParam2 = 6462;
					break;
				
				case 152:
					*uParam2 = 6463;
					break;
				
				case 153:
					*uParam2 = 6464;
					break;
				
				case 154:
					*uParam2 = 7273;
					break;
				
				case 155:
					*uParam2 = 7274;
					break;
				
				case 156:
					*uParam2 = 7275;
					break;
				
				case 157:
					*uParam2 = 7276;
					break;
				
				case 158:
					*uParam2 = 7277;
					break;
				
				case 159:
					*uParam2 = 7278;
					break;
				
				case 160:
					*uParam2 = 7279;
					break;
				
				case 161:
					*uParam2 = 7894;
					break;
				
				case 162:
					*uParam2 = 7895;
					break;
				
				case 163:
					*uParam2 = 7896;
					break;
				
				case 164:
					*uParam2 = 7897;
					break;
				
				case 165:
					*uParam2 = 7898;
					break;
				
				case 166:
					*uParam2 = 7899;
					break;
				
				case 167:
					*uParam2 = 7900;
					break;
				
				case 168:
					*uParam2 = 7901;
					break;
				
				case 169:
					*uParam2 = 7902;
					break;
				
				case 170:
					*uParam2 = 7903;
					break;
				
				case 171:
					*uParam2 = 7904;
					break;
				
				case 172:
					*uParam2 = 7905;
					break;
				
				case 173:
					*uParam2 = 7906;
					break;
				
				case 174:
					*uParam2 = 7907;
					break;
				
				case 175:
					*uParam2 = 7908;
					break;
				
				case 176:
					*uParam2 = 8324;
					break;
				
				case 177:
					*uParam2 = 8325;
					break;
				
				case 178:
					*uParam2 = 8326;
					break;
				
				case 179:
					*uParam2 = 8327;
					break;
				
				case 180:
					*uParam2 = 8328;
					break;
				
				case 181:
					*uParam2 = 8329;
					break;
				
				case 182:
					*uParam2 = 8330;
					break;
				
				case 183:
					*uParam2 = 8331;
					break;
				
				case 184:
					*uParam2 = 8332;
					break;
				
				case 185:
					*uParam2 = 8333;
					break;
				
				case 186:
					*uParam2 = 8334;
					break;
				
				case 187:
					*uParam2 = 8335;
					break;
				
				case 188:
					*uParam2 = 8336;
					break;
				
				case 189:
					*uParam2 = 8337;
					break;
				
				case 190:
					*uParam2 = 8338;
					break;
				
				case 191:
					*uParam2 = 8339;
					break;
				
				case 192:
					*uParam2 = 8340;
					break;
				
				case 193:
					*uParam2 = 8341;
					break;
				
				case 194:
					*uParam2 = 8342;
					break;
				
				case 195:
					*uParam2 = 8343;
					break;
				
				case 196:
					*uParam2 = 8344;
					break;
				
				case 197:
					*uParam2 = 8345;
					break;
				
				case 198:
					*uParam2 = 8346;
					break;
				
				case 199:
					*uParam2 = 8347;
					break;
				
				case 200:
					*uParam2 = 8348;
					break;
				
				default:
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 10383;
}

bool func_46(int iParam0)
{
	return Global_36425 == iParam0;
}

int func_47(int iParam0)
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

void func_48(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<10> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<10> Var11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	iVar0 = (iParam1 - iParam2);
	iVar0 = iVar0;
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = Global_71402[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar4 = 0;
		iVar5 = unk_0x9FE26C6213850011(iVar1, 0);
		iVar3 = 0;
		while (iVar3 < iVar5)
		{
			unk_0x8B9B4DA276FC8330(iVar3, &Var2);
			if (!unk_0xC4ED190294E9E658(Var2))
			{
				if (iVar4 == (iParam1 - iParam2))
				{
					Global_2621444 = Var2.f_1;
					Global_2621445 = Var2;
					func_36(&(Global_71402[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar4++;
			}
			iVar3++;
		}
	}
	else if (iParam0 == 13)
	{
		func_36(&(Global_71402[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		unk_0xC4707630C8DE50CF(&Var6);
		iVar9 = 0;
		iVar10 = unk_0x51C67A1CC9BD53D6(iVar1, 7, -1, 1, -1, -1);
		iVar8 = 0;
		while (iVar8 < iVar10)
		{
			unk_0xCAD2858165B4553C(iVar8, &Var6);
			if (!unk_0xC4ED190294E9E658(Var6))
			{
				if (iVar9 == (iParam1 - iParam2))
				{
					if (Var6.f_6 == 0)
					{
						iVar7 = 9;
					}
					else if (Var6.f_6 == 1)
					{
						iVar7 = 10;
					}
					else if (Var6.f_6 == 2)
					{
						iVar7 = 2;
					}
					else if (Var6.f_6 == 3)
					{
						iVar7 = 3;
					}
					else if (Var6.f_6 == 4)
					{
						iVar7 = 4;
					}
					else if (Var6.f_6 == 5)
					{
						iVar7 = 5;
					}
					else if (Var6.f_6 == 6)
					{
						iVar7 = 6;
					}
					else if (Var6.f_6 == 7)
					{
						iVar7 = 7;
					}
					else if (Var6.f_6 == 8)
					{
						iVar7 = 8;
					}
					else
					{
						iVar7 = -1;
					}
					Global_2621444 = Var6.f_1;
					Global_2621445 = Var6;
					func_36(&(Global_71402[0 /*14*/]), iParam0, iParam1, &(Var6.f_9), Var6.f_3, Var6.f_4, Var6.f_5, unk_0xEA26831785699C09(Var6.f_1, -2050632586, 0), iVar7, 2, Var6.f_1 != 0);
					return;
				}
				iVar9++;
			}
			iVar8++;
		}
	}
	else
	{
		unk_0x9975DA2BF7F980A7(&Var11);
		if (iParam3 != -1 && Global_71571)
		{
			unk_0xD3024CE00F392F7F(iParam3, &Var11);
			Global_2621444 = Var11.f_1;
			Global_2621445 = Var11;
			func_36(&(Global_71402[0 /*14*/]), iParam0, iParam1, &(Var11.f_9), Var11.f_3, Var11.f_4, Var11.f_5, unk_0xEA26831785699C09(Var11.f_1, -2050632586, 0), -1, 2, Var11.f_1 != 0);
			return;
		}
		iVar13 = 0;
		iVar14 = unk_0x51C67A1CC9BD53D6(iVar1, 7, -1, 0, -1, func_28(iParam0));
		iVar12 = 0;
		while (iVar12 < iVar14)
		{
			unk_0xC7FE3DDCFBE343DE(iVar12, &Var11);
			if (!unk_0xC4ED190294E9E658(Var11))
			{
				if (iVar13 == (iParam1 - iParam2))
				{
					Global_2621444 = Var11.f_1;
					Global_2621445 = Var11;
					func_36(&(Global_71402[0 /*14*/]), iParam0, iParam1, &(Var11.f_9), Var11.f_3, Var11.f_4, Var11.f_5, unk_0xEA26831785699C09(Var11.f_1, -2050632586, 0), -1, 2, Var11.f_1 != 0);
					return;
				}
				iVar13++;
			}
			iVar12++;
		}
	}
}

void func_49(int iParam0)
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
	Global_71402[0 /*14*/].f_5 = 2;
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
			func_48(iVar7, iParam0, 9, -1);
			return;
			break;
	}
	func_36(&(Global_71402[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_50(int iParam0)
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
	Global_71402[0 /*14*/].f_5 = 2;
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
			func_48(iVar7, iParam0, 48, -1);
			return;
			break;
	}
	func_36(&(Global_71402[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_51(int iParam0)
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
	Global_71402[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_48(iVar7, iParam0, 1, -1);
			return;
			break;
	}
	func_36(&(Global_71402[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_52(int iParam0)
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
	Global_71402[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_48(iVar7, iParam0, 1, -1);
			return;
			break;
	}
	func_36(&(Global_71402[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_53(int iParam0)
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
	Global_71402[0 /*14*/].f_5 = 2;
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
			func_48(iVar7, iParam0, 6, -1);
			return;
			break;
	}
	func_36(&(Global_71402[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_54(int iParam0)
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
	Global_71402[0 /*14*/].f_5 = 2;
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
			func_48(iVar7, iParam0, 33, -1);
			return;
			break;
	}
	func_36(&(Global_71402[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_55(int iParam0)
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
	Global_71402[0 /*14*/].f_5 = 2;
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
			func_48(iVar7, iParam0, 17, -1);
			return;
			break;
	}
	func_36(&(Global_71402[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_56(int iParam0)
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
	Global_71402[0 /*14*/].f_5 = 2;
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
			func_48(iVar7, iParam0, 18, -1);
			return;
			break;
	}
	func_36(&(Global_71402[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_57(int iParam0)
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
	Global_71402[0 /*14*/].f_5 = 2;
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
			func_48(iVar7, iParam0, 7, -1);
			return;
			break;
	}
	func_36(&(Global_71402[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_58(int iParam0)
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
	Global_71402[0 /*14*/].f_5 = 2;
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
		
		case 79:
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
			func_48(iVar7, iParam0, 84, -1);
			return;
			break;
	}
	func_36(&(Global_71402[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_59(int iParam0)
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
	Global_71402[0 /*14*/].f_5 = 2;
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
		
		case 79:
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
			func_48(iVar7, iParam0, 104, -1);
			return;
			break;
	}
	func_36(&(Global_71402[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_60(int iParam0)
{
	if (iParam0 < 136)
	{
		func_62(iParam0);
	}
	else
	{
		func_61(iParam0);
	}
	if (Global_71402[0 /*14*/].f_2 == -1)
	{
		func_48(3, iParam0, 242, -1);
	}
}

void func_61(int iParam0)
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
	Global_71402[0 /*14*/].f_5 = 2;
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
	func_36(&(Global_71402[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_62(int iParam0)
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
	Global_71402[0 /*14*/].f_5 = 2;
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
		
		case 79:
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
	func_36(&(Global_71402[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_63(int iParam0)
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
	Global_71402[0 /*14*/].f_5 = 2;
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
			func_48(iVar7, iParam0, 9, -1);
			return;
			break;
	}
	func_36(&(Global_71402[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_64(int iParam0)
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
	Global_71402[0 /*14*/].f_5 = 2;
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
			func_48(iVar7, iParam0, 7, -1);
			return;
			break;
	}
	func_36(&(Global_71402[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_65(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_83(iParam1);
			break;
		
		case 2:
			func_82(iParam1);
			break;
		
		case 3:
			func_78(iParam1);
			break;
		
		case 4:
			func_77(iParam1);
			break;
		
		case 6:
			func_76(iParam1);
			break;
		
		case 5:
			func_75(iParam1);
			break;
		
		case 8:
			func_74(iParam1);
			break;
		
		case 9:
			func_73(iParam1);
			break;
		
		case 10:
			func_72(iParam1);
			break;
		
		case 1:
			func_71(iParam1);
			break;
		
		case 7:
			func_70(iParam1);
			break;
		
		case 11:
			func_69(iParam1);
			break;
		
		case 12:
			func_68(iParam1);
			break;
		
		case 13:
			func_67(iParam1);
			break;
		
		case 14:
			func_66(iParam1);
			break;
	}
}

void func_66(int iParam0)
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
	Global_71402[0 /*14*/].f_5 = 1;
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
		
		case 79:
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
			func_48(iVar7, iParam0, 175, -1);
			return;
			break;
	}
	func_36(&(Global_71402[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_67(int iParam0)
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
	Global_71402[0 /*14*/].f_5 = 1;
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
			func_48(iVar7, iParam0, 9, -1);
			return;
			break;
	}
	func_36(&(Global_71402[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_68(int iParam0)
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
	Global_71402[0 /*14*/].f_5 = 1;
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
			func_48(iVar7, iParam0, 47, -1);
			return;
			break;
	}
	func_36(&(Global_71402[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_69(int iParam0)
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
	Global_71402[0 /*14*/].f_5 = 1;
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
			func_48(iVar7, iParam0, 63, -1);
			return;
			break;
	}
	func_36(&(Global_71402[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_70(int iParam0)
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
	Global_71402[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_48(iVar7, iParam0, 1, -1);
			return;
			break;
	}
	func_36(&(Global_71402[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_71(int iParam0)
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
	Global_71402[0 /*14*/].f_5 = 1;
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
			func_48(iVar7, iParam0, 5, -1);
			return;
			break;
	}
	func_36(&(Global_71402[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_72(int iParam0)
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
	Global_71402[0 /*14*/].f_5 = 1;
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
			func_48(iVar7, iParam0, 53, -1);
			return;
			break;
	}
	func_36(&(Global_71402[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_73(int iParam0)
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
	Global_71402[0 /*14*/].f_5 = 1;
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
			func_48(iVar7, iParam0, 12, -1);
			return;
			break;
	}
	func_36(&(Global_71402[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_74(int iParam0)
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
	Global_71402[0 /*14*/].f_5 = 1;
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
			func_48(iVar7, iParam0, 77, -1);
			return;
			break;
	}
	func_36(&(Global_71402[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_75(int iParam0)
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
	Global_71402[0 /*14*/].f_5 = 1;
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
			func_48(iVar7, iParam0, 7, -1);
			return;
			break;
	}
	func_36(&(Global_71402[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_76(int iParam0)
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
	Global_71402[0 /*14*/].f_5 = 1;
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
		
		case 79:
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
			func_48(iVar7, iParam0, 134, -1);
			return;
			break;
	}
	func_36(&(Global_71402[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_77(int iParam0)
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
	Global_71402[0 /*14*/].f_5 = 1;
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
		
		case 79:
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
			func_48(iVar7, iParam0, 117, -1);
			return;
			break;
	}
	func_36(&(Global_71402[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_78(int iParam0)
{
	if (iParam0 < 107)
	{
		func_81(iParam0);
	}
	else if (iParam0 < 227)
	{
		func_80(iParam0);
	}
	else
	{
		func_79(iParam0);
	}
	if (Global_71402[0 /*14*/].f_2 == -1)
	{
		func_48(3, iParam0, 318, -1);
	}
}

void func_79(int iParam0)
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
	Global_71402[0 /*14*/].f_5 = 1;
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
	func_36(&(Global_71402[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_80(int iParam0)
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
	Global_71402[0 /*14*/].f_5 = 1;
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
	func_36(&(Global_71402[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_81(int iParam0)
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
	Global_71402[0 /*14*/].f_5 = 1;
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
		
		case 79:
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
	func_36(&(Global_71402[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_82(int iParam0)
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
	Global_71402[0 /*14*/].f_5 = 1;
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
			func_48(iVar7, iParam0, 21, -1);
			return;
			break;
	}
	func_36(&(Global_71402[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_83(int iParam0)
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
	Global_71402[0 /*14*/].f_5 = 1;
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
			func_48(iVar7, iParam0, 10, -1);
			return;
			break;
	}
	func_36(&(Global_71402[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_84(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_101(iParam1);
			break;
		
		case 2:
			func_100(iParam1);
			break;
		
		case 3:
			func_97(iParam1);
			break;
		
		case 4:
			func_96(iParam1);
			break;
		
		case 6:
			func_95(iParam1);
			break;
		
		case 5:
			func_94(iParam1);
			break;
		
		case 8:
			func_93(iParam1);
			break;
		
		case 9:
			func_92(iParam1);
			break;
		
		case 10:
			func_91(iParam1);
			break;
		
		case 1:
			func_90(iParam1);
			break;
		
		case 7:
			func_89(iParam1);
			break;
		
		case 11:
			func_88(iParam1);
			break;
		
		case 12:
			func_87(iParam1);
			break;
		
		case 13:
			func_86(iParam1);
			break;
		
		case 14:
			func_85(iParam1);
			break;
	}
}

void func_85(int iParam0)
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
	Global_71402[0 /*14*/].f_5 = 0;
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
		
		case 79:
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
			func_48(iVar7, iParam0, 113, -1);
			return;
			break;
	}
	func_36(&(Global_71402[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_86(int iParam0)
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
	Global_71402[0 /*14*/].f_5 = 0;
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
			func_48(iVar7, iParam0, 10, -1);
			return;
			break;
	}
	func_36(&(Global_71402[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_87(int iParam0)
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
	Global_71402[0 /*14*/].f_5 = 0;
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
			func_48(iVar7, iParam0, 53, -1);
			return;
			break;
	}
	func_36(&(Global_71402[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_88(int iParam0)
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
	Global_71402[0 /*14*/].f_5 = 0;
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
			func_48(iVar7, iParam0, 45, -1);
			return;
			break;
	}
	func_36(&(Global_71402[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_89(int iParam0)
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
	Global_71402[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_48(iVar7, iParam0, 1, -1);
			return;
			break;
	}
	func_36(&(Global_71402[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_90(int iParam0)
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
	Global_71402[0 /*14*/].f_5 = 0;
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
			func_48(iVar7, iParam0, 5, -1);
			return;
			break;
	}
	func_36(&(Global_71402[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_91(int iParam0)
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
	Global_71402[0 /*14*/].f_5 = 0;
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
			func_48(iVar7, iParam0, 48, -1);
			return;
			break;
	}
	func_36(&(Global_71402[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_92(int iParam0)
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
	Global_71402[0 /*14*/].f_5 = 0;
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
			func_48(iVar7, iParam0, 20, -1);
			return;
			break;
	}
	func_36(&(Global_71402[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_93(int iParam0)
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
	Global_71402[0 /*14*/].f_5 = 0;
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
			func_48(iVar7, iParam0, 24, -1);
			return;
			break;
	}
	func_36(&(Global_71402[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_94(int iParam0)
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
	Global_71402[0 /*14*/].f_5 = 0;
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
			func_48(iVar7, iParam0, 14, -1);
			return;
			break;
	}
	func_36(&(Global_71402[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_95(int iParam0)
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
	Global_71402[0 /*14*/].f_5 = 0;
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
		
		case 79:
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
			func_48(iVar7, iParam0, 99, -1);
			return;
			break;
	}
	func_36(&(Global_71402[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_96(int iParam0)
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
	Global_71402[0 /*14*/].f_5 = 0;
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
		
		case 79:
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
			func_48(iVar7, iParam0, 113, -1);
			return;
			break;
	}
	func_36(&(Global_71402[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_97(int iParam0)
{
	if (iParam0 < 60)
	{
		func_99(iParam0);
	}
	else
	{
		func_98(iParam0);
	}
	if (Global_71402[0 /*14*/].f_2 == -1)
	{
		func_48(3, iParam0, 181, -1);
	}
}

void func_98(int iParam0)
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
	Global_71402[0 /*14*/].f_5 = 0;
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
		
		case 79:
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
	func_36(&(Global_71402[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_99(int iParam0)
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
	Global_71402[0 /*14*/].f_5 = 0;
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
	func_36(&(Global_71402[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_100(int iParam0)
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
	Global_71402[0 /*14*/].f_5 = 0;
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
			func_48(iVar7, iParam0, 6, -1);
			return;
			break;
	}
	func_36(&(Global_71402[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_101(int iParam0)
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
	Global_71402[0 /*14*/].f_5 = 0;
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
			func_48(iVar7, iParam0, 7, -1);
			return;
			break;
	}
	func_36(&(Global_71402[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_102()
{
	Global_71402[0 /*14*/].f_1 = -1;
	Global_71402[0 /*14*/].f_2 = -1;
	Global_71402[0 /*14*/].f_5 = -1;
	Global_71402[0 /*14*/].f_3 = -1;
	Global_71402[0 /*14*/].f_4 = -1;
	Global_71402[0 /*14*/].f_7 = 0;
	Global_71402[0 /*14*/].f_6 = 0;
	Global_71402[0 /*14*/].f_13 = -1;
	Global_71402[0 /*14*/].f_12 = 0;
	Global_71402[0 /*14*/] = 0;
	StringCopy(&(Global_71402[0 /*14*/].f_8), "NO_LABEL", 16);
}

int func_103(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iVar0 = func_32(iParam0);
		Global_106565.f_2357.f_539[iVar0 /*65*/].f_60 = iParam2;
		Global_106565.f_2357.f_539[iVar0 /*65*/].f_61 = iParam1;
		return 1;
	}
	return 0;
}

int func_104(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_28(iParam3);
	iVar1 = unk_0x4F6A06F27F1F391B(iParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		iVar5 = unk_0x36ED000FFAE4BDC3(iParam0, iVar0, iVar3);
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

int func_105(int iParam0)
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

void func_106(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		iVar0 = func_111(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_110(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_109(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_108(iVar0))
		{
			uParam1->f_59 = Global_106565.f_2357.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_106565.f_2357.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_106565.f_2357.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_106565.f_2357.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_106565.f_2357.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_106565.f_2357.f_539[iVar0 /*65*/].f_64;
		}
		else if (unk_0xB331FCEB94EB05C8() && unk_0x541D5C57194E73C4(iParam0) == unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()))
		{
			if (func_107(161, iParam3))
			{
				uParam1->f_59 = func_39(2051, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_39(752, iParam3, 0);
			}
			uParam1->f_60 = func_39(753, iParam3, 0);
			uParam1->f_61 = func_39(754, iParam3, 0);
		}
		if (unk_0xB331FCEB94EB05C8() && iParam0 == unk_0x33CD235DF1E6A94E())
		{
			if (func_107(161, iParam3))
			{
				uParam1->f_59 = func_39(2051, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_39(752, iParam3, 0);
			}
		}
	}
}

int func_107(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2571340[iParam0 /*3*/][func_40(iParam1)];
	if (unk_0x0F0A07F7B2FAAE06(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_108(int iParam0)
{
	return iParam0 < 3;
}

void func_109(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_111(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x063A77907C209DC4(iParam0, iParam1);
		*uParam3 = unk_0x5856CD5A7124DF2D(iParam0, iParam1);
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
				if (unk_0xFB6FED41DB480F1C(iParam0) && unk_0x5692743CF44411A6(iParam0) != -1)
				{
					*uParam2 = unk_0x5692743CF44411A6(iParam0);
					*uParam3 = unk_0xB0A641F421F4D8CB(iParam0);
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

void func_110(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_111(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0xA603FBA9F3C17D3A(iParam0, iParam1);
		*uParam3 = unk_0xCEB55689C694866C(iParam0, iParam1);
		*uParam4 = unk_0x8069BBC84D092E17(iParam0, iParam1);
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

int func_111(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		iVar1 = unk_0x541D5C57194E73C4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_555(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_112(char* sParam0, int iParam1, bool bParam2)
{
	if (!func_815(sParam0))
	{
		func_113(sParam0, iParam1, 1);
		func_809(sParam0, bParam2);
		return 1;
	}
	return 0;
}

void func_113(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x0C9D26BBBEE23407(sParam0);
	unk_0x495407AC2D466930(iParam1, 1);
}

void func_114(int iParam0)
{
	iLocal_241 = iParam0;
	func_752();
}

float func_115(struct<2> Param0, float fParam1, struct<2> Param2, float fParam3)
{
	return unk_0x174C48E9E544E9A8((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

void func_116(int iParam0, vector3 vParam1, float fParam2)
{
	unk_0xBEADAF07D2339505(iParam0, vParam1, 1, 0, 0, 1);
	unk_0x3C990C409B3845DE(iParam0, fParam2);
}

void func_117(int iParam0, vector3 vParam1, float fParam2, int iParam3)
{
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		if (!unk_0xBC2FC12AD0FBF72E(iParam0))
		{
			if (iParam3 == 1)
			{
				unk_0x1CA155EC47F3AEBB(iParam0, vParam1);
			}
			else
			{
				unk_0xBEADAF07D2339505(iParam0, vParam1, 1, 0, 0, 1);
			}
			unk_0x104FA8DC0E2278E8(iParam0);
			unk_0x3C990C409B3845DE(iParam0, fParam2);
		}
	}
}

void func_118(vector3 vParam0, int iParam1)
{
	int iVar0;
	
	unk_0x1F6A09AE9372AE6C(vParam0, iParam1, 0);
	iVar0 = unk_0xE3903F59E2F22150() + 20000;
	while ((unk_0xE980BAFD70E8A4B3() && !unk_0x4E1190A8D88ABDB7()) && unk_0xE3903F59E2F22150() < iVar0)
	{
		func_773(0);
	}
	unk_0x4ABB9EF39DA515D7();
}

int func_119()
{
	if (iLocal_91 == 1)
	{
		iLocal_91 = 0;
		return 1;
	}
	return 0;
}

void func_120(int iParam0, bool bParam1)
{
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		if (!unk_0xD62C4419A41F106A(iParam0, 0))
		{
			if (bParam1)
			{
				if (!unk_0x042B0E494045A7DF(iParam0))
				{
					unk_0x0CDD28A9DFCE2FCE(iParam0, true, 0);
				}
			}
			else if (unk_0x042B0E494045A7DF(iParam0))
			{
				unk_0x0CDD28A9DFCE2FCE(iParam0, false, 0);
			}
		}
	}
}

void func_121(int iParam0)
{
	if (unk_0x765F6FEEFF39224F(*iParam0))
	{
		unk_0x4B8B69DAE5BAC592(iParam0);
	}
}

void func_122(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = func_111(iParam0);
	if (func_108(iVar0) && !unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		func_123(iParam0, &(Global_106565.f_2357.f_539.f_298[iVar0 /*477*/]), bParam1);
		iVar1 = 0;
		while (iVar1 <= (8 - 1))
		{
			unk_0x5B6554A003E467E5(Global_106565.f_2357.f_539.f_1730[iVar1 /*4*/][iVar0]);
			if (bParam2)
			{
				if (iVar1 == Global_106565.f_2357.f_539.f_1763 || (Global_106565.f_2357.f_539.f_1763 == -1 && iVar1 == 4))
				{
					if (Global_106565.f_2357.f_539.f_1730[iVar1 /*4*/][iVar0] != 0 && Global_106565.f_2357.f_539.f_1730[iVar1 /*4*/][iVar0] != joaat("weapon_molotov"))
					{
						if (unk_0xEAF6E82C7BDE5A4C(iParam0, Global_106565.f_2357.f_539.f_1730[iVar1 /*4*/][iVar0], 0))
						{
							unk_0x274C6068B660FFB4(iParam0, Global_106565.f_2357.f_539.f_1730[iVar1 /*4*/][iVar0], true);
						}
					}
				}
			}
			iVar1++;
		}
		if (iVar0 == 0)
		{
			unk_0x75D54ED6C1AD1642(joaat("sp0_parachute_current_tint"), &uVar2, -1);
		}
		else if (iVar0 == 1)
		{
			unk_0x75D54ED6C1AD1642(joaat("sp1_parachute_current_tint"), &uVar2, -1);
		}
		else if (iVar0 == 2)
		{
			unk_0x75D54ED6C1AD1642(joaat("sp2_parachute_current_tint"), &uVar2, -1);
		}
		unk_0xB3739B780DF92EED(unk_0x95B959F18401C09A(), uVar2);
	}
}

void func_123(int iParam0, var uParam1, bool bParam2)
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
	struct<2> Var9;
	struct<4> Var10;
	int iVar11;
	int iVar12;
	int iVar13[44];
	int iVar14[51];
	int iVar15;
	
	if (!unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		iVar7 = 0;
		while (iVar7 < 2)
		{
			iVar5 = 0;
			while (iVar5 <= (44 - 1))
			{
				iVar1 = func_137(iVar5);
				if (iVar1 != 0 && iVar1 != 1993361168)
				{
					iVar2 = unk_0x7D8E16FB3C783D5E(iParam0, iVar1);
					if (iVar2 != 0 && iVar2 != joaat("weapon_unarmed"))
					{
						if (func_133(iVar2))
						{
							if (iVar7 == 0)
							{
								iVar13[iVar5] = unk_0xFAF00EC53D4815FE(iParam0, iVar2);
							}
							else
							{
								unk_0x2EFACEB7CC6076D0(iParam0, iVar2, 0, 0);
								unk_0xB593ADB2D54F30E1(iParam0, iVar2, 0);
							}
						}
						else
						{
							iVar13[iVar5] = 0;
							unk_0x2EFACEB7CC6076D0(iParam0, iVar2, 0, 0);
							unk_0xB593ADB2D54F30E1(iParam0, iVar2, 0);
						}
					}
				}
				iVar5++;
			}
			iVar15 = unk_0xEE9976E9D3881F89();
			iVar8 = 0;
			while (iVar8 < iVar15)
			{
				if (iVar8 < 51)
				{
					if (unk_0x078B659F6F2C8960(iVar8, &Var9))
					{
						if (!unk_0xC4ED190294E9E658(Var9) && !func_132(Var9.f_1))
						{
							if (iVar7 == 0)
							{
								iVar14[iVar8] = unk_0xFAF00EC53D4815FE(iParam0, Var9.f_1);
							}
							else
							{
								unk_0x2EFACEB7CC6076D0(iParam0, Var9.f_1, 0, 0);
								unk_0xB593ADB2D54F30E1(iParam0, Var9.f_1, 0);
							}
						}
						else
						{
							iVar14[iVar8] = 0;
							unk_0x2EFACEB7CC6076D0(iParam0, Var9.f_1, 0, 0);
							unk_0xB593ADB2D54F30E1(iParam0, Var9.f_1, 0);
						}
					}
				}
				else
				{
					iVar8 = iVar15;
				}
				iVar8++;
			}
			iVar7++;
		}
		iVar5 = 0;
		while (iVar5 <= (44 - 1))
		{
			iVar1 = func_137(iVar5);
			if (iVar1 != 0 && iVar1 != 1993361168)
			{
				iVar2 = unk_0x7D8E16FB3C783D5E(iParam0, iVar1);
				iVar3 = (*uParam1)[iVar5 /*5*/];
				iVar0 = (uParam1[iVar5 /*5*/])->f_1;
				if (!func_133(iVar3))
				{
					(*uParam1)[iVar5 /*5*/] = 0;
					iVar3 = 0;
				}
				if (iVar3 != 0)
				{
					if (iVar3 != joaat("weapon_unarmed"))
					{
						if (!unk_0xEAF6E82C7BDE5A4C(iParam0, iVar3, 0))
						{
							unk_0x697EBA5CF1A6AB57(iParam0, iVar3, 0, false, false);
						}
						if (unk_0xFAF00EC53D4815FE(iParam0, iVar3) < iVar0)
						{
							unk_0x2EFACEB7CC6076D0(iParam0, iVar3, iVar0, 0);
						}
						if (iVar3 != joaat("weapon_petrolcan") && unk_0xEAF6E82C7BDE5A4C(iParam0, iVar3, 0))
						{
							unk_0x34A6A87253B1D35D(iParam0, iVar3, (uParam1[iVar5 /*5*/])->f_3);
						}
						iVar6 = 0;
						iVar4 = func_131(iVar3, iVar6);
						while (iVar4 != 0)
						{
							if (unk_0x0E4018692D92041D((uParam1[iVar5 /*5*/])->f_2, iVar6))
							{
								if (!unk_0xCC2C88B9353CAF70(iParam0, iVar3, iVar4))
								{
									unk_0xE13E9DCB2041EBC1(iParam0, iVar3, iVar4);
									func_130(iParam0, iVar3, iVar4);
									if (func_129(iVar4))
									{
										unk_0xA641544C89178AFD(iParam0, iVar3, iVar4, (uParam1[iVar5 /*5*/])->f_4);
										func_128(iParam0, iVar3, iVar4, (uParam1[iVar5 /*5*/])->f_4);
									}
								}
							}
							else if (unk_0xCC2C88B9353CAF70(iParam0, iVar3, iVar4))
							{
								unk_0xF476B943CAAFB802(iParam0, iVar3, iVar4);
								func_126(iParam0, iVar3, iVar4);
							}
							iVar6++;
							iVar4 = func_131(iVar3, iVar6);
						}
					}
				}
				else if (bParam2)
				{
					if ((iVar2 != 0 && iVar2 != joaat("weapon_unarmed")) && iVar2 != joaat("object"))
					{
						unk_0x681FB12989BD5DEA(iParam0, iVar2);
						iVar6 = 0;
						iVar4 = func_131(iVar2, iVar6);
						while (iVar4 != 0)
						{
							if (unk_0xCC2C88B9353CAF70(iParam0, iVar2, iVar4))
							{
								unk_0xF476B943CAAFB802(iParam0, iVar2, iVar4);
								func_126(iParam0, iVar2, iVar4);
							}
							iVar6++;
							iVar4 = func_131(iVar2, iVar6);
						}
					}
				}
				if (!bParam2)
				{
					if (iVar2 != 0 && iVar2 != joaat("weapon_unarmed"))
					{
						if (unk_0xFAF00EC53D4815FE(iParam0, iVar2) < iVar13[iVar5])
						{
							unk_0x2EFACEB7CC6076D0(iParam0, iVar2, iVar13[iVar5], 0);
						}
					}
				}
			}
			iVar5++;
		}
		iVar11 = 0;
		while (iVar11 < uParam1->f_221)
		{
			iVar3 = uParam1->f_221[iVar11 /*5*/];
			iVar0 = uParam1->f_221[iVar11 /*5*/].f_1;
			iVar8 = func_125(iVar3, &Var9);
			if ((iVar8 != -1 && iVar8 < 51) && !func_132(Var9.f_1))
			{
				if (unk_0xC4ED190294E9E658(Var9) || func_132(Var9.f_1))
				{
					uParam1->f_221[iVar11 /*5*/] = 0;
					iVar3 = 0;
				}
				if (iVar3 != 0)
				{
					if (iVar3 != joaat("weapon_unarmed"))
					{
						if (!unk_0xEAF6E82C7BDE5A4C(iParam0, iVar3, 0))
						{
							unk_0x697EBA5CF1A6AB57(iParam0, iVar3, 0, false, false);
						}
						if (unk_0xFAF00EC53D4815FE(iParam0, iVar3) < iVar0)
						{
							unk_0x2EFACEB7CC6076D0(iParam0, iVar3, iVar0, 0);
						}
						if (unk_0xEAF6E82C7BDE5A4C(iParam0, iVar3, 0))
						{
							unk_0x34A6A87253B1D35D(iParam0, iVar3, uParam1->f_221[iVar11 /*5*/].f_3);
						}
						iVar12 = 0;
						iVar6 = 0;
						while (iVar6 < unk_0x333B87730CE53032(iVar8))
						{
							if (unk_0xB94227C531A24A5C(iVar8, iVar6, &Var10))
							{
								if (!func_124(Var10.f_3))
								{
									if (unk_0x0E4018692D92041D(uParam1->f_221[iVar11 /*5*/].f_2, iVar12))
									{
										if (!unk_0xCC2C88B9353CAF70(iParam0, iVar3, Var10.f_3))
										{
											unk_0xE13E9DCB2041EBC1(iParam0, iVar3, Var10.f_3);
											func_130(iParam0, iVar3, Var10.f_3);
											if (func_129(Var10.f_3))
											{
												unk_0xA641544C89178AFD(iParam0, iVar3, Var10.f_3, uParam1->f_221[iVar11 /*5*/].f_4);
												func_128(iParam0, iVar3, Var10.f_3, uParam1->f_221[iVar11 /*5*/].f_4);
											}
										}
									}
									else if (unk_0xCC2C88B9353CAF70(iParam0, iVar3, Var10.f_3))
									{
										unk_0xF476B943CAAFB802(iParam0, iVar3, Var10.f_3);
										func_126(iParam0, iVar3, Var10.f_3);
									}
									iVar12++;
								}
							}
							iVar6++;
						}
					}
				}
				else if (bParam2)
				{
					if ((iVar2 != 0 && iVar2 != joaat("weapon_unarmed")) && iVar2 != joaat("object"))
					{
						unk_0x681FB12989BD5DEA(iParam0, iVar2);
						iVar6 = 0;
						while (iVar6 < unk_0x333B87730CE53032(iVar8))
						{
							if (unk_0xB94227C531A24A5C(iVar8, iVar6, &Var10))
							{
								if (unk_0xCC2C88B9353CAF70(iParam0, iVar2, Var10.f_3))
								{
									unk_0xF476B943CAAFB802(iParam0, iVar2, Var10.f_3);
									func_126(iParam0, iVar2, Var10.f_3);
								}
							}
							iVar6++;
						}
					}
				}
				if (!bParam2)
				{
					if (iVar3 != 0 && iVar3 != joaat("weapon_unarmed"))
					{
						if (unk_0xFAF00EC53D4815FE(iParam0, iVar3) < iVar14[iVar8])
						{
							unk_0x2EFACEB7CC6076D0(iParam0, iVar3, iVar14[iVar8], 0);
						}
					}
				}
			}
			iVar11++;
		}
		if (((unk_0x96C4B46F194803A7(iParam0, &iVar2, 1) && iVar2 != 0) && iVar2 != joaat("weapon_unarmed")) && iVar2 != joaat("object"))
		{
			iVar0 = unk_0xFAF00EC53D4815FE(iParam0, iVar2);
			if (iVar0 > 1 && iVar0 > unk_0xEC730A4395BA7F81(iParam0, iVar2, 1))
			{
				unk_0x2EFACEB7CC6076D0(iParam0, iVar2, (iVar0 - unk_0xEC730A4395BA7F81(iParam0, iVar2, 1)), 0);
				unk_0xB593ADB2D54F30E1(iParam0, iVar2, unk_0xEC730A4395BA7F81(iParam0, iVar2, 1));
			}
		}
	}
}

int func_124(int iParam0)
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

int func_125(int iParam0, var uParam1)
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

void func_126(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_127(iParam2);
	if (iVar0 != 0)
	{
		if (unk_0xCC2C88B9353CAF70(iParam0, iParam1, iVar0))
		{
			unk_0xF476B943CAAFB802(iParam0, iParam1, iVar0);
		}
	}
}

int func_127(int iParam0)
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

void func_128(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_127(iParam2);
	if (iVar0 != 0)
	{
		unk_0xA641544C89178AFD(iParam0, iParam1, iVar0, iParam3);
	}
}

int func_129(int iParam0)
{
	switch (iParam0)
	{
		case -1860492113:
		case 937772107:
		case 1401650071:
		case 628662130:
		case -985047251:
		case -812944463:
		case -1447352303:
		case -60338860:
		case 2088750491:
		case -1513913454:
		case -1179558480:
		case 1272803094:
		case 1080719624:
		case 792221348:
		case -452181427:
		case -746774737:
		case -2044296061:
		case -199171978:
		case -1428075016:
		case -1735153315:
		case 1796459838:
		case -631911105:
		case 1249283253:
		case -857707587:
		case -1097543898:
		case 1980349969:
		case 1219453777:
		case -1853459190:
		case -2074781016:
		case 457967755:
		case 235171324:
		case 42685294:
		case -687617715:
		case -130843390:
		case -977347227:
		case -378461067:
		case 329939175:
		case 643374672:
		case 807875052:
		case -1401804168:
		case -1096495395:
		case -847811454:
		case -1413108537:
		case 1815270123:
		case 1550611612:
		case 368550800:
		case -1769069349:
		case 24902297:
		case -228041614:
		case -584961562:
		case -1153175946:
		case 1301287696:
		case 1597093459:
		case 1769871776:
		case -1827882671:
		case -996700057:
		case 940943685:
		case 1263226800:
		case -328035840:
		case 1224100642:
		case 899228776:
		case 616006309:
		case -1561952511:
		case 572063080:
		case 1170588613:
		case 966612367:
		case -474112444:
		case 387223451:
		case 617753366:
		case -222378256:
		case 8741501:
		case -601286203:
		case -511433605:
		case -655387818:
		case -282476598:
		case 1739501925:
		case 1178671645:
		case -1069552225:
		case 11918884:
		case 176157112:
		case -220052855:
		case 288456487:
		case 398658626:
		case 628697006:
		case 925911836:
		case 1222307441:
		case 552442715:
		case -648943513:
		case 259780317:
		case -1973342474:
		case 1996130345:
		case -1455657812:
		case -1668263084:
		case 1308243489:
		case 1122574335:
		case 1420313469:
		case 109848390:
		case 593945703:
		case 1142457062:
		case -1869284448:
		case 1931539634:
		case 1624199183:
		case -26834113:
		case -210406055:
		case 423313640:
		case 276639596:
		case -991356863:
		case -1682848301:
		case 996213771:
		case -1214048550:
		case -737430213:
		case 1125852043:
		case 886015732:
		case -1262287139:
		case -295208411:
		case -544154504:
		case 172765678:
		case -1982877449:
		case 2072122460:
		case -1986220171:
		case 1377355801:
		case -1371515465:
		case -1190793877:
		case -1497085720:
		case -1803148180:
		case -1975971886:
		case 36929477:
		case -268444834:
		case -574769446:
		case -882699739:
		case -1468181474:
		case -974541230:
			return 1;
			break;
	}
	return 0;
}

void func_130(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_127(iParam2);
	if (iVar0 != 0)
	{
		unk_0xE13E9DCB2041EBC1(iParam0, iParam1, iVar0);
	}
}

int func_131(int iParam0, int iParam1)
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
				iVar1 = func_125(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0x333B87730CE53032(iVar1))
					{
						if (unk_0xB94227C531A24A5C(iVar1, iVar2, &Var5))
						{
							if (!func_124(Var5.f_3))
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

int func_132(int iParam0)
{
	if (unk_0xB331FCEB94EB05C8())
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
			case 317205821:
			case -1121678507:
			case 125959754:
			case -853065399:
			case -1169823560:
			case -1810795771:
			case 419712736:
			case -1746263880:
			case 1198256469:
			case -1238556825:
			case -1355376991:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_133(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == -61829581)
	{
		if (unk_0xB331FCEB94EB05C8() && func_136())
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (iParam0 == joaat("weapon_firework") && !unk_0xB331FCEB94EB05C8())
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("weapon_assaultsmg"):
			if (!unk_0xB331FCEB94EB05C8())
			{
				if (!func_135(1, 1))
				{
					return 0;
				}
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			if (unk_0xB331FCEB94EB05C8())
			{
				if (!func_135(1, 1))
				{
					return 0;
				}
			}
			break;
		
		case joaat("weapon_railgun"):
			if (!func_134() || unk_0xB331FCEB94EB05C8())
			{
				return 0;
			}
			break;
		
		case joaat("weapon_hatchet"):
			if (!unk_0xB331FCEB94EB05C8())
			{
				if (!func_134() && !Global_262145.f_19626)
				{
					return 0;
				}
			}
			break;
		
		case joaat("weapon_knuckle"):
		case joaat("weapon_marksmanpistol"):
			break;
	}
	iVar0 = 0;
	while (iVar0 < unk_0xEE9976E9D3881F89())
	{
		if (unk_0x078B659F6F2C8960(iVar0, &Var1))
		{
			if (Var1.f_1 == iParam0)
			{
				if (unk_0xC4ED190294E9E658(Var1) || func_132(Var1.f_1))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return unk_0x5CD7D91A0946ECE0(iParam0);
}

int func_134()
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

int func_135(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (unk_0x0E4018692D92041D(Global_106565.f_668.f_1311, 2))
		{
			return 1;
		}
	}
	if (unk_0x67E385FAD2957EF2())
	{
		if (!bParam1 || unk_0x43E505744A9B715D())
		{
			if (!unk_0xF3622D832771D4B9() && !unk_0xF5DB888C353E2BED())
			{
				return 1;
			}
		}
	}
	if (bParam1)
	{
		if (unk_0xA71A137E08393E8F())
		{
			return 0;
		}
	}
	if (unk_0x67E385FAD2957EF2())
	{
		return 1;
	}
	return 0;
}

bool func_136()
{
	return unk_0xE9D7B652961D4AA3(-1691188696);
}

int func_137(int iParam0)
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

int func_138(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	char cVar6[64];
	int iVar7;
	var uVar8;
	char* sVar9;
	
	if (!uParam0->f_39)
	{
		if (uParam0->f_7 == 4)
		{
			return 1;
		}
	}
	if ((!unk_0xBC2FC12AD0FBF72E((*uParam0)[uParam0->f_7]) && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E())) && (*uParam0)[uParam0->f_7] != unk_0x33CD235DF1E6A94E())
	{
		if (!bParam2)
		{
			if ((unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E()) && !unk_0x17260B4EA0652E1C(unk_0x33CD235DF1E6A94E())) && !unk_0x707FFB0E65C1C546(unk_0x33CD235DF1E6A94E()))
			{
				unk_0x31826EF4A8BC8E9F(unk_0x33CD235DF1E6A94E());
			}
			else
			{
				unk_0xED68CDDDE25A144E(unk_0x33CD235DF1E6A94E());
			}
			if ((unk_0x3AF2B3B68DD52355((*uParam0)[uParam0->f_7]) && !unk_0x17260B4EA0652E1C((*uParam0)[uParam0->f_7])) && !unk_0x707FFB0E65C1C546((*uParam0)[uParam0->f_7]))
			{
				unk_0x31826EF4A8BC8E9F((*uParam0)[uParam0->f_7]);
			}
			else
			{
				unk_0xED68CDDDE25A144E((*uParam0)[uParam0->f_7]);
			}
		}
		iVar0 = unk_0x33CD235DF1E6A94E();
		iVar1 = func_759();
		if (!uParam0->f_23)
		{
			func_193(iVar0, 0);
		}
		func_191(iVar1, &iVar0);
		unk_0x5FEE418CE11E6DDE(iVar0, 32, true);
		unk_0x5FEE418CE11E6DDE(iVar0, 250, true);
		iVar2 = func_190(uParam0->f_7);
		func_193((*uParam0)[uParam0->f_7], 0);
		fVar3 = (((to_float(unk_0xE80842D7B53F8525((*uParam0)[uParam0->f_7])) - 100f) / (to_float(unk_0x194C9CD81C97B65B((*uParam0)[uParam0->f_7])) - 100f)) * 100f);
		switch (func_111(unk_0x33CD235DF1E6A94E()))
		{
			case 0:
				if (unk_0xBAECF0E9FB36385B("BulletTime"))
				{
					unk_0xA94473FEE1796AED("BulletTime");
				}
				if (unk_0xBAECF0E9FB36385B("BulletTimeOut"))
				{
					unk_0xA94473FEE1796AED("BulletTimeOut");
				}
				break;
			
			case 1:
				if (unk_0xBAECF0E9FB36385B("DrivingFocus"))
				{
					unk_0xA94473FEE1796AED("DrivingFocus");
				}
				if (unk_0xBAECF0E9FB36385B("DrivingFocusOut"))
				{
					unk_0xA94473FEE1796AED("DrivingFocusOut");
				}
				break;
			
			case 2:
				if (unk_0xBAECF0E9FB36385B("REDMIST"))
				{
					unk_0xA94473FEE1796AED("REDMIST");
				}
				if (unk_0xBAECF0E9FB36385B("REDMISTOut"))
				{
					unk_0xA94473FEE1796AED("REDMISTOut");
				}
				break;
		}
		if (func_108(func_759()))
		{
			if (unk_0xB73BBE22563E911A(unk_0x95B959F18401C09A()))
			{
				unk_0xCBE6E2953ED9652D(unk_0x95B959F18401C09A());
			}
		}
		unk_0x990EAC59E2FE851A(unk_0x95B959F18401C09A(), (*uParam0)[uParam0->f_7], bParam2, 0);
		unk_0x581AE7724ACAD410(3);
		unk_0x581AE7724ACAD410(13);
		if (iParam3 & 1 != 0)
		{
			unk_0x5FEE418CE11E6DDE(unk_0x33CD235DF1E6A94E(), 210, false);
		}
		if (func_187(0) || func_187(3))
		{
			if (Global_17272.f_13)
			{
				iVar4 = 0;
				while (iVar4 < 7)
				{
					if (unk_0x0E4018692D92041D(Global_84464[iVar4 /*5*/].f_1, 2))
					{
						iVar5 = Global_84464[iVar4 /*5*/];
						StringCopy(&cVar6, "MISS_SWITCH_", 64);
						StringConCat(&cVar6, &(Global_84500[Global_71859.f_109[iVar5 /*4*/] /*34*/]), 64);
						unk_0x04C975A5C7EC6831(unk_0x36163153849DFDA1(&cVar6), 1f);
					}
					iVar4++;
				}
			}
		}
		Global_17272.f_13 = 0;
		uParam0->f_5 = func_186(iVar1);
		if (uParam0->f_5 == 4)
		{
			uParam0->f_5 = 3;
		}
		(*uParam0)[uParam0->f_5] = iVar0;
		(*uParam0)[uParam0->f_7] = 0;
		uParam0->f_6 = func_186(iVar2);
		uParam0->f_7 = 4;
		iVar7 = unk_0x33CD235DF1E6A94E();
		unk_0x0CDD28A9DFCE2FCE(unk_0x33CD235DF1E6A94E(), true, 0);
		func_185(iVar7);
		unk_0xACDBFF0189F77062(iVar7, 0, 0);
		if (fVar3 < 25f && !unk_0x60F5B36347629584(unk_0x33CD235DF1E6A94E()))
		{
			unk_0x7FC2040EB34E0E31(unk_0x33CD235DF1E6A94E(), round((((25f / 100f) * (to_float(unk_0x194C9CD81C97B65B(unk_0x33CD235DF1E6A94E())) - 100f)) + 100f)), 0);
		}
		if (bParam1)
		{
			if (unk_0x765F6FEEFF39224F(iVar0))
			{
				unk_0x0CDD28A9DFCE2FCE(iVar0, true, 0);
				func_185(iVar0);
				unk_0xACDBFF0189F77062(iVar0, 0, 0);
				unk_0xB5FEFF716515EF9E(iVar0, 0, 0);
			}
		}
		else if (unk_0x765F6FEEFF39224F(iVar0))
		{
			sVar9 = unk_0x4527878B077DBA42(iVar0, &uVar8);
			if (!unk_0x6D2E2622CA149402(sVar9))
			{
				if (!unk_0xCE3CFF625BEBAA04(sVar9, unk_0xD178EF744F20B712()))
				{
					unk_0x0D21E1FDE062ED99(iVar0, false, 1);
				}
				unk_0x4B8B69DAE5BAC592(&iVar0);
			}
		}
		Global_90994 = 1;
		func_184(unk_0x33CD235DF1E6A94E());
		func_183();
		func_182(iVar2);
		func_177();
		func_174(iVar2);
		func_147(func_172(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 1), 145, 0));
		unk_0xB4BB8844C2D9547A(unk_0x95B959F18401C09A());
		unk_0xAD3D24C8070DA056(unk_0x33CD235DF1E6A94E(), 0);
		unk_0x7D1F395C3A7A37BE(unk_0x33CD235DF1E6A94E(), 1);
		if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
		{
			unk_0x0775925F8B8D6987(unk_0x95B959F18401C09A(), func_146(67));
		}
		if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
		{
			unk_0x164ED91AADC415E3(unk_0x95B959F18401C09A(), func_146(68));
		}
		func_143(iVar2, &iVar7);
		if (((func_46(0) || func_46(3)) || func_46(2)) || func_46(4))
		{
			unk_0x5FEE418CE11E6DDE(iVar7, 32, false);
			unk_0x5FEE418CE11E6DDE(iVar7, 250, false);
		}
		else
		{
			unk_0x5FEE418CE11E6DDE(iVar7, 32, true);
			unk_0x5FEE418CE11E6DDE(iVar7, 250, true);
		}
		if (!func_142())
		{
			func_139();
		}
		Global_90631 = 0;
		return 1;
	}
	else
	{
		if (unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
		{
		}
		if (unk_0xBC2FC12AD0FBF72E((*uParam0)[uParam0->f_7]))
		{
		}
		if (unk_0x33CD235DF1E6A94E() == (*uParam0)[uParam0->f_7])
		{
		}
	}
	return 0;
}

void func_139()
{
	if (Global_91024)
	{
		func_141();
		unk_0x174CECBD338F3A2C(func_140(Global_106565.f_2357.f_539.f_4321));
	}
	else
	{
		unk_0x174CECBD338F3A2C("");
	}
}

char* func_140(var uParam0)
{
	uParam0 = uParam0;
	return "";
}

void func_141()
{
	int iVar0;
	
	if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
	{
		if (func_555(Global_106565.f_2357.f_539.f_4321) != unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()))
		{
			iVar0 = func_111(unk_0x33CD235DF1E6A94E());
			if (func_108(iVar0) && (!func_46(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_108(Global_106565.f_2357.f_539.f_4321))
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

bool func_142()
{
	return Global_17270;
}

void func_143(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_144(4, *iParam1);
			func_144(7, *iParam1);
			func_144(8, *iParam1);
			func_144(11, *iParam1);
			break;
		
		case 1:
			if (Global_106565.f_9079.f_330[2 /*6*/])
			{
				func_144(4, *iParam1);
			}
			func_144(7, *iParam1);
			func_144(8, *iParam1);
			func_144(11, *iParam1);
			if (Global_106565.f_9079.f_99.f_58[126])
			{
				func_144(12, *iParam1);
			}
			break;
		
		case 2:
			if (Global_106565.f_9079.f_330[20 /*6*/])
			{
				func_144(4, *iParam1);
			}
			func_144(7, *iParam1);
			func_144(8, *iParam1);
			func_144(11, *iParam1);
			break;
	}
}

void func_144(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (!unk_0x765F6FEEFF39224F(iParam1))
	{
		return;
	}
	if (func_145(iParam0, iParam1))
	{
		return;
	}
	if (Global_35548[iParam0 /*31*/].f_24 < 5)
	{
		Global_35548[iParam0 /*31*/].f_25[Global_35548[iParam0 /*31*/].f_24] = iParam1;
		Global_35548[iParam0 /*31*/].f_24++;
	}
	else
	{
		bVar2 = false;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iVar1 = Global_35548[iParam0 /*31*/].f_25[iVar0];
			if (!unk_0x765F6FEEFF39224F(iVar1) || unk_0xBC2FC12AD0FBF72E(iVar1))
			{
				Global_35548[iParam0 /*31*/].f_25[iVar0] = iParam1;
				bVar2 = true;
				iVar0 = 6;
			}
			iVar0++;
		}
		if (!bVar2)
		{
		}
	}
}

int func_145(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_35548[iParam0 /*31*/].f_24)
	{
		if (iParam1 == Global_35548[iParam0 /*31*/].f_25[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_146(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_106565.f_9079.f_99.f_58[iParam0];
}

void func_147(int iParam0)
{
	if (iParam0 == 10)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			unk_0x8950ED5730F62EE8(&(Global_32212[(38 / 32)]), (38 % 32));
			func_148(38, 0);
			unk_0x8950ED5730F62EE8(&(Global_32212[(41 / 32)]), (41 % 32));
			func_148(41, 0);
			unk_0x8950ED5730F62EE8(&(Global_32212[(43 / 32)]), (43 % 32));
			func_148(43, 0);
			unk_0x8950ED5730F62EE8(&(Global_32212[(42 / 32)]), (42 % 32));
			func_148(42, 0);
			unk_0x8950ED5730F62EE8(&(Global_32212[(44 / 32)]), (44 % 32));
			func_148(44, 0);
			break;
		
		case 1:
			unk_0x8950ED5730F62EE8(&(Global_32212[(51 / 32)]), (51 % 32));
			func_148(51, 0);
			break;
		
		case 2:
			unk_0x8950ED5730F62EE8(&(Global_32212[(51 / 32)]), (51 % 32));
			func_148(51, 0);
			break;
		
		case 3:
			unk_0x8950ED5730F62EE8(&(Global_32212[(53 / 32)]), (53 % 32));
			func_148(53, 0);
			break;
		
		case 4:
			unk_0x8950ED5730F62EE8(&(Global_32212[(81 / 32)]), (81 % 32));
			func_148(81, 0);
			unk_0x8950ED5730F62EE8(&(Global_32212[(82 / 32)]), (82 % 32));
			func_148(82, 0);
			break;
		
		case 5:
			unk_0x8950ED5730F62EE8(&(Global_32212[(47 / 32)]), (47 % 32));
			func_148(47, 0);
			unk_0x8950ED5730F62EE8(&(Global_32212[(50 / 32)]), (50 % 32));
			func_148(50, 0);
			break;
		
		case 6:
			unk_0x8950ED5730F62EE8(&(Global_32212[(50 / 32)]), (50 % 32));
			func_148(50, 0);
			break;
	}
}

void func_148(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != 226)
	{
		if (Global_71590)
		{
			iVar0 = Global_2437364.f_75[iParam0];
		}
		else
		{
			iVar0 = Global_106565.f_7255[iParam0];
		}
		if (iVar0 != iParam1 || unk_0x0E4018692D92041D(Global_32212[(iParam0 / 32)], (iParam0 % 32)))
		{
			if ((((iParam1 == 4 || iParam1 == 3) || iParam1 == 5) || iParam1 == 6) || iParam1 == 2)
			{
				unk_0x8950ED5730F62EE8(&(Global_32221[(iParam0 / 32)]), (iParam0 % 32));
				Global_32684[iParam0] = iParam1;
			}
			else if (Global_71590)
			{
				Global_2437364.f_75[iParam0] = iParam1;
			}
			else
			{
				Global_106565.f_7255[iParam0] = iParam1;
			}
			unk_0x8950ED5730F62EE8(&(Global_32212[(iParam0 / 32)]), (iParam0 % 32));
			func_150(iParam0);
			if (unk_0x0E4018692D92041D(Global_32212[(iParam0 / 32)], (iParam0 % 32)))
			{
				func_149(iParam0);
			}
		}
	}
}

void func_149(int iParam0)
{
	if (!unk_0x0E4018692D92041D(Global_33155.f_228[(iParam0 / 32)], (iParam0 % 23)))
	{
		unk_0x8950ED5730F62EE8(&(Global_33155.f_228[(iParam0 / 32)]), (iParam0 % 23));
		Global_33155[Global_33155.f_227] = iParam0;
		Global_33155.f_227++;
	}
}

void func_150(int iParam0)
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
	
	if (!func_169())
	{
		return;
	}
	if (unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		return;
	}
	Var0 = { func_807(iParam0) };
	if (unk_0x0E4018692D92041D(Var0.f_4, 2))
	{
		func_155(iParam0, &Var0);
	}
	if (!unk_0x36CDBD83DF514AC4(Var0.f_5))
	{
		if (unk_0x286C823E0969F22A())
		{
			return;
		}
	}
	bVar1 = false;
	bVar2 = false;
	fVar4 = unk_0x16E00F066AFFEA0D(Var0, unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 1), true);
	if ((unk_0x0E4018692D92041D(Global_32221[(iParam0 / 32)], (iParam0 % 32)) && Global_32684[iParam0] == 2) && fVar4 > 210f)
	{
		unk_0xCE689A8E8C42ED78(&(Global_32221[(iParam0 / 32)]), (iParam0 % 32));
		Global_32230[iParam0] = 0;
	}
	if (unk_0x1BCDA92AD0A7835B(joaat("startup_positioning")) == 0)
	{
		if (unk_0x0E4018692D92041D(Global_32457[(iParam0 / 32)], (iParam0 % 32)))
		{
			if (fVar4 < 25f)
			{
				if (Global_93734.f_337 == 0)
				{
					if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
					{
						Global_93734.f_337 = unk_0x65F35477FEAD6F0F(unk_0x33CD235DF1E6A94E());
					}
				}
				iVar5 = Global_93734.f_337;
				iVar6 = unk_0x90D2E06562D440E1(Var0);
				if (iVar5 == iVar6 && iVar5 != 0)
				{
					unk_0x8950ED5730F62EE8(&(Global_32221[(iParam0 / 32)]), (iParam0 % 32));
					Global_32684[iParam0] = 3;
					unk_0x8950ED5730F62EE8(&(Global_32212[(iParam0 / 32)]), (iParam0 % 32));
				}
			}
			unk_0xCE689A8E8C42ED78(&(Global_32457[(iParam0 / 32)]), (iParam0 % 32));
		}
	}
	if (unk_0x0E4018692D92041D(Global_32221[(iParam0 / 32)], (iParam0 % 32)))
	{
		iVar3 = Global_32684[iParam0];
	}
	else if (unk_0x0E4018692D92041D(Var0.f_4, 0))
	{
		if (Global_106565.f_9079)
		{
			iVar3 = func_152(iParam0);
		}
		else
		{
			iVar3 = 0;
		}
		if (func_46(14))
		{
			iVar3 = 0;
		}
	}
	else if (unk_0x0E4018692D92041D(Var0.f_4, 1) && unk_0x1BCDA92AD0A7835B(joaat("ambient_solomon")) == 0)
	{
		if (func_151())
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
		iVar3 = Global_106565.f_7255[iParam0];
	}
	if (Global_32911[iParam0] != iVar3)
	{
		bVar1 = true;
	}
	if (unk_0x0E4018692D92041D(Global_32212[(iParam0 / 32)], (iParam0 % 32)))
	{
		if (!unk_0x0E4018692D92041D(Global_32221[(iParam0 / 32)], (iParam0 % 32)) || (Global_32230[iParam0] == 0 && Global_32684[iParam0] != 2))
		{
			bVar1 = true;
		}
	}
	if (bVar1)
	{
		if (!Global_32211)
		{
		}
		else
		{
			if (!unk_0x36CDBD83DF514AC4(Var0.f_5))
			{
				unk_0x1D8D48272A2B8F0F(Var0.f_5, Var0.f_3, Var0, 0, 0, 0);
			}
			switch (iVar3)
			{
				case 1:
					if (unk_0x0E4018692D92041D(Var0.f_4, 3))
					{
						bVar7 = true;
					}
					else if (fVar4 > 3f || unk_0x7EECA16E87982278(unk_0x66A61623D480DB63(Var0.f_5)) <= 0.015f)
					{
						iVar8 = unk_0x65F35477FEAD6F0F(unk_0x33CD235DF1E6A94E());
						iVar9 = unk_0x90D2E06562D440E1(Var0);
						if (iVar8 != iVar9 || iVar8 == 0)
						{
							bVar7 = true;
						}
					}
					if (bVar7)
					{
						if (Var0.f_6 != 0f)
						{
							unk_0x20F6311890A35A07(Var0.f_5, Var0.f_6, 0, 0);
						}
						unk_0x046ED2CF120C8949(Var0.f_5, iVar3, 0, 1);
						bVar2 = true;
					}
					break;
				
				case 4:
					if (Var0.f_6 != 0f)
					{
						unk_0x20F6311890A35A07(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0x046ED2CF120C8949(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				case 2:
					if (Var0.f_6 != 0f)
					{
						unk_0x20F6311890A35A07(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0x046ED2CF120C8949(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				case 0:
					if (Var0.f_6 != 0f)
					{
						unk_0x20F6311890A35A07(Var0.f_5, Var0.f_6, 0, 1);
					}
					unk_0x046ED2CF120C8949(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				case 3:
					if (Var0.f_6 != 0f)
					{
						unk_0x20F6311890A35A07(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0x046ED2CF120C8949(Var0.f_5, 0, 0, 1);
					bVar2 = true;
					break;
				
				case 5:
					if (Var0.f_6 != 0f)
					{
						unk_0x20F6311890A35A07(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0x046ED2CF120C8949(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				case 6:
					if (Var0.f_6 != 0f)
					{
						unk_0x20F6311890A35A07(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0x046ED2CF120C8949(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				default:
					if (Var0.f_6 != 0f)
					{
						unk_0x20F6311890A35A07(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0x046ED2CF120C8949(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				}
		}
		if (bVar2)
		{
			unk_0xCE689A8E8C42ED78(&(Global_32212[(iParam0 / 32)]), (iParam0 % 32));
			Global_32911[iParam0] = iVar3;
		}
	}
	if (unk_0x0E4018692D92041D(Global_32221[(iParam0 / 32)], (iParam0 % 32)) && Global_32684[iParam0] != 2)
	{
		unk_0x8950ED5730F62EE8(&(Global_32212[(iParam0 / 32)]), (iParam0 % 32));
		func_149(iParam0);
		if (Global_32230[iParam0] < 2)
		{
			Global_32230[iParam0]++;
		}
	}
}

int func_151()
{
	if (unk_0x09287BFEE1D9F6EF(unk_0x95B959F18401C09A(), 0))
	{
		return 0;
	}
	switch (func_759())
	{
		case 0:
			if (Global_106565.f_9079.f_99.f_58[65])
			{
				return 1;
			}
			break;
		
		case 1:
			if (Global_106565.f_9079.f_99.f_58[66])
			{
				return 1;
			}
			break;
		
		case 2:
			if (Global_106565.f_9079.f_99.f_58[65])
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_152(int iParam0)
{
	int iVar0;
	
	iVar0 = func_759();
	if (func_153(iParam0))
	{
		return 1;
	}
	if (iParam0 == 49)
	{
		if (iVar0 == 1)
		{
			if (unk_0x0E4018692D92041D(Global_106565.f_7223[5], 0) || unk_0x0E4018692D92041D(Global_106565.f_7223[6], 0))
			{
				return 0;
			}
		}
		if (func_108(iVar0))
		{
			if (unk_0x0E4018692D92041D(Global_88739[5], iVar0))
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
				if (unk_0x0E4018692D92041D(Global_106565.f_7223[0], 0))
				{
					return 0;
				}
			}
			if (func_108(iVar0))
			{
				if (unk_0x0E4018692D92041D(Global_88739[0], iVar0))
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
				if (unk_0x0E4018692D92041D(Global_106565.f_7223[5], 0))
				{
					return 0;
				}
			}
			if (func_108(iVar0))
			{
				if (unk_0x0E4018692D92041D(Global_88739[5], iVar0))
				{
					return 0;
				}
			}
			break;
		
		case 50:
			if (iVar0 == 1)
			{
				if (unk_0x0E4018692D92041D(Global_106565.f_7223[6], 0))
				{
					return 0;
				}
			}
			if (func_108(iVar0))
			{
				if (unk_0x0E4018692D92041D(Global_88739[6], iVar0))
				{
					return 0;
				}
			}
			break;
		
		case 51:
		case 52:
			if (iVar0 == 2)
			{
				if (unk_0x0E4018692D92041D(Global_106565.f_7223[2], 0))
				{
					return 0;
				}
				if (func_108(iVar0))
				{
					if (unk_0x0E4018692D92041D(Global_88739[2], iVar0))
					{
						return 0;
					}
				}
			}
			else if (iVar0 == 0)
			{
				if (unk_0x0E4018692D92041D(Global_106565.f_7223[1], 0))
				{
					return 0;
				}
				if (func_108(iVar0))
				{
					if (unk_0x0E4018692D92041D(Global_88739[1], iVar0))
					{
						return 0;
					}
				}
			}
			break;
		
		case 53:
			if (iVar0 == 2)
			{
				if (unk_0x0E4018692D92041D(Global_106565.f_7223[3], 0))
				{
					return 0;
				}
			}
			if (func_108(iVar0))
			{
				if (unk_0x0E4018692D92041D(Global_88739[3], iVar0))
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

int func_153(int iParam0)
{
	int iVar0;
	
	if ((iParam0 == 40 || iParam0 == 49) || iParam0 == 52)
	{
		if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
		{
			if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
			{
				iVar0 = unk_0x541D5C57194E73C4(func_154(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 1)));
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

int func_154(int iParam0)
{
	return iParam0;
}

void func_155(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x0E4018692D92041D(uParam1->f_4, 2))
	{
		return;
	}
	iVar0 = func_158();
	iVar1 = func_157(iVar0);
	switch (iParam0)
	{
		case 133:
		case 134:
		case 201:
		case 202:
			if (func_156(iParam0))
			{
				if (iVar1 < 19)
				{
					if (iVar1 >= 7)
					{
						Global_106565.f_7255[iParam0] = 0;
						unk_0x046ED2CF120C8949(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 19)
			{
				if (vdist(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 0), *uParam1) >= 12f)
				{
					Global_106565.f_7255[iParam0] = 1;
					unk_0x046ED2CF120C8949(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (vdist(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 0), *uParam1) >= 12f)
				{
					Global_106565.f_7255[iParam0] = 1;
					unk_0x046ED2CF120C8949(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
				}
			}
			break;
		
		case 199:
		case 200:
		case 203:
		case 204:
			if (func_156(iParam0))
			{
				if (iVar1 < 18)
				{
					if (iVar1 >= 7)
					{
						Global_106565.f_7255[iParam0] = 0;
						unk_0x046ED2CF120C8949(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 18)
			{
				if (vdist(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 0), *uParam1) >= 12f)
				{
					Global_106565.f_7255[iParam0] = 1;
					unk_0x046ED2CF120C8949(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (vdist(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 0), *uParam1) >= 12f)
				{
					Global_106565.f_7255[iParam0] = 1;
					unk_0x046ED2CF120C8949(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
				}
			}
			break;
		
		case 141:
		case 142:
			if (func_156(iParam0))
			{
				if ((unk_0x1BCDA92AD0A7835B(joaat("jewelry_heist")) == 0 && unk_0x1BCDA92AD0A7835B(joaat("jewelry_setup1")) == 0) && !Global_106565.f_9079.f_99.f_58[4])
				{
					if (iVar1 < 21)
					{
						if (iVar1 >= 7)
						{
							Global_106565.f_7255[iParam0] = 0;
							unk_0x046ED2CF120C8949(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
						}
					}
					else
					{
						return;
					}
				}
				else if (!Global_106565.f_9079.f_99.f_58[4])
				{
					Global_106565.f_7255[iParam0] = 0;
					unk_0x046ED2CF120C8949(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
				}
			}
			else if (Global_106565.f_9079.f_99.f_58[4])
			{
				Global_106565.f_7255[iParam0] = 1;
				unk_0x046ED2CF120C8949(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
			}
			else if (unk_0x1BCDA92AD0A7835B(joaat("jewelry_heist")) == 0 && unk_0x1BCDA92AD0A7835B(joaat("jewelry_setup1")) == 0)
			{
				if (iVar1 >= 21)
				{
					if (vdist(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 0), *uParam1) >= 18f)
					{
						Global_106565.f_7255[iParam0] = 1;
						unk_0x046ED2CF120C8949(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
					}
				}
				else if (iVar1 < 7)
				{
					if (vdist(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 0), *uParam1) >= 18f)
					{
						Global_106565.f_7255[iParam0] = 1;
						unk_0x046ED2CF120C8949(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
					}
				}
			}
			break;
		
		case 145:
		case 146:
		case 143:
		case 144:
			if (func_156(iParam0))
			{
				if (iVar1 < 20)
				{
					if (iVar1 >= 9)
					{
						Global_106565.f_7255[iParam0] = 0;
						unk_0x046ED2CF120C8949(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 20)
			{
				if (vdist(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 0), *uParam1) >= 40f)
				{
					Global_106565.f_7255[iParam0] = 1;
					unk_0x046ED2CF120C8949(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 9)
			{
				if (vdist(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 0), *uParam1) >= 40f)
				{
					Global_106565.f_7255[iParam0] = 1;
					unk_0x046ED2CF120C8949(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
				}
			}
			break;
		
		case 147:
		case 148:
			if (!func_156(iParam0))
			{
				Global_106565.f_7255[iParam0] = 1;
				unk_0x046ED2CF120C8949(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
			}
			break;
		
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
			if (!func_156(iParam0))
			{
				if (unk_0x1BCDA92AD0A7835B(joaat("assassin_valet")) == 0)
				{
					Global_106565.f_7255[iParam0] = 1;
					unk_0x046ED2CF120C8949(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
				}
			}
			else if (unk_0x1BCDA92AD0A7835B(joaat("assassin_valet")) > 0)
			{
				Global_106565.f_7255[iParam0] = 0;
				unk_0x046ED2CF120C8949(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
			}
			break;
		
		case 158:
		case 159:
			if (unk_0x1BCDA92AD0A7835B(Global_84500[70 /*34*/].f_6) == 0)
			{
				if (!func_156(iParam0))
				{
					Global_106565.f_7255[iParam0] = 1;
					unk_0x046ED2CF120C8949(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
				}
			}
			break;
		
		case 160:
		case 161:
			if (unk_0x1BCDA92AD0A7835B(joaat("omega2")) == 0)
			{
				if (!func_156(iParam0))
				{
					Global_106565.f_7255[iParam0] = 1;
					unk_0x046ED2CF120C8949(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
				}
			}
			break;
		
		case 70:
		case 71:
		case 72:
			if (!func_156(iParam0) && unk_0x1BCDA92AD0A7835B(Global_84500[26 /*34*/].f_6) == 0)
			{
				Global_106565.f_7255[iParam0] = 1;
				unk_0x046ED2CF120C8949(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
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
			if (!func_156(iParam0))
			{
				if (unk_0x1BCDA92AD0A7835B(Global_84500[43 /*34*/].f_6) == 0)
				{
					Global_106565.f_7255[iParam0] = 1;
					unk_0x046ED2CF120C8949(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 190:
		case 191:
			if (!func_156(iParam0))
			{
				Global_106565.f_7255[iParam0] = 1;
				unk_0x046ED2CF120C8949(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
			}
			break;
		
		case 193:
			if (!func_156(iParam0))
			{
				if (unk_0x1BCDA92AD0A7835B(Global_84500[93 /*34*/].f_6) > 0)
				{
					Global_106565.f_7255[iParam0] = 1;
					unk_0x046ED2CF120C8949(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 198:
			if (!func_156(iParam0))
			{
				Global_106565.f_7255[iParam0] = 1;
				unk_0x046ED2CF120C8949(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
			}
			break;
		
		case 80:
			if (!func_156(iParam0))
			{
				if (unk_0x1BCDA92AD0A7835B(Global_84500[8 /*34*/].f_6) == 0 && unk_0x1BCDA92AD0A7835B(Global_84500[10 /*34*/].f_6) == 0)
				{
					Global_106565.f_7255[iParam0] = 1;
					unk_0x046ED2CF120C8949(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 205:
		case 206:
			if (!func_156(iParam0))
			{
				if (unk_0x1BCDA92AD0A7835B(Global_84500[47 /*34*/].f_6) == 0)
				{
					Global_106565.f_7255[iParam0] = 1;
					unk_0x046ED2CF120C8949(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 207:
			if (unk_0x1BCDA92AD0A7835B(Global_84500[70 /*34*/].f_6) == 0)
			{
				if (!func_156(iParam0))
				{
					Global_106565.f_7255[iParam0] = 1;
					unk_0x046ED2CF120C8949(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
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
			if (unk_0x1BCDA92AD0A7835B(Global_84500[48 /*34*/].f_6) == 0)
			{
				if (!func_156(iParam0))
				{
					Global_106565.f_7255[iParam0] = 1;
					unk_0x046ED2CF120C8949(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
				}
			}
			break;
		
		case 99:
		case 100:
			if (unk_0x1BCDA92AD0A7835B(Global_84500[39 /*34*/].f_6) == 0)
			{
				if (!func_156(iParam0))
				{
					Global_106565.f_7255[iParam0] = 1;
					unk_0x046ED2CF120C8949(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
				}
			}
			break;
		
		case 216:
			if (!func_156(iParam0))
			{
				Global_106565.f_7255[iParam0] = 1;
				unk_0x046ED2CF120C8949(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
			}
			break;
		
		case 217:
		case 218:
			if (!func_156(iParam0))
			{
				Global_106565.f_7255[iParam0] = 1;
				unk_0x046ED2CF120C8949(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
			}
			break;
		
		case 219:
		case 220:
		case 221:
		case 222:
			if (func_156(iParam0))
			{
				Global_106565.f_7255[iParam0] = 0;
				unk_0x046ED2CF120C8949(uParam1->f_5, Global_106565.f_7255[iParam0], 1, 1);
			}
			break;
	}
}

bool func_156(int iParam0)
{
	struct<7> Var0;
	int iVar1;
	
	Var0 = { func_807(iParam0) };
	iVar1 = unk_0x566E267835BAF87E(Var0.f_5);
	return ((iVar1 == 1 || iVar1 == 4) || iVar1 == 2);
}

int func_157(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

var func_158()
{
	var uVar0;
	
	func_168(&uVar0, unk_0xE6A7CE90720B9037());
	func_167(&uVar0, unk_0x7EA67BD818402745());
	func_166(&uVar0, unk_0x13348E86D5B8A052());
	func_161(&uVar0, unk_0x020A28FAE1C09250());
	func_160(&uVar0, unk_0x2C02CAA9C4127339());
	func_159(&uVar0, unk_0xED3F08F762AAA55A());
	return uVar0;
}

void func_159(var uParam0, int iParam1)
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

void func_160(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_161(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_165(*uParam0);
	iVar1 = func_163(*uParam0);
	if (iParam1 < 1 || iParam1 > func_162(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

int func_162(int iParam0, int iParam1)
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

int func_163(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_164(unk_0x0E4018692D92041D(iParam0, 31), -1, 1)) + 2011;
}

int func_164(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_165(int iParam0)
{
	return iParam0 & 15;
}

void func_166(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_167(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_168(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_169()
{
	if ((func_171() == -1 || func_171() == 999) && !func_170() == 0)
	{
		return 1;
	}
	return 0;
}

int func_170()
{
	return Global_25766;
}

int func_171()
{
	return Global_25765;
}

int func_172(vector3 vParam0, int iParam1, int iParam2)
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
				if (func_173(iVar0) || iParam2 == 0)
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

bool func_173(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_106565.f_7223[iParam0], 0);
}

void func_174(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_175(iParam0, iVar0);
		iVar0++;
	}
}

void func_175(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (((iParam0 != 0 || iParam0 != 1) || iParam0 != 2) || iParam0 != 3)
	{
		return;
	}
	func_176(iParam0, iParam1, &iVar2, &iVar3);
	if (unk_0xB331FCEB94EB05C8())
	{
		iVar0 = func_39(iVar3, -1, 0);
	}
	else
	{
		unk_0x75D54ED6C1AD1642(iVar2, &iVar0, -1);
	}
	switch (iParam1)
	{
		case 2:
			fVar1 = (0.8f + (0.4f * (to_float(iVar0) / 100f)));
			unk_0x8FBEA7341C8CA3C5(unk_0x95B959F18401C09A(), fVar1, 1);
			break;
		
		case 7:
			if (unk_0x1BCDA92AD0A7835B(joaat("armenian3")) != 0 || unk_0x1BCDA92AD0A7835B(joaat("trevor3")) != 0)
			{
				Global_90995 = 1;
			}
			else
			{
				fVar1 = (1f - (to_float(iVar0) / 100f));
				unk_0xDFF996ED119D35B1(unk_0x95B959F18401C09A(), fVar1);
				unk_0x35AAB7AD10A50188(unk_0x95B959F18401C09A(), fVar1);
				unk_0x5E1ADA1AE0F71DF1(unk_0x95B959F18401C09A(), fVar1);
			}
			break;
	}
}

void func_176(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp0_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp0_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp0_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp0_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp0_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp0_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp0_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp0_stealth_ability");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp1_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp1_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp1_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp1_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp1_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp1_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp1_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp1_stealth_ability");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp2_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp2_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp2_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp2_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp2_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp2_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp2_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp2_stealth_ability");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 64;
					break;
				
				case 1:
					*uParam3 = 65;
					break;
				
				case 3:
					*uParam3 = 67;
					break;
				
				case 2:
					*uParam3 = 66;
					break;
				
				case 4:
					*uParam3 = 68;
					break;
				
				case 5:
					*uParam3 = 69;
					break;
				
				case 6:
					*uParam3 = 70;
					break;
				
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}
}

void func_177()
{
	struct<50> Var0;
	
	if ((unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()) || !func_108(func_759())) || !func_179())
	{
		return;
	}
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	func_106(unk_0x33CD235DF1E6A94E(), &Var0, 1, -1);
	func_178(1306, Var0[0], -1, 1);
	func_178(1307, Var0[1], -1, 1);
	func_178(1308, Var0[2], -1, 1);
	func_178(1309, Var0[3], -1, 1);
	func_178(1310, Var0[4], -1, 1);
	func_178(1311, Var0[5], -1, 1);
	func_178(1312, Var0[6], -1, 1);
	func_178(1313, Var0[7], -1, 1);
	func_178(1314, Var0[8], -1, 1);
	func_178(1315, Var0[9], -1, 1);
	func_178(1316, Var0[10], -1, 1);
	func_178(1317, Var0[11], -1, 1);
	func_178(1318, Var0.f_13[0], -1, 1);
	func_178(1319, Var0.f_13[1], -1, 1);
	func_178(1320, Var0.f_13[2], -1, 1);
	func_178(1321, Var0.f_13[3], -1, 1);
	func_178(1322, Var0.f_13[4], -1, 1);
	func_178(1323, Var0.f_13[5], -1, 1);
	func_178(1324, Var0.f_13[6], -1, 1);
	func_178(1325, Var0.f_13[7], -1, 1);
	func_178(1326, Var0.f_13[8], -1, 1);
	func_178(1327, Var0.f_13[9], -1, 1);
	func_178(1328, Var0.f_13[10], -1, 1);
	func_178(1329, Var0.f_13[11], -1, 1);
	func_178(1330, Var0.f_26[0], -1, 1);
	func_178(1331, Var0.f_26[1], -1, 1);
	func_178(1332, Var0.f_26[2], -1, 1);
	func_178(1333, Var0.f_26[3], -1, 1);
	func_178(1334, Var0.f_26[4], -1, 1);
	func_178(1335, Var0.f_26[5], -1, 1);
	func_178(1336, Var0.f_26[6], -1, 1);
	func_178(1337, Var0.f_26[7], -1, 1);
	func_178(1338, Var0.f_26[8], -1, 1);
	func_178(1339, Var0.f_26[9], -1, 1);
	func_178(1340, Var0.f_26[10], -1, 1);
	func_178(1341, Var0.f_26[11], -1, 1);
	func_178(1342, Var0.f_39[0], -1, 1);
	func_178(1343, Var0.f_39[1], -1, 1);
	func_178(1344, Var0.f_39[2], -1, 1);
	func_178(1345, Var0.f_39[3], -1, 1);
	func_178(1346, Var0.f_39[4], -1, 1);
	func_178(1347, Var0.f_39[5], -1, 1);
	func_178(1348, Var0.f_39[6], -1, 1);
	func_178(1349, Var0.f_39[7], -1, 1);
	func_178(1350, Var0.f_39[8], -1, 1);
	func_178(1351, Var0.f_49[0], -1, 1);
	func_178(1352, Var0.f_49[1], -1, 1);
	func_178(1353, Var0.f_49[2], -1, 1);
	func_178(1354, Var0.f_49[3], -1, 1);
	func_178(1355, Var0.f_49[4], -1, 1);
	func_178(1356, Var0.f_49[5], -1, 1);
	func_178(1357, Var0.f_49[6], -1, 1);
	func_178(1358, Var0.f_49[7], -1, 1);
	func_178(1359, Var0.f_49[8], -1, 1);
	func_178(1360, func_759(), -1, 1);
	unk_0x353711570A4FAE35(joaat("clo_stored_initial"), 1, 1);
	Global_106565.f_2357.f_539.f_4315 = 1;
}

var func_178(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_41();
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

int func_179()
{
	if (func_181() && func_180(0))
	{
		return 1;
	}
	return 0;
}

var func_180(int iParam0)
{
	return Global_1312373[iParam0];
}

var func_181()
{
	return func_180(func_41() + 1);
}

void func_182(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			unk_0xD2E80177F27FD43F(255, 1166638144, 1862763509);
			unk_0xD2E80177F27FD43F(2, 1862763509, -1865950624);
			unk_0xD2E80177F27FD43F(255, -1865950624, 1862763509);
			unk_0xD2E80177F27FD43F(1, Global_88715, 1862763509);
			unk_0xD2E80177F27FD43F(1, 1862763509, Global_88715);
			unk_0xD2E80177F27FD43F(1, Global_88716, 1862763509);
			unk_0xD2E80177F27FD43F(1, 1862763509, Global_88716);
			unk_0xD2E80177F27FD43F(1, Global_88717, 1862763509);
			unk_0xD2E80177F27FD43F(1, 1862763509, Global_88717);
			break;
		
		case 1:
			unk_0xD2E80177F27FD43F(1, 1166638144, 1862763509);
			unk_0xD2E80177F27FD43F(2, 1862763509, -1865950624);
			unk_0xD2E80177F27FD43F(255, -1865950624, 1862763509);
			unk_0xD2E80177F27FD43F(1, Global_88715, 1862763509);
			unk_0xD2E80177F27FD43F(1, 1862763509, Global_88715);
			unk_0xD2E80177F27FD43F(1, Global_88716, 1862763509);
			unk_0xD2E80177F27FD43F(1, 1862763509, Global_88716);
			unk_0xD2E80177F27FD43F(1, Global_88717, 1862763509);
			unk_0xD2E80177F27FD43F(1, 1862763509, Global_88717);
			break;
		
		case 2:
			unk_0xD2E80177F27FD43F(255, 1166638144, 1862763509);
			unk_0xD2E80177F27FD43F(5, 1862763509, -1865950624);
			unk_0xD2E80177F27FD43F(5, -1865950624, 1862763509);
			unk_0xD2E80177F27FD43F(1, Global_88715, 1862763509);
			unk_0xD2E80177F27FD43F(1, 1862763509, Global_88715);
			unk_0xD2E80177F27FD43F(1, Global_88716, 1862763509);
			unk_0xD2E80177F27FD43F(1, 1862763509, Global_88716);
			unk_0xD2E80177F27FD43F(1, Global_88717, 1862763509);
			unk_0xD2E80177F27FD43F(1, 1862763509, Global_88717);
			break;
		
		default:
			break;
	}
}

void func_183()
{
	int iVar0;
	int iVar1;
	
	func_141();
	iVar0 = unk_0x9FF59D8C46007501();
	if (unk_0xE38E3CF1625A4145(iVar0))
	{
		iVar1 = Global_106565.f_2357.f_539.f_4321;
		if (func_46(14))
		{
			iVar1 = func_111(unk_0x33CD235DF1E6A94E());
		}
		if (iVar1 == 0)
		{
			unk_0x1C95CD840303FC37(iVar0, "BLIP_MICHAEL");
		}
		else if (iVar1 == 1)
		{
			unk_0x1C95CD840303FC37(iVar0, "BLIP_FRANKLIN");
		}
		else if (iVar1 == 2)
		{
			unk_0x1C95CD840303FC37(iVar0, "BLIP_TREV");
		}
		else
		{
			unk_0x1C95CD840303FC37(iVar0, "BLIP_PLAYER");
		}
	}
}

void func_184(int iParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<2> Var6;
	
	iVar0 = 0;
	while (iVar0 < 44)
	{
		iVar2 = func_137(iVar0);
		if (iVar2 != 0)
		{
			iVar3 = unk_0x7D8E16FB3C783D5E(iParam0, iVar2);
			if ((iVar3 != 0 && iVar3 != joaat("weapon_unarmed")) && iVar3 != joaat("object"))
			{
				if (unk_0xFAF00EC53D4815FE(iParam0, iVar3) == -1)
				{
					if (unk_0x29577D0C92766C53(iParam0, iVar3, &uVar1))
					{
						unk_0x0568F2C15E27B386(iParam0, 0, iVar3);
					}
				}
			}
		}
		iVar0++;
	}
	iVar5 = unk_0xEE9976E9D3881F89();
	iVar4 = 0;
	while (iVar4 < iVar5)
	{
		if (unk_0x078B659F6F2C8960(iVar4, &Var6))
		{
			iVar3 = Var6.f_1;
			if (unk_0xFAF00EC53D4815FE(iParam0, iVar3) == -1)
			{
				if (unk_0x29577D0C92766C53(iParam0, iVar3, &uVar1))
				{
					unk_0x0568F2C15E27B386(iParam0, 0, iVar3);
				}
			}
		}
		iVar4++;
	}
}

void func_185(int iParam0)
{
	int iVar0;
	
	iVar0 = func_111(iParam0);
	if (func_108(iVar0) && !unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		if (iParam0 == unk_0x33CD235DF1E6A94E() && unk_0x194C9CD81C97B65B(iParam0) == 200)
		{
			unk_0x493912B04EA384EB(iParam0, round((IntToFloat(unk_0x194C9CD81C97B65B(iParam0)) * Global_262145.f_105)));
		}
		if (Global_106565.f_2357.f_539.f_290[iVar0] <= 0f)
		{
			Global_106565.f_2357.f_539.f_290[iVar0] = 100f;
		}
		else if (Global_106565.f_2357.f_539.f_290[iVar0] <= 10f)
		{
			Global_106565.f_2357.f_539.f_290[iVar0] = 10f;
		}
		unk_0x7FC2040EB34E0E31(iParam0, round((((Global_106565.f_2357.f_539.f_290[iVar0] / 100f) * (to_float(unk_0x194C9CD81C97B65B(iParam0)) - 100f)) + 100f)), 0);
	}
}

int func_186(int iParam0)
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

int func_187(int iParam0)
{
	if (Global_36425 == 15)
	{
		return 0;
	}
	if (func_188(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_188(int iParam0)
{
	return func_189(iParam0, Global_36425);
}

int func_189(int iParam0, int iParam1)
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

int func_190(int iParam0)
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

void func_191(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_192(4, *iParam1, 0);
			func_192(7, *iParam1, 0);
			func_192(8, *iParam1, 0);
			func_192(11, *iParam1, 0);
			break;
		
		case 1:
			func_192(4, *iParam1, 0);
			func_192(7, *iParam1, 0);
			func_192(8, *iParam1, 0);
			func_192(11, *iParam1, 0);
			if (Global_106565.f_9079.f_99.f_58[126])
			{
				func_192(12, *iParam1, 0);
			}
			break;
		
		case 2:
			func_192(4, *iParam1, 0);
			func_192(7, *iParam1, 0);
			func_192(8, *iParam1, 0);
			func_192(11, *iParam1, 0);
			break;
	}
}

void func_192(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	
	if (!bParam2)
	{
		if (!unk_0x765F6FEEFF39224F(iParam1))
		{
			return;
		}
	}
	if (Global_35548[iParam0 /*31*/].f_24 == 0)
	{
		return;
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < Global_35548[iParam0 /*31*/].f_24)
	{
		if (bVar1)
		{
			Global_35548[iParam0 /*31*/].f_25[(iVar0 - 1)] = Global_35548[iParam0 /*31*/].f_25[iVar0];
			Global_35548[iParam0 /*31*/].f_25[iVar0] = 0;
		}
		else if (iParam1 == Global_35548[iParam0 /*31*/].f_25[iVar0])
		{
			Global_35548[iParam0 /*31*/].f_25[iVar0] = 0;
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		Global_35548[iParam0 /*31*/].f_24 = (Global_35548[iParam0 /*31*/].f_24 - 1);
	}
}

void func_193(int iParam0, bool bParam1)
{
	func_201(iParam0);
	func_199(iParam0, bParam1);
	func_198(iParam0);
	func_197(iParam0);
	func_196(iParam0);
	func_195(iParam0);
	func_194(iParam0);
}

void func_194(int iParam0)
{
	int iVar0;
	
	iVar0 = func_111(iParam0);
	if (func_108(iVar0) && !unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		if (iParam0 == unk_0x33CD235DF1E6A94E())
		{
			Global_106565.f_2357.f_539.f_2328[iVar0] = unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A());
		}
	}
}

void func_195(int iParam0)
{
	int iVar0;
	
	iVar0 = func_111(iParam0);
	if (func_108(iVar0) && !unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		Global_106565.f_2357.f_539.f_2318[iVar0 /*3*/] = { unk_0x43D8A2CCB19FE8A8(iParam0) };
	}
}

void func_196(int iParam0)
{
	int iVar0;
	
	iVar0 = func_111(iParam0);
	if (func_108(iVar0) && !unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		if (unk_0x71EC91BA8C88BCE0() && unk_0xC043A1CA19EA599D() != 3)
		{
			if (unk_0x469BF85808505E83() == 8)
			{
				return;
			}
		}
		Global_106565.f_2357.f_539.f_2300[iVar0 /*3*/] = { unk_0xFBB1F99A825CAB09(iParam0, 1) };
		Global_106565.f_2357.f_539.f_2310[iVar0] = unk_0xC472E34C8FBEC678(iParam0);
		Global_106565.f_2357.f_539.f_2314[iVar0] = unk_0x90D54DCF679C0BBE(iParam0);
		if (Global_106565.f_2357.f_539.f_2300[iVar0 /*3*/] >= 8000f)
		{
			Global_106565.f_2357.f_539.f_2300[iVar0 /*3*/] = 7500f;
		}
		else if (Global_106565.f_2357.f_539.f_2300[iVar0 /*3*/] <= -8000f)
		{
			Global_106565.f_2357.f_539.f_2300[iVar0 /*3*/] = -7500f;
		}
		if (Global_106565.f_2357.f_539.f_2300[iVar0 /*3*/].f_1 >= 8000f)
		{
			Global_106565.f_2357.f_539.f_2300[iVar0 /*3*/].f_1 = 7500f;
		}
		else if (Global_106565.f_2357.f_539.f_2300[iVar0 /*3*/].f_1 <= -8000f)
		{
			Global_106565.f_2357.f_539.f_2300[iVar0 /*3*/].f_1 = -7500f;
		}
		if (Global_106565.f_2357.f_539.f_2300[iVar0 /*3*/].f_2 >= 2500f)
		{
			Global_106565.f_2357.f_539.f_2300[iVar0 /*3*/].f_2 = 2000f;
		}
	}
}

void func_197(int iParam0)
{
	int iVar0;
	
	iVar0 = func_111(iParam0);
	if (func_108(iVar0) && !unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		Global_106565.f_2357.f_539.f_294[iVar0] = unk_0xEB5DD88FB5DFC736(iParam0);
	}
}

void func_198(int iParam0)
{
	int iVar0;
	
	iVar0 = func_111(iParam0);
	if (func_108(iVar0) && !unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		Global_106565.f_2357.f_539.f_290[iVar0] = (((to_float(unk_0xE80842D7B53F8525(iParam0)) - 100f) / (to_float(unk_0x194C9CD81C97B65B(iParam0)) - 100f)) * 100f);
	}
}

void func_199(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_111(iParam0);
	if (func_108(iVar0) && !unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		if (iParam0 == unk_0x33CD235DF1E6A94E())
		{
			func_200(iParam0, &(Global_106565.f_2357.f_539.f_298[iVar0 /*477*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_106565.f_2357.f_539.f_1730[iVar2 /*4*/][iVar0] = unk_0x6FB61E0E6BCC8486(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0xE208BE5EDCD25485();
					if (Global_106565.f_2357.f_539.f_1730[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_106565.f_2357.f_539.f_1763 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0x6F8F62A5243893D1(unk_0x95B959F18401C09A(), &iVar3);
			if (iVar0 == 0)
			{
				unk_0x12B6E23F244DDB0F(joaat("sp0_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 1)
			{
				unk_0x12B6E23F244DDB0F(joaat("sp1_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 2)
			{
				unk_0x12B6E23F244DDB0F(joaat("sp2_parachute_current_tint"), iVar3, 1);
			}
		}
	}
}

void func_200(int iParam0, var uParam1)
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
	
	if (!unk_0xBC2FC12AD0FBF72E(iParam0))
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
			iVar3 = func_137(iVar0);
			if (iVar3 != 0)
			{
				Var4 = unk_0x7D8E16FB3C783D5E(iParam0, func_137(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4 != 0 && Var4 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0xFAF00EC53D4815FE(iParam0, Var4);
					if (Var4 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = unk_0x4A37FD3869B2D716(iParam0, Var4);
					Var4.f_4 = unk_0x47098D39C996AE48(iParam0, Var4);
					if (Var4.f_1 == -1)
					{
						if (!unk_0x29577D0C92766C53(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_131(Var4, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0xCC2C88B9353CAF70(iParam0, Var4, iVar2))
						{
							unk_0x8950ED5730F62EE8(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_131(Var4, iVar1);
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
		iVar6 = unk_0xEE9976E9D3881F89();
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			if ((unk_0x078B659F6F2C8960(iVar5, &Var7) && !func_132(Var7.f_1)) && iVar9 < 51)
			{
				if (!unk_0xC4ED190294E9E658(Var7))
				{
					Var4 = Var7.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = unk_0xFAF00EC53D4815FE(iParam0, Var4);
					if (unk_0xEAF6E82C7BDE5A4C(iParam0, Var4, 0))
					{
						Var4.f_3 = unk_0x4A37FD3869B2D716(iParam0, Var4);
						Var4.f_4 = unk_0x47098D39C996AE48(iParam0, Var4);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0x29577D0C92766C53(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar9 /*5*/].f_1 = Var4.f_1;
					iVar10 = 0;
					iVar1 = 0;
					while (iVar1 < unk_0x333B87730CE53032(iVar5))
					{
						if (unk_0xB94227C531A24A5C(iVar5, iVar1, &Var8))
						{
							if (!func_124(Var8.f_3))
							{
								if (unk_0xCC2C88B9353CAF70(iParam0, Var4, Var8.f_3))
								{
									unk_0x8950ED5730F62EE8(&(Var4.f_2), iVar10);
								}
								iVar10++;
							}
						}
						iVar1++;
					}
				}
				if (Var4 != 0)
				{
					if (!unk_0xEAF6E82C7BDE5A4C(iParam0, Var4, 0))
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

void func_201(int iParam0)
{
	int iVar0;
	
	iVar0 = func_111(iParam0);
	if (func_108(iVar0) && !unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		Global_106565.f_2357.f_539.f_2296[iVar0] = func_158();
	}
}

int func_202(var uParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	
	if (!uParam0->f_39)
	{
		uParam0->f_7 = 4;
		uParam0->f_39 = 1;
	}
	if ((iParam1 != 0 && iParam1 != 2) && iParam1 != 1)
	{
	}
	else
	{
		bVar0 = uParam0->f_34[iParam1] == 2;
		if (func_186(func_759()) != iParam1 || bVar0)
		{
			bVar1 = false;
			if ((bVar0 || uParam0->f_24[iParam1] != 0) || ((func_206(iParam1) && func_203(iParam1)) && !uParam0->f_18[iParam1]))
			{
				if (!uParam0->f_23)
				{
					if (!unk_0xBC2FC12AD0FBF72E((*uParam0)[iParam1]) || bVar0)
					{
						if (uParam0->f_34[iParam1] != 1 && uParam0->f_34[iParam1] != 3)
						{
							bVar1 = true;
						}
					}
				}
				else if ((!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()) && (unk_0xB331FCEB94EB05C8() || unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) == 0)) && !unk_0x0E4018692D92041D(Global_91190.f_47, iParam1))
				{
					bVar1 = true;
				}
			}
			else if (!((unk_0x0E4018692D92041D(Global_106565.f_9079.f_2[27 /*3*/], 1) && !Global_3) && !func_5(0)))
			{
				if (uParam0->f_23)
				{
					bVar1 = true;
				}
			}
			if (bVar1)
			{
				uParam0->f_7 = iParam1;
				return 1;
			}
		}
	}
	uParam0->f_39 = 0;
	return 0;
}

int func_203(int iParam0)
{
	if (Global_106565.f_9079 || Global_3)
	{
		if (!Global_71590 || (Global_71590 && iParam0 != func_186(func_205())))
		{
			if (!func_204(func_190(iParam0)))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_204(int iParam0)
{
	if (func_108(iParam0))
	{
		if ((Global_106565.f_9079 || Global_3) || func_5(0))
		{
			return Global_106565.f_2357.f_539.f_2348[iParam0];
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_205()
{
	return Global_106565.f_2357.f_539.f_4323;
}

int func_206(int iParam0)
{
	if ((Global_106565.f_9079 || Global_3) || func_5(0))
	{
		if (!Global_71590 || (Global_71590 && iParam0 != func_186(func_205())))
		{
			if (((iParam0 == 0 && !func_146(115)) || (iParam0 == 1 && !func_146(116))) || (iParam0 == 2 && !func_146(117)))
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_207(int iParam0, bool bParam1, int iParam2)
{
	unk_0x3449EA232F9B8EAD(iParam0, bParam1, iParam2);
	bLocal_453 = bParam1;
}

void func_208(bool bParam0)
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

void func_209(int iParam0, int iParam1)
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

void func_210(int iParam0, int iParam1)
{
	if (func_108(iParam0))
	{
		Global_106565.f_2357.f_539.f_2348[iParam0] = iParam1;
	}
}

void func_211(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	int iVar4;
	var uVar5;
	int iVar6;
	
	if (iParam3 == 1)
	{
		if (!unk_0xCE3CFF625BEBAA04("FinaleC2", unk_0xD178EF744F20B712()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_93719)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_93719)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_271(1);
		if (iParam0 <= Global_93719)
		{
		}
		iVar1 = func_269(unk_0xD178EF744F20B712(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_106565.f_9079.f_330[iVar1 /*6*/].f_1 = 0;
			iVar2 = func_267(iVar1);
			cVar3 = { Global_84500[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_106565.f_9079.f_99.f_205[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			unk_0x4F729C0B5CCB6FEE(&cVar3, iVar2, Global_93719, iParam0);
		}
		else
		{
			iVar4 = func_262(unk_0xD178EF744F20B712(), 1);
			if (iVar4 != -1)
			{
				Global_106565.f_18568[iVar4 /*6*/].f_4 = 0;
				MemCopy(&uVar5, {func_261(iVar4)}, 4);
				unk_0x4F729C0B5CCB6FEE(&uVar5, 0, Global_93719, iParam0);
			}
			else
			{
				iVar6 = func_260(&(Global_93682.f_3));
				if (iVar6 > -1)
				{
					Global_106565.f_24980.f_4[iVar6] = 0;
				}
			}
		}
		Global_87890 = iParam2;
		Global_93719 = iParam0;
		func_212(iParam0, sParam1, iParam4, iParam5);
		if (unk_0xCE3CFF625BEBAA04(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_93719)
	{
	}
}

void func_212(int iParam0, var uParam1, int iParam2, int iParam3)
{
	func_213(&Global_100114, unk_0xD178EF744F20B712(), iParam0, uParam1, iParam3, iParam2);
}

void func_213(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_759();
	uParam0->f_1 = func_158();
	unk_0x615E8CCE4183DFB7(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		func_233(&(uParam0->f_2884), 0);
		func_197(unk_0x33CD235DF1E6A94E());
		func_199(unk_0x33CD235DF1E6A94E(), 0);
		unk_0x96C4B46F194803A7(unk_0x33CD235DF1E6A94E(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_106565.f_2357.f_539.f_294[iVar1];
		if (iVar1 == func_232())
		{
			func_106(unk_0x33CD235DF1E6A94E(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_93407[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_93407[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_93407[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_93407[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_93407[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_93407[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_93407[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_93407[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_93407[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_93407[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/] = { Global_106565.f_2357.f_539.f_298[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] = { Global_106565.f_2357.f_539.f_298[iVar1 /*477*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				unk_0x75D54ED6C1AD1642(joaat("sp0_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp0_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				unk_0x75D54ED6C1AD1642(joaat("sp1_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp1_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				unk_0x75D54ED6C1AD1642(joaat("sp2_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp2_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				unk_0x75D54ED6C1AD1642(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_106565.f_20558.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_53668[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_106565.f_2357.f_539.f_2407[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_106565.f_2357.f_539.f_2407[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2838[iVar1 /*15*/][iVar0] = Global_106565.f_2357.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_5[iVar0] = Global_106565.f_2357.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_10[iVar0] = Global_106565.f_2357.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2345[iVar1 /*164*/][iVar0] = Global_106565.f_2357[iVar1 /*164*/][iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_4[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_8[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_12[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_16[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_20[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_24[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_28[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_32[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_36[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_40[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_44[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_48[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_52[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_56[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_60[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_64[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_68[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_72[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_76[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_80[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_84[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_88[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_92[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_96[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_100[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_104[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_108[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_112[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_116[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_120[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_124[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_128[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_132[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_136[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_140[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_144[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_148[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_152[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_156[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_160[iVar0] = Global_106565.f_2357[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0x75D54ED6C1AD1642(joaat("sp0_special_ability"), &(uParam0->f_2341[0]), -1);
	unk_0x75D54ED6C1AD1642(joaat("sp1_special_ability"), &(uParam0->f_2341[1]), -1);
	unk_0x75D54ED6C1AD1642(joaat("sp2_special_ability"), &(uParam0->f_2341[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_215(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
	}
	func_214(&(uParam0->f_2980));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_214(var uParam0)
{
	*uParam0 = Global_89561;
	uParam0->f_1 = Global_89562;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_215(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = unk_0x33CD235DF1E6A94E();
	}
	if (unk_0x765F6FEEFF39224F(iParam2))
	{
		uParam1->f_5 = func_111(iParam2);
	}
	if (func_229(iParam2, &iVar0, iParam3, iParam5))
	{
		func_216(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0x765F6FEEFF39224F(iVar0))
	{
		if (!unk_0xD62C4419A41F106A(iVar0, 0))
		{
			if (unk_0xD470A4E16E9AAE0E(iVar0, joaat("skylift")) && unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iVar0, 0))
			{
				func_216(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_216(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0x91D5C8283D19AF49(iParam2, 0))
	{
		func_218(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_217(iParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

int func_217(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_93682.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_218(var uParam0, int iParam1, int iParam2)
{
	func_224(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_221(iParam1, 145, 0);
	uParam0->f_11 = func_220(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_219(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { unk_0xFBB1F99A825CAB09(iParam1, 1) };
		uParam0->f_6 = unk_0xC472E34C8FBEC678(iParam1);
		uParam0->f_3 = { unk_0x43D8A2CCB19FE8A8(iParam1) };
		if (unk_0xD4B4F68F3449CBEC(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_71314 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_219(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x765F6FEEFF39224F(Global_70409.f_484[iVar0]))
		{
			if (iParam0 == Global_70409.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_220(int iParam0)
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

int func_221(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0x765F6FEEFF39224F(iParam0))
	{
		return 0;
	}
	if (!unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x765F6FEEFF39224F(Global_91043[iVar0]))
		{
			if (Global_91043[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_91053[iVar0])
				{
					if (iParam2 == 0 || unk_0x541D5C57194E73C4(iParam0) == func_222(iParam1, iParam2))
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

int func_222(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_108(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_223(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_223(int iParam0, var uParam1, int iParam2)
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

void func_224(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		func_228(uParam1);
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
		if (uParam1->f_65 == -1 && !func_227(uParam1->f_66))
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
		func_226(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x34B1602009421B58(iParam0, iVar0 + 1))
			{
				unk_0x8950ED5730F62EE8(&(uParam1->f_77), func_225(iVar0 + 1));
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

int func_225(int iParam0)
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

int func_226(int iParam0, var uParam1, var uParam2)
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

int func_227(int iParam0)
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

void func_228(var uParam0)
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

int func_229(int iParam0, var uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		if (!unk_0xBC2FC12AD0FBF72E(iParam0))
		{
			if (iParam0 == unk_0x33CD235DF1E6A94E())
			{
				*uParam1 = unk_0x8918EC905FC8975D();
			}
			else
			{
				*uParam1 = unk_0xF2C96862595654B4(iParam0, 1);
			}
			if (unk_0x765F6FEEFF39224F(*uParam1))
			{
				if (unk_0x91D5C8283D19AF49(*uParam1, 0))
				{
					if (iParam2 == 0 || unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(*uParam1, 1), unk_0xFBB1F99A825CAB09(iParam0, 1), true) < 100f)
					{
						if (unk_0xD470A4E16E9AAE0E(*uParam1, joaat("taxi")))
						{
							if (unk_0x7BDC41A7CA0C77A2(*uParam1, -1, 0) != iParam0 && unk_0x7BDC41A7CA0C77A2(*uParam1, -1, 0) != 0)
							{
								return 0;
							}
						}
						if (func_230(*uParam1, func_759(), 1))
						{
							sVar0 = unk_0xD178EF744F20B712();
							if (!unk_0xCE3CFF625BEBAA04(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!unk_0xF0D230FB550CD6EB(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (unk_0xA0EDFFB6CF5B314A(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0x821D9C8EA372B2F8(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (unk_0xD470A4E16E9AAE0E(*uParam1, joaat("blimp")))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_230(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0x765F6FEEFF39224F(iParam0) || !unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_231(iParam1, iVar0, &sVar1, &iVar2))
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

int func_231(int iParam0, int iParam1, char* sParam2, var uParam3)
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

int func_232()
{
	func_141();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_233(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	var uVar2;
	int iVar3;
	
	*uParam0 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 1) };
	uParam0->f_3 = unk_0xC472E34C8FBEC678(unk_0x33CD235DF1E6A94E());
	uParam0->f_5 = unk_0xDBAC1EFC22D74E44(unk_0x33CD235DF1E6A94E());
	if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
	{
		uParam0->f_4 = unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A());
	}
	if (vdist(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (vdist(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (vdist(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.472f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (unk_0x1BCDA92AD0A7835B(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (unk_0x0E4018692D92041D(Global_71838, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (unk_0x0E4018692D92041D(Global_71838, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (unk_0x0E4018692D92041D(Global_71838, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (unk_0x0E4018692D92041D(Global_71838, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (unk_0x65F35477FEAD6F0F(unk_0x33CD235DF1E6A94E()) == unk_0x30B9FCF52BAAEB11(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, 1, 0) || unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, 1, 0))
	{
		*uParam0 = { -601.59f, 2099.197f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (vdist(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.376f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (vdist(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.932f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (vdist(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.93f, 2594.153f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (func_237(&iVar0))
		{
			if (func_235(iVar0, &vVar1, &uVar2))
			{
				vVar1.z = (vVar1.z + 1f);
				*uParam0 = { vVar1 };
				uParam0->f_3 = uVar2;
			}
		}
		else if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0))
		{
			iVar3 = func_759();
			if (iVar3 == 0)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar3 == 1)
			{
				*uParam0 = { -68.5531f, -1824.377f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar3 == 2)
			{
				*uParam0 = { -220.8189f, -1162.302f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, 1, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, 1, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_234(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_234(vector3 vParam0, char* sParam1, vector3 vParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xA4EE7D490EB4E0C9(vParam0))
	{
		iVar0 = unk_0x30B9FCF52BAAEB11(vParam2, sParam1);
		if (!unk_0xDE9B75BB528AC06E(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0x09D41AEC5DBEC2D9(vParam0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_235(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
		
		case 1:
			*uParam1 = { 129.8484f, -1716.528f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
		
		case 2:
			*uParam1 = { -1296.913f, -1120.999f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
		
		case 3:
			*uParam1 = { 1938.028f, 3718.736f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
		
		case 4:
			*uParam1 = { 1197.866f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
		
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
		
		case 6:
			*uParam1 = { -287.7696f, 6238.081f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
		
		case 7:
			*uParam1 = { 99.2876f, -1395.16f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
		
		case 8:
			*uParam1 = { 1679.445f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
		
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
		
		case 10:
			*uParam1 = { -1088.054f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
		
		case 11:
			*uParam1 = { 1194.163f, 2695.644f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
		
		case 12:
			*uParam1 = { -821.2829f, -1088.027f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
		
		case 13:
			*uParam1 = { -3.3416f, 6521.303f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
		
		case 14:
			*uParam1 = { -1208.417f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
		
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
		
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
		
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
		
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
		
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
		
		case 20:
			*uParam1 = { -1461.355f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
		
		case 21:
			*uParam1 = { -1347.739f, -1278.573f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
		
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
		
		case 23:
			*uParam1 = { 1858.774f, 3742.393f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
		
		case 24:
			*uParam1 = { -286.3272f, 6202.802f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
		
		case 25:
			*uParam1 = { -1161.596f, -1417.7f, 3.712f };
			*uParam2 = 246.9161f;
			break;
		
		case 26:
			*uParam1 = { 1308.952f, -1660.611f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
		
		case 27:
			*uParam1 = { -3161.585f, 1074.214f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
		
		case 28:
			*uParam1 = { 28.423f, -1110.814f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
		
		case 29:
			*uParam1 = { 1704.966f, 3749.709f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
		
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
		
		case 31:
			*uParam1 = { 837.7854f, -1017.963f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
		
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
		
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
		
		case 34:
			*uParam1 = { -1323.06f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
		
		case 35:
			*uParam1 = { -1106.102f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
		
		case 36:
			*uParam1 = { -3157.932f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
		
		case 37:
			*uParam1 = { 2562.882f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
		
		case 38:
			*uParam1 = { 822.48f, -2142.875f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
		
		case 39:
			*uParam1 = { -1137.053f, -1993.916f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
		
		case 40:
			*uParam1 = { 717.8107f, -1084.081f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
		
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
		
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
		
		case 43:
			*uParam1 = { 1201.709f, 2664.813f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
		
		case 44:
			*uParam1 = { -200.1521f, -1297.502f, 30.296f };
			*uParam2 = 269.0687f;
			break;
		
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 49:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 50:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 51:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_236(*uParam1, 0f, 0f, 0f, 0);
}

bool func_236(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_237(var uParam0)
{
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0) && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		if (func_259())
		{
			*uParam0 = func_242(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 0), 6, -1, 0, 1, -1);
			if (func_241(*uParam0) && !func_238(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_238(int iParam0)
{
	return func_239(iParam0, 0, 1);
}

int func_239(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return unk_0x0E4018692D92041D(Global_93734.f_1350[iParam0], iParam1);
	}
	else if (unk_0xB331FCEB94EB05C8())
	{
		if (func_171() == 0)
		{
			return unk_0x0E4018692D92041D(func_39(func_240(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x0E4018692D92041D(Global_106565.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_240(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 827;
			break;
		
		case 1:
			return 828;
			break;
		
		case 2:
			return 829;
			break;
		
		case 3:
			return 830;
			break;
		
		case 4:
			return 831;
			break;
		
		case 5:
			return 832;
			break;
		
		case 6:
			return 833;
			break;
		
		case 7:
			return 834;
			break;
		
		case 8:
			return 835;
			break;
		
		case 9:
			return 836;
			break;
		
		case 10:
			return 837;
			break;
		
		case 11:
			return 838;
			break;
		
		case 12:
			return 839;
			break;
		
		case 13:
			return 840;
			break;
		
		case 14:
			return 841;
			break;
		
		case 15:
			return 843;
			break;
		
		case 16:
			return 844;
			break;
		
		case 17:
			return 845;
			break;
		
		case 18:
			return 846;
			break;
		
		case 19:
			return 847;
			break;
		
		case 20:
			return 848;
			break;
		
		case 21:
			return 849;
			break;
		
		case 22:
			return 850;
			break;
		
		case 23:
			return 851;
			break;
		
		case 24:
			return 852;
			break;
		
		case 25:
			return 853;
			break;
		
		case 26:
			return 854;
			break;
		
		case 27:
			return 855;
			break;
		
		case 28:
			return 856;
			break;
		
		case 29:
			return 857;
			break;
		
		case 30:
			return 858;
			break;
		
		case 31:
			return 859;
			break;
		
		case 32:
			return 860;
			break;
		
		case 33:
			return 861;
			break;
		
		case 34:
			return 862;
			break;
		
		case 35:
			return 863;
			break;
		
		case 36:
			return 864;
			break;
		
		case 37:
			return 865;
			break;
		
		case 38:
			return 866;
			break;
		
		case 39:
			return 867;
			break;
		
		case 40:
			return 871;
			break;
		
		case 41:
			return 872;
			break;
		
		case 42:
			return 873;
			break;
		
		case 43:
			return 874;
			break;
		
		case 44:
			return 8917;
			break;
		
		case 45:
			return 3808;
			break;
		
		case 46:
			return 5383;
			break;
		
		case 47:
			return 6155;
			break;
		
		case 48:
			return 7232;
			break;
		
		case 49:
			return 7878;
			break;
		
		case 50:
			return 8265;
			break;
		
		case 51:
			return 8267;
			break;
		
		default:
			break;
	}
	return 10383;
}

int func_241(int iParam0)
{
	return func_239(iParam0, 5, 1);
}

int func_242(vector3 vParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 51)
	{
		if (iParam1 == 6 || iParam1 == func_258(iVar0))
		{
			if (!bParam3 || func_257(iVar0))
			{
				fVar1 = unk_0x16E00F066AFFEA0D(vParam0, func_243(iVar0, 0), true);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam2) || iParam2 == -1)) && (iParam4 || iVar0 != 21)) && iVar0 != iParam5)
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

Vector3 func_243(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
		
		case 45:
			return func_254(Global_95769);
			break;
		
		case 46:
			if (Global_1589661 != func_253())
			{
				if (func_252(Global_1589661))
				{
					return func_245(2, 2);
				}
				else if (func_244(Global_1589661))
				{
					return func_245(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 47:
			return 510.1f, 4749.5f, -69f;
			break;
		
		case 48:
			return -1422.197f, -3015.803f, -79.1603f;
			break;
		
		case 49:
			return 203.0799f, 5200.189f, -89.6f;
			break;
		
		case 50:
			return Global_1689895;
			break;
		
		case 51:
			return 1100f, 220f, -50f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_244(int iParam0)
{
	if (iParam0 != func_253())
	{
		if ((unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_253, 0) || unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_253, 1)) || unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_253, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_245(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar1 = { 1000000f, 1000000f, 1000000f };
	if (Global_1589661 != func_253())
	{
		if (iParam1 == 3)
		{
			if (func_246(iParam0, 1, &vVar0, 0, 0))
			{
				vVar1 = { vVar0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (unk_0x0E4018692D92041D(Global_1589819[Global_1589661 /*818*/].f_273.f_253, 4))
			{
				if (func_246(iParam0, 1, &vVar0, 0, 0))
				{
					vVar1 = { vVar0 };
				}
			}
			else if (unk_0x0E4018692D92041D(Global_1589819[Global_1589661 /*818*/].f_273.f_253, 5))
			{
				if (func_246(iParam0, 2, &vVar0, 0, 0))
				{
					vVar1 = { vVar0 };
				}
			}
		}
	}
	return vVar1;
}

int func_246(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	vector3 vVar1;
	struct<4> Var2;
	vector3 vVar3;
	
	if (!func_251(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_251(iParam1, &vVar1))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var2 = { func_249(iParam0) };
	}
	else
	{
		Var2 = { func_248(iParam0) };
	}
	vVar3 = { Var2 - Var0 };
	vVar3 = { func_247(vVar3, -Var0.f_3.f_2) };
	vVar3 = { func_247(vVar3, vVar1.f_3.f_2) };
	*uParam2 = { unk_0xCD1EDCB38767B47C(vVar1, 0f, vVar3) };
	uParam2->f_3 = { Var2.f_3 };
	return 1;
}

Vector3 func_247(vector3 vParam0, float fParam1)
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = sin(fParam1);
	fVar2 = cos(fParam1);
	vVar0.x = ((vParam0.x * fVar2) - (vParam0.y * fVar1));
	vVar0.y = ((vParam0.x * fVar1) + (vParam0.y * fVar2));
	vVar0.z = vParam0.z;
	return vVar0;
}

struct<6> func_248(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 1:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 2:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 3:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 4:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 5:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 6:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 7:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 8:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_249(int iParam0)
{
	return func_250(iParam0);
}

struct<6> func_250(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.408f, -3012.32f, -38.45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.037f, -3012.318f, -39.99874f };
			break;
		
		case 7:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.063f, -3012.368f, -39.99875f };
			break;
		
		case 9:
			Var0 = { 1105.665f, -3012.334f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		
		case 11:
			Var0 = { 1102.928f, -3012.693f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102.942f, -3011.315f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101.994f, -3012.878f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103.152f, -3013.032f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		
		case 14:
			Var0 = { 1102.917f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102.922f, -3010.887f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101.682f, -3009.227f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102.453f, -3008.51f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		
		case 17:
			Var0 = { 1104.34f, -3008.698f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104.344f, -3009.618f, -37.98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105.459f, -3009.793f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104.783f, -3010.433f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104.025f, -3007.316f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 24:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 25:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 26:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 31:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 32:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 33:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 38:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 39:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		
		case 40:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105.174f, -3004.16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105.175f, -3005.818f, -37.91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106.6f, -3000.847f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106.601f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		
		case 52:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		
		case 53:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		
		case 54:
			Var0 = { 1102.476f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103.593f, -3008.27f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_251(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_252(int iParam0)
{
	if (iParam0 != func_253())
	{
		if ((unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_253, 3) || unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_253, 4)) || unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_253, 5))
		{
			return 1;
		}
	}
	return 0;
}

int func_253()
{
	return -1;
}

Vector3 func_254(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974.9542f, -3000.091f, -35f;
			break;
		
		case 6:
			return -1586.36f, -566.6f, 106.17f;
			break;
		
		case 7:
			return -1389.87f, -465.17f, 82.68f;
			break;
		
		case 8:
			return -145.81f, -590.2f, 171.13f;
			break;
		
		case 9:
			return -62.49f, -823.55f, 288.74f;
			break;
		
		case 4:
			return 1102.515f, -3158.888f, -38.5186f;
			break;
		
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
			break;
		
		case 10:
			return 1103.562f, -3000f, -40f;
			break;
		
		case 11:
			return 938.3077f, -3196.112f, -100f;
			break;
		
		case 12:
			return -1266.802f, -3014.836f, -49.4895f;
			break;
		
		case 13:
			return 520.0001f, 4750f, -70f;
			break;
		
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
			break;
		
		case 15:
			return -1604.664f, -3012.583f, -79.9999f;
			break;
		
		case 16:
			return -1421.015f, -3012.587f, -80f;
			break;
		
		case 17:
			if (func_255() == 0)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_255()
{
	return func_256(unk_0x95B959F18401C09A());
}

var func_256(int iParam0)
{
	return unk_0xA8B379916562FD8E(Global_2424047[iParam0 /*416*/].f_309.f_3, 28, 31);
}

int func_257(int iParam0)
{
	return func_239(iParam0, 0, 0);
}

int func_258(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
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
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
	}
	return 6;
}

bool func_259()
{
	return Global_93734.f_339 > 0;
}

int func_260(char* sParam0)
{
	if (unk_0xCE3CFF625BEBAA04("BailBond1", sParam0))
	{
		return 0;
	}
	else if (unk_0xCE3CFF625BEBAA04("BailBond2", sParam0))
	{
		return 1;
	}
	else if (unk_0xCE3CFF625BEBAA04("BailBond3", sParam0))
	{
		return 2;
	}
	else if (unk_0xCE3CFF625BEBAA04("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

struct<2> func_261(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_262(char* sParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = unk_0x36163153849DFDA1(sParam0);
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < 63)
	{
		iVar0 = iVar3;
		func_263(iVar0, &sVar1);
		if (unk_0x36163153849DFDA1(sVar1) == iVar2)
		{
			return iVar0;
		}
		iVar3++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

void func_263(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_264(uParam1, "Abigail1", func_266(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_265(iParam0), 1, 0);
			break;
		
		case 1:
			func_264(uParam1, "Abigail2", func_266(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_265(iParam0), 1, 0);
			break;
		
		case 2:
			func_264(uParam1, "Barry1", func_266(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_265(iParam0), 1, 0);
			break;
		
		case 3:
			func_264(uParam1, "Barry2", func_266(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_265(iParam0), 1, 1);
			break;
		
		case 4:
			func_264(uParam1, "Barry3", func_266(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_265(iParam0), 0, 0);
			break;
		
		case 5:
			func_264(uParam1, "Barry3A", func_266(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_265(iParam0), 0, 1);
			break;
		
		case 6:
			func_264(uParam1, "Barry3C", func_266(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_265(iParam0), 0, 1);
			break;
		
		case 7:
			func_264(uParam1, "Barry4", func_266(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_265(iParam0), 0, 0);
			break;
		
		case 8:
			func_264(uParam1, "Dreyfuss1", func_266(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_265(iParam0), 0, 0);
			break;
		
		case 9:
			func_264(uParam1, "Epsilon1", func_266(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_265(iParam0), 0, 0);
			break;
		
		case 10:
			func_264(uParam1, "Epsilon2", func_266(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_265(iParam0), 1, 0);
			break;
		
		case 11:
			func_264(uParam1, "Epsilon3", func_266(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_265(iParam0), 0, 0);
			break;
		
		case 12:
			func_264(uParam1, "Epsilon4", func_266(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_265(iParam0), 0, 0);
			break;
		
		case 13:
			func_264(uParam1, "Epsilon5", func_266(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_265(iParam0), 1, 0);
			break;
		
		case 14:
			func_264(uParam1, "Epsilon6", func_266(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_265(iParam0), 0, 1);
			break;
		
		case 15:
			func_264(uParam1, "Epsilon7", func_266(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_265(iParam0), 0, 0);
			break;
		
		case 16:
			func_264(uParam1, "Epsilon8", func_266(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_265(iParam0), 1, 0);
			break;
		
		case 17:
			func_264(uParam1, "Extreme1", func_266(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_265(iParam0), 0, 1);
			break;
		
		case 18:
			func_264(uParam1, "Extreme2", func_266(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_265(iParam0), 0, 1);
			break;
		
		case 19:
			func_264(uParam1, "Extreme3", func_266(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_265(iParam0), 0, 1);
			break;
		
		case 20:
			func_264(uParam1, "Extreme4", func_266(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_265(iParam0), 0, 0);
			break;
		
		case 21:
			func_264(uParam1, "Fanatic1", func_266(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_265(iParam0), 1, 0);
			break;
		
		case 22:
			func_264(uParam1, "Fanatic2", func_266(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_265(iParam0), 1, 0);
			break;
		
		case 23:
			func_264(uParam1, "Fanatic3", func_266(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_265(iParam0), 0, 1);
			break;
		
		case 24:
			func_264(uParam1, "Hao1", func_266(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_265(iParam0), 0, 1);
			break;
		
		case 25:
			func_264(uParam1, "Hunting1", func_266(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_265(iParam0), 0, 1);
			break;
		
		case 26:
			func_264(uParam1, "Hunting2", func_266(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_265(iParam0), 0, 1);
			break;
		
		case 27:
			func_264(uParam1, "Josh1", func_266(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_265(iParam0), 1, 0);
			break;
		
		case 28:
			func_264(uParam1, "Josh2", func_266(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_265(iParam0), 1, 1);
			break;
		
		case 29:
			func_264(uParam1, "Josh3", func_266(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_265(iParam0), 1, 1);
			break;
		
		case 30:
			func_264(uParam1, "Josh4", func_266(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_265(iParam0), 1, 0);
			break;
		
		case 31:
			func_264(uParam1, "Maude1", func_266(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_265(iParam0), 0, 1);
			break;
		
		case 32:
			func_264(uParam1, "Minute1", func_266(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_265(iParam0), 0, 1);
			break;
		
		case 33:
			func_264(uParam1, "Minute2", func_266(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_265(iParam0), 0, 1);
			break;
		
		case 34:
			func_264(uParam1, "Minute3", func_266(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_265(iParam0), 0, 1);
			break;
		
		case 35:
			func_264(uParam1, "MrsPhilips1", func_266(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_265(iParam0), 0, 0);
			break;
		
		case 36:
			func_264(uParam1, "MrsPhilips2", func_266(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_265(iParam0), 0, 0);
			break;
		
		case 37:
			func_264(uParam1, "Nigel1", func_266(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_265(iParam0), 1, 0);
			break;
		
		case 38:
			func_264(uParam1, "Nigel1A", func_266(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_265(iParam0), 1, 1);
			break;
		
		case 39:
			func_264(uParam1, "Nigel1B", func_266(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_265(iParam0), 1, 1);
			break;
		
		case 40:
			func_264(uParam1, "Nigel1C", func_266(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_265(iParam0), 1, 1);
			break;
		
		case 41:
			func_264(uParam1, "Nigel1D", func_266(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_265(iParam0), 1, 1);
			break;
		
		case 42:
			func_264(uParam1, "Nigel2", func_266(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_265(iParam0), 1, 1);
			break;
		
		case 43:
			func_264(uParam1, "Nigel3", func_266(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_265(iParam0), 1, 1);
			break;
		
		case 44:
			func_264(uParam1, "Omega1", func_266(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_265(iParam0), 0, 0);
			break;
		
		case 45:
			func_264(uParam1, "Omega2", func_266(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_265(iParam0), 0, 0);
			break;
		
		case 46:
			func_264(uParam1, "Paparazzo1", func_266(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_265(iParam0), 0, 1);
			break;
		
		case 47:
			func_264(uParam1, "Paparazzo2", func_266(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_265(iParam0), 0, 1);
			break;
		
		case 48:
			func_264(uParam1, "Paparazzo3", func_266(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_265(iParam0), 0, 0);
			break;
		
		case 49:
			func_264(uParam1, "Paparazzo3A", func_266(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_265(iParam0), 0, 1);
			break;
		
		case 50:
			func_264(uParam1, "Paparazzo3B", func_266(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_265(iParam0), 0, 1);
			break;
		
		case 51:
			func_264(uParam1, "Paparazzo4", func_266(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_265(iParam0), 0, 0);
			break;
		
		case 52:
			func_264(uParam1, "Rampage1", func_266(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_265(iParam0), 0, 0);
			break;
		
		case 54:
			func_264(uParam1, "Rampage3", func_266(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_265(iParam0), 1, 0);
			break;
		
		case 55:
			func_264(uParam1, "Rampage4", func_266(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_265(iParam0), 1, 0);
			break;
		
		case 56:
			func_264(uParam1, "Rampage5", func_266(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_265(iParam0), 0, 0);
			break;
		
		case 53:
			func_264(uParam1, "Rampage2", func_266(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_265(iParam0), 1, 0);
			break;
		
		case 57:
			func_264(uParam1, "TheLastOne", func_266(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_265(iParam0), 0, 1);
			break;
		
		case 58:
			func_264(uParam1, "Tonya1", func_266(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_265(iParam0), 0, 1);
			break;
		
		case 59:
			func_264(uParam1, "Tonya2", func_266(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_265(iParam0), 0, 1);
			break;
		
		case 60:
			func_264(uParam1, "Tonya3", func_266(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_265(iParam0), 0, 1);
			break;
		
		case 61:
			func_264(uParam1, "Tonya4", func_266(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_265(iParam0), 0, 1);
			break;
		
		case 62:
			func_264(uParam1, "Tonya5", func_266(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_265(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_264(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
{
	uParam0->f_4 = iParam4;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam3;
	uParam0->f_5 = iParam5;
	uParam0->f_6 = { vParam6 };
	uParam0->f_9 = iParam7;
	StringCopy(&(uParam0->f_10), sParam8, 16);
	uParam0->f_14 = iParam9;
	uParam0->f_15 = iParam10;
	StringCopy(&(uParam0->f_16), sParam11, 24);
	uParam0->f_22 = iParam12;
	uParam0->f_23 = iParam13;
	uParam0->f_24 = iParam14;
	uParam0->f_25 = iParam15;
	uParam0->f_26 = iParam16;
	uParam0->f_27 = iParam17;
	uParam0->f_28 = iParam18;
	uParam0->f_29 = uParam19;
	uParam0->f_30 = iParam20;
	uParam0->f_31 = iParam21;
}

int func_265(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_266(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_261(iParam0) };
	if (unk_0x786AF4A44E1B5B4B(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

int func_267(int iParam0)
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_268(Global_106565.f_9079.f_99.f_205[10]);
			break;
		
		case 74:
		case 75:
			return func_268(Global_106565.f_9079.f_99.f_205[8]);
			break;
		
		case 84:
		case 85:
			return func_268(Global_106565.f_9079.f_99.f_205[11]);
			break;
		
		case 90:
			return func_268(Global_106565.f_9079.f_99.f_205[7]);
			break;
		
		case 93:
			return func_268(Global_106565.f_9079.f_99.f_205[9]);
			break;
	}
	return 0;
}

int func_268(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 3:
		case 5:
		case 6:
		case 8:
			return 0;
			break;
		
		case 2:
		case 4:
		case 7:
		case 9:
			return 1;
			break;
	}
	return -1;
}

int func_269(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x36163153849DFDA1(sParam0);
	iVar1 = func_270(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_270(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_84500[iVar0 /*34*/].f_6 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (!bParam1)
	{
	}
	return -1;
}

void func_271(bool bParam0)
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

int func_272()
{
	if (iLocal_83 == 0)
	{
		settimera(0);
		iLocal_83 = 1;
		return 1;
	}
	return 0;
}

void func_273()
{
	vector3 vVar0;
	vector3 vVar1;
	int iVar2;
	
	if (func_272())
	{
		func_211(5, "stageBeatDown", 1, 0, 0, 1);
		func_207(unk_0x95B959F18401C09A(), 0, 2048);
		iLocal_85 = 0;
		if (!unk_0x765F6FEEFF39224F(iLocal_166))
		{
			iLocal_166 = unk_0x7CA67831169E8AA6(unk_0x12772FC739A13F81(joaat("weapon_pistol")), vLocal_105, 1, true, 0);
		}
		unk_0x2F0A6390D863D337(iLocal_166, uLocal_248[0], unk_0xFCAF61876D23D31D(uLocal_248[0], 28422), vLocal_101, vLocal_101, 0, 0, 0, 0, 2, 1);
		func_121(&iLocal_135);
		while (!func_278(&iLocal_135, 18, -56.436f, -1098.818f, 25.4345f, 31.149f, 1))
		{
			func_773(0);
		}
		unk_0xE9220325B81B2901(iLocal_135, 0);
		unk_0x7FC2040EB34E0E31(iLocal_135, 400, 0);
		unk_0x493912B04EA384EB(iLocal_135, 400);
		unk_0xC4A347124F39D998(iLocal_135, iLocal_140, 3000, 0, 2);
		unk_0x9611832841071B69(iLocal_135, true);
		func_120(iLocal_135, 0);
		unk_0x71CA80D41E1338B4(func_835(18));
		func_784(&uLocal_288, 8, iLocal_135, "SIMEON", 0, 1);
		if (!func_815("WindowSmashed"))
		{
			unk_0x5B1DF403216CD477("V_CARSHOWROOM_PS_WINDOW_UNBROKEN", "V_CARSHOWROOM_PS_WINDOW_BROKEN");
			func_809("WindowSmashed", 1);
		}
		unk_0xA3B3E54143896FE9(iLocal_140, -0.84f, 2.21f, 0.22f, 100f, 400f, 1);
		unk_0xA3B3E54143896FE9(iLocal_140, 0.67f, 2.12f, -0.06f, 100f, 400f, 1);
		unk_0xA3B3E54143896FE9(iLocal_140, 0.05f, 1.97f, 0.2f, 100f, 400f, 1);
		unk_0x9611832841071B69(iLocal_140, true);
		unk_0x3427206E004F448F("Armenian_3_mcs_8", 4);
		unk_0xB5D26BFA756D0D11(4f, 4f, 3);
		unk_0xC2E971FFC45AE37D();
		if (func_119())
		{
			func_117(unk_0x33CD235DF1E6A94E(), -56.13f, -1097.6f, 25.16f, 0f, 1);
			if (!bLocal_92)
			{
				func_118(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 1), 1101004800);
			}
			unk_0xC7E6A5D90DED6E0B((func_115(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 1), -56.13f, -1097.6f, 25.16f) - unk_0xC472E34C8FBEC678(unk_0x33CD235DF1E6A94E())));
			uLocal_235 = unk_0x4ACCC545ABA180AC(-56.13f, -1097.6f, 25.16f, 10f, "DES_Showroom");
			while (!unk_0xC0832B9258378F00(uLocal_235))
			{
				uLocal_235 = unk_0x4ACCC545ABA180AC(-56.13f, -1097.6f, 25.16f, 10f, "DES_Showroom");
				func_773(0);
			}
			if (unk_0xC0832B9258378F00(uLocal_235))
			{
				if (unk_0x59AECBDFE1CC0576(uLocal_235) != 10)
				{
					unk_0xED0F188B4F015CBB(uLocal_235, 9);
				}
			}
			unk_0xC7E6A5D90DED6E0B(0f);
			unk_0xD6EDA274D82E8678(-10f, 1065353216);
			func_114(18);
		}
	}
	else
	{
		if (unk_0xA812C1043FE92B58())
		{
			func_21("Franklin", func_787(1), 0, 2);
			func_21("Michael", func_787(0), 0, 2);
			unk_0xEE199BCFFA2081A1("Siemon", iLocal_135, 0);
		}
		unk_0x65F534DDBF48606F("M_Complications", 0);
		switch (iLocal_48)
		{
			case 0:
				func_207(unk_0x95B959F18401C09A(), 1, 0);
				unk_0xC7C47D4054903839(iLocal_140, Vector(26.58f, -1097.347f, -57.3905f) + Vector(0f, 1.23f, 2.08f), 0, 0, 1);
				unk_0x1C8705F667F673EA(iLocal_140, -8.8082f, 0.1836f, -58.895f, 2, 1);
				func_210(0, 1);
				func_209(115, 1);
				if (func_759() != 0)
				{
					func_202(&uLocal_248, 0);
					func_138(&uLocal_248, 1, 1, 1);
				}
				unk_0xCBE6E2953ED9652D(unk_0x95B959F18401C09A());
				vVar0 = { vLocal_101 };
				vVar1 = { vLocal_101 };
				iVar2 = unk_0x00E62F31D05EB2AC("DEFAULT_ANIMATED_CAMERA", 1);
				iLocal_187 = unk_0x38A6890195DD00D1(vVar0, vVar1, 2);
				unk_0x19CC0F2E313BAF2E(iLocal_187, iLocal_140, 0);
				unk_0xED68CDDDE25A144E(func_787(0));
				unk_0x094626C0798AE1F8(func_787(0), iLocal_140, 2);
				unk_0x108754262311D34F(func_787(0), sLocal_123, "_leadin_mic", 1000f, -4f, -1, 2, 0, 0, 0, 0);
				unk_0xBC7F713A43DC55C7(func_787(0), "_leadin_Mic_facial", sLocal_123);
				unk_0xED68CDDDE25A144E(func_787(1));
				unk_0xED68CDDDE25A144E(func_787(1));
				unk_0x108754262311D34F(func_787(1), sLocal_123, "_leadin_fra", 1000f, -4f, -1, 2, 0, 0, 0, 0);
				unk_0xBC7F713A43DC55C7(func_787(1), "_leadin_Fra_facial", sLocal_123);
				unk_0x76909D790DDFDCE9(iVar2, iLocal_187, "_leadin_cam", sLocal_123);
				unk_0x63F0B040CE6EDF0F(true, 0, 3000, 1, 0, 0);
				func_774("ARM3_SMASH1", 7, 1, 0);
				if (unk_0xBB5E373390A5F824())
				{
					unk_0xACCDA78123DB57B0(500);
				}
				func_14();
				break;
			
			case 1:
				func_276(iLocal_140, 1f, 1, 0f, 0, 1, 0);
				func_207(unk_0x95B959F18401C09A(), 0, 0);
				if (unk_0x67F8A06049221C80(iLocal_140) < 0.1f)
				{
					unk_0x0848C95091F9ECB9(iLocal_140, 5, -unk_0x9499AACAF0452A29(iLocal_140), vLocal_101, 0, 1, 0, 0, 0, 1);
				}
				if ((!unk_0xDB4C79A9697E6A55(iLocal_187) || (unk_0xDB4C79A9697E6A55(iLocal_187) && unk_0x4EDDCE9AAE0FC976(iLocal_187) >= 0.7f)) && func_275())
				{
					unk_0xB5D26BFA756D0D11(6f, 0f, 3);
					unk_0xEF6624A3AFF02A02(uLocal_248[1], "Franklin", 0, 0, 0);
					unk_0xEF6624A3AFF02A02(iLocal_135, "Siemon", 0, 0, 0);
					unk_0xEF6624A3AFF02A02(iLocal_140, "Jimmys_Car", 0, 0, 0);
					unk_0xF49FF7B4A27C1B94(iLocal_140, 0, 0, 0f);
					func_836(1, 1, 1, 0, 0, 0);
					unk_0x2EC4FFC8740228D3(1);
					func_773(0);
					unk_0x9FABD0AB045A5D6E(iLocal_140, false, 1, 0);
					unk_0x63F0B040CE6EDF0F(false, 0, 3000, 1, 0, 0);
					func_120(iLocal_135, 1);
					unk_0xCE04CE961AF41AB9(-36.6411f, -1102.191f, 26.3443f, 30f, 1, 0, 0, false);
					if (unk_0x765F6FEEFF39224F(iLocal_142[0]) && !unk_0xD62C4419A41F106A(iLocal_142[0], 0))
					{
						func_116(iLocal_142[0], -36.6411f, -1102.191f, 26.3443f, 154.2468f);
					}
					if (unk_0x765F6FEEFF39224F(iLocal_142[1]) && !unk_0xD62C4419A41F106A(iLocal_142[1], 0))
					{
						func_116(iLocal_142[1], -41.7113f, -1100.042f, 26.0671f, 138.7067f);
					}
					if (unk_0x765F6FEEFF39224F(iLocal_142[2]) && !unk_0xD62C4419A41F106A(iLocal_142[2], 0))
					{
						func_116(iLocal_142[2], -46.3951f, -1097.778f, 26.3222f, 108.3411f);
					}
					if (unk_0x765F6FEEFF39224F(iLocal_142[3]) && !unk_0xD62C4419A41F106A(iLocal_142[3], 0))
					{
						func_116(iLocal_142[3], -50.0989f, -1094.534f, 26.0671f, 88.9621f);
					}
					unk_0xF68C9C9A191F2B68(4);
					func_274(&iLocal_166);
					func_14();
				}
				break;
			
			case 2:
				unk_0xC5565C10067F0E40(0f);
				if (unk_0x765F6FEEFF39224F(iLocal_142[3]) && !unk_0xD62C4419A41F106A(iLocal_142[3], 0))
				{
					unk_0x5766BA01380E23CF(iLocal_142[3], 1);
				}
				if (!func_815("SwitchFX[Armenian_3_mcs_8]"))
				{
					if (unk_0x7E15D709E86EB560() > round((12.86667f * 1000f)) && unk_0x3320F94CE5E0322B())
					{
						unk_0x0B1F8038F56C12B7("SwitchSceneMichael", 0, 0);
						unk_0x0F8EAEEC97DDBCB3(-1, "Hit_1", "LONG_PLAYER_SWITCH_SOUNDS", 1);
						func_809("SwitchFX[Armenian_3_mcs_8]", 1);
					}
				}
				if (unk_0x3CA08F647CEAD042("Siemon", joaat("ig_siemonyetarian")))
				{
					unk_0x0648A75D3F60E864(iLocal_135, iLocal_197);
					unk_0x083F9B3B112E951F(iLocal_135, 1);
					unk_0x40C1F3276801777F(iLocal_135, func_787(0), 0.5f, -1f, 0f, 0);
					unk_0x880B00F3FAE4C022(iLocal_135, 0, 0);
					unk_0x9611832841071B69(iLocal_135, false);
				}
				if (unk_0x3CA08F647CEAD042("Jimmys_Car", 0))
				{
					unk_0x65EE1E8C987CD1DB(iLocal_140, 1);
				}
				if (unk_0x3CA08F647CEAD042("Michael", 0))
				{
					unk_0x88246B349FCC2454(-57.6017f, -1095.091f, 25.4343f, 500f, 0);
					unk_0xA53C1C92EE35EC0E(1, 0);
					unk_0xA53C1C92EE35EC0E(10, 0);
					unk_0xA53C1C92EE35EC0E(9, 0);
					unk_0xA53C1C92EE35EC0E(2, 0);
					unk_0xA53C1C92EE35EC0E(3, 0);
					unk_0xA53C1C92EE35EC0E(4, 0);
					unk_0xA53C1C92EE35EC0E(5, 0);
					unk_0xDF9905432E81DC6E(unk_0x95B959F18401C09A(), 0);
					unk_0x379324D4CAF6C2D1(0);
					unk_0x40C1F3276801777F(func_787(0), iLocal_135, 0f, -1f, 0f, 0);
					unk_0x880B00F3FAE4C022(func_787(0), 0, 0);
					if (iLocal_66)
					{
						unk_0x816788E0CA50BB83(iLocal_65);
						unk_0x6BD09AFA46A11CA2(0, iLocal_67);
						iLocal_66 = 0;
					}
				}
				if (unk_0x15661F4AC08D433A())
				{
					if (iLocal_66)
					{
						unk_0x816788E0CA50BB83(iLocal_65);
						unk_0x6BD09AFA46A11CA2(0, iLocal_67);
						iLocal_66 = 0;
					}
					func_836(0, 1, 1, 0, 0, 0);
					func_207(unk_0x95B959F18401C09A(), 1, 0);
					unk_0x274C6068B660FFB4(unk_0x33CD235DF1E6A94E(), joaat("weapon_unarmed"), true);
					func_112("ARM3_BEAT", 7500, 1);
					func_19("ARM3HLP_LOCKON", 1, -1);
					func_14();
				}
				break;
			
			case 3:
				if (unk_0x51EBF893ED085755() && !unk_0x9270A1E407520471())
				{
					func_8();
				}
				break;
		}
		if (iLocal_48 < 2)
		{
			unk_0xC2E971FFC45AE37D();
		}
		unk_0x41E36A540F8F323F(iLocal_135, 149, 1);
		unk_0x41E36A540F8F323F(iLocal_135, 69, 1);
		unk_0x34A51926277F67BC(iLocal_135, 0);
		unk_0x581AE7724ACAD410(2);
	}
	if (func_7())
	{
		unk_0x1C4E3934365AD58F();
		if (unk_0xE980BAFD70E8A4B3())
		{
			unk_0x4ABB9EF39DA515D7();
		}
		unk_0x63F0B040CE6EDF0F(false, 0, 3000, 1, 0, 0);
		func_836(0, 1, 1, 0, 0, 0);
		unk_0x4742207943D8EB65();
		while (unk_0xC7D0A132A56D5FCB())
		{
			func_773(0);
		}
		if (unk_0x4278060E716E1226(iLocal_140))
		{
			unk_0xA34C4FA4A49499A6(iLocal_140);
		}
		unk_0x9611832841071B69(iLocal_140, false);
		func_781(&iLocal_152);
		func_274(&iLocal_166);
		iLocal_236++;
	}
}

void func_274(int iParam0)
{
	if (unk_0x765F6FEEFF39224F(*iParam0))
	{
		unk_0xEC26F4BFC9942A0C(iParam0);
	}
}

bool func_275()
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

int func_276(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_277(iParam0);
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

void func_277(int iParam0)
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

int func_278(int iParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_108(iParam1))
	{
		iVar0 = func_835(iParam1);
		unk_0xB815670C37E03CDE(iVar0);
		if (unk_0x5D98D654CDC2165A(iVar0))
		{
			if (unk_0x765F6FEEFF39224F(*iParam0))
			{
				unk_0x4B8B69DAE5BAC592(iParam0);
			}
			*iParam0 = unk_0x9BA5CF280376EEA4(26, iVar0, vParam2, fParam3, 0, false);
			unk_0xFDA78B1CA2B4FB0A(*iParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (unk_0xA603FBA9F3C17D3A(*iParam0, 3) == 0)
				{
					unk_0x93AA93DA1B137032(*iParam0, 5, 2, 0, 0);
				}
			}
			func_279(*iParam0, iParam1);
			if (bParam4)
			{
				unk_0x71CA80D41E1338B4(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_279(var uParam0, int iParam1)
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
	Global_89546[(iVar0 - 3)] = uParam0;
	return 1;
}

void func_280()
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	bool bVar3;
	
	if (func_272())
	{
		func_211(4, "stageRammingSpeed", 0, 0, 0, 1);
		iLocal_100 = 0;
		func_760(1);
		func_322(&uLocal_223, 0, 0);
		iVar0 = unk_0x30B9FCF52BAAEB11(-49.9775f, -1097.287f, 25.4223f, "v_carshowroom");
		if (unk_0x802F1160A12FDAC3(iVar0, "csr_beforeMission"))
		{
			unk_0x74D5C2C6E4D82BF7(iVar0, "csr_beforeMission");
		}
		if (unk_0x802F1160A12FDAC3(iVar0, "csr_afterMissionA"))
		{
			unk_0x74D5C2C6E4D82BF7(iVar0, "csr_afterMissionA");
		}
		if (unk_0x802F1160A12FDAC3(iVar0, "csr_afterMissionB"))
		{
			unk_0x74D5C2C6E4D82BF7(iVar0, "csr_afterMissionB");
		}
		if (!unk_0x802F1160A12FDAC3(iVar0, "csr_inMission"))
		{
			unk_0xAFF9058FF075CFD5(iVar0, "csr_inMission");
		}
		func_802(179, 1, 0, 1, 0);
		func_207(unk_0x95B959F18401C09A(), 1, 0);
		unk_0x9FD099B0593CD91D(func_787(1), true);
		unk_0x9FD099B0593CD91D(func_787(0), true);
		unk_0x1FCB57E33CEA24E8("clipset@missarmenian3@franklin_driving");
		while (!unk_0xCDA107F8BEE35F40("clipset@missarmenian3@franklin_driving"))
		{
			unk_0x1FCB57E33CEA24E8("clipset@missarmenian3@franklin_driving");
			func_327();
			func_773(0);
		}
		unk_0xCA57931F89E1D249(unk_0x33CD235DF1E6A94E(), unk_0x36163153849DFDA1("MISS_ARMENIAN3_FRANKLIN_TENSE"));
		iLocal_85 = 1;
		unk_0x4D5F3407F1F37E28(func_787(0), 1, 1, 1, 1, 1, 1, 0, 0);
		unk_0x5FEE418CE11E6DDE(func_787(0), 118, false);
		unk_0x5FEE418CE11E6DDE(func_787(0), 208, true);
		unk_0x4A852F02088ECC9D(func_787(0), 1);
		unk_0x052830EE89C97404(0);
		unk_0xE03D98B1FC2A0C4E(iLocal_140, "BJXL_ARMENIAN_3");
		unk_0x9FABD0AB045A5D6E(iLocal_140, true, 1, 0);
		if (!unk_0x765F6FEEFF39224F(iLocal_166))
		{
			iLocal_166 = unk_0x7CA67831169E8AA6(unk_0x12772FC739A13F81(joaat("weapon_pistol")), vLocal_105, 1, true, 0);
		}
		unk_0x2F0A6390D863D337(iLocal_166, uLocal_248[0], unk_0xFCAF61876D23D31D(uLocal_248[0], 28422), vLocal_101, vLocal_101, 0, 0, 0, 0, 2, 1);
		while (!unk_0x7B3767E83E6F888A(uLocal_248[0]))
		{
			func_773(0);
		}
		if (!unk_0x1CE8F0A08E65CA6A(uLocal_248[0], sLocal_115, "michaelappears_loop_michael", 3))
		{
			unk_0x108754262311D34F(uLocal_248[0], sLocal_115, "michaelappears_loop_michael", 8f, -4f, -1, 2, 0, 0, 0, 0);
		}
		func_784(&uLocal_288, 1, uLocal_248[0], "MICHAEL", 0, 1);
		func_822();
		func_809("ARM3_GUN", 1);
		func_809("ARM3_GUNA", 1);
		func_809("ARM3_GUNB", 1);
		func_781(&iLocal_151);
		func_11(&iLocal_151, vLocal_112, 0);
		iLocal_53 = (unk_0xE3903F59E2F22150() + 120000);
		unk_0x3427206E004F448F("Armenian_3_mcs_8", 8);
		if (!unk_0x7C71681384076318("ARM_3_RAM_DEALERSHIP"))
		{
			unk_0xDEFB5E2E5CBD460A("ARM_3_RAM_DEALERSHIP");
		}
		func_321(16);
		func_114(14);
		unk_0xA56208AB5F9EC61A(iLocal_140, 0);
		if (!iLocal_66)
		{
			iLocal_65 = unk_0xCB68F86E41CE5197();
			iLocal_67 = unk_0xCB75C331DD5DDCCC(0);
			iLocal_66 = 1;
		}
		unk_0xC2E971FFC45AE37D();
		unk_0x63F0B040CE6EDF0F(false, 0, 3000, 1, 0, 0);
		func_836(0, 1, 1, 0, 0, 0);
		if (func_119())
		{
			func_114(15);
			unk_0xF28F45F667D62218(iLocal_140, 0);
			unk_0x1FEA416E00837AFC(0);
			unk_0x31826EF4A8BC8E9F(uLocal_248[0]);
			unk_0x094626C0798AE1F8(uLocal_248[0], iLocal_140, 2);
			if (!unk_0x1CE8F0A08E65CA6A(uLocal_248[0], sLocal_115, "michaelappears_loop_michael", 3))
			{
				unk_0x108754262311D34F(uLocal_248[0], sLocal_115, "michaelappears_loop_michael", 8f, -4f, -1, 2, 0, 0, 0, 0);
			}
			unk_0x31826EF4A8BC8E9F(unk_0x33CD235DF1E6A94E());
			unk_0x094626C0798AE1F8(unk_0x33CD235DF1E6A94E(), iLocal_140, -1);
			if (unk_0x765F6FEEFF39224F(iLocal_140) && !unk_0xD62C4419A41F106A(iLocal_140, 0))
			{
				unk_0xD303E20CB0AE4AD0(iLocal_140, 4);
				func_116(iLocal_140, -72.6144f, -1106.491f, 25.0423f, 299.8838f);
			}
			unk_0xCE04CE961AF41AB9(-59.8f, -1098.78f, 24.92f, 100f, 1, 0, 0, false);
			if (!bLocal_92)
			{
				func_118(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 1), 1101004800);
			}
			unk_0x7749193AF003DC67(iVar0);
			iLocal_87 = 0;
			unk_0xC7E6A5D90DED6E0B((func_115(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 1), -56.13f, -1097.6f, 25.16f) - unk_0xC472E34C8FBEC678(unk_0x33CD235DF1E6A94E())));
			uLocal_235 = unk_0x4ACCC545ABA180AC(-56.13f, -1097.6f, 25.16f, 10f, "DES_Showroom");
			while (!unk_0xC0832B9258378F00(uLocal_235))
			{
				uLocal_235 = unk_0x4ACCC545ABA180AC(-56.13f, -1097.6f, 25.16f, 10f, "DES_Showroom");
				func_773(0);
			}
			if (!unk_0xC0832B9258378F00(uLocal_235))
			{
				if (unk_0x59AECBDFE1CC0576(uLocal_235) != 3)
				{
					unk_0xED0F188B4F015CBB(uLocal_235, 2);
				}
			}
			unk_0xBEADAF07D2339505(iLocal_140, -148.7664f, -1150f, 23.1124f, 1, 0, 0, 1);
			unk_0x1C8705F667F673EA(iLocal_140, 3.385f, 2.9552f, -88.1208f, 2, 1);
			vVar1 = { unk_0xFBB1F99A825CAB09(iLocal_140, 1) };
			unk_0xCE04CE961AF41AB9(vVar1, 15f, 1, 0, 0, false);
			unk_0x739461708028C973(vVar1.x, vVar1.y, 30f, -55.8188f, -1096.415f, 20f, 20f, 0, 0, 0, 0, 0, 0);
			unk_0xAF9EA4E314ED45C2(-57.64452f, -1097.634f, 35.42235f, -145.0667f, -1156.564f, 23.02604f, 20f, 0, 0, 1);
			unk_0xC7E6A5D90DED6E0B((func_115(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 1), -56.13f, -1097.6f, 25.16f) - unk_0xC472E34C8FBEC678(unk_0x33CD235DF1E6A94E())));
			unk_0xD6EDA274D82E8678(-10f, 1065353216);
			if (unk_0xBB5E373390A5F824())
			{
				unk_0xACCDA78123DB57B0(500);
			}
		}
	}
	else
	{
		if (timera() < 100)
		{
			unk_0xA56208AB5F9EC61A(iLocal_140, 0);
		}
		func_112("ARM3_RAM1", 4000, 1);
		if (unk_0xA812C1043FE92B58())
		{
			func_21("Franklin", func_787(1), 0, 2);
			func_21("Michael", func_787(0), 0, 2);
		}
		if (unk_0xC0832B9258378F00(uLocal_235))
		{
			if (unk_0x59AECBDFE1CC0576(uLocal_235) != 5)
			{
				if (!func_815("rfShowroomCrash1"))
				{
					unk_0xED0F188B4F015CBB(uLocal_235, 4);
					func_809("rfShowroomCrash1", 1);
				}
			}
			else
			{
				func_809("rfShowroomCrash1", 0);
			}
		}
		else
		{
			uLocal_235 = unk_0x4ACCC545ABA180AC(-56.13f, -1097.6f, 25.16f, 10f, "DES_Showroom");
		}
		if (!unk_0x765F6FEEFF39224F(iLocal_167))
		{
			iLocal_167 = unk_0xDD9A603448A23A17(joaat("prop_showroom_glass_1b"), -59.87f, -1098.84f, 27.2f, 1, true, 0);
			unk_0x1C8705F667F673EA(iLocal_167, 0f, 0f, 121.5f, 2, 1);
			unk_0xF70578F5CD9822CB(iLocal_167, true);
		}
		if (iLocal_159 != 0)
		{
			unk_0x4CCFE01B29861BB4(iLocal_159);
		}
		if ((unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 1), -60.15f, -1098.69f, 25.44f, true) < 100f && (!unk_0xC4B7D5901EDA35B5() || unk_0x37FBC14B2F5D54DB(203) == 0)) && !func_771())
		{
			if (unk_0xE3903F59E2F22150() > iLocal_51)
			{
				if (iLocal_49 == 0)
				{
					func_309("ARM3_RAM", "ARM3_RAM_1", 7, 1);
					iLocal_49++;
				}
				else if (iLocal_49 == 1)
				{
					func_309("ARM3_RAM", "ARM3_RAM_2", 7, 1);
					iLocal_49++;
				}
				else if (iLocal_49 == 2)
				{
					func_309("ARM3_RAM", "ARM3_RAM_3", 7, 1);
					iLocal_49++;
				}
				iLocal_51 = (unk_0xE3903F59E2F22150() + unk_0x9EC3B269A34A2BEE(20000, 25000));
			}
		}
		if (unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iLocal_140, 0))
		{
			if (!unk_0xE38E3CF1625A4145(iLocal_151))
			{
				unk_0xD362430CD61A9B08();
				func_112("ARM3_RAM1", 7500, 0);
				func_781(&iLocal_150);
				func_11(&iLocal_151, vLocal_112, 0);
			}
		}
		else if (!unk_0xE38E3CF1625A4145(iLocal_150))
		{
			unk_0xD362430CD61A9B08();
			func_112("ARM3_CAR2", 7500, 1);
			func_781(&iLocal_151);
			func_306(&iLocal_150, &iLocal_140, 0);
		}
		fLocal_68 = fLocal_69;
		fLocal_69 = unk_0x16E00F066AFFEA0D(-56.71602f, -1097.17f, 25.4223f, unk_0xFBB1F99A825CAB09(iLocal_140, 1), true);
		if (unk_0x8BB475EA09C9A0EB(iLocal_140) > 5f)
		{
			unk_0x23298AB8A7D0F403(iLocal_167, false, 0);
		}
		else
		{
			unk_0x23298AB8A7D0F403(iLocal_167, true, 0);
		}
		if ((((((unk_0xC2F708DE8AD68197(unk_0x2CA911E7569D12EA(iLocal_140, -1f, 2.2f, -0.25f), -59.76477f, -1098.799f, 25.42232f, -53.61449f, -1095.079f, 28.92234f, 5.25f, 0, 1) || unk_0xC2F708DE8AD68197(unk_0x2CA911E7569D12EA(iLocal_140, 1f, 2.2f, -0.25f), -59.76477f, -1098.799f, 25.42232f, -53.61449f, -1095.079f, 28.92234f, 5.25f, 0, 1)) || unk_0xC2F708DE8AD68197(unk_0x2CA911E7569D12EA(iLocal_140, -1f, -2.3f, -0.25f), -59.76477f, -1098.799f, 25.42232f, -53.61449f, -1095.079f, 28.92234f, 5.25f, 0, 1)) || unk_0xC2F708DE8AD68197(unk_0x2CA911E7569D12EA(iLocal_140, 1f, -2.3f, -0.25f), -59.76477f, -1098.799f, 25.42232f, -53.61449f, -1095.079f, 28.92234f, 5.25f, 0, 1)) && unk_0x8BB475EA09C9A0EB(iLocal_140) > 5f) && fLocal_69 < fLocal_68) || (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -32.00801f, -1102.252f, 25.43435f, -59.3003f, -1092.674f, 29.43435f, 15f, 0, 1, 0) && !unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -61.38735f, -1103.479f, 24.85972f, -58.61892f, -1095.799f, 29.43435f, 10f, 0, 1, 0)))
		{
			if (unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iLocal_140, 0))
			{
				if (func_304(10f, 1))
				{
					func_802(178, 1, 0, 1, 0);
					func_114(16);
					if (unk_0xC0832B9258378F00(uLocal_235))
					{
						if (unk_0x59AECBDFE1CC0576(uLocal_235) == 5)
						{
							unk_0xED0F188B4F015CBB(uLocal_235, 6);
						}
					}
					if (unk_0x765F6FEEFF39224F(iLocal_167))
					{
						unk_0xBEADAF07D2339505(iLocal_167, unk_0xFBB1F99A825CAB09(iLocal_167, 1) - Vector(10f, 0f, 0f), 1, 0, 0, 1);
					}
					if (!func_815("WindowSmashed"))
					{
						unk_0x5B1DF403216CD477("V_CARSHOWROOM_PS_WINDOW_UNBROKEN", "V_CARSHOWROOM_PS_WINDOW_BROKEN");
						func_809("WindowSmashed", 1);
					}
					unk_0x0F8EAEEC97DDBCB3(-1, "ARM_3_CAR_GLASS_CRASH", 0, 1);
					unk_0x61AE8E2B7BB7D8BA(0, 500, 256);
					iVar2 = unk_0xE3903F59E2F22150() + 500;
					while ((!unk_0xD4B4F68F3449CBEC(iLocal_140, -54.03884f, -1098.502f, 25.42233f, -57.81364f, -1091.971f, 28.42233f, 4f, 0, 1, 0) && iVar2 > unk_0xE3903F59E2F22150()) && unk_0x8BB475EA09C9A0EB(iLocal_140) > 1f)
					{
						unk_0x3FD9339AA95E323F(0, 30, 1);
						unk_0x3FD9339AA95E323F(0, 31, 1);
						unk_0x3FD9339AA95E323F(0, 72, 1);
						unk_0x3FD9339AA95E323F(0, 59, 1);
						unk_0x3FD9339AA95E323F(0, 60, 1);
						if (iVar2 < unk_0xE3903F59E2F22150())
						{
						}
						unk_0xC2E971FFC45AE37D();
						func_773(0);
					}
					func_207(unk_0x95B959F18401C09A(), 0, 0);
					func_8();
				}
			}
		}
		else
		{
			func_282(&uLocal_223, -55.2f, -1095.8f, 27.3f, "ARM3HLP_WINDOW", 1726668277, 1, 1, 1);
			unk_0x3FD9339AA95E323F(0, 0, 1);
			bVar3 = false;
			if (iLocal_100)
			{
				if ((!unk_0x1CAA347A3C84C225(0, 0) && !func_281()) && !unk_0x8D255802EBF1DA76())
				{
					bVar3 = true;
					iLocal_100 = 0;
				}
				if (func_281() || unk_0x8D255802EBF1DA76())
				{
					iLocal_100 = 0;
				}
			}
			if (unk_0x5EBE50D55314CEAD(0, 0))
			{
				iLocal_100 = 1;
			}
			if (bVar3)
			{
				if (iLocal_65 == 4)
				{
					unk_0x816788E0CA50BB83(1);
				}
				else if (iLocal_65 == 0)
				{
					unk_0x816788E0CA50BB83(1);
				}
				else if (iLocal_65 == 1)
				{
					if (bLocal_64)
					{
						unk_0x816788E0CA50BB83(2);
					}
					else
					{
						unk_0x816788E0CA50BB83(0);
					}
					bLocal_64 = !bLocal_64;
				}
				else if (iLocal_65 == 2)
				{
					unk_0x816788E0CA50BB83(1);
				}
				iLocal_65 = unk_0xCB68F86E41CE5197();
			}
		}
		if (unk_0x8D255802EBF1DA76())
		{
			if (unk_0x7C71681384076318("ARM_3_RAM_DEALERSHIP"))
			{
				unk_0x7CED302277C0F3D3("ARM_3_RAM_DEALERSHIP");
			}
			if (!unk_0x7C71681384076318("ARM_3_WINDOW_FOCUS_CAM"))
			{
				unk_0xDEFB5E2E5CBD460A("ARM_3_WINDOW_FOCUS_CAM");
			}
		}
		else
		{
			if (!unk_0x7C71681384076318("ARM_3_RAM_DEALERSHIP"))
			{
				unk_0xDEFB5E2E5CBD460A("ARM_3_RAM_DEALERSHIP");
			}
			if (unk_0x7C71681384076318("ARM_3_WINDOW_FOCUS_CAM"))
			{
				unk_0x7CED302277C0F3D3("ARM_3_WINDOW_FOCUS_CAM");
			}
		}
		unk_0x3FD9339AA95E323F(0, 23, 1);
		unk_0x3FD9339AA95E323F(0, 75, 1);
		unk_0x3FD9339AA95E323F(0, 69, 1);
		unk_0x3FD9339AA95E323F(0, 70, 1);
		unk_0x3FD9339AA95E323F(0, 262, 1);
		unk_0x3FD9339AA95E323F(0, 261, 1);
		unk_0xC2E971FFC45AE37D();
		if (!unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), -52.02579f, -1095.311f, 32.23032f, 28f, 28f, 8f, 0, 1, 0))
		{
			if (unk_0xE3903F59E2F22150() > iLocal_53 || unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 1), -60.15f, -1098.69f, 25.44f, true) > 200f)
			{
				iLocal_237 = 18;
				func_788();
			}
		}
		if (unk_0x765F6FEEFF39224F(iLocal_140) && !unk_0xD62C4419A41F106A(iLocal_140, 0))
		{
			if (unk_0x765F6FEEFF39224F(uLocal_248[0]) && !unk_0xD62C4419A41F106A(uLocal_248[0], 0))
			{
				if (!unk_0xEE984ED4E4A374BE(uLocal_248[0], iLocal_140))
				{
					iLocal_237 = 20;
					func_788();
				}
			}
		}
	}
	if (func_7())
	{
		func_322(&uLocal_223, 0, 0);
		if (unk_0x7C71681384076318("ARM_3_RAM_DEALERSHIP"))
		{
			unk_0x7CED302277C0F3D3("ARM_3_RAM_DEALERSHIP");
		}
		if (unk_0x7C71681384076318("ARM_3_WINDOW_FOCUS_CAM"))
		{
			unk_0x7CED302277C0F3D3("ARM_3_WINDOW_FOCUS_CAM");
		}
		unk_0x052830EE89C97404(1);
		if (unk_0x117DAF3BF7232886(iLocal_156))
		{
			unk_0x189377BFBDC9127F(iLocal_156, false);
			unk_0x63F0B040CE6EDF0F(false, 0, 3000, 1, 0, 0);
		}
		if (!unk_0x117DAF3BF7232886(iLocal_155))
		{
			iLocal_155 = unk_0x00E62F31D05EB2AC("DEFAULT_SCRIPTED_CAMERA", 1);
		}
		if (unk_0x117DAF3BF7232886(iLocal_155))
		{
			unk_0x189377BFBDC9127F(iLocal_155, true);
		}
		unk_0xCBE6E2953ED9652D(unk_0x95B959F18401C09A());
		func_822();
		if (!unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iLocal_140, 0))
		{
			unk_0x094626C0798AE1F8(unk_0x33CD235DF1E6A94E(), iLocal_140, -1);
		}
		unk_0x80BCAFF1FDCC7E85("clipset@missarmenian3@franklin_driving");
		func_781(&iLocal_150);
		func_781(&iLocal_151);
		func_274(&iLocal_167);
		iLocal_236++;
	}
}

bool func_281()
{
	return unk_0xE3903F59E2F22150() <= Global_17411.f_5878 + 100;
}

void func_282(var uParam0, vector3 vParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
	{
		func_322(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_283(uParam0, vParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_283(var uParam0, vector3 vParam1, var uParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	int iVar0;
	
	if (uParam0->f_1 && unk_0x8D255802EBF1DA76())
	{
		if (unk_0xE3903F59E2F22150() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = uParam2;
	if (unk_0x6D2E2622CA149402(iVar0))
	{
		if (!unk_0xB331FCEB94EB05C8())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_18(iVar0))
	{
		func_303();
	}
	if (!unk_0x8D255802EBF1DA76())
	{
		if (func_298(uParam0, bParam4, bParam6, 0))
		{
			func_297(uParam0, vParam1, iParam3);
		}
		if (*uParam0)
		{
			*uParam0 = 0;
		}
		else if (uParam0->f_6 == 2)
		{
			if (func_288(iVar0))
			{
				if ((unk_0x6D2E2622CA149402(uParam0->f_3) && !unk_0x6D2E2622CA149402(iVar0)) && unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
				{
					if ((unk_0x73E7A21FD53144AB(vParam1, 1f) && !unk_0xFAC8F20FBC764F4D()) && uParam5)
					{
						if (!func_18(iVar0))
						{
							func_20(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0xCE3CFF625BEBAA04("CMN_HINT", iVar0))
							{
								func_287(1);
							}
						}
					}
				}
			}
		}
		else if (func_288(iVar0))
		{
			if (unk_0x6D2E2622CA149402(uParam0->f_3) && !unk_0x6D2E2622CA149402(iVar0))
			{
				if ((unk_0x73E7A21FD53144AB(vParam1, 1f) && !unk_0xFAC8F20FBC764F4D()) && uParam5)
				{
					if (!func_18(iVar0))
					{
						func_20(iVar0, -1);
						uParam0->f_3 = iVar0;
						if (unk_0xCE3CFF625BEBAA04("CMN_HINT", iVar0))
						{
							func_287(1);
						}
					}
				}
			}
		}
	}
	else
	{
		if (!unk_0x6D2E2622CA149402(iVar0))
		{
			if (func_18(iVar0) && unk_0xFAC8F20FBC764F4D())
			{
				unk_0xEDF90B96BED57BCE(1);
			}
		}
		if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
		{
			if (unk_0x21DE39E28274C4C1(unk_0x33CD235DF1E6A94E()))
			{
				if (unk_0xCB75C331DD5DDCCC(3) == 3 || unk_0xCB75C331DD5DDCCC(3) == 4)
				{
					func_322(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xBEAC9DF5323BB074(unk_0x33CD235DF1E6A94E()))
			{
				if (unk_0xCB75C331DD5DDCCC(6) == 3 || unk_0xCB75C331DD5DDCCC(6) == 4)
				{
					func_322(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xA5C8D37514ACC1FA(unk_0x33CD235DF1E6A94E()))
			{
				if (unk_0xCB75C331DD5DDCCC(4) == 3 || unk_0xCB75C331DD5DDCCC(4) == 4)
				{
					func_322(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xFF29C0328E1D9F8D(unk_0x33CD235DF1E6A94E()))
			{
				if (unk_0xCB75C331DD5DDCCC(5) == 3 || unk_0xCB75C331DD5DDCCC(5) == 4)
				{
					func_322(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xA2F0EA9AB6142D97(unk_0x33CD235DF1E6A94E()))
			{
				if (unk_0xCB75C331DD5DDCCC(2) == 3 || unk_0xCB75C331DD5DDCCC(2) == 4)
				{
					func_322(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x8ACF6D19519697BD() == 3 || unk_0x8ACF6D19519697BD() == 4)
			{
				func_322(uParam0, iVar0, 1);
			}
		}
		if (!func_298(uParam0, bParam4, bParam6, 0))
		{
			if ((!*uParam0 && !uParam0->f_1) && !func_286(uParam0))
			{
				func_284(uParam0);
			}
		}
	}
}

void func_284(var uParam0)
{
	if (func_285(unk_0x33CD235DF1E6A94E()))
	{
		unk_0xE0DAC4ABE9900D9A(unk_0x33CD235DF1E6A94E());
	}
	if (unk_0x8D255802EBF1DA76())
	{
		unk_0x052830EE89C97404(1);
		unk_0x3754CDF254D9F523(0);
		unk_0x7CED302277C0F3D3("HINT_CAM_SCENE");
		unk_0xA94473FEE1796AED("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x0B1F8038F56C12B7("FocusOut", 0, 0);
			unk_0x0F8EAEEC97DDBCB3(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_285(int iParam0)
{
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		if (unk_0x680558231C80291D(iParam0))
		{
			if (unk_0x91D5C8283D19AF49(unk_0xEAE1362B9F5C7B18(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x068481DAF84B9654(iParam0))
		{
			if (!unk_0xBC2FC12AD0FBF72E(unk_0x22B02EC53152632C(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0xA3A29DB165882310(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_286(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0xE3903F59E2F22150()
		{
			return 1;
		}
	}
	return 0;
}

int func_287(bool bParam0)
{
	switch (Global_36425)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_106565.f_10043.f_100++;
			}
			return Global_106565.f_10043.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_106565.f_10043.f_101++;
			}
			return Global_106565.f_10043.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_106565.f_10043.f_102++;
			}
			return Global_106565.f_10043.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_288(char* sParam0)
{
	if (!func_289(1, 1, 0))
	{
		if ((!unk_0x786AF4A44E1B5B4B(sParam0) && func_18(sParam0)) || func_18("CMN_HINT"))
		{
			unk_0xEDF90B96BED57BCE(1);
		}
		return 0;
	}
	switch (Global_36425)
	{
		case 0:
		case 3:
			if (func_287(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_287(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_287(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_289(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x71EC91BA8C88BCE0())
	{
		return 0;
	}
	if (func_764(0))
	{
		return 0;
	}
	if (func_281())
	{
		return 0;
	}
	if (unk_0xE3F7CBC28F745843())
	{
		return 0;
	}
	if (Global_68807)
	{
		return 0;
	}
	if (unk_0x1BCDA92AD0A7835B(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_53675)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
		{
			if (unk_0x21DE39E28274C4C1(unk_0x33CD235DF1E6A94E()))
			{
				if (unk_0xCB75C331DD5DDCCC(3) == 3 || unk_0xCB75C331DD5DDCCC(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xBEAC9DF5323BB074(unk_0x33CD235DF1E6A94E()))
			{
				if (unk_0xCB75C331DD5DDCCC(6) == 3 || unk_0xCB75C331DD5DDCCC(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xA5C8D37514ACC1FA(unk_0x33CD235DF1E6A94E()))
			{
				if (unk_0xCB75C331DD5DDCCC(4) == 3 || unk_0xCB75C331DD5DDCCC(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xFF29C0328E1D9F8D(unk_0x33CD235DF1E6A94E()))
			{
				if (unk_0xCB75C331DD5DDCCC(5) == 3 || unk_0xCB75C331DD5DDCCC(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xA2F0EA9AB6142D97(unk_0x33CD235DF1E6A94E()))
			{
				if (unk_0xCB75C331DD5DDCCC(2) == 3 || unk_0xCB75C331DD5DDCCC(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x8ACF6D19519697BD() == 3 || unk_0x8ACF6D19519697BD() == 4)
			{
				return 0;
			}
			if (unk_0x1E67980B42842E37())
			{
				return 0;
			}
		}
	}
	if ((func_296() || func_295(Global_4456448.f_161209)) || func_294())
	{
		if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
		{
			iVar0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
			iVar1 = func_293(unk_0x33CD235DF1E6A94E(), 0);
			if (((unk_0x3FCD3FCFAFC3878C(iVar0, iVar1) || (unk_0x541D5C57194E73C4(iVar0) == 562680400 && iVar1 != -1)) || (unk_0x541D5C57194E73C4(iVar0) == 1181327175 && iVar1 != -1)) || (((unk_0x541D5C57194E73C4(iVar0) == -1693015116 && iVar1 == 0) && func_292(iVar0, 10)) && unk_0xEECA910C75BFF02B(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1680665)
	{
		return 0;
	}
	if (func_290(unk_0x95B959F18401C09A()))
	{
		return 0;
	}
	return 1;
}

int func_290(int iParam0)
{
	if (iParam0 != func_253())
	{
		if (func_291(iParam0, 1, 1))
		{
			return Global_2424047[iParam0 /*416*/].f_309.f_5 != -1;
		}
		else if ((Global_1312867 && iParam0 == unk_0x95B959F18401C09A()) && func_291(iParam0, 1, 0))
		{
			return Global_2424047[iParam0 /*416*/].f_309.f_5 != -1;
		}
	}
	return 0;
}

int func_291(int iParam0, bool bParam1, bool bParam2)
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

int func_292(int iParam0, int iParam1)
{
	if (unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		if (unk_0xCD2E94F6C3101AFC(iParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (unk_0x3DE306309922F8D1(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_293(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		if (unk_0xF0D230FB550CD6EB(iParam0, iParam1))
		{
			iVar0 = unk_0xF2C96862595654B4(iParam0, iParam1);
			if (unk_0x765F6FEEFF39224F(iVar0))
			{
				iVar1 = unk_0xA2AD91D40FCCF9D2(unk_0x541D5C57194E73C4(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x67FFBB75D2430704(iVar0, iVar3, 0))
					{
						if (unk_0x7BDC41A7CA0C77A2(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

var func_294()
{
	return Global_2448756.f_16;
}

bool func_295(int iParam0)
{
	return iParam0 == 51;
}

var func_296()
{
	return Global_2448756.f_15;
}

void func_297(var uParam0, vector3 vParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x052830EE89C97404(0);
	iVar0 = uParam0->f_9;
	iVar1 = uParam0->f_10;
	if (iParam2 == 1726668277)
	{
		if (iVar0 < 1500)
		{
			iVar0 = 1500;
		}
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
	}
	unk_0xAB2EAB7DC12EC718(vParam1, -1, iVar0, iVar1, iParam2);
	iVar2 = 2048;
	iVar3 = 3;
	unk_0xAE5B044AA2973E2A(unk_0x33CD235DF1E6A94E(), vParam1, -1, iVar2, iVar3);
	unk_0x0B1F8038F56C12B7("FocusIn", 0, 0);
	unk_0xDEFB5E2E5CBD460A("HINT_CAM_SCENE");
	unk_0x0F8EAEEC97DDBCB3(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0xE3903F59E2F22150();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

int func_298(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0xE3903F59E2F22150() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
				{
					if (func_302(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xE3903F59E2F22150();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_301(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xE3903F59E2F22150();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_301(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xE3903F59E2F22150();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_302(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xE3903F59E2F22150();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_286(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0xE3903F59E2F22150() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
					{
						if (!func_302(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0xE3903F59E2F22150();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_301(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xE3903F59E2F22150();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_301(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xE3903F59E2F22150();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_302(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xE3903F59E2F22150();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
				{
					if (!func_302(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_301(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_301(bParam1, bParam2, bParam3) || unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1) || unk_0xA9680DDFB5EB643A(unk_0x33CD235DF1E6A94E(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_302(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0xE3903F59E2F22150() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
					{
						if (func_300(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_299(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1) || func_299(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1) || unk_0xA9680DDFB5EB643A(unk_0x33CD235DF1E6A94E(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_300(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_286(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_289(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_303();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_299(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_289(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		if (!unk_0x0FFAAF12F0E94E37(unk_0x95B959F18401C09A()))
		{
			unk_0x3FD9339AA95E323F(0, 140, 1);
			unk_0x3FD9339AA95E323F(0, 80, 1);
			if (unk_0xC6FADCE8D6467372(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_300(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_289(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		unk_0x3FD9339AA95E323F(0, 80, 1);
		if (unk_0x7D01DE4C909B4391())
		{
			if (unk_0xC6FADCE8D6467372(0, 80))
			{
				unk_0x052830EE89C97404(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_301(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_289(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		if (!unk_0x0FFAAF12F0E94E37(unk_0x95B959F18401C09A()))
		{
			unk_0x3FD9339AA95E323F(0, 140, 1);
			unk_0x3FD9339AA95E323F(0, 80, 1);
			if (unk_0x1CAA347A3C84C225(0, 80) && unk_0xE3903F59E2F22150() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_302(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_289(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		unk_0x3FD9339AA95E323F(0, 80, 1);
		if (unk_0x7D01DE4C909B4391())
		{
			if (unk_0x1CAA347A3C84C225(0, 80) && unk_0xE3903F59E2F22150() > Global_116)
			{
				unk_0x052830EE89C97404(0);
				return 1;
			}
		}
	}
	return 0;
}

void func_303()
{
	unk_0x8950ED5730F62EE8(&Global_2424, 4);
}

bool func_304(float fParam0, int iParam1)
{
	if (func_305(1, 0, 1) == 1)
	{
		if (fParam0 != 0f)
		{
			unk_0xCE04CE961AF41AB9(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 1), fParam0, 1, 1, 0, false);
		}
		func_822();
		func_836(1, 1, iParam1, 0, 0, 0);
	}
	return func_305(1, 0, 1);
}

int func_305(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x8D13BA3BB8F16771())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		if (!unk_0x5C415D10D5CBF689(unk_0x33CD235DF1E6A94E()))
		{
			return 0;
		}
		iVar0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
		if (bParam0)
		{
			if (unk_0xD62C4419A41F106A(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0xD62C4419A41F106A(iVar0, 0))
			{
				if (unk_0x7BDC41A7CA0C77A2(iVar0, -1, 0) != unk_0x33CD235DF1E6A94E())
				{
					return 0;
				}
			}
		}
		if (!unk_0xD62C4419A41F106A(iVar0, 0))
		{
			if (unk_0x67F8A06049221C80(iVar0) < 0.95f || unk_0x67F8A06049221C80(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0xE027064B1C47E424(unk_0x95B959F18401C09A()))
	{
		return 0;
	}
	if (!unk_0x3B06C717B2793DBE(unk_0x95B959F18401C09A()))
	{
		return 0;
	}
	return 1;
}

void func_306(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0xE38E3CF1625A4145(*iParam0))
	{
		if (unk_0x765F6FEEFF39224F(*iParam1))
		{
			if (!unk_0xD62C4419A41F106A(*iParam1, 0))
			{
				*iParam0 = func_307(*iParam1, bParam2, 0);
				if (bParam2 == 0)
				{
					unk_0xC51C58C963968740(*iParam0, 7);
				}
			}
		}
	}
}

int func_307(int iParam0, bool bParam1, bool bParam2)
{
	return func_308(iParam0, !bParam1, bParam2);
}

int func_308(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0x765F6FEEFF39224F(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x8848A15CBDADDC60(iParam0);
	if (unk_0x680558231C80291D(iParam0))
	{
		unk_0xCE5C49921A521962(iVar0, func_13(unk_0xB331FCEB94EB05C8(), 1f, 1f));
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
		unk_0xCE5C49921A521962(iVar0, func_13(unk_0xB331FCEB94EB05C8(), 0.7f, 0.7f));
		unk_0xBF11C8A43770C598(iVar0, bParam1);
	}
	else if (unk_0xA3A29DB165882310(iParam0))
	{
		unk_0xCE5C49921A521962(iVar0, func_13(unk_0xB331FCEB94EB05C8(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_309(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (!func_815(sParam1))
	{
		while (!func_310(&uLocal_288, cLocal_242, sParam0, sParam1, iParam2, 0, 0))
		{
			if (func_771())
			{
				func_15();
			}
			func_773(0);
		}
		func_809(sParam1, bParam3);
	}
}

bool func_310(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_320(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_311(sParam2, iParam4, 0);
}

int func_311(char* sParam0, int iParam1, bool bParam2)
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
					func_319();
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
		if (func_318(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_317();
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
				func_316();
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
				if (func_315())
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
			if (func_314())
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
			func_313();
			Global_15876 = bParam2;
		}
		Global_15868 = iParam1;
		StringCopy(&Global_15485, sParam0, 24);
		Global_14732 = 0;
		func_312();
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
		func_319();
	}
	return 0;
}

void func_312()
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

void func_313()
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

int func_314()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_315()
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

void func_316()
{
	if (func_46(14))
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
		Global_14553 = func_759();
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

void func_317()
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

bool func_318(int iParam0, int iParam1)
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

void func_319()
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

void func_320(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_321(int iParam0)
{
	iLocal_240 = iParam0;
	func_752();
}

void func_322(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0xB331FCEB94EB05C8())
	{
		if (unk_0x0E4018692D92041D(Global_2528542.f_4582, 26))
		{
			return;
		}
	}
	if (unk_0x8D255802EBF1DA76())
	{
		unk_0x3754CDF254D9F523(iParam2);
		unk_0xA94473FEE1796AED("FocusIn");
		unk_0x7CED302277C0F3D3("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x0B1F8038F56C12B7("FocusOut", 0, 0);
			unk_0x0F8EAEEC97DDBCB3(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x052830EE89C97404(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x6D2E2622CA149402(sVar0))
	{
		if (!unk_0xB331FCEB94EB05C8())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x6D2E2622CA149402(uParam0->f_3))
	{
		if (func_18(uParam0->f_3))
		{
			unk_0xEDF90B96BED57BCE(1);
		}
	}
	if (!unk_0x6D2E2622CA149402(sVar0))
	{
		if (func_18(sVar0))
		{
			unk_0xEDF90B96BED57BCE(1);
		}
	}
}

void func_323()
{
	vector3 vVar0;
	float fVar1;
	vector3 vVar2;
	
	if (func_272())
	{
		func_207(unk_0x95B959F18401C09A(), 0, 0);
		unk_0x3427206E004F448F("Armenian_3_mcs_6", 8);
		func_114(12);
		unk_0xC2E971FFC45AE37D();
		if (func_119())
		{
			unk_0x31826EF4A8BC8E9F(unk_0x33CD235DF1E6A94E());
			unk_0x094626C0798AE1F8(unk_0x33CD235DF1E6A94E(), iLocal_140, -1);
			if (unk_0x765F6FEEFF39224F(iLocal_140) && !unk_0xD62C4419A41F106A(iLocal_140, 0))
			{
				unk_0xD303E20CB0AE4AD0(iLocal_140, 4);
				func_116(iLocal_140, -148.7715f, -1149.903f, 23.2067f, 271.8071f);
			}
			if (!bLocal_92)
			{
				func_118(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 1), 1101004800);
			}
			unk_0xC7E6A5D90DED6E0B(0f);
			unk_0xD6EDA274D82E8678(-10f, 1065353216);
			func_114(13);
		}
	}
	else
	{
		if (unk_0xA812C1043FE92B58())
		{
			func_21("Franklin", func_787(1), 0, 2);
			func_21("Michael", func_787(0), 0, 2);
		}
		if (func_325(1000))
		{
			unk_0xD362430CD61A9B08();
			func_8();
		}
		switch (iLocal_48)
		{
			case 0:
				if (!unk_0xE980BAFD70E8A4B3())
				{
					unk_0x1F6A09AE9372AE6C(unk_0xFBB1F99A825CAB09(iLocal_140, 1), 200f, 0);
				}
				if (func_324("Armenian_3_mcs_6"))
				{
					if (unk_0x117DAF3BF7232886(iLocal_156))
					{
						unk_0x3F320D30CE85293B(iLocal_156);
					}
					unk_0xEF6624A3AFF02A02(unk_0x33CD235DF1E6A94E(), "Franklin", 0, 0, 384);
					unk_0xEF6624A3AFF02A02(uLocal_248[0], "Michael", 0, 0, 384);
					unk_0xEF6624A3AFF02A02(iLocal_140, "Jimmys_Car", 0, 0, 0);
					func_836(1, 1, 1, 0, 0, 0);
					vVar0 = { -148.7715f, -1149.903f, 23.2067f };
					fVar1 = 271.8071f;
					if (unk_0x18FB647D79B09657(iLocal_140, -91.7239f, -1180.303f, 25.3327f, 3f, 3f, 3f, 0, 1, 0))
					{
						vVar0 = { -91.7239f, -1180.303f, 25.3327f };
						fVar1 = 3.5979f;
					}
					if (unk_0x18FB647D79B09657(iLocal_140, -64.8446f, -1130.052f, 24.7219f, 3f, 3f, 3f, 0, 1, 0))
					{
						vVar0 = { -64.8446f, -1130.052f, 24.7219f };
						fVar1 = 92.7692f;
					}
					if (unk_0x18FB647D79B09657(iLocal_140, -97.2467f, -1087.589f, 25.2988f, 3f, 3f, 3f, 0, 1, 0))
					{
						vVar0 = { -97.2467f, -1087.589f, 25.2988f };
						fVar1 = 161.1787f;
					}
					unk_0x15F94DFD915015D8(vLocal_101, 0f, (fVar1 - 270f), 0f);
					unk_0xA1DB7AA6D905E3C9(vVar0 + Vector(1f, 0f, 0f), 2048);
					func_773(0);
					iLocal_456 = 0;
					func_327();
					unk_0xCBE6E2953ED9652D(unk_0x95B959F18401C09A());
					unk_0xCE04CE961AF41AB9(unk_0xFBB1F99A825CAB09(iLocal_140, 1), 25f, 1, 0, 0, false);
					func_120(iLocal_166, 0);
					func_822();
					unk_0x1A64DD706136470C(iLocal_140, 1);
					iLocal_85 = 0;
					if (unk_0xBB5E373390A5F824())
					{
						unk_0xACCDA78123DB57B0(500);
					}
					unk_0xF68C9C9A191F2B68(4);
					func_14();
				}
				break;
			
			case 1:
				unk_0x5766BA01380E23CF(iLocal_140, 1);
				unk_0x453924F2AAE93AD9(0f);
				if (unk_0x286C823E0969F22A())
				{
					if (!func_815("ARMENIAN_3_MCS_6_SHOT_1"))
					{
						unk_0x1A64DD706136470C(iLocal_140, 1);
						func_809("ARMENIAN_3_MCS_6_SHOT_1", 1);
					}
					else if (!func_815("ARMENIAN_3_MCS_6_SHOT_2"))
					{
						if (unk_0x7E15D709E86EB560() > round((4.799f * 1000f)) && unk_0x3320F94CE5E0322B())
						{
							unk_0x1A64DD706136470C(iLocal_140, 0);
							func_809("ARMENIAN_3_MCS_6_SHOT_2", 1);
						}
					}
					else if (!func_815("ARMENIAN_3_MCS_6_SHOT_3"))
					{
						if (unk_0x7E15D709E86EB560() > round((14.999f * 1000f)) && unk_0x3320F94CE5E0322B())
						{
							unk_0x1A64DD706136470C(iLocal_140, 1);
							func_809("ARMENIAN_3_MCS_6_SHOT_3", 1);
						}
					}
					else if (!func_815("ARMENIAN_3_MCS_6_SHOT_4"))
					{
						if (unk_0x7E15D709E86EB560() > round((17.16567f * 1000f)) && unk_0x3320F94CE5E0322B())
						{
							unk_0x1A64DD706136470C(iLocal_140, 0);
							func_809("ARMENIAN_3_MCS_6_SHOT_4", 1);
						}
					}
				}
				if (unk_0x3CA08F647CEAD042("Franklin", 0))
				{
					if (!unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iLocal_140, 0))
					{
						unk_0x094626C0798AE1F8(unk_0x33CD235DF1E6A94E(), iLocal_140, -1);
					}
				}
				if (unk_0x3CA08F647CEAD042("Michael", 0))
				{
					if (!unk_0x10930B9CAD4111C2(uLocal_248[0], iLocal_140, 0))
					{
						unk_0x094626C0798AE1F8(uLocal_248[0], iLocal_140, 2);
					}
					if (!unk_0x765F6FEEFF39224F(iLocal_166))
					{
						iLocal_166 = unk_0x7CA67831169E8AA6(unk_0x12772FC739A13F81(joaat("weapon_pistol")), vLocal_105, 1, true, 0);
					}
					unk_0x2F0A6390D863D337(iLocal_166, uLocal_248[0], unk_0xFCAF61876D23D31D(uLocal_248[0], 28422), vLocal_101, vLocal_101, 0, 0, 0, 0, 2, 1);
					if (!unk_0x1CE8F0A08E65CA6A(uLocal_248[0], sLocal_115, "michaelappears_loop_michael", 3))
					{
						unk_0x108754262311D34F(uLocal_248[0], sLocal_115, "michaelappears_loop_michael", 1000f, -4f, -1, 2, 0, 0, 0, 0);
						unk_0x880B00F3FAE4C022(uLocal_248[0], 0, 0);
					}
				}
				if (unk_0x3CA08F647CEAD042("Jimmys_Car", 0))
				{
					unk_0x9FABD0AB045A5D6E(iLocal_140, true, 1, 0);
					unk_0x7FC263D448DC8CAC(iLocal_140);
					unk_0x1B2303F9DC2D90D5(iLocal_140, 1084227584);
				}
				unk_0xA56208AB5F9EC61A(iLocal_140, 0);
				if (unk_0x2442598EA366437F(0))
				{
					unk_0xC7E6A5D90DED6E0B((func_115(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 1), -56.13f, -1097.6f, 25.16f) - unk_0xC472E34C8FBEC678(unk_0x33CD235DF1E6A94E())));
					unk_0xD6EDA274D82E8678(-10f, 1065353216);
					vVar2 = { unk_0xFBB1F99A825CAB09(iLocal_140, 1) };
					unk_0x739461708028C973(vVar2.x, vVar2.y, 30f, -55.8188f, -1096.415f, 20f, 30f, 0, 0, 0, 0, 0, 0);
				}
				if (unk_0x15661F4AC08D433A())
				{
					if (unk_0x66D6584F4E8C88AE())
					{
						if (unk_0x18FB647D79B09657(iLocal_140, -148.7715f, -1149.903f, 23.2067f, 3f, 3f, 3f, 0, 1, 0))
						{
							unk_0xC7C47D4054903839(iLocal_140, -148.7664f, -1150f, 24.1124f, 0, 0, 1);
							unk_0x1C8705F667F673EA(iLocal_140, 3.385f, 2.9552f, -88.1208f, 2, 1);
						}
						if (unk_0x18FB647D79B09657(iLocal_140, -91.7239f, -1180.303f, 25.3327f, 3f, 3f, 3f, 0, 1, 0))
						{
							func_116(iLocal_140, -91.7239f, -1180.303f, 25.3327f, 3.5979f);
						}
						if (unk_0x18FB647D79B09657(iLocal_140, -64.8446f, -1130.052f, 24.7219f, 3f, 3f, 3f, 0, 1, 0))
						{
							func_116(iLocal_140, -64.8446f, -1130.052f, 24.7219f, 92.7692f);
						}
						if (unk_0x18FB647D79B09657(iLocal_140, -97.2467f, -1087.589f, 25.2988f, 3f, 3f, 3f, 0, 1, 0))
						{
							func_116(iLocal_140, -97.2467f, -1087.589f, 25.2988f, 161.1787f);
						}
					}
					unk_0xAF9EA4E314ED45C2(-57.64452f, -1097.634f, 35.42235f, -145.0667f, -1156.564f, 23.02604f, 20f, 0, 0, 1);
					func_836(0, 1, 1, 0, 0, 0);
					func_8();
				}
				break;
		}
		unk_0xC2E971FFC45AE37D();
	}
	if (func_7())
	{
		unk_0x1A64DD706136470C(iLocal_140, 0);
		unk_0x4742207943D8EB65();
		unk_0x1C4E3934365AD58F();
		while (unk_0xC7D0A132A56D5FCB())
		{
			func_773(0);
		}
		if (unk_0xE980BAFD70E8A4B3())
		{
			unk_0x4ABB9EF39DA515D7();
		}
		if (!unk_0x10930B9CAD4111C2(uLocal_248[0], iLocal_140, 0))
		{
			unk_0x094626C0798AE1F8(uLocal_248[0], iLocal_140, 2);
		}
		if (!unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iLocal_140, 0))
		{
			unk_0x094626C0798AE1F8(unk_0x33CD235DF1E6A94E(), iLocal_140, -1);
		}
		func_822();
		func_120(iLocal_166, 1);
		unk_0x63F0B040CE6EDF0F(false, 0, 3000, 1, 0, 0);
		func_836(0, 1, 1, 0, 0, 0);
		if (unk_0x4278060E716E1226(iLocal_140))
		{
			unk_0xA34C4FA4A49499A6(iLocal_140);
		}
		iLocal_236++;
	}
}

bool func_324(char* sParam0)
{
	bool bVar0;
	
	bVar0 = unk_0xCB46B7F7245145D9(sParam0);
	if (!Global_71589)
	{
		if (!bVar0)
		{
			Global_71589 = 1;
		}
	}
	return bVar0;
}

int func_325(int iParam0)
{
	if (unk_0x73DA1542B2F0C458())
	{
		if ((unk_0xE3903F59E2F22150() - Global_28) > iParam0)
		{
			Global_27 = unk_0xE3903F59E2F22150();
		}
		Global_28 = unk_0xE3903F59E2F22150();
		if ((unk_0xE3903F59E2F22150() - Global_27) > iParam0)
		{
			if (func_326())
			{
				Global_27 = unk_0xE3903F59E2F22150();
				return 1;
			}
		}
	}
	return 0;
}

int func_326()
{
	if (unk_0xD9C92B0885A075F8())
	{
		return 0;
	}
	if (unk_0x833B1A3D9F713E03(0, 18) || unk_0x833B1A3D9F713E03(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_327()
{
	bool bVar0;
	
	if (iLocal_455 != unk_0xE77FA521699F639C())
	{
		iLocal_455 = unk_0xE77FA521699F639C();
		if (!unk_0x117DAF3BF7232886(iLocal_156))
		{
			iLocal_156 = unk_0x00E62F31D05EB2AC("DEFAULT_SCRIPTED_CAMERA", 0);
			unk_0x63B608CD1957089E(iLocal_156, 28.6103f);
			unk_0x083F68B89E3EA476(iLocal_156, "HAND_SHAKE", 1f);
			unk_0x189377BFBDC9127F(iLocal_156, true);
			if (!iLocal_66)
			{
				iLocal_65 = unk_0xCB68F86E41CE5197();
				iLocal_67 = unk_0xCB75C331DD5DDCCC(0);
				iLocal_66 = 1;
			}
		}
		if (iLocal_456 && unk_0x71D489B4139EA15B(iLocal_140, 90f))
		{
			if (unk_0x117DAF3BF7232886(iLocal_156))
			{
				if (!unk_0xFAA5C555ED0CEC9B(iLocal_156))
				{
					unk_0xF3F3DC87D7163212();
					if (func_764(0))
					{
						func_762(1);
					}
					unk_0xCBE6E2953ED9652D(unk_0x95B959F18401C09A());
					unk_0x3DA7F51505BA3457(unk_0x95B959F18401C09A(), 0);
					unk_0x63F0B040CE6EDF0F(true, 0, 3000, 1, 0, 0);
					unk_0x4C086D44421D2D68(1f);
					unk_0xC3780945B3D82AF7(0.5f);
					unk_0x241AB2281FF1751A("CSM_ST_BOX4x4");
					unk_0x2A06B27D1473E9ED(0);
					unk_0x29B6D8EFAD395B92("Hint_cam");
				}
				else
				{
					unk_0x4C086D44421D2D68(1f);
				}
			}
		}
		else
		{
			iLocal_456 = 0;
			if (unk_0x117DAF3BF7232886(iLocal_156))
			{
				if (unk_0xFAA5C555ED0CEC9B(iLocal_156) || iLocal_236 == 8)
				{
					unk_0x63F0B040CE6EDF0F(false, 0, 3000, 1, 0, 0);
					unk_0xC3780945B3D82AF7(1f);
					unk_0x36296F11E96E764D();
					unk_0x2A06B27D1473E9ED(1);
					if (unk_0x11DFDC1A614E78C2() != -1)
					{
						unk_0x3DE34B8864800B14();
					}
					if (iLocal_236 != 7)
					{
						unk_0x3DA7F51505BA3457(unk_0x95B959F18401C09A(), 1);
					}
				}
			}
		}
		if (unk_0x117DAF3BF7232886(iLocal_156) && iLocal_236 != 8)
		{
			unk_0x5A488F57F21B3451(iLocal_156, iLocal_140, -0.0481f, 2.0908f, 0.5994f, 1);
			unk_0x1C98D51D7C424A85(iLocal_156, iLocal_140, -0.2945f, -0.893f, 0.4086f, 1);
		}
		if (unk_0x65F35477FEAD6F0F(iLocal_140) != 0)
		{
			unk_0x6770BF761B8E6EF7(unk_0x90D54DCF679C0BBE(iLocal_140));
		}
		if (unk_0x117DAF3BF7232886(iLocal_156) && unk_0x49D25022440E65EE(iLocal_156))
		{
			func_329();
		}
		else
		{
			func_328();
		}
		unk_0x3FD9339AA95E323F(0, 0, 1);
		bVar0 = false;
		if (iLocal_100)
		{
			if ((!unk_0x1CAA347A3C84C225(0, 0) && !func_281()) && !unk_0x8D255802EBF1DA76())
			{
				bVar0 = true;
				iLocal_100 = 0;
			}
			if (func_281() || unk_0x8D255802EBF1DA76())
			{
				iLocal_100 = 0;
			}
		}
		if (unk_0x5EBE50D55314CEAD(0, 0))
		{
			iLocal_100 = 1;
		}
		if (bVar0)
		{
			if (iLocal_65 == 4)
			{
				unk_0x816788E0CA50BB83(1);
			}
			else if (iLocal_65 == 0)
			{
				unk_0x816788E0CA50BB83(1);
			}
			else if (iLocal_65 == 1)
			{
				if (bLocal_64)
				{
					unk_0x816788E0CA50BB83(2);
				}
				else
				{
					unk_0x816788E0CA50BB83(0);
				}
				bLocal_64 = !bLocal_64;
			}
			else if (iLocal_65 == 2)
			{
				unk_0x816788E0CA50BB83(1);
			}
			iLocal_65 = unk_0xCB68F86E41CE5197();
		}
		unk_0xC2E971FFC45AE37D();
	}
}

void func_328()
{
	Global_56501 = 0;
}

void func_329()
{
	Global_56501 = 1;
}

void func_330()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	vector3 vVar4;
	vector3 vVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	
	if (func_272())
	{
		func_207(unk_0x95B959F18401C09A(), 1, 0);
		func_809("GarageDoorLockedSkip", 1);
		iLocal_85 = 1;
		func_762(0);
		func_760(1);
		unk_0x9FD099B0593CD91D(func_787(1), true);
		unk_0x9FD099B0593CD91D(func_787(0), true);
		if (iLocal_98 == 0)
		{
			unk_0x63F0B040CE6EDF0F(false, 0, 3000, 1, 0, 0);
			func_836(0, 1, 1, 0, 0, 0);
		}
		if (unk_0x4278060E716E1226(iLocal_140))
		{
			unk_0x8D50B2BEF003AB31(iLocal_140);
		}
		unk_0x1FCB57E33CEA24E8("clipset@missarmenian3@franklin_driving");
		while (!unk_0xCDA107F8BEE35F40("clipset@missarmenian3@franklin_driving"))
		{
			unk_0x1FCB57E33CEA24E8("clipset@missarmenian3@franklin_driving");
			func_327();
			func_773(0);
		}
		if (!unk_0x7C71681384076318("ARM_3_DRIVE_TO_DEALERSHIP"))
		{
			unk_0xDEFB5E2E5CBD460A("ARM_3_DRIVE_TO_DEALERSHIP");
		}
		iLocal_53 = (unk_0xE3903F59E2F22150() + 180000);
		unk_0x3427206E004F448F("Armenian_3_mcs_6", 8);
		unk_0x5856B9BF2B4E98C4(Vector(23.1441f, -1150.328f, -149.383f) - Vector(5f, 5f, 5f), Vector(23.1441f, -1150.328f, -149.383f) + Vector(5f, 5f, 5f), false, 1);
		unk_0x5856B9BF2B4E98C4(Vector(23.1441f, -1150.328f, -149.383f) - Vector(5f, 5f, 5f), Vector(23.1441f, -1150.328f, -149.383f) + Vector(5f, 5f, 5f), false, 1);
		unk_0x5856B9BF2B4E98C4(Vector(23.1441f, -1150.328f, -149.383f) - Vector(5f, 5f, 5f), Vector(23.1441f, -1150.328f, -149.383f) + Vector(5f, 5f, 5f), false, 1);
		unk_0x5856B9BF2B4E98C4(Vector(23.1441f, -1150.328f, -149.383f) - Vector(5f, 5f, 5f), Vector(23.1441f, -1150.328f, -149.383f) + Vector(5f, 5f, 5f), false, 1);
		unk_0x496BE3DBA113D228(Vector(23.1441f, -1150.328f, -149.383f) - Vector(5f, 5f, 5f), Vector(23.1441f, -1150.328f, -149.383f) + Vector(5f, 5f, 5f), 0, 1);
		unk_0x496BE3DBA113D228(Vector(23.1441f, -1150.328f, -149.383f) - Vector(5f, 5f, 5f), Vector(23.1441f, -1150.328f, -149.383f) + Vector(5f, 5f, 5f), 0, 1);
		unk_0x496BE3DBA113D228(Vector(23.1441f, -1150.328f, -149.383f) - Vector(5f, 5f, 5f), Vector(23.1441f, -1150.328f, -149.383f) + Vector(5f, 5f, 5f), 0, 1);
		unk_0x496BE3DBA113D228(Vector(23.1441f, -1150.328f, -149.383f) - Vector(5f, 5f, 5f), Vector(23.1441f, -1150.328f, -149.383f) + Vector(5f, 5f, 5f), 0, 1);
		unk_0xCE04CE961AF41AB9(-149.383f, -1150.328f, 23.1441f, 10f, 1, 0, 0, false);
		unk_0xCE04CE961AF41AB9(-149.383f, -1150.328f, 23.1441f, 10f, 1, 0, 0, false);
		unk_0xCE04CE961AF41AB9(-149.383f, -1150.328f, 23.1441f, 10f, 1, 0, 0, false);
		unk_0xCE04CE961AF41AB9(-149.383f, -1150.328f, 23.1441f, 10f, 1, 0, 0, false);
		iLocal_172 = 0;
		if (func_119())
		{
			unk_0x31826EF4A8BC8E9F(unk_0x33CD235DF1E6A94E());
			unk_0x094626C0798AE1F8(unk_0x33CD235DF1E6A94E(), iLocal_140, -1);
			if (unk_0x765F6FEEFF39224F(iLocal_140) && !unk_0xD62C4419A41F106A(iLocal_140, 0))
			{
				unk_0xD303E20CB0AE4AD0(iLocal_140, 4);
				func_116(iLocal_140, -676.2552f, -278.2624f, 35.1f, 209.8584f);
			}
			if (!bLocal_92)
			{
				func_118(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 1), 1101004800);
			}
			func_773(0);
			unk_0x9FABD0AB045A5D6E(iLocal_140, true, 1, 0);
			unk_0x4522AD7364B6AA54(iLocal_140, 20f);
			unk_0xC7E6A5D90DED6E0B(0f);
			unk_0xD6EDA274D82E8678(-10f, 1065353216);
			func_112("ARM3_DEST", 7500, 1);
			func_11(&iLocal_151, -148.7715f, -1149.903f, 23.2067f, 1);
			unk_0x27CD99369517EA2E(156, 1, 0);
			unk_0xC44B42CC99839799(-273.0147f, -1140.79f, 22.78436f);
			unk_0xC44B42CC99839799(-148.7715f, -1149.903f, 23.2067f);
			unk_0x4E609369225EFC41(1);
			if (unk_0xBB5E373390A5F824())
			{
				unk_0xACCDA78123DB57B0(500);
			}
		}
	}
	else
	{
		if (unk_0xA812C1043FE92B58())
		{
			func_21("Franklin", func_787(1), 0, 2);
			func_21("Michael", func_787(0), 0, 2);
		}
		if (unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), vLocal_111, 40f, 40f, 40f, 0, 1, 0))
		{
			func_148(40, 3);
		}
		if (unk_0x1CE8F0A08E65CA6A(uLocal_248[0], sLocal_115, "michaelappears_intro_michael", 3))
		{
			if (!func_815("PistolCock"))
			{
				unk_0x4AC1EB89981AFAFD();
				if (unk_0x204DEACC5BECF723(uLocal_248[0], sLocal_115, "michaelappears_intro_michael") > 0.4f)
				{
					unk_0x0F8EAEEC97DDBCB3(-1, "ARM_3_PISTOL_COCK", 0, 1);
					func_809("PistolCock", 1);
				}
			}
			if (unk_0x204DEACC5BECF723(uLocal_248[0], sLocal_115, "michaelappears_intro_michael") > 0.45f)
			{
				if (!func_815("ARM3_GUN"))
				{
					unk_0xCA57931F89E1D249(unk_0x33CD235DF1E6A94E(), unk_0x36163153849DFDA1("MISS_ARMENIAN3_FRANKLIN_TENSE"));
					unk_0x3A3707C1ECABF993(iLocal_140, 5, true);
					func_114(10);
				}
				func_774("ARM3_GUN", 7, 1, 0);
			}
		}
		if ((func_815("ARM3_GUN") && !func_815("ARM3_GUNA")) && !func_815("ARM3_GUNB"))
		{
			if (!func_771())
			{
				if (unk_0x7EECA16E87982278(unk_0x8BB475EA09C9A0EB(iLocal_140)) >= 1f)
				{
					func_774("ARM3_GUNA", 7, 1, 0);
				}
				else
				{
					func_774("ARM3_GUNB", 7, 1, 0);
				}
			}
		}
		if (((((((unk_0x1CE8F0A08E65CA6A(uLocal_248[0], sLocal_115, "michaelappears_intro_michael", 3) && unk_0x204DEACC5BECF723(uLocal_248[0], sLocal_115, "michaelappears_intro_michael") > 0.57f) || unk_0x1CE8F0A08E65CA6A(uLocal_248[0], sLocal_115, "michaelappears_loop_michael", 3)) || unk_0x1CE8F0A08E65CA6A(uLocal_248[0], sLocal_115, "michaelappears_loop2_michael", 3)) || unk_0x1CE8F0A08E65CA6A(uLocal_248[0], sLocal_115, "michaelappears_loop3_michael", 3)) || unk_0x1CE8F0A08E65CA6A(uLocal_248[0], sLocal_115, "michaelappears_loop4_michael", 3)) || unk_0x1CE8F0A08E65CA6A(uLocal_248[0], sLocal_115, "michaelappears_loop5_michael", 3)) || unk_0x1CE8F0A08E65CA6A(uLocal_248[0], sLocal_115, "michaelappears_loop6_michael", 3))
		{
			if ((func_815("ARM3_GUNA") || func_815("ARM3_GUNB")) && !func_771())
			{
				if ((((!unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -97.46745f, -1140.701f, 19.82074f, -289.8f, -1141.7f, 67.07879f, 90f, 0, 1, 0) && !unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -97.46745f, -1140.701f, 19.82074f, -101.7f, -1383.3f, 73.34282f, 90f, 0, 1, 0)) && !unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -97.46745f, -1140.701f, 19.82074f, 81.4f, -1129.5f, 73.33405f, 90f, 0, 1, 0)) && !unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -97.46745f, -1140.701f, 19.82074f, -22.4f, -914.9f, 72.96643f, 90f, 0, 1, 0)) && !func_815("ARM3_STOP"))
				{
					func_774("ARM3_DRIV", 7, 1, 0);
				}
			}
			if (!func_815("ARM3HLP_INCAR"))
			{
				if (unk_0x7D01DE4C909B4391())
				{
					if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
					{
						iVar0 = unk_0xCB68F86E41CE5197();
						if (((iVar0 == 0 || iVar0 == 1) || iVar0 == 2) && !unk_0x1E67980B42842E37())
						{
							unk_0x052830EE89C97404(0);
							func_19("ARM3HLP_INCAR", 1, -1);
						}
					}
				}
			}
		}
		if (!iLocal_459 && func_298(&uLocal_223, 1, 1, 0))
		{
			if (func_18("ARM3HLP_INCAR"))
			{
				func_17(1);
			}
			iVar1 = 1;
		}
		if (func_281())
		{
			iLocal_459 = 1;
		}
		else
		{
			iLocal_459 = 0;
		}
		if (func_815("ARM3_GUN") || unk_0x1CE8F0A08E65CA6A(uLocal_248[0], sLocal_115, "michaelappears_intro_michael", 3))
		{
			if (!func_764(0) && iVar1)
			{
				iLocal_456 = 1;
				func_327();
			}
			else
			{
				iLocal_456 = 0;
			}
		}
		if ((func_815("ARM3_GUN") && !func_771()) && unk_0x10930B9CAD4111C2(uLocal_248[0], iLocal_140, 0))
		{
			func_781(&iLocal_153);
			if (unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iLocal_140, 0))
			{
				if (!func_771() && unk_0x51EBF893ED085755())
				{
					if (!unk_0xE38E3CF1625A4145(iLocal_151))
					{
						unk_0xD362430CD61A9B08();
						func_112("ARM3_TAKE", 7500, 0);
						func_781(&iLocal_150);
						func_11(&iLocal_151, -148.7715f, -1149.903f, 23.2067f, 1);
						unk_0x27CD99369517EA2E(156, 1, 0);
						unk_0xC44B42CC99839799(-273.0147f, -1140.79f, 22.78436f);
						unk_0xC44B42CC99839799(-148.7715f, -1149.903f, 23.2067f);
						unk_0x4E609369225EFC41(1);
					}
				}
			}
			else if (!unk_0xE38E3CF1625A4145(iLocal_150))
			{
				unk_0xD362430CD61A9B08();
				func_112("ARM3_CAR2", 7500, 1);
				func_781(&iLocal_151);
				func_306(&iLocal_150, &iLocal_140, 0);
			}
		}
		if (unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iLocal_140, 0) && unk_0x10930B9CAD4111C2(uLocal_248[0], iLocal_140, 0))
		{
			if (((!func_815("Destination1") && !func_815("Destination2")) && !func_815("Destination3")) && !func_815("Destination4"))
			{
				if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -97.46745f, -1140.701f, 19.82074f, -289.8f, -1141.7f, 67.07879f, 90f, 0, 1, 0))
				{
					if ((!unk_0xC4B7D5901EDA35B5() || unk_0x37FBC14B2F5D54DB(203) == 0) && !func_771())
					{
						func_774("ARM3_STOP", 7, 1, 0);
					}
					func_809("Destination1", 1);
				}
			}
			else if (func_815("Destination1"))
			{
				if (func_815("HaltVehicle") && func_276(iLocal_140, 1093140480, 1, 1056964608, 0, 1, 0))
				{
					func_207(unk_0x95B959F18401C09A(), 0, 256);
					if (!func_768("ARM3_STOP") && !func_768("ARM3_DRIV"))
					{
						func_8();
					}
				}
				if ((!func_815("HaltVehicle") && unk_0x18FB647D79B09657(iLocal_140, -148.7715f, -1149.903f, 23.2067f, 3f, 3f, 2f, 1, 1, 0)) && unk_0x71D489B4139EA15B(iLocal_140, 90f))
				{
					unk_0x4E609369225EFC41(0);
					if (!unk_0xE38E3CF1625A4145(iLocal_151))
					{
						unk_0x739FD1CAC998D66A();
						func_781(&iLocal_151);
						func_11(&iLocal_151, -148.7715f, -1149.903f, 23.2067f, 1);
					}
					func_809("HaltVehicle", 1);
				}
			}
			if (((!func_815("Destination1") && !func_815("Destination2")) && !func_815("Destination3")) && !func_815("Destination4"))
			{
				if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -97.46745f, -1140.701f, 19.82074f, -101.7f, -1383.3f, 73.34282f, 90f, 0, 1, 0))
				{
					unk_0x4E609369225EFC41(0);
					unk_0x739FD1CAC998D66A();
					func_781(&iLocal_151);
					func_11(&iLocal_151, -91.7239f, -1180.303f, 25.3327f, 1);
					if ((!unk_0xC4B7D5901EDA35B5() || unk_0x37FBC14B2F5D54DB(203) == 0) && !func_771())
					{
						func_774("ARM3_STOP", 7, 1, 0);
					}
					func_809("Destination2", 1);
				}
			}
			else if (func_815("Destination2"))
			{
				if (func_815("HaltVehicle") && func_276(iLocal_140, 1093140480, 1, 1056964608, 0, 1, 0))
				{
					func_207(unk_0x95B959F18401C09A(), 0, 256);
					if (!func_768("ARM3_STOP") && !func_768("ARM3_DRIV"))
					{
						func_8();
					}
				}
				if ((!func_815("HaltVehicle") && unk_0x18FB647D79B09657(iLocal_140, -91.7239f, -1180.303f, 25.3327f, 3f, 3f, 2f, 1, 1, 0)) && unk_0x71D489B4139EA15B(iLocal_140, 90f))
				{
					func_809("HaltVehicle", 1);
				}
			}
			if (((!func_815("Destination1") && !func_815("Destination2")) && !func_815("Destination3")) && !func_815("Destination4"))
			{
				if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -97.46745f, -1140.701f, 19.82074f, 81.4f, -1129.5f, 73.33405f, 90f, 0, 1, 0))
				{
					unk_0x4E609369225EFC41(0);
					unk_0x739FD1CAC998D66A();
					func_781(&iLocal_151);
					func_11(&iLocal_151, -64.8446f, -1130.052f, 24.7219f, 1);
					if ((!unk_0xC4B7D5901EDA35B5() || unk_0x37FBC14B2F5D54DB(203) == 0) && !func_771())
					{
						func_774("ARM3_STOP", 7, 1, 0);
					}
					func_809("Destination3", 1);
				}
			}
			else if (func_815("Destination3"))
			{
				if (func_815("HaltVehicle") && func_276(iLocal_140, 1093140480, 1, 1056964608, 0, 1, 0))
				{
					func_207(unk_0x95B959F18401C09A(), 0, 256);
					if (!func_768("ARM3_STOP") && !func_768("ARM3_DRIV"))
					{
						func_8();
					}
				}
				if ((!func_815("HaltVehicle") && unk_0x18FB647D79B09657(iLocal_140, -64.8446f, -1130.052f, 24.7219f, 3f, 3f, 2f, 1, 1, 0)) && unk_0x71D489B4139EA15B(iLocal_140, 90f))
				{
					func_809("HaltVehicle", 1);
				}
			}
			if (((!func_815("Destination1") && !func_815("Destination2")) && !func_815("Destination3")) && !func_815("Destination4"))
			{
				if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -97.46745f, -1140.701f, 19.82074f, -22.4f, -914.9f, 72.96643f, 90f, 0, 1, 0))
				{
					unk_0x4E609369225EFC41(0);
					unk_0x739FD1CAC998D66A();
					func_781(&iLocal_151);
					func_11(&iLocal_151, -97.2467f, -1087.589f, 25.2988f, 1);
					if ((!unk_0xC4B7D5901EDA35B5() || unk_0x37FBC14B2F5D54DB(203) == 0) && !func_771())
					{
						func_774("ARM3_STOP", 7, 1, 0);
					}
					func_809("Destination4", 1);
				}
			}
			else if (func_815("Destination4"))
			{
				if (func_815("HaltVehicle") && func_276(iLocal_140, 1093140480, 1, 1056964608, 0, 1, 0))
				{
					func_207(unk_0x95B959F18401C09A(), 0, 256);
					if (!func_768("ARM3_STOP") && !func_768("ARM3_DRIV"))
					{
						func_8();
					}
				}
				if ((!func_815("HaltVehicle") && unk_0x18FB647D79B09657(iLocal_140, -97.2467f, -1087.589f, 25.2988f, 3f, 3f, 2f, 1, 1, 2)) && unk_0x71D489B4139EA15B(iLocal_140, 90f))
				{
					func_809("HaltVehicle", 1);
				}
			}
		}
		if (!unk_0x765F6FEEFF39224F(iLocal_167))
		{
			if (unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), -59.8f, -1098.78f, 24.92f, 100f, 100f, 50f, 0, 1, 0))
			{
				iLocal_167 = unk_0xDD9A603448A23A17(joaat("prop_showroom_glass_1b"), -59.87f, -1098.84f, 27.2f, 1, true, 0);
				unk_0x1C8705F667F673EA(iLocal_167, 0f, 0f, 121.5f, 2, 1);
				unk_0xF70578F5CD9822CB(iLocal_167, true);
			}
		}
		unk_0x3FD9339AA95E323F(0, 23, 1);
		unk_0x3FD9339AA95E323F(0, 75, 1);
		unk_0x3FD9339AA95E323F(0, 69, 1);
		unk_0x3FD9339AA95E323F(0, 70, 1);
		unk_0x3FD9339AA95E323F(0, 68, 1);
		unk_0x3FD9339AA95E323F(0, 262, 1);
		unk_0x3FD9339AA95E323F(0, 261, 1);
		if (unk_0xE3903F59E2F22150() > iLocal_53)
		{
			if (unk_0xCB46B7F7245145D9("Armenian_3_mcs_7"))
			{
				if (unk_0x782B99DB55846C95(func_787(0), iLocal_140, 2, 0, 0))
				{
					while (!func_276(iLocal_140, 10f, 10, 1056964608, 0, 1, 0))
					{
						func_773(0);
					}
					iVar2 = unk_0x65F35477FEAD6F0F(iLocal_140);
					iVar8 = -1;
					unk_0xFEF5F9BB57EA2E8D(joaat("bjxl"), &vVar4, &vVar5);
					if (iLocal_172 == 0)
					{
						iLocal_172 = unk_0x5246C2012139FD35(unk_0xFBB1F99A825CAB09(iLocal_140, 1), vVar5 - vVar4, unk_0x60B5C1FD066CB864(iLocal_140, 2), 2, 346, iLocal_140, 4);
					}
					if (iLocal_172 != 0)
					{
						iVar9 = unk_0x819B6E76423AE494(iLocal_172, &iVar8, &uVar6, &uVar7, &uVar3);
						if (iVar9 == 2)
						{
							iLocal_172 = 0;
						}
						if (iVar9 != 1)
						{
							if ((((iVar8 < 1 && unk_0x71D489B4139EA15B(iLocal_140, 90f)) && !unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), -52.02579f, -1095.311f, 32.23032f, 50f, 50f, 8f, 0, 1, 0)) && !unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), -148.7715f, -1149.903f, 23.2067f, 20f, 20f, 8f, 0, 1, 0)) && !(iVar2 != 0 && unk_0xE056C244FACC746C(iVar2) == 1))
							{
								unk_0xEF6624A3AFF02A02(uLocal_248[0], "Michael", 0, 0, 0);
								unk_0xEF6624A3AFF02A02(iLocal_140, "Franklins_Car", 0, 0, 0);
								func_836(1, 1, 1, 0, 0, 0);
								unk_0x1790B816B917D10E(0, 0, 1, 0);
								unk_0x2EC4FFC8740228D3(0);
								if (!unk_0x71D489B4139EA15B(iLocal_140, 45f))
								{
									unk_0x1B2303F9DC2D90D5(iLocal_140, 1084227584);
								}
								unk_0xA134AF12FAD14A6F(unk_0xFBB1F99A825CAB09(iLocal_140, 1), unk_0x60B5C1FD066CB864(iLocal_140, 2), 0);
								func_773(0);
								unk_0x3159B498636848E6(0);
								func_274(&iLocal_166);
								while (!unk_0x15661F4AC08D433A())
								{
									if (unk_0x7E15D709E86EB560() >= 11900)
									{
										func_836(0, 1, 1, 0, 0, 0);
										iLocal_237 = 18;
										func_788();
									}
									func_773(0);
								}
								func_836(0, 1, 1, 0, 0, 0);
								iLocal_237 = 18;
								func_788();
							}
							else
							{
								iLocal_237 = 18;
								func_788();
							}
						}
					}
				}
			}
			else if (unk_0xC7D0A132A56D5FCB())
			{
				unk_0x4742207943D8EB65();
			}
			else
			{
				unk_0x3427206E004F448F("Armenian_3_mcs_7", 8);
			}
		}
		if (unk_0x765F6FEEFF39224F(iLocal_140) && !unk_0xD62C4419A41F106A(iLocal_140, 0))
		{
			if (unk_0x765F6FEEFF39224F(uLocal_248[0]) && !unk_0xD62C4419A41F106A(uLocal_248[0], 0))
			{
				if (!unk_0xEE984ED4E4A374BE(uLocal_248[0], iLocal_140))
				{
					iLocal_237 = 20;
					func_788();
				}
			}
		}
		unk_0xC2E971FFC45AE37D();
	}
	if (func_7())
	{
		func_322(&uLocal_223, 0, 0);
		if (!unk_0xCB46B7F7245145D9("Armenian_3_mcs_6"))
		{
			unk_0x4742207943D8EB65();
			while (unk_0xC7D0A132A56D5FCB())
			{
				func_773(0);
			}
		}
		if (unk_0x7C71681384076318("ARM_3_DRIVE_TO_DEALERSHIP"))
		{
			unk_0x7CED302277C0F3D3("ARM_3_DRIVE_TO_DEALERSHIP");
		}
		func_760(0);
		if (unk_0x117DAF3BF7232886(iLocal_156))
		{
			if (unk_0xFAA5C555ED0CEC9B(iLocal_156))
			{
				unk_0x3DA7F51505BA3457(unk_0x95B959F18401C09A(), 1);
			}
		}
		unk_0x052830EE89C97404(1);
		unk_0x3A3707C1ECABF993(iLocal_140, 5, true);
		func_781(&iLocal_150);
		func_781(&iLocal_153);
		unk_0x739FD1CAC998D66A();
		iLocal_236++;
	}
}

void func_331()
{
	int iVar0;
	
	if (func_272())
	{
		func_211(3, "stageStealCar", 0, 0, 0, 1);
		if (unk_0x765F6FEEFF39224F(iLocal_138) && !unk_0xD62C4419A41F106A(iLocal_138, 0))
		{
			func_554(iLocal_138);
		}
		unk_0x4B06B5746CBEC99F(0.1f);
		func_550(1);
		iVar0 = unk_0x30B9FCF52BAAEB11(-49.9775f, -1097.287f, 25.4223f, "v_carshowroom");
		if (unk_0x802F1160A12FDAC3(iVar0, "csr_beforeMission"))
		{
			unk_0x74D5C2C6E4D82BF7(iVar0, "csr_beforeMission");
		}
		if (unk_0x802F1160A12FDAC3(iVar0, "csr_afterMissionA"))
		{
			unk_0x74D5C2C6E4D82BF7(iVar0, "csr_afterMissionA");
		}
		if (unk_0x802F1160A12FDAC3(iVar0, "csr_afterMissionB"))
		{
			unk_0x74D5C2C6E4D82BF7(iVar0, "csr_afterMissionB");
		}
		if (!unk_0x802F1160A12FDAC3(iVar0, "csr_inMission"))
		{
			unk_0xAFF9058FF075CFD5(iVar0, "csr_inMission");
		}
		func_802(179, 1, 0, 1, 0);
		unk_0x7749193AF003DC67(iVar0);
		iLocal_87 = 0;
		func_207(unk_0x95B959F18401C09A(), 1, 0);
		iLocal_85 = 1;
		unk_0x63F0B040CE6EDF0F(false, 0, 3000, 1, 0, 0);
		func_836(0, 1, 1, 0, 0, 0);
		func_549(4, joaat("v_ilev_mm_door"), 0);
		if (unk_0x765F6FEEFF39224F(iLocal_140) && !unk_0xD62C4419A41F106A(iLocal_140, 0))
		{
			unk_0xD303E20CB0AE4AD0(iLocal_140, 4);
		}
		iLocal_98 = 0;
		unk_0x3DA7F51505BA3457(unk_0x95B959F18401C09A(), 1);
		func_144(4, unk_0x33CD235DF1E6A94E());
		unk_0x046ED2CF120C8949(Global_35548[4 /*31*/], 0, 1, 1);
		func_784(&uLocal_288, 3, unk_0x33CD235DF1E6A94E(), "FRANKLIN", 0, 1);
		func_784(&uLocal_288, 8, 0, "SIMEON", 0, 1);
		unk_0x9FD099B0593CD91D(func_787(1), true);
		if (!unk_0x765F6FEEFF39224F(uLocal_248[0]))
		{
			func_368(&(uLocal_248[0]), 0, vLocal_105, 26.8488f, 0);
			func_334(uLocal_248[0], 12, 25, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			unk_0x274C6068B660FFB4(uLocal_248[0], joaat("weapon_unarmed"), true);
			func_120(uLocal_248[0], 0);
			unk_0xC36B7971576CC42F(uLocal_248[0], 0);
			unk_0x0648A75D3F60E864(uLocal_248[0], iLocal_196);
			unk_0x094626C0798AE1F8(uLocal_248[0], iLocal_140, 2);
		}
		unk_0x4D5F3407F1F37E28(func_787(0), 1, 1, 1, 1, 1, 1, 0, 0);
		unk_0x5FEE418CE11E6DDE(func_787(0), 118, false);
		unk_0x5FEE418CE11E6DDE(func_787(0), 208, true);
		unk_0x9FD099B0593CD91D(func_787(0), true);
		unk_0x4A852F02088ECC9D(func_787(0), 1);
		if (!unk_0x7C71681384076318("ARM_3_STEAL_CAR"))
		{
			unk_0xDEFB5E2E5CBD460A("ARM_3_STEAL_CAR");
		}
		func_114(7);
		if (func_119())
		{
			unk_0xF70578F5CD9822CB(unk_0x33CD235DF1E6A94E(), true);
			iLocal_158 = unk_0x30B9FCF52BAAEB11(-812.1879f, 179.9663f, 71.1639f, "V_Michael");
			unk_0xDDF57F769FD85704(iLocal_158);
			while (!unk_0x5FC25A9F19EB39FA(iLocal_158))
			{
				func_773(0);
			}
			iLocal_86 = 1;
			func_809("GarageDoorLockedSkip", 1);
			unk_0xF70578F5CD9822CB(unk_0x33CD235DF1E6A94E(), false);
			unk_0x31826EF4A8BC8E9F(unk_0x33CD235DF1E6A94E());
			unk_0x094626C0798AE1F8(unk_0x33CD235DF1E6A94E(), iLocal_140, -1);
			if (!bLocal_92)
			{
				func_118(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 1), 20f);
			}
			unk_0x1B2303F9DC2D90D5(iLocal_140, 1084227584);
			unk_0x7FC263D448DC8CAC(iLocal_140);
			unk_0xC7E6A5D90DED6E0B(0f);
			unk_0xD6EDA274D82E8678(-10f, 1065353216);
			func_773(750);
			func_114(8);
			if (unk_0xBB5E373390A5F824())
			{
				unk_0xACCDA78123DB57B0(500);
			}
		}
	}
	else
	{
		if (unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iLocal_140, 0))
		{
			if (timera() > 1000)
			{
				func_148(40, 3);
			}
			if (!unk_0xE38E3CF1625A4145(iLocal_151))
			{
				unk_0xD362430CD61A9B08();
				func_112("ARM3_DEST", 7500, 1);
				func_781(&iLocal_150);
				func_11(&iLocal_151, -148.7715f, -1149.903f, 23.2067f, 1);
				unk_0x27CD99369517EA2E(156, 1, 0);
				unk_0xC44B42CC99839799(-273.0147f, -1140.79f, 22.78436f);
				unk_0xC44B42CC99839799(-148.7715f, -1149.903f, 23.2067f);
				unk_0x4E609369225EFC41(1);
			}
			if (func_815("ARM3_DEST"))
			{
				if (!func_815("ARM3_INCAR"))
				{
					if ((!unk_0xC4B7D5901EDA35B5() || unk_0x37FBC14B2F5D54DB(203) == 0) && !func_771())
					{
						if (unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 1), -811.175f, 187.6008f, 73.30764f, true) > 100f && unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iLocal_140, 0))
						{
							if (func_333(unk_0x33CD235DF1E6A94E()))
							{
								func_332(&uLocal_288, 18, "ARM3AUD", "ARM3_INCARA", 8, 1, 0, 0, 0);
							}
							else
							{
								func_332(&uLocal_288, 18, "ARM3AUD", "ARM3_INCARB", 8, 1, 0, 0, 0);
							}
							unk_0xB5D26BFA756D0D11(10f, 8f, 3);
							func_809("ARM3_INCAR", 1);
						}
					}
				}
			}
			if (func_815("ARM3_INCAR"))
			{
				if (func_768("ARM3_INCARA") || func_768("ARM3_INCARB"))
				{
					if (unk_0xFA411175F279DC8C(unk_0x95B959F18401C09A()))
					{
						unk_0xCBE6E2953ED9652D(unk_0x95B959F18401C09A());
						unk_0x3DA7F51505BA3457(unk_0x95B959F18401C09A(), 0);
					}
				}
				else if (!unk_0xFA411175F279DC8C(unk_0x95B959F18401C09A()))
				{
					unk_0x3DA7F51505BA3457(unk_0x95B959F18401C09A(), 1);
				}
			}
			if ((unk_0xE80842D7B53F8525(iLocal_140) < iLocal_60 || unk_0x660BC449336F0502(iLocal_140) < fLocal_61) || unk_0x787CBB9DB6BA1A49(iLocal_140) < fLocal_62)
			{
				unk_0x41EDD559141FF338(func_787(1), "ARM3_BRAA", "FRANKLIN");
				iLocal_60 = unk_0xE80842D7B53F8525(iLocal_140);
				fLocal_61 = unk_0x660BC449336F0502(iLocal_140);
				fLocal_62 = unk_0x787CBB9DB6BA1A49(iLocal_140);
			}
		}
		else if (!unk_0xE38E3CF1625A4145(iLocal_150))
		{
			unk_0xD362430CD61A9B08();
			func_112("ARM3_CAR2", 7500, 1);
			func_781(&iLocal_151);
			func_306(&iLocal_150, &iLocal_140, 0);
		}
		if (unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iLocal_140, 0) && unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -845.2866f, 162.1034f, 64.66984f, -845.3317f, 155.9653f, 70.58934f, 4f, 0, 1, 0))
		{
			if (unk_0x7C71681384076318("ARM_3_STEAL_CAR"))
			{
				unk_0x7CED302277C0F3D3("ARM_3_STEAL_CAR");
			}
			if (!unk_0x7C71681384076318("ARM_3_EXIT_THROUGH_GATE"))
			{
				unk_0xDEFB5E2E5CBD460A("ARM_3_EXIT_THROUGH_GATE");
			}
		}
		if (unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iLocal_140, 0) && !unk_0x707FFB0E65C1C546(unk_0x33CD235DF1E6A94E()))
		{
			if (unk_0xF1CDE9FD207C4CD8(0, 23) || unk_0xF1CDE9FD207C4CD8(0, 75))
			{
				iLocal_98 = 1;
			}
		}
		if (unk_0x765F6FEEFF39224F(iLocal_140) && !unk_0xD62C4419A41F106A(iLocal_140, 0))
		{
			if (unk_0x71D489B4139EA15B(iLocal_140, 90f))
			{
				iLocal_54 = unk_0xE3903F59E2F22150() + 10000;
				if (unk_0x156573D1AADB54ED(iLocal_140))
				{
					if (((((unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 1), -60.72f, -1100.55f, 25.4f, true) < 1200f || iLocal_98 == 1) && unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iLocal_140, 0)) && !unk_0x707FFB0E65C1C546(unk_0x33CD235DF1E6A94E())) && !func_768("ARM3_INCARA")) && !func_768("ARM3_INCARB"))
					{
						if (func_304(0, 0))
						{
							unk_0xD303E20CB0AE4AD0(iLocal_140, 4);
							if (!unk_0x765F6FEEFF39224F(uLocal_248[0]))
							{
								func_368(&(uLocal_248[0]), 0, vLocal_105, 26.8488f, 0);
								func_334(uLocal_248[0], 12, 25, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								unk_0x274C6068B660FFB4(uLocal_248[0], joaat("weapon_unarmed"), true);
							}
							if (!unk_0x765F6FEEFF39224F(iLocal_166))
							{
								iLocal_166 = unk_0x7CA67831169E8AA6(unk_0x12772FC739A13F81(joaat("weapon_pistol")), vLocal_105, 1, true, 0);
							}
							unk_0x2F0A6390D863D337(iLocal_166, uLocal_248[0], unk_0xFCAF61876D23D31D(uLocal_248[0], 28422), vLocal_101, vLocal_101, 0, 0, 0, 0, 2, 1);
							unk_0xC36B7971576CC42F(uLocal_248[0], 0);
							unk_0x0648A75D3F60E864(uLocal_248[0], iLocal_196);
							func_784(&uLocal_288, 1, uLocal_248[0], "MICHAEL", 0, 1);
							unk_0x094626C0798AE1F8(uLocal_248[0], iLocal_140, 2);
							while (!unk_0x7B3767E83E6F888A(uLocal_248[0]))
							{
								unk_0x3FD9339AA95E323F(0, 23, 1);
								unk_0x3FD9339AA95E323F(0, 75, 1);
								func_773(0);
							}
							unk_0x99414FB2D30425C1(&uLocal_157);
							unk_0x108754262311D34F(0, sLocal_115, "michaelappears_intro_franklin", 8f, -8f, -1, 32, 0.31f, 0, 0, 0);
							unk_0xC734F59A13D39AEF(uLocal_157);
							unk_0x13A2D602CD10CBAC(unk_0x33CD235DF1E6A94E(), uLocal_157);
							unk_0xA7A57E7757ED035E(&uLocal_157);
							unk_0x99414FB2D30425C1(&uLocal_157);
							unk_0x108754262311D34F(0, sLocal_115, "michaelappears_intro_michael", 1000f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x108754262311D34F(0, sLocal_115, "michaelappears_loop_michael", 8f, -4f, -1, 2, 0, 0, 0, 0);
							unk_0xC734F59A13D39AEF(uLocal_157);
							unk_0x13A2D602CD10CBAC(uLocal_248[0], uLocal_157);
							unk_0xA7A57E7757ED035E(&uLocal_157);
							unk_0x880B00F3FAE4C022(uLocal_248[0], 0, 0);
							unk_0x697EBA5CF1A6AB57(uLocal_248[0], iLocal_195, 120, true, true);
							unk_0x274C6068B660FFB4(uLocal_248[0], iLocal_195, true);
							func_773(0);
							unk_0xC94CF61BF93818C8(iLocal_140, -0.1f, 1f, 1.1f, 1, 2000, 6000, 2000, -244429742);
							if (!iLocal_66)
							{
								iLocal_65 = unk_0xCB68F86E41CE5197();
								iLocal_67 = unk_0xCB75C331DD5DDCCC(0);
								iLocal_66 = 1;
							}
							unk_0x816788E0CA50BB83(0);
							func_120(uLocal_248[0], 1);
							unk_0xB5D26BFA756D0D11(0f, 15f, 3);
							func_8();
						}
					}
				}
			}
			else if (unk_0x8BB475EA09C9A0EB(iLocal_140) < 1f && unk_0xE3903F59E2F22150() > iLocal_54)
			{
				iLocal_237 = 20;
				func_788();
			}
		}
	}
	if (func_7())
	{
		if (unk_0x765F6FEEFF39224F(iLocal_140) && !unk_0xD62C4419A41F106A(iLocal_140, 0))
		{
			unk_0xD303E20CB0AE4AD0(iLocal_140, 4);
		}
		if (unk_0x7C71681384076318("ARM_3_STEAL_CAR"))
		{
			unk_0x7CED302277C0F3D3("ARM_3_STEAL_CAR");
		}
		if (unk_0x7C71681384076318("ARM_3_EXIT_THROUGH_GATE"))
		{
			unk_0x7CED302277C0F3D3("ARM_3_EXIT_THROUGH_GATE");
		}
		unk_0xCBE6E2953ED9652D(unk_0x95B959F18401C09A());
		unk_0x3DA7F51505BA3457(unk_0x95B959F18401C09A(), 0);
		if (!unk_0x765F6FEEFF39224F(uLocal_248[0]))
		{
			unk_0x4B8B69DAE5BAC592(&(uLocal_248[0]));
			func_368(&(uLocal_248[0]), 0, vLocal_105, 26.8488f, 0);
			func_334(uLocal_248[0], 12, 25, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			unk_0x274C6068B660FFB4(uLocal_248[0], joaat("weapon_unarmed"), true);
			if (!unk_0x765F6FEEFF39224F(iLocal_166))
			{
				iLocal_166 = unk_0x7CA67831169E8AA6(unk_0x12772FC739A13F81(joaat("weapon_pistol")), vLocal_105, 1, true, 0);
			}
			unk_0x2F0A6390D863D337(iLocal_166, uLocal_248[0], unk_0xFCAF61876D23D31D(uLocal_248[0], 28422), vLocal_101, vLocal_101, 0, 0, 0, 0, 2, 1);
			unk_0xC36B7971576CC42F(uLocal_248[0], 0);
			unk_0x0648A75D3F60E864(uLocal_248[0], iLocal_196);
			unk_0x094626C0798AE1F8(uLocal_248[0], iLocal_140, 2);
			while (!unk_0x7B3767E83E6F888A(uLocal_248[0]))
			{
				func_773(0);
			}
			unk_0xC94CF61BF93818C8(iLocal_140, -0.1f, 1f, 1.1f, 1, 2000, 6000, 2000, -244429742);
			if (!iLocal_66)
			{
				iLocal_65 = unk_0xCB68F86E41CE5197();
				iLocal_67 = unk_0xCB75C331DD5DDCCC(0);
				iLocal_66 = 1;
			}
			unk_0x816788E0CA50BB83(0);
			unk_0x99414FB2D30425C1(&uLocal_157);
			unk_0x108754262311D34F(0, sLocal_115, "michaelappears_intro_franklin", 8f, -8f, -1, 32, 0, 0, 0, 0);
			unk_0xC734F59A13D39AEF(uLocal_157);
			unk_0x13A2D602CD10CBAC(unk_0x33CD235DF1E6A94E(), uLocal_157);
			unk_0xA7A57E7757ED035E(&uLocal_157);
			unk_0x99414FB2D30425C1(&uLocal_157);
			unk_0x108754262311D34F(0, sLocal_115, "michaelappears_intro_michael", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0x108754262311D34F(0, sLocal_115, "michaelappears_loop_michael", 8f, -4f, -1, 2, 0, 0, 0, 0);
			unk_0xC734F59A13D39AEF(uLocal_157);
			unk_0x13A2D602CD10CBAC(uLocal_248[0], uLocal_157);
			unk_0xA7A57E7757ED035E(&uLocal_157);
			unk_0x697EBA5CF1A6AB57(uLocal_248[0], iLocal_195, 120, true, true);
			unk_0x274C6068B660FFB4(uLocal_248[0], iLocal_195, true);
		}
		func_784(&uLocal_288, 1, uLocal_248[0], "MICHAEL", 0, 1);
		func_120(uLocal_248[0], 1);
		unk_0x71CA80D41E1338B4(func_555(0));
		func_148(40, 3);
		func_781(&iLocal_150);
		iLocal_236++;
	}
}

int func_332(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_320(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
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
	return func_311(sParam3, iParam4, bParam8);
}

int func_333(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		return 0;
	}
	if (!unk_0xF0D230FB550CD6EB(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_111(iParam0);
	if (!func_108(iVar0))
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < 9)
	{
		if (unk_0x765F6FEEFF39224F(Global_91043[iVar1]))
		{
			if (unk_0x91D5C8283D19AF49(Global_91043[iVar1], 0))
			{
				if (unk_0x10930B9CAD4111C2(iParam0, Global_91043[iVar1], 0))
				{
					return 1;
				}
			}
		}
		iVar1++;
	}
	return 0;
}

int func_334(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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
	
	if (unk_0xBC2FC12AD0FBF72E(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	Global_71400++;
	iVar5 = -99;
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = unk_0x541D5C57194E73C4(iParam0);
	if (iParam5 == 0)
	{
		Global_71402[1 /*14*/] = { func_33(iVar10, iParam1, iParam2, -1) };
		if (!func_367(iParam3))
		{
			Global_71400 = (Global_71400 - 1);
			return 0;
		}
		func_364(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("player_one"))
			{
				iVar5 = func_363(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = func_363(iParam0, 9);
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
			iVar7 = func_362(iParam0, 1);
			if (!func_361(iVar10, 14, iVar7, -1))
			{
				iVar7 = -99;
			}
			iVar8 = func_362(iParam0, 0);
			if (!func_360(iVar10, 14, iVar8, -1) && !func_359(iVar10, 14, iVar8, -1))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = func_362(iParam0, 2);
			}
		}
		unk_0xF52BF9A82ABDA815(iParam0);
		uVar11 = 15;
		if (iParam5 == 1)
		{
			uVar11 = { Global_71445 };
		}
		else
		{
			uVar11 = { func_356(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_71402[1 /*14*/] = { func_33(iVar10, iVar0, uVar11[iVar0], -1) };
				if (unk_0x0E4018692D92041D(Global_71402[1 /*14*/].f_6, 0))
				{
					if (iVar0 == 13)
					{
						uVar12 = 9;
						if (iParam5 == 1)
						{
							uVar12 = { Global_71462 };
						}
						else
						{
							uVar12 = { func_353(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_71402[1 /*14*/] = { func_33(iVar10, 14, uVar12[iVar1], -1) };
							func_350(iParam0, Global_71402[1 /*14*/].f_12, Global_71402[1 /*14*/].f_3, Global_71402[1 /*14*/].f_4);
							func_364(14);
							if (Global_71400 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = func_344(iParam0, iVar10, 14, uVar12[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_334(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
							func_103(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							unk_0x93AA93DA1B137032(iParam0, func_28(iVar0), Global_71402[1 /*14*/].f_3, Global_71402[1 /*14*/].f_4, unk_0x8069BBC84D092E17(iParam0, func_28(iVar0)));
						}
						else
						{
							unk_0x93AA93DA1B137032(iParam0, func_28(iVar0), Global_71402[1 /*14*/].f_3, Global_71402[1 /*14*/].f_4, iParam4);
						}
						func_364(iVar0);
						if (Global_71400 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = func_344(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_334(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_71402[1 /*14*/] = { func_33(iVar10, iVar0, func_343(iParam0, iVar0, -1), -1) };
				if (unk_0x0E4018692D92041D(Global_71402[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (func_342(iParam0, iVar10, &iVar4, 1))
							{
								func_334(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { func_356(iVar10, 0) };
						func_334(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var14 = { func_33(iVar10, 8, iVar5, -1) };
			if (iVar5 != -99)
			{
				if (func_340(iVar10, iParam2, 8, iVar5, &uVar11, &Var14))
				{
					func_334(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { func_33(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (func_340(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_334(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { func_33(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (func_340(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_334(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { func_33(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (func_340(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_334(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { func_33(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (func_340(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_334(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar15 = { func_353(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_71402[1 /*14*/] = { func_33(iVar10, 14, uVar15[iVar1], -1) };
			func_350(iParam0, Global_71402[1 /*14*/].f_12, Global_71402[1 /*14*/].f_3, Global_71402[1 /*14*/].f_4);
			func_364(14);
			if (Global_71400 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_344(iParam0, iVar10, 14, uVar15[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_334(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		func_350(iParam0, Global_71402[1 /*14*/].f_12, Global_71402[1 /*14*/].f_3, Global_71402[1 /*14*/].f_4);
		func_364(iParam1);
		if (Global_71400 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_344(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_334(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == -1)
		{
			unk_0x93AA93DA1B137032(iParam0, func_28(iParam1), Global_71402[1 /*14*/].f_3, Global_71402[1 /*14*/].f_4, unk_0x8069BBC84D092E17(iParam0, func_28(iParam1)));
		}
		else
		{
			unk_0x93AA93DA1B137032(iParam0, func_28(iParam1), Global_71402[1 /*14*/].f_3, Global_71402[1 /*14*/].f_4, iParam4);
		}
		if (Global_71400 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_344(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_334(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			func_337(iVar10, iParam1, iParam2);
		}
	}
	if (Global_71400 == 1)
	{
		if (func_342(iParam0, iVar10, &iVar4, 0))
		{
			func_334(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_335(iParam0, iVar10, &iVar4))
		{
			func_334(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_71400 = (Global_71400 - 1);
	return 1;
}

int func_335(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_32(iParam1);
	if (Global_106565.f_2357.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_336(iParam0, Global_106565.f_2357.f_539[iVar0 /*65*/].f_64, Global_106565.f_2357.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_106565.f_2357.f_539[iVar0 /*65*/].f_62;
			Global_106565.f_2357.f_539[iVar0 /*65*/].f_63 = -99;
			Global_106565.f_2357.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_336(int iParam0, int iParam1, int iParam2)
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
	
	if (unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x541D5C57194E73C4(iParam0);
	Global_71402[1 /*14*/] = { func_33(iVar0, iParam1, iParam2, -1) };
	if (!unk_0x0E4018692D92041D(Global_71402[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { func_356(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_336(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { func_353(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_336(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_71402[2 /*14*/] = { func_33(iVar0, 14, iVar4, -1) };
									if (Global_71402[2 /*14*/].f_12 == iVar3)
									{
										if (func_336(iParam0, 14, iVar4))
										{
											if (!func_340(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_71402[2 /*14*/])))
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
						iVar1 = func_363(iParam0, iVar2);
						Global_71402[2 /*14*/] = { func_33(iVar0, iVar2, iVar1, -1) };
						if (!func_340(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_71402[2 /*14*/])))
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
		uVar8 = { func_353(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 <= 8)
		{
			if (!func_336(iParam0, 14, uVar8[iVar7]))
			{
				return 0;
			}
			iVar7++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (unk_0x063A77907C209DC4(iParam0, Global_71402[1 /*14*/].f_12) == Global_71402[1 /*14*/].f_3 && (unk_0x5856CD5A7124DF2D(iParam0, Global_71402[1 /*14*/].f_12) == Global_71402[1 /*14*/].f_4 || Global_71402[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
	}
	else if (Global_71402[1 /*14*/].f_3 == unk_0xA603FBA9F3C17D3A(iParam0, func_28(iParam1)) && Global_71402[1 /*14*/].f_4 == unk_0xCEB55689C694866C(iParam0, func_28(iParam1)))
	{
		return 1;
	}
	return 0;
}

void func_337(int iParam0, int iParam1, int iParam2)
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
	if (func_339(iParam0, 12, iVar0))
	{
		if (func_338(iParam0, iParam1, iParam2))
		{
			iVar1 = func_32(iParam0);
			if (iParam1 == 3)
			{
				Global_106565.f_2357.f_539.f_196[iVar1] = iParam2;
			}
			else if (iParam1 == 4)
			{
				Global_106565.f_2357.f_539.f_200[iVar1] = iParam2;
			}
		}
	}
}

int func_338(int iParam0, int iParam1, int iParam2)
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

bool func_339(int iParam0, int iParam1, int iParam2)
{
	Global_71402[1 /*14*/] = { func_33(iParam0, iParam1, iParam2, -1) };
	return unk_0x0E4018692D92041D(Global_71402[1 /*14*/].f_6, 2);
}

int func_340(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
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
		uVar0 = { func_353(iParam0, (*uParam4)[13]) };
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
	if (func_341(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_361(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
		else if (func_360(iParam0, iParam2, iParam3, -1))
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
		else if (func_359(iParam0, iParam2, iParam3, -1))
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
		if (func_361(iParam0, iParam2, iParam3, -1))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return 0;
			}
			return 1;
		}
		else if (func_360(iParam0, iParam2, iParam3, -1))
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
		else if (func_359(iParam0, iParam2, iParam3, -1))
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
		if (func_361(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
		else if (func_360(iParam0, iParam2, iParam3, -1))
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
		else if (func_359(iParam0, iParam2, iParam3, -1))
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

int func_341(int iParam0, int iParam1, int iParam2)
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

int func_342(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_32(iParam1);
	if (Global_106565.f_2357.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_336(iParam0, Global_106565.f_2357.f_539[iVar0 /*65*/].f_61, Global_106565.f_2357.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_106565.f_2357.f_539[iVar0 /*65*/].f_59;
			Global_106565.f_2357.f_539[iVar0 /*65*/].f_60 = -99;
			Global_106565.f_2357.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_343(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_336(iParam0, iParam1, iVar0))
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
				if (func_336(iParam0, iParam1, iVar1))
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
				return func_362(iParam0, iParam2);
			}
		}
		else
		{
			return func_363(iParam0, iParam1);
		}
	}
	return -99;
}

int func_344(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
				iVar1 = func_363(iParam0, 1);
				iVar0 = func_23(iParam1, iParam3, iVar1);
				break;
			
			case 1:
				iVar2 = func_363(iParam0, 2);
				iVar0 = func_23(iParam1, iVar2, iParam3);
				break;
		}
	}
	else if (iParam4 == 2)
	{
		func_103(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 1)
	{
		func_31(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 6)
	{
		if (iParam2 == 4)
		{
			if (func_349(iParam1, iParam3, &iVar0))
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
									if (!func_348(iParam0, 3, 44, 59))
									{
										iVar0 = 44;
									}
								}
								else if (((iParam3 >= 8 && iParam3 <= 17) || (iParam3 >= 18 && iParam3 <= 27)) || (iParam3 >= 28 && iParam3 <= 43))
								{
									if (!func_348(iParam0, 3, 135, 150))
									{
										iVar0 = func_347(iParam1, 3, 135, 150);
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
									
									case 79:
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
									if (!func_348(iParam0, 3, 209, 222))
									{
										iVar0 = func_347(iParam1, 3, 209, 222);
									}
								}
								else if ((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8))
								{
									if (!func_348(iParam0, 3, 243, 258))
									{
										if (iParam3 == 1 || iParam3 == 5)
										{
											iVar0 = func_347(iParam1, 3, 243, 246);
										}
										else if (iParam3 == 2 || iParam3 == 6)
										{
											iVar0 = func_347(iParam1, 3, 247, 250);
										}
										else if (iParam3 == 3 || iParam3 == 7)
										{
											iVar0 = func_347(iParam1, 3, 251, 254);
										}
										else if (iParam3 == 4 || iParam3 == 8)
										{
											iVar0 = func_347(iParam1, 3, 255, 258);
										}
									}
								}
								else if (iParam3 == 41 || iParam3 == 42)
								{
									if (!func_348(iParam0, 3, 176, 191) && !func_348(iParam0, 3, 227, 242))
									{
										iVar0 = func_347(iParam1, 3, 176, 191);
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
								iVar4 = func_363(iParam0, 3);
							}
							else if (iParam2 == 3)
							{
								iVar4 = iParam3;
								iVar5 = func_363(iParam0, 11);
								iVar5 = func_346(iParam1, iVar4, iVar5, 0);
							}
							iVar3 = func_363(iParam0, 8);
							if (((iVar5 >= 5 && iVar5 <= 8) || (iVar5 >= 25 && iVar5 <= 40)) || (iVar5 >= 42 && iVar5 <= 43))
							{
								if (!func_345(joaat("player_one"), iVar3, iVar5, iVar4, &iVar6))
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
								iVar7 = func_363(iParam0, 8);
								iVar8 = func_363(iParam0, 11);
								if (((iVar7 >= 27 && iVar7 <= 42) || (iVar7 >= 43 && iVar7 <= 58)) || (iVar7 >= 59 && iVar7 <= 74))
								{
									iVar0 = func_346(iParam1, iParam3, iVar8, 0);
								}
								else
								{
									iVar0 = func_346(iParam1, iParam3, iVar8, 1);
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
								iVar9 = func_363(iParam0, 11);
								iVar0 = func_346(iParam1, -99, iVar9, 0);
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

int func_345(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)
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

int func_346(int iParam0, int iParam1, int iParam2, int iParam3)
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
				iParam2 = func_347(iParam0, 11, 9, 24);
			}
			else
			{
				iParam2 = func_347(iParam0, 11, 25, 40);
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

int func_347(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam2;
	while (iVar0 <= (iParam3 - 1))
	{
		iVar1 = iVar0;
		if (func_339(iParam0, iParam1, iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -99;
}

int func_348(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_363(iParam0, iParam1);
	if (iVar0 >= iParam2 && iVar0 <= iParam3)
	{
		return 1;
	}
	return 0;
}

int func_349(int iParam0, int iParam1, int iParam2)
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

void func_350(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam2 == -1)
	{
		unk_0xDC3500D83E19B1D6(iParam0, iParam1);
		if (iParam1 == 0)
		{
			unk_0x5FEE418CE11E6DDE(iParam0, 34, false);
			unk_0x5FEE418CE11E6DDE(iParam0, 36, false);
		}
	}
	else
	{
		unk_0x73D993BCA1CEC58D(iParam0, iParam1, iParam2, iParam3, unk_0xB331FCEB94EB05C8());
		if (iParam1 == 0)
		{
			iVar0 = func_24(iParam0, iParam2, iParam3, iParam1);
			if (func_351(unk_0x541D5C57194E73C4(iParam0), 14, iVar0, unk_0xCA25F5F1E0708B9C(iParam0, 0, iParam2, iParam3)))
			{
				unk_0x5FEE418CE11E6DDE(iParam0, 34, true);
				unk_0x5FEE418CE11E6DDE(iParam0, 36, true);
			}
			else
			{
				unk_0x5FEE418CE11E6DDE(iParam0, 34, false);
				unk_0x5FEE418CE11E6DDE(iParam0, 36, false);
			}
		}
	}
}

int func_351(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam3 == -1)
					{
						iParam3 = func_352(iParam0, iParam2, 14, 3);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && unk_0xEA26831785699C09(iParam3, -1033433901, 1)))
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
						iParam3 = func_352(iParam0, iParam2, 14, 4);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && unk_0xEA26831785699C09(iParam3, -1033433901, 1)))
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_352(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
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
		iVar3 = (iParam1 - func_29(iParam0));
		if (iVar3 < 0)
		{
			return -1;
		}
		iVar4 = unk_0x51C67A1CC9BD53D6(iParam3, 7, -1, 1, -1, -1);
		iVar1 = 0;
		while (iVar1 < iVar4)
		{
			unk_0xCAD2858165B4553C(iVar1, &Var0);
			if (!unk_0xC4ED190294E9E658(Var0))
			{
				if (iVar2 == iVar3)
				{
					return Var0.f_1;
				}
				iVar2++;
			}
			iVar1++;
		}
	}
	else
	{
		unk_0x9975DA2BF7F980A7(&Var5);
		iVar7 = 0;
		iVar8 = (iParam1 - func_27(iParam0, func_28(iParam2)));
		if (iVar8 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_71524.f_26[iParam2] && iParam1 == Global_71524[iParam2]) && Global_71524.f_13[iParam2] != 0)
		{
			return Global_71524.f_13[iParam2];
		}
		iVar9 = unk_0x51C67A1CC9BD53D6(iParam3, 7, -1, 0, -1, func_28(iParam2));
		iVar6 = 0;
		while (iVar6 < iVar9)
		{
			unk_0xC7FE3DDCFBE343DE(iVar6, &Var5);
			if (!unk_0xC4ED190294E9E658(Var5))
			{
				if (iVar7 == iVar8)
				{
					Global_71524.f_13[iParam2] = Var5.f_1;
					Global_71524[iParam2] = iParam1;
					Global_71524.f_26[iParam2] = iParam0;
					return Var5.f_1;
				}
				iVar7++;
			}
			iVar6++;
		}
	}
	return -1;
}

struct<10> func_353(int iParam0, int iParam1)
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
					func_355(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_355(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_355(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_355(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_355(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_355(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_355(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_355(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_355(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_355(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_355(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_354(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 31:
					func_355(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_355(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_355(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_355(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_355(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_355(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_355(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_355(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_355(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_355(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_354(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 31:
					func_355(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_355(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_355(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_355(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_355(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_355(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_355(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_355(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_355(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_355(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_354(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_355(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_355(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_355(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_355(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_355(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_355(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_355(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_355(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_355(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_355(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_355(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_355(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_355(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_355(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_355(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 14:
					func_355(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_355(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_355(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_355(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_355(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_355(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_355(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_355(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_355(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_355(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 24:
					func_355(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_354(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_355(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_355(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_355(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_355(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_355(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_355(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_355(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_355(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_355(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_355(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_355(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_355(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_355(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_355(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_355(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				
				case 14:
					func_355(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_355(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_355(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_355(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_355(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_355(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_355(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_355(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_355(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_355(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_354(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_354(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<4> Var1;
	vector3 vVar2;
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
		unk_0x43F9CF21B883831A(iParam2, &Var1);
		if (!unk_0xC4ED190294E9E658(Var1))
		{
			iVar3 = 0;
			while (iVar3 < Var1.f_3)
			{
				if (unk_0x46C89FD8E60D8A4D(Var1.f_1, iVar3, &vVar2) && vVar2.z != -1)
				{
					if ((vVar2.x != 0 && vVar2.x != -1) && vVar2.x != 1849449579)
					{
						(*iParam0)[vVar2.z] = func_26(iParam1, vVar2.x, 14, iVar0);
					}
					else if (vVar2.y != -1)
					{
						(*iParam0)[vVar2.z] = vVar2.y;
					}
				}
				iVar3++;
			}
		}
	}
}

void func_355(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

struct<17> func_356(int iParam0, int iParam1)
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
					if (Global_106565.f_9079.f_99.f_58[120])
					{
						func_358(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						func_358(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				
				case 1:
					func_358(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				
				case 2:
					func_358(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				
				case 3:
					func_358(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				
				case 4:
					func_358(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				
				case 5:
					func_358(&Var1, -99, -99, Global_106565.f_2357.f_539.f_196[0], Global_106565.f_2357.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				
				case 6:
					func_358(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_358(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 8:
					func_358(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_358(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_358(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				
				case 11:
					func_358(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_358(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_358(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_358(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				
				case 15:
					func_358(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				
				case 16:
					func_358(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_358(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_358(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				
				case 19:
					func_358(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_358(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_358(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_358(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_358(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_358(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_358(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_358(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_358(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_358(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_358(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_358(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_358(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				
				case 32:
					func_358(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_358(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_358(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				
				case 35:
					func_358(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_358(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_358(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_358(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_358(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_358(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_358(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_358(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_358(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_358(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_358(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 46:
					func_358(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_358(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 48:
					func_358(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 49:
					func_358(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 50:
					func_358(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				
				case 51:
					func_358(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 52:
					func_358(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_357(&Var1, iParam0, iParam1, 53);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					func_358(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_358(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 2:
					func_358(&Var1, -99, -99, Global_106565.f_2357.f_539.f_196[1], Global_106565.f_2357.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				
				case 3:
					func_358(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				
				case 4:
					func_358(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				
				case 5:
					func_358(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 6:
					func_358(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_358(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				
				case 8:
					func_358(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				
				case 9:
					func_358(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_358(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_358(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 12:
					func_358(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_358(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_358(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_358(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_358(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_358(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_358(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				
				case 19:
					func_358(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_358(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_358(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				
				case 22:
					func_358(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				
				case 23:
					func_358(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				
				case 24:
					func_358(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				
				case 25:
					func_358(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				
				case 26:
					func_358(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				
				case 27:
					func_358(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				
				case 28:
					func_358(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				
				case 29:
					func_358(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				
				case 30:
					func_358(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				
				case 31:
					func_358(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				
				case 32:
					func_358(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				
				case 33:
					func_358(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				
				case 34:
					func_358(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				
				case 35:
					func_358(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				
				case 36:
					func_358(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				
				case 37:
					func_358(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				
				case 38:
					func_358(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_358(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_358(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_358(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_358(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_358(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				
				case 44:
					func_358(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 45:
					func_358(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				
				case 46:
					func_358(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				
				default:
					func_357(&Var1, iParam0, iParam1, 47);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					func_358(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_358(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				
				case 2:
					func_358(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				
				case 3:
					func_358(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				
				case 4:
					func_358(&Var1, -99, -99, Global_106565.f_2357.f_539.f_196[2], Global_106565.f_2357.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 5:
					func_358(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				
				case 6:
					func_358(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				
				case 7:
					func_358(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				
				case 8:
					func_358(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_358(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_358(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_358(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_358(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_358(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_358(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_358(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_358(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_358(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_358(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 19:
					func_358(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_358(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_358(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_358(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_358(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_358(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_358(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_358(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_358(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_358(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_358(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_358(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_358(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 32:
					func_358(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_358(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_358(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 35:
					func_358(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_358(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_358(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_358(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_358(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_358(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_358(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_358(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_358(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_358(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_358(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 46:
					func_358(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_358(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_357(&Var1, iParam0, iParam1, 48);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_358(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				
				case 1:
					func_358(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				
				case 2:
					func_358(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				
				case 3:
					func_358(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				
				case 4:
					func_358(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				
				case 5:
					func_358(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				
				case 6:
					func_358(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				
				case 7:
					func_358(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				
				case 8:
					func_358(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				
				case 9:
					func_358(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				
				case 10:
					func_358(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				
				case 11:
					func_358(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				
				case 12:
					func_358(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				
				case 13:
					func_358(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				
				case 14:
					func_358(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				
				case 15:
					func_358(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				
				case 16:
					func_358(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				
				case 17:
					func_358(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				
				case 18:
					func_358(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				
				case 19:
					func_358(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				
				case 20:
					func_358(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				
				case 21:
					func_358(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				
				case 22:
					func_358(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				
				case 23:
					func_358(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				
				case 24:
					func_358(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				
				case 25:
					func_358(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				
				default:
					func_357(&Var1, iParam0, iParam1, 26);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_358(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				
				case 1:
					func_358(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				
				case 2:
					func_358(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				
				case 3:
					func_358(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				
				case 4:
					func_358(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				
				case 5:
					func_358(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				
				case 6:
					func_358(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				
				case 7:
					func_358(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				
				case 8:
					func_358(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				
				case 9:
					func_358(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				
				case 10:
					func_358(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				
				case 11:
					func_358(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				
				case 12:
					func_358(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				
				case 13:
					func_358(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				
				case 14:
					func_358(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				
				case 15:
					func_358(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				
				case 16:
					func_358(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				
				case 17:
					func_358(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				
				case 18:
					func_358(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				
				case 19:
					func_358(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				
				case 20:
					func_358(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				
				case 21:
					func_358(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				
				case 22:
					func_358(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				
				case 23:
					func_358(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				
				case 24:
					func_358(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				
				case 25:
					func_358(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				
				case 26:
					func_358(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				
				case 27:
					func_358(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				
				default:
					func_357(&Var1, iParam0, iParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_357(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<5> Var1;
	vector3 vVar2;
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
	unk_0x9FE26C6213850011(iVar0, 0);
	unk_0x8B9B4DA276FC8330((iParam2 - iParam3), &Var1);
	if (!unk_0xC4ED190294E9E658(Var1))
	{
		iVar4 = 0;
		while (iVar4 < Var1.f_4)
		{
			if (unk_0x7CA951D4D3A0D1AD(Var1.f_1, iVar4, &vVar2))
			{
				if ((vVar2.x != 0 && vVar2.x != -1) && vVar2.x != 1849449579)
				{
					if (vVar2.z == 10)
					{
						unk_0x9975DA2BF7F980A7(&Var3);
						unk_0xD3024CE00F392F7F(vVar2.x, &Var3);
						if (vVar2.x != Var3.f_1)
						{
							uParam0->f_16 = 1;
						}
					}
					if (vVar2.z == 10 && uParam0->f_16)
					{
						(*uParam0)[func_105(vVar2.z)] = vVar2.x;
						uParam0->f_16 = 1;
					}
					else
					{
						(*uParam0)[func_105(vVar2.z)] = func_26(iParam1, vVar2.x, func_105(vVar2.z), iVar0);
					}
				}
				else if (vVar2.y != -1)
				{
					(*uParam0)[func_105(vVar2.z)] = vVar2.y;
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

void func_358(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

int func_359(int iParam0, int iParam1, int iParam2, int iParam3)
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
							iParam3 = func_352(iParam0, iParam2, 14, 3);
						}
						return (unk_0xEA26831785699C09(iParam3, -1757550583, 1) || unk_0xEA26831785699C09(func_352(iParam0, iParam2, 14, 3), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_352(iParam0, iParam2, 1, 3);
						}
						return (unk_0xEA26831785699C09(iParam3, -1757550583, 0) || unk_0xEA26831785699C09(func_352(iParam0, iParam2, 1, 3), -1842686353, 0));
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
							iParam3 = func_352(iParam0, iParam2, 14, 4);
						}
						return (unk_0xEA26831785699C09(iParam3, -1757550583, 1) || unk_0xEA26831785699C09(func_352(iParam0, iParam2, 14, 4), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_352(iParam0, iParam2, 1, 4);
						}
						return (unk_0xEA26831785699C09(iParam3, -1757550583, 0) || unk_0xEA26831785699C09(func_352(iParam0, iParam2, 1, 4), -1842686353, 0));
					}
					break;
			}
			break;
	}
	return 0;
}

int func_360(int iParam0, int iParam1, int iParam2, int iParam3)
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
						iParam3 = func_352(iParam0, iParam2, 1, 3);
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
						iParam3 = func_352(iParam0, iParam2, 1, 4);
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

int func_361(int iParam0, int iParam1, int iParam2, int iParam3)
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
						iParam3 = func_352(iParam0, iParam2, 14, 3);
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
						iParam3 = func_352(iParam0, iParam2, 14, 4);
					}
					return unk_0xEA26831785699C09(iParam3, 97230661, 1);
				}
			}
			break;
	}
	return 0;
}

int func_362(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		return -99;
	}
	iVar0 = unk_0x063A77907C209DC4(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return func_30(iParam1);
	}
	iVar1 = unk_0x5856CD5A7124DF2D(iParam0, iParam1);
	return func_24(iParam0, iVar0, iVar1, iParam1);
}

int func_363(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		return -99;
	}
	iVar0 = func_28(iParam1);
	iVar1 = unk_0xA603FBA9F3C17D3A(iParam0, iVar0);
	iVar2 = unk_0xCEB55689C694866C(iParam0, iVar0);
	return func_104(iParam0, iVar1, iVar2, iParam1);
}

void func_364(int iParam0)
{
	if (unk_0x0E4018692D92041D(Global_71402[1 /*14*/].f_6, 1) && !unk_0x0E4018692D92041D(Global_71402[1 /*14*/].f_6, 6))
	{
		func_43(iParam0, Global_71402[1 /*14*/].f_5, Global_71402[1 /*14*/].f_2, 2, Global_71402[1 /*14*/].f_1, 1, 0);
	}
	if (unk_0x0E4018692D92041D(Global_71402[1 /*14*/].f_6, 1) && unk_0x0E4018692D92041D(Global_71402[1 /*14*/].f_6, 6))
	{
		if (iParam0 == 12)
		{
			func_365(Global_2621444, 2, 1, 1, -1);
		}
		else if (iParam0 == 13)
		{
		}
		else if (iParam0 == 14)
		{
			func_365(Global_2621444, 2, 1, 1, -1);
		}
		else
		{
			func_365(Global_2621444, 2, 1, 1, -1);
		}
	}
}

void func_365(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_71399;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_45(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_39(iVar2, iVar0, 0);
		unk_0x8950ED5730F62EE8(&iVar3, iVar1);
		func_366(iVar2, iVar3, iVar0, 1, 0);
	}
}

void func_366(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_40(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x12B6E23F244DDB0F(iVar0, iParam1, iParam3);
	}
}

int func_367(int iParam0)
{
	if (!unk_0x0E4018692D92041D(Global_71402[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (!unk_0x0E4018692D92041D(Global_71402[1 /*14*/].f_6, 1))
		{
			return 0;
		}
		if (!unk_0x0E4018692D92041D(Global_71402[1 /*14*/].f_6, 2))
		{
			return 0;
		}
	}
	return 1;
}

void func_368(int iParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4)
{
	if (!unk_0x765F6FEEFF39224F(*iParam0))
	{
		while (!func_369(iParam0, iParam1, vParam2, fParam3, 1, 0, 0))
		{
			wait(0);
		}
		if (iParam4 == 1)
		{
			unk_0xFDA78B1CA2B4FB0A(*iParam0);
		}
	}
}

int func_369(int iParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	if (func_108(iParam1))
	{
		iVar0 = func_555(iParam1);
		unk_0xB815670C37E03CDE(iVar0);
		if (unk_0x5D98D654CDC2165A(iVar0))
		{
			if (unk_0x765F6FEEFF39224F(*iParam0))
			{
				unk_0x4B8B69DAE5BAC592(iParam0);
			}
			*iParam0 = unk_0x9BA5CF280376EEA4(26, iVar0, vParam2, fParam3, 0, false);
			func_548(*iParam0, iParam1, bParam5);
			unk_0xACDBFF0189F77062(*iParam0, 0, 0);
			func_541(*iParam0);
			func_122(*iParam0, 1, 0);
			func_540(*iParam0);
			func_537(*iParam0);
			func_371(*iParam0, bParam6);
			func_370(*iParam0);
			if (bParam4)
			{
				unk_0x71CA80D41E1338B4(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

void func_370(int iParam0)
{
	int iVar0;
	
	if (unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x765F6FEEFF39224F(Global_91081[iVar0]) && Global_91081[iVar0] == iParam0)
		{
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0x765F6FEEFF39224F(Global_91081[iVar0]))
		{
			Global_91081[iVar0] = iParam0;
			return;
		}
		iVar0++;
	}
}

int func_371(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = func_111(iParam0);
	if (func_536(iVar0))
	{
		func_535(iVar0, 0);
		func_334(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		func_375(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (func_373(iParam0))
		{
			func_535(iVar0, 0);
			func_334(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			func_375(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_106565.f_9079.f_99.f_58[120] && !Global_106565.f_9079.f_99.f_58[122])
			{
				func_334(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_106565.f_9079.f_99.f_58[121] = 1;
				return 1;
			}
			if (Global_106565.f_9079.f_99.f_58[123])
			{
				Global_106565.f_9079.f_99.f_58[123] = 0;
				if (!unk_0xBC2FC12AD0FBF72E(iParam0))
				{
					if (func_336(iParam0, 3, 169))
					{
						func_334(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						return 1;
					}
				}
			}
			if (func_336(iParam0, 12, 6))
			{
				func_334(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_336(iParam0, 12, 17))
			{
				if (!func_372(unk_0x541D5C57194E73C4(iParam0), 12, 17))
				{
					func_334(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_336(iParam0, 12, 20))
			{
				if (!func_372(unk_0x541D5C57194E73C4(iParam0), 12, 20))
				{
					func_334(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_336(iParam0, 12, 21))
			{
				if (!func_372(unk_0x541D5C57194E73C4(iParam0), 12, 21))
				{
					func_334(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_336(iParam0, 12, 22))
			{
				if (!func_372(unk_0x541D5C57194E73C4(iParam0), 12, 22))
				{
					func_334(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_336(iParam0, 12, 11))
			{
				func_334(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_336(iParam0, 12, 10))
			{
				func_334(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_336(iParam0, 12, 50))
			{
				func_334(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_336(iParam0, 14, 59))
			{
				func_334(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_336(iParam0, 8, 22))
			{
				func_334(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_336(iParam0, 12, 14))
			{
				func_334(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		
		case 1:
			if (func_336(iParam0, 12, 13))
			{
				if (!func_372(unk_0x541D5C57194E73C4(iParam0), 12, 13))
				{
					func_334(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_336(iParam0, 12, 14))
			{
				if (!func_372(unk_0x541D5C57194E73C4(iParam0), 12, 14))
				{
					func_334(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_336(iParam0, 12, 15))
			{
				if (!func_372(unk_0x541D5C57194E73C4(iParam0), 12, 15))
				{
					func_334(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_336(iParam0, 12, 4))
			{
				func_334(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_336(iParam0, 12, 3))
			{
				func_334(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_336(iParam0, 14, 82))
			{
				func_334(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_336(iParam0, 8, 76))
			{
				func_334(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_336(iParam0, 12, 1))
			{
				func_334(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		
		case 2:
			if (func_336(iParam0, 12, 12))
			{
				func_334(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_336(iParam0, 12, 15))
			{
				func_334(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (func_336(iParam0, 3, 71))
				{
					func_334(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_336(iParam0, 12, 17))
			{
				if (!func_372(unk_0x541D5C57194E73C4(iParam0), 12, 17))
				{
					func_334(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_336(iParam0, 12, 18))
			{
				if (!func_372(unk_0x541D5C57194E73C4(iParam0), 12, 18))
				{
					func_334(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_336(iParam0, 12, 19))
			{
				if (!func_372(unk_0x541D5C57194E73C4(iParam0), 12, 19))
				{
					func_334(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_336(iParam0, 12, 7))
			{
				func_334(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_336(iParam0, 12, 6))
			{
				func_334(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_336(iParam0, 14, 88))
			{
				func_334(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_336(iParam0, 8, 17))
			{
				func_334(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_336(iParam0, 12, 11))
			{
				func_334(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

bool func_372(int iParam0, int iParam1, int iParam2)
{
	Global_71402[1 /*14*/] = { func_33(iParam0, iParam1, iParam2, -1) };
	return unk_0x0E4018692D92041D(Global_71402[1 /*14*/].f_6, 1);
}

bool func_373(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x541D5C57194E73C4(iParam0);
	iVar0 = func_363(iParam0, 4);
	return func_374(iVar1, 4, iVar0);
}

int func_374(int iParam0, int iParam1, int iParam2)
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

void func_375(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<65> Var2;
	int iVar3;
	
	if (!unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		iVar0 = func_111(iParam0);
		if (func_108(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = func_343(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					func_534(iVar0);
					func_377(iParam0, &(Global_106565.f_2357.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			func_106(iParam0, &Var2, 1, -1);
			Global_93407[iVar0 /*65*/] = { Var2 };
			if (iParam0 == unk_0x33CD235DF1E6A94E())
			{
				func_177();
			}
			if (unk_0x36163153849DFDA1(unk_0xD178EF744F20B712()) != unk_0x36163153849DFDA1("clothes_shop_sp") || (unk_0x1BCDA92AD0A7835B(joaat("lester1")) == 0 && unk_0x1BCDA92AD0A7835B(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!func_46(0) && !func_46(1)) && !func_46(2)) && !func_46(3)) && !func_46(4)) && !func_46(9)) && !func_46(10)))
				{
					Global_106565.f_2357.f_539[iVar0 /*65*/] = { Var2 };
					Global_106565.f_2357.f_539.f_2391[iVar0] = func_376(iParam0);
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_106565.f_2357.f_539.f_204[iVar3 /*4*/][iVar0] = func_363(iParam0, func_105(iVar3));
						iVar3++;
					}
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_106565.f_2357.f_539.f_204[iVar3 /*4*/][iVar0] = func_363(iParam0, func_105(iVar3));
						iVar3++;
					}
					if (iVar0 == 0)
					{
						if (Global_106565.f_9079.f_99.f_58[121])
						{
							Global_106565.f_9079.f_99.f_58[122] = 1;
						}
					}
				}
			}
		}
	}
}

int func_376(int iParam0)
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
		iVar3 = unk_0x4F6A06F27F1F391B(iParam0, iVar4);
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			iVar0 = (iVar0 + unk_0x36ED000FFAE4BDC3(iParam0, iVar4, iVar2));
			iVar2++;
		}
		iVar1++;
	}
	iVar5 = 0;
	while (iVar5 < 9)
	{
		iVar8 = iVar5;
		iVar7 = unk_0x20E6751DAB3C09C6(iParam0, iVar8);
		iVar6 = 0;
		while (iVar6 < iVar7)
		{
			iVar0 = (iVar0 + unk_0x1C4C0FF903F4C757(iParam0, iVar8, iVar6));
			iVar6++;
		}
		iVar5++;
	}
	return iVar0;
}

void func_377(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
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
	
	if (!unk_0xBC2FC12AD0FBF72E(iParam0) || iParam5)
	{
		iVar0 = func_111(iParam0);
		iVar1 = unk_0x541D5C57194E73C4(iParam0);
		iVar3 = 0;
		while (iVar3 < 12)
		{
			if (iVar3 != 1 || (iVar3 == 1 && !bParam2))
			{
				if (bParam4)
				{
					if (uParam1->f_13[iVar3] != 0 && uParam1->f_13[iVar3] >= unk_0x4F6A06F27F1F391B(iParam0, iVar3))
					{
						uParam1->f_13[iVar3] = 0;
					}
					if ((*uParam1)[iVar3] != 0 && (*uParam1)[iVar3] >= unk_0x36ED000FFAE4BDC3(iParam0, iVar3, uParam1->f_13[iVar3]))
					{
						(*uParam1)[iVar3] = 0;
					}
				}
				unk_0x93AA93DA1B137032(iParam0, iVar3, uParam1->f_13[iVar3], (*uParam1)[iVar3], uParam1->f_26[iVar3]);
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
					if (uParam1->f_39[iVar3] >= unk_0x20E6751DAB3C09C6(iParam0, iVar3))
					{
						uParam1->f_39[iVar3] = -1;
					}
					else if (uParam1->f_49[iVar3] >= unk_0x1C4C0FF903F4C757(iParam0, iVar3, uParam1->f_39[iVar3]))
					{
						uParam1->f_49[iVar3] = 0;
					}
				}
			}
			if (uParam1->f_39[iVar3] != -1 && uParam1->f_39[iVar3] != 255)
			{
				unk_0x73D993BCA1CEC58D(iParam0, iVar3, uParam1->f_39[iVar3], uParam1->f_49[iVar3], false);
			}
			else
			{
				unk_0xDC3500D83E19B1D6(iParam0, iVar3);
			}
			iVar3++;
		}
		if (func_108(iVar0))
		{
			Global_106565.f_2357.f_539[iVar0 /*65*/].f_59 = uParam1->f_59;
			Global_106565.f_2357.f_539[iVar0 /*65*/].f_60 = uParam1->f_60;
			Global_106565.f_2357.f_539[iVar0 /*65*/].f_61 = uParam1->f_61;
			if (func_342(iParam0, iVar1, &iVar2, 0))
			{
				func_334(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_106565.f_2357.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_106565.f_2357.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_106565.f_2357.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_335(iParam0, iVar1, &iVar2))
			{
				func_334(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (unk_0xB331FCEB94EB05C8() && unk_0x541D5C57194E73C4(iParam0) == unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()))
		{
			bVar4 = func_531(iParam0);
			func_366(753, uParam1->f_60, Global_71399, 1, 0);
			func_366(754, uParam1->f_61, Global_71399, 1, 0);
			iVar5 = func_104(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			if (iVar5 != -99)
			{
				iVar6 = -99;
				if (iVar1 == joaat("mp_m_freemode_01"))
				{
					iVar6 = func_529(iVar5);
				}
				else if (iVar1 == joaat("mp_f_freemode_01"))
				{
					iVar6 = func_527(iVar5);
				}
				if (iVar6 != -99 && iVar5 != iVar6)
				{
					iVar5 = iVar6;
				}
			}
			func_380(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_71399, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = func_104(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_380(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_71399, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = func_24(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_380(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_71399, bVar4, 0, 0);
			}
		}
		if (unk_0xB331FCEB94EB05C8() && iParam0 == unk_0x33CD235DF1E6A94E())
		{
			iVar9 = uParam1->f_59;
			if (iVar1 == joaat("mp_m_freemode_01"))
			{
				iVar9 = func_529(iVar9);
			}
			else
			{
				iVar9 = func_527(iVar9);
			}
			func_366(752, iVar9, Global_71399, 1, 0);
			func_366(2051, iVar9, Global_71399, 1, 0);
			func_378(161, 1, -1, 1);
		}
		if (unk_0xB331FCEB94EB05C8())
		{
			iVar10 = unk_0x25AE733B26BE25A7(iParam0, 1, unk_0xA603FBA9F3C17D3A(iParam0, 1), unk_0xCEB55689C694866C(iParam0, 1));
			iVar11 = unk_0xCA25F5F1E0708B9C(iParam0, 1, unk_0x063A77907C209DC4(iParam0, 1), unk_0x5856CD5A7124DF2D(iParam0, 1));
			if (iVar10 == 1551873674 || iVar10 == 1058287519)
			{
				if (!unk_0xEA26831785699C09(iVar11, -2103452271, 1))
				{
					unk_0xC4707630C8DE50CF(&Var12);
					if (iVar10 == 1551873674)
					{
						unk_0xCAD2858165B4553C(-518535904, &Var12);
					}
					else
					{
						unk_0xCAD2858165B4553C(530896308, &Var12);
					}
					unk_0x73D993BCA1CEC58D(iParam0, 1, Var12.f_3, Var12.f_4, false);
				}
			}
			else if (unk_0xEA26831785699C09(iVar11, -2103452271, 1))
			{
				unk_0xDC3500D83E19B1D6(iParam0, 1);
			}
		}
	}
}

void func_378(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_379())
	{
		iVar0 = Global_2571340[iParam0 /*3*/][func_40(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x353711570A4FAE35(iVar0, iParam1, iParam3);
		}
	}
}

int func_379()
{
	return 1;
	return 0;
}

int func_380(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)
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
		Global_71402[1 /*14*/] = { func_494(iVar5, iParam1, iParam2, -1) };
		if (!func_367(iParam3))
		{
			Global_71400 = (Global_71400 - 1);
			return 0;
		}
		func_492(iVar5, iParam1, iParam2, 1);
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
			uVar15 = { func_356(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar15[iVar0] != -99)
			{
				if (iVar0 == 10 && uVar15.f_16)
				{
					Global_71402[1 /*14*/] = { func_494(iVar5, 10, 0, -1) };
					if (iParam4 == -1)
					{
						unk_0x93AA93DA1B137032(iParam0, func_28(iVar0), Global_71402[1 /*14*/].f_3, Global_71402[1 /*14*/].f_4, unk_0x8069BBC84D092E17(iParam0, func_28(iVar0)));
					}
					else
					{
						unk_0x93AA93DA1B137032(iParam0, func_28(iVar0), Global_71402[1 /*14*/].f_3, Global_71402[1 /*14*/].f_4, iParam4);
					}
					if (unk_0x0E4018692D92041D(Global_71402[1 /*14*/].f_6, 1))
					{
						func_492(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_71402[1 /*14*/] = { func_494(iVar5, iVar0, uVar15[iVar0], -1) };
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
								uVar16 = { func_353(iVar5, uVar15[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_71402[1 /*14*/] = { func_494(iVar5, 14, uVar16[iVar1], -1) };
								func_350(iParam0, Global_71402[1 /*14*/].f_12, Global_71402[1 /*14*/].f_3, Global_71402[1 /*14*/].f_4);
								if (unk_0x0E4018692D92041D(Global_71402[1 /*14*/].f_6, 1))
								{
									func_492(iVar5, iVar0, uVar15[iVar0], 1);
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
									unk_0x93AA93DA1B137032(iParam0, func_28(iVar0), Global_71402[1 /*14*/].f_3, Global_71402[1 /*14*/].f_4, unk_0x8069BBC84D092E17(iParam0, func_28(iVar0)));
								}
								else
								{
									unk_0x93AA93DA1B137032(iParam0, func_28(iVar0), Global_71402[1 /*14*/].f_3, Global_71402[1 /*14*/].f_4, iParam4);
								}
							}
							else
							{
								func_380(iParam0, iVar0, uVar15[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (unk_0x0E4018692D92041D(Global_71402[1 /*14*/].f_6, 1))
							{
								func_492(iVar5, iVar0, uVar15[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_71402[1 /*14*/] = { func_494(iVar5, iVar0, func_491(iParam0, iVar0, -1), -1) };
				if (unk_0x0E4018692D92041D(Global_71402[1 /*14*/].f_6, 3))
				{
					uVar17 = { func_356(iVar5, 0) };
					func_380(iParam0, iVar0, uVar17[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		Global_2621444 = uVar13;
		Global_2621445 = uVar14;
		if (iParam5 == 0)
		{
			iVar18 = func_490();
			if (iVar18 != -1)
			{
				func_487(iVar18, 0, iParam10);
			}
			func_485(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar19 = { func_353(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_71402[1 /*14*/] = { func_494(iVar5, 14, uVar19[iVar1], -1) };
			func_350(iParam0, Global_71402[1 /*14*/].f_12, Global_71402[1 /*14*/].f_3, Global_71402[1 /*14*/].f_4);
			if (unk_0x0E4018692D92041D(Global_71402[1 /*14*/].f_6, 1))
			{
				func_492(iVar5, 14, uVar19[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_71400 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = func_483(iParam0, iVar5, 14, uVar19[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_380(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		func_350(iParam0, Global_71402[1 /*14*/].f_12, Global_71402[1 /*14*/].f_3, Global_71402[1 /*14*/].f_4);
		if (unk_0x0E4018692D92041D(Global_71402[1 /*14*/].f_6, 1))
		{
			func_492(iVar5, iParam1, iParam2, 1);
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
					func_380(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					Global_71402[1 /*14*/] = { func_494(iVar5, iParam1, iParam2, -1) };
				}
			}
		}
		if (Global_71402[1 /*14*/].f_12 == 0)
		{
			func_479(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_71400 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_483(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_380(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = func_483(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_380(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				iVar22 = func_363(iParam0, 11);
				iVar23 = func_363(iParam0, 8);
				iVar24 = func_363(iParam0, 4);
				iVar8 = unk_0x25AE733B26BE25A7(iParam0, 8, unk_0xA603FBA9F3C17D3A(iParam0, 8), unk_0xCEB55689C694866C(iParam0, 8));
				if (unk_0xEA26831785699C09(iVar8, 240476421, 8))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						iVar21 = func_352(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						iVar21 = func_352(iVar5, iParam2, 11, 4);
					}
					if ((((((unk_0xEA26831785699C09(iVar21, 320460654, 0) || unk_0xEA26831785699C09(iVar21, -2017999390, 0)) || unk_0xEA26831785699C09(iVar21, -1410897066, 0)) || unk_0xEA26831785699C09(iVar21, -826135203, 0)) || unk_0xEA26831785699C09(iVar21, -1855618474, 0)) || unk_0xEA26831785699C09(iVar21, -1420825402, 0)) || unk_0xEA26831785699C09(iVar21, -299089347, 0))
					{
					}
					else
					{
						iVar9 = func_363(iParam0, 8);
					}
				}
				iVar25 = unk_0x25AE733B26BE25A7(iParam0, 3, unk_0xA603FBA9F3C17D3A(iParam0, 3), 0);
				if (unk_0xEA26831785699C09(iVar25, -356646862, 0))
				{
					iVar26 = func_478(iVar5, iVar23, iVar22, iVar24);
					if (iVar26 == -99)
					{
						iVar26 = func_483(iParam0, iVar5, 11, iVar22, 3, 0);
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
							iVar21 = func_352(iVar5, iParam2, 11, 4);
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
							if (func_477(iVar5, iVar26, iVar27) == iVar25)
							{
								iVar11 = iVar27;
								iVar12 = unk_0xCEB55689C694866C(iParam0, 3);
							}
							iVar27++;
						}
					}
				}
				iVar21 = -1;
				if ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 256) && unk_0xEA26831785699C09(func_352(iVar5, iParam2, 11, 4), -1200513218, 0))
				{
					iVar22 = func_363(iParam0, 11);
					if (iVar22 >= 256)
					{
						iVar21 = func_352(iVar5, iVar22, 11, 4);
					}
					if (iVar22 >= 256 && unk_0xEA26831785699C09(iVar21, 1965569012, 0))
					{
						iVar28 = func_475(iVar5, iVar22, iParam2, unk_0xCEB55689C694866C(iParam0, 11));
						if (iVar28 != -99)
						{
							func_380(iParam0, 8, iVar28, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_71402[1 /*14*/] = { func_494(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				else if (func_474(iVar5, iParam2, -1))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						if (iVar22 >= 237)
						{
							iVar21 = func_352(iVar5, iVar22, 11, 3);
						}
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						if (iVar22 >= 256)
						{
							iVar21 = func_352(iVar5, iVar22, 11, 4);
						}
					}
					iVar9 = -99;
					if (!func_474(iVar5, iVar22, -1))
					{
						if ((iVar5 == joaat("mp_f_freemode_01") && iVar22 >= 256) && (unk_0xEA26831785699C09(iVar21, -1200513218, 0) || unk_0xEA26831785699C09(iVar21, 1965569012, 0)))
						{
						}
						else if ((iVar5 == joaat("mp_f_freemode_01") && iVar22 >= 256) && ((((((((unk_0xEA26831785699C09(iVar21, 684992453, 0) || unk_0xEA26831785699C09(iVar21, 916636514, 0)) || unk_0xEA26831785699C09(iVar21, -1939378450, 0)) || unk_0xEA26831785699C09(iVar21, -820724897, 0)) || unk_0xEA26831785699C09(iVar21, 153792394, 0)) || unk_0xEA26831785699C09(iVar21, -872449705, 0)) || unk_0xEA26831785699C09(iVar21, 700658917, 0)) || unk_0xEA26831785699C09(iVar21, -549843760, 0)) || unk_0xEA26831785699C09(iVar21, 1830529185, 0)))
						{
						}
						else
						{
							iVar29 = func_473(iParam0, iParam2);
							iVar30 = func_475(iVar5, iVar22, iParam2, unk_0xCEB55689C694866C(iParam0, 11));
							if (iVar30 != -99)
							{
								func_380(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_71402[1 /*14*/] = { func_494(iVar5, iParam1, iParam2, -1) };
								iVar9 = -99;
							}
							else if (iVar29 != -99 && (iParam0 == unk_0x33CD235DF1E6A94E() || iParam0 == Global_4266954))
							{
								func_380(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_71402[1 /*14*/] = { func_494(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar31 = func_472(iVar5, 11, -1);
									Global_71402[1 /*14*/] = { func_494(iVar5, 11, iVar31, -1) };
									iVar30 = func_475(iVar5, iVar31, iParam2, Global_71402[1 /*14*/].f_4);
									if (iVar30 == -99 || unk_0xEA26831785699C09(func_352(iVar5, iParam2, 11, 3), -1237899132, 0))
									{
										iVar30 = 240;
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									if (unk_0xEA26831785699C09(func_352(iVar5, iParam2, 11, 4), -1237899132, 0))
									{
										iVar30 = 120;
									}
									else
									{
										iVar30 = 48;
									}
								}
								func_380(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_71402[1 /*14*/] = { func_494(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_71402[1 /*14*/] = { func_494(iVar5, 11, iVar22, -1) };
						iVar32 = Global_71402[1 /*14*/].f_3;
						Global_71402[1 /*14*/] = { func_494(iVar5, 11, iParam2, -1) };
						iVar33 = Global_71402[1 /*14*/].f_3;
						if (iVar32 != iVar33)
						{
							iVar35 = func_473(iParam0, iParam2);
							Global_71402[1 /*14*/] = { func_494(iVar5, 8, iVar23, -1) };
							iVar34 = Global_71402[1 /*14*/].f_4;
							iVar36 = func_471(iVar5, iVar23, iVar34);
							if (iVar35 != -99 && (iParam0 == unk_0x33CD235DF1E6A94E() || iParam0 == Global_4266954))
							{
								iVar37 = iVar35;
							}
							else if (iVar36 == -99)
							{
								iVar37 = iVar23;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar38 = func_352(iVar5, iParam2, 11, 3);
									if (((iParam2 >= 96 && iParam2 <= 107) || func_470(iVar38) == 6) || unk_0xEA26831785699C09(iVar38, -1237899132, 0))
									{
										iVar36 = func_472(iVar5, 11, -1);
										Global_71402[1 /*14*/] = { func_494(iVar5, 11, iVar36, -1) };
										iVar37 = func_475(iVar5, iVar36, iParam2, Global_71402[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("mp_f_freemode_01") && (iVar23 == 32 || iVar23 == 33))
								{
									if (!unk_0xEA26831785699C09(func_352(iVar5, iParam2, 11, 4), -491588875, 0))
									{
										iVar36 = func_472(iVar5, 11, -1);
										Global_71402[1 /*14*/] = { func_494(iVar5, 11, iVar36, -1) };
										iVar37 = func_475(iVar5, iVar36, iParam2, Global_71402[1 /*14*/].f_4);
									}
								}
								iVar39 = -1;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar39 = func_352(iVar5, iVar23, 8, 3);
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									iVar39 = func_352(iVar5, iVar23, 8, 4);
								}
								if (unk_0xEA26831785699C09(iVar39, -316495692, 0))
								{
									iVar36 = func_472(iVar5, 11, -1);
									Global_71402[1 /*14*/] = { func_494(iVar5, 11, iVar36, -1) };
									iVar37 = func_475(iVar5, iVar36, iParam2, Global_71402[1 /*14*/].f_4);
								}
							}
							else
							{
								iVar37 = func_475(iVar5, iVar36, iParam2, iVar34);
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									if (unk_0xEA26831785699C09(func_352(iVar5, iParam2, 11, 3), -1719338724, 0))
									{
										if (!func_469(iVar5, func_363(iParam0, 4), iVar36))
										{
											iVar37 = 240;
										}
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									if (unk_0xEA26831785699C09(func_352(iVar5, iParam2, 11, 4), -1719338724, 0))
									{
										if (!func_469(iVar5, func_363(iParam0, 4), iVar36))
										{
											iVar37 = 48;
										}
									}
								}
							}
							if (iVar37 != -99)
							{
								func_380(iParam0, 8, iVar37, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
								iVar36 = func_472(iVar5, 11, -1);
								Global_71402[1 /*14*/] = { func_494(iVar5, 11, iVar36, -1) };
								iVar37 = func_475(iVar5, iVar36, iParam2, Global_71402[1 /*14*/].f_4);
								if (iVar37 == -99)
								{
									iVar37 = 240;
								}
								func_380(iParam0, 8, iVar37, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_380(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_71402[1 /*14*/] = { func_494(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				func_466(iVar5, iParam2);
				if (!bParam13)
				{
					unk_0x93AA93DA1B137032(iParam0, 10, 0, 0, unk_0x8069BBC84D092E17(iParam0, 10));
				}
			}
			func_485(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_478(iVar5, func_491(iParam0, 8, -1), iParam2, func_491(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = func_39(2151, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = func_39(2158, iParam10, 0);
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
						iVar40 = func_529(iParam2);
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						iVar40 = func_527(iParam2);
					}
					if (iVar40 != -99 && iParam2 != iVar40)
					{
						iParam2 = iVar40;
					}
				}
				func_423(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar41 = unk_0x25AE733B26BE25A7(iParam0, 3, unk_0xA603FBA9F3C17D3A(iParam0, 3), 0);
			if (unk_0xEA26831785699C09(iVar41, -356646862, 0))
			{
				iVar42 = func_363(iParam0, 11);
				iVar43 = func_363(iParam0, 4);
				iVar44 = func_478(iVar5, iParam2, iVar42, iVar43);
				if (iVar44 == -99)
				{
					iVar44 = func_483(iParam0, iVar5, 11, iVar42, 3, 0);
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
						iVar45 = func_352(iVar5, iParam2, 11, 4);
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
						if (func_477(iVar5, iVar44, iVar46) == iVar41)
						{
							iVar11 = iVar46;
							iVar12 = unk_0xCEB55689C694866C(iParam0, 3);
						}
						iVar46++;
					}
				}
			}
			func_485(iParam0, iParam1, iParam2, iParam6, 0);
			iVar47 = func_363(iParam0, 11);
			if (func_474(iVar5, iVar47, -1))
			{
				iVar48 = func_471(iVar5, iParam2, Global_71402[1 /*14*/].f_4);
				func_466(iVar5, iVar48);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_478(iVar5, iParam2, func_363(iParam0, 11), func_363(iParam0, 4));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar49 = func_363(iParam0, 7);
				if (!func_420(iVar5, iVar49, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99))
				{
					unk_0x93AA93DA1B137032(iParam0, func_28(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 26) && unk_0xEA26831785699C09(Global_2621444, -921710083, 0)) || ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 26) && unk_0xEA26831785699C09(Global_2621444, -921710083, 0)))
			{
				iVar50 = func_39(2098, iParam10, 0);
				iVar51 = func_39(2099, iParam10, 0);
				iVar52 = func_39(2100, iParam10, 0);
				fVar53 = func_419(135, iParam10);
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
				func_403(iParam0, iParam10);
			}
		}
		else if (iParam1 == 4)
		{
			iVar55 = func_363(iParam0, 11);
			iVar56 = func_363(iParam0, 8);
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				if (unk_0xEA26831785699C09(func_352(iVar5, iVar55, 11, 3), -1719338724, 0))
				{
					if (!func_469(iVar5, iParam2, func_471(iVar5, iVar56, 0)))
					{
						func_380(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_71402[1 /*14*/] = { func_494(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				if (unk_0xEA26831785699C09(func_352(iVar5, iVar55, 11, 4), -1719338724, 0))
				{
					if (!func_469(iVar5, iParam2, func_471(iVar5, iVar56, 0)))
					{
						func_380(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_71402[1 /*14*/] = { func_494(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_478(iVar5, func_363(iParam0, 8), func_363(iParam0, 11), iParam2);
			}
			iVar57 = unk_0x25AE733B26BE25A7(iParam0, 3, unk_0xA603FBA9F3C17D3A(iParam0, 3), 0);
			if (unk_0xEA26831785699C09(iVar57, -356646862, 0))
			{
				iVar58 = func_478(iVar5, iVar56, iVar55, iParam2);
				if (iVar58 == -99)
				{
					iVar58 = func_483(iParam0, iVar5, 11, iVar55, 3, 0);
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
						iVar59 = func_352(iVar5, iParam2, 11, 4);
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
						if (func_477(iVar5, iVar58, iVar60) == iVar57)
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
			unk_0x93AA93DA1B137032(iParam0, func_28(iParam1), Global_71402[1 /*14*/].f_3, Global_71402[1 /*14*/].f_4, unk_0x8069BBC84D092E17(iParam0, func_28(iParam1)));
		}
		else
		{
			unk_0x93AA93DA1B137032(iParam0, func_28(iParam1), Global_71402[1 /*14*/].f_3, Global_71402[1 /*14*/].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_71400 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_483(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_380(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_478(iVar5, iVar3, func_363(iParam0, 11), func_363(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = func_483(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_380(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			if ((iParam1 == 11 || iParam1 == 8) || iParam1 == 4)
			{
				if (func_402(iParam0))
				{
					iVar61 = func_400(iParam0, iVar5, iParam1, iParam2);
					if (iVar61 > 0)
					{
						iVar61 = (iVar61 + unk_0xCEB55689C694866C(iParam0, 9));
						if (!func_399(iParam0, 9, iVar61))
						{
							func_380(iParam0, 9, iVar61, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_380(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar8 = unk_0x25AE733B26BE25A7(iParam0, 8, unk_0xA603FBA9F3C17D3A(iParam0, 8), unk_0xCEB55689C694866C(iParam0, 8));
					if (unk_0xEA26831785699C09(iVar8, 240476421, 8))
					{
						func_380(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar62 = func_39(2040, -1, 0);
				if (unk_0xA603FBA9F3C17D3A(iParam0, 5) != 0)
				{
					unk_0x93AA93DA1B137032(iParam0, 5, func_393(iParam0, iVar62), func_392(iParam0, iVar62), func_391(iParam0, iVar62));
				}
				if (iParam0 == unk_0x33CD235DF1E6A94E())
				{
					unk_0xF17C5B01DECA3F49(unk_0x95B959F18401C09A(), 5, func_393(unk_0x33CD235DF1E6A94E(), iVar62), func_392(unk_0x33CD235DF1E6A94E(), iVar62), 0);
					unk_0xB3739B780DF92EED(unk_0x95B959F18401C09A(), func_391(unk_0x33CD235DF1E6A94E(), iVar62));
					func_390(unk_0x95B959F18401C09A(), iVar62);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 92) || (iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 55))
				{
					if (unk_0xEA26831785699C09(Global_2621444, -319568873, 0))
					{
						func_380(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("mp_f_freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar63 = func_491(iParam0, 4, -1);
					iVar64 = iParam2;
				}
				else
				{
					iVar63 = iParam2;
					iVar64 = func_491(iParam0, 11, -1);
				}
				if (func_389(iVar5, 11, iVar64, -1))
				{
					if (!func_388(iVar5, 4, iVar63, -1))
					{
						if (func_387(iVar5, 4, iVar63, &uVar65))
						{
							func_380(iParam0, 4, uVar65, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (func_388(iVar5, 4, iVar63, -1))
				{
					if (func_386(iVar5, 4, iVar63, &uVar65))
					{
						func_380(iParam0, 4, uVar65, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				iVar72 = func_363(iParam0, 4);
				iVar73 = func_363(iParam0, 6);
				if (func_385(iVar5, iVar68))
				{
					if (unk_0xEA26831785699C09(iVar68, 1812005517, 0) != func_384(iVar5, iVar72, iVar68))
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
										iVar73 = func_26(iVar5, iVar76, 6, 3);
										iVar68 = iVar76;
										func_380(iParam0, 6, iVar73, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar73 = func_26(iVar5, iVar76, 6, 4);
										iVar68 = iVar76;
										func_380(iParam0, 6, iVar73, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar75 = iVar74 + 1;
								}
							}
							iVar75++;
						}
					}
					else if (unk_0xEA26831785699C09(iVar71, -2042643157, 0) != func_383(iVar5, iVar73, iVar71))
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
										iVar72 = func_26(iVar5, iVar76, 4, 3);
										iVar71 = iVar76;
										func_380(iParam0, 4, iVar72, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar72 = func_26(iVar5, iVar76, 4, 4);
										iVar71 = iVar76;
										func_380(iParam0, 4, iVar72, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar75 = iVar74 + 1;
								}
							}
							iVar75++;
						}
					}
				}
				if (func_385(iVar5, iVar71))
				{
					if (unk_0xEA26831785699C09(iVar71, -2042643157, 0) != func_383(iVar5, iVar73, iVar71))
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
										iVar72 = func_26(iVar5, iVar76, 4, 3);
										iVar71 = iVar76;
										func_380(iParam0, 4, iVar72, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar72 = func_26(iVar5, iVar76, 4, 4);
										iVar71 = iVar76;
										func_380(iParam0, 4, iVar72, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar75 = iVar74 + 1;
								}
							}
							iVar75++;
						}
					}
					else if (unk_0xEA26831785699C09(iVar68, 1812005517, 0) != func_384(iVar5, iVar72, iVar68))
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
										iVar73 = func_26(iVar5, iVar76, 6, 3);
										iVar68 = iVar76;
										func_380(iParam0, 6, iVar73, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar73 = func_26(iVar5, iVar76, 6, 4);
										iVar68 = iVar76;
										func_380(iParam0, 6, iVar73, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_479(iParam0);
				iVar79 = unk_0xA603FBA9F3C17D3A(iParam0, 1);
				iVar80 = unk_0xCEB55689C694866C(iParam0, 1);
				iVar81 = unk_0x25AE733B26BE25A7(iParam0, 1, iVar79, iVar80);
				if (unk_0xEA26831785699C09(iVar81, 838607662, 0))
				{
					iVar3 = func_483(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_380(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = func_483(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_380(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_381(iParam0, &uVar4))
		{
			func_380(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_380(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar9 != -99)
	{
		func_380(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_380(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar11 != -1)
	{
		iVar82 = func_477(iVar5, func_491(iParam0, 3, -1), iVar11);
		if (iVar82 != -1)
		{
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				iVar10 = func_26(iVar5, iVar82, 3, 3);
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				iVar10 = func_26(iVar5, iVar82, 3, 4);
			}
			if (iVar10 != -99)
			{
				iVar10 = (iVar10 + iVar12);
				func_380(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_71400 = (Global_71400 - 1);
	return 1;
}

int func_381(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam1 = func_491(unk_0x33CD235DF1E6A94E(), 2, -1);
	if (func_39(753, Global_71399, 0) != -99 && func_179())
	{
		if (func_382() == 4)
		{
			return 1;
		}
		if (func_39(753, Global_71399, 0) == 0 && func_39(754, Global_71399, 0) == 0)
		{
			if (func_107(161, Global_71399))
			{
				if (func_39(2051, Global_71399, 0) == 0)
				{
					return 0;
				}
			}
			else if (func_39(752, Global_71399, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = func_39(753, Global_71399, 0);
		iVar1 = func_39(754, Global_71399, 0);
		if (!func_399(iParam0, iVar1, iVar0))
		{
			if (func_107(161, Global_71399))
			{
				*uParam1 = func_39(2051, Global_71399, 0);
			}
			else
			{
				*uParam1 = func_39(752, Global_71399, 0);
			}
			func_366(753, -99, Global_71399, 1, 0);
			func_366(754, 2, Global_71399, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_382()
{
	return Global_1312801;
}

int func_383(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_352(iParam0, iParam1, 6, 3);
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
				iVar0 = func_352(iParam0, iParam1, 6, 4);
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

int func_384(int iParam0, int iParam1, int iParam2)
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
				iVar0 = func_352(iParam0, iParam1, 4, 3);
				iVar1 = func_470(iVar0);
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
				iVar0 = func_352(iParam0, iParam1, 4, 4);
				iVar1 = func_470(iVar0);
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

int func_385(int iParam0, int iParam1)
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

int func_386(int iParam0, int iParam1, int iParam2, var uParam3)
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
						iVar0 = func_352(iParam0, iParam2, iParam1, 4);
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
											*uParam3 = func_26(iParam0, iVar3, iParam1, 4);
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

int func_387(int iParam0, int iParam1, int iParam2, var uParam3)
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
						iVar0 = func_352(iParam0, iParam2, iParam1, 4);
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
											*uParam3 = func_26(iParam0, iVar3, iParam1, 4);
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

int func_388(int iParam0, int iParam1, int iParam2, int iParam3)
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
							iParam3 = func_352(iParam0, iParam2, 4, 4);
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

int func_389(int iParam0, int iParam1, int iParam2, int iParam3)
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
							iParam3 = func_352(iParam0, iParam2, 11, 4);
						}
						return unk_0xEA26831785699C09(iParam3, -530089825, 0);
					}
					break;
			}
			break;
	}
	return 0;
}

void func_390(int iParam0, int iParam1)
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

int func_391(int iParam0, int iParam1)
{
	return 0;
}

int func_392(int iParam0, int iParam1)
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

var func_393(int iParam0, int iParam1)
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
		Global_71568 = func_394(iParam0, iParam1);
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

int func_394(int iParam0, int iParam1)
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
				return func_398(iParam0, iParam1) + 15;
			}
			if (unk_0xEA26831785699C09(iVar4, -887141061, 8))
			{
				return func_398(iParam0, iParam1) + 15;
			}
			if (unk_0xEA26831785699C09(iVar4, -1185371730, 8))
			{
				return func_398(iParam0, iParam1) + 15;
			}
			if (unk_0xEA26831785699C09(iVar4, -2124629577, 8))
			{
				return func_398(iParam0, iParam1) + 15;
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
				return func_398(iParam0, iParam1) + 15;
			}
			if (unk_0xEA26831785699C09(iVar4, -1185371730, 8))
			{
				return func_398(iParam0, iParam1) + 15;
			}
			if (unk_0xEA26831785699C09(iVar4, -2124629577, 8))
			{
				return func_398(iParam0, iParam1) + 15;
			}
		}
		return func_398(iParam0, iParam1);
	}
	if (func_397(iParam0))
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
				return func_398(iParam0, iParam1) + 15;
			}
			else if (unk_0xEA26831785699C09(iVar5, -306768813, 0))
			{
				return func_398(iParam0, iParam1) + 15;
			}
			else if (unk_0xEA26831785699C09(iVar5, -58412562, 0))
			{
				return func_398(iParam0, iParam1) + 15;
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
			iVar6 = func_396(iVar5, 0);
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
						iVar0 = func_470(iVar5);
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
						iVar0 = func_470(iVar5);
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
			iVar7 = func_395(iVar5, 0);
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
					iVar0 = func_470(iVar5);
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
					return func_398(iParam0, iParam1) + 15;
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
				return func_398(iParam0, iParam1);
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
					return func_398(iParam0, iParam1);
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
				return func_398(iParam0, iParam1);
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
				return func_398(iParam0, iParam1);
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
				return func_398(iParam0, iParam1);
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
				return func_398(iParam0, iParam1);
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
				return func_398(iParam0, iParam1);
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
				return func_398(iParam0, iParam1);
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
				return func_398(iParam0, iParam1);
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
				return func_398(iParam0, iParam1);
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
				return func_398(iParam0, iParam1);
			}
			else
			{
				return func_398(iParam0, iParam1);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 490219883, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_398(iParam0, iParam1);
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
				return func_398(iParam0, iParam1);
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
				return func_398(iParam0, iParam1);
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
				return func_398(iParam0, iParam1);
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
				return func_398(iParam0, iParam1);
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
				return func_398(iParam0, iParam1);
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
				return func_398(iParam0, iParam1);
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
				return func_398(iParam0, iParam1);
			}
			else
			{
				return func_398(iParam0, iParam1);
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
				return func_398(iParam0, iParam1);
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
				return func_398(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -398213037, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_398(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 1380605304, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_398(iParam0, iParam1);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -306768813, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_398(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -58412562, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_398(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 1711219157, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_398(iParam0, iParam1) + 15;
			}
			else
			{
				return func_398(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 1466664110, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_398(iParam0, iParam1) + 15;
			}
			else
			{
				return func_398(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -1968575702, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_398(iParam0, iParam1) + 15;
			}
			else
			{
				return func_398(iParam0, iParam1) + 15;
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
				return func_398(iParam0, iParam1) + 15;
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
				return func_398(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -915352927, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_398(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -538378351, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_398(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -2139144017, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_398(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -435539886, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_398(iParam0, iParam1) + 15;
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
				return func_398(iParam0, iParam1) + 15;
			}
			else
			{
				return func_398(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 350281921, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_398(iParam0, iParam1) + 15;
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
				return func_398(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 1877382859, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_398(iParam0, iParam1) + 15;
			}
			else
			{
				return func_398(iParam0, iParam1) + 15;
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
					return func_398(iParam0, iParam1) + 15;
				}
				else
				{
					return func_398(iParam0, iParam1) + 15;
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
				return func_398(iParam0, iParam1) + 15;
			}
			else
			{
				return func_398(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 1207461955, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_398(iParam0, iParam1) + 15;
			}
			else
			{
				return func_398(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -1467843180, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_398(iParam0, iParam1);
			}
			else
			{
				return func_398(iParam0, iParam1);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -1467843180, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_398(iParam0, iParam1) + 15;
			}
			else
			{
				return func_398(iParam0, iParam1) + 15;
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
				return func_398(iParam0, iParam1) + 15;
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
				return func_398(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -939525357, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_398(iParam0, iParam1);
			}
			else
			{
				return func_398(iParam0, iParam1) + 15;
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
				return func_398(iParam0, iParam1);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -1467843180, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_398(iParam0, iParam1) + 15;
			}
			else
			{
				return func_398(iParam0, iParam1) + 15;
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
				return func_398(iParam0, iParam1) + 15;
			}
			else
			{
				return func_398(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -1467843180, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_398(iParam0, iParam1);
			}
			else
			{
				return func_398(iParam0, iParam1);
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, -939525357, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_398(iParam0, iParam1);
			}
			else
			{
				return func_398(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0xEA26831785699C09(iVar5, 398019854, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_398(iParam0, iParam1) + 15;
			}
			else
			{
				return func_398(iParam0, iParam1);
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
			iVar0 = func_470(iVar5);
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

int func_395(int iParam0, int iParam1)
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

int func_396(int iParam0, int iParam1)
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

int func_397(int iParam0)
{
	if (unk_0xEA26831785699C09(unk_0x25AE733B26BE25A7(iParam0, 4, unk_0xA603FBA9F3C17D3A(iParam0, 4), unk_0xCEB55689C694866C(iParam0, 4)), 1052059919, 0))
	{
		return 1;
	}
	return 0;
}

int func_398(int iParam0, int iParam1)
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

int func_399(int iParam0, int iParam1, int iParam2)
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
	Global_71402[1 /*14*/] = { func_494(iVar0, iParam1, iParam2, -1) };
	uVar2 = Global_2621444;
	uVar3 = Global_2621445;
	if (!unk_0x0E4018692D92041D(Global_71402[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { func_356(iVar0, iParam2) };
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
				if (!func_399(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_2621444 = uVar2;
					Global_2621445 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar9 = { func_353(iVar0, uVar8[iVar4]) };
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_399(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_71402[2 /*14*/] = { func_494(iVar0, 14, iVar6, -1) };
									if (Global_71402[2 /*14*/].f_12 == iVar5)
									{
										if (func_399(iParam0, 14, iVar6))
										{
											if (!func_340(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_71402[2 /*14*/])))
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
						iVar1 = func_363(iParam0, iVar4);
						Global_71402[2 /*14*/] = { func_494(iVar0, iVar4, iVar1, -1) };
						if (!func_340(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_71402[2 /*14*/])))
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
			if (func_39(1757, Global_71399, 0) != uVar8[10])
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
		uVar11 = { func_353(iVar0, iParam2) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (!func_399(iParam0, 14, uVar11[iVar10]))
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
		if (Global_71402[1 /*14*/].f_3 == unk_0xA603FBA9F3C17D3A(iParam0, func_28(iParam1)) && Global_71402[1 /*14*/].f_4 == unk_0xCEB55689C694866C(iParam0, func_28(iParam1)))
		{
			return 1;
		}
		if (iParam1 == 4)
		{
			Global_71401++;
			if (Global_71401 == 1)
			{
				if (func_389(iVar0, 11, func_363(iParam0, 11), -1))
				{
					if (func_387(iVar0, 4, iParam2, &uVar18))
					{
						return func_399(iParam0, 4, uVar18);
					}
				}
				else if (func_386(iVar0, 4, iParam2, &uVar18))
				{
					return func_399(iParam0, 4, uVar18);
				}
			}
			Global_71401 = (Global_71401 - 1);
		}
	}
	return 0;
}

int func_400(int iParam0, int iParam1, int iParam2, int iParam3)
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
	
	if (func_397(iParam0))
	{
		return -99;
	}
	if (func_401(iParam0))
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
				iVar0 = func_352(iParam1, iParam3, 11, 3);
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
								return func_26(iParam1, iVar3, 9, 3);
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
				iVar6 = func_352(iParam1, iParam3, 11, 4);
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
								return func_26(iParam1, iVar9, 9, 4);
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

int func_401(int iParam0)
{
	if (unk_0xEA26831785699C09(unk_0x25AE733B26BE25A7(iParam0, 8, unk_0xA603FBA9F3C17D3A(iParam0, 8), unk_0xCEB55689C694866C(iParam0, 8)), -2124629577, 0))
	{
		return 1;
	}
	return 0;
}

int func_402(int iParam0)
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

void func_403(int iParam0, int iParam1)
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
	iVar1 = func_39(2095, iParam1, 0);
	iVar2 = func_39(2096, iParam1, 0);
	iVar3 = func_39(2097, iParam1, 0);
	iVar4 = func_39(2098, iParam1, 0);
	iVar5 = func_39(2099, iParam1, 0);
	iVar6 = func_39(2100, iParam1, 0);
	fVar7 = func_419(134, iParam1);
	fVar8 = func_419(135, iParam1);
	fVar9 = func_419(136, iParam1);
	bVar10 = func_107(160, iParam1);
	if (((((((((Var0 != iVar1 || Var0.f_1 != iVar2) || Var0.f_2 != iVar3) || Var0.f_3 != iVar4) || Var0.f_4 != iVar5) || Var0.f_5 != iVar6) || Var0.f_6 != fVar7) || Var0.f_7 != fVar8) || Var0.f_8 != fVar9) || Var0.f_9 != bVar10)
	{
		unk_0x11CF5F3B4061B0C8(iParam0, iVar1, iVar2, iVar3, iVar4, iVar5, iVar6, fVar7, fVar8, fVar9, bVar10);
		iVar11 = func_39(2101, iParam1, 0);
		if (iVar11 > 0)
		{
			func_404(iParam0, iParam1, 0);
		}
	}
}

void func_404(int iParam0, int iParam1, bool bParam2)
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
		iVar2 = func_418(iVar1);
		if (!bParam2)
		{
			fVar3 = func_419(iVar2, iParam1);
		}
		else
		{
			fVar3 = func_417(iVar2, iParam1);
		}
		unk_0xC4C169622F69B7B0(iParam0, iVar1, fVar3);
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 < 13)
	{
		iVar5 = func_416(iVar4);
		iVar6 = func_415(iVar5);
		iVar7 = func_414(iVar5);
		if (iVar6 != -1 && iVar7 != -1)
		{
			if (!bParam2)
			{
				iVar10 = func_411(iVar6, iParam1, -1);
				fVar11 = func_419(iVar7, iParam1);
			}
			else
			{
				iVar10 = func_410(iVar6, iParam1);
				fVar11 = func_417(iVar7, iParam1);
			}
			unk_0x008A25D77379E0ED(iParam0, iVar5, iVar10, fVar11);
			iVar8 = func_409(iVar5);
			iVar9 = func_408(iVar5);
			if (iVar8 != -1)
			{
				if (!bParam2)
				{
					iVar13 = func_39(iVar8, iParam1, 0);
					iVar14 = func_39(iVar9, iParam1, 0);
				}
				else
				{
					iVar13 = func_407(iVar8, iParam1);
					iVar14 = func_407(iVar9, iParam1);
				}
				func_406(iVar13, &iVar12, &iVar15);
				unk_0xB113EEFFAF4DB51F(iParam0, iVar5, iVar15, iVar12, iVar14);
			}
		}
		iVar4++;
	}
	func_405(&iParam0, iParam1, bParam2);
}

void func_405(int iParam0, int iParam1, bool bParam2)
{
	float fVar0;
	
	if (!bParam2)
	{
		fVar0 = func_419(157, iParam1);
	}
	else
	{
		fVar0 = func_417(157, iParam1);
	}
	if (*iParam0 == unk_0x33CD235DF1E6A94E())
	{
	}
	unk_0x5238CEEB40C9050B(*iParam0, round(fVar0));
}

void func_406(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	*uParam1 = shift_right(iParam0, 16);
	iVar0 = iParam0 & 65535;
	*uParam2 = iVar0;
}

int func_407(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2539502[iParam0 /*3*/][func_40(iParam1)];
	if (unk_0x42E7821CD721AD97(uVar0, &uVar1))
	{
		return uVar1;
	}
	return 0;
}

int func_408(int iParam0)
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

int func_409(int iParam0)
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

int func_410(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_41();
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

int func_411(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_41();
	}
	iVar0 = 0;
	iVar1 = func_413(iParam0, iParam1);
	iVar2 = func_412(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0xD6BB9B31765DFA24(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_412(int iParam0)
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

int func_413(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_41();
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

int func_414(int iParam0)
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

int func_415(int iParam0)
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

int func_416(int iParam0)
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

float func_417(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2570652[iParam0 /*3*/][func_40(iParam1)];
	if (unk_0xAD7F551CF4409350(uVar0, &uVar1))
	{
		return uVar1;
	}
	return 0f;
}

int func_418(int iParam0)
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

float func_419(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2570652[iParam0 /*3*/][func_40(iParam1)];
	if (unk_0x1C6F24ECA1A88E67(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0f;
}

int func_420(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
			iVar2 = func_352(iParam0, iParam1, 7, 3);
			iVar1 = func_470(iVar2);
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
			iVar4 = func_352(iParam0, iParam3, 11, 3);
			iVar3 = func_470(iVar4);
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
			iVar6 = func_352(iParam0, iParam4, 8, 3);
			iVar5 = func_470(iVar6);
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
			iVar8 = func_352(iParam0, iParam10, 1, 3);
			iVar7 = func_470(iVar8);
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
					iVar9 = func_352(iParam0, iParam9, 14, 3);
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
					else if (func_422(iParam0, iParam3))
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
				else if (func_422(iParam0, iParam3))
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
					iVar10 = func_352(iParam0, iParam11, 4, 3);
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
			if (iParam9 >= 327 && unk_0xEA26831785699C09(func_352(iParam0, iParam9, 14, 3), -713698407, 1))
			{
			}
			else if (iParam2 == 14 || (iParam2 == 1 && iParam10 != 0))
			{
				return 0;
			}
		}
		else if ((iParam9 >= 327 && unk_0xEA26831785699C09(func_352(iParam0, iParam9, 14, 3), -713698407, 1)) && iParam1 != 0)
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
				if (((iParam3 >= 204 && iParam3 <= 219) || func_474(iParam0, iParam3, -1)) || iVar3 == 13)
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
					iVar0 = func_363(iParam6, 11);
					if ((iVar0 >= 204 && iVar0 <= 219) || (iVar0 >= 237 && func_470(func_352(iParam0, iVar0, 11, 3)) == 13))
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
				if (((((iParam3 >= 204 && iParam3 <= 219) || (iParam3 >= 172 && iParam3 <= 187)) || func_474(iParam0, iParam3, -1)) || iVar3 == 13) || iVar3 == 11)
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
					iVar0 = func_363(iParam6, 11);
					if ((iVar0 >= 204 && iVar0 <= 219) || (iVar0 >= 237 && func_470(func_352(iParam0, iVar0, 11, 3)) == 13))
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
				if (((iParam4 >= 192 && iParam4 <= 207) || func_421(iVar6)) || (iVar6 != -1 && unk_0xEA26831785699C09(iVar6, 310957510, 0)))
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
			iVar12 = func_352(iParam0, iParam1, 7, 4);
			iVar11 = func_470(iVar12);
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
			iVar14 = func_352(iParam0, iParam3, 11, 4);
			iVar13 = func_470(iVar14);
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
			iVar16 = func_352(iParam0, iParam4, 8, 4);
			iVar15 = func_470(iVar16);
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
			iVar18 = func_352(iParam0, iParam10, 1, 4);
			iVar17 = func_470(iVar18);
			Global_4266675 = iParam10;
			Global_4266674 = iVar18;
			Global_4266673 = iVar17;
		}
		iVar19 = -1;
		if (iParam9 >= 327)
		{
			iVar19 = func_352(iParam0, iParam9, 14, 4);
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
					else if (func_422(iParam0, iParam3))
					{
					}
					else
					{
						return 0;
					}
				}
				else if (func_422(iParam0, iParam3) || unk_0xEA26831785699C09(iVar14, -63750166, 0))
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
			if (iParam9 >= 327 && unk_0xEA26831785699C09(func_352(iParam0, iParam9, 14, 4), -713698407, 1))
			{
			}
			else if (iParam2 == 14 || (iParam2 == 1 && iParam10 != 0))
			{
				return 0;
			}
		}
		else if ((iParam9 >= 327 && unk_0xEA26831785699C09(func_352(iParam0, iParam9, 14, 4), -713698407, 1)) && iParam1 != 0)
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
					iVar20 = func_352(iParam0, iParam11, 4, 4);
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
				else if (func_474(iParam0, iParam3, -1))
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
				else if (func_471(iParam0, iParam4, 0) != -99)
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
				if (iParam4 >= 136 && unk_0xEA26831785699C09(func_352(iParam0, iParam4, 8, 4), 1147939952, 0))
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
				if (iParam4 >= 136 && unk_0xEA26831785699C09(func_352(iParam0, iParam4, 8, 4), 1147939952, 0))
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
				if (iParam4 >= 136 && unk_0xEA26831785699C09(func_352(iParam0, iParam4, 8, 4), 1147939952, 0))
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
				{
				}
				else
				{
					return 0;
				}
			}
			{
				{
				}