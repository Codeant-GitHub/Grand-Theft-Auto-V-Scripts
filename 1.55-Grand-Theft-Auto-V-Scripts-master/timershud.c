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
	float fLocal_12 = 0f;
	float fLocal_13 = 0f;
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
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
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
	float fLocal_66 = 0f;
	float fLocal_67 = 0f;
#endregion

void __EntryFunction__()
{
	var uVar0;
	bool bVar2;
	
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
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	fLocal_66 = 0.952f;
	fLocal_67 = 0.949f;
	if (unk_0x4210287E2833D44B(32))
	{
		unk_0x4BFE89D21F9885DC();
	}
	unk_0x5B2BDC877F7E8802();
	while (true)
	{
		if (func_247(&uVar0, 5, 0))
		{
			func_42();
		}
		if (Global_1380638.f_1 == 0)
		{
			bVar2 = true;
		}
		func_41();
		func_40();
		func_11();
		if (bVar2)
		{
			unk_0xB5F867E143F78583("timerbar_lines");
			func_1();
			unk_0x4BFE89D21F9885DC();
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()
{
	int iVar0;
	struct<2> Var1;
	
	func_10();
	func_9();
	func_8();
	func_7();
	func_6();
	func_5();
	func_4();
	func_3();
	func_2();
	Global_1380638 = 0;
	Global_1380638.f_1 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_1380638.f_2[iVar0 /*2*/] = { Var1 };
		Global_1380638.f_23[iVar0 /*2*/] = { Var1 };
		Global_1380638.f_44[iVar0 /*2*/] = { Var1 };
		Global_1380638.f_65[iVar0 /*2*/] = { Var1 };
		Global_1380638.f_86[iVar0 /*2*/] = { Var1 };
		Global_1380638.f_107[iVar0 /*2*/] = { Var1 };
		Global_1380638.f_128[iVar0 /*2*/] = { Var1 };
		Global_1380638.f_149[iVar0 /*2*/] = { Var1 };
		Global_1380638.f_170[iVar0 /*2*/] = { Var1 };
		Global_1380638.f_191[iVar0 /*2*/] = { Var1 };
		Global_1380638.f_212[iVar0 /*2*/] = { Var1 };
		Global_1380638.f_233[iVar0 /*2*/] = { Var1 };
		Global_1380638.f_254[iVar0 /*2*/] = { Var1 };
		Global_1380638.f_275[iVar0 /*2*/] = { Var1 };
		Global_1380638.f_296[iVar0 /*2*/] = { Var1 };
		Global_1380638.f_317[iVar0 /*2*/] = { Var1 };
		Global_1380638.f_338[iVar0 /*2*/] = { Var1 };
		Global_1380638.f_359[iVar0 /*2*/] = { Var1 };
		Global_1380638.f_464[iVar0 /*2*/] = { Var1 };
		Global_1380638.f_485[iVar0 /*2*/] = { Var1 };
		Global_1380638.f_506[iVar0 /*2*/] = { Var1 };
		Global_1380638.f_527[iVar0 /*2*/] = { Var1 };
		Global_1380638.f_548[iVar0 /*2*/] = { Var1 };
		Global_1380638.f_569[iVar0 /*2*/] = { Var1 };
		Global_1380638.f_590[iVar0 /*2*/] = { Var1 };
		Global_1380638.f_611[iVar0 /*2*/] = { Var1 };
		Global_1380638.f_632[iVar0 /*2*/] = { Var1 };
		Global_1380638.f_653[iVar0 /*2*/] = { Var1 };
		Global_1380638.f_674[iVar0 /*2*/] = { Var1 };
		Global_1380638.f_695[iVar0 /*2*/] = { Var1 };
		Global_1380638.f_716[iVar0 /*2*/] = { Var1 };
		Global_1380638.f_737[iVar0 /*2*/] = { Var1 };
		Global_1380638.f_758[iVar0 /*2*/] = { Var1 };
		Global_1380638.f_779[iVar0 /*2*/] = { Var1 };
		Global_1380638.f_863[iVar0 /*2*/] = { Var1 };
		Global_1380638.f_1087[iVar0 /*2*/] = { Var1 };
		Global_1380638.f_895[iVar0 /*2*/] = { Var1 };
		Global_1380638.f_927[iVar0 /*2*/] = { Var1 };
		Global_1380638.f_959[iVar0 /*2*/] = { Var1 };
		Global_1380638.f_991[iVar0 /*2*/] = { Var1 };
		Global_1380638.f_1023[iVar0 /*2*/] = { Var1 };
		Global_1380638.f_1055[iVar0 /*2*/] = { Var1 };
		Global_1380638.f_884[iVar0] = 0;
		Global_1380638.f_916[iVar0] = 0;
		Global_1380638.f_948[iVar0] = 0;
		Global_1380638.f_980[iVar0] = 0;
		Global_1380638.f_1012[iVar0] = 0;
		Global_1380638.f_1044[iVar0] = 0;
		Global_1380638.f_1076[iVar0] = 0;
		Global_1380638.f_1108[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 14)
	{
		Global_1380638.f_6736[iVar0] = 0;
		Global_1380638.f_6751[iVar0] = 0;
		Global_1380638.f_6766[iVar0] = 0;
		Global_1380638.f_6781[iVar0] = 0;
		iVar0++;
	}
	Global_1380638.f_6796 = 0;
	Global_1380638.f_6797 = 0f;
}

void func_2()
{
	struct<227> Var0;
	
	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_172 = 10;
	Var0.f_183 = 10;
	Var0.f_194 = 10;
	Var0.f_205 = 10;
	Var0.f_216 = 10;
	if (Global_2441236)
	{
		unk_0x26E4F443B23A3AEB(&(Global_1380638.f_5018), &Var0, 227);
	}
	else
	{
		Global_1380638.f_5018 = { Var0 };
	}
}

void func_3()
{
	struct<401> Var0;
	
	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_172 = 10;
	Var0.f_183 = 10;
	Var0.f_194 = 10;
	Var0.f_205 = 10;
	Var0.f_216 = 10;
	Var0.f_227 = 10;
	Var0.f_238 = 10;
	Var0.f_249 = 10;
	Var0.f_260 = 10;
	Var0.f_271 = 10;
	Var0.f_282 = 10;
	Var0.f_303 = 10;
	Var0.f_314 = 10;
	Var0.f_325 = 10;
	Var0.f_336 = 10;
	Var0.f_357 = 10;
	Var0.f_368 = 10;
	Var0.f_379 = 10;
	Var0.f_390 = 10;
	if (Global_2441236)
	{
		unk_0x26E4F443B23A3AEB(&(Global_1380638.f_4617), &Var0, 401);
	}
	else
	{
		Global_1380638.f_4617 = { Var0 };
	}
}

void func_4()
{
	struct<618> Var0;
	
	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_172 = 10;
	Var0.f_183 = 10;
	Var0.f_194 = 10;
	Var0.f_205 = 10;
	Var0.f_216 = 10;
	Var0.f_227 = 10;
	Var0.f_238 = 10;
	Var0.f_249 = 10;
	Var0.f_260 = 10;
	Var0.f_271 = 10;
	Var0.f_282 = 10;
	Var0.f_443 = 10;
	Var0.f_454 = 10;
	Var0.f_465 = 10;
	Var0.f_486 = 10;
	Var0.f_497 = 10;
	Var0.f_508 = 10;
	Var0.f_519 = 10;
	Var0.f_530 = 10;
	Var0.f_541 = 10;
	Var0.f_552 = 10;
	Var0.f_563 = 10;
	Var0.f_574 = 10;
	Var0.f_585 = 10;
	Var0.f_596 = 10;
	Var0.f_607 = 10;
	if (Global_2441236)
	{
		unk_0x26E4F443B23A3AEB(&(Global_1380638.f_3999), &Var0, 618);
	}
	else
	{
		Global_1380638.f_3999 = { Var0 };
	}
}

void func_5()
{
	struct<336> Var0;
	
	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_172 = 10;
	Var0.f_183 = 10;
	Var0.f_194 = 10;
	Var0.f_205 = 10;
	Var0.f_216 = 10;
	Var0.f_227 = 10;
	Var0.f_238 = 10;
	Var0.f_259 = 10;
	Var0.f_270 = 10;
	Var0.f_281 = 10;
	Var0.f_292 = 10;
	Var0.f_303 = 10;
	Var0.f_314 = 10;
	Var0.f_325 = 10;
	if (Global_2441236)
	{
		unk_0x26E4F443B23A3AEB(&(Global_1380638.f_3663), &Var0, 336);
	}
	else
	{
		Global_1380638.f_3663 = { Var0 };
	}
}

void func_6()
{
	struct<358> Var0;
	
	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_172 = 10;
	Var0.f_183 = 10;
	Var0.f_194 = 10;
	Var0.f_205 = 10;
	Var0.f_216 = 10;
	Var0.f_227 = 10;
	Var0.f_238 = 10;
	Var0.f_259 = 10;
	Var0.f_270 = 10;
	Var0.f_281 = 10;
	Var0.f_292 = 10;
	Var0.f_303 = 10;
	Var0.f_314 = 10;
	Var0.f_325 = 10;
	Var0.f_336 = 10;
	Var0.f_347 = 10;
	if (Global_2441236)
	{
		unk_0x26E4F443B23A3AEB(&(Global_1380638.f_3305), &Var0, 358);
	}
	else
	{
		Global_1380638.f_3305 = { Var0 };
	}
}

void func_7()
{
	struct<508> Var0;
	
	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_172 = 10;
	Var0.f_183 = 10;
	Var0.f_194 = 10;
	Var0.f_205 = 10;
	Var0.f_216 = 10;
	Var0.f_227 = 10;
	Var0.f_248 = 10;
	Var0.f_259 = 10;
	Var0.f_420 = 10;
	Var0.f_431 = 10;
	Var0.f_442 = 10;
	Var0.f_453 = 10;
	Var0.f_464 = 10;
	Var0.f_475 = 10;
	Var0.f_486 = 10;
	Var0.f_497 = 10;
	if (Global_2441236)
	{
		unk_0x26E4F443B23A3AEB(&(Global_1380638.f_2797), &Var0, 508);
	}
	else
	{
		Global_1380638.f_2797 = { Var0 };
	}
}

void func_8()
{
	struct<719> Var0;
	
	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_22 = 10;
	Var0.f_33 = 10;
	Var0.f_44 = 10;
	Var0.f_55 = 10;
	Var0.f_66 = 10;
	Var0.f_77 = 10;
	Var0.f_88 = 10;
	Var0.f_99 = 10;
	Var0.f_260 = 10;
	Var0.f_271 = 10;
	Var0.f_282 = 10;
	Var0.f_293 = 10;
	Var0.f_304 = 10;
	Var0.f_315 = 10;
	Var0.f_326 = 10;
	Var0.f_357 = 10;
	Var0.f_368 = 10;
	Var0.f_379 = 10;
	Var0.f_390 = 10;
	Var0.f_401 = 10;
	Var0.f_412 = 10;
	Var0.f_423 = 10;
	Var0.f_434 = 10;
	Var0.f_445 = 10;
	Var0.f_456 = 10;
	Var0.f_467 = 10;
	Var0.f_478 = 10;
	Var0.f_489 = 10;
	Var0.f_500 = 10;
	Var0.f_511 = 10;
	Var0.f_522 = 10;
	Var0.f_533 = 10;
	Var0.f_544 = 10;
	Var0.f_555 = 10;
	Var0.f_576 = 10;
	Var0.f_587 = 10;
	Var0.f_598 = 10;
	Var0.f_609 = 10;
	Var0.f_620 = 10;
	Var0.f_631 = 10;
	Var0.f_642 = 10;
	Var0.f_653 = 10;
	Var0.f_664 = 10;
	Var0.f_675 = 10;
	Var0.f_686 = 10;
	Var0.f_697 = 10;
	Var0.f_708 = 10;
	if (Global_2441236)
	{
		unk_0x26E4F443B23A3AEB(&(Global_1380638.f_2078), &Var0, 719);
	}
	else
	{
		Global_1380638.f_2078 = { Var0 };
	}
}

void func_9()
{
	struct<345> Var0;
	
	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_22 = 10;
	Var0.f_183 = 10;
	Var0.f_194 = 10;
	Var0.f_205 = 10;
	Var0.f_216 = 10;
	Var0.f_227 = 10;
	Var0.f_258 = 10;
	Var0.f_269 = 10;
	Var0.f_280 = 10;
	Var0.f_301 = 10;
	Var0.f_312 = 10;
	Var0.f_323 = 10;
	Var0.f_334 = 10;
	if (Global_2441236)
	{
		unk_0x26E4F443B23A3AEB(&(Global_1380638.f_1733), &Var0, 345);
	}
	else
	{
		Global_1380638.f_1733 = { Var0 };
	}
}

void func_10()
{
	struct<598> Var0;
	
	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_22 = 10;
	Var0.f_183 = 10;
	Var0.f_194 = 10;
	Var0.f_205 = 10;
	Var0.f_216 = 10;
	Var0.f_227 = 10;
	Var0.f_258 = 10;
	Var0.f_269 = 10;
	Var0.f_280 = 10;
	Var0.f_301 = 10;
	Var0.f_312 = 10;
	Var0.f_323 = 10;
	Var0.f_334 = 10;
	Var0.f_345 = 10;
	Var0.f_356 = 10;
	Var0.f_367 = 10;
	Var0.f_378 = 10;
	Var0.f_389 = 10;
	Var0.f_400 = 10;
	Var0.f_411 = 10;
	Var0.f_422 = 10;
	Var0.f_433 = 10;
	Var0.f_444 = 10;
	Var0.f_455 = 10;
	Var0.f_466 = 10;
	Var0.f_477 = 10;
	Var0.f_488 = 10;
	Var0.f_499 = 10;
	Var0.f_510 = 10;
	Var0.f_521 = 10;
	Var0.f_532 = 10;
	Var0.f_543 = 10;
	Var0.f_554 = 10;
	Var0.f_565 = 10;
	Var0.f_576 = 10;
	Var0.f_587 = 10;
	if (Global_2441236)
	{
		unk_0x26E4F443B23A3AEB(&(Global_1380638.f_1135), &Var0, 598);
	}
	else
	{
		Global_1380638.f_1135 = { Var0 };
	}
}

void func_11()
{
	int iVar0;
	
	Global_1380638 = 0;
	Global_1380638.f_1120 = 0.725f;
	Global_1380638.f_1119 = func_31();
	Global_1380638.f_1 = 0;
	Global_1380638.f_1121 = 0;
	Global_1380638.f_1122 = 0;
	Global_1380638.f_1123 = 0;
	Global_1380638.f_1124 = 0;
	Global_1380638.f_1125 = 0;
	Global_1380638.f_1126 = 0;
	Global_1380638.f_1127 = 0;
	Global_1380638.f_1128 = 0;
	Global_1380638.f_1129 = 0;
	Global_1380638.f_1130 = 0;
	Global_1380638.f_1131 = 0;
	Global_1380638.f_1132 = 0;
	Global_1380638.f_1133 = 0;
	Global_1380638.f_1134 = 0;
	Global_2465049 = 0;
	Global_2463511 = 0;
	Global_2463512 = 0;
	Global_2465024 = 1;
	Global_2465744 = 0;
	if (func_30(3))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_29(3, iVar0) && func_28(3, iVar0))
			{
				func_27(iVar0);
				func_26(3, iVar0);
			}
			iVar0++;
		}
	}
	if (func_30(6))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_29(6, iVar0) && func_28(6, iVar0))
			{
				func_25(iVar0);
				func_26(6, iVar0);
			}
			iVar0++;
		}
	}
	if (func_30(7))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_29(7, iVar0) && func_28(7, iVar0))
			{
				func_24(iVar0);
				func_26(7, iVar0);
			}
			iVar0++;
		}
	}
	if (func_30(4))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_29(4, iVar0) && func_28(4, iVar0))
			{
				func_23(iVar0);
				func_26(4, iVar0);
			}
			iVar0++;
		}
	}
	if (func_30(5))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_29(5, iVar0) && func_28(5, iVar0))
			{
				func_22(iVar0);
				func_26(5, iVar0);
			}
			iVar0++;
		}
	}
	if (func_30(1))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_29(1, iVar0) && func_28(1, iVar0))
			{
				func_21(iVar0);
				func_26(1, iVar0);
			}
			iVar0++;
		}
	}
	if (func_30(0))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_29(0, iVar0) && func_28(0, iVar0))
			{
				func_20(iVar0);
				func_26(0, iVar0);
			}
			iVar0++;
		}
	}
	if (func_30(2))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_29(2, iVar0) && func_28(2, iVar0) == 0)
			{
				func_19(iVar0);
				func_26(2, iVar0);
			}
			iVar0++;
		}
	}
	if (func_30(8))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_29(8, iVar0) && func_28(8, iVar0) == 0)
			{
				func_18(iVar0);
				func_26(8, iVar0);
			}
			iVar0++;
		}
	}
	if (func_30(9))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_29(9, iVar0) && func_28(9, iVar0) == 0)
			{
				func_17(iVar0);
				func_26(9, iVar0);
			}
			iVar0++;
		}
	}
	if (func_30(10))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_29(10, iVar0) && func_28(10, iVar0) == 0)
			{
				func_15(iVar0);
				func_26(10, iVar0);
			}
			iVar0++;
		}
	}
	if (func_30(11))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_29(11, iVar0) && func_28(11, iVar0) == 0)
			{
				func_14(iVar0);
				func_26(11, iVar0);
			}
			iVar0++;
		}
	}
	if (func_30(12))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_29(12, iVar0) && func_28(12, iVar0) == 0)
			{
				func_13(iVar0);
				func_26(12, iVar0);
			}
			iVar0++;
		}
	}
	if (func_30(13))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_29(13, iVar0) && func_28(13, iVar0) == 0)
			{
				func_12(iVar0);
				func_26(13, iVar0);
			}
			iVar0++;
		}
	}
}

void func_12(int iParam0)
{
	StringCopy(&(Global_1380638.f_6348[iParam0 /*16*/]), "", 64);
	StringCopy(&(Global_1380638.f_6348.f_161[iParam0 /*16*/]), "", 64);
	Global_1380638.f_6348.f_322[iParam0] = 0;
	Global_1380638.f_6348.f_333[iParam0] = 0;
	Global_1380638.f_6348.f_344[iParam0] = 2;
	Global_1380638.f_6348.f_355[iParam0] = 0;
	Global_1380638.f_6348.f_366[iParam0] = 0;
	Global_1380638.f_6348.f_377[iParam0] = 0;
}

void func_13(int iParam0)
{
	Global_1380638.f_5946[iParam0] = 0;
	Global_1380638.f_5946.f_11[iParam0] = 0;
	Global_1380638.f_5946.f_22[iParam0] = 0f;
	StringCopy(&(Global_1380638.f_5946.f_33[iParam0 /*6*/]), "", 24);
	Global_1380638.f_5946.f_94[iParam0] = 0;
	Global_1380638.f_5946.f_105[iParam0] = 0;
	Global_1380638.f_5946.f_116[iParam0] = 0;
	Global_1380638.f_5946.f_127[iParam0] = 0;
	Global_1380638.f_5946.f_138[iParam0] = 0;
	Global_1380638.f_5946.f_149[iParam0] = 0;
	Global_1380638.f_5946.f_160[iParam0] = 0;
	Global_1380638.f_5946.f_171[iParam0] = 0;
	Global_1380638.f_5946.f_182[iParam0] = 0;
	Global_1380638.f_5946.f_193[iParam0] = 0;
	Global_1380638.f_5946.f_204[iParam0] = 0;
	Global_1380638.f_5946.f_215[iParam0] = 0;
	Global_1380638.f_5946.f_226[iParam0] = 0;
	Global_1380638.f_5946.f_237[iParam0] = 2;
	Global_1380638.f_5946.f_248[iParam0] = 0;
	Global_1380638.f_5946.f_259[iParam0] = 0;
	Global_1380638.f_5946.f_270[iParam0] = 0;
	Global_1380638.f_5946.f_281[iParam0] = 0;
	Global_1380638.f_5946.f_292[iParam0] = 0;
	Global_1380638.f_5946.f_303[iParam0] = 0;
	Global_1380638.f_5946.f_314[iParam0] = 0;
	Global_1380638.f_5946.f_325[iParam0] = 0;
	Global_1380638.f_5946.f_336[iParam0] = 0;
	Global_1380638.f_5946.f_347[iParam0] = 0;
	Global_1380638.f_5946.f_358[iParam0] = 0;
	Global_1380638.f_5946.f_369[iParam0] = 0;
	Global_1380638.f_5946.f_380[iParam0] = 0;
	Global_1380638.f_5946.f_391[iParam0] = 0;
}

void func_14(int iParam0)
{
	Global_1380638.f_5781[iParam0] = 0;
	Global_1380638.f_5781.f_11[iParam0] = 0;
	Global_1380638.f_5781.f_22[iParam0] = 0;
	Global_1380638.f_5781.f_33[iParam0] = 0;
	Global_1380638.f_5781.f_44[iParam0] = 0;
	Global_1380638.f_5781.f_55[iParam0] = 0;
	Global_1380638.f_5781.f_66[iParam0] = 0;
	Global_1380638.f_5781.f_77[iParam0] = 0;
	Global_1380638.f_5781.f_88[iParam0] = 0;
	Global_1380638.f_5781.f_99[iParam0] = 2;
	Global_1380638.f_5781.f_110[iParam0] = 0;
	Global_1380638.f_5781.f_121[iParam0] = 0;
	Global_1380638.f_5781.f_132[iParam0] = 0;
	Global_1380638.f_5781.f_143[iParam0] = 0;
	Global_1380638.f_5781.f_154[iParam0] = -1;
}

void func_15(int iParam0)
{
	Global_1380638.f_5278.f_6[iParam0] = 0;
	Global_1380638.f_5278.f_17[iParam0] = 0;
	StringCopy(&(Global_1380638.f_5278.f_28[iParam0 /*16*/]), "", 64);
	Global_1380638.f_5278.f_189[iParam0] = -1;
	Global_1380638.f_5278.f_200[iParam0] = 1;
	Global_1380638.f_5278.f_211[iParam0] = -1;
	Global_1380638.f_5278.f_222[iParam0] = 2;
	Global_1380638.f_5278.f_233[iParam0] = 0;
	Global_1380638.f_5278.f_244[iParam0] = 0;
	func_16(&(Global_1380638.f_5278.f_255[iParam0 /*2*/]));
	Global_1380638.f_5278.f_276[iParam0] = -1;
	Global_1380638.f_5278.f_470[iParam0] = 0;
}

