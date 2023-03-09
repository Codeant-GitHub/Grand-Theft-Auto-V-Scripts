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
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	vector3 vLocal_56 = { 0f, 0f, 0f };
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	char* sLocal_61 = NULL;
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
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	vector3 vLocal_88 = { 0f, 0f, 0f };
	vector3 vLocal_89 = { 0f, 0f, 0f };
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	int iLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	int iLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	int iLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	int iLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	int iLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 16;
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
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 1;
	var uLocal_282 = 0;
	int iLocal_283[3] = { 0, 0, 0 };
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	var uLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299[4] = { 0, 0, 0, 0 };
	struct<7> Local_300[4];
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
	var uLocal_317 = 10;
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
	var uLocal_328 = 2;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 8;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 8;
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
	float fLocal_351 = 0f;
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
	int iLocal_367 = 0;
	int iLocal_368 = 0;
	var uLocal_369 = 15;
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
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 1;
	int iLocal_643 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	
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
	vLocal_56 = { 0f, 0f, 0f };
	iLocal_72 = -1;
	iLocal_74 = -1;
	iLocal_75 = -1;
	iLocal_76 = -1;
	iLocal_77 = -1;
	iLocal_78 = -1;
	iLocal_79 = -1;
	iLocal_80 = -1;
	iLocal_82 = -1;
	iLocal_84 = -1;
	iLocal_85 = -1;
	iLocal_284 = -1;
	fLocal_351 = ((0.05f + 0.275f) - 0.01f);
	iLocal_367 = -1;
	iLocal_368 = -1;
	if (Global_3)
	{
		unk_0x5894DC159447E10A();
	}
	if (unk_0xB331FCEB94EB05C8())
	{
		if (func_542(unk_0x95B959F18401C09A(), 1))
		{
			unk_0x5894DC159447E10A();
		}
		if (func_541(unk_0x95B959F18401C09A(), 1))
		{
			unk_0x5894DC159447E10A();
		}
	}
	if (func_540(13) || func_540(14))
	{
		unk_0x5894DC159447E10A();
	}
	if (!func_539() && !unk_0xB331FCEB94EB05C8())
	{
		if (unk_0x9EC5BDC006623C42(35))
		{
			func_530();
			func_529(1);
			func_524(&uLocal_369);
		}
	}
	wait(0);
	iLocal_90 = iScriptParam_643;
	if (unk_0xB331FCEB94EB05C8())
	{
		func_523();
		unk_0x210E46A190FB3CB3(2, 0, unk_0x95B959F18401C09A());
		func_518(0, -1, 0);
		unk_0x9980AE643A60F372(0);
	}
	func_517();
	func_516(128);
	while (iLocal_60)
	{
		bVar0 = true;
		func_513(&uLocal_369);
		if (func_539())
		{
			if (func_512(1024))
			{
				if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
				{
					if (unk_0x055C6611FF8B993C(unk_0x33CD235DF1E6A94E()) && unk_0x7B3767E83E6F888A(unk_0x33CD235DF1E6A94E()))
					{
						func_516(1024);
						unk_0x1130EB06CDE2ECD0(unk_0x33CD235DF1E6A94E());
					}
				}
			}
			if (!func_512(1024) && func_512(2048))
			{
				unk_0x5894DC159447E10A();
			}
			if (!unk_0x765F6FEEFF39224F(iLocal_90))
			{
				bVar0 = false;
			}
			else if (!unk_0x0A81FE3D92AE2AC9(iLocal_90))
			{
				bVar0 = false;
				unk_0xA5F44EC021F96C6B(iLocal_90);
			}
		}
		if (!func_539() || !func_512(2048))
		{
			func_505();
			if (func_539())
			{
				func_504();
				if (func_512(128))
				{
					iLocal_60 = 0;
				}
			}
			if (func_499())
			{
				if (bVar0)
				{
					if (iLocal_285 > 0)
					{
						func_494(&uLocal_369);
					}
					func_492();
					func_490();
					switch (iLocal_285)
					{
						case 0:
							if (iLocal_284 == -1)
							{
								if (unk_0x0A3EB09120E78BA4(iLocal_90))
								{
									iLocal_284 = func_489();
								}
								else if (func_487())
								{
									iLocal_284 = 4;
								}
							}
							else if (func_482())
							{
								if (func_481())
								{
									if (func_539())
									{
										if (unk_0x0A81FE3D92AE2AC9(iLocal_90))
										{
											unk_0xF6D940C3CF409665(iLocal_90, "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS", 0, 0);
										}
										else
										{
											unk_0xA5F44EC021F96C6B(iLocal_90);
										}
									}
									else
									{
										unk_0xF6D940C3CF409665(iLocal_90, "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS", 0, 0);
									}
								}
								iLocal_285 = 1;
								func_480("Prostitue: moving to PROS_PB_CUSTOMER_DETERMINE_TYPE");
							}
							break;
						
						case 1:
							if (func_479(iLocal_49, 4096))
							{
								func_478();
							}
							if (func_477())
							{
								iLocal_285 = 2;
								func_480("Prostitue: moving to PROS_PB_CUSTOMER_PLAYER");
							}
							if (func_473())
							{
								iLocal_285 = 3;
								func_471(&iLocal_49, 64);
								Global_25917 = 1;
								func_480("Prostitue: moving to PROS_PB_CUSTOMER_OTHER");
							}
							break;
						
						case 2:
							func_91(&uLocal_369);
							break;
						
						case 3:
							func_3();
							break;
						
						default:
							break;
						}
				}
			}
			else
			{
				func_2(0);
			}
			func_1();
		}
		wait(0);
	}
	if (func_479(iLocal_49, 2))
	{
	}
	func_480(" Something forced this exit!!!!!!~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	func_530();
	func_524(&uLocal_369);
}

void func_1()
{
}

void func_2(bool bParam0)
{
	if (bParam0)
	{
		iLocal_60 = 1;
	}
	else
	{
		iLocal_60 = 0;
	}
}

void func_3()
{
	if (iLocal_286 > 0)
	{
		if (unk_0x91D5C8283D19AF49(iLocal_92, 0))
		{
			if (!unk_0xBC2FC12AD0FBF72E(iLocal_91))
			{
				if (!unk_0x10930B9CAD4111C2(iLocal_91, iLocal_92, 0))
				{
					func_90();
				}
			}
		}
	}
	if (!unk_0x765F6FEEFF39224F(iLocal_91) || unk_0xD62C4419A41F106A(iLocal_91, 0))
	{
		func_89(15);
	}
	switch (iLocal_286)
	{
		case 0:
			if (!iLocal_287 == 0)
			{
				iLocal_286 = 1;
			}
			break;
		
		case 1:
			func_83();
			break;
		
		case 2:
			func_82();
			break;
		
		case 3:
			func_65();
			break;
		
		case 4:
			func_56();
			break;
		
		case 5:
			func_53();
			break;
		
		case 6:
			if (!unk_0xBC2FC12AD0FBF72E(iLocal_91))
			{
				if (unk_0xD76D6BCC14B95CE1(iLocal_90, 242628503) == 7)
				{
					iLocal_63 = unk_0xE3903F59E2F22150();
					iLocal_64 = (iLocal_63 - iLocal_62);
					if (iLocal_64 >= 10000 || !unk_0x335C0645074963FE(iLocal_90, iLocal_91, 12f, 12f, 5f, 0, 1, 0))
					{
						func_480("prostitute WAITING TO END");
						func_90();
					}
				}
			}
			else
			{
				func_90();
			}
			break;
		
		case 7:
			if (!unk_0x656BB209FFCEE74A(func_52(0), func_52(1), func_52(2), func_52(3)))
			{
				unk_0x6CB3E644E3FBFEF0(func_52(0), func_52(1), func_52(2), func_52(3));
			}
			else
			{
				unk_0x77C4189A8E5C57C2(iLocal_91, iLocal_92, vLocal_88, (unk_0x629D2D6C17B9B5E2(iLocal_92) * 0.65f), 0, 0, 786859, 4f, -1f);
				iLocal_286 = 8;
			}
			break;
		
		case 8:
			if (vdist2(vLocal_88, unk_0xFBB1F99A825CAB09(iLocal_90, true)) < 25f && unk_0xD76D6BCC14B95CE1(iLocal_91, -1817882002) != 1)
			{
				iLocal_288 = unk_0x9EC3B269A34A2BEE(1, 3);
				iLocal_286 = 11;
			}
			if (func_49(iLocal_91))
			{
				func_89(15);
			}
			break;
		
		case 11:
			func_4();
			break;
		
		case 12:
			func_89(15);
			break;
		
		case 15:
			if (unk_0x765F6FEEFF39224F(iLocal_90) && unk_0x765F6FEEFF39224F(iLocal_92))
			{
				if (unk_0x10930B9CAD4111C2(iLocal_90, iLocal_92, 0))
				{
					if (!unk_0xD62C4419A41F106A(iLocal_91, 0))
					{
						if (unk_0xD76D6BCC14B95CE1(iLocal_91, -828834893) != 1)
						{
							unk_0x07C339D4328CA16C(iLocal_90, 0, 16842752);
						}
					}
				}
				else
				{
					func_2(0);
				}
			}
			break;
	}
}

void func_4()
{
	switch (iLocal_293)
	{
		case 0:
			unk_0x1F3934A4C07C1854(iLocal_90, 0.916f);
			if (func_36(iLocal_91))
			{
				func_34(&iLocal_113);
				iLocal_293 = 1;
			}
			break;
		
		case 1:
			if (vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false), unk_0xFBB1F99A825CAB09(iLocal_90, false)) < 22500f)
			{
				func_32();
			}
			func_29(iLocal_92);
			if (func_27(iLocal_91))
			{
				func_11(&uLocal_116, "pbproau", "pbpro_pic", 4, 0, 0, 0);
				func_89(15);
			}
			if (func_7(&iLocal_113) > 1f)
			{
				if (unk_0xD76D6BCC14B95CE1(iLocal_90, 242628503) == 7)
				{
					func_5(&iLocal_49, 512);
					iLocal_293 = 3;
				}
			}
			break;
		
		case 3:
			func_89(15);
			break;
		
		case 5:
			func_89(15);
			break;
	}
}

void func_5(int iParam0, int iParam1)
{
	func_6(iParam0, iParam1);
}

