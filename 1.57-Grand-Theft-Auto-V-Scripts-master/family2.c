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
	struct<3> Local_61 = { 0, 0, 0 } ;
	struct<3> Local_62 = { 0, 0, 0 } ;
	int iLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	struct<5> Local_80 = { 0, 0, 0, 0, 0 } ;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 21;
	var uLocal_84 = 6;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91[4] = { 0, 0, 0, 0 };
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96[5] = { 0, 0, 0, 0, 0 };
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99[2] = { 0, 0 };
	int iLocal_100[2] = { 0, 0 };
	var uLocal_101[2] = { 0, 0 };
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	bool bLocal_115 = 0;
	struct<3> Local_116[15];
	int iLocal_117 = 0;
	struct<3> Local_118 = { 0, 0, 0 } ;
	struct<3> Local_119 = { 0, 0, 0 } ;
	struct<3> Local_120 = { 0, 0, 0 } ;
	float fLocal_121 = 0f;
	struct<3> Local_122 = { 0, 0, 0 } ;
	float fLocal_123 = 0f;
	struct<3> Local_124 = { 0, 0, 0 } ;
	float fLocal_125 = 0f;
	struct<3> Local_126 = { 0, 0, 0 } ;
	float fLocal_127 = 0f;
	struct<3> Local_128 = { 0, 0, 0 } ;
	struct<3> Local_129 = { 0, 0, 0 } ;
	float fLocal_130 = 0f;
	struct<3> Local_131 = { 0, 0, 0 } ;
	float fLocal_132 = 0f;
	struct<3> Local_133 = { 0, 0, 0 } ;
	struct<3> Local_134 = { 0, 0, 0 } ;
	float fLocal_135 = 0f;
	struct<3> Local_136 = { 0, 0, 0 } ;
	struct<3> Local_137 = { 0, 0, 0 } ;
	float fLocal_138 = 0f;
	float fLocal_139 = 0f;
	struct<3> Local_140 = { 0, 0, 0 } ;
	struct<3> Local_141 = { 0, 0, 0 } ;
	float fLocal_142 = 0f;
	struct<3> Local_143 = { 0, 0, 0 } ;
	struct<3> Local_144 = { 0, 0, 0 } ;
	float fLocal_145 = 0f;
	struct<3> Local_146 = { 0, 0, 0 } ;
	float fLocal_147 = 0f;
	float fLocal_148 = 0f;
	float fLocal_149 = 0f;
	float fLocal_150 = 0f;
	var uLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	bool bLocal_154 = 0;
	int iLocal_155 = 0;
	char* sLocal_156 = NULL;
	char* sLocal_157 = NULL;
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
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	bool bLocal_174 = 0;
	bool bLocal_175 = 0;
	bool bLocal_176 = 0;
	bool bLocal_177 = 0;
	int iLocal_178 = 0;
	int iLocal_179 = 0;
	bool bLocal_180 = 0;
	int iLocal_181 = 0;
	bool bLocal_182 = 0;
	int iLocal_183 = 0;
	int iLocal_184 = 0;
	int iLocal_185 = 0;
	int iLocal_186 = 0;
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	bool bLocal_191 = 0;
	int iLocal_192 = 0;
	bool bLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	int iLocal_196 = 0;
	int iLocal_197 = 0;
	int iLocal_198 = 0;
	int iLocal_199 = 0;
	int iLocal_200 = 0;
	char* sLocal_201 = NULL;
	char[] cLocal_202[8] = 0;
	int iLocal_203 = 0;
	int iLocal_204 = 0;
	int iLocal_205 = 0;
	var uLocal_206 = 0;
	int iLocal_207 = 0;
	int iLocal_208 = 0;
	struct<3> Local_209 = { 0, 0, 0 } ;
	struct<3> Local_210 = { 0, 0, 0 } ;
	struct<3> Local_211 = { 0, 0, 0 } ;
	float fLocal_212 = 0f;
	var uLocal_213 = 100;
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
	struct<3> Local_514 = { 0, 0, 0 } ;
	struct<3> Local_515 = { 0, 0, 0 } ;
	struct<3> Local_516 = { 0, 0, 0 } ;
	float fLocal_517 = 0f;
	int iLocal_518 = 0;
	int iLocal_519 = 0;
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
	int iLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	struct<2> Local_543 = { 0, 0 } ;
	struct<2> Local_544 = { 0, 0 } ;
	struct<2> Local_545 = { 0, 0 } ;
	struct<2> Local_546 = { 0, 0 } ;
	int iLocal_547 = 0;
	char[] cLocal_548[8] = 0;
	struct<10> Local_549[16];
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	int iLocal_554 = 0;
	int iLocal_555 = 0;
	struct<6> Local_556 = { 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_557 = 0;
	int iLocal_558 = 0;
	int iLocal_559 = 0;
	int iLocal_560 = 0;
	struct<7> Local_561[2];
	int iLocal_562[2] = { 0, 0 };
	int iLocal_563[2] = { 0, 0 };
	var uLocal_564 = 0;
	int iLocal_565 = 0;
	int iLocal_566 = 0;
	int iLocal_567 = 0;
	int iLocal_568 = 0;
	int iLocal_569 = 0;
	float fLocal_570 = 0f;
	int iLocal_571 = 0;
	struct<8> Local_572[2];
	float fLocal_573 = 0f;
	int iLocal_574 = 0;
	int iLocal_575 = 0;
	int iLocal_576 = 0;
	int iLocal_577 = 0;
	int iLocal_578 = 0;
	int iLocal_579 = 0;
	int iLocal_580 = 0;
	int iLocal_581 = 0;
	int iLocal_582 = 0;
	int iLocal_583 = 0;
	int iLocal_584 = 0;
	int iLocal_585 = 0;
	int iLocal_586 = 0;
	int iLocal_587 = 0;
	int iLocal_588 = 0;
	int iLocal_589 = 0;
	int iLocal_590 = 0;
	int iLocal_591 = 0;
	int iLocal_592 = 0;
	int iLocal_593 = 0;
	int iLocal_594 = 0;
	int iLocal_595 = 0;
	int iLocal_596 = 0;
	int iLocal_597 = 0;
	float fLocal_598 = 0f;
	float fLocal_599 = 0f;
	float fLocal_600 = 0f;
	int iLocal_601 = 0;
	int iLocal_602 = 0;
	struct<3> Local_603[4];
	int iLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	bool bLocal_607 = 0;
	struct<3> Local_608 = { 0, 0, 0 } ;
	float fLocal_609 = 0f;
	char* sLocal_610[6] = { NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_611 = 0;
	int iLocal_612 = 0;
	int iLocal_613 = 0;
	int iLocal_614[3] = { 0, 0, 0 };
	int iLocal_615 = 0;
	int iLocal_616 = 0;
	int iLocal_617 = 0;
	int iLocal_618 = 0;
	int iLocal_619 = 0;
	bool bLocal_620 = 0;
	int iLocal_621 = 0;
	int iLocal_622 = 0;
	int iLocal_623 = 0;
	int iLocal_624 = 0;
	int iLocal_625 = 0;
	float fLocal_626 = 0f;
	int iLocal_627 = 0;
	int iLocal_628 = 0;
	int iLocal_629 = 0;
	int iLocal_630 = 0;
	float fLocal_631 = 0f;
	struct<3> Local_632[4];
	struct<3> Local_633[6];
	struct<3> Local_634[6];
	struct<3> Local_635[5];
	struct<3> Local_636[4];
	struct<3> Local_637[5];
	struct<3> Local_638[5];
	float fLocal_639[5] = { 0f, 0f, 0f, 0f, 0f };
	var uLocal_640 = 4;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 4;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 15;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 15;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 8;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 8;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	struct<25> Local_808[2];
	var uLocal_809 = 8;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 6;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 6;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	int iLocal_872[2] = { 0, 0 };
	bool bLocal_873 = 0;
	int iLocal_874[2] = { 0, 0 };
	int iLocal_875[2] = { 0, 0 };
	int iLocal_876 = 0;
	bool bLocal_877 = 0;
	int iLocal_878 = 0;
	int iLocal_879 = 0;
	int iLocal_880[2] = { 0, 0 };
	int iLocal_881 = 0;
	int iLocal_882 = 0;
	int iLocal_883 = 0;
	int iLocal_884 = 0;
	int iLocal_885 = 0;
	float fLocal_886 = 0f;
	float fLocal_887 = 0f;
	int iLocal_888 = 0;
	int iLocal_889 = 0;
	bool bLocal_890 = 0;
	float fLocal_891 = 0f;
	int iLocal_892 = 0;
	float fLocal_893[2] = { 0f, 0f };
	bool bLocal_894 = 0;
	int iLocal_895 = 0;
	int iLocal_896 = 0;
	int iLocal_897 = 0;
	var uLocal_898 = 0;
	bool bLocal_899 = 0;
	int iLocal_900 = 0;
	int iLocal_901 = 0;
	bool bLocal_902 = 0;
	float fLocal_903 = 0f;
	int iLocal_904 = 0;
	int iLocal_905 = 0;
	int iLocal_906 = 0;
	int iLocal_907 = 0;
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
	Local_61 = { 0f, 0f, 0f };
	Local_62 = { 0f, 0f, 0f };
	iLocal_63 = -1;
	uLocal_68 = unk_0xB967AFE724ADAEB1();
	uLocal_69 = unk_0x7EA43B6762051EA2();
	iLocal_70 = -1;
	iLocal_78 = 6;
	Local_118 = { -1614.526f, -1137.882f, 0.9178f };
	Local_119 = { -1626.046f, -1137.165f, 0.47598f };
	Local_120 = { -805.4391f, 175.644f, 75.7407f };
	fLocal_121 = 336.1657f;
	Local_122 = { -804.3638f, 178.5257f, 75.7407f };
	fLocal_123 = 14.3431f;
	Local_124 = { -1862.529f, -1211.253f, 12.017f };
	fLocal_125 = 45.6064f;
	Local_126 = { -823.2707f, 181.5663f, 70.6967f };
	fLocal_127 = 136.7262f;
	Local_128 = { -2019.921f, -1030.525f, 0.001f };
	Local_129 = { -2008.722f, -1033.154f, 0f };
	fLocal_130 = 280.6858f;
	Local_131 = { -1072.8f, -1703.924f, 3.514f };
	fLocal_132 = 181.9476f;
	Local_133 = { -1105.932f, -1695.893f, 3.3731f };
	Local_134 = { -1106.255f, -1694.977f, 3.3742f };
	fLocal_135 = 122.5477f;
	Local_136 = { -1866.951f, -1208.529f, 12.63051f };
	Local_137 = { -1865.153f, -1210.694f, 12.60679f };
	fLocal_138 = 54.5399f;
	fLocal_139 = 65.01204f;
	Local_140 = { -1627.998f, -1143.906f, -0.612126f };
	Local_141 = { -1608.71f, -1116.125f, 7.893201f };
	fLocal_142 = 45f;
	Local_143 = { -1084.216f, -1707.052f, -6.638385f };
	Local_144 = { -967.2344f, -1829.366f, 40.31441f };
	fLocal_145 = 116f;
	Local_146 = { -1851.92f, -1217.777f, 12.01752f };
	fLocal_147 = 332.3918f;
	fLocal_148 = 113.3809f;
	fLocal_149 = -107.7502f;
	bLocal_154 = true;
	sLocal_156 = "fam2";
	sLocal_157 = "fam2stairs";
	iLocal_158 = 2;
	iLocal_164 = 4;
	iLocal_165 = 4;
	iLocal_166 = 1;
	iLocal_168 = -1;
	iLocal_169 = -1;
	iLocal_170 = -1;
	iLocal_171 = 900;
	bLocal_174 = true;
	sLocal_201 = "family_2_mcs_4";
	cLocal_202 = "FAM2AUD";
	Local_209 = { -2030.409f, -1039.463f, -23.59287f };
	Local_210 = { -1797.853f, -982.6022f, 0f };
	Local_211 = { -934.5598f, -1360.544f, 0f };
	fLocal_212 = 288.2051f;
	Local_514 = { -816.716f, 179.098f, 72.8274f };
	Local_515 = { -816.1068f, 177.5108f, 72.8274f };
	cLocal_548 = cLocal_202;
	StringCopy(&Local_556, "", 24);
	iLocal_602 = -1;
	fLocal_631 = 0f;
	fLocal_887 = 0f;
	fLocal_891 = 0f;
	if (unk_0x4210287E2833D44B(3))
	{
		func_593(3);
		func_591();
		unk_0xFB8A6909539A30B1("FAM2_STOP");
		func_589();
	}
	unk_0xC189FA1CE4E3B2A5(1);
	func_551();
	func_550(0, 1);
	iLocal_907 = 0;
	while (true)
	{
		if (!iLocal_173)
		{
			func_547();
		}
		if (!iLocal_172)
		{
			func_479();
		}
		func_476();
		func_473();
		unk_0xE9F487B66E055135("M_DaddysLittleGirl", 0);
		switch (iLocal_70)
		{
			case -1:
				if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()) && !unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
				{
					unk_0x1A1227D4CEE3DA07(unk_0x7D2B9E6A64637269(), 1f);
				}
				switch (iLocal_159)
				{
					case 0:
						if (!unk_0x419E13582192CFEA(iLocal_89))
						{
							if (!unk_0x419E13582192CFEA(Global_95867.f_9[0]))
							{
								func_472(-808.0422f, 168.5755f, 75.7504f, 244.0649f);
							}
							else
							{
								unk_0x4985CD0720AFD468(Global_95867.f_9[0], 1, 1);
								iLocal_89 = Global_95867.f_9[0];
							}
						}
						if (!unk_0xE75EE67F14EAAE37(iLocal_113))
						{
							iLocal_113 = unk_0xDE7E9AF51E2E18EB(-813.1963f, 179.4912f, 71.1592f);
						}
						unk_0x068BDE31F7D112BB("missfam2mcs_intp1");
						unk_0x1594E542FF3D23EF(sLocal_157);
						unk_0x16E516CA9C88FF48(joaat("v_ilev_mm_doorm_l"));
						unk_0x16E516CA9C88FF48(joaat("v_ilev_mm_doorm_r"));
						unk_0xBB3CDAB62C8773C8("FAMILY2", 0);
						unk_0xBB3CDAB62C8773C8(cLocal_202, 6);
						if (!iLocal_907)
						{
							unk_0x9104E9283667AF15("family_2_Timelapse_srl");
							iLocal_907 = 1;
						}
						if ((((((((((unk_0xC4EACCE45DBAA313(iLocal_113) && unk_0x0EC2B29D4172D225("missfam2mcs_intp1")) && unk_0x419E13582192CFEA(iLocal_89)) && unk_0x936616EE3F524830("TIME_LAPSE", 0, -1)) && unk_0x419E13582192CFEA(iLocal_89)) && unk_0xA9C0BBFB9CBB66F1(joaat("v_ilev_mm_doorm_l"))) && unk_0xA9C0BBFB9CBB66F1(joaat("v_ilev_mm_doorm_r"))) && unk_0x9745FAC5B3E4C8B8(sLocal_157)) && unk_0x6E7F154934B0020A()) && unk_0x080D38ACEC5DC1A2(0)) && unk_0x080D38ACEC5DC1A2(6))
						{
							unk_0xFFCFF4576AE8F21E();
							unk_0x16D66F11FE644901(unk_0x7D2B9E6A64637269());
							iLocal_906 = unk_0xD955F1CC0BCABC78(-817.311f, 179.33f, 71.241f, 0f, 0f, -113f, 2);
							unk_0xAD844C8843FC405C(unk_0x7D2B9E6A64637269(), iLocal_906, "missfam2mcs_intp1", "fam_2_int_p1_michael", 1000f, -1000f, 8, 0, 1148846080, 0);
							unk_0xE37EB80DFB0D31FB(unk_0x7D2B9E6A64637269(), 0, 0);
							if (unk_0x4336DC3297C47528(-2097039789))
							{
								unk_0x9A347B86DBED8192(-2097039789, 1f, 0, 0);
								unk_0x1EA8B94F4F446F35(-2097039789, 1, 0, 1);
							}
							if (unk_0x4336DC3297C47528(-2127416656))
							{
								unk_0x9A347B86DBED8192(-2127416656, -1f, 0, 0);
								unk_0x1EA8B94F4F446F35(-2127416656, 1, 0, 1);
							}
							unk_0xD2FBB949CDCF79AB(Local_514, 1f, joaat("v_ilev_mm_doorm_l"), 0);
							unk_0xD2FBB949CDCF79AB(Local_515, 1f, joaat("v_ilev_mm_doorm_r"), 0);
							iLocal_109 = unk_0x795434E153F90E41(joaat("v_ilev_mm_doorm_l"), Local_514, 1, 1, 0);
							iLocal_110 = unk_0x795434E153F90E41(joaat("v_ilev_mm_doorm_r"), Local_515, 1, 1, 0);
							unk_0xED3365BAA5895E01(iLocal_109, iLocal_906, "fam_2_int_p1_doorl", "missfam2mcs_intp1", 1000f, -1000f, 0, 1148846080);
							unk_0xED3365BAA5895E01(iLocal_110, iLocal_906, "fam_2_int_p1_doorr", "missfam2mcs_intp1", 1000f, -1000f, 0, 1148846080);
							unk_0x20CC00CC70A99443(iLocal_109);
							unk_0x20CC00CC70A99443(iLocal_110);
							unk_0xA5C5D178B75F53C6(0);
							uLocal_111 = unk_0x84F073038B557438(964613260, 1);
							unk_0x47554D1FFAB68B45(uLocal_111, iLocal_906, "fam_2_int_p1_cam", "missfam2mcs_intp1");
							unk_0x2CA971FF57ACA369(1, 0);
							unk_0x09F9466B03D29D2D(true, 0, 3000, 1, 0, 0);
							func_471(18);
							unk_0x70C5FE4EE59DC750(5, 5, 5, 5);
							unk_0x9E3EB3EDB58FA356();
							settimera(0);
							unk_0x824F744352C8BC82(joaat("v_ilev_mm_doorm_l"));
							unk_0x824F744352C8BC82(joaat("v_ilev_mm_doorm_r"));
							func_469(unk_0x7D2B9E6A64637269(), 32);
							unk_0x145AB994058F1720(unk_0x7D2B9E6A64637269(), 3, 17, 0);
							unk_0x145AB994058F1720(unk_0x7D2B9E6A64637269(), 4, 16, 0);
							unk_0x145AB994058F1720(unk_0x7D2B9E6A64637269(), 6, 1, 0);
							unk_0x603ABA046B239722(unk_0x7D2B9E6A64637269(), 1);
							if (unk_0x419E13582192CFEA(unk_0x0BF0F8F3AD0993F6()))
							{
								if (func_468(unk_0x0BF0F8F3AD0993F6()))
								{
									iVar0 = 0;
									while (iVar0 < 3)
									{
										if (unk_0x419E13582192CFEA(Global_96731[iVar0]))
										{
											if (vdist2(unk_0xD6E677FAD7521410(Global_96731[iVar0], 1), Local_126) < 900f)
											{
												unk_0x4985CD0720AFD468(Global_96731[iVar0], 1, 1);
												unk_0x5420D0D520CF44D0(&(Global_96731[iVar0]));
												iVar0 = 3;
											}
										}
										iVar0++;
									}
								}
							}
							func_464(Local_122, 1000f, 0);
							if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
							{
								iVar1 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
							}
							else
							{
								iVar1 = unk_0xC228040556B02BEA();
							}
							if (unk_0x419E13582192CFEA(iVar1) && unk_0xBFCE58B2B3249999(iVar1, 0))
							{
								if (!unk_0xEACFC87E44438F24(iVar1, joaat("taxi")) && !func_462(iVar1, 0, 1))
								{
									if (func_461(iVar1) && vdist(unk_0xD6E677FAD7521410(iVar1, 1), unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1)) < 50f)
									{
										unk_0x4985CD0720AFD468(iVar1, 1, 1);
										if (func_460(iVar1) == 0)
										{
											unk_0x5420D0D520CF44D0(&iVar1);
										}
										else
										{
											func_449(iVar1, -822.4229f, 157.8134f, 69.0913f, 91.16499f, 24, 0);
											unk_0x78CDDD1E6367978D(iVar1, -822.4229f, 157.8134f, 69.0913f, 1, 0, 0, 1);
											unk_0xCD37A28258D70638(iVar1, 91.16499f);
											unk_0x77CF3E92F49E693E(iVar1, 1);
										}
									}
								}
							}
							unk_0x6AF7EE4DD9F8B944(Local_126, 200f, 1, 0, 0, 0);
							func_448(24);
							unk_0x8BE64A4794BF87FA(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), 300f);
							unk_0xF22CC2CA28E44D4F(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), 300f);
							unk_0x9328727FD6F1A390(unk_0x7D2B9E6A64637269(), 1);
							iLocal_159++;
						}
						break;
					
					case 1:
						unk_0xFFCFF4576AE8F21E();
						unk_0x34DC21A7AB5C360E(to_float(timera()));
						if (func_447(1000))
						{
							func_446(500);
							iLocal_159 += 2;
						}
						if ((unk_0xEEC203A73BC92E7E(iLocal_906) && unk_0x0BC8768247440B3A(iLocal_906) > 0.95f) || !unk_0xEEC203A73BC92E7E(iLocal_906))
						{
							iLocal_906 = -1;
							Local_80.f_4 = unk_0xE862092047FB4664("DEFAULT_SPLINE_CAMERA", 0);
							unk_0xD13758E51A782103(Local_80.f_4, -835.1494f, 180.1434f, 71.9064f, 12.6567f, 0f, -102.44f, 5000, 3, 2);
							unk_0xD13758E51A782103(Local_80.f_4, -835.7494f, 180.2434f, 71.9064f, 12.6567f, 0f, -102.44f, 5000, 3, 2);
							unk_0xEF20E9A7B745D17A(Local_80.f_4, 47.9931f);
							unk_0x6FA8221C9D2ECB46(Local_80.f_4, 1);
							unk_0x9B0169E27978C1A2(-1, "TIME_LAPSE_MASTER", 0, 1);
							func_445(&Local_80, 1, 0, 2000, 1, 1, 0, 1);
							unk_0x6FA8221C9D2ECB46(uLocal_111, 0);
							iLocal_905 = 10;
							unk_0x9328727FD6F1A390(unk_0x7D2B9E6A64637269(), 0);
							iLocal_159++;
						}
						break;
					
					case 2:
						unk_0xFFCFF4576AE8F21E();
						unk_0x34DC21A7AB5C360E(to_float(timera()));
						if (func_414(iLocal_905, 0, "EXTRASUNNY", "cirrocumulus", &Local_80, -1082130432, 0, 1, 1065353216))
						{
							unk_0xBD7D4E8BCF2E9BFB();
							settimera(0);
							iLocal_159++;
						}
						if (func_413())
						{
							func_445(&Local_80, 0, 0, 2000, 1, 1, 0, 1);
							wait(0);
							func_446(500);
							iLocal_159++;
						}
						break;
					
					case 3:
						unk_0xFFCFF4576AE8F21E();
						if ((timera() > 300 && unk_0x2D0F2BF9BAF6A1AD(unk_0x7D2B9E6A64637269())) && unk_0x9745FAC5B3E4C8B8("fam2Stairs"))
						{
							func_385(0, 0);
							if (unk_0x419E13582192CFEA(iLocal_89))
							{
								unk_0x4603196EEEA2355C(iLocal_89, 1, 0);
								unk_0x3CBE9F07524C242D(iLocal_89, 1, 0);
								unk_0xA2C015B68CE01357(iLocal_89, 0);
							}
							unk_0x29D9E3B7EDBBA6FD(10, 0, 0);
							iLocal_159++;
						}
						break;
					
					case 4:
						unk_0xFFCFF4576AE8F21E();
						iLocal_159 = 0;
						iLocal_70 = 0;
						break;
				}
				break;
			
			case 0:
				func_374();
				break;
			
			case 1:
				func_318();
				break;
			
			case 2:
				func_283();
				break;
			
			case 3:
				func_274();
				break;
			
			case 4:
				func_272();
				break;
			
			case 5:
				func_261();
				break;
			
			case 6:
				func_259();
				break;
			
			case 7:
				func_221();
				func_218();
				break;
			
			case 8:
				func_200();
				break;
			
			case 9:
				func_178();
				break;
			
			case 11:
				func_147();
				break;
			
			default:
				break;
		}
		func_146();
		if (unk_0xBFCE58B2B3249999(iLocal_95, 0) && !unk_0xECEC7528A52B4EE8(iLocal_89))
		{
			if (unk_0xF41EB7643E61A928(iLocal_89, iLocal_95, 0))
			{
				unk_0xE475510533501D9B(iLocal_89, 0);
			}
		}
		func_144(0);
		func_101();
		func_1();
		if (unk_0x419E13582192CFEA(iLocal_89) && !unk_0xECEC7528A52B4EE8(iLocal_89))
		{
			unk_0xD991F7672CE8EAD3(iLocal_89, 328, 1);
		}
		if (unk_0x419E13582192CFEA(iLocal_88) && !unk_0xECEC7528A52B4EE8(iLocal_88))
		{
			unk_0xD991F7672CE8EAD3(iLocal_88, 328, 1);
		}
		if (iLocal_152)
		{
			iLocal_152 = 0;
		}
		if (iLocal_153)
		{
			iLocal_153 = 0;
		}
		wait(0);
	}
}

void func_1()
{
	int iVar0;
	bool bVar1;
	
	switch (iLocal_567)
	{
		case 0:
			if (iLocal_70 == 5 && vdist2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), -2033.821f, -1031.864f, 4.89f) < 62500f)
			{
				unk_0x16E516CA9C88FF48(joaat("csb_porndudes"));
				unk_0x16E516CA9C88FF48(joaat("a_f_y_beach_01"));
				unk_0x068BDE31F7D112BB("missfam2leadinoutmcs3");
				if (((unk_0xA9C0BBFB9CBB66F1(joaat("csb_porndudes")) && unk_0xA9C0BBFB9CBB66F1(joaat("a_f_y_beach_01"))) && unk_0x0EC2B29D4172D225("missfam2leadinoutmcs3")) && func_96(-2033.23f, -1032.27f, 4.89f, 0f))
				{
					if (!unk_0xECEC7528A52B4EE8(iLocal_88))
					{
						iLocal_91[0] = unk_0x0FDCFECB2EF2BC1C(26, joaat("csb_porndudes"), -2032.69f, -1031.36f, 5.59f, 0f, 1, 1);
						unk_0x63EC3B3BCF4B0D48(iLocal_91[0], 1.75f);
						iLocal_91[1] = unk_0x0FDCFECB2EF2BC1C(26, joaat("csb_porndudes"), -2034.42f, -1032.71f, 5.54f, 0f, 1, 1);
						iLocal_91[2] = unk_0x0FDCFECB2EF2BC1C(26, joaat("a_f_y_beach_01"), -2033.32f, -1031.07f, 5.54f, 0f, 1, 1);
						iLocal_91[3] = unk_0x0FDCFECB2EF2BC1C(26, joaat("a_f_y_beach_01"), -2034.48f, -1031.6f, 5.48f, 0f, 1, 1);
						uLocal_568 = unk_0xD955F1CC0BCABC78(-2033.821f, -1031.864f, 4.89f, 0f, 0f, -4.4f, 2);
						unk_0xAD844C8843FC405C(iLocal_91[0], uLocal_568, "missfam2leadinoutmcs3", "onboat_leadin_pornguy_a", 1000f, -1000f, 0, 0, 1148846080, 0);
						unk_0xAD844C8843FC405C(iLocal_91[1], iLocal_568, "missfam2leadinoutmcs3", "onboat_leadin_pornguy_b", 1000f, -1000f, 0, 0, 1148846080, 0);
						unk_0xAD844C8843FC405C(iLocal_91[2], iLocal_568, "missfam2leadinoutmcs3", "onboat_leadin_porngal_a", 1000f, -1000f, 0, 0, 1148846080, 0);
						unk_0xAD844C8843FC405C(iLocal_91[3], iLocal_568, "missfam2leadinoutmcs3", "onboat_leadin_porngal_b", 1000f, -1000f, 0, 0, 1148846080, 0);
						unk_0xAD844C8843FC405C(iLocal_88, iLocal_568, "missfam2leadinoutmcs3", "onboat_leadin_tracy", 1000f, -1000f, 0, 0, 1148846080, 0);
						unk_0x4170FE884DF7426D(iLocal_91[0], 0, 0, 0, 0);
						unk_0x4170FE884DF7426D(iLocal_91[0], 3, 0, 0, 0);
						unk_0x4170FE884DF7426D(iLocal_91[0], 4, 0, 0, 0);
						unk_0xC8749D706BBF16E1(iLocal_91[0], 1, 0, 0, false);
						unk_0x4170FE884DF7426D(iLocal_91[1], 0, 2, 0, 0);
						unk_0x4170FE884DF7426D(iLocal_91[1], 3, 2, 0, 0);
						unk_0x4170FE884DF7426D(iLocal_91[1], 4, 2, 0, 0);
						unk_0xC8749D706BBF16E1(iLocal_91[1], 0, 0, 0, false);
						unk_0xB9314D20143CEED3(iLocal_568, 1);
						unk_0x824F744352C8BC82(joaat("csb_porndudes"));
						unk_0x824F744352C8BC82(joaat("a_f_y_beach_01"));
						unk_0x824F744352C8BC82(joaat("ig_tracydisanto"));
						iLocal_567++;
					}
				}
			}
			break;
		
		case 1:
			func_95("family_2_mcs_3", -2033.821f, -1031.864f, 4.89f, 100f, &iLocal_178);
			if (iLocal_178)
			{
				if (unk_0xE807694ABD40478F())
				{
					unk_0x498685EB9132AF88(1, "famtwoplayer");
					func_2("Michael", unk_0x7D2B9E6A64637269(), 0, 2);
					if (unk_0x419E13582192CFEA(iLocal_91[0]) && !unk_0xECEC7528A52B4EE8(iLocal_91[0]))
					{
						func_2("Guy_on_sofa", iLocal_91[0], 0, 2);
					}
					if (unk_0x419E13582192CFEA(iLocal_91[1]) && !unk_0xECEC7528A52B4EE8(iLocal_91[1]))
					{
						func_2("Man_getting_wood", iLocal_91[1], 0, 2);
					}
					if (unk_0x419E13582192CFEA(iLocal_91[2]) && !unk_0xECEC7528A52B4EE8(iLocal_91[2]))
					{
						func_2("Girl_on_sofa", iLocal_91[2], 0, 2);
					}
					if (unk_0x419E13582192CFEA(iLocal_91[3]) && !unk_0xECEC7528A52B4EE8(iLocal_91[3]))
					{
						func_2("Girl_being_chatted_up", iLocal_91[3], 0, 2);
					}
					if (unk_0x419E13582192CFEA(iLocal_88) && !unk_0xECEC7528A52B4EE8(iLocal_88))
					{
						func_2("Tracy", iLocal_88, 0, 2);
					}
				}
			}
			if (iLocal_178)
			{
				if (vdist2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), -2033.821f, -1031.864f, 4.89f) > (120f * 120f))
				{
					iLocal_178 = 0;
					unk_0xCB63763717A253D9();
				}
			}
			if (vdist2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), -2033.821f, -1031.864f, 4.89f) > 75625f || (iLocal_70 != 5 && iLocal_70 != 6))
			{
				if (iLocal_70 != 6)
				{
					bVar1 = true;
					iVar0 = 0;
					while (iVar0 < iLocal_91)
					{
						if (!unk_0xECEC7528A52B4EE8(iLocal_91[iVar0]))
						{
							if (!unk_0x98E18969B1D0C4AB(iLocal_91[iVar0]))
							{
								bVar1 = false;
							}
						}
						iVar0++;
					}
					if (!unk_0xECEC7528A52B4EE8(iLocal_88))
					{
						if (!unk_0x98E18969B1D0C4AB(iLocal_88))
						{
							bVar1 = false;
						}
					}
					if (bVar1)
					{
						iVar0 = 0;
						while (iVar0 < iLocal_91)
						{
							if (unk_0x419E13582192CFEA(iLocal_91[iVar0]))
							{
								unk_0x16D66F11FE644901(iLocal_91[iVar0]);
								unk_0xC606AE2A3209945E(&(iLocal_91[iVar0]));
							}
							iVar0++;
						}
					}
					iLocal_567 = 0;
				}
			}
			break;
	}
}

void func_2(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	struct<50> Var0;
	int iVar1;
	
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	func_3(iParam1, &Var0, iParam3);
	iVar1 = 0;
	while (iVar1 < 12)
	{
		unk_0xD5969825AE0DC560(sParam0, iVar1, Var0.f_13[iVar1], Var0[iVar1], iParam2);
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 9)
	{
		if (Var0.f_39[iVar1] == -1 || Var0.f_39[iVar1] == 255)
		{
			unk_0xE13F3E0ED3407B90(sParam0, iVar1, -1, 0, iParam2);
		}
		else
		{
			unk_0xE13F3E0ED3407B90(sParam0, iVar1, Var0.f_39[iVar1], Var0.f_49[iVar1], iParam2);
		}
		iVar1++;
	}
}

void func_3(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
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
	iVar4 = unk_0x6471F4759775FCA4(iParam0);
	func_87(iParam0, &Var2, 0, -1);
	func_87(iParam0, uParam1, iParam2, -1);
	iVar5 = 0;
	iVar6 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (uParam1->f_13[iVar0] != Var2.f_13[iVar0] || (*uParam1)[iVar0] != Var2[iVar0])
		{
			if (func_84(iVar4, func_86(iVar0), func_85(iParam0, Var2.f_13[iVar0], Var2[iVar0], func_86(iVar0)), &iVar1))
			{
				Var3 = { func_14(iVar4, 2, uParam1->f_59, -1) };
				uParam1->f_13[2] = Var3.f_3;
				(*uParam1)[2] = Var3.f_4;
				iVar5 = 1;
			}
			if (func_12(iVar4, func_86(iVar0), func_85(iParam0, Var2.f_13[iVar0], Var2[iVar0], func_86(iVar0)), &iVar1))
			{
				Var3 = { func_14(iVar4, 1, uParam1->f_62, -1) };
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
			if (func_84(iVar4, 14, func_5(iParam0, Var2.f_39[iVar0], Var2.f_49[iVar0], iVar0), &iVar1))
			{
				Var3 = { func_14(iVar4, 2, uParam1->f_59, -1) };
				uParam1->f_13[2] = Var3.f_3;
				(*uParam1)[2] = Var3.f_4;
				iVar5 = 1;
			}
			if (func_12(iVar4, 14, func_5(iParam0, Var2.f_39[iVar0], Var2.f_49[iVar0], iVar0), &iVar1))
			{
				Var3 = { func_14(iVar4, 1, uParam1->f_62, -1) };
				uParam1->f_13[1] = Var3.f_3;
				(*uParam1)[1] = Var3.f_4;
				iVar6 = 1;
			}
		}
		iVar0++;
	}
	if (iVar6 || iVar5)
	{
		iVar7 = func_85(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
		iVar8 = func_85(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
		iVar9 = func_4(iVar4, iVar8, iVar7);
		if (iVar9 != -99)
		{
			Var3 = { func_14(iVar4, 0, iVar9, -1) };
			uParam1->f_13[0] = Var3.f_3;
			(*uParam1)[0] = Var3.f_4;
		}
	}
}

int func_4(int iParam0, int iParam1, int iParam2)
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

int func_5(int iParam0, int iParam1, int iParam2, int iParam3)
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
		return func_11(iParam3);
	}
	iVar0 = unk_0x6471F4759775FCA4(iParam0);
	iVar1 = unk_0x6F6F7115068877E4(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			return func_7(unk_0x6471F4759775FCA4(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			return func_7(unk_0x6471F4759775FCA4(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = unk_0xED24814ADAB539B1(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= (iVar2 - 1))
	{
		iVar6 = unk_0x1A46D74ECB10E7F8(iParam0, iParam3, iVar4);
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
					iVar3 = (iVar3 + func_6(iParam0, iParam3));
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
	return func_11(iParam3);
}

int func_6(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x6471F4759775FCA4(uParam0);
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

int func_7(int iParam0, int iParam1, int iParam2, int iParam3)
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
		unk_0x44C4C2E7417F5E29(iParam3, 8, -1, 1, -1, -1);
		iVar0 = unk_0xBCEF29BBAC16D038(iParam1);
		if (iVar0 != -1)
		{
			return (func_10(iParam0) + iVar0);
		}
	}
	else
	{
		unk_0x44C4C2E7417F5E29(iParam3, 8, -1, 0, -1, func_9(iParam2));
		iVar1 = unk_0x5BBDCA451CB08E45(iParam1);
		if (iVar1 != -1)
		{
			return (func_8(iParam0, func_9(iParam2)) + iVar1);
		}
	}
	return -99;
}

int func_8(int iParam0, int iParam1)
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

int func_9(int iParam0)
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

int func_10(int iParam0)
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

int func_11(int iParam0)
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

int func_12(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iVar0 = func_13(iParam0);
		Global_112293.f_2361.f_539[iVar0 /*65*/].f_63 = iParam2;
		Global_112293.f_2361.f_539[iVar0 /*65*/].f_64 = iParam1;
		return 1;
	}
	return 0;
}

int func_13(int iParam0)
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

struct<14> func_14(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_83();
	if (iParam0 == joaat("player_zero"))
	{
		func_65(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_one"))
	{
		func_46(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_two"))
	{
		func_15(iParam1, iParam2);
	}
	return Global_77059[0 /*14*/];
}

void func_15(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_45(iParam1);
			break;
		
		case 2:
			func_44(iParam1);
			break;
		
		case 3:
			func_41(iParam1);
			break;
		
		case 4:
			func_40(iParam1);
			break;
		
		case 6:
			func_39(iParam1);
			break;
		
		case 5:
			func_38(iParam1);
			break;
		
		case 8:
			func_37(iParam1);
			break;
		
		case 9:
			func_36(iParam1);
			break;
		
		case 10:
			func_35(iParam1);
			break;
		
		case 1:
			func_34(iParam1);
			break;
		
		case 7:
			func_33(iParam1);
			break;
		
		case 11:
			func_32(iParam1);
			break;
		
		case 12:
			func_31(iParam1);
			break;
		
		case 13:
			func_30(iParam1);
			break;
		
		case 14:
			func_16(iParam1);
			break;
	}
}

void func_16(int iParam0)
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
	Global_77059[0 /*14*/].f_5 = 2;
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
			func_29(iVar7, iParam0, 155, -1);
			return;
			break;
	}
	func_17(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_17(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
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
	uParam0->f_12 = func_28(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (unk_0x15173FB88ABC94F9(sParam3) != unk_0x15173FB88ABC94F9("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		unk_0x191DDA30577F440A(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		unk_0x191DDA30577F440A(&(uParam0->f_6), 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			unk_0x191DDA30577F440A(&(uParam0->f_6), 5);
		}
		unk_0x191DDA30577F440A(&(uParam0->f_6), 1);
		unk_0x191DDA30577F440A(&(uParam0->f_6), 2);
		unk_0x191DDA30577F440A(&(uParam0->f_6), 6);
		if (func_27(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (unk_0x01758128AAB0BA8F(Global_2621444, joaat("REBREATHER"), 0))
			{
				unk_0x191DDA30577F440A(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_25(Global_2621444, 1, 1, 1, -1))
			{
				unk_0xC664C0067EEAB8D1(&(uParam0->f_6), 2);
			}
			if (!func_25(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x191DDA30577F440A(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_25(Global_2621444, 1, 1, 1, -1))
			{
				unk_0xC664C0067EEAB8D1(&(uParam0->f_6), 2);
			}
			if (!func_25(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x191DDA30577F440A(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_25(Global_2621444, 1, 1, 1, -1))
			{
				unk_0xC664C0067EEAB8D1(&(uParam0->f_6), 2);
			}
			if (!func_25(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x191DDA30577F440A(&(uParam0->f_6), 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		unk_0x191DDA30577F440A(&(uParam0->f_6), 0);
		unk_0x191DDA30577F440A(&(uParam0->f_6), 5);
		if (func_24(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			unk_0x191DDA30577F440A(&(uParam0->f_6), 1);
		}
		if (func_24(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			unk_0x191DDA30577F440A(&(uParam0->f_6), 2);
		}
		if (!func_24(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			unk_0x191DDA30577F440A(&(uParam0->f_6), 4);
		}
	}
	else
	{
		unk_0x191DDA30577F440A(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_27(14))
			{
				return;
			}
			iVar0 = func_20(func_23(iParam1, uParam0->f_2), Global_77056, 0);
			if (unk_0x234B68AC2E35ED5A(iVar0, uParam0->f_1))
			{
				unk_0x191DDA30577F440A(&(uParam0->f_6), 1);
			}
			iVar0 = func_20(func_19(iParam1, uParam0->f_2), Global_77056, 0);
			if (unk_0x234B68AC2E35ED5A(iVar0, uParam0->f_1))
			{
				unk_0x191DDA30577F440A(&(uParam0->f_6), 2);
			}
			if (func_18(iParam1, uParam0->f_2, &iVar1))
			{
				iVar0 = func_20(iVar1, Global_77056, 0);
				if (!unk_0x234B68AC2E35ED5A(iVar0, uParam0->f_1))
				{
					unk_0x191DDA30577F440A(&(uParam0->f_6), 4);
				}
			}
		}
		else
		{
			unk_0x191DDA30577F440A(&(uParam0->f_6), 1);
			unk_0x191DDA30577F440A(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			unk_0x191DDA30577F440A(&(uParam0->f_6), 1);
			unk_0x191DDA30577F440A(&(uParam0->f_6), 2);
		}
	}
}

bool func_18(int iParam0, int iParam1, var uParam2)
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

int func_19(int iParam0, int iParam1)
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

int func_20(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 12074)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2555716[iParam0 /*3*/][func_21(iParam1)];
		if (unk_0xD885BEFA31A18D47(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_21(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_22();
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

int func_22()
{
	return Global_1312763;
}

int func_23(int iParam0, int iParam1)
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

int func_24(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/][iParam3]), iParam4);
		}
		return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}
	return 0;
}

int func_25(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_77056;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_26(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_20(iVar2, iVar0, 0);
		return unk_0x234B68AC2E35ED5A(iVar3, iVar1);
	}
	return 0;
}

bool func_26(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	*uParam2 = 12074;
	if ((bParam4 && Global_4269693) || (!bParam4 && bParam5))
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
		if (Global_4269693)
		{
			iVar0 = unk_0x374867C10614D333(iParam0);
		}
		else
		{
			iVar0 = unk_0x281588E106E4EDA3(iParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = unk_0x374867C10614D333(iParam0);
	}
	else
	{
		iVar0 = unk_0x281588E106E4EDA3(iParam0);
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
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 12074;
}

bool func_27(int iParam0)
{
	return Global_42009 == iParam0;
}

int func_28(int iParam0)
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

void func_29(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
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
	iVar1 = Global_77059[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar3 = (iParam1 - iParam2);
		if (iVar3 >= 0)
		{
			iVar4 = unk_0xE619DE4F72F76E79(iVar1, 0);
			if (iVar4 > iVar3)
			{
				unk_0x4ECDF1AC3EC9ADF1(iVar3, &Var2);
				Global_2621444 = Var2.f_1;
				Global_2621445 = Var2;
				func_17(&(Global_77059[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
				return;
			}
		}
	}
	else if (iParam0 == 13)
	{
		func_17(&(Global_77059[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		unk_0x71794FDA9361403E(&Var5);
		iVar7 = (iParam1 - iParam2);
		if (iVar7 >= 0)
		{
			iVar8 = unk_0x44C4C2E7417F5E29(iVar1, 8, -1, 1, -1, -1);
			if (iVar8 > iVar7)
			{
				unk_0x9404A07A08FA1D0F(iVar7, &Var5);
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
				Global_2621444 = Var5.f_1;
				Global_2621445 = Var5;
				func_17(&(Global_77059[0 /*14*/]), iParam0, iParam1, &(Var5.f_9), Var5.f_3, Var5.f_4, Var5.f_5, unk_0x01758128AAB0BA8F(Var5.f_1, joaat("OUTFIT_ONLY"), 0), iVar6, 2, Var5.f_1 != 0);
				return;
			}
		}
	}
	else
	{
		unk_0xFE9B2B065B8931FE(&Var9);
		if (iParam3 != -1 && Global_77229)
		{
			unk_0x3BA50B117757EA3E(iParam3, &Var9);
			Global_2621444 = Var9.f_1;
			Global_2621445 = Var9;
			func_17(&(Global_77059[0 /*14*/]), iParam0, iParam1, &(Var9.f_9), Var9.f_3, Var9.f_4, Var9.f_5, unk_0x01758128AAB0BA8F(Var9.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var9.f_1 != 0);
			return;
		}
		iVar10 = (iParam1 - iParam2);
		if (iVar10 >= 0)
		{
			iVar11 = unk_0x44C4C2E7417F5E29(iVar1, 8, -1, 0, -1, func_9(iParam0));
			if (iVar11 > iVar10)
			{
				unk_0xDF9AB3C346705246(iVar10, &Var9);
				Global_2621444 = Var9.f_1;
				Global_2621445 = Var9;
				func_17(&(Global_77059[0 /*14*/]), iParam0, iParam1, &(Var9.f_9), Var9.f_3, Var9.f_4, Var9.f_5, unk_0x01758128AAB0BA8F(Var9.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var9.f_1 != 0);
				return;
			}
		}
	}
}

void func_30(int iParam0)
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
	Global_77059[0 /*14*/].f_5 = 2;
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
			func_29(iVar7, iParam0, 9, -1);
			return;
			break;
	}
	func_17(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_31(int iParam0)
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
	Global_77059[0 /*14*/].f_5 = 2;
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
			func_29(iVar7, iParam0, 48, -1);
			return;
			break;
	}
	func_17(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_32(int iParam0)
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
	Global_77059[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_29(iVar7, iParam0, 1, -1);
			return;
			break;
	}
	func_17(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_33(int iParam0)
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
	Global_77059[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_29(iVar7, iParam0, 1, -1);
			return;
			break;
	}
	func_17(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_34(int iParam0)
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
	Global_77059[0 /*14*/].f_5 = 2;
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
			func_29(iVar7, iParam0, 6, -1);
			return;
			break;
	}
	func_17(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
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
	iVar7 = 10;
	Global_77059[0 /*14*/].f_5 = 2;
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
			func_29(iVar7, iParam0, 33, -1);
			return;
			break;
	}
	func_17(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_36(int iParam0)
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
	Global_77059[0 /*14*/].f_5 = 2;
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
			func_29(iVar7, iParam0, 17, -1);
			return;
			break;
	}
	func_17(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_37(int iParam0)
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
	Global_77059[0 /*14*/].f_5 = 2;
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
			func_29(iVar7, iParam0, 18, -1);
			return;
			break;
	}
	func_17(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_38(int iParam0)
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
	Global_77059[0 /*14*/].f_5 = 2;
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
			func_29(iVar7, iParam0, 7, -1);
			return;
			break;
	}
	func_17(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_39(int iParam0)
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
	Global_77059[0 /*14*/].f_5 = 2;
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
			func_29(iVar7, iParam0, 84, -1);
			return;
			break;
	}
	func_17(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_40(int iParam0)
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
	Global_77059[0 /*14*/].f_5 = 2;
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
			func_29(iVar7, iParam0, 104, -1);
			return;
			break;
	}
	func_17(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_41(int iParam0)
{
	if (iParam0 < 136)
	{
		func_43(iParam0);
	}
	else
	{
		func_42(iParam0);
	}
	if (Global_77059[0 /*14*/].f_2 == -1)
	{
		func_29(3, iParam0, 242, -1);
	}
}

void func_42(int iParam0)
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
	Global_77059[0 /*14*/].f_5 = 2;
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
	func_17(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_43(int iParam0)
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
	Global_77059[0 /*14*/].f_5 = 2;
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
	func_17(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_44(int iParam0)
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
	Global_77059[0 /*14*/].f_5 = 2;
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
			func_29(iVar7, iParam0, 9, -1);
			return;
			break;
	}
	func_17(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_45(int iParam0)
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
	Global_77059[0 /*14*/].f_5 = 2;
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
			func_29(iVar7, iParam0, 7, -1);
			return;
			break;
	}
	func_17(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_46(int iParam0, int iParam1)
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
			func_59(iParam1);
			break;
		
		case 4:
			func_58(iParam1);
			break;
		
		case 6:
			func_57(iParam1);
			break;
		
		case 5:
			func_56(iParam1);
			break;
		
		case 8:
			func_55(iParam1);
			break;
		
		case 9:
			func_54(iParam1);
			break;
		
		case 10:
			func_53(iParam1);
			break;
		
		case 1:
			func_52(iParam1);
			break;
		
		case 7:
			func_51(iParam1);
			break;
		
		case 11:
			func_50(iParam1);
			break;
		
		case 12:
			func_49(iParam1);
			break;
		
		case 13:
			func_48(iParam1);
			break;
		
		case 14:
			func_47(iParam1);
			break;
	}
}

void func_47(int iParam0)
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
	Global_77059[0 /*14*/].f_5 = 1;
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
			func_29(iVar7, iParam0, 175, -1);
			return;
			break;
	}
	func_17(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_48(int iParam0)
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
	Global_77059[0 /*14*/].f_5 = 1;
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
			func_29(iVar7, iParam0, 9, -1);
			return;
			break;
	}
	func_17(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
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
	iVar7 = 12;
	Global_77059[0 /*14*/].f_5 = 1;
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
			func_29(iVar7, iParam0, 47, -1);
			return;
			break;
	}
	func_17(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
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
	iVar7 = 11;
	Global_77059[0 /*14*/].f_5 = 1;
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
			func_29(iVar7, iParam0, 63, -1);
			return;
			break;
	}
	func_17(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
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
	iVar7 = 7;
	Global_77059[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_29(iVar7, iParam0, 1, -1);
			return;
			break;
	}
	func_17(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
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
	iVar7 = 1;
	Global_77059[0 /*14*/].f_5 = 1;
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
			func_29(iVar7, iParam0, 5, -1);
			return;
			break;
	}
	func_17(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
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
	iVar7 = 10;
	Global_77059[0 /*14*/].f_5 = 1;
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
			func_29(iVar7, iParam0, 53, -1);
			return;
			break;
	}
	func_17(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
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
	iVar7 = 9;
	Global_77059[0 /*14*/].f_5 = 1;
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
			func_29(iVar7, iParam0, 12, -1);
			return;
			break;
	}
	func_17(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
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
	iVar7 = 8;
	Global_77059[0 /*14*/].f_5 = 1;
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
			func_29(iVar7, iParam0, 77, -1);
			return;
			break;
	}
	func_17(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
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
	iVar7 = 5;
	Global_77059[0 /*14*/].f_5 = 1;
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
			func_29(iVar7, iParam0, 7, -1);
			return;
			break;
	}
	func_17(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
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
	iVar7 = 6;
	Global_77059[0 /*14*/].f_5 = 1;
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
			func_29(iVar7, iParam0, 134, -1);
			return;
			break;
	}
	func_17(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
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
	iVar7 = 4;
	Global_77059[0 /*14*/].f_5 = 1;
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
			func_29(iVar7, iParam0, 117, -1);
			return;
			break;
	}
	func_17(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_59(int iParam0)
{
	if (iParam0 < 107)
	{
		func_62(iParam0);
	}
	else if (iParam0 < 227)
	{
		func_61(iParam0);
	}
	else
	{
		func_60(iParam0);
	}
	if (Global_77059[0 /*14*/].f_2 == -1)
	{
		func_29(3, iParam0, 318, -1);
	}
}

void func_60(int iParam0)
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
	Global_77059[0 /*14*/].f_5 = 1;
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
	func_17(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
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
	Global_77059[0 /*14*/].f_5 = 1;
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
	func_17(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
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
	Global_77059[0 /*14*/].f_5 = 1;
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
	func_17(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
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
	Global_77059[0 /*14*/].f_5 = 1;
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
			func_29(iVar7, iParam0, 21, -1);
			return;
			break;
	}
	func_17(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
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
	Global_77059[0 /*14*/].f_5 = 1;
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
			func_29(iVar7, iParam0, 10, -1);
			return;
			break;
	}
	func_17(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_65(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_82(iParam1);
			break;
		
		case 2:
			func_81(iParam1);
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
	Global_77059[0 /*14*/].f_5 = 0;
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
			func_29(iVar7, iParam0, 113, -1);
			return;
			break;
	}
	func_17(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
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
	Global_77059[0 /*14*/].f_5 = 0;
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
			func_29(iVar7, iParam0, 10, -1);
			return;
			break;
	}
	func_17(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
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
	Global_77059[0 /*14*/].f_5 = 0;
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
			func_29(iVar7, iParam0, 53, -1);
			return;
			break;
	}
	func_17(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
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
	Global_77059[0 /*14*/].f_5 = 0;
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
			func_29(iVar7, iParam0, 45, -1);
			return;
			break;
	}
	func_17(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
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
	Global_77059[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_29(iVar7, iParam0, 1, -1);
			return;
			break;
	}
	func_17(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
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
	Global_77059[0 /*14*/].f_5 = 0;
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
			func_29(iVar7, iParam0, 5, -1);
			return;
			break;
	}
	func_17(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
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
	Global_77059[0 /*14*/].f_5 = 0;
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
			func_29(iVar7, iParam0, 48, -1);
			return;
			break;
	}
	func_17(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
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
	Global_77059[0 /*14*/].f_5 = 0;
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
			func_29(iVar7, iParam0, 20, -1);
			return;
			break;
	}
	func_17(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
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
	Global_77059[0 /*14*/].f_5 = 0;
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
			func_29(iVar7, iParam0, 24, -1);
			return;
			break;
	}
	func_17(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
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
	Global_77059[0 /*14*/].f_5 = 0;
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
			func_29(iVar7, iParam0, 14, -1);
			return;
			break;
	}
	func_17(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
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
	Global_77059[0 /*14*/].f_5 = 0;
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
			func_29(iVar7, iParam0, 99, -1);
			return;
			break;
	}
	func_17(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
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
	Global_77059[0 /*14*/].f_5 = 0;
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
			func_29(iVar7, iParam0, 113, -1);
			return;
			break;
	}
	func_17(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_78(int iParam0)
{
	if (iParam0 < 60)
	{
		func_80(iParam0);
	}
	else
	{
		func_79(iParam0);
	}
	if (Global_77059[0 /*14*/].f_2 == -1)
	{
		func_29(3, iParam0, 181, -1);
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
	Global_77059[0 /*14*/].f_5 = 0;
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
	func_17(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
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
	Global_77059[0 /*14*/].f_5 = 0;
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
	func_17(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
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
	iVar7 = 2;
	Global_77059[0 /*14*/].f_5 = 0;
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
			func_29(iVar7, iParam0, 6, -1);
			return;
			break;
	}
	func_17(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
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
	iVar7 = 0;
	Global_77059[0 /*14*/].f_5 = 0;
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
			func_29(iVar7, iParam0, 7, -1);
			return;
			break;
	}
	func_17(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_83()
{
	Global_77059[0 /*14*/].f_1 = -1;
	Global_77059[0 /*14*/].f_2 = -1;
	Global_77059[0 /*14*/].f_5 = -1;
	Global_77059[0 /*14*/].f_3 = -1;
	Global_77059[0 /*14*/].f_4 = -1;
	Global_77059[0 /*14*/].f_7 = 0;
	Global_77059[0 /*14*/].f_6 = 0;
	Global_77059[0 /*14*/].f_13 = -1;
	Global_77059[0 /*14*/].f_12 = 0;
	Global_77059[0 /*14*/] = 0;
	StringCopy(&(Global_77059[0 /*14*/].f_8), "NO_LABEL", 16);
}

int func_84(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iVar0 = func_13(iParam0);
		Global_112293.f_2361.f_539[iVar0 /*65*/].f_60 = iParam2;
		Global_112293.f_2361.f_539[iVar0 /*65*/].f_61 = iParam1;
		return 1;
	}
	return 0;
}

int func_85(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_9(iParam3);
	iVar1 = unk_0x1AAA5445D3C56366(iParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		iVar5 = unk_0x1887979EFA1D3BF6(iParam0, iVar0, iVar3);
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

int func_86(int iParam0)
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

void func_87(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xECEC7528A52B4EE8(iParam0))
	{
		iVar0 = func_92(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_91(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_90(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_89(iVar0))
		{
			uParam1->f_59 = Global_112293.f_2361.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_112293.f_2361.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_112293.f_2361.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_112293.f_2361.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_112293.f_2361.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_112293.f_2361.f_539[iVar0 /*65*/].f_64;
		}
		else if (unk_0x02BFF15CAA701972() && unk_0x6471F4759775FCA4(iParam0) == unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()))
		{
			if (func_88(161, iParam3))
			{
				uParam1->f_59 = func_20(2053, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_20(753, iParam3, 0);
			}
			uParam1->f_60 = func_20(754, iParam3, 0);
			uParam1->f_61 = func_20(755, iParam3, 0);
		}
		if (unk_0x02BFF15CAA701972() && iParam0 == unk_0x7D2B9E6A64637269())
		{
			if (func_88(161, iParam3))
			{
				uParam1->f_59 = func_20(2053, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_20(753, iParam3, 0);
			}
		}
	}
}

int func_88(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2592627[iParam0 /*3*/][func_21(iParam1)];
	if (unk_0xEB399571DCA129A9(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_89(int iParam0)
{
	return iParam0 < 3;
}

void func_90(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_92(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x228A4ED518554B3F(iParam0, iParam1);
		*uParam3 = unk_0x64F7E3FF8F40315D(iParam0, iParam1);
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
				if (unk_0xB22628F56B3EAA2E(iParam0) && unk_0xEABC48138FE58714(iParam0) != -1)
				{
					*uParam2 = unk_0xEABC48138FE58714(iParam0);
					*uParam3 = unk_0x79D810B8C4DF88FC(iParam0);
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

void func_91(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_92(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x094C1D2DFE050D6E(iParam0, iParam1);
		*uParam3 = unk_0x288277F22D527487(iParam0, iParam1);
		*uParam4 = unk_0xEE2FD6984DD352B8(iParam0, iParam1);
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

int func_92(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x419E13582192CFEA(iParam0))
	{
		iVar1 = unk_0x6471F4759775FCA4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_93(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_93(int iParam0)
{
	if (func_89(iParam0))
	{
		return func_94(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_94(int iParam0)
{
	return Global_1878[iParam0 /*29*/];
}

void func_95(char* sParam0, struct<3> Param1, float fParam2, bool bParam3)
{
	if (unk_0x0BABEFEA577FCFA4(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), Param1, 1) < fParam2 && !*bParam3)
	{
		unk_0xA566E488BA0A0A4C(sParam0, 8);
		*bParam3 = 1;
	}
}

int func_96(struct<3> Param0, float fParam1)
{
	switch (iLocal_566)
	{
		case 0:
			if (func_98(&iLocal_88, 15, -808.0422f, 168.5755f, 75.7504f, 244.0649f, 1))
			{
				iLocal_566++;
			}
			break;
		
		case 1:
			if (!unk_0xECEC7528A52B4EE8(iLocal_88))
			{
				unk_0x145AB994058F1720(iLocal_88, 2, 3, 0);
				unk_0x145AB994058F1720(iLocal_88, 3, 4, 0);
				unk_0x145AB994058F1720(iLocal_88, 4, 4, 0);
				unk_0x145AB994058F1720(iLocal_88, 6, 2, 0);
				unk_0x57E768AC24E0E82E(iLocal_88, 0, 0, 0);
				unk_0x57E768AC24E0E82E(iLocal_88, 1, 1, 0);
				iLocal_566++;
			}
			break;
		
		case 2:
			if (!unk_0xECEC7528A52B4EE8(iLocal_88))
			{
				if (unk_0x2D0F2BF9BAF6A1AD(iLocal_88))
				{
					unk_0x4170FE884DF7426D(iLocal_88, 2, 3, 0, 0);
					unk_0x4170FE884DF7426D(iLocal_88, 3, 4, 0, 0);
					unk_0x4170FE884DF7426D(iLocal_88, 4, 4, 0, 0);
					unk_0x4170FE884DF7426D(iLocal_88, 6, 2, 0, 0);
					unk_0xC8749D706BBF16E1(iLocal_88, 0, 0, 0, false);
					unk_0xC8749D706BBF16E1(iLocal_88, 1, 1, 0, false);
					unk_0x78CDDD1E6367978D(iLocal_88, Param0, 1, 0, 0, 1);
					unk_0xCD37A28258D70638(iLocal_88, fParam1);
					func_97(iLocal_88);
					unk_0xAA87C426DC96454A(iLocal_88);
					unk_0xE5E2E9A5C005A8E9(iLocal_88);
					iLocal_566 = 0;
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_97(int iParam0)
{
	if (!unk_0xECEC7528A52B4EE8(iParam0))
	{
		unk_0x13812A3531901D7E(iParam0, 0);
		unk_0x1D7A4E9E23D306D6(iParam0, 0);
		unk_0x2EB33FFA32BC9E49(iParam0, 0);
		unk_0x7B28A83A0D3DD0F9(iParam0, 104, 1);
		unk_0x1EB6C2E7D90CD82E(iParam0, 0);
		unk_0xA571B9D2035E6945(iParam0, 1);
		unk_0x472BD05C38FE7A6B(iParam0, 0);
		unk_0xBE91B077ADADE97F(iParam0, 1);
		unk_0x2271ED1E65FB75EE(iParam0, iLocal_114);
	}
}

int func_98(int iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_89(iParam1))
	{
		iVar0 = func_100(iParam1);
		unk_0x16E516CA9C88FF48(iVar0);
		if (unk_0xA9C0BBFB9CBB66F1(iVar0))
		{
			if (unk_0x419E13582192CFEA(*iParam0))
			{
				unk_0xC606AE2A3209945E(iParam0);
			}
			*iParam0 = unk_0x0FDCFECB2EF2BC1C(26, iVar0, Param2, fParam3, 0, 0);
			unk_0xB5BF3BBD2E785884(*iParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (unk_0x094C1D2DFE050D6E(*iParam0, 3) == 0)
				{
					unk_0x4170FE884DF7426D(*iParam0, 5, 2, 0, 0);
				}
			}
			func_99(*iParam0, iParam1);
			if (bParam4)
			{
				unk_0x824F744352C8BC82(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_99(var uParam0, int iParam1)
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
	Global_95204[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_100(int iParam0)
{
	if (!func_89(iParam0))
	{
		return func_94(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_101()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	switch (iLocal_569)
	{
		case 0:
			if (iLocal_70 < 3 || (iLocal_70 == 11 && iLocal_72 < 3))
			{
				if (vdist2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), Local_133) < 40000f)
				{
					iLocal_569++;
				}
			}
			break;
		
		case 1:
			bVar0 = false;
			if ((iLocal_70 > 2 && iLocal_70 != 11) || (iLocal_70 == 11 && iLocal_72 > 2))
			{
				bVar0 = true;
			}
			if (func_142(bVar0))
			{
				fLocal_570 = 0f;
				iLocal_569++;
			}
			break;
		
		case 2:
			if (!iLocal_571)
			{
				if (unk_0xCC09B877A009E41F(-1105.241f, -1697.025f, 3.3678f, 2f, joaat("prop_table_03_chr"), 0))
				{
					iVar1 = unk_0xB219A5BFF547852F(-1105.241f, -1697.025f, 3.3678f, 2f, joaat("prop_table_03_chr"), 1, 0, 1);
					unk_0x3A653D4F5FA4B665(iVar1, 1, 1, 1, 1, 1, 1, 0, 0);
					unk_0xA2C015B68CE01357(iVar1, 1);
					iLocal_571 = 1;
				}
			}
			if (!unk_0xECEC7528A52B4EE8(iLocal_90))
			{
				if (!unk_0x11DBA82F76F3C4C2(iLocal_90))
				{
					if (!unk_0x715C70D06215B9E9(iLocal_90, "PROP_HUMAN_SEAT_CHAIR"))
					{
						unk_0x78CDDD1E6367978D(iLocal_90, Local_133, 1, 0, 0, 1);
						if (unk_0xC0628DBC779B620D(Local_133, "PROP_HUMAN_SEAT_CHAIR", 2f, 1))
						{
							unk_0x2D64BC4D301915C2(iLocal_90, -1105.241f, -1697.025f, 3.3678f, 2f, 0);
						}
					}
				}
			}
			iVar2 = 0;
			while (iVar2 < iLocal_96)
			{
				if (unk_0x419E13582192CFEA(iLocal_96[iVar2]) && unk_0xBFCE58B2B3249999(iLocal_96[iVar2], 0))
				{
					if (iLocal_70 <= 2)
					{
						if (vdist2(unk_0xD6E677FAD7521410(iLocal_96[iVar2], 1), unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1)) < 9f)
						{
							unk_0x366E7F593105797F(0, 263, 1);
							unk_0x366E7F593105797F(0, 141, 1);
							unk_0x366E7F593105797F(0, 140, 1);
						}
					}
					if (iLocal_70 < 2)
					{
						if (unk_0xAFD2714E8B5AEB9F(iLocal_96[iVar2]) != 2)
						{
							unk_0x5C052A30B9FCA449(iLocal_96[iVar2], 2);
						}
					}
					else if (unk_0xAFD2714E8B5AEB9F(iLocal_96[iVar2]) == 2)
					{
						unk_0x5C052A30B9FCA449(iLocal_96[iVar2], 1);
					}
				}
				iVar2++;
			}
			func_103();
			if (vdist2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), Local_133) > 44100f)
			{
				func_102();
				iLocal_569 = 0;
			}
			break;
	}
}

void func_102()
{
	int iVar0;
	
	if (unk_0x419E13582192CFEA(iLocal_90))
	{
		unk_0xC606AE2A3209945E(&iLocal_90);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_96)
	{
		if (unk_0x419E13582192CFEA(iLocal_96[iVar0]))
		{
			unk_0x5420D0D520CF44D0(&(iLocal_96[iVar0]));
		}
		iVar0++;
	}
	unk_0x824F744352C8BC82(joaat("tribike"));
	unk_0x824F744352C8BC82(joaat("bmx"));
	unk_0x824F744352C8BC82(joaat("cruiser"));
	unk_0x824F744352C8BC82(joaat("scorcher"));
	unk_0x824F744352C8BC82(joaat("u_m_m_bikehire_01"));
}

void func_103()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	iVar1 = 0;
	bVar2 = false;
	iVar3 = 0;
	if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		if (unk_0xBFCE58B2B3249999(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0), 0))
		{
			iVar0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
		}
	}
	else if (unk_0xBFCE58B2B3249999(unk_0x0BF0F8F3AD0993F6(), 0))
	{
		iVar0 = unk_0x0BF0F8F3AD0993F6();
	}
	if (((((unk_0x419E13582192CFEA(iVar0) && unk_0xBFCE58B2B3249999(iVar0, 0)) && !unk_0xEACFC87E44438F24(iVar0, joaat("scorcher"))) && !unk_0xEACFC87E44438F24(iVar0, joaat("cruiser"))) && !unk_0xEACFC87E44438F24(iVar0, joaat("tribike"))) && !unk_0xEACFC87E44438F24(iVar0, joaat("bmx")))
	{
		if (unk_0x0BCA9ADE67DF9DD8(unk_0x4DDAC4C80BACF92C(iVar0)) > 2f)
		{
			if (unk_0x591190E69BE43117(iVar0, -1106.309f, -1693.715f, 5.12379f, 6.25f, 7f, 3.25f, 0, 1, 0))
			{
				iVar4 = 0;
				while (iVar4 < iLocal_96)
				{
					if (unk_0xBFCE58B2B3249999(iLocal_96[iVar4], 0))
					{
						if (unk_0x83B12E293561B796(iLocal_96[iVar4], iVar0))
						{
							bVar2 = true;
						}
					}
					iVar4++;
				}
			}
		}
	}
	if (iVar1 || bVar2)
	{
		iVar4 = 0;
		while (iVar4 < iLocal_96)
		{
			if (unk_0xBFCE58B2B3249999(iLocal_96[iVar4], 0))
			{
				unk_0xA2C015B68CE01357(iLocal_96[iVar4], 0);
				unk_0xBC5268D1B5C5B73B(iLocal_96[iVar4], 0, 0f, 0f, -0.001f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
			}
			iVar4++;
		}
		if (!unk_0xECEC7528A52B4EE8(iLocal_90))
		{
			if (bVar2)
			{
				func_104("FM2_BIKES");
			}
		}
	}
	bVar5 = false;
	if (!unk_0xECEC7528A52B4EE8(iLocal_90))
	{
		if ((((unk_0x16B4C536089C3CAD(-1, unk_0xD6E677FAD7521410(iLocal_90, 1), 20f) || unk_0x3E72EB0926A107F9(unk_0xD6E677FAD7521410(iLocal_90, 1), 20f, 1)) || unk_0xD7196DD041C06559(unk_0xD6E677FAD7521410(iLocal_90, 1) + Vector(20f, 20f, 20f), unk_0xD6E677FAD7521410(iLocal_90, 1) - Vector(20f, 20f, 20f), 0)) || unk_0x11DBA82F76F3C4C2(iLocal_90)) || ((iLocal_70 == 2 && unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) > 0) && unk_0x591190E69BE43117(unk_0x7D2B9E6A64637269(), Local_133, 40f, 40f, 20f, 0, 1, 0)))
		{
			bVar5 = true;
		}
		if (vdist2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(iLocal_90, 1)) < 100f)
		{
			if (unk_0xCA70422943A4EC8D(iLocal_90, unk_0x7D2B9E6A64637269()))
			{
				if (unk_0x24A466C655E8588A(unk_0x7D2B9E6A64637269(), 6) && unk_0x4140085B99B17F97(unk_0x1146A9AE09CE2B14(), iLocal_90))
				{
					fLocal_570 = (fLocal_570 + unk_0x7FF6ACE380ED166C());
					if (fLocal_570 > 0.5f)
					{
						bVar5 = true;
					}
				}
				else if (fLocal_570 > 0f)
				{
					fLocal_570 = (fLocal_570 - (unk_0x7FF6ACE380ED166C() * 2f));
				}
				else if (fLocal_570 != 0f)
				{
					fLocal_570 = 0f;
				}
			}
			if (unk_0xA6E8FBD68548675F(iLocal_90, unk_0x7D2B9E6A64637269(), 1) || unk_0x6B9E71121F5B8154(iLocal_90))
			{
				bVar5 = true;
			}
		}
		if (vdist2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(iLocal_90, 1)) < 400f && unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) > 0)
		{
			iVar3 = 1;
			bVar5 = true;
		}
	}
	if (bVar5)
	{
		iVar4 = 0;
		while (iVar4 < iLocal_96)
		{
			if (unk_0x419E13582192CFEA(iLocal_96[iVar4]))
			{
				unk_0xA2C015B68CE01357(iLocal_96[iVar4], 0);
			}
			iVar4++;
		}
		if ((!unk_0xECEC7528A52B4EE8(iLocal_90) && !unk_0x11DBA82F76F3C4C2(iLocal_90)) && unk_0x906F945A9175295C(iLocal_90))
		{
			unk_0xC9D4B2958B9AD7E9(iLocal_90, unk_0xD6E677FAD7521410(iLocal_90, 1) + unk_0x557C9CA8FCC667DF(iLocal_90));
			unk_0x1DC2BF231DE6A016(iLocal_90, unk_0x7D2B9E6A64637269(), 200f, -1, 0, 0);
		}
		if (unk_0xBFCE58B2B3249999(iLocal_94, 0))
		{
			if (unk_0xAB0BB1BDD76B67DC(iLocal_94))
			{
				unk_0x50B76EE36FBE865F(iLocal_94);
			}
		}
		if (((iLocal_70 == 1 || iLocal_70 == 2) || (iLocal_70 == 3 && unk_0xD406352E21A7E1D0(iLocal_89, iLocal_90, 30f, 30f, 30f, 0, 1, 0))) || iLocal_70 == 11)
		{
			if (!unk_0xECEC7528A52B4EE8(iLocal_89))
			{
				unk_0x82D2BB48A39F1E88(iLocal_89, 2, 0);
				unk_0x1DC2BF231DE6A016(iLocal_89, unk_0x7D2B9E6A64637269(), 200f, 20000, 0, 0);
			}
		}
	}
	if (unk_0x419E13582192CFEA(iLocal_90) && (unk_0xE50EB54E0F21BED0(iLocal_90, 0) || unk_0xECEC7528A52B4EE8(iLocal_90)))
	{
		if ((iLocal_70 < 3 || (iLocal_70 == 3 && unk_0xD406352E21A7E1D0(iLocal_89, iLocal_90, 30f, 30f, 30f, 0, 1, 0))) || iLocal_70 == 11)
		{
			func_104("FM2_BGHIT");
		}
	}
	else if ((((!unk_0xECEC7528A52B4EE8(iLocal_90) && unk_0x11DBA82F76F3C4C2(iLocal_90)) && iLocal_70 < 3) || fLocal_570 > 0.5f) || iVar3)
	{
		func_104("FM2_BGRUN");
	}
	else if (!unk_0xECEC7528A52B4EE8(iLocal_89) && unk_0x11DBA82F76F3C4C2(iLocal_89))
	{
		func_104("FM2_JSPOOK");
	}
	if (unk_0x419E13582192CFEA(iVar0))
	{
		iVar0 = 0;
	}
}

void func_104(char* sParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	unk_0xFB8A6909539A30B1("FAM2_STOP");
	if (unk_0xDA654EB115F9FF7D(sParam0, "FM2_JSPOOK"))
	{
		if (unk_0x2AB8EC6521549BAD(iLocal_89))
		{
			sParam0 = "FM2_JIMHIT";
		}
	}
	func_129(sParam0);
	if (unk_0xDA654EB115F9FF7D(sParam0, "FM2_TSPOOK") || unk_0xDA654EB115F9FF7D(sParam0, "FM2_JSPOOK"))
	{
		if (unk_0x419E13582192CFEA(iLocal_88))
		{
			if (unk_0xAB3E7E62A69D0DB3(iLocal_88, unk_0xC66769C13C830856(unk_0x1146A9AE09CE2B14())))
			{
				unk_0xC1A7CF4B179CD225(iLocal_88);
			}
			unk_0x1DC2BF231DE6A016(iLocal_88, unk_0x7D2B9E6A64637269(), 500f, 60000, 0, 0);
		}
		if (unk_0x419E13582192CFEA(iLocal_89))
		{
			if (unk_0xAB3E7E62A69D0DB3(iLocal_89, unk_0xC66769C13C830856(unk_0x1146A9AE09CE2B14())))
			{
				unk_0xC1A7CF4B179CD225(iLocal_89);
			}
			unk_0x1DC2BF231DE6A016(iLocal_89, unk_0x7D2B9E6A64637269(), 500f, 60000, 0, 0);
		}
	}
	while (!func_128())
	{
		wait(0);
	}
	if (iLocal_70 == 1)
	{
		if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
		{
			iVar0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
		}
		else
		{
			iVar0 = unk_0xC228040556B02BEA();
		}
		bVar1 = false;
		if (unk_0x419E13582192CFEA(iVar0) && unk_0xBFCE58B2B3249999(iVar0, 0))
		{
			if (func_468(iVar0))
			{
				iVar2 = 0;
				while (iVar2 < 3)
				{
					if (unk_0x419E13582192CFEA(Global_96731[iVar2]))
					{
						bVar1 = true;
						iVar2 = 3;
					}
					iVar2++;
				}
			}
			if (!unk_0xEACFC87E44438F24(iVar0, joaat("taxi")) && !bVar1)
			{
				if (vdist(unk_0xD6E677FAD7521410(iVar0, 1), unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1)) < 50f)
				{
					if (func_460(iVar0) != 0)
					{
						func_107(iVar0, 0, 145);
					}
				}
			}
		}
	}
	unk_0x43D3344EE0A5162E("smboat");
	iVar3 = 0;
	while (iVar3 <= 1)
	{
		if (unk_0x575B7C28D81C0B4D(uLocal_101[iVar3]))
		{
			unk_0x1AD5BCFEC31BB8D9(&(uLocal_101[iVar3]));
		}
		if (unk_0x419E13582192CFEA(iLocal_100[iVar3]))
		{
			unk_0xC606AE2A3209945E(&(iLocal_100[iVar3]));
		}
		if (unk_0x419E13582192CFEA(iLocal_99[iVar3]))
		{
			unk_0x5420D0D520CF44D0(&(iLocal_99[iVar3]));
		}
		iVar3++;
	}
	if (iLocal_70 >= 5 && iLocal_70 != 11)
	{
		while (!func_385(1, 1))
		{
			wait(0);
		}
		func_105(Local_124, fLocal_125);
	}
	if (unk_0x419E13582192CFEA(iLocal_89))
	{
		unk_0xC606AE2A3209945E(&iLocal_89);
	}
	if (unk_0x419E13582192CFEA(iLocal_88))
	{
		unk_0xC606AE2A3209945E(&iLocal_88);
	}
	if (unk_0xBFCE58B2B3249999(iLocal_93, 0))
	{
		unk_0x795957CD3A0042C8(&iLocal_93);
	}
	if (unk_0xBFCE58B2B3249999(iLocal_94, 0))
	{
		unk_0x795957CD3A0042C8(&iLocal_94);
	}
	func_589();
}

void func_105(struct<3> Param0, float fParam1)
{
	if (func_106(Global_77488, 0f, 0f, 0f, 0))
	{
		Global_77488 = { Param0 };
		Global_77491 = fParam1;
	}
}

bool func_106(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.x == Param1.x && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_107(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	char* sVar1;
	
	if (iParam1 == 0)
	{
		sVar1 = unk_0xDB42E53EE0542D82(iParam0, &uVar0);
		if (!unk_0xAB6A270F84A8781E(sVar1))
		{
			if (unk_0x15173FB88ABC94F9(sVar1) == unk_0x15173FB88ABC94F9("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_108(iParam0, iParam2);
	return 1;
}

void func_108(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_114(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0x27FC1B0077581B37(iParam0, -1, 0);
		if (!unk_0x419E13582192CFEA(iVar0))
		{
			iVar0 = unk_0xC6F40BA22FFB861E(iParam0, -1);
		}
		if (unk_0x419E13582192CFEA(iVar0) && !unk_0xECEC7528A52B4EE8(iVar0))
		{
			if (unk_0x6471F4759775FCA4(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x6471F4759775FCA4(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x6471F4759775FCA4(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_112293.f_2361.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x6471F4759775FCA4(iParam0) == Global_112293.f_32747.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0xAB6A270F84A8781E(&(Global_112293.f_32747.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0xDA654EB115F9FF7D(unk_0x0B676D4511ABB729(iParam0), &(Global_112293.f_32747.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_112293.f_32747.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_112293.f_32747.f_5592[iVar1] = iVar2;
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
		if (unk_0x6471F4759775FCA4(iParam0) == Global_112293.f_32747.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0xAB6A270F84A8781E(&(Global_112293.f_32747.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0xDA654EB115F9FF7D(unk_0x0B676D4511ABB729(iParam0), &(Global_112293.f_32747.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_112293.f_32747.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_112293.f_32747.f_5590 = iParam1;
	Global_76971 = iParam0;
	Global_112293.f_32747.f_5588 = 1;
	func_109(iParam0, &(Global_112293.f_32747.f_5510));
}

void func_109(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		func_113(uParam1);
		uParam1->f_66 = unk_0x6471F4759775FCA4(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x0B676D4511ABB729(iParam0), 16);
		*uParam1 = unk_0x8F77FF37B3B66EE9(iParam0);
		unk_0x63316D59F2B56D9A(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x39A17B456BB9800A(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xDCC81D0196B6BB05(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x3763A95FD16BF2D0(iParam0);
		uParam1->f_67 = unk_0x91A6237658B4DA68(iParam0);
		uParam1->f_69 = unk_0x1D74385CEC17951D(iParam0);
		uParam1->f_70 = unk_0xAFD2714E8B5AEB9F(iParam0);
		unk_0x67CF1352CC692A08(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x0CC8B4C581022F66(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x0602C700974DF696(iParam0, 2))
		{
			unk_0x191DDA30577F440A(&(uParam1->f_77), 28);
		}
		if (unk_0x0602C700974DF696(iParam0, 3))
		{
			unk_0x191DDA30577F440A(&(uParam1->f_77), 29);
		}
		if (unk_0x0602C700974DF696(iParam0, 0))
		{
			unk_0x191DDA30577F440A(&(uParam1->f_77), 30);
		}
		if (unk_0x0602C700974DF696(iParam0, 1))
		{
			unk_0x191DDA30577F440A(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_112(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0xCBD5BF9FD895F81F(iParam0, 0))
		{
			uParam1->f_68 = unk_0x334291A8490E5BCB(iParam0);
		}
		if (unk_0x48E10529AEAE00F9(uParam1->f_66))
		{
			if (unk_0x4D79903AC2C62A29(iParam0))
			{
				switch (unk_0xC504A6173BF90791(iParam0))
				{
					case 3:
					case 0:
						unk_0xC664C0067EEAB8D1(&(uParam1->f_77), 23);
						unk_0x191DDA30577F440A(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						unk_0xC664C0067EEAB8D1(&(uParam1->f_77), 23);
						unk_0xC664C0067EEAB8D1(&(uParam1->f_77), 22);
						break;
					
					case 5:
						unk_0x191DDA30577F440A(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x191DDA30577F440A(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x7EB56EF7F2EC63A6(iParam0))
		{
			unk_0x191DDA30577F440A(&(uParam1->f_77), 9);
		}
		if (unk_0x44CD355F587F467C(iParam0))
		{
			unk_0x191DDA30577F440A(&(uParam1->f_77), 10);
		}
		if (unk_0x06B95C5D3415375D(iParam0))
		{
			unk_0x191DDA30577F440A(&(uParam1->f_77), 13);
			unk_0xD1C8CE12A38AA6D0(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x89FF0171FDDB2246(iParam0))
		{
			unk_0x191DDA30577F440A(&(uParam1->f_77), 12);
		}
		func_111(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xE3C9546BB1ECEC04(iParam0, iVar0 + 1))
			{
				unk_0x191DDA30577F440A(&(uParam1->f_77), func_110(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x88CF23F322C9687A(iParam0, 0))
		{
			unk_0x191DDA30577F440A(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0xC664C0067EEAB8D1(&(uParam1->f_77), 11);
		}
		if (unk_0x5B38E054B758C032(iParam0, "IgnoredByQuickSave") && unk_0xCDB2D643EC18E75E(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x191DDA30577F440A(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0xC664C0067EEAB8D1(&(uParam1->f_77), 27);
		}
	}
}

int func_110(int iParam0)
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

int func_111(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xBFCE58B2B3249999(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xCF1FE5DEA3E2E135(*iParam0) == 0)
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
			if (unk_0x0350660BE3973FF3(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (unk_0x0350660BE3973FF3(*iParam0, iVar1))
			{
				switch (unk_0x64CF0B1FED5D2D23(*iParam0))
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
			(*uParam1)[iVar0] = unk_0xB51972B58BF40F96(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xB7A74982A8F639B9(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xB7A74982A8F639B9(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_112(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

void func_113(var uParam0)
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

int func_114(int iParam0)
{
	if ((((((((((!unk_0x419E13582192CFEA(iParam0) || !unk_0xBFCE58B2B3249999(iParam0, 0)) || func_462(iParam0, 0, 0)) || func_462(iParam0, 1, 0)) || func_462(iParam0, 2, 0)) || func_460(iParam0) != 145) || func_127(iParam0)) || func_126(iParam0)) || func_468(iParam0)) || func_125(iParam0)) || !func_115(unk_0x6471F4759775FCA4(iParam0)))
	{
		if (func_126(iParam0))
		{
		}
		if (func_126(iParam0))
		{
		}
		if (func_462(iParam0, 0, 0))
		{
		}
		if (func_462(iParam0, 1, 0))
		{
		}
		if (func_462(iParam0, 2, 0))
		{
		}
		if (func_460(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_115(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_116(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0x8D367F0B53916265(iParam0) || unk_0x48E10529AEAE00F9(iParam0)) || unk_0xE267416B80E7921F(iParam0)) || unk_0x8C6BE3ED9638F314(iParam0))
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
		case joaat("firetruk"):
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

int func_116(int iParam0, bool bParam1)
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
		if (!func_124())
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
		if ((((!func_123() && !func_122()) && !func_121()) && !func_120()) && !func_124())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x2322DD4FBF5E4E2F() || unk_0x3640D836D145B814()) || unk_0xE22116C6D321FECA())
		{
		}
		else if (!func_121())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_119(iParam0))
		{
			return 0;
		}
	}
	if (!func_117(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_117(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_118())
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

int func_118()
{
	if (unk_0x3640D836D145B814())
	{
		return unk_0x57FB3D94D590E8BC();
	}
	return 0;
}

int func_119(int iParam0)
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

int func_120()
{
	return 0;
}

int func_121()
{
	return 1;
}

int func_122()
{
	return 1;
}

int func_123()
{
	if (unk_0x14FA206D9CE730A9(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_124()
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

int func_125(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x6471F4759775FCA4(iParam0);
	sVar1 = unk_0x0B676D4511ABB729(iParam0);
	if (iVar0 == joaat("speedo") && unk_0xDA654EB115F9FF7D(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_116(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_126(int iParam0)
{
	int iVar0;
	
	if (unk_0x419E13582192CFEA(iParam0) && unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x419E13582192CFEA(Global_96701[iVar0]) && unk_0xBFCE58B2B3249999(Global_96701[iVar0], 0))
			{
				if (Global_96701[iVar0] == iParam0 && unk_0x6471F4759775FCA4(Global_96701[iVar0]) == unk_0x6471F4759775FCA4(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_127(int iParam0)
{
	int iVar0;
	
	if (unk_0x419E13582192CFEA(Global_76066.f_484[24]))
	{
		if (iParam0 == Global_76066.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x419E13582192CFEA(Global_76066.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_76066.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_128()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_99370 == 7 || Global_99370 == 8)
	{
		return 1;
	}
	return 0;
}

void func_129(char* sParam0)
{
	func_141(sParam0);
	func_130(0);
}

void func_130(int iParam0)
{
	int iVar0;
	
	if (Global_112293.f_9083 || func_140(0))
	{
		iVar0 = func_139();
		if (!func_131(iVar0))
		{
			return;
		}
		unk_0x191DDA30577F440A(&(Global_90122[iVar0 /*5*/].f_1), 5);
		Global_99406 = iParam0;
	}
}

int func_131(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_136();
	if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
	{
		unk_0xD91B27582ECB3B74(5000);
	}
	iVar0 = Global_90122[iParam0 /*5*/];
	iVar1 = Global_77517.f_109[iVar0 /*4*/];
	func_135(iVar1, 1);
	unk_0xEB25B6CFBE0FD35C(unk_0x1146A9AE09CE2B14(), 0);
	unk_0x06DFF0CF48AB014E(unk_0x1146A9AE09CE2B14(), 0);
	func_132(&(Global_112293.f_2361.f_539), iVar1);
	if (Global_93545 == Global_99407)
	{
		Global_112293.f_9083.f_330[iVar1 /*6*/].f_1++;
	}
	if (!unk_0x234B68AC2E35ED5A(Global_90158[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
		{
			unk_0x79B648063E94A67F(0);
		}
	}
	Global_112293.f_9083.f_330[iVar1 /*6*/].f_2++;
	Global_93545 = Global_99407;
	if (iParam0 == -1)
	{
		if (Global_112293.f_9083)
		{
		}
		return 0;
	}
	if (unk_0x234B68AC2E35ED5A(Global_90122[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (unk_0x234B68AC2E35ED5A(Global_90122[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_132(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_112293.f_18531[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0x234B68AC2E35ED5A(Global_112293.f_9083.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_134(Global_112293.f_18531[iVar0], &Var2, &fVar3))
			{
				Global_112293.f_18531[iVar0] = 318;
				func_133(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_96760[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_96760[iVar0 /*29*/].f_9 = 0f;
				Global_96760[iVar0 /*29*/].f_12 = 0f;
				Global_96760[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_96760[iVar0 /*29*/].f_10 = 0f;
				Global_96760[iVar0 /*29*/].f_13 = 0f;
				Global_96760[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_96760[iVar0 /*29*/].f_11 = 0f;
				Global_96760[iVar0 /*29*/].f_14 = 0f;
				Global_96760[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_96760[iVar0 /*29*/].f_26 = 0f;
				Global_96760[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_96760[iVar0 /*29*/].f_27 = 0f;
				Global_96760[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_96760[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_133(var uParam0)
{
	*uParam0 = -15;
}

int func_134(int iParam0, var uParam1, float fParam2)
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
			return func_134(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_134(8, uParam1, fParam2);
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

void func_135(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_93355[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_93355[iParam0 /*2*/] = 0;
	}
}

void func_136()
{
	Global_99405 = 1;
	if (unk_0x4766CFEFD1C88C1A(unk_0x1146A9AE09CE2B14(), 1))
	{
		if (unk_0xAB6A270F84A8781E(&Global_77480))
		{
			switch (func_137())
			{
				case 0:
					StringCopy(&Global_77480, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_77480, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_77480, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_77484, "", 16);
		}
		Global_99405 = 0;
	}
	else if (!unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
	{
		if (unk_0xAB6A270F84A8781E(&Global_77480))
		{
			switch (func_137())
			{
				case 0:
					StringCopy(&Global_77480, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_77480, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_77480, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_77484, "", 16);
		}
		Global_99405 = 0;
		unk_0x191DDA30577F440A(&(Global_99370.f_20), 25);
	}
}

int func_137()
{
	func_138();
	return Global_112293.f_2361.f_539.f_4321;
}

void func_138()
{
	int iVar0;
	
	if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()))
	{
		if (func_93(Global_112293.f_2361.f_539.f_4321) != unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()))
		{
			iVar0 = func_92(unk_0x7D2B9E6A64637269());
			if (func_89(iVar0) && (!func_27(14) || Global_111244))
			{
				if (Global_112293.f_2361.f_539.f_4321 != iVar0 && func_89(Global_112293.f_2361.f_539.f_4321))
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

int func_139()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0x234B68AC2E35ED5A(Global_90122[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_140(bool bParam0)
{
	if (!bParam0 && unk_0x636F1F53CC61D2C9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x234B68AC2E35ED5A(Global_77496, 0);
}

void func_141(char* sParam0)
{
	if (!unk_0xAB6A270F84A8781E(sParam0))
	{
		if (unk_0xA3A3E3B836DB6D5B(sParam0) <= 16)
		{
			StringCopy(&Global_77480, sParam0, 16);
			StringCopy(&Global_77484, "", 16);
			if (unk_0x2D54F00919E36B63())
			{
				unk_0xAD9DFA8200EA2A8A();
			}
		}
	}
}

bool func_142(bool bParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	unk_0x16E516CA9C88FF48(joaat("u_m_m_bikehire_01"));
	unk_0x16E516CA9C88FF48(joaat("cruiser"));
	unk_0x16E516CA9C88FF48(joaat("bmx"));
	unk_0x16E516CA9C88FF48(joaat("scorcher"));
	unk_0x16E516CA9C88FF48(joaat("tribike"));
	if ((((unk_0xA9C0BBFB9CBB66F1(joaat("u_m_m_bikehire_01")) && unk_0xA9C0BBFB9CBB66F1(joaat("cruiser"))) && unk_0xA9C0BBFB9CBB66F1(joaat("bmx"))) && unk_0xA9C0BBFB9CBB66F1(joaat("scorcher"))) && unk_0xA9C0BBFB9CBB66F1(joaat("tribike")))
	{
		if (iLocal_166 != 0 || !bParam0)
		{
			if (!unk_0x419E13582192CFEA(iLocal_96[0]))
			{
				iLocal_96[0] = unk_0x170478CC84C8AE2F(joaat("scorcher"), -1106.885f, -1692.229f, 4.0189f, 0f, 1, 1, 0);
			}
			if (unk_0xBFCE58B2B3249999(iLocal_96[0], 0))
			{
				unk_0xDB8D6815E13996A9(iLocal_96[0], -1106.885f, -1692.229f, 4.0189f, 0, 0, 1);
				unk_0x79C3AEC4C7C91A54(iLocal_96[0], -0.0504f, -0.0723f, -0.4427f, 0.8923f);
				unk_0x473DA067A7AE5435(iLocal_96[0], 2);
			}
		}
		if ((iLocal_165 != 1 && iLocal_166 != 1) || !bParam0)
		{
			if (!unk_0x419E13582192CFEA(iLocal_96[1]))
			{
				iLocal_96[1] = unk_0x170478CC84C8AE2F(joaat("cruiser"), -1108.396f, -1690.399f, 3.9549f, 0f, 1, 1, 0);
			}
			if (unk_0xBFCE58B2B3249999(iLocal_96[1], 0))
			{
				unk_0xDB8D6815E13996A9(iLocal_96[1], -1108.396f, -1690.399f, 3.9549f, 0, 0, 1);
				unk_0x79C3AEC4C7C91A54(iLocal_96[1], -0.0466f, -0.074f, -0.4628f, 0.8822f);
				unk_0x473DA067A7AE5435(iLocal_96[1], 1);
			}
		}
		if (iLocal_166 != 2 || !bParam0)
		{
			if (!unk_0x419E13582192CFEA(iLocal_96[2]))
			{
				iLocal_96[2] = unk_0x170478CC84C8AE2F(joaat("bmx"), -1109.405f, -1688.704f, 3.7501f, 0f, 1, 1, 0);
			}
			if (unk_0xBFCE58B2B3249999(iLocal_96[2], 0))
			{
				unk_0xDB8D6815E13996A9(iLocal_96[2], -1109.405f, -1688.704f, 3.7501f, 0, 0, 1);
				unk_0x79C3AEC4C7C91A54(iLocal_96[2], 0.0178f, 0.0525f, -0.4469f, 0.8929f);
			}
		}
		if (iLocal_166 != 3 || !bParam0)
		{
			if (!unk_0x419E13582192CFEA(iLocal_96[3]))
			{
				iLocal_96[3] = unk_0x170478CC84C8AE2F(joaat("tribike"), -1111.001f, -1686.629f, 3.9705f, 0f, 1, 1, 0);
			}
			if (unk_0xBFCE58B2B3249999(iLocal_96[3], 0))
			{
				unk_0xDB8D6815E13996A9(iLocal_96[3], -1111.001f, -1686.629f, 3.9705f, 0, 0, 1);
				unk_0x79C3AEC4C7C91A54(iLocal_96[3], -0.0563f, -0.0702f, -0.5377f, 0.8383f);
			}
		}
		if ((iLocal_165 != 4 && iLocal_166 != 4) || !bParam0)
		{
			if (!unk_0x419E13582192CFEA(iLocal_96[4]))
			{
				iLocal_96[4] = unk_0x170478CC84C8AE2F(joaat("cruiser"), -1105.606f, -1693.98f, 3.9518f, 0f, 1, 1, 0);
			}
			if (unk_0xBFCE58B2B3249999(iLocal_96[4], 0))
			{
				unk_0xDB8D6815E13996A9(iLocal_96[4], -1105.606f, -1693.98f, 3.9518f, 0, 0, 1);
				unk_0x79C3AEC4C7C91A54(iLocal_96[4], -0.0437f, -0.0759f, -0.4104f, 0.9077f);
				unk_0x473DA067A7AE5435(iLocal_96[4], 0);
				unk_0xA2C015B68CE01357(iLocal_96[4], 1);
			}
		}
		if (!unk_0x419E13582192CFEA(iLocal_90))
		{
			iLocal_90 = unk_0x0FDCFECB2EF2BC1C(26, joaat("u_m_m_bikehire_01"), Local_133, fLocal_147, 1, 1);
		}
		unk_0x16D66F11FE644901(iLocal_90);
		unk_0xA415F00D0E0DFBCE(iLocal_90, 17, 1);
		unk_0x82D2BB48A39F1E88(iLocal_90, 128, 1);
		unk_0x82D2BB48A39F1E88(iLocal_90, 1024, 1);
		func_143(&Local_549, 4, iLocal_90, "FAM2BIKEHIRE", 0, 1);
		unk_0xBE91B077ADADE97F(iLocal_90, 1);
		unk_0x2271ED1E65FB75EE(iLocal_90, -2065892691);
		unk_0x1D7A4E9E23D306D6(iLocal_90, 0);
		unk_0xD89C790202174B38(iLocal_90, 1);
		iVar0 = 0;
		while (iVar0 < iLocal_96)
		{
			if (unk_0x419E13582192CFEA(iLocal_96[iVar0]))
			{
				unk_0x3A653D4F5FA4B665(iLocal_96[iVar0], 1, 1, 1, 1, 1, 0, 0, 0);
			}
			iVar0++;
		}
	}
	if (bParam0)
	{
		iVar2 = 1;
		iVar3 = 0;
		while (iVar3 < iLocal_96)
		{
			if (iVar3 != iLocal_166 && iVar3 != iLocal_165)
			{
				if (!unk_0x419E13582192CFEA(iLocal_96[iVar3]))
				{
					iVar2 = 0;
				}
			}
			iVar3++;
		}
		bVar1 = iVar2;
	}
	else
	{
		bVar1 = (((((unk_0x419E13582192CFEA(iLocal_96[0]) && unk_0x419E13582192CFEA(iLocal_96[1])) && unk_0x419E13582192CFEA(iLocal_96[2])) && unk_0x419E13582192CFEA(iLocal_96[3])) && unk_0x419E13582192CFEA(iLocal_96[4])) && unk_0x419E13582192CFEA(iLocal_90));
	}
	return bVar1;
}

void func_143(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_144(bool bParam0)
{
	if (!iLocal_540 && !bParam0)
	{
		if (iLocal_70 < 5)
		{
			uLocal_539 = unk_0x0823FA7465392E20(-1120.292f, -1681.018f, 13.274f, -1081.289f, -1706.522f, 1.5344f, 0, 1, 1, 1);
			unk_0x6FF312B4049B4865(-1082.088f, -1714.033f, 3.285254f, -1107.201f, -1681.87f, 14.29007f, 37.5f, 0, 0, 1);
			unk_0x86DA8A407ED8A381(Vector(5.919011f, -1697.383f, -1112.611f) - Vector(2.75f, 30f, 42.688f), Vector(5.919011f, -1697.383f, -1112.611f) + Vector(2.75f, 30f, 42.688f), 0, 1);
			uLocal_564 = unk_0xD5504E3827DE12F9(-1107.517f, -1692.887f, 4.374f, 4.161f, 13.858f, 4.5f, func_145(36.0244f), 0, 1);
			iLocal_540 = 1;
		}
	}
	else if (iLocal_70 >= 5 || bParam0)
	{
		unk_0xE6B53A6E51AAA49F(uLocal_539, 0);
		unk_0x58D4F7C6214FFC91(-1082.088f, -1714.033f, 3.285254f, -1107.201f, -1681.87f, 14.29007f, 37.5f, 1);
		unk_0x86DA8A407ED8A381(Vector(5.919011f, -1697.383f, -1112.611f) - Vector(2.75f, 30f, 42.688f), Vector(5.919011f, -1697.383f, -1112.611f) + Vector(2.75f, 30f, 42.688f), 1, 1);
		if (unk_0xA66693527106D3DF(uLocal_564))
		{
			unk_0xF5A3E4A97D6F6DD4(uLocal_564);
		}
		iLocal_540 = 0;
	}
}

float func_145(float fParam0)
{
	return (fParam0 * 0.01745329f);
}

void func_146()
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1))
	{
		iVar0 = unk_0xC96B0C85BE0E0287(unk_0x7D2B9E6A64637269());
		if (unk_0xBFCE58B2B3249999(iVar0, 0))
		{
			iVar1 = unk_0x27FC1B0077581B37(iVar0, 0, 0);
			if (!unk_0xECEC7528A52B4EE8(iVar1))
			{
				if (iVar1 != unk_0x7D2B9E6A64637269())
				{
					if (unk_0xEE1D92A39CF8E1E6(iVar1))
					{
						if (!unk_0x8070052C0707D4F6(iVar1, unk_0x7D2B9E6A64637269()))
						{
							unk_0x8ADA462BC5F42FD8(iVar1, unk_0x7D2B9E6A64637269(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_147()
{
	if (iLocal_70 != 11)
	{
		iLocal_72 = iLocal_70;
		iLocal_70 = 11;
		if (unk_0x575B7C28D81C0B4D(uLocal_102))
		{
			unk_0x1AD5BCFEC31BB8D9(&uLocal_102);
		}
		if (unk_0x575B7C28D81C0B4D(uLocal_103))
		{
			unk_0x1AD5BCFEC31BB8D9(&uLocal_103);
		}
		if (unk_0x575B7C28D81C0B4D(uLocal_104))
		{
			unk_0x1AD5BCFEC31BB8D9(&uLocal_104);
		}
		if (unk_0x575B7C28D81C0B4D(uLocal_105))
		{
			unk_0x1AD5BCFEC31BB8D9(&uLocal_105);
		}
		if (func_177())
		{
			if (!iLocal_555)
			{
				Local_556 = { func_176() };
				func_174();
				iLocal_555 = 1;
				iLocal_583 = 0;
				iLocal_585 = 0;
				iLocal_584 = unk_0xDFB7BFA6482FEE1E();
			}
		}
	}
	if (iLocal_72 == 1)
	{
		func_103();
		if (!unk_0xECEC7528A52B4EE8(iLocal_89))
		{
			if (vdist2(unk_0xD6E677FAD7521410(iLocal_89, 1), unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1)) < 625f)
			{
				if ((!iLocal_583 && !unk_0x123480158F10FA67()) && !func_177())
				{
					if (func_158(&Local_549, cLocal_202, "FAM2_WANTED", 8, 0, 0, 0))
					{
						iLocal_584 = unk_0xDFB7BFA6482FEE1E();
						iLocal_583 = 1;
					}
				}
				else if ((unk_0xDFB7BFA6482FEE1E() - iLocal_584) > 15000 && !func_177())
				{
					if (func_158(&Local_549, cLocal_202, "FAM2_LOSE", 8, 0, 0, 0))
					{
						iLocal_584 = unk_0xDFB7BFA6482FEE1E();
					}
				}
			}
			if (func_157(iLocal_89))
			{
				if (unk_0x575B7C28D81C0B4D(uLocal_104))
				{
					unk_0x1AD5BCFEC31BB8D9(&uLocal_104);
				}
			}
			else if (!unk_0x575B7C28D81C0B4D(uLocal_104))
			{
				func_155();
				uLocal_104 = func_152(iLocal_89, 0, 145);
			}
			else
			{
				if (!bLocal_176 && !unk_0x123480158F10FA67())
				{
					func_151("FM2_JIMGB", 7500, 1);
					bLocal_176 = true;
				}
				if (func_150(iLocal_89, 300f))
				{
					func_104("FM2_JIMAB");
				}
			}
		}
	}
	else if (iLocal_72 == 8)
	{
		if (!unk_0xECEC7528A52B4EE8(iLocal_88))
		{
			if (func_157(iLocal_88))
			{
				if (unk_0x575B7C28D81C0B4D(uLocal_104))
				{
					unk_0x1AD5BCFEC31BB8D9(&uLocal_104);
				}
			}
			else if (!unk_0x575B7C28D81C0B4D(uLocal_104))
			{
				func_155();
				uLocal_104 = func_152(iLocal_88, 0, 145);
			}
			else
			{
				if (!bLocal_177 && !unk_0x123480158F10FA67())
				{
					func_151("FM2_TRAGB", 7500, 1);
					bLocal_177 = true;
				}
				if (func_150(iLocal_88, 300f))
				{
					func_104("FM2_TRAAB");
				}
			}
		}
		if (!iLocal_585)
		{
			iLocal_585 = 1;
		}
	}
	else if (!iLocal_585)
	{
		iLocal_585 = 1;
	}
	if (!func_177())
	{
		func_148(&Local_546);
	}
	if (unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) == 0)
	{
		if (!iLocal_585)
		{
			if (iLocal_72 == 1)
			{
				if (!unk_0xECEC7528A52B4EE8(iLocal_89))
				{
					if (vdist2(unk_0xD6E677FAD7521410(iLocal_89, 1), unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1)) < 625f)
					{
						if (func_158(&Local_549, cLocal_202, "FAM2_LOSTCOP", 8, 0, 0, 0))
						{
							iLocal_585 = 1;
						}
					}
				}
			}
		}
		else
		{
			iLocal_70 = iLocal_72;
			Local_546.f_1 = 0;
			unk_0x1036762BD3781C84();
		}
	}
}

void func_148(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (!unk_0x4030103C8B148AFC(*uParam0))
		{
			func_149(*uParam0, 7500, 1);
			uParam0->f_1 = 1;
		}
	}
}

void func_149(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x6D19CF57DC2F3E74(sParam0);
	unk_0x49648AD747832803(iParam1, 1);
}

int func_150(int iParam0, float fParam1)
{
	if (unk_0x419E13582192CFEA(iParam0))
	{
		if (unk_0xA2CCAAC7F5CA3F49(iParam0))
		{
			if (!unk_0xECEC7528A52B4EE8(iParam0))
			{
				if (unk_0x0BABEFEA577FCFA4(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(iParam0, 1), 1) > fParam1)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_151(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x6D19CF57DC2F3E74(sParam0);
	unk_0x49648AD747832803(iParam1, 0);
}

var func_152(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_153(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x575B7C28D81C0B4D(uVar0)) && unk_0x49875FC4498CDA9A(&(Global_1878[iParam2 /*29*/].f_3)))
	{
		unk_0xDD944E3FD2028A48(uVar0, &(Global_1878[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_153(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x419E13582192CFEA(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xB20BB447C131B310(iParam0);
	if (unk_0x55F5BD4ABD80B211(iParam0))
	{
		unk_0xDD205B87CDFD0C1B(uVar0, func_154(unk_0x02BFF15CAA701972(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xB592493CDC7124C3(uVar0, bParam1);
		}
		else
		{
			unk_0xFA3E6ADC3E5D386E(uVar0, 2);
		}
	}
	else if (unk_0xA2CCAAC7F5CA3F49(iParam0))
	{
		unk_0xDD205B87CDFD0C1B(uVar0, func_154(unk_0x02BFF15CAA701972(), 0.7f, 0.7f));
		unk_0xB592493CDC7124C3(uVar0, bParam1);
	}
	else if (unk_0x50997FC21D62251F(iParam0))
	{
		unk_0xDD205B87CDFD0C1B(uVar0, func_154(unk_0x02BFF15CAA701972(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_154(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_155()
{
	Global_19991 = 0;
	func_156();
}

void func_156()
{
	unk_0xBA3738C78262143F();
	Global_22136 = 0;
	if (unk_0x6C2F471E0CF8D4CF())
	{
		unk_0x75B41F5020877259(0);
		Global_21125 = 6;
	}
}

int func_157(int iParam0)
{
	if (unk_0xAB3E7E62A69D0DB3(iParam0, unk_0xC66769C13C830856(unk_0x1146A9AE09CE2B14())))
	{
		if (!unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iParam0, 50f, 50f, 50f, 0, 1, 0))
		{
			if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0) || unk_0x457AC9431DB1D1F1(iLocal_89, 0, 1, 0, 0, 0, 0, 1, -1))
			{
				unk_0xC1A7CF4B179CD225(iParam0);
			}
		}
		return 1;
	}
	else if (unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iParam0, Global_19, 0, 1, 0))
	{
		unk_0x4B75B1FF20EA3A22(iParam0, unk_0xC66769C13C830856(unk_0x1146A9AE09CE2B14()));
	}
	if (unk_0x457AC9431DB1D1F1(iParam0, 0, 1, 0, 0, 0, 0, 1, -1))
	{
	}
	if (unk_0x457AC9431DB1D1F1(iParam0, 0, 1, 0, 0, 0, 0, 0, -1))
	{
	}
	return 0;
}

bool func_158(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_173(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_159(sParam2, iParam3, 0);
}

int func_159(char* sParam0, int iParam1, bool bParam2)
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
					func_172();
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
		if (func_171(8, -1))
		{
			return 0;
		}
		Global_21201 = { Global_21195 };
		func_170();
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
				func_169();
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
				if (func_168())
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
			if (func_167())
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
			func_166();
			Global_21135 = bParam2;
		}
		Global_21127 = iParam1;
		StringCopy(&Global_20744, sParam0, 24);
		Global_19991 = 0;
		func_165();
		func_160();
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
		func_172();
	}
	return 0;
}

void func_160()
{
	if (!func_161())
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

int func_161()
{
	if (!Global_262145.f_28376)
	{
		return 0;
	}
	if (!Global_77248)
	{
		return 0;
	}
	if (unk_0x1146A9AE09CE2B14() == func_164())
	{
		return 0;
	}
	if (func_162(unk_0x1146A9AE09CE2B14()))
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

bool func_162(int iParam0)
{
	return func_163(iParam0, 20);
}

bool func_163(int iParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_11.f_4, iParam1);
}

int func_164()
{
	return -1;
}

void func_165()
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

void func_166()
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

int func_167()
{
	if (Global_19798.f_1 == 1 || Global_19798.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_168()
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

void func_169()
{
	if (func_27(14))
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
		Global_19798 = func_137();
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

void func_170()
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

bool func_171(int iParam0, int iParam1)
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

void func_172()
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

void func_173(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_174()
{
	Global_19991 = 0;
	func_175();
}

void func_175()
{
	if (unk_0x6C2F471E0CF8D4CF())
	{
		unk_0xBA3738C78262143F();
		Global_22136 = 0;
		unk_0x75B41F5020877259(1);
		Global_21125 = 6;
		return;
	}
}

struct<6> func_176()
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21125 == 4)
	{
		iVar1 = unk_0x9618CA3AB2A82C04();
		iVar1 = (iVar1 + Global_22135);
		iVar2 = iVar1 + 1;
		if (iVar2 > -1 && iVar1 > -1)
		{
			if (unk_0x49875FC4498CDA9A(&(Global_19993[iVar2 /*6*/])))
			{
				return Global_19993[iVar2 /*6*/];
			}
			else
			{
				iVar3 = iVar2;
				while (iVar3 < 70)
				{
					if (unk_0x49875FC4498CDA9A(&(Global_19993[iVar3 /*6*/])))
					{
						return Global_19993[iVar3 /*6*/];
						iVar3 = 70;
					}
					iVar3++;
				}
				return Var0;
			}
			return Global_19993[iVar1 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

int func_177()
{
	if (Global_21125 != 0 || unk_0x6C2F471E0CF8D4CF())
	{
		return 1;
	}
	return 0;
}

void func_178()
{
	if (unk_0x8B6A925F148E0E94())
	{
		unk_0x366E7F593105797F(0, 199, 1);
	}
	switch (iLocal_159)
	{
		case 0:
			unk_0x8FF71A24509DA743("HoldMissionCompleteWhenPrepared", 1);
			unk_0x7C0019321F1FC821();
			unk_0x068BDE31F7D112BB("missfam2_pier");
			unk_0x16E516CA9C88FF48(joaat("prop_cigar_01"));
			unk_0x16E516CA9C88FF48(joaat("cruiser"));
			if (!unk_0x43DDCE9C73E22D9D())
			{
				if (bLocal_174)
				{
					unk_0xA566E488BA0A0A4C("family_2_mcs_4", 8);
				}
				else
				{
					unk_0xFA3CD2A976F07F94("family_2_mcs_4", 2, 8);
				}
				iLocal_159++;
			}
			else
			{
				iLocal_159 += 2;
			}
			break;
		
		case 1:
			if (unk_0xE807694ABD40478F())
			{
				func_2("Michael", unk_0x7D2B9E6A64637269(), 0, 2);
				unk_0xF81CBD28BD382566("Tracy", iLocal_88, 0);
				unk_0xE13F3E0ED3407B90("Tracy", 1, 1, 0, 0);
				unk_0xE13F3E0ED3407B90("Tracy", 0, 0, 0, 0);
				if (unk_0xB30CD10E2CD1B67D("FAMILY_2_JETSKI_GO_TO_BEACH"))
				{
					unk_0xC0BBE340BE2AA02D("FAMILY_2_JETSKI_GO_TO_BEACH");
				}
				iLocal_159++;
			}
			break;
		
		case 2:
			func_2("Michael", unk_0x7D2B9E6A64637269(), 0, 2);
			unk_0xF81CBD28BD382566("Tracy", iLocal_88, 0);
			unk_0xE13F3E0ED3407B90("Tracy", 1, 1, 0, 0);
			unk_0xE13F3E0ED3407B90("Tracy", 0, 0, 0, 0);
			if (func_199())
			{
				func_155();
				func_191(1, 1, 1, 0, 0, 0, 0);
				if (unk_0xBFCE58B2B3249999(iLocal_92, 0))
				{
					unk_0x89E171705EA920DA(iLocal_92, 0, 1, 0);
					unk_0xF2CEEA627AD5A24B(iLocal_92, "Michaels_seashark", 0, 0, 0);
				}
				if (!unk_0xECEC7528A52B4EE8(iLocal_88))
				{
					unk_0xF2CEEA627AD5A24B(iLocal_88, "Tracy", 0, 0, 0);
				}
				if (!unk_0xECEC7528A52B4EE8(iLocal_89))
				{
					unk_0xF2CEEA627AD5A24B(iLocal_89, "Jimmy", 0, 0, 0);
				}
				unk_0x1036762BD3781C84();
				unk_0x66AE54CE92457FEE(1);
				func_155();
				unk_0xFB8A6909539A30B1("FAM2_COMPLETE");
				unk_0x7E1C1B2FCF372776(0);
				unk_0xEBDFE18B261316C1(4);
				unk_0x068BDE31F7D112BB("missfam2_pier");
				unk_0x16E516CA9C88FF48(joaat("prop_cigar_01"));
				unk_0x16E516CA9C88FF48(joaat("cruiser"));
				func_190();
				iLocal_159++;
			}
			break;
		
		case 3:
			if (!unk_0xE0A6F16F546C8274() && !unk_0x07BE48DF95787FCB())
			{
				unk_0x6E1E3A5B1F9AB95B(500);
			}
			unk_0x86328A349E5CFC0B(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), 100f);
			func_189(1, 1);
			unk_0x8FF71A24509DA743("AvoidMissionCompleteDelay", 0);
			iLocal_159++;
			break;
		
		case 4:
			if (unk_0x30700B4AA35835FD("MICHAEL", 0))
			{
				if (unk_0xBFCE58B2B3249999(iLocal_92, 0))
				{
					unk_0x47D0DDD8833C5E5F(iLocal_92, 1084227584);
					unk_0xBC5268D1B5C5B73B(iLocal_92, 0, 0f, 0f, 0.1f, 0f, 0f, 0f, 0, 1, 1, 0, 0, 1);
				}
				if (unk_0x419E13582192CFEA(iLocal_89))
				{
					unk_0xC606AE2A3209945E(&iLocal_89);
				}
				if (unk_0x419E13582192CFEA(iLocal_88))
				{
					unk_0xC606AE2A3209945E(&iLocal_88);
				}
				unk_0x78CDDD1E6367978D(unk_0x7D2B9E6A64637269(), -1607.251f, -1138.103f, 1.1443f, 1, 0, 0, 1);
				unk_0xCD37A28258D70638(unk_0x7D2B9E6A64637269(), 262.2968f);
			}
			unk_0xF7B46911310E4737(1.5f);
			if (unk_0x8B6A925F148E0E94() && unk_0x80C744B6449E4AEB())
			{
				settimera(0);
				unk_0x8BA9BCDD56AA7115(0);
			}
			if (unk_0x43DDCE9C73E22D9D())
			{
				if (unk_0x5505579F3F8D58CB() > 31400)
				{
					if (!unk_0x4E38E404B98F3D9A() && !unk_0x8B6A925F148E0E94())
					{
						unk_0x8BA9BCDD56AA7115(1500);
					}
					unk_0x366E7F593105797F(0, 18, 1);
				}
			}
			if (!unk_0x43DDCE9C73E22D9D())
			{
				unk_0xDF23DCD7A3E1B7A5(0);
				unk_0x3A13FD2813C8251F(0, 1065353216);
				func_191(0, 1, 1, 0, 0, 0, 0);
				func_188();
				if (!unk_0x4E38E404B98F3D9A() && !unk_0x8B6A925F148E0E94())
				{
					unk_0x8BA9BCDD56AA7115(500);
				}
				unk_0xC7EF1AC7845F532D();
				iLocal_159++;
			}
			break;
		
		case 5:
			if (unk_0x8B6A925F148E0E94() && !unk_0x4E38E404B98F3D9A())
			{
				unk_0xFB8A6909539A30B1("FAM2_STOP");
				if (unk_0x419E13582192CFEA(iLocal_95))
				{
					func_449(iLocal_95, -1060.518f, -1691.88f, 3.5097f, 185.4265f, 24, 0);
				}
				unk_0xB79C89B220BFC1FD(unk_0x7D2B9E6A64637269(), 0);
				unk_0xB79C89B220BFC1FD(unk_0x7D2B9E6A64637269(), 3);
				unk_0xB79C89B220BFC1FD(unk_0x7D2B9E6A64637269(), 2);
				while (!func_385(0, 1))
				{
					wait(0);
					unk_0x366E7F593105797F(0, 199, 1);
				}
				settimera(0);
				unk_0x43D3344EE0A5162E("smboat");
				iLocal_159 = 100;
			}
			break;
		
		case 100:
			unk_0x7C0019321F1FC821();
			func_186(-1850.139f, -1250.253f, 8.59f, -120.1799f, 1);
			unk_0x068BDE31F7D112BB("missfam2_pier");
			unk_0x16E516CA9C88FF48(joaat("prop_cigar_01"));
			unk_0x16E516CA9C88FF48(joaat("cruiser"));
			while ((!unk_0x0EC2B29D4172D225("missfam2_pier") || !unk_0xA9C0BBFB9CBB66F1(joaat("prop_cigar_01"))) || !unk_0xA9C0BBFB9CBB66F1(joaat("cruiser")))
			{
				wait(0);
				unk_0x366E7F593105797F(0, 199, 1);
			}
			unk_0x8FF71A24509DA743("HoldMissionCompleteWhenPrepared", 0);
			unk_0x78CDDD1E6367978D(unk_0x7D2B9E6A64637269(), -1850.139f, -1250.253f, 8.59f, 1, 0, 0, 1);
			unk_0xCD37A28258D70638(unk_0x7D2B9E6A64637269(), 134.28f);
			iLocal_208 = unk_0x170478CC84C8AE2F(joaat("cruiser"), -1846.573f, -1214.731f, 12.5755f, 0f, 1, 1, 0);
			unk_0x79C3AEC4C7C91A54(iLocal_208, -0.0155f, -0.0834f, -0.306f, 0.9483f);
			unk_0x47D0DDD8833C5E5F(iLocal_208, 1084227584);
			unk_0x6E88C3DDF38550FA(unk_0x7D2B9E6A64637269());
			iLocal_207 = unk_0x795434E153F90E41(joaat("prop_cigar_01"), -1850.139f, -1250.253f, 8.59f, 1, 1, 0);
			unk_0x0F1058706D5A58B4(iLocal_207, unk_0x7D2B9E6A64637269(), unk_0xA79DFB802C09F5F5(unk_0x7D2B9E6A64637269(), 28422), 0f, 0f, 0f, 0f, 0f, 180f, 0, 0, 0, 0, 2, 1);
			unk_0x48558536A19BA88A("cs_cig_smoke", iLocal_207, 0.05f, 0f, 0f, 0f, 0f, 90f, 1065353216, 0, 0, 0);
			uLocal_206 = unk_0x84F073038B557438(26379945, 1);
			unk_0xFD866EC0672D68D5(uLocal_206, -1852.002f, -1250.224f, 8.9706f, -3.6975f, 0f, -120.1799f, 45f, 0, 1, 1, 2);
			unk_0xFD866EC0672D68D5(uLocal_206, -1852.087f, -1250.395f, 8.9706f, -1.3266f, 0f, -102.4498f, 45f, 10000, 1, 1, 2);
			unk_0x2CA971FF57ACA369(1, 0);
			if (unk_0x636F1F53CC61D2C9(unk_0x15173FB88ABC94F9("mission_stat_watcher")) > 0)
			{
				func_189(1, 1);
				while (!Global_77508)
				{
					wait(0);
					unk_0x366E7F593105797F(0, 199, 1);
				}
				while (Global_77508)
				{
					wait(0);
					unk_0x366E7F593105797F(0, 199, 1);
				}
			}
			else
			{
				wait(3000);
			}
			unk_0x91F94D2287684BDB(-1850.15f, -1250.253f, 8.625f, 5f, 0);
			uLocal_205 = unk_0xD955F1CC0BCABC78(-1850.15f, -1250.253f, 8.625f, 0f, 0f, 134.28f, 2);
			unk_0xAD844C8843FC405C(unk_0x7D2B9E6A64637269(), uLocal_205, "missfam2_pier", "pier_lean_toss_cigarette", 1000f, -4f, 0, 0, 1148846080, 0);
			unk_0x09F9466B03D29D2D(true, 0, 3000, 1, 0, 0);
			settimera(0);
			unk_0x2FF622571073AA69(unk_0x7D2B9E6A64637269(), joaat("weapon_unarmed"), 1);
			if (unk_0x5F95E51ABC3FC59A(unk_0x264EE27FDED1DCA1()) == 4)
			{
				unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), false, 0);
			}
			if (!unk_0xE0A6F16F546C8274() && !unk_0x07BE48DF95787FCB())
			{
				unk_0x6E1E3A5B1F9AB95B(1500);
			}
			iLocal_159++;
			break;
		
		case 101:
			if (unk_0xEEC203A73BC92E7E(iLocal_205) && unk_0x0BC8768247440B3A(iLocal_205) > 0.227f)
			{
				unk_0x2286C0F02D4FC21C("cs_cig_exhale_nose", unk_0x7D2B9E6A64637269(), -0.025f, 0.12f, 0f, 0f, 90f, 0f, 31086, 1065353216, 0, 0, 0);
				iLocal_159++;
			}
			break;
		
		case 102:
			if (unk_0xEEC203A73BC92E7E(iLocal_205) && unk_0x0BC8768247440B3A(iLocal_205) > 0.563f)
			{
				unk_0xFD866EC0672D68D5(uLocal_206, unk_0x0D9118860A976DFD(uLocal_206), unk_0x864557F89941B870(uLocal_206, 2), unk_0x004B4DE459D9277C(uLocal_206), 0, 1, 1, 2);
				if (unk_0x5F95E51ABC3FC59A(unk_0x264EE27FDED1DCA1()) != 4)
				{
					unk_0xFD866EC0672D68D5(uLocal_206, -1852.922f, -1252.698f, 9.3524f, -2.9046f, 0f, -46.5763f, 50f, 4000, 1, 1, 2);
				}
				else
				{
					unk_0xFD866EC0672D68D5(uLocal_206, -1851.685f, -1251.438f, 9.3524f, -0.0547f, 0.0543f, -38.2308f, 50f, 4000, 1, 1, 2);
				}
				iLocal_159++;
			}
			break;
		
		case 103:
			if (unk_0x419E13582192CFEA(iLocal_207) && unk_0x5976053523EA16C8(iLocal_207))
			{
				if (unk_0x0BC8768247440B3A(iLocal_205) > 0.711f)
				{
					unk_0x3211C35423263392(iLocal_207, 1, 1);
					unk_0xFA67B92FD990FE3A(iLocal_207, Vector(8.3737f, -1250.913f, -1852.43f) - Vector(9.2628f, -1250.44f, -1850.899f));
				}
			}
			if (unk_0xEEC203A73BC92E7E(iLocal_205) && unk_0x0BC8768247440B3A(iLocal_205) > 0.768f)
			{
				unk_0x2286C0F02D4FC21C("cs_cig_exhale_mouth", unk_0x7D2B9E6A64637269(), -0.025f, 0.13f, 0f, 0f, 0f, 0f, 31086, 1065353216, 0, 0, 0);
				iLocal_159++;
			}
			break;
		
		case 104:
			if (unk_0xEEC203A73BC92E7E(iLocal_205) && unk_0x0BC8768247440B3A(iLocal_205) > 0.7116f)
			{
				unk_0x2286C0F02D4FC21C("cs_cig_exhale_mouth", unk_0x7D2B9E6A64637269(), -0.025f, 0.13f, 0f, 0f, 0f, 0f, 31086, 1065353216, 0, 0, 0);
				func_185(&uLocal_521, unk_0x7D2B9E6A64637269(), 0, 1069547520, 1000, 1000, 700, 0, 1045220557);
				iLocal_159++;
			}
			break;
		
		case 105:
			if (unk_0xEEC203A73BC92E7E(iLocal_205))
			{
				if (unk_0x5F95E51ABC3FC59A(unk_0x264EE27FDED1DCA1()) == 4)
				{
					if (unk_0x0E8572B08CEB6A11(uLocal_206))
					{
						if (unk_0x0BC8768247440B3A(iLocal_205) > 0.85f && func_181(&uLocal_521, 0, 1, 1, 0, 0, 0))
						{
							unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), true, 0);
							if (unk_0x0E8572B08CEB6A11(uLocal_206))
							{
								unk_0xDF23DCD7A3E1B7A5(0);
								unk_0x3A13FD2813C8251F(0, 1065353216);
								unk_0x09F9466B03D29D2D(false, 1, 1000, 1, 0, 0);
								unk_0xFE1DEC9C5734D0C0(uLocal_206, 0);
							}
						}
					}
				}
				if (unk_0x0BC8768247440B3A(iLocal_205) > 0.98f)
				{
					if (unk_0x0E8572B08CEB6A11(uLocal_206))
					{
						unk_0xDF23DCD7A3E1B7A5(0);
						unk_0x3A13FD2813C8251F(0, 1065353216);
						unk_0x09F9466B03D29D2D(false, 1, 1000, 1, 0, 0);
						unk_0xFE1DEC9C5734D0C0(uLocal_206, 0);
					}
					unk_0x6C59944A0530A574(unk_0x7D2B9E6A64637269(), 0, 0);
					unk_0xCA089CD1A17D76DF(unk_0x7D2B9E6A64637269());
					unk_0x2CA971FF57ACA369(0, 100);
					if (unk_0x419E13582192CFEA(iLocal_207))
					{
						unk_0x04F4D55F2C0C756D(&iLocal_207);
					}
					settimera(0);
					iLocal_159++;
				}
			}
			break;
		
		case 106:
			if (timera() > 100)
			{
				unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), true, 0);
				func_179(0, 0);
				func_589();
			}
			break;
	}
}

void func_179(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_62100)
	{
		Global_62100 = iParam1;
	}
	if (bParam0)
	{
		if ((func_140(0) && Global_77494.f_1 == 1) && func_180(Global_77494))
		{
		}
		else
		{
			Global_62098 = 1;
		}
	}
	if (Global_112293.f_9083 || func_140(0))
	{
		iVar0 = func_139();
		iVar1 = Global_90122[iVar0 /*5*/];
		uVar2 = Global_77517.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_112293.f_9083)
			{
			}
			return;
		}
		if (unk_0x234B68AC2E35ED5A(Global_90122[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (unk_0x234B68AC2E35ED5A(Global_90122[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0x191DDA30577F440A(&(Global_90122[iVar0 /*5*/].f_1), 4);
		unk_0x191DDA30577F440A(&Global_77496, 1);
		Global_77512 = uVar2;
		Global_77513 = unk_0xDFB7BFA6482FEE1E();
	}
}

int func_180(int iParam0)
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

int func_181(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	float fVar7;
	
	switch (*uParam0)
	{
		case 0:
			func_183();
			if (!unk_0xE50EB54E0F21BED0(uParam0->f_5, 0))
			{
				func_182(uParam0);
				Var0 = { unk_0x684B55BC7BEF0475() };
				if (bParam1)
				{
					Var0 = { Var0 + unk_0x9F2928DF31D785C7(uParam0->f_5) * FtoV(unk_0x7FF6ACE380ED166C()) };
				}
				Var1 = { unk_0x8EB57098C563AB39(uParam0->f_5, Var0) };
				Var2 = { unk_0x2EBAAC7478326ECC(2) };
				Var3 = { Var2 + uParam0->f_9 };
				Var4 = { Var3 - unk_0x4BB6BF4A85268A22(uParam0->f_5, 2) };
				Var5 = { (-sin(Var3.f_2) * cos(Var3.x)), (cos(Var3.f_2) * cos(Var3.x)), sin(Var3.x) };
				Var6 = { (-sin(Var4.f_2) * cos(Var4.x)), (cos(Var4.f_2) * cos(Var4.x)), sin(Var4.x) };
				fVar7 = unk_0x64C5FDABD2C1ACA3();
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					uParam0->f_3 = unk_0x84F073038B557438(1775630800, 0);
				}
				uParam0->f_1 = unk_0x84F073038B557438(26379945, 1);
				if (bParam1)
				{
					unk_0x612434A5544F5847(uParam0->f_1, uParam0->f_5, Var1, 1);
				}
				else
				{
					unk_0x7508AE96782B0441(uParam0->f_1, Var0);
				}
				unk_0xBD833AA6EB59C81B(uParam0->f_1, Var2, 2);
				unk_0xEF20E9A7B745D17A(uParam0->f_1, fVar7);
				uParam0->f_2 = unk_0x84F073038B557438(26379945, 1);
				if (bParam1 && !bParam4)
				{
					unk_0x612434A5544F5847(uParam0->f_2, uParam0->f_5, Var1 + Var6 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12), 1);
				}
				else
				{
					unk_0x7508AE96782B0441(uParam0->f_2, Var0 + Var5 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12));
				}
				unk_0xBD833AA6EB59C81B(uParam0->f_2, Var2, 2);
				unk_0xEF20E9A7B745D17A(uParam0->f_2, fVar7);
				if (uParam0->f_17 > 0 && iParam6 == 0)
				{
					uParam0->f_4 = unk_0x84F073038B557438(26379945, 1);
					if (bParam1 && !bParam4)
					{
						unk_0x612434A5544F5847(uParam0->f_4, uParam0->f_5, Var1 + Var6 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13), 1);
					}
					else
					{
						unk_0x7508AE96782B0441(uParam0->f_4, Var0 + Var5 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13));
					}
					unk_0xBD833AA6EB59C81B(uParam0->f_4, Var2, 2);
					unk_0xEF20E9A7B745D17A(uParam0->f_4, fVar7);
				}
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					unk_0x97862ED5AE1B8593(uParam0->f_3, uParam0->f_1, 0, 2);
					if (iParam6 == 0)
					{
						unk_0x97862ED5AE1B8593(uParam0->f_3, uParam0->f_4, uParam0->f_17, 2);
					}
					unk_0x97862ED5AE1B8593(uParam0->f_3, uParam0->f_2, (uParam0->f_14 - uParam0->f_17), 2);
					unk_0xAB0596591A2DEF66(uParam0->f_3, iParam6);
					unk_0x6FA8221C9D2ECB46(uParam0->f_3, 1);
				}
				else
				{
					unk_0x32279DAB93C9A9FA(uParam0->f_2, uParam0->f_1, uParam0->f_14, 2, 2);
				}
				unk_0x09F9466B03D29D2D(true, 0, 3000, 1, 0, 0);
				uParam0->f_7 = unk_0xDFB7BFA6482FEE1E();
				uParam0->f_8 = 0;
				*uParam0 = 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 1:
			func_183();
			if (bParam3)
			{
				if (!uParam0->f_8)
				{
					if (unk_0xDFB7BFA6482FEE1E() >= (uParam0->f_7 + uParam0->f_16))
					{
						if (bParam5)
						{
							switch (uParam0->f_6)
							{
								case 1:
									unk_0x9673FB069F90F6B9("CamPushInFranklin", 0, 0);
									break;
								
								case 0:
									unk_0x9673FB069F90F6B9("CamPushInMichael", 0, 0);
									break;
								
								case 2:
									unk_0x9673FB069F90F6B9("CamPushInTrevor", 0, 0);
									break;
							}
						}
						else
						{
							unk_0x9673FB069F90F6B9("CamPushInNeutral", 0, 0);
						}
						unk_0x9B0169E27978C1A2(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						uParam0->f_8 = 1;
					}
				}
			}
			if (unk_0xDFB7BFA6482FEE1E() >= (uParam0->f_7 + uParam0->f_15))
			{
				if (bParam2)
				{
					func_182(uParam0);
					unk_0x09F9466B03D29D2D(false, 0, 3000, 1, 0, 0);
				}
				return 1;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

void func_182(var uParam0)
{
	if (unk_0x0E8572B08CEB6A11(uParam0->f_1))
	{
		unk_0xFE1DEC9C5734D0C0(uParam0->f_1, 0);
	}
	if (unk_0x0E8572B08CEB6A11(uParam0->f_2))
	{
		unk_0xFE1DEC9C5734D0C0(uParam0->f_2, 0);
	}
	if (unk_0x0E8572B08CEB6A11(uParam0->f_3))
	{
		unk_0xFE1DEC9C5734D0C0(uParam0->f_3, 0);
	}
	if (unk_0x0E8572B08CEB6A11(uParam0->f_4))
	{
		unk_0xFE1DEC9C5734D0C0(uParam0->f_4, 0);
	}
}

void func_183()
{
	unk_0xDA81FB7770247CC0();
	func_184();
}

void func_184()
{
	Global_22531.f_134 = 1;
}

void func_185(var uParam0, int iParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	uParam0->f_5 = iParam1;
	uParam0->f_6 = iParam2;
	uParam0->f_12 = fParam3;
	uParam0->f_14 = iParam4;
	uParam0->f_15 = iParam5;
	uParam0->f_16 = iParam6;
	uParam0->f_17 = iParam7;
	uParam0->f_13 = iParam8;
}

void func_186(struct<3> Param0, float fParam1, bool bParam2)
{
	int iVar0;
	
	if (!func_187())
	{
		unk_0x52149FA3F8DAD0F2(Param0, 0f, 0f, 0f);
		unk_0xA08B79ACC38AAA7A(Param0, cos((fParam1 + 90f)), sin((fParam1 + 90f)), 0f, 25f, 0);
		settimera(0);
		iVar0 = unk_0xDFB7BFA6482FEE1E();
		while (!unk_0xABE4F4FD4329B037() && (unk_0xDFB7BFA6482FEE1E() - iVar0) < 12000)
		{
			wait(0);
		}
		if (bParam2)
		{
			unk_0x78CDDD1E6367978D(unk_0x7D2B9E6A64637269(), Param0, 1, 0, 0, 1);
			unk_0xCD37A28258D70638(unk_0x7D2B9E6A64637269(), fParam1);
		}
		unk_0x961F6202C2192265();
		unk_0xED93DAC36CA89AF2();
	}
}

bool func_187()
{
	return unk_0x234B68AC2E35ED5A(Global_99370.f_20, 13);
}

void func_188()
{
	Global_62104 = 0;
}

void func_189(int iParam0, int iParam1)
{
	Global_77516 = iParam1;
	if (Global_62092)
	{
		return;
	}
	if (Global_62119)
	{
		Global_62119 = 0;
		return;
	}
	if (unk_0x636F1F53CC61D2C9(joaat("mission_stat_watcher")) > 0)
	{
		if (Global_62092)
		{
		}
		Global_62118 = iParam0;
		Global_62092 = 1;
		Global_62103 = 1;
	}
}

void func_190()
{
	Global_62104 = 1;
}

void func_191(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x5359E9154EC8BC8F(unk_0x1146A9AE09CE2B14(), 0);
		unk_0x76E35164CB4968C4(unk_0x1146A9AE09CE2B14(), 1);
		unk_0x987940DFD4A807FF(unk_0x1146A9AE09CE2B14(), 1);
		func_198(1);
		unk_0x8F639D0D922F6888();
		unk_0x97B846780E2A8C66();
		if (Global_19798.f_1 > 3 && !bParam6)
		{
			if (unk_0x8820F6FCD373F9F7())
			{
				unk_0x75B41F5020877259(0);
			}
			if (!func_167())
			{
				Global_19798.f_1 = 3;
			}
			Global_21125 = 5;
		}
		func_197(1, iParam3, iParam2, 0);
		Global_62104 = 1;
		Global_74431 = 1;
		Global_77246 = 1;
	}
	else
	{
		func_198(0);
		unk_0xE1AA8B5D9066529D();
		Global_62104 = 0;
		if (bParam1)
		{
			unk_0xDFEA7BB6BBCCEC80();
		}
		unk_0x76E35164CB4968C4(unk_0x1146A9AE09CE2B14(), 0);
		unk_0x987940DFD4A807FF(unk_0x1146A9AE09CE2B14(), 0);
		func_197(0, iParam3, iParam2, 0);
		if (unk_0x02BFF15CAA701972())
		{
			if (((((!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()) && !func_195(unk_0x1146A9AE09CE2B14())) && !func_193(unk_0x1146A9AE09CE2B14(), 0)) && !func_192()) && !bParam4) && !bParam5)
			{
				unk_0x8F160110753EB17B(unk_0x7D2B9E6A64637269(), 0);
			}
		}
		else if (((!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()) && !func_195(unk_0x1146A9AE09CE2B14())) && !bParam4) && !bParam5)
		{
			unk_0x8F160110753EB17B(unk_0x7D2B9E6A64637269(), 0);
		}
		Global_77246 = 0;
	}
}

bool func_192()
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_36.f_18, 14);
}

bool func_193(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1146A9AE09CE2B14())
	{
		bVar0 = func_194(-1, 0) == 8;
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

int func_194(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_22();
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

int func_195(int iParam0)
{
	if (func_193(iParam0, 0))
	{
		return 1;
	}
	if (func_196())
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

bool func_196()
{
	return unk_0x234B68AC2E35ED5A(Global_2359302, 3);
}

int func_197(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x3640D836D145B814())
	{
		if (unk_0xFBB350E73795834E() != iParam0 && uParam2)
		{
			unk_0x31F2EFD33130D530(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_198(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x191DDA30577F440A(&Global_7668, 13);
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&Global_7668, 13);
	}
}

bool func_199()
{
	bool bVar0;
	
	bVar0 = unk_0x3E2C7717C449F4CB();
	if (!Global_77247)
	{
		if (!bVar0)
		{
			Global_77247 = 1;
		}
	}
	return bVar0;
}

void func_200()
{
	bool bVar0;
	bool bVar1;
	
	unk_0x6906086484B6A5CE(unk_0x1146A9AE09CE2B14());
	if (!unk_0xECEC7528A52B4EE8(iLocal_88))
	{
		if (vdist(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), Local_209) < 10f)
		{
			unk_0x366E7F593105797F(0, 22, 1);
		}
		if (iLocal_159 < 100)
		{
			if (func_217(&iLocal_92, &uLocal_151, &iLocal_152) || !unk_0xBFCE58B2B3249999(iLocal_92, 0))
			{
				iLocal_159 = 100;
			}
		}
		if (!unk_0xB30CD10E2CD1B67D("FAMILY_2_JETSKI_GO_TO_BEACH"))
		{
			unk_0xB84B43B766630B5C("FAMILY_2_JETSKI_GO_TO_BEACH");
		}
		switch (iLocal_159)
		{
			case 0:
				if ((!unk_0x123480158F10FA67() || unk_0xC82CD1DB42480082(203) == 0) && unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_92, 0))
				{
					if (!unk_0xE0A6F16F546C8274() && !unk_0x07BE48DF95787FCB())
					{
						unk_0x6E1E3A5B1F9AB95B(500);
					}
					if (!unk_0xB30CD10E2CD1B67D("FAMILY_2_JETSKI_GO_TO_BEACH"))
					{
						unk_0xB84B43B766630B5C("FAMILY_2_JETSKI_GO_TO_BEACH");
					}
					Local_545.f_1 = 0;
					iLocal_630 = 0;
					fLocal_631 = 0f;
					iLocal_170 = 0;
					iLocal_178 = 0;
					iLocal_159++;
					if (iLocal_155)
					{
						iLocal_159 = -1;
					}
				}
				break;
			
			case -1:
				unk_0xD0051FAE2E1BB4C8("smboat");
				while (!unk_0xD17A6DB35E21C90C("smBoat"))
				{
					unk_0xE9F487B66E055135("M_DaddysLittleGirl", 0);
					wait(0);
				}
				iLocal_159 = 1;
				break;
			
			case 1:
				func_214(&iLocal_92, &uLocal_105, Local_119, &uLocal_102, &Local_545);
				if (!func_177() && unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_92, 0))
				{
					unk_0x2DC2890038BFF758(5f, 5f, 4);
					unk_0x880C7B361C9651EE(iLocal_88);
					unk_0x3A653D4F5FA4B665(iLocal_92, 0, 0, 0, 0, 0, 0, 0, 0);
					unk_0x5E84945E26CAEF1F(0.2f);
					if (!iLocal_155)
					{
						func_149("FM2_DRIVE", 5000, 1);
					}
					settimera(0);
					if (iLocal_155)
					{
						iLocal_159 = -2;
					}
					else
					{
						iLocal_159++;
					}
				}
				break;
			
			case -2:
				func_214(&iLocal_92, &uLocal_105, Local_119, &uLocal_102, &Local_545);
				if (func_158(&Local_549, cLocal_202, "FAM2_TALK1", 8, 0, 0, 0))
				{
					iLocal_155 = 0;
					iLocal_159 = -3;
				}
				break;
			
			case -3:
				func_214(&iLocal_92, &uLocal_105, Local_119, &uLocal_102, &Local_545);
				if (!func_177())
				{
					settimera(0);
					func_149("FM2_DRIVE", 5000, 1);
					iLocal_159 = 2;
				}
				break;
			
			case 2:
				if (unk_0xBFCE58B2B3249999(iLocal_92, 0))
				{
					if (timera() > 5000 || (timera() > 2000 && unk_0xC82CD1DB42480082(203) == 0))
					{
						if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_92, 0) && !func_177())
						{
							if (!unk_0x24FAD4EF67DE59EB(iLocal_88, unk_0x7D2B9E6A64637269()))
							{
								unk_0x8ADA462BC5F42FD8(iLocal_88, unk_0x7D2B9E6A64637269(), -1, 16, 2);
							}
							iLocal_186 = unk_0xDFB7BFA6482FEE1E();
							iLocal_518 = 0;
							iLocal_519 = 0;
							iLocal_554 = 0;
							iLocal_555 = 0;
							iLocal_159++;
						}
					}
					func_214(&iLocal_92, &uLocal_105, Local_119, &uLocal_102, &Local_545);
				}
				break;
			
			case 3:
				bVar0 = ((unk_0xBFCE58B2B3249999(iLocal_92, 0) && unk_0xF41EB7643E61A928(iLocal_88, iLocal_92, 0)) && unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_92, 0));
				switch (iLocal_630)
				{
					case 0:
						if (!bLocal_191 && !bLocal_193)
						{
							if (func_213())
							{
								func_211("FAM2_TALK2", bVar0);
							}
							else
							{
								func_211("FAM2_TALK2b", bVar0);
							}
						}
						else
						{
							func_211("FAM2_KILTALK", bVar0);
						}
						if ((!func_177() && unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_92, 0)) && !iLocal_555)
						{
							iLocal_554 = 0;
							iLocal_555 = 0;
							unk_0x880C7B361C9651EE(iLocal_88);
							iLocal_630++;
						}
						break;
					
					case 1:
						if (vdist2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), Local_118) > 10000f)
						{
							if (((unk_0xBFCE58B2B3249999(iLocal_92, 0) && unk_0xF41EB7643E61A928(iLocal_88, iLocal_92, 0)) && unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_92, 0)) && unk_0x4DDAC4C80BACF92C(iLocal_92) < 5f)
							{
								fLocal_631 = (fLocal_631 + unk_0x7FF6ACE380ED166C());
							}
							else if (fLocal_631 > 0f)
							{
								fLocal_631 = (fLocal_631 - (unk_0x7FF6ACE380ED166C() * 5f));
							}
						}
						if (fLocal_631 > 10f)
						{
							if (func_158(&Local_549, cLocal_202, "FAM2_GOBACK", 8, 0, 0, 0))
							{
								fLocal_631 = 0f;
							}
						}
						if (!bLocal_191 && !bLocal_193)
						{
						}
						break;
				}
				func_210();
				if (!unk_0xF41EB7643E61A928(iLocal_88, iLocal_92, 0))
				{
					if (unk_0x4E8DA737B686529A(iLocal_88, -1794415470) != 1)
					{
						unk_0x95CA4545D0C61309(iLocal_88, iLocal_92, 20000, 0, 2f, 1, 0);
					}
				}
				if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_92, 0))
				{
					if (!unk_0xF41EB7643E61A928(iLocal_88, iLocal_92, 0))
					{
						if (!unk_0x575B7C28D81C0B4D(uLocal_104))
						{
							unk_0x1036762BD3781C84();
							func_155();
							if (!bLocal_177)
							{
								func_151("FM2_WAIT2", 7500, 1);
								bLocal_177 = true;
							}
							uLocal_104 = func_152(iLocal_88, 0, 145);
						}
						if (unk_0x575B7C28D81C0B4D(uLocal_102))
						{
							unk_0x1AD5BCFEC31BB8D9(&uLocal_102);
						}
					}
					else if (unk_0x575B7C28D81C0B4D(uLocal_104))
					{
						unk_0x1AD5BCFEC31BB8D9(&uLocal_104);
					}
					if (func_217(&iLocal_92, &uLocal_151, &iLocal_152))
					{
						if (vdist(unk_0xD6E677FAD7521410(iLocal_92, 1), Local_119) < 50f)
						{
							bVar1 = true;
						}
					}
					if ((unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), Local_140, Local_141, fLocal_142, 0, 1, 0) || unk_0x591190E69BE43117(unk_0x7D2B9E6A64637269(), Local_119 + Vector(0.3f, 0f, 0f), 1f, 1f, 2.5f, 1, 1, 0)) && unk_0x2C10A11A684CFE96(unk_0x7D2B9E6A64637269(), iLocal_92))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						unk_0x1AD5BCFEC31BB8D9(&uLocal_102);
						bLocal_174 = true;
						iLocal_159++;
					}
				}
				if (!bVar1)
				{
					if (func_217(&iLocal_92, &uLocal_151, &iLocal_152) || !unk_0xBFCE58B2B3249999(iLocal_92, 0))
					{
						iLocal_159 = 100;
					}
					else if (vdist2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), Local_118) < 10000f)
					{
						if (!unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_92, 0))
						{
							if (unk_0x19C069DE0C1DFF87(iLocal_88) < 2f)
							{
								iLocal_159 = 100;
							}
						}
					}
				}
				if (iLocal_159 < 100)
				{
					func_214(&iLocal_92, &uLocal_105, Local_119, &uLocal_102, &Local_545);
				}
				break;
			
			case 4:
				func_174();
				if (func_208(iLocal_92, 5f, 1, 1056964608, 0, 1, 0) || !unk_0x2C10A11A684CFE96(unk_0x7D2B9E6A64637269(), iLocal_92))
				{
					func_174();
					unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), false, 256);
					iLocal_159++;
				}
				break;
			
			case 5:
				if (!func_177())
				{
					unk_0x2DC2890038BFF758(4f, 3f, 4);
					func_207(9);
				}
				break;
			
			case 100:
				if (vdist2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), Local_118) < pow(100f, 2f))
				{
					if (!unk_0xECEC7528A52B4EE8(iLocal_89))
					{
						unk_0x66AE54CE92457FEE(1);
						Local_556 = { func_176() };
						func_155();
						iLocal_555 = 1;
						unk_0x1AD5BCFEC31BB8D9(&uLocal_102);
						sLocal_201 = "family_2_mcs_4p2";
						iLocal_178 = 0;
						iLocal_519 = 0;
						unk_0xCB63763717A253D9();
						unk_0xFA3CD2A976F07F94("family_2_mcs_4", 2, 8);
						settimera(0);
						if (unk_0x575B7C28D81C0B4D(uLocal_105))
						{
							unk_0x1AD5BCFEC31BB8D9(&uLocal_105);
						}
						uLocal_102 = func_152(iLocal_89, 0, 145);
						func_149("FM2_ONFOOT", 7500, 1);
						if (!unk_0xAB3E7E62A69D0DB3(iLocal_88, unk_0xC66769C13C830856(unk_0x1146A9AE09CE2B14())))
						{
							unk_0x4B75B1FF20EA3A22(iLocal_88, unk_0xC66769C13C830856(unk_0x1146A9AE09CE2B14()));
							unk_0x95C1F609605A12FF(iLocal_88, 0);
						}
						bLocal_177 = false;
						iLocal_159++;
					}
				}
				else if (unk_0xE50EB54E0F21BED0(iLocal_92, 0))
				{
					func_104("FM2_SKIDED");
				}
				else
				{
					func_104("FM2_SKIGRN");
				}
				break;
			
			case 101:
				if (!unk_0xECEC7528A52B4EE8(iLocal_89))
				{
					if (func_157(iLocal_88))
					{
						if (!unk_0x575B7C28D81C0B4D(uLocal_102))
						{
							uLocal_102 = func_152(iLocal_89, 0, 145);
						}
						if (unk_0x575B7C28D81C0B4D(uLocal_104))
						{
							unk_0x1AD5BCFEC31BB8D9(&uLocal_104);
						}
						if (vdist(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(iLocal_89, 1)) < 30f)
						{
							settimera(0);
							iLocal_159++;
						}
					}
					else
					{
						if (unk_0x575B7C28D81C0B4D(uLocal_102))
						{
							unk_0x1AD5BCFEC31BB8D9(&uLocal_102);
						}
						if (!unk_0x575B7C28D81C0B4D(uLocal_104))
						{
							if (!bLocal_177)
							{
								func_151("FM2_TRAGB", 7500, 1);
							}
							uLocal_104 = func_152(iLocal_88, 0, 145);
						}
					}
				}
				if (!bLocal_191 && !bLocal_193)
				{
					bVar0 = false;
					if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
					{
						if (!unk_0xC49311A2A500FF09(iLocal_88, 0) && vdist2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(iLocal_88, 1)) < 400f)
						{
							bVar0 = true;
						}
					}
					else if (unk_0xC49311A2A500FF09(iLocal_88, 0) && unk_0x75B58B38E45C6F9A(iLocal_88, 0) == unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0))
					{
						bVar0 = true;
					}
				}
				break;
			
			case 102:
				if (timera() > 1000)
				{
					bLocal_174 = false;
					iLocal_159++;
				}
				break;
			
			case 103:
				func_174();
				if (!func_177())
				{
					func_207(9);
				}
				break;
		}
		if (iLocal_159 > 0)
		{
			func_204(9);
		}
		func_95(sLocal_201, Local_118, 100f, &iLocal_178);
		if (iLocal_178)
		{
			if (!iLocal_519)
			{
				if (unk_0xE807694ABD40478F())
				{
					func_2("Michael", unk_0x7D2B9E6A64637269(), 0, 2);
					unk_0xF81CBD28BD382566("Tracy", iLocal_88, 0);
					unk_0xE13F3E0ED3407B90("Tracy", 1, 1, 0, 0);
					unk_0xE13F3E0ED3407B90("Tracy", 0, 0, 0, 0);
					iLocal_519 = 1;
				}
			}
		}
		if (unk_0x97AEEA04505AFDC3(unk_0x7D2B9E6A64637269()))
		{
			if (!func_177() && (unk_0xDFB7BFA6482FEE1E() - iLocal_169) > 7500)
			{
				func_202(iLocal_88, "GENERIC_SHOCKED_MED", "Tracey", 3);
				iLocal_169 = unk_0xDFB7BFA6482FEE1E();
			}
		}
		if (!unk_0xECEC7528A52B4EE8(iLocal_89))
		{
			if (!iLocal_518)
			{
				if (!unk_0xECEC7528A52B4EE8(iLocal_88))
				{
					if (vdist2(unk_0xD6E677FAD7521410(iLocal_89, 1), unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1)) < 5625f && vdist2(unk_0xD6E677FAD7521410(iLocal_88, 1), unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1)) < 225f)
					{
						func_174();
						if (!func_177())
						{
							if (func_158(&Local_549, cLocal_202, "FAM2_SEES", 8, 0, 0, 0))
							{
								iLocal_518 = 1;
							}
						}
					}
				}
			}
		}
		switch (iLocal_170)
		{
			case 0:
				if (vdist2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), Local_118) < 90000f)
				{
					if (!unk_0x3D6C3476988DE6E1(Local_118, 5f))
					{
						unk_0x6AF7EE4DD9F8B944(Local_118, 4f, 1, 0, 0, 0);
						if (!unk_0x419E13582192CFEA(iLocal_89))
						{
							func_201(&iLocal_89, 14, Local_118, fLocal_148);
						}
						iLocal_170 = 2;
					}
					else
					{
						if (!unk_0x419E13582192CFEA(iLocal_89))
						{
							func_201(&iLocal_89, 14, -1611.595f, -1121.009f, 1.544f, 42.8275f);
						}
						iLocal_170++;
					}
				}
				break;
			
			case 1:
				if (!unk_0xECEC7528A52B4EE8(iLocal_89))
				{
					unk_0xBE91B077ADADE97F(iLocal_89, 1);
					unk_0x45B1B4E55BF15523(iLocal_89, Local_118, 1f, -1, 0.25f, 512, fLocal_148);
					iLocal_170++;
				}
				break;
			
			case 2:
				if (!unk_0xECEC7528A52B4EE8(iLocal_89) && unk_0x591190E69BE43117(iLocal_89, Local_118, Global_22, 0, 1, 0))
				{
					if (vdist2(unk_0xD6E677FAD7521410(iLocal_89, 1), unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1)) < pow(200f, 2f))
					{
						if (!unk_0x836F48E8C4A773BF(iLocal_89, unk_0x7D2B9E6A64637269(), 60f))
						{
							if (unk_0x4E8DA737B686529A(iLocal_89, 242628503) != 1)
							{
								unk_0xCA089CD1A17D76DF(iLocal_89);
								unk_0x8ADA462BC5F42FD8(iLocal_89, unk_0x7D2B9E6A64637269(), -1, 16, 2);
								unk_0x5C679902079A7E80(&uLocal_520);
								unk_0xB0C1A43193C25F7A(0, unk_0x7D2B9E6A64637269(), 0);
								unk_0x8ADA462BC5F42FD8(0, unk_0x7D2B9E6A64637269(), -1, 16, 2);
								unk_0x1BBD0A5729AB1226(uLocal_520);
								unk_0x8A1AC8EBC73850C8(iLocal_89, uLocal_520);
								unk_0x8D5B447F21217223(&uLocal_520);
							}
						}
						else if (unk_0x4E8DA737B686529A(iLocal_89, 242628503) != 1)
						{
							if (!unk_0xECEC7528A52B4EE8(iLocal_89))
							{
								unk_0x8ADA462BC5F42FD8(iLocal_89, unk_0x7D2B9E6A64637269(), -1, 16, 2);
							}
						}
					}
				}
				break;
		}
		if (iLocal_70 != 8)
		{
			if (unk_0xB30CD10E2CD1B67D("FAMILY_2_JETSKI_GO_TO_BEACH"))
			{
				unk_0xC0BBE340BE2AA02D("FAMILY_2_JETSKI_GO_TO_BEACH");
			}
		}
		if (unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) > 0)
		{
			func_147();
		}
	}
}

void func_201(int iParam0, int iParam1, struct<3> Param2, float fParam3)
{
	if (!unk_0x419E13582192CFEA(*iParam0))
	{
		if (iParam1 == 15)
		{
			while (!func_96(Param2, fParam3))
			{
				wait(0);
			}
		}
		else
		{
			while (!func_472(Param2, fParam3))
			{
				wait(0);
			}
		}
		if (!unk_0xECEC7528A52B4EE8(*iParam0))
		{
			unk_0xCA089CD1A17D76DF(*iParam0);
		}
	}
	else if (!unk_0xECEC7528A52B4EE8(*iParam0))
	{
		unk_0x78CDDD1E6367978D(*iParam0, Param2, 1, 0, 0, 1);
		unk_0xCD37A28258D70638(*iParam0, fParam3);
	}
}

void func_202(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xF91D68602B0BFFFF(iParam0, sParam1, sParam2, func_203(iParam3), 0);
}

int func_203(int iParam0)
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

int func_204(int iParam0)
{
	int iVar0;
	int iVar1[10];
	int iVar2[3];
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar1[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		iVar2[iVar0] = 0;
		iVar0++;
	}
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			iVar1[0] = joaat("ig_jimmydisanto");
			iVar1[1] = joaat("tailgater");
			iVar1[2] = joaat("cruiser");
			iVar1[3] = func_205(15, 1);
			break;
		
		case 2:
			iVar1[0] = joaat("ig_jimmydisanto");
			iVar1[1] = joaat("tailgater");
			iVar1[2] = joaat("u_m_m_bikehire_01");
			iVar1[3] = joaat("cruiser");
			iVar2[0] = iLocal_158;
			iVar2[1] = 1;
			break;
		
		case 3:
			iVar1[0] = joaat("ig_jimmydisanto");
			iVar1[1] = joaat("tailgater");
			iVar1[2] = joaat("u_m_m_bikehire_01");
			iVar1[3] = joaat("cruiser");
			iVar2[0] = iLocal_158;
			iVar2[1] = 1;
			break;
		
		case 4:
			iVar1[0] = joaat("ig_jimmydisanto");
			iVar1[1] = joaat("cruiser");
			break;
		
		case 5:
			iVar1[0] = joaat("ig_jimmydisanto");
			iVar1[1] = joaat("cruiser");
			iVar1[2] = joaat("seashark");
			iVar1[3] = joaat("a_m_y_musclbeac_01");
			break;
		
		case 6:
			iVar1[0] = joaat("seashark");
			iVar1[1] = joaat("ig_tracydisanto");
			break;
		
		case 7:
			iVar1[0] = joaat("seashark");
			iVar1[1] = joaat("ig_tracydisanto");
			iVar1[2] = joaat("csb_porndudes");
			iVar1[3] = joaat("ig_jimmydisanto");
			break;
		
		case 8:
			iVar1[0] = joaat("seashark");
			iVar1[1] = joaat("ig_tracydisanto");
			iVar1[2] = joaat("ig_jimmydisanto");
			break;
		
		case 9:
			iVar1[0] = joaat("seashark");
			iVar1[1] = joaat("ig_tracydisanto");
			iVar1[2] = joaat("ig_jimmydisanto");
			break;
	}
	iVar3 = 1;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (iVar1[iVar0] != 0)
		{
			unk_0x16E516CA9C88FF48(iVar1[iVar0]);
			if (!unk_0xA9C0BBFB9CBB66F1(iVar1[iVar0]))
			{
				iVar3 = 0;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (iVar2[iVar0] != 0)
		{
			unk_0x498685EB9132AF88(iVar2[iVar0], "fam2");
			if (!unk_0x9CF7186A344D26A9(iVar2[iVar0], "fam2"))
			{
				iVar3 = 0;
			}
		}
		iVar0++;
	}
	return iVar3;
}

int func_205(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (!func_89(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_206(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_206(int iParam0, var uParam1, int iParam2)
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

void func_207(int iParam0)
{
	iLocal_172 = 0;
	iLocal_70 = iParam0;
}

int func_208(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x366E7F593105797F(0, 71, 1);
	unk_0x366E7F593105797F(0, 72, 1);
	unk_0x366E7F593105797F(0, 76, 1);
	unk_0x366E7F593105797F(0, 73, 1);
	unk_0x366E7F593105797F(0, 59, 1);
	unk_0x366E7F593105797F(0, 60, 1);
	if (bParam5)
	{
		unk_0x366E7F593105797F(0, 75, 1);
	}
	unk_0x366E7F593105797F(0, 80, 1);
	if (!bParam6)
	{
		unk_0x366E7F593105797F(0, 69, 1);
		unk_0x366E7F593105797F(0, 70, 1);
		unk_0x366E7F593105797F(0, 68, 1);
	}
	unk_0x366E7F593105797F(0, 74, 1);
	unk_0x366E7F593105797F(0, 86, 1);
	unk_0x366E7F593105797F(0, 81, 1);
	unk_0x366E7F593105797F(0, 82, 1);
	unk_0x366E7F593105797F(0, 138, 1);
	unk_0x366E7F593105797F(0, 136, 1);
	unk_0x366E7F593105797F(0, 114, 1);
	unk_0x366E7F593105797F(0, 107, 1);
	unk_0x366E7F593105797F(0, 110, 1);
	unk_0x366E7F593105797F(0, 89, 1);
	unk_0x366E7F593105797F(0, 89, 1);
	unk_0x366E7F593105797F(0, 87, 1);
	unk_0x366E7F593105797F(0, 88, 1);
	unk_0x366E7F593105797F(0, 113, 1);
	unk_0x366E7F593105797F(0, 115, 1);
	unk_0x366E7F593105797F(0, 116, 1);
	unk_0x366E7F593105797F(0, 117, 1);
	unk_0x366E7F593105797F(0, 118, 1);
	unk_0x366E7F593105797F(0, 119, 1);
	unk_0x366E7F593105797F(0, 352, 1);
	unk_0x366E7F593105797F(0, 131, 1);
	unk_0x366E7F593105797F(0, 132, 1);
	unk_0x366E7F593105797F(0, 123, 1);
	unk_0x366E7F593105797F(0, 126, 1);
	unk_0x366E7F593105797F(0, 129, 1);
	unk_0x366E7F593105797F(0, 130, 1);
	unk_0x366E7F593105797F(0, 133, 1);
	unk_0x366E7F593105797F(0, 134, 1);
	unk_0x042D3F56FFA48394();
	func_209(iParam0);
	if ((unk_0xDFB7BFA6482FEE1E() - Global_29) > 500)
	{
		unk_0x101C61FF49B27BB8(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0xDFB7BFA6482FEE1E();
	if (!unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
		if (unk_0x0BCA9ADE67DF9DD8(unk_0x4DDAC4C80BACF92C(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_209(int iParam0)
{
	if (!unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
		if (unk_0x45A445014B256CB5(iParam0))
		{
			if (unk_0x7FFAB542797E5F31(iParam0))
			{
				unk_0x4AE9893CBA452EC0(iParam0, 0);
			}
		}
	}
}

void func_210()
{
	if ((!func_177() && (!unk_0x123480158F10FA67() || unk_0xC82CD1DB42480082(203) == 0)) && (unk_0xDFB7BFA6482FEE1E() - iLocal_167) > 5000)
	{
		if ((((((((unk_0xBFCE58B2B3249999(iLocal_92, 0) && !unk_0xECEC7528A52B4EE8(iLocal_88)) && !unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_92, 0)) && unk_0xF41EB7643E61A928(iLocal_88, iLocal_92, 0)) && unk_0x0297E633EADA2182(iLocal_92)) && unk_0xC96B0C85BE0E0287(unk_0x7D2B9E6A64637269()) != iLocal_92) && vdist(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(iLocal_88, 1)) < 35f) && !unk_0x0A0080A9EB535EC7(unk_0x7D2B9E6A64637269())) && Local_545.f_1)
		{
			if ((unk_0xDFB7BFA6482FEE1E() - iLocal_186) > 6000)
			{
				if (func_158(&Local_549, cLocal_202, "FAM2_GETOFF", 8, 0, 0, 0))
				{
					iLocal_186 = unk_0xDFB7BFA6482FEE1E();
				}
			}
		}
	}
}

void func_211(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!iLocal_554)
		{
			if (func_158(&Local_549, cLocal_548, sParam0, 8, 0, 0, 0))
			{
				iLocal_555 = 0;
				iLocal_554 = 1;
			}
		}
		if (iLocal_555)
		{
			if (func_212(&Local_549, cLocal_548, sParam0, &Local_556, 8, 0, 0))
			{
				iLocal_555 = 0;
			}
		}
	}
	if (!bParam1)
	{
		if (!iLocal_555)
		{
			Local_556 = { func_176() };
			func_174();
			iLocal_555 = 1;
		}
	}
}

bool func_212(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_173(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21132 = 0;
	Global_21139 = 0;
	Global_21134 = 0;
	Global_22116 = 0;
	Global_22118 = 0;
	Global_22122 = 1;
	StringCopy(&Global_22129, sParam3, 24);
	Global_2621441 = 0;
	return func_159(sParam2, iParam4, 0);
}

int func_213()
{
	if (Global_99370 == 10 || Global_99370 == 9)
	{
		return 1;
	}
	return 0;
}

void func_214(int iParam0, var uParam1, struct<3> Param2, var uParam3, var uParam4)
{
	if (unk_0xBFCE58B2B3249999(*iParam0, 0) && unk_0x419E13582192CFEA(*iParam0))
	{
		if (!unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), *iParam0, 0))
		{
			if (!unk_0x575B7C28D81C0B4D(*uParam1))
			{
				unk_0x1036762BD3781C84();
				if (!uParam4->f_1)
				{
					iLocal_167 = unk_0xDFB7BFA6482FEE1E();
					func_148(uParam4);
				}
				*uParam1 = func_216(*iParam0, 0, 0);
			}
			if (unk_0x575B7C28D81C0B4D(*uParam3))
			{
				unk_0x1AD5BCFEC31BB8D9(uParam3);
			}
		}
		else
		{
			if (!unk_0x575B7C28D81C0B4D(*uParam3))
			{
				*uParam3 = func_215(Param2, 1);
			}
			if (unk_0x575B7C28D81C0B4D(*uParam1))
			{
				unk_0x1036762BD3781C84();
				unk_0x1AD5BCFEC31BB8D9(uParam1);
			}
		}
	}
}

var func_215(struct<3> Param0, int iParam1)
{
	var uVar0;
	
	uVar0 = unk_0x27E44C95E1D1461C(Param0);
	unk_0xDD205B87CDFD0C1B(uVar0, func_154(unk_0x02BFF15CAA701972(), 1f, 1f));
	unk_0x13CC211F9F7ACE7F(uVar0, iParam1);
	return uVar0;
}

int func_216(int iParam0, bool bParam1, bool bParam2)
{
	return func_153(iParam0, !bParam1, bParam2);
}

int func_217(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = 1;
	if (!unk_0xE50EB54E0F21BED0(*iParam0, 0))
	{
		if (!unk_0x0297E633EADA2182(*iParam0) && unk_0x4DDAC4C80BACF92C(*iParam0) < 2f)
		{
			*uParam1 = (*uParam1 + unk_0x7FF6ACE380ED166C());
			return *uParam1 > 3f;
		}
		else
		{
			*uParam1 = 0f;
		}
	}
	return 0;
}

void func_218()
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < Local_572)
	{
		switch (Local_572[iVar0 /*8*/].f_2)
		{
			case 0:
				if (vdist2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), Local_572[iVar0 /*8*/].f_4) < 2500f)
				{
					Var1 = { func_220(iVar0) };
					if (unk_0x591190E69BE43117(unk_0x7D2B9E6A64637269(), Local_572[iVar0 /*8*/].f_4, Var1.f_3, 0, 1, 0))
					{
						if (func_219(iVar0, joaat("squalo"), Var1))
						{
							unk_0x2DC2890038BFF758(2f, 8f, 3);
							Local_572[iVar0 /*8*/].f_2++;
						}
					}
				}
				break;
			
			case 1:
				if (!unk_0xECEC7528A52B4EE8(Local_572[iVar0 /*8*/].f_1) && unk_0xBFCE58B2B3249999(Local_572[iVar0 /*8*/], 0))
				{
					if (unk_0xAB0BB1BDD76B67DC(Local_572[iVar0 /*8*/]) && !unk_0xBD74B9C9BB5E1622(Local_572[iVar0 /*8*/]))
					{
						if ((unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), Local_572[iVar0 /*8*/], 5f, 5f, 5f, 0, 1, 0) || (unk_0xBFCE58B2B3249999(iLocal_99[0], 0) && unk_0xD406352E21A7E1D0(iLocal_99[0], Local_572[iVar0 /*8*/], 5f, 5f, 5f, 0, 1, 0))) || (unk_0xBFCE58B2B3249999(iLocal_99[1], 0) && unk_0xD406352E21A7E1D0(iLocal_99[1], Local_572[iVar0 /*8*/], 5f, 5f, 5f, 0, 1, 0)))
						{
							unk_0x20BA7623E7B1A254(Local_572[iVar0 /*8*/], 5000, 786469, 1);
						}
					}
				}
				if ((unk_0x419E13582192CFEA(Local_572[iVar0 /*8*/]) && unk_0x419E13582192CFEA(Local_572[iVar0 /*8*/].f_1)) && (((!unk_0xECEC7528A52B4EE8(Local_572[iVar0 /*8*/].f_1) && !unk_0xAB0BB1BDD76B67DC(Local_572[iVar0 /*8*/])) || unk_0xECEC7528A52B4EE8(Local_572[iVar0 /*8*/].f_1)) || !unk_0xBFCE58B2B3249999(Local_572[iVar0 /*8*/], 0)))
				{
					if (vdist2(unk_0xD6E677FAD7521410(Local_572[iVar0 /*8*/].f_1, 1), unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1)) > 10000f && vdist2(unk_0xD6E677FAD7521410(Local_572[iVar0 /*8*/], 1), unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1)) > 10000f)
					{
						unk_0x0F3BD19FF11738D3(&(Local_572[iVar0 /*8*/].f_1));
						unk_0x795957CD3A0042C8(&(Local_572[iVar0 /*8*/]));
					}
				}
				break;
		}
		iVar0++;
	}
}

int func_219(int iParam0, int iParam1, struct<3> Param2)
{
	unk_0x16E516CA9C88FF48(iParam1);
	unk_0x16E516CA9C88FF48(joaat("a_m_y_genstreet_01"));
	unk_0x498685EB9132AF88(iParam0 + 1, "fam2amb");
	if ((unk_0xA9C0BBFB9CBB66F1(iParam1) && unk_0xA9C0BBFB9CBB66F1(joaat("a_m_y_genstreet_01"))) && unk_0x9CF7186A344D26A9(iParam0 + 1, "fam2amb"))
	{
		Local_572[iParam0 /*8*/] = unk_0x170478CC84C8AE2F(iParam1, Param2, 0f, 1, 1, 0);
		Local_572[iParam0 /*8*/].f_1 = unk_0x42F3C85A00B4FC7B(Local_572[iParam0 /*8*/], 26, joaat("a_m_y_genstreet_01"), -1, 1, 1);
		unk_0xBE91B077ADADE97F(Local_572[iParam0 /*8*/].f_1, 1);
		unk_0x069557E67CC67C29(Local_572[iParam0 /*8*/], iParam0 + 1, "fam2amb", 1);
		unk_0x5C052A30B9FCA449(Local_572[iParam0 /*8*/], 2);
		unk_0x824F744352C8BC82(iParam1);
		unk_0x824F744352C8BC82(joaat("a_m_y_genstreet_01"));
		return 1;
	}
	return 0;
}

struct<10> func_220(int iParam0)
{
	struct<10> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -935.5378f, -1633.737f, 0.3306f };
			Var0.f_3 = { 62.75f, 48.75f, 11f };
			Var0.f_6 = { -997.8688f, -1383.004f, 0.406f };
			Var0.f_9 = 314.1291f;
			break;
		
		case 1:
			Var0 = { -928.3334f, -1359.194f, 0.3531f };
			Var0.f_3 = { 28.25f, 34.75f, 11f };
			Var0.f_6 = { -723.3589f, -1350.093f, 0.3208f };
			Var0.f_9 = 294.1011f;
			break;
	}
	return Var0;
}

void func_221()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	char* sVar6;
	char* sVar7;
	int iVar8;
	
	if (unk_0xBFCE58B2B3249999(iLocal_92, 0))
	{
		if ((!iLocal_895 && unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_92, 0)) && vmag2(unk_0x9F2928DF31D785C7(iLocal_92)) > 324f)
		{
			iLocal_895 = 1;
		}
		if ((iLocal_895 && unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0)) && vmag2(unk_0x9F2928DF31D785C7(iLocal_92)) < 225f)
		{
			iLocal_895 = 0;
		}
		if (!iLocal_896)
		{
			if (!unk_0x2C10A11A684CFE96(unk_0x7D2B9E6A64637269(), iLocal_92))
			{
				iLocal_896 = 1;
			}
		}
		else
		{
			iLocal_896 = 0;
		}
		if ((iLocal_896 && iLocal_895) && unk_0x6B9E71121F5B8154(unk_0x7D2B9E6A64637269()))
		{
			unk_0xC595907BB71C921D(unk_0x7D2B9E6A64637269(), 0, 0);
		}
	}
	iLocal_73 = func_256();
	if (iLocal_73 < 7 && iLocal_73 > iLocal_75)
	{
		iLocal_75 = iLocal_73;
	}
	if (iLocal_73 != iLocal_74)
	{
		if (!unk_0x234B68AC2E35ED5A(iLocal_76, iLocal_73))
		{
			unk_0x191DDA30577F440A(&iLocal_76, iLocal_73);
		}
		if (unk_0x419E13582192CFEA(iLocal_99[0]))
		{
			if (unk_0xAB0BB1BDD76B67DC(iLocal_99[0]))
			{
				unk_0x50B76EE36FBE865F(iLocal_99[0]);
			}
		}
		if (unk_0x419E13582192CFEA(iLocal_99[1]))
		{
			if (unk_0xAB0BB1BDD76B67DC(iLocal_99[1]))
			{
				unk_0x50B76EE36FBE865F(iLocal_99[1]);
			}
		}
	}
	if (unk_0xBD74B9C9BB5E1622(iLocal_92) && timera() > 500)
	{
		unk_0x50B76EE36FBE865F(iLocal_92);
	}
	iLocal_74 = iLocal_73;
	if (!unk_0x419E13582192CFEA(iLocal_107))
	{
		unk_0x16E516CA9C88FF48(joaat("prop_ld_test_01"));
		if (unk_0xA9C0BBFB9CBB66F1(joaat("prop_ld_test_01")))
		{
			iLocal_107 = unk_0x795434E153F90E41(joaat("prop_ld_test_01"), Local_118, 1, 1, 0);
			unk_0x3CBE9F07524C242D(iLocal_107, 0, 0);
			unk_0x4603196EEEA2355C(iLocal_107, 0, 0);
			unk_0xA2C015B68CE01357(iLocal_107, 1);
		}
	}
	switch (iLocal_159)
	{
		case 0:
			unk_0x20D884FB6567BAD5(0);
			if ((((func_255() && func_254(0, 0)) && func_254(1, 0)) && func_253()) && func_252())
			{
				if (!unk_0xECEC7528A52B4EE8(iLocal_91[0]))
				{
					unk_0x1DC2BF231DE6A016(iLocal_91[0], unk_0x7D2B9E6A64637269(), 300f, -1, 0, 0);
					unk_0x2271ED1E65FB75EE(iLocal_91[0], iLocal_79);
				}
				if (!unk_0xECEC7528A52B4EE8(iLocal_88))
				{
					unk_0x068BDE31F7D112BB("missfam2_tracy_jetski");
					unk_0xEBF08082D648C482(iLocal_92, 1000f);
					unk_0x3A653D4F5FA4B665(iLocal_92, 1, 0, 0, 1, 0, 0, 0, 0);
					unk_0x30B0040AB4AF815E(iLocal_88, 0);
					unk_0xC595907BB71C921D(iLocal_88, 5000, 0);
					unk_0xA415F00D0E0DFBCE(iLocal_88, 20, 0);
					unk_0xA415F00D0E0DFBCE(iLocal_88, 2, 0);
					unk_0xBE91B077ADADE97F(iLocal_88, 1);
					unk_0x76E35164CB4968C4(unk_0x1146A9AE09CE2B14(), 1);
					unk_0x8F160110753EB17B(iLocal_88, 1);
				}
				unk_0x78B2DF314748056B(5, iLocal_79, 1862763509);
				func_251(&Local_549, 2);
				func_143(&Local_549, 2, iLocal_88, "TRACEY", 0, 1);
				func_250(1);
				func_249();
				func_248();
				iLocal_190 = 0;
				fLocal_887 = 0f;
				fLocal_891 = 0f;
				iLocal_876 = 0;
				bLocal_877 = false;
				iLocal_875[0] = 0;
				iLocal_875[1] = 0;
				bLocal_191 = false;
				iLocal_192 = 0;
				iLocal_194 = 0;
				iLocal_195 = 0;
				bLocal_193 = false;
				iLocal_878 = 0;
				bLocal_894 = false;
				iLocal_77 = 0;
				iLocal_78 = 6;
				iLocal_75 = 0;
				unk_0xFB8A6909539A30B1("FAM2_ON_JETSKI");
				unk_0xEB8677560AC15143(iLocal_99[0], 1);
				unk_0xEB8677560AC15143(iLocal_99[1], 1);
				unk_0xC5E8919401B3C049(iLocal_99[0], 101, "famtwo", 15f, 262144);
				unk_0xC5E8919401B3C049(iLocal_99[1], 102, "famtwo", 15f, 262144);
				unk_0xC5E8919401B3C049(iLocal_92, 1, "famtwoplayer", 24f, 262144);
				unk_0x01BF36BDFE0F82AC(iLocal_99[0], "FAMILY_2_ENEMY_JETSKI_Group", 0);
				unk_0x01BF36BDFE0F82AC(iLocal_99[1], "FAMILY_2_ENEMY_JETSKI_Group", 0);
				unk_0x5249BC3946DCDA75(unk_0x7D2B9E6A64637269(), 3);
				if (unk_0x419E13582192CFEA(iLocal_92) && unk_0xBFCE58B2B3249999(iLocal_92, 0))
				{
					unk_0x8047C496BEE89A0B("OFF");
					unk_0x3D72B9992AD4B7C5(iLocal_92, "OFF");
					unk_0xEB8677560AC15143(iLocal_92, 1);
				}
				if (!unk_0xB30CD10E2CD1B67D("FAMILY_2_JETSKI_CHASE"))
				{
					unk_0xB84B43B766630B5C("FAMILY_2_JETSKI_CHASE");
				}
				unk_0x89E171705EA920DA(iLocal_92, 1, 1, 0);
				unk_0x985CACB900CBBF03(2);
				settimerb(0);
				unk_0x2DC2890038BFF758(0f, 8f, 4);
				func_247(0, 4f);
				iLocal_76 = 0;
				iLocal_159++;
				if (iLocal_155)
				{
					iLocal_159 = -1;
				}
			}
			break;
		
		case -1:
			unk_0xD0051FAE2E1BB4C8("smboat");
			while (!unk_0xD17A6DB35E21C90C("smBoat"))
			{
				wait(0);
			}
			iLocal_159 = 1;
			iLocal_155 = 0;
			break;
		
		case 1:
			if (!unk_0xE0A6F16F546C8274() && !unk_0x07BE48DF95787FCB())
			{
				unk_0x6E1E3A5B1F9AB95B(500);
			}
			if (unk_0x0E8572B08CEB6A11(uLocal_112))
			{
				if (timerb() > 1000)
				{
					unk_0xFE1DEC9C5734D0C0(uLocal_112, 0);
				}
			}
			if (!unk_0x419E13582192CFEA(Local_549[7 /*10*/]) || unk_0xECEC7528A52B4EE8(Local_549[7 /*10*/]))
			{
				if (!unk_0xECEC7528A52B4EE8(iLocal_100[0]))
				{
					func_143(&Local_549, 7, iLocal_100[0], "FAM2MAN2", 0, 1);
				}
				else if (!unk_0xECEC7528A52B4EE8(iLocal_100[1]))
				{
					func_143(&Local_549, 7, iLocal_100[1], "FAM2MAN2", 0, 1);
				}
			}
			if (!iLocal_888)
			{
				if (bLocal_890)
				{
					iVar0 = 0;
					while (iVar0 <= 1)
					{
						if (!unk_0xECEC7528A52B4EE8(iLocal_100[iVar0]))
						{
							unk_0x095503B9F1CAC814(iLocal_100[iVar0], 0);
							unk_0x52261CF13B75FFA8(iLocal_100[iVar0], 2);
							unk_0xF8207455457B967E(iLocal_100[iVar0], 0);
							unk_0x4A0E99CBD1247EDA(iLocal_100[iVar0], 2055493265);
							unk_0xA1217FA3D209873F(iLocal_100[iVar0], 50);
						}
						iVar0++;
					}
					bLocal_890 = false;
				}
				if ((((((iLocal_73 == 7 && iLocal_190 < 100) || iLocal_874[0]) || iLocal_874[1]) || iLocal_73 < iLocal_75) || iLocal_889) || (unk_0xBFCE58B2B3249999(iLocal_92, 0) && !unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_92, 0)))
				{
					if (!unk_0x0A0080A9EB535EC7(unk_0x7D2B9E6A64637269()))
					{
						iLocal_562[0] = unk_0xDFB7BFA6482FEE1E();
						iLocal_562[1] = (unk_0xDFB7BFA6482FEE1E() - 1500);
						iLocal_888 = 1;
					}
				}
			}
			else
			{
				if (fLocal_891 > 10f && fLocal_891 < 12f)
				{
				}
				else if (unk_0xBFCE58B2B3249999(iLocal_92, 0))
				{
					if ((!unk_0xECEC7528A52B4EE8(iLocal_100[0]) && vdist2(unk_0xD6E677FAD7521410(iLocal_100[0], 1), unk_0xD6E677FAD7521410(iLocal_92, 1)) < 225f) || (!unk_0xECEC7528A52B4EE8(iLocal_100[1]) && vdist2(unk_0xD6E677FAD7521410(iLocal_100[1], 1), unk_0xD6E677FAD7521410(iLocal_92, 1)) < 225f))
					{
						fLocal_891 = (fLocal_891 + unk_0x7FF6ACE380ED166C());
					}
				}
				if (!bLocal_890)
				{
					iVar1 = 0;
					while (iVar1 <= 1)
					{
						if (unk_0x419E13582192CFEA(iLocal_100[iVar1]) && !unk_0xECEC7528A52B4EE8(iLocal_100[iVar1]))
						{
							unk_0x095503B9F1CAC814(iLocal_100[iVar1], 1);
							unk_0x52261CF13B75FFA8(iLocal_100[iVar1], 2);
							unk_0xF8207455457B967E(iLocal_100[iVar1], 20);
							unk_0x4A0E99CBD1247EDA(iLocal_100[iVar1], 1566631136);
							unk_0xA1217FA3D209873F(iLocal_100[iVar1], 40);
							if (unk_0x419E13582192CFEA(iLocal_99[iVar1]))
							{
								if (unk_0xAB0BB1BDD76B67DC(iLocal_99[iVar1]))
								{
									unk_0x50B76EE36FBE865F(iLocal_99[iVar1]);
								}
							}
						}
						iVar1++;
					}
					bLocal_890 = true;
				}
				else if ((iLocal_73 != 2 || (iLocal_73 == 2 && iLocal_77 == 0)) && !iLocal_876)
				{
					func_245();
				}
				if (((((!iLocal_874[0] && !iLocal_874[1]) && iLocal_73 != 7) && iLocal_73 >= iLocal_75) && !iLocal_889) && (unk_0xBFCE58B2B3249999(iLocal_92, 0) && unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_92, 0)))
				{
					iLocal_888 = 0;
				}
				if (unk_0x0A0080A9EB535EC7(unk_0x7D2B9E6A64637269()))
				{
					iLocal_888 = 0;
				}
			}
			if (!unk_0xECEC7528A52B4EE8(iLocal_91[0]))
			{
				if (vdist2(unk_0xD6E677FAD7521410(iLocal_91[0], 1), unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1)) > 10000f)
				{
					unk_0x0F3BD19FF11738D3(&(iLocal_91[0]));
				}
			}
			func_242();
			func_229();
			if (iLocal_190 < 100)
			{
				if (!iLocal_194)
				{
					if (unk_0x24A466C655E8588A(unk_0x7D2B9E6A64637269(), 4) && unk_0x7F716EA884E75E49(unk_0x7D2B9E6A64637269()))
					{
						iLocal_194 = 1;
					}
				}
				else if (!iLocal_195)
				{
					if (func_158(&Local_549, cLocal_202, "FAM2_SHOOT", 8, 0, 0, 0))
					{
						iLocal_195 = 1;
					}
				}
				if (!bLocal_191 || !bLocal_193)
				{
					bLocal_193 = true;
					iVar2 = 0;
					while (iVar2 < iLocal_100)
					{
						if (unk_0x419E13582192CFEA(iLocal_100[iVar2]))
						{
							if (unk_0xECEC7528A52B4EE8(iLocal_100[iVar2]) || unk_0xE50EB54E0F21BED0(iLocal_100[iVar2], 0))
							{
								bLocal_191 = true;
							}
							else
							{
								bLocal_193 = false;
							}
						}
						iVar2++;
					}
				}
				if ((bLocal_191 && !iLocal_192) && !bLocal_193)
				{
					if (unk_0xBFCE58B2B3249999(iLocal_92, 0) && unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_92, 0))
					{
						func_155();
						if (iLocal_190 < 50 || iLocal_190 >= 100)
						{
							iLocal_163 = iLocal_190;
						}
						if (unk_0x575B7C28D81C0B4D(uLocal_105))
						{
							unk_0x1AD5BCFEC31BB8D9(&uLocal_105);
						}
						iLocal_190 = 50;
						iLocal_192 = 1;
					}
				}
				if (iLocal_73 == 1)
				{
					if (unk_0x575B7C28D81C0B4D(uLocal_102))
					{
						unk_0x1AD5BCFEC31BB8D9(&uLocal_102);
						if (unk_0x123480158F10FA67() && !func_177())
						{
							unk_0x1036762BD3781C84();
						}
					}
				}
				if (iLocal_190 < 5)
				{
					if (iLocal_73 == 1)
					{
						iLocal_190 = 5;
					}
				}
				func_227();
			}
			if (iLocal_190 != 60 && iLocal_190 != 61)
			{
				if (unk_0xBFCE58B2B3249999(iLocal_92, 0) && !unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_92, 0))
				{
					if (iLocal_190 < 50 || iLocal_190 >= 100)
					{
						iLocal_163 = iLocal_190;
					}
					iLocal_190 = 60;
				}
			}
			if (unk_0x575B7C28D81C0B4D(uLocal_102) && unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_92, 0))
			{
				if (iLocal_73 == 1)
				{
					unk_0x1AD5BCFEC31BB8D9(&uLocal_102);
				}
			}
			switch (iLocal_190)
			{
				case 0:
					if (unk_0x0EC2B29D4172D225("missfam2_tracy_jetski"))
					{
						if (!unk_0xECEC7528A52B4EE8(iLocal_88))
						{
							if (!unk_0x698F51FB33ADAF7B(iLocal_88, "missfam2_tracy_jetski", "tracy_jetski_a", 3))
							{
								if (func_226(0))
								{
									unk_0x4261814A9A26E86F(iLocal_88, "missfam2_tracy_jetski", "tracy_jetski_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
								}
								else if (func_158(&Local_549, cLocal_202, "FAM2_COMING", 8, 0, 0, 0))
								{
									unk_0xFB8A6909539A30B1("FAM2_COMING");
									unk_0x8ADA462BC5F42FD8(iLocal_88, iLocal_100[0], -1, 0, 2);
									iLocal_190++;
									settimera(0);
								}
							}
							else if (unk_0x4598B7969D5B0A28(iLocal_88, "missfam2_tracy_jetski", "tracy_jetski_a") > 0.12f)
							{
								if (func_158(&Local_549, cLocal_202, "FAM2_COMING", 8, 0, 0, 0))
								{
									unk_0xFB8A6909539A30B1("FAM2_COMING");
									iLocal_190++;
									settimera(0);
								}
							}
						}
					}
					break;
				
				case 1:
					if (timera() > 1000)
					{
						Var3 = { Local_210 - unk_0xD6E677FAD7521410(iLocal_92, 1) };
						Var4 = { unk_0x557C9CA8FCC667DF(iLocal_92) };
						fVar5 = unk_0x6EE46314283D3C7D(Var4.x, Var4.f_1, Var3.x, Var3.f_1);
						if (fVar5 > 180f)
						{
							fVar5 = (fVar5 - 360f);
						}
						if (fVar5 < -180f)
						{
							fVar5 = (fVar5 + 360f);
						}
						if (fVar5 < 0f)
						{
							if (fVar5 > -90f)
							{
								if (!unk_0xECEC7528A52B4EE8(iLocal_88))
								{
									unk_0x4261814A9A26E86F(iLocal_88, "missfam2_tracy_jetski", "tracy_point_right", 4f, -8f, -1, 0, 0, 0, 0, 0);
								}
							}
						}
						else if (fVar5 < 90f)
						{
							if (!unk_0xECEC7528A52B4EE8(iLocal_88))
							{
								unk_0x4261814A9A26E86F(iLocal_88, "missfam2_tracy_jetski", "tracy_point_left", 4f, -8f, -1, 0, 0, 0, 0, 0);
							}
						}
					}
					if ((((!func_177() || timera() > 3000) && unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_92, 0)) && unk_0xF41EB7643E61A928(iLocal_88, iLocal_92, 0)) && !unk_0x575B7C28D81C0B4D(uLocal_102))
					{
						uLocal_102 = func_215(Local_210, 0);
						iLocal_190++;
					}
					break;
				
				case 2:
					if (func_158(&Local_549, cLocal_202, "FAM2_MRESP", 8, 0, 0, 0))
					{
						unk_0xDDFB0D5F3D3B74AA(unk_0x7D2B9E6A64637269(), Local_210, 7500, 1, 2);
						settimera(0);
						iLocal_190++;
					}
					break;
				
				case 3:
					if (!func_177())
					{
						func_151("FM2_CHASE1", 7500, 1);
						settimera(0);
						iLocal_190++;
					}
					break;
				
				case 4:
					if (vdist2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), Local_210) > 900f)
					{
						func_225("FAM2_OLREM", "", 9000);
					}
					break;
				
				case 5:
					if (((unk_0x419E13582192CFEA(iLocal_100[0]) && !unk_0xECEC7528A52B4EE8(iLocal_100[0])) && unk_0x7F716EA884E75E49(iLocal_100[0])) || ((unk_0x419E13582192CFEA(iLocal_100[1]) && !unk_0xECEC7528A52B4EE8(iLocal_100[1])) && unk_0x7F716EA884E75E49(iLocal_100[1])))
					{
						iLocal_190++;
					}
					break;
				
				case 6:
					if (!func_177())
					{
						if (!unk_0xECEC7528A52B4EE8(iLocal_88))
						{
							if (!unk_0x698F51FB33ADAF7B(iLocal_88, "missfam2_tracy_jetski", "tracy_jetski_c", 3))
							{
								if (func_226(0))
								{
									unk_0x4261814A9A26E86F(iLocal_88, "missfam2_tracy_jetski", "tracy_jetski_c", 8f, -8f, -1, 0, 0, 0, 0, 0);
								}
								else if (func_158(&Local_549, cLocal_202, "FAM2_HESHOOT", 8, 0, 0, 0))
								{
									unk_0xFB8A6909539A30B1("FAM2_SHOOTING");
									unk_0x8ADA462BC5F42FD8(iLocal_88, iLocal_100[0], -1, 0, 2);
									iLocal_190++;
									settimera(0);
								}
							}
							else if (unk_0x4598B7969D5B0A28(iLocal_88, "missfam2_tracy_jetski", "tracy_jetski_c") > 0.12f)
							{
								if (func_158(&Local_549, cLocal_202, "FAM2_HESHOOT", 8, 0, 0, 0))
								{
									unk_0xFB8A6909539A30B1("FAM2_SHOOTING");
									iLocal_190++;
									settimera(0);
								}
							}
						}
					}
					break;
				
				case 7:
					if (!func_177())
					{
						func_151("FM2_CHASE3", 7500, 1);
						settimerb(0);
						iLocal_190++;
					}
					break;
				
				case 8:
					if (timerb() > 5000)
					{
						if (!func_177())
						{
							if (func_158(&Local_549, cLocal_202, "FAM2_LOSEM", 8, 0, 0, 0))
							{
								iLocal_190++;
							}
						}
					}
					break;
				
				case 9:
					if (!func_177())
					{
						if (func_222(&Local_549, cLocal_202, "FAM2_WHO", "FAM2_WHO_3", "FAM2_WHO", "FAM2_WHO_5", "FAM2_WHO", "FAM2_WHO_7", "FAM2_WHO", "FAM2_WHO_9", 8, 0, 0))
						{
							iLocal_190++;
						}
					}
					break;
				
				case 10:
					func_225("FAM2_TSHOUT", "FAM2_MSHOUT", 8000);
					if (iLocal_73 == 2)
					{
						iLocal_190++;
					}
					break;
				
				case 11:
					if (func_158(&Local_549, cLocal_202, "FAM2_LOSET", 8, 0, 0, 0))
					{
						iLocal_190++;
					}
					break;
				
				case 12:
					func_225("FAM2_TSHOUT", "FAM2_MSHOUT", 8000);
					break;
				
				case 50:
					func_174();
					if (func_158(&Local_549, cLocal_202, "FAM2_KILLONE", 8, 0, 0, 0))
					{
						iLocal_190++;
					}
					break;
				
				case 51:
					if (func_158(&Local_549, cLocal_202, "FAM2_KILLER", 8, 0, 0, 0))
					{
						iLocal_190 = iLocal_163;
					}
					break;
				
				case 60:
					func_155();
					if (unk_0xBFCE58B2B3249999(iLocal_92, 0))
					{
						if (!unk_0x575B7C28D81C0B4D(uLocal_105))
						{
							uLocal_105 = func_216(iLocal_92, 0, 0);
							func_148(&Local_545);
						}
						if (unk_0x575B7C28D81C0B4D(uLocal_102))
						{
							unk_0x1AD5BCFEC31BB8D9(&uLocal_102);
						}
						iLocal_881 = unk_0xDFB7BFA6482FEE1E();
						iLocal_190++;
					}
					break;
				
				case 61:
					if (unk_0xBFCE58B2B3249999(iLocal_92, 0))
					{
						if (!unk_0x123480158F10FA67())
						{
							if ((((!unk_0xECEC7528A52B4EE8(iLocal_88) && unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_88, 20f, 20f, 20f, 0, 1, 0)) && unk_0x0297E633EADA2182(unk_0x7D2B9E6A64637269())) && !unk_0x0A0080A9EB535EC7(unk_0x7D2B9E6A64637269())) && !unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_92, 1))
							{
								if ((unk_0xDFB7BFA6482FEE1E() - iLocal_881) > 6000)
								{
									if (func_158(&Local_549, cLocal_202, "FAM2_FALL", 8, 0, 0, 0))
									{
										iLocal_881 = unk_0xDFB7BFA6482FEE1E();
									}
								}
							}
						}
						if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_92, 0))
						{
							func_155();
							if (((iLocal_73 == 0 || iLocal_73 == 7) && !unk_0x575B7C28D81C0B4D(uLocal_102)) && iLocal_163 < 5)
							{
								uLocal_102 = func_215(Local_210, 0);
							}
							if (unk_0x575B7C28D81C0B4D(uLocal_105))
							{
								unk_0x1AD5BCFEC31BB8D9(&uLocal_105);
							}
							unk_0x1036762BD3781C84();
							iLocal_190 = iLocal_163;
						}
					}
					break;
				
				case 100:
					if (unk_0x575B7C28D81C0B4D(uLocal_101[0]))
					{
						unk_0x1AD5BCFEC31BB8D9(&(uLocal_101[0]));
					}
					if (unk_0x575B7C28D81C0B4D(uLocal_101[1]))
					{
						unk_0x1AD5BCFEC31BB8D9(&(uLocal_101[1]));
					}
					if (unk_0x575B7C28D81C0B4D(uLocal_102))
					{
						unk_0x1AD5BCFEC31BB8D9(&uLocal_102);
					}
					func_174();
					if (!func_177())
					{
						if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_92, 0) && unk_0xF41EB7643E61A928(iLocal_88, iLocal_92, 0))
						{
							if (!unk_0xECEC7528A52B4EE8(iLocal_88))
							{
								if (!unk_0x698F51FB33ADAF7B(iLocal_88, "missfam2_tracy_jetski", "tracy_jetski_d", 3))
								{
									unk_0x4261814A9A26E86F(iLocal_88, "missfam2_tracy_jetski", "tracy_jetski_d", 8f, -8f, -1, 0, 0, 0, 0, 0);
								}
								else if (unk_0x4598B7969D5B0A28(iLocal_88, "missfam2_tracy_jetski", "tracy_jetski_d") > 0.25f)
								{
									if (unk_0xB30CD10E2CD1B67D("FAMILY_2_JETSKI_CHASE"))
									{
										unk_0xC0BBE340BE2AA02D("FAMILY_2_JETSKI_CHASE");
									}
									unk_0x880C7B361C9651EE(iLocal_88);
									iLocal_190++;
								}
							}
						}
					}
					break;
				
				case 101:
					if (bLocal_193)
					{
						sVar6 = "FAM2_KILLTWO";
					}
					else if (bLocal_191)
					{
						sVar6 = "FAM2_ESCAPE";
					}
					else
					{
						sVar6 = "FAM2_LOST";
					}
					if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_92, 0) && unk_0xF41EB7643E61A928(iLocal_88, iLocal_92, 0))
					{
						bLocal_894 = true;
					}
					func_211(sVar6, bLocal_894);
					if ((iLocal_554 && !func_177()) && !iLocal_555)
					{
						unk_0x2DC2890038BFF758(5f, 5f, 3);
						iLocal_554 = 0;
						iLocal_190++;
					}
					break;
				
				case 102:
					if (bLocal_193 || bLocal_191)
					{
						sVar7 = "FAM2_KILLER2";
					}
					else
					{
						sVar7 = "FAM2_TALK1";
					}
					if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_92, 0) && unk_0xF41EB7643E61A928(iLocal_88, iLocal_92, 0))
					{
						bLocal_894 = true;
					}
					func_211(sVar7, bLocal_894);
					if ((iLocal_554 && !func_177()) && !iLocal_555)
					{
						unk_0xF9135F131C423364("missfam2_tracy_jetski");
						unk_0x5249BC3946DCDA75(unk_0x7D2B9E6A64637269(), 0);
						iLocal_554 = 0;
						func_207(8);
					}
					break;
			}
			if ((((!unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_92, 0) && !unk_0x0297E633EADA2182(unk_0x7D2B9E6A64637269())) && !unk_0x397C98A5552886EB(unk_0x7D2B9E6A64637269())) && !unk_0x6B9E71121F5B8154(unk_0x7D2B9E6A64637269())) && vdist(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(iLocal_88, 1)) > 30f)
			{
				iLocal_159 = 2;
			}
			if (!unk_0xF41EB7643E61A928(iLocal_88, iLocal_92, 0))
			{
				iLocal_159 = 3;
			}
			if (!unk_0xBFCE58B2B3249999(iLocal_92, 0) || func_217(&iLocal_92, &uLocal_151, &iLocal_152))
			{
				iLocal_159 = 4;
			}
			if ((((iLocal_190 < 100 && ((unk_0xECEC7528A52B4EE8(iLocal_100[0]) || unk_0xE50EB54E0F21BED0(iLocal_100[0], 0)) || iLocal_875[0])) && ((unk_0xECEC7528A52B4EE8(iLocal_100[1]) || unk_0xE50EB54E0F21BED0(iLocal_100[1], 0)) || iLocal_875[1])) && iLocal_190 != 60) && iLocal_190 != 61)
			{
				unk_0x985CACB900CBBF03(0);
				unk_0xFB8A6909539A30B1("FAM2_LOST_HIM");
				iLocal_190 = 100;
			}
			if (iLocal_159 > 1)
			{
				unk_0x1036762BD3781C84();
				func_174();
				iVar8 = 0;
				while (iVar8 < iLocal_100)
				{
					if (((!unk_0xECEC7528A52B4EE8(iLocal_100[iVar8]) && unk_0x419E13582192CFEA(iLocal_99[iVar8])) && unk_0xBFCE58B2B3249999(iLocal_99[iVar8], 0)) && unk_0xF41EB7643E61A928(iLocal_100[iVar8], iLocal_99[iVar8], 0))
					{
						unk_0xCA089CD1A17D76DF(iLocal_100[iVar8]);
						if (unk_0xAB0BB1BDD76B67DC(iLocal_99[iVar8]))
						{
							unk_0x50B76EE36FBE865F(iLocal_99[iVar8]);
						}
					}
					iVar8++;
				}
				if (unk_0x575B7C28D81C0B4D(uLocal_102))
				{
					unk_0x1AD5BCFEC31BB8D9(&uLocal_102);
				}
				settimera(0);
			}
			break;
		
		case 2:
			if (timera() > 2000)
			{
				func_104("FM2_TRAAB");
			}
			break;
		
		case 3:
			if (timera() > 2000)
			{
				func_104("FM2_TRAFELL");
			}
			break;
		
		case 4:
			if (timera() > 1000)
			{
				unk_0x5249BC3946DCDA75(unk_0x7D2B9E6A64637269(), 3);
				if (unk_0xE50EB54E0F21BED0(iLocal_92, 0))
				{
					func_104("FM2_SKIDED");
				}
				else
				{
					func_104("FM2_SKIGRN");
				}
			}
			break;
	}
}

bool func_222(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	var uVar0;
	var uVar1;
	
	func_173(uParam0, 145, sParam1, iParam11, iParam12, 0);
	if (iParam10 > 7)
	{
		if (iParam10 < 12)
		{
			iParam10 = 7;
		}
	}
	uVar0 = 10;
	uVar1 = 10;
	func_224(4, &uVar0, &uVar1, sParam2, sParam3, sParam4, sParam5, sParam6, sParam7, sParam8, sParam9, 0, 0, 0, 0, 0, 0);
	return func_223(&uVar0, &uVar1, iParam10, 0);
}

int func_223(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	Global_21126 = 0;
	if (Global_21125 == 0 || Global_21127 == 2)
	{
		if (Global_21125 != 0)
		{
			if (iParam2 > Global_21127)
			{
				if (bParam3 == 0)
				{
					unk_0x75B41F5020877259(0);
					Global_19798.f_1 = 3;
					Global_21125 = 0;
					Global_21126 = 1;
					Global_21178 = 0;
					Global_21121 = 0;
					Global_21122 = 0;
				}
				else
				{
					func_172();
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
		if (func_171(8, -1))
		{
			return 0;
		}
		Global_21201 = { Global_21195 };
		func_170();
		Global_20414 = { Global_20579 };
		Global_21131 = Global_21132;
		Global_21138 = Global_21139;
		Global_2621442 = Global_2621441;
		Global_21140 = { Global_21156 };
		Global_21133 = Global_21134;
		Global_22115 = Global_22116;
		Global_22123 = { Global_22129 };
		Global_22121 = Global_22122;
		Global_22117 = Global_22118;
		Global_22119 = Global_22120;
		Global_20744.f_368 = Global_22112;
		Global_20744.f_369 = Global_22113;
		Global_20744.f_370 = Global_22114;
		Global_21121 = Global_21122;
		Global_21123 = Global_21124;
		if (Global_21383 == 0)
		{
			Global_21279[0 /*6*/] = { Global_21305[0 /*6*/] };
			Global_21279[1 /*6*/] = { Global_21305[1 /*6*/] };
			Global_21331[0 /*6*/] = { Global_21357[0 /*6*/] };
			Global_21331[1 /*6*/] = { Global_21357[1 /*6*/] };
			Global_21292[0 /*6*/] = { Global_21318[0 /*6*/] };
			Global_21292[1 /*6*/] = { Global_21318[1 /*6*/] };
			Global_21344[0 /*6*/] = { Global_21370[0 /*6*/] };
			Global_21344[1 /*6*/] = { Global_21370[1 /*6*/] };
		}
		if (Global_21131)
		{
			unk_0xC664C0067EEAB8D1(&Global_7668, 20);
			unk_0xC664C0067EEAB8D1(&Global_7669, 17);
			unk_0xC664C0067EEAB8D1(&Global_7670, 0);
			if (bParam3)
			{
				func_169();
				if (Global_8473[Global_19798 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
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
				if (func_168())
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
					if (Global_21383 == 0)
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
			}
			if (func_167())
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
			}
			func_166();
			Global_21135 = bParam3;
		}
		Global_21127 = iParam2;
		if (Global_21121 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_21121)
			{
				StringCopy(&(Global_20744.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_20744.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_19991 = 0;
		func_165();
		return 1;
	}
	if (Global_21125 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_21127 || iParam2 == Global_21127)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_172();
	}
	return 0;
}

void func_224(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	Global_21122 = iParam0;
	Global_21132 = 0;
	Global_21139 = 0;
	Global_21134 = 0;
	Global_22116 = 0;
	Global_22122 = 0;
	Global_2621441 = 0;
	(*uParam1)[0] = uParam3;
	(*uParam2)[0] = uParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = uParam7;
	(*uParam2)[2] = uParam8;
	(*uParam1)[3] = uParam9;
	(*uParam2)[3] = uParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

void func_225(char* sParam0, char* sParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iLocal_892 > iLocal_881)
	{
		iParam2 = 3000;
	}
	if (((unk_0xDFB7BFA6482FEE1E() - iLocal_881) > iParam2 && !func_177()) && (!unk_0x123480158F10FA67() || unk_0xC82CD1DB42480082(203) == 0))
	{
		iVar0 = unk_0xB36B8558948EA7A8(1, 3);
		if (((!unk_0xECEC7528A52B4EE8(iLocal_100[0]) && unk_0xBFCE58B2B3249999(iLocal_99[0], 0)) && unk_0xD406352E21A7E1D0(iLocal_99[0], iLocal_92, 20f, 20f, 5f, 0, 1, 0)) && iLocal_892 < iLocal_881)
		{
			iVar0 = unk_0xB36B8558948EA7A8(1, 6);
		}
		if (iVar0 == 1 && bLocal_191)
		{
			iVar0 = 2;
		}
		if (iVar0 == 1 && !unk_0xAB6A270F84A8781E(sParam1))
		{
			if (func_158(&Local_549, cLocal_202, sParam1, 8, 0, 0, 0))
			{
				iLocal_881 = unk_0xDFB7BFA6482FEE1E();
			}
		}
		else if (iVar0 == 2)
		{
			if (unk_0xDA654EB115F9FF7D(sParam0, "FAM2_TSHOUT"))
			{
				if (func_226(0))
				{
					iVar1 = unk_0xB36B8558948EA7A8(0, 4);
					switch (iVar1)
					{
						case 0:
							unk_0x4261814A9A26E86F(iLocal_88, "missfam2_tracy_jetski", "tracy_jetski_e", 4f, -4f, -1, 0, 0, 0, 0, 0);
							break;
						
						case 1:
							unk_0x4261814A9A26E86F(iLocal_88, "missfam2_tracy_jetski", "tracy_jetski_f", 4f, -4f, -1, 0, 0, 0, 0, 0);
							break;
						
						case 2:
							unk_0x4261814A9A26E86F(iLocal_88, "missfam2_tracy_jetski", "tracy_jetski_g", 4f, -4f, -1, 0, 0, 0, 0, 0);
							break;
						
						case 3:
							unk_0x4261814A9A26E86F(iLocal_88, "missfam2_tracy_jetski", "tracy_jetski_h", 4f, -4f, -1, 0, 0, 0, 0, 0);
							break;
						}
					}
			}
			if (bLocal_191)
			{
				if (!unk_0xDA654EB115F9FF7D(sParam0, "FAM2_ONE"))
				{
					sParam0 = "FAM2_ONE";
				}
			}
			if (func_158(&Local_549, cLocal_202, sParam0, 8, 0, 0, 0))
			{
				iLocal_881 = unk_0xDFB7BFA6482FEE1E();
			}
		}
		else if (iVar0 >= 3)
		{
			if (unk_0x419E13582192CFEA(Local_549[7 /*10*/]) && !unk_0xECEC7528A52B4EE8(Local_549[7 /*10*/]))
			{
				if (func_158(&Local_549, cLocal_202, "FAM2_BGUY2", 8, 0, 0, 0))
				{
					iLocal_892 = unk_0xDFB7BFA6482FEE1E();
				}
			}
		}
	}
}

int func_226(int iParam0)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!unk_0xECEC7528A52B4EE8(iLocal_100[iParam0]) && !unk_0xECEC7528A52B4EE8(iLocal_88))
	{
		Var0 = { unk_0xD6E677FAD7521410(iLocal_100[iParam0], 1) - unk_0xD6E677FAD7521410(iLocal_88, 1) };
		Var1 = { unk_0x557C9CA8FCC667DF(iLocal_88) };
		if (unk_0x0BCA9ADE67DF9DD8(unk_0x6EE46314283D3C7D(Var1.x, Var1.f_1, Var0.x, Var0.f_1)) >= 60f)
		{
			return 1;
		}
	}
	return 0;
}

void func_227()
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	if (bLocal_877)
	{
		if (iLocal_876)
		{
			fVar1 = 3f;
			fVar2 = 50f;
		}
		else if (iLocal_73 == 7)
		{
			fVar1 = 5f;
			fVar2 = 250f;
		}
		else
		{
			fVar1 = 5f;
			fVar2 = 100f;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_100)
		{
			if (func_228(iVar0, fVar2, fVar1))
			{
				iLocal_875[iVar0] = 1;
				unk_0xC606AE2A3209945E(&(iLocal_100[iVar0]));
				unk_0x5420D0D520CF44D0(&(iLocal_99[iVar0]));
				if (unk_0x575B7C28D81C0B4D(uLocal_101[iVar0]))
				{
					unk_0x1AD5BCFEC31BB8D9(&(uLocal_101[iVar0]));
				}
			}
			iVar0++;
		}
	}
	else if (iLocal_876)
	{
		iLocal_876 = 0;
	}
	if (!iLocal_875[0] || !iLocal_875[1])
	{
		iVar0 = 0;
		while (iVar0 < iLocal_100)
		{
			if (!iLocal_875[iVar0])
			{
				if ((unk_0x419E13582192CFEA(iLocal_100[iVar0]) && (unk_0xECEC7528A52B4EE8(iLocal_100[iVar0]) || unk_0xE50EB54E0F21BED0(iLocal_100[iVar0], 0))) || !unk_0x419E13582192CFEA(iLocal_100[iVar0]))
				{
					iLocal_875[iVar0] = 1;
				}
			}
			iVar0++;
		}
	}
}

int func_228(int iParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (!unk_0xECEC7528A52B4EE8(iLocal_100[iParam0]))
	{
		if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_92, 0))
		{
			fVar0 = vdist2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(iLocal_100[iParam0], 1));
			if ((fVar0 > (fParam1 * fParam1) && unk_0x98E18969B1D0C4AB(iLocal_100[iParam0])) || fVar0 > 90000f)
			{
				if (fVar0 > 90000f)
				{
					fLocal_893[iParam0] = (fLocal_893[iParam0] + (unk_0x7FF6ACE380ED166C() * 10f));
				}
				fLocal_893[iParam0] = (fLocal_893[iParam0] + unk_0x7FF6ACE380ED166C());
			}
			else if (fLocal_893[iParam0] > 0f)
			{
				fLocal_893[iParam0] = (fLocal_893[iParam0] - (unk_0x7FF6ACE380ED166C() * 3f));
			}
			else
			{
				fLocal_893[iParam0] = 0f;
			}
		}
		if (fLocal_893[iParam0] > fParam2)
		{
			return 1;
		}
	}
	return 0;
}

void func_229()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!unk_0xECEC7528A52B4EE8(iLocal_100[iVar0]))
		{
			if ((!unk_0xC49311A2A500FF09(iLocal_100[iVar0], 0) && unk_0x0297E633EADA2182(iLocal_100[iVar0])) && vdist2(unk_0xD6E677FAD7521410(iLocal_100[iVar0], 1), unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1)) > 100f)
			{
				unk_0x8BE0C51D3486F755(iLocal_100[iVar0], joaat("weapon_sniperrifle"));
			}
		}
		iVar0++;
	}
	switch (iLocal_73)
	{
		case 0:
			if (timerb() > 5000)
			{
				func_240(0, &uLocal_640, 101, "famtwo", 1, 0);
				func_240(1, &uLocal_653, 102, "famtwo", 1, 0);
			}
			if (timerb() < 2000)
			{
				unk_0x366E7F593105797F(0, 76, 1);
				unk_0x366E7F593105797F(0, 72, 1);
				unk_0x366E7F593105797F(0, 69, 1);
				unk_0x366E7F593105797F(0, 23, 1);
				unk_0x366E7F593105797F(0, 27, 1);
				unk_0x366E7F593105797F(0, 31, 1);
				unk_0x366E7F593105797F(0, 30, 1);
				unk_0x366E7F593105797F(0, 26, 1);
			}
			if (fLocal_887 < 1f)
			{
				fLocal_887 = (fLocal_887 + 0.01f);
			}
			else
			{
				fLocal_887 = 1f;
			}
			break;
		
		case 1:
			func_240(0, &uLocal_666, 201, "famtwo", 0, 0);
			func_240(1, &uLocal_712, 202, "famtwo", 0, 0);
			break;
		
		case 2:
			iLocal_77 = func_239();
			if (iLocal_77 != 6)
			{
				if (iLocal_77 != iLocal_78)
				{
					func_237(&(Local_808[0 /*25*/]), 1, func_238(iLocal_77));
					func_237(&(Local_808[1 /*25*/]), 2, func_238(iLocal_77));
					if (unk_0x419E13582192CFEA(iLocal_99[0]))
					{
						if (unk_0xAB0BB1BDD76B67DC(iLocal_99[0]))
						{
							unk_0x50B76EE36FBE865F(iLocal_99[0]);
						}
					}
					if (unk_0x419E13582192CFEA(iLocal_99[1]))
					{
						if (unk_0xAB0BB1BDD76B67DC(iLocal_99[1]))
						{
							unk_0x50B76EE36FBE865F(iLocal_99[1]);
						}
					}
				}
				iLocal_78 = iLocal_77;
			}
			func_234(0);
			if (!iLocal_889)
			{
				if (!unk_0xE50EB54E0F21BED0(iLocal_99[0], 0))
				{
					if (vdist2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(iLocal_99[0], 1)) < 100f && unk_0x4DDAC4C80BACF92C(iLocal_92) < 7f)
					{
						iLocal_889 = 1;
					}
				}
				if (!unk_0xE50EB54E0F21BED0(iLocal_99[1], 0))
				{
					if (vdist2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(iLocal_99[1], 1)) < 100f && unk_0x4DDAC4C80BACF92C(iLocal_92) < 7f)
					{
						iLocal_889 = 1;
					}
				}
			}
			else if (unk_0x4DDAC4C80BACF92C(iLocal_92) > 10f)
			{
				iLocal_889 = 0;
			}
			if (iLocal_77 == 0)
			{
				if (!unk_0xE50EB54E0F21BED0(iLocal_99[1], 0))
				{
					if (func_232(unk_0xD6E677FAD7521410(iLocal_99[1], 1), 1, "famtwoCanalsAlt", &uLocal_809, 0) > func_232(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), 1, "famtwoCanalsAlt", &uLocal_809, 0))
					{
						iLocal_874[1] = 1;
					}
				}
				if (!unk_0xE50EB54E0F21BED0(iLocal_99[0], 0))
				{
					if (func_232(unk_0xD6E677FAD7521410(iLocal_99[0], 1), 1, "famtwoCanalsAlt", &uLocal_809, 0) > func_232(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), 1, "famtwoCanalsAlt", &uLocal_809, 0))
					{
						iLocal_874[0] = 1;
					}
				}
				func_240(1, &uLocal_809, 1, "famtwoCanalsAlt", 0, 0);
			}
			else if (!unk_0xECEC7528A52B4EE8(iLocal_100[1]))
			{
				if (unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -1061.247f, -1027.52f, -1.839872f, -1158.562f, -864.5836f, 17.98512f, 250f, 0, 1, 0))
				{
					Var1 = { -1191.48f, -1002.427f, 0f };
				}
				else if (unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -1061.247f, -1027.52f, -1.839872f, -1006.939f, -1120.256f, 6.144058f, 250f, 0, 1, 0))
				{
					Var1 = { -1137.652f, -1097.164f, 0f };
				}
				else if (unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -900.0117f, -1305.718f, 15.90007f, -1006.939f, -1120.256f, -8.855943f, 250f, 0, 1, 0))
				{
					Var1 = { -1083.993f, -1189.703f, 0f };
				}
				if (!func_231(Var1))
				{
					if (!unk_0x591190E69BE43117(iLocal_99[1], Var1, 2.5f, 2.5f, 2f, 0, 1, 0))
					{
						Var2 = { Vector(-1.599754f, -1082.671f, -1114.952f) + Vector(17.75f, 133.25f, 81.25f) };
						Var3 = { Vector(-1.599754f, -1082.671f, -1114.952f) - Vector(17.75f, 133.25f, 81.25f) };
						if (unk_0xABAA7F8FD10DCDF2(Var3.x, Var3.f_1, Var2.x, Var2.f_1))
						{
							if (unk_0x4E8DA737B686529A(iLocal_100[1], -1817882002) != 1)
							{
								unk_0xE946751408DFA71B(iLocal_100[1], iLocal_99[1], Var1, 10f, 0, joaat("seashark"), 262144, 1f, 3f);
							}
						}
						if (!unk_0x3D6C3476988DE6E1(unk_0xD6E677FAD7521410(iLocal_99[1], 1), 2f) && !unk_0x3D6C3476988DE6E1(Var1, 2f))
						{
							unk_0x78CDDD1E6367978D(iLocal_99[1], Var1, 1, 0, 0, 1);
							unk_0xCD37A28258D70638(iLocal_99[1], 214f);
						}
					}
				}
			}
			break;
		
		case 3:
			if ((((!unk_0xECEC7528A52B4EE8(iLocal_100[1]) && !unk_0xE50EB54E0F21BED0(iLocal_100[1], 0)) && unk_0xBFCE58B2B3249999(iLocal_99[1], 0)) && unk_0xF41EB7643E61A928(iLocal_100[1], iLocal_99[1], 0)) && unk_0xBFCE58B2B3249999(iLocal_92, 0))
			{
				if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_92, 0))
				{
					if (unk_0x4E8DA737B686529A(iLocal_100[1], 579380604) != 1 && unk_0x4E8DA737B686529A(iLocal_100[1], 579380604) != 2)
					{
						unk_0xFF8EDECFEAFBF5F4(iLocal_100[1], unk_0x7D2B9E6A64637269());
					}
				}
				if (unk_0xD406352E21A7E1D0(iLocal_100[1], unk_0x7D2B9E6A64637269(), 10f, 10f, 5f, 0, 1, 0))
				{
					iLocal_878 = 1;
				}
			}
			break;
		
		case 4:
			iLocal_77 = func_239();
			if (iLocal_77 != 6)
			{
				if (iLocal_77 != iLocal_78)
				{
					func_237(&(Local_808[0 /*25*/]), 1, func_238(iLocal_77));
					func_237(&(Local_808[1 /*25*/]), 2, func_238(iLocal_77));
					if (unk_0x419E13582192CFEA(iLocal_99[1]))
					{
						if (unk_0xAB0BB1BDD76B67DC(iLocal_99[1]))
						{
							unk_0x50B76EE36FBE865F(iLocal_99[1]);
						}
					}
				}
				iLocal_78 = iLocal_77;
			}
			func_234(1);
			if (!iLocal_889)
			{
				if ((vdist2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(iLocal_99[0], 1)) < 100f || vdist2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(iLocal_99[1], 1)) < 100f) && unk_0x4DDAC4C80BACF92C(iLocal_92) < 7f)
				{
					iLocal_889 = 1;
				}
			}
			else if (unk_0x4DDAC4C80BACF92C(iLocal_92) > 10f)
			{
				iLocal_889 = 0;
			}
			break;
		
		case 5:
			func_240(0, &uLocal_758, 301, "famtwo", 0, 0);
			func_240(1, &uLocal_783, 302, "famtwo", 0, 0);
			break;
		
		case 6:
			if (!iLocal_876)
			{
				func_240(0, &uLocal_834, 401, "famtwo", 1, 0);
				func_240(1, &uLocal_853, 402, "famtwo", 1, 0);
				if (!bLocal_890)
				{
					if (fLocal_887 > 0.1f)
					{
						fLocal_887 = (fLocal_887 - 0.01f);
					}
					else
					{
						fLocal_887 = 0.1f;
					}
				}
				if (unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), Local_143, Local_144, fLocal_145, 0, 1, 0))
				{
					iVar4 = 0;
					while (iVar4 < iLocal_100)
					{
						if (!unk_0xECEC7528A52B4EE8(iLocal_100[iVar4]))
						{
							unk_0xCA089CD1A17D76DF(iLocal_100[iVar4]);
							unk_0xA0F8D741F5D8E7E4(iLocal_100[iVar4], iLocal_99[iVar4], -901.3011f, -1359.937f, 0f, 14, 20f, 262144, 3f, 3f, 1);
						}
						iVar4++;
					}
					iLocal_876 = 1;
				}
			}
			break;
	}
	func_230(0);
	func_230(1);
	if ((iLocal_73 == 6 || iLocal_73 == 7) || iLocal_876)
	{
		if (!bLocal_877)
		{
			bLocal_877 = true;
		}
	}
	else if (bLocal_877)
	{
		bLocal_877 = false;
	}
}

void func_230(int iParam0)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (unk_0xBFCE58B2B3249999(iLocal_92, 0) && unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_92, 0))
	{
		if (!unk_0x575B7C28D81C0B4D(uLocal_101[iParam0]))
		{
			if (!unk_0xECEC7528A52B4EE8(iLocal_100[iParam0]))
			{
				if (unk_0xBFCE58B2B3249999(iLocal_99[iParam0], 0) && unk_0xF41EB7643E61A928(iLocal_100[iParam0], iLocal_99[iParam0], 0))
				{
					uLocal_101[iParam0] = func_215(unk_0xD6E677FAD7521410(iLocal_99[iParam0], 1), 0);
					unk_0xDD944E3FD2028A48(uLocal_101[iParam0], "FM2_PURSUER");
					unk_0xFA3E6ADC3E5D386E(uLocal_101[iParam0], 1);
					unk_0xC5BBAB0F8336ECB7(uLocal_101[iParam0], 9);
					iLocal_880[iParam0] = 1;
				}
				else
				{
					uLocal_101[iParam0] = func_152(iLocal_100[iParam0], 1, 145);
					iLocal_880[iParam0] = 0;
				}
			}
		}
		else if (!unk_0xECEC7528A52B4EE8(iLocal_100[iParam0]))
		{
			if (unk_0xBFCE58B2B3249999(iLocal_99[iParam0], 0) && unk_0xF41EB7643E61A928(iLocal_100[iParam0], iLocal_99[iParam0], 0))
			{
				if (iLocal_880[iParam0])
				{
					Var0 = { unk_0xB5BBED356C99E704(uLocal_101[iParam0]) };
					Var1 = { unk_0xD6E677FAD7521410(iLocal_99[iParam0], 1) };
					Var0.x = (Var0.x + ((Var1.x - Var0.x) / 25f));
					Var0.f_1 = (Var0.f_1 + ((Var1.f_1 - Var0.f_1) / 25f));
					Var0.f_2 = (Var0.f_2 + ((Var1.f_2 - Var0.f_2) / 25f));
					unk_0xC983AF341845804E(uLocal_101[iParam0], Var0);
				}
				else
				{
					unk_0x1AD5BCFEC31BB8D9(&(uLocal_101[iParam0]));
				}
			}
			else if (iLocal_880[iParam0])
			{
				unk_0x1AD5BCFEC31BB8D9(&(uLocal_101[iParam0]));
			}
		}
		else if (unk_0x575B7C28D81C0B4D(uLocal_101[iParam0]))
		{
			unk_0x1AD5BCFEC31BB8D9(&(uLocal_101[iParam0]));
		}
	}
	else if (unk_0x575B7C28D81C0B4D(uLocal_101[iParam0]))
	{
		unk_0x1AD5BCFEC31BB8D9(&(uLocal_101[iParam0]));
	}
}

int func_231(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

float func_232(struct<3> Param0, int iParam1, char* sParam2, var uParam3, bool bParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	iVar0 = func_233(Param0, uParam3);
	fVar1 = (unk_0xDC2AF9AB32FB87A8(iParam1, sParam2) / IntToFloat((*uParam3 - 1)));
	fVar2 = (unk_0xB021B000E378B72D(Param0, *(uParam3[iVar0 /*3*/]), *(uParam3[iVar0 + 1 /*3*/]), 1) * fVar1);
	if (bParam4)
	{
	}
	return ((fVar2 + (IntToFloat(iVar0) * fVar1)) - 0.1f);
}

int func_233(struct<3> Param0, var uParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	fVar2 = 999999f;
	iVar0 = 0;
	while (iVar0 < (*uParam1 - 1))
	{
		if (vdist2(unk_0x2D03FF047BE9813C(Param0, *(uParam1[iVar0 /*3*/]), *(uParam1[iVar0 + 1 /*3*/]), 1), Param0) < fVar2)
		{
			iVar1 = iVar0;
			fVar2 = vdist2(unk_0x2D03FF047BE9813C(Param0, *(uParam1[iVar0 /*3*/]), *(uParam1[iVar0 + 1 /*3*/]), 1), Param0);
		}
		iVar0++;
	}
	return iVar1;
}

void func_234(int iParam0)
{
	if (bLocal_873)
	{
		func_240(iParam0, &(Local_808[0 /*25*/]), 1, func_238(iLocal_78), 0, 1);
	}
	else
	{
		func_240(iParam0, &(Local_808[1 /*25*/]), 2, func_238(iLocal_78), 0, 1);
	}
	if ((unk_0xDFB7BFA6482FEE1E() - iLocal_879) > 500)
	{
		bLocal_873 = func_235(iLocal_78);
		iLocal_879 = unk_0xDFB7BFA6482FEE1E();
	}
}

bool func_235(int iParam0)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { unk_0x557C9CA8FCC667DF(unk_0x7D2B9E6A64637269()) };
	Var1 = { func_236(Local_638[iParam0 /*3*/] - Local_637[iParam0 /*3*/]) };
	return unk_0x0BCA9ADE67DF9DD8(unk_0x6EE46314283D3C7D(Var1.x, Var1.f_1, Var0.x, Var0.f_1)) < 90f;
}

Vector3 func_236(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = vmag(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.x = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

void func_237(var uParam0, int iParam1, char* sParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	unk_0x498685EB9132AF88(iParam1, sParam2);
	if (unk_0x9CF7186A344D26A9(iParam1, sParam2))
	{
		fVar0 = unk_0xDC2AF9AB32FB87A8(iParam1, sParam2);
		fVar1 = (fVar0 / IntToFloat((*uParam0 - 1)));
		iVar2 = 0;
		while (iVar2 < *uParam0)
		{
			*(uParam0[iVar2 /*3*/]) = { unk_0x3BCD5137CE6A77E2(iParam1, (fVar1 * IntToFloat(iVar2)), sParam2) };
			iVar2++;
		}
	}
}

char* func_238(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "famtwoCanalsbottom";
			break;
		
		case 1:
			return "famtwoCanalstop";
			break;
		
		case 2:
			return "famtwoCanalsLeft";
			break;
		
		case 3:
			return "famtwoCanalsMiddle";
			break;
		
		case 4:
			return "famtwoCanalsRight";
			break;
	}
	return "famtwoCanalsbottom";
}

int func_239()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), Local_637[iVar0 /*3*/], Local_638[iVar0 /*3*/], fLocal_639[iVar0], 0, 1, 0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 6;
}

void func_240(int iParam0, var uParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	
	if ((((((!unk_0xECEC7528A52B4EE8(iLocal_100[iParam0]) && !unk_0xE50EB54E0F21BED0(iLocal_100[iParam0], 0)) && unk_0x419E13582192CFEA(iLocal_99[iParam0])) && unk_0xBFCE58B2B3249999(iLocal_99[iParam0], 0)) && unk_0xF41EB7643E61A928(iLocal_100[iParam0], iLocal_99[iParam0], 0)) && unk_0xBFCE58B2B3249999(iLocal_92, 0)) && unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_92, 0))
	{
		fVar0 = func_232(unk_0xD6E677FAD7521410(iLocal_99[iParam0], 1), iParam2, sParam3, uParam1, 0);
		fVar1 = func_232(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), iParam2, sParam3, uParam1, 0);
		Var2 = { unk_0x3BCD5137CE6A77E2(iParam2, fVar0, sParam3) };
		Var3 = { unk_0x3BCD5137CE6A77E2(iParam2, fVar1, sParam3) };
		if (!iLocal_872[iParam0])
		{
			if (!bLocal_890)
			{
				if (((fVar0 < fVar1 && !unk_0x3D6C3476988DE6E1(unk_0xD6E677FAD7521410(iLocal_99[iParam0], 1), 3f)) && !unk_0x3D6C3476988DE6E1(Var2, 3f)) && vdist2(Var3, unk_0xD6E677FAD7521410(iLocal_99[iParam0], 1)) > 25f)
				{
					unk_0xFFCFF4576AE8F21E();
					unk_0x50B76EE36FBE865F(iLocal_99[iParam0]);
					unk_0x069557E67CC67C29(iLocal_99[iParam0], iParam2, sParam3, 1);
					unk_0x6460C026D98259A7(iLocal_99[iParam0], 0f, 0f, 0.1f);
					unk_0x2978CEBD6EE3E821(iLocal_99[iParam0], func_241((fVar0 + (IntToFloat(iParam0) * 0.5f)), 0f, 999999f));
					iLocal_872[iParam0] = 1;
				}
			}
			if (iLocal_73 != 2)
			{
				iLocal_874[iParam0] = fVar0 > fVar1;
			}
			else
			{
				iLocal_874[iParam0] = 0;
			}
		}
		else
		{
			fVar4 = vdist2(Var3, Var2);
			fVar5 = 999999f;
			if (!unk_0xE50EB54E0F21BED0(iLocal_99[0], 0) && !unk_0xE50EB54E0F21BED0(iLocal_99[1], 0))
			{
				fVar5 = vdist2(unk_0xD6E677FAD7521410(iLocal_99[0], 1), unk_0xD6E677FAD7521410(iLocal_99[1], 1));
			}
			if (((((unk_0x3D6C3476988DE6E1(unk_0xD6E677FAD7521410(iLocal_99[iParam0], 1), 3f) && (fVar4 < 25f || iParam4)) || fVar4 < 9f) || fVar0 > fVar1) || !unk_0xAB0BB1BDD76B67DC(iLocal_99[iParam0])) || fVar5 < (1.5f * 1.5f))
			{
				if (unk_0xAB0BB1BDD76B67DC(iLocal_99[iParam0]))
				{
					unk_0x2C7A52191F8DFF00(iLocal_99[iParam0], 262144);
				}
				else
				{
					unk_0xC5E8919401B3C049(iLocal_99[iParam0], iParam2, sParam3, 20f, 262144);
				}
				if (iParam5 && (fVar0 > 0.85f || fVar0 < 0.15f))
				{
				}
				unk_0xFF8EDECFEAFBF5F4(iLocal_100[iParam0], unk_0x7D2B9E6A64637269());
				iLocal_872[iParam0] = 0;
			}
			else
			{
				fVar6 = 40f;
				if (iParam5 && (fVar0 > 0.8f || fVar0 < 0.2f))
				{
					fVar7 = 1f;
					unk_0xEA5C7C61843816D5(iLocal_99[iParam0], func_241(((vdist(unk_0xD6E677FAD7521410(iLocal_99[iParam0], 1), unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1)) * (fVar7 / fVar6)) * fLocal_887), 0.2f, fVar7));
				}
				else
				{
					fVar7 = 1.3f;
					unk_0xEA5C7C61843816D5(iLocal_99[iParam0], func_241(((vdist(unk_0xD6E677FAD7521410(iLocal_99[iParam0], 1), unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1)) * (fVar7 / fVar6)) * fLocal_887), 0.8f, fVar7));
				}
			}
		}
	}
	else if (unk_0x419E13582192CFEA(iLocal_99[iParam0]))
	{
		if (unk_0xAB0BB1BDD76B67DC(iLocal_99[iParam0]))
		{
			unk_0x50B76EE36FBE865F(iLocal_99[iParam0]);
		}
	}
}

float func_241(float fParam0, float fParam1, float fParam2)
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

void func_242()
{
	if (unk_0xBFCE58B2B3249999(iLocal_92, 0))
	{
		switch (iLocal_882)
		{
			case 0:
				if (!iLocal_884)
				{
					func_244("FM2_JSHLP1", 12000);
					iLocal_883 = unk_0xDFB7BFA6482FEE1E();
					iLocal_884 = 1;
				}
				if (unk_0x5C6675393464A814(0, 71))
				{
					fLocal_886 = (fLocal_886 + unk_0x7FF6ACE380ED166C());
				}
				if (fLocal_886 > 3f || (unk_0xDFB7BFA6482FEE1E() - iLocal_883) > 10000)
				{
					fLocal_886 = 0f;
					iLocal_882++;
				}
				break;
			
			case 1:
				if (func_243("FM2_JSHLP1"))
				{
					if (!iLocal_885)
					{
						unk_0x66AE54CE92457FEE(0);
						iLocal_885 = 1;
					}
				}
				else
				{
					iLocal_883 = unk_0xDFB7BFA6482FEE1E();
					iLocal_882++;
				}
				break;
			
			case 2:
				if ((unk_0xDFB7BFA6482FEE1E() - iLocal_883) > 2000)
				{
					iLocal_884 = 0;
					iLocal_885 = 0;
					iLocal_882++;
				}
				break;
			
			case 3:
				if (!iLocal_884)
				{
					func_244("FM2_JSHLP2", 12000);
					iLocal_883 = unk_0xDFB7BFA6482FEE1E();
					iLocal_884 = 1;
				}
				if (unk_0x5C6675393464A814(0, 72))
				{
					fLocal_886 = (fLocal_886 + unk_0x7FF6ACE380ED166C());
				}
				if (fLocal_886 > 1f || (unk_0xDFB7BFA6482FEE1E() - iLocal_883) > 10000)
				{
					iLocal_882++;
				}
				break;
			
			case 4:
				if (func_243("FM2_JSHLP2"))
				{
					if (!iLocal_885)
					{
						iLocal_885 = 1;
						unk_0x66AE54CE92457FEE(0);
					}
				}
				else
				{
					iLocal_882++;
				}
				break;
			
			case 5:
				if ((unk_0xDFB7BFA6482FEE1E() - iLocal_883) > 2000)
				{
					iLocal_884 = 0;
					iLocal_885 = 0;
					iLocal_882++;
				}
				break;
			
			case 6:
				if (!iLocal_884)
				{
					func_244("FM2_JSHLP3", 12000);
					iLocal_883 = unk_0xDFB7BFA6482FEE1E();
					iLocal_884 = 1;
				}
				if (unk_0x5C6675393464A814(0, 76))
				{
					fLocal_886 = (fLocal_886 + unk_0x7FF6ACE380ED166C());
				}
				if (fLocal_886 > 2f || (unk_0xDFB7BFA6482FEE1E() - iLocal_883) > 7500)
				{
					fLocal_886 = 0f;
					iLocal_882++;
				}
				break;
			
			case 7:
				if (func_243("FM2_JSHLP3"))
				{
					if (!iLocal_885)
					{
						unk_0x66AE54CE92457FEE(0);
						iLocal_885 = 1;
					}
				}
				else
				{
					iLocal_883 = unk_0xDFB7BFA6482FEE1E();
					iLocal_882++;
				}
				break;
		}
	}
	else if ((func_243("FM2_JSHLP1") || func_243("FM2_JSHLP2")) || func_243("FM2_JSHLP3"))
	{
		unk_0x66AE54CE92457FEE(1);
	}
}

bool func_243(char* sParam0)
{
	unk_0x4A4799828818A508(sParam0);
	return unk_0x0222F263F70347A8(0);
}

void func_244(char* sParam0, int iParam1)
{
	unk_0xDDEC6D09154BA73A(sParam0);
	unk_0x4A5DC2FF6E0B609F(0, 0, 1, iParam1);
}

void func_245()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	int iVar4;
	
	if (unk_0xBFCE58B2B3249999(iLocal_92, 0) && unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_92, 0))
	{
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			if ((unk_0xBFCE58B2B3249999(iLocal_99[iVar0], 0) && !unk_0xECEC7528A52B4EE8(iLocal_100[iVar0])) && unk_0x2C10A11A684CFE96(iLocal_100[iVar0], iLocal_99[iVar0]))
			{
				Var1 = { unk_0xD6E677FAD7521410(iLocal_99[iVar0], 1) };
				Var2 = { unk_0xD6E677FAD7521410(iLocal_92, 1) };
				if (vdist2(Var2, Local_561[0 /*7*/]) > 100f && vdist2(Var2, Local_561[1 /*7*/]) > 100f)
				{
					if (vdist2(Var2, Local_561[iVar0 /*7*/]) > 400f)
					{
						if (func_246(iLocal_99[iVar0], iLocal_92, iLocal_107, Var2, unk_0x4BB6BF4A85268A22(iLocal_92, 2)))
						{
							Local_561[iVar0 /*7*/] = { Var2 };
							Local_561[iVar0 /*7*/].f_3 = { unk_0x4BB6BF4A85268A22(iLocal_92, 2) };
							Local_561[iVar0 /*7*/].f_6 = vmag(unk_0x9F2928DF31D785C7(iLocal_99[iVar0]));
						}
					}
				}
				if (!func_231(Local_561[iVar0 /*7*/]) && Local_561[iVar0 /*7*/].f_2 < 1f)
				{
					if (!unk_0x98E18969B1D0C4AB(iLocal_99[iVar0]))
					{
						iLocal_563[iVar0] = unk_0xDFB7BFA6482FEE1E();
					}
					else if ((unk_0xDFB7BFA6482FEE1E() - iLocal_563[iVar0]) > 1000 && (unk_0xDFB7BFA6482FEE1E() - iLocal_562[iVar0]) > 2000)
					{
						if (!unk_0x3D6C3476988DE6E1(Local_561[iVar0 /*7*/], 3f) && !unk_0x3D6C3476988DE6E1(Var1, 3f))
						{
							fVar3 = 99f;
							iVar4 = 0;
							if (iVar0 == 0)
							{
								iVar4 = 1;
							}
							if (unk_0xBFCE58B2B3249999(iLocal_99[iVar4], 0))
							{
								fVar3 = vdist(unk_0xD6E677FAD7521410(iLocal_99[iVar4], 1), Local_561[iVar0 /*7*/]);
							}
							if ((((vdist2(Var1, Var2) > 225f && vdist2(Var1, Local_561[iVar0 /*7*/]) < vdist2(Var1, Var2)) && vdist2(Var2, Local_561[iVar0 /*7*/]) > 225f) && fVar3 > 5f) && func_246(iLocal_99[iVar0], iLocal_92, iLocal_107, Local_561[iVar0 /*7*/], Local_561[iVar0 /*7*/].f_3))
							{
								unk_0x91F94D2287684BDB(Local_561[iVar0 /*7*/], 3f, 0);
								unk_0xB7D390F8F682127B(Local_561[iVar0 /*7*/], 3f, 0, 0, 0, 0, 0, 0);
								unk_0x78CDDD1E6367978D(iLocal_99[iVar0], Local_561[iVar0 /*7*/], 1, 0, 0, 1);
								unk_0xBDDCDEC7B6205897(iLocal_99[iVar0], Local_561[iVar0 /*7*/].f_3, 2, 1);
								unk_0x49CB177958B472A8(iLocal_99[iVar0], (Local_561[iVar0 /*7*/].f_6 + 5f));
								unk_0xFF8EDECFEAFBF5F4(iLocal_100[iVar0], unk_0x7D2B9E6A64637269());
								unk_0x89E171705EA920DA(iLocal_99[iVar0], 1, 1, 0);
								iLocal_562[iVar0] = unk_0xDFB7BFA6482FEE1E();
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
}

int func_246(int iParam0, int iParam1, int iParam2, struct<3> Param3, struct<3> Param4)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	var uVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	struct<3> Var12;
	int iVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	
	if (unk_0x419E13582192CFEA(iParam2))
	{
		unk_0xC78A38E5FBC66080(unk_0x6471F4759775FCA4(iParam0), &Var3, &Var4);
		unk_0xC78A38E5FBC66080(unk_0x6471F4759775FCA4(iParam1), &Var5, &uVar6);
		fVar7 = unk_0x0BCA9ADE67DF9DD8((Var4.f_2 - Var3.f_2));
		fVar8 = unk_0x0BCA9ADE67DF9DD8((Var4.x - Var3.x));
		fVar9 = unk_0x0BCA9ADE67DF9DD8((Var4.f_1 - Var3.f_1));
		if (fVar8 > fVar7)
		{
			fVar10 = (fVar8 / 2f);
			fVar11 = (fVar10 - unk_0x0BCA9ADE67DF9DD8(Var3.f_2));
		}
		else
		{
			fVar10 = (fVar9 / 2f);
			fVar11 = (fVar10 - unk_0x0BCA9ADE67DF9DD8(Var3.x));
		}
		Var12.f_2 = (Var12.f_2 + (Var5.f_2 - Var3.f_2));
		unk_0x78CDDD1E6367978D(iParam2, Param3, 1, 0, 0, 1);
		unk_0xBDDCDEC7B6205897(iParam2, Param4, 2, 1);
		Var1 = { unk_0x9E695CE384C77EF0(iParam2, Vector((fVar11 * 1.25f), ((fVar9 / 2f) - (fVar10 * 0.75f)), 0f) + Var12) };
		Var2 = { unk_0x9E695CE384C77EF0(iParam2, Vector((fVar11 * 1.25f), ((-fVar9 / 2f) + (fVar10 * 0.75f)), 0f) + Var12) };
		uVar17 = unk_0x7AD43B94CD205A49(Var2, Var1, fVar10, 19, unk_0x7D2B9E6A64637269(), 4);
		if (unk_0xA2B3B271E2AE7A08(uVar17, &iVar13, &uVar14, &uVar15, &uVar16) != 2)
		{
		}
		if (iVar13 != 0)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_247(bool bParam0, float fParam1)
{
	if (bParam0)
	{
		unk_0xBEB13CBDB01F0B4C(fParam1);
		unk_0xDE52BEB5A3F6F081(0.35f);
		unk_0xBF9789ADF6CF01AF(0.3f);
		unk_0x0DBA91C89D6BE54B(0.25f);
		unk_0x528A718A7FBBF010(0.35f);
		unk_0xC96986F1796C024A(0.4f);
		unk_0x5FCD24E52968CF48(0.25f);
		unk_0x95A8119F6330B980(0.55f);
		unk_0x181DE92C2A0F6544(0.45f);
		unk_0xA5C4806DE775E4F4(0.5f);
		unk_0x49B677C7B968E373(0.6f);
		unk_0xB9F812171F4AEE3F(0.25f);
		unk_0xEE6F4CCD0FCF9E1E(0.75f);
	}
	else
	{
		unk_0xABFB736567EB67A2(fParam1);
	}
}

void func_248()
{
	Local_637[0 /*3*/] = { -1237.274f, -923.97f, 5.135533f };
	Local_638[0 /*3*/] = { -985.1348f, -1359.68f, -7.479084f };
	fLocal_639[0] = 23f;
	Local_637[1 /*3*/] = { -1003.908f, -914.4536f, -1.611186f };
	Local_638[1 /*3*/] = { -880.5477f, -1124.602f, 6.150022f };
	fLocal_639[1] = 29f;
	Local_637[2 /*3*/] = { -1169.471f, -1027.087f, 5.78508f };
	Local_638[2 /*3*/] = { -1003.961f, -932.3284f, -2.993861f };
	fLocal_639[2] = 29f;
	Local_637[3 /*3*/] = { -1116.554f, -1119.791f, 5.784778f };
	Local_638[3 /*3*/] = { -950.7761f, -1023.823f, -1.496439f };
	fLocal_639[3] = 29f;
	Local_637[4 /*3*/] = { -1062.391f, -1213.474f, -2.315868f };
	Local_638[4 /*3*/] = { -897.3085f, -1116.901f, 4.92553f };
	fLocal_639[4] = 29f;
}

void func_249()
{
	Local_632[0 /*3*/] = { -2033.74f, -1004.776f, 1f };
	Local_632[1 /*3*/] = { -1801.432f, -975.5541f, 1f };
	Local_632[2 /*3*/] = { -1796.255f, -988.166f, 1f };
	Local_632[3 /*3*/] = { -2012.245f, -1073.776f, 1f };
	Local_633[5 /*3*/] = { -1241.138f, -933.0004f, 1f };
	Local_633[4 /*3*/] = { -1227.203f, -924.2169f, 1f };
	Local_633[3 /*3*/] = { -1240.015f, -751.6861f, 1f };
	Local_633[2 /*3*/] = { -1431.875f, -747.558f, 1f };
	Local_633[1 /*3*/] = { Local_632[1 /*3*/] };
	Local_633[0 /*3*/] = { Local_632[2 /*3*/] };
	Local_634[0 /*3*/] = { -988.3516f, -908.0377f, 1f };
	Local_634[1 /*3*/] = { -866.9206f, -1116.04f, 1f };
	Local_634[2 /*3*/] = { -978.9424f, -1351.054f, 1f };
	Local_634[3 /*3*/] = { -1007.62f, -1362.316f, 1f };
	Local_634[4 /*3*/] = { Local_633[5 /*3*/] };
	Local_634[5 /*3*/] = { Local_633[4 /*3*/] };
	Local_635[0 /*3*/] = { Local_634[3 /*3*/] };
	Local_635[1 /*3*/] = { Local_634[2 /*3*/] };
	Local_635[2 /*3*/] = { -844.5858f, -1302.006f, 4.1001f };
	Local_635[3 /*3*/] = { -768.9856f, -1524.338f, 4.98f };
	Local_635[4 /*3*/] = { -1052.374f, -1553.313f, 13.0317f };
	Local_636[0 /*3*/] = { Local_635[4 /*3*/] };
	Local_636[1 /*3*/] = { Local_635[3 /*3*/] };
	Local_636[2 /*3*/] = { -1165.894f, -1923.179f, 2.5698f };
	Local_636[3 /*3*/] = { -1226.947f, -1873.531f, 4.8338f };
}

void func_250(bool bParam0)
{
	if (bParam0)
	{
		Global_21181 = 1;
	}
	else
	{
		Global_21181 = 0;
	}
}

void func_251(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

bool func_252()
{
	int iVar0;
	
	if (!unk_0x419E13582192CFEA(iLocal_91[0]))
	{
		unk_0x16E516CA9C88FF48(joaat("csb_porndudes"));
		if (unk_0xA9C0BBFB9CBB66F1(joaat("csb_porndudes")))
		{
			iLocal_91[0] = unk_0x0FDCFECB2EF2BC1C(26, joaat("csb_porndudes"), -2028.336f, -1026.387f, 0.0897f, 222.4424f, 1, 1);
			if (bLocal_115)
			{
				iVar0 = 0;
				while (iVar0 < 12)
				{
					unk_0x4170FE884DF7426D(iLocal_91[0], iVar0, Local_116[iVar0 /*3*/][0], Local_116[iVar0 /*3*/][1], 0);
					iVar0++;
				}
			}
			unk_0x472BD05C38FE7A6B(iLocal_91[0], 0);
			unk_0xA415F00D0E0DFBCE(iLocal_91[0], 17, 1);
			unk_0x63EC3B3BCF4B0D48(iLocal_91[0], 1.75f);
			unk_0xBE91B077ADADE97F(iLocal_91[0], 1);
			unk_0x8ADA462BC5F42FD8(iLocal_91[0], unk_0x7D2B9E6A64637269(), -1, 4, 3);
		}
	}
	return unk_0x419E13582192CFEA(iLocal_91[0]);
}

int func_253()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		unk_0x498685EB9132AF88(1, func_238(iVar1));
		unk_0x498685EB9132AF88(2, func_238(iVar1));
		if (!unk_0x9CF7186A344D26A9(1, func_238(iVar1)) || !unk_0x9CF7186A344D26A9(2, func_238(iVar1)))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

int func_254(int iParam0, bool bParam1)
{
	struct<3> Var0;
	float fVar1;
	var uVar2;
	
	unk_0x16E516CA9C88FF48(joaat("seashark"));
	unk_0x16E516CA9C88FF48(joaat("csb_porndudes"));
	if (unk_0xA9C0BBFB9CBB66F1(joaat("seashark")) && unk_0xA9C0BBFB9CBB66F1(joaat("csb_porndudes")))
	{
		if (!unk_0x419E13582192CFEA(iLocal_99[iParam0]))
		{
			if (iParam0 == 0)
			{
				if (bParam1)
				{
					Var0 = { -2023.64f, -1047.04f, 0.6916f };
					fVar1 = -108f;
				}
				else
				{
					Var0 = { -2024.716f, -1046.387f, 0f };
					fVar1 = -108.9627f;
				}
			}
			else if (bParam1)
			{
				Var0 = { -2027.4f, -1045.88f, 0.6916f };
				fVar1 = -108f;
			}
			else
			{
				Var0 = { -2021.2f, -1046.926f, 0f };
				fVar1 = -84.578f;
			}
			if (unk_0xC44700EBFFB89827(Var0, &uVar2))
			{
				Var0.f_2 = uVar2;
				iLocal_99[iParam0] = unk_0x170478CC84C8AE2F(joaat("seashark"), Var0, fVar1, 1, 1, 0);
				if (iParam0 == 0)
				{
					unk_0x473DA067A7AE5435(iLocal_99[iParam0], 3);
				}
				else
				{
					unk_0x473DA067A7AE5435(iLocal_99[iParam0], 1);
				}
				unk_0x056CEF866EF9291B(iLocal_99[iParam0], 100f);
				unk_0x4B7B525F9E13CE0C(iLocal_99[iParam0], bParam1);
			}
		}
		if (unk_0x419E13582192CFEA(iLocal_99[iParam0]) && unk_0xBFCE58B2B3249999(iLocal_99[iParam0], 0))
		{
			unk_0x8B58E7AC53EED9F1(iLocal_99[iParam0], 1);
			unk_0x3A653D4F5FA4B665(iLocal_99[iParam0], 0, 0, 0, 1, 1, 0, 0, 0);
			unk_0x5C052A30B9FCA449(iLocal_99[iParam0], 3);
			if (bParam1)
			{
				unk_0x89E171705EA920DA(iLocal_99[iParam0], 0, 1, 0);
			}
			else
			{
				unk_0x89E171705EA920DA(iLocal_99[iParam0], 1, 1, 0);
			}
			unk_0x1D43372AC14C8C87(iLocal_99[iParam0], 0);
		}
		if (!unk_0x419E13582192CFEA(iLocal_100[iParam0]) && unk_0xBFCE58B2B3249999(iLocal_99[iParam0], 0))
		{
			if (!bParam1)
			{
				iLocal_100[iParam0] = unk_0x42F3C85A00B4FC7B(iLocal_99[iParam0], 26, joaat("csb_porndudes"), -1, 1, 1);
			}
			else
			{
				iLocal_100[iParam0] = unk_0x0FDCFECB2EF2BC1C(26, joaat("csb_porndudes"), Vector(10.9101f, -1024.399f, -2068.027f) + Vector(0f, 0f, IntToFloat(iParam0)), 0f, 1, 1);
			}
		}
		if (((unk_0x419E13582192CFEA(iLocal_100[iParam0]) && !unk_0xECEC7528A52B4EE8(iLocal_100[iParam0])) && unk_0x419E13582192CFEA(iLocal_99[iParam0])) && unk_0xBFCE58B2B3249999(iLocal_99[iParam0], 0))
		{
			if (!bParam1)
			{
				unk_0xA2C015B68CE01357(iLocal_100[iParam0], 0);
				if (!unk_0xF41EB7643E61A928(iLocal_100[iParam0], iLocal_99[iParam0], 0))
				{
					unk_0xB1D85A6C23F2F945(iLocal_100[iParam0], iLocal_99[iParam0], -1);
				}
			}
			else
			{
				unk_0xA2C015B68CE01357(iLocal_100[iParam0], 1);
			}
			unk_0x36E99F43D00365FE(iLocal_100[iParam0], 1);
			unk_0x3A653D4F5FA4B665(iLocal_100[iParam0], 0, 0, 0, 1, 1, 0, 0, 0);
			unk_0xD82D50E4AC0D46B9(iLocal_100[iParam0], joaat("weapon_pistol"), -1, 0, 1);
			unk_0xA415F00D0E0DFBCE(iLocal_100[iParam0], 3, 0);
			unk_0xA415F00D0E0DFBCE(iLocal_100[iParam0], 1, 1);
			unk_0x095503B9F1CAC814(iLocal_100[iParam0], 0);
			unk_0x52261CF13B75FFA8(iLocal_100[iParam0], 2);
			unk_0xF8207455457B967E(iLocal_100[iParam0], 0);
			unk_0xA1217FA3D209873F(iLocal_100[iParam0], 15);
			unk_0x46EDFC827DC67D89(iLocal_100[iParam0], 1, 1);
			unk_0x8B58E7AC53EED9F1(iLocal_100[iParam0], 1);
			unk_0x13812A3531901D7E(iLocal_100[iParam0], 0);
			unk_0xC6E0F466730B731B(iLocal_100[iParam0], 1);
			unk_0x2271ED1E65FB75EE(iLocal_100[iParam0], iLocal_79);
			unk_0x2EB33FFA32BC9E49(iLocal_100[iParam0], 0);
			if (iParam0 == 0)
			{
				unk_0x4170FE884DF7426D(iLocal_100[iParam0], 0, 2, 0, 0);
				unk_0x4170FE884DF7426D(iLocal_100[iParam0], 3, 2, 0, 0);
				unk_0x4170FE884DF7426D(iLocal_100[iParam0], 4, 2, 0, 0);
				unk_0xC8749D706BBF16E1(iLocal_100[iParam0], 0, 0, 0, false);
			}
			else
			{
				unk_0x4170FE884DF7426D(iLocal_100[iParam0], 0, 1, 0, 0);
				unk_0x4170FE884DF7426D(iLocal_100[iParam0], 3, 1, 0, 0);
				unk_0x4170FE884DF7426D(iLocal_100[iParam0], 4, 1, 0, 0);
				unk_0xC8749D706BBF16E1(iLocal_100[iParam0], 1, 1, 0, false);
			}
		}
	}
	if ((((unk_0x419E13582192CFEA(iLocal_100[iParam0]) && unk_0x419E13582192CFEA(iLocal_99[iParam0])) && !unk_0xECEC7528A52B4EE8(iLocal_100[iParam0])) && unk_0xBFCE58B2B3249999(iLocal_99[iParam0], 0)) && (unk_0xF41EB7643E61A928(iLocal_100[iParam0], iLocal_99[iParam0], 0) || bParam1))
	{
		return 1;
	}
	return 0;
}

int func_255()
{
	unk_0x498685EB9132AF88(101, "famtwo");
	unk_0x498685EB9132AF88(102, "famtwo");
	unk_0x498685EB9132AF88(201, "famtwo");
	unk_0x498685EB9132AF88(202, "famtwo");
	unk_0x498685EB9132AF88(301, "famtwo");
	unk_0x498685EB9132AF88(302, "famtwo");
	unk_0x498685EB9132AF88(1, "famtwoCanalsAlt");
	unk_0x498685EB9132AF88(1, "famtwoplayer");
	if ((((((unk_0x9CF7186A344D26A9(101, "famtwo") && unk_0x9CF7186A344D26A9(102, "famtwo")) && unk_0x9CF7186A344D26A9(201, "famtwo")) && unk_0x9CF7186A344D26A9(202, "famtwo")) && unk_0x9CF7186A344D26A9(301, "famtwo")) && unk_0x9CF7186A344D26A9(302, "famtwo")) && unk_0x9CF7186A344D26A9(1, "famtwoCanalsAlt"))
	{
		func_237(&uLocal_640, 101, "famtwo");
		func_237(&uLocal_653, 102, "famtwo");
		func_237(&uLocal_666, 201, "famtwo");
		func_237(&uLocal_712, 202, "famtwo");
		func_237(&uLocal_758, 301, "famtwo");
		func_237(&uLocal_783, 302, "famtwo");
		func_237(&uLocal_834, 401, "famtwo");
		func_237(&uLocal_853, 402, "famtwo");
		func_237(&uLocal_809, 1, "famtwoCanalsAlt");
		return 1;
	}
	return 0;
}

int func_256()
{
	if (func_257(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), &Local_632, 0))
	{
		return 0;
	}
	if (func_257(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), &Local_633, 0))
	{
		return 1;
	}
	if (func_257(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), &Local_634, 0))
	{
		if (!unk_0xECEC7528A52B4EE8(iLocal_100[0]) && !unk_0xE50EB54E0F21BED0(iLocal_100[0], 0))
		{
			return 2;
		}
		else if (iLocal_878)
		{
			return 4;
		}
		else
		{
			return 3;
		}
	}
	if (func_257(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), &Local_635, 0))
	{
		return 5;
	}
	if (func_257(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), &Local_636, 0))
	{
		return 6;
	}
	return 7;
}

int func_257(struct<3> Param0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (*uParam1 < 3)
	{
	}
	iVar0 = 1;
	if (!func_258(Param0, *(uParam1[0 /*3*/]), *(uParam1[(*uParam1 - 1) /*3*/])))
	{
		if (bParam2)
		{
		}
		iVar0 = 0;
	}
	iVar1 = 0;
	while (iVar1 < (*uParam1 - 1))
	{
		if (!func_258(Param0, *(uParam1[iVar1 + 1 /*3*/]), *(uParam1[iVar1 /*3*/])))
		{
			if (bParam2)
			{
			}
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_258(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, struct<2> Param4, var uParam5)
{
	return (((Param4 - Param2) * (Param0.f_1 - Param2.f_1)) - ((Param4.f_1 - Param2.f_1) * (Param0 - Param2))) >= 0f;
}

void func_259()
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	int iVar4;
	
	switch (iLocal_159)
	{
		case 0:
			bLocal_902 = false;
			unk_0x498685EB9132AF88(1, "famtwoplayer");
			unk_0x498685EB9132AF88(101, "famtwo");
			unk_0x498685EB9132AF88(102, "famtwo");
			unk_0x068BDE31F7D112BB("missfam2_tracy_jetski");
			if (!unk_0x43DDCE9C73E22D9D())
			{
				unk_0xA566E488BA0A0A4C("family_2_mcs_3", 8);
				iLocal_159++;
			}
			else
			{
				iLocal_159 += 2;
			}
			iLocal_901 = 0;
			break;
		
		case -1:
			unk_0xD0051FAE2E1BB4C8("smboat");
			while (!unk_0xD17A6DB35E21C90C("smBoat"))
			{
				wait(0);
			}
			iLocal_159 = 3;
			iLocal_155 = 0;
			break;
		
		case 1:
			if (unk_0xE807694ABD40478F())
			{
				func_2("Michael", unk_0x7D2B9E6A64637269(), 0, 2);
				if (unk_0x419E13582192CFEA(iLocal_91[0]) && !unk_0xECEC7528A52B4EE8(iLocal_91[0]))
				{
					unk_0xF81CBD28BD382566("Guy_on_sofa", iLocal_91[0], 0);
				}
				if (unk_0x419E13582192CFEA(iLocal_91[1]) && !unk_0xECEC7528A52B4EE8(iLocal_91[1]))
				{
					unk_0xF81CBD28BD382566("Man_getting_wood", iLocal_91[1], 0);
				}
				if (unk_0x419E13582192CFEA(iLocal_91[2]) && !unk_0xECEC7528A52B4EE8(iLocal_91[2]))
				{
					func_2("Girl_on_sofa", iLocal_91[2], 0, 2);
				}
				if (unk_0x419E13582192CFEA(iLocal_91[3]) && !unk_0xECEC7528A52B4EE8(iLocal_91[3]))
				{
					func_2("Girl_being_chatted_up", iLocal_91[3], 0, 2);
				}
				if (unk_0x419E13582192CFEA(iLocal_88) && !unk_0xECEC7528A52B4EE8(iLocal_88))
				{
					func_2("Tracy", iLocal_88, 0, 2);
				}
				iLocal_159++;
			}
			break;
		
		case 2:
			iVar0 = 0;
			if (func_254(0, 1) && func_254(1, 1))
			{
				iVar0 = 1;
			}
			if (iVar0 && unk_0x9CF7186A344D26A9(1, "famtwoplayer"))
			{
				iLocal_159++;
				if (iLocal_155)
				{
					iLocal_159 = -1;
				}
			}
			break;
		
		case 3:
			if (func_199())
			{
				bLocal_115 = false;
				func_191(1, 1, 1, 0, 0, 0, 0);
				if (!unk_0xECEC7528A52B4EE8(iLocal_88))
				{
					unk_0xF2CEEA627AD5A24B(iLocal_88, "Tracy", 0, 0, 0);
				}
				if (unk_0xBFCE58B2B3249999(iLocal_92, 0))
				{
					unk_0x4B7B525F9E13CE0C(iLocal_92, false);
					unk_0xF2CEEA627AD5A24B(iLocal_92, "Michaels_seashark", 0, 0, 0);
					unk_0x89E171705EA920DA(iLocal_92, 0, 1, 0);
				}
				if (unk_0x419E13582192CFEA(iLocal_106))
				{
					unk_0xF2CEEA627AD5A24B(iLocal_106, "Prop_MP3_Dock", 0, 0, 0);
				}
				if (!unk_0xECEC7528A52B4EE8(iLocal_100[0]))
				{
					unk_0xA2C015B68CE01357(iLocal_100[0], 0);
					unk_0xF5143FB7B9EC876D(iLocal_100[0], 1);
					unk_0xF2CEEA627AD5A24B(iLocal_100[0], "Porn_Dude", 0, 0, 0);
				}
				if (!unk_0xECEC7528A52B4EE8(iLocal_100[1]))
				{
					unk_0xA2C015B68CE01357(iLocal_100[1], 0);
					unk_0xF5143FB7B9EC876D(iLocal_100[1], 1);
					unk_0xF2CEEA627AD5A24B(iLocal_100[1], "Porn_Dude^1", 0, 0, 0);
				}
				if (unk_0xBFCE58B2B3249999(iLocal_99[0], 0))
				{
					unk_0xF2CEEA627AD5A24B(iLocal_99[0], "Porn_Dude_seashark", 0, 0, 0);
				}
				if (unk_0xBFCE58B2B3249999(iLocal_99[1], 0))
				{
					unk_0xF2CEEA627AD5A24B(iLocal_99[1], "Porn_Dude_^1_seashark", 0, 0, 0);
				}
				if (unk_0x419E13582192CFEA(iLocal_91[0]) && !unk_0xECEC7528A52B4EE8(iLocal_91[0]))
				{
					unk_0x472BD05C38FE7A6B(iLocal_91[0], 0);
					unk_0xA415F00D0E0DFBCE(iLocal_91[0], 17, 1);
					unk_0x63EC3B3BCF4B0D48(iLocal_91[0], 1.75f);
					unk_0xBE91B077ADADE97F(iLocal_91[0], 1);
					unk_0x8ADA462BC5F42FD8(iLocal_91[0], unk_0x7D2B9E6A64637269(), -1, 4, 3);
					bLocal_115 = true;
					unk_0xF2CEEA627AD5A24B(iLocal_91[0], "Guy_on_sofa", 0, 0, 0);
				}
				if (unk_0x419E13582192CFEA(iLocal_91[1]) && !unk_0xECEC7528A52B4EE8(iLocal_91[1]))
				{
					unk_0xF2CEEA627AD5A24B(iLocal_91[1], "Man_getting_wood", 0, 0, 0);
				}
				if (unk_0x419E13582192CFEA(iLocal_91[2]) && !unk_0xECEC7528A52B4EE8(iLocal_91[2]))
				{
					unk_0xF2CEEA627AD5A24B(iLocal_91[2], "Girl_on_sofa", 0, 0, 0);
				}
				if (unk_0x419E13582192CFEA(iLocal_91[3]) && !unk_0xECEC7528A52B4EE8(iLocal_91[3]))
				{
					unk_0xF2CEEA627AD5A24B(iLocal_91[3], "Girl_being_chatted_up", 0, 0, 0);
				}
				unk_0x7E1C1B2FCF372776(2048);
				unk_0x1036762BD3781C84();
				unk_0x66AE54CE92457FEE(1);
				unk_0xEBDFE18B261316C1(4);
				func_155();
				func_204(7);
				func_190();
				unk_0x8A54885A635DC8D1("FAM2_NECK_GRAB");
				bLocal_899 = false;
				iLocal_900 = 0;
				iLocal_159++;
			}
			break;
		
		case 4:
			if (!unk_0xE0A6F16F546C8274() && !unk_0x07BE48DF95787FCB())
			{
				unk_0x6E1E3A5B1F9AB95B(500);
			}
			unk_0x6AF7EE4DD9F8B944(-2006.247f, -1043.832f, -1.481001f, 200f, 1, 0, 0, 0);
			iLocal_159++;
			break;
		
		case 5:
			if (unk_0xBFCE58B2B3249999(iLocal_92, 0))
			{
				if (unk_0x30700B4AA35835FD("Tracy", 0))
				{
					if (!unk_0xF41EB7643E61A928(iLocal_88, iLocal_92, 0))
					{
						unk_0xB1D85A6C23F2F945(iLocal_88, iLocal_92, 0);
						unk_0x8F160110753EB17B(iLocal_88, 1);
						unk_0xE37EB80DFB0D31FB(iLocal_88, 0, 0);
					}
				}
				if (unk_0x4C6F400CF30C1680(0))
				{
				}
				if (unk_0x30700B4AA35835FD("Porn_Dude", 0))
				{
				}
				if (unk_0x30700B4AA35835FD("Porn_Dude^1", 0))
				{
				}
				if (unk_0x30700B4AA35835FD("Porn_Dude_seashark", 0))
				{
				}
				if (unk_0x30700B4AA35835FD("Porn_Dude^1_seashark", 0))
				{
				}
				if (unk_0x30700B4AA35835FD("Michaels_seashark", 0))
				{
					if (!unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_92, 0))
					{
						unk_0xB1D85A6C23F2F945(unk_0x7D2B9E6A64637269(), iLocal_92, -1);
					}
					func_247(1, 0f);
					unk_0x069557E67CC67C29(iLocal_92, 1, "famtwoplayer", 1);
					unk_0xEA5C7C61843816D5(iLocal_92, 0.66f);
					unk_0xDF23DCD7A3E1B7A5(0f);
					unk_0x3A13FD2813C8251F(0f, 1065353216);
					unk_0x78CDDD1E6367978D(iLocal_92, Local_129, 1, 0, 0, 1);
					unk_0xCD37A28258D70638(iLocal_92, fLocal_130);
					unk_0x89E171705EA920DA(iLocal_92, 1, 1, 0);
					unk_0x49CB177958B472A8(iLocal_92, 15f);
					unk_0x50B76EE36FBE865F(iLocal_92);
					unk_0xC44700EBFFB89827(Local_129, &fLocal_903);
					if (unk_0xBFCE58B2B3249999(iLocal_92, 0))
					{
						unk_0x78CDDD1E6367978D(iLocal_92, Local_129.x, Local_129.f_1, fLocal_903, 1, 0, 0, 1);
						unk_0xCD37A28258D70638(iLocal_92, fLocal_130);
						unk_0x89E171705EA920DA(iLocal_92, 1, 1, 0);
						unk_0x49CB177958B472A8(iLocal_92, 17f);
						unk_0xDF23DCD7A3E1B7A5(0f);
						unk_0x3A13FD2813C8251F(0f, 1065353216);
					}
					iVar1 = 0;
					while (iVar1 < iLocal_99)
					{
						if (((unk_0x419E13582192CFEA(iLocal_99[iVar1]) && unk_0xBFCE58B2B3249999(iLocal_99[iVar1], 0)) && unk_0x419E13582192CFEA(iLocal_100[iVar1])) && !unk_0xECEC7528A52B4EE8(iLocal_100[iVar1]))
						{
							unk_0xA2C015B68CE01357(iLocal_100[iVar1], 0);
							unk_0xF5143FB7B9EC876D(iLocal_100[iVar1], 1);
							unk_0x4B7B525F9E13CE0C(iLocal_99[iVar1], false);
							if (!unk_0xF41EB7643E61A928(iLocal_100[iVar1], iLocal_99[iVar1], 0))
							{
								unk_0xB1D85A6C23F2F945(iLocal_100[iVar1], iLocal_99[iVar1], -1);
							}
							Var2 = { unk_0xD6E677FAD7521410(iLocal_99[iVar1], 1) };
							unk_0xC44700EBFFB89827(Var2, &fVar3);
							unk_0x78CDDD1E6367978D(iLocal_99[iVar1], Var2.x, Var2.f_1, fVar3, 1, 0, 0, 1);
							unk_0x49CB177958B472A8(iLocal_99[iVar1], (10f + (2f * to_float(iVar1))));
						}
						iVar1++;
					}
					if (!unk_0x80C744B6449E4AEB())
					{
						unk_0xA5C5D178B75F53C6(0);
						uLocal_112 = unk_0xE862092047FB4664("DEFAULT_SPLINE_CAMERA", 0);
						unk_0xAB0596591A2DEF66(uLocal_112, 1);
						unk_0x97862ED5AE1B8593(uLocal_112, unk_0x4EE8324979A597B2("DEFAULT_SCRIPTED_CAMERA", -2023.174f, -1052.98f, 1.529f, 2.1162f, 0f, -39.8484f, 50f, 1, 2), 0, 3);
						unk_0x97862ED5AE1B8593(uLocal_112, unk_0x4EE8324979A597B2("DEFAULT_SCRIPTED_CAMERA", -2008.224f, -1037.217f, 1.8555f, -2.0921f, 0.0684f, -60.6791f, 50f, 1, 2), 1400, 1);
						unk_0x97862ED5AE1B8593(uLocal_112, unk_0x4EE8324979A597B2("DEFAULT_SCRIPTED_CAMERA", -1985.437f, -1024.533f, 2.0868f, -3.9139f, 0f, -78.7979f, 50f, 1, 2), 1850, 3);
						unk_0x6FA8221C9D2ECB46(uLocal_112, 1);
						unk_0x5C062C9AFC66C513(uLocal_112, unk_0x7D2B9E6A64637269(), 0f, 0f, 0.3f, 1);
						unk_0x09F9466B03D29D2D(true, 0, 3000, 1, 0, 0);
						func_185(&uLocal_521, unk_0x7D2B9E6A64637269(), 0, 20f, 1000, 1000, 500, 0, 1045220557);
						settimerb(0);
					}
					else
					{
						bLocal_902 = true;
						unk_0x50B76EE36FBE865F(iLocal_92);
						func_247(1, 0.1f);
						unk_0xC44700EBFFB89827(Local_129, &fLocal_903);
						if (unk_0xBFCE58B2B3249999(iLocal_92, 0))
						{
							unk_0x78CDDD1E6367978D(iLocal_92, Local_129.x, Local_129.f_1, fLocal_903, 1, 0, 0, 1);
							unk_0xCD37A28258D70638(iLocal_92, fLocal_130);
							unk_0x89E171705EA920DA(iLocal_92, 1, 1, 0);
							unk_0x49CB177958B472A8(iLocal_92, 18f);
							unk_0xDF23DCD7A3E1B7A5(0f);
							unk_0x3A13FD2813C8251F(0f, 1065353216);
						}
					}
				}
			}
			if (!bLocal_899)
			{
				if (unk_0x8A54885A635DC8D1("FAM2_NECK_GRAB") && unk_0x5505579F3F8D58CB() > 31250)
				{
					unk_0xFB8A6909539A30B1("FAM2_NECK_GRAB");
					bLocal_899 = true;
				}
			}
			if (!iLocal_900)
			{
				if (unk_0x5505579F3F8D58CB() > 9700)
				{
					unk_0xCDF87F9AAD28040F("SE_FAMILY_2_BOAT_RADIO", 0);
					iLocal_900 = 1;
				}
			}
			if (unk_0x5505579F3F8D58CB() > 37500)
			{
				if (!iLocal_904)
				{
					func_247(1, 1065353216);
					iLocal_904 = 1;
				}
			}
			if (!iLocal_901)
			{
				if (unk_0x5505579F3F8D58CB() > 45000)
				{
					if (!unk_0xECEC7528A52B4EE8(iLocal_91[0]))
					{
						unk_0x28A5BAF912B4E14D(iLocal_91[0], -2097.867f, -973.0261f, -1f, 2f, -1, 1193033728, 1056964608);
						iLocal_901 = 1;
					}
				}
			}
			if (!bLocal_115)
			{
				if (unk_0x419E13582192CFEA(unk_0x56E8586DBDCE6FE2("Guy_on_sofa", 0)) && !unk_0xECEC7528A52B4EE8(unk_0xFAA5505029C4B5A6(unk_0x56E8586DBDCE6FE2("Guy_on_sofa", 0))))
				{
					iVar4 = 0;
					while (iVar4 < 12)
					{
						Local_116[iVar4 /*3*/][0] = unk_0x094C1D2DFE050D6E(unk_0xFAA5505029C4B5A6(unk_0x56E8586DBDCE6FE2("Guy_on_sofa", 0)), iVar4);
						Local_116[iVar4 /*3*/][1] = unk_0x288277F22D527487(unk_0xFAA5505029C4B5A6(unk_0x56E8586DBDCE6FE2("Guy_on_sofa", 0)), iVar4);
						iVar4++;
					}
					bLocal_115 = true;
				}
			}
			else if (!unk_0x419E13582192CFEA(iLocal_91[0]))
			{
				func_252();
			}
			if (unk_0x4C6F400CF30C1680(0))
			{
			}
			if (!unk_0x43DDCE9C73E22D9D())
			{
				unk_0xC7EF1AC7845F532D();
				unk_0x6C59944A0530A574(unk_0x7D2B9E6A64637269(), 0, 0);
				if (unk_0x419E13582192CFEA(iLocal_106))
				{
					unk_0x04F4D55F2C0C756D(&iLocal_106);
					unk_0x824F744352C8BC82(joaat("prop_mp3_dock"));
				}
				if (!bLocal_899)
				{
					unk_0xFB8A6909539A30B1("FAM2_CS_SKIP");
				}
				func_191(0, 1, 1, 0, 0, 0, 0);
				func_188();
				unk_0xA61C8CB67DBA91CD(unk_0x1146A9AE09CE2B14(), 1, 0, 0);
				if (!bLocal_899)
				{
					unk_0x08918C6897982748("FAM2_GRAB_NECK");
				}
				settimera(0);
				if (!bLocal_902)
				{
					iLocal_159++;
				}
				else
				{
					if (unk_0xBFCE58B2B3249999(iLocal_92, 0) && unk_0xAB0BB1BDD76B67DC(iLocal_92))
					{
						unk_0x50B76EE36FBE865F(iLocal_92);
					}
					func_207(7);
				}
			}
			break;
		
		case 6:
			if (unk_0x84BDC1D2DDA37898() != 4 && unk_0xC7E4E71866B09979() != 4)
			{
				if (timerb() > 2350)
				{
					unk_0x09F9466B03D29D2D(false, 1, 1500, 0, 0, 0);
				}
				if (timerb() > 2500)
				{
					if (unk_0xBFCE58B2B3249999(iLocal_92, 0))
					{
						if (unk_0xAB0BB1BDD76B67DC(iLocal_92))
						{
							unk_0x50B76EE36FBE865F(iLocal_92);
						}
						func_207(7);
					}
				}
			}
			else if (timerb() > 2350)
			{
				if (func_181(&uLocal_521, 1, 1, 1, 0, 1, 0))
				{
					unk_0x09F9466B03D29D2D(false, 1, 1500, 0, 0, 0);
					if (unk_0xAB0BB1BDD76B67DC(iLocal_92))
					{
						unk_0x50B76EE36FBE865F(iLocal_92);
					}
					func_260(&uLocal_521);
					func_207(7);
				}
			}
			break;
	}
}

void func_260(var uParam0)
{
	func_182(uParam0);
	*uParam0 = 0;
	uParam0->f_9 = { 0f, 0f, 0f };
}

void func_261()
{
	int iVar0;
	bool bVar1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	
	func_270();
	if (((unk_0x419E13582192CFEA(iLocal_92) && !unk_0xBFCE58B2B3249999(iLocal_92, 0)) || (unk_0x419E13582192CFEA(iLocal_99[0]) && !unk_0xBFCE58B2B3249999(iLocal_99[0], 0))) || (unk_0x419E13582192CFEA(iLocal_99[1]) && !unk_0xBFCE58B2B3249999(iLocal_99[1], 0)))
	{
		func_104("FM2_TSPOOK");
	}
	if (!unk_0x419E13582192CFEA(iLocal_106))
	{
		func_269();
	}
	iVar0 = 0;
	while (iVar0 < iLocal_99)
	{
		if (!unk_0x419E13582192CFEA(iLocal_99[iVar0]))
		{
			func_254(iVar0, 1);
		}
		iVar0++;
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iLocal_91)
	{
		if (unk_0x419E13582192CFEA(iLocal_91[iVar0]))
		{
			if (unk_0xECEC7528A52B4EE8(iLocal_91[iVar0]) || unk_0xE50EB54E0F21BED0(iLocal_91[iVar0], 0))
			{
				func_104("FM2_TSPOOK");
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		if (((((((((((((((((unk_0x3E72EB0926A107F9(-2033.821f, -1031.864f, 4.89f, 5f, 1) || unk_0x16B4C536089C3CAD(4, -2033.821f, -1031.864f, 4.89f, 10f)) || unk_0x16B4C536089C3CAD(0, -2033.821f, -1031.864f, 4.89f, 10f)) || unk_0x16B4C536089C3CAD(1, -2033.821f, -1031.864f, 4.89f, 10f)) || unk_0x16B4C536089C3CAD(20, -2033.821f, -1031.864f, 4.89f, 10f)) || unk_0x16B4C536089C3CAD(19, -2033.821f, -1031.864f, 4.89f, 10f)) || unk_0x16B4C536089C3CAD(3, -2033.821f, -1031.864f, 4.89f, 10f)) || unk_0x16B4C536089C3CAD(15, -2033.821f, -1031.864f, 4.89f, 10f)) || unk_0x16B4C536089C3CAD(2, -2033.821f, -1031.864f, 4.89f, 10f)) || unk_0x24EE3332DFDF21FE(-2033.821f, -1031.864f, 4.89f, joaat("weapon_smokegrenade"), 5f, 1)) || unk_0x24EE3332DFDF21FE(-2033.821f, -1031.864f, 4.89f, joaat("weapon_rpg"), 5f, 1)) || unk_0x24EE3332DFDF21FE(-2033.821f, -1031.864f, 4.89f, joaat("weapon_grenade"), 5f, 1)) || unk_0x24EE3332DFDF21FE(-2033.821f, -1031.864f, 4.89f, joaat("weapon_grenadelauncher"), 5f, 1)) || unk_0x24EE3332DFDF21FE(-2033.821f, -1031.864f, 4.89f, joaat("weapon_grenadelauncher_smoke"), 5f, 1)) || unk_0x24EE3332DFDF21FE(-2033.821f, -1031.864f, 4.89f, joaat("weapon_smokegrenade"), 5f, 1)) || unk_0x24EE3332DFDF21FE(-2033.821f, -1031.864f, 4.89f, joaat("weapon_bzgas"), 5f, 1)) || unk_0x24EE3332DFDF21FE(-2033.821f, -1031.864f, 4.89f, joaat("weapon_molotov"), 5f, 1)) || (unk_0xAE6D88ADF91EE5A4(unk_0x7D2B9E6A64637269(), Vector(4.89f, -1031.864f, -2033.821f) - Vector(30f, 30f, 30f), Vector(4.89f, -1031.864f, -2033.821f) + Vector(30f, 30f, 30f), 0, 1) && !unk_0x8E93627D38C90C19(unk_0x7D2B9E6A64637269())))
		{
			func_104("FM2_TSPOOK");
		}
	}
	if (!unk_0x575B7C28D81C0B4D(uLocal_102))
	{
		uLocal_102 = func_215(-2034.37f, -1032.23f, 4.88f, 0);
		unk_0xFA3E6ADC3E5D386E(uLocal_102, 3);
		unk_0xDD205B87CDFD0C1B(uLocal_102, 1f);
		unk_0xDD944E3FD2028A48(uLocal_102, "FM2_YACHTL");
	}
	switch (iLocal_159)
	{
		case 0:
			if (!func_243("FM2_DIVOFF"))
			{
				func_244("FM2_DIVOFF", -1);
			}
			unk_0x2DC2890038BFF758(0f, 10f, 4);
			func_158(&Local_549, cLocal_202, "FAM2_STOP", 8, 0, 0, 0);
			func_268(207, 0);
			func_204(6);
			settimera(0);
			if (unk_0x0D901EFDFD7EF9D5(0))
			{
				sLocal_610[2] = "FM2_USWIM1_KM";
				sLocal_610[0] = "FM2_SWIM_KM";
			}
			else if (unk_0x5F95E51ABC3FC59A(0) == 4)
			{
				sLocal_610[2] = "FM2_SWIM_FP";
				sLocal_610[0] = "FM2_SWIM_FP";
			}
			else
			{
				sLocal_610[2] = "FM2_USWIM1";
				sLocal_610[0] = "FM2_SWIM";
			}
			sLocal_610[3] = "FM2_USWIM2";
			sLocal_610[1] = "FM2_DIVE";
			sLocal_610[4] = "FM2_STAT1";
			sLocal_610[5] = "FM2_DROWN";
			iLocal_614[0] = "shouting_jimmy_idle_a";
			iLocal_614[1] = "shouting_jimmy_idle_b";
			iLocal_614[2] = "shouting_jimmy_idle_c";
			iLocal_615 = 0;
			iLocal_159++;
			iLocal_168 = -1;
			iLocal_618 = -1;
			iLocal_611 = -1;
			iLocal_616 = 0;
			bLocal_620 = false;
			iLocal_619 = 0;
			iLocal_178 = 0;
			unk_0x068BDE31F7D112BB("missfam2ig_3");
			unk_0x5E84945E26CAEF1F(0.1f);
			if (iLocal_155)
			{
				iLocal_159 = -1;
			}
			iLocal_617 = 1;
			break;
		
		case -1:
			unk_0xD0051FAE2E1BB4C8("smboat");
			while (!unk_0xD17A6DB35E21C90C("smBoat"))
			{
				wait(0);
			}
			if (unk_0x8B6A925F148E0E94())
			{
				unk_0xEE90D1369E1800A2(unk_0x7D2B9E6A64637269(), -1115154469, 0, 0, 0);
				unk_0x8F00E6BF3D6A18D3(unk_0x1146A9AE09CE2B14(), 3f, iLocal_171, 0, 1, 0);
			}
			iLocal_159 = 1;
			iLocal_155 = 0;
			break;
		
		case 1:
			if (unk_0x8B6A925F148E0E94() && !unk_0x07BE48DF95787FCB())
			{
				unk_0x6E1E3A5B1F9AB95B(500);
			}
			if (iLocal_617)
			{
				unk_0x297D19A25D01587C(unk_0x7D2B9E6A64637269(), 3f);
				if (timera() < 1000 || unk_0x591190E69BE43117(unk_0x7D2B9E6A64637269(), -1871.083f, -1203.116f, 13.01658f, 2.5f, 2.5f, 3f, 0, 1, 0))
				{
					iLocal_617 = 0;
				}
			}
			if (iLocal_618 == -1 && (!func_177() || unk_0xC82CD1DB42480082(203) == 0))
			{
				func_151("FM2_YACHT", 7500, 1);
				iLocal_618 = unk_0xDFB7BFA6482FEE1E();
			}
			fVar2 = vdist2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(iLocal_89, 1));
			if (unk_0x0EC2B29D4172D225("missfam2ig_3"))
			{
				if (vdist(unk_0xD6E677FAD7521410(iLocal_89, 1), -1859.264f, -1216.776f, 13.0174f) > 3f)
				{
					if (unk_0x4E8DA737B686529A(iLocal_89, 713668775) != 1)
					{
						unk_0xCA089CD1A17D76DF(iLocal_89);
						iLocal_611 = 0;
						unk_0x45B1B4E55BF15523(iLocal_89, -1859.264f, -1216.776f, 13.0174f, 1f, -1, 0.25f, 0, 1193033728);
					}
				}
				else if (fVar2 < 900f)
				{
					if (!unk_0x836F48E8C4A773BF(iLocal_89, unk_0x7D2B9E6A64637269(), 10f))
					{
						if (unk_0x4E8DA737B686529A(iLocal_89, -875674219) != 1 && unk_0x698F51FB33ADAF7B(iLocal_89, "missfam2ig_3", "shouting_jimmy_base", 3))
						{
							unk_0xCA089CD1A17D76DF(iLocal_89);
							unk_0xB0C1A43193C25F7A(iLocal_89, unk_0x7D2B9E6A64637269(), 0);
							unk_0x8ADA462BC5F42FD8(iLocal_89, unk_0x7D2B9E6A64637269(), -1, 0, 2);
							iLocal_611 = 0;
						}
					}
					else
					{
						switch (iLocal_611)
						{
							case -1:
								unk_0x068BDE31F7D112BB("missfam2ig_3");
								if (unk_0x0EC2B29D4172D225("missfam2ig_3"))
								{
									iLocal_611 = 0;
								}
								break;
							
							case 0:
								if ((unk_0xDFB7BFA6482FEE1E() - iLocal_613) > 1000)
								{
									if (!unk_0x698F51FB33ADAF7B(iLocal_89, "missfam2ig_3", "shouting_jimmy_base", 3))
									{
										unk_0x4261814A9A26E86F(iLocal_89, "missfam2ig_3", "shouting_jimmy_base", 4f, -4f, -1, 49, 0, 0, 0, 0);
									}
									else
									{
										iLocal_611++;
									}
									iLocal_613 = unk_0xDFB7BFA6482FEE1E();
								}
								break;
							
							case 1:
								if ((((unk_0xDFB7BFA6482FEE1E() - iLocal_618) > 5000 || unk_0xC82CD1DB42480082(203) == 0) && fVar2 < 900f) && (iLocal_168 == -1 || (unk_0xDFB7BFA6482FEE1E() - iLocal_168) > 10000))
								{
									unk_0xCA089CD1A17D76DF(iLocal_89);
									if (func_158(&Local_549, cLocal_202, "FAM2_STOP", 8, 0, 0, 0))
									{
										unk_0x4261814A9A26E86F(iLocal_89, "missfam2ig_3", iLocal_614[iLocal_612], 4f, -4f, -1, 48, 0, 0, 0, 0);
										iLocal_168 = unk_0xDFB7BFA6482FEE1E();
										iLocal_611++;
									}
								}
								break;
							
							case 2:
								if ((unk_0xDFB7BFA6482FEE1E() - iLocal_168) > 1000)
								{
									if (!unk_0x698F51FB33ADAF7B(iLocal_89, "missfam2ig_3", iLocal_614[iLocal_612], 3))
									{
										unk_0xCA089CD1A17D76DF(iLocal_89);
										iLocal_612++;
										if (iLocal_612 >= iLocal_614)
										{
											iLocal_612 = 0;
										}
										iLocal_611 = 0;
									}
								}
								break;
							}
						}
					}
			}
			if (!unk_0xB30CD10E2CD1B67D("FAMILY_2_DIVE_INTO_WATER"))
			{
				if (unk_0x84D40903BD31E81F(unk_0x7D2B9E6A64637269()))
				{
					unk_0xB84B43B766630B5C("FAMILY_2_DIVE_INTO_WATER");
				}
			}
			if (unk_0x0297E633EADA2182(unk_0x7D2B9E6A64637269()) || vdist(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), Local_209) < 100f)
			{
				Var3 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) };
				if (Var3.f_2 < 2f)
				{
					if (unk_0x419E13582192CFEA(iLocal_89))
					{
						unk_0x0F3BD19FF11738D3(&iLocal_89);
					}
					if (unk_0x419E13582192CFEA(iLocal_93))
					{
						unk_0x795957CD3A0042C8(&iLocal_93);
					}
					if (unk_0x419E13582192CFEA(iLocal_94))
					{
						unk_0x795957CD3A0042C8(&iLocal_94);
					}
				}
				if (unk_0xB30CD10E2CD1B67D("FAMILY_2_DIVE_INTO_WATER"))
				{
					unk_0xC0BBE340BE2AA02D("FAMILY_2_DIVE_INTO_WATER");
				}
				iLocal_159++;
				settimera(0);
				if (func_243("FM2_DIVOFF"))
				{
					unk_0x66AE54CE92457FEE(0);
				}
				unk_0xF9135F131C423364("missfam2ig_3");
				unk_0xFB8A6909539A30B1("FAM2_SPLASH");
			}
			break;
		
		case 2:
			if (!func_243("FM2_DIVOFF") && timera() > 3000)
			{
				unk_0x8FF71A24509DA743("DisableReplayScriptStreamRecording", 1);
				unk_0x2DC2890038BFF758(3f, 10f, 4);
				iLocal_159++;
			}
			break;
		
		case 3:
			if (!iLocal_616)
			{
				if (unk_0xC1E412BF2D1D6DA1("FAM2_BOAT_PARTY_MASTER", 0))
				{
					unk_0x218077812CB5CC2A(-2032.599f, -1032.639f, 4.8831f);
					iLocal_616 = 1;
				}
			}
			func_263();
			if (unk_0x32FBDF1C2B7942F9(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0x0A0080A9EB535EC7(unk_0x7D2B9E6A64637269()))
				{
					if (!bLocal_620)
					{
						bLocal_620 = true;
					}
				}
				else if (bLocal_620)
				{
					if (!unk_0xB30CD10E2CD1B67D("FAMILY_2_SWIM_TO_YACHT"))
					{
						unk_0xB84B43B766630B5C("FAMILY_2_SWIM_TO_YACHT");
					}
				}
			}
			if (((unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -2033.124f, -1042.981f, 0f, -2028.863f, -1028.328f, 8.97435f, 18.25f, 0, 1, 0) || unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -2017.999f, -1035.053f, 5.946373f, -2023.154f, -1033.719f, 1.287564f, 3.25f, 0, 1, 0)) && !unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0)) && !unk_0x0297E633EADA2182(unk_0x7D2B9E6A64637269()))
			{
				unk_0x84236CF02FFEC68D();
				if (unk_0xB30CD10E2CD1B67D("FAMILY_2_SWIM_TO_YACHT"))
				{
					unk_0xC0BBE340BE2AA02D("FAMILY_2_SWIM_TO_YACHT");
				}
				unk_0x2DC2890038BFF758(5f, 4f, 3);
				func_207(6);
			}
			if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0) && unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -2030.86f, -1035.417f, 7.882243f, -2006.247f, -1043.832f, -1.481001f, 21.25f, 0, 1, 0))
			{
				unk_0xFB8A6909539A30B1("FAM2_NEAR_YACHT");
				iLocal_615 = 1;
				iLocal_159++;
			}
			if (!iLocal_615)
			{
				if (vdist2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), -2017.155f, -1040.214f, 1.4499f) < 400f && !unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
				{
					unk_0xFB8A6909539A30B1("FAM2_NEAR_YACHT");
					iLocal_615 = 1;
				}
			}
			break;
		
		case 4:
			if (unk_0xBFCE58B2B3249999(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0), 0))
			{
				if (func_208(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0), 1093140480, 1, 1056964608, 0, 1, 0))
				{
					unk_0x8FF71A24509DA743("DisableReplayScriptStreamRecording", 0);
					unk_0x84236CF02FFEC68D();
					if (unk_0xB30CD10E2CD1B67D("FAMILY_2_SWIM_TO_YACHT"))
					{
						unk_0xC0BBE340BE2AA02D("FAMILY_2_SWIM_TO_YACHT");
					}
					unk_0x2DC2890038BFF758(0f, 8f, 3);
					func_207(6);
				}
			}
			break;
	}
	if (func_262(&uLocal_606, &iLocal_604, &uLocal_605))
	{
		func_104("FM2_JSPOOK");
	}
	if (unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) > 0)
	{
		if (unk_0x419E13582192CFEA(iLocal_89) && vdist(unk_0xD6E677FAD7521410(iLocal_89, 1), unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1)) < 30f)
		{
			func_104("FM2_JSPOOK");
		}
		else
		{
			func_147();
		}
	}
	if (!iLocal_619)
	{
		if (unk_0xBFCE58B2B3249999(iLocal_92, 0))
		{
			unk_0x5C052A30B9FCA449(iLocal_92, 3);
			iLocal_619 = 1;
		}
	}
	if (unk_0x0297E633EADA2182(unk_0x7D2B9E6A64637269()))
	{
		unk_0x366E7F593105797F(0, 23, 1);
	}
	if (vdist2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), Local_209) > 250000f)
	{
		func_104("FM2_TRAAB");
	}
	if (!unk_0xECEC7528A52B4EE8(iLocal_89))
	{
		Var4 = { unk_0xD6E677FAD7521410(iLocal_89, 1) };
		fVar5 = Var4.f_2;
		if (fVar5 < 10f)
		{
			func_104("FM2_JIMHIT");
		}
	}
}

int func_262(var uParam0, int iParam1, var uParam2)
{
	var uVar0;
	
	if (unk_0x419E13582192CFEA(iLocal_89))
	{
		if (!*uParam0)
		{
			if (unk_0x7F716EA884E75E49(unk_0x7D2B9E6A64637269()) || unk_0x3E72EB0926A107F9(unk_0xD6E677FAD7521410(iLocal_89, 1), 10f, 1))
			{
				*uParam0 = 1;
			}
		}
		else if ((unk_0xDFB7BFA6482FEE1E() - *uParam2) > 200)
		{
			*iParam1++;
			*uParam2 = unk_0xDFB7BFA6482FEE1E();
			*uParam0 = 0;
		}
		if ((*iParam1 > 0 && !*uParam0) && (unk_0xDFB7BFA6482FEE1E() - *uParam2) > 1000)
		{
			*iParam1 = (*iParam1 - 1);
		}
		unk_0xBDC364B886846D11(unk_0x7D2B9E6A64637269(), &uVar0, 1);
		if (!func_177() && (unk_0xDFB7BFA6482FEE1E() - iLocal_169) > 7500)
		{
			func_202(iLocal_89, "GENERIC_SHOCKED_MED", "Jimmy", 3);
			iLocal_169 = unk_0xDFB7BFA6482FEE1E();
		}
		if ((((((((*iParam1 > 5 || unk_0x93B9F446C9E48692(unk_0xD6E677FAD7521410(iLocal_89, 1) + Vector(5f, 10f, 10f), unk_0xD6E677FAD7521410(iLocal_89, 1) - Vector(5f, 10f, 10f), joaat("weapon_grenade"), 0)) || unk_0x93B9F446C9E48692(unk_0xD6E677FAD7521410(iLocal_89, 1) + Vector(5f, 10f, 10f), unk_0xD6E677FAD7521410(iLocal_89, 1) - Vector(5f, 10f, 10f), joaat("weapon_grenadelauncher"), 0)) || unk_0x93B9F446C9E48692(unk_0xD6E677FAD7521410(iLocal_89, 1) + Vector(5f, 10f, 10f), unk_0xD6E677FAD7521410(iLocal_89, 1) - Vector(5f, 10f, 10f), joaat("weapon_grenadelauncher_smoke"), 0)) || unk_0x93B9F446C9E48692(unk_0xD6E677FAD7521410(iLocal_89, 1) + Vector(5f, 10f, 10f), unk_0xD6E677FAD7521410(iLocal_89, 1) - Vector(5f, 10f, 10f), joaat("weapon_rpg"), 0)) || unk_0x93B9F446C9E48692(unk_0xD6E677FAD7521410(iLocal_89, 1) + Vector(5f, 10f, 10f), unk_0xD6E677FAD7521410(iLocal_89, 1) - Vector(5f, 10f, 10f), joaat("weapon_molotov"), 0)) || unk_0x93B9F446C9E48692(unk_0xD6E677FAD7521410(iLocal_89, 1) + Vector(5f, 10f, 10f), unk_0xD6E677FAD7521410(iLocal_89, 1) - Vector(5f, 10f, 10f), joaat("weapon_bzgas"), 0)) || unk_0x3DBB16B468DC3E18(2, unk_0xD6E677FAD7521410(iLocal_89, 1) + Vector(2f, 10f, 10f), unk_0xD6E677FAD7521410(iLocal_89, 1) - Vector(2f, 10f, 10f))) || (unk_0x24A466C655E8588A(unk_0x7D2B9E6A64637269(), 4) && unk_0x73E0CF006385B59C(iLocal_94, uVar0, 0)))
		{
			return 1;
		}
	}
	return 0;
}

void func_263()
{
	iLocal_622 = iLocal_621;
	if (unk_0x32FBDF1C2B7942F9(unk_0x7D2B9E6A64637269()))
	{
		if (unk_0x0A0080A9EB535EC7(unk_0x7D2B9E6A64637269()))
		{
			if (!unk_0x234B68AC2E35ED5A(iLocal_627, 5) && unk_0x6098412AD83D65D4(unk_0x1146A9AE09CE2B14()) <= 5f)
			{
				if (iLocal_621 != 5)
				{
					iLocal_621 = 5;
				}
			}
			else if (!unk_0xE8FFE38E2BA32BD6())
			{
				if (!unk_0x234B68AC2E35ED5A(iLocal_627, 2))
				{
					if (iLocal_621 != 2)
					{
						iLocal_621 = 2;
					}
				}
				else if (!unk_0x234B68AC2E35ED5A(iLocal_627, 3))
				{
					if (iLocal_621 != 3)
					{
						iLocal_621 = 3;
					}
				}
				else if (!unk_0x234B68AC2E35ED5A(iLocal_627, 4))
				{
					if (iLocal_621 != 4)
					{
						iLocal_621 = 4;
					}
				}
			}
		}
		else if (!unk_0xE8FFE38E2BA32BD6())
		{
			if (!unk_0x234B68AC2E35ED5A(iLocal_627, 0))
			{
				if (iLocal_621 != 0)
				{
					iLocal_621 = 0;
				}
			}
			else if (!unk_0x234B68AC2E35ED5A(iLocal_627, 1))
			{
				if (iLocal_621 != 1)
				{
					iLocal_621 = 1;
				}
			}
			else if (!unk_0x234B68AC2E35ED5A(iLocal_627, 4))
			{
				if (iLocal_621 != 4)
				{
					iLocal_621 = 4;
				}
			}
		}
	}
	if (iLocal_621 != iLocal_622)
	{
		iLocal_624 = 0;
		iLocal_623 = 0;
		iLocal_625 = 0;
		fLocal_626 = 0f;
	}
	if (!iLocal_623)
	{
		if ((iLocal_621 != 1 && iLocal_621 != 2) && iLocal_621 != 3)
		{
			if (func_266(sLocal_610[iLocal_621], 0))
			{
				iLocal_623 = 1;
			}
		}
		else if (unk_0x5F95E51ABC3FC59A(0) != 4)
		{
			if (func_266(sLocal_610[iLocal_621], 0))
			{
				iLocal_623 = 1;
			}
		}
		else
		{
			iLocal_623 = 1;
		}
	}
	else if (func_243(sLocal_610[iLocal_621]))
	{
		fLocal_626 = (fLocal_626 + unk_0x7FF6ACE380ED166C());
		if (fLocal_626 > 2f || !func_265(iLocal_621))
		{
			if (!unk_0x234B68AC2E35ED5A(iLocal_627, iLocal_621))
			{
				unk_0x191DDA30577F440A(&iLocal_627, iLocal_621);
			}
			if (!iLocal_624 && func_265(iLocal_621))
			{
				if (func_264(iLocal_621))
				{
					iLocal_624 = 1;
				}
			}
			else if (!iLocal_625)
			{
				unk_0x66AE54CE92457FEE(0);
				iLocal_625 = 1;
			}
		}
	}
}

int func_264(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 0:
			if (unk_0x86AF801D34E482FF(0, 21) && unk_0x4DDAC4C80BACF92C(unk_0x7D2B9E6A64637269()) > 4f)
			{
				return 1;
			}
			break;
		
		case 1:
			if (unk_0x0A0080A9EB535EC7(unk_0x7D2B9E6A64637269()))
			{
				return 1;
			}
			break;
		
		case 3:
			if (unk_0x86AF801D34E482FF(0, 30) || unk_0x86AF801D34E482FF(0, 31))
			{
				return 1;
			}
			break;
		
		case 5:
			if (!unk_0x0A0080A9EB535EC7(unk_0x7D2B9E6A64637269()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_265(int iParam0)
{
	if (unk_0x32FBDF1C2B7942F9(unk_0x7D2B9E6A64637269()))
	{
		if (unk_0x0A0080A9EB535EC7(unk_0x7D2B9E6A64637269()))
		{
			if (((iParam0 == 5 || iParam0 == 3) || iParam0 == 2) || iParam0 == 4)
			{
				return 1;
			}
		}
		else if ((iParam0 == 1 || iParam0 == 0) || iParam0 == 4)
		{
			return 1;
		}
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_266(char* sParam0, bool bParam1)
{
	if (unk_0xE8FFE38E2BA32BD6() && !func_243(sParam0))
	{
		unk_0x66AE54CE92457FEE(1);
	}
	else if (bParam1)
	{
		func_267(sParam0);
	}
	else
	{
		func_244(sParam0, -1);
	}
	if (func_243(sParam0))
	{
		return 1;
	}
	return 0;
}

void func_267(char* sParam0)
{
	unk_0xDDEC6D09154BA73A(sParam0);
	unk_0x4A5DC2FF6E0B609F(0, 1, 1, -1);
}

void func_268(int iParam0, bool bParam1)
{
	int iVar0;
	
	Global_62108 = iParam0;
	if (!Global_62106)
	{
		Global_62106 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_74193)
		{
			if (Global_74194[iVar0 /*9*/] == iParam0)
			{
				Global_74194[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

bool func_269()
{
	if (!unk_0x419E13582192CFEA(iLocal_106))
	{
		unk_0x16E516CA9C88FF48(joaat("prop_mp3_dock"));
		if (unk_0xA9C0BBFB9CBB66F1(joaat("prop_mp3_dock")))
		{
			iLocal_106 = unk_0x795434E153F90E41(joaat("prop_mp3_dock"), -2032.539f, -1032.35f, 5.421927f, 1, 1, 0);
		}
	}
	if (unk_0x419E13582192CFEA(iLocal_106))
	{
		unk_0x78CDDD1E6367978D(iLocal_106, -2032.539f, -1032.35f, 5.421927f, 1, 0, 0, 1);
		unk_0xBDDCDEC7B6205897(iLocal_106, 0f, 0f, 66.5523f, 2, 1);
	}
	return unk_0x419E13582192CFEA(iLocal_106);
}

void func_270()
{
	struct<3> Var0;
	
	switch (iLocal_628)
	{
		case 0:
			unk_0x16E516CA9C88FF48(joaat("a_c_stingray"));
			iLocal_628++;
			break;
		
		case 1:
			if (unk_0xA9C0BBFB9CBB66F1(joaat("a_c_stingray")))
			{
				iLocal_628++;
			}
			break;
		
		case 2:
			Var0 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) };
			if (Var0.f_2 < 1f)
			{
				iLocal_629 = unk_0x0FDCFECB2EF2BC1C(26, joaat("a_c_stingray"), -1885.497f, -1189.883f, -8.2945f, -136.1128f, 1, 1);
				unk_0x28A5BAF912B4E14D(iLocal_629, unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), 1f, 20000, 1193033728, 1056964608);
				iLocal_628++;
			}
			break;
		
		case 3:
			if (func_271(iLocal_629, unk_0x7D2B9E6A64637269(), 1) > 20f || unk_0x4E8DA737B686529A(iLocal_629, 2106541073) == 7)
			{
				unk_0x824F744352C8BC82(joaat("a_c_stingray"));
				unk_0x0F3BD19FF11738D3(&iLocal_629);
				iLocal_628++;
			}
			break;
	}
}

float func_271(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
		Var0 = { unk_0xD6E677FAD7521410(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xD6E677FAD7521410(iParam0, 0) };
	}
	if (!unk_0xE50EB54E0F21BED0(iParam1, 0))
	{
		Var1 = { unk_0xD6E677FAD7521410(iParam1, 1) };
	}
	else
	{
		Var1 = { unk_0xD6E677FAD7521410(iParam1, 0) };
	}
	return unk_0x0BABEFEA577FCFA4(Var0, Var1, iParam2);
}

void func_272()
{
	switch (iLocal_159)
	{
		case 0:
			if (!unk_0x43DDCE9C73E22D9D())
			{
				unk_0xFA3CD2A976F07F94("family_2_mcs_2", 6, 8);
				iLocal_159++;
			}
			else
			{
				iLocal_159 += 2;
			}
			break;
		
		case 1:
			if (unk_0xE807694ABD40478F())
			{
				func_2("Michael", unk_0x7D2B9E6A64637269(), 0, 2);
				iLocal_159++;
			}
			break;
		
		case 2:
			func_155();
			if (func_199())
			{
				if (func_273("family_2_mcs_2"))
				{
					unk_0xD63E470D46B4F8A5(unk_0x1146A9AE09CE2B14(), 0, 0);
					unk_0x87524F5C1E0857AB(unk_0x1146A9AE09CE2B14(), 0);
					func_191(1, 1, 1, 0, 0, 0, 0);
					if (!unk_0xECEC7528A52B4EE8(iLocal_89))
					{
						unk_0x4B85FC3BD1A363D0(iLocal_89, 100f);
						unk_0xF2CEEA627AD5A24B(iLocal_89, "Jimmy", 0, 0, 0);
					}
					if (unk_0xBFCE58B2B3249999(iLocal_93, 0))
					{
						if (unk_0xAB0BB1BDD76B67DC(iLocal_93))
						{
							unk_0x50B76EE36FBE865F(iLocal_93);
						}
					}
					if (unk_0xBFCE58B2B3249999(iLocal_94, 0))
					{
						if (unk_0xAB0BB1BDD76B67DC(iLocal_94))
						{
							unk_0xA2C015B68CE01357(iLocal_94, 0);
							unk_0x50B76EE36FBE865F(iLocal_94);
						}
						unk_0xF2CEEA627AD5A24B(iLocal_94, "FAM_2_Jimmys_bike", 0, 0, 0);
					}
					unk_0xEBDFE18B261316C1(4);
					unk_0x7E1C1B2FCF372776(0);
					unk_0x1036762BD3781C84();
					unk_0x66AE54CE92457FEE(1);
					func_190();
					unk_0x145AB994058F1720(unk_0x7D2B9E6A64637269(), 3, 26, 0);
					unk_0x145AB994058F1720(unk_0x7D2B9E6A64637269(), 4, 27, 0);
					if (unk_0xB30CD10E2CD1B67D("FAMILY_2_BIKE_RACE_JIMMY"))
					{
						unk_0xC0BBE340BE2AA02D("FAMILY_2_BIKE_RACE_JIMMY");
					}
					unk_0xA5018159B4411234(0f, 0f);
					iLocal_159++;
				}
				else
				{
					unk_0xCB63763717A253D9();
					unk_0xFA3CD2A976F07F94("family_2_mcs_2", 5, 8);
				}
			}
			break;
		
		case 3:
			if (unk_0xBFCE58B2B3249999(iLocal_93, 0))
			{
				if (bLocal_180)
				{
					unk_0x78CDDD1E6367978D(iLocal_93, -1848.195f, -1218.706f, 12.58357f, 1, 0, 0, 1);
					unk_0xCD37A28258D70638(iLocal_93, 129.3527f);
				}
				else
				{
					unk_0x78CDDD1E6367978D(iLocal_93, -1867.383f, -1212.198f, 12.57401f, 1, 0, 0, 1);
					unk_0xCD37A28258D70638(iLocal_93, -0.030485f);
				}
				unk_0x47D0DDD8833C5E5F(iLocal_93, 1084227584);
				unk_0xC5DE9743D6DA2C15(iLocal_93);
			}
			unk_0x6AF7EE4DD9F8B944(-1859.045f, -1215.503f, 12.0665f, 2f, 1, 0, 0, 0);
			if (!unk_0xE0A6F16F546C8274() && !unk_0x07BE48DF95787FCB())
			{
				unk_0x6E1E3A5B1F9AB95B(500);
			}
			unk_0x603ABA046B239722(unk_0x7D2B9E6A64637269(), 1);
			iLocal_159++;
			break;
		
		case 4:
			if (unk_0x43DDCE9C73E22D9D() && unk_0x2CA4B93E310C1860())
			{
				unk_0xF7B46911310E4737(1.5f);
				if (unk_0x5505579F3F8D58CB() > 90500)
				{
					unk_0x366E7F593105797F(2, 18, 1);
				}
			}
			if (unk_0x30700B4AA35835FD("Michael", 0))
			{
				unk_0xC7EF1AC7845F532D();
				func_385(1, 0);
				unk_0xDF23DCD7A3E1B7A5(0);
				unk_0x3A13FD2813C8251F(0, 1065353216);
				unk_0xEE90D1369E1800A2(unk_0x7D2B9E6A64637269(), -1115154469, 0, 1, 0);
				unk_0x8F00E6BF3D6A18D3(unk_0x1146A9AE09CE2B14(), 3f, iLocal_171, 0, 1, 0);
				func_244("FM2_DIVOFF", -1);
			}
			if (!unk_0x43DDCE9C73E22D9D())
			{
				unk_0x6C59944A0530A574(unk_0x7D2B9E6A64637269(), 0, 0);
				if (unk_0xBFCE58B2B3249999(iLocal_94, 0))
				{
					unk_0xDB8D6815E13996A9(iLocal_94, -1858.612f, -1214.563f, 12.307f, 0, 0, 1);
					unk_0x79C3AEC4C7C91A54(iLocal_94, 0.388f, -0.438f, 0.4777f, 0.6553f);
					unk_0xBC5268D1B5C5B73B(iLocal_94, 0, 0f, 0f, -0.01f, 0f, 0f, 0f, 0, 1, 1, 0, 0, 1);
				}
				unk_0xAA87C426DC96454A(unk_0x7D2B9E6A64637269());
				func_191(0, 1, 1, 0, 0, 0, 0);
				func_188();
				func_207(5);
			}
			break;
	}
}

bool func_273(char* sParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x7F16E6FC0336C986(sParam0);
	if (!Global_77247)
	{
		if (!bVar0)
		{
			Global_77247 = 1;
		}
	}
	return bVar0;
}

void func_274()
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	unk_0x6906086484B6A5CE(unk_0x1146A9AE09CE2B14());
	unk_0xD29D1374727D1C85(0.7f);
	if ((!unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_93, 0) && unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0)) && unk_0xBFCE58B2B3249999(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0), 0))
	{
		if (((((unk_0xEACFC87E44438F24(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0), joaat("cruiser")) || unk_0xEACFC87E44438F24(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0), joaat("scorcher"))) || unk_0xEACFC87E44438F24(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0), joaat("tribike"))) || unk_0xEACFC87E44438F24(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0), joaat("tribike2"))) || unk_0xEACFC87E44438F24(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0), joaat("tribike3"))) || unk_0xEACFC87E44438F24(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0), joaat("bmx")))
		{
			unk_0x795957CD3A0042C8(&iLocal_93);
			iLocal_93 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
			iVar0 = 0;
			while (iVar0 < iLocal_96)
			{
				if (iLocal_96[iVar0] == unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0))
				{
					iLocal_96[iVar0] = 0;
				}
				iVar0++;
			}
			unk_0x4985CD0720AFD468(iLocal_93, 1, 0);
		}
	}
	if (unk_0x419E13582192CFEA(iLocal_95) && unk_0xBFCE58B2B3249999(iLocal_95, 0))
	{
		if ((vdist2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(iLocal_95, 1)) > 1000f && unk_0x98E18969B1D0C4AB(iLocal_95)) && !unk_0x3D6C3476988DE6E1(Local_131, 5f))
		{
			if (vdist2(Local_131, unk_0xD6E677FAD7521410(iLocal_95, 1)) < 625f)
			{
				func_449(iLocal_95, Local_131 + Vector(1f, 0f, 0f), fLocal_132, 24, 0);
				func_448(24);
			}
			unk_0x5420D0D520CF44D0(&iLocal_95);
		}
	}
	if ((!unk_0xECEC7528A52B4EE8(iLocal_89) && unk_0xBFCE58B2B3249999(iLocal_94, 0)) && unk_0xBFCE58B2B3249999(iLocal_93, 0))
	{
		if ((((unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -1308.715f, -1310.135f, -22.62013f, -1171.372f, -1261.148f, 47.98976f, 250f, 0, 1, 0) || unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -1348.925f, -1155.041f, -20.53191f, -1163.36f, -1143.443f, 34.68446f, 142.25f, 0, 1, 0)) || unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -1386.385f, -1054.306f, -16.12128f, -1245.289f, -965.9915f, 32.39125f, 142.25f, 0, 1, 0)) || unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -1462.164f, -972.0999f, -20.40302f, -1332.72f, -833.9435f, 45.98875f, 227.25f, 0, 1, 0)) || unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -1178.163f, -1629.206f, 1.873874f, -1315.888f, -1365.294f, 25.02553f, 173.75f, 0, 1, 0))
		{
			unk_0xF5AFB6AFBDD3C8FD(1);
		}
		else
		{
			unk_0xF5AFB6AFBDD3C8FD(0);
		}
		if ((unk_0x419E13582192CFEA(iLocal_93) && unk_0xBFCE58B2B3249999(iLocal_93, 0)) && unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_93, 0))
		{
			if (!unk_0xB30CD10E2CD1B67D("FAMILY_2_BIKE_RACE_JIMMY"))
			{
				unk_0xB84B43B766630B5C("FAMILY_2_BIKE_RACE_JIMMY");
			}
		}
		switch (iLocal_159)
		{
			case 0:
				fLocal_600 = 0f;
				unk_0x5249BC3946DCDA75(iLocal_89, 1);
				if (unk_0xAB0BB1BDD76B67DC(iLocal_94))
				{
					unk_0x50B76EE36FBE865F(iLocal_94);
				}
				uLocal_104 = func_216(iLocal_94, 0, 0);
				unk_0xDD944E3FD2028A48(uLocal_104, "BLIP_280");
				unk_0x8ADA462BC5F42FD8(iLocal_89, unk_0x7D2B9E6A64637269(), -1, 0, 2);
				iLocal_185 = 0;
				iLocal_184 = 0;
				bLocal_180 = false;
				iLocal_181 = 0;
				iLocal_601 = 0;
				iLocal_602 = (Local_603.x - 1);
				iLocal_604 = 0;
				bLocal_607 = false;
				Local_603[0 /*3*/] = { -1266.288f, -1689.561f, 3.4691f };
				Local_603[1 /*3*/] = { -1345.057f, -1263.89f, 3.8977f };
				Local_603[2 /*3*/] = { -1564.547f, -928.2069f, 12.0173f };
				Local_603[3 /*3*/] = { Local_146 };
				unk_0x9469E3DA4B5A7A39(Vector(5.75302f, -1325.827f, -1329.113f) + Vector(2.5f, 44f, 13.25f), Vector(5.75302f, -1325.827f, -1329.113f) - Vector(2.5f, 44f, 13.25f), 0, 0);
				unk_0x2D89F1A81B73377C(-1361.568f, -1207.053f, 3.4492f, 10f, 0);
				unk_0x2D89F1A81B73377C(-1396.34f, -1059.049f, 3.2013f, 15f, 0);
				unk_0x46EDFC827DC67D89(iLocal_89, 1, 1);
				unk_0x8B58E7AC53EED9F1(iLocal_89, 1);
				unk_0x46EDFC827DC67D89(iLocal_94, 1, 1);
				unk_0x8B58E7AC53EED9F1(iLocal_94, 1);
				func_237(&uLocal_213, iLocal_158, sLocal_156);
				iLocal_159++;
				unk_0xA5018159B4411234(0.5f, 0.5f);
				func_282(500);
				unk_0xE63D792F88BFF242(1, 0);
				unk_0xE63D792F88BFF242(7, 0);
				unk_0xE63D792F88BFF242(2, 0);
				unk_0xE63D792F88BFF242(4, 0);
				unk_0xE63D792F88BFF242(10, 0);
				unk_0xE63D792F88BFF242(9, 0);
				unk_0xE63D792F88BFF242(8, 0);
				unk_0xD0051FAE2E1BB4C8("smboat");
				break;
			
			case 1:
				if (unk_0xF41EB7643E61A928(iLocal_89, iLocal_94, 0))
				{
					unk_0xE946751408DFA71B(iLocal_89, iLocal_94, -1092.392f, -1708.092f, 3.2771f, 7f, 0, joaat("cruiser"), 786471, 3f, 4f);
					iLocal_159++;
				}
				else if (unk_0x4E8DA737B686529A(iLocal_89, -1794415470) != 1)
				{
					unk_0x95CA4545D0C61309(iLocal_89, iLocal_94, -1, -1, 3f, 1, 0);
				}
				break;
			
			case 2:
				if (unk_0x591190E69BE43117(iLocal_94, -1092.392f, -1708.092f, 3.2771f, 4f, 4f, 4f, 0, 1, 0))
				{
					unk_0xCA089CD1A17D76DF(iLocal_89);
					unk_0xC5E8919401B3C049(iLocal_94, iLocal_158, sLocal_156, 15f, 786549);
					iLocal_159++;
				}
				break;
			
			case 3:
				fLocal_609 = func_280(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), iLocal_158, sLocal_156, &uLocal_213);
				Local_608 = { unk_0x3BCD5137CE6A77E2(iLocal_158, fLocal_609, sLocal_156) };
				fLocal_600 = vdist(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), Local_608);
				if (bLocal_607)
				{
					if (fLocal_600 < 75f)
					{
						unk_0x1AD5BCFEC31BB8D9(&uLocal_102);
						bLocal_607 = false;
					}
					if (!iLocal_203)
					{
						func_149("FM2_RIDEBK", 7500, 1);
						iLocal_204 = unk_0xDFB7BFA6482FEE1E();
						iLocal_203 = 1;
					}
					if (fLocal_600 > 300f)
					{
						func_104("FM2_RACEFAIL");
					}
				}
				else
				{
					if ((unk_0xDFB7BFA6482FEE1E() - iLocal_204) > 20000)
					{
						iLocal_203 = 0;
					}
					if (unk_0x575B7C28D81C0B4D(uLocal_105))
					{
						if (unk_0x575B7C28D81C0B4D(uLocal_104))
						{
							unk_0x1AD5BCFEC31BB8D9(&uLocal_104);
						}
						if (vdist2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(iLocal_93, 1)) > 22500f)
						{
							func_104("FM2_BIKLOST");
						}
					}
					else if (!bLocal_180)
					{
						if (!unk_0x575B7C28D81C0B4D(uLocal_104))
						{
							uLocal_104 = func_216(iLocal_94, 0, 0);
							unk_0xDD944E3FD2028A48(uLocal_104, "BLIP_280");
						}
					}
					if (fLocal_600 > 150f)
					{
						unk_0x1AD5BCFEC31BB8D9(&uLocal_102);
						unk_0x1AD5BCFEC31BB8D9(&uLocal_104);
						unk_0xA2A7DE2914591E35();
						iLocal_602 = (Local_603.x - 1);
						bLocal_607 = true;
					}
				}
				if (unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_89, 15f, 15f, 10f, 0, 1, 0) && !func_177())
				{
					if (unk_0xDFB7BFA6482FEE1E() - iLocal_601) > unk_0xB36B8558948EA7A8(1200, 1400)
					{
						func_202(iLocal_89, "BREATHING", "JIMMY_NORMAL", 24);
						iLocal_601 = unk_0xDFB7BFA6482FEE1E();
					}
				}
				if ((((((unk_0x3DBB16B468DC3E18(2, unk_0xD6E677FAD7521410(iLocal_89, 1) + Vector(3f, 3f, 3f), unk_0xD6E677FAD7521410(iLocal_89, 1) - Vector(3f, 3f, 3f)) || unk_0x3DBB16B468DC3E18(0, unk_0xD6E677FAD7521410(iLocal_89, 1) + Vector(3f, 3f, 3f), unk_0xD6E677FAD7521410(iLocal_89, 1) - Vector(3f, 3f, 3f))) || unk_0x3DBB16B468DC3E18(1, unk_0xD6E677FAD7521410(iLocal_89, 1) + Vector(3f, 3f, 3f), unk_0xD6E677FAD7521410(iLocal_89, 1) - Vector(3f, 3f, 3f))) || unk_0x3DBB16B468DC3E18(4, unk_0xD6E677FAD7521410(iLocal_89, 1) + Vector(3f, 3f, 3f), unk_0xD6E677FAD7521410(iLocal_89, 1) - Vector(3f, 3f, 3f))) || unk_0x3DBB16B468DC3E18(7, unk_0xD6E677FAD7521410(iLocal_89, 1) + Vector(3f, 3f, 3f), unk_0xD6E677FAD7521410(iLocal_89, 1) - Vector(3f, 3f, 3f))) || unk_0x3DBB16B468DC3E18(10, unk_0xD6E677FAD7521410(iLocal_89, 1) + Vector(3f, 3f, 3f), unk_0xD6E677FAD7521410(iLocal_89, 1) - Vector(3f, 3f, 3f))) || unk_0x3DBB16B468DC3E18(25, unk_0xD6E677FAD7521410(iLocal_89, 1) + Vector(3f, 3f, 3f), unk_0xD6E677FAD7521410(iLocal_89, 1) - Vector(3f, 3f, 3f)))
				{
					unk_0x5249BC3946DCDA75(iLocal_89, 2);
				}
				if (bLocal_180)
				{
					if (!iLocal_178)
					{
						unk_0xFA3CD2A976F07F94("family_2_mcs_2", 5, 8);
						iLocal_179 = 0;
						iLocal_178 = 1;
					}
					if (iLocal_178 && !iLocal_179)
					{
						if (unk_0xE807694ABD40478F())
						{
							func_2("Michael", unk_0x7D2B9E6A64637269(), 0, 2);
							iLocal_179 = 1;
						}
					}
					if ((unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -1811.906f, -1195.154f, 11.7672f, -1846.906f, -1237.279f, 19.5172f, 21.25f, 0, 1, 0) || unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -1816.365f, -1234.039f, 7.017199f, -1859.197f, -1241.141f, 22.87097f, 57.75f, 0, 1, 0)) || unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -1856.623f, -1201.832f, 7.017204f, -1859.197f, -1241.141f, 22.87097f, 57.75f, 0, 1, 0))
					{
						if (iLocal_179)
						{
							unk_0x1AD5BCFEC31BB8D9(&uLocal_102);
							unk_0x1AD5BCFEC31BB8D9(&uLocal_104);
							unk_0x2DC2890038BFF758(12f, 5f, 4);
							func_207(4);
						}
					}
				}
				else
				{
					func_279();
					if (vdist2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), Local_124) < 10000f)
					{
						if (!iLocal_178)
						{
							unk_0xFA3CD2A976F07F94("family_2_mcs_2", 6, 8);
							iLocal_178 = 1;
						}
						else if (!iLocal_179 && unk_0xE807694ABD40478F())
						{
							func_2("Michael", unk_0x7D2B9E6A64637269(), 0, 2);
							iLocal_179 = 1;
						}
					}
					if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_93, 0))
					{
						if (unk_0x591190E69BE43117(unk_0x7D2B9E6A64637269(), Local_146, Global_19, 1, 1, 0))
						{
							unk_0x1AD5BCFEC31BB8D9(&uLocal_102);
							unk_0x1AD5BCFEC31BB8D9(&uLocal_104);
							iLocal_159++;
						}
					}
				}
				break;
			
			case 4:
				if (func_208(iLocal_93, 30f, 1, 1056964608, 0, 1, 0))
				{
					unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), false, 256);
					unk_0xDDFB0D5F3D3B74AA(unk_0x7D2B9E6A64637269(), -1823.195f, -1213.526f, 12.152f, -1, 0, 3);
					unk_0xEDC0317C5B604BB1(unk_0x7D2B9E6A64637269(), iLocal_93, 0);
					iLocal_159++;
				}
				break;
			
			case 5:
				if (unk_0xBFCE58B2B3249999(iLocal_93, 0) && !unk_0x2C10A11A684CFE96(unk_0x7D2B9E6A64637269(), iLocal_93))
				{
					settimera(0);
					iLocal_159++;
				}
				break;
			
			case 6:
				if (timera() > 800)
				{
					unk_0x2DC2890038BFF758(12f, 5f, 4);
					func_207(4);
				}
				break;
		}
		if (!unk_0xECEC7528A52B4EE8(iLocal_89) && unk_0xBFCE58B2B3249999(iLocal_94, 0))
		{
			if (func_262(&uLocal_606, &iLocal_604, &uLocal_605))
			{
				func_104("FM2_JSPOOK");
			}
			if (!iLocal_181)
			{
				if (iLocal_159 < 4)
				{
					fLocal_598 = func_280(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), iLocal_158, sLocal_156, &uLocal_213);
					fLocal_599 = func_280(unk_0xD6E677FAD7521410(iLocal_89, 1), iLocal_158, sLocal_156, &uLocal_213);
					fVar1 = (fLocal_599 - fLocal_598);
					func_278(fVar1, fLocal_600, fLocal_598 > fLocal_599);
					if (unk_0x591190E69BE43117(iLocal_89, Local_146, Global_19, 0, 1, 0))
					{
						unk_0x3CBE9F07524C242D(iLocal_94, 1, 0);
						unk_0x8B58E7AC53EED9F1(iLocal_89, 1);
						unk_0x8B58E7AC53EED9F1(iLocal_94, 1);
						if (!bLocal_180)
						{
							unk_0xCB63763717A253D9();
							iLocal_178 = 0;
							bLocal_180 = true;
						}
						iLocal_181 = 1;
					}
				}
				else if ((!bLocal_180 && unk_0x8954E9D0A9F6F8CF(iLocal_89, -1806.987f, -1191.762f, -42.98238f, -1854.44f, -1247.811f, 30.4819f, 90f, 0, 1, 0)) && vdist2(unk_0xD6E677FAD7521410(iLocal_89, 1), unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1)) < 36f)
				{
					unk_0x1AD5BCFEC31BB8D9(&uLocal_102);
					unk_0x1AD5BCFEC31BB8D9(&uLocal_104);
					func_207(4);
				}
			}
			if (iLocal_181 || (iLocal_159 >= 4 && !unk_0xAB0BB1BDD76B67DC(iLocal_94)))
			{
				if (unk_0xF41EB7643E61A928(iLocal_89, iLocal_94, 0))
				{
					if (!unk_0x98E18969B1D0C4AB(iLocal_89) && vdist2(unk_0xD6E677FAD7521410(iLocal_89, 1), unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1)) < 2500f)
					{
						if (unk_0xAB0BB1BDD76B67DC(iLocal_94))
						{
							unk_0x50B76EE36FBE865F(iLocal_94);
						}
					}
					else
					{
						unk_0x50B76EE36FBE865F(iLocal_94);
						unk_0xA2C015B68CE01357(iLocal_94, 1);
					}
				}
			}
		}
		if (iLocal_159 < 4 && iLocal_159 > 0)
		{
			if (unk_0xBFCE58B2B3249999(iLocal_93, 0) && unk_0x419E13582192CFEA(iLocal_93))
			{
				if (!unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_93, 0))
				{
					if (!unk_0x575B7C28D81C0B4D(uLocal_105))
					{
						unk_0x1036762BD3781C84();
						if (iLocal_547)
						{
							func_148(&Local_544);
						}
						uLocal_105 = func_216(iLocal_93, 0, 0);
					}
					if (unk_0x575B7C28D81C0B4D(uLocal_102))
					{
						unk_0x1AD5BCFEC31BB8D9(&uLocal_102);
						iLocal_602 = (Local_603.x - 1);
						unk_0xA2A7DE2914591E35();
					}
					if (unk_0x575B7C28D81C0B4D(uLocal_104))
					{
						unk_0x1AD5BCFEC31BB8D9(&uLocal_104);
					}
				}
				else
				{
					iLocal_547 = 1;
					if (bLocal_607)
					{
						if (!unk_0x575B7C28D81C0B4D(uLocal_102))
						{
							fVar2 = func_241((fLocal_609 + 10000f), 20000f, unk_0xDC2AF9AB32FB87A8(iLocal_158, sLocal_156));
							uLocal_102 = func_215(unk_0x3BCD5137CE6A77E2(iLocal_158, fVar2, sLocal_156), 1);
						}
					}
					else
					{
						if (!unk_0x575B7C28D81C0B4D(uLocal_102))
						{
							unk_0x1036762BD3781C84();
							uLocal_102 = func_215(Local_146, 0);
						}
						func_277(&Local_603, &iLocal_602);
					}
					if (unk_0x575B7C28D81C0B4D(uLocal_105))
					{
						unk_0x1AD5BCFEC31BB8D9(&uLocal_105);
					}
				}
			}
		}
	}
	func_275();
}

void func_275()
{
	if (unk_0x419E13582192CFEA(iLocal_93) && unk_0xBFCE58B2B3249999(iLocal_93, 0))
	{
		switch (iLocal_160)
		{
			case 0:
				if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_93, 0) && !func_276())
				{
					if (!unk_0x0D901EFDFD7EF9D5(0))
					{
						func_244("FM2_BIKE1", -1);
					}
					else
					{
						func_244("FM2_BIKE1_KM", -1);
					}
					iLocal_160++;
				}
				break;
			
			case 1:
				if (!unk_0x3640D836D145B814())
				{
					if ((!func_243("FM2_BIKE1") && unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_93, 0)) && !func_276())
					{
						func_244("FM2_BIKE2", -1);
						iLocal_160++;
					}
				}
				else if (((!func_243("FM2_BIKE1") && !func_243("FM2_BIKE1_KM")) && unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_93, 0)) && !func_276())
				{
					func_244("FM2_BIKE2", -1);
					iLocal_160++;
				}
				break;
			
			case 2:
				if ((!func_243("FM2_BIKE2") && unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_93, 0)) && !func_276())
				{
					if (unk_0xEACFC87E44438F24(iLocal_93, joaat("bmx")) || unk_0xEACFC87E44438F24(iLocal_93, joaat("scorcher")))
					{
						func_244("FM2_BIKE3", -1);
					}
					iLocal_160++;
				}
				break;
			
			case 3:
				if (((!func_243("FM2_BIKE2") && !func_243("FM2_BIKE3")) && unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_93, 0)) && !func_276())
				{
					func_244("FM2_BIKE4", -1);
					iLocal_160++;
				}
				break;
		}
		if (!unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_93, 0) || func_276())
		{
			if (unk_0x3640D836D145B814())
			{
				if (func_243("FM2_BIKE1_KM"))
				{
					unk_0x66AE54CE92457FEE(1);
				}
			}
			if ((((func_243("FM2_BIKE1") || func_243("FM2_BIKE2")) || func_243("FM2_BIKE3")) || func_243("FM2_BIKE4")) || func_243("FM2_WHEELIE"))
			{
				unk_0x66AE54CE92457FEE(1);
			}
		}
	}
}

bool func_276()
{
	return Global_74428;
}

void func_277(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	struct<3> Var3;
	float fVar4;
	
	iVar0 = 0;
	iVar1 = -1;
	fVar2 = 0f;
	Var3 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) };
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		fVar4 = vdist2(Var3, *(iParam0[iVar0 /*3*/]));
		if (iVar1 == -1 || fVar4 < fVar2)
		{
			iVar1 = iVar0;
			fVar2 = fVar4;
		}
		iVar0++;
	}
	if (vdist2(Var3, *(iParam0[iVar1 + 1 /*3*/])) < vdist2(*(iParam0[iVar1 /*3*/]), *(iParam0[iVar1 + 1 /*3*/])))
	{
		iVar1++;
	}
	if (*iParam1 != iVar1)
	{
		if (*iParam1 >= 0 && vdist2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), *(iParam0[*iParam1 /*3*/])) > 25f)
		{
			unk_0xA2A7DE2914591E35();
			unk_0xDC1ACDE6E645E5EF(156, 1, 0);
			iVar0 = iVar1;
			while (iVar0 <= (*iParam0 - 1))
			{
				unk_0xE6611BC25F4D0CB3(*(iParam0[iVar0 /*3*/]));
				iVar0++;
			}
			unk_0xE6611BC25F4D0CB3(*(iParam0[(*iParam0 - 1) /*3*/]));
			unk_0xBA817770948E3E78(1);
		}
		*iParam1 = iVar1;
	}
}

void func_278(float fParam0, float fParam1, bool bParam2)
{
	float fVar0;
	
	fParam0 = unk_0x0BCA9ADE67DF9DD8(fParam0);
	fVar0 = vdist(unk_0xD6E677FAD7521410(iLocal_89, 1), unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1));
	if (unk_0xBFCE58B2B3249999(iLocal_93, 0) && !unk_0xECEC7528A52B4EE8(iLocal_89))
	{
		switch (iLocal_184)
		{
			case 0:
				iLocal_196 = 0;
				iLocal_197 = 0;
				iLocal_198 = 0;
				iLocal_199 = 0;
				iLocal_200 = 0;
				iLocal_187 = 0;
				iLocal_188 = 0;
				iLocal_189 = 0;
				if (bParam2 && fParam0 > 15000f)
				{
					iLocal_199 = 1;
				}
				if (!func_177() && (!unk_0x123480158F10FA67() || unk_0xC82CD1DB42480082(203) == 0))
				{
					if (fVar0 < 35f)
					{
						if (func_158(&Local_549, cLocal_202, "FAM2_PIER", 8, 0, 0, 0))
						{
							settimera(0);
							iLocal_184++;
						}
					}
					else
					{
						iLocal_184++;
					}
				}
				break;
			
			case 1:
				if (timera() > 2000)
				{
					if ((!func_177() && (!unk_0x123480158F10FA67() || unk_0xC82CD1DB42480082(203) == 0)) && unk_0x2C10A11A684CFE96(unk_0x7D2B9E6A64637269(), iLocal_93))
					{
						settimera(0);
						unk_0x1036762BD3781C84();
						func_148(&Local_543);
						iLocal_184++;
					}
				}
				break;
			
			case 2:
				if ((timera() > 1000 && !func_177()) && (!unk_0x123480158F10FA67() || unk_0xC82CD1DB42480082(203) == 0))
				{
					if (fVar0 < 35f)
					{
						if (func_158(&Local_549, cLocal_202, "FAM2_RACEM", 8, 0, 0, 0))
						{
							iLocal_184++;
						}
					}
				}
				else if (timera() > 15000)
				{
					iLocal_184++;
				}
				break;
			
			case 3:
				if ((!func_177() && (!unk_0x123480158F10FA67() || unk_0xC82CD1DB42480082(203) == 0)) && fVar0 < 35f)
				{
					if (func_158(&Local_549, cLocal_202, "FAM2_TRIA", 8, 0, 0, 0))
					{
						iLocal_184++;
					}
				}
				break;
			
			case 4:
				if (bParam2)
				{
					unk_0x8AE96123FEE66A18("Player in front", 0.01f, 0.68f, 0f, 0, 0, 255, 255);
				}
				else
				{
					unk_0x8AE96123FEE66A18("Jimmy in front", 0.01f, 0.68f, 0f, 0, 0, 255, 255);
				}
				if (iLocal_196)
				{
					unk_0x8AE96123FEE66A18("Michael take over line should fire", 0.01f, 0.7f, 0f, 0, 0, 255, 255);
				}
				if (iLocal_197)
				{
					unk_0x8AE96123FEE66A18("Jimmy take over line should fire", 0.01f, 0.72f, 0f, 0, 0, 255, 255);
				}
				if (iLocal_199)
				{
					unk_0x8AE96123FEE66A18("bPlayerHasCheated", 0.01f, 0.74f, 0f, 0, 0, 255, 255);
				}
				if (iLocal_200)
				{
					unk_0x8AE96123FEE66A18("bPlayerHasBumpedJimmy", 0.01f, 0.76f, 0f, 0, 0, 255, 255);
				}
				if (bParam2 != bLocal_557)
				{
					iLocal_558 = unk_0xDFB7BFA6482FEE1E();
					if (bParam2)
					{
						iLocal_196 = 1;
						iLocal_197 = 0;
						iLocal_186 = (unk_0xDFB7BFA6482FEE1E() - 10000);
					}
					else
					{
						iLocal_196 = 0;
						iLocal_197 = 1;
						iLocal_186 = (unk_0xDFB7BFA6482FEE1E() - 10000);
					}
				}
				if (iLocal_197)
				{
					if (((unk_0xDFB7BFA6482FEE1E() - iLocal_558) < 4000 && fVar0 < 30f) && (!unk_0x123480158F10FA67() || unk_0xC82CD1DB42480082(203) == 0))
					{
						if (func_158(&Local_549, cLocal_202, "FAM2_STUFF", 8, 0, 0, 0))
						{
							iLocal_197 = 0;
						}
					}
					else
					{
						iLocal_197 = 0;
					}
				}
				if (iLocal_196)
				{
					if (((unk_0xDFB7BFA6482FEE1E() - iLocal_558) < 4000 && fVar0 < 30f) && (!unk_0x123480158F10FA67() || unk_0xC82CD1DB42480082(203) == 0))
					{
						if (func_158(&Local_549, cLocal_202, "FAM2_PASS", 8, 0, 0, 0))
						{
							iLocal_196 = 0;
						}
					}
					else
					{
						iLocal_196 = 0;
					}
				}
				if (!iLocal_199 && !iLocal_200)
				{
					if (bParam2)
					{
						if (!func_177())
						{
							if ((unk_0xDFB7BFA6482FEE1E() - iLocal_559) > 10000)
							{
								if ((!func_177() && (!unk_0x123480158F10FA67() || unk_0xC82CD1DB42480082(203) == 0)) && fVar0 < 35f)
								{
									if (func_158(&Local_549, cLocal_202, "FAM2_ROFF", 8, 0, 0, 0))
									{
										iLocal_559 = unk_0xDFB7BFA6482FEE1E();
									}
								}
							}
							else if ((unk_0xDFB7BFA6482FEE1E() - iLocal_559) < 5000 && (unk_0xDFB7BFA6482FEE1E() - iLocal_186) > 10000)
							{
								if ((!func_177() && (!unk_0x123480158F10FA67() || unk_0xC82CD1DB42480082(203) == 0)) && fVar0 < 40f)
								{
									if (func_158(&Local_549, cLocal_202, "FAM2_FRONT", 8, 0, 0, 0))
									{
										iLocal_186 = unk_0xDFB7BFA6482FEE1E();
									}
								}
							}
						}
					}
					else if ((unk_0xDFB7BFA6482FEE1E() - iLocal_559) > 10000)
					{
						if (((!func_177() && (!unk_0x123480158F10FA67() || unk_0xC82CD1DB42480082(203) == 0)) && fVar0 < 35f) && !bParam2)
						{
							if (func_158(&Local_549, cLocal_202, "FAM2_CLOSE", 8, 0, 0, 0))
							{
								iLocal_559 = unk_0xDFB7BFA6482FEE1E();
							}
						}
					}
					else if ((unk_0xDFB7BFA6482FEE1E() - iLocal_559) < 5000 && (unk_0xDFB7BFA6482FEE1E() - iLocal_186) > 10000)
					{
						if ((!func_177() && (!unk_0x123480158F10FA67() || unk_0xC82CD1DB42480082(203) == 0)) && fVar0 < 40f)
						{
							if (func_158(&Local_549, cLocal_202, "FAM2_BEH", 8, 0, 0, 0))
							{
								iLocal_186 = unk_0xDFB7BFA6482FEE1E();
							}
						}
					}
					if ((fVar0 < 5f && (unk_0xDFB7BFA6482FEE1E() - iLocal_187) > 1000) && (unk_0xDFB7BFA6482FEE1E() - iLocal_188) > 10000)
					{
						if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_93, 0) && unk_0x83B12E293561B796(iLocal_93, iLocal_94))
						{
							iLocal_200 = 1;
						}
						iLocal_187 = unk_0xDFB7BFA6482FEE1E();
					}
					if ((unk_0xDFB7BFA6482FEE1E() - iLocal_189) > 10000)
					{
						if (!iLocal_199)
						{
							if (fParam1 > 50f)
							{
								iLocal_199 = 1;
							}
						}
					}
				}
				else if (iLocal_199)
				{
					if ((fVar0 < 35f && !func_177()) && unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_93, 0))
					{
						if (func_158(&Local_549, cLocal_202, "FAM2_CHEAT", 8, 0, 0, 0))
						{
							iLocal_189 = unk_0xDFB7BFA6482FEE1E();
							iLocal_199 = 0;
						}
					}
				}
				else if (iLocal_200)
				{
					if ((fVar0 < 35f && !func_177()) && unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_93, 0))
					{
						if (func_158(&Local_549, cLocal_202, "FAM2_HIT", 8, 0, 0, 0))
						{
							iLocal_188 = unk_0xDFB7BFA6482FEE1E();
							iLocal_200 = 0;
						}
					}
				}
				if (!iLocal_198)
				{
					if (unk_0x8954E9D0A9F6F8CF(iLocal_89, -1545.975f, -937.1822f, 10.33204f, -1556.068f, -928.8806f, 16.72215f, 3.75f, 0, 1, 0) && fVar0 < 35f)
					{
						iLocal_184++;
						iLocal_186 = unk_0xDFB7BFA6482FEE1E();
						iLocal_198 = 1;
					}
				}
				break;
			
			case 5:
				if ((fVar0 < 35f && !func_177()) && unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_93, 0))
				{
					if (func_158(&Local_549, cLocal_202, "FAM2_JEND", 8, 0, 0, 0))
					{
						iLocal_186 = unk_0xDFB7BFA6482FEE1E();
						iLocal_184++;
					}
				}
				if ((unk_0xDFB7BFA6482FEE1E() - iLocal_186) > 5000)
				{
					iLocal_184 = 4;
				}
				break;
			
			case 6:
				if ((fVar0 < 35f && !func_177()) && unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_93, 0))
				{
					if (func_158(&Local_549, cLocal_202, "FAM2_ROFF", 8, 0, 0, 0))
					{
						iLocal_184 = 4;
					}
				}
				if ((unk_0xDFB7BFA6482FEE1E() - iLocal_186) > 5000)
				{
					iLocal_184 = 4;
				}
				break;
		}
		bLocal_557 = bParam2;
	}
}

void func_279()
{
	if (!unk_0xECEC7528A52B4EE8(iLocal_89) && unk_0xBFCE58B2B3249999(iLocal_94, 0))
	{
		if (unk_0xF41EB7643E61A928(iLocal_89, iLocal_94, 0))
		{
			fLocal_598 = func_280(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), iLocal_158, sLocal_156, &uLocal_213);
			fLocal_599 = func_280(unk_0xD6E677FAD7521410(iLocal_94, 1), iLocal_158, sLocal_156, &uLocal_213);
			if (!iLocal_596)
			{
				if (!iLocal_597)
				{
					if (unk_0x8954E9D0A9F6F8CF(iLocal_89, -1572.474f, -994.6667f, 2.017392f, -1515.634f, -926.8091f, 29.12276f, 100f, 0, 1, 0) || unk_0x8954E9D0A9F6F8CF(iLocal_89, -1382.942f, -1442.319f, 3.013994f, -1367.638f, -1471.879f, 8.426488f, 22.25f, 0, 1, 0))
					{
						if (unk_0xBD74B9C9BB5E1622(iLocal_94) || unk_0xAB0BB1BDD76B67DC(iLocal_94))
						{
							unk_0x50B76EE36FBE865F(iLocal_94);
						}
						unk_0xC5E8919401B3C049(iLocal_94, iLocal_158, sLocal_156, 15f, 262144);
						iLocal_597 = 1;
					}
				}
				else if (!unk_0x8954E9D0A9F6F8CF(iLocal_89, -1572.474f, -994.6667f, 2.017392f, -1515.634f, -926.8091f, 29.12276f, 100f, 0, 1, 0) && !unk_0x8954E9D0A9F6F8CF(iLocal_89, -1382.942f, -1442.319f, 3.013994f, -1367.638f, -1471.879f, 8.426488f, 22.25f, 0, 1, 0))
				{
					if (unk_0xBD74B9C9BB5E1622(iLocal_94) || unk_0xAB0BB1BDD76B67DC(iLocal_94))
					{
						unk_0x50B76EE36FBE865F(iLocal_94);
					}
					unk_0xC5E8919401B3C049(iLocal_94, iLocal_158, sLocal_156, 15f, 786549);
					iLocal_597 = 0;
				}
				if ((vdist2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(iLocal_89, 1)) > 10000f && fLocal_599 > 10f) && (unk_0x9CF7186A344D26A9(iLocal_158, sLocal_156) && fLocal_599 < (unk_0xDC2AF9AB32FB87A8(iLocal_158, sLocal_156) - 10f)))
				{
					if ((unk_0x98E18969B1D0C4AB(iLocal_89) && unk_0x98E18969B1D0C4AB(iLocal_94)) && !unk_0x3D6C3476988DE6E1(unk_0x3BCD5137CE6A77E2(iLocal_158, fLocal_599, sLocal_156), 4f))
					{
						unk_0x3CBE9F07524C242D(iLocal_94, 0, 0);
						unk_0x50B76EE36FBE865F(iLocal_94);
						unk_0x069557E67CC67C29(iLocal_94, iLocal_158, sLocal_156, 1);
						unk_0x2978CEBD6EE3E821(iLocal_94, fLocal_599);
						iLocal_596 = 1;
					}
				}
			}
			else if (vdist2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(iLocal_89, 1)) < 9025f)
			{
				if (unk_0xAB0BB1BDD76B67DC(iLocal_94))
				{
					unk_0x3CBE9F07524C242D(iLocal_94, 1, 0);
					unk_0x2C7A52191F8DFF00(iLocal_94, 786549);
					iLocal_596 = 0;
				}
			}
		}
		else if (unk_0x4E8DA737B686529A(iLocal_89, -1794415470) != 1)
		{
			unk_0x95CA4545D0C61309(iLocal_89, iLocal_94, 20000, -1, 2f, 1, 0);
		}
	}
}

float func_280(struct<3> Param0, int iParam1, char* sParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2[3];
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	int iVar12;
	struct<3> Var13;
	struct<3> Var14;
	struct<3> Var15;
	struct<3> Var16;
	bool bVar17;
	float fVar18;
	float fVar19;
	
	if (unk_0x9CF7186A344D26A9(iParam1, sParam2))
	{
		iVar2[0] = (*uParam3 - 1);
		iVar2[1] = (*uParam3 - 2);
		iVar2[2] = (*uParam3 - 3);
		iVar0 = 0;
		while (iVar0 < *uParam3)
		{
			fVar3 = unk_0x0BCA9ADE67DF9DD8((Param0.x - (*uParam3)[iVar0 /*3*/]));
			fVar4 = unk_0x0BCA9ADE67DF9DD8((Param0.f_1 - (uParam3[iVar0 /*3*/])->f_1));
			fVar5 = (fVar3 + fVar4);
			fVar6 = 0f;
			iVar7 = 0;
			iVar1 = 0;
			while (iVar1 < iVar2)
			{
				if (iVar0 != iVar2[iVar1])
				{
					fVar8 = unk_0x0BCA9ADE67DF9DD8((Param0.x - (*uParam3)[iVar2[iVar1] /*3*/]));
					fVar9 = unk_0x0BCA9ADE67DF9DD8((Param0.f_1 - (uParam3[iVar2[iVar1] /*3*/])->f_1));
					fVar10 = (fVar8 + fVar9);
					if (fVar10 > fVar6)
					{
						iVar7 = iVar1;
						fVar6 = fVar10;
					}
				}
				iVar1++;
			}
			if (fVar5 < fVar6)
			{
				iVar2[iVar7] = iVar0;
			}
			iVar0++;
		}
		fVar11 = 999999f;
		iVar0 = 0;
		while (iVar0 < iVar2)
		{
			if (iVar2[iVar0] > 0)
			{
				Var14 = { unk_0x2D03FF047BE9813C(Param0, *(uParam3[iVar2[iVar0] /*3*/]), *(uParam3[(iVar2[iVar0] - 1) /*3*/]), 1) };
			}
			else
			{
				Var14 = { *(uParam3[0 /*3*/]) };
			}
			if (iVar2[iVar0] < (*uParam3 - 2))
			{
				Var15 = { unk_0x2D03FF047BE9813C(Param0, *(uParam3[iVar2[iVar0] /*3*/]), *(uParam3[iVar2[iVar0] + 1 /*3*/]), 1) };
			}
			else
			{
				Var15 = { *(uParam3[(*uParam3 - 1) /*3*/]) };
			}
			bVar17 = false;
			if (vdist2(Param0, Var14) < vdist2(Param0, Var15))
			{
				Var16 = { Var14 };
			}
			else
			{
				bVar17 = true;
				Var16 = { Var15 };
			}
			if (vdist2(Param0, Var16) < fVar11)
			{
				if (bVar17)
				{
					iVar12 = iVar2[iVar0];
				}
				else
				{
					iVar12 = (iVar2[iVar0] - 1);
				}
				fVar11 = vdist2(Param0, Var16);
				Var13 = { Var16 };
			}
			iVar0++;
		}
		iVar12 = func_281(iVar12, 0, (*uParam3 - 2));
		fVar18 = (unk_0xDC2AF9AB32FB87A8(iParam1, sParam2) / IntToFloat((*uParam3 - 1)));
		fVar19 = ((vdist(*(uParam3[iVar12 /*3*/]), Var13) / vdist(*(uParam3[iVar12 /*3*/]), *(uParam3[iVar12 + 1 /*3*/]))) * fVar18);
		return (fVar19 + (IntToFloat(iVar12) * fVar18));
	}
	return 0f;
}

int func_281(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_282(int iParam0)
{
	if (!unk_0xE0A6F16F546C8274())
	{
		unk_0x6E1E3A5B1F9AB95B(iParam0);
		while (!unk_0xE0A6F16F546C8274())
		{
			wait(0);
		}
	}
}

void func_283()
{
	int iVar0;
	struct<6> Var1;
	var uVar2;
	var uVar3;
	
	unk_0x6906086484B6A5CE(unk_0x1146A9AE09CE2B14());
	unk_0xDA8ACB3906F9E924(unk_0x1146A9AE09CE2B14());
	unk_0xD29D1374727D1C85(0.4f);
	if (iLocal_159 != 1000)
	{
		if (vdist2(unk_0xD6E677FAD7521410(iLocal_89, 1), unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1)) > 2500f)
		{
			iLocal_163 = iLocal_159;
			iLocal_159 = 1000;
		}
	}
	if (unk_0xB30CD10E2CD1B67D("FAMILY_2_DRIVE_TO_BEACH"))
	{
		if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
		{
			unk_0xC0BBE340BE2AA02D("FAMILY_2_DRIVE_TO_BEACH");
		}
	}
	if (iLocal_117 && iLocal_159 > 1)
	{
		if ((unk_0xDFB7BFA6482FEE1E() - iLocal_595) < 2000)
		{
			unk_0x297D19A25D01587C(unk_0x7D2B9E6A64637269(), 1f);
		}
		else
		{
			iLocal_117 = 0;
		}
	}
	if (!unk_0xECEC7528A52B4EE8(iLocal_89) && !unk_0xECEC7528A52B4EE8(iLocal_90))
	{
		switch (iLocal_159)
		{
			case 0:
				iLocal_547 = 0;
				unk_0xC1A7CF4B179CD225(iLocal_89);
				unk_0x498685EB9132AF88(iLocal_158, sLocal_156);
				unk_0x068BDE31F7D112BB("veh@bicycle@mountain_f@front@base");
				iLocal_159++;
				iLocal_165 = 0;
				iLocal_166 = 0;
				iLocal_164 = 4;
				iLocal_594 = 0;
				iLocal_595 = unk_0xDFB7BFA6482FEE1E();
				unk_0x5E84945E26CAEF1F(0.3f);
				if (iLocal_155)
				{
					iLocal_159 = -1;
				}
				break;
			
			case -1:
				func_101();
				if ((!unk_0xECEC7528A52B4EE8(iLocal_90) && unk_0xCC09B877A009E41F(-1105.241f, -1697.025f, 3.3678f, 2f, joaat("prop_table_03_chr"), 0)) && unk_0x715C70D06215B9E9(iLocal_90, "PROP_HUMAN_SEAT_CHAIR"))
				{
					iLocal_155 = 0;
					iLocal_159 = 1;
				}
				break;
			
			case 1:
				uLocal_102 = func_215(Local_133, 0);
				if (bLocal_182)
				{
					func_151("FM2_BK2BIKE", 7500, 1);
					settimera(0);
				}
				unk_0x8ADA462BC5F42FD8(unk_0x7D2B9E6A64637269(), iLocal_89, 40000, 4, 2);
				unk_0x8ADA462BC5F42FD8(iLocal_89, unk_0x7D2B9E6A64637269(), 40000, 4, 2);
				iLocal_591 = 0;
				if (func_177())
				{
					Var1 = { func_317() };
					if (!unk_0xDA654EB115F9FF7D("FAM2_HIRE1", &Var1))
					{
						func_174();
					}
				}
				iLocal_593 = 0;
				if (unk_0x8B6A925F148E0E94())
				{
					unk_0xEE90D1369E1800A2(unk_0x7D2B9E6A64637269(), -668482597, 0, 0, 0);
				}
				iLocal_159++;
				break;
			
			case 2:
				if (Global_111340)
				{
					while (Global_111340)
					{
						wait(0);
					}
				}
				if (unk_0x8B6A925F148E0E94() && !unk_0x07BE48DF95787FCB())
				{
					unk_0x6E1E3A5B1F9AB95B(1000);
				}
				if (unk_0xC49311A2A500FF09(iLocal_89, 1))
				{
					if (!func_177())
					{
						unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), true, 0);
						if (unk_0xBFCE58B2B3249999(iLocal_95, 0) && unk_0xF41EB7643E61A928(iLocal_89, iLocal_95, 0))
						{
							unk_0xEDC0317C5B604BB1(iLocal_89, iLocal_95, 0);
						}
						else
						{
							unk_0xCC5ED49CF9C9215F(iLocal_89, 0, 0);
						}
					}
				}
				else
				{
					settimerb(0);
					iLocal_159++;
				}
				break;
			
			case 3:
				if (!unk_0xECEC7528A52B4EE8(iLocal_89) && timera() > 3000)
				{
					if (!unk_0x836F48E8C4A773BF(iLocal_89, unk_0x7D2B9E6A64637269(), 60f))
					{
						if (unk_0x4E8DA737B686529A(iLocal_89, 242628503) != 1)
						{
							unk_0xCA089CD1A17D76DF(iLocal_89);
							unk_0x8ADA462BC5F42FD8(iLocal_89, unk_0x7D2B9E6A64637269(), -1, 16, 2);
							unk_0x5C679902079A7E80(&uLocal_520);
							unk_0xB0C1A43193C25F7A(0, unk_0x7D2B9E6A64637269(), 0);
							unk_0x8ADA462BC5F42FD8(0, unk_0x7D2B9E6A64637269(), -1, 16, 2);
							unk_0x1BBD0A5729AB1226(uLocal_520);
							unk_0x8A1AC8EBC73850C8(iLocal_89, uLocal_520);
							unk_0x8D5B447F21217223(&uLocal_520);
						}
					}
					else if (unk_0x4E8DA737B686529A(iLocal_89, 242628503) != 1)
					{
						if (!unk_0xECEC7528A52B4EE8(iLocal_89))
						{
							unk_0x8ADA462BC5F42FD8(iLocal_89, unk_0x7D2B9E6A64637269(), -1, 16, 2);
						}
					}
					if (!unk_0xECEC7528A52B4EE8(iLocal_90))
					{
						if ((vdist(unk_0xD6E677FAD7521410(iLocal_89, 1), unk_0xD6E677FAD7521410(iLocal_90, 1)) > (vdist(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(iLocal_90, 1)) + 0.3f) || unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -1099.756f, -1700.726f, 3.349046f, -1111.517f, -1683.962f, 5.340389f, 7.25f, 0, 1, 0)) || timera() > 6000)
						{
							unk_0xCA089CD1A17D76DF(iLocal_89);
							iLocal_159++;
						}
					}
				}
				break;
			
			case 4:
				if (unk_0x4E8DA737B686529A(iLocal_89, 242628503) != 1 || unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -1099.756f, -1700.726f, 3.349046f, -1111.517f, -1683.962f, 5.340389f, 7.25f, 0, 1, 0))
				{
					if (unk_0xBFCE58B2B3249999(iLocal_95, 0))
					{
						unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), true, 0);
						unk_0xA2C015B68CE01357(iLocal_95, 0);
					}
					unk_0x5C679902079A7E80(&uVar2);
					if (unk_0xC49311A2A500FF09(iLocal_89, 0))
					{
						unk_0xCC5ED49CF9C9215F(0, 0, 0);
					}
					unk_0x45B1B4E55BF15523(0, -1102.187f, -1697.891f, 3.3562f, 2f, 20000, 1048576000, 0, 1193033728);
					unk_0xB0C1A43193C25F7A(0, unk_0x7D2B9E6A64637269(), 0);
					unk_0x1BBD0A5729AB1226(uVar2);
					unk_0x8A1AC8EBC73850C8(iLocal_89, uVar2);
					unk_0x8D5B447F21217223(&uVar2);
					unk_0x1A1227D4CEE3DA07(iLocal_89, 1f);
					iLocal_159++;
				}
				break;
			
			case 5:
				unk_0x1A1227D4CEE3DA07(iLocal_89, 1f);
				if (unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -1099.756f, -1700.726f, 3.349046f, -1111.517f, -1683.962f, 5.340389f, 7.25f, 0, 1, 0))
				{
					if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
					{
						func_155();
						if (func_158(&Local_549, cLocal_202, "FAM2_HIRE3", 8, 0, 0, 0))
						{
							unk_0x1036762BD3781C84();
							unk_0x8ADA462BC5F42FD8(iLocal_90, unk_0x7D2B9E6A64637269(), 30000, 0, 2);
							unk_0x8ADA462BC5F42FD8(unk_0x7D2B9E6A64637269(), iLocal_90, 10000, 0, 2);
							unk_0x1AD5BCFEC31BB8D9(&uLocal_102);
							settimera(0);
							iLocal_159++;
						}
					}
					else
					{
						iLocal_159++;
					}
				}
				break;
			
			case 6:
				if (unk_0xBFCE58B2B3249999(iLocal_96[iLocal_164], 0) && !unk_0xF41EB7643E61A928(iLocal_89, iLocal_96[iLocal_164], 0))
				{
					if (!unk_0x9B73EB6255D4AE81(iLocal_96[iLocal_164], -1, 0))
					{
						if (iLocal_593)
						{
							unk_0xCA089CD1A17D76DF(iLocal_89);
							iLocal_593 = 0;
						}
						if (iLocal_164 == 4)
						{
							iLocal_164 = 1;
						}
						else if (iLocal_164 == 1)
						{
							iLocal_164 = 4;
						}
					}
				}
				if (!unk_0x419E13582192CFEA(iLocal_93))
				{
					unk_0x1A1227D4CEE3DA07(iLocal_89, 1f);
				}
				unk_0x068BDE31F7D112BB("veh@bicycle@mountain_f@front@base");
				if (unk_0x0EC2B29D4172D225("veh@bicycle@mountain_f@front@base"))
				{
					if (unk_0xBFCE58B2B3249999(iLocal_96[iLocal_164], 0))
					{
						if (!iLocal_593 && (unk_0x8954E9D0A9F6F8CF(iLocal_89, -1099.756f, -1700.726f, 3.349046f, -1111.517f, -1683.962f, 5.340389f, 9.25f, 0, 1, 0) || !unk_0x8954E9D0A9F6F8CF(iLocal_96[iLocal_164], -1099.756f, -1700.726f, 3.349046f, -1111.517f, -1683.962f, 5.340389f, 9.25f, 0, 1, 0)))
						{
							unk_0x5C679902079A7E80(&uVar3);
							unk_0x95CA4545D0C61309(0, iLocal_96[iLocal_164], -1, -1, 2f, 1, 0);
							unk_0x373635EFD76DFAB3(0, 2000);
							unk_0xE946751408DFA71B(0, iLocal_96[iLocal_164], -1099.682f, -1694.073f, 3.2758f, 5f, 0, joaat("cruiser"), 786471, 2f, 3f);
							unk_0x1BBD0A5729AB1226(uVar3);
							unk_0x8A1AC8EBC73850C8(iLocal_89, uVar3);
							unk_0x8D5B447F21217223(&uVar3);
							iLocal_593 = 1;
						}
					}
				}
				if (!unk_0x419E13582192CFEA(iLocal_94))
				{
					iVar0 = 0;
					while (iVar0 < iLocal_96)
					{
						if (unk_0x419E13582192CFEA(iLocal_96[iVar0]) && unk_0xBFCE58B2B3249999(iLocal_96[iVar0], 0))
						{
							if (unk_0x2C10A11A684CFE96(iLocal_89, iLocal_96[iVar0]))
							{
								iLocal_94 = iLocal_96[iVar0];
								unk_0x2B0DB0BDB2C7B28B(iLocal_89, unk_0x15173FB88ABC94F9("MISS_FAMILY2_JIMMY_BICYCLE"));
								unk_0x764D10CFB2EDD065(iLocal_94, 0);
								func_284(0, 1, 20);
								if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1))
								{
									func_158(&Local_549, cLocal_202, "FAM2_JBIKE", 8, 0, 0, 0);
								}
								unk_0x5249BC3946DCDA75(iLocal_89, 1);
								iLocal_165 = iVar0;
								unk_0xA2C015B68CE01357(iLocal_94, 0);
							}
						}
						iVar0++;
					}
				}
				else if (!unk_0xC49311A2A500FF09(iLocal_89, 0))
				{
					func_104("FM2_JSPOOK");
				}
				if (!unk_0x419E13582192CFEA(iLocal_93))
				{
					iVar0 = 0;
					while (iVar0 < iLocal_96)
					{
						if (unk_0xBFCE58B2B3249999(iLocal_96[iVar0], 0))
						{
							if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_96[iVar0], 1))
							{
								iLocal_93 = iLocal_96[iVar0];
								func_284(0, 1, 20);
								unk_0xA2C015B68CE01357(iLocal_96[iVar0], 0);
								unk_0x1036762BD3781C84();
								iLocal_166 = iVar0;
								if ((vdist(unk_0xD6E677FAD7521410(iLocal_89, 1), -1108.664f, -1691.623f, 3.3746f) > 5f && !unk_0xC49311A2A500FF09(iLocal_89, 0)) && iLocal_593)
								{
									iLocal_593 = 0;
								}
							}
						}
						iVar0++;
					}
					if (!iLocal_591)
					{
						if (timera() > 1000)
						{
							if (!func_177() || unk_0xC82CD1DB42480082(203) == 0)
							{
								func_149("FM2_CHSEBIKE", 7500, 1);
								iLocal_591 = 1;
							}
						}
					}
				}
				else
				{
					if (!iLocal_594)
					{
						if (func_158(&Local_549, cLocal_202, "FAM2_HIRE4", 8, 0, 0, 0))
						{
							iLocal_594 = 1;
						}
					}
					if (!unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_93, 0))
					{
						iLocal_93 = 0;
					}
				}
				if (((((!func_177() && unk_0x419E13582192CFEA(iLocal_94)) && unk_0x419E13582192CFEA(iLocal_93)) && unk_0xBFCE58B2B3249999(iLocal_94, 0)) && unk_0xBFCE58B2B3249999(iLocal_93, 0)) && unk_0x2C10A11A684CFE96(iLocal_89, iLocal_94))
				{
					iLocal_96[iLocal_166] = 0;
					iLocal_96[iLocal_165] = 0;
					unk_0x2DC2890038BFF758(4f, 10f, 3);
					iLocal_159++;
				}
				break;
			
			case 7:
				if (timera() > 3000)
				{
					func_207(3);
				}
				break;
			
			case 1000:
				if (!unk_0x575B7C28D81C0B4D(uLocal_104))
				{
					if (!bLocal_176)
					{
						unk_0x1036762BD3781C84();
						func_155();
						func_151("FM2_JIMGB", 7500, 1);
					}
					uLocal_104 = func_152(iLocal_89, 0, 145);
				}
				if (unk_0x575B7C28D81C0B4D(uLocal_102))
				{
					if (unk_0x5D8B0ADD9EFBD7B9(uLocal_102) != 0)
					{
						unk_0x97A41BF3F05FC07D(uLocal_102, 0);
					}
				}
				if (vdist2(unk_0xD6E677FAD7521410(iLocal_89, 1), unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1)) < 400f || (!unk_0xECEC7528A52B4EE8(iLocal_90) && vdist2(unk_0xD6E677FAD7521410(iLocal_90, 1), unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1)) < 900f))
				{
					iLocal_159 = iLocal_163;
					if (unk_0x575B7C28D81C0B4D(uLocal_102))
					{
						if (unk_0x5D8B0ADD9EFBD7B9(uLocal_102) != 255)
						{
							unk_0x97A41BF3F05FC07D(uLocal_102, 255);
						}
					}
					if (unk_0x575B7C28D81C0B4D(uLocal_104))
					{
						unk_0x1AD5BCFEC31BB8D9(&uLocal_104);
					}
				}
				if (vdist2(unk_0xD6E677FAD7521410(iLocal_89, 1), unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1)) > 22500f)
				{
					func_104("FM2_JIMAB");
				}
				break;
		}
		if (!iLocal_592)
		{
			if ((unk_0xBFCE58B2B3249999(iLocal_94, 0) && !unk_0xECEC7528A52B4EE8(iLocal_89)) && unk_0xF41EB7643E61A928(iLocal_89, iLocal_94, 0))
			{
				unk_0xA2C015B68CE01357(iLocal_94, 0);
				iLocal_592 = 1;
			}
		}
	}
	if ((unk_0x419E13582192CFEA(iLocal_93) && unk_0xBFCE58B2B3249999(iLocal_93, 0)) && unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_93, 0))
	{
		if (!unk_0xB30CD10E2CD1B67D("FAMILY_2_BIKE_RACE_JIMMY"))
		{
			unk_0xB84B43B766630B5C("FAMILY_2_BIKE_RACE_JIMMY");
		}
	}
}

int func_284(int iParam0, int iParam1, int iParam2)
{
	if (func_316(iParam0) == 3)
	{
		return 0;
	}
	if (func_316(iParam0) == 4)
	{
		return 0;
	}
	return func_285(func_316(iParam0), 0, iParam1, iParam2, 0);
}

int func_285(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_315();
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
					func_314(99, 1);
					func_313(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_313(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_313(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_298(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_294(5))
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
							func_313(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_313(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_313(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_294(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_313(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_313(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_313(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_313(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_313(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_313(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_313(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_313(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_313(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0xC34DC2DC2423B647())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_313(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_313(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_313(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_313(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_313(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_313(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_294(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_313(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_313(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_313(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_313(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_313(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_313(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_293(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_314(95, iParam3);
					break;
				
				case 1:
					func_314(97, iParam3);
					break;
				
				case 2:
					func_314(96, iParam3);
					break;
			}
			func_314(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor((fVar0 * to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_288(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_288(iVar1);
	}
	iVar5 = (Global_59272[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_59272[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_59272[iVar2] = 2147483647;
				}
				else
				{
					Global_59272[iVar2] = (Global_59272[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_313(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_313(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_313(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_59272[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_59272[iVar2];
			Global_59272[iVar2] = (Global_59272[iVar2] - iParam3);
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
		Global_112293.f_20562.f_233[iVar2 /*69*/].f_2[Global_112293.f_20562.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_112293.f_20562.f_233[iVar2 /*69*/].f_2[Global_112293.f_20562.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_112293.f_20562.f_233[iVar2 /*69*/].f_2[Global_112293.f_20562.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_112293.f_20562.f_233[iVar2 /*69*/]++;
		Global_112293.f_20562.f_233[iVar2 /*69*/].f_1++;
		if (Global_112293.f_20562.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_112293.f_20562.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_287(iParam0);
	if (Global_42009 == 15)
	{
		func_286(0);
	}
	return 1;
}

void func_286(bool bParam0)
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
			Global_112293.f_20562.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_112293.f_20562.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_112293.f_20562.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_112293.f_20562.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_112293.f_20562.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_112293.f_20562.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_59280[iVar0 /*3*/][0] = Global_112293.f_20562[iVar0];
		Global_59280.f_31[iVar0 /*3*/][0] = Global_112293.f_20562.f_11[iVar0];
		Global_59280.f_62[iVar0 /*3*/][0] = Global_112293.f_20562.f_22[iVar0];
		Global_59280.f_93[iVar0 /*3*/][0] = Global_112293.f_20562.f_33[iVar0];
		Global_59280.f_124[iVar0 /*3*/][0] = Global_112293.f_20562.f_44[iVar0];
		Global_59280.f_155[iVar0 /*3*/][0] = Global_112293.f_20562.f_55[iVar0];
		Global_59280.f_186[iVar0 /*3*/][0] = Global_112293.f_20562.f_66[iVar0];
		Global_59280.f_217[iVar0 /*3*/][0] = Global_112293.f_20562.f_77[iVar0];
		Global_59280.f_248[iVar0 /*3*/][0] = Global_112293.f_20562.f_88[iVar0];
		if (!bParam0)
		{
			Global_59280[iVar0 /*3*/][1] = Global_112293.f_20562[iVar0];
			Global_59280.f_31[iVar0 /*3*/][1] = Global_112293.f_20562.f_11[iVar0];
			Global_59280.f_62[iVar0 /*3*/][1] = Global_112293.f_20562.f_22[iVar0];
			Global_59280.f_93[iVar0 /*3*/][1] = Global_112293.f_20562.f_33[iVar0];
			Global_59280.f_124[iVar0 /*3*/][1] = Global_112293.f_20562.f_44[iVar0];
			Global_59280.f_155[iVar0 /*3*/][1] = Global_112293.f_20562.f_55[iVar0];
			Global_59280.f_186[iVar0 /*3*/][1] = Global_112293.f_20562.f_66[iVar0];
			Global_59280.f_217[iVar0 /*3*/][1] = Global_112293.f_20562.f_77[iVar0];
			Global_59280.f_248[iVar0 /*3*/][1] = Global_112293.f_20562.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_287(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_59272[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xAC4FD27671081628(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0xAC4FD27671081628(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0xAC4FD27671081628(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_288(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_292(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_292(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_292(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_292(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_291(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_291(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_291(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_291(8274, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_291(8275, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_291(8276, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!unk_0x02BFF15CAA701972())
	{
		if (unk_0x234B68AC2E35ED5A(Global_112293.f_20562.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xC664C0067EEAB8D1(&(Global_112293.f_20562.f_471), iParam0);
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Global_112293.f_20562.f_471, iParam0) || unk_0x234B68AC2E35ED5A(Global_2097152[func_290() /*5557*/].f_675.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xC664C0067EEAB8D1(&(Global_112293.f_20562.f_471), iParam0);
		unk_0xC664C0067EEAB8D1(&(Global_2097152[func_290() /*5557*/].f_675.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xAD97A7EDCF347FBB("COUP_RED");
		unk_0x1896EC0B030A48A2(func_289(iParam0));
		unk_0x1664AA1696810AD6(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_289(int iParam0)
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

int func_290()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_291(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2555716[iParam0 /*3*/][func_21(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xAC4FD27671081628(iVar0, iParam1, iParam3);
	}
}

int func_292(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_22();
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

void func_293(int iParam0)
{
	func_314(93, iParam0);
	func_314(29, iParam0);
	func_314(30, iParam0);
}

bool func_294(int iParam0)
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
		return func_295(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_295(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_295(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_295(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0x666C16A4ED8F3098();
		iVar1 = func_20(8271, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0x666C16A4ED8F3098();
		iVar3 = func_20(8272, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0x666C16A4ED8F3098();
		iVar5 = func_20(8273, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0x666C16A4ED8F3098();
		iVar7 = func_20(8274, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0x666C16A4ED8F3098();
		iVar9 = func_20(8275, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0x666C16A4ED8F3098();
		iVar11 = func_20(8276, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!unk_0x02BFF15CAA701972())
	{
		return unk_0x234B68AC2E35ED5A(Global_112293.f_20562.f_471, iParam0);
	}
	return unk_0x234B68AC2E35ED5A(Global_2097152[func_290() /*5557*/].f_675.f_10, iParam0);
}

int func_295(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_22();
	}
	iVar1 = func_297(iParam0, iParam1);
	uVar2 = func_296(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xE51D1C588E8D869E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_296(int iParam0)
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

int func_297(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_22();
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

int func_298(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x4999364EFF3B7CFC(27))
	{
		return 0;
	}
	if (unk_0xD885BEFA31A18D47(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xD885BEFA31A18D47(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xD885BEFA31A18D47(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0xD885BEFA31A18D47(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xAC4FD27671081628(joaat("num_cash_spent"), iVar1, 1);
		func_312(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_299(27, 1);
	return 1;
}

int func_299(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_300(iParam0, iParam1);
}

int func_300(int iParam0, int iParam1)
{
	if (func_27(14) && !func_311(iParam0))
	{
		return 0;
	}
	if (unk_0x4999364EFF3B7CFC(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_31595 != 0 && !Global_77248)
	{
		return 0;
	}
	if (func_310(&Global_4272779))
	{
		if (func_308(&Global_4272779, iParam0))
		{
			return 0;
		}
		if (func_301(&Global_4272779, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x6296023D689C5E64(iParam0))
		{
			return 0;
		}
		if (unk_0x4999364EFF3B7CFC(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_301(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x4999364EFF3B7CFC(iParam1))
	{
		return 0;
	}
	if (func_27(14) && !func_311(iParam1))
	{
		return 0;
	}
	if (func_308(uParam0, iParam1))
	{
		return 0;
	}
	if (func_307(uParam0) < 0f)
	{
		func_306(uParam0, 0);
	}
	func_304(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_302(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_302(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x4999364EFF3B7CFC(iParam1))
	{
		return 0;
	}
	if (func_27(14) && !func_311(iParam1))
	{
		return 0;
	}
	if (func_308(uParam0, iParam1))
	{
		return 0;
	}
	if (func_307(uParam0) < 0f)
	{
		func_306(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_303(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_303(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_304(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_305(uParam0, iVar0);
		iVar0++;
	}
	func_306(uParam0, (Global_4272778 - 0.5f));
}

void func_305(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_306(var uParam0, float fParam1)
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

float func_307(var uParam0)
{
	return uParam0->f_80;
}

bool func_308(var uParam0, int iParam1)
{
	return func_309(uParam0, iParam1) != -1;
}

int func_309(var uParam0, int iParam1)
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

bool func_310(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_311(int iParam0)
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

int func_312(int iParam0, int iParam1)
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
	iVar0 = unk_0x37A2D5DD137657EB(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x74634292CAC72DD6(iParam0, iParam1);
	}
	return 0;
}

void func_313(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xD885BEFA31A18D47(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xAC4FD27671081628(iParam0, iVar0, 1);
}

void func_314(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_57840[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x02BFF15CAA701972())
	{
		return;
	}
	if (Global_57840[iParam0 /*7*/])
	{
		unk_0xD885BEFA31A18D47(Global_57840[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xAC4FD27671081628(Global_57840[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_315()
{
	int iVar0;
	
	if (unk_0xB2EC8B4970766623())
	{
		unk_0xD885BEFA31A18D47(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_59272[0] == iVar0)
		{
			Global_59272[0] = iVar0;
		}
		unk_0xD885BEFA31A18D47(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_59272[1] == iVar0)
		{
			Global_59272[1] = iVar0;
		}
		unk_0xD885BEFA31A18D47(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_59272[2] == iVar0)
		{
			Global_59272[2] = iVar0;
		}
	}
}

int func_316(int iParam0)
{
	return Global_1878[iParam0 /*29*/].f_17;
}

struct<6> func_317()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21125 == 4)
	{
		return Global_20744;
	}
	return Var0;
}

void func_318()
{
	bool bVar0;
	var uVar1;
	
	if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		if (!unk_0x419E13582192CFEA(iLocal_108))
		{
			if (vdist2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), Local_120) < 2500f)
			{
				unk_0x16E516CA9C88FF48(joaat("prop_cs_office_chair"));
				if (unk_0xA9C0BBFB9CBB66F1(joaat("prop_cs_office_chair")))
				{
					iLocal_108 = unk_0x795434E153F90E41(joaat("prop_cs_office_chair"), -809.4098f, 172.7913f, 75.7732f, 1, 1, 0);
					unk_0x79C3AEC4C7C91A54(iLocal_108, 0f, 0f, 0.3857f, 0.9226f);
					unk_0x824F744352C8BC82(joaat("prop_cs_office_chair"));
				}
			}
		}
		else if (vdist2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), Local_120) > 5625f && unk_0x98E18969B1D0C4AB(iLocal_108))
		{
			unk_0x04F4D55F2C0C756D(&iLocal_108);
		}
	}
	func_371();
	if (vdist2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), Local_133) < 1000f)
	{
		unk_0xD29D1374727D1C85(0.5f);
	}
	if (!unk_0xECEC7528A52B4EE8(iLocal_89))
	{
		if (!unk_0xC49311A2A500FF09(iLocal_89, 0))
		{
			unk_0xD991F7672CE8EAD3(iLocal_89, 60, 1);
		}
		switch (iLocal_159)
		{
			case 0:
				iLocal_590 = 0;
				if (!unk_0x419E13582192CFEA(iLocal_98))
				{
					func_334(&iLocal_98, 0, Local_126, fLocal_127, 1, 1);
				}
				else if (unk_0xBFCE58B2B3249999(iLocal_98, 0))
				{
					unk_0x78CDDD1E6367978D(iLocal_98, Local_126, 1, 0, 0, 1);
					unk_0xCD37A28258D70638(iLocal_98, fLocal_127);
				}
				if (unk_0xBFCE58B2B3249999(iLocal_95, 0))
				{
					unk_0x8B58E7AC53EED9F1(iLocal_98, 1);
				}
				if (!unk_0xBF779C7C48AED2CE(iLocal_89))
				{
					unk_0xD9F4B63D8750476C(iLocal_89, sLocal_157, 0, 8, -1);
				}
				bLocal_175 = false;
				bLocal_176 = false;
				unk_0x6E1E3A5B1F9AB95B(500);
				unk_0x8047C496BEE89A0B("RADIO_01_CLASS_ROCK");
				if (unk_0x419E13582192CFEA(iLocal_89) && !unk_0x1F9D47D45E125FA6(iLocal_89))
				{
					unk_0x4603196EEEA2355C(iLocal_89, 1, 0);
				}
				if (iLocal_155)
				{
					unk_0xEE90D1369E1800A2(unk_0x7D2B9E6A64637269(), -668482597, 1, 1, 0);
					unk_0x8F00E6BF3D6A18D3(unk_0x1146A9AE09CE2B14(), 1f, 2000, 0, 1, 0);
					iLocal_155 = 0;
				}
				iLocal_159++;
				break;
			
			case 1:
				if (!unk_0x419E13582192CFEA(iLocal_95))
				{
					func_325(&iLocal_97, 15, -812.4639f, 159.7855f, 71.0588f, 113.1515f, 1, 1);
				}
				if (!unk_0x419E13582192CFEA(iLocal_98))
				{
					func_334(&iLocal_98, 0, Local_126, fLocal_127, 1, 1);
				}
				if (unk_0x419E13582192CFEA(iLocal_97) && unk_0x419E13582192CFEA(iLocal_98))
				{
					iLocal_159++;
				}
				break;
			
			case 2:
				if (unk_0xBF779C7C48AED2CE(iLocal_89) && !unk_0x284BE2EA89FED4E1(iLocal_89))
				{
					if (unk_0x620752C0B6B59FF1(iLocal_89) > 13)
					{
						if (unk_0x419E13582192CFEA(iLocal_98) && unk_0xBFCE58B2B3249999(iLocal_98, 0))
						{
							unk_0x95CA4545D0C61309(iLocal_89, iLocal_98, -1, 0, 1f, 1, 0);
						}
						else if (unk_0x419E13582192CFEA(iLocal_95) && unk_0xBFCE58B2B3249999(iLocal_95, 0))
						{
							unk_0x95CA4545D0C61309(iLocal_89, iLocal_95, -1, 0, 1f, 1, 0);
						}
						unk_0xD0AC51DF5D1C2659(sLocal_157);
					}
				}
				if (!iLocal_590)
				{
					if ((((unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -818.1541f, 177.6431f, 75.12778f, -819.7911f, 176.9991f, 70.62586f, 3.25f, 0, 1, 0) || unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -795.1501f, 176.5434f, 74.13519f, -795.5303f, 177.5501f, 71.83518f, 2.5f, 0, 1, 0)) || unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -793.7302f, 181.551f, 74.13519f, -792.5385f, 182.0002f, 71.83518f, 2.5f, 0, 1, 0)) || unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -802.4019f, 167.6163f, 79.10717f, -801.4336f, 165.4639f, 76.0724f, 2.5f, 0, 1, 0)) || unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -806.8907f, 185.8457f, 71.43164f, -807.4306f, 187.2417f, 74.22646f, 1.75f, 0, 1, 0))
					{
						iLocal_590 = 1;
					}
				}
				bVar0 = false;
				if ((unk_0xBFCE58B2B3249999(iLocal_98, 0) && unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_98, 0)) || !unk_0x419E13582192CFEA(iLocal_98))
				{
					bVar0 = true;
				}
				if ((vdist(unk_0xD6E677FAD7521410(iLocal_89, 1), unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1)) > 15f || unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0)) && iLocal_590)
				{
					if (!bVar0)
					{
						unk_0xCA089CD1A17D76DF(iLocal_89);
					}
					unk_0x4B75B1FF20EA3A22(iLocal_89, unk_0xC66769C13C830856(unk_0x1146A9AE09CE2B14()));
					unk_0x95C1F609605A12FF(iLocal_89, 0);
					iLocal_159++;
				}
				break;
			
			case 3:
				if (unk_0xBF779C7C48AED2CE(iLocal_89))
				{
					if (unk_0x620752C0B6B59FF1(iLocal_89) > 13)
					{
						if (unk_0x419E13582192CFEA(iLocal_98) && unk_0xBFCE58B2B3249999(iLocal_98, 0))
						{
							unk_0x95CA4545D0C61309(iLocal_89, iLocal_98, -1, 0, 1f, 1, 0);
						}
						else if (unk_0x419E13582192CFEA(iLocal_95) && unk_0xBFCE58B2B3249999(iLocal_95, 0))
						{
							unk_0x95CA4545D0C61309(iLocal_89, iLocal_95, -1, 0, 1f, 1, 0);
							unk_0xEE90D1369E1800A2(iLocal_89, -668482597, 0, 0, 0);
						}
						unk_0xD0AC51DF5D1C2659(sLocal_157);
					}
				}
				if (func_157(iLocal_89))
				{
					if (!unk_0x419E13582192CFEA(iLocal_95))
					{
						if ((unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0) && unk_0xBFCE58B2B3249999(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0), 0)) && unk_0x27FC1B0077581B37(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0), -1, 0) == unk_0x7D2B9E6A64637269())
						{
							iLocal_95 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
							unk_0x4985CD0720AFD468(iLocal_95, 1, 1);
							unk_0x8B58E7AC53EED9F1(iLocal_95, 1);
							unk_0x2DC2890038BFF758(3f, 5f, 3);
							func_324(iLocal_95, 209);
						}
					}
					else
					{
						if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_95, 0))
						{
							bLocal_175 = true;
						}
						if (unk_0xBFCE58B2B3249999(iLocal_95, 0))
						{
							if ((unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0) && !unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_95, 0)) && unk_0xBFCE58B2B3249999(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0), 0))
							{
								iLocal_95 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
								unk_0x4985CD0720AFD468(iLocal_95, 1, 1);
								unk_0x8B58E7AC53EED9F1(iLocal_95, 1);
								func_324(iLocal_95, 209);
							}
						}
						else
						{
							unk_0x795957CD3A0042C8(&iLocal_95);
						}
					}
					if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
					{
						bLocal_175 = false;
					}
					if (bLocal_175)
					{
						if (unk_0x575B7C28D81C0B4D(uLocal_102))
						{
							if (!func_106(unk_0xB5BBED356C99E704(uLocal_102), Local_131, 0))
							{
								unk_0x1AD5BCFEC31BB8D9(&uLocal_102);
							}
						}
						else
						{
							uLocal_102 = func_215(Local_131, 1);
						}
					}
					else if (unk_0x575B7C28D81C0B4D(uLocal_102))
					{
						if (!func_106(unk_0xB5BBED356C99E704(uLocal_102), -1103.213f, -1695.151f, 3.3416f, 0))
						{
							unk_0x1AD5BCFEC31BB8D9(&uLocal_102);
						}
					}
					else
					{
						uLocal_102 = func_215(-1103.213f, -1695.151f, 3.3416f, 0);
					}
					if (bLocal_175)
					{
						if ((unk_0xBFCE58B2B3249999(iLocal_95, 0) && unk_0x591190E69BE43117(iLocal_95, Local_131, 3f, 3f, 2f, 1, 1, 0)) && unk_0x2C10A11A684CFE96(unk_0x7D2B9E6A64637269(), iLocal_95))
						{
							unk_0x1AD5BCFEC31BB8D9(&uLocal_102);
							iLocal_159++;
						}
					}
					else if (unk_0x591190E69BE43117(unk_0x7D2B9E6A64637269(), -1103.213f, -1695.151f, 3.3416f, 6f, 6f, 2f, 1, 1, 0))
					{
						func_207(2);
					}
					if (unk_0x575B7C28D81C0B4D(uLocal_104))
					{
						unk_0x1036762BD3781C84();
						unk_0x1AD5BCFEC31BB8D9(&uLocal_104);
					}
				}
				else
				{
					if (unk_0x575B7C28D81C0B4D(uLocal_102))
					{
						unk_0x1AD5BCFEC31BB8D9(&uLocal_102);
					}
					if (!unk_0x575B7C28D81C0B4D(uLocal_104))
					{
						unk_0x1036762BD3781C84();
						if (func_177())
						{
							Local_556 = { func_176() };
							func_174();
							iLocal_555 = 1;
						}
						func_155();
						if (!bLocal_176)
						{
							func_151("FM2_JIMGB", 7500, 1);
						}
						uLocal_104 = func_152(iLocal_89, 0, 145);
					}
				}
				if ((unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0) && unk_0xBFCE58B2B3249999(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0), 0)) && unk_0x3CF5ADE443D18312(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0)) == 0)
				{
					if (!func_177() && !iLocal_183)
					{
						func_151("FM2_BIGGERV", 7500, 1);
						iLocal_183 = 1;
					}
				}
				else if (!func_177() && iLocal_183)
				{
					unk_0x1036762BD3781C84();
					iLocal_183 = 0;
				}
				break;
			
			case 4:
				if (unk_0xBFCE58B2B3249999(iLocal_95, 0))
				{
					if (func_208(iLocal_95, 4f, 1, 1056964608, 0, 1, 0))
					{
						if (unk_0xF41EB7643E61A928(iLocal_89, iLocal_95, 0))
						{
							if (func_323(0))
							{
								func_319(1);
							}
							func_174();
							unk_0xDDFB0D5F3D3B74AA(unk_0x7D2B9E6A64637269(), unk_0x9E695CE384C77EF0(iLocal_95, 10f, 5f, 0f), 20000, 4, 3);
							if (!func_177())
							{
								if (func_158(&Local_549, cLocal_202, "FAM2_HIRE1", 8, 0, 0, 0))
								{
									iLocal_555 = 0;
									unk_0x8ADA462BC5F42FD8(unk_0x7D2B9E6A64637269(), iLocal_89, 30000, 4, 2);
									unk_0x5C679902079A7E80(&uVar1);
									unk_0xEDC0317C5B604BB1(0, iLocal_95, 0);
									unk_0x45B1B4E55BF15523(0, -1102.187f, -1697.891f, 3.3562f, 1f, 20000, 1048576000, 0, 1193033728);
									unk_0xB0C1A43193C25F7A(0, unk_0x7D2B9E6A64637269(), 0);
									unk_0x1BBD0A5729AB1226(uVar1);
									unk_0x8A1AC8EBC73850C8(iLocal_89, uVar1);
									unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), true, 0);
									unk_0xC1A7CF4B179CD225(iLocal_89);
									unk_0x8D5B447F21217223(&uVar1);
									unk_0x2DC2890038BFF758(4f, 4f, 4);
									iLocal_159 = 8;
								}
							}
						}
						else
						{
							unk_0x2DC2890038BFF758(5f, 10f, 3);
							func_324(0, 209);
							func_207(2);
						}
					}
				}
				break;
			
			case 5:
				if (func_158(&Local_549, cLocal_202, "FAM2_HIRE1", 8, 0, 0, 0))
				{
					unk_0x8ADA462BC5F42FD8(unk_0x7D2B9E6A64637269(), iLocal_89, 20000, 4, 3);
					settimera(0);
					iLocal_159 = 8;
				}
				break;
			
			case 8:
				unk_0x2DC2890038BFF758(5f, 10f, 4);
				func_324(0, 209);
				func_207(2);
				break;
		}
		if (unk_0xBFCE58B2B3249999(iLocal_95, 0))
		{
			if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_95, 0))
			{
				if (!unk_0xB30CD10E2CD1B67D("FAMILY_2_DRIVE_TO_BEACH"))
				{
					unk_0xB84B43B766630B5C("FAMILY_2_DRIVE_TO_BEACH");
				}
			}
			else if (unk_0xB30CD10E2CD1B67D("FAMILY_2_DRIVE_TO_BEACH"))
			{
				unk_0xC0BBE340BE2AA02D("FAMILY_2_DRIVE_TO_BEACH");
			}
		}
	}
	if (unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) > 0)
	{
		func_147();
	}
}

void func_319(int iParam0)
{
	if (func_322())
	{
		return;
	}
	if (Global_19984)
	{
		if (func_321())
		{
			func_320(1, 1);
		}
		else
		{
			func_320(0, 0);
		}
	}
	if (Global_19798.f_1 == 10 || Global_19798.f_1 == 9)
	{
		unk_0x191DDA30577F440A(&Global_7669, 16);
	}
	if (unk_0x8820F6FCD373F9F7())
	{
		unk_0x75B41F5020877259(0);
	}
	Global_21125 = 5;
	if (iParam0 == 1)
	{
		unk_0x191DDA30577F440A(&Global_7668, 30);
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&Global_7668, 30);
	}
	if (!func_167())
	{
		Global_19798.f_1 = 3;
	}
}

void func_320(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_323(0))
		{
			Global_19984 = 1;
			if (bParam1)
			{
				unk_0x3AEC124A3999B3D1(&Global_19735);
			}
			Global_19726 = { Global_19744[Global_19743 /*3*/] };
			unk_0xA48FA5CE681A5230(Global_19726);
		}
	}
	else if (Global_19984 == 1)
	{
		Global_19984 = 0;
		Global_19726 = { Global_19751[Global_19743 /*3*/] };
		if (bParam1)
		{
			unk_0xA48FA5CE681A5230(Global_19735);
		}
		else
		{
			unk_0xA48FA5CE681A5230(Global_19726);
		}
	}
}

bool func_321()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 5);
}

bool func_322()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 19);
}

int func_323(int iParam0)
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

void func_324(int iParam0, int iParam1)
{
	Global_62109 = iParam0;
	Global_62110 = iParam1;
}

int func_325(int iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, int iParam5)
{
	struct<98> Var0;
	int iVar1;
	int iVar2;
	
	if (!func_89(iParam1))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_206(iParam1, &Var0, iParam5);
		if (unk_0x419E13582192CFEA(*iParam0))
		{
			if (unk_0x6471F4759775FCA4(*iParam0) != Var0)
			{
			}
			return 1;
		}
		if ((iParam1 == 17 && Global_112293.f_2361.f_539.f_3618[0 /*197*/][0 /*98*/] == Var0) || (iParam1 == 15 && Global_112293.f_2361.f_539.f_3618[0 /*197*/][1 /*98*/] == Var0))
		{
			if (iParam1 == 17)
			{
				iVar1 = 0;
			}
			else if (iParam1 == 15)
			{
				iVar1 = 1;
			}
			unk_0x16E516CA9C88FF48(Global_112293.f_2361.f_539.f_3618[0 /*197*/][iVar1 /*98*/]);
			if (unk_0xA9C0BBFB9CBB66F1(Global_112293.f_2361.f_539.f_3618[0 /*197*/][iVar1 /*98*/]))
			{
				*iParam0 = unk_0x170478CC84C8AE2F(Global_112293.f_2361.f_539.f_3618[0 /*197*/][iVar1 /*98*/], Param2, fParam3, 0, 0, 0);
				unk_0x47D0DDD8833C5E5F(*iParam0, 1084227584);
				unk_0xDC252CD3A5DA5F65(*iParam0, 0);
				unk_0x9F6498B97F642B82(*iParam0, 0);
				unk_0xD4DF29F3D7B97053(*iParam0, 1);
				unk_0xC595907BB71C921D(*iParam0, 1250, 0);
				unk_0xEBF08082D648C482(*iParam0, 1250f);
				unk_0xAFB5FBF26893A713(*iParam0, 1250f);
				Var0.f_3 = 1250;
				unk_0xC612552622E74D36(*iParam0, Global_112293.f_2361.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_5, Global_112293.f_2361.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_6);
				unk_0xA2FEFE3BBCD9FB23(*iParam0, Global_112293.f_2361.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_7, Global_112293.f_2361.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_8);
				unk_0x4544B07E5BF6339C(*iParam0, Var0.f_2);
				iVar2 = 0;
				while (iVar2 < 12)
				{
					unk_0xB021D5C8EC8634FA(*iParam0, iVar2 + 1, !Global_112293.f_2361.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_11[iVar2]);
					iVar2++;
				}
				if (Global_112293.f_2361.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_24)
				{
					if (unk_0xCBD5BF9FD895F81F(*iParam0, 0))
					{
						if (Global_112293.f_2361.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_24)
						{
							unk_0x6E74C4FAEF001064(*iParam0, 1);
						}
						else
						{
							unk_0x149D9B4375AB4239(*iParam0, 1);
						}
					}
				}
				unk_0xFA4E6005E549B59C(*iParam0, &(Global_112293.f_2361.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_27));
				if (Global_112293.f_2361.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_26 >= 0 && Global_112293.f_2361.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_26 < unk_0xF8A80F26627AA333())
				{
					unk_0xCF882B151A34557C(*iParam0, Global_112293.f_2361.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_26);
				}
				unk_0xD18C8678B41DB690(*iParam0, Global_112293.f_2361.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_84, Global_112293.f_2361.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_85, Global_112293.f_2361.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_86);
				unk_0xED4E91A1FC7ABBF6(*iParam0, Global_112293.f_2361.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_88);
				unk_0x64058BD9F4A43D49(*iParam0, Global_112293.f_2361.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_87);
				unk_0xEDE3A270F1277EA3(*iParam0, Global_112293.f_2361.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_93, Global_112293.f_2361.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_94, Global_112293.f_2361.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_95);
				unk_0xAB256D7C8D6A4AC9(*iParam0, 2, unk_0x234B68AC2E35ED5A(Global_112293.f_2361.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_92, 28));
				unk_0xAB256D7C8D6A4AC9(*iParam0, 3, unk_0x234B68AC2E35ED5A(Global_112293.f_2361.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_92, 29));
				unk_0xAB256D7C8D6A4AC9(*iParam0, 0, unk_0x234B68AC2E35ED5A(Global_112293.f_2361.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_92, 30));
				unk_0xAB256D7C8D6A4AC9(*iParam0, 1, unk_0x234B68AC2E35ED5A(Global_112293.f_2361.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_92, 31));
				if (unk_0x8F37B08BFE649B87(*iParam0) > 1 && Global_112293.f_2361.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_89 >= 0)
				{
					unk_0xF7E38415C6027209(*iParam0, Global_112293.f_2361.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_89);
				}
				if (Global_112293.f_2361.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_90 > -1)
				{
					if (!unk_0x2F040F7AF0534E16(unk_0x6471F4759775FCA4(*iParam0)))
					{
						if (unk_0x69AF387D1A91914C(unk_0x6471F4759775FCA4(*iParam0)))
						{
							if (Global_112293.f_2361.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_90 == 6)
							{
								unk_0x29CE559068C8CC1D(*iParam0, Global_112293.f_2361.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_90);
							}
						}
						else
						{
							unk_0x29CE559068C8CC1D(*iParam0, Global_112293.f_2361.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_90);
						}
					}
				}
				func_329(iParam0, &(Global_112293.f_2361.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_31), &(Global_112293.f_2361.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_81));
				unk_0xD5C0F2C0C23EEEBE(*iParam0, Var0.f_96);
				if (bParam4)
				{
					unk_0x824F744352C8BC82(Global_112293.f_2361.f_539.f_3618[0 /*197*/][iVar1 /*98*/]);
				}
				func_328(*iParam0);
				return 1;
			}
		}
		else
		{
			unk_0x16E516CA9C88FF48(Var0);
			if (unk_0xA9C0BBFB9CBB66F1(Var0))
			{
				*iParam0 = unk_0x170478CC84C8AE2F(Var0, Param2, fParam3, 0, 0, 0);
				unk_0x47D0DDD8833C5E5F(*iParam0, 1084227584);
				unk_0xDC252CD3A5DA5F65(*iParam0, 0);
				unk_0x9F6498B97F642B82(*iParam0, 0);
				unk_0xD4DF29F3D7B97053(*iParam0, 1);
				func_326(iParam0, Var0);
				if (iParam1 == 17 || iParam1 == 15)
				{
					func_328(*iParam0);
				}
				if (bParam4)
				{
					unk_0x824F744352C8BC82(Var0);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_326(int iParam0, struct<98> Param1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	if (Param1.f_9)
	{
		unk_0x473DA067A7AE5435(*iParam0, Param1.f_4);
	}
	else
	{
		unk_0xC612552622E74D36(*iParam0, Param1.f_5, Param1.f_6);
	}
	if (Param1.f_10)
	{
		unk_0xA2FEFE3BBCD9FB23(*iParam0, Param1.f_7, Param1.f_8);
	}
	unk_0x4544B07E5BF6339C(*iParam0, Param1.f_2);
	unk_0xC595907BB71C921D(*iParam0, Param1.f_3, 0);
	iVar0 = 0;
	while (iVar0 < 12)
	{
		unk_0xB021D5C8EC8634FA(*iParam0, iVar0 + 1, !Param1.f_11[iVar0]);
		iVar0++;
	}
	if (Param1.f_24)
	{
		if (unk_0xCBD5BF9FD895F81F(*iParam0, 0))
		{
			unk_0x6E74C4FAEF001064(*iParam0, 1);
		}
	}
	if (func_327(&uVar2, &uVar1) && Param1.f_97)
	{
		unk_0xFA4E6005E549B59C(*iParam0, &uVar2);
		unk_0xCF882B151A34557C(*iParam0, uVar1);
	}
	else if (!unk_0xAB6A270F84A8781E(&(Param1.f_27)))
	{
		unk_0xFA4E6005E549B59C(*iParam0, &(Param1.f_27));
		if (Param1.f_26 >= 0 && Param1.f_26 < unk_0xF8A80F26627AA333())
		{
			unk_0xCF882B151A34557C(*iParam0, Param1.f_26);
		}
	}
	unk_0xD18C8678B41DB690(*iParam0, Param1.f_84, Param1.f_85, Param1.f_86);
	unk_0xED4E91A1FC7ABBF6(*iParam0, Param1.f_88);
	unk_0x64058BD9F4A43D49(*iParam0, Param1.f_87);
	unk_0xEDE3A270F1277EA3(*iParam0, Param1.f_93, Param1.f_94, Param1.f_95);
	unk_0xAB256D7C8D6A4AC9(*iParam0, 2, unk_0x234B68AC2E35ED5A(Param1.f_92, 28));
	unk_0xAB256D7C8D6A4AC9(*iParam0, 3, unk_0x234B68AC2E35ED5A(Param1.f_92, 29));
	unk_0xAB256D7C8D6A4AC9(*iParam0, 0, unk_0x234B68AC2E35ED5A(Param1.f_92, 30));
	unk_0xAB256D7C8D6A4AC9(*iParam0, 1, unk_0x234B68AC2E35ED5A(Param1.f_92, 31));
	if (unk_0x8F37B08BFE649B87(*iParam0) > 1 && Param1.f_89 >= 0)
	{
		unk_0xF7E38415C6027209(*iParam0, Param1.f_89);
	}
	if (Param1.f_90 > -1)
	{
		if (!unk_0x2F040F7AF0534E16(unk_0x6471F4759775FCA4(*iParam0)))
		{
			if (unk_0x69AF387D1A91914C(unk_0x6471F4759775FCA4(*iParam0)))
			{
				if (Param1.f_90 == 6)
				{
					unk_0x29CE559068C8CC1D(*iParam0, Param1.f_90);
				}
			}
			else
			{
				unk_0x29CE559068C8CC1D(*iParam0, Param1.f_90);
			}
		}
	}
	func_329(iParam0, &(Param1.f_31), &(Param1.f_81));
	unk_0xD5C0F2C0C23EEEBE(*iParam0, Param1.f_96);
}

int func_327(var uParam0, var uParam1)
{
	if (unk_0x02BFF15CAA701972())
	{
	}
	else if (Global_112293.f_20116.f_261)
	{
		*uParam0 = { Global_112293.f_20116.f_267 };
		*uParam1 = Global_112293.f_20116.f_271;
		return 1;
	}
	return 0;
}

void func_328(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x419E13582192CFEA(Global_96731[iVar0]))
		{
			Global_96731[iVar0] = uParam0;
			iVar0 = 3;
		}
		if (iVar0 == 2)
		{
		}
		iVar0++;
	}
}

int func_329(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xBFCE58B2B3249999(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xCF1FE5DEA3E2E135(*iParam0) == 0)
	{
		return 0;
	}
	unk_0x7D867CDA26E248C7(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			unk_0xC6A2E001AEBB5B7F(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				unk_0xC6A2E001AEBB5B7F(*iParam0, iVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					unk_0x0DCD513510DC5D8A(*iParam0, 255);
				}
				else
				{
					unk_0x0DCD513510DC5D8A(*iParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				unk_0xC6A2E001AEBB5B7F(*iParam0, iVar1, false);
			}
		}
		else if (unk_0xB51972B58BF40F96(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0xD6844D3104C3ABBF(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0x6895CB0D4F2E7CDC(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0x6895CB0D4F2E7CDC(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0x6895CB0D4F2E7CDC(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_333(unk_0x6471F4759775FCA4(*iParam0), 1) && unk_0xB51972B58BF40F96(*iParam0, 24) != func_332(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x6895CB0D4F2E7CDC(*iParam0, 24, func_332(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_331(iParam0);
	if (func_330(*iParam0))
	{
		unk_0xAC2B08493719B297(*iParam0, 1);
		unk_0xD4DF29F3D7B97053(*iParam0, 1);
	}
	return 1;
}

int func_330(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[32];
	
	if ((unk_0x419E13582192CFEA(uParam0) && unk_0xBFCE58B2B3249999(iParam0, 0)) && unk_0xCF1FE5DEA3E2E135(iParam0) > 0)
	{
		unk_0x7D867CDA26E248C7(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0xB51972B58BF40F96(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0x00BA91AE0048DAC9(iParam0, iVar1, unk_0xB51972B58BF40F96(iParam0, iVar1)), 32);
				iVar2 = unk_0x15173FB88ABC94F9(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x15173FB88ABC94F9("MNU_CAGE") || iVar2 == unk_0x15173FB88ABC94F9("SABRE_CAG"))
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

void func_331(var uParam0)
{
	switch (unk_0x6471F4759775FCA4(*uParam0))
	{
		case joaat("starling"):
			if (unk_0xB51972B58BF40F96(*uParam0, 4) == 0)
			{
				unk_0x6895CB0D4F2E7CDC(*uParam0, 13, 0, false);
			}
			else
			{
				unk_0xD6844D3104C3ABBF(*uParam0, 13);
			}
			break;
		
		case joaat("slamtruck"):
			unk_0x6895CB0D4F2E7CDC(*uParam0, 24, 3, false);
			break;
	}
}

int func_332(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0x419E13582192CFEA(iParam0) && unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		switch (unk_0x6471F4759775FCA4(iParam0))
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
		iVar0 = unk_0x622E46C9F30FB60D(iParam0, 38);
		iVar1 = unk_0x622E46C9F30FB60D(iParam0, 24);
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

int func_333(int iParam0, int iParam1)
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
			if (!Global_262145.f_14397)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14398)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14396)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14399)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14401)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14400)
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
			if (Global_262145.f_18848)
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
			if (Global_262145.f_18850)
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
			if (Global_262145.f_18854)
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
			if (Global_262145.f_18851)
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
			if (Global_262145.f_18858)
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
			if (Global_262145.f_18856)
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
			if (Global_262145.f_18861)
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
			if (Global_262145.f_20806)
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
			if (Global_262145.f_20807)
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

int func_334(int iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, int iParam5)
{
	var uVar0;
	var uVar1;
	struct<97> Var2;
	int iVar3;
	int iVar4;
	bool bVar5;
	char cVar6[16];
	int iVar7;
	
	if (func_89(iParam1))
	{
		Var2.f_11 = 12;
		Var2.f_31 = 49;
		Var2.f_81 = 2;
		func_370(iParam1, &Var2, iParam5);
		if (Var2 == 0)
		{
			return 1;
		}
		if (unk_0x419E13582192CFEA(*iParam0))
		{
			if (unk_0x6471F4759775FCA4(*iParam0) != Var2)
			{
			}
			return 1;
		}
		if ((iParam1 == 0 && !Global_112293.f_2361.f_539.f_4316) && Global_112293.f_9083.f_99.f_58[131])
		{
			Global_112293.f_2361.f_539.f_2407[0 /*295*/][iParam1 /*98*/] = 0;
		}
		if (Global_112293.f_2361.f_539.f_2407[0 /*295*/][iParam1 /*98*/] == Var2)
		{
			unk_0x16E516CA9C88FF48(Global_112293.f_2361.f_539.f_2407[0 /*295*/][iParam1 /*98*/]);
			if (unk_0xA9C0BBFB9CBB66F1(Global_112293.f_2361.f_539.f_2407[0 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = unk_0x170478CC84C8AE2F(Global_112293.f_2361.f_539.f_2407[0 /*295*/][iParam1 /*98*/], Param2, fParam3, 0, 0, 0);
				unk_0x47D0DDD8833C5E5F(*iParam0, 1084227584);
				unk_0xDC252CD3A5DA5F65(*iParam0, 0);
				unk_0x9F6498B97F642B82(*iParam0, 0);
				unk_0xD4DF29F3D7B97053(*iParam0, 1);
				unk_0xC595907BB71C921D(*iParam0, 1250, 0);
				unk_0xEBF08082D648C482(*iParam0, 1250f);
				unk_0xAFB5FBF26893A713(*iParam0, 1250f);
				Var2.f_3 = 1250;
				unk_0xC612552622E74D36(*iParam0, Global_112293.f_2361.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_5, Global_112293.f_2361.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_6);
				unk_0xA2FEFE3BBCD9FB23(*iParam0, Global_112293.f_2361.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_7, Global_112293.f_2361.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_8);
				unk_0x4544B07E5BF6339C(*iParam0, Var2.f_2);
				iVar3 = 0;
				while (iVar3 < 12)
				{
					unk_0xB021D5C8EC8634FA(*iParam0, iVar3 + 1, !Global_112293.f_2361.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_11[iVar3]);
					iVar3++;
				}
				if (Global_112293.f_2361.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_24)
				{
					unk_0x268E92BC5372AD22(*iParam0, Global_112293.f_2361.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_327(&uVar1, &uVar0))
				{
					unk_0xFA4E6005E549B59C(*iParam0, &uVar1);
					unk_0xCF882B151A34557C(*iParam0, uVar0);
				}
				else
				{
					unk_0xFA4E6005E549B59C(*iParam0, &(Global_112293.f_2361.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_27));
					if (Global_112293.f_2361.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_112293.f_2361.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26 < unk_0xF8A80F26627AA333())
					{
						unk_0xCF882B151A34557C(*iParam0, Global_112293.f_2361.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				unk_0xD18C8678B41DB690(*iParam0, Global_112293.f_2361.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_84, Global_112293.f_2361.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_85, Global_112293.f_2361.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_86);
				unk_0xED4E91A1FC7ABBF6(*iParam0, Global_112293.f_2361.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_88);
				unk_0x64058BD9F4A43D49(*iParam0, Global_112293.f_2361.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_87);
				unk_0xEDE3A270F1277EA3(*iParam0, Global_112293.f_2361.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_93, Global_112293.f_2361.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_94, Global_112293.f_2361.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_95);
				unk_0xAB256D7C8D6A4AC9(*iParam0, 2, unk_0x234B68AC2E35ED5A(Global_112293.f_2361.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 28));
				unk_0xAB256D7C8D6A4AC9(*iParam0, 3, unk_0x234B68AC2E35ED5A(Global_112293.f_2361.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 29));
				unk_0xAB256D7C8D6A4AC9(*iParam0, 0, unk_0x234B68AC2E35ED5A(Global_112293.f_2361.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 30));
				unk_0xAB256D7C8D6A4AC9(*iParam0, 1, unk_0x234B68AC2E35ED5A(Global_112293.f_2361.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 31));
				if (unk_0x8F37B08BFE649B87(*iParam0) > 1 && Global_112293.f_2361.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					unk_0xF7E38415C6027209(*iParam0, Global_112293.f_2361.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_112293.f_2361.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!unk_0x2F040F7AF0534E16(unk_0x6471F4759775FCA4(*iParam0)))
					{
						if (unk_0x69AF387D1A91914C(unk_0x6471F4759775FCA4(*iParam0)))
						{
							if (Global_112293.f_2361.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								unk_0x29CE559068C8CC1D(*iParam0, Global_112293.f_2361.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							unk_0x29CE559068C8CC1D(*iParam0, Global_112293.f_2361.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_329(iParam0, &(Global_112293.f_2361.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_31), &(Global_112293.f_2361.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_81));
				unk_0xD5C0F2C0C23EEEBE(*iParam0, Var2.f_96);
				if (iParam1 == 2)
				{
					if (unk_0x6471F4759775FCA4(*iParam0) == joaat("bodhi2"))
					{
						func_368(iParam0);
					}
				}
				if (bParam4)
				{
					unk_0x824F744352C8BC82(Global_112293.f_2361.f_539.f_2407[0 /*295*/][iParam1 /*98*/]);
				}
				func_367(*iParam0, iParam1);
				return 1;
			}
		}
		else if (Global_112293.f_2361.f_539.f_2407[1 /*295*/][iParam1 /*98*/] == Var2)
		{
			unk_0x16E516CA9C88FF48(Global_112293.f_2361.f_539.f_2407[1 /*295*/][iParam1 /*98*/]);
			if (unk_0xA9C0BBFB9CBB66F1(Global_112293.f_2361.f_539.f_2407[1 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = unk_0x170478CC84C8AE2F(Global_112293.f_2361.f_539.f_2407[1 /*295*/][iParam1 /*98*/], Param2, fParam3, 0, 0, 0);
				unk_0x47D0DDD8833C5E5F(*iParam0, 1084227584);
				unk_0xDC252CD3A5DA5F65(*iParam0, 0);
				unk_0x9F6498B97F642B82(*iParam0, 0);
				unk_0xD4DF29F3D7B97053(*iParam0, 1);
				unk_0xC595907BB71C921D(*iParam0, 1250, 0);
				unk_0xEBF08082D648C482(*iParam0, 1250f);
				unk_0xAFB5FBF26893A713(*iParam0, 1250f);
				Var2.f_3 = 1250;
				unk_0xC612552622E74D36(*iParam0, Global_112293.f_2361.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_5, Global_112293.f_2361.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_6);
				unk_0xA2FEFE3BBCD9FB23(*iParam0, Global_112293.f_2361.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_7, Global_112293.f_2361.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_8);
				unk_0x4544B07E5BF6339C(*iParam0, Var2.f_2);
				iVar4 = 0;
				while (iVar4 < 12)
				{
					unk_0xB021D5C8EC8634FA(*iParam0, iVar4 + 1, !Global_112293.f_2361.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_11[iVar4]);
					iVar4++;
				}
				if (Global_112293.f_2361.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_24)
				{
					unk_0x268E92BC5372AD22(*iParam0, Global_112293.f_2361.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_327(&uVar1, &uVar0))
				{
					unk_0xFA4E6005E549B59C(*iParam0, &uVar1);
					unk_0xCF882B151A34557C(*iParam0, uVar0);
				}
				else
				{
					unk_0xFA4E6005E549B59C(*iParam0, &(Global_112293.f_2361.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_27));
					if (Global_112293.f_2361.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_112293.f_2361.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26 < unk_0xF8A80F26627AA333())
					{
						unk_0xCF882B151A34557C(*iParam0, Global_112293.f_2361.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				unk_0xD18C8678B41DB690(*iParam0, Global_112293.f_2361.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_84, Global_112293.f_2361.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_85, Global_112293.f_2361.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_86);
				unk_0xED4E91A1FC7ABBF6(*iParam0, Global_112293.f_2361.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_88);
				unk_0x64058BD9F4A43D49(*iParam0, Global_112293.f_2361.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_87);
				unk_0xEDE3A270F1277EA3(*iParam0, Global_112293.f_2361.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_93, Global_112293.f_2361.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_94, Global_112293.f_2361.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_95);
				unk_0xAB256D7C8D6A4AC9(*iParam0, 2, unk_0x234B68AC2E35ED5A(Global_112293.f_2361.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 28));
				unk_0xAB256D7C8D6A4AC9(*iParam0, 3, unk_0x234B68AC2E35ED5A(Global_112293.f_2361.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 29));
				unk_0xAB256D7C8D6A4AC9(*iParam0, 0, unk_0x234B68AC2E35ED5A(Global_112293.f_2361.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 30));
				unk_0xAB256D7C8D6A4AC9(*iParam0, 1, unk_0x234B68AC2E35ED5A(Global_112293.f_2361.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 31));
				if (unk_0x8F37B08BFE649B87(*iParam0) > 1 && Global_112293.f_2361.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					unk_0xF7E38415C6027209(*iParam0, Global_112293.f_2361.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_112293.f_2361.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!unk_0x2F040F7AF0534E16(unk_0x6471F4759775FCA4(*iParam0)))
					{
						if (unk_0x69AF387D1A91914C(unk_0x6471F4759775FCA4(*iParam0)))
						{
							if (Global_112293.f_2361.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								unk_0x29CE559068C8CC1D(*iParam0, Global_112293.f_2361.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							unk_0x29CE559068C8CC1D(*iParam0, Global_112293.f_2361.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_329(iParam0, &(Global_112293.f_2361.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_31), &(Global_112293.f_2361.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_81));
				unk_0xD5C0F2C0C23EEEBE(*iParam0, Var2.f_96);
				if (iParam1 == 2)
				{
					if (unk_0x6471F4759775FCA4(*iParam0) == joaat("bodhi2"))
					{
						func_368(iParam0);
					}
				}
				if (bParam4)
				{
					unk_0x824F744352C8BC82(Global_112293.f_2361.f_539.f_2407[1 /*295*/][iParam1 /*98*/]);
				}
				func_367(*iParam0, iParam1);
				return 1;
			}
		}
		else
		{
			unk_0x16E516CA9C88FF48(Var2);
			if (unk_0xA9C0BBFB9CBB66F1(Var2))
			{
				bVar5 = true;
				*iParam0 = unk_0x170478CC84C8AE2F(Var2, Param2, fParam3, 1, 1, 0);
				unk_0x47D0DDD8833C5E5F(*iParam0, 1084227584);
				unk_0xDC252CD3A5DA5F65(*iParam0, 0);
				unk_0x9F6498B97F642B82(*iParam0, 0);
				unk_0xD4DF29F3D7B97053(*iParam0, 1);
				StringCopy(&cVar6, unk_0x0B676D4511ABB729(*iParam0), 16);
				unk_0xC595907BB71C921D(*iParam0, 1250, 0);
				unk_0xEBF08082D648C482(*iParam0, 1250f);
				unk_0xAFB5FBF26893A713(*iParam0, 1250f);
				Var2.f_3 = 1250;
				unk_0xC612552622E74D36(*iParam0, Var2.f_5, Var2.f_6);
				unk_0xA2FEFE3BBCD9FB23(*iParam0, Var2.f_7, Var2.f_8);
				unk_0x4544B07E5BF6339C(*iParam0, Var2.f_2);
				iVar7 = 0;
				while (iVar7 < 12)
				{
					unk_0xB021D5C8EC8634FA(*iParam0, iVar7 + 1, !Var2.f_11[iVar7]);
					iVar7++;
				}
				if (Var2.f_24)
				{
					unk_0x268E92BC5372AD22(*iParam0, Var2.f_24);
				}
				if (func_327(&uVar1, &uVar0))
				{
					unk_0xFA4E6005E549B59C(*iParam0, &uVar1);
					unk_0xCF882B151A34557C(*iParam0, uVar0);
				}
				else
				{
					unk_0xFA4E6005E549B59C(*iParam0, &(Var2.f_27));
					if (Var2.f_26 >= 0 && Var2.f_26 < unk_0xF8A80F26627AA333())
					{
						unk_0xCF882B151A34557C(*iParam0, Var2.f_26);
					}
				}
				unk_0xD18C8678B41DB690(*iParam0, Var2.f_84, Var2.f_85, Var2.f_86);
				unk_0xED4E91A1FC7ABBF6(*iParam0, Var2.f_88);
				unk_0x64058BD9F4A43D49(*iParam0, Var2.f_87);
				unk_0xEDE3A270F1277EA3(*iParam0, Var2.f_93, Var2.f_94, Var2.f_95);
				unk_0xAB256D7C8D6A4AC9(*iParam0, 2, unk_0x234B68AC2E35ED5A(Var2.f_92, 28));
				unk_0xAB256D7C8D6A4AC9(*iParam0, 3, unk_0x234B68AC2E35ED5A(Var2.f_92, 29));
				unk_0xAB256D7C8D6A4AC9(*iParam0, 0, unk_0x234B68AC2E35ED5A(Var2.f_92, 30));
				unk_0xAB256D7C8D6A4AC9(*iParam0, 1, unk_0x234B68AC2E35ED5A(Var2.f_92, 31));
				if (unk_0x8F37B08BFE649B87(*iParam0) > 1 && Var2.f_89 >= 0)
				{
					unk_0xF7E38415C6027209(*iParam0, Var2.f_89);
				}
				if (Var2.f_90 > -1)
				{
					if (!unk_0x2F040F7AF0534E16(unk_0x6471F4759775FCA4(*iParam0)))
					{
						if (unk_0x69AF387D1A91914C(unk_0x6471F4759775FCA4(*iParam0)))
						{
							if (Var2.f_90 == 6)
							{
								unk_0x29CE559068C8CC1D(*iParam0, Var2.f_90);
							}
						}
						else
						{
							unk_0x29CE559068C8CC1D(*iParam0, Var2.f_90);
						}
					}
				}
				func_329(iParam0, &(Var2.f_31), &(Var2.f_81));
				unk_0xD5C0F2C0C23EEEBE(*iParam0, Var2.f_96);
				if (iParam1 == 1)
				{
					if (unk_0x6471F4759775FCA4(*iParam0) == joaat("bagger") && !Global_112293.f_9083.f_99.f_58[118])
					{
						unk_0xFA4E6005E549B59C(*iParam0, &cVar6);
						bVar5 = false;
					}
				}
				else if (iParam1 == 2)
				{
					if (unk_0x6471F4759775FCA4(*iParam0) == joaat("bodhi2"))
					{
						func_368(iParam0);
					}
				}
				else if (((iParam1 == 0 && !Global_112293.f_2361.f_539.f_4316) && Global_112293.f_9083.f_99.f_58[131]) && unk_0x6471F4759775FCA4(*iParam0) == joaat("tailgater"))
				{
					unk_0x6895CB0D4F2E7CDC(*iParam0, 6, 1, false);
					unk_0x6895CB0D4F2E7CDC(*iParam0, 14, 7, false);
					unk_0x6895CB0D4F2E7CDC(*iParam0, 11, 2, false);
					unk_0x6895CB0D4F2E7CDC(*iParam0, 2, 3, false);
					unk_0x6895CB0D4F2E7CDC(*iParam0, 7, 5, false);
					unk_0x6895CB0D4F2E7CDC(*iParam0, 0, 0, false);
					unk_0x6895CB0D4F2E7CDC(*iParam0, 3, 3, false);
					unk_0x6895CB0D4F2E7CDC(*iParam0, 13, 1, false);
					unk_0x6895CB0D4F2E7CDC(*iParam0, 4, 3, false);
					unk_0x6895CB0D4F2E7CDC(*iParam0, 12, 2, false);
					unk_0xC6A2E001AEBB5B7F(*iParam0, 22, true);
					unk_0x29CE559068C8CC1D(*iParam0, 2);
					unk_0x6895CB0D4F2E7CDC(*iParam0, 23, 11, false);
					unk_0x64058BD9F4A43D49(*iParam0, 2);
					Global_112293.f_2361.f_539.f_4316 = 1;
					func_335(iParam1, iParam0, 0, 1);
				}
				if (bParam4)
				{
					unk_0x824F744352C8BC82(Var2);
				}
				if (bVar5)
				{
					func_367(*iParam0, iParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_335(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	
	if ((func_89(iParam0) && unk_0x419E13582192CFEA(*iParam1)) && unk_0xBFCE58B2B3249999(*iParam1, 0))
	{
		if (iParam2 > Global_112293.f_2361.f_539.f_2407)
		{
			return;
		}
		if (iParam2 == 0)
		{
		}
		else if (iParam2 == 1)
		{
		}
		else if (iParam2 == 2)
		{
		}
		else if (iParam2 == 3)
		{
			func_108(*iParam1, iParam0);
		}
		if (unk_0xCF1FE5DEA3E2E135(*iParam1) != 0)
		{
			unk_0x7D867CDA26E248C7(*iParam1, 0);
		}
		Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/] = unk_0x6471F4759775FCA4(*iParam1);
		if (unk_0xE66018878024055F(*iParam1, &iVar1))
		{
			Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_1 = unk_0x6471F4759775FCA4(iVar1);
		}
		Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_2 = unk_0xE1C9109AA0B04165(*iParam1);
		Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_3 = unk_0x5E7C0A485B91DB87(*iParam1);
		Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[0] = unk_0xE3C9546BB1ECEC04(*iParam1, 1);
		Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[1] = unk_0xE3C9546BB1ECEC04(*iParam1, 2);
		Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[2] = unk_0xE3C9546BB1ECEC04(*iParam1, 3);
		Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[3] = unk_0xE3C9546BB1ECEC04(*iParam1, 4);
		Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[4] = unk_0xE3C9546BB1ECEC04(*iParam1, 5);
		Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[5] = unk_0xE3C9546BB1ECEC04(*iParam1, 6);
		Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[6] = unk_0xE3C9546BB1ECEC04(*iParam1, 7);
		Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[7] = unk_0xE3C9546BB1ECEC04(*iParam1, 8);
		Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[8] = unk_0xE3C9546BB1ECEC04(*iParam1, 9);
		Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[9] = unk_0xE3C9546BB1ECEC04(*iParam1, 10);
		Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[10] = unk_0xE3C9546BB1ECEC04(*iParam1, 11);
		Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[11] = unk_0xE3C9546BB1ECEC04(*iParam1, 12);
		if (unk_0xCBD5BF9FD895F81F(*iParam1, 0))
		{
			iVar2 = unk_0x334291A8490E5BCB(*iParam1);
			if (iVar2 == 0 || iVar2 == 5)
			{
				Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24 = 1;
			}
			else
			{
				Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
			}
		}
		else
		{
			Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
		}
		Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_25 = unk_0x35A1BC0F4035B2F2();
		StringCopy(&(Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_27), unk_0x0B676D4511ABB729(*iParam1), 16);
		Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_26 = unk_0x8F77FF37B3B66EE9(*iParam1);
		unk_0x63316D59F2B56D9A(*iParam1, &(Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_5), &(Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_6));
		unk_0x39A17B456BB9800A(*iParam1, &(Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_7), &(Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_8));
		unk_0xDCC81D0196B6BB05(*iParam1, &(Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_84), &(Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_85), &(Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_86));
		Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_88 = unk_0x7EB56EF7F2EC63A6(*iParam1);
		Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_87 = unk_0x3763A95FD16BF2D0(*iParam1);
		Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_89 = unk_0x91A6237658B4DA68(*iParam1);
		Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_90 = unk_0x1D74385CEC17951D(*iParam1);
		unk_0x0CC8B4C581022F66(*iParam1, &(Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_93), &(Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_94), &(Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_95));
		if (unk_0x0602C700974DF696(*iParam1, 2))
		{
			unk_0x191DDA30577F440A(&(Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		else
		{
			unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		if (unk_0x0602C700974DF696(*iParam1, 3))
		{
			unk_0x191DDA30577F440A(&(Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		else
		{
			unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		if (unk_0x0602C700974DF696(*iParam1, 0))
		{
			unk_0x191DDA30577F440A(&(Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		else
		{
			unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		if (unk_0x0602C700974DF696(*iParam1, 1))
		{
			unk_0x191DDA30577F440A(&(Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		else
		{
			unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		Global_112293.f_2361.f_539.f_4317[iParam0] = 10;
		if (unk_0x3BBFB91FC84F6C2A(*iParam1) >= 0 && func_339(*iParam1, 0, &uVar0))
		{
			func_111(iParam1, &(Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31), &(Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_81));
			if (bParam3)
			{
				Global_112293.f_20116[iParam0 /*43*/].f_40 = 1;
				Global_112293.f_20116[iParam0 /*43*/] = Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/];
				Global_112293.f_20116[iParam0 /*43*/].f_3 = Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_87;
				Global_112293.f_20116[iParam0 /*43*/].f_4 = Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_84;
				Global_112293.f_20116[iParam0 /*43*/].f_5 = Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_85;
				Global_112293.f_20116[iParam0 /*43*/].f_6 = Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_86;
				Global_112293.f_20116[iParam0 /*43*/].f_10 = Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_90;
				Global_112293.f_20116[iParam0 /*43*/].f_16 = !Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_88;
				Global_112293.f_20116[iParam0 /*43*/].f_19 = { Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_27 };
				Global_112293.f_20116[iParam0 /*43*/].f_23 = Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_26;
				Global_112293.f_20116[iParam0 /*43*/].f_7 = Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[11];
				Global_112293.f_20116[iParam0 /*43*/].f_8 = Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[12];
				Global_112293.f_20116[iParam0 /*43*/].f_9 = Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[23];
				Global_112293.f_20116[iParam0 /*43*/].f_11 = Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[4];
				Global_112293.f_20116[iParam0 /*43*/].f_12 = Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[15];
				Global_112293.f_20116[iParam0 /*43*/].f_13 = Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[16];
				Global_112293.f_20116[iParam0 /*43*/].f_14 = Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[14];
				Global_112293.f_20116[iParam0 /*43*/].f_15 = Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[22];
				Global_112293.f_20116[iParam0 /*43*/].f_18 = Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[20];
				Global_112293.f_20116[iParam0 /*43*/].f_17 = Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[18];
				Global_112293.f_20116[iParam0 /*43*/].f_24 = unk_0x622E46C9F30FB60D(*iParam1, 11) + 1;
				Global_112293.f_20116[iParam0 /*43*/].f_25 = unk_0x622E46C9F30FB60D(*iParam1, 12) + 1;
				Global_112293.f_20116[iParam0 /*43*/].f_26 = unk_0x622E46C9F30FB60D(*iParam1, 4) + 1;
				Global_112293.f_20116[iParam0 /*43*/].f_27 = unk_0x622E46C9F30FB60D(*iParam1, 23) + 1;
				Global_112293.f_20116[iParam0 /*43*/].f_28 = unk_0x622E46C9F30FB60D(*iParam1, 14) + 1;
				Global_112293.f_20116[iParam0 /*43*/].f_29 = unk_0x622E46C9F30FB60D(*iParam1, 16) + 1;
				Global_112293.f_20116[iParam0 /*43*/].f_30 = unk_0x622E46C9F30FB60D(*iParam1, 15) + 1;
				Global_112293.f_20116[iParam0 /*43*/].f_32 = unk_0x2F5D527CB51AE553(*iParam1);
				Global_112293.f_20116[iParam0 /*43*/].f_33[0] = unk_0x708D5E68CCCC32AE(*iParam1);
				Global_112293.f_20116[iParam0 /*43*/].f_33[1] = unk_0x6C18ABC0D4C9AAEC(*iParam1, 14, 0);
				Global_112293.f_20116[iParam0 /*43*/].f_33[2] = unk_0x6C18ABC0D4C9AAEC(*iParam1, 14, 1);
				Global_112293.f_20116[iParam0 /*43*/].f_33[3] = unk_0x6C18ABC0D4C9AAEC(*iParam1, 14, 2);
				Global_112293.f_20116[iParam0 /*43*/].f_33[4] = unk_0x6C18ABC0D4C9AAEC(*iParam1, 14, 3);
				Global_112293.f_20116[iParam0 /*43*/].f_39 = unk_0xA1CC0998BBC30533(*iParam1);
				Global_112293.f_20116[iParam0 /*43*/].f_31 = func_338(*iParam1);
				Global_112293.f_20116[iParam0 /*43*/].f_33[0] = unk_0x63FE990BAB40116A(*iParam1);
				unk_0xE592AEEF07F5ACB2(*iParam1, &iVar4, &uVar5, &uVar6);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_336(Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_5, Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_7, iVar3, 1, &(Global_112293.f_20116[iParam0 /*43*/].f_1));
				unk_0x78738F6D30171534(*iParam1, &iVar4, &uVar5);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_336(Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_6, -1, iVar3, 0, &(Global_112293.f_20116[iParam0 /*43*/].f_2));
			}
		}
	}
}

int func_336(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (func_337(iVar0, &sVar2, &iVar1, &iVar3, &iVar4))
	{
		if ((iParam0 == iVar3 && (!bParam3 || iParam1 == iVar4)) && ((iParam2 == iVar1 || iParam2 == -1) || iParam2 == 255))
		{
			*uParam4 = iVar0;
			return 1;
		}
		iVar0++;
	}
	iParam0 = -1;
	iParam1 = -1;
	*uParam4 = -1;
	return 0;
}

bool func_337(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam2 = -1;
	*uParam3 = -1;
	*uParam4 = -1;
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "BR BLACK_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 118;
			*uParam4 = 3;
			break;
		
		case 1:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 147;
			*uParam4 = 4;
			break;
		
		case 2:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 96;
			*uParam4 = 0;
			break;
		
		case 3:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 71;
			*uParam4 = 145;
			break;
		
		case 4:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 0;
			*uParam3 = 135;
			*uParam4 = 135;
			break;
		
		case 5:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 29;
			*uParam4 = 28;
			break;
		
		case 6:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 64;
			*uParam4 = 68;
			break;
		
		case 7:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 70;
			*uParam4 = 0;
			break;
		
		case 8:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 50;
			*uParam4 = 0;
			break;
		
		case 9:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 55;
			*uParam4 = 0;
			break;
		
		case 10:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 89;
			*uParam4 = 0;
			break;
		
		case 11:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 38;
			*uParam4 = 0;
			break;
		
		case 12:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 0;
			*uParam3 = 37;
			*uParam4 = 106;
			break;
		
		case 13:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 4;
			*uParam4 = 111;
			break;
		
		case 14:
			StringCopy(sParam1, "CHROME", 16);
			*uParam2 = 4;
			*uParam3 = 120;
			*uParam4 = 0;
			break;
		
		case 15:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 16:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 0;
			*uParam4 = 10;
			break;
		
		case 17:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 1;
			*uParam4 = 5;
			break;
		
		case 18:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 11;
			*uParam4 = 2;
			break;
		
		case 19:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 2;
			*uParam4 = 5;
			break;
		
		case 20:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 3;
			*uParam4 = 6;
			break;
		
		case 21:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 5;
			*uParam4 = 111;
			break;
		
		case 22:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 6;
			*uParam4 = 4;
			break;
		
		case 23:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 7;
			*uParam4 = 5;
			break;
		
		case 24:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 8;
			*uParam4 = 5;
			break;
		
		case 25:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 9;
			*uParam4 = 7;
			break;
		
		case 26:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 0;
			*uParam3 = 10;
			*uParam4 = 7;
			break;
		
		case 27:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 0;
			*uParam3 = 27;
			*uParam4 = 36;
			break;
		
		case 28:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 0;
			*uParam3 = 28;
			*uParam4 = 28;
			break;
		
		case 29:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 150;
			*uParam4 = 42;
			break;
		
		case 30:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 30;
			*uParam4 = 36;
			break;
		
		case 31:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 31;
			*uParam4 = 27;
			break;
		
		case 32:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 32;
			*uParam4 = 25;
			break;
		
		case 33:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 33;
			*uParam4 = 47;
			break;
		
		case 34:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 34;
			*uParam4 = 47;
			break;
		
		case 35:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 143;
			*uParam4 = 31;
			break;
		
		case 36:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 0;
			*uParam3 = 35;
			*uParam4 = 25;
			break;
		
		case 37:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 0;
			*uParam3 = 137;
			*uParam4 = 3;
			break;
		
		case 38:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 0;
			*uParam3 = 136;
			*uParam4 = 5;
			break;
		
		case 39:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 36;
			*uParam4 = 26;
			break;
		
		case 40:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 38;
			*uParam4 = 37;
			break;
		
		case 41:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 138;
			*uParam4 = 89;
			break;
		
		case 42:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 0;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 43:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 88;
			*uParam4 = 88;
			break;
		
		case 44:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 89;
			*uParam4 = 88;
			break;
		
		case 45:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 91;
			*uParam4 = 91;
			break;
		
		case 46:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 49;
			*uParam4 = 52;
			break;
		
		case 47:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 50;
			*uParam4 = 53;
			break;
		
		case 48:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 51;
			*uParam4 = 66;
			break;
		
		case 49:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 52;
			*uParam4 = 59;
			break;
		
		case 50:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 53;
			*uParam4 = 59;
			break;
		
		case 51:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 54;
			*uParam4 = 60;
			break;
		
		case 52:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 92;
			*uParam4 = 92;
			break;
		
		case 53:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 141;
			*uParam4 = 73;
			break;
		
		case 54:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 61;
			*uParam4 = 63;
			break;
		
		case 55:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 62;
			*uParam4 = 68;
			break;
		
		case 56:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 63;
			*uParam4 = 87;
			break;
		
		case 57:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 65;
			*uParam4 = 87;
			break;
		
		case 58:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 66;
			*uParam4 = 60;
			break;
		
		case 59:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 67;
			*uParam4 = 67;
			break;
		
		case 60:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 68;
			*uParam4 = 68;
			break;
		
		case 61:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 69;
			*uParam4 = 74;
			break;
		
		case 62:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 73;
			*uParam4 = 73;
			break;
		
		case 63:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 70;
			*uParam4 = 70;
			break;
		
		case 64:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 74;
			*uParam4 = 74;
			break;
		
		case 65:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 96;
			*uParam4 = 95;
			break;
		
		case 66:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 101;
			*uParam4 = 95;
			break;
		
		case 67:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 95;
			*uParam4 = 97;
			break;
		
		case 68:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 94;
			*uParam4 = 104;
			break;
		
		case 69:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 97;
			*uParam4 = 98;
			break;
		
		case 70:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 103;
			*uParam4 = 104;
			break;
		
		case 71:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 104;
			*uParam4 = 104;
			break;
		
		case 72:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 98;
			*uParam4 = 95;
			break;
		
		case 73:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 100;
			*uParam4 = 100;
			break;
		
		case 74:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 102;
			*uParam4 = 105;
			break;
		
		case 75:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 99;
			*uParam4 = 106;
			break;
		
		case 76:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 105;
			*uParam4 = 105;
			break;
		
		case 77:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 106;
			*uParam4 = 106;
			break;
		
		case 78:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 72;
			*uParam4 = 64;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 146;
			*uParam4 = 145;
			break;
		
		case 80:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 145;
			*uParam4 = 74;
			break;
		
		case 81:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 0;
			*uParam3 = 107;
			*uParam4 = 107;
			break;
		
		case 82:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 83:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 84:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 0;
			*uParam4 = 0;
			break;
		
		case 85:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 147;
			*uParam4 = 0;
			break;
		
		case 86:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 1;
			*uParam4 = 0;
			break;
		
		case 87:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 11;
			*uParam4 = 0;
			break;
		
		case 88:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 89:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 3;
			*uParam4 = 2;
			break;
		
		case 90:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 4;
			*uParam4 = 4;
			break;
		
		case 91:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 5;
			*uParam4 = 5;
			break;
		
		case 92:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		
		case 93:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 7;
			*uParam4 = 0;
			break;
		
		case 94:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 8;
			*uParam4 = 0;
			break;
		
		case 95:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 9;
			*uParam4 = 0;
			break;
		
		case 96:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 1;
			*uParam3 = 10;
			*uParam4 = 0;
			break;
		
		case 97:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 1;
			*uParam3 = 27;
			*uParam4 = 0;
			break;
		
		case 98:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 1;
			*uParam3 = 28;
			*uParam4 = 0;
			break;
		
		case 99:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 29;
			*uParam4 = 0;
			break;
		
		case 100:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 150;
			*uParam4 = 0;
			break;
		
		case 101:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 30;
			*uParam4 = 0;
			break;
		
		case 102:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 31;
			*uParam4 = 0;
			break;
		
		case 103:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 32;
			*uParam4 = 0;
			break;
		
		case 104:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 33;
			*uParam4 = 0;
			break;
		
		case 105:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 34;
			*uParam4 = 0;
			break;
		
		case 106:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 143;
			*uParam4 = 0;
			break;
		
		case 107:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 1;
			*uParam3 = 35;
			*uParam4 = 0;
			break;
		
		case 108:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 1;
			*uParam3 = 135;
			*uParam4 = 0;
			break;
		
		case 109:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 1;
			*uParam3 = 137;
			*uParam4 = 0;
			break;
		
		case 110:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 1;
			*uParam3 = 136;
			*uParam4 = 0;
			break;
		
		case 111:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 36;
			*uParam4 = 0;
			break;
		
		case 112:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 138;
			*uParam4 = 0;
			break;
		
		case 113:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 99;
			break;
		
		case 114:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 1;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 115:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 88;
			*uParam4 = 0;
			break;
		
		case 116:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 91;
			*uParam4 = 0;
			break;
		
		case 117:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 49;
			*uParam4 = 0;
			break;
		
		case 118:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 51;
			*uParam4 = 0;
			break;
		
		case 119:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 52;
			*uParam4 = 0;
			break;
		
		case 120:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 53;
			*uParam4 = 0;
			break;
		
		case 121:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 54;
			*uParam4 = 0;
			break;
		
		case 122:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 92;
			*uParam4 = 0;
			break;
		
		case 123:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 141;
			*uParam4 = 0;
			break;
		
		case 124:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 61;
			*uParam4 = 0;
			break;
		
		case 125:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 62;
			*uParam4 = 0;
			break;
		
		case 126:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 63;
			*uParam4 = 0;
			break;
		
		case 127:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 64;
			*uParam4 = 0;
			break;
		
		case 128:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 65;
			*uParam4 = 0;
			break;
		
		case 129:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 66;
			*uParam4 = 0;
			break;
		
		case 130:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 67;
			*uParam4 = 0;
			break;
		
		case 131:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 68;
			*uParam4 = 0;
			break;
		
		case 132:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 69;
			*uParam4 = 0;
			break;
		
		case 133:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 73;
			*uParam4 = 0;
			break;
		
		case 134:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 74;
			*uParam4 = 0;
			break;
		
		case 135:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 101;
			*uParam4 = 0;
			break;
		
		case 136:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 95;
			*uParam4 = 0;
			break;
		
		case 137:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 94;
			*uParam4 = 0;
			break;
		
		case 138:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 97;
			*uParam4 = 0;
			break;
		
		case 139:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 103;
			*uParam4 = 0;
			break;
		
		case 140:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 104;
			*uParam4 = 0;
			break;
		
		case 141:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 98;
			*uParam4 = 0;
			break;
		
		case 142:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 100;
			*uParam4 = 0;
			break;
		
		case 143:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 102;
			*uParam4 = 0;
			break;
		
		case 144:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 0;
			break;
		
		case 145:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 105;
			*uParam4 = 0;
			break;
		
		case 146:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 106;
			*uParam4 = 0;
			break;
		
		case 147:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 71;
			*uParam4 = 0;
			break;
		
		case 148:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 72;
			*uParam4 = 0;
			break;
		
		case 149:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 142;
			*uParam4 = 0;
			break;
		
		case 150:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 145;
			*uParam4 = 0;
			break;
		
		case 151:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 1;
			*uParam3 = 107;
			*uParam4 = 0;
			break;
		
		case 152:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 153:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 2;
			*uParam3 = 12;
			*uParam4 = 0;
			break;
		
		case 154:
			StringCopy(sParam1, "GREY", 16);
			*uParam2 = 2;
			*uParam3 = 13;
			*uParam4 = 0;
			break;
		
		case 155:
			StringCopy(sParam1, "LIGHT_GREY", 16);
			*uParam2 = 2;
			*uParam3 = 14;
			*uParam4 = 0;
			break;
		
		case 156:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 2;
			*uParam3 = 131;
			*uParam4 = 0;
			break;
		
		case 157:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 83;
			*uParam4 = 0;
			break;
		
		case 158:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 82;
			*uParam4 = 0;
			break;
		
		case 159:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 84;
			*uParam4 = 0;
			break;
		
		case 160:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 2;
			*uParam3 = 149;
			*uParam4 = 0;
			break;
		
		case 161:
			StringCopy(sParam1, "Purple", 16);
			*uParam2 = 2;
			*uParam3 = 148;
			*uParam4 = 0;
			break;
		
		case 162:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 2;
			*uParam3 = 39;
			*uParam4 = 0;
			break;
		
		case 163:
			StringCopy(sParam1, "DARK_RED", 16);
			*uParam2 = 2;
			*uParam3 = 40;
			*uParam4 = 0;
			break;
		
		case 164:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 2;
			*uParam3 = 41;
			*uParam4 = 0;
			break;
		
		case 165:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 2;
			*uParam3 = 42;
			*uParam4 = 0;
			break;
		
		case 166:
			StringCopy(sParam1, "GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 128;
			*uParam4 = 0;
			break;
		
		case 167:
			StringCopy(sParam1, "MATTE_FOR", 16);
			*uParam2 = 2;
			*uParam3 = 151;
			*uParam4 = 0;
			break;
		
		case 168:
			StringCopy(sParam1, "MATTE_FOIL", 16);
			*uParam2 = 2;
			*uParam3 = 155;
			*uParam4 = 0;
			break;
		
		case 169:
			StringCopy(sParam1, "MATTE_OD", 16);
			*uParam2 = 2;
			*uParam3 = 152;
			*uParam4 = 0;
			break;
		
		case 170:
			StringCopy(sParam1, "MATTE_DIRT", 16);
			*uParam2 = 2;
			*uParam3 = 153;
			*uParam4 = 0;
			break;
		
		case 171:
			StringCopy(sParam1, "MATTE_DESERT", 16);
			*uParam2 = 2;
			*uParam3 = 154;
			*uParam4 = 0;
			break;
		
		case 172:
			StringCopy(sParam1, "BR_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 117;
			*uParam4 = 18;
			break;
		
		case 173:
			StringCopy(sParam1, "BR_ALUMINIUM", 16);
			*uParam2 = 3;
			*uParam3 = 119;
			*uParam4 = 5;
			break;
		
		case 174:
			StringCopy(sParam1, "GOLD_P", 16);
			*uParam2 = 3;
			*uParam3 = 158;
			*uParam4 = 160;
			break;
		
		case 175:
			StringCopy(sParam1, "GOLD_S", 16);
			*uParam2 = 3;
			*uParam3 = 159;
			*uParam4 = 160;
			break;
	}
	return *uParam2 != -1;
}

float func_338(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	iVar0 = 100000;
	iVar1 = 65000;
	iVar2 = 50000;
	iVar3 = 20000;
	iVar4 = 20000;
	iVar5 = iVar4;
	if ((unk_0x419E13582192CFEA(iParam0) && unk_0xBFCE58B2B3249999(iParam0, 0)) && unk_0x3BBFB91FC84F6C2A(iParam0) >= 0)
	{
		if (unk_0xA1CC0998BBC30533(iParam0) == 3)
		{
			iVar5 = iVar0;
		}
		else if (unk_0xA1CC0998BBC30533(iParam0) == 1)
		{
			iVar5 = iVar1;
		}
		else if (unk_0xA1CC0998BBC30533(iParam0) == 2)
		{
			iVar5 = iVar2;
		}
		else if (unk_0xA1CC0998BBC30533(iParam0) == 0)
		{
			if (unk_0x69AF387D1A91914C(unk_0x6471F4759775FCA4(iParam0)))
			{
				iVar5 = iVar3;
			}
			else
			{
				iVar5 = iVar4;
			}
		}
	}
	fVar6 = (to_float(iVar5) / to_float(iVar4));
	return fVar6;
}

int func_339(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;
	bool bVar1;
	
	*uParam2 = 0;
	if (!unk_0x419E13582192CFEA(iParam0))
	{
		return 0;
	}
	if (!unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0xB4DD528ED76ED647(unk_0x6471F4759775FCA4(iParam0)))
	{
		return 0;
	}
	iVar0 = unk_0x6471F4759775FCA4(iParam0);
	if ((!func_365(iVar0, bParam1, uParam2) && !func_364(unk_0x1146A9AE09CE2B14())) && !func_348(iParam0))
	{
		return 0;
	}
	if (func_364(unk_0x1146A9AE09CE2B14()))
	{
		if (func_347(iVar0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	bVar1 = false;
	if (func_346(unk_0x1146A9AE09CE2B14()) && (unk_0xE267416B80E7921F(iVar0) || unk_0x48E10529AEAE00F9(iVar0)))
	{
		bVar1 = true;
	}
	if (((unk_0x9AAA60D60CB4E5C7(iParam0) && !func_344(iParam0)) && !bVar1) && !(func_343(unk_0x6471F4759775FCA4(iParam0)) && func_340(unk_0x1146A9AE09CE2B14())))
	{
		switch (unk_0x6471F4759775FCA4(iParam0))
		{
			case joaat("cerberus"):
			case joaat("cerberus2"):
			case joaat("cerberus3"):
			case joaat("monster3"):
			case joaat("monster4"):
			case joaat("monster5"):
				*uParam2 = 16;
				break;
			
			default:
				*uParam2 = 2;
				break;
		}
		return 0;
	}
	if (!unk_0x02BFF15CAA701972())
	{
		if ((func_468(iParam0) && unk_0x6471F4759775FCA4(iParam0) != joaat("sentinel2")) && unk_0x6471F4759775FCA4(iParam0) != joaat("issi2"))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	return 1;
}

int func_340(int iParam0)
{
	if (iParam0 != func_164())
	{
		if (func_342(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_341(Global_2426865[iParam0 /*449*/].f_319.f_6) == 11;
			}
		}
	}
	return 0;
}

int func_341(int iParam0)
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

int func_342(int iParam0, bool bParam1, bool bParam2)
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

int func_343(int iParam0)
{
	if (((iParam0 == joaat("mule4") || iParam0 == joaat("pounder2")) || iParam0 == joaat("speedo4")) || iParam0 == joaat("terbyte"))
	{
		return 1;
	}
	return 0;
}

int func_344(int iParam0)
{
	switch (unk_0x6471F4759775FCA4(iParam0))
	{
		case joaat("halftrack"):
		case joaat("phantom3"):
		case joaat("hauler2"):
		case joaat("trailerlarge"):
		case joaat("trailersmall2"):
		case joaat("bruiser"):
		case joaat("scarab"):
		case joaat("scarab2"):
		case joaat("scarab3"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			return 1;
			break;
		
		case joaat("cerberus"):
		case joaat("cerberus2"):
		case joaat("cerberus3"):
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (func_345(unk_0x1146A9AE09CE2B14()))
			{
				return 1;
			}
			break;
		
		case joaat("minitank"):
		case joaat("burrito2"):
			return 1;
	}
	return 0;
}

int func_345(int iParam0)
{
	if (iParam0 != func_164())
	{
		if (func_342(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_341(Global_2426865[iParam0 /*449*/].f_319.f_6) == 13;
			}
		}
	}
	return 0;
}

int func_346(int iParam0)
{
	if (iParam0 != func_164())
	{
		if (func_342(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_341(Global_2426865[iParam0 /*449*/].f_319.f_6) == 7;
			}
		}
	}
	return 0;
}

int func_347(int iParam0)
{
	switch (iParam0)
	{
		case joaat("avenger"):
		case joaat("thruster"):
		case joaat("riot2"):
		case joaat("chernobog"):
		case joaat("khanjali"):
			return 1;
			break;
	}
	return 0;
}

int func_348(int iParam0)
{
	if (func_363(unk_0x1146A9AE09CE2B14()) || func_362(unk_0x1146A9AE09CE2B14()))
	{
		if (func_349(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_349(int iParam0)
{
	if ((!unk_0x419E13582192CFEA(iParam0) || !unk_0xBFCE58B2B3249999(iParam0, 0)) || unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
		return 0;
	}
	if (func_352(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x5B38E054B758C032(iParam0, "Player_Vehicle"))
	{
		if (unk_0x05351AF95891EE5C(iParam0, "Player_Vehicle") == unk_0x17114A8CCDEB9E3D(unk_0x1146A9AE09CE2B14()))
		{
			if (func_350(iParam0))
			{
				return 1;
			}
			switch (unk_0x6471F4759775FCA4(iParam0))
			{
				case joaat("ardent"):
				case joaat("nightshark"):
				case joaat("deluxo"):
				case joaat("stromberg"):
				case joaat("comet4"):
				case joaat("revolter"):
				case joaat("savestra"):
				case joaat("viseris"):
				case joaat("caracara"):
				case joaat("paragon2"):
					return 1;
					break;
				}
			}
	}
	return 0;
}

int func_350(int iParam0)
{
	if (!unk_0x419E13582192CFEA(iParam0) || !unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		return 0;
	}
	if (func_351(unk_0x6471F4759775FCA4(iParam0)))
	{
		return 1;
	}
	return 0;
}

int func_351(int iParam0)
{
	switch (iParam0)
	{
		case joaat("apc"):
		case joaat("dune3"):
		case joaat("halftrack"):
		case joaat("oppressor"):
		case joaat("oppressor2"):
		case joaat("tampa3"):
		case joaat("technical3"):
		case joaat("insurgent3"):
		case joaat("vigilante"):
		case joaat("barrage"):
		case joaat("menacer"):
		case joaat("scramjet"):
			return 1;
			break;
	}
	return 0;
}

int func_352(int iParam0, bool bParam1)
{
	switch (unk_0x6471F4759775FCA4(iParam0))
	{
		case joaat("technical"):
		case joaat("insurgent"):
			if (func_354(unk_0x6471F4759775FCA4(iParam0), 0))
			{
				if (Global_2544210.f_303 == iParam0)
				{
					return 1;
				}
				else if (func_353(iParam0) != -1 && !bParam1)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_353(int iParam0)
{
	int iVar0;
	
	if (unk_0x419E13582192CFEA(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Global_2441237.f_647[iVar0] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_354(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		if (func_333(iParam0, 0))
		{
			return 1;
		}
	}
	switch (iParam0)
	{
		case joaat("faction"):
		case joaat("buccaneer"):
		case joaat("chino"):
		case joaat("moonbeam"):
		case joaat("primo"):
		case joaat("voodoo2"):
			return func_361();
			break;
		
		case joaat("sabregt"):
			if (Global_262145.f_14397)
			{
				return func_360();
			}
			break;
		
		case joaat("tornado"):
		case joaat("tornado2"):
		case joaat("tornado3"):
			if (Global_262145.f_14398)
			{
				return func_360();
			}
			break;
		
		case joaat("virgo3"):
			if (Global_262145.f_14396)
			{
				return func_360();
			}
			break;
		
		case joaat("minivan"):
			if (Global_262145.f_14399)
			{
				return func_360();
			}
			break;
		
		case joaat("slamvan"):
			if (Global_262145.f_14401)
			{
				return func_360();
			}
			break;
		
		case joaat("sultan"):
		case joaat("banshee"):
			return func_359();
			break;
		
		case joaat("comet2"):
			if (Global_262145.f_18848)
			{
				return func_358();
			}
			break;
		
		case joaat("diablous"):
			if (Global_262145.f_18850)
			{
				return func_358();
			}
			break;
		
		case joaat("fcr"):
			if (Global_262145.f_18854)
			{
				return func_358();
			}
			break;
		
		case joaat("elegy2"):
			if (Global_262145.f_18851)
			{
				return func_358();
			}
			break;
		
		case joaat("nero"):
			if (Global_262145.f_18858)
			{
				return func_358();
			}
			break;
		
		case joaat("italigtb"):
			if (Global_262145.f_18856)
			{
				return func_358();
			}
			break;
		
		case joaat("specter"):
			if (Global_262145.f_18861)
			{
				return func_358();
			}
			break;
		
		case joaat("technical"):
			if (Global_262145.f_20806)
			{
				return func_357();
			}
			break;
		
		case joaat("insurgent"):
			if (Global_262145.f_20807)
			{
				return func_357();
			}
			break;
		
		case joaat("ratloader"):
		case joaat("ratloader2"):
			return func_356();
			break;
		
		case joaat("glendale"):
			if (func_356() || func_355())
			{
				return 1;
			}
			break;
		
		case joaat("impaler"):
			return func_356();
			break;
		
		case joaat("issi3"):
			return func_356();
			break;
		
		case joaat("gargoyle"):
			return func_356();
			break;
		
		case joaat("dominator"):
			return func_356();
			break;
		
		case joaat("dominator2"):
			return func_356();
			break;
		
		case joaat("imperator"):
			return func_356();
			break;
		
		case joaat("imperator2"):
			return func_356();
			break;
		
		case joaat("imperator3"):
			return func_356();
			break;
		
		case joaat("deathbike"):
			return func_356();
			break;
		
		case joaat("deathbike2"):
			return func_356();
			break;
		
		case joaat("deathbike3"):
			return func_356();
			break;
		
		case joaat("impaler2"):
		case joaat("brutus"):
		case joaat("bruiser"):
		case joaat("slamvan4"):
		case joaat("issi4"):
		case joaat("monster3"):
		case joaat("scarab"):
		case joaat("cerberus"):
		case joaat("dominator4"):
		case joaat("zr380"):
		case joaat("impaler3"):
		case joaat("brutus2"):
		case joaat("bruiser2"):
		case joaat("slamvan5"):
		case joaat("issi5"):
		case joaat("monster4"):
		case joaat("scarab2"):
		case joaat("cerberus2"):
		case joaat("dominator5"):
		case joaat("zr3802"):
		case joaat("impaler4"):
		case joaat("brutus3"):
		case joaat("bruiser3"):
		case joaat("slamvan6"):
		case joaat("issi6"):
		case joaat("monster5"):
		case joaat("scarab3"):
		case joaat("cerberus3"):
		case joaat("dominator6"):
		case joaat("zr3803"):
			return func_356();
			break;
		
		case joaat("youga2"):
			if (Global_262145.f_28828)
			{
				return func_355();
			}
			break;
		
		case joaat("gauntlet3"):
			if (Global_262145.f_29178)
			{
				return func_355();
			}
			break;
		
		case joaat("manana"):
			if (Global_262145.f_28827)
			{
				return func_355();
			}
			break;
		
		case joaat("peyote"):
			if (Global_262145.f_29177)
			{
				return func_355();
			}
			break;
		
		case joaat("yosemite"):
			if (Global_262145.f_29176)
			{
				return func_355();
			}
			break;
	}
	return 0;
}

bool func_355()
{
	return unk_0x14FA206D9CE730A9(1815791016);
}

bool func_356()
{
	return unk_0x14FA206D9CE730A9(1927191088);
}

bool func_357()
{
	return unk_0x14FA206D9CE730A9(2067165443);
}

bool func_358()
{
	return unk_0x14FA206D9CE730A9(-957277403);
}

bool func_359()
{
	return unk_0x14FA206D9CE730A9(210122941);
}

bool func_360()
{
	return unk_0x14FA206D9CE730A9(-1894522408);
}

bool func_361()
{
	return unk_0x14FA206D9CE730A9(1630677557);
}

int func_362(int iParam0)
{
	if (iParam0 != func_164())
	{
		if (func_342(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1 && Global_2426865[iParam0 /*449*/].f_319.f_9 != func_164())
			{
				return func_341(Global_2426865[iParam0 /*449*/].f_319.f_6) == 5;
			}
		}
	}
	return 0;
}

int func_363(int iParam0)
{
	if (iParam0 != func_164())
	{
		if (func_342(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1 && Global_2426865[iParam0 /*449*/].f_319.f_9 != func_164())
			{
				return func_341(Global_2426865[iParam0 /*449*/].f_319.f_6) == 8;
			}
		}
	}
	return 0;
}

int func_364(int iParam0)
{
	if (iParam0 != func_164())
	{
		if (func_342(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_341(Global_2426865[iParam0 /*449*/].f_319.f_6) == 9;
			}
		}
	}
	return 0;
}

int func_365(int iParam0, bool bParam1, var uParam2)
{
	bool bVar0;
	
	if (!bParam1)
	{
		if ((((((((((((((iParam0 == joaat("police") || iParam0 == joaat("policeold1")) || iParam0 == joaat("policeold2")) || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("polmav")) || iParam0 == joaat("policeb")) || iParam0 == joaat("policet")) || iParam0 == joaat("riot")) || iParam0 == joaat("sheriff")) || iParam0 == joaat("pranger")) || iParam0 == joaat("sheriff2"))
		{
			*uParam2 = 1;
			return 0;
		}
	}
	if (((((((iParam0 == joaat("ambulance") || iParam0 == joaat("firetruk")) || iParam0 == joaat("taxi")) || iParam0 == joaat("lguard")) || iParam0 == joaat("ripley")) || iParam0 == joaat("dilettante2")) || iParam0 == joaat("airbus")) || iParam0 == joaat("airtug"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("burrito") || iParam0 == joaat("rumpo2")) || iParam0 == joaat("speedo")) || iParam0 == joaat("speedo2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("scorcher") || iParam0 == joaat("bmx")) || iParam0 == joaat("cruiser")) || iParam0 == joaat("fixter"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((((((((((((((((((iParam0 == joaat("caddy") || iParam0 == joaat("forklift")) || iParam0 == joaat("caddy2")) || iParam0 == joaat("crusader")) || iParam0 == joaat("tribike")) || iParam0 == joaat("tribike2")) || iParam0 == joaat("tribike3")) || iParam0 == joaat("tractor")) || iParam0 == joaat("tractor2")) || iParam0 == joaat("mower")) || iParam0 == joaat("tornado4")) || iParam0 == joaat("docktug")) || iParam0 == joaat("stretch")) || iParam0 == joaat("bison2")) || iParam0 == joaat("bison3")) || iParam0 == joaat("benson")) || iParam0 == joaat("pounder")) || iParam0 == joaat("submersible")) || iParam0 == joaat("emperor3")) || iParam0 == joaat("dune2"))
	{
		*uParam2 = 2;
		return 0;
	}
	bVar0 = false;
	if (func_346(unk_0x1146A9AE09CE2B14()) && (unk_0xE267416B80E7921F(iParam0) || unk_0x48E10529AEAE00F9(iParam0)))
	{
		bVar0 = true;
	}
	if (((((((((((((!unk_0xB480C9C35514775A(iParam0) && !unk_0x69AF387D1A91914C(iParam0)) && iParam0 != joaat("blazer")) && iParam0 != joaat("blazer2")) && iParam0 != joaat("blazer3")) && iParam0 != joaat("blazer4")) && iParam0 != joaat("blazer5")) && iParam0 != joaat("chimera")) && iParam0 != joaat("trailerlarge")) && iParam0 != joaat("trailersmall2")) && iParam0 != joaat("rrocket")) && iParam0 != joaat("stryder")) && iParam0 != joaat("verus")) && !bVar0)
	{
		*uParam2 = 2;
		return 0;
	}
	if (iParam0 == joaat("monster"))
	{
		*uParam2 = 2;
		return 0;
	}
	if ((iParam0 == joaat("insurgent") || iParam0 == joaat("technical")) || iParam0 == joaat("limo2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (unk_0x02BFF15CAA701972())
	{
		if (func_366(iParam0))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	if (!unk_0x02BFF15CAA701972())
	{
		if (iParam0 == joaat("insurgent") || iParam0 == joaat("insurgent2"))
		{
			*uParam2 = 2;
		}
	}
	return 1;
}

int func_366(int iParam0)
{
	switch (iParam0)
	{
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("forklift"):
			return 1;
			break;
	}
	return 0;
}

void func_367(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0x419E13582192CFEA(Global_96701[iVar0]))
		{
			Global_96701[iVar0] = iParam0;
			Global_96711[iVar0] = iParam1;
			Global_96721[iVar0] = unk_0x6471F4759775FCA4(iParam0);
			if (unk_0xB480C9C35514775A(Global_96721[iVar0]))
			{
				Global_96749[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_96749[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_368(int iParam0)
{
	if (!func_369(*iParam0))
	{
		unk_0xB021D5C8EC8634FA(*iParam0, 5, !Global_112293.f_9083.f_99.f_58[119]);
	}
}

bool func_369(int iParam0)
{
	return unk_0xE3C9546BB1ECEC04(iParam0, 5);
}

void func_370(int iParam0, var uParam1, int iParam2)
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
			if (Global_112293.f_9083.f_99.f_58[128] && !Global_112293.f_9083.f_99.f_58[131])
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
					if (Global_112293.f_9083.f_99.f_58[119])
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
			else if (Global_112293.f_9083.f_99.f_58[118])
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

void func_371()
{
	bool bVar0;
	struct<6> Var1;
	
	if ((((!unk_0xC49311A2A500FF09(iLocal_89, 0) && !unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0)) && vdist2(unk_0xD6E677FAD7521410(iLocal_89, 1), unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1)) < 225f) && unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_89, 15f, 15f, 1f, 0, 1, 0)) && !func_373())
	{
		bVar0 = true;
	}
	if (((unk_0xBFCE58B2B3249999(iLocal_95, 0) && unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_95, 0)) && unk_0xF41EB7643E61A928(iLocal_89, iLocal_95, 0)) && !func_373())
	{
		bVar0 = true;
	}
	if (!iLocal_588)
	{
		if ((unk_0xBFCE58B2B3249999(iLocal_95, 0) && unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_95, 0)) && unk_0xF41EB7643E61A928(iLocal_89, iLocal_95, 0))
		{
			if (iLocal_586 == 0)
			{
				if (unk_0xDA654EB115F9FF7D(unk_0x6E1F1D2CB9DFB793(unk_0x35A1BC0F4035B2F2()), "RADIO_01_CLASS_ROCK"))
				{
					fLocal_150 = (fLocal_150 + unk_0x7FF6ACE380ED166C());
				}
				if (fLocal_150 > 7f)
				{
					iLocal_588 = 1;
				}
			}
			else if (iLocal_586 == 4)
			{
				if (unk_0x35A1BC0F4035B2F2() != 8)
				{
					iLocal_586++;
					iLocal_588 = 1;
				}
			}
		}
	}
	else if ((!unk_0xBFCE58B2B3249999(iLocal_95, 0) || (unk_0xBFCE58B2B3249999(iLocal_95, 0) && !unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_95, 0))) || (unk_0xBFCE58B2B3249999(iLocal_95, 0) && !unk_0xF41EB7643E61A928(iLocal_89, iLocal_95, 0)))
	{
		iLocal_588 = 0;
	}
	if (vdist(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(iLocal_89, 1)) < 15f)
	{
		if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
		{
			if (unk_0x97AEEA04505AFDC3(unk_0x7D2B9E6A64637269()))
			{
				if (!iLocal_589)
				{
					if ((unk_0xDFB7BFA6482FEE1E() - iLocal_168) > 7500)
					{
						iLocal_589 = 1;
						bVar0 = false;
					}
				}
			}
		}
	}
	if (iLocal_589)
	{
		bVar0 = false;
		if (!func_177())
		{
			func_202(iLocal_88, "GENERIC_SHOCKED_MED", "Jimmy", 3);
			iLocal_169 = unk_0xDFB7BFA6482FEE1E();
			iLocal_589 = 0;
		}
	}
	if (!iLocal_588)
	{
		if (iLocal_161 < 7 && !unk_0xDA654EB115F9FF7D(&Local_556, "FAM2_DRIV2"))
		{
			if ((unk_0xBFCE58B2B3249999(iLocal_95, 0) && unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iLocal_95, 0)) && unk_0x27FC1B0077581B37(iLocal_95, -1, 0) == unk_0x7D2B9E6A64637269())
			{
				if (unk_0x4DDAC4C80BACF92C(iLocal_95) > 30f)
				{
					if (unk_0x7919C1F1872DDE8E(iLocal_95))
					{
						func_174();
						iLocal_555 = 0;
						iLocal_554 = 0;
						StringCopy(&Local_556, "", 24);
						iLocal_161 = 7;
					}
				}
				if ((Global_74194[5 /*9*/].f_1 - iLocal_587) > 3)
				{
					func_174();
					iLocal_555 = 0;
					iLocal_554 = 0;
					StringCopy(&Local_556, "", 24);
					iLocal_161 = 7;
				}
			}
		}
		switch (iLocal_161)
		{
			case 0:
				if (func_158(&Local_549, cLocal_202, "FAM2_BEACH", 8, 0, 0, 0))
				{
					unk_0x2DC2890038BFF758(1f, 7f, 3);
					fLocal_150 = 0f;
					iLocal_587 = Global_74194[5 /*9*/].f_1;
					iLocal_161++;
					iLocal_555 = 0;
					iLocal_554 = 0;
					iLocal_162 = unk_0xDFB7BFA6482FEE1E();
					StringCopy(&Local_556, "", 24);
				}
				break;
			
			case 1:
				if ((unk_0xDFB7BFA6482FEE1E() - iLocal_162) > 2000)
				{
					if (!unk_0x575B7C28D81C0B4D(uLocal_102))
					{
						uLocal_102 = func_215(Local_133, 0);
					}
					else if (!func_177())
					{
						func_151("FM2_BK2BIKE", 7500, 1);
						iLocal_162 = unk_0xDFB7BFA6482FEE1E();
						iLocal_161++;
					}
				}
				break;
			
			case 2:
				if (((unk_0xDFB7BFA6482FEE1E() - iLocal_162) > 2000 && unk_0xC82CD1DB42480082(203) == 0) || (unk_0xDFB7BFA6482FEE1E() - iLocal_162) > 6000)
				{
					iLocal_161++;
				}
				break;
			
			case 3:
				if (func_213())
				{
					func_211("FAM2_WALK", bVar0);
				}
				else
				{
					func_211("FAM2_WALK2", bVar0);
				}
				if ((!func_177() && !iLocal_555) && iLocal_554)
				{
					fLocal_150 = 0f;
					iLocal_161++;
					iLocal_555 = 0;
					iLocal_554 = 0;
					StringCopy(&Local_556, "", 24);
					iLocal_162 = unk_0xDFB7BFA6482FEE1E();
				}
				break;
			
			case 4:
				if ((unk_0xDFB7BFA6482FEE1E() - iLocal_162) > 3000)
				{
					iLocal_161++;
				}
				break;
			
			case 5:
				if (func_213())
				{
					func_211("FAM2_DRIVB", bVar0);
				}
				else
				{
					func_211("FAM2_DRIVE", bVar0);
				}
				if ((!func_177() && !iLocal_555) && iLocal_554)
				{
					iLocal_161++;
					iLocal_555 = 0;
					iLocal_554 = 0;
					StringCopy(&Local_556, "", 24);
					iLocal_162 = unk_0xDFB7BFA6482FEE1E();
				}
				break;
			
			case 6:
				break;
			
			case 7:
				if (!unk_0xC49311A2A500FF09(iLocal_89, 0) || !unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
				{
					bVar0 = false;
				}
				func_211("FAM2_DRIV2", bVar0);
				if ((!func_177() && !iLocal_555) && iLocal_554)
				{
					iLocal_161++;
					iLocal_555 = 0;
					iLocal_554 = 0;
					StringCopy(&Local_556, "", 24);
				}
				break;
		}
	}
	else
	{
		switch (iLocal_586)
		{
			case 0:
				if (func_177())
				{
					Local_556 = { func_176() };
					func_174();
					iLocal_555 = 1;
				}
				iLocal_586++;
				break;
			
			case 1:
				if (func_158(&Local_549, cLocal_202, "FAM2_JAZZ", 8, 0, 0, 0))
				{
					settimerb(0);
					iLocal_586++;
				}
				break;
			
			case 2:
				if (timerb() > 1000)
				{
					unk_0x1817E299AF9979DE(8);
					settimerb(0);
					iLocal_586++;
				}
				break;
			
			case 3:
				if (!func_177())
				{
					if (func_158(&Local_549, cLocal_202, "FAM2_JAZZ2", 8, 0, 0, 0))
					{
						settimerb(0);
						iLocal_586++;
					}
				}
				break;
			
			case 4:
				iLocal_588 = 0;
				break;
			
			case 5:
				if ((func_177() && !func_372("FAM2_JAZZ")) && !func_372("FAM2_JAZZ2"))
				{
					Var1 = { func_176() };
					if (!unk_0xAB6A270F84A8781E(&Var1) && !unk_0xDA654EB115F9FF7D("NULL", &Var1))
					{
						Local_556 = { Var1 };
					}
					func_174();
					iLocal_555 = 1;
				}
				if (!func_177())
				{
					if (func_158(&Local_549, cLocal_202, "FAM2_JAZZ3", 8, 0, 0, 0))
					{
						settimerb(0);
						iLocal_586++;
					}
				}
				break;
			
			case 6:
				if (!func_177())
				{
					if (func_158(&Local_549, cLocal_202, "FAM2_JAZZ4", 8, 0, 0, 0))
					{
						settimerb(0);
						iLocal_586++;
					}
				}
				break;
			
			case 7:
				iLocal_588 = 0;
				break;
			}
	}
}

int func_372(char* sParam0)
{
	var uVar0;
	
	if (func_177())
	{
		MemCopy(&uVar0, {func_317()}, 4);
		if (unk_0xDA654EB115F9FF7D(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_373()
{
	return Global_99422.f_363 > 0;
}

void func_374()
{
	switch (iLocal_159)
	{
		case 0:
			unk_0xCDF87F9AAD28040F("SE_MICHAELS_HOUSE_RADIO", 0);
			iLocal_897 = 0;
			if (!unk_0x43DDCE9C73E22D9D())
			{
				unk_0xA566E488BA0A0A4C("family_2_int", 8);
				iLocal_159 = -1;
			}
			else
			{
				iLocal_159++;
			}
			break;
		
		case -1:
			if (unk_0xE807694ABD40478F())
			{
				func_378("Michael", func_93(0), 32);
				iLocal_159 = 1;
			}
			break;
		
		case 1:
			if (func_199())
			{
				if (func_273("family_2_int"))
				{
					func_191(1, 1, 1, 0, 0, 0, 0);
					if (!unk_0x419E13582192CFEA(iLocal_89))
					{
						unk_0xF2CEEA627AD5A24B(iLocal_89, "Jimmy", 2, func_100(14), 0);
					}
					else if (!unk_0xECEC7528A52B4EE8(iLocal_89))
					{
						unk_0xF2CEEA627AD5A24B(iLocal_89, "Jimmy", 0, 0, 0);
					}
					func_204(1);
					func_190();
					unk_0x66AE54CE92457FEE(1);
					unk_0x7E1C1B2FCF372776(0);
					unk_0xEBDFE18B261316C1(4);
					unk_0x51595C15729F2944();
					iLocal_159++;
				}
				else
				{
					unk_0xCB63763717A253D9();
					iLocal_159 = 0;
				}
			}
			break;
		
		case 2:
			unk_0x652CD4778CAE64C2("EXTRASUNNY");
			unk_0x3C0A5394C4294EFD(0.1f);
			if (unk_0x419E13582192CFEA(iLocal_109))
			{
				unk_0x04F4D55F2C0C756D(&iLocal_109);
				unk_0xC5CAF559D14B1D18(Local_514, 1f, joaat("v_ilev_mm_doorm_l"), 0);
			}
			if (unk_0x419E13582192CFEA(iLocal_110))
			{
				unk_0x04F4D55F2C0C756D(&iLocal_110);
				unk_0xC5CAF559D14B1D18(Local_515, 1f, joaat("v_ilev_mm_doorm_r"), 0);
			}
			if (unk_0x4336DC3297C47528(-2097039789))
			{
				unk_0x9A347B86DBED8192(-2097039789, 0f, 0, 0);
				unk_0x1EA8B94F4F446F35(-2097039789, 3, 0, 1);
			}
			if (unk_0x4336DC3297C47528(-2127416656))
			{
				unk_0x9A347B86DBED8192(-2127416656, 0f, 0, 0);
				unk_0x1EA8B94F4F446F35(-2127416656, 3, 0, 1);
			}
			unk_0xF9135F131C423364("missfam2mcs_intp1");
			unk_0xCA089CD1A17D76DF(unk_0x7D2B9E6A64637269());
			if (unk_0x419E13582192CFEA(iLocal_109))
			{
				unk_0x90ED32458AC2D129(iLocal_109, -1000f, 1);
				unk_0x39E572BDDBA714A2(&iLocal_109);
			}
			if (unk_0x419E13582192CFEA(iLocal_110))
			{
				unk_0x90ED32458AC2D129(iLocal_110, -1000f, 1);
				unk_0x39E572BDDBA714A2(&iLocal_110);
			}
			unk_0xF22CC2CA28E44D4F(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), 300f);
			func_445(&Local_80, 0, 0, 2000, 1, 0, 0, 1);
			unk_0x45D3E5CF91B9BFB7(unk_0x7D2B9E6A64637269());
			iLocal_159++;
			break;
		
		case 3:
			if (!unk_0x419E13582192CFEA(iLocal_89))
			{
				if (unk_0x419E13582192CFEA(unk_0x1F2ACFAC81F93E2B("Jimmy", 0)))
				{
					iLocal_89 = unk_0xFAA5505029C4B5A6(unk_0x1F2ACFAC81F93E2B("Jimmy", 0));
				}
			}
			if (unk_0x30700B4AA35835FD("Jimmy", 0))
			{
				if (!unk_0xECEC7528A52B4EE8(iLocal_89))
				{
					unk_0x78CDDD1E6367978D(iLocal_89, Local_122, 1, 0, 0, 1);
					unk_0xCD37A28258D70638(iLocal_89, fLocal_123);
					unk_0xEE90D1369E1800A2(iLocal_89, -668482597, 1, 1, 0);
					unk_0xD9F4B63D8750476C(iLocal_89, sLocal_157, 0, 8, -1);
				}
			}
			if (unk_0x30700B4AA35835FD("Michael", 0) && unk_0x4C6F400CF30C1680(0))
			{
				unk_0xEE90D1369E1800A2(unk_0x7D2B9E6A64637269(), -668482597, 0, 0, 0);
				unk_0x6C59944A0530A574(unk_0x7D2B9E6A64637269(), 0, 0);
				unk_0x8F00E6BF3D6A18D3(unk_0x1146A9AE09CE2B14(), 1f, 2000, 0, 1, 0);
				if (!unk_0xECEC7528A52B4EE8(iLocal_89))
				{
					func_97(iLocal_89);
				}
			}
			if (!iLocal_897)
			{
				if (unk_0x8B6A925F148E0E94() && unk_0x80C744B6449E4AEB())
				{
					settimera(0);
					if (unk_0x22C43B6780E8FE5B(Local_120, 30f, 2))
					{
						while (!unk_0xABE4F4FD4329B037() && timera() < 5000)
						{
							unk_0x8BA9BCDD56AA7115(0);
							wait(0);
						}
						unk_0xED93DAC36CA89AF2();
						iLocal_897 = 1;
					}
				}
			}
			unk_0xDF23DCD7A3E1B7A5(0);
			unk_0x3A13FD2813C8251F(0, 1065353216);
			if (!unk_0x419E13582192CFEA(iLocal_98))
			{
				if (func_377(0, 1, Local_126, 100f))
				{
					func_375(0, 1);
				}
				unk_0x366E7F593105797F(0, 18, 1);
				func_334(&iLocal_98, 0, Local_126, fLocal_127, 1, 1);
			}
			if (!unk_0x43DDCE9C73E22D9D())
			{
				func_191(0, 1, 1, 0, 0, 0, 0);
				func_188();
				func_207(1);
				unk_0xBB3CDAB62C8773C8("FAMILY2", 0);
				unk_0xBB3CDAB62C8773C8(cLocal_202, 6);
				if (!unk_0xECEC7528A52B4EE8(iLocal_89))
				{
					func_97(iLocal_89);
				}
				unk_0xC7EF1AC7845F532D();
				if (unk_0xE75EE67F14EAAE37(iLocal_113))
				{
					unk_0x8BAFB6B897BD2A31(iLocal_113);
				}
				uLocal_898 = unk_0xE9B5676DFF7B46CD(-809.962f, 170.919f, 75.7407f, 3f, "des_tvsmash");
				if (unk_0x94DF8EC7DE1863A1(uLocal_898))
				{
					unk_0x6322ED685F2E1703(uLocal_898, 9);
				}
				if (unk_0x8B6A925F148E0E94() || unk_0x80C744B6449E4AEB())
				{
					if (!unk_0xECEC7528A52B4EE8(iLocal_89))
					{
						unk_0x78CDDD1E6367978D(iLocal_89, Local_122, 1, 0, 0, 1);
						unk_0xCD37A28258D70638(iLocal_89, fLocal_123);
						unk_0xEE90D1369E1800A2(iLocal_89, -668482597, 1, 1, 0);
						unk_0xD9F4B63D8750476C(iLocal_89, sLocal_157, 3, 0, -1);
					}
					wait(0);
					unk_0xEE90D1369E1800A2(unk_0x7D2B9E6A64637269(), -668482597, 1, 1, 0);
					unk_0x8F00E6BF3D6A18D3(unk_0x1146A9AE09CE2B14(), 1f, 2000, 0, 1, 0);
				}
				func_448(24);
				unk_0xCDF87F9AAD28040F("SE_MICHAELS_HOUSE_RADIO", 1);
				unk_0x2CA971FF57ACA369(0, 0);
				unk_0x6E1E3A5B1F9AB95B(500);
			}
			break;
	}
}

void func_375(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x419E13582192CFEA(Global_96701[iVar0]))
		{
			if (iParam0 == 145 || Global_96711[iVar0] == iParam0)
			{
				if (iParam1 == 0 || unk_0x6471F4759775FCA4(Global_96701[iVar0]) == func_376(iParam0, iParam1))
				{
					if (!unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), Global_96701[iVar0], 0))
					{
						unk_0x4985CD0720AFD468(Global_96701[iVar0], 0, 1);
						unk_0x5420D0D520CF44D0(&(Global_96701[iVar0]));
						Global_96711[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_376(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_89(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_370(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_377(int iParam0, int iParam1, struct<3> Param2, float fParam3)
{
	int iVar0;
	struct<82> Var1;
	int iVar2;
	
	if (!func_89(iParam0))
	{
		return 0;
	}
	Var1.f_11 = 12;
	Var1.f_31 = 49;
	Var1.f_81 = 2;
	iVar2 = 0;
	func_370(iParam0, &Var1, iParam1);
	iVar2 = Var1;
	if (iVar2 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x419E13582192CFEA(Global_96701[iVar0]) && unk_0xBFCE58B2B3249999(Global_96701[iVar0], 0))
			{
				if (unk_0x6471F4759775FCA4(Global_96701[iVar0]) == iVar2 && Global_96711[iVar0] == iParam0)
				{
					if (fParam3 == -1f || unk_0x0BABEFEA577FCFA4(unk_0xD6E677FAD7521410(Global_96701[iVar0], 0), Param2, 1) <= fParam3)
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

void func_378(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<14> Var1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	int iVar9;
	
	uVar2 = 9;
	uVar8 = { func_382(iParam1, iParam2) };
	iVar9 = 0;
	if (uVar8[2] == -99 && uVar8[0] == -99)
	{
		iVar9 = 1;
	}
	iVar6 = 0;
	while (iVar6 <= 14)
	{
		iVar0 = iVar6;
		if (iVar0 != 12 && iVar0 != 14)
		{
			if (iVar0 == 13)
			{
				uVar2 = { func_379(iParam1, uVar8[iVar6]) };
				iVar7 = 0;
				while (iVar7 <= 8)
				{
					iVar3 = iVar7;
					iVar4 = func_28(iVar3);
					iVar5 = func_11(iVar4);
					if (uVar2[iVar7] != iVar5)
					{
						Var1 = { func_14(iParam1, 14, uVar2[iVar7], -1) };
						unk_0xE13F3E0ED3407B90(sParam0, Var1.f_12, Var1.f_3, 0, iParam1);
					}
					iVar7++;
				}
			}
			else
			{
				Var1 = { func_14(iParam1, iVar0, uVar8[iVar6], -1) };
				if (((iVar6 == 2 || iVar6 == 0) && iVar9) || uVar8[iVar6] == -99)
				{
					Var1.f_3 = Global_112293.f_2361.f_539[Var1.f_5 /*65*/].f_13[iVar6];
					Var1.f_4 = Global_112293.f_2361.f_539[Var1.f_5 /*65*/][iVar6];
				}
				unk_0xD5969825AE0DC560(sParam0, func_9(iVar0), Var1.f_3, Var1.f_4, iParam1);
			}
		}
		iVar6++;
	}
}

struct<10> func_379(int iParam0, int iParam1)
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
					func_381(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_381(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_381(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_381(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_381(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_381(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_381(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_381(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_381(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_381(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_381(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_380(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 31:
					func_381(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_381(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_381(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_381(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_381(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_381(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_381(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_381(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_381(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_381(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_380(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 31:
					func_381(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_381(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_381(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_381(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_381(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_381(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_381(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_381(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_381(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_381(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_380(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_381(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_381(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_381(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_381(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_381(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_381(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_381(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_381(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_381(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_381(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_381(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_381(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_381(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_381(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_381(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 14:
					func_381(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_381(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_381(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_381(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_381(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_381(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_381(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_381(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_381(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_381(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 24:
					func_381(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_380(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_381(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_381(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_381(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_381(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_381(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_381(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_381(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_381(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_381(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_381(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_381(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_381(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_381(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_381(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_381(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				
				case 14:
					func_381(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_381(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_381(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_381(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_381(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_381(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_381(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_381(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_381(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_381(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_380(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_380(int iParam0, int iParam1, int iParam2, int iParam3)
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
		unk_0x03178B32FA4F2AC2(iParam2, &Var1);
		if (!unk_0xD1ABD511D9C326A3(Var1))
		{
			iVar3 = 0;
			while (iVar3 < Var1.f_3)
			{
				if (unk_0x637C66DB5E571C4D(Var1.f_1, iVar3, &Var2) && Var2.f_2 != -1)
				{
					if ((Var2.x != 0 && Var2.x != -1) && Var2.x != joaat("0"))
					{
						(*iParam0)[Var2.f_2] = func_7(iParam1, Var2.x, 14, iVar0);
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

void func_381(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

struct<17> func_382(int iParam0, int iParam1)
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
					if (Global_112293.f_9083.f_99.f_58[120])
					{
						func_384(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						func_384(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				
				case 1:
					func_384(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				
				case 2:
					func_384(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				
				case 3:
					func_384(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				
				case 4:
					func_384(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				
				case 5:
					func_384(&Var1, -99, -99, Global_112293.f_2361.f_539.f_196[0], Global_112293.f_2361.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				
				case 6:
					func_384(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_384(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 8:
					func_384(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_384(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_384(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				
				case 11:
					func_384(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_384(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_384(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_384(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				
				case 15:
					func_384(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				
				case 16:
					func_384(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_384(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_384(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				
				case 19:
					func_384(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_384(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_384(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_384(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_384(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_384(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_384(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_384(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_384(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_384(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_384(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_384(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_384(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				
				case 32:
					func_384(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_384(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_384(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				
				case 35:
					func_384(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_384(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_384(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_384(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_384(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_384(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_384(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_384(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_384(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_384(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_384(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 46:
					func_384(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_384(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 48:
					func_384(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 49:
					func_384(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 50:
					func_384(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				
				case 51:
					func_384(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 52:
					func_384(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_383(&Var1, iParam0, iParam1, 53);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					func_384(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_384(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 2:
					func_384(&Var1, -99, -99, Global_112293.f_2361.f_539.f_196[1], Global_112293.f_2361.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				
				case 3:
					func_384(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				
				case 4:
					func_384(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				
				case 5:
					func_384(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 6:
					func_384(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_384(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				
				case 8:
					func_384(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				
				case 9:
					func_384(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_384(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_384(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 12:
					func_384(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_384(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_384(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_384(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_384(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_384(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_384(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				
				case 19:
					func_384(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_384(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_384(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				
				case 22:
					func_384(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				
				case 23:
					func_384(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				
				case 24:
					func_384(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				
				case 25:
					func_384(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				
				case 26:
					func_384(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				
				case 27:
					func_384(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				
				case 28:
					func_384(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				
				case 29:
					func_384(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				
				case 30:
					func_384(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				
				case 31:
					func_384(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				
				case 32:
					func_384(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				
				case 33:
					func_384(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				
				case 34:
					func_384(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				
				case 35:
					func_384(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				
				case 36:
					func_384(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				
				case 37:
					func_384(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				
				case 38:
					func_384(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_384(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_384(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_384(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_384(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_384(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				
				case 44:
					func_384(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 45:
					func_384(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				
				case 46:
					func_384(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				
				default:
					func_383(&Var1, iParam0, iParam1, 47);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					func_384(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_384(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				
				case 2:
					func_384(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				
				case 3:
					func_384(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				
				case 4:
					func_384(&Var1, -99, -99, Global_112293.f_2361.f_539.f_196[2], Global_112293.f_2361.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 5:
					func_384(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				
				case 6:
					func_384(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				
				case 7:
					func_384(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				
				case 8:
					func_384(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_384(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_384(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_384(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_384(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_384(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_384(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_384(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_384(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_384(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_384(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 19:
					func_384(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_384(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_384(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_384(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_384(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_384(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_384(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_384(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_384(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_384(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_384(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_384(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_384(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 32:
					func_384(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_384(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_384(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 35:
					func_384(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_384(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_384(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_384(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_384(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_384(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_384(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_384(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_384(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_384(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_384(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 46:
					func_384(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_384(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_383(&Var1, iParam0, iParam1, 48);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_384(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				
				case 1:
					func_384(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				
				case 2:
					func_384(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				
				case 3:
					func_384(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				
				case 4:
					func_384(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				
				case 5:
					func_384(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				
				case 6:
					func_384(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				
				case 7:
					func_384(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				
				case 8:
					func_384(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				
				case 9:
					func_384(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				
				case 10:
					func_384(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				
				case 11:
					func_384(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				
				case 12:
					func_384(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				
				case 13:
					func_384(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				
				case 14:
					func_384(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				
				case 15:
					func_384(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				
				case 16:
					func_384(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				
				case 17:
					func_384(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				
				case 18:
					func_384(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				
				case 19:
					func_384(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				
				case 20:
					func_384(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				
				case 21:
					func_384(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				
				case 22:
					func_384(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				
				case 23:
					func_384(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				
				case 24:
					func_384(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				
				case 25:
					func_384(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				
				default:
					func_383(&Var1, iParam0, iParam1, 26);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_384(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				
				case 1:
					func_384(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				
				case 2:
					func_384(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				
				case 3:
					func_384(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				
				case 4:
					func_384(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				
				case 5:
					func_384(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				
				case 6:
					func_384(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				
				case 7:
					func_384(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				
				case 8:
					func_384(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				
				case 9:
					func_384(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				
				case 10:
					func_384(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				
				case 11:
					func_384(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				
				case 12:
					func_384(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				
				case 13:
					func_384(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				
				case 14:
					func_384(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				
				case 15:
					func_384(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				
				case 16:
					func_384(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				
				case 17:
					func_384(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				
				case 18:
					func_384(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				
				case 19:
					func_384(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				
				case 20:
					func_384(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				
				case 21:
					func_384(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				
				case 22:
					func_384(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				
				case 23:
					func_384(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				
				case 24:
					func_384(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				
				case 25:
					func_384(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				
				case 26:
					func_384(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				
				case 27:
					func_384(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				
				default:
					func_383(&Var1, iParam0, iParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_383(var uParam0, int iParam1, int iParam2, int iParam3)
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
	unk_0xE619DE4F72F76E79(iVar0, 0);
	unk_0x4ECDF1AC3EC9ADF1((iParam2 - iParam3), &Var1);
	if (!unk_0xD1ABD511D9C326A3(Var1))
	{
		iVar4 = 0;
		while (iVar4 < Var1.f_4)
		{
			if (unk_0x04E5165F663D7983(Var1.f_1, iVar4, &Var2))
			{
				if ((Var2.x != 0 && Var2.x != -1) && Var2.x != joaat("0"))
				{
					if (Var2.f_2 == 10)
					{
						unk_0xFE9B2B065B8931FE(&Var3);
						unk_0x3BA50B117757EA3E(Var2.x, &Var3);
						if (Var2.x != Var3.f_1)
						{
							uParam0->f_16 = 1;
						}
					}
					if (Var2.f_2 == 10 && uParam0->f_16)
					{
						(*uParam0)[func_86(Var2.f_2)] = Var2.x;
						uParam0->f_16 = 1;
					}
					else
					{
						(*uParam0)[func_86(Var2.f_2)] = func_7(iParam1, Var2.x, func_86(Var2.f_2), iVar0);
					}
				}
				else if (Var2.f_1 != -1)
				{
					(*uParam0)[func_86(Var2.f_2)] = Var2.f_1;
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

void func_384(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

int func_385(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_469(unk_0x7D2B9E6A64637269(), 51);
		if (unk_0x2D0F2BF9BAF6A1AD(unk_0x7D2B9E6A64637269()) || !bParam1)
		{
			func_386(unk_0x7D2B9E6A64637269(), 12, 51, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			unk_0xAA87C426DC96454A(unk_0x7D2B9E6A64637269());
			return 1;
		}
	}
	else
	{
		func_469(unk_0x7D2B9E6A64637269(), 32);
		if (unk_0x2D0F2BF9BAF6A1AD(unk_0x7D2B9E6A64637269()) || !bParam1)
		{
			func_386(unk_0x7D2B9E6A64637269(), 12, 32, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			unk_0xAA87C426DC96454A(unk_0x7D2B9E6A64637269());
			return 1;
		}
	}
	return 0;
}

int func_386(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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
	
	if (unk_0xECEC7528A52B4EE8(uParam0) || iParam2 == -99)
	{
		return 0;
	}
	Global_77057++;
	iVar5 = -99;
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = unk_0x6471F4759775FCA4(iParam0);
	if (iParam5 == 0)
	{
		Global_77059[1 /*14*/] = { func_14(iVar10, iParam1, iParam2, -1) };
		if (!func_412(iParam3))
		{
			Global_77057 = (Global_77057 - 1);
			return 0;
		}
		func_410(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("player_one"))
			{
				iVar5 = func_409(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = func_409(iParam0, 9);
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
			iVar7 = func_408(iParam0, 1);
			if (!func_407(iVar10, 14, iVar7, -1))
			{
				iVar7 = -99;
			}
			iVar8 = func_408(iParam0, 0);
			if (!func_406(iVar10, 14, iVar8, -1) && !func_405(iVar10, 14, iVar8, -1))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = func_408(iParam0, 2);
			}
		}
		unk_0xA7E55BCB7431698B(iParam0);
		uVar11 = 15;
		if (iParam5 == 1)
		{
			uVar11 = { Global_77102 };
		}
		else
		{
			uVar11 = { func_382(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_77059[1 /*14*/] = { func_14(iVar10, iVar0, uVar11[iVar0], -1) };
				if (unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 0))
				{
					if (iVar0 == 13)
					{
						uVar12 = 9;
						if (iParam5 == 1)
						{
							uVar12 = { Global_77119 };
						}
						else
						{
							uVar12 = { func_379(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_77059[1 /*14*/] = { func_14(iVar10, 14, uVar12[iVar1], -1) };
							func_402(iParam0, Global_77059[1 /*14*/].f_12, Global_77059[1 /*14*/].f_3, Global_77059[1 /*14*/].f_4);
							func_410(14);
							if (Global_77057 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = func_396(iParam0, iVar10, 14, uVar12[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_386(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
							func_84(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							unk_0x4170FE884DF7426D(iParam0, func_9(iVar0), Global_77059[1 /*14*/].f_3, Global_77059[1 /*14*/].f_4, unk_0xEE2FD6984DD352B8(iParam0, func_9(iVar0)));
						}
						else
						{
							unk_0x4170FE884DF7426D(iParam0, func_9(iVar0), Global_77059[1 /*14*/].f_3, Global_77059[1 /*14*/].f_4, iParam4);
						}
						func_410(iVar0);
						if (Global_77057 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = func_396(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_386(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_77059[1 /*14*/] = { func_14(iVar10, iVar0, func_395(iParam0, iVar0, -1), -1) };
				if (unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (func_394(iParam0, iVar10, &iVar4, 1))
							{
								func_386(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { func_382(iVar10, 0) };
						func_386(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var14 = { func_14(iVar10, 8, iVar5, -1) };
			if (iVar5 != -99)
			{
				if (func_392(iVar10, iParam2, 8, iVar5, &uVar11, &Var14))
				{
					func_386(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { func_14(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (func_392(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_386(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { func_14(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (func_392(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_386(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { func_14(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (func_392(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_386(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { func_14(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (func_392(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_386(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar15 = { func_379(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_77059[1 /*14*/] = { func_14(iVar10, 14, uVar15[iVar1], -1) };
			func_402(iParam0, Global_77059[1 /*14*/].f_12, Global_77059[1 /*14*/].f_3, Global_77059[1 /*14*/].f_4);
			func_410(14);
			if (Global_77057 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_396(iParam0, iVar10, 14, uVar15[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_386(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		func_402(iParam0, Global_77059[1 /*14*/].f_12, Global_77059[1 /*14*/].f_3, Global_77059[1 /*14*/].f_4);
		func_410(iParam1);
		if (Global_77057 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_396(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_386(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == -1)
		{
			unk_0x4170FE884DF7426D(iParam0, func_9(iParam1), Global_77059[1 /*14*/].f_3, Global_77059[1 /*14*/].f_4, unk_0xEE2FD6984DD352B8(iParam0, func_9(iParam1)));
		}
		else
		{
			unk_0x4170FE884DF7426D(iParam0, func_9(iParam1), Global_77059[1 /*14*/].f_3, Global_77059[1 /*14*/].f_4, iParam4);
		}
		if (Global_77057 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_396(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_386(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			func_389(iVar10, iParam1, iParam2);
		}
	}
	if (Global_77057 == 1)
	{
		if (func_394(iParam0, iVar10, &iVar4, 0))
		{
			func_386(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_387(iParam0, iVar10, &iVar4))
		{
			func_386(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_77057 = (Global_77057 - 1);
	return 1;
}

int func_387(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_13(iParam1);
	if (Global_112293.f_2361.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_388(uParam0, Global_112293.f_2361.f_539[iVar0 /*65*/].f_64, Global_112293.f_2361.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_112293.f_2361.f_539[iVar0 /*65*/].f_62;
			Global_112293.f_2361.f_539[iVar0 /*65*/].f_63 = -99;
			Global_112293.f_2361.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_388(int iParam0, int iParam1, int iParam2)
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
	
	if (unk_0xECEC7528A52B4EE8(uParam0))
	{
		return 0;
	}
	iVar0 = unk_0x6471F4759775FCA4(iParam0);
	Global_77059[1 /*14*/] = { func_14(iVar0, iParam1, iParam2, -1) };
	if (!unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { func_382(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_388(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { func_379(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_388(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_77059[2 /*14*/] = { func_14(iVar0, 14, iVar4, -1) };
									if (Global_77059[2 /*14*/].f_12 == iVar3)
									{
										if (func_388(iParam0, 14, iVar4))
										{
											if (!func_392(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_77059[2 /*14*/])))
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
						iVar1 = func_409(iParam0, iVar2);
						Global_77059[2 /*14*/] = { func_14(iVar0, iVar2, iVar1, -1) };
						if (!func_392(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_77059[2 /*14*/])))
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
		uVar8 = { func_379(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 <= 8)
		{
			if (!func_388(iParam0, 14, uVar8[iVar7]))
			{
				return 0;
			}
			iVar7++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (unk_0x228A4ED518554B3F(iParam0, Global_77059[1 /*14*/].f_12) == Global_77059[1 /*14*/].f_3 && (unk_0x64F7E3FF8F40315D(iParam0, Global_77059[1 /*14*/].f_12) == Global_77059[1 /*14*/].f_4 || Global_77059[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
	}
	else if (Global_77059[1 /*14*/].f_3 == unk_0x094C1D2DFE050D6E(iParam0, func_9(iParam1)) && Global_77059[1 /*14*/].f_4 == unk_0x288277F22D527487(iParam0, func_9(iParam1)))
	{
		return 1;
	}
	return 0;
}

void func_389(int iParam0, int iParam1, int iParam2)
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
	if (func_391(iParam0, 12, iVar0))
	{
		if (func_390(iParam0, iParam1, iParam2))
		{
			iVar1 = func_13(iParam0);
			if (iParam1 == 3)
			{
				Global_112293.f_2361.f_539.f_196[iVar1] = iParam2;
			}
			else if (iParam1 == 4)
			{
				Global_112293.f_2361.f_539.f_200[iVar1] = iParam2;
			}
		}
	}
}

int func_390(int iParam0, int iParam1, int iParam2)
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

bool func_391(int iParam0, int iParam1, int iParam2)
{
	Global_77059[1 /*14*/] = { func_14(iParam0, iParam1, iParam2, -1) };
	return unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 2);
}

int func_392(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
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
		uVar0 = { func_379(iParam0, (*uParam4)[13]) };
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
	if (func_393(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_407(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
		else if (func_406(iParam0, iParam2, iParam3, -1))
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
		else if (func_405(iParam0, iParam2, iParam3, -1))
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
		if (func_407(iParam0, iParam2, iParam3, -1))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return 0;
			}
			return 1;
		}
		else if (func_406(iParam0, iParam2, iParam3, -1))
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
		else if (func_405(iParam0, iParam2, iParam3, -1))
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
		if (func_407(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
		else if (func_406(iParam0, iParam2, iParam3, -1))
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
		else if (func_405(iParam0, iParam2, iParam3, -1))
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

int func_393(int iParam0, int iParam1, int iParam2)
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

int func_394(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_13(iParam1);
	if (Global_112293.f_2361.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_388(uParam0, Global_112293.f_2361.f_539[iVar0 /*65*/].f_61, Global_112293.f_2361.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_112293.f_2361.f_539[iVar0 /*65*/].f_59;
			Global_112293.f_2361.f_539[iVar0 /*65*/].f_60 = -99;
			Global_112293.f_2361.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_395(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xECEC7528A52B4EE8(uParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_388(iParam0, iParam1, iVar0))
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
				if (func_388(iParam0, iParam1, iVar1))
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
				return func_408(iParam0, iParam2);
			}
		}
		else
		{
			return func_409(iParam0, iParam1);
		}
	}
	return -99;
}

int func_396(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
				iVar1 = func_409(uParam0, 1);
				iVar0 = func_4(iParam1, iParam3, iVar1);
				break;
			
			case 1:
				iVar2 = func_409(uParam0, 2);
				iVar0 = func_4(iParam1, iVar2, iParam3);
				break;
		}
	}
	else if (iParam4 == 2)
	{
		func_84(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 1)
	{
		func_12(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 6)
	{
		if (iParam2 == 4)
		{
			if (func_401(iParam1, iParam3, &iVar0))
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
									if (!func_400(uParam0, 3, 44, 59))
									{
										iVar0 = 44;
									}
								}
								else if (((iParam3 >= 8 && iParam3 <= 17) || (iParam3 >= 18 && iParam3 <= 27)) || (iParam3 >= 28 && iParam3 <= 43))
								{
									if (!func_400(uParam0, 3, 135, 150))
									{
										iVar0 = func_399(iParam1, 3, 135, 150);
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
									if (!func_400(uParam0, 3, 209, 222))
									{
										iVar0 = func_399(iParam1, 3, 209, 222);
									}
								}
								else if ((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8))
								{
									if (!func_400(uParam0, 3, 243, 258))
									{
										if (iParam3 == 1 || iParam3 == 5)
										{
											iVar0 = func_399(iParam1, 3, 243, 246);
										}
										else if (iParam3 == 2 || iParam3 == 6)
										{
											iVar0 = func_399(iParam1, 3, 247, 250);
										}
										else if (iParam3 == 3 || iParam3 == 7)
										{
											iVar0 = func_399(iParam1, 3, 251, 254);
										}
										else if (iParam3 == 4 || iParam3 == 8)
										{
											iVar0 = func_399(iParam1, 3, 255, 258);
										}
									}
								}
								else if (iParam3 == 41 || iParam3 == 42)
								{
									if (!func_400(uParam0, 3, 176, 191) && !func_400(uParam0, 3, 227, 242))
									{
										iVar0 = func_399(iParam1, 3, 176, 191);
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
								iVar4 = func_409(uParam0, 3);
							}
							else if (iParam2 == 3)
							{
								iVar4 = iParam3;
								iVar5 = func_409(uParam0, 11);
								iVar5 = func_398(iParam1, iVar4, iVar5, 0);
							}
							iVar3 = func_409(uParam0, 8);
							if (((iVar5 >= 5 && iVar5 <= 8) || (iVar5 >= 25 && iVar5 <= 40)) || (iVar5 >= 42 && iVar5 <= 43))
							{
								if (!func_397(joaat("player_one"), iVar3, iVar5, iVar4, &iVar6))
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
								iVar7 = func_409(uParam0, 8);
								iVar8 = func_409(uParam0, 11);
								if (((iVar7 >= 27 && iVar7 <= 42) || (iVar7 >= 43 && iVar7 <= 58)) || (iVar7 >= 59 && iVar7 <= 74))
								{
									iVar0 = func_398(iParam1, iParam3, iVar8, 0);
								}
								else
								{
									iVar0 = func_398(iParam1, iParam3, iVar8, 1);
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
								iVar9 = func_409(uParam0, 11);
								iVar0 = func_398(iParam1, -99, iVar9, 0);
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

int func_397(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)
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

int func_398(int iParam0, int iParam1, int iParam2, int iParam3)
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
				iParam2 = func_399(iParam0, 11, 9, 24);
			}
			else
			{
				iParam2 = func_399(iParam0, 11, 25, 40);
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

int func_399(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam2;
	while (iVar0 <= (iParam3 - 1))
	{
		iVar1 = iVar0;
		if (func_391(iParam0, iParam1, iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -99;
}

int func_400(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_409(uParam0, iParam1);
	if (iVar0 >= iParam2 && iVar0 <= iParam3)
	{
		return 1;
	}
	return 0;
}

int func_401(int iParam0, int iParam1, int iParam2)
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

void func_402(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam2 == -1)
	{
		unk_0x7EDC239EB46006D5(uParam0, iParam1);
		if (iParam1 == 0)
		{
			unk_0x7B28A83A0D3DD0F9(uParam0, 34, 0);
			unk_0x7B28A83A0D3DD0F9(iParam0, 36, 0);
		}
	}
	else
	{
		unk_0xC8749D706BBF16E1(iParam0, iParam1, iParam2, iParam3, unk_0x02BFF15CAA701972());
		if (iParam1 == 0)
		{
			iVar0 = func_5(iParam0, iParam2, iParam3, iParam1);
			if (func_403(unk_0x6471F4759775FCA4(iParam0), 14, iVar0, unk_0x6F6F7115068877E4(iParam0, 0, iParam2, iParam3)))
			{
				unk_0x7B28A83A0D3DD0F9(iParam0, 34, 1);
				unk_0x7B28A83A0D3DD0F9(iParam0, 36, 1);
			}
			else
			{
				unk_0x7B28A83A0D3DD0F9(iParam0, 34, 0);
				unk_0x7B28A83A0D3DD0F9(iParam0, 36, 0);
			}
		}
	}
}

int func_403(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam3 == -1)
					{
						iParam3 = func_404(iParam0, iParam2, 14, 3);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && unk_0x01758128AAB0BA8F(iParam3, joaat("HELMET"), 1)))
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
						iParam3 = func_404(iParam0, iParam2, 14, 4);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && unk_0x01758128AAB0BA8F(iParam3, joaat("HELMET"), 1)))
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_404(int iParam0, int iParam1, int iParam2, int iParam3)
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
		unk_0x71794FDA9361403E(&Var0);
		iVar1 = (iParam1 - func_10(iParam0));
		if (iVar1 < 0)
		{
			return -1;
		}
		iVar2 = unk_0x44C4C2E7417F5E29(iParam3, 8, -1, 1, -1, -1);
		if (iVar2 <= iVar1)
		{
			return -1;
		}
		unk_0x9404A07A08FA1D0F(iVar1, &Var0);
		return Var0.f_1;
	}
	else
	{
		unk_0xFE9B2B065B8931FE(&Var3);
		iVar4 = (iParam1 - func_8(iParam0, func_9(iParam2)));
		if (iVar4 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_77181.f_26[iParam2] && iParam1 == Global_77181[iParam2]) && Global_77181.f_13[iParam2] != 0)
		{
			return Global_77181.f_13[iParam2];
		}
		iVar5 = unk_0x44C4C2E7417F5E29(iParam3, 8, -1, 0, -1, func_9(iParam2));
		if (iVar5 <= iVar4)
		{
			return -1;
		}
		unk_0xDF9AB3C346705246(iVar4, &Var3);
		Global_77181.f_13[iParam2] = Var3.f_1;
		Global_77181[iParam2] = iParam1;
		Global_77181.f_26[iParam2] = iParam0;
		return Var3.f_1;
	}
	return -1;
}

int func_405(int iParam0, int iParam1, int iParam2, int iParam3)
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
							iParam3 = func_404(iParam0, iParam2, 14, 3);
						}
						return (unk_0x01758128AAB0BA8F(iParam3, joaat("HAT"), 1) || unk_0x01758128AAB0BA8F(func_404(iParam0, iParam2, 14, 3), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_404(iParam0, iParam2, 1, 3);
						}
						return (unk_0x01758128AAB0BA8F(iParam3, joaat("HAT"), 0) || unk_0x01758128AAB0BA8F(func_404(iParam0, iParam2, 1, 3), -1842686353, 0));
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
							iParam3 = func_404(iParam0, iParam2, 14, 4);
						}
						return (unk_0x01758128AAB0BA8F(iParam3, joaat("HAT"), 1) || unk_0x01758128AAB0BA8F(func_404(iParam0, iParam2, 14, 4), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_404(iParam0, iParam2, 1, 4);
						}
						return (unk_0x01758128AAB0BA8F(iParam3, joaat("HAT"), 0) || unk_0x01758128AAB0BA8F(func_404(iParam0, iParam2, 1, 4), -1842686353, 0));
					}
					break;
			}
			break;
	}
	return 0;
}

int func_406(int iParam0, int iParam1, int iParam2, int iParam3)
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
						iParam3 = func_404(iParam0, iParam2, 1, 3);
					}
					if (unk_0x01758128AAB0BA8F(iParam3, joaat("HAT"), 0) || unk_0x01758128AAB0BA8F(iParam3, joaat("HAIR_SHRINK"), 0))
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
						iParam3 = func_404(iParam0, iParam2, 1, 4);
					}
					if (unk_0x01758128AAB0BA8F(iParam3, joaat("HAT"), 0) || unk_0x01758128AAB0BA8F(iParam3, joaat("HAIR_SHRINK"), 0))
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

int func_407(int iParam0, int iParam1, int iParam2, int iParam3)
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
						iParam3 = func_404(iParam0, iParam2, 14, 3);
					}
					return unk_0x01758128AAB0BA8F(iParam3, joaat("GLASSES"), 1);
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
						iParam3 = func_404(iParam0, iParam2, 14, 4);
					}
					return unk_0x01758128AAB0BA8F(iParam3, joaat("GLASSES"), 1);
				}
			}
			break;
	}
	return 0;
}

int func_408(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xECEC7528A52B4EE8(uParam0))
	{
		return -99;
	}
	iVar0 = unk_0x228A4ED518554B3F(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return func_11(iParam1);
	}
	iVar1 = unk_0x64F7E3FF8F40315D(iParam0, iParam1);
	return func_5(iParam0, iVar0, iVar1, iParam1);
}

int func_409(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || unk_0xECEC7528A52B4EE8(uParam0))
	{
		return -99;
	}
	iVar0 = func_9(iParam1);
	iVar1 = unk_0x094C1D2DFE050D6E(iParam0, iVar0);
	iVar2 = unk_0x288277F22D527487(iParam0, iVar0);
	return func_85(iParam0, iVar1, iVar2, iParam1);
}

void func_410(int iParam0)
{
	if (unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 1) && !unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 6))
	{
		func_24(iParam0, Global_77059[1 /*14*/].f_5, Global_77059[1 /*14*/].f_2, 2, Global_77059[1 /*14*/].f_1, 1, 0);
	}
	if (unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 1) && unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 6))
	{
		if (iParam0 == 12)
		{
			func_411(Global_2621444, 2, 1, 1, -1);
		}
		else if (iParam0 == 13)
		{
		}
		else if (iParam0 == 14)
		{
			func_411(Global_2621444, 2, 1, 1, -1);
		}
		else
		{
			func_411(Global_2621444, 2, 1, 1, -1);
		}
	}
}

void func_411(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_77056;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_26(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_20(iVar2, iVar0, 0);
		unk_0x191DDA30577F440A(&iVar3, iVar1);
		func_291(iVar2, iVar3, iVar0, 1, 0);
	}
}

int func_412(int iParam0)
{
	if (!unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (!unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 1))
		{
			return 0;
		}
		if (!unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_413()
{
	if (unk_0xA300BD5F71A8C704())
	{
		return 0;
	}
	if (unk_0x86AF801D34E482FF(0, 18) || unk_0x86AF801D34E482FF(2, 18))
	{
		return 1;
	}
	return 0;
}

int func_414(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, float fParam5, int iParam6, bool bParam7, int iParam8)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	
	fVar0 = -1f;
	switch (uParam4->f_3)
	{
		case 0:
			*uParam4 = func_444();
			iVar5 = func_444();
			func_443(&iVar5, iParam0);
			func_442(&iVar5, iParam1);
			func_441(&iVar5, 0);
			if (func_439(*uParam4, iVar5))
			{
				func_434(&iVar5, 0, 0, 0, 1, 0, 0);
			}
			func_431(*uParam4, iVar5, &iVar1, &iVar2, &iVar3, &uVar6, &uVar7, &uVar8);
			uParam4->f_11 = ((iVar1 + iVar2 * 60) + (iVar3 + iParam6) * 3600);
			func_424((to_float(uParam4->f_11) / 3600f));
			if (bParam7)
			{
				unk_0x8FC9EEB5362BDFA8(0.6f);
				unk_0x57C1B8A4131913BA(0);
				unk_0xBCB30BE1CC07FBB0(0);
			}
			func_423();
			uParam4->f_10 = unk_0x5AD02BBC63E31E46();
			unk_0x9B0169E27978C1A2(uParam4->f_10, "TIME_LAPSE_MASTER", 0, 1);
			unk_0xB84B43B766630B5C("TOD_SHIFT_SCENE");
			func_422();
			uParam4->f_3++;
			break;
		
		case 1:
		case 2:
			if ((unk_0x0E8572B08CEB6A11(uParam4->f_4) && unk_0x257CAD90873BF327(uParam4->f_4)) || !(fParam5 >= 0.99f || fParam5 == -1f))
			{
				if (unk_0x0E8572B08CEB6A11(uParam4->f_4) && unk_0x257CAD90873BF327(uParam4->f_4))
				{
					fVar0 = unk_0xF9396352432E6C10(uParam4->f_4);
				}
				else if (!(fParam5 >= 0.99f || fParam5 == -1f))
				{
					fVar0 = fParam5;
				}
				else
				{
					fVar0 = -1f;
				}
				if (fVar0 >= 0.5f)
				{
					if (uParam4->f_3 == 1)
					{
						if (unk_0x15173FB88ABC94F9(sParam2) != 0)
						{
							unk_0x3FD146795EFB335A(sParam2, iParam8);
						}
						if (unk_0x15173FB88ABC94F9(sParam3) != 0)
						{
							unk_0x642711D920F70943();
							unk_0xD2179AB45928B7F4(sParam3, 0);
						}
						uParam4->f_3 = 2;
					}
				}
			}
			if (fVar0 >= 0.99f || fVar0 == -1f)
			{
				iVar5 = *uParam4;
				func_434(&iVar5, uParam4->f_11, 0, 0, 0, 0, 0);
				unk_0x29D9E3B7EDBBA6FD(func_421(iVar5), func_420(iVar5), func_419(iVar5));
				if (bParam7)
				{
					unk_0xDFEA7BB6BBCCEC80();
				}
				unk_0x791B4C3811D53DFA(uParam4->f_10);
				unk_0x315DA2F7337A8638("TIME_LAPSE");
				if (bParam7)
				{
					unk_0xBCB30BE1CC07FBB0(1);
					unk_0x57C1B8A4131913BA(1);
				}
				return 1;
			}
			fVar11 = fVar0;
			fVar9 = 0.1f;
			fVar10 = 0.9f;
			fVar12 = func_241(((fVar11 - fVar9) / (fVar10 - fVar9)), 0f, 1f);
			iVar4 = round((IntToFloat(uParam4->f_11) * fVar12));
			iVar5 = *uParam4;
			func_434(&iVar5, iVar4, 0, 0, 0, 0, 0);
			unk_0x29D9E3B7EDBBA6FD(func_421(iVar5), func_420(iVar5), func_419(iVar5));
			if (func_418(iVar5) != unk_0x9E6858A319A1F6F2())
			{
				unk_0x1012C4215A037B41(func_418(iVar5), func_417(iVar5), func_415(iVar5));
			}
			func_183();
			unk_0x68B0D6E564002023(6);
			break;
	}
	return 0;
}

int func_415(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_416(unk_0x234B68AC2E35ED5A(iParam0, 31), -1, 1)) + 2011;
}

int func_416(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_417(int iParam0)
{
	return iParam0 & 15;
}

int func_418(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_419(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_420(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_421(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

void func_422()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		unk_0xAE77D1668DA754A8(Global_112293.f_14139[iVar0 /*104*/].f_16);
		iVar0++;
	}
}

int func_423()
{
	int iVar0;
	
	if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
	{
		return 0;
	}
	if (!unk_0x530FB711AE9CF518(unk_0x7D2B9E6A64637269()))
	{
		return 0;
	}
	iVar0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
	if (!unk_0xE50EB54E0F21BED0(iVar0, 0))
	{
		return 0;
	}
	unk_0x3D72B9992AD4B7C5(iVar0, "OFF");
	return 1;
}

void func_424(float fParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_430(&(Global_112293.f_18101.f_175[iVar0 /*19*/].f_5)))
		{
			func_425(&(Global_112293.f_18101.f_175[iVar0 /*19*/].f_5), (fParam0 * 60f));
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_430(&(Global_112293.f_18101.f_362[iVar1 /*3*/])))
		{
			func_425(&(Global_112293.f_18101.f_362[iVar1 /*3*/]), (fParam0 * 60f));
		}
		iVar1++;
	}
	unk_0x5A5F8D595F57FCD3();
}

void func_425(var uParam0, float fParam1)
{
	if (func_430(uParam0))
	{
		func_426(uParam0, (func_428(uParam0) + fParam1));
	}
}

void func_426(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_427(unk_0x234B68AC2E35ED5A(*uParam0, 4)) - fParam1);
	unk_0x191DDA30577F440A(uParam0, 1);
	unk_0xC664C0067EEAB8D1(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_427(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = to_float(unk_0xDFB7BFA6482FEE1E());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x02BFF15CAA701972())
	{
		iVar2 = unk_0x551F46B3C7DFB654();
		fVar3 = to_float(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (to_float(unk_0xDFB7BFA6482FEE1E()) / 1000f);
}

float func_428(var uParam0)
{
	if (func_430(uParam0))
	{
		if (func_429(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_427(unk_0x234B68AC2E35ED5A(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_429(var uParam0)
{
	return unk_0x234B68AC2E35ED5A(*uParam0, 2);
}

bool func_430(var uParam0)
{
	return unk_0x234B68AC2E35ED5A(*uParam0, 1);
}

void func_431(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_439(iParam0, iParam1))
	{
		iVar0 = func_417(iParam1);
		iVar1 = func_415(iParam0);
		iVar2 = (func_415(iParam0) - func_415(iParam1));
		iVar3 = (func_417(iParam0) - func_417(iParam1));
		iVar4 = (func_418(iParam0) - func_418(iParam1));
		iVar5 = (func_421(iParam0) - func_421(iParam1));
		iVar6 = (func_420(iParam0) - func_420(iParam1));
		iVar7 = (func_419(iParam0) - func_419(iParam1));
	}
	else
	{
		iVar0 = func_417(iParam0);
		iVar1 = func_415(iParam1);
		iVar2 = (func_415(iParam1) - func_415(iParam0));
		iVar3 = (func_417(iParam1) - func_417(iParam0));
		iVar4 = (func_418(iParam1) - func_418(iParam0));
		iVar5 = (func_421(iParam1) - func_421(iParam0));
		iVar6 = (func_420(iParam1) - func_420(iParam0));
		iVar7 = (func_419(iParam1) - func_419(iParam0));
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
		iVar4 = (iVar4 + func_433(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_432(to_float(iVar0 + 1), 0f, 12f));
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

float func_432(float fParam0, float fParam1, float fParam2)
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

int func_433(int iParam0, int iParam1)
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

void func_434(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_415(*iParam0);
	iVar1 = func_417(*iParam0);
	iVar2 = func_418(*iParam0);
	iVar3 = func_421(*iParam0);
	iVar4 = func_420(*iParam0);
	iVar5 = func_419(*iParam0);
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
	iVar6 = func_433(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_433(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_435(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_435(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_441(uParam0, iParam1);
	func_442(uParam0, iParam2);
	func_443(uParam0, iParam3);
	func_438(uParam0, iParam5);
	func_437(uParam0, iParam4);
	func_436(uParam0, iParam6);
}

void func_436(var uParam0, int iParam1)
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

void func_437(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_417(*uParam0);
	iVar1 = func_415(*uParam0);
	if (iParam1 < 1 || iParam1 > func_433(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_438(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

int func_439(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_440(iParam1) || !func_440(iParam0))
	{
		return 1;
	}
	iVar0 = func_415(iParam0);
	iVar1 = func_415(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_417(iParam0);
	iVar1 = func_417(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_418(iParam0);
	iVar1 = func_418(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_421(iParam0);
	iVar1 = func_421(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_420(iParam0);
	iVar1 = func_420(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_419(iParam0);
	iVar1 = func_419(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_440(int iParam0)
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
	iVar0 = func_419(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_420(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_421(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_415(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_417(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_418(iParam0);
	if (iVar5 < 1 || iVar5 > func_433(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_441(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

void func_442(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_443(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

var func_444()
{
	var uVar0;
	
	func_441(&uVar0, unk_0x1947D86A2BB06F8D());
	func_442(&uVar0, unk_0x942C8DFFBBCB3EB4());
	func_443(&uVar0, unk_0xCA86FAB7FADC8353());
	func_437(&uVar0, unk_0x9E6858A319A1F6F2());
	func_438(&uVar0, unk_0xA91C851005050418());
	func_436(&uVar0, unk_0x77D50D8E8FF785AC());
	return uVar0;
}

void func_445(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	if (iParam4 == 1)
	{
		unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), unk_0xDF02DA324F934755(unk_0x1146A9AE09CE2B14()), 64);
	}
	if (!unk_0x2CA4B93E310C1860())
	{
		unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), !bParam1, 0);
	}
	if (bParam7)
	{
		if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
		{
			unk_0x603ABA046B239722(unk_0x7D2B9E6A64637269(), 1);
		}
	}
	if (!bParam1 && iParam6)
	{
		unk_0xE5AC37B329B31F82(0, 0, 3, 0);
	}
	else
	{
		unk_0x09F9466B03D29D2D(bParam1, iParam2, iParam3, 1, 0, 0);
	}
	if (bParam1)
	{
		unk_0x66AE54CE92457FEE(1);
	}
	else
	{
		if (unk_0x0E8572B08CEB6A11(uParam0->f_4))
		{
			if (unk_0x2671671BBCC6AD9F(uParam0->f_4))
			{
				unk_0x6FA8221C9D2ECB46(uParam0->f_4, 0);
			}
			unk_0xFE1DEC9C5734D0C0(uParam0->f_4, 1);
		}
		if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
		{
			unk_0x4603196EEEA2355C(unk_0x7D2B9E6A64637269(), 1, 0);
		}
		uVar0 = unk_0x0BF0F8F3AD0993F6();
		if (unk_0x419E13582192CFEA(uVar0))
		{
			unk_0x4603196EEEA2355C(iVar0, 1, 0);
		}
		unk_0x315DA2F7337A8638("TIME_LAPSE");
		if (unk_0xB30CD10E2CD1B67D("TOD_SHIFT_SCENE"))
		{
			unk_0x791B4C3811D53DFA(uParam0->f_10);
			unk_0x315DA2F7337A8638("TIME_LAPSE");
			unk_0xC0BBE340BE2AA02D("TOD_SHIFT_SCENE");
		}
	}
	func_191(bParam1, 1, 0, 0, 0, 0, 0);
	func_422();
	if (!bParam1 && iParam5)
	{
		if (uParam0->f_5)
		{
			unk_0x29D9E3B7EDBBA6FD(uParam0->f_7, 0, 0);
		}
		else
		{
			unk_0x29D9E3B7EDBBA6FD(uParam0->f_8, 0, 0);
		}
	}
	if (!bParam1)
	{
		if (unk_0x8B6A925F148E0E94())
		{
			unk_0x6E1E3A5B1F9AB95B(250);
		}
	}
	if (!bParam1)
	{
		if (Global_112293.f_32747.f_4801 != -15)
		{
			Global_112293.f_32747.f_4801 = func_444();
		}
	}
}

void func_446(int iParam0)
{
	if (!unk_0x8B6A925F148E0E94())
	{
		unk_0x8BA9BCDD56AA7115(iParam0);
		while (!unk_0x8B6A925F148E0E94())
		{
			wait(0);
		}
	}
}

int func_447(int iParam0)
{
	if (unk_0xE0A6F16F546C8274())
	{
		if ((unk_0xDFB7BFA6482FEE1E() - Global_28) > iParam0)
		{
			Global_27 = unk_0xDFB7BFA6482FEE1E();
		}
		Global_28 = unk_0xDFB7BFA6482FEE1E();
		if ((unk_0xDFB7BFA6482FEE1E() - Global_27) > iParam0)
		{
			if (func_413())
			{
				Global_27 = unk_0xDFB7BFA6482FEE1E();
				return 1;
			}
		}
	}
	return 0;
}

void func_448(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	Global_76066[iParam0] = 0;
	Global_76066.f_69[iParam0] = 0;
}

void func_449(int iParam0, struct<3> Param1, float fParam2, int iParam3, bool bParam4)
{
	struct<60> Var0;
	
	if (unk_0x419E13582192CFEA(iParam0) && unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		if (iParam3 != 24 && iParam3 != 25)
		{
			return;
		}
		if (iParam3 == 24)
		{
			if (unk_0x419E13582192CFEA(Global_76066.f_484[25]) && unk_0xBFCE58B2B3249999(Global_76066.f_484[25], 0))
			{
				if (Global_76066.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam4)
		{
			if ((unk_0x9AAA60D60CB4E5C7(iParam0) || unk_0x6471F4759775FCA4(iParam0) == joaat("bus")) || unk_0x6471F4759775FCA4(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_459(iParam3);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_109(iParam0, &Var0);
		if (func_106(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { unk_0xD6E677FAD7521410(iParam0, 1) };
			fParam2 = unk_0xA8D713A937F31250(iParam0);
		}
		if (iParam3 == 24)
		{
			if (unk_0x15173FB88ABC94F9(unk_0x471C98FD94C0A5FD()) != joaat("vehicle_gen_controller"))
			{
				Global_77054 = unk_0x15173FB88ABC94F9(unk_0x471C98FD94C0A5FD());
			}
		}
		func_453(iParam3, &Var0, Param1, fParam2, func_460(iParam0));
		func_450(iParam3, iParam0, 0);
	}
}

void func_450(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_452(&(Global_76066.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0x234B68AC2E35ED5A(Global_76066.f_555[0 /*21*/].f_9, 12) && !unk_0x234B68AC2E35ED5A(Global_76066.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_76066.f_555[0 /*21*/].f_4 != unk_0x6471F4759775FCA4(iParam1))
		{
			return;
		}
	}
	if (Global_76973 != -1 && Global_76973 != iParam0)
	{
		return;
	}
	if (unk_0x419E13582192CFEA(iParam1))
	{
		if (unk_0xBFCE58B2B3249999(iParam1, 0))
		{
			if (!unk_0xEE1D92A39CF8E1E6(iParam1))
			{
				unk_0x4985CD0720AFD468(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_112293.f_32747.f_4801 = func_444();
			}
			if (iParam1 != Global_76066.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_451(iParam0);
					if ((unk_0x419E13582192CFEA(iVar0) && unk_0xBFCE58B2B3249999(iVar0, 0)) && iParam1 != iVar0)
					{
						func_108(iVar0, 145);
					}
				}
				Global_76972 = iParam1;
				Global_76973 = iParam0;
				Global_76974 = iParam2;
			}
		}
	}
}

int func_451(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_76066.f_139[iParam0];
}

int func_452(var uParam0, int iParam1)
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
			uParam0->f_4 = func_376(0, 1);
			uParam0->f_12 = 0;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 20);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_376(0, 1);
			uParam0->f_12 = 0;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 20);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_376(1, 1);
			uParam0->f_12 = 1;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 20);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_376(1, 2);
			uParam0->f_12 = 1;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 19);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_376(1, 1);
			uParam0->f_12 = 1;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 20);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_376(1, 2);
			uParam0->f_12 = 1;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 19);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_376(2, 1);
			uParam0->f_12 = 2;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 20);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_376(2, 1);
			uParam0->f_12 = 2;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 20);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_376(2, 1);
			uParam0->f_12 = 2;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 20);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0x191DDA30577F440A(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 0);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 14);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 0);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 14);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 0);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 14);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 0);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 14);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 22);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 0);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 14);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 22);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 0);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 14);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 22);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0x191DDA30577F440A(&(uParam0->f_9), 0);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 14);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0x191DDA30577F440A(&(uParam0->f_9), 0);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 14);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 0);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 14);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 23);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 0);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 14);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 24);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 28);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 0);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 14);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 24);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 28);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 0);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 14);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 24);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 28);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 29);
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
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 27);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 24);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 29);
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
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 27);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 24);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 29);
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
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 27);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 24);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 11);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 13);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 11);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 13);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0x191DDA30577F440A(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 9);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 9);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 23);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0x191DDA30577F440A(&(uParam0->f_9), 23);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0x191DDA30577F440A(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0x191DDA30577F440A(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0x191DDA30577F440A(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0x191DDA30577F440A(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0x191DDA30577F440A(&(uParam0->f_9), 23);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 8);
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
			unk_0x191DDA30577F440A(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 2);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 30);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 2);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 22);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 6);
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
			if (func_124())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 13);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 2);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 1);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 23);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_124())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 13);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 2);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 1);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 23);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0x191DDA30577F440A(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 0);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 23);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 6);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x191DDA30577F440A(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x191DDA30577F440A(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0x191DDA30577F440A(&(uParam0->f_9), 30);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 23);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0x191DDA30577F440A(&(uParam0->f_9), 30);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 23);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0x234B68AC2E35ED5A(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_112293.f_32747.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_106(Global_112293.f_32747.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_112293.f_32747.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_112293.f_32747.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_112293.f_32747.f_1934[uParam0->f_14];
		}
	}
	if (unk_0x234B68AC2E35ED5A(uParam0->f_9, 19))
	{
		if (!func_106(Global_112293.f_2361.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_112293.f_2361.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_112293.f_2361.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0x234B68AC2E35ED5A(uParam0->f_9, 20))
	{
		if (!func_106(Global_112293.f_2361.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_112293.f_2361.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_112293.f_2361.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

void func_453(int iParam0, var uParam1, struct<3> Param2, var uParam3, int iParam4)
{
	if (func_452(&(Global_76066.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x234B68AC2E35ED5A(Global_76066.f_555[0 /*21*/].f_9, 10))
		{
			func_458(iParam0);
			func_457(uParam1, &(Global_112293.f_32747.f_69[Global_76066.f_555[0 /*21*/].f_14 /*78*/]));
			if (unk_0x234B68AC2E35ED5A(Global_76066.f_555[0 /*21*/].f_9, 11))
			{
				Global_112293.f_32747.f_1864[Global_76066.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_112293.f_32747.f_1934[Global_76066.f_555[0 /*21*/].f_14] = uParam3;
			}
			else
			{
				Global_112293.f_32747.f_1864[Global_76066.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_112293.f_32747.f_1934[Global_76066.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_112293.f_32747.f_1958[Global_76066.f_555[0 /*21*/].f_14] = iParam4 + 1;
			func_454(iParam0, 1);
		}
	}
}

void func_454(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_456(iParam0, 0))
		{
			func_455(iParam0, 1, 0);
			func_455(iParam0, 2, 0);
			func_455(iParam0, 3, 0);
			func_455(iParam0, 4, 0);
			func_455(iParam0, 0, 1);
			Global_76066[iParam0] = 1;
		}
	}
	else
	{
		func_455(iParam0, 0, 0);
	}
}

void func_455(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x191DDA30577F440A(&(Global_112293.f_32747[iParam0]), iParam1);
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&(Global_112293.f_32747[iParam0]), iParam1);
	}
}

bool func_456(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_112293.f_32747[iParam0], iParam1);
}

void func_457(var uParam0, var uParam1)
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

void func_458(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_452(&(Global_76066.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x419E13582192CFEA(Global_76066.f_139[iParam0]))
		{
			unk_0x4985CD0720AFD468(Global_76066.f_139[iParam0], 1, 1);
			unk_0x795957CD3A0042C8(&(Global_76066.f_139[iParam0]));
			Global_76066.f_139[iParam0] = 0;
		}
		if (unk_0x234B68AC2E35ED5A(Global_76066.f_555[0 /*21*/].f_9, 13))
		{
			func_454(iParam0, 0);
		}
	}
}

void func_459(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_458(iParam0);
	func_454(iParam0, 0);
}

int func_460(int iParam0)
{
	int iVar0;
	
	if (!unk_0x419E13582192CFEA(iParam0))
	{
		return 145;
	}
	if (!unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x419E13582192CFEA(Global_96701[iVar0]))
		{
			if (Global_96701[iVar0] == iParam0)
			{
				return Global_96711[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_461(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	
	iVar0 = unk_0x6471F4759775FCA4(iParam0);
	unk_0xC78A38E5FBC66080(iVar0, &Var1, &Var2);
	fVar3 = (-Var1.f_2 + Var2.f_2);
	if (fVar3 < 2.6f)
	{
		return 1;
	}
	return 0;
}

int func_462(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0x419E13582192CFEA(iParam0) || !unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_463(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || unk_0x234B68AC2E35ED5A(Global_112293.f_7227[iVar2], 0))
		{
			if (unk_0xC5C459033A48B1E4(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_463(int iParam0, int iParam1, char* sParam2, var uParam3)
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

void func_464(struct<3> Param0, float fParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_452(&(Global_76066.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0x0BABEFEA577FCFA4(Param0, Global_76066.f_555[0 /*21*/], iParam2) <= fParam1)
			{
				func_465(iVar0);
			}
		}
		iVar0++;
	}
}

void func_465(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_452(&(Global_76066.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x419E13582192CFEA(Global_76066.f_139[iParam0]))
		{
			bVar0 = true;
			if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0xBFCE58B2B3249999(Global_76066.f_139[iParam0], 0))
				{
					if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), Global_76066.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0x4985CD0720AFD468(Global_76066.f_139[iParam0], 1, 1);
				unk_0x5420D0D520CF44D0(&(Global_76066.f_139[iParam0]));
			}
		}
		Global_76066[iParam0] = 1;
		if (unk_0x234B68AC2E35ED5A(Global_76066.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_456(iParam0, 0)) && Global_76975.f_66 == 0) && Global_112293.f_32747.f_1958[Global_76066.f_555[0 /*21*/].f_14] != 0) && Global_112293.f_32747.f_1958[Global_76066.f_555[0 /*21*/].f_14] > 3) && (!func_466(0, Global_76066.f_555[0 /*21*/].f_12) || !func_466(1, Global_76066.f_555[0 /*21*/].f_12)))
			{
				func_457(&(Global_112293.f_32747.f_69[Global_76066.f_555[0 /*21*/].f_14 /*78*/]), &Global_76975);
			}
			func_454(iParam0, 0);
		}
	}
}