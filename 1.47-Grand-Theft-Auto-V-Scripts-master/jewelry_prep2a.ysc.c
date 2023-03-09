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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 10;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
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
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	char cLocal_79[16] = "";
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	vector3 vLocal_86 = { 0f, 0f, 0f };
	vector3 vLocal_87 = { 0f, 0f, 0f };
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	bool bLocal_91 = 0;
	int iLocal_92 = 0;
	bool bLocal_93 = 0;
	var uLocal_94 = 30;
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
	var uLocal_245 = 10;
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
	var uLocal_296 = 10;
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
	var uLocal_367 = 20;
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
	var uLocal_468 = 20;
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
	var uLocal_569 = 30;
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
	var uLocal_750 = 5;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
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
	var uLocal_781 = 7;
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
	var uLocal_807 = 0;
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
	var uLocal_831 = 5;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
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
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 3;
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
	var uLocal_873 = 16;
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
	var uLocal_949 = 0;
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
	var uLocal_973 = 10;
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
	var uLocal_1000 = 0;
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
	var uLocal_1024 = 5;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
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
	var uLocal_1050 = 5;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	struct<8> Local_1079[2];
	int iLocal_1080 = 0;
	var uLocal_1081 = 3;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 1092616192;
	var uLocal_1088 = 1101004800;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 3;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 16;
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
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = -1;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 1000;
	var uLocal_1280 = 1000;
	var uLocal_1281 = 0;
	int iLocal_1282 = 0;
	int iLocal_1283 = 0;
	int iLocal_1284 = 0;
	vector3 vLocal_1285 = { 0f, 0f, 0f };
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	int iLocal_1293 = 0;
	var uLocal_1294 = 0;
	struct<2> Local_1295 = { 0, 0 } ;
	int iLocal_1296 = 0;
	var uLocal_1297 = 0;
	struct<2> Local_1298[3];
	int iLocal_1299 = 0;
	int iLocal_1300 = 0;
	int iLocal_1301 = 0;
	int iLocal_1302 = 0;
	float fLocal_1303 = 0f;
	int iLocal_1304 = 0;
	int iLocal_1305 = 0;
	int iLocal_1306 = 0;
	int iLocal_1307 = 0;
	int iLocal_1308 = 0;
	vector3 vLocal_1309[24] = "";
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	int iLocal_1313 = 0;
	int iLocal_1314 = 0;
	int iLocal_1315 = 0;
	int iLocal_1316 = 0;
	int iLocal_1317 = 0;
	int iLocal_1318 = 0;
	int iLocal_1319 = 0;
	bool bLocal_1320 = 0;
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	StringCopy(&cLocal_79, "JHP2ADS", 16);
	iLocal_82 = joaat("s_m_m_armoured_01");
	iLocal_83 = joaat("boxville3");
	iLocal_84 = joaat("prop_idol_case_02");
	iLocal_85 = joaat("prop_yell_plastic_target");
	vLocal_86 = { 0f, 0.175f, 0f };
	vLocal_87 = { 0f, -3.6f, 0f };
	iLocal_88 = 0;
	fLocal_1303 = 0f;
	iLocal_1318 = -1;
	if (unk_0x9EC5BDC006623C42(3))
	{
		func_301(5);
	}
	unk_0xC48A4BABDFAAB2B9(1);
	func_280();
	while (true)
	{
		unk_0x65F534DDBF48606F("M_JewelStoreJobPrep2A", 0);
		if (bLocal_93)
		{
			func_278();
		}
		func_276(&uLocal_94);
		func_201();
		func_199();
		if (!bLocal_91)
		{
			func_195();
			func_194(&Local_1079);
			func_1();
		}
		unk_0x453924F2AAE93AD9(0.8f);
		wait(0);
	}
}

void func_1()
{
	switch (iLocal_88)
	{
		case 0:
			if (func_22())
			{
				func_21(1);
			}
			break;
		
		case 1:
			func_2();
			break;
	}
}

void func_2()
{
	unk_0x65BA35D6D61F1574("JHP2A_STOP");
	unk_0xD362430CD61A9B08();
	unk_0x117A9E054B0F10FB(unk_0x95B959F18401C09A());
	func_8(0);
	if (func_7(87))
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
	
	unk_0xF4197686EF83F52A(unk_0x95B959F18401C09A(), 0);
	unk_0x8C4EA5F6857553AE(joaat("boxville3"), false);
	unk_0xE44D3FEE07A9EF2C(joaat("s_m_m_armoured_01"), false);
	if (func_20())
	{
		func_13(0);
	}
	iLocal_1305 = 0;
	Global_68917 = 0;
	if (bParam0)
	{
		unk_0x4B06B5746CBEC99F(1f);
		unk_0x117A9E054B0F10FB(unk_0x95B959F18401C09A());
		Global_68917 = 0;
	}
	if (unk_0x765F6FEEFF39224F(iLocal_1293))
	{
		if (bParam0)
		{
			unk_0x7AC8DF0B83EB4C6B(&iLocal_1293);
		}
		else
		{
			unk_0x65F544B458249682(&iLocal_1293);
		}
	}
	if (unk_0x765F6FEEFF39224F(vLocal_1285.x))
	{
		if (bParam0)
		{
			unk_0x4B8B69DAE5BAC592(&vLocal_1285);
		}
		else
		{
			unk_0x1F45B4626AC4A4C0(&vLocal_1285);
		}
	}
	if (unk_0x765F6FEEFF39224F(Local_1295))
	{
		if (bParam0 && !unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
		{
			unk_0x7AC8DF0B83EB4C6B(&Local_1295);
		}
		else
		{
			unk_0x65F544B458249682(&Local_1295);
		}
	}
	iVar0 = 0;
	while (iVar0 < Local_1298)
	{
		if (unk_0x765F6FEEFF39224F(Local_1298[iVar0 /*2*/]))
		{
			if (bParam0)
			{
				unk_0xEC26F4BFC9942A0C(&(Local_1298[iVar0 /*2*/]));
			}
			else
			{
				if (unk_0x9F4718FD61B07058(Local_1298[iVar0 /*2*/]))
				{
					unk_0x35F11A916FDFCF32(Local_1298[iVar0 /*2*/], 1, 1);
				}
				unk_0x26ABAE1D971CEACD(&(Local_1298[iVar0 /*2*/]));
			}
		}
		iVar0++;
	}
	if (unk_0x765F6FEEFF39224F(iLocal_1299))
	{
		if (bParam0)
		{
			unk_0xEC26F4BFC9942A0C(&iLocal_1299);
		}
		else
		{
			if (unk_0x9F4718FD61B07058(iLocal_1299))
			{
				unk_0x35F11A916FDFCF32(iLocal_1299, 1, 1);
			}
			unk_0x26ABAE1D971CEACD(&iLocal_1299);
		}
	}
	if (iLocal_1300 != 0)
	{
		unk_0xF1CFA0046BB67893(iLocal_1300, 0);
	}
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		if (unk_0xEAF6E82C7BDE5A4C(unk_0x33CD235DF1E6A94E(), joaat("weapon_briefcase"), 0))
		{
			unk_0x681FB12989BD5DEA(unk_0x33CD235DF1E6A94E(), joaat("weapon_briefcase"));
		}
	}
	func_11(&uLocal_1270, 0, 0);
	func_10();
	if (unk_0xEAF6E82C7BDE5A4C(unk_0x33CD235DF1E6A94E(), joaat("weapon_briefcase"), 0))
	{
		unk_0x681FB12989BD5DEA(unk_0x33CD235DF1E6A94E(), joaat("weapon_briefcase"));
	}
	func_9(6, 0);
}

void func_9(int iParam0, bool bParam1)
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

void func_10()
{
	Global_89567 = 0;
}

void func_11(var uParam0, int iParam1, int iParam2)
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
			unk_0x0F8EAEEC97DDBCB3(-1, "FocusOut", "HintCamSounds", true);
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
		if (func_12(uParam0->f_3))
		{
			unk_0xEDF90B96BED57BCE(1);
		}
	}
	if (!unk_0x6D2E2622CA149402(sVar0))
	{
		if (func_12(sVar0))
		{
			unk_0xEDF90B96BED57BCE(1);
		}
	}
}

int func_12(char* sParam0)
{
	unk_0x6D39881CA5436178(sParam0);
	return unk_0xA32C2C4DF096C08A(0);
}

void func_13(bool bParam0)
{
	if (bParam0)
	{
		func_19();
		if (Global_14553.f_1 == 10 || Global_14553.f_1 == 9)
		{
			unk_0x8950ED5730F62EE8(&Global_2424, 16);
		}
		Global_14553.f_1 = 1;
		if (func_18(0))
		{
			func_14(0);
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

void func_14(int iParam0)
{
	if (func_17())
	{
		return;
	}
	if (Global_14725)
	{
		func_16(0, 0);
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

int func_15()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_16(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_18(0))
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

bool func_17()
{
	return unk_0x0E4018692D92041D(Global_1681628, 19);
}

int func_18(int iParam0)
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

void func_19()
{
	if (Global_14553.f_1 == 9 || Global_14553.f_1 == 10)
	{
		Global_15919 = 0;
		Global_15915 = 1;
	}
}

int func_20()
{
	if (Global_14553.f_1 == 1)
	{
		return 1;
	}
	return 0;
}

void func_21(int iParam0)
{
	if (iParam0 == 2)
	{
	}
	else
	{
		iLocal_89 = 0;
		iLocal_90 = 0;
		iLocal_88 = iParam0;
	}
}

int func_22()
{
	vector3 vVar0;
	vector3 vVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	
	vVar0 = { 692.8256f, -1012.544f, 21.722f };
	vVar1 = { 707.15f, -959.66f, 29.4f };
	if (!iLocal_90)
	{
		if (func_193(Local_1295))
		{
			if (unk_0x0525753DC633D9F8(Local_1295) != 0)
			{
				Local_1295.f_1 = unk_0x0525753DC633D9F8(Local_1295);
			}
			else
			{
				Local_1295.f_1 = func_192(Local_1295, 0, 0);
			}
			func_191("JHP2A_STEAL", 7500, 1);
			func_190("JHP2A_HLP2", 15000);
		}
		else if (unk_0x0525753DC633D9F8(Local_1295) != 0)
		{
			unk_0x1F685E0FB1FEAB13(1);
			iVar3 = unk_0x0525753DC633D9F8(Local_1295);
			unk_0x1ABDB383C83A336A(&iVar3);
			unk_0x1F685E0FB1FEAB13(0);
		}
		unk_0x65BA35D6D61F1574("JHP2A_START");
		func_133(0f, 0f, 0f, 0f, 1, func_186());
		unk_0xB5D26BFA756D0D11(5f, 5f, 4);
		iLocal_1313 = 0;
		iLocal_90 = 1;
		bLocal_1320 = true;
		iLocal_89 = 1;
	}
	if (iLocal_90)
	{
		func_132();
		switch (iLocal_89)
		{
			case 1:
				if ((((((iLocal_1282 == 0 && unk_0x765F6FEEFF39224F(Local_1295)) && unk_0x91D5C8283D19AF49(Local_1295, 0)) && unk_0x765F6FEEFF39224F(vLocal_1285.x)) && !unk_0xBC2FC12AD0FBF72E(vLocal_1285.x)) && unk_0x10930B9CAD4111C2(vLocal_1285.x, Local_1295, 0)) && func_129(&(Local_1079[0 /*8*/])))
				{
					func_100(&uLocal_1270, Local_1295, 0, 0, 1, 1, 1);
				}
				else
				{
					func_11(&uLocal_1270, 0, 0);
				}
				if (iLocal_1282 == 3 || iLocal_1282 == 2)
				{
					unk_0xB5D26BFA756D0D11(5f, 5f, 4);
					func_97(&iLocal_1080, 1, 0);
					if (unk_0xFAC8F20FBC764F4D() && func_12("JHP2A_HLP2"))
					{
						unk_0xEDF90B96BED57BCE(1);
					}
					if (!iLocal_1313)
					{
						func_191("JHP2A_TAKEBZ", 7500, 1);
					}
					iLocal_89 = 2;
				}
				else if ((unk_0x765F6FEEFF39224F(iLocal_1296) && unk_0x91D5C8283D19AF49(iLocal_1296, 0)) && unk_0x221C953018491A32(iLocal_1296, Local_1295))
				{
					if (unk_0xE38E3CF1625A4145(Local_1295.f_1))
					{
						unk_0xB5D26BFA756D0D11(5f, 5f, 4);
						unk_0x1F685E0FB1FEAB13(1);
						unk_0x1ABDB383C83A336A(&(Local_1295.f_1));
						unk_0x1F685E0FB1FEAB13(0);
						func_96(705, 0);
					}
					func_95(&iLocal_1080, vVar0, 0.1f, 0.1f, 0.1f, 1, iLocal_1296, "JHP2A_RTNVAN", "", "", 1, 0, 1, -1);
					if (unk_0xD4B4F68F3449CBEC(Local_1295, 692.9143f, -1003.556f, 21.50839f, 692.6511f, -1021.604f, 26.20675f, 9.75f, 0, true, 0))
					{
						unk_0xA4DF1E31BCDF9978(iLocal_1296, 5f, -1, 0);
						iLocal_89 = 101;
					}
				}
				else if (iLocal_1282 == 1)
				{
					func_97(&iLocal_1080, 1, 0);
					if (!unk_0xE38E3CF1625A4145(Local_1298[0 /*2*/].f_1))
					{
						unk_0xB5D26BFA756D0D11(5f, 5f, 4);
						Local_1298[0 /*2*/].f_1 = func_94(Local_1298[0 /*2*/]);
						func_191("JHP2A_TAKEBZ", 7500, 1);
						iLocal_1313 = 1;
						unk_0x9152A6430680BF0A(Local_1295, 0);
					}
				}
				else if (iLocal_1282 == 0)
				{
					if (unk_0xE38E3CF1625A4145(Local_1295.f_1))
					{
						unk_0xB5D26BFA756D0D11(5f, 5f, 4);
						unk_0x1F685E0FB1FEAB13(1);
						unk_0x1ABDB383C83A336A(&(Local_1295.f_1));
						unk_0x1F685E0FB1FEAB13(0);
						func_96(705, 0);
					}
					if (func_92(&iLocal_1080, vVar0, 692.9143f, -1003.556f, 21.50839f, 692.6511f, -1021.604f, 26.20675f, 9.75f, 1, Local_1295, "JHP2A_RTNVAN", "", "", unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), Local_1295, 0), 0, 1, -1))
					{
						iLocal_89 = 101;
					}
					if (unk_0xE38E3CF1625A4145(iLocal_1080) && unk_0x6A179B2A6E1E9CF8(iLocal_1080))
					{
						unk_0x1C316779E36C1967(iLocal_1080, false);
					}
				}
				break;
			
			case 101:
				if (unk_0x765F6FEEFF39224F(Local_1295) && unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), Local_1295, 0))
				{
					iVar4 = Local_1295;
				}
				else if (unk_0x765F6FEEFF39224F(iLocal_1296) && unk_0x221C953018491A32(iLocal_1296, Local_1295))
				{
					iVar4 = iLocal_1296;
				}
				if (func_90(iVar4, 1093140480, 1, 1056964608, 0, 1, 0))
				{
					if (func_7(87))
					{
						unk_0xB5D26BFA756D0D11(5f, 5f, 4);
						iLocal_89 = 1000;
					}
					else
					{
						unk_0xB5D26BFA756D0D11(5f, 5f, 4);
						unk_0x07C339D4328CA16C(unk_0x33CD235DF1E6A94E(), 0, 0);
						iLocal_89++;
					}
				}
				break;
			
			case 102:
				if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
				{
					unk_0xD362430CD61A9B08();
					unk_0x9152A6430680BF0A(Local_1295, 0);
					unk_0x23F395CF89089EB2(Local_1295, 1);
					if (unk_0x765F6FEEFF39224F(iLocal_1296))
					{
						unk_0xA4DF1E31BCDF9978(iLocal_1296, 5f, 1, 0);
					}
					func_89(0, -1);
					if (unk_0x765F6FEEFF39224F(Local_1298[0 /*2*/]))
					{
						unk_0xEC26F4BFC9942A0C(&(Local_1298[0 /*2*/]));
					}
					if (unk_0x765F6FEEFF39224F(Local_1298[1 /*2*/]))
					{
						unk_0xEC26F4BFC9942A0C(&(Local_1298[1 /*2*/]));
					}
					if (unk_0x765F6FEEFF39224F(Local_1298[2 /*2*/]))
					{
						unk_0xEC26F4BFC9942A0C(&(Local_1298[2 /*2*/]));
					}
					return 1;
				}
				break;
			
			case 2:
				if (!unk_0xEAF6E82C7BDE5A4C(unk_0x33CD235DF1E6A94E(), joaat("weapon_briefcase"), 0))
				{
					iVar2 = 0;
					while (iVar2 < Local_1298)
					{
						if (unk_0x765F6FEEFF39224F(Local_1298[iVar2 /*2*/]) && !unk_0x9F4718FD61B07058(Local_1298[iVar2 /*2*/]))
						{
							if (unk_0xE38E3CF1625A4145(Local_1295.f_1))
							{
								unk_0x1F685E0FB1FEAB13(1);
								unk_0x1ABDB383C83A336A(&(Local_1295.f_1));
								unk_0x1F685E0FB1FEAB13(0);
							}
							if (!unk_0xE38E3CF1625A4145(Local_1298[iVar2 /*2*/].f_1))
							{
								Local_1298[iVar2 /*2*/].f_1 = func_94(Local_1298[iVar2 /*2*/]);
							}
						}
						iVar2++;
					}
					iVar2 = 0;
					while (iVar2 < Local_1298)
					{
						if (unk_0x765F6FEEFF39224F(Local_1298[iVar2 /*2*/]) && !unk_0x9F4718FD61B07058(Local_1298[iVar2 /*2*/]))
						{
							if (!unk_0xEAF6E82C7BDE5A4C(unk_0x33CD235DF1E6A94E(), joaat("weapon_briefcase"), 0))
							{
								bVar5 = func_88(Local_1298[iVar2 /*2*/]);
								if ((bVar5 && unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), unk_0x2CA911E7569D12EA(Local_1295, 0f, -3f, -0.5f), unk_0x2CA911E7569D12EA(Local_1295, 0f, -4.5f, 1f), 1.68f, 0, true, 1)) || (!bVar5 && unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), unk_0xFBB1F99A825CAB09(Local_1298[iVar2 /*2*/], true), 0.75f, 0.75f, 4f, false, false, 1)))
								{
									unk_0x697EBA5CF1A6AB57(unk_0x33CD235DF1E6A94E(), joaat("weapon_briefcase"), 1, false, false);
									unk_0xEC26F4BFC9942A0C(&(Local_1298[iVar2 /*2*/]));
									unk_0xD362430CD61A9B08();
									unk_0x0F8EAEEC97DDBCB3(-1, "PICKUP_WEAPON_SMOKEGRENADE", "HUD_FRONTEND_WEAPONS_PICKUPS_SOUNDSET", true);
								}
							}
						}
						iVar2++;
					}
				}
				else
				{
					func_96(705, 0);
					iVar2 = 0;
					while (iVar2 < Local_1298)
					{
						if (unk_0xE38E3CF1625A4145(Local_1298[iVar2 /*2*/].f_1))
						{
							unk_0x1ABDB383C83A336A(&(Local_1298[iVar2 /*2*/].f_1));
						}
						iVar2++;
					}
					func_42(&iLocal_1080, vVar1, 0.1f, 0.1f, 0.1f, 0, "JHP2A_RTNBZ", 1, 1, -1, 1);
					unk_0x96C4B46F194803A7(unk_0x33CD235DF1E6A94E(), &iVar6, 1);
					if (unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), 722.9849f, -965.7473f, 32.29691f, 50f, 40f, 11.4375f, false, true, 0))
					{
						iVar8 = 1;
					}
					if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), 709.7432f, -960.3367f, 29.39533f, 703.6478f, -960.3293f, 33.65119f, 4.125f, 0, true, 0))
					{
						bVar7 = true;
					}
					if (bVar7 || ((iVar8 && !unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1)) && bLocal_1320))
					{
						unk_0x3FD9339AA95E323F(0, 37, 1);
						unk_0x3FD9339AA95E323F(0, 44, 1);
						if (!func_20())
						{
							func_13(1);
						}
						if (!unk_0x3D858AB1F749CC60(unk_0x33CD235DF1E6A94E()))
						{
							if (!unk_0xB5D4E8F757C24136(unk_0x33CD235DF1E6A94E(), 0) && !func_18(0))
							{
								if (iVar6 != joaat("weapon_briefcase"))
								{
									unk_0x274C6068B660FFB4(unk_0x33CD235DF1E6A94E(), joaat("weapon_briefcase"), true);
								}
							}
						}
					}
					if (bVar7)
					{
						if (iVar6 == joaat("weapon_briefcase"))
						{
							if (!func_12("JHP2A_HLP1"))
							{
								func_41("JHP2A_HLP1");
							}
						}
						if (unk_0x833B1A3D9F713E03(0, 51) && iVar6 == joaat("weapon_briefcase"))
						{
							if (func_12("JHP2A_HLP1"))
							{
								unk_0xEDF90B96BED57BCE(1);
							}
							iVar9 = unk_0xC79345083BCCDC56(unk_0x33CD235DF1E6A94E(), 1);
							unk_0x7FC263D448DC8CAC(iVar9);
							unk_0xB5D26BFA756D0D11(3f, 5f, 4);
							unk_0xE9739440E5BF08EE(-1, "Drop_Case", iVar9, "JWL_PREP_2A_SOUNDS", false, 0);
							unk_0x26ABAE1D971CEACD(&iVar9);
							unk_0x274C6068B660FFB4(unk_0x33CD235DF1E6A94E(), joaat("weapon_unarmed"), true);
							unk_0x681FB12989BD5DEA(unk_0x33CD235DF1E6A94E(), joaat("weapon_briefcase"));
							func_89(0, -1);
							func_40(706);
							func_97(&iLocal_1080, 1, 0);
							if (func_7(87))
							{
								if (func_20())
								{
									func_13(0);
								}
								iLocal_89 = 2000;
							}
							else
							{
								return 1;
							}
						}
					}
					else
					{
						if (func_20())
						{
							func_13(0);
						}
						if (unk_0xFAC8F20FBC764F4D())
						{
							if (func_12("JHP2A_HLP1"))
							{
								unk_0xEDF90B96BED57BCE(1);
							}
						}
					}
					bLocal_1320 = unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1);
				}
				break;
			
			case 1000:
				unk_0x07C339D4328CA16C(unk_0x33CD235DF1E6A94E(), 0, 0);
				unk_0x9611832841071B69(unk_0x33CD235DF1E6A94E(), true);
				unk_0x9152A6430680BF0A(Local_1295, 0);
				unk_0x23F395CF89089EB2(Local_1295, 1);
				func_39(1);
				func_38(1, 0);
				if (func_36())
				{
					if (func_25(&uLocal_1105, 12, "JHFAUD", "JHF_BZD2", 8, 1, 0, 0, 0))
					{
						unk_0xB5D26BFA756D0D11(5f, 5f, 4);
						iLocal_89++;
					}
				}
				break;
			
			case 1001:
				func_38(1, 0);
				if (func_24())
				{
					iLocal_89++;
				}
				break;
			
			case 1002:
				func_38(1, 0);
				if (!func_24())
				{
					func_23();
					return 1;
				}
				break;
			
			case 2000:
				unk_0xB5D26BFA756D0D11(5f, 5f, 4);
				unk_0x9611832841071B69(unk_0x33CD235DF1E6A94E(), true);
				Global_68917 = 1;
				func_39(1);
				func_38(1, 0);
				iLocal_89++;
				break;
			
			case 2001:
				func_38(1, 0);
				if (func_36())
				{
					if (func_25(&uLocal_1105, 12, "JHFAUD", "JHF_BZD2", 8, 1, 0, 0, 0))
					{
						iLocal_89++;
					}
				}
				break;
			
			case 2002:
				func_38(1, 0);
				if (func_24())
				{
					iLocal_89++;
				}
				break;
			
			case 2003:
				func_38(1, 0);
				if (!func_24())
				{
					func_23();
					return 1;
				}
				break;
			}
	}
	return 0;
}