void func_6(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

float func_7(int iParam0)
{
	if (func_10(iParam0))
	{
		if (func_9(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_8(unk_0x0E4018692D92041D(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_8(bool bParam0)
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

bool func_9(int iParam0)
{
	return unk_0x0E4018692D92041D(*iParam0, 2);
}

bool func_10(int iParam0)
{
	return unk_0x0E4018692D92041D(*iParam0, 1);
}

int func_11(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_26(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_12(sParam2, iParam3, 0);
}

int func_12(char* sParam0, int iParam1, bool bParam2)
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
					func_25();
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
		if (func_24(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_23();
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
				func_17();
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
				if (func_16())
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
			if (func_15())
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
			func_14();
			Global_15876 = bParam2;
		}
		Global_15868 = iParam1;
		StringCopy(&Global_15485, sParam0, 24);
		Global_14732 = 0;
		func_13();
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
		func_25();
	}
	return 0;
}

void func_13()
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

void func_14()
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

int func_15()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_16()
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

void func_17()
{
	if (func_540(14))
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
		Global_14553 = func_18();
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

int func_18()
{
	func_19();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_19()
{
	int iVar0;
	
	if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
	{
		if (func_22(Global_106565.f_2357.f_539.f_4321) != unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()))
		{
			iVar0 = func_21(unk_0x33CD235DF1E6A94E());
			if (func_20(iVar0) && (!func_540(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_20(Global_106565.f_2357.f_539.f_4321))
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

bool func_20(int iParam0)
{
	return iParam0 < 3;
}

int func_21(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		iVar1 = unk_0x541D5C57194E73C4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_22(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_22(int iParam0)
{
	if (func_20(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_23()
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

bool func_24(int iParam0, int iParam1)
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

void func_25()
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

void func_26(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

int func_27(int iParam0)
{
	if (func_28())
	{
		if (!unk_0xCC9A41DD2CD0C58B(unk_0x541D5C57194E73C4(iParam0), unk_0xFBB1F99A825CAB09(iParam0, true), 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_28()
{
	if (Global_16902)
	{
		return 1;
	}
	return 0;
}

void func_29(int iParam0)
{
	if (iLocal_288 != 1 && iLocal_288 != 2)
	{
		return;
	}
	if (func_31())
	{
		func_30(&iParam0);
	}
}

void func_30(var uParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (unk_0x91D5C8283D19AF49(*uParam0, 0))
	{
		vVar0 = { 0f, 0f, -0.1f };
		vVar1 = { 0f, 0f, 0f };
		unk_0x0848C95091F9ECB9(*uParam0, 1, vVar0, vVar1, 0, 1, 1, 1, 1, 0);
	}
}

bool func_31()
{
	return unk_0xFBEC827720F84540(iLocal_90, 876132797);
}

void func_32()
{
	unk_0x818D1850BE9E44A9();
	func_33();
}

void func_33()
{
	Global_17272.f_134 = 1;
}

void func_34(int iParam0)
{
	func_35(iParam0, 0f);
}

void func_35(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_8(unk_0x0E4018692D92041D(*iParam0, 4)) - fParam1);
	unk_0x8950ED5730F62EE8(iParam0, 1);
	unk_0xCE689A8E8C42ED78(iParam0, 2);
	iParam0->f_2 = 0f;
}

int func_36(int iParam0)
{
	if (unk_0x786AF4A44E1B5B4B(sLocal_61))
	{
		sLocal_61 = func_44(iParam0, 0, 0);
		return 0;
	}
	if (!unk_0xE9CCF312047EBEE0(sLocal_61))
	{
		return 0;
	}
	else
	{
		func_37(iLocal_90, func_43(), 1, floor((15000f * (1f + (to_float(iLocal_70) / 2f)))), 1);
		if (iParam0 == unk_0x33CD235DF1E6A94E())
		{
			func_37(iParam0, func_43(), 0, floor((15000f * (1f + (to_float(iLocal_70) / 2f)))), 1);
		}
		func_480("anim_dict has loaded, triggering anims?");
		func_471(&iLocal_49, 512);
		return 1;
	}
	return 0;
}

void func_37(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	int iVar3;
	
	if (unk_0xD62C4419A41F106A(iParam0, 0))
	{
		return;
	}
	iVar0 = unk_0xF2C96862595654B4(iParam0, 1);
	if (!unk_0x91D5C8283D19AF49(iVar0, 0))
	{
		return;
	}
	iLocal_48 = unk_0xB813DCBD5002BC42();
	if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1) && func_42(0, 1))
	{
		if (iLocal_48 != 4)
		{
			unk_0xC4C7F808F6388EAE(4);
		}
	}
	bVar1 = func_41(iVar0);
	sVar2 = func_44(iParam0, 0, 0);
	if (!unk_0xE9CCF312047EBEE0(sVar2))
	{
		unk_0x0483D0035D6E46FD(sVar2);
	}
	else
	{
		unk_0x99414FB2D30425C1(&iVar3);
		unk_0x108754262311D34F(0, sVar2, func_38(0, bParam2, bParam1, bVar1), 8f, -8f, -1, 0, 0, 0, 0, 0);
		unk_0x108754262311D34F(0, sVar2, func_38(1, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0x108754262311D34F(0, sVar2, func_38(2, bParam2, bParam1, bVar1), 8f, -4f, iParam3, 1, 0, 0, 0, 0);
		unk_0x108754262311D34F(0, sVar2, func_38(3, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0x108754262311D34F(0, sVar2, func_38(4, bParam2, bParam1, bVar1), 4f, -2f, -1, 0, 0, 0, 0, 0);
		unk_0xC734F59A13D39AEF(iVar3);
		unk_0x13A2D602CD10CBAC(iParam0, iVar3);
		if (bParam4)
		{
			unk_0xA7A57E7757ED035E(&iVar3);
		}
	}
}

char* func_38(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_40(18);
					}
					else
					{
						sVar0 = func_40(23);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_40(8);
				}
				else
				{
					sVar0 = func_40(13);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_39(18);
				}
				else
				{
					sVar0 = func_39(23);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_39(8);
			}
			else
			{
				sVar0 = func_39(13);
			}
			break;
		
		case 1:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_40(19);
					}
					else
					{
						sVar0 = func_40(24);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_40(9);
				}
				else
				{
					sVar0 = func_40(14);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_39(19);
				}
				else
				{
					sVar0 = func_39(24);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_39(9);
			}
			else
			{
				sVar0 = func_39(14);
			}
			break;
		
		case 2:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_40(20);
					}
					else
					{
						sVar0 = func_40(25);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_40(10);
				}
				else
				{
					sVar0 = func_40(15);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_39(20);
				}
				else
				{
					sVar0 = func_39(25);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_39(10);
			}
			else
			{
				sVar0 = func_39(15);
			}
			break;
		
		case 3:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_40(21);
					}
					else
					{
						sVar0 = func_40(26);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_40(11);
				}
				else
				{
					sVar0 = func_40(16);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_39(21);
				}
				else
				{
					sVar0 = func_39(26);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_39(11);
			}
			else
			{
				sVar0 = func_39(16);
			}
			break;
		
		case 4:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_40(22);
					}
					else
					{
						sVar0 = func_40(27);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_40(12);
				}
				else
				{
					sVar0 = func_40(17);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_39(22);
				}
				else
				{
					sVar0 = func_39(27);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_39(12);
			}
			else
			{
				sVar0 = func_39(17);
			}
			break;
		
		case 5:
			if (bParam3)
			{
				if (bParam1)
				{
					sVar0 = func_40(3);
				}
				else
				{
					sVar0 = func_40(2);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_39(3);
			}
			else
			{
				sVar0 = func_39(2);
			}
			break;
		
		case 6:
			break;
	}
	return sVar0;
}

char* func_39(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "into_proposition_male";
			break;
		
		case 1:
			sVar0 = "into_proposition_prostitute";
			break;
		
		case 2:
			sVar0 = "proposition_loop_male";
			break;
		
		case 3:
			sVar0 = "proposition_loop_prostitute";
			break;
		
		case 4:
			sVar0 = "proposition_to_exit_male";
			break;
		
		case 5:
			sVar0 = "prop_to_sit_alt_prostitute";
			break;
		
		case 6:
			sVar0 = "prop_to_sit_male";
			break;
		
		case 7:
			sVar0 = "prop_to_sit_prostitute";
			break;
		
		case 8:
			sVar0 = "proposition_to_sex_p1_prostitute";
			break;
		
		case 9:
			sVar0 = "proposition_to_sex_p2_prostitute";
			break;
		
		case 10:
			sVar0 = "sex_loop_prostitute";
			break;
		
		case 11:
			sVar0 = "sex_to_proposition_p1_prostitute";
			break;
		
		case 12:
			sVar0 = "sex_to_proposition_p2_prostitute";
			break;
		
		case 13:
			sVar0 = "proposition_to_sex_p1_male";
			break;
		
		case 14:
			sVar0 = "proposition_to_sex_p2_male";
			break;
		
		case 15:
			sVar0 = "sex_loop_male";
			break;
		
		case 16:
			sVar0 = "sex_to_proposition_p1_male";
			break;
		
		case 17:
			sVar0 = "sex_to_proposition_p2_male";
			break;
		
		case 18:
			sVar0 = "proposition_to_BJ_p1_prostitute";
			break;
		
		case 19:
			sVar0 = "proposition_to_BJ_p2_prostitute";
			break;
		
		case 20:
			sVar0 = "BJ_loop_prostitute";
			break;
		
		case 21:
			sVar0 = "BJ_to_proposition_p1_prostitute";
			break;
		
		case 22:
			sVar0 = "BJ_to_proposition_p2_prostitute";
			break;
		
		case 23:
			sVar0 = "proposition_to_BJ_p1_male";
			break;
		
		case 24:
			sVar0 = "proposition_to_BJ_p2_male";
			break;
		
		case 25:
			sVar0 = "BJ_loop_male";
			break;
		
		case 26:
			sVar0 = "BJ_to_proposition_p1_male";
			break;
		
		case 27:
			sVar0 = "BJ_to_proposition_p2_male";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

char* func_40(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "low_car_sit_to_prop_player";
			break;
		
		case 1:
			sVar0 = "low_car_sit_to_prop_female";
			break;
		
		case 2:
			sVar0 = "low_car_prop_loop_player";
			break;
		
		case 3:
			sVar0 = "low_car_prop_loop_female";
			break;
		
		case 4:
			sVar0 = "low_car_prop_to_leave_player";
			break;
		
		case 5:
			sVar0 = "low_car_prop_to_sit_alt_female";
			break;
		
		case 6:
			sVar0 = "low_car_prop_to_sit_player";
			break;
		
		case 7:
			sVar0 = "low_car_prop_to_sit_female";
			break;
		
		case 8:
			sVar0 = "low_car_prop_to_sex_p1_female";
			break;
		
		case 9:
			sVar0 = "low_car_prop_to_sex_p2_female";
			break;
		
		case 10:
			sVar0 = "low_car_sex_loop_female";
			break;
		
		case 11:
			sVar0 = "low_car_sex_to_prop_p1_female";
			break;
		
		case 12:
			sVar0 = "low_car_sex_to_prop_p2_female";
			break;
		
		case 13:
			sVar0 = "low_car_prop_to_sex_p1_player";
			break;
		
		case 14:
			sVar0 = "low_car_prop_to_sex_p2_player";
			break;
		
		case 15:
			sVar0 = "low_car_sex_loop_player";
			break;
		
		case 16:
			sVar0 = "low_car_sex_to_prop_p1_player";
			break;
		
		case 17:
			sVar0 = "low_car_sex_to_prop_p2_player";
			break;
		
		case 18:
			sVar0 = "low_car_prop_to_bj_p1_female";
			break;
		
		case 19:
			sVar0 = "low_car_prop_to_bj_p2_female";
			break;
		
		case 20:
			sVar0 = "low_car_bj_loop_female";
			break;
		
		case 21:
			sVar0 = "low_car_bj_to_prop_p1_female";
			break;
		
		case 22:
			sVar0 = "low_car_bj_to_prop_p2_female";
			break;
		
		case 23:
			sVar0 = "low_car_prop_to_bj_p1_player";
			break;
		
		case 24:
			sVar0 = "low_car_prop_to_bj_p2_player";
			break;
		
		case 25:
			sVar0 = "low_car_bj_loop_player";
			break;
		
		case 26:
			sVar0 = "low_car_bj_to_prop_p1_player";
			break;
		
		case 27:
			sVar0 = "low_car_bj_to_prop_p2_player";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

int func_41(int iParam0)
{
	if (unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		switch (unk_0x8D51A3997E8F3769(iParam0))
		{
			case -2066252141:
			case -38413156:
			case -782720499:
			case 542797648:
			case 68566729:
			case -1887744178:
			case -463340997:
			case 2033852426:
			case -1820894825:
			case 1697345049:
			case -635697407:
			case -1453479140:
			case 1837596901:
			case 2013836096:
			case 2071837743:
			case 2130662788:
			case -1546132012:
			case 1192783831:
			case -317944664:
			case 570040040:
			case 1212243433:
			case -193022774:
			case 510359473:
			case -988377294:
			case 1240573865:
			case -627376728:
			case 986556497:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_42(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (bParam0)
	{
		bVar0 = unk_0xCB75C331DD5DDCCC(0) == 4;
	}
	if (bParam1)
	{
		if (!bVar0)
		{
			bVar0 = unk_0xCB75C331DD5DDCCC(1) == 4;
		}
	}
	return bVar0;
}

bool func_43()
{
	return iLocal_288 == 0;
}

char* func_44(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0xD62C4419A41F106A(iParam0, 0))
	{
		iVar0 = unk_0xF2C96862595654B4(iParam0, 1);
		if (unk_0x91D5C8283D19AF49(iVar0, 0))
		{
			if (func_41(iVar0))
			{
				if ((!func_42(0, 1) || iParam2) && !bParam1)
				{
					return func_48();
				}
				else
				{
					return func_47();
				}
			}
		}
	}
	if ((!func_42(0, 1) || iParam2) && !bParam1)
	{
		return func_46();
	}
	return func_45();
}

char* func_45()
{
	return "mini@prostitutes@sexnorm_veh_first_person";
}

char* func_46()
{
	return "mini@prostitutes@sexnorm_veh";
}

char* func_47()
{
	return "mini@prostitutes@sexlow_veh_first_person";
}

char* func_48()
{
	return "mini@prostitutes@sexlow_veh";
}

int func_49(int iParam0)
{
	vector3 vVar0;
	
	if (!unk_0xD62C4419A41F106A(iParam0, 0))
	{
		if (unk_0x2E9A4AE2A5B4D8E8(iParam0) || !func_51(iParam0, iLocal_92, -1))
		{
			vVar0 = { unk_0xFBB1F99A825CAB09(iParam0, true) };
			unk_0x33F6BE48E356DA27(iParam0, 196624, true);
			if (func_50())
			{
				unk_0x6DA4DBA91F234052(iParam0, vVar0, 300f, -1, 1, 1);
			}
			else if (!unk_0xD62C4419A41F106A(unk_0x457C8D55A1BB6B51(iParam0), 0))
			{
				unk_0x277716E9E7CC0692(iParam0, unk_0x457C8D55A1BB6B51(iParam0), 0, 16);
			}
			else
			{
				unk_0x6DA4DBA91F234052(iParam0, vVar0, 300f, -1, 1, 1);
			}
		}
	}
	return 0;
}

int func_50()
{
	if (unk_0x0E4018692D92041D(unk_0x9EC3B269A34A2BEE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_51(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0xD62C4419A41F106A(iParam0, 0) && !unk_0xD62C4419A41F106A(iParam1, 0))
	{
		if (unk_0xEE984ED4E4A374BE(iParam0, iParam1))
		{
			if (unk_0x7BDC41A7CA0C77A2(iParam1, iParam2, 0) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_52(int iParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { unk_0xFBB1F99A825CAB09(iLocal_90, true) };
	vVar1 = { vLocal_88 };
	if (iParam0 == 0)
	{
		if (vVar0.x < vVar1.x)
		{
			return (vVar0.x - 20f);
		}
		else
		{
			return (vVar1.x - 20f);
		}
	}
	if (iParam0 == 1)
	{
		if (vVar0.y < vVar1.y)
		{
			return (vVar0.y - 20f);
		}
		else
		{
			return (vVar1.y - 20f);
		}
	}
	if (iParam0 == 2)
	{
		if (vVar0.x > vVar1.x)
		{
			return (vVar0.x + 20f);
		}
		else
		{
			return (vVar1.x + 20f);
		}
	}
	if (vVar0.y > vVar1.y)
	{
		return (vVar0.y + 20f);
	}
	return (vVar1.y + 20f);
}

void func_53()
{
	if (!unk_0xBC2FC12AD0FBF72E(iLocal_91))
	{
		if (unk_0x91D5C8283D19AF49(iLocal_92, 0))
		{
			if (unk_0x10930B9CAD4111C2(iLocal_91, iLocal_92, 0))
			{
				if (unk_0xD76D6BCC14B95CE1(iLocal_90, 242628503) == 1)
				{
					if (unk_0x24CA7139A01083BE(iLocal_90) > 0)
					{
						if (unk_0x10930B9CAD4111C2(iLocal_90, iLocal_92, 0))
						{
							func_480("prostitute WAITING TO END   - DRIVING OFF (WANDER)");
							unk_0x99414FB2D30425C1(&iLocal_95);
							unk_0x21D56A8927F5A92A(0, iLocal_92, 10f, 786603);
							unk_0xC734F59A13D39AEF(iLocal_95);
							unk_0x13A2D602CD10CBAC(iLocal_91, iLocal_95);
							unk_0xA7A57E7757ED035E(&iLocal_95);
							vLocal_88 = { func_54(unk_0xFBB1F99A825CAB09(iLocal_90, true)) };
							unk_0x0483D0035D6E46FD(func_44(iLocal_90, 0, 0));
							iLocal_286 = 7;
							iLocal_62 = unk_0xE3903F59E2F22150();
						}
					}
				}
			}
			else
			{
				func_480("EXIT - OTHER OUT OF THE VEHICLE");
				func_90();
			}
		}
		else
		{
			func_480("EXIT - OTHER VEHICLE DEAD");
			func_90();
		}
	}
	else
	{
		func_480("EXIT - OTHER ped INJURED");
		func_90();
	}
}

Vector3 func_54(vector3 vParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (vdist2(vParam0, func_55(iVar1)) < vdist2(vParam0, func_55(iVar0)))
		{
			iVar0 = iVar1;
		}
		iVar1++;
	}
	return func_55(iVar0);
}

Vector3 func_55(int iParam0)
{
	vector3 vVar0;
	
	switch (iParam0)
	{
		case 0:
			vVar0 = { -1449.075f, -634.0139f, 29.094f };
			break;
		
		case 1:
			vVar0 = { -1266.291f, -1361.175f, 3.222f };
			break;
		
		case 2:
			vVar0 = { -227.0429f, 311.6679f, 91.1655f };
			break;
		
		case 3:
			vVar0 = { -1310.978f, -235.9881f, 41.1789f };
			break;
		
		case 4:
			vVar0 = { -545.299f, -874.6625f, 26.1981f };
			break;
		
		case 5:
			vVar0 = { -192.1116f, -1332.385f, 30.3304f };
			break;
		
		case 6:
			vVar0 = { 196.6188f, -1850.396f, 26.2005f };
			break;
		
		case 7:
			vVar0 = { 322.9744f, -1000.23f, 28.2401f };
			break;
		
		case 8:
			vVar0 = { 38.824f, -98.3984f, 55.2507f };
			break;
		
		case 9:
			vVar0 = { -1800.76f, -404.1213f, 43.8109f };
			break;
		
		case 10:
			vVar0 = { 1421.334f, -1618.83f, 58.3324f };
			break;
		
		case 11:
			vVar0 = { 983.5914f, -2360.14f, 29.5098f };
			break;
		
		case 12:
			vVar0 = { 97.9046f, -2501.28f, 5.0001f };
			break;
		
		case 13:
			vVar0 = { 1591.921f, 6516.841f, 16.3155f };
			break;
		
		case 14:
			vVar0 = { 1278.73f, 3624.059f, 32.0408f };
			break;
		
		case 15:
			vVar0 = { 2464.667f, 5526.815f, 44.2143f };
			break;
		
		case 16:
			vVar0 = { 2052.58f, 4637.477f, 39.642f };
			break;
		
		case 17:
			vVar0 = { 1435.608f, 4483.951f, 49.2513f };
			break;
		
		case 18:
			vVar0 = { 218.214f, 4439.288f, 66.9056f };
			break;
		
		case 19:
			vVar0 = { 16.9496f, 3632.35f, 39.2848f };
			break;
		
		case 20:
			vVar0 = { 2.0464f, 3293.74f, 40.2594f };
			break;
		
		case 21:
			vVar0 = { -1195.701f, 2639.13f, 15.1653f };
			break;
		
		case 22:
			vVar0 = { -1663.641f, 2477.778f, 30.9941f };
			break;
		
		case 23:
			vVar0 = { -2505.643f, 3677.825f, 12.1719f };
			break;
		
		case 24:
			vVar0 = { -2179.209f, 4264.236f, 47.9904f };
			break;
		
		case 25:
			vVar0 = { -758.9616f, 5612.78f, 29.4536f };
			break;
		
		case 26:
			vVar0 = { -276.8032f, 6327.188f, 31.4262f };
			break;
		
		case 27:
			vVar0 = { 1483.839f, 6366.199f, 22.6875f };
			break;
		
		case 28:
			vVar0 = { 949.013f, 3551.753f, 32.9687f };
			break;
		
		case 29:
			vVar0 = { 180.9372f, 3051.781f, 42.1131f };
			break;
		
		case 30:
			vVar0 = { -462.9046f, 6115.419f, 28.8805f };
			break;
		
		case 31:
			vVar0 = { -256.3564f, 6056.516f, 30.9808f };
			break;
	}
	return vVar0;
}

void func_56()
{
	float fVar0;
	
	if (!unk_0xBC2FC12AD0FBF72E(iLocal_91))
	{
		if (unk_0x91D5C8283D19AF49(iLocal_92, 0))
		{
			if (unk_0x10930B9CAD4111C2(iLocal_91, iLocal_92, 0))
			{
				fVar0 = unk_0x8BB475EA09C9A0EB(iLocal_92);
				if (unk_0x335C0645074963FE(iLocal_91, iLocal_90, 15f, 15f, 5f, 0, 1, 0) && fVar0 <= 1f)
				{
					func_63(iLocal_90);
					iLocal_63 = unk_0xE3903F59E2F22150();
					iLocal_64 = (iLocal_63 - iLocal_62);
					if (iLocal_64 >= iLocal_66)
					{
						if (func_539())
						{
							if (unk_0x0A81FE3D92AE2AC9(iLocal_91))
							{
								unk_0xE0DAC4ABE9900D9A(iLocal_91);
							}
						}
						else
						{
							unk_0xE0DAC4ABE9900D9A(iLocal_91);
						}
						iLocal_66 = unk_0x9EC3B269A34A2BEE(0, 10000);
						if (iLocal_66 > 2500)
						{
							unk_0xED68CDDDE25A144E(iLocal_90);
							unk_0xA7A57E7757ED035E(&iLocal_95);
							unk_0x99414FB2D30425C1(&iLocal_95);
							unk_0xC838CE9837D0ABAF(0, iLocal_92, -1, 0, 1f, 8388609, 0);
							unk_0x7D575FC8F42508D8(0, -1);
							unk_0xC734F59A13D39AEF(iLocal_95);
							unk_0x13A2D602CD10CBAC(iLocal_90, iLocal_95);
							unk_0xA7A57E7757ED035E(&iLocal_95);
							func_480("other GIVES MONEY");
							iLocal_286 = 5;
						}
						else
						{
							func_62();
							func_57();
							if (!unk_0xBC2FC12AD0FBF72E(iLocal_91))
							{
								if (unk_0x91D5C8283D19AF49(iLocal_92, 0))
								{
									if (unk_0x10930B9CAD4111C2(iLocal_91, iLocal_92, 0))
									{
										unk_0xA7A57E7757ED035E(&iLocal_95);
										unk_0x99414FB2D30425C1(&iLocal_95);
										unk_0x7D575FC8F42508D8(0, unk_0x9EC3B269A34A2BEE(500, 2000));
										unk_0x21D56A8927F5A92A(0, iLocal_92, 10f, 786603);
										unk_0xC734F59A13D39AEF(iLocal_95);
										unk_0x13A2D602CD10CBAC(iLocal_91, iLocal_95);
										unk_0xA7A57E7757ED035E(&iLocal_95);
										iLocal_62 = unk_0xE3903F59E2F22150();
									}
								}
							}
							func_480("prostitute REFUSED MONEY 2");
							if (func_539())
							{
								if (unk_0x0A81FE3D92AE2AC9(iLocal_91))
								{
									unk_0xE0DAC4ABE9900D9A(iLocal_91);
								}
							}
							else
							{
								unk_0xE0DAC4ABE9900D9A(iLocal_91);
							}
							iLocal_286 = 6;
						}
					}
				}
				else
				{
					if (func_539())
					{
						if (unk_0x0A81FE3D92AE2AC9(iLocal_91))
						{
							unk_0xE0DAC4ABE9900D9A(iLocal_91);
						}
					}
					else
					{
						unk_0xE0DAC4ABE9900D9A(iLocal_91);
					}
					func_90();
				}
			}
			else
			{
				func_480("EXIT - OTHER OUT OF THE VEHICLE");
				if (func_539())
				{
					if (unk_0x0A81FE3D92AE2AC9(iLocal_91))
					{
						unk_0xE0DAC4ABE9900D9A(iLocal_91);
					}
				}
				else
				{
					unk_0xE0DAC4ABE9900D9A(iLocal_91);
				}
				func_90();
			}
		}
		else
		{
			func_480("EXIT - OTHER VEHICLE DEAD");
			func_90();
		}
	}
	else
	{
		func_480("EXIT - OTHER ped INJURED");
		func_90();
	}
}

int func_57()
{
	int iVar0;
	
	if (!unk_0x765F6FEEFF39224F(iLocal_90) || unk_0xBC2FC12AD0FBF72E(iLocal_90))
	{
		return 1;
	}
	if (!func_539())
	{
		if (unk_0xF0D230FB550CD6EB(iLocal_90, 1))
		{
			unk_0xBD4591245C650283(iLocal_90, 1193033728, 0);
		}
		else if (func_479(iLocal_49, 4194304))
		{
			unk_0x99414FB2D30425C1(&iVar0);
			if (func_479(iLocal_73, 524288))
			{
				unk_0x108754262311D34F(0, func_61(iLocal_284), func_60(7), 8f, -1.5f, -1, 0, 0, 0, 0, 0);
			}
			func_58(1);
			unk_0xC734F59A13D39AEF(iVar0);
			unk_0x13A2D602CD10CBAC(iLocal_90, iVar0);
			unk_0xA7A57E7757ED035E(&iVar0);
			func_471(&iLocal_49, 16384);
			func_34(&iLocal_107);
		}
		return 1;
	}
	if (unk_0xF0D230FB550CD6EB(iLocal_90, 1))
	{
		if (unk_0x0A81FE3D92AE2AC9(iLocal_90))
		{
			unk_0xBD4591245C650283(iLocal_90, 1193033728, 0);
			return 1;
		}
		else
		{
			unk_0xA5F44EC021F96C6B(iLocal_90);
		}
	}
	switch (iLocal_54)
	{
		case 0:
			if (func_479(iLocal_49, 4194304))
			{
				iLocal_54 = 1;
			}
			break;
		
		case 1:
			if (func_479(iLocal_73, 524288))
			{
				if (unk_0x0A81FE3D92AE2AC9(iLocal_90))
				{
					unk_0x108754262311D34F(iLocal_90, func_61(iLocal_284), func_60(7), 8f, -1.5f, -1, 0, 0, 0, 0, 0);
				}
				else
				{
					unk_0xA5F44EC021F96C6B(iLocal_90);
					return 0;
				}
			}
			iLocal_54 = 2;
			break;
		
		case 2:
			if (func_479(iLocal_73, 524288))
			{
				if (unk_0x0A81FE3D92AE2AC9(iLocal_90))
				{
					if (unk_0xD76D6BCC14B95CE1(iLocal_90, -2017877118) == 7)
					{
						func_58(0);
						iLocal_54 = 3;
					}
				}
				else
				{
					unk_0xA5F44EC021F96C6B(iLocal_90);
				}
			}
			else if (unk_0x0A81FE3D92AE2AC9(iLocal_90))
			{
				func_58(0);
				iLocal_54 = 3;
			}
			else
			{
				unk_0xA5F44EC021F96C6B(iLocal_90);
			}
			break;
		
		case 3:
			func_471(&iLocal_49, 16384);
			func_34(&iLocal_107);
			return 1;
			break;
	}
	return 0;
}

void func_58(bool bParam0)
{
	vector3 vVar0;
	
	if (((unk_0x9CEB33F9F7FA9FE7(iLocal_90) || unk_0x0A3EB09120E78BA4(iLocal_90)) || unk_0x37FBF97457299644(iLocal_90, func_59(0))) || unk_0x37FBF97457299644(iLocal_90, func_59(1)))
	{
		return;
	}
	vVar0 = { unk_0xFBB1F99A825CAB09(iLocal_90, true) };
	if (!unk_0x52C7F2CBE015C31D(vVar0, func_59(0), 20f, 1) && !unk_0x52C7F2CBE015C31D(vVar0, func_59(1), 20f, 1))
	{
		if (bParam0)
		{
			unk_0xBD4591245C650283(0, 1193033728, 0);
		}
		else
		{
			unk_0xBD4591245C650283(iLocal_90, 1193033728, 0);
		}
		return;
	}
	if (!bParam0)
	{
		unk_0xA9128AA30F3036C7(iLocal_90, vVar0, 20f, 0);
	}
	else
	{
		unk_0xA9128AA30F3036C7(0, vVar0, 20f, 0);
	}
}

char* func_59(int iParam0)
{
	if (iParam0 == 0)
	{
		return "WORLD_HUMAN_PROSTITUTE_LOW_CLASS";
	}
	return "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS";
}

char* func_60(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "idle_intro";
			break;
		
		case 1:
			return "idle_a";
			break;
		
		case 2:
			return "idle_b";
			break;
		
		case 3:
			return "idle_c";
			break;
		
		case 4:
			return "idle_wait";
			break;
		
		case 5:
			return "idle_reject";
			break;
		
		case 8:
			return "idle_reject_loop_a";
			break;
		
		case 9:
			return "idle_reject_loop_b";
			break;
		
		case 10:
			return "idle_reject_loop_c";
			break;
		
		case 11:
			return "idle_outro";
			break;
		
		case 6:
			return "reject_2_idle";
			break;
		
		case 7:
			return "reject_outro";
			break;
	}
	return "";
}

char* func_61(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "mini@hookers_spcrackhead";
			break;
		
		case 1:
			sVar0 = "mini@hookers_spcokehead";
			break;
		
		case 3:
		case 4:
			sVar0 = "mini@hookers_spfrench";
			break;
		
		case 2:
		default:
			sVar0 = "mini@hookers_spvanilla";
			break;
	}
	return sVar0;
}

void func_62()
{
	if (unk_0xBC2FC12AD0FBF72E(iLocal_90))
	{
		return;
	}
	if (!unk_0x8B76D954998C9E96(iLocal_90))
	{
		if (func_18() == 2)
		{
			unk_0xAEED0213982928AC(iLocal_90, "HOOKER_DECLINED_TREVOR", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
		else
		{
			unk_0xAEED0213982928AC(iLocal_90, "HOOKER_DECLINED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
	}
}

void func_63(int iParam0)
{
	if (!unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		if (func_64(iParam0))
		{
			unk_0x41E36A540F8F323F(iParam0, 109, true);
		}
	}
}

int func_64(int iParam0)
{
	if (!unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		if ((unk_0x1CE8F0A08E65CA6A(iParam0, func_61(iLocal_284), func_60(1), 3) || unk_0x1CE8F0A08E65CA6A(iParam0, func_61(iLocal_284), func_60(2), 3)) || unk_0x1CE8F0A08E65CA6A(iParam0, func_61(iLocal_284), func_60(3), 3))
		{
			return 1;
		}
	}
	return 0;
}

void func_65()
{
	float fVar0;
	
	if (!unk_0xBC2FC12AD0FBF72E(iLocal_91))
	{
		if (unk_0x91D5C8283D19AF49(iLocal_92, 0))
		{
			if (unk_0x10930B9CAD4111C2(iLocal_91, iLocal_92, 0))
			{
				if (unk_0xD76D6BCC14B95CE1(iLocal_90, 242628503) == 1)
				{
					if (unk_0x24CA7139A01083BE(iLocal_90) > 1)
					{
						if (unk_0x335C0645074963FE(iLocal_90, iLocal_91, 20f, 20f, 10f, 0, 1, 0))
						{
							fVar0 = unk_0x8BB475EA09C9A0EB(iLocal_92);
							if (fVar0 <= 1f)
							{
								func_66(0);
								iLocal_62 = unk_0xE3903F59E2F22150();
								iLocal_66 = unk_0x9EC3B269A34A2BEE(4000, 8000);
								func_480("prostitute proposition other in VEHICLE VEHICLE");
								iLocal_286 = 4;
							}
						}
						else
						{
							func_480("EXIT - OTHER IN VEHICLE OUT OF RANGE");
							func_90();
						}
					}
				}
			}
			else
			{
				func_480("EXIT - OTHER OUT OF THE VEHICLE");
				func_90();
			}
		}
		else
		{
			func_480("EXIT - OTHER VEHICLE DEAD");
			func_90();
		}
	}
	else
	{
		func_480("EXIT - OTHER ped INJURED");
		func_90();
	}
}

int func_66(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	if (!func_539())
	{
		if (bParam0)
		{
			unk_0x7B1011A61F402324(iLocal_90, "PROSTITUTE_GROUP", 0);
			func_81("PROSTITUTES_SOLICIT_SCENE");
		}
		func_67();
		if (func_479(iLocal_49, 4194304))
		{
			iVar0 = unk_0x9EC3B269A34A2BEE(1, 4);
			unk_0x99414FB2D30425C1(&iVar1);
			unk_0x108754262311D34F(0, func_61(iLocal_284), func_60(0), 2f, -2f, -1, 0, 0, 0, 0, 0);
			unk_0x108754262311D34F(0, func_61(iLocal_284), func_60(iVar0), 2f, -2f, -1, 0, 0, 0, 0, 0);
			unk_0x108754262311D34F(0, func_61(iLocal_284), func_60(4), 2f, -2f, -1, 1, 0, 0, 0, 0);
			unk_0xC734F59A13D39AEF(iVar1);
			unk_0x13A2D602CD10CBAC(iLocal_90, iVar1);
			unk_0xA7A57E7757ED035E(&iVar1);
		}
		return 1;
	}
	switch (iLocal_53)
	{
		case 0:
			if (bParam0)
			{
				unk_0x7B1011A61F402324(iLocal_90, "PROSTITUTE_GROUP", 0);
				func_81("PROSTITUTES_SOLICIT_SCENE");
			}
			func_67();
			iLocal_53 = 1;
			break;
		
		case 1:
			if (func_479(iLocal_49, 4194304))
			{
				if (unk_0x0A81FE3D92AE2AC9(iLocal_90))
				{
					unk_0x108754262311D34F(iLocal_90, func_61(iLocal_284), func_60(0), 2f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_53 = 2;
				}
				else
				{
					unk_0xA5F44EC021F96C6B(iLocal_90);
				}
			}
			break;
		
		case 2:
			if (unk_0x0A81FE3D92AE2AC9(iLocal_90))
			{
				if (unk_0xD76D6BCC14B95CE1(iLocal_90, -2017877118) == 7)
				{
					iVar0 = unk_0x9EC3B269A34A2BEE(1, 4);
					unk_0x108754262311D34F(iLocal_90, func_61(iLocal_284), func_60(iVar0), 2f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_53 = 3;
				}
			}
			else
			{
				unk_0xA5F44EC021F96C6B(iLocal_90);
			}
			break;
		
		case 3:
			if (unk_0x0A81FE3D92AE2AC9(iLocal_90))
			{
				if (unk_0xD76D6BCC14B95CE1(iLocal_90, -2017877118) == 7)
				{
					unk_0x108754262311D34F(iLocal_90, func_61(iLocal_284), func_60(4), 2f, -2f, -1, 1, 0, 0, 0, 0);
					iLocal_53 = 4;
				}
			}
			else
			{
				unk_0xA5F44EC021F96C6B(iLocal_90);
			}
			break;
		
		case 4:
			iLocal_53 = 0;
			return 1;
			break;
	}
	return 0;
}

void func_67()
{
	if (unk_0xBC2FC12AD0FBF72E(iLocal_90))
	{
		return;
	}
	if (!unk_0x8B76D954998C9E96(iLocal_90))
	{
		switch (func_18())
		{
			case 0:
				if (!func_68(iLocal_90))
				{
					unk_0xAEED0213982928AC(iLocal_90, "SOLICIT_MICHAEL", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				else
				{
					unk_0xAEED0213982928AC(iLocal_90, "SOLICIT_MICHAEL_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				break;
			
			case 1:
				if (!func_68(iLocal_90))
				{
					unk_0xAEED0213982928AC(iLocal_90, "SOLICIT_FRANKLIN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				else
				{
					unk_0xAEED0213982928AC(iLocal_90, "SOLICIT_FRANKLIN_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				break;
			
			case 2:
				if (!func_68(iLocal_90))
				{
					unk_0xAEED0213982928AC(iLocal_90, "SOLICIT_TREVOR", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				else
				{
					unk_0xAEED0213982928AC(iLocal_90, "SOLICIT_TREVOR_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				break;
			}
	}
}

bool func_68(int iParam0)
{
	int iVar0;
	
	iVar0 = func_71(iParam0);
	return func_69(iVar0);
}

int func_69(int iParam0)
{
	if (func_70(iParam0) > 0)
	{
		return 1;
	}
	return 0;
}

int func_70(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 == -1)
	{
		return 0;
	}
	if (func_18() == 0)
	{
		iVar0 = Global_106565.f_10043.f_1[iParam0 /*11*/][0];
	}
	else if (func_18() == 1)
	{
		iVar0 = Global_106565.f_10043.f_1[iParam0 /*11*/][1];
	}
	else if (func_18() == 2)
	{
		iVar0 = Global_106565.f_10043.f_1[iParam0 /*11*/][2];
	}
	return iVar0;
}

int func_71(int iParam0)
{
	int iVar0;
	
	if (!unk_0xD62C4419A41F106A(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (func_70(iVar0) > 0)
			{
				if ((func_77(iParam0, iVar0) && func_73(iParam0, iVar0)) && func_72(iParam0, iVar0))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	return -1;
}

int func_72(int iParam0, int iParam1)
{
	if (unk_0x3234E15469EA77BB(iParam0, Global_106565.f_10043.f_1[iParam1 /*11*/].f_10))
	{
		return 1;
	}
	return 0;
}

int func_73(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_74(iParam0, iParam1, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_74(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_76(iParam2);
	return unk_0xCEB55689C694866C(iParam0, iVar0) == func_75(iParam1, iParam2);
}

int func_75(int iParam0, int iParam1)
{
	if (func_69(iParam0))
	{
		return Global_106565.f_10043.f_1[iParam0 /*11*/].f_7[iParam1];
	}
	return -1;
}

int func_76(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 2;
			break;
	}
	return iVar0;
}

int func_77(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_78(iParam0, iParam1, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_78(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_80(iParam2);
	return unk_0xA603FBA9F3C17D3A(iParam0, iVar0) == func_79(iParam1, iParam2);
}

int func_79(int iParam0, int iParam1)
{
	if (func_69(iParam0))
	{
		return Global_106565.f_10043.f_1[iParam0 /*11*/].f_4[iParam1];
	}
	return -1;
}

int func_80(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 2;
			break;
	}
	return iVar0;
}

void func_81(char* sParam0)
{
	if (!unk_0x7C71681384076318(sParam0))
	{
		unk_0xDEFB5E2E5CBD460A(sParam0);
	}
}

void func_82()
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	
	if (!unk_0xBC2FC12AD0FBF72E(iLocal_91))
	{
		if (unk_0x91D5C8283D19AF49(iLocal_92, 0))
		{
			if (unk_0x10930B9CAD4111C2(iLocal_91, iLocal_92, 0))
			{
				fVar0 = unk_0x8BB475EA09C9A0EB(iLocal_92);
				if (unk_0xD76D6BCC14B95CE1(iLocal_91, -272084098) == 7 || fVar0 <= 1f)
				{
					unk_0xFEF5F9BB57EA2E8D(unk_0x541D5C57194E73C4(iLocal_92), &vVar2, &vVar1);
					vVar3 = { vVar1 - vVar2 };
					vVar3 = { vVar3 / Vector(2f, 2f, 2f) };
					vVar4 = { unk_0x2CA911E7569D12EA(iLocal_92, 0.2f, 0.2f, 0f) };
					vVar5 = { unk_0x2CA911E7569D12EA(iLocal_92, 0.2f, 0.2f, 0f) };
					vVar6 = { unk_0xFBB1F99A825CAB09(iLocal_90, true) };
					if (vdist(vVar6, vVar5) < vdist(vVar6, vVar4))
					{
						vVar4 = { vVar5 };
					}
					unk_0x99414FB2D30425C1(&iLocal_95);
					unk_0x7E268975AF5EA74F(0, vVar4.x, vVar4.y, vVar4.z, 1f, -1, 0.5f, 8192, 1193033728);
					unk_0x11C4AF4137F2A4B5(0, iLocal_91, 0);
					unk_0x7D575FC8F42508D8(0, -1);
					unk_0xC734F59A13D39AEF(iLocal_95);
					unk_0x13A2D602CD10CBAC(iLocal_90, iLocal_95);
					unk_0xA7A57E7757ED035E(&iLocal_95);
					func_480("prostitute ASKING OTHER FOR MONEY BY VEHICLE");
					iLocal_286 = 3;
				}
				else
				{
					func_480("WAITING FOR CUTSTOMER FINSIH TASK OR STOP");
				}
			}
			else
			{
				func_480("EXIT - OTHER OUT OF VEHICLE");
				func_90();
			}
		}
		else
		{
			func_480("EXIT - OTHER VEHICLE DEAD");
			func_90();
		}
	}
	else
	{
		func_480("EXIT - OTHER ped INJURED");
		func_90();
	}
}

void func_83()
{
	vector3 vVar0;
	
	if (!unk_0xBC2FC12AD0FBF72E(iLocal_91))
	{
		if (unk_0x91D5C8283D19AF49(iLocal_92, 0))
		{
			if (unk_0x10930B9CAD4111C2(iLocal_91, iLocal_92, 0))
			{
				if (func_85(&iLocal_92))
				{
					if (func_84(unk_0xFBB1F99A825CAB09(iLocal_91, true), 1106247680))
					{
						return;
					}
					vVar0 = { unk_0xFBB1F99A825CAB09(iLocal_90, true) };
					if (unk_0x8E241517F0F541CC(vVar0, &vVar0, 8, 1077936128, 0))
					{
						unk_0x0D5CFE7123DCE05F(iLocal_91, 1f);
						unk_0x7A66899F7E549BA6(iLocal_91, 0.2f);
						unk_0x8120EE2272397CE8(iLocal_91, 0.05f);
						unk_0x19A39772525FA2CD(iLocal_91, iLocal_92, vVar0, 0f, 3, 360f, 1);
						unk_0xC4A347124F39D998(iLocal_91, iLocal_90, -1, 2048, 4);
						func_480("OTHER TOLD TO PULL OVER");
						iLocal_286 = 2;
					}
				}
				else
				{
					func_480("EXIT - Vehicle is not suitable");
					func_89(15);
				}
			}
			else
			{
				func_480("EXIT - OTHER OUT OF THE VEHICLE");
				func_89(15);
			}
		}
		else
		{
			func_480("EXIT - OTHER VEHICLE DEAD");
			func_89(15);
		}
	}
	else
	{
		func_480("EXIT - OTHER ped INJURED");
		func_89(15);
	}
}

bool func_84(vector3 vParam0, int iParam1)
{
	if (func_539())
	{
		return unk_0xB05EBD564C7A1480(vParam0 - Vector(iParam1, iParam1, iParam1), vParam0 + Vector(iParam1, iParam1, iParam1));
	}
	return (unk_0x4A83E23BE6BCA7B0(vParam0 - Vector(iParam1, iParam1, iParam1), vParam0 + Vector(iParam1, iParam1, iParam1)) || unk_0xB05EBD564C7A1480(vParam0 - Vector(iParam1, iParam1, iParam1), vParam0 + Vector(iParam1, iParam1, iParam1)));
}

int func_85(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x91D5C8283D19AF49(*iParam0, 0))
	{
		iVar0 = unk_0x541D5C57194E73C4(*iParam0);
		if (func_88(iVar0, 0) && func_87(*iParam0))
		{
			if (unk_0xC92AA0DBDDDE8BB8(*iParam0) > 0)
			{
				iVar1 = unk_0x340117F85AC524D4(*iParam0);
				if (((iVar1 == 0 && unk_0x67FFBB75D2430704(*iParam0, 0, 0)) && (!unk_0x830B1D24ED3D5F55(*iParam0, 1) && !unk_0x830B1D24ED3D5F55(*iParam0, 0))) || unk_0x7BDC41A7CA0C77A2(*iParam0, 0, 0) == iLocal_90)
				{
					if (func_41(*iParam0))
					{
						if (!func_479(iLocal_49, 32768))
						{
							func_471(&iLocal_49, 32768);
							if (!func_479(iLocal_49, 8))
							{
								unk_0x1FCB57E33CEA24E8(func_86());
								func_471(&iLocal_49, 8);
							}
						}
					}
					else
					{
						if (func_479(iLocal_49, 32768))
						{
							func_5(&iLocal_49, 32768);
						}
						if (func_479(iLocal_49, 8))
						{
							if (unk_0xCDA107F8BEE35F40(func_86()))
							{
								unk_0x80BCAFF1FDCC7E85(func_86());
								func_5(&iLocal_49, 8);
							}
						}
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

char* func_86()
{
	return "clipset@veh@low@ps@female@base";
}

int func_87(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if (unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		if (unk_0xCD2E94F6C3101AFC(iParam0) > 0)
		{
			iVar0 = 0;
			while (iVar0 < 49)
			{
				iVar1 = iVar0;
				if (((((iVar1 != 17 && iVar1 != 18) && iVar1 != 19) && iVar1 != 20) && iVar1 != 21) && iVar1 != 22)
				{
					if (unk_0xEECA910C75BFF02B(iParam0, iVar1) != -1)
					{
						StringCopy(&cVar3, unk_0xA8D8B8C75983E4D9(iParam0, iVar1, unk_0xEECA910C75BFF02B(iParam0, iVar1)), 16);
						iVar2 = unk_0x36163153849DFDA1(&cVar3);
						if (iVar2 != 0)
						{
							if (iVar2 == unk_0x36163153849DFDA1("SABRE_CAG"))
							{
								return 0;
							}
						}
					}
				}
				iVar0++;
			}
		}
		if (unk_0xD470A4E16E9AAE0E(iParam0, -1804415708))
		{
			if ((!unk_0x34B1602009421B58(iParam0, 2) && !unk_0x34B1602009421B58(iParam0, 3)) && !unk_0x34B1602009421B58(iParam0, 4))
			{
				return 0;
			}
		}
		if (unk_0xD470A4E16E9AAE0E(iParam0, -682108547))
		{
			if (unk_0xEECA910C75BFF02B(iParam0, 10) == -1)
			{
				return 0;
			}
		}
		switch (unk_0x8D51A3997E8F3769(iParam0))
		{
			case -2066252141:
			case -782720499:
			case 542797648:
			case 68566729:
			case -1887744178:
			case 1486715695:
			case -1917671975:
			case -1405350320:
			case -157990217:
			case -280076747:
			case 1710903184:
			case 1663892749:
			case 434478421:
			case 1816176348:
			case 919485892:
			case 945079693:
			case 85100643:
			case 1939145032:
			case 1869774540:
			case -28233912:
			case -1150063973:
			case -463340997:
			case -703649403:
			case 197952738:
			case -208246612:
			case 2033852426:
			case -1820894825:
			case 1697345049:
			case -635697407:
			case -1910741341:
			case -1158091941:
			case -1834221859:
			case -1453479140:
			case -1954624455:
			case 1837596901:
			case 2013836096:
			case 1374303184:
			case 1419869906:
			case -526725184:
			case 1610027666:
			case -970031572:
			case 2071837743:
			case 1482989244:
			case 2130662788:
			case -1546132012:
			case 1410462333:
			case 1192783831:
			case -1304848574:
			case -317944664:
			case 570040040:
			case 1212243433:
			case -193022774:
			case 510359473:
			case -988377294:
			case 954521785:
			case 584837381:
			case -2123959937:
			case 1074598648:
			case 1818992907:
			case -370341013:
			case 1240573865:
			case -627376728:
			case 986556497:
			case -1852541008:
				return 1;
				break;
		}
		if (unk_0x8D51A3997E8F3769(iParam0) == 931866387 && unk_0x541D5C57194E73C4(iParam0) == joaat("slamvan"))
		{
			return 1;
		}
	}
	return 0;
}

int func_88(int iParam0, bool bParam1)
{
	if ((((unk_0x444D956C7F94526E(iParam0) || unk_0x57D74362A8BD1490(iParam0)) || unk_0x097E7778E3E162E8(iParam0)) || unk_0xFFB467183FEE27C4(iParam0)) || unk_0x9E374B5F44A76AE2(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (((((((iParam0 == joaat("police") || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("caddy")) || iParam0 == joaat("caddy2"))
		{
			return 0;
		}
	}
	if (((((((((((((((iParam0 == joaat("issi2") || iParam0 == joaat("hotknife")) || iParam0 == joaat("jb700")) || iParam0 == joaat("jester")) || iParam0 == joaat("jester2")) || iParam0 == 886810209) || iParam0 == -212993243) || iParam0 == -121446169) || iParam0 == 1909189272) || iParam0 == 1617472902) || iParam0 == 1031562256) || iParam0 == 500482303) || iParam0 == 276065473) || iParam0 == 444994115) || iParam0 == -941272559) || iParam0 == -507495760)
	{
		return 0;
	}
	return 1;
}

void func_89(int iParam0)
{
	iLocal_286 = iParam0;
}

void func_90()
{
	if (func_539())
	{
		if (unk_0x0A81FE3D92AE2AC9(iLocal_90))
		{
			unk_0xED68CDDDE25A144E(iLocal_90);
			unk_0xE0DAC4ABE9900D9A(iLocal_90);
		}
	}
	else
	{
		unk_0xED68CDDDE25A144E(iLocal_90);
		unk_0xE0DAC4ABE9900D9A(iLocal_90);
	}
	iLocal_91 = 0;
	iLocal_92 = 0;
	unk_0x108754262311D34F(iLocal_90, func_61(iLocal_284), func_60(4), 2f, -2f, -1, 1, unk_0x9562E33C057F7589(0f, 0.9f), 0, 0, 0);
	func_89(0);
	iLocal_287 = 0;
	iLocal_285 = 1;
}

void func_91(var uParam0)
{
	if (!func_479(iLocal_49, 32))
	{
		iLocal_285 = 1;
	}
	if (iLocal_286 > 1 && iLocal_286 != 12)
	{
		if (!func_479(iLocal_49, 33554432))
		{
			if (func_539())
			{
				if (Global_1648606 || func_463())
				{
					func_462(0);
					func_471(&iLocal_49, 33554432);
				}
			}
			if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) > 0)
			{
				if (func_479(iLocal_49, 1048576) || func_479(iLocal_49, 8192))
				{
					func_462(0);
					func_471(&iLocal_49, 33554432);
				}
			}
		}
	}
	switch (iLocal_286)
	{
		case 0:
			if (func_479(iLocal_49, 16384) || func_479(iLocal_49, 8388608))
			{
				if (!func_10(&iLocal_107))
				{
					func_461(&iLocal_107);
				}
				if (func_460(&iLocal_107, 25f))
				{
					func_5(&iLocal_49, 16384);
					func_5(&iLocal_49, 8388608);
				}
			}
			else if (iLocal_287 != 0 && !func_459("PROS_NO_MONEY"))
			{
				func_58(0);
				switch (func_18())
				{
					case 0:
						func_458(&uLocal_116, 0, unk_0x33CD235DF1E6A94E(), "MICHAEL", 0, 1);
						break;
					
					case 1:
						func_458(&uLocal_116, 0, unk_0x33CD235DF1E6A94E(), "FRANKLIN", 0, 1);
						break;
					
					case 2:
						func_458(&uLocal_116, 0, unk_0x33CD235DF1E6A94E(), "TREVOR", 0, 1);
						break;
				}
				iLocal_286 = 1;
			}
			else
			{
				func_457();
				iLocal_287 = 2;
			}
			break;
		
		case 1:
			func_444(uParam0);
			break;
		
		case 2:
			func_431(uParam0);
			break;
		
		case 3:
			func_430();
			break;
		
		case 4:
			func_418(uParam0);
			break;
		
		case 5:
			func_403();
			break;
		
		case 6:
			func_402(uParam0);
			break;
		
		case 7:
			func_381();
			func_373();
			break;
		
		case 8:
			func_370();
			unk_0x3FD9339AA95E323F(0, 80, 1);
			unk_0x3FD9339AA95E323F(0, 0, 1);
			unk_0x111AE40E9C93AF52(unk_0x95B959F18401C09A());
			func_224();
			func_223(uParam0);
			func_222(uParam0);
			func_221(uParam0);
			if (func_539())
			{
				func_218(uParam0);
			}
			break;
		
		case 9:
			func_215();
			break;
		
		case 10:
			func_212();
			break;
		
		case 11:
			unk_0x111AE40E9C93AF52(unk_0x95B959F18401C09A());
			unk_0x3FD9339AA95E323F(0, 0, 1);
			unk_0x3FD9339AA95E323F(0, 80, 1);
			func_118();
			func_223(uParam0);
			func_222(uParam0);
			func_221(uParam0);
			func_115(uParam0);
			if (func_539())
			{
				unk_0x41E36A540F8F323F(unk_0x33CD235DF1E6A94E(), 433, true);
				func_218(uParam0);
			}
			break;
		
		case 12:
			func_478();
			break;
		
		case 13:
			unk_0x3FD9339AA95E323F(0, 80, 1);
			unk_0x3FD9339AA95E323F(0, 0, 1);
			func_96();
			break;
		
		case 14:
			func_95();
			break;
		
		case 15:
			unk_0x3FD9339AA95E323F(0, 80, 1);
			unk_0x3FD9339AA95E323F(0, 0, 1);
			func_92(uParam0);
			break;
	}
}

void func_92(var uParam0)
{
	if (!func_539())
	{
		if (unk_0x1CE8F0A08E65CA6A(unk_0x33CD235DF1E6A94E(), func_44(unk_0x33CD235DF1E6A94E(), 0, 0), func_94(1), 3))
		{
			return;
		}
	}
	if (func_479(iLocal_49, 16))
	{
		if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
		{
			unk_0xC035E897EDDE5AFA(unk_0x95B959F18401C09A(), 1);
			func_5(&iLocal_49, 16);
		}
	}
	if (func_479(iLocal_49, 2))
	{
		func_93(1);
		func_480("RESETTING INTERFACE FLAG TO FALSE - PROSTITUTE SCRIPT TERMINATING");
	}
	func_530();
	if (func_539())
	{
		func_524(uParam0);
	}
}

void func_93(int iParam0)
{
}

var func_94(bool bParam0)
{
	if (!func_479(iLocal_49, 32768))
	{
		if (bParam0)
		{
			return func_39(6);
		}
		else
		{
			return func_39(7);
		}
	}
	if (bParam0)
	{
		return func_40(6);
	}
	return func_40(7);
}

void func_95()
{
	if (!unk_0x8B76D954998C9E96(unk_0x33CD235DF1E6A94E()))
	{
		if (iLocal_70 == 0)
		{
			if (func_479(iLocal_49, 134217728))
			{
				unk_0x33F6BE48E356DA27(iLocal_90, 32768, false);
				unk_0x33F6BE48E356DA27(iLocal_90, 196624, true);
			}
			unk_0xAEED0213982928AC(iLocal_90, "HOOKER_LEAVES_ANGRY", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			func_89(15);
		}
	}
}

void func_96()
{
	switch (iLocal_294)
	{
		case 0:
			if (!unk_0x8B76D954998C9E96(iLocal_90) || func_114(&iLocal_101) > 4f)
			{
				func_109(iLocal_90);
				if (func_70(func_71(iLocal_90)) == 1)
				{
					iLocal_294 = 2;
				}
				else
				{
					func_108(&iLocal_101);
					func_107("PROS_RESPONSE");
					iLocal_294 = 1;
				}
			}
			break;
		
		case 1:
			func_106();
			if (unk_0x8B76D954998C9E96(iLocal_90) || func_105())
			{
				unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), false, 256);
				func_471(&iLocal_49, 2048);
			}
			else
			{
				if (!func_10(&iLocal_101))
				{
					func_34(&iLocal_101);
				}
				if (func_114(&iLocal_101) > 15f || iLocal_297 != 0)
				{
					unk_0xEDF90B96BED57BCE(1);
					func_104();
					iLocal_294 = 2;
				}
			}
			break;
		
		case 2:
			if (!func_105())
			{
				iLocal_294 = 3;
			}
			break;
		
		case 3:
			func_99(0);
			func_97();
			func_89(15);
			break;
	}
}

int func_97()
{
	if (func_98(0))
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

bool func_98(bool bParam0)
{
	if (!bParam0 && unk_0x1BCDA92AD0A7835B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x0E4018692D92041D(Global_71838, 0);
}

void func_99(bool bParam0)
{
	if (!unk_0xBC2FC12AD0FBF72E(iLocal_90))
	{
		if (unk_0xBB5E373390A5F824())
		{
			unk_0x4B8B69DAE5BAC592(&iLocal_90);
		}
		else
		{
			func_100(iLocal_90, bParam0);
		}
	}
}

void func_100(int iParam0, bool bParam1)
{
	int iVar0;
	float fVar1;
	
	if (unk_0x1CE8F0A08E65CA6A(unk_0x33CD235DF1E6A94E(), func_44(unk_0x33CD235DF1E6A94E(), 0, 0), func_103(1), 3))
	{
		unk_0x108754262311D34F(unk_0x33CD235DF1E6A94E(), func_44(unk_0x33CD235DF1E6A94E(), 0, 0), func_94(1), 4f, -8f, -1, 0, 0, 0, 0, 0);
	}
	if (!unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		if (func_539())
		{
			if (unk_0x0A81FE3D92AE2AC9(iParam0))
			{
				unk_0x42E0C09F4BDF7390(iParam0);
			}
		}
		else
		{
			unk_0x42E0C09F4BDF7390(iParam0);
		}
		if (func_479(iLocal_49, 33554432))
		{
			unk_0xED68CDDDE25A144E(iParam0);
		}
		if (bParam1)
		{
			fVar1 = unk_0x9562E33C057F7589(0.1f, 2f);
			if (fVar1 <= 0.25f)
			{
				func_471(&iLocal_49, 134217728);
			}
		}
		if (func_479(iLocal_49, 134217728))
		{
			unk_0x33F6BE48E356DA27(iParam0, 32768, true);
			unk_0xECCD4FDA45197F97(iParam0, unk_0x33CD235DF1E6A94E(), 300f, -1, 1, 0);
		}
		else
		{
			unk_0x33F6BE48E356DA27(iParam0, 196624, true);
			unk_0xA7A57E7757ED035E(&iVar0);
			unk_0x99414FB2D30425C1(&iVar0);
			unk_0x976357E602648DDF(0, 1);
			if (unk_0xF0D230FB550CD6EB(iParam0, 0))
			{
				if (!unk_0x61DFE32FB87BC784(unk_0xF2C96862595654B4(iParam0, 0)))
				{
					func_102(iParam0, 1);
				}
				else
				{
					if (unk_0x1CE8F0A08E65CA6A(iParam0, func_44(iParam0, 0, 0), func_103(0), 3))
					{
						if (iLocal_70 > 0)
						{
							unk_0x108754262311D34F(0, func_44(iParam0, 0, 0), func_94(0), 4f, -4f, -1, 0, 0, 0, 0, 0);
						}
						else
						{
							unk_0x108754262311D34F(0, func_44(iParam0, 0, 0), func_101(0), 4f, -4f, -1, 0, 0, 0, 0, 0);
						}
					}
					func_102(iParam0, 1);
				}
			}
			unk_0x976357E602648DDF(0, 0);
			unk_0xBD4591245C650283(0, 1193033728, 0);
			unk_0xC734F59A13D39AEF(iVar0);
			unk_0x13A2D602CD10CBAC(iParam0, iVar0);
			unk_0xA7A57E7757ED035E(&iVar0);
		}
		if (func_539())
		{
			if (unk_0x462247B843778DF4(iLocal_90))
			{
				if (unk_0x5E2784BB00B20E8E(unk_0x8370E68A3DEEB1D3(iLocal_90)))
				{
					unk_0x897EF720254BBEA3(iParam0, true);
				}
			}
		}
		else
		{
			unk_0x897EF720254BBEA3(iParam0, true);
		}
	}
}

var func_101(bool bParam0)
{
	if (!func_479(iLocal_49, 32768))
	{
		if (bParam0)
		{
			return func_39(4);
		}
		else
		{
			return func_39(5);
		}
	}
	if (bParam0)
	{
		return func_40(4);
	}
	return func_40(5);
}

void func_102(int iParam0, int iParam1)
{
	if (!unk_0x782B99DB55846C95(iParam0, unk_0xF2C96862595654B4(iParam0, 0), 0, 0, false))
	{
		unk_0x07C339D4328CA16C(0, 0, 16842752);
	}
	else
	{
		unk_0x07C339D4328CA16C(0, 0, iParam1);
	}
}

var func_103(bool bParam0)
{
	if (!func_479(iLocal_49, 32768))
	{
		if (bParam0)
		{
			return func_39(2);
		}
		else
		{
			return func_39(3);
		}
	}
	if (bParam0)
	{
		return func_40(2);
	}
	return func_40(3);
}

void func_104()
{
	int iVar0;
	
	iVar0 = unk_0x9EC3B269A34A2BEE(0, 1000);
	if ((iVar0 <= 333 && iLocal_297 == 0) || iLocal_297 == 3)
	{
		unk_0xAEED0213982928AC(unk_0x33CD235DF1E6A94E(), "HOOKER_STORY_REVULSION_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
	else if (((iVar0 > 333 && iVar0 <= 666) && iLocal_297 == 0) || iLocal_297 == 1)
	{
		unk_0xAEED0213982928AC(unk_0x33CD235DF1E6A94E(), "HOOKER_STORY_SARCASTIC_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
	else if (iLocal_297 == 0 || iLocal_297 == 2)
	{
		unk_0xAEED0213982928AC(unk_0x33CD235DF1E6A94E(), "HOOKER_STORY_SYMPATHETIC_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

int func_105()
{
	if (Global_15866 != 0 || unk_0x12BF789190D82474())
	{
		return 1;
	}
	return 0;
}

void func_106()
{
	if (iLocal_297 == 0)
	{
		unk_0x052830EE89C97404(false);
		unk_0x3FD9339AA95E323F(0, 99, 1);
		unk_0x3FD9339AA95E323F(0, 76, 1);
		unk_0x3FD9339AA95E323F(0, 80, 1);
		unk_0x144904D2EAA84341(2, 203);
		unk_0x144904D2EAA84341(2, 201);
		unk_0x144904D2EAA84341(2, 202);
		if (unk_0x1771F6BAF60B44FA(2, 203))
		{
			unk_0xEDF90B96BED57BCE(1);
			unk_0x0F8EAEEC97DDBCB3(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			iLocal_297 = 3;
		}
		else if (unk_0x1771F6BAF60B44FA(2, 201))
		{
			unk_0xEDF90B96BED57BCE(1);
			unk_0x0F8EAEEC97DDBCB3(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			iLocal_297 = 1;
		}
		else if (unk_0x1771F6BAF60B44FA(2, 202))
		{
			unk_0xEDF90B96BED57BCE(1);
			unk_0x0F8EAEEC97DDBCB3(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			iLocal_297 = 2;
		}
	}
}

void func_107(char* sParam0)
{
	unk_0x37621D6689F9E3C3(sParam0);
	unk_0x092150016C06C431(0, 1, true, -1);
}

void func_108(int iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

void func_109(int iParam0)
{
	int iVar0;
	
	iVar0 = func_71(iParam0);
	if (iVar0 > -1)
	{
		if (unk_0x8B76D954998C9E96(iParam0))
		{
			unk_0x2918FC6BDEBF9834(iParam0);
		}
		if (!unk_0x8B76D954998C9E96(iParam0))
		{
			func_111(iParam0);
			func_110(iVar0);
		}
	}
}

void func_110(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = func_70(iParam0);
	if (iVar0 < 6)
	{
		StringCopy(&vVar1, "pbpro_H", 24);
		StringIntConCat(&vVar1, iParam0 + 1, 24);
		StringConCat(&vVar1, "V", 24);
		StringIntConCat(&vVar1, iVar0, 24);
		func_11(&uLocal_116, "pbproau", &vVar1, 4, 0, 0, 0);
	}
}

void func_111(int iParam0)
{
	int iVar0;
	
	iVar0 = func_71(iParam0);
	if (iVar0 > -1)
	{
		func_113(&uLocal_116, 4);
		func_458(&uLocal_116, 6, iParam0, func_112(iVar0), 0, 1);
	}
}

char* func_112(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "Hooker1";
			break;
		
		case 1:
			sVar0 = "Hooker2";
			break;
		
		case 2:
			sVar0 = "Hooker3";
			break;
		
		case 3:
			sVar0 = "Hooker4";
			break;
		
		case 4:
			sVar0 = "Hooker5";
			break;
		
		case 5:
			sVar0 = "Hooker6";
			break;
		
		case 6:
			sVar0 = "Hooker7";
			break;
		
		case 7:
			sVar0 = "Hooker8";
			break;
		
		default:
			sVar0 = "UPRO N/A";
	}
	return sVar0;
}

void func_113(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

float func_114(int iParam0)
{
	if (func_10(iParam0))
	{
		if (func_9(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_8(unk_0x0E4018692D92041D(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return 0f;
}

void func_115(var uParam0)
{
	bool bVar0;
	int iVar1;
	
	if (!func_539())
	{
		return;
	}
	bVar0 = false;
	if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
	{
		if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
		{
			iVar1 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
			if (unk_0x765F6FEEFF39224F(iVar1))
			{
				if (unk_0x7BDC41A7CA0C77A2(iVar1, -1, 0) != unk_0x33CD235DF1E6A94E())
				{
					bVar0 = true;
				}
				if (unk_0x7BDC41A7CA0C77A2(iVar1, 0, 0) != iLocal_90)
				{
					bVar0 = true;
				}
				if (unk_0x340117F85AC524D4(iVar1) > 2)
				{
					bVar0 = true;
				}
				if (bVar0)
				{
					func_116(0);
					unk_0xED68CDDDE25A144E(unk_0x33CD235DF1E6A94E());
					func_530();
					func_524(uParam0);
				}
			}
		}
	}
}

void func_116(bool bParam0)
{
	vector3 vVar0;
	
	if (bParam0)
	{
		vVar0 = { unk_0x60B5C1FD066CB864(iLocal_93, 2) };
		unk_0xC7E6A5D90DED6E0B(180f);
		unk_0xD6EDA274D82E8678((-5.5f - vVar0.x), 1065353216);
	}
	unk_0x63F0B040CE6EDF0F(false, false, 3000, 1, 0, 0);
	func_117(&(Local_300[0 /*7*/]));
	func_117(&(Local_300[3 /*7*/]));
	func_117(&(Local_300[2 /*7*/]));
	func_117(&(Local_300[1 /*7*/]));
	if (func_459("PROS_CAM_TOG") || func_459("PROS_CAM_OC"))
	{
		unk_0xEDF90B96BED57BCE(1);
	}
}

void func_117(var uParam0)
{
	if (unk_0x117DAF3BF7232886(*uParam0))
	{
		unk_0x63F0B040CE6EDF0F(false, false, 3000, 1, 0, 0);
		if (unk_0x49D25022440E65EE(*uParam0))
		{
			unk_0x189377BFBDC9127F(*uParam0, false);
		}
		unk_0x2F8A4DF7D0DFF0A8(*uParam0, 0);
	}
}

void func_118()
{
	if (unk_0x91D5C8283D19AF49(iLocal_93, 0))
	{
		unk_0xA56208AB5F9EC61A(iLocal_93, 1);
	}
	if (iLocal_293 != 5)
	{
		if ((((((!func_211(iLocal_74) && !func_211(iLocal_75)) && !func_211(iLocal_76)) && !func_211(iLocal_77)) && !func_211(iLocal_78)) && !func_211(iLocal_79)) && !func_211(iLocal_80))
		{
			if (!unk_0x5C415D10D5CBF689(iLocal_90) || unk_0x45AD2119A5B580CD(unk_0x33CD235DF1E6A94E()))
			{
				iLocal_293 = 5;
			}
			if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
			{
				if (!unk_0x91D5C8283D19AF49(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), 0))
				{
					iLocal_293 = 5;
				}
			}
		}
	}
	unk_0x581AE7724ACAD410(2);
	unk_0x3FD9339AA95E323F(2, 19, 1);
	unk_0x3FD9339AA95E323F(2, 37, 1);
	func_206(0);
	switch (iLocal_293)
	{
		case 0:
			if (func_539())
			{
				func_203(1088, -1);
			}
			func_34(&iLocal_113);
			func_202(func_43(), func_479(iLocal_49, 32768));
			iLocal_293 = 1;
			func_480("Moving to PROSTITUTE_SERVICE_LOOPING");
			break;
		
		case 1:
			unk_0x3FD9339AA95E323F(0, 48, 1);
			unk_0x3FD9339AA95E323F(0, 0, 1);
			func_195();
			func_188();
			func_127();
			if (!func_42(0, 1))
			{
				func_126();
			}
			if (func_7(&iLocal_113) > 1f)
			{
				if (func_125())
				{
					func_5(&iLocal_49, 512);
					iLocal_296 = 0;
					func_124("PROSTITUTES_SOLICIT_SCENE");
					func_124("PROSTITUTES_SEX_SCENE");
					func_124("PROSTITUTES_BJ_SCENE");
					func_124("PROSTITUTES_BJ_SPEECH_SCENE");
					if (iLocal_70 >= 3)
					{
						func_123();
						iLocal_293 = 5;
					}
					else
					{
						func_122();
						unk_0xC4C7F808F6388EAE(iLocal_48);
						iLocal_293 = 3;
					}
				}
			}
			break;
		
		case 2:
			unk_0x3FD9339AA95E323F(0, 48, 1);
			func_195();
			if (!func_42(0, 1))
			{
				func_126();
			}
			if (func_42(0, 1))
			{
				unk_0x3FD9339AA95E323F(0, 0, 1);
			}
			if (func_7(&iLocal_113) > 1f)
			{
				if (func_125())
				{
					func_5(&iLocal_49, 512);
					iLocal_296 = 0;
					func_124("PROSTITUTES_SOLICIT_SCENE");
					func_124("PROSTITUTES_SEX_SCENE");
					func_124("PROSTITUTES_BJ_SCENE");
					func_124("PROSTITUTES_BJ_SPEECH_SCENE");
					iLocal_70 = 3;
					if (iLocal_70 >= 3)
					{
						func_123();
						iLocal_293 = 5;
						func_108(&iLocal_98);
					}
				}
			}
			break;
		
		case 3:
			unk_0x3FD9339AA95E323F(0, 0, 1);
			if (!unk_0x8B76D954998C9E96(iLocal_90))
			{
				func_124("PROSTITUTES_SOLICIT_SCENE");
				func_124("PROSTITUTES_BJ_SPEECH_SCENE");
				iLocal_292 = 0;
				iLocal_293 = 0;
				func_121();
				unk_0xC4C7F808F6388EAE(iLocal_48);
				iLocal_286 = 8;
			}
			break;
		
		case 5:
			unk_0x3FD9339AA95E323F(0, 0, 1);
			if (!unk_0x8B76D954998C9E96(iLocal_90))
			{
				if (iLocal_70 > 0)
				{
					if (func_120(iLocal_90))
					{
						func_119();
					}
					else
					{
						func_462(0);
					}
				}
				else
				{
					func_480("PROSTITUTE CANCEL PROS NO LONGER IN VEHICLE");
					func_462(1);
				}
			}
			break;
	}
}

void func_119()
{
	if (unk_0xBC2FC12AD0FBF72E(iLocal_90))
	{
		return;
	}
	if (!unk_0x8B76D954998C9E96(unk_0x33CD235DF1E6A94E()))
	{
		if (iLocal_70 == 0)
		{
			unk_0xAEED0213982928AC(unk_0x33CD235DF1E6A94E(), "HOOKER_DECLINE_SERVICE", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
		else if (func_120(iLocal_90))
		{
			func_34(&iLocal_101);
			unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), false, 768);
			func_471(&iLocal_49, 2048);
			iLocal_286 = 13;
		}
	}
}

bool func_120(int iParam0)
{
	int iVar0;
	
	iVar0 = func_71(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	return func_70(iVar0) < 6;
}

void func_121()
{
	Global_2437364.f_1155.f_10 = 1;
}

void func_122()
{
	if (unk_0xBC2FC12AD0FBF72E(iLocal_90))
	{
		return;
	}
	if (!unk_0x8B76D954998C9E96(iLocal_90))
	{
		unk_0xAEED0213982928AC(iLocal_90, "SEX_FINISHED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

void func_123()
{
	if (unk_0xBC2FC12AD0FBF72E(iLocal_90))
	{
		return;
	}
	if (!unk_0x8B76D954998C9E96(iLocal_90))
	{
		unk_0xAEED0213982928AC(iLocal_90, "HOOKER_HAD_ENOUGH", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

void func_124(char* sParam0)
{
	if (unk_0x7C71681384076318(sParam0))
	{
		unk_0x7CED302277C0F3D3(sParam0);
	}
}

int func_125()
{
	if (iLocal_296 == 6)
	{
		return 1;
	}
	return 0;
}

void func_126()
{
	unk_0xC2E971FFC45AE37D();
	unk_0x56F45F672A617B00();
}

void func_127()
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	
	if (unk_0x786AF4A44E1B5B4B(func_44(unk_0x33CD235DF1E6A94E(), 0, 0)))
	{
		return;
	}
	if (!unk_0xE9CCF312047EBEE0(func_44(unk_0x33CD235DF1E6A94E(), 0, 0)))
	{
		return;
	}
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		unk_0x9611832841071B69(unk_0x33CD235DF1E6A94E(), false);
	}
	bVar1 = func_43();
	bVar2 = func_479(iLocal_49, 32768);
	if (!func_42(0, 1))
	{
		func_182(&iLocal_81);
	}
	unk_0x3FD9339AA95E323F(2, 19, 1);
	unk_0x3FD9339AA95E323F(2, 37, 1);
	func_181(23, 1);
	switch (iLocal_296)
	{
		case 0:
			func_5(&iLocal_49, 256);
			if (!func_42(0, 1))
			{
				func_176(&iLocal_81);
			}
			func_175(iLocal_90, 0);
			if (!func_539())
			{
				func_174(bVar1, bVar2);
			}
			func_173(bVar1, bVar2);
			iLocal_296 = 1;
			break;
		
		case 1:
			func_172(iLocal_74);
			if (func_211(iLocal_75))
			{
				if (!func_479(iLocal_50, 4))
				{
					if (!func_539())
					{
						fVar0 = 0.925f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_75) >= fVar0)
					{
						func_471(&iLocal_50, 4);
					}
				}
			}
			if (func_211(iLocal_74))
			{
				if (!func_479(iLocal_50, 8))
				{
					if (!func_539())
					{
						fVar0 = 0.925f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_74) >= fVar0)
					{
						func_471(&iLocal_50, 8);
					}
				}
			}
			if (func_479(iLocal_50, 4) && func_479(iLocal_50, 8))
			{
				if (!func_539())
				{
					func_170(bVar1, bVar2);
				}
				func_169(bVar1, bVar2);
				iLocal_296 = 2;
			}
			break;
		
		case 2:
			func_172(iLocal_76);
			if (func_211(iLocal_76))
			{
				if (!func_479(iLocal_50, 16))
				{
					if (!func_539())
					{
						fVar0 = 0.98f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_76) >= fVar0)
					{
						func_471(&iLocal_50, 16);
					}
				}
			}
			if (func_479(iLocal_50, 16))
			{
				if (!func_539())
				{
					func_168(bVar1, bVar2);
				}
				func_167(bVar1, bVar2);
				iLocal_296 = 3;
			}
			break;
		
		case 3:
			func_172(iLocal_77);
			if (func_211(iLocal_77))
			{
				if (!func_479(iLocal_50, 64))
				{
					if (!func_479(iLocal_49, 16777216))
					{
						if (!func_539())
						{
							fVar0 = 0.975f;
						}
						else
						{
							fVar0 = 0.986f;
						}
						if (func_171(iLocal_77) >= fVar0)
						{
							func_471(&iLocal_49, 16777216);
							iLocal_71++;
						}
					}
					else
					{
						if (!func_539())
						{
							fVar0 = 0.975f;
						}
						else
						{
							fVar0 = 0.986f;
						}
						if (func_171(iLocal_77) < fVar0)
						{
							func_5(&iLocal_49, 16777216);
						}
					}
					if (iLocal_71 >= func_160(func_539(), func_166(), func_161()))
					{
						func_471(&iLocal_50, 64);
						func_5(&iLocal_49, 16777216);
					}
				}
			}
			else if (!func_479(iLocal_50, 64))
			{
				func_471(&iLocal_50, 64);
			}
			if (func_479(iLocal_50, 64))
			{
				if (!func_539())
				{
					func_159(bVar1, bVar2);
				}
				func_158(bVar1, bVar2);
				iLocal_296 = 4;
			}
			break;
		
		case 4:
			func_172(iLocal_78);
			if (func_211(iLocal_78))
			{
				if (!func_479(iLocal_50, 256))
				{
					if (!func_539())
					{
						fVar0 = 0.925f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_78) >= fVar0)
					{
						func_471(&iLocal_50, 256);
					}
				}
			}
			else if (!func_479(iLocal_50, 256))
			{
				func_471(&iLocal_50, 256);
			}
			if (func_479(iLocal_50, 256))
			{
				if (!func_539())
				{
					func_152(bVar1, bVar2);
				}
				func_150(bVar1, bVar2);
				iLocal_296 = 5;
			}
			break;
		
		case 5:
			func_172(iLocal_79);
			if (func_211(iLocal_79))
			{
				if (!func_479(iLocal_50, 1024))
				{
					if (!func_539())
					{
						fVar0 = 0.975f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_79) >= fVar0)
					{
						func_471(&iLocal_50, 1024);
					}
				}
			}
			else if (!func_479(iLocal_50, 1024))
			{
				func_471(&iLocal_50, 1024);
			}
			if (func_211(iLocal_80))
			{
				if (!func_479(iLocal_50, 2048))
				{
					if (!func_539())
					{
						fVar0 = 0.975f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_80) >= fVar0)
					{
						func_471(&iLocal_50, 2048);
					}
				}
			}
			else if (!func_479(iLocal_50, 2048))
			{
				func_471(&iLocal_50, 2048);
			}
			if (func_479(iLocal_50, 1024) && func_479(iLocal_50, 2048))
			{
				func_175(iLocal_90, 0);
				unk_0x108754262311D34F(iLocal_90, func_44(unk_0x33CD235DF1E6A94E(), 0, 0), func_38(iLocal_296, 1, bVar1, bVar2), 4f, -4f, -1, 1, 0, 0, 0, 0);
				func_175(unk_0x33CD235DF1E6A94E(), -1);
				unk_0x108754262311D34F(unk_0x33CD235DF1E6A94E(), func_44(unk_0x33CD235DF1E6A94E(), 0, 0), func_38(iLocal_296, 0, bVar1, bVar2), 4f, -4f, -1, 1, 0, 0, 0, 0);
				func_116(1);
				iLocal_50 = 0;
				iLocal_71 = 0;
				iLocal_59 = 0;
				func_128();
				iLocal_296 = 6;
			}
			break;
	}
}

void func_128()
{
	int iVar0;
	
	if (iLocal_70 == 0 && !func_539())
	{
		if (func_21(unk_0x33CD235DF1E6A94E()) == 0)
		{
			func_149();
		}
		func_144(296, 0, 0);
		iVar0 = func_71(iLocal_90);
		if (iVar0 > -1)
		{
			func_143(iVar0);
		}
		else
		{
			func_135(iLocal_90);
		}
	}
	iLocal_70++;
	func_129();
}

void func_129()
{
	switch (func_21(unk_0x33CD235DF1E6A94E()))
	{
		case 0:
			Global_106565.f_10043.f_90[0]++;
			func_130(0, 1, 1);
			break;
		
		case 1:
			Global_106565.f_10043.f_90[1]++;
			func_130(1, 1, 1);
			break;
		
		case 2:
			Global_106565.f_10043.f_90[2]++;
			func_130(2, 1, 1);
			break;
		
		case 3:
			func_130(3, 1, 1);
			break;
	}
}

void func_130(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_106565.f_2357.f_539.f_2247[iParam1 /*4*/][iParam0] = (Global_106565.f_2357.f_539.f_2247[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 10383;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 10383)
			{
				iVar0 = func_134(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_131(iVar1, iVar0, -1, 1, 0);
			}
			break;
	}
}

void func_131(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_132(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x12B6E23F244DDB0F(iVar0, iParam1, iParam3);
	}
}

int func_132(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_133();
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

int func_133()
{
	return Global_1312745;
}

int func_134(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_132(iParam1)];
	if (unk_0x75D54ED6C1AD1642(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_135(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	
	if (unk_0xD62C4419A41F106A(iParam0, 0))
	{
		return;
	}
	iVar0 = func_142();
	if (iVar0 == -1)
	{
		return;
	}
	func_143(iVar0);
	unk_0xC6CDB5F78F0E3592(iParam0, func_140(iVar0));
	Global_106565.f_10043.f_1[iVar0 /*11*/].f_10 = unk_0x541D5C57194E73C4(iParam0);
	iVar2 = 0;
	while (iVar2 < 2)
	{
		iVar1 = iVar2;
		uVar3 = func_139(iParam0, iVar1);
		func_138(iVar0, iVar1, uVar3);
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < 2)
	{
		iVar4 = iVar2;
		uVar3 = func_137(iParam0, iVar4);
		func_136(iVar0, iVar4, uVar3);
		iVar2++;
	}
}

void func_136(int iParam0, int iParam1, var uParam2)
{
	if (iParam0 > -1)
	{
		Global_106565.f_10043.f_1[iParam0 /*11*/].f_7[iParam1] = uParam2;
	}
}

int func_137(int iParam0, int iParam1)
{
	return unk_0xCEB55689C694866C(iParam0, func_76(iParam1));
}

void func_138(int iParam0, int iParam1, var uParam2)
{
	if (iParam0 > -1)
	{
		Global_106565.f_10043.f_1[iParam0 /*11*/].f_4[iParam1] = uParam2;
	}
}

int func_139(int iParam0, int iParam1)
{
	return unk_0xA603FBA9F3C17D3A(iParam0, func_80(iParam1));
}

var func_140(int iParam0)
{
	return func_141(iParam0);
}

char* func_141(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "UPRO BABS";
			break;
		
		case 1:
			sVar0 = "UPRO DANA";
			break;
		
		case 2:
			sVar0 = "UPRO LIZZIE";
			break;
		
		case 3:
			sVar0 = "UPRO AMANDA";
			break;
		
		case 4:
			sVar0 = "UPRO ASHLEY";
			break;
		
		case 5:
			sVar0 = "UPRO KRISTEN";
			break;
		
		case 6:
			sVar0 = "UPRO SASHA";
			break;
		
		case 7:
			sVar0 = "UPRO JACQUELINE";
			break;
		
		default:
			sVar0 = "UPRO N/A";
	}
	return sVar0;
}

int func_142()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (func_70(iVar0) == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_143(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_18() == 0)
		{
			Global_106565.f_10043.f_1[iParam0 /*11*/][0]++;
		}
		else if (func_18() == 1)
		{
			Global_106565.f_10043.f_1[iParam0 /*11*/][1]++;
		}
		else if (func_18() == 2)
		{
			Global_106565.f_10043.f_1[iParam0 /*11*/][2]++;
		}
	}
}

void func_144(int iParam0, int iParam1, int iParam2)
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
		func_148((891 + iParam0), 1, -1, 1);
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
		func_145();
	}
}

void func_145()
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
		func_147(13, floor(Global_106565.f_10188.f_3853));
	}
	if (!unk_0xDC17890B0B8B5081())
	{
		if (!Global_71590)
		{
			if (func_146() == 2 == 0 && !unk_0xB331FCEB94EB05C8())
			{
				if (unk_0xB16BC34F6CB4A57A())
				{
					Global_106299 = 0;
				}
				if (!Global_56494)
				{
					func_97();
				}
			}
		}
	}
}

int func_146()
{
	return Global_25765;
}

int func_147(int iParam0, int iParam1)
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

int func_148(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_133();
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

void func_149()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 < 1)
		{
			Global_90174[iVar0] = Global_90174[iVar0 + 1];
		}
		else
		{
			Global_90174[iVar0] = unk_0xE3903F59E2F22150();
		}
		iVar0++;
	}
}

void func_150(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_539())
	{
		iVar0 = 2056;
	}
	func_151(iLocal_90, iLocal_79, func_44(unk_0x33CD235DF1E6A94E(), 0, 0), func_38(4, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_151(unk_0x33CD235DF1E6A94E(), iLocal_80, func_44(unk_0x33CD235DF1E6A94E(), 0, 0), func_38(4, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_151(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	if (func_539())
	{
		unk_0x930FB6CDE4B41DD2(iParam1);
	}
	else
	{
		unk_0x08798CBF817BA887(iParam0, iParam1, sParam2, sParam3, fParam4, fParam5, iParam6, iParam7, iParam8, iParam9);
	}
}

void func_152(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_539())
	{
		iVar0 = 2056;
	}
	func_154(&iLocal_79, 1, 0, 0);
	func_153(iLocal_90, iLocal_79, func_44(unk_0x33CD235DF1E6A94E(), 0, 0), func_38(4, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
	func_154(&iLocal_80, 0, 0, 0);
	func_153(unk_0x33CD235DF1E6A94E(), iLocal_80, func_44(unk_0x33CD235DF1E6A94E(), 0, 0), func_38(4, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
}

void func_153(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, float fParam5, int iParam6, int iParam7, int iParam8)
{
	if (func_539())
	{
		unk_0x74E9D455686E1F3A(iParam0, iParam1, sParam2, sParam3, fParam4, fParam5, iParam6, iParam7, iParam8, 0);
	}
}

void func_154(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	
	vVar0 = { 0f, 0f, 0f };
	*iParam0 = func_157(vVar0, 0f, 0f, 0f, bParam3, bParam2, 2);
	if (iParam1 == 0)
	{
		func_156(*iParam0, iLocal_93, unk_0x89DDAAE6EFF42DD9(iLocal_93, "seat_dside_f"));
	}
	else if (iParam1 == 1)
	{
		func_156(*iParam0, iLocal_93, unk_0x89DDAAE6EFF42DD9(iLocal_93, "seat_pside_f"));
	}
	func_155(*iParam0, vVar0, 0f, 0f, 0f, 0);
}

void func_155(int iParam0, vector3 vParam1, vector3 vParam2, int iParam3)
{
	if (!func_539())
	{
		unk_0x3E7EA351DBCB7E7A(iParam0, vParam1, vParam2, iParam3);
	}
}

void func_156(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xD62C4419A41F106A(iParam1, 0))
	{
		return;
	}
	if (func_539())
	{
		unk_0x10E324DB302F7E38(iParam0, iParam1, iParam2);
	}
	else
	{
		unk_0x19CC0F2E313BAF2E(iParam0, iParam1, iParam2);
	}
}

int func_157(vector3 vParam0, vector3 vParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (func_539())
	{
		if (bParam2)
		{
			bParam3 = false;
		}
		iVar0 = unk_0x6D57E93CB68152FE(vParam0, vParam1, iParam4, bParam2, bParam3, 1065353216, 0, 1065353216);
	}
	else
	{
		iVar0 = unk_0x38A6890195DD00D1(vParam0, vParam1, iParam4);
		unk_0x34C803C2BC1CAFB2(iVar0, bParam2);
		unk_0x6359F1F7F5174D4A(iVar0, bParam3);
	}
	return iVar0;
}

void func_158(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_539())
	{
		iVar0 = 2056;
	}
	func_151(iLocal_90, iLocal_78, func_44(unk_0x33CD235DF1E6A94E(), 0, 0), func_38(3, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_151(unk_0x33CD235DF1E6A94E(), iLocal_78, func_44(unk_0x33CD235DF1E6A94E(), 0, 0), func_38(3, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_159(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_539())
	{
		iVar0 = 2056;
	}
	func_154(&iLocal_78, 0, 0, 1);
	func_153(iLocal_90, iLocal_78, func_44(unk_0x33CD235DF1E6A94E(), 0, 0), func_38(3, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
	func_153(unk_0x33CD235DF1E6A94E(), iLocal_78, func_44(unk_0x33CD235DF1E6A94E(), 0, 0), func_38(3, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
}

int func_160(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_161()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_162();
	if (iVar0 < 48)
	{
		iVar1 = 2;
	}
	else if (iVar0 >= 48 && iVar0 < 85)
	{
		iVar1 = 3;
	}
	else
	{
		iVar1 = 4;
	}
	return iVar1;
}

int func_162()
{
	if (func_539())
	{
		return func_134(65, -1, 0);
	}
	return func_163(func_21(unk_0x33CD235DF1E6A94E()), 1);
}

var func_163(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_164(iParam0, iParam1);
	unk_0x75D54ED6C1AD1642(iVar1, &uVar0, -1);
	return uVar0;
}

var func_164(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	func_165(iParam0, iParam1, &uVar0, &uVar1);
	return uVar0;
}

void func_165(int iParam0, int iParam1, var uParam2, var uParam3)
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

int func_166()
{
	int iVar0;
	
	if (iLocal_288 != 0)
	{
		if (iLocal_59 < 2)
		{
			iVar0 = 3;
		}
		else if (iLocal_59 == 2)
		{
			iVar0 = 4;
		}
		else if (iLocal_59 == 3)
		{
			iVar0 = 5;
		}
		else
		{
			iVar0 = 6;
		}
	}
	else if (iLocal_59 < 3)
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	return iVar0;
}

void func_167(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_539())
	{
		iVar0 = 2056;
	}
	func_151(iLocal_90, iLocal_77, func_44(unk_0x33CD235DF1E6A94E(), 0, 0), func_38(2, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_151(unk_0x33CD235DF1E6A94E(), iLocal_77, func_44(unk_0x33CD235DF1E6A94E(), 0, 0), func_38(2, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_168(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_539())
	{
		iVar0 = 2056;
	}
	func_154(&iLocal_77, 0, 1, 0);
	func_153(iLocal_90, iLocal_77, func_44(unk_0x33CD235DF1E6A94E(), 0, 0), func_38(2, 1, bParam0, bParam1), 1000f, -1000f, iVar0, 0, 1148846080);
	func_153(unk_0x33CD235DF1E6A94E(), iLocal_77, func_44(unk_0x33CD235DF1E6A94E(), 0, 0), func_38(2, 0, bParam0, bParam1), 1000f, -1000f, iVar0, 0, 1148846080);
}

void func_169(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_539())
	{
		iVar0 = 2056;
	}
	func_151(iLocal_90, iLocal_76, func_44(unk_0x33CD235DF1E6A94E(), 0, 0), func_38(1, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_151(unk_0x33CD235DF1E6A94E(), iLocal_76, func_44(unk_0x33CD235DF1E6A94E(), 0, 0), func_38(1, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_170(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_539())
	{
		iVar0 = 2056;
	}
	func_154(&iLocal_76, 0, 0, 1);
	func_153(iLocal_90, iLocal_76, func_44(unk_0x33CD235DF1E6A94E(), 0, 0), func_38(1, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
	func_153(unk_0x33CD235DF1E6A94E(), iLocal_76, func_44(unk_0x33CD235DF1E6A94E(), 0, 0), func_38(1, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
}

float func_171(int iParam0)
{
	float fVar0;
	
	if (func_539())
	{
		fVar0 = unk_0x4EDDCE9AAE0FC976(unk_0x3F2F21BCB3761848(iParam0));
	}
	else
	{
		fVar0 = unk_0x4EDDCE9AAE0FC976(iParam0);
	}
	return fVar0;
}

void func_172(int iParam0)
{
	if (!func_211(iParam0))
	{
		return;
	}
}

void func_173(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_539())
	{
		iVar0 = 2056;
	}
	func_151(iLocal_90, iLocal_74, func_44(unk_0x33CD235DF1E6A94E(), 0, 0), func_38(0, 1, bParam0, bParam1), 8f, -0.7f, iVar0, 0, 1000f, 0);
	func_151(unk_0x33CD235DF1E6A94E(), iLocal_75, func_44(unk_0x33CD235DF1E6A94E(), 0, 0), func_38(0, 0, bParam0, bParam1), 8f, -0.7f, iVar0, 0, 1000f, 0);
}

void func_174(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_539())
	{
		iVar0 = 2056;
	}
	func_154(&iLocal_74, 1, 0, 1);
	func_153(iLocal_90, iLocal_74, func_44(unk_0x33CD235DF1E6A94E(), 0, 0), func_38(0, 1, bParam0, bParam1), 4f, -1000f, iVar0, 0, 1148846080);
	func_154(&iLocal_75, 0, 0, 1);
	func_153(unk_0x33CD235DF1E6A94E(), iLocal_75, func_44(unk_0x33CD235DF1E6A94E(), 0, 0), func_38(0, 0, bParam0, bParam1), 4f, -1000f, iVar0, 0, 1148846080);
}

void func_175(int iParam0, int iParam1)
{
	if (!unk_0x10930B9CAD4111C2(iParam0, iLocal_93, 0))
	{
		if (!func_539())
		{
			unk_0x094626C0798AE1F8(iParam0, iLocal_93, iParam1);
		}
		else if (!unk_0x10930B9CAD4111C2(iParam0, iLocal_93, 0))
		{
			unk_0xC838CE9837D0ABAF(iParam0, iLocal_93, -1, iParam1, 2f, 16, 0);
		}
	}
}

void func_176(int iParam0)
{
	var uVar0;
	var uVar1;
	vector3 vVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	
	uVar0 = func_178(func_179(2), unk_0x2D49816199C51B0C(iLocal_93, unk_0x89DDAAE6EFF42DD9(iLocal_93, "windscreen")));
	uVar1 = func_178(func_179(1), unk_0x2D49816199C51B0C(iLocal_93, unk_0x89DDAAE6EFF42DD9(iLocal_93, "windscreen")));
	vVar2 = { unk_0x60B5C1FD066CB864(iLocal_93, 2) };
	fVar3 = unk_0xC472E34C8FBEC678(iLocal_93);
	if (fVar3 >= 180f)
	{
		fVar4 = (fVar3 - 180f);
	}
	else
	{
		fVar4 = (fVar3 + 180f);
	}
	fVar5 = (-7f - vVar2.y);
	fVar6 = (-5f - vVar2.x);
	fVar7 = (-2.5f + vVar2.x);
	fVar8 = ((0f - (0.7f * vVar2.x)) + (0.3f * vVar2.y));
	if (!unk_0x117DAF3BF7232886(Local_300[2 /*7*/]))
	{
		func_177(&(Local_300[2 /*7*/]), func_179(2), fVar5, vVar2.x, uVar0, 50f);
	}
	if (!unk_0x117DAF3BF7232886(Local_300[1 /*7*/]))
	{
		func_177(&(Local_300[1 /*7*/]), func_179(1), fVar8, -vVar2.y, uVar1, 37.3f);
	}
	if (!unk_0x117DAF3BF7232886(Local_300[0 /*7*/]))
	{
		func_177(&(Local_300[0 /*7*/]), func_179(0), fVar6, -vVar2.y, fVar4, 50f);
	}
	if (!unk_0x117DAF3BF7232886(Local_300[3 /*7*/]))
	{
		func_177(&(Local_300[3 /*7*/]), func_179(3), fVar7, vVar2.y, fVar3, 45f);
	}
	unk_0x63F0B040CE6EDF0F(true, false, 3000, 1, 0, 0);
	unk_0x189377BFBDC9127F(Local_300[*iParam0 /*7*/], true);
}

void func_177(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3)
{
	uParam0->f_1 = { vParam2 };
	uParam0->f_4 = { 0f, 0f, 0f };
	*uParam0 = unk_0x00E62F31D05EB2AC("DEFAULT_SCRIPTED_CAMERA", false);
	unk_0x189377BFBDC9127F(*uParam0, true);
	unk_0x2AAFDB86F2CBFB67(*uParam0, vParam1, uParam0->f_1, fParam3, 0, 1, 1, 2);
	unk_0x63F0B040CE6EDF0F(true, false, 3000, 1, 0, 0);
}

float func_178(struct<2> Param0, var uParam1, struct<2> Param2, float fParam3)
{
	return unk_0x174C48E9E544E9A8((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

Vector3 func_179(int iParam0)
{
	vector3 vVar0;
	var uVar1;
	struct<2> Var2;
	vector3 vVar3;
	vector3 vVar4;
	
	if (!unk_0xD62C4419A41F106A(iLocal_90, 0))
	{
	}
	if (!unk_0x91D5C8283D19AF49(iLocal_93, 0))
	{
	}
	unk_0xFEF5F9BB57EA2E8D(unk_0x541D5C57194E73C4(iLocal_93), &uVar1, &Var2);
	vVar3 = { unk_0x2D49816199C51B0C(iLocal_93, unk_0x89DDAAE6EFF42DD9(iLocal_93, "windscreen")) };
	vVar4 = { unk_0x16068053F8800179(iLocal_93, vVar3) };
	switch (iParam0)
	{
		case 0:
			vVar0 = { unk_0x2CA911E7569D12EA(iLocal_93, 0f, (Var2.f_1 + 1.4f), vVar4.z) };
			break;
		
		case 1:
			vVar0 = { unk_0x2CA911E7569D12EA(iLocal_93, 1.5f, (Var2.f_1 + 1.2f), (vVar4.z - 0.1f)) };
			break;
		
		case 2:
			vVar0 = { unk_0x2CA911E7569D12EA(iLocal_93, -3.7f, 0.7f, vVar4.z) };
			break;
		
		case 3:
			vVar0 = { func_180() };
			break;
	}
	return vVar0;
}

Vector3 func_180()
{
	vector3 vVar0;
	vector3 vVar1;
	struct<2> Var2;
	var uVar3;
	
	unk_0xFEF5F9BB57EA2E8D(unk_0x541D5C57194E73C4(iLocal_93), &Var2, &uVar3);
	vVar0 = { unk_0x2D49816199C51B0C(iLocal_93, unk_0x89DDAAE6EFF42DD9(iLocal_93, "windscreen")) };
	vVar1 = { unk_0x16068053F8800179(iLocal_93, vVar0) };
	vVar1.z = (vVar1.z + 0.09f);
	Var2.f_1 = (Var2.f_1 - 1f);
	return unk_0x2CA911E7569D12EA(iLocal_93, 0f, -unk_0x7EECA16E87982278(Var2.f_1), vVar1.z);
}

void func_181(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x8950ED5730F62EE8(&Global_26010, iParam0);
	}
	else
	{
		unk_0xCE689A8E8C42ED78(&Global_26010, iParam0);
	}
}

void func_182(int iParam0)
{
	if (!unk_0x117DAF3BF7232886(Local_300[*iParam0 /*7*/]))
	{
		return;
	}
	if (!unk_0xFAA5C555ED0CEC9B(Local_300[*iParam0 /*7*/]))
	{
		return;
	}
	unk_0x083F68B89E3EA476(Local_300[*iParam0 /*7*/], "HAND_SHAKE", 0.25f);
	if (!unk_0xD9C92B0885A075F8())
	{
		func_185(&(Local_300[*iParam0 /*7*/]));
	}
	if (func_184())
	{
		if (!func_539())
		{
			if (!func_459("PROS_CAM_OC"))
			{
				func_107("PROS_CAM_OC");
			}
		}
	}
	else
	{
		if (!func_539())
		{
			if (!func_459("PROS_CAM_TOG"))
			{
				func_107("PROS_CAM_TOG");
			}
		}
		if ((unk_0x5EBE50D55314CEAD(2, 0) && !unk_0xD9C92B0885A075F8()) && !func_42(0, 1))
		{
			func_183(iParam0);
			unk_0x189377BFBDC9127F(Local_300[*iParam0 /*7*/], true);
		}
	}
}

void func_183(var uParam0)
{
	if (*uParam0 < 3)
	{
		*uParam0++;
	}
	else if (*uParam0 == 3)
	{
		*uParam0 = 0;
	}
	if (*uParam0 == 0)
	{
		if (func_479(iLocal_51, 16))
		{
			*uParam0++;
		}
	}
	if (*uParam0 == 1)
	{
		if (func_479(iLocal_51, 128))
		{
			*uParam0++;
		}
	}
	if (*uParam0 == 2)
	{
		if (func_479(iLocal_51, 64))
		{
			*uParam0++;
		}
	}
}

int func_184()
{
	if ((func_479(iLocal_51, 16) && func_479(iLocal_51, 64)) && func_479(iLocal_51, 128))
	{
		return 1;
	}
	return 0;
}

void func_185(var uParam0)
{
	var uVar0[4];
	vector3 vVar1;
	float fVar2;
	vector3 vVar3;
	
	unk_0x636CEDA67977F07B(2);
	func_187(&(uVar0[0]), &(uVar0[1]), &(uVar0[2]), &(uVar0[3]), 0, 0);
	vVar1.z = (-(to_float(uVar0[2]) / 127f) * 10f);
	vVar1.y = ((-vVar1.z * 3f) / 10f);
	if (unk_0x8871859EF0AB8004())
	{
		vVar1.x = ((to_float(uVar0[3]) / 127f) * 10f);
	}
	else
	{
		vVar1.x = (-(to_float(uVar0[3]) / 127f) * 10f);
	}
	fVar2 = (30f * timestep());
	vVar3 = { vVar1 };
	if (unk_0x5D79F3D06EB318A0(0))
	{
		uParam0->f_4 = func_186((uParam0->f_4 + (vVar3.x * 0.05f)), -3f, 3f);
		uParam0->f_4.f_1 = func_186((uParam0->f_4.f_1 + (vVar3.y * 0.05f)), -3f, 3f);
		uParam0->f_4.f_2 = func_186((uParam0->f_4.f_2 + (vVar3.z * 0.05f)), -3f, 3f);
	}
	else
	{
		uParam0->f_4 = (uParam0->f_4 + func_186((((vVar3.x - uParam0->f_4) * 0.05f) * fVar2), -3f, 3f));
		uParam0->f_4.f_1 = (uParam0->f_4.f_1 + func_186((((vVar3.y - uParam0->f_4.f_1) * 0.05f) * fVar2), -3f, 3f));
		uParam0->f_4.f_2 = (uParam0->f_4.f_2 + func_186((((vVar3.z - uParam0->f_4.f_2) * 0.05f) * fVar2), -3f, 3f));
	}
	unk_0x833A05A7AD82EA44(*uParam0, uParam0->f_1 + uParam0->f_4, 2);
}

float func_186(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_187(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam0 = floor((unk_0x405A2F54470CCC35(2, 218) * 127f));
	*uParam1 = floor((unk_0x405A2F54470CCC35(2, 219) * 127f));
	*uParam2 = floor((unk_0x405A2F54470CCC35(2, 220) * 127f));
	*uParam3 = floor((unk_0x405A2F54470CCC35(2, 221) * 127f));
	if (bParam4)
	{
		if (!unk_0xAED1F3230E36A119(2, 218))
		{
			*uParam0 = floor((unk_0x2EEE89525F08C860(2, 218) * 127f));
		}
		if (!unk_0xAED1F3230E36A119(2, 219))
		{
			*uParam1 = floor((unk_0x2EEE89525F08C860(2, 219) * 127f));
		}
		if (!unk_0xAED1F3230E36A119(2, 220))
		{
			*uParam2 = floor((unk_0x2EEE89525F08C860(2, 220) * 127f));
		}
		if (!unk_0xAED1F3230E36A119(2, 221))
		{
			*uParam3 = floor((unk_0x2EEE89525F08C860(2, 221) * 127f));
		}
	}
	if (unk_0x5D79F3D06EB318A0(2))
	{
		if (bParam5)
		{
			if (unk_0x8871859EF0AB8004())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (unk_0xA5C0D3C085A49E49())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_188()
{
	int iVar0;
	float fVar1;
	
	if (!func_193())
	{
		if (func_192(iLocal_90))
		{
			if (!func_479(iLocal_49, 256))
			{
				unk_0x2918FC6BDEBF9834(unk_0x33CD235DF1E6A94E());
				unk_0xAEED0213982928AC(unk_0x33CD235DF1E6A94E(), "SEX_CLIMAX", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				if (iLocal_70 == 1)
				{
					if (!func_539())
					{
						unk_0xD219E3573CA7427C(unk_0x95B959F18401C09A(), 15, 1);
					}
					unk_0x61AE8E2B7BB7D8BA(0, 4000, 252);
				}
				else if (iLocal_70 == 2)
				{
					if (!func_539())
					{
						unk_0xD219E3573CA7427C(unk_0x95B959F18401C09A(), 10, 1);
					}
					unk_0x61AE8E2B7BB7D8BA(0, 4000, 210);
				}
				else
				{
					if (!func_539())
					{
						unk_0xD219E3573CA7427C(unk_0x95B959F18401C09A(), 5, 1);
					}
					unk_0x61AE8E2B7BB7D8BA(0, 3000, 168);
				}
				func_471(&iLocal_49, 256);
			}
		}
	}
	else
	{
		switch (iLocal_289)
		{
			case 0:
				if (unk_0xFBEC827720F84540(iLocal_90, 876132797))
				{
					unk_0x61AE8E2B7BB7D8BA(0, 200, 84);
					unk_0x0848C95091F9ECB9(iLocal_93, 1, 0f, 0f, -0.05f, 0f, 0f, 0f, 0, 1, 1, 1, 1, 0);
					func_190();
				}
				break;
			
			case 1:
			case 2:
				if (func_479(iLocal_49, 32768))
				{
					if (func_539())
					{
						iVar0 = unk_0x3F2F21BCB3761848(iLocal_77);
					}
					else
					{
						iVar0 = iLocal_77;
					}
					if (unk_0xDB4C79A9697E6A55(iVar0))
					{
						fVar1 = unk_0x4EDDCE9AAE0FC976(iVar0);
						if ((((((((((((((fVar1 > 0.01f && fVar1 < 0.019f) || (fVar1 > 0.093f && fVar1 < 0.1f)) || (fVar1 > 0.165f && fVar1 < 0.172f)) || (fVar1 > 0.231f && fVar1 < 0.239f)) || (fVar1 > 0.308f && fVar1 < 0.317f)) || (fVar1 > 0.37f && fVar1 < 0.378f)) || (fVar1 > 0.437f && fVar1 < 0.443f)) || (fVar1 > 0.507f && fVar1 < 0.518f)) || (fVar1 > 0.58f && fVar1 < 0.587f)) || (fVar1 > 0.651f && fVar1 < 0.659f)) || (fVar1 > 0.72f && fVar1 < 0.729f)) || (fVar1 > 0.788f && fVar1 < 0.794f)) || (fVar1 > 0.862f && fVar1 < 0.87f)) || (fVar1 > 0.937f && fVar1 < 0.946f))
						{
							if (!func_512(512))
							{
								unk_0x61AE8E2B7BB7D8BA(0, 200, 252);
								unk_0x0848C95091F9ECB9(iLocal_93, 1, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, 1, 1, 1, 1, 0);
								func_190();
								func_189(512);
							}
						}
						else
						{
							func_516(512);
						}
					}
				}
				else if (unk_0xFBEC827720F84540(iLocal_90, 876132797))
				{
					unk_0x61AE8E2B7BB7D8BA(0, 200, 252);
					unk_0x0848C95091F9ECB9(iLocal_93, 1, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, 1, 1, 1, 1, 0);
					func_190();
				}
				break;
			}
	}
}

void func_189(int iParam0)
{
	if (!func_479(iLocal_52, iParam0))
	{
		func_471(&iLocal_52, iParam0);
	}
}

void func_190()
{
	int iVar0;
	
	iVar0 = unk_0xE80842D7B53F8525(unk_0x33CD235DF1E6A94E());
	iVar0 = (iVar0 + (1 + iLocal_288));
	if (iVar0 > unk_0x036A6F2CC2A6E4CA(unk_0x33CD235DF1E6A94E()))
	{
		iVar0 = unk_0x036A6F2CC2A6E4CA(unk_0x33CD235DF1E6A94E());
	}
	unk_0x7FC2040EB34E0E31(unk_0x33CD235DF1E6A94E(), iVar0, 0);
	func_191();
}

void func_191()
{
	if (!func_539())
	{
		return;
	}
	if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
	{
		iLocal_57 = unk_0xE80842D7B53F8525(unk_0x33CD235DF1E6A94E());
	}
}

bool func_192(int iParam0)
{
	return (((unk_0x1CE8F0A08E65CA6A(iParam0, func_48(), func_40(11), 3) || unk_0x1CE8F0A08E65CA6A(iParam0, func_48(), func_40(21), 3)) || unk_0x1CE8F0A08E65CA6A(iParam0, func_46(), func_39(11), 3)) || unk_0x1CE8F0A08E65CA6A(iParam0, func_46(), func_39(21), 3));
}

bool func_193()
{
	return unk_0x1CE8F0A08E65CA6A(iLocal_90, func_44(unk_0x33CD235DF1E6A94E(), 0, 0), func_194(iLocal_90, func_43(), 1), 3);
}

char* func_194(int iParam0, bool bParam1, bool bParam2)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "";
	if (!unk_0xD62C4419A41F106A(iParam0, 0))
	{
		iVar1 = unk_0xF2C96862595654B4(iParam0, 1);
		if (unk_0x91D5C8283D19AF49(iVar1, 0))
		{
			if (func_41(iVar1))
			{
				if (bParam1)
				{
					if (bParam2)
					{
						sVar0 = func_40(20);
					}
					else
					{
						sVar0 = func_40(25);
					}
				}
				else if (bParam2)
				{
					sVar0 = func_40(10);
				}
				else
				{
					sVar0 = func_40(15);
				}
			}
			else if (bParam1)
			{
				if (bParam2)
				{
					sVar0 = func_39(20);
				}
				else
				{
					sVar0 = func_39(25);
				}
			}
			else if (bParam2)
			{
				sVar0 = func_39(10);
			}
			else
			{
				sVar0 = func_39(15);
			}
		}
	}
	return sVar0;
}

void func_195()
{
	if (!func_193())
	{
		return;
	}
	if (func_539())
	{
		func_199();
	}
	if (unk_0x8B76D954998C9E96(iLocal_90) || unk_0x8B76D954998C9E96(unk_0x33CD235DF1E6A94E()))
	{
		return;
	}
	if (unk_0x9EC3B269A34A2BEE(0, 5000) > 2500)
	{
		func_196();
	}
}

void func_196()
{
	if (unk_0xBC2FC12AD0FBF72E(iLocal_90))
	{
		return;
	}
	if (!unk_0x8B76D954998C9E96(iLocal_90) && !unk_0x8B76D954998C9E96(unk_0x33CD235DF1E6A94E()))
	{
		if (iLocal_288 == 0)
		{
			func_124("PROSTITUTES_BJ_SPEECH_SCENE");
		}
		if (!func_10(&iLocal_101))
		{
			func_461(&iLocal_101);
		}
		else if (func_7(&iLocal_101) > unk_0x9562E33C057F7589(2f, 5f))
		{
			if (!func_479(iLocal_49, 65536))
			{
				func_471(&iLocal_49, 65536);
				unk_0xAEED0213982928AC(unk_0x33CD235DF1E6A94E(), "SEX_GENERIC", "SPEECH_PARAMS_FORCE_NORMAL_CLEAR", 1);
				func_197(iLocal_289);
			}
			else
			{
				func_5(&iLocal_49, 65536);
				func_34(&iLocal_101);
			}
		}
	}
}

void func_197(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_81("PROSTITUTES_BJ_SPEECH_SCENE");
			if (func_198(unk_0x95B959F18401C09A()))
			{
				unk_0xAEED0213982928AC(iLocal_90, "SEX_ORAL", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			else
			{
				unk_0xAEED0213982928AC(iLocal_90, "SEX_ORAL_FEM", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			break;
		
		case 1:
		case 2:
			if (func_198(unk_0x95B959F18401C09A()))
			{
				unk_0xAEED0213982928AC(iLocal_90, "SEX_GENERIC", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			else
			{
				unk_0xAEED0213982928AC(iLocal_90, "SEX_GENERIC_FEM", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			break;
	}
}

int func_198(int iParam0)
{
	if (!unk_0xB331FCEB94EB05C8())
	{
		return 1;
	}
	return Global_2424047[iParam0 /*416*/].f_230;
}

void func_199()
{
	if (unk_0xBC2FC12AD0FBF72E(iLocal_90))
	{
		return;
	}
	if (func_200(0.4f))
	{
		func_189(4);
	}
	if (func_512(4))
	{
		if (!func_10(&iLocal_104))
		{
			func_461(&iLocal_104);
		}
		else if (func_7(&iLocal_104) > 2f)
		{
			if (!func_512(16) && !func_200(0.4f))
			{
				func_189(16);
				iLocal_59++;
			}
			else if (func_512(16))
			{
				if (!unk_0x8B76D954998C9E96(iLocal_90))
				{
					func_516(4);
					func_516(16);
					func_34(&iLocal_104);
				}
			}
		}
	}
}

int func_200(float fParam0)
{
	float fVar0;
	
	if (func_201(unk_0x95B959F18401C09A(), 1, 1))
	{
		fVar0 = unk_0xF874BDEF39A98F7D(unk_0x95B959F18401C09A());
		if (fVar0 > fParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_201(int iParam0, bool bParam1, bool bParam2)
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

void func_202(bool bParam0, bool bParam1)
{
	if (!func_539())
	{
		return;
	}
	func_174(bParam0, bParam1);
	func_170(bParam0, bParam1);
	func_168(bParam0, bParam1);
	func_159(bParam0, bParam1);
	func_152(bParam0, bParam1);
}

void func_203(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_134(iParam0, func_132(iParam1), 0);
	iVar0++;
	if (!func_205(iParam0))
	{
		func_131(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_204(iParam0, iVar0, iParam1, 1);
	}
}

void func_204(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2539502[iParam0 /*3*/][func_132(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x12B6E23F244DDB0F(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1382642[func_132(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1382648[func_132(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1382654[func_132(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1382660[func_132(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1382618[func_132(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1382624[func_132(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1382630[func_132(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1382636[func_132(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1382594[func_132(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1382600[func_132(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1382606[func_132(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1382612[func_132(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1382666[func_132(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1382672[func_132(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1382678[func_132(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1382684[func_132(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1382690[func_132(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1382696[func_132(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1382702[func_132(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1382708[func_132(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2573513[0 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2573513[1 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2573513[2 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2573513[3 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 8956:
			Global_2573644[func_132(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1382714[func_132(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1382720[func_132(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1382726[func_132(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1382732[func_132(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2573577[0 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2573577[1 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2573577[2 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2573577[3 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2573577[4 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2573647[0 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2573647[1 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2573647[2 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2573647[3 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2573647[4 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2573663[0 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2573663[1 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2573663[2 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2573663[3 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2573663[4 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2573577[5 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2573513[4 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2573679[func_132(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2573688[func_132(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2573682[func_132(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2573691[func_132(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2573685[func_132(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2573694[func_132(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2573697[func_132(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2573577[6 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2573513[5 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2573577[7 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2573513[6 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2573577[8 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2573513[7 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2573577[9 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2573513[8 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2573577[10 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2573513[9 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2573577[11 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2573513[10 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2573577[12 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2573513[11 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2573577[13 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2573513[12 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2573577[14 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2573513[13 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2573577[15 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2573513[14 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2573577[16 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2573513[15 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2573577[17 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2573513[16 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2573513[17 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2573513[18 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2573513[19 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2573513[20 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2573700[func_132(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2573703[func_132(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2573706[func_132(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2573709[func_132(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2573712[func_132(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2573715[func_132(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2573718[func_132(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2573721[func_132(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2573724[func_132(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2573727[func_132(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2573730[func_132(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2573733[func_132(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2573736[func_132(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_205(int iParam0)
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

void func_206(int iParam0)
{
	if (func_210())
	{
		return;
	}
	if (!Global_14553.f_1 == 1)
	{
		if (func_209(0))
		{
			func_207(iParam0);
		}
		unk_0x8950ED5730F62EE8(&Global_2424, 2);
	}
}

void func_207(int iParam0)
{
	if (func_210())
	{
		return;
	}
	if (Global_14725)
	{
		func_208(0, 0);
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
	if (!func_15())
	{
		Global_14553.f_1 = 3;
	}
}

void func_208(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_209(0))
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

int func_209(int iParam0)
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

bool func_210()
{
	return unk_0x0E4018692D92041D(Global_1681628, 19);
}

bool func_211(int iParam0)
{
	bool bVar0;
	
	if (func_539())
	{
		bVar0 = unk_0xDB4C79A9697E6A55(unk_0x3F2F21BCB3761848(iParam0));
	}
	else
	{
		bVar0 = unk_0xDB4C79A9697E6A55(iParam0);
	}
	return bVar0;
}

void func_212()
{
	if (unk_0xBB5E373390A5F824())
	{
		unk_0xACCDA78123DB57B0(1000);
		unk_0xBEADAF07D2339505(unk_0x33CD235DF1E6A94E(), func_214(), 1, false, 0, 1);
		unk_0x3C990C409B3845DE(unk_0x33CD235DF1E6A94E(), func_213());
		func_530();
		unk_0x63F0B040CE6EDF0F(false, false, 3000, 1, 0, 0);
		unk_0x4B8B69DAE5BAC592(&iLocal_90);
	}
}

float func_213()
{
	switch (func_18())
	{
		case 0:
			return 116.6356f;
			break;
		
		case 1:
			return 175.0504f;
			break;
		
		case 2:
			return 299.5673f;
			break;
	}
	return 0f;
}

Vector3 func_214()
{
	switch (func_18())
	{
		case 0:
			return -820.4975f, 176.9618f, 70.6166f;
			break;
		
		case 1:
			return -14.6005f, -1444.624f, 29.6472f;
			break;
		
		case 2:
			return 1979.961f, 3816.018f, 31.3641f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_215()
{
	int iVar0;
	
	if (func_217(&iLocal_98, 3f) && !unk_0x49D25022440E65EE(iLocal_97))
	{
		iVar0 = floor(((func_216() - 2f) * 1000f));
		unk_0x189377BFBDC9127F(iLocal_96, false);
		unk_0x8EB023915CEEDB99(iLocal_97, iLocal_96, iVar0, 1, 1);
	}
	if (func_217(&iLocal_98, func_216()))
	{
		unk_0x7EDEAEAED85BEE4F(1000);
		iLocal_286 = 10;
	}
}

float func_216()
{
	switch (func_18())
	{
		case 0:
			return 10f;
			break;
		
		case 1:
			return 12f;
			break;
		
		case 2:
			return 10f;
			break;
	}
	return 0f;
}

int func_217(int iParam0, float fParam1)
{
	if (func_10(iParam0))
	{
		if (func_7(iParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_218(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x77BABFD1D75AA582(1))
	{
		iVar1 = unk_0x5487531DB7DA4AB5(1, iVar0);
		switch (iVar1)
		{
			case 182:
				func_219(iVar0, uParam0);
				break;
		}
		iVar0++;
	}
}

void func_219(int iParam0, var uParam1)
{
	var uVar0;
	
	if (unk_0x286A5F0670063839(1, iParam0, &uVar0, 11))
	{
		func_220(&uVar0, uParam1);
	}
}

void func_220(var uParam0, var uParam1)
{
	if (unk_0x765F6FEEFF39224F(*uParam0))
	{
		if (unk_0x680558231C80291D(*uParam0))
		{
			if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
			{
				if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
				{
					if (unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0) == unk_0xEAE1362B9F5C7B18(*uParam0))
					{
						func_116(0);
						unk_0xED68CDDDE25A144E(unk_0x33CD235DF1E6A94E());
						func_530();
						func_524(uParam1);
					}
				}
			}
		}
	}
}

void func_221(var uParam0)
{
	int iVar0;
	
	if (!func_539())
	{
		return;
	}
	if (unk_0x765F6FEEFF39224F(iLocal_90))
	{
		if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
		{
			iVar0 = unk_0xE80842D7B53F8525(iLocal_90);
			if ((iVar0 - iLocal_58) < 0)
			{
				func_116(0);
				unk_0xED68CDDDE25A144E(unk_0x33CD235DF1E6A94E());
				func_530();
				func_524(uParam0);
			}
		}
	}
}

void func_222(var uParam0)
{
	int iVar0;
	
	if (!func_539())
	{
		return;
	}
	if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
	{
		if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
		{
			iVar0 = unk_0xE80842D7B53F8525(unk_0x33CD235DF1E6A94E());
			if ((iVar0 - iLocal_57) < 0)
			{
				func_116(0);
				unk_0xED68CDDDE25A144E(unk_0x33CD235DF1E6A94E());
				func_530();
				func_524(uParam0);
			}
		}
	}
}

void func_223(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	
	if (!func_539())
	{
		return;
	}
	if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
	{
		if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
		{
			iVar0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
			if (unk_0x765F6FEEFF39224F(iVar0))
			{
				vVar1 = { unk_0xFBB1F99A825CAB09(iVar0, true) };
				if (vdist2(vLocal_56, vVar1) >= 4f)
				{
					func_116(0);
					unk_0xED68CDDDE25A144E(unk_0x33CD235DF1E6A94E());
					func_530();
					func_524(uParam0);
				}
			}
		}
	}
}

void func_224()
{
	int iVar0;
	char* sVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	
	if (!func_479(iLocal_49, 16))
	{
		if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
		{
			unk_0xC035E897EDDE5AFA(unk_0x95B959F18401C09A(), 0);
		}
		func_471(&iLocal_49, 16);
	}
	if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		iLocal_93 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
		if (func_539())
		{
			if (unk_0x0A81FE3D92AE2AC9(iLocal_93))
			{
				unk_0x2EE596932F00971D(iLocal_93, true);
				unk_0x26E0FFDB1AD22AC5(iLocal_93, 4);
				unk_0x3F99D2373794B210(iLocal_93, 1);
				unk_0x1C2B995BA5ADE8FF(iLocal_93, false, 0);
			}
		}
		else
		{
			unk_0x2EE596932F00971D(iLocal_93, true);
			unk_0x26E0FFDB1AD22AC5(iLocal_93, 4);
			unk_0x3F99D2373794B210(iLocal_93, 1);
		}
		if (!func_369() || !unk_0x10930B9CAD4111C2(iLocal_90, iLocal_93, 0))
		{
			func_462(0);
			return;
		}
	}
	else
	{
		func_462(0);
		return;
	}
	func_206(0);
	if ((!unk_0x61DFE32FB87BC784(iLocal_93) && unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A())) && !func_479(iLocal_49, 1024))
	{
		iLocal_286 = 7;
		func_367(1, -1);
		unk_0x3C05A6D663EA1B6A("SCRIPT\HUD_321_GO", true, -1);
		iLocal_292 = 0;
		func_480("WAITING FOR VEHICLE TO STOP ");
		return;
	}
	iVar0 = 0;
	unk_0x581AE7724ACAD410(2);
	switch (iLocal_292)
	{
		case 0:
		case 1:
			if (func_539())
			{
				if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
				{
					if (unk_0x765F6FEEFF39224F(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0)))
					{
						if (unk_0x0371ECBEC27AF4BE(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0)))
						{
							if (unk_0x7BDC41A7CA0C77A2(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), -1, 0) == unk_0x33CD235DF1E6A94E())
							{
								if (unk_0x0A81FE3D92AE2AC9(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0)))
								{
									if (!unk_0x5A04E3BD0B5E7E49(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0)))
									{
										unk_0x0D21E1FDE062ED99(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), false, 0);
									}
								}
								else
								{
									unk_0xA5F44EC021F96C6B(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0));
									return;
								}
							}
						}
						else
						{
							unk_0xBBDD9A94445CAF1F(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0));
							return;
						}
					}
				}
			}
			func_366();
			func_365();
			func_191();
			if (func_362())
			{
				func_124("PROSTITUTES_DRIVE_SCENE");
				func_81("PROSTITUTES_PARKED_SCENE");
				func_361();
				if (func_539())
				{
					func_189(2);
					if (func_539())
					{
						if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
						{
							if (unk_0x0371ECBEC27AF4BE(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0)))
							{
								if (unk_0x0A81FE3D92AE2AC9(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0)))
								{
									unk_0x9D933DC08CBBEC60(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), 1);
									unk_0xD303E20CB0AE4AD0(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), 4);
									unk_0x0EF4CE307751DE06(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), 1);
								}
							}
						}
					}
				}
				unk_0x42E0C09F4BDF7390(iLocal_90);
				iLocal_292 = 2;
			}
			break;
		
		case 2:
			if (func_360(iLocal_295))
			{
				func_359(&iLocal_295);
				func_5(&iLocal_73, 2);
			}
			func_357(iLocal_90, 0);
			if (func_357(unk_0x33CD235DF1E6A94E(), 1))
			{
				if (func_355(&sVar1, 0))
				{
					iLocal_48 = unk_0x8ACF6D19519697BD();
					iVar2 = unk_0xB813DCBD5002BC42();
					if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
					{
						if (iVar2 != 4 && iLocal_48 == 4)
						{
							unk_0xC4C7F808F6388EAE(4);
						}
						else if (iVar2 == 4 && iLocal_48 != 4)
						{
							unk_0xC4C7F808F6388EAE(1);
						}
					}
					func_343();
					iLocal_292 = 3;
					func_480("Moving to SERVICE_MENU_CHOOSE");
				}
				else
				{
					func_342(&sVar1, -1);
					func_34(&iLocal_107);
					iLocal_288 = 3;
					iLocal_292 = 4;
				}
			}
			break;
		
		case 3:
			if (unk_0xD9C92B0885A075F8())
			{
				return;
			}
			unk_0x053D0FFB5907F46F(3);
			func_323();
			func_288(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
			func_287(&uVar3, &iVar4, &uVar5, &uVar6, 0);
			unk_0x3FD9339AA95E323F(0, 48, 1);
			unk_0x144904D2EAA84341(2, 187);
			unk_0x144904D2EAA84341(2, 188);
			unk_0x144904D2EAA84341(2, 201);
			iVar0 = 0;
			if (unk_0x4CE1DD5CFC1F941E())
			{
				if (unk_0x33CAB544FAAE661D(2))
				{
					unk_0x3FD9339AA95E323F(0, 1, 1);
					unk_0x3FD9339AA95E323F(0, 2, 1);
					unk_0xAE4810E427AD9203(0, 237, 1);
					unk_0xAE4810E427AD9203(0, 238, 1);
					unk_0xAE4810E427AD9203(0, 241, 1);
					unk_0xAE4810E427AD9203(0, 242, 1);
					func_283(0, 0, 0, 1);
					func_282(0, -1, 1);
					if (func_281())
					{
						if (Global_4268040 != iLocal_68)
						{
							unk_0x0F8EAEEC97DDBCB3(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
							iLocal_68 = Global_4268040;
							func_480("Player highlighted a new option using the mouse!");
						}
						else
						{
							iVar0 = 1;
						}
					}
				}
			}
			if (((unk_0x833B1A3D9F713E03(2, 187) || (unk_0x5D79F3D06EB318A0(2) && unk_0x833B1A3D9F713E03(2, 242))) || (unk_0x5D79F3D06EB318A0(2) && unk_0x5EBE50D55314CEAD(0, 33))) || (((unk_0x4CE1DD5CFC1F941E() && !unk_0x5D79F3D06EB318A0(2)) && iVar4 > 100) && (unk_0xE3903F59E2F22150() - iLocal_87) > 300))
			{
				unk_0x0F8EAEEC97DDBCB3(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				func_480("DOWN pressed!");
				if (iLocal_68 < iLocal_69)
				{
					iLocal_68++;
				}
				else
				{
					iLocal_68 = 0;
				}
				iLocal_87 = unk_0xE3903F59E2F22150();
			}
			else if (((unk_0x833B1A3D9F713E03(2, 188) || (unk_0x5D79F3D06EB318A0(2) && unk_0x833B1A3D9F713E03(2, 241))) || (unk_0x5D79F3D06EB318A0(2) && unk_0x5EBE50D55314CEAD(0, 32))) || (((unk_0x4CE1DD5CFC1F941E() && !unk_0x5D79F3D06EB318A0(2)) && iVar4 < -100) && (unk_0xE3903F59E2F22150() - iLocal_87) > 300))
			{
				unk_0x0F8EAEEC97DDBCB3(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				func_480("UP pressed!");
				if (iLocal_68 > 0)
				{
					iLocal_68 = (iLocal_68 - 1);
				}
				else
				{
					iLocal_68 = iLocal_69;
				}
				iLocal_87 = unk_0xE3903F59E2F22150();
			}
			else if (unk_0x1771F6BAF60B44FA(2, 201) || iVar0 == 1)
			{
				unk_0x0F8EAEEC97DDBCB3(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				unk_0x581AE7724ACAD410(3);
				func_277();
				unk_0x0D847D71D9E6142E(unk_0x33CD235DF1E6A94E());
				iLocal_292 = 4;
			}
			func_276(iLocal_68, 1, 1);
			break;
		
		case 4:
			iVar7 = unk_0xC69F0E93D95E37FC(iLocal_90);
			if (iLocal_288 == 3)
			{
				func_367(1, -1);
				func_275();
				func_274(0);
				iLocal_62 = unk_0xE3903F59E2F22150();
				func_124("PROSTITUTES_PARKED_SCENE");
				func_480("eCurrentProstituteState = prostitute_REFUSED ");
				iLocal_286 = 6;
				if (iLocal_70 > 0)
				{
					if (func_120(iLocal_90))
					{
						func_119();
					}
					else
					{
						func_462(0);
					}
					return;
				}
				else
				{
					if (func_269() >= 20)
					{
						iVar7 += 20;
						func_226(20);
						unk_0xF8E07C228A90E953(iLocal_90, iVar7);
					}
					func_462(1);
					return;
				}
			}
			if (!unk_0xE9CCF312047EBEE0(func_44(unk_0x33CD235DF1E6A94E(), 0, 0)))
			{
			}
			else
			{
				func_367(1, -1);
				func_275();
				if (unk_0x0CD5A71947543EBC())
				{
					func_471(&iLocal_49, 1024);
					iLocal_288 = 3;
					func_480("AUSSIE VERSION IS TRUE!?!?!");
				}
				if (iLocal_288 != 3)
				{
					if (func_269() > func_225(iLocal_288))
					{
						func_226(func_225(iLocal_288));
						iVar7 = (iVar7 + func_225(iLocal_288));
					}
					func_35(&iLocal_101, (14f - 4f));
					func_480("eCurrentProstituteState = PROSTITUTE_CUSTOMER_GETTING_SERVICED ");
					func_121();
					iLocal_286 = 11;
				}
				unk_0xF8E07C228A90E953(iLocal_90, iVar7);
				iLocal_62 = unk_0xE3903F59E2F22150();
			}
			break;
	}
}

int func_225(int iParam0)
{
	if (unk_0x0CD5A71947543EBC())
	{
		if (iParam0 == 0)
		{
			return 70;
		}
		else if (iParam0 == 1)
		{
			return 70;
		}
		else if (iParam0 == 2)
		{
			return 70;
		}
		else
		{
			return 0;
		}
	}
	if (iParam0 == 0)
	{
		return 50;
	}
	if (iParam0 == 1)
	{
		return 70;
	}
	if (iParam0 == 2)
	{
		return 100;
	}
	return 0;
}

void func_226(int iParam0)
{
	var uVar0;
	
	if (!func_539())
	{
		func_240(func_18(), 1, iParam0);
	}
	else if (!func_239())
	{
		unk_0x86F9094D3DA3E3AA(iParam0, 0, 0);
	}
	else
	{
		func_227(-1359375127, iParam0, &uVar0, 0, 0, 0);
	}
}

void func_227(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_239())
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
				func_228(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_228(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
			if (iParam1 > 0)
			{
				func_228(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -1693570755:
			func_228(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_228(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_228(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_239())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0xB412AA3DEE298A52(func_133()) || unk_0x2832F5CD8A109CD6())
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
			*uParam0 = func_235(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_234(1, iParam4);
			Global_4264084 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_229(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_229(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x8950ED5730F62EE8(&(Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_230(iParam0);
	}
}

void func_230(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_239())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_233(iParam0))
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
		func_231(&(Global_4263509[iParam0 /*84*/]));
	}
}

void func_231(var uParam0)
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
	func_232(&(uParam0->f_13));
	func_232(&(uParam0->f_13.f_13));
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

void func_232(var uParam0)
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

int func_233(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263509[iParam0 /*84*/].f_65.f_5 == 1;
	}
	return 0;
}

void func_234(int iParam0, int iParam1)
{
	Global_2460949 = iParam1;
	Global_2460948 = iParam0;
}

int func_235(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263509[iVar0 /*84*/].f_65.f_2 == 0)
		{
			if (!func_239())
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
				func_236(Global_4263509[iVar0 /*84*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_236(struct<66> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_238(vVar0.y);
	if ((Global_262145.f_23434 && !Global_262145.f_23435) && !Global_262145.f_23436)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_237();
		unk_0x09269A9CFC145847(1, &vVar0, 35, iVar1);
	}
}

void func_237()
{
	unk_0x8F59DE352CFE248B("AM_ARENA_SHP");
}

var func_238(int iParam0)
{
	var uVar0;
	
	unk_0x8950ED5730F62EE8(&uVar0, iParam0);
	return uVar0;
}

int func_239()
{
	if (unk_0x4CE1DD5CFC1F941E())
	{
		return unk_0xFCAD2CB678396284();
	}
	return 0;
}

int func_240(int iParam0, int iParam1, int iParam2)
{
	if (Global_106565.f_28044[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_106565.f_28044[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_241(Global_106565.f_28044[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_241(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_268();
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
					func_267(99, 1);
					func_266(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_266(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_266(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_252(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_248(5))
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
							func_266(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_266(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_266(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_248(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_266(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_266(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_266(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_266(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_266(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_266(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_266(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_266(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_266(joaat("sp2_money_spent_property"), iParam3);
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
									func_266(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_266(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_266(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_266(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_266(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_266(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_248(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_266(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_266(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_266(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_266(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_266(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_266(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_247(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_267(95, iParam3);
					break;
				
				case 1:
					func_267(97, iParam3);
					break;
				
				case 2:
					func_267(96, iParam3);
					break;
			}
			func_267(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor((fVar0 * to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_244(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_244(iVar1);
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
					func_266(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_266(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_266(joaat("sp2_total_cash_earned"), iParam3);
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
	func_243(iParam0);
	if (Global_36425 == 15)
	{
		func_242(0);
	}
	return 1;
}

void func_242(bool bParam0)
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

void func_243(int iParam0)
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

void func_244(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_148(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_148(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_148(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_148(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_131(8269, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_131(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_131(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_131(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_131(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_131(8274, 0, -1, 1, 0);
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
	else if (unk_0x0E4018692D92041D(Global_106565.f_20558.f_471, iParam0) || unk_0x0E4018692D92041D(Global_2097152[func_246() /*10778*/].f_6165.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xCE689A8E8C42ED78(&(Global_106565.f_20558.f_471), iParam0);
		unk_0xCE689A8E8C42ED78(&(Global_2097152[func_246() /*10778*/].f_6165.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x1F85AD4B26B92795("COUP_RED");
		unk_0xFA6BEE2B1507FF1E(func_245(iParam0));
		unk_0xDE1BA36E3BACF7C1(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_245(int iParam0)
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

int func_246()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_247(int iParam0)
{
	func_267(93, iParam0);
	func_267(29, iParam0);
	func_267(30, iParam0);
}

bool func_248(int iParam0)
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
		return func_249(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_249(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_249(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_249(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0xEF4753434B24594D();
		iVar1 = func_134(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0xEF4753434B24594D();
		iVar3 = func_134(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0xEF4753434B24594D();
		iVar5 = func_134(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0xEF4753434B24594D();
		iVar7 = func_134(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0xEF4753434B24594D();
		iVar9 = func_134(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0xEF4753434B24594D();
		iVar11 = func_134(8274, -1, 0);
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
	return unk_0x0E4018692D92041D(Global_2097152[func_246() /*10778*/].f_6165.f_10, iParam0);
}

int func_249(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_133();
	}
	iVar1 = func_251(iParam0, iParam1);
	uVar2 = func_250(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xE35D1055B69473FB(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_250(int iParam0)
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

int func_251(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_133();
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

int func_252(bool bParam0)
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
		func_147(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_253(27, 1);
	return 1;
}

int func_253(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_254(iParam0, iParam1);
}

int func_254(int iParam0, int iParam1)
{
	if (func_540(14) && !func_265(iParam0))
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
	if (func_264(&Global_4269608))
	{
		if (func_262(&Global_4269608, iParam0))
		{
			return 0;
		}
		if (func_255(&Global_4269608, iParam0))
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

int func_255(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x321808B6A32CCA20(iParam1))
	{
		return 0;
	}
	if (func_540(14) && !func_265(iParam1))
	{
		return 0;
	}
	if (func_262(uParam0, iParam1))
	{
		return 0;
	}
	if (func_261(uParam0) < 0f)
	{
		func_260(uParam0, 0);
	}
	func_258(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_256(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_256(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x321808B6A32CCA20(iParam1))
	{
		return 0;
	}
	if (func_540(14) && !func_265(iParam1))
	{
		return 0;
	}
	if (func_262(uParam0, iParam1))
	{
		return 0;
	}
	if (func_261(uParam0) < 0f)
	{
		func_260(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_257(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_257(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_258(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_259(uParam0, iVar0);
		iVar0++;
	}
	func_260(uParam0, (Global_4269607 - 0.5f));
}

void func_259(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_260(var uParam0, float fParam1)
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

float func_261(var uParam0)
{
	return uParam0->f_80;
}

bool func_262(var uParam0, int iParam1)
{
	return func_263(uParam0, iParam1) != -1;
}

int func_263(var uParam0, int iParam1)
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

bool func_264(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_265(int iParam0)
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

void func_266(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x75D54ED6C1AD1642(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x12B6E23F244DDB0F(iParam0, iVar0, 1);
}

void func_267(int iParam0, int iParam1)
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

void func_268()
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

int func_269()
{
	if (func_539())
	{
		return func_271(unk_0x95B959F18401C09A());
	}
	return func_270(func_18());
}

int func_270(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0x75D54ED6C1AD1642(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0x75D54ED6C1AD1642(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0x75D54ED6C1AD1642(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

var func_271(int iParam0)
{
	var uVar0;
	
	uVar0 = func_272(iParam0);
	return uVar0;
}

int func_272(int iParam0)
{
	if (iParam0 > -1)
	{
		if (iParam0 == unk_0x95B959F18401C09A())
		{
			return unk_0xF69DA3FD5AA96104(-1);
		}
		else if (func_273(iParam0))
		{
			return Global_1589819[iParam0 /*818*/].f_211.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_273(int iParam0)
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

void func_274(int iParam0)
{
	if (unk_0xDDB55BEB9D76717D() != 255)
	{
		unk_0x142AAC5AAD123183(iParam0);
		unk_0xE714E221A68AF770(iParam0);
	}
}

void func_275()
{
	Global_17272.f_5 = 0;
}

void func_276(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_17411.f_5739 = iParam0;
	Global_17411.f_5874 = iParam2;
	if (Global_17411.f_5739 < Global_17411.f_5738)
	{
		Global_17411.f_5738 = Global_17411.f_5739;
	}
	else if ((Global_17411.f_5729 && Global_17411.f_5739 > Global_17411.f_5740) || (!Global_17411.f_5729 && Global_17411.f_5739 >= (Global_17411.f_5738 + Global_17411.f_5225)))
	{
		iVar0 = Global_17411.f_5738;
		while (iVar0 <= Global_17411.f_5739)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_17411.f_5089[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_17411.f_5225 && Global_17411.f_5738 < 128)
		{
			Global_17411.f_5738++;
			iVar1 = 0;
			iVar0 = Global_17411.f_5738;
			while (iVar0 <= Global_17411.f_5739)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_17411.f_5089[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_17411.f_5728 = 0;
	Global_17411.f_5729 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_17411.f_4690), "", 24);
		StringCopy(&(Global_4267964.f_21), "", 16);
	}
}

void func_277()
{
	if (iLocal_68 == iLocal_69)
	{
		iLocal_288 = 3;
	}
	else
	{
		iLocal_289 = iLocal_283[iLocal_68];
		func_278();
		if (iLocal_289 == 0)
		{
			func_81("PROSTITUTES_BJ_SCENE");
			unk_0x3C05A6D663EA1B6A("PROSTITUTE_BLOWJOB", false, -1);
			iLocal_288 = 0;
		}
		else if (iLocal_289 == 1)
		{
			func_81("PROSTITUTES_SEX_SCENE");
			iLocal_288 = 1;
		}
		else if (iLocal_289 == 2)
		{
			func_81("PROSTITUTES_SEX_SCENE");
			iLocal_288 = 2;
		}
	}
}

void func_278()
{
	switch (iLocal_289)
	{
		case 0:
			func_280();
			break;
		
		case 1:
		case 2:
			func_279();
			break;
	}
}

void func_279()
{
	iLocal_46++;
	iLocal_47 = 1;
}

void func_280()
{
	iLocal_45++;
	iLocal_47 = 1;
}

int func_281()
{
	if (unk_0x5D79F3D06EB318A0(2))
	{
		if (Global_4268040 > -1)
		{
			if (unk_0x833B1A3D9F713E03(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_282(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0x5D79F3D06EB318A0(2))
	{
		return 0;
	}
	if (unk_0xD9C92B0885A075F8() || unk_0x15C85368E432C647())
	{
		return 0;
	}
	if (bParam2)
	{
		unk_0x0817B4F2C156A62D();
	}
	if (Global_4268040 == -6)
	{
		unk_0x2C02423528813544(4);
		if (iParam0 && unk_0xF1CDE9FD207C4CD8(2, 237))
		{
			return 1;
		}
		else
		{
			Global_4268040 = -1;
			return 0;
		}
	}
	if (((Global_4268040 > -1 || Global_4268040 == -3) || Global_4268040 == -2) || unk_0x7B37FD322F4D4188())
	{
		unk_0x2C02423528813544(1);
		return 0;
	}
	if (Global_4268040 == -1 && iParam0)
	{
		if (unk_0xF1CDE9FD207C4CD8(2, 237))
		{
			unk_0x2C02423528813544(4);
			Global_4268040 = -6;
			return 1;
		}
		else
		{
			unk_0x2C02423528813544(3);
			return 0;
		}
	}
	unk_0x2C02423528813544(1);
	return 0;
}

void func_283(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0.034722f / 2f);
	iVar13 = -1;
	if (!unk_0x5D79F3D06EB318A0(2))
	{
		Global_4268040 = -1;
		return;
	}
	unk_0xDF7C6E5DFD633758(1);
	fVar0 = Global_17408;
	fVar2 = (fVar0 + Global_17410);
	fVar3 = Global_17411.f_5730;
	fVar1 = (Global_17411.f_5730 - (IntToFloat(Global_17411.f_5732) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_17411.f_5732 < 1)
	{
		fVar1 = (Global_17411.f_5730 - 0.034722f);
	}
	unk_0x1382AC429D0EA2BB(76, 84);
	unk_0x04602263DC4A45E9(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0xDF73B9B8F283BB7B(fVar0, fVar1, &fVar0, &fVar1);
	unk_0xDF73B9B8F283BB7B(fVar2, fVar3, &fVar2, &fVar3);
	unk_0x94A8B1D385430451();
	func_286();
	if (Global_4268040 == -6)
	{
		return;
	}
	Global_4268040 = -1;
	fVar7 = Global_4268034;
	fVar8 = Global_4268035;
	if (Global_17411.f_5733 > Global_17411.f_5732)
	{
		if (((Global_4268034 >= fVar0 && Global_4268034 <= fVar2) && Global_4268035 >= fVar3) && Global_4268035 < (fVar3 + fVar6))
		{
			Global_4268040 = -2;
			if (bParam3)
			{
				func_285(0);
			}
			return;
		}
		if (((Global_4268034 >= fVar0 && Global_4268034 <= fVar2) && Global_4268035 >= (fVar3 + fVar6)) && Global_4268035 < (fVar3 + 0.034722f))
		{
			Global_4268040 = -3;
			if (bParam3)
			{
				func_285(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = floor((fVar9 / 0.034722f));
		if (Global_17411.f_5733 == -1)
		{
			Global_4268040 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_17411.f_5732);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				unk_0x1382AC429D0EA2BB(76, 84);
				unk_0x04602263DC4A45E9(-0.05f, -0.05f, 0f, 0f);
				func_284(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_17410, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				unk_0x94A8B1D385430451();
			}
		}
		Global_4268040 = Global_17411.f_7974[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4268040 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_4268040 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_4268040 = -4;
		return;
	}
	Global_4268040 = -1;
}

void func_284(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0x5263FF82360FF7E2((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

void func_285(bool bParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_17408;
	fVar1 = Global_17411.f_5730;
	unk_0x1382AC429D0EA2BB(76, 84);
	unk_0x04602263DC4A45E9(-0.05f, -0.05f, 0f, 0f);
	if (Global_4268040 == -2)
	{
		func_284(fVar0, fVar1, Global_17410, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4268040 == -3)
	{
		func_284(fVar0, (fVar1 + fVar2), Global_17410, fVar2, 255, 255, 255, iVar3);
	}
	unk_0x94A8B1D385430451();
}

void func_286()
{
	Global_4268036 = Global_4268034;
	Global_4268037 = Global_4268035;
	Global_4268034 = unk_0x2D0598FBFD4D8A23(2, 239);
	Global_4268035 = unk_0x2D0598FBFD4D8A23(2, 240);
	Global_4268038 = (Global_4268034 - Global_4268036);
	Global_4268039 = (Global_4268035 - Global_4268037);
}

void func_287(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = floor((unk_0xAFD26C4E558D823B(2, 218) * 127f));
	*uParam1 = floor((unk_0xAFD26C4E558D823B(2, 219) * 127f));
	*uParam2 = floor((unk_0xAFD26C4E558D823B(2, 220) * 127f));
	*uParam3 = floor((unk_0xAFD26C4E558D823B(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = floor((unk_0x2D0598FBFD4D8A23(2, 218) * 127f));
			*uParam1 = floor((unk_0x2D0598FBFD4D8A23(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = floor((unk_0x2D0598FBFD4D8A23(2, 220) * 127f));
			*uParam3 = floor((unk_0x2D0598FBFD4D8A23(2, 221) * 127f));
		}
	}
}

void func_288(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
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
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	vector3 vVar38;
	bool bVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	float fVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	bool bVar53;
	float fVar54;
	float fVar55;
	float fVar56;
	float fVar57;
	int iVar58;
	int iVar59;
	float fVar60;
	float fVar61;
	float fVar62;
	char cVar63[64];
	char cVar64[64];
	float fVar65;
	int iVar66;
	float fVar67;
	float fVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	char cVar75[16];
	float fVar76;
	float fVar77;
	float fVar78;
	float fVar79;
	float fVar80;
	
	if (!func_322(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_320(0, bParam6))
	{
		return;
	}
	unk_0x1382AC429D0EA2BB(76, 84);
	unk_0x04602263DC4A45E9(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	fVar56 = 0f;
	if (Global_17411)
	{
		if (func_318(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar55 = fVar37;
			fVar56 = fVar36;
			fVar55 = (fVar55 + 0f);
		}
		else
		{
			Global_17411 = 0;
		}
	}
	if (unk_0x36163153849DFDA1(&(Global_17411.f_1)) == unk_0x36163153849DFDA1("HIDE"))
	{
		fVar57 = Global_17409;
	}
	else
	{
		fVar57 = (((Global_17409 + fVar55) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_17410;
	}
	fVar60 = 1f;
	if (bParam7)
	{
		unk_0x3A5E614EC752B188(&iVar58, &iVar59);
		fVar61 = unk_0x63151314B8B4D6EB(0);
		if (func_317())
		{
			iVar58 = round((to_float(iVar59) * fVar61));
		}
		fVar62 = (to_float(iVar58) / to_float(iVar59));
		fVar60 = (fVar62 / fVar61);
		if (func_317())
		{
			fVar60 = 1f;
		}
		iVar58 = round((to_float(iVar58) / fVar60));
		iVar59 = round((to_float(iVar59) / fVar60));
	}
	else
	{
		unk_0x6521432F7BEAC16C(&iVar58, &iVar59);
	}
	if (bParam3)
	{
		if (Global_17411.f_5218 <= 1)
		{
			func_313(Global_17411.f_5218 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0);
			Global_17411.f_6014 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_17411.f_5728)
		{
			if (unk_0x36163153849DFDA1(&(Global_17411.f_1)) == unk_0x36163153849DFDA1("HIDE"))
			{
				fVar49 = Global_17409;
			}
			else
			{
				if (Global_17411)
				{
					StringCopy(&cVar63, func_312(29), 64);
					StringCopy(&cVar64, func_309(29, 1), 64);
					if (unk_0x36163153849DFDA1(&(Global_17411.f_6997[29 /*16*/])) == -1487683087)
					{
						func_284(Global_17408, Global_17409, fParam5, (fVar55 - 0f), 0, 0, 0, 255);
						unk_0x281206A3ED9B7B48(&cVar63, &cVar64, (Global_17408 + (fParam5 * 0.5f)), (Global_17409 + ((fVar55 - 0f) * 0.5f)), fVar56, (fVar55 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0x281206A3ED9B7B48(&cVar63, &cVar64, (Global_17408 + (fParam5 * 0.5f)), (Global_17409 + ((fVar55 - 0f) * 0.5f)), fParam5, (fVar55 - 0f), 0f, 255, 255, 255, 255, 0);
					}
				}
				if (Global_17411.f_8323)
				{
					iVar1 = Global_17411.f_8319;
					iVar2 = Global_17411.f_8320;
					iVar3 = Global_17411.f_8321;
					iVar4 = Global_17411.f_8322;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_284(Global_17408, (Global_17409 + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_17409 + fVar55) + 0.034722f) + 0f);
				if (unk_0x36163153849DFDA1(&(Global_17411.f_1)) != 0)
				{
					func_308();
					unk_0xAA70163B3B48EEE4(&(Global_17411.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17411.f_68)
					{
						if (Global_17411.f_5[iVar14] == 2)
						{
							unk_0xE800DC85FDF60F85(Global_17411.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17411.f_5[iVar14] == 3)
						{
							unk_0x974BEF45D557B847(Global_17411.f_14[iVar16], Global_17411.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17411.f_5[iVar14] == 1)
						{
							unk_0xFA6BEE2B1507FF1E(&(Global_17411.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17411.f_5[iVar14] == 8)
						{
							unk_0xFA6BEE2B1507FF1E(&(Global_17411.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17411.f_5[iVar14] == 5)
						{
							unk_0xD61E5ED1D4E687A5(&(Global_17411.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17411.f_5[iVar14] == 6)
						{
							unk_0xFA6BEE2B1507FF1E(&(Global_17411.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17411.f_5[iVar14] == 7)
						{
							unk_0xD61E5ED1D4E687A5(&(Global_17411.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17411.f_5[iVar14] == 9)
						{
							unk_0xD61E5ED1D4E687A5(&(Global_17411.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14 = (iVar14 + 1);
					}
					unk_0xCCA49CAF391D1A15((Global_17408 + 0.00390625f), ((Global_17409 + fVar55) + 0.00416664f), 0);
				}
				if (Global_17411.f_5735)
				{
					func_308();
					func_306((((Global_17408 + fParam5) - 0.00390625f) - func_307("CM_ITEM_COUNT", Global_17411.f_5736, Global_17411.f_5737)), ((Global_17409 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_17411.f_5736, Global_17411.f_5737);
				}
				else if (Global_17411.f_5731 > Global_17411.f_5225)
				{
					if (Global_17411.f_5734 != 0)
					{
						func_308();
						func_306((((Global_17408 + fParam5) - 0.00390625f) - func_307("CM_ITEM_COUNT", Global_17411.f_5734, Global_17411.f_5733)), ((Global_17409 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_17411.f_5734, Global_17411.f_5733);
					}
				}
			}
			iVar6 = Global_17411.f_5738;
			iVar9 = 0;
			fVar65 = fVar49;
			if (Global_17411.f_8333)
			{
				iVar1 = Global_17411.f_8329;
				iVar2 = Global_17411.f_8330;
				iVar3 = Global_17411.f_8331;
				iVar4 = Global_17411.f_8332;
			}
			else
			{
				unk_0x1256E5EA03020804(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_17411.f_5225 && iVar6 <= Global_17411.f_5218)
			{
				if (iVar6 >= 0)
				{
					if (Global_17411.f_5485[iVar6])
					{
						if (Global_17411.f_5356[iVar6] && iVar6 != Global_17411.f_5738)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar54 = 0.034722f;
						if (Global_17411.f_5745[iVar6] != 0f)
						{
							fVar54 = Global_17411.f_5745[iVar6];
						}
						fVar49 = (fVar49 + fVar54);
						iVar9++;
					}
				}
				iVar6++;
			}
			unk_0x281206A3ED9B7B48("CommonMenu", "Gradient_Bgd", (Global_17408 + (fParam5 * 0.5f)), ((fVar65 + ((fVar49 - fVar65) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar65), 0f, 255, 255, 255, 255, 0);
			if (Global_17411.f_5731 > Global_17411.f_5225)
			{
				if (Global_17411.f_8338)
				{
					iVar1 = Global_17411.f_8334;
					iVar2 = Global_17411.f_8335;
					iVar3 = Global_17411.f_8336;
					iVar4 = Global_17411.f_8337;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_284(Global_17408, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				vVar38 = { unk_0x5B78EE936879124F("CommonMenu", "shop_arrows_upANDdown") };
				vVar38.x = (vVar38.x * (0.5f / fVar60));
				vVar38.y = (vVar38.y * (0.5f / fVar60));
				if (Global_17411.f_8351)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0x1256E5EA03020804(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x281206A3ED9B7B48("CommonMenu", "shop_arrows_upANDdown", (Global_17408 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((vVar38.x / 1280f) * fVar60), ((vVar38.y / 720f) * fVar60), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (unk_0x36163153849DFDA1(&(Global_17411.f_4690)) != 0 && Global_17411.f_4766 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_17408 + 0.0046875f);
				if (Global_17411.f_4768 != 0)
				{
					func_318(Global_17411.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_17408 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_305(fVar40);
				unk_0x611EA72F39AAD0DD(&(Global_17411.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17411.f_4762)
				{
					if (Global_17411.f_4696[iVar14] == 2)
					{
						unk_0xE800DC85FDF60F85(Global_17411.f_4701[iVar15]);
						iVar15++;
					}
					else if (Global_17411.f_4696[iVar14] == 3)
					{
						unk_0x974BEF45D557B847(Global_17411.f_4705[iVar16], Global_17411.f_4709[iVar16]);
						iVar16++;
					}
					else if (Global_17411.f_4696[iVar14] == 1)
					{
						unk_0xFA6BEE2B1507FF1E(&(Global_17411.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17411.f_4696[iVar14] == 5)
					{
						unk_0xD61E5ED1D4E687A5(&(Global_17411.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17411.f_4696[iVar14] == 6)
					{
						unk_0xFA6BEE2B1507FF1E(&(Global_17411.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17411.f_4696[iVar14] == 7)
					{
						unk_0xD61E5ED1D4E687A5(&(Global_17411.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17411.f_4696[iVar14] == 9)
					{
						unk_0xD61E5ED1D4E687A5(&(Global_17411.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x767F5E4858E200EB(fVar40, (fVar49 + 0.00277776f));
				unk_0x1256E5EA03020804(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_284(Global_17408, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17411.f_8343)
				{
					iVar1 = Global_17411.f_8339;
					iVar2 = Global_17411.f_8340;
					iVar3 = Global_17411.f_8341;
					iVar4 = Global_17411.f_8342;
				}
				else
				{
					unk_0x1256E5EA03020804(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x281206A3ED9B7B48("CommonMenu", "Gradient_Bgd", (Global_17408 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x6486D2A6F2DC8DCB(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x6486D2A6F2DC8DCB(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_305(fVar40);
				unk_0xAA70163B3B48EEE4(&(Global_17411.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17411.f_4762)
				{
					if (Global_17411.f_4696[iVar14] == 2)
					{
						unk_0xE800DC85FDF60F85(Global_17411.f_4701[iVar15]);
						iVar15++;
					}
					else if (Global_17411.f_4696[iVar14] == 3)
					{
						unk_0x974BEF45D557B847(Global_17411.f_4705[iVar16], Global_17411.f_4709[iVar16]);
						iVar16++;
					}
					else if (Global_17411.f_4696[iVar14] == 1)
					{
						unk_0xFA6BEE2B1507FF1E(&(Global_17411.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17411.f_4696[iVar14] == 5)
					{
						unk_0xD61E5ED1D4E687A5(&(Global_17411.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17411.f_4696[iVar14] == 6)
					{
						unk_0xFA6BEE2B1507FF1E(&(Global_17411.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17411.f_4696[iVar14] == 7)
					{
						unk_0xD61E5ED1D4E687A5(&(Global_17411.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17411.f_4696[iVar14] == 9)
					{
						unk_0xD61E5ED1D4E687A5(&(Global_17411.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17411.f_4696[iVar14] == 8)
					{
						unk_0xFA6BEE2B1507FF1E(&(Global_17411.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xCCA49CAF391D1A15(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_17411.f_4768 != 0)
				{
					func_318(Global_17411.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					func_304(Global_17411.f_4768, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0x281206A3ED9B7B48(func_312(Global_17411.f_4768), func_309(Global_17411.f_4768, 1), ((Global_17408 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
				}
				fVar49 = (fVar49 + (((unk_0x6486D2A6F2DC8DCB(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_17411.f_4766 > 0)
				{
					if ((unk_0xE3903F59E2F22150() - Global_17411.f_4767) > Global_17411.f_4766)
					{
						StringCopy(&(Global_17411.f_4690), "", 24);
						Global_17411.f_4766 = -1;
					}
				}
			}
			if (unk_0x36163153849DFDA1(&(Global_4267964.f_21)) != 0 && Global_4267964.f_65 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_17408 + 0.0046875f);
				if (Global_4267964.f_67 != 0)
				{
					func_318(Global_4267964.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_17408 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_305(fVar40);
				unk_0x611EA72F39AAD0DD(&(Global_4267964.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4267964.f_61)
				{
					if (Global_4267964.f_25[iVar14] == 2)
					{
						unk_0xE800DC85FDF60F85(Global_4267964.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4267964.f_25[iVar14] == 3)
					{
						unk_0x974BEF45D557B847(Global_4267964.f_34[iVar16], Global_4267964.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4267964.f_25[iVar14] == 1)
					{
						unk_0xFA6BEE2B1507FF1E(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4267964.f_25[iVar14] == 5)
					{
						unk_0xD61E5ED1D4E687A5(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4267964.f_25[iVar14] == 6)
					{
						unk_0xFA6BEE2B1507FF1E(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4267964.f_25[iVar14] == 7)
					{
						unk_0xD61E5ED1D4E687A5(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4267964.f_25[iVar14] == 9)
					{
						unk_0xD61E5ED1D4E687A5(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4267964.f_25[iVar14] == 8)
					{
						unk_0xFA6BEE2B1507FF1E(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x767F5E4858E200EB(fVar40, (fVar49 + 0.00277776f));
				unk_0x1256E5EA03020804(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_284(Global_17408, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17411.f_8343)
				{
					iVar1 = Global_17411.f_8339;
					iVar2 = Global_17411.f_8340;
					iVar3 = Global_17411.f_8341;
					iVar4 = Global_17411.f_8342;
				}
				else
				{
					unk_0x1256E5EA03020804(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x281206A3ED9B7B48("CommonMenu", "Gradient_Bgd", (Global_17408 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x6486D2A6F2DC8DCB(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x6486D2A6F2DC8DCB(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_305(fVar40);
				unk_0xAA70163B3B48EEE4(&(Global_4267964.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4267964.f_61)
				{
					if (Global_4267964.f_25[iVar14] == 2)
					{
						unk_0xE800DC85FDF60F85(Global_4267964.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4267964.f_25[iVar14] == 3)
					{
						unk_0x974BEF45D557B847(Global_4267964.f_34[iVar16], Global_4267964.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4267964.f_25[iVar14] == 1)
					{
						unk_0xFA6BEE2B1507FF1E(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4267964.f_25[iVar14] == 8)
					{
						unk_0xFA6BEE2B1507FF1E(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4267964.f_25[iVar14] == 5)
					{
						unk_0xD61E5ED1D4E687A5(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4267964.f_25[iVar14] == 6)
					{
						unk_0xFA6BEE2B1507FF1E(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4267964.f_25[iVar14] == 7)
					{
						unk_0xD61E5ED1D4E687A5(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4267964.f_25[iVar14] == 9)
					{
						unk_0xD61E5ED1D4E687A5(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xCCA49CAF391D1A15(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_4267964.f_67 != 0)
				{
					func_318(Global_4267964.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_304(Global_4267964.f_67, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0x281206A3ED9B7B48(func_312(Global_4267964.f_67), func_309(Global_4267964.f_67, 1), ((Global_17408 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
				}
				fVar49 = (fVar49 + (((unk_0x6486D2A6F2DC8DCB(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4267964.f_65 > 0)
				{
					if ((unk_0xE3903F59E2F22150() - Global_4267964.f_66) > Global_4267964.f_65)
					{
						StringCopy(&(Global_4267964.f_21), "", 16);
						Global_4267964.f_65 = -1;
					}
				}
			}
			func_297(iVar58, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			unk_0x1382AC429D0EA2BB(76, 84);
			unk_0x04602263DC4A45E9(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_17411.f_5728)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar66 = Global_17411.f_5218;
			if (Global_17411.f_5729)
			{
				iVar66 = (Global_17411.f_5732 - 1);
			}
			fVar67 = 0f;
			fVar68 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar66)
			{
				fVar54 = 0.034722f;
				if (Global_17411.f_5745[iVar6] != 0f)
				{
					fVar54 = Global_17411.f_5745[iVar6];
				}
				if (Global_17411.f_5729)
				{
					iVar6 = Global_17411.f_7974[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_17411.f_5738 && iVar9 < Global_17411.f_5225)
				{
					bVar33 = true;
					if (Global_17411.f_5739 == iVar6)
					{
						fVar68 = fVar67;
					}
					if (Global_17411.f_5356[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar57 + fVar67) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_17411.f_5879[iVar6] = fVar35;
				fVar34 = (Global_17408 + 0.0046875f);
				bVar39 = false;
				bVar32 = Global_17411.f_5739 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar70 = 255;
					iVar71 = 255;
					iVar72 = 255;
					iVar73 = 255;
					if (Global_17411.f_8345)
					{
						unk_0x1256E5EA03020804(Global_17411.f_8344, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					else
					{
						unk_0x1256E5EA03020804(1, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					unk_0x281206A3ED9B7B48("CommonMenu", "Gradient_Nav", (Global_17408 + (fParam5 * 0.5f)), (((fVar57 + fVar68) + (0.00277776f * IntToFloat(iVar12))) + (fVar54 * 0.5f)), fParam5, fVar54, 0f, iVar70, iVar71, iVar72, iVar73, 0);
					Global_17411.f_5877 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_17411.f_5226)
				{
					if (unk_0x0E4018692D92041D(Global_17411.f_5089[iVar6], iVar8) || Global_17411.f_5056[iVar8] == 5)
					{
						if (Global_17411.f_5729)
						{
							iVar19 = Global_17411.f_7990[((iVar9 * Global_17411.f_5226) + iVar8)];
							iVar20 = Global_17411.f_8031[((iVar9 * Global_17411.f_5226) + iVar8)];
							iVar21 = Global_17411.f_8072[((iVar9 * Global_17411.f_5226) + iVar8)];
							iVar22 = Global_17411.f_8113[((iVar9 * Global_17411.f_5226) + iVar8)];
							iVar23 = Global_17411.f_8154[((iVar9 * Global_17411.f_5226) + iVar8)];
						}
						else
						{
							Global_17411.f_7990[((iVar9 * Global_17411.f_5226) + iVar8)] = iVar19;
							Global_17411.f_8031[((iVar9 * Global_17411.f_5226) + iVar8)] = iVar20;
							Global_17411.f_8072[((iVar9 * Global_17411.f_5226) + iVar8)] = iVar21;
							Global_17411.f_8113[((iVar9 * Global_17411.f_5226) + iVar8)] = iVar22;
							Global_17411.f_8154[((iVar9 * Global_17411.f_5226) + iVar8)] = iVar23;
						}
						iVar74 = 0;
						bVar53 = false;
						if (Global_17411.f_6011[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_17411.f_6008[0])
							{
								bVar53 = true;
								iVar74 = 0;
							}
						}
						if (Global_17411.f_6011[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_17411.f_6008[1])
							{
								bVar53 = true;
								iVar74 = 1;
							}
						}
						if (Global_17411.f_5062[iVar8] != -1f)
						{
							fVar34 = ((Global_17408 + 0.0046875f) + Global_17411.f_5062[iVar8]);
						}
						if ((iVar8 < 4 && Global_17411.f_5062[iVar8 + 1] != -1f) && fVar34 < Global_17411.f_5062[iVar8 + 1])
						{
							fVar44 = (Global_17411.f_5062[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar44 = (((Global_17408 + Global_17410) - 0.0046875f) - fVar34);
						}
						if ((Global_17411.f_5075[iVar8] && Global_17411.f_5874) && bVar32)
						{
							bVar52 = true;
						}
						else
						{
							bVar52 = false;
						}
						switch (Global_17411.f_5056[iVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_17411.f_5729)
									{
										fVar41 = 0f;
										fVar42 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0)
										{
											bVar50 = false;
											bVar51 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17411.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													bVar51 = true;
												}
												else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											func_295(bVar32, Global_17411.f_1610[iVar24], Global_17411.f_1867[iVar24], bVar53, iVar74, bVar51, bVar50);
											unk_0xCAE35308CC49F0CC(&(Global_17411.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xFA6BEE2B1507FF1E(&(Global_17411.f_73[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xFA6BEE2B1507FF1E(&(Global_17411.f_73[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xD61E5ED1D4E687A5(&(Global_2459153[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xFA6BEE2B1507FF1E(&(Global_2459153[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xD61E5ED1D4E687A5(&(Global_2459153[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xD61E5ED1D4E687A5(&(Global_2459153[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xE800DC85FDF60F85(Global_17411.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x974BEF45D557B847(Global_17411.f_4175[(iVar21 + iVar27)], Global_17411.f_4304[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0)
										{
											fVar41 = unk_0x201339347519B9A8(1);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_318(Global_17411.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + fVar36);
													if (iVar14 > 0)
													{
														fVar42 = (fVar42 - (0.00078125f * 4f));
													}
													if ((Global_17411.f_4433[(iVar22 + iVar14)] == 2 || Global_17411.f_4433[(iVar22 + iVar14)] == 50) || Global_17411.f_4433[(iVar22 + iVar14)] == 60)
													{
														fVar42 = (fVar42 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar40 = 0f;
										if (Global_17411.f_5083[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - (fVar41 + fVar42)) + (0.00078125f * 1f)));
										}
										else if (Global_17411.f_5083[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - ((fVar41 + fVar42) * 0.5f)));
										}
										Global_17411.f_8195[((iVar9 * Global_17411.f_5226) + iVar8)] = fVar40;
										Global_17411.f_8236[((iVar9 * Global_17411.f_5226) + iVar8)] = fVar41;
										Global_17411.f_8277[((iVar9 * Global_17411.f_5226) + iVar8)] = fVar42;
										if (Global_17411.f_5083[iVar8] == 2)
										{
											iVar69 = (iVar8 - 1);
											while (iVar69 >= 0)
											{
												if (Global_17411.f_5083[iVar69] == 2)
												{
													Global_17411.f_8195[((iVar9 * Global_17411.f_5226) + iVar69)] = (Global_17411.f_8195[((iVar9 * Global_17411.f_5226) + iVar69)] - Global_17411.f_5068[iVar8]);
												}
												iVar69 = (iVar69 + -1);
											}
										}
									}
									else
									{
										fVar40 = Global_17411.f_8195[((iVar9 * Global_17411.f_5226) + iVar8)];
										fVar41 = Global_17411.f_8236[((iVar9 * Global_17411.f_5226) + iVar8)];
										fVar42 = Global_17411.f_8277[((iVar9 * Global_17411.f_5226) + iVar8)];
									}
									if (bVar52)
									{
										if (func_318(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_17411.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_318(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_304(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x281206A3ED9B7B48(func_312(26), func_309(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_318(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_318(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_304(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x281206A3ED9B7B48(func_312(27), func_309(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar31 = 0;
									if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										bVar50 = false;
										bVar51 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17411.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												bVar51 = true;
											}
											else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												bVar50 = true;
											}
											iVar14++;
										}
										func_295(bVar32, Global_17411.f_1610[iVar24], Global_17411.f_1867[iVar24], bVar53, 0, bVar51, bVar50);
										if (Global_17411.f_8349 && Global_17411.f_8350 == iVar6)
										{
											func_294(bVar32);
										}
										unk_0xAA70163B3B48EEE4(&(Global_17411.f_73[iVar24 /*6*/]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 1)
										{
											iVar25++;
											if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xFA6BEE2B1507FF1E(&(Global_17411.f_73[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 1;
										}
										else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 8)
										{
											iVar25++;
											if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xFA6BEE2B1507FF1E(&(Global_17411.f_73[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 8;
										}
										else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 5)
										{
											if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xD61E5ED1D4E687A5(&(Global_2459153[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 6)
										{
											if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xFA6BEE2B1507FF1E(&(Global_2459153[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 7)
										{
											if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xD61E5ED1D4E687A5(&(Global_2459153[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 9)
										{
											if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xD61E5ED1D4E687A5(&(Global_2459153[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 2)
										{
											if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xE800DC85FDF60F85(Global_17411.f_3918[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 3)
										{
											if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x974BEF45D557B847(Global_17411.f_4175[(iVar21 + iVar27)], Global_17411.f_4304[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 4)
										{
											if ((Global_17411.f_4433[(iVar22 + iVar28)] == 2 || Global_17411.f_4433[(iVar22 + iVar28)] == 50) || Global_17411.f_4433[(iVar22 + iVar28)] == 60)
											{
												if (func_318(Global_17411.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (func_318(Global_17411.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_304(Global_17411.f_4433[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
														if (iVar5 == 1)
														{
															if (Global_17411.f_5083[iVar8] == 2)
															{
																unk_0x281206A3ED9B7B48(func_312(Global_17411.f_4433[(iVar22 + iVar28)]), func_309(Global_17411.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0x281206A3ED9B7B48(func_312(Global_17411.f_4433[(iVar22 + iVar28)]), func_309(Global_17411.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
														}
														fVar40 = (fVar40 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_17411.f_5083[iVar8] == 2)
										{
											unk_0xCCA49CAF391D1A15(((fVar34 + fVar40) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											unk_0xCCA49CAF391D1A15((fVar34 + fVar40), fVar35, 0);
											if (func_293() && unk_0x1BCDA92AD0A7835B(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													func_295(0, Global_17411.f_1610[iVar24], Global_17411.f_1867[iVar24], bVar53, 0, bVar51, bVar50);
													StringCopy(&cVar75, "TEST_LABEL", 16);
													fVar76 = 0f;
													fVar77 = 55f;
													fVar78 = 0.0185f;
													fVar79 = 0.004f;
													fVar80 = 0.02f;
													unk_0xC56FB1634FB1F447(0f, (0.35f * 0.7f));
													unk_0x762F7A52B1325903(255, 255, 255, 150);
													unk_0x5263FF82360FF7E2((fVar34 - (fVar80 * 0.6f)), (fVar35 + (fVar78 * 0.75f)), 0.0175f, 0.035f, floor(fVar76), floor(fVar76), floor(fVar76), floor(fVar77), 0);
													unk_0xAA70163B3B48EEE4(&cVar75);
													unk_0xE800DC85FDF60F85((Global_17411.f_5738 + iVar30));
													unk_0xCCA49CAF391D1A15((fVar34 - fVar80), (fVar35 + fVar79), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar40 = (fVar40 + (6f * 0.00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_17411.f_4433[(iVar22 + iVar14)] != 2 && Global_17411.f_4433[(iVar22 + iVar14)] != 50) && Global_17411.f_4433[(iVar22 + iVar14)] != 60)
											{
												if (func_318(Global_17411.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_318(Global_17411.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_304(Global_17411.f_4433[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_17411.f_4433[(iVar22 + iVar14)] == 30)
															{
																unk_0x281206A3ED9B7B48(func_312(Global_17411.f_4433[(iVar22 + iVar14)]), func_309(Global_17411.f_4433[(iVar22 + iVar14)], bVar32), (Global_17408 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else if (Global_17411.f_5083[iVar8] == 2)
															{
																unk_0x281206A3ED9B7B48(func_312(Global_17411.f_4433[(iVar22 + iVar14)]), func_309(Global_17411.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0x281206A3ED9B7B48(func_312(Global_17411.f_4433[(iVar22 + iVar14)]), func_309(Global_17411.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
														}
													}
													fVar40 = (fVar40 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar39 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_17411.f_5729)
									{
										func_295(bVar32, Global_17411.f_1610[iVar24], Global_17411.f_1867[iVar24], bVar53, 0, 0, 0);
										if (Global_17411.f_8349 && Global_17411.f_8350 == iVar6)
										{
											func_294(bVar32);
										}
										unk_0xCAE35308CC49F0CC("NUMBER");
										unk_0xE800DC85FDF60F85(Global_17411.f_3918[iVar20]);
										fVar41 = unk_0x201339347519B9A8(1);
										fVar40 = 0f;
										if (Global_17411.f_5083[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_17411.f_5083[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_17411.f_8195[((iVar9 * Global_17411.f_5226) + iVar8)] = fVar40;
										Global_17411.f_8236[((iVar9 * Global_17411.f_5226) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_17411.f_8195[((iVar9 * Global_17411.f_5226) + iVar8)];
										fVar41 = Global_17411.f_8236[((iVar9 * Global_17411.f_5226) + iVar8)];
									}
									if (bVar52)
									{
										if (func_318(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_17411.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_318(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_304(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x281206A3ED9B7B48(func_312(26), func_309(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_318(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_318(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_304(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x281206A3ED9B7B48(func_312(27), func_309(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_295(bVar32, Global_17411.f_1610[iVar24], Global_17411.f_1867[iVar24], bVar53, 0, 0, 0);
										func_292((fVar34 + fVar40), fVar35, "NUMBER", Global_17411.f_3918[iVar20], 0);
									}
								}
								bVar39 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_17411.f_5729)
									{
										func_295(bVar32, Global_17411.f_1610[iVar24], Global_17411.f_1867[iVar24], bVar53, 0, 0, 0);
										if (Global_17411.f_8349 && Global_17411.f_8350 == iVar6)
										{
											func_294(bVar32);
										}
										unk_0xCAE35308CC49F0CC("NUMBER");
										unk_0x974BEF45D557B847(Global_17411.f_4175[iVar21], Global_17411.f_4304[iVar21]);
										fVar41 = unk_0x201339347519B9A8(1);
										fVar40 = 0f;
										if (Global_17411.f_5083[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_17411.f_5083[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_17411.f_8195[((iVar9 * Global_17411.f_5226) + iVar8)] = fVar40;
										Global_17411.f_8236[((iVar9 * Global_17411.f_5226) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_17411.f_8195[((iVar9 * Global_17411.f_5226) + iVar8)];
										fVar41 = Global_17411.f_8236[((iVar9 * Global_17411.f_5226) + iVar8)];
									}
									if (bVar52)
									{
										if (func_318(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_17411.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_318(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_304(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x281206A3ED9B7B48(func_312(26), func_309(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_318(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_318(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_304(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x281206A3ED9B7B48(func_312(27), func_309(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
									}
									func_295(bVar32, Global_17411.f_1610[iVar24], Global_17411.f_1867[iVar24], bVar53, 0, 0, 0);
									func_291((fVar34 + fVar40), fVar35, "NUMBER", Global_17411.f_4175[iVar21], Global_17411.f_4304[iVar21]);
								}
								bVar39 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_318(Global_17411.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_17411.f_5729)
										{
											fVar42 = fVar36;
											fVar40 = 0f;
											if (Global_17411.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17411.f_5083[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17411.f_8195[((iVar9 * Global_17411.f_5226) + iVar8)] = fVar40;
											Global_17411.f_8277[((iVar9 * Global_17411.f_5226) + iVar8)] = fVar42;
										}
										else
										{
											fVar40 = Global_17411.f_8195[((iVar9 * Global_17411.f_5226) + iVar8)];
											fVar42 = Global_17411.f_8277[((iVar9 * Global_17411.f_5226) + iVar8)];
										}
										if (bVar52)
										{
											if (func_318(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_17411.f_5083[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_318(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_304(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														unk_0x281206A3ED9B7B48(func_312(26), func_309(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
											if (func_318(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_318(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_304(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														unk_0x281206A3ED9B7B48(func_312(27), func_309(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_318(Global_17411.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_304(Global_17411.f_4433[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												unk_0x281206A3ED9B7B48(func_312(Global_17411.f_4433[iVar22]), func_309(Global_17411.f_4433[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), (fVar36 * func_290(Global_17411.f_4433[iVar22])), (fVar37 * func_290(Global_17411.f_4433[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0);
											}
										}
									}
								}
								bVar39 = true;
								iVar22++;
								break;
							
							case 5:
								bVar39 = true;
								break;
						}
						if (Global_17411.f_5056[iVar8] == 5)
						{
							if (Global_17411.f_5068[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_17411.f_5068[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_17411.f_5068[iVar8]);
							if (Global_17411.f_5075[iVar8])
							{
								if (func_318(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_17411.f_5068[iVar8]);
					}
					iVar8++;
				}
				if (bVar39)
				{
					if (bVar33)
					{
						Global_17411.f_7974[iVar9] = iVar6;
						Global_17411.f_5740 = iVar6;
						iVar9++;
						if (Global_17411.f_5356[iVar6])
						{
							iVar13++;
						}
						if (Global_17411.f_5745[iVar6] != 0f)
						{
							fVar67 = (fVar67 + Global_17411.f_5745[iVar6]);
						}
						else
						{
							fVar67 = (fVar67 + 0.034722f);
						}
					}
					if (!Global_17411.f_5728)
					{
						Global_17411.f_5485[iVar6] = 1;
						if (Global_17411.f_5227[iVar6])
						{
							if (bVar32)
							{
								Global_17411.f_5734 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_17411.f_5734 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_17411.f_5728)
			{
				Global_17411.f_5730 = ((fVar57 + fVar67) + (0.00277776f * IntToFloat(iVar12)));
				Global_17411.f_5733 = iVar11;
				Global_17411.f_5731 = iVar10;
				Global_17411.f_5728 = 1;
			}
		}
		if (!Global_17411.f_5729)
		{
			Global_17411.f_5732 = iVar9;
			Global_17411.f_5729 = 1;
		}
		iVar5++;
	}
	Global_17411.f_5876 = fVar49;
	Global_17411.f_5878 = unk_0xE3903F59E2F22150();
	unk_0x5E1FA2076D53C3F5(Global_17411.f_5876);
	if (!Global_17411.f_8318)
	{
		func_206(0);
	}
	Global_17411.f_8318 = 0;
	if (bParam2)
	{
		unk_0x581AE7724ACAD410(10);
	}
	unk_0x581AE7724ACAD410(6);
	unk_0x581AE7724ACAD410(7);
	unk_0x581AE7724ACAD410(9);
	unk_0x581AE7724ACAD410(8);
	if (bParam0)
	{
		func_289(1);
	}
	unk_0x94A8B1D385430451();
}

void func_289(int iParam0)
{
	Global_1373453.f_1100 = iParam0;
}

float func_290(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 52:
		case 43:
		case 44:
		case 45:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_291(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	unk_0xAA70163B3B48EEE4(sParam2);
	unk_0x974BEF45D557B847(fParam3, iParam4);
	unk_0xCCA49CAF391D1A15(fParam0, fParam1, 0);
}

void func_292(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0xAA70163B3B48EEE4(sParam2);
	unk_0xE800DC85FDF60F85(iParam3);
	unk_0xCCA49CAF391D1A15(fParam0, fParam1, iParam4);
}

bool func_293()
{
	return unk_0xE9D7B652961D4AA3(-1762644250);
}

void func_294(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0x1256E5EA03020804(Global_17411.f_8346[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0x1256E5EA03020804(Global_17411.f_8346[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0x762F7A52B1325903(iVar0, iVar1, iVar2, 255);
}

void func_295(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_296(Global_17411.f_6011[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0x1256E5EA03020804(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			unk_0x762F7A52B1325903(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0x1256E5EA03020804(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x762F7A52B1325903(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0x1256E5EA03020804(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x762F7A52B1325903(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0x762F7A52B1325903(155, 155, 155, 255);
		}
		else
		{
			unk_0x762F7A52B1325903(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0x762F7A52B1325903(0, 0, 0, floor((255f * 0.8f)));
		}
		else
		{
			unk_0x1256E5EA03020804(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0x762F7A52B1325903(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0x762F7A52B1325903(155, 155, 155, 255);
	}
	else
	{
		unk_0x762F7A52B1325903(155, 155, 155, 255);
	}
	unk_0xC56FB1634FB1F447(0f, 0.35f);
	unk_0x5E831B95C8BE4F09(1);
	if (bParam5)
	{
		unk_0xC56FB1634FB1F447(0f, 0.425f);
		unk_0xBED53673591D764E(4);
	}
	else if (bParam6)
	{
		unk_0xC56FB1634FB1F447(0f, 0.425f);
		unk_0xBED53673591D764E(6);
	}
	else
	{
		unk_0xBED53673591D764E(0);
	}
	unk_0x1C500BB2E1897008(0f, 1f);
	unk_0x2775439F06235586(0);
	unk_0xCFB6E66E3665BF86(0, 0, 0, 0, 0);
	unk_0x0B40AAC1DD7D44E6(0, 0, 0, 0, 0);
}

void func_296(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_297(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_322(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_320(bParam4, bParam8))
	{
		return;
	}
	if (func_302())
	{
		return;
	}
	if (unk_0xE3F7CBC28F745843())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_300(unk_0x95B959F18401C09A(), 0))
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
					func_299(&(Global_17411.f_4771[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x36163153849DFDA1(&(Global_17411.f_4964[iVar2 /*4*/])) == unk_0x36163153849DFDA1("PREV"))
					{
						func_299(&(Global_17411.f_4771[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17411.f_5013[iVar1] == -1)
					{
						func_298(&(Global_17411.f_4964[iVar1 /*4*/]));
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
				func_299(&Global_4267964);
				if (Global_4267964.f_20 == -1)
				{
					func_298(&(Global_4267964.f_16));
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

void func_298(char* sParam0)
{
	unk_0x713FEBE56D2BD403(sParam0);
	unk_0x36F3AA9FFAAF8606();
}

void func_299(char* sParam0)
{
	unk_0x3EFC6497702202D6(sParam0);
}

bool func_300(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x95B959F18401C09A())
	{
		bVar0 = func_301(-1, 0) == 8;
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

int func_301(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_133();
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

int func_302()
{
	vector3 vVar0;
	
	if (Global_14553.f_1 > 3)
	{
		return 1;
	}
	if (func_303())
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

int func_303()
{
	if (unk_0x1BCDA92AD0A7835B(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_304(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	unk_0x1256E5EA03020804(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 52:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
		case 51:
		case 55:
		case 56:
		case 57:
		case 58:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 53:
			*iParam5 = 100;
			break;
		
		case 54:
			unk_0x1256E5EA03020804(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_305(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x1256E5EA03020804(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0xBED53673591D764E(0);
	unk_0xC56FB1634FB1F447(0f, 0.35f);
	unk_0xBD5053F7FFEB44E5(2);
	unk_0x762F7A52B1325903(iVar0, iVar1, iVar2, iVar3);
	unk_0x1C500BB2E1897008(fParam0, ((Global_17408 + Global_17410) - 0.0046875f));
	unk_0x2775439F06235586(0);
	unk_0xCFB6E66E3665BF86(0, 0, 0, 0, 0);
	unk_0x0B40AAC1DD7D44E6(0, 0, 0, 0, 0);
}

void func_306(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0xAA70163B3B48EEE4(sParam2);
	unk_0xE800DC85FDF60F85(iParam3);
	unk_0xE800DC85FDF60F85(iParam4);
	unk_0xCCA49CAF391D1A15(fParam0, fParam1, 0);
}

float func_307(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x6D2E2622CA149402(sParam0))
	{
		if (unk_0x36163153849DFDA1(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_308();
	unk_0xCAE35308CC49F0CC(sParam0);
	unk_0xE800DC85FDF60F85(iParam1);
	unk_0xE800DC85FDF60F85(iParam2);
	return unk_0x201339347519B9A8(1);
}

void func_308()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x1256E5EA03020804(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_17411.f_8328)
	{
		iVar0 = Global_17411.f_8324;
		iVar1 = Global_17411.f_8325;
		iVar2 = Global_17411.f_8326;
		iVar3 = Global_17411.f_8327;
	}
	unk_0xBED53673591D764E(0);
	unk_0xC56FB1634FB1F447(0f, 0.35f);
	unk_0x762F7A52B1325903(iVar0, iVar1, iVar2, iVar3);
	unk_0x1C500BB2E1897008((Global_17408 + 0.0046875f), ((Global_17408 + Global_17410) - 0.0046875f));
	unk_0x2775439F06235586(0);
	unk_0xCFB6E66E3665BF86(0, 0, 0, 0, 0);
	unk_0x0B40AAC1DD7D44E6(0, 0, 0, 0, 0);
}

var func_309(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0x786AF4A44E1B5B4B(&(Global_17411.f_6997[iParam0 /*16*/])))
	{
		if (unk_0x36163153849DFDA1(&(Global_17411.f_6997[iParam0 /*16*/])) == -1487683087)
		{
			Var2 = { func_311(unk_0x95B959F18401C09A()) };
			if (unk_0x5E6D03D528D40F43(&Var2, &uVar1))
			{
				return func_310(&uVar1);
			}
		}
		else
		{
			return func_310(&(Global_17411.f_6997[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 50:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 51:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 53:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 54:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 55:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 56:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 57:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 58:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 59:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 60:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_310(var uParam0)
{
	return uParam0;
}

struct<13> func_311(int iParam0)
{
	struct<13> Var0;
	
	unk_0xBC1B3D38C4BB38F4(iParam0, &Var0, 13);
	return Var0;
}

char* func_312(int iParam0)
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0x786AF4A44E1B5B4B(&(Global_17411.f_6020[iParam0 /*16*/])))
	{
		if (unk_0x36163153849DFDA1(&(Global_17411.f_6020[iParam0 /*16*/])) == -1487683087)
		{
			Var1 = { func_311(unk_0x95B959F18401C09A()) };
			unk_0x5E6D03D528D40F43(&Var1, &uVar0);
			return func_310(&uVar0);
		}
		else
		{
			return func_310(&(Global_17411.f_6020[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 50)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_313(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_17411.f_5218 > iParam0)
	{
		return;
	}
	if (Global_17411.f_5218 >= 128)
	{
		return;
	}
	if (Global_17411.f_5220 >= 256)
	{
		return;
	}
	if (Global_17411.f_5743 < Global_17411.f_5741)
	{
		return;
	}
	if (Global_17411.f_5218 != iParam0)
	{
		Global_17411.f_5218 = iParam0;
		Global_17411.f_5219 = 0;
	}
	iVar0 = Global_17411.f_5056[Global_17411.f_5219];
	if (iVar0 != 1)
	{
		while (Global_17411.f_5219 < 4 && iVar0 != 1)
		{
			Global_17411.f_5219++;
			iVar0 = Global_17411.f_5056[Global_17411.f_5219];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_17411.f_73[Global_17411.f_5220 /*6*/]), sParam1, 24);
	if (!unk_0x786AF4A44E1B5B4B(sParam1) && !unk_0xEAF855A7DC28BC8D(sParam1))
	{
	}
	Global_17411.f_1610[Global_17411.f_5220] = bParam3;
	Global_17411.f_1867[Global_17411.f_5220] = iParam4;
	Global_17411.f_5220++;
	if (!bParam3)
	{
		func_316(Global_17411.f_5218, 1);
	}
	else
	{
		func_316(Global_17411.f_5218, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_315(&(Global_17411.f_73[Global_17411.f_5220 /*6*/]));
		if (Global_17411.f_5075[Global_17411.f_5219])
		{
			func_318(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_17411.f_5068[Global_17411.f_5219])
		{
			Global_17411.f_5068[Global_17411.f_5219] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_314(&(Global_17411.f_73[Global_17411.f_5220 /*6*/]));
			if (fVar4 > Global_17411.f_5745[iParam0])
			{
				Global_17411.f_5745[iParam0] = fVar4;
			}
		}
	}
	unk_0x8950ED5730F62EE8(&(Global_17411.f_5089[iParam0]), Global_17411.f_5219);
	Global_17411.f_5219++;
	Global_17411.f_5744 = 1;
	Global_17411.f_5742 = (Global_17411.f_5220 - 1);
	Global_17411.f_5743 = 0;
	Global_17411.f_5741 = iParam2;
}

float func_314(char* sParam0)
{
	if (!unk_0xEAF855A7DC28BC8D(sParam0))
	{
	}
	return unk_0x6486D2A6F2DC8DCB(0.35f, 0);
}

float func_315(char* sParam0)
{
	if (!unk_0x6D2E2622CA149402(sParam0))
	{
		if (unk_0x36163153849DFDA1(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_295(0, 1, 0, 0, 0, 0, 0);
	unk_0xCAE35308CC49F0CC(sParam0);
	return unk_0x201339347519B9A8(1);
}

void func_316(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = floor((to_float(iParam0) / 32f));
	if (bParam1)
	{
		unk_0x8950ED5730F62EE8(&(Global_17411.f_6015[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0xCE689A8E8C42ED78(&(Global_17411.f_6015[iVar0]), (iParam0 - iVar0 * 32));
	}
}

int func_317()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0x3A5E614EC752B188(&iVar0, &iVar1);
	fVar2 = (to_float(iVar0) / to_float(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

int func_318(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	StringCopy(&cVar0, func_312(iParam0), 64);
	StringCopy(&cVar1, func_309(iParam0, bParam1), 64);
	if (unk_0x36163153849DFDA1(&cVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0x3A5E614EC752B188(&iVar2, &iVar3);
			fVar5 = unk_0x63151314B8B4D6EB(0);
			if (func_317())
			{
				iVar2 = round((to_float(iVar3) * fVar5));
			}
			fVar6 = (to_float(iVar2) / to_float(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_317())
			{
				fVar4 = 1f;
			}
			if (unk_0x1BCDA92AD0A7835B(joaat("director_mode")) > 0)
			{
				unk_0x6521432F7BEAC16C(&iVar2, &iVar3);
			}
			iVar2 = round((to_float(iVar2) / fVar4));
			iVar3 = round((to_float(iVar3) / fVar4));
		}
		else
		{
			unk_0x6521432F7BEAC16C(&iVar2, &iVar3);
		}
		vVar7 = { unk_0x5B78EE936879124F(&cVar0, &cVar1) };
		vVar7.x = (vVar7.x * (func_319(iParam0) / fVar4));
		vVar7.y = (vVar7.y * (func_319(iParam0) / fVar4));
		if (!bParam2)
		{
			vVar7.x = (vVar7.x - 2f);
			vVar7.y = (vVar7.y - 2f);
		}
		if (iParam0 == 30)
		{
			vVar7.x = 288f;
			vVar7.y = 106f;
		}
		if (iParam0 == 29 && unk_0x36163153849DFDA1(&(Global_17411.f_6997[29 /*16*/])) == -1487683087)
		{
			vVar7.x = 106f;
			vVar7.y = 106f;
		}
		*fParam3 = ((vVar7.x / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((vVar7.y / IntToFloat(iVar3)) / (vVar7.x / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x9E7AB96D7830E5B1() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_17410)
			{
				*fParam4 = (*fParam4 * (Global_17410 / *fParam3));
				*fParam3 = Global_17410;
			}
		}
		return 1;
	}
	return 0;
}

float func_319(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 51:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
			return 0.5f;
			break;
		
		case 60:
			return 0.8f;
			break;
	}
	return 1f;
}

int func_320(bool bParam0, bool bParam1)
{
	if (Global_2437364.f_1893.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x73DA1542B2F0C458() || (func_24(8, -1) && func_321() != 64)) || (unk_0x1B9A01A53920FD50() != 0 && !bParam1)) || (unk_0x71EC91BA8C88BCE0() && !bParam0)) || unk_0xBAA5E93732372E34()) || Global_71850) || Global_17411.f_8352) || unk_0x15C85368E432C647()) || Global_93734.f_1409)
	{
		return 0;
	}
	return 1;
}

int func_321()
{
	return Global_1312802;
}

int func_322(var uParam0, bool bParam1, int iParam2)
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

void func_323()
{
	if (!func_360(iLocal_295))
	{
		iLocal_295 = func_341();
		func_332(&iLocal_295, 0, 0, unk_0x9EC3B269A34A2BEE(1, 2), 0, 0, 0);
	}
	else if (!func_479(iLocal_73, 2))
	{
		if (func_324(iLocal_295))
		{
			iLocal_295 = func_341();
			func_332(&iLocal_295, 0, 0, unk_0x9EC3B269A34A2BEE(1, 2), 0, 0, 0);
			func_471(&iLocal_73, 2);
		}
	}
	else if (func_324(iLocal_295))
	{
		func_275();
		func_462(0);
	}
}

bool func_324(int iParam0)
{
	return func_325(func_341(), iParam0);
}

int func_325(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_360(iParam1) || !func_360(iParam0))
	{
		return 1;
	}
	iVar0 = func_331(iParam0);
	iVar1 = func_331(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_330(iParam0);
	iVar1 = func_330(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_329(iParam0);
	iVar1 = func_329(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_328(iParam0);
	iVar1 = func_328(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_327(iParam0);
	iVar1 = func_327(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_326(iParam0);
	iVar1 = func_326(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_326(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_327(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_328(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_329(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_330(int iParam0)
{
	return iParam0 & 15;
}

var func_331(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_160(unk_0x0E4018692D92041D(iParam0, 31), -1, 1)) + 2011;
}

void func_332(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_331(*iParam0);
	iVar1 = func_330(*iParam0);
	iVar2 = func_329(*iParam0);
	iVar3 = func_328(*iParam0);
	iVar4 = func_327(*iParam0);
	iVar5 = func_326(*iParam0);
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
	iVar6 = func_340(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_340(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_333(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_333(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_339(uParam0, iParam1);
	func_338(uParam0, iParam2);
	func_337(uParam0, iParam3);
	func_336(uParam0, iParam5);
	func_335(uParam0, iParam4);
	func_334(uParam0, iParam6);
}

void func_334(var uParam0, int iParam1)
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

void func_335(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_330(*uParam0);
	iVar1 = func_331(*uParam0);
	if (iParam1 < 1 || iParam1 > func_340(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_336(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_337(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_338(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_339(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_340(int iParam0, int iParam1)
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

int func_341()
{
	var uVar0;
	
	func_339(&uVar0, unk_0xE6A7CE90720B9037());
	func_338(&uVar0, unk_0x7EA67BD818402745());
	func_337(&uVar0, unk_0x13348E86D5B8A052());
	func_335(&uVar0, unk_0x020A28FAE1C09250());
	func_336(&uVar0, unk_0x2C02CAA9C4127339());
	func_334(&uVar0, unk_0xED3F08F762AAA55A());
	return uVar0;
}

void func_342(char* sParam0, int iParam1)
{
	unk_0x37621D6689F9E3C3(sParam0);
	unk_0x092150016C06C431(0, 0, true, iParam1);
}

void func_343()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_354(1);
	func_274(1);
	unk_0xDFF589A2149528CE(false);
	func_353(0, 0);
	func_352(1, 1, 0, 0, 0);
	func_351(1, 2, 1, 1, 1);
	func_350("PROS_OPTS");
	func_349(201, "PROS_SELECT", -1, 0);
	iLocal_69 = 0;
	iVar0 = func_225(0);
	iVar1 = func_225(1);
	iVar2 = func_225(2);
	if (func_269() >= iVar0)
	{
		func_313(iLocal_69, "PROS_DOLLAR", 1, 1, 0, 0);
		func_346(iVar0, 0);
		iLocal_283[iLocal_69] = 0;
		iLocal_69++;
	}
	if (func_269() >= iVar1 && func_345(iLocal_93))
	{
		func_313(iLocal_69, "PROS_DOLLAR", 1, 1, 0, 0);
		func_346(iVar1, 0);
		iLocal_283[iLocal_69] = 1;
		iLocal_69++;
	}
	if (func_269() >= iVar2 && func_345(iLocal_93))
	{
		func_313(iLocal_69, "PROS_DOLLAR", 1, 1, 0, 0);
		func_346(iVar2, 0);
		iLocal_283[iLocal_69] = 2;
		iLocal_69++;
	}
	func_313(iLocal_69, "PROS_QUIT", 0, 1, 0, 0);
	iLocal_68 = 0;
	func_276(iLocal_68, 1, 1);
	func_344();
	iLocal_87 = unk_0xE3903F59E2F22150();
	iLocal_292 = 3;
}

void func_344()
{
	Global_17272.f_5 = 1;
}

int func_345(int iParam0)
{
	int iVar0;
	
	if (unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		iVar0 = unk_0x541D5C57194E73C4(iParam0);
		if ((((((((((((((iVar0 == joaat("infernus") || iVar0 == joaat("voltic")) || iVar0 == joaat("stingergt")) || iVar0 == joaat("stinger")) || iVar0 == joaat("bullet")) || iVar0 == joaat("entityxf")) || iVar0 == joaat("feltzer3")) || iVar0 == joaat("granger")) || iVar0 == joaat("panto")) || iVar0 == joaat("phoenix")) || iVar0 == joaat("fmj")) || iVar0 == joaat("reaper")) || iVar0 == joaat("le7b")) || iVar0 == joaat("tyrus")) || iVar0 == -1405937764)
		{
			return 0;
		}
	}
	return 1;
}

void func_346(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_17411.f_5222 >= 256)
	{
		return;
	}
	if (Global_17411.f_5743 >= 4)
	{
		return;
	}
	if (Global_17411.f_5744 != 1)
	{
		return;
	}
	if (Global_17411.f_5743 >= Global_17411.f_5741)
	{
		return;
	}
	Global_17411.f_3918[Global_17411.f_5222] = iParam0;
	Global_17411.f_5222++;
	Global_17411.f_2124[Global_17411.f_5742 /*5*/][Global_17411.f_5743] = 2;
	Global_17411.f_5743++;
	if (Global_17411.f_5743 >= Global_17411.f_5741)
	{
		fVar0 = func_348();
		if (Global_17411.f_5075[Global_17411.f_5219] && Global_17411.f_5743 == Global_17411.f_5741)
		{
			func_318(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_17411.f_5068[(Global_17411.f_5219 - 1)])
		{
			Global_17411.f_5068[(Global_17411.f_5219 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_17411.f_5743 >= Global_17411.f_5741)
		{
			fVar3 = func_347();
			if (fVar3 > Global_17411.f_5745[Global_17411.f_5218])
			{
				Global_17411.f_5745[Global_17411.f_5218] = fVar3;
			}
		}
	}
}

float func_347()
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_17411.f_5743)
	{
		if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_17411.f_4433[((Global_17411.f_5224 - iVar1) + iVar0)] != 0)
		{
			if (func_318(Global_17411.f_4433[((Global_17411.f_5224 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > unk_0x6486D2A6F2DC8DCB(0.35f, 0))
	{
		return fVar2;
	}
	return unk_0x6486D2A6F2DC8DCB(0.35f, 0);
}

float func_348()
{
	float fVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar7 = 0;
	while (iVar7 < Global_17411.f_5743)
	{
		if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 9)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_295(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (unk_0x36163153849DFDA1(&(Global_17411.f_73[Global_17411.f_5742 /*6*/])) != 0)
	{
		unk_0xCAE35308CC49F0CC(&(Global_17411.f_73[Global_17411.f_5742 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_17411.f_5743)
	{
		if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (unk_0x36163153849DFDA1(&(Global_17411.f_73[Global_17411.f_5742 /*6*/])) != 0)
			{
				unk_0xFA6BEE2B1507FF1E(&(Global_17411.f_73[(Global_17411.f_5742 + iVar8) /*6*/]));
			}
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (unk_0x36163153849DFDA1(&(Global_17411.f_73[Global_17411.f_5742 /*6*/])) != 0)
			{
				unk_0xFA6BEE2B1507FF1E(&(Global_17411.f_73[(Global_17411.f_5742 + iVar8) /*6*/]));
			}
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 2)
		{
			if (unk_0x36163153849DFDA1(&(Global_17411.f_73[Global_17411.f_5742 /*6*/])) != 0)
			{
				unk_0xE800DC85FDF60F85(Global_17411.f_3918[((Global_17411.f_5222 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 3)
		{
			if (unk_0x36163153849DFDA1(&(Global_17411.f_73[Global_17411.f_5742 /*6*/])) != 0)
			{
				unk_0x974BEF45D557B847(Global_17411.f_4175[((Global_17411.f_5223 - iVar4) + iVar10)], Global_17411.f_4304[((Global_17411.f_5223 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 5)
		{
			if (unk_0x36163153849DFDA1(&(Global_17411.f_73[Global_17411.f_5742 /*6*/])) != 0)
			{
				unk_0xD61E5ED1D4E687A5(&(Global_2459153[((Global_17411.f_5221 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 6)
		{
			if (unk_0x36163153849DFDA1(&(Global_17411.f_73[Global_17411.f_5742 /*6*/])) != 0)
			{
				unk_0xFA6BEE2B1507FF1E(&(Global_2459153[((Global_17411.f_5221 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 7)
		{
			if (unk_0x36163153849DFDA1(&(Global_17411.f_73[Global_17411.f_5742 /*6*/])) != 0)
			{
				unk_0xD61E5ED1D4E687A5(&(Global_2459153[((Global_17411.f_5221 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 9)
		{
			if (unk_0x36163153849DFDA1(&(Global_17411.f_73[Global_17411.f_5742 /*6*/])) != 0)
			{
				unk_0xD61E5ED1D4E687A5(&(Global_2459153[((Global_17411.f_5221 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (unk_0x36163153849DFDA1(&(Global_17411.f_73[Global_17411.f_5742 /*6*/])) != 0)
	{
		fVar0 = unk_0x201339347519B9A8(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_17411.f_4433[((Global_17411.f_5224 - iVar5) + iVar7)] != 0)
		{
			func_318(Global_17411.f_4433[((Global_17411.f_5224 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

void func_349(int iParam0, char* sParam1, int iParam2, bool bParam3)
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

void func_350(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_17411.f_1), sParam0, 16);
	Global_17411.f_68 = 0;
	Global_17411.f_69 = 0;
	Global_17411.f_70 = 0;
	Global_17411.f_71 = 0;
	Global_17411.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17411.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_351(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17411.f_5083[0] = iParam0;
	Global_17411.f_5083[1] = iParam1;
	Global_17411.f_5083[2] = iParam2;
	Global_17411.f_5083[3] = iParam3;
	Global_17411.f_5083[4] = iParam4;
}

void func_352(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17411.f_5056[0] = iParam0;
	Global_17411.f_5056[1] = iParam1;
	Global_17411.f_5056[2] = iParam2;
	Global_17411.f_5056[3] = iParam3;
	Global_17411.f_5056[4] = iParam4;
	Global_17411.f_5226 = 0;
	if (iParam0 != 0)
	{
		Global_17411.f_5226++;
	}
	if (iParam1 != 0)
	{
		Global_17411.f_5226++;
	}
	if (iParam2 != 0)
	{
		Global_17411.f_5226++;
	}
	if (iParam3 != 0)
	{
		Global_17411.f_5226++;
	}
	if (iParam4 != 0)
	{
		Global_17411.f_5226++;
	}
}

void func_353(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_17411.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_17411.f_2124[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2459153[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_17411.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17411.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_17411.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17411.f_5089[iVar0] = 0;
		Global_17411.f_5227[iVar0] = 0;
		Global_17411.f_5356[iVar0] = 0;
		Global_17411.f_5879[iVar0] = 0f;
		Global_17411.f_5485[iVar0] = 0;
		Global_17411.f_5745[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_17411.f_5056[iVar0] = 0;
		Global_17411.f_5068[iVar0] = 0f;
		Global_17411.f_5062[iVar0] = -1f;
		Global_17411.f_5075[iVar0] = 0;
		Global_17411.f_5083[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17411.f_4964[iVar0 /*4*/]), "", 16);
		Global_17411.f_5013[iVar0] = -1;
		Global_17411.f_5026[iVar0] = 359;
		Global_17411.f_5039[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 61)
	{
		StringCopy(&(Global_17411.f_6020[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_17411.f_6997[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_17411.f_1610[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4267964.f_16), "", 16);
	Global_4267964.f_20 = -1;
	Global_17411 = 0;
	Global_17411.f_5218 = 0;
	Global_17411.f_5219 = 0;
	Global_17411.f_5220 = 0;
	Global_17411.f_5222 = 0;
	Global_17411.f_5223 = 0;
	Global_17411.f_5224 = 0;
	Global_17411.f_5221 = 0;
	Global_17411.f_5874 = 0;
	Global_17411.f_6014 = 0;
	Global_17411.f_5739 = 0;
	Global_17411.f_5738 = 0;
	Global_17411.f_5740 = 0;
	StringCopy(&(Global_17411.f_4690), "", 24);
	Global_17411.f_4762 = 0;
	Global_17411.f_4763 = 0;
	Global_17411.f_4764 = 0;
	Global_17411.f_4765 = 0;
	Global_17411.f_4766 = 0;
	Global_17411.f_4767 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17411.f_4696[iVar0] = 0;
		iVar0++;
	}
	Global_17411.f_4768 = 0;
	StringCopy(&(Global_4267964.f_21), "", 16);
	Global_4267964.f_61 = 0;
	Global_4267964.f_62 = 0;
	Global_4267964.f_63 = 0;
	Global_4267964.f_64 = 0;
	Global_4267964.f_65 = 0;
	Global_4267964.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4267964.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4267964.f_67 = 0;
	StringCopy(&(Global_17411.f_1), "", 16);
	Global_17411.f_5074 = 0f;
	Global_17411.f_68 = 0;
	Global_17411.f_69 = 0;
	Global_17411.f_70 = 0;
	Global_17411.f_71 = 0;
	Global_17411.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17411.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_17411.f_5744 = 0;
	Global_17411.f_5743 = 0;
	Global_17411.f_5741 = 0;
	Global_17411.f_5742 = 0;
	Global_17411.f_4769 = 0;
	Global_17411.f_4770 = 0;
	Global_17411.f_5225 = 10;
	Global_17411.f_5226 = 0;
	Global_17411.f_5876 = 0f;
	Global_17411.f_5877 = 0f;
	Global_17411.f_5728 = 0;
	Global_17411.f_5729 = 0;
	Global_17411.f_5730 = 0f;
	Global_17411.f_5731 = 0;
	Global_17411.f_5733 = 0;
	Global_17411.f_5732 = 0;
	Global_17411.f_5734 = 0;
	Global_17411.f_5735 = 0;
	Global_17411.f_5736 = 0;
	Global_17411.f_5737 = 0;
	Global_17411.f_8349 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_17411.f_6008[iVar0] = -1;
		Global_17411.f_6011[iVar0] = -1;
		iVar0++;
	}
	Global_17411.f_5081 = 0f;
	Global_17411.f_5052 = 0;
	Global_17411.f_5082 = 0;
	iVar0 = 0;
	while (iVar0 < Global_17411.f_6015)
	{
		Global_17411.f_6015[iVar0] = 0;
		iVar0++;
	}
	Global_17411.f_8328 = 0;
	Global_17411.f_8323 = 0;
	Global_17411.f_8333 = 0;
	Global_17411.f_8338 = 0;
	Global_17411.f_8343 = 0;
	Global_17411.f_8345 = 0;
	Global_17411.f_8351 = 0;
	Global_17408 = 0.05f;
	Global_17409 = 0.05f;
	Global_17410 = 0.225f;
	fVar2 = unk_0x63151314B8B4D6EB(0);
	if (bParam0)
	{
		Global_17410 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_17410 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_17410 = 0.225f;
	}
}

void func_354(bool bParam0)
{
	if (!bParam0)
	{
		Global_105207 = unk_0xE3903F59E2F22150() + 250;
	}
	Global_105204 = bParam0;
}

int func_355(char* sParam0, int iParam1)
{
	if (func_269() < func_225(iParam1))
	{
		StringCopy(sParam0, "PROS_NO_MONEY", 16);
		return 0;
	}
	if (unk_0xB331FCEB94EB05C8() && func_356(unk_0x95B959F18401C09A()))
	{
		StringCopy(sParam0, "PIM_HHIDCR", 16);
		return 0;
	}
	StringCopy(sParam0, "", 16);
	return 1;
}

int func_356(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x0E4018692D92041D(Global_1626536[iVar0 /*603*/].f_1, 0);
	}
	return 0;
}

int func_357(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (!unk_0xE9CCF312047EBEE0(func_44(unk_0x33CD235DF1E6A94E(), 0, 0)))
	{
	}
	else if (!unk_0x1CE8F0A08E65CA6A(iParam0, func_44(unk_0x33CD235DF1E6A94E(), 0, 0), func_103(bParam1), 3) && unk_0xD76D6BCC14B95CE1(iParam0, -2017877118) != 1)
	{
		if (func_539())
		{
			if (iParam0 == unk_0x33CD235DF1E6A94E())
			{
				if (!func_198(unk_0x95B959F18401C09A()))
				{
					iVar0 = unk_0xA603FBA9F3C17D3A(unk_0x33CD235DF1E6A94E(), 6);
					if (!func_512(256))
					{
						func_189(256);
						iLocal_84 = iVar0;
						iLocal_85 = unk_0xCEB55689C694866C(unk_0x33CD235DF1E6A94E(), 6);
						unk_0x93AA93DA1B137032(unk_0x33CD235DF1E6A94E(), 6, 1, 0, 0);
						func_189(1024);
					}
				}
				unk_0x108754262311D34F(iParam0, func_44(unk_0x33CD235DF1E6A94E(), 0, 0), func_358(bParam1), 2f, -8f, -1, 0, 0, 0, 0, 0);
			}
			else
			{
				unk_0x108754262311D34F(iParam0, func_44(unk_0x33CD235DF1E6A94E(), 0, 0), func_358(bParam1), 2f, -8f, -1, 0, 0, 0, 0, 0);
			}
		}
		else
		{
			unk_0x108754262311D34F(iParam0, func_44(unk_0x33CD235DF1E6A94E(), 0, 0), func_358(bParam1), 2f, -8f, -1, 0, 0, 0, 0, 0);
		}
	}
	else
	{
		if (unk_0x1CE8F0A08E65CA6A(iParam0, func_44(unk_0x33CD235DF1E6A94E(), 0, 0), func_358(bParam1), 3))
		{
			if (unk_0x204DEACC5BECF723(iParam0, func_44(unk_0x33CD235DF1E6A94E(), 0, 0), func_358(bParam1)) >= 0.95f)
			{
				unk_0x108754262311D34F(iParam0, func_44(unk_0x33CD235DF1E6A94E(), 0, 0), func_103(bParam1), 8f, -2f, -1, 1, 0, 0, 0, 0);
			}
		}
		if (unk_0x1CE8F0A08E65CA6A(iParam0, func_44(unk_0x33CD235DF1E6A94E(), 0, 0), func_103(bParam1), 3))
		{
			return 1;
		}
	}
	return 0;
}

var func_358(bool bParam0)
{
	if (!func_479(iLocal_49, 32768))
	{
		if (bParam0)
		{
			return func_39(0);
		}
		else
		{
			return func_39(1);
		}
	}
	if (bParam0)
	{
		return func_40(0);
	}
	return func_40(1);
}

void func_359(int iParam0)
{
	*iParam0 = -15;
}

int func_360(int iParam0)
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
	iVar0 = func_326(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_327(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_328(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_331(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_330(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_329(iParam0);
	if (iVar5 < 1 || iVar5 > func_340(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_361()
{
	if (unk_0xBC2FC12AD0FBF72E(iLocal_90))
	{
		return;
	}
	unk_0x2918FC6BDEBF9834(iLocal_90);
	if (!unk_0x8B76D954998C9E96(iLocal_90))
	{
		if (iLocal_70 < 1)
		{
			unk_0xAEED0213982928AC(iLocal_90, "HOOKER_OFFER_SERVICE", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
		else
		{
			unk_0xAEED0213982928AC(iLocal_90, "HOOKER_OFFER_AGAIN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
	}
}

int func_362()
{
	if (func_363(0, -1, 0) && unk_0x3C05A6D663EA1B6A("SCRIPT\HUD_321_GO", true, -1))
	{
		return 1;
	}
	return 0;
}

bool func_363(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_322(&iVar0, 1, iParam1))
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
	unk_0x0A06DEFFF267C21E("CommonMenu", false);
	Global_17411.f_5614[iVar0] = 1;
	if (!unk_0xD83C9F072D059CC4("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0x0A06DEFFF267C21E("MPShopSale", false);
		Global_17411.f_5621[iVar0] = 1;
		if (!unk_0xD83C9F072D059CC4("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_17411.f_5660[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_364(&(Global_17411.f_5660[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_364(var uParam0)
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

void func_365()
{
	if (!func_539())
	{
		return;
	}
	if (unk_0x765F6FEEFF39224F(iLocal_90))
	{
		iLocal_58 = unk_0xE80842D7B53F8525(iLocal_90);
	}
}

void func_366()
{
	int iVar0;
	
	if (!func_539())
	{
		return;
	}
	if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
	{
		if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
		{
			iVar0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
			if (unk_0x765F6FEEFF39224F(iVar0))
			{
				vLocal_56 = { unk_0xFBB1F99A825CAB09(iVar0, true) };
			}
		}
	}
}

void func_367(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_322(&iVar0, 0, iParam1))
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
		unk_0xB073DB452891DC0B(9, false);
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
		func_368(&(Global_17411.f_5660[iVar0 /*10*/]));
		Global_17411.f_5721[iVar0] = 0;
	}
	else
	{
		Global_17411.f_5721[iVar0] = 0;
	}
}

void func_368(int iParam0)
{
	if (iParam0->f_9 != 0)
	{
		if (unk_0x11AE7F6A404414C9(*iParam0))
		{
			unk_0x83A1D480DB0B52CC(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

int func_369()
{
	if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) == 0)
	{
		if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
		{
			if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
			{
				iLocal_93 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
				if (!iLocal_93 == 0)
				{
					if ((unk_0x91D5C8283D19AF49(iLocal_93, 0) && !unk_0x17260B4EA0652E1C(iLocal_93)) && !unk_0x95BBE5C8D52FE24B(iLocal_93))
					{
						if (func_85(&iLocal_93))
						{
							func_5(&iLocal_49, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_370()
{
	if (iLocal_70 == 0)
	{
		if (!func_479(iLocal_51, 1) && !func_479(iLocal_51, 16))
		{
			if (func_371(0))
			{
				func_471(&iLocal_51, 1);
			}
		}
		if (!func_479(iLocal_51, 4) && !func_479(iLocal_51, 64))
		{
			if (func_371(2))
			{
				func_471(&iLocal_51, 4);
			}
		}
		if (!func_479(iLocal_51, 8) && !func_479(iLocal_51, 128))
		{
			if (func_371(1))
			{
				func_471(&iLocal_51, 8);
			}
		}
	}
}

int func_371(int iParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	vVar0 = { func_179(iParam0) };
	vVar1 = { unk_0xFBB1F99A825CAB09(iLocal_93, true) };
	if (iLocal_299[iParam0] == 0)
	{
		if (unk_0x541D5C57194E73C4(iLocal_93) == -376434238)
		{
			iLocal_299[iParam0] = unk_0xBD1087ABD1970B9C(vVar0, vVar1, 0.1f, 511, iLocal_93, 3);
		}
		else if ((unk_0x541D5C57194E73C4(iLocal_93) == joaat("casco") || unk_0x541D5C57194E73C4(iLocal_93) == joaat("feltzer3")) || unk_0x541D5C57194E73C4(iLocal_93) == 1617472902)
		{
			iLocal_299[iParam0] = unk_0xBD1087ABD1970B9C(vVar0, vVar1, 0.15f, 511, iLocal_93, 3);
		}
		else
		{
			iLocal_299[iParam0] = unk_0xBD1087ABD1970B9C(vVar0, vVar1, 0.25f, 511, iLocal_93, 3);
		}
	}
	else
	{
		switch (unk_0x819B6E76423AE494(iLocal_299[iParam0], &iVar2, &uVar3, &uVar4, &uVar5))
		{
			case 2:
				iLocal_299[iParam0] = 0;
				if (iVar2 != 0)
				{
					func_372(iParam0);
					return 0;
				}
				else
				{
					return 1;
				}
				break;
			
			case 1:
				break;
			
			case 0:
				iLocal_299[iParam0] = 0;
				break;
			}
	}
	return 0;
}

void func_372(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (!func_479(iLocal_51, 16))
			{
				func_471(&iLocal_51, 16);
				func_5(&iLocal_51, 1);
			}
			break;
		
		case 1:
			if (!func_479(iLocal_51, 128))
			{
				func_471(&iLocal_51, 128);
				func_5(&iLocal_51, 8);
			}
			break;
		
		case 2:
			if (!func_479(iLocal_51, 64))
			{
				func_471(&iLocal_51, 64);
				func_5(&iLocal_51, 4);
			}
			break;
		
		case 3:
			if (!func_479(iLocal_51, 32))
			{
				func_471(&iLocal_51, 32);
				func_5(&iLocal_51, 2);
			}
			break;
	}
}

void func_373()
{
	if (func_378() && !unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
	{
		iLocal_286 = 9;
		func_376(iLocal_90);
		func_376(unk_0x33CD235DF1E6A94E());
		func_374();
		func_34(&iLocal_98);
	}
}

void func_374()
{
	struct<7> Var0;
	struct<7> Var1;
	
	if (!unk_0x117DAF3BF7232886(iLocal_96))
	{
		iLocal_96 = unk_0x00E62F31D05EB2AC("DEFAULT_SCRIPTED_CAMERA", true);
	}
	if (!unk_0x117DAF3BF7232886(iLocal_97))
	{
		iLocal_97 = unk_0x00E62F31D05EB2AC("DEFAULT_SCRIPTED_CAMERA", true);
	}
	func_375(&Var0, &Var1);
	unk_0xFA3130C046AC45A7(iLocal_96, Var0);
	unk_0x833A05A7AD82EA44(iLocal_96, Var0.f_3, 2);
	unk_0x63B608CD1957089E(iLocal_96, Var0.f_6);
	unk_0xFA3130C046AC45A7(iLocal_97, Var1);
	unk_0x833A05A7AD82EA44(iLocal_97, Var1.f_3, 2);
	unk_0x63B608CD1957089E(iLocal_97, Var1.f_6);
	unk_0x189377BFBDC9127F(iLocal_96, true);
	unk_0x189377BFBDC9127F(iLocal_97, false);
	unk_0x63F0B040CE6EDF0F(true, false, 3000, 1, 0, 0);
}

void func_375(var uParam0, var uParam1)
{
	switch (func_18())
	{
		case 0:
			*uParam0 = { -823.9435f, 186.8976f, 75.5221f };
			uParam0->f_3 = { -18.973f, 0f, -179.5878f };
			uParam0->f_6 = 50f;
			*uParam1 = { -828.0038f, 179.5113f, 75.7418f };
			uParam1->f_3 = { 14.0219f, 0f, -107.3339f };
			uParam1->f_6 = 50f;
			break;
		
		case 1:
			*uParam0 = { -20.162f, -1443.916f, 31.9468f };
			uParam0->f_3 = { -12.0736f, 0f, -130.562f };
			uParam0->f_6 = 50f;
			*uParam1 = { -15.925f, -1446.92f, 31.9534f };
			uParam1->f_3 = { -10.3101f, 0f, 34.3879f };
			uParam1->f_6 = 50f;
			break;
		
		case 2:
			*uParam0 = { 1972.248f, 3804.805f, 36.7174f };
			uParam0->f_3 = { -19.6476f, 0f, -45.6158f };
			uParam0->f_6 = 50f;
			*uParam1 = { 1970.194f, 3807.541f, 35.5247f };
			uParam1->f_3 = { -15.8717f, 0f, 41.6556f };
			uParam1->f_6 = 50f;
			break;
	}
}

void func_376(int iParam0)
{
	int iVar0;
	
	if (!unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		unk_0xA7A57E7757ED035E(&iVar0);
		unk_0x99414FB2D30425C1(&iVar0);
		if (unk_0xF0D230FB550CD6EB(iParam0, 0))
		{
			unk_0x07C339D4328CA16C(0, 0, 16842752);
		}
		unk_0x7E268975AF5EA74F(0, func_377(), 1f, -1, 0.5f, 8192, 1193033728);
		unk_0xC734F59A13D39AEF(iVar0);
		unk_0x13A2D602CD10CBAC(iParam0, iVar0);
		unk_0xA7A57E7757ED035E(&iVar0);
	}
}

Vector3 func_377()
{
	switch (func_18())
	{
		case 0:
			return -819.88f, 177.47f, 70.63f;
			break;
		
		case 1:
			return -14.57f, -1437.56f, 30.12f;
			break;
		
		case 2:
			return 1972.16f, 3817.47f, 32.43f;
			break;
	}
	return 0f, 0f, 0f;
}

bool func_378()
{
	return vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), func_380()) < (func_379() * func_379());
}

float func_379()
{
	switch (func_18())
	{
		case 0:
			return 20.75f;
			break;
		
		case 1:
			return 10f;
			break;
		
		case 2:
			return 14f;
			break;
	}
	return 0f;
}

Vector3 func_380()
{
	switch (func_18())
	{
		case 0:
			return -827.04f, 172.26f, 69.48f;
			break;
		
		case 1:
			return -16.98f, -1451.59f, 29.57f;
			break;
		
		case 2:
			return 1983.22f, 3820.64f, 31.37f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_381()
{
	func_323();
	func_396();
	if (!func_10(&iLocal_101))
	{
		func_461(&iLocal_101);
	}
	if (func_395())
	{
		return;
	}
	if (!func_10(&iLocal_110))
	{
		func_461(&iLocal_110);
	}
	if (func_369() && unk_0x10930B9CAD4111C2(iLocal_90, iLocal_93, 0))
	{
		if (unk_0x61DFE32FB87BC784(iLocal_93) && unk_0x156573D1AADB54ED(iLocal_93))
		{
			if ((func_388() && !func_378()) && !func_387())
			{
				func_386();
				if (func_7(&iLocal_110) > 2.5f)
				{
					iLocal_83 = unk_0x6E6EB18FDAB9A074(unk_0xFBB1F99A825CAB09(iLocal_93, false), 40f, 40f, 40f, unk_0xC472E34C8FBEC678(iLocal_93), 0, 7);
					unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), false, 896);
					func_471(&iLocal_49, 2048);
					iLocal_94 = 0;
					unk_0x9315FCF6CFE2AB41("ProstituteInPlay", &iLocal_298);
					unk_0xD2E80177F27FD43F(1, iLocal_298, 1862763509);
					unk_0x0648A75D3F60E864(iLocal_90, iLocal_298);
					func_480("Moving into sex state eCurrentProstituteState = PROSTITUTE_CHOOSING_SERVICE ");
					func_5(&iLocal_49, 1024);
					iLocal_295 = -15;
					func_121();
					func_385();
					iLocal_81 = 3;
					if (func_42(0, 1))
					{
						unk_0x052830EE89C97404(false);
					}
					iLocal_286 = 8;
				}
			}
			else
			{
				if ((!unk_0x8B76D954998C9E96(unk_0x33CD235DF1E6A94E()) && func_7(&iLocal_101) > 15f) && func_384())
				{
					if (!func_479(iLocal_50, 4096))
					{
						func_342("PROS_SPOT", -1);
						func_471(&iLocal_50, 4096);
					}
					func_383();
					func_34(&iLocal_101);
				}
				func_34(&iLocal_110);
			}
		}
		else
		{
			func_34(&iLocal_110);
			func_382();
		}
	}
	else if (!func_378())
	{
		if (unk_0x765F6FEEFF39224F(iLocal_90))
		{
			if (!unk_0xBC2FC12AD0FBF72E(iLocal_90))
			{
				unk_0xED68CDDDE25A144E(iLocal_90);
			}
		}
		func_462(0);
	}
}

void func_382()
{
	iLocal_51 = 0;
	iLocal_299[0] = 0;
	iLocal_299[1] = 0;
	iLocal_299[2] = 0;
	iLocal_299[3] = 0;
}

void func_383()
{
	if (unk_0xBC2FC12AD0FBF72E(iLocal_90))
	{
		return;
	}
	if (!unk_0x8B76D954998C9E96(iLocal_90))
	{
		unk_0xAEED0213982928AC(iLocal_90, "HOOKER_SECLUDED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

int func_384()
{
	if (!func_479(iLocal_51, 256))
	{
		return 1;
	}
	return func_479(iLocal_51, 32);
}

void func_385()
{
	if (func_539())
	{
		unk_0x5FEE418CE11E6DDE(iLocal_90, 229, true);
		unk_0x5FEE418CE11E6DDE(iLocal_90, 26, true);
		unk_0x5FEE418CE11E6DDE(iLocal_90, 115, true);
		unk_0x4A852F02088ECC9D(iLocal_90, true);
	}
}

void func_386()
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	
	if (!func_479(iLocal_49, 2097152))
	{
		if (unk_0xE3903F59E2F22150() > iLocal_82)
		{
			if (iLocal_94 == 0)
			{
				vVar0 = { unk_0xFBB1F99A825CAB09(iLocal_93, true) };
				unk_0x8C1596BAD35D957A(vVar0, &fVar2, 0, 0);
				vVar0.z = (fVar2 + 0.15f);
				vVar1 = { unk_0x2CA911E7569D12EA(iLocal_93, 0f, 0f, -2f) };
				iLocal_94 = unk_0x0F79DCFDE3D6F778(vVar0, vVar1, 2f, 511, iLocal_93, 7);
			}
			else if (unk_0xE7F42E784C2E4682(iLocal_94, &iVar4, &uVar5, &uVar6, &iVar3, &uVar7) == 2)
			{
				if (iVar4 != 0)
				{
					if ((iVar3 == -1447280105 || iVar3 == 1925605558) || iVar3 == 2128369009)
					{
						func_34(&iLocal_110);
					}
				}
				iLocal_82 = unk_0xE3903F59E2F22150() + 1500;
				iLocal_94 = 0;
			}
		}
	}
}

int func_387()
{
	int iVar0;
	
	iVar0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
	if (unk_0x91D5C8283D19AF49(iVar0, 0))
	{
		if (!unk_0x67FFBB75D2430704(iVar0, 0, 0))
		{
			if (unk_0x8AE34E8B10270D31(unk_0x33CD235DF1E6A94E()) || unk_0x8AE34E8B10270D31(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_388()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	int iVar3;
	
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
		{
			iLocal_93 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
		}
		vVar1 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true) };
		if (unk_0x52C7F2CBE015C31D(vVar1, func_59(0), 12f, 0) || unk_0x52C7F2CBE015C31D(vVar1, func_59(1), 12f, 0))
		{
			return 0;
		}
		if (func_394())
		{
			return 0;
		}
		if (func_393(iLocal_93, &vVar2))
		{
			if (!func_392(vVar2))
			{
				if (!func_391(vVar1) || func_390(vVar1))
				{
					return 0;
				}
			}
		}
		if (func_84(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), (30f * 0.5f)))
		{
			return 0;
		}
		if (!unk_0x782B99DB55846C95(iLocal_90, iLocal_93, 0, 0, false))
		{
			return 0;
		}
		unk_0x922453713201594A(1);
		if (unk_0x730FAC2C24A116EC(vVar1, 20f, 1, 1, &iVar0, 0, 1, -1))
		{
			if (unk_0x765F6FEEFF39224F(iVar0))
			{
				if (!unk_0xD62C4419A41F106A(iVar0, 0))
				{
					if (unk_0x72F7FAFD0710100C(iVar0, iLocal_93, 17))
					{
						return 0;
					}
				}
			}
			else
			{
				func_480("NO VEHICLES FOUND");
			}
		}
		iVar3 = unk_0x65F35477FEAD6F0F(unk_0x33CD235DF1E6A94E());
		if (!iVar3 == 0)
		{
			func_480("IN AN INTERIOR");
			return 0;
		}
		if (func_389())
		{
			return 0;
		}
	}
	return 1;
}

int func_389()
{
	func_471(&iLocal_51, 256);
	if (!func_479(iLocal_51, 2))
	{
		if (func_371(3))
		{
			func_471(&iLocal_51, 2);
			func_5(&iLocal_51, 32);
		}
		return 1;
	}
	else
	{
		func_370();
	}
	return 0;
}

int func_390(vector3 vParam0)
{
	if (((((((((vdist(vParam0, 491.76f, -515.73f, 29.51f) <= 12f || vdist(vParam0, -1453.385f, -594.2627f, 29.7966f) <= 12f) || vdist(vParam0, -633.6086f, -332.3337f, 33.81f) <= 25f) || vdist(vParam0, -1493.191f, -693.9906f, 26.0665f) <= 25f) || vdist(vParam0, -1512.938f, -675.6082f, 27.4202f) <= 25f) || vdist(vParam0, -1388.642f, -1342.266f, 3.1626f) <= 25f) || vdist(vParam0, 50.2024f, -1392.306f, 28.4166f) <= 12f) || vdist(vParam0, 25.9811f, -1392.289f, 28.3356f) <= 12f) || vdist(vParam0, 10.0435f, -1391.596f, 28.3074f) <= 12f) || vdist(vParam0, -1196.6f, -519.6772f, 31.9742f) <= 12f)
	{
		return 1;
	}
	return 0;
}

int func_391(vector3 vParam0)
{
	if ((((((vdist(vParam0, -1582.782f, 5168.163f, 18.5615f) <= 15f || vdist(vParam0, -1445.73f, -640.8375f, 28.7804f) <= 15f) || vdist(vParam0, -348.7544f, 292.5813f, 83.9843f) <= 15f) || vdist(vParam0, -273f, 317.8898f, 92.2549f) <= 15f) || vdist(vParam0, -1627.935f, -1083.443f, 3.2819f) <= 40f) || vdist(vParam0, -1661.098f, -1057.73f, 2.5729f) <= 40f) || vdist(vParam0, -1518.358f, -553.8981f, 32.1463f) <= 15f)
	{
		func_471(&iLocal_49, 2097152);
		return 1;
	}
	func_5(&iLocal_49, 2097152);
	return 0;
}

int func_392(vector3 vParam0)
{
	int iVar0;
	
	iVar0 = unk_0x8FE805A2903F1C0A(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false), 1, 1, 1077936128, 0);
	unk_0x2119DC81E4EDBA78(iVar0, &vParam0);
	if (unk_0xF9130D332492FAAF(iVar0))
	{
		if (!unk_0xB024BD7BA99751DA(iVar0))
		{
			if (vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false), vParam0) > 400f)
			{
				return 1;
			}
		}
		else if (vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false), vParam0) > 56.25f)
		{
			return 1;
		}
	}
	else if (!unk_0xB024BD7BA99751DA(iVar0))
	{
		if (vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false), vParam0) > 400f)
		{
			return 1;
		}
	}
	else
	{
		iVar0 = unk_0x8FE805A2903F1C0A(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false), 1, 8, 1077936128, 0);
		unk_0x2119DC81E4EDBA78(iVar0, &vParam0);
		if (vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false), vParam0) > 400f)
		{
			return 1;
		}
	}
	return 0;
}

int func_393(int iParam0, var uParam1)
{
	vector3 vVar0[4];
	
	vVar0[0 /*3*/] = { unk_0x2CA911E7569D12EA(iParam0, 2f, 0f, 0f) };
	vVar0[1 /*3*/] = { unk_0x2CA911E7569D12EA(iParam0, -2f, 0f, 0f) };
	vVar0[2 /*3*/] = { unk_0x2CA911E7569D12EA(iParam0, 0f, 2f, 0f) };
	vVar0[3 /*3*/] = { unk_0x2CA911E7569D12EA(iParam0, 0f, -2f, 0f) };
	if (unk_0x42FFEB8AC39C983D(vVar0[0 /*3*/], uParam1, 1077936128, 0))
	{
		return 1;
	}
	else if (unk_0x42FFEB8AC39C983D(vVar0[1 /*3*/], uParam1, 1077936128, 0))
	{
		return 1;
	}
	else if (unk_0x42FFEB8AC39C983D(vVar0[2 /*3*/], uParam1, 1077936128, 0))
	{
		return 1;
	}
	else if (unk_0x42FFEB8AC39C983D(vVar0[3 /*3*/], uParam1, 1077936128, 0))
	{
		return 1;
	}
	return 0;
}

bool func_394()
{
	return Global_68807;
}

int func_395()
{
	if (unk_0x1BCDA92AD0A7835B(joaat("carwash1")) > 0 || unk_0x1BCDA92AD0A7835B(joaat("carwash2")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_396()
{
	if (!func_479(iLocal_49, 128))
	{
		func_397(39, 1);
		func_397(40, 1);
		func_397(41, 1);
		func_397(42, 1);
		func_397(43, 1);
		func_397(44, 1);
		func_471(&iLocal_49, 128);
	}
}

void func_397(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_401(iParam0, 2, 1))
		{
			func_400(iParam0, 2, 1);
		}
	}
	else if (func_401(iParam0, 2, 1))
	{
		func_398(iParam0, 2, 1);
	}
}

void func_398(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xCE689A8E8C42ED78(&(Global_93734.f_1350[iParam0]), iParam1);
	}
	else if (unk_0xB331FCEB94EB05C8())
	{
		if (func_146() == 0)
		{
			iVar0 = func_134(func_399(iParam0), -1, 0);
			unk_0xCE689A8E8C42ED78(&iVar0, iParam1);
			func_131(func_399(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xCE689A8E8C42ED78(&(Global_106565.f_668[iParam0]), iParam1);
	}
}

int func_399(int iParam0)
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

void func_400(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x8950ED5730F62EE8(&(Global_93734.f_1350[iParam0]), iParam1);
	}
	else if (unk_0xB331FCEB94EB05C8())
	{
		if (func_146() == 0)
		{
			iVar0 = func_134(func_399(iParam0), -1, 0);
			unk_0x8950ED5730F62EE8(&iVar0, iParam1);
			func_131(func_399(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x8950ED5730F62EE8(&(Global_106565.f_668[iParam0]), iParam1);
	}
}

int func_401(int iParam0, int iParam1, bool bParam2)
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
		if (func_146() == 0)
		{
			return unk_0x0E4018692D92041D(func_134(func_399(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x0E4018692D92041D(Global_106565.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_402(var uParam0)
{
	if (func_479(iLocal_49, 2))
	{
		if (!func_57())
		{
			return;
		}
		func_93(1);
	}
	func_62();
	func_530();
	if (func_539())
	{
		func_524(uParam0);
	}
}

void func_403()
{
	if (!unk_0xD62C4419A41F106A(iLocal_90, 0))
	{
		if (unk_0x335C0645074963FE(iLocal_90, unk_0x33CD235DF1E6A94E(), 5f, 5f, 5f, 0, 1, 0) || func_479(iLocal_49, 8192))
		{
			unk_0x3FD9339AA95E323F(0, 101, 1);
			unk_0x3FD9339AA95E323F(0, 74, 1);
			unk_0x144904D2EAA84341(0, 51);
			if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0) && unk_0xF0D230FB550CD6EB(iLocal_90, 0))
			{
				unk_0x3D258435016D9F74(iLocal_90, 50);
				unk_0x0F74B05FB8108F9C(iLocal_90, 5f);
				if (func_479(iLocal_49, 16))
				{
					if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
					{
						unk_0xC035E897EDDE5AFA(unk_0x95B959F18401C09A(), 1);
						func_5(&iLocal_49, 16);
					}
				}
				iLocal_93 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
				if (unk_0x91D5C8283D19AF49(iLocal_93, 0))
				{
					if (unk_0xEE984ED4E4A374BE(iLocal_90, iLocal_93) && unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iLocal_93, 0))
					{
						func_480("***** prostitute IN VEHICLE****** ");
						if (func_479(iLocal_49, 8))
						{
							if (unk_0xCDA107F8BEE35F40(func_86()))
							{
								if (func_417(iLocal_93))
								{
									unk_0xCA57931F89E1D249(iLocal_90, unk_0x36163153849DFDA1("MINI_PROSTITUTE_LOW_RESTRICTED_PASSENGER"));
								}
								else if (func_416(iLocal_93))
								{
									unk_0xCA57931F89E1D249(iLocal_90, unk_0x36163153849DFDA1("MINI_PROSTITUTE_LOW_RESTRICTED_NOAMBIENT_PASSENGER"));
								}
								else if (func_415(iLocal_93))
								{
									unk_0xCA57931F89E1D249(iLocal_90, unk_0x36163153849DFDA1("MINI_PROSTITUTE_LOW_LOWRIDER_PASSENGER"));
								}
								else if (func_414(iLocal_93))
								{
									unk_0xCA57931F89E1D249(iLocal_90, unk_0x36163153849DFDA1("MINI_PROSTITUTE_LOW_LOWRIDER2_PASSENGER"));
								}
								else if (func_413(iLocal_93))
								{
									unk_0xCA57931F89E1D249(iLocal_90, unk_0x36163153849DFDA1("MINI_PROSTITUTE_LOW_INFERNUS2_PASSENGER"));
								}
								else if (func_412(iLocal_93))
								{
									unk_0xCA57931F89E1D249(iLocal_90, unk_0x36163153849DFDA1("MINI_PROSTITUTE_LOW_SC1_PASSENGER"));
								}
								else if (func_411(iLocal_93))
								{
									unk_0xCA57931F89E1D249(iLocal_90, unk_0x36163153849DFDA1("MINI_PROSTITUTE_LOW_TEZERACT_PASSENGER"));
								}
								else if (func_410(iLocal_93))
								{
									unk_0xCA57931F89E1D249(iLocal_90, unk_0x36163153849DFDA1("MINI_PROSTITUTE_LOW_DOMINATOR3_PASSENGER"));
								}
								else if (func_409(iLocal_93))
								{
									unk_0xCA57931F89E1D249(iLocal_90, unk_0x36163153849DFDA1("MINI_PROSTITUTE_LOW_ITALIGTO_PASSENGER"));
								}
								else if (func_408(iLocal_93))
								{
									unk_0xCA57931F89E1D249(iLocal_90, unk_0x36163153849DFDA1("MINI_PROSTITUTE_LOW_RESTRICTED_SCHLAGEN_PASSENGER"));
								}
								else if (func_407(iLocal_93))
								{
									unk_0xCA57931F89E1D249(iLocal_90, unk_0x36163153849DFDA1("MINI_PROSTITUTE_LOW_NEO_PASSENGER"));
								}
								else if (func_406(iLocal_93))
								{
									unk_0xCA57931F89E1D249(iLocal_90, unk_0x36163153849DFDA1("MINI_PROSTITUTE_LOW_PEYOTE2_PASSENGER"));
								}
								else
								{
									unk_0xCA57931F89E1D249(iLocal_90, unk_0x36163153849DFDA1("MINI_PROSTITUTE_LOW_PASSENGER"));
								}
							}
						}
						if (func_539())
						{
							unk_0x0D21E1FDE062ED99(iLocal_90, false, 0);
						}
						else
						{
							unk_0x0D21E1FDE062ED99(iLocal_90, true, 1);
						}
						func_175(iLocal_90, 0);
						func_383();
						iLocal_62 = unk_0xE3903F59E2F22150();
						func_34(&iLocal_101);
						iLocal_286 = 7;
					}
					else
					{
						func_480("SOMETHINGS GONE WRONGWITH PROS GETTING INTO VEHICLE , either her or player");
					}
				}
			}
			else
			{
				if ((func_405(iLocal_90, unk_0x33CD235DF1E6A94E(), 1) > 11f || func_404(20f)) || !unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iLocal_93, 0))
				{
					func_108(&iLocal_107);
					if (!unk_0xF0D230FB550CD6EB(iLocal_90, 0))
					{
						unk_0xED68CDDDE25A144E(iLocal_90);
						func_462(0);
						func_480("PROS FINISHED SEQUENCE TASK BUT NOT IN VEHICLE");
						func_89(15);
					}
				}
				if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
				{
					if (!unk_0x91D5C8283D19AF49(iLocal_93, 0))
					{
						iLocal_93 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
					}
					else if (!unk_0x782B99DB55846C95(iLocal_90, iLocal_93, 0, 0, false))
					{
						if (!func_105())
						{
							if (!func_479(iLocal_73, 1))
							{
								func_34(&iLocal_113);
								func_471(&iLocal_73, 1);
							}
							else if (func_7(&iLocal_113) > 20f)
							{
								func_119();
								func_480("prostitute couldn't get into the car");
								iLocal_286 = 6;
							}
						}
					}
				}
			}
		}
		else if (!func_479(iLocal_73, 1))
		{
			func_480("PLAYER out of range for entering VEHICLE or wanted level");
			unk_0xED68CDDDE25A144E(iLocal_90);
			func_89(15);
		}
	}
}

bool func_404(float fParam0)
{
	if (!func_10(&iLocal_107))
	{
		func_34(&iLocal_107);
	}
	return func_114(&iLocal_107) > fParam0;
}

float func_405(int iParam0, int iParam1, bool bParam2)
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

int func_406(int iParam0)
{
	if (unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		switch (unk_0x8D51A3997E8F3769(iParam0))
		{
			case -627376728:
				return 1;
				break;
			}
	}
	return 0;
}

int func_407(int iParam0)
{
	if (unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		switch (unk_0x8D51A3997E8F3769(iParam0))
		{
			case 986556497:
				return 1;
				break;
			}
	}
	return 0;
}

int func_408(int iParam0)
{
	if (unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		switch (unk_0x8D51A3997E8F3769(iParam0))
		{
			case -988377294:
				return 1;
				break;
			}
	}
	return 0;
}

int func_409(int iParam0)
{
	if (unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		switch (unk_0x8D51A3997E8F3769(iParam0))
		{
			case 510359473:
				return 1;
				break;
			}
	}
	return 0;
}

int func_410(int iParam0)
{
	if (unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		switch (unk_0x8D51A3997E8F3769(iParam0))
		{
			case 1212243433:
				return 1;
				break;
			}
	}
	return 0;
}

int func_411(int iParam0)
{
	if (unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		switch (unk_0x8D51A3997E8F3769(iParam0))
		{
			case 570040040:
			case -193022774:
				return 1;
				break;
			}
	}
	return 0;
}

int func_412(int iParam0)
{
	if (unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		switch (unk_0x8D51A3997E8F3769(iParam0))
		{
			case 1192783831:
				return 1;
				break;
			}
	}
	return 0;
}

int func_413(int iParam0)
{
	if (unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		switch (unk_0x8D51A3997E8F3769(iParam0))
		{
			case -1546132012:
				return 1;
				break;
			}
	}
	return 0;
}

int func_414(int iParam0)
{
	if (unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		switch (unk_0x8D51A3997E8F3769(iParam0))
		{
			case 1837596901:
			case 2013836096:
				return 1;
				break;
			}
	}
	return 0;
}

int func_415(int iParam0)
{
	if (unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		switch (unk_0x8D51A3997E8F3769(iParam0))
		{
			case 1697345049:
			case -635697407:
				return 1;
				break;
			}
	}
	return 0;
}

int func_416(int iParam0)
{
	if (unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		switch (unk_0x8D51A3997E8F3769(iParam0))
		{
			case -782720499:
			case -38413156:
			case 2071837743:
				return 1;
				break;
			}
	}
	return 0;
}

int func_417(int iParam0)
{
	if (unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		switch (unk_0x8D51A3997E8F3769(iParam0))
		{
			case 542797648:
			case 68566729:
			case 2033852426:
			case -1820894825:
			case -1453479140:
			case 2130662788:
			case 1410462333:
			case -317944664:
			case 1240573865:
				return 1;
				break;
			}
	}
	return 0;
}

void func_418(var uParam0)
{
	int iVar0;
	
	if (!func_427(0))
	{
		return;
	}
	if (!func_479(iLocal_49, 16))
	{
		unk_0xC035E897EDDE5AFA(unk_0x95B959F18401C09A(), 0);
		func_471(&iLocal_49, 16);
	}
	if (!func_10(&iLocal_107))
	{
		func_461(&iLocal_107);
	}
	if (func_114(&iLocal_107) >= 20f || !unk_0x335C0645074963FE(iLocal_90, unk_0x33CD235DF1E6A94E(), 3f, 3f, 3f, 0, 1, 0))
	{
		if (func_479(iLocal_73, 524288))
		{
			func_108(&iLocal_107);
			iLocal_286 = 6;
		}
		else if (func_426())
		{
			func_34(&iLocal_107);
			func_471(&iLocal_73, 524288);
		}
	}
	func_63(iLocal_90);
	if (((unk_0x335C0645074963FE(iLocal_90, unk_0x33CD235DF1E6A94E(), 3f, 3f, 3f, 0, 1, 0) || func_479(iLocal_73, 1)) && !func_209(0)) && !func_394())
	{
		if (!unk_0x782B99DB55846C95(iLocal_90, iLocal_93, 0, 0, false))
		{
			if (!func_105())
			{
				if (!func_479(iLocal_73, 1))
				{
					func_34(&iLocal_113);
					func_471(&iLocal_73, 1);
				}
				else if (func_7(&iLocal_113) > 10f)
				{
					func_62();
					unk_0xED68CDDDE25A144E(iLocal_90);
					func_480("prostitute couldn't get into the car");
					iLocal_286 = 6;
				}
			}
		}
		else
		{
			func_419();
		}
	}
	else if (func_459("PROS_ACCEPT"))
	{
		func_5(&iLocal_49, 1048576);
		func_457();
		if (func_539())
		{
			iVar0 = unk_0xD76D6BCC14B95CE1(iLocal_90, -2017877118);
			if (iVar0 != 1 && iVar0 != 0)
			{
				func_530();
				func_524(uParam0);
			}
		}
	}
}

void func_419()
{
	char* sVar0;
	
	if (iLocal_286 != 5 && func_355(&sVar0, 0))
	{
		func_422();
		if (func_420(iLocal_72, 1) || unk_0x1578197A616E70FA(unk_0x95B959F18401C09A()))
		{
			unk_0xAEED0213982928AC(unk_0x33CD235DF1E6A94E(), "HOOKER_REQUEST", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			func_471(&iLocal_49, 8192);
			func_34(&iLocal_107);
		}
		if (func_479(iLocal_49, 8192))
		{
			func_457();
			Global_25915 = 1;
			Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_406 = 1;
			func_124("PROSTITUTES_SOLICIT_SCENE");
			func_81("PROSTITUTES_DRIVE_SCENE");
			if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
			{
				if (unk_0xD76D6BCC14B95CE1(iLocal_90, -1794415470) != 1 && !unk_0x10930B9CAD4111C2(iLocal_90, unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), 1))
				{
					unk_0xC838CE9837D0ABAF(iLocal_90, iLocal_93, -1, 0, 1f, 8388609, 0);
				}
			}
			sLocal_61 = func_44(unk_0x33CD235DF1E6A94E(), 1, 0);
			unk_0x0483D0035D6E46FD(sLocal_61);
			sLocal_61 = func_44(unk_0x33CD235DF1E6A94E(), 0, 1);
			unk_0x0483D0035D6E46FD(sLocal_61);
			func_34(&iLocal_101);
			iLocal_286 = 5;
		}
	}
}

int func_420(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_421(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0xF272A2699B521CE6(unk_0x3EE1295CEFBEFED4()))
	{
		return 0;
	}
	if (func_209(0))
	{
		return 0;
	}
	if (unk_0x286C823E0969F22A())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_37139[iVar0 /*32*/] == 1 && Global_37139[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_37139[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_37139[iVar0 /*32*/].f_5 = 1;
			Global_37139[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_37139[iVar0 /*32*/] == 0)
			{
			}
			if (Global_37139[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_421(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_37139[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_422()
{
	if (Global_25915)
	{
		if (unk_0xD9C92B0885A075F8())
		{
			return;
		}
		unk_0x3FD9339AA95E323F(0, 101, 1);
		unk_0x3FD9339AA95E323F(0, 74, 1);
		unk_0x144904D2EAA84341(0, 51);
		if (!func_479(iLocal_49, 8192))
		{
			if (iLocal_72 == -1)
			{
				func_424(&iLocal_72, 5, "PROS_ACCEPT", 0, 0, 0, 0);
			}
		}
	}
	else if (func_423(iLocal_72, 0))
	{
		func_457();
	}
}

int func_423(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_421(iParam0);
	if (iParam1 == 0)
	{
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	else
	{
		iVar0 = iParam0;
	}
	if (iVar0 < 0)
	{
		return 0;
	}
	if (Global_37139[iVar0 /*32*/].f_6)
	{
		return 0;
	}
	iVar1 = 0;
	if (!Global_37139[iVar0 /*32*/].f_12)
	{
		unk_0x6D39881CA5436178(&(Global_37139[iVar0 /*32*/].f_8));
		unk_0xFA6BEE2B1507FF1E(&Global_37334);
		iVar1 = unk_0xA32C2C4DF096C08A(0);
	}
	else
	{
		unk_0x6D39881CA5436178(&(Global_37139[iVar0 /*32*/].f_8));
		unk_0xFA6BEE2B1507FF1E(&Global_37334);
		if (Global_37139[iVar0 /*32*/].f_30)
		{
			unk_0xD61E5ED1D4E687A5(&(Global_37139[iVar0 /*32*/].f_13));
		}
		else
		{
			unk_0xFA6BEE2B1507FF1E(&(Global_37139[iVar0 /*32*/].f_13));
		}
		iVar1 = unk_0xA32C2C4DF096C08A(0);
	}
	return iVar1;
}

void func_424(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x1BCDA92AD0A7835B(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x71EC91BA8C88BCE0())
	{
		if (!*iParam0 == -1)
		{
			func_425(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_37139[iVar0 /*32*/])
		{
			Global_37139[iVar0 /*32*/] = 1;
			Global_37139[iVar0 /*32*/].f_1 = Global_37340;
			Global_37340++;
			Global_37139[iVar0 /*32*/].f_4 = 0;
			Global_37139[iVar0 /*32*/].f_29 = 0;
			Global_37139[iVar0 /*32*/].f_5 = 0;
			Global_37139[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_37139[iVar0 /*32*/].f_8), sParam2, 16);
			Global_37139[iVar0 /*32*/].f_6 = iParam3;
			Global_37139[iVar0 /*32*/].f_31 = unk_0x8C40DC84EDF05997();
			Global_37139[iVar0 /*32*/].f_7 = 0;
			Global_37139[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0x786AF4A44E1B5B4B(sParam4))
			{
				Global_37139[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_37139[iVar0 /*32*/].f_13), sParam4, 64);
				Global_37139[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_37139[iVar0 /*32*/].f_12 = 0;
				Global_37139[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_37139[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_425(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_421(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_37139[iVar0 /*32*/])
		{
			Global_37139[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_426()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x765F6FEEFF39224F(iLocal_90) || unk_0xBC2FC12AD0FBF72E(iLocal_90))
	{
		return 1;
	}
	if (!func_539())
	{
		func_62();
		if (unk_0xF0D230FB550CD6EB(iLocal_90, 1))
		{
			unk_0xBD4591245C650283(iLocal_90, 1193033728, 0);
		}
		else if (func_479(iLocal_49, 4194304))
		{
			iVar0 = unk_0x9EC3B269A34A2BEE(8, 11);
			unk_0x99414FB2D30425C1(&iVar1);
			unk_0x108754262311D34F(0, func_61(iLocal_284), func_60(5), 2f, -2f, -1, 0, 0, 0, 0, 0);
			unk_0x108754262311D34F(0, func_61(iLocal_284), func_60(iVar0), 8f, -8f, -1, 1, 0, 0, 0, 0);
			unk_0xC734F59A13D39AEF(iVar1);
			unk_0x13A2D602CD10CBAC(iLocal_90, iVar1);
			unk_0xA7A57E7757ED035E(&iVar1);
		}
		return 1;
	}
	if (unk_0xF0D230FB550CD6EB(iLocal_90, 1))
	{
		if (unk_0x0A81FE3D92AE2AC9(iLocal_90))
		{
			unk_0xBD4591245C650283(iLocal_90, 1193033728, 0);
			return 1;
		}
		else
		{
			unk_0xA5F44EC021F96C6B(iLocal_90);
			return 0;
		}
	}
	switch (iLocal_55)
	{
		case 0:
			if (func_479(iLocal_49, 4194304))
			{
				func_62();
				iLocal_55 = 1;
			}
			break;
		
		case 1:
			if (unk_0x0A81FE3D92AE2AC9(iLocal_90))
			{
				unk_0x108754262311D34F(iLocal_90, func_61(iLocal_284), func_60(5), 2f, -2f, -1, 0, 0, 0, 0, 0);
				iLocal_55 = 2;
			}
			else
			{
				unk_0xA5F44EC021F96C6B(iLocal_90);
			}
			break;
		
		case 2:
			if (unk_0x0A81FE3D92AE2AC9(iLocal_90))
			{
				if (unk_0xD76D6BCC14B95CE1(iLocal_90, -2017877118) == 7)
				{
					iVar0 = unk_0x9EC3B269A34A2BEE(8, 11);
					unk_0x108754262311D34F(iLocal_90, func_61(iLocal_284), func_60(iVar0), 8f, -8f, -1, 1, 0, 0, 0, 0);
					iLocal_55 = 3;
				}
			}
			else
			{
				unk_0xA5F44EC021F96C6B(iLocal_90);
			}
			break;
		
		case 3:
			iLocal_55 = 0;
			return 1;
			break;
	}
	return 0;
}

int func_427(bool bParam0)
{
	if (unk_0xD62C4419A41F106A(iLocal_90, 0))
	{
		return 0;
	}
	if (func_479(iLocal_49, 8192))
	{
	}
	if (func_405(iLocal_90, unk_0x33CD235DF1E6A94E(), 1) > 11f)
	{
		return 0;
	}
	if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		return 0;
	}
	if (func_539())
	{
		if (unk_0x340117F85AC524D4(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0)) > 1)
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (unk_0x8BB475EA09C9A0EB(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0)) > 2f)
		{
			return 0;
		}
	}
	if (func_84(unk_0xFBB1F99A825CAB09(iLocal_90, true), 1106247680))
	{
		if (!func_479(iLocal_50, 8192) && !unk_0x66D2F163EA29BDEE(unk_0x33CD235DF1E6A94E()))
		{
			func_342("PROS_COPS", -1);
			func_471(&iLocal_50, 8192);
		}
		return 0;
	}
	if (!func_369())
	{
		if (!func_539())
		{
			if ((!iLocal_86 && !Global_105612) && func_429(unk_0x33CD235DF1E6A94E(), 0) == -1)
			{
				func_342("PROS_CAR", -1);
				iLocal_86 = 1;
			}
			func_428();
		}
		else if (!func_512(4096))
		{
			func_342("PROS_CAR", -1);
			func_189(4096);
		}
		return 0;
	}
	return 1;
}

void func_428()
{
	if (unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		return;
	}
	if (!func_479(iLocal_49, 1))
	{
		if (!unk_0x8B76D954998C9E96(unk_0x33CD235DF1E6A94E()) && !unk_0x8B76D954998C9E96(iLocal_90))
		{
			unk_0xAEED0213982928AC(unk_0x33CD235DF1E6A94E(), "HOOKER_CAR_INCORRECT", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			func_471(&iLocal_49, 1);
		}
	}
}

int func_429(int iParam0, int iParam1)
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

void func_430()
{
	if (func_427(0))
	{
		func_419();
		if (unk_0xD76D6BCC14B95CE1(iLocal_90, 242628503) == 7 && !func_479(iLocal_49, 8192))
		{
			if (func_66(1))
			{
				func_108(&iLocal_107);
				iLocal_62 = unk_0xE3903F59E2F22150();
				func_480("prostitute proposition player VEHICLE");
				iLocal_286 = 4;
			}
		}
	}
	else
	{
		unk_0xED68CDDDE25A144E(iLocal_90);
		func_89(15);
	}
}

void func_431(var uParam0)
{
	if (func_427(0))
	{
		func_419();
		if (unk_0xD76D6BCC14B95CE1(iLocal_90, 242628503) == 7 || func_479(iLocal_49, 8192))
		{
			iLocal_286 = 3;
		}
		else if (func_404(20f))
		{
			func_108(&iLocal_107);
			func_462(0);
		}
		else
		{
			func_432(uParam0);
		}
	}
	else
	{
		unk_0xED68CDDDE25A144E(iLocal_90);
		func_89(15);
	}
}

void func_432(var uParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	int iVar6;
	
	if (!unk_0x765F6FEEFF39224F(iLocal_93))
	{
		return;
	}
	unk_0xFEF5F9BB57EA2E8D(unk_0x541D5C57194E73C4(iLocal_93), &vVar2, &vVar1);
	vVar0 = { vVar1 - vVar2 };
	vVar0 = { vVar0 / Vector(2f, 2f, 2f) };
	vVar3 = { unk_0x2CA911E7569D12EA(iLocal_93, -(vVar0.x + 0.2f), 0f, 0f) };
	vVar4 = { unk_0x2CA911E7569D12EA(iLocal_93, (vVar0.x + 0.2f), 0f, 0f) };
	vVar5 = { unk_0xFBB1F99A825CAB09(iLocal_90, true) };
	if (vdist(vVar5, vVar4) < vdist(vVar5, vVar3))
	{
		vVar3 = { vVar4 };
	}
	if ((unk_0xD76D6BCC14B95CE1(iLocal_90, -1794415470) != 1 || !func_479(iLocal_49, 8192)) && vdist2(vLocal_89, vVar3) > 0f)
	{
		if (func_539())
		{
			if (!unk_0x5A04E3BD0B5E7E49(iLocal_90))
			{
				unk_0x0D21E1FDE062ED99(iLocal_90, false, 1);
			}
			func_442(&uLocal_281, func_61(iLocal_284));
			func_436(uParam0, 1);
			func_433(&uLocal_281, uParam0);
		}
		unk_0x99414FB2D30425C1(&iVar6);
		unk_0x7E268975AF5EA74F(0, vVar3.x, vVar3.y, vVar3.z, 1f, -1, 1f, 8192, 1193033728);
		unk_0x9F878FE3F23E2C8B(0, unk_0x61B226C460A8FCC2(unk_0x33CD235DF1E6A94E(), 31086, 0f, 0f, 0f), 0);
		unk_0xC734F59A13D39AEF(iVar6);
		unk_0x13A2D602CD10CBAC(iLocal_90, iVar6);
		unk_0xA7A57E7757ED035E(&iVar6);
		vLocal_89 = { vVar3 };
	}
}

void func_433(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0x6D2E2622CA149402((*uParam0)[iVar0]))
		{
			func_434(uParam1, (*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_434(var uParam0, char* sParam1)
{
	func_435(uParam0, 1, -1, sParam1, 0);
}

void func_435(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x0E4018692D92041D((*uParam0)[iVar0 /*18*/], 30))
		{
			if (unk_0x0E4018692D92041D((*uParam0)[iVar0 /*18*/], iParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 != 4)
				{
					if (!unk_0xCE3CFF625BEBAA04(sParam3, "NULL"))
					{
						if (unk_0xCE3CFF625BEBAA04(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
						{
							return;
						}
					}
				}
				if (iParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_271)
	{
		uParam0->f_271 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!unk_0x0E4018692D92041D((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0x8950ED5730F62EE8(uParam0[iVar0 /*18*/], iParam1);
			unk_0x8950ED5730F62EE8(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

void func_436(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_438(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_437(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_271 = 0;
	uParam0->f_272 = -1;
	uParam0->f_273 = 1;
}

void func_437(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_438(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x0E4018692D92041D((*uParam0)[iVar0 /*18*/], 30))
		{
			func_439(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_271 = 1;
}

void func_439(var uParam0)
{
	func_440(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_440(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0x0E4018692D92041D(iParam0, 30))
	{
		switch (func_441(iParam0))
		{
			case 0:
				unk_0x71CA80D41E1338B4(iParam2);
				break;
			
			case 1:
				unk_0xFF2DEA68E2D3602E(sParam1);
				break;
			
			case 2:
				unk_0x80BCAFF1FDCC7E85(sParam1);
				break;
			
			case 3:
				unk_0x30F6F0B876E12AD8(sParam1);
				break;
			
			case 4:
				unk_0x4167B14D99BD7D75(iParam2, sParam1);
				break;
			
			case 5:
				unk_0xF1C2AA9472B34A78(sParam1);
				break;
			
			case 6:
				unk_0xC16C998D785ABF3A();
				break;
			
			case 7:
				unk_0x7316EA42E2F967B0(iParam2);
				break;
			
			case 8:
				unk_0xB073DB452891DC0B(iParam2, unk_0x0E4018692D92041D(iParam0, 26));
				break;
			
			case 9:
				unk_0xAEF90BD69E5087CF();
				break;
			
			default:
				break;
		}
	}
}

int func_441(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x0E4018692D92041D(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_442(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0x6D2E2622CA149402((*uParam0)[iVar0]))
		{
			if (unk_0xCE3CFF625BEBAA04((*uParam0)[iVar0], sParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_443(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = sParam1;
	return 1;
}

int func_443(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (unk_0x6D2E2622CA149402((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_444(var uParam0)
{
	char* sVar0;
	
	if (func_427(1))
	{
		if (!func_10(&iLocal_107))
		{
			func_461(&iLocal_107);
		}
		func_471(&iLocal_49, 4);
		Global_25916 = 1;
		func_419();
		if (func_460(&iLocal_107, 2f) || func_479(iLocal_49, 8192))
		{
			func_471(&iLocal_49, 2);
			if (func_355(&sVar0, 0))
			{
				unk_0x990A34F9DA8E506D(unk_0x33CD235DF1E6A94E(), 0);
				unk_0xCBDEE923F851F500(unk_0x33CD235DF1E6A94E(), 0);
				unk_0xC4A347124F39D998(unk_0x33CD235DF1E6A94E(), iLocal_90, -1, 2048, 4);
				func_432(uParam0);
				func_471(&iLocal_49, 4);
				Global_25915 = 1;
				Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_406 = 1;
				iLocal_286 = 2;
			}
			else
			{
				if (unk_0xCE3CFF625BEBAA04(func_456(&sVar0), "PIM_HHIDCR"))
				{
					func_455(&sVar0, 30000);
					func_453(1);
				}
				else
				{
					func_342(&sVar0, -1);
				}
				if (!unk_0x786AF4A44E1B5B4B(&sVar0) && unk_0xCE3CFF625BEBAA04(&sVar0, "PROS_NO_MONEY"))
				{
					func_445();
				}
				func_89(0);
				iLocal_287 = 0;
				func_471(&iLocal_49, 8388608);
				func_5(&iLocal_49, 4);
				Global_25915 = 0;
				Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_406 = 0;
			}
		}
	}
	else
	{
		func_5(&iLocal_49, 4);
		Global_25916 = 0;
	}
}

void func_445()
{
	if (!func_512(64))
	{
		func_446(0, 31, 5);
		func_189(64);
	}
}

void func_446(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0x0DB260A75EDF2C76())
	{
		return;
	}
	if (unk_0xB331FCEB94EB05C8() && func_450(unk_0x95B959F18401C09A(), 1))
	{
		return;
	}
	if (unk_0xF1CDE9FD207C4CD8(2, 199) || unk_0x1CAA347A3C84C225(2, 199))
	{
		return;
	}
	if (unk_0x1B9A01A53920FD50() != 0)
	{
		return;
	}
	if (unk_0xD9C92B0885A075F8())
	{
		return;
	}
	if (unk_0x24B9147563567EC4())
	{
		return;
	}
	if (unk_0x15C85368E432C647())
	{
		return;
	}
	if (func_449())
	{
		return;
	}
	if (!func_447())
	{
		return;
	}
	if (unk_0xB331FCEB94EB05C8() || iParam0)
	{
		if (!Global_93734.f_1409 && !unk_0xBAA5E93732372E34())
		{
			iVar0 = 18;
			_set_warning_message_2("BRSCRWTEX", "BRDISTEX", iVar0, "BRSHETEX", 0, -1, 0, 0, 1, 0);
			Global_2459667 = iParam1;
			Global_93734.f_1409 = 1;
			Global_93734.f_1410 = iParam2;
		}
	}
}

int func_447()
{
	if (func_448())
	{
		return 0;
	}
	if (unk_0xB16BC34F6CB4A57A() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_448()
{
	return Global_2459114;
}

bool func_449()
{
	return Global_2459772;
}

int func_450(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_451(iParam0))
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

bool func_451(int iParam0)
{
	return func_452(iParam0);
}

bool func_452(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_13.f_1, 0);
}

void func_453(int iParam0)
{
	unk_0x19200462D21D0B7A(3, 21, 200, 0, 0);
	if (iParam0 && !func_454())
	{
		unk_0x0F8EAEEC97DDBCB3(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", false);
	}
}

bool func_454()
{
	return Global_2437364.f_2708[0 /*80*/].f_1 != 0;
}

void func_455(char* sParam0, int iParam1)
{
	unk_0x37621D6689F9E3C3(sParam0);
	unk_0x092150016C06C431(0, 0, false, iParam1);
}

char* func_456(char* sParam0)
{
	return sParam0;
}

void func_457()
{
	if (iLocal_72 != -1)
	{
		func_425(&iLocal_72);
	}
}

void func_458(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_459(char* sParam0)
{
	unk_0x6D39881CA5436178(sParam0);
	return unk_0xA32C2C4DF096C08A(0);
}

int func_460(int iParam0, float fParam1)
{
	if (func_217(iParam0, fParam1))
	{
		func_108(iParam0);
		return 1;
	}
	return 0;
}

void func_461(int iParam0)
{
	if (!func_10(iParam0))
	{
		func_34(iParam0);
	}
}

void func_462(int iParam0)
{
	bool bVar0;
	
	func_119();
	if (iParam0 || iLocal_70 == 0)
	{
		bVar0 = true;
		if (func_539())
		{
			bVar0 = false;
		}
		func_99(bVar0);
		func_89(14);
	}
	else
	{
		func_99(0);
		func_89(15);
	}
}

int func_463()
{
	if ((((((func_470() || func_469()) || func_468()) || func_467()) || func_464()) || Global_2394733) || Global_2394733.f_1 != 0)
	{
		return 1;
	}
	return 0;
}

int func_464()
{
	if (func_466() || func_465())
	{
		return Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_98 == 8;
	}
	return 0;
}

var func_465()
{
	return Global_2448756.f_623;
}

bool func_466()
{
	return unk_0x0E4018692D92041D(Global_2448756.f_2, 11);
}

bool func_467()
{
	return unk_0x0E4018692D92041D(Global_2448756, 5);
}

bool func_468()
{
	return unk_0x0E4018692D92041D(Global_2448756, 2);
}

bool func_469()
{
	return unk_0x0E4018692D92041D(Global_2448756, 20);
}

var func_470()
{
	return Global_2448756.f_586;
}

void func_471(int iParam0, int iParam1)
{
	func_472(iParam0, iParam1);
}

void func_472(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_473()
{
	if (Global_25917)
	{
		return 0;
	}
	if (func_539())
	{
		return 0;
	}
	if (!func_476())
	{
		return 0;
	}
	if (func_474())
	{
		iLocal_287 = 4;
		return 1;
	}
	return 0;
}

int func_474()
{
	int iVar0;
	
	iLocal_92 = unk_0x5E65439BE0A05829(unk_0xFBB1F99A825CAB09(iLocal_90, true), 15f, 0, 6);
	if (unk_0x765F6FEEFF39224F(iLocal_92) && !unk_0xD62C4419A41F106A(iLocal_92, 0))
	{
		if (unk_0x91D5C8283D19AF49(iLocal_92, 0))
		{
			if (func_85(&iLocal_92))
			{
				iLocal_91 = unk_0x7BDC41A7CA0C77A2(iLocal_92, -1, 0);
				if (!iLocal_91 == 0)
				{
					if (func_475(&iLocal_91))
					{
						iVar0 = unk_0x541D5C57194E73C4(iLocal_92);
						if (!iVar0 == joaat("taxi") && !iVar0 == joaat("taxi"))
						{
							if (!unk_0x5A04E3BD0B5E7E49(iLocal_91))
							{
								unk_0x0D21E1FDE062ED99(iLocal_91, true, 0);
							}
							if (!unk_0x5A04E3BD0B5E7E49(iLocal_92))
							{
								unk_0x0D21E1FDE062ED99(iLocal_92, true, 0);
							}
							unk_0x4A852F02088ECC9D(iLocal_91, true);
							unk_0x43D47AD82DA3C6EC(iLocal_91, false, 1);
							unk_0x43D47AD82DA3C6EC(iLocal_92, false, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	iLocal_92 = 0;
	iLocal_91 = 0;
	return 0;
}

int func_475(int iParam0)
{
	if (!unk_0xBC2FC12AD0FBF72E(*iParam0))
	{
		if (unk_0x28C4F998CC33B00F(*iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_476()
{
	if (unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0) || unk_0xD62C4419A41F106A(iLocal_90, 0))
	{
		return 0;
	}
	return 1;
}

int func_477()
{
	if ((!func_476() || !unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0)) || func_479(iLocal_49, 4096))
	{
		return 0;
	}
	if (func_479(iLocal_49, 32))
	{
		iLocal_287 = 2;
		func_93(2);
		func_480("IS_CUSTOMER_A_PLAYER is TRUE");
		return 1;
	}
	return 0;
}

void func_478()
{
	if (!unk_0xD62C4419A41F106A(iLocal_90, 0))
	{
		if (!unk_0xD82CBCB7E04DDA8A(iLocal_90))
		{
			if (unk_0xD76D6BCC14B95CE1(iLocal_90, 1805844857) != 1)
			{
				unk_0x4A852F02088ECC9D(iLocal_90, false);
				unk_0x33F6BE48E356DA27(iLocal_90, 196628, true);
				unk_0x07CA8FF5BA390419(iLocal_90);
				unk_0xECCD4FDA45197F97(iLocal_90, unk_0x33CD235DF1E6A94E(), 300f, -1, 1, 0);
				unk_0x897EF720254BBEA3(iLocal_90, true);
				func_89(15);
			}
		}
	}
}

bool func_479(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_480(char* sParam0)
{
}

int func_481()
{
	if (unk_0xBC2FC12AD0FBF72E(iLocal_90))
	{
		return 0;
	}
	if (unk_0xD76D6BCC14B95CE1(iLocal_90, 1435919172) == 1)
	{
		return 0;
	}
	if (unk_0x5896FA9B8FD8B022(iLocal_90))
	{
		return 0;
	}
	return 1;
}

int func_482()
{
	switch (iLocal_291)
	{
		case 0:
			if (!func_539())
			{
				func_442(&uLocal_281, func_61(iLocal_284));
				func_433(&uLocal_281, &uLocal_369);
				func_480("Moving to PROSTITUTE_INIT_STREAMING");
			}
			if (func_539())
			{
				unk_0x4F8CF72358604361(1);
				unk_0x9D34F024713B3952(1);
				unk_0xA5F44EC021F96C6B(iLocal_90);
			}
			iLocal_291 = 1;
			break;
		
		case 1:
			if (!func_539())
			{
				if (func_483(&uLocal_369))
				{
					func_471(&iLocal_49, 4194304);
					func_480("Moving to PROSTITUTE_INIT_INIT");
					iLocal_291 = 2;
				}
			}
			else if (func_539())
			{
				func_471(&iLocal_49, 4194304);
				func_480("Moving to PROSTITUTE_INIT_INIT");
				iLocal_291 = 2;
			}
			break;
		
		case 2:
			iLocal_288 = 0;
			iLocal_67 = iLocal_288;
			func_5(&iLocal_49, 512);
			func_5(&iLocal_49, 1024);
			iLocal_287 = 0;
			iLocal_91 = 0;
			iLocal_92 = 0;
			func_480("Moving to PROSTITUTE_INIT_COMPLETE");
			iLocal_291 = 3;
			break;
		
		case 3:
			if (!unk_0xBC2FC12AD0FBF72E(iLocal_90))
			{
				if (!func_539())
				{
					unk_0x4A852F02088ECC9D(iLocal_90, false);
					unk_0x6EE33B67DCAC6DB1(iLocal_90, 0);
					func_458(&uLocal_116, 4, iLocal_90, "Prostitutes", 0, 1);
					return 1;
				}
				else if (!unk_0x0A81FE3D92AE2AC9(iLocal_90))
				{
					unk_0xA5F44EC021F96C6B(iLocal_90);
				}
				else
				{
					unk_0x4A852F02088ECC9D(iLocal_90, false);
					func_458(&uLocal_116, 4, iLocal_90, "Prostitutes", 0, 1);
					unk_0x6EE33B67DCAC6DB1(iLocal_90, 0);
					unk_0x3E2A39F699947160(iLocal_90);
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_483(var uParam0)
{
	return func_484(uParam0);
}

int func_484(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_271)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x0E4018692D92041D((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!unk_0x0E4018692D92041D((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_485(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_271 = 0;
	return 1;
}

bool func_485(var uParam0)
{
	return func_486(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_486(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0x0E4018692D92041D(iParam0, 30))
	{
		if (unk_0x0E4018692D92041D(iParam0, 29))
		{
			switch (func_441(iParam0))
			{
				case 0:
					return unk_0x5D98D654CDC2165A(iParam2);
					break;
				
				case 1:
					return unk_0xE9CCF312047EBEE0(sParam1);
					break;
				
				case 2:
					return unk_0xCDA107F8BEE35F40(sParam1);
					break;
				
				case 3:
					return unk_0xD83C9F072D059CC4(sParam1);
					break;
				
				case 4:
					return unk_0x371855A6F27F144B(iParam2, sParam1);
					break;
				
				case 5:
					return unk_0xB6596C29F3179D0C(sParam1);
					break;
				
				case 6:
					return unk_0x3C05A6D663EA1B6A(sParam1, unk_0x0E4018692D92041D(iParam0, 27), -1);
					break;
				
				case 7:
					return unk_0x854F5F1E3A6FEA55(iParam2);
					break;
				
				case 8:
					return unk_0x8A7F864DAB908749(iParam2);
					break;
				
				case 9:
					return unk_0xD3957903B061A8C8();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_487()
{
	if (unk_0x71EC91BA8C88BCE0())
	{
		if (func_18() == 0)
		{
			if (func_488(iLocal_90, 537.0014f, 119.0252f, 96.0997f, 1) <= 8f)
			{
				if (!unk_0x9E08E12414BD4476(iLocal_90, 1))
				{
					if (func_539())
					{
						unk_0x0D21E1FDE062ED99(iLocal_90, false, 0);
					}
					else
					{
						unk_0x0D21E1FDE062ED99(iLocal_90, true, 1);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

float func_488(int iParam0, vector3 vParam1, bool bParam2)
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

int func_489()
{
	if (unk_0x37FBF97457299644(iLocal_90, func_59(0)))
	{
		if (unk_0xBFE245904B30A6ED(iLocal_90, "amb@world_human_prostitute@crackhooker@base", "base"))
		{
			return 0;
		}
		if (unk_0xBFE245904B30A6ED(iLocal_90, "amb@world_human_prostitute@cokehead@base", "base"))
		{
			return 1;
		}
	}
	if (unk_0x37FBF97457299644(iLocal_90, func_59(1)))
	{
		if (unk_0xBFE245904B30A6ED(iLocal_90, "amb@world_human_prostitute@french@base", "base"))
		{
			return 3;
		}
		if (unk_0xBFE245904B30A6ED(iLocal_90, "amb@world_human_prostitute@hooker@base", "base"))
		{
			return 2;
		}
	}
	return -1;
}

void func_490()
{
	if (unk_0xD62C4419A41F106A(iLocal_90, 0))
	{
		return;
	}
	if (iLocal_285 != 3 && iLocal_285 != 4)
	{
		func_491(unk_0x33CD235DF1E6A94E());
	}
	else if (iLocal_285 == 3)
	{
		func_491(iLocal_91);
	}
}

void func_491(int iParam0)
{
	if (unk_0xD62C4419A41F106A(iParam0, 0))
	{
		return;
	}
	if (func_539())
	{
		if (!unk_0x0A81FE3D92AE2AC9(iParam0))
		{
			unk_0xA5F44EC021F96C6B(iParam0);
			return;
		}
	}
	if (func_405(iParam0, iLocal_90, 1) < 30f)
	{
		if (!unk_0xFB2C4D32FED130AB(iLocal_90, iParam0))
		{
			if (func_539())
			{
				if (unk_0x0A81FE3D92AE2AC9(iLocal_90))
				{
					unk_0xE0DAC4ABE9900D9A(iLocal_90);
					unk_0xC4A347124F39D998(iLocal_90, iParam0, -1, 2048, 4);
				}
			}
			else
			{
				unk_0xE0DAC4ABE9900D9A(iLocal_90);
				unk_0xC4A347124F39D998(iLocal_90, iParam0, -1, 2048, 4);
			}
		}
	}
	else if (unk_0xFB2C4D32FED130AB(iLocal_90, iParam0))
	{
		if (func_539())
		{
			if (unk_0x0A81FE3D92AE2AC9(iLocal_90))
			{
				unk_0xE0DAC4ABE9900D9A(iLocal_90);
			}
		}
		else
		{
			unk_0xE0DAC4ABE9900D9A(iLocal_90);
		}
	}
}

void func_492()
{
	if (Global_25915)
	{
		if (unk_0x91D5C8283D19AF49(iLocal_93, 0))
		{
			if (unk_0x10930B9CAD4111C2(iLocal_90, iLocal_93, 0))
			{
				func_493();
			}
		}
		return;
	}
	if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) > 0)
	{
		return;
	}
	if (unk_0xD62C4419A41F106A(iLocal_90, 0) || !unk_0x765F6FEEFF39224F(iLocal_90))
	{
		if (Global_25919 != unk_0x8C40DC84EDF05997() && func_479(iLocal_49, 32))
		{
			func_5(&iLocal_49, 32);
		}
		return;
	}
	if ((vdist2(unk_0xFBB1F99A825CAB09(iLocal_90, true), unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true)) < Global_25918 || Global_25918 == 0f) && iLocal_287 != 4)
	{
		Global_25918 = vdist2(unk_0xFBB1F99A825CAB09(iLocal_90, true), unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true));
		Global_25919 = unk_0x8C40DC84EDF05997();
		func_471(&iLocal_49, 32);
	}
	else if (Global_25919 == unk_0x8C40DC84EDF05997())
	{
		Global_25918 = vdist2(unk_0xFBB1F99A825CAB09(iLocal_90, true), unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true));
	}
	else
	{
		func_5(&iLocal_49, 32);
	}
}

void func_493()
{
	if (func_539())
	{
		if (unk_0x0A81FE3D92AE2AC9(iLocal_90))
		{
			unk_0x41E36A540F8F323F(iLocal_90, 323, true);
		}
	}
	else
	{
		unk_0x41E36A540F8F323F(iLocal_90, 323, true);
	}
}

void func_494(var uParam0)
{
	if (!iLocal_286 == 12)
	{
		if (!unk_0xD62C4419A41F106A(iLocal_90, 0) && !unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
		{
			if (func_498())
			{
				if (func_539())
				{
					func_116(0);
					unk_0x33F6BE48E356DA27(iLocal_90, 196624, true);
					if (!unk_0x5A04E3BD0B5E7E49(iLocal_90))
					{
						unk_0x0D21E1FDE062ED99(iLocal_90, true, 0);
					}
					unk_0xECCD4FDA45197F97(iLocal_90, unk_0x33CD235DF1E6A94E(), 300f, -1, 0, 0);
					unk_0x897EF720254BBEA3(iLocal_90, true);
					unk_0xED68CDDDE25A144E(unk_0x33CD235DF1E6A94E());
					func_530();
					func_524(uParam0);
				}
				else
				{
					func_89(12);
				}
			}
			else if (unk_0x91BBD269506D61D2(iLocal_90, unk_0x33CD235DF1E6A94E(), 1))
			{
				iLocal_65++;
				if (iLocal_65 >= 2)
				{
					func_480("prostitute CLASSED AS UNDER ATTACK");
					iLocal_286 = 12;
				}
				else
				{
					func_480("prostitute BEEN HIT BY PLAYER");
					unk_0x0D847D71D9E6142E(iLocal_90);
				}
			}
			else if (func_496())
			{
				func_495();
				iLocal_286 = 12;
			}
		}
	}
}

void func_495()
{
	if (unk_0xBC2FC12AD0FBF72E(iLocal_90))
	{
		return;
	}
	unk_0x2918FC6BDEBF9834(iLocal_90);
	unk_0xAEED0213982928AC(iLocal_90, "APOLOGY_NO_TROUBLE", "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL", 1);
}

int func_496()
{
	int iVar0;
	
	if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		return 0;
	}
	if (!func_497())
	{
		return 0;
	}
	iVar0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
	if (!unk_0x91D5C8283D19AF49(iVar0, 0))
	{
		return 0;
	}
	if (unk_0x66D2F163EA29BDEE(unk_0x33CD235DF1E6A94E()))
	{
		return unk_0x162506C338A20AF7(iVar0);
	}
	return 0;
}

int func_497()
{
	if (!func_539())
	{
		return 1;
	}
	else if (unk_0x765F6FEEFF39224F(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0)))
	{
		if (unk_0x0371ECBEC27AF4BE(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0)))
		{
			if (unk_0x7BDC41A7CA0C77A2(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), -1, 0) == unk_0x33CD235DF1E6A94E())
			{
				if (unk_0x0A81FE3D92AE2AC9(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0)))
				{
					if (!unk_0x5A04E3BD0B5E7E49(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0)))
					{
						unk_0x0D21E1FDE062ED99(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), false, 0);
					}
					return 1;
				}
				else
				{
					unk_0xA5F44EC021F96C6B(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0));
				}
			}
		}
		else
		{
			unk_0xBBDD9A94445CAF1F(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0));
		}
	}
	return 0;
}

int func_498()
{
	vector3 vVar0;
	
	if (!func_479(iLocal_49, 4096))
	{
		if (func_405(iLocal_90, unk_0x33CD235DF1E6A94E(), 1) < 30f)
		{
			vVar0 = { unk_0xFBB1F99A825CAB09(iLocal_90, true) };
			if ((((((unk_0x8BBA6285E98709A6(86, vVar0, 30f) || unk_0x8BBA6285E98709A6(89, vVar0, 30f)) || unk_0x8BBA6285E98709A6(88, vVar0, 30f)) || unk_0x8BBA6285E98709A6(102, vVar0, 30f)) || unk_0x8BBA6285E98709A6(114, vVar0, 30f)) || (unk_0x8BBA6285E98709A6(112, vVar0, 30f) && !func_539())) || unk_0x5DACF31D3AC5ED8D(unk_0x33CD235DF1E6A94E()))
			{
				if (!func_539())
				{
					unk_0x4A852F02088ECC9D(iLocal_90, false);
				}
				func_471(&iLocal_49, 4096);
				return 1;
			}
		}
	}
	return 0;
}

int func_499()
{
	if ((unk_0x765F6FEEFF39224F(iLocal_90) && !unk_0xD62C4419A41F106A(iLocal_90, 0)) && !unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		if (func_539())
		{
			if (func_541(unk_0x95B959F18401C09A(), 0))
			{
				func_480("prostitute SCRIPT SHOULD EXIT - ANOTHER PLAYER IN VEHICLE");
				if (unk_0xF0D230FB550CD6EB(iLocal_90, 0))
				{
					func_99(0);
				}
				func_89(15);
				return 0;
			}
		}
		if (!unk_0xBC2FC12AD0FBF72E(iLocal_90))
		{
			if (!unk_0xF0D230FB550CD6EB(iLocal_90, 0))
			{
				if (!func_501(9))
				{
					if (!unk_0xD62C4419A41F106A(iLocal_90, 0) && !unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
					{
						if (unk_0x335C0645074963FE(iLocal_90, unk_0x33CD235DF1E6A94E(), 100f, 100f, 50f, 0, 1, 0))
						{
							return 1;
						}
						else
						{
							func_480("prostitute SCRIPT SHOULD EXIT - PLAYER WALKED AWAY FROM CAR");
							func_89(15);
						}
					}
				}
				else if (!(func_500() || unk_0x71EC91BA8C88BCE0()))
				{
					func_480("prostitute SCRIPT SHOULD EXIT - PLAYER ON MISSION");
					func_89(15);
				}
				else
				{
					return 1;
				}
			}
			else if (iLocal_286 == 0)
			{
				func_480("prostitute SCRIPT SHOULD EXIT - prostitute IN VEHICLE");
			}
			else if (!func_501(9) && !func_501(5))
			{
				return 1;
			}
			else if (!(func_500() || (unk_0x71EC91BA8C88BCE0() && !func_395())))
			{
				func_480("prostitute SCRIPT SHOULD EXIT - PLAYER ON MISSION");
				func_99(0);
				func_89(15);
			}
			else
			{
				return 1;
			}
		}
		else
		{
			func_480("prostitute SCRIPT SHOULD EXIT - INJURED");
		}
	}
	if (!unk_0x765F6FEEFF39224F(iLocal_90))
	{
		func_480("prostitute SCRIPT SHOULD EXIT - Prostitute doesn't exist");
	}
	if (unk_0xD62C4419A41F106A(iLocal_90, 0))
	{
		func_480("prostitute SCRIPT SHOULD EXIT - Prostitute is dead");
	}
	if (unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		func_480("prostitute SCRIPT SHOULD EXIT - Player is dead");
	}
	return 0;
}

int func_500()
{
	if (unk_0x1BCDA92AD0A7835B(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_501(int iParam0)
{
	if (Global_36425 == 15)
	{
		return 0;
	}
	if (func_502(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_502(int iParam0)
{
	return func_503(iParam0, Global_36425);
}

int func_503(int iParam0, int iParam1)
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

void func_504()
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	
	iVar0 = 0;
	while (iVar0 < unk_0x77BABFD1D75AA582(1))
	{
		iVar1 = unk_0x5487531DB7DA4AB5(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x286A5F0670063839(1, iVar0, &Var2, 2);
			if (Var2 == -389015568)
			{
				if (Var2.f_1 == unk_0x95B959F18401C09A())
				{
					func_189(128);
				}
			}
		}
		iVar0++;
	}
}

void func_505()
{
	if (!unk_0xB331FCEB94EB05C8())
	{
		return;
	}
	if (!unk_0xE36862B47CD70685())
	{
		return;
	}
	if (unk_0x276149CFFB30EADE(false, 0) != 1)
	{
		if (func_506(1, 0, 1))
		{
			if (unk_0x5AC0475D36815E75(0) <= 1)
			{
				unk_0x4F8CF72358604361(1);
			}
		}
	}
}

bool func_506(int iParam0, bool bParam1, bool bParam2)
{
	return func_507(0, iParam0, 1, bParam1, bParam2);
}

int func_507(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x0E4018692D92041D(Global_1383928, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_511(iParam0) - func_510(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_510(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_511(iParam0) - func_509(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_510(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_511(iParam0) - func_510(iParam0, 1));
		}
		if (!bParam4 && Global_1589819[unk_0x95B959F18401C09A() /*818*/] != 3)
		{
			iVar1 = (iVar1 - func_508(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_508(int iParam0)
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

int func_509(int iParam0)
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

int func_510(int iParam0, bool bParam1)
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

int func_511(int iParam0)
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

bool func_512(int iParam0)
{
	return func_479(iLocal_52, iParam0);
}

void func_513(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_271)
	{
		if ((unk_0xE77FA521699F639C() >= (uParam0->f_272 + uParam0->f_273) || unk_0x0E4018692D92041D(Global_93682.f_20, 2)) || unk_0x0E4018692D92041D(Global_93682.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (unk_0x0E4018692D92041D((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!unk_0x0E4018692D92041D((*uParam0)[iVar0 /*18*/], 29))
					{
						func_514(uParam0[iVar0 /*18*/]);
						uParam0->f_272 = unk_0xE77FA521699F639C();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_514(int iParam0)
{
	func_515(iParam0, &(iParam0->f_2), iParam0->f_1);
}

void func_515(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0x0E4018692D92041D(*iParam0, 30))
	{
		switch (func_441(*iParam0))
		{
			case 0:
				unk_0xB815670C37E03CDE(iParam2);
				break;
			
			case 1:
				unk_0x0483D0035D6E46FD(sParam1);
				break;
			
			case 2:
				unk_0x1FCB57E33CEA24E8(sParam1);
				break;
			
			case 3:
				unk_0x0A06DEFFF267C21E(sParam1, unk_0x0E4018692D92041D(*iParam0, 28));
				break;
			
			case 4:
				unk_0xD51062C52BCD2AE8(iParam2, sParam1);
				break;
			
			case 5:
				unk_0xBC6AA949398C551E(sParam1);
				break;
			
			case 6:
				unk_0x3C05A6D663EA1B6A(sParam1, unk_0x0E4018692D92041D(*iParam0, 27), -1);
				break;
			
			case 7:
				unk_0xA70F5BB55D0343E6(iParam2);
				break;
			
			case 8:
				unk_0x2EE8D1440C9060EF(sParam1, iParam2);
				break;
			
			case 9:
				unk_0x13157A56158089D8();
				break;
			
			default:
				break;
		}
		unk_0x8950ED5730F62EE8(iParam0, 29);
	}
}

void func_516(int iParam0)
{
	if (func_479(iLocal_52, iParam0))
	{
		func_5(&iLocal_52, iParam0);
	}
}

void func_517()
{
	func_2(0);
	if (unk_0x765F6FEEFF39224F(iLocal_90))
	{
		if (!unk_0xD62C4419A41F106A(iLocal_90, 0))
		{
			func_2(1);
		}
		else
		{
			func_480("Prostitue: not continuing, prostitue is dead");
		}
	}
	else
	{
		func_480("Prostitue: not continuing, prostitue doesn't exist");
	}
	if (!unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()) || unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		func_2(0);
		func_480("Prostitue: not continuing, player isn't player or is dead");
	}
}

int func_518(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x52119E312E15DB07();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_522();
			}
			else
			{
				return 0;
			}
		}
		if (!func_521())
		{
			if (iParam0 == 0)
			{
				if (!unk_0xB331FCEB94EB05C8())
				{
					if (!bParam2)
					{
						func_522();
					}
					else
					{
						return 0;
					}
				}
				if (func_520())
				{
					if (!bParam2)
					{
						func_522();
					}
					else
					{
						return 0;
					}
				}
				if (func_519(155))
				{
					if (!bParam2)
					{
						func_522();
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
					func_522();
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
				func_522();
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
			func_522();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_519(int iParam0)
{
	if (unk_0x3AE20F34FEE6C258(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_520()
{
	return Global_2448756.f_581;
}

bool func_521()
{
	return Global_1312844;
}

void func_522()
{
	unk_0x5894DC159447E10A();
}

void func_523()
{
	func_189(1);
}

void func_524(var uParam0)
{
	func_528();
	if (func_42(0, 1))
	{
		unk_0x052830EE89C97404(true);
	}
	if (!unk_0xBC2FC12AD0FBF72E(iLocal_90))
	{
		if (unk_0x5A04E3BD0B5E7E49(iLocal_90))
		{
			if ((func_539() && unk_0xD76D6BCC14B95CE1(iLocal_90, 1805844857) != 1) && unk_0xD76D6BCC14B95CE1(iLocal_90, -251125078) != 1)
			{
				unk_0xBD4591245C650283(iLocal_90, 1193033728, 0);
				if (unk_0x0A81FE3D92AE2AC9(iLocal_90))
				{
					unk_0x897EF720254BBEA3(iLocal_90, true);
				}
				if (unk_0x462247B843778DF4(iLocal_90))
				{
					unk_0x1F45B4626AC4A4C0(&iLocal_90);
				}
				unk_0x2918FC6BDEBF9834(iLocal_90);
			}
			else
			{
				if (unk_0x462247B843778DF4(iLocal_90))
				{
					unk_0x1F45B4626AC4A4C0(&iLocal_90);
				}
				unk_0x2918FC6BDEBF9834(iLocal_90);
			}
		}
	}
	iLocal_49 = 0;
	if (func_479(iLocal_49, 64))
	{
		Global_25917 = 0;
	}
	if (!unk_0xBC2FC12AD0FBF72E(iLocal_91))
	{
		unk_0xED68CDDDE25A144E(iLocal_91);
	}
	iLocal_91 = 0;
	iLocal_287 = 0;
	if (func_479(iLocal_49, 2048))
	{
		unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), true, 0);
	}
	func_5(&iLocal_49, 2048);
	if (!func_527())
	{
		func_526();
	}
	if (func_539())
	{
		if (unk_0xB0D69EC116526983(iLocal_83))
		{
			unk_0xF4BF002874250DB7(iLocal_83);
		}
	}
	iLocal_92 = 0;
	func_528();
	func_525();
	Global_25918 = 0f;
	if (!Global_1676162.f_4299 && !Global_1676162.f_4303)
	{
		unk_0x21675F65D589CACE();
	}
	if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
	{
		unk_0xC035E897EDDE5AFA(unk_0x95B959F18401C09A(), 1);
	}
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		if (func_512(256))
		{
			unk_0x93AA93DA1B137032(unk_0x33CD235DF1E6A94E(), 6, iLocal_84, iLocal_85, 0);
			func_189(1024);
		}
	}
	if (func_459("PROS_ACCEPT") && !Global_25915)
	{
		unk_0xEDF90B96BED57BCE(1);
	}
	if (Global_25919 == unk_0x8C40DC84EDF05997())
	{
		Global_25915 = 0;
		Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_406 = 0;
	}
	func_436(uParam0, 0);
	if (func_539())
	{
		func_189(2048);
	}
	else
	{
		unk_0x5894DC159447E10A();
	}
}

void func_525()
{
}

void func_526()
{
	Global_2437364.f_1155.f_10 = 0;
}

bool func_527()
{
	return unk_0x0E4018692D92041D(Global_1681651, 3);
}

void func_528()
{
}

void func_529(bool bParam0)
{
	if (!unk_0xBC2FC12AD0FBF72E(iLocal_90))
	{
		if (unk_0xF0D230FB550CD6EB(iLocal_90, 0))
		{
			if (unk_0xD76D6BCC14B95CE1(iLocal_90, -828834893) != 1)
			{
				unk_0x07C339D4328CA16C(iLocal_90, 0, 65536);
			}
		}
		if (bParam0)
		{
			if (func_539())
			{
				if (unk_0x5A04E3BD0B5E7E49(iLocal_90))
				{
					if (unk_0x462247B843778DF4(iLocal_90))
					{
						if (unk_0x5E2784BB00B20E8E(unk_0x8370E68A3DEEB1D3(iLocal_90)))
						{
							unk_0x897EF720254BBEA3(iLocal_90, true);
						}
					}
				}
			}
			else
			{
				unk_0x897EF720254BBEA3(iLocal_90, true);
			}
		}
	}
}

void func_530()
{
	if (!func_539())
	{
		if (iLocal_286 == 11 || iLocal_286 == 13)
		{
			return;
		}
	}
	if (!unk_0xD62C4419A41F106A(iLocal_90, 0))
	{
		if (!unk_0xD82CBCB7E04DDA8A(iLocal_90))
		{
			func_89(0);
			iLocal_285 = 1;
		}
		if (func_539())
		{
			if (unk_0x0A81FE3D92AE2AC9(iLocal_90))
			{
				unk_0x4A852F02088ECC9D(iLocal_90, false);
				unk_0x42E0C09F4BDF7390(iLocal_90);
			}
		}
		else
		{
			unk_0x42E0C09F4BDF7390(iLocal_90);
		}
		unk_0xA6E32819044BBB6A(iLocal_90, 0);
	}
	if (unk_0x91D5C8283D19AF49(iLocal_93, 0) && !unk_0xD62C4419A41F106A(iLocal_93, 0))
	{
		if (func_539())
		{
			if (unk_0x0A81FE3D92AE2AC9(iLocal_93))
			{
				if (Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_25 <= 0 && !unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_23, 11))
				{
					unk_0x2EE596932F00971D(iLocal_93, false);
					unk_0x26E0FFDB1AD22AC5(iLocal_93, 3);
					unk_0x3F99D2373794B210(iLocal_93, 0);
				}
				unk_0x1C2B995BA5ADE8FF(iLocal_93, true, 0);
			}
		}
		else
		{
			unk_0x2EE596932F00971D(iLocal_93, false);
			unk_0x26E0FFDB1AD22AC5(iLocal_93, 3);
			unk_0x3F99D2373794B210(iLocal_93, 0);
		}
	}
	func_538(iLocal_74);
	func_538(iLocal_75);
	func_538(iLocal_76);
	func_538(iLocal_77);
	func_538(iLocal_78);
	func_538(iLocal_79);
	func_538(iLocal_80);
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		unk_0xE0DAC4ABE9900D9A(unk_0x33CD235DF1E6A94E());
		if ((func_539() && iLocal_288 != 3) && func_479(iLocal_49, 2048))
		{
			unk_0xED68CDDDE25A144E(unk_0x33CD235DF1E6A94E());
		}
		unk_0x990A34F9DA8E506D(unk_0x33CD235DF1E6A94E(), 1);
		unk_0xCBDEE923F851F500(unk_0x33CD235DF1E6A94E(), 1);
	}
	if (func_479(iLocal_49, 2048))
	{
		unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), true, 0);
	}
	func_5(&iLocal_49, 2048);
	unk_0xAE4810E427AD9203(2, 19, 1);
	unk_0xAE4810E427AD9203(2, 37, 1);
	if (!func_527())
	{
		func_526();
	}
	iLocal_287 = 0;
	if (func_479(iLocal_49, 4))
	{
		func_5(&iLocal_49, 4);
		Global_25915 = 0;
		Global_25916 = 0;
		Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_406 = 0;
	}
	if (func_479(iLocal_49, 8))
	{
		if (unk_0xCDA107F8BEE35F40(func_86()))
		{
			unk_0x80BCAFF1FDCC7E85(func_86());
		}
	}
	func_537();
	func_457();
	if (((func_459("PROS_ACCEPT") || func_459("PROS_CAM_TOG")) || func_459("PROS_RESPONSE")) || func_459("PROS_CAM_OC"))
	{
		func_5(&iLocal_49, 1048576);
		unk_0xEDF90B96BED57BCE(1);
	}
	func_354(0);
	unk_0xDFF589A2149528CE(true);
	if (func_479(iLocal_49, 8))
	{
		if (unk_0xCDA107F8BEE35F40(func_86()))
		{
			unk_0x80BCAFF1FDCC7E85(func_86());
		}
	}
	func_124("PROSTITUTES_SOLICIT_SCENE");
	unk_0xC16C998D785ABF3A();
	func_116(0);
	unk_0x052830EE89C97404(true);
	func_531();
	if (func_539())
	{
		if (func_512(2))
		{
			if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
			{
				if (unk_0x0371ECBEC27AF4BE(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0)))
				{
					if (unk_0x0A81FE3D92AE2AC9(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0)))
					{
						unk_0x9D933DC08CBBEC60(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), 0);
						unk_0xD303E20CB0AE4AD0(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), 1);
					}
				}
			}
			else if (unk_0x0371ECBEC27AF4BE(iLocal_93))
			{
				if (unk_0x0A81FE3D92AE2AC9(iLocal_93))
				{
					unk_0xD303E20CB0AE4AD0(iLocal_93, 1);
					unk_0x9D933DC08CBBEC60(iLocal_93, 0);
					unk_0x0EF4CE307751DE06(iLocal_93, 0);
				}
				else
				{
					unk_0xA5F44EC021F96C6B(iLocal_93);
					unk_0xD303E20CB0AE4AD0(iLocal_93, 1);
					unk_0x9D933DC08CBBEC60(iLocal_93, 0);
					unk_0x0EF4CE307751DE06(iLocal_93, 0);
				}
			}
		}
	}
	func_181(23, 0);
	iLocal_49 = 0;
	iLocal_51 = 0;
}

void func_531()
{
	struct<8> Var0[2];
	struct<6> Var1[2];
	
	if (!func_536())
	{
		return;
	}
	if (!iLocal_47)
	{
		return;
	}
	StringCopy(&(Var0[0 /*8*/]), "GameType", 32);
	StringCopy(&(Var0[1 /*8*/]), "Type", 32);
	StringCopy(&(Var1[0 /*6*/]), "SP", 24);
	StringCopy(&(Var1[1 /*6*/]), "????", 24);
	if (func_535(275, &Var1, &Var0, 2, -1, 0, 0))
	{
		unk_0x652497BD2553F5E9(131, func_534(), 0f);
		unk_0x652497BD2553F5E9(117, func_533(), 0f);
		unk_0x652497BD2553F5E9(118, func_532(), 0f);
	}
}

int func_532()
{
	return iLocal_46;
}

int func_533()
{
	return iLocal_45;
}

int func_534()
{
	return 0;
}

int func_535(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<68> Var0;
	int iVar1;
	struct<13> Var2;
	var uVar3;
	
	if (!unk_0x43E505744A9B715D())
	{
	}
	if ((!unk_0x148E92E2B2454BC6() && (unk_0x8553BFC970AE2EC8() || !unk_0xA71A137E08393E8F())) && unk_0xD56CD7C03ECC9CF7())
	{
		Var0.f_2.f_1 = 4;
		Var0 = iParam0;
		if (iParam4 == -1)
		{
			if (unk_0x062B7A5C795CB453())
			{
				Var2 = { func_311(unk_0x95B959F18401C09A()) };
				if (unk_0x4A5CDD2BE8070A7F(&Var2))
				{
					if (unk_0xDD530AC51A578470(&uVar3, 35, &Var2))
					{
						Var0.f_1 = uVar3;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar1 = 0;
		while (iVar1 < iParam3)
		{
			Var0.f_2.f_1[iVar1 /*16*/] = { *(uParam2[iVar1 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar1 /*16*/].f_8), {*(uParam1[iVar1 /*6*/])}, 8);
			iVar1++;
		}
		if (bParam5)
		{
			Global_1835013.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (unk_0xB331FCEB94EB05C8() && Global_2456885.f_3)
			{
				unk_0x6938B282813053C6(&Var0, &(Global_1657223.f_10));
			}
			else
			{
				unk_0x4ADC4AC6D9182D71(&Var0);
			}
		}
		return 1;
	}
	if (unk_0x148E92E2B2454BC6())
	{
	}
	if (!unk_0x8553BFC970AE2EC8())
	{
	}
	if (unk_0xA71A137E08393E8F())
	{
	}
	if (!unk_0xD56CD7C03ECC9CF7())
	{
	}
	return 0;
}

int func_536()
{
	if ((unk_0x43E505744A9B715D() && unk_0x40863EBAEA2F03D7()) && unk_0xB16BC34F6CB4A57A())
	{
		return 1;
	}
	return 0;
}

void func_537()
{
	if (func_479(iLocal_49, 128))
	{
		func_397(39, 0);
		func_397(40, 0);
		func_397(41, 0);
		func_397(42, 0);
		func_397(43, 0);
		func_397(44, 0);
		func_5(&iLocal_49, 128);
	}
}

void func_538(int iParam0)
{
	if (func_539())
	{
		if (func_211(iParam0))
		{
			unk_0x352A1C032A91CEAD(iParam0);
		}
	}
}

bool func_539()
{
	return func_512(1);
}

bool func_540(int iParam0)
{
	return Global_36425 == iParam0;
}

int func_541(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_201(iParam0, 1, 1))
	{
		iVar0 = unk_0x378BD4B3881338C2(iParam0);
		if (unk_0xF0D230FB550CD6EB(iVar0, iParam1))
		{
			iVar3 = unk_0xF2C96862595654B4(iVar0, 0);
			iVar1 = 0;
			while (iVar1 < 32)
			{
				iVar2 = unk_0x7C1C88877E8AAA50(iVar1);
				if (func_201(iVar2, 1, 1))
				{
					if (unk_0x378BD4B3881338C2(iVar2) != iVar0)
					{
						if (unk_0x10930B9CAD4111C2(unk_0x378BD4B3881338C2(iVar2), iVar3, iParam1))
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
	}
	return 0;
}

int func_542(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_451(iParam0))
		{
			return 1;
		}
	}
	if ((((Global_1589819[iParam0 /*818*/] == 2 || Global_1589819[iParam0 /*818*/] == 1) || Global_1589819[iParam0 /*818*/] == 0) || Global_1589819[iParam0 /*818*/] == 3) || Global_1589819[iParam0 /*818*/] == 8)
	{
		return 1;
	}
	return 0;
}

