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
	struct<110> Local_28[4];
	struct<94> Local_29 = { 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1 } ;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = -1;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = -1;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	struct<8> Local_46[5];
	int iLocal_47[1] = { 0 };
	struct<4> Local_48 = { 0, 0, 0, 0 } ;
	char cLocal_49[64] = "";
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	vector3 vLocal_58 = { 0f, 0f, 0f };
	vector3 vLocal_59[24] = "";
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	bool bLocal_65 = 0;
	bool bLocal_66 = 0;
	int iLocal_67 = 0;
	bool bLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 30;
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
	var uLocal_221 = 10;
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
	var uLocal_272 = 10;
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
	var uLocal_343 = 20;
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
	var uLocal_444 = 20;
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
	var uLocal_545 = 30;
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
	var uLocal_653 = 0;
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
	var uLocal_666 = 0;
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
	var uLocal_712 = 0;
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
	var uLocal_726 = 5;
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
	var uLocal_757 = 7;
	var uLocal_758 = 0;
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
	var uLocal_783 = 0;
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
	var uLocal_807 = 5;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
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
	var uLocal_833 = 3;
	var uLocal_834 = 0;
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
	var uLocal_849 = 16;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
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
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 10;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 5;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 5;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	int iLocal_1055 = 0;
	var uLocal_1056 = 3;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 1092616192;
	var uLocal_1063 = 1101004800;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 3;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	struct<8> Local_1080[5];
	struct<32> Local_1081[20];
	char cLocal_1082[32] = "";
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 16;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	bool bLocal_1252 = 0;
	int iLocal_1253 = 0;
	int iLocal_1254 = 0;
	int iLocal_1255 = 0;
	int iLocal_1256 = 0;
	int iLocal_1257 = 0;
	int iLocal_1258 = 0;
	char cLocal_1259[16] = "";
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	char cLocal_1262[16] = "";
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	int iLocal_1265 = 0;
	float fLocal_1266 = 0f;
	int iLocal_1267 = 0;
	int iLocal_1268 = 0;
	int iLocal_1269 = 0;
	int iLocal_1270 = 0;
	int iLocal_1271 = 0;
	int iLocal_1272 = 0;
	char cLocal_1273[16] = "";
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	int iLocal_1276 = 0;
	int iLocal_1277 = 0;
	bool bLocal_1278 = 0;
	int iLocal_1279 = 0;
	int iLocal_1280 = 0;
	int iLocal_1281 = 0;
	int iLocal_1282 = 0;
	struct<2> Local_1283 = { 0, 0 } ;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	struct<2> Local_1286 = { 0, 0 } ;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	int iLocal_1289 = 0;
	bool bLocal_1290 = 0;
	int iLocal_1291 = 0;
	int iLocal_1292 = 0;
	int iLocal_1293 = 0;
	bool bLocal_1294 = 0;
	int iLocal_1295 = 0;
	int iLocal_1296 = 0;
	int iLocal_1297 = 0;
	int iLocal_1298 = 0;
	int iLocal_1299 = 0;
	int iLocal_1300 = 0;
	int iLocal_1301 = 0;
	int iLocal_1302 = 0;
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
	StringCopy(&Local_48, "JHP1ADS", 16);
	StringCopy(&cLocal_49, "JEWEL_STORE_HEIST_SETUP_BUGSTAR_ALARMS", 64);
	vLocal_58 = { 154.9478f, -3092.523f, 4.911984f };
	StringCopy(&cLocal_59, "jhp1a_sec_arrive", 24);
	iLocal_63 = 0;
	iLocal_69 = 6;
	iLocal_1253 = -1;
	iLocal_1257 = -1;
	iLocal_1258 = -1;
	StringCopy(&cLocal_1259, "", 16);
	StringCopy(&cLocal_1262, "", 16);
	fLocal_1266 = 1E+08f;
	iLocal_1269 = 1;
	iLocal_1272 = -1;
	StringCopy(&cLocal_1273, "", 16);
	iLocal_1276 = -1;
	iLocal_1277 = 1;
	iLocal_1281 = -1;
	iLocal_1282 = -1;
	StringCopy(&Local_1283, "", 16);
	StringCopy(&Local_1286, "", 16);
	iLocal_1289 = 1;
	iLocal_1291 = 1;
	iLocal_1295 = -1;
	iLocal_1297 = -1;
	iLocal_1298 = -1;
	if (unk_0x9EC5BDC006623C42(3))
	{
		func_283(6);
	}
	unk_0xC48A4BABDFAAB2B9(1);
	func_276();
	func_235();
	while (true)
	{
		unk_0x65F534DDBF48606F("M_JewelStoreJobPrep1A", 0);
		if (bLocal_68)
		{
			func_233();
		}
		func_230(&uLocal_70);
		func_181();
		if (!bLocal_66)
		{
			func_179();
			func_168();
			func_167(&Local_1080);
		}
		func_1();
		wait(0);
	}
}

void func_1()
{
	switch (iLocal_63)
	{
		case 0:
			if (func_25())
			{
				func_24(1);
			}
			break;
		
		case 1:
			func_2();
			break;
	}
}

void func_2()
{
	int iVar0;
	
	if ((iLocal_1298 != -1 && unk_0x765F6FEEFF39224F(Local_46[iLocal_1298 /*8*/])) && unk_0x91D5C8283D19AF49(Local_46[iLocal_1298 /*8*/], 0))
	{
		iVar0 = unk_0xE80842D7B53F8525(Local_46[iLocal_1298 /*8*/]);
		func_23(Local_46[iLocal_1298 /*8*/], -1);
	}
	if (iVar0 >= 750 || iVar0 <= 0)
	{
		Global_90137 = 1000;
	}
	else
	{
		Global_90137 = iVar0;
	}
	if (!func_22(&(Local_1080[3 /*8*/])))
	{
		func_21(699);
	}
	func_8(0);
	if (func_7(88))
	{
		func_3(0, 1);
	}
	else
	{
		func_3(0, 0);
	}
	unk_0x5894DC159447E10A();
}

void func_3(bool bParam0, int iParam1)
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
		if ((func_6(0) && Global_71836.f_1 == 1) && func_5(Global_71836))
		{
		}
		else
		{
			Global_56494 = 1;
		}
	}
	if (Global_106565.f_9079 || func_6(0))
	{
		iVar0 = func_4();
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

int func_4()
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

int func_5(int iParam0)
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

bool func_6(bool bParam0)
{
	if (!bParam0 && unk_0x1BCDA92AD0A7835B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x0E4018692D92041D(Global_71838, 0);
}

int func_7(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_106565.f_9079.f_330[iParam0 /*6*/];
}

void func_8(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	unk_0xD362430CD61A9B08();
	unk_0xEDF90B96BED57BCE(1);
	if (bParam0)
	{
		unk_0x117A9E054B0F10FB(unk_0x95B959F18401C09A());
		unk_0x65BA35D6D61F1574("JHP1A_FAIL");
	}
	else
	{
		unk_0x4B06B5746CBEC99F(1f);
		unk_0xDFF996ED119D35B1(unk_0x95B959F18401C09A(), 1f);
	}
	unk_0xD875615F72CD34A6(5);
	unk_0xDF9905432E81DC6E(unk_0x95B959F18401C09A(), 1);
	unk_0x379324D4CAF6C2D1(1);
	func_18(&Local_1080);
	func_13(&iLocal_1055, 1, 0);
	bLocal_1252 = false;
	iLocal_1253 = -1;
	iLocal_1292 = 0;
	iLocal_1293 = 0;
	bLocal_1294 = false;
	iLocal_1295 = -1;
	iLocal_1297 = -1;
	iLocal_1298 = -1;
	iLocal_1299 = 0;
	iLocal_1300 = 0;
	iLocal_1296 = 0;
	if (bParam0)
	{
		func_11();
		unk_0x31826EF4A8BC8E9F(unk_0x33CD235DF1E6A94E());
		unk_0x117A9E054B0F10FB(unk_0x95B959F18401C09A());
		unk_0x9C47E5CDFB45F474(158.78f, -3100.44f, 6.0019f, 100f, 0);
		unk_0x88246B349FCC2454(158.78f, -3100.44f, 6.0019f, 100f, 0);
		unk_0xBAE549A63F38DAE8(158.78f, -3100.44f, 6.0019f, 100f, 0);
		unk_0xB7350047030F7672(158.78f, -3100.44f, 6.0019f, 100f, 0, 0, 0, 0, false, 0);
		unk_0x9FDF63945C690003(158.78f, -3100.44f, 6.0019f, 100f, 0);
		unk_0x2532E297CF3112F2(158.78f, -3100.44f, 6.0019f, 100f);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_47)
	{
		if (unk_0x765F6FEEFF39224F(iLocal_47[iVar0]))
		{
			if (bParam0)
			{
				unk_0xEC26F4BFC9942A0C(&(iLocal_47[iVar0]));
			}
			else
			{
				unk_0x26ABAE1D971CEACD(&(iLocal_47[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_28)
	{
		func_10(&(Local_28[iVar0 /*110*/]), bParam0);
		iVar0++;
	}
	func_10(&Local_29, bParam0);
	iVar0 = 0;
	while (iVar0 < Local_46)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (unk_0x765F6FEEFF39224F(Local_46[iVar0 /*8*/].f_2[iVar1]))
			{
				if (bParam0)
				{
					unk_0x4B8B69DAE5BAC592(&(Local_46[iVar0 /*8*/].f_2[iVar1]));
				}
				else
				{
					unk_0x1F45B4626AC4A4C0(&(Local_46[iVar0 /*8*/].f_2[iVar1]));
				}
			}
			iVar1++;
		}
		if (unk_0x765F6FEEFF39224F(Local_46[iVar0 /*8*/]))
		{
			if (bParam0)
			{
				unk_0x7AC8DF0B83EB4C6B(&(Local_46[iVar0 /*8*/]));
			}
			else
			{
				unk_0x65F544B458249682(&(Local_46[iVar0 /*8*/]));
			}
		}
		iVar0++;
	}
	if (unk_0x90D2ECC8A42DFF63(&cLocal_49))
	{
		unk_0x4CCF49FD38F157B1(&cLocal_49, bParam0);
	}
	if (iLocal_1302 != 0)
	{
		unk_0xF1CFA0046BB67893(iLocal_1302, 0);
	}
	func_9();
}

void func_9()
{
	Global_89567 = 0;
}

void func_10(int iParam0, bool bParam1)
{
	if (unk_0x765F6FEEFF39224F(*iParam0))
	{
		if (bParam1)
		{
			unk_0x4B8B69DAE5BAC592(iParam0);
		}
		else
		{
			unk_0x1F45B4626AC4A4C0(iParam0);
		}
	}
	iParam0->f_5 = 0;
	iParam0->f_6 = -1;
	iParam0->f_7 = -1;
	iParam0->f_39 = 0;
	iParam0->f_41 = 0;
	iParam0->f_93 = 1;
	iParam0->f_102 = 0;
	iParam0->f_47 = 0;
	iParam0->f_46 = 0;
	iParam0->f_48 = 0;
	iParam0->f_37 = -1;
	iParam0->f_103 = -1;
	iParam0->f_40 = 0;
	iParam0->f_92 = -1;
	iParam0->f_43 = { 0f, 0f, 0f };
	iParam0->f_88 = { 0f, 0f, 0f };
	iParam0->f_91 = 0;
	if (unk_0x765F6FEEFF39224F(iParam0->f_105))
	{
		if (unk_0x9F4718FD61B07058(iParam0->f_105))
		{
			unk_0x35F11A916FDFCF32(iParam0->f_105, 1, 1);
		}
		if (bParam1)
		{
			unk_0xEC26F4BFC9942A0C(&(iParam0->f_105));
		}
		else
		{
			unk_0x26ABAE1D971CEACD(&(iParam0->f_105));
		}
	}
	iParam0->f_106 = -1;
	iParam0->f_107 = 0;
	iParam0->f_109 = 0;
	iParam0->f_104 = 0;
}

void func_11()
{
	Global_14732 = 0;
	func_12();
}

void func_12()
{
	unk_0x3F4DBD0F910C454B();
	Global_16877 = 0;
	if (unk_0x12BF789190D82474())
	{
		unk_0xD92171BC6C48DB90(false);
		Global_15866 = 6;
	}
}

void func_13(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x0E4018692D92041D(iParam0->f_13, 30))
	{
		bParam1 = true;
	}
	func_17(iParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xE38E3CF1625A4145(iParam0->f_1[iVar0]))
		{
			unk_0x1ABDB383C83A336A(&(iParam0->f_1[iVar0]));
		}
		func_16(iVar0, iParam0);
		func_15(iVar0, iParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iVar0 != 8)
		{
			unk_0xCE689A8E8C42ED78(&(iParam0->f_13), iVar0);
			unk_0xCE689A8E8C42ED78(&(iParam0->f_14), iVar0);
		}
		iVar0++;
	}
	if (unk_0xE38E3CF1625A4145(*iParam0))
	{
		unk_0x1ABDB383C83A336A(iParam0);
	}
	iParam0->f_6 = 0;
	iParam0->f_12 = 0;
	iParam0->f_15 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0xBC2FC12AD0FBF72E(iParam0->f_17[iVar0]))
		{
			unk_0x990A34F9DA8E506D(iParam0->f_17[iVar0], 1);
			unk_0xCBDEE923F851F500(iParam0->f_17[iVar0], 1);
			if (bParam2)
			{
				unk_0x5FEE418CE11E6DDE(iParam0->f_17[iVar0], 32, true);
				unk_0x5FEE418CE11E6DDE(iParam0->f_17[iVar0], 305, false);
			}
			unk_0x5FEE418CE11E6DDE(iParam0->f_17[iVar0], 268, false);
			if (bParam1)
			{
				if (unk_0x731F434EAFE6E9FE(iParam0->f_17[iVar0], func_14()) && iParam0->f_17[iVar0] != unk_0x33CD235DF1E6A94E())
				{
					unk_0x5D94F4D6FE7DA516(iParam0->f_17[iVar0]);
				}
			}
			if (!unk_0x0E4018692D92041D(iParam0->f_13, 29))
			{
				unk_0x92A2FAFA76B7EC9B(iParam0->f_17[iVar0], false, -1, 0);
			}
			iParam0->f_17[iVar0] = 0;
		}
		iVar0++;
	}
	if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
	{
		unk_0x990A34F9DA8E506D(unk_0x33CD235DF1E6A94E(), 1);
		unk_0xCBDEE923F851F500(unk_0x33CD235DF1E6A94E(), 1);
	}
	if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
	{
		if (bParam2)
		{
			unk_0x5FEE418CE11E6DDE(unk_0x33CD235DF1E6A94E(), 32, true);
		}
	}
	iParam0->f_21 = 0;
}

int func_14()
{
	return unk_0x733DE09777D47CD6(unk_0x3EE1295CEFBEFED4());
}

void func_15(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xCE689A8E8C42ED78(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0xCE689A8E8C42ED78(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0xCE689A8E8C42ED78(&(uParam1->f_13), 19);
			break;
	}
}

void func_16(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xCE689A8E8C42ED78(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0xCE689A8E8C42ED78(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0xCE689A8E8C42ED78(&(uParam1->f_13), 16);
			break;
	}
}

void func_17(int iParam0)
{
	if (unk_0xE38E3CF1625A4145(iParam0->f_5))
	{
		unk_0x1ABDB383C83A336A(&(iParam0->f_5));
	}
}

void func_18(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_19(uParam0[iVar0 /*8*/]);
		iVar0++;
	}
}

void func_19(var uParam0)
{
	if (!func_20(uParam0))
	{
		*uParam0 = 0;
	}
}

int func_20(var uParam0)
{
	if (*uParam0 == 0)
	{
		return 1;
	}
	return 0;
}

void func_21(int iParam0)
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

int func_22(var uParam0)
{
	if (*uParam0 != 0 && (*uParam0 != 2 || uParam0->f_1 > 0))
	{
		return 1;
	}
	return 0;
}

void func_23(int iParam0, int iParam1)
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

void func_24(int iParam0)
{
	if (iParam0 == 2)
	{
	}
	else
	{
		iLocal_64 = 0;
		bLocal_65 = false;
		iLocal_63 = iParam0;
	}
}

int func_25()
{
	bool bVar0;
	
	if (!bLocal_65)
	{
		func_166(&uLocal_70, "SCRIPT\JWL_HA_RAID_STORE");
		func_165(&uLocal_70, joaat("s_m_m_security_01"));
		func_164(&(Local_1080[1 /*8*/]), 0, 0, 1);
		func_164(&(Local_1080[0 /*8*/]), 0, 0, 1);
		func_164(&(Local_1080[4 /*8*/]), 0, 0, 1);
		func_106(0f, 0f, 0f, 0f, 1, func_160());
		Global_90137 = 1000;
		unk_0x4B06B5746CBEC99F(0.1f);
		func_105("JHP1A_STEAL_BSV", 7500, 1);
		bLocal_65 = true;
	}
	if (bLocal_65)
	{
		switch (iLocal_64)
		{
			case 0:
				if (func_100(1) == 0)
				{
					func_13(&iLocal_1055, 1, 0);
					func_23(0, -1);
					func_99(0, -1);
				}
				else if ((func_98() && unk_0x765F6FEEFF39224F(Local_46[func_97() /*8*/])) && unk_0x91D5C8283D19AF49(Local_46[func_97() /*8*/], 0))
				{
					unk_0x744CE45DE2F4254B(0.5f);
					if (iLocal_1298 != func_97())
					{
						unk_0xB5D26BFA756D0D11(5f, 10f, 4);
						func_23(Local_46[func_97() /*8*/], -1);
						func_99(Local_46[func_97() /*8*/], -1);
						iLocal_1298 = func_97();
					}
					if (func_95(&iLocal_1055, 692.8256f, -1012.544f, 21.722f, 692.9143f, -1003.556f, 21.50839f, 692.6511f, -1021.604f, 26.20675f, 9.75f, 1, Local_46[func_97() /*8*/], "", "", "", 1, 0, 1, -1))
					{
						iLocal_64++;
					}
				}
				else if (func_94())
				{
					unk_0x744CE45DE2F4254B(0.5f);
					func_50(&iLocal_1055, 692.8256f, -1012.544f, 21.722f, 0.1f, 0.1f, 0.1f, 1, iLocal_1299, "", "", "", 1, 0, 1, -1);
					if (unk_0xD4B4F68F3449CBEC(Local_46[func_49() /*8*/], 692.9143f, -1003.556f, 21.50839f, 692.6511f, -1021.604f, 26.20675f, 9.75f, 0, true, 0))
					{
						iLocal_64++;
					}
				}
				else
				{
					func_17(&iLocal_1055);
					func_23(0, -1);
					func_99(0, -1);
				}
				break;
			
			case 1:
				if (func_98())
				{
					if (func_47(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), 5f, 1, 1056964608, 0, 1, 0))
					{
						bVar0 = true;
					}
				}
				else if (func_94())
				{
					if (func_47(iLocal_1299, 5f, 1, 1056964608, 0, 1, 0))
					{
						bVar0 = true;
					}
				}
				if (bVar0)
				{
					if (func_7(88))
					{
						unk_0xB5D26BFA756D0D11(5f, 10f, 4);
						unk_0x9611832841071B69(unk_0x33CD235DF1E6A94E(), true);
						func_46(1);
						func_45(1, 0);
						iLocal_64 = 1000;
					}
					else
					{
						unk_0xB5D26BFA756D0D11(5f, 10f, 4);
						iLocal_64++;
					}
					if (func_98())
					{
						unk_0x9152A6430680BF0A(Local_46[iLocal_1298 /*8*/], 0);
					}
					else if (func_94())
					{
						unk_0x9152A6430680BF0A(Local_46[func_49() /*8*/], 0);
						unk_0x23F395CF89089EB2(Local_46[func_49() /*8*/], 1);
						unk_0x94424920FDB82B9A(Local_46[func_49() /*8*/]);
					}
					unk_0x07C339D4328CA16C(unk_0x33CD235DF1E6A94E(), 0, 0);
				}
				break;
			
			case 2:
				if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
				{
					return 1;
				}
				break;
			
			case 1000:
				func_45(1, 0);
				if (!func_43())
				{
					func_41();
				}
				else
				{
					func_40(&uLocal_1087, 3, 0, "LESTER", 0, 1);
					if (func_28(&uLocal_1087, 12, "JHFAUD", "JHF_P10c", 8, 1, 0, 0, 0))
					{
						iLocal_64++;
					}
				}
				break;
			
			case 1001:
				func_45(1, 0);
				if (func_27())
				{
					unk_0xB5D26BFA756D0D11(5f, 10f, 4);
					iLocal_64++;
				}
				break;
			
			case 1002:
				func_45(1, 0);
				if (!func_27())
				{
					func_26();
					return 1;
				}
				break;
			}
	}
	return 0;
}

void func_26()
{
	int iVar0;
	
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		unk_0x4D5F3407F1F37E28(unk_0x33CD235DF1E6A94E(), false, false, false, false, false, false, 0, false);
		unk_0x5FEE418CE11E6DDE(unk_0x33CD235DF1E6A94E(), 157, true);
		unk_0x9611832841071B69(unk_0x33CD235DF1E6A94E(), false);
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x765F6FEEFF39224F(Global_91081[iVar0]))
		{
			if (!unk_0xD62C4419A41F106A(Global_91081[iVar0], 0))
			{
				unk_0x4D5F3407F1F37E28(Global_91081[iVar0], false, false, false, false, false, false, 0, false);
				unk_0x9611832841071B69(Global_91081[iVar0], false);
			}
		}
		iVar0++;
	}
	if ((Global_36425 != 0 && Global_36425 != 3) && Global_36425 != 2)
	{
		unk_0xD875615F72CD34A6(5);
		unk_0x4B06B5746CBEC99F(1f);
	}
}

int func_27()
{
	if (Global_14553.f_1 == 10 || Global_14553.f_1 == 9)
	{
		return 1;
	}
	return 0;
}

bool func_28(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_39(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
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
	return func_29(sParam3, iParam4, bParam8);
}

int func_29(char* sParam0, int iParam1, bool bParam2)
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
					func_38();
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
		if (func_37(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_36();
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
				func_34();
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
				if (func_33())
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
			if (func_32())
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
			func_31();
			Global_15876 = bParam2;
		}
		Global_15868 = iParam1;
		StringCopy(&Global_15485, sParam0, 24);
		Global_14732 = 0;
		func_30();
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
		func_38();
	}
	return 0;
}

void func_30()
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

void func_31()
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

int func_32()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_33()
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