void func_16(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_17(int iParam0)
{
	Global_1380638.f_5245[iParam0] = 0;
	Global_1380638.f_5245.f_11[iParam0] = 1;
	Global_1380638.f_5245.f_22[iParam0] = 2;
}

void func_18(int iParam0)
{
	Global_1380638.f_5018[iParam0] = 0f;
	StringCopy(&(Global_1380638.f_5018.f_11[iParam0 /*16*/]), "", 64);
	Global_1380638.f_5018.f_172[iParam0] = 0;
	Global_1380638.f_5018[iParam0] = 0f;
	Global_1380638.f_5018.f_183[iParam0] = 0;
	Global_1380638.f_5018.f_194[iParam0] = 0;
	Global_1380638.f_5018.f_205[iParam0] = 0;
	Global_1380638.f_5018.f_216[iParam0] = 2;
}

void func_19(int iParam0)
{
	Global_1380638.f_2078[iParam0] = 0;
	Global_1380638.f_2078.f_11[iParam0] = 0;
	Global_1380638.f_2078.f_22[iParam0] = 0;
	Global_1380638.f_2078.f_33[iParam0] = 0;
	Global_1380638.f_2078.f_44[iParam0] = 0;
	Global_1380638.f_2078.f_55[iParam0] = 0;
	Global_1380638.f_2078.f_66[iParam0] = 0;
	Global_1380638.f_2078.f_77[iParam0] = 0;
	Global_1380638.f_2078.f_88[iParam0] = 0;
	StringCopy(&(Global_1380638.f_2078.f_99[iParam0 /*16*/]), "", 64);
	Global_1380638.f_2078.f_260[iParam0] = -1;
	Global_1380638.f_2078.f_271[iParam0] = -1;
	Global_1380638.f_2078.f_282[iParam0] = 18;
	Global_1380638.f_2078.f_293[iParam0] = 6;
	Global_1380638.f_2078.f_304[iParam0] = -1;
	Global_1380638.f_2078.f_315[iParam0] = 2;
	Global_1380638.f_2078.f_326[iParam0 /*3*/] = { 0.5f, 0.5f, 0f };
	Global_1380638.f_2078.f_357[iParam0] = 0;
	Global_1380638.f_2078.f_368[iParam0] = 1;
	Global_1380638.f_2078.f_379[iParam0] = 1;
	Global_1380638.f_2078.f_390[iParam0] = 1;
	Global_1380638.f_2078.f_401[iParam0] = 1;
	Global_1380638.f_2078.f_412[iParam0] = 1;
	Global_1380638.f_2078.f_423[iParam0] = 1;
	Global_1380638.f_2078.f_434[iParam0] = 1;
	Global_1380638.f_2078.f_445[iParam0] = 1;
	Global_1380638.f_2078.f_456[iParam0] = 1;
	Global_1380638.f_2078.f_467[iParam0] = 1;
	Global_1380638.f_2078.f_478[iParam0] = 1;
	Global_1380638.f_2078.f_489[iParam0] = 1;
	Global_1380638.f_2078.f_500[iParam0] = 1;
	Global_1380638.f_2078.f_511[iParam0] = 1;
	Global_1380638.f_2078.f_522[iParam0] = 1;
	Global_1380638.f_2078.f_533[iParam0] = 1;
	func_16(&(Global_1380638.f_2078.f_555[iParam0 /*2*/]));
	Global_1380638.f_2078.f_576[iParam0] = -1;
	Global_1380638.f_2078.f_609[iParam0] = 0;
}

void func_20(int iParam0)
{
	Global_1380638.f_1135[iParam0] = 0;
	Global_1380638.f_1135.f_11[iParam0] = 0;
	StringCopy(&(Global_1380638.f_1135.f_22[iParam0 /*16*/]), "", 64);
	Global_1380638.f_1135.f_183[iParam0] = -1;
	Global_1380638.f_1135.f_194[iParam0] = 1;
	Global_1380638.f_1135.f_205[iParam0] = -1;
	Global_1380638.f_1135.f_216[iParam0] = 2;
	Global_1380638.f_1135.f_227[iParam0 /*3*/] = { 0.5f, 0.5f, 0f };
	Global_1380638.f_1135.f_258[iParam0] = 0;
	Global_1380638.f_1135.f_269[iParam0] = 0;
	func_16(&(Global_1380638.f_1135.f_280[iParam0 /*2*/]));
	Global_1380638.f_1135.f_301[iParam0] = -1;
	Global_1380638.f_1135.f_334[iParam0] = 0;
	Global_1380638.f_1135.f_345[iParam0] = 0;
	Global_1380638.f_1135.f_356[iParam0] = 0;
	Global_1380638.f_1135.f_444[iParam0] = 1;
	Global_1380638.f_1135.f_455[iParam0] = -1;
}

void func_21(int iParam0)
{
	Global_1380638.f_1733[iParam0] = 0;
	Global_1380638.f_1733.f_11[iParam0] = 0;
	StringCopy(&(Global_1380638.f_1733.f_22[iParam0 /*16*/]), "", 64);
	Global_1380638.f_1733.f_183[iParam0] = -1;
	Global_1380638.f_1733.f_194[iParam0] = 1;
	Global_1380638.f_1733.f_205[iParam0] = -1;
	Global_1380638.f_1733.f_216[iParam0] = 2;
	Global_1380638.f_1733.f_227[iParam0 /*3*/] = { 0.5f, 0.5f, 0f };
	Global_1380638.f_1733.f_258[iParam0] = 0;
	Global_2553852[iParam0] = 0;
	Global_2553863[iParam0] = 0;
	Global_2553874[iParam0] = 0;
	Global_2553885[iParam0] = 0;
	Global_2553896[iParam0] = 0;
	Global_2553907[iParam0] = 0;
	Global_2553918[iParam0] = 0;
	Global_2553929[iParam0] = 0;
	Global_2553940[iParam0] = 0;
	Global_2553951[iParam0] = 0;
	Global_2553962[iParam0] = 0;
	Global_2553973[iParam0] = 0;
	Global_2553984[iParam0] = 0;
	Global_2553995[iParam0] = 0;
	Global_2554006[iParam0] = 0;
	Global_2554017[iParam0] = 0;
	func_16(&(Global_1380638.f_1733.f_280[iParam0 /*2*/]));
	Global_1380638.f_1733.f_301[iParam0] = -1;
}

void func_22(int iParam0)
{
	Global_1380638.f_3663[iParam0] = 0;
	StringCopy(&(Global_1380638.f_3663.f_11[iParam0 /*16*/]), "", 64);
	Global_1380638.f_3663.f_172[iParam0] = -1;
	Global_1380638.f_3663.f_183[iParam0] = -1;
	Global_1380638.f_3663.f_194[iParam0] = 1;
	Global_1380638.f_3663.f_205[iParam0] = -1;
	Global_1380638.f_3663.f_216[iParam0] = 2;
	Global_1380638.f_3663.f_227[iParam0] = 0;
	func_16(&(Global_1380638.f_3663.f_238[iParam0 /*2*/]));
	Global_1380638.f_3663.f_259[iParam0] = -1;
	Global_1380638.f_3663.f_314[iParam0] = 0;
	Global_1380638.f_3663.f_325[iParam0] = 0;
}

void func_23(int iParam0)
{
	Global_1380638.f_3305[iParam0] = -1;
	StringCopy(&(Global_1380638.f_3305.f_11[iParam0 /*16*/]), "", 64);
	Global_1380638.f_3305.f_172[iParam0] = -1;
	Global_1380638.f_3305.f_183[iParam0] = -1;
	Global_1380638.f_3305.f_194[iParam0] = 1;
	Global_1380638.f_3305.f_205[iParam0] = -1;
	Global_1380638.f_3305.f_216[iParam0] = 2;
	Global_1380638.f_3305.f_227[iParam0] = 0;
	func_16(&(Global_1380638.f_3305.f_238[iParam0 /*2*/]));
	Global_1380638.f_3305.f_259[iParam0] = -1;
}

void func_24(int iParam0)
{
	Global_1380638.f_4617[iParam0] = 0;
	StringCopy(&(Global_1380638.f_4617.f_11[iParam0 /*16*/]), "", 64);
	Global_1380638.f_4617.f_172[iParam0] = -1;
	Global_1380638.f_4617.f_183[iParam0] = -1;
	Global_1380638.f_4617.f_194[iParam0] = 0;
	Global_1380638.f_4617.f_205[iParam0] = 1;
	Global_1380638.f_4617.f_216[iParam0] = 0;
	Global_1380638.f_4617.f_227[iParam0] = -1;
	Global_1380638.f_4617.f_249[iParam0] = 2;
	Global_1380638.f_4617.f_260[iParam0] = 0;
	func_16(&(Global_1380638.f_4617.f_282[iParam0 /*2*/]));
	Global_1380638.f_4617.f_303[iParam0] = -1;
}

void func_25(int iParam0)
{
	Global_1380638.f_3999[iParam0] = 0;
	StringCopy(&(Global_1380638.f_3999.f_11[iParam0 /*16*/]), "", 64);
	Global_1380638.f_3999.f_172[iParam0] = -1;
	Global_1380638.f_3999.f_183[iParam0] = 1;
	Global_1380638.f_3999.f_194[iParam0] = -1;
	Global_1380638.f_3999.f_260[iParam0] = 2;
	Global_1380638.f_3999.f_271[iParam0] = 0;
	StringCopy(&(Global_1380638.f_3999.f_282[iParam0 /*16*/]), "", 64);
	Global_1380638.f_3999.f_443[iParam0] = 0;
	Global_1380638.f_3999.f_454[iParam0] = -1f;
	func_16(&(Global_1380638.f_3999.f_465[iParam0 /*2*/]));
	Global_1380638.f_3999.f_486[iParam0] = -1;
	Global_1380638.f_3999.f_519[iParam0] = 0;
}

void func_26(int iParam0, int iParam1)
{
	unk_0xC664C0067EEAB8D1(&(Global_1380638.f_6766[iParam0]), iParam1);
}

void func_27(int iParam0)
{
	Global_1380638.f_2797[iParam0] = 0;
	StringCopy(&(Global_1380638.f_2797.f_11[iParam0 /*16*/]), "", 64);
	Global_1380638.f_2797.f_172[iParam0] = -1;
	Global_1380638.f_2797.f_183[iParam0] = 1;
	Global_1380638.f_2797.f_194[iParam0] = -1;
	Global_1380638.f_2797.f_205[iParam0] = 2;
	Global_1380638.f_2797.f_216[iParam0] = 0;
	func_16(&(Global_1380638.f_2797.f_227[iParam0 /*2*/]));
	Global_1380638.f_2797.f_248[iParam0] = -1;
}

bool func_28(int iParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(Global_1380638.f_6736[iParam0], iParam1);
}

bool func_29(int iParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(Global_1380638.f_6766[iParam0], iParam1);
}

int func_30(int iParam0)
{
	if (Global_1380638.f_6736[iParam0] > 0)
	{
		return 1;
	}
	return 0;
}

float func_31()
{
	float fVar0;
	
	fVar0 = (0.925f - 0.002f);
	fVar0 = (fVar0 + (-0.036f * IntToFloat(Global_1380638.f_1121)));
	if (Global_1380638.f_1122 == 1)
	{
		fVar0 = (fVar0 + -0.15f);
	}
	else if (Global_1380638.f_1123 == 1)
	{
		fVar0 = (fVar0 + (-0.048f - 0.753f));
	}
	if (Global_1380638.f_1126 == 1)
	{
		fVar0 = (fVar0 + -0.919f);
	}
	if (Global_1380638.f_1127 == 1)
	{
		fVar0 = (fVar0 + -0.184f);
	}
	if (Global_1380638.f_1128 == 1)
	{
		fVar0 = (fVar0 + -0.522f);
	}
	if (Global_1380638.f_1124 == 1 && Global_1380638.f_1125 == 0)
	{
		switch (func_33())
		{
			case 0:
				fVar0 = (fVar0 + -0.405f);
				break;
			
			case 2:
				fVar0 = (fVar0 + -0.405f);
				break;
			
			case 1:
				fVar0 = (fVar0 + -0.414f);
				break;
			
			default:
				if (!func_32())
				{
					fVar0 = (fVar0 + -0.405f);
				}
				break;
			}
	}
	return fVar0;
}

int func_32()
{
	if (unk_0x636F1F53CC61D2C9(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_33()
{
	func_34();
	return Global_112293.f_2361.f_539.f_4321;
}

void func_34()
{
	int iVar0;
	
	if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()))
	{
		if (func_38(Global_112293.f_2361.f_539.f_4321) != unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()))
		{
			iVar0 = func_37(unk_0x7D2B9E6A64637269());
			if (func_36(iVar0) && (!func_35(14) || Global_111244))
			{
				if (Global_112293.f_2361.f_539.f_4321 != iVar0 && func_36(Global_112293.f_2361.f_539.f_4321))
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

bool func_35(int iParam0)
{
	return Global_42009 == iParam0;
}

bool func_36(int iParam0)
{
	return iParam0 < 3;
}

int func_37(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x419E13582192CFEA(uParam0))
	{
		iVar1 = unk_0x6471F4759775FCA4(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_38(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_38(int iParam0)
{
	if (func_36(iParam0))
	{
		return func_39(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_39(int iParam0)
{
	return Global_1878[iParam0 /*29*/];
}

void func_40()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		Global_1380638.f_6736[iVar0] = 0;
		iVar0++;
	}
}

void func_41()
{
	Global_2464924 = 0;
}

void func_42()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3[12];
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	
	if (unk_0x13F42AB08F9D61A5())
	{
		if (Global_1380638.f_1121 == 0)
		{
			func_246(1);
		}
	}
	func_242();
	if (func_237())
	{
		if ((unk_0x2053F6ACFD4ED4BC() % 100) == 0)
		{
			if (func_232(unk_0x1146A9AE09CE2B14()))
			{
				func_231();
			}
		}
		if (func_230())
		{
			Global_1379108.f_1179 = 1;
		}
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			iVar16 = 0;
			if (func_28(7, iVar0))
			{
				Global_1379108.f_1180[iVar16 /*11*/][iVar0] = Global_1380638.f_3999.f_260[iVar0];
			}
			iVar16 = 1;
			if (func_28(3, iVar0))
			{
				Global_1379108.f_1180[iVar16 /*11*/][iVar0] = Global_1380638.f_2797.f_205[iVar0];
			}
			iVar16 = 2;
			if (func_28(4, iVar0))
			{
				Global_1379108.f_1180[iVar16 /*11*/][iVar0] = Global_1380638.f_3305.f_216[iVar0];
			}
			iVar16 = 3;
			if (func_28(5, iVar0))
			{
				Global_1379108.f_1180[iVar16 /*11*/][iVar0] = Global_1380638.f_3663.f_216[iVar0];
			}
			iVar16 = 4;
			if (func_28(1, iVar0))
			{
				Global_1379108.f_1180[iVar16 /*11*/][iVar0] = Global_1380638.f_1733.f_216[iVar0];
			}
			iVar16 = 5;
			if (func_28(0, iVar0))
			{
				Global_1379108.f_1180[iVar16 /*11*/][iVar0] = Global_1380638.f_1135.f_216[iVar0];
			}
			iVar16 = 6;
			if (func_28(6, iVar0))
			{
				Global_1379108.f_1180[iVar16 /*11*/][iVar0] = Global_1380638.f_3999.f_260[iVar0];
			}
			iVar16 = 7;
			if (func_28(2, iVar0))
			{
				Global_1379108.f_1180[iVar16 /*11*/][iVar0] = Global_1380638.f_2078.f_315[iVar0];
			}
			iVar16 = 8;
			if (func_28(8, iVar0))
			{
				Global_1379108.f_1180[iVar16 /*11*/][iVar0] = Global_1380638.f_5018.f_216[iVar0];
			}
			iVar16 = 9;
			if (func_28(9, iVar0))
			{
				Global_1379108.f_1180[iVar16 /*11*/][iVar0] = Global_1380638.f_5245.f_22[iVar0];
			}
			iVar16 = 10;
			if (func_28(10, iVar0))
			{
				Global_1379108.f_1180[iVar16 /*11*/][iVar0] = Global_1380638.f_5278.f_222[iVar0];
			}
			iVar16 = 11;
			if (func_28(11, iVar0))
			{
				Global_1379108.f_1180[iVar16 /*11*/][iVar0] = Global_1380638.f_5781.f_99[iVar0];
			}
			iVar16 = 12;
			if (func_28(12, iVar0))
			{
				Global_1379108.f_1180[iVar16 /*11*/][iVar0] = Global_1380638.f_5946.f_237[iVar0];
			}
			iVar16 = 13;
			if (func_28(13, iVar0))
			{
				Global_1379108.f_1180[iVar16 /*11*/][iVar0] = Global_1380638.f_6348.f_344[iVar0];
			}
			iVar0++;
		}
		iVar16 = 0;
		if (Global_1379108.f_1179 == 1)
		{
			iVar0 = 0;
			while (iVar0 <= 9)
			{
				iVar16 = 0;
				if (func_28(7, iVar0))
				{
					Global_1379108.f_1180[iVar16 /*11*/][iVar0] = Global_1380638.f_4617.f_249[iVar0];
					if (Global_1379108.f_1180[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1379108.f_1335[iVar16 /*11*/][iVar0] != Global_1380638.f_4617.f_249[iVar0] && ((Global_1379108.f_1335[iVar16 /*11*/][iVar0] == 0 && Global_1380638.f_4617.f_249[iVar0] == 2) || Global_1380638.f_4617.f_249[iVar0] != 2)) && ((Global_1379108.f_1335[iVar16 /*11*/][iVar0] == 0 && Global_1380638.f_4617.f_249[iVar0] == 13) || Global_1380638.f_4617.f_249[iVar0] != 13))
						{
							Global_1379108.f_1335[iVar16 /*11*/][iVar0] = Global_1380638.f_4617.f_249[iVar0];
						}
					}
				}
				iVar16 = 1;
				if (func_28(3, iVar0))
				{
					Global_1379108.f_1180[iVar16 /*11*/][iVar0] = Global_1380638.f_2797.f_205[iVar0];
					if (Global_1379108.f_1180[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1379108.f_1335[iVar16 /*11*/][iVar0] != Global_1380638.f_2797.f_205[iVar0] && ((Global_1379108.f_1335[iVar16 /*11*/][iVar0] == 0 && Global_1380638.f_2797.f_205[iVar0] == 2) || Global_1380638.f_2797.f_205[iVar0] != 2)) && ((Global_1379108.f_1335[iVar16 /*11*/][iVar0] == 0 && Global_1380638.f_2797.f_205[iVar0] == 13) || Global_1380638.f_2797.f_205[iVar0] != 13))
						{
							Global_1379108.f_1335[iVar16 /*11*/][iVar0] = Global_1380638.f_2797.f_205[iVar0];
						}
					}
				}
				iVar16 = 2;
				if (func_28(4, iVar0))
				{
					Global_1379108.f_1180[iVar16 /*11*/][iVar0] = Global_1380638.f_3305.f_216[iVar0];
					if (Global_1379108.f_1180[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1379108.f_1335[iVar16 /*11*/][iVar0] != Global_1380638.f_3305.f_216[iVar0] && ((Global_1379108.f_1335[iVar16 /*11*/][iVar0] == 0 && Global_1380638.f_3305.f_216[iVar0] == 2) || Global_1380638.f_3305.f_216[iVar0] != 2)) && ((Global_1379108.f_1335[iVar16 /*11*/][iVar0] == 0 && Global_1380638.f_3305.f_216[iVar0] == 13) || Global_1380638.f_3305.f_216[iVar0] != 13))
						{
							Global_1379108.f_1335[iVar16 /*11*/][iVar0] = Global_1380638.f_3305.f_216[iVar0];
						}
					}
				}
				iVar16 = 3;
				if (func_28(5, iVar0))
				{
					Global_1379108.f_1180[iVar16 /*11*/][iVar0] = Global_1380638.f_3663.f_216[iVar0];
					if (Global_1379108.f_1180[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1379108.f_1335[iVar16 /*11*/][iVar0] != Global_1380638.f_3663.f_216[iVar0] && ((Global_1379108.f_1335[iVar16 /*11*/][iVar0] == 0 && Global_1380638.f_3663.f_216[iVar0] == 2) || Global_1380638.f_3663.f_216[iVar0] != 2)) && ((Global_1379108.f_1335[iVar16 /*11*/][iVar0] == 0 && Global_1380638.f_3663.f_216[iVar0] == 13) || Global_1380638.f_3663.f_216[iVar0] != 13))
						{
							Global_1379108.f_1335[iVar16 /*11*/][iVar0] = Global_1380638.f_3663.f_216[iVar0];
						}
					}
				}
				iVar16 = 4;
				if (func_28(1, iVar0))
				{
					Global_1379108.f_1180[iVar16 /*11*/][iVar0] = Global_1380638.f_1733.f_216[iVar0];
					if (Global_1379108.f_1180[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1379108.f_1335[iVar16 /*11*/][iVar0] != Global_1380638.f_1733.f_216[iVar0] && ((Global_1379108.f_1335[iVar16 /*11*/][iVar0] == 0 && Global_1380638.f_1733.f_216[iVar0] == 2) || Global_1380638.f_1733.f_216[iVar0] != 2)) && ((Global_1379108.f_1335[iVar16 /*11*/][iVar0] == 0 && Global_1380638.f_1733.f_216[iVar0] == 13) || Global_1380638.f_1733.f_216[iVar0] != 13))
						{
							Global_1379108.f_1335[iVar16 /*11*/][iVar0] = Global_1380638.f_1733.f_216[iVar0];
						}
					}
				}
				iVar16 = 5;
				if (func_28(0, iVar0))
				{
					Global_1379108.f_1180[iVar16 /*11*/][iVar0] = Global_1380638.f_1135.f_216[iVar0];
					if (Global_1379108.f_1180[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1379108.f_1335[iVar16 /*11*/][iVar0] != Global_1380638.f_1135.f_216[iVar0] && ((Global_1379108.f_1335[iVar16 /*11*/][iVar0] == 0 && Global_1380638.f_1135.f_216[iVar0] == 2) || Global_1380638.f_1135.f_216[iVar0] != 2)) && ((Global_1379108.f_1335[iVar16 /*11*/][iVar0] == 0 && Global_1380638.f_1135.f_216[iVar0] == 13) || Global_1380638.f_1135.f_216[iVar0] != 13))
						{
							Global_1379108.f_1335[iVar16 /*11*/][iVar0] = Global_1380638.f_1135.f_216[iVar0];
						}
					}
				}
				iVar16 = 6;
				if (func_28(6, iVar0))
				{
					Global_1379108.f_1180[iVar16 /*11*/][iVar0] = Global_1380638.f_3999.f_260[iVar0];
					if (Global_1379108.f_1180[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1379108.f_1335[iVar16 /*11*/][iVar0] != Global_1380638.f_3999.f_260[iVar0] && ((Global_1379108.f_1335[iVar16 /*11*/][iVar0] == 0 && Global_1380638.f_3999.f_260[iVar0] == 2) || Global_1380638.f_3999.f_260[iVar0] != 2)) && ((Global_1379108.f_1335[iVar16 /*11*/][iVar0] == 0 && Global_1380638.f_3999.f_260[iVar0] == 13) || Global_1380638.f_3999.f_260[iVar0] != 13))
						{
							Global_1379108.f_1335[iVar16 /*11*/][iVar0] = Global_1380638.f_3999.f_260[iVar0];
						}
					}
				}
				iVar16 = 7;
				if (func_28(2, iVar0))
				{
					Global_1379108.f_1180[iVar16 /*11*/][iVar0] = Global_1380638.f_2078.f_315[iVar0];
					if (Global_1379108.f_1180[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1379108.f_1335[iVar16 /*11*/][iVar0] != Global_1380638.f_2078.f_315[iVar0] && ((Global_1379108.f_1335[iVar16 /*11*/][iVar0] == 0 && Global_1380638.f_2078.f_315[iVar0] == 2) || Global_1380638.f_2078.f_315[iVar0] != 2)) && ((Global_1379108.f_1335[iVar16 /*11*/][iVar0] == 0 && Global_1380638.f_2078.f_315[iVar0] == 13) || Global_1380638.f_2078.f_315[iVar0] != 13))
						{
							Global_1379108.f_1335[iVar16 /*11*/][iVar0] = Global_1380638.f_2078.f_315[iVar0];
						}
					}
				}
				iVar16 = 8;
				if (func_28(8, iVar0))
				{
					Global_1379108.f_1180[iVar16 /*11*/][iVar0] = Global_1380638.f_5018.f_216[iVar0];
					if (Global_1379108.f_1180[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1379108.f_1335[iVar16 /*11*/][iVar0] != Global_1380638.f_5018.f_216[iVar0] && ((Global_1379108.f_1335[iVar16 /*11*/][iVar0] == 0 && Global_1380638.f_5018.f_216[iVar0] == 2) || Global_1380638.f_5018.f_216[iVar0] != 2)) && ((Global_1379108.f_1335[iVar16 /*11*/][iVar0] == 0 && Global_1380638.f_5018.f_216[iVar0] == 13) || Global_1380638.f_5018.f_216[iVar0] != 13))
						{
							Global_1379108.f_1335[iVar16 /*11*/][iVar0] = Global_1380638.f_5018.f_216[iVar0];
						}
					}
				}
				iVar16 = 9;
				if (func_28(9, iVar0))
				{
					Global_1379108.f_1180[iVar16 /*11*/][iVar0] = Global_1380638.f_5245.f_22[iVar0];
					if (Global_1379108.f_1180[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1379108.f_1335[iVar16 /*11*/][iVar0] != Global_1380638.f_5245.f_22[iVar0] && ((Global_1379108.f_1335[iVar16 /*11*/][iVar0] == 0 && Global_1380638.f_5245.f_22[iVar0] == 2) || Global_1380638.f_5245.f_22[iVar0] != 2)) && ((Global_1379108.f_1335[iVar16 /*11*/][iVar0] == 0 && Global_1380638.f_5245.f_22[iVar0] == 13) || Global_1380638.f_5245.f_22[iVar0] != 13))
						{
							Global_1379108.f_1335[iVar16 /*11*/][iVar0] = Global_1380638.f_5245.f_22[iVar0];
						}
					}
				}
				iVar16 = 10;
				if (func_28(10, iVar0))
				{
					Global_1379108.f_1180[iVar16 /*11*/][iVar0] = Global_1380638.f_5278.f_222[iVar0];
					if (Global_1379108.f_1180[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1379108.f_1335[iVar16 /*11*/][iVar0] != Global_1380638.f_5278.f_222[iVar0] && ((Global_1379108.f_1335[iVar16 /*11*/][iVar0] == 0 && Global_1380638.f_5278.f_222[iVar0] == 2) || Global_1380638.f_5278.f_222[iVar0] != 2)) && ((Global_1379108.f_1335[iVar16 /*11*/][iVar0] == 0 && Global_1380638.f_5278.f_222[iVar0] == 13) || Global_1380638.f_5278.f_222[iVar0] != 13))
						{
							Global_1379108.f_1335[iVar16 /*11*/][iVar0] = Global_1380638.f_5278.f_222[iVar0];
						}
					}
				}
				iVar16 = 11;
				if (func_28(11, iVar0))
				{
					Global_1379108.f_1180[iVar16 /*11*/][iVar0] = Global_1380638.f_5781.f_99[iVar0];
					if (Global_1379108.f_1180[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1379108.f_1335[iVar16 /*11*/][iVar0] != Global_1380638.f_5781.f_99[iVar0] && ((Global_1379108.f_1335[iVar16 /*11*/][iVar0] == 0 && Global_1380638.f_5781.f_99[iVar0] == 2) || Global_1380638.f_5781.f_99[iVar0] != 2)) && ((Global_1379108.f_1335[iVar16 /*11*/][iVar0] == 0 && Global_1380638.f_5781.f_99[iVar0] == 13) || Global_1380638.f_5781.f_99[iVar0] != 13))
						{
							Global_1379108.f_1335[iVar16 /*11*/][iVar0] = Global_1380638.f_5781.f_99[iVar0];
						}
					}
				}
				iVar16 = 12;
				if (func_28(12, iVar0))
				{
					Global_1379108.f_1180[iVar16 /*11*/][iVar0] = Global_1380638.f_5946.f_237[iVar0];
					if (Global_1379108.f_1180[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1379108.f_1335[iVar16 /*11*/][iVar0] != Global_1380638.f_5946.f_237[iVar0] && ((Global_1379108.f_1335[iVar16 /*11*/][iVar0] == 0 && Global_1380638.f_5946.f_237[iVar0] == 2) || Global_1380638.f_5946.f_237[iVar0] != 2)) && ((Global_1379108.f_1335[iVar16 /*11*/][iVar0] == 0 && Global_1380638.f_5946.f_237[iVar0] == 13) || Global_1380638.f_5946.f_237[iVar0] != 13))
						{
							Global_1379108.f_1335[iVar16 /*11*/][iVar0] = Global_1380638.f_5946.f_237[iVar0];
						}
					}
				}
				iVar16 = 13;
				if (func_28(13, iVar0))
				{
					Global_1379108.f_1180[iVar16 /*11*/][iVar0] = Global_1380638.f_6348.f_344[iVar0];
					if (Global_1379108.f_1180[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1379108.f_1335[iVar16 /*11*/][iVar0] != Global_1380638.f_6348.f_344[iVar0] && ((Global_1379108.f_1335[iVar16 /*11*/][iVar0] == 0 && Global_1380638.f_6348.f_344[iVar0] == 2) || Global_1380638.f_6348.f_344[iVar0] != 2)) && ((Global_1379108.f_1335[iVar16 /*11*/][iVar0] == 0 && Global_1380638.f_6348.f_344[iVar0] == 13) || Global_1380638.f_6348.f_344[iVar0] != 13))
						{
							Global_1379108.f_1335[iVar16 /*11*/][iVar0] = Global_1380638.f_6348.f_344[iVar0];
						}
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 9)
			{
				iVar1 = 0;
				while (iVar1 <= 13)
				{
					if (Global_1379108.f_1180[iVar1 /*11*/][iVar0] != Global_1379108.f_1335[iVar1 /*11*/][iVar0])
					{
						Global_1379108.f_1335[iVar1 /*11*/][iVar0] = 0;
					}
					iVar1++;
				}
				iVar0++;
			}
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				iVar3[iVar2] = 0;
				iVar2++;
			}
			iVar0 = 0;
			while (iVar0 <= 9)
			{
				iVar1 = 0;
				while (iVar1 <= 13)
				{
					if (Global_1379108.f_1180[iVar1 /*11*/][iVar0] == 3)
					{
						iVar3[0] = 1;
					}
					if (Global_1379108.f_1180[iVar1 /*11*/][iVar0] == 4)
					{
						iVar3[1] = 1;
					}
					if (Global_1379108.f_1180[iVar1 /*11*/][iVar0] == 5)
					{
						iVar3[2] = 1;
					}
					if (Global_1379108.f_1180[iVar1 /*11*/][iVar0] == 6)
					{
						iVar3[3] = 1;
					}
					if (Global_1379108.f_1180[iVar1 /*11*/][iVar0] == 7)
					{
						iVar3[4] = 1;
					}
					if (Global_1379108.f_1180[iVar1 /*11*/][iVar0] == 8)
					{
						iVar3[5] = 1;
					}
					if (Global_1379108.f_1180[iVar1 /*11*/][iVar0] == 9)
					{
						iVar3[6] = 1;
					}
					if (Global_1379108.f_1180[iVar1 /*11*/][iVar0] == 10)
					{
						iVar3[7] = 1;
					}
					if (Global_1379108.f_1180[iVar1 /*11*/][iVar0] == 11)
					{
						iVar3[8] = 1;
					}
					if (Global_1379108.f_1180[iVar1 /*11*/][iVar0] == 12)
					{
						iVar3[9] = 1;
					}
					iVar1++;
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 9)
			{
				iVar1 = 0;
				while (iVar1 <= 13)
				{
					if (Global_1379108.f_1180[iVar1 /*11*/][iVar0] == 2)
					{
						iVar2 = 0;
						while (iVar2 <= 11)
						{
							if (iVar3[iVar2] == 0)
							{
								Global_1379108.f_1180[iVar1 /*11*/][iVar0] = iVar2 + 3;
								iVar3[iVar2] = 1;
								Global_1379108.f_1335[iVar1 /*11*/][iVar0] = Global_1379108.f_1180[iVar1 /*11*/][iVar0];
								iVar2 = 12;
							}
							iVar2++;
						}
					}
					iVar1++;
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 9)
			{
				iVar1 = 0;
				while (iVar1 <= 13)
				{
					if (Global_1379108.f_1180[iVar1 /*11*/][iVar0] == 13)
					{
						iVar2 = 11;
						while (iVar2 >= 1)
						{
							if (iVar3[iVar2] == 0 && iVar3[(iVar2 - 1)] == 1)
							{
								Global_1379108.f_1180[iVar1 /*11*/][iVar0] = iVar2 + 3;
								iVar3[iVar2] = 1;
								Global_1379108.f_1335[iVar1 /*11*/][iVar0] = Global_1379108.f_1180[iVar1 /*11*/][iVar0];
								iVar2 = 0;
							}
							else if (iVar2 == 1 && iVar3[0] == 0)
							{
								Global_1379108.f_1180[iVar1 /*11*/][iVar0] = 3;
								iVar3[0] = 1;
								Global_1379108.f_1335[iVar1 /*11*/][iVar0] = Global_1379108.f_1180[iVar1 /*11*/][iVar0];
								iVar2 = 0;
							}
							iVar2 = (iVar2 + -1);
						}
					}
					iVar1++;
				}
				iVar0++;
			}
			Global_1379108.f_1179 = 0;
		}
		if (Global_1380638.f_1126)
		{
			iVar17 = 84;
		}
		else
		{
			iVar17 = 66;
		}
		if (func_237())
		{
			iVar1 = 0;
			while (iVar1 <= 14)
			{
				if (func_229(0))
				{
					if (func_30(func_227(0)))
					{
						iVar0 = 0;
						while (iVar0 <= 9)
						{
							iVar18 = func_226(func_227(0));
							if (func_225(iVar18))
							{
								if (Global_1379108.f_1335[iVar18 /*11*/][iVar0] == iVar1 + 3 || Global_1379108.f_1180[iVar18 /*11*/][iVar0] == 1)
								{
									if (func_221(Global_1379108.f_1180[iVar18 /*11*/][iVar0]))
									{
										func_217(1);
										if (Global_1380638.f_1123 == 0)
										{
											unk_0x53CE6C5893F65093(82, iVar17);
											unk_0x0C456F50E9145299(uLocal_64, uLocal_65, fLocal_66, fLocal_67);
										}
										func_216(func_227(0), iVar0);
										if (Global_1380638.f_1123 == 0)
										{
											unk_0x17552FF90A99ABEA();
										}
										func_217(0);
									}
								}
							}
							iVar0++;
						}
					}
				}
				if (func_229(1))
				{
					if (func_30(func_227(1)))
					{
						iVar0 = 0;
						while (iVar0 <= 9)
						{
							iVar19 = func_226(func_227(1));
							if (func_225(iVar19))
							{
								if (Global_1379108.f_1335[iVar19 /*11*/][iVar0] == iVar1 + 3 || Global_1379108.f_1180[iVar19 /*11*/][iVar0] == 1)
								{
									if (func_221(Global_1379108.f_1180[iVar19 /*11*/][iVar0]))
									{
										func_217(1);
										if (Global_1380638.f_1123 == 0)
										{
											unk_0x53CE6C5893F65093(82, iVar17);
											unk_0x0C456F50E9145299(uLocal_64, uLocal_65, fLocal_66, fLocal_67);
										}
										func_216(func_227(1), iVar0);
										if (Global_1380638.f_1123 == 0)
										{
											unk_0x17552FF90A99ABEA();
										}
										func_217(0);
									}
								}
							}
							iVar0++;
						}
					}
				}
				if (func_30(7) && !func_215(7))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1379108.f_1335[0 /*11*/][iVar0] == iVar1 + 3 || Global_1379108.f_1180[0 /*11*/][iVar0] == 1)
						{
							if (func_221(Global_1379108.f_1180[0 /*11*/][iVar0]))
							{
								func_217(1);
								if (Global_1380638.f_1123 == 0)
								{
									unk_0x53CE6C5893F65093(82, iVar17);
									unk_0x0C456F50E9145299(uLocal_64, uLocal_65, fLocal_66, fLocal_67);
								}
								func_199(iVar0, Global_1380638.f_4617[iVar0], &(Global_1380638.f_4617.f_11[iVar0 /*16*/]), Global_1380638.f_4617.f_172[iVar0], Global_1380638.f_4617.f_194[iVar0], Global_1380638.f_4617.f_216[iVar0], Global_1380638.f_4617.f_205[iVar0], Global_1380638.f_4617.f_183[iVar0], Global_1380638.f_4617.f_227[iVar0], Global_1380638.f_4617.f_260[iVar0], Global_1380638.f_4617.f_314[iVar0], Global_1380638.f_4617.f_325[iVar0], Global_1380638.f_4617.f_357[iVar0], Global_1380638.f_4617.f_238[iVar0], Global_1380638.f_4617.f_271[iVar0], Global_1380638.f_4617.f_368[iVar0], Global_1380638.f_4617.f_379[iVar0], Global_1380638.f_4617.f_390[iVar0]);
								if (Global_1380638.f_1123 == 0)
								{
									unk_0x17552FF90A99ABEA();
								}
								func_217(0);
							}
						}
						iVar0++;
					}
				}
				if (func_30(3) && !func_215(3))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1379108.f_1335[1 /*11*/][iVar0] == iVar1 + 3 || Global_1379108.f_1180[1 /*11*/][iVar0] == 1)
						{
							if (func_221(Global_1379108.f_1180[1 /*11*/][iVar0]))
							{
								func_217(1);
								unk_0x53CE6C5893F65093(82, iVar17);
								unk_0x0C456F50E9145299(uLocal_64, uLocal_65, fLocal_66, fLocal_67);
								func_198(iVar0, Global_1380638.f_2797[iVar0], &(Global_1380638.f_2797.f_11[iVar0 /*16*/]), Global_1380638.f_2797.f_183[iVar0], Global_1380638.f_2797.f_172[iVar0], Global_1380638.f_2797.f_194[iVar0], Global_1380638.f_2797.f_216[iVar0], &(Global_1380638.f_2797.f_259[iVar0 /*16*/]), Global_1380638.f_2797.f_420[iVar0], Global_1380638.f_2797.f_453[iVar0], Global_1380638.f_2797.f_431[iVar0], Global_1380638.f_2797.f_442[iVar0], Global_1380638.f_2797.f_464[iVar0], Global_1380638.f_2797.f_475[iVar0], Global_1380638.f_2797.f_486[iVar0], Global_1380638.f_2797.f_497[iVar0]);
								unk_0x17552FF90A99ABEA();
								func_217(0);
							}
						}
						iVar0++;
					}
				}
				if (func_30(4) && !func_215(4))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1379108.f_1335[2 /*11*/][iVar0] == iVar1 + 3 || Global_1379108.f_1180[2 /*11*/][iVar0] == 1)
						{
							if (func_221(Global_1379108.f_1180[2 /*11*/][iVar0]))
							{
								func_217(1);
								unk_0x53CE6C5893F65093(82, iVar17);
								unk_0x0C456F50E9145299(uLocal_64, uLocal_65, fLocal_66, fLocal_67);
								func_197(iVar0, Global_1380638.f_3305[iVar0], Global_1380638.f_3305.f_172[iVar0], &(Global_1380638.f_3305.f_11[iVar0 /*16*/]), Global_1380638.f_3305.f_194[iVar0], Global_1380638.f_3305.f_183[iVar0], Global_1380638.f_3305.f_205[iVar0], Global_1380638.f_3305.f_227[iVar0], Global_1380638.f_3305.f_270[iVar0], Global_1380638.f_3305.f_281[iVar0], Global_1380638.f_3305.f_292[iVar0], Global_1380638.f_3305.f_303[iVar0], Global_1380638.f_3305.f_314[iVar0], Global_1380638.f_3305.f_325[iVar0], Global_1380638.f_3305.f_336[iVar0], Global_1380638.f_3305.f_347[iVar0]);
								unk_0x17552FF90A99ABEA();
								func_217(0);
							}
						}
						iVar0++;
					}
				}
				if (func_30(5) && !func_215(5))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1379108.f_1335[3 /*11*/][iVar0] == iVar1 + 3 || Global_1379108.f_1180[3 /*11*/][iVar0] == 1)
						{
							if (func_221(Global_1379108.f_1180[3 /*11*/][iVar0]))
							{
								func_217(1);
								unk_0x53CE6C5893F65093(82, iVar17);
								unk_0x0C456F50E9145299(uLocal_64, uLocal_65, fLocal_66, fLocal_67);
								func_196(iVar0, Global_1380638.f_3663[iVar0], Global_1380638.f_3663.f_172[iVar0], &(Global_1380638.f_3663.f_11[iVar0 /*16*/]), Global_1380638.f_3663.f_194[iVar0], Global_1380638.f_3663.f_183[iVar0], Global_1380638.f_3663.f_205[iVar0], Global_1380638.f_3663.f_227[iVar0], Global_1380638.f_3663.f_270[iVar0], Global_1380638.f_3663.f_281[iVar0], Global_1380638.f_3663.f_292[iVar0], Global_1380638.f_3663.f_303[iVar0], Global_1380638.f_3663.f_314[iVar0], Global_1380638.f_3663.f_325[iVar0]);
								unk_0x17552FF90A99ABEA();
								func_217(0);
							}
						}
						iVar0++;
					}
				}
				if (func_30(1) && !func_215(1))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1379108.f_1335[4 /*11*/][iVar0] == iVar1 + 3 || Global_1379108.f_1180[4 /*11*/][iVar0] == 1)
						{
							if (func_221(Global_1379108.f_1180[4 /*11*/][iVar0]))
							{
								func_217(1);
								unk_0x53CE6C5893F65093(82, iVar17);
								unk_0x0C456F50E9145299(uLocal_64, uLocal_65, fLocal_66, fLocal_67);
								func_186(iVar0, Global_1380638.f_1733[iVar0], Global_1380638.f_1733.f_11[iVar0], &(Global_1380638.f_1733.f_22[iVar0 /*16*/]), Global_1380638.f_1733.f_194[iVar0], Global_1380638.f_1733.f_205[iVar0], Global_1380638.f_1733.f_258[iVar0], Global_1380638.f_1733.f_183[iVar0], Global_1380638.f_1733.f_227[iVar0 /*3*/], Global_1380638.f_1733.f_227[iVar0 /*3*/].f_1, Global_1380638.f_1733.f_312[iVar0], Global_1380638.f_1733.f_323[iVar0], Global_1380638.f_1733.f_269[iVar0], Global_2553852[iVar0], Global_2553863[iVar0], Global_2553874[iVar0], Global_2553885[iVar0], Global_2553896[iVar0], Global_2553907[iVar0], Global_2553918[iVar0], Global_2553929[iVar0], Global_1380638.f_1733.f_334[iVar0]);
								unk_0x17552FF90A99ABEA();
								func_217(0);
							}
						}
						iVar0++;
					}
				}
				if (func_30(0) && !func_215(0))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1379108.f_1335[5 /*11*/][iVar0] == iVar1 + 3 || Global_1379108.f_1180[5 /*11*/][iVar0] == 1)
						{
							if (func_221(Global_1379108.f_1180[5 /*11*/][iVar0]))
							{
								func_217(1);
								unk_0x53CE6C5893F65093(82, iVar17);
								unk_0x0C456F50E9145299(uLocal_64, uLocal_65, fLocal_66, fLocal_67);
								func_176(iVar0, Global_1380638.f_1135[iVar0], Global_1380638.f_1135.f_11[iVar0], &(Global_1380638.f_1135.f_22[iVar0 /*16*/]), Global_1380638.f_1135.f_194[iVar0], Global_1380638.f_1135.f_183[iVar0], Global_1380638.f_1135.f_227[iVar0 /*3*/], Global_1380638.f_1135.f_227[iVar0 /*3*/].f_1, Global_1380638.f_1135.f_258[iVar0], Global_1380638.f_1135.f_205[iVar0], Global_1380638.f_1135.f_269[iVar0], Global_1380638.f_1135.f_312[iVar0], Global_1380638.f_1135.f_323[iVar0], Global_1380638.f_1135.f_334[iVar0], Global_1380638.f_1135.f_345[iVar0], Global_1380638.f_1135.f_356[iVar0], Global_1380638.f_1135.f_367[iVar0], Global_1380638.f_1135.f_378[iVar0], Global_1380638.f_1135.f_389[iVar0], Global_1380638.f_1135.f_400[iVar0], Global_1380638.f_1135.f_411[iVar0], Global_1380638.f_1135.f_422[iVar0], Global_1380638.f_1135.f_433[iVar0], Global_1380638.f_1135.f_444[iVar0], Global_1380638.f_1135.f_455[iVar0], Global_1380638.f_1135.f_466[iVar0], Global_1380638.f_1135.f_477[iVar0], Global_1380638.f_1135.f_488[iVar0], Global_1380638.f_1135.f_499[iVar0], Global_1380638.f_1135.f_510[iVar0], Global_1380638.f_1135.f_521[iVar0], Global_1380638.f_1135.f_532[iVar0], Global_1380638.f_1135.f_543[iVar0], Global_1380638.f_1135.f_554[iVar0], Global_1380638.f_1135.f_565[iVar0], Global_1380638.f_1135.f_576[iVar0], Global_1380638.f_1135.f_587[iVar0]);
								unk_0x17552FF90A99ABEA();
								func_217(0);
							}
						}
						iVar0++;
					}
				}
				if (func_30(6) && !func_215(6))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1379108.f_1335[6 /*11*/][iVar0] == iVar1 + 3 || Global_1379108.f_1180[6 /*11*/][iVar0] == 1)
						{
							if (func_221(Global_1379108.f_1180[6 /*11*/][iVar0]))
							{
								func_217(1);
								unk_0x53CE6C5893F65093(82, iVar17);
								unk_0x0C456F50E9145299(uLocal_64, uLocal_65, fLocal_66, fLocal_67);
								func_175(iVar0, Global_1380638.f_3999[iVar0], &(Global_1380638.f_3999.f_11[iVar0 /*16*/]), Global_1380638.f_3999.f_183[iVar0], Global_1380638.f_3999.f_172[iVar0], Global_1380638.f_3999.f_194[iVar0], Global_1380638.f_3999.f_271[iVar0], &(Global_1380638.f_3999.f_282[iVar0 /*16*/]), Global_1380638.f_3999.f_443[iVar0], Global_1380638.f_3999.f_454[iVar0], Global_1380638.f_3999.f_497[iVar0], Global_1380638.f_3999.f_508[iVar0], Global_1380638.f_3999.f_205[iVar0], Global_1380638.f_3999.f_216[iVar0], Global_1380638.f_3999.f_227[iVar0], Global_1380638.f_3999.f_238[iVar0], Global_1380638.f_3999.f_249[iVar0], Global_1380638.f_3999.f_519[iVar0], Global_1380638.f_3999.f_530[iVar0], Global_1380638.f_3999.f_541[iVar0], Global_1380638.f_3999.f_552[iVar0], Global_1380638.f_3999.f_563[iVar0], Global_1380638.f_3999.f_574[iVar0], Global_1380638.f_3999.f_585[iVar0], Global_1380638.f_3999.f_596[iVar0], Global_1380638.f_3999.f_607[iVar0]);
								unk_0x17552FF90A99ABEA();
								func_217(0);
							}
						}
						iVar0++;
					}
				}
				if (func_30(2) && !func_215(2))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1379108.f_1335[7 /*11*/][iVar0] == iVar1 + 3 || Global_1379108.f_1180[7 /*11*/][iVar0] == 1)
						{
							if (func_221(Global_1379108.f_1180[7 /*11*/][iVar0]))
							{
								func_217(1);
								unk_0x53CE6C5893F65093(82, iVar17);
								unk_0x0C456F50E9145299(uLocal_64, uLocal_65, fLocal_66, fLocal_67);
								func_163(iVar0, Global_1380638.f_2078[iVar0], &(Global_1380638.f_2078.f_99[iVar0 /*16*/]), Global_1380638.f_2078.f_282[iVar0], Global_1380638.f_2078.f_293[iVar0], Global_1380638.f_2078.f_260[iVar0], Global_1380638.f_2078.f_11[iVar0], Global_1380638.f_2078.f_22[iVar0], Global_1380638.f_2078.f_33[iVar0], Global_1380638.f_2078.f_44[iVar0], Global_1380638.f_2078.f_55[iVar0], Global_1380638.f_2078.f_66[iVar0], Global_1380638.f_2078.f_77[iVar0], Global_1380638.f_2078.f_88[iVar0], Global_1380638.f_2078.f_271[iVar0], Global_1380638.f_2078.f_304[iVar0], Global_1380638.f_2078.f_357[iVar0], Global_1380638.f_2078.f_326[iVar0 /*3*/], Global_1380638.f_2078.f_326[iVar0 /*3*/].f_1, Global_1380638.f_2078.f_368[iVar0], Global_1380638.f_2078.f_379[iVar0], Global_1380638.f_2078.f_390[iVar0], Global_1380638.f_2078.f_401[iVar0], Global_1380638.f_2078.f_412[iVar0], Global_1380638.f_2078.f_423[iVar0], Global_1380638.f_2078.f_434[iVar0], Global_1380638.f_2078.f_445[iVar0], Global_1380638.f_2078.f_456[iVar0], Global_1380638.f_2078.f_467[iVar0], Global_1380638.f_2078.f_478[iVar0], Global_1380638.f_2078.f_489[iVar0], Global_1380638.f_2078.f_500[iVar0], Global_1380638.f_2078.f_511[iVar0], Global_1380638.f_2078.f_522[iVar0], Global_1380638.f_2078.f_533[iVar0], Global_1380638.f_2078.f_587[iVar0], Global_1380638.f_2078.f_598[iVar0], Global_1380638.f_2078.f_544[iVar0], Global_2553940[iVar0], Global_2553951[iVar0], Global_2553962[iVar0], Global_2553973[iVar0], Global_2553984[iVar0], Global_2553995[iVar0], Global_2554006[iVar0], Global_2554017[iVar0], Global_1380638.f_2078.f_609[iVar0], Global_1380638.f_2078.f_620[iVar0], Global_1380638.f_2078.f_631[iVar0], Global_1380638.f_2078.f_642[iVar0], Global_1380638.f_2078.f_653[iVar0], Global_1380638.f_2078.f_664[iVar0], Global_1380638.f_2078.f_675[iVar0], Global_1380638.f_2078.f_686[iVar0], Global_1380638.f_2078.f_697[iVar0], Global_1380638.f_2078.f_708[iVar0]);
								unk_0x17552FF90A99ABEA();
								func_217(0);
							}
						}
						iVar0++;
					}
				}
				if (func_30(8) && !func_215(8))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1379108.f_1335[8 /*11*/][iVar0] == iVar1 + 3 || Global_1379108.f_1180[8 /*11*/][iVar0] == 1)
						{
							if (func_221(Global_1379108.f_1180[8 /*11*/][iVar0]))
							{
								func_217(1);
								unk_0x53CE6C5893F65093(82, iVar17);
								unk_0x0C456F50E9145299(uLocal_64, uLocal_65, fLocal_66, fLocal_67);
								func_160(iVar0, &(Global_1380638.f_5018.f_11[iVar0 /*16*/]), Global_1380638.f_5018[iVar0], Global_1380638.f_5018.f_172[iVar0], Global_1380638.f_5018.f_183[iVar0], Global_1380638.f_5018.f_194[iVar0], Global_1380638.f_5018.f_205[iVar0]);
								unk_0x17552FF90A99ABEA();
								func_217(0);
							}
						}
						iVar0++;
					}
				}
				if (func_30(9) && !func_215(9))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1379108.f_1335[9 /*11*/][iVar0] == iVar1 + 3 || Global_1379108.f_1180[9 /*11*/][iVar0] == 1)
						{
							if (func_221(Global_1379108.f_1180[9 /*11*/][iVar0]))
							{
								func_217(1);
								unk_0x53CE6C5893F65093(82, iVar17);
								unk_0x0C456F50E9145299(uLocal_64, uLocal_65, fLocal_66, fLocal_67);
								func_154(iVar0, Global_1380638.f_5245[iVar0], Global_1380638.f_5245.f_11[iVar0]);
								unk_0x17552FF90A99ABEA();
								func_217(0);
							}
						}
						iVar0++;
					}
				}
				if (func_30(10) && !func_215(10))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1379108.f_1335[10 /*11*/][iVar0] == iVar1 + 3 || Global_1379108.f_1180[10 /*11*/][iVar0] == 1)
						{
							if (func_221(Global_1379108.f_1180[10 /*11*/][iVar0]))
							{
								func_217(1);
								unk_0x53CE6C5893F65093(82, iVar17);
								unk_0x0C456F50E9145299(uLocal_64, uLocal_65, fLocal_66, fLocal_67);
								func_139(iVar0, Global_1380638.f_5278.f_6[iVar0], Global_1380638.f_5278.f_17[iVar0], &(Global_1380638.f_5278.f_28[iVar0 /*16*/]), Global_1380638.f_5278.f_200[iVar0], Global_1380638.f_5278.f_189[iVar0], Global_1380638.f_5278.f_233[iVar0], Global_1380638.f_5278.f_211[iVar0], Global_1380638.f_5278.f_244[iVar0], Global_1380638.f_5278.f_287[iVar0], Global_1380638.f_5278.f_298[iVar0], &(Global_1380638.f_5278.f_309[iVar0 /*16*/]), &(Global_1380638.f_5278), Global_1380638.f_5278.f_470[iVar0], Global_1380638.f_5278.f_481[iVar0], Global_1380638.f_5278.f_492[iVar0]);
								unk_0x17552FF90A99ABEA();
								func_217(0);
							}
						}
						iVar0++;
					}
				}
				if (func_30(11) && !func_215(11))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1379108.f_1335[11 /*11*/][iVar0] == iVar1 + 3 || Global_1379108.f_1180[11 /*11*/][iVar0] == 1)
						{
							if (func_221(Global_1379108.f_1180[11 /*11*/][iVar0]))
							{
								func_217(1);
								unk_0x53CE6C5893F65093(82, iVar17);
								unk_0x0C456F50E9145299(uLocal_64, uLocal_65, fLocal_66, fLocal_67);
								func_135(iVar0, Global_1380638.f_5781[iVar0], Global_1380638.f_5781.f_11[iVar0], Global_1380638.f_5781.f_22[iVar0], Global_1380638.f_5781.f_33[iVar0], Global_1380638.f_5781.f_44[iVar0], Global_1380638.f_5781.f_55[iVar0], Global_1380638.f_5781.f_66[iVar0], Global_1380638.f_5781.f_77[iVar0], Global_1380638.f_5781.f_88[iVar0], Global_1380638.f_5781.f_110[iVar0], Global_1380638.f_5781.f_121[iVar0], Global_1380638.f_5781.f_132[iVar0], Global_1380638.f_5781.f_143[iVar0], Global_1380638.f_5781.f_154[iVar0]);
								unk_0x17552FF90A99ABEA();
								func_217(0);
							}
						}
						iVar0++;
					}
				}
				if (func_30(12) && !func_215(12))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1379108.f_1335[12 /*11*/][iVar0] == iVar1 + 3 || Global_1379108.f_1180[12 /*11*/][iVar0] == 1)
						{
							if (func_221(Global_1379108.f_1180[12 /*11*/][iVar0]))
							{
								func_217(1);
								unk_0x53CE6C5893F65093(82, iVar17);
								unk_0x0C456F50E9145299(uLocal_64, uLocal_65, fLocal_66, fLocal_67);
								func_125(iVar0, Global_1380638.f_5946[iVar0], Global_1380638.f_5946.f_22[iVar0], &(Global_1380638.f_5946.f_33[iVar0 /*6*/]), Global_1380638.f_5946.f_94[iVar0], Global_1380638.f_5946.f_11[iVar0], Global_1380638.f_5946.f_105[iVar0], Global_1380638.f_5946.f_116[iVar0], Global_1380638.f_5946.f_127[iVar0], Global_1380638.f_5946.f_138[iVar0], Global_1380638.f_5946.f_149[iVar0], Global_1380638.f_5946.f_160[iVar0], Global_1380638.f_5946.f_171[iVar0], Global_1380638.f_5946.f_182[iVar0], Global_1380638.f_5946.f_193[iVar0], Global_1380638.f_5946.f_204[iVar0], Global_1380638.f_5946.f_215[iVar0], Global_1380638.f_5946.f_226[iVar0], Global_1380638.f_5946.f_248[iVar0], Global_1380638.f_5946.f_259[iVar0], Global_1380638.f_5946.f_270[iVar0], Global_1380638.f_5946.f_281[iVar0], Global_1380638.f_5946.f_292[iVar0], Global_1380638.f_5946.f_303[iVar0], Global_1380638.f_5946.f_314[iVar0], Global_1380638.f_5946.f_325[iVar0], Global_1380638.f_5946.f_336[iVar0], Global_1380638.f_5946.f_347[iVar0], Global_1380638.f_5946.f_358[iVar0], Global_1380638.f_5946.f_369[iVar0], Global_1380638.f_5946.f_380[iVar0], Global_1380638.f_5946.f_391[iVar0]);
								unk_0x17552FF90A99ABEA();
								func_217(0);
							}
						}
						iVar0++;
					}
				}
				if (func_30(13) && !func_215(13))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_1379108.f_1335[13 /*11*/][iVar0] == iVar1 + 3 || Global_1379108.f_1180[13 /*11*/][iVar0] == 1)
						{
							if (func_221(Global_1379108.f_1180[13 /*11*/][iVar0]))
							{
								func_217(1);
								unk_0x53CE6C5893F65093(82, iVar17);
								unk_0x0C456F50E9145299(uLocal_64, uLocal_65, fLocal_66, fLocal_67);
								func_44(iVar0, &(Global_1380638.f_6348[iVar0 /*16*/]), &(Global_1380638.f_6348.f_161[iVar0 /*16*/]), Global_1380638.f_6348.f_322[iVar0], Global_1380638.f_6348.f_333[iVar0], Global_1380638.f_6348.f_355[iVar0], Global_1380638.f_6348.f_366[iVar0], Global_1380638.f_6348.f_377[iVar0]);
								unk_0x17552FF90A99ABEA();
								func_217(0);
							}
						}
						iVar0++;
					}
				}
				iVar1++;
			}
		}
		func_43();
	}
}