void func_23()
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

int func_24()
{
	if (Global_14553.f_1 == 10 || Global_14553.f_1 == 9)
	{
		return 1;
	}
	return 0;
}

bool func_25(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_35(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
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
	return func_26(sParam3, iParam4, bParam8);
}

int func_26(char* sParam0, int iParam1, bool bParam2)
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
					func_34();
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
		if (func_33(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_32();
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
				func_30();
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
				if (func_29())
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
			func_28();
			Global_15876 = bParam2;
		}
		Global_15868 = iParam1;
		StringCopy(&Global_15485, sParam0, 24);
		Global_14732 = 0;
		func_27();
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
		func_34();
	}
	return 0;
}

void func_27()
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

void func_28()
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

int func_29()
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

void func_30()
{
	if (func_31(14))
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
		Global_14553 = func_186();
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

bool func_31(int iParam0)
{
	return Global_36425 == iParam0;
}

void func_32()
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

bool func_33(int iParam0, int iParam1)
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

void func_34()
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

void func_35(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_36()
{
	if (func_37())
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

int func_37()
{
	if (Global_15866 != 0 || unk_0x12BF789190D82474())
	{
		return 1;
	}
	return 0;
}

void func_38(bool bParam0, bool bParam1)
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

void func_39(bool bParam0)
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

void func_40(int iParam0)
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

void func_41(char* sParam0)
{
	unk_0x37621D6689F9E3C3(sParam0);
	unk_0x092150016C06C431(0, 1, true, -1);
}

int func_42(int iParam0, vector3 vParam1, vector3 vParam2, bool bParam3, char* sParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	return func_43(iParam0, vParam1, vParam2, func_87(), func_87(), bParam3, 3, 0, 0, 0, 0, sParam4, func_86(), func_86(), func_86(), func_86(), func_86(), 0, bParam5, func_86(), 0, 0, bParam6, iParam7, func_86(), func_86(), func_86(), bParam8, 1065353216);
}

int func_43(int iParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, vector3 vParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, bool bParam17, bool bParam18, char* sParam19, bool bParam20, int iParam21, bool bParam22, int iParam23, int iParam24, int iParam25, int iParam26, bool bParam27, float fParam28)
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
	func_85(iParam0);
	func_84(iParam0);
	func_83();
	if (func_66(iParam0, iParam0->f_17[0], iParam0->f_17[1], iParam0->f_17[2], sParam12, sParam13, sParam14, sParam15, iParam0->f_8, bParam17, iParam10, 0, 0, iParam24, iParam25, iParam26, iParam6, bParam18))
	{
		func_65(sParam12);
		func_65(sParam13);
		func_65(sParam14);
		func_65(sParam15);
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
				if (func_63(iParam0, iParam21))
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
				func_65(sParam16);
				func_65(sParam19);
				func_65("MORE_SEATS");
				if (bParam18 && unk_0x09287BFEE1D9F6EF(unk_0x95B959F18401C09A(), 0))
				{
					if (unk_0xE38E3CF1625A4145(iParam0->f_5))
					{
						unk_0x1ABDB383C83A336A(&(iParam0->f_5));
						func_65(sParam11);
					}
					if (unk_0xE38E3CF1625A4145(*iParam0))
					{
						unk_0x1ABDB383C83A336A(iParam0);
					}
					if ((!func_60(iParam0, 1) && !func_59(iParam0)) && !unk_0x0E4018692D92041D(iParam0->f_13, 0))
					{
						if (bParam22)
						{
							func_58(iParam0, "LOSE_WANTED", 0);
							if (!unk_0xBC2FC12AD0FBF72E(iParam0->f_17[0]))
							{
								func_56(iParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
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
						func_65("LOSE_WANTED");
						unk_0xCE689A8E8C42ED78(&(iParam0->f_13), 0);
						unk_0x8950ED5730F62EE8(&(iParam0->f_13), 1);
					}
					if (unk_0x0E4018692D92041D(iParam0->f_13, 1))
					{
						if (!func_60(iParam0, 1))
						{
							if (!unk_0xBC2FC12AD0FBF72E(iParam0->f_17[0]))
							{
								func_56(iParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
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
						iParam0->f_5 = func_55(vVar3, 0);
						if (!iParam23 == -1)
						{
							unk_0xA20C1DE21F2F071C(iParam0->f_5, iParam23);
						}
						if (bParam27)
						{
							func_54(iParam0->f_5, iParam0);
						}
					}
					else if (!func_53(vVar3, unk_0x7BC3899BF7085A7D(iParam0->f_5), 0.1f, 0))
					{
						unk_0xA0220BF0AB292278(iParam0->f_5, vVar3);
						if (bParam27)
						{
							func_54(iParam0->f_5, iParam0);
						}
					}
					if (!func_60(iParam0, 2))
					{
						if (!unk_0x0E4018692D92041D(iParam0->f_13, 2))
						{
							func_58(iParam0, sParam11, 0);
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
								else if (!unk_0x731F434EAFE6E9FE(iParam0->f_17[iVar2], func_52()) || !func_50(iParam0->f_17[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (func_47(iParam0))
							{
								func_65(sParam11);
								func_65(sParam16);
								func_65(sParam12);
								func_65(sParam13);
								func_65(sParam14);
								func_65(sParam15);
								func_65("LOSE_WANTED");
								func_65("MORE_SEATS");
								func_65(sParam19);
								func_97(iParam0, 1, 0);
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
					func_65(sParam16);
					func_65(sParam19);
					if (unk_0xE38E3CF1625A4145(iParam0->f_5) || unk_0xE38E3CF1625A4145(*iParam0))
					{
						unk_0x1ABDB383C83A336A(&(iParam0->f_5));
						unk_0x1ABDB383C83A336A(iParam0);
						func_65(sParam11);
					}
					if ((!func_60(iParam0, 1) && !func_59(iParam0)) && !unk_0x0E4018692D92041D(iParam0->f_13, 0))
					{
						if (bParam22)
						{
							func_58(iParam0, "LOSE_WANTED", 0);
							if (!unk_0xBC2FC12AD0FBF72E(iParam0->f_17[0]))
							{
								func_56(iParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
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
						func_65("LOSE_WANTED");
						unk_0xCE689A8E8C42ED78(&(iParam0->f_13), 0);
						unk_0x8950ED5730F62EE8(&(iParam0->f_13), 1);
					}
					if (unk_0x0E4018692D92041D(iParam0->f_13, 1))
					{
						if (!func_60(iParam0, 1))
						{
							if (!unk_0xBC2FC12AD0FBF72E(iParam0->f_17[0]))
							{
								func_56(iParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
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
								func_65(sParam11);
							}
							*iParam0 = func_44(iParam10, 0, 0);
							unk_0xAE71BEA7BBBFB78F(*iParam0, 2);
							if (!unk_0x0E4018692D92041D(iParam0->f_13, 4))
							{
								func_54(*iParam0, iParam0);
							}
						}
						if (!func_60(iParam0, 2))
						{
							if (!unk_0x0E4018692D92041D(iParam0->f_13, 3))
							{
								func_58(iParam0, sParam16, 0);
								unk_0x8950ED5730F62EE8(&(iParam0->f_13), 3);
								unk_0xCE689A8E8C42ED78(&(iParam0->f_13), 4);
							}
							else if (unk_0x0E4018692D92041D(iParam0->f_13, 9))
							{
								if (!unk_0x6D2E2622CA149402(sParam19))
								{
									if (!unk_0x0E4018692D92041D(iParam0->f_13, 4))
									{
										func_58(iParam0, sParam19, 0);
										unk_0x8950ED5730F62EE8(&(iParam0->f_13), 4);
									}
								}
								else if (!unk_0x0E4018692D92041D(iParam0->f_13, 4))
								{
									func_58(iParam0, sParam16, 0);
									unk_0x8950ED5730F62EE8(&(iParam0->f_13), 4);
								}
								if (!unk_0x0E4018692D92041D(iParam0->f_13, 23))
								{
									if (!unk_0xBC2FC12AD0FBF72E(iParam0->f_17[0]))
									{
										func_56(iParam0->f_17[0], "GET_IN_CAR", 3);
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
					func_65(sParam11);
				}
				if (iParam6 == 4 || iParam6 == 5)
				{
					if (iParam21 > 0)
					{
						if (!func_60(iParam0, 2))
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
										func_56(iParam0->f_17[iVar7], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_58(iParam0, "MORE_SEATS", 0);
									unk_0x8950ED5730F62EE8(&(iParam0->f_13), 13);
								}
							}
							else if (!unk_0x0E4018692D92041D(iParam0->f_13, 3))
							{
								func_58(iParam0, sParam16, 0);
								unk_0x8950ED5730F62EE8(&(iParam0->f_13), 3);
								unk_0xCE689A8E8C42ED78(&(iParam0->f_13), 4);
							}
							else if (!unk_0x0E4018692D92041D(iParam0->f_13, 4))
							{
								if (unk_0x0E4018692D92041D(iParam0->f_13, 9))
								{
									func_58(iParam0, sParam19, 0);
									unk_0x8950ED5730F62EE8(&(iParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_60(iParam0, 2))
					{
						if (!unk_0x0E4018692D92041D(iParam0->f_13, 3))
						{
							func_58(iParam0, sParam16, 0);
							unk_0x8950ED5730F62EE8(&(iParam0->f_13), 3);
							unk_0xCE689A8E8C42ED78(&(iParam0->f_13), 4);
						}
						else if (unk_0x0E4018692D92041D(iParam0->f_13, 9))
						{
							if (!unk_0x6D2E2622CA149402(sParam19))
							{
								if (!unk_0x0E4018692D92041D(iParam0->f_13, 4))
								{
									func_58(iParam0, sParam19, 0);
									unk_0x8950ED5730F62EE8(&(iParam0->f_13), 4);
								}
							}
							else if (!unk_0x0E4018692D92041D(iParam0->f_13, 4))
							{
								func_58(iParam0, sParam16, 0);
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
		func_65(sParam11);
		func_65(sParam16);
		func_65(sParam19);
		func_65(sParam16);
		func_65("LOSE_WANTED");
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

int func_44(int iParam0, bool bParam1, bool bParam2)
{
	return func_45(iParam0, !bParam1, bParam2);
}

int func_45(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0x765F6FEEFF39224F(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x8848A15CBDADDC60(iParam0);
	if (unk_0x680558231C80291D(iParam0))
	{
		unk_0xCE5C49921A521962(iVar0, func_46(unk_0xB331FCEB94EB05C8(), 1f, 1f));
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
		unk_0xCE5C49921A521962(iVar0, func_46(unk_0xB331FCEB94EB05C8(), 0.7f, 0.7f));
		unk_0xBF11C8A43770C598(iVar0, bParam1);
	}
	else if (unk_0xA3A29DB165882310(iParam0))
	{
		unk_0xCE5C49921A521962(iVar0, func_46(unk_0xB331FCEB94EB05C8(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_46(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_47(int iParam0)
{
	if (unk_0x0E4018692D92041D(iParam0->f_13, 12))
	{
		if (func_49(unk_0x33CD235DF1E6A94E()))
		{
			if (func_48(1, 0, 1) || unk_0x0E4018692D92041D(iParam0->f_13, 7))
			{
				return 1;
			}
		}
	}
	else if (func_48(1, 0, 1) || unk_0x0E4018692D92041D(iParam0->f_13, 7))
	{
		return 1;
	}
	return 0;
}

int func_48(bool bParam0, bool bParam1, bool bParam2)
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

int func_49(int iParam0)
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

int func_50(int iParam0, int iParam1)
{
	if (!unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		if (unk_0x5C415D10D5CBF689(unk_0x33CD235DF1E6A94E()) && iParam1)
		{
			if (func_51(unk_0x33CD235DF1E6A94E(), iParam0))
			{
				unk_0x2A4DFF8BF4A53EA1(func_52(), 50f);
				return 1;
			}
		}
		else if (unk_0x731F434EAFE6E9FE(iParam0, func_52()))
		{
			unk_0x2A4DFF8BF4A53EA1(func_52(), 50f);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_51(int iParam0, int iParam1)
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

int func_52()
{
	return unk_0x733DE09777D47CD6(unk_0x3EE1295CEFBEFED4());
}

int func_53(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)
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

void func_54(int iParam0, int iParam1)
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

int func_55(vector3 vParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x2C0ED4741A007C6A(vParam0);
	unk_0xCE5C49921A521962(iVar0, func_46(unk_0xB331FCEB94EB05C8(), 1f, 1f));
	unk_0x1C316779E36C1967(iVar0, bParam1);
	return iVar0;
}

void func_56(int iParam0, char* sParam1, int iParam2)
{
	unk_0xAEED0213982928AC(iParam0, sParam1, func_57(iParam2), 1);
}

int func_57(int iParam0)
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

void func_58(int iParam0, char* sParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!unk_0x6D2E2622CA149402(sParam1))
		{
			if (!unk_0xCE3CFF625BEBAA04(sParam1, ""))
			{
				func_191(sParam1, 7500, 1);
			}
		}
	}
	iParam0->f_10 = unk_0xE3903F59E2F22150();
}

int func_59(int iParam0)
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

int func_60(int iParam0, int iParam1)
{
	if (iParam1 != 1 || unk_0x75E8D03BBC787BAD())
	{
		if (unk_0xC4B7D5901EDA35B5())
		{
			return 1;
		}
		if (func_62(iParam0))
		{
			return 1;
		}
	}
	if (iParam1 != 2 || unk_0x75E8D03BBC787BAD())
	{
		if (func_37() && !func_61())
		{
			return 1;
		}
	}
	return 0;
}

int func_61()
{
	if (Global_16877 == 1)
	{
		return 1;
	}
	return 0;
}

int func_62(var uParam0)
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

int func_63(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		iVar0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
		if (func_64(iVar0, uParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_64(int iParam0, var uParam1, int iParam2)
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

void func_65(char* sParam0)
{
	if (!unk_0x6D2E2622CA149402(sParam0))
	{
		unk_0x2E38114179FC5F06(sParam0);
	}
}

int func_66(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)
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
						if (func_64(uParam0->f_21, uParam0, iVar3))
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (!unk_0xBC2FC12AD0FBF72E(uParam0->f_17[iVar0]))
								{
									unk_0xA9E472293522522F(uParam0->f_17[iVar0], 1f);
									if (unk_0x731F434EAFE6E9FE(uParam0->f_17[iVar0], func_52()))
									{
										unk_0x5D94F4D6FE7DA516(uParam0->f_17[iVar0]);
									}
									if (unk_0xD76D6BCC14B95CE1(uParam0->f_17[iVar0], -1794415470) == 7 && !func_82(uParam0->f_17[iVar0], uParam0->f_21))
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
					if (!unk_0x731F434EAFE6E9FE(uParam0->f_17[iVar0], func_52()))
					{
						if (func_80(uParam0, uParam0->f_17[iVar0], fParam8, 1))
						{
							unk_0x140D4A6561E11695(uParam0->f_17[iVar0], func_52());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!unk_0x0E4018692D92041D(uParam0->f_13, 26))
	{
		if ((!func_79(uParam0) && unk_0x5C415D10D5CBF689(unk_0x33CD235DF1E6A94E())) && !unk_0x765F6FEEFF39224F(iParam10))
		{
			iVar10 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
			if (unk_0x91D5C8283D19AF49(iVar10, 0))
			{
				if (!unk_0x0E4018692D92041D(uParam0->f_13, 13))
				{
					if (iParam16 == 4 || iParam16 == 5)
					{
					}
					if (!func_60(uParam0, 2))
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
							func_56(uParam0->f_17[iVar18], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_58(uParam0, "MORE_SEATS", 0);
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
			func_65("MORE_SEATS");
		}
		if (!unk_0x765F6FEEFF39224F(iParam10))
		{
			if ((!unk_0xBC2FC12AD0FBF72E(uParam0->f_17[0]) || !unk_0xBC2FC12AD0FBF72E(uParam0->f_17[1])) || !unk_0xBC2FC12AD0FBF72E(uParam0->f_17[2]))
			{
				if (!unk_0x0E4018692D92041D(uParam0->f_13, 31))
				{
					if (unk_0x5C415D10D5CBF689(unk_0x33CD235DF1E6A94E()) && !func_60(uParam0, 2))
					{
						iVar10 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
						if (func_78(iVar10, uParam0))
						{
							func_58(uParam0, "CMN_VEHSUIT", 0);
							unk_0x8950ED5730F62EE8(&(uParam0->f_13), 31);
						}
					}
				}
				else if (!unk_0x5C415D10D5CBF689(unk_0x33CD235DF1E6A94E()))
				{
					unk_0xCE689A8E8C42ED78(&(uParam0->f_13), 31);
					func_65("CMN_VEHSUIT");
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
					if (!unk_0x731F434EAFE6E9FE(uParam0->f_17[iVar0], func_52()))
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
							if (unk_0x731F434EAFE6E9FE(uParam0->f_17[iVar0], func_52()))
							{
								if (!func_79(uParam0) && unk_0x5C415D10D5CBF689(unk_0x33CD235DF1E6A94E()))
								{
									if (!func_77(uParam0->f_17[iVar0]))
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
					if (!unk_0x731F434EAFE6E9FE(uParam0->f_17[iVar0], func_52()))
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
					if (unk_0x731F434EAFE6E9FE(uParam0->f_17[iVar0], func_52()))
					{
						iVar21 = unk_0x6EE765D5B613AB2A(unk_0x33CD235DF1E6A94E());
						if (unk_0x765F6FEEFF39224F(iVar21))
						{
							if (func_64(iVar21, uParam0, 0))
							{
								if (func_76(iVar0, uParam0) || !unk_0x0E4018692D92041D(uParam0->f_13, 27))
								{
									unk_0x9AA80CA39F863D9D(uParam0->f_17[iVar0], iVar0);
									func_75(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										unk_0x8950ED5730F62EE8(&(uParam0->f_13), 27);
									}
								}
							}
							else if (!func_76(iVar0, uParam0))
							{
								if (unk_0x541D5C57194E73C4(iVar21) == joaat("sentinel2"))
								{
									unk_0x9AA80CA39F863D9D(uParam0->f_17[iVar0], 4);
								}
								else
								{
									unk_0x9AA80CA39F863D9D(uParam0->f_17[iVar0], 2);
								}
								func_74(iVar0, uParam0);
							}
						}
					}
					if ((!unk_0x731F434EAFE6E9FE(uParam0->f_17[iVar0], func_52()) && !func_73(uParam0->f_17[iVar0], iParam10)) && !func_72(uParam0->f_17[iVar0], iParam10))
					{
						if (func_80(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
						{
							if (!unk_0x731F434EAFE6E9FE(uParam0->f_17[iVar0], func_52()))
							{
								if (((!unk_0x3AF2B3B68DD52355(uParam0->f_17[iVar0]) && !unk_0xF7C907E9E8E2BB22(uParam0->f_17[iVar0])) && !unk_0x03EA5595E81F1F43(uParam0->f_17[iVar0])) && !unk_0x707FFB0E65C1C546(uParam0->f_17[iVar0]))
								{
									iVar11 = unk_0xD76D6BCC14B95CE1(uParam0->f_17[iVar0], -1794415470);
									if (iVar11 == 7)
									{
										unk_0xED68CDDDE25A144E(uParam0->f_17[iVar0]);
									}
									unk_0x140D4A6561E11695(uParam0->f_17[iVar0], func_52());
									bVar8 = false;
								}
							}
						}
						if (bVar8)
						{
							if (!unk_0xE38E3CF1625A4145(uParam0->f_1[iVar0]))
							{
								uParam0->f_11 = unk_0xE3903F59E2F22150();
								uParam0->f_1[iVar0] = func_44(uParam0->f_17[iVar0], 0, 0);
								unk_0xAE71BEA7BBBFB78F(uParam0->f_1[iVar0], 2);
								if (bParam9)
								{
									func_54(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (unk_0xE38E3CF1625A4145(uParam0->f_1[iVar0]))
					{
						if (((func_50(uParam0->f_17[iVar0], 1) || func_73(uParam0->f_17[iVar0], iParam10)) || iParam12) || (unk_0x91D5C8283D19AF49(iParam10, 0) && !unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iParam10, 0)))
						{
							if (unk_0xE38E3CF1625A4145(uParam0->f_1[iVar0]))
							{
								unk_0x1ABDB383C83A336A(&(uParam0->f_1[iVar0]));
								func_65(uVar12[iVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								func_54(uParam0->f_1[iVar0], uParam0);
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
										if (!func_50(uParam0->f_17[iVar0], 1))
										{
											if (func_49(uParam0->f_17[iVar0]))
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
									if (unk_0x731F434EAFE6E9FE(uParam0->f_17[iVar0], func_52()))
									{
										if ((((!unk_0x03EA5595E81F1F43(uParam0->f_17[iVar0]) && !unk_0x3AF2B3B68DD52355(uParam0->f_17[iVar0])) && !unk_0xF7C907E9E8E2BB22(uParam0->f_17[iVar0])) && !unk_0x707FFB0E65C1C546(uParam0->f_17[iVar0])) && !unk_0x17260B4EA0652E1C(iParam10))
										{
											unk_0x5D94F4D6FE7DA516(uParam0->f_17[iVar0]);
										}
									}
									iVar11 = unk_0xD76D6BCC14B95CE1(uParam0->f_17[iVar0], -1794415470);
									if (iVar11 == 7 && !func_82(uParam0->f_17[iVar0], iParam10))
									{
										if (((((!unk_0x03EA5595E81F1F43(uParam0->f_17[iVar0]) && !unk_0x03EA5595E81F1F43(unk_0x33CD235DF1E6A94E())) && !func_71(uParam0->f_17[iVar0], 2f)) && !unk_0x3AF2B3B68DD52355(uParam0->f_17[iVar0])) && !unk_0xF7C907E9E8E2BB22(uParam0->f_17[iVar0])) && !unk_0x17260B4EA0652E1C(iParam10))
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
										uParam0->f_1[iVar0] = func_44(uParam0->f_17[iVar0], 0, 0);
										unk_0xAE71BEA7BBBFB78F(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!unk_0x731F434EAFE6E9FE(uParam0->f_17[iVar0], func_52()))
							{
								if (func_80(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
								{
									if (!unk_0x3AF2B3B68DD52355(uParam0->f_17[iVar0]) && !unk_0xF7C907E9E8E2BB22(uParam0->f_17[iVar0]))
									{
										iVar11 = unk_0xD76D6BCC14B95CE1(uParam0->f_17[iVar0], -1794415470);
										if (iVar11 == 7)
										{
											unk_0xED68CDDDE25A144E(uParam0->f_17[iVar0]);
										}
										unk_0x4A852F02088ECC9D(uParam0->f_17[iVar0], false);
										unk_0x140D4A6561E11695(uParam0->f_17[iVar0], func_52());
									}
								}
							}
						}
						else if (unk_0xEE984ED4E4A374BE(unk_0x33CD235DF1E6A94E(), iParam10))
						{
							if (!unk_0x731F434EAFE6E9FE(uParam0->f_17[iVar0], func_52()))
							{
								if (!unk_0x0E4018692D92041D(uParam0->f_13, 21))
								{
									unk_0x140D4A6561E11695(uParam0->f_17[iVar0], func_52());
								}
							}
							else if (unk_0x0E4018692D92041D(uParam0->f_13, 21))
							{
								unk_0x5D94F4D6FE7DA516(uParam0->f_17[iVar0]);
								unk_0x8950ED5730F62EE8(&(uParam0->f_13), 21);
							}
						}
						else if (unk_0x731F434EAFE6E9FE(uParam0->f_17[iVar0], func_52()) && !unk_0x17260B4EA0652E1C(iParam10))
						{
							unk_0x5D94F4D6FE7DA516(uParam0->f_17[iVar0]);
						}
					}
				}
				else if (unk_0xE38E3CF1625A4145(uParam0->f_1[iVar0]))
				{
					unk_0x1ABDB383C83A336A(&(uParam0->f_1[iVar0]));
					func_65(uVar12[iVar0]);
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
		if (!func_60(uParam0, 2))
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
							if (func_77(uParam0->f_17[iVar0]) || unk_0x335C0645074963FE(uParam0->f_17[iVar0], unk_0x33CD235DF1E6A94E(), uParam0->f_8, uParam0->f_8, uParam0->f_8, 0, 1, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!unk_0xBC2FC12AD0FBF72E(uParam0->f_17[iVar0]))
					{
						if (!unk_0x335C0645074963FE(uParam0->f_17[iVar0], unk_0x33CD235DF1E6A94E(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, 0, 1, 0) && !func_77(uParam0->f_17[iVar0]))
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
								func_58(uParam0, sParam7, 0);
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
									if (!func_70(iVar0, uParam0))
									{
										if (!unk_0x6D2E2622CA149402(uVar13[iVar0]))
										{
											if (!unk_0xCE3CFF625BEBAA04(uVar13[iVar0], ""))
											{
												func_68(uParam0, uVar12[iVar0], uVar13[iVar0], 0);
												func_67(iVar0, uParam0);
												uParam0->f_12 = iVar1;
											}
										}
										if (!func_70(iVar0, uParam0))
										{
											func_58(uParam0, uVar12[iVar0], 0);
											func_67(iVar0, uParam0);
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
					func_65(uVar12[iVar0]);
				}
				iVar0++;
			}
			func_65("MORE_SEATS");
			return 1;
		}
	}
	return 0;
}

void func_67(int iParam0, var uParam1)
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

void func_68(var uParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (!unk_0x6D2E2622CA149402(sParam1))
		{
			if (!unk_0xCE3CFF625BEBAA04(sParam1, ""))
			{
				func_69(sParam1, iParam2, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0xE3903F59E2F22150();
}

void func_69(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0x0C9D26BBBEE23407(sParam0);
	unk_0xFA6BEE2B1507FF1E(iParam1);
	unk_0x495407AC2D466930(iParam2, 1);
}

int func_70(int iParam0, var uParam1)
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

int func_71(int iParam0, float fParam1)
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

int func_72(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		if (!unk_0x731F434EAFE6E9FE(iParam0, func_52()))
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

int func_73(int iParam0, int iParam1)
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

void func_74(int iParam0, var uParam1)
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

void func_75(int iParam0, var uParam1)
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

int func_76(int iParam0, var uParam1)
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

int func_77(int iParam0)
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

int func_78(int iParam0, var uParam1)
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

int func_79(var uParam0)
{
	int iVar0;
	
	if (unk_0x5C415D10D5CBF689(unk_0x33CD235DF1E6A94E()))
	{
		iVar0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
		if (func_64(iVar0, uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_80(var uParam0, int iParam1, float fParam2, bool bParam3)
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
						if (func_79(uParam0))
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
					if (func_64(iVar0, uParam0, 0))
					{
						if (unk_0x91D5C8283D19AF49(iVar0, 0))
						{
							if (func_81(iVar0))
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

int func_81(int iParam0)
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

int func_82(int iParam0, int iParam1)
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

void func_83()
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

void func_84(var uParam0)
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

void func_85(var uParam0)
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

int func_86()
{
	var uVar0;
	
	return uVar0;
}

Vector3 func_87()
{
	vector3 vVar0;
	
	return vVar0;
}

int func_88(int iParam0)
{
	vector3 vVar0;
	
	if (unk_0xD62C4419A41F106A(Local_1295, 0))
	{
		return 0;
	}
	vVar0 = { unk_0x0B82F64BEE70AC7B(unk_0xFBB1F99A825CAB09(iParam0, true), unk_0x2CA911E7569D12EA(Local_1295, vLocal_86), unk_0x2CA911E7569D12EA(Local_1295, vLocal_87), 0) };
	if (vdist2(vVar0, unk_0x2CA911E7569D12EA(Local_1295, vLocal_86)) <= vdist2(unk_0x2CA911E7569D12EA(Local_1295, vLocal_87), unk_0x2CA911E7569D12EA(Local_1295, vLocal_86)))
	{
		return 1;
	}
	return 0;
}

void func_89(bool bParam0, int iParam1)
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

int func_90(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_91(iParam0);
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

void func_91(int iParam0)
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

bool func_92(int iParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, float fParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8, char* sParam9, bool bParam10, int iParam11, bool bParam12, int iParam13)
{
	return func_43(iParam0, vParam1, func_93(), vParam2, vParam3, bParam5, 5, 0, 0, 0, iParam6, sParam7, func_86(), func_86(), func_86(), func_86(), sParam8, 0, bParam10, sParam9, 1, iParam11, bParam12, iParam13, func_86(), func_86(), func_86(), 1, fParam4);
}

Vector3 func_93()
{
	return 0f, 0f, 2f;
}

int func_94(int iParam0)
{
	return func_45(iParam0, 1, 0);
}

int func_95(int iParam0, vector3 vParam1, vector3 vParam2, bool bParam3, int iParam4, char* sParam5, char* sParam6, char* sParam7, bool bParam8, int iParam9, bool bParam10, int iParam11)
{
	return func_43(iParam0, vParam1, vParam2, func_87(), func_87(), bParam3, 5, 0, 0, 0, iParam4, sParam5, func_86(), func_86(), func_86(), func_86(), sParam6, 0, bParam8, sParam7, 0, iParam9, bParam10, iParam11, 0, 0, 0, 1, 1065353216);
}

void func_96(int iParam0, bool bParam1)
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

void func_97(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x0E4018692D92041D(iParam0->f_13, 30))
	{
		bParam1 = true;
	}
	func_99(iParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xE38E3CF1625A4145(iParam0->f_1[iVar0]))
		{
			unk_0x1ABDB383C83A336A(&(iParam0->f_1[iVar0]));
		}
		func_98(iVar0, iParam0);
		func_75(iVar0, iParam0);
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
				if (unk_0x731F434EAFE6E9FE(iParam0->f_17[iVar0], func_52()) && iParam0->f_17[iVar0] != unk_0x33CD235DF1E6A94E())
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

void func_98(int iParam0, var uParam1)
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

void func_99(var uParam0)
{
	if (unk_0xE38E3CF1625A4145(uParam0->f_5))
	{
		unk_0x1ABDB383C83A336A(&(uParam0->f_5));
	}
}

void func_100(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_101(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_101(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	func_102(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_102(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
	{
		func_11(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_103(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_103(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0x8D255802EBF1DA76())
	{
		if (unk_0xE3903F59E2F22150() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam3;
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
	if (func_12(iVar0))
	{
		func_128();
	}
	if (func_127(iParam1) && unk_0x042B0E494045A7DF(iParam1))
	{
		iVar1 = 0;
		if (unk_0x068481DAF84B9654(iParam1))
		{
			unk_0x58F0F30530159EBB(unk_0x22B02EC53152632C(iParam1));
			unk_0x8DBE7210C47D73E7(unk_0x22B02EC53152632C(iParam1), 1);
			if (unk_0x74297B6E2665ED22(unk_0x22B02EC53152632C(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x680558231C80291D(iParam1))
		{
			unk_0xBC85CA5EAD2D2A92(unk_0xEAE1362B9F5C7B18(iParam1));
			if (unk_0xB623C0AF503B1EA7(unk_0xEAE1362B9F5C7B18(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xA3A29DB165882310(iParam1))
		{
			unk_0x502305F7344E91C7(unk_0x6BB2785511E9F977(iParam1));
			if (unk_0xC5183090D5499516(unk_0x6BB2785511E9F977(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x8D255802EBF1DA76())
		{
			if (func_122(uParam0, bParam5, bParam7, 0))
			{
				func_118(uParam0, iParam1, vParam2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_107(iVar0))
				{
					if ((unk_0x6D2E2622CA149402(uParam0->f_3) && !unk_0x6D2E2622CA149402(iVar0)) && unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
					{
						if ((iVar1 && !unk_0xFAC8F20FBC764F4D()) && uParam6)
						{
							if (!func_12(iVar0))
							{
								func_190(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0xCE3CFF625BEBAA04("CMN_HINT", iVar0))
								{
									func_106(1);
								}
							}
						}
					}
				}
			}
			else if (func_107(iVar0))
			{
				if (unk_0x6D2E2622CA149402(uParam0->f_3) && !unk_0x6D2E2622CA149402(iVar0))
				{
					if (((unk_0x3F219400E5FE4B69(iParam1) && iVar1) && !unk_0xFAC8F20FBC764F4D()) && uParam6)
					{
						if (!func_12(iVar0))
						{
							func_190(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0xCE3CFF625BEBAA04("CMN_HINT", iVar0))
							{
								func_106(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0x6D2E2622CA149402(sParam3))
			{
				if (func_12(sParam3))
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
						func_11(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xBEAC9DF5323BB074(unk_0x33CD235DF1E6A94E()))
				{
					if (unk_0xCB75C331DD5DDCCC(6) == 3 || unk_0xCB75C331DD5DDCCC(6) == 4)
					{
						func_11(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xA5C8D37514ACC1FA(unk_0x33CD235DF1E6A94E()))
				{
					if (unk_0xCB75C331DD5DDCCC(4) == 3 || unk_0xCB75C331DD5DDCCC(4) == 4)
					{
						func_11(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xFF29C0328E1D9F8D(unk_0x33CD235DF1E6A94E()))
				{
					if (unk_0xCB75C331DD5DDCCC(5) == 3 || unk_0xCB75C331DD5DDCCC(5) == 4)
					{
						func_11(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xA2F0EA9AB6142D97(unk_0x33CD235DF1E6A94E()))
				{
					if (unk_0xCB75C331DD5DDCCC(2) == 3 || unk_0xCB75C331DD5DDCCC(2) == 4)
					{
						func_11(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8ACF6D19519697BD() == 3 || unk_0x8ACF6D19519697BD() == 4)
				{
					func_11(uParam0, iVar0, 1);
				}
			}
			if (!func_122(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_105(uParam0))
				{
					func_104(uParam0);
				}
			}
		}
	}
	else
	{
		func_11(uParam0, iVar0, 0);
	}
}

void func_104(var uParam0)
{
	if (func_127(unk_0x33CD235DF1E6A94E()))
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
			unk_0x0F8EAEEC97DDBCB3(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_105(var uParam0)
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

int func_106(bool bParam0)
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

int func_107(char* sParam0)
{
	if (!func_108(1, 1, 0))
	{
		if ((!unk_0x786AF4A44E1B5B4B(sParam0) && func_12(sParam0)) || func_12("CMN_HINT"))
		{
			unk_0xEDF90B96BED57BCE(1);
		}
		return 0;
	}
	switch (Global_36425)
	{
		case 0:
		case 3:
			if (func_106(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_106(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_106(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_108(bool bParam0, bool bParam1, bool bParam2)
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
	if (func_18(0))
	{
		return 0;
	}
	if (func_117())
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
	if ((func_116() || func_115(Global_4456448.f_161209)) || func_114())
	{
		if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
		{
			iVar0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
			iVar1 = func_113(unk_0x33CD235DF1E6A94E(), 0);
			if (((unk_0x3FCD3FCFAFC3878C(iVar0, iVar1) || (unk_0x541D5C57194E73C4(iVar0) == 562680400 && iVar1 != -1)) || (unk_0x541D5C57194E73C4(iVar0) == 1181327175 && iVar1 != -1)) || (((unk_0x541D5C57194E73C4(iVar0) == -1693015116 && iVar1 == 0) && func_112(iVar0, 10)) && unk_0xEECA910C75BFF02B(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1680665)
	{
		return 0;
	}
	if (func_109(unk_0x95B959F18401C09A()))
	{
		return 0;
	}
	return 1;
}

int func_109(int iParam0)
{
	if (iParam0 != func_111())
	{
		if (func_110(iParam0, 1, 1))
		{
			return Global_2424047[iParam0 /*416*/].f_309.f_5 != -1;
		}
		else if ((Global_1312867 && iParam0 == unk_0x95B959F18401C09A()) && func_110(iParam0, 1, 0))
		{
			return Global_2424047[iParam0 /*416*/].f_309.f_5 != -1;
		}
	}
	return 0;
}

int func_110(int iParam0, bool bParam1, bool bParam2)
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

int func_111()
{
	return -1;
}

int func_112(int iParam0, int iParam1)
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

int func_113(int iParam0, int iParam1)
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

var func_114()
{
	return Global_2448756.f_16;
}

bool func_115(int iParam0)
{
	return iParam0 == 51;
}

var func_116()
{
	return Global_2448756.f_15;
}

bool func_117()
{
	return unk_0xE3903F59E2F22150() <= Global_17411.f_5878 + 100;
}

void func_118(var uParam0, int iParam1, vector3 vParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1319096 == 1)
	{
		return;
	}
	if (unk_0xD62C4419A41F106A(iParam1, 0))
	{
		func_11(uParam0, 0, 0);
	}
	if (func_121(vParam2, 0f, 0f, 0f, 0))
	{
		if (unk_0x068481DAF84B9654(iParam1))
		{
			iVar0 = unk_0x22B02EC53152632C(iParam1);
			if (!unk_0xF0D230FB550CD6EB(iVar0, 0))
			{
				if (unk_0xE09156665EC2D83B(iVar0))
				{
					if (!func_119())
					{
						vParam2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0x28C4F998CC33B00F(iVar0))
				{
					vParam2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x052830EE89C97404(0);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam3 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	unk_0xC94CF61BF93818C8(iParam1, vParam2, 1, -1, iVar1, iVar2, iParam3);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0xC4A347124F39D998(unk_0x33CD235DF1E6A94E(), iParam1, -1, iVar3, iVar4);
	unk_0x0B1F8038F56C12B7("FocusIn", 0, 0);
	unk_0xDEFB5E2E5CBD460A("HINT_CAM_SCENE");
	unk_0x0F8EAEEC97DDBCB3(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0xE3903F59E2F22150();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_119()
{
	return func_120(unk_0x95B959F18401C09A());
}

int func_120(int iParam0)
{
	if (unk_0x541D5C57194E73C4(unk_0x378BD4B3881338C2(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_121(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_122(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
					if (func_126(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xE3903F59E2F22150();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_125(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xE3903F59E2F22150();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_125(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xE3903F59E2F22150();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_126(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xE3903F59E2F22150();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_105(uParam0))
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
						if (!func_126(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0xE3903F59E2F22150();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_125(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xE3903F59E2F22150();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_125(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xE3903F59E2F22150();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_126(bParam1, bParam2, bParam3))
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
					if (!func_126(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_125(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_125(bParam1, bParam2, bParam3) || unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
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
				else if (!func_126(bParam1, bParam2, bParam3))
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
						if (func_124(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_123(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1) || func_123(bParam1, bParam2, bParam3))
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
					else if (func_124(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_105(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_108(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_128();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_123(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_108(bParam0, bParam1, bParam2))
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

int func_124(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_108(bParam0, bParam1, bParam2))
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

int func_125(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_108(bParam0, bParam1, bParam2))
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

int func_126(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_108(bParam0, bParam1, bParam2))
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

int func_127(int iParam0)
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

void func_128()
{
	unk_0x8950ED5730F62EE8(&Global_2424, 4);
}

int func_129(var uParam0)
{
	if (func_131(uParam0) && !func_130(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_130(var uParam0)
{
	if (*uParam0 == 4)
	{
		return 1;
	}
	return 0;
}

int func_131(var uParam0)
{
	if (*uParam0 != 0 && (*uParam0 != 2 || uParam0->f_1 > 0))
	{
		return 1;
	}
	return 0;
}

void func_132()
{
	int iVar0;
	
	if (iLocal_1282 == 0 || iLocal_1282 == 1)
	{
		if (((unk_0xD62C4419A41F106A(Local_1295, 0) || (unk_0x765F6FEEFF39224F(Local_1298[0 /*2*/]) && !unk_0x9F4718FD61B07058(Local_1298[0 /*2*/]))) || (unk_0x765F6FEEFF39224F(Local_1298[1 /*2*/]) && !unk_0x9F4718FD61B07058(Local_1298[1 /*2*/]))) || (unk_0x765F6FEEFF39224F(Local_1298[2 /*2*/]) && !unk_0x9F4718FD61B07058(Local_1298[2 /*2*/])))
		{
			iLocal_1282 = 2;
		}
	}
	if (iLocal_1282 == 2)
	{
		if ((((!unk_0x765F6FEEFF39224F(Local_1295) || !unk_0x91D5C8283D19AF49(Local_1295, 0)) || (unk_0x765F6FEEFF39224F(Local_1298[0 /*2*/]) && !func_88(Local_1298[0 /*2*/]))) || (unk_0x765F6FEEFF39224F(Local_1298[1 /*2*/]) && !func_88(Local_1298[1 /*2*/]))) || (unk_0x765F6FEEFF39224F(Local_1298[2 /*2*/]) && !func_88(Local_1298[2 /*2*/])))
		{
			iLocal_1282 = 3;
		}
	}
	if (iLocal_1282 == 0)
	{
		if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
		{
			iVar0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
			if (unk_0x541D5C57194E73C4(iVar0) == joaat("towtruck") || unk_0x541D5C57194E73C4(iVar0) == joaat("towtruck2"))
			{
				if (unk_0x91D5C8283D19AF49(iVar0, 0))
				{
					if (unk_0x221C953018491A32(iVar0, Local_1295))
					{
						iLocal_1296 = iVar0;
					}
				}
			}
		}
	}
	if (iLocal_1282 == 0)
	{
		if (!unk_0x91D5C8283D19AF49(Local_1295, 0))
		{
			iLocal_1282 = 1;
		}
	}
	if (iLocal_1282 == 1 && unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), Local_1295, 1))
	{
		func_9(6, 1);
	}
	else
	{
		func_9(6, 0);
	}
}

void func_133(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	vector3 vVar0;
	var uVar1;
	
	if (unk_0x765F6FEEFF39224F(Global_97130.f_4))
	{
		if (unk_0x91D5C8283D19AF49(Global_97130.f_4, 0))
		{
			if (func_185(24) != Global_97130.f_4)
			{
				if (iParam2 == 1)
				{
					if (func_182(unk_0xFBB1F99A825CAB09(Global_97130.f_4, true), iParam3, &vVar0, &uVar1))
					{
						vParam0 = { vVar0 };
						fParam1 = uVar1;
					}
				}
				func_134(Global_97130.f_4, vParam0, fParam1, 24, 0);
			}
		}
	}
}

void func_134(int iParam0, vector3 vParam1, float fParam2, int iParam3, bool bParam4)
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
		func_181(iParam3);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_176(iParam0, &Var0);
		if (func_121(vParam1, 0f, 0f, 0f, 0))
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
		func_169(iParam3, &Var0, vParam1, fParam2, func_175(iParam0));
		func_135(iParam3, iParam0, 0);
	}
}

void func_135(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_165(&(Global_70409.f_555[0 /*21*/]), iParam0))
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
				Global_106565.f_32743.f_4801 = func_154();
			}
			if (iParam1 != Global_70409.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_185(iParam0);
					if ((unk_0x765F6FEEFF39224F(iVar0) && unk_0x91D5C8283D19AF49(iVar0, 0)) && iParam1 != iVar0)
					{
						func_136(iVar0, 145);
					}
				}
				Global_71315 = iParam1;
				Global_71316 = iParam0;
				Global_71317 = iParam2;
			}
		}
	}
}

void func_136(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_137(iParam0))
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
	func_176(iParam0, &(Global_106565.f_32743.f_5510));
}

int func_137(int iParam0)
{
	if ((((((((((!unk_0x765F6FEEFF39224F(iParam0) || !unk_0x91D5C8283D19AF49(iParam0, 0)) || func_152(iParam0, 0, 0)) || func_152(iParam0, 1, 0)) || func_152(iParam0, 2, 0)) || func_175(iParam0) != 145) || func_151(iParam0)) || func_150(iParam0)) || func_149(iParam0)) || func_148(iParam0)) || !func_138(unk_0x541D5C57194E73C4(iParam0)))
	{
		if (func_150(iParam0))
		{
		}
		if (func_150(iParam0))
		{
		}
		if (func_152(iParam0, 0, 0))
		{
		}
		if (func_152(iParam0, 1, 0))
		{
		}
		if (func_152(iParam0, 2, 0))
		{
		}
		if (func_175(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_138(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_139(iParam0, 0))
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

int func_139(int iParam0, bool bParam1)
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
		if (!func_147())
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
		if ((((!func_146() && !func_145()) && !func_144()) && !func_143()) && !func_147())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xDB36A8F522CBC12D() || unk_0x4CE1DD5CFC1F941E()) || unk_0xF5DB888C353E2BED())
		{
		}
		else if (!func_144())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_142(iParam0))
		{
			return 0;
		}
	}
	if (!func_140(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_140(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_141())
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

int func_141()
{
	if (unk_0x4CE1DD5CFC1F941E())
	{
		return unk_0xFCAD2CB678396284();
	}
	return 0;
}

int func_142(int iParam0)
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

int func_143()
{
	return 0;
}

int func_144()
{
	return 1;
}

int func_145()
{
	return 1;
}

int func_146()
{
	if (unk_0xE9D7B652961D4AA3(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_147()
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

int func_148(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x541D5C57194E73C4(iParam0);
	sVar1 = unk_0x00D614EBCFFD919D(iParam0);
	if (iVar0 == joaat("speedo") && unk_0xCE3CFF625BEBAA04(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_139(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_149(int iParam0)
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

int func_150(int iParam0)
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

int func_151(int iParam0)
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

int func_152(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0x765F6FEEFF39224F(iParam0) || !unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_153(iParam1, iVar0, &sVar1, &iVar2))
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

int func_153(int iParam0, int iParam1, char* sParam2, var uParam3)
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

var func_154()
{
	var uVar0;
	
	func_164(&uVar0, unk_0xE6A7CE90720B9037());
	func_163(&uVar0, unk_0x7EA67BD818402745());
	func_162(&uVar0, unk_0x13348E86D5B8A052());
	func_157(&uVar0, unk_0x020A28FAE1C09250());
	func_156(&uVar0, unk_0x2C02CAA9C4127339());
	func_155(&uVar0, unk_0xED3F08F762AAA55A());
	return uVar0;
}

void func_155(var uParam0, int iParam1)
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

void func_156(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_157(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_161(*uParam0);
	iVar1 = func_159(*uParam0);
	if (iParam1 < 1 || iParam1 > func_158(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

int func_158(int iParam0, int iParam1)
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

var func_159(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_160(unk_0x0E4018692D92041D(iParam0, 31), -1, 1)) + 2011;
}

int func_160(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_161(var uParam0)
{
	return uParam0 & 15;
}

void func_162(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_163(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_164(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_165(var uParam0, int iParam1)
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
			uParam0->f_4 = func_166(0, 1);
			uParam0->f_12 = 0;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 20);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_166(0, 1);
			uParam0->f_12 = 0;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 20);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_166(1, 1);
			uParam0->f_12 = 1;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 20);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_166(1, 2);
			uParam0->f_12 = 1;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 19);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_166(1, 1);
			uParam0->f_12 = 1;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 20);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_166(1, 2);
			uParam0->f_12 = 1;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 19);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_166(2, 1);
			uParam0->f_12 = 2;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 20);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_166(2, 1);
			uParam0->f_12 = 2;
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 20);
			unk_0x8950ED5730F62EE8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_166(2, 1);
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
			if (func_147())
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
			if (func_147())
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
		if (!func_121(Global_106565.f_32743.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
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
		if (!func_121(Global_106565.f_2357.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_106565.f_2357.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_106565.f_2357.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0x0E4018692D92041D(uParam0->f_9, 20))
	{
		if (!func_121(Global_106565.f_2357.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_106565.f_2357.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_106565.f_2357.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_166(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_168(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_167(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_167(int iParam0, var uParam1, int iParam2)
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

bool func_168(int iParam0)
{
	return iParam0 < 3;
}

void func_169(int iParam0, var uParam1, vector3 vParam2, float fParam3, int iParam4)
{
	if (func_165(&(Global_70409.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x0E4018692D92041D(Global_70409.f_555[0 /*21*/].f_9, 10))
		{
			func_174(iParam0);
			func_173(uParam1, &(Global_106565.f_32743.f_69[Global_70409.f_555[0 /*21*/].f_14 /*78*/]));
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
			func_170(iParam0, 1);
		}
	}
}

void func_170(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_172(iParam0, 0))
		{
			func_171(iParam0, 1, 0);
			func_171(iParam0, 2, 0);
			func_171(iParam0, 3, 0);
			func_171(iParam0, 4, 0);
			func_171(iParam0, 0, 1);
			Global_70409[iParam0] = 1;
		}
	}
	else
	{
		func_171(iParam0, 0, 0);
	}
}

void func_171(int iParam0, int iParam1, bool bParam2)
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

bool func_172(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_106565.f_32743[iParam0], iParam1);
}

void func_173(var uParam0, var uParam1)
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

void func_174(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_165(&(Global_70409.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x765F6FEEFF39224F(Global_70409.f_139[iParam0]))
		{
			unk_0x0D21E1FDE062ED99(Global_70409.f_139[iParam0], true, 1);
			unk_0x65F544B458249682(&(Global_70409.f_139[iParam0]));
			Global_70409.f_139[iParam0] = 0;
		}
		if (unk_0x0E4018692D92041D(Global_70409.f_555[0 /*21*/].f_9, 13))
		{
			func_170(iParam0, 0);
		}
	}
}

int func_175(int iParam0)
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

void func_176(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		func_180(uParam1);
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
		if (uParam1->f_65 == -1 && !func_179(uParam1->f_66))
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
		func_178(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x34B1602009421B58(iParam0, iVar0 + 1))
			{
				unk_0x8950ED5730F62EE8(&(uParam1->f_77), func_177(iVar0 + 1));
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

int func_177(int iParam0)
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

int func_178(int iParam0, var uParam1, var uParam2)
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

int func_179(int iParam0)
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

void func_180(var uParam0)
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

void func_181(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_174(iParam0);
	func_170(iParam0, 0);
}

int func_182(vector3 vParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	iVar0 = func_183(vParam0, iParam1, 1);
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

int func_183(vector3 vParam0, int iParam1, int iParam2)
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
				if (func_184(iVar0) || iParam2 == 0)
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

bool func_184(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_106565.f_7223[iParam0], 0);
}

int func_185(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_70409.f_139[iParam0];
}

int func_186()
{
	func_187();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_187()
{
	int iVar0;
	
	if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
	{
		if (func_189(Global_106565.f_2357.f_539.f_4321) != unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()))
		{
			iVar0 = func_188(unk_0x33CD235DF1E6A94E());
			if (func_168(iVar0) && (!func_31(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_168(Global_106565.f_2357.f_539.f_4321))
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

int func_188(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		iVar1 = unk_0x541D5C57194E73C4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_189(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_189(int iParam0)
{
	if (func_168(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_190(char* sParam0, int iParam1)
{
	unk_0x37621D6689F9E3C3(sParam0);
	unk_0x092150016C06C431(0, 0, true, iParam1);
}

void func_191(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x0C9D26BBBEE23407(sParam0);
	unk_0x495407AC2D466930(iParam1, 1);
}

int func_192(int iParam0, bool bParam1, bool bParam2)
{
	return func_45(iParam0, !bParam1, bParam2);
}

int func_193(int iParam0)
{
	if (unk_0x765F6FEEFF39224F(iParam0))
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

void func_194(var uParam0)
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

void func_195()
{
	if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		if (!iLocal_1319)
		{
			func_198(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), -1);
			func_197(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), -1);
			iLocal_1319 = 1;
		}
	}
	else if (iLocal_1319)
	{
		func_197(0, -1);
		func_198(0, -1);
		iLocal_1319 = 0;
	}
	if (!iLocal_1317)
	{
		if (unk_0x09287BFEE1D9F6EF(unk_0x95B959F18401C09A(), 0))
		{
			if (unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), Local_1295, 1))
			{
				unk_0xCF33FE51707573DB("SCRIPTED_SCANNER_REPORT_JSH_PREP_2A_01", 0f);
				iLocal_1317 = 1;
			}
			else if (unk_0xEAF6E82C7BDE5A4C(unk_0x33CD235DF1E6A94E(), joaat("weapon_briefcase"), 0))
			{
				unk_0xCF33FE51707573DB("SCRIPTED_SCANNER_REPORT_JSH_PREP_2A_02", 0f);
				iLocal_1317 = 1;
			}
		}
	}
	if (iLocal_88 == 0)
	{
		switch (iLocal_1282)
		{
			case 0:
				if ((unk_0x765F6FEEFF39224F(vLocal_1285.x) && !unk_0xBC2FC12AD0FBF72E(vLocal_1285.x)) && func_129(&(Local_1079[0 /*8*/])))
				{
					if (Local_1079[0 /*8*/].f_1 == 1)
					{
						if (func_196(unk_0x33CD235DF1E6A94E(), Local_1295, 1) > 500f)
						{
							func_301(1);
						}
					}
					else if (Local_1079[0 /*8*/].f_1 == 4)
					{
						if (func_196(unk_0x33CD235DF1E6A94E(), Local_1295, 1) > 250f)
						{
							func_301(1);
						}
					}
					else if (func_196(unk_0x33CD235DF1E6A94E(), Local_1295, 1) > 250f)
					{
						func_301(2);
					}
				}
				else if (func_196(unk_0x33CD235DF1E6A94E(), Local_1295, 1) > 250f)
				{
					func_301(2);
				}
				break;
			
			case 1:
				if (func_196(unk_0x33CD235DF1E6A94E(), Local_1295, 1) > 250f)
				{
					func_301(2);
				}
				break;
			
			case 3:
			case 2:
				if (!unk_0xEAF6E82C7BDE5A4C(unk_0x33CD235DF1E6A94E(), joaat("weapon_briefcase"), 0))
				{
					if (((((unk_0x765F6FEEFF39224F(Local_1298[0 /*2*/]) && func_196(unk_0x33CD235DF1E6A94E(), Local_1298[0 /*2*/], 1) > 250f) && unk_0x765F6FEEFF39224F(Local_1298[1 /*2*/])) && func_196(unk_0x33CD235DF1E6A94E(), Local_1298[1 /*2*/], 1) > 250f) && unk_0x765F6FEEFF39224F(Local_1298[2 /*2*/])) && func_196(unk_0x33CD235DF1E6A94E(), Local_1298[2 /*2*/], 1) > 250f)
					{
						func_301(3);
					}
				}
				break;
			}
	}
	if (unk_0x765F6FEEFF39224F(Local_1295))
	{
		if ((unk_0x8AE34E8B10270D31(Local_1295) && !unk_0x91D5C8283D19AF49(Local_1295, 0)) && !unk_0xEAF6E82C7BDE5A4C(unk_0x33CD235DF1E6A94E(), joaat("weapon_briefcase"), 0))
		{
			func_301(4);
		}
	}
}

float func_196(int iParam0, int iParam1, bool bParam2)
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

void func_197(int iParam0, int iParam1)
{
	Global_56505 = iParam0;
	Global_56506 = iParam1;
}

void func_198(int iParam0, int iParam1)
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

void func_199()
{
	if (unk_0x765F6FEEFF39224F(vLocal_1285.x))
	{
		if (!unk_0xF0D230FB550CD6EB(vLocal_1285.x, 0))
		{
			func_200(vLocal_1285.x, &(vLocal_1285.f_2), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1);
		}
	}
	if (unk_0x765F6FEEFF39224F(Local_1295))
	{
		if (((!func_193(Local_1295) && unk_0xD62C4419A41F106A(Local_1295, 0)) && iLocal_1314) && func_196(Local_1295, unk_0x33CD235DF1E6A94E(), 1) > 200f)
		{
			unk_0x65F544B458249682(&Local_1295);
		}
	}
}

int func_200(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
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

void func_201()
{
	vector3 vVar0;
	float fVar1;
	
	if (bLocal_91 == 1)
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
			iLocal_88 = iLocal_92;
			unk_0x63F0B040CE6EDF0F(false, false, 3000, 1, 0, 0);
			unk_0xD362430CD61A9B08();
			unk_0xEDF90B96BED57BCE(1);
			func_8(1);
			if (unk_0x15DFB209D94E0277())
			{
				unk_0x4742207943D8EB65();
			}
			if (!func_275())
			{
				func_274(iLocal_88, &vVar0, &fVar1);
				unk_0xBEADAF07D2339505(unk_0x33CD235DF1E6A94E(), vVar0, 1, false, 0, 1);
				unk_0x3C990C409B3845DE(unk_0x33CD235DF1E6A94E(), fVar1);
				unk_0xF70578F5CD9822CB(unk_0x33CD235DF1E6A94E(), true);
				func_272(&uLocal_94, vVar0, 50f, 0);
			}
			func_271(&uLocal_94);
			switch (iLocal_88)
			{
				case 0:
					func_270(&uLocal_94, iLocal_82);
					func_270(&uLocal_94, iLocal_83);
					func_270(&uLocal_94, iLocal_84);
					func_269(&uLocal_94, &Global_90574);
					break;
				
				case 1:
					func_270(&uLocal_94, joaat("burrito2"));
					break;
			}
			while (!func_268(&uLocal_94))
			{
				wait(0);
				func_199();
			}
			switch (iLocal_88)
			{
				case 0:
					while (!func_261(0))
					{
						wait(0);
					}
					if (unk_0xCE3CFF625BEBAA04(&Global_90574, "jhp2a_main"))
					{
						while (!func_205(&iLocal_1293, 1395.851f, -1069.306f, 52.4779f, 118.1591f, 1))
						{
							wait(0);
							unk_0xB7350047030F7672(1395.851f, -1069.306f, 52.4779f, 20f, 0, 0, 0, 0, false, 0);
						}
					}
					else
					{
						while (!func_205(&iLocal_1293, 1256.913f, 556.8416f, 79.7013f, 134.0793f, 1))
						{
							wait(0);
							unk_0xB7350047030F7672(1256.913f, 556.8416f, 79.7013f, 20f, 0, 0, 0, 0, false, 0);
						}
					}
					unk_0xD6D2420F0051065A(iLocal_1293, 0);
					unk_0x3A3707C1ECABF993(iLocal_1293, 1, false);
					unk_0x3A3707C1ECABF993(iLocal_1293, 2, true);
					unk_0x1B2303F9DC2D90D5(iLocal_1293, 1084227584);
					unk_0x9FABD0AB045A5D6E(iLocal_1293, true, true, 0);
					if (func_275())
					{
						func_202(iLocal_1293, -1, 1);
					}
					else
					{
						unk_0xF70578F5CD9822CB(unk_0x33CD235DF1E6A94E(), false);
						unk_0x094626C0798AE1F8(unk_0x33CD235DF1E6A94E(), iLocal_1293, -1);
					}
					unk_0xC7E6A5D90DED6E0B(0f);
					unk_0xD6EDA274D82E8678(0f, 1065353216);
					break;
				
				case 1:
					if (!func_7(87))
					{
						Local_1295 = unk_0xC651C43AB13A15E5(joaat("boxville3"), 693.725f, -1006.302f, 21.8355f, 359.884f, true, true, false);
						unk_0x9152A6430680BF0A(Local_1295, 0);
						unk_0x1B2303F9DC2D90D5(Local_1295, 1084227584);
					}
					if (func_275())
					{
						func_202(0, -1, 1);
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
				unk_0xACCDA78123DB57B0(1000);
			}
			bLocal_91 = false;
		}
	}
}

void func_202(int iParam0, int iParam1, int iParam2)
{
	if (func_204() && func_275())
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
		func_203(0);
	}
}

void func_203(int iParam0)
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

int func_204()
{
	if (Global_93682 == 10 || Global_93682 == 9)
	{
		return 1;
	}
	return 0;
}

int func_205(int iParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	struct<67> Var0;
	
	Var0.f_9 = 49;
	Var0.f_59 = 2;
	if (func_204())
	{
		if (func_260())
		{
			func_173(&(Global_100114.f_2890.f_12), &Var0);
		}
	}
	else if (func_258())
	{
		func_173(&(Global_97130.f_2890.f_12), &Var0);
	}
	if (Var0.f_66 != 0)
	{
		if (!func_257(0, &Var0))
		{
			if (unk_0x0C2E237744BA0026(Var0.f_66) || unk_0x9E374B5F44A76AE2(Var0.f_66))
			{
				unk_0xB815670C37E03CDE(Var0.f_66);
				if (unk_0x5D98D654CDC2165A(Var0.f_66))
				{
					*iParam0 = unk_0xC651C43AB13A15E5(Var0.f_66, vParam1, fParam2, true, true, false);
					func_246(*iParam0, &Var0, 0, 1);
					unk_0x71CA80D41E1338B4(Var0.f_66);
					unk_0x1B2303F9DC2D90D5(*iParam0, 1084227584);
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		else
		{
			bParam3 = true;
		}
	}
	if (bParam3)
	{
		if (!unk_0x765F6FEEFF39224F(*iParam0))
		{
			if (func_206(iParam0, 0, vParam1, fParam2, 1, 0))
			{
				unk_0x8C4EA5F6857553AE(func_166(0, 0), true);
				return 1;
			}
		}
		return 0;
	}
	return 1;
}

int func_206(int iParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4, int iParam5)
{
	int iVar0;
	var uVar1;
	struct<97> Var2;
	int iVar3;
	int iVar4;
	bool bVar5;
	char cVar6[16];
	int iVar7;
	
	if (func_168(iParam1))
	{
		Var2.f_11 = 12;
		Var2.f_31 = 49;
		Var2.f_81 = 2;
		func_167(iParam1, &Var2, iParam5);
		if (Var2 == 0)
		{
			return 1;
		}
		if (unk_0x765F6FEEFF39224F(*iParam0))
		{
			if (unk_0x541D5C57194E73C4(*iParam0) != Var2)
			{
			}
			return 1;
		}
		if ((iParam1 == 0 && !Global_106565.f_2357.f_539.f_4316) && Global_106565.f_9079.f_99.f_58[131])
		{
			Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/] = 0;
		}
		if (Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/] == Var2)
		{
			unk_0xB815670C37E03CDE(Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/]);
			if (unk_0x5D98D654CDC2165A(Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = unk_0xC651C43AB13A15E5(Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/], vParam2, fParam3, false, false, false);
				unk_0x1B2303F9DC2D90D5(*iParam0, 1084227584);
				unk_0xD5386CD3834C2895(*iParam0, 0);
				unk_0x26D5EA44545890ED(*iParam0, 0);
				unk_0x09993E7216CF52C4(*iParam0, true);
				unk_0x7FC2040EB34E0E31(*iParam0, 1250, 0);
				unk_0xB81134EAAC434D76(*iParam0, 1250f);
				unk_0xFA05791B9B8FA536(*iParam0, 1250f);
				Var2.f_3 = 1250;
				unk_0x65EA11CF317FE4FA(*iParam0, Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_5, Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_6);
				unk_0x4A7AB87632044178(*iParam0, Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_7, Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_8);
				unk_0x62B7B895D641DC81(*iParam0, Var2.f_2);
				iVar3 = 0;
				while (iVar3 < 12)
				{
					unk_0x3A3707C1ECABF993(*iParam0, iVar3 + 1, !Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_11[iVar3]);
					iVar3++;
				}
				if (Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_24)
				{
					unk_0x651E809B08AC55E2(*iParam0, Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_245(&uVar1, &iVar0))
				{
					unk_0x6F10E9B95245828B(*iParam0, &uVar1);
					unk_0x177C85C6D06E7E04(*iParam0, iVar0);
				}
				else
				{
					unk_0x6F10E9B95245828B(*iParam0, &(Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_27));
					if (Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26 < unk_0x0E8FDE8C0E616A4C())
					{
						unk_0x177C85C6D06E7E04(*iParam0, Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				unk_0x4D394438E3492CCE(*iParam0, Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_84, Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_85, Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_86);
				unk_0x4459178BAF2918E1(*iParam0, Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_88);
				unk_0xBF98CE54BD141AFF(*iParam0, Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_87);
				unk_0xB8A3AC2A7B2465FD(*iParam0, Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_93, Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_94, Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_95);
				unk_0xA7CD654BB1AF9419(*iParam0, 2, unk_0x0E4018692D92041D(Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 28));
				unk_0xA7CD654BB1AF9419(*iParam0, 3, unk_0x0E4018692D92041D(Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 29));
				unk_0xA7CD654BB1AF9419(*iParam0, 0, unk_0x0E4018692D92041D(Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 30));
				unk_0xA7CD654BB1AF9419(*iParam0, 1, unk_0x0E4018692D92041D(Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 31));
				if (unk_0x864DE9BC3905751B(*iParam0) > 1 && Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					unk_0x40DFA7AAEFC8F34C(*iParam0, Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!unk_0xC3622EC0E0215A79(unk_0x541D5C57194E73C4(*iParam0)))
					{
						if (unk_0x9E374B5F44A76AE2(unk_0x541D5C57194E73C4(*iParam0)))
						{
							if (Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								unk_0x4FF8F6D30BFBB224(*iParam0, Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							unk_0x4FF8F6D30BFBB224(*iParam0, Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_241(iParam0, &(Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_31), &(Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_81));
				unk_0x90425F35DD715133(*iParam0, Var2.f_96);
				if (iParam1 == 2)
				{
					if (unk_0x541D5C57194E73C4(*iParam0) == joaat("bodhi2"))
					{
						func_239(iParam0);
					}
				}
				if (bParam4)
				{
					unk_0x71CA80D41E1338B4(Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam1 /*98*/]);
				}
				func_238(*iParam0, iParam1);
				return 1;
			}
		}
		else if (Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/] == Var2)
		{
			unk_0xB815670C37E03CDE(Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/]);
			if (unk_0x5D98D654CDC2165A(Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = unk_0xC651C43AB13A15E5(Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/], vParam2, fParam3, false, false, false);
				unk_0x1B2303F9DC2D90D5(*iParam0, 1084227584);
				unk_0xD5386CD3834C2895(*iParam0, 0);
				unk_0x26D5EA44545890ED(*iParam0, 0);
				unk_0x09993E7216CF52C4(*iParam0, true);
				unk_0x7FC2040EB34E0E31(*iParam0, 1250, 0);
				unk_0xB81134EAAC434D76(*iParam0, 1250f);
				unk_0xFA05791B9B8FA536(*iParam0, 1250f);
				Var2.f_3 = 1250;
				unk_0x65EA11CF317FE4FA(*iParam0, Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_5, Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_6);
				unk_0x4A7AB87632044178(*iParam0, Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_7, Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_8);
				unk_0x62B7B895D641DC81(*iParam0, Var2.f_2);
				iVar4 = 0;
				while (iVar4 < 12)
				{
					unk_0x3A3707C1ECABF993(*iParam0, iVar4 + 1, !Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_11[iVar4]);
					iVar4++;
				}
				if (Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_24)
				{
					unk_0x651E809B08AC55E2(*iParam0, Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_245(&uVar1, &iVar0))
				{
					unk_0x6F10E9B95245828B(*iParam0, &uVar1);
					unk_0x177C85C6D06E7E04(*iParam0, iVar0);
				}
				else
				{
					unk_0x6F10E9B95245828B(*iParam0, &(Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_27));
					if (Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26 < unk_0x0E8FDE8C0E616A4C())
					{
						unk_0x177C85C6D06E7E04(*iParam0, Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				unk_0x4D394438E3492CCE(*iParam0, Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_84, Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_85, Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_86);
				unk_0x4459178BAF2918E1(*iParam0, Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_88);
				unk_0xBF98CE54BD141AFF(*iParam0, Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_87);
				unk_0xB8A3AC2A7B2465FD(*iParam0, Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_93, Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_94, Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_95);
				unk_0xA7CD654BB1AF9419(*iParam0, 2, unk_0x0E4018692D92041D(Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 28));
				unk_0xA7CD654BB1AF9419(*iParam0, 3, unk_0x0E4018692D92041D(Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 29));
				unk_0xA7CD654BB1AF9419(*iParam0, 0, unk_0x0E4018692D92041D(Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 30));
				unk_0xA7CD654BB1AF9419(*iParam0, 1, unk_0x0E4018692D92041D(Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 31));
				if (unk_0x864DE9BC3905751B(*iParam0) > 1 && Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					unk_0x40DFA7AAEFC8F34C(*iParam0, Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!unk_0xC3622EC0E0215A79(unk_0x541D5C57194E73C4(*iParam0)))
					{
						if (unk_0x9E374B5F44A76AE2(unk_0x541D5C57194E73C4(*iParam0)))
						{
							if (Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								unk_0x4FF8F6D30BFBB224(*iParam0, Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							unk_0x4FF8F6D30BFBB224(*iParam0, Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_241(iParam0, &(Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_31), &(Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_81));
				unk_0x90425F35DD715133(*iParam0, Var2.f_96);
				if (iParam1 == 2)
				{
					if (unk_0x541D5C57194E73C4(*iParam0) == joaat("bodhi2"))
					{
						func_239(iParam0);
					}
				}
				if (bParam4)
				{
					unk_0x71CA80D41E1338B4(Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam1 /*98*/]);
				}
				func_238(*iParam0, iParam1);
				return 1;
			}
		}
		else
		{
			unk_0xB815670C37E03CDE(Var2);
			if (unk_0x5D98D654CDC2165A(Var2))
			{
				bVar5 = true;
				*iParam0 = unk_0xC651C43AB13A15E5(Var2, vParam2, fParam3, true, true, false);
				unk_0x1B2303F9DC2D90D5(*iParam0, 1084227584);
				unk_0xD5386CD3834C2895(*iParam0, 0);
				unk_0x26D5EA44545890ED(*iParam0, 0);
				unk_0x09993E7216CF52C4(*iParam0, true);
				StringCopy(&cVar6, unk_0x00D614EBCFFD919D(*iParam0), 16);
				unk_0x7FC2040EB34E0E31(*iParam0, 1250, 0);
				unk_0xB81134EAAC434D76(*iParam0, 1250f);
				unk_0xFA05791B9B8FA536(*iParam0, 1250f);
				Var2.f_3 = 1250;
				unk_0x65EA11CF317FE4FA(*iParam0, Var2.f_5, Var2.f_6);
				unk_0x4A7AB87632044178(*iParam0, Var2.f_7, Var2.f_8);
				unk_0x62B7B895D641DC81(*iParam0, Var2.f_2);
				iVar7 = 0;
				while (iVar7 < 12)
				{
					unk_0x3A3707C1ECABF993(*iParam0, iVar7 + 1, !Var2.f_11[iVar7]);
					iVar7++;
				}
				if (Var2.f_24)
				{
					unk_0x651E809B08AC55E2(*iParam0, Var2.f_24);
				}
				if (func_245(&uVar1, &iVar0))
				{
					unk_0x6F10E9B95245828B(*iParam0, &uVar1);
					unk_0x177C85C6D06E7E04(*iParam0, iVar0);
				}
				else
				{
					unk_0x6F10E9B95245828B(*iParam0, &(Var2.f_27));
					if (Var2.f_26 >= 0 && Var2.f_26 < unk_0x0E8FDE8C0E616A4C())
					{
						unk_0x177C85C6D06E7E04(*iParam0, Var2.f_26);
					}
				}
				unk_0x4D394438E3492CCE(*iParam0, Var2.f_84, Var2.f_85, Var2.f_86);
				unk_0x4459178BAF2918E1(*iParam0, Var2.f_88);
				unk_0xBF98CE54BD141AFF(*iParam0, Var2.f_87);
				unk_0xB8A3AC2A7B2465FD(*iParam0, Var2.f_93, Var2.f_94, Var2.f_95);
				unk_0xA7CD654BB1AF9419(*iParam0, 2, unk_0x0E4018692D92041D(Var2.f_92, 28));
				unk_0xA7CD654BB1AF9419(*iParam0, 3, unk_0x0E4018692D92041D(Var2.f_92, 29));
				unk_0xA7CD654BB1AF9419(*iParam0, 0, unk_0x0E4018692D92041D(Var2.f_92, 30));
				unk_0xA7CD654BB1AF9419(*iParam0, 1, unk_0x0E4018692D92041D(Var2.f_92, 31));
				if (unk_0x864DE9BC3905751B(*iParam0) > 1 && Var2.f_89 >= 0)
				{
					unk_0x40DFA7AAEFC8F34C(*iParam0, Var2.f_89);
				}
				if (Var2.f_90 > -1)
				{
					if (!unk_0xC3622EC0E0215A79(unk_0x541D5C57194E73C4(*iParam0)))
					{
						if (unk_0x9E374B5F44A76AE2(unk_0x541D5C57194E73C4(*iParam0)))
						{
							if (Var2.f_90 == 6)
							{
								unk_0x4FF8F6D30BFBB224(*iParam0, Var2.f_90);
							}
						}
						else
						{
							unk_0x4FF8F6D30BFBB224(*iParam0, Var2.f_90);
						}
					}
				}
				func_241(iParam0, &(Var2.f_31), &(Var2.f_81));
				unk_0x90425F35DD715133(*iParam0, Var2.f_96);
				if (iParam1 == 1)
				{
					if (unk_0x541D5C57194E73C4(*iParam0) == joaat("bagger") && !Global_106565.f_9079.f_99.f_58[118])
					{
						unk_0x6F10E9B95245828B(*iParam0, &cVar6);
						bVar5 = false;
					}
				}
				else if (iParam1 == 2)
				{
					if (unk_0x541D5C57194E73C4(*iParam0) == joaat("bodhi2"))
					{
						func_239(iParam0);
					}
				}
				else if (((iParam1 == 0 && !Global_106565.f_2357.f_539.f_4316) && Global_106565.f_9079.f_99.f_58[131]) && unk_0x541D5C57194E73C4(*iParam0) == joaat("tailgater"))
				{
					unk_0xB4B3AEABE432069B(*iParam0, 6, 1, false);
					unk_0xB4B3AEABE432069B(*iParam0, 14, 7, false);
					unk_0xB4B3AEABE432069B(*iParam0, 11, 2, false);
					unk_0xB4B3AEABE432069B(*iParam0, 2, 3, false);
					unk_0xB4B3AEABE432069B(*iParam0, 7, 5, false);
					unk_0xB4B3AEABE432069B(*iParam0, 0, 0, false);
					unk_0xB4B3AEABE432069B(*iParam0, 3, 3, false);
					unk_0xB4B3AEABE432069B(*iParam0, 13, 1, false);
					unk_0xB4B3AEABE432069B(*iParam0, 4, 3, false);
					unk_0xB4B3AEABE432069B(*iParam0, 12, 2, false);
					unk_0xBCD21D2535E4A2C9(*iParam0, 22, true);
					unk_0x4FF8F6D30BFBB224(*iParam0, 2);
					unk_0xB4B3AEABE432069B(*iParam0, 23, 11, false);
					unk_0xBF98CE54BD141AFF(*iParam0, 2);
					Global_106565.f_2357.f_539.f_4316 = 1;
					func_207(iParam1, iParam0, 0, 1);
				}
				if (bParam4)
				{
					unk_0x71CA80D41E1338B4(Var2);
				}
				if (bVar5)
				{
					func_238(*iParam0, iParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_207(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	
	if ((func_168(iParam0) && unk_0x765F6FEEFF39224F(*iParam1)) && unk_0x91D5C8283D19AF49(*iParam1, 0))
	{
		if (iParam2 > Global_106565.f_2357.f_539.f_2407)
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
			func_136(*iParam1, iParam0);
		}
		if (unk_0xCD2E94F6C3101AFC(*iParam1) != 0)
		{
			unk_0x520614EF43727019(*iParam1, 0);
		}
		Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/] = unk_0x541D5C57194E73C4(*iParam1);
		if (unk_0x13D6E1E301794440(*iParam1, &iVar1))
		{
			Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_1 = unk_0x541D5C57194E73C4(iVar1);
		}
		Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_2 = unk_0x8FE1E440C51947F5(*iParam1);
		Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_3 = unk_0xE80842D7B53F8525(*iParam1);
		Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[0] = unk_0x34B1602009421B58(*iParam1, 1);
		Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[1] = unk_0x34B1602009421B58(*iParam1, 2);
		Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[2] = unk_0x34B1602009421B58(*iParam1, 3);
		Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[3] = unk_0x34B1602009421B58(*iParam1, 4);
		Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[4] = unk_0x34B1602009421B58(*iParam1, 5);
		Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[5] = unk_0x34B1602009421B58(*iParam1, 6);
		Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[6] = unk_0x34B1602009421B58(*iParam1, 7);
		Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[7] = unk_0x34B1602009421B58(*iParam1, 8);
		Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[8] = unk_0x34B1602009421B58(*iParam1, 9);
		Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[9] = unk_0x34B1602009421B58(*iParam1, 10);
		Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[10] = unk_0x34B1602009421B58(*iParam1, 11);
		Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[11] = unk_0x34B1602009421B58(*iParam1, 12);
		if (unk_0x8D9FD90A001D447C(*iParam1, 0))
		{
			iVar2 = unk_0xDFEA91A83C472035(*iParam1);
			if (iVar2 == 0 || iVar2 == 5)
			{
				Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24 = 1;
			}
			else
			{
				Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
			}
		}
		else
		{
			Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
		}
		Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_25 = unk_0xDDB55BEB9D76717D();
		StringCopy(&(Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_27), unk_0x00D614EBCFFD919D(*iParam1), 16);
		Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_26 = unk_0x4FD199DD0B583F5C(*iParam1);
		unk_0x344F2893FA037279(*iParam1, &(Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_5), &(Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_6));
		unk_0xEB9780F1DB69CCB5(*iParam1, &(Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_7), &(Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_8));
		unk_0xBA1F4FDFE2E12FFE(*iParam1, &(Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_84), &(Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_85), &(Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_86));
		Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_88 = unk_0xEEBF939BC404D2BE(*iParam1);
		Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_87 = unk_0x362EE6C496FA3D80(*iParam1);
		Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_89 = unk_0xE84981C3FDDC67C7(*iParam1);
		Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_90 = unk_0x6598BA4640D7E61A(*iParam1);
		unk_0x425E187882F60326(*iParam1, &(Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_93), &(Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_94), &(Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_95));
		if (unk_0xA8DC0D4489FEC63C(*iParam1, 2))
		{
			unk_0x8950ED5730F62EE8(&(Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		else
		{
			unk_0xCE689A8E8C42ED78(&(Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		if (unk_0xA8DC0D4489FEC63C(*iParam1, 3))
		{
			unk_0x8950ED5730F62EE8(&(Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		else
		{
			unk_0xCE689A8E8C42ED78(&(Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		if (unk_0xA8DC0D4489FEC63C(*iParam1, 0))
		{
			unk_0x8950ED5730F62EE8(&(Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		else
		{
			unk_0xCE689A8E8C42ED78(&(Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		if (unk_0xA8DC0D4489FEC63C(*iParam1, 1))
		{
			unk_0x8950ED5730F62EE8(&(Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		else
		{
			unk_0xCE689A8E8C42ED78(&(Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		Global_106565.f_2357.f_539.f_4317[iParam0] = 10;
		if (unk_0x7BF2203BA17719C8(*iParam1) >= 0 && func_211(*iParam1, 0, &uVar0))
		{
			func_178(iParam1, &(Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31), &(Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_81));
			if (bParam3)
			{
				Global_106565.f_20112[iParam0 /*43*/].f_40 = 1;
				Global_106565.f_20112[iParam0 /*43*/] = Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/];
				Global_106565.f_20112[iParam0 /*43*/].f_3 = Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_87;
				Global_106565.f_20112[iParam0 /*43*/].f_4 = Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_84;
				Global_106565.f_20112[iParam0 /*43*/].f_5 = Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_85;
				Global_106565.f_20112[iParam0 /*43*/].f_6 = Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_86;
				Global_106565.f_20112[iParam0 /*43*/].f_10 = Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_90;
				Global_106565.f_20112[iParam0 /*43*/].f_16 = !Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_88;
				Global_106565.f_20112[iParam0 /*43*/].f_19 = { Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_27 };
				Global_106565.f_20112[iParam0 /*43*/].f_23 = Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_26;
				Global_106565.f_20112[iParam0 /*43*/].f_7 = Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[11];
				Global_106565.f_20112[iParam0 /*43*/].f_8 = Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[12];
				Global_106565.f_20112[iParam0 /*43*/].f_9 = Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[23];
				Global_106565.f_20112[iParam0 /*43*/].f_11 = Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[4];
				Global_106565.f_20112[iParam0 /*43*/].f_12 = Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[15];
				Global_106565.f_20112[iParam0 /*43*/].f_13 = Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[16];
				Global_106565.f_20112[iParam0 /*43*/].f_14 = Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[14];
				Global_106565.f_20112[iParam0 /*43*/].f_15 = Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[22];
				Global_106565.f_20112[iParam0 /*43*/].f_18 = Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[20];
				Global_106565.f_20112[iParam0 /*43*/].f_17 = Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[18];
				Global_106565.f_20112[iParam0 /*43*/].f_24 = unk_0x3DE306309922F8D1(*iParam1, 11) + 1;
				Global_106565.f_20112[iParam0 /*43*/].f_25 = unk_0x3DE306309922F8D1(*iParam1, 12) + 1;
				Global_106565.f_20112[iParam0 /*43*/].f_26 = unk_0x3DE306309922F8D1(*iParam1, 4) + 1;
				Global_106565.f_20112[iParam0 /*43*/].f_27 = unk_0x3DE306309922F8D1(*iParam1, 23) + 1;
				Global_106565.f_20112[iParam0 /*43*/].f_28 = unk_0x3DE306309922F8D1(*iParam1, 14) + 1;
				Global_106565.f_20112[iParam0 /*43*/].f_29 = unk_0x3DE306309922F8D1(*iParam1, 16) + 1;
				Global_106565.f_20112[iParam0 /*43*/].f_30 = unk_0x3DE306309922F8D1(*iParam1, 15) + 1;
				Global_106565.f_20112[iParam0 /*43*/].f_32 = unk_0xBBCEC7EB03B44376(*iParam1);
				Global_106565.f_20112[iParam0 /*43*/].f_33[0] = unk_0xA98B95F4DE09F76B(*iParam1);
				Global_106565.f_20112[iParam0 /*43*/].f_33[1] = unk_0xDD86272C593A9D9C(*iParam1, 14, 0);
				Global_106565.f_20112[iParam0 /*43*/].f_33[2] = unk_0xDD86272C593A9D9C(*iParam1, 14, 1);
				Global_106565.f_20112[iParam0 /*43*/].f_33[3] = unk_0xDD86272C593A9D9C(*iParam1, 14, 2);
				Global_106565.f_20112[iParam0 /*43*/].f_33[4] = unk_0xDD86272C593A9D9C(*iParam1, 14, 3);
				Global_106565.f_20112[iParam0 /*43*/].f_39 = unk_0xA6EEC7520A5DC1B1(*iParam1);
				Global_106565.f_20112[iParam0 /*43*/].f_31 = func_210(*iParam1);
				Global_106565.f_20112[iParam0 /*43*/].f_33[0] = unk_0xAEED1B983783F3B3(*iParam1);
				unk_0xDB9A1E6F325ED5F3(*iParam1, &iVar4, &uVar5, &uVar6);
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
				func_208(Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_5, Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_7, iVar3, 1, &(Global_106565.f_20112[iParam0 /*43*/].f_1));
				unk_0xA60926B1795990F3(*iParam1, &iVar4, &uVar5);
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
				func_208(Global_106565.f_2357.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_6, -1, iVar3, 0, &(Global_106565.f_20112[iParam0 /*43*/].f_2));
			}
		}
	}
}

int func_208(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (func_209(iVar0, &sVar2, &iVar1, &iVar3, &iVar4))
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

bool func_209(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)
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
		
		case 79:
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

float func_210(int iParam0)
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
	if ((unk_0x765F6FEEFF39224F(iParam0) && unk_0x91D5C8283D19AF49(iParam0, 0)) && unk_0x7BF2203BA17719C8(iParam0) >= 0)
	{
		if (unk_0xA6EEC7520A5DC1B1(iParam0) == 3)
		{
			iVar5 = iVar0;
		}
		else if (unk_0xA6EEC7520A5DC1B1(iParam0) == 1)
		{
			iVar5 = iVar1;
		}
		else if (unk_0xA6EEC7520A5DC1B1(iParam0) == 2)
		{
			iVar5 = iVar2;
		}
		else if (unk_0xA6EEC7520A5DC1B1(iParam0) == 0)
		{
			if (unk_0x9E374B5F44A76AE2(unk_0x541D5C57194E73C4(iParam0)))
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

int func_211(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;
	bool bVar1;
	
	*uParam2 = 0;
	if (!unk_0x765F6FEEFF39224F(iParam0))
	{
		return 0;
	}
	if (!unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0xBB8F0B8D18FF4982(unk_0x541D5C57194E73C4(iParam0)))
	{
		return 0;
	}
	iVar0 = unk_0x541D5C57194E73C4(iParam0);
	if ((!func_236(iVar0, bParam1, uParam2) && !func_235(unk_0x95B959F18401C09A())) && !func_219(iParam0))
	{
		return 0;
	}
	if (func_235(unk_0x95B959F18401C09A()))
	{
		if (func_218(iVar0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	bVar1 = false;
	if (func_217(unk_0x95B959F18401C09A()) && (unk_0x097E7778E3E162E8(iVar0) || unk_0x57D74362A8BD1490(iVar0)))
	{
		bVar1 = true;
	}
	if (((unk_0xF3E8C179636ED71E(iParam0) && !func_215(iParam0)) && !bVar1) && !(func_214(unk_0x541D5C57194E73C4(iParam0)) && func_212(unk_0x95B959F18401C09A())))
	{
		switch (unk_0x541D5C57194E73C4(iParam0))
		{
			case -801550069:
			case 679453769:
			case 1909700336:
			case 1721676810:
			case 840387324:
			case -715746948:
				*uParam2 = 16;
				break;
			
			default:
				*uParam2 = 2;
				break;
		}
		return 0;
	}
	if (!unk_0xB331FCEB94EB05C8())
	{
		if ((func_149(iParam0) && unk_0x541D5C57194E73C4(iParam0) != joaat("sentinel2")) && unk_0x541D5C57194E73C4(iParam0) != joaat("issi2"))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	return 1;
}

int func_212(int iParam0)
{
	if (iParam0 != func_111())
	{
		if (func_110(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_213(Global_2424047[iParam0 /*416*/].f_309.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_213(int iParam0)
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
		case 79:
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
	}
	return -1;
}

int func_214(int iParam0)
{
	if (((iParam0 == 1945374990 || iParam0 == 1653666139) || iParam0 == 219613597) || iParam0 == -1988428699)
	{
		return 1;
	}
	return 0;
}

int func_215(int iParam0)
{
	switch (unk_0x541D5C57194E73C4(iParam0))
	{
		case -32236122:
		case 177270108:
		case 387748548:
		case 1502869817:
		case -1881846085:
		case 668439077:
		case -1146969353:
		case 1542143200:
		case -579747861:
		case -1694081890:
		case -2042350822:
			return 1;
			break;
		
		case -801550069:
		case 679453769:
		case 1909700336:
		case 1721676810:
		case 840387324:
		case -715746948:
			if (func_216(unk_0x95B959F18401C09A()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_216(int iParam0)
{
	if (iParam0 != func_111())
	{
		if (func_110(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_213(Global_2424047[iParam0 /*416*/].f_309.f_5) == 13;
			}
		}
	}
	return 0;
}

int func_217(int iParam0)
{
	if (iParam0 != func_111())
	{
		if (func_110(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_213(Global_2424047[iParam0 /*416*/].f_309.f_5) == 7;
			}
		}
	}
	return 0;
}

int func_218(int iParam0)
{
	switch (iParam0)
	{
		case -2118308144:
		case 1489874736:
		case -1693015116:
		case -692292317:
		case -1435527158:
			return 1;
			break;
	}
	return 0;
}

int func_219(int iParam0)
{
	if (func_234(unk_0x95B959F18401C09A()) || func_233(unk_0x95B959F18401C09A()))
	{
		if (func_220(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_220(int iParam0)
{
	if ((!unk_0x765F6FEEFF39224F(iParam0) || !unk_0x91D5C8283D19AF49(iParam0, 0)) || unk_0xD62C4419A41F106A(iParam0, 0))
	{
		return 0;
	}
	if (func_223(iParam0, 0))
	{
		return 1;
	}
	if (unk_0xA0EDFFB6CF5B314A(iParam0, "Player_Vehicle"))
	{
		if (unk_0xE48FAA8A938257C9(iParam0, "Player_Vehicle") == unk_0x771810413D71C060(unk_0x95B959F18401C09A()))
		{
			if (func_221(iParam0))
			{
				return 1;
			}
			switch (unk_0x541D5C57194E73C4(iParam0))
			{
				case 159274291:
				case 433954513:
				case 1483171323:
				case 886810209:
				case 1561920505:
				case -410205223:
				case 903794909:
				case -391595372:
				case 1254014755:
				case 1416466158:
					return 1;
					break;
				}
			}
	}
	return 0;
}

int func_221(int iParam0)
{
	if (!unk_0x765F6FEEFF39224F(iParam0) || !unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		return 0;
	}
	if (func_222(unk_0x541D5C57194E73C4(iParam0)))
	{
		return 1;
	}
	return 0;
}

int func_222(int iParam0)
{
	switch (iParam0)
	{
		case 562680400:
		case 1897744184:
		case -32236122:
		case 884483972:
		case -1210451983:
		case 1356124575:
		case -1924433270:
		case -1242608589:
		case -212993243:
		case 2044532910:
		case -638562243:
			return 1;
			break;
	}
	return 0;
}

int func_223(int iParam0, bool bParam1)
{
	switch (unk_0x541D5C57194E73C4(iParam0))
	{
		case joaat("technical"):
		case joaat("insurgent"):
			if (func_225(unk_0x541D5C57194E73C4(iParam0), 0))
			{
				if (Global_2528542.f_292 == iParam0)
				{
					return 1;
				}
				else if (func_224(iParam0) != -1 && !bParam1)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_224(int iParam0)
{
	int iVar0;
	
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Global_2437364.f_627[iVar0] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_225(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		if (func_232(iParam0, 0))
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
			return func_231();
			break;
		
		case joaat("sabregt"):
			if (Global_262145.f_14096)
			{
				return func_230();
			}
			break;
		
		case joaat("tornado"):
		case joaat("tornado2"):
		case joaat("tornado3"):
			if (Global_262145.f_14097)
			{
				return func_230();
			}
			break;
		
		case joaat("virgo3"):
			if (Global_262145.f_14095)
			{
				return func_230();
			}
			break;
		
		case joaat("minivan"):
			if (Global_262145.f_14098)
			{
				return func_230();
			}
			break;
		
		case joaat("slamvan"):
			if (Global_262145.f_14100)
			{
				return func_230();
			}
			break;
		
		case joaat("sultan"):
		case joaat("banshee"):
			return func_229();
			break;
		
		case joaat("comet2"):
			if (Global_262145.f_18543)
			{
				return func_228();
			}
			break;
		
		case joaat("diablous"):
			if (Global_262145.f_18545)
			{
				return func_228();
			}
			break;
		
		case joaat("fcr"):
			if (Global_262145.f_18549)
			{
				return func_228();
			}
			break;
		
		case joaat("elegy2"):
			if (Global_262145.f_18546)
			{
				return func_228();
			}
			break;
		
		case joaat("nero"):
			if (Global_262145.f_18553)
			{
				return func_228();
			}
			break;
		
		case joaat("italigtb"):
			if (Global_262145.f_18551)
			{
				return func_228();
			}
			break;
		
		case joaat("specter"):
			if (Global_262145.f_18556)
			{
				return func_228();
			}
			break;
		
		case joaat("technical"):
			if (Global_262145.f_20499)
			{
				return func_227();
			}
			break;
		
		case joaat("insurgent"):
			if (Global_262145.f_20500)
			{
				return func_227();
			}
			break;
		
		case joaat("ratloader"):
		case joaat("ratloader2"):
			return func_226();
			break;
		
		case joaat("glendale"):
			return func_226();
			break;
		
		case -2096690334:
			return func_226();
			break;
		
		case 931280609:
			return func_226();
			break;
		
		case joaat("gargoyle"):
			return func_226();
			break;
		
		case joaat("dominator"):
			return func_226();
			break;
		
		case joaat("dominator2"):
			return func_226();
			break;
		
		case 444994115:
			return func_226();
			break;
		
		case 1637620610:
			return func_226();
			break;
		
		case -755532233:
			return func_226();
			break;
		
		case -27326686:
			return func_226();
			break;
		
		case -1812949672:
			return func_226();
			break;
		
		case -1374500452:
			return func_226();
			break;
		
		case 1009171724:
		case 2139203625:
		case 668439077:
		case -2061049099:
		case 628003514:
		case 1721676810:
		case -1146969353:
		case -801550069:
		case -688189648:
		case 540101442:
		case -1924800695:
		case -1890996696:
		case -1694081890:
		case 373261600:
		case 1537277726:
		case 840387324:
		case 1542143200:
		case 679453769:
		case -1375060657:
		case -1106120762:
		case -1744505657:
		case 2038858402:
		case -2042350822:
		case 1742022738:
		case 1239571361:
		case -715746948:
		case -579747861:
		case 1909700336:
		case -1293924613:
		case -1478704292:
			return func_226();
			break;
	}
	return 0;
}

bool func_226()
{
	return unk_0xE9D7B652961D4AA3(1927191088);
}

bool func_227()
{
	return unk_0xE9D7B652961D4AA3(2067165443);
}

bool func_228()
{
	return unk_0xE9D7B652961D4AA3(-957277403);
}

bool func_229()
{
	return unk_0xE9D7B652961D4AA3(210122941);
}

bool func_230()
{
	return unk_0xE9D7B652961D4AA3(-1894522408);
}

bool func_231()
{
	return unk_0xE9D7B652961D4AA3(1630677557);
}

int func_232(int iParam0, int iParam1)
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

int func_233(int iParam0)
{
	if (iParam0 != func_111())
	{
		if (func_110(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1 && Global_2424047[iParam0 /*416*/].f_309.f_8 != func_111())
			{
				return func_213(Global_2424047[iParam0 /*416*/].f_309.f_5) == 5;
			}
		}
	}
	return 0;
}

int func_234(int iParam0)
{
	if (iParam0 != func_111())
	{
		if (func_110(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1 && Global_2424047[iParam0 /*416*/].f_309.f_8 != func_111())
			{
				return func_213(Global_2424047[iParam0 /*416*/].f_309.f_5) == 8;
			}
		}
	}
	return 0;
}

int func_235(int iParam0)
{
	if (iParam0 != func_111())
	{
		if (func_110(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_213(Global_2424047[iParam0 /*416*/].f_309.f_5) == 9;
			}
		}
	}
	return 0;
}

int func_236(int iParam0, bool bParam1, var uParam2)
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
	if (((((((iParam0 == joaat("ambulance") || iParam0 == 1938952078) || iParam0 == joaat("taxi")) || iParam0 == joaat("lguard")) || iParam0 == joaat("ripley")) || iParam0 == joaat("dilettante2")) || iParam0 == joaat("airbus")) || iParam0 == joaat("airtug"))
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
	if (func_217(unk_0x95B959F18401C09A()) && (unk_0x097E7778E3E162E8(iParam0) || unk_0x57D74362A8BD1490(iParam0)))
	{
		bVar0 = true;
	}
	if ((((((((((!unk_0x0C2E237744BA0026(iParam0) && !unk_0x9E374B5F44A76AE2(iParam0)) && iParam0 != joaat("blazer")) && iParam0 != joaat("blazer3")) && iParam0 != joaat("blazer4")) && iParam0 != joaat("blazer5")) && iParam0 != joaat("chimera")) && iParam0 != 1502869817) && iParam0 != -1881846085) && iParam0 != 916547552) && !bVar0)
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
	if (unk_0xB331FCEB94EB05C8())
	{
		if (func_237(iParam0))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	if (!unk_0xB331FCEB94EB05C8())
	{
		if (iParam0 == joaat("insurgent") || iParam0 == joaat("insurgent2"))
		{
			*uParam2 = 2;
		}
	}
	return 1;
}

int func_237(int iParam0)
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

void func_238(int iParam0, int iParam1)
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

void func_239(int iParam0)
{
	if (!func_240(*iParam0))
	{
		unk_0x3A3707C1ECABF993(*iParam0, 5, !Global_106565.f_9079.f_99.f_58[119]);
	}
}

bool func_240(int iParam0)
{
	return unk_0x34B1602009421B58(iParam0, 5);
}

int func_241(int iParam0, var uParam1, var uParam2)
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
	if (func_232(unk_0x541D5C57194E73C4(*iParam0), 1) && unk_0xEECA910C75BFF02B(*iParam0, 24) != func_244(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0xB4B3AEABE432069B(*iParam0, 24, func_244(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_243(iParam0);
	if (func_242(*iParam0))
	{
		unk_0xA155CCFA52A9A0C4(*iParam0, true);
		unk_0x09993E7216CF52C4(*iParam0, true);
	}
	return 1;
}

int func_242(int iParam0)
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

void func_243(var uParam0)
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

int func_244(int iParam0, int iParam1)
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

int func_245(var uParam0, int iParam1)
{
	if (unk_0xB331FCEB94EB05C8())
	{
	}
	else if (Global_106565.f_20112.f_261)
	{
		*uParam0 = { Global_106565.f_20112.f_267 };
		*iParam1 = Global_106565.f_20112.f_271;
		return 1;
	}
	return 0;
}

void func_246(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		if (!func_250(iParam0))
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
			if (unk_0x0E4018692D92041D(uParam1->f_77, func_177(iVar0 + 1)))
			{
			}
			else
			{
				unk_0x8950ED5730F62EE8(&(uParam1->f_77), func_177(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0x0E4018692D92041D(uParam1->f_77, func_177(iVar1 + 1)))
			{
			}
			else
			{
				unk_0x8950ED5730F62EE8(&(uParam1->f_77), func_177(iVar1 + 1));
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
		if (((unk_0x0E4018692D92041D(uParam1->f_77, 15) || func_249(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_248())
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
		if (uParam1->f_65 == -1 && !func_179(uParam1->f_66))
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
						func_247(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_247(iParam0, uParam1->f_69);
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
			func_241(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0x097E7778E3E162E8(uParam1->f_66) && !unk_0x444D956C7F94526E(uParam1->f_66))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (unk_0x0E4018692D92041D(uParam1->f_77, func_177(iVar2 + 1)))
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

void func_247(int iParam0, int iParam1)
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

bool func_248()
{
	return unk_0xE9D7B652961D4AA3(-1691188696);
}

int func_249(int iParam0)
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

int func_250(int iParam0)
{
	if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		if (!func_256(unk_0x95B959F18401C09A(), -1))
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
	if (func_252(unk_0x95B959F18401C09A()) == 3)
	{
		if (unk_0x765F6FEEFF39224F(iParam0) && unk_0x91D5C8283D19AF49(iParam0, 0))
		{
			if (func_251(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_251(int iParam0)
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

int func_252(int iParam0)
{
	if (func_255(iParam0) == 233)
	{
		return func_253(iParam0);
	}
	return -1;
}

int func_253(int iParam0)
{
	if (func_254(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_181;
	}
	return -1;
}

int func_254(int iParam0, int iParam1)
{
	if (Global_1626536[iParam0 /*603*/].f_11.f_33 != -1 || (iParam1 && Global_1626536[iParam0 /*603*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_255(int iParam0)
{
	if (func_254(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_33;
	}
	return -1;
}

int func_256(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_110(iParam0, 1, 1))
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

int func_257(int iParam0, var uParam1)
{
	struct<82> Var0;
	
	if (!func_168(iParam0))
	{
		return 0;
	}
	if (Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam0 /*98*/] != 0)
	{
		if (Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam0 /*98*/] == uParam1->f_66 && unk_0x36163153849DFDA1(&(Global_106565.f_2357.f_539.f_2407[0 /*295*/][iParam0 /*98*/].f_27)) == unk_0x36163153849DFDA1(&(uParam1->f_1)))
		{
			return 1;
		}
	}
	if (Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam0 /*98*/] != 0)
	{
		if (Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam0 /*98*/] == uParam1->f_66 && unk_0x36163153849DFDA1(&(Global_106565.f_2357.f_539.f_2407[1 /*295*/][iParam0 /*98*/].f_27)) == unk_0x36163153849DFDA1(&(uParam1->f_1)))
		{
			return 1;
		}
	}
	Var0.f_11 = 12;
	Var0.f_31 = 49;
	Var0.f_81 = 2;
	func_167(iParam0, &Var0, 1);
	if (Var0 != 0)
	{
		if (Var0 == uParam1->f_66 && unk_0x36163153849DFDA1(&(Var0.f_27)) == unk_0x36163153849DFDA1(&(uParam1->f_1)))
		{
			return 1;
		}
	}
	func_167(iParam0, &Var0, 2);
	if (Var0 != 0)
	{
		if (Var0 == uParam1->f_66 && unk_0x36163153849DFDA1(&(Var0.f_27)) == unk_0x36163153849DFDA1(&(uParam1->f_1)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_258()
{
	return func_259(&(Global_97130.f_2890));
}

int func_259(var uParam0)
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_139(uParam0->f_12.f_66, 0))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == joaat("stunt") && func_53(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

bool func_260()
{
	return func_259(&(Global_100114.f_2890));
}

int func_261(bool bParam0)
{
	bool bVar0;
	vector3 vVar1;
	
	bVar0 = false;
	func_269(&uLocal_94, &Global_90574);
	func_270(&uLocal_94, joaat("s_m_m_armoured_01"));
	func_270(&uLocal_94, iLocal_84);
	func_270(&uLocal_94, iLocal_85);
	if ((unk_0x5D98D654CDC2165A(joaat("s_m_m_armoured_01")) && unk_0x5D98D654CDC2165A(iLocal_84)) && unk_0x5D98D654CDC2165A(iLocal_85))
	{
		if (bParam0)
		{
			if (!unk_0x765F6FEEFF39224F(Local_1295))
			{
				if (unk_0x765F6FEEFF39224F(Global_90209[0]))
				{
					unk_0x0D21E1FDE062ED99(Global_90209[0], true, 1);
					Local_1295 = Global_90209[0];
				}
				else
				{
					bVar0 = false;
				}
			}
			if (!unk_0x765F6FEEFF39224F(vLocal_1285.x))
			{
				if (unk_0x765F6FEEFF39224F(Global_90209.f_9[0]))
				{
					unk_0x0D21E1FDE062ED99(Global_90209.f_9[0], true, 1);
					vLocal_1285.x = Global_90209.f_9[0];
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		else
		{
			func_270(&uLocal_94, iLocal_83);
			if (unk_0x5D98D654CDC2165A(iLocal_83) && unk_0xB6596C29F3179D0C(&Global_90574))
			{
				if (unk_0xCE3CFF625BEBAA04(&Global_90574, "jhp2a_main"))
				{
					unk_0xFF6E5EAB585ABA6A(&Global_90574, 23, &vVar1);
					unk_0xB7350047030F7672(vVar1, 20f, 0, 0, 0, 0, false, 0);
					Local_1295 = unk_0xC651C43AB13A15E5(iLocal_83, vVar1, 119.4988f, true, true, false);
					vLocal_1285.x = unk_0xE196503B36B6194B(Local_1295, 26, iLocal_82, -1, 1, true);
					unk_0x1B2303F9DC2D90D5(Local_1295, 1084227584);
					unk_0xF606706197A2C3A5(vLocal_1285.x, Local_1295, &Global_90574, 786475, 23, 16, -1, 12f, 0, 1073741824);
				}
				else
				{
					unk_0xFF6E5EAB585ABA6A(&Global_90574, 29, &vVar1);
					unk_0xB7350047030F7672(vVar1, 20f, 0, 0, 0, 0, false, 0);
					Local_1295 = unk_0xC651C43AB13A15E5(iLocal_83, vVar1, 134.0011f, true, true, false);
					vLocal_1285.x = unk_0xE196503B36B6194B(Local_1295, 26, iLocal_82, -1, 1, true);
					unk_0x1B2303F9DC2D90D5(Local_1295, 1084227584);
					unk_0xF606706197A2C3A5(vLocal_1285.x, Local_1295, &Global_90574, 786475, 29, 16, -1, 12f, 0, 1073741824);
				}
			}
		}
		if (unk_0x765F6FEEFF39224F(Local_1295))
		{
			func_267(Local_1295, 0);
			if (unk_0x91D5C8283D19AF49(Local_1295, 0))
			{
				unk_0x09993E7216CF52C4(Local_1295, true);
				unk_0x43D47AD82DA3C6EC(Local_1295, true, 1);
				unk_0x17A7D0FC069931EA(Local_1295, true);
				unk_0x23F395CF89089EB2(Local_1295, 1);
			}
		}
		if (unk_0x765F6FEEFF39224F(vLocal_1285.x))
		{
			if (!unk_0xBC2FC12AD0FBF72E(vLocal_1285.x))
			{
				unk_0x4A852F02088ECC9D(vLocal_1285.x, true);
				unk_0x0648A75D3F60E864(vLocal_1285.x, iLocal_1284);
				unk_0xDE9FF07CFD5DC172(vLocal_1285.x, 5);
				unk_0xF0BE7CB40DE62A2F(vLocal_1285.x, false);
				unk_0x28F648743D7DE312(vLocal_1285.x, 1, false);
				unk_0x697EBA5CF1A6AB57(vLocal_1285.x, joaat("weapon_pistol"), 15, false, true);
				func_266(&uLocal_1105, 3, vLocal_1285.x, "JHP2A_Driver", 0, 1);
				func_265(&(Local_1079[0 /*8*/]), 0, 0, 1);
			}
		}
		if (unk_0x765F6FEEFF39224F(Local_1295) && unk_0x765F6FEEFF39224F(vLocal_1285.x))
		{
			func_264();
			func_265(&(Local_1079[1 /*8*/]), 0, 0, 1);
			func_262(&uLocal_94, joaat("boxville3"));
			func_262(&uLocal_94, joaat("s_m_m_armoured_01"));
			func_262(&uLocal_94, iLocal_84);
			func_262(&uLocal_94, iLocal_85);
			return 1;
		}
		else if (bVar0)
		{
		}
	}
	return 0;
}

void func_262(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			if ((uParam0[iVar0 /*5*/])->f_4 == iParam1)
			{
				if ((uParam0[iVar0 /*5*/])->f_1)
				{
					unk_0x71CA80D41E1338B4(iParam1);
					func_263(uParam0[iVar0 /*5*/]);
					return;
				}
				else
				{
					(uParam0[iVar0 /*5*/])->f_2 = 1;
					uParam0->f_982 = 1;
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_263(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1;
}

void func_264()
{
	vector3 vVar0;
	
	if (unk_0x765F6FEEFF39224F(Local_1295))
	{
		if (!unk_0xD62C4419A41F106A(Local_1295, 0) && !unk_0x765F6FEEFF39224F(iLocal_1299))
		{
			iLocal_1299 = unk_0x7CA67831169E8AA6(iLocal_85, unk_0xFBB1F99A825CAB09(Local_1295, true), true, true, false);
			unk_0xC8DDEBB5D6790797(iLocal_1299, 0.1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
			unk_0x2A51383F28E775CA(iLocal_1299, Local_1295, -1, -1, unk_0x16068053F8800179(Local_1295, unk_0x2D49816199C51B0C(Local_1295, 5)) + Vector(0f, 0f, 0.02f), 0f, 0f, 0f, 0f, 0f, 0f, -1f, 1, 1, 0, 1, 2);
			unk_0x0CDD28A9DFCE2FCE(iLocal_1299, false, 0);
		}
		if (!unk_0x765F6FEEFF39224F(Local_1298[0 /*2*/]))
		{
			if (unk_0xD62C4419A41F106A(Local_1295, 0))
			{
				vVar0 = { unk_0x2CA911E7569D12EA(Local_1295, unk_0x9562E33C057F7589(-2.5f, 2.5f), -5f, 0f) };
				unk_0x8C1596BAD35D957A(vVar0, &(vVar0.f_2), 0, 0);
				Local_1298[0 /*2*/] = unk_0x7CA67831169E8AA6(iLocal_84, vVar0, true, true, false);
			}
			else
			{
				Local_1298[0 /*2*/] = unk_0x7CA67831169E8AA6(iLocal_84, unk_0xFBB1F99A825CAB09(Local_1295, true), true, true, false);
				unk_0xC8DDEBB5D6790797(Local_1298[0 /*2*/], 3.5f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
				unk_0x2F0A6390D863D337(Local_1298[0 /*2*/], Local_1295, -1, -0.2f, -2.675f, 0.05f, -90f, 0f, -90f, 0, 0, 0, 0, 2, 1);
				unk_0xFE8201EFB515D77B(Local_1298[0 /*2*/], true);
			}
		}
		if (!unk_0x765F6FEEFF39224F(Local_1298[1 /*2*/]))
		{
			if (unk_0xD62C4419A41F106A(Local_1295, 0))
			{
				vVar0 = { unk_0x2CA911E7569D12EA(Local_1295, unk_0x9562E33C057F7589(-2.5f, 2.5f), -5f, 0f) };
				unk_0x8C1596BAD35D957A(vVar0, &(vVar0.f_2), 0, 0);
				Local_1298[1 /*2*/] = unk_0x7CA67831169E8AA6(iLocal_84, vVar0, true, true, false);
			}
			else
			{
				Local_1298[1 /*2*/] = unk_0x7CA67831169E8AA6(iLocal_84, unk_0xFBB1F99A825CAB09(Local_1295, true), true, true, false);
				unk_0xC8DDEBB5D6790797(Local_1298[1 /*2*/], 3.5f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
				unk_0x2F0A6390D863D337(Local_1298[1 /*2*/], Local_1295, -1, 0f, -2.675f, 0.05f, -90f, 0f, -90f, 0, 0, 0, 0, 2, 1);
				unk_0xFE8201EFB515D77B(Local_1298[1 /*2*/], true);
			}
		}
		if (!unk_0x765F6FEEFF39224F(Local_1298[2 /*2*/]))
		{
			if (unk_0xD62C4419A41F106A(Local_1295, 0))
			{
				vVar0 = { unk_0x2CA911E7569D12EA(Local_1295, unk_0x9562E33C057F7589(-2.5f, 2.5f), -5f, 0f) };
				unk_0x8C1596BAD35D957A(vVar0, &(vVar0.f_2), 0, 0);
				Local_1298[2 /*2*/] = unk_0x7CA67831169E8AA6(iLocal_84, vVar0, true, true, false);
			}
			else
			{
				Local_1298[2 /*2*/] = unk_0x7CA67831169E8AA6(iLocal_84, unk_0xFBB1F99A825CAB09(Local_1295, true), true, true, false);
				unk_0xC8DDEBB5D6790797(Local_1298[2 /*2*/], 3.5f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
				unk_0x2F0A6390D863D337(Local_1298[2 /*2*/], Local_1295, -1, 0.2f, -2.675f, 0.05f, -90f, 0f, -90f, 0, 0, 0, 0, 2, 1);
				unk_0xFE8201EFB515D77B(Local_1298[2 /*2*/], true);
			}
		}
	}
}

int func_265(var uParam0, int iParam1, int iParam2, int iParam3)
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

void func_266(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_267(int iParam0, int iParam1)
{
	Global_93682.f_22[iParam1] = iParam0;
}

int func_268(var uParam0)
{
	if (func_276(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_269(var uParam0, char* sParam1)
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

int func_270(var uParam0, int iParam1)
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

void func_271(var uParam0)
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

int func_272(var uParam0, vector3 vParam1, float fParam2, int iParam3)
{
	if (func_273(vParam1) || fParam2 <= 0f)
	{
		return 0;
	}
	if (uParam0->f_868)
	{
		if (func_121(uParam0->f_868.f_4, vParam1, 0) && uParam0->f_868.f_10 == fParam2)
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

int func_273(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_274(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1256.936f, 556.8262f, 79.7001f };
			*uParam2 = 134.0936f;
			break;
		
		case 1:
			*uParam1 = { 692.2659f, -1004.185f, 21.9451f };
			*uParam2 = 3.5976f;
			break;
	}
}

bool func_275()
{
	return unk_0x0E4018692D92041D(Global_93682.f_20, 13);
}

int func_276(var uParam0)
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
						func_263(uParam0[iVar1 /*5*/]);
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
						func_263(&(uParam0->f_273[iVar1 /*5*/]));
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
						func_263(&(uParam0->f_374[iVar1 /*5*/]));
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
						func_263(&(uParam0->f_656[iVar1 /*6*/]));
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
						func_263(&(uParam0->f_475[iVar1 /*6*/]));
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
						func_263(&(uParam0->f_202[iVar1 /*7*/]));
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
						func_263(&(uParam0->f_151[iVar1 /*5*/]));
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
						func_263(&(uParam0->f_737[iVar1 /*5*/]));
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
						func_263(&(uParam0->f_763[iVar1 /*5*/]));
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
								func_263(&(uParam0->f_687[iVar1 /*7*/]));
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
							func_263(&(uParam0->f_687[iVar1 /*7*/]));
							uParam0->f_687[iVar1 /*7*/].f_4 = "";
						}
						else
						{
							bVar0 = false;
						}
					}
					else
					{
						func_263(&(uParam0->f_687[iVar1 /*7*/]));
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
						func_263(&(uParam0->f_879[iVar1 /*5*/]));
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
						func_263(&(uParam0->f_930[iVar1 /*5*/]));
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
						func_263(&(uParam0->f_779[iVar1 /*5*/]));
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
					func_263(&(uParam0->f_860));
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
					func_263(&(uParam0->f_864));
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
						func_277(uParam0);
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
				func_263(&(uParam0->f_868));
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
						func_263(&(uParam0->f_956[iVar1 /*5*/]));
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

void func_277(var uParam0)
{
	if (unk_0xE980BAFD70E8A4B3())
	{
		unk_0x4ABB9EF39DA515D7();
		func_263(&(uParam0->f_868));
	}
}

void func_278()
{
	if (bLocal_93 && (func_279() || unk_0xBB5E373390A5F824()))
	{
		func_8(1);
		unk_0x5894DC159447E10A();
	}
}

int func_279()
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

void func_280()
{
	vector3 vVar0;
	var uVar1;
	
	func_287();
	unk_0x9315FCF6CFE2AB41("SECDRIVER", &iLocal_1284);
	unk_0xD2E80177F27FD43F(1, iLocal_1284, -1533126372);
	unk_0xD2E80177F27FD43F(1, iLocal_1284, -183807561);
	unk_0xD2E80177F27FD43F(1, -1533126372, iLocal_1284);
	if (func_6(0) || func_204())
	{
		iLocal_92 = 0;
		if (func_204())
		{
			if (Global_87889)
			{
				iLocal_92++;
			}
		}
		StringCopy(&Global_90574, "jhp2a_alt", 64);
		if (func_204())
		{
			func_274(iLocal_92, &vVar0, &uVar1);
			func_286(vVar0, uVar1, 1, 0);
		}
		bLocal_91 = true;
	}
	else
	{
		while (!func_261(1))
		{
			wait(0);
			func_285(&uLocal_94);
		}
	}
	func_284(&uLocal_94, "JHP2A", 0);
	unk_0x4B06B5746CBEC99F(0.1f);
	unk_0xF4197686EF83F52A(unk_0x95B959F18401C09A(), 1);
	func_282(88);
	func_266(&uLocal_1105, 0, unk_0x33CD235DF1E6A94E(), "MICHAEL", 0, 1);
	func_266(&uLocal_1105, 3, 0, "Lester", 0, 1);
	unk_0x8C4EA5F6857553AE(joaat("boxville3"), true);
	unk_0xE44D3FEE07A9EF2C(joaat("s_m_m_armoured_01"), true);
	if (unk_0xEAF6E82C7BDE5A4C(unk_0x33CD235DF1E6A94E(), joaat("weapon_briefcase"), 0))
	{
		unk_0x681FB12989BD5DEA(unk_0x33CD235DF1E6A94E(), joaat("weapon_briefcase"));
	}
	func_281();
	if (unk_0x786AF4A44E1B5B4B(&Global_90574))
	{
	}
	iLocal_1300 = unk_0x0335D8135051EA56(713.7754f, -996.4443f, 22.3085f, 715.7624f, -991.7067f, 25.6214f, 0, 1, 1, 1);
	while (!unk_0x8A7F864DAB908749(0))
	{
		wait(0);
	}
	Global_68917 = 1;
}

void func_281()
{
	Global_87890 = 1;
}

void func_282(int iParam0)
{
	Global_89567 = 0;
	switch (iParam0)
	{
		case 72:
			func_283(2);
			func_283(4);
			break;
		
		case 73:
			func_283(0);
			func_283(1);
			func_283(7);
			break;
		
		case 92:
			func_283(10);
			func_283(9);
			func_283(13);
			func_283(6);
			break;
		
		case 68:
			func_283(11);
			break;
		
		case 78:
			func_283(14);
			break;
		
		case 79:
			func_283(3);
			break;
		
		default:
			break;
	}
}

void func_283(int iParam0)
{
	unk_0x8950ED5730F62EE8(&Global_89567, iParam0);
}

int func_284(var uParam0, char* sParam1, int iParam2)
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

void func_285(var uParam0)
{
	func_276(uParam0);
}

void func_286(vector3 vParam0, var uParam1, int iParam2, int iParam3)
{
	if (func_204())
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
		func_203(1);
	}
}

void func_287()
{
	func_295(&(Local_1079[0 /*8*/]), 79088, "Van Driver Manager");
	func_295(&(Local_1079[1 /*8*/]), 77735, "Cargo Manager");
}

void func_288(var uParam0)
{
	if (!func_130(uParam0))
	{
		if (unk_0xD62C4419A41F106A(Local_1295, 0))
		{
			func_293(Local_1298[0 /*2*/], 1);
			func_293(Local_1298[1 /*2*/], 1);
			func_293(Local_1298[2 /*2*/], 1);
			iLocal_1314 = 1;
			func_292(uParam0);
		}
		else
		{
			switch (uParam0->f_1)
			{
				case 1:
					func_291(&uLocal_94, "JWL_HEIST_PREP_2A_SHOOTING_LOCK");
					if (unk_0x3C05A6D663EA1B6A("JWL_HEIST_PREP_2A_SHOOTING_LOCK", false, -1))
					{
						if ((unk_0xE3903F59E2F22150() - iLocal_1306) > 150)
						{
							if (unk_0x91BBD269506D61D2(iLocal_1299, unk_0x33CD235DF1E6A94E(), 0))
							{
								if ((((unk_0x3771DEF507BF2843(iLocal_1299, joaat("weapon_molotov"), 0) || unk_0x3771DEF507BF2843(iLocal_1299, joaat("weapon_bzgas"), 0)) || unk_0x3771DEF507BF2843(iLocal_1299, joaat("weapon_knife"), 0)) || unk_0x3771DEF507BF2843(iLocal_1299, joaat("weapon_unarmed"), 0)) || unk_0x3771DEF507BF2843(iLocal_1299, joaat("weapon_hit_by_water_cannon"), 0))
								{
									unk_0x21A4E034EFC28450(iLocal_1299);
								}
								else
								{
									unk_0x0D847D71D9E6142E(iLocal_1299);
									iLocal_1306 = unk_0xE3903F59E2F22150();
									iLocal_1305++;
									if (iLocal_1305 >= 3)
									{
										unk_0xE9739440E5BF08EE(-1, "Lock_Destroyed", iLocal_1299, "JWL_PREP_2A_SOUNDS", false, 0);
									}
									else
									{
										unk_0xE9739440E5BF08EE(-1, "Lock_Damage", iLocal_1299, "JWL_PREP_2A_SOUNDS", false, 0);
									}
								}
							}
						}
						else
						{
							unk_0x0D847D71D9E6142E(iLocal_1299);
						}
					}
					if (((((iLocal_1305 >= 3 || unk_0xD62C4419A41F106A(iLocal_1299, 0)) || unk_0x830B1D24ED3D5F55(Local_1295, 2)) || unk_0x830B1D24ED3D5F55(Local_1295, 3)) || unk_0x0ACBA87310ED2513(Local_1295, 2) > 0f) || unk_0x0ACBA87310ED2513(Local_1295, 3) > 0f)
					{
						if (unk_0x765F6FEEFF39224F(iLocal_1299))
						{
							unk_0xEC26F4BFC9942A0C(&iLocal_1299);
						}
						if (!unk_0x830B1D24ED3D5F55(Local_1295, 2))
						{
							unk_0x4A3BD9D189356B69(Local_1295, 2, 0, 0);
						}
						if (!unk_0x830B1D24ED3D5F55(Local_1295, 3))
						{
							unk_0x4A3BD9D189356B69(Local_1295, 3, 0, 0);
						}
						iLocal_1315 = 0;
						iLocal_1316 = 0;
						func_293(Local_1298[0 /*2*/], 0);
						func_293(Local_1298[1 /*2*/], 0);
						func_293(Local_1298[2 /*2*/], 0);
						func_290(uParam0, 2, 0);
					}
					break;
				
				case 2:
					if (func_289(Local_1295))
					{
						if (unk_0x7EECA16E87982278(unk_0x0ACBA87310ED2513(Local_1295, 2)) > 0.5f && unk_0x7EECA16E87982278(unk_0x0ACBA87310ED2513(Local_1295, 3)) > 0.5f)
						{
							func_290(uParam0, 3, 0);
						}
					}
					break;
				
				case 3:
					if (func_289(Local_1295))
					{
						if (!unk_0x830B1D24ED3D5F55(Local_1295, 2))
						{
							if (unk_0x1816D3DDD9D0FE59(Local_1295, 2))
							{
								unk_0x4A3BD9D189356B69(Local_1295, 2, 1, 0);
								unk_0x7E67DEA07DB29899(Local_1295, 2, 0, 0, 1);
								iLocal_1315 = 1;
							}
						}
						else
						{
							iLocal_1315 = 1;
						}
						if (!unk_0x830B1D24ED3D5F55(Local_1295, 3))
						{
							if (unk_0x1816D3DDD9D0FE59(Local_1295, 3))
							{
								unk_0x4A3BD9D189356B69(Local_1295, 3, 1, 0);
								unk_0x7E67DEA07DB29899(Local_1295, 3, 0, 0, 1);
								iLocal_1316 = 1;
							}
						}
						else
						{
							iLocal_1316 = 1;
						}
						if (iLocal_1315 && iLocal_1316)
						{
							iLocal_1314 = 1;
							func_290(uParam0, 4, 0);
						}
					}
					break;
				}
			}
	}
	if (func_130(uParam0))
	{
	}
}

int func_289(int iParam0)
{
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		if (!unk_0xD62C4419A41F106A(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_290(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 > 0)
	{
		*uParam0 = 2;
		uParam0->f_5 = unk_0xE3903F59E2F22150();
		uParam0->f_6 = iParam2;
	}
	uParam0->f_1 = iParam1;
}

int func_291(var uParam0, char* sParam1)
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

void func_292(var uParam0)
{
	if (*uParam0 != 4)
	{
		*uParam0 = 4;
		uParam0->f_4 = unk_0xE3903F59E2F22150();
		uParam0->f_6 = 0;
		uParam0->f_1 = -1;
	}
}

void func_293(int iParam0, bool bParam1)
{
	vector3 vVar0;
	
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		if (unk_0x9F4718FD61B07058(iParam0))
		{
			unk_0x35F11A916FDFCF32(iParam0, 1, bParam1);
			unk_0x23298AB8A7D0F403(iParam0, true, 0);
			unk_0x7FC263D448DC8CAC(iParam0);
		}
		if (bParam1)
		{
			vVar0 = { func_294(unk_0xFBB1F99A825CAB09(iParam0, true) - unk_0x2CA911E7569D12EA(Local_1295, unk_0x9562E33C057F7589(-0.15f, 0.15f), IntToFloat(-unk_0x9EC3B269A34A2BEE(3, 6)), unk_0x9562E33C057F7589(-0.1f, 0.1f))) };
			unk_0x8CCAABEAD6EE0A13(iParam0, 1, vVar0 * FtoV(unk_0x9562E33C057F7589(0.25f, 0.5f)), 0, 1, 1, 0);
			unk_0x8CCAABEAD6EE0A13(iParam0, 5, IntToFloat(unk_0x9EC3B269A34A2BEE(0, 10)), IntToFloat(unk_0x9EC3B269A34A2BEE(0, 10)), IntToFloat(unk_0x9EC3B269A34A2BEE(0, 10)), 0, 1, 1, 0);
			unk_0x6EB479EB6FF2894D(iParam0, Local_1295, true);
		}
	}
}

Vector3 func_294(vector3 vParam0)
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

int func_295(var uParam0, int iParam1, char* sParam2)
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

void func_296(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	int iVar3;
	float fVar4;
	
	if (!func_130(uParam0))
	{
		if (((!unk_0x765F6FEEFF39224F(vLocal_1285.x) || unk_0xBC2FC12AD0FBF72E(vLocal_1285.x)) || (unk_0x765F6FEEFF39224F(Local_1295) && func_196(Local_1295, vLocal_1285.x, 1) > 200f)) || (!unk_0xF0D230FB550CD6EB(vLocal_1285.x, 0) && func_196(Local_1295, vLocal_1285.x, 1) > 200f))
		{
			if (unk_0x765F6FEEFF39224F(Local_1295) && unk_0x91D5C8283D19AF49(Local_1295, 0))
			{
				unk_0x23F395CF89089EB2(Local_1295, 0);
			}
			unk_0x1F45B4626AC4A4C0(&vLocal_1285);
			func_292(uParam0);
		}
		else
		{
			if ((uParam0->f_1 != 5 && uParam0->f_1 != 3) && ((!unk_0x765F6FEEFF39224F(Local_1295) || !unk_0x91D5C8283D19AF49(Local_1295, 0)) || !unk_0x10930B9CAD4111C2(vLocal_1285.x, Local_1295, 0)))
			{
				iLocal_1307 = 0;
				iLocal_1308 = 0;
				StringCopy(&cLocal_1309, "", 24);
				func_290(uParam0, 5, 0);
			}
			else if ((uParam0->f_1 == 1 || uParam0->f_1 == 2) || uParam0->f_1 == 4)
			{
				if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
				{
					iVar0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
					if (unk_0x4ED4D1D8B2023FD8(iVar0, Local_1295))
					{
						if ((!iLocal_1302 && (unk_0xE3903F59E2F22150() - iLocal_1304) > 500) && fLocal_1303 >= 4f)
						{
							iLocal_1302 = 1;
							iLocal_1301++;
						}
					}
					else if (iLocal_1302)
					{
						iLocal_1304 = unk_0xE3903F59E2F22150();
						iLocal_1302 = 0;
					}
					vVar1 = { func_294(unk_0xFBB1F99A825CAB09(iVar0, true) - unk_0xFBB1F99A825CAB09(Local_1295, true)) };
					vVar2 = { unk_0x43D8A2CCB19FE8A8(Local_1295) - unk_0x43D8A2CCB19FE8A8(iVar0) };
					fLocal_1303 = func_300(vVar2, vVar1);
				}
			}
			switch (uParam0->f_1)
			{
				case 1:
					if ((((((((((((((((((unk_0x91BBD269506D61D2(Local_1295, unk_0x33CD235DF1E6A94E(), 1) || unk_0x91BBD269506D61D2(vLocal_1285.x, unk_0x33CD235DF1E6A94E(), 1)) || unk_0x5A55F54738BBF615(vLocal_1285.x, 122)) || unk_0x5A55F54738BBF615(vLocal_1285.x, 123)) || unk_0x5A55F54738BBF615(vLocal_1285.x, 124)) || unk_0x5A55F54738BBF615(vLocal_1285.x, 29)) || unk_0x5A55F54738BBF615(vLocal_1285.x, 116)) || unk_0x5A55F54738BBF615(vLocal_1285.x, 121)) || unk_0x5A55F54738BBF615(vLocal_1285.x, 22)) || unk_0x5A55F54738BBF615(vLocal_1285.x, 24)) || unk_0x5A55F54738BBF615(vLocal_1285.x, 46)) || unk_0x5A55F54738BBF615(vLocal_1285.x, 61)) || unk_0x5A55F54738BBF615(vLocal_1285.x, 61)) || unk_0x5A55F54738BBF615(vLocal_1285.x, 136)) || unk_0x5A55F54738BBF615(vLocal_1285.x, 86)) || unk_0x5A55F54738BBF615(vLocal_1285.x, 87)) || unk_0x2E9A4AE2A5B4D8E8(vLocal_1285.x)) || unk_0x17260B4EA0652E1C(Local_1295)) || iLocal_1301 > 0)
					{
						iLocal_1307 = 0;
						iLocal_1308 = 0;
						StringCopy(&cLocal_1309, "", 24);
						func_290(uParam0, 4, 0);
					}
					else
					{
						if (unk_0x765F6FEEFF39224F(Local_1295) && unk_0x91D5C8283D19AF49(Local_1295, 0))
						{
							if ((unk_0xA4E357ABBEF712C9(unk_0x33CD235DF1E6A94E()) || fLocal_1303 > 0.5f) && unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), unk_0x2CA911E7569D12EA(Local_1295, 0f, 2f, -0.5f), unk_0x2CA911E7569D12EA(Local_1295, 0f, 10f, 2f), 4.5f, 0, true, 0))
							{
								if (!unk_0xE56DF2D1B4265FA7(Local_1295))
								{
									if (iLocal_1318 == -1)
									{
										iLocal_1318 = unk_0xE3903F59E2F22150();
									}
									else if ((unk_0xE3903F59E2F22150() - iLocal_1318) > 5000)
									{
										unk_0x1B556376AD60A98D(Local_1295, 2000, 1330140418, 0);
									}
								}
								else
								{
									iLocal_1318 = -1;
								}
							}
						}
						if (func_299(Local_1295, -993.7236f, -2418.757f, 12.9447f, 1) < 20f)
						{
							func_269(&uLocal_94, "jhp2a_airport");
						}
						if (!func_298(vLocal_1285.x, -235832601, 1))
						{
							if (unk_0xD4B4F68F3449CBEC(Local_1295, -990.6312f, -2413.214f, 12.69471f, -996.0194f, -2422.608f, 16.05846f, 8.75f, 0, true, 0))
							{
								if (unk_0xB6596C29F3179D0C("jhp2a_airport"))
								{
									iLocal_1307 = 0;
									iLocal_1308 = 0;
									StringCopy(&cLocal_1309, "", 24);
									func_290(uParam0, 2, 0);
								}
							}
							else
							{
								unk_0xF606706197A2C3A5(vLocal_1285.x, Local_1295, &Global_90574, 786475, -1, 24, -1, 12f, 0, 1073741824);
							}
						}
					}
					break;
				
				case 2:
					if ((((((((((((((((((unk_0x91BBD269506D61D2(Local_1295, unk_0x33CD235DF1E6A94E(), 1) || unk_0x91BBD269506D61D2(vLocal_1285.x, unk_0x33CD235DF1E6A94E(), 1)) || unk_0x5A55F54738BBF615(vLocal_1285.x, 122)) || unk_0x5A55F54738BBF615(vLocal_1285.x, 123)) || unk_0x5A55F54738BBF615(vLocal_1285.x, 124)) || unk_0x5A55F54738BBF615(vLocal_1285.x, 29)) || unk_0x5A55F54738BBF615(vLocal_1285.x, 116)) || unk_0x5A55F54738BBF615(vLocal_1285.x, 121)) || unk_0x5A55F54738BBF615(vLocal_1285.x, 22)) || unk_0x5A55F54738BBF615(vLocal_1285.x, 24)) || unk_0x5A55F54738BBF615(vLocal_1285.x, 46)) || unk_0x5A55F54738BBF615(vLocal_1285.x, 61)) || unk_0x5A55F54738BBF615(vLocal_1285.x, 61)) || unk_0x5A55F54738BBF615(vLocal_1285.x, 136)) || unk_0x5A55F54738BBF615(vLocal_1285.x, 86)) || unk_0x5A55F54738BBF615(vLocal_1285.x, 87)) || unk_0x2E9A4AE2A5B4D8E8(vLocal_1285.x)) || unk_0x17260B4EA0652E1C(Local_1295)) || iLocal_1301 > 0)
					{
						iLocal_1307 = 0;
						iLocal_1308 = 0;
						StringCopy(&cLocal_1309, "", 24);
						func_290(uParam0, 5, 0);
					}
					else if (!func_298(vLocal_1285.x, -235832601, 1))
					{
						if (unk_0xD4B4F68F3449CBEC(Local_1295, -1096.139f, -2467.117f, 12.69561f, -1101.641f, -2476.775f, 15.6304f, 7.8125f, 0, true, 0))
						{
							iLocal_1307 = 0;
							iLocal_1308 = 0;
							StringCopy(&cLocal_1309, "", 24);
							func_290(uParam0, 3, 0);
						}
						else
						{
							unk_0xF606706197A2C3A5(vLocal_1285.x, Local_1295, "jhp2a_airport", 786475, -1, 24, -1, 12f, 0, 1073741824);
						}
					}
					break;
				
				case 3:
					if (((((((((((((((((((unk_0x91BBD269506D61D2(Local_1295, unk_0x33CD235DF1E6A94E(), 1) || unk_0x91BBD269506D61D2(vLocal_1285.x, unk_0x33CD235DF1E6A94E(), 1)) || unk_0x5A55F54738BBF615(vLocal_1285.x, 122)) || unk_0x5A55F54738BBF615(vLocal_1285.x, 123)) || unk_0x5A55F54738BBF615(vLocal_1285.x, 124)) || unk_0x5A55F54738BBF615(vLocal_1285.x, 29)) || unk_0x5A55F54738BBF615(vLocal_1285.x, 116)) || unk_0x5A55F54738BBF615(vLocal_1285.x, 121)) || unk_0x5A55F54738BBF615(vLocal_1285.x, 22)) || unk_0x5A55F54738BBF615(vLocal_1285.x, 24)) || unk_0x5A55F54738BBF615(vLocal_1285.x, 46)) || unk_0x5A55F54738BBF615(vLocal_1285.x, 61)) || unk_0x5A55F54738BBF615(vLocal_1285.x, 61)) || unk_0x5A55F54738BBF615(vLocal_1285.x, 136)) || unk_0x5A55F54738BBF615(vLocal_1285.x, 86)) || unk_0x5A55F54738BBF615(vLocal_1285.x, 87)) || unk_0x2E9A4AE2A5B4D8E8(vLocal_1285.x)) || unk_0x17260B4EA0652E1C(Local_1295)) || unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), Local_1295, 1)) || iLocal_1301 > 0)
					{
						iLocal_1307 = 0;
						iLocal_1308 = 0;
						StringCopy(&cLocal_1309, "", 24);
						func_290(uParam0, 5, 0);
					}
					else if (unk_0x10930B9CAD4111C2(vLocal_1285.x, Local_1295, 1))
					{
						if (!func_298(vLocal_1285.x, 451360105, 1))
						{
							unk_0x0FF06FD8DEB3AB01(vLocal_1285.x, Local_1295, 0);
						}
					}
					else
					{
						unk_0xD303E20CB0AE4AD0(Local_1295, 2);
						if (!func_298(vLocal_1285.x, 242628503, 1))
						{
							unk_0x99414FB2D30425C1(&iLocal_1283);
							unk_0x7E268975AF5EA74F(0, -1093.486f, -2471.669f, 13.0716f, 1f, -1, 1048576000, 0, 1193033728);
							unk_0xF6D940C3CF409665(0, "WORLD_HUMAN_SMOKING", -1, 1);
							unk_0xC734F59A13D39AEF(iLocal_1283);
							unk_0x13A2D602CD10CBAC(vLocal_1285.x, iLocal_1283);
							unk_0xA7A57E7757ED035E(&iLocal_1283);
						}
					}
					break;
				
				case 4:
					if (unk_0xEED5625DB4F88798(Local_1295, 0, 1))
					{
						iVar3++;
					}
					if (unk_0xEED5625DB4F88798(Local_1295, 1, 1))
					{
						iVar3++;
					}
					if (unk_0xEED5625DB4F88798(Local_1295, 4, 1))
					{
						iVar3++;
					}
					if (unk_0xEED5625DB4F88798(Local_1295, 5, 1))
					{
						iVar3++;
					}
					if (((((IntToFloat(unk_0xE80842D7B53F8525(Local_1295)) <= 0f || unk_0x787CBB9DB6BA1A49(Local_1295) <= 250f) || unk_0x660BC449336F0502(Local_1295) <= 400f) || unk_0xBC2FC12AD0FBF72E(vLocal_1285.x)) || iVar3 >= 2) || iLocal_1301 > 6)
					{
						if (unk_0x765F6FEEFF39224F(Local_1295) && unk_0x91D5C8283D19AF49(Local_1295, 0))
						{
							unk_0x23F395CF89089EB2(Local_1295, 0);
						}
						iLocal_1307 = 0;
						iLocal_1308 = 0;
						StringCopy(&cLocal_1309, "", 24);
						func_290(uParam0, 5, 0);
					}
					else if (!func_298(vLocal_1285.x, -1273030092, 1))
					{
						unk_0x48B8A6610EAA0C89(vLocal_1285.x, Local_1295, unk_0x33CD235DF1E6A94E(), 8, 90f, 786468, 400f, 10f, 0);
					}
					break;
				
				case 5:
					if (unk_0x765F6FEEFF39224F(Local_1295) && !unk_0xD62C4419A41F106A(Local_1295, 0))
					{
						if (unk_0x10930B9CAD4111C2(vLocal_1285.x, Local_1295, 0))
						{
							if (!func_81(Local_1295))
							{
								if (!func_298(vLocal_1285.x, -2118855366, 1))
								{
									unk_0xED68CDDDE25A144E(vLocal_1285.x);
									unk_0x78893508441AD74F(vLocal_1285.x, Local_1295, 5, -1);
								}
							}
							else if (!func_298(vLocal_1285.x, 451360105, 1))
							{
								unk_0x0FF06FD8DEB3AB01(vLocal_1285.x, Local_1295, 256);
							}
						}
						else if (!func_298(vLocal_1285.x, 780511057, 1))
						{
							unk_0xF0BE7CB40DE62A2F(vLocal_1285.x, true);
							unk_0x277716E9E7CC0692(vLocal_1285.x, unk_0x33CD235DF1E6A94E(), 0, 16);
						}
					}
					if (unk_0x765F6FEEFF39224F(Local_1295) && !unk_0xD62C4419A41F106A(Local_1295, 0))
					{
						unk_0xD49D32559A1A6E45(Local_1295, 2, true);
						unk_0xD49D32559A1A6E45(Local_1295, 3, true);
					}
					break;
				}
		}
		if ((unk_0x765F6FEEFF39224F(vLocal_1285.x) && !unk_0xBC2FC12AD0FBF72E(vLocal_1285.x)) && !unk_0x6536FCD126BB1C53(vLocal_1285.x))
		{
			switch (uParam0->f_1)
			{
				case 4:
					switch (iLocal_1307)
					{
						case 0:
							if (func_36() && !unk_0x07292B2EDB334B14(vLocal_1285.x))
							{
								if (unk_0x2E9A4AE2A5B4D8E8(vLocal_1285.x))
								{
									func_56(vLocal_1285.x, "JACKED_GENERIC", 10);
								}
								else
								{
									func_56(vLocal_1285.x, "GENERIC_SHOCKED_HIGH", 10);
								}
								iLocal_1307++;
							}
							break;
						
						case 1:
							if (!unk_0x10930B9CAD4111C2(vLocal_1285.x, Local_1295, 0) || iLocal_1282 == 3)
							{
								if (!unk_0x10930B9CAD4111C2(vLocal_1285.x, Local_1295, 0))
								{
									iLocal_1307 = 4;
								}
								else
								{
									iLocal_1307++;
								}
							}
							else if (func_36() && !unk_0x07292B2EDB334B14(vLocal_1285.x))
							{
								if (func_297(&uLocal_1105, &cLocal_79, "JS_INIT_M", 8, 0, 0, 0))
								{
									iLocal_1307++;
								}
							}
							break;
						
						case 2:
							if (func_36() && !unk_0x07292B2EDB334B14(vLocal_1285.x))
							{
								if (unk_0x786AF4A44E1B5B4B(&cLocal_1309))
								{
									fVar4 = vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), unk_0xFBB1F99A825CAB09(vLocal_1285.x, true));
									if ((((((iLocal_1302 || unk_0x5A55F54738BBF615(vLocal_1285.x, 122)) || unk_0x5A55F54738BBF615(vLocal_1285.x, 123)) || unk_0x5A55F54738BBF615(vLocal_1285.x, 124)) || fVar4 < 49f) && (unk_0xE3903F59E2F22150() - iLocal_1308) > 5000) && fVar4 < 225f)
									{
										if (unk_0x9EC3B269A34A2BEE(0, 2) == 0)
										{
											StringCopy(&cLocal_1309, "GENERIC_CURSE_HIGH", 24);
										}
										else
										{
											StringCopy(&cLocal_1309, "JS_ATT_M", 24);
										}
									}
								}
								if (!unk_0x786AF4A44E1B5B4B(&cLocal_1309))
								{
									if (unk_0xCE3CFF625BEBAA04(&cLocal_1309, "GENERIC_CURSE_HIGH"))
									{
										func_56(vLocal_1285.x, "GENERIC_CURSE_HIGH", 10);
										iLocal_1307++;
									}
									else
									{
										if (func_297(&uLocal_1105, &cLocal_79, &cLocal_1309, 8, 0, 0, 0))
										{
											iLocal_1307++;
										}
										iLocal_1307++;
									}
								}
							}
							break;
						
						case 3:
							if (!func_37() && !unk_0x07292B2EDB334B14(vLocal_1285.x))
							{
								iLocal_1308 = unk_0xE3903F59E2F22150();
								StringCopy(&cLocal_1309, "", 24);
								iLocal_1307 = (iLocal_1307 - 1);
							}
							break;
					}
					break;
				
				case 5:
					switch (iLocal_1307)
					{
						case 0:
							if (func_36() && !unk_0x07292B2EDB334B14(vLocal_1285.x))
							{
								if (unk_0x786AF4A44E1B5B4B(&cLocal_1309))
								{
									if ((unk_0xE3903F59E2F22150() - iLocal_1308) > 5000 && vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), unk_0xFBB1F99A825CAB09(vLocal_1285.x, true)) < 400f)
									{
										if (unk_0x9EC3B269A34A2BEE(0, 2) == 0)
										{
											StringCopy(&cLocal_1309, "GENERIC_INSULT_HIGH", 24);
										}
										else
										{
											StringCopy(&cLocal_1309, "JS_COMB_M", 24);
										}
									}
								}
								if (!unk_0x786AF4A44E1B5B4B(&cLocal_1309))
								{
									if (unk_0xCE3CFF625BEBAA04(&cLocal_1309, "GENERIC_INSULT_HIGH"))
									{
										func_56(vLocal_1285.x, "GENERIC_INSULT_HIGH", 10);
										iLocal_1307++;
									}
									else if (func_297(&uLocal_1105, &cLocal_79, &cLocal_1309, 8, 0, 0, 0))
									{
										iLocal_1307++;
									}
								}
							}
							break;
						
						case 1:
							if (!func_37() && !unk_0x07292B2EDB334B14(vLocal_1285.x))
							{
								iLocal_1308 = unk_0xE3903F59E2F22150();
								StringCopy(&cLocal_1309, "", 24);
								iLocal_1307 = (iLocal_1307 - 1);
							}
							break;
					}
					break;
				}
			}
	}
	if (func_130(uParam0))
	{
	}
}

bool func_297(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_35(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_26(sParam2, iParam3, 0);
}

int func_298(int iParam0, int iParam1, bool bParam2)
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

float func_299(int iParam0, vector3 vParam1, bool bParam2)
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

float func_300(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

void func_301(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	unk_0x65BA35D6D61F1574("JHP2A_FAIL");
	if (iParam0 == 5)
	{
		func_313();
		func_8(0);
		unk_0x5894DC159447E10A();
	}
	else if (!bLocal_93)
	{
		switch (iParam0)
		{
			case 1:
				StringCopy(&Var0, "JHP2A_FGOTAWAY", 16);
				break;
			
			case 2:
				StringCopy(&Var0, "JHP2A_FGOTAWAY2", 16);
				break;
			
			case 4:
				StringCopy(&Var0, "JHP2A_FCARGO", 16);
				break;
			
			case 3:
				StringCopy(&Var0, "JHP2A_FCARGO2", 16);
				break;
			
			case 0:
			default:
				StringCopy(&Var0, "JHP2A_FF", 16);
				break;
		}
		if (unk_0x786AF4A44E1B5B4B(&cVar1))
		{
			func_311(&Var0);
		}
		else
		{
			func_302(&Var0, &cVar1);
		}
		bLocal_93 = true;
	}
}

void func_302(char* sParam0, char* sParam1)
{
	func_310(sParam0, sParam1);
	func_303(0);
}

void func_303(int iParam0)
{
	int iVar0;
	
	if (Global_106565.f_9079 || func_6(0))
	{
		iVar0 = func_4();
		if (!func_304(iVar0))
		{
			return;
		}
		unk_0x8950ED5730F62EE8(&(Global_84464[iVar0 /*5*/].f_1), 5);
		Global_93718 = iParam0;
	}
}

int func_304(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_309();
	if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
	{
		unk_0xD4285932032EABD0(5000);
	}
	iVar0 = Global_84464[iParam0 /*5*/];
	iVar1 = Global_71859.f_109[iVar0 /*4*/];
	func_308(iVar1, 1);
	unk_0xAF40CD16D7F807F4(unk_0x95B959F18401C09A());
	unk_0x111AE40E9C93AF52(unk_0x95B959F18401C09A());
	func_305(&(Global_106565.f_2357.f_539), iVar1);
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

void func_305(var uParam0, int iParam1)
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
			if (!func_307(Global_106565.f_18527[iVar0], &vVar2, &fVar3))
			{
				Global_106565.f_18527[iVar0] = 318;
				func_306(&(uParam0->f_2296[iVar0]));
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

void func_306(var uParam0)
{
	*uParam0 = -15;
}

int func_307(int iParam0, var uParam1, float fParam2)
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
			return func_307(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_307(8, uParam1, fParam2);
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

void func_308(int iParam0, bool bParam1)
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

void func_309()
{
	Global_93717 = 1;
	if (unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1))
	{
		if (unk_0x786AF4A44E1B5B4B(&Global_71822))
		{
			switch (func_186())
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
			switch (func_186())
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

void func_310(char* sParam0, char* sParam1)
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

void func_311(char* sParam0)
{
	func_312(sParam0);
	func_303(0);
}

void func_312(char* sParam0)
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

void func_313()
{
	int iVar0;
	
	if (unk_0x07AB0925A06BD5AD("buddyDeathResponse"))
	{
		start_new_script("buddyDeathResponse", 1424);
	}
	if (Global_106565.f_9079 || func_6(0))
	{
		if (!func_314())
		{
			iVar0 = func_4();
			if (iVar0 != -1)
			{
				if (!func_304(iVar0))
				{
					return;
				}
				unk_0x8950ED5730F62EE8(&(Global_84464[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_309();
		}
	}
}

int func_314()
{
	if (((Global_93682 == 13 || Global_93682 == 10) || Global_93682 == 11) || Global_93682 == 12)
	{
		return 0;
	}
	return 1;
}