void func_34()
{
	if (func_35(14))
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
		Global_14553 = func_160();
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

bool func_35(int iParam0)
{
	return Global_36425 == iParam0;
}

void func_36()
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

bool func_37(int iParam0, int iParam1)
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

void func_38()
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

void func_39(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_40(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_41()
{
	Global_14732 = 0;
	func_42();
}

void func_42()
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

int func_43()
{
	if (func_44())
	{
		return 0;
	}
	if (unk_0x75E8D03BBC787BAD())
	{
		if (unk_0xC4B7D5901EDA35B5())
		{
			return 0;
		}
	}
	return 1;
}

int func_44()
{
	if (Global_15866 != 0 || unk_0x12BF789190D82474())
	{
		return 1;
	}
	return 0;
}

void func_45(bool bParam0, bool bParam1)
{
	if (!bParam1)
	{
		unk_0x3FD9339AA95E323F(0, 21, 1);
	}
	unk_0x3FD9339AA95E323F(0, 25, 1);
	unk_0x3FD9339AA95E323F(0, 24, 1);
	unk_0x3FD9339AA95E323F(0, 257, 1);
	unk_0x3FD9339AA95E323F(0, 141, 1);
	unk_0x3FD9339AA95E323F(0, 140, 1);
	unk_0x3FD9339AA95E323F(0, 22, 1);
	unk_0x3FD9339AA95E323F(0, 44, 1);
	unk_0x3FD9339AA95E323F(0, 23, 1);
	unk_0x3FD9339AA95E323F(0, 47, 1);
	unk_0x3FD9339AA95E323F(0, 36, 1);
	if (bParam0)
	{
		unk_0x3FD9339AA95E323F(0, 37, 1);
	}
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		if (bParam1)
		{
			unk_0xA9E472293522522F(unk_0x33CD235DF1E6A94E(), 2f);
		}
		else
		{
			unk_0xA9E472293522522F(unk_0x33CD235DF1E6A94E(), 1f);
		}
		unk_0x41E36A540F8F323F(unk_0x33CD235DF1E6A94E(), 102, true);
	}
	if (unk_0x09287BFEE1D9F6EF(unk_0x95B959F18401C09A(), 0))
	{
		unk_0x117A9E054B0F10FB(unk_0x95B959F18401C09A());
	}
}

void func_46(bool bParam0)
{
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		unk_0x4D5F3407F1F37E28(unk_0x33CD235DF1E6A94E(), true, true, true, true, true, false, 0, false);
		unk_0x5FEE418CE11E6DDE(unk_0x33CD235DF1E6A94E(), 157, false);
		unk_0x9611832841071B69(unk_0x33CD235DF1E6A94E(), true);
		unk_0xB5FEFF716515EF9E(unk_0x33CD235DF1E6A94E(), 0, 0);
		if (bParam0)
		{
			unk_0x274C6068B660FFB4(unk_0x33CD235DF1E6A94E(), joaat("weapon_unarmed"), false);
		}
		unk_0x50E893C437D3AC10(unk_0x33CD235DF1E6A94E(), 0);
	}
	if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
	{
		unk_0x117A9E054B0F10FB(unk_0x95B959F18401C09A());
	}
	unk_0xD875615F72CD34A6(0);
	unk_0x4B06B5746CBEC99F(0f);
}

int func_47(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_48(iParam0);
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

void func_48(int iParam0)
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

int func_49()
{
	int iVar0;
	
	if (func_94())
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (unk_0x765F6FEEFF39224F(Local_46[iVar0 /*8*/]) && unk_0x91D5C8283D19AF49(Local_46[iVar0 /*8*/], 0))
			{
				if (unk_0x221C953018491A32(iLocal_1299, Local_46[iVar0 /*8*/]))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	return -1;
}

int func_50(int iParam0, vector3 vParam1, vector3 vParam2, bool bParam3, int iParam4, char* sParam5, char* sParam6, char* sParam7, bool bParam8, int iParam9, bool bParam10, int iParam11)
{
	return func_51(iParam0, vParam1, vParam2, func_93(), func_93(), bParam3, 5, 0, 0, 0, iParam4, sParam5, func_92(), func_92(), func_92(), func_92(), sParam6, 0, bParam8, sParam7, 0, iParam9, bParam10, iParam11, 0, 0, 0, 1, 1065353216);
}

int func_51(int iParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, vector3 vParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, bool bParam17, bool bParam18, char* sParam19, bool bParam20, int iParam21, bool bParam22, int iParam23, int iParam24, int iParam25, int iParam26, bool bParam27, float fParam28)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	vVar3 = { vParam1 + Vector(1f, 0f, 0f) };
	iParam0->f_17[0] = iParam7;
	iParam0->f_17[1] = iParam8;
	iParam0->f_17[2] = iParam9;
	iParam0->f_16 = iParam7;
	func_91(iParam0);
	func_90(iParam0);
	func_89();
	if (func_73(iParam0, iParam0->f_17[0], iParam0->f_17[1], iParam0->f_17[2], sParam12, sParam13, sParam14, sParam15, iParam0->f_8, bParam17, iParam10, 0, 0, iParam24, iParam25, iParam26, iParam6, bParam18))
	{
		func_72(sParam12);
		func_72(sParam13);
		func_72(sParam14);
		func_72(sParam15);
		if (unk_0x73DA1542B2F0C458())
		{
			bVar1 = false;
			if (unk_0x91D5C8283D19AF49(iParam10, 0))
			{
				if (unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iParam10, 0))
				{
					unk_0x8950ED5730F62EE8(&(iParam0->f_13), 3);
					if (!unk_0x0E4018692D92041D(iParam0->f_13, 9))
					{
						unk_0xCE689A8E8C42ED78(&(iParam0->f_13), 4);
					}
					if (unk_0x0E4018692D92041D(iParam0->f_13, 23))
					{
						unk_0xCE689A8E8C42ED78(&(iParam0->f_13), 23);
					}
					unk_0x8950ED5730F62EE8(&(iParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (iParam6 == 4 || iParam6 == 5)
			{
				if (func_70(iParam0, iParam21))
				{
					unk_0x8950ED5730F62EE8(&(iParam0->f_13), 3);
					if (!unk_0x0E4018692D92041D(iParam0->f_13, 9))
					{
						unk_0xCE689A8E8C42ED78(&(iParam0->f_13), 4);
					}
					unk_0x8950ED5730F62EE8(&(iParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				func_72(sParam16);
				func_72(sParam19);
				func_72("MORE_SEATS");
				if (bParam18 && unk_0x09287BFEE1D9F6EF(unk_0x95B959F18401C09A(), 0))
				{
					if (unk_0xE38E3CF1625A4145(iParam0->f_5))
					{
						unk_0x1ABDB383C83A336A(&(iParam0->f_5));
						func_72(sParam11);
					}
					if (unk_0xE38E3CF1625A4145(*iParam0))
					{
						unk_0x1ABDB383C83A336A(iParam0);
					}
					if ((!func_67(iParam0, 1) && !func_66(iParam0)) && !unk_0x0E4018692D92041D(iParam0->f_13, 0))
					{
						if (bParam22)
						{
							func_65(iParam0, "LOSE_WANTED", 0);
							if (!unk_0xBC2FC12AD0FBF72E(iParam0->f_17[0]))
							{
								func_63(iParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0x8950ED5730F62EE8(&(iParam0->f_13), 0);
						unk_0xCE689A8E8C42ED78(&(iParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0x0E4018692D92041D(iParam0->f_13, 0))
					{
						func_72("LOSE_WANTED");
						unk_0xCE689A8E8C42ED78(&(iParam0->f_13), 0);
						unk_0x8950ED5730F62EE8(&(iParam0->f_13), 1);
					}
					if (unk_0x0E4018692D92041D(iParam0->f_13, 1))
					{
						if (!func_67(iParam0, 1))
						{
							if (!unk_0xBC2FC12AD0FBF72E(iParam0->f_17[0]))
							{
								func_63(iParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0xCE689A8E8C42ED78(&(iParam0->f_13), 1);
						}
					}
					if (!unk_0xE38E3CF1625A4145(iParam0->f_5))
					{
						if (unk_0xE38E3CF1625A4145(*iParam0))
						{
							unk_0x1ABDB383C83A336A(iParam0);
						}
						iParam0->f_5 = func_62(vVar3, 0);
						if (!iParam23 == -1)
						{
							unk_0xA20C1DE21F2F071C(iParam0->f_5, iParam23);
						}
						if (bParam27)
						{
							func_61(iParam0->f_5, iParam0);
						}
					}
					else if (!func_60(vVar3, unk_0x7BC3899BF7085A7D(iParam0->f_5), 0.1f, 0))
					{
						unk_0xA0220BF0AB292278(iParam0->f_5, vVar3);
						if (bParam27)
						{
							func_61(iParam0->f_5, iParam0);
						}
					}
					if (!func_67(iParam0, 2))
					{
						if (!unk_0x0E4018692D92041D(iParam0->f_13, 2))
						{
							func_65(iParam0, sParam11, 0);
							unk_0x8950ED5730F62EE8(&(iParam0->f_13), 2);
						}
					}
					if (iParam6 == 4 || iParam6 == 5)
					{
						if (unk_0x0E4018692D92041D(iParam0->f_13, 13))
						{
							bParam5 = false;
						}
					}
					bVar1 = false;
					bVar4 = false;
					iVar5 = 0;
					if ((iParam6 == 1 || iParam6 == 3) || iParam6 == 5)
					{
						bVar4 = true;
					}
					if (iParam6 == 2 || iParam6 == 3)
					{
						iVar5 = 1;
					}
					else if (iParam6 == 4 || iParam6 == 5)
					{
						iVar5 = 2;
					}
					if (bParam20)
					{
						unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), vParam1, vParam2, bParam5, bVar4, iVar5);
						if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), vParam3, vParam4, fParam28, 0, bVar4, iVar5))
						{
							bVar1 = true;
						}
					}
					else if (unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), vParam1, vParam2, bParam5, bVar4, iVar5))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!unk_0xBC2FC12AD0FBF72E(iParam0->f_17[iVar2]))
							{
								if (iParam6 == 4 || iParam6 == 5)
								{
									iVar0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
									if (!unk_0x10930B9CAD4111C2(iParam0->f_17[iVar2], iVar0, 0))
									{
										bVar1 = false;
									}
								}
								else if (iParam10 != 0)
								{
									if (!unk_0x10930B9CAD4111C2(iParam0->f_17[iVar2], iParam10, 0))
									{
										bVar1 = false;
									}
								}
								else if (!unk_0x731F434EAFE6E9FE(iParam0->f_17[iVar2], func_14()) || !func_58(iParam0->f_17[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (func_55(iParam0))
							{
								func_72(sParam11);
								func_72(sParam16);
								func_72(sParam12);
								func_72(sParam13);
								func_72(sParam14);
								func_72(sParam15);
								func_72("LOSE_WANTED");
								func_72("MORE_SEATS");
								func_72(sParam19);
								func_13(iParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (unk_0x765F6FEEFF39224F(iParam10))
			{
				if ((bParam18 && unk_0x09287BFEE1D9F6EF(unk_0x95B959F18401C09A(), 0)) && (!unk_0x0E4018692D92041D(iParam0->f_13, 9) && !unk_0x0E4018692D92041D(iParam0->f_13, 22)))
				{
					func_72(sParam16);
					func_72(sParam19);
					if (unk_0xE38E3CF1625A4145(iParam0->f_5) || unk_0xE38E3CF1625A4145(*iParam0))
					{
						unk_0x1ABDB383C83A336A(&(iParam0->f_5));
						unk_0x1ABDB383C83A336A(iParam0);
						func_72(sParam11);
					}
					if ((!func_67(iParam0, 1) && !func_66(iParam0)) && !unk_0x0E4018692D92041D(iParam0->f_13, 0))
					{
						if (bParam22)
						{
							func_65(iParam0, "LOSE_WANTED", 0);
							if (!unk_0xBC2FC12AD0FBF72E(iParam0->f_17[0]))
							{
								func_63(iParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0x8950ED5730F62EE8(&(iParam0->f_13), 0);
						unk_0xCE689A8E8C42ED78(&(iParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0x0E4018692D92041D(iParam0->f_13, 0))
					{
						func_72("LOSE_WANTED");
						unk_0xCE689A8E8C42ED78(&(iParam0->f_13), 0);
						unk_0x8950ED5730F62EE8(&(iParam0->f_13), 1);
					}
					if (unk_0x0E4018692D92041D(iParam0->f_13, 1))
					{
						if (!func_67(iParam0, 1))
						{
							if (!unk_0xBC2FC12AD0FBF72E(iParam0->f_17[0]))
							{
								func_63(iParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0xCE689A8E8C42ED78(&(iParam0->f_13), 1);
						}
					}
					if (unk_0x91D5C8283D19AF49(iParam10, 0))
					{
						if (!unk_0xE38E3CF1625A4145(*iParam0))
						{
							if (unk_0xE38E3CF1625A4145(iParam0->f_5))
							{
								unk_0x1ABDB383C83A336A(&(iParam0->f_5));
								func_72(sParam11);
							}
							*iParam0 = func_52(iParam10, 0, 0);
							unk_0xAE71BEA7BBBFB78F(*iParam0, 2);
							if (!unk_0x0E4018692D92041D(iParam0->f_13, 4))
							{
								func_61(*iParam0, iParam0);
							}
						}
						if (!func_67(iParam0, 2))
						{
							if (!unk_0x0E4018692D92041D(iParam0->f_13, 3))
							{
								func_65(iParam0, sParam16, 0);
								unk_0x8950ED5730F62EE8(&(iParam0->f_13), 3);
								unk_0xCE689A8E8C42ED78(&(iParam0->f_13), 4);
							}
							else if (unk_0x0E4018692D92041D(iParam0->f_13, 9))
							{
								if (!unk_0x6D2E2622CA149402(sParam19))
								{
									if (!unk_0x0E4018692D92041D(iParam0->f_13, 4))
									{
										func_65(iParam0, sParam19, 0);
										unk_0x8950ED5730F62EE8(&(iParam0->f_13), 4);
									}
								}
								else if (!unk_0x0E4018692D92041D(iParam0->f_13, 4))
								{
									func_65(iParam0, sParam16, 0);
									unk_0x8950ED5730F62EE8(&(iParam0->f_13), 4);
								}
								if (!unk_0x0E4018692D92041D(iParam0->f_13, 23))
								{
									if (!unk_0xBC2FC12AD0FBF72E(iParam0->f_17[0]))
									{
										func_63(iParam0->f_17[0], "GET_IN_CAR", 3);
									}
									unk_0x8950ED5730F62EE8(&(iParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (unk_0xE38E3CF1625A4145(iParam0->f_5))
				{
					unk_0x1ABDB383C83A336A(&(iParam0->f_5));
					func_72(sParam11);
				}
				if (iParam6 == 4 || iParam6 == 5)
				{
					if (iParam21 > 0)
					{
						if (!func_67(iParam0, 2))
						{
							if (unk_0x5C415D10D5CBF689(unk_0x33CD235DF1E6A94E()))
							{
								if (!unk_0x0E4018692D92041D(iParam0->f_13, 13))
								{
									iVar6 = 0;
									iVar7 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!unk_0xBC2FC12AD0FBF72E(iParam0->f_17[iVar2]))
										{
											iVar6++;
										}
										iVar2++;
									}
									iVar7 = unk_0x9EC3B269A34A2BEE(0, iVar6);
									if (!unk_0xBC2FC12AD0FBF72E(iParam0->f_17[iVar7]))
									{
										func_63(iParam0->f_17[iVar7], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_65(iParam0, "MORE_SEATS", 0);
									unk_0x8950ED5730F62EE8(&(iParam0->f_13), 13);
								}
							}
							else if (!unk_0x0E4018692D92041D(iParam0->f_13, 3))
							{
								func_65(iParam0, sParam16, 0);
								unk_0x8950ED5730F62EE8(&(iParam0->f_13), 3);
								unk_0xCE689A8E8C42ED78(&(iParam0->f_13), 4);
							}
							else if (!unk_0x0E4018692D92041D(iParam0->f_13, 4))
							{
								if (unk_0x0E4018692D92041D(iParam0->f_13, 9))
								{
									func_65(iParam0, sParam19, 0);
									unk_0x8950ED5730F62EE8(&(iParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_67(iParam0, 2))
					{
						if (!unk_0x0E4018692D92041D(iParam0->f_13, 3))
						{
							func_65(iParam0, sParam16, 0);
							unk_0x8950ED5730F62EE8(&(iParam0->f_13), 3);
							unk_0xCE689A8E8C42ED78(&(iParam0->f_13), 4);
						}
						else if (unk_0x0E4018692D92041D(iParam0->f_13, 9))
						{
							if (!unk_0x6D2E2622CA149402(sParam19))
							{
								if (!unk_0x0E4018692D92041D(iParam0->f_13, 4))
								{
									func_65(iParam0, sParam19, 0);
									unk_0x8950ED5730F62EE8(&(iParam0->f_13), 4);
								}
							}
							else if (!unk_0x0E4018692D92041D(iParam0->f_13, 4))
							{
								func_65(iParam0, sParam16, 0);
								unk_0x8950ED5730F62EE8(&(iParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (unk_0x0E4018692D92041D(iParam0->f_13, 0))
		{
			unk_0xCE689A8E8C42ED78(&(iParam0->f_13), 0);
		}
		func_72(sParam11);
		func_72(sParam16);
		func_72(sParam19);
		func_72(sParam16);
		func_72("LOSE_WANTED");
		if (unk_0xE38E3CF1625A4145(iParam0->f_5))
		{
			unk_0x1ABDB383C83A336A(&(iParam0->f_5));
		}
		if (unk_0xE38E3CF1625A4145(*iParam0))
		{
			unk_0x1ABDB383C83A336A(iParam0);
		}
	}
	unk_0xCE689A8E8C42ED78(&(iParam0->f_13), 11);
	unk_0xCE689A8E8C42ED78(&(iParam0->f_13), 12);
	return 0;
}

int func_52(int iParam0, bool bParam1, bool bParam2)
{
	return func_53(iParam0, !bParam1, bParam2);
}

int func_53(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0x765F6FEEFF39224F(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x8848A15CBDADDC60(iParam0);
	if (unk_0x680558231C80291D(iParam0))
	{
		unk_0xCE5C49921A521962(iVar0, func_54(unk_0xB331FCEB94EB05C8(), 1f, 1f));
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
		unk_0xCE5C49921A521962(iVar0, func_54(unk_0xB331FCEB94EB05C8(), 0.7f, 0.7f));
		unk_0xBF11C8A43770C598(iVar0, bParam1);
	}
	else if (unk_0xA3A29DB165882310(iParam0))
	{
		unk_0xCE5C49921A521962(iVar0, func_54(unk_0xB331FCEB94EB05C8(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_54(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_55(int iParam0)
{
	if (unk_0x0E4018692D92041D(iParam0->f_13, 12))
	{
		if (func_57(unk_0x33CD235DF1E6A94E()))
		{
			if (func_56(1, 0, 1) || unk_0x0E4018692D92041D(iParam0->f_13, 7))
			{
				return 1;
			}
		}
	}
	else if (func_56(1, 0, 1) || unk_0x0E4018692D92041D(iParam0->f_13, 7))
	{
		return 1;
	}
	return 0;
}

int func_56(bool bParam0, bool bParam1, bool bParam2)
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

int func_57(int iParam0)
{
	float fVar0;
	
	if (!unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		fVar0 = unk_0x8BB475EA09C9A0EB(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_58(int iParam0, int iParam1)
{
	if (!unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		if (unk_0x5C415D10D5CBF689(unk_0x33CD235DF1E6A94E()) && iParam1)
		{
			if (func_59(unk_0x33CD235DF1E6A94E(), iParam0))
			{
				unk_0x2A4DFF8BF4A53EA1(func_14(), 50f);
				return 1;
			}
		}
		else if (unk_0x731F434EAFE6E9FE(iParam0, func_14()))
		{
			unk_0x2A4DFF8BF4A53EA1(func_14(), 50f);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_59(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		if (unk_0x5C415D10D5CBF689(iParam0))
		{
			iVar0 = unk_0xF2C96862595654B4(iParam0, 0);
			if (unk_0x91D5C8283D19AF49(iVar0, 0))
			{
				if (!unk_0xBC2FC12AD0FBF72E(iParam1))
				{
					if (unk_0xEE984ED4E4A374BE(iParam1, iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_60(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)
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

void func_61(int iParam0, int iParam1)
{
	if (unk_0xE38E3CF1625A4145(iParam0))
	{
		if (unk_0xE38E3CF1625A4145(iParam1->f_6))
		{
			unk_0x1C316779E36C1967(iParam1->f_6, false);
		}
		unk_0x4E609369225EFC41(0);
		unk_0x739FD1CAC998D66A();
		iParam1->f_6 = iParam0;
		unk_0x1C316779E36C1967(iParam0, true);
	}
}

int func_62(vector3 vParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x2C0ED4741A007C6A(vParam0);
	unk_0xCE5C49921A521962(iVar0, func_54(unk_0xB331FCEB94EB05C8(), 1f, 1f));
	unk_0x1C316779E36C1967(iVar0, bParam1);
	return iVar0;
}

void func_63(int iParam0, char* sParam1, int iParam2)
{
	unk_0xAEED0213982928AC(iParam0, sParam1, func_64(iParam2), 1);
}

int func_64(int iParam0)
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

void func_65(int iParam0, char* sParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!unk_0x6D2E2622CA149402(sParam1))
		{
			if (!unk_0xCE3CFF625BEBAA04(sParam1, ""))
			{
				func_105(sParam1, 7500, 1);
			}
		}
	}
	iParam0->f_10 = unk_0xE3903F59E2F22150();
}

int func_66(int iParam0)
{
	if (!unk_0xBC2FC12AD0FBF72E(iParam0->f_16))
	{
		if (unk_0x07292B2EDB334B14(iParam0->f_16))
		{
			return 1;
		}
	}
	return 0;
}

int func_67(int iParam0, int iParam1)
{
	if (iParam1 != 1 || unk_0x75E8D03BBC787BAD())
	{
		if (unk_0xC4B7D5901EDA35B5())
		{
			return 1;
		}
		if (func_69(iParam0))
		{
			return 1;
		}
	}
	if (iParam1 != 2 || unk_0x75E8D03BBC787BAD())
	{
		if (func_44() && !func_68())
		{
			return 1;
		}
	}
	return 0;
}

int func_68()
{
	if (Global_16877 == 1)
	{
		return 1;
	}
	return 0;
}

int func_69(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0xE3903F59E2F22150();
	iVar0 = (iVar1 - uParam0->f_10);
	if (iVar0 < 35)
	{
		return 1;
	}
	return 0;
}

int func_70(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		iVar0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
		if (func_71(iVar0, uParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_71(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (unk_0x765F6FEEFF39224F(uParam1->f_17[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = unk_0xC92AA0DBDDDE8BB8(iParam0);
		if (iParam2 > 0)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 1)
				{
					if (!unk_0x921CF90E06D53D3A(iParam0, 1))
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
		else if (iVar1 >= iVar0)
		{
			if (iVar0 > 1)
			{
				if (!unk_0x921CF90E06D53D3A(iParam0, 1))
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
	return 0;
}

void func_72(char* sParam0)
{
	if (!unk_0x6D2E2622CA149402(sParam0))
	{
		unk_0x2E38114179FC5F06(sParam0);
	}
}

int func_73(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7[3];
	bool bVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	var uVar12[3];
	var uVar13[3];
	bool bVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	vector3 vVar19;
	int iVar20;
	int iVar21;
	
	iVar4 = 0;
	uParam0->f_17[0] = uParam1;
	uParam0->f_17[1] = uParam2;
	uParam0->f_17[2] = uParam3;
	uParam0->f_16 = uParam1;
	uVar12[0] = uParam4;
	uVar12[1] = uParam5;
	uVar12[2] = uParam6;
	uVar13[0] = uParam13;
	uVar13[1] = uParam14;
	uVar13[2] = uParam15;
	iVar6 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar7[0] = 0;
	iVar7[1] = 0;
	iVar7[2] = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0xBC2FC12AD0FBF72E(uParam0->f_17[iVar0]))
		{
			iVar3++;
		}
		if (unk_0x09287BFEE1D9F6EF(unk_0x95B959F18401C09A(), 0))
		{
			if (!unk_0x0E4018692D92041D(uParam0->f_13, 29) && !unk_0x0E4018692D92041D(uParam0->f_13, 28))
			{
				if (!unk_0xBC2FC12AD0FBF72E(uParam0->f_17[iVar0]))
				{
					unk_0x92A2FAFA76B7EC9B(uParam0->f_17[iVar0], true, -1, 0);
				}
				if (iVar0 == 2)
				{
					unk_0x8950ED5730F62EE8(&(uParam0->f_13), 28);
				}
			}
		}
		else if (!unk_0x0E4018692D92041D(uParam0->f_13, 29) && unk_0x0E4018692D92041D(uParam0->f_13, 28))
		{
			if (!unk_0xBC2FC12AD0FBF72E(uParam0->f_17[iVar0]))
			{
				unk_0x92A2FAFA76B7EC9B(uParam0->f_17[iVar0], false, -1, 0);
			}
			if (iVar0 == 2)
			{
				unk_0xCE689A8E8C42ED78(&(uParam0->f_13), 28);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0)
	{
		return 1;
	}
	if (unk_0x0E4018692D92041D(uParam0->f_13, 26))
	{
		bVar14 = false;
		if (!unk_0x765F6FEEFF39224F(uParam0->f_21))
		{
			iVar16 = 64;
			iVar16 |= 65536;
			iVar16 |= 2048;
			iVar16 |= 1;
			iVar16 |= 2;
			iVar16 |= 4;
			iVar16 |= 32;
			iVar16 |= 16;
			iVar16 |= 8;
			iVar15 = unk_0xACC2D6D9762C28BB(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), 50f, 0, iVar16);
			if (unk_0x91D5C8283D19AF49(iVar15, 0))
			{
				uParam0->f_21 = iVar15;
			}
		}
		if (unk_0x91D5C8283D19AF49(uParam0->f_21, 0))
		{
			if (vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), unk_0xFBB1F99A825CAB09(uParam0->f_21, true)) < 400f)
			{
				if (!unk_0x5C415D10D5CBF689(unk_0x33CD235DF1E6A94E()))
				{
					if (!unk_0x09287BFEE1D9F6EF(unk_0x95B959F18401C09A(), 0) || !bParam17)
					{
						if (func_71(uParam0->f_21, uParam0, iVar3))
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (!unk_0xBC2FC12AD0FBF72E(uParam0->f_17[iVar0]))
								{
									unk_0xA9E472293522522F(uParam0->f_17[iVar0], 1f);
									if (unk_0x731F434EAFE6E9FE(uParam0->f_17[iVar0], func_14()))
									{
										unk_0x5D94F4D6FE7DA516(uParam0->f_17[iVar0]);
									}
									if (unk_0xD76D6BCC14B95CE1(uParam0->f_17[iVar0], -1794415470) == 7 && !func_88(uParam0->f_17[iVar0], uParam0->f_21))
									{
										if (!unk_0x3AF2B3B68DD52355(uParam0->f_17[iVar0]) && !unk_0xF7C907E9E8E2BB22(uParam0->f_17[iVar0]))
										{
											unk_0x4A852F02088ECC9D(uParam0->f_17[iVar0], true);
											unk_0xC838CE9837D0ABAF(uParam0->f_17[iVar0], uParam0->f_21, 60000, iVar0, 1f, 1, 0);
											unk_0x9AA80CA39F863D9D(uParam0->f_17[iVar0], iVar0);
										}
									}
								}
								iVar0++;
							}
							return 1;
						}
						else
						{
							bVar14 = true;
						}
					}
					else
					{
						bVar14 = true;
					}
				}
				else
				{
					bVar14 = true;
				}
			}
			else
			{
				bVar14 = true;
			}
		}
		else
		{
			bVar14 = true;
		}
		if (bVar14)
		{
			unk_0xCE689A8E8C42ED78(&(uParam0->f_13), 26);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!unk_0xBC2FC12AD0FBF72E(uParam0->f_17[iVar0]))
				{
					if (!unk_0x707FFB0E65C1C546(uParam0->f_17[iVar0]) && !uParam0->f_15)
					{
						unk_0xED68CDDDE25A144E(uParam0->f_17[iVar0]);
					}
					if (!unk_0x731F434EAFE6E9FE(uParam0->f_17[iVar0], func_14()))
					{
						if (func_86(uParam0, uParam0->f_17[iVar0], fParam8, 1))
						{
							unk_0x140D4A6561E11695(uParam0->f_17[iVar0], func_14());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!unk_0x0E4018692D92041D(uParam0->f_13, 26))
	{
		if ((!func_85(uParam0) && unk_0x5C415D10D5CBF689(unk_0x33CD235DF1E6A94E())) && !unk_0x765F6FEEFF39224F(iParam10))
		{
			iVar10 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
			if (unk_0x91D5C8283D19AF49(iVar10, 0))
			{
				if (!unk_0x0E4018692D92041D(uParam0->f_13, 13))
				{
					if (iParam16 == 4 || iParam16 == 5)
					{
					}
					if (!func_67(uParam0, 2))
					{
						iVar17 = 0;
						iVar18 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							if (!unk_0xBC2FC12AD0FBF72E(uParam0->f_17[iVar0]))
							{
								iVar17++;
							}
							iVar0++;
						}
						iVar18 = unk_0x9EC3B269A34A2BEE(0, iVar17);
						if (!unk_0xBC2FC12AD0FBF72E(uParam0->f_17[iVar18]))
						{
							func_63(uParam0->f_17[iVar18], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_65(uParam0, "MORE_SEATS", 0);
						unk_0x8950ED5730F62EE8(&(uParam0->f_13), 13);
					}
				}
				bVar9 = true;
			}
		}
		else
		{
			bVar9 = false;
			unk_0xCE689A8E8C42ED78(&(uParam0->f_13), 13);
			func_72("MORE_SEATS");
		}
		if (!unk_0x765F6FEEFF39224F(iParam10))
		{
			if ((!unk_0xBC2FC12AD0FBF72E(uParam0->f_17[0]) || !unk_0xBC2FC12AD0FBF72E(uParam0->f_17[1])) || !unk_0xBC2FC12AD0FBF72E(uParam0->f_17[2]))
			{
				if (!unk_0x0E4018692D92041D(uParam0->f_13, 31))
				{
					if (unk_0x5C415D10D5CBF689(unk_0x33CD235DF1E6A94E()) && !func_67(uParam0, 2))
					{
						iVar10 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
						if (func_84(iVar10, uParam0))
						{
							func_65(uParam0, "CMN_VEHSUIT", 0);
							unk_0x8950ED5730F62EE8(&(uParam0->f_13), 31);
						}
					}
				}
				else if (!unk_0x5C415D10D5CBF689(unk_0x33CD235DF1E6A94E()))
				{
					unk_0xCE689A8E8C42ED78(&(uParam0->f_13), 31);
					func_72("CMN_VEHSUIT");
				}
			}
		}
		if (unk_0x91D5C8283D19AF49(iParam10, 0))
		{
			if (unk_0xEE984ED4E4A374BE(unk_0x33CD235DF1E6A94E(), iParam10))
			{
				if (unk_0x833B1A3D9F713E03(0, 75))
				{
					unk_0x8950ED5730F62EE8(&(uParam0->f_13), 21);
				}
			}
			else if (unk_0x0E4018692D92041D(uParam0->f_13, 21))
			{
				unk_0xCE689A8E8C42ED78(&(uParam0->f_13), 21);
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x765F6FEEFF39224F(uParam0->f_17[iVar0]))
			{
				if (!unk_0xBC2FC12AD0FBF72E(uParam0->f_17[iVar0]))
				{
					if (!unk_0x731F434EAFE6E9FE(uParam0->f_17[iVar0], func_14()))
					{
						unk_0x139C6344B571F912(uParam0->f_17[iVar0], 1);
					}
					else
					{
						unk_0x139C6344B571F912(uParam0->f_17[iVar0], 0);
					}
					if (unk_0x5C415D10D5CBF689(unk_0x33CD235DF1E6A94E()))
					{
						iVar10 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
						if (unk_0x91D5C8283D19AF49(iVar10, 0))
						{
							if (unk_0x731F434EAFE6E9FE(uParam0->f_17[iVar0], func_14()))
							{
								if (!func_85(uParam0) && unk_0x5C415D10D5CBF689(unk_0x33CD235DF1E6A94E()))
								{
									if (!func_83(uParam0->f_17[iVar0]))
									{
										unk_0x5D94F4D6FE7DA516(uParam0->f_17[iVar0]);
									}
								}
							}
						}
						if (iVar10 != iParam10 && !unk_0xD62C4419A41F106A(iVar10, 0))
						{
							if (unk_0xEE984ED4E4A374BE(uParam0->f_17[iVar0], iVar10))
							{
								if (unk_0x8AE34E8B10270D31(iVar10) && !unk_0x156573D1AADB54ED(iVar10))
								{
									vVar19 = { unk_0xFBB1F99A825CAB09(iVar10, true) };
									if (vVar19.z < -1f)
									{
										unk_0x0FF06FD8DEB3AB01(uParam0->f_17[iVar0], iVar10, 64);
									}
								}
							}
						}
					}
					bVar8 = true;
					if (!unk_0x731F434EAFE6E9FE(uParam0->f_17[iVar0], func_14()))
					{
						if (unk_0x5C415D10D5CBF689(uParam0->f_17[iVar0]))
						{
							iVar10 = unk_0xF2C96862595654B4(uParam0->f_17[iVar0], 0);
							if (!unk_0xD62C4419A41F106A(iVar10, 0))
							{
								if (unk_0x91D5C8283D19AF49(iParam10, 0))
								{
									if (iVar10 != iParam10)
									{
										if (!unk_0xEE984ED4E4A374BE(unk_0x33CD235DF1E6A94E(), iVar10))
										{
											if (unk_0x8BB475EA09C9A0EB(iVar10) > 5f)
											{
												unk_0x0FF06FD8DEB3AB01(uParam0->f_17[iVar0], iVar10, 4160);
											}
											else
											{
												unk_0x0FF06FD8DEB3AB01(uParam0->f_17[iVar0], iVar10, 64);
											}
											bVar8 = false;
										}
									}
								}
								else
								{
									if (unk_0x5C415D10D5CBF689(unk_0x33CD235DF1E6A94E()))
									{
										iVar20 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
									}
									if (unk_0x91D5C8283D19AF49(iVar20, 0))
									{
										if (iVar10 != iVar20)
										{
											if (unk_0x8BB475EA09C9A0EB(iVar10) > 5f)
											{
												unk_0x0FF06FD8DEB3AB01(uParam0->f_17[iVar0], iVar10, 4160);
											}
											else
											{
												unk_0x0FF06FD8DEB3AB01(uParam0->f_17[iVar0], iVar10, 64);
											}
											bVar8 = false;
										}
									}
								}
							}
						}
					}
					if (unk_0x731F434EAFE6E9FE(uParam0->f_17[iVar0], func_14()))
					{
						iVar21 = unk_0x6EE765D5B613AB2A(unk_0x33CD235DF1E6A94E());
						if (unk_0x765F6FEEFF39224F(iVar21))
						{
							if (func_71(iVar21, uParam0, 0))
							{
								if (func_82(iVar0, uParam0) || !unk_0x0E4018692D92041D(uParam0->f_13, 27))
								{
									unk_0x9AA80CA39F863D9D(uParam0->f_17[iVar0], iVar0);
									func_15(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										unk_0x8950ED5730F62EE8(&(uParam0->f_13), 27);
									}
								}
							}
							else if (!func_82(iVar0, uParam0))
							{
								if (unk_0x541D5C57194E73C4(iVar21) == joaat("sentinel2"))
								{
									unk_0x9AA80CA39F863D9D(uParam0->f_17[iVar0], 4);
								}
								else
								{
									unk_0x9AA80CA39F863D9D(uParam0->f_17[iVar0], 2);
								}
								func_81(iVar0, uParam0);
							}
						}
					}
					if ((!unk_0x731F434EAFE6E9FE(uParam0->f_17[iVar0], func_14()) && !func_80(uParam0->f_17[iVar0], iParam10)) && !func_79(uParam0->f_17[iVar0], iParam10))
					{
						if (func_86(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
						{
							if (!unk_0x731F434EAFE6E9FE(uParam0->f_17[iVar0], func_14()))
							{
								if (((!unk_0x3AF2B3B68DD52355(uParam0->f_17[iVar0]) && !unk_0xF7C907E9E8E2BB22(uParam0->f_17[iVar0])) && !unk_0x03EA5595E81F1F43(uParam0->f_17[iVar0])) && !unk_0x707FFB0E65C1C546(uParam0->f_17[iVar0]))
								{
									iVar11 = unk_0xD76D6BCC14B95CE1(uParam0->f_17[iVar0], -1794415470);
									if (iVar11 == 7)
									{
										unk_0xED68CDDDE25A144E(uParam0->f_17[iVar0]);
									}
									unk_0x140D4A6561E11695(uParam0->f_17[iVar0], func_14());
									bVar8 = false;
								}
							}
						}
						if (bVar8)
						{
							if (!unk_0xE38E3CF1625A4145(uParam0->f_1[iVar0]))
							{
								uParam0->f_11 = unk_0xE3903F59E2F22150();
								uParam0->f_1[iVar0] = func_52(uParam0->f_17[iVar0], 0, 0);
								unk_0xAE71BEA7BBBFB78F(uParam0->f_1[iVar0], 2);
								if (bParam9)
								{
									func_61(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (unk_0xE38E3CF1625A4145(uParam0->f_1[iVar0]))
					{
						if (((func_58(uParam0->f_17[iVar0], 1) || func_80(uParam0->f_17[iVar0], iParam10)) || iParam12) || (unk_0x91D5C8283D19AF49(iParam10, 0) && !unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iParam10, 0)))
						{
							if (unk_0xE38E3CF1625A4145(uParam0->f_1[iVar0]))
							{
								unk_0x1ABDB383C83A336A(&(uParam0->f_1[iVar0]));
								func_72(uVar12[iVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								func_61(uParam0->f_1[iVar0], uParam0);
							}
							iVar6 = 0;
						}
					}
					else if (unk_0x91D5C8283D19AF49(iParam10, 0))
					{
						if (!unk_0xEE984ED4E4A374BE(uParam0->f_17[iVar0], iParam10))
						{
							if ((unk_0x335C0645074963FE(uParam0->f_17[iVar0], iParam10, 20f, 20f, 5f, 0, 1, 0) && !unk_0x0E4018692D92041D(uParam0->f_13, 11)) && !((bParam17 && unk_0x09287BFEE1D9F6EF(unk_0x95B959F18401C09A(), 0)) && !unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iParam10, 0)))
							{
								if (unk_0x5C415D10D5CBF689(uParam0->f_17[iVar0]))
								{
									if (!unk_0x10930B9CAD4111C2(uParam0->f_17[iVar0], iParam10, 0))
									{
										if (!func_58(uParam0->f_17[iVar0], 1))
										{
											if (func_57(uParam0->f_17[iVar0]))
											{
												iVar11 = unk_0xD76D6BCC14B95CE1(uParam0->f_17[iVar0], 451360105);
												if (iVar11 == 7)
												{
													unk_0x07C339D4328CA16C(uParam0->f_17[iVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (unk_0x731F434EAFE6E9FE(uParam0->f_17[iVar0], func_14()))
									{
										if ((((!unk_0x03EA5595E81F1F43(uParam0->f_17[iVar0]) && !unk_0x3AF2B3B68DD52355(uParam0->f_17[iVar0])) && !unk_0xF7C907E9E8E2BB22(uParam0->f_17[iVar0])) && !unk_0x707FFB0E65C1C546(uParam0->f_17[iVar0])) && !unk_0x17260B4EA0652E1C(iParam10))
										{
											unk_0x5D94F4D6FE7DA516(uParam0->f_17[iVar0]);
										}
									}
									iVar11 = unk_0xD76D6BCC14B95CE1(uParam0->f_17[iVar0], -1794415470);
									if (iVar11 == 7 && !func_88(uParam0->f_17[iVar0], iParam10))
									{
										if (((((!unk_0x03EA5595E81F1F43(uParam0->f_17[iVar0]) && !unk_0x03EA5595E81F1F43(unk_0x33CD235DF1E6A94E())) && !func_78(uParam0->f_17[iVar0], 2f)) && !unk_0x3AF2B3B68DD52355(uParam0->f_17[iVar0])) && !unk_0xF7C907E9E8E2BB22(uParam0->f_17[iVar0])) && !unk_0x17260B4EA0652E1C(iParam10))
										{
											unk_0x4A852F02088ECC9D(uParam0->f_17[iVar0], true);
											if (unk_0x0E4018692D92041D(uParam0->f_13, 10))
											{
												unk_0xA9E472293522522F(uParam0->f_17[iVar0], 1f);
											}
											unk_0xC838CE9837D0ABAF(uParam0->f_17[iVar0], iParam10, 60000, iVar0, 2f, 1, 0);
											unk_0xBCC19B7CC61AE8CD(uParam0->f_17[iVar0], 0);
										}
									}
									else if (unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iParam10, 0))
									{
										uParam0->f_1[iVar0] = func_52(uParam0->f_17[iVar0], 0, 0);
										unk_0xAE71BEA7BBBFB78F(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!unk_0x731F434EAFE6E9FE(uParam0->f_17[iVar0], func_14()))
							{
								if (func_86(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
								{
									if (!unk_0x3AF2B3B68DD52355(uParam0->f_17[iVar0]) && !unk_0xF7C907E9E8E2BB22(uParam0->f_17[iVar0]))
									{
										iVar11 = unk_0xD76D6BCC14B95CE1(uParam0->f_17[iVar0], -1794415470);
										if (iVar11 == 7)
										{
											unk_0xED68CDDDE25A144E(uParam0->f_17[iVar0]);
										}
										unk_0x4A852F02088ECC9D(uParam0->f_17[iVar0], false);
										unk_0x140D4A6561E11695(uParam0->f_17[iVar0], func_14());
									}
								}
							}
						}
						else if (unk_0xEE984ED4E4A374BE(unk_0x33CD235DF1E6A94E(), iParam10))
						{
							if (!unk_0x731F434EAFE6E9FE(uParam0->f_17[iVar0], func_14()))
							{
								if (!unk_0x0E4018692D92041D(uParam0->f_13, 21))
								{
									unk_0x140D4A6561E11695(uParam0->f_17[iVar0], func_14());
								}
							}
							else if (unk_0x0E4018692D92041D(uParam0->f_13, 21))
							{
								unk_0x5D94F4D6FE7DA516(uParam0->f_17[iVar0]);
								unk_0x8950ED5730F62EE8(&(uParam0->f_13), 21);
							}
						}
						else if (unk_0x731F434EAFE6E9FE(uParam0->f_17[iVar0], func_14()) && !unk_0x17260B4EA0652E1C(iParam10))
						{
							unk_0x5D94F4D6FE7DA516(uParam0->f_17[iVar0]);
						}
					}
				}
				else if (unk_0xE38E3CF1625A4145(uParam0->f_1[iVar0]))
				{
					unk_0x1ABDB383C83A336A(&(uParam0->f_1[iVar0]));
					func_72(uVar12[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0xE38E3CF1625A4145(uParam0->f_1[iVar0]))
			{
				iVar7[iVar0] = 1;
				iVar1++;
			}
			iVar0++;
		}
		if (!func_67(uParam0, 2))
		{
			if (iVar1 > 0)
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (iVar7[iVar0])
					{
						if (!unk_0xBC2FC12AD0FBF72E(uParam0->f_17[iVar0]))
						{
							if (func_83(uParam0->f_17[iVar0]) || unk_0x335C0645074963FE(uParam0->f_17[iVar0], unk_0x33CD235DF1E6A94E(), uParam0->f_8, uParam0->f_8, uParam0->f_8, 0, 1, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!unk_0xBC2FC12AD0FBF72E(uParam0->f_17[iVar0]))
					{
						if (!unk_0x335C0645074963FE(uParam0->f_17[iVar0], unk_0x33CD235DF1E6A94E(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, 0, 1, 0) && !func_83(uParam0->f_17[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = unk_0xE3903F59E2F22150();
			if ((iVar5 - uParam0->f_11) > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (uParam0->f_12 < iVar1)
					{
						if ((iVar1 == iVar3 || (iVar2 + iVar1) == iVar3) && iVar3 > 1)
						{
							if (!unk_0x0E4018692D92041D(uParam0->f_13, 5))
							{
								func_65(uParam0, sParam7, 0);
								unk_0x8950ED5730F62EE8(&(uParam0->f_13), 5);
								uParam0->f_12 = iVar1;
							}
							else
							{
								uParam0->f_12 = iVar1;
							}
						}
						else
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (iVar7[iVar0])
								{
									if (!func_77(iVar0, uParam0))
									{
										if (!unk_0x6D2E2622CA149402(uVar13[iVar0]))
										{
											if (!unk_0xCE3CFF625BEBAA04(uVar13[iVar0], ""))
											{
												func_75(uParam0, uVar12[iVar0], uVar13[iVar0], 0);
												func_74(iVar0, uParam0);
												uParam0->f_12 = iVar1;
											}
										}
										if (!func_77(iVar0, uParam0))
										{
											func_65(uParam0, uVar12[iVar0], 0);
											func_74(iVar0, uParam0);
											uParam0->f_12 = iVar1;
										}
									}
									else
									{
										uParam0->f_12 = iVar1;
									}
								}
								iVar0++;
							}
						}
					}
				}
				else
				{
					uParam0->f_12 = 0;
				}
			}
		}
		unk_0xCE689A8E8C42ED78(&(uParam0->f_13), 10);
		if (iVar6 && !bVar9)
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (unk_0xE38E3CF1625A4145(uParam0->f_1[iVar0]))
				{
					unk_0x1ABDB383C83A336A(&(uParam0->f_1[iVar0]));
					func_72(uVar12[iVar0]);
				}
				iVar0++;
			}
			func_72("MORE_SEATS");
			return 1;
		}
	}
	return 0;
}

void func_74(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x8950ED5730F62EE8(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0x8950ED5730F62EE8(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0x8950ED5730F62EE8(&(uParam1->f_13), 16);
			break;
	}
}

void func_75(var uParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (!unk_0x6D2E2622CA149402(sParam1))
		{
			if (!unk_0xCE3CFF625BEBAA04(sParam1, ""))
			{
				func_76(sParam1, iParam2, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0xE3903F59E2F22150();
}

void func_76(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0x0C9D26BBBEE23407(sParam0);
	unk_0xFA6BEE2B1507FF1E(iParam1);
	unk_0x495407AC2D466930(iParam2, 1);
}

int func_77(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return unk_0x0E4018692D92041D(uParam1->f_13, 14);
		
		case 1:
			return unk_0x0E4018692D92041D(uParam1->f_13, 15);
		
		case 2:
			return unk_0x0E4018692D92041D(uParam1->f_13, 16);
		
		default:
	}
	return 0;
}

int func_78(int iParam0, float fParam1)
{
	int iVar0;
	
	if (unk_0xF0D230FB550CD6EB(iParam0, 0))
	{
		iVar0 = unk_0xF2C96862595654B4(iParam0, 0);
		if (!unk_0xD62C4419A41F106A(iVar0, 0))
		{
			if (unk_0x8BB475EA09C9A0EB(iVar0) > fParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_79(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		if (!unk_0x731F434EAFE6E9FE(iParam0, func_14()))
		{
			iVar0 = unk_0x35364EF44BEB123B(iParam0);
			if (unk_0x91D5C8283D19AF49(iParam1, 0))
			{
				if (unk_0x335C0645074963FE(iParam0, iParam1, (20f + 10f), (20f + 10f), 10f, 0, 1, 0))
				{
					if (iVar0 == iParam1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_80(int iParam0, int iParam1)
{
	if (!unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		if (unk_0x765F6FEEFF39224F(iParam1))
		{
			if (unk_0x91D5C8283D19AF49(iParam1, 0))
			{
				if (unk_0xEE984ED4E4A374BE(iParam0, iParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_81(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x8950ED5730F62EE8(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0x8950ED5730F62EE8(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0x8950ED5730F62EE8(&(uParam1->f_13), 19);
			break;
	}
}

int func_82(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return unk_0x0E4018692D92041D(uParam1->f_13, 17);
		
		case 1:
			return unk_0x0E4018692D92041D(uParam1->f_13, 18);
		
		case 2:
			return unk_0x0E4018692D92041D(uParam1->f_13, 19);
		
		default:
	}
	return 0;
}

int func_83(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
	{
		iVar0 = unk_0x6EE765D5B613AB2A(unk_0x33CD235DF1E6A94E());
		if (unk_0x91D5C8283D19AF49(iVar0, 0))
		{
			if (!unk_0xBC2FC12AD0FBF72E(iParam0))
			{
				iVar1 = unk_0x6EE765D5B613AB2A(iParam0);
				if (unk_0x91D5C8283D19AF49(iVar1, 0))
				{
					if (iVar0 == iVar1)
					{
						if (unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iParam0, 20f, 20f, 20f, 0, 1, 0) && unk_0x335C0645074963FE(iParam0, iVar1, 20f, 20f, 20f, 0, 1, 0))
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

int func_84(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		if (unk_0x541D5C57194E73C4(iParam0) == joaat("bus") || unk_0x541D5C57194E73C4(iParam0) == joaat("coach"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!unk_0xBC2FC12AD0FBF72E(uParam1->f_17[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = unk_0x7BDC41A7CA0C77A2(iParam0, 0, 0);
			if (!unk_0xBC2FC12AD0FBF72E(iVar3))
			{
				if ((iVar3 == uParam1->f_17[0] || iVar3 == uParam1->f_17[1]) || iVar3 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar4 = unk_0x7BDC41A7CA0C77A2(iParam0, 1, 0);
			if (!unk_0xBC2FC12AD0FBF72E(iVar4))
			{
				if ((iVar4 == uParam1->f_17[0] || iVar4 == uParam1->f_17[1]) || iVar4 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar5 = unk_0x7BDC41A7CA0C77A2(iParam0, 2, 0);
			if (!unk_0xBC2FC12AD0FBF72E(iVar5))
			{
				if ((iVar5 == uParam1->f_17[0] || iVar5 == uParam1->f_17[1]) || iVar5 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			if (iVar1 < iVar0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_85(var uParam0)
{
	int iVar0;
	
	if (unk_0x5C415D10D5CBF689(unk_0x33CD235DF1E6A94E()))
	{
		iVar0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
		if (func_71(iVar0, uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_86(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0xBC2FC12AD0FBF72E(iParam1))
	{
		if (unk_0x5C415D10D5CBF689(iParam1))
		{
			iVar0 = unk_0xF2C96862595654B4(iParam1, 0);
			if (!unk_0xD62C4419A41F106A(iVar0, 0))
			{
				if (unk_0x91D5C8283D19AF49(iVar0, 0))
				{
					if (unk_0xEE984ED4E4A374BE(unk_0x33CD235DF1E6A94E(), iVar0))
					{
						if (func_85(uParam0))
						{
							return 1;
						}
					}
					else if (bParam3)
					{
						return 1;
					}
				}
				else if (unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
		else if (unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
		{
			if (!bParam3)
			{
				iVar0 = unk_0x6EE765D5B613AB2A(unk_0x33CD235DF1E6A94E());
				if (unk_0x765F6FEEFF39224F(iVar0))
				{
					if (func_71(iVar0, uParam0, 0))
					{
						if (unk_0x91D5C8283D19AF49(iVar0, 0))
						{
							if (func_87(iVar0))
							{
								return 1;
							}
						}
					}
				}
				else
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
	return 0;
}

int func_87(int iParam0)
{
	float fVar0;
	
	if (!unk_0xD62C4419A41F106A(iParam0, 0))
	{
		fVar0 = unk_0x8BB475EA09C9A0EB(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_88(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		if (unk_0x91D5C8283D19AF49(iParam1, 0))
		{
			iVar0 = unk_0x6EE765D5B613AB2A(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_89()
{
	int iVar0;
	int iVar1;
	
	if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
	{
		iVar0 = unk_0x35364EF44BEB123B(unk_0x33CD235DF1E6A94E());
		if (unk_0x91D5C8283D19AF49(iVar0, 0))
		{
			iVar1 = unk_0x7BDC41A7CA0C77A2(iVar0, 0, 0);
			if (!unk_0xBC2FC12AD0FBF72E(iVar1))
			{
				if (iVar1 != unk_0x33CD235DF1E6A94E())
				{
					if (unk_0x5A04E3BD0B5E7E49(iVar1))
					{
						if (!unk_0x7E4FD94BA083E45B(iVar1, unk_0x33CD235DF1E6A94E()))
						{
							unk_0xC4A347124F39D998(iVar1, unk_0x33CD235DF1E6A94E(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_90(var uParam0)
{
	int iVar0;
	
	if (!unk_0x0E4018692D92041D(uParam0->f_13, 25))
	{
		if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
		{
			unk_0x5FEE418CE11E6DDE(unk_0x33CD235DF1E6A94E(), 32, false);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x765F6FEEFF39224F(uParam0->f_17[iVar0]))
			{
				if (!unk_0xBC2FC12AD0FBF72E(uParam0->f_17[iVar0]))
				{
					unk_0x5FEE418CE11E6DDE(uParam0->f_17[iVar0], 32, false);
					unk_0x5FEE418CE11E6DDE(uParam0->f_17[iVar0], 305, true);
					unk_0x5FEE418CE11E6DDE(uParam0->f_17[iVar0], 268, true);
					unk_0xBCC19B7CC61AE8CD(uParam0->f_17[iVar0], 0);
				}
			}
			iVar0++;
		}
		unk_0x8950ED5730F62EE8(&(uParam0->f_13), 25);
	}
}

void func_91(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x765F6FEEFF39224F(uParam0->f_17[iVar0]))
		{
			if (!unk_0xBC2FC12AD0FBF72E(uParam0->f_17[iVar0]))
			{
				if (unk_0x5C415D10D5CBF689(uParam0->f_17[iVar0]))
				{
					unk_0x990A34F9DA8E506D(uParam0->f_17[iVar0], 0);
					unk_0xCBDEE923F851F500(uParam0->f_17[iVar0], 0);
				}
			}
		}
		iVar0++;
	}
	if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
	{
		if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
		{
			if (unk_0x5C415D10D5CBF689(unk_0x33CD235DF1E6A94E()))
			{
				unk_0x990A34F9DA8E506D(unk_0x33CD235DF1E6A94E(), 0);
				unk_0xCBDEE923F851F500(unk_0x33CD235DF1E6A94E(), 0);
			}
		}
	}
}

var func_92()
{
	var uVar0;
	
	return uVar0;
}

Vector3 func_93()
{
	vector3 vVar0;
	
	return vVar0;
}

int func_94()
{
	if (unk_0x765F6FEEFF39224F(iLocal_1299) && unk_0x91D5C8283D19AF49(iLocal_1299, 0))
	{
		return 1;
	}
	return 0;
}

bool func_95(int iParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, float fParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8, char* sParam9, bool bParam10, int iParam11, bool bParam12, int iParam13)
{
	return func_51(iParam0, vParam1, func_96(), vParam2, vParam3, bParam5, 5, 0, 0, 0, iParam6, sParam7, func_92(), func_92(), func_92(), func_92(), sParam8, 0, bParam10, sParam9, 1, iParam11, bParam12, iParam13, func_92(), func_92(), func_92(), 1, fParam4);
}

Vector3 func_96()
{
	return 0f, 0f, 2f;
}

int func_97()
{
	int iVar0;
	
	if (func_98())
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (unk_0x765F6FEEFF39224F(Local_46[iVar0 /*8*/]) && unk_0x91D5C8283D19AF49(Local_46[iVar0 /*8*/], 0))
			{
				if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1) && unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), Local_46[iVar0 /*8*/], 1))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	return -1;
}

int func_98()
{
	int iVar0;
	
	if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (unk_0x765F6FEEFF39224F(Local_46[iVar0 /*8*/]) && unk_0x91D5C8283D19AF49(Local_46[iVar0 /*8*/], 0))
			{
				if (unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), Local_46[iVar0 /*8*/], 0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_99(int iParam0, int iParam1)
{
	Global_56505 = iParam0;
	Global_56506 = iParam1;
}

int func_100(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		if (((unk_0x765F6FEEFF39224F(Local_46[iVar1 /*8*/]) && unk_0x91D5C8283D19AF49(Local_46[iVar1 /*8*/], 0)) && !func_104(Local_46[iVar1 /*8*/])) && (!bParam0 || func_101(Local_46[iVar1 /*8*/])))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_101(int iParam0)
{
	if (unk_0x65F35477FEAD6F0F(iParam0) == iLocal_1256)
	{
		if (func_103(unk_0x33CD235DF1E6A94E(), vLocal_58, 1) < 500f)
		{
			return 1;
		}
	}
	else if (func_102(iParam0, unk_0x33CD235DF1E6A94E(), 1) < 300f)
	{
		return 1;
	}
	return 0;
}

float func_102(int iParam0, int iParam1, bool bParam2)
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

float func_103(int iParam0, vector3 vParam1, bool bParam2)
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

int func_104(int iParam0)
{
	if (unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		if ((unk_0x67001C5CC88C66A8(iParam0, 0, 7000) || unk_0x67001C5CC88C66A8(iParam0, 1, 7000)) || unk_0x67001C5CC88C66A8(iParam0, 2, 7000))
		{
			return 1;
		}
	}
	return 0;
}

void func_105(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x0C9D26BBBEE23407(sParam0);
	unk_0x495407AC2D466930(iParam1, 1);
}

void func_106(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	vector3 vVar0;
	var uVar1;
	
	if (unk_0x765F6FEEFF39224F(Global_97130.f_4))
	{
		if (unk_0x91D5C8283D19AF49(Global_97130.f_4, 0))
		{
			if (func_159(24) != Global_97130.f_4)
			{
				if (iParam2 == 1)
				{
					if (func_156(unk_0xFBB1F99A825CAB09(Global_97130.f_4, true), iParam3, &vVar0, &uVar1))
					{
						vParam0 = { vVar0 };
						fParam1 = uVar1;
					}
				}
				func_107(Global_97130.f_4, vParam0, fParam1, 24, 0);
			}
		}
	}
}

void func_107(int iParam0, vector3 vParam1, float fParam2, int iParam3, bool bParam4)
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
		func_155(iParam3);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_150(iParam0, &Var0);
		if (func_149(vParam1, 0f, 0f, 0f, 0))
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
		func_142(iParam3, &Var0, vParam1, fParam2, func_148(iParam0));
		func_108(iParam3, iParam0, 0);
	}
}

void func_108(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_138(&(Global_70409.f_555[0 /*21*/]), iParam0))
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
				Global_106565.f_32743.f_4801 = func_127();
			}
			if (iParam1 != Global_70409.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_159(iParam0);
					if ((unk_0x765F6FEEFF39224F(iVar0) && unk_0x91D5C8283D19AF49(iVar0, 0)) && iParam1 != iVar0)
					{
						func_109(iVar0, 145);
					}
				}
				Global_71315 = iParam1;
				Global_71316 = iParam0;
				Global_71317 = iParam2;
			}
		}
	}
}

void func_109(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_110(iParam0))
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
	func_150(iParam0, &(Global_106565.f_32743.f_5510));
}

int func_110(int iParam0)
{
	if ((((((((((!unk_0x765F6FEEFF39224F(iParam0) || !unk_0x91D5C8283D19AF49(iParam0, 0)) || func_125(iParam0, 0, 0)) || func_125(iParam0, 1, 0)) || func_125(iParam0, 2, 0)) || func_148(iParam0) != 145) || func_124(iParam0)) || func_123(iParam0)) || func_122(iParam0)) || func_121(iParam0)) || !func_111(unk_0x541D5C57194E73C4(iParam0)))
	{
		if (func_123(iParam0))
		{
		}
		if (func_123(iParam0))
		{
		}
		if (func_125(iParam0, 0, 0))
		{
		}
		if (func_125(iParam0, 1, 0))
		{
		}
		if (func_125(iParam0, 2, 0))
		{
		}
		if (func_148(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_111(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_112(iParam0, 0))
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

int func_112(int iParam0, bool bParam1)
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
		if (!func_120())
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
		if ((((!func_119() && !func_118()) && !func_117()) && !func_116()) && !func_120())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xDB36A8F522CBC12D() || unk_0x4CE1DD5CFC1F941E()) || unk_0xF5DB888C353E2BED())
		{
		}
		else if (!func_117())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_115(iParam0))
		{
			return 0;
		}
	}
	if (!func_113(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_113(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_114())
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

int func_114()
{
	if (unk_0x4CE1DD5CFC1F941E())
	{
		return unk_0xFCAD2CB678396284();
	}
	return 0;
}

int func_115(int iParam0)
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

int func_116()
{
	return 0;
}

int func_117()
{
	return 1;
}

int func_118()
{
	return 1;
}

int func_119()
{
	if (unk_0xE9D7B652961D4AA3(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_120()
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

int func_121(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x541D5C57194E73C4(iParam0);
	sVar1 = unk_0x00D614EBCFFD919D(iParam0);
	if (iVar0 == joaat("speedo") && unk_0xCE3CFF625BEBAA04(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_112(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_122(int iParam0)
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

int func_123(int iParam0)
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

int func_124(int iParam0)
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

int func_125(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0x765F6FEEFF39224F(iParam0) || !unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_126(iParam1, iVar0, &sVar1, &iVar2))
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

int func_126(int iParam0, int iParam1, char* sParam2, var uParam3)
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

var func_127()
{
	var uVar0;
	
	func_137(&uVar0, unk_0xE6A7CE90720B9037());
	func_136(&uVar0, unk_0x7EA67BD818402745());
	func_135(&uVar0, unk_0x13348E86D5B8A052());
	func_130(&uVar0, unk_0x020A28FAE1C09250());
	func_129(&uVar0, unk_0x2C02CAA9C4127339());
	func_128(&uVar0, unk_0xED3F08F762AAA55A());
	return uVar0;
}

void func_128(var uParam0, int iParam1)
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

void func_129(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_130(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_134(*uParam0);
	iVar1 = func_132(*uParam0);
	if (iParam1 < 1 || iParam1 > func_131(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

int func_131(int iParam0, int iParam1)
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

var func_132(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_133(unk_0x0E4018692D92041D(iParam0, 31), -1, 1)) + 2011;
}

int func_133(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_134(var uParam0)
{
	return uParam0 & 15;
}

void func_135(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_136(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_137(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_138(var uParam0, int iParam1)
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
			uParam0->f_4 = func_139(0, 1);
			uParam0->f_12 = 0;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 20);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_139(0, 1);
			uParam0->f_12 = 0;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 20);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_139(1, 1);
			uParam0->f_12 = 1;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 20);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_139(1, 2);
			uParam0->f_12 = 1;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 19);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_139(1, 1);
			uParam0->f_12 = 1;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 20);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_139(1, 2);
			uParam0->f_12 = 1;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 19);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_139(2, 1);
			uParam0->f_12 = 2;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 20);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_139(2, 1);
			uParam0->f_12 = 2;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 20);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_139(2, 1);
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
			if (func_120())
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
			if (func_120())
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
		if (!func_149(Global_106565.f_32743.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
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
		if (!func_149(Global_106565.f_2357.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_106565.f_2357.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_106565.f_2357.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0x0E4018692D92041D(uParam0->f_9, 20))
	{
		if (!func_149(Global_106565.f_2357.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_106565.f_2357.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_106565.f_2357.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_139(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_141(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_140(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_140(int iParam0, var uParam1, int iParam2)
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

bool func_141(int iParam0)
{
	return iParam0 < 3;
}

void func_142(int iParam0, var uParam1, vector3 vParam2, float fParam3, int iParam4)
{
	if (func_138(&(Global_70409.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x0E4018692D92041D(Global_70409.f_555[0 /*21*/].f_9, 10))
		{
			func_147(iParam0);
			func_146(uParam1, &(Global_106565.f_32743.f_69[Global_70409.f_555[0 /*21*/].f_14 /*78*/]));
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
			func_143(iParam0, 1);
		}
	}
}

void func_143(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_145(iParam0, 0))
		{
			func_144(iParam0, 1, 0);
			func_144(iParam0, 2, 0);
			func_144(iParam0, 3, 0);
			func_144(iParam0, 4, 0);
			func_144(iParam0, 0, 1);
			Global_70409[iParam0] = 1;
		}
	}
	else
	{
		func_144(iParam0, 0, 0);
	}
}

void func_144(int iParam0, int iParam1, bool bParam2)
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

bool func_145(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_106565.f_32743[iParam0], iParam1);
}

void func_146(var uParam0, var uParam1)
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

void func_147(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_138(&(Global_70409.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x765F6FEEFF39224F(Global_70409.f_139[iParam0]))
		{
			unk_0x0D21E1FDE062ED99(Global_70409.f_139[iParam0], true, 1);
			unk_0x65F544B458249682(&(Global_70409.f_139[iParam0]));
			Global_70409.f_139[iParam0] = 0;
		}
		if (unk_0x0E4018692D92041D(Global_70409.f_555[0 /*21*/].f_9, 13))
		{
			func_143(iParam0, 0);
		}
	}
}

int func_148(int iParam0)
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

bool func_149(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

void func_150(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		func_154(uParam1);
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
		if (uParam1->f_65 == -1 && !func_153(uParam1->f_66))
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
		func_152(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x34B1602009421B58(iParam0, iVar0 + 1))
			{
				unk_0x8950ED5730F62EE8(&(uParam1->f_77), func_151(iVar0 + 1));
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

int func_151(int iParam0)
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

int func_152(int iParam0, var uParam1, var uParam2)
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

int func_153(int iParam0)
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

void func_154(var uParam0)
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

void func_155(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_147(iParam0);
	func_143(iParam0, 0);
}

int func_156(vector3 vParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	iVar0 = func_157(vParam0, iParam1, 1);
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

int func_157(vector3 vParam0, int iParam1, int iParam2)
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
				if (func_158(iVar0) || iParam2 == 0)
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

bool func_158(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_106565.f_7223[iParam0], 0);
}

int func_159(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_70409.f_139[iParam0];
}

int func_160()
{
	func_161();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_161()
{
	int iVar0;
	
	if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
	{
		if (func_163(Global_106565.f_2357.f_539.f_4321) != unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()))
		{
			iVar0 = func_162(unk_0x33CD235DF1E6A94E());
			if (func_141(iVar0) && (!func_35(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_141(Global_106565.f_2357.f_539.f_4321))
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

int func_162(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		iVar1 = unk_0x541D5C57194E73C4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_163(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_163(int iParam0)
{
	if (func_141(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_164(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (*uParam0 == -1)
	{
		return 0;
	}
	else if (*uParam0 == 1)
	{
		return 1;
	}
	else if (*uParam0 == 0 || ((*uParam0 == 2 && uParam0->f_1 == 1) && iParam2))
	{
		if (iParam1 > 0)
		{
			*uParam0 = 2;
			uParam0->f_6 = iParam1;
		}
		else
		{
			*uParam0 = 1;
			uParam0->f_6 = 0;
		}
		uParam0->f_4 = unk_0xE3903F59E2F22150();
		uParam0->f_5 = unk_0xE3903F59E2F22150();
		uParam0->f_1 = iParam3;
		return 1;
	}
	return 0;
}

int func_165(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == 0)
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			if ((uParam0[iVar0 /*5*/])->f_4 == iParam1)
			{
				(uParam0[iVar0 /*5*/])->f_2 = 0;
				if (!(uParam0[iVar0 /*5*/])->f_1)
				{
					uParam0->f_982 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		unk_0xB815670C37E03CDE(iParam1);
		(*uParam0)[iVar1 /*5*/] = 1;
		(uParam0[iVar1 /*5*/])->f_3 = unk_0xE3903F59E2F22150();
		(uParam0[iVar1 /*5*/])->f_4 = iParam1;
		uParam0->f_982 = 1;
		return 1;
	}
	return 0;
}

int func_166(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x786AF4A44E1B5B4B(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_737)
	{
		if (uParam0->f_737[iVar0 /*5*/])
		{
			if (unk_0xCE3CFF625BEBAA04(uParam0->f_737[iVar0 /*5*/].f_4, sParam1))
			{
				uParam0->f_737[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_737[iVar0 /*5*/].f_1)
				{
					uParam0->f_982 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		unk_0x3C05A6D663EA1B6A(sParam1, false, -1);
		uParam0->f_737[iVar1 /*5*/] = 1;
		uParam0->f_737[iVar1 /*5*/].f_3 = unk_0xE3903F59E2F22150();
		uParam0->f_737[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_982 = 1;
		return 1;
	}
	return 0;
}

void func_167(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		switch ((*uParam0)[iVar0 /*8*/])
		{
			case 1:
				Stack.Push(uParam0[iVar0 /*8*/]);
				Call_Loc((uParam0[iVar0 /*8*/])->f_7);
				break;
			
			case 2:
				if ((unk_0xE3903F59E2F22150() - (uParam0[iVar0 /*8*/])->f_5) > (uParam0[iVar0 /*8*/])->f_6)
				{
					(*uParam0)[iVar0 /*8*/] = 1;
					(uParam0[iVar0 /*8*/])->f_6 = 0;
				}
				break;
		}
		iVar0++;
	}
}

void func_168()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	bVar2 = false;
	if (func_103(unk_0x33CD235DF1E6A94E(), vLocal_58, 1) < 70f)
	{
		unk_0x97EA1976BDB4A8CE();
	}
	if (iLocal_1297 == 9)
	{
		if (!iLocal_1296)
		{
			if (unk_0x09287BFEE1D9F6EF(unk_0x95B959F18401C09A(), 0))
			{
				unk_0xCF33FE51707573DB("SCRIPTED_SCANNER_REPORT_JSH_PREP_1A_01", 0f);
				iLocal_1296 = 1;
			}
		}
		if (unk_0x765F6FEEFF39224F(Local_29))
		{
			if (func_102(Local_29, unk_0x33CD235DF1E6A94E(), 1) > 300f)
			{
				unk_0x1F45B4626AC4A4C0(&Local_29);
			}
		}
	}
	if (unk_0x765F6FEEFF39224F(iLocal_1299) && unk_0x91D5C8283D19AF49(iLocal_1299, 0))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (unk_0x765F6FEEFF39224F(Local_46[iVar0 /*8*/]) && unk_0x91D5C8283D19AF49(Local_46[iVar0 /*8*/], 0))
			{
				if (unk_0x221C953018491A32(iLocal_1299, Local_46[iVar0 /*8*/]))
				{
					bVar2 = true;
				}
			}
			iVar0++;
		}
		if (!bVar2)
		{
			iLocal_1299 = 0;
		}
	}
	if (func_178())
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (unk_0x765F6FEEFF39224F(Local_46[iVar0 /*8*/]) && unk_0x91D5C8283D19AF49(Local_46[iVar0 /*8*/], 0))
			{
				if (unk_0x221C953018491A32(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), Local_46[iVar0 /*8*/]))
				{
					iLocal_1299 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
				}
			}
			iVar0++;
		}
	}
	func_171();
	if (iLocal_63 == 0)
	{
		if (!unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), 182.9537f, -3119.884f, 101.9226f, 115f, 260f, 120f, false, true, 0))
		{
			bVar3 = true;
		}
		iVar1 = 0;
		while (iVar1 < Local_28)
		{
			if (unk_0x765F6FEEFF39224F(Local_28[iVar1 /*110*/]))
			{
				if ((Local_28[iVar1 /*110*/].f_5 == 5 && func_102(unk_0x33CD235DF1E6A94E(), Local_28[iVar1 /*110*/], 1) > 300f) && func_103(unk_0x33CD235DF1E6A94E(), vLocal_58, 1) > 300f)
				{
					unk_0x4B8B69DAE5BAC592(&(Local_28[iVar1 /*110*/]));
				}
			}
			iVar1++;
		}
		iVar4 = 6;
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (unk_0x765F6FEEFF39224F(Local_46[iVar0 /*8*/]))
			{
				if (!unk_0x91D5C8283D19AF49(Local_46[iVar0 /*8*/], 0))
				{
					unk_0x65F544B458249682(&(Local_46[iVar0 /*8*/]));
					if (unk_0xE38E3CF1625A4145(Local_46[iVar0 /*8*/].f_1))
					{
						unk_0x1ABDB383C83A336A(&(Local_46[iVar0 /*8*/].f_1));
					}
					if (bVar3)
					{
						iVar4 = 1;
					}
					else
					{
						iVar4 = 2;
					}
				}
				else if (func_104(Local_46[iVar0 /*8*/]))
				{
					if (unk_0xE38E3CF1625A4145(Local_46[iVar0 /*8*/].f_1))
					{
						unk_0x1ABDB383C83A336A(&(Local_46[iVar0 /*8*/].f_1));
					}
					iVar4 = 3;
				}
				else if (!func_101(Local_46[iVar0 /*8*/]))
				{
					if (unk_0x65F35477FEAD6F0F(Local_46[iVar0 /*8*/]) == iLocal_1256)
					{
						if (iVar4 != 4)
						{
							iVar4 = 5;
						}
					}
					else
					{
						iVar4 = 4;
					}
				}
			}
			if (((((iLocal_1297 == 9 && func_97() != -1) && unk_0x765F6FEEFF39224F(Local_46[func_97() /*8*/])) && unk_0x91D5C8283D19AF49(Local_46[func_97() /*8*/], 0)) && !func_104(Local_46[func_97() /*8*/])) || (((iLocal_1297 == 10 && func_49() != -1) && unk_0x765F6FEEFF39224F(Local_46[func_49() /*8*/])) && unk_0x91D5C8283D19AF49(Local_46[func_49() /*8*/], 0)))
			{
				if (unk_0xE38E3CF1625A4145(Local_46[iVar0 /*8*/].f_1))
				{
					unk_0x1ABDB383C83A336A(&(Local_46[iVar0 /*8*/].f_1));
				}
			}
			else if ((((unk_0x765F6FEEFF39224F(Local_46[iVar0 /*8*/]) && unk_0x91D5C8283D19AF49(Local_46[iVar0 /*8*/], 0)) && !func_104(Local_46[iVar0 /*8*/])) && func_101(Local_46[iVar0 /*8*/])) && iLocal_64 == 0)
			{
				if (!unk_0xE38E3CF1625A4145(Local_46[iVar0 /*8*/].f_1))
				{
					Local_46[iVar0 /*8*/].f_1 = func_170(Local_46[iVar0 /*8*/], 0, 0);
					unk_0xC51C58C963968740(Local_46[iVar0 /*8*/].f_1, 1);
				}
			}
			iVar0++;
		}
		if (iLocal_1297 == 9 || iLocal_1297 == 10)
		{
			if (func_169("JHP1A_BKIN", 0, 0) || func_169("JHP1A_BKINANY", 0, 0))
			{
				unk_0xD362430CD61A9B08();
			}
		}
		else if (iLocal_64 == 0)
		{
			if (!iLocal_1291)
			{
				if (func_100(1) == 1)
				{
					func_105("JHP1A_BKIN", 7500, 1);
				}
				iLocal_1291 = 1;
			}
		}
		if (func_100(1) == 0)
		{
			if (iVar4 != 6)
			{
				func_283(iVar4);
			}
		}
	}
}

var func_169(char* sParam0, int iParam1, int iParam2)
{
	unk_0x1B3E16C485B8DD94(sParam0);
	if (iParam1 == 1)
	{
		unk_0xFA6BEE2B1507FF1E(iParam2);
	}
	return unk_0xC8F93D36F11F7BE8();
}

int func_170(int iParam0, bool bParam1, bool bParam2)
{
	return func_53(iParam0, !bParam1, bParam2);
}

void func_171()
{
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		if (unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), Local_46[3 /*8*/], 1))
		{
			iLocal_1297 = 11;
		}
		else if (func_177())
		{
			iLocal_1297 = 7;
		}
		else if (func_176())
		{
			iLocal_1297 = 6;
		}
		else if (func_98())
		{
			iLocal_1297 = 9;
			iLocal_1291 = 0;
		}
		else if (func_94())
		{
			iLocal_1297 = 10;
		}
		else if (func_175())
		{
			iLocal_1297 = 8;
		}
		else if (((unk_0x765F6FEEFF39224F(iLocal_1300) && unk_0x91D5C8283D19AF49(iLocal_1300, 0)) && !unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iLocal_1300, 1)) && unk_0xD4B4F68F3449CBEC(iLocal_1300, vLocal_58, 119.7228f, -3092.472f, 13.46126f, 44f, 0, true, 0))
		{
			iLocal_1297 = 5;
		}
		else if (((!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1) && unk_0x765F6FEEFF39224F(unk_0x8918EC905FC8975D())) && !func_174()) && unk_0xD4B4F68F3449CBEC(unk_0x8918EC905FC8975D(), vLocal_58, 119.7228f, -3092.472f, 13.46126f, 44f, 0, true, 0))
		{
			iLocal_1300 = unk_0x8918EC905FC8975D();
			iLocal_1297 = 5;
		}
		else if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1) && unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), vLocal_58, 119.7228f, -3092.472f, 13.46126f, 44f, 0, true, 0))
		{
			iLocal_1297 = 2;
		}
		else if (((unk_0x765F6FEEFF39224F(iLocal_1300) && unk_0x91D5C8283D19AF49(iLocal_1300, 0)) && !unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iLocal_1300, 1)) && (unk_0xD4B4F68F3449CBEC(iLocal_1300, 170.8236f, -3092.406f, 4.849259f, 154.33f, -3092.45f, 9.783653f, 14.0625f, 0, true, 0) || unk_0x18FB647D79B09657(iLocal_1300, 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, false, true, 0)))
		{
			iLocal_1297 = 4;
		}
		else if (((!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1) && unk_0x765F6FEEFF39224F(unk_0x8918EC905FC8975D())) && !func_174()) && (unk_0xD4B4F68F3449CBEC(unk_0x8918EC905FC8975D(), 170.8236f, -3092.406f, 4.849259f, 154.33f, -3092.45f, 9.783653f, 14.0625f, 0, true, 0) || unk_0x18FB647D79B09657(unk_0x8918EC905FC8975D(), 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, false, true, 0)))
		{
			iLocal_1300 = unk_0x8918EC905FC8975D();
			iLocal_1297 = 4;
		}
		else if ((unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1) && !func_174()) && unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), vLocal_58, 119.7228f, -3092.472f, 13.46126f, 44f, 0, true, 0))
		{
			iLocal_1300 = unk_0x8918EC905FC8975D();
			iLocal_1297 = 3;
		}
		else if ((unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1) && !func_174()) && unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), 170.8236f, -3092.406f, 4.849259f, 154.33f, -3092.45f, 9.783653f, 14.0625f, 0, true, 0))
		{
			iLocal_1300 = unk_0x8918EC905FC8975D();
			iLocal_1297 = 1;
		}
		else if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1) && unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, false, true, 0))
		{
			iLocal_1297 = 1;
		}
		else
		{
			iLocal_1300 = 0;
			if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1) && unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), 159.688f, -3092.446f, 7.314032f, 4.9375f, 7.3125f, 2.3125f, false, true, 0))
			{
				iLocal_1297 = 0;
			}
			else if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1) && unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, false, true, 0))
			{
				iLocal_1297 = 0;
			}
			else
			{
				iLocal_1297 = -1;
			}
		}
		if (iLocal_1297 == 1)
		{
			if (func_173(Local_28[0 /*110*/]))
			{
				func_172(Local_28[0 /*110*/], 120f, 20f, 120f, -90f, 90f);
			}
		}
		else if (func_173(Local_28[0 /*110*/]))
		{
			func_172(Local_28[0 /*110*/], 17.5f, 10f, 120f, -90f, 90f);
		}
		if (bLocal_1294)
		{
			unk_0x41E36A540F8F323F(unk_0x33CD235DF1E6A94E(), 155, true);
		}
		if ((iLocal_1297 != -1 && unk_0x09287BFEE1D9F6EF(unk_0x95B959F18401C09A(), 0)) && unk_0xB05EBD564C7A1480(Vector(101.9226f, -3119.884f, 182.9537f) - Vector(108.0625f, 239.75f, 94.25f), Vector(101.9226f, -3119.884f, 182.9537f) + Vector(108.0625f, 239.75f, 94.25f)))
		{
		}
	}
}

void func_172(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
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

int func_173(int iParam0)
{
	if (iParam0 != 0 && unk_0x765F6FEEFF39224F(iParam0))
	{
		switch (unk_0xF7CA9D10A9587F66(iParam0))
		{
			case 1:
				if (!unk_0xBC2FC12AD0FBF72E(unk_0x22B02EC53152632C(iParam0)))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0x91D5C8283D19AF49(unk_0xEAE1362B9F5C7B18(iParam0), 0))
				{
					return 1;
				}
				break;
			
			default:
				if (!unk_0xD62C4419A41F106A(iParam0, 0))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

int func_174()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (unk_0x765F6FEEFF39224F(Local_46[iVar0 /*8*/]) && unk_0x91D5C8283D19AF49(Local_46[iVar0 /*8*/], 0))
		{
			if (unk_0x8918EC905FC8975D() == Local_46[iVar0 /*8*/])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_175()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (unk_0x765F6FEEFF39224F(Local_46[iVar0 /*8*/]) && unk_0x91BBD269506D61D2(Local_46[iVar0 /*8*/], unk_0x33CD235DF1E6A94E(), 1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_176()
{
	int iVar0;
	
	if (unk_0x707FFB0E65C1C546(unk_0x33CD235DF1E6A94E()))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if ((unk_0x765F6FEEFF39224F(Local_46[iVar0 /*8*/]) && unk_0x91D5C8283D19AF49(Local_46[iVar0 /*8*/], 0)) && unk_0x35364EF44BEB123B(unk_0x33CD235DF1E6A94E()) == Local_46[iVar0 /*8*/])
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_177()
{
	int iVar0;
	
	if ((unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1) && !unk_0x5C415D10D5CBF689(unk_0x33CD235DF1E6A94E())) && !unk_0x707FFB0E65C1C546(unk_0x33CD235DF1E6A94E()))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (unk_0x765F6FEEFF39224F(Local_46[iVar0 /*8*/]) && unk_0x91D5C8283D19AF49(Local_46[iVar0 /*8*/], 0))
			{
				if (unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), Local_46[iVar0 /*8*/], 1))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_178()
{
	int iVar0;
	
	if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		iVar0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
		if (unk_0x91D5C8283D19AF49(iVar0, 0) && (unk_0x541D5C57194E73C4(iVar0) == joaat("towtruck") || unk_0x541D5C57194E73C4(iVar0) == joaat("towtruck2")))
		{
			return 1;
		}
	}
	return 0;
}

void func_179()
{
	int iVar0;
	
	if (unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		func_283(6);
	}
	iVar0 = 0;
	while (iVar0 < Local_28)
	{
		if (unk_0x765F6FEEFF39224F(Local_28[iVar0 /*110*/]))
		{
			if (Local_28[iVar0 /*110*/].f_93)
			{
				if (Local_28[iVar0 /*110*/].f_102)
				{
					func_180(Local_28[iVar0 /*110*/], &(Local_28[iVar0 /*110*/].f_94), 3, 0, 0, 0, -1082130432, 0, -1, -1, 1);
				}
				else
				{
					func_180(Local_28[iVar0 /*110*/], &(Local_28[iVar0 /*110*/].f_94), 2, 0, 0, 0, -1082130432, 0, -1, -1, 1);
				}
			}
			if (!func_173(Local_28[iVar0 /*110*/]))
			{
				if (Local_28[iVar0 /*110*/].f_103 == -1)
				{
					Local_28[iVar0 /*110*/].f_103 = unk_0xE3903F59E2F22150();
				}
				else if ((unk_0xE3903F59E2F22150() - Local_28[iVar0 /*110*/].f_103) >= 5000)
				{
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_46)
	{
		if (unk_0x765F6FEEFF39224F(Local_46[iVar0 /*8*/]) && Local_46[iVar0 /*8*/].f_7)
		{
			if (!func_173(Local_46[iVar0 /*8*/]))
			{
				if (unk_0xE38E3CF1625A4145(Local_46[iVar0 /*8*/].f_1))
				{
					unk_0x1ABDB383C83A336A(&(Local_46[iVar0 /*8*/].f_1));
				}
				unk_0x65F544B458249682(&(Local_46[iVar0 /*8*/]));
			}
		}
		iVar0++;
	}
}

int func_180(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0x3EE1295CEFBEFED4();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		if (!unk_0x9FC2A869F7656459(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0xE7E396453CA1FDA4(iParam0, 1);
			}
			else
			{
				unk_0x90CC3AC0A82D3ACE(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0xD8E6A14E9458A3BD(iParam0, iParam2);
			unk_0xCA42EF25F6E69D76(iParam0, fParam6);
			if (unk_0xE38E3CF1625A4145(*uParam1))
			{
				unk_0xC51C58C963968740(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0x1DFC768C95CA77C0(iParam0, iParam9);
		}
		unk_0xDEEEBBCE424E6F55(iParam0, iParam4);
		unk_0x0514F49E17636419(iParam0, iParam5);
		*uParam1 = unk_0x4C87FF5632A97BE5(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0xE38E3CF1625A4145(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0xB9E84A421C105943(*uParam1, iParam8);
				}
				if (!unk_0x786AF4A44E1B5B4B(sParam7))
				{
					unk_0xC6A42001AF5FDE0E("STRING");
					if (bParam10)
					{
						unk_0xD61E5ED1D4E687A5(sParam7);
					}
					else
					{
						unk_0xFA6BEE2B1507FF1E(sParam7);
					}
					unk_0xC35DA253230B9F05(*uParam1);
				}
				unk_0xC51C58C963968740(*uParam1, 7);
			}
		}
		if (!unk_0x0E4018692D92041D(uParam1->f_6, 2))
		{
			if (unk_0xE38E3CF1625A4145(*uParam1))
			{
				unk_0x8950ED5730F62EE8(&(uParam1->f_6), 2);
			}
		}
		if (unk_0xF0D230FB550CD6EB(iParam0, 0))
		{
			uParam1->f_1 = unk_0xD8E87EF121DF74DA(iParam0);
			if (!unk_0x0E4018692D92041D(uParam1->f_6, 3))
			{
				if (unk_0xE38E3CF1625A4145(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						unk_0xB9E84A421C105943(uParam1->f_1, iParam8);
					}
					if (!unk_0x786AF4A44E1B5B4B(sParam7))
					{
						unk_0xC6A42001AF5FDE0E("STRING");
						if (bParam10)
						{
							unk_0xD61E5ED1D4E687A5(sParam7);
						}
						else
						{
							unk_0xFA6BEE2B1507FF1E(sParam7);
						}
						unk_0xC35DA253230B9F05(uParam1->f_1);
					}
					unk_0xC51C58C963968740(uParam1->f_1, 7);
					unk_0x8950ED5730F62EE8(&(uParam1->f_6), 3);
				}
			}
			else if (!unk_0xE38E3CF1625A4145(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				unk_0xCE689A8E8C42ED78(&(uParam1->f_6), 3);
			}
		}
		else if (unk_0xE38E3CF1625A4145(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0xCE689A8E8C42ED78(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_181()
{
	vector3 vVar0;
	float fVar1;
	
	if (bLocal_66 == 1)
	{
		if (!unk_0xBB5E373390A5F824())
		{
			if (!unk_0x75A50A9E5219C397())
			{
				unk_0x7EDEAEAED85BEE4F(1000);
			}
		}
		else
		{
			if (unk_0x15DFB209D94E0277())
			{
				unk_0x5F62F61DA4BB2C0B(0);
				unk_0x4742207943D8EB65();
			}
			func_24(iLocal_67);
			unk_0x63F0B040CE6EDF0F(false, false, 3000, 1, 0, 0);
			unk_0xD362430CD61A9B08();
			unk_0xEDF90B96BED57BCE(1);
			func_8(1);
			if (!func_229())
			{
				func_228(iLocal_63, &vVar0, &fVar1);
				unk_0xBEADAF07D2339505(unk_0x33CD235DF1E6A94E(), vVar0, 1, false, 0, 1);
				unk_0x3C990C409B3845DE(unk_0x33CD235DF1E6A94E(), fVar1);
				unk_0xF70578F5CD9822CB(unk_0x33CD235DF1E6A94E(), true);
				func_226(&uLocal_70, vVar0, 50f, 0);
			}
			func_225(&uLocal_70);
			switch (iLocal_63)
			{
				case 0:
					func_165(&uLocal_70, joaat("burrito2"));
					func_165(&uLocal_70, joaat("s_m_y_pestcont_01"));
					func_165(&uLocal_70, joaat("s_m_m_security_01"));
					func_165(&uLocal_70, joaat("dilettante2"));
					func_165(&uLocal_70, joaat("p_amb_clipboard_01"));
					func_224(&uLocal_70, &cLocal_59);
					func_223(&uLocal_70, "misslsdhsclipboard@base");
					func_223(&uLocal_70, "misslsdhsclipboard@idle_a");
					func_223(&uLocal_70, "misstrevor3");
					func_222(&uLocal_70, iLocal_1256);
					if (((func_221() && !unk_0x444D956C7F94526E(func_220())) && !unk_0x57D74362A8BD1490(func_220())) && !unk_0x097E7778E3E162E8(func_220()))
					{
						func_165(&uLocal_70, func_220());
					}
					break;
				
				case 1:
					func_165(&uLocal_70, joaat("burrito2"));
					break;
			}
			while (!func_219(&uLocal_70))
			{
				wait(0);
				func_179();
			}
			switch (iLocal_63)
			{
				case 0:
					if (((func_221() && !unk_0x444D956C7F94526E(func_220())) && !unk_0x57D74362A8BD1490(func_220())) && !unk_0x097E7778E3E162E8(func_220()))
					{
						while (!func_218())
						{
							wait(0);
						}
						Local_46[4 /*8*/] = func_188(189.3979f, -2932.721f, 5.6127f, 180.5455f);
					}
					if (func_229())
					{
						if (unk_0x765F6FEEFF39224F(Local_46[4 /*8*/]))
						{
							func_185(Local_46[4 /*8*/], -1, 1);
						}
						else
						{
							func_185(0, -1, 1);
						}
					}
					else
					{
						unk_0xF70578F5CD9822CB(unk_0x33CD235DF1E6A94E(), false);
						if (unk_0x765F6FEEFF39224F(Local_46[4 /*8*/]))
						{
							unk_0x094626C0798AE1F8(unk_0x33CD235DF1E6A94E(), Local_46[4 /*8*/], -1);
						}
					}
					while (!func_182(0))
					{
						wait(0);
					}
					unk_0xC7E6A5D90DED6E0B(0f);
					unk_0xD6EDA274D82E8678(0f, 1065353216);
					break;
				
				case 1:
					if (!func_7(88))
					{
						Local_46[0 /*8*/] = unk_0xC651C43AB13A15E5(joaat("burrito2"), 693.725f, -1006.302f, 21.8355f, 359.884f, true, true, false);
						unk_0x9152A6430680BF0A(Local_46[0 /*8*/], 0);
						unk_0x1B2303F9DC2D90D5(Local_46[0 /*8*/], 1084227584);
					}
					if (func_229())
					{
						func_185(0, -1, 1);
					}
					else
					{
						unk_0xF70578F5CD9822CB(unk_0x33CD235DF1E6A94E(), false);
					}
					unk_0xBEADAF07D2339505(unk_0x33CD235DF1E6A94E(), 692.067f, -1004.812f, 21.9059f, 1, false, 0, 1);
					unk_0x3C990C409B3845DE(unk_0x33CD235DF1E6A94E(), 359.5735f);
					unk_0xC7E6A5D90DED6E0B(0f);
					unk_0xD6EDA274D82E8678(0f, 1065353216);
					break;
			}
			if (unk_0xBB5E373390A5F824() || !unk_0xD33DAC8D0D70A78C())
			{
				if (!func_7(88) || iLocal_63 != 1)
				{
					unk_0xACCDA78123DB57B0(800);
				}
			}
			bLocal_66 = false;
		}
	}
}

int func_182(bool bParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = 1;
	if (bParam0)
	{
		if (unk_0x765F6FEEFF39224F(Global_90209[0]))
		{
			Local_46[0 /*8*/] = Global_90209[0];
			unk_0x0D21E1FDE062ED99(Local_46[0 /*8*/], true, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0x765F6FEEFF39224F(Global_90209[1]))
		{
			Local_46[1 /*8*/] = Global_90209[1];
			unk_0x0D21E1FDE062ED99(Local_46[1 /*8*/], true, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0x765F6FEEFF39224F(Global_90209[2]))
		{
			Local_46[2 /*8*/] = Global_90209[2];
			unk_0x0D21E1FDE062ED99(Local_46[2 /*8*/], true, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0x765F6FEEFF39224F(Global_90209.f_9[0]))
		{
			Local_28[1 /*110*/] = Global_90209.f_9[0];
			if (!unk_0xBC2FC12AD0FBF72E(Local_28[1 /*110*/]))
			{
				unk_0x43D47AD82DA3C6EC(Local_28[1 /*110*/], false, 1);
			}
			unk_0x0D21E1FDE062ED99(Local_28[1 /*110*/], true, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0x765F6FEEFF39224F(Global_90209.f_28[0]))
		{
			Local_28[1 /*110*/].f_105 = Global_90209.f_28[0];
			unk_0x0D21E1FDE062ED99(Local_28[1 /*110*/].f_105, true, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0x765F6FEEFF39224F(Global_90209.f_9[2]))
		{
			Local_28[0 /*110*/] = Global_90209.f_9[2];
			if (!unk_0xBC2FC12AD0FBF72E(Local_28[0 /*110*/]))
			{
				unk_0x43D47AD82DA3C6EC(Local_28[0 /*110*/], false, 1);
			}
			unk_0x0D21E1FDE062ED99(Local_28[0 /*110*/], true, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0x765F6FEEFF39224F(Global_90209.f_9[3]))
		{
			Local_28[2 /*110*/] = Global_90209.f_9[3];
			if (!unk_0xBC2FC12AD0FBF72E(Local_28[3 /*110*/]))
			{
				unk_0x43D47AD82DA3C6EC(Local_28[2 /*110*/], false, 1);
			}
			unk_0x0D21E1FDE062ED99(Local_28[2 /*110*/], true, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0x765F6FEEFF39224F(Global_90209.f_9[4]))
		{
			Local_28[3 /*110*/] = Global_90209.f_9[4];
			if (!unk_0xBC2FC12AD0FBF72E(Local_28[3 /*110*/]))
			{
				unk_0x43D47AD82DA3C6EC(Local_28[3 /*110*/], false, 1);
			}
			unk_0x0D21E1FDE062ED99(Local_28[3 /*110*/], true, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0x765F6FEEFF39224F(Global_90209.f_9[5]))
		{
			Local_29 = Global_90209.f_9[5];
			if (!unk_0xBC2FC12AD0FBF72E(Local_29))
			{
				unk_0x43D47AD82DA3C6EC(Local_29, false, 1);
			}
			unk_0x0D21E1FDE062ED99(Local_29, true, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0x765F6FEEFF39224F(Global_90209[3]))
		{
			Local_46[3 /*8*/] = Global_90209[3];
			unk_0x0D21E1FDE062ED99(Local_46[3 /*8*/], true, 1);
		}
		else
		{
			bVar0 = true;
		}
	}
	else
	{
		if (!unk_0x765F6FEEFF39224F(Local_46[0 /*8*/]))
		{
			Local_46[0 /*8*/] = unk_0xC651C43AB13A15E5(joaat("burrito2"), 148.7243f, -3104.619f, 4.8962f, 179.6158f, true, true, false);
		}
		if (!unk_0x765F6FEEFF39224F(Local_46[1 /*8*/]))
		{
			Local_46[1 /*8*/] = unk_0xC651C43AB13A15E5(joaat("burrito2"), 145.9856f, -3080f, 4.8962f, 269.0827f, true, true, false);
		}
		if (!unk_0x765F6FEEFF39224F(Local_46[2 /*8*/]))
		{
			Local_46[2 /*8*/] = unk_0xC651C43AB13A15E5(joaat("burrito2"), 129.9696f, -3089.331f, 4.8796f, 269.9255f, true, true, false);
		}
		if (!unk_0x765F6FEEFF39224F(Local_28[1 /*110*/]))
		{
			Local_28[1 /*110*/] = unk_0x9BA5CF280376EEA4(26, joaat("s_m_y_pestcont_01"), 126.2174f, -3089.383f, 4.9199f, 275.4068f, 1, true);
			unk_0x7FC2040EB34E0E31(Local_28[1 /*110*/], 150, 0);
			unk_0x93AA93DA1B137032(Local_28[1 /*110*/], 8, 1, 0, 0);
			unk_0x93AA93DA1B137032(Local_28[1 /*110*/], 0, 0, 2, 0);
			unk_0x93AA93DA1B137032(Local_28[1 /*110*/], 3, 0, 1, 0);
			unk_0x93AA93DA1B137032(Local_28[1 /*110*/], 4, 0, 1, 0);
			unk_0x93AA93DA1B137032(Local_28[1 /*110*/], 8, 0, 0, 0);
			unk_0x93AA93DA1B137032(Local_28[1 /*110*/], 10, 1, 0, 0);
			unk_0x73D993BCA1CEC58D(Local_28[1 /*110*/], 0, 1, 0, false);
			unk_0x73D993BCA1CEC58D(Local_28[1 /*110*/], 1, 0, 0, false);
			unk_0x0F74B05FB8108F9C(Local_28[1 /*110*/], 2f);
		}
		if (!unk_0x765F6FEEFF39224F(Local_28[1 /*110*/].f_105))
		{
			Local_28[1 /*110*/].f_105 = unk_0x7CA67831169E8AA6(joaat("p_amb_clipboard_01"), unk_0x61B226C460A8FCC2(Local_28[1 /*110*/], 60309, 0f, 0f, 0f), true, true, false);
			unk_0x2F0A6390D863D337(Local_28[1 /*110*/].f_105, Local_28[1 /*110*/], unk_0xFCAF61876D23D31D(Local_28[1 /*110*/], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 1, 0, 2, 1);
		}
		if (!unk_0x765F6FEEFF39224F(Local_28[0 /*110*/]))
		{
			Local_28[0 /*110*/] = unk_0x9BA5CF280376EEA4(26, joaat("s_m_y_pestcont_01"), 155.74f, -3098.89f, 5.93f, 0f, 1, true);
			unk_0x93AA93DA1B137032(Local_28[0 /*110*/], 0, 0, 0, 0);
			unk_0x93AA93DA1B137032(Local_28[0 /*110*/], 3, 0, 0, 0);
			unk_0x93AA93DA1B137032(Local_28[0 /*110*/], 4, 0, 0, 0);
			unk_0x93AA93DA1B137032(Local_28[0 /*110*/], 8, 1, 0, 0);
			unk_0x93AA93DA1B137032(Local_28[0 /*110*/], 10, 0, 0, 0);
			unk_0x73D993BCA1CEC58D(Local_28[0 /*110*/], 0, 0, 0, false);
			unk_0x0F74B05FB8108F9C(Local_28[0 /*110*/], 2f);
		}
		if (!unk_0x765F6FEEFF39224F(Local_28[2 /*110*/]))
		{
			Local_28[2 /*110*/] = unk_0x9BA5CF280376EEA4(26, joaat("s_m_y_pestcont_01"), 159.8f, -3085.96f, 6f, 0f, 1, true);
			unk_0x93AA93DA1B137032(Local_28[2 /*110*/], 0, 0, 1, 0);
			unk_0x93AA93DA1B137032(Local_28[2 /*110*/], 3, 0, 2, 0);
			unk_0x93AA93DA1B137032(Local_28[2 /*110*/], 4, 0, 2, 0);
			unk_0x93AA93DA1B137032(Local_28[2 /*110*/], 8, 1, 0, 0);
			unk_0x93AA93DA1B137032(Local_28[2 /*110*/], 10, 1, 0, 0);
			unk_0x73D993BCA1CEC58D(Local_28[2 /*110*/], 1, 0, 0, false);
			unk_0x0F74B05FB8108F9C(Local_28[2 /*110*/], 2f);
		}
		if (!unk_0x765F6FEEFF39224F(Local_28[3 /*110*/]))
		{
			Local_28[3 /*110*/] = unk_0x9BA5CF280376EEA4(26, joaat("s_m_y_pestcont_01"), 159.06f, -3085f, 6.01f, 0f, 1, true);
			unk_0x93AA93DA1B137032(Local_28[3 /*110*/], 0, 1, 1, 0);
			unk_0x93AA93DA1B137032(Local_28[3 /*110*/], 3, 0, 3, 0);
			unk_0x93AA93DA1B137032(Local_28[3 /*110*/], 4, 0, 3, 0);
			unk_0x93AA93DA1B137032(Local_28[3 /*110*/], 8, 1, 0, 0);
			unk_0x93AA93DA1B137032(Local_28[3 /*110*/], 10, 0, 0, 0);
			unk_0x73D993BCA1CEC58D(Local_28[3 /*110*/], 0, 0, 0, false);
			unk_0x0F74B05FB8108F9C(Local_28[3 /*110*/], 2f);
		}
		if (!unk_0x765F6FEEFF39224F(Local_29) && !unk_0x765F6FEEFF39224F(Local_46[3 /*8*/]))
		{
			if (unk_0x13348E86D5B8A052() >= 5 && unk_0x13348E86D5B8A052() < 21)
			{
				Local_46[3 /*8*/] = unk_0xC651C43AB13A15E5(joaat("dilettante2"), 144.84f, -2982.75f, 5.32f, 266.5972f, true, true, false);
				Local_29 = unk_0xE196503B36B6194B(Local_46[3 /*8*/], 26, joaat("s_m_m_security_01"), -1, 1, true);
			}
			else
			{
				Local_46[3 /*8*/] = unk_0xC651C43AB13A15E5(joaat("dilettante2"), 169.3554f, -3110.025f, 4.8228f, 88.4411f, true, true, false);
				Local_29 = unk_0x9BA5CF280376EEA4(26, joaat("s_m_m_security_01"), 161.7414f, -3117.074f, 4.9643f, 333.7041f, 1, true);
			}
		}
	}
	if (unk_0x765F6FEEFF39224F(Local_46[0 /*8*/]))
	{
		func_184(Local_46[0 /*8*/], 0);
		unk_0xD303E20CB0AE4AD0(Local_46[0 /*8*/], 7);
		unk_0x83FF9FA196577C82(Local_46[0 /*8*/], 1);
		unk_0x09993E7216CF52C4(Local_46[0 /*8*/], true);
		Local_46[0 /*8*/].f_7 = 0;
	}
	if (unk_0x765F6FEEFF39224F(Local_46[1 /*8*/]))
	{
		func_184(Local_46[1 /*8*/], 1);
		unk_0x9FABD0AB045A5D6E(Local_46[1 /*8*/], true, true, 0);
		unk_0xD49D32559A1A6E45(Local_46[1 /*8*/], 4, false);
		unk_0x4A3BD9D189356B69(Local_46[1 /*8*/], 0, 1, 0);
		unk_0x4A3BD9D189356B69(Local_46[1 /*8*/], 4, 0, 1);
		unk_0x09993E7216CF52C4(Local_46[1 /*8*/], true);
		Local_46[1 /*8*/].f_7 = 0;
	}
	if (unk_0x765F6FEEFF39224F(Local_46[2 /*8*/]))
	{
		func_184(Local_46[2 /*8*/], 2);
		unk_0x4A3BD9D189356B69(Local_46[2 /*8*/], 2, 1, 0);
		unk_0x4A3BD9D189356B69(Local_46[2 /*8*/], 3, 1, 0);
		unk_0x09993E7216CF52C4(Local_46[2 /*8*/], true);
		Local_46[2 /*8*/].f_7 = 0;
	}
	if (unk_0x765F6FEEFF39224F(Local_28[1 /*110*/]))
	{
		unk_0xC6CDB5F78F0E3592(Local_28[1 /*110*/], &(Local_28[1 /*110*/].f_1));
		unk_0x4A852F02088ECC9D(Local_28[1 /*110*/], true);
		unk_0x0648A75D3F60E864(Local_28[1 /*110*/], iLocal_1254);
		unk_0x9FD099B0593CD91D(Local_28[1 /*110*/], true);
		func_172(Local_28[1 /*110*/], 20f, 5f, 90f, -90f, 90f);
		unk_0x5F9955D3E93BCC84(Local_28[1 /*110*/], 50f);
		StringCopy(&(Local_28[1 /*110*/].f_1), "foreman2(rear)", 16);
		Local_28[1 /*110*/].f_42 = 20f;
		Local_28[1 /*110*/].f_86 = 1;
		Local_28[1 /*110*/].f_87 = 1;
		Local_28[1 /*110*/].f_107 = joaat("p_amb_clipboard_01");
		Local_28[1 /*110*/].f_106 = 60309;
		Local_28[1 /*110*/].f_108 = 0;
	}
	if (unk_0x765F6FEEFF39224F(Local_28[0 /*110*/]))
	{
		unk_0xC6CDB5F78F0E3592(Local_28[0 /*110*/], &(Local_28[0 /*110*/].f_1));
		unk_0x4A852F02088ECC9D(Local_28[0 /*110*/], true);
		unk_0x0648A75D3F60E864(Local_28[0 /*110*/], iLocal_1254);
		unk_0x9FD099B0593CD91D(Local_28[0 /*110*/], true);
		func_172(Local_28[0 /*110*/], 17.5f, 10f, 120f, -90f, 90f);
		unk_0x5F9955D3E93BCC84(Local_28[0 /*110*/], 50f);
		StringCopy(&(Local_28[0 /*110*/].f_1), "foreman1(front)", 16);
		Local_28[0 /*110*/].f_86 = 1;
		Local_28[0 /*110*/].f_87 = 1;
		Local_28[0 /*110*/].f_42 = 17.5f;
	}
	if (unk_0x765F6FEEFF39224F(Local_28[2 /*110*/]))
	{
		unk_0xC6CDB5F78F0E3592(Local_28[2 /*110*/], &(Local_28[2 /*110*/].f_1));
		unk_0x4A852F02088ECC9D(Local_28[2 /*110*/], true);
		unk_0x0648A75D3F60E864(Local_28[2 /*110*/], iLocal_1254);
		func_172(Local_28[2 /*110*/], 20f, 5f, 90f, -90f, 90f);
		unk_0x9FD099B0593CD91D(Local_28[2 /*110*/], true);
		unk_0x5F9955D3E93BCC84(Local_28[2 /*110*/], 50f);
		StringCopy(&(Local_28[2 /*110*/].f_1), "front 1", 16);
		Local_28[2 /*110*/].f_86 = 0;
		Local_28[2 /*110*/].f_87 = 0;
		Local_28[2 /*110*/].f_42 = 17.5f;
	}
	if (unk_0x765F6FEEFF39224F(Local_28[3 /*110*/]))
	{
		unk_0xC6CDB5F78F0E3592(Local_28[3 /*110*/], &(Local_28[3 /*110*/].f_1));
		unk_0x4A852F02088ECC9D(Local_28[3 /*110*/], true);
		unk_0x0648A75D3F60E864(Local_28[3 /*110*/], iLocal_1254);
		unk_0x5F9955D3E93BCC84(Local_28[3 /*110*/], 50f);
		func_172(Local_28[3 /*110*/], 20f, 5f, 90f, -90f, 90f);
		unk_0x9FD099B0593CD91D(Local_28[3 /*110*/], true);
		StringCopy(&(Local_28[3 /*110*/].f_1), "front 2", 16);
		Local_28[3 /*110*/].f_86 = 0;
		Local_28[3 /*110*/].f_87 = 0;
		Local_28[3 /*110*/].f_42 = 17.5f;
	}
	if (unk_0x765F6FEEFF39224F(Local_29) && unk_0x765F6FEEFF39224F(Local_46[3 /*8*/]))
	{
		unk_0xC6CDB5F78F0E3592(Local_29, &(Local_29.f_1));
		unk_0x4A852F02088ECC9D(Local_29, true);
		unk_0x0648A75D3F60E864(Local_29, iLocal_1254);
		unk_0x9E280E42C0773A3A(Local_29, 2);
		unk_0x28F648743D7DE312(Local_29, 2, false);
		unk_0x697EBA5CF1A6AB57(Local_29, joaat("weapon_nightstick"), -1, false, true);
		unk_0xDE9FF07CFD5DC172(Local_29, 5);
		func_172(Local_29, 40f, 5f, 90f, -90f, 90f);
		StringCopy(&(Local_29.f_1), "sec", 16);
		Local_29.f_86 = 1;
		Local_29.f_87 = 1;
		Local_29.f_93 = 0;
		if (Global_90209.f_357 == 1)
		{
			if (!func_183(Local_29, 242628503, 1))
			{
				if (unk_0x52C7F2CBE015C31D(203.68f, -3132.46f, 4.79f, "WORLD_HUMAN_SMOKING", 1f, 1))
				{
					iLocal_1301 = 0;
					unk_0x99414FB2D30425C1(&iVar2);
					unk_0xF606706197A2C3A5(0, Local_46[3 /*8*/], &cLocal_59, 786599, 0, 0, -1, -1f, 0, 1073741824);
					unk_0x0FF06FD8DEB3AB01(0, Local_46[3 /*8*/], 0);
					unk_0xA9128AA30F3036C7(0, 203.68f, -3132.46f, 4.79f, 1f, 0);
					unk_0xC734F59A13D39AEF(iVar2);
					unk_0x13A2D602CD10CBAC(Local_29, iVar2);
					unk_0xA7A57E7757ED035E(&iVar2);
				}
				else
				{
					iVar1 = 0;
				}
			}
		}
		else if (!func_183(Local_29, -1680762137, 1))
		{
			if (unk_0x52C7F2CBE015C31D(162.69f, -3115.67f, 4.95f, "WORLD_HUMAN_SECURITY_SHINE_TORCH", 1f, 1))
			{
				iLocal_1301 = 1;
				unk_0x3AD1FD43EF012041(Local_29, 162.69f, -3115.67f, 4.95f, 1f, 0);
			}
			else
			{
				iVar1 = 0;
			}
		}
	}
	if (((((((((unk_0x765F6FEEFF39224F(Local_46[0 /*8*/]) && unk_0x765F6FEEFF39224F(Local_46[1 /*8*/])) && unk_0x765F6FEEFF39224F(Local_46[2 /*8*/])) && unk_0x765F6FEEFF39224F(Local_46[3 /*8*/])) && unk_0x765F6FEEFF39224F(Local_28[1 /*110*/])) && unk_0x765F6FEEFF39224F(Local_28[0 /*110*/])) && unk_0x765F6FEEFF39224F(Local_28[2 /*110*/])) && unk_0x765F6FEEFF39224F(Local_28[3 /*110*/])) && unk_0x765F6FEEFF39224F(Local_29)) && iVar1)
	{
		return 1;
	}
	else if (bVar0)
	{
		return 0;
	}
	return 0;
}

int func_183(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xD76D6BCC14B95CE1(iParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	else if (!bParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return 1;
		}
	}
	return 0;
}

void func_184(var uParam0, int iParam1)
{
	Global_93682.f_22[iParam1] = uParam0;
}

void func_185(int iParam0, int iParam1, int iParam2)
{
	if (func_187() && func_229())
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
		func_186(0);
	}
}

void func_186(int iParam0)
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

int func_187()
{
	if (Global_93682 == 10 || Global_93682 == 9)
	{
		return 1;
	}
	return 0;
}

int func_188(vector3 vParam0, float fParam1)
{
	return func_189(&(Global_100114.f_2890), vParam0, fParam1, 0);
}

int func_189(var uParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	int iVar0;
	vector3 vVar1;
	bool bVar2;
	var uVar3;
	int iVar4;
	
	if (func_217(uParam0))
	{
		if (func_149(vParam1, 0f, 0f, 0f, 0))
		{
			vParam1 = { *uParam0 };
			fParam2 = uParam0->f_6;
		}
		if (uParam0->f_12.f_66 == joaat("monster") || uParam0->f_12.f_66 == joaat("marshall"))
		{
			if (unk_0xC2F708DE8AD68197(vParam1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0, true))
			{
				vParam1 = { -850.93f, 158.82f, 65.7f };
				fParam2 = 89.5f;
			}
		}
		if (func_216(uParam0))
		{
			unk_0xCE04CE961AF41AB9(vParam1, 5f, 1, 0, 0, false);
			func_215(vParam1, 5f, 0);
			iVar0 = unk_0xC651C43AB13A15E5(uParam0->f_12.f_66, vParam1, fParam2, true, true, false);
			if (unk_0x765F6FEEFF39224F(iVar0))
			{
				vVar1 = { unk_0xFBB1F99A825CAB09(iVar0, true) };
				if (vdist2(vVar1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					unk_0xC7C47D4054903839(iVar0, vParam1, 0, 0, 1);
				}
				func_198(iVar0, &(uParam0->f_12), 0, 1);
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
							func_197(uParam0->f_11, 1);
						}
						else if (unk_0x9E374B5F44A76AE2(unk_0x541D5C57194E73C4(iVar0)))
						{
							func_197(uParam0->f_11, 2);
						}
					}
					unk_0xD5386CD3834C2895(iVar0, 0);
					unk_0x26D5EA44545890ED(iVar0, 0);
					unk_0x09993E7216CF52C4(iVar0, true);
					func_196(iVar0, uParam0->f_11);
				}
				else if ((!func_194(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && unk_0xCE3CFF625BEBAA04(unk_0xD178EF744F20B712(), "startup_positioning"))
				{
					iVar4 = func_193(iVar0);
					if (iVar4 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_190(iVar4);
					}
				}
				if (((Global_93682 != 13 && Global_93682 != 10) && Global_93682 != 11) && Global_93682 != 12)
				{
					if (unk_0x36163153849DFDA1(&(Global_93682.f_3)) == Global_71397)
					{
						if (uParam0->f_12.f_66 == Global_106565.f_32743.f_69[21 /*78*/].f_66)
						{
							func_143(24, 0);
							func_190(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_109(iVar0, uParam0->f_11);
				}
				unk_0x71CA80D41E1338B4(uParam0->f_12.f_66);
				vVar1 = { unk_0xFBB1F99A825CAB09(iVar0, true) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_190(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_138(&(Global_70409.f_555[0 /*21*/]), iParam0))
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
			if (((((iParam0 == 24 && func_145(iParam0, 0)) && Global_71318.f_66 == 0) && Global_106565.f_32743.f_1958[Global_70409.f_555[0 /*21*/].f_14] != 0) && Global_106565.f_32743.f_1958[Global_70409.f_555[0 /*21*/].f_14] > 3) && (!func_191(0, Global_70409.f_555[0 /*21*/].f_12) || !func_191(1, Global_70409.f_555[0 /*21*/].f_12)))
			{
				func_146(&(Global_106565.f_32743.f_69[Global_70409.f_555[0 /*21*/].f_14 /*78*/]), &Global_71318);
				Global_71396 = Global_106565.f_32743.f_5591;
			}
			func_143(iParam0, 0);
		}
	}
}

int func_191(int iParam0, int iParam1)
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
	if (iParam0 < 0 || iParam0 >= func_192(&(Global_106565.f_32743.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_112(Global_106565.f_32743.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_192(var uParam0)
{
	return *uParam0;
}

int func_193(int iParam0)
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

int func_194(int iParam0, vector3 vParam1, bool bParam2)
{
	int iVar0;
	var uVar1[3];
	int iVar2;
	int iVar3;
	
	iVar0 = unk_0x541D5C57194E73C4(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_195(iParam0, Global_70409.f_139[38], 0))
			{
				func_190(38);
				return 1;
			}
			break;
		
		case 1938952078:
			if (func_195(iParam0, Global_70409.f_139[43], 1))
			{
				func_190(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar2 = unk_0x2437CAE892D2F387(unk_0x33CD235DF1E6A94E(), &uVar1);
			iVar3 = 0;
			while (iVar3 <= (iVar2 - 1))
			{
				if (func_195(iParam0, uVar1[iVar3], 1) && func_60(unk_0xFBB1F99A825CAB09(uVar1[iVar3], true), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!bParam2 || func_149(vParam1, 0f, 0f, 0f, 0)) || unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(iParam0, true), unk_0xFBB1F99A825CAB09(uVar1[iVar3], true), true) < 10f)
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
					func_190(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((unk_0x765F6FEEFF39224F(Global_70409.f_484[20]) && unk_0x91D5C8283D19AF49(iParam0, 0)) && unk_0x91D5C8283D19AF49(Global_70409.f_484[20], 0))
			{
				if (unk_0x541D5C57194E73C4(Global_70409.f_484[20]) == joaat("swift2") && unk_0xE84981C3FDDC67C7(iParam0) == unk_0xE84981C3FDDC67C7(Global_70409.f_484[20]))
				{
					func_190(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_195(int iParam0, int iParam1, bool bParam2)
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

void func_196(int iParam0, int iParam1)
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

void func_197(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x765F6FEEFF39224F(Global_91043[iVar0]))
		{
			if (iParam0 == 145 || Global_91053[iVar0] == iParam0)
			{
				if (iParam1 == 0 || unk_0x541D5C57194E73C4(Global_91043[iVar0]) == func_139(iParam0, iParam1))
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

void func_198(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		if (!func_207(iParam0))
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
			if (unk_0x0E4018692D92041D(uParam1->f_77, func_151(iVar0 + 1)))
			{
			}
			else
			{
				unk_0x8950ED5730F62EE8(&(uParam1->f_77), func_151(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0x0E4018692D92041D(uParam1->f_77, func_151(iVar1 + 1)))
			{
			}
			else
			{
				unk_0x8950ED5730F62EE8(&(uParam1->f_77), func_151(iVar1 + 1));
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
		if (((unk_0x0E4018692D92041D(uParam1->f_77, 15) || func_206(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_205())
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
		if (uParam1->f_65 == -1 && !func_153(uParam1->f_66))
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
						func_204(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_204(iParam0, uParam1->f_69);
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
			func_199(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0x097E7778E3E162E8(uParam1->f_66) && !unk_0x444D956C7F94526E(uParam1->f_66))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (unk_0x0E4018692D92041D(uParam1->f_77, func_151(iVar2 + 1)))
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

int func_199(int iParam0, var uParam1, var uParam2)
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
	if (func_203(unk_0x541D5C57194E73C4(*iParam0), 1) && unk_0xEECA910C75BFF02B(*iParam0, 24) != func_202(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0xB4B3AEABE432069B(*iParam0, 24, func_202(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_201(iParam0);
	if (func_200(*iParam0))
	{
		unk_0xA155CCFA52A9A0C4(*iParam0, true);
		unk_0x09993E7216CF52C4(*iParam0, true);
	}
	return 1;
}

int func_200(int iParam0)
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

void func_201(var uParam0)
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

int func_202(int iParam0, int iParam1)
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

int func_203(int iParam0, int iParam1)
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

void func_204(int iParam0, int iParam1)
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

bool func_205()
{
	return unk_0xE9D7B652961D4AA3(-1691188696);
}

int func_206(int iParam0)
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

int func_207(int iParam0)
{
	if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		if (!func_213(unk_0x95B959F18401C09A(), -1))
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
	if (func_209(unk_0x95B959F18401C09A()) == 3)
	{
		if (unk_0x765F6FEEFF39224F(iParam0) && unk_0x91D5C8283D19AF49(iParam0, 0))
		{
			if (func_208(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_208(int iParam0)
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

int func_209(int iParam0)
{
	if (func_212(iParam0) == 233)
	{
		return func_210(iParam0);
	}
	return -1;
}

int func_210(int iParam0)
{
	if (func_211(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_181;
	}
	return -1;
}

int func_211(int iParam0, int iParam1)
{
	if (Global_1626536[iParam0 /*603*/].f_11.f_33 != -1 || (iParam1 && Global_1626536[iParam0 /*603*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_212(int iParam0)
{
	if (func_211(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_33;
	}
	return -1;
}

int func_213(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_214(iParam0, 1, 1))
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

int func_214(int iParam0, bool bParam1, bool bParam2)
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

void func_215(vector3 vParam0, float fParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_138(&(Global_70409.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0x16E00F066AFFEA0D(vParam0, Global_70409.f_555[0 /*21*/], bParam2) <= fParam1)
			{
				func_190(iVar0);
			}
		}
		iVar0++;
	}
}

int func_216(var uParam0)
{
	if (func_217(uParam0))
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

int func_217(var uParam0)
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_112(uParam0->f_12.f_66, 0))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == joaat("stunt") && func_60(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

bool func_218()
{
	return func_216(&(Global_100114.f_2890));
}

int func_219(var uParam0)
{
	if (func_230(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_220()
{
	return Global_100114.f_2890.f_12.f_66;
}

int func_221()
{
	return func_217(&(Global_100114.f_2890));
}

int func_222(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xDE9B75BB528AC06E(iParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_763)
	{
		if (uParam0->f_763[iVar0 /*5*/])
		{
			if (uParam0->f_763[iVar0 /*5*/].f_4 == iParam1)
			{
				uParam0->f_763[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_763[iVar0 /*5*/].f_1)
				{
					uParam0->f_982 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		unk_0xDDF57F769FD85704(iParam1);
		uParam0->f_763[iVar1 /*5*/] = 1;
		uParam0->f_763[iVar1 /*5*/].f_3 = unk_0xE3903F59E2F22150();
		uParam0->f_763[iVar1 /*5*/].f_4 = iParam1;
		uParam0->f_982 = 1;
		return 1;
	}
	return 0;
}

int func_223(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x786AF4A44E1B5B4B(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_273)
	{
		if (uParam0->f_273[iVar0 /*5*/])
		{
			if (unk_0xCE3CFF625BEBAA04(uParam0->f_273[iVar0 /*5*/].f_4, sParam1))
			{
				uParam0->f_273[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_273[iVar0 /*5*/].f_1)
				{
					uParam0->f_982 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		unk_0x0483D0035D6E46FD(sParam1);
		uParam0->f_273[iVar1 /*5*/] = 1;
		uParam0->f_273[iVar1 /*5*/].f_3 = unk_0xE3903F59E2F22150();
		uParam0->f_273[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_982 = 1;
		return 1;
	}
	return 0;
}

int func_224(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x786AF4A44E1B5B4B(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_374)
	{
		if (uParam0->f_374[iVar0 /*5*/])
		{
			if (unk_0xCE3CFF625BEBAA04(uParam0->f_374[iVar0 /*5*/].f_4, sParam1))
			{
				uParam0->f_374[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_374[iVar0 /*5*/].f_1)
				{
					uParam0->f_982 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		unk_0xBC6AA949398C551E(sParam1);
		uParam0->f_374[iVar1 /*5*/] = 1;
		uParam0->f_374[iVar1 /*5*/].f_3 = unk_0xE3903F59E2F22150();
		uParam0->f_374[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_982 = 1;
		return 1;
	}
	return 0;
}

void func_225(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			(uParam0[iVar0 /*5*/])->f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_151[iVar0 /*5*/])
		{
			uParam0->f_151[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_202[iVar0 /*7*/])
		{
			uParam0->f_202[iVar0 /*7*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_273[iVar0 /*5*/])
		{
			uParam0->f_273[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_374[iVar0 /*5*/])
		{
			uParam0->f_374[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (uParam0->f_475[iVar0 /*6*/])
		{
			uParam0->f_475[iVar0 /*6*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_656[iVar0 /*6*/])
		{
			uParam0->f_656[iVar0 /*6*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (uParam0->f_687[iVar0 /*7*/])
		{
			uParam0->f_687[iVar0 /*7*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_737[iVar0 /*5*/])
		{
			uParam0->f_737[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (uParam0->f_763[iVar0 /*5*/])
		{
			uParam0->f_763[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_879[iVar0 /*5*/])
		{
			uParam0->f_879[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_930[iVar0 /*5*/])
		{
			uParam0->f_930[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (uParam0->f_779[iVar0 /*5*/])
		{
			uParam0->f_779[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	if (uParam0->f_868)
	{
		uParam0->f_868.f_2 = 1;
	}
	if (uParam0->f_860)
	{
		uParam0->f_860.f_2 = 1;
	}
	if (uParam0->f_864)
	{
		uParam0->f_864.f_2 = 1;
	}
}

int func_226(var uParam0, vector3 vParam1, float fParam2, int iParam3)
{
	if (func_227(vParam1) || fParam2 <= 0f)
	{
		return 0;
	}
	if (uParam0->f_868)
	{
		if (func_149(uParam0->f_868.f_4, vParam1, 0) && uParam0->f_868.f_10 == fParam2)
		{
			uParam0->f_868.f_2 = 0;
			if (!uParam0->f_868.f_1)
			{
				uParam0->f_982 = 1;
				return 1;
			}
			else
			{
				return 1;
			}
		}
	}
	unk_0x1F6A09AE9372AE6C(vParam1, fParam2, iParam3);
	uParam0->f_868 = 1;
	uParam0->f_868.f_3 = unk_0xE3903F59E2F22150();
	uParam0->f_868.f_4 = { vParam1 };
	uParam0->f_868.f_7 = { 0f, 0f, 0f };
	uParam0->f_868.f_10 = fParam2;
	uParam0->f_982 = 1;
	return 1;
}

int func_227(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_228(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 183.533f, -2946.199f, 5.5113f };
			*uParam2 = 177.8164f;
			break;
		
		case 1:
			*uParam1 = { 692.067f, -1004.812f, 21.9059f };
			*uParam2 = 359.5735f;
			break;
	}
}

bool func_229()
{
	return unk_0x0E4018692D92041D(Global_93682.f_20, 13);
}

int func_230(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (uParam0->f_982)
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 < 30)
		{
			if ((*uParam0)[iVar1 /*5*/])
			{
				if (!(uParam0[iVar1 /*5*/])->f_1)
				{
					if (unk_0x5D98D654CDC2165A((uParam0[iVar1 /*5*/])->f_4))
					{
						(uParam0[iVar1 /*5*/])->f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if ((uParam0[iVar1 /*5*/])->f_2)
				{
					if ((uParam0[iVar1 /*5*/])->f_1)
					{
						unk_0x71CA80D41E1338B4((uParam0[iVar1 /*5*/])->f_4);
						func_232(uParam0[iVar1 /*5*/]);
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 20)
		{
			if (uParam0->f_273[iVar1 /*5*/])
			{
				if (!uParam0->f_273[iVar1 /*5*/].f_1)
				{
					if (unk_0xE9CCF312047EBEE0(uParam0->f_273[iVar1 /*5*/].f_4))
					{
						uParam0->f_273[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_273[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_273[iVar1 /*5*/].f_1)
					{
						unk_0xFF2DEA68E2D3602E(uParam0->f_273[iVar1 /*5*/].f_4);
						func_232(&(uParam0->f_273[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 20)
		{
			if (uParam0->f_374[iVar1 /*5*/])
			{
				if (!uParam0->f_374[iVar1 /*5*/].f_1)
				{
					if (unk_0xB6596C29F3179D0C(uParam0->f_374[iVar1 /*5*/].f_4))
					{
						uParam0->f_374[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_374[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_374[iVar1 /*5*/].f_1)
					{
						unk_0xF1C2AA9472B34A78(uParam0->f_374[iVar1 /*5*/].f_4);
						func_232(&(uParam0->f_374[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_656[iVar1 /*6*/])
			{
				if (!uParam0->f_656[iVar1 /*6*/].f_1)
				{
					if (unk_0x11AE7F6A404414C9(uParam0->f_656[iVar1 /*6*/].f_5))
					{
						uParam0->f_656[iVar1 /*6*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_656[iVar1 /*6*/].f_2)
				{
					if (uParam0->f_656[iVar1 /*6*/].f_1)
					{
						unk_0x83A1D480DB0B52CC(&(uParam0->f_656[iVar1 /*6*/].f_5));
						func_232(&(uParam0->f_656[iVar1 /*6*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 30)
		{
			if (uParam0->f_475[iVar1 /*6*/])
			{
				if (!uParam0->f_475[iVar1 /*6*/].f_1)
				{
					if (unk_0x371855A6F27F144B(uParam0->f_475[iVar1 /*6*/].f_5, uParam0->f_475[iVar1 /*6*/].f_4))
					{
						uParam0->f_475[iVar1 /*6*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_475[iVar1 /*6*/].f_2)
				{
					if (uParam0->f_475[iVar1 /*6*/].f_1)
					{
						unk_0x4167B14D99BD7D75(uParam0->f_475[iVar1 /*6*/].f_5, uParam0->f_475[iVar1 /*6*/].f_4);
						func_232(&(uParam0->f_475[iVar1 /*6*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_202[iVar1 /*7*/])
			{
				if (!uParam0->f_202[iVar1 /*7*/].f_1)
				{
					if (unk_0x045F471986387527(uParam0->f_202[iVar1 /*7*/].f_4))
					{
						uParam0->f_202[iVar1 /*7*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_202[iVar1 /*7*/].f_2)
				{
					if (uParam0->f_202[iVar1 /*7*/].f_1)
					{
						unk_0xDE17A10BAE2B2AF6(uParam0->f_202[iVar1 /*7*/].f_4);
						func_232(&(uParam0->f_202[iVar1 /*7*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_151[iVar1 /*5*/])
			{
				if (!uParam0->f_151[iVar1 /*5*/].f_1)
				{
					if (unk_0x4FFB62F63D342B1B(uParam0->f_151[iVar1 /*5*/].f_4))
					{
						uParam0->f_151[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_151[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_151[iVar1 /*5*/].f_1)
					{
						unk_0x4CDF0D2C93F8CCA7(uParam0->f_151[iVar1 /*5*/].f_4);
						func_232(&(uParam0->f_151[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_737[iVar1 /*5*/])
			{
				if (!uParam0->f_737[iVar1 /*5*/].f_1)
				{
					if (unk_0x3C05A6D663EA1B6A(uParam0->f_737[iVar1 /*5*/].f_4, false, -1))
					{
						uParam0->f_737[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_737[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_737[iVar1 /*5*/].f_1)
					{
						unk_0xB4F447A5639E2006(uParam0->f_737[iVar1 /*5*/].f_4);
						func_232(&(uParam0->f_737[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (uParam0->f_763[iVar1 /*5*/])
			{
				if (!uParam0->f_763[iVar1 /*5*/].f_1)
				{
					if (unk_0x5FC25A9F19EB39FA(uParam0->f_763[iVar1 /*5*/].f_4))
					{
						uParam0->f_763[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_763[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_763[iVar1 /*5*/].f_1)
					{
						unk_0x2F7BF094F3C2A257(uParam0->f_763[iVar1 /*5*/].f_4);
						func_232(&(uParam0->f_763[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 7)
		{
			if (!unk_0x786AF4A44E1B5B4B(uParam0->f_687[iVar1 /*7*/].f_4))
			{
				if (uParam0->f_687[iVar1 /*7*/])
				{
					iVar2 = unk_0xBB98A3BC7805ED64(uParam0->f_687[iVar1 /*7*/].f_5);
					if (!uParam0->f_687[iVar1 /*7*/].f_1)
					{
						switch (iVar2)
						{
							case 1:
							case 2:
								uParam0->f_687[iVar1 /*7*/].f_1 = 1;
								break;
							
							case 0:
								uParam0->f_687[iVar1 /*7*/].f_1 = 0;
								bVar0 = false;
								break;
							
							case 3:
								uParam0->f_687[iVar1 /*7*/].f_1 = 0;
								func_232(&(uParam0->f_687[iVar1 /*7*/]));
								break;
							
							case -1:
								uParam0->f_687[iVar1 /*7*/].f_1 = 0;
								unk_0x1AE762AFCA271E67(uParam0->f_687[iVar1 /*7*/].f_5);
								uParam0->f_687[iVar1 /*7*/] = 0;
								bVar0 = false;
								break;
							}
					}
				}
				else if (unk_0x5FC25A9F19EB39FA(uParam0->f_687[iVar1 /*7*/].f_6))
				{
					uParam0->f_687[iVar1 /*7*/].f_5 = unk_0x7DE9096B7972E0FC(uParam0->f_687[iVar1 /*7*/].f_4);
					uParam0->f_687[iVar1 /*7*/].f_3 = unk_0xE3903F59E2F22150();
					uParam0->f_687[iVar1 /*7*/] = 1;
				}
				else
				{
					bVar0 = false;
				}
				if (uParam0->f_687[iVar1 /*7*/].f_2)
				{
					if (uParam0->f_687[iVar1 /*7*/])
					{
						if (uParam0->f_687[iVar1 /*7*/].f_1)
						{
							unk_0x1AE762AFCA271E67(uParam0->f_687[iVar1 /*7*/].f_5);
							func_232(&(uParam0->f_687[iVar1 /*7*/]));
							uParam0->f_687[iVar1 /*7*/].f_4 = "";
						}
						else
						{
							bVar0 = false;
						}
					}
					else
					{
						func_232(&(uParam0->f_687[iVar1 /*7*/]));
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_879[iVar1 /*5*/])
			{
				if (!uParam0->f_879[iVar1 /*5*/].f_1)
				{
					if (unk_0x820B1FBDD1098917(uParam0->f_879[iVar1 /*5*/].f_4))
					{
						uParam0->f_879[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_879[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_879[iVar1 /*5*/].f_1)
					{
						unk_0x512E6AD7763520C1(uParam0->f_879[iVar1 /*5*/].f_4);
						func_232(&(uParam0->f_879[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_930[iVar1 /*5*/])
			{
				if (!uParam0->f_930[iVar1 /*5*/].f_1)
				{
					if (unk_0x80C90B71B6E0E34B(uParam0->f_930[iVar1 /*5*/].f_4))
					{
						uParam0->f_930[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_930[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_930[iVar1 /*5*/].f_1)
					{
						func_232(&(uParam0->f_930[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < uParam0->f_779)
		{
			if (uParam0->f_779[iVar1 /*5*/])
			{
				if (!uParam0->f_779[iVar1 /*5*/].f_1)
				{
					if (unk_0x8A7F864DAB908749(iVar1))
					{
						uParam0->f_779[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_779[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_779[iVar1 /*5*/].f_1)
					{
						unk_0xB073DB452891DC0B(iVar1, true);
						func_232(&(uParam0->f_779[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		if (uParam0->f_860)
		{
			if (!uParam0->f_860.f_1)
			{
				if (unk_0xD3957903B061A8C8())
				{
					uParam0->f_860.f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_860.f_2)
			{
				if (uParam0->f_860.f_1)
				{
					unk_0xAEF90BD69E5087CF();
					func_232(&(uParam0->f_860));
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (uParam0->f_864)
		{
			if (!uParam0->f_864.f_1)
			{
				if (unk_0x3397AE67F9ABE2C8())
				{
					uParam0->f_864.f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_864.f_2)
			{
				if (uParam0->f_864.f_1)
				{
					unk_0x18D63D71D9CB1524();
					func_232(&(uParam0->f_864));
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (uParam0->f_868 && unk_0xE980BAFD70E8A4B3())
		{
			if (!uParam0->f_868.f_1)
			{
				if (unk_0x4E1190A8D88ABDB7())
				{
					uParam0->f_868.f_1 = 1;
					if (uParam0->f_983)
					{
						unk_0xF70578F5CD9822CB(unk_0x33CD235DF1E6A94E(), false);
						func_231(uParam0);
						uParam0->f_983 = 0;
					}
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_868.f_2)
			{
				unk_0x4ABB9EF39DA515D7();
				func_232(&(uParam0->f_868));
			}
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_956[iVar1 /*5*/])
			{
				if (!uParam0->f_956[iVar1 /*5*/].f_1)
				{
					if (unk_0xD83C9F072D059CC4(uParam0->f_956[iVar1 /*5*/].f_4))
					{
						uParam0->f_956[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_956[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_956[iVar1 /*5*/].f_1)
					{
						func_232(&(uParam0->f_956[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		if (bVar0)
		{
			uParam0->f_982 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_231(var uParam0)
{
	if (unk_0xE980BAFD70E8A4B3())
	{
		unk_0x4ABB9EF39DA515D7();
		func_232(&(uParam0->f_868));
	}
}

void func_232(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1;
}

void func_233()
{
	if (func_234())
	{
		func_8(1);
		unk_0x5894DC159447E10A();
	}
}

int func_234()
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

void func_235()
{
	func_253(&(Local_1080[1 /*8*/]), 63223, "AI Controller");
	func_253(&(Local_1080[0 /*8*/]), 61588, "Dialogue");
	func_253(&(Local_1080[3 /*8*/]), 60615, "Alarms & Wanted Level");
	func_253(&(Local_1080[4 /*8*/]), 60063, "Music Manager");
}

void func_236(var uParam0)
{
	if (!func_239(uParam0))
	{
		if (uParam0->f_1 <= 4)
		{
			if ((unk_0x90D2ECC8A42DFF63(&cLocal_49) || unk_0x09287BFEE1D9F6EF(unk_0x95B959F18401C09A(), 0)) || func_22(&(Local_1080[3 /*8*/])))
			{
				unk_0x65BA35D6D61F1574("JHP1A_ATTACK");
				func_238(uParam0, 5, 0);
			}
		}
		switch (uParam0->f_1)
		{
			case 1:
				if (func_103(unk_0x33CD235DF1E6A94E(), 137.7f, -3092.81f, 4.9f, 1) < 60f)
				{
					unk_0x65BA35D6D61F1574("JHP1A_START");
					func_238(uParam0, 2, 0);
				}
				break;
			
			case 2:
				if (iLocal_1297 == 3 || iLocal_1297 == 2)
				{
					unk_0x65BA35D6D61F1574("JHP1A_WAREHOUSE");
					func_238(uParam0, 3, 0);
				}
				break;
			
			case 3:
				if (iLocal_1297 == 6 || iLocal_1297 == 9)
				{
					unk_0x65BA35D6D61F1574("JHP1A_VAN");
					func_238(uParam0, 4, 0);
				}
				break;
			
			case 4:
				if (!unk_0x09287BFEE1D9F6EF(unk_0x95B959F18401C09A(), 0))
				{
					if (iLocal_1297 == 9 && func_103(unk_0x33CD235DF1E6A94E(), 137.7f, -3092.81f, 4.9f, 1) >= 500f)
					{
						if (unk_0x7E2EAC500C9B54E3("JHP1A_RADIO_1"))
						{
							unk_0x65BA35D6D61F1574("JHP1A_RADIO_1");
							func_237(uParam0);
						}
					}
				}
				break;
			
			case 5:
				if ((unk_0x90D2ECC8A42DFF63(&cLocal_49) && unk_0x09287BFEE1D9F6EF(unk_0x95B959F18401C09A(), 0)) && iLocal_1293)
				{
					func_238(uParam0, 6, 0);
				}
				break;
			
			case 6:
				if (!unk_0x09287BFEE1D9F6EF(unk_0x95B959F18401C09A(), 0))
				{
					if (unk_0x7E2EAC500C9B54E3("JHP1A_RADIO_2"))
					{
						unk_0x65BA35D6D61F1574("JHP1A_RADIO_2");
						func_238(uParam0, 6, 0);
						func_237(uParam0);
					}
				}
				break;
			}
	}
	if (func_239(uParam0))
	{
		unk_0x4B06B5746CBEC99F(1f);
	}
}

void func_237(var uParam0)
{
	if (*uParam0 != 4)
	{
		*uParam0 = 4;
		uParam0->f_4 = unk_0xE3903F59E2F22150();
		uParam0->f_6 = 0;
		uParam0->f_1 = -1;
	}
}

void func_238(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 > 0)
	{
		*uParam0 = 2;
		uParam0->f_5 = unk_0xE3903F59E2F22150();
		uParam0->f_6 = iParam2;
	}
	uParam0->f_1 = iParam1;
}

int func_239(var uParam0)
{
	if (*uParam0 == 4)
	{
		return 1;
	}
	return 0;
}

void func_240(var uParam0)
{
	if (!func_239(uParam0))
	{
		switch (uParam0->f_1)
		{
			case 1:
				func_238(uParam0, 2, 2000);
				break;
			
			case 2:
				if (unk_0x80C90B71B6E0E34B(&cLocal_49))
				{
					unk_0xF2376062423B42B9(&cLocal_49, false);
					func_243(&cLocal_1082, vLocal_58, 30f, -1, 500, 1, 0);
					StringCopy(&cLocal_1082, "", 32);
					func_238(uParam0, 3, 5000);
				}
				break;
			
			case 3:
				func_241(&Local_29, 3, 1, "ALARM EVENT SET IT", 1, 0);
				unk_0x563D94E1BFFD5CC6(unk_0x95B959F18401C09A(), 2, 0);
				unk_0x66D901F8097E8E86(unk_0x95B959F18401C09A(), 0);
				unk_0xD875615F72CD34A6(2);
				unk_0xDF9905432E81DC6E(unk_0x95B959F18401C09A(), 0);
				unk_0x379324D4CAF6C2D1(0);
				unk_0xBE4EF1CC6597EA75(unk_0x95B959F18401C09A());
				unk_0xC6C5852786DF8AF4(unk_0x95B959F18401C09A());
				uParam0->f_2 = unk_0xE3903F59E2F22150() + 15000;
				func_238(uParam0, 4, 0);
				break;
			
			case 4:
				if (unk_0xE3903F59E2F22150() > uParam0->f_2)
				{
					unk_0xDF9905432E81DC6E(unk_0x95B959F18401C09A(), 1);
					unk_0x379324D4CAF6C2D1(1);
					unk_0xD875615F72CD34A6(5);
					iLocal_1293 = 1;
					func_237(uParam0);
				}
				unk_0xBE4EF1CC6597EA75(unk_0x95B959F18401C09A());
				unk_0xC6C5852786DF8AF4(unk_0x95B959F18401C09A());
				break;
			}
	}
}

int func_241(int iParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, bool bParam5)
{
	return func_242(iParam0, iParam1, sParam3, 0f, 0f, 0f, 0, bParam2, iParam4, bParam5);
}

int func_242(var uParam0, int iParam1, char* sParam2, vector3 vParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	if (func_173(*uParam0))
	{
		if (!bParam5 || iParam1 >= uParam0->f_5)
		{
			uParam0->f_38 = unk_0xE3903F59E2F22150();
			if (iParam1 != uParam0->f_5 || !unk_0xCE3CFF625BEBAA04(&(uParam0->f_9), sParam2))
			{
				uParam0->f_6 = uParam0->f_5;
				uParam0->f_5 = iParam1;
				uParam0->f_17 = { uParam0->f_9 };
				StringCopy(&(uParam0->f_9), sParam2, 32);
				if (bParam7)
				{
					uParam0->f_36 = 1;
					uParam0->f_35 = 0;
				}
				else
				{
					uParam0->f_36 = 0;
					uParam0->f_35 = uParam6;
				}
				uParam0->f_47 = 0;
				uParam0->f_46 = 0;
				uParam0->f_48 = 0;
				uParam0->f_37 = unk_0xE3903F59E2F22150();
				if (!func_227(vParam3))
				{
					uParam0->f_88 = { vParam3 };
				}
				if (iParam4 != 0 && unk_0x765F6FEEFF39224F(iParam4))
				{
					uParam0->f_91 = iParam4;
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_243(char* sParam0, vector3 vParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<32> Var0;
	
	Var0 = -1;
	StringCopy(&(Var0.f_1), sParam0, 64);
	StringCopy(&(Var0.f_17), "", 24);
	Var0.f_28 = iParam3;
	Var0.f_26 = fParam2;
	Var0.f_29 = iParam4;
	Var0.f_30 = iParam5;
	Var0.f_31 = iParam6;
	Var0.f_23 = { vParam1 };
	func_244(&Var0, 0);
}

int func_244(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	if ((unk_0x786AF4A44E1B5B4B(&(uParam0->f_1)) && *uParam0 != -1) && (!unk_0x765F6FEEFF39224F(Local_28[*uParam0 /*110*/]) || unk_0xBC2FC12AD0FBF72E(Local_28[*uParam0 /*110*/])))
	{
		return 0;
	}
	while (iVar0 != -1 && !unk_0x786AF4A44E1B5B4B(&(Local_1081[iVar0 /*32*/].f_1)))
	{
		iVar0++;
		if (iVar0 > (Local_1081 - 1))
		{
			iVar0 = -1;
		}
	}
	if (iVar0 != -1)
	{
		if (*uParam0 == -1 || (unk_0x786AF4A44E1B5B4B(sParam1) || unk_0xCE3CFF625BEBAA04(sParam1, &(uParam0->f_17))))
		{
			Local_1081[iVar0 /*32*/] = *uParam0;
			Local_1081[iVar0 /*32*/].f_1 = { uParam0->f_1 };
			if (*uParam0 != -1)
			{
				Local_1081[iVar0 /*32*/].f_23 = { unk_0xFBB1F99A825CAB09(Local_28[*uParam0 /*110*/], true) };
			}
			else
			{
				Local_1081[iVar0 /*32*/].f_23 = { uParam0->f_23 };
			}
			Local_1081[iVar0 /*32*/].f_26 = uParam0->f_26;
			Local_1081[iVar0 /*32*/].f_28 = uParam0->f_28;
			Local_1081[iVar0 /*32*/].f_29 = uParam0->f_29;
			Local_1081[iVar0 /*32*/].f_27 = unk_0xE3903F59E2F22150();
			Local_1081[iVar0 /*32*/].f_30 = uParam0->f_30;
			Local_1081[iVar0 /*32*/].f_31 = uParam0->f_31;
			iVar1 = 1;
		}
		else
		{
			iVar1 = 0;
		}
		*uParam0 = -1;
		StringCopy(&(uParam0->f_1), "", 64);
		uParam0->f_23 = { 0f, 0f, 0f };
		uParam0->f_26 = 0f;
		uParam0->f_28 = 0;
		uParam0->f_29 = 0;
		uParam0->f_27 = 0;
		uParam0->f_30 = 0;
		uParam0->f_31 = 0;
		return iVar1;
	}
	return 0;
}

void func_245(var uParam0)
{
	vector3 vVar0[24];
	bool bVar1;
	vector3 vVar2;
	
	if (!func_239(uParam0))
	{
		if (func_44())
		{
			iLocal_1253 = -1;
		}
		else if (iLocal_1253 == -1)
		{
			iLocal_1253 = unk_0xE3903F59E2F22150();
			iLocal_1276 = -1;
			iLocal_1277 = 1;
		}
		if (iLocal_1257 != -1 && !unk_0x786AF4A44E1B5B4B(&cLocal_1259))
		{
			if (((Local_28[iLocal_1257 /*110*/] != 0 && unk_0x765F6FEEFF39224F(Local_28[iLocal_1257 /*110*/])) && !unk_0xBC2FC12AD0FBF72E(Local_28[iLocal_1257 /*110*/])) && !unk_0x6536FCD126BB1C53(Local_28[iLocal_1257 /*110*/]))
			{
				if (!unk_0x3AF2B3B68DD52355(Local_28[iLocal_1257 /*110*/]))
				{
					if (func_44())
					{
						if (iLocal_1267 && (iLocal_1277 || iLocal_1258 > iLocal_1276))
						{
							if (bLocal_1278)
							{
								iLocal_1281 = iLocal_1272;
								iLocal_1282 = iLocal_1276;
								MemCopy(&Local_1283, {func_252()}, 4);
								MemCopy(&Local_1286, {func_251()}, 4);
								iLocal_1289 = iLocal_1277;
								bLocal_1290 = iLocal_1279;
							}
							if (iLocal_1268)
							{
								func_11();
							}
							else
							{
								func_41();
							}
						}
					}
					if (func_43())
					{
						if ((unk_0xE3903F59E2F22150() - iLocal_1253) > iLocal_1265)
						{
							if (func_250(iLocal_1257))
							{
								MemCopy(&cVar0, {Local_48}, 6);
							}
							else
							{
								StringCopy(&cVar0, "SOL1AUD", 24);
							}
							switch (iLocal_1257)
							{
								case 0:
									func_40(&uLocal_1087, 4, Local_28[0 /*110*/], "JHP1A_FOREMAN", 0, 1);
									break;
								
								case 1:
									func_40(&uLocal_1087, 5, Local_28[1 /*110*/], "JHP1A_FOREMAN2", 0, 1);
									break;
								
								case 2:
									func_40(&uLocal_1087, 4, Local_28[2 /*110*/], "CONSTRUCTION1", 0, 1);
									break;
								
								case 3:
									func_40(&uLocal_1087, 3, Local_28[3 /*110*/], "CONSTRUCTION2", 0, 1);
									break;
							}
							if (unk_0x786AF4A44E1B5B4B(&cLocal_1262))
							{
								if (func_249(&uLocal_1087, &cVar0, &cLocal_1259, 8, 0, 0, 0))
								{
									bVar1 = true;
								}
							}
							else if (func_248(&uLocal_1087, &cVar0, &cLocal_1259, &cLocal_1262, 8, 0, 0))
							{
								bVar1 = true;
							}
							if (bVar1)
							{
								func_244(&(Local_28[iLocal_1257 /*110*/].f_50), &cLocal_1259);
								iLocal_1276 = iLocal_1258;
								iLocal_1277 = iLocal_1269;
								bLocal_1278 = iLocal_1271;
								iLocal_1279 = iLocal_1270;
								iLocal_1257 = -1;
								iLocal_1258 = -1;
								StringCopy(&cLocal_1259, "", 16);
								iLocal_1265 = 0;
								fLocal_1266 = 9999999f;
								iLocal_1267 = 0;
								iLocal_1268 = 0;
								iLocal_1269 = 1;
								iLocal_1271 = 0;
								iLocal_1270 = 0;
							}
						}
					}
				}
			}
			else
			{
				iLocal_1257 = -1;
				iLocal_1258 = -1;
				StringCopy(&cLocal_1259, "", 16);
				iLocal_1265 = 0;
				fLocal_1266 = 9999999f;
				iLocal_1267 = 0;
				iLocal_1268 = 0;
				iLocal_1269 = 1;
				iLocal_1270 = 0;
			}
		}
		if (((func_44() && iLocal_1272 != -1) && iLocal_1279) && !unk_0x786AF4A44E1B5B4B(&cLocal_1273))
		{
			vVar2 = { unk_0xFBB1F99A825CAB09(Local_28[iLocal_1272 /*110*/], true) };
			if (func_103(unk_0x33CD235DF1E6A94E(), vVar2, 1) >= 25f)
			{
				iLocal_1281 = iLocal_1272;
				iLocal_1282 = iLocal_1276;
				MemCopy(&Local_1283, {func_252()}, 4);
				MemCopy(&Local_1286, {func_251()}, 4);
				iLocal_1289 = iLocal_1277;
				bLocal_1290 = iLocal_1279;
				func_11();
				iLocal_1272 = -1;
				iLocal_1276 = -1;
				StringCopy(&cLocal_1273, "", 16);
				iLocal_1277 = 0;
				iLocal_1279 = 0;
			}
		}
		if (iLocal_1281 != -1 && !unk_0x786AF4A44E1B5B4B(&Local_1283))
		{
			if (Local_28[iLocal_1281 /*110*/].f_5 > iLocal_1282)
			{
				iLocal_1281 = -1;
				iLocal_1282 = -1;
				StringCopy(&Local_1283, "", 16);
				StringCopy(&Local_1286, "", 16);
				iLocal_1289 = 1;
			}
		}
		if (iLocal_1257 == -1 && unk_0x786AF4A44E1B5B4B(&cLocal_1259))
		{
			if (func_43() && (unk_0xE3903F59E2F22150() - iLocal_1253) > 10000)
			{
				if (iLocal_1281 != -1 && !unk_0x786AF4A44E1B5B4B(&Local_1283))
				{
					func_247(iLocal_1281, &Local_1283, iLocal_1282, 0, 0, iLocal_1289, 0, 1, &Local_1286, bLocal_1290);
					iLocal_1281 = -1;
					iLocal_1282 = -1;
					StringCopy(&Local_1283, "", 16);
					StringCopy(&Local_1286, "", 16);
					iLocal_1289 = 1;
				}
			}
		}
	}
	func_246(bLocal_1290);
}

void func_246(bool bParam0)
{
	if (bParam0)
	{
	}
}

int func_247(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9)
{
	float fVar0;
	bool bVar1;
	
	fVar0 = func_102(Local_28[iParam0 /*110*/], unk_0x33CD235DF1E6A94E(), 1);
	if ((iParam2 > iLocal_1258 || iParam2 == 4) || ((iParam2 == iLocal_1258 && (fVar0 < fLocal_1266 || (func_250(iParam0) && !func_250(iLocal_1257)))) && iParam2 != 5))
	{
		switch (iParam2)
		{
			case 0:
				if (fVar0 < 20f)
				{
					bVar1 = true;
				}
				break;
			
			default:
				if (fVar0 < 40f)
				{
					bVar1 = true;
				}
				break;
		}
		if (bVar1)
		{
			iLocal_1257 = iParam0;
			iLocal_1258 = iParam2;
			StringCopy(&cLocal_1259, sParam1, 16);
			StringCopy(&cLocal_1262, sParam8, 16);
			fLocal_1266 = fVar0;
			iLocal_1267 = iParam3;
			iLocal_1268 = iParam4;
			iLocal_1265 = iParam6;
			iLocal_1269 = iParam5;
			iLocal_1271 = iParam7;
			iLocal_1270 = iParam9;
			return 1;
		}
	}
	return 0;
}

bool func_248(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_39(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_29(sParam2, iParam4, 0);
}

bool func_249(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_39(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_29(sParam2, iParam3, 0);
}

int func_250(int iParam0)
{
	if (iParam0 == 0 || iParam0 == 1)
	{
		return 1;
	}
	return 0;
}

struct<6> func_251()
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

struct<6> func_252()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15866 == 4)
	{
		return Global_15485;
	}
	return Var0;
}

int func_253(var uParam0, int iParam1, char* sParam2)
{
	if (*uParam0 != -1)
	{
		return 0;
	}
	*uParam0 = 0;
	uParam0->f_3 = sParam2;
	uParam0->f_7 = iParam1;
	return 1;
}

void func_254(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	bool bVar3;
	bool bVar4;
	
	if (!func_239(uParam0))
	{
		bLocal_1294 = true;
		if (!iLocal_1292)
		{
			if (func_175())
			{
				iLocal_1292 = 1;
				iLocal_1295 = unk_0xE3903F59E2F22150();
			}
		}
		else if ((unk_0xE3903F59E2F22150() - iLocal_1295) > 3000)
		{
			iLocal_1292 = 0;
			iLocal_1295 = -1;
		}
		iVar0 = 0;
		while (iVar0 < Local_28)
		{
			if (func_173(Local_28[iVar0 /*110*/]))
			{
				func_274(&(Local_28[iVar0 /*110*/]));
			}
			iVar0++;
		}
		if (func_173(Local_29))
		{
			func_274(&Local_29);
		}
		iVar1 = 0;
		while (iVar1 < Local_1081)
		{
			if (!unk_0x786AF4A44E1B5B4B(&(Local_1081[iVar1 /*32*/].f_1)) && Local_1081[iVar1 /*32*/].f_27 != -1)
			{
				if (Local_1081[iVar1 /*32*/].f_28 == -1 || (unk_0xE3903F59E2F22150() - Local_1081[iVar1 /*32*/].f_27) < Local_1081[iVar1 /*32*/].f_28)
				{
					if (Local_1081[iVar1 /*32*/].f_29 <= 0 || (unk_0xE3903F59E2F22150() - Local_1081[iVar1 /*32*/].f_27) > Local_1081[iVar1 /*32*/].f_29)
					{
						if (Local_1081[iVar1 /*32*/] != -1 && func_173(Local_28[Local_1081[iVar1 /*32*/] /*110*/]))
						{
							vVar2 = { unk_0xFBB1F99A825CAB09(Local_28[Local_1081[iVar1 /*32*/] /*110*/], true) };
							Local_1081[iVar1 /*32*/].f_23 = { vVar2 };
						}
						else
						{
							vVar2 = { Local_1081[iVar1 /*32*/].f_23 };
						}
						if (!func_22(&(Local_1080[3 /*8*/])))
						{
							if (Local_1081[iVar1 /*32*/].f_31 && unk_0x16E00F066AFFEA0D(vVar2, vLocal_58, true) < 35f)
							{
								func_164(&(Local_1080[3 /*8*/]), 0, 0, 1);
							}
						}
						iVar0 = 0;
						while (iVar0 < Local_28)
						{
							if (Local_1081[iVar1 /*32*/] == -1 || (iVar0 != Local_1081[iVar1 /*32*/] && Local_28[Local_1081[iVar1 /*32*/] /*110*/].f_5 >= Local_28[iVar0 /*110*/].f_5))
							{
								if (unk_0x765F6FEEFF39224F(Local_28[iVar0 /*110*/]) && !unk_0xBC2FC12AD0FBF72E(Local_28[iVar0 /*110*/]))
								{
									if (func_103(Local_28[iVar0 /*110*/], vVar2, 1) < (Local_1081[iVar1 /*32*/].f_26 + Local_28[iVar0 /*110*/].f_42))
									{
										Local_28[iVar0 /*110*/].f_34 = iVar1;
										if (Local_1081[iVar1 /*32*/].f_30)
										{
											if (!func_22(&(Local_1080[3 /*8*/])))
											{
												func_164(&(Local_1080[3 /*8*/]), 0, 0, 1);
												MemCopy(&cLocal_1082, {Local_1081[iVar1 /*32*/].f_1}, 8);
											}
										}
									}
								}
							}
							iVar0++;
						}
					}
				}
				else if ((unk_0xE3903F59E2F22150() - Local_1081[iVar1 /*32*/].f_27) > Local_1081[iVar1 /*32*/].f_28 + 2000)
				{
					StringCopy(&(Local_1081[iVar1 /*32*/].f_1), "", 64);
					Local_1081[iVar1 /*32*/] = -1;
					Local_1081[iVar1 /*32*/].f_23 = { 0f, 0f, 0f };
					Local_1081[iVar1 /*32*/].f_26 = 0f;
					Local_1081[iVar1 /*32*/].f_27 = -1;
					Local_1081[iVar1 /*32*/].f_28 = -1;
					Local_1081[iVar1 /*32*/].f_29 = -1;
				}
			}
			iVar1++;
		}
		iVar0 = 0;
		while (iVar0 < Local_28)
		{
			if (func_173(Local_28[iVar0 /*110*/]))
			{
				func_268(&(Local_28[iVar0 /*110*/]));
			}
			iVar0++;
		}
		if (func_173(Local_29))
		{
			func_259(&Local_29);
		}
		iVar0 = 0;
		while (iVar0 < Local_28)
		{
			if (func_173(Local_28[iVar0 /*110*/]))
			{
				func_258(&(Local_28[iVar0 /*110*/]));
			}
			iVar0++;
		}
		if (func_173(Local_29))
		{
			func_256(&Local_29);
		}
		iVar0 = 0;
		while (iVar0 < Local_28)
		{
			if (unk_0x765F6FEEFF39224F(Local_28[iVar0 /*110*/].f_105))
			{
				if (((!unk_0x765F6FEEFF39224F(Local_28[iVar0 /*110*/]) || unk_0xBC2FC12AD0FBF72E(Local_28[iVar0 /*110*/])) || unk_0x3D858AB1F749CC60(Local_28[iVar0 /*110*/])) || (Local_28[iVar0 /*110*/].f_108 && Local_28[iVar0 /*110*/].f_5 != 0))
				{
					bVar3 = true;
				}
				else if (Local_28[iVar0 /*110*/].f_5 != 0)
				{
					bVar4 = true;
				}
				if (bVar3 || bVar4)
				{
					if (unk_0x5A4FB33F5B279A76(Local_28[iVar0 /*110*/].f_105, Local_28[iVar0 /*110*/]))
					{
						unk_0x35F11A916FDFCF32(Local_28[iVar0 /*110*/].f_105, 1, 1);
					}
					if (bVar3)
					{
						unk_0x26ABAE1D971CEACD(&(Local_28[iVar0 /*110*/].f_105));
					}
					else if (bVar4)
					{
						unk_0xEC26F4BFC9942A0C(&(Local_28[iVar0 /*110*/].f_105));
					}
					Local_28[iVar0 /*110*/].f_109 = 0;
				}
			}
			else if (Local_28[iVar0 /*110*/].f_107 != 0 && Local_28[iVar0 /*110*/].f_106 != -1)
			{
				if (Local_28[iVar0 /*110*/].f_109 && unk_0x5D98D654CDC2165A(Local_28[iVar0 /*110*/].f_107))
				{
					Local_28[iVar0 /*110*/].f_105 = unk_0x7CA67831169E8AA6(Local_28[iVar0 /*110*/].f_107, unk_0x61B226C460A8FCC2(Local_28[iVar0 /*110*/], Local_28[iVar0 /*110*/].f_106, 0f, 0f, 0f), true, true, false);
					unk_0x2F0A6390D863D337(Local_28[iVar0 /*110*/].f_105, Local_28[iVar0 /*110*/], unk_0xFCAF61876D23D31D(Local_28[iVar0 /*110*/], Local_28[iVar0 /*110*/].f_106), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 1, 0, 2, 1);
					Local_28[iVar0 /*110*/].f_109 = 0;
				}
			}
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < Local_28)
		{
			if (unk_0x765F6FEEFF39224F(Local_28[iVar1 /*110*/]) && !unk_0xBC2FC12AD0FBF72E(Local_28[iVar1 /*110*/]))
			{
				unk_0x0D847D71D9E6142E(Local_28[iVar1 /*110*/]);
				unk_0x21A4E034EFC28450(Local_28[iVar1 /*110*/]);
			}
			iVar1++;
		}
		func_255();
	}
	if (func_239(uParam0))
	{
	}
}

void func_255()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (func_173(Local_46[iVar0 /*8*/]))
		{
			unk_0x0D847D71D9E6142E(Local_46[iVar0 /*8*/]);
		}
		iVar0++;
	}
}

void func_256(int iParam0)
{
	int iVar0;
	int iVar1;
	
	unk_0x07CA8FF5BA390419(*iParam0);
	if (func_257(*iParam0))
	{
		Local_29.f_46 = 0;
	}
	switch (iParam0->f_5)
	{
		case 0:
			if (unk_0x13348E86D5B8A052() >= 5 && unk_0x13348E86D5B8A052() < 21)
			{
				if ((!func_183(*iParam0, 1647992574, 1) && !func_183(*iParam0, 242628503, 1)) || iLocal_1301)
				{
					if (unk_0x89F20C4A841A3473(203.68f, -3132.46f, 4.79f, 1f, 1))
					{
						unk_0xA9128AA30F3036C7(*iParam0, 203.68f, -3132.46f, 4.79f, 1f, 0);
						iLocal_1301 = 0;
					}
				}
			}
			else if (!func_183(*iParam0, -1680762137, 1) || !iLocal_1301)
			{
				if (unk_0x89F20C4A841A3473(162.69f, -3115.67f, 4.95f, 1f, 1))
				{
					unk_0x46061A66C745755A(*iParam0, 162.69f, -3115.67f, 4.95f, 1f, 0);
					iLocal_1301 = 1;
				}
			}
			break;
		
		case 3:
			unk_0x92A2FAFA76B7EC9B(*iParam0, true, -1, "DEFAULT_ACTION");
			switch (unk_0x36163153849DFDA1(&(iParam0->f_9)))
			{
				case 1376342146:
				case 1681313069:
				case 1156217463:
					if (unk_0xEAF6E82C7BDE5A4C(*iParam0, joaat("weapon_pistol"), 0))
					{
						unk_0x681FB12989BD5DEA(*iParam0, joaat("weapon_pistol"));
					}
					if (!unk_0xEAF6E82C7BDE5A4C(*iParam0, joaat("weapon_nightstick"), 0))
					{
						unk_0x697EBA5CF1A6AB57(*iParam0, joaat("weapon_nightstick"), -1, true, true);
					}
					if (unk_0x96C4B46F194803A7(*iParam0, &iVar0, 1))
					{
						if (iVar0 != joaat("weapon_nightstick"))
						{
							unk_0x274C6068B660FFB4(*iParam0, joaat("weapon_nightstick"), false);
						}
					}
					break;
				
				case 953441746:
				case 1518302817:
				case -1298712083:
				case 185995093:
				case -1645534839:
				case 880647822:
				case 152436526:
				case 1921975061:
				case 1682434916:
				case -924218668:
				case 600040296:
					if (unk_0xEAF6E82C7BDE5A4C(*iParam0, joaat("weapon_nightstick"), 0))
					{
						unk_0x681FB12989BD5DEA(*iParam0, joaat("weapon_nightstick"));
					}
					if (!unk_0xEAF6E82C7BDE5A4C(*iParam0, joaat("weapon_pistol"), 0))
					{
						unk_0x697EBA5CF1A6AB57(*iParam0, joaat("weapon_pistol"), -1, true, true);
					}
					if (unk_0x96C4B46F194803A7(*iParam0, &iVar0, 1))
					{
						if (iVar0 != joaat("weapon_pistol"))
						{
							unk_0x274C6068B660FFB4(*iParam0, joaat("weapon_pistol"), false);
						}
					}
					break;
			}
			if (!func_183(*iParam0, 780511057, 1) || func_257(*iParam0))
			{
				unk_0x277716E9E7CC0692(*iParam0, unk_0x33CD235DF1E6A94E(), 0, 16);
				unk_0xC4A347124F39D998(*iParam0, unk_0x33CD235DF1E6A94E(), -1, 2048, 2);
			}
			break;
		
		case 1:
			switch (unk_0x36163153849DFDA1(&(iParam0->f_9)))
			{
				case 686645495:
					if (unk_0x765F6FEEFF39224F(iParam0->f_91))
					{
						if (!unk_0xC5DC7627BD3861CF(*iParam0, unk_0xFBB1F99A825CAB09(iParam0->f_91, true), 180f) && (unk_0xE3903F59E2F22150() - iParam0->f_37) < 5000)
						{
							if (!func_183(*iParam0, -875674219, 1) || func_257(*iParam0))
							{
								unk_0x11C4AF4137F2A4B5(*iParam0, iParam0->f_91, -1);
								unk_0xC4A347124F39D998(*iParam0, iParam0->f_91, -1, 2048, 2);
							}
						}
						else if (!func_183(*iParam0, -2015108952, 1) || func_257(*iParam0))
						{
							unk_0x1579D77E267228A1(*iParam0, iParam0->f_91, -1, 2f, -1f, 2.5f, 1f, 1);
						}
					}
					break;
				
				case -1225951737:
					if (iParam0->f_41 && !func_60(iParam0->f_88, iParam0->f_43, 1f, 0))
					{
						iParam0->f_88 = { iParam0->f_43 };
						iVar1 = 1;
					}
					if (!func_227(iParam0->f_88))
					{
						if (!unk_0xC5DC7627BD3861CF(*iParam0, iParam0->f_88, 90f) && (unk_0xE3903F59E2F22150() - iParam0->f_37) < 5000)
						{
							if ((!func_183(*iParam0, 1464580341, 1) || func_257(*iParam0)) || iVar1)
							{
								unk_0x9F878FE3F23E2C8B(*iParam0, iParam0->f_88, 0);
								unk_0xAE5B044AA2973E2A(*iParam0, iParam0->f_88, -1, 2048, 2);
							}
						}
						else if ((!func_183(*iParam0, 713668775, 1) || func_257(*iParam0)) || iVar1)
						{
							unk_0x7E268975AF5EA74F(*iParam0, iParam0->f_43, 1f, -1, 3f, 0, 1193033728);
						}
					}
					break;
				
				case -1940555668:
					break;
				
				case -927541383:
					if (!func_227(iParam0->f_88))
					{
						if (!func_183(*iParam0, 1464580341, 1) || func_257(*iParam0))
						{
							unk_0x9F878FE3F23E2C8B(*iParam0, iParam0->f_88, -1);
							unk_0xAE5B044AA2973E2A(*iParam0, iParam0->f_88, -1, 2048, 2);
						}
					}
					else
					{
						unk_0x7D575FC8F42508D8(*iParam0, -1);
					}
					break;
				
				case 58299323:
					if (unk_0x765F6FEEFF39224F(iParam0->f_91))
					{
						if (!func_183(*iParam0, -875674219, 1) || func_257(*iParam0))
						{
							unk_0x11C4AF4137F2A4B5(*iParam0, iParam0->f_91, -1);
							unk_0xC4A347124F39D998(*iParam0, iParam0->f_91, -1, 2048, 2);
						}
					}
					else
					{
						unk_0x7D575FC8F42508D8(*iParam0, -1);
					}
					break;
			}
			break;
	}
}

int func_257(struct<26> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84)
{
	if (Param0.f_5 != Param0.f_7 || !unk_0xCE3CFF625BEBAA04(&(Param0.f_9), &(Param0.f_25)))
	{
		return 1;
	}
	return 0;
}

void func_258(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2[24];
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	unk_0x07CA8FF5BA390419(*uParam0);
	if (func_257(*uParam0))
	{
		uParam0->f_46 = 0;
	}
	switch (uParam0->f_5)
	{
		case 0:
			iVar1 = 0;
			while (iVar1 < Local_28)
			{
				if (Local_28[iVar1 /*110*/] == *uParam0)
				{
					iVar0 = iVar1;
				}
				iVar1++;
			}
			if (iVar0 != -1)
			{
				switch (iVar0)
				{
					case 0:
						if (!func_183(*uParam0, 1647992574, 1))
						{
							if (unk_0x89F20C4A841A3473(155.74f, -3098.89f, 4.93f, 0.5f, 1))
							{
								unk_0xA9128AA30F3036C7(*uParam0, 155.74f, -3098.89f, 4.93f, 0.5f, -1);
							}
						}
						break;
					
					case 1:
						if ((!func_183(*uParam0, 242628503, 1) || func_257(*uParam0)) && unk_0xE9CCF312047EBEE0("misslsdhsclipboard@base"))
						{
							if (!unk_0x1CE8F0A08E65CA6A(*uParam0, "misslsdhsclipboard@base", "base", 3))
							{
								unk_0x99414FB2D30425C1(&iLocal_1255);
								if (!func_60(unk_0xFBB1F99A825CAB09(*uParam0, true), 126.8496f, -3089.249f, 4.9141f, 0.75f, 0))
								{
									unk_0x7E268975AF5EA74F(0, 126.8496f, -3089.249f, 4.9141f, 1f, -1, 0.5f, 0, 264.2812f);
								}
								unk_0x43EAD1F94EC8561F(0, 264.2812f, 0);
								unk_0x108754262311D34F(0, "misslsdhsclipboard@base", "base", 8f, -8f, -1, 1, 0, 0, 0, 0);
								unk_0xC734F59A13D39AEF(iLocal_1255);
								unk_0x13A2D602CD10CBAC(*uParam0, iLocal_1255);
								unk_0xA7A57E7757ED035E(&iLocal_1255);
							}
							if (unk_0x765F6FEEFF39224F(Local_46[2 /*8*/]))
							{
								unk_0xAE5B044AA2973E2A(*uParam0, unk_0x2D49816199C51B0C(Local_46[2 /*8*/], unk_0x89DDAAE6EFF42DD9(Local_46[2 /*8*/], "engine")), -1, 0, 2);
							}
							uParam0->f_46 = 0;
						}
						else if (unk_0xE9CCF312047EBEE0("misslsdhsclipboard@idle_a"))
						{
							switch (uParam0->f_46)
							{
								case 0:
								case 2:
									if (uParam0->f_46 == 0 && unk_0x24CA7139A01083BE(*uParam0) == 2)
									{
										uParam0->f_109 = 1;
									}
									if (((uParam0->f_46 == 0 && unk_0x24CA7139A01083BE(*uParam0) == 2) || uParam0->f_46 == 2) && unk_0xE3903F59E2F22150() > uParam0->f_37)
									{
										unk_0x99414FB2D30425C1(&iLocal_1255);
										switch (unk_0x9EC3B269A34A2BEE(0, 3))
										{
											case 0:
												StringCopy(&cVar2, "idle_a", 24);
												break;
											
											case 1:
												StringCopy(&cVar2, "idle_b", 24);
												break;
											
											case 2:
												StringCopy(&cVar2, "idle_c", 24);
												break;
										}
										unk_0x108754262311D34F(0, "misslsdhsclipboard@idle_a", &cVar2, 8f, -8f, -1, 0, 0, 0, 0, 0);
										unk_0x108754262311D34F(0, "misslsdhsclipboard@base", "base", 8f, -8f, -1, 1, 0, 0, 0, 0);
										unk_0xC734F59A13D39AEF(iLocal_1255);
										unk_0x13A2D602CD10CBAC(*uParam0, iLocal_1255);
										unk_0xA7A57E7757ED035E(&iLocal_1255);
										uParam0->f_46 = 1;
									}
									break;
								
								case 1:
									if (unk_0x24CA7139A01083BE(*uParam0) == 1)
									{
										uParam0->f_46++;
									}
									break;
								}
						}
						break;
					
					case 2:
					case 3:
						if (!func_183(*uParam0, 1647992574, 1))
						{
							if (unk_0x89F20C4A841A3473(159.82f, -3085.93f, 5f, 0.1f, 1))
							{
								unk_0xA9128AA30F3036C7(*uParam0, 159.82f, -3085.93f, 5f, 0.1f, -1);
							}
							else if (unk_0x89F20C4A841A3473(160.15f, -3084.79f, 4.99f, 0.1f, 1))
							{
								unk_0xA9128AA30F3036C7(*uParam0, 160.15f, -3084.79f, 4.99f, 0.1f, -1);
							}
							else if (unk_0x89F20C4A841A3473(159.09f, -3085.02f, 5.01f, 0.1f, 1))
							{
								unk_0xA9128AA30F3036C7(*uParam0, 159.09f, -3085.02f, 5.01f, 0.1f, -1);
							}
						}
						break;
					}
			}
			break;
		
		case 1:
			switch (unk_0x36163153849DFDA1(&(uParam0->f_9)))
			{
				case 2074432461:
				case 356486511:
				case -414594135:
				case 1260350710:
					if (unk_0x765F6FEEFF39224F(uParam0->f_91))
					{
						if (!unk_0xC5DC7627BD3861CF(*uParam0, unk_0xFBB1F99A825CAB09(uParam0->f_91, true), 180f) && (unk_0xE3903F59E2F22150() - uParam0->f_37) < 5000)
						{
							if (!func_183(*uParam0, -875674219, 1) || func_257(*uParam0))
							{
								unk_0x11C4AF4137F2A4B5(*uParam0, uParam0->f_91, -1);
								unk_0xC4A347124F39D998(*uParam0, uParam0->f_91, -1, 2048, 2);
							}
						}
						else if (!func_183(*uParam0, -2015108952, 1) || func_257(*uParam0))
						{
							unk_0x1579D77E267228A1(*uParam0, uParam0->f_91, -1, 2f, -1f, 2.5f, 1f, 1);
						}
					}
					break;
				
				case -1225951737:
					if (uParam0->f_41 && !func_60(uParam0->f_88, uParam0->f_43, 1f, 0))
					{
						uParam0->f_88 = { uParam0->f_43 };
						iVar3 = 1;
					}
					if (!func_227(uParam0->f_88))
					{
						if (!unk_0xC5DC7627BD3861CF(*uParam0, uParam0->f_88, 90f) && (unk_0xE3903F59E2F22150() - uParam0->f_37) < 5000)
						{
							if ((!func_183(*uParam0, 1464580341, 1) || func_257(*uParam0)) || iVar3)
							{
								unk_0x9F878FE3F23E2C8B(*uParam0, uParam0->f_88, 0);
								unk_0xAE5B044AA2973E2A(*uParam0, uParam0->f_88, -1, 2048, 2);
							}
						}
						else if ((!func_183(*uParam0, 713668775, 1) || func_257(*uParam0)) || iVar3)
						{
							unk_0x7E268975AF5EA74F(*uParam0, uParam0->f_43, 1f, -1, 3f, 0, 1193033728);
						}
					}
					break;
				
				case -1940555668:
					break;
				
				case -927541383:
					if (!func_227(uParam0->f_88))
					{
						if (!func_183(*uParam0, 1464580341, 1) || func_257(*uParam0))
						{
							unk_0x9F878FE3F23E2C8B(*uParam0, uParam0->f_88, -1);
							unk_0xAE5B044AA2973E2A(*uParam0, uParam0->f_88, -1, 2048, 2);
						}
					}
					else
					{
						unk_0x7D575FC8F42508D8(*uParam0, -1);
					}
					break;
				
				case 58299323:
					if (unk_0x765F6FEEFF39224F(uParam0->f_91))
					{
						if (!func_183(*uParam0, -875674219, 1) || func_257(*uParam0))
						{
							unk_0x11C4AF4137F2A4B5(*uParam0, uParam0->f_91, -1);
							unk_0xC4A347124F39D998(*uParam0, uParam0->f_91, -1, 2048, 2);
						}
					}
					else
					{
						unk_0x7D575FC8F42508D8(*uParam0, -1);
					}
					break;
			}
			break;
		
		case 2:
			if (((unk_0xCE3CFF625BEBAA04(&(uParam0->f_9), "ENT_FOOT_LEAVE") || unk_0xCE3CFF625BEBAA04(&(uParam0->f_9), "ENT_VEH_LEAVE")) || unk_0xCE3CFF625BEBAA04(&(uParam0->f_9), "WH_FOOT_LEAVE")) || unk_0xCE3CFF625BEBAA04(&(uParam0->f_9), "WH_VEH_LEAVE"))
			{
				if ((!func_183(*uParam0, 242628503, 1) || !unk_0x910FF514D7BC5674(*uParam0, unk_0x33CD235DF1E6A94E(), 90f)) || func_257(*uParam0))
				{
					unk_0x99414FB2D30425C1(&iLocal_1255);
					unk_0x11C4AF4137F2A4B5(0, unk_0x33CD235DF1E6A94E(), 0);
					unk_0x7D575FC8F42508D8(0, 2000);
					unk_0x656E3BB78935070E(iLocal_1255, 1);
					unk_0xC734F59A13D39AEF(iLocal_1255);
					unk_0x13A2D602CD10CBAC(*uParam0, iLocal_1255);
					unk_0xA7A57E7757ED035E(&iLocal_1255);
					unk_0xC4A347124F39D998(*uParam0, unk_0x33CD235DF1E6A94E(), -1, 2048, 2);
				}
			}
			else
			{
				if (unk_0x765F6FEEFF39224F(iLocal_1300) && unk_0x91D5C8283D19AF49(iLocal_1300, 0))
				{
					fVar6 = func_102(unk_0x33CD235DF1E6A94E(), iLocal_1300, 1);
				}
				if ((iLocal_1297 == 3 || iLocal_1297 == 2) || iLocal_1297 == 8)
				{
					iVar4 = unk_0x33CD235DF1E6A94E();
					fVar7 = 2f;
				}
				else if (iLocal_1297 == 0 || iLocal_1297 == 1)
				{
					iVar4 = unk_0x33CD235DF1E6A94E();
					fVar7 = 1f;
				}
				else if (iLocal_1297 == 5 && unk_0x765F6FEEFF39224F(iLocal_1300))
				{
					if (fVar6 > 10f)
					{
						iVar4 = unk_0x33CD235DF1E6A94E();
						fVar7 = 2f;
					}
					else
					{
						iVar4 = iLocal_1300;
						fVar7 = 2f;
					}
				}
				else if (iLocal_1297 == 4 && unk_0x765F6FEEFF39224F(iLocal_1300))
				{
					iVar4 = iLocal_1300;
					fVar7 = 1f;
				}
				if (unk_0x765F6FEEFF39224F(iVar4))
				{
					fVar5 = func_102(*uParam0, iVar4, 1);
				}
				if (fVar5 <= 7.5f)
				{
					if (((!func_183(*uParam0, 242628503, 1) && !func_183(*uParam0, 1227113341, 1)) || !unk_0x910FF514D7BC5674(*uParam0, unk_0x33CD235DF1E6A94E(), 90f)) || func_257(*uParam0))
					{
						unk_0x99414FB2D30425C1(&iLocal_1255);
						unk_0x11C4AF4137F2A4B5(0, unk_0x33CD235DF1E6A94E(), 0);
						unk_0x7D575FC8F42508D8(0, 2000);
						unk_0x656E3BB78935070E(iLocal_1255, 1);
						unk_0xC734F59A13D39AEF(iLocal_1255);
						unk_0x13A2D602CD10CBAC(*uParam0, iLocal_1255);
						unk_0xA7A57E7757ED035E(&iLocal_1255);
						unk_0xC4A347124F39D998(*uParam0, unk_0x33CD235DF1E6A94E(), -1, 2048, 2);
					}
				}
				else if (!func_183(*uParam0, 1227113341, 1) || func_257(*uParam0))
				{
					if (fVar7 > 1f)
					{
						fVar8 = 6f;
					}
					else
					{
						fVar8 = 3f;
					}
					unk_0x3C0F6044C54799A8(*uParam0, iVar4, -1, fVar8, fVar7, 1073741824, 0);
					unk_0xC4A347124F39D998(*uParam0, unk_0x33CD235DF1E6A94E(), -1, 2048, 2);
				}
			}
			break;
		
		case 3:
			switch (unk_0x36163153849DFDA1(&(uParam0->f_9)))
			{
				case 1376342146:
				case 1681313069:
				case 1156217463:
				case 1568162790:
				case 1682434916:
				case -924218668:
				case 2056033185:
				case 185995093:
					if (unk_0x96C4B46F194803A7(*uParam0, &iVar9, 1))
					{
						if (iVar9 != joaat("weapon_unarmed"))
						{
							unk_0x274C6068B660FFB4(*uParam0, joaat("weapon_unarmed"), false);
						}
					}
					if (!func_183(*uParam0, 780511057, 1))
					{
						unk_0x277716E9E7CC0692(*uParam0, unk_0x33CD235DF1E6A94E(), 0, 16);
					}
					break;
				
				case 1093888274:
					if ((!func_183(*uParam0, 242628503, 1) || !unk_0x910FF514D7BC5674(*uParam0, unk_0x33CD235DF1E6A94E(), 90f)) || func_257(*uParam0))
					{
						unk_0x99414FB2D30425C1(&iLocal_1255);
						unk_0x11C4AF4137F2A4B5(0, unk_0x33CD235DF1E6A94E(), 0);
						unk_0x7D575FC8F42508D8(0, 2000);
						unk_0x656E3BB78935070E(iLocal_1255, 1);
						unk_0xC734F59A13D39AEF(iLocal_1255);
						unk_0x13A2D602CD10CBAC(*uParam0, iLocal_1255);
						unk_0xA7A57E7757ED035E(&iLocal_1255);
						unk_0xC4A347124F39D998(*uParam0, unk_0x33CD235DF1E6A94E(), -1, 2048, 2);
					}
					break;
			}
			break;
		
		case 5:
			if (func_103(*uParam0, 177.7484f, -3240.897f, 4.6079f, 1) < 15f)
			{
				if (!func_183(*uParam0, 1805844857, 1))
				{
					unk_0xECCD4FDA45197F97(*uParam0, unk_0x33CD235DF1E6A94E(), 1000f, -1, 0, 0);
				}
			}
			else if ((!func_183(*uParam0, 1805844857, 1) && !func_183(*uParam0, 713668775, 1)) || func_257(*uParam0))
			{
				unk_0x7E268975AF5EA74F(*uParam0, 177.7484f, -3240.897f, 4.6079f, 3f, -1, 1048576000, 1, 1193033728);
			}
			break;
		
		case 4:
			switch (unk_0x36163153849DFDA1(&(uParam0->f_9)))
			{
				case -1645534839:
					if (!func_183(*uParam0, -1519143300, 1) || func_257(*uParam0))
					{
						unk_0x8CF360BBBD42762D(*uParam0, -1, unk_0x33CD235DF1E6A94E(), 0, 1);
					}
					break;
			}
			break;
	}
}

void func_259(int iParam0)
{
	var uVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	
	unk_0x96C4B46F194803A7(unk_0x33CD235DF1E6A94E(), &uVar0, 1);
	fVar1 = func_102(unk_0x33CD235DF1E6A94E(), *iParam0, 1);
	if (unk_0x1235B764F6C5379B(*iParam0))
	{
		iVar3 = 1;
	}
	if (unk_0x91BBD269506D61D2(*iParam0, unk_0x33CD235DF1E6A94E(), 1))
	{
		if (unk_0x3771DEF507BF2843(*iParam0, joaat("weapon_unarmed"), 0))
		{
			iVar2 = 1;
		}
	}
	uVar4 = func_266(*iParam0, &uVar5, &bVar6, &bVar7);
	if ((uVar4 && uVar5) && !bVar7)
	{
		if (bVar6)
		{
			func_241(iParam0, 3, 1, "PLAYER_KILLED", 1, 0);
		}
		else
		{
			func_241(iParam0, 3, 1, "KILLED", 1, 0);
		}
	}
	else if (((((unk_0x5A55F54738BBF615(*iParam0, 122) || unk_0x5A55F54738BBF615(*iParam0, 123)) || unk_0x5A55F54738BBF615(*iParam0, 124)) || unk_0x5A55F54738BBF615(*iParam0, 22)) || unk_0x5A55F54738BBF615(*iParam0, 23)) || unk_0x5A55F54738BBF615(*iParam0, 86))
	{
		func_241(iParam0, 3, 1, "GUNSHOT", 1, 0);
	}
	else if (iParam0->f_39 && func_265(4))
	{
		func_241(iParam0, 3, 1, "GUN_AIMED", 1, 0);
	}
	else if (iParam0->f_39 && func_264(*iParam0, 2))
	{
		func_241(iParam0, 3, 1, "PROJ_AIMED", 1, 0);
	}
	else if (((iParam0->f_39 && fVar1 < 8f) && !unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1)) && unk_0x9ED464AAA493C8EF(unk_0x33CD235DF1E6A94E(), 5))
	{
		func_241(iParam0, 3, 1, "SEEN_WEAPON", 1, 0);
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_1297 == 11)
	{
		if (iParam0->f_39)
		{
			func_241(iParam0, 3, 1, "STEALING_SEC_CAR", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_263(iParam0, 1, "HEARD_SEC_CAR", Local_46[3 /*8*/], 1, 1, 0);
		}
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_1297 == 6)
	{
		if (iParam0->f_39)
		{
			func_241(iParam0, 3, 1, "GET_IN_VAN", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_263(iParam0, 1, "HEARD_VAN", Local_46[func_97() /*8*/], 1, 1, 0);
		}
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_1297 == 10)
	{
		if (iParam0->f_39)
		{
			func_263(iParam0, 3, "STEALING_VAN", Local_46[func_49() /*8*/], 1, 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_263(iParam0, 1, "HEARD_VAN", Local_46[func_49() /*8*/], 1, 1, 0);
		}
	}
	else if (((iVar2 || unk_0x5A55F54738BBF615(*iParam0, 41)) || unk_0x5A55F54738BBF615(*iParam0, 112)) || func_261(*iParam0, 0))
	{
		func_241(iParam0, 3, 1, "FIGHT", 1, 0);
	}
	else if ((iVar3 || unk_0x5A55F54738BBF615(*iParam0, 101)) || func_261(*iParam0, 1))
	{
		func_241(iParam0, 3, 1, "RAN_OVER", 1, 0);
	}
	else if (((iParam0->f_5 != 3 && iParam0->f_84) && (iParam0->f_39 || iParam0->f_41)) && (fVar1 < 8f || func_103(unk_0x33CD235DF1E6A94E(), vLocal_58, 1) < 40f))
	{
		if (iParam0->f_39)
		{
			func_241(iParam0, 3, 1, "FIGHT_RETURN", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_260(iParam0, 1, "HEARD_PLAYER", unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), 1, 1, 0);
		}
	}
	else if (iParam0->f_5 != 5 && uVar4)
	{
		if ((uVar5 && bVar6) && bVar7)
		{
			func_241(iParam0, 3, 1, "PLAYER_KO", 1, 0);
		}
		else if (!bVar6)
		{
			func_241(iParam0, 3, 1, "DEAD_BODY", 1, 0);
		}
	}
	if (iParam0->f_34 > -1 && iParam0->f_34 < (Local_1081 - 1))
	{
		bVar8 = Local_1081[iParam0->f_34 /*32*/].f_30;
		switch (unk_0x36163153849DFDA1(&(Local_1081[iParam0->f_34 /*32*/].f_1)))
		{
			case 953441746:
			case 1518302817:
			case -1298712083:
			case 185995093:
			case -1645534839:
			case 880647822:
			case 1921975061:
			case 1376342146:
			case 1681313069:
			case 1156217463:
			case 1682434916:
			case -924218668:
			case 152436526:
			case 600040296:
				func_241(iParam0, 3, 1, &(Local_1081[iParam0->f_34 /*32*/].f_1), 0, bVar8);
				break;
			
			case -1225951737:
				func_260(iParam0, 1, &(Local_1081[iParam0->f_34 /*32*/].f_1), unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), 1, 0, bVar8);
				break;
			
			case 2074432461:
			case 686645495:
				func_263(iParam0, 1, &(Local_1081[iParam0->f_34 /*32*/].f_1), Local_46[func_97() /*8*/], 1, 0, bVar8);
				break;
			}
	}
	iParam0->f_34 = -1;
	if (iParam0->f_7 != iParam0->f_5)
	{
		iParam0->f_8 = 1;
	}
	else
	{
		iParam0->f_8 = 0;
	}
	iParam0->f_7 = iParam0->f_5;
	if (!unk_0xCE3CFF625BEBAA04(&(iParam0->f_25), &(iParam0->f_9)))
	{
		iParam0->f_33 = 1;
	}
	else
	{
		iParam0->f_33 = 0;
	}
	iParam0->f_25 = { iParam0->f_9 };
	switch (iParam0->f_5)
	{
		case 0:
			break;
		
		case 1:
			switch (unk_0x36163153849DFDA1(&(iParam0->f_9)))
			{
				case 58299323:
					if ((unk_0xE3903F59E2F22150() - iParam0->f_37) > 3000)
					{
						func_241(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					break;
				
				case -1225951737:
					if (((unk_0xE3903F59E2F22150() - iParam0->f_37) > 4000 && func_103(*iParam0, iParam0->f_88, 1) < 3f) && unk_0x579646D752BD05EC(*iParam0))
					{
						func_241(iParam0, 1, 0, "SOUND_LOST", 1, 0);
					}
					break;
				
				case -927541383:
					if ((unk_0xE3903F59E2F22150() - iParam0->f_37) > 4000 && !unk_0x7826A583D163D837(*iParam0))
					{
						func_241(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					break;
			}
			break;
		
		case 3:
			switch (unk_0x36163153849DFDA1(&(iParam0->f_9)))
			{
				case 1376342146:
				case 1681313069:
				case 1156217463:
					if ((((unk_0xE3903F59E2F22150() - iParam0->f_38) > 8000 && func_103(unk_0x33CD235DF1E6A94E(), vLocal_58, 1) > 65f) && (func_102(unk_0x33CD235DF1E6A94E(), *iParam0, 1) > 10f || (unk_0xE3903F59E2F22150() - iParam0->f_38) > 16000)) && !unk_0x7826A583D163D837(*iParam0))
					{
						func_241(iParam0, 3, 0, "FIGHT_ESC", 1, 0);
					}
					break;
				
				case 953441746:
				case 1518302817:
				case -1298712083:
				case 185995093:
				case -1645534839:
				case 880647822:
				case 152436526:
				case 1921975061:
				case 1682434916:
				case -924218668:
				case 600040296:
					if (func_103(unk_0x33CD235DF1E6A94E(), vLocal_58, 1) > 300f && func_102(unk_0x33CD235DF1E6A94E(), *iParam0, 1) > 150f)
					{
						func_241(iParam0, 3, 0, "FIGHT_ESC", 1, 0);
					}
					break;
			}
			break;
	}
}

int func_260(int iParam0, int iParam1, char* sParam2, vector3 vParam3, bool bParam4, int iParam5, bool bParam6)
{
	return func_242(iParam0, iParam1, sParam2, vParam3, 0, bParam4, iParam5, bParam6);
}

int func_261(struct<110> Param0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_28)
	{
		if (func_262(Param0, Local_28[iVar0 /*110*/], iParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_262(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, int iParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183, var uParam184, var uParam185, var uParam186, var uParam187, var uParam188, var uParam189, var uParam190, var uParam191, var uParam192, var uParam193, var uParam194, var uParam195, var uParam196, var uParam197, var uParam198, var uParam199, var uParam200, var uParam201, var uParam202, var uParam203, var uParam204, var uParam205, var uParam206, var uParam207, var uParam208, var uParam209, var uParam210, var uParam211, var uParam212, var uParam213, var uParam214, var uParam215, var uParam216, var uParam217, var uParam218, var uParam219, int iParam220)
{
	if (unk_0x765F6FEEFF39224F(iParam110) && unk_0x91BBD269506D61D2(iParam110, unk_0x33CD235DF1E6A94E(), iParam220))
	{
		if (func_102(iParam0, iParam110, 1) < 15f)
		{
			if (unk_0xC4BA1231BBAF1161(iParam0, iParam110))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_263(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	return func_242(iParam0, iParam1, sParam2, 0f, 0f, 0f, iParam3, bParam4, iParam5, bParam6);
}

int func_264(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, int iParam110)
{
	if ((iParam0 != 0 && unk_0x765F6FEEFF39224F(iParam0)) && !unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		if (unk_0x9ED464AAA493C8EF(unk_0x33CD235DF1E6A94E(), iParam110) && (unk_0xAC6A512C64D9A9C0(unk_0x95B959F18401C09A(), iParam0) || unk_0xC2ECB90E2DFA5802(unk_0x95B959F18401C09A(), iParam0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_265(int iParam0)
{
	if (unk_0x9ED464AAA493C8EF(unk_0x33CD235DF1E6A94E(), iParam0) && (unk_0x5801F241F822A181(unk_0x95B959F18401C09A()) || unk_0x0FFAAF12F0E94E37(unk_0x95B959F18401C09A())))
	{
		return 1;
	}
	return 0;
}

int func_266(struct<110> Param0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	iVar0 = 0;
	while (iVar0 < Local_28)
	{
		if (func_267(Param0, Local_28[iVar0 /*110*/], &bVar2, &bVar3, &bVar4))
		{
			if (bVar2 && bVar4)
			{
				Local_28[iVar0 /*110*/].f_85 = 1;
			}
			if (!bVar1)
			{
				bVar1 = true;
				*uParam1 = bVar2;
				*uParam2 = bVar3;
				*uParam3 = bVar4;
			}
			else
			{
				if (bVar2)
				{
					*uParam1 = 1;
				}
				if (bVar3)
				{
					*uParam2 = 1;
				}
				if (bVar4)
				{
					*uParam3 = 1;
				}
			}
			if (Local_28[iVar0 /*110*/].f_85)
			{
				*uParam2 = 1;
			}
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	*uParam1 = 0;
	*uParam2 = 0;
	*uParam3 = 0;
	return 0;
}

int func_267(struct<40> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, struct<104> Param71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0x765F6FEEFF39224F(Param71) && unk_0xBC2FC12AD0FBF72E(Param71))
	{
		vVar0 = { unk_0xFBB1F99A825CAB09(Param71, false) };
		if (unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(Param0, true), vVar0, true) < 10f)
		{
			if (unk_0xC4BA1231BBAF1161(Param0, Param71))
			{
				if ((unk_0xE3903F59E2F22150() - Param71.f_103) < 3000)
				{
					*uParam78 = 1;
				}
				else
				{
					*uParam78 = 0;
				}
				if (*uParam78)
				{
					iVar1 = unk_0x7A521F1FC4CDF679(Param71);
					if (unk_0x068481DAF84B9654(iVar1))
					{
						iVar2 = unk_0x22B02EC53152632C(iVar1);
						if ((iVar2 == unk_0x33CD235DF1E6A94E() && !unk_0xBC2FC12AD0FBF72E(iVar2)) && Param0.f_39)
						{
							*uParam79 = 1;
						}
						else
						{
							*uParam79 = 0;
						}
					}
					else
					{
						*uParam79 = 0;
					}
				}
				else
				{
					*uParam79 = 0;
				}
				iVar3 = unk_0xC0E41B8D6350E70E(Param71);
				if (iVar3 == joaat("weapon_unarmed") || (iVar3 != joaat("weapon_unarmed") && unk_0xFB0DA5436D45FDEF(iVar3) == 2))
				{
					*uParam80 = 1;
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_268(int iParam0)
{
	var uVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	struct<8> Var4;
	var uVar5;
	var uVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	struct<6> Var12;
	bool bVar13;
	float fVar14;
	float fVar15;
	vector3 vVar16;
	vector3 vVar17;
	struct<4> Var18;
	
	unk_0x96C4B46F194803A7(unk_0x33CD235DF1E6A94E(), &uVar0, 1);
	fVar1 = func_102(unk_0x33CD235DF1E6A94E(), *iParam0, 1);
	if (unk_0x1235B764F6C5379B(*iParam0))
	{
		iVar3 = 1;
	}
	if (unk_0x91BBD269506D61D2(*iParam0, unk_0x33CD235DF1E6A94E(), 1))
	{
		if (unk_0x3771DEF507BF2843(*iParam0, joaat("weapon_unarmed"), 0))
		{
			iVar2 = 1;
		}
	}
	uVar5 = func_266(*iParam0, &uVar6, &bVar7, &bVar8);
	if (((iParam0->f_5 != 5 && uVar5) && uVar6) && !bVar8)
	{
		if (bVar7)
		{
			func_241(iParam0, 5, 1, "PLAYER_KILLED", 1, 0);
		}
		else
		{
			func_241(iParam0, 5, 1, "KILLED", 1, 0);
		}
	}
	else if (((((unk_0x5A55F54738BBF615(*iParam0, 122) || unk_0x5A55F54738BBF615(*iParam0, 123)) || unk_0x5A55F54738BBF615(*iParam0, 124)) || unk_0x5A55F54738BBF615(*iParam0, 22)) || unk_0x5A55F54738BBF615(*iParam0, 23)) || unk_0x5A55F54738BBF615(*iParam0, 86))
	{
		func_241(iParam0, 5, 1, "GUNSHOT", 1, 0);
	}
	else if ((iParam0->f_39 && iParam0->f_5 != 4) && func_265(4))
	{
		func_241(iParam0, 4, 1, "GUN_AIMED", 1, 0);
	}
	else if (iParam0->f_39 && func_264(*iParam0, 2))
	{
		func_241(iParam0, 5, 1, "PROJ_AIMED", 1, 0);
	}
	else if ((((iParam0->f_39 && fVar1 < 8f) && iParam0->f_5 != 4) && !unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1)) && unk_0x9ED464AAA493C8EF(unk_0x33CD235DF1E6A94E(), 5))
	{
		func_241(iParam0, 5, 1, "SEEN_WEAPON", 1, 0);
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_1297 == 7)
	{
		if (iParam0->f_39)
		{
			func_241(iParam0, 3, 1, "EXIT_VAN", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_260(iParam0, 1, "HEARD_PLAYER", unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), 1, 1, 0);
		}
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_1297 == 6)
	{
		if (iParam0->f_39)
		{
			func_241(iParam0, 3, 1, "GET_IN_VAN", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_260(iParam0, 1, "HEARD_PLAYER", unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), 1, 1, 0);
		}
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_1297 == 10)
	{
		if (iParam0->f_39)
		{
			func_263(iParam0, 3, "STEALING_VAN", Local_46[func_49() /*8*/], 1, 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_263(iParam0, 1, "HEARD_VAN", Local_46[func_49() /*8*/], 1, 1, 0);
		}
	}
	else if (((iVar2 || unk_0x5A55F54738BBF615(*iParam0, 41)) || unk_0x5A55F54738BBF615(*iParam0, 112)) || func_261(*iParam0, 0))
	{
		func_241(iParam0, 3, 1, "FIGHT", 1, 0);
	}
	else if ((iVar3 || unk_0x5A55F54738BBF615(*iParam0, 101)) || func_261(*iParam0, 1))
	{
		func_241(iParam0, 3, 1, "RAN_OVER", 1, 0);
	}
	else if (((iParam0->f_5 != 3 && iParam0->f_84) && (iParam0->f_39 || iParam0->f_41)) && (fVar1 < 8f || func_103(unk_0x33CD235DF1E6A94E(), vLocal_58, 1) < 40f))
	{
		if (iParam0->f_39)
		{
			func_241(iParam0, 3, 1, "FIGHT_RETURN", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_260(iParam0, 1, "HEARD_PLAYER", unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), 1, 1, 0);
		}
	}
	else if (iParam0->f_5 != 5 && uVar5)
	{
		if ((uVar6 && bVar7) && bVar8)
		{
			func_241(iParam0, 3, 1, "PLAYER_KO", 1, 0);
		}
		else if (!bVar7)
		{
			func_241(iParam0, 5, 1, "DEAD_BODY", 1, 0);
		}
	}
	else if (((((((iParam0->f_39 || iParam0->f_41) && (iParam0->f_86 || iParam0->f_87)) && iLocal_1297 == 9) && !unk_0xCE3CFF625BEBAA04(&(iParam0->f_9), "SEE_VAN_LEAVING")) && !unk_0xCE3CFF625BEBAA04(&(iParam0->f_9), "SEE_VAN_LEAVING_1")) && !unk_0xCE3CFF625BEBAA04(&(iParam0->f_9), "CHECK_DRIVER")) && func_103(unk_0x33CD235DF1E6A94E(), vLocal_58, 1) < 15f)
	{
		if (iParam0->f_39)
		{
			func_263(iParam0, 1, "SEE_VAN_LEAVING", Local_46[func_97() /*8*/], 1, 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_263(iParam0, 1, "HEARD_VAN", Local_46[func_97() /*8*/], 1, 1, 0);
		}
	}
	else if (iLocal_1297 != 9)
	{
		if ((iParam0->f_86 && (((iLocal_1297 == 0 || iLocal_1297 == 1) || iLocal_1297 == 4) || iParam0->f_5 == 1)) || (iParam0->f_87 && ((iLocal_1297 == 3 || iLocal_1297 == 2) || iLocal_1297 == 5)))
		{
			if ((iLocal_1297 == 5 || iLocal_1297 == 4) && unk_0x72F7FAFD0710100C(*iParam0, iLocal_1300, 19))
			{
				switch (iLocal_1297)
				{
					case 5:
						StringCopy(&Var4, "WH_DITCH_VEH", 64);
						break;
					
					case 4:
						StringCopy(&Var4, "ENT_DITCH_VEH", 64);
						break;
				}
				func_241(iParam0, 2, 1, &Var4, 1, 0);
			}
			else if (iParam0->f_39)
			{
				switch (iLocal_1297)
				{
					case 0:
						StringCopy(&Var4, "ENT_FOOT", 64);
						break;
					
					case 1:
						StringCopy(&Var4, "ENT_VEH", 64);
						break;
					
					case 2:
						StringCopy(&Var4, "WH_FOOT", 64);
						break;
					
					case 3:
						StringCopy(&Var4, "WH_VEH", 64);
						break;
					
					case 5:
						StringCopy(&Var4, "WH_DITCH_VEH", 64);
						break;
					
					case 4:
						StringCopy(&Var4, "ENT_DITCH_VEH", 64);
						break;
					
					case -1:
						if (iParam0->f_5 == 1)
						{
							StringCopy(&Var4, "ENT_FOOT", 64);
						}
						break;
				}
				func_241(iParam0, 2, 1, &Var4, 1, 0);
			}
			else if (iParam0->f_41)
			{
				func_260(iParam0, 1, "HEARD_PLAYER", unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), 1, 1, 0);
			}
		}
	}
	if (iParam0->f_34 > -1 && iParam0->f_34 < (Local_1081 - 1))
	{
		bVar9 = Local_1081[iParam0->f_34 /*32*/].f_30;
		switch (unk_0x36163153849DFDA1(&(Local_1081[iParam0->f_34 /*32*/].f_1)))
		{
			case 953441746:
			case 1518302817:
			case -1298712083:
				if (iParam0->f_5 != 4)
				{
					func_241(iParam0, 5, 1, &(Local_1081[iParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case 185995093:
				if (iParam0->f_5 != 4)
				{
					func_241(iParam0, 3, 1, &(Local_1081[iParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case -1645534839:
				if (iParam0->f_5 != 4)
				{
					if (func_103(*iParam0, Local_1081[iParam0->f_34 /*32*/].f_23, 1) < 5f)
					{
						func_241(iParam0, 4, 1, "GUN_AIMED_AT", 0, bVar9);
					}
					else
					{
						func_241(iParam0, 5, 1, "SEEN_WEAPON", 0, bVar9);
					}
				}
				break;
			
			case 880647822:
				if (iParam0->f_5 != 4)
				{
					func_241(iParam0, 5, 1, &(Local_1081[iParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case 1921975061:
				if (iParam0->f_5 != 4)
				{
					func_241(iParam0, 5, 1, &(Local_1081[iParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case 1376342146:
			case 1681313069:
			case 1156217463:
			case -419867425:
				if (iParam0->f_5 != 4)
				{
					func_241(iParam0, 3, 1, &(Local_1081[iParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case 1682434916:
			case -924218668:
			case 2056033185:
				if (((iParam0->f_5 != 4 && !unk_0xCE3CFF625BEBAA04(&(iParam0->f_9), "STEALING_VAN")) && !unk_0xCE3CFF625BEBAA04(&(iParam0->f_9), "GET_IN_VAN")) && !unk_0xCE3CFF625BEBAA04(&(iParam0->f_9), "EXIT_VAN"))
				{
					func_241(iParam0, 3, 1, &(Local_1081[iParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case 152436526:
				if (iParam0->f_5 != 4)
				{
					func_241(iParam0, 5, 1, &(Local_1081[iParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case -426892158:
				if (iParam0->f_86)
				{
					func_241(iParam0, 2, 1, &(Local_1081[iParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case -1461435341:
				if (iParam0->f_86)
				{
					func_241(iParam0, 2, 1, &(Local_1081[iParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case -972653884:
				if (iParam0->f_87)
				{
					func_241(iParam0, 2, 1, &(Local_1081[iParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case -520621538:
				if (iParam0->f_87)
				{
					func_241(iParam0, 2, 1, &(Local_1081[iParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case -1349994105:
				if (iParam0->f_87)
				{
					func_241(iParam0, 2, 1, &(Local_1081[iParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			
			case -1225951737:
				if (iParam0->f_87)
				{
					func_260(iParam0, 1, &(Local_1081[iParam0->f_34 /*32*/].f_1), unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), 1, 0, bVar9);
				}
				break;
			
			case 2074432461:
				if (iParam0->f_87)
				{
					func_263(iParam0, 1, &(Local_1081[iParam0->f_34 /*32*/].f_1), Local_46[func_97() /*8*/], 1, 0, bVar9);
				}
				break;
			}
	}
	iParam0->f_34 = -1;
	if (iParam0->f_7 != iParam0->f_5)
	{
		iParam0->f_8 = 1;
	}
	else
	{
		iParam0->f_8 = 0;
	}
	iParam0->f_7 = iParam0->f_5;
	if (!unk_0xCE3CFF625BEBAA04(&(iParam0->f_25), &(iParam0->f_9)))
	{
		iParam0->f_33 = 1;
	}
	else
	{
		iParam0->f_33 = 0;
	}
	iParam0->f_25 = { iParam0->f_9 };
	iVar10 = 0;
	while (iVar10 < Local_28)
	{
		if (Local_28[iVar10 /*110*/] == *iParam0)
		{
			iVar11 = iVar10;
		}
		iVar10++;
	}
	switch (iParam0->f_5)
	{
		case 5:
			switch (unk_0x36163153849DFDA1(&(iParam0->f_9)))
			{
				case 152436526:
				case 1921975061:
				case 880647822:
				case 953441746:
				case 1518302817:
				case -1298712083:
					if ((func_273(*iParam0) || (iParam0->f_48 % 2) == 0) || !func_173(Local_29))
					{
						if ((unk_0x36163153849DFDA1(&(iParam0->f_9)) == 152436526 || unk_0x36163153849DFDA1(&(iParam0->f_9)) == 1921975061) || unk_0x36163153849DFDA1(&(iParam0->f_9)) == 880647822)
						{
							if (func_250(iVar11))
							{
								Var12 = { func_272(iVar11, "JS_GUN1") };
								if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 1000, 0, 0, 0))
								{
									func_271(iParam0, &(iParam0->f_9), &Var12, 15f, 3000, 250, 0, 1, 0);
								}
								else if (iParam0->f_48 == 0)
								{
									func_271(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
								}
							}
							else
							{
								switch (iVar11)
								{
									case 2:
										StringCopy(&Var12, "SOL1_ARM1", 24);
										break;
									
									case 3:
										StringCopy(&Var12, "SOL1_ARM2", 24);
										break;
								}
								if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 1000, 0, 0, 0))
								{
									func_271(iParam0, &(iParam0->f_9), &Var12, 15f, 3000, 250, 0, 1, 0);
								}
								else if (iParam0->f_48 == 0)
								{
									func_271(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
								}
							}
						}
						else if ((unk_0x36163153849DFDA1(&(iParam0->f_9)) == 953441746 || unk_0x36163153849DFDA1(&(iParam0->f_9)) == 1518302817) || unk_0x36163153849DFDA1(&(iParam0->f_9)) == -1298712083)
						{
							if (func_250(iVar11))
							{
								Var12 = { func_272(iVar11, "JS_KILL") };
								if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 2000, 0, 0, 0))
								{
									func_271(iParam0, &(iParam0->f_9), &Var12, 15f, 3000, 250, 0, 1, 0);
								}
								else if (iParam0->f_48 == 0)
								{
									func_271(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
								}
							}
							else if (iParam0->f_48 == 0)
							{
								func_271(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
							}
						}
						iParam0->f_48++;
					}
					else
					{
						if (func_250(iVar11))
						{
							Var12 = { func_272(iVar11, "JS_GETSEC") };
							if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 2000, 0, 0, 0))
							{
								func_271(iParam0, &(iParam0->f_9), &Var12, 15f, 3000, 250, 0, 1, 1);
							}
							else if (iParam0->f_48 == 0)
							{
								func_271(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 1);
							}
						}
						else
						{
							switch (iVar11)
							{
								case 2:
									StringCopy(&Var12, "SOL1_SECIN1", 24);
									break;
								
								case 3:
									StringCopy(&Var12, "SOL1_SECIN2", 24);
									break;
							}
							if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 2000, 0, 0, 0))
							{
								func_271(iParam0, &(iParam0->f_9), &Var12, 15f, 3000, 250, 0, 1, 1);
							}
							else if (iParam0->f_48 == 0)
							{
								func_271(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 1);
							}
						}
						iParam0->f_48++;
					}
					break;
			}
			break;
		
		case 4:
			switch (unk_0x36163153849DFDA1(&(iParam0->f_9)))
			{
				case 1224761252:
					if (func_264(*iParam0, 4))
					{
						func_241(iParam0, 4, 0, "GUN_AIMED_AT", 1, 0);
					}
					else if ((unk_0xE3903F59E2F22150() - iParam0->f_37) > 1000)
					{
						func_241(iParam0, 5, 1, "SEEN_WEAPON", 1, 0);
					}
					break;
				
				case -1645534839:
					if (func_264(*iParam0, 4))
					{
						func_241(iParam0, 4, 1, "GUN_AIMED_AT", 1, 0);
					}
					if (((unk_0xE3903F59E2F22150() - iParam0->f_37) > 15000 || (unk_0xE3903F59E2F22150() - iParam0->f_38) > 3000) && !unk_0x7826A583D163D837(*iParam0))
					{
						func_241(iParam0, 5, 1, "SEEN_WEAPON", 1, 0);
					}
					else if (func_273(*iParam0) || iParam0->f_48 == 0)
					{
						if (func_250(iVar11))
						{
							Var12 = { func_272(iVar11, "JS_HND1") };
							if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_271(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 1, 0);
							}
							else if (iParam0->f_48 == 0)
							{
								func_271(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar11)
							{
								case 2:
									StringCopy(&Var12, "SOL1_SCAR1", 24);
									break;
								
								case 3:
									StringCopy(&Var12, "SOL1_SCAR2", 24);
									break;
							}
							if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_271(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 1, 0);
							}
							else if (iParam0->f_48 == 0)
							{
								func_271(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
							}
						}
						iParam0->f_48++;
					}
					else
					{
						if (func_250(iVar11))
						{
							Var12 = { func_272(iVar11, "JS_HND1") };
							if (func_247(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 2000, 0, 0, 0))
							{
								func_271(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 1, 0);
							}
							else if (iParam0->f_48 == 0)
							{
								func_271(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar11)
							{
								case 2:
									StringCopy(&Var12, "SOL1_SCAR1", 24);
									break;
								
								case 3:
									StringCopy(&Var12, "SOL1_SCAR2", 24);
									break;
							}
							if (func_247(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 2000, 0, 0, 0))
							{
								func_271(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 1, 0);
							}
							else if (iParam0->f_48 == 0)
							{
								func_271(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
							}
						}
						iParam0->f_48++;
					}
					break;
			}
			break;
		
		case 0:
			switch (iVar11)
			{
				case 1:
					if (func_43() && (unk_0xE3903F59E2F22150() - iLocal_1253) > 5000)
					{
						switch (iLocal_1280)
						{
							case 0:
								func_247(iVar11, "JS_STOCK", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1280++;
								break;
							
							case 1:
								func_247(iVar11, "JS_STOCKb", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1280++;
								break;
							
							case 2:
								func_247(iVar11, "JS_STOCKc", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1280++;
								break;
							
							case 3:
								func_247(iVar11, "JS_STOCKd", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1280++;
								break;
							
							case 4:
								func_247(iVar11, "JS_STOCKe", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1280++;
								break;
							
							case 5:
								func_247(iVar11, "JS_STOCKf", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1280++;
								break;
							
							case 6:
								func_247(iVar11, "JS_STOCKg", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1280++;
								break;
							
							case 7:
								func_247(iVar11, "JS_STOCKh", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1280++;
								break;
							
							case 8:
								func_247(iVar11, "JS_STOCKi", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1280++;
								break;
							
							case 9:
								func_247(iVar11, "JS_STOCKj", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1280++;
								break;
							
							case 10:
								func_247(iVar11, "JS_STOCKk", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1280 = 0;
								break;
							}
					}
					break;
				
				case 2:
					if (!iParam0->f_49)
					{
						if (func_247(iVar11, "SOL1_AMB1", iParam0->f_5, 0, 0, 1, 0, 1, 0, 1))
						{
							func_40(&uLocal_1087, 4, Local_28[2 /*110*/], "CONSTRUCTION1", 0, 1);
							func_40(&uLocal_1087, 3, Local_28[3 /*110*/], "CONSTRUCTION2", 0, 1);
							iParam0->f_49 = 1;
						}
					}
					break;
			}
			break;
		
		case 1:
			if (unk_0xCE3CFF625BEBAA04(&(iParam0->f_9), "SEE_VAN_LEAVING") || unk_0xCE3CFF625BEBAA04(&(iParam0->f_9), "CHECK_DRIVER"))
			{
				vVar16 = { func_270(unk_0x2CA911E7569D12EA(unk_0x33CD235DF1E6A94E(), 0f, 1f, 0f) - unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true)) };
				vVar17 = { func_270(unk_0xFBB1F99A825CAB09(Local_28[iVar11 /*110*/], true) - unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true)) };
				fVar14 = func_269(vVar16, vVar17);
				fVar15 = unk_0x4D0306F9E1621374(fVar14);
				if ((fVar15 < 90f && fVar1 < 8f) && unk_0x8BB475EA09C9A0EB(unk_0x33CD235DF1E6A94E()) < 1f)
				{
					bVar13 = true;
				}
			}
			switch (unk_0x36163153849DFDA1(&(iParam0->f_9)))
			{
				case -414594135:
				case 1260350710:
					if (func_273(*iParam0) && unk_0xCE3CFF625BEBAA04(&(iParam0->f_9), "SEE_VAN_LEAVING"))
					{
						if (func_250(iVar11))
						{
							Var12 = { func_272(iVar11, "JS_VAN_LVE1") };
							func_247(iVar11, &Var12, iParam0->f_5, 1, 0, 1, 1000, 0, 0, 0);
						}
					}
					else if (bVar13)
					{
						func_263(iParam0, 1, "CHECK_DRIVER", Local_46[func_97() /*8*/], 0, 1, 0);
					}
					else if (func_103(unk_0x33CD235DF1E6A94E(), vLocal_58, 1) >= 20f)
					{
						if (fVar1 > 5f)
						{
							func_241(iParam0, 1, 0, "VAN_LOST", 1, 0);
						}
					}
					break;
				
				case 58299323:
					if (func_273(*iParam0))
					{
						Var12 = { func_272(iVar11, "JS_VAN_LVE2") };
						func_247(iVar11, &Var12, iParam0->f_5, 1, 0, 1, 0, 0, 0, 0);
					}
					else if ((unk_0xE3903F59E2F22150() - iParam0->f_37) > 3000)
					{
						func_241(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					break;
				
				case 356486511:
					if (bVar13)
					{
						if ((unk_0xE3903F59E2F22150() - iParam0->f_37) > 2000 && !unk_0x7826A583D163D837(*iParam0))
						{
							func_241(iParam0, 3, 1, "STEALING_VAN", 1, 0);
						}
					}
					else
					{
						func_263(iParam0, 1, "SEE_VAN_LEAVING_1", Local_46[func_97() /*8*/], 0, 1, 0);
					}
					break;
				
				case -1225951737:
					if (((unk_0xE3903F59E2F22150() - iParam0->f_37) > 4000 && func_103(*iParam0, iParam0->f_88, 1) < 3f) && unk_0x579646D752BD05EC(*iParam0))
					{
						func_241(iParam0, 1, 0, "SOUND_LOST", 1, 0);
					}
					else if (func_273(*iParam0))
					{
						if (func_250(iVar11))
						{
							Var12 = { func_272(iVar11, "JS_SND_INV") };
							if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
							{
								func_271(iParam0, &(iParam0->f_9), &Var12, 3f, 3000, 500, 0, 0, 0);
							}
						}
					}
					break;
				
				case -927541383:
					if ((unk_0xE3903F59E2F22150() - iParam0->f_37) > 4000 && !unk_0x7826A583D163D837(*iParam0))
					{
						if (func_250(iVar11))
						{
							Var12 = { func_272(iVar11, "JS_SNDLOST2") };
							func_247(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 1000, 0, 0, 0);
						}
						func_241(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					else if (func_273(*iParam0))
					{
						if (func_250(iVar11))
						{
							Var12 = { func_272(iVar11, "JS_SNDLOST1") };
							func_247(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 1000, 0, 0, 0);
						}
					}
					break;
			}
			break;
		
		case 3:
			switch (unk_0x36163153849DFDA1(&(iParam0->f_9)))
			{
				case 1376342146:
				case 1681313069:
				case 1156217463:
				case -419867425:
					if ((((unk_0xE3903F59E2F22150() - iParam0->f_38) > 8000 && func_103(unk_0x33CD235DF1E6A94E(), vLocal_58, 1) > 65f) && (func_102(unk_0x33CD235DF1E6A94E(), *iParam0, 1) > 10f || (unk_0xE3903F59E2F22150() - iParam0->f_38) > 16000)) && !unk_0x7826A583D163D837(*iParam0))
					{
						func_241(iParam0, 3, 0, "FIGHT_ESC", 1, 0);
					}
					else if (func_273(*iParam0) && iParam0->f_35)
					{
						if (!iParam0->f_84)
						{
							if (func_250(iVar11))
							{
								Var12 = { func_272(iVar11, "JS_MELE_1") };
								if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
								{
									func_271(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 0, 0);
								}
							}
							else
							{
								switch (iVar11)
								{
									case 2:
										StringCopy(&Var12, "SOL1_FIGHT1", 24);
										break;
									
									case 3:
										StringCopy(&Var12, "SOL1_FIGHT2", 24);
										break;
								}
								if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
								{
									func_271(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 0, 0);
								}
							}
							iParam0->f_84 = 1;
						}
						else if (func_250(iVar11))
						{
							Var12 = { func_272(iVar11, "JS_MELE_2") };
							if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_271(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 0, 0);
							}
						}
						else
						{
							switch (iVar11)
							{
								case 2:
									StringCopy(&Var12, "SOL1_FIGHT1", 24);
									break;
								
								case 3:
									StringCopy(&Var12, "SOL1_FIGHT2", 24);
									break;
							}
							if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_271(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 0, 0);
							}
						}
					}
					break;
				
				case 1093888274:
					if ((unk_0xE3903F59E2F22150() - iParam0->f_37) > 4000)
					{
						func_241(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					if (func_273(*iParam0))
					{
						if (func_250(iVar11))
						{
							Var12 = { func_272(iVar11, "JS_MELE_ESC") };
							func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0);
						}
					}
					break;
				
				case 1682434916:
					if (((((unk_0xE3903F59E2F22150() - iParam0->f_37) > 2000 && iParam0->f_39) && !unk_0x7826A583D163D837(*iParam0)) && iLocal_1297 != 9) && iLocal_1297 != 10)
					{
						func_241(iParam0, 3, 0, "EXIT_VAN", 1, 0);
					}
					if (func_273(*iParam0))
					{
						if (func_250(iVar11))
						{
							Var12 = { func_272(iVar11, "JS_VAN_IN2") };
							if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_271(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_271(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar11)
							{
								case 2:
									StringCopy(&Var12, "SOL1_VAN1", 24);
									break;
								
								case 3:
									StringCopy(&Var12, "SOL1_VAN2", 24);
									break;
							}
							if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_271(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_271(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					else if (func_43() && (unk_0xE3903F59E2F22150() - iLocal_1253) > 2000)
					{
						if (func_250(iVar11))
						{
							Var12 = { func_272(iVar11, "JS_VAN_TK") };
							if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_271(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
							}
						}
					}
					break;
				
				case -924218668:
					if (func_273(*iParam0))
					{
						if (func_250(iVar11))
						{
							Var12 = { func_272(iVar11, "JS_VAN_IN1") };
							if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_271(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_271(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar11)
							{
								case 2:
									StringCopy(&Var12, "SOL1_VAN1", 24);
									break;
								
								case 3:
									StringCopy(&Var12, "SOL1_VAN2", 24);
									break;
							}
							if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_271(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_271(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					else if (func_43() && (unk_0xE3903F59E2F22150() - iLocal_1253) > 2000)
					{
						if (func_250(iVar11))
						{
							Var12 = { func_272(iVar11, "JS_VAN_TK") };
							if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_271(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_271(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					break;
				
				case 2056033185:
					if (func_273(*iParam0))
					{
						if (func_250(iVar11))
						{
							Var12 = { func_272(iVar11, "JS_VAN_IN2") };
							if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_271(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_271(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar11)
							{
								case 2:
									StringCopy(&Var12, "SOL1_VAN1", 24);
									break;
								
								case 3:
									StringCopy(&Var12, "SOL1_VAN2", 24);
									break;
							}
							if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_271(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_271(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 2:
			if ((unk_0xE3903F59E2F22150() - iParam0->f_38) > 5000 && !unk_0x7826A583D163D837(*iParam0))
			{
				if (iVar11 == 1)
				{
					func_247(iVar11, "JS_STOCK2", 0, 0, 0, 1, 1000, 0, 0, 0);
					iLocal_1280 = 0;
				}
				func_241(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
			}
			else
			{
				if (iParam0->f_39)
				{
					if ((unk_0xE3903F59E2F22150() - iParam0->f_38) > 1000 && !unk_0x7826A583D163D837(*iParam0))
					{
						if (((unk_0xCE3CFF625BEBAA04(&(iParam0->f_9), "ENT_FOOT") || unk_0xCE3CFF625BEBAA04(&(iParam0->f_9), "ENT_VEH")) || unk_0xCE3CFF625BEBAA04(&(iParam0->f_9), "WH_FOOT")) || unk_0xCE3CFF625BEBAA04(&(iParam0->f_9), "WH_VEH"))
						{
							Var18 = { iParam0->f_9 };
							StringConCat(&Var18, "_LEAVE", 32);
							func_241(iParam0, 2, 0, &Var18, 1, 0);
						}
					}
					if ((unk_0xCE3CFF625BEBAA04(&(iParam0->f_9), "WH_FOOT") || unk_0xCE3CFF625BEBAA04(&(iParam0->f_9), "WH_VEH")) || (unk_0xCE3CFF625BEBAA04(&(iParam0->f_9), "WH_DITCH_VEH") && !unk_0x7826A583D163D837(*iParam0)))
					{
						if (((iParam0->f_104 >= 6 && iLocal_1253 != -1) && (unk_0xE3903F59E2F22150() - iLocal_1253) > 7000) && (unk_0xE3903F59E2F22150() - iParam0->f_38) == 0)
						{
							func_241(iParam0, 3, 0, "WH_FAILED_LEAVE", 1, 0);
						}
					}
				}
				switch (unk_0x36163153849DFDA1(&(iParam0->f_9)))
				{
					case -426892158:
						if (func_273(*iParam0))
						{
							if (!iParam0->f_82)
							{
								if (func_250(iVar11))
								{
									if (!iParam0->f_83)
									{
										Var12 = { func_272(iVar11, "JS_ENT_F1") };
										func_247(iVar11, &Var12, iParam0->f_5, 1, 0, 0, 500, 0, 0, 0);
									}
									else
									{
										Var12 = { func_272(iVar11, "JS_ENT_F1_P") };
										func_247(iVar11, &Var12, iParam0->f_5, 1, 0, 0, 500, 0, 0, 0);
									}
								}
							}
							else if (func_250(iVar11))
							{
								if (!iParam0->f_83)
								{
									Var12 = { func_272(iVar11, "JS_ENT_F2") };
									func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0);
								}
								else
								{
									Var12 = { func_272(iVar11, "JS_ENT_F2_P") };
									func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0);
								}
							}
							iParam0->f_82 = 1;
						}
						else if (func_43() && (unk_0xE3903F59E2F22150() - iLocal_1253) > 5000)
						{
							if (func_250(iVar11))
							{
								if (!iParam0->f_83)
								{
									Var12 = { func_272(iVar11, "JS_ENT_F") };
									func_247(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								}
								else
								{
									Var12 = { func_272(iVar11, "JS_ENT_F_P") };
									func_247(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								}
							}
						}
						break;
					
					case -1461435341:
						if (func_273(*iParam0) || iParam0->f_48 == 0)
						{
							if (!iParam0->f_82)
							{
								if (func_250(iVar11))
								{
									Var12 = { func_272(iVar11, "JS_ENT_V1") };
									if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
									{
										iParam0->f_48++;
									}
								}
								iParam0->f_82 = 1;
							}
							else if (unk_0xCE3CFF625BEBAA04(&(iParam0->f_17), "WH_VEH"))
							{
								if (func_250(iVar11))
								{
									Var12 = { func_272(iVar11, "JS_ENT_V") };
									if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 1000, 0, 0, 0))
									{
										iParam0->f_48++;
									}
								}
							}
							else if (func_250(iVar11))
							{
								Var12 = { func_272(iVar11, "JS_ENT_V3") };
								if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 1000, 0, 0, 0))
								{
									iParam0->f_48++;
								}
							}
						}
						else if (func_43() && (unk_0xE3903F59E2F22150() - iLocal_1253) > 5000)
						{
							if (func_250(iVar11))
							{
								Var12 = { func_272(iVar11, "JS_ENT_V3") };
								func_247(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
							}
						}
						break;
					
					case -972653884:
						if (func_273(*iParam0))
						{
							if (iParam0->f_104 == 0)
							{
								if (func_250(iVar11))
								{
									Var12 = { func_272(iVar11, "JS_WH1") };
									if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_271(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_271(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							else if (iParam0->f_104 > 0)
							{
								if (func_250(iVar11))
								{
									Var12 = { func_272(iVar11, "JS_WH2") };
									if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_271(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_271(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							iParam0->f_82 = 1;
						}
						else if (iParam0->f_104 < 6)
						{
							if (func_43() && (unk_0xE3903F59E2F22150() - iLocal_1253) > 5000)
							{
								if (func_250(iVar11))
								{
									if (iParam0->f_104 < 5)
									{
										Var12 = { func_272(iVar11, "JS_WH") };
									}
									else
									{
										Var12 = { func_272(iVar11, "JS_WH_F") };
									}
									if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_271(iParam0, &(iParam0->f_9), &Var12, 10f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_271(iParam0, &(iParam0->f_9), "", 10f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
						}
						break;
					
					case -640827668:
						if (func_273(*iParam0))
						{
							if (iParam0->f_104 == 0)
							{
								if (func_250(iVar11))
								{
									Var12 = { func_272(iVar11, "JS_WH1") };
									if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_271(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_271(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							else if (iParam0->f_104 > 0)
							{
								if (func_250(iVar11))
								{
									Var12 = { func_272(iVar11, "JS_WH2") };
									if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_271(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_271(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							iParam0->f_82 = 1;
						}
						else if (iParam0->f_104 < 6)
						{
							if (func_43() && (unk_0xE3903F59E2F22150() - iLocal_1253) > 5000)
							{
								if (func_250(iVar11))
								{
									if (iParam0->f_104 < 5)
									{
										if (((iParam0->f_104 - 1) % 2) == 0)
										{
											Var12 = { func_272(iVar11, "JS_ENT_V4") };
										}
										else
										{
											Var12 = { func_272(iVar11, "JS_ENT_V3") };
										}
									}
									else
									{
										Var12 = { func_272(iVar11, "JS_WH_F") };
									}
									if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_271(iParam0, &(iParam0->f_9), &Var12, 10f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_271(iParam0, &(iParam0->f_9), "", 10f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
						}
						break;
					
					case -520621538:
						if (func_273(*iParam0))
						{
							if (iParam0->f_104 == 0)
							{
								if (func_250(iVar11))
								{
									Var12 = { func_272(iVar11, "JS_WH1") };
									if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_271(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_271(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							else if (iParam0->f_104 > 0)
							{
								if (func_250(iVar11))
								{
									Var12 = { func_272(iVar11, "JS_WH2") };
									if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_271(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_271(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							iParam0->f_82 = 1;
						}
						else if (iParam0->f_104 < 6)
						{
							if (func_43() && (unk_0xE3903F59E2F22150() - iLocal_1253) > 5000)
							{
								if (func_250(iVar11))
								{
									if (iParam0->f_104 < 5)
									{
										if (((iParam0->f_104 - 1) % 2) == 0)
										{
											Var12 = { func_272(iVar11, "JS_ENT_V3") };
										}
										else
										{
											Var12 = { func_272(iVar11, "JS_WH") };
										}
									}
									else
									{
										Var12 = { func_272(iVar11, "JS_WH_F") };
									}
									if (func_247(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_271(iParam0, &(iParam0->f_9), &Var12, 10f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_271(iParam0, &(iParam0->f_9), "", 10f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
						}
						break;
					
					case 778765338:
						if (iParam0->f_48 == 0)
						{
							if (func_43() && (unk_0xE3903F59E2F22150() - iLocal_1253) > 1000)
							{
								if (func_250(iVar11))
								{
									Var12 = { func_272(iVar11, "JS_ENT_V4") };
									func_247(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								}
								iParam0->f_48++;
							}
						}
						else if (func_43() && (unk_0xE3903F59E2F22150() - iLocal_1253) > 5000)
						{
							if (((iParam0->f_48 - 1) % 3) == 0)
							{
								Var12 = { func_272(iVar11, "JS_ENT_V4") };
							}
							else
							{
								Var12 = { func_272(iVar11, "JS_ENT_V3") };
							}
							func_247(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
							iParam0->f_48++;
						}
						break;
					
					case 1580556320:
						if (iParam0->f_48 == 0)
						{
							if (func_43() && (unk_0xE3903F59E2F22150() - iLocal_1253) > 1000)
							{
								if (func_250(iVar11))
								{
									if (!iParam0->f_83)
									{
										Var12 = { func_272(iVar11, "JS_ENT_F3") };
										func_247(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
									}
									else
									{
										Var12 = { func_272(iVar11, "JS_ENT_F3_P") };
										func_247(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
									}
								}
								iParam0->f_48++;
							}
						}
						break;
					
					case -1697689838:
					case -628260985:
					case -1891358342:
						if (iParam0->f_48 == 0)
						{
							if (func_43() && (unk_0xE3903F59E2F22150() - iLocal_1253) > 1000)
							{
								if (func_250(iVar11))
								{
									Var12 = { func_272(iVar11, "JS_ENT_V5") };
									func_247(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								}
								iParam0->f_48++;
							}
						}
						break;
					}
			}
			break;
	}
}

float func_269(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_270(vector3 vParam0)
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

void func_271(int iParam0, char* sParam1, char* sParam2, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < Local_28)
	{
		if (Local_28[iVar0 /*110*/] == *iParam0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	iParam0->f_50 = iVar1;
	StringCopy(&(iParam0->f_50.f_1), sParam1, 64);
	StringCopy(&(iParam0->f_50.f_17), sParam2, 24);
	iParam0->f_50.f_28 = iParam4;
	iParam0->f_50.f_26 = fParam3;
	iParam0->f_50.f_29 = iParam5;
	iParam0->f_50.f_30 = iParam7;
	iParam0->f_50.f_31 = iParam8;
	if (bParam6)
	{
		func_244(&(iParam0->f_50), 0);
	}
}

struct<6> func_272(int iParam0, char* sParam1)
{
	struct<6> Var0;
	
	StringCopy(&Var0, sParam1, 24);
	if (iParam0 == 1)
	{
		StringConCat(&Var0, "b", 24);
	}
	return Var0;
}

int func_273(struct<34> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76)
{
	if (Param0.f_8 || Param0.f_33)
	{
		return 1;
	}
	return 0;
}

void func_274(int iParam0)
{
	if (unk_0xDAAA48CE50D80F52(*iParam0, unk_0x33CD235DF1E6A94E()))
	{
		iParam0->f_40 = unk_0xE3903F59E2F22150();
		iParam0->f_39 = 1;
	}
	else if ((unk_0xE3903F59E2F22150() - iParam0->f_40) > 2000 || !unk_0x910FF514D7BC5674(*iParam0, unk_0x33CD235DF1E6A94E(), 90f))
	{
		iParam0->f_40 = unk_0xE3903F59E2F22150();
		iParam0->f_39 = 0;
	}
	if (iParam0->f_39)
	{
		bLocal_1294 = false;
	}
	if (bLocal_1294)
	{
		unk_0x41E36A540F8F323F(*iParam0, 188, true);
	}
	if (!func_275())
	{
		iParam0->f_41 = unk_0xDF201DA86440289A(unk_0x95B959F18401C09A(), *iParam0);
		if (iParam0->f_41)
		{
			iParam0->f_43 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true) };
		}
	}
	else
	{
		iParam0->f_41 = 0;
	}
	switch (iParam0->f_5)
	{
		case 5:
		case 4:
		case 3:
			iParam0->f_102 = 1;
			break;
		
		default:
			iParam0->f_102 = 0;
			break;
	}
}

int func_275()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (unk_0x765F6FEEFF39224F(Local_46[iVar0 /*8*/]) && unk_0x91D5C8283D19AF49(Local_46[iVar0 /*8*/], 0))
		{
			if (unk_0xFC5B5CFF164247DB(Local_46[iVar0 /*8*/]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_276()
{
	vector3 vVar0;
	var uVar1;
	
	unk_0x9315FCF6CFE2AB41("BUGSTAR", &iLocal_1254);
	unk_0xD2E80177F27FD43F(3, 1862763509, iLocal_1254);
	unk_0xD2E80177F27FD43F(5, iLocal_1254, 1862763509);
	unk_0xD2E80177F27FD43F(1, -1533126372, iLocal_1254);
	unk_0xD2E80177F27FD43F(1, iLocal_1254, -1533126372);
	unk_0x5856B9BF2B4E98C4(Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f), Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f), false, 1);
	unk_0x7F327D8D184FAB7F(Vector(7.27131f, -3092.467f, 138.4268f) - Vector(2.375f, 22.75f, 19.4375f), Vector(7.27131f, -3092.467f, 138.4268f) + Vector(2.375f, 22.75f, 19.4375f), 0);
	unk_0xCE04CE961AF41AB9(138.43f, -3092.47f, 4.9f, 28.375f, 1, 0, 0, false);
	if (func_187() || func_6(0))
	{
		iLocal_67 = 0;
		if (func_187())
		{
			if (Global_87889)
			{
				iLocal_67++;
			}
		}
		if (func_187())
		{
			func_228(iLocal_67, &vVar0, &uVar1);
			func_282(vVar0, uVar1, 1, 0);
		}
		bLocal_66 = true;
	}
	else
	{
		while (!func_182(1))
		{
			wait(0);
			func_281(&uLocal_70);
		}
	}
	func_280(&uLocal_70, "JHP1A", 0);
	func_223(&uLocal_70, "misslsdhsclipboard@base");
	func_223(&uLocal_70, "misslsdhsclipboard@idle_a");
	func_223(&uLocal_70, "misstrevor3");
	func_165(&uLocal_70, joaat("p_amb_clipboard_01"));
	func_222(&uLocal_70, iLocal_1256);
	func_224(&uLocal_70, &cLocal_59);
	unk_0xDFF996ED119D35B1(unk_0x95B959F18401C09A(), 0.15f);
	func_278(87);
	func_40(&uLocal_1087, 0, unk_0x33CD235DF1E6A94E(), "MICHAEL", 0, 1);
	func_40(&uLocal_1087, 3, 0, "LESTER", 0, 1);
	func_246(bLocal_1252);
	func_277();
	iLocal_1256 = unk_0x30B9FCF52BAAEB11(vLocal_58, "po1_08_warehouseint1");
	unk_0x80C90B71B6E0E34B(&cLocal_49);
	iLocal_1302 = unk_0x0335D8135051EA56(713.7754f, -996.4443f, 22.3085f, 715.7624f, -991.7067f, 25.6214f, 0, 1, 1, 1);
	while (!unk_0x8A7F864DAB908749(0))
	{
		wait(0);
	}
}

void func_277()
{
	Global_87890 = 1;
}

void func_278(int iParam0)
{
	Global_89567 = 0;
	switch (iParam0)
	{
		case 72:
			func_279(2);
			func_279(4);
			break;
		
		case 73:
			func_279(0);
			func_279(1);
			func_279(7);
			break;
		
		case 92:
			func_279(10);
			func_279(9);
			func_279(13);
			func_279(6);
			break;
		
		case 68:
			func_279(11);
			break;
		
		case 78:
			func_279(14);
			break;
		
		case 79:
			func_279(3);
			break;
		
		default:
			break;
	}
}

void func_279(int iParam0)
{
	unk_0x8950ED5730F62EE8(&Global_89567, iParam0);
}

int func_280(var uParam0, char* sParam1, int iParam2)
{
	if (uParam0->f_779[iParam2 /*5*/].f_1 || uParam0->f_779[iParam2 /*5*/])
	{
		if (unk_0xCE3CFF625BEBAA04(uParam0->f_779[iParam2 /*5*/].f_4, sParam1))
		{
			uParam0->f_779[iParam2 /*5*/].f_2 = 0;
			uParam0->f_982 = 1;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		if (iParam2 >= 11)
		{
			unk_0xD3B8030CB4E487C9(sParam1, iParam2);
		}
		else
		{
			unk_0x2EE8D1440C9060EF(sParam1, iParam2);
		}
		uParam0->f_779[iParam2 /*5*/] = 1;
		uParam0->f_779[iParam2 /*5*/].f_3 = unk_0xE3903F59E2F22150();
		uParam0->f_779[iParam2 /*5*/].f_4 = sParam1;
		uParam0->f_982 = 1;
		return 1;
	}
	return 0;
}

void func_281(var uParam0)
{
	func_230(uParam0);
}

void func_282(vector3 vParam0, var uParam1, int iParam2, int iParam3)
{
	if (func_187())
	{
		unk_0x9980AE643A60F372(0);
		unk_0xCE689A8E8C42ED78(&(Global_93682.f_20), 2);
		unk_0xD5CD4268EDE6F40E(1);
		if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
		{
			unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), false, 0);
		}
		Global_93678 = { vParam0 };
		Global_93681 = uParam1;
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
		func_186(1);
	}
}

void func_283(int iParam0)
{
	vector3 vVar0;
	char[] cVar1[8];
	
	if (iParam0 == 6)
	{
		func_295();
		func_8(0);
		unk_0x65BA35D6D61F1574("JHP1A_FAIL");
		unk_0x5894DC159447E10A();
	}
	else if (!bLocal_68)
	{
		bLocal_68 = true;
		iLocal_69 = iParam0;
		switch (iLocal_69)
		{
			case 1:
				StringCopy(&vVar0, "JHP1A_VAN_DEAD", 24);
				break;
			
			case 3:
				StringCopy(&vVar0, "JHP1A_VAN_STUCK", 24);
				break;
			
			case 2:
				StringCopy(&vVar0, "JHP1A_VANS_DEAD", 24);
				break;
			
			case 4:
				StringCopy(&vVar0, "JHP1A_VAN_ABAN", 24);
				break;
			
			case 5:
				StringCopy(&vVar0, "JHP1A_ABAN", 24);
				break;
			
			case 0:
			default:
				StringCopy(&vVar0, "JHP1A_FF", 24);
				break;
		}
		if (unk_0x786AF4A44E1B5B4B(&cVar1))
		{
			func_293(&vVar0);
		}
		else
		{
			func_284(&vVar0, &cVar1);
		}
		unk_0x65BA35D6D61F1574("JHP1A_FAIL");
	}
}

void func_284(char* sParam0, char* sParam1)
{
	func_292(sParam0, sParam1);
	func_285(0);
}

void func_285(int iParam0)
{
	int iVar0;
	
	if (Global_106565.f_9079 || func_6(0))
	{
		iVar0 = func_4();
		if (!func_286(iVar0))
		{
			return;
		}
		unk_0x8950ED5730F62EE8(&(Global_84464[iVar0 /*5*/].f_1), 5);
		Global_93718 = iParam0;
	}
}

int func_286(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_291();
	if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
	{
		unk_0xD4285932032EABD0(5000);
	}
	iVar0 = Global_84464[iParam0 /*5*/];
	iVar1 = Global_71859.f_109[iVar0 /*4*/];
	func_290(iVar1, 1);
	unk_0xAF40CD16D7F807F4(unk_0x95B959F18401C09A());
	unk_0x111AE40E9C93AF52(unk_0x95B959F18401C09A());
	func_287(&(Global_106565.f_2357.f_539), iVar1);
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

void func_287(var uParam0, int iParam1)
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
			if (!func_289(Global_106565.f_18527[iVar0], &vVar2, &fVar3))
			{
				Global_106565.f_18527[iVar0] = 318;
				func_288(&(uParam0->f_2296[iVar0]));
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

void func_288(var uParam0)
{
	*uParam0 = -15;
}

int func_289(int iParam0, var uParam1, float fParam2)
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
			return func_289(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_289(8, uParam1, fParam2);
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

void func_290(int iParam0, bool bParam1)
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

void func_291()
{
	Global_93717 = 1;
	if (unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1))
	{
		if (unk_0x786AF4A44E1B5B4B(&Global_71822))
		{
			switch (func_160())
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
			switch (func_160())
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

void func_292(char* sParam0, char* sParam1)
{
	if (!unk_0x786AF4A44E1B5B4B(sParam0))
	{
		if (unk_0x625A8786A9CA5F9A(sParam0) <= 16)
		{
			if (unk_0x625A8786A9CA5F9A(sParam1) <= 16)
			{
				StringCopy(&Global_71822, sParam0, 16);
				StringCopy(&Global_71826, sParam1, 16);
			}
		}
	}
}

void func_293(char* sParam0)
{
	func_294(sParam0);
	func_285(0);
}

void func_294(char* sParam0)
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

void func_295()
{
	int iVar0;
	
	if (unk_0x07AB0925A06BD5AD("buddyDeathResponse"))
	{
		start_new_script("buddyDeathResponse", 1424);
	}
	if (Global_106565.f_9079 || func_6(0))
	{
		if (!func_296())
		{
			iVar0 = func_4();
			if (iVar0 != -1)
			{
				if (!func_286(iVar0))
				{
					return;
				}
				unk_0x8950ED5730F62EE8(&(Global_84464[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_291();
		}
	}
}

int func_296()
{
	if (((Global_93682 == 13 || Global_93682 == 10) || Global_93682 == 11) || Global_93682 == 12)
	{
		return 0;
	}
	return 1;
}