void func_43()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		Global_1380638.f_6751[iVar0] = Global_1380638.f_6736[iVar0];
		iVar0++;
	}
}

void func_44(int iParam0, char* sParam1, char* sParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7)
{
	var uVar0;
	var uVar11;
	var uVar22;
	var uVar24;
	
	if (func_28(13, iParam0))
	{
		func_45(iParam0, &uVar0, &uVar11, &uVar22, &uVar24, 0, 1, sParam1, iParam5, 0, 0, bParam3, "", 0, 0f, 0, 0, iParam5, 0, 0, 0, 0, 0, sParam2, 0, 0, 255, 0, 0, 0, 0, 1, 0, 0, -1, 1, bParam4, bParam6, iParam7);
	}
}

void func_45(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, bool bParam11, char* sParam12, int iParam13, float fParam14, int iParam15, int iParam16, int iParam17, bool bParam18, int iParam19, bool bParam20, int iParam21, int iParam22, char* sParam23, bool bParam24, int iParam25, int iParam26, bool bParam27, int iParam28, bool bParam29, bool bParam30, int iParam31, bool bParam32, int iParam33, int iParam34, bool bParam35, bool bParam36, bool bParam37, int iParam38)
{
	struct<8> Var0;
	struct<9> Var9;
	struct<9> Var18;
	struct<9> Var27;
	bool bVar36;
	int iVar37;
	struct<9> Var38;
	bool bVar47;
	float fVar48;
	float fVar49;
	struct<8> Var50;
	float fVar59;
	float fVar60;
	float fVar61;
	float fVar62;
	struct<8> Var63;
	struct<8> Var72;
	int iVar81;
	char* sVar82;
	char* sVar83;
	int iVar84;
	char* sVar85;
	char* sVar86;
	int iVar87;
	struct<11> Var88;
	
	Global_1380638++;
	if (func_124())
	{
		func_123(&Var0, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		func_123(&Var9, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		func_123(&Var18, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		func_123(&Var27, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		if (func_122())
		{
			if (bParam24)
			{
				func_121(uParam1, 0);
			}
			else if (bParam11)
			{
				func_120(uParam1, 3);
			}
			else
			{
				func_121(uParam1, 0);
			}
		}
		else if (bParam24)
		{
			func_119(uParam1, 0);
		}
		else if (bParam11)
		{
			func_120(uParam1, 3);
		}
		else
		{
			func_119(uParam1, 0);
		}
		if (Global_2463511 && bParam11)
		{
			if (func_122())
			{
				func_121(uParam1, 0);
			}
			else
			{
				func_119(uParam1, 0);
			}
		}
		if (iParam5 < 1000000)
		{
			if ((unk_0xFA1A73C829B8839F() == 8 && fParam14 >= 100f) && unk_0xDA654EB115F9FF7D("AMCH_KMHN", sParam12))
			{
				func_118(uParam2, 0, 0);
			}
			else if (((unk_0xFA1A73C829B8839F() == 8 || unk_0xFA1A73C829B8839F() == 9) || unk_0xFA1A73C829B8839F() == 12) && ((iParam5 > 999 || iParam19 > 999) || fParam14 > 1000f))
			{
				func_118(uParam2, 0, 0);
			}
			else if (iParam19 > 99)
			{
				func_117(uParam2, 0, 0);
			}
			else
			{
				func_116(uParam2, 0, 0);
			}
		}
		else if (unk_0xFA1A73C829B8839F() == 8 && (unk_0xDA654EB115F9FF7D("HUD_CASH", sParam12) || unk_0xDA654EB115F9FF7D("HUD_CASH_NEG", sParam12)))
		{
			func_118(uParam2, 0, 0);
		}
		else
		{
			func_117(uParam2, 0, 0);
		}
		func_114(uParam1);
		func_113(uParam2);
		uParam1->f_9 = (uParam1->f_9 + (0.03f * (1f - func_111())));
		func_110(6, iParam0);
		if (Global_1380638 == 1)
		{
			func_109(iParam6);
		}
		func_104(uParam2, uParam3, uParam4, iParam6, uParam1);
		if (iParam22 == 1)
		{
			iParam17 = 2;
			iParam8 = 2;
		}
		func_103(uParam2, iParam8);
		if (iParam9 == 0)
		{
			func_102(iParam0);
		}
		if (iParam16 == 0)
		{
			func_101(iParam0);
		}
		unk_0xA08F3C300F9E3468("TimerBars", 0);
		if (unk_0xAD9D75DD073BF477("TimerBars"))
		{
			iVar37 = func_100();
			unk_0x0F33095580A670CE(iVar37);
			if (func_99(iParam9, &(Global_1380638.f_86[iParam0 /*2*/]), &(Global_1380638.f_107[iParam0 /*2*/])))
			{
				bVar36 = true;
			}
			else
			{
				bVar36 = false;
			}
			Var27 = *uParam3;
			Var27.f_1 = uParam3->f_1;
			Var0 = *uParam3;
			Var0.f_1 = (uParam3->f_1 + 0.001f);
			if (iParam22 == 1)
			{
				Var27 = (Var27 + 0.079f);
				Var27.f_1 = (Var27.f_1 + 0.002f);
				Var27.f_2 = (Var27.f_2 + 0.157f);
				Var27.f_3 = (Var27.f_3 + 0.049f);
				Var27.f_4 += 255;
				Var27.f_5 += 255;
				Var27.f_6 += 255;
				Var27.f_7 = 140;
			}
			else if (iParam5 < 1000000)
			{
				Var27 = (Var27 + 0.079f);
				Var27.f_1 = (Var27.f_1 + 0.008f);
				Var27.f_2 = (Var27.f_2 + 0.157f);
				Var27.f_3 = (Var27.f_3 + 0.036f);
				Var27.f_4 += 255;
				Var27.f_5 += 255;
				Var27.f_6 += 255;
				Var27.f_7 = 140;
			}
			else
			{
				Var27 = (Var27 + 0.079f);
				Var27.f_1 = (Var27.f_1 + 0.01f);
				Var27.f_2 = (Var27.f_2 + 0.157f);
				Var27.f_3 = (Var27.f_3 + 0.033f);
				Var27.f_4 += 255;
				Var27.f_5 += 255;
				Var27.f_6 += 255;
				Var27.f_7 = 140;
			}
			if (func_122())
			{
				Var27 = (Var27 + -0.025f);
				Var27.f_2 = (Var27.f_2 + 0.05f);
			}
			Global_1380638.f_6797 = (Global_1380638.f_6797 + Var27.f_3);
			if (iParam16 > 0)
			{
				Var38 = { Var27 };
				if (func_247(&(Global_1380638.f_1087[iParam0 /*2*/]), 2000, 0) == 0)
				{
					if (func_98(Global_1380638.f_1087[iParam0 /*2*/], 1250, 0))
					{
						Global_1380638.f_1108[iParam0] = (Global_1380638.f_1108[iParam0] - 17);
					}
					Var38.f_7 = Global_1380638.f_1108[iParam0];
					if (iParam15 == 2)
					{
						func_97(&Var38, 6);
					}
					else if (iParam15 == 3)
					{
						func_97(&Var38, 18);
					}
					else
					{
						func_97(&Var38, iParam8);
					}
					func_89("TimerBars", "ALL_WHITE_bg", &Var38, 1, 0, iVar37, 0);
				}
			}
			else
			{
				Global_1380638.f_1108[iParam0] = 255;
				func_88(&(Global_1380638.f_1087[iParam0 /*2*/]), 0, 0);
			}
			if (iParam22 == 1)
			{
				func_89("TimerBars", "ALL_WHITE_bg", &Var27, 1, 0, iVar37, 0);
			}
			else
			{
				func_89("TimerBars", "ALL_BLACK_bg", &Var27, 1, 0, iVar37, 0);
			}
			func_82(&Var27, iParam25);
			iVar37 = func_100();
			unk_0x0F33095580A670CE(iVar37);
			func_81(uParam1, iParam17);
			bVar47 = true;
			if (Global_2463511)
			{
				bVar47 = false;
			}
			if (Global_2463512 == 1)
			{
				bVar47 = true;
			}
			func_80(uParam1, 0);
			if (func_122())
			{
				if (bParam11)
				{
					if (unk_0xFA1A73C829B8839F() == 9 || unk_0xFA1A73C829B8839F() == 12)
					{
						uParam3->f_1 = (uParam3->f_1 + -0.012f);
						uParam4->f_1 = (uParam4->f_1 + -0.004f);
					}
					else
					{
						uParam3->f_1 = (uParam3->f_1 + -0.004f);
					}
				}
				else if (func_122())
				{
					if (unk_0xFA1A73C829B8839F() == 9 || unk_0xFA1A73C829B8839F() == 12)
					{
						uParam3->f_1 = (uParam3->f_1 + -0.012f);
						uParam4->f_1 = (uParam4->f_1 + -0.004f);
					}
					else
					{
						uParam3->f_1 = (uParam3->f_1 + -0.008f);
					}
				}
			}
			else if (bParam24)
			{
				uParam3->f_1 = (uParam3->f_1 + 0f);
			}
			else if (bParam11 && Global_2463511 == 0)
			{
				uParam3->f_1 = (uParam3->f_1 + (-0.002f - 0.004f));
			}
			if (iParam22 == 1)
			{
				uParam3->f_1 = (uParam3->f_1 - 0.007f);
				uParam4->f_1 = (uParam4->f_1 - 0.007f);
			}
			if (iParam21 == 2 && unk_0xAB6A270F84A8781E(sParam7))
			{
				sParam7 = "HUD_ROCKET";
			}
			else if (iParam21 == 4)
			{
				sParam7 = "HUD_BOOST";
			}
			else if (iParam21 == 1)
			{
				sParam7 = "HUD_SPIKES";
			}
			uParam1->f_6 = iParam26;
			uParam2->f_6 = iParam26;
			if (bParam27)
			{
				uParam2->f_6 = 0;
			}
			if (bParam37)
			{
				*uParam1 = iParam38;
			}
			if (bParam29)
			{
				if (bVar36)
				{
					func_77(uParam1, uParam3, sParam7, iParam17, iParam8, iParam10, bParam11, bVar47);
				}
			}
			else
			{
				func_77(uParam1, uParam3, sParam7, iParam17, iParam8, iParam10, bParam11, bVar47);
			}
			if (bParam32)
			{
				if (iParam34 > 0)
				{
					if (!func_76(&(Global_1380638.f_842[iParam0 /*2*/])))
					{
						func_75(&(Global_1380638.f_842[iParam0 /*2*/]), 0, 0);
					}
					else if (func_247(&(Global_1380638.f_842[iParam0 /*2*/]), iParam34, 0))
					{
						func_88(&(Global_1380638.f_842[iParam0 /*2*/]), 0, 0);
					}
					func_72(uParam2, iParam8, iParam33, iParam34, Global_1380638.f_842[iParam0 /*2*/]);
				}
			}
			if (iParam22 == 1)
			{
				Var9 = uParam2->f_9;
				Var9.f_1 = (uParam4->f_1 - 0.0175f);
				Var18 = uParam2->f_9;
				Var18.f_1 = (uParam4->f_1 + 0.0175f);
				unk_0xA08F3C300F9E3468("MPArrow", 0);
				if (unk_0xAD9D75DD073BF477("MPArrow"))
				{
					Var9 = (Var9 + 0.0095f);
					Var9 = (Var9 - 0.015f);
					Var9.f_1 = (Var9.f_1 + 0.019f);
					Var9.f_2 = (Var9.f_2 + 0.01f);
					Var9.f_3 = (Var9.f_3 + 0.01f);
					Var9.f_4 = Var9.f_4;
					Var9.f_5 = Var9.f_5;
					Var9.f_6 = Var9.f_6;
					Var9.f_7 = (Var9.f_7 - 50);
					Var9.f_8 = -90f;
					func_89("MPArrow", "MP_ArrowXLarge", &Var9, 1, 0, iVar37, 0);
					Var18 = (Var18 + 0.0095f);
					Var18 = (Var18 - 0.015f);
					Var18.f_1 = (Var18.f_1 + 0.019f);
					Var18.f_2 = (Var18.f_2 + 0.01f);
					Var18.f_3 = (Var18.f_3 + 0.01f);
					Var18.f_4 = Var18.f_4;
					Var18.f_5 = Var18.f_5;
					Var18.f_6 = Var18.f_6;
					Var18.f_7 = (Var18.f_7 - 50);
					Var18.f_8 = 90f;
					func_89("MPArrow", "MP_ArrowXLarge", &Var18, 1, 0, iVar37, 0);
				}
			}
			if (bParam30)
			{
				fVar48 = (func_71() + func_70(iParam6));
				fVar49 = func_69();
				if (func_122())
				{
					Var50 = (fVar49 - 0.061f);
				}
				else
				{
					Var50 = (fVar49 - 0.0365f);
				}
				Var50.f_1 = (fVar48 + 0.057f);
				Var50.f_2 = (Var27.f_2 - 0.004f);
				Var50.f_3 = 0.01f;
				Var50.f_4 = 255;
				Var50.f_5 = 255;
				Var50.f_6 = 255;
				Var50.f_7 = 255;
				func_97(&Var50, iParam31);
				func_89("TimerBars", "DamagebarFill_128", &Var50, 0, 0, iVar37, 0);
			}
			if (bParam18)
			{
				unk_0xA08F3C300F9E3468("CommonMenu", 0);
				if (unk_0xAD9D75DD073BF477("CommonMenu"))
				{
					fVar59 = 0f;
					if (bParam11 == 1)
					{
						unk_0xF942A67633C39BF7("STRING");
						unk_0xA91D83F2CC1345A6(sParam7);
						fVar60 = unk_0xB12E7ADB99F5BEEB(1);
					}
					else
					{
						unk_0xF942A67633C39BF7(sParam7);
						if (iParam10 != -1)
						{
							unk_0x38CD3C04C877C35F(iParam10);
							unk_0x38CD3C04C877C35F(iParam10);
						}
						fVar60 = unk_0xB12E7ADB99F5BEEB(1);
					}
					if (unk_0xFA1A73C829B8839F() == 8 && bParam11 == 0)
					{
						fVar61 = (0.153f - 0.072f);
						fVar62 = -0.457f;
					}
					else if (unk_0xFA1A73C829B8839F() == 10 && bParam11 == 0)
					{
						fVar61 = ((0.153f - 0.01f) - 0.06f);
						fVar62 = -0.457f;
					}
					else if (unk_0xFA1A73C829B8839F() == 9 && bParam11 == 0)
					{
						fVar61 = ((0.153f - 0.012f) - 0.06f);
						fVar62 = -0.457f;
					}
					else if (unk_0xFA1A73C829B8839F() == 12 && bParam11 == 0)
					{
						fVar61 = ((0.153f - 0.012f) - 0.06f);
						fVar62 = -0.457f;
					}
					else
					{
						fVar61 = ((0.153f - 0.037f) - 0.036f);
						fVar62 = (-0.457f + 0.194f);
					}
					fVar61 = (fVar61 + 0.03f);
					if (Global_1380638.f_1130)
					{
						fVar61 = (fVar61 + -0.03f);
					}
					if (unk_0x3640D836D145B814() && !unk_0x928E0D7BE0057D1C())
					{
						fVar61 = (fVar61 + -0.015f);
					}
					if (Global_1380638.f_1131 && Global_1380638.f_1130 == 0)
					{
						fVar61 = (fVar61 + (-0.015f - 0.003f));
					}
					fVar59 = ((fVar62 * fVar60) + fVar61);
					Var0 = (Var0 + fVar59);
					Var0 = (Var0 - 0.015f);
					Var0.f_1 = (Var0.f_1 + 0.008f);
					Var0.f_2 = (Var0.f_2 + 0.022f);
					Var0.f_3 = (Var0.f_3 + 0.04f);
					Var0.f_4 += 194;
					Var0.f_5 += 80;
					Var0.f_6 += 80;
					Var0.f_7 = (Var0.f_7 - 50);
					func_89("CommonMenu", "MP_AlertTriangle", &Var0, 1, 0, iVar37, 0);
				}
			}
			if (bVar36)
			{
				if (iParam21 != 0)
				{
					func_68(uParam2);
					Var63 = ((*uParam4 + 0.145f) + 0.001f);
					if (func_122())
					{
						Var63.f_1 = ((uParam4->f_1 + 0.016f) - 0.006f);
					}
					else
					{
						Var63.f_1 = (uParam4->f_1 + 0.016f);
					}
					Var63.f_2 = (0.016f + 0.003f);
					Var63.f_3 = (0.032f + 0.004f);
					Var63.f_7 = iParam26;
					func_97(&Var63, 1);
					Var72 = ((*uParam4 + 0.145f) + 0.001f);
					if (func_122())
					{
						Var72.f_1 = ((uParam4->f_1 + 0.016f) - 0.006f);
					}
					else
					{
						Var72.f_1 = (uParam4->f_1 + 0.016f);
					}
					Var72.f_2 = (0.016f + 0.003f);
					Var72.f_3 = (0.032f + 0.004f);
					Var72.f_7 = 255;
					func_97(&Var72, 1);
					if (bParam27)
					{
						Var63.f_7 = 0;
					}
					sVar82 = "";
					iVar84 = 1;
					sVar85 = "";
					iVar87 = 1;
					switch (iParam21)
					{
						case 5:
							Var63.f_3 = (Var63.f_3 + -0.009f);
							Var63.f_2 = (Var63.f_2 + -0.002f);
							if (func_122())
							{
								Var63.f_1 = (Var63.f_1 + 0.0055f);
							}
							else
							{
								Var63.f_1 = (Var63.f_1 + 0.0025f);
							}
							sVar85 = "MPRPSymbol";
							sVar86 = "RP";
							break;
						
						case 2:
							sVar85 = "TimerBars";
							sVar86 = "Rockets";
							break;
						
						case 3:
							sVar85 = "MpSpecialRace";
							sVar86 = "HOMING_ROCKET";
							break;
						
						case 1:
							sVar85 = "TimerBars";
							sVar86 = "Spikes";
							break;
						
						case 4:
							sVar85 = "TimerBars";
							sVar86 = "Boost";
							break;
						
						case 6:
							sVar85 = "CrossTheLine";
							sVar86 = "Timer_LargeTick_32";
							iVar87 = 18;
							break;
						
						case 7:
							sVar85 = "CrossTheLine";
							sVar86 = "Timer_LargeCross_32";
							iVar87 = 6;
							break;
						
						case 8:
							sVar85 = "TimerBar_Icons";
							sVar86 = "Pickup_Beast";
							iVar87 = 118;
							break;
						
						case 9:
							sVar85 = "MPSpecialRace";
							sVar86 = "MACHINE_GUN";
							break;
						
						case 10:
							sVar85 = "TimerBar_Icons";
							sVar86 = "Pickup_Random";
							iVar87 = 118;
							break;
						
						case 11:
							sVar85 = "TimerBar_Icons";
							sVar86 = "Pickup_Slow_Time";
							break;
						
						case 12:
							sVar85 = "TimerBar_Icons";
							sVar86 = "Pickup_Swap";
							iVar87 = 118;
							break;
						
						case 13:
							sVar85 = "TimerBar_Icons";
							sVar86 = "Pickup_Testosterone";
							iVar87 = 118;
							break;
						
						case 14:
							sVar85 = "TimerBar_Icons";
							sVar86 = "Pickup_Thermal";
							iVar87 = 118;
							break;
						
						case 15:
							sVar85 = "TimerBar_Icons";
							sVar86 = "Pickup_Weed";
							iVar87 = 118;
							break;
						
						case 16:
							sVar85 = "TimerBar_Icons";
							sVar86 = "Pickup_Hidden";
							iVar87 = 118;
							break;
						
						case 17:
						case 18:
							if (iParam28 != func_67())
							{
								iVar81 = func_60(iParam28);
								if (iVar81 != 0)
								{
									sVar85 = unk_0x05FCBB2D6BF4C399(iVar81);
									sVar86 = unk_0x05FCBB2D6BF4C399(iVar81);
								}
							}
							if (func_122())
							{
								Var63.f_1 = ((uParam4->f_1 + 0.016f) - 0.0005f);
							}
							else
							{
								Var63.f_1 = (uParam4->f_1 + 0.0185f);
							}
							Var63.f_2 = (0.016f + 0.004f);
							Var63.f_3 = (0.032f + 0.002f);
							if (iParam21 == 18)
							{
								if (func_122())
								{
									Var72.f_1 = (uParam4->f_1 + 0.016f);
								}
								else
								{
									Var72.f_1 = (uParam4->f_1 + 0.019f);
								}
								Var72.f_2 = (0.016f + 0.004f);
								Var72.f_3 = (0.032f + 0.002f);
								sVar82 = "timerbar_sr";
								sVar83 = "timer_cross";
								iVar84 = iParam17;
								Var63.f_7 = 127;
							}
							break;
					}
					if (!unk_0xAB6A270F84A8781E(sVar85))
					{
						unk_0xA08F3C300F9E3468(sVar85, 0);
						if (unk_0xAD9D75DD073BF477(sVar85))
						{
							func_97(&Var63, iVar87);
							func_89(sVar85, sVar86, &Var63, 1, 0, 4, 0);
						}
					}
					if (iParam21 == 18)
					{
						if (!unk_0xAB6A270F84A8781E(sVar82))
						{
							unk_0xA08F3C300F9E3468(sVar82, 0);
							if (unk_0xAD9D75DD073BF477(sVar82))
							{
								func_97(&Var72, iVar84);
								func_89(sVar82, sVar83, &Var72, 1, 0, 4, 0);
							}
						}
					}
				}
				func_80(uParam2, 0);
				iVar37 = func_100();
				unk_0x0F33095580A670CE(iVar37);
				if ((iParam21 == 0 || iParam21 == 5) || iParam21 == 9)
				{
					Var88 = { *uParam1 };
					func_113(&Var88);
					if (bParam20)
					{
						func_59(uParam4, uParam2, "???", "", 1, 2);
					}
					else if (iParam21 == 5)
					{
						if (bParam35)
						{
							if (!unk_0xAB6A270F84A8781E(sParam23))
							{
								func_77(&Var88, uParam3, sParam23, iParam17, iParam8, -1, bParam36, bVar47);
							}
						}
						else if (iParam13 == 0)
						{
							func_57(uParam4, uParam2, "HUD_KSMULTI", iParam5, 2);
						}
						else
						{
							func_55(uParam4, uParam2, "HUD_KSMULTI", fParam14, Global_2465024, 2);
						}
					}
					else if (func_54(sParam12))
					{
						if (bParam35)
						{
							if (!unk_0xAB6A270F84A8781E(sParam23))
							{
								func_77(&Var88, uParam3, sParam23, iParam17, iParam8, -1, bParam36, bVar47);
							}
						}
						else if (iParam19 == 0)
						{
							if (iParam13 == 0)
							{
								func_57(uParam4, uParam2, "NUMBER", iParam5, 2);
							}
							else
							{
								func_55(uParam4, uParam2, "NUMBER", fParam14, Global_2465024, 2);
							}
						}
						else
						{
							func_52(uParam4, uParam2, "TIMER_DASHES", iParam5, iParam19, 2, 0);
						}
					}
					else if (bParam35)
					{
						if (!unk_0xAB6A270F84A8781E(sParam23))
						{
							func_77(&Var88, uParam3, sParam23, iParam17, iParam8, -1, bParam36, bVar47);
						}
					}
					else if (unk_0xDA654EB115F9FF7D("HUD_CASH", sParam12) || unk_0xDA654EB115F9FF7D("HUD_CASH_S", sParam12))
					{
						sParam12 = "HUD_CASH_S";
						*uParam2 = 5;
						func_80(uParam2, 0);
						func_47(uParam4, uParam2, sParam12, iParam5, 2);
					}
					else if (unk_0xDA654EB115F9FF7D("HUD_CASH_NEG", sParam12) || unk_0xDA654EB115F9FF7D("HUD_CASH_NEG_S", sParam12))
					{
						*uParam2 = 5;
						func_80(uParam2, 0);
						sParam12 = "HUD_CASH_NEG_S";
						func_47(uParam4, uParam2, sParam12, iParam5, 2);
					}
					else if (iParam13 == 0)
					{
						func_57(uParam4, uParam2, sParam12, iParam5, 2);
					}
					else
					{
						func_55(uParam4, uParam2, sParam12, fParam14, Global_2465024, 2);
					}
				}
			}
			func_46();
		}
	}
}

void func_46()
{
	unk_0x0F33095580A670CE(4);
}

void func_47(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4)
{
	char* sVar0;
	
	sVar0 = sParam2;
	if (!func_54(sVar0))
	{
		if (func_50())
		{
			func_80(uParam1, 0);
			unk_0xD7BF3EFD7B2022EC(iParam4);
			unk_0xE5A80C83FA218963(sVar0);
			unk_0x38CD3C04C877C35F(iParam3);
			unk_0xDA0C49A6D01B065C(iParam3, 1);
			unk_0xBC68FBDA73BBB4A6(func_49(*uParam0), func_48(uParam0->f_1), 0);
		}
	}
}

float func_48(float fParam0)
{
	return (fParam0 + fLocal_13);
}

float func_49(float fParam0)
{
	return (fParam0 + fLocal_12);
}

int func_50()
{
	if (func_51())
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

bool func_51()
{
	return Global_1312458;
}

void func_52(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	char* sVar0;
	
	sVar0 = sParam2;
	if (!func_54(sVar0))
	{
		if (func_50())
		{
			func_80(uParam1, 0);
			unk_0x7160B751D113C8C6(iParam6);
			unk_0xD7BF3EFD7B2022EC(iParam5);
			func_53(func_49(*uParam0), func_48(uParam0->f_1), sVar0, iParam3, iParam4);
		}
	}
}

void func_53(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0xE5A80C83FA218963(sParam2);
	unk_0x38CD3C04C877C35F(iParam3);
	unk_0x38CD3C04C877C35F(iParam4);
	unk_0xBC68FBDA73BBB4A6(uParam0, uParam1, 0);
}

int func_54(char* sParam0)
{
	if (unk_0x4030103C8B148AFC(sParam0))
	{
		return 1;
	}
	else if (unk_0xDA654EB115F9FF7D(sParam0, "") || unk_0xDA654EB115F9FF7D(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

void func_55(var uParam0, var uParam1, char* sParam2, float fParam3, var uParam4, int iParam5)
{
	if (!func_54(sParam2))
	{
		if (func_50())
		{
			func_80(uParam1, 0);
			unk_0xD7BF3EFD7B2022EC(iParam5);
			func_56(func_49(*uParam0), func_48(uParam0->f_1), sParam2, fParam3, uParam4);
		}
	}
}

void func_56(var uParam0, var uParam1, char* sParam2, var uParam3, var uParam4)
{
	unk_0xE5A80C83FA218963(sParam2);
	unk_0x21300A5159EC89B1(uParam3, uParam4);
	unk_0xBC68FBDA73BBB4A6(uParam0, uParam1, 0);
}

void func_57(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4)
{
	char* sVar0;
	
	sVar0 = sParam2;
	if (!func_54(sVar0))
	{
		if (func_50())
		{
			func_80(uParam1, 0);
			unk_0xD7BF3EFD7B2022EC(iParam4);
			func_58(func_49(*uParam0), func_48(uParam0->f_1), sVar0, iParam3, 0);
		}
	}
}

void func_58(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0xE5A80C83FA218963(sParam2);
	unk_0x38CD3C04C877C35F(uParam3);
	unk_0xBC68FBDA73BBB4A6(uParam0, uParam1, iParam4);
}

void func_59(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	char* sVar0;
	
	if (!func_54(sParam2))
	{
		if (func_50())
		{
			func_80(uParam1, 0);
			unk_0xD7BF3EFD7B2022EC(iParam5);
			if (func_54(sParam3))
			{
				sVar0 = "STRING";
			}
			else
			{
				sVar0 = sParam3;
			}
			unk_0xE5A80C83FA218963(sVar0);
			unk_0xB2A9BDF905DC5A51(iParam4);
			unk_0xA91D83F2CC1345A6(sParam2);
			unk_0xBC68FBDA73BBB4A6(func_49(*uParam0), func_48(uParam0->f_1), 0);
		}
	}
}

int func_60(int iParam0)
{
	int iVar0;
	
	iVar0 = func_64(iParam0);
	if (iVar0 == -1)
	{
		func_61(iParam0, 1);
		return 0;
	}
	Global_1391551[iVar0 /*5*/].f_4 = 1;
	return Global_1391551[iVar0 /*5*/].f_2;
}

void func_61(int iParam0, bool bParam1)
{
	if (!func_63(iParam0, 0, 1))
	{
		return;
	}
	if (func_64(iParam0) != -1)
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
	if (func_62(iParam0))
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

int func_62(int iParam0)
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

int func_63(int iParam0, bool bParam1, bool bParam2)
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

int func_64(int iParam0)
{
	int iVar0;
	
	if (!func_63(iParam0, 0, 1))
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
			func_65(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_65(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1391712)
	{
		return;
	}
	if (unk_0xEC92E04062037949(Global_1391551[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1391551[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0x05FCBB2D6BF4C399(Global_1391551[iParam0 /*5*/].f_2), 64);
			unk_0x514A976A99458342(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x2311DD7B841CBAB0(Global_1391551[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1391712)
	{
		Global_1391551[iVar32 /*5*/] = { Global_1391551[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_66(&(Global_1391551[iVar32 /*5*/]));
	Global_1391712 = (Global_1391712 - 1);
}

void func_66(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_67();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x02BFF15CAA701972())
	{
		uParam0->f_3 = unk_0x551F46B3C7DFB654();
	}
}

int func_67()
{
	return -1;
}

void func_68(var uParam0)
{
	uParam0->f_9 = (((((((0.95f - 0.047f) + 0.001f) + 0.047f) - 0.002f) - 0.013f) - 0.002f) - 0.001f);
}

float func_69()
{
	float fVar0;
	
	fVar0 = (((((0.919f - 0.081f) + 0.028f) + 0.05f) - 0.001f) - 0.002f);
	return fVar0;
}

float func_70(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_1380638.f_1119;
			break;
		
		case 2:
			return Global_1380638.f_1120;
			break;
	}
	return Global_1380638.f_1119;
}

float func_71()
{
	float fVar0;
	
	fVar0 = ((((0.013f - 0.002f) + 0.001f) + 0.001f) - 0.001f);
	return fVar0;
}

void func_72(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
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
	float fVar9;
	
	iVar8 = func_74(&uParam4, 0, 0);
	if ((iParam3 / 2) > iVar8)
	{
		fVar9 = (SYSTEM::TO_FLOAT((iVar8 / 2)) / SYSTEM::TO_FLOAT((iParam3 / 2)));
		unk_0xB4D5E37C91862216(iParam1, &iVar0, &iVar1, &iVar2, &iVar3);
		unk_0xB4D5E37C91862216(iParam2, &iVar4, &iVar5, &iVar6, &iVar7);
	}
	else
	{
		fVar9 = (SYSTEM::TO_FLOAT(iVar8) / SYSTEM::TO_FLOAT(iParam3));
		unk_0xB4D5E37C91862216(iParam2, &iVar0, &iVar1, &iVar2, &iVar3);
		unk_0xB4D5E37C91862216(iParam1, &iVar4, &iVar5, &iVar6, &iVar7);
	}
	uParam0->f_3 = SYSTEM::FLOOR(func_73(SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(iVar4), fVar9));
	uParam0->f_4 = SYSTEM::FLOOR(func_73(SYSTEM::TO_FLOAT(iVar1), SYSTEM::TO_FLOAT(iVar5), fVar9));
	uParam0->f_5 = SYSTEM::FLOOR(func_73(SYSTEM::TO_FLOAT(iVar2), SYSTEM::TO_FLOAT(iVar6), fVar9));
	uParam0->f_6 = SYSTEM::FLOOR(func_73(SYSTEM::TO_FLOAT(iVar3), SYSTEM::TO_FLOAT(iVar7), fVar9));
}

float func_73(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

var func_74(var uParam0, bool bParam1, bool bParam2)
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

void func_75(var uParam0, bool bParam1, bool bParam2)
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

bool func_76(var uParam0)
{
	return uParam0->f_1;
}

void func_77(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (bParam6 == 1)
	{
		if (bParam7)
		{
			func_59(uParam1, uParam0, sParam2, "", iParam3, 2);
		}
		else
		{
			func_59(uParam1, uParam0, sParam2, "", iParam4, 2);
		}
	}
	else if (iParam5 == -1)
	{
		func_78(uParam1, uParam0, sParam2, 0, 1);
	}
	else
	{
		uParam1->f_1 = (uParam1->f_1 + (-0.003f - 0.001f));
		func_57(uParam1, uParam0, sParam2, iParam5, 2);
	}
}

void func_78(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4)
{
	char* sVar0;
	
	sVar0 = sParam2;
	if (!func_54(sVar0))
	{
		if (func_50())
		{
			func_80(uParam1, 0);
			unk_0x86DCEA820A4188A6(iParam4);
			unk_0x7160B751D113C8C6(iParam3);
			func_79(func_49(*uParam0), func_48(uParam0->f_1), sVar0, 0);
		}
	}
}

void func_79(var uParam0, var uParam1, char* sParam2, int iParam3)
{
	unk_0xE5A80C83FA218963(sParam2);
	unk_0xBC68FBDA73BBB4A6(uParam0, uParam1, iParam3);
}

void func_80(var uParam0, bool bParam1)
{
	unk_0x57BF57F8A1C8167A(*uParam0);
	if (!uParam0->f_8 == 0f || !uParam0->f_9 == 0f)
	{
		unk_0x70D76B2EE444F0BD(uParam0->f_8, uParam0->f_9);
	}
	unk_0x9E8B548C035F223D(uParam0->f_1, uParam0->f_2);
	unk_0x968AC0BD45D79791(uParam0->f_3, uParam0->f_4, uParam0->f_5, uParam0->f_6);
	switch (uParam0->f_7)
	{
		case 0:
			break;
		
		case 1:
			unk_0x1FB6E6318D831B70();
			unk_0x7B77FA6399B9DC6F();
			break;
		
		case 3:
			unk_0x7B77FA6399B9DC6F();
			break;
		
		case 2:
			unk_0x1FB6E6318D831B70();
			break;
	}
	if (bParam1)
	{
		unk_0x0F33095580A670CE(4);
	}
}

void func_81(var uParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	unk_0xB4D5E37C91862216(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_3 = uVar0;
	uParam0->f_4 = uVar1;
	uParam0->f_5 = uVar2;
}

void func_82(var uParam0, int iParam1)
{
	struct<8> Var0;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	
	if (iParam1 == 0)
	{
		return;
	}
	Var0 = 0.951f;
	Var0.f_1 = uParam0->f_1;
	Var0.f_2 = 0.002f;
	Var0.f_3 = uParam0->f_3;
	unk_0xB4D5E37C91862216(iParam1, &uVar8, &uVar9, &uVar10, &uVar11);
	Var0.f_4 = uVar8;
	Var0.f_5 = uVar9;
	Var0.f_6 = uVar10;
	Var0.f_7 = uVar11;
	func_83(Var0, 0, 0);
}

void func_83(struct<8> Param0, int iParam8, int iParam9)
{
	struct<8> Var0;
	
	Var0 = { Param0 };
	switch (iParam8)
	{
		case 2:
			func_87(&Var0);
			break;
		
		case 1:
			func_86(&Var0);
			break;
		
		case 3:
			func_85(&Var0);
			break;
		
		case 4:
			func_84(&Var0);
			break;
	}
	if (func_50())
	{
		if (iParam9 == 1)
		{
			unk_0x80B2E30CC8B794C0(func_49(Var0), func_48(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, 0);
		}
		else
		{
			unk_0x80B2E30CC8B794C0(func_49(Var0), func_48(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, 0);
		}
	}
}

void func_84(var uParam0)
{
	uParam0->f_4 = 200;
	uParam0->f_5 = 20;
	uParam0->f_6 = 20;
	uParam0->f_7 = 204;
}

void func_85(var uParam0)
{
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = 255;
}

void func_86(var uParam0)
{
	uParam0->f_4 = (uParam0->f_4 - 50);
	uParam0->f_5 = (uParam0->f_5 - 50);
	uParam0->f_6 = (uParam0->f_6 - 50);
}

void func_87(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 150;
}

void func_88(var uParam0, bool bParam1, bool bParam2)
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

void func_89(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<9> Var0;
	
	Var0 = { *uParam2 };
	switch (iParam4)
	{
		case 0:
			func_96(&Var0);
			break;
		
		case 1:
			func_95(&Var0);
			break;
		
		case 5:
			func_94(&Var0);
			break;
		
		case 6:
			func_93(&Var0);
			break;
		
		case 7:
			func_92(&Var0);
			break;
		
		case 8:
			func_91(&Var0);
			break;
		
		case 9:
			func_90(&Var0);
			break;
	}
	if (func_50())
	{
		unk_0x0F33095580A670CE(iParam5);
		if (iParam3 == 1)
		{
			unk_0xDDD5C8D7152E128F(sParam0, sParam1, func_49(Var0), func_48(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		else
		{
			unk_0xDDD5C8D7152E128F(sParam0, sParam1, func_49(Var0), func_48(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		unk_0x0F33095580A670CE(4);
	}
}

void func_90(var uParam0)
{
	uParam0->f_4 = 128;
	uParam0->f_5 = 128;
	uParam0->f_6 = 128;
}

void func_91(var uParam0)
{
	uParam0->f_7 = 2;
}

void func_92(var uParam0)
{
	uParam0->f_7 = 5;
}

void func_93(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 70;
}

void func_94(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 100;
}

void func_95(var uParam0)
{
	uParam0->f_4 = (uParam0->f_4 - 50);
	uParam0->f_5 = (uParam0->f_5 - 50);
	uParam0->f_6 = (uParam0->f_6 - 50);
}

void func_96(var uParam0)
{
	uParam0->f_4 = uParam0->f_4;
	uParam0->f_5 = uParam0->f_5;
	uParam0->f_6 = uParam0->f_6;
	uParam0->f_7 = uParam0->f_7;
}

void func_97(var uParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	unk_0xB4D5E37C91862216(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_4 = uVar0;
	uParam0->f_5 = uVar1;
	uParam0->f_6 = uVar2;
}

int func_98(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	if (iParam2 == -1)
	{
		return 1;
	}
	if (unk_0x02BFF15CAA701972() && !bParam3)
	{
		if (unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), uParam0)) >= iParam2)
		{
			return 1;
		}
	}
	else if (unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0xDFB7BFA6482FEE1E(), uParam0)) >= iParam2)
	{
		return 1;
	}
	return 0;
}

int func_99(int iParam0, var uParam1, var uParam2)
{
	if (func_247(uParam1, iParam0, 0))
	{
		return 1;
	}
	if (!func_76(uParam2))
	{
		func_75(uParam2, 0, 0);
	}
	else if (func_247(uParam2, 300, 0))
	{
		if (func_247(uParam2, 800, 0))
		{
			func_16(uParam2);
			return 1;
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
	return 1;
}

int func_100()
{
	int iVar0;
	
	iVar0 = 1;
	if (Global_1380638.f_1129)
	{
		iVar0 = 7;
	}
	return iVar0;
}

void func_101(int iParam0)
{
	func_16(&(Global_1380638.f_548[iParam0 /*2*/]));
	func_16(&(Global_1380638.f_569[iParam0 /*2*/]));
}

void func_102(int iParam0)
{
	func_16(&(Global_1380638.f_86[iParam0 /*2*/]));
	func_16(&(Global_1380638.f_107[iParam0 /*2*/]));
}

void func_103(var uParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	unk_0xB4D5E37C91862216(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_3 = uVar0;
	uParam0->f_4 = uVar1;
	uParam0->f_5 = uVar2;
	uParam0->f_6 = uVar3;
}

void func_104(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4)
{
	float fVar0;
	
	fVar0 = func_108(uParam0);
	*uParam1 = 0.795f;
	uParam1->f_1 = func_70(iParam3);
	uParam1->f_1 = (uParam1->f_1 + func_107(uParam4));
	*uParam2 = 0.795f;
	uParam2->f_1 = (uParam1->f_1 + func_106(uParam0));
	func_105(iParam3, -fVar0);
}

void func_105(int iParam0, float fParam1)
{
	switch (iParam0)
	{
		case 1:
			Global_1380638.f_1119 = (Global_1380638.f_1119 + fParam1);
			break;
		
		case 2:
			Global_1380638.f_1120 = (Global_1380638.f_1120 + fParam1);
			break;
	}
}

float func_106(var uParam0)
{
	float fVar0;
	
	switch (uParam0->f_10)
	{
		case 9:
			fVar0 = ((((((-0.01f - 0.005f) + 0.004f) - 0.0005f) - 0.002f) + 0.002f) + 0.0005f);
			break;
		
		case 10:
			fVar0 = ((((-0.025f - 0.003f) + 0.002f) - 0.006f) + 0.001f);
			break;
		
		case 11:
			fVar0 = ((((-0.047f - 0.004f) + 0.012f) + 0.001f) + 0.007f);
			break;
		
		case 12:
			fVar0 = ((-0.019f + 0.011f) + 0.004f);
			break;
		
		case 13:
			fVar0 = (-0.012f + 0.001f);
			break;
		
		case 14:
			fVar0 = ((-0.012f + 0.001f) + 0.001f);
			break;
		
		case 15:
			fVar0 = ((((-0.035f - 0.008f) + 0.006f) + 0.013f) + 0.0005f);
			break;
		
		case 16:
			fVar0 = ((((-0.01f - 0.005f) + 0.004f) - 0.001f) + 0.001f);
			break;
		
		case 17:
			fVar0 = ((((-0.01f - 0.005f) + 0.004f) + 0.005f) + 0.0007f);
			break;
		
		case 18:
			fVar0 = ((((-0.01f - 0.005f) + 0.004f) + 0.005f) + 0.003f);
			break;
		
		case 6:
			fVar0 = (((-0.01f - 0.005f) + 0.004f) + 0.005f);
			break;
		
		case 19:
			fVar0 = (((-0.01f - 0.005f) + 0.004f) + 0.005f);
			break;
	}
	if (func_122())
	{
		fVar0 = (fVar0 + 0.003f);
	}
	return fVar0;
}

float func_107(var uParam0)
{
	float fVar0;
	
	switch (uParam0->f_10)
	{
		case 6:
			fVar0 = 0f;
			break;
	}
	return fVar0;
}

float func_108(var uParam0)
{
	float fVar0;
	
	switch (uParam0->f_10)
	{
		case 9:
			fVar0 = (((((((((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f) - 0.012f) + 0.001f) + 0.0018f) + 0.0005f) - 0.0005f);
			break;
		
		case 10:
			fVar0 = (((((((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f) + 0.003f) + 0.002f) - 0.004f);
			break;
		
		case 11:
			fVar0 = (((((0.065f + 0.009f) - 0.006f) - 0.009f) + 0.001f) - 0.009f);
			break;
		
		case 12:
			fVar0 = 0f;
			break;
		
		case 13:
			fVar0 = (0.065f + 0.009f);
			break;
		
		case 14:
			fVar0 = (((0.065f + 0.009f) - 0.015f) - 0.022f);
			break;
		
		case 15:
			fVar0 = 0f;
			break;
		
		case 16:
			fVar0 = ((((((((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f) - 0.012f) + 0.001f) + 0.002f) + 0.0003f);
			break;
		
		case 17:
			fVar0 = ((((((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f) - 0.012f) - 0.0005f);
			break;
		
		case 18:
			fVar0 = (((((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f) - 0.012f);
			break;
		
		case 19:
			fVar0 = (((((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f) - 0.012f);
			break;
	}
	return fVar0;
}

void func_109(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			Global_1380638.f_1119 = func_31();
			break;
		
		case 2:
			Global_1380638.f_1120 = func_31();
			break;
	}
}

void func_110(int iParam0, var uParam1)
{
	unk_0x191DDA30577F440A(&(Global_1380638.f_6766[iParam0]), uParam1);
}

float func_111()
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	fVar0 = unk_0x451E904FC8FB5C54(0);
	unk_0x32C9F8FADAAEEFE6(&iVar1, &iVar2);
	fVar3 = (SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(iVar2));
	fVar0 = func_112(fVar0, fVar3);
	if (fVar3 > 3.5f && fVar0 > 1.7f)
	{
		return 1.4f;
	}
	if (fVar0 > 1.7f)
	{
		return 1f;
	}
	else if (fVar0 > 1.5f)
	{
		return 1.2f;
	}
	else if (fVar0 > 1.3f)
	{
		return 1.3f;
	}
	return 1.4f;
}

float func_112(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_113(var uParam0)
{
	float fVar0;
	
	fVar0 = (((((0.95f - 0.047f) + 0.001f) + 0.047f) - 0.002f) + 0.001f);
	uParam0->f_9 = fVar0;
	if (Global_1380638.f_1123 == 0)
	{
		switch (uParam0->f_10)
		{
			case 11:
				uParam0->f_9 = (uParam0->f_9 + 0.001f);
				break;
			
			case 10:
				uParam0->f_9 = (uParam0->f_9 + 0.001f);
				break;
			
			default:
				break;
			}
	}
	if (Global_1380638.f_1123 == 1)
	{
		uParam0->f_9 = fVar0;
		uParam0->f_9 = (uParam0->f_9 + -0.113f);
	}
}

void func_114(var uParam0)
{
	float fVar0;
	
	fVar0 = ((((0.88f - 0.062f) + 0.026f) + 0.027f) + 0.03f);
	if (Global_1380638.f_1130)
	{
		fVar0 = (fVar0 + -0.034f);
		if (unk_0x928E0D7BE0057D1C() == 0)
		{
			fVar0 = (fVar0 + -0.02f);
		}
	}
	if (Global_1380638.f_1131 && Global_1380638.f_1130 == 0)
	{
		fVar0 = (fVar0 + (-0.015f - 0.003f));
		if (unk_0x928E0D7BE0057D1C() == 0)
		{
			fVar0 = (fVar0 + -0.017f);
		}
	}
	if ((Global_1380638.f_1132 && Global_1380638.f_1131 == 0) && Global_1380638.f_1130 == 0)
	{
		fVar0 = (fVar0 + -0.038f);
	}
	if (Global_1380638.f_1123 == 1)
	{
		fVar0 = (fVar0 + -0.113f);
	}
	if (((unk_0xFA1A73C829B8839F() == 7 && unk_0xFA1A73C829B8839F() == 1) && !unk_0x928E0D7BE0057D1C()) && Global_1380638.f_1132)
	{
		fVar0 = (fVar0 + -0.007f);
	}
	if (Global_1380638.f_1133)
	{
		if (((((unk_0xFA1A73C829B8839F() != 0 && unk_0xFA1A73C829B8839F() != 5) && unk_0xFA1A73C829B8839F() != 6) && unk_0xFA1A73C829B8839F() != 9) && unk_0xFA1A73C829B8839F() != 11) && unk_0xFA1A73C829B8839F() != 12)
		{
			fVar0 = (fVar0 + -0.009f);
		}
		else
		{
			fVar0 = (fVar0 + -0.009f);
		}
	}
	if (Global_1380638.f_1134)
	{
		if (func_115())
		{
			fVar0 = (fVar0 + -0.03f);
		}
		else if (((((unk_0xFA1A73C829B8839F() != 0 && unk_0xFA1A73C829B8839F() != 5) && unk_0xFA1A73C829B8839F() != 6) && unk_0xFA1A73C829B8839F() != 9) && unk_0xFA1A73C829B8839F() != 11) && unk_0xFA1A73C829B8839F() != 12)
		{
			fVar0 = (fVar0 + -0.024f);
		}
		else
		{
			fVar0 = (fVar0 + -0.019f);
		}
	}
	if (((((((((unk_0xFA1A73C829B8839F() == 8 || unk_0xFA1A73C829B8839F() == 7) || unk_0xFA1A73C829B8839F() == 1) && Global_1380638.f_1131 == 0) && Global_1380638.f_1130 == 0) && Global_1380638.f_1123 == 0) && Global_1380638.f_1132 == 0) && Global_1380638.f_1133 == 0) && Global_1380638.f_1134 == 0) && unk_0x3640D836D145B814())
	{
		fVar0 = (fVar0 + -0.005f);
	}
	uParam0->f_9 = fVar0;
}

int func_115()
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

void func_116(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = ((((0.469f + 0.096f) - 0.017f) + 0.022f) - 0.062f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 16;
}

void func_117(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (((((((0.469f + 0.096f) - 0.017f) + 0.022f) - 0.062f) - 0.095f) - 0.008f) - 0.012f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 17;
}

void func_118(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = ((((((((0.469f + 0.096f) - 0.017f) + 0.022f) - 0.062f) - 0.095f) - 0.008f) - 0.012f) - 0.06f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 18;
}

void func_119(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.288f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 23;
}

void func_120(var uParam0, int iParam1)
{
	*uParam0 = 4;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = (0.355f + 0.092f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 6;
}

void func_121(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = (0.416f + 0.089f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 23;
}

int func_122()
{
	if (((unk_0xFA1A73C829B8839F() == 8 || unk_0xFA1A73C829B8839F() == 9) || unk_0xFA1A73C829B8839F() == 10) || unk_0xFA1A73C829B8839F() == 12)
	{
		return 1;
	}
	return 0;
}

void func_123(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8, float fParam9)
{
	*uParam0 = fParam1;
	uParam0->f_1 = (fParam2 + fParam9);
	uParam0->f_2 = fParam3;
	uParam0->f_3 = fParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = iParam7;
	uParam0->f_7 = iParam8;
}

int func_124()
{
	return 1;
}

void func_125(int iParam0, int iParam1, float fParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, var uParam18, bool bParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, bool bParam26, int iParam27, int iParam28, var uParam29, int iParam30, int iParam31)
{
	var uVar0;
	var uVar11;
	var uVar22;
	var uVar24;
	
	if (func_28(12, iParam0))
	{
		func_126(iParam0, &uVar0, &uVar11, &uVar22, &uVar24, iParam1, fParam2, sParam3, iParam4, iParam5, bParam6, iParam7, 1, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, iParam15, iParam16, iParam17, uParam18, bParam19, iParam20, iParam21, iParam22, iParam23, iParam24, iParam25, bParam26, iParam27, iParam28, uParam29, iParam30, iParam31);
	}
}

void func_126(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, var uParam23, bool bParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, bool bParam31, int iParam32, int iParam33, var uParam34, int iParam35, int iParam36)
{
	struct<8> Var0;
	struct<8> Var9;
	struct<8> Var18;
	struct<8> Var27;
	struct<8> Var36;
	struct<8> Var45;
	struct<8> Var54;
	struct<8> Var63;
	struct<8> Var72;
	struct<8> Var81;
	struct<8> Var90;
	struct<8> Var99;
	struct<8> Var108;
	struct<8> Var117;
	struct<8> Var126;
	struct<8> Var135;
	var uVar144;
	var uVar145;
	var uVar146;
	var uVar147;
	var uVar148;
	char cVar149[24];
	struct<3> Var155;
	char cVar161[24];
	char cVar167[24];
	struct<3> Var173;
	char cVar179[24];
	char cVar185[24];
	struct<3> Var191;
	char cVar197[24];
	char cVar203[24];
	struct<3> Var209;
	char cVar215[24];
	char cVar221[24];
	struct<3> Var227;
	char cVar233[24];
	char cVar239[24];
	char cVar245[24];
	char cVar251[24];
	char cVar257[24];
	char cVar263[24];
	char cVar269[24];
	char cVar275[24];
	char cVar281[24];
	char cVar287[24];
	char cVar293[24];
	char cVar299[24];
	char cVar305[24];
	char cVar311[24];
	char cVar317[24];
	char cVar323[24];
	int iVar329;
	int iVar330;
	int iVar331;
	int iVar332;
	int iVar333;
	int iVar334;
	int iVar335;
	int iVar336;
	int iVar337;
	int iVar338;
	int iVar339;
	int iVar340;
	int iVar341;
	int iVar342;
	int iVar343;
	int iVar344;
	bool bVar345;
	bool bVar346;
	
	Global_1380638++;
	if (func_124())
	{
		func_123(&Var0, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		func_119(uParam1, 3);
		if (iParam5 < 1000000)
		{
			if ((unk_0xFA1A73C829B8839F() == 8 && fParam6 >= 100f) && unk_0xDA654EB115F9FF7D("AMCH_KMHN", sParam7))
			{
				func_118(uParam2, 0, 0);
			}
			else if (((unk_0xFA1A73C829B8839F() == 8 || unk_0xFA1A73C829B8839F() == 9) || unk_0xFA1A73C829B8839F() == 12) && ((iParam5 > 999 || iParam9 > 999) || fParam6 > 1000f))
			{
				func_118(uParam2, 0, 0);
			}
			else if (iParam9 > 99)
			{
				func_117(uParam2, 0, 0);
			}
			else
			{
				func_116(uParam2, 0, 0);
			}
		}
		else if (unk_0xFA1A73C829B8839F() == 8 && (unk_0xDA654EB115F9FF7D("HUD_CASH", sParam7) || unk_0xDA654EB115F9FF7D("HUD_CASH_NEG", sParam7)))
		{
			func_118(uParam2, 0, 0);
		}
		else
		{
			func_117(uParam2, 0, 0);
		}
		func_114(uParam1);
		func_113(uParam2);
		func_110(12, iParam0);
		if (Global_1380638 == 1)
		{
			func_109(iParam12);
		}
		func_104(uParam2, uParam3, uParam4, iParam12, uParam1);
		func_103(uParam2, iParam11);
		uParam2->f_6 = 255;
		Var9 = (*uParam4 + 0.095f);
		Var18 = (*uParam4 + 0.095f);
		Var27 = (*uParam4 + 0.095f);
		Var36 = (*uParam4 + 0.072f);
		Var45 = (*uParam4 + 0.072f);
		Var54 = (*uParam4 + 0.072f);
		Var63 = (*uParam4 + 0.049f);
		Var72 = (*uParam4 + 0.049f);
		Var81 = (*uParam4 + 0.049f);
		Var90 = (*uParam4 + 0.026f);
		Var99 = (*uParam4 + 0.026f);
		Var108 = (*uParam4 + 0.026f);
		Var117 = (*uParam4 + 0.003f);
		Var126 = (*uParam4 + 0.003f);
		Var135 = (*uParam4 + 0.003f);
		if (func_122())
		{
			Var9.f_1 = ((uParam4->f_1 + 0.016f) - 0.0005f);
			Var18.f_1 = (uParam4->f_1 + 0.016f);
			Var27.f_1 = (uParam4->f_1 + 0.016f);
			Var36.f_1 = ((uParam4->f_1 + 0.016f) - 0.0005f);
			Var45.f_1 = (uParam4->f_1 + 0.016f);
			Var54.f_1 = (uParam4->f_1 + 0.016f);
			Var63.f_1 = ((uParam4->f_1 + 0.016f) - 0.0005f);
			Var72.f_1 = (uParam4->f_1 + 0.016f);
			Var81.f_1 = (uParam4->f_1 + 0.016f);
			Var90.f_1 = ((uParam4->f_1 + 0.016f) - 0.0005f);
			Var99.f_1 = (uParam4->f_1 + 0.016f);
			Var108.f_1 = (uParam4->f_1 + 0.016f);
			Var117.f_1 = ((uParam4->f_1 + 0.016f) - 0.0005f);
			Var126.f_1 = (uParam4->f_1 + 0.016f);
			Var135.f_1 = (uParam4->f_1 + 0.016f);
		}
		else
		{
			Var9.f_1 = (uParam4->f_1 + 0.0185f);
			Var18.f_1 = (uParam4->f_1 + 0.019f);
			Var27.f_1 = (uParam4->f_1 + 0.019f);
			Var36.f_1 = (uParam4->f_1 + 0.0185f);
			Var45.f_1 = (uParam4->f_1 + 0.019f);
			Var54.f_1 = (uParam4->f_1 + 0.019f);
			Var63.f_1 = (uParam4->f_1 + 0.0185f);
			Var72.f_1 = (uParam4->f_1 + 0.019f);
			Var81.f_1 = (uParam4->f_1 + 0.019f);
			Var90.f_1 = (uParam4->f_1 + 0.0185f);
			Var99.f_1 = (uParam4->f_1 + 0.019f);
			Var108.f_1 = (uParam4->f_1 + 0.019f);
			Var117.f_1 = (uParam4->f_1 + 0.0185f);
			Var126.f_1 = (uParam4->f_1 + 0.019f);
			Var135.f_1 = (uParam4->f_1 + 0.019f);
		}
		Var9.f_2 = (0.016f + 0.003f);
		Var18.f_2 = (0.016f + 0.003f);
		Var27.f_2 = (0.016f + 0.003f);
		Var36.f_2 = (0.016f + 0.003f);
		Var45.f_2 = (0.016f + 0.003f);
		Var54.f_2 = (0.016f + 0.003f);
		Var63.f_2 = (0.016f + 0.003f);
		Var72.f_2 = (0.016f + 0.003f);
		Var81.f_2 = (0.016f + 0.003f);
		Var90.f_2 = (0.016f + 0.003f);
		Var99.f_2 = (0.016f + 0.003f);
		Var108.f_2 = (0.016f + 0.003f);
		Var117.f_2 = (0.016f + 0.003f);
		Var126.f_2 = (0.016f + 0.003f);
		Var135.f_2 = (0.016f + 0.003f);
		Var9.f_3 = (0.032f + 0.004f);
		Var18.f_3 = (0.032f + 0.004f);
		Var27.f_3 = (0.032f + 0.004f);
		Var36.f_3 = (0.032f + 0.004f);
		Var45.f_3 = (0.032f + 0.004f);
		Var54.f_3 = (0.032f + 0.004f);
		Var63.f_3 = (0.032f + 0.004f);
		Var72.f_3 = (0.032f + 0.004f);
		Var81.f_3 = (0.032f + 0.004f);
		Var90.f_3 = (0.032f + 0.004f);
		Var99.f_3 = (0.032f + 0.004f);
		Var108.f_3 = (0.032f + 0.004f);
		Var117.f_3 = (0.032f + 0.004f);
		Var126.f_3 = (0.032f + 0.004f);
		Var135.f_3 = (0.032f + 0.004f);
		Var9.f_7 = 255;
		Var18.f_7 = 255;
		Var27.f_7 = 255;
		Var36.f_7 = 255;
		Var45.f_7 = 255;
		Var54.f_7 = 255;
		Var63.f_7 = 255;
		Var72.f_7 = 255;
		Var81.f_7 = 255;
		Var90.f_7 = 255;
		Var99.f_7 = 255;
		Var108.f_7 = 255;
		Var117.f_7 = 255;
		Var126.f_7 = 255;
		Var135.f_7 = 255;
		func_97(&Var9, 1);
		func_97(&Var18, 1);
		func_97(&Var27, 1);
		func_97(&Var36, 1);
		func_97(&Var45, 1);
		func_97(&Var54, 1);
		func_97(&Var63, 1);
		func_97(&Var72, 1);
		func_97(&Var81, 1);
		func_97(&Var90, 1);
		func_97(&Var99, 1);
		func_97(&Var108, 1);
		func_97(&Var117, 1);
		func_97(&Var126, 1);
		func_97(&Var135, 1);
		StringCopy(&cVar149, "", 24);
		StringCopy(&Var155, "", 24);
		StringCopy(&cVar161, "", 24);
		StringCopy(&cVar167, "", 24);
		StringCopy(&Var173, "", 24);
		StringCopy(&cVar179, "", 24);
		StringCopy(&cVar185, "", 24);
		StringCopy(&Var191, "", 24);
		StringCopy(&cVar197, "", 24);
		StringCopy(&cVar203, "", 24);
		StringCopy(&Var209, "", 24);
		StringCopy(&cVar215, "", 24);
		StringCopy(&cVar221, "", 24);
		StringCopy(&Var227, "", 24);
		StringCopy(&cVar233, "", 24);
		StringCopy(&cVar239, "", 24);
		StringCopy(&cVar245, "", 24);
		StringCopy(&cVar251, "", 24);
		StringCopy(&cVar257, "", 24);
		StringCopy(&cVar263, "", 24);
		StringCopy(&cVar269, "", 24);
		StringCopy(&cVar275, "", 24);
		StringCopy(&cVar281, "", 24);
		StringCopy(&cVar287, "", 24);
		StringCopy(&cVar293, "", 24);
		StringCopy(&cVar299, "", 24);
		StringCopy(&cVar305, "", 24);
		StringCopy(&cVar311, "", 24);
		StringCopy(&cVar317, "", 24);
		StringCopy(&cVar323, "", 24);
		iVar329 = 1;
		iVar330 = 1;
		iVar331 = 1;
		iVar332 = 1;
		iVar333 = 1;
		iVar334 = 1;
		iVar335 = 1;
		iVar336 = 1;
		iVar337 = 1;
		iVar338 = 1;
		iVar339 = 1;
		iVar340 = 1;
		iVar341 = 1;
		iVar342 = 1;
		iVar343 = 1;
		func_134(&iParam18, &Var9, &cVar149, &cVar239, &iVar329, &iParam13, &uVar144, &Var18, &Var155, &cVar245, &iVar330, iParam11, iParam25);
		func_134(&iParam19, &Var36, &cVar167, &cVar257, &iVar332, &iParam14, &uVar145, &Var45, &Var173, &cVar263, &iVar333, iParam11, iParam26);
		func_134(&iParam20, &Var63, &cVar185, &cVar275, &iVar335, &iParam15, &uVar146, &Var72, &Var191, &cVar281, &iVar336, iParam11, iParam27);
		func_134(&iParam21, &Var90, &cVar203, &cVar293, &iVar338, &iParam16, &uVar147, &Var99, &Var209, &cVar299, &iVar339, iParam11, iParam28);
		func_134(&iParam22, &Var117, &cVar221, &cVar311, &iVar341, &iParam17, &uVar148, &Var126, &Var227, &cVar317, &iVar342, iParam11, iParam29);
		unk_0xA08F3C300F9E3468("TimerBars", 0);
		if (func_132(&cVar149, &Var155, &cVar167, &Var173, &cVar185, &Var191, &cVar203, &Var209, &cVar221, &Var227) && unk_0xAD9D75DD073BF477("TimerBars"))
		{
			iVar344 = func_100();
			unk_0x0F33095580A670CE(iVar344);
			Var0 = *uParam3;
			Var0.f_1 = uParam3->f_1;
			if (iParam5 < 1000000)
			{
				Var0 = (Var0 + 0.079f);
				Var0.f_1 = (Var0.f_1 + 0.008f);
				Var0.f_2 = (Var0.f_2 + 0.157f);
				Var0.f_3 = (Var0.f_3 + 0.036f);
				Var0.f_4 += 255;
				Var0.f_5 += 255;
				Var0.f_6 += 255;
				Var0.f_7 = 140;
			}
			else
			{
				Var0 = (Var0 + 0.079f);
				Var0.f_1 = (Var0.f_1 + 0.01f);
				Var0.f_2 = (Var0.f_2 + 0.157f);
				Var0.f_3 = (Var0.f_3 + 0.033f);
				Var0.f_4 += 255;
				Var0.f_5 += 255;
				Var0.f_6 += 255;
				Var0.f_7 = 140;
			}
			if (func_122())
			{
				Var0 = (Var0 + -0.025f);
				Var0.f_2 = (Var0.f_2 + 0.05f);
			}
			Global_1380638.f_6797 = (Global_1380638.f_6797 + Var0.f_3);
			func_89("TimerBars", "ALL_BLACK_bg", &Var0, 1, 0, 4, 0);
			func_80(uParam1, 0);
			if (iParam35 == 0)
			{
				func_131(iParam0);
			}
			if (func_99(iParam35, &(Global_1380638.f_422[iParam0 /*2*/]), &(Global_1380638.f_443[iParam0 /*2*/])))
			{
				bVar345 = true;
			}
			else
			{
				bVar345 = false;
			}
			if (uParam34 && unk_0xA5F7333B2B1BA9B2())
			{
				if (bVar345)
				{
					if (iParam33 == iParam13 && iParam36 == 5)
					{
						func_130(iParam18, &Var9, &Var18, &cVar149, &cVar239, iVar329, &Var155, &cVar245, iVar330);
					}
					if (iParam33 == iParam14 && iParam36 == 4)
					{
						func_130(iParam19, &Var36, &Var45, &cVar167, &cVar257, iVar332, &Var173, &cVar263, iVar333);
					}
					if (iParam33 == iParam15 && iParam36 == 3)
					{
						func_130(iParam20, &Var63, &Var72, &cVar185, &cVar275, iVar335, &Var191, &cVar281, iVar336);
					}
					if (iParam33 == iParam16 && iParam36 == 2)
					{
						func_130(iParam21, &Var90, &Var99, &cVar203, &cVar293, iVar338, &Var209, &cVar299, iVar339);
					}
					if (iParam33 == iParam17 && iParam36 == 1)
					{
						func_130(iParam22, &Var117, &Var126, &cVar221, &cVar311, iVar341, &Var227, &cVar317, iVar342);
					}
				}
				if (iParam33 == iParam13 && iParam36 != 5)
				{
					func_130(iParam18, &Var9, &Var18, &cVar149, &cVar239, iVar329, &Var155, &cVar245, iVar330);
				}
				if (iParam33 == iParam14 && iParam36 != 4)
				{
					func_130(iParam19, &Var36, &Var45, &cVar167, &cVar257, iVar332, &Var173, &cVar263, iVar333);
				}
				if (iParam33 == iParam15 && iParam36 != 3)
				{
					func_130(iParam20, &Var63, &Var72, &cVar185, &cVar275, iVar335, &Var191, &cVar281, iVar336);
				}
				if (iParam33 == iParam16 && iParam36 != 2)
				{
					func_130(iParam21, &Var90, &Var99, &cVar203, &cVar293, iVar338, &Var209, &cVar299, iVar339);
				}
				if (iParam33 == iParam17 && iParam36 != 1)
				{
					func_130(iParam22, &Var117, &Var126, &cVar221, &cVar311, iVar341, &Var227, &cVar317, iVar342);
				}
				if (iParam33 != iParam13)
				{
					func_130(iParam18, &Var9, &Var18, &cVar149, &cVar239, iVar329, &Var155, &cVar245, iVar330);
				}
				if (iParam33 != iParam14)
				{
					func_130(iParam19, &Var36, &Var45, &cVar167, &cVar257, iVar332, &Var173, &cVar263, iVar333);
				}
				if (iParam33 != iParam15)
				{
					func_130(iParam20, &Var63, &Var72, &cVar185, &cVar275, iVar335, &Var191, &cVar281, iVar336);
				}
				if (iParam33 != iParam16)
				{
					func_130(iParam21, &Var90, &Var99, &cVar203, &cVar293, iVar338, &Var209, &cVar299, iVar339);
				}
				if (iParam33 != iParam17)
				{
					func_130(iParam22, &Var117, &Var126, &cVar221, &cVar311, iVar341, &Var227, &cVar317, iVar342);
				}
			}
			else
			{
				func_130(iParam18, &Var9, &Var18, &cVar149, &cVar239, iVar329, &Var155, &cVar245, iVar330);
				func_130(iParam19, &Var36, &Var45, &cVar167, &cVar257, iVar332, &Var173, &cVar263, iVar333);
				func_130(iParam20, &Var63, &Var72, &cVar185, &cVar275, iVar335, &Var191, &cVar281, iVar336);
				func_130(iParam21, &Var90, &Var99, &cVar203, &cVar293, iVar338, &Var209, &cVar299, iVar339);
				func_130(iParam22, &Var117, &Var126, &cVar221, &cVar311, iVar341, &Var227, &cVar317, iVar342);
			}
			if (iParam32 == 0)
			{
				func_129(iParam0);
			}
			if (func_99(iParam32, &(Global_1380638.f_380[iParam0 /*2*/]), &(Global_1380638.f_401[iParam0 /*2*/])))
			{
				bVar346 = true;
			}
			else
			{
				bVar346 = false;
			}
			if (bParam24)
			{
				switch (iParam30)
				{
					case -1:
						func_128(&Var27, &cVar161, &cVar251, &iVar331, &iParam13, &uParam23, iParam11);
						func_128(&Var54, &cVar179, &cVar269, &iVar334, &iParam14, &uParam23, iParam11);
						func_128(&Var81, &cVar197, &cVar287, &iVar337, &iParam15, &uParam23, iParam11);
						func_128(&Var108, &cVar215, &cVar305, &iVar340, &iParam16, &uParam23, iParam11);
						func_128(&Var135, &cVar233, &cVar323, &iVar343, &iParam17, &uParam23, iParam11);
						if (bParam31)
						{
							if (bVar346)
							{
								func_127(&Var27, &cVar161, &cVar251, iVar331);
								func_127(&Var54, &cVar179, &cVar269, iVar334);
								func_127(&Var81, &cVar197, &cVar287, iVar337);
								func_127(&Var108, &cVar215, &cVar305, iVar340);
								func_127(&Var135, &cVar233, &cVar323, iVar343);
							}
						}
						else
						{
							func_127(&Var27, &cVar161, &cVar251, iVar331);
							func_127(&Var54, &cVar179, &cVar269, iVar334);
							func_127(&Var81, &cVar197, &cVar287, iVar337);
							func_127(&Var108, &cVar215, &cVar305, iVar340);
							func_127(&Var135, &cVar233, &cVar323, iVar343);
						}
						break;
					
					case 0:
						break;
					
					case 1:
						func_128(&Var27, &cVar161, &cVar251, &iVar331, &iParam13, &uParam23, iParam11);
						if (bParam31)
						{
							if (bVar346)
							{
								func_127(&Var27, &cVar161, &cVar251, iVar331);
							}
						}
						else
						{
							func_127(&Var27, &cVar161, &cVar251, iVar331);
						}
						break;
					
					case 2:
						func_128(&Var54, &cVar179, &cVar269, &iVar334, &iParam14, &uParam23, iParam11);
						if (bParam31)
						{
							if (bVar346)
							{
								func_127(&Var54, &cVar179, &cVar269, iVar334);
							}
						}
						else
						{
							func_127(&Var54, &cVar179, &cVar269, iVar334);
						}
						break;
					
					case 3:
						func_128(&Var81, &cVar197, &cVar287, &iVar337, &iParam15, &uParam23, iParam11);
						if (bParam31)
						{
							if (bVar346)
							{
								func_127(&Var81, &cVar197, &cVar287, iVar337);
							}
						}
						else
						{
							func_127(&Var81, &cVar197, &cVar287, iVar337);
						}
						break;
					
					case 4:
						func_128(&Var108, &cVar215, &cVar305, &iVar340, &iParam16, &uParam23, iParam11);
						if (bParam31)
						{
							if (bVar346)
							{
								func_127(&Var108, &cVar215, &cVar305, iVar340);
							}
						}
						else
						{
							func_127(&Var108, &cVar215, &cVar305, iVar340);
						}
						break;
					
					case 5:
						func_128(&Var135, &cVar233, &cVar323, &iVar343, &iParam17, &uParam23, iParam11);
						if (bParam31)
						{
							if (bVar346)
							{
								func_127(&Var135, &cVar233, &cVar323, iVar343);
							}
						}
						else
						{
							func_127(&Var135, &cVar233, &cVar323, iVar343);
						}
						break;
					}
			}
			func_80(uParam2, 0);
			if (bParam10)
			{
				func_59(uParam4, uParam2, "???", "", 1, 2);
			}
			else if (func_54(sParam7))
			{
				if (iParam9 == 0)
				{
					if (iParam8 == 0)
					{
						if (iParam5 != -999)
						{
							func_57(uParam4, uParam2, "NUMBER", iParam5, 2);
						}
					}
					else
					{
						func_55(uParam4, uParam2, "NUMBER", fParam6, Global_2465024, 2);
					}
				}
				else
				{
					func_52(uParam4, uParam2, "TIMER_DASHES", iParam5, iParam9, 2, 0);
				}
			}
			else if (unk_0xDA654EB115F9FF7D("HUD_CASH", sParam7) || unk_0xDA654EB115F9FF7D("HUD_CASH_S", sParam7))
			{
				sParam7 = "HUD_CASH_S";
				*uParam2 = 5;
				func_80(uParam2, 0);
				func_47(uParam4, uParam2, sParam7, iParam5, 2);
			}
			else if (unk_0xDA654EB115F9FF7D("HUD_CASH_NEG", sParam7) || unk_0xDA654EB115F9FF7D("HUD_CASH_NEG_S", sParam7))
			{
				*uParam2 = 5;
				func_80(uParam2, 0);
				sParam7 = "HUD_CASH_NEG_S";
				func_47(uParam4, uParam2, sParam7, iParam5, 2);
			}
			else if (iParam8 == 0)
			{
				func_57(uParam4, uParam2, sParam7, iParam5, 2);
			}
			else
			{
				func_55(uParam4, uParam2, sParam7, fParam6, Global_2465024, 2);
			}
			func_46();
		}
	}
}

void func_127(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (!unk_0xAB6A270F84A8781E(sParam1))
	{
		unk_0xA08F3C300F9E3468(sParam1, 0);
		if (unk_0xAD9D75DD073BF477(sParam1))
		{
			func_97(uParam0, iParam3);
			func_89(sParam1, sParam2, uParam0, 1, 0, 4, 0);
		}
	}
}

void func_128(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, var uParam5, int iParam6)
{
	if (*uParam5 != func_67() && *iParam4 != func_67())
	{
		if (*uParam5 == *iParam4)
		{
			StringCopy(sParam1, "timerbar_sr", 24);
			StringCopy(sParam2, "timer_box", 24);
			*iParam3 = iParam6;
			uParam0->f_2 = (0.016f + 0.008f);
			uParam0->f_3 = 0.038f;
		}
	}
}

void func_129(int iParam0)
{
	func_16(&(Global_1380638.f_380[iParam0 /*2*/]));
	func_16(&(Global_1380638.f_401[iParam0 /*2*/]));
}

void func_130(int iParam0, var uParam1, var uParam2, char* sParam3, char* sParam4, int iParam5, char* sParam6, char* sParam7, int iParam8)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (!unk_0xAB6A270F84A8781E(sParam3))
	{
		func_97(uParam1, iParam5);
		func_89(sParam3, sParam4, uParam1, 1, 0, 4, 0);
	}
	if (((((iParam0 == 27 || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 31) || iParam0 == 32)
	{
		unk_0xB4D5E37C91862216(2, &uVar0, &uVar1, &uVar2, &uVar3);
		unk_0x80B2E30CC8B794C0(*uParam1, uParam1->f_1, uParam1->f_2, uParam1->f_3, uVar0, uVar1, uVar2, 153, 0);
	}
	if ((((((((((((((iParam0 == 18 || iParam0 == 19) || iParam0 == 20) || iParam0 == 21) || iParam0 == 22) || iParam0 == 23) || iParam0 == 24) || iParam0 == 25) || iParam0 == 26) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 31) || iParam0 == 32)
	{
		if (!unk_0xAB6A270F84A8781E(sParam6))
		{
			func_97(uParam2, iParam8);
			func_89(sParam6, sParam7, uParam2, 1, 0, 4, 0);
		}
	}
}

void func_131(int iParam0)
{
	func_16(&(Global_1380638.f_422[iParam0 /*2*/]));
	func_16(&(Global_1380638.f_443[iParam0 /*2*/]));
}

int func_132(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	
	iVar0 = 1;
	if (func_133(sParam0, sParam1) == 0)
	{
		iVar0 = 0;
	}
	if (func_133(sParam2, sParam3) == 0)
	{
		iVar0 = 0;
	}
	if (func_133(sParam4, sParam5) == 0)
	{
		iVar0 = 0;
	}
	if (func_133(sParam6, sParam7) == 0)
	{
		iVar0 = 0;
	}
	if (func_133(sParam8, sParam9) == 0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_133(char* sParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xAB6A270F84A8781E(sParam0))
	{
		unk_0xA08F3C300F9E3468(sParam0, 0);
		if (unk_0xAD9D75DD073BF477(sParam0))
		{
			iVar0 = 1;
		}
	}
	else
	{
		iVar0 = 1;
	}
	if (!unk_0xAB6A270F84A8781E(sParam1))
	{
		unk_0xA08F3C300F9E3468(sParam1, 0);
		if (unk_0xAD9D75DD073BF477(sParam1))
		{
			iVar1 = 1;
		}
	}
	else
	{
		iVar1 = 1;
	}
	if (iVar0 && iVar1)
	{
		return 1;
	}
	return 0;
}

void func_134(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, var uParam5, var uParam6, var uParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	switch (*uParam0)
	{
		case 5:
			uParam1->f_3 = (uParam1->f_3 + -0.009f);
			uParam1->f_2 = (uParam1->f_2 + -0.002f);
			if (func_122())
			{
				uParam1->f_1 = (uParam1->f_1 + 0.0055f);
			}
			else
			{
				uParam1->f_1 = (uParam1->f_1 + 0.0025f);
			}
			StringCopy(sParam2, "MPRPSymbol", 24);
			StringCopy(sParam3, "RP", 24);
			break;
		
		case 2:
			StringCopy(sParam2, "TimerBars", 24);
			StringCopy(sParam3, "Rockets", 24);
			break;
		
		case 3:
			StringCopy(sParam2, "MpSpecialRace", 24);
			StringCopy(sParam3, "HOMING_ROCKET", 24);
			break;
		
		case 1:
			StringCopy(sParam2, "TimerBars", 24);
			StringCopy(sParam3, "Spikes", 24);
			break;
		
		case 4:
			StringCopy(sParam2, "TimerBars", 24);
			StringCopy(sParam3, "Boost", 24);
			break;
		
		case 6:
			StringCopy(sParam2, "CrossTheLine", 24);
			StringCopy(sParam3, "Timer_LargeTick_32", 24);
			break;
		
		case 7:
			StringCopy(sParam2, "CrossTheLine", 24);
			StringCopy(sParam3, "Timer_LargeCross_32", 24);
			break;
		
		case 8:
			StringCopy(sParam2, "TimerBar_Icons", 24);
			StringCopy(sParam3, "Pickup_Beast", 24);
			*iParam4 = 118;
			break;
		
		case 9:
			StringCopy(sParam2, "MPSpecialRace", 24);
			StringCopy(sParam3, "MACHINE_GUN", 24);
			break;
		
		case 10:
			StringCopy(sParam2, "TimerBar_Icons", 24);
			StringCopy(sParam3, "Pickup_Random", 24);
			*iParam4 = 118;
			break;
		
		case 11:
			StringCopy(sParam2, "TimerBar_Icons", 24);
			StringCopy(sParam3, "Pickup_Slow_Time", 24);
			break;
		
		case 12:
			StringCopy(sParam2, "TimerBar_Icons", 24);
			StringCopy(sParam3, "Pickup_Swap", 24);
			*iParam4 = 118;
			break;
		
		case 13:
			StringCopy(sParam2, "TimerBar_Icons", 24);
			StringCopy(sParam3, "Pickup_Testosterone", 24);
			*iParam4 = 118;
			break;
		
		case 14:
			StringCopy(sParam2, "TimerBar_Icons", 24);
			StringCopy(sParam3, "Pickup_Thermal", 24);
			*iParam4 = 118;
			break;
		
		case 15:
			StringCopy(sParam2, "TimerBar_Icons", 24);
			StringCopy(sParam3, "Pickup_Weed", 24);
			*iParam4 = 118;
			break;
		
		case 16:
			StringCopy(sParam2, "TimerBar_Icons", 24);
			StringCopy(sParam3, "Pickup_Hidden", 24);
			*iParam4 = 118;
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
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
			if (*uParam5 != func_67())
			{
				*uParam6 = func_60(*uParam5);
				if (*uParam6 != 0)
				{
					StringCopy(sParam2, unk_0x05FCBB2D6BF4C399(*uParam6), 24);
					StringCopy(sParam3, unk_0x05FCBB2D6BF4C399(*uParam6), 24);
				}
			}
			uParam1->f_2 = (0.016f + 0.004f);
			uParam1->f_3 = 0.034f;
			if (*uParam0 == 18)
			{
				StringCopy(sParam8, "timerbar_sr", 24);
				StringCopy(sParam9, "timer_cross", 24);
				*iParam10 = iParam11;
			}
			if (*uParam0 == 19)
			{
				StringCopy(sParam8, "timerbar_sr", 24);
				StringCopy(sParam9, "timer_tick", 24);
				*iParam10 = iParam11;
			}
			if (*uParam0 == 20 || *uParam0 == 27)
			{
				StringCopy(sParam8, "timerbar_sr", 24);
				StringCopy(sParam9, "timer_0", 24);
				*iParam10 = iParam12;
			}
			if (*uParam0 == 21 || *uParam0 == 28)
			{
				StringCopy(sParam8, "timerbar_sr", 24);
				StringCopy(sParam9, "timer_1", 24);
				*iParam10 = iParam12;
			}
			if (*uParam0 == 22 || *uParam0 == 29)
			{
				StringCopy(sParam8, "timerbar_sr", 24);
				StringCopy(sParam9, "timer_2", 24);
				*iParam10 = iParam12;
			}
			if (*uParam0 == 23 || *uParam0 == 30)
			{
				StringCopy(sParam8, "timerbar_sr", 24);
				StringCopy(sParam9, "timer_3", 24);
				*iParam10 = iParam12;
			}
			if (*uParam0 == 24 || *uParam0 == 31)
			{
				StringCopy(sParam8, "timerbar_sr", 24);
				StringCopy(sParam9, "timer_4", 24);
				*iParam10 = iParam12;
			}
			if (*uParam0 == 25 || *uParam0 == 32)
			{
				StringCopy(sParam8, "timerbar_sr", 24);
				StringCopy(sParam9, "timer_5", 24);
				*iParam10 = iParam12;
			}
			if (*uParam0 == 26)
			{
				*iParam10 = iParam11;
			}
			if ((((((*uParam0 == 20 || *uParam0 == 21) || *uParam0 == 22) || *uParam0 == 23) || *uParam0 == 24) || *uParam0 == 25) || *uParam0 == 26)
			{
				uParam1->f_7 = 127;
			}
			break;
		
		case 0:
			uParam1->f_7 = 0;
			uParam7->f_7 = 0;
			break;
	}
}

void func_135(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14)
{
	var uVar0;
	var uVar11;
	var uVar22;
	var uVar24;
	
	if (func_28(11, iParam0))
	{
		func_136(iParam0, &uVar0, &uVar11, &uVar22, &uVar24, uParam1, 1, uParam2, uParam3, uParam4, uParam5, iParam6, iParam7, iParam8, iParam9, bParam10, bParam11, bParam12, bParam13, iParam14);
	}
}

void func_136(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18, int iParam19)
{
	struct<8> Var0;
	bool bVar9;
	int iVar10;
	struct<8> Var11;
	struct<8> Var20;
	struct<8> Var29;
	struct<8> Var38;
	struct<8> Var47;
	struct<8> Var56;
	struct<8> Var65;
	struct<8> Var74;
	var uVar83;
	var uVar84;
	var uVar85;
	var uVar86;
	char cVar87[24];
	struct<3> Var93;
	char cVar99[24];
	struct<3> Var105;
	char cVar111[24];
	struct<3> Var117;
	char cVar123[24];
	struct<3> Var129;
	char[] cVar135[8];
	char[] cVar141[8];
	char[] cVar147[8];
	char[] cVar153[8];
	char[] cVar159[8];
	char[] cVar165[8];
	char[] cVar171[8];
	char[] cVar177[8];
	int iVar183;
	int iVar184;
	int iVar185;
	int iVar186;
	int iVar187;
	int iVar188;
	int iVar189;
	int iVar190;
	
	Global_1380638++;
	if (func_124())
	{
		func_110(11, iParam0);
		func_119(uParam1, 0);
		func_114(uParam1);
		if (Global_1380638 == 1)
		{
			func_109(iParam6);
		}
		func_116(uParam2, 0, 0);
		func_113(uParam2);
		func_104(uParam2, uParam3, uParam4, iParam6, uParam1);
		func_123(&Var0, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		if (iParam19 == 0)
		{
			func_138(iParam0);
		}
		if (func_99(iParam19, &(Global_1380638.f_338[iParam0 /*2*/]), &(Global_1380638.f_359[iParam0 /*2*/])))
		{
			bVar9 = true;
		}
		else
		{
			bVar9 = false;
		}
		unk_0xA08F3C300F9E3468("TimerBars", 0);
		if (unk_0xAD9D75DD073BF477("TimerBars"))
		{
			iVar10 = func_100();
			unk_0x0F33095580A670CE(iVar10);
			Var0 = *uParam3;
			Var0.f_1 = uParam3->f_1;
			Var0 = (Var0 + 0.079f);
			Var0.f_1 = (Var0.f_1 + 0.008f);
			Var0.f_2 = (Var0.f_2 + 0.157f);
			Var0.f_3 = (Var0.f_3 + 0.036f);
			Var0.f_4 += 255;
			Var0.f_5 += 255;
			Var0.f_6 += 255;
			Var0.f_7 = 140;
			if (func_122())
			{
				Var0 = (Var0 + -0.025f);
				Var0.f_2 = (Var0.f_2 + 0.05f);
			}
			Global_1380638.f_6797 = (Global_1380638.f_6797 + Var0.f_3);
			func_89("TimerBars", "ALL_BLACK_bg", &Var0, 1, 0, 4, 0);
			func_80(uParam1, 0);
			Var11 = ((*uParam4 + 0.145f) + 0.001f);
			Var20 = ((*uParam4 + 0.145f) + 0.001f);
			Var29 = (*uParam4 + 0.123f);
			Var38 = (*uParam4 + 0.123f);
			Var47 = (*uParam4 + 0.101f);
			Var56 = (*uParam4 + 0.101f);
			Var65 = (*uParam4 + 0.078f);
			Var74 = (*uParam4 + 0.078f);
			if (func_122())
			{
				Var11.f_1 = ((uParam4->f_1 + 0.016f) - 0f);
				Var20.f_1 = ((uParam4->f_1 + 0.016f) + 0.0005f);
				Var29.f_1 = ((uParam4->f_1 + 0.016f) - 0f);
				Var38.f_1 = ((uParam4->f_1 + 0.016f) + 0.0005f);
				Var47.f_1 = ((uParam4->f_1 + 0.016f) - 0f);
				Var56.f_1 = ((uParam4->f_1 + 0.016f) + 0.0005f);
				Var65.f_1 = ((uParam4->f_1 + 0.016f) - 0f);
				Var74.f_1 = ((uParam4->f_1 + 0.016f) + 0.0005f);
			}
			else
			{
				Var11.f_1 = (uParam4->f_1 + 0.0185f);
				Var20.f_1 = (uParam4->f_1 + 0.019f);
				Var29.f_1 = (uParam4->f_1 + 0.0185f);
				Var38.f_1 = (uParam4->f_1 + 0.019f);
				Var47.f_1 = (uParam4->f_1 + 0.0185f);
				Var56.f_1 = (uParam4->f_1 + 0.019f);
				Var65.f_1 = (uParam4->f_1 + 0.0185f);
				Var74.f_1 = (uParam4->f_1 + 0.019f);
			}
			Var11.f_2 = (0.016f + 0.003f);
			Var20.f_2 = (0.016f + 0.003f);
			Var29.f_2 = (0.016f + 0.003f);
			Var38.f_2 = (0.016f + 0.003f);
			Var47.f_2 = (0.016f + 0.003f);
			Var56.f_2 = (0.016f + 0.003f);
			Var65.f_2 = (0.016f + 0.003f);
			Var74.f_2 = (0.016f + 0.003f);
			Var11.f_3 = (0.032f + 0.004f);
			Var20.f_3 = (0.032f + 0.004f);
			Var29.f_3 = (0.032f + 0.004f);
			Var38.f_3 = (0.032f + 0.004f);
			Var47.f_3 = (0.032f + 0.004f);
			Var56.f_3 = (0.032f + 0.004f);
			Var65.f_3 = (0.032f + 0.004f);
			Var74.f_3 = (0.032f + 0.004f);
			Var11.f_7 = 255;
			Var20.f_7 = 255;
			Var29.f_7 = 255;
			Var38.f_7 = 255;
			Var47.f_7 = 255;
			Var56.f_7 = 255;
			Var65.f_7 = 255;
			Var74.f_7 = 255;
			func_97(&Var11, 1);
			func_97(&Var20, 1);
			func_97(&Var29, 1);
			func_97(&Var38, 1);
			func_97(&Var47, 1);
			func_97(&Var56, 1);
			func_97(&Var65, 1);
			func_97(&Var74, 1);
			StringCopy(&cVar87, "", 24);
			StringCopy(&Var93, "", 24);
			StringCopy(&cVar99, "", 24);
			StringCopy(&Var105, "", 24);
			StringCopy(&cVar111, "", 24);
			StringCopy(&Var117, "", 24);
			StringCopy(&cVar123, "", 24);
			StringCopy(&Var129, "", 24);
			iVar183 = 1;
			iVar184 = 1;
			iVar185 = 1;
			iVar186 = 1;
			iVar187 = 1;
			iVar188 = 1;
			iVar189 = 1;
			iVar190 = 1;
			func_134(&iParam11, &Var11, &cVar87, &cVar135, &iVar183, &uParam7, &uVar83, &Var20, &Var93, &cVar141, &iVar184, uParam5, 0);
			func_134(&iParam12, &Var29, &cVar99, &cVar147, &iVar185, &uParam8, &uVar84, &Var38, &Var105, &cVar153, &iVar186, uParam5, 0);
			func_134(&iParam13, &Var47, &cVar111, &cVar159, &iVar187, &uParam9, &uVar85, &Var56, &Var117, &cVar165, &iVar188, uParam5, 0);
			func_134(&iParam14, &Var65, &cVar123, &cVar171, &iVar189, &uParam10, &uVar86, &Var74, &Var129, &cVar177, &iVar190, uParam5, 0);
			if (bParam15)
			{
				if (bVar9)
				{
					func_137(iParam11, &Var11, &Var20, &cVar87, &cVar135, iVar183, &Var93, &cVar141, iVar184);
				}
			}
			else
			{
				func_137(iParam11, &Var11, &Var20, &cVar87, &cVar135, iVar183, &Var93, &cVar141, iVar184);
			}
			if (bParam16)
			{
				if (bVar9)
				{
					func_137(iParam12, &Var29, &Var38, &cVar99, &cVar147, iVar185, &Var105, &cVar153, iVar186);
				}
			}
			else
			{
				func_137(iParam12, &Var29, &Var38, &cVar99, &cVar147, iVar185, &Var105, &cVar153, iVar186);
			}
			if (bParam17)
			{
				if (bVar9)
				{
					func_137(iParam13, &Var47, &Var56, &cVar111, &cVar159, iVar187, &Var117, &cVar165, iVar188);
				}
			}
			else
			{
				func_137(iParam13, &Var47, &Var56, &cVar111, &cVar159, iVar187, &Var117, &cVar165, iVar188);
			}
			if (bParam18)
			{
				if (bVar9)
				{
					func_137(iParam14, &Var65, &Var74, &cVar123, &cVar171, iVar189, &Var129, &cVar177, iVar190);
				}
			}
			else
			{
				func_137(iParam14, &Var65, &Var74, &cVar123, &cVar171, iVar189, &Var129, &cVar177, iVar190);
			}
		}
		func_46();
	}
}

void func_137(int iParam0, var uParam1, var uParam2, char* sParam3, char* sParam4, int iParam5, char* sParam6, char* sParam7, int iParam8)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (!unk_0xAB6A270F84A8781E(sParam3))
	{
		unk_0xA08F3C300F9E3468(sParam3, 0);
		if (unk_0xAD9D75DD073BF477(sParam3))
		{
			func_97(uParam1, iParam5);
			func_89(sParam3, sParam4, uParam1, 1, 0, 4, 0);
		}
	}
	if (((((iParam0 == 27 || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 31) || iParam0 == 32)
	{
		unk_0xB4D5E37C91862216(2, &uVar0, &uVar1, &uVar2, &uVar3);
		unk_0x80B2E30CC8B794C0(*uParam1, uParam1->f_1, uParam1->f_2, uParam1->f_3, uVar0, uVar1, uVar2, 153, 0);
	}
	if ((((((((((((((iParam0 == 18 || iParam0 == 19) || iParam0 == 20) || iParam0 == 21) || iParam0 == 22) || iParam0 == 23) || iParam0 == 24) || iParam0 == 25) || iParam0 == 26) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 31) || iParam0 == 32)
	{
		if (!unk_0xAB6A270F84A8781E(sParam6))
		{
			unk_0xA08F3C300F9E3468(sParam6, 0);
			if (unk_0xAD9D75DD073BF477(sParam6))
			{
				func_97(uParam2, iParam8);
				func_89(sParam6, sParam7, uParam2, 1, 0, 4, 0);
			}
		}
	}
}

void func_138(int iParam0)
{
	func_16(&(Global_1380638.f_338[iParam0 /*2*/]));
	func_16(&(Global_1380638.f_359[iParam0 /*2*/]));
}

void func_139(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, bool bParam13, int iParam14, int iParam15)
{
	var uVar0;
	var uVar11;
	var uVar13;
	
	if (func_28(10, iParam0))
	{
		uVar13 = 4;
		func_140(iParam0, &uVar0, &uVar11, &uVar13, iParam1, iParam2, 1, sParam3, iParam4, iParam7, bParam6, iParam5, uParam8, iParam9, iParam10, sParam11, sParam12, bParam13, iParam14, iParam15);
	}
}

void func_140(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, int iParam11, var uParam12, int iParam13, int iParam14, char* sParam15, char* sParam16, bool bParam17, int iParam18, int iParam19)
{
	struct<9> Var0;
	bool bVar9;
	int iVar10;
	struct<9> Var11;
	
	Global_1380638++;
	if (func_124())
	{
		if (iParam13 == 2)
		{
		}
		func_110(10, iParam0);
		if (func_122())
		{
			func_153(uParam1, 0);
		}
		else if (bParam17)
		{
			func_119(uParam1, 0);
		}
		else if (bParam10)
		{
			func_120(uParam1, 3);
		}
		else
		{
			func_119(uParam1, 0);
		}
		if (Global_1380638 == 1)
		{
			func_109(iParam6);
		}
		func_149(uParam2, uParam3, &Var0, iParam6, uParam1);
		func_114(uParam1);
		uParam1->f_9 = (uParam1->f_9 + (0.03f * (1f - func_111())));
		if (iParam11 == 0)
		{
			func_148(iParam0);
		}
		if (iParam14 == 0)
		{
			func_147(iParam0);
		}
		if (func_99(iParam11, &(Global_1380638.f_296[iParam0 /*2*/]), &(Global_1380638.f_317[iParam0 /*2*/])))
		{
			bVar9 = true;
		}
		else
		{
			bVar9 = false;
		}
		unk_0xA08F3C300F9E3468("TimerBars", 0);
		if (unk_0xAD9D75DD073BF477("TimerBars"))
		{
			iVar10 = func_100();
			unk_0x0F33095580A670CE(iVar10);
			Var0 = *uParam2;
			Var0.f_1 = uParam2->f_1;
			Var0 = (Var0 + 0.079f);
			Var0.f_1 = (Var0.f_1 + 0.008f);
			Var0.f_2 = (Var0.f_2 + 0.157f);
			Var0.f_3 = (Var0.f_3 + 0.036f);
			Var0.f_4 += 255;
			Var0.f_5 += 255;
			Var0.f_6 += 255;
			Var0.f_7 = 140;
			if (func_122())
			{
				Var0 = (Var0 + -0.025f);
				Var0.f_2 = (Var0.f_2 + 0.05f);
			}
			Global_1380638.f_6797 = (Global_1380638.f_6797 + Var0.f_3);
			if (iParam14 > 0)
			{
				Var11 = { Var0 };
				if (func_247(&(Global_1380638.f_863[iParam0 /*2*/]), 2000, 0) == 0)
				{
					if (func_98(Global_1380638.f_863[iParam0 /*2*/], 1250, 0))
					{
						Global_1380638.f_884[iParam0] = (Global_1380638.f_884[iParam0] - 17);
					}
					Var11.f_7 = Global_1380638.f_884[iParam0];
					func_97(&Var11, iParam8);
					func_89("TimerBars", "ALL_WHITE_bg", &Var11, 1, 0, iVar10, 0);
				}
			}
			else
			{
				Global_1380638.f_884[iParam0] = 255;
				func_88(&(Global_1380638.f_863[iParam0 /*2*/]), 0, 0);
			}
			func_89("TimerBars", "ALL_BLACK_bg", &Var0, 1, 0, iVar10, 0);
			func_82(&Var0, iParam18);
			if (func_122())
			{
				if (bParam10)
				{
					if (unk_0xFA1A73C829B8839F() == 9 || unk_0xFA1A73C829B8839F() == 12)
					{
						uParam2->f_1 = (uParam2->f_1 + -0.009f);
					}
					else
					{
						uParam2->f_1 = (uParam2->f_1 + -0.003f);
					}
				}
				else if (unk_0xFA1A73C829B8839F() == 9 || unk_0xFA1A73C829B8839F() == 12)
				{
					uParam2->f_1 = (uParam2->f_1 + -0.012f);
				}
				else
				{
					uParam2->f_1 = (uParam2->f_1 + -0.008f);
				}
			}
			else if (bParam10)
			{
				uParam2->f_1 = (uParam2->f_1 + (-0.005f + 0.001f));
			}
			iVar10 = func_100();
			unk_0x0F33095580A670CE(iVar10);
			if (bParam17)
			{
				func_81(uParam1, iParam8);
				func_80(uParam1, 0);
				func_59(uParam2, uParam1, sParam7, "", iParam19, 2);
			}
			else if (bParam10 == 1)
			{
				func_81(uParam1, iParam8);
				func_80(uParam1, 0);
				func_59(uParam2, uParam1, sParam7, "", iParam19, 2);
			}
			else
			{
				func_80(uParam1, 0);
				if (iParam9 == -1)
				{
					func_78(uParam2, uParam1, sParam7, 0, 1);
				}
				else
				{
					func_57(uParam2, uParam1, sParam7, iParam9, 2);
				}
			}
			iVar10 = func_100();
			unk_0x0F33095580A670CE(iVar10);
			if (bVar9)
			{
				func_143(iParam4, iParam5, uParam3, iParam8, uParam12, iVar10);
				func_141(sParam15, uParam3, iVar10, sParam16);
			}
			func_46();
		}
	}
}

void func_141(char* sParam0, var uParam1, int iParam2, char* sParam3)
{
	struct<9> Var0[1];
	
	Var0[0 /*9*/] = 0f;
	Var0[0 /*9*/].f_1 = 0f;
	Var0[0 /*9*/].f_2 = -0.015f;
	Var0[0 /*9*/].f_3 = -0.025f;
	unk_0xA08F3C300F9E3468(sParam3, 0);
	if (unk_0xAD9D75DD073BF477(sParam3))
	{
		func_142(uParam1[0 /*9*/], &(Var0[0 /*9*/]));
		func_97(uParam1[0 /*9*/], 1);
		unk_0x0F33095580A670CE(iParam2);
		(uParam1[0 /*9*/])->f_7 = 255;
		func_89(sParam3, sParam0, uParam1[0 /*9*/], 0, 0, iParam2, 0);
		unk_0x0F33095580A670CE(iParam2);
	}
}

void func_142(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 + *uParam1);
	uParam0->f_1 = (uParam0->f_1 + uParam1->f_1);
	uParam0->f_2 = (uParam0->f_2 + uParam1->f_2);
	uParam0->f_3 = (uParam0->f_3 + uParam1->f_3);
	uParam0->f_4 = (uParam0->f_4 + uParam1->f_4);
	uParam0->f_5 = (uParam0->f_5 + uParam1->f_5);
	uParam0->f_6 = (uParam0->f_6 + uParam1->f_6);
	uParam0->f_7 = (uParam0->f_7 + uParam1->f_7);
}

void func_143(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, int iParam5)
{
	struct<9> Var0[2];
	float fVar19;
	
	Var0[0 /*9*/] = 0.003f;
	Var0[0 /*9*/].f_1 = -0.004f;
	Var0[0 /*9*/].f_2 = 0.011f;
	Var0[0 /*9*/].f_3 = 0.059f;
	Var0[1 /*9*/] = 0f;
	Var0[1 /*9*/].f_2 = 0.011f;
	Var0[1 /*9*/].f_3 = 0.059f;
	unk_0xA08F3C300F9E3468("TimerBars", 0);
	if (unk_0xAD9D75DD073BF477("TimerBars"))
	{
		func_142(uParam2[0 /*9*/], &(Var0[0 /*9*/]));
		func_142(uParam2[1 /*9*/], &(Var0[1 /*9*/]));
		*(uParam2[3 /*9*/]) = { *(uParam2[0 /*9*/]) };
		func_97(uParam2[1 /*9*/], iParam3);
		func_97(uParam2[3 /*9*/], iParam3);
		fVar19 = ((SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1)) * 100f);
		unk_0x0F33095580A670CE(iParam5);
		(uParam2[3 /*9*/])->f_7 = 51;
		func_89("TimerBars", "DamageBarFill_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
		func_97(uParam2[3 /*9*/], iParam3);
		(uParam2[3 /*9*/])->f_7 = 51;
		func_89("TimerBars", "DamageBarFill_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
		(uParam2[3 /*9*/])->f_7 = 255;
		func_144(*(uParam2[0 /*9*/]), fVar19, uParam2[1 /*9*/], 1, 1, uParam4, 0, 1);
		unk_0x0F33095580A670CE(iParam5);
		func_89("TimerBars", "DamageBarFill_128", uParam2[1 /*9*/], 0, 0, iParam5, 0);
		unk_0x0F33095580A670CE(iParam5);
	}
}

void func_144(struct<9> Param0, float fParam9, var uParam10, int iParam11, int iParam12, var uParam13, float fParam14, bool bParam15)
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
	float fVar10;
	
	fVar0 = Param0.f_2;
	fVar1 = 0f;
	fVar2 = func_146(Param0);
	fVar3 = fParam9;
	if (fParam9 < 0f)
	{
		fVar3 = 0f;
	}
	if (fParam9 > 100f)
	{
		fVar3 = 100f;
	}
	if (bParam15)
	{
		if (fParam9 > 95f && fParam9 < 100f)
		{
			fVar3 = 96f;
		}
	}
	if (iParam12 == 0)
	{
		fVar4 = ((fVar1 - fVar0) / 100f);
		fVar5 = fVar3;
		fVar6 = fVar0;
		fVar7 = ((fVar4 * fVar5) + fVar6);
		fVar2 = Param0;
		fVar8 = func_145(Param0);
		fVar9 = (fVar8 - (fVar7 / 2f));
	}
	else
	{
		fVar4 = ((fVar0 - fVar1) / 100f);
		fVar5 = fVar3;
		fVar6 = 0f;
		fVar7 = ((fVar4 * fVar5) + fVar6);
		if (fParam9 >= 100f)
		{
			fVar7 = Param0.f_2;
		}
		fVar8 = Param0;
		fVar4 = ((fVar8 - fVar2) / 100f);
		fVar5 = fVar3;
		fVar6 = fVar2;
		fVar9 = ((fVar4 * fVar5) + fVar6);
	}
	if (fParam14 > 0f && fParam14 < 100f)
	{
		fVar10 = (Param0.f_2 * 0.01f);
		fVar9 = (fVar9 + (fParam14 * fVar10));
	}
	*uParam10 = fVar9;
	uParam10->f_1 = Param0.f_1;
	uParam10->f_2 = fVar7;
	if (iParam11 == 1)
	{
		uParam10->f_3 = Param0.f_3;
	}
	uParam10->f_8 = Param0.f_8;
}

float func_145(struct<3> Param0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8)
{
	float fVar0;
	float fVar1;
	
	fVar0 = (Param0.f_2 / 2f);
	fVar1 = Param0.x;
	fVar1 = (fVar1 + fVar0);
	fVar1 = (fVar1 - 0.002f);
	return fVar1;
}

float func_146(struct<3> Param0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8)
{
	float fVar0;
	float fVar1;
	
	fVar0 = (Param0.f_2 / 2f);
	fVar1 = Param0.x;
	fVar1 = (fVar1 - fVar0);
	return fVar1;
}

void func_147(int iParam0)
{
	func_16(&(Global_1380638.f_758[iParam0 /*2*/]));
	func_16(&(Global_1380638.f_779[iParam0 /*2*/]));
}

void func_148(int iParam0)
{
	func_16(&(Global_1380638.f_296[iParam0 /*2*/]));
	func_16(&(Global_1380638.f_317[iParam0 /*2*/]));
	Global_1380638.f_1135.f_205[iParam0] = -1;
}

void func_149(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4)
{
	float fVar0;
	
	fVar0 = func_152(0, 1);
	*uParam0 = 0.795f;
	uParam0->f_1 = func_70(iParam3);
	uParam0->f_1 = (uParam0->f_1 + func_107(uParam4));
	func_150(uParam1, iParam3, -1f, -1f);
	func_105(iParam3, -fVar0);
	func_123(uParam2, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
}

void func_150(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;
	float fVar1;
	
	if (!func_151(fParam2, fParam3))
	{
		fVar0 = (func_71() + func_70(iParam1));
		fVar1 = func_69();
	}
	else
	{
		fVar0 = fParam3;
		fVar1 = fParam2;
	}
	(*uParam0)[0 /*9*/] = fVar1;
	(uParam0[0 /*9*/])->f_1 = fVar0;
	(uParam0[0 /*9*/])->f_2 = 0.062f;
	(uParam0[0 /*9*/])->f_3 = 0.016f;
	(uParam0[0 /*9*/])->f_4 = 255;
	(uParam0[0 /*9*/])->f_5 = 255;
	(uParam0[0 /*9*/])->f_6 = 0;
	(uParam0[0 /*9*/])->f_7 = 250;
	(*uParam0)[1 /*9*/] = fVar1;
	(uParam0[1 /*9*/])->f_1 = fVar0;
	(uParam0[1 /*9*/])->f_2 = 0.069f;
	(uParam0[1 /*9*/])->f_3 = 0.011f;
	(uParam0[1 /*9*/])->f_4 = 255;
	(uParam0[1 /*9*/])->f_5 = 255;
	(uParam0[1 /*9*/])->f_6 = 0;
	(uParam0[1 /*9*/])->f_7 = 250;
	(*uParam0)[2 /*9*/] = fVar1;
	(uParam0[2 /*9*/])->f_1 = fVar0;
	(uParam0[2 /*9*/])->f_2 = 0.069f;
	(uParam0[2 /*9*/])->f_3 = 0.009f;
	(uParam0[2 /*9*/])->f_4 = 0;
	(uParam0[2 /*9*/])->f_5 = 0;
	(uParam0[2 /*9*/])->f_6 = 0;
	(uParam0[2 /*9*/])->f_7 = 120;
	(*uParam0)[3 /*9*/] = fVar1;
	(uParam0[3 /*9*/])->f_1 = fVar0;
	(uParam0[3 /*9*/])->f_2 = 0.069f;
	(uParam0[3 /*9*/])->f_3 = 0.008f;
	(uParam0[3 /*9*/])->f_4 = 0;
	(uParam0[3 /*9*/])->f_5 = 0;
	(uParam0[3 /*9*/])->f_6 = 0;
	(uParam0[3 /*9*/])->f_7 = 90;
}

int func_151(float fParam0, float fParam1)
{
	if (fParam0 == -1f && fParam1 == -1f)
	{
		return 0;
	}
	return 1;
}

float func_152(int iParam0, bool bParam1)
{
	float fVar0;
	
	fVar0 = ((0.025f + 0.006f) + 0.0009f);
	if (iParam0 == 1)
	{
		fVar0 = (fVar0 + 0.008f);
	}
	if (bParam1)
	{
		fVar0 = (fVar0 + 0.008f);
	}
	return fVar0;
}

void func_153(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (0.508f - 0.03f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 20;
}

void func_154(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar11;
	
	if (func_28(9, iParam0))
	{
		func_155(iParam0, &uVar0, &uVar11, 1, iParam1, iParam2);
	}
}

void func_155(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	float fVar4;
	var uVar5;
	
	Global_1380638++;
	if (func_124())
	{
		func_159();
		unk_0xB4D5E37C91862216(iParam5, &uVar0, &uVar1, &uVar2, &uVar3);
		func_158(uParam1, 3, uVar0, uVar1, uVar2);
		if (func_122())
		{
			uParam1->f_1 = 2f;
			uParam1->f_2 = 2.7f;
		}
		if (Global_1380638 == 1)
		{
			func_109(iParam3);
		}
		fVar4 = 0.131f;
		if (unk_0xFA1A73C829B8839F() == 8)
		{
			fVar4 = 0.0872f;
		}
		else if (unk_0xFA1A73C829B8839F() == 10)
		{
			fVar4 = 0.095f;
		}
		*uParam2 = 0.795f;
		uParam2->f_1 = ((func_70(iParam3) + func_106(uParam1)) - fVar4);
		func_113(uParam1);
		func_80(uParam1, 0);
		func_110(9, iParam0);
		func_157(&uVar5, iParam4);
		func_78(uParam2, uParam1, func_156(&uVar5), 0, 1);
		func_46();
	}
}

var func_156(var uParam0)
{
	return uParam0;
}

void func_157(var uParam0, int iParam1)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "RACE_POS_", 16);
	StringIntConCat(&Var0, iParam1, 16);
	*uParam0 = { Var0 };
}

void func_158(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam0 = 6;
	uParam0->f_1 = 3f;
	uParam0->f_2 = 3.7f;
	uParam0->f_3 = uParam2;
	uParam0->f_4 = uParam3;
	uParam0->f_5 = uParam4;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 11;
}

void func_159()
{
	unk_0xEFD424FDD55A6EC7(7);
	unk_0xEFD424FDD55A6EC7(6);
	unk_0xEFD424FDD55A6EC7(8);
	unk_0xEFD424FDD55A6EC7(9);
}

void func_160(int iParam0, char* sParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6)
{
	var uVar0;
	var uVar11;
	var uVar13;
	
	if (func_28(8, iParam0))
	{
		uVar13 = 2;
		func_161(iParam0, &uVar0, &uVar11, &uVar13, 1, sParam1, iParam3, uParam2, uParam4, uParam5, uParam6);
	}
}

void func_161(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, char* sParam5, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10)
{
	struct<9> Var0;
	struct<8> Var9;
	
	Global_1380638++;
	if (func_124())
	{
		func_123(&Var9, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		func_119(uParam1, 0);
		func_114(uParam1);
		func_110(8, iParam0);
		if (Global_1380638 == 1)
		{
			func_109(iParam4);
		}
		func_162(uParam2, iParam4, uParam1, &Var0);
		unk_0xA08F3C300F9E3468("TimerBars", 0);
		unk_0xA08F3C300F9E3468("Hunting", 0);
		if (unk_0xAD9D75DD073BF477("TimerBars") && unk_0xAD9D75DD073BF477("Hunting"))
		{
			Var9 = *uParam2;
			Var9.f_1 = uParam2->f_1;
			Var9 = (Var9 + 0.079f);
			Var9.f_1 = (Var9.f_1 + 0.008f);
			Var9.f_2 = (Var9.f_2 + 0.157f);
			Var9.f_3 = (Var9.f_3 + 0.036f);
			Var9.f_4 += 255;
			Var9.f_5 += 255;
			Var9.f_6 += 255;
			Var9.f_7 = 140;
			if (func_122())
			{
				Var9 = (Var9 + -0.025f);
				Var9.f_2 = (Var9.f_2 + 0.05f);
			}
			Global_1380638.f_6797 = (Global_1380638.f_6797 + Var9.f_3);
			func_89("TimerBars", "ALL_BLACK_bg", &Var9, 1, 0, 4, 0);
			Var0.f_4 = uParam8;
			Var0.f_5 = uParam9;
			Var0.f_6 = uParam10;
			Var0.f_7 = 255;
			Var0.f_8 = uParam7;
			func_89("Hunting", "HuntingWindArrow_32", &Var0, 1, 0, 4, 0);
			uParam1->f_3 = uParam8;
			uParam1->f_4 = uParam9;
			uParam1->f_5 = uParam10;
			uParam1->f_6 = 255;
			func_80(uParam1, 0);
			uParam7 = uParam7;
			(*uParam3)[0 /*9*/] = (*uParam3)[0 /*9*/];
			func_57(uParam2, uParam1, sParam5, iParam6, 2);
			func_46();
		}
	}
}

void func_162(var uParam0, int iParam1, var uParam2, var uParam3)
{
	float fVar0;
	
	fVar0 = func_152(0, 0);
	*uParam0 = 0.795f;
	uParam0->f_1 = func_70(iParam1);
	uParam0->f_1 = (uParam0->f_1 + func_107(uParam2));
	func_105(iParam1, -fVar0);
	uParam0->f_1 = (uParam0->f_1 + func_107(uParam2));
	*uParam3 = 0.9375f;
	uParam3->f_1 = (uParam0->f_1 + 0.009f);
	uParam3->f_2 = 0.02f;
	uParam3->f_3 = 0.02f;
}

void func_163(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15, bool bParam16, float fParam17, float fParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, int iParam35, int iParam36, int iParam37, int iParam38, int iParam39, int iParam40, int iParam41, int iParam42, int iParam43, int iParam44, int iParam45, bool bParam46, int iParam47, int iParam48, int iParam49, int iParam50, int iParam51, int iParam52, int iParam53, int iParam54, int iParam55)
{
	var uVar0;
	var uVar11;
	var uVar13;
	var uVar95;
	
	if (func_28(2, iParam0))
	{
		uVar13 = 9;
		if (iParam1 < 9)
		{
			func_164(iParam0, &uVar0, &uVar11, &uVar13, &uVar95, iParam1, 1, iParam3, iParam4, sParam2, iParam5, uParam6, uParam7, uParam8, uParam9, uParam10, uParam11, uParam12, uParam13, iParam14, iParam15, bParam16, fParam17, fParam18, uParam19, uParam20, uParam21, uParam22, uParam23, uParam24, uParam25, uParam26, uParam27, uParam28, uParam29, uParam30, uParam31, uParam32, uParam33, uParam34, iParam35, iParam36, iParam37, iParam38, iParam39, iParam40, iParam41, iParam42, iParam43, iParam44, iParam45, bParam46, iParam47, iParam48, iParam49, iParam50, iParam51, iParam52, iParam53, iParam54, iParam55);
		}
	}
}

void func_164(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, int iParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19, int iParam20, bool bParam21, float fParam22, float fParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, int iParam40, int iParam41, int iParam42, int iParam43, int iParam44, int iParam45, int iParam46, int iParam47, int iParam48, int iParam49, int iParam50, bool bParam51, int iParam52, int iParam53, int iParam54, int iParam55, int iParam56, int iParam57, int iParam58, int iParam59, int iParam60)
{
	struct<9> Var0;
	bool bVar9;
	int iVar10;
	struct<9> Var11;
	
	Global_1380638++;
	if (func_124())
	{
		if (iParam40 == 2)
		{
		}
		func_110(2, iParam0);
		if (Global_1380638 == 1)
		{
			func_109(iParam6);
		}
		func_171(uParam2, uParam3, &Var0, uParam4, iParam6, fParam22, fParam23, uParam1);
		if (func_122())
		{
			func_153(uParam1, 0);
		}
		else if (bParam51)
		{
			func_119(uParam1, 0);
		}
		else if (bParam21)
		{
			func_120(uParam1, 3);
		}
		else
		{
			func_119(uParam1, 0);
		}
		func_114(uParam1);
		uParam1->f_9 = (uParam1->f_9 + (0.03f * (1f - func_111())));
		if (iParam19 == 0)
		{
			func_170(iParam0);
		}
		if (iParam41 == 0)
		{
			func_169(iParam0);
		}
		iVar10 = func_100();
		unk_0x0F33095580A670CE(iVar10);
		unk_0xA08F3C300F9E3468("TimerBars", 0);
		if (unk_0xAD9D75DD073BF477("TimerBars"))
		{
			if (func_99(iParam19, &(Global_1380638.f_212[iParam0 /*2*/]), &(Global_1380638.f_233[iParam0 /*2*/])))
			{
				bVar9 = true;
			}
			else
			{
				bVar9 = false;
			}
			if (!func_151(fParam22, fParam23))
			{
				Var0 = *uParam2;
				Var0.f_1 = uParam2->f_1;
				Var0 = (Var0 + 0.079f);
				Var0.f_1 = (Var0.f_1 + 0.012f);
				Var0.f_2 = (Var0.f_2 + 0.157f);
				Var0.f_3 = (Var0.f_3 + 0.028f);
				Var0.f_4 += 255;
				Var0.f_5 += 255;
				Var0.f_6 += 255;
				Var0.f_7 = 140;
				if (func_122())
				{
					Var0 = (Var0 + -0.025f);
					Var0.f_2 = (Var0.f_2 + 0.05f);
				}
				Global_1380638.f_6797 = (Global_1380638.f_6797 + Var0.f_3);
				if (iParam41 > 0)
				{
					Var11 = { Var0 };
					if (func_247(&(Global_1380638.f_1023[iParam0 /*2*/]), 2000, 0) == 0)
					{
						if (func_98(Global_1380638.f_1023[iParam0 /*2*/], 1250, 0))
						{
							Global_1380638.f_1044[iParam0] = (Global_1380638.f_1044[iParam0] - 17);
						}
						Var11.f_7 = Global_1380638.f_1044[iParam0];
						func_97(&Var11, iParam7);
						func_89("TimerBars", "ALL_WHITE_bg", &Var11, 1, 0, iVar10, 0);
					}
				}
				else
				{
					Global_1380638.f_1044[iParam0] = 255;
					func_88(&(Global_1380638.f_1023[iParam0 /*2*/]), 0, 0);
				}
				func_89("TimerBars", "ALL_BLACK_bg", &Var0, 1, 0, iVar10, 0);
			}
			func_82(&Var0, iParam52);
			iVar10 = func_100();
			unk_0x0F33095580A670CE(iVar10);
			func_81(uParam1, iParam42);
			if (unk_0xFA1A73C829B8839F() == 9 || unk_0xFA1A73C829B8839F() == 12)
			{
				uParam2->f_1 = (uParam2->f_1 + -0.009f);
			}
			else
			{
				uParam2->f_1 = (uParam2->f_1 + -0.003f);
			}
			if (func_122())
			{
				if (unk_0xFA1A73C829B8839F() == 9 || unk_0xFA1A73C829B8839F() == 12)
				{
					uParam2->f_1 = (uParam2->f_1 + -0.009f);
				}
				else
				{
					uParam2->f_1 = (uParam2->f_1 + -0.007f);
				}
			}
			if (func_122() == 0)
			{
				if (bParam51)
				{
					uParam2->f_1 = (uParam2->f_1 + 0.003f);
				}
				else if (bParam21)
				{
					uParam2->f_1 = (uParam2->f_1 + -0.002f);
				}
			}
			else if (bParam21)
			{
				uParam2->f_1 = (uParam2->f_1 + 0.007f);
			}
			else
			{
				uParam2->f_1 = (uParam2->f_1 + 0.003f);
			}
			if (!func_151(fParam22, fParam23))
			{
				func_80(uParam1, 0);
				if (bParam51)
				{
					func_59(uParam2, uParam1, sParam9, "", iParam42, 2);
				}
				else if (bParam21 == 1)
				{
					func_59(uParam2, uParam1, sParam9, "", iParam42, 2);
				}
				else if (iParam20 == -1)
				{
					func_78(uParam2, uParam1, sParam9, 0, 1);
				}
				else
				{
					uParam2->f_1 = (uParam2->f_1 - -0.003f);
					func_57(uParam2, uParam1, sParam9, iParam20, 2);
				}
			}
			if (bVar9)
			{
				func_165(iParam5, uParam3, iParam7, iParam8, iParam10, uParam11, uParam12, uParam13, uParam14, uParam15, uParam16, uParam17, uParam18, uParam24, uParam25, uParam26, uParam27, uParam28, uParam29, uParam30, uParam31, uParam32, uParam33, uParam34, uParam35, uParam36, uParam37, uParam38, uParam39, iVar10, iParam43, iParam44, iParam45, iParam46, iParam47, iParam48, iParam49, iParam50, iParam53, iParam54, iParam55, iParam56, iParam57, iParam58, iParam59, iParam60);
			}
			func_46();
		}
	}
}

void func_165(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36, int iParam37, int iParam38, int iParam39, int iParam40, int iParam41, int iParam42, int iParam43, int iParam44, int iParam45)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	struct<9> Var5;
	bool bVar14;
	
	unk_0xA08F3C300F9E3468("TimerBars", 0);
	unk_0xA08F3C300F9E3468("Cross", 0);
	if (unk_0xAD9D75DD073BF477("TimerBars") && unk_0xAD9D75DD073BF477("Cross"))
	{
		fVar3 = -0.0094f;
		iVar4 = 0;
		while (iVar4 <= (iParam0 - 1))
		{
			(*uParam1)[iVar4 /*9*/] = ((*uParam1)[iVar4 /*9*/] + (fVar3 * IntToFloat(iVar4)));
			if (func_168(iVar4, iParam4))
			{
				switch (iVar4)
				{
					case 0:
						bVar0 = uParam5;
						iVar1 = uParam13;
						iVar2 = uParam21;
						break;
					
					case 1:
						bVar0 = uParam6;
						iVar1 = uParam14;
						iVar2 = uParam22;
						break;
					
					case 2:
						bVar0 = uParam7;
						iVar1 = uParam15;
						iVar2 = uParam23;
						break;
					
					case 3:
						bVar0 = uParam8;
						iVar1 = uParam16;
						iVar2 = uParam24;
						break;
					
					case 4:
						bVar0 = uParam9;
						iVar1 = uParam17;
						iVar2 = uParam25;
						break;
					
					case 5:
						bVar0 = uParam10;
						iVar1 = uParam18;
						iVar2 = uParam26;
						break;
					
					case 6:
						bVar0 = uParam11;
						iVar1 = uParam19;
						iVar2 = uParam27;
						break;
					
					case 7:
						bVar0 = uParam12;
						iVar1 = uParam20;
						iVar2 = uParam28;
						break;
				}
				bVar14 = false;
				if (iVar2 == 2)
				{
					bVar14 = true;
					iVar2 = 1;
				}
				Var5 = { func_167(*(uParam1[iVar4 /*9*/]), bVar0, iParam2, iParam3, iVar1, iVar2) };
				if (bVar14)
				{
					Var5.f_7 = 51;
				}
				func_89("TimerBars", "Circle_checkpoints", &Var5, 0, 0, iParam29, 0);
				if (func_166(iVar4, iParam30, iParam31, iParam32, iParam33, iParam34, iParam35, iParam36, iParam37))
				{
					switch (iVar4)
					{
						case 0:
							func_97(uParam1[iVar4 /*9*/], iParam38);
							break;
						
						case 1:
							func_97(uParam1[iVar4 /*9*/], iParam39);
							break;
						
						case 2:
							func_97(uParam1[iVar4 /*9*/], iParam40);
							break;
						
						case 3:
							func_97(uParam1[iVar4 /*9*/], iParam41);
							break;
						
						case 4:
							func_97(uParam1[iVar4 /*9*/], iParam42);
							break;
						
						case 5:
							func_97(uParam1[iVar4 /*9*/], iParam43);
							break;
						
						case 6:
							func_97(uParam1[iVar4 /*9*/], iParam44);
							break;
						
						case 7:
							func_97(uParam1[iVar4 /*9*/], iParam45);
							break;
					}
					func_89("Cross", "Circle_checkpoints_Cross", uParam1[iVar4 /*9*/], 0, 0, iParam29, 0);
				}
			}
			iVar4++;
		}
	}
}

int func_166(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	if (iParam0 == 0 && iParam1 == 1)
	{
		return 1;
	}
	if (iParam0 == 1 && iParam2 == 1)
	{
		return 1;
	}
	if (iParam0 == 2 && iParam3 == 1)
	{
		return 1;
	}
	if (iParam0 == 3 && iParam4 == 1)
	{
		return 1;
	}
	if (iParam0 == 4 && iParam5 == 1)
	{
		return 1;
	}
	if (iParam0 == 5 && iParam6 == 1)
	{
		return 1;
	}
	if (iParam0 == 6 && iParam7 == 1)
	{
		return 1;
	}
	if (iParam0 == 7 && iParam8 == 1)
	{
		return 1;
	}
	return 0;
}

struct<9> func_167(struct<9> Param0, bool bParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	struct<9> Var0;
	
	Var0 = { Param0 };
	if (iParam12 == 0)
	{
		if (bParam9)
		{
			func_97(&Var0, iParam10);
		}
		else
		{
			func_97(&Var0, iParam11);
		}
	}
	else if (bParam9)
	{
		func_97(&Var0, iParam12);
	}
	else
	{
		func_97(&Var0, iParam13);
	}
	if (bParam9 == 0)
	{
	}
	return Var0;
}

int func_168(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	if (iParam0 > iParam1)
	{
		return 0;
	}
	return 1;
}

void func_169(int iParam0)
{
	func_16(&(Global_1380638.f_674[iParam0 /*2*/]));
	func_16(&(Global_1380638.f_695[iParam0 /*2*/]));
}

void func_170(int iParam0)
{
	func_16(&(Global_1380638.f_212[iParam0 /*2*/]));
	func_16(&(Global_1380638.f_233[iParam0 /*2*/]));
}

void func_171(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, float fParam5, float fParam6, var uParam7)
{
	float fVar0;
	
	fVar0 = func_152(0, 0);
	*uParam0 = 0.795f;
	uParam0->f_1 = func_70(iParam4);
	uParam0->f_1 = (uParam0->f_1 + func_107(uParam7));
	func_173(uParam1, iParam4, fParam5, fParam6);
	func_172(uParam3);
	if (!func_151(fParam5, fParam6))
	{
		func_105(iParam4, -fVar0);
	}
	func_123(uParam2, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
}

void func_172(var uParam0)
{
	*uParam0 = 0.851f;
	uParam0->f_1 = 0.075f;
	uParam0->f_2 = 0.001f;
	uParam0->f_3 = 0.009f;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 250;
}

void func_173(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;
	float fVar1;
	
	if (!func_151(fParam2, fParam3))
	{
		fVar0 = (func_71() + func_70(iParam1));
		fVar1 = func_174();
	}
	else
	{
		fVar0 = fParam3;
		fVar1 = fParam2;
	}
	(*uParam0)[0 /*9*/] = fVar1;
	(uParam0[0 /*9*/])->f_1 = fVar0;
	(uParam0[0 /*9*/])->f_2 = 0.012f;
	(uParam0[0 /*9*/])->f_3 = 0.023f;
	(uParam0[0 /*9*/])->f_4 = 0;
	(uParam0[0 /*9*/])->f_5 = 0;
	(uParam0[0 /*9*/])->f_6 = 0;
	(uParam0[0 /*9*/])->f_7 = 250;
	(*uParam0)[1 /*9*/] = fVar1;
	(uParam0[1 /*9*/])->f_1 = fVar0;
	(uParam0[1 /*9*/])->f_2 = 0.012f;
	(uParam0[1 /*9*/])->f_3 = 0.023f;
	(uParam0[1 /*9*/])->f_4 = 0;
	(uParam0[1 /*9*/])->f_5 = 0;
	(uParam0[1 /*9*/])->f_6 = 0;
	(uParam0[1 /*9*/])->f_7 = 250;
	(*uParam0)[2 /*9*/] = fVar1;
	(uParam0[2 /*9*/])->f_1 = fVar0;
	(uParam0[2 /*9*/])->f_2 = 0.012f;
	(uParam0[2 /*9*/])->f_3 = 0.023f;
	(uParam0[2 /*9*/])->f_4 = 0;
	(uParam0[2 /*9*/])->f_5 = 0;
	(uParam0[2 /*9*/])->f_6 = 0;
	(uParam0[2 /*9*/])->f_7 = 250;
	(*uParam0)[3 /*9*/] = fVar1;
	(uParam0[3 /*9*/])->f_1 = fVar0;
	(uParam0[3 /*9*/])->f_2 = 0.012f;
	(uParam0[3 /*9*/])->f_3 = 0.023f;
	(uParam0[3 /*9*/])->f_4 = 0;
	(uParam0[3 /*9*/])->f_5 = 0;
	(uParam0[3 /*9*/])->f_6 = 0;
	(uParam0[3 /*9*/])->f_7 = 250;
	(*uParam0)[4 /*9*/] = fVar1;
	(uParam0[4 /*9*/])->f_1 = fVar0;
	(uParam0[4 /*9*/])->f_2 = 0.012f;
	(uParam0[4 /*9*/])->f_3 = 0.023f;
	(uParam0[4 /*9*/])->f_4 = 0;
	(uParam0[4 /*9*/])->f_5 = 0;
	(uParam0[4 /*9*/])->f_6 = 0;
	(uParam0[4 /*9*/])->f_7 = 250;
	(*uParam0)[5 /*9*/] = fVar1;
	(uParam0[5 /*9*/])->f_1 = fVar0;
	(uParam0[5 /*9*/])->f_2 = 0.012f;
	(uParam0[5 /*9*/])->f_3 = 0.023f;
	(uParam0[5 /*9*/])->f_4 = 0;
	(uParam0[5 /*9*/])->f_5 = 0;
	(uParam0[5 /*9*/])->f_6 = 0;
	(uParam0[5 /*9*/])->f_7 = 250;
	(*uParam0)[6 /*9*/] = fVar1;
	(uParam0[6 /*9*/])->f_1 = fVar0;
	(uParam0[6 /*9*/])->f_2 = 0.012f;
	(uParam0[6 /*9*/])->f_3 = 0.023f;
	(uParam0[6 /*9*/])->f_4 = 0;
	(uParam0[6 /*9*/])->f_5 = 0;
	(uParam0[6 /*9*/])->f_6 = 0;
	(uParam0[6 /*9*/])->f_7 = 250;
	(*uParam0)[7 /*9*/] = fVar1;
	(uParam0[7 /*9*/])->f_1 = fVar0;
	(uParam0[7 /*9*/])->f_2 = 0.012f;
	(uParam0[7 /*9*/])->f_3 = 0.023f;
	(uParam0[7 /*9*/])->f_4 = 0;
	(uParam0[7 /*9*/])->f_5 = 0;
	(uParam0[7 /*9*/])->f_6 = 0;
	(uParam0[7 /*9*/])->f_7 = 250;
}

float func_174()
{
	float fVar0;
	
	fVar0 = ((((((((0.919f - 0.081f) + 0.004f) - 0.006f) + 0.05f) - 0.001f) - 0.005f) + 0.065f) - 0.0005f);
	return fVar0;
}

void func_175(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, bool bParam6, char* sParam7, int iParam8, float fParam9, int iParam10, int iParam11, int iParam12, bool bParam13, int iParam14, bool bParam15, int iParam16, int iParam17, bool bParam18, int iParam19, int iParam20, bool bParam21, int iParam22, bool bParam23, bool bParam24, int iParam25)
{
	var uVar0;
	var uVar11;
	var uVar22;
	var uVar24;
	
	if (func_28(6, iParam0))
	{
		func_45(iParam0, &uVar0, &uVar11, &uVar22, &uVar24, iParam1, 1, sParam2, iParam3, iParam4, iParam5, bParam6, sParam7, iParam8, fParam9, iParam10, iParam11, iParam12, bParam13, iParam14, bParam15, iParam16, iParam17, "", bParam18, iParam19, iParam20, bParam21, iParam22, bParam23, bParam24, iParam25, 0, 0, -1, 0, 0, 0, 0);
	}
}

void func_176(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, float fParam6, float fParam7, bool bParam8, int iParam9, var uParam10, int iParam11, int iParam12, bool bParam13, int iParam14, bool bParam15, int iParam16, int iParam17, int iParam18, bool bParam19, int iParam20, bool bParam21, int iParam22, int iParam23, int iParam24, bool bParam25, float fParam26, float fParam27, bool bParam28, int iParam29, float fParam30, bool bParam31, int iParam32, int iParam33, float fParam34, int iParam35, bool bParam36)
{
	var uVar0;
	var uVar11;
	var uVar13;
	
	if (func_28(0, iParam0))
	{
		uVar13 = 4;
		func_177(iParam0, &uVar0, &uVar11, &uVar13, iParam1, iParam2, 1, sParam3, iParam4, iParam9, bParam8, iParam5, fParam6, fParam7, uParam10, iParam11, iParam12, bParam13, iParam14, bParam15, iParam16, iParam17, iParam18, bParam19, iParam20, bParam21, iParam22, iParam23, iParam24, bParam25, fParam26, fParam27, bParam28, iParam29, fParam30, bParam31, iParam32, iParam33, fParam34, iParam35, bParam36);
	}
}

void func_177(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, int iParam11, float fParam12, float fParam13, var uParam14, int iParam15, int iParam16, bool bParam17, int iParam18, bool bParam19, int iParam20, int iParam21, int iParam22, bool bParam23, int iParam24, bool bParam25, int iParam26, int iParam27, int iParam28, bool bParam29, float fParam30, float fParam31, bool bParam32, int iParam33, float fParam34, bool bParam35, int iParam36, int iParam37, float fParam38, int iParam39, bool bParam40)
{
	struct<9> Var0;
	bool bVar9;
	int iVar10;
	struct<9> Var11;
	float fVar20;
	float fVar21;
	struct<8> Var22;
	
	Global_1380638++;
	if (func_124())
	{
		if (iParam15 == 2)
		{
		}
		func_110(0, iParam0);
		if (func_122())
		{
			if (bParam17)
			{
				func_185(uParam1, 0);
			}
			else
			{
				func_153(uParam1, 0);
			}
		}
		else if (bParam19)
		{
			func_119(uParam1, 0);
		}
		else if (bParam10)
		{
			func_120(uParam1, 3);
		}
		else if (bParam17)
		{
			func_184(uParam1, 0);
		}
		else
		{
			func_119(uParam1, 0);
		}
		if (Global_1380638 == 1)
		{
			func_109(iParam6);
		}
		func_183(uParam2, uParam3, &Var0, iParam6, fParam12, fParam13, uParam1, bParam17);
		func_114(uParam1);
		uParam1->f_9 = (uParam1->f_9 + (0.03f * (1f - func_111())));
		if (iParam11 == 0)
		{
			func_148(iParam0);
		}
		if (iParam16 == 0)
		{
			func_147(iParam0);
		}
		if (func_99(iParam11, &(Global_1380638.f_296[iParam0 /*2*/]), &(Global_1380638.f_317[iParam0 /*2*/])))
		{
			bVar9 = true;
		}
		else
		{
			bVar9 = false;
		}
		unk_0xA08F3C300F9E3468("TimerBars", 0);
		if (unk_0xAD9D75DD073BF477("TimerBars"))
		{
			iVar10 = func_100();
			unk_0x0F33095580A670CE(iVar10);
			if (!func_151(fParam12, fParam13))
			{
				Var0 = *uParam2;
				Var0.f_1 = uParam2->f_1;
				if (bParam17)
				{
					Var0 = (Var0 + 0.079f);
					Var0.f_1 = (Var0.f_1 + 0.008f);
					Var0.f_2 = (Var0.f_2 + 0.157f);
					Var0.f_3 = (Var0.f_3 + 0.036f);
					Var0.f_4 += 255;
					Var0.f_5 += 255;
					Var0.f_6 += 255;
					Var0.f_7 = 140;
				}
				else
				{
					Var0 = (Var0 + 0.079f);
					Var0.f_1 = (Var0.f_1 + 0.012f);
					Var0.f_2 = (Var0.f_2 + 0.157f);
					Var0.f_3 = (Var0.f_3 + 0.028f);
					Var0.f_4 += 255;
					Var0.f_5 += 255;
					Var0.f_6 += 255;
					Var0.f_7 = 140;
				}
				if (func_122())
				{
					Var0 = (Var0 + -0.025f);
					Var0.f_2 = (Var0.f_2 + 0.05f);
				}
				Global_1380638.f_6797 = (Global_1380638.f_6797 + Var0.f_3);
				if (iParam16 > 0)
				{
					Var11 = { Var0 };
					if (func_247(&(Global_1380638.f_863[iParam0 /*2*/]), 2000, 0) == 0)
					{
						if (func_98(Global_1380638.f_863[iParam0 /*2*/], 1250, 0))
						{
							Global_1380638.f_884[iParam0] = (Global_1380638.f_884[iParam0] - 17);
						}
						Var11.f_7 = Global_1380638.f_884[iParam0];
						func_97(&Var11, iParam8);
						func_89("TimerBars", "ALL_WHITE_bg", &Var11, 1, 0, iVar10, 0);
					}
				}
				else
				{
					Global_1380638.f_884[iParam0] = 255;
					func_88(&(Global_1380638.f_863[iParam0 /*2*/]), 0, 0);
				}
				func_89("TimerBars", "ALL_BLACK_bg", &Var0, 1, 0, iVar10, 0);
			}
			func_82(&Var0, iParam21);
			if (func_122())
			{
				if (bParam17)
				{
					uParam2->f_1 = (uParam2->f_1 + -0.01f);
				}
				else if (bParam10)
				{
					if (unk_0xFA1A73C829B8839F() == 9 || unk_0xFA1A73C829B8839F() == 12)
					{
						uParam2->f_1 = (uParam2->f_1 + -0.009f);
					}
					else
					{
						uParam2->f_1 = (uParam2->f_1 + -0.003f);
					}
				}
				else if (bParam17 == 0)
				{
					if (unk_0xFA1A73C829B8839F() == 9 || unk_0xFA1A73C829B8839F() == 12)
					{
						uParam2->f_1 = (uParam2->f_1 + -0.009f);
					}
					else
					{
						uParam2->f_1 = (uParam2->f_1 + -0.003f);
					}
				}
				else if (unk_0xFA1A73C829B8839F() == 9 || unk_0xFA1A73C829B8839F() == 12)
				{
					uParam2->f_1 = (uParam2->f_1 + -0.012f);
				}
				else
				{
					uParam2->f_1 = (uParam2->f_1 + -0.008f);
				}
			}
			else if (bParam17)
			{
				uParam2->f_1 = (uParam2->f_1 + ((-0.01f + 0.0022f) + 0.001f));
			}
			else if (bParam10)
			{
				uParam2->f_1 = (uParam2->f_1 + (-0.005f + 0.001f));
				uParam2->f_1 = (uParam2->f_1 + -0.002f);
			}
			iVar10 = func_100();
			if (iParam39 != -1)
			{
				if (func_182(iParam39))
				{
					iVar10 = iParam39;
				}
			}
			unk_0x0F33095580A670CE(iVar10);
			if (!func_151(fParam12, fParam13))
			{
				if (bParam19)
				{
					func_81(uParam1, iParam8);
					func_80(uParam1, 0);
					func_59(uParam2, uParam1, sParam7, "", iParam22, 2);
				}
				else if (bParam10 == 1)
				{
					func_81(uParam1, iParam8);
					func_80(uParam1, 0);
					func_59(uParam2, uParam1, sParam7, "", iParam22, 2);
				}
				else
				{
					func_81(uParam1, iParam22);
					func_80(uParam1, 0);
					if (bParam29)
					{
						func_181(uParam2, uParam1, sParam7, 0, 1, iParam4, iParam5);
					}
					else if (iParam9 == -1)
					{
						func_78(uParam2, uParam1, sParam7, 0, 1);
					}
					else
					{
						func_57(uParam2, uParam1, sParam7, iParam9, 2);
					}
				}
			}
			if (bParam23)
			{
				if (!func_151(fParam12, fParam13))
				{
					fVar20 = (func_71() + func_70(iParam6));
					fVar21 = func_69();
				}
				else
				{
					fVar20 = fParam13;
					fVar21 = fParam12;
				}
				Var22.f_1 = (fVar20 + 0.0486f);
				Var22 = (fVar21 - 0.0505f);
				Var22.f_2 = 0.18f;
				Var22.f_3 = 0.01f;
				Var22.f_4 = 255;
				Var22.f_5 = 255;
				Var22.f_6 = 255;
				Var22.f_7 = 255;
				func_97(&Var22, iParam24);
				func_89("TimerBars", "TPBar", &Var22, 0, 0, iVar10, 0);
			}
			iVar10 = func_100();
			if (iParam39 != -1)
			{
				if (func_182(iParam39))
				{
					iVar10 = iParam39;
				}
			}
			unk_0x0F33095580A670CE(iVar10);
			if (bVar9)
			{
				if (bParam17)
				{
					func_180(iParam4, iParam5, uParam3, iParam8, uParam14, iVar10, iParam20, &(Global_1380638.f_800[iParam0 /*2*/]), &(Global_1380638.f_821[iParam0 /*2*/]), fParam30, fParam31, iParam27, iParam28, bParam32, iParam33, fParam34, bParam35, iParam36, iParam37, bParam40);
				}
				else
				{
					func_178(iParam4, iParam5, uParam3, iParam8, uParam14, iVar10, &(Global_1380638.f_800[iParam0 /*2*/]), &(Global_1380638.f_821[iParam0 /*2*/]), iParam18, iParam20, bParam25, iParam26, fParam30, fParam31, iParam27, iParam28, bParam32, iParam33, fParam34, bParam35, iParam36, iParam37, fParam38, bParam40);
				}
			}
			func_46();
		}
	}
}

void func_178(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, int iParam5, var uParam6, var uParam7, int iParam8, int iParam9, bool bParam10, int iParam11, float fParam12, float fParam13, int iParam14, int iParam15, bool bParam16, int iParam17, float fParam18, bool bParam19, int iParam20, int iParam21, float fParam22, bool bParam23)
{
	struct<9> Var0[2];
	float fVar19;
	struct<9> Var20;
	char* sVar29;
	
	Var0[0 /*9*/].f_1 = 0f;
	Var0[0 /*9*/].f_2 = 0.007f;
	Var0[0 /*9*/].f_3 = 0.004f;
	Var0[1 /*9*/] = 0f;
	Var0[1 /*9*/].f_2 = 0.007f;
	Var0[1 /*9*/].f_3 = 0.004f;
	unk_0xA08F3C300F9E3468("TimerBars", 0);
	if (iParam9 != 0)
	{
		unk_0xA08F3C300F9E3468("timerbar_lines", 0);
	}
	if (unk_0xAD9D75DD073BF477("TimerBars"))
	{
		func_142(uParam2[0 /*9*/], &(Var0[0 /*9*/]));
		func_142(uParam2[1 /*9*/], &(Var0[1 /*9*/]));
		*(uParam2[3 /*9*/]) = { *(uParam2[0 /*9*/]) };
		func_97(uParam2[1 /*9*/], iParam3);
		if (bParam10)
		{
			func_97(uParam2[3 /*9*/], 3);
		}
		else
		{
			func_97(uParam2[3 /*9*/], iParam3);
		}
		if (iParam11 != 0 && iParam0 < iParam11)
		{
			func_97(uParam2[1 /*9*/], 6);
		}
		if (iParam15 > 0)
		{
			if (!func_76(uParam6))
			{
				func_75(uParam6, 0, 0);
			}
			else if (func_247(uParam6, iParam15, 0))
			{
				func_88(uParam6, 0, 0);
			}
			func_179(uParam2[1 /*9*/], iParam3, iParam14, iParam15, *uParam6);
		}
		fVar19 = ((SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1)) * 100f);
		if (fParam12 != -1f && fParam13 != -1f)
		{
			fVar19 = ((fParam12 / fParam13) * 100f);
		}
		else if (fParam12 != -1f && fParam13 == -1f)
		{
			fVar19 = ((fParam12 / SYSTEM::TO_FLOAT(iParam1)) * 100f);
		}
		else if (fParam12 == -1f && fParam13 != -1f)
		{
			fVar19 = ((SYSTEM::TO_FLOAT(iParam0) / fParam13) * 100f);
		}
		unk_0x0F33095580A670CE(iParam5);
		(uParam2[3 /*9*/])->f_7 = 51;
		func_89("TimerBars", "DamageBarFill_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
		if (bParam10)
		{
			func_97(uParam2[3 /*9*/], 3);
		}
		else
		{
			func_97(uParam2[3 /*9*/], iParam3);
		}
		(uParam2[3 /*9*/])->f_7 = 51;
		func_89("TimerBars", "DamageBarFill_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
		(uParam2[3 /*9*/])->f_7 = 255;
		func_144(*(uParam2[0 /*9*/]), fVar19, uParam2[1 /*9*/], 1, 1, uParam4, 0, bParam23);
		unk_0x0F33095580A670CE(iParam5);
		func_89("TimerBars", "DamageBarFill_128", uParam2[1 /*9*/], 0, 0, iParam5, 0);
		if (bParam16)
		{
			Var20 = { *(uParam2[1 /*9*/]) };
			func_144(*(uParam2[0 /*9*/]), fParam18, &Var20, 1, 1, uParam4, fParam22, bParam23);
			func_97(&Var20, iParam17);
			Var20.f_7 = 255;
			if (iParam21 > 0)
			{
				if (!func_76(uParam7))
				{
					func_75(uParam7, 0, 0);
				}
				else if (func_247(uParam7, iParam21, 0))
				{
					func_88(uParam7, 0, 0);
				}
				func_179(&Var20, iParam17, iParam20, iParam21, *uParam7);
			}
			if (bParam19)
			{
				if (fVar19 <= fParam18)
				{
					Var20.f_7 = 100;
				}
			}
			unk_0x0F33095580A670CE(iParam5);
			func_89("TimerBars", "DamageBarFill_128", &Var20, 0, 0, iParam5, 0);
		}
		if (iParam9 != 0)
		{
			unk_0xA08F3C300F9E3468("timerbar_lines", 0);
			if (unk_0xAD9D75DD073BF477("timerbar_lines"))
			{
				if (iParam9 != 10)
				{
					sVar29 = "LineMarker90_128";
					switch (iParam9)
					{
						case 1:
							sVar29 = "LineMarker10_128";
							break;
						
						case 2:
							sVar29 = "LineMarker20_128";
							break;
						
						case 3:
							sVar29 = "LineMarker30_128";
							break;
						
						case 4:
							sVar29 = "LineMarker40_128";
							break;
						
						case 5:
							sVar29 = "LineMarker50_128";
							break;
						
						case 6:
							sVar29 = "LineMarker60_128";
							break;
						
						case 7:
							sVar29 = "LineMarker70_128";
							break;
						
						case 8:
							sVar29 = "LineMarker80_128";
							break;
						
						case 9:
							sVar29 = "LineMarker90_128";
							break;
					}
					(uParam2[3 /*9*/])->f_7 = 255;
					func_97(uParam2[3 /*9*/], 2);
					func_89("timerbar_lines", sVar29, uParam2[3 /*9*/], 0, 0, iParam5, 0);
				}
				else
				{
					(uParam2[3 /*9*/])->f_7 = 255;
					func_97(uParam2[3 /*9*/], 2);
					func_89("timerbar_lines", "LineMarker20_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
					func_89("timerbar_lines", "LineMarker40_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
					func_89("timerbar_lines", "LineMarker60_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
					func_89("timerbar_lines", "LineMarker80_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
				}
			}
		}
		unk_0x0F33095580A670CE(iParam5);
		if (iParam8 > 0 && fVar19 >= IntToFloat(iParam8))
		{
			func_97(uParam2[1 /*9*/], 6);
			func_144(*(uParam2[0 /*9*/]), SYSTEM::TO_FLOAT(iParam8), uParam2[1 /*9*/], 1, 1, uParam4, 0, bParam23);
			unk_0x0F33095580A670CE(iParam5);
			func_89("TimerBars", "DamageBarFill_128", uParam2[1 /*9*/], 0, 0, iParam5, 0);
			unk_0x0F33095580A670CE(iParam5);
		}
		unk_0x0F33095580A670CE(iParam5);
	}
}

void func_179(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
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
	float fVar9;
	
	iVar8 = func_74(&uParam4, 0, 0);
	if ((iParam3 / 2) > iVar8)
	{
		fVar9 = (SYSTEM::TO_FLOAT((iVar8 / 2)) / SYSTEM::TO_FLOAT((iParam3 / 2)));
		unk_0xB4D5E37C91862216(iParam1, &iVar0, &iVar1, &iVar2, &iVar3);
		unk_0xB4D5E37C91862216(iParam2, &iVar4, &iVar5, &iVar6, &iVar7);
	}
	else
	{
		fVar9 = (SYSTEM::TO_FLOAT(iVar8) / SYSTEM::TO_FLOAT(iParam3));
		unk_0xB4D5E37C91862216(iParam2, &iVar0, &iVar1, &iVar2, &iVar3);
		unk_0xB4D5E37C91862216(iParam1, &iVar4, &iVar5, &iVar6, &iVar7);
	}
	uParam0->f_4 = SYSTEM::FLOOR(func_73(SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(iVar4), fVar9));
	uParam0->f_5 = SYSTEM::FLOOR(func_73(SYSTEM::TO_FLOAT(iVar1), SYSTEM::TO_FLOAT(iVar5), fVar9));
	uParam0->f_6 = SYSTEM::FLOOR(func_73(SYSTEM::TO_FLOAT(iVar2), SYSTEM::TO_FLOAT(iVar6), fVar9));
	uParam0->f_7 = SYSTEM::FLOOR(func_73(SYSTEM::TO_FLOAT(iVar3), SYSTEM::TO_FLOAT(iVar7), fVar9));
}

void func_180(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, int iParam5, int iParam6, var uParam7, var uParam8, float fParam9, float fParam10, int iParam11, int iParam12, bool bParam13, int iParam14, float fParam15, bool bParam16, int iParam17, int iParam18, bool bParam19)
{
	struct<9> Var0[2];
	float fVar19;
	struct<9> Var20;
	char* sVar29;
	
	Var0[0 /*9*/].f_1 = -0.004f;
	Var0[0 /*9*/].f_2 = 0.007f;
	Var0[0 /*9*/].f_3 = 0.016f;
	Var0[1 /*9*/].f_2 = 0.007f;
	Var0[1 /*9*/].f_3 = 0.016f;
	unk_0xA08F3C300F9E3468("TimerBars", 0);
	if (iParam6 != 0)
	{
		unk_0xA08F3C300F9E3468("timerbar_lines", 0);
	}
	if (unk_0xAD9D75DD073BF477("TimerBars"))
	{
		func_142(uParam2[0 /*9*/], &(Var0[0 /*9*/]));
		func_142(uParam2[1 /*9*/], &(Var0[1 /*9*/]));
		*(uParam2[3 /*9*/]) = { *(uParam2[0 /*9*/]) };
		func_97(uParam2[1 /*9*/], iParam3);
		func_97(uParam2[3 /*9*/], iParam3);
		if (iParam12 > 0)
		{
			if (!func_76(uParam7))
			{
				func_75(uParam7, 0, 0);
			}
			else if (func_247(uParam7, iParam12, 0))
			{
				func_88(uParam7, 0, 0);
			}
			func_179(uParam2[1 /*9*/], iParam3, iParam11, iParam12, *uParam7);
		}
		fVar19 = ((SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1)) * 100f);
		if (fParam9 != -1f && fParam10 != -1f)
		{
			fVar19 = ((fParam9 / fParam10) * 100f);
		}
		else if (fParam9 != -1f && fParam10 == -1f)
		{
			fVar19 = ((fParam9 / SYSTEM::TO_FLOAT(iParam1)) * 100f);
		}
		else if (fParam9 == -1f && fParam10 != -1f)
		{
			fVar19 = ((SYSTEM::TO_FLOAT(iParam0) / fParam10) * 100f);
		}
		unk_0x0F33095580A670CE(iParam5);
		(uParam2[3 /*9*/])->f_7 = 51;
		func_89("TimerBars", "DamageBarFill_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
		func_97(uParam2[3 /*9*/], iParam3);
		(uParam2[3 /*9*/])->f_7 = 51;
		func_89("TimerBars", "DamageBarFill_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
		(uParam2[3 /*9*/])->f_7 = 255;
		func_144(*(uParam2[0 /*9*/]), fVar19, uParam2[1 /*9*/], 1, 1, uParam4, 0, bParam19);
		unk_0x0F33095580A670CE(iParam5);
		func_89("TimerBars", "DamageBarFill_128", uParam2[1 /*9*/], 0, 0, iParam5, 0);
		if (bParam13)
		{
			Var20 = { *(uParam2[1 /*9*/]) };
			func_144(*(uParam2[0 /*9*/]), fParam15, &Var20, 1, 1, uParam4, 0, bParam19);
			func_97(&Var20, iParam14);
			Var20.f_7 = 255;
			if (iParam18 > 0)
			{
				if (!func_76(uParam8))
				{
					func_75(uParam8, 0, 0);
				}
				else if (func_247(uParam8, iParam18, 0))
				{
					func_88(uParam8, 0, 0);
				}
				func_179(&Var20, iParam14, iParam17, iParam18, *uParam8);
			}
			if (bParam16)
			{
				if (fVar19 <= fParam15)
				{
					Var20.f_7 = 100;
				}
			}
			unk_0x0F33095580A670CE(iParam5);
			func_89("TimerBars", "DamageBarFill_128", &Var20, 0, 0, iParam5, 0);
		}
		if (iParam6 != 0)
		{
			unk_0xA08F3C300F9E3468("timerbar_lines", 0);
			if (unk_0xAD9D75DD073BF477("timerbar_lines"))
			{
				sVar29 = "LineMarker90_128";
				switch (iParam6)
				{
					case 1:
						sVar29 = "LineMarker10_128";
						break;
					
					case 2:
						sVar29 = "LineMarker20_128";
						break;
					
					case 3:
						sVar29 = "LineMarker30_128";
						break;
					
					case 4:
						sVar29 = "LineMarker40_128";
						break;
					
					case 5:
						sVar29 = "LineMarker50_128";
						break;
					
					case 6:
						sVar29 = "LineMarker60_128";
						break;
					
					case 7:
						sVar29 = "LineMarker70_128";
						break;
					
					case 8:
						sVar29 = "LineMarker80_128";
						break;
					
					case 9:
						sVar29 = "LineMarker90_128";
						break;
				}
				(uParam2[1 /*9*/])->f_7 = 255;
				func_97(uParam2[1 /*9*/], 2);
				func_89("timerbar_lines", sVar29, uParam2[1 /*9*/], 0, 0, iParam5, 0);
			}
		}
		unk_0x0F33095580A670CE(iParam5);
		unk_0x0F33095580A670CE(iParam5);
	}
}

void func_181(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	char* sVar0;
	
	sVar0 = sParam2;
	if (!func_54(sVar0))
	{
		if (func_50())
		{
			func_80(uParam1, 0);
			unk_0x86DCEA820A4188A6(iParam4);
			unk_0x7160B751D113C8C6(iParam3);
			func_53(func_49(*uParam0), func_48(uParam0->f_1), sVar0, iParam5, iParam6);
		}
	}
}

bool func_182(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 8);
}

void func_183(var uParam0, var uParam1, var uParam2, int iParam3, float fParam4, float fParam5, var uParam6, bool bParam7)
{
	float fVar0;
	
	fVar0 = func_152(bParam7, 0);
	*uParam0 = 0.795f;
	uParam0->f_1 = func_70(iParam3);
	uParam0->f_1 = (uParam0->f_1 + func_107(uParam6));
	func_150(uParam1, iParam3, fParam4, fParam5);
	if (!func_151(fParam4, fParam5))
	{
		func_105(iParam3, -fVar0);
	}
	func_123(uParam2, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
}

void func_184(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = ((0.508f - 0.03f) - 0.106f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 21;
}

void func_185(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = ((0.508f - 0.03f) + 0.086f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 20;
}

void func_186(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, int iParam7, float fParam8, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21)
{
	var uVar0;
	var uVar11;
	var uVar13;
	var uVar113;
	var uVar124;
	var uVar126;
	
	if (func_28(1, iParam0))
	{
		uVar13 = 11;
		func_187(iParam0, &uVar0, &uVar11, &uVar13, &uVar126, &uVar113, &uVar124, iParam1, iParam2, 1, sParam3, iParam4, iParam5, bParam6, iParam7, fParam8, fParam9, iParam10, iParam11, 1, iParam12, iParam13, iParam14, iParam15, iParam16, iParam17, iParam18, iParam19, iParam20, iParam21);
	}
}

void func_187(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, char* sParam10, int iParam11, int iParam12, bool bParam13, int iParam14, float fParam15, float fParam16, int iParam17, int iParam18, bool bParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29)
{
	struct<9> Var0;
	struct<2> Var9;
	struct<3> Var11;
	bool bVar22;
	int iVar23;
	int iVar24;
	struct<9> Var25;
	
	Global_1380638++;
	if (func_124())
	{
		if (iParam17 == 2)
		{
		}
		func_110(1, iParam0);
		if (func_122())
		{
			func_153(uParam1, 0);
		}
		else if (bParam13)
		{
			func_120(uParam1, 3);
		}
		else
		{
			func_119(uParam1, 0);
		}
		func_119(&Var11, 0);
		Var11.f_2 = (Var11.f_2 + (0.166f + 0.095f));
		if (Global_1380638 == 1)
		{
			func_109(iParam9);
		}
		func_195(uParam5, 0, 0);
		func_113(uParam5);
		func_80(uParam5, 0);
		iVar23 = 0;
		if (iParam20 > 0)
		{
			iVar23 = 1;
		}
		func_193(iParam8, uParam2, uParam3, &Var0, uParam6, uParam5, uParam4, iParam9, fParam15, fParam16, uParam1, iVar23);
		Var9 = *uParam2;
		Var9.f_1 = uParam2->f_1;
		Var9.f_1 = (Var9.f_1 + (-0.006f - 0.007f));
		func_114(uParam1);
		uParam1->f_9 = (uParam1->f_9 + (0.03f * (1f - func_111())));
		func_192(&Var11);
		if (iParam14 == 0)
		{
			func_191(iParam0);
		}
		if (iParam18 == 0)
		{
			func_190(iParam0);
		}
		unk_0xA08F3C300F9E3468("TimerBars", 0);
		if (unk_0xAD9D75DD073BF477("TimerBars"))
		{
			iVar24 = func_100();
			unk_0x0F33095580A670CE(iVar24);
			if (func_99(iParam14, &(Global_1380638.f_254[iParam0 /*2*/]), &(Global_1380638.f_275[iParam0 /*2*/])))
			{
				bVar22 = true;
			}
			else
			{
				bVar22 = false;
			}
			if (!func_151(fParam15, fParam16))
			{
				Var0 = *uParam2;
				Var0.f_1 = uParam2->f_1;
				if (iParam8 < 9 && iParam20 == 0)
				{
					Var0 = (Var0 + 0.079f);
					Var0.f_1 = (Var0.f_1 + 0.012f);
					Var0.f_2 = (Var0.f_2 + 0.157f);
					Var0.f_3 = (Var0.f_3 + 0.028f);
					Var0.f_4 += 255;
					Var0.f_5 += 255;
					Var0.f_6 += 255;
					Var0.f_7 = 140;
				}
				else
				{
					Var0 = (Var0 + 0.079f);
					Var0.f_1 = (Var0.f_1 + 0.008f);
					Var0.f_2 = (Var0.f_2 + 0.157f);
					Var0.f_3 = (Var0.f_3 + 0.036f);
					Var0.f_4 += 255;
					Var0.f_5 += 255;
					Var0.f_6 += 255;
					Var0.f_7 = 140;
				}
				if (func_122())
				{
					Var0 = (Var0 + -0.025f);
					Var0.f_2 = (Var0.f_2 + 0.05f);
				}
				Global_1380638.f_6797 = (Global_1380638.f_6797 + Var0.f_3);
				if ((iParam7 == iParam8 && iParam7 > 0) || iParam18 > 0)
				{
					Var25 = { Var0 };
					if (func_247(&(Global_1380638.f_1055[iParam0 /*2*/]), 2000, 0) == 0)
					{
						if (func_98(Global_1380638.f_1055[iParam0 /*2*/], 1250, 0))
						{
							Global_1380638.f_1076[iParam0] = (Global_1380638.f_1076[iParam0] - 17);
						}
						Var25.f_7 = Global_1380638.f_1076[iParam0];
						func_97(&Var25, iParam11);
						func_89("TimerBars", "ALL_WHITE_bg", &Var25, 1, 0, iVar24, 0);
					}
				}
				else
				{
					Global_1380638.f_1076[iParam0] = 255;
					func_88(&(Global_1380638.f_1055[iParam0 /*2*/]), 0, 0);
				}
				func_89("TimerBars", "ALL_BLACK_bg", &Var0, 1, 0, iVar24, 0);
			}
			func_82(&Var0, iParam29);
			if (bParam13)
			{
				if (unk_0xFA1A73C829B8839F() == 9 || unk_0xFA1A73C829B8839F() == 12)
				{
					uParam2->f_1 = (uParam2->f_1 + -0.009f);
				}
				else
				{
					uParam2->f_1 = (uParam2->f_1 + -0.003f);
					if (func_122() == 0)
					{
						uParam2->f_1 = (uParam2->f_1 + -0.002f);
					}
				}
			}
			else if (func_122())
			{
				if (unk_0xFA1A73C829B8839F() == 9 || unk_0xFA1A73C829B8839F() == 12)
				{
					uParam2->f_1 = (uParam2->f_1 + -0.009f);
				}
				else
				{
					uParam2->f_1 = (uParam2->f_1 + -0.003f);
				}
			}
			iVar24 = func_100();
			unk_0x0F33095580A670CE(iVar24);
			if (!func_151(fParam15, fParam16))
			{
				func_80(uParam1, 0);
				if (bParam13 == 1)
				{
					func_59(uParam2, uParam1, sParam10, "", 1, 2);
				}
				else if (iParam12 == -1)
				{
					func_78(uParam2, uParam1, sParam10, 0, 1);
				}
				else
				{
					func_57(uParam2, uParam1, sParam10, iParam12, 2);
				}
			}
			if (iParam20 > 0)
			{
				func_57(&Var9, &Var11, "HUD_MULTSMAL", iParam20, 2);
			}
			if (bVar22)
			{
				func_188(iParam7, iParam8, uParam3, uParam5, uParam6, iParam11, iVar24, bParam19, iParam21, iParam22, iParam23, iParam24, iParam25, iParam26, iParam27, iParam28);
			}
			func_46();
		}
	}
}

void func_188(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	float fVar0;
	int iVar1;
	char* sVar2;
	
	if (iParam1 < 9)
	{
		fVar0 = -0.0094f;
		unk_0xA08F3C300F9E3468("TimerBars", 0);
		if (unk_0xAD9D75DD073BF477("TimerBars"))
		{
			iVar1 = 0;
			while (iVar1 <= (iParam1 - 1))
			{
				(*uParam2)[iVar1 /*9*/] = ((*uParam2)[iVar1 /*9*/] + (fVar0 * IntToFloat(iVar1)));
				if ((iParam1 - iVar1) > iParam0)
				{
					func_97(uParam2[iVar1 /*9*/], iParam5);
					(uParam2[iVar1 /*9*/])->f_7 = 51;
					func_89("TimerBars", "Circle_checkpoints_Outline", uParam2[iVar1 /*9*/], 0, 0, iParam6, 0);
				}
				else
				{
					func_97(uParam2[iVar1 /*9*/], iParam5);
					func_89("TimerBars", "Circle_checkpoints", uParam2[iVar1 /*9*/], 0, 0, iParam6, 0);
					if (func_166(iVar1, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, iParam15))
					{
						func_97(uParam2[iVar1 /*9*/], 2);
						func_89("Cross", "Circle_checkpoints_Cross", uParam2[iVar1 /*9*/], 0, 0, iParam6, 0);
					}
				}
				iVar1++;
			}
		}
	}
	else if (iParam5 == 1)
	{
		func_52(uParam4, uParam3, "TIMER_DASHES", iParam0, iParam1, 2, 0);
	}
	else
	{
		func_189(uParam3);
		if (bParam7)
		{
			unk_0xA08F3C300F9E3468("TimerBars", 0);
			if (unk_0xAD9D75DD073BF477("TimerBars"))
			{
				(*uParam2)[0 /*9*/] = ((*uParam2)[0 /*9*/] + (0.058f - 0.06f));
				(uParam2[0 /*9*/])->f_1 = ((uParam2[0 /*9*/])->f_1 + -0.005f);
				(uParam2[0 /*9*/])->f_2 = ((uParam2[0 /*9*/])->f_2 + ((0.003f - 0.005f) + 0.002f));
				(uParam2[0 /*9*/])->f_3 = ((uParam2[0 /*9*/])->f_3 + (0.009f - 0.01f));
				func_97(uParam2[0 /*9*/], iParam5);
				func_89("TimerBars", "Circle_checkpoints_Big", uParam2[0 /*9*/], 0, 0, iParam6, 0);
			}
		}
		sVar2 = "TIMER_DASHES";
		if ((bParam7 == 1 && iParam0 > 99) && iParam1 > 99)
		{
			sVar2 = "TIMER_DASHES";
		}
		func_52(uParam4, uParam3, sVar2, iParam0, iParam1, 2, 0);
	}
}

void func_189(var uParam0)
{
	uParam0->f_9 = (((((0.95f - 0.047f) + 0.001f) + 0.047f) - 0.002f) - 0.013f);
}

void func_190(int iParam0)
{
	func_16(&(Global_1380638.f_716[iParam0 /*2*/]));
	func_16(&(Global_1380638.f_737[iParam0 /*2*/]));
}

void func_191(int iParam0)
{
	func_16(&(Global_1380638.f_254[iParam0 /*2*/]));
	func_16(&(Global_1380638.f_275[iParam0 /*2*/]));
	Global_1380638.f_1733.f_205[iParam0] = -1;
}

void func_192(var uParam0)
{
	float fVar0;
	
	fVar0 = (((((0.88f - 0.062f) + 0.026f) + 0.027f) + 0.037f) + 0.003f);
	uParam0->f_9 = fVar0;
}

void func_193(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, float fParam8, float fParam9, var uParam10, int iParam11)
{
	float fVar0;
	
	fVar0 = func_108(uParam5);
	if (iParam0 < 9)
	{
		fVar0 = func_152(iParam11, 0);
	}
	*uParam1 = 0.795f;
	uParam1->f_1 = func_70(iParam7);
	uParam1->f_1 = (uParam1->f_1 + func_107(uParam10));
	*uParam4 = 0.795f;
	uParam4->f_1 = (uParam1->f_1 + func_106(uParam5));
	func_194(uParam2, iParam7, fParam8, fParam9);
	func_172(uParam6);
	if (!func_151(fParam8, fParam9))
	{
		func_105(iParam7, -fVar0);
	}
	func_123(uParam3, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
}

void func_194(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;
	float fVar1;
	
	if (!func_151(fParam2, fParam3))
	{
		fVar0 = (func_71() + func_70(iParam1));
		fVar1 = func_174();
	}
	else
	{
		fVar0 = fParam3;
		fVar1 = fParam2;
	}
	(*uParam0)[0 /*9*/] = fVar1;
	(uParam0[0 /*9*/])->f_1 = fVar0;
	(uParam0[0 /*9*/])->f_2 = 0.012f;
	(uParam0[0 /*9*/])->f_3 = 0.023f;
	(uParam0[0 /*9*/])->f_4 = 0;
	(uParam0[0 /*9*/])->f_5 = 0;
	(uParam0[0 /*9*/])->f_6 = 0;
	(uParam0[0 /*9*/])->f_7 = 250;
	(*uParam0)[1 /*9*/] = fVar1;
	(uParam0[1 /*9*/])->f_1 = fVar0;
	(uParam0[1 /*9*/])->f_2 = 0.012f;
	(uParam0[1 /*9*/])->f_3 = 0.023f;
	(uParam0[1 /*9*/])->f_4 = 0;
	(uParam0[1 /*9*/])->f_5 = 0;
	(uParam0[1 /*9*/])->f_6 = 0;
	(uParam0[1 /*9*/])->f_7 = 250;
	(*uParam0)[2 /*9*/] = fVar1;
	(uParam0[2 /*9*/])->f_1 = fVar0;
	(uParam0[2 /*9*/])->f_2 = 0.012f;
	(uParam0[2 /*9*/])->f_3 = 0.023f;
	(uParam0[2 /*9*/])->f_4 = 0;
	(uParam0[2 /*9*/])->f_5 = 0;
	(uParam0[2 /*9*/])->f_6 = 0;
	(uParam0[2 /*9*/])->f_7 = 250;
	(*uParam0)[3 /*9*/] = fVar1;
	(uParam0[3 /*9*/])->f_1 = fVar0;
	(uParam0[3 /*9*/])->f_2 = 0.012f;
	(uParam0[3 /*9*/])->f_3 = 0.023f;
	(uParam0[3 /*9*/])->f_4 = 0;
	(uParam0[3 /*9*/])->f_5 = 0;
	(uParam0[3 /*9*/])->f_6 = 0;
	(uParam0[3 /*9*/])->f_7 = 250;
	(*uParam0)[4 /*9*/] = fVar1;
	(uParam0[4 /*9*/])->f_1 = fVar0;
	(uParam0[4 /*9*/])->f_2 = 0.012f;
	(uParam0[4 /*9*/])->f_3 = 0.023f;
	(uParam0[4 /*9*/])->f_4 = 0;
	(uParam0[4 /*9*/])->f_5 = 0;
	(uParam0[4 /*9*/])->f_6 = 0;
	(uParam0[4 /*9*/])->f_7 = 250;
	(*uParam0)[5 /*9*/] = fVar1;
	(uParam0[5 /*9*/])->f_1 = fVar0;
	(uParam0[5 /*9*/])->f_2 = 0.012f;
	(uParam0[5 /*9*/])->f_3 = 0.023f;
	(uParam0[5 /*9*/])->f_4 = 0;
	(uParam0[5 /*9*/])->f_5 = 0;
	(uParam0[5 /*9*/])->f_6 = 0;
	(uParam0[5 /*9*/])->f_7 = 250;
	(*uParam0)[6 /*9*/] = fVar1;
	(uParam0[6 /*9*/])->f_1 = fVar0;
	(uParam0[6 /*9*/])->f_2 = 0.012f;
	(uParam0[6 /*9*/])->f_3 = 0.023f;
	(uParam0[6 /*9*/])->f_4 = 0;
	(uParam0[6 /*9*/])->f_5 = 0;
	(uParam0[6 /*9*/])->f_6 = 0;
	(uParam0[6 /*9*/])->f_7 = 250;
	(*uParam0)[7 /*9*/] = fVar1;
	(uParam0[7 /*9*/])->f_1 = fVar0;
	(uParam0[7 /*9*/])->f_2 = 0.012f;
	(uParam0[7 /*9*/])->f_3 = 0.023f;
	(uParam0[7 /*9*/])->f_4 = 0;
	(uParam0[7 /*9*/])->f_5 = 0;
	(uParam0[7 /*9*/])->f_6 = 0;
	(uParam0[7 /*9*/])->f_7 = 250;
	(*uParam0)[8 /*9*/] = fVar1;
	(uParam0[8 /*9*/])->f_1 = fVar0;
	(uParam0[8 /*9*/])->f_2 = 0.012f;
	(uParam0[8 /*9*/])->f_3 = 0.023f;
	(uParam0[8 /*9*/])->f_4 = 0;
	(uParam0[8 /*9*/])->f_5 = 0;
	(uParam0[8 /*9*/])->f_6 = 0;
	(uParam0[8 /*9*/])->f_7 = 250;
	(*uParam0)[9 /*9*/] = fVar1;
	(uParam0[9 /*9*/])->f_1 = fVar0;
	(uParam0[9 /*9*/])->f_2 = 0.012f;
	(uParam0[9 /*9*/])->f_3 = 0.023f;
	(uParam0[9 /*9*/])->f_4 = 0;
	(uParam0[9 /*9*/])->f_5 = 0;
	(uParam0[9 /*9*/])->f_6 = 0;
	(uParam0[9 /*9*/])->f_7 = 250;
}

void func_195(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = ((((((0.469f + 0.096f) - 0.017f) + 0.022f) - 0.062f) - 0.001f) - 0.013f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 9;
}

void func_196(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, int iParam13)
{
	var uVar0;
	var uVar11;
	var uVar22;
	var uVar24;
	
	if (func_28(5, iParam0))
	{
		func_45(iParam0, &uVar0, &uVar11, &uVar22, &uVar24, iParam1, 1, sParam3, iParam4, iParam5, iParam6, bParam7, "", 0, 0f, iParam8, iParam9, iParam10, 0, iParam2, 0, 0, 0, "", 0, iParam11, 255, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, bParam12, iParam13);
	}
}

void func_197(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, int iParam14, bool bParam15)
{
	var uVar0;
	var uVar11;
	var uVar22;
	var uVar24;
	
	if (func_28(4, iParam0))
	{
		func_45(iParam0, &uVar0, &uVar11, &uVar22, &uVar24, iParam1, 1, sParam3, iParam4, iParam5, iParam6, bParam7, "", 0, 0f, iParam8, iParam9, iParam12, bParam10, iParam2, 0, 0, 0, "", bParam11, iParam13, iParam14, 0, 0, bParam15, 0, 1, 0, 0, -1, 0, 0, 0, 0);
	}
}

void func_198(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, bool bParam6, char* sParam7, int iParam8, bool bParam9, int iParam10, int iParam11, int iParam12, bool bParam13, int iParam14, int iParam15)
{
	var uVar0;
	var uVar11;
	var uVar22;
	var uVar24;
	
	if (func_28(3, iParam0))
	{
		func_45(iParam0, &uVar0, &uVar11, &uVar22, &uVar24, iParam1, 1, sParam2, iParam3, iParam4, iParam5, bParam6, sParam7, 0, 0f, iParam10, iParam11, iParam8, 0, 0, bParam9, 0, 0, "", 0, iParam12, 255, 0, 0, 0, 0, 1, bParam13, iParam14, iParam15, 0, 0, 0, 0);
	}
}

void func_199(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10, int iParam11, bool bParam12, var uParam13, bool bParam14, int iParam15, int iParam16, bool bParam17)
{
	var uVar0;
	var uVar11;
	var uVar22;
	var uVar33;
	var uVar35;
	var uVar37;
	
	if (func_28(7, iParam0))
	{
		func_200(iParam0, &uVar0, &uVar11, &uVar22, &uVar33, &uVar35, &uVar37, iParam1, 1, iParam3, iParam4, uParam2, iParam6, iParam5, iParam7, iParam8, bParam9, iParam10, iParam11, bParam12, uParam13, bParam14, iParam15, iParam16, bParam17);
	}
}

void func_200(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, var uParam11, int iParam12, int iParam13, int iParam14, int iParam15, bool bParam16, int iParam17, int iParam18, bool bParam19, var uParam20, bool bParam21, int iParam22, int iParam23, bool bParam24)
{
	var uVar0;
	var uVar11;
	struct<9> Var13;
	bool bVar22;
	int iVar23;
	struct<8> Var24;
	struct<9> Var33;
	
	Global_1380638++;
	if (iParam17 == 2)
	{
	}
	func_123(&Var13, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
	func_110(7, iParam0);
	if (bParam21)
	{
		func_119(uParam1, 0);
	}
	else if (bParam16)
	{
		func_120(uParam1, 3);
	}
	else if (func_122())
	{
		func_121(uParam1, 0);
	}
	else
	{
		func_119(uParam1, 0);
	}
	func_214(&uVar0, 0);
	switch (iParam13)
	{
		case 1:
		case 0:
		case 5:
			if (bParam19)
			{
				func_213(uParam3, 0);
				func_195(uParam2, 0, 0);
			}
			else
			{
				func_213(uParam3, 0);
				func_195(uParam2, 0, 5);
			}
			func_113(uParam2);
			func_113(uParam3);
			break;
		
		case 2:
			func_195(uParam2, 0, 0);
			func_113(&uVar0);
			func_113(uParam3);
			func_212(uParam2);
			break;
		
		case 3:
			func_195(uParam2, 0, 0);
			func_113(&uVar0);
			func_113(uParam3);
			func_212(uParam2);
			break;
		
		case 4:
			func_195(uParam3, 0, 0);
			if (bParam19)
			{
				func_195(uParam2, 0, 0);
			}
			else
			{
				func_195(uParam2, 0, 5);
			}
			func_113(uParam2);
			func_113(uParam3);
			break;
	}
	func_114(uParam1);
	if (Global_1380638.f_1130 == 0 && Global_1380638.f_1131 == 0)
	{
		if (iParam13 == 1)
		{
			uParam1->f_9 = (uParam1->f_9 + -0.016f);
			if (func_122())
			{
				uParam1->f_9 = (uParam1->f_9 + -0.008f);
			}
		}
	}
	else if (Global_1380638.f_1130 == 0 && Global_1380638.f_1131 == 1)
	{
		if (iParam13 == 1)
		{
			uParam1->f_9 = (uParam1->f_9 + 0f);
			if (func_122())
			{
				uParam1->f_9 = (uParam1->f_9 + -0.009f);
			}
		}
	}
	if (Global_1380638 == 1)
	{
		func_109(iParam8);
	}
	func_211(uParam2, uParam4, uParam5, uParam6, iParam8, uParam1, &uVar0, &uVar11);
	uParam1->f_9 = (uParam1->f_9 + (0.03f * (1f - func_111())));
	func_103(uParam2, iParam12);
	if (iParam14 == 0)
	{
		func_210(iParam0);
	}
	if (iParam18 == 0)
	{
		func_209(iParam0);
	}
	unk_0xA08F3C300F9E3468("TimerBars", 0);
	if (unk_0xAD9D75DD073BF477("TimerBars"))
	{
		iVar23 = func_100();
		unk_0x0F33095580A670CE(iVar23);
		if (func_99(iParam14, &(Global_1380638.f_170[iParam0 /*2*/]), &(Global_1380638.f_191[iParam0 /*2*/])))
		{
			bVar22 = true;
		}
		else
		{
			bVar22 = false;
		}
		Var13 = *uParam4;
		Var13.f_1 = uParam4->f_1;
		if (Global_1380638.f_1123 == 1)
		{
			Var13 = (Var13 + -0.113f);
		}
		switch (iParam13)
		{
			case 1:
			case 0:
			case 5:
				Var13 = (Var13 + 0.079f);
				Var13.f_1 = (Var13.f_1 + 0.008f);
				Var13.f_2 = (Var13.f_2 + 0.157f);
				Var13.f_3 = (Var13.f_3 + 0.036f);
				Var13.f_4 += 255;
				Var13.f_5 += 255;
				Var13.f_6 += 255;
				Var13.f_7 = 140;
				break;
			
			case 2:
				Var13 = (Var13 + 0.079f);
				Var13.f_1 = (Var13.f_1 + 0.008f);
				Var13.f_2 = (Var13.f_2 + 0.157f);
				Var13.f_3 = (Var13.f_3 + 0.036f);
				Var13.f_4 += 255;
				Var13.f_5 += 255;
				Var13.f_6 += 255;
				Var13.f_7 = 140;
				break;
			
			case 3:
				Var13 = (Var13 + 0.079f);
				Var13.f_1 = (Var13.f_1 + 0.008f);
				Var13.f_2 = (Var13.f_2 + 0.157f);
				Var13.f_3 = (Var13.f_3 + 0.036f);
				Var13.f_4 += 255;
				Var13.f_5 += 255;
				Var13.f_6 += 255;
				Var13.f_7 = 140;
				break;
			
			case 4:
				Var13 = (Var13 + 0.079f);
				Var13.f_1 = (Var13.f_1 + 0.008f);
				Var13.f_2 = (Var13.f_2 + 0.157f);
				Var13.f_3 = (Var13.f_3 + 0.036f);
				Var13.f_4 += 255;
				Var13.f_5 += 255;
				Var13.f_6 += 255;
				Var13.f_7 = 140;
				break;
		}
		Var24 = ((*uParam5 + 0.145f) + 0.001f);
		if (func_122())
		{
			Var24.f_1 = ((uParam5->f_1 + 0.019f) - 0.006f);
		}
		else
		{
			Var24.f_1 = (uParam5->f_1 + 0.019f);
		}
		Var24.f_2 = (0.016f + 0.003f);
		Var24.f_3 = (0.032f + 0.004f);
		Var24.f_7 = 255;
		func_97(&Var24, 1);
		Var24 = (uParam1->f_9 - ((uParam2->f_9 - uParam1->f_9) / 8f));
		if (func_122())
		{
			Var24 = (Var24 - 0.003f);
		}
		switch (iParam23)
		{
			case 5:
				Var24.f_3 = (Var24.f_3 + -0.009f);
				Var24.f_2 = (Var24.f_2 + -0.002f);
				if (func_122())
				{
					Var24.f_1 = (Var24.f_1 + 0.0055f);
				}
				else
				{
					Var24.f_1 = (Var24.f_1 + 0.0025f);
				}
				unk_0xA08F3C300F9E3468("MPRPSymbol", 0);
				if (unk_0xAD9D75DD073BF477("MPRPSymbol"))
				{
					func_89("MPRPSymbol", "RP", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 2:
				unk_0xA08F3C300F9E3468("TimerBars", 0);
				if (unk_0xAD9D75DD073BF477("TimerBars"))
				{
					func_89("TimerBars", "Rockets", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 1:
				unk_0xA08F3C300F9E3468("TimerBars", 0);
				if (unk_0xAD9D75DD073BF477("TimerBars"))
				{
					func_89("TimerBars", "Spikes", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 4:
				unk_0xA08F3C300F9E3468("TimerBars", 0);
				if (unk_0xAD9D75DD073BF477("TimerBars"))
				{
					func_89("TimerBars", "Boost", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 6:
				unk_0xA08F3C300F9E3468("CrossTheLine", 0);
				if (unk_0xAD9D75DD073BF477("CrossTheLine"))
				{
					func_97(&Var24, 18);
					func_89("CrossTheLine", "Timer_LargeTick_32", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 7:
				unk_0xA08F3C300F9E3468("CrossTheLine", 0);
				if (unk_0xAD9D75DD073BF477("CrossTheLine"))
				{
					func_97(&Var24, 6);
					func_89("CrossTheLine", "Timer_LargeCross_32", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 8:
				unk_0xA08F3C300F9E3468("TimerBar_Icons", 0);
				if (unk_0xAD9D75DD073BF477("TimerBar_Icons"))
				{
					func_97(&Var24, 118);
					func_89("TimerBar_Icons", "Pickup_Beast", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 9:
				unk_0xA08F3C300F9E3468("TimerBar_Icons", 0);
				if (unk_0xAD9D75DD073BF477("TimerBar_Icons"))
				{
					func_97(&Var24, 118);
					func_89("TimerBar_Icons", "Pickup_B_Time", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 10:
				unk_0xA08F3C300F9E3468("TimerBar_Icons", 0);
				if (unk_0xAD9D75DD073BF477("TimerBar_Icons"))
				{
					func_97(&Var24, 118);
					func_89("TimerBar_Icons", "Pickup_Random", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 11:
				unk_0xA08F3C300F9E3468("TimerBar_Icons", 0);
				if (unk_0xAD9D75DD073BF477("TimerBar_Icons"))
				{
					func_97(&Var24, 118);
					func_89("TimerBar_Icons", "Pickup_Slow_Time", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 12:
				unk_0xA08F3C300F9E3468("TimerBar_Icons", 0);
				if (unk_0xAD9D75DD073BF477("TimerBar_Icons"))
				{
					func_97(&Var24, 118);
					func_89("TimerBar_Icons", "Pickup_Swap", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 13:
				unk_0xA08F3C300F9E3468("TimerBar_Icons", 0);
				if (unk_0xAD9D75DD073BF477("TimerBar_Icons"))
				{
					func_97(&Var24, 118);
					func_89("TimerBar_Icons", "Pickup_Testosterone", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 14:
				unk_0xA08F3C300F9E3468("TimerBar_Icons", 0);
				if (unk_0xAD9D75DD073BF477("TimerBar_Icons"))
				{
					func_97(&Var24, 118);
					func_89("TimerBar_Icons", "Pickup_Thermal", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 15:
				unk_0xA08F3C300F9E3468("TimerBar_Icons", 0);
				if (unk_0xAD9D75DD073BF477("TimerBar_Icons"))
				{
					func_97(&Var24, 118);
					func_89("TimerBar_Icons", "Pickup_Weed", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 16:
				unk_0xA08F3C300F9E3468("TimerBar_Icons", 0);
				if (unk_0xAD9D75DD073BF477("TimerBar_Icons"))
				{
					func_97(&Var24, 118);
					func_89("TimerBar_Icons", "Pickup_Hidden", &Var24, 1, 0, 4, 0);
				}
				break;
		}
		if (func_122())
		{
			Var13 = (Var13 + -0.025f);
			Var13.f_2 = (Var13.f_2 + 0.05f);
		}
		Global_1380638.f_6797 = (Global_1380638.f_6797 + Var13.f_3);
		if (Global_1380638.f_1123 == 0)
		{
			if (iParam18 > 0)
			{
				Var33 = { Var13 };
				if (func_247(&(Global_1380638.f_991[iParam0 /*2*/]), 2000, 0) == 0)
				{
					if (func_98(Global_1380638.f_991[iParam0 /*2*/], 1250, 0))
					{
						Global_1380638.f_1012[iParam0] = (Global_1380638.f_1012[iParam0] - 17);
					}
					Var33.f_7 = Global_1380638.f_1012[iParam0];
					if (iParam17 == 2)
					{
						func_97(&Var33, 6);
					}
					else if (iParam17 == 3)
					{
						func_97(&Var33, 18);
					}
					else
					{
						func_97(&Var33, iParam12);
					}
					func_89("TimerBars", "ALL_WHITE_bg", &Var33, 1, 0, iVar23, 0);
				}
			}
			else
			{
				Global_1380638.f_1012[iParam0] = 255;
				func_88(&(Global_1380638.f_991[iParam0 /*2*/]), 0, 0);
			}
			func_89("TimerBars", "ALL_BLACK_bg", &Var13, 1, 0, iVar23, 0);
		}
		func_82(&Var13, iParam22);
		if (bParam16)
		{
			if (unk_0xFA1A73C829B8839F() == 9 || unk_0xFA1A73C829B8839F() == 12)
			{
				uParam4->f_1 = (uParam4->f_1 + -0.012f);
			}
			else
			{
				uParam4->f_1 = (uParam4->f_1 + -0.004f);
			}
		}
		else if (func_122())
		{
			if (unk_0xFA1A73C829B8839F() == 9 || unk_0xFA1A73C829B8839F() == 12)
			{
				uParam4->f_1 = (uParam4->f_1 + -0.012f);
			}
			else
			{
				uParam4->f_1 = (uParam4->f_1 + -0.008f);
			}
		}
		iVar23 = func_100();
		unk_0x0F33095580A670CE(iVar23);
		func_103(uParam1, uParam20);
		if (Global_1380638.f_1123 == 0)
		{
			func_80(uParam1, 0);
			if (func_54(uParam11) == 0)
			{
				if (bParam21 == 1)
				{
					func_59(uParam4, uParam1, uParam11, "", uParam20, 2);
				}
				else if (bParam16 == 1)
				{
					*uParam1 = 4;
					func_59(uParam4, uParam1, uParam11, "", uParam20, 2);
				}
				else if (iParam15 == -1)
				{
					func_78(uParam4, uParam1, uParam11, 0, 1);
				}
				else
				{
					func_57(uParam4, uParam1, uParam11, iParam15, 2);
				}
			}
		}
		if (bVar22)
		{
			if (iParam9 == 0)
			{
				func_208(iParam0);
			}
			if (iParam9 != 0 && func_247(&(Global_1380638.f_4617.f_336[iParam0 /*2*/]), 4000, 0) == 0)
			{
				if (iParam13 != 4)
				{
					if (iParam9 > 0)
					{
						func_207(uParam3);
						func_206(uParam6, uParam3, iParam9, 66, "TIMER_POS", 0, 1);
						func_205(uParam3);
					}
					else
					{
						func_204(uParam3);
						func_206(uParam6, uParam3, iParam9, 66, "STRING", 0, 1);
						func_205(uParam3);
					}
				}
				else if (iParam9 > 0)
				{
					func_204(uParam3);
					func_206(uParam6, uParam3, iParam9, 66, "TIMER_POS", 0, 1);
					func_205(uParam3);
				}
				else
				{
					func_207(uParam3);
					func_206(uParam6, uParam3, iParam9, 66, "STRING", 0, 1);
					func_205(uParam3);
				}
			}
			else
			{
				if (iParam10 != 0)
				{
					if (iParam10 == 1)
					{
						func_203(uParam2);
					}
					else if (iParam10 == 2)
					{
						func_202(uParam2);
					}
					else if (iParam10 == 3)
					{
						func_201(uParam2);
					}
				}
				if (Global_1380638.f_1123 == 1)
				{
					uParam2->f_7 = 0;
					unk_0x0F33095580A670CE(7);
				}
				func_80(uParam2, 0);
				switch (iParam13)
				{
					case 1:
						if (bParam19)
						{
							func_59(uParam5, uParam2, "--:--:--", "", 1, 2);
						}
						else
						{
							*uParam5 = (*uParam5 + 0.117f);
							if (bParam24)
							{
								func_206(uParam5, uParam2, iParam7, 2627, "", 0, 1);
							}
							else
							{
								func_206(uParam5, uParam2, iParam7, 2567, "", 0, 1);
							}
						}
						break;
					
					case 0:
						if (bParam19)
						{
							func_59(uParam5, uParam2, "--:--", "", 1, 2);
						}
						else
						{
							*uParam5 = (*uParam5 + 0.117f);
							func_206(uParam5, uParam2, iParam7, 6, "", 0, 1);
						}
						break;
					
					case 2:
						*uParam5 = (*uParam5 + 0.12f);
						func_206(uParam5, uParam2, iParam7, 6, "", 0, 1);
						func_78(&uVar11, &uVar0, "TIMER_AM_O", 0, 1);
						break;
					
					case 3:
						*uParam5 = (*uParam5 + 0.12f);
						func_206(uParam5, uParam2, iParam7, 6, "", 0, 1);
						func_78(&uVar11, &uVar0, "TIMER_PM_O", 0, 1);
						break;
					
					case 4:
						*uParam5 = (*uParam5 + 0.12f);
						if (bParam19)
						{
							func_59(uParam5, uParam2, "--:--:--", "", 1, 2);
						}
						else
						{
							func_206(uParam5, uParam2, iParam7, 2567, "", 0, 1);
						}
						break;
					
					case 5:
						*uParam5 = (*uParam5 + 0.117f);
						func_206(uParam5, uParam2, iParam7, 2, "", 0, 1);
						break;
					}
				}
		}
		func_46();
	}
}

void func_201(var uParam0)
{
	func_81(uParam0, 109);
}

void func_202(var uParam0)
{
	func_81(uParam0, 108);
}

void func_203(var uParam0)
{
	func_81(uParam0, 107);
}

void func_204(var uParam0)
{
	func_81(uParam0, 6);
}

void func_205(var uParam0)
{
	func_81(uParam0, 1);
}

void func_206(var uParam0, var uParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	char* sVar0;
	
	if (func_50())
	{
		func_80(uParam1, 0);
		unk_0x86DCEA820A4188A6(iParam6);
		unk_0x7160B751D113C8C6(iParam5);
		if (func_54(sParam4))
		{
			sVar0 = "STRING";
		}
		else
		{
			sVar0 = sParam4;
		}
		unk_0xE5A80C83FA218963(sVar0);
		unk_0x4E2EF4B6B665F3F4(iParam2, iParam3);
		unk_0xBC68FBDA73BBB4A6(func_49(*uParam0), func_48(uParam0->f_1), 0);
	}
}

void func_207(var uParam0)
{
	func_81(uParam0, 18);
}

void func_208(int iParam0)
{
	func_16(&(Global_1380638.f_4617.f_336[iParam0 /*2*/]));
}

void func_209(int iParam0)
{
	func_16(&(Global_1380638.f_632[iParam0 /*2*/]));
	func_16(&(Global_1380638.f_653[iParam0 /*2*/]));
}

void func_210(int iParam0)
{
	func_16(&(Global_1380638.f_170[iParam0 /*2*/]));
	func_16(&(Global_1380638.f_191[iParam0 /*2*/]));
}

void func_211(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, var uParam6, var uParam7)
{
	float fVar0;
	
	fVar0 = func_108(uParam0);
	*uParam1 = 0.795f;
	uParam1->f_1 = func_70(iParam4);
	uParam1->f_1 = (uParam1->f_1 + func_107(uParam5));
	*uParam2 = 0.795f;
	uParam2->f_1 = (uParam1->f_1 + func_106(uParam0));
	*uParam7 = 0.795f;
	uParam7->f_1 = (uParam1->f_1 + func_106(uParam6));
	*uParam3 = *uParam2;
	uParam3->f_1 = uParam2->f_1;
	func_105(iParam4, -fVar0);
}

void func_212(var uParam0)
{
	uParam0->f_9 = ((((((((0.95f - 0.047f) + 0.001f) + 0.047f) - 0.002f) - 0.013f) + 0.014f) - 0.024f) + 0.005f);
}

void func_213(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (0.315f + 0.183f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 15;
}

void func_214(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (((0.5f + 0.004f) - 0.01f) - 0.11f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 19;
}

int func_215(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_225(iParam0))
	{
		iVar1 = 2;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (Global_1375082[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_216(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 7:
			func_199(iParam1, Global_1380638.f_4617[iParam1], &(Global_1380638.f_4617.f_11[iParam1 /*16*/]), Global_1380638.f_4617.f_172[iParam1], Global_1380638.f_4617.f_194[iParam1], Global_1380638.f_4617.f_216[iParam1], Global_1380638.f_4617.f_205[iParam1], Global_1380638.f_4617.f_183[iParam1], Global_1380638.f_4617.f_227[iParam1], Global_1380638.f_4617.f_260[iParam1], Global_1380638.f_4617.f_314[iParam1], Global_1380638.f_4617.f_325[iParam1], Global_1380638.f_4617.f_357[iParam1], Global_1380638.f_4617.f_238[iParam1], Global_1380638.f_4617.f_271[iParam1], Global_1380638.f_4617.f_368[iParam1], Global_1380638.f_4617.f_379[iParam1], Global_1380638.f_4617.f_390[iParam1]);
			break;
		
		case 3:
			func_198(iParam1, Global_1380638.f_2797[iParam1], &(Global_1380638.f_2797.f_11[iParam1 /*16*/]), Global_1380638.f_2797.f_183[iParam1], Global_1380638.f_2797.f_172[iParam1], Global_1380638.f_2797.f_194[iParam1], Global_1380638.f_2797.f_216[iParam1], &(Global_1380638.f_2797.f_259[iParam1 /*16*/]), Global_1380638.f_2797.f_420[iParam1], Global_1380638.f_2797.f_453[iParam1], Global_1380638.f_2797.f_431[iParam1], Global_1380638.f_2797.f_442[iParam1], Global_1380638.f_2797.f_464[iParam1], Global_1380638.f_2797.f_475[iParam1], Global_1380638.f_2797.f_486[iParam1], Global_1380638.f_2797.f_497[iParam1]);
			break;
		
		case 4:
			func_197(iParam1, Global_1380638.f_3305[iParam1], Global_1380638.f_3305.f_172[iParam1], &(Global_1380638.f_3305.f_11[iParam1 /*16*/]), Global_1380638.f_3305.f_194[iParam1], Global_1380638.f_3305.f_183[iParam1], Global_1380638.f_3305.f_205[iParam1], Global_1380638.f_3305.f_227[iParam1], Global_1380638.f_3305.f_270[iParam1], Global_1380638.f_3305.f_281[iParam1], Global_1380638.f_3305.f_292[iParam1], Global_1380638.f_3305.f_303[iParam1], Global_1380638.f_3305.f_314[iParam1], Global_1380638.f_3305.f_325[iParam1], Global_1380638.f_3305.f_336[iParam1], Global_1380638.f_3305.f_347[iParam1]);
			break;
		
		case 5:
			func_196(iParam1, Global_1380638.f_3663[iParam1], Global_1380638.f_3663.f_172[iParam1], &(Global_1380638.f_3663.f_11[iParam1 /*16*/]), Global_1380638.f_3663.f_194[iParam1], Global_1380638.f_3663.f_183[iParam1], Global_1380638.f_3663.f_205[iParam1], Global_1380638.f_3663.f_227[iParam1], Global_1380638.f_3663.f_270[iParam1], Global_1380638.f_3663.f_281[iParam1], Global_1380638.f_3663.f_292[iParam1], Global_1380638.f_3663.f_303[iParam1], Global_1380638.f_3663.f_314[iParam1], Global_1380638.f_3663.f_325[iParam1]);
			break;
		
		case 1:
			func_186(iParam1, Global_1380638.f_1733[iParam1], Global_1380638.f_1733.f_11[iParam1], &(Global_1380638.f_1733.f_22[iParam1 /*16*/]), Global_1380638.f_1733.f_194[iParam1], Global_1380638.f_1733.f_205[iParam1], Global_1380638.f_1733.f_258[iParam1], Global_1380638.f_1733.f_183[iParam1], Global_1380638.f_1733.f_227[iParam1 /*3*/], Global_1380638.f_1733.f_227[iParam1 /*3*/].f_1, Global_1380638.f_1733.f_312[iParam1], Global_1380638.f_1733.f_323[iParam1], Global_1380638.f_1733.f_269[iParam1], Global_2553852[iParam1], Global_2553863[iParam1], Global_2553874[iParam1], Global_2553885[iParam1], Global_2553896[iParam1], Global_2553907[iParam1], Global_2553918[iParam1], Global_2553929[iParam1], Global_1380638.f_1733.f_334[iParam1]);
			break;
		
		case 0:
			func_176(iParam1, Global_1380638.f_1135[iParam1], Global_1380638.f_1135.f_11[iParam1], &(Global_1380638.f_1135.f_22[iParam1 /*16*/]), Global_1380638.f_1135.f_194[iParam1], Global_1380638.f_1135.f_183[iParam1], Global_1380638.f_1135.f_227[iParam1 /*3*/], Global_1380638.f_1135.f_227[iParam1 /*3*/].f_1, Global_1380638.f_1135.f_258[iParam1], Global_1380638.f_1135.f_205[iParam1], Global_1380638.f_1135.f_269[iParam1], Global_1380638.f_1135.f_312[iParam1], Global_1380638.f_1135.f_323[iParam1], Global_1380638.f_1135.f_334[iParam1], Global_1380638.f_1135.f_345[iParam1], Global_1380638.f_1135.f_356[iParam1], Global_1380638.f_1135.f_367[iParam1], Global_1380638.f_1135.f_378[iParam1], Global_1380638.f_1135.f_389[iParam1], Global_1380638.f_1135.f_400[iParam1], Global_1380638.f_1135.f_411[iParam1], Global_1380638.f_1135.f_422[iParam1], Global_1380638.f_1135.f_433[iParam1], Global_1380638.f_1135.f_444[iParam1], Global_1380638.f_1135.f_455[iParam1], Global_1380638.f_1135.f_466[iParam1], Global_1380638.f_1135.f_477[iParam1], Global_1380638.f_1135.f_488[iParam1], Global_1380638.f_1135.f_499[iParam1], Global_1380638.f_1135.f_510[iParam1], Global_1380638.f_1135.f_521[iParam1], Global_1380638.f_1135.f_532[iParam1], Global_1380638.f_1135.f_543[iParam1], Global_1380638.f_1135.f_554[iParam1], Global_1380638.f_1135.f_565[iParam1], Global_1380638.f_1135.f_576[iParam1], Global_1380638.f_1135.f_587[iParam1]);
			break;
		
		case 6:
			func_175(iParam1, Global_1380638.f_3999[iParam1], &(Global_1380638.f_3999.f_11[iParam1 /*16*/]), Global_1380638.f_3999.f_183[iParam1], Global_1380638.f_3999.f_172[iParam1], Global_1380638.f_3999.f_194[iParam1], Global_1380638.f_3999.f_271[iParam1], &(Global_1380638.f_3999.f_282[iParam1 /*16*/]), Global_1380638.f_3999.f_443[iParam1], Global_1380638.f_3999.f_454[iParam1], Global_1380638.f_3999.f_497[iParam1], Global_1380638.f_3999.f_508[iParam1], Global_1380638.f_3999.f_205[iParam1], Global_1380638.f_3999.f_216[iParam1], Global_1380638.f_3999.f_227[iParam1], Global_1380638.f_3999.f_238[iParam1], Global_1380638.f_3999.f_249[iParam1], Global_1380638.f_3999.f_519[iParam1], Global_1380638.f_3999.f_530[iParam1], Global_1380638.f_3999.f_541[iParam1], Global_1380638.f_3999.f_552[iParam1], Global_1380638.f_3999.f_563[iParam1], Global_1380638.f_3999.f_574[iParam1], Global_1380638.f_3999.f_585[iParam1], Global_1380638.f_3999.f_596[iParam1], Global_1380638.f_3999.f_607[iParam1]);
			break;
		
		case 2:
			func_163(iParam1, Global_1380638.f_2078[iParam1], &(Global_1380638.f_2078.f_99[iParam1 /*16*/]), Global_1380638.f_2078.f_282[iParam1], Global_1380638.f_2078.f_293[iParam1], Global_1380638.f_2078.f_260[iParam1], Global_1380638.f_2078.f_11[iParam1], Global_1380638.f_2078.f_22[iParam1], Global_1380638.f_2078.f_33[iParam1], Global_1380638.f_2078.f_44[iParam1], Global_1380638.f_2078.f_55[iParam1], Global_1380638.f_2078.f_66[iParam1], Global_1380638.f_2078.f_77[iParam1], Global_1380638.f_2078.f_88[iParam1], Global_1380638.f_2078.f_271[iParam1], Global_1380638.f_2078.f_304[iParam1], Global_1380638.f_2078.f_357[iParam1], Global_1380638.f_2078.f_326[iParam1 /*3*/], Global_1380638.f_2078.f_326[iParam1 /*3*/].f_1, Global_1380638.f_2078.f_368[iParam1], Global_1380638.f_2078.f_379[iParam1], Global_1380638.f_2078.f_390[iParam1], Global_1380638.f_2078.f_401[iParam1], Global_1380638.f_2078.f_412[iParam1], Global_1380638.f_2078.f_423[iParam1], Global_1380638.f_2078.f_434[iParam1], Global_1380638.f_2078.f_445[iParam1], Global_1380638.f_2078.f_456[iParam1], Global_1380638.f_2078.f_467[iParam1], Global_1380638.f_2078.f_478[iParam1], Global_1380638.f_2078.f_489[iParam1], Global_1380638.f_2078.f_500[iParam1], Global_1380638.f_2078.f_511[iParam1], Global_1380638.f_2078.f_522[iParam1], Global_1380638.f_2078.f_533[iParam1], Global_1380638.f_2078.f_587[iParam1], Global_1380638.f_2078.f_598[iParam1], Global_1380638.f_2078.f_544[iParam1], Global_2553940[iParam1], Global_2553951[iParam1], Global_2553962[iParam1], Global_2553973[iParam1], Global_2553984[iParam1], Global_2553995[iParam1], Global_2554006[iParam1], Global_2554017[iParam1], Global_1380638.f_2078.f_609[iParam1], Global_1380638.f_2078.f_620[iParam1], Global_1380638.f_2078.f_631[iParam1], Global_1380638.f_2078.f_642[iParam1], Global_1380638.f_2078.f_653[iParam1], Global_1380638.f_2078.f_664[iParam1], Global_1380638.f_2078.f_675[iParam1], Global_1380638.f_2078.f_686[iParam1], Global_1380638.f_2078.f_697[iParam1], Global_1380638.f_2078.f_708[iParam1]);
			break;
		
		case 8:
			func_160(iParam1, &(Global_1380638.f_5018.f_11[iParam1 /*16*/]), Global_1380638.f_5018[iParam1], Global_1380638.f_5018.f_172[iParam1], Global_1380638.f_5018.f_183[iParam1], Global_1380638.f_5018.f_194[iParam1], Global_1380638.f_5018.f_205[iParam1]);
			break;
		
		case 9:
			func_154(iParam1, Global_1380638.f_5245[iParam1], Global_1380638.f_5245.f_11[iParam1]);
			break;
		
		case 10:
			func_139(iParam1, Global_1380638.f_5278.f_6[iParam1], Global_1380638.f_5278.f_17[iParam1], &(Global_1380638.f_5278.f_28[iParam1 /*16*/]), Global_1380638.f_5278.f_200[iParam1], Global_1380638.f_5278.f_189[iParam1], Global_1380638.f_5278.f_233[iParam1], Global_1380638.f_5278.f_211[iParam1], Global_1380638.f_5278.f_244[iParam1], Global_1380638.f_5278.f_287[iParam1], Global_1380638.f_5278.f_298[iParam1], &(Global_1380638.f_5278.f_309[iParam1 /*16*/]), &(Global_1380638.f_5278), Global_1380638.f_5278.f_470[iParam1], Global_1380638.f_5278.f_481[iParam1], Global_1380638.f_5278.f_492[iParam1]);
			break;
		
		case 11:
			func_135(iParam1, Global_1380638.f_5781[iParam1], Global_1380638.f_5781.f_11[iParam1], Global_1380638.f_5781.f_22[iParam1], Global_1380638.f_5781.f_33[iParam1], Global_1380638.f_5781.f_44[iParam1], Global_1380638.f_5781.f_55[iParam1], Global_1380638.f_5781.f_66[iParam1], Global_1380638.f_5781.f_77[iParam1], Global_1380638.f_5781.f_88[iParam1], Global_1380638.f_5781.f_110[iParam1], Global_1380638.f_5781.f_121[iParam1], Global_1380638.f_5781.f_132[iParam1], Global_1380638.f_5781.f_143[iParam1], Global_1380638.f_5781.f_154[iParam1]);
			break;
		
		case 12:
			func_125(iParam1, Global_1380638.f_5946[iParam1], Global_1380638.f_5946.f_22[iParam1], &(Global_1380638.f_5946.f_33[iParam1 /*6*/]), Global_1380638.f_5946.f_94[iParam1], Global_1380638.f_5946.f_11[iParam1], Global_1380638.f_5946.f_105[iParam1], Global_1380638.f_5946.f_116[iParam1], Global_1380638.f_5946.f_127[iParam1], Global_1380638.f_5946.f_138[iParam1], Global_1380638.f_5946.f_149[iParam1], Global_1380638.f_5946.f_160[iParam1], Global_1380638.f_5946.f_171[iParam1], Global_1380638.f_5946.f_182[iParam1], Global_1380638.f_5946.f_193[iParam1], Global_1380638.f_5946.f_204[iParam1], Global_1380638.f_5946.f_215[iParam1], Global_1380638.f_5946.f_226[iParam1], Global_1380638.f_5946.f_248[iParam1], Global_1380638.f_5946.f_259[iParam1], Global_1380638.f_5946.f_270[iParam1], Global_1380638.f_5946.f_281[iParam1], Global_1380638.f_5946.f_292[iParam1], Global_1380638.f_5946.f_303[iParam1], Global_1380638.f_5946.f_314[iParam1], Global_1380638.f_5946.f_325[iParam1], Global_1380638.f_5946.f_336[iParam1], Global_1380638.f_5946.f_347[iParam1], Global_1380638.f_5946.f_358[iParam1], Global_1380638.f_5946.f_369[iParam1], Global_1380638.f_5946.f_380[iParam1], Global_1380638.f_5946.f_391[iParam1]);
			break;
		
		case 13:
			func_44(iParam1, &(Global_1380638.f_6348[iParam1 /*16*/]), &(Global_1380638.f_6348.f_161[iParam1 /*16*/]), Global_1380638.f_6348.f_322[iParam1], Global_1380638.f_6348.f_333[iParam1], Global_1380638.f_6348.f_355[iParam1], Global_1380638.f_6348.f_366[iParam1], Global_1380638.f_6348.f_377[iParam1]);
			break;
	}
}

void func_217(bool bParam0)
{
	if (func_218())
	{
		if (bParam0)
		{
			unk_0x51D19921B47902B3(1);
		}
		else
		{
			unk_0x51D19921B47902B3(0);
		}
	}
}

int func_218()
{
	if (func_219(unk_0x1146A9AE09CE2B14()))
	{
		return 1;
	}
	return 0;
}

int func_219(int iParam0)
{
	switch (func_220(iParam0))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
		case 5:
		case 7:
		case 42:
		case 37:
		case 40:
		case 43:
			return 0;
		
		default:
	}
	return 1;
}

int func_220(int iParam0)
{
	return Global_1590908[iParam0 /*874*/].f_192;
}

int func_221(int iParam0)
{
	if (Global_2465049 == 1)
	{
		return 0;
	}
	if (func_224() == 0)
	{
		if (unk_0xA300BD5F71A8C704())
		{
			return 0;
		}
	}
	if ((iParam0 != 1 && Global_1380638.f_1124 == 0) && Global_1380638.f_1125 == 0)
	{
		if (func_222())
		{
			return 0;
		}
	}
	return 1;
}

int func_222()
{
	struct<3> Var0;
	
	if (Global_19798.f_1 > 3)
	{
		return 1;
	}
	if (func_223())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0x3AEC124A3999B3D1(&Var0);
		if (Global_19743 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
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

int func_223()
{
	if (unk_0x636F1F53CC61D2C9(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_224()
{
	return Global_31345;
}

bool func_225(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 14);
}

int func_226(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		
		case 7:
			return 0;
		
		case 3:
			return 1;
		
		case 4:
			return 2;
		
		case 5:
			return 3;
		
		case 1:
			return 4;
		
		case 0:
			return 5;
		
		case 6:
			return 6;
		
		case 2:
			return 7;
		
		case 8:
			return 8;
		
		case 9:
			return 9;
		
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

int func_227(int iParam0)
{
	if (func_228(iParam0))
	{
		return Global_1375082[iParam0];
	}
	return -1;
}

bool func_228(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 2);
}

int func_229(int iParam0)
{
	if (func_228(iParam0))
	{
		return Global_1375082[iParam0] != -1;
	}
	return 0;
}

int func_230()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (Global_1380638.f_6751[iVar0] != Global_1380638.f_6736[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	if (Global_1380638.f_6796)
	{
		Global_1380638.f_6796 = 0;
		return 1;
	}
	return 0;
}

void func_231()
{
	Global_1380638.f_6796 = 1;
}

int func_232(int iParam0)
{
	if (func_234(iParam0, 0))
	{
		return 1;
	}
	if (func_233())
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

bool func_233()
{
	return unk_0x234B68AC2E35ED5A(Global_2359302, 3);
}

bool func_234(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1146A9AE09CE2B14())
	{
		bVar0 = func_235(-1, 0) == 8;
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

int func_235(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_236();
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

int func_236()
{
	return Global_1312763;
}

int func_237()
{
	if (Global_1312385)
	{
		return 0;
	}
	if (Global_74428)
	{
		return 0;
	}
	if (unk_0xFAA3D6C1680108A5())
	{
		return 0;
	}
	if (Global_1678174.f_4)
	{
		return 0;
	}
	if (Global_1380638.f_1127 || Global_1380638.f_1128)
	{
		if (Global_1380638.f_1129 == 0)
		{
			if (func_241(unk_0x7D2B9E6A64637269()))
			{
				func_240();
			}
		}
		return 1;
	}
	if (func_51())
	{
		if (Global_1380638.f_1129 == 0)
		{
			if (func_241(unk_0x7D2B9E6A64637269()))
			{
				func_240();
			}
		}
		return 1;
	}
	if (Global_2465744)
	{
		return 0;
	}
	if (Global_1315714)
	{
		return 0;
	}
	if (func_239())
	{
		if (Global_1380638.f_1129 == 0)
		{
			if (func_241(unk_0x7D2B9E6A64637269()))
			{
				func_240();
			}
		}
		return 1;
	}
	if (Global_22531.f_4 && func_219(unk_0x1146A9AE09CE2B14()) == 0)
	{
		return 0;
	}
	if (unk_0xF471787D45ADC2C1())
	{
		return 0;
	}
	if (Global_1380638.f_1129 == 0)
	{
		if (func_241(unk_0x7D2B9E6A64637269()))
		{
			func_240();
		}
	}
	if (func_238(8, -1))
	{
		return 0;
	}
	if (unk_0x78F25615D0329EB1() == 0)
	{
		return 0;
	}
	if (func_224() == 0)
	{
		if (Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_231 != 99)
		{
			if (((unk_0xDD14CDB3B8003696() == 0 && Global_1574416 == 0) && !unk_0x234B68AC2E35ED5A(Global_2441237.f_2012.f_756, 11)) && Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/] != 0)
			{
				return 0;
			}
		}
	}
	if (unk_0x234B68AC2E35ED5A(Global_2359302, 11))
	{
		return 0;
	}
	return 1;
}

bool func_238(int iParam0, int iParam1)
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

int func_239()
{
	if (Global_1659937)
	{
		return 1;
	}
	return 0;
}

void func_240()
{
	Global_1380638.f_1129 = 1;
}

int func_241(var uParam0)
{
	int iVar0;
	
	if (unk_0x8ACA9ACB93EC151E())
	{
		if (!unk_0xECEC7528A52B4EE8(uParam0))
		{
			unk_0xBDC364B886846D11(uParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_242()
{
	int iVar0;
	
	if (func_245(2))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_29(2, iVar0) && func_28(2, iVar0))
			{
				func_16(&(Global_1380638.f_2078.f_555[iVar0 /*2*/]));
			}
			else if (func_247(&(Global_1380638.f_2078.f_555[iVar0 /*2*/]), Global_1380638.f_2078.f_576[iVar0], 0) == 0)
			{
				Global_1380638.f_1 = 1;
				func_244(2, iVar0);
			}
			else
			{
				func_243(2, iVar0);
			}
			iVar0++;
		}
	}
}

void func_243(int iParam0, int iParam1)
{
	unk_0xC664C0067EEAB8D1(&(Global_1380638.f_6781[iParam0]), iParam1);
}

void func_244(int iParam0, int iParam1)
{
	unk_0x191DDA30577F440A(&(Global_1380638.f_6736[iParam0]), iParam1);
}

int func_245(int iParam0)
{
	if (Global_1380638.f_6781[iParam0] > 0)
	{
		return 1;
	}
	return 0;
}

void func_246(int iParam0)
{
	Global_1380638.f_1121 = iParam0;
}

int func_247(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_75(uParam0, bParam2, 0);
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

