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
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
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
	float fLocal_65 = 0f;
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
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = -1;
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
	struct<2> Local_111 = { 0, 0 } ;
	struct<5> Local_112[32];
	struct<474> Local_113 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<246> Local_114 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	iLocal_35 = 3;
	iLocal_41 = 1;
	iLocal_42 = 65;
	iLocal_43 = 49;
	iLocal_44 = 64;
	fLocal_65 = ((0.05f + 0.275f) - 0.01f);
	if (unk_0x9315DBF7D972F07A())
	{
		func_882();
	}
	else
	{
		func_879();
	}
	while (true)
	{
		wait(0);
		if (func_867())
		{
			func_879();
		}
		func_10();
		if (unk_0x54E30A65F4FA4962())
		{
			func_1();
		}
	}
}

void func_1()
{
	func_2();
}

void func_2()
{
	if (func_9())
	{
		func_3();
	}
}

void func_3()
{
	int iVar0;
	int iVar1;
	
	if (Local_111 == func_8())
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = unk_0xA1087A6350CD9244(iVar0);
			if (func_7(iVar1))
			{
				if (func_6(iVar1, 1, 1))
				{
					if (func_5(iVar1))
					{
						Local_111 = iVar1;
					}
				}
			}
			iVar0++;
		}
	}
	else if (func_4())
	{
		Local_111 = func_8();
	}
}

int func_4()
{
	if (Local_111 == func_8())
	{
		return 1;
	}
	if (!func_5(Local_111))
	{
		return 1;
	}
	if (!unk_0x976D40337FCB1481(Local_111))
	{
		return 1;
	}
	if (!func_6(Local_111, 1, 1))
	{
		return 1;
	}
	return 0;
}

bool func_5(int iParam0)
{
	if (iParam0 == func_8())
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_379.f_2, 10);
}

int func_6(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x0D01086B38EC256F(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x3583A42587543334(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2703656.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_7(int iParam0)
{
	if (iParam0 != func_8())
	{
		return unk_0x976D40337FCB1481(iParam0);
	}
	return 0;
}

int func_8()
{
	return -1;
}

bool func_9()
{
	return (unk_0x8142A6539DDC180F() % 3) == 0;
}

void func_10()
{
	func_865();
	func_92();
	func_90();
	func_85();
	func_83();
	func_81();
	func_76();
	func_74(0);
	func_73();
	func_68();
	func_65();
	func_63();
	func_11();
}

void func_11()
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<4> Var5;
	
	if (func_61())
	{
		return;
	}
	if (!unk_0xE9E8955A780DDA01())
	{
		return;
	}
	if (unk_0x44859561F653DD4E())
	{
		return;
	}
	if (unk_0xC96A605CF3E9295B())
	{
		return;
	}
	if (!unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()))
	{
		return;
	}
	if (func_25(0, 0))
	{
		return;
	}
	if (!unk_0xE2D0C323A1AE5D85(Local_113.f_1, 5))
	{
		if (func_23())
		{
			iVar1 = func_21(8351, -1, 0);
			iVar2 = unk_0x48352343BC5A41AE();
			iVar3 = (iVar1 - iVar2);
			if (iVar3 > 0)
			{
				unk_0x2351AD81CE3040E7(iVar3, &Var0);
				iVar4 = (Var0.f_3 * 3600000);
				iVar4 = (iVar4 + (Var0.f_4 * 60000));
				iVar4 = (iVar4 + Var0.f_5 * 1000);
				Var5 = { func_20(iVar4, 0, 0) };
				unk_0x150D8F58B26E9F70("CAS_WHEEL_TR");
				unk_0x76DB21247AE4E4E2(&Var5);
				unk_0x187DF98ED95E5557(1, 1);
			}
		}
		else
		{
			func_12("CAS_WHEEL_RE", 0);
		}
		unk_0xCED9E32812D6C7C7(&(Local_113.f_1), 5);
	}
}

int func_12(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 1;
	if (bParam1)
	{
		iVar1 = 2;
	}
	unk_0x150D8F58B26E9F70(sParam0);
	iVar0 = unk_0x187DF98ED95E5557(0, 1);
	func_13(0, sParam0, iVar1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_13(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_19() || !unk_0x44859561F653DD4E()) || !func_16(unk_0x9E2D6C50374FCFA9(), 0))
	{
		return;
	}
	iVar0 = func_14(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1941032.f_5[iVar0 /*53*/] = iParam0;
		Global_1941032.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1941032.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1941032.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1941032.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1941032.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1941032.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1941032.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1941032.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1941032.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1941032.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1941032.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_14(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1941032 - 1))
	{
		if (iParam0 > Global_1941032.f_5[iVar0 /*53*/].f_1)
		{
			func_15(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1941032++;
	if (Global_1941032 > 5)
	{
		Global_1941032 = 5;
		return Global_1941032;
	}
	return (Global_1941032 - 1);
}

void func_15(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1941032.f_5[iVar0 /*53*/] = { Global_1941032.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_16(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		bVar0 = func_17(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853128[iParam0 /*888*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x0D01086B38EC256F(iParam0))
		{
			bVar0 = unk_0x0E40F846A70BA3EC(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_17(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_18();
	}
	if (Global_1575026[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574901[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_18()
{
	return Global_1574907;
}

bool func_19()
{
	return unk_0x014D8C5910A5B01B(-1762644250);
}

struct<4> func_20(int iParam0, bool bParam1, int iParam2)
{
	struct<4> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	StringCopy(&Var0, "", 16);
	if (iParam0 > 0 || (iParam2 && iParam0 == 0))
	{
		iVar5 = iParam0;
		iVar1 = floor(to_float((iVar5 / 3600000)));
		iVar5 = (iVar5 - (iVar1 * 3600000));
		iVar2 = floor(to_float((iVar5 / 60000)));
		iVar5 = (iVar5 - (iVar2 * 60000));
		iVar3 = floor(to_float((iVar5 / 1000)));
		iVar5 = (iVar5 - iVar3 * 1000);
		iVar4 = iVar5;
		if (iVar1 > 0)
		{
			StringIntConCat(&Var0, iVar1, 16);
			StringConCat(&Var0, ":", 16);
			if (iVar2 < 10)
			{
				StringConCat(&Var0, "0", 16);
				StringIntConCat(&Var0, iVar2, 16);
			}
			else
			{
				StringIntConCat(&Var0, iVar2, 16);
			}
			StringConCat(&Var0, ":", 16);
			if (iVar3 < 10)
			{
				StringConCat(&Var0, "0", 16);
				StringIntConCat(&Var0, iVar3, 16);
			}
			else
			{
				StringIntConCat(&Var0, iVar3, 16);
			}
		}
		else
		{
			if (iVar2 < 10)
			{
				StringConCat(&Var0, "0", 16);
				StringIntConCat(&Var0, iVar2, 16);
			}
			else
			{
				StringIntConCat(&Var0, iVar2, 16);
			}
			StringConCat(&Var0, ":", 16);
			if (iVar3 < 10)
			{
				StringConCat(&Var0, "0", 16);
				StringIntConCat(&Var0, iVar3, 16);
			}
			else
			{
				StringIntConCat(&Var0, iVar3, 16);
			}
			if (bParam1)
			{
				StringConCat(&Var0, ":", 16);
				if (iVar4 > 100)
				{
					StringIntConCat(&Var0, iVar4, 16);
				}
				else if (iVar4 > 10)
				{
					StringConCat(&Var0, "0", 16);
					StringIntConCat(&Var0, iVar4, 16);
				}
				else
				{
					StringConCat(&Var0, "00", 16);
					StringIntConCat(&Var0, iVar4, 16);
				}
			}
		}
	}
	else
	{
		StringCopy(&Var0, "---", 16);
	}
	return Var0;
}

int func_21(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 12597)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2821895[iParam0 /*3*/][func_22(iParam1)];
		if (unk_0x61481F9FBB1C7EDD(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_22(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_18();
		if (iVar1 > -1)
		{
			Global_2821607 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2821607 = 1;
		}
	}
	return iVar0;
}

int func_23()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_21(8351, -1, 0);
	iVar1 = func_24(joaat("mpply_lucky_wheel_usage"));
	iVar2 = unk_0x48352343BC5A41AE();
	if (iVar2 > iVar0 && iVar2 > iVar1)
	{
		return 0;
	}
	return 1;
}

int func_24(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x61481F9FBB1C7EDD(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_25(bool bParam0, bool bParam1)
{
	int iVar0;
	var uVar1;
	bool bVar2;
	
	iVar0 = 0;
	if (unk_0x44859561F653DD4E())
	{
		return 1;
	}
	if (bParam1)
	{
		if (!func_58(8.7587f))
		{
			return 1;
		}
	}
	if (func_56(unk_0xE2D3D51028F0428A()))
	{
		return 1;
	}
	if (Global_2667222.f_2679)
	{
		return 1;
	}
	if (func_55())
	{
		return 1;
	}
	if (bParam1)
	{
		if (!func_53())
		{
			return 1;
		}
	}
	if (func_52())
	{
		return 1;
	}
	if (func_51(0))
	{
		return 1;
	}
	if (unk_0xF1EC2C71FD1371B8())
	{
		return 1;
	}
	if (func_50())
	{
		return 1;
	}
	if (func_49())
	{
		return 1;
	}
	if (func_48(1))
	{
		return 1;
	}
	bVar2 = func_47(0);
	if (Global_262145.f_26593)
	{
		if (bVar2)
		{
			if ((!unk_0xF847447D4467709D() && !unk_0x2D3AAABB780ED9B6()) && !func_50())
			{
				func_46("CASINO_LUCK_WD", -1);
			}
		}
		iVar0 = 1;
	}
	if (!func_45(unk_0x9E2D6C50374FCFA9()))
	{
		if ((bVar2 && !unk_0xE2D0C323A1AE5D85(Global_1946934.f_6, 4)) && !func_44(4, &uVar1))
		{
			if ((!unk_0xF847447D4467709D() && !unk_0x2D3AAABB780ED9B6()) && !func_50())
			{
				unk_0xCED9E32812D6C7C7(&(Global_1946934.f_6), 4);
				func_42("CAS_MG_MEMB2", func_43(0), -1);
			}
		}
		iVar0 = 1;
	}
	if (bParam0)
	{
		if (func_23())
		{
			if (bVar2 && !func_41(20))
			{
				if ((!unk_0xF847447D4467709D() && !unk_0x2D3AAABB780ED9B6()) && !func_50())
				{
					func_46("LUCKY_WHEEL_US", -1);
					func_40(20);
				}
			}
			iVar0 = 1;
		}
	}
	if (bParam1)
	{
		if (bVar2)
		{
			if (!func_39())
			{
				if (func_38("LW_PLAY"))
				{
					unk_0x3410421C60BF7143(1);
				}
				if ((!unk_0xF847447D4467709D() && !unk_0x2D3AAABB780ED9B6()) && !func_50())
				{
					func_46("POD_TOO_MANY", -1);
				}
				iVar0 = 1;
			}
			else if (func_38("POD_TOO_MANY"))
			{
				unk_0x3410421C60BF7143(1);
			}
		}
		else if (func_38("POD_TOO_MANY"))
		{
			unk_0x3410421C60BF7143(1);
		}
	}
	if (unk_0xE2D0C323A1AE5D85(Local_113.f_1, 1))
	{
		iVar0 = 1;
	}
	if (unk_0xE2D0C323A1AE5D85(Global_1946934.f_4, 2))
	{
		iVar0 = 1;
	}
	if (func_28())
	{
		iVar0 = 1;
	}
	if (func_44(4, &uVar1))
	{
		if (bVar2)
		{
			if (!unk_0xF847447D4467709D() && !unk_0x2D3AAABB780ED9B6())
			{
				func_46("CAS_LW_REGL", -1);
				func_40(28);
			}
		}
		iVar0 = 1;
	}
	if (Global_1966323 != 0)
	{
		iVar0 = 1;
	}
	if (unk_0xC96A605CF3E9295B())
	{
		iVar0 = 1;
	}
	if (func_26())
	{
		return 1;
	}
	if (func_52())
	{
		return 1;
	}
	return iVar0;
}

int func_26()
{
	if (((func_27() != -1 && func_27() != 28) && func_27() != 17) && func_27() != 12)
	{
		return 1;
	}
	return 0;
}

int func_27()
{
	return Global_1057405;
}

int func_28()
{
	int iVar0;
	
	if (func_36(unk_0x9E2D6C50374FCFA9(), 1))
	{
		iVar0 = func_35();
		if (func_6(iVar0, 1, 1) && unk_0xE2D0C323A1AE5D85(Global_1853128[iVar0 /*888*/].f_267.f_379.f_3, 6))
		{
			return 1;
		}
		if ((func_34(unk_0x9E2D6C50374FCFA9(), 0) && func_32(unk_0x9E2D6C50374FCFA9())) || func_29(unk_0x9E2D6C50374FCFA9()))
		{
			return 1;
		}
	}
	return 0;
}

int func_29(int iParam0)
{
	if (func_31(iParam0) != func_8())
	{
		return func_31(iParam0) == func_30(iParam0);
	}
	return 0;
}

int func_30(int iParam0)
{
	if (iParam0 != func_8())
	{
		return Global_1893548[iParam0 /*600*/].f_11;
	}
	return func_8();
}

int func_31(int iParam0)
{
	return Global_1893548[iParam0 /*600*/].f_11.f_35;
}

int func_32(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_33(iParam0, 9);
	}
	return 0;
}

bool func_33(int iParam0, int iParam1)
{
	return unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_11.f_4, iParam1);
}

int func_34(int iParam0, int iParam1)
{
	if (Global_1893548[iParam0 /*600*/].f_11.f_33 != -1 || (iParam1 && Global_1893548[iParam0 /*600*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

var func_35()
{
	return Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11;
}

bool func_36(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_37(iParam0))
		{
			return 0;
		}
	}
	return Global_1893548[iParam0 /*600*/].f_11 != func_8();
}

int func_37(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (Global_1893548[iParam0 /*600*/].f_11 != func_8())
		{
			return Global_1893548[iParam0 /*600*/].f_11 == iParam0;
		}
	}
	return 0;
}

bool func_38(char* sParam0)
{
	unk_0xB65782D82090BB33(sParam0);
	return unk_0x73CB3406A86A3A02(0);
}

int func_39()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0xA1087A6350CD9244(iVar0);
		if (func_6(iVar1, 1, 1) && !unk_0x4FE8FD62895D0A5A(iVar1))
		{
			if (iVar1 != unk_0x9E2D6C50374FCFA9())
			{
				iVar2 = unk_0x407E03586628E458(iVar1);
				if (unk_0xE5965CDF24F93A9F(iVar2) && unk_0xD132EDDA78FF4A51(iVar2, 1109.469f, 228.9432f, -50.64041f, 1111.215f, 228.8777f, -48.39041f, 1.82f, 0, 1, 0))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_40(int iParam0)
{
	if (!unk_0xE2D0C323A1AE5D85(Local_113, iParam0))
	{
		unk_0xCED9E32812D6C7C7(&Local_113, iParam0);
	}
}

bool func_41(int iParam0)
{
	return unk_0xE2D0C323A1AE5D85(Local_113, iParam0);
}

void func_42(char* sParam0, int iParam1, int iParam2)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x2AE954BA77A66307(iParam1);
	unk_0x89B545A74F93B1DD(0, 0, 1, iParam2);
}

int func_43(bool bParam0)
{
	if (bParam0)
	{
		return 500;
	}
	return 500;
}

int func_44(int iParam0, var uParam1)
{
	int iVar0;
	
	*uParam1 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = -850297695;
			break;
		
		case 1:
			iVar0 = 1316161270;
			break;
		
		case 2:
			iVar0 = 1023703758;
			break;
		
		case 5:
			iVar0 = 1045499606;
			break;
		
		case 3:
			iVar0 = 1697066635;
			break;
		
		case 4:
			iVar0 = 1144169546;
			break;
	}
	if (!unk_0x910C57E77EFCF8CD(iVar0))
	{
		return 1;
	}
	return 0;
}

bool func_45(int iParam0)
{
	if (iParam0 == func_8())
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_379.f_1, 18);
}

void func_46(char* sParam0, int iParam1)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x89B545A74F93B1DD(0, 0, 1, iParam1);
}

int func_47(bool bParam0)
{
	if (bParam0)
	{
		if ((unk_0x8142A6539DDC180F() % 3) == 0)
		{
			return unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 1110.995f, 228.9034f, -50.6408f, 1109.727f, 228.9352f, -48.3908f, 1.5f, 0, 1, 0);
		}
	}
	else
	{
		return unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 1110.995f, 228.9034f, -50.6408f, 1109.727f, 228.9352f, -48.3908f, 1.5f, 0, 1, 0);
	}
	return 0;
}

bool func_48(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22691.f_4 && Global_22691.f_104 == 4);
	}
	return Global_22691.f_4;
}

int func_49()
{
	if (Global_2703656.f_847.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_50()
{
	return Global_75021;
}

int func_51(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19954.f_1 > 3)
		{
			if (unk_0xE2D0C323A1AE5D85(Global_7824, 14))
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
	if (unk_0xB4C854DD86E40FDA(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19954.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_52()
{
	return Global_2810287.f_6719;
}

bool func_53()
{
	return vdist(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), func_54()) < 5f;
}

Vector3 func_54()
{
	return 1111.052f, 229.8492f, -50.6409f;
}

int func_55()
{
	if (unk_0x44859561F653DD4E())
	{
		return unk_0xE2D0C323A1AE5D85(Global_4718592.f_34, 4);
	}
	return 0;
}

int func_56(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_57(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_57(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_43560[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_43560[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_58(float fParam0)
{
	struct<3> Var0;
	float fVar1;
	
	Var0 = { func_60(unk_0x6DB7FBD602C51670(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), fParam0, 0f, 1f, 0f) - unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1)) };
	fVar1 = func_59(unk_0x63BEA94AB58D4E6D(unk_0xE2D3D51028F0428A()), Var0);
	if (fVar1 >= 0f)
	{
		return 1;
	}
	return 0;
}

float func_59(struct<3> Param0, struct<3> Param1)
{
	return (((Param0.x * Param1.x) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

Vector3 func_60(struct<3> Param0)
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

int func_61()
{
	if (func_62())
	{
		return Global_1946934.f_519 == 0;
	}
	return 0;
}

bool func_62()
{
	return Global_1946934.f_518;
}

void func_63()
{
	if ((unk_0x8142A6539DDC180F() % 30) == 0)
	{
		if (unk_0x61ADF697DF551DA6(Global_262145.f_26423))
		{
			if (func_21(8518, -1, 0) != Global_262145.f_26423)
			{
				unk_0xCED9E32812D6C7C7(&Global_1852991, 17);
				func_64(8518, Global_262145.f_26423, -1, 1, 0);
			}
		}
	}
}

void func_64(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2821895[iParam0 /*3*/][func_22(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, iParam1, iParam3);
	}
}

void func_65()
{
	int iVar0;
	
	if (Local_113.f_45 == 0)
	{
		if (unk_0xE2D0C323A1AE5D85(Local_113.f_1, 4))
		{
			iVar0 = func_67(26806, -1);
			if (iVar0 < 4)
			{
				if (!unk_0xF847447D4467709D() && !unk_0x2D3AAABB780ED9B6())
				{
					func_46("CAS_LW_VOUCH", -1);
					iVar0++;
					func_66(26806, iVar0, -1);
					unk_0xB0550BC91B0159D6(&(Local_113.f_1), 4);
				}
			}
			else
			{
				unk_0xB0550BC91B0159D6(&(Local_113.f_1), 4);
			}
		}
	}
}

void func_66(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_18();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	unk_0x1581503AE529CD2E(iParam0, iParam1, iParam2);
}

int func_67(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_18();
	}
	return unk_0x0BC900A6FE73770C(iParam0, iParam1);
}

void func_68()
{
	if (unk_0xE2D0C323A1AE5D85(Local_113.f_1, 2))
	{
		if (!func_72(&(Local_113.f_43)))
		{
			func_71(&(Local_113.f_43), 0, 0);
		}
		else if (func_70(&(Local_113.f_43), 40000, 0) || (!unk_0x2D3AAABB780ED9B6() && !unk_0xF847447D4467709D()))
		{
			unk_0xB0550BC91B0159D6(&(Local_113.f_1), 2);
			func_69(&(Local_113.f_43));
		}
	}
}

void func_69(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_70(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_71(uParam0, bParam2, 0);
	if (unk_0x9315DBF7D972F07A() && !bParam2)
	{
		if (unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x320D1840B6DAA1CC(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_71(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x9315DBF7D972F07A() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x0A89FDFA763DCAED();
			}
			else
			{
				*uParam0 = unk_0xE75390F3CA208D5E();
			}
		}
		else
		{
			*uParam0 = unk_0x320D1840B6DAA1CC();
		}
		uParam0->f_1 = 1;
	}
}

bool func_72(var uParam0)
{
	return uParam0->f_1;
}

void func_73()
{
	if (Global_1644209.f_1149 >= 30000)
	{
		if (Local_111 != unk_0x9E2D6C50374FCFA9())
		{
			func_74(1);
		}
	}
}

void func_74(int iParam0)
{
	struct<3> Var0;
	int iVar1;
	
	if (Local_111 != func_8() || iParam0 == 1)
	{
		if (Local_111 != unk_0x9E2D6C50374FCFA9() || iParam0 == 1)
		{
			if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 1109.16f, 228.4484f, -50.63083f, 1112.186f, 228.9841f, -48.13083f, 2.75f, 0, 1, 0))
			{
				if (!unk_0xE2D0C323A1AE5D85(Local_113.f_1, 1))
				{
					iVar1 = unk_0x5853B15F78E1A265(0, 6);
					func_75(iVar1, &Var0);
					unk_0x7D1424753688EE7A(unk_0xE2D3D51028F0428A(), Var0, 1f, -1, 1048576000, 0, 1193033728);
					unk_0xCED9E32812D6C7C7(&(Local_113.f_1), 1);
				}
			}
			else if (unk_0x174CED88B97C78D9(unk_0xE2D3D51028F0428A(), 713668775) != 1 && unk_0x174CED88B97C78D9(unk_0xE2D3D51028F0428A(), 713668775) != 0)
			{
				if (unk_0xE2D0C323A1AE5D85(Local_113.f_1, 1))
				{
					unk_0xB0550BC91B0159D6(&(Local_113.f_1), 1);
				}
			}
		}
		else if (unk_0x174CED88B97C78D9(unk_0xE2D3D51028F0428A(), 713668775) != 1 && unk_0x174CED88B97C78D9(unk_0xE2D3D51028F0428A(), 713668775) != 0)
		{
			if (unk_0xE2D0C323A1AE5D85(Local_113.f_1, 1))
			{
				unk_0xB0550BC91B0159D6(&(Local_113.f_1), 1);
			}
		}
	}
	else if (unk_0x174CED88B97C78D9(unk_0xE2D3D51028F0428A(), 713668775) != 1 && unk_0x174CED88B97C78D9(unk_0xE2D3D51028F0428A(), 713668775) != 0)
	{
		if (unk_0xE2D0C323A1AE5D85(Local_113.f_1, 1))
		{
			unk_0xB0550BC91B0159D6(&(Local_113.f_1), 1);
		}
	}
}

void func_75(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1114.812f, 226.8861f, -50.8408f };
			break;
		
		case 1:
			*uParam1 = { 1115.391f, 222.8374f, -50.4301f };
			break;
		
		case 2:
			*uParam1 = { 1111.762f, 223.4791f, -50.8408f };
			break;
		
		case 3:
			*uParam1 = { 1110.287f, 222.9306f, -50.8408f };
			break;
		
		case 4:
			*uParam1 = { 1108.957f, 223.4897f, -50.8408f };
			break;
		
		case 5:
			*uParam1 = { 1106.042f, 226.8098f, -50.8408f };
			break;
	}
}

void func_76()
{
	if (func_41(24))
	{
		Local_113.f_23 = func_79();
		unk_0x8FB472886552D737(Local_113.f_23);
		if (unk_0x6F940C2636C076AD(Local_113.f_23))
		{
			Local_113.f_10 = Local_111.f_1;
			func_78(14);
			func_77(24);
		}
	}
}

void func_77(int iParam0)
{
	if (unk_0xE2D0C323A1AE5D85(Local_113, iParam0))
	{
		unk_0xB0550BC91B0159D6(&Local_113, iParam0);
	}
}

void func_78(int iParam0)
{
	Local_113.f_45 = iParam0;
}

char* func_79()
{
	char* sVar0;
	
	if (func_80(unk_0xE2D3D51028F0428A()))
	{
		sVar0 = "ANIM_CASINO_A@AMB@CASINO@GAMES@LUCKY7WHEEL@FEMALE";
	}
	else
	{
		sVar0 = "ANIM_CASINO_A@AMB@CASINO@GAMES@LUCKY7WHEEL@MALE";
	}
	return sVar0;
}

int func_80(int iParam0)
{
	if (((((((((unk_0x15CAA6D7B11F1A7C(iParam0) == joaat("mp_f_freemode_01") || unk_0x15CAA6D7B11F1A7C(iParam0) == joaat("mp_f_weed_01")) || unk_0x15CAA6D7B11F1A7C(iParam0) == joaat("mp_f_forgery_01")) || unk_0x15CAA6D7B11F1A7C(iParam0) == joaat("mp_f_cocaine_01")) || unk_0x15CAA6D7B11F1A7C(iParam0) == joaat("mp_f_counterfeit_01")) || unk_0x15CAA6D7B11F1A7C(iParam0) == joaat("s_f_y_sweatshop_01")) || unk_0x15CAA6D7B11F1A7C(iParam0) == joaat("a_f_y_bevhills_04")) || unk_0x15CAA6D7B11F1A7C(iParam0) == joaat("a_f_y_genhot_01")) || unk_0x15CAA6D7B11F1A7C(iParam0) == joaat("a_f_y_scdressy_01")) || unk_0x15CAA6D7B11F1A7C(iParam0) == joaat("ig_tracydisanto"))
	{
		return 1;
	}
	return 0;
}

void func_81()
{
	if (func_41(0))
	{
		unk_0xCAFE3D4FD6C43219();
		unk_0xDD0B677578E78E45(0);
		func_82();
	}
}

void func_82()
{
	Global_22691.f_6 = 1;
}

void func_83()
{
	if (func_84())
	{
		unk_0x01727103DD974710(5891389);
	}
}

int func_84()
{
	if (Local_113.f_45 >= 5 && Local_113.f_45 <= 12)
	{
		return 1;
	}
	if (Local_113.f_45 == 13)
	{
		return 1;
	}
	if (Local_113.f_45 == 4)
	{
		if (unk_0x174CED88B97C78D9(unk_0xE2D3D51028F0428A(), 2106541073) != 1 && unk_0x174CED88B97C78D9(unk_0xE2D3D51028F0428A(), 2106541073) != 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_85()
{
	if (Local_113.f_17 < 6 && Local_113.f_17 != -1)
	{
		if (!func_72(&(Local_113.f_35)))
		{
			func_89();
			func_88();
			func_71(&(Local_113.f_35), 0, 0);
		}
		else if (func_70(&(Local_113.f_35), 250, 0) && !func_72(&(Local_113.f_37)))
		{
			func_87();
			if (Local_113.f_17 != 5)
			{
				func_86();
			}
			func_71(&(Local_113.f_37), 0, 0);
			Local_113.f_17++;
		}
		else if (func_72(&(Local_113.f_37)))
		{
			if (func_70(&(Local_113.f_37), 250, 0))
			{
				func_69(&(Local_113.f_37));
				func_69(&(Local_113.f_35));
			}
		}
	}
	else if (Local_113.f_17 == 6)
	{
		Local_113.f_17 = -1;
	}
}

void func_86()
{
	unk_0xE87A5B1B96B0EC6F(1111.052f, 229.849f, -50.641f, 5f, joaat("vw_prop_vw_jackpot_on"), 0);
}

void func_87()
{
	unk_0xE87A5B1B96B0EC6F(1111.052f, 229.849f, -50.641f, 2f, joaat("vw_prop_vw_luckylight_on"), 0);
}

void func_88()
{
	unk_0xA1F6E5EF42ACDB8C(1111.052f, 229.849f, -50.641f, 5f, joaat("vw_prop_vw_jackpot_on"), 0);
}

void func_89()
{
	unk_0xA1F6E5EF42ACDB8C(1111.052f, 229.849f, -50.641f, 2f, joaat("vw_prop_vw_luckylight_on"), 0);
}

void func_90()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < unk_0x9418088815C89D59(1))
	{
		iVar1 = unk_0xB1D84E0EF6979085(1, iVar0);
		switch (iVar1)
		{
			case 174:
				unk_0x92039F20B184AB4D(1, iVar0, &iVar2, 2);
				if (iVar2 == 2032669874)
				{
					if (Global_1659375.f_795)
					{
						return;
					}
					func_91(iVar0);
				}
				break;
		}
		iVar0++;
	}
}

void func_91(int iParam0)
{
	struct<4> Var0;
	
	if (unk_0x92039F20B184AB4D(1, iParam0, &Var0, 4))
	{
		if (unk_0x54E30A65F4FA4962())
		{
			Local_111.f_1 = Var0.f_2;
		}
		if (unk_0x9E2D6C50374FCFA9() != Var0.f_1 && Var0.f_3)
		{
			func_40(24);
		}
	}
}

void func_92()
{
	switch (Local_113.f_45)
	{
		case 0:
			func_864();
			if (Local_113.f_17 == -1)
			{
				if (!func_41(23))
				{
					func_87();
					func_40(23);
				}
			}
			if (!func_863())
			{
				if (!func_41(0) && !func_25(1, 1))
				{
					func_862();
					if (func_859())
					{
						func_858(unk_0x9E2D6C50374FCFA9(), 1);
						func_857();
						func_844();
						func_40(0);
						func_78(1);
					}
				}
				else
				{
					func_842();
				}
			}
			if (!unk_0xE2D0C323A1AE5D85(Local_113.f_1, 0) && unk_0xE5965CDF24F93A9F(Local_113.f_72))
			{
				if (Local_111.f_1 != Local_113.f_14 && Local_111 == func_8())
				{
					unk_0x8CE3D365F064F69E(Local_113.f_72, 0f, -func_841(Local_111.f_1), 0f, 2, 1);
					Local_113.f_14 = Local_111.f_1;
					unk_0xCED9E32812D6C7C7(&(Local_113.f_1), 0);
				}
				else if (Local_111 == unk_0x9E2D6C50374FCFA9())
				{
					unk_0xCED9E32812D6C7C7(&(Local_113.f_1), 0);
				}
			}
			break;
		
		case 1:
			if (Local_111 == unk_0x9E2D6C50374FCFA9())
			{
				func_840(unk_0x9E2D6C50374FCFA9(), 1);
				func_839(0);
				if (!unk_0xE2D0C323A1AE5D85(Local_113.f_1, 3))
				{
					func_71(&(Local_113.f_41), 0, 0);
					func_78(2);
				}
				else
				{
					func_78(3);
				}
			}
			else if (func_70(&(Local_113.f_29), 1500, 0))
			{
				func_78(17);
			}
			break;
		
		case 2:
			func_829();
			break;
		
		case 3:
			func_821();
			if (func_41(8))
			{
				func_78(4);
			}
			break;
		
		case 4:
			func_821();
			if (func_41(9))
			{
				func_78(5);
			}
			break;
		
		case 5:
			func_820();
			break;
		
		case 7:
			func_819();
			break;
		
		case 6:
			func_814();
			break;
		
		case 8:
			func_813();
			func_809();
			if (func_41(5))
			{
				Local_113.f_10 = Local_111.f_1;
				if (!func_808(unk_0x9E2D6C50374FCFA9()))
				{
					Local_113.f_458 = unk_0x48352343BC5A41AE();
					func_807(Local_113.f_10, 1);
					func_40(21);
					func_806(1);
				}
				func_71(&(Local_113.f_33), 0, 0);
				func_78(13);
				if (func_38("LUCK_WHEEL_SPIN") || func_38("LUCK_W_SPIN_PC"))
				{
					unk_0x3410421C60BF7143(1);
				}
			}
			break;
		
		case 13:
			if (func_72(&(Local_113.f_33)))
			{
				if (func_70(&(Local_113.f_33), 190, 0))
				{
					func_795(func_804(func_805(unk_0x9E2D6C50374FCFA9())), 0, 0, 1, 0);
					func_69(&(Local_113.f_33));
					func_794(173);
					Local_113.f_452 = 1f;
					func_78(9);
					if (unk_0x54E30A65F4FA4962())
					{
						Local_111.f_1 = func_793(Local_111);
					}
				}
			}
			break;
		
		case 9:
			if (unk_0xE5965CDF24F93A9F(Local_113.f_72) && unk_0x8DEF8D80C66C34D4(Local_113.f_72))
			{
				func_791();
			}
			func_790(Local_113.f_452);
			func_789(Local_113.f_452);
			if (func_786(func_804(func_805(unk_0x9E2D6C50374FCFA9())), 0, 0))
			{
				func_795(func_785(func_805(unk_0x9E2D6C50374FCFA9())), 0, 1, 1, 0);
			}
			if (func_784(0))
			{
				func_40(14);
			}
			if ((func_41(14) && unk_0xE5965CDF24F93A9F(Local_113.f_72)) && unk_0x8DEF8D80C66C34D4(Local_113.f_72))
			{
				func_766(0);
			}
			break;
		
		case 10:
			if (Local_113.f_455 != -1)
			{
				unk_0xCDBCC1BC1184B002(Local_113.f_455);
				Local_113.f_455 = -1;
			}
			func_77(14);
			if (func_786(func_765(), 0, 1))
			{
				if (func_764())
				{
					func_762();
				}
				func_77(17);
				func_69(&(Local_113.f_74.f_359));
				func_78(11);
			}
			break;
		
		case 11:
			if (func_179())
			{
				func_40(21);
				func_168();
				func_158();
				Local_113.f_458 = unk_0x48352343BC5A41AE();
				func_78(16);
			}
			break;
		
		case 12:
			if (func_41(10))
			{
				if (func_786(14, 0, 1))
				{
					if (func_764())
					{
						func_762();
					}
					func_77(10);
					func_78(17);
				}
			}
			else
			{
				func_78(17);
			}
			break;
		
		case 14:
			func_152();
			break;
		
		case 15:
			func_151();
			break;
		
		case 16:
			func_136();
			break;
		
		case 17:
			func_93();
			break;
	}
}

void func_93()
{
	struct<361> Var0;
	
	unk_0x07899AAA5D680386(2, 202);
	if (func_38("LUCK_WHEEL_SPIN") || func_38("LUCK_W_SPIN_PC"))
	{
		unk_0x3410421C60BF7143(1);
	}
	if (unk_0x9E2D6C50374FCFA9() == Local_111)
	{
		func_128();
		func_114(unk_0x9E2D6C50374FCFA9(), 1, 0);
		unk_0xC8483C4C42152921();
		if (Local_113.f_74.f_350 != 0)
		{
			if (Local_113.f_74.f_350 == 1)
			{
				func_107(func_112());
			}
			Local_113.f_74.f_350 = 0;
		}
		if (unk_0xE5965CDF24F93A9F(Local_113.f_73) && Local_113.f_73 != Global_1966324)
		{
			unk_0xD59CC8123FD1A789(&(Local_113.f_73));
		}
		else
		{
			Local_113.f_73 = -1;
		}
		if (func_106())
		{
			func_105();
		}
		unk_0xB60709BD0E075903(1);
	}
	func_104(1);
	func_101(1, -1);
	func_840(unk_0x9E2D6C50374FCFA9(), 0);
	if (func_41(0))
	{
		func_114(unk_0x9E2D6C50374FCFA9(), 1, 0);
	}
	StringCopy(&(Local_113.f_435), "", 64);
	Local_113.f_451 = 0;
	Local_113.f_452 = 0f;
	Local_113.f_47 = -1;
	Var0.f_1 = 337;
	Local_113.f_74 = { Var0 };
	func_78(0);
	func_97();
	func_96();
	func_806(0);
	func_69(&(Local_113.f_33));
	func_69(&(Local_113.f_29));
	func_69(&(Local_113.f_41));
	func_95(-1);
	func_94(0);
}

void func_94(int iParam0)
{
	if (unk_0xE2D0C323A1AE5D85(Local_113.f_459, iParam0))
	{
		unk_0xB0550BC91B0159D6(&(Local_113.f_459), iParam0);
	}
}

void func_95(int iParam0)
{
	if (unk_0x9E2D6C50374FCFA9() != func_8())
	{
		Local_112[unk_0x9E2D6C50374FCFA9() /*5*/].f_4 = iParam0;
	}
}

void func_96()
{
	func_858(unk_0x9E2D6C50374FCFA9(), 0);
}

void func_97()
{
	Local_113 = 0;
	func_100(5000);
	Local_113.f_2 = 0;
	Local_113.f_3 = 0;
	Local_113.f_4 = 0;
	Local_113.f_5 = 0;
	Local_113.f_6 = 0;
	Local_113.f_8 = 0;
	Local_113.f_9 = 0;
	func_99(-1);
	Local_113.f_11 = -1;
	Local_113.f_12 = 0;
	Local_113.f_13 = 0;
	Local_113.f_15 = 0;
	Local_113.f_18 = 0f;
	Local_113.f_19 = 0f;
	Local_113.f_16 = 0;
	Local_113.f_20 = 0f;
	Local_113.f_21 = 0f;
	func_95(-1);
	Local_113.f_46 = 1;
	func_98(-1);
	func_69(&(Local_113.f_27));
	func_69(&(Local_113.f_29));
	func_69(&(Local_113.f_31));
	func_69(&(Local_113.f_39));
}

void func_98(int iParam0)
{
	if (unk_0x9E2D6C50374FCFA9() != func_8())
	{
		if (Local_112[unk_0x9E2D6C50374FCFA9() /*5*/] != iParam0)
		{
			Local_112[unk_0x9E2D6C50374FCFA9() /*5*/] = iParam0;
		}
	}
}

void func_99(int iParam0)
{
	if (unk_0x9E2D6C50374FCFA9() != func_8())
	{
		if (Local_112[unk_0x9E2D6C50374FCFA9() /*5*/].f_2 != iParam0)
		{
			Local_112[unk_0x9E2D6C50374FCFA9() /*5*/].f_2 = iParam0;
		}
	}
}

void func_100(int iParam0)
{
	if (unk_0x9E2D6C50374FCFA9() != func_8())
	{
		if (Local_112[unk_0x9E2D6C50374FCFA9() /*5*/].f_3 != iParam0)
		{
			Local_112[unk_0x9E2D6C50374FCFA9() /*5*/].f_3 = iParam0;
		}
	}
}

void func_101(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_103(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_22830.f_8674)
	{
		unk_0x4FEF096D3AB4AA8C(15);
		Global_22830.f_8674 = 0;
	}
	unk_0x7ED668FC4CB0F4C4(0f);
	if (Global_22830.f_5885[iVar0])
	{
		unk_0xC511E7C272201CF7(9, 0);
		Global_22830.f_5885[iVar0] = 0;
	}
	if (Global_22830.f_5871[iVar0])
	{
		unk_0x861D35D42CFD2991("CommonMenu");
		Global_22830.f_5871[iVar0] = 0;
	}
	if (Global_22830.f_5878[iVar0])
	{
		unk_0x861D35D42CFD2991("MPShopSale");
		Global_22830.f_5878[iVar0] = 0;
	}
	if (bParam0)
	{
		func_102(&(Global_22830.f_5917[iVar0 /*10*/]));
		Global_22830.f_5978[iVar0] = 0;
	}
	else
	{
		Global_22830.f_5978[iVar0] = 0;
	}
}

void func_102(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0x0347CCBD719C8ADC(*uParam0))
		{
			unk_0x705B098546DEB18A(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_103(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -1)
	{
		if (unk_0x9315DBF7D972F07A() && unk_0xDD50B5A22807BAD4())
		{
			iParam2 = unk_0x5C5CE5291FB79534();
		}
	}
	StringCopy(&cVar0, unk_0x05CBA41180F5D521(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar1 = unk_0x2E87280918B16506(&cVar0);
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (Global_22830.f_5978[iVar2] == iVar1)
		{
			*uParam0 = iVar2;
			return 1;
		}
		else if (Global_22830.f_5978[iVar2] == 0)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != -1)
		{
			Global_22830.f_5978[iVar3] = iVar1;
			*uParam0 = iVar3;
			return 1;
		}
	}
	return 0;
}

void func_104(bool bParam0)
{
	if (!unk_0x78D9ADD511FEAD8B(Local_113.f_454))
	{
		unk_0xF889BDFCC181BA9F(Local_113.f_454);
		unk_0xCDBCC1BC1184B002(Local_113.f_454);
		Local_113.f_454 = -1;
	}
	if (!bParam0)
	{
		if (!unk_0x78D9ADD511FEAD8B(Local_113.f_456))
		{
			unk_0xF889BDFCC181BA9F(Local_113.f_456);
			unk_0xCDBCC1BC1184B002(Local_113.f_456);
			Local_113.f_456 = -1;
		}
		if (!unk_0x78D9ADD511FEAD8B(Local_113.f_457))
		{
			unk_0xF889BDFCC181BA9F(Local_113.f_457);
			unk_0xCDBCC1BC1184B002(Local_113.f_457);
			Local_113.f_457 = -1;
		}
	}
}

void func_105()
{
	if (Global_2703656.f_847.f_10)
	{
		Global_2703656.f_847.f_10 = 0;
	}
}

bool func_106()
{
	return Global_2703656.f_847.f_10;
}

void func_107(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_111())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_110(iParam0))
		{
			if (!bVar0)
			{
				unk_0x349E25EA131C0E2A();
			}
		}
		else if (!bVar0)
		{
			unk_0x5ACE3DE15EF4A616(Global_4528329[iParam0 /*85*/].f_66);
		}
		func_108(&(Global_4528329[iParam0 /*85*/]));
	}
}

void func_108(var uParam0)
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
	func_109(&(uParam0->f_14));
	func_109(&(uParam0->f_14.f_13));
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

void func_109(var uParam0)
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

int func_110(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4528329[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

int func_111()
{
	if (unk_0x8FE9914D4872D601())
	{
		return unk_0xA50CED7FB6E38751();
	}
	return 0;
}

int func_112()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_113(iVar0) != 2147483647)
		{
			if (func_110(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_113(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4528329[iParam0 /*85*/].f_66;
	}
	return -1;
}

void func_114(int iParam0, bool bParam1, int iParam2)
{
	if (func_127(unk_0x407E03586628E458(iParam0)))
	{
		func_115(iParam0, bParam1, iParam2, 0);
		unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 185, !bParam1);
	}
}

void func_115(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (unk_0x1088B18071ADCCBD())
		{
			unk_0x94B5910A9C945688(0);
		}
	}
	if (func_126())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!unk_0x9315DBF7D972F07A())
	{
		uVar0 = iParam2;
		unk_0x64E21045781AFBC9(iParam0, bParam1, uVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || unk_0x44859561F653DD4E())
		{
			bVar1 = false;
		}
		if (!func_124())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (unk_0x0D01086B38EC256F(iParam0) && (unk_0x3583A42587543334(iParam0) || iParam3 == 1))
		{
			if (iParam3 && unk_0x55B23FE400FCEA6B(unk_0x407E03586628E458(iParam0), 0))
			{
				return;
			}
			iVar27 = unk_0x407E03586628E458(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && unk_0x9315DBF7D972F07A())
				{
					unk_0x5C53AF694DE011E8(1);
				}
				else if (bVar14 || (!func_16(unk_0x9E2D6C50374FCFA9(), 0) && !func_123()))
				{
					unk_0x1C2ED929474DC6FE(iVar27, !bVar14, 0);
				}
				if (!bVar14)
				{
					if (unk_0x9315DBF7D972F07A() && !bVar19)
					{
						unk_0x5C53AF694DE011E8(0);
					}
					Global_2689156[iParam0 /*453*/].f_253 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_120(0, 0, 0);
					if (bVar25)
					{
						unk_0x5639E771F6085BF6();
					}
				}
				if (!func_119(iVar27) && !unk_0xE2ED785E8DB4D3FF(iVar27))
				{
					if (!bVar22)
					{
						unk_0x959E1626CBC7D38A(iVar27, true, 0);
					}
				}
				if (!unk_0xE85F749F6D5C809E(iVar27))
				{
					if (!bVar21)
					{
						unk_0x5C65DDDC219B3AA5(iVar27, false);
					}
					unk_0x398C962F550CF3B4(iVar27, 1);
				}
				else if (!bVar21)
				{
					unk_0x5C65DDDC219B3AA5(iVar27, false);
				}
				unk_0xA7266A50941DBAEA(iVar27, true);
				unk_0xC099DA307DD6BC62(iParam0, 0);
				unk_0x7E9CA7389EF595E6(iParam0, 0);
				if (unk_0xA13A75665F7E0689(iVar27) && unk_0x6090FC735660B8F7(iVar27))
				{
					unk_0xAD9047296F9EA375(iVar27);
				}
				unk_0xC252F409BDE7A700(iVar27, 1);
				if (unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()) == 0)
				{
					func_118();
					func_117();
				}
				if (unk_0xBC4351060BEFB0D2())
				{
					if (!bVar23)
					{
					}
				}
				if (unk_0x2981C54770E1D19C())
				{
				}
				Global_2689156[iParam0 /*453*/].f_254 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2667222.f_2679)
				{
					Global_2667222.f_2679 = 0;
				}
			}
			else
			{
				if (!func_119(iVar27) && !unk_0xE2ED785E8DB4D3FF(iVar27))
				{
					if (!bVar22)
					{
						unk_0x959E1626CBC7D38A(iVar27, !bVar15, 0);
					}
					if (!unk_0xE85F749F6D5C809E(iVar27))
					{
						if (!bVar21)
						{
							unk_0x5C65DDDC219B3AA5(iVar27, bVar16);
						}
						if (!bVar16)
						{
							unk_0x398C962F550CF3B4(iVar27, 1);
						}
					}
					if (func_116(Global_4718592.f_138117))
					{
						unk_0x5C65DDDC219B3AA5(iVar27, true);
					}
				}
				if (Global_1575022)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					unk_0xC099DA307DD6BC62(iParam0, 0);
				}
				else
				{
					unk_0xC099DA307DD6BC62(iParam0, 1);
				}
				unk_0xA7266A50941DBAEA(iVar27, bVar17);
				if (bVar3)
				{
					if (!unk_0xFD478ECFA85A941A(iVar27) && !unk_0xD5C6B5E3B93A5EDC(iVar27, 0))
					{
						unk_0x51BB443B279E4104(iVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			unk_0x64E21045781AFBC9(iParam0, bParam1, iVar28);
		}
	}
}

bool func_116(int iParam0)
{
	return iParam0 == 17;
}

void func_117()
{
	struct<3> Var0;
	
	Global_2703656.f_924 = 0;
	Global_2703656.f_925 = 0;
	Global_2703656.f_926 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2703656.f_931 = -1;
	Global_2703656.f_932 = 0;
	Global_2667222.f_2690 = { Var0 };
}

void func_118()
{
	Global_2667222.f_701 = 0;
	Global_2667222.f_2733 = 0;
	Global_2667222.f_514 = 0;
	Global_2667222.f_605 = 0;
	Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_216 = 0;
	Global_2667222.f_2688 = 0;
}

int func_119(int iParam0)
{
	int iVar0;
	
	if (unk_0xD5C6B5E3B93A5EDC(iParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x174CED88B97C78D9(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_120(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x55B23FE400FCEA6B(iParam1, 0))
	{
	}
	if (iParam0 == 1)
	{
		if (unk_0xE5965CDF24F93A9F(iParam1))
		{
			if (unk_0x65FAB09725E2FE75(iParam1))
			{
				if (!unk_0xA9E699D3DC7C0B15(unk_0x9E2D6C50374FCFA9(), unk_0xFF65CDB0EB7ACE71(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (iParam0 == 1)
			{
				func_122();
			}
			else if (!unk_0xE2D0C323A1AE5D85(Global_2621446.f_67, 1))
			{
				if (unk_0xE2D0C323A1AE5D85(Global_2621446.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						unk_0x4B1C22133022D7D3(iVar1, Global_2621446.f_58[iVar1]);
						iVar1++;
					}
				}
				unk_0xCED9E32812D6C7C7(&(Global_2621446.f_67), 1);
			}
		}
		if (func_16(unk_0x9E2D6C50374FCFA9(), 0))
		{
			unk_0x1FD50AAF9DA2199E(iParam0, iParam1, 1);
		}
		else
		{
			unk_0x86998D41F61B3824(iParam0, iParam1);
		}
		unk_0x6CAF65C4F61A4BBD(iParam0, iParam1);
		func_121(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_121(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x41483427EFBC0047(iVar0, iParam1, 1);
	}
}

void func_122()
{
	int iVar0;
	
	if (!unk_0xD852449BF2E2BA8D())
	{
		if (!unk_0xE2D0C323A1AE5D85(Global_2621446.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2621446.f_58[iVar0] = unk_0x4DE6A646AFB7CF5C(iVar0);
				iVar0++;
			}
			unk_0xCED9E32812D6C7C7(&(Global_2621446.f_67), 2);
			unk_0xCED9E32812D6C7C7(&(Global_2621446.f_67), 0);
		}
	}
}

bool func_123()
{
	return unk_0xE2D0C323A1AE5D85(Global_2621446, 3);
}

int func_124()
{
	if (func_125() == 0)
	{
		return 1;
	}
	return 0;
}

int func_125()
{
	return Global_1574629.f_18;
}

int func_126()
{
	if (unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_887, 2) && !Global_2715542.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

int func_127(int iParam0)
{
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_128()
{
	func_129(0);
}

void func_129(bool bParam0)
{
	if (bParam0)
	{
		func_135();
		if (Global_19954.f_1 == 10 || Global_19954.f_1 == 9)
		{
			unk_0xCED9E32812D6C7C7(&Global_7825, 16);
		}
		Global_19954.f_1 = 1;
		if (func_51(0))
		{
			func_130(0);
		}
	}
	else if (Global_19954.f_1 == 1)
	{
		if (!Global_19954.f_1 == 0)
		{
			Global_19954.f_1 = 3;
		}
	}
}

void func_130(int iParam0)
{
	if (func_134())
	{
		return;
	}
	if (Global_20144)
	{
		if (func_133())
		{
			func_132(1, 1);
		}
		else
		{
			func_132(0, 0);
		}
	}
	if (Global_19954.f_1 == 10 || Global_19954.f_1 == 9)
	{
		unk_0xCED9E32812D6C7C7(&Global_7825, 16);
	}
	if (unk_0xA3329B7A7520670E())
	{
		unk_0xD681CC2BC1084DB6(0);
	}
	Global_21285 = 5;
	if (iParam0 == 1)
	{
		unk_0xCED9E32812D6C7C7(&Global_7824, 30);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&Global_7824, 30);
	}
	if (!func_131())
	{
		Global_19954.f_1 = 3;
	}
}

int func_131()
{
	if (Global_19954.f_1 == 1 || Global_19954.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_132(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_51(0))
		{
			Global_20144 = 1;
			if (bParam1)
			{
				unk_0xC81489026785778A(&Global_19891);
			}
			Global_19882 = { Global_19900[Global_19899 /*3*/] };
			unk_0x31636F0193379566(Global_19882);
		}
	}
	else if (Global_20144 == 1)
	{
		Global_20144 = 0;
		Global_19882 = { Global_19907[Global_19899 /*3*/] };
		if (bParam1)
		{
			unk_0x31636F0193379566(Global_19891);
		}
		else
		{
			unk_0x31636F0193379566(Global_19882);
		}
	}
}

bool func_133()
{
	return unk_0xE2D0C323A1AE5D85(Global_1958920, 5);
}

bool func_134()
{
	return unk_0xE2D0C323A1AE5D85(Global_1958920, 19);
}

void func_135()
{
	if (Global_19954.f_1 == 9 || Global_19954.f_1 == 10)
	{
		Global_21338 = 0;
		Global_21334 = 1;
	}
}

void func_136()
{
	if (func_111())
	{
		if (func_139(&(Local_113.f_473), 147735386, (Local_113.f_458 + 86400)))
		{
			if (Local_113.f_473 == 2)
			{
				func_137(0);
				func_78(17);
			}
			Local_113.f_473 = 0;
		}
	}
	else
	{
		func_137(0);
		func_78(17);
	}
}

void func_137(bool bParam0)
{
	func_138(joaat("mpply_lucky_wheel_usage"), (Local_113.f_458 + 86400));
	if (!bParam0)
	{
		func_64(8351, (Local_113.f_458 + 86400), -1, 1, 0);
	}
	Global_2725174 = 1;
}

void func_138(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, iParam1, 1);
	}
}

bool func_139(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 == 3 || *uParam0 == 2)
	{
		*uParam0 = 0;
	}
	if (*uParam0 == 0)
	{
		if (func_112() != -1)
		{
			return 0;
		}
		if (func_147(78225582, 1888666031, iParam1, 1668906031, iParam2, 0, iParam2, 1, 0, 3))
		{
			if (func_142())
			{
				*uParam0 = 1;
			}
			else
			{
				*uParam0 = 3;
			}
		}
		else
		{
			*uParam0 = 3;
		}
	}
	else if (*uParam0 == 1)
	{
		if (func_141(func_112()))
		{
			if (func_140(func_112()) == 2)
			{
				*uParam0 = 2;
			}
			else
			{
				*uParam0 = 3;
			}
			func_107(func_112());
		}
	}
	return *uParam0 != 1;
}

int func_140(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4528329[iParam0 /*85*/].f_66.f_2;
	}
	return 0;
}

int func_141(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4528329[iParam0 /*85*/].f_66.f_2 != 1;
	}
	return 0;
}

int func_142()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_111())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_112();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0xD487B8E9C523DEFD(func_18()) || unk_0xBA5B5030B7954DAA())
		{
			if (func_146(Global_4528329[iVar2 /*85*/].f_66.f_6, Global_4528329[iVar2 /*85*/].f_66.f_4, Global_4528329[iVar2 /*85*/].f_66.f_1) == 1)
			{
				Global_4529831 = 1;
			}
			return 0;
		}
		if (Global_2726388)
		{
			if (Global_4528329[iVar2 /*85*/].f_66.f_6 == 1067618600 || Global_4528329[iVar2 /*85*/].f_66.f_6 == -1303831698)
			{
				Global_4529832 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_113(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || unk_0xE894C3F21E583743(iVar3))
		{
			Global_4528329[iVar2 /*85*/].f_66.f_13 = 1;
			Global_4528329[iVar2 /*85*/].f_66.f_12 = 0;
			Global_4528329[iVar2 /*85*/].f_66.f_14 = unk_0x8142A6539DDC180F();
			if (bVar0)
			{
				Global_4528329[iVar2 /*85*/].f_66.f_8 = 1;
				Global_4528329[iVar2 /*85*/].f_66.f_12 = 1;
			}
			Global_4528329[iVar2 /*85*/].f_66.f_18 = 0;
			if (bVar0 || iVar1)
			{
				func_143(Global_4528329[iVar2 /*85*/], iVar2);
			}
			Global_4529816 = 1;
			return 1;
		}
	}
	return 0;
}

void func_143(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	struct<3> Var0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.x = -1141953949;
	Var0.f_1 = unk_0x9E2D6C50374FCFA9();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam19;
	iVar1 = func_145(Var0.f_1);
	if ((Global_262145.f_23844 && !Global_262145.f_23845) && !Global_262145.f_23846)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_144();
		unk_0x2700C00F82C16BF0(1, &Var0, 36, iVar1);
	}
}

void func_144()
{
	unk_0xAF76A37C80EFD1D8("AM_ARENA_SHP");
}

var func_145(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0xCED9E32812D6C7C7(&uVar0, iParam0);
	}
	return uVar0;
}

int func_146(int iParam0, int iParam1, int iParam2)
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
			case 1280785534:
			case -1878824774:
			case 247992227:
			case -229237358:
			case -1123183389:
			case 1814197076:
			case 713955548:
			case -2026544524:
			case -719580138:
			case -163417439:
			case -550417574:
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

int func_147(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_111())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0xD487B8E9C523DEFD(func_18()) || unk_0xBA5B5030B7954DAA())
		{
			Global_4529831 = 1;
			return 0;
		}
		if (Global_2726388)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_4529832 = 1;
				return 0;
			}
		}
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar1 = func_112();
	if (iVar1 == -1)
	{
		if (!func_149(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_148(iParam1))
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
		Global_4528329[iVar1 /*85*/].f_66.f_1 = Var2.f_2;
		Global_4528329[iVar1 /*85*/].f_66.f_15 = Var2;
		Global_4528329[iVar1 /*85*/].f_66.f_16 = Var2.f_1;
		if (bVar0 || unk_0x598E220BD27F56CA(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_148(int iParam0)
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

int func_149(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_111())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0xD487B8E9C523DEFD(func_18()) || unk_0xBA5B5030B7954DAA())
		{
			Global_4529831 = 1;
			return 0;
		}
		if (Global_2726388)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_4529832 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 15)
	{
		if (Global_4528329[iVar1 /*85*/].f_66.f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_4528329[iVar1 /*85*/].f_66.f_5 == 1)
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
		if (unk_0x3F5B892C35F3FF91())
		{
			unk_0x349E25EA131C0E2A();
		}
	}
	if (bVar0 || unk_0x76503DCD0BB2D833(&iVar3, iParam2, uParam3, uParam4))
	{
		*iParam0 = func_150(iVar3, iParam1, -2085313189, uParam3, iParam2, 0, 1, uParam4, uParam5, 0, bVar0);
		return 1;
	}
	return 0;
}

int func_150(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, bool bParam6, var uParam7, var uParam8, int iParam9, bool bParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4528329[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_111())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4528329[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4528329[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4528329[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4528329[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4528329[iVar0 /*85*/].f_66.f_7 = uParam3;
			Global_4528329[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4528329[iVar0 /*85*/].f_66 = iParam0;
			Global_4528329[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4528329[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4528329[iVar0 /*85*/].f_66.f_10 = uParam7;
			Global_4528329[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4528329[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4528329[iVar0 /*85*/].f_66.f_14 = unk_0x8142A6539DDC180F();
			Global_4528329[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4529816 = 0;
			if (bParam6)
			{
				Global_4528329[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && bParam10)
			{
				func_143(Global_4528329[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_151()
{
	if (func_784(1))
	{
		func_40(14);
	}
	if ((func_41(14) && unk_0xE5965CDF24F93A9F(Local_113.f_72)) && unk_0x8DEF8D80C66C34D4(Local_113.f_72))
	{
		func_766(1);
	}
}

void func_152()
{
	if (func_808(Local_111))
	{
		func_98(func_793(Local_111));
		func_100(func_157(Local_111));
		Local_113.f_15 = func_156();
		Local_113.f_8 = func_155();
		func_153();
		func_78(15);
		if (unk_0x54E30A65F4FA4962())
		{
			Local_111.f_1 = func_793(Local_111);
		}
	}
}

void func_153()
{
	var uVar0;
	
	uVar0 = func_154(func_805(Local_111));
	unk_0x8CE3D365F064F69E(Local_113.f_72, 0f, 0f, 0f, 2, 1);
	unk_0xF07805FFBF204ED8(Local_113.f_72, uVar0, Local_113.f_23, 1000f, 0, 1, 0, 0f, 2);
	unk_0xEC5CB2A3F2052039(Local_113.f_72);
}

char* func_154(int iParam0)
{
	char* sVar0;
	
	sVar0 = "null";
	switch (iParam0)
	{
		case 0:
			if (func_80(unk_0xE2D3D51028F0428A()))
			{
				switch (Local_113.f_10)
				{
					case 0:
						return "spinningwheel_low_effort_01_wheel";
						break;
					
					case 1:
						return "spinningwheel_low_effort_02_wheel";
						break;
					
					case 2:
						return "spinningwheel_low_effort_03_wheel";
						break;
					
					case 3:
						return "spinningwheel_low_effort_04_wheel";
						break;
					
					case 4:
						return "spinningwheel_low_effort_05_wheel";
						break;
					
					case 5:
						return "spinningwheel_low_effort_06_wheel";
						break;
					
					case 6:
						return "spinningwheel_low_effort_07_wheel";
						break;
					
					case 7:
						return "spinningwheel_low_effort_08_wheel";
						break;
					
					case 8:
						return "spinningwheel_low_effort_09_wheel";
						break;
					
					case 9:
						return "spinningwheel_low_effort_10_wheel";
						break;
					
					case 10:
						return "spinningwheel_low_effort_11_wheel";
						break;
					
					case 11:
						return "spinningwheel_low_effort_12_wheel";
						break;
					
					case 12:
						return "spinningwheel_low_effort_13_wheel";
						break;
					
					case 13:
						return "spinningwheel_low_effort_14_wheel";
						break;
					
					case 14:
						return "spinningwheel_low_effort_15_wheel";
						break;
					
					case 15:
						return "spinningwheel_low_effort_16_wheel";
						break;
					
					case 16:
						return "spinningwheel_low_effort_17_wheel";
						break;
					
					case 17:
						return "spinningwheel_low_effort_18_wheel";
						break;
					
					case 18:
						return "spinningwheel_low_effort_19_wheel";
						break;
					
					case 19:
						return "spinningwheel_low_effort_20_wheel";
						break;
				}
			}
			else
			{
				switch (Local_113.f_10)
				{
					case 0:
						return "spinningwheel_low_effort_01";
						break;
					
					case 1:
						return "spinningwheel_low_effort_02";
						break;
					
					case 2:
						return "spinningwheel_low_effort_03";
						break;
					
					case 3:
						return "spinningwheel_low_effort_04";
						break;
					
					case 4:
						return "spinningwheel_low_effort_05";
						break;
					
					case 5:
						return "spinningwheel_low_effort_06";
						break;
					
					case 6:
						return "spinningwheel_low_effort_07";
						break;
					
					case 7:
						return "spinningwheel_low_effort_08";
						break;
					
					case 8:
						return "spinningwheel_low_effort_09";
						break;
					
					case 9:
						return "spinningwheel_low_effort_10";
						break;
					
					case 10:
						return "spinningwheel_low_effort_11";
						break;
					
					case 11:
						return "spinningwheel_low_effort_12";
						break;
					
					case 12:
						return "spinningwheel_low_effort_13";
						break;
					
					case 13:
						return "spinningwheel_low_effort_14";
						break;
					
					case 14:
						return "spinningwheel_low_effort_15";
						break;
					
					case 15:
						return "spinningwheel_low_effort_16";
						break;
					
					case 16:
						return "spinningwheel_low_effort_17";
						break;
					
					case 17:
						return "spinningwheel_low_effort_18";
						break;
					
					case 18:
						return "spinningwheel_low_effort_19";
						break;
					
					case 19:
						return "spinningwheel_low_effort_20";
						break;
					}
			}
			break;
		
		case 1:
			if (func_80(unk_0xE2D3D51028F0428A()))
			{
				switch (Local_113.f_10)
				{
					case 0:
						return "spinningwheel_med_effort_20_wheel";
						break;
					
					case 1:
						return "spinningwheel_med_effort_01_wheel";
						break;
					
					case 2:
						return "spinningwheel_med_effort_02_wheel";
						break;
					
					case 3:
						return "spinningwheel_med_effort_03_wheel";
						break;
					
					case 4:
						return "spinningwheel_med_effort_04_wheel";
						break;
					
					case 5:
						return "spinningwheel_med_effort_05_wheel";
						break;
					
					case 6:
						return "spinningwheel_med_effort_06_wheel";
						break;
					
					case 7:
						return "spinningwheel_med_effort_07_wheel";
						break;
					
					case 8:
						return "spinningwheel_med_effort_08_wheel";
						break;
					
					case 9:
						return "spinningwheel_med_effort_09_wheel";
						break;
					
					case 10:
						return "spinningwheel_med_effort_10_wheel";
						break;
					
					case 11:
						return "spinningwheel_med_effort_11_wheel";
						break;
					
					case 12:
						return "spinningwheel_med_effort_12_wheel";
						break;
					
					case 13:
						return "spinningwheel_med_effort_13_wheel";
						break;
					
					case 14:
						return "spinningwheel_med_effort_14_wheel";
						break;
					
					case 15:
						return "spinningwheel_med_effort_15_wheel";
						break;
					
					case 16:
						return "spinningwheel_med_effort_16_wheel";
						break;
					
					case 17:
						return "spinningwheel_med_effort_17_wheel";
						break;
					
					case 18:
						return "spinningwheel_med_effort_18_wheel";
						break;
					
					case 19:
						return "spinningwheel_med_effort_19_wheel";
						break;
				}
			}
			else
			{
				switch (Local_113.f_10)
				{
					case 0:
						return "spinningwheel_med_effort_01";
						break;
					
					case 1:
						return "spinningwheel_med_effort_02";
						break;
					
					case 2:
						return "spinningwheel_med_effort_03";
						break;
					
					case 3:
						return "spinningwheel_med_effort_04";
						break;
					
					case 4:
						return "spinningwheel_med_effort_05";
						break;
					
					case 5:
						return "spinningwheel_med_effort_06";
						break;
					
					case 6:
						return "spinningwheel_med_effort_07";
						break;
					
					case 7:
						return "spinningwheel_med_effort_08";
						break;
					
					case 8:
						return "spinningwheel_med_effort_09";
						break;
					
					case 9:
						return "spinningwheel_med_effort_10";
						break;
					
					case 10:
						return "spinningwheel_med_effort_11";
						break;
					
					case 11:
						return "spinningwheel_med_effort_12";
						break;
					
					case 12:
						return "spinningwheel_med_effort_13";
						break;
					
					case 13:
						return "spinningwheel_med_effort_14";
						break;
					
					case 14:
						return "spinningwheel_med_effort_15";
						break;
					
					case 15:
						return "spinningwheel_med_effort_16";
						break;
					
					case 16:
						return "spinningwheel_med_effort_17";
						break;
					
					case 17:
						return "spinningwheel_med_effort_18";
						break;
					
					case 18:
						return "spinningwheel_med_effort_19";
						break;
					
					case 19:
						return "spinningwheel_med_effort_20";
						break;
					}
			}
			break;
		
		case 2:
			if (func_80(unk_0xE2D3D51028F0428A()))
			{
				switch (Local_113.f_10)
				{
					case 0:
						return "spinningwheel_high_effort_01_wheel";
						break;
					
					case 1:
						return "spinningwheel_high_effort_02_wheel";
						break;
					
					case 2:
						return "spinningwheel_high_effort_03_wheel";
						break;
					
					case 3:
						return "spinningwheel_high_effort_04_wheel";
						break;
					
					case 4:
						return "spinningwheel_high_effort_05_wheel";
						break;
					
					case 5:
						return "spinningwheel_high_effort_06_wheel";
						break;
					
					case 6:
						return "spinningwheel_high_effort_07_wheel";
						break;
					
					case 7:
						return "spinningwheel_high_effort_08_wheel";
						break;
					
					case 8:
						return "spinningwheel_high_effort_09_wheel";
						break;
					
					case 9:
						return "spinningwheel_high_effort_10_wheel";
						break;
					
					case 10:
						return "spinningwheel_high_effort_11_wheel";
						break;
					
					case 11:
						return "spinningwheel_high_effort_12_wheel";
						break;
					
					case 12:
						return "spinningwheel_high_effort_13_wheel";
						break;
					
					case 13:
						return "spinningwheel_high_effort_14_wheel";
						break;
					
					case 14:
						return "spinningwheel_high_effort_15_wheel";
						break;
					
					case 15:
						return "spinningwheel_high_effort_16_wheel";
						break;
					
					case 16:
						return "spinningwheel_high_effort_17_wheel";
						break;
					
					case 17:
						return "spinningwheel_high_effort_18_wheel";
						break;
					
					case 18:
						return "spinningwheel_high_effort_19_wheel";
						break;
					
					case 19:
						return "spinningwheel_high_effort_20_wheel";
						break;
				}
			}
			else
			{
				switch (Local_113.f_10)
				{
					case 0:
						return "spinningwheel_high_effort_01";
						break;
					
					case 1:
						return "spinningwheel_high_effort_02";
						break;
					
					case 2:
						return "spinningwheel_high_effort_03";
						break;
					
					case 3:
						return "spinningwheel_high_effort_04";
						break;
					
					case 4:
						return "spinningwheel_high_effort_05";
						break;
					
					case 5:
						return "spinningwheel_high_effort_06";
						break;
					
					case 6:
						return "spinningwheel_high_effort_07";
						break;
					
					case 7:
						return "spinningwheel_high_effort_08";
						break;
					
					case 8:
						return "spinningwheel_high_effort_09";
						break;
					
					case 9:
						return "spinningwheel_high_effort_10";
						break;
					
					case 10:
						return "spinningwheel_high_effort_11";
						break;
					
					case 11:
						return "spinningwheel_high_effort_12";
						break;
					
					case 12:
						return "spinningwheel_high_effort_13";
						break;
					
					case 13:
						return "spinningwheel_high_effort_14";
						break;
					
					case 14:
						return "spinningwheel_high_effort_15";
						break;
					
					case 15:
						return "spinningwheel_high_effort_16";
						break;
					
					case 16:
						return "spinningwheel_high_effort_17";
						break;
					
					case 17:
						return "spinningwheel_high_effort_18";
						break;
					
					case 18:
						return "spinningwheel_high_effort_19";
						break;
					
					case 19:
						return "spinningwheel_high_effort_20";
						break;
					}
			}
			break;
	}
	return sVar0;
}

int func_155()
{
	int iVar0;
	
	iVar0 = 0;
	if (func_157(unk_0x9E2D6C50374FCFA9()) > 3000)
	{
		iVar0 = 4;
	}
	else if (func_157(unk_0x9E2D6C50374FCFA9()) > 1500)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_156()
{
	int iVar0;
	
	iVar0 = 535;
	if (func_157(unk_0x9E2D6C50374FCFA9()) > 3000)
	{
		iVar0 = 110;
	}
	else if (func_157(unk_0x9E2D6C50374FCFA9()) > 1500)
	{
		iVar0 = 353;
	}
	return iVar0;
}

int func_157(int iParam0)
{
	if (iParam0 == func_8())
	{
		return 0;
	}
	return Local_112[iParam0 /*5*/].f_3;
}

void func_158()
{
	int iVar0;
	char* sVar1;
	
	if (!Global_262145.f_26478)
	{
		return;
	}
	if (func_167())
	{
		return;
	}
	Local_113.f_48 = unk_0x2E87280918B16506("LUCKYWHEEL");
	Local_113.f_48.f_1 = unk_0x2E87280918B16506("STANDARD");
	Local_113.f_48.f_4 = unk_0x2E87280918B16506("WIN");
	Local_113.f_48.f_11 = func_166(unk_0x9E2D6C50374FCFA9());
	Local_113.f_48.f_18 = unk_0x54E30A65F4FA4962();
	if (unk_0x10490C0971778A41() != func_165())
	{
		Local_113.f_48.f_19 = unk_0xE6DC7EE71BCE8000(unk_0x6B01934FA503547F(unk_0x10490C0971778A41()));
	}
	iVar0 = func_164();
	sVar1 = func_163(iVar0);
	Local_113.f_48.f_21 = unk_0x2E87280918B16506(sVar1);
	if (unk_0xACC32B78196FBC2A(func_161()))
	{
		Local_113.f_48.f_22 = 0;
	}
	else
	{
		Local_113.f_48.f_22 = unk_0x2E87280918B16506(func_161());
	}
	switch (func_793(unk_0x9E2D6C50374FCFA9()))
	{
		case 3:
			Local_113.f_48.f_6 = 10000;
			break;
		
		case 7:
			Local_113.f_48.f_6 = 15000;
			break;
		
		case 10:
			Local_113.f_48.f_6 = 20000;
			break;
		
		case 15:
			Local_113.f_48.f_6 = 25000;
			break;
		
		case 11:
			switch (Local_113.f_47)
			{
				case 2:
					Local_113.f_48.f_6 = Local_113.f_451;
					break;
			}
			break;
	}
	Local_113.f_48.f_7 = func_160();
	Local_113.f_48.f_23 = func_159();
	Local_113.f_48.f_15 = 1;
	if (func_166(unk_0x9E2D6C50374FCFA9()))
	{
		Local_113.f_48.f_20 = unk_0x2E87280918B16506("VIP membership");
	}
	else
	{
		Local_113.f_48.f_20 = unk_0x2E87280918B16506("paid membership");
	}
	Local_113.f_48.f_10 = 1;
	unk_0x1957ACEF6A2A721C(&(Local_113.f_48));
}

int func_159()
{
	int iVar0;
	
	iVar0 = func_793(unk_0x9E2D6C50374FCFA9());
	switch (iVar0)
	{
		case 1:
			return 2500;
		
		case 2:
			return 20000;
		
		case 3:
			return 10000;
		
		case 5:
			return 5000;
		
		case 7:
			return 15000;
		
		case 9:
			return 7500;
		
		case 6:
			return 30000;
		
		case 10:
			return 20000;
		
		case 13:
			return 10000;
		
		case 14:
			return 40000;
		
		case 17:
			return 15000;
		
		case 19:
			return 50000;
		
		case 15:
			return 25000;
			break;
		
		case 11:
			switch (Local_113.f_47)
			{
				case 2:
				case 4:
				case 3:
					return Local_113.f_451;
					break;
			}
			break;
	}
	return 0;
}

int func_160()
{
	return func_21(8250, -1, 0);
}

char* func_161()
{
	int iVar0;
	
	iVar0 = func_793(unk_0x9E2D6C50374FCFA9());
	switch (iVar0)
	{
		case 0:
		case 8:
		case 12:
		case 16:
		case 18:
			return func_162(&(Local_113.f_435));
			break;
		
		case 11:
			switch (Local_113.f_47)
			{
				case 0:
				case 6:
				case 1:
				case 5:
					return func_162(&(Local_113.f_435));
					break;
			}
			break;
	}
	return "";
}

char* func_162(char* sParam0)
{
	return sParam0;
}

char* func_163(int iParam0)
{
	if (iParam0 == 5)
	{
		switch (Local_113.f_47)
		{
			case 0:
				return "MYSTREYCLOTHING";
			
			case 1:
				return "MYSTREYVEHICLE";
			
			case 2:
				return "MYSTREYCHIPS";
			
			case 3:
				return "MYSTREYCASH";
			
			case 4:
				return "MYSTREYRP";
			
			case 5:
				return "MYSTREYINVENTORY";
			
			case 6:
				return "MYSTREYBUSINESS";
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return "CLOTHING";
			
			case 1:
				return "RP";
			
			case 2:
				return "CASH";
			
			case 3:
				return "HOUSECHIPS";
			
			case 4:
				return "DISCOUNTVOUCHER";
			
			case 6:
				return "PODIUMVEHICLE";
			}
		
		default:
	}
	return "";
}

int func_164()
{
	int iVar0;
	
	iVar0 = func_793(unk_0x9E2D6C50374FCFA9());
	switch (iVar0)
	{
		case 1:
			return 1;
		
		case 2:
			return 2;
		
		case 3:
			return 3;
		
		case 0:
			return 0;
		
		case 5:
			return 1;
		
		case 7:
			return 3;
		
		case 11:
			return 5;
		
		case 8:
			return 0;
		
		case 9:
			return 1;
		
		case 6:
			return 2;
		
		case 10:
			return 3;
		
		case 12:
			return 0;
		
		case 13:
			return 1;
		
		case 18:
			return 6;
		
		case 14:
			return 2;
		
		case 16:
			return 0;
		
		case 17:
			return 1;
		
		case 19:
			return 2;
		
		case 15:
			return 3;
		
		case 4:
			return 4;
		
		default:
	}
	return -1;
}

int func_165()
{
	return -1;
}

int func_166(int iParam0)
{
	if (iParam0 != func_8())
	{
		return Global_1853128[iParam0 /*888*/].f_267.f_379 != 0;
	}
	return 0;
}

int func_167()
{
	if (unk_0x3C57C2F07FEE34D2(&(Local_113.f_435), "INVALID"))
	{
		if (func_793(unk_0x9E2D6C50374FCFA9()) == 11 && Local_113.f_47 == 1)
		{
			return 1;
		}
		if (func_793(unk_0x9E2D6C50374FCFA9()) == 18)
		{
			return 1;
		}
	}
	return 0;
}

void func_168()
{
	if (func_178() || (!unk_0xACC32B78196FBC2A(&(Local_113.f_435)) && unk_0x3C57C2F07FEE34D2("GIVE_RP_FOR_VEH", &(Local_113.f_435))))
	{
		if (!unk_0xACC32B78196FBC2A(&(Local_113.f_435)) && unk_0x3C57C2F07FEE34D2("GIVE_RP_FOR_VEH", &(Local_113.f_435)))
		{
			func_42("CAS_LW_RP", 20000, -1);
			unk_0xCED9E32812D6C7C7(&(Local_113.f_1), 2);
		}
		else
		{
			func_42(func_177(), func_176(), -1);
			unk_0xCED9E32812D6C7C7(&(Local_113.f_1), 2);
		}
	}
	else if (!unk_0xACC32B78196FBC2A(&(Local_113.f_435)))
	{
		if (!unk_0x3C57C2F07FEE34D2("INVALID", &(Local_113.f_435)))
		{
			func_46(func_177(), -1);
			unk_0xCED9E32812D6C7C7(&(Local_113.f_1), 2);
		}
	}
	else
	{
		func_46(func_177(), -1);
		unk_0xCED9E32812D6C7C7(&(Local_113.f_1), 2);
	}
	if (Local_113.f_14 == 4)
	{
		if (!unk_0xE2D0C323A1AE5D85(Local_113.f_1, 4))
		{
			unk_0xCED9E32812D6C7C7(&(Local_113.f_1), 4);
		}
	}
	if (func_175())
	{
		if ((!unk_0xACC32B78196FBC2A(&(Local_113.f_435)) && !unk_0x3C57C2F07FEE34D2("INVALID", &(Local_113.f_435))) && !unk_0x3C57C2F07FEE34D2("GIVE_RP_FOR_VEH", &(Local_113.f_435)))
		{
			unk_0xC8483C4C42152921();
			if (func_174())
			{
				unk_0x150D8F58B26E9F70("TWOSTRINGS");
			}
			else
			{
				unk_0x150D8F58B26E9F70(&(Local_113.f_435));
			}
			if (func_174())
			{
				unk_0x26C23BE14F66F202(func_171(Local_113.f_74.f_358, 1));
				unk_0x26C23BE14F66F202(&(Local_113.f_435));
			}
			if (Local_113.f_14 == 11 && func_178())
			{
				unk_0x2AE954BA77A66307(Local_113.f_451);
			}
			unk_0xB36438590D294199(func_170(), func_169(), &(Local_113.f_435), 1);
		}
	}
}

int func_169()
{
	switch (Local_113.f_14)
	{
		case 0:
		case 8:
		case 12:
		case 16:
			return 7;
			break;
		
		case 4:
			return 18;
			break;
		
		case 11:
			return 19;
			break;
		
		case 18:
			return 5;
			break;
	}
	return -1;
}

char* func_170()
{
	switch (Local_113.f_14)
	{
		case 0:
		case 8:
		case 12:
		case 16:
			return "CAS_LW_RCLO";
			break;
		
		case 4:
			return "CAS_LW_RDISC";
			break;
		
		case 11:
			return "CAS_LW_RMYST";
			break;
		
		case 18:
			return "CAS_LW_RVEHI";
			break;
	}
	return "";
}

char* func_171(int iParam0, bool bParam1)
{
	if (unk_0xD2B5B1C8FC84FE0F(iParam0))
	{
		return func_173(iParam0, bParam1);
	}
	if (unk_0xD6F7D32A98E07F93(iParam0) || unk_0x4262B4DCEADC2695(iParam0))
	{
		return func_172(iParam0, bParam1);
	}
	switch (iParam0)
	{
		case joaat("khamelion"):
			return "HIJAK";
			break;
		
		case joaat("issi2"):
		case joaat("issi7"):
			return "WEENY";
			break;
		
		case joaat("elegy2"):
		case joaat("hellion"):
			return "ANNIS";
			break;
		
		case joaat("romero"):
			return "CHARIOT";
			break;
		
		case joaat("baller"):
		case joaat("baller2"):
		case joaat("baller3"):
		case joaat("baller4"):
		case joaat("baller5"):
		case joaat("baller6"):
			if (bParam1)
			{
				return "GALLIVAN";
			}
			else
			{
				return "GALIVANTER";
			}
			break;
		
		case joaat("surfer"):
		case joaat("surfer2"):
		case joaat("dune"):
		case joaat("bfinjection"):
			return "BF";
			break;
		
		case joaat("feltzer2"):
		case joaat("dubsta"):
		case joaat("surano"):
		case joaat("schwarzer"):
		case joaat("schafter2"):
		case joaat("serrano"):
		case joaat("dubsta2"):
		case joaat("feltzer3"):
			if (bParam1)
			{
				return "BENEFAC";
			}
			else
			{
				return "BENEFACTOR";
			}
			break;
		
		case joaat("sentinel"):
		case joaat("sentinel2"):
		case joaat("zion"):
		case joaat("zion2"):
		case joaat("zion3"):
		case joaat("oracle"):
		case joaat("oracle2"):
			if (bParam1)
			{
				return "UBERMACH";
			}
			else
			{
				return "UBERMACHT";
			}
			break;
		
		case joaat("ztype"):
		case joaat("adder"):
		case joaat("thrax"):
			return "TRUFFADE";
			break;
		
		case joaat("jb700"):
		case joaat("rapidgt"):
		case joaat("rapidgt2"):
		case joaat("exemplar"):
		case joaat("massacro"):
		case joaat("massacro2"):
			if (bParam1)
			{
				return "DEWBAUCH";
			}
			else
			{
				return "DEWBAUCHEE";
			}
			break;
		
		case joaat("tailgater"):
		case joaat("ninef"):
		case joaat("ninef2"):
		case joaat("rocoto"):
		case joaat("drafter"):
			return "OBEY";
			break;
		
		case joaat("picador"):
		case joaat("surge"):
		case joaat("fugitive"):
		case joaat("marshall"):
			return "CHEVAL";
			break;
		
		case joaat("mower"):
			if (bParam1)
			{
				return "JACKSHP";
			}
			else
			{
				return "JACKSHEEPE";
			}
			break;
		
		case joaat("tornado"):
		case joaat("tornado2"):
		case joaat("tornado3"):
		case joaat("burrito"):
		case joaat("burrito2"):
		case joaat("premier"):
		case joaat("voodoo2"):
		case joaat("sabregt"):
		case joaat("rancherxl"):
		case joaat("vigero"):
		case joaat("asea"):
		case joaat("asea2"):
		case joaat("granger"):
		case joaat("pranger"):
		case joaat("sheriff"):
		case joaat("sheriff2"):
		case joaat("gburrito"):
		case joaat("gburrito2"):
		case joaat("stalion"):
			return "DECLASSE";
			break;
		
		case joaat("buccaneer"):
		case joaat("cavalcade"):
		case joaat("cavalcade2"):
		case joaat("emperor"):
		case joaat("emperor2"):
		case joaat("manana"):
		case joaat("primo"):
		case joaat("washington"):
		case joaat("virgo"):
			return "ALBANY";
			break;
		
		case joaat("banshee"):
		case joaat("bison"):
		case joaat("gresley"):
		case joaat("youga"):
		case joaat("gauntlet"):
		case joaat("buffalo"):
		case joaat("buffalo2"):
		case joaat("ratloader"):
		case joaat("dloader"):
		case joaat("ratloader2"):
		case joaat("rumpo"):
		case joaat("banshee2"):
		case joaat("gauntlet3"):
			return "BRAVADO";
			break;
		
		case joaat("stinger"):
		case joaat("stingergt"):
		case joaat("cheetah"):
		case joaat("carbonizzare"):
			if (bParam1)
			{
				return "GROTTI";
			}
			else
			{
				return "Grotti_2";
			}
			break;
		
		case joaat("coquette"):
		case joaat("coquette3"):
			if (bParam1)
			{
				return "INVERTO";
			}
			else
			{
				return "Invetero";
			}
			break;
		
		case joaat("radi"):
		case joaat("sadler"):
		case joaat("dominator"):
		case joaat("sandking"):
		case joaat("sandking2"):
		case joaat("police"):
		case joaat("police3"):
		case joaat("policet"):
		case joaat("benson"):
		case joaat("bullet"):
		case joaat("minivan"):
		case joaat("speedo"):
		case joaat("speedo2"):
		case joaat("peyote"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("bobcatxl"):
		case joaat("stanier"):
		case joaat("hotknife"):
		case joaat("slamvan"):
		case joaat("guardian"):
		case joaat("chino"):
		case joaat("caracara2"):
			return "VAPID";
			break;
		
		case joaat("tiptruck"):
		case joaat("taco"):
		case joaat("utillitruck"):
		case joaat("utillitruck2"):
		case joaat("utillitruck3"):
		case joaat("camper"):
		case joaat("riot"):
		case joaat("tourbus"):
		case joaat("ambulance"):
		case joaat("stockade"):
		case joaat("boxville"):
		case joaat("pony"):
			return "BRUTE";
			break;
		
		case joaat("prairie"):
			return "BOLLOKAN";
			break;
		
		case joaat("jackal"):
		case joaat("f620"):
		case joaat("locust"):
			return "OCELOT";
			break;
		
		case joaat("mesa"):
		case joaat("mesa3"):
		case joaat("bodhi2"):
		case joaat("seminole"):
		case joaat("crusader"):
			return "CANIS";
			break;
		
		case joaat("entityxf"):
			return "OVERFLOD";
			break;
		
		case joaat("monroe"):
		case joaat("infernus"):
		case joaat("bati"):
		case joaat("bati2"):
		case joaat("vacca"):
		case joaat("ruffian"):
		case joaat("faggio2"):
		case joaat("osiris"):
		case joaat("zorrusso"):
			return "PEGASSI";
			break;
		
		case joaat("phoenix"):
		case joaat("ruiner"):
		case joaat("dukes"):
		case joaat("dukes2"):
			return "IMPONTE";
			break;
		
		case joaat("bjxl"):
		case joaat("rebel"):
		case joaat("rebel2"):
		case joaat("asterope"):
		case joaat("intruder"):
		case joaat("futo"):
		case joaat("sultan"):
		case joaat("dilettante"):
		case joaat("dilettante2"):
		case joaat("kuruma"):
		case joaat("kuruma2"):
		case joaat("sultanrs"):
			return "KARIN";
			break;
		
		case joaat("penumbra"):
		case joaat("sanchez"):
		case joaat("sanchez2"):
		case joaat("mule"):
			return "MAIBATSU";
			break;
		
		case joaat("blista"):
		case joaat("blista2"):
		case joaat("blista3"):
		case joaat("double"):
		case joaat("jester"):
		case joaat("jester2"):
		case joaat("enduro"):
		case joaat("vindicator"):
		case joaat("akuma"):
			return "DINKA";
			break;
		
		case joaat("fq2"):
			return "FATHOM";
			break;
		
		case joaat("voltic"):
		case joaat("brawler"):
			return "COIL";
			break;
	}
	switch (iParam0)
	{
		case joaat("felon"):
		case joaat("felon2"):
		case joaat("casco"):
		case joaat("novak"):
			if (bParam1)
			{
				return "LAMPADA";
			}
			else
			{
				return "LAMPADATI";
			}
			break;
		
		case joaat("comet2"):
			return "PFISTER";
			break;
		
		case joaat("fusilade"):
			return "SCHYSTER";
			break;
		
		case joaat("stretch"):
		case joaat("regina"):
		case joaat("landstalker"):
			if (bParam1)
			{
				return "DUNDREAR";
			}
			else
			{
				return "DUNDREARY";
			}
			break;
		
		case joaat("handler"):
		case joaat("bulldozer"):
		case joaat("docktug"):
		case joaat("cutter"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("barracks"):
		case joaat("barracks2"):
		case joaat("biff"):
		case joaat("forklift"):
		case joaat("ripley"):
		case joaat("airtug"):
		case joaat("dump"):
		case joaat("insurgent2"):
		case joaat("insurgent"):
			return "HVY";
			break;
		
		case joaat("packer"):
		case joaat("flatbed"):
		case joaat("tiptruck2"):
		case joaat("pounder"):
		case joaat("firetruk"):
			return "MTL";
			break;
		
		case joaat("tractor"):
		case joaat("tractor2"):
			return "STANLEY";
			break;
		
		case joaat("hauler"):
		case joaat("phantom"):
		case joaat("trash"):
			return "JOBUILT";
			break;
		
		case joaat("patriot"):
			return "MAMMOTH";
			break;
		
		case joaat("journey"):
		case joaat("stratum"):
			if (bParam1)
			{
				return "ZIRCONIU";
			}
			else
			{
				return "ZIRCONIUM";
			}
			break;
		
		case joaat("vader"):
		case joaat("pcj"):
			return "SHITZU";
			break;
		
		case joaat("bagger"):
		case joaat("daemon"):
		case joaat("sovereign"):
			if (bParam1)
			{
				return "WESTERN";
			}
			else
			{
				return "WESTERNMOTORCYCLE";
			}
			break;
		
		case joaat("blazer"):
		case joaat("caddy"):
		case joaat("carbonrs"):
		case joaat("blazer3"):
		case joaat("blazer2"):
			return "NAGASAKI";
			break;
		
		case joaat("nemesis"):
		case joaat("lectro"):
			if (bParam1)
			{
				return "PRINCIPL";
			}
			else
			{
				return "PRINCIPE";
			}
			break;
		
		case joaat("hexer"):
			return "LCC";
			break;
		
		case joaat("bmx"):
		case joaat("cruiser"):
		case joaat("scorcher"):
			if (!bParam1)
			{
				return "Ped";
			}
			break;
		
		case joaat("tribike"):
		case joaat("tribike2"):
		case joaat("tribike3"):
			if (!bParam1)
			{
				return "TriCycles";
			}
			break;
		
		case joaat("cogcabrio"):
		case joaat("superd"):
		case joaat("windsor"):
			return "ENUS";
			break;
		
		case joaat("habanero"):
			if (bParam1)
			{
				return "EMPEROR";
			}
			else
			{
				return "EMPORER";
			}
			break;
		
		case joaat("ingot"):
		case joaat("nebula"):
			return "VULCAR";
			break;
		
		case joaat("t20"):
			return "PROGEN";
			break;
	}
	if (iParam0 == joaat("bifta"))
	{
		return "BF";
	}
	else if (iParam0 == joaat("kalahari"))
	{
		return "CANIS";
	}
	else if (iParam0 == joaat("paradise"))
	{
		return "BRAVADO";
	}
	if (iParam0 == joaat("btype"))
	{
		return "ALBANY";
	}
	if (iParam0 == joaat("zentorno"))
	{
		return "PEGASSI";
	}
	else if (iParam0 == joaat("jester"))
	{
		return "DINKA";
	}
	else if (iParam0 == joaat("massacro"))
	{
		if (bParam1)
		{
			return "DEWBAUCH";
		}
		else
		{
			return "DEWBAUCHEE";
		}
	}
	else if (iParam0 == joaat("turismor"))
	{
		if (bParam1)
		{
			return "GROTTI";
		}
		else
		{
			return "Grotti_2";
		}
	}
	else if (iParam0 == joaat("huntley"))
	{
		return "ENUS";
	}
	else if (iParam0 == joaat("alpha"))
	{
		return "ALBANY";
	}
	else if (iParam0 == joaat("thrust"))
	{
		return "DINKA";
	}
	else if (iParam0 == joaat("sovereign"))
	{
		return "DINKA";
	}
	if (iParam0 == joaat("thrust"))
	{
		return "DINKA";
	}
	if (iParam0 == joaat("blade") || iParam0 == joaat("monster"))
	{
		return "VAPID";
	}
	if (iParam0 == joaat("warrener"))
	{
		return "VULCAR";
	}
	if ((iParam0 == joaat("glendale") || iParam0 == joaat("panto")) || iParam0 == joaat("dubsta3"))
	{
		if (bParam1)
		{
			return "BENEFAC";
		}
		else
		{
			return "BENEFACTOR";
		}
	}
	if (iParam0 == joaat("rhapsody"))
	{
		return "DECLASSE";
	}
	if (iParam0 == joaat("pigalle"))
	{
		if (bParam1)
		{
			return "LAMPADA";
		}
		else
		{
			return "LAMPADATI";
		}
	}
	if (iParam0 == joaat("coquette2"))
	{
		if (bParam1)
		{
			return "INVERTO";
		}
		else
		{
			return "Invetero";
		}
	}
	if (iParam0 == joaat("innovation"))
	{
		return "LCC";
	}
	if (iParam0 == joaat("hakuchou"))
	{
		return "SHITZU";
	}
	if (iParam0 == joaat("furoregt"))
	{
		if (bParam1)
		{
			return "LAMPADA";
		}
		else
		{
			return "LAMPADATI";
		}
	}
	if (iParam0 == joaat("ratloader2"))
	{
		return "BRAVADO";
	}
	else if (iParam0 == joaat("slamvan"))
	{
		return "VAPID";
	}
	else if (iParam0 == joaat("jester2"))
	{
		return "DINKA";
	}
	else if (iParam0 == joaat("massacro2"))
	{
		if (bParam1)
		{
			return "DEWBAUCH";
		}
		else
		{
			return "DEWBAUCHEE";
		}
	}
	if (iParam0 == joaat("windsor"))
	{
		return "ENUS";
	}
	else if (iParam0 == joaat("chino") || iParam0 == joaat("chino2"))
	{
		return "VAPID";
	}
	else if (iParam0 == joaat("vindicator"))
	{
		return "DINKA";
	}
	else if (iParam0 == joaat("virgo"))
	{
		return "ALBANY";
	}
	else if (iParam0 == joaat("swift2") || iParam0 == joaat("luxor2"))
	{
		return "BUCKING";
	}
	else if (iParam0 == joaat("feltzer3"))
	{
		if (bParam1)
		{
			return "BENEFAC";
		}
		else
		{
			return "BENEFACTOR";
		}
	}
	else if (iParam0 == joaat("t20"))
	{
		return "PROGEN";
	}
	else if (iParam0 == joaat("osiris"))
	{
		return "PEGASSI";
	}
	else if (iParam0 == joaat("coquette3"))
	{
		if (bParam1)
		{
			return "INVERTO";
		}
		else
		{
			return "Invetero";
		}
	}
	else if (iParam0 == joaat("toro"))
	{
		if (bParam1)
		{
			return "LAMPADA";
		}
		else
		{
			return "LAMPADATI";
		}
	}
	else if (iParam0 == joaat("brawler"))
	{
		return "COIL";
	}
	if (iParam0 == joaat("primo2") || iParam0 == joaat("buccaneer2"))
	{
		return "ALBANY";
	}
	else if (iParam0 == joaat("faction") || iParam0 == joaat("faction2"))
	{
		return "WILLARD";
	}
	else if ((iParam0 == joaat("moonbeam2") || iParam0 == joaat("voodoo")) || iParam0 == joaat("moonbeam"))
	{
		return "DECLASSE";
	}
	else if (iParam0 == joaat("chino2") || iParam0 == joaat("dukes2"))
	{
		return "VAPID";
	}
	if (iParam0 == joaat("faction3"))
	{
		return "WILLARD";
	}
	if ((iParam0 == joaat("sabregt2") || iParam0 == joaat("tornado5")) || iParam0 == joaat("virgo"))
	{
		return "DECLASSE";
	}
	if (iParam0 == joaat("virgo2") || iParam0 == joaat("virgo3"))
	{
		if (bParam1)
		{
			return "DUNDREAR";
		}
		else
		{
			return "DUNDREARY";
		}
	}
	if (iParam0 == joaat("slamvan3") || iParam0 == joaat("minivan2"))
	{
		return "VAPID";
	}
	if (iParam0 == joaat("lurcher") || iParam0 == joaat("btype2"))
	{
		return "ALBANY";
	}
	if (iParam0 == joaat("mamba") || iParam0 == joaat("tampa"))
	{
		return "DECLASSE";
	}
	if (((iParam0 == joaat("cognoscenti") || iParam0 == joaat("cog55")) || iParam0 == joaat("cog552")) || iParam0 == joaat("cognoscenti2"))
	{
		return "ENUS";
	}
	if (iParam0 == joaat("verlierer2"))
	{
		return "BRAVADO";
	}
	if (((iParam0 == joaat("schafter4") || iParam0 == joaat("schafter3")) || iParam0 == joaat("schafter5")) || iParam0 == joaat("schafter6"))
	{
		if (bParam1)
		{
			return "BENEFAC";
		}
		else
		{
			return "BENEFACTOR";
		}
	}
	if (((iParam0 == joaat("baller3") || iParam0 == joaat("baller4")) || iParam0 == joaat("baller5")) || iParam0 == joaat("baller6"))
	{
		if (bParam1)
		{
			return "GALLIVAN";
		}
		else
		{
			return "GALIVANTER";
		}
	}
	if (iParam0 == joaat("nightshade"))
	{
		return "IMPONTE";
	}
	if (iParam0 == joaat("btype3"))
	{
		return "ALBANY";
	}
	if (iParam0 == joaat("pfister811"))
	{
		return "PFISTER";
	}
	if (iParam0 == joaat("seven70"))
	{
		if (bParam1)
		{
			return "DEWBAUCH";
		}
		else
		{
			return "DEWBAUCHEE";
		}
	}
	if (iParam0 == joaat("rumpo3"))
	{
		return "BRAVADO";
	}
	if (iParam0 == joaat("bestiagts"))
	{
		if (bParam1)
		{
			return "GROTTI";
		}
		else
		{
			return "Grotti_2";
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (bParam1)
		{
			return "GROTTI";
		}
		else
		{
			return "Grotti_2";
		}
	}
	if (iParam0 == joaat("xls") || iParam0 == joaat("xls2"))
	{
		if (bParam1)
		{
			return "BENEFAC";
		}
		else
		{
			return "BENEFACTOR";
		}
	}
	if (iParam0 == joaat("fmj"))
	{
		return "VAPID";
	}
	if (iParam0 == joaat("windsor2"))
	{
		return "ENUS";
	}
	if (iParam0 == joaat("reaper"))
	{
		return "PEGASSI";
	}
	if (((iParam0 == joaat("contender") || iParam0 == joaat("trophytruck")) || iParam0 == joaat("trophytruck2")) || iParam0 == joaat("dominator2"))
	{
		return "VAPID";
	}
	if (iParam0 == joaat("bf400"))
	{
		return "NAGASAKI";
	}
	if (iParam0 == joaat("cliffhanger") || iParam0 == joaat("gargoyle"))
	{
		if (bParam1)
		{
			return "WESTERN";
		}
		else
		{
			return "WESTERNMOTORCYCLE";
		}
	}
	if (iParam0 == joaat("buffalo3") || iParam0 == joaat("gauntlet2"))
	{
		return "BRAVADO";
	}
	if (iParam0 == joaat("omnis"))
	{
		return "OBEY";
	}
	if (iParam0 == joaat("le7b"))
	{
		return "ANNIS";
	}
	if (iParam0 == joaat("tropos"))
	{
		if (bParam1)
		{
			return "LAMPADA";
		}
		else
		{
			return "LAMPADATI";
		}
	}
	if (iParam0 == joaat("tampa2") || iParam0 == joaat("stalion2"))
	{
		return "DECLASSE";
	}
	if (iParam0 == joaat("brioso"))
	{
		if (bParam1)
		{
			return "GROTTI";
		}
		else
		{
			return "Grotti_2";
		}
	}
	if (iParam0 == joaat("tyrus"))
	{
		return "PROGEN";
	}
	if (iParam0 == joaat("lynx"))
	{
		return "OCELOT";
	}
	if (iParam0 == joaat("sheava"))
	{
		if (bParam1)
		{
			return "EMPEROR";
		}
		else
		{
			return "EMPORER";
		}
	}
	if (iParam0 == joaat("rallytruck"))
	{
		return "MTL";
	}
	if (iParam0 == joaat("tornado6"))
	{
		return "DECLASSE";
	}
	if (iParam0 == joaat("avarus") || iParam0 == joaat("sanctus"))
	{
		return "LCC";
	}
	if ((iParam0 == joaat("chimera") || iParam0 == joaat("shotaro")) || iParam0 == joaat("blazer4"))
	{
		return "NAGASAKI";
	}
	if (iParam0 == joaat("defiler") || iParam0 == joaat("hakuchou2"))
	{
		return "SHITZU";
	}
	if (((((iParam0 == joaat("nightblade") || iParam0 == joaat("zombiea")) || iParam0 == joaat("zombieb")) || iParam0 == joaat("daemon2")) || iParam0 == joaat("ratbike")) || iParam0 == joaat("wolfsbane"))
	{
		if (bParam1)
		{
			return "WESTERN";
		}
		else
		{
			return "WESTERNMOTORCYCLE";
		}
	}
	if (iParam0 == joaat("youga2"))
	{
		return "BRAVADO";
	}
	if (((iParam0 == joaat("esskey") || iParam0 == joaat("vortex")) || iParam0 == joaat("faggio3")) || iParam0 == joaat("faggio"))
	{
		return "PEGASSI";
	}
	if (iParam0 == joaat("raptor"))
	{
		return "BF";
	}
	if (iParam0 == joaat("manchez"))
	{
		return "MAIBATSU";
	}
	if (iParam0 == joaat("blazer5"))
	{
		return "NAGASAKI";
	}
	if (iParam0 == joaat("comet3"))
	{
		return "PFISTER";
	}
	if (iParam0 == joaat("diablous") || iParam0 == joaat("diablous2"))
	{
		if (bParam1)
		{
			return "PRINCIPL";
		}
		else
		{
			return "PRINCIPE";
		}
	}
	if ((iParam0 == joaat("fcr") || iParam0 == joaat("fcr2")) || iParam0 == joaat("tempesta"))
	{
		return "PEGASSI";
	}
	if (iParam0 == joaat("nero") || iParam0 == joaat("nero2"))
	{
		return "TRUFFADE";
	}
	if (iParam0 == joaat("penetrator"))
	{
		return "OCELOT";
	}
	if (iParam0 == joaat("ruiner2"))
	{
		return "IMPONTE";
	}
	if (iParam0 == joaat("technical2"))
	{
		return "KARIN";
	}
	if (iParam0 == joaat("phantom2"))
	{
		return "JOBUILT";
	}
	if (iParam0 == joaat("voltic2"))
	{
		return "COIL";
	}
	if (iParam0 == joaat("wastelander"))
	{
		return "MTL";
	}
	if (iParam0 == joaat("italigtb") || iParam0 == joaat("italigtb2"))
	{
		return "PROGEN";
	}
	if (iParam0 == joaat("dune5") || iParam0 == joaat("dune4"))
	{
		return "BF";
	}
	if (iParam0 == joaat("elegy") || iParam0 == joaat("elegy2"))
	{
		return "ANNIS";
	}
	if (iParam0 == joaat("specter") || iParam0 == joaat("specter2"))
	{
		if (bParam1)
		{
			return "DEWBAUCH";
		}
		else
		{
			return "DEWBAUCHEE";
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		return "PROGEN";
	}
	if (iParam0 == joaat("infernus2"))
	{
		return "PEGASSI";
	}
	if (iParam0 == joaat("ruston"))
	{
		return "HIJAK";
	}
	if (iParam0 == joaat("turismo2"))
	{
		if (bParam1)
		{
			return "GROTTI";
		}
		else
		{
			return "Grotti_2";
		}
	}
	if (iParam0 == joaat("dukes2"))
	{
		return "IMPONTE";
	}
	if (iParam0 == joaat("ardent") || iParam0 == joaat("xa21"))
	{
		return "OCELOT";
	}
	if (iParam0 == joaat("cheetah2"))
	{
		if (bParam1)
		{
			return "GROTTI";
		}
		else
		{
			return "Grotti_2";
		}
	}
	if ((iParam0 == joaat("insurgent3") || iParam0 == joaat("nightshark")) || iParam0 == joaat("apc"))
	{
		return "HVY";
	}
	if (iParam0 == joaat("technical3"))
	{
		return "KARIN";
	}
	if (iParam0 == joaat("halftrack") || iParam0 == joaat("bison3"))
	{
		return "BRAVADO";
	}
	if (iParam0 == joaat("torero") || iParam0 == joaat("oppressor"))
	{
		return "PEGASSI";
	}
	if (iParam0 == joaat("dune3"))
	{
		return "BF";
	}
	if (iParam0 == joaat("tampa3"))
	{
		return "DECLASSE";
	}
	if (iParam0 == joaat("vagner") || iParam0 == joaat("rapidgt3"))
	{
		if (bParam1)
		{
			return "DEWBAUCH";
		}
		else
		{
			return "DEWBAUCHEE";
		}
	}
	if (iParam0 == joaat("cyclone"))
	{
		return "COIL";
	}
	if ((iParam0 == joaat("retinue") || iParam0 == joaat("hustler")) || iParam0 == joaat("riata"))
	{
		return "VAPID";
	}
	if (iParam0 == joaat("visione") || iParam0 == joaat("vigilante"))
	{
		if (bParam1)
		{
			return "GROTTI";
		}
		else
		{
			return "Grotti_2";
		}
	}
	if (iParam0 == joaat("z190"))
	{
		return "KARIN";
	}
	if (iParam0 == joaat("avenger") || iParam0 == joaat("thruster"))
	{
		return "MAMMOTH";
	}
	if (iParam0 == joaat("deluxo"))
	{
		return "IMPONTE";
	}
	if (iParam0 == joaat("stromberg") || iParam0 == joaat("pariah"))
	{
		return "OCELOT";
	}
	if (iParam0 == joaat("hermes"))
	{
		return "ALBANY";
	}
	if ((iParam0 == joaat("sentinel3") || iParam0 == joaat("sc1")) || iParam0 == joaat("revolter"))
	{
		if (bParam1)
		{
			return "UBERMACH";
		}
		else
		{
			return "UBERMACHT";
		}
	}
	if (iParam0 == joaat("savestra"))
	{
		return "ANNIS";
	}
	if (iParam0 == joaat("yosemite"))
	{
		return "DECLASSE";
	}
	if (iParam0 == joaat("raiden"))
	{
		return "COIL";
	}
	if ((iParam0 == joaat("neon") || iParam0 == joaat("comet4")) || iParam0 == joaat("comet5"))
	{
		return "PFISTER";
	}
	if (iParam0 == joaat("streiter"))
	{
		if (bParam1)
		{
			return "BENEFAC";
		}
		else
		{
			return "BENEFACTOR";
		}
	}
	if (iParam0 == joaat("kamacho"))
	{
		return "CANIS";
	}
	if (iParam0 == joaat("gt500"))
	{
		if (bParam1)
		{
			return "GROTTI";
		}
		else
		{
			return "Grotti_2";
		}
	}
	if (iParam0 == joaat("viseris"))
	{
		if (bParam1)
		{
			return "LAMPADA";
		}
		else
		{
			return "LAMPADATI";
		}
	}
	if (iParam0 == joaat("barrage"))
	{
		return "HVY";
	}
	if ((iParam0 == joaat("autarch") || iParam0 == joaat("tyrant")) || iParam0 == joaat("entity2"))
	{
		return "OVERFLOD";
	}
	if (iParam0 == joaat("issi3"))
	{
		return "WEENY";
	}
	if ((((iParam0 == joaat("gb200") || iParam0 == joaat("ellie")) || iParam0 == joaat("flashgt")) || iParam0 == joaat("caracara")) || iParam0 == joaat("dominator3"))
	{
		return "VAPID";
	}
	if (iParam0 == joaat("fagaloa"))
	{
		return "VULCAR";
	}
	if (iParam0 == joaat("michelli"))
	{
		if (bParam1)
		{
			return "LAMPADA";
		}
		else
		{
			return "LAMPADATI";
		}
	}
	if (iParam0 == joaat("hotring"))
	{
		return "DECLASSE";
	}
	if (iParam0 == joaat("tezeract"))
	{
		return "PEGASSI";
	}
	if (iParam0 == joaat("jester3"))
	{
		return "DINKA";
	}
	if (iParam0 == joaat("taipan"))
	{
		return "CHEVAL";
	}
	if (iParam0 == joaat("cheburek"))
	{
		return "RUNE";
	}
	if (iParam0 == joaat("swinger"))
	{
		return "OCELOT";
	}
	if (iParam0 == joaat("freecrawler"))
	{
		return "CANIS";
	}
	if (iParam0 == joaat("mule4"))
	{
		return "MAIBATSU";
	}
	if (iParam0 == joaat("pounder2"))
	{
		return "MTL";
	}
	if (iParam0 == joaat("speedo4"))
	{
		return "VAPID";
	}
	if (iParam0 == joaat("patriot2"))
	{
		return "MAMMOTH";
	}
	if (iParam0 == joaat("oppressor2"))
	{
		return "PEGASSI";
	}
	if (iParam0 == joaat("stafford"))
	{
		return "ENUS";
	}
	if (iParam0 == joaat("menacer"))
	{
		return "HVY";
	}
	if (iParam0 == joaat("scramjet"))
	{
		return "DECLASSE";
	}
	if ((iParam0 == joaat("monster3") || iParam0 == joaat("monster4")) || iParam0 == joaat("monster5"))
	{
		return "BRAVADO";
	}
	if ((iParam0 == joaat("scarab") || iParam0 == joaat("scarab2")) || iParam0 == joaat("scarab3"))
	{
		return "HVY";
	}
	if ((iParam0 == joaat("issi4") || iParam0 == joaat("issi5")) || iParam0 == joaat("issi6"))
	{
		return "WEENY";
	}
	if (iParam0 == joaat("toros"))
	{
		return "PEGASSI";
	}
	if ((((((((((iParam0 == joaat("clique") || iParam0 == joaat("imperator")) || iParam0 == joaat("imperator2")) || iParam0 == joaat("imperator3")) || iParam0 == joaat("dominator4")) || iParam0 == joaat("dominator5")) || iParam0 == joaat("dominator6")) || iParam0 == joaat("slamvan4")) || iParam0 == joaat("slamvan5")) || iParam0 == joaat("slamvan6")) || iParam0 == joaat("slamvan2"))
	{
		return "VAPID";
	}
	if (iParam0 == joaat("deveste"))
	{
		if (bParam1)
		{
			return "PRINCIPL";
		}
		else
		{
			return "PRINCIPE";
		}
	}
	if ((((((((iParam0 == joaat("impaler") || iParam0 == joaat("impaler2")) || iParam0 == joaat("impaler3")) || iParam0 == joaat("impaler4")) || iParam0 == joaat("vamos")) || iParam0 == joaat("tulip")) || iParam0 == joaat("brutus")) || iParam0 == joaat("brutus2")) || iParam0 == joaat("brutus3"))
	{
		return "DECLASSE";
	}
	if (iParam0 == joaat("deviant"))
	{
		return "SCHYSTER";
	}
	if (iParam0 == joaat("schlagen"))
	{
		if (bParam1)
		{
			return "BENEFAC";
		}
		else
		{
			return "BENEFACTOR";
		}
	}
	if (iParam0 == joaat("italigto"))
	{
		if (bParam1)
		{
			return "GROTTI";
		}
		else
		{
			return "Grotti_2";
		}
	}
	if ((iParam0 == joaat("cerberus") || iParam0 == joaat("cerberus2")) || iParam0 == joaat("cerberus3"))
	{
		return "MTL";
	}
	if ((iParam0 == joaat("deathbike") || iParam0 == joaat("deathbike2")) || iParam0 == joaat("deathbike3"))
	{
		if (bParam1)
		{
			return "WESTERN";
		}
		else
		{
			return "WESTERNMOTORCYCLE";
		}
	}
	if ((iParam0 == joaat("bruiser") || iParam0 == joaat("bruiser2")) || iParam0 == joaat("bruiser3"))
	{
		if (bParam1)
		{
			return "BENEFAC";
		}
		else
		{
			return "BENEFACTOR";
		}
	}
	if ((iParam0 == joaat("zr380") || iParam0 == joaat("zr3802")) || iParam0 == joaat("zr3803"))
	{
		return "ANNIS";
	}
	if (iParam0 == joaat("caracara2") || iParam0 == joaat("peyote2"))
	{
		return "VAPID";
	}
	if (iParam0 == joaat("drafter"))
	{
		return "OBEY";
	}
	if (iParam0 == joaat("dynasty") || iParam0 == joaat("issi7"))
	{
		return "WEENY";
	}
	if (iParam0 == joaat("gauntlet3") || iParam0 == joaat("gauntlet4"))
	{
		return "BRAVADO";
	}
	if (iParam0 == joaat("hellion") || iParam0 == joaat("s80"))
	{
		return "ANNIS";
	}
	if (iParam0 == joaat("krieger"))
	{
		if (bParam1)
		{
			return "BENEFAC";
		}
		else
		{
			return "BENEFACTOR";
		}
	}
	if (iParam0 == joaat("locust") || iParam0 == joaat("jugular"))
	{
		return "OCELOT";
	}
	if (iParam0 == joaat("nebula"))
	{
		return "VULCAR";
	}
	if (iParam0 == joaat("novak"))
	{
		if (bParam1)
		{
			return "LAMPADA";
		}
		else
		{
			return "LAMPADATI";
		}
	}
	if (iParam0 == joaat("paragon") || iParam0 == joaat("paragon2"))
	{
		return "ENUS";
	}
	if (iParam0 == joaat("thrax"))
	{
		return "TRUFFADE";
	}
	if (iParam0 == joaat("zion3"))
	{
		if (bParam1)
		{
			return "UBERMACH";
		}
		else
		{
			return "UBERMACHT";
		}
	}
	if (iParam0 == joaat("emerus"))
	{
		return "PROGEN";
	}
	if (iParam0 == joaat("neo"))
	{
		return "VYSSER";
	}
	if (iParam0 == joaat("rrocket"))
	{
		if (bParam1)
		{
			return "WESTERN";
		}
		else
		{
			return "WESTERNMOTORCYCLE";
		}
	}
	if (iParam0 == joaat("burrito") || iParam0 == joaat("burrito2"))
	{
		return "DECLASSE";
	}
	if (iParam0 == joaat("formula"))
	{
		return "PROGEN";
	}
	if (iParam0 == joaat("everon"))
	{
		return "KARIN";
	}
	if (iParam0 == joaat("imorgon"))
	{
		return "OVERFLOD";
	}
	if (iParam0 == joaat("kanjo"))
	{
		return "DINKA";
	}
	if (iParam0 == joaat("komoda"))
	{
		if (bParam1)
		{
			return "LAMPADA";
		}
		else
		{
			return "LAMPADATI";
		}
	}
	if (iParam0 == joaat("rebla"))
	{
		if (bParam1)
		{
			return "UBERMACH";
		}
		else
		{
			return "UBERMACHT";
		}
	}
	if (iParam0 == joaat("sugoi"))
	{
		return "DINKA";
	}
	if (iParam0 == joaat("sultan2"))
	{
		return "KARIN";
	}
	if (iParam0 == joaat("vstr"))
	{
		return "ALBANY";
	}
	if (iParam0 == joaat("zhaba"))
	{
		return "RUNE";
	}
	if (!bParam1)
	{
		if (unk_0x3C57C2F07FEE34D2(_get_make_name_from_vehicle_model(iParam0), "GALLIVAN"))
		{
			return "GALIVANTER";
		}
		else if (unk_0x3C57C2F07FEE34D2(_get_make_name_from_vehicle_model(iParam0), "BENEFAC"))
		{
			return "BENEFACTOR";
		}
		else if (unk_0x3C57C2F07FEE34D2(_get_make_name_from_vehicle_model(iParam0), "UBERMACH"))
		{
			return "UBERMACHT";
		}
		else if (unk_0x3C57C2F07FEE34D2(_get_make_name_from_vehicle_model(iParam0), "DEWBAUCH"))
		{
			return "DEWBAUCHEE";
		}
		else if (unk_0x3C57C2F07FEE34D2(_get_make_name_from_vehicle_model(iParam0), "JACKSHP"))
		{
			return "JACKSHEEPE";
		}
		else if (unk_0x3C57C2F07FEE34D2(_get_make_name_from_vehicle_model(iParam0), "GROTTI"))
		{
			return "Grotti_2";
		}
		else if (unk_0x3C57C2F07FEE34D2(_get_make_name_from_vehicle_model(iParam0), "INVERTO"))
		{
			return "Invetero";
		}
		else if (unk_0x3C57C2F07FEE34D2(_get_make_name_from_vehicle_model(iParam0), "LAMPADA"))
		{
			return "LAMPADATI";
		}
		else if (unk_0x3C57C2F07FEE34D2(_get_make_name_from_vehicle_model(iParam0), "DUNDREAR"))
		{
			return "DUNDREARY";
		}
		else if (unk_0x3C57C2F07FEE34D2(_get_make_name_from_vehicle_model(iParam0), "ZIRCONIU"))
		{
			return "ZIRCONIUM";
		}
		else if (unk_0x3C57C2F07FEE34D2(_get_make_name_from_vehicle_model(iParam0), "WESTERN"))
		{
			return "WESTERNMOTORCYCLE";
		}
		else if (unk_0x3C57C2F07FEE34D2(_get_make_name_from_vehicle_model(iParam0), "PRINCIPL"))
		{
			return "PRINCIPE";
		}
		else if (unk_0x3C57C2F07FEE34D2(_get_make_name_from_vehicle_model(iParam0), "EMPEROR"))
		{
			return "EMPORER";
		}
		else
		{
			return _get_make_name_from_vehicle_model(iParam0);
		}
	}
	else
	{
		return _get_make_name_from_vehicle_model(iParam0);
	}
	return "";
}

char* func_172(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case joaat("frogger"):
		case joaat("frogger2"):
			return "MAIBATSU";
		
		case joaat("maverick"):
		case joaat("polmav"):
		case joaat("luxor"):
		case joaat("shamal"):
			if (bParam1)
			{
				return "BUCKING";
			}
			else
			{
				return "BUCKINGHAM";
			}
			break;
		
		case joaat("cargobob"):
		case joaat("annihilator"):
		case joaat("cuban800"):
		case joaat("duster"):
		case joaat("stunt"):
			return "WESTERN";
			break;
		
		case joaat("buzzard"):
		case joaat("buzzard2"):
			return "NAGASAKI";
			break;
		
		case joaat("mammatus"):
		case joaat("velum"):
		case joaat("velum2"):
		case joaat("lazer"):
			return "JOBUILT";
			break;
	}
	if (iParam0 == joaat("vestra"))
	{
		if (bParam1)
		{
			return "BUCKING";
		}
		else
		{
			return "BUCKINGHAM";
		}
	}
	if (((((iParam0 == joaat("miljet") || iParam0 == joaat("swift")) || iParam0 == joaat("swift2")) || iParam0 == joaat("luxor2")) || iParam0 == joaat("supervolito")) || iParam0 == joaat("supervolito2"))
	{
		if (bParam1)
		{
			return "BUCKING";
		}
		else
		{
			return "BUCKINGHAM";
		}
	}
	if (iParam0 == joaat("besra"))
	{
		return "WESTERN";
	}
	if (iParam0 == joaat("hydra") || iParam0 == joaat("thruster"))
	{
		return "MAMMOTH";
	}
	if (iParam0 == joaat("volatus") || iParam0 == joaat("nimbus"))
	{
		if (bParam1)
		{
			return "BUCKING";
		}
		else
		{
			return "BUCKINGHAM";
		}
	}
	return "";
}

char* func_173(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case joaat("squalo"):
		case joaat("tropic"):
			if (bParam1)
			{
				return "BUCKING";
			}
			else
			{
				return "BUCKINGHAM";
			}
			break;
		
		case joaat("jetmax"):
		case joaat("suntrap"):
			return "OCELOT";
			break;
		
		case joaat("dinghy"):
			if (!bParam1)
			{
				return "OCELOT";
			}
			break;
		
		case joaat("seashark2"):
			if (bParam1)
			{
				return "SPEEDOPH";
			}
			else
			{
				return "SPEEDOPHILE";
			}
			break;
		
		case joaat("seashark3"):
			if (bParam1)
			{
				return "SPEEDOPH";
			}
			else
			{
				return "SPEEDOPHILE";
			}
			break;
		
		case joaat("seashark"):
			if (bParam1)
			{
				return "SPEEDOPH";
			}
			else
			{
				return "SPEEDOPHILE";
			}
			break;
		
		case joaat("toro"):
			if (bParam1)
			{
				return "LAMPADA";
			}
			else
			{
				return "LAMPADATI";
			}
			break;
	}
	if (iParam0 == joaat("speeder") || iParam0 == joaat("speeder2"))
	{
		if (bParam1)
		{
			return "PEGASSI";
		}
		else
		{
			return "PEGASSI";
		}
	}
	return "";
}

int func_174()
{
	switch (Local_113.f_14)
	{
		case 11:
			switch (Local_113.f_47)
			{
				case 1:
					return 1;
				
				default:
			}
			break;
		
		case 18:
			return 1;
			break;
	}
	return 0;
}

int func_175()
{
	switch (Local_113.f_14)
	{
		case 0:
		case 8:
		case 12:
		case 16:
		case 4:
		case 11:
		case 18:
			return 1;
			break;
	}
	return 0;
}

int func_176()
{
	switch (Local_113.f_14)
	{
		case 1:
			return 2500;
			break;
		
		case 5:
			return 5000;
			break;
		
		case 9:
			return 7500;
			break;
		
		case 13:
			return 10000;
			break;
		
		case 17:
			return 15000;
			break;
		
		case 2:
			return 20000;
			break;
		
		case 6:
			return 30000;
			break;
		
		case 14:
			return 40000;
			break;
		
		case 19:
			return 50000;
			break;
		
		case 3:
			return 10000;
			break;
		
		case 7:
			return 15000;
			break;
		
		case 10:
			return 20000;
			break;
		
		case 15:
			return 25000;
			break;
		
		case 11:
			switch (Local_113.f_47)
			{
				case 2:
				case 3:
				case 4:
					return Local_113.f_451;
					break;
			}
			break;
	}
	return 0;
}

char* func_177()
{
	switch (Local_113.f_14)
	{
		case 0:
		case 8:
		case 12:
		case 16:
			return "CAS_LW_CLO";
			break;
		
		case 1:
		case 5:
		case 9:
		case 13:
		case 17:
			return "CAS_LW_RP";
			break;
		
		case 2:
		case 6:
		case 14:
		case 19:
			return "CAS_LW_CASH";
			break;
		
		case 4:
			return "CAS_LW_DISC";
			break;
		
		case 3:
		case 7:
		case 10:
		case 15:
			return "CAS_LW_CHIP";
			break;
		
		case 11:
			return "CAS_LW_MYST";
			break;
		
		case 18:
			return "CAS_LW_VEHI";
			break;
	}
	return "";
}

int func_178()
{
	switch (Local_113.f_14)
	{
		case 1:
		case 5:
		case 9:
		case 13:
		case 17:
		case 2:
		case 6:
		case 14:
		case 19:
		case 3:
		case 7:
		case 10:
		case 15:
			return 1;
			break;
		
		case 11:
			switch (Local_113.f_47)
			{
				case 2:
				case 3:
				case 4:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_179()
{
	switch (func_761(Local_113.f_14))
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return func_754(&(Local_113.f_435), &Local_113, func_761(Local_113.f_14), 0);
			break;
		
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return func_746(&(Local_113.f_451), &(Local_113.f_435), func_761(Local_113.f_14), 0);
			break;
		
		case 9:
		case 10:
		case 11:
		case 12:
			return func_733(&(Local_113.f_451), &(Local_113.f_435), func_761(Local_113.f_14), 0);
			break;
		
		case 13:
		case 14:
		case 15:
		case 16:
			return func_703(&(Local_113.f_451), &(Local_113.f_435), &(Local_113.f_473), func_761(Local_113.f_14), 0);
			break;
		
		case 17:
			if (!unk_0xE2D0C323A1AE5D85(Local_113, 19))
			{
				Local_113.f_47 = func_701();
				unk_0xCED9E32812D6C7C7(&Local_113, 19);
			}
			else
			{
				return func_540(&(Local_113.f_451), &(Local_113.f_435), &(Local_113.f_73), &(Local_113.f_74), Local_113.f_47, &Local_113, Local_114, &(Local_113.f_473));
			}
			break;
		
		case 18:
			return func_189(&(Local_113.f_435), &(Local_113.f_73), &(Local_113.f_74), func_761(Local_113.f_14), 0);
			break;
		
		case 19:
			return func_180(&(Local_113.f_435), func_761(Local_113.f_14));
			break;
	}
	return 0;
}

int func_180(char* sParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != -1)
	{
		iVar0 = func_187();
		func_182(func_186(iVar0));
		StringCopy(sParam0, func_181(iVar0), 64);
		return 1;
	}
	else if (iParam1 == -1)
	{
	}
	return 0;
}

char* func_181(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ELT_NAME";
		
		case 1:
			return "BOATS_NAMEb";
		
		case 2:
			return "LGM_NAME";
		
		case 3:
			return "SSS_NAME";
		
		case 4:
			return "CANDC_NAMEb";
		
		case 5:
			return "PAM_NAME";
		
		default:
	}
	return "LRMVOUCHER_INVALID";
}

void func_182(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	char cVar7[64];
	
	if (iParam0 == 8)
	{
		func_185(129, 1, -1);
		return;
	}
	if (iParam0 == 9)
	{
		func_185(135, 1, -1);
		return;
	}
	if (iParam0 == 10)
	{
		func_185(136, 1, -1);
		return;
	}
	if (iParam0 == 11)
	{
		func_185(137, 1, -1);
		return;
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0x48352343BC5A41AE();
		func_64(8271, iVar0 + 2880, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		iVar1 = unk_0x48352343BC5A41AE();
		func_64(8272, iVar1 + 2880, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		iVar2 = unk_0x48352343BC5A41AE();
		func_64(8273, iVar2 + 2880, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		iVar3 = unk_0x48352343BC5A41AE();
		func_64(8274, iVar3 + 2880, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		iVar4 = unk_0x48352343BC5A41AE();
		func_64(8275, iVar4 + 2880, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		iVar5 = unk_0x48352343BC5A41AE();
		func_64(8276, iVar5 + 2880, -1, 1, 0);
		return;
	}
	bVar6 = false;
	if (!unk_0x9315DBF7D972F07A())
	{
		if (!unk_0xE2D0C323A1AE5D85(Global_112915.f_20564.f_471, iParam0))
		{
			bVar6 = true;
			unk_0xCED9E32812D6C7C7(&(Global_112915.f_20564.f_471), iParam0);
		}
	}
	else if (!unk_0xE2D0C323A1AE5D85(Global_112915.f_20564.f_471, iParam0) || !unk_0xE2D0C323A1AE5D85(Global_2359296[func_184() /*5559*/].f_675.f_10, iParam0))
	{
		bVar6 = true;
		unk_0xCED9E32812D6C7C7(&(Global_112915.f_20564.f_471), iParam0);
		unk_0xCED9E32812D6C7C7(&(Global_2359296[func_184() /*5559*/].f_675.f_10), iParam0);
	}
	if (bVar6)
	{
		StringCopy(&cVar7, "CHAR_LIFEINVADER", 64);
		unk_0x150D8F58B26E9F70("COUP_STR");
		unk_0x26C23BE14F66F202(func_183(iParam0));
		unk_0x3B81B9627E7885CF(&cVar7, &cVar7, 1, 0, "", 0);
	}
}

char* func_183(int iParam0)
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
			break;
		
		default:
			break;
	}
	return "";
}

int func_184()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_185(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_18();
	}
	unk_0xDB8A58AEAA67CD07(iParam0, iParam1, iParam2);
}

int func_186(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 12;
		
		case 1:
			return 13;
		
		case 2:
			return 14;
		
		case 3:
			return 15;
		
		case 4:
			return 16;
		
		case 5:
			return 17;
		
		default:
	}
	return 14;
}

int func_187()
{
	int iVar0[6];
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		iVar0[iVar2] = iVar2;
		iVar1 = (iVar1 + func_188(iVar0[iVar2]));
		iVar2++;
	}
	iVar3 = unk_0x95F3C8DAE5A0339C(0, iVar1);
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (iVar3 <= func_188(iVar0[iVar2]))
		{
			return iVar0[iVar2];
		}
		else
		{
			iVar3 = (iVar3 - func_188(iVar0[iVar2]));
		}
		iVar2++;
	}
	return -1;
}

int func_188(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_26512;
		
		case 1:
			return Global_262145.f_26512;
		
		case 2:
			return Global_262145.f_26512;
		
		case 3:
			return Global_262145.f_26512;
		
		case 4:
			return Global_262145.f_26512;
		
		case 5:
			return Global_262145.f_26512;
		
		default:
	}
	return 0;
}

int func_189(char* sParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (iParam3 != -1 && bParam4)
	{
	}
	if (iParam3 != -1 && !bParam4)
	{
		if (!func_539() && unk_0xE5965CDF24F93A9F(Global_1966324))
		{
			*uParam1 = Global_1966324;
			if (func_269(*uParam1, uParam2, &(uParam2->f_350), &(uParam2->f_351), &(uParam2->f_352), &(uParam2->f_353), 1, 0, 1, 1, 0) || func_70(&(uParam2->f_359), 60000, 0))
			{
				if (uParam2->f_353 != 3 && !func_70(&(uParam2->f_359), 60000, 0))
				{
					StringCopy(sParam0, unk_0x01E2429B82E280E6(unk_0x15CAA6D7B11F1A7C(*uParam1)), 64);
					Global_1966326 = unk_0x48352343BC5A41AE();
					uParam2->f_358 = unk_0x15CAA6D7B11F1A7C(*uParam1);
					if (func_111())
					{
						Global_1966325 = 1;
					}
					else
					{
						func_138(joaat("mpply_lw_podium_veh_model"), unk_0x15CAA6D7B11F1A7C(*uParam1));
						func_268();
					}
					func_243(158, "LUCKY_POD_TXT", 1, 0, 0, 0, 0, 1, 0, 0);
				}
				else
				{
					if (func_70(&(uParam2->f_359), 60000, 0))
					{
					}
					StringCopy(sParam0, "INVALID", 64);
				}
				if (Global_262145.f_28527)
				{
					if (uParam2->f_358 == joaat("clique"))
					{
						iVar0 = func_24(joaat("mpply_xmasliveries16"));
						unk_0xCED9E32812D6C7C7(&iVar0, 6);
						func_138(joaat("mpply_xmasliveries16"), iVar0);
					}
				}
				unk_0xCED9E32812D6C7C7(&(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_854), 0);
				func_241();
				func_69(&(uParam2->f_359));
				return 1;
			}
		}
		else
		{
			if (!unk_0xE5965CDF24F93A9F(Global_1966324))
			{
			}
			StringCopy(sParam0, "GIVE_RP_FOR_VEH", 64);
			func_190(0, unk_0xE2D3D51028F0428A(), "200000", -1827353931, 1223799452, 20000, 1, -1, 0, 0, 0);
			return 1;
		}
	}
	else if (iParam3 == -1)
	{
		if (func_269(*uParam1, uParam2, &(uParam2->f_350), &(uParam2->f_351), &(uParam2->f_352), &(uParam2->f_353), 1, 0, 1, 0, 0) || func_70(&(uParam2->f_359), 60000, 0))
		{
			if (uParam2->f_353 != 3 && !func_70(&(uParam2->f_359), 60000, 0))
			{
				StringCopy(sParam0, unk_0x01E2429B82E280E6(unk_0x15CAA6D7B11F1A7C(*uParam1)), 64);
			}
			else
			{
				if (func_70(&(uParam2->f_359), 60000, 0))
				{
				}
				StringCopy(sParam0, "INVALID", 64);
			}
			if (unk_0xCB09A834F0C86FBB(unk_0x15CAA6D7B11F1A7C(*uParam1)))
			{
				unk_0xCED9E32812D6C7C7(&(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_854), 0);
			}
			else if (unk_0x6F0299ED3CEB4E5D(unk_0x15CAA6D7B11F1A7C(*uParam1)))
			{
				unk_0xCED9E32812D6C7C7(&(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_854), 1);
			}
			func_69(&(uParam2->f_359));
			return 1;
		}
	}
	return 0;
}

int func_190(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_200(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (unk_0x44859561F653DD4E() && unk_0xE2D0C323A1AE5D85(Global_4718592.f_39, 19))
	{
		return iVar0;
	}
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0xE5965CDF24F93A9F(iParam1))
		{
			if (unk_0x9044EDB8A7BF67B4(iParam1))
			{
				uVar1 = unk_0x28AA31872A651BC7(iParam1);
				func_196(unk_0x6EA486FF6D815B4B(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_191(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_191(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_194(iParam0, 1) };
	if (iParam0 == func_193(unk_0xE2D3D51028F0428A()))
	{
		func_192(1);
	}
	func_196(Var0, iParam1, 0, sParam2, iParam3);
}

void func_192(int iParam0)
{
	Global_2703656.f_1582 = iParam0;
}

int func_193(int iParam0)
{
	return iParam0;
}

Vector3 func_194(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	
	if (unk_0x66DEF7450747437A())
	{
		Var1 = { unk_0x9C0ED16B4F524508(2) };
	}
	if (iParam0 == func_195(unk_0xE2D3D51028F0428A()) && unk_0x4DE6A646AFB7CF5C(unk_0x47E529DA87615548()) == 4)
	{
		Var0 = { unk_0xCACAD935C0BEE14F(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0x6B62510F212526DC(iParam0, 0) };
	}
	fVar2 = 0f;
	if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		fVar2 = unk_0x82FE2343F8BDFF0B(iParam0);
		if (unk_0x4DE6A646AFB7CF5C(unk_0x47E529DA87615548()) == 4)
		{
			fVar2 = Var1.f_2;
		}
	}
	unk_0xB38EF75835FAF667(unk_0x15CAA6D7B11F1A7C(iParam0), &Var3, &Var4);
	if (bParam1)
	{
		fVar5 = (Var4.f_2 + 0.18f);
	}
	else
	{
		fVar5 = (Var3.f_2 + 0.18f);
	}
	Var0 = { unk_0x6DB7FBD602C51670(Var0, fVar2, 0f, 0f, fVar5) };
	return Var0;
}

int func_195(int iParam0)
{
	return iParam0;
}

void func_196(struct<3> Param0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2703656.f_981[iVar0 /*30*/].f_6 == 0 || Global_2703656.f_981[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2703656.f_981[iVar1 /*30*/] = { Param0 };
			Global_2703656.f_981[iVar1 /*30*/].f_6 = 1;
			Global_2703656.f_981[iVar1 /*30*/].f_4 = func_199(Global_2703656.f_981[iVar1 /*30*/], &Global_1574479, &Global_1574480);
			Global_2703656.f_981[iVar1 /*30*/].f_7 = unk_0x0A89FDFA763DCAED();
			Global_2703656.f_981[iVar1 /*30*/].f_3 = iParam1;
			Global_2703656.f_981[iVar1 /*30*/].f_8 = iParam2;
			Global_2703656.f_981[iVar1 /*30*/].f_9 = func_198();
			Global_2703656.f_981[iVar1 /*30*/].f_10 = func_197();
			StringCopy(&(Global_2703656.f_981[iVar1 /*30*/].f_22), sParam3, 16);
			Global_2703656.f_981[iVar1 /*30*/].f_26 = unk_0x35DE445E5254AFED(unk_0x0A89FDFA763DCAED(), iParam4);
		}
	}
}

int func_197()
{
	if (Global_2703656.f_1582)
	{
		Global_2703656.f_1582 = 0;
		return 1;
	}
	Global_2703656.f_1582 = 0;
	return 0;
}

var func_198()
{
	var uVar0;
	
	uVar0 = Global_2703656.f_1584;
	Global_2703656.f_1584 = 1;
	return uVar0;
}

float func_199(struct<3> Param0, var uParam1, var uParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x987A5F1E1A67E3C0(unk_0xCB284F809B594322(), Param0, 1);
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

var func_200(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_201(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_201(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_240(unk_0x9E2D6C50374FCFA9()) || func_239(unk_0x9E2D6C50374FCFA9()))
	{
		if (Global_262145.f_9893 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9893;
		}
	}
	else if (func_236() || func_233(unk_0x9E2D6C50374FCFA9()))
	{
		if (Global_262145.f_23050 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_23050;
		}
	}
	else if (Global_262145.f_6892 > 20000)
	{
		iVar2 = 20000;
	}
	else
	{
		iVar2 = Global_262145.f_6892;
	}
	if (func_232(uParam2))
	{
	}
	if (func_231())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_229(iVar1);
		fVar3 = (to_float(iVar1) * Global_262145.f_1);
		iVar1 = round(fVar3);
		if (bParam10)
		{
			iVar1 = func_228(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_225(0, &iVar1);
					break;
				
				case 3:
					func_225(1, &iVar1);
					break;
				
				case 1:
					func_221(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1957924)
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
			func_219(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_210((func_218(unk_0x9E2D6C50374FCFA9()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x5842EA5D6A4620E2(iVar1, iParam8, iParam9);
				if (Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_36.f_2 != -1)
				{
					func_219(1166, iVar1, -1);
				}
				func_204(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_202((func_203(unk_0x9E2D6C50374FCFA9()) + iVar1));
			}
			else
			{
				func_202((func_203(unk_0x9E2D6C50374FCFA9()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_202(int iParam0)
{
	if (func_231())
	{
		Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_205.f_5 = iParam0;
		func_138(joaat("mpply_globalxp"), iParam0);
	}
}

int func_203(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_6(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x9E2D6C50374FCFA9())
			{
				return func_24(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1853128[iParam0 /*888*/].f_205.f_5;
			}
		}
		else
		{
			return func_24(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

void func_204(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_209(unk_0x9E2D6C50374FCFA9()) };
	if (unk_0xF453DE81BDFDAE6F())
	{
		if (unk_0x8C992447292D600F(&Var0))
		{
			iVar1 = func_207(func_208(&Var0));
			if (iVar1 == 0)
			{
				func_206(&Global_1655483, iParam0);
				func_205(joaat("mpply_crew_local_xp_0"), Global_1655483);
			}
			else if (iVar1 == 1)
			{
				func_206(&Global_1655484, iParam0);
				func_205(joaat("mpply_crew_local_xp_1"), Global_1655484);
			}
			else if (iVar1 == 2)
			{
				func_206(&Global_1655485, iParam0);
				func_205(joaat("mpply_crew_local_xp_2"), Global_1655485);
			}
			else if (iVar1 == 3)
			{
				func_206(&Global_1655486, iParam0);
				func_205(joaat("mpply_crew_local_xp_3"), Global_1655486);
			}
			else if (iVar1 == 4)
			{
				func_206(&Global_1655487, iParam0);
				func_205(joaat("mpply_crew_local_xp_4"), Global_1655487);
			}
		}
	}
}

void func_205(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1655478 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1655480 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1655480 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1655481 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1655482 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1655483 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1655484 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1655485 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1655486 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1655487 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1655488 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1655489 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1655490 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1655491 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1655492 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1655493 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1655494 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_206(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_207(int iParam0)
{
	if (iParam0 == Global_1655478)
	{
		return 0;
	}
	else if (iParam0 == Global_1655479)
	{
		return 1;
	}
	else if (iParam0 == Global_1655480)
	{
		return 2;
	}
	else if (iParam0 == Global_1655481)
	{
		return 3;
	}
	else if (iParam0 == Global_1655482)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_208(var uParam0)
{
	if (unk_0xF453DE81BDFDAE6F())
	{
		if (unk_0x8C992447292D600F(uParam0))
		{
			return Global_2725166;
		}
	}
	return Global_2725166;
}

struct<13> func_209(int iParam0)
{
	struct<13> Var0;
	
	unk_0x460FFCEC183339C6(iParam0, &Var0, 13);
	return Var0;
}

void func_210(int iParam0, int iParam1, int iParam2)
{
	if (func_231())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9861 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1655628[func_22(-1)])
				{
					unk_0x5842EA5D6A4620E2(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1655628[func_22(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9860 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x5842EA5D6A4620E2(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9860 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x5842EA5D6A4620E2(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_217(unk_0x9E2D6C50374FCFA9()))
		{
			Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_205.f_1 = iParam0;
			Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_205.f_6 = func_215(iParam0, 1);
		}
		func_214(640, iParam0, -1, 1);
		func_64(641, func_215(iParam0, 1), -1, 1, 0);
		Global_1655628[func_22(-1)] = iParam0;
		func_211(-1109644434, 7, 0);
	}
}

void func_211(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_213(iParam1, iParam2))
	{
		iVar0 = func_212();
		Global_2725118[iVar0] = iParam1;
		Global_2725129[iVar0] = iParam0;
	}
}

int func_212()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2725118[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_213(int iParam0, var uParam1)
{
	if (Global_1575034)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575046) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_214(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2821895[iParam0 /*3*/][func_22(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1655556[func_22(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1655562[func_22(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1655568[func_22(iParam2)] = iParam1;
			break;
		
		case 791:
			Global_1655574[func_22(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1655580[func_22(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1655526[func_22(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1655532[func_22(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1655538[func_22(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1655544[func_22(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1655550[func_22(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1655496[func_22(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1655502[func_22(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1655508[func_22(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1655514[func_22(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1655520[func_22(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1655586[func_22(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1655592[func_22(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1655598[func_22(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1655604[func_22(iParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1655610[func_22(iParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1655616[func_22(iParam2)] = iParam1;
			break;
		
		case 7235:
			Global_1655622[func_22(iParam2)] = iParam1;
			break;
		
		case 640:
			Global_1655628[func_22(iParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1655634[func_22(iParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2863282[0 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2863282[1 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 2931:
			Global_2863282[2 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2863282[3 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 10890:
			Global_2863443[func_22(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1655640[func_22(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1655646[func_22(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1655652[func_22(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1655658[func_22(iParam2)] = iParam1;
			break;
		
		case 9537:
			Global_1655664[func_22(iParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1655670[func_22(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2863361[0 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2863361[1 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2863361[2 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2863361[3 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2863361[4 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2863446[0 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2863446[1 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2863446[2 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2863446[3 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2863446[4 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2863462[0 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2863462[1 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2863462[2 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2863462[3 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2863462[4 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2863361[5 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2863282[4 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2863478[func_22(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2863487[func_22(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2863481[func_22(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2863490[func_22(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2863484[func_22(iParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2863493[func_22(iParam2)] = iParam1;
			break;
		
		case 3691:
			Global_2863496[func_22(iParam2)] = iParam1;
			break;
		
		case 3231:
			Global_2863361[6 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2863282[5 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 3236:
			Global_2863361[7 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2863282[6 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2863361[8 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2863282[7 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2863361[9 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2863282[8 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 4027:
			Global_2863361[10 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2863282[9 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 4030:
			Global_2863361[11 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2863282[10 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 6111:
			Global_2863361[12 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2863282[11 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 6169:
			Global_2863361[13 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2863282[12 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 6547:
			Global_2863361[14 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2863282[13 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2863361[15 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2863282[14 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 6563:
			Global_2863361[16 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2863282[15 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 6566:
			Global_2863361[17 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2863282[16 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2863282[17 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2863282[18 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 7289:
			Global_2863282[19 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 8012:
			Global_2863282[20 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2863499[func_22(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2863502[func_22(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2863505[func_22(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2863508[func_22(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2863511[func_22(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2863514[func_22(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2863517[func_22(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2863520[func_22(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2863523[func_22(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2863526[func_22(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2863529[func_22(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2863532[func_22(iParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2863535[func_22(iParam2)] = iParam1;
			break;
		
		case 8904:
			Global_2863538[func_22(iParam2)] = iParam1;
			break;
		
		case 8536:
			Global_2863282[21 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 8981:
			Global_2863361[23 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 8979:
			Global_2863282[22 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 8984:
			Global_2863361[24 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2863282[23 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 9623:
			Global_2863282[24 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 9912:
			Global_2863282[25 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_215(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_216(iParam0, 0);
}

int func_216(int iParam0, int iParam1)
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
		if (Global_294328[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_294328[iVar3] < iParam0)
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

int func_217(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xE2D0C323A1AE5D85(Global_2703656.f_1, iParam0);
	}
	return 1;
}

int func_218(int iParam0)
{
	if (Global_1574629.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x9E2D6C50374FCFA9())
			{
				return Global_1655628[func_22(-1)];
			}
			else if (func_217(iParam0))
			{
				return Global_1853128[iParam0 /*888*/].f_205.f_1;
			}
		}
	}
	else
	{
		return Global_1655628[func_22(-1)];
	}
	return 0;
}

void func_219(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_21(iParam0, func_22(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_220(iParam0))
	{
		func_64(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_214(iParam0, iVar0, iParam2, 1);
	}
}

int func_220(int iParam0)
{
	if (Global_1655477)
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
			case 10890:
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
			case 9912:
				return 1;
				break;
			}
	}
	return 0;
}

void func_221(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9());
	iVar0 = 0;
	while (iVar0 < unk_0x5D79167FED95F0B0())
	{
		iVar4 = unk_0x54F800F95142C750(iVar0);
		if (unk_0x81F82FFBED0CACCA(iVar4))
		{
			iVar5 = unk_0x6B01934FA503547F(iVar4);
			if (unk_0x0E40F846A70BA3EC(iVar5) != -1)
			{
				if (unk_0x0E40F846A70BA3EC(iVar5) == iVar1 || func_224(unk_0x0E40F846A70BA3EC(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x9E2D6C50374FCFA9())
					{
						if (func_223(unk_0x9E2D6C50374FCFA9(), iVar5))
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
		iVar6 = round((func_222(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round((func_222(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_222(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_223(int iParam0, int iParam1)
{
	if (unk_0xF453DE81BDFDAE6F())
	{
		Global_2783300 = { func_209(iParam0) };
		Global_2783313 = { func_209(iParam1) };
		if (unk_0x8C992447292D600F(&Global_2783300))
		{
			if (unk_0x8C992447292D600F(&Global_2783313))
			{
				unk_0x4FFBF2C0D8249E45(&Global_2783230, 35, &Global_2783300);
				unk_0x4FFBF2C0D8249E45(&Global_2783265, 35, &Global_2783313);
				if (Global_2783230 == Global_2783265)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_224(int iParam0, int iParam1, int iParam2)
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
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 0);
				
				case 1:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 1);
				
				case 2:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 2);
				
				case 3:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 4);
				
				case 1:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 5);
				
				case 2:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 6);
				
				case 3:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 8);
				
				case 1:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 9);
				
				case 2:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 10);
				
				case 3:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 12);
				
				case 1:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 13);
				
				case 2:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 14);
				
				case 3:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 15);
				
				default:
			}
			break;
	}
	return 0;
}

void func_225(bool bParam0, int iParam1)
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
		while (iVar0 < unk_0x5D79167FED95F0B0())
		{
			iVar3 = iVar0;
			if (unk_0x81F82FFBED0CACCA(iVar3))
			{
				iVar4 = unk_0x6B01934FA503547F(iVar3);
				if (func_6(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x9E2D6C50374FCFA9())
					{
						iVar1++;
						if (func_223(unk_0x9E2D6C50374FCFA9(), iVar4))
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
			if (func_6(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x9E2D6C50374FCFA9())
				{
					if (func_226(unk_0x9E2D6C50374FCFA9(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_223(unk_0x9E2D6C50374FCFA9(), iVar4))
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
		iVar5 = round((func_222(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round((func_222(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_226(int iParam0, int iParam1)
{
	return vdist(func_227(iParam0), func_227(iParam1));
	return 0f;
}

Vector3 func_227(int iParam0)
{
	return unk_0x6B62510F212526DC(unk_0x407E03586628E458(iParam0), 0);
}

int func_228(int iParam0)
{
	int iVar0;
	
	if (unk_0x6F8BA9EF200E4310() != 3)
	{
		return *iParam0;
	}
	iVar0 = round((func_222(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_229(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x07141611FD632B59(iParam0) > func_218(unk_0x9E2D6C50374FCFA9()))
		{
			iParam0 = -func_218(unk_0x9E2D6C50374FCFA9());
		}
	}
	if (func_230(8000, 0, 0) > 0)
	{
		if (func_230(8000, 0, 0) < (iParam0 + func_218(unk_0x9E2D6C50374FCFA9())))
		{
			iParam0 = (func_230(8000, 0, 0) - func_218(unk_0x9E2D6C50374FCFA9()));
		}
	}
	return iParam0;
}

int func_230(int iParam0, bool bParam1, int iParam2)
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
	return Global_294328[iParam0];
}

int func_231()
{
	return 1;
}

int func_232(char* sParam0)
{
	if (unk_0xE8F6C1F695B25B91(uParam0))
	{
		return 1;
	}
	else if (unk_0x3C57C2F07FEE34D2(uParam0, "") || unk_0x3C57C2F07FEE34D2(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_233(int iParam0)
{
	return func_234(func_235(iParam0));
}

int func_234(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_235(int iParam0)
{
	if (func_34(iParam0, 0))
	{
		return Global_1893548[iParam0 /*600*/].f_11.f_33;
	}
	return -1;
}

int func_236()
{
	if (unk_0x44859561F653DD4E())
	{
		return func_238();
	}
	return func_237(Global_4718592.f_86750);
}

int func_237(int iParam0)
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

var func_238()
{
	return Global_2714627.f_19;
}

bool func_239(int iParam0)
{
	return Global_2689156[iParam0 /*453*/].f_119 == 2;
}

bool func_240(int iParam0)
{
	return Global_2689156[iParam0 /*453*/].f_119 == 7;
}

void func_241()
{
	struct<3> Var0;
	int iVar1;
	
	Var0.x = 1950431222;
	Var0.f_1 = unk_0x9E2D6C50374FCFA9();
	Var0.f_2 = 1;
	iVar1 = func_242(1, 1);
	if (iVar1 != -1)
	{
		unk_0x2700C00F82C16BF0(1, &Var0, 3, iVar1);
	}
}

var func_242(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xA1087A6350CD9244(iVar1);
		if (func_6(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x9E2D6C50374FCFA9() || iParam0)
			{
				if (bParam1)
				{
					unk_0xCED9E32812D6C7C7(&uVar0, iVar1);
				}
				else if (!func_16(iVar2, 0))
				{
					unk_0xCED9E32812D6C7C7(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_243(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0xB0550BC91B0159D6(&Global_7824, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_245(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8531 = iParam6;
			Global_8434[3 /*6*/] = { func_244(iParam0) };
			Global_8511 = iParam0;
			unk_0xCED9E32812D6C7C7(&Global_7824, 1);
			unk_0xCED9E32812D6C7C7(&Global_7824, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_244(int iParam0)
{
	return Global_1918[iParam0 /*29*/].f_3;
}

int func_245(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x3C57C2F07FEE34D2(sParam14, sParam15))
	{
	}
	func_261();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_19954 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_19954 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_19954 == 1)
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
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
		{
			if (unk_0x35D4F23CB8A63EDB(unk_0xE2D3D51028F0428A()))
			{
				return 0;
			}
		}
		if (Global_112915.f_14051[Global_19954 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0xB4C854DD86E40FDA(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0xB4C854DD86E40FDA(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_260() == 0)
	{
		func_258();
		return 0;
	}
	func_257(Global_22352);
	StringCopy(&(Global_112915.f_14141[Global_22352 /*104*/]), sParam1, 64);
	Global_112915.f_14141[Global_22352 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_112915.f_14141[Global_22352 /*104*/].f_24 = iParam2;
	}
	Global_112915.f_14141[Global_22352 /*104*/].f_25 = iParam7;
	Global_112915.f_14141[Global_22352 /*104*/].f_26 = uParam8;
	Global_112915.f_14141[Global_22352 /*104*/].f_29 = uParam9;
	Global_112915.f_14141[Global_22352 /*104*/].f_30 = uParam12;
	Global_112915.f_14141[Global_22352 /*104*/].f_31 = uParam11;
	Global_112915.f_14141[Global_22352 /*104*/].f_28 = 0;
	Global_112915.f_14141[Global_22352 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_112915.f_14141[Global_22352 /*104*/].f_33), sParam4, 64);
	Global_112915.f_14141[Global_22352 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_112915.f_14141[Global_22352 /*104*/].f_50), sParam5, 64);
	Global_112915.f_14141[Global_22352 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_112915.f_14141[Global_22352 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_112915.f_14141[Global_22352 /*104*/].f_83), sParam15, 64);
	if (unk_0xE2D0C323A1AE5D85(Global_7824, 10))
	{
		Global_112915.f_14141[Global_22352 /*104*/].f_99[0] = 1;
		Global_112915.f_14141[Global_22352 /*104*/].f_99[1] = 1;
		Global_112915.f_14141[Global_22352 /*104*/].f_99[2] = 1;
		Global_8530 = 4;
		func_256(0);
		func_256(2);
		func_256(1);
	}
	else
	{
		func_261();
		switch (iParam16)
		{
			case 3:
				Global_112915.f_14141[Global_22352 /*104*/].f_99[Global_19954] = 1;
				break;
			
			case 0:
				Global_112915.f_14141[Global_22352 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_112915.f_14141[Global_22352 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_112915.f_14141[Global_22352 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_19954)
			{
				case 0:
					func_256(0);
					Global_8530 = 0;
					break;
				
				case 1:
					func_256(1);
					Global_8530 = 1;
					break;
				
				case 2:
					func_256(2);
					Global_8530 = 2;
					break;
				
				case 3:
					func_256(3);
					Global_8530 = 3;
					break;
				
				default:
					Global_8530 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0xE2D0C323A1AE5D85(Global_7824, 10))
		{
			Global_112915.f_14051[0 /*20*/].f_17 = 1;
			Global_112915.f_14051[1 /*20*/].f_17 = 1;
			Global_112915.f_14051[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_112915.f_14051[Global_19954 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_112915.f_14051[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_112915.f_14051[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_112915.f_14051[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_22354[Global_22352] = 0;
	if (bParam10)
	{
		func_261();
		if (Global_19897)
		{
			StringCopy(&Global_19943, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_19954)
			{
				case 0:
					StringCopy(&Global_19943, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_19943, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_19943, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_19943, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8629[Global_19954 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_255())
			{
				unk_0x91DFC8F68F6D9B05(-1, "Text_Arrive_Tone", &Global_19943, 1);
			}
		}
	}
	if (!Global_20145)
	{
		if (Global_19954.f_1 == 6)
		{
			func_254(Global_19935, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_250(1);
			func_254(Global_19935, "DISPLAY_VIEW", 1f, to_float(Global_19934), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1973340 != -1 && iParam0 == Global_1973340)
	{
		bVar1 = true;
	}
	func_246(iParam0, sParam1, bVar1, func_249(unk_0x9E2D6C50374FCFA9()));
	return 1;
}

void func_246(int iParam0, char* sParam1, bool bParam2, var uParam3)
{
	if (!func_247())
	{
		return;
	}
	unk_0xD6CB1A1C9D35D3EF(iParam0, 1654525105, unk_0x2E87280918B16506(sParam1), 0, bParam2, uParam3);
	if (bParam2)
	{
		Global_1973340 = -1;
	}
}

int func_247()
{
	if (!Global_262145.f_28526)
	{
		return 0;
	}
	if (!Global_77852)
	{
		return 0;
	}
	if (unk_0x9E2D6C50374FCFA9() == func_8())
	{
		return 0;
	}
	if (func_248(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if (unk_0xE2D0C323A1AE5D85(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0x44859561F653DD4E())
	{
		return 0;
	}
	return 1;
}

bool func_248(int iParam0)
{
	return func_33(iParam0, 20);
}

int func_249(int iParam0)
{
	return Global_1853128[iParam0 /*888*/].f_205.f_6;
}

void func_250(int iParam0)
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
	
	Global_22353 = 0;
	Global_8429 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_8393[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_253(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7831[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7831[iVar1 /*15*/].f_4)
					{
						if (Global_8393[iVar0] == 0)
						{
							Global_8357[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xE2D0C323A1AE5D85(Global_7825, 3))
								{
									iVar2 = 42;
									Global_20148 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_20148 = 0;
								}
								unk_0xEA5DEA46C3EE64D3(Global_19935, "SET_DATA_SLOT");
								unk_0x4F47E317C74C543B(1);
								unk_0x4F47E317C74C543B(iVar0);
								unk_0x4F47E317C74C543B(Global_7831[iVar1 /*15*/].f_10);
								unk_0x4F47E317C74C543B(0);
								func_252(&(Global_7831[iVar1 /*15*/]));
								unk_0x4F47E317C74C543B(iVar2);
								unk_0x6F06CF0E9AB02847();
							}
							if (Global_2725219)
							{
								if (iVar1 == 14)
								{
									func_251(Global_19935, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7831[iVar1 /*15*/].f_10), to_float(Global_22348), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_8393[iVar0] = 1;
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
				if (iParam0 == Global_7831[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7831[iVar1 /*15*/].f_4)
					{
						if (Global_8393[iVar0] == 0)
						{
							Global_8357[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_112915.f_14141[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_112915.f_14141[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_112915.f_14141[iVar3 /*104*/].f_99[Global_19954] == 1)
											{
												Global_22353++;
											}
										}
									}
									iVar3++;
								}
								func_251(Global_19935, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7831[iVar1 /*15*/].f_10), to_float(Global_22353), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_77852)
								{
									iVar4 = 0;
									iVar4 = Global_4534061;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4534062[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4534062[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4534062[iVar5 /*104*/].f_99[Global_19954] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_251(Global_19935, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7831[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_19954)
									{
										case 0:
											iVar6 = Global_43785;
											break;
										
										case 1:
											iVar6 = Global_43786;
											break;
										
										case 2:
											iVar6 = Global_43787;
											break;
										
										default:
											break;
									}
									func_251(Global_19935, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7831[iVar1 /*15*/].f_10), to_float(iVar6), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_251(Global_19935, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7831[iVar1 /*15*/].f_10), to_float(Global_22348), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xEA5DEA46C3EE64D3(Global_19935, "SET_DATA_SLOT");
								unk_0x4F47E317C74C543B(1);
								unk_0x4F47E317C74C543B(iVar0);
								unk_0x4F47E317C74C543B(Global_7831[iVar1 /*15*/].f_10);
								unk_0x4F47E317C74C543B(0);
								func_252(&(Global_7831[iVar1 /*15*/]));
								unk_0x4F47E317C74C543B(Global_7830);
								unk_0x6F06CF0E9AB02847();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xE2D0C323A1AE5D85(Global_7825, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xEA5DEA46C3EE64D3(Global_19935, "SET_DATA_SLOT");
								unk_0x4F47E317C74C543B(1);
								unk_0x4F47E317C74C543B(iVar0);
								unk_0x4F47E317C74C543B(Global_7831[iVar1 /*15*/].f_10);
								unk_0x4F47E317C74C543B(0);
								func_252(&(Global_7831[iVar1 /*15*/]));
								unk_0x4F47E317C74C543B(iVar7);
								unk_0x6F06CF0E9AB02847();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xE2D0C323A1AE5D85(Global_7825, 3))
								{
									iVar8 = 42;
									Global_20148 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_20148 = 0;
								}
								unk_0xEA5DEA46C3EE64D3(Global_19935, "SET_DATA_SLOT");
								unk_0x4F47E317C74C543B(1);
								unk_0x4F47E317C74C543B(iVar0);
								unk_0x4F47E317C74C543B(Global_7831[iVar1 /*15*/].f_10);
								unk_0x4F47E317C74C543B(0);
								func_252(&(Global_7831[iVar1 /*15*/]));
								unk_0x4F47E317C74C543B(iVar8);
								unk_0x6F06CF0E9AB02847();
							}
							else if (iVar1 == 8)
							{
								unk_0xEA5DEA46C3EE64D3(Global_19935, "SET_DATA_SLOT");
								unk_0x4F47E317C74C543B(1);
								unk_0x4F47E317C74C543B(iVar0);
								unk_0x4F47E317C74C543B(Global_7831[iVar1 /*15*/].f_10);
								unk_0x4F47E317C74C543B(0);
								func_252(&(Global_7831[iVar1 /*15*/]));
								unk_0x4F47E317C74C543B(42);
								unk_0x6F06CF0E9AB02847();
							}
							else if ((iVar1 == 23 && unk_0x3C57C2F07FEE34D2(&(Global_7831[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xE2D0C323A1AE5D85(Global_7825, 6))
							{
								unk_0xEA5DEA46C3EE64D3(Global_19935, "SET_DATA_SLOT");
								unk_0x4F47E317C74C543B(1);
								unk_0x4F47E317C74C543B(iVar0);
								unk_0x4F47E317C74C543B(Global_7831[iVar1 /*15*/].f_10);
								unk_0x4F47E317C74C543B(0);
								func_252(&(Global_7831[iVar1 /*15*/]));
								unk_0x4F47E317C74C543B(42);
								unk_0x6F06CF0E9AB02847();
							}
							else if (Global_7831[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1889922.f_1;
								func_251(Global_19935, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7831[iVar1 /*15*/].f_10), to_float(iVar9), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_251(Global_19935, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7831[iVar1 /*15*/].f_10), to_float(0), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_8393[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_251(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0xEA5DEA46C3EE64D3(uParam0, sParam1);
	unk_0x4F47E317C74C543B(round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4F47E317C74C543B(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4F47E317C74C543B(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4F47E317C74C543B(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4F47E317C74C543B(round(fParam6));
	}
	if (!unk_0xACC32B78196FBC2A(sParam7))
	{
		func_252(sParam7);
	}
	if (!unk_0xACC32B78196FBC2A(sParam8))
	{
		func_252(sParam8);
	}
	if (!unk_0xACC32B78196FBC2A(sParam9))
	{
		func_252(sParam9);
	}
	if (!unk_0xACC32B78196FBC2A(sParam10))
	{
		func_252(sParam10);
	}
	if (!unk_0xACC32B78196FBC2A(sParam11))
	{
		func_252(sParam11);
	}
	unk_0x6F06CF0E9AB02847();
}

void func_252(char* sParam0)
{
	unk_0x4ADC8B166E139423(sParam0);
	unk_0xD1D4F8D5470AFA4C();
}

bool func_253(int iParam0)
{
	return Global_42596 == iParam0;
}

void func_254(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xEA5DEA46C3EE64D3(uParam0, sParam1);
	unk_0x4F47E317C74C543B(round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4F47E317C74C543B(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4F47E317C74C543B(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4F47E317C74C543B(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4F47E317C74C543B(round(fParam6));
	}
	unk_0x6F06CF0E9AB02847();
}

bool func_255()
{
	return Global_1575046;
}

void func_256(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_112915.f_14051[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_257(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0xAA2844CAD88768B5();
	uVar1 = unk_0x80F97D7D29800A1A();
	uVar2 = unk_0x09FC827691DACE59();
	uVar3 = unk_0xD52BD97E61483713();
	uVar4 = unk_0x771485043FDC55DE() + 1;
	uVar5 = unk_0x1137FD08B8D3F874();
	Global_112915.f_14141[iParam0 /*104*/].f_18 = uVar0;
	Global_112915.f_14141[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_112915.f_14141[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_112915.f_14141[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_112915.f_14141[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_112915.f_14141[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_258()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_77852)
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
	Global_22352 = 34;
	Global_112915.f_14141[Global_22352 /*104*/].f_18 = -1;
	Global_112915.f_14141[Global_22352 /*104*/].f_18.f_1 = 0;
	Global_112915.f_14141[Global_22352 /*104*/].f_18.f_2 = 0;
	Global_112915.f_14141[Global_22352 /*104*/].f_18.f_3 = 0;
	Global_112915.f_14141[Global_22352 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_259(Global_112915.f_14141[iVar2 /*104*/].f_18, Global_112915.f_14141[Global_22352 /*104*/].f_18))
		{
			Global_22352 = iVar2;
		}
		iVar2++;
	}
	Global_112915.f_14141[Global_22352 /*104*/].f_24 = 1;
}

int func_259(struct<6> Param0, struct<6> Param1)
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

int func_260()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_77852)
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
		if (Global_112915.f_14141[iVar2 /*104*/].f_24 == 0)
		{
			Global_22352 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_22352 = 34;
	Global_112915.f_14141[Global_22352 /*104*/].f_18 = -1;
	Global_112915.f_14141[Global_22352 /*104*/].f_18.f_1 = 0;
	Global_112915.f_14141[Global_22352 /*104*/].f_18.f_2 = 0;
	Global_112915.f_14141[Global_22352 /*104*/].f_18.f_3 = 0;
	Global_112915.f_14141[Global_22352 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_112915.f_14141[iVar2 /*104*/].f_24 == 0 || Global_112915.f_14141[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_259(Global_112915.f_14141[iVar2 /*104*/].f_18, Global_112915.f_14141[Global_22352 /*104*/].f_18))
			{
				Global_22352 = iVar2;
			}
		}
		if (Global_112915.f_14141[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_22352 == 34)
	{
		return 0;
	}
	Global_112915.f_14141[Global_22352 /*104*/].f_99[0] = 0;
	Global_112915.f_14141[Global_22352 /*104*/].f_99[1] = 0;
	Global_112915.f_14141[Global_22352 /*104*/].f_99[2] = 0;
	return 1;
}

void func_261()
{
	if (func_253(14))
	{
		if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
		{
			if (unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()) == Global_112915.f_28050[0 /*29*/])
			{
				Global_19954 = 0;
			}
			else if (unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()) == Global_112915.f_28050[1 /*29*/])
			{
				Global_19954 = 1;
			}
			else if (unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()) == Global_112915.f_28050[2 /*29*/])
			{
				Global_19954 = 2;
			}
			else
			{
				Global_19954 = 0;
			}
		}
	}
	else
	{
		Global_19954 = func_262();
		if (Global_19954 == 145)
		{
			Global_19954 = 3;
		}
		if (Global_77852)
		{
			Global_19954 = 3;
		}
		if (Global_19954 > 3)
		{
			Global_19954 = 3;
		}
	}
}

var func_262()
{
	func_263();
	return Global_112915.f_2363.f_539.f_4321;
}

void func_263()
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
	{
		if (func_266(Global_112915.f_2363.f_539.f_4321) != unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()))
		{
			iVar0 = func_265(unk_0xE2D3D51028F0428A());
			if (func_264(iVar0) && (!func_253(14) || Global_111866))
			{
				if (Global_112915.f_2363.f_539.f_4321 != iVar0 && func_264(Global_112915.f_2363.f_539.f_4321))
				{
					Global_112915.f_2363.f_539.f_4322 = Global_112915.f_2363.f_539.f_4321;
				}
				Global_112915.f_2363.f_539.f_4323 = iVar0;
				Global_112915.f_2363.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_112915.f_2363.f_539.f_4321 != 145)
			{
				Global_112915.f_2363.f_539.f_4323 = Global_112915.f_2363.f_539.f_4321;
			}
			return;
		}
	}
	Global_112915.f_2363.f_539.f_4321 = 145;
}

bool func_264(int iParam0)
{
	return iParam0 < 3;
}

int func_265(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		iVar1 = unk_0x15CAA6D7B11F1A7C(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_266(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_266(int iParam0)
{
	if (func_264(iParam0))
	{
		return func_267(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_267(int iParam0)
{
	return Global_1918[iParam0 /*29*/];
}

void func_268()
{
	func_64(8352, (Global_1966326 + 604800), -1, 1, 0);
	Global_2725174 = 1;
}

int func_269(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = -1;
	bVar2 = false;
	iVar4 = unk_0x15CAA6D7B11F1A7C(iParam0);
	switch (*uParam5)
	{
		case 0:
			if (func_538(unk_0x15CAA6D7B11F1A7C(iParam0), -1))
			{
				func_530(iVar4, &iVar0);
				if (iVar0 != -1)
				{
					*iParam3 = func_529(1, 0, iVar4, iVar0, -1, 0);
					*uParam4 = func_521(1, 0, iVar4, iVar0, -1, 0);
					if (*iParam3 > -1 && *uParam4 > -1)
					{
						*uParam5 = 1;
					}
				}
				else
				{
					iVar1 = -1;
				}
				if (iVar1 == -1 || *uParam4 == -1)
				{
					if (!unk_0xE2D0C323A1AE5D85(uParam1->f_344, 7))
					{
						if (func_405(uParam1, iParam3, uParam4, iVar4, 0, -1, 1))
						{
							if (*iParam3 > -1 && *uParam4 > -1)
							{
								*uParam5 = 1;
							}
						}
					}
					else if (bParam8)
					{
						iVar3 = 36;
						set_warning_message_with_header("BRSCRWTEX", "LW_LOSE_VEH", iVar3, 0, false, -1, 0, 0, true, 0);
						if (unk_0x3E6C9DAD84CEFED1() && !func_404())
						{
							if (unk_0x4C1B8C5717647539(2, 201))
							{
								unk_0xB0550BC91B0159D6(&(uParam1->f_344), 7);
								*uParam5 = 3;
								return 1;
							}
							else if (unk_0x4C1B8C5717647539(2, 202) || func_403())
							{
								unk_0xB0550BC91B0159D6(&(uParam1->f_344), 7);
							}
						}
					}
					else
					{
						unk_0xB0550BC91B0159D6(&(uParam1->f_344), 7);
						*uParam5 = 3;
						return 1;
					}
				}
			}
			else if (!func_402(unk_0x15CAA6D7B11F1A7C(iParam0)) && !unk_0x532C99FAF70C652B(unk_0x15CAA6D7B11F1A7C(iParam0)))
			{
				if (func_401())
				{
					iVar5 = 0;
					while (iVar5 < 337)
					{
						if (func_397(iVar5))
						{
							bVar2 = true;
							iVar5 = 338;
						}
						iVar5++;
					}
					iVar3 = 18;
					if (bVar2)
					{
						set_warning_message_with_header("BRSCRWTEX", "CASINO_PRIZE_V1", iVar3, 0, false, -1, 0, 0, true, 0);
					}
					else
					{
						set_warning_message_with_header("BRSCRWTEX", "CASINO_PRIZE_V2", iVar3, 0, false, -1, 0, 0, true, 0);
					}
					if (unk_0x3E6C9DAD84CEFED1())
					{
						if (unk_0x4C1B8C5717647539(2, 202) || func_403())
						{
							*uParam5 = 3;
							return 1;
						}
						else if (unk_0x4C1B8C5717647539(2, 201))
						{
							*iParam3 = 0;
							*uParam4 = 0;
							*uParam5 = 1;
						}
					}
				}
				else if (unk_0xE2D0C323A1AE5D85(Global_1585844[0 /*142*/].f_103, 2))
				{
					iVar3 = 18;
					set_warning_message_with_header("BRSCRWTEX", "CASINO_PRIZE_V2", iVar3, 0, false, -1, 0, 0, true, 0);
					if (unk_0x3E6C9DAD84CEFED1())
					{
						if (unk_0x4C1B8C5717647539(2, 202) || func_403())
						{
							*uParam5 = 3;
							return 1;
						}
						else if (unk_0x4C1B8C5717647539(2, 201))
						{
							*iParam3 = 0;
							*uParam4 = 0;
							*uParam5 = 1;
						}
					}
				}
				else
				{
					*iParam3 = 0;
					*uParam4 = 0;
					*uParam5 = 1;
				}
			}
			break;
		
		case 1:
			if (func_127(iParam0))
			{
				if (func_111())
				{
					if (func_349(iParam0, *iParam3, uParam2, 1, 1))
					{
						if (*uParam2 == 2)
						{
							if (*iParam3 >= 0)
							{
								func_345(*uParam4, *iParam3, -1);
							}
							if (!func_538(unk_0x15CAA6D7B11F1A7C(iParam0), -1))
							{
								func_340(1, 0, 0, 0, 0, 0, 0);
								bParam6 = false;
								bParam7 = true;
							}
							if (bParam9)
							{
								if (iParam10 == 0)
								{
								}
								else if (iParam10 == 1)
								{
								}
							}
							func_301(iParam0, *iParam3, 1, bParam6, bParam7, 1, 1, bParam9, 1, -1, iParam10);
							func_270(iParam0, *iParam3);
							func_211(1849420593, 3, 0);
							return 1;
						}
						else if (*uParam2 == 3)
						{
						}
					}
					else
					{
						return 0;
					}
				}
				else
				{
					if (*iParam3 >= 0)
					{
						func_345(*uParam4, *iParam3, -1);
					}
					if (!func_538(unk_0x15CAA6D7B11F1A7C(iParam0), -1))
					{
						func_340(1, 0, 0, 0, 0, 0, 0);
						bParam6 = false;
						bParam7 = true;
					}
					if (bParam9)
					{
						if (iParam10 == 0)
						{
						}
						else if (iParam10 == 1)
						{
						}
					}
					func_301(iParam0, *iParam3, 1, bParam6, bParam7, 1, 1, bParam9, 1, -1, iParam10);
					func_270(iParam0, *iParam3);
					func_211(1849420593, 3, 0);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_270(int iParam0, int iParam1)
{
	func_300(iParam0);
	func_271(iParam1);
}

void func_271(int iParam0)
{
	if (iParam0 >= 0 && iParam0 <= 337)
	{
		unk_0xCED9E32812D6C7C7(&(Global_1585844[iParam0 /*142*/].f_103), 2);
		func_298(101, 1, -1, 1);
		func_278(iParam0, &(Global_1585844[iParam0 /*142*/]), 1, -1, 0, 0);
		if (!Global_1577970)
		{
			func_272(91, 3, 1);
			Global_1577970 = 1;
		}
		else
		{
			func_272(91, 3, 0);
		}
	}
}

void func_272(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	Global_8510 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 160)
	{
		func_261();
		if (iParam1 == 4)
		{
			func_277(iParam0, 0, 1);
			func_277(iParam0, 1, 1);
			func_277(iParam0, 2, 1);
			func_276(iParam0, 0, 1);
			func_276(iParam0, 1, 1);
			func_276(iParam0, 2, 1);
		}
		else
		{
			if (func_275(iParam0, iParam1) == 1 && func_274(iParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_277(iParam0, iVar0, 1);
			func_276(iParam0, iVar0, 1);
			if (iParam0 == 172 && !Global_2810287.f_6730)
			{
				bParam2 = false;
			}
			if (iParam0 == 171 && !Global_2810287.f_6729)
			{
				bParam2 = false;
			}
			if (iParam0 == 173 && !Global_2810287.f_6729)
			{
				bParam2 = false;
			}
		}
		if (bParam2)
		{
			if (!Global_77852)
			{
				if (iParam1 != 4)
				{
					if (Global_19954 != iParam1)
					{
						Global_8483[iParam1 /*4*/] = { func_244(iParam0) };
						Global_8500[iParam1] = 1;
						Global_8505[iParam1] = iParam0;
					}
					else if (iParam0 == Global_19954)
					{
					}
					else
					{
						Global_8434[1 /*6*/] = { func_244(iParam0) };
						Global_8434[1 /*6*/].f_5 = iParam1;
						func_273();
					}
				}
				else
				{
					Global_8434[1 /*6*/] = { func_244(iParam0) };
					Global_8434[1 /*6*/].f_5 = iParam1;
					func_273();
				}
			}
			else
			{
				Global_8434[1 /*6*/] = { func_244(iParam0) };
				Global_8434[1 /*6*/].f_5 = iParam1;
				func_273();
			}
		}
	}
}

void func_273()
{
	char cVar0[64];
	char cVar1[64];
	char* sVar2;
	
	StringCopy(&cVar0, unk_0xAEF70623D03F7B02(&(Global_1918[Global_8510 /*29*/].f_7)), 64);
	if (Global_8529 == 0)
	{
		unk_0x150D8F58B26E9F70("");
		StringCopy(&cVar1, unk_0xAEF70623D03F7B02(&(Global_8434[1 /*6*/])), 64);
		sVar2 = unk_0xAEF70623D03F7B02("CELL_253");
		unk_0x3B81B9627E7885CF(&cVar0, &cVar0, 0, 3, sVar2, &cVar1);
	}
	else
	{
		unk_0x150D8F58B26E9F70("CELL_255");
		unk_0x26C23BE14F66F202(&(Global_8434[1 /*6*/]));
		unk_0x3B81B9627E7885CF(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0xB0550BC91B0159D6(&Global_7824, 0);
}

int func_274(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1918[iParam0 /*29*/].f_24[iParam1];
}

int func_275(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1918[iParam0 /*29*/].f_12[iParam1];
}

void func_276(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1918[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_112915.f_28050[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

void func_277(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1918[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_112915.f_28050[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

int func_278(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam2)
	{
		if (!bParam4)
		{
		}
		Global_2359296[func_184() /*5559*/].f_675.f_1275 = unk_0x48352343BC5A41AE();
	}
	if (!bParam4)
	{
	}
	iVar1 = func_297(1411, iParam0);
	func_66(iVar1, uParam1->f_138, iParam3);
	if (!bParam4)
	{
	}
	iVar1 = func_297(1412, iParam0);
	func_66(iVar1, uParam1->f_139, iParam3);
	if (!bParam4)
	{
	}
	if (func_296(iParam0))
	{
	}
	else
	{
		iVar1 = func_297(1413, iParam0);
		func_66(iVar1, *uParam1, iParam3);
		if (!bParam4)
		{
		}
		iVar0 = 0;
		while (iVar0 < 49)
		{
			if (iVar0 < 25)
			{
				iVar1 = (func_297(1414, iParam0) + iVar0);
				func_66(iVar1, uParam1->f_9[iVar0], iParam3);
			}
			else
			{
				iVar1 = (func_295(iParam0) + (iVar0 - 25));
				func_66(iVar1, uParam1->f_9[iVar0], iParam3);
			}
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 2)
		{
			iVar1 = (func_297(1439, iParam0) + iVar0);
			func_66(iVar1, uParam1->f_59[iVar0], iParam3);
			iVar0++;
		}
	}
	iVar1 = func_297(1441, iParam0);
	func_66(iVar1, uParam1->f_62, iParam3);
	if (!bParam4)
	{
	}
	iVar1 = func_297(1442, iParam0);
	func_66(iVar1, uParam1->f_63, iParam3);
	if (!bParam4)
	{
	}
	iVar1 = func_297(1443, iParam0);
	func_66(iVar1, uParam1->f_64, iParam3);
	if (!bParam4)
	{
	}
	if (func_296(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_297(1444, iParam0);
		func_66(iVar1, uParam1->f_65, iParam3);
		if (!bParam4)
		{
		}
	}
	iVar1 = func_297(1445, iParam0);
	func_66(iVar1, uParam1->f_67, iParam3);
	if (func_296(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_297(1446, iParam0);
		func_66(iVar1, uParam1->f_68, iParam3);
	}
	iVar1 = func_297(1447, iParam0);
	func_66(iVar1, uParam1->f_69, iParam3);
	if (!bParam4)
	{
	}
	iVar1 = func_297(1448, iParam0);
	func_66(iVar1, uParam1->f_70, -1);
	iVar1 = func_297(1449, iParam0);
	func_66(iVar1, uParam1->f_71, iParam3);
	iVar1 = func_297(1450, iParam0);
	func_66(iVar1, uParam1->f_72, iParam3);
	iVar1 = func_297(1451, iParam0);
	func_66(iVar1, uParam1->f_73, iParam3);
	iVar1 = func_297(1452, iParam0);
	func_66(iVar1, uParam1->f_5, iParam3);
	iVar1 = func_297(1453, iParam0);
	func_66(iVar1, uParam1->f_6, iParam3);
	iVar1 = func_297(1454, iParam0);
	func_66(iVar1, uParam1->f_7, iParam3);
	iVar1 = func_297(1455, iParam0);
	func_66(iVar1, uParam1->f_8, iParam3);
	if (func_296(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_297(3880, iParam0);
		func_66(iVar1, uParam1->f_74, iParam3);
		iVar1 = func_297(3881, iParam0);
		func_66(iVar1, uParam1->f_75, iParam3);
		iVar1 = func_297(3882, iParam0);
		func_66(iVar1, uParam1->f_76, iParam3);
		iVar1 = func_294(iParam0);
		func_66(iVar1, uParam1->f_97, iParam3);
		iVar1 = func_293(iParam0);
		func_66(iVar1, uParam1->f_99, iParam3);
		iVar1 = func_292(iParam0);
		func_66(iVar1, uParam1->f_98, iParam3);
		iVar1 = func_281(iParam0, 0);
		func_66(iVar1, uParam1->f_102, iParam3);
	}
	iVar2 = Global_2359296[func_184() /*5559*/].f_675.f_1275;
	if (bParam5)
	{
		iVar2 = unk_0x48352343BC5A41AE();
	}
	func_64(1629, iVar2, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_64(func_280(1, iParam0), uParam1->f_103, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_64(func_280(2, iParam0), uParam1->f_104, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_64(func_280(3, iParam0), uParam1->f_105, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_64(func_280(4, iParam0), uParam1->f_66, iParam3, 1, 0);
	func_64(func_280(5, iParam0), uParam1->f_77, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_64(func_280(7, iParam0), uParam1->f_140, iParam3, 1, 0);
	if (!func_296(iParam0))
	{
		if (!unk_0xACC32B78196FBC2A(&(uParam1->f_1)))
		{
			func_279(func_280(6, iParam0), &(uParam1->f_1), iParam3);
			if (!bParam4)
			{
			}
		}
		else if (!bParam4)
		{
		}
	}
	if (!bParam4)
	{
	}
	return 1;
}

void func_279(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = Global_2821895[iParam0 /*3*/][func_22(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCE9B2B59B53A67C6(iVar0, uParam1);
	}
}

int func_280(int iParam0, int iParam1)
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
				
				case 317:
					return 9920;
				
				case 318:
					return 9927;
				
				case 319:
					return 9934;
				
				case 320:
					return 9941;
				
				case 321:
					return 9948;
				
				case 322:
					return 9955;
				
				case 323:
					return 9962;
				
				case 324:
					return 9969;
				
				case 325:
					return 9976;
				
				case 326:
					return 9983;
				
				case 327:
					return 9990;
				
				case 328:
					return 9997;
				
				case 329:
					return 10004;
				
				case 330:
					return 10011;
				
				case 331:
					return 10018;
				
				case 332:
					return 10025;
				
				case 333:
					return 10032;
				
				case 334:
					return 10039;
				
				case 335:
					return 10046;
				
				case 336:
					return 10053;
				
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
				
				case 317:
					return 9921;
				
				case 318:
					return 9928;
				
				case 319:
					return 9935;
				
				case 320:
					return 9942;
				
				case 321:
					return 9949;
				
				case 322:
					return 9956;
				
				case 323:
					return 9963;
				
				case 324:
					return 9970;
				
				case 325:
					return 9977;
				
				case 326:
					return 9984;
				
				case 327:
					return 9991;
				
				case 328:
					return 9998;
				
				case 329:
					return 10005;
				
				case 330:
					return 10012;
				
				case 331:
					return 10019;
				
				case 332:
					return 10026;
				
				case 333:
					return 10033;
				
				case 334:
					return 10040;
				
				case 335:
					return 10047;
				
				case 336:
					return 10054;
				
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
				
				case 317:
					return 9922;
				
				case 318:
					return 9929;
				
				case 319:
					return 9936;
				
				case 320:
					return 9943;
				
				case 321:
					return 9950;
				
				case 322:
					return 9957;
				
				case 323:
					return 9964;
				
				case 324:
					return 9971;
				
				case 325:
					return 9978;
				
				case 326:
					return 9985;
				
				case 327:
					return 9992;
				
				case 328:
					return 9999;
				
				case 329:
					return 10006;
				
				case 330:
					return 10013;
				
				case 331:
					return 10020;
				
				case 332:
					return 10027;
				
				case 333:
					return 10034;
				
				case 334:
					return 10041;
				
				case 335:
					return 10048;
				
				case 336:
					return 10055;
				
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
				
				case 317:
					return 9923;
				
				case 318:
					return 9930;
				
				case 319:
					return 9937;
				
				case 320:
					return 9944;
				
				case 321:
					return 9951;
				
				case 322:
					return 9958;
				
				case 323:
					return 9965;
				
				case 324:
					return 9972;
				
				case 325:
					return 9979;
				
				case 326:
					return 9986;
				
				case 327:
					return 9993;
				
				case 328:
					return 10000;
				
				case 329:
					return 10007;
				
				case 330:
					return 10014;
				
				case 331:
					return 10021;
				
				case 332:
					return 10028;
				
				case 333:
					return 10035;
				
				case 334:
					return 10042;
				
				case 335:
					return 10049;
				
				case 336:
					return 10056;
				
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
				
				case 317:
					return 9924;
				
				case 318:
					return 9931;
				
				case 319:
					return 9938;
				
				case 320:
					return 9945;
				
				case 321:
					return 9952;
				
				case 322:
					return 9959;
				
				case 323:
					return 9966;
				
				case 324:
					return 9973;
				
				case 325:
					return 9980;
				
				case 326:
					return 9987;
				
				case 327:
					return 9994;
				
				case 328:
					return 10001;
				
				case 329:
					return 10008;
				
				case 330:
					return 10015;
				
				case 331:
					return 10022;
				
				case 332:
					return 10029;
				
				case 333:
					return 10036;
				
				case 334:
					return 10043;
				
				case 335:
					return 10050;
				
				case 336:
					return 10057;
				
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
				
				case 317:
					return 9926;
				
				case 318:
					return 9933;
				
				case 319:
					return 9940;
				
				case 320:
					return 9947;
				
				case 321:
					return 9954;
				
				case 322:
					return 9961;
				
				case 323:
					return 9968;
				
				case 324:
					return 9975;
				
				case 325:
					return 9982;
				
				case 326:
					return 9989;
				
				case 327:
					return 9996;
				
				case 328:
					return 10003;
				
				case 329:
					return 10010;
				
				case 330:
					return 10017;
				
				case 331:
					return 10024;
				
				case 332:
					return 10031;
				
				case 333:
					return 10038;
				
				case 334:
					return 10045;
				
				case 335:
					return 10052;
				
				case 336:
					return 10059;
				
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
				
				case 317:
					return 9925;
				
				case 318:
					return 9932;
				
				case 319:
					return 9939;
				
				case 320:
					return 9946;
				
				case 321:
					return 9953;
				
				case 322:
					return 9960;
				
				case 323:
					return 9967;
				
				case 324:
					return 9974;
				
				case 325:
					return 9981;
				
				case 326:
					return 9988;
				
				case 327:
					return 9995;
				
				case 328:
					return 10002;
				
				case 329:
					return 10009;
				
				case 330:
					return 10016;
				
				case 331:
					return 10023;
				
				case 332:
					return 10030;
				
				case 333:
					return 10037;
				
				case 334:
					return 10044;
				
				case 335:
					return 10051;
				
				case 336:
					return 10058;
				
				default:
			}
			break;
	}
	return 1630;
}

int func_281(int iParam0, bool bParam1)
{
	if (iParam0 <= 38)
	{
		if (iParam0 < 10)
		{
			if (bParam1)
			{
				return (4212 + iParam0);
			}
			else
			{
				return (31488 + iParam0);
			}
		}
		else if (iParam0 > 12 && iParam0 < 23)
		{
			if (bParam1)
			{
				return ((4212 + iParam0) - 3);
			}
			else
			{
				return ((31488 + iParam0) - 3);
			}
		}
		else if (iParam0 > 25 && iParam0 < 36)
		{
			if (bParam1)
			{
				return ((4212 + iParam0) - 6);
			}
			else
			{
				return ((31488 + iParam0) - 6);
			}
		}
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return ((6015 + iParam0) - 39);
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7252 + iParam0) - 52);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9310 + iParam0) - 65);
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return ((30134 + iParam0) - 281);
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (30134 + ((iParam0 - 281) - 3));
	}
	else if (iParam0 < func_282(11))
	{
		return ((15084 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((15084 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15361;
	}
	else if (iParam0 < 184)
	{
		return ((18036 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18953 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21942 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24535 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26319 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28039 + iParam0) - 271);
	}
	else if (iParam0 > 306 && iParam0 < 317)
	{
		return ((31488 + 30 + iParam0) - 307);
	}
	else if (iParam0 >= 317 && iParam0 < 337)
	{
		return ((34036 + iParam0) - 317);
	}
	return 0;
}

int func_282(int iParam0)
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
		
		case 26:
			return 337;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_291(iParam0);
		return func_290(iVar0);
	}
	return (func_283(iParam0, -1, 1) * iParam0 + 1);
}

int func_283(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_286(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_285(iParam1))
			{
				return 0;
			}
			else if (func_284(iParam1, -1))
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
			else if (iParam1 == 128)
			{
				return 20;
			}
			else if (iParam1 <= 128 && iParam1 > 0)
			{
				if (Global_1312124[iParam1 /*1951*/].f_33 == 2)
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
				else if (Global_1312124[iParam1 /*1951*/].f_33 == 6)
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
				else if (Global_1312124[iParam1 /*1951*/].f_33 == 10)
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
		
		case 26:
			return 20;
			break;
	}
	return 0;
}

int func_284(int iParam0, int iParam1)
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

int func_285(int iParam0)
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

int func_286(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_287(unk_0x9E2D6C50374FCFA9(), 0);
	}
	if (bParam1)
	{
		if (func_287(unk_0x9E2D6C50374FCFA9(), 0))
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

bool func_287(int iParam0, bool bParam1)
{
	if (Global_1852964 != func_8())
	{
		if (!func_289(Global_1852964))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0x9E2D6C50374FCFA9() != Global_1852964)
			{
				if (unk_0xE2D0C323A1AE5D85(Global_2689156[Global_1852964 /*453*/].f_199, 24) || func_288(Global_1852964))
				{
					return 1;
				}
			}
		}
	}
	return unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_199, 24);
}

int func_288(int iParam0)
{
	if (iParam0 != func_8())
	{
		return unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_199, 9);
	}
	return 0;
}

int func_289(int iParam0)
{
	if (iParam0 != func_8())
	{
		return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_361, 2);
	}
	return 0;
}

int func_290(int iParam0)
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

int func_291(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 4)
	{
		return iParam0;
	}
	return -1;
}

int func_292(int iParam0)
{
	if (iParam0 < 10)
	{
		return (7263 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (7263 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (7263 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (7263 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7263 + iParam0) - 12);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9330 + iParam0) - 65);
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return ((30154 + iParam0) - 281);
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (30154 + ((iParam0 - 281) - 3));
	}
	else if (iParam0 < func_282(11))
	{
		return ((15154 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((15154 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15362;
	}
	else if (iParam0 < 184)
	{
		return ((18061 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18963 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21979 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24565 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26329 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28049 + iParam0) - 271);
	}
	else if (iParam0 > 306 && iParam0 < 317)
	{
		return ((31528 + iParam0) - 307);
	}
	else if (iParam0 >= 317 && iParam0 < 337)
	{
		return ((34056 + iParam0) - 317);
	}
	return 0;
}

int func_293(int iParam0)
{
	if (iParam0 < 10)
	{
		return (5975 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (5975 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (5975 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5975 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7242 + iParam0) - 52);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9290 + iParam0) - 65);
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return ((30114 + iParam0) - 281);
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (30114 + ((iParam0 - 281) - 3));
	}
	else if (iParam0 < func_282(11))
	{
		return ((15014 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((15014 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15360;
	}
	else if (iParam0 < 184)
	{
		return ((18011 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18943 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21905 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24505 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26309 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28029 + iParam0) - 271);
	}
	else if (iParam0 > 306 && iParam0 < 317)
	{
		return ((31478 + iParam0) - 307);
	}
	else if (iParam0 >= 317 && iParam0 < 337)
	{
		return ((34016 + iParam0) - 317);
	}
	return 0;
}

int func_294(int iParam0)
{
	if (iParam0 < 10)
	{
		return (5935 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (5935 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (5935 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5935 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7232 + iParam0) - 52);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9270 + iParam0) - 65);
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return ((30094 + iParam0) - 281);
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (30094 + ((iParam0 - 281) - 3));
	}
	else if (iParam0 < func_282(11))
	{
		return ((14944 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((14944 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15359;
	}
	else if (iParam0 < 184)
	{
		return ((17986 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18933 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21868 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24475 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26299 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28019 + iParam0) - 271);
	}
	else if (iParam0 > 306 && iParam0 < 317)
	{
		return ((31468 + iParam0) - 307);
	}
	else if (iParam0 >= 317 && iParam0 < 337)
	{
		return ((33996 + iParam0) - 317);
	}
	return 0;
}

int func_295(int iParam0)
{
	int iVar0;
	
	iVar0 = (4424 - 4400);
	if (iParam0 < 10)
	{
		return (4400 + (iParam0 * iVar0));
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (4640 + ((iParam0 - 13) * iVar0));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (4880 + ((iParam0 - 26) * iVar0));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5120 + ((iParam0 - 39) * iVar0));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return (6414 + ((iParam0 - 52) * iVar0));
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return (7682 + ((iParam0 - 65) * iVar0));
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return (29534 + ((iParam0 - 281) * iVar0));
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (29774 + ((iParam0 - 294) * iVar0));
	}
	else if (iParam0 < func_282(11))
	{
		return (9554 + ((iParam0 - 88) * iVar0));
	}
	else if (iParam0 <= 157)
	{
		return (9554 + ((iParam0 - 88) * iVar0));
	}
	else if (iParam0 == 158)
	{
		return 15282;
	}
	else if (iParam0 < 184)
	{
		return (16061 + ((iParam0 - 159) * iVar0));
	}
	else if (iParam0 < 194)
	{
		return (18163 + ((iParam0 - 184) * iVar0));
	}
	else if (iParam0 < 231)
	{
		return (19019 + ((iParam0 - 194) * iVar0));
	}
	else if (iParam0 < 261)
	{
		return (22195 + ((iParam0 - 231) * iVar0));
	}
	else if (iParam0 < 271)
	{
		return (25539 + ((iParam0 - 261) * iVar0));
	}
	else if (iParam0 < 281)
	{
		return (27259 + ((iParam0 - 271) * iVar0));
	}
	else if (iParam0 > 306 && iParam0 < 317)
	{
		return (31188 + ((iParam0 - 307) * iVar0));
	}
	else if (iParam0 >= 317 && iParam0 < 337)
	{
		return (33436 + ((iParam0 - 317) * iVar0));
	}
	return 0;
}

int func_296(int iParam0)
{
	switch (iParam0)
	{
		case 10:
		case 11:
		case 12:
		case 23:
		case 24:
		case 25:
		case 36:
		case 37:
		case 38:
		case 49:
		case 50:
		case 51:
		case 62:
		case 63:
		case 64:
		case 85:
		case 86:
		case 87:
		case 291:
		case 292:
		case 293:
		case 304:
		case 305:
		case 306:
			return 1;
			break;
	}
	return 0;
}

int func_297(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((iParam0 == 3880 || iParam0 == 3881) || iParam0 == 3882)
	{
		if (iParam1 < 10)
		{
			iVar0 = (iParam0 + iParam1 * 3);
		}
		else if (iParam1 < 23)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (3910 + (iParam1 - 13) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (3911 + (iParam1 - 13) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (3912 + (iParam1 - 13) * 3);
			}
		}
		else if (iParam1 < 36)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (3946 + (iParam1 - 26) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (3947 + (iParam1 - 26) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (3948 + (iParam1 - 26) * 3);
			}
		}
		else if (iParam1 < 49)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (5855 + (iParam1 - 39) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (5856 + (iParam1 - 39) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (5857 + (iParam1 - 39) * 3);
			}
		}
		else if (iParam1 < 62)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (7149 + (iParam1 - 52) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (7150 + (iParam1 - 52) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (7151 + (iParam1 - 52) * 3);
			}
		}
		else if (iParam1 < 85)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (9107 + (iParam1 - 65) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (9108 + (iParam1 - 65) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (9109 + (iParam1 - 65) * 3);
			}
		}
		else if (iParam1 < func_282(11))
		{
			if (iParam0 == 3880)
			{
				iVar0 = (14384 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (14385 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (14386 + (iParam1 - 88) * 3);
			}
		}
		else if (iParam1 <= 157)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (14384 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (14385 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (14386 + (iParam1 - 88) * 3);
			}
		}
		else if (iParam1 == 158)
		{
			if (iParam0 == 3880)
			{
				iVar0 = 15351;
			}
			else if (iParam0 == 3881)
			{
				iVar0 = 15352;
			}
			else if (iParam0 == 3882)
			{
				iVar0 = 15353;
			}
		}
		else if (iParam1 < 184)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (17786 + (iParam1 - 159) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (17787 + (iParam1 - 159) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (17788 + (iParam1 - 159) * 3);
			}
		}
		else if (iParam1 < 194)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (18853 + (iParam1 - 184) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (18854 + (iParam1 - 184) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (18855 + (iParam1 - 184) * 3);
			}
		}
		else if (iParam1 < 231)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (21572 + (iParam1 - 194) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (21573 + (iParam1 - 194) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (21574 + (iParam1 - 194) * 3);
			}
		}
		else if (iParam1 < 261)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (24265 + (iParam1 - 231) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (24266 + (iParam1 - 231) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (24267 + (iParam1 - 231) * 3);
			}
		}
		else if (iParam1 < 271)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (26229 + (iParam1 - 261) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (26230 + (iParam1 - 261) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (26231 + (iParam1 - 261) * 3);
			}
		}
		else if (iParam1 < 281)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (27949 + (iParam1 - 271) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (27950 + (iParam1 - 271) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (27951 + (iParam1 - 271) * 3);
			}
		}
		else if (iParam1 < 291)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (29474 + (iParam1 - 281) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (29475 + (iParam1 - 281) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (29476 + (iParam1 - 281) * 3);
			}
		}
		else if (iParam1 < 304)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (29504 + (iParam1 - 294) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (29505 + (iParam1 - 294) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (29506 + (iParam1 - 294) * 3);
			}
		}
		else if (iParam1 > 306 && iParam1 < 317)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (31158 + (iParam1 - 307) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (31159 + (iParam1 - 307) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (31160 + (iParam1 - 307) * 3);
			}
		}
		else if (iParam1 >= 317 && iParam1 < 337)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (33376 + (iParam1 - 317) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (33377 + (iParam1 - 317) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (33378 + (iParam1 - 317) * 3);
			}
		}
	}
	else if (iParam1 < 10)
	{
		iVar0 = (iParam0 + (iParam1 * (1456 - 1411)));
	}
	else if (iParam1 >= 10 && iParam1 <= 12)
	{
		iVar0 = ((iParam1 - 10) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 1861;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 1862;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 1863;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 1864;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 1865;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 1866;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 1867;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 1868;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 1869;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 1870;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 1871;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 1872;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 1873;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 1874;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 1875;
		}
	}
	else if (iParam1 < 23)
	{
		iVar0 = (1906 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 13) * (1456 - 1411)));
	}
	else if (iParam1 >= 23 && iParam1 <= 25)
	{
		iVar0 = ((iParam1 - 23) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 2356;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 2357;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 2358;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 2359;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 2360;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 2361;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 2362;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 2363;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 2364;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 2365;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 2366;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 2367;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 2368;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 2369;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 2370;
		}
	}
	else if (iParam1 < 36)
	{
		iVar0 = (2405 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 26) * (1456 - 1411)));
	}
	else if (iParam1 >= 36 && iParam1 <= 38)
	{
		iVar0 = ((iParam1 - 36) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 2855;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 2856;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 2857;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 2858;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 2859;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 2860;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 2861;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 2862;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 2863;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 2864;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 2865;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 2866;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 2867;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 2868;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 2869;
		}
	}
	else if (iParam1 < 49)
	{
		iVar0 = (5360 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 39) * (1456 - 1411)));
	}
	else if (iParam1 >= 49 && iParam1 <= 51)
	{
		iVar0 = ((iParam1 - 49) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 5810;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 5811;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 5812;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 5813;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 5814;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 5815;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 5816;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 5817;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 5818;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 5819;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 5820;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 5821;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 5822;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 5823;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 5824;
		}
	}
	else if (iParam1 < 62)
	{
		iVar0 = (6654 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 52) * (1456 - 1411)));
	}
	else if (iParam1 >= 62 && iParam1 <= 64)
	{
		iVar0 = ((iParam1 - 62) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 7104;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 7105;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 7106;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 7107;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 7108;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 7109;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 7110;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 7111;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 7112;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 7113;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 7114;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 7115;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 7116;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 7117;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 7118;
		}
	}
	else if (iParam1 < 85)
	{
		iVar0 = (8162 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 65) * (1456 - 1411)));
	}
	else if (iParam1 >= 85 && iParam1 <= 87)
	{
		iVar0 = ((iParam1 - 85) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 9062;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 9063;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 9064;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 9065;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 9066;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 9067;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 9068;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 9069;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 9070;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 9071;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 9072;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 9073;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 9074;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 9075;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 9076;
		}
	}
	else if (iParam1 < func_282(11))
	{
		iVar0 = (11234 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - func_282(7)) * (1456 - 1411)));
	}
	else if (iParam1 <= 157)
	{
		iVar0 = (11234 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - func_282(7)) * (1456 - 1411)));
	}
	else if (iParam1 == 158)
	{
		iVar0 = (15306 - 1411);
		iVar0 = (iVar0 + iParam0);
	}
	else if (iParam1 < 184)
	{
		iVar0 = (16661 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 159) * (1456 - 1411)));
	}
	else if (iParam1 < 194)
	{
		iVar0 = (18403 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 184) * (1456 - 1411)));
	}
	else if (iParam1 < 231)
	{
		iVar0 = (19907 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 194) * (1456 - 1411)));
	}
	else if (iParam1 < 261)
	{
		iVar0 = (22915 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 231) * (1456 - 1411)));
	}
	else if (iParam1 < 271)
	{
		iVar0 = (25779 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 261) * (1456 - 1411)));
	}
	else if (iParam1 < 281)
	{
		iVar0 = (27499 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 271) * (1456 - 1411)));
	}
	else if (iParam1 < 291)
	{
		iVar0 = (28484 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 281) * (1456 - 1411)));
	}
	else if (iParam1 >= 291 && iParam1 <= 293)
	{
		iVar0 = ((iParam1 - 291) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 28934;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 28935;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 28936;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 28937;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 28938;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 28939;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 28940;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 28941;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 28942;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 28943;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 28944;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 28945;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 28946;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 28947;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 28948;
		}
	}
	else if (iParam1 < 304)
	{
		iVar0 = (28979 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 294) * (1456 - 1411)));
	}
	else if (iParam1 >= 304 && iParam1 <= 306)
	{
		iVar0 = ((iParam1 - 304) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 29429;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 29430;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 29431;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 29432;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 29433;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 29434;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 29435;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 29436;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 29437;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 29438;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 29439;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 29440;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 29441;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 29442;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 29443;
		}
	}
	else if (iParam1 > 306 && iParam1 < 317)
	{
		iVar0 = (30708 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 307) * (1456 - 1411)));
	}
	else if (iParam1 >= 317 && iParam1 < 337)
	{
		iVar0 = (32476 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 317) * (1456 - 1411)));
	}
	return iVar0;
}

void func_298(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_299())
	{
		iVar0 = Global_2860375[iParam0 /*3*/][func_22(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x41483427EFBC0047(iVar0, iParam1, iParam3);
		}
	}
}

int func_299()
{
	return 1;
	return 0;
}

void func_300(int iParam0)
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		if (unk_0x55A0C756C4A8220C(iParam0, 0))
		{
			if (unk_0x6BD06F4780EAC5DD("MPBitset", 3))
			{
				if (unk_0xF2549FF74D64B720(iParam0, "MPBitset"))
				{
					iVar0 = unk_0xC3B76795ECBDEF41(iParam0, "MPBitset");
				}
				unk_0xCED9E32812D6C7C7(&iVar0, 3);
				unk_0x05B874E9ABFF72B4(iParam0, "MPBitset", iVar0);
			}
		}
	}
}

void func_301(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	int iVar0;
	var uVar1;
	
	if (unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		func_338();
		if (unk_0x03AC3319D1B50189(iParam0) != 0)
		{
			unk_0x3C1BCE3438ECBFC0(iParam0, 0);
		}
		if (bParam5)
		{
			unk_0xCED9E32812D6C7C7(&(Global_1585844[iParam1 /*142*/].f_103), 12);
			unk_0xB0550BC91B0159D6(&(Global_1585844[iParam1 /*142*/].f_103), 15);
			unk_0xB0550BC91B0159D6(&(Global_1585844[iParam1 /*142*/].f_103), 2);
			unk_0xB0550BC91B0159D6(&(Global_1585844[iParam1 /*142*/].f_103), 8);
			unk_0xB0550BC91B0159D6(&(Global_1585844[iParam1 /*142*/].f_103), 9);
			func_336();
			func_335(iParam1, 1);
			Global_1952828 = 1;
		}
		func_305(iParam0, &(Global_1585844[iParam1 /*142*/]), bParam5);
		Global_1585844[iParam1 /*142*/].f_70 = 1;
		if (bParam2)
		{
			unk_0xB0550BC91B0159D6(&(Global_1585844[iParam1 /*142*/].f_103), 1);
			unk_0xB0550BC91B0159D6(&(Global_1585844[iParam1 /*142*/].f_103), 6);
			unk_0xB0550BC91B0159D6(&(Global_1585844[iParam1 /*142*/].f_103), 7);
		}
		if (bParam3)
		{
			unk_0xB0550BC91B0159D6(&(Global_1585844[iParam1 /*142*/].f_103), 0);
		}
		else
		{
			unk_0xCED9E32812D6C7C7(&(Global_1585844[iParam1 /*142*/].f_103), 0);
		}
		if (bParam4)
		{
			func_304(iParam1);
		}
		if (bParam6)
		{
			unk_0xCED9E32812D6C7C7(&(Global_1585844[iParam1 /*142*/].f_103), 15);
			unk_0xCED9E32812D6C7C7(&(Global_1585844[iParam1 /*142*/].f_103), 2);
		}
		if (bParam7)
		{
			switch (iParam10)
			{
				case 0:
					unk_0xCED9E32812D6C7C7(&(Global_1585844[iParam1 /*142*/].f_103), 27);
					break;
				
				case 1:
					unk_0xCED9E32812D6C7C7(&(Global_1585844[iParam1 /*142*/].f_103), 28);
					break;
				}
		}
		if (bParam8)
		{
			unk_0xCED9E32812D6C7C7(&(Global_1585844[iParam1 /*142*/].f_103), 13);
		}
		if (unk_0x6BD06F4780EAC5DD("MPBitset", 3))
		{
			if (unk_0xF2549FF74D64B720(iParam0, "MPBitset"))
			{
				iVar0 = unk_0xC3B76795ECBDEF41(iParam0, "MPBitset");
				if (unk_0xE2D0C323A1AE5D85(iVar0, 3))
				{
					unk_0xCED9E32812D6C7C7(&(Global_1585844[iParam1 /*142*/].f_103), 2);
				}
			}
		}
		if (unk_0x741835E0EF89491D(iParam0) >= 0)
		{
			func_303(&iParam0, &(Global_1585844[iParam1 /*142*/].f_9), &(Global_1585844[iParam1 /*142*/].f_59));
			if (func_302(iParam1, &uVar1))
			{
				if (bParam5 || unk_0x9993EF7FDBCDB632() == iParam0)
				{
					Global_2359296[func_184() /*5559*/].f_587.f_86 = iParam1 + 1;
				}
				unk_0xCED9E32812D6C7C7(&(Global_1585844[iParam1 /*142*/].f_103), 25);
				unk_0xB0550BC91B0159D6(&(Global_1585844[iParam1 /*142*/].f_103), 26);
			}
		}
		Global_2359296[func_184() /*5559*/].f_675.f_1275 = unk_0x48352343BC5A41AE();
		func_278(iParam1, &(Global_1585844[iParam1 /*142*/]), 0, iParam9, 0, 0);
	}
}

bool func_302(int iParam0, var uParam1)
{
	int iVar0;
	
	*uParam1 = -1;
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 <= 9)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if (iParam0 >= 13 && iParam0 <= 22)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if (iParam0 >= 26 && iParam0 <= 35)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if (iParam0 >= 39 && iParam0 <= 48)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if (iParam0 >= 52 && iParam0 <= 61)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if ((iParam0 >= 65 && iParam0 <= 74) || (iParam0 >= 75 && iParam0 <= 84))
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if ((((iParam0 >= 88 && iParam0 <= 107) || (iParam0 >= 108 && iParam0 <= 127)) || (iParam0 >= 128 && iParam0 <= 147)) || (iParam0 >= 148 && iParam0 <= 155))
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0 += 20;
	if (iParam0 >= 179 && iParam0 <= 185)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0++;
	if (iParam0 >= 191 && iParam0 <= 221)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0++;
	if (iParam0 >= 227 && iParam0 <= 235)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	if (iParam0 >= 237 && iParam0 <= 245)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	if (iParam0 >= 247 && iParam0 <= 255)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	if (iParam0 >= 258 && iParam0 <= 267)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	if (*uParam1 >= 212 || *uParam1 == -1)
	{
		*uParam1 = 0;
		return 0;
	}
	return *uParam1 != -1;
}

int func_303(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x55A0C756C4A8220C(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x03AC3319D1B50189(*iParam0) == 0)
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
			if (unk_0x75B2C853CB0B3047(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (unk_0x75B2C853CB0B3047(*iParam0, iVar1))
			{
				switch (unk_0xDB29312237512D99(*iParam0))
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
			(*uParam1)[iVar0] = unk_0x0DD0BC46C4CFD6AD(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xCCEE7D38FC5D9FD6(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xCCEE7D38FC5D9FD6(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_304(int iParam0)
{
	Global_2359296[func_184() /*5559*/].f_675.f_2 = iParam0;
}

void func_305(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	func_334(uParam1);
	if (bParam2)
	{
		uParam1->f_103 = 0;
		uParam1->f_105 = 0;
		StringCopy(&(uParam1->f_106), "", 64);
		StringCopy(&(uParam1->f_122), "", 64);
		uParam1->f_140 = 0;
		uParam1->f_138 = -1;
		uParam1->f_139 = -1;
		uParam1->f_141 = unk_0x48352343BC5A41AE();
		if (Global_262145.f_10880)
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_103), 22);
		}
	}
	if (func_333(iParam0, 0))
	{
		func_332();
		unk_0xCED9E32812D6C7C7(&(uParam1->f_103), 3);
	}
	func_308(iParam0, uParam1);
	if (unk_0x6BD06F4780EAC5DD("MPBitset", 3))
	{
		if (unk_0xF2549FF74D64B720(iParam0, "MPBitset"))
		{
			iVar0 = unk_0xC3B76795ECBDEF41(iParam0, "MPBitset");
			if (unk_0xE2D0C323A1AE5D85(iVar0, 3))
			{
				unk_0xCED9E32812D6C7C7(&(uParam1->f_103), 2);
			}
		}
	}
	if (unk_0xE2D0C323A1AE5D85(uParam1->f_103, 8))
	{
		if (!func_306(iParam0))
		{
		}
	}
	else if (func_306(iParam0))
	{
		unk_0xCED9E32812D6C7C7(&(uParam1->f_103), 8);
		unk_0xCED9E32812D6C7C7(&(uParam1->f_103), 9);
	}
}

int func_306(int iParam0)
{
	if (unk_0xE5965CDF24F93A9F(iParam0) && unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		if (unk_0xA763B3F87DA3C316(iParam0, 0) || func_307(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_307(int iParam0)
{
	int iVar0;
	
	if (unk_0x6BD06F4780EAC5DD("MPBitset", 3))
	{
		if (unk_0xE5965CDF24F93A9F(iParam0) && unk_0x55A0C756C4A8220C(iParam0, 0))
		{
			if (unk_0xF2549FF74D64B720(iParam0, "MPBitset"))
			{
				iVar0 = unk_0xC3B76795ECBDEF41(iParam0, "MPBitset");
				return unk_0xE2D0C323A1AE5D85(iVar0, 16);
			}
		}
	}
	return 0;
}

void func_308(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(iParam0) && unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		func_328(iParam0, uParam1);
		unk_0xB0550BC91B0159D6(&(uParam1->f_95), 0);
		if (unk_0xE2D0C323A1AE5D85(uParam1->f_77, 11))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_95), 0);
		}
		if (func_306(iParam0))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_95), 0);
		}
		if (func_326(iParam0))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_95), 0);
		}
		if (unk_0xC8E55AEB1E2B047F(iParam0) && !unk_0xBB34CA7BCE1AF9A1(iParam0))
		{
			uParam1->f_102 = 2;
		}
		else if (!unk_0xC8E55AEB1E2B047F(iParam0))
		{
			uParam1->f_102 = 1;
		}
		else if (unk_0xBB34CA7BCE1AF9A1(iParam0))
		{
			uParam1->f_102 = 3;
		}
		if (uParam1->f_70 == 0)
		{
			uParam1->f_70 = 1;
		}
		uParam1->f_78 = unk_0x125E8813EDFAB26F(iParam0);
		uParam1->f_79 = unk_0x4841AFE1A236E4E9(iParam0);
		uParam1->f_80 = unk_0x09566E2739F599FA(iParam0);
		unk_0x1E4D0D5DE3802BC2(iParam0, &(uParam1->f_97));
		unk_0x04CE0BF11E7D9DE4(iParam0, &(uParam1->f_99));
		uParam1->f_98 = unk_0xCA76A695AC878584(iParam0);
		iVar0 = func_316(iParam0, &(uParam1->f_94), &(uParam1->f_96));
		unk_0xB0550BC91B0159D6(&(uParam1->f_95), 3);
		if (!iVar0 == func_8())
		{
			unk_0x460FFCEC183339C6(iVar0, &(uParam1->f_81), 13);
			unk_0xCED9E32812D6C7C7(&(uParam1->f_95), 1);
		}
		else
		{
			unk_0xB0550BC91B0159D6(&(uParam1->f_95), 1);
		}
		if (iVar0 == unk_0x9E2D6C50374FCFA9())
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_95), 2);
			if (uParam1->f_94 == 1)
			{
				if (func_315(iParam0))
				{
					unk_0xCED9E32812D6C7C7(&(uParam1->f_95), 3);
				}
			}
		}
		else
		{
			unk_0xB0550BC91B0159D6(&(uParam1->f_95), 2);
		}
		if (unk_0x7010991FDA59D3F2(iParam0, joaat("deathbike2")))
		{
			uParam1->f_99 = func_309(func_312(uParam1->f_74, uParam1->f_75, uParam1->f_76));
		}
	}
}

int func_309(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_311(iParam0);
	func_310(iVar1, &iVar0);
	return iVar0;
}

bool func_310(int iParam0, int iParam1)
{
	*iParam1 = -1;
	switch (iParam0)
	{
		case 0:
			*iParam1 = 4;
			break;
		
		case 1:
			*iParam1 = 5;
			break;
		
		case 2:
			*iParam1 = 6;
			break;
		
		case 3:
			*iParam1 = 7;
			break;
		
		case 4:
			*iParam1 = 111;
			break;
		
		case 5:
			*iParam1 = 112;
			break;
		
		case 6:
			*iParam1 = 107;
			break;
		
		case 7:
			*iParam1 = 104;
			break;
		
		case 8:
			*iParam1 = 98;
			break;
		
		case 9:
			*iParam1 = 100;
			break;
		
		case 10:
			*iParam1 = 102;
			break;
		
		case 11:
			*iParam1 = 99;
			break;
		
		case 12:
			*iParam1 = 105;
			break;
		
		case 13:
			*iParam1 = 106;
			break;
		
		case 14:
			*iParam1 = 37;
			break;
		
		case 15:
			*iParam1 = 90;
			break;
		
		case 16:
			*iParam1 = 88;
			break;
		
		case 17:
			*iParam1 = 89;
			break;
		
		case 18:
			*iParam1 = 91;
			break;
		
		case 19:
			*iParam1 = 38;
			break;
		
		case 20:
			*iParam1 = 138;
			break;
		
		case 21:
			*iParam1 = 36;
			break;
		
		case 22:
			*iParam1 = 27;
			break;
		
		case 23:
			*iParam1 = 28;
			break;
		
		case 24:
			*iParam1 = 29;
			break;
		
		case 25:
			*iParam1 = 150;
			break;
		
		case 26:
			*iParam1 = 30;
			break;
		
		case 27:
			*iParam1 = 31;
			break;
		
		case 28:
			*iParam1 = 32;
			break;
		
		case 29:
			*iParam1 = 35;
			break;
		
		case 30:
			*iParam1 = 135;
			break;
		
		case 31:
			*iParam1 = 137;
			break;
		
		case 32:
			*iParam1 = 136;
			break;
		
		case 33:
			*iParam1 = 71;
			break;
		
		case 34:
			*iParam1 = 145;
			break;
		
		case 35:
			*iParam1 = 63;
			break;
		
		case 36:
			*iParam1 = 64;
			break;
		
		case 37:
			*iParam1 = 65;
			break;
		
		case 38:
			*iParam1 = 66;
			break;
		
		case 39:
			*iParam1 = 67;
			break;
		
		case 40:
			*iParam1 = 68;
			break;
		
		case 41:
			*iParam1 = 69;
			break;
		
		case 42:
			*iParam1 = 73;
			break;
		
		case 43:
			*iParam1 = 70;
			break;
		
		case 44:
			*iParam1 = 74;
			break;
		
		case 45:
			*iParam1 = 51;
			break;
		
		case 46:
			*iParam1 = 53;
			break;
		
		case 47:
			*iParam1 = 54;
			break;
		
		case 48:
			*iParam1 = 92;
			break;
	}
	return *iParam1 != -1;
}

int func_311(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 36;
		
		case 2:
			return 35;
		
		case 3:
			return 46;
		
		case 4:
			return 48;
		
		case 5:
			return 16;
		
		case 6:
			return 14;
		
		case 7:
			return 19;
		
		case 8:
			return 22;
		
		case 9:
			return 31;
		
		case 10:
			return 30;
		
		case 11:
			return 33;
		
		case 12:
			return 34;
		
		default:
	}
	return 0;
}

int func_312(int iParam0, int iParam1, int iParam2)
{
	if ((iParam0 == 222 && iParam1 == 222) && iParam2 == 255)
	{
		return 0;
	}
	if ((iParam0 == 2 && iParam1 == 21) && iParam2 == 255)
	{
		return 1;
	}
	if ((iParam0 == 3 && iParam1 == 83) && iParam2 == 255)
	{
		return 2;
	}
	if ((iParam0 == 0 && iParam1 == 255) && iParam2 == 140)
	{
		return 3;
	}
	if ((iParam0 == 94 && iParam1 == 255) && iParam2 == 1)
	{
		return 4;
	}
	if ((iParam0 == 255 && iParam1 == 255) && iParam2 == 0)
	{
		return 5;
	}
	if ((iParam0 == 255 && iParam1 == 150) && iParam2 == 5)
	{
		return 6;
	}
	if ((iParam0 == 255 && iParam1 == 62) && iParam2 == 0)
	{
		return 7;
	}
	if ((iParam0 == 255 && iParam1 == 1) && iParam2 == 1)
	{
		return 8;
	}
	if ((iParam0 == 255 && iParam1 == 50) && iParam2 == 100)
	{
		return 9;
	}
	if ((iParam0 == 255 && iParam1 == 5) && iParam2 == 190)
	{
		return 10;
	}
	if ((iParam0 == 35 && iParam1 == 1) && iParam2 == 255)
	{
		return 11;
	}
	if ((iParam0 == 15 && iParam1 == 3) && iParam2 == 255)
	{
		return 12;
	}
	if ((unk_0x9315DBF7D972F07A() && func_313()) && Global_1576202)
	{
		if ((iParam0 == Global_1576203 && iParam1 == Global_1576204) && iParam2 == Global_1576205)
		{
			return 13;
		}
	}
	return 0;
}

int func_313()
{
	struct<13> Var0;
	
	if (unk_0xC65B603E7942D0DB())
	{
		if ((unk_0x20E4972CBF3DBE1B() && unk_0xAF5DBE95205A49D1()) && unk_0xCA8CDFE6F0F62C7F())
		{
			Var0 = { func_314() };
			if (unk_0xF453DE81BDFDAE6F() && unk_0x8C992447292D600F(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_314()
{
	struct<13> Var0;
	
	unk_0x9EDEC39EE142C8D5(&Var0, 13);
	return Var0;
}

int func_315(int iParam0)
{
	if (Global_2810287.f_298 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_316(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(iParam0) && unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		if (func_325(iParam0, 1))
		{
			*uParam1 = 1;
			if (unk_0x6BD06F4780EAC5DD("PV_Slot", 3))
			{
				if (unk_0xF2549FF74D64B720(iParam0, "PV_Slot"))
				{
					*uParam2 = unk_0xC3B76795ECBDEF41(iParam0, "PV_Slot");
				}
			}
			return func_324(iParam0);
		}
		else if (func_323(iParam0, 1))
		{
			return func_322(iParam0, 1, 0);
		}
		else if (func_321(iParam0, 1))
		{
			return func_320(iParam0, 1, 0);
		}
		else if (func_319(iParam0, 1))
		{
			*uParam1 = 2;
			return func_317(iParam0);
		}
		else if (!unk_0x7158135695FAE89D(iParam0, -1, 0))
		{
			iVar0 = unk_0xAB793EA186AB8DAA(iParam0, -1, 0);
			if (unk_0xE5965CDF24F93A9F(iVar0))
			{
				if (unk_0x65FAB09725E2FE75(iVar0))
				{
					*uParam1 = 3;
					return unk_0xFF65CDB0EB7ACE71(iVar0);
				}
			}
		}
	}
	*uParam1 = 4;
	return unk_0x9E2D6C50374FCFA9();
}

int func_317(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0xC3B76795ECBDEF41(iParam0, "Veh_Modded_By_Player");
	return func_318(iVar0, 0, 1, 0);
}

int func_318(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (bParam2)
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			iVar0 = unk_0xA1087A6350CD9244(iVar1);
			if (func_6(iVar0, 0, 1) || (iParam1 && unk_0x2AAF56A20AF61A64(iVar0)))
			{
				if (iParam0 == unk_0x4AE7F6D227ED332C(iVar0))
				{
					return iVar0;
				}
			}
			iVar1++;
		}
	}
	else if (func_6(iParam3, 0, 1) || (iParam1 && unk_0x2AAF56A20AF61A64(iParam3)))
	{
		if (iParam0 == unk_0x4AE7F6D227ED332C(iParam3))
		{
			return iParam3;
		}
	}
	return func_8();
}

int func_319(int iParam0, bool bParam1)
{
	if (Global_77852)
	{
		if (unk_0xE5965CDF24F93A9F(iParam0) && (!bParam1 || unk_0x55A0C756C4A8220C(iParam0, 0)))
		{
			if (unk_0xF2549FF74D64B720(iParam0, "Veh_Modded_By_Player"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_320(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (!func_321(iParam0, 1))
	{
		return func_8();
	}
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		iVar0 = unk_0xC3B76795ECBDEF41(iParam0, "Player_Hacker_Truck");
		return func_318(iVar0, 0, bParam1, iParam2);
	}
	return func_8();
}

int func_321(int iParam0, bool bParam1)
{
	if (Global_77852)
	{
		if (unk_0xE5965CDF24F93A9F(iParam0) && (!bParam1 || unk_0x55A0C756C4A8220C(iParam0, 0)))
		{
			if (unk_0xF2549FF74D64B720(iParam0, "Player_Hacker_Truck"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_322(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (!func_323(iParam0, 1))
	{
		return func_8();
	}
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		iVar0 = unk_0xC3B76795ECBDEF41(iParam0, "Player_Truck");
		return func_318(iVar0, 0, bParam1, iParam2);
	}
	return func_8();
}

int func_323(int iParam0, bool bParam1)
{
	if (Global_77852)
	{
		if (unk_0xE5965CDF24F93A9F(iParam0) && (!bParam1 || unk_0x55A0C756C4A8220C(iParam0, 0)))
		{
			if (unk_0xF2549FF74D64B720(iParam0, "Player_Truck"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_324(int iParam0)
{
	int iVar0;
	
	if (!func_325(iParam0, 1))
	{
		return func_8();
	}
	iVar0 = unk_0xC3B76795ECBDEF41(iParam0, "Player_Vehicle");
	return func_318(iVar0, 0, 1, 0);
}

int func_325(int iParam0, bool bParam1)
{
	if (Global_77852)
	{
		if (unk_0xE5965CDF24F93A9F(iParam0) && (!bParam1 || unk_0x55A0C756C4A8220C(iParam0, 0)))
		{
			if (unk_0xF2549FF74D64B720(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_326(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		iVar0 = unk_0x596E9EC72D8DEE73(iParam0, 0);
	}
	if (iVar0 == 1 || iVar0 == 2)
	{
		if (iVar0 == 1)
		{
			if (unk_0x9315DBF7D972F07A())
			{
				iVar1 = unk_0x0A89FDFA763DCAED();
			}
			else
			{
				iVar1 = unk_0x320D1840B6DAA1CC();
			}
			iVar2 = unk_0x07141611FD632B59(unk_0x780A854E3A976A66(iVar1, Global_1577899));
			iVar3 = 20000;
			if (Global_1836580)
			{
				iVar3 = 2000;
			}
			if (iVar2 > iVar3)
			{
				unk_0xE08352579C33866C(iParam0);
				func_327(iParam0);
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_327(int iParam0)
{
	int iVar0;
	
	if (unk_0x6BD06F4780EAC5DD("MPBitset", 3))
	{
		if (unk_0xE5965CDF24F93A9F(iParam0) && unk_0x55A0C756C4A8220C(iParam0, 0))
		{
			if (unk_0xF2549FF74D64B720(iParam0, "MPBitset"))
			{
				iVar0 = unk_0xC3B76795ECBDEF41(iParam0, "MPBitset");
			}
		}
	}
	if (!unk_0xE2D0C323A1AE5D85(iVar0, 16))
	{
		unk_0xCED9E32812D6C7C7(&iVar0, 16);
		unk_0x05B874E9ABFF72B4(iParam0, "MPBitset", iVar0);
	}
}

void func_328(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		func_331(uParam1);
		uParam1->f_66 = unk_0x15CAA6D7B11F1A7C(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x80D16DB58890B7BC(iParam0), 16);
		*uParam1 = unk_0xC264F708491D88D7(iParam0);
		unk_0xDCA20DBA52B32EEC(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x356C37F1AA6EA3AA(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x2EE88EB83AF61B18(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0xF9D204D7598C0239(iParam0);
		uParam1->f_67 = unk_0x3A5087062A6DBAEF(iParam0);
		uParam1->f_69 = unk_0xD9B8AFE0DD1AD635(iParam0);
		uParam1->f_70 = unk_0xA09765D2ADE13CAE(iParam0);
		unk_0xFB61E9A85A29DDA7(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0xEDB21C30F1BAF83A(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x6CA60A8EE52231D2(iParam0, 2))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 28);
		}
		if (unk_0x6CA60A8EE52231D2(iParam0, 3))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 29);
		}
		if (unk_0x6CA60A8EE52231D2(iParam0, 0))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 30);
		}
		if (unk_0x6CA60A8EE52231D2(iParam0, 1))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_330(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x351E83123EFC0A15(iParam0, 0))
		{
			uParam1->f_68 = unk_0x0C2181485E5FB7C2(iParam0);
		}
		if (unk_0xD6F7D32A98E07F93(uParam1->f_66))
		{
			if (unk_0x333A68465EAB12B7(iParam0))
			{
				switch (unk_0xC56DEF5C90606858(iParam0))
				{
					case 3:
					case 0:
						unk_0xB0550BC91B0159D6(&(uParam1->f_77), 23);
						unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						unk_0xB0550BC91B0159D6(&(uParam1->f_77), 23);
						unk_0xB0550BC91B0159D6(&(uParam1->f_77), 22);
						break;
					
					case 5:
						unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0xC8E55AEB1E2B047F(iParam0))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 9);
		}
		if (unk_0x8B56DBBE237EDF1F(iParam0))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 10);
		}
		if (unk_0xA4429F0196864BB8(iParam0))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 13);
			unk_0x3D8BB85A33E13D09(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x21DB5182C34B6C0E(iParam0))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 12);
		}
		func_303(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xC49329A4E58D025B(iParam0, iVar0 + 1))
			{
				unk_0xCED9E32812D6C7C7(&(uParam1->f_77), func_329(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0xA763B3F87DA3C316(iParam0, 0))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0xB0550BC91B0159D6(&(uParam1->f_77), 11);
		}
		if (unk_0xF2549FF74D64B720(iParam0, "IgnoredByQuickSave") && unk_0x9A1E55620A6C250D(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0xB0550BC91B0159D6(&(uParam1->f_77), 27);
		}
	}
}

int func_329(int iParam0)
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

int func_330(int iParam0)
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

void func_331(var uParam0)
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

void func_332()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 337)
	{
		if (unk_0xE2D0C323A1AE5D85(Global_1585844[iVar0 /*142*/].f_103, 3))
		{
			unk_0xB0550BC91B0159D6(&(Global_1585844[iVar0 /*142*/].f_103), 3);
		}
		iVar0++;
	}
}

int func_333(int iParam0, int iParam1)
{
	if (unk_0x9315DBF7D972F07A())
	{
		if (unk_0x55A0C756C4A8220C(iParam0, 0))
		{
			if (iParam1 == 0)
			{
				if (unk_0x6BD06F4780EAC5DD("bombdec1", 3))
				{
					if (unk_0xF2549FF74D64B720(iParam0, "bombdec1"))
					{
						return 1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (unk_0x6BD06F4780EAC5DD("bombdec", 3))
				{
					if (unk_0xF2549FF74D64B720(iParam0, "bombdec"))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_334(var uParam0)
{
	func_331(uParam0);
	uParam0->f_78 = -1;
	uParam0->f_80 = 0f;
	uParam0->f_97 = 1;
	uParam0->f_98 = 0;
	uParam0->f_99 = 132;
	uParam0->f_81 = 0;
	uParam0->f_81.f_1 = 0;
	uParam0->f_81.f_2 = 0;
	uParam0->f_81.f_3 = 0;
	uParam0->f_81.f_4 = 0;
	uParam0->f_81.f_5 = 0;
	uParam0->f_81.f_6 = 0;
	uParam0->f_81.f_7 = 0;
	uParam0->f_81.f_8 = 0;
	uParam0->f_81.f_9 = 0;
	uParam0->f_81.f_10 = 0;
	uParam0->f_81.f_11 = 0;
	uParam0->f_81.f_12 = 0;
	uParam0->f_95 = 0;
	uParam0->f_94 = 0;
	uParam0->f_96 = -1;
}

void func_335(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 39)
		{
			if (Global_2810287.f_2309[iVar0 /*44*/].f_40 == iParam0)
			{
				func_335(iVar0, 0);
			}
			iVar0++;
		}
	}
	else
	{
		StringCopy(&(Global_2810287.f_2309[iParam0 /*44*/]), "", 24);
		Global_2810287.f_2309[iParam0 /*44*/].f_6 = 138;
		StringCopy(&(Global_2810287.f_2309[iParam0 /*44*/].f_7), "", 64);
		StringCopy(&(Global_2810287.f_2309[iParam0 /*44*/].f_23), "", 64);
		Global_2810287.f_2309[iParam0 /*44*/].f_39 = -1;
		Global_2810287.f_2309[iParam0 /*44*/].f_40 = -1;
		func_69(&(Global_2810287.f_2309[iParam0 /*44*/].f_41));
		Global_2810287.f_2309[iParam0 /*44*/].f_43 = 0;
	}
}

void func_336()
{
	func_337(10);
}

void func_337(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xCED9E32812D6C7C7(&(Global_1836747.f_3[iVar0]), iVar1);
}

void func_338()
{
	Global_2703656.f_75.f_65 = 0;
	func_339(25);
	func_339(24);
}

void func_339(int iParam0)
{
	if (iParam0 < 32)
	{
		if (unk_0xE2D0C323A1AE5D85(Global_2703656.f_75.f_1, iParam0))
		{
			unk_0xB0550BC91B0159D6(&(Global_2703656.f_75.f_1), iParam0);
		}
	}
	else if (unk_0xE2D0C323A1AE5D85(Global_2703656.f_75.f_2, (iParam0 - 32)))
	{
		unk_0xB0550BC91B0159D6(&(Global_2703656.f_75.f_2), (iParam0 - 32));
	}
}

void func_340(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (func_344() < 0 && Global_1958743)
	{
		return;
	}
	if (func_343(35))
	{
		bParam0 = true;
	}
	if (unk_0xE2D0C323A1AE5D85(Global_2703656.f_75.f_52, 3))
	{
		bParam0 = true;
	}
	if (unk_0xE2D0C323A1AE5D85(Global_2703656.f_75.f_56, 3))
	{
		bParam0 = true;
	}
	if (unk_0xE2D0C323A1AE5D85(Global_2703656.f_75.f_60, 3))
	{
		bParam0 = true;
	}
	if (bParam0)
	{
		func_342(2);
	}
	else
	{
		func_342(1);
	}
	if (bParam1)
	{
		func_342(11);
	}
	if (bParam2)
	{
		func_342(32);
		if (bParam3)
		{
			if (func_344() >= 0 && unk_0xE2D0C323A1AE5D85(Global_1585844[func_344() /*142*/].f_103, 0))
			{
				func_342(33);
			}
		}
		else
		{
			func_339(33);
		}
		if (func_344() >= 0)
		{
			if (func_341(Global_1585844[func_344() /*142*/].f_66))
			{
				func_342(40);
			}
		}
	}
	else if (bParam5)
	{
		func_342(37);
	}
	if (bParam4)
	{
		func_342(36);
	}
	if (func_343(36))
	{
		if (func_343(2))
		{
			func_339(36);
		}
	}
	if (bParam6)
	{
		func_342(38);
	}
	if (unk_0x9315DBF7D972F07A())
	{
		Global_2810287.f_424 = unk_0x0A89FDFA763DCAED();
	}
}

int func_341(int iParam0)
{
	if (iParam0 == joaat("trailersmall2"))
	{
		return 1;
	}
	return 0;
}

void func_342(int iParam0)
{
	if (iParam0 < 32)
	{
		if (!unk_0xE2D0C323A1AE5D85(Global_2703656.f_75.f_1, iParam0))
		{
			unk_0xCED9E32812D6C7C7(&(Global_2703656.f_75.f_1), iParam0);
		}
	}
	else if (!unk_0xE2D0C323A1AE5D85(Global_2703656.f_75.f_2, (iParam0 - 32)))
	{
		unk_0xCED9E32812D6C7C7(&(Global_2703656.f_75.f_2), (iParam0 - 32));
	}
}

bool func_343(int iParam0)
{
	if (iParam0 < 32)
	{
		return unk_0xE2D0C323A1AE5D85(Global_2703656.f_75.f_1, iParam0);
	}
	return unk_0xE2D0C323A1AE5D85(Global_2703656.f_75.f_2, (iParam0 - 32));
}

int func_344()
{
	if (Global_2359296[func_184() /*5559*/].f_675.f_2 >= 337)
	{
		Global_2359296[func_184() /*5559*/].f_675.f_2 = -1;
		return -1;
	}
	return Global_2359296[func_184() /*5559*/].f_675.f_2;
}

void func_345(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 < 0)
	{
		return;
	}
	iParam1++;
	func_346(iParam0, iParam1, iParam2);
	if (iParam0 >= 337)
	{
		return;
	}
	if (iParam2 == func_18() || iParam2 == -1)
	{
		Global_1941386[iParam0] = iParam1;
	}
}

void func_346(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 <= 255)
	{
		func_66(func_348(iParam0), iParam1, iParam2);
		func_66(func_347(iParam0), 0, iParam2);
	}
	else
	{
		func_66(func_348(iParam0), 255, iParam2);
		func_66(func_347(iParam0), (iParam1 - 255), iParam2);
	}
}

int func_347(int iParam0)
{
	if (iParam0 < 261)
	{
		return (24625 + iParam0);
	}
	else if (iParam0 < 271)
	{
		return ((26349 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28069 + iParam0) - 271);
	}
	else if (iParam0 < 307)
	{
		return ((30200 + iParam0) - 281);
	}
	else if (iParam0 < 317)
	{
		return ((31548 + iParam0) - 307);
	}
	else if (iParam0 < 337)
	{
		return ((34096 + iParam0) - 317);
	}
	return (24625 + iParam0);
}

int func_348(int iParam0)
{
	if (iParam0 < 158)
	{
		if (iParam0 <= 38)
		{
			return (4036 + iParam0);
		}
		else if (iParam0 <= 48)
		{
			return ((5905 + iParam0) - 39);
		}
		else if (iParam0 <= 51)
		{
			return ((6025 + iParam0) - 49);
		}
		else if (iParam0 <= 64)
		{
			return ((7199 + iParam0) - 52);
		}
		else if (iParam0 <= 87)
		{
			return ((9207 + iParam0) - 65);
		}
		else
		{
			return ((14734 + iParam0) - 88);
		}
	}
	else if (iParam0 == 158)
	{
		return 15356;
	}
	else if (iParam0 < 261)
	{
		if (iParam0 < 184)
		{
			return ((17911 + iParam0) - 159);
		}
		else if (iParam0 < 194)
		{
			return ((18903 + iParam0) - 184);
		}
		else if (iParam0 < 231)
		{
			return ((21757 + iParam0) - 194);
		}
		else
		{
			return ((24595 + iParam0) - 231);
		}
	}
	else if (iParam0 < 271)
	{
		return ((26339 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28059 + iParam0) - 271);
	}
	else if (iParam0 < 307)
	{
		return ((30174 + iParam0) - 281);
	}
	else if (iParam0 < 317)
	{
		return ((31538 + iParam0) - 307);
	}
	else if (iParam0 < 337)
	{
		return ((34076 + iParam0) - 317);
	}
	return (4036 + iParam0);
}

bool func_349(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (*uParam2 != 0 && *uParam2 != 1)
	{
		*uParam2 = 0;
	}
	switch (*uParam2)
	{
		case 0:
			if (!func_396() && Global_1964888)
			{
				return 0;
			}
			iVar0 = func_395(iParam1);
			iVar1 = func_392(unk_0x15CAA6D7B11F1A7C(iParam0), 0, -1, 0);
			if (func_147(78225582, -1224924353, iVar1, -897111558, 1, 0, 1, 4, iVar0, 3))
			{
				if (func_147(78225582, 1496367840, -207913414, -897111558, 1, 0, 1, 4, 0, 3))
				{
					if (unk_0x55A0C756C4A8220C(iParam0, 0) && unk_0x03AC3319D1B50189(iParam0) > 0)
					{
						unk_0x3C1BCE3438ECBFC0(iParam0, 0);
					}
					if (func_350(iParam1, iParam0, iParam3, bParam4))
					{
						*uParam2 = 1;
					}
					else
					{
						*uParam2 = 3;
					}
				}
				else
				{
					*uParam2 = 3;
				}
			}
			else
			{
				*uParam2 = 3;
			}
			if (*uParam2 == 1 && func_142())
			{
			}
			else
			{
				*uParam2 = 3;
				func_107(func_112());
			}
			break;
		
		case 1:
			if (func_112() < 0)
			{
				*uParam2 = 3;
			}
			else if (func_141(func_112()))
			{
				if (func_140(func_112()) == 2)
				{
					*uParam2 = 2;
					func_107(func_112());
				}
				else
				{
					*uParam2 = 3;
					func_107(func_112());
				}
			}
			break;
	}
	return *uParam2 != 1;
}

int func_350(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	char* sVar4;
	struct<4> Var5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	var uVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	struct<4> Var22;
	var uVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	char* sVar36;
	
	iVar10 = func_391(unk_0x15CAA6D7B11F1A7C(iParam1));
	if (((!Global_4533432 || !unk_0xE5965CDF24F93A9F(iParam1)) || !unk_0x55A0C756C4A8220C(iParam1, 0)) || unk_0x03AC3319D1B50189(iParam1) <= 0)
	{
		if (unk_0x03AC3319D1B50189(iParam1) <= 0 && func_390(unk_0x15CAA6D7B11F1A7C(iParam1)))
		{
			func_389(iParam1, &iVar0, &sVar3, &iVar6, &iVar1, &sVar4, &iVar7, &iVar2, &Var5, &iVar8, &iVar9, 0);
			if (!func_388(iParam0, "PACKED_MP_VEH_COLOUR1_0_v", &sVar3, 1, 24, iVar10, iVar0, iVar6))
			{
				return 0;
			}
			if (!func_388(iParam0, "PACKED_MP_VEH_COLOUR_EXTRA1_0_v", &Var5, 3, 24, iVar10, iVar2, iVar8))
			{
				return 0;
			}
			if (!func_386(iParam0, "PACKED_MP_VEH_PRIMARY_COLOUR_GROUP_v", func_387(iVar0)))
			{
				return 0;
			}
			if (!func_388(iParam0, "PACKED_MP_VEH_COLOUR2_0_v", &sVar4, 2, 25, iVar10, iVar1, iVar7))
			{
				return 0;
			}
			if (!func_386(iParam0, "PACKED_MP_VEH_SECONDARY_COLOUR_GROUP_v", func_387(iVar1)))
			{
				return 0;
			}
		}
		return 1;
	}
	if (iParam0 == -1)
	{
		iParam0 = 0;
	}
	bVar11 = true;
	if ((((((((((((((iParam0 == 10 || iParam0 == 11) || iParam0 == 12) || iParam0 == 23) || iParam0 == 24) || iParam0 == 25) || iParam0 == 36) || iParam0 == 37) || iParam0 == 38) || iParam0 == 49) || iParam0 == 50) || iParam0 == 51) || iParam0 == 62) || iParam0 == 63) || iParam0 == 64)
	{
		bVar11 = false;
	}
	if (unk_0xE5965CDF24F93A9F(iParam1) && unk_0x55A0C756C4A8220C(iParam1, 0))
	{
		iVar12 = func_384(unk_0x15CAA6D7B11F1A7C(iParam1));
		iVar13 = func_382(unk_0x15CAA6D7B11F1A7C(iParam1));
		iVar14 = func_378(unk_0x15CAA6D7B11F1A7C(iParam1));
		iVar15 = func_377(unk_0x15CAA6D7B11F1A7C(iParam1));
		iVar16 = func_376(iParam1);
		if (bVar11)
		{
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_0_v", "VEM_SPOILER", unk_0x0DD0BC46C4CFD6AD(iParam1, 0) + 1, 14, iVar12, -1, iParam1, 0))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_1_v", "VEM_BUMPER_F", unk_0x0DD0BC46C4CFD6AD(iParam1, 1) + 1, 34, iVar12, -1, iParam1, 1))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_2_v", "VEM_BUMPER_R", unk_0x0DD0BC46C4CFD6AD(iParam1, 2) + 11, 35, iVar12, -1, iParam1, 2))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_3_v", "VEM_SKIRT", unk_0x0DD0BC46C4CFD6AD(iParam1, 3) + 1, 13, iVar12, -1, iParam1, 3))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_4_v", "VEM_EXHAUST", unk_0x0DD0BC46C4CFD6AD(iParam1, 4) + 1, 6, iVar12, -1, iParam1, 4))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_5_v", "VEM_CHASSIS", unk_0x0DD0BC46C4CFD6AD(iParam1, 5) + 1, 4, iVar12, -1, iParam1, 5))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_6_v", "VEM_GRILL", unk_0x0DD0BC46C4CFD6AD(iParam1, 6) + 1, 8, iVar12, -1, iParam1, 6))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_7_v", "VEM_HOOD", unk_0x0DD0BC46C4CFD6AD(iParam1, 7) + 1, 9, iVar12, -1, iParam1, 7))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_8_v", "VEM_FENDER_L", unk_0x0DD0BC46C4CFD6AD(iParam1, 8) + 1, 36, iVar12, -1, iParam1, 8))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_9_v", "VEM_FENDER_R", unk_0x0DD0BC46C4CFD6AD(iParam1, 9) + 6, 37, iVar12, -1, iParam1, 9))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_10_v", "VEM_ROOF", unk_0x0DD0BC46C4CFD6AD(iParam1, 10) + 1, 12, iVar12, iVar16, iParam1, 10))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_11_v", "VEM_ENGINE", unk_0x0DD0BC46C4CFD6AD(iParam1, 11) + 1, 5, iVar12, -1, iParam1, 11))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_12_v", "VEM_BRAKE", unk_0x0DD0BC46C4CFD6AD(iParam1, 12) + 1, 2, iVar12, -1, iParam1, 12))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_13_v", "VEM_TRANS", unk_0x0DD0BC46C4CFD6AD(iParam1, 13) + 1, 16, iVar12, -1, iParam1, 13))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_15_v", "VEM_SUSPENSION", unk_0x0DD0BC46C4CFD6AD(iParam1, 15) + 1, 15, iVar12, -1, iParam1, 15))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_16_v", "VEM_ARMOUR", unk_0x0DD0BC46C4CFD6AD(iParam1, 16) + 1, 1, iVar12, -1, iParam1, 16))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_18_v", "VEM_TURBO", func_374(unk_0x75B2C853CB0B3047(iParam1, 18)), 17, iVar12, -1, 0, 23))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_22_v", "VEM_HLIGHT", func_374(unk_0x75B2C853CB0B3047(iParam1, 22)), 11, iVar12, -1, 0, 23))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_0_v", "VEM_SUPERMOD_0", unk_0x0DD0BC46C4CFD6AD(iParam1, 25) + 1, 41, iVar13, -1, iParam1, 25))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_1_v", "VEM_SUPERMOD_1", unk_0x0DD0BC46C4CFD6AD(iParam1, 26) + 1, 42, iVar13, -1, iParam1, 26))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_2_v", "VEM_SUPERMOD_2", unk_0x0DD0BC46C4CFD6AD(iParam1, 27) + 1, 43, iVar13, -1, iParam1, 27))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_3_v", "VEM_SUPERMOD_3", unk_0x0DD0BC46C4CFD6AD(iParam1, 28) + 1, 44, iVar13, -1, iParam1, 28))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_4_v", "VEM_SUPERMOD_4", unk_0x0DD0BC46C4CFD6AD(iParam1, 29) + 1, 45, iVar13, -1, iParam1, 29))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_5_v", "VEM_SUPERMOD_5", unk_0x0DD0BC46C4CFD6AD(iParam1, 30) + 1, 46, iVar13, -1, iParam1, 30))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_6_v", "VEM_SUPERMOD_6", unk_0x0DD0BC46C4CFD6AD(iParam1, 31) + 1, 47, iVar13, -1, iParam1, 31))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_7_v", "VEM_SUPERMOD_7", unk_0x0DD0BC46C4CFD6AD(iParam1, 32) + 1, 48, iVar13, -1, iParam1, 32))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_8_v", "VEM_SUPERMOD_8", unk_0x0DD0BC46C4CFD6AD(iParam1, 33) + 1, 49, iVar13, -1, iParam1, 33))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_9_v", "VEM_SUPERMOD_9", unk_0x0DD0BC46C4CFD6AD(iParam1, 34) + 1, 50, iVar13, -1, iParam1, 34))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_10_v", "VEM_SUPERMOD_10", unk_0x0DD0BC46C4CFD6AD(iParam1, 35) + 1, 51, iVar13, -1, iParam1, 35))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_11_v", "VEM_SUPERMOD_11", unk_0x0DD0BC46C4CFD6AD(iParam1, 36) + 1, 52, iVar13, -1, iParam1, 36))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_12_v", "VEM_SUPERMOD_12", unk_0x0DD0BC46C4CFD6AD(iParam1, 37) + 1, 53, iVar13, -1, iParam1, 37))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_13_v", "VEM_SUPERMOD_13", unk_0x0DD0BC46C4CFD6AD(iParam1, 38) + 1, 54, iVar13, -1, iParam1, 38))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_14_v", "VEM_SUPERMOD_14", unk_0x0DD0BC46C4CFD6AD(iParam1, 39) + 1, 55, iVar13, -1, iParam1, 39))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_15_v", "VEM_SUPERMOD_15", unk_0x0DD0BC46C4CFD6AD(iParam1, 40) + 1, 56, iVar13, -1, iParam1, 40))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_16_v", "VEM_SUPERMOD_16", unk_0x0DD0BC46C4CFD6AD(iParam1, 41) + 1, 57, iVar13, -1, iParam1, 41))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_17_v", "VEM_SUPERMOD_17", unk_0x0DD0BC46C4CFD6AD(iParam1, 42) + 1, 58, iVar13, -1, iParam1, 42))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_18_v", "VEM_SUPERMOD_18", unk_0x0DD0BC46C4CFD6AD(iParam1, 43) + 1, 59, iVar13, -1, iParam1, 43))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_19_v", "VEM_SUPERMOD_19", unk_0x0DD0BC46C4CFD6AD(iParam1, 44) + 1, 60, iVar13, -1, iParam1, 44))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_20_v", "VEM_SUPERMOD_20", unk_0x0DD0BC46C4CFD6AD(iParam1, 45) + 1, 61, iVar13, -1, iParam1, 45))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_21_v", "VEM_SUPERMOD_21", unk_0x0DD0BC46C4CFD6AD(iParam1, 46) + 1, 62, iVar13, -1, iParam1, 46))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_22_v", "VEM_SUPERMOD_22", unk_0x0DD0BC46C4CFD6AD(iParam1, 47) + 1, 63, iVar13, -1, iParam1, 47))
			{
				return 0;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_MOD_IDX_S_23_v", "VEM_SUPERMOD_23", unk_0x0DD0BC46C4CFD6AD(iParam1, 48) + 1, 64, iVar14, -1, iParam1, 48))
			{
				return 0;
			}
		}
		if (bVar11)
		{
			uVar17 = func_373(unk_0x3E54CE58C7EB63B4(iParam1, 14, unk_0x0DD0BC46C4CFD6AD(iParam1, 14)));
			if (!func_371(iParam0, "PACKED_MP_VEH_MOD_IDX_14_v", func_372(uVar17), 10, iVar12))
			{
				return 0;
			}
		}
		if (bVar11)
		{
			if (!func_370(iParam0, "PACKED_MP_VEH_MOD_IDX_23_v", iParam1, 23, iVar15))
			{
				return 0;
			}
			if (!func_370(iParam0, "PACKED_MP_VEH_MOD_IDX_24_v", iParam1, 24, iVar15))
			{
				return 0;
			}
		}
		if (!func_368(iParam0, "PACKED_MP_VEH_WHEEL_TYPE_0_v", iParam1))
		{
			return 0;
		}
		if (bVar11)
		{
			iVar18 = 0;
			switch (unk_0xF9D204D7598C0239(iParam1))
			{
				case 0:
					iVar18 = 0;
					break;
				
				case 3:
					iVar18 = 1;
					break;
				
				case 2:
					iVar18 = 2;
					break;
				
				case 1:
					iVar18 = 3;
					break;
				
				case 4:
					iVar18 = 4;
					break;
				
				case 5:
					iVar18 = 5;
					break;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_WINDOW_TINT_0_v", "VEM_CMOD_WIN", iVar18, 33, iVar12, -1, 0, 23))
			{
				return 0;
			}
		}
		if (bVar11)
		{
			iVar19 = 0;
			switch (unk_0xC264F708491D88D7(iParam1))
			{
				case 3:
					iVar19 = 0;
					break;
				
				case 0:
					iVar19 = 1;
					break;
				
				case 4:
					iVar19 = 2;
					break;
				
				case 2:
					iVar19 = 3;
					break;
				
				case 1:
					iVar19 = 4;
					break;
			}
			if (!func_375(iParam0, "PACKED_MP_VEH_PLATE_ID_v", "VEM_CMOD_PLA", iVar19, 23, iVar12, -1, 0, 23))
			{
				return 0;
			}
		}
		if (bVar11)
		{
			if (unk_0xCCEE7D38FC5D9FD6(iParam1, 23) == 0)
			{
				if (!func_375(iParam0, "PACKED_MP_VEH_MOD_VAR_0_v", "VEM_CMOD_TYR", 0, 31, iVar12, -1, 0, 23))
				{
					return 0;
				}
			}
			else if (!func_375(iParam0, "PACKED_MP_VEH_MOD_VAR_0_v", "VEM_CMOD_TYR", 1, 32, iVar12, -1, 0, 23))
			{
				return 0;
			}
			if (unk_0xCCEE7D38FC5D9FD6(iParam1, 24) == 0)
			{
				if (!func_375(iParam0, "PACKED_MP_VEH_MOD_VAR_1_v", "VEM_CMOD_TYR", 0, 31, iVar12, -1, 0, 23))
				{
					return 0;
				}
			}
			else if (!func_375(iParam0, "PACKED_MP_VEH_MOD_VAR_1_v", "VEM_CMOD_TYR", 1, 32, iVar12, -1, 0, 23))
			{
				return 0;
			}
		}
		func_389(iParam1, &iVar0, &sVar3, &iVar6, &iVar1, &sVar4, &iVar7, &iVar2, &Var5, &iVar8, &iVar9, 1);
		iVar20 = func_367(iVar9);
		if (!func_375(iParam0, "PACKED_MP_VEH_COLOUR_EXTRA2_0_v", "VEM_CMOD_COL5", iVar20, 29, iVar10, -1, 0, 23))
		{
			return 0;
		}
		unk_0x58DAFDEB2F46A5EA(iParam1, iVar6, iVar7);
		unk_0x952B5201CC721090(iParam1, iVar8, iVar9);
		if (bParam3)
		{
			while (func_366(iVar21, &Var22, &uVar23, &iVar24, &iVar25))
			{
				if (iVar24 == iVar6 && iVar25 == iVar8)
				{
					Var5 = { Var22 };
				}
				iVar21++;
			}
		}
		if (!func_388(iParam0, "PACKED_MP_VEH_COLOUR1_0_v", &sVar3, 1, 24, iVar10, iVar0, iVar6))
		{
			return 0;
		}
		if (!func_388(iParam0, "PACKED_MP_VEH_COLOUR_EXTRA1_0_v", &Var5, 3, 24, iVar10, iVar2, iVar8))
		{
			return 0;
		}
		if (!func_386(iParam0, "PACKED_MP_VEH_PRIMARY_COLOUR_GROUP_v", func_387(iVar0)))
		{
			return 0;
		}
		if (!func_388(iParam0, "PACKED_MP_VEH_COLOUR2_0_v", &sVar4, 2, 25, iVar10, iVar1, iVar7))
		{
			return 0;
		}
		if (!func_386(iParam0, "PACKED_MP_VEH_SECONDARY_COLOUR_GROUP_v", func_387(iVar1)))
		{
			return 0;
		}
		unk_0x2EE88EB83AF61B18(iParam1, &iVar26, &iVar27, &iVar28);
		switch (func_363(iVar26, iVar27, iVar28))
		{
			case 1:
				iVar29 = 3;
				break;
			
			case 2:
				iVar29 = 4;
				break;
			
			case 3:
				iVar29 = 5;
				break;
			
			case 4:
				iVar29 = 6;
				break;
			
			case 5:
				iVar29 = 11;
				break;
			
			case 6:
				iVar29 = 7;
				break;
			
			case 7:
				iVar29 = 10;
				break;
			
			case 8:
				iVar29 = 8;
				break;
			
			case 9:
				iVar29 = 12;
				break;
			
			case 10:
				iVar29 = 13;
				break;
			
			case 11:
				iVar29 = -1;
				break;
			
			case 12:
				iVar29 = 9;
				break;
			
			case 0:
				if (func_362(unk_0x15CAA6D7B11F1A7C(iParam1)) || unk_0x7010991FDA59D3F2(iParam1, joaat("oppressor2")))
				{
					iVar29 = 255;
					break;
				}
				break;
		}
		if (bVar11)
		{
			if (!func_361(iParam0, "PACKED_NG_VEHICLE_SMOKE_v", "VEM_CMOD_TYR", iVar29, 18, iVar12))
			{
				return 0;
			}
		}
		iVar30 = func_360(unk_0x6CA60A8EE52231D2(iParam1, 2), (unk_0x6CA60A8EE52231D2(iParam1, 0) || unk_0x6CA60A8EE52231D2(iParam1, 1)), unk_0x6CA60A8EE52231D2(iParam1, 3));
		if (bVar11)
		{
			if (!func_359(iParam0, "PACKED_NG_VEHICLE_NEON_KIT_v", "VEM_CMOD_NEONLAY", iVar30, 21, iVar12, 1))
			{
				return 0;
			}
		}
		unk_0xEDB21C30F1BAF83A(iParam1, &iVar26, &iVar27, &iVar28);
		iVar31 = func_312(iVar26, iVar27, iVar28);
		if (bVar11)
		{
			if (!func_359(iParam0, "PACKED_NG_VEHICLE_NEON_v", "VEM_CMOD_NEONCOL", iVar31, 21, iVar12, 0))
			{
				return 0;
			}
		}
		if (unk_0x8F0BC830FFCF7F2A(iParam1) > 1)
		{
			if (!func_375(iParam0, "PACKED_MP_VEH_LIVERY_0_v", "VEM_LIVERY", unk_0x3A5087062A6DBAEF(iParam1), 26, iVar12, func_358(unk_0x15CAA6D7B11F1A7C(iParam1)), 0, 23))
			{
				return 0;
			}
		}
		if (unk_0x5E17421C6DDF16AF(iParam1) > 1)
		{
			if (!func_375(iParam0, "PACKED_MP_VEH_LIVERY2_0_v", "VEM_LIVERY2", unk_0xCA76A695AC878584(iParam1), 39, iVar14, func_358(unk_0x15CAA6D7B11F1A7C(iParam1)), 0, 23))
			{
				return 0;
			}
		}
		if (bVar11)
		{
			if (!unk_0xC8E55AEB1E2B047F(iParam1))
			{
				if (!func_357(iParam0, "PACKED_NG_VEHICLE_BPT_v", "VEM_CMOD_TYR_2", 30, iVar12))
				{
					return 0;
				}
			}
		}
		if (bVar11)
		{
			unk_0x1E4D0D5DE3802BC2(iParam1, &iVar35);
			bVar32 = false;
			iVar33 = 0;
			while (func_356(iVar33, &iVar34) && !bVar32)
			{
				if (iVar34 == iVar35)
				{
					bVar32 = true;
					sVar36 = func_355(iVar33);
				}
				else
				{
					iVar33++;
				}
			}
			if (bVar32)
			{
				func_354(iParam0, "PACKED_LR_VEHICLE_COLOUR_5_v", sVar36, 38, 5, 3);
			}
			unk_0x04CE0BF11E7D9DE4(iParam1, &iVar35);
			bVar32 = false;
			iVar33 = 0;
			while (func_310(iVar33, &iVar34) && !bVar32)
			{
				if (iVar34 == iVar35)
				{
					bVar32 = true;
					sVar36 = func_353(iVar33);
				}
				else
				{
					iVar33++;
				}
			}
			if (!bVar32)
			{
				if (iVar35 == 0)
				{
					sVar36 = "VEM_COLOUR_6_BLACK_t65_v3";
					bVar32 = true;
				}
				else if (iVar35 == 132)
				{
					sVar36 = "VEM_COLOUR_6_DEFAULT_t65_v3";
					bVar32 = true;
				}
			}
			if (bVar32)
			{
				func_354(iParam0, "PACKED_LR_VEHICLE_COLOUR_6_v", sVar36, 65, 6, 3);
			}
		}
		if (uParam2 && bVar11)
		{
			if (!func_352(iParam0, "PACKED_NG_VEHICLE_INSURANCE_v", unk_0x15CAA6D7B11F1A7C(iParam1)))
			{
				return 0;
			}
		}
		else if (bVar11)
		{
			if (!func_351(iParam0, "PACKED_NG_VEHICLE_INSURANCE_v"))
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_351(int iParam0, char* sParam1)
{
	char cVar0[64];
	char cVar1[64];
	
	if (unk_0x03A58B305FFA997E())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, "VEM_INSURANCE_NONE", 64);
	if (!unk_0x30057DE4703C0DA0(unk_0x2E87280918B16506(&cVar1)))
	{
		return 1;
	}
	return func_147(78225582, -1224924353, unk_0x2E87280918B16506(&cVar1), 478352891, 1, 0, 1, 4, unk_0x2E87280918B16506(&cVar0), 3);
}

int func_352(int iParam0, char* sParam1, int iParam2)
{
	char cVar0[64];
	char cVar1[16];
	char cVar2[64];
	
	if (unk_0x03A58B305FFA997E())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, unk_0x01E2429B82E280E6(iParam2), 16);
	if (unk_0xACC32B78196FBC2A(&cVar1) || unk_0x2E87280918B16506(&cVar1) == -515263000)
	{
		return 1;
	}
	StringConCat(&cVar2, "VEM_INSURANCE_", 64);
	StringConCat(&cVar2, &cVar1, 64);
	switch (iParam2)
	{
		case joaat("dubsta2"):
		case joaat("cavalcade2"):
		case joaat("mesa2"):
		case joaat("rapidgt2"):
		case joaat("emperor2"):
		case joaat("manana2"):
			StringConCat(&cVar2, "2", 64);
			break;
		
		case joaat("mesa3"):
		case joaat("emperor3"):
		case joaat("burrito3"):
		case joaat("mule3"):
			StringConCat(&cVar2, "3", 64);
			break;
		
		case joaat("tornado4"):
			StringConCat(&cVar2, "4", 64);
			break;
	}
	if (!unk_0x30057DE4703C0DA0(unk_0x2E87280918B16506(&cVar2)))
	{
		return 1;
	}
	return func_147(78225582, -1224924353, unk_0x2E87280918B16506(&cVar2), 478352891, 1, 0, 1, 4, unk_0x2E87280918B16506(&cVar0), 3);
}

char* func_353(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SILVER";
			break;
		
		case 1:
			return "BLUE_SILVER";
			break;
		
		case 2:
			return "ROLLED_STEEL";
			break;
		
		case 3:
			return "SHADOW_SILVER";
			break;
		
		case 4:
			return "WHITE";
			break;
		
		case 5:
			return "FROST_WHITE";
			break;
		
		case 6:
			return "CREAM";
			break;
		
		case 7:
			return "SIENNA_BROWN";
			break;
		
		case 8:
			return "SADDLE_BROWN";
			break;
		
		case 9:
			return "MOSS_BROWN";
			break;
		
		case 10:
			return "WOODBEECH_BROWN";
			break;
		
		case 11:
			return "STRAW_BROWN";
			break;
		
		case 12:
			return "SANDY_BROWN";
			break;
		
		case 13:
			return "BLEECHED_BROWN";
			break;
		
		case 14:
			return "GOLD";
			break;
		
		case 15:
			return "BRONZE";
			break;
		
		case 16:
			return "YELLOW";
			break;
		
		case 17:
			return "RACE_YELLOW";
			break;
		
		case 18:
			return "FLUR_YELLOW";
			break;
		
		case 19:
			return "ORANGE";
			break;
		
		case 20:
			return "BRIGHT_ORANGE";
			break;
		
		case 21:
			return "SUNRISE_ORANGE";
			break;
		
		case 22:
			return "RED";
			break;
		
		case 23:
			return "TORINO_RED";
			break;
		
		case 24:
			return "FORMULA_RED";
			break;
		
		case 25:
			return "LAVA_RED";
			break;
		
		case 26:
			return "BLAZE_RED";
			break;
		
		case 27:
			return "GRACE_RED";
			break;
		
		case 28:
			return "GARNET_RED";
			break;
		
		case 29:
			return "CANDY_RED";
			break;
		
		case 30:
			return "HOT PINK";
			break;
		
		case 31:
			return "PINK";
			break;
		
		case 32:
			return "SALMON_PINK";
			break;
		
		case 33:
			return "PURPLE";
			break;
		
		case 34:
			return "BRIGHT_PURPLE";
			break;
		
		case 35:
			return "SAXON_BLUE";
			break;
		
		case 36:
			return "BLUE";
			break;
		
		case 37:
			return "MARINER_BLUE";
			break;
		
		case 38:
			return "HARBOR_BLUE";
			break;
		
		case 39:
			return "DIAMOND_BLUE";
			break;
		
		case 40:
			return "SURF_BLUE";
			break;
		
		case 41:
			return "NAUTICAL_BLUE";
			break;
		
		case 42:
			return "RACING_BLUE";
			break;
		
		case 43:
			return "ULTRA_BLUE";
			break;
		
		case 44:
			return "LIGHT_BLUE";
			break;
		
		case 45:
			return "SEA_GREEN";
			break;
		
		case 46:
			return "BRIGHT_GREEN";
			break;
		
		case 47:
			return "PETROL_GREEN";
			break;
		
		case 48:
			return "LIME_GREEN";
			break;
	}
	return "";
}

int func_354(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	char cVar0[64];
	char cVar1[64];
	
	if (unk_0x03A58B305FFA997E())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, sParam2, 64);
	if (!unk_0x30057DE4703C0DA0(unk_0x2E87280918B16506(&cVar1)))
	{
		StringCopy(&cVar1, "VEM_COLOUR_", 64);
		StringIntConCat(&cVar1, iParam4, 64);
		StringConCat(&cVar1, "_", 64);
		StringConCat(&cVar1, sParam2, 64);
		StringConCat(&cVar1, "_t", 64);
		StringIntConCat(&cVar1, iParam3, 64);
		StringConCat(&cVar1, "_v", 64);
		StringIntConCat(&cVar1, iParam5, 64);
	}
	if (!unk_0x30057DE4703C0DA0(unk_0x2E87280918B16506(&cVar1)))
	{
		return 1;
	}
	return func_147(78225582, -1224924353, unk_0x2E87280918B16506(&cVar1), 478352891, 1, 0, 1, 4, unk_0x2E87280918B16506(&cVar0), 3);
}

char* func_355(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BLACK";
			break;
		
		case 1:
			return "GRAPHITE";
			break;
		
		case 2:
			return "ANTHR_BLACK";
			break;
		
		case 3:
			return "BLACK_STEEL";
			break;
		
		case 4:
			return "DARK_SILVER";
			break;
		
		case 5:
			return "BLUE_SILVER";
			break;
		
		case 6:
			return "ROLLED_STEEL";
			break;
		
		case 7:
			return "SHADOW_SILVER";
			break;
		
		case 8:
			return "STONE_SILVER";
			break;
		
		case 9:
			return "MIDNIGHT_SILVER";
			break;
		
		case 10:
			return "CAST_IRON_SIL";
			break;
		
		case 11:
			return "RED";
			break;
		
		case 12:
			return "TORINO_RED";
			break;
		
		case 13:
			return "LAVA_RED";
			break;
		
		case 14:
			return "BLAZE_RED";
			break;
		
		case 15:
			return "GRACE_RED";
			break;
		
		case 16:
			return "GARNET_RED";
			break;
		
		case 17:
			return "SUNSET_RED";
			break;
		
		case 18:
			return "CABERNET_RED";
			break;
		
		case 19:
			return "WINE_RED";
			break;
		
		case 20:
			return "CANDY_RED";
			break;
		
		case 21:
			return "PINK";
			break;
		
		case 22:
			return "SALMON_PINK";
			break;
		
		case 23:
			return "SUNRISE_ORANGE";
			break;
		
		case 24:
			return "ORANGE";
			break;
		
		case 25:
			return "BRIGHT_ORANGE";
			break;
		
		case 26:
			return "BRONZE";
			break;
		
		case 27:
			return "YELLOW";
			break;
		
		case 28:
			return "RACE_YELLOW";
			break;
		
		case 29:
			return "FLUR_YELLOW";
			break;
		
		case 30:
			return "DARK_GREEN";
			break;
		
		case 31:
			return "RACING_GREEN";
			break;
		
		case 32:
			return "SEA_GREEN";
			break;
		
		case 33:
			return "OLIVE_GREEN";
			break;
		
		case 34:
			return "BRIGHT_GREEN";
			break;
		
		case 35:
			return "PETROL_GREEN";
			break;
		
		case 36:
			return "LIME_GREEN";
			break;
		
		case 37:
			return "MIDNIGHT_BLUE";
			break;
		
		case 38:
			return "GALAXY_BLUE";
			break;
		
		case 39:
			return "DARK_BLUE";
			break;
		
		case 40:
			return "SAXON_BLUE";
			break;
		
		case 41:
			return "MARINER_BLUE";
			break;
		
		case 42:
			return "HARBOR_BLUE";
			break;
		
		case 43:
			return "DIAMOND_BLUE";
			break;
		
		case 44:
			return "SURF_BLUE";
			break;
		
		case 45:
			return "NAUTICAL_BLUE";
			break;
		
		case 46:
			return "RACING_BLUE";
			break;
		
		case 47:
			return "ULTRA_BLUE";
			break;
		
		case 48:
			return "LIGHT_BLUE";
			break;
		
		case 49:
			return "CHOCOLATE_BROWN";
			break;
		
		case 50:
			return "BISON_BROWN";
			break;
		
		case 51:
			return "CREEK_BROWN";
			break;
		
		case 52:
			return "UMBER_BROWN";
			break;
		
		case 53:
			return "MAPLE_BROWN";
			break;
		
		case 54:
			return "BEECHWOOD_BROWN";
			break;
		
		case 55:
			return "SIENNA_BROWN";
			break;
		
		case 56:
			return "SADDLE_BROWN";
			break;
		
		case 57:
			return "MOSS_BROWN";
			break;
		
		case 58:
			return "WOODBEECH_BROWN";
			break;
		
		case 59:
			return "STRAW_BROWN";
			break;
		
		case 60:
			return "SANDY_BROWN";
			break;
		
		case 61:
			return "BLEECHED_BROWN";
			break;
		
		case 62:
			return "SPIN_PURPLE";
			break;
		
		case 63:
			return "MIGHT_PURPLE";
			break;
		
		case 64:
			return "BRIGHT_PURPLE";
			break;
		
		case 65:
			return "CREAM";
			break;
		
		case 66:
			return "WHITE";
			break;
		
		case 67:
			return "FROST_WHITE";
			break;
	}
	return "";
}

bool func_356(int iParam0, var uParam1)
{
	*uParam1 = -1;
	switch (iParam0)
	{
		case 0:
			*uParam1 = 0;
			break;
		
		case 1:
			*uParam1 = 1;
			break;
		
		case 2:
			*uParam1 = 11;
			break;
		
		case 3:
			*uParam1 = 2;
			break;
		
		case 4:
			*uParam1 = 3;
			break;
		
		case 5:
			*uParam1 = 5;
			break;
		
		case 6:
			*uParam1 = 6;
			break;
		
		case 7:
			*uParam1 = 7;
			break;
		
		case 8:
			*uParam1 = 8;
			break;
		
		case 9:
			*uParam1 = 9;
			break;
		
		case 10:
			*uParam1 = 10;
			break;
		
		case 11:
			*uParam1 = 27;
			break;
		
		case 12:
			*uParam1 = 28;
			break;
		
		case 13:
			*uParam1 = 150;
			break;
		
		case 14:
			*uParam1 = 30;
			break;
		
		case 15:
			*uParam1 = 31;
			break;
		
		case 16:
			*uParam1 = 32;
			break;
		
		case 17:
			*uParam1 = 33;
			break;
		
		case 18:
			*uParam1 = 34;
			break;
		
		case 19:
			*uParam1 = 143;
			break;
		
		case 20:
			*uParam1 = 35;
			break;
		
		case 21:
			*uParam1 = 137;
			break;
		
		case 22:
			*uParam1 = 136;
			break;
		
		case 23:
			*uParam1 = 36;
			break;
		
		case 24:
			*uParam1 = 38;
			break;
		
		case 25:
			*uParam1 = 138;
			break;
		
		case 26:
			*uParam1 = 90;
			break;
		
		case 27:
			*uParam1 = 88;
			break;
		
		case 28:
			*uParam1 = 89;
			break;
		
		case 29:
			*uParam1 = 91;
			break;
		
		case 30:
			*uParam1 = 49;
			break;
		
		case 31:
			*uParam1 = 50;
			break;
		
		case 32:
			*uParam1 = 51;
			break;
		
		case 33:
			*uParam1 = 52;
			break;
		
		case 34:
			*uParam1 = 53;
			break;
		
		case 35:
			*uParam1 = 54;
			break;
		
		case 36:
			*uParam1 = 92;
			break;
		
		case 37:
			*uParam1 = 141;
			break;
		
		case 38:
			*uParam1 = 61;
			break;
		
		case 39:
			*uParam1 = 62;
			break;
		
		case 40:
			*uParam1 = 63;
			break;
		
		case 41:
			*uParam1 = 65;
			break;
		
		case 42:
			*uParam1 = 66;
			break;
		
		case 43:
			*uParam1 = 67;
			break;
		
		case 44:
			*uParam1 = 68;
			break;
		
		case 45:
			*uParam1 = 69;
			break;
		
		case 46:
			*uParam1 = 73;
			break;
		
		case 47:
			*uParam1 = 70;
			break;
		
		case 48:
			*uParam1 = 74;
			break;
		
		case 49:
			*uParam1 = 96;
			break;
		
		case 50:
			*uParam1 = 101;
			break;
		
		case 51:
			*uParam1 = 95;
			break;
		
		case 52:
			*uParam1 = 94;
			break;
		
		case 53:
			*uParam1 = 97;
			break;
		
		case 54:
			*uParam1 = 103;
			break;
		
		case 55:
			*uParam1 = 104;
			break;
		
		case 56:
			*uParam1 = 98;
			break;
		
		case 57:
			*uParam1 = 100;
			break;
		
		case 58:
			*uParam1 = 102;
			break;
		
		case 59:
			*uParam1 = 99;
			break;
		
		case 60:
			*uParam1 = 105;
			break;
		
		case 61:
			*uParam1 = 106;
			break;
		
		case 62:
			*uParam1 = 72;
			break;
		
		case 63:
			*uParam1 = 146;
			break;
		
		case 64:
			*uParam1 = 145;
			break;
		
		case 65:
			*uParam1 = 107;
			break;
		
		case 66:
			*uParam1 = 111;
			break;
		
		case 67:
			*uParam1 = 112;
			break;
	}
	return *uParam1 != -1;
}

int func_357(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4)
{
	char cVar0[64];
	char cVar1[64];
	
	if (unk_0x03A58B305FFA997E())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, sParam2, 64);
	StringConCat(&cVar1, "_t", 64);
	StringIntConCat(&cVar1, iParam3, 64);
	StringConCat(&cVar1, "_v", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	if (!unk_0x30057DE4703C0DA0(unk_0x2E87280918B16506(&cVar1)))
	{
		return 1;
	}
	return func_147(78225582, -1224924353, unk_0x2E87280918B16506(&cVar1), 478352891, 1, 0, 1, 4, unk_0x2E87280918B16506(&cVar0), 3);
}

int func_358(int iParam0)
{
	switch (iParam0)
	{
		case joaat("windsor"):
			return 1;
			break;
	}
	return -1;
}

int func_359(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	char cVar0[64];
	char cVar1[64];
	
	if (unk_0x03A58B305FFA997E())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, sParam2, 64);
	StringConCat(&cVar1, "_", 64);
	if (iParam3 == 0 && !bParam6)
	{
		StringConCat(&cVar1, "255", 64);
	}
	else
	{
		StringIntConCat(&cVar1, iParam3, 64);
	}
	StringConCat(&cVar1, "_t", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	StringConCat(&cVar1, "_v", 64);
	StringIntConCat(&cVar1, iParam5, 64);
	if (!unk_0x30057DE4703C0DA0(unk_0x2E87280918B16506(&cVar1)))
	{
		return 1;
	}
	return func_147(78225582, -1224924353, unk_0x2E87280918B16506(&cVar1), 478352891, 1, 0, 1, 4, unk_0x2E87280918B16506(&cVar0), 3);
}

int func_360(bool bParam0, bool bParam1, bool bParam2)
{
	if ((bParam2 && bParam1) && bParam0)
	{
		return 7;
	}
	else if ((bParam2 && bParam1) && !bParam0)
	{
		return 6;
	}
	else if ((!bParam2 && bParam1) && bParam0)
	{
		return 5;
	}
	else if ((bParam2 && !bParam1) && bParam0)
	{
		return 4;
	}
	else if ((!bParam2 && bParam1) && !bParam0)
	{
		return 3;
	}
	else if ((bParam2 && !bParam1) && !bParam0)
	{
		return 2;
	}
	else if ((!bParam2 && !bParam1) && bParam0)
	{
		return 1;
	}
	return 0;
}

int func_361(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	char cVar0[64];
	char cVar1[64];
	
	if (unk_0x03A58B305FFA997E())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, sParam2, 64);
	StringConCat(&cVar1, "_", 64);
	if (iParam3 == -1)
	{
		StringConCat(&cVar1, "PAT", 64);
	}
	else
	{
		StringIntConCat(&cVar1, iParam3, 64);
	}
	StringConCat(&cVar1, "_t", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	StringConCat(&cVar1, "_v", 64);
	StringIntConCat(&cVar1, iParam5, 64);
	if (!unk_0x30057DE4703C0DA0(unk_0x2E87280918B16506(&cVar1)))
	{
		return 1;
	}
	return func_147(78225582, -1224924353, unk_0x2E87280918B16506(&cVar1), 478352891, 1, 0, 1, 4, unk_0x2E87280918B16506(&cVar0), 3);
}

int func_362(int iParam0)
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

int func_363(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	
	if ((iParam0 == 255 && iParam1 == 255) && iParam2 == 255)
	{
		return 1;
	}
	if ((iParam0 == 0 && iParam1 == 0) && iParam2 == 0)
	{
		return 11;
	}
	if ((iParam0 == 255 && iParam1 == 127) && iParam2 == 0)
	{
		return 6;
	}
	if ((iParam0 == 252 && iParam1 == 238) && iParam2 == 0)
	{
		return 4;
	}
	if ((iParam0 == 0 && iParam1 == 174) && iParam2 == 239)
	{
		return 3;
	}
	if ((iParam0 == 226 && iParam1 == 6) && iParam2 == 6)
	{
		return 8;
	}
	if ((iParam0 == 20 && iParam1 == 20) && iParam2 == 20)
	{
		return 2;
	}
	if ((iParam0 == Global_1576203 && iParam1 == Global_1576204) && iParam2 == Global_1576205)
	{
		return 12;
	}
	if ((iParam0 == 1 && iParam1 == 1) && iParam2 == 1)
	{
		return 0;
	}
	if (func_365())
	{
		unk_0x2F046C9381D8E91B(21, &iVar0, &iVar1, &iVar2, &uVar3);
		if ((iParam0 == iVar0 && iParam1 == iVar1) && iParam2 == iVar2)
		{
			return 5;
		}
		unk_0x2F046C9381D8E91B(18, &iVar0, &iVar1, &iVar2, &uVar3);
		if ((iParam0 == iVar0 && iParam1 == iVar1) && iParam2 == iVar2)
		{
			return 7;
		}
		if (((iParam0 == 114 && iParam1 == 204) && iParam2 == 114) || ((iParam0 == 102 && iParam1 == 152) && iParam2 == 104))
		{
			return 7;
		}
	}
	if (func_364())
	{
		unk_0x2F046C9381D8E91B(24, &iVar4, &iVar5, &iVar6, &uVar7);
		if ((iParam0 == iVar4 && iParam1 == iVar5) && iParam2 == iVar6)
		{
			return 9;
		}
		unk_0x2F046C9381D8E91B(107, &iVar4, &iVar5, &iVar6, &uVar7);
		if ((iParam0 == iVar4 && iParam1 == iVar5) && iParam2 == iVar6)
		{
			return 10;
		}
	}
	return 1;
}

bool func_364()
{
	return unk_0x014D8C5910A5B01B(1785846048);
}

bool func_365()
{
	return unk_0x014D8C5910A5B01B(42019760);
}

bool func_366(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)
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

int func_367(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 156:
			iVar0 = 0;
			break;
		
		case 0:
			iVar0 = 1;
			break;
		
		case 1:
			iVar0 = 2;
			break;
		
		case 11:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 4;
			break;
		
		case 8:
			iVar0 = 5;
			break;
		
		case 122:
			iVar0 = 6;
			break;
		
		case 27:
			iVar0 = 7;
			break;
		
		case 30:
			iVar0 = 8;
			break;
		
		case 45:
			iVar0 = 9;
			break;
		
		case 35:
			iVar0 = 10;
			break;
		
		case 33:
			iVar0 = 11;
			break;
		
		case 136:
			iVar0 = 12;
			break;
		
		case 135:
			iVar0 = 13;
			break;
		
		case 36:
			iVar0 = 14;
			break;
		
		case 41:
			iVar0 = 15;
			break;
		
		case 138:
			iVar0 = 16;
			break;
		
		case 37:
			iVar0 = 17;
			break;
		
		case 99:
			iVar0 = 18;
			break;
		
		case 90:
			iVar0 = 19;
			break;
		
		case 95:
			iVar0 = 20;
			break;
		
		case 115:
			iVar0 = 21;
			break;
		
		case 109:
			iVar0 = 22;
			break;
		
		case 153:
			iVar0 = 23;
			break;
		
		case 154:
			iVar0 = 24;
			break;
		
		case 88:
			iVar0 = 25;
			break;
		
		case 89:
			iVar0 = 26;
			break;
		
		case 91:
			iVar0 = 27;
			break;
		
		case 55:
			iVar0 = 28;
			break;
		
		case 125:
			iVar0 = 29;
			break;
		
		case 53:
			iVar0 = 30;
			break;
		
		case 56:
			iVar0 = 31;
			break;
		
		case 151:
			iVar0 = 32;
			break;
		
		case 82:
			iVar0 = 33;
			break;
		
		case 64:
			iVar0 = 34;
			break;
		
		case 87:
			iVar0 = 35;
			break;
		
		case 70:
			iVar0 = 36;
			break;
		
		case 140:
			iVar0 = 37;
			break;
		
		case 81:
			iVar0 = 38;
			break;
		
		case 145:
			iVar0 = 39;
			break;
		
		case 142:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

int func_368(int iParam0, char* sParam1, int iParam2)
{
	char cVar0[64];
	int iVar1;
	
	if (unk_0x03A58B305FFA997E())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	iVar1 = func_369(unk_0xD9B8AFE0DD1AD635(iParam2));
	if (!unk_0x30057DE4703C0DA0(iVar1))
	{
		return 1;
	}
	return func_147(78225582, -1224924353, iVar1, 478352891, 1, 0, 1, 4, unk_0x2E87280918B16506(&cVar0), 3);
}

int func_369(int iParam0)
{
	char cVar0[32];
	
	StringCopy(&cVar0, "VEM_", 32);
	switch (iParam0)
	{
		case -1:
			StringConCat(&cVar0, "MWT_INVALID", 32);
			break;
		
		case 0:
			StringConCat(&cVar0, "MWT_SPORT", 32);
			break;
		
		case 1:
			StringConCat(&cVar0, "MWT_MUSCLE", 32);
			break;
		
		case 2:
			StringConCat(&cVar0, "MWT_LOWRIDER", 32);
			break;
		
		case 3:
			StringConCat(&cVar0, "MWT_SUV", 32);
			break;
		
		case 4:
			StringConCat(&cVar0, "MWT_OFFROAD", 32);
			break;
		
		case 5:
			StringConCat(&cVar0, "MWT_TUNER", 32);
			break;
		
		case 6:
			StringConCat(&cVar0, "MWT_BIKE", 32);
			break;
		
		case 7:
			StringConCat(&cVar0, "MWT_HIEND", 32);
			break;
		
		case 8:
			StringConCat(&cVar0, "MWT_SUPERMOD1", 32);
			break;
		
		case 9:
			StringConCat(&cVar0, "MWT_SUPERMOD2", 32);
			break;
		
		case 10:
			StringConCat(&cVar0, "MWT_SUPERMOD3", 32);
			break;
		
		case 11:
			StringConCat(&cVar0, "MWT_SUPERMOD4", 32);
			break;
		
		case 12:
			StringConCat(&cVar0, "MWT_SUPERMOD5", 32);
			break;
	}
	StringConCat(&cVar0, "_t", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_v0", 32);
	return unk_0x2E87280918B16506(&cVar0);
}

int func_370(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	
	if (unk_0x03A58B305FFA997E())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, "VEM_", 64);
	iVar2 = unk_0x0DD0BC46C4CFD6AD(iParam2, iParam3);
	if (iVar2 == -1 || (iParam3 == 24 && !unk_0x6F0299ED3CEB4E5D(unk_0x15CAA6D7B11F1A7C(iParam2))))
	{
		if (unk_0x6F0299ED3CEB4E5D(unk_0x15CAA6D7B11F1A7C(iParam2)))
		{
			StringConCat(&cVar1, "CMOD_WHE_B_0", 64);
		}
		else
		{
			StringConCat(&cVar1, "CMOD_WHE_0", 64);
		}
	}
	else
	{
		StringConCat(&cVar1, unk_0xAC1327F86AC1314A(iParam2, iParam3, iVar2), 64);
	}
	StringConCat(&cVar1, "_t19_v", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	if (!unk_0x30057DE4703C0DA0(unk_0x2E87280918B16506(&cVar1)))
	{
		return 1;
	}
	return func_147(78225582, -1224924353, unk_0x2E87280918B16506(&cVar1), 478352891, 1, 0, 1, 4, unk_0x2E87280918B16506(&cVar0), 3);
}

int func_371(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4)
{
	char cVar0[64];
	char cVar1[64];
	
	if (unk_0x03A58B305FFA997E())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, "VEM_", 64);
	StringConCat(&cVar1, sParam2, 64);
	StringConCat(&cVar1, "_t", 64);
	StringIntConCat(&cVar1, iParam3, 64);
	StringConCat(&cVar1, "_v", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	if (!unk_0x30057DE4703C0DA0(unk_0x2E87280918B16506(&cVar1)))
	{
		return 1;
	}
	return func_147(78225582, -1224924353, unk_0x2E87280918B16506(&cVar1), 478352891, 1, 0, 1, 4, unk_0x2E87280918B16506(&cVar0), 3);
}

char* func_372(var uParam0)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "";
	iVar1 = uParam0;
	switch (iVar1)
	{
		case 0:
			sVar0 = "CMOD_HRN_0";
			break;
		
		case 1:
			sVar0 = "HORN_INDI_1";
			break;
		
		case 2:
			sVar0 = "HORN_INDI_2";
			break;
		
		case 3:
			sVar0 = "HORN_INDI_3";
			break;
		
		case 4:
			sVar0 = "HORN_INDI_4";
			break;
		
		case 5:
			sVar0 = "HORN_HIPS1";
			break;
		
		case 6:
			sVar0 = "HORN_HIPS2";
			break;
		
		case 7:
			sVar0 = "HORN_HIPS3";
			break;
		
		case 8:
			sVar0 = "HORN_HIPS4";
			break;
		
		case 9:
			sVar0 = "HORN_CNOTE_C0";
			break;
		
		case 10:
			sVar0 = "HORN_CNOTE_D0";
			break;
		
		case 11:
			sVar0 = "HORN_CNOTE_E0";
			break;
		
		case 12:
			sVar0 = "HORN_CNOTE_F0";
			break;
		
		case 13:
			sVar0 = "HORN_CNOTE_G0";
			break;
		
		case 14:
			sVar0 = "HORN_CNOTE_A0";
			break;
		
		case 15:
			sVar0 = "HORN_CNOTE_B0";
			break;
		
		case 16:
			sVar0 = "HORN_CNOTE_C1";
			break;
		
		case 17:
			sVar0 = "HORN_CLAS1";
			break;
		
		case 18:
			sVar0 = "HORN_CLAS2";
			break;
		
		case 19:
			sVar0 = "HORN_CLAS3";
			break;
		
		case 20:
			sVar0 = "HORN_CLAS4";
			break;
		
		case 21:
			sVar0 = "HORN_CLAS5";
			break;
		
		case 22:
			sVar0 = "HORN_CLAS6";
			break;
		
		case 23:
			sVar0 = "HORN_CLAS7";
			break;
		
		case 24:
			sVar0 = "HORN_LUXE1";
			break;
		
		case 25:
			sVar0 = "HORN_LUXE2";
			break;
		
		case 26:
			sVar0 = "HORN_LUXE3";
			break;
		
		case 30:
			sVar0 = "HORN_LOWRDER1";
			break;
		
		case 31:
			sVar0 = "HORN_LOWRDER2";
			break;
		
		case 34:
			sVar0 = "HORN_HWEEN1";
			break;
		
		case 35:
			sVar0 = "HORN_HWEEN2";
			break;
		
		case 38:
			sVar0 = "HORN_XM15_1";
			break;
		
		case 39:
			sVar0 = "HORN_XM15_2";
			break;
		
		case 40:
			sVar0 = "HORN_XM15_3";
			break;
		
		case 46:
			sVar0 = "CMOD_HRN_CLO";
			break;
		
		case 45:
			sVar0 = "CMOD_HRN_COP";
			break;
		
		case 44:
			sVar0 = "CMOD_HRN_TRK";
			break;
		
		case 47:
			sVar0 = "CMOD_HRN_MUS1";
			break;
		
		case 48:
			sVar0 = "CMOD_HRN_MUS2";
			break;
		
		case 49:
			sVar0 = "CMOD_HRN_MUS3";
			break;
		
		case 50:
			sVar0 = "CMOD_HRN_MUS4";
			break;
		
		case 51:
			sVar0 = "CMOD_HRN_MUS5";
			break;
		
		case 52:
			sVar0 = "CMOD_HRN_SAD";
			break;
		
		case 53:
			sVar0 = "CMOD_AIRHORN_01";
			break;
		
		case 54:
			sVar0 = "CMOD_AIRHORN_02";
			break;
		
		case 55:
			sVar0 = "CMOD_AIRHORN_03";
			break;
	}
	return sVar0;
}

int func_373(int iParam0)
{
	switch (iParam0)
	{
		case -722822506:
			return 1;
			break;
		
		case -493570582:
			return 2;
			break;
		
		case -1451310145:
			return 3;
			break;
		
		case -953155807:
			return 4;
			break;
		
		case 444549672:
			return 5;
			break;
		
		case 1603064898:
			return 6;
			break;
		
		case 240366033:
			return 7;
			break;
		
		case 960137118:
			return 8;
			break;
		
		case 771284519:
			return 9;
			break;
		
		case -1708346067:
			return 10;
			break;
		
		case 283386134:
			return 11;
			break;
		
		case -410464896:
			return 12;
			break;
		
		case 265723083:
			return 13;
			break;
		
		case 1746883687:
			return 14;
			break;
		
		case 1919870950:
			return 15;
			break;
		
		case 1085277077:
			return 16;
			break;
		
		case -666433007:
			return 17;
			break;
		
		case -402413174:
			return 18;
			break;
		
		case -182074418:
			return 19;
			break;
		
		case 116877169:
			return 20;
			break;
		
		case -1609983577:
			return 21;
			break;
		
		case -1312277212:
			return 22;
			break;
		
		case -1091676304:
			return 23;
			break;
		
		case -1394589232:
			return 24;
			break;
		
		case -1095309955:
			return 25;
			break;
		
		case -338772048:
			return 26;
			break;
		
		case 2099578296:
			return 27;
			break;
		
		case 676333254:
			return 28;
			break;
		
		case 1373384483:
			return 29;
			break;
		
		case 310529291:
			return 30;
			break;
		
		case 55291550:
			return 31;
			break;
		
		case -1329398309:
			return 32;
			break;
		
		case 965054819:
			return 33;
			break;
		
		case -1378191490:
			return 34;
			break;
		
		case -1683107035:
			return 35;
			break;
		
		case -580260344:
			return 36;
			break;
		
		case -1088196937:
			return 37;
			break;
		
		case 55862314:
			return 38;
			break;
		
		case 400002352:
			return 39;
			break;
		
		case 560832604:
			return 40;
			break;
		
		case -2138224118:
			return 41;
			break;
		
		case 897484282:
			return 42;
			break;
		
		case 314232747:
			return 43;
			break;
		
		case 1307678422:
			return 46;
			break;
		
		case -208525380:
			return 45;
			break;
		
		case 1646559452:
			return 44;
			break;
		
		case 50707886:
			return 47;
			break;
		
		case 273438779:
			return 48;
			break;
		
		case 1592391033:
			return 49;
			break;
		
		case -319516276:
			return 50;
			break;
		
		case 993865248:
			return 51;
			break;
		
		case 632950117:
			return 52;
			break;
		
		case -443787204:
			return 53;
			break;
		
		case -882105348:
			return 54;
			break;
		
		case -920707230:
			return 55;
			break;
		
		case 246182814:
			return 56;
			break;
		
		case 1804608241:
			return 57;
			break;
		
		case -1496922658:
			return 58;
			break;
	}
	return 0;
}

int func_374(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_375(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	char cVar0[64];
	char cVar1[64];
	
	if (unk_0x03A58B305FFA997E())
	{
		return 1;
	}
	if (iParam8 != 23)
	{
		if (unk_0x6B83F5AE0478286F(iParam7, iParam8) == 0)
		{
			if ((iParam8 >= 0 && iParam8 < 64) && !unk_0xE2D0C323A1AE5D85(Global_4533761[(iParam8 / 32)], (iParam8 % 32)))
			{
				return 1;
			}
		}
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, sParam2, 64);
	StringConCat(&cVar1, "_", 64);
	if (iParam4 == 33)
	{
		if (iParam3 < 0 || iParam3 > 3)
		{
			iParam3 = 0;
		}
	}
	StringIntConCat(&cVar1, iParam3, 64);
	if (iParam6 != -1)
	{
		StringConCat(&cVar1, "_n", 64);
		StringIntConCat(&cVar1, iParam6, 64);
	}
	StringConCat(&cVar1, "_t", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	StringConCat(&cVar1, "_v", 64);
	StringIntConCat(&cVar1, iParam5, 64);
	if (!unk_0x30057DE4703C0DA0(unk_0x2E87280918B16506(&cVar1)))
	{
		return 1;
	}
	return func_147(78225582, -1224924353, unk_0x2E87280918B16506(&cVar1), 478352891, 1, 0, 1, 4, unk_0x2E87280918B16506(&cVar0), 3);
}

int func_376(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (unk_0x15CAA6D7B11F1A7C(iParam0))
	{
		case joaat("revolter"):
		case joaat("savestra"):
		case joaat("comet4"):
		case joaat("viseris"):
			iVar0 = 1;
			break;
		
		case joaat("avenger"):
			iVar0 = 2;
			break;
	}
	return iVar0;
}

int func_377(int iParam0)
{
	switch (iParam0)
	{
		case joaat("faction3"):
			return 12;
			break;
		
		case joaat("diablous"):
			return 4;
			break;
		
		case joaat("fcr"):
			return 4;
			break;
	}
	return func_391(iParam0);
}

int func_378(int iParam0)
{
	switch (iParam0)
	{
		case joaat("btype2"):
			return 9;
			break;
		
		case joaat("lurcher"):
			return 8;
			break;
		
		case joaat("sultanrs"):
			return 6;
			break;
		
		case joaat("banshee2"):
			return 7;
			break;
		
		case joaat("btype3"):
			return 5;
			break;
		
		case joaat("omnis"):
			return 13;
			break;
		
		case joaat("bf400"):
			return 14;
			break;
		
		case joaat("tropos"):
			return 15;
			break;
		
		case joaat("brioso"):
			return 16;
			break;
		
		case joaat("trophytruck"):
			return 17;
			break;
		
		case joaat("trophytruck2"):
			return 18;
			break;
		
		case joaat("cliffhanger"):
			return 19;
			break;
		
		case joaat("tampa2"):
			return 20;
			break;
		
		case joaat("gargoyle"):
			return 21;
			break;
		
		case joaat("le7b"):
			return 22;
			break;
		
		case joaat("lynx"):
			return 24;
			break;
		
		case joaat("sheava"):
			return 25;
			break;
		
		case joaat("diablous2"):
			return 28;
			break;
		
		case joaat("fcr2"):
			return 28;
			break;
		
		case joaat("italigtb2"):
			return 27;
			break;
		
		case joaat("specter2"):
			return 27;
			break;
		
		case joaat("nero2"):
			return 27;
			break;
		
		case joaat("comet3"):
			return 26;
			break;
		
		case joaat("elegy"):
			return 26;
			break;
		
		case joaat("trailerlarge"):
			return 32;
			break;
		
		case joaat("rcbandito"):
			return 39;
			break;
		
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("yosemite3"):
		case joaat("glendale2"):
			return 27;
			break;
	}
	if (func_381(iParam0))
	{
		return 33;
	}
	else if (func_380(iParam0))
	{
		return 34;
	}
	if (func_379(iParam0))
	{
		return 38;
	}
	return 3;
}

int func_379(int iParam0)
{
	switch (iParam0)
	{
		case joaat("scarab"):
		case joaat("bruiser"):
		case joaat("cerberus"):
		case joaat("monster3"):
		case joaat("dominator4"):
		case joaat("impaler2"):
		case joaat("imperator"):
		case joaat("issi4"):
		case joaat("deathbike"):
		case joaat("zr380"):
		case joaat("slamvan4"):
		case joaat("brutus"):
		case joaat("imperator2"):
		case joaat("imperator3"):
		case joaat("deathbike3"):
		case joaat("deathbike2"):
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
			return 1;
		
		default:
	}
	return 0;
}

int func_380(int iParam0)
{
	switch (iParam0)
	{
		case joaat("hunter"):
		case joaat("bombushka"):
		case joaat("volatol"):
		case joaat("akula"):
		case joaat("khanjali"):
		case joaat("strikeforce"):
		case joaat("alkonost"):
		case joaat("annihilator2"):
			return 1;
			break;
	}
	return 0;
}

int func_381(int iParam0)
{
	switch (iParam0)
	{
		case joaat("havok"):
		case joaat("microlight"):
		case joaat("mogul"):
		case joaat("rogue"):
		case joaat("seabreeze"):
		case joaat("tula"):
		case joaat("pyro"):
		case joaat("alphaz1"):
		case joaat("howard"):
		case joaat("starling"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("cuban800"):
		case joaat("avenger"):
		case joaat("thruster"):
		case joaat("riot2"):
		case joaat("chernobog"):
		case joaat("volatol"):
		case joaat("seasparrow"):
		case joaat("seasparrow2"):
			return 1;
			break;
	}
	return 0;
}

int func_382(int iParam0)
{
	switch (iParam0)
	{
		case joaat("virgo2"):
			return 10;
			break;
		
		case joaat("slamvan3"):
			return 11;
			break;
	}
	switch (iParam0)
	{
		case joaat("sultanrs"):
			return 6;
			break;
		
		case joaat("banshee2"):
			return 7;
			break;
	}
	switch (iParam0)
	{
		case joaat("btype3"):
			return 5;
			break;
	}
	switch (iParam0)
	{
		case joaat("faction3"):
			return 3;
			break;
		
		case joaat("minivan2"):
			return 3;
			break;
		
		case joaat("sabregt2"):
			return 3;
			break;
		
		case joaat("slamvan3"):
			return 3;
			break;
		
		case joaat("tornado5"):
			return 3;
			break;
		
		case joaat("virgo2"):
			return 3;
			break;
	}
	switch (iParam0)
	{
		case joaat("diablous2"):
			return 28;
			break;
		
		case joaat("fcr2"):
			return 28;
			break;
		
		case joaat("italigtb2"):
			return 27;
			break;
		
		case joaat("specter2"):
			return 27;
			break;
		
		case joaat("nero2"):
			return 27;
			break;
		
		case joaat("comet3"):
			return 26;
			break;
		
		case joaat("elegy"):
			return 26;
			break;
		
		case joaat("rcbandito"):
			return 39;
			break;
		
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("yosemite3"):
		case joaat("glendale2"):
			return 27;
			break;
	}
	if (func_379(iParam0))
	{
		return 38;
	}
	if (func_383(iParam0))
	{
		return 38;
	}
	return 3;
}

int func_383(int iParam0)
{
	switch (iParam0)
	{
		case 1532171089:
		case -261346873:
		case -619930876:
		case 461465043:
		case -670086588:
		case -915234475:
			return 1;
			break;
	}
	return 0;
}

int func_384(int iParam0)
{
	switch (iParam0)
	{
		case joaat("virgo2"):
			return 10;
			break;
		
		case joaat("slamvan3"):
			return 11;
			break;
	}
	switch (iParam0)
	{
		case joaat("sultanrs"):
			return 6;
			break;
		
		case joaat("banshee2"):
			return 7;
			break;
	}
	switch (iParam0)
	{
		case joaat("btype3"):
			return 5;
			break;
	}
	switch (iParam0)
	{
		case joaat("faction3"):
			return 3;
			break;
		
		case joaat("minivan2"):
			return 0;
			break;
		
		case joaat("sabregt2"):
			return 0;
			break;
		
		case joaat("slamvan3"):
			return 0;
			break;
		
		case joaat("tornado5"):
			return 0;
			break;
		
		case joaat("virgo2"):
			return 3;
			break;
		
		case joaat("virgo3"):
			return 3;
			break;
	}
	switch (iParam0)
	{
		case joaat("fcr"):
			return 0;
			break;
		
		case joaat("diablous"):
			return 0;
			break;
		
		case joaat("diablous2"):
			return 28;
			break;
		
		case joaat("fcr2"):
			return 28;
			break;
		
		case joaat("italigtb"):
			return 3;
			break;
		
		case joaat("specter"):
			return 3;
			break;
		
		case joaat("nero"):
			return 3;
			break;
		
		case joaat("italigtb2"):
			return 27;
			break;
		
		case joaat("specter2"):
			return 27;
			break;
		
		case joaat("nero2"):
			return 27;
			break;
		
		case joaat("comet3"):
			return 26;
			break;
		
		case joaat("elegy"):
			return 26;
			break;
		
		case joaat("youga3"):
			return 27;
			break;
		
		case joaat("gauntlet5"):
			return 27;
			break;
		
		case joaat("manana2"):
			return 27;
			break;
		
		case joaat("peyote3"):
			return 27;
			break;
		
		case joaat("yosemite3"):
			return 27;
			break;
		
		case joaat("glendale2"):
			return 27;
			break;
	}
	switch (iParam0)
	{
		case joaat("apc"):
			return 29;
			break;
		
		case joaat("halftrack"):
			return 29;
			break;
		
		case joaat("trailersmall2"):
			return 29;
			break;
		
		case joaat("deluxo"):
			return 29;
			break;
		
		case joaat("stromberg"):
			return 29;
			break;
		
		case joaat("caracara"):
			return 29;
			break;
		
		case joaat("dune3"):
			return 30;
			break;
		
		case joaat("insurgent3"):
			return 30;
			break;
		
		case joaat("tampa3"):
			return 30;
			break;
		
		case joaat("technical3"):
			return 30;
			break;
		
		case joaat("oppressor"):
			return 31;
			break;
		
		case joaat("oppressor2"):
			return 31;
			break;
		
		case joaat("phantom3"):
			return 32;
			break;
		
		case joaat("hauler2"):
			return 32;
			break;
		
		case joaat("trailerlarge"):
			return 32;
			break;
		
		case joaat("barrage"):
			return 35;
			break;
		
		case joaat("mule4"):
			return 37;
			break;
		
		case joaat("speedo4"):
			return 36;
			break;
		
		case joaat("pounder2"):
			return 36;
			break;
		
		case joaat("rcbandito"):
			return 39;
			break;
		
		case joaat("minitank"):
			return 36;
			break;
		
		case joaat("jb7002"):
			return 36;
			break;
	}
	if (func_381(iParam0))
	{
		return 33;
	}
	else if (func_380(iParam0))
	{
		return 34;
	}
	else if (func_379(iParam0))
	{
		return 38;
	}
	switch (iParam0)
	{
		case joaat("vigilante"):
			return 31;
			break;
		
		case -619930876:
			return 38;
		
		case 1532171089:
			return 38;
		
		case 461465043:
			return 38;
		
		case -261346873:
			return 38;
		
		case -670086588:
			return 38;
		
		case -915234475:
			return 38;
	}
	if (func_385(iParam0))
	{
		return 3;
	}
	if (unk_0x6F0299ED3CEB4E5D(iParam0))
	{
		return 4;
	}
	switch (iParam0)
	{
		case joaat("adder"):
			return 3;
			break;
		
		case joaat("airbus"):
			return 0;
			break;
		
		case joaat("akuma"):
			return 4;
			break;
		
		case joaat("alpha"):
			return 3;
			break;
		
		case joaat("annihilator"):
			return 0;
			break;
		
		case joaat("asea"):
			return 0;
			break;
		
		case joaat("asterope"):
			return 0;
			break;
		
		case joaat("baller2"):
			return 2;
			break;
		
		case joaat("banshee"):
			return 3;
			break;
		
		case joaat("barracks"):
			return 0;
			break;
		
		case joaat("bati"):
			return 4;
			break;
		
		case joaat("bati2"):
			return 4;
			break;
		
		case joaat("besra"):
			return 0;
			break;
		
		case joaat("bfinjection"):
			return 0;
			break;
		
		case joaat("bifta"):
			return 0;
			break;
		
		case joaat("bison"):
			return 2;
			break;
		
		case joaat("blade"):
			return 3;
			break;
		
		case joaat("blazer"):
			return 0;
			break;
		
		case joaat("blazer3"):
			return 0;
			break;
		
		case joaat("bmx"):
			return 0;
			break;
		
		case joaat("bobcatxl"):
			return 2;
			break;
		
		case joaat("bodhi2"):
			return 0;
			break;
		
		case joaat("btype"):
			return 0;
			break;
		
		case joaat("buffalo"):
			return 0;
			break;
		
		case joaat("buffalo2"):
			return 1;
			break;
		
		case joaat("bullet"):
			return 3;
			break;
		
		case joaat("bus"):
			return 0;
			break;
		
		case joaat("buzzard"):
			return 0;
			break;
		
		case joaat("carbonizzare"):
			return 3;
			break;
		
		case joaat("carbonrs"):
			return 3;
			break;
		
		case joaat("cavalcade"):
			return 2;
			break;
		
		case joaat("cavalcade2"):
			return 2;
			break;
		
		case joaat("cheetah"):
			return 3;
			break;
		
		case joaat("coach"):
			return 0;
			break;
		
		case joaat("cogcabrio"):
			return 3;
			break;
		
		case joaat("comet2"):
			return 3;
			break;
		
		case joaat("coquette"):
			return 3;
			break;
		
		case joaat("coquette2"):
			return 1;
			break;
		
		case joaat("cruiser"):
			return 0;
			break;
		
		case joaat("crusader"):
			return 0;
			break;
		
		case joaat("cuban800"):
			return 0;
			break;
		
		case joaat("dilettante"):
			return 0;
			break;
		
		case joaat("dilettante2"):
			return 0;
			break;
		
		case joaat("dominator"):
			return 1;
			break;
		
		case joaat("dominator2"):
			return 1;
			break;
		
		case joaat("double"):
			return 4;
			break;
		
		case joaat("dubsta3"):
			return 3;
			break;
		
		case joaat("dump"):
			return 0;
			break;
		
		case joaat("dune"):
			return 0;
			break;
		
		case joaat("duster"):
			return 0;
			break;
		
		case joaat("elegy2"):
			return 3;
			break;
		
		case joaat("entityxf"):
			return 3;
			break;
		
		case joaat("exemplar"):
			return 3;
			break;
		
		case joaat("f620"):
			return 1;
			break;
		
		case joaat("faggio2"):
			return 4;
			break;
		
		case joaat("felon"):
			return 0;
			break;
		
		case joaat("felon2"):
			return 0;
			break;
		
		case joaat("feltzer2"):
			return 3;
			break;
		
		case joaat("frogger"):
			return 0;
			break;
		
		case joaat("frogger2"):
			return 0;
			break;
		
		case joaat("fugitive"):
			return 0;
			break;
		
		case joaat("fusilade"):
			return 1;
			break;
		
		case joaat("gauntlet"):
			return 0;
			break;
		
		case joaat("gauntlet2"):
			return 0;
			break;
		
		case joaat("glendale"):
			return 3;
			break;
		
		case joaat("granger"):
			return 2;
			break;
		
		case joaat("gresley"):
			return 2;
			break;
		
		case joaat("hexer"):
			return 4;
			break;
		
		case joaat("hotknife"):
			return 3;
			break;
		
		case joaat("huntley"):
			return 1;
			break;
		
		case joaat("hydra"):
			return 0;
			break;
		
		case joaat("infernus"):
			return 3;
			break;
		
		case joaat("ingot"):
			return 0;
			break;
		
		case joaat("intruder"):
			return 0;
			break;
		
		case joaat("issi2"):
			return 0;
			break;
		
		case joaat("jackal"):
			return 1;
			break;
		
		case joaat("jb700"):
			return 3;
			break;
		
		case joaat("jester"):
			return 3;
			break;
		
		case joaat("jester2"):
			return 3;
			break;
		
		case joaat("jetmax"):
			return 0;
			break;
		
		case joaat("journey"):
			return 0;
			break;
		
		case joaat("kalahari"):
			return 0;
			break;
		
		case joaat("khamelion"):
			return 3;
			break;
		
		case joaat("landstalker"):
			return 2;
			break;
		
		case joaat("luxor"):
			return 0;
			break;
		
		case joaat("mammatus"):
			return 0;
			break;
		
		case joaat("marquis"):
			return 0;
			break;
		
		case joaat("massacro"):
			return 3;
			break;
		
		case joaat("massacro2"):
			return 3;
			break;
		
		case joaat("maverick"):
			return 0;
			break;
		
		case joaat("mesa"):
			return 2;
			break;
		
		case joaat("mesa2"):
			return 2;
			break;
		
		case joaat("mesa3"):
			return 2;
			break;
		
		case joaat("miljet"):
			return 0;
			break;
		
		case joaat("minivan"):
			return 0;
			break;
		
		case joaat("monroe"):
			return 3;
			break;
		
		case joaat("monster"):
			return 0;
			break;
		
		case joaat("mule"):
			return 0;
			break;
		
		case joaat("mule2"):
			return 0;
			break;
		
		case joaat("mule3"):
			return 0;
			break;
	}
	switch (iParam0)
	{
		case joaat("nemesis"):
			return 4;
			break;
		
		case joaat("ninef"):
			return 3;
			break;
		
		case joaat("ninef2"):
			return 3;
			break;
		
		case joaat("oracle"):
			return 1;
			break;
		
		case joaat("oracle2"):
			return 1;
			break;
		
		case joaat("panto"):
			return 3;
			break;
		
		case joaat("paradise"):
			return 0;
			break;
		
		case joaat("pcj"):
			return 4;
			break;
		
		case joaat("penumbra"):
			return 1;
			break;
		
		case joaat("picador"):
			return 0;
			break;
		
		case joaat("pigalle"):
			return 3;
			break;
		
		case joaat("premier"):
			return 0;
			break;
		
		case joaat("primo"):
			return 0;
			break;
		
		case joaat("radi"):
			return 0;
			break;
		
		case joaat("rancherxl"):
			return 2;
			break;
		
		case joaat("rancherxl2"):
			return 2;
			break;
		
		case joaat("rapidgt"):
			return 3;
			break;
		
		case joaat("ratloader"):
			return 2;
			break;
		
		case joaat("ratloader2"):
			return 2;
			break;
		
		case joaat("rebel"):
			return 2;
			break;
		
		case joaat("rebel2"):
			return 2;
			break;
		
		case joaat("regina"):
			return 0;
			break;
		
		case joaat("rentalbus"):
			return 0;
			break;
		
		case joaat("rhapsody"):
			return 3;
			break;
		
		case joaat("rhino"):
			return 0;
			break;
		
		case joaat("rocoto"):
			return 2;
			break;
		
		case joaat("ruffian"):
			return 4;
			break;
		
		case joaat("rumpo"):
			return 0;
			break;
		
		case joaat("sadler"):
			return 2;
			break;
		
		case joaat("sanchez"):
			return 4;
			break;
		
		case joaat("sanchez2"):
			return 4;
			break;
		
		case joaat("sandking"):
			return 2;
			break;
		
		case joaat("sandking2"):
			return 2;
			break;
		
		case joaat("schafter2"):
			return 1;
			break;
		
		case joaat("schwarzer"):
			return 1;
			break;
		
		case joaat("scorcher"):
			return 0;
			break;
		
		case joaat("seashark"):
			return 0;
			break;
		
		case joaat("seminole"):
			return 2;
			break;
		
		case joaat("sentinel"):
			return 1;
			break;
		
		case joaat("sentinel2"):
			return 1;
			break;
		
		case joaat("shamal"):
			return 0;
			break;
		
		case joaat("sovereign"):
			return 4;
			break;
		
		case joaat("speeder"):
			return 0;
			break;
		
		case joaat("squalo"):
			return 0;
			break;
		
		case joaat("stanier"):
			return 0;
			break;
		
		case joaat("stinger"):
			return 3;
			break;
		
		case joaat("stingergt"):
			return 3;
			break;
		
		case joaat("stratum"):
			return 0;
			break;
		
		case joaat("stretch"):
			return 0;
			break;
		
		case joaat("stunt"):
			return 0;
			break;
		
		case joaat("suntrap"):
			return 0;
			break;
		
		case joaat("superd"):
			return 3;
			break;
		
		case joaat("surano"):
			return 3;
			break;
		
		case joaat("surfer"):
			return 0;
			break;
		
		case joaat("surge"):
			return 0;
			break;
		
		case joaat("tailgater"):
			return 0;
			break;
		
		case joaat("thrust"):
			return 4;
			break;
		
		case joaat("titan"):
			return 0;
			break;
		
		case joaat("tribike"):
			return 4;
			break;
		
		case joaat("tribike2"):
			return 4;
			break;
		
		case joaat("tribike3"):
			return 4;
			break;
		
		case joaat("tropic"):
			return 0;
			break;
		
		case joaat("turismor"):
			return 3;
			break;
		
		case joaat("vacca"):
			return 3;
			break;
		
		case joaat("vader"):
			return 4;
			break;
		
		case joaat("valkyrie"):
			return 0;
			break;
		
		case joaat("velum"):
			return 0;
			break;
		
		case joaat("vestra"):
			return 0;
			break;
		
		case joaat("vigero"):
			return 1;
			break;
		
		case joaat("voltic"):
			return 3;
			break;
		
		case joaat("warrener"):
			return 3;
			break;
		
		case joaat("washington"):
			return 0;
			break;
		
		case joaat("youga"):
			return 2;
			break;
		
		case joaat("zentorno"):
			return 3;
			break;
		
		case joaat("zion"):
			return 1;
			break;
		
		case joaat("zion2"):
			return 1;
			break;
		
		case joaat("ztype"):
			return 3;
			break;
		
		case joaat("swift"):
			return 0;
			break;
		
		case joaat("innovation"):
			return 4;
			break;
		
		case joaat("hakuchou"):
			return 4;
			break;
		
		case joaat("furoregt"):
			return 0;
			break;
		
		case joaat("kuruma"):
			return 3;
			break;
		
		case joaat("blista2"):
			return 0;
			break;
		
		case joaat("blista3"):
			return 0;
			break;
		
		case joaat("buffalo3"):
			return 1;
			break;
		
		case joaat("dodo"):
			return 0;
			break;
		
		case joaat("dominator"):
			return 1;
			break;
		
		case joaat("dominator2"):
			return 1;
			break;
		
		case joaat("dukes"):
			return 1;
			break;
		
		case joaat("dukes2"):
			return 0;
			break;
		
		case joaat("marshall"):
			return 0;
			break;
		
		case joaat("stalion"):
			return 0;
			break;
		
		case joaat("stalion2"):
			return 0;
			break;
		
		case joaat("submersible"):
			return 0;
			break;
		
		case joaat("submersible2"):
			return 0;
			break;
	}
	switch (iParam0)
	{
		case joaat("bagger"):
			return 4;
			break;
		
		case joaat("baller"):
			return 2;
			break;
		
		case joaat("bjxl"):
			return 2;
			break;
		
		case joaat("blista"):
			return 0;
			break;
		
		case joaat("blista2"):
			return 0;
			break;
		
		case joaat("buccaneer"):
			return 0;
			break;
		
		case joaat("daemon"):
			return 4;
			break;
		
		case joaat("dloader"):
			return 0;
			break;
		
		case joaat("fq2"):
			return 0;
			break;
		
		case joaat("habanero"):
			return 0;
			break;
		
		case joaat("manana"):
			return 0;
			break;
		
		case joaat("patriot"):
			return 2;
			break;
		
		case joaat("peyote"):
			return 0;
			break;
		
		case joaat("phoenix"):
			return 0;
			break;
		
		case joaat("prairie"):
			return 0;
			break;
		
		case joaat("sabregt"):
			return 0;
			break;
		
		case joaat("serrano"):
			return 2;
			break;
		
		case joaat("speedo"):
			return 0;
			break;
		
		case joaat("speedo2"):
			return 0;
			break;
		
		case joaat("voodoo2"):
			return 0;
			break;
		
		case joaat("romero"):
			return 0;
			break;
		
		case joaat("surfer2"):
			return 0;
			break;
		
		case joaat("emperor2"):
			return 0;
			break;
		
		case joaat("dubsta2"):
			return 2;
			break;
		
		case joaat("blazer2"):
			return 0;
			break;
		
		case joaat("oracle2"):
			return 1;
			break;
		
		case joaat("cavalcade2"):
			return 2;
			break;
		
		case joaat("dubsta"):
			return 2;
			break;
		
		case joaat("rapidgt2"):
			return 1;
			break;
		
		case joaat("boxville4"):
			return 0;
			break;
		
		case joaat("mesa"):
			return 2;
			break;
	}
	switch (iParam0)
	{
		case joaat("windsor"):
		case joaat("osiris"):
		case joaat("feltzer3"):
		case joaat("virgo"):
			return 3;
			break;
		
		case joaat("faction"):
		case joaat("faction2"):
		case joaat("moonbeam2"):
		case joaat("moonbeam"):
			return 3;
			break;
		
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 0;
			break;
		
		case joaat("btype2"):
		case joaat("lurcher"):
			return 3;
			break;
		
		case joaat("omnis"):
		case joaat("tropos"):
		case joaat("brioso"):
		case joaat("trophytruck"):
		case joaat("trophytruck2"):
		case joaat("cliffhanger"):
		case joaat("bf400"):
		case joaat("rallytruck"):
		case joaat("tampa2"):
		case joaat("gargoyle"):
		case joaat("tyrus"):
		case joaat("le7b"):
		case joaat("lynx"):
		case joaat("sheava"):
		case joaat("ardent"):
		case joaat("cheetah2"):
		case joaat("torero"):
		case joaat("vagner"):
		case joaat("xa21"):
			return 3;
			break;
		
		case joaat("contender"):
			return 2;
			break;
		
		case joaat("tampa3"):
		case joaat("apc"):
		case joaat("halftrack"):
		case joaat("dune3"):
		case joaat("trailersmall2"):
		case joaat("insurgent3"):
		case joaat("technical3"):
		case joaat("sentinel3"):
		case joaat("riata"):
			return 3;
			break;
		
		case joaat("gb200"):
		case joaat("issi3"):
		case joaat("swinger"):
		case joaat("patriot2"):
		case joaat("menacer"):
		case joaat("freecrawler"):
		case joaat("stafford"):
		case joaat("scramjet"):
		case joaat("terbyte"):
		case joaat("clique"):
		case joaat("deveste"):
		case joaat("deviant"):
		case joaat("impaler"):
		case joaat("scarab"):
		case joaat("schlagen"):
		case joaat("toros"):
		case joaat("vamos"):
		case joaat("tulip"):
		case joaat("monster3"):
		case joaat("impaler2"):
		case joaat("bruiser"):
		case joaat("cerberus"):
		case joaat("dominator4"):
		case joaat("imperator"):
		case joaat("issi4"):
		case joaat("italigto"):
		case joaat("deathbike"):
		case joaat("slamvan4"):
		case joaat("zr380"):
		case joaat("brutus"):
		case joaat("lguard"):
		case joaat("blazer2"):
		case joaat("firetruk"):
		case joaat("burrito2"):
		case joaat("boxville"):
		case joaat("stockade"):
		case joaat("asbo"):
		case joaat("kanjo"):
		case joaat("formula"):
		case joaat("imorgon"):
		case joaat("komoda"):
		case joaat("manana2"):
		case joaat("rebla"):
		case joaat("sugoi"):
		case joaat("youga3"):
		case joaat("zhaba"):
		case joaat("vstr"):
		case joaat("everon"):
		case joaat("sultan2"):
		case joaat("jb7002"):
		case joaat("outlaw"):
		case joaat("stryder"):
		case joaat("vagrant"):
		case joaat("formula2"):
		case joaat("furia"):
		case joaat("yosemite2"):
		case joaat("retinue2"):
		case joaat("minitank"):
		case joaat("gauntlet5"):
		case joaat("club"):
		case joaat("dukes3"):
		case joaat("manchez2"):
		case joaat("brioso2"):
		case joaat("winky"):
		case joaat("verus"):
		case joaat("avisa"):
		case joaat("longfin"):
		case joaat("patrolboat"):
		case joaat("seasparrow3"):
		case joaat("slamtruck"):
		case joaat("vetir"):
		case joaat("italirsx"):
		case joaat("toreador"):
		case joaat("weevil"):
		case joaat("dinghy5"):
		case joaat("squaddie"):
		case joaat("veto"):
		case joaat("veto2"):
		case joaat("calico"):
		case joaat("comet6"):
		case joaat("cypher"):
		case joaat("dominator7"):
		case joaat("jester4"):
		case joaat("remus"):
		case joaat("vectre"):
		case joaat("zr350"):
		case joaat("warrener2"):
		case joaat("rt3000"):
		case joaat("peyote3"):
		case joaat("yosemite3"):
		case joaat("glendale2"):
		case joaat("penumbra2"):
		case joaat("landstalker2"):
		case joaat("seminole2"):
		case joaat("tigon"):
		case joaat("openwheel1"):
		case joaat("coquette4"):
		case joaat("openwheel2"):
		case joaat("futo2"):
		case joaat("tailgater2"):
		case joaat("sultan3"):
		case joaat("dominator8"):
		case joaat("euros"):
		case joaat("growler"):
		case joaat("previon"):
		case 359875117:
		case 629969764:
		case 1141395928:
		case -1444114309:
		case 1486521356:
		case 655665811:
		case -1527436269:
		case 1343932732:
		case 662793086:
			return 3;
			break;
	}
	return 0;
}

int func_385(int iParam0)
{
	switch (iParam0)
	{
		case joaat("adder"):
		case joaat("banshee"):
		case joaat("bullet"):
		case joaat("carbonizzare"):
		case joaat("carbonrs"):
		case joaat("cheetah"):
		case joaat("cogcabrio"):
		case joaat("comet2"):
		case joaat("coquette"):
		case joaat("elegy2"):
		case joaat("entityxf"):
		case joaat("exemplar"):
		case joaat("feltzer2"):
		case joaat("hotknife"):
		case joaat("infernus"):
		case joaat("jb700"):
		case joaat("khamelion"):
		case joaat("monroe"):
		case joaat("ninef"):
		case joaat("ninef2"):
		case joaat("rapidgt"):
		case joaat("rapidgt2"):
		case joaat("stinger"):
		case joaat("stingergt"):
		case joaat("superd"):
		case joaat("surano"):
		case joaat("vacca"):
		case joaat("voltic"):
		case joaat("ztype"):
		case joaat("dubsta3"):
		case joaat("blade"):
		case joaat("glendale"):
		case joaat("rhapsody"):
		case joaat("warrener"):
		case joaat("panto"):
		case joaat("pigalle"):
		case joaat("casco"):
		case joaat("kuruma2"):
		case joaat("lectro"):
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("technical"):
			return 1;
			break;
		
		case joaat("windsor"):
		case joaat("osiris"):
		case joaat("feltzer3"):
		case joaat("virgo"):
			return 1;
			break;
		
		case joaat("faction"):
		case joaat("faction2"):
		case joaat("moonbeam"):
		case joaat("moonbeam2"):
			return 1;
			break;
		
		case joaat("faction3"):
		case joaat("virgo2"):
			return 1;
			break;
		
		case joaat("baller3"):
		case joaat("baller4"):
		case joaat("cognoscenti"):
		case joaat("cog55"):
		case joaat("limo2"):
		case joaat("mamba"):
		case joaat("nightshade"):
		case joaat("schafter3"):
		case joaat("schafter4"):
		case joaat("verlierer2"):
			return 1;
			break;
		
		case joaat("tampa"):
			return 1;
			break;
		
		case joaat("banshee2"):
			return 1;
			break;
		
		case joaat("bestiagts"):
		case joaat("brickade"):
		case joaat("fmj"):
		case joaat("nimbus"):
		case joaat("pfister811"):
		case joaat("prototipo"):
		case joaat("rumpo3"):
		case joaat("seven70"):
		case joaat("tug"):
		case joaat("volatus"):
		case joaat("windsor2"):
		case joaat("xls"):
		case joaat("xls2"):
		case joaat("reaper"):
			return 1;
			break;
		
		case joaat("omnis"):
		case joaat("tropos"):
		case joaat("brioso"):
		case joaat("trophytruck"):
		case joaat("trophytruck2"):
		case joaat("cliffhanger"):
		case joaat("bf400"):
		case joaat("rallytruck"):
		case joaat("tampa2"):
		case joaat("gargoyle"):
		case joaat("tyrus"):
		case joaat("le7b"):
		case joaat("lynx"):
		case joaat("sheava"):
			return 1;
			break;
		
		case joaat("avarus"):
		case joaat("defiler"):
		case joaat("nightblade"):
		case joaat("zombiea"):
		case joaat("zombieb"):
		case joaat("chimera"):
		case joaat("esskey"):
		case joaat("ratbike"):
		case joaat("hakuchou2"):
		case joaat("daemon2"):
		case joaat("shotaro"):
		case joaat("raptor"):
		case joaat("blazer4"):
		case joaat("sanctus"):
		case joaat("vortex"):
		case joaat("manchez"):
		case joaat("tornado6"):
		case joaat("youga2"):
		case joaat("wolfsbane"):
		case joaat("faggio3"):
		case joaat("faggio"):
			return 1;
			break;
		
		case joaat("blazer5"):
		case joaat("boxville5"):
		case joaat("comet3"):
		case joaat("diablous"):
		case joaat("diablous2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("fcr"):
		case joaat("fcr2"):
		case joaat("italigtb"):
		case joaat("nero"):
		case joaat("penetrator"):
		case joaat("phantom2"):
		case joaat("ruiner2"):
		case joaat("technical2"):
		case joaat("tempesta"):
		case joaat("voltic2"):
		case joaat("wastelander"):
		case joaat("elegy"):
		case joaat("italigtb2"):
		case joaat("nero2"):
		case joaat("ruiner3"):
		case joaat("specter"):
		case joaat("specter2"):
			return 1;
			break;
		
		case joaat("gp1"):
		case joaat("ruston"):
		case joaat("infernus2"):
		case joaat("turismo2"):
			return 1;
			break;
		
		case joaat("ardent"):
		case joaat("vagner"):
		case joaat("cheetah2"):
		case joaat("nightshark"):
		case joaat("torero"):
		case joaat("xa21"):
		case joaat("tampa3"):
		case joaat("apc"):
		case joaat("halftrack"):
		case joaat("dune3"):
		case joaat("trailersmall2"):
		case joaat("insurgent3"):
		case joaat("technical3"):
		case joaat("phantom3"):
		case joaat("hauler2"):
			return 1;
			break;
		
		case joaat("cyclone"):
		case joaat("rapidgt3"):
		case joaat("retinue"):
		case joaat("visione"):
		case joaat("vigilante"):
			return 1;
			break;
		
		case joaat("deluxo"):
		case joaat("stromberg"):
		case joaat("riot2"):
		case joaat("chernobog"):
		case joaat("khanjali"):
		case joaat("akula"):
		case joaat("thruster"):
		case joaat("avenger"):
		case joaat("barrage"):
		case joaat("volatol"):
		case joaat("comet4"):
		case joaat("neon"):
		case joaat("streiter"):
		case joaat("sentinel3"):
		case joaat("yosemite"):
		case joaat("sc1"):
		case joaat("autarch"):
		case joaat("gt500"):
		case joaat("hustler"):
		case joaat("revolter"):
		case joaat("pariah"):
		case joaat("raiden"):
		case joaat("savestra"):
		case joaat("riata"):
		case joaat("hermes"):
		case joaat("comet5"):
		case joaat("z190"):
		case joaat("viseris"):
		case joaat("kamacho"):
			return 1;
			break;
	}
	switch (iParam0)
	{
		case joaat("gb200"):
		case joaat("issi3"):
		case joaat("ellie"):
		case joaat("fagaloa"):
		case joaat("michelli"):
		case joaat("flashgt"):
		case joaat("hotring"):
		case joaat("tezeract"):
		case joaat("tyrant"):
		case joaat("dominator3"):
		case joaat("taipan"):
		case joaat("entity2"):
		case joaat("jester3"):
		case joaat("cheburek"):
		case joaat("caracara"):
		case joaat("seasparrow"):
		case joaat("clique"):
		case joaat("deveste"):
		case joaat("deviant"):
		case joaat("impaler"):
		case joaat("scarab"):
		case joaat("schlagen"):
		case joaat("toros"):
		case joaat("vamos"):
		case joaat("tulip"):
		case joaat("monster3"):
		case joaat("impaler2"):
		case joaat("bruiser"):
		case joaat("cerberus"):
		case joaat("dominator4"):
		case joaat("imperator"):
		case joaat("issi4"):
		case joaat("italigto"):
		case joaat("deathbike"):
		case joaat("slamvan4"):
		case joaat("brutus"):
		case joaat("imperator2"):
		case joaat("imperator3"):
		case joaat("deathbike3"):
		case joaat("deathbike2"):
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
		case joaat("rcbandito"):
		case joaat("caracara2"):
		case joaat("drafter"):
		case joaat("dynasty"):
		case joaat("gauntlet3"):
		case joaat("gauntlet4"):
		case joaat("hellion"):
		case joaat("issi7"):
		case joaat("krieger"):
		case joaat("locust"):
		case joaat("nebula"):
		case joaat("neo"):
		case joaat("novak"):
		case joaat("s80"):
		case joaat("thrax"):
		case joaat("zion3"):
		case joaat("zorrusso"):
		case joaat("emerus"):
		case joaat("peyote2"):
		case joaat("rrocket"):
		case joaat("jugular"):
		case joaat("paragon"):
		case joaat("paragon2"):
		case joaat("slamvan2"):
		case joaat("asbo"):
		case joaat("kanjo"):
		case joaat("formula"):
		case joaat("imorgon"):
		case joaat("komoda"):
		case joaat("manana2"):
		case joaat("rebla"):
		case joaat("sugoi"):
		case joaat("youga3"):
		case joaat("zhaba"):
		case joaat("vstr"):
		case joaat("everon"):
		case joaat("sultan2"):
		case joaat("jb7002"):
		case joaat("outlaw"):
		case joaat("stryder"):
		case joaat("vagrant"):
		case joaat("formula2"):
		case joaat("minitank"):
		case joaat("gauntlet5"):
		case joaat("dukes3"):
		case joaat("club"):
		case joaat("peyote3"):
		case joaat("glendale2"):
		case joaat("penumbra2"):
		case joaat("landstalker2"):
		case joaat("seminole2"):
		case joaat("tigon"):
		case joaat("openwheel1"):
		case joaat("coquette4"):
		case joaat("openwheel2"):
		case joaat("manchez2"):
		case joaat("brioso2"):
		case joaat("winky"):
		case joaat("verus"):
		case joaat("alkonost"):
		case joaat("avisa"):
		case joaat("longfin"):
		case joaat("patrolboat"):
		case joaat("seasparrow2"):
		case joaat("seasparrow3"):
		case joaat("slamtruck"):
		case joaat("vetir"):
		case joaat("kosatka"):
		case joaat("italirsx"):
		case joaat("toreador"):
		case joaat("weevil"):
		case joaat("dinghy5"):
		case joaat("annihilator2"):
		case joaat("squaddie"):
		case joaat("veto"):
		case joaat("veto2"):
		case joaat("calico"):
		case joaat("comet6"):
		case joaat("cypher"):
		case joaat("dominator7"):
		case joaat("jester4"):
		case joaat("remus"):
		case joaat("vectre"):
		case joaat("zr350"):
		case joaat("warrener2"):
		case joaat("rt3000"):
		case joaat("futo2"):
		case joaat("tailgater2"):
		case joaat("sultan3"):
		case joaat("dominator8"):
		case joaat("euros"):
		case joaat("growler"):
		case joaat("previon"):
		case 359875117:
		case 629969764:
		case -619930876:
		case 1141395928:
		case 1532171089:
		case -261346873:
		case -1444114309:
		case 461465043:
		case -670086588:
		case 1486521356:
		case 655665811:
		case 1343932732:
		case -915234475:
		case 662793086:
		case 1993851908:
		case 1353120668:
			return 1;
			break;
	}
	return 0;
}

int func_386(int iParam0, char* sParam1, int iParam2)
{
	char cVar0[64];
	
	if (unk_0x03A58B305FFA997E())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	if (!unk_0x30057DE4703C0DA0(iParam2))
	{
		return 1;
	}
	return func_147(78225582, -1224924353, iParam2, 478352891, 1, 0, 1, 4, unk_0x2E87280918B16506(&cVar0), 3);
}

int func_387(int iParam0)
{
	char cVar0[32];
	
	StringCopy(&cVar0, "VEM_", 32);
	switch (iParam0)
	{
		case 0:
			StringConCat(&cVar0, "MCT_METALLIC", 32);
			break;
		
		case 1:
			StringConCat(&cVar0, "MCT_CLASSIC", 32);
			break;
		
		case 2:
			StringConCat(&cVar0, "MCT_PEARLESCENT", 32);
			break;
		
		case 3:
			StringConCat(&cVar0, "MCT_MATTE", 32);
			break;
		
		case 4:
			StringConCat(&cVar0, "MCT_METALS", 32);
			break;
		
		case 5:
			StringConCat(&cVar0, "MCT_CHROME", 32);
			break;
		
		case 7:
			StringConCat(&cVar0, "MCT_INVALID", 32);
			iParam0 = 255;
			break;
	}
	StringConCat(&cVar0, "_t", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_v0", 32);
	return unk_0x2E87280918B16506(&cVar0);
}

int func_388(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	char cVar0[64];
	char cVar1[64];
	
	if (unk_0x03A58B305FFA997E())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringConCat(&cVar1, "VEM_", 64);
	if (iParam3 == 1)
	{
		StringConCat(&cVar1, "COLOUR_1_", 64);
	}
	else if (iParam3 == 2)
	{
		StringConCat(&cVar1, "COLOUR_2_", 64);
	}
	else if (iParam3 == 3)
	{
		StringConCat(&cVar1, "COLOUR_EXTRA_1_", 64);
	}
	if (iParam6 == 5)
	{
		StringConCat(&cVar1, "MCT_CHROME_", 64);
	}
	else if (iParam6 == 1)
	{
		StringConCat(&cVar1, "MCT_CLASSIC_", 64);
	}
	else if (iParam6 == 0)
	{
		StringConCat(&cVar1, "MCT_METALLIC_", 64);
	}
	else if (iParam6 == 4)
	{
		StringConCat(&cVar1, "MCT_METALS_", 64);
	}
	else if (iParam6 == 3)
	{
		StringConCat(&cVar1, "MCT_MATTE_", 64);
	}
	else if (iParam6 == 2)
	{
		StringConCat(&cVar1, "MCT_PEARLESCENT_", 64);
	}
	else if (iParam6 == 7)
	{
		StringConCat(&cVar1, "MCT_NONE_", 64);
	}
	StringConCat(&cVar1, sParam2, 64);
	StringConCat(&cVar1, "_t", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	StringConCat(&cVar1, "_v", 64);
	StringIntConCat(&cVar1, iParam5, 64);
	if (iParam6 == 7)
	{
		StringCopy(&cVar1, "VEM_COLOUR_MCT_NONE_", 64);
		StringIntConCat(&cVar1, iParam7, 64);
	}
	if (!unk_0x30057DE4703C0DA0(unk_0x2E87280918B16506(&cVar1)))
	{
		return 1;
	}
	return func_147(78225582, -1224924353, unk_0x2E87280918B16506(&cVar1), 478352891, 1, 0, 1, 4, unk_0x2E87280918B16506(&cVar0), 3);
}

void func_389(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, bool bParam11)
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	var uVar9;
	
	unk_0xDCA20DBA52B32EEC(iParam0, iParam3, iParam6);
	unk_0x356C37F1AA6EA3AA(iParam0, iParam9, uParam10);
	StringCopy(sParam2, "", 16);
	StringCopy(sParam5, "", 16);
	StringCopy(sParam8, "", 16);
	if (bParam11)
	{
		unk_0x0595A3CF1BA9C95C(iParam0, iParam1, &uVar0, &uVar2);
		unk_0xB0800355BAB891DD(iParam0, iParam4, &uVar1);
	}
	if (bParam11)
	{
		iVar3 = 0;
		while (iVar3 != 7)
		{
			iVar5 = unk_0xED439E3CAC3259F9(iVar3, 1);
			iVar4 = 0;
			while (iVar4 < iVar5)
			{
				unk_0xF8359E159A574462(iParam0, iVar3, iVar4, uVar2);
				unk_0xDCA20DBA52B32EEC(iParam0, &iVar6, &uVar9);
				if (iVar6 == *iParam3)
				{
					*iParam1 = iVar3;
					StringCopy(sParam2, unk_0xF2E12EEFB9AFFE62(iParam0, 0), 16);
					iVar4 = iVar5 + 1;
				}
				iVar4++;
			}
			if (unk_0xACC32B78196FBC2A(sParam2))
			{
				iVar3++;
			}
			else
			{
				iVar3 = 7;
			}
		}
	}
	if (unk_0xACC32B78196FBC2A(sParam2))
	{
		*iParam1 = 7;
		IntToString(sParam2, *iParam3, 16);
	}
	if (bParam11)
	{
		iVar4 = 0;
		iVar5 = unk_0xED439E3CAC3259F9(0, 1);
		iVar4 = 0;
		while (iVar4 < iVar5)
		{
			unk_0xF8359E159A574462(iParam0, 0, iVar4, iVar4);
			unk_0x356C37F1AA6EA3AA(iParam0, &iVar8, &uVar9);
			if (iVar8 == *iParam9)
			{
				StringCopy(sParam8, unk_0xF2E12EEFB9AFFE62(iParam0, 0), 16);
				iVar4 = iVar5 + 1;
			}
			iVar4++;
		}
	}
	if (unk_0xACC32B78196FBC2A(sParam8))
	{
		IntToString(sParam8, *iParam9, 16);
		*iParam7 = 7;
	}
	else
	{
		*iParam7 = *iParam1;
	}
	if (bParam11)
	{
		iVar3 = 0;
		while (iVar3 != 7)
		{
			iVar4 = 0;
			iVar5 = unk_0xED439E3CAC3259F9(iVar3, 1);
			iVar4 = 0;
			while (iVar4 < iVar5)
			{
				unk_0x774AD997BB23CD05(iParam0, iVar3, iVar4);
				unk_0xDCA20DBA52B32EEC(iParam0, &uVar9, &iVar7);
				if (iVar7 == *iParam6)
				{
					*iParam4 = iVar3;
					StringCopy(sParam5, unk_0xBE5387F9B686EAB0(iParam0), 16);
					iVar4 = iVar5 + 1;
				}
				iVar4++;
			}
			if (unk_0xACC32B78196FBC2A(sParam5))
			{
				iVar3++;
			}
			else
			{
				iVar3 = 7;
			}
		}
	}
	if (unk_0xACC32B78196FBC2A(sParam5))
	{
		*iParam4 = 7;
		IntToString(sParam5, *iParam6, 16);
	}
	unk_0x58DAFDEB2F46A5EA(iParam0, *iParam3, *iParam6);
	unk_0x952B5201CC721090(iParam0, *iParam9, *uParam10);
}

int func_390(int iParam0)
{
	if (iParam0 == joaat("bmx"))
	{
		return 1;
	}
	if (iParam0 == joaat("cruiser"))
	{
		return 1;
	}
	if (iParam0 == joaat("scorcher"))
	{
		return 1;
	}
	if ((iParam0 == joaat("tribike") || iParam0 == joaat("tribike2")) || iParam0 == joaat("tribike3"))
	{
		return 1;
	}
	if (iParam0 == joaat("fixter"))
	{
		return 1;
	}
	return 0;
}

int func_391(int iParam0)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("moonbeam2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("primo2"):
		case joaat("voodoo"):
		case joaat("sultanrs"):
		case joaat("banshee2"):
		case joaat("btype3"):
		case joaat("faction3"):
		case joaat("minivan2"):
		case joaat("sabregt2"):
		case joaat("slamvan3"):
		case joaat("tornado5"):
		case joaat("virgo2"):
		case joaat("diablous2"):
		case joaat("fcr2"):
		case joaat("italigtb2"):
		case joaat("specter2"):
		case joaat("nero2"):
		case joaat("comet3"):
		case joaat("elegy"):
		case joaat("apc"):
		case joaat("halftrack"):
		case joaat("trailersmall2"):
		case joaat("dune3"):
		case joaat("insurgent3"):
		case joaat("tampa3"):
		case joaat("technical3"):
		case joaat("oppressor"):
		case joaat("trailerlarge"):
		case joaat("hauler2"):
		case joaat("phantom3"):
		case joaat("bombushka"):
		case joaat("hunter"):
		case joaat("microlight"):
		case joaat("rogue"):
		case joaat("tula"):
		case joaat("havok"):
		case joaat("mogul"):
		case joaat("starling"):
		case joaat("seabreeze"):
		case joaat("cyclone"):
		case joaat("visione"):
		case joaat("vigilante"):
		case joaat("rapidgt3"):
		case joaat("retinue"):
		case joaat("alphaz1"):
		case joaat("howard"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("pyro"):
		case joaat("cuban800"):
		case joaat("akula"):
		case joaat("volatol"):
		case joaat("avenger"):
		case joaat("barrage"):
		case joaat("chernobog"):
		case joaat("deluxo"):
		case joaat("khanjali"):
		case joaat("riot2"):
		case joaat("stromberg"):
		case joaat("thruster"):
		case joaat("caracara"):
		case joaat("seasparrow"):
		case joaat("mule4"):
		case joaat("pounder2"):
		case joaat("speedo4"):
		case joaat("oppressor2"):
		case joaat("strikeforce"):
		case joaat("clique"):
		case joaat("deveste"):
		case joaat("deviant"):
		case joaat("impaler"):
		case joaat("scarab"):
		case joaat("schlagen"):
		case joaat("toros"):
		case joaat("vamos"):
		case joaat("tulip"):
		case joaat("monster3"):
		case joaat("impaler2"):
		case joaat("bruiser"):
		case joaat("cerberus"):
		case joaat("dominator4"):
		case joaat("imperator"):
		case joaat("issi4"):
		case joaat("italigto"):
		case joaat("deathbike"):
		case joaat("slamvan4"):
		case joaat("zr380"):
		case joaat("brutus"):
		case joaat("rcbandito"):
		case joaat("jb7002"):
		case joaat("minitank"):
		case joaat("formula"):
		case joaat("formula2"):
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("yosemite3"):
		case joaat("glendale2"):
		case joaat("seasparrow2"):
		case joaat("alkonost"):
		case joaat("annihilator2"):
		case joaat("sultan3"):
		case -619930876:
		case 1532171089:
		case 461465043:
		case -261346873:
		case -670086588:
		case -915234475:
			return 3;
			break;
	}
	if (func_379(iParam0))
	{
		return 3;
	}
	return func_384(iParam0);
}

int func_392(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	struct<4> Var1;
	char* sVar2;
	
	iVar0 = func_384(iParam0);
	StringCopy(&Var1, unk_0x01E2429B82E280E6(iParam0), 16);
	if (bParam1)
	{
		func_393(&sVar2, Var1, iParam0, 4, 1, iVar0, iParam2, -1, 0, bParam3);
	}
	else
	{
		func_393(&sVar2, Var1, iParam0, 4, 0, iVar0, iParam2, -1, 0, bParam3);
	}
	return unk_0x2E87280918B16506(&sVar2);
}

void func_393(char* sParam0, char[8] cParam1, char[4] cParam2, char[4] cParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11)
{
	switch (unk_0x2E87280918B16506(&cParam1))
	{
		case 64715401:
		case joaat("GSA_TYPE_R"):
			StringCopy(&cParam1, "GSA_TYPE_R", 16);
			break;
		
		case -414529079:
		case joaat("GSA_TYPE_C"):
			StringCopy(&cParam1, "GSA_TYPE_C", 16);
			break;
		
		case 336264847:
		case joaat("GSA_TYPE_RO"):
			StringCopy(&cParam1, "GSA_TYPE_RO", 16);
			break;
		
		case 531395379:
		case joaat("GSA_TYPE_CH"):
			StringCopy(&cParam1, "GSA_TYPE_CH", 16);
			break;
		
		case 1034118160:
		case joaat("GSA_TYPE_G"):
			StringCopy(&cParam1, "GSA_TYPE_G", 16);
			break;
		
		case -218834291:
		case joaat("GSA_TYPE_B"):
			StringCopy(&cParam1, "GSA_TYPE_B", 16);
			break;
		
		case 1779531303:
		case joaat("GSA_TYPE_FW"):
			StringCopy(&cParam1, "GSA_TYPE_FW", 16);
			break;
	}
	StringCopy(sParam0, "", 64);
	switch (iParam5)
	{
		case 0:
			if (iParam4 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam4 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_HA_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam6, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam7, 64);
			break;
		
		case 1:
			if (iParam4 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam4 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_CL_", 64);
			if (iParam6 == 12)
			{
				StringConCat(sParam0, "OUTFIT_", 64);
			}
			StringConCat(sParam0, &cParam1, 64);
			if (iParam8 != -1)
			{
				StringConCat(sParam0, "_n", 64);
				StringIntConCat(sParam0, iParam8, 64);
			}
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam6, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam7, 64);
			if (iParam9 != -1)
			{
				StringConCat(sParam0, "_p", 64);
				StringIntConCat(sParam0, iParam9, 64);
			}
			break;
		
		case 2:
			if (iParam4 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam4 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_TA_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam6, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam7, 64);
			break;
		
		case 3:
			StringConCat(sParam0, "WP_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam6, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam7, 64);
			if (iParam8 != -1)
			{
				StringConCat(sParam0, "_n", 64);
				StringIntConCat(sParam0, iParam8, 64);
			}
			break;
		
		case 4:
			if (iParam4 == Global_74982)
			{
				StringCopy(sParam0, "VE_BIG_YACHT_t0_v0", 64);
			}
			else if (iParam4 == Global_74983)
			{
				StringCopy(sParam0, "VE_BIG_TRUCK_t0_v0", 64);
			}
			else if (iParam4 == Global_74984)
			{
				StringCopy(sParam0, "VE_BALLISTIC_EQUIPMENT_t0_v0", 64);
			}
			else if (iParam4 == Global_74985)
			{
				StringCopy(sParam0, "VE_BIG_PLANE_t0_v0", 64);
			}
			else if (iParam4 == Global_74986)
			{
				StringCopy(sParam0, "VE_HACKER_TRUCK_t0_v0", 64);
			}
			else if (iParam4 == func_394())
			{
				StringCopy(sParam0, "VE_KOSATKA_t0_v0", 64);
			}
			else if (iParam4 == 0)
			{
				StringConCat(sParam0, "VEM_", 64);
				if (iParam6 == 24 || iParam6 == 25)
				{
					if (iParam8 == 1)
					{
						StringConCat(sParam0, "COLOUR_1_", 64);
					}
					else if (iParam8 == 2)
					{
						StringConCat(sParam0, "COLOUR_2_", 64);
					}
					else if (iParam8 == 3)
					{
						StringConCat(sParam0, "COLOUR_EXTRA_1_", 64);
					}
					if (iParam9 == 5)
					{
						StringConCat(sParam0, "MCT_CHROME_", 64);
					}
					else if (iParam9 == 1)
					{
						StringConCat(sParam0, "MCT_CLASSIC_", 64);
					}
					else if (iParam9 == 0)
					{
						StringConCat(sParam0, "MCT_METALLIC_", 64);
					}
					else if (iParam9 == 4)
					{
						StringConCat(sParam0, "MCT_METALS_", 64);
					}
					else if (iParam9 == 3)
					{
						StringConCat(sParam0, "MCT_MATTE_", 64);
					}
					else if (iParam9 == 2)
					{
						StringConCat(sParam0, "MCT_PEARLESCENT_", 64);
					}
					else if (iParam9 == 7)
					{
						StringConCat(sParam0, "MCT_NONE_", 64);
					}
					iParam8 = -1;
				}
				else if (iParam6 == 38)
				{
					StringConCat(sParam0, "COLOUR_5_", 64);
				}
				else if (iParam6 == 65)
				{
					StringConCat(sParam0, "COLOUR_6_", 64);
				}
				StringConCat(sParam0, &cParam1, 64);
				if (iParam8 != -1)
				{
					StringConCat(sParam0, "_n", 64);
					StringIntConCat(sParam0, iParam8, 64);
				}
				StringConCat(sParam0, "_t", 64);
				StringIntConCat(sParam0, iParam6, 64);
				StringConCat(sParam0, "_v", 64);
				StringIntConCat(sParam0, iParam7, 64);
			}
			else if (iParam6 == 22)
			{
				StringCopy(&cParam1, unk_0x01E2429B82E280E6(iParam4), 16);
				if (unk_0xACC32B78196FBC2A(&cParam1) || unk_0x2E87280918B16506(&cParam1) == -515263000)
				{
					return;
				}
				StringConCat(sParam0, "VEM_INSURANCE_", 64);
				StringConCat(sParam0, &cParam1, 64);
				if (!bParam10)
				{
					switch (iParam4)
					{
						case joaat("dubsta2"):
						case joaat("cavalcade2"):
						case joaat("mesa2"):
						case joaat("rapidgt2"):
						case joaat("emperor2"):
						case joaat("cargobob2"):
							StringConCat(sParam0, "2", 64);
							break;
						
						case joaat("mesa3"):
						case joaat("emperor3"):
						case joaat("burrito3"):
						case joaat("mule3"):
							StringConCat(sParam0, "3", 64);
							break;
						
						case joaat("tornado4"):
							StringConCat(sParam0, "4", 64);
							break;
						}
				}
			}
			else if (iParam6 == 40)
			{
				switch (iParam4)
				{
					case joaat("fcr2"):
						StringCopy(&cParam1, "FCR2", 16);
						break;
					
					case joaat("diablous2"):
						StringCopy(&cParam1, "DIABLOUS2", 16);
						break;
					
					case joaat("comet3"):
						StringCopy(&cParam1, "COMET3", 16);
						break;
					
					default:
						StringCopy(&cParam1, unk_0x01E2429B82E280E6(iParam4), 16);
						if (unk_0xACC32B78196FBC2A(&cParam1))
						{
							return;
						}
						break;
				}
				StringConCat(sParam0, "VEU_", 64);
				StringConCat(sParam0, &cParam1, 64);
				StringConCat(sParam0, "_t0_v", 64);
				StringIntConCat(sParam0, iParam7, 64);
			}
			else
			{
				StringConCat(sParam0, "VE_", 64);
				StringConCat(sParam0, &cParam1, 64);
				if (!bParam10)
				{
					switch (iParam4)
					{
						case joaat("dubsta2"):
						case joaat("cavalcade2"):
						case joaat("mesa2"):
						case joaat("rapidgt2"):
						case joaat("emperor2"):
						case joaat("cargobob2"):
							StringConCat(sParam0, "2", 64);
							break;
						
						case joaat("mesa3"):
						case joaat("emperor3"):
						case joaat("burrito3"):
						case joaat("mule3"):
							StringConCat(sParam0, "3", 64);
							break;
						
						case joaat("tornado4"):
							StringConCat(sParam0, "4", 64);
							break;
						}
				}
				if (iParam8 != -1)
				{
					StringConCat(sParam0, "_n", 64);
					StringIntConCat(sParam0, iParam8, 64);
				}
				StringConCat(sParam0, "_t", 64);
				StringIntConCat(sParam0, iParam6, 64);
				StringConCat(sParam0, "_v", 64);
				StringIntConCat(sParam0, iParam7, 64);
				if (iParam9 != -1)
				{
					StringConCat(sParam0, "_p", 64);
					StringIntConCat(sParam0, iParam9, 64);
				}
			}
			break;
	}
	if (bParam11)
	{
		StringConCat(sParam0, "_CESP", 64);
	}
}

int func_394()
{
	return joaat("kosatka");
}

int func_395(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = 0;
	}
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_0", 64);
			break;
		
		case 1:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_1", 64);
			break;
		
		case 2:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_2", 64);
			break;
		
		case 3:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_3", 64);
			break;
		
		case 4:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_4", 64);
			break;
		
		case 5:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_5", 64);
			break;
		
		case 6:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_6", 64);
			break;
		
		case 7:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_7", 64);
			break;
		
		case 8:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_8", 64);
			break;
		
		case 9:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_9", 64);
			break;
	}
	if (iParam0 >= 10)
	{
		StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_", 64);
		StringIntConCat(&cVar0, iParam0, 64);
	}
	if (unk_0xACC32B78196FBC2A(&cVar0))
	{
		return -1;
	}
	return unk_0x2E87280918B16506(&cVar0);
}

int func_396()
{
	if (((func_112() == -1 && Global_2783523 == -1) && Global_2783504 == -1) && Global_2783505 != 2)
	{
		return 1;
	}
	return 0;
}

int func_397(int iParam0)
{
	if (func_398(iParam0))
	{
		return unk_0xE2D0C323A1AE5D85(Global_1585844[iParam0 /*142*/].f_103, 6);
	}
	return 0;
}

int func_398(int iParam0)
{
	int iVar0;
	
	func_400(iParam0, &iVar0);
	if ((iParam0 >= 0 && iParam0 <= 337) && !func_399(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_399(int iParam0)
{
	switch (iParam0)
	{
		case 10:
		case 11:
		case 12:
		case 23:
		case 24:
		case 25:
		case 36:
		case 37:
		case 38:
		case 49:
		case 50:
		case 51:
		case 62:
		case 63:
		case 64:
		case 85:
		case 86:
		case 87:
		case 291:
		case 292:
		case 293:
		case 304:
		case 305:
		case 306:
			return 1;
			break;
	}
	return 0;
}

void func_400(int iParam0, var uParam1)
{
	int iVar0;
	
	*uParam1 = -1;
	if (iParam0 >= 0)
	{
		iVar0 = 0;
		while (iVar0 < 337)
		{
			if (iParam0 == (Global_1941386[iVar0] - 1))
			{
				*uParam1 = iVar0;
				return;
			}
			iVar0++;
		}
	}
}

bool func_401()
{
	return Global_2703656.f_75.f_49;
}

int func_402(int iParam0)
{
	switch (iParam0)
	{
		case joaat("technical2"):
		case joaat("boxville5"):
		case joaat("wastelander"):
		case joaat("phantom2"):
		case joaat("voltic2"):
		case joaat("dune5"):
		case joaat("ruiner2"):
		case joaat("blazer5"):
			return 1;
			break;
	}
	return 0;
}

int func_403()
{
	if (unk_0x3A76A0944BE2C291(2))
	{
		if (unk_0xF09A4F413B0D30EB(2, 238))
		{
			return 1;
		}
	}
	return 0;
}

bool func_404()
{
	return unk_0x320D1840B6DAA1CC() <= Global_22830.f_6135 + 100;
}

int func_405(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	
	if ((((!unk_0x9315DBF7D972F07A() || !func_6(unk_0x9E2D6C50374FCFA9(), 1, 1)) || func_520()) || Global_1574953) || Global_2715542.f_3479.f_32)
	{
		*iParam1 = -1;
		func_519(uParam0, iParam5, 0);
		return 1;
	}
	bVar0 = false;
	unk_0x19DD1C202B338DF3();
	func_518();
	func_82();
	unk_0x07899AAA5D680386(2, 202);
	unk_0x07899AAA5D680386(2, 201);
	unk_0x07899AAA5D680386(2, 189);
	unk_0x07899AAA5D680386(2, 190);
	unk_0x07899AAA5D680386(2, 241);
	unk_0x07899AAA5D680386(2, 242);
	unk_0x07899AAA5D680386(2, 180);
	unk_0x07899AAA5D680386(2, 181);
	if (unk_0x3A76A0944BE2C291(2))
	{
		unk_0x07899AAA5D680386(0, 24);
		unk_0x07899AAA5D680386(0, 257);
		unk_0x5089DD830FA61D71(2, 237, 1);
		unk_0x5089DD830FA61D71(2, 238, 1);
		unk_0x5089DD830FA61D71(2, 242, 1);
		unk_0x5089DD830FA61D71(2, 241, 1);
		unk_0x7653D561C9574763(2, 2, 1);
		unk_0x7653D561C9574763(2, 1, 1);
		unk_0x7653D561C9574763(0, 24, 1);
		unk_0x7653D561C9574763(0, 257, 1);
		if (!unk_0xF1EC2C71FD1371B8() && !unk_0x3E6C9DAD84CEFED1())
		{
			unk_0x07899AAA5D680386(2, 202);
			unk_0x07899AAA5D680386(2, 201);
		}
		func_515(0, 0, 0, 1);
		unk_0x60236500251FDE8E();
	}
	unk_0xCED9E32812D6C7C7(&(uParam0->f_344), 1);
	if (func_513(0, iParam5, 0))
	{
		if (func_6(unk_0x9E2D6C50374FCFA9(), 1, 1))
		{
			if (!unk_0xE2D0C323A1AE5D85(uParam0->f_344, 0))
			{
				func_457(uParam0, iParam3, bParam4);
				unk_0xCED9E32812D6C7C7(&(uParam0->f_344), 0);
				func_449(uParam0, bParam4, bVar1, iParam3, bParam6);
				func_418(1, iParam5, 1, 0, 1, -1082130432, 0, 0, -1);
			}
			else if ((!unk_0xF1EC2C71FD1371B8() && !func_417(8, -1)) && !Global_2714627.f_784.f_5)
			{
				if (unk_0x3A76A0944BE2C291(2))
				{
					if (func_416())
					{
						if (uParam0->f_340 == 0)
						{
							if (Global_4534059 != uParam0->f_341)
							{
								uParam0->f_341 = Global_4534059;
								unk_0x91DFC8F68F6D9B05(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", 1);
								unk_0xB0550BC91B0159D6(&(uParam0->f_344), 0);
							}
							else
							{
								bVar0 = true;
							}
						}
						else if (Global_4534059 != uParam0->f_342)
						{
							uParam0->f_342 = Global_4534059;
							unk_0x91DFC8F68F6D9B05(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", 1);
							unk_0xB0550BC91B0159D6(&(uParam0->f_344), 0);
						}
						else
						{
							bVar0 = true;
						}
					}
				}
				if (!unk_0xE2D0C323A1AE5D85(uParam0->f_347, 0))
				{
					if (((unk_0xF09A4F413B0D30EB(2, 201) || func_415()) || bVar0) || (unk_0x3E6C9DAD84CEFED1() && unk_0xF09A4F413B0D30EB(2, 201)))
					{
						unk_0x91DFC8F68F6D9B05(-1, "SELECT", "HUD_FREEMODE_SOUNDSET", 1);
						if (uParam0->f_340 == 0)
						{
							uParam0->f_349 = 0;
							if (uParam0->f_341 >= 0 && uParam0->f_1[uParam0->f_341] >= 0)
							{
								*uParam2 = func_521(1, 0, iParam3, func_411(uParam0->f_1[uParam0->f_341], -1), -1, 0);
								if (*uParam2 >= 0)
								{
									func_410(*uParam2, iParam1, 1);
									if (*iParam1 < 0)
									{
										*iParam1 = func_529(1, 0, iParam3, 0, -1, 0);
									}
								}
								if (*iParam1 >= 0 && *uParam2 >= 0)
								{
									unk_0xB0550BC91B0159D6(&(uParam0->f_344), 0);
									func_519(uParam0, iParam5, 0);
									return 1;
								}
							}
							else if (uParam0->f_341 < 0)
							{
							}
							if (uParam0->f_341 < 0)
							{
								uParam0->f_349 = 0;
							}
							else
							{
								uParam0->f_349 = uParam0->f_1[uParam0->f_341];
							}
							uParam0->f_340 = 1;
							unk_0xB0550BC91B0159D6(&(uParam0->f_344), 0);
							bVar1 = true;
						}
						else if (!unk_0xE2D0C323A1AE5D85(uParam0->f_347, 2) && !unk_0xE2D0C323A1AE5D85(uParam0->f_339, uParam0->f_342))
						{
							func_409(-1);
							func_408(176, "BB_YES", -1);
							func_408(177, "BB_NO", -1);
							unk_0xCED9E32812D6C7C7(&(uParam0->f_347), 2);
						}
						else if (uParam0->f_342 >= 0)
						{
							*uParam2 = uParam0->f_1[uParam0->f_342];
							func_410(*uParam2, iParam1, 1);
							if (*iParam1 < 0)
							{
								*iParam1 = func_529(1, 0, iParam3, 0, -1, 0);
							}
							if (*iParam1 >= 0 && *uParam2 >= 0)
							{
								unk_0xB0550BC91B0159D6(&(uParam0->f_344), 0);
								func_519(uParam0, iParam5, 0);
							}
							else
							{
								func_519(uParam0, iParam5, 0);
								*iParam1 = -1;
								return 1;
							}
							return 1;
						}
						unk_0xCED9E32812D6C7C7(&(uParam0->f_347), 0);
					}
				}
				else if (!unk_0x4C1B8C5717647539(2, 201) && !bVar0)
				{
					unk_0xB0550BC91B0159D6(&(uParam0->f_347), 0);
				}
				if (!unk_0xE2D0C323A1AE5D85(uParam0->f_347, 1))
				{
					if ((((func_407() || unk_0xF09A4F413B0D30EB(2, 238)) || unk_0xF09A4F413B0D30EB(2, 202)) || (func_403() && Global_4534059 > -1)) || (unk_0x3E6C9DAD84CEFED1() && unk_0xF09A4F413B0D30EB(2, 202)))
					{
						unk_0x91DFC8F68F6D9B05(-1, "CANCEL", "HUD_FREEMODE_SOUNDSET", 1);
						if (uParam0->f_340 == 0)
						{
							func_449(uParam0, bParam4, bVar1, iParam3, bParam6);
							func_418(1, iParam5, 1, 0, 1, -1082130432, 0, 0, -1);
							func_519(uParam0, iParam5, 1);
							*iParam1 = -1;
							unk_0xCED9E32812D6C7C7(&(uParam0->f_344), 7);
							return 1;
						}
						else if (!unk_0xE2D0C323A1AE5D85(uParam0->f_347, 2))
						{
							uParam0->f_340 = 0;
							bVar1 = true;
							unk_0xB0550BC91B0159D6(&(uParam0->f_344), 0);
						}
						else
						{
							func_409(-1);
							func_408(176, "BB_SELECT", -1);
							func_408(177, "BB_BACK", -1);
							unk_0xB0550BC91B0159D6(&(uParam0->f_347), 2);
						}
						unk_0xCED9E32812D6C7C7(&(uParam0->f_347), 1);
					}
				}
				else if ((!unk_0x4C1B8C5717647539(2, 202) && !unk_0x4C1B8C5717647539(2, 238)) && !func_407())
				{
					unk_0xB0550BC91B0159D6(&(uParam0->f_347), 1);
				}
				if (!unk_0xE2D0C323A1AE5D85(uParam0->f_347, 2))
				{
					if (!unk_0xE2D0C323A1AE5D85(uParam0->f_347, 4))
					{
						if ((unk_0x4C1B8C5717647539(2, 172) || unk_0xF01464D7AF0B7347(2, 172)) || unk_0xF01464D7AF0B7347(2, 241))
						{
							if (uParam0->f_340 == 0)
							{
								uParam0->f_341 = (uParam0->f_341 - 1);
							}
							else
							{
								uParam0->f_342 = (uParam0->f_342 - 1);
							}
							unk_0x91DFC8F68F6D9B05(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", 1);
							unk_0xCED9E32812D6C7C7(&(uParam0->f_347), 4);
							unk_0xB0550BC91B0159D6(&(uParam0->f_344), 0);
							func_69(&(uParam0->f_345));
						}
					}
					else if (func_406(uParam0, 172))
					{
						unk_0xB0550BC91B0159D6(&(uParam0->f_347), 4);
					}
					if (!unk_0xE2D0C323A1AE5D85(uParam0->f_347, 5))
					{
						if ((unk_0x4C1B8C5717647539(2, 173) || unk_0xF01464D7AF0B7347(2, 173)) || unk_0xF01464D7AF0B7347(2, 242))
						{
							if (uParam0->f_340 == 0)
							{
								uParam0->f_341++;
							}
							else
							{
								uParam0->f_342++;
							}
							unk_0x91DFC8F68F6D9B05(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", 1);
							unk_0xCED9E32812D6C7C7(&(uParam0->f_347), 5);
							unk_0xB0550BC91B0159D6(&(uParam0->f_344), 0);
							func_69(&(uParam0->f_345));
						}
					}
					else if (func_406(uParam0, 173))
					{
						unk_0xB0550BC91B0159D6(&(uParam0->f_347), 5);
					}
				}
				if (uParam0->f_340 == 0)
				{
					if (uParam0->f_341 >= uParam0->f_343)
					{
						uParam0->f_341 = 0;
					}
					if (uParam0->f_341 < 0)
					{
						uParam0->f_341 = (uParam0->f_343 - 1);
					}
				}
				else
				{
					if (uParam0->f_342 >= uParam0->f_343)
					{
						uParam0->f_342 = 0;
					}
					if (uParam0->f_342 < 0)
					{
						uParam0->f_342 = (uParam0->f_343 - 1);
					}
				}
				func_449(uParam0, bParam4, bVar1, iParam3, bParam6);
				if (!unk_0xE2D0C323A1AE5D85(uParam0->f_347, 2) && !unk_0x3E6C9DAD84CEFED1())
				{
					func_418(1, iParam5, 1, 0, 1, -1082130432, 0, 0, -1);
				}
			}
		}
	}
	return 0;
}

int func_406(var uParam0, int iParam1)
{
	if ((!unk_0x4C1B8C5717647539(2, iParam1) && !unk_0xF01464D7AF0B7347(2, iParam1)) || func_70(&(uParam0->f_345), 250, 1))
	{
		return 1;
	}
	return 0;
}

int func_407()
{
	if (unk_0x3A76A0944BE2C291(2))
	{
		if (((unk_0xF01464D7AF0B7347(2, 177) && !unk_0xF01464D7AF0B7347(2, 237)) && !unk_0xF01464D7AF0B7347(2, 238)) && !unk_0xD199EE48D2842EB1())
		{
			return 1;
		}
	}
	else if (unk_0xF01464D7AF0B7347(2, 177))
	{
		return 1;
	}
	return 0;
}

void func_408(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = unk_0x2018949B2C9FD96A(2, iParam0, 1);
	if (Global_22830.f_5026 >= 12)
	{
		StringCopy(&Global_4533983, sVar0, 64);
		StringCopy(&(Global_4533983.f_16), sParam1, 16);
		Global_4533983.f_20 = iParam2;
		return;
		return;
	}
	unk_0xB0550BC91B0159D6(&(Global_22830.f_5309), Global_22830.f_5026);
	StringCopy(&(Global_22830.f_5028[Global_22830.f_5026 /*16*/]), sVar0, 64);
	StringCopy(&(Global_22830.f_5221[Global_22830.f_5026 /*4*/]), sParam1, 16);
	Global_22830.f_5270[Global_22830.f_5026] = iParam2;
	Global_22830.f_5283[Global_22830.f_5026] = iParam0;
	Global_22830.f_5296[Global_22830.f_5026] = 32;
	Global_22830.f_5026++;
}

void func_409(int iParam0)
{
	int iVar0;
	int iVar1;
	
	Global_22830.f_5026 = 0;
	Global_22830.f_5027 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_22830.f_5221[iVar0 /*4*/]), "", 16);
		Global_22830.f_5270[iVar0] = -1;
		Global_22830.f_5283[iVar0] = 361;
		Global_22830.f_5296[iVar0] = 32;
		iVar0++;
	}
	Global_22830.f_5309 = 0;
	StringCopy(&(Global_4533983.f_16), "", 16);
	Global_4533983.f_20 = -1;
	if (unk_0x8FE9914D4872D601())
	{
		if (!func_103(&iVar1, 0, iParam0))
		{
			return;
		}
		unk_0xEA5DEA46C3EE64D3(Global_22830.f_5917[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
		unk_0xD7D6BA6E36AEC182(0);
		unk_0x6F06CF0E9AB02847();
	}
}

void func_410(int iParam0, int iParam1, bool bParam2)
{
	if (Global_262145.f_10421)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_1941386[iParam0] - 1);
		if (bParam2)
		{
			if ((unk_0x8142A6539DDC180F() % 5) == 0)
			{
			}
		}
	}
	else
	{
		*iParam1 = -1;
	}
}

int func_411(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_18();
	}
	if (iParam0 == 7 && !Global_262145.f_17250)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_291(iParam0);
		if (iVar1 == 0 && func_21(5395, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_414(-1) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_413(unk_0x9E2D6C50374FCFA9()) && iVar1 == 1)
		{
			return 1237;
		}
		if (func_412(-1) && iVar1 == 3)
		{
			return 1238;
		}
	}
	if (iParam0 == 0)
	{
		return Global_1655634[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_2863443[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 27)
		{
			return 0;
		}
		return Global_2863282[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

bool func_412(int iParam0)
{
	return func_21(9516, iParam0, 0) != 0;
}

int func_413(int iParam0)
{
	if (iParam0 != func_8())
	{
		return Global_1853128[iParam0 /*888*/].f_267.f_332 != 0;
	}
	return 0;
}

bool func_414(int iParam0)
{
	if (!Global_262145.f_23939)
	{
		return 0;
	}
	return func_21(7209, iParam0, 0) != 0;
}

int func_415()
{
	if (unk_0x3A76A0944BE2C291(2))
	{
		if (((unk_0xF01464D7AF0B7347(2, 176) && !unk_0xF01464D7AF0B7347(2, 237)) && !unk_0xF01464D7AF0B7347(2, 238)) && !unk_0xD199EE48D2842EB1())
		{
			return 1;
		}
	}
	else if (unk_0xF01464D7AF0B7347(2, 176))
	{
		return 1;
	}
	return 0;
}

int func_416()
{
	if (unk_0x3A76A0944BE2C291(2))
	{
		if (Global_4534059 > -1)
		{
			if (unk_0xF09A4F413B0D30EB(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_417(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1644209.f_203[iParam1];
			}
			break;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1644209.f_1048, iParam0);
}

void func_418(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
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
	struct<3> Var38;
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
	
	if (!func_103(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_447(0, bParam6))
	{
		return;
	}
	unk_0xA5AAB00FA8C570A4(76, 84);
	unk_0x98F560BC13E5293F(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	fVar56 = 0f;
	if (Global_22830)
	{
		if (func_445(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar55 = fVar37;
			fVar56 = fVar36;
			fVar55 = (fVar55 + 0f);
		}
		else
		{
			Global_22830 = 0;
		}
	}
	if (unk_0x2E87280918B16506(&(Global_22830.f_1)) == unk_0x2E87280918B16506("HIDE"))
	{
		fVar57 = Global_22828;
	}
	else
	{
		fVar57 = (((Global_22828 + fVar55) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_22829;
	}
	fVar60 = 1f;
	if (bParam7)
	{
		unk_0x604161EB05F29E6D(&iVar58, &iVar59);
		fVar61 = unk_0xF4CC509EEB975296(0);
		if (func_444())
		{
			iVar58 = round((to_float(iVar59) * fVar61));
		}
		fVar62 = (to_float(iVar58) / to_float(iVar59));
		fVar60 = (fVar62 / fVar61);
		if (func_444())
		{
			fVar60 = 1f;
		}
		iVar58 = round((to_float(iVar58) / fVar60));
		iVar59 = round((to_float(iVar59) / fVar60));
	}
	else
	{
		unk_0xBE74EC1CD33D16EA(&iVar58, &iVar59);
	}
	if (bParam3)
	{
		if (Global_22830.f_5475 <= 1)
		{
			func_440(Global_22830.f_5475 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0, 0);
			Global_22830.f_6271 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_22830.f_5985)
		{
			if (unk_0x2E87280918B16506(&(Global_22830.f_1)) == unk_0x2E87280918B16506("HIDE"))
			{
				fVar49 = Global_22828;
			}
			else
			{
				if (Global_22830)
				{
					StringCopy(&cVar63, func_439(29), 64);
					StringCopy(&cVar64, func_437(29, 1), 64);
					if (unk_0x2E87280918B16506(&(Global_22830.f_7286[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						func_436(Global_22827, Global_22828, fParam5, (fVar55 - 0f), 0, 0, 0, 255);
						unk_0xEBF08DA37D86CD05(&cVar63, &cVar64, (Global_22827 + (fParam5 * 0.5f)), (Global_22828 + ((fVar55 - 0f) * 0.5f)), fVar56, (fVar55 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0xEBF08DA37D86CD05(&cVar63, &cVar64, (Global_22827 + (fParam5 * 0.5f)), (Global_22828 + ((fVar55 - 0f) * 0.5f)), fParam5, (fVar55 - 0f), 0f, 255, 255, 255, 255, 0);
					}
				}
				if (Global_22830.f_8644)
				{
					iVar1 = Global_22830.f_8640;
					iVar2 = Global_22830.f_8641;
					iVar3 = Global_22830.f_8642;
					iVar4 = Global_22830.f_8643;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_436(Global_22827, (Global_22828 + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_22828 + fVar55) + 0.034722f) + 0f);
				if (unk_0x2E87280918B16506(&(Global_22830.f_1)) != 0)
				{
					func_435();
					unk_0xCDDA0C58B818F6B2(&(Global_22830.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_22830.f_68)
					{
						if (Global_22830.f_5[iVar14] == 2)
						{
							unk_0x2AE954BA77A66307(Global_22830.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_22830.f_5[iVar14] == 3)
						{
							unk_0x957E514A6E999374(Global_22830.f_14[iVar16], Global_22830.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_22830.f_5[iVar14] == 1)
						{
							unk_0x26C23BE14F66F202(&(Global_22830.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_22830.f_5[iVar14] == 8)
						{
							unk_0x26C23BE14F66F202(&(Global_22830.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_22830.f_5[iVar14] == 5)
						{
							unk_0x76DB21247AE4E4E2(&(Global_22830.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22830.f_5[iVar14] == 6)
						{
							unk_0x26C23BE14F66F202(&(Global_22830.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22830.f_5[iVar14] == 7)
						{
							unk_0x76DB21247AE4E4E2(&(Global_22830.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22830.f_5[iVar14] == 9)
						{
							unk_0x76DB21247AE4E4E2(&(Global_22830.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0x1A53079994915FA6((Global_22827 + 0.00390625f), ((Global_22828 + fVar55) + 0.00416664f), 0);
				}
				if (Global_22830.f_5992)
				{
					func_435();
					func_433((((Global_22827 + fParam5) - 0.00390625f) - func_434("CM_ITEM_COUNT", Global_22830.f_5993, Global_22830.f_5994)), ((Global_22828 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_22830.f_5993, Global_22830.f_5994);
				}
				else if (Global_22830.f_5988 > Global_22830.f_5482)
				{
					if (Global_22830.f_5991 != 0)
					{
						func_435();
						func_433((((Global_22827 + fParam5) - 0.00390625f) - func_434("CM_ITEM_COUNT", Global_22830.f_5991, Global_22830.f_5990)), ((Global_22828 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_22830.f_5991, Global_22830.f_5990);
					}
				}
			}
			iVar6 = Global_22830.f_5995;
			iVar9 = 0;
			fVar65 = fVar49;
			if (Global_22830.f_8654)
			{
				iVar1 = Global_22830.f_8650;
				iVar2 = Global_22830.f_8651;
				iVar3 = Global_22830.f_8652;
				iVar4 = Global_22830.f_8653;
			}
			else
			{
				unk_0x2F046C9381D8E91B(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_22830.f_5482 && iVar6 <= Global_22830.f_5475)
			{
				if (iVar6 >= 0)
				{
					if (Global_22830.f_5742[iVar6])
					{
						if (Global_22830.f_5613[iVar6] && iVar6 != Global_22830.f_5995)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar54 = 0.034722f;
						if (Global_22830.f_6002[iVar6] != 0f)
						{
							fVar54 = Global_22830.f_6002[iVar6];
						}
						fVar49 = (fVar49 + fVar54);
						iVar9++;
					}
				}
				iVar6++;
			}
			unk_0xEBF08DA37D86CD05("CommonMenu", "Gradient_Bgd", (Global_22827 + (fParam5 * 0.5f)), ((fVar65 + ((fVar49 - fVar65) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar65), 0f, 255, 255, 255, 255, 0);
			if (Global_22830.f_5988 > Global_22830.f_5482)
			{
				if (Global_22830.f_8659)
				{
					iVar1 = Global_22830.f_8655;
					iVar2 = Global_22830.f_8656;
					iVar3 = Global_22830.f_8657;
					iVar4 = Global_22830.f_8658;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_436(Global_22827, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var38 = { unk_0x7DF13542ADA68880("CommonMenu", "shop_arrows_upANDdown") };
				Var38.x = (Var38.x * (0.5f / fVar60));
				Var38.f_1 = (Var38.f_1 * (0.5f / fVar60));
				if (Global_22830.f_8672)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0x2F046C9381D8E91B(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xEBF08DA37D86CD05("CommonMenu", "shop_arrows_upANDdown", (Global_22827 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((Var38.x / 1280f) * fVar60), ((Var38.f_1 / 720f) * fVar60), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (unk_0x2E87280918B16506(&(Global_22830.f_4947)) != 0 && Global_22830.f_5023 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_22827 + 0.0046875f);
				if (Global_22830.f_5025 != 0)
				{
					func_445(Global_22830.f_5025, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_22827 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_432(fVar40);
				unk_0xB733C0853476F0C1(&(Global_22830.f_4947));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22830.f_5019)
				{
					if (Global_22830.f_4953[iVar14] == 2)
					{
						unk_0x2AE954BA77A66307(Global_22830.f_4958[iVar15]);
						iVar15++;
					}
					else if (Global_22830.f_4953[iVar14] == 3)
					{
						unk_0x957E514A6E999374(Global_22830.f_4962[iVar16], Global_22830.f_4966[iVar16]);
						iVar16++;
					}
					else if (Global_22830.f_4953[iVar14] == 1)
					{
						unk_0x26C23BE14F66F202(&(Global_22830.f_4970[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22830.f_4953[iVar14] == 5)
					{
						unk_0x76DB21247AE4E4E2(&(Global_22830.f_4970[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22830.f_4953[iVar14] == 6)
					{
						unk_0x26C23BE14F66F202(&(Global_22830.f_4970[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22830.f_4953[iVar14] == 7)
					{
						unk_0x76DB21247AE4E4E2(&(Global_22830.f_4970[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22830.f_4953[iVar14] == 9)
					{
						unk_0x76DB21247AE4E4E2(&(Global_22830.f_4970[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xBD7DCBC4F2DF91F8(fVar40, (fVar49 + 0.00277776f));
				unk_0x2F046C9381D8E91B(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_436(Global_22827, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_22830.f_8664)
				{
					iVar1 = Global_22830.f_8660;
					iVar2 = Global_22830.f_8661;
					iVar3 = Global_22830.f_8662;
					iVar4 = Global_22830.f_8663;
				}
				else
				{
					unk_0x2F046C9381D8E91B(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xEBF08DA37D86CD05("CommonMenu", "Gradient_Bgd", (Global_22827 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0xC23444E9B1B8D081(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xC23444E9B1B8D081(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_432(fVar40);
				unk_0xCDDA0C58B818F6B2(&(Global_22830.f_4947));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22830.f_5019)
				{
					if (Global_22830.f_4953[iVar14] == 2)
					{
						unk_0x2AE954BA77A66307(Global_22830.f_4958[iVar15]);
						iVar15++;
					}
					else if (Global_22830.f_4953[iVar14] == 3)
					{
						unk_0x957E514A6E999374(Global_22830.f_4962[iVar16], Global_22830.f_4966[iVar16]);
						iVar16++;
					}
					else if (Global_22830.f_4953[iVar14] == 1)
					{
						unk_0x26C23BE14F66F202(&(Global_22830.f_4970[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22830.f_4953[iVar14] == 5)
					{
						unk_0x76DB21247AE4E4E2(&(Global_22830.f_4970[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22830.f_4953[iVar14] == 6)
					{
						unk_0x26C23BE14F66F202(&(Global_22830.f_4970[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22830.f_4953[iVar14] == 7)
					{
						unk_0x76DB21247AE4E4E2(&(Global_22830.f_4970[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22830.f_4953[iVar14] == 9)
					{
						unk_0x76DB21247AE4E4E2(&(Global_22830.f_4970[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22830.f_4953[iVar14] == 8)
					{
						unk_0x26C23BE14F66F202(&(Global_22830.f_4970[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x1A53079994915FA6(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_22830.f_5025 != 0)
				{
					func_445(Global_22830.f_5025, 1, 1, &fVar36, &fVar37, bParam7);
					func_431(Global_22830.f_5025, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0xEBF08DA37D86CD05(func_439(Global_22830.f_5025), func_437(Global_22830.f_5025, 1), ((Global_22827 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
				}
				fVar49 = (fVar49 + (((unk_0xC23444E9B1B8D081(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_22830.f_5023 > 0)
				{
					if ((unk_0x320D1840B6DAA1CC() - Global_22830.f_5024) > Global_22830.f_5023)
					{
						StringCopy(&(Global_22830.f_4947), "", 24);
						Global_22830.f_5023 = -1;
					}
				}
			}
			if (unk_0x2E87280918B16506(&(Global_4533983.f_21)) != 0 && Global_4533983.f_65 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_22827 + 0.0046875f);
				if (Global_4533983.f_67 != 0)
				{
					func_445(Global_4533983.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_22827 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_432(fVar40);
				unk_0xB733C0853476F0C1(&(Global_4533983.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4533983.f_61)
				{
					if (Global_4533983.f_25[iVar14] == 2)
					{
						unk_0x2AE954BA77A66307(Global_4533983.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4533983.f_25[iVar14] == 3)
					{
						unk_0x957E514A6E999374(Global_4533983.f_34[iVar16], Global_4533983.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4533983.f_25[iVar14] == 1)
					{
						unk_0x26C23BE14F66F202(&(Global_4533983.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4533983.f_25[iVar14] == 5)
					{
						unk_0x76DB21247AE4E4E2(&(Global_4533983.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4533983.f_25[iVar14] == 6)
					{
						unk_0x26C23BE14F66F202(&(Global_4533983.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4533983.f_25[iVar14] == 7)
					{
						unk_0x76DB21247AE4E4E2(&(Global_4533983.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4533983.f_25[iVar14] == 9)
					{
						unk_0x76DB21247AE4E4E2(&(Global_4533983.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4533983.f_25[iVar14] == 8)
					{
						unk_0x26C23BE14F66F202(&(Global_4533983.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xBD7DCBC4F2DF91F8(fVar40, (fVar49 + 0.00277776f));
				unk_0x2F046C9381D8E91B(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_436(Global_22827, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_22830.f_8664)
				{
					iVar1 = Global_22830.f_8660;
					iVar2 = Global_22830.f_8661;
					iVar3 = Global_22830.f_8662;
					iVar4 = Global_22830.f_8663;
				}
				else
				{
					unk_0x2F046C9381D8E91B(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xEBF08DA37D86CD05("CommonMenu", "Gradient_Bgd", (Global_22827 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0xC23444E9B1B8D081(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xC23444E9B1B8D081(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_432(fVar40);
				unk_0xCDDA0C58B818F6B2(&(Global_4533983.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4533983.f_61)
				{
					if (Global_4533983.f_25[iVar14] == 2)
					{
						unk_0x2AE954BA77A66307(Global_4533983.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4533983.f_25[iVar14] == 3)
					{
						unk_0x957E514A6E999374(Global_4533983.f_34[iVar16], Global_4533983.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4533983.f_25[iVar14] == 1)
					{
						unk_0x26C23BE14F66F202(&(Global_4533983.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4533983.f_25[iVar14] == 8)
					{
						unk_0x26C23BE14F66F202(&(Global_4533983.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4533983.f_25[iVar14] == 5)
					{
						unk_0x76DB21247AE4E4E2(&(Global_4533983.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4533983.f_25[iVar14] == 6)
					{
						unk_0x26C23BE14F66F202(&(Global_4533983.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4533983.f_25[iVar14] == 7)
					{
						unk_0x76DB21247AE4E4E2(&(Global_4533983.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4533983.f_25[iVar14] == 9)
					{
						unk_0x76DB21247AE4E4E2(&(Global_4533983.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x1A53079994915FA6(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_4533983.f_67 != 0)
				{
					func_445(Global_4533983.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_431(Global_4533983.f_67, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0xEBF08DA37D86CD05(func_439(Global_4533983.f_67), func_437(Global_4533983.f_67, 1), ((Global_22827 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
				}
				fVar49 = (fVar49 + (((unk_0xC23444E9B1B8D081(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4533983.f_65 > 0)
				{
					if ((unk_0x320D1840B6DAA1CC() - Global_4533983.f_66) > Global_4533983.f_65)
					{
						StringCopy(&(Global_4533983.f_21), "", 16);
						Global_4533983.f_65 = -1;
					}
				}
			}
			func_427(iVar58, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			unk_0xA5AAB00FA8C570A4(76, 84);
			unk_0x98F560BC13E5293F(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_22830.f_5985)
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
			iVar66 = Global_22830.f_5475;
			if (Global_22830.f_5986)
			{
				iVar66 = (Global_22830.f_5989 - 1);
			}
			fVar67 = 0f;
			fVar68 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar66)
			{
				fVar54 = 0.034722f;
				if (Global_22830.f_6002[iVar6] != 0f)
				{
					fVar54 = Global_22830.f_6002[iVar6];
				}
				if (Global_22830.f_5986)
				{
					iVar6 = Global_22830.f_8295[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_22830.f_5995 && iVar9 < Global_22830.f_5482)
				{
					bVar33 = true;
					if (Global_22830.f_5996 == iVar6)
					{
						fVar68 = fVar67;
					}
					if (Global_22830.f_5613[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar57 + fVar67) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_22830.f_6136[iVar6] = fVar35;
				fVar34 = (Global_22827 + 0.0046875f);
				bVar39 = false;
				bVar32 = Global_22830.f_5996 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar70 = 255;
					iVar71 = 255;
					iVar72 = 255;
					iVar73 = 255;
					if (Global_22830.f_8666)
					{
						unk_0x2F046C9381D8E91B(Global_22830.f_8665, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					else
					{
						unk_0x2F046C9381D8E91B(1, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					unk_0xEBF08DA37D86CD05("CommonMenu", "Gradient_Nav", (Global_22827 + (fParam5 * 0.5f)), (((fVar57 + fVar68) + (0.00277776f * IntToFloat(iVar12))) + (fVar54 * 0.5f)), fParam5, fVar54, 0f, iVar70, iVar71, iVar72, iVar73, 0);
					Global_22830.f_6134 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_22830.f_5483)
				{
					if (unk_0xE2D0C323A1AE5D85(Global_22830.f_5346[iVar6], iVar8) || Global_22830.f_5313[iVar8] == 5)
					{
						if (Global_22830.f_5986)
						{
							iVar19 = Global_22830.f_8311[((iVar9 * Global_22830.f_5483) + iVar8)];
							iVar20 = Global_22830.f_8352[((iVar9 * Global_22830.f_5483) + iVar8)];
							iVar21 = Global_22830.f_8393[((iVar9 * Global_22830.f_5483) + iVar8)];
							iVar22 = Global_22830.f_8434[((iVar9 * Global_22830.f_5483) + iVar8)];
							iVar23 = Global_22830.f_8475[((iVar9 * Global_22830.f_5483) + iVar8)];
						}
						else
						{
							Global_22830.f_8311[((iVar9 * Global_22830.f_5483) + iVar8)] = iVar19;
							Global_22830.f_8352[((iVar9 * Global_22830.f_5483) + iVar8)] = iVar20;
							Global_22830.f_8393[((iVar9 * Global_22830.f_5483) + iVar8)] = iVar21;
							Global_22830.f_8434[((iVar9 * Global_22830.f_5483) + iVar8)] = iVar22;
							Global_22830.f_8475[((iVar9 * Global_22830.f_5483) + iVar8)] = iVar23;
						}
						iVar74 = 0;
						bVar53 = false;
						if (Global_22830.f_6268[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_22830.f_6265[0])
							{
								bVar53 = true;
								iVar74 = 0;
							}
						}
						if (Global_22830.f_6268[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_22830.f_6265[1])
							{
								bVar53 = true;
								iVar74 = 1;
							}
						}
						if (Global_22830.f_5319[iVar8] != -1f)
						{
							fVar34 = ((Global_22827 + 0.0046875f) + Global_22830.f_5319[iVar8]);
						}
						if ((iVar8 < 4 && Global_22830.f_5319[iVar8 + 1] != -1f) && fVar34 < Global_22830.f_5319[iVar8 + 1])
						{
							fVar44 = (Global_22830.f_5319[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar44 = (((Global_22827 + Global_22829) - 0.0046875f) - fVar34);
						}
						if ((Global_22830.f_5332[iVar8] && Global_22830.f_6131) && bVar32)
						{
							bVar52 = true;
						}
						else
						{
							bVar52 = false;
						}
						switch (Global_22830.f_5313[iVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_22830.f_5986)
									{
										fVar41 = 0f;
										fVar42 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (unk_0x2E87280918B16506(&(Global_22830.f_73[iVar24 /*6*/])) != 0)
										{
											bVar50 = false;
											bVar51 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 5 || Global_22830.f_2381[iVar24 /*5*/][iVar14] == 8)
												{
													bVar51 = true;
												}
												else if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 9)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											if (Global_22830.f_2124[iVar24])
											{
												bVar51 = true;
											}
											func_425(bVar32, Global_22830.f_1610[iVar24], Global_22830.f_1867[iVar24], bVar53, iVar74, bVar51, bVar50);
											unk_0x27ED46EA48C0A455(&(Global_22830.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x2E87280918B16506(&(Global_22830.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x26C23BE14F66F202(&(Global_22830.f_73[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x2E87280918B16506(&(Global_22830.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x26C23BE14F66F202(&(Global_22830.f_73[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0x2E87280918B16506(&(Global_22830.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x76DB21247AE4E4E2(&(Global_2725767[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0x2E87280918B16506(&(Global_22830.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x26C23BE14F66F202(&(Global_2725767[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0x2E87280918B16506(&(Global_22830.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x76DB21247AE4E4E2(&(Global_2725767[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 9)
											{
												if (unk_0x2E87280918B16506(&(Global_22830.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x76DB21247AE4E4E2(&(Global_2725767[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0x2E87280918B16506(&(Global_22830.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x2AE954BA77A66307(Global_22830.f_4175[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0x2E87280918B16506(&(Global_22830.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x957E514A6E999374(Global_22830.f_4432[(iVar21 + iVar27)], Global_22830.f_4561[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (unk_0x2E87280918B16506(&(Global_22830.f_73[iVar24 /*6*/])) != 0)
										{
											fVar41 = unk_0x63F498818B4DEE3E(1);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_445(Global_22830.f_4690[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + fVar36);
													if (iVar14 > 0)
													{
														fVar42 = (fVar42 - (0.00078125f * 4f));
													}
													if ((Global_22830.f_4690[(iVar22 + iVar14)] == 2 || Global_22830.f_4690[(iVar22 + iVar14)] == 51) || Global_22830.f_4690[(iVar22 + iVar14)] == 61)
													{
														fVar42 = (fVar42 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar40 = 0f;
										if (Global_22830.f_5340[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - (fVar41 + fVar42)) + (0.00078125f * 1f)));
										}
										else if (Global_22830.f_5340[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - ((fVar41 + fVar42) * 0.5f)));
										}
										Global_22830.f_8516[((iVar9 * Global_22830.f_5483) + iVar8)] = fVar40;
										Global_22830.f_8557[((iVar9 * Global_22830.f_5483) + iVar8)] = fVar41;
										Global_22830.f_8598[((iVar9 * Global_22830.f_5483) + iVar8)] = fVar42;
										if (Global_22830.f_5340[iVar8] == 2)
										{
											iVar69 = (iVar8 - 1);
											while (iVar69 >= 0)
											{
												if (Global_22830.f_5340[iVar69] == 2)
												{
													Global_22830.f_8516[((iVar9 * Global_22830.f_5483) + iVar69)] = (Global_22830.f_8516[((iVar9 * Global_22830.f_5483) + iVar69)] - Global_22830.f_5325[iVar8]);
												}
												iVar69 = (iVar69 + -1);
											}
										}
									}
									else
									{
										fVar40 = Global_22830.f_8516[((iVar9 * Global_22830.f_5483) + iVar8)];
										fVar41 = Global_22830.f_8557[((iVar9 * Global_22830.f_5483) + iVar8)];
										fVar42 = Global_22830.f_8598[((iVar9 * Global_22830.f_5483) + iVar8)];
									}
									if (bVar52)
									{
										if (func_445(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22830.f_5340[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_445(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_431(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0xEBF08DA37D86CD05(func_439(26), func_437(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_445(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_445(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_431(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0xEBF08DA37D86CD05(func_439(27), func_437(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
									if (unk_0x2E87280918B16506(&(Global_22830.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										bVar50 = false;
										bVar51 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 5 || Global_22830.f_2381[iVar24 /*5*/][iVar14] == 8)
											{
												bVar51 = true;
											}
											else if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 9)
											{
												bVar50 = true;
											}
											iVar14++;
										}
										if (Global_22830.f_2124[iVar24])
										{
											bVar51 = true;
										}
										func_425(bVar32, Global_22830.f_1610[iVar24], Global_22830.f_1867[iVar24], bVar53, 0, bVar51, bVar50);
										if (Global_22830.f_8670 && Global_22830.f_8671 == iVar6)
										{
											func_424(bVar32);
										}
										unk_0xCDDA0C58B818F6B2(&(Global_22830.f_73[iVar24 /*6*/]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 1)
										{
											iVar25++;
											if (unk_0x2E87280918B16506(&(Global_22830.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x26C23BE14F66F202(&(Global_22830.f_73[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 1;
										}
										else if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 8)
										{
											iVar25++;
											if (unk_0x2E87280918B16506(&(Global_22830.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x26C23BE14F66F202(&(Global_22830.f_73[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 8;
										}
										else if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 5)
										{
											if (unk_0x2E87280918B16506(&(Global_22830.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x76DB21247AE4E4E2(&(Global_2725767[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 6)
										{
											if (unk_0x2E87280918B16506(&(Global_22830.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x26C23BE14F66F202(&(Global_2725767[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 7)
										{
											if (unk_0x2E87280918B16506(&(Global_22830.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x76DB21247AE4E4E2(&(Global_2725767[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 9)
										{
											if (unk_0x2E87280918B16506(&(Global_22830.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x76DB21247AE4E4E2(&(Global_2725767[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 2)
										{
											if (unk_0x2E87280918B16506(&(Global_22830.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x2AE954BA77A66307(Global_22830.f_4175[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 3)
										{
											if (unk_0x2E87280918B16506(&(Global_22830.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x957E514A6E999374(Global_22830.f_4432[(iVar21 + iVar27)], Global_22830.f_4561[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 4)
										{
											if ((Global_22830.f_4690[(iVar22 + iVar28)] == 2 || Global_22830.f_4690[(iVar22 + iVar28)] == 51) || Global_22830.f_4690[(iVar22 + iVar28)] == 61)
											{
												if (func_445(Global_22830.f_4690[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (func_445(Global_22830.f_4690[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_431(Global_22830.f_4690[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
														if (iVar5 == 1)
														{
															if (Global_22830.f_5340[iVar8] == 2)
															{
																unk_0xEBF08DA37D86CD05(func_439(Global_22830.f_4690[(iVar22 + iVar28)]), func_437(Global_22830.f_4690[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0xEBF08DA37D86CD05(func_439(Global_22830.f_4690[(iVar22 + iVar28)]), func_437(Global_22830.f_4690[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
									if (unk_0x2E87280918B16506(&(Global_22830.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_22830.f_5340[iVar8] == 2)
										{
											unk_0x1A53079994915FA6(((fVar34 + fVar40) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											unk_0x1A53079994915FA6((fVar34 + fVar40), fVar35, 0);
											if (func_19() && unk_0xB4C854DD86E40FDA(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													if (Global_22830.f_2124[iVar24])
													{
														bVar51 = true;
													}
													func_425(0, Global_22830.f_1610[iVar24], Global_22830.f_1867[iVar24], bVar53, 0, bVar51, bVar50);
													StringCopy(&cVar75, "TEST_LABEL", 16);
													fVar76 = 0f;
													fVar77 = 55f;
													fVar78 = 0.0185f;
													fVar79 = 0.004f;
													fVar80 = 0.02f;
													unk_0x3F03C2D4EFA888BC(0f, (0.35f * 0.7f));
													unk_0x71F4002CB1A0B451(255, 255, 255, 150);
													unk_0xCA4C0AD3CAFF651E((fVar34 - (fVar80 * 0.6f)), (fVar35 + (fVar78 * 0.75f)), 0.0175f, 0.035f, floor(fVar76), floor(fVar76), floor(fVar76), floor(fVar77), 0);
													unk_0xCDDA0C58B818F6B2(&cVar75);
													unk_0x2AE954BA77A66307((Global_22830.f_5995 + iVar30));
													unk_0x1A53079994915FA6((fVar34 - fVar80), (fVar35 + fVar79), 0);
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
											if ((Global_22830.f_4690[(iVar22 + iVar14)] != 2 && Global_22830.f_4690[(iVar22 + iVar14)] != 51) && Global_22830.f_4690[(iVar22 + iVar14)] != 61)
											{
												if (func_445(Global_22830.f_4690[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_445(Global_22830.f_4690[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_431(Global_22830.f_4690[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_22830.f_4690[(iVar22 + iVar14)] == 30)
															{
																unk_0xEBF08DA37D86CD05(func_439(Global_22830.f_4690[(iVar22 + iVar14)]), func_437(Global_22830.f_4690[(iVar22 + iVar14)], bVar32), (Global_22827 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else if (Global_22830.f_5340[iVar8] == 2)
															{
																unk_0xEBF08DA37D86CD05(func_439(Global_22830.f_4690[(iVar22 + iVar14)]), func_437(Global_22830.f_4690[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0xEBF08DA37D86CD05(func_439(Global_22830.f_4690[(iVar22 + iVar14)]), func_437(Global_22830.f_4690[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
									if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_22830.f_2381[iVar24 /*5*/][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_22830.f_5986)
									{
										func_425(bVar32, Global_22830.f_1610[iVar24], Global_22830.f_1867[iVar24], bVar53, 0, 0, 0);
										if (Global_22830.f_8670 && Global_22830.f_8671 == iVar6)
										{
											func_424(bVar32);
										}
										unk_0x27ED46EA48C0A455("NUMBER");
										unk_0x2AE954BA77A66307(Global_22830.f_4175[iVar20]);
										fVar41 = unk_0x63F498818B4DEE3E(1);
										fVar40 = 0f;
										if (Global_22830.f_5340[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_22830.f_5340[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_22830.f_8516[((iVar9 * Global_22830.f_5483) + iVar8)] = fVar40;
										Global_22830.f_8557[((iVar9 * Global_22830.f_5483) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_22830.f_8516[((iVar9 * Global_22830.f_5483) + iVar8)];
										fVar41 = Global_22830.f_8557[((iVar9 * Global_22830.f_5483) + iVar8)];
									}
									if (bVar52)
									{
										if (func_445(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22830.f_5340[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_445(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_431(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0xEBF08DA37D86CD05(func_439(26), func_437(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_445(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_445(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_431(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0xEBF08DA37D86CD05(func_439(27), func_437(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_425(bVar32, Global_22830.f_1610[iVar24], Global_22830.f_1867[iVar24], bVar53, 0, 0, 0);
										func_423((fVar34 + fVar40), fVar35, "NUMBER", Global_22830.f_4175[iVar20], 0);
									}
								}
								bVar39 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_22830.f_5986)
									{
										func_425(bVar32, Global_22830.f_1610[iVar24], Global_22830.f_1867[iVar24], bVar53, 0, 0, 0);
										if (Global_22830.f_8670 && Global_22830.f_8671 == iVar6)
										{
											func_424(bVar32);
										}
										unk_0x27ED46EA48C0A455("NUMBER");
										unk_0x957E514A6E999374(Global_22830.f_4432[iVar21], Global_22830.f_4561[iVar21]);
										fVar41 = unk_0x63F498818B4DEE3E(1);
										fVar40 = 0f;
										if (Global_22830.f_5340[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_22830.f_5340[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_22830.f_8516[((iVar9 * Global_22830.f_5483) + iVar8)] = fVar40;
										Global_22830.f_8557[((iVar9 * Global_22830.f_5483) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_22830.f_8516[((iVar9 * Global_22830.f_5483) + iVar8)];
										fVar41 = Global_22830.f_8557[((iVar9 * Global_22830.f_5483) + iVar8)];
									}
									if (bVar52)
									{
										if (func_445(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_22830.f_5340[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_445(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_431(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0xEBF08DA37D86CD05(func_439(26), func_437(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_445(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_445(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_431(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0xEBF08DA37D86CD05(func_439(27), func_437(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
									}
									func_425(bVar32, Global_22830.f_1610[iVar24], Global_22830.f_1867[iVar24], bVar53, 0, 0, 0);
									func_422((fVar34 + fVar40), fVar35, "NUMBER", Global_22830.f_4432[iVar21], Global_22830.f_4561[iVar21]);
								}
								bVar39 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_445(Global_22830.f_4690[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_22830.f_5986)
										{
											fVar42 = fVar36;
											fVar40 = 0f;
											if (Global_22830.f_5340[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_22830.f_5340[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_22830.f_8516[((iVar9 * Global_22830.f_5483) + iVar8)] = fVar40;
											Global_22830.f_8598[((iVar9 * Global_22830.f_5483) + iVar8)] = fVar42;
										}
										else
										{
											fVar40 = Global_22830.f_8516[((iVar9 * Global_22830.f_5483) + iVar8)];
											fVar42 = Global_22830.f_8598[((iVar9 * Global_22830.f_5483) + iVar8)];
										}
										if (bVar52)
										{
											if (func_445(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_22830.f_5340[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_445(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_431(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														unk_0xEBF08DA37D86CD05(func_439(26), func_437(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
											if (func_445(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_445(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_431(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														unk_0xEBF08DA37D86CD05(func_439(27), func_437(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_445(Global_22830.f_4690[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_431(Global_22830.f_4690[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												unk_0xEBF08DA37D86CD05(func_439(Global_22830.f_4690[iVar22]), func_437(Global_22830.f_4690[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), (fVar36 * func_421(Global_22830.f_4690[iVar22])), (fVar37 * func_421(Global_22830.f_4690[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
						if (Global_22830.f_5313[iVar8] == 5)
						{
							if (Global_22830.f_5325[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_22830.f_5325[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_22830.f_5325[iVar8]);
							if (Global_22830.f_5332[iVar8])
							{
								if (func_445(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_22830.f_5325[iVar8]);
					}
					iVar8++;
				}
				if (bVar39)
				{
					if (bVar33)
					{
						Global_22830.f_8295[iVar9] = iVar6;
						Global_22830.f_5997 = iVar6;
						iVar9++;
						if (Global_22830.f_5613[iVar6])
						{
							iVar13++;
						}
						if (Global_22830.f_6002[iVar6] != 0f)
						{
							fVar67 = (fVar67 + Global_22830.f_6002[iVar6]);
						}
						else
						{
							fVar67 = (fVar67 + 0.034722f);
						}
					}
					if (!Global_22830.f_5985)
					{
						Global_22830.f_5742[iVar6] = 1;
						if (Global_22830.f_5484[iVar6])
						{
							if (bVar32)
							{
								Global_22830.f_5991 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_22830.f_5991 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_22830.f_5985)
			{
				Global_22830.f_5987 = ((fVar57 + fVar67) + (0.00277776f * IntToFloat(iVar12)));
				Global_22830.f_5990 = iVar11;
				Global_22830.f_5988 = iVar10;
				Global_22830.f_5985 = 1;
			}
		}
		if (!Global_22830.f_5986)
		{
			Global_22830.f_5989 = iVar9;
			Global_22830.f_5986 = 1;
		}
		iVar5++;
	}
	Global_22830.f_6133 = fVar49;
	Global_22830.f_6135 = unk_0x320D1840B6DAA1CC();
	unk_0x7ED668FC4CB0F4C4(Global_22830.f_6133);
	if (!Global_22830.f_8639)
	{
		func_420(0);
	}
	Global_22830.f_8639 = 0;
	if (bParam2)
	{
		unk_0xAC765EF46E85A446(10);
	}
	unk_0xAC765EF46E85A446(6);
	unk_0xAC765EF46E85A446(7);
	unk_0xAC765EF46E85A446(9);
	unk_0xAC765EF46E85A446(8);
	if (bParam0)
	{
		func_419(1);
	}
	unk_0xB5A50A903B9AB61B();
}

void func_419(int iParam0)
{
	Global_1645739.f_1121 = iParam0;
}

void func_420(int iParam0)
{
	if (func_134())
	{
		return;
	}
	if (!Global_19954.f_1 == 1)
	{
		if (func_51(0))
		{
			func_130(iParam0);
		}
		unk_0xCED9E32812D6C7C7(&Global_7825, 2);
	}
}

float func_421(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 53:
		case 44:
		case 45:
		case 46:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_422(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)
{
	unk_0xCDDA0C58B818F6B2(sParam2);
	unk_0x957E514A6E999374(uParam3, uParam4);
	unk_0x1A53079994915FA6(fParam0, fParam1, 0);
}

void func_423(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0xCDDA0C58B818F6B2(sParam2);
	unk_0x2AE954BA77A66307(iParam3);
	unk_0x1A53079994915FA6(fParam0, fParam1, iParam4);
}

void func_424(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0x2F046C9381D8E91B(Global_22830.f_8667[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0x2F046C9381D8E91B(Global_22830.f_8667[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0x71F4002CB1A0B451(iVar0, iVar1, iVar2, 255);
}

void func_425(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_426(Global_22830.f_6268[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0x2F046C9381D8E91B(1, &iVar0, &iVar1, &iVar2, &iVar3);
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
			unk_0x71F4002CB1A0B451(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0x2F046C9381D8E91B(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x71F4002CB1A0B451(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0x2F046C9381D8E91B(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x71F4002CB1A0B451(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0x71F4002CB1A0B451(155, 155, 155, 255);
		}
		else
		{
			unk_0x71F4002CB1A0B451(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0x71F4002CB1A0B451(0, 0, 0, floor((255f * 0.8f)));
		}
		else
		{
			unk_0x2F046C9381D8E91B(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0x71F4002CB1A0B451(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0x71F4002CB1A0B451(155, 155, 155, 255);
	}
	else
	{
		unk_0x71F4002CB1A0B451(155, 155, 155, 255);
	}
	unk_0x3F03C2D4EFA888BC(0f, 0.35f);
	unk_0xB8306DA8A5D18C52(1);
	if (bParam5)
	{
		unk_0x3F03C2D4EFA888BC(0f, 0.425f);
		unk_0xF68E5437AF17EFBC(4);
	}
	else if (bParam6)
	{
		unk_0x3F03C2D4EFA888BC(0f, 0.425f);
		unk_0xF68E5437AF17EFBC(6);
	}
	else
	{
		unk_0xF68E5437AF17EFBC(0);
	}
	unk_0xE835F806BE49C67B(0f, 1f);
	unk_0x21FC15AE6B6188C4(0);
	unk_0xE570B77D940667FF(0, 0, 0, 0, 0);
	unk_0xB133F9D28DFD4E1E(0, 0, 0, 0, 0);
}

void func_426(int iParam0, var uParam1, var uParam2, var uParam3)
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

void func_427(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_103(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_447(bParam4, bParam8))
	{
		return;
	}
	if (func_429())
	{
		return;
	}
	if (unk_0xD199EE48D2842EB1())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_16(unk_0x9E2D6C50374FCFA9(), 0))
		{
			return;
		}
	}
	if (unk_0x8FE9914D4872D601())
	{
		if (unk_0x9417F1137725B4B3() == 0 || unk_0xD199EE48D2842EB1())
		{
			return;
		}
	}
	if (Global_22830.f_5026 != 0)
	{
		if (unk_0xB1C1E679BD17A4F0(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_22830.f_5026)
			{
				if (Global_22830.f_5283[iVar1] != 361)
				{
					StringCopy(&(Global_22830.f_5028[iVar1 /*16*/]), unk_0x2018949B2C9FD96A(2, Global_22830.f_5283[iVar1], 1), 64);
				}
				else if (Global_22830.f_5296[iVar1] != 32)
				{
					StringCopy(&(Global_22830.f_5028[iVar1 /*16*/]), unk_0x19214818F925D149(2, Global_22830.f_5296[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_22830.f_5027 = 0;
		}
		if (!Global_22830.f_5027)
		{
			unk_0xEA5DEA46C3EE64D3(Global_22830.f_5917[iVar0 /*10*/], "CLEAR_ALL");
			unk_0x6F06CF0E9AB02847();
			unk_0xEA5DEA46C3EE64D3(Global_22830.f_5917[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0xCA5D23E5F0F0306F((1f - (Global_22830.f_5338 / 100f)));
			unk_0x6F06CF0E9AB02847();
			if (unk_0x8FE9914D4872D601())
			{
				unk_0xEA5DEA46C3EE64D3(Global_22830.f_5917[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0xD7D6BA6E36AEC182(1);
				unk_0x6F06CF0E9AB02847();
			}
			iVar1 = 0;
			while (iVar1 < Global_22830.f_5026)
			{
				if (unk_0x2E87280918B16506(&(Global_22830.f_5221[iVar1 /*4*/])) != unk_0x2E87280918B16506("PREV"))
				{
					unk_0xEA5DEA46C3EE64D3(Global_22830.f_5917[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x4F47E317C74C543B(iVar1);
					func_428(&(Global_22830.f_5028[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x2E87280918B16506(&(Global_22830.f_5221[iVar2 /*4*/])) == unk_0x2E87280918B16506("PREV"))
					{
						func_428(&(Global_22830.f_5028[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_22830.f_5270[iVar1] == -1)
					{
						func_252(&(Global_22830.f_5221[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_22830.f_5270[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						unk_0x4ADC8B166E139423(&(Global_22830.f_5221[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x28594D0D61DB1278(iVar3, 70);
						}
						else
						{
							unk_0x2AE954BA77A66307(iVar3);
						}
						unk_0xD1D4F8D5470AFA4C();
					}
					if (unk_0x8FE9914D4872D601())
					{
						if (Global_22830.f_5283[iVar1] != 361 && unk_0xE2D0C323A1AE5D85(Global_22830.f_5309, iVar1))
						{
							unk_0xD7D6BA6E36AEC182(1);
							unk_0x4F47E317C74C543B(Global_22830.f_5283[iVar1]);
						}
						else
						{
							unk_0xD7D6BA6E36AEC182(0);
							unk_0x4F47E317C74C543B(361);
						}
					}
					unk_0x6F06CF0E9AB02847();
				}
				iVar1++;
			}
			if (unk_0x2E87280918B16506(&(Global_4533983.f_16)) != unk_0x2E87280918B16506(""))
			{
				unk_0xEA5DEA46C3EE64D3(Global_22830.f_5917[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x4F47E317C74C543B(Global_22830.f_5026);
				func_428(&Global_4533983);
				if (Global_4533983.f_20 == -1)
				{
					func_252(&(Global_4533983.f_16));
				}
				else
				{
					iVar4 = Global_22830.f_5270[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					unk_0x4ADC8B166E139423(&(Global_4533983.f_16));
					if (bParam5)
					{
						unk_0x28594D0D61DB1278(iVar4, 70);
					}
					else
					{
						unk_0x2AE954BA77A66307(iVar4);
					}
					unk_0xD1D4F8D5470AFA4C();
				}
				unk_0x6F06CF0E9AB02847();
			}
			unk_0xEA5DEA46C3EE64D3(Global_22830.f_5917[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x4F47E317C74C543B(0);
			unk_0x4F47E317C74C543B(0);
			unk_0x4F47E317C74C543B(0);
			unk_0x4F47E317C74C543B(80);
			unk_0x6F06CF0E9AB02847();
			unk_0xEA5DEA46C3EE64D3(Global_22830.f_5917[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_22830.f_5339)
			{
				unk_0x4F47E317C74C543B(1);
			}
			else
			{
				unk_0x4F47E317C74C543B(0);
			}
			unk_0x6F06CF0E9AB02847();
			Global_22830.f_5027 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_22830.f_5026)
		{
			if (Global_22830.f_5270[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0xEA5DEA46C3EE64D3(Global_22830.f_5917[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x4F47E317C74C543B(iVar1);
					unk_0x4ADC8B166E139423(&(Global_22830.f_5221[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x28594D0D61DB1278(iParam2, 70);
					}
					else
					{
						unk_0x2AE954BA77A66307(iParam2);
					}
					unk_0xD1D4F8D5470AFA4C();
					unk_0x6F06CF0E9AB02847();
				}
			}
			iVar1++;
		}
		if (Global_4533983.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0xEA5DEA46C3EE64D3(Global_22830.f_5917[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x4F47E317C74C543B(iVar1);
				unk_0x4ADC8B166E139423(&(Global_4533983.f_16));
				if (bParam5)
				{
					unk_0x28594D0D61DB1278(iParam2, 70);
				}
				else
				{
					unk_0x2AE954BA77A66307(iParam2);
				}
				unk_0xD1D4F8D5470AFA4C();
				unk_0x6F06CF0E9AB02847();
			}
		}
		unk_0xA5AAB00FA8C570A4(76, 66);
		unk_0x98F560BC13E5293F(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_22830.f_8674)
			{
				unk_0xE73F8CB95153F5B1(15, 0f, -0.0375f);
				Global_22830.f_8674 = 1;
			}
		}
		else if (Global_22830.f_8674)
		{
			unk_0x4FEF096D3AB4AA8C(15);
			Global_22830.f_8674 = 0;
		}
		unk_0xB5A50A903B9AB61B();
		if (Global_22830.f_5312)
		{
			unk_0xA5AAB00FA8C570A4(82, 66);
			unk_0x98F560BC13E5293F(0f, 0f, 0f, 0f);
			unk_0x694170BB080C08FF(Global_22830.f_5917[iVar0 /*10*/], Global_22830.f_5310, Global_22830.f_5311, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0xB5A50A903B9AB61B();
		}
		else
		{
			unk_0xC4353D240DCE9533(Global_22830.f_5917[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_428(var uParam0)
{
	unk_0x341872E4D54CD053(uParam0);
}

int func_429()
{
	struct<3> Var0;
	
	if (Global_19954.f_1 > 3)
	{
		return 1;
	}
	if (func_430())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0xC81489026785778A(&Var0);
		if (Global_19899 == 0)
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

int func_430()
{
	if (unk_0xB4C854DD86E40FDA(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_431(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	unk_0x2F046C9381D8E91B(1, iParam2, iParam3, iParam4, iParam5);
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
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 53:
		case 39:
		case 40:
		case 38:
		case 44:
		case 45:
		case 46:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 54:
			*iParam5 = 100;
			break;
		
		case 62:
			*iParam5 = 100;
			break;
		
		case 55:
			unk_0x2F046C9381D8E91B(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_432(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x2F046C9381D8E91B(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0xF68E5437AF17EFBC(0);
	unk_0x3F03C2D4EFA888BC(0f, 0.35f);
	unk_0x28EC5961FD3B75F0(2);
	unk_0x71F4002CB1A0B451(iVar0, iVar1, iVar2, iVar3);
	unk_0xE835F806BE49C67B(fParam0, ((Global_22827 + Global_22829) - 0.0046875f));
	unk_0x21FC15AE6B6188C4(0);
	unk_0xE570B77D940667FF(0, 0, 0, 0, 0);
	unk_0xB133F9D28DFD4E1E(0, 0, 0, 0, 0);
}

void func_433(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0xCDDA0C58B818F6B2(sParam2);
	unk_0x2AE954BA77A66307(uParam3);
	unk_0x2AE954BA77A66307(uParam4);
	unk_0x1A53079994915FA6(fParam0, fParam1, 0);
}

float func_434(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0xE8F6C1F695B25B91(sParam0))
	{
		if (unk_0x2E87280918B16506(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_435();
	unk_0x27ED46EA48C0A455(sParam0);
	unk_0x2AE954BA77A66307(uParam1);
	unk_0x2AE954BA77A66307(uParam2);
	return unk_0x63F498818B4DEE3E(1);
}

void func_435()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x2F046C9381D8E91B(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_22830.f_8649)
	{
		iVar0 = Global_22830.f_8645;
		iVar1 = Global_22830.f_8646;
		iVar2 = Global_22830.f_8647;
		iVar3 = Global_22830.f_8648;
	}
	unk_0xF68E5437AF17EFBC(0);
	unk_0x3F03C2D4EFA888BC(0f, 0.35f);
	unk_0x71F4002CB1A0B451(iVar0, iVar1, iVar2, iVar3);
	unk_0xE835F806BE49C67B((Global_22827 + 0.0046875f), ((Global_22827 + Global_22829) - 0.0046875f));
	unk_0x21FC15AE6B6188C4(0);
	unk_0xE570B77D940667FF(0, 0, 0, 0, 0);
	unk_0xB133F9D28DFD4E1E(0, 0, 0, 0, 0);
}

void func_436(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0xCA4C0AD3CAFF651E((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_437(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0xACC32B78196FBC2A(&(Global_22830.f_7286[iParam0 /*16*/])))
	{
		if (unk_0x2E87280918B16506(&(Global_22830.f_7286[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var2 = { func_209(unk_0x9E2D6C50374FCFA9()) };
			if (unk_0xF9518F925A4A1894(&Var2, &uVar1))
			{
				return func_438(&uVar1);
			}
		}
		else
		{
			return func_438(&(Global_22830.f_7286[iParam0 /*16*/]));
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
		
		case 51:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 52:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 54:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 55:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 56:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 57:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 58:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 59:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 60:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 62:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 61:
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

var func_438(var uParam0)
{
	return uParam0;
}

char* func_439(int iParam0)
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0xACC32B78196FBC2A(&(Global_22830.f_6277[iParam0 /*16*/])))
	{
		if (unk_0x2E87280918B16506(&(Global_22830.f_6277[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var1 = { func_209(unk_0x9E2D6C50374FCFA9()) };
			unk_0xF9518F925A4A1894(&Var1, &uVar0);
			return func_438(&uVar0);
		}
		else
		{
			return func_438(&(Global_22830.f_6277[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_440(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_22830.f_5475 > iParam0)
	{
		return;
	}
	if (Global_22830.f_5475 >= 128)
	{
		return;
	}
	if (Global_22830.f_5477 >= 256)
	{
		return;
	}
	if (Global_22830.f_6000 < Global_22830.f_5998)
	{
		return;
	}
	if (Global_22830.f_5475 != iParam0)
	{
		Global_22830.f_5475 = iParam0;
		Global_22830.f_5476 = 0;
	}
	iVar0 = Global_22830.f_5313[Global_22830.f_5476];
	if (iVar0 != 1)
	{
		while (Global_22830.f_5476 < 4 && iVar0 != 1)
		{
			Global_22830.f_5476++;
			iVar0 = Global_22830.f_5313[Global_22830.f_5476];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_22830.f_73[Global_22830.f_5477 /*6*/]), sParam1, 24);
	if (!unk_0xACC32B78196FBC2A(sParam1) && !unk_0xE73671E3D37CF79E(sParam1))
	{
	}
	Global_22830.f_1610[Global_22830.f_5477] = bParam3;
	Global_22830.f_1867[Global_22830.f_5477] = iParam4;
	Global_22830.f_2124[Global_22830.f_5477] = iParam6;
	Global_22830.f_5477++;
	if (!bParam3)
	{
		func_443(Global_22830.f_5475, 1);
	}
	else
	{
		func_443(Global_22830.f_5475, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_442(&(Global_22830.f_73[Global_22830.f_5477 /*6*/]));
		if (Global_22830.f_5332[Global_22830.f_5476])
		{
			func_445(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_22830.f_5325[Global_22830.f_5476])
		{
			Global_22830.f_5325[Global_22830.f_5476] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_441(&(Global_22830.f_73[Global_22830.f_5477 /*6*/]));
			if (fVar4 > Global_22830.f_6002[iParam0])
			{
				Global_22830.f_6002[iParam0] = fVar4;
			}
		}
	}
	unk_0xCED9E32812D6C7C7(&(Global_22830.f_5346[iParam0]), Global_22830.f_5476);
	Global_22830.f_5476++;
	Global_22830.f_6001 = 1;
	Global_22830.f_5999 = (Global_22830.f_5477 - 1);
	Global_22830.f_6000 = 0;
	Global_22830.f_5998 = iParam2;
}

float func_441(char* sParam0)
{
	if (!unk_0xE73671E3D37CF79E(sParam0))
	{
	}
	return unk_0xC23444E9B1B8D081(0.35f, 0);
}

float func_442(char* sParam0)
{
	if (!unk_0xE8F6C1F695B25B91(sParam0))
	{
		if (unk_0x2E87280918B16506(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_425(0, 1, 0, 0, 0, 0, 0);
	unk_0x27ED46EA48C0A455(sParam0);
	return unk_0x63F498818B4DEE3E(1);
}

void func_443(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = floor((to_float(iParam0) / 32f));
	if (bParam1)
	{
		unk_0xCED9E32812D6C7C7(&(Global_22830.f_6272[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0xB0550BC91B0159D6(&(Global_22830.f_6272[iVar0]), (iParam0 - iVar0 * 32));
	}
}

int func_444()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0x604161EB05F29E6D(&iVar0, &iVar1);
	fVar2 = (to_float(iVar0) / to_float(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

int func_445(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	
	StringCopy(&cVar0, func_439(iParam0), 64);
	StringCopy(&cVar1, func_437(iParam0, bParam1), 64);
	if (unk_0x2E87280918B16506(&cVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0x604161EB05F29E6D(&iVar2, &iVar3);
			fVar5 = unk_0xF4CC509EEB975296(0);
			if (func_444())
			{
				iVar2 = round((to_float(iVar3) * fVar5));
			}
			fVar6 = (to_float(iVar2) / to_float(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_444())
			{
				fVar4 = 1f;
			}
			if (unk_0xB4C854DD86E40FDA(joaat("director_mode")) > 0)
			{
				unk_0xBE74EC1CD33D16EA(&iVar2, &iVar3);
			}
			iVar2 = round((to_float(iVar2) / fVar4));
			iVar3 = round((to_float(iVar3) / fVar4));
		}
		else
		{
			unk_0xBE74EC1CD33D16EA(&iVar2, &iVar3);
		}
		Var7 = { unk_0x7DF13542ADA68880(&cVar0, &cVar1) };
		Var7.x = (Var7.x * (func_446(iParam0) / fVar4));
		Var7.f_1 = (Var7.f_1 * (func_446(iParam0) / fVar4));
		if (!bParam2)
		{
			Var7.x = (Var7.x - 2f);
			Var7.f_1 = (Var7.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var7.x = 288f;
			Var7.f_1 = 106f;
		}
		if (iParam0 == 29 && unk_0x2E87280918B16506(&(Global_22830.f_7286[29 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var7.x = 106f;
			Var7.f_1 = 106f;
		}
		*fParam3 = ((Var7.x / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((Var7.f_1 / IntToFloat(iVar3)) / (Var7.x / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0xD87C62FA7E75D2C5() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_22829)
			{
				*fParam4 = (*fParam4 * (Global_22829 / *fParam3));
				*fParam3 = Global_22829;
			}
		}
		return 1;
	}
	return 0;
}

float func_446(int iParam0)
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
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 62:
			return 0.5f;
			break;
		
		case 61:
			return 0.8f;
			break;
	}
	return 1f;
}

int func_447(bool bParam0, bool bParam1)
{
	if (Global_2703656.f_1585.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0xE9E8955A780DDA01() || (func_417(8, -1) && func_448() != 65)) || (unk_0x1A76A9A82BD6228C() != 0 && !bParam1)) || (unk_0x04458B4E5D9E466A() && !bParam0)) || unk_0x06C559386AD19942()) || Global_78112) || Global_22830.f_8673) || unk_0x3E6C9DAD84CEFED1()) || Global_100026.f_1457)
	{
		return 0;
	}
	return 1;
}

int func_448()
{
	return Global_1574980;
}

void func_449(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!bParam2)
	{
		if (uParam0->f_340 == 0)
		{
			if (uParam0->f_1[uParam0->f_341] == 12)
			{
				if (!bParam4)
				{
					func_456("DEL_VEH_SEL1ac", 100, 0);
				}
				else
				{
					func_456("CAS_VEH_SELLV", 0, 0);
					func_455(unk_0x01E2429B82E280E6(iParam3));
				}
			}
			else if (!bParam4)
			{
				func_456("DEL_VEH_SEL1", 100, 0);
			}
			else
			{
				func_456("CAS_VEH_SELLV", 0, 0);
				func_455(unk_0x01E2429B82E280E6(iParam3));
			}
		}
		else if (unk_0xE2D0C323A1AE5D85(uParam0->f_347, 2))
		{
			if (func_450(uParam0->f_1[uParam0->f_341], 0, -1, 1))
			{
				set_warning_message_with_header("PLYVEH_CM_CONT", "PLYVEH_CM_1Bac", 36, 0, false, -1, 0, 0, true, 0);
			}
			else
			{
				set_warning_message_with_header("PLYVEH_CM_CONT", "PLYVEH_CM_1B", 36, 0, false, -1, 0, 0, true, 0);
			}
		}
		else if (unk_0xE2D0C323A1AE5D85(uParam0->f_339, uParam0->f_342))
		{
			if (func_450(uParam0->f_1[uParam0->f_341], 0, -1, 1))
			{
				func_456("DEL_VEH_SEL2ac", 100, 0);
			}
			else
			{
				func_456("DEL_VEH_SEL2", 100, 0);
			}
		}
		else if (bParam1)
		{
			if (func_450(uParam0->f_1[uParam0->f_341], 0, -1, 0))
			{
				func_456("MP_PROP_SC_3ac", 100, 0);
			}
			else
			{
				func_456("MP_PROP_SC_3", 100, 0);
			}
		}
		else if (func_450(uParam0->f_1[uParam0->f_341], 0, -1, 1))
		{
			func_456("MP_PROP_SC_1ac", 100, 0);
		}
		else
		{
			func_456("MP_PROP_SC_1", 100, 0);
		}
	}
}

int func_450(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (bParam1)
	{
		func_453(iParam0, &iVar0, iParam2);
	}
	else
	{
		func_400(iParam0, &iVar0);
	}
	if (iVar0 >= 0)
	{
		if (bParam3)
		{
		}
		if (iVar0 >= func_451(12) && iVar0 < func_282(12))
		{
			return 1;
		}
	}
	return 0;
}

int func_451(int iParam0)
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
		
		case 26:
			return 317;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_291(iParam0);
		return func_452(iVar0);
	}
	return (func_283(iParam0, -1, 1) * iParam0);
}

int func_452(int iParam0)
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

void func_453(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	*uParam1 = -1;
	iVar0 = 0;
	while (iVar0 < 337)
	{
		if (iParam0 == (func_454(iVar0, iParam2) - 1))
		{
			*uParam1 = iVar0;
			return;
		}
		iVar0++;
	}
}

int func_454(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_67(func_348(iParam0), iParam1);
	iVar0 = (iVar0 + func_67(func_347(iParam0), iParam1));
	return iVar0;
}

void func_455(char* sParam0)
{
	if (Global_22830.f_5022 >= 3 || Global_22830.f_5019 >= 4)
	{
		return;
	}
	Global_22830.f_4953[Global_22830.f_5019] = 1;
	Global_22830.f_5019++;
	StringCopy(&(Global_22830.f_4970[Global_22830.f_5022 /*16*/]), sParam0, 64);
	Global_22830.f_5022++;
}

void func_456(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_22830.f_4947), sParam0, 24);
	Global_22830.f_5019 = 0;
	Global_22830.f_5020 = 0;
	Global_22830.f_5021 = 0;
	Global_22830.f_5022 = 0;
	Global_22830.f_5023 = iParam1;
	Global_22830.f_5024 = unk_0x320D1840B6DAA1CC();
	Global_22830.f_5025 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22830.f_4953[iVar0] = 0;
		iVar0++;
	}
}

void func_457(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<2> Var6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	struct<3> Var12;
	struct<16> Var13;
	struct<4> Var14;
	
	iVar0 = 0;
	func_512(0, 0);
	if (bParam2)
	{
		func_507(func_511(), 0);
	}
	func_506(1, 1, 0, 0, 0);
	func_505(1, 2, 1, 1, 1);
	func_504(0, 0, 0, 0, 0);
	bVar2 = false;
	bVar7 = func_390(iParam1);
	iVar11 = 1;
	switch (uParam0->f_340)
	{
		case 0:
			uParam0->f_349 = 0;
			func_503("DEL_VEH_SEL0");
			iVar1 = 0;
			while (iVar1 < 27)
			{
				iVar3 = func_411(iVar1, -1);
				if ((iVar3 > 0 && func_502(iVar3)) && func_494(iVar1))
				{
					if (!func_492(iParam1, iVar1))
					{
					}
					else
					{
						Var14 = { Global_1312124[iVar3 /*1951*/].f_16 };
						if (iVar3 == 116)
						{
							StringCopy(&Var14, func_490(func_491(unk_0x9E2D6C50374FCFA9())), 16);
						}
						if (iVar3 == 117)
						{
							StringCopy(&Var14, func_488(func_489(unk_0x9E2D6C50374FCFA9())), 16);
						}
						if (iVar3 == 118)
						{
							StringCopy(&Var14, "MP_BHUB_CLUBG", 16);
						}
						if (iVar3 == 119)
						{
							StringCopy(&Var14, func_487(1), 16);
						}
						if (iVar3 == 120)
						{
							StringCopy(&Var14, func_487(2), 16);
						}
						if (iVar3 == 121)
						{
							StringCopy(&Var14, func_487(3), 16);
						}
						if (iVar3 == 122)
						{
							StringCopy(&Var14, func_486(1), 16);
						}
						if (iVar3 == 123)
						{
							StringCopy(&Var14, func_486(2), 16);
						}
						if (iVar3 == 124)
						{
							StringCopy(&Var14, func_486(3), 16);
						}
						if (iVar3 == 125)
						{
							StringCopy(&Var14, "CASINO_GARNAME", 16);
						}
						if (iVar3 == 126)
						{
							StringCopy(&Var14, "ARCADE_GARNAME", 16);
						}
						if (iVar3 == 127)
						{
							StringCopy(&Var14, "AUT_SHP_GAR", 16);
						}
						if (iVar3 == 128)
						{
							StringCopy(&Var14, "FIXER_GARNAME", 16);
						}
						if (!func_485())
						{
							if (!func_484() && !func_483(iVar3))
							{
								func_440(iVar0, &Var14, 0, 1, 0, 0, 0);
							}
							else
							{
								Var6 = { Var14 };
								StringConCat(&Var6, "S", 16);
								func_440(iVar0, &Var6, 0, 1, 0, 0, 0);
							}
						}
						else
						{
							func_440(iVar0, "PIM_DNAME", 1, 1, 0, 0, 0);
							func_482(unk_0xAEF70623D03F7B02(&Var14), 0, 1, 1);
						}
						uParam0->f_1[iVar0] = iVar1;
						iVar0++;
					}
				}
				iVar1++;
			}
			if (((((func_21(5395, -1, 0) != 0 && func_67(15270, -1) == 7) && !Global_262145.f_20875) && func_472(iParam1, 156)) && !unk_0x4262B4DCEADC2695(iParam1)) && !unk_0xD6F7D32A98E07F93(iParam1))
			{
				func_440(iVar0, func_471(0), 0, 1, 0, 0, 0);
				uParam0->f_1[iVar0] = func_470(0);
				iVar0++;
			}
			if (func_414(-1) && func_472(iParam1, 223))
			{
				func_440(iVar0, func_471(2), 0, 1, 0, 0, 0);
				uParam0->f_1[iVar0] = func_470(2);
				iVar0++;
			}
			if (func_412(-1) && func_472(iParam1, 278))
			{
				func_440(iVar0, func_471(3), 0, 1, 0, 0, 0);
				uParam0->f_1[iVar0] = func_470(3);
				iVar0++;
			}
			uParam0->f_343 = iVar0;
			func_469(uParam0->f_341, 1, 1);
			break;
		
		case 1:
			if (unk_0x4262B4DCEADC2695(iParam1) || unk_0xD6F7D32A98E07F93(iParam1))
			{
				func_503("DEL_VEH_SEL3ac");
			}
			else
			{
				func_503("DEL_VEH_SEL3");
			}
			uParam0->f_339 = 0;
			iVar4 = func_451(uParam0->f_349);
			iVar5 = (10 + func_451(uParam0->f_349));
			if (uParam0->f_349 >= 27)
			{
				iVar10 = func_291(uParam0->f_349);
				iVar1 = 0;
				while (iVar1 < func_468(iVar10))
				{
					iVar8 = (iVar1 + iVar4);
					if (!bVar7)
					{
						if (func_399(iVar8))
						{
							bVar2 = true;
						}
					}
					else if (!func_399(iVar8))
					{
						bVar2 = true;
					}
					if (!func_472(iParam1, iVar8))
					{
						bVar2 = true;
					}
					if (!bVar2)
					{
						func_410(iVar8, &iVar9, 1);
						if ((iVar9 >= 0 && Global_1585844[iVar9 /*142*/].f_66 != 0) && unk_0x51046EEE00E2BBDA(Global_1585844[iVar9 /*142*/].f_66))
						{
							iVar11 = 1;
							StringCopy(&Var12, "", 24);
							if (func_467(&(Global_1585844[iVar9 /*142*/])))
							{
								iVar11++;
							}
							if (func_466(Global_1585844[iVar9 /*142*/].f_66, Global_1585844[iVar9 /*142*/].f_77, Global_1585844[iVar9 /*142*/].f_9[10]) && func_465(Global_1585844[iVar9 /*142*/].f_66))
							{
								iVar11++;
							}
							Var13 = { func_463(-1, iVar8, 1) };
							if (unk_0xE2D0C323A1AE5D85(Global_1585844[iVar9 /*142*/].f_103, 1))
							{
								if (unk_0xE2D0C323A1AE5D85(Global_1585844[iVar9 /*142*/].f_103, 2) && !bVar7)
								{
									StringCopy(&Var12, "MP_MAN_VEH_S0", 24);
									StringIntConCat(&Var12, iVar11, 24);
									func_440(iVar0, &Var12, iVar11, 1, 0, 0, 0);
									if (unk_0xACC32B78196FBC2A(&Var13))
									{
										func_462(unk_0x01E2429B82E280E6(Global_1585844[iVar9 /*142*/].f_66), 0);
									}
									else
									{
										func_459(&Var13, 0, 0, 1);
									}
									if (func_467(&(Global_1585844[iVar9 /*142*/])))
									{
										func_462("VEH_LIVERY", 0);
									}
									if (func_466(Global_1585844[iVar9 /*142*/].f_66, Global_1585844[iVar9 /*142*/].f_77, Global_1585844[iVar9 /*142*/].f_9[10]) && func_465(Global_1585844[iVar9 /*142*/].f_66))
									{
										func_462("VEH_TOPL", 0);
									}
									uParam0->f_1[iVar0] = iVar8;
									iVar0++;
								}
								else
								{
									func_440(iVar0, "MP_MAN_VEH_S", 0, 1, 0, 0, 0);
									uParam0->f_1[iVar0] = iVar8;
									unk_0xCED9E32812D6C7C7(&(uParam0->f_339), iVar0);
									iVar0++;
								}
							}
							else if (bVar7)
							{
								if (func_390(Global_1585844[iVar9 /*142*/].f_66))
								{
									if (unk_0xE2D0C323A1AE5D85(Global_1585844[iVar9 /*142*/].f_103, 6))
									{
										StringCopy(&Var12, "MP_MAN_VEH_S1", 24);
										StringIntConCat(&Var12, iVar11, 24);
										func_440(iVar0, &Var12, iVar11, 1, 0, 0, 0);
										if (unk_0xACC32B78196FBC2A(&Var13))
										{
											func_462(unk_0x01E2429B82E280E6(Global_1585844[iVar9 /*142*/].f_66), 0);
										}
										else
										{
											func_459(&Var13, 0, 0, 1);
										}
										if (func_467(&(Global_1585844[iVar9 /*142*/])))
										{
											func_462("VEH_LIVERY", 0);
										}
										if (func_466(Global_1585844[iVar9 /*142*/].f_66, Global_1585844[iVar9 /*142*/].f_77, Global_1585844[iVar9 /*142*/].f_9[10]) && func_465(Global_1585844[iVar9 /*142*/].f_66))
										{
											func_462("VEH_TOPL", 0);
										}
									}
									else
									{
										StringCopy(&Var12, "PIL_MP_VEH_0", 24);
										StringIntConCat(&Var12, iVar11, 24);
										func_440(iVar0, &Var12, iVar11, 1, 0, 0, 0);
										if (unk_0xACC32B78196FBC2A(&Var13))
										{
											func_462(unk_0x01E2429B82E280E6(Global_1585844[iVar9 /*142*/].f_66), 0);
										}
										else
										{
											func_459(&Var13, 0, 0, 1);
										}
										if (func_467(&(Global_1585844[iVar9 /*142*/])))
										{
											func_462("VEH_LIVERY", 0);
										}
										if (func_466(Global_1585844[iVar9 /*142*/].f_66, Global_1585844[iVar9 /*142*/].f_77, Global_1585844[iVar9 /*142*/].f_9[10]) && func_465(Global_1585844[iVar9 /*142*/].f_66))
										{
											func_462("VEH_TOPL", 0);
										}
									}
									uParam0->f_1[iVar0] = iVar8;
									iVar0++;
								}
							}
							else if (!func_390(Global_1585844[iVar9 /*142*/].f_66))
							{
								if (unk_0xE2D0C323A1AE5D85(Global_1585844[iVar9 /*142*/].f_103, 6))
								{
									StringCopy(&Var12, "MP_MAN_VEH_S1", 24);
									StringIntConCat(&Var12, iVar11, 24);
									func_440(iVar0, &Var12, iVar11, 1, 0, 0, 0);
									if (unk_0xACC32B78196FBC2A(&Var13))
									{
										func_462(unk_0x01E2429B82E280E6(Global_1585844[iVar9 /*142*/].f_66), 0);
									}
									else
									{
										func_459(&Var13, 0, 0, 1);
									}
									if (func_467(&(Global_1585844[iVar9 /*142*/])))
									{
										func_462("VEH_LIVERY", 0);
									}
									if (func_466(Global_1585844[iVar9 /*142*/].f_66, Global_1585844[iVar9 /*142*/].f_77, Global_1585844[iVar9 /*142*/].f_9[10]) && func_465(Global_1585844[iVar9 /*142*/].f_66))
									{
										func_462("VEH_TOPL", 0);
									}
								}
								else
								{
									StringCopy(&Var12, "PIL_MP_VEH_0", 24);
									StringIntConCat(&Var12, iVar11, 24);
									func_440(iVar0, &Var12, iVar11, 1, 0, 0, 0);
									if (unk_0xACC32B78196FBC2A(&Var13))
									{
										func_462(unk_0x01E2429B82E280E6(Global_1585844[iVar9 /*142*/].f_66), 0);
									}
									else
									{
										func_459(&Var13, 0, 0, 1);
									}
									if (func_467(&(Global_1585844[iVar9 /*142*/])))
									{
										func_462("VEH_LIVERY", 0);
									}
									if (func_466(Global_1585844[iVar9 /*142*/].f_66, Global_1585844[iVar9 /*142*/].f_77, Global_1585844[iVar9 /*142*/].f_9[10]) && func_465(Global_1585844[iVar9 /*142*/].f_66))
									{
										func_462("VEH_TOPL", 0);
									}
								}
								uParam0->f_1[iVar0] = iVar8;
								iVar0++;
							}
						}
						else
						{
							func_440(iVar0, "MP_MAN_VEH_S", 0, 1, 0, 0, 0);
							uParam0->f_1[iVar0] = iVar8;
							unk_0xCED9E32812D6C7C7(&(uParam0->f_339), iVar0);
							iVar0++;
						}
					}
					iVar1++;
				}
			}
			else
			{
				iVar3 = func_411(uParam0->f_349, -1);
				iVar1 = 0;
				while (iVar1 < func_283(uParam0->f_349, -1, 1))
				{
					iVar8 = (iVar1 + iVar4);
					bVar2 = false;
					if (iVar3 <= 0)
					{
						bVar2 = true;
					}
					else if (Global_1312124[iVar3 /*1951*/].f_33 == 2)
					{
						if (iVar8 >= iVar4 + 2 && iVar8 != iVar5)
						{
							bVar2 = true;
						}
					}
					else if (Global_1312124[iVar3 /*1951*/].f_33 == 6)
					{
						if ((iVar8 >= iVar4 + 6 && iVar8 != iVar5) && iVar8 != iVar5 + 1)
						{
							bVar2 = true;
						}
					}
					if (!bVar7)
					{
						if (iVar8 >= iVar5 && func_399(iVar8))
						{
							bVar2 = true;
						}
					}
					else if (iVar8 < iVar5)
					{
						bVar2 = true;
					}
					if (!func_458(iVar8, iVar3, uParam0->f_349))
					{
						bVar2 = true;
					}
					if (!func_472(iParam1, iVar8))
					{
						bVar2 = true;
					}
					if (!bVar2)
					{
						func_410(iVar8, &iVar9, 1);
						if ((iVar9 >= 0 && Global_1585844[iVar9 /*142*/].f_66 != 0) && unk_0x51046EEE00E2BBDA(Global_1585844[iVar9 /*142*/].f_66))
						{
							iVar11 = 1;
							StringCopy(&Var12, "", 24);
							if (func_467(&(Global_1585844[iVar9 /*142*/])))
							{
								iVar11++;
							}
							if (func_466(Global_1585844[iVar9 /*142*/].f_66, Global_1585844[iVar9 /*142*/].f_77, Global_1585844[iVar9 /*142*/].f_9[10]) && func_465(Global_1585844[iVar9 /*142*/].f_66))
							{
								iVar11++;
							}
							Var13 = { func_463(-1, iVar8, 1) };
							if (unk_0xE2D0C323A1AE5D85(Global_1585844[iVar9 /*142*/].f_103, 1))
							{
								if (unk_0xE2D0C323A1AE5D85(Global_1585844[iVar9 /*142*/].f_103, 2) && !bVar7)
								{
									StringCopy(&Var12, "MP_MAN_VEH_S0", 24);
									StringIntConCat(&Var12, iVar11, 24);
									func_440(iVar0, &Var12, iVar11, 1, 0, 0, 0);
									if (unk_0xACC32B78196FBC2A(&Var13))
									{
										func_462(unk_0x01E2429B82E280E6(Global_1585844[iVar9 /*142*/].f_66), 0);
									}
									else
									{
										func_459(&Var13, 0, 0, 1);
									}
									if (func_467(&(Global_1585844[iVar9 /*142*/])))
									{
										func_462("VEH_LIVERY", 0);
									}
									if (func_466(Global_1585844[iVar9 /*142*/].f_66, Global_1585844[iVar9 /*142*/].f_77, Global_1585844[iVar9 /*142*/].f_9[10]) && func_465(Global_1585844[iVar9 /*142*/].f_66))
									{
										func_462("VEH_TOPL", 0);
									}
									uParam0->f_1[iVar0] = iVar8;
									iVar0++;
								}
								else
								{
									func_440(iVar0, "MP_MAN_VEH_S", 0, 1, 0, 0, 0);
									uParam0->f_1[iVar0] = iVar8;
									unk_0xCED9E32812D6C7C7(&(uParam0->f_339), iVar0);
									iVar0++;
								}
							}
							else if (bVar7)
							{
								if (func_390(Global_1585844[iVar9 /*142*/].f_66))
								{
									if (unk_0xE2D0C323A1AE5D85(Global_1585844[iVar9 /*142*/].f_103, 6))
									{
										StringCopy(&Var12, "MP_MAN_VEH_S1", 24);
										StringIntConCat(&Var12, iVar11, 24);
										func_440(iVar0, &Var12, iVar11, 1, 0, 0, 0);
										if (unk_0xACC32B78196FBC2A(&Var13))
										{
											func_462(unk_0x01E2429B82E280E6(Global_1585844[iVar9 /*142*/].f_66), 0);
										}
										else
										{
											func_459(&Var13, 0, 0, 1);
										}
										if (func_467(&(Global_1585844[iVar9 /*142*/])))
										{
											func_462("VEH_LIVERY", 0);
										}
										if (func_466(Global_1585844[iVar9 /*142*/].f_66, Global_1585844[iVar9 /*142*/].f_77, Global_1585844[iVar9 /*142*/].f_9[10]) && func_465(Global_1585844[iVar9 /*142*/].f_66))
										{
											func_462("VEH_TOPL", 0);
										}
									}
									else
									{
										StringCopy(&Var12, "PIL_MP_VEH_0", 24);
										StringIntConCat(&Var12, iVar11, 24);
										func_440(iVar0, &Var12, iVar11, 1, 0, 0, 0);
										if (unk_0xACC32B78196FBC2A(&Var13))
										{
											func_462(unk_0x01E2429B82E280E6(Global_1585844[iVar9 /*142*/].f_66), 0);
										}
										else
										{
											func_459(&Var13, 0, 0, 1);
										}
										if (func_467(&(Global_1585844[iVar9 /*142*/])))
										{
											func_462("VEH_LIVERY", 0);
										}
										if (func_466(Global_1585844[iVar9 /*142*/].f_66, Global_1585844[iVar9 /*142*/].f_77, Global_1585844[iVar9 /*142*/].f_9[10]) && func_465(Global_1585844[iVar9 /*142*/].f_66))
										{
											func_462("VEH_TOPL", 0);
										}
									}
									uParam0->f_1[iVar0] = iVar8;
									iVar0++;
								}
							}
							else if (!func_390(Global_1585844[iVar9 /*142*/].f_66))
							{
								if (unk_0xE2D0C323A1AE5D85(Global_1585844[iVar9 /*142*/].f_103, 6))
								{
									StringCopy(&Var12, "MP_MAN_VEH_S1", 24);
									StringIntConCat(&Var12, iVar11, 24);
									func_440(iVar0, &Var12, iVar11, 1, 0, 0, 0);
									if (unk_0xACC32B78196FBC2A(&Var13))
									{
										func_462(unk_0x01E2429B82E280E6(Global_1585844[iVar9 /*142*/].f_66), 0);
									}
									else
									{
										func_459(&Var13, 0, 0, 1);
									}
									if (func_467(&(Global_1585844[iVar9 /*142*/])))
									{
										func_462("VEH_LIVERY", 0);
									}
									if (func_466(Global_1585844[iVar9 /*142*/].f_66, Global_1585844[iVar9 /*142*/].f_77, Global_1585844[iVar9 /*142*/].f_9[10]) && func_465(Global_1585844[iVar9 /*142*/].f_66))
									{
										func_462("VEH_TOPL", 0);
									}
								}
								else
								{
									StringCopy(&Var12, "PIL_MP_VEH_0", 24);
									StringIntConCat(&Var12, iVar11, 24);
									func_440(iVar0, &Var12, iVar11, 1, 0, 0, 0);
									if (unk_0xACC32B78196FBC2A(&Var13))
									{
										func_462(unk_0x01E2429B82E280E6(Global_1585844[iVar9 /*142*/].f_66), 0);
									}
									else
									{
										func_459(&Var13, 0, 0, 1);
									}
									if (func_467(&(Global_1585844[iVar9 /*142*/])))
									{
										func_462("VEH_LIVERY", 0);
									}
									if (func_466(Global_1585844[iVar9 /*142*/].f_66, Global_1585844[iVar9 /*142*/].f_77, Global_1585844[iVar9 /*142*/].f_9[10]) && func_465(Global_1585844[iVar9 /*142*/].f_66))
									{
										func_462("VEH_TOPL", 0);
									}
								}
								uParam0->f_1[iVar0] = iVar8;
								iVar0++;
							}
						}
						else
						{
							func_440(iVar0, "MP_MAN_VEH_S", 0, 1, 0, 0, 0);
							uParam0->f_1[iVar0] = iVar8;
							unk_0xCED9E32812D6C7C7(&(uParam0->f_339), iVar0);
							iVar0++;
						}
					}
					iVar1++;
				}
			}
			uParam0->f_343 = iVar0;
			if (uParam0->f_342 >= uParam0->f_343)
			{
				uParam0->f_342 = 0;
			}
			func_469(uParam0->f_342, 1, 1);
			break;
	}
	func_409(-1);
	func_408(176, "BB_SELECT", -1);
	func_408(177, "BB_BACK", -1);
}

int func_458(int iParam0, int iParam1, int iParam2)
{
	if ((iParam1 > 0 && iParam1 <= 128) && func_502(iParam1))
	{
		if (iParam0 >= 0)
		{
			if (((iParam0 - func_451(iParam2)) >= 0 && (iParam0 - func_451(iParam2)) < Global_1312124[iParam1 /*1951*/].f_33) && iParam0 < 337)
			{
				return 1;
			}
			if (Global_1312124[iParam1 /*1951*/].f_33 == 2 && iParam0 == (10 + func_451(iParam2)))
			{
				return 1;
			}
			if ((Global_1312124[iParam1 /*1951*/].f_33 == 6 && iParam0 >= (10 + func_451(iParam2))) && iParam0 <= (11 + func_451(iParam2)))
			{
				return 1;
			}
			if (Global_1312124[iParam1 /*1951*/].f_33 == 10)
			{
				if (func_284(iParam1, -1))
				{
				}
				else if (iParam0 >= (10 + func_451(iParam2)) && iParam0 <= (12 + func_451(iParam2)))
				{
					return 1;
				}
			}
			if ((iParam2 == 11 && iParam0 >= func_451(iParam2)) && iParam0 < func_282(iParam2))
			{
				return 1;
			}
			if ((iParam2 == 12 && iParam0 >= func_451(iParam2)) && iParam0 < func_282(iParam2))
			{
				return 1;
			}
			if ((iParam2 == 13 && iParam0 >= func_451(iParam2)) && iParam0 < func_282(iParam2))
			{
				return 1;
			}
			if ((iParam2 == 14 && iParam0 >= func_451(iParam2)) && iParam0 < func_282(iParam2))
			{
				return 1;
			}
			if ((iParam2 == 15 && iParam0 >= func_451(iParam2)) && iParam0 < func_282(iParam2))
			{
				return 1;
			}
			if ((iParam2 == 16 && iParam0 >= func_451(iParam2)) && iParam0 < func_282(iParam2))
			{
				return 1;
			}
			if ((iParam2 == 17 && iParam0 >= func_451(iParam2)) && iParam0 < func_282(iParam2))
			{
				return 1;
			}
			if (iParam2 == 18)
			{
				if ((iParam0 >= func_451(iParam2) && iParam0 < func_282(iParam2)) || iParam0 == 236)
				{
					return 1;
				}
			}
			if (iParam2 == 19)
			{
				if ((iParam0 >= func_451(iParam2) && iParam0 < func_282(iParam2)) || iParam0 == 246)
				{
					return 1;
				}
			}
			if (iParam2 == 20)
			{
				if ((iParam0 >= func_451(iParam2) && iParam0 < func_282(iParam2)) || iParam0 == 256)
				{
					return 1;
				}
			}
			if (iParam2 == 21)
			{
				if (iParam0 >= func_451(iParam2) && iParam0 < func_282(iParam2))
				{
					return 1;
				}
			}
			if (iParam2 == 22)
			{
				if (iParam0 >= func_451(iParam2) && iParam0 < func_282(iParam2))
				{
					return 1;
				}
			}
			if (iParam2 == 25)
			{
				if (iParam0 >= func_451(iParam2) && iParam0 < func_282(iParam2))
				{
					return 1;
				}
			}
			if (iParam2 == 26)
			{
				if (iParam0 >= func_451(iParam2) && iParam0 < func_282(iParam2))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_459(char* sParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_22830.f_5478 >= 32)
	{
		return;
	}
	if (Global_22830.f_6000 >= 4)
	{
		return;
	}
	if (Global_22830.f_6001 != 1)
	{
		return;
	}
	if (Global_22830.f_6000 >= Global_22830.f_5998)
	{
		return;
	}
	StringCopy(&(Global_2725767[Global_22830.f_5478 /*16*/]), sParam0, 64);
	Global_22830.f_5478++;
	if (bParam3)
	{
		Global_22830.f_2381[Global_22830.f_5999 /*5*/][Global_22830.f_6000] = 9;
	}
	else
	{
		Global_22830.f_2381[Global_22830.f_5999 /*5*/][Global_22830.f_6000] = 7;
	}
	Global_22830.f_6000++;
	fVar0 = func_461();
	if (bParam2)
	{
	}
	if (Global_22830.f_6000 >= Global_22830.f_5998)
	{
		fVar0 = func_461();
		if (Global_22830.f_5332[Global_22830.f_5476] && Global_22830.f_6000 == Global_22830.f_5998)
		{
			func_445(26, 1, 0, &fVar1, &fVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_22830.f_5325[(Global_22830.f_5476 - 1)])
		{
			Global_22830.f_5325[(Global_22830.f_5476 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_22830.f_6000 >= Global_22830.f_5998)
		{
			fVar3 = func_460();
			if (fVar3 > Global_22830.f_6002[Global_22830.f_5475])
			{
				Global_22830.f_6002[Global_22830.f_5475] = fVar3;
			}
		}
	}
}

float func_460()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_22830.f_6000)
	{
		if (Global_22830.f_2381[Global_22830.f_5999 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_22830.f_4690[((Global_22830.f_5481 - iVar1) + iVar0)] != 0)
		{
			if (func_445(Global_22830.f_4690[((Global_22830.f_5481 - iVar1) + iVar0)], 1, 0, &fVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > unk_0xC23444E9B1B8D081(0.35f, 0))
	{
		return fVar2;
	}
	return unk_0xC23444E9B1B8D081(0.35f, 0);
}

float func_461()
{
	float fVar0;
	float fVar1;
	float fVar2;
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
	while (iVar7 < Global_22830.f_6000)
	{
		if (Global_22830.f_2381[Global_22830.f_5999 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_22830.f_2381[Global_22830.f_5999 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_22830.f_2381[Global_22830.f_5999 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_22830.f_2381[Global_22830.f_5999 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_22830.f_2381[Global_22830.f_5999 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_22830.f_2381[Global_22830.f_5999 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_22830.f_2381[Global_22830.f_5999 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_22830.f_2381[Global_22830.f_5999 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		else if (Global_22830.f_2381[Global_22830.f_5999 /*5*/][iVar7] == 9)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_425(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (unk_0x2E87280918B16506(&(Global_22830.f_73[Global_22830.f_5999 /*6*/])) != 0)
	{
		unk_0x27ED46EA48C0A455(&(Global_22830.f_73[Global_22830.f_5999 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_22830.f_6000)
	{
		if (Global_22830.f_2381[Global_22830.f_5999 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (unk_0x2E87280918B16506(&(Global_22830.f_73[Global_22830.f_5999 /*6*/])) != 0)
			{
				unk_0x26C23BE14F66F202(&(Global_22830.f_73[(Global_22830.f_5999 + iVar8) /*6*/]));
			}
		}
		else if (Global_22830.f_2381[Global_22830.f_5999 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (unk_0x2E87280918B16506(&(Global_22830.f_73[Global_22830.f_5999 /*6*/])) != 0)
			{
				unk_0x26C23BE14F66F202(&(Global_22830.f_73[(Global_22830.f_5999 + iVar8) /*6*/]));
			}
		}
		else if (Global_22830.f_2381[Global_22830.f_5999 /*5*/][iVar7] == 2)
		{
			if (unk_0x2E87280918B16506(&(Global_22830.f_73[Global_22830.f_5999 /*6*/])) != 0)
			{
				unk_0x2AE954BA77A66307(Global_22830.f_4175[((Global_22830.f_5479 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_22830.f_2381[Global_22830.f_5999 /*5*/][iVar7] == 3)
		{
			if (unk_0x2E87280918B16506(&(Global_22830.f_73[Global_22830.f_5999 /*6*/])) != 0)
			{
				unk_0x957E514A6E999374(Global_22830.f_4432[((Global_22830.f_5480 - iVar4) + iVar10)], Global_22830.f_4561[((Global_22830.f_5480 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_22830.f_2381[Global_22830.f_5999 /*5*/][iVar7] == 5)
		{
			if (unk_0x2E87280918B16506(&(Global_22830.f_73[Global_22830.f_5999 /*6*/])) != 0)
			{
				unk_0x76DB21247AE4E4E2(&(Global_2725767[((Global_22830.f_5478 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_22830.f_2381[Global_22830.f_5999 /*5*/][iVar7] == 6)
		{
			if (unk_0x2E87280918B16506(&(Global_22830.f_73[Global_22830.f_5999 /*6*/])) != 0)
			{
				unk_0x26C23BE14F66F202(&(Global_2725767[((Global_22830.f_5478 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_22830.f_2381[Global_22830.f_5999 /*5*/][iVar7] == 7)
		{
			if (unk_0x2E87280918B16506(&(Global_22830.f_73[Global_22830.f_5999 /*6*/])) != 0)
			{
				unk_0x76DB21247AE4E4E2(&(Global_2725767[((Global_22830.f_5478 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_22830.f_2381[Global_22830.f_5999 /*5*/][iVar7] == 9)
		{
			if (unk_0x2E87280918B16506(&(Global_22830.f_73[Global_22830.f_5999 /*6*/])) != 0)
			{
				unk_0x76DB21247AE4E4E2(&(Global_2725767[((Global_22830.f_5478 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (unk_0x2E87280918B16506(&(Global_22830.f_73[Global_22830.f_5999 /*6*/])) != 0)
	{
		fVar0 = unk_0x63F498818B4DEE3E(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_22830.f_4690[((Global_22830.f_5481 - iVar5) + iVar7)] != 0)
		{
			func_445(Global_22830.f_4690[((Global_22830.f_5481 - iVar5) + iVar7)], 1, 0, &fVar1, &fVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

void func_462(char* sParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_22830.f_5477 >= 256)
	{
		return;
	}
	if (Global_22830.f_6000 >= 4)
	{
		return;
	}
	if (Global_22830.f_6001 != 1)
	{
		return;
	}
	if (Global_22830.f_6000 >= Global_22830.f_5998)
	{
		return;
	}
	StringCopy(&(Global_22830.f_73[Global_22830.f_5477 /*6*/]), sParam0, 24);
	Global_22830.f_5477++;
	Global_22830.f_2381[Global_22830.f_5999 /*5*/][Global_22830.f_6000] = 1;
	Global_22830.f_6000++;
	if (Global_22830.f_6000 >= Global_22830.f_5998)
	{
		fVar0 = func_461();
		if (Global_22830.f_5332[Global_22830.f_5476] && Global_22830.f_6000 == Global_22830.f_5998)
		{
			func_445(26, 1, 0, &fVar1, &fVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_22830.f_5325[(Global_22830.f_5476 - 1)])
		{
			Global_22830.f_5325[(Global_22830.f_5476 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_22830.f_6000 >= Global_22830.f_5998)
		{
			fVar3 = func_460();
			if (fVar3 > Global_22830.f_6002[Global_22830.f_5475])
			{
				Global_22830.f_6002[Global_22830.f_5475] = fVar3;
			}
		}
	}
}

struct<16> func_463(int iParam0, int iParam1, bool bParam2)
{
	struct<16> Var0;
	
	if (bParam2)
	{
	}
	if (iParam0 == -1)
	{
		if (func_464(iParam1) != -1)
		{
			Var0 = { Global_2359296[func_184() /*5559*/].f_7.f_99[func_464(iParam1) /*16*/] };
		}
	}
	else if (iParam0 > -1 && iParam0 < 30)
	{
		Var0 = { Global_2359296[func_184() /*5559*/].f_7.f_99[iParam0 /*16*/] };
	}
	else if (bParam2)
	{
	}
	return Var0;
}

int func_464(int iParam0)
{
	int iVar0;
	
	func_400(Global_4282954, &iVar0);
	if ((((iVar0 >= 227 && iVar0 < 257) && iParam0 == -1) && !unk_0x44859561F653DD4E()) && !func_520())
	{
		return (iVar0 - 227);
	}
	if (iParam0 != -1)
	{
		if (iParam0 >= 227 && iParam0 < 257)
		{
			return (iParam0 - 227);
		}
	}
	return -1;
}

int func_465(int iParam0)
{
	switch (iParam0)
	{
		case joaat("faction3"):
		case joaat("contender"):
			return 0;
			break;
	}
	return 1;
}

int func_466(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("banshee"):
		case joaat("banshee2"):
			if (!unk_0xE2D0C323A1AE5D85(iParam1, 1))
			{
				return 1;
			}
			break;
		
		case joaat("stinger"):
		case joaat("coquette2"):
		case joaat("coquette3"):
			if (!unk_0xE2D0C323A1AE5D85(iParam1, 1))
			{
				return 1;
			}
			break;
		
		case joaat("chino"):
		case joaat("voltic"):
		case joaat("stalion"):
		case joaat("chino2"):
		case joaat("faction"):
		case joaat("faction2"):
		case joaat("faction3"):
			if (!unk_0xE2D0C323A1AE5D85(iParam1, 1) && !unk_0xE2D0C323A1AE5D85(iParam1, 2))
			{
				return 1;
			}
			break;
		
		case joaat("buccaneer2"):
		case joaat("peyote2"):
		case joaat("peyote3"):
			if ((!unk_0xE2D0C323A1AE5D85(iParam1, 1) && !unk_0xE2D0C323A1AE5D85(iParam1, 2)) && !unk_0xE2D0C323A1AE5D85(iParam1, 3))
			{
				return 1;
			}
			break;
		
		case joaat("coquette"):
			if (!unk_0xE2D0C323A1AE5D85(iParam1, 1) && iParam2 != 1)
			{
				return 1;
			}
			break;
		
		case joaat("mamba"):
			if (!unk_0xE2D0C323A1AE5D85(iParam1, 2))
			{
				return 1;
			}
			break;
		
		case joaat("pfister811"):
			if (!unk_0xE2D0C323A1AE5D85(iParam1, 0) && iParam2 != 1)
			{
				return 1;
			}
			break;
		
		case joaat("contender"):
		case joaat("kamacho"):
			if (!unk_0xE2D0C323A1AE5D85(iParam1, 0))
			{
				return 1;
			}
			break;
		
		case joaat("manana2"):
			if (unk_0xE2D0C323A1AE5D85(iParam1, 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_467(var uParam0)
{
	switch (uParam0->f_66)
	{
		case joaat("windsor"):
			if (uParam0->f_67 > 0)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_468(int iParam0)
{
	return (func_290(iParam0) - func_452(iParam0));
}

void func_469(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_22830.f_5996 = iParam0;
	Global_22830.f_6131 = iParam2;
	if (Global_22830.f_5996 < Global_22830.f_5995)
	{
		Global_22830.f_5995 = Global_22830.f_5996;
	}
	else if ((Global_22830.f_5986 && Global_22830.f_5996 > Global_22830.f_5997) || (!Global_22830.f_5986 && Global_22830.f_5996 >= (Global_22830.f_5995 + Global_22830.f_5482)))
	{
		iVar0 = Global_22830.f_5995;
		while (iVar0 <= Global_22830.f_5996)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_22830.f_5346[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_22830.f_5482 && Global_22830.f_5995 < 128)
		{
			Global_22830.f_5995++;
			iVar1 = 0;
			iVar0 = Global_22830.f_5995;
			while (iVar0 <= Global_22830.f_5996)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_22830.f_5346[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_22830.f_5985 = 0;
	Global_22830.f_5986 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_22830.f_4947), "", 24);
		StringCopy(&(Global_4533983.f_21), "", 16);
	}
}

int func_470(int iParam0)
{
	return (1000 + iParam0);
}

char* func_471(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "GRTRUCK";
		
		case 2:
			return "MP_BHUB_CLUBT";
		
		case 1:
			return "MP_BHUB_GAR0";
		
		case 3:
			return "MP_BHUB_SUB";
		
		default:
	}
	return "";
}

int func_472(int iParam0, int iParam1)
{
	if (!func_481(iParam1) && !func_402(iParam0))
	{
		if (func_480(iParam0, 0))
		{
			if (iParam1 == func_479(iParam0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (func_478(iParam1))
		{
			return 0;
		}
	}
	if (func_390(iParam0))
	{
		if (!func_399(iParam1))
		{
			return 0;
		}
	}
	else if (func_399(iParam1))
	{
		return 0;
	}
	if (func_477(iParam1))
	{
		if (!(unk_0x6F0299ED3CEB4E5D(iParam0) || unk_0xCD8C08FA7D84C27E(iParam0)))
		{
			return 0;
		}
	}
	if (func_481(iParam1))
	{
		if (!func_402(iParam0))
		{
			return 0;
		}
		else if ((func_476(iParam0) + func_451(11)) != iParam1)
		{
			return 0;
		}
	}
	if (func_475(iParam1))
	{
		if (!func_362(iParam0))
		{
			return 0;
		}
	}
	else if (func_362(iParam0))
	{
		return 0;
	}
	if (!func_474(iParam1, 1))
	{
		if (func_473(iParam0))
		{
			return 0;
		}
	}
	if (iParam1 == 223 && iParam0 != joaat("oppressor2"))
	{
		return 0;
	}
	if ((iParam1 == 278 && iParam0 != joaat("toreador")) && iParam0 != joaat("stromberg"))
	{
		return 0;
	}
	if ((iParam0 == joaat("cerberus") || iParam0 == joaat("cerberus2")) || iParam0 == joaat("cerberus3"))
	{
		if ((iParam1 != 236 && iParam1 != 246) && iParam1 != 256)
		{
			return 0;
		}
	}
	else if ((iParam1 == 236 || iParam1 == 246) || iParam1 == 256)
	{
		return 0;
	}
	return 1;
}

int func_473(int iParam0)
{
	switch (iParam0)
	{
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
		case joaat("cerberus"):
		case joaat("cerberus2"):
		case joaat("cerberus3"):
			return 1;
			break;
	}
	return 0;
}

int func_474(int iParam0, bool bParam1)
{
	if (iParam0 >= func_451(18) && iParam0 < func_282(20))
	{
		return 1;
	}
	if (bParam1)
	{
		if ((iParam0 == 236 || iParam0 == 246) || iParam0 == 256)
		{
			return 1;
		}
	}
	return 0;
}

int func_475(int iParam0)
{
	if (iParam0 >= func_451(12) && iParam0 < func_282(12))
	{
		return 1;
	}
	return 0;
}

int func_476(int iParam0)
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

int func_477(int iParam0)
{
	if (iParam0 >= func_451(6) && iParam0 < func_282(6))
	{
		return 1;
	}
	return 0;
}

int func_478(int iParam0)
{
	switch (iParam0)
	{
		case 157:
		case 158:
		case 190:
		case 188:
		case 187:
		case 186:
		case 189:
		case 222:
		case 224:
		case 225:
		case 226:
		case 257:
		case 279:
			return 1;
			break;
	}
	if (iParam0 >= func_451(11) && iParam0 < func_282(11))
	{
		return 1;
	}
	return 0;
}

int func_479(int iParam0)
{
	if (func_402(iParam0))
	{
		return (func_476(iParam0) + func_451(11));
	}
	else
	{
		switch (iParam0)
		{
			case joaat("trailersmall2"):
				return 157;
				break;
			
			case joaat("hauler2"):
			case joaat("phantom3"):
				return 158;
				break;
			
			case joaat("avenger"):
				return 190;
				break;
			
			case joaat("khanjali"):
				return 188;
				break;
			
			case joaat("chernobog"):
				return 187;
				break;
			
			case joaat("riot2"):
				return 186;
				break;
			
			case joaat("thruster"):
				return 189;
				break;
		}
		if (iParam0 == joaat("terbyte"))
		{
			return 222;
		}
		else if (iParam0 == joaat("speedo4"))
		{
			return 224;
		}
		else if (iParam0 == joaat("mule4"))
		{
			return 225;
		}
		else if (iParam0 == joaat("pounder2"))
		{
			return 226;
		}
		if (iParam0 == joaat("rcbandito"))
		{
			return 257;
		}
		if (iParam0 == joaat("minitank"))
		{
			return 279;
		}
	}
	return -1;
}

int func_480(int iParam0, bool bParam1)
{
	if (func_402(iParam0))
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("trailersmall2"):
		case joaat("hauler2"):
		case joaat("phantom3"):
			if (!bParam1)
			{
				return 1;
			}
			break;
		
		case joaat("avenger"):
		case joaat("khanjali"):
		case joaat("chernobog"):
		case joaat("riot2"):
		case joaat("thruster"):
		case joaat("speedo4"):
		case joaat("mule4"):
		case joaat("pounder2"):
		case joaat("terbyte"):
		case joaat("rcbandito"):
		case joaat("minitank"):
			return 1;
			break;
	}
	return 0;
}

int func_481(int iParam0)
{
	if (iParam0 >= func_451(11) && iParam0 < func_282(11))
	{
		return 1;
	}
	return 0;
}

void func_482(char* sParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_22830.f_5478 >= 32)
	{
		return;
	}
	if (Global_22830.f_6000 >= 4)
	{
		return;
	}
	if (Global_22830.f_6001 != 1)
	{
		return;
	}
	if (Global_22830.f_6000 >= Global_22830.f_5998)
	{
		return;
	}
	StringCopy(&(Global_2725767[Global_22830.f_5478 /*16*/]), sParam0, 64);
	Global_22830.f_5478++;
	Global_22830.f_2381[Global_22830.f_5999 /*5*/][Global_22830.f_6000] = 5;
	Global_22830.f_6000++;
	fVar0 = 0f;
	if (bParam3)
	{
		fVar0 = func_461();
	}
	if (bParam2)
	{
	}
	if (Global_22830.f_6000 >= Global_22830.f_5998)
	{
		fVar0 = func_461();
		if (Global_22830.f_5332[Global_22830.f_5476] && Global_22830.f_6000 == Global_22830.f_5998)
		{
			func_445(26, 1, 0, &fVar1, &fVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_22830.f_5325[(Global_22830.f_5476 - 1)])
		{
			Global_22830.f_5325[(Global_22830.f_5476 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_22830.f_6000 >= Global_22830.f_5998)
		{
			fVar3 = func_460();
			if (fVar3 > Global_22830.f_6002[Global_22830.f_5475])
			{
				Global_22830.f_6002[Global_22830.f_5475] = fVar3;
			}
		}
	}
}

int func_483(int iParam0)
{
	if ((iParam0 == 83 || iParam0 == 84) || iParam0 == 85)
	{
		return 1;
	}
	return 0;
}

int func_484()
{
	switch (unk_0xE2F2D76A4AA269FF())
	{
		case 9:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_485()
{
	switch (unk_0xE2F2D76A4AA269FF())
	{
		case 7:
		case 5:
			return 1;
		
		default:
	}
	return 0;
}

char* func_486(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "ARENA_GAR_F0";
			break;
		
		case 2:
			return "ARENA_GAR_F1";
			break;
		
		case 3:
			return "ARENA_GAR_F2";
			break;
	}
	return "";
}

char* func_487(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "MP_BHUB_GAR1";
			break;
		
		case 2:
			return "MP_BHUB_GAR2";
			break;
		
		case 3:
			return "MP_BHUB_GAR3";
			break;
	}
	return "";
}

char* func_488(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "MP_DBASE_1";
			break;
		
		case 2:
			return "MP_DBASE_2";
			break;
		
		case 3:
			return "MP_DBASE_3";
			break;
		
		case 4:
			return "MP_DBASE_4";
			break;
		
		case 5:
			return "MP_DBASE_6";
			break;
		
		case 6:
			return "MP_DBASE_7";
			break;
		
		case 7:
			return "MP_DBASE_8";
			break;
		
		case 8:
			return "MP_DBASE_9";
			break;
		
		case 9:
			return "MP_DBASE_10";
			break;
	}
	return "";
}

int func_489(int iParam0)
{
	if (iParam0 != func_8())
	{
		return Global_1853128[iParam0 /*888*/].f_267.f_281;
	}
	return 0;
}

char* func_490(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "MP_HANGAR_1";
			break;
		
		case 2:
			return "MP_HANGAR_2";
			break;
		
		case 3:
			return "MP_HANGAR_3";
			break;
		
		case 4:
			return "MP_HANGAR_4";
			break;
		
		case 5:
			return "MP_HANGAR_5";
			break;
	}
	return "";
}

int func_491(int iParam0)
{
	if (iParam0 != func_8())
	{
		return Global_1853128[iParam0 /*888*/].f_267.f_274;
	}
	return 0;
}

int func_492(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == joaat("minitank"))
	{
		return 0;
	}
	if ((((iParam0 == joaat("thruster") || iParam0 == joaat("khanjali")) || iParam0 == joaat("riot2")) || iParam0 == joaat("chernobog")) || iParam0 == joaat("avenger"))
	{
		if (iParam1 == 13)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (iParam1 != 11)
	{
		if (func_402(iParam0))
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("cerberus") || iParam0 == joaat("cerberus2")) || iParam0 == joaat("cerberus3"))
	{
		if ((iParam1 == 18 || iParam1 == 19) || iParam1 == 20)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (((((iParam0 == joaat("bruiser") || iParam0 == joaat("bruiser2")) || iParam0 == joaat("bruiser3")) || iParam0 == joaat("monster3")) || iParam0 == joaat("monster4")) || iParam0 == joaat("monster5"))
	{
		if ((iParam1 == 18 || iParam1 == 19) || iParam1 == 20)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("speedo4") || iParam0 == joaat("mule4")) || iParam0 == joaat("pounder2"))
	{
		if (((iParam1 == 14 || iParam1 == 15) || iParam1 == 16) || iParam1 == 17)
		{
		}
		else
		{
			return 0;
		}
	}
	if (func_362(iParam0))
	{
		if (iParam1 == 12)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (iParam1 == 12)
	{
		return 0;
	}
	if (iParam0 == func_493())
	{
		if (iParam1 == 15)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (iParam1 == 6)
	{
		if (unk_0x532C99FAF70C652B(iParam0))
		{
			return 0;
		}
		else if (unk_0x6F0299ED3CEB4E5D(iParam0) || unk_0xCD8C08FA7D84C27E(iParam0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (iParam1 == 5)
	{
		return 0;
	}
	else if ((((((((((((((iParam1 == 8 || iParam1 == 9) || iParam1 == 10) || iParam1 == 13) || iParam1 == 14) || iParam1 == 15) || iParam1 == 16) || iParam1 == 17) || iParam1 == 18) || iParam1 == 19) || iParam1 == 20) || iParam1 == 21) || iParam1 == 22) || iParam1 == 25) || iParam1 == 26)
	{
		if (unk_0x532C99FAF70C652B(iParam0))
		{
			return 0;
		}
	}
	else if (iParam1 == 11)
	{
		iVar0 = func_476(iParam0);
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	return 1;
}

int func_493()
{
	return joaat("terbyte");
}

int func_494(int iParam0)
{
	if (iParam0 == 22)
	{
		if (!func_497())
		{
			return 0;
		}
	}
	else if (iParam0 == 25)
	{
		if (!func_495(1))
		{
			return 0;
		}
	}
	return 1;
}

bool func_495(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xE2D0C323A1AE5D85(func_21(9617, -1, 0), 0);
	}
	return func_496(unk_0x9E2D6C50374FCFA9());
}

int func_496(int iParam0)
{
	if (iParam0 != -1)
	{
		return unk_0xE2D0C323A1AE5D85(Global_1977258[iParam0 /*55*/].f_1, 0);
	}
	return 0;
}

bool func_497()
{
	return (func_500(0) && func_498(0));
}

bool func_498(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xE2D0C323A1AE5D85(func_21(8725, -1, 0), 4);
	}
	return func_499(unk_0x9E2D6C50374FCFA9());
}

int func_499(int iParam0)
{
	if (iParam0 != -1)
	{
		return unk_0xE2D0C323A1AE5D85(Global_1971081[iParam0 /*68*/].f_40, 4);
	}
	return 0;
}

int func_500(bool bParam0)
{
	if (bParam0)
	{
		return func_501(27227, -1);
	}
	if (unk_0x9E2D6C50374FCFA9() != func_8())
	{
		return unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_403.f_1, 2);
	}
	return 0;
}

bool func_501(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_18();
	}
	return unk_0xDA7EBFC49AE3F1B0(iParam0, iParam1);
}

int func_502(int iParam0)
{
	switch (iParam0)
	{
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
			return 0;
			break;
	}
	return 1;
}

void func_503(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_22830.f_1), sParam0, 16);
	Global_22830.f_68 = 0;
	Global_22830.f_69 = 0;
	Global_22830.f_70 = 0;
	Global_22830.f_71 = 0;
	Global_22830.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22830.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_504(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22830.f_5332[0] = iParam0;
	Global_22830.f_5332[1] = iParam1;
	Global_22830.f_5332[2] = iParam2;
	Global_22830.f_5332[3] = iParam3;
	Global_22830.f_5332[4] = iParam4;
}

void func_505(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22830.f_5340[0] = iParam0;
	Global_22830.f_5340[1] = iParam1;
	Global_22830.f_5340[2] = iParam2;
	Global_22830.f_5340[3] = iParam3;
	Global_22830.f_5340[4] = iParam4;
}

void func_506(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22830.f_5313[0] = iParam0;
	Global_22830.f_5313[1] = iParam1;
	Global_22830.f_5313[2] = iParam2;
	Global_22830.f_5313[3] = iParam3;
	Global_22830.f_5313[4] = iParam4;
	Global_22830.f_5483 = 0;
	if (iParam0 != 0)
	{
		Global_22830.f_5483++;
	}
	if (iParam1 != 0)
	{
		Global_22830.f_5483++;
	}
	if (iParam2 != 0)
	{
		Global_22830.f_5483++;
	}
	if (iParam3 != 0)
	{
		Global_22830.f_5483++;
	}
	if (iParam4 != 0)
	{
		Global_22830.f_5483++;
	}
}

void func_507(int iParam0, int iParam1)
{
	char* sVar0;
	
	sVar0 = func_510(iParam0, iParam1);
	if (!unk_0xACC32B78196FBC2A(sVar0))
	{
		func_508(1, sVar0, sVar0);
	}
}

void func_508(int iParam0, char* sParam1, char* sParam2)
{
	Global_22830 = iParam0;
	func_509(29, sParam1, sParam2);
}

void func_509(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_22830.f_6277[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_22830.f_7286[iParam0 /*16*/]), sParam2, 64);
}

char* func_510(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "ShopUI_Title_HighEndSalon";
			break;
		
		case 1:
		case 4:
		case 6:
			return "ShopUI_Title_Barber";
			break;
		
		case 2:
			return "ShopUI_Title_Barber2";
			break;
		
		case 3:
			return "ShopUI_Title_Barber3";
			break;
		
		case 5:
			return "ShopUI_Title_Barber4";
			break;
		
		case 7:
		case 8:
		case 10:
		case 11:
		case 13:
			return "ShopUI_Title_LowEndFashion";
			break;
		
		case 9:
		case 12:
			return "ShopUI_Title_LowEndFashion2";
			break;
		
		case 14:
		case 15:
		case 16:
		case 17:
			return "ShopUI_Title_MidFashion";
			break;
		
		case 18:
		case 19:
		case 20:
			return "ShopUI_Title_HighEndFashion";
			break;
		
		case 21:
			return "ShopUI_Title_Movie_Masks";
			break;
		
		case 22:
			return "ShopUI_Title_Tattoos";
			break;
		
		case 23:
		case 24:
			return "ShopUI_Title_Tattoos2";
			break;
		
		case 25:
			return "ShopUI_Title_Tattoos3";
			break;
		
		case 26:
			return "ShopUI_Title_Tattoos4";
			break;
		
		case 27:
			return "ShopUI_Title_Tattoos5";
			break;
		
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
			return "ShopUI_Title_GunClub";
			break;
		
		case 39:
		case 40:
		case 41:
		case 43:
			return "ShopUI_Title_Carmod";
			break;
		
		case 42:
			return "ShopUI_Title_Carmod2";
			break;
		
		case 44:
			return "ShopUI_Title_Supermod";
			break;
		
		case 45:
			switch (iParam1)
			{
				case 4:
				case 5:
					return "ShopUI_Title_ClubhouseMod";
					break;
				
				case 10:
					return "ShopUI_Title_GR_GunMod";
					break;
				
				case 12:
					return "ShopUI_Title_SM_Hangar";
				
				case 13:
					return "ShopUI_Title_GR_GunMod";
				
				case 14:
					return "ShopUI_Title_GR_GunMod";
				
				case 15:
					return "ShopUI_Title_GR_GunMod";
				
				case 16:
					return "ShopUI_Title_GR_GunMod";
				
				case 17:
					return "ShopUI_Title_ArenaWar";
				
				case 18:
					return "ShopUI_Title_Los_Santos_Car_Meet";
					break;
				
				case 19:
					return "ShopUI_Title_Auto_Shop";
				
				case 20:
					return "SHOP_BANNER_CLINTON_PARTNER";
			}
			return "ShopUI_Title_IE_ModGarage";
			break;
		
		case 46:
		case 47:
		case 48:
		case 49:
		case 52:
		case 53:
			return "ShopUI_Title_GR_GunMod";
		
		case 50:
		case 51:
			return "ShopUI_Title_Casino";
		
		case 54:
			return "ShopUI_Title_Los_Santos_Car_Meet";
		
		case 55:
			return "ShopUI_Title_Los_Santos_Car_Meet";
		
		case 56:
			return "SHOP_BANNER_CLINTON_PARTNER";
			break;
		
		case 57:
			return "SHOP_BANNER_RECORD_A_STUDIOS";
			break;
	}
	return "";
}

int func_511()
{
	return Global_100026.f_472;
}

void func_512(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_22830.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_22830.f_2381[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2725767[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22830.f_4175[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22830.f_4432[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22830.f_4690[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22830.f_5346[iVar0] = 0;
		Global_22830.f_5484[iVar0] = 0;
		Global_22830.f_5613[iVar0] = 0;
		Global_22830.f_6136[iVar0] = 0f;
		Global_22830.f_5742[iVar0] = 0;
		Global_22830.f_6002[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_22830.f_5313[iVar0] = 0;
		Global_22830.f_5325[iVar0] = 0f;
		Global_22830.f_5319[iVar0] = -1f;
		Global_22830.f_5332[iVar0] = 0;
		Global_22830.f_5340[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_22830.f_5221[iVar0 /*4*/]), "", 16);
		Global_22830.f_5270[iVar0] = -1;
		Global_22830.f_5283[iVar0] = 361;
		Global_22830.f_5296[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 63)
	{
		StringCopy(&(Global_22830.f_6277[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_22830.f_7286[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_22830.f_1610[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4533983.f_16), "", 16);
	Global_4533983.f_20 = -1;
	Global_22830 = 0;
	Global_22830.f_5475 = 0;
	Global_22830.f_5476 = 0;
	Global_22830.f_5477 = 0;
	Global_22830.f_5479 = 0;
	Global_22830.f_5480 = 0;
	Global_22830.f_5481 = 0;
	Global_22830.f_5478 = 0;
	Global_22830.f_6131 = 0;
	Global_22830.f_6271 = 0;
	Global_22830.f_5996 = 0;
	Global_22830.f_5995 = 0;
	Global_22830.f_5997 = 0;
	StringCopy(&(Global_22830.f_4947), "", 24);
	Global_22830.f_5019 = 0;
	Global_22830.f_5020 = 0;
	Global_22830.f_5021 = 0;
	Global_22830.f_5022 = 0;
	Global_22830.f_5023 = 0;
	Global_22830.f_5024 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22830.f_4953[iVar0] = 0;
		iVar0++;
	}
	Global_22830.f_5025 = 0;
	StringCopy(&(Global_4533983.f_21), "", 16);
	Global_4533983.f_61 = 0;
	Global_4533983.f_62 = 0;
	Global_4533983.f_63 = 0;
	Global_4533983.f_64 = 0;
	Global_4533983.f_65 = 0;
	Global_4533983.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4533983.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4533983.f_67 = 0;
	StringCopy(&(Global_22830.f_1), "", 16);
	Global_22830.f_5331 = 0f;
	Global_22830.f_68 = 0;
	Global_22830.f_69 = 0;
	Global_22830.f_70 = 0;
	Global_22830.f_71 = 0;
	Global_22830.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22830.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_22830.f_6001 = 0;
	Global_22830.f_6000 = 0;
	Global_22830.f_5998 = 0;
	Global_22830.f_5999 = 0;
	Global_22830.f_5026 = 0;
	Global_22830.f_5027 = 0;
	Global_22830.f_5482 = 10;
	Global_22830.f_5483 = 0;
	Global_22830.f_6133 = 0f;
	Global_22830.f_6134 = 0f;
	Global_22830.f_5985 = 0;
	Global_22830.f_5986 = 0;
	Global_22830.f_5987 = 0f;
	Global_22830.f_5988 = 0;
	Global_22830.f_5990 = 0;
	Global_22830.f_5989 = 0;
	Global_22830.f_5991 = 0;
	Global_22830.f_5992 = 0;
	Global_22830.f_5993 = 0;
	Global_22830.f_5994 = 0;
	Global_22830.f_8670 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_22830.f_6265[iVar0] = -1;
		Global_22830.f_6268[iVar0] = -1;
		iVar0++;
	}
	Global_22830.f_5338 = 0f;
	Global_22830.f_5309 = 0;
	Global_22830.f_5339 = 0;
	iVar0 = 0;
	while (iVar0 < Global_22830.f_6272)
	{
		Global_22830.f_6272[iVar0] = 0;
		iVar0++;
	}
	Global_22830.f_8649 = 0;
	Global_22830.f_8644 = 0;
	Global_22830.f_8654 = 0;
	Global_22830.f_8659 = 0;
	Global_22830.f_8664 = 0;
	Global_22830.f_8666 = 0;
	Global_22830.f_8672 = 0;
	Global_22827 = 0.05f;
	Global_22828 = 0.05f;
	Global_22829 = 0.225f;
	fVar2 = unk_0xF4CC509EEB975296(0);
	if (bParam0)
	{
		Global_22829 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_22829 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_22829 = 0.225f;
	}
}

bool func_513(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_103(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_22830.f_5892[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0xACC32B78196FBC2A(&(Global_22830.f_5892[iVar0 /*4*/])))
	{
		unk_0x249A0D3C5714BCF4(&(Global_22830.f_5892[iVar0 /*4*/]), 9);
		Global_22830.f_5885[iVar0] = 1;
		if (!unk_0x5FABFB823FD821D4(&(Global_22830.f_5892[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0xA9911C122B3210B5("CommonMenu", 0);
	Global_22830.f_5871[iVar0] = 1;
	if (!unk_0x9D4AFED2949F7082("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0xA9911C122B3210B5("MPShopSale", 0);
		Global_22830.f_5878[iVar0] = 1;
		if (!unk_0x9D4AFED2949F7082("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_22830.f_5917[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_514(&(Global_22830.f_5917[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_514(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0x0347CCBD719C8ADC(*uParam0))
			{
				*uParam0 = unk_0x528279F3F1EEF869(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x0347CCBD719C8ADC(*uParam0))
					{
						uParam0->f_8 = unk_0x320D1840B6DAA1CC();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x320D1840B6DAA1CC();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x0347CCBD719C8ADC(*uParam0))
			{
				uParam0->f_8 = unk_0x320D1840B6DAA1CC();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x0347CCBD719C8ADC(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_515(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
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
	if (!unk_0x3A76A0944BE2C291(2))
	{
		Global_4534059 = -1;
		return;
	}
	unk_0x4522E5855673D159(1);
	fVar0 = Global_22827;
	fVar2 = (fVar0 + Global_22829);
	fVar3 = Global_22830.f_5987;
	fVar1 = (Global_22830.f_5987 - (IntToFloat(Global_22830.f_5989) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_22830.f_5989 < 1)
	{
		fVar1 = (Global_22830.f_5987 - 0.034722f);
	}
	unk_0xA5AAB00FA8C570A4(76, 84);
	unk_0x98F560BC13E5293F(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0x9CCCA5F1EBB26C03(fVar0, fVar1, &fVar0, &fVar1);
	unk_0x9CCCA5F1EBB26C03(fVar2, fVar3, &fVar2, &fVar3);
	unk_0xB5A50A903B9AB61B();
	func_517();
	if (Global_4534059 == -6)
	{
		return;
	}
	Global_4534059 = -1;
	fVar7 = Global_4534053;
	fVar8 = Global_4534054;
	if (Global_22830.f_5990 > Global_22830.f_5989)
	{
		if (((Global_4534053 >= fVar0 && Global_4534053 <= fVar2) && Global_4534054 >= fVar3) && Global_4534054 < (fVar3 + fVar6))
		{
			Global_4534059 = -2;
			if (bParam3)
			{
				func_516(0);
			}
			return;
		}
		if (((Global_4534053 >= fVar0 && Global_4534053 <= fVar2) && Global_4534054 >= (fVar3 + fVar6)) && Global_4534054 < (fVar3 + 0.034722f))
		{
			Global_4534059 = -3;
			if (bParam3)
			{
				func_516(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = floor((fVar9 / 0.034722f));
		if (Global_22830.f_5990 == -1)
		{
			Global_4534059 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_22830.f_5989);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				unk_0xA5AAB00FA8C570A4(76, 84);
				unk_0x98F560BC13E5293F(-0.05f, -0.05f, 0f, 0f);
				func_436(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_22829, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				unk_0xB5A50A903B9AB61B();
			}
		}
		Global_4534059 = Global_22830.f_8295[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4534059 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_4534059 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_4534059 = -4;
		return;
	}
	Global_4534059 = -1;
}

void func_516(bool bParam0)
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
	fVar0 = Global_22827;
	fVar1 = Global_22830.f_5987;
	unk_0xA5AAB00FA8C570A4(76, 84);
	unk_0x98F560BC13E5293F(-0.05f, -0.05f, 0f, 0f);
	if (Global_4534059 == -2)
	{
		func_436(fVar0, fVar1, Global_22829, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4534059 == -3)
	{
		func_436(fVar0, (fVar1 + fVar2), Global_22829, fVar2, 255, 255, 255, iVar3);
	}
	unk_0xB5A50A903B9AB61B();
}

void func_517()
{
	Global_4534055 = Global_4534053;
	Global_4534056 = Global_4534054;
	Global_4534053 = unk_0x159F9B5A2920DF4E(2, 239);
	Global_4534054 = unk_0x159F9B5A2920DF4E(2, 240);
	Global_4534057 = (Global_4534053 - Global_4534055);
	Global_4534058 = (Global_4534054 - Global_4534056);
}

void func_518()
{
	Global_2810287.f_4599 = 0;
}

void func_519(var uParam0, int iParam1, bool bParam2)
{
	if (unk_0xE2D0C323A1AE5D85(uParam0->f_344, 7))
	{
		bParam2 = true;
	}
	*uParam0 = 0;
	uParam0->f_341 = 0;
	uParam0->f_343 = 0;
	uParam0->f_344 = 0;
	if (bParam2)
	{
		unk_0xCED9E32812D6C7C7(&(uParam0->f_344), 7);
	}
	uParam0->f_347 = 0;
	func_101(1, iParam1);
}

bool func_520()
{
	return Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_192 != 0;
}

int func_521(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (Global_262145.f_10421)
	{
		if (bParam5)
		{
			return func_526(iParam0, bParam1, iParam2, iParam3, iParam4, 0);
		}
		else
		{
			return func_529(iParam0, bParam1, iParam2, iParam3, iParam4, 0);
		}
	}
	if (func_286(iParam3, 0, 0))
	{
		iParam3 = func_525(iParam3);
	}
	if (!func_402(iParam2) && func_480(iParam2, 0))
	{
		iVar6 = func_479(iParam2);
		if (iVar6 >= 0)
		{
			if (bParam5)
			{
				func_524(iVar6, &iVar7, iParam4);
			}
			else
			{
				func_410(iVar6, &iVar7, 1);
			}
			if (iVar7 >= 0)
			{
				if (bParam5)
				{
					if (func_21(func_280(4, iVar7), iParam4, 0) == 0)
					{
						return iVar7;
					}
					else
					{
						iVar5 = func_21(func_280(1, iVar7), iParam4, 0);
						if (bParam1)
						{
							if (unk_0xE2D0C323A1AE5D85(iVar5, 0))
							{
								return iVar7;
							}
						}
					}
				}
				else if (Global_1585844[iVar7 /*142*/].f_66 == 0)
				{
					return iVar6;
				}
				else if (bParam1)
				{
					if (unk_0xE2D0C323A1AE5D85(Global_1585844[iVar7 /*142*/].f_103, 0))
					{
						return iVar6;
					}
				}
			}
			else
			{
				return iVar6;
			}
		}
		return -1;
	}
	if (((func_21(5395, iParam4, 0) != 0 && func_67(15270, iParam4) == 7) && !Global_262145.f_20875) && func_472(iParam2, 156))
	{
		if ((iParam3 == 0 || iParam3 == -1) || iParam3 == 1234)
		{
			iVar6 = func_523(156, iParam0, bParam1, iParam2, iParam4, bParam5);
			if (iVar6 != -1)
			{
				return iVar6;
			}
		}
	}
	if (func_414(iParam4) && func_472(iParam2, 223))
	{
		if ((iParam3 == 0 || iParam3 == -1) || iParam3 == 1236)
		{
			iVar6 = func_523(223, iParam0, bParam1, iParam2, iParam4, bParam5);
			if (iVar6 != -1)
			{
				return iVar6;
			}
		}
	}
	if (func_412(iParam4) && func_472(iParam2, 278))
	{
		if ((iParam3 == 0 || iParam3 == -1) || iParam3 == 1238)
		{
			iVar6 = func_523(278, iParam0, bParam1, iParam2, iParam4, bParam5);
			if (iVar6 != -1)
			{
				return iVar6;
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (func_522(iVar1))
		{
		}
		else if (func_411(iVar1, iParam4) >= Global_1312124)
		{
			return -1;
		}
		else if (func_411(iVar1, iParam4) > 0 && func_411(iVar1, iParam4) <= 128)
		{
			iVar2 = 0;
			if ((iParam3 == 0 || iParam3 == -1) || iParam3 == func_411(iVar1, iParam4))
			{
				iVar4 = Global_1312124[func_411(iVar1, iParam4) /*1951*/].f_33;
				if (func_411(iVar1, iParam4) == 116)
				{
					iVar4 = 20;
				}
				else if (func_411(iVar1, iParam4) == 117)
				{
					iVar4 = 7;
				}
				else if (func_411(iVar1, iParam4) == 118)
				{
					iVar4 = 1;
				}
				else if ((func_411(iVar1, iParam4) == 119 || func_411(iVar1, iParam4) == 120) || func_411(iVar1, iParam4) == 121)
				{
					iVar4 = 10;
				}
				else if ((func_411(iVar1, iParam4) == 122 || func_411(iVar1, iParam4) == 123) || func_411(iVar1, iParam4) == 124)
				{
					iVar4 = 10;
				}
				else if (func_411(iVar1, iParam4) == 125)
				{
					iVar4 = 10;
				}
				else if (func_411(iVar1, iParam4) == 126)
				{
					iVar4 = 10;
				}
				else if (func_411(iVar1, iParam4) == 127)
				{
					iVar4 = 10;
				}
				else if (func_411(iVar1, iParam4) == 128)
				{
					iVar4 = 20;
				}
				if (func_390(iParam2))
				{
					if (iVar4 == 10)
					{
						iVar3 = 3;
					}
					else if (iVar4 == 6)
					{
						iVar3 = 2;
					}
					else
					{
						iVar3 = 1;
					}
					iVar2 = 10;
				}
				else
				{
					iVar3 = iVar4;
					iVar2 = 0;
				}
				iVar2 = (iVar2 + func_451(iVar1));
				iVar7 = -1;
				iVar6 = -1;
				switch (iParam0)
				{
					case 0:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = -1;
							iVar6 = (iVar2 + iVar0);
							if (func_458(iVar6, func_411(iVar1, iParam4), iVar1) && func_472(iParam2, iVar6))
							{
								if (bParam5)
								{
									func_524(iVar6, &iVar7, iParam4);
								}
								else
								{
									func_410(iVar6, &iVar7, 1);
								}
								if (iVar7 >= 0)
								{
									if (bParam5)
									{
										if (func_21(func_280(4, iVar7), iParam4, 0) == 0)
										{
											return iVar7;
										}
										else
										{
											iVar5 = func_21(func_280(1, iVar7), iParam4, 0);
											if (bParam1)
											{
												if (unk_0xE2D0C323A1AE5D85(iVar5, 0))
												{
													return iVar7;
												}
											}
										}
									}
									else if (Global_1585844[iVar7 /*142*/].f_66 == 0)
									{
										return iVar6;
									}
									else if (bParam1)
									{
										if (unk_0xE2D0C323A1AE5D85(Global_1585844[iVar7 /*142*/].f_103, 0))
										{
											return iVar6;
										}
									}
								}
								else
								{
									return iVar6;
								}
							}
							iVar0++;
						}
						break;
					
					case 1:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = -1;
							iVar6 = (iVar2 + iVar0);
							if (func_458(iVar6, func_411(iVar1, iParam4), iVar1) && func_472(iParam2, iVar6))
							{
								if (bParam5)
								{
									func_524(iVar6, &iVar7, iParam4);
								}
								else
								{
									func_410(iVar6, &iVar7, 1);
								}
								if (iVar7 >= 0)
								{
									if (bParam5)
									{
										if (func_21(func_280(4, iVar7), iParam4, 0) == 0)
										{
											return iVar6;
										}
									}
									else if (Global_1585844[iVar7 /*142*/].f_66 == 0)
									{
										return iVar6;
									}
								}
								else
								{
									return iVar6;
								}
							}
							iVar0++;
						}
						if (bParam1)
						{
							iVar0 = 0;
							while (iVar0 < iVar3)
							{
								iVar7 = -1;
								iVar6 = (iVar2 + iVar0);
								if (func_458(iVar6, func_411(iVar1, iParam4), iVar1) && func_472(iParam2, iVar6))
								{
									if (bParam5)
									{
										func_524(iVar6, &iVar7, iParam4);
									}
									else
									{
										func_410(iVar6, &iVar7, 1);
									}
									if (iVar7 >= 0)
									{
										if (bParam5)
										{
											iVar5 = func_21(func_280(1, iVar7), iParam4, 0);
											if (unk_0xE2D0C323A1AE5D85(iVar5, 0))
											{
												return iVar6;
											}
										}
										else if (unk_0xE2D0C323A1AE5D85(Global_1585844[iVar7 /*142*/].f_103, 0))
										{
											return iVar6;
										}
									}
									else
									{
										return iVar6;
									}
								}
								iVar0++;
							}
						}
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = -1;
							iVar6 = (iVar2 + iVar0);
							if (func_458(iVar6, func_411(iVar1, iParam4), iVar1) && func_472(iParam2, iVar6))
							{
								if (bParam5)
								{
									func_524(iVar6, &iVar7, iParam4);
								}
								else
								{
									func_410(iVar6, &iVar7, 1);
								}
								if (iVar7 >= 0)
								{
									if (bParam5)
									{
										iVar5 = func_21(func_280(1, iVar7), iParam4, 0);
										if (unk_0xE2D0C323A1AE5D85(iVar5, 1) && !unk_0xE2D0C323A1AE5D85(iVar5, 2))
										{
											return iVar6;
										}
									}
									else if (unk_0xE2D0C323A1AE5D85(Global_1585844[iVar7 /*142*/].f_103, 1) && !unk_0xE2D0C323A1AE5D85(Global_1585844[iVar7 /*142*/].f_103, 2))
									{
										return iVar6;
									}
								}
								else
								{
									return iVar6;
								}
							}
							iVar0++;
						}
						break;
					
					case 2:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = -1;
							iVar6 = (iVar2 + iVar0);
							if (func_458(iVar6, func_411(iVar1, iParam4), iVar1) && func_472(iParam2, iVar6))
							{
								if (bParam5)
								{
									func_524(iVar6, &iVar7, iParam4);
								}
								else
								{
									func_410(iVar6, &iVar7, 1);
								}
								if (iVar7 >= 0)
								{
									if (bParam5)
									{
										if (func_21(func_280(4, iVar7), iParam4, 0) == 0)
										{
											return iVar6;
										}
										else
										{
											iVar5 = func_21(func_280(1, iVar7), iParam4, 0);
											if (bParam1)
											{
												if (unk_0xE2D0C323A1AE5D85(iVar5, 0))
												{
													return iVar6;
												}
												else if (unk_0xE2D0C323A1AE5D85(iVar5, 1))
												{
													return iVar6;
												}
											}
											else if (unk_0xE2D0C323A1AE5D85(iVar5, 1))
											{
												return iVar6;
											}
										}
									}
									else if (Global_1585844[iVar7 /*142*/].f_66 == 0)
									{
										return iVar6;
									}
									else if (bParam1)
									{
										if (unk_0xE2D0C323A1AE5D85(Global_1585844[iVar7 /*142*/].f_103, 0))
										{
											return iVar6;
										}
										else if (unk_0xE2D0C323A1AE5D85(Global_1585844[iVar7 /*142*/].f_103, 1))
										{
											return iVar6;
										}
									}
									else if (unk_0xE2D0C323A1AE5D85(Global_1585844[iVar7 /*142*/].f_103, 1))
									{
										return iVar6;
									}
								}
								else
								{
									return iVar6;
								}
							}
							iVar0++;
						}
						break;
					}
				}
		}
		iVar1++;
	}
	return -1;
}

int func_522(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 99:
			return 1;
			break;
		
		case 22:
			if (!func_497())
			{
				return 1;
			}
			break;
		
		case 25:
			if (!func_495(1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_523(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	iVar1 = -1;
	switch (iParam1)
	{
		case 0:
			if (func_472(iParam3, iParam0))
			{
				if (bParam5)
				{
					func_524(iParam0, &iVar1, iParam4);
				}
				else
				{
					func_410(iParam0, &iVar1, 1);
				}
				if (iVar1 >= 0)
				{
					if (bParam5)
					{
						if (func_21(func_280(4, iVar1), iParam4, 0) == 0)
						{
							return iVar1;
						}
						else
						{
							iVar0 = func_21(func_280(1, iVar1), iParam4, 0);
							if (bParam2)
							{
								if (unk_0xE2D0C323A1AE5D85(iVar0, 0))
								{
									return iVar1;
								}
							}
						}
					}
					else if (Global_1585844[iVar1 /*142*/].f_66 == 0)
					{
						return iParam0;
					}
					else if (bParam2)
					{
						if (unk_0xE2D0C323A1AE5D85(Global_1585844[iVar1 /*142*/].f_103, 0))
						{
							return iParam0;
						}
					}
				}
				else
				{
					return iParam0;
				}
			}
			break;
		
		case 1:
			iVar1 = -1;
			if (func_472(iParam3, iParam0))
			{
				if (bParam5)
				{
					func_524(iParam0, &iVar1, iParam4);
				}
				else
				{
					func_410(iParam0, &iVar1, 1);
				}
				if (iVar1 >= 0)
				{
					if (bParam5)
					{
						if (func_21(func_280(4, iVar1), iParam4, 0) == 0)
						{
							return iParam0;
						}
					}
					else if (Global_1585844[iVar1 /*142*/].f_66 == 0)
					{
						return iParam0;
					}
				}
				else
				{
					return iParam0;
				}
			}
			iVar1 = -1;
			if (bParam2)
			{
				if (func_472(iParam3, iParam0))
				{
					if (bParam5)
					{
						func_524(iParam0, &iVar1, iParam4);
					}
					else
					{
						func_410(iParam0, &iVar1, 1);
					}
					if (iVar1 >= 0)
					{
						if (bParam5)
						{
							iVar0 = func_21(func_280(1, iVar1), iParam4, 0);
							if (unk_0xE2D0C323A1AE5D85(iVar0, 0))
							{
								return iParam0;
							}
						}
						else if (unk_0xE2D0C323A1AE5D85(Global_1585844[iVar1 /*142*/].f_103, 0))
						{
							return iParam0;
						}
					}
					else
					{
						return iParam0;
					}
				}
			}
			iVar1 = -1;
			if (func_472(iParam3, iParam0))
			{
				if (bParam5)
				{
					func_524(iParam0, &iVar1, iParam4);
				}
				else
				{
					func_410(iParam0, &iVar1, 1);
				}
				if (iVar1 >= 0)
				{
					if (bParam5)
					{
						iVar0 = func_21(func_280(1, iVar1), iParam4, 0);
						if (unk_0xE2D0C323A1AE5D85(iVar0, 1) && !unk_0xE2D0C323A1AE5D85(iVar0, 2))
						{
							return iParam0;
						}
					}
					else if (unk_0xE2D0C323A1AE5D85(Global_1585844[iVar1 /*142*/].f_103, 1) && !unk_0xE2D0C323A1AE5D85(Global_1585844[iVar1 /*142*/].f_103, 2))
					{
						return iParam0;
					}
				}
				else
				{
					return iParam0;
				}
			}
			break;
		
		case 2:
			iVar1 = -1;
			if (func_472(iParam3, iParam0))
			{
				if (bParam5)
				{
					func_524(iParam0, &iVar1, iParam4);
				}
				else
				{
					func_410(iParam0, &iVar1, 1);
				}
				if (iVar1 >= 0)
				{
					if (bParam5)
					{
						if (func_21(func_280(4, iVar1), iParam4, 0) == 0)
						{
							return iParam0;
						}
						else
						{
							iVar0 = func_21(func_280(1, iVar1), iParam4, 0);
							if (bParam2)
							{
								if (unk_0xE2D0C323A1AE5D85(iVar0, 0))
								{
									return iParam0;
								}
								else if (unk_0xE2D0C323A1AE5D85(iVar0, 1))
								{
									return iParam0;
								}
							}
							else if (unk_0xE2D0C323A1AE5D85(iVar0, 1))
							{
								return iParam0;
							}
						}
					}
					else if (Global_1585844[iVar1 /*142*/].f_66 == 0)
					{
						return iParam0;
					}
					else if (bParam2)
					{
						if (unk_0xE2D0C323A1AE5D85(Global_1585844[iVar1 /*142*/].f_103, 0))
						{
							return iParam0;
						}
						else if (unk_0xE2D0C323A1AE5D85(Global_1585844[iVar1 /*142*/].f_103, 1))
						{
							return iParam0;
						}
					}
					else if (unk_0xE2D0C323A1AE5D85(Global_1585844[iVar1 /*142*/].f_103, 1))
					{
						return iParam0;
					}
				}
				else
				{
					return iParam0;
				}
			}
			break;
	}
	return -1;
}

void func_524(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = (func_454(iParam0, iParam2) - 1);
}

int func_525(int iParam0)
{
	if (((iParam0 == 103 || iParam0 == 106) || iParam0 == 109) || iParam0 == 112)
	{
		return 103;
	}
	if (((iParam0 == 104 || iParam0 == 107) || iParam0 == 110) || iParam0 == 113)
	{
		return 104;
	}
	if (((iParam0 == 105 || iParam0 == 108) || iParam0 == 111) || iParam0 == 114)
	{
		return 105;
	}
	return -1;
}

int func_526(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	
	bVar6 = func_111();
	bVar6 = true;
	if (func_286(iParam3, 0, 0))
	{
		iParam3 = func_525(iParam3);
	}
	if (!func_402(iParam2) && func_480(iParam2, 0))
	{
		iVar7 = func_479(iParam2);
		return func_528(iVar7, iParam0, bParam1, iParam2, 1, iParam4, iParam5);
	}
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if ((bVar6 || func_411(iVar1, iParam4) > 0) && !func_522(iVar1))
		{
			iVar2 = 0;
			if ((bVar6 || iParam3 == 0) || iParam3 == func_411(iVar1, iParam4))
			{
				if (bVar6)
				{
					iVar4 = func_283(iVar1, -1, 1);
				}
				else
				{
					iVar4 = Global_1312124[func_411(iVar1, iParam4) /*1951*/].f_33;
				}
				if (func_390(iParam2))
				{
					if (iVar4 == 13)
					{
						iVar3 = 3;
					}
					else if (iVar4 == 8)
					{
						iVar3 = 2;
					}
					else
					{
						iVar3 = 1;
					}
					iVar2 = 10;
				}
				else
				{
					iVar3 = iVar4;
					iVar2 = 0;
				}
				iVar2 = (iVar2 + func_451(iVar1));
				iVar7 = 0;
				switch (iParam0)
				{
					case 0:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = (iVar2 + iVar0);
							if (func_527(iParam2, iVar7))
							{
								if (func_21(func_280(4, iVar7), iParam4, 0) == 0)
								{
									return iVar7;
								}
								else
								{
									iVar5 = func_21(func_280(1, iVar7), iParam4, 0);
									if (bParam1)
									{
										if (unk_0xE2D0C323A1AE5D85(iVar5, 0))
										{
											return iVar7;
										}
									}
								}
							}
							iVar0++;
						}
						break;
					
					case 1:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = (iVar2 + iVar0);
							if (func_527(iParam2, iVar7))
							{
								if (func_21(func_280(4, iVar7), iParam4, 0) == 0)
								{
									return iVar7;
								}
							}
							iVar0++;
						}
						if (bParam1)
						{
							iVar0 = 0;
							while (iVar0 < iVar3)
							{
								iVar7 = (iVar2 + iVar0);
								if (func_527(iParam2, iVar7))
								{
									iVar5 = func_21(func_280(1, iVar7), iParam4, 0);
									if (unk_0xE2D0C323A1AE5D85(iVar5, 0))
									{
										return iVar7;
									}
								}
								iVar0++;
							}
						}
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = (iVar2 + iVar0);
							if (func_527(iParam2, iVar7))
							{
								iVar5 = func_21(func_280(1, iVar7), iParam4, 0);
								if (unk_0xE2D0C323A1AE5D85(iVar5, 1) && !unk_0xE2D0C323A1AE5D85(iVar5, 2))
								{
									return iVar7;
								}
							}
							iVar0++;
						}
						break;
					
					case 2:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = (iVar2 + iVar0);
							if (func_527(iParam2, iVar7))
							{
								if (func_21(func_280(4, iVar7), iParam4, 0) == 0)
								{
									return iVar7;
								}
								else
								{
									iVar5 = func_21(func_280(1, iVar7), iParam4, 0);
									if (bParam1)
									{
										if (unk_0xE2D0C323A1AE5D85(iVar5, 0))
										{
											return iVar7;
										}
										else if (unk_0xE2D0C323A1AE5D85(iVar5, 1))
										{
											return iVar7;
										}
									}
									else if (unk_0xE2D0C323A1AE5D85(iVar5, 1))
									{
										return iVar7;
									}
								}
							}
							iVar0++;
						}
						break;
					}
				}
		}
		iVar1++;
	}
	if ((func_21(5395, iParam4, 0) != 0 && !Global_262145.f_20875) && func_472(iParam2, 156))
	{
		iVar7 = func_528(156, iParam0, bParam1, iParam2, 1, iParam4, 0);
		if (iVar7 != -1)
		{
			return iVar7;
		}
	}
	if (func_414(iParam4) && func_472(iParam2, 223))
	{
		iVar7 = func_528(223, iParam0, bParam1, iParam2, 1, iParam4, 0);
		if (iVar7 != -1)
		{
			return iVar7;
		}
	}
	if (func_412(iParam4) && func_472(iParam2, 278))
	{
		iVar7 = func_528(278, iParam0, bParam1, iParam2, 1, iParam4, 0);
		if (iVar7 != -1)
		{
			return iVar7;
		}
	}
	return -1;
}

int func_527(int iParam0, int iParam1)
{
	if (!func_402(iParam0))
	{
		if (func_480(iParam0, 0))
		{
			if (iParam1 == func_479(iParam0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (!func_481(iParam1) && func_478(iParam1))
		{
			return 0;
		}
	}
	if (func_390(iParam0))
	{
		if (!func_296(iParam1))
		{
			return 0;
		}
	}
	else if (func_296(iParam1))
	{
		return 0;
	}
	if (func_475(iParam1))
	{
		if (!func_362(iParam0))
		{
			return 0;
		}
	}
	else if (func_362(iParam0))
	{
		return 0;
	}
	if ((iParam0 == joaat("cerberus") || iParam0 == joaat("cerberus2")) || iParam0 == joaat("cerberus3"))
	{
		if ((iParam1 != 236 && iParam1 != 246) && iParam1 != 256)
		{
			return 0;
		}
	}
	else if ((iParam1 == 236 || iParam1 == 246) || iParam1 == 256)
	{
		return 0;
	}
	return 1;
}

int func_528(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (iParam0 == 158 && iParam6)
	{
		if (func_527(iParam3, iParam0))
		{
			if (bParam4)
			{
				if (func_21(func_280(4, iParam0), iParam5, 0) == joaat("hauler2") || func_21(func_280(4, iParam0), iParam5, 0) == joaat("phantom3"))
				{
					return iParam0;
				}
				else if (func_21(func_280(4, iParam0), iParam5, 0) == 0)
				{
					return iParam0;
				}
				else
				{
					return iParam0;
				}
			}
			else if (Global_1585844[iParam0 /*142*/].f_66 == joaat("hauler2") || Global_1585844[iParam0 /*142*/].f_66 == joaat("phantom3"))
			{
				return iParam0;
			}
			else if (Global_1585844[iParam0 /*142*/].f_66 == 0)
			{
				return iParam0;
			}
			else
			{
				return iParam0;
			}
		}
	}
	if (bParam4)
	{
		switch (iParam1)
		{
			case 0:
				if (func_527(iParam3, iParam0))
				{
					if (func_21(func_280(4, iParam0), iParam5, 0) == 0)
					{
						return iParam0;
					}
					else
					{
						iVar0 = func_21(func_280(1, iParam0), iParam5, 0);
						if (bParam2)
						{
							if (unk_0xE2D0C323A1AE5D85(iVar0, 0))
							{
								return iParam0;
							}
						}
					}
				}
				break;
			
			case 1:
				if (func_527(iParam3, iParam0))
				{
					if (func_21(func_280(4, iParam0), iParam5, 0) == 0)
					{
						return iParam0;
					}
				}
				if (bParam2)
				{
					if (func_527(iParam3, iParam0))
					{
						iVar0 = func_21(func_280(1, iParam0), iParam5, 0);
						if (unk_0xE2D0C323A1AE5D85(iVar0, 0))
						{
							return iParam0;
						}
					}
				}
				if (func_527(iParam3, iParam0))
				{
					iVar0 = func_21(func_280(1, iParam0), iParam5, 0);
					if (unk_0xE2D0C323A1AE5D85(iVar0, 1) && !unk_0xE2D0C323A1AE5D85(iVar0, 2))
					{
						return iParam0;
					}
				}
				break;
			
			case 2:
				if (func_527(iParam3, iParam0))
				{
					if (func_21(func_280(4, iParam0), iParam5, 0) == 0)
					{
						return iParam0;
					}
					else
					{
						iVar0 = func_21(func_280(1, iParam0), iParam5, 0);
						if (bParam2)
						{
							if (unk_0xE2D0C323A1AE5D85(iVar0, 0))
							{
								return iParam0;
							}
							else if (unk_0xE2D0C323A1AE5D85(iVar0, 1))
							{
								return iParam0;
							}
						}
						else if (unk_0xE2D0C323A1AE5D85(iVar0, 1))
						{
							return iParam0;
						}
					}
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				if (!func_527(iParam3, iParam0))
				{
				}
				else if (Global_1585844[iParam0 /*142*/].f_66 == 0)
				{
					return iParam0;
				}
				else if (bParam2)
				{
					if (unk_0xE2D0C323A1AE5D85(Global_1585844[iParam0 /*142*/].f_103, 0))
					{
						return iParam0;
					}
				}
				break;
			
			case 1:
				if (!func_527(iParam3, iParam0))
				{
				}
				else if (Global_1585844[iParam0 /*142*/].f_66 == 0)
				{
					return iParam0;
				}
				if (bParam2)
				{
					if (!func_527(iParam3, iParam0))
					{
					}
					else if (unk_0xE2D0C323A1AE5D85(Global_1585844[iParam0 /*142*/].f_103, 0))
					{
						return iParam0;
					}
				}
				if (!func_527(iParam3, iParam0))
				{
				}
				else if (unk_0xE2D0C323A1AE5D85(Global_1585844[iParam0 /*142*/].f_103, 1) && !unk_0xE2D0C323A1AE5D85(Global_1585844[iParam0 /*142*/].f_103, 2))
				{
					return iParam0;
				}
				else if (unk_0xE2D0C323A1AE5D85(Global_1585844[iParam0 /*142*/].f_103, 1))
				{
				}
				break;
			
			case 2:
				if (!func_527(iParam3, iParam0))
				{
				}
				else if (Global_1585844[iParam0 /*142*/].f_66 == 0)
				{
					return iParam0;
				}
				else if (bParam2)
				{
					if (unk_0xE2D0C323A1AE5D85(Global_1585844[iParam0 /*142*/].f_103, 0))
					{
						return iParam0;
					}
					else if (unk_0xE2D0C323A1AE5D85(Global_1585844[iParam0 /*142*/].f_103, 1))
					{
						return iParam0;
					}
				}
				else if (unk_0xE2D0C323A1AE5D85(Global_1585844[iParam0 /*142*/].f_103, 1))
				{
					return iParam0;
				}
				break;
			}
	}
	return -1;
}

int func_529(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	
	bVar5 = func_111();
	bVar5 = true;
	if (func_286(iParam3, 0, 0))
	{
		iParam3 = func_525(iParam3);
	}
	if (iParam3 == 126)
	{
		if (func_411(22, -1) > 0)
		{
			if (!func_497())
			{
				return -1;
			}
		}
	}
	if (iParam3 == 127)
	{
		if (func_411(25, -1) > 0)
		{
			if (!func_495(1))
			{
				return -1;
			}
		}
	}
	if (!func_402(iParam2) && func_480(iParam2, 0))
	{
		iVar6 = func_479(iParam2);
		return func_528(iVar6, iParam0, bParam1, iParam2, 0, iParam4, iParam5);
	}
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (func_522(iVar1))
		{
		}
		else if (!bVar5 && func_411(iVar1, iParam4) >= Global_1312124)
		{
			return -1;
		}
		else if (bVar5 || (func_411(iVar1, iParam4) > 0 && func_411(iVar1, iParam4) <= 128))
		{
			iVar2 = 0;
			if ((bVar5 || iParam3 == 0) || iParam3 == func_411(iVar1, iParam4))
			{
				if (bVar5)
				{
					iVar4 = func_283(iVar1, -1, 1);
				}
				else
				{
					iVar4 = Global_1312124[func_411(iVar1, iParam4) /*1951*/].f_33;
				}
				if (func_390(iParam2))
				{
					if (iVar4 == 13)
					{
						iVar3 = 3;
					}
					else if (iVar4 == 8)
					{
						iVar3 = 2;
					}
					else
					{
						iVar3 = 1;
					}
					iVar2 = 10;
				}
				else
				{
					iVar3 = iVar4;
					iVar2 = 0;
				}
				iVar2 = (iVar2 + func_451(iVar1));
				iVar6 = -1;
				switch (iParam0)
				{
					case 0:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar6 = (iVar2 + iVar0);
							if (!func_527(iParam2, iVar6))
							{
							}
							else if (Global_1585844[iVar6 /*142*/].f_66 == 0)
							{
								return iVar6;
							}
							else if (bParam1)
							{
								if (unk_0xE2D0C323A1AE5D85(Global_1585844[iVar6 /*142*/].f_103, 0))
								{
									return iVar6;
								}
							}
							iVar0++;
						}
						break;
					
					case 1:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar6 = (iVar2 + iVar0);
							if (!func_527(iParam2, iVar6))
							{
							}
							else if (Global_1585844[iVar6 /*142*/].f_66 == 0)
							{
								return iVar6;
							}
							iVar0++;
						}
						if (bParam1)
						{
							iVar0 = 0;
							while (iVar0 < iVar3)
							{
								iVar6 = (iVar2 + iVar0);
								if (!func_527(iParam2, iVar6))
								{
								}
								else if (unk_0xE2D0C323A1AE5D85(Global_1585844[iVar6 /*142*/].f_103, 0))
								{
									return iVar6;
								}
								iVar0++;
							}
						}
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar6 = (iVar2 + iVar0);
							if (!func_527(iParam2, iVar6))
							{
							}
							else if (unk_0xE2D0C323A1AE5D85(Global_1585844[iVar6 /*142*/].f_103, 1) && !unk_0xE2D0C323A1AE5D85(Global_1585844[iVar6 /*142*/].f_103, 2))
							{
								return iVar6;
							}
							else if (unk_0xE2D0C323A1AE5D85(Global_1585844[iVar6 /*142*/].f_103, 1))
							{
							}
							iVar0++;
						}
						break;
					
					case 2:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar6 = (iVar2 + iVar0);
							if (!func_527(iParam2, iVar6))
							{
							}
							else if (Global_1585844[iVar6 /*142*/].f_66 == 0)
							{
								return iVar6;
							}
							else if (bParam1)
							{
								if (unk_0xE2D0C323A1AE5D85(Global_1585844[iVar6 /*142*/].f_103, 0))
								{
									return iVar6;
								}
								else if (unk_0xE2D0C323A1AE5D85(Global_1585844[iVar6 /*142*/].f_103, 1))
								{
									return iVar6;
								}
							}
							else if (unk_0xE2D0C323A1AE5D85(Global_1585844[iVar6 /*142*/].f_103, 1))
							{
								return iVar6;
							}
							iVar0++;
						}
						break;
					}
				}
		}
		iVar1++;
	}
	if ((func_21(5395, iParam4, 0) != 0 && !Global_262145.f_20875) && func_472(iParam2, 156))
	{
		iVar6 = func_528(156, iParam0, bParam1, iParam2, 0, iParam4, 0);
		if (iVar6 != -1)
		{
			return iVar6;
		}
	}
	if (func_414(iParam4))
	{
		if (func_527(iParam2, 223))
		{
			iVar6 = func_528(223, iParam0, bParam1, iParam2, 0, iParam4, 0);
			if (iVar6 != -1)
			{
				return iVar6;
			}
		}
	}
	if (func_412(iParam4))
	{
		if (func_527(iParam2, 278))
		{
			iVar6 = func_528(278, iParam0, bParam1, iParam2, 0, iParam4, 0);
			if (iVar6 != -1)
			{
				return iVar6;
			}
		}
	}
	return -1;
}

void func_530(int iParam0, int iParam1)
{
	*iParam1 = -1;
	if (func_411(0, -1) >= 1 && func_492(iParam0, 0))
	{
		if (((((((((((((func_411(1, -1) >= 1 || (func_411(6, -1) >= 1 && func_492(iParam0, 6))) || func_411(8, -1) >= 1) || func_537()) || (func_535() && func_472(iParam0, 159))) || (func_533() && func_492(iParam0, 13))) || (func_531() && func_492(iParam0, 14))) || (func_414(-1) && iParam0 == joaat("oppressor2"))) || (func_411(18, -1) >= 1 && func_492(iParam0, 18))) || (func_411(21, -1) >= 1 && func_492(iParam0, 21))) || ((func_411(22, -1) >= 1 && func_492(iParam0, 22)) && func_497())) || (func_412(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg")))) || ((func_411(25, -1) >= 1 && func_492(iParam0, 25)) && func_495(0))) || (func_411(26, -1) >= 1 && func_492(iParam0, 26)))
		{
			return;
		}
		*iParam1 = func_411(0, -1);
		return;
	}
	else if (func_411(6, -1) >= 1 && func_492(iParam0, 6))
	{
		if (((((((((((func_411(8, -1) >= 1 || func_537()) || (func_535() && func_472(iParam0, 159))) || (func_533() && func_492(iParam0, 13))) || (func_531() && func_492(iParam0, 14))) || (func_414(-1) && iParam0 == joaat("oppressor2"))) || (func_411(18, -1) >= 1 && func_492(iParam0, 18))) || (func_411(21, -1) >= 1 && func_492(iParam0, 21))) || ((func_411(22, -1) >= 1 && func_492(iParam0, 22)) && func_497())) || (func_412(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg")))) || ((func_411(25, -1) >= 1 && func_492(iParam0, 25)) && func_495(0))) || (func_411(26, -1) >= 1 && func_492(iParam0, 26)))
		{
			return;
		}
		*iParam1 = func_411(6, -1);
		return;
	}
	else if (func_411(8, -1) >= 1 && func_492(iParam0, 8))
	{
		if ((((((((((func_537() || (func_535() && func_472(iParam0, 159))) || (func_533() && func_492(iParam0, 13))) || (func_531() && func_492(iParam0, 14))) || (func_414(-1) && iParam0 == joaat("oppressor2"))) || (func_411(18, -1) >= 1 && func_492(iParam0, 18))) || (func_411(21, -1) >= 1 && func_492(iParam0, 21))) || ((func_411(22, -1) >= 1 && func_492(iParam0, 22)) && func_497())) || (func_412(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg")))) || ((func_411(25, -1) >= 1 && func_492(iParam0, 25)) && func_495(0))) || (func_411(26, -1) >= 1 && func_492(iParam0, 26)))
		{
			return;
		}
		*iParam1 = func_411(8, -1);
		return;
	}
	else if (func_537() && func_472(iParam0, 156))
	{
		if ((((((((((func_535() && func_472(iParam0, 159)) || (func_533() && func_492(iParam0, 13))) || (func_531() && func_492(iParam0, 14))) || (func_414(-1) && iParam0 == joaat("oppressor2"))) || (func_411(18, -1) >= 1 && func_492(iParam0, 18))) || (func_411(21, -1) >= 1 && func_492(iParam0, 21))) || ((func_411(22, -1) >= 1 && func_492(iParam0, 22)) && func_497())) || (func_412(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg")))) || ((func_411(25, -1) >= 1 && func_492(iParam0, 25)) && func_495(0))) || (func_411(26, -1) >= 1 && func_492(iParam0, 26)))
		{
			return;
		}
		*iParam1 = 1234;
		return;
	}
	else if (func_535() && func_472(iParam0, 159))
	{
		if (((((((((func_533() && func_492(iParam0, 13)) || (func_531() && func_492(iParam0, 14))) || (func_414(-1) && iParam0 == joaat("oppressor2"))) || (func_411(18, -1) >= 1 && func_492(iParam0, 18))) || (func_411(21, -1) >= 1 && func_492(iParam0, 21))) || ((func_411(22, -1) >= 1 && func_492(iParam0, 22)) && func_497())) || (func_412(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg")))) || ((func_411(25, -1) >= 1 && func_492(iParam0, 25)) && func_495(0))) || (func_411(26, -1) >= 1 && func_492(iParam0, 26)))
		{
			return;
		}
		*iParam1 = func_411(12, -1);
		return;
	}
	else if (func_533() && func_492(iParam0, 13))
	{
		if (((((((func_531() && func_492(iParam0, 14)) || (func_411(18, -1) >= 1 && func_492(iParam0, 18))) || (func_411(21, -1) >= 1 && func_492(iParam0, 21))) || ((func_411(22, -1) >= 1 && func_492(iParam0, 22)) && func_497())) || (func_412(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg")))) || ((func_411(25, -1) >= 1 && func_492(iParam0, 25)) && func_495(0))) || (func_411(26, -1) >= 1 && func_492(iParam0, 26)))
		{
			return;
		}
		if (func_414(-1) && iParam0 == joaat("oppressor2"))
		{
			return;
		}
		*iParam1 = func_411(13, -1);
		return;
	}
	else if (func_531() && func_492(iParam0, 14))
	{
		if ((((((((func_531() && func_411(15, -1) >= 1) && func_492(iParam0, 15)) || (func_411(18, -1) >= 1 && func_492(iParam0, 18))) || (func_411(21, -1) >= 1 && func_492(iParam0, 21))) || ((func_411(22, -1) >= 1 && func_492(iParam0, 22)) && func_497())) || (func_412(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg")))) || ((func_411(25, -1) >= 1 && func_492(iParam0, 25)) && func_495(0))) || (func_411(26, -1) >= 1 && func_492(iParam0, 26)))
		{
			return;
		}
		if (func_414(-1) && iParam0 == joaat("oppressor2"))
		{
			return;
		}
		*iParam1 = func_411(14, -1);
		return;
	}
	else if (func_414(-1) && iParam0 == joaat("oppressor2"))
	{
		if (((((func_411(18, -1) >= 1 && func_492(iParam0, 18)) || (func_411(21, -1) >= 1 && func_492(iParam0, 21))) || ((func_411(22, -1) >= 1 && func_492(iParam0, 22)) && func_497())) || ((func_411(25, -1) >= 1 && func_492(iParam0, 25)) && func_495(0))) || (func_411(26, -1) >= 1 && func_492(iParam0, 26)))
		{
			return;
		}
		*iParam1 = 1236;
		return;
	}
	else if (func_411(18, -1) >= 1 && func_492(iParam0, 18))
	{
		if ((((((func_411(19, -1) >= 1 && func_492(iParam0, 18)) || (func_411(21, -1) >= 1 && func_492(iParam0, 21))) || ((func_411(22, -1) >= 1 && func_492(iParam0, 22)) && func_497())) || (func_412(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg")))) || ((func_411(25, -1) >= 1 && func_492(iParam0, 25)) && func_495(0))) || (func_411(26, -1) >= 1 && func_492(iParam0, 26)))
		{
			return;
		}
		*iParam1 = func_411(18, -1);
		return;
	}
	else if (func_411(21, -1) >= 1 && func_492(iParam0, 21))
	{
		if (((((func_411(22, -1) >= 1 && func_492(iParam0, 22)) && func_497()) || (func_412(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg")))) || ((func_411(25, -1) >= 1 && func_492(iParam0, 25)) && func_495(0))) || (func_411(26, -1) >= 1 && func_492(iParam0, 26)))
		{
			return;
		}
		*iParam1 = func_411(21, -1);
		return;
	}
	else if ((func_411(22, -1) >= 1 && func_492(iParam0, 22)) && func_497())
	{
		if (((func_412(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg"))) || ((func_411(25, -1) >= 1 && func_492(iParam0, 25)) && func_495(0))) || (func_411(26, -1) >= 1 && func_492(iParam0, 26)))
		{
			return;
		}
		*iParam1 = func_411(22, -1);
		return;
	}
	else if (func_412(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg")))
	{
		if (((func_411(25, -1) >= 1 && func_492(iParam0, 25)) && func_495(0)) || (func_411(26, -1) >= 1 && func_492(iParam0, 26)))
		{
			return;
		}
		*iParam1 = 1238;
		return;
	}
	else if ((func_411(25, -1) >= 1 && func_492(iParam0, 25)) && func_495(0))
	{
		if ((func_412(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg"))) || (func_411(26, -1) >= 1 && func_492(iParam0, 26)))
		{
			return;
		}
		*iParam1 = func_411(25, -1);
		return;
	}
	else if (func_411(26, -1) >= 1 && func_492(iParam0, 26))
	{
		if (func_412(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg")))
		{
			return;
		}
		*iParam1 = func_411(26, -1);
		return;
	}
}

bool func_531()
{
	return func_532() != 0;
}

int func_532()
{
	return Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_332;
}

bool func_533()
{
	return func_534() != 0;
}

int func_534()
{
	return Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_281;
}

bool func_535()
{
	return func_536() != 0;
}

int func_536()
{
	return Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_274;
}

bool func_537()
{
	return func_21(5395, -1, 0) != 0;
}

int func_538(int iParam0, int iParam1)
{
	if (func_411(0, iParam1) != 0 && func_492(iParam0, 0))
	{
		return 1;
	}
	else if (func_411(6, iParam1) != 0 && func_492(iParam0, 6))
	{
		return 1;
	}
	else if (func_411(8, iParam1) != 0 && func_492(iParam0, 8))
	{
		return 1;
	}
	else if (func_411(11, iParam1) != 0 && func_492(iParam0, 11))
	{
		return 1;
	}
	else if (iParam0 == joaat("trailersmall2"))
	{
		return 1;
	}
	else if (iParam0 == joaat("minitank"))
	{
		return 1;
	}
	else if (((func_21(5395, iParam1, 0) != 0 && func_67(15270, iParam1) == 7) && !Global_262145.f_20875) && func_472(iParam0, 156))
	{
		return 1;
	}
	else if (func_411(12, iParam1) != 0 && func_492(iParam0, 12))
	{
		return 1;
	}
	else if (func_411(13, -1) != 0 && func_492(iParam0, 13))
	{
		return 1;
	}
	else if (func_411(15, iParam1) != 0 && func_492(iParam0, 15))
	{
		return 1;
	}
	else if (func_414(iParam1) && func_472(iParam0, 223))
	{
		return 1;
	}
	else if (func_411(14, -1) != 0 && func_492(iParam0, 14))
	{
		return 1;
	}
	else if (func_411(18, iParam1) != 0 && func_492(iParam0, 18))
	{
		return 1;
	}
	else if (func_411(21, iParam1) != 0 && func_492(iParam0, 21))
	{
		return 1;
	}
	else if ((func_411(22, iParam1) != 0 && func_492(iParam0, 22)) && func_497())
	{
		return 1;
	}
	else if (func_412(iParam1) && func_472(iParam0, 278))
	{
		return 1;
	}
	else if ((func_411(25, iParam1) != 0 && func_492(iParam0, 25)) && func_495(1))
	{
		return 1;
	}
	else if (func_411(26, iParam1) != 0 && func_492(iParam0, 26))
	{
		return 1;
	}
	return 0;
}

int func_539()
{
	int iVar0;
	int iVar1;
	
	if (func_24(joaat("mpply_lw_podium_veh_model")) != Global_262145.f_26423)
	{
		return 0;
	}
	iVar0 = func_21(8352, -1, 0);
	iVar1 = unk_0x48352343BC5A41AE();
	if (iVar1 > iVar0)
	{
		return 0;
	}
	return 1;
}

int func_540(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, var uParam5, struct<246> Param6, var uParam7)
{
	switch (iParam4)
	{
		case 0:
			return func_754(sParam1, uParam5, -1, 1);
			break;
		
		case 1:
			return func_627(sParam1, uParam2, uParam3);
			break;
		
		case 2:
			return func_703(uParam0, sParam1, uParam7, -1, 1);
			break;
		
		case 3:
			return func_733(uParam0, sParam1, -1, 1);
			break;
		
		case 4:
			return func_746(uParam0, sParam1, -1, 1);
			break;
		
		case 5:
			return func_583(sParam1, uParam3, Param6);
			break;
		
		case 6:
			if (func_581())
			{
				return func_541(sParam1, func_552(0));
			}
			else
			{
				unk_0xB0550BC91B0159D6(uParam5, 19);
			}
			break;
	}
	return 0;
}

int func_541(char* sParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != -1)
	{
		switch (iParam1)
		{
			case 0:
				iVar0 = 5;
				func_547(iVar0);
				break;
			
			case 1:
				iVar0 = func_545(unk_0x9E2D6C50374FCFA9(), 1);
				func_547(iVar0);
				break;
			
			case 2:
				iVar0 = func_545(unk_0x9E2D6C50374FCFA9(), 3);
				func_547(iVar0);
				break;
			
			case 3:
				iVar0 = func_545(unk_0x9E2D6C50374FCFA9(), 4);
				func_547(iVar0);
				break;
			
			case 4:
				iVar0 = func_545(unk_0x9E2D6C50374FCFA9(), 2);
				func_547(iVar0);
				break;
			
			case 5:
				iVar0 = func_545(unk_0x9E2D6C50374FCFA9(), 0);
				func_547(iVar0);
				break;
			
			case 6:
			case 7:
			case 8:
			case 9:
			case 10:
			case 11:
				func_543(func_544(iParam1));
				break;
		}
		StringCopy(sParam0, func_542(iParam1), 64);
		return 1;
	}
	else if (iParam1 == -1)
	{
	}
	return 0;
}

char* func_542(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "AMDO_OBJ_140";
			break;
		
		case 1:
			return "AMDO_OBJ_136";
			break;
		
		case 2:
			return "AMDO_OBJ_138";
			break;
		
		case 3:
			return "AMDO_OBJ_135";
			break;
		
		case 4:
			return "AMDO_OBJ_137";
			break;
		
		case 5:
			return "AMDO_OBJ_139";
			break;
		
		case 6:
			return "BYCB_FREEL";
			break;
		
		case 7:
			return "BYCB_SASHDE";
			break;
		
		case 8:
			return "BYCB_MGUN";
			break;
		
		case 9:
			return "BYCB_EGG";
			break;
		
		case 10:
			return "BYCB_DMND";
			break;
		
		case 11:
			return "BYCB_WATCH";
			break;
	}
	return "INVALID";
}

void func_543(int iParam0)
{
	if (0 == iParam0)
	{
		return;
	}
	if (!unk_0x3C57C2F07FEE34D2(unk_0x05CBA41180F5D521(), "CASINO_LUCKY_WHEEL"))
	{
		return;
	}
	Global_1966370 = iParam0;
}

int func_544(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return 5;
		
		case 7:
			return 4;
		
		case 8:
			return 2;
		
		case 9:
			return 1;
		
		case 10:
			return 3;
		
		case 11:
			return 6;
		
		default:
	}
	return 0;
}

int func_545(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_8())
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1853128[iParam0 /*888*/].f_267.f_187[iVar0 /*13*/] != 0)
		{
			if (func_546(Global_1853128[iParam0 /*888*/].f_267.f_187[iVar0 /*13*/]) == iParam1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_546(int iParam0)
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

void func_547(int iParam0)
{
	int iVar0;
	
	if (!func_551(iParam0))
	{
		return;
	}
	iVar0 = func_550(unk_0x9E2D6C50374FCFA9(), iParam0);
	unk_0xCED9E32812D6C7C7(&Global_2783527, iParam0);
	Global_1636937[iParam0] = 0;
	Global_2783528[iParam0] = func_548(unk_0x9E2D6C50374FCFA9(), iVar0);
}

int func_548(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_8())
	{
		return 0;
	}
	if (func_549(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1853128[iParam0 /*888*/].f_267.f_187[iVar0 /*13*/] == iParam1)
			{
				return Global_1853128[iParam0 /*888*/].f_267.f_187[iVar0 /*13*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_549(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_550(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == func_8())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_549(Global_1853128[iParam0 /*888*/].f_267.f_187[iParam1 /*13*/]))
	{
		uVar0 = Global_1853128[iParam0 /*888*/].f_267.f_187[iParam1 /*13*/];
	}
	return uVar0;
}

bool func_551(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 6);
}

int func_552(int iParam0)
{
	int iVar0[12];
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 12)
	{
		iVar0[iVar2] = iVar2;
		iVar1 = (iVar1 + func_553(iVar0[iVar2], iParam0));
		iVar2++;
	}
	iVar3 = unk_0x95F3C8DAE5A0339C(0, iVar1);
	iVar2 = 0;
	while (iVar2 < 12)
	{
		if (iVar3 <= func_553(iVar0[iVar2], iParam0))
		{
			return iVar0[iVar2];
		}
		else
		{
			iVar3 = (iVar3 - func_553(iVar0[iVar2], iParam0));
		}
		iVar2++;
	}
	return -1;
}

int func_553(int iParam0, var uParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			if (func_579(unk_0x9E2D6C50374FCFA9()))
			{
				iVar0 = func_550(unk_0x9E2D6C50374FCFA9(), 5);
				if (((func_577(unk_0x9E2D6C50374FCFA9(), iVar0) && func_575(unk_0x9E2D6C50374FCFA9(), 5)) && func_548(unk_0x9E2D6C50374FCFA9(), iVar0) < 80) || uParam1)
				{
					return Global_262145.f_26512;
				}
			}
			break;
		
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			if (func_573(unk_0x9E2D6C50374FCFA9(), func_574(iParam0)))
			{
				if (func_570(func_574(iParam0)) || uParam1)
				{
					return Global_262145.f_26512;
				}
			}
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
			if (func_556() || uParam1)
			{
				if (!func_554(iParam0) || uParam1)
				{
					return Global_262145.f_26512;
				}
			}
			break;
	}
	return 0;
}

bool func_554(int iParam0)
{
	int iVar0;
	
	iVar0 = func_544(iParam0);
	return func_555(iVar0);
}

int func_555(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_1946638[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_556()
{
	if ((func_569(unk_0x9E2D6C50374FCFA9()) && func_564() < 6) && func_557())
	{
		return 1;
	}
	return 0;
}

int func_557()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_110[iVar0 /*3*/] != 0)
		{
			if (!func_558(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_110[iVar0 /*3*/]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_558(int iParam0)
{
	return 0 == func_559(iParam0);
}

int func_559(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_563(iParam0))
	{
		iVar0 = func_562(iParam0);
		iVar1 = func_560(iParam0);
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

int func_560(int iParam0)
{
	if (func_561(iParam0))
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

int func_561(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_562(int iParam0)
{
	int iVar0;
	
	if (func_561(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (iParam0 == Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_110[iVar0 /*3*/])
			{
				return Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_110[iVar0 /*3*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_563(int iParam0)
{
	int iVar0;
	
	if (func_561(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_110[iVar0 /*3*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_564()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		iVar2 = func_568(iVar1);
		if (iVar2 != 0)
		{
			iVar0 = (iVar0 + func_565(iVar2));
		}
		iVar1++;
	}
	return iVar0;
}

int func_565(int iParam0)
{
	int iVar0;
	
	if (func_561(iParam0))
	{
		iVar0 = func_566(func_567(iParam0));
		return func_21(iVar0, -1, 0);
	}
	return 0;
}

int func_566(int iParam0)
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

int func_567(int iParam0)
{
	int iVar0;
	
	if (func_561(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_110[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_568(int iParam0)
{
	if (Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_110[iParam0 /*3*/] != 0)
	{
		return Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_110[iParam0 /*3*/];
	}
	return 0;
}

int func_569(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (Global_1853128[iParam0 /*888*/].f_267.f_110[iVar0 /*3*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_570(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_550(unk_0x9E2D6C50374FCFA9(), iVar0);
		if (iVar1 != 0)
		{
			if (func_546(iVar1) == iParam0)
			{
				if (((func_577(unk_0x9E2D6C50374FCFA9(), iVar1) && func_571(unk_0x9E2D6C50374FCFA9(), iVar0)) && func_575(unk_0x9E2D6C50374FCFA9(), iVar0)) && func_548(unk_0x9E2D6C50374FCFA9(), iVar1) < 80)
				{
					return 1;
				}
				else
				{
					if (!func_577(unk_0x9E2D6C50374FCFA9(), iVar1))
					{
					}
					if (!func_571(unk_0x9E2D6C50374FCFA9(), iVar0))
					{
					}
					if (!func_575(unk_0x9E2D6C50374FCFA9(), iVar0))
					{
					}
					if (func_548(unk_0x9E2D6C50374FCFA9(), iVar1) >= 80)
					{
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_571(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = func_550(iParam0, iParam1);
	iVar2 = func_546(iVar1);
	switch (iVar2)
	{
		case 1:
			if (func_572(iParam0, iVar1) > 8)
			{
				iVar0 = 1;
			}
			break;
		
		case 3:
			if (func_572(iParam0, iVar1) > 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 4:
			if (func_572(iParam0, iVar1) > 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 0:
			if (func_572(iParam0, iVar1) > 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (func_572(iParam0, iVar1) > 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 5:
			if (func_572(iParam0, iVar1) > 1)
			{
				iVar0 = 1;
			}
			break;
	}
	return iVar0;
}

int func_572(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_8())
	{
		return 0;
	}
	if (func_549(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1853128[iParam0 /*888*/].f_267.f_187[iVar0 /*13*/] == iParam1)
			{
				return Global_1853128[iParam0 /*888*/].f_267.f_187[iVar0 /*13*/].f_4;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_573(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x44859561F653DD4E())
	{
		return 1;
	}
	if (iParam0 == func_8())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1853128[iParam0 /*888*/].f_267.f_187[iVar0 /*13*/] != 0)
		{
			iVar1 = Global_1853128[iParam0 /*888*/].f_267.f_187[iVar0 /*13*/];
			if (func_546(iVar1) == iParam1)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_574(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		
		case 2:
			return 3;
		
		case 3:
			return 4;
		
		case 4:
			return 2;
		
		case 5:
			return 0;
		
		default:
	}
	return -1;
}

int func_575(int iParam0, int iParam1)
{
	if (iParam0 != func_8() && func_576(iParam0, func_550(iParam0, iParam1)))
	{
		return Global_1853128[iParam0 /*888*/].f_267.f_187[iParam1 /*13*/].f_6;
	}
	return 0;
}

int func_576(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_549(iParam1) && iParam0 != func_8())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1853128[iParam0 /*888*/].f_267.f_187[iVar0 /*13*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_577(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_576(iParam0, iParam1))
	{
		iVar0 = func_578(iParam0, iParam1);
		if (Global_1853128[iParam0 /*888*/].f_267.f_187[iVar0 /*13*/].f_4 > 0 && Global_1853128[iParam0 /*888*/].f_267.f_187[iVar0 /*13*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

int func_578(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_549(iParam1) && iParam0 != func_8())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1853128[iParam0 /*888*/].f_267.f_187[iVar0 /*13*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_579(int iParam0)
{
	return func_580(iParam0) != 0;
}

int func_580(int iParam0)
{
	if (iParam0 == func_8())
	{
		return 0;
	}
	return Global_1853128[iParam0 /*888*/].f_267.f_187[5 /*13*/];
}

int func_581()
{
	bool bVar0;
	int iVar1[5];
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_579(unk_0x9E2D6C50374FCFA9()))
	{
		iVar3 = func_550(unk_0x9E2D6C50374FCFA9(), 5);
		if ((func_577(unk_0x9E2D6C50374FCFA9(), iVar3) && func_575(unk_0x9E2D6C50374FCFA9(), 5)) && func_548(unk_0x9E2D6C50374FCFA9(), iVar3) < 80)
		{
			bVar0 = true;
		}
		if (!func_577(unk_0x9E2D6C50374FCFA9(), iVar3))
		{
		}
		if (!func_575(unk_0x9E2D6C50374FCFA9(), 5))
		{
		}
		if (func_548(unk_0x9E2D6C50374FCFA9(), iVar3) >= 80)
		{
		}
	}
	if (func_582(unk_0x9E2D6C50374FCFA9()))
	{
		iVar4 = 0;
		while (iVar4 < 5)
		{
			iVar5 = func_550(unk_0x9E2D6C50374FCFA9(), iVar4);
			if ((((iVar5 != 0 && func_577(unk_0x9E2D6C50374FCFA9(), iVar5)) && func_571(unk_0x9E2D6C50374FCFA9(), iVar4)) && func_575(unk_0x9E2D6C50374FCFA9(), iVar4)) && func_548(unk_0x9E2D6C50374FCFA9(), iVar5) < 80)
			{
				iVar1[iVar4] = 1;
			}
			if (iVar5 == 0)
			{
			}
			else
			{
				if (!func_577(unk_0x9E2D6C50374FCFA9(), iVar5))
				{
				}
				if (!func_571(unk_0x9E2D6C50374FCFA9(), iVar4))
				{
				}
				if (!func_575(unk_0x9E2D6C50374FCFA9(), iVar4))
				{
				}
				if (func_548(unk_0x9E2D6C50374FCFA9(), iVar5) >= 80)
				{
				}
			}
			iVar4++;
		}
	}
	if (func_556())
	{
		iVar6 = 6;
		while (iVar6 <= 11)
		{
			if (!func_554(iVar6))
			{
				bVar2 = true;
			}
			iVar6++;
		}
	}
	if (bVar0)
	{
		return 1;
	}
	iVar7 = 0;
	while (iVar7 < 5)
	{
		if (iVar1[iVar7])
		{
			return 1;
		}
		iVar7++;
	}
	if (bVar2)
	{
		return 1;
	}
	return 0;
}

int func_582(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_8())
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (Global_1853128[iParam0 /*888*/].f_267.f_187[iVar0 /*13*/] != 0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_583(char* sParam0, var uParam1, struct<246> Param2)
{
	if (!unk_0xE2D0C323A1AE5D85(uParam1->f_354, 0))
	{
		uParam1->f_355 = func_625();
		unk_0xCED9E32812D6C7C7(&(uParam1->f_354), 0);
	}
	else if (uParam1->f_355 == -1)
	{
	}
	else
	{
		switch (uParam1->f_355)
		{
			case 0:
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
				return func_618(sParam0, uParam1->f_355, uParam1, Param2);
			
			case 8:
			case 9:
			case 10:
			case 11:
			case 12:
			case 13:
				return func_610(sParam0, uParam1, uParam1->f_355, 0);
			
			case 14:
				return func_610(sParam0, uParam1, uParam1->f_355, 1);
			
			case 15:
				if (func_249(unk_0x9E2D6C50374FCFA9()) >= 5)
				{
					func_585(func_18(), func_215(func_609(unk_0x9E2D6C50374FCFA9(), 1), 0));
					func_584();
					StringCopy(sParam0, "CAS_LW_ARMU", 64);
					return 1;
					break;
				}
				unk_0xB0550BC91B0159D6(&(uParam1->f_354), 0);
			}
		
		default:
	}
	return 0;
}

void func_584()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		iVar0 = round((50f * Global_262145.f_111));
		func_64(817, iVar0, -1, 1, 0);
		iVar1 = unk_0x57A3E5A15723F6CA(unk_0x9E2D6C50374FCFA9());
		iVar2 = unk_0x28E4040BE8C027EF(unk_0xE2D3D51028F0428A());
		iVar3 = (iVar1 - iVar2);
		unk_0x495F6EBD50BCB090(unk_0xE2D3D51028F0428A(), (iVar2 + iVar3));
	}
}

void func_585(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 >= func_608(238))
	{
		func_594(238, 1, 0);
	}
	if (iParam1 >= func_608(239))
	{
		func_594(239, 1, 0);
	}
	if (iParam1 >= func_608(240))
	{
		func_594(240, 1, 0);
	}
	if (iParam1 >= func_608(241))
	{
		func_594(241, 1, 0);
	}
	if (iParam1 >= func_608(242))
	{
		func_594(242, 1, 0);
	}
	if (iParam1 >= func_608(243))
	{
		func_594(243, 1, 0);
	}
	if (iParam1 >= func_608(244))
	{
		func_594(244, 1, 0);
	}
	if (iParam1 >= func_608(245))
	{
		func_594(245, 1, 0);
	}
	if (iParam1 >= func_608(246))
	{
		func_594(246, 1, 0);
	}
	if (iParam1 >= func_608(247))
	{
		func_594(247, 1, 0);
	}
	if (iParam1 >= func_608(156))
	{
		func_594(156, 1, 0);
	}
	if (iParam1 >= func_608(157))
	{
		func_594(157, 1, 0);
	}
	if (iParam1 >= func_608(158))
	{
		func_594(158, 1, 0);
	}
	if (iParam1 >= func_608(159))
	{
		func_594(159, 1, 0);
	}
	if (iParam1 >= func_608(160))
	{
		func_594(160, 1, 0);
	}
	iVar0 = 0;
	if (func_586(238))
	{
		iVar0++;
	}
	if (func_586(239))
	{
		iVar0++;
	}
	if (func_586(240))
	{
		iVar0++;
	}
	if (func_586(241))
	{
		iVar0++;
	}
	if (func_586(242))
	{
		iVar0++;
	}
	if (func_586(243))
	{
		iVar0++;
	}
	if (func_586(244))
	{
		iVar0++;
	}
	if (func_586(245))
	{
		iVar0++;
	}
	if (func_586(246))
	{
		iVar0++;
	}
	if (func_586(247))
	{
		iVar0++;
	}
	if (func_586(156))
	{
		func_64(1881, iVar0, iParam0, 1, 0);
	}
	if (func_586(157))
	{
		func_64(1882, iVar0, iParam0, 1, 0);
	}
	if (func_586(158))
	{
		func_64(1883, iVar0, iParam0, 1, 0);
	}
	if (func_586(159))
	{
		func_64(1884, iVar0, iParam0, 1, 0);
	}
	if (func_586(160))
	{
		func_64(1885, iVar0, iParam0, 1, 0);
	}
}

bool func_586(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_593())
	{
		return 0;
	}
	iVar0 = func_588(iParam0);
	iVar1 = iParam0;
	return unk_0xE2D0C323A1AE5D85(iVar0, func_587(iVar1));
}

int func_587(int iParam0)
{
	return (iParam0 % 32);
}

int func_588(var uParam0)
{
	int iVar0;
	
	iVar0 = func_21(func_589(uParam0, 999), -1, 0);
	return iVar0;
}

int func_589(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_592(iVar0);
	if (((func_591() == 0 || func_590() == 0) || iParam1 == 0) || (func_591() == 999 && func_590() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 697;
				break;
			
			case 1:
				return 698;
				break;
			
			case 2:
				return 699;
				break;
			
			case 3:
				return 700;
				break;
			
			case 4:
				return 701;
				break;
			
			case 5:
				return 702;
				break;
			
			case 6:
				return 703;
				break;
			
			case 7:
				return 704;
				break;
			
			case 8:
				return 705;
				break;
			
			case 9:
				return 2055;
				break;
			
			case 10:
				return 2067;
				break;
			
			case 11:
				return 2094;
				break;
			
			case 12:
				return 2430;
				break;
			
			case 13:
				return 2949;
				break;
			
			case 14:
				return 5512;
				break;
			
			case 15:
				return 5516;
				break;
			
			case 16:
				return 5520;
				break;
			
			case 17:
				return 5524;
				break;
			
			case 18:
				return 5528;
				break;
			
			case 19:
				return 5532;
				break;
			
			case 20:
				return 5592;
				break;
			
			case 21:
				return 5596;
				break;
			
			case 22:
				return 5600;
				break;
			
			case 23:
				return 5604;
				break;
			
			case 24:
				return 5608;
				break;
			
			case 25:
				return 5612;
				break;
			
			case 26:
				return 5616;
				break;
			
			case 27:
				return 5637;
				break;
			
			case 28:
				return 5641;
				break;
			
			case 29:
				return 5645;
				break;
			
			case 30:
				return 5649;
				break;
			
			case 31:
				return 5653;
				break;
			
			case 32:
				return 5657;
				break;
			
			case 33:
				return 6467;
				break;
			
			case 34:
				return 6471;
				break;
			
			case 35:
				return 6475;
				break;
			
			case 36:
				return 6479;
				break;
			
			case 37:
				return 6483;
				break;
			
			case 38:
				return 6487;
				break;
			
			case 39:
				return 6491;
				break;
			
			case 40:
				return 10266;
				break;
		}
	}
	return 12597;
}

int func_590()
{
	return Global_31506;
}

int func_591()
{
	return Global_31505;
}

int func_592(int iParam0)
{
	return (iParam0 / 32);
}

bool func_593()
{
	return Global_1575025;
}

void func_594(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (!func_586(iParam0))
		{
			func_607(iParam0, 1);
		}
		if (bParam2)
		{
			if (func_605(iParam0) == 0)
			{
				unk_0x150D8F58B26E9F70(func_604(iParam0));
				unk_0x13436442FA22E816(func_603(iParam0), 2, func_604(iParam0));
				if (unk_0x78D9ADD511FEAD8B(-1))
				{
					unk_0x91DFC8F68F6D9B05(-1, "CHALLENGE_UNLOCKED", "HUD_AWARDS", 1);
				}
				func_596(29, func_604(iParam0), func_602(iParam0), func_600(iParam0), func_598(iParam0), -1, 0, 0, 0, -1, 0);
				func_595(iParam0, 1);
			}
		}
	}
	else if (func_586(iParam0))
	{
		func_607(iParam0, 0);
	}
}

void func_595(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		if (bParam1)
		{
			unk_0xCED9E32812D6C7C7(&(Global_2820521.f_1011[func_592(iVar0)]), func_587(iVar0));
		}
		else
		{
			unk_0xB0550BC91B0159D6(&(Global_2820521.f_1011[func_592(iVar0)]), func_587(iVar0));
		}
	}
}

void func_596(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = func_597(&Global_1652537);
	Global_1652537[iVar0 /*106*/] = iParam0;
	StringCopy(&(Global_1652537[iVar0 /*106*/].f_17), sParam3, 64);
	StringCopy(&(Global_1652537[iVar0 /*106*/].f_1), sParam4, 64);
	StringCopy(&(Global_1652537[iVar0 /*106*/].f_33), sParam1, 64);
	StringCopy(&(Global_1652537[iVar0 /*106*/].f_49), sParam2, 64);
	Global_1652537[iVar0 /*106*/].f_97 = iParam5;
	Global_1652537[iVar0 /*106*/].f_104 = iParam9;
	Global_1652537[iVar0 /*106*/].f_105 = iParam10;
	if (iParam6 != 0)
	{
	}
	if (iParam7 != 0)
	{
	}
	if (!unk_0xACC32B78196FBC2A(sParam8))
	{
		StringCopy(&(Global_1652537[iVar0 /*106*/].f_98), sParam8, 24);
	}
}

int func_597(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if ((*uParam0)[iVar1 /*106*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

char* func_598(int iParam0)
{
	char* sVar0;
	
	sVar0 = "MpAwards1";
	switch (iParam0)
	{
		case 155:
			return func_599(joaat("weapon_smokegrenade"), 0);
			break;
	}
	return sVar0;
}

char* func_599(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("weapon_knife"):
			return "MPWeaponsUnusedForNow";
			break;
		
		case joaat("weapon_stungun"):
			return "MPWeaponsGang0";
			break;
		
		case joaat("weapon_pistol"):
			return "MPWeaponsGang1";
			break;
		
		case joaat("weapon_appistol"):
			return "MPWeaponsGang1";
			break;
		
		case joaat("gadget_parachute"):
			return "MPWeaponsGang1";
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsGang0";
					break;
				
				case joaat("component_smg_clip_01"):
				case joaat("component_smg_clip_02"):
				case joaat("component_at_pi_supp"):
				case joaat("component_at_ar_flsh"):
					return "MPWeaponsGang0";
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsGang0";
					break;
				
				case joaat("component_sniperrifle_clip_01"):
				case joaat("component_at_scope_large"):
				case joaat("component_at_ar_supp_02"):
					return "MPWeaponsGang0";
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsGang0";
					break;
				
				case joaat("component_carbinerifle_clip_01"):
				case joaat("component_carbinerifle_clip_02"):
				case joaat("component_at_railcover_01"):
				case joaat("component_at_ar_afgrip"):
				case joaat("component_at_ar_flsh"):
				case joaat("component_at_scope_medium"):
				case joaat("component_at_ar_supp"):
					return "MPWeaponsGang0";
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsCommon";
					break;
				
				case joaat("component_at_sr_supp"):
				case joaat("component_at_pi_flsh"):
					return "MPWeaponsCommon";
					break;
			}
			break;
		
		case joaat("weapon_grenade"):
			return "MPWeaponsGang0";
			break;
		
		case joaat("weapon_stickybomb"):
			return "MPWeaponsCommon";
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsCommon";
					break;
				
				case joaat("component_at_ar_afgrip"):
				case joaat("component_at_ar_flsh"):
				case joaat("component_at_scope_small"):
					return "MPWeaponsCommon";
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsGang0";
					break;
				
				case joaat("component_at_scope_medium"):
				case joaat("component_at_ar_afgrip"):
				case joaat("component_combatmg_clip_02"):
				case joaat("component_combatmg_clip_01"):
					return "MPWeaponsGang0";
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsCommon";
					break;
				
				case joaat("component_assaultshotgun_clip_01"):
				case joaat("component_assaultshotgun_clip_02"):
				case joaat("component_at_ar_afgrip"):
				case joaat("component_at_ar_flsh"):
				case joaat("component_at_ar_supp_02"):
					return "MPWeaponsCommon";
					break;
			}
			break;
		
		case joaat("weapon_rpg"):
			return "MPWeaponsCommon";
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsGang0";
					break;
				
				case joaat("component_heavysniper_clip_01"):
				case joaat("component_at_scope_max"):
					return "MPWeaponsGang0";
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsGang0";
					break;
				
				case joaat("component_advancedrifle_clip_01"):
				case joaat("component_advancedrifle_clip_02"):
				case joaat("component_at_ar_afgrip"):
				case joaat("component_at_ar_flsh"):
				case joaat("component_at_scope_medium"):
				case joaat("component_at_ar_supp"):
					return "MPWeaponsGang0";
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsCommon";
					break;
				
				case joaat("component_microsmg_clip_01"):
				case joaat("component_microsmg_clip_02"):
				case joaat("component_at_pi_flsh"):
				case joaat("component_at_scope_macro"):
				case joaat("component_at_ar_supp_02"):
					return "MPWeaponsCommon";
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsGang1";
					break;
				
				case joaat("component_assaultrifle_clip_01"):
				case joaat("component_assaultrifle_clip_02"):
				case joaat("component_at_ar_afgrip"):
				case joaat("component_at_ar_flsh"):
				case joaat("component_at_scope_macro"):
				case joaat("component_at_ar_supp_02"):
					return "MPWeaponsGang1";
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsGang1";
					break;
				
				case joaat("component_mg_clip_01"):
				case joaat("component_mg_clip_02"):
				case joaat("component_at_scope_small"):
					return "MPWeaponsGang1";
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return "MPWeaponsGang1";
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsGang1";
					break;
				
				case joaat("component_minigun_clip_01"):
					return "MPWeaponsGang1";
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsCommon";
					break;
				
				case joaat("component_at_pi_supp"):
				case joaat("component_at_pi_flsh"):
				case joaat("component_combatpistol_clip_02"):
				case joaat("component_combatpistol_clip_01"):
					return "MPWeaponsCommon";
					break;
			}
			break;
		
		case joaat("weapon_smokegrenade"):
			return "MPWeaponsCommon";
			break;
	}
	return "";
}

char* func_600(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GenericKit";
	switch (iParam0)
	{
		case 155:
			return func_601(joaat("weapon_smokegrenade"), 0, 0);
			break;
	}
	return sVar0;
}

char* func_601(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 0)
	{
		switch (iParam0)
		{
			case joaat("weapon_knife"):
				return "W_ME_KNIFE_01";
				break;
			
			case joaat("weapon_stungun"):
				return "W_PI_Stungun";
				break;
			
			case joaat("weapon_pistol"):
				switch (iParam1)
				{
					case 0:
						return "W_PI_Pistol";
						break;
					
					case joaat("component_pistol_clip_01"):
						return "W_PI_Pistol_Mag1";
						break;
					
					case joaat("component_pistol_clip_02"):
						return "W_PI_Pistol_Mag2";
						break;
					
					case joaat("component_at_pi_flsh"):
						return "W_PI_Pistol_Flash";
						break;
					
					case joaat("component_at_pi_supp_02"):
						return "W_PI_Pistol_Supp";
						break;
				}
				break;
			
			case joaat("gadget_parachute"):
				return "Parachute_Main";
				break;
			
			case joaat("weapon_smg"):
				switch (iParam1)
				{
					case 0:
						return "W_SB_SMG";
						break;
					
					case joaat("component_smg_clip_01"):
						return "W_SB_SMG_Mag1";
						break;
					
					case joaat("component_smg_clip_02"):
						return "W_SB_SMG_Mag2";
						break;
					
					case joaat("component_at_pi_supp"):
						return "W_SB_SMG_Supp";
						break;
					
					case joaat("component_at_ar_flsh"):
						return "W_SB_SMG_Flash";
						break;
				}
				break;
			
			case joaat("weapon_sniperrifle"):
				switch (iParam1)
				{
					case 0:
						return "W_SR_SniperRifle";
						break;
					
					case joaat("component_sniperrifle_clip_01"):
						return "W_SR_SniperRifle_Mag1";
						break;
					
					case joaat("component_at_scope_large"):
						return "W_SR_SniperRifle_Scope";
						break;
					
					case joaat("component_at_ar_supp_02"):
						return "W_SR_SniperRifle_Supp";
						break;
				}
				break;
			
			case joaat("weapon_carbinerifle"):
				switch (iParam1)
				{
					case 0:
						return "W_AR_CarbineRifle";
						break;
					
					case joaat("component_carbinerifle_clip_01"):
						return "W_AR_CarbineRifle_Mag1";
						break;
					
					case joaat("component_carbinerifle_clip_02"):
						return "W_AR_CarbineRifle_Mag2";
						break;
					
					case joaat("component_at_railcover_01"):
						return "CarbineRifle_RAILCOVER_1";
						break;
					
					case joaat("component_at_ar_afgrip"):
						return "W_AR_CarbineRifle_Grip";
						break;
					
					case joaat("component_at_ar_flsh"):
						return "W_AR_CarbineRifle_Flash";
						break;
					
					case joaat("component_at_scope_medium"):
						return "W_AR_CarbineRifle_Scope";
						break;
					
					case joaat("component_at_ar_supp"):
						return "W_AR_CarbineRifle_Supp";
						break;
				}
				break;
			
			case joaat("weapon_specialcarbine"):
				break;
			
			case joaat("weapon_snspistol"):
				break;
			
			case joaat("weapon_pumpshotgun"):
				switch (iParam1)
				{
					case 0:
						return "W_SG_PumpShotgun";
						break;
					
					case joaat("component_at_sr_supp"):
						return "W_SG_PumpShotgun_Supp";
						break;
					
					case joaat("component_at_pi_flsh"):
						return "W_SG_PumpShotgun_Flash";
						break;
				}
				break;
			
			case joaat("weapon_grenade"):
				return "W_Ex_GrenadeFrag";
				break;
			
			case joaat("weapon_stickybomb"):
				return "W_Ex_PE";
				break;
			
			case joaat("weapon_grenadelauncher"):
				switch (iParam1)
				{
					case 0:
						return "W_R_GrenadeLauncher";
						break;
					
					case joaat("component_at_ar_afgrip"):
						return "W_R_GrenadeLauncher_Grip";
						break;
					
					case joaat("component_at_ar_flsh"):
						return "W_R_GrenadeLauncher_Flash";
						break;
					
					case joaat("component_at_scope_small"):
						return "W_R_GrenadeLauncher_Scope";
						break;
				}
				break;
			
			case joaat("weapon_combatmg"):
				switch (iParam1)
				{
					case 0:
						return "W_MG_CombatMG";
						break;
					
					case joaat("component_at_scope_medium"):
						return "W_MG_CombatMG_Scope";
						break;
					
					case joaat("component_at_ar_afgrip"):
						return "W_MG_CombatMG_Grip";
						break;
					
					case joaat("component_combatmg_clip_02"):
						return "W_MG_CombatMG_Mag2";
						break;
					
					case joaat("component_combatmg_clip_01"):
						return "W_MG_CombatMG_Mag1";
						break;
				}
				break;
			
			case joaat("weapon_assaultshotgun"):
				switch (iParam1)
				{
					case 0:
						return "W_SG_AssaultShotgun";
						break;
					
					case joaat("component_assaultshotgun_clip_01"):
						return "W_SG_AssaultShotgun_Mag1";
						break;
					
					case joaat("component_assaultshotgun_clip_02"):
						return "W_SG_AssaultShotgun_Mag2";
						break;
					
					case joaat("component_at_ar_afgrip"):
						return "W_SG_AssaultShotgun_Grip";
						break;
					
					case joaat("component_at_ar_flsh"):
						return "W_SG_AssaultShotgun_Flsh";
						break;
					
					case joaat("component_at_ar_supp_02"):
						return "W_SG_AssaultShotgun_Supp";
						break;
				}
				break;
			
			case joaat("weapon_appistol"):
				switch (iParam1)
				{
					case 0:
						return "W_PI_AppPistol";
						break;
					
					case joaat("component_appistol_clip_01"):
						return "W_PI_AppPistol_Mag1";
						break;
					
					case joaat("component_appistol_clip_02"):
						return "W_PI_AppPistol_Mag2";
						break;
					
					case joaat("component_at_pi_flsh"):
						return "W_PI_AppPistol_Flash";
						break;
					
					case joaat("component_at_pi_supp"):
						return "W_PI_AppPistol_Supp";
						break;
				}
				break;
			
			case joaat("weapon_rpg"):
				return "W_LR_RPG";
				break;
			
			case joaat("weapon_heavysniper"):
				switch (iParam1)
				{
					case 0:
						return "W_SR_HeavySniper";
						break;
					
					case joaat("component_heavysniper_clip_01"):
						return "W_SR_HeavySniper_Mag1";
						break;
					
					case joaat("component_at_scope_max"):
						return "W_SR_HeavySniper_Scope";
						break;
				}
				break;
			
			case joaat("weapon_advancedrifle"):
				switch (iParam1)
				{
					case 0:
						return "W_AR_AdvancedRifle";
						break;
					
					case joaat("component_advancedrifle_clip_01"):
						return "W_AR_AdvancedRifle_mag1";
						break;
					
					case joaat("component_advancedrifle_clip_02"):
						return "W_AR_AdvancedRifle_Mag2";
						break;
					
					case joaat("component_at_ar_afgrip"):
						return "AdvancedRifle_AFGRIP";
						break;
					
					case joaat("component_at_ar_flsh"):
						return "AssaultRifle_FLASHLIGHT";
						break;
					
					case joaat("component_at_scope_medium"):
						return "AssaultRifle_SCOPE_SMALL";
						break;
					
					case joaat("component_at_ar_supp"):
						return "AdvancedRifle_SUPPRESSOR";
						break;
				}
				break;
			
			case joaat("weapon_microsmg"):
				switch (iParam1)
				{
					case 0:
						return "W_SB_MicroSMG";
						break;
					
					case joaat("component_microsmg_clip_01"):
						return "W_SB_MicroSMG_Mag1";
						break;
					
					case joaat("component_microsmg_clip_02"):
						return "W_SB_MicroSMG_Mag2";
						break;
					
					case joaat("component_at_pi_flsh"):
						return "W_SB_MicroSMG_Flash";
						break;
					
					case joaat("component_at_scope_macro"):
						return "W_SB_MicroSMG_Scope";
						break;
					
					case joaat("component_at_ar_supp_02"):
						return "W_SB_MicroSMG_Supp";
						break;
				}
				break;
			
			case joaat("weapon_assaultrifle"):
				switch (iParam1)
				{
					case 0:
						return "W_AR_AssaultRifle";
						break;
					
					case joaat("component_assaultrifle_clip_01"):
						return "W_AR_AssaultRifle_Mag1";
						break;
					
					case joaat("component_assaultrifle_clip_02"):
						return "W_AR_AssaultRifle_Mag2";
						break;
					
					case joaat("component_at_ar_afgrip"):
						return "W_AR_AssaultRifle_Grip";
						break;
					
					case joaat("component_at_ar_flsh"):
						return "W_AR_AssaultRifle_Flash";
						break;
					
					case joaat("component_at_scope_macro"):
						return "W_AR_AssaultRifle_Scope";
						break;
					
					case joaat("component_at_ar_supp_02"):
						return "W_AR_AssaultRifle_Supp";
						break;
				}
				break;
			
			case joaat("weapon_mg"):
				switch (iParam1)
				{
					case 0:
						return "W_MG_MG";
						break;
					
					case joaat("component_mg_clip_01"):
						return "W_MG_MG_Mag1";
						break;
					
					case joaat("component_mg_clip_02"):
						return "W_MG_MG_Mag2";
						break;
					
					case joaat("component_at_scope_small_02"):
						return "W_MG_MG_Scope";
						break;
				}
				break;
			
			case joaat("weapon_sawnoffshotgun"):
				return "W_SG_SAWNOFF";
				break;
			
			case joaat("weapon_minigun"):
				switch (iParam1)
				{
					case 0:
						return "W_MG_Minigun";
						break;
					
					case joaat("component_minigun_clip_01"):
						return "W_MG_Minigun_Laser";
						break;
				}
				break;
			
			case joaat("weapon_combatpistol"):
				switch (iParam1)
				{
					case 0:
						return "W_PI_CombatPistol";
						break;
					
					case joaat("component_at_pi_supp"):
						return "W_PI_CombatPistol_Supp";
						break;
					
					case joaat("component_at_pi_flsh"):
						return "W_PI_CombatPistol_Flash";
						break;
					
					case joaat("component_combatpistol_clip_02"):
						return "W_PI_CombatPistol_Mag1";
						break;
					
					case joaat("component_combatpistol_clip_01"):
						return "W_PI_CombatPistol_Mag2";
						break;
				}
				break;
			
			case joaat("weapon_smokegrenade"):
				return "W_Ex_GrenadeSmoke";
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_knife"):
				return "W_ME_Knife_SILHOUETTE";
				break;
			
			case joaat("weapon_stungun"):
				return "W_PI_Stungun_SILHOUETTE";
				break;
			
			case joaat("weapon_pistol"):
				return "W_PI_Pistol_SILHOUETTE";
				break;
			
			case joaat("gadget_parachute"):
				return "Parachute_Main";
				break;
			
			case joaat("weapon_smg"):
				return "W_SB_SMG_SILHOUETTE";
				break;
			
			case joaat("weapon_sniperrifle"):
				return "W_SR_SniperRifle_SILHOUETTE";
				break;
			
			case joaat("weapon_carbinerifle"):
				return "W_AR_CarbineRifle_SILHOUETTE";
				break;
			
			case joaat("weapon_specialcarbine"):
				return "W_AR_CarbineRifle_SILHOUETTE";
				break;
			
			case joaat("weapon_snspistol"):
				break;
			
			case joaat("weapon_pumpshotgun"):
				return "W_SG_PumpShotgun_SILHOUETTE";
				break;
			
			case joaat("weapon_grenade"):
				return "W_Ex_GrenadeFrag_SILHOUETTE";
				break;
			
			case joaat("weapon_stickybomb"):
				return "W_Ex_PE_SILHOUETTE";
				break;
			
			case joaat("weapon_grenadelauncher"):
				return "W_R_GrenadeLauncher_SILHOUETTE";
				break;
			
			case joaat("weapon_combatmg"):
				return "W_MG_CombatMG_SILHOUETTE";
				break;
			
			case joaat("weapon_assaultshotgun"):
				return "W_SG_AssaultShotgun_SILHOUETTE";
				break;
			
			case joaat("weapon_appistol"):
				return "W_PI_AppPistol_SILHOUETTE";
				break;
			
			case joaat("weapon_rpg"):
				return "W_LR_RPG_SILHOUETTE";
				break;
			
			case joaat("weapon_heavysniper"):
				return "W_SR_HeavySniper_SILHOUETTE";
				break;
			
			case joaat("weapon_advancedrifle"):
				return "W_AR_AdvancedRifle_SILHOUETTE";
				break;
			
			case joaat("weapon_microsmg"):
				return "W_SB_MicroSMG_SILHOUETTE";
				break;
			
			case joaat("weapon_assaultrifle"):
				return "W_AR_AssaultRifle_SILHOUETTE";
				break;
			
			case joaat("weapon_mg"):
				return "W_MG_MG_SILHOUETTE";
				break;
			
			case joaat("weapon_sawnoffshotgun"):
				return "W_SG_SAWNOFF_SILHOUETTE";
				break;
			
			case joaat("weapon_minigun"):
				return "W_MG_Minigun_SILHOUETTE";
				break;
			
			case joaat("weapon_combatpistol"):
				return "W_PI_CombatPistol_SILHOUETTE";
				break;
			
			case joaat("weapon_smokegrenade"):
				return "W_Ex_GrenadeSmoke_SILHOUETTE";
				break;
			}
	}
	return "";
}

char* func_602(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 1:
			return "WT_PARA";
			break;
		
		case 5:
			return "KIT_THERMAL";
			break;
		
		case 2:
			return "KIT_SMOK_RED";
			break;
		
		case 3:
			return "KIT_SMOK_ORA";
			break;
		
		case 4:
			return "KIT_SMOK_YEL";
			break;
		
		case 6:
			return "KIT_SMOK_BLA";
			break;
		
		case 7:
			return "KIT_SMOK_BLU";
			break;
		
		case 16:
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
		case 33:
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
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
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
		case 103:
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
		case 114:
		case 115:
		case 116:
		case 117:
		case 118:
		case 119:
		case 120:
		case 121:
		case 122:
		case 123:
		case 124:
		case 125:
		case 126:
		case 127:
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
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
		case 145:
		case 146:
		case 147:
		case 148:
		case 149:
		case 150:
		case 151:
		case 152:
		case 153:
		case 154:
		case 155:
			return "WM_TINTD";
			break;
	}
	return sVar0;
}

char* func_603(int iParam0)
{
	switch (iParam0)
	{
		case 56:
		case 76:
		case 96:
		case 116:
			return "TINT_PISTOL";
			break;
		
		case 57:
		case 77:
		case 97:
		case 117:
			return "TINT_CMBTPISTOL";
			break;
		
		case 58:
		case 78:
		case 98:
		case 118:
			return "TINT_APPISTOL";
			break;
		
		case 59:
		case joaat("mpsv_lp0_31"):
		case 99:
		case 119:
			return "TINT_MICROSMG";
			break;
		
		case 60:
		case 80:
		case 100:
		case 120:
			return "TINT_SMG";
			break;
		
		case 61:
		case 81:
		case 101:
		case 121:
			return "TINT_ASLTRIFLE";
			break;
		
		case 62:
		case 82:
		case 102:
		case 122:
			return "TINT_CRBNRIFLE";
			break;
		
		case 63:
		case 83:
		case 103:
		case 123:
			return "TINT_ADVRRIFLE";
			break;
		
		case 64:
		case 84:
		case 104:
		case 124:
			return "TINT_MG";
			break;
		
		case 65:
		case 85:
		case 105:
		case 125:
			return "TINT_CMBTMG";
			break;
		
		case 66:
		case 86:
		case 106:
		case 126:
			return "TINT_PUMP";
			break;
		
		case 67:
		case 87:
		case 107:
		case 127:
			return "TINT_SAWOFF";
			break;
		
		case 68:
		case 88:
		case 108:
		case 128:
			return "TINT_ASLTSHTGN";
			break;
		
		case 71:
		case 91:
		case 111:
		case 131:
			return "TINT_SNIPERRFL";
			break;
		
		case 72:
		case 92:
		case 112:
		case 132:
			return "TINT_HVYSNIPER";
			break;
		
		case 73:
		case 93:
		case 113:
		case 133:
			return "TINT_GRNLAUNCH";
			break;
		
		case 74:
		case 94:
		case 114:
		case 134:
			return "TINT_RPG";
			break;
		
		case 75:
		case 95:
		case 115:
		case 135:
			return "TINT_MINIGUN";
			break;
		
		case 192:
		case 163:
		case 164:
		case 165:
			return "TINT_ASSAULTSMG";
			break;
		
		case 169:
		case 170:
		case 171:
			return "TINT_ASSAULTSNIPER";
			break;
		
		case 175:
		case 176:
		case 177:
		case 194:
			return "TINT_Pistol50";
			break;
		
		case 181:
		case 182:
		case 183:
		case 193:
			return "TINT_ASSAULTMG";
			break;
		
		case 187:
		case 188:
		case 189:
		case 191:
			return "TINT_HEAVYRIFLE";
			break;
	}
	return "WEAPON_UNLOCK";
}

char* func_604(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 5:
			return "KIT_THERMAL";
			break;
		
		case 2:
			return "KIT_SMOK_RED";
			break;
		
		case 3:
			return "KIT_SMOK_ORA";
			break;
		
		case 4:
			return "KIT_SMOK_YEL";
			break;
		
		case 6:
			return "KIT_SMOK_BLA";
			break;
		
		case 7:
			return "KIT_SMOK_BLU";
			break;
		
		case 16:
			return "AWT_651";
		
		case 17:
			return "AWT_651";
		
		case 18:
			return "AWT_651";
		
		case 19:
			return "AWT_651";
		
		case 20:
			return "AWT_651";
		
		case 21:
			return "AWT_651";
		
		case 22:
			return "AWT_651";
		
		case 23:
			return "AWT_651";
		
		case 24:
			return "AWT_651";
		
		case 25:
			return "AWT_651";
		
		case 26:
			return "AWT_651";
		
		case 27:
			return "AWT_651";
		
		case 28:
			return "AWT_651";
		
		case 29:
			return "AWT_651";
		
		case 30:
			return "AWT_651";
		
		case 31:
			return "AWT_651";
		
		case 32:
			return "AWT_651";
		
		case 33:
			return "AWT_651";
		
		case 34:
			return "AWT_651";
		
		case 35:
			return "AWT_651";
		
		case 36:
			return "AWT_650";
		
		case 37:
			return "AWT_650";
		
		case 38:
			return "AWT_650";
		
		case 39:
			return "AWT_650";
		
		case 40:
			return "AWT_650";
		
		case 41:
			return "AWT_650";
		
		case 42:
			return "AWT_650";
		
		case 43:
			return "AWT_650";
		
		case 44:
			return "AWT_650";
		
		case 45:
			return "AWT_650";
		
		case 46:
			return "AWT_650";
		
		case 47:
			return "AWT_650";
		
		case 48:
			return "AWT_650";
		
		case 49:
			return "AWT_650";
		
		case 50:
			return "AWT_650";
		
		case 51:
			return "AWT_650";
		
		case 52:
			return "AWT_650";
		
		case 53:
			return "AWT_650";
		
		case 54:
			return "AWT_650";
		
		case 55:
			return "AWT_650";
		
		case 136:
			return "AWT_657";
		
		case 137:
			return "AWT_657";
		
		case 138:
			return "AWT_657";
		
		case 139:
			return "AWT_657";
		
		case 140:
			return "AWT_657";
		
		case 141:
			return "AWT_657";
		
		case 142:
			return "AWT_657";
		
		case 143:
			return "AWT_657";
		
		case 144:
			return "AWT_657";
		
		case 145:
			return "AWT_657";
		
		case 146:
			return "AWT_657";
		
		case 147:
			return "AWT_657";
		
		case 148:
			return "AWT_657";
		
		case 149:
			return "AWT_657";
		
		case 150:
			return "AWT_657";
		
		case 151:
			return "AWT_657";
		
		case 152:
			return "AWT_657";
		
		case 153:
			return "AWT_657";
		
		case 154:
			return "AWT_657";
		
		case 155:
			return "AWT_657";
		
		case 56:
			return "TAN_TINT_HEAD";
			break;
		
		case 57:
			return "TAN_TINT_HEAD";
			break;
		
		case 58:
			return "TAN_TINT_HEAD";
			break;
		
		case 59:
			return "TAN_TINT_HEAD";
			break;
		
		case 60:
			return "TAN_TINT_HEAD";
			break;
		
		case 61:
			return "TAN_TINT_HEAD";
			break;
		
		case 62:
			return "TAN_TINT_HEAD";
			break;
		
		case 63:
			return "TAN_TINT_HEAD";
			break;
		
		case 64:
			return "TAN_TINT_HEAD";
			break;
		
		case 65:
			return "TAN_TINT_HEAD";
			break;
		
		case 66:
			return "TAN_TINT_HEAD";
			break;
		
		case 67:
			return "TAN_TINT_HEAD";
			break;
		
		case 68:
			return "TAN_TINT_HEAD";
			break;
		
		case 71:
			return "TAN_TINT_HEAD";
			break;
		
		case 72:
			return "TAN_TINT_HEAD";
			break;
		
		case 73:
			return "TAN_TINT_HEAD";
			break;
		
		case 74:
			return "TAN_TINT_HEAD";
			break;
		
		case 75:
			return "TAN_TINT_HEAD";
			break;
		
		case 76:
			return "GREEN_TINT_HEAD";
			break;
		
		case 77:
			return "GREEN_TINT_HEAD";
			break;
		
		case 78:
			return "GREEN_TINT_HEAD";
			break;
		
		case joaat("mpsv_lp0_31"):
			return "GREEN_TINT_HEAD";
			break;
		
		case 80:
			return "GREEN_TINT_HEAD";
			break;
		
		case 81:
			return "GREEN_TINT_HEAD";
			break;
		
		case 82:
			return "GREEN_TINT_HEAD";
			break;
		
		case 83:
			return "GREEN_TINT_HEAD";
			break;
		
		case 84:
			return "GREEN_TINT_HEAD";
			break;
		
		case 85:
			return "GREEN_TINT_HEAD";
			break;
		
		case 86:
			return "GREEN_TINT_HEAD";
			break;
		
		case 87:
			return "GREEN_TINT_HEAD";
			break;
		
		case 88:
			return "GREEN_TINT_HEAD";
			break;
		
		case 91:
			return "GREEN_TINT_HEAD";
			break;
		
		case 92:
			return "GREEN_TINT_HEAD";
			break;
		
		case 93:
			return "GREEN_TINT_HEAD";
			break;
		
		case 94:
			return "GREEN_TINT_HEAD";
			break;
		
		case 95:
			return "GREEN_TINT_HEAD";
			break;
		
		case 96:
			return "RED_TINT_HEAD";
			break;
		
		case 97:
			return "RED_TINT_HEAD";
			break;
		
		case 98:
			return "RED_TINT_HEAD";
			break;
		
		case 99:
			return "RED_TINT_HEAD";
			break;
		
		case 100:
			return "RED_TINT_HEAD";
			break;
		
		case 101:
			return "RED_TINT_HEAD";
			break;
		
		case 102:
			return "RED_TINT_HEAD";
			break;
		
		case 103:
			return "RED_TINT_HEAD";
			break;
		
		case 104:
			return "RED_TINT_HEAD";
			break;
		
		case 105:
			return "RED_TINT_HEAD";
			break;
		
		case 106:
			return "RED_TINT_HEAD";
			break;
		
		case 107:
			return "RED_TINT_HEAD";
			break;
		
		case 108:
			return "RED_TINT_HEAD";
			break;
		
		case 111:
			return "RED_TINT_HEAD";
			break;
		
		case 112:
			return "RED_TINT_HEAD";
			break;
		
		case 113:
			return "RED_TINT_HEAD";
			break;
		
		case 114:
			return "RED_TINT_HEAD";
			break;
		
		case 115:
			return "RED_TINT_HEAD";
			break;
		
		case 116:
			return "BLUE_TINT_HEAD";
			break;
		
		case 117:
			return "BLUE_TINT_HEAD";
			break;
		
		case 118:
			return "BLUE_TINT_HEAD";
			break;
		
		case 119:
			return "BLUE_TINT_HEAD";
			break;
		
		case 120:
			return "BLUE_TINT_HEAD";
			break;
		
		case 121:
			return "BLUE_TINT_HEAD";
			break;
		
		case 122:
			return "BLUE_TINT_HEAD";
			break;
		
		case 123:
			return "BLUE_TINT_HEAD";
			break;
		
		case 124:
			return "BLUE_TINT_HEAD";
			break;
		
		case 125:
			return "BLUE_TINT_HEAD";
			break;
		
		case 126:
			return "BLUE_TINT_HEAD";
			break;
		
		case 127:
			return "BLUE_TINT_HEAD";
			break;
		
		case 128:
			return "BLUE_TINT_HEAD";
			break;
		
		case 131:
			return "BLUE_TINT_HEAD";
			break;
		
		case 132:
			return "BLUE_TINT_HEAD";
			break;
		
		case 133:
			return "BLUE_TINT_HEAD";
			break;
		
		case 134:
			return "BLUE_TINT_HEAD";
			break;
		
		case 135:
			return "BLUE_TINT_HEAD";
			break;
		
		case 163:
			return "TAN_TINT_HEAD";
			break;
		
		case 164:
			return "BLUE_TINT_HEAD";
			break;
		
		case 165:
			return "RED_TINT_HEAD";
			break;
		
		case 169:
			return "TAN_TINT_HEAD";
			break;
		
		case 170:
			return "BLUE_TINT_HEAD";
			break;
		
		case 171:
			return "RED_TINT_HEAD";
			break;
		
		case 175:
			return "TAN_TINT_HEAD";
			break;
		
		case 176:
			return "BLUE_TINT_HEAD";
			break;
		
		case 177:
			return "RED_TINT_HEAD";
			break;
		
		case 181:
			return "TAN_TINT_HEAD";
			break;
		
		case 182:
			return "BLUE_TINT_HEAD";
			break;
		
		case 183:
			return "RED_TINT_HEAD";
			break;
		
		case 187:
			return "TAN_TINT_HEAD";
			break;
		
		case 188:
			return "BLUE_TINT_HEAD";
			break;
		
		case 189:
			return "RED_TINT_HEAD";
			break;
		
		case 191:
			return "GREEN_TINT_HEAD";
			break;
		
		case 192:
			return "GREEN_TINT_HEAD";
			break;
		
		case 193:
			return "GREEN_TINT_HEAD";
			break;
		
		case 194:
			return "GREEN_TINT_HEAD";
			break;
	}
	return sVar0;
}

bool func_605(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_606(iParam0);
	iVar1 = iParam0;
	return unk_0xE2D0C323A1AE5D85(iVar0, func_587(iVar1));
}

var func_606(int iParam0)
{
	var uVar0;
	
	uVar0 = Global_2820521.f_1011[func_592(iParam0)];
	return uVar0;
}

void func_607(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_588(iParam0);
	iVar1 = iParam0;
	if (iVar1 > -1)
	{
		if (bParam1)
		{
			unk_0xCED9E32812D6C7C7(&iVar0, func_587(iVar1));
		}
		else
		{
			unk_0xB0550BC91B0159D6(&iVar0, func_587(iVar1));
		}
		func_64(func_589(iParam0, 999), iVar0, -1, 1, 0);
	}
}

int func_608(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 11;
			break;
		
		case 256:
			return 11;
			break;
		
		case 257:
			return 11;
			break;
		
		case 258:
			return 11;
			break;
		
		case 259:
			return 11;
			break;
		
		case 260:
			return 11;
			break;
		
		case 261:
			return 11;
			break;
		
		case 262:
			return 11;
			break;
		
		case 305:
			return 11;
			break;
		
		case 306:
			return 11;
			break;
		
		case 307:
			return 11;
			break;
		
		case 308:
			return 11;
			break;
		
		case 309:
			return 11;
			break;
		
		case 310:
			return 11;
			break;
		
		case 311:
			return 11;
			break;
		
		case 312:
			return 11;
			break;
		
		case 313:
			return 11;
			break;
		
		case 314:
			return 11;
			break;
		
		case 315:
			return 11;
			break;
		
		case 316:
			return 11;
			break;
		
		case 317:
			return 11;
			break;
		
		case 318:
			return 11;
			break;
		
		case 319:
			return 11;
			break;
		
		case 320:
			return 11;
			break;
		
		case 321:
			return 11;
			break;
		
		case 322:
			return 11;
			break;
		
		case 323:
			return 11;
			break;
		
		case 263:
			return 11;
			break;
		
		case 264:
			return 11;
			break;
		
		case 265:
			return 11;
			break;
		
		case 302:
			return 11;
			break;
		
		case 303:
			return 11;
			break;
		
		case 304:
			return 11;
			break;
		
		case 296:
			return 11;
			break;
		
		case 297:
			return 11;
			break;
		
		case 298:
			return 11;
			break;
		
		case 299:
			return 11;
			break;
		
		case 300:
			return 11;
			break;
		
		case 301:
			return 11;
			break;
		
		case 1228:
			return 11;
			break;
		
		case 1229:
			return 11;
			break;
		
		case 1230:
			return 11;
			break;
		
		case 1231:
			return 11;
			break;
		
		case 1232:
			return 11;
			break;
		
		case 1233:
			return 11;
			break;
		
		case 156:
			return 5;
			break;
		
		case 157:
			return 10;
			break;
		
		case 158:
			return 15;
			break;
		
		case 159:
			return 20;
			break;
		
		case 160:
			return 25;
			break;
		
		case 2:
			return 27;
			break;
		
		case 3:
			return 24;
			break;
		
		case 4:
			return 22;
			break;
		
		case 6:
			return 15;
			break;
		
		case 7:
			return 18;
			break;
		
		case 8:
			return 44;
			break;
		
		case 9:
			return 16;
			break;
		
		case 10:
			return 23;
			break;
		
		case 11:
			return 38;
			break;
		
		case 12:
			return 32;
			break;
		
		case 13:
			return 11;
			break;
		
		case 14:
			return 56;
			break;
		
		case 15:
			return 28;
			break;
		
		case 288:
			return 44;
			break;
		
		case 289:
			return 16;
			break;
		
		case 290:
			return 23;
			break;
		
		case 291:
			return 38;
			break;
		
		case 292:
			return 32;
			break;
		
		case 293:
			return 11;
			break;
		
		case 294:
			return 56;
			break;
		
		case 295:
			return 28;
			break;
		
		case 17:
			return 75;
			break;
		
		case 136:
			return 50;
			break;
		
		case 137:
			return 50;
			break;
		
		case 138:
			return 50;
			break;
		
		case 139:
			return 50;
			break;
		
		case 140:
			return 50;
			break;
		
		case 141:
			return 50;
			break;
		
		case 142:
			return 50;
			break;
		
		case 143:
			return 50;
			break;
		
		case 144:
			return 50;
			break;
		
		case 145:
			return 50;
			break;
		
		case 146:
			return 50;
			break;
		
		case 147:
			return 50;
			break;
		
		case 148:
			return 50;
			break;
		
		case 149:
			return 50;
			break;
		
		case 150:
			return 50;
			break;
		
		case 151:
			return 50;
			break;
		
		case 152:
			return 50;
			break;
		
		case 153:
			return 50;
			break;
		
		case 154:
			return 50;
			break;
		
		case 155:
			return 50;
			break;
		
		case 36:
			return 100;
			break;
		
		case 238:
			if (Global_262145.f_2857 > -1)
			{
				return Global_262145.f_2857;
			}
			else
			{
				return 0;
			}
			break;
		
		case 239:
			if (Global_262145.f_2858 > -1)
			{
				return Global_262145.f_2858;
			}
			else
			{
				return 15;
			}
			break;
		
		case 240:
			if (Global_262145.f_2859 > -1)
			{
				return Global_262145.f_2859;
			}
			else
			{
				return 30;
			}
			break;
		
		case 241:
			if (Global_262145.f_2860 > -1)
			{
				return Global_262145.f_2860;
			}
			else
			{
				return 45;
			}
			break;
		
		case 242:
			if (Global_262145.f_2861 > -1)
			{
				return Global_262145.f_2861;
			}
			else
			{
				return 60;
			}
			break;
		
		case 243:
			if (Global_262145.f_2862 > -1)
			{
				return Global_262145.f_2862;
			}
			else
			{
				return 75;
			}
			break;
		
		case 244:
			if (Global_262145.f_2863 > -1)
			{
				return Global_262145.f_2863;
			}
			else
			{
				return 90;
			}
			break;
		
		case 245:
			if (Global_262145.f_2864 > -1)
			{
				return Global_262145.f_2864;
			}
			else
			{
				return 105;
			}
			break;
		
		case 246:
			if (Global_262145.f_2865 > -1)
			{
				return Global_262145.f_2865;
			}
			else
			{
				return 130;
			}
			break;
		
		case 247:
			if (Global_262145.f_2866 > -1)
			{
				return Global_262145.f_2866;
			}
			else
			{
				return 145;
			}
			break;
	}
	switch (iParam0)
	{
		case 345:
			return 11;
			break;
		
		case 346:
			return 11;
			break;
		
		case 347:
			return 11;
			break;
		
		case 348:
			return 11;
			break;
		
		case 349:
			return 11;
			break;
		
		case 350:
			return 11;
			break;
		
		case 351:
			return 11;
			break;
		
		case 352:
			return 11;
			break;
		
		case 353:
			return 11;
			break;
		
		case 354:
			return 11;
			break;
		
		case 355:
			return 11;
			break;
		
		case 356:
			return 11;
			break;
		
		case 357:
			return 11;
			break;
		
		case 358:
			return 11;
			break;
		
		case 359:
			return 11;
			break;
		
		case 360:
			return 11;
			break;
		
		case 361:
			return 11;
			break;
		
		case 362:
			return 11;
			break;
		
		case 363:
			return 11;
			break;
		
		case 364:
			return 11;
			break;
	}
	switch (iParam0)
	{
		case 56:
			return 100;
		
		case 57:
			return 100;
		
		case 58:
			return 100;
		
		case 59:
			return 100;
		
		case 60:
			return 100;
		
		case 61:
			return 100;
		
		case 62:
			return 100;
		
		case 63:
			return 100;
		
		case 64:
			return 100;
		
		case 65:
			return 100;
		
		case 66:
			return 100;
		
		case 67:
			return 100;
		
		case 68:
			return 100;
		
		case 69:
			return 100;
		
		case 70:
			return 100;
		
		case 71:
			return 100;
		
		case 72:
			return 100;
		
		case 73:
			return 100;
		
		case 74:
			return 100;
		
		case 75:
			return 100;
		
		case 76:
			return 200;
		
		case 77:
			return 200;
		
		case 78:
			return 200;
		
		case joaat("mpsv_lp0_31"):
			return 200;
		
		case 80:
			return 200;
		
		case 81:
			return 200;
		
		case 82:
			return 200;
		
		case 83:
			return 200;
		
		case 84:
			return 200;
		
		case 85:
			return 200;
		
		case 86:
			return 200;
		
		case 87:
			return 200;
		
		case 88:
			return 200;
		
		case 89:
			return 200;
		
		case 90:
			return 200;
		
		case 91:
			return 200;
		
		case 92:
			return 200;
		
		case 93:
			return 200;
		
		case 94:
			return 200;
		
		case 95:
			return 200;
		
		case 96:
			return 400;
		
		case 97:
			return 400;
		
		case 98:
			return 400;
		
		case 99:
			return 400;
		
		case 100:
			return 400;
		
		case 101:
			return 400;
		
		case 102:
			return 400;
		
		case 103:
			return 400;
		
		case 104:
			return 400;
		
		case 105:
			return 400;
		
		case 106:
			return 400;
		
		case 107:
			return 400;
		
		case 108:
			return 400;
		
		case 109:
			return 400;
		
		case 110:
			return 400;
		
		case 111:
			return 400;
		
		case 112:
			return 400;
		
		case 113:
			return 400;
		
		case 114:
			return 400;
		
		case 115:
			return 400;
		
		case 116:
			return 600;
		
		case 117:
			return 600;
		
		case 118:
			return 600;
		
		case 119:
			return 600;
		
		case 120:
			return 600;
		
		case 121:
			return 600;
		
		case 122:
			return 600;
		
		case 123:
			return 600;
		
		case 124:
			return 600;
		
		case 125:
			return 600;
		
		case 126:
			return 600;
		
		case 127:
			return 600;
		
		case 128:
			return 600;
		
		case 129:
			return 600;
		
		case 130:
			return 600;
		
		case 131:
			return 600;
		
		case 132:
			return 600;
		
		case 133:
			return 600;
		
		case 134:
			return 600;
		
		case 135:
			return 600;
		
		default:
	}
	switch (iParam0)
	{
		case 161:
			return 75;
		
		case 162:
			return 50;
		
		case 163:
			return 100;
		
		case 164:
			return 600;
		
		case 165:
			return 400;
		
		case 166:
			return 100;
		
		case 167:
			return 75;
		
		case 168:
			return 50;
		
		case 169:
			return 100;
		
		case 170:
			return 600;
		
		case 171:
			return 400;
		
		case 172:
			return 100;
		
		case 173:
			return 75;
		
		case 174:
			return 50;
		
		case 175:
			return 100;
		
		case 176:
			return 600;
		
		case 177:
			return 400;
		
		case 178:
			return 100;
		
		case 179:
			return 75;
		
		case 180:
			return 50;
		
		case 181:
			return 100;
		
		case 182:
			return 600;
		
		case 183:
			return 400;
		
		case 184:
			return 100;
		
		default:
	}
	switch (iParam0)
	{
		case 185:
			return 75;
		
		case 186:
			return 50;
		
		case 187:
			return 100;
		
		case 188:
			return 600;
		
		case 189:
			return 400;
		
		case 190:
			return 100;
		
		case 191:
			return 200;
		
		case 192:
			return 200;
		
		case 193:
			return 200;
		
		case 194:
			return 200;
		
		case 195:
			return 75;
		
		case 196:
			return 50;
		
		case 197:
			return 100;
		
		case 198:
			return 600;
		
		case 199:
			return 400;
		
		case 200:
			return 100;
		
		case 201:
			return 200;
		
		case 202:
			return 75;
		
		case 203:
			return 50;
		
		case 204:
			return 100;
		
		case 205:
			return 600;
		
		case 206:
			return 400;
		
		case 207:
			return 100;
		
		case 208:
			return 200;
		
		case 209:
			return 75;
		
		case 210:
			return 50;
		
		case 211:
			return 100;
		
		case 212:
			return 600;
		
		case 213:
			return 400;
		
		case 214:
			return 100;
		
		case 215:
			return 200;
		
		case 224:
			return 75;
		
		case 225:
			return 50;
		
		case 226:
			return 100;
		
		case 227:
			return 600;
		
		case 228:
			return 400;
		
		case 229:
			return 100;
		
		case 230:
			return 200;
		
		case 231:
			return 75;
		
		case 232:
			return 50;
		
		case 233:
			return 100;
		
		case 234:
			return 600;
		
		case 235:
			return 400;
		
		case 236:
			return 100;
		
		case 237:
			return 200;
		
		default:
	}
	switch (iParam0)
	{
		case 266:
			return 75;
		
		case 267:
			return 50;
		
		case 268:
			return 100;
		
		case 269:
			return 600;
		
		case 270:
			return 400;
		
		case 271:
			return 100;
		
		case 272:
			return 200;
		
		case 273:
			return 75;
		
		case 274:
			return 50;
		
		case 275:
			return 100;
		
		case 276:
			return 600;
		
		case 277:
			return 400;
		
		case 278:
			return 100;
		
		case 279:
			return 200;
		
		case 280:
			return 75;
		
		case 281:
			return 50;
		
		case 282:
			return 100;
		
		case 283:
			return 600;
		
		case 284:
			return 400;
		
		case 285:
			return 100;
		
		case 286:
			return 200;
		
		case 324:
			return 75;
		
		case 325:
			return 50;
		
		case 326:
			return 100;
		
		case 327:
			return 600;
		
		case 328:
			return 400;
		
		case 329:
			return 100;
		
		case 330:
			return 200;
		
		case 331:
			return 75;
		
		case 332:
			return 50;
		
		case 333:
			return 100;
		
		case 334:
			return 600;
		
		case 335:
			return 400;
		
		case 336:
			return 100;
		
		case 337:
			return 200;
		
		case 338:
			return 75;
		
		case 339:
			return 50;
		
		case 340:
			return 100;
		
		case 341:
			return 600;
		
		case 342:
			return 400;
		
		case 343:
			return 100;
		
		case 344:
			return 200;
		
		case 372:
			return 11;
		
		case 373:
			return 11;
		
		case 374:
			return 11;
		
		case 375:
			return 11;
		
		case 376:
			return 11;
		
		default:
	}
	switch (iParam0)
	{
		case 1184:
			return 11;
			break;
		
		case 1185:
			return 11;
			break;
		
		case 1234:
			return 11;
			break;
		
		case 1235:
			return 11;
			break;
		
		case 1236:
			return 11;
			break;
	}
	return 0;
}

int func_609(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_218(iParam0);
}

int func_610(char* sParam0, var uParam1, int iParam2, bool bParam3)
{
	if (func_111())
	{
		if (func_615(uParam1, iParam2, bParam3))
		{
		}
		else if (uParam1->f_350 == 2)
		{
			unk_0xCDE1C8CEF9603C08(func_113(func_112()));
			if (!bParam3)
			{
				func_614(iParam2);
				StringCopy(sParam0, func_612(func_613(iParam2)), 64);
			}
			else
			{
				func_611();
				StringCopy(sParam0, "CAS_LW_ALS", 64);
			}
			func_107(func_112());
			return 1;
		}
	}
	else
	{
		if (!bParam3)
		{
			func_614(iParam2);
			StringCopy(sParam0, func_612(func_613(iParam2)), 64);
		}
		else
		{
			func_611();
			StringCopy(sParam0, "CAS_LW_ALS", 64);
		}
		return 1;
	}
	return 0;
}

void func_611()
{
	int iVar0;
	
	if (func_21(1276, -1, 0) < 30)
	{
		iVar0 = (20 - func_21(1276, -1, 0));
	}
	func_219(1276, iVar0, -1);
	func_185(16, 1, -1);
	if (func_21(1277, -1, 0) < 15)
	{
		iVar0 = (15 - func_21(1277, -1, 0));
	}
	func_219(1277, iVar0, -1);
	func_185(15, 1, -1);
	if (func_21(1278, -1, 0) < 5)
	{
		iVar0 = (5 - func_21(1278, -1, 0));
	}
	func_185(14, 1, -1);
	func_219(1278, iVar0, -1);
	if (func_21(1098, -1, 0) < 20)
	{
		iVar0 = (20 - func_21(1098, -1, 0));
	}
	func_219(1098, iVar0, -1);
	if (func_21(62, -1, 0) < 10)
	{
		iVar0 = (10 - func_21(62, -1, 0));
	}
	func_219(62, iVar0, -1);
	if (func_21(63, -1, 0) < 10)
	{
		iVar0 = (10 - func_21(63, -1, 0));
	}
	func_219(63, iVar0, -1);
}

char* func_612(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 3:
			return "CAS_LW_S1";
		
		case 1:
			return "CAS_LW_S2";
		
		case 2:
			return "CAS_LW_S3";
		
		case 4:
			return "CAS_LW_S4";
		
		case 0:
			return "CAS_LW_S5";
		
		case 5:
			return "CAS_LW_S6";
		
		default:
	}
	return "INVALID";
}

int func_613(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return 0;
		
		case 9:
			return 1;
		
		case 10:
			return 2;
		
		case 11:
			return 3;
		
		case 12:
			return 4;
		
		case 13:
			return 5;
		
		default:
	}
	return -1;
}

void func_614(int iParam0)
{
	int iVar0;
	
	switch (func_613(iParam0))
	{
		case 3:
			if (func_21(1276, -1, 0) < 30)
			{
				iVar0 = (20 - func_21(1276, -1, 0));
			}
			func_219(1276, iVar0, -1);
			func_185(16, 1, -1);
			break;
		
		case 1:
			if (func_21(1277, -1, 0) < 15)
			{
				iVar0 = (15 - func_21(1277, -1, 0));
			}
			func_219(1277, iVar0, -1);
			func_185(15, 1, -1);
			break;
		
		case 2:
			if (func_21(1278, -1, 0) < 5)
			{
				iVar0 = (5 - func_21(1278, -1, 0));
			}
			func_185(14, 1, -1);
			func_219(1278, iVar0, -1);
			break;
		
		case 4:
			if (func_21(1098, -1, 0) < 20)
			{
				iVar0 = (20 - func_21(1098, -1, 0));
			}
			func_219(1098, iVar0, -1);
			break;
		
		case 0:
			if (func_21(62, -1, 0) < 10)
			{
				iVar0 = (10 - func_21(62, -1, 0));
			}
			func_219(62, iVar0, -1);
			break;
		
		case 5:
			if (func_21(63, -1, 0) < 10)
			{
				iVar0 = (10 - func_21(63, -1, 0));
			}
			func_219(63, iVar0, -1);
			break;
	}
}

int func_615(var uParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char[] cVar4[8];
	char* sVar5;
	
	bVar0 = false;
	switch (uParam0->f_356)
	{
		case 0:
			iVar1 = 0;
			iVar2 = 0;
			iVar3 = 0;
			if (unk_0xA257ACF32A90B705() > 0)
			{
				if (unk_0xA257ACF32A90B705() >= iVar3)
				{
					iVar2 = iVar3;
				}
				else
				{
					iVar2 = (iVar3 - (iVar3 - unk_0xA257ACF32A90B705()));
				}
				iVar3 = (iVar3 - iVar2);
			}
			if (iVar3 > 0)
			{
				if (unk_0xEEE6DAFBF451B942(-1) > 0)
				{
					if (unk_0xEEE6DAFBF451B942(-1) >= iVar3)
					{
						iVar1 = iVar3;
					}
					else
					{
						iVar1 = (iVar3 - (iVar3 - unk_0xEEE6DAFBF451B942(-1)));
					}
					iVar3 = (iVar3 - iVar1);
				}
			}
			cVar4 = func_617(func_613(iParam1));
			func_616(&sVar5, cVar4, 3);
			if (bParam2)
			{
				cVar4 = func_617(3);
				func_616(&sVar5, cVar4, 3);
				if (func_147(78225582, -1303831698, unk_0x2E87280918B16506(&sVar5), 537254313, 1, 0, 1, 8, 0, 3))
				{
					bVar0 = true;
				}
				cVar4 = func_617(1);
				func_616(&sVar5, cVar4, 3);
				if (func_147(78225582, -1303831698, unk_0x2E87280918B16506(&sVar5), 537254313, 1, 0, 1, 8, 0, 3))
				{
					bVar0 = true;
				}
				cVar4 = func_617(2);
				func_616(&sVar5, cVar4, 3);
				if (func_147(78225582, -1303831698, unk_0x2E87280918B16506(&sVar5), 537254313, 1, 0, 1, 8, 0, 3))
				{
					bVar0 = true;
				}
				cVar4 = func_617(4);
				func_616(&sVar5, cVar4, 3);
				if (func_147(78225582, -1303831698, unk_0x2E87280918B16506(&sVar5), 537254313, 1, 0, 1, 8, 0, 3))
				{
					bVar0 = true;
				}
				cVar4 = func_617(0);
				func_616(&sVar5, cVar4, 3);
				if (func_147(78225582, -1303831698, unk_0x2E87280918B16506(&sVar5), 537254313, 1, 0, 1, 8, 0, 3))
				{
					bVar0 = true;
				}
				cVar4 = func_617(5);
				func_616(&sVar5, cVar4, 3);
				if (func_147(78225582, -1303831698, unk_0x2E87280918B16506(&sVar5), 537254313, 1, 0, 1, 8, 0, 3))
				{
					bVar0 = true;
				}
				if (bVar0)
				{
					if (func_142())
					{
						unk_0xE0EF2AA080296002(1);
						unk_0x32663800F0617D17(-iVar1, -iVar2);
						uParam0->f_356 = 1;
					}
					else
					{
						uParam0->f_356 = 3;
					}
				}
			}
			else if (func_147(78225582, -1303831698, unk_0x2E87280918B16506(&sVar5), 537254313, 1, 0, 1, 8, 0, 3))
			{
				if (func_142())
				{
					unk_0xE0EF2AA080296002(1);
					unk_0x32663800F0617D17(-iVar1, -iVar2);
					uParam0->f_356 = 1;
				}
				else
				{
					uParam0->f_356 = 3;
				}
			}
			else
			{
				uParam0->f_356 = 3;
			}
			break;
		
		case 1:
			if (func_141(func_112()))
			{
				if (func_140(func_112()) == 2)
				{
					uParam0->f_356 = 2;
				}
				else
				{
					uParam0->f_356 = 3;
				}
			}
			break;
		
		case 2:
			uParam0->f_356 = 0;
			unk_0xE0EF2AA080296002(0);
			unk_0xAC765EF46E85A446(13);
			uParam0->f_350 = 2;
			return 0;
			break;
		
		case 3:
			func_107(func_112());
			uParam0->f_356 = 0;
			unk_0xE0EF2AA080296002(0);
			unk_0xAC765EF46E85A446(13);
			uParam0->f_350 = 0;
			return 0;
			break;
	}
	return 1;
	uParam0->f_356 = 0;
	uParam0->f_350 = -1;
	return 0;
}

void func_616(char* sParam0, char* sParam1, int iParam2)
{
	StringCopy(sParam0, "MT_", 64);
	StringConCat(sParam0, sParam1, 64);
	StringConCat(sParam0, "_t0_v", 64);
	StringIntConCat(sParam0, iParam2, 64);
}

char* func_617(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 3:
			return "SNK_ITEM1";
		
		case 1:
			return "SNK_ITEM2";
		
		case 2:
			return "SNK_ITEM3";
		
		case 4:
			return "SNK_ITEM4";
		
		case 0:
			return "SNK_ITEM5";
		
		case 5:
			return "SNK_ITEM6";
		
		default:
	}
	return "";
}

int func_618(char* sParam0, int iParam1, var uParam2, struct<5> Param3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183, var uParam184, var uParam185, var uParam186, var uParam187, var uParam188, var uParam189, var uParam190, var uParam191, var uParam192, var uParam193, var uParam194, var uParam195, var uParam196, var uParam197, var uParam198, var uParam199, var uParam200, var uParam201, var uParam202, var uParam203, var uParam204, var uParam205, var uParam206, var uParam207, var uParam208, var uParam209, var uParam210, var uParam211, var uParam212, var uParam213, var uParam214, var uParam215, var uParam216, var uParam217, var uParam218, var uParam219, var uParam220, var uParam221, var uParam222, var uParam223, var uParam224, var uParam225, var uParam226, var uParam227, var uParam228, var uParam229, var uParam230, var uParam231, var uParam232, var uParam233, var uParam234, var uParam235, var uParam236, var uParam237, var uParam238, var uParam239, var uParam240, var uParam241, var uParam242, var uParam243, var uParam244)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	switch (iParam1)
	{
		case 4:
			if (unk_0xE2D0C323A1AE5D85(Param3.f_4, 1))
			{
				iVar0 = unk_0x4A88C4ACAC824897(unk_0xE2D3D51028F0428A(), joaat("AMMO_PISTOL"));
				unk_0x6019BE7548B68C4B(unk_0xE2D3D51028F0428A(), joaat("weapon_pistol"), &iVar1);
				if (iVar1 > iVar0)
				{
					iVar2 = (iVar1 - iVar0);
				}
				unk_0xB003193C68661C8D(unk_0xE2D3D51028F0428A(), joaat("AMMO_PISTOL"), (iVar0 + iVar2));
				StringCopy(sParam0, func_624(iParam1), 64);
				return 1;
			}
			else
			{
				unk_0xB0550BC91B0159D6(&(uParam2->f_354), 0);
			}
			break;
		
		case 7:
			if (unk_0xE2D0C323A1AE5D85(Param3.f_4, 2))
			{
				iVar0 = unk_0x4A88C4ACAC824897(unk_0xE2D3D51028F0428A(), joaat("AMMO_SMG"));
				unk_0x6019BE7548B68C4B(unk_0xE2D3D51028F0428A(), joaat("weapon_microsmg"), &iVar1);
				if (iVar1 > iVar0)
				{
					iVar2 = (iVar1 - iVar0);
				}
				unk_0xB003193C68661C8D(unk_0xE2D3D51028F0428A(), joaat("AMMO_SMG"), (iVar0 + iVar2));
				StringCopy(sParam0, func_624(iParam1), 64);
				return 1;
			}
			else
			{
				unk_0xB0550BC91B0159D6(&(uParam2->f_354), 0);
			}
			break;
		
		case 5:
			if (unk_0xE2D0C323A1AE5D85(Param3.f_4, 3))
			{
				iVar0 = unk_0x4A88C4ACAC824897(unk_0xE2D3D51028F0428A(), joaat("AMMO_RIFLE"));
				unk_0x6019BE7548B68C4B(unk_0xE2D3D51028F0428A(), joaat("weapon_assaultrifle"), &iVar1);
				if (iVar1 > iVar0)
				{
					iVar2 = (iVar1 - iVar0);
				}
				unk_0xB003193C68661C8D(unk_0xE2D3D51028F0428A(), joaat("AMMO_RIFLE"), (iVar0 + iVar2));
				StringCopy(sParam0, func_624(iParam1), 64);
				return 1;
			}
			else
			{
				unk_0xB0550BC91B0159D6(&(uParam2->f_354), 0);
			}
			break;
		
		case 3:
			if (unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_127, 4))
			{
				iVar0 = unk_0x4A88C4ACAC824897(unk_0xE2D3D51028F0428A(), joaat("AMMO_MG"));
				unk_0x6019BE7548B68C4B(unk_0xE2D3D51028F0428A(), joaat("weapon_mg"), &iVar1);
				if (iVar1 > iVar0)
				{
					iVar2 = (iVar1 - iVar0);
				}
				unk_0xB003193C68661C8D(unk_0xE2D3D51028F0428A(), joaat("AMMO_MG"), (iVar0 + iVar2));
				StringCopy(sParam0, func_624(iParam1), 64);
				return 1;
			}
			else
			{
				unk_0xB0550BC91B0159D6(&(uParam2->f_354), 0);
			}
			break;
		
		case 6:
			if (unk_0xE2D0C323A1AE5D85(Param3.f_4, 4))
			{
				iVar0 = unk_0x4A88C4ACAC824897(unk_0xE2D3D51028F0428A(), joaat("AMMO_SHOTGUN"));
				unk_0x6019BE7548B68C4B(unk_0xE2D3D51028F0428A(), joaat("weapon_pumpshotgun"), &iVar1);
				if (iVar1 > iVar0)
				{
					iVar2 = (iVar1 - iVar0);
				}
				unk_0xB003193C68661C8D(unk_0xE2D3D51028F0428A(), joaat("AMMO_SHOTGUN"), (iVar0 + iVar2));
				StringCopy(sParam0, func_624(iParam1), 64);
				return 1;
			}
			else
			{
				unk_0xB0550BC91B0159D6(&(uParam2->f_354), 0);
			}
			break;
		
		case 2:
			if (unk_0xE2D0C323A1AE5D85(Param3.f_4, 5))
			{
				iVar0 = unk_0x4A88C4ACAC824897(unk_0xE2D3D51028F0428A(), joaat("AMMO_SNIPER"));
				unk_0x6019BE7548B68C4B(unk_0xE2D3D51028F0428A(), joaat("weapon_sniperrifle"), &iVar1);
				if (iVar1 > iVar0)
				{
					iVar2 = (iVar1 - iVar0);
				}
				unk_0xB003193C68661C8D(unk_0xE2D3D51028F0428A(), joaat("AMMO_SNIPER"), (iVar0 + iVar2));
				StringCopy(sParam0, func_624(iParam1), 64);
				return 1;
			}
			else
			{
				unk_0xB0550BC91B0159D6(&(uParam2->f_354), 0);
			}
			break;
		
		case 0:
			if (unk_0x8FEA2E94638F9767(unk_0xE2D3D51028F0428A(), joaat("weapon_minigun"), 0))
			{
				iVar0 = unk_0x4A88C4ACAC824897(unk_0xE2D3D51028F0428A(), joaat("AMMO_MINIGUN"));
				unk_0x6019BE7548B68C4B(unk_0xE2D3D51028F0428A(), joaat("weapon_minigun"), &iVar1);
				if (iVar1 > iVar0)
				{
					iVar2 = (iVar1 - iVar0);
				}
				unk_0xB003193C68661C8D(unk_0xE2D3D51028F0428A(), joaat("AMMO_MINIGUN"), (iVar0 + iVar2));
				StringCopy(sParam0, func_624(iParam1), 64);
				return 1;
			}
			else
			{
				unk_0xB0550BC91B0159D6(&(uParam2->f_354), 0);
			}
			break;
		
		case 1:
			if (unk_0x8FEA2E94638F9767(unk_0xE2D3D51028F0428A(), joaat("weapon_grenadelauncher"), 0) || func_619(joaat("weapon_grenade"), -1, 0))
			{
				iVar0 = unk_0x4A88C4ACAC824897(unk_0xE2D3D51028F0428A(), joaat("AMMO_GRENADELAUNCHER"));
				unk_0x6019BE7548B68C4B(unk_0xE2D3D51028F0428A(), joaat("weapon_grenadelauncher"), &iVar1);
				if (iVar1 > iVar0)
				{
					iVar2 = (iVar1 - iVar0);
				}
				unk_0xB003193C68661C8D(unk_0xE2D3D51028F0428A(), joaat("AMMO_GRENADELAUNCHER"), (iVar0 + iVar2));
				StringCopy(sParam0, func_624(iParam1), 64);
				return 1;
			}
			else
			{
				unk_0xB0550BC91B0159D6(&(uParam2->f_354), 0);
			}
			break;
	}
	return 0;
}

bool func_619(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam2 == 0)
	{
	}
	if (func_593())
	{
		return 0;
	}
	iVar0 = func_622(iParam0, iParam1);
	iVar1 = func_620(iParam0);
	return unk_0xE2D0C323A1AE5D85(iVar0, func_587(iVar1));
}

int func_620(int iParam0)
{
	return func_621(iParam0);
}

int func_621(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_unarmed"):
			return 0;
			break;
		
		case joaat("weapon_pistol"):
			return 1;
			break;
		
		case joaat("weapon_combatpistol"):
			return 2;
			break;
		
		case joaat("weapon_appistol"):
			return 3;
			break;
		
		case joaat("weapon_pistol50"):
			return 4;
			break;
		
		case joaat("weapon_smg"):
			return 5;
			break;
		
		case joaat("weapon_assaultsmg"):
			return 6;
			break;
		
		case joaat("weapon_microsmg"):
			return 7;
			break;
		
		case joaat("weapon_assaultrifle"):
			return 8;
			break;
		
		case joaat("weapon_carbinerifle"):
			return 9;
			break;
		
		case joaat("weapon_advancedrifle"):
			return 11;
			break;
		
		case joaat("weapon_mg"):
			return 12;
			break;
		
		case joaat("weapon_combatmg"):
			return 13;
			break;
		
		case -572349828:
			return 14;
			break;
		
		case joaat("weapon_stickybomb"):
			return 15;
			break;
		
		case joaat("weapon_grenade"):
			return 16;
			break;
		
		case joaat("weapon_smokegrenade"):
			return 17;
			break;
		
		case joaat("weapon_remotesniper"):
			return 18;
			break;
		
		case 392730790:
			return 19;
			break;
		
		case joaat("weapon_sniperrifle"):
			return 20;
			break;
		
		case joaat("weapon_heavysniper"):
			return 21;
			break;
		
		case joaat("weapon_pumpshotgun"):
			return 22;
			break;
		
		case joaat("weapon_bullpupshotgun"):
			return 23;
			break;
		
		case joaat("weapon_assaultshotgun"):
			return 24;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return 25;
			break;
		
		case joaat("weapon_grenadelauncher"):
			return 26;
			break;
		
		case joaat("weapon_rpg"):
			return 27;
			break;
		
		case joaat("weapon_minigun"):
			return 28;
			break;
		
		case -344484024:
			return 29;
			break;
		
		case -1887867191:
			return 30;
			break;
		
		case joaat("weapon_stungun"):
			return 31;
			break;
		
		case -837150131:
			return 32;
			break;
		
		case joaat("gadget_parachute"):
			return 33;
			break;
		
		case joaat("weapon_knife"):
			return 34;
			break;
		
		case joaat("weapon_nightstick"):
			return 35;
			break;
		
		case joaat("weapon_hammer"):
			return 36;
			break;
		
		case joaat("weapon_bat"):
			return 37;
			break;
		
		case joaat("weapon_crowbar"):
			return 38;
			break;
		
		case joaat("weapon_golfclub"):
			return 39;
			break;
		
		case joaat("weapon_grenadelauncher_smoke"):
			return 40;
			break;
		
		case joaat("weapon_molotov"):
			return 41;
			break;
		
		case joaat("weapon_fireextinguisher"):
			return 42;
			break;
		
		case joaat("weapon_petrolcan"):
			return 43;
			break;
		
		case joaat("weapon_digiscanner"):
			return 44;
			break;
		
		case joaat("weapon_bottle"):
			return 45;
			break;
		
		case joaat("weapon_specialcarbine"):
			return 46;
			break;
		
		case joaat("weapon_snspistol"):
			return 47;
			break;
		
		case joaat("weapon_heavypistol"):
			return 49;
			break;
		
		case joaat("weapon_bullpuprifle"):
			return 48;
			break;
		
		case joaat("weapon_gusenberg"):
			return 50;
			break;
		
		case joaat("weapon_dagger"):
			return 51;
			break;
		
		case joaat("weapon_vintagepistol"):
			return 52;
			break;
		
		case joaat("weapon_flaregun"):
			return 57;
			break;
		
		case joaat("weapon_musket"):
			return 53;
			break;
		
		case joaat("weapon_firework"):
			return 54;
			break;
		
		case joaat("weapon_marksmanrifle"):
			return 56;
			break;
		
		case joaat("weapon_heavyshotgun"):
			return 55;
			break;
		
		case joaat("weapon_proxmine"):
			return 60;
			break;
		
		case joaat("weapon_hominglauncher"):
			return 61;
			break;
		
		case joaat("weapon_hatchet"):
			return 58;
			break;
		
		case joaat("weapon_railgun"):
			return 59;
			break;
		
		case joaat("weapon_combatpdw"):
			return 64;
			break;
		
		case joaat("weapon_knuckle"):
			return 62;
			break;
		
		case joaat("weapon_marksmanpistol"):
			return 63;
			break;
		
		case joaat("weapon_machete"):
			return 65;
			break;
		
		case joaat("weapon_machinepistol"):
			return 68;
			break;
		
		case joaat("weapon_dbshotgun"):
			return 66;
			break;
		
		case joaat("weapon_compactrifle"):
			return 67;
			break;
		
		case joaat("weapon_flashlight"):
			return 69;
			break;
		
		case joaat("weapon_revolver"):
			return 70;
			break;
		
		case joaat("weapon_switchblade"):
			return 71;
			break;
		
		case joaat("weapon_autoshotgun"):
			return 72;
			break;
		
		case joaat("weapon_minismg"):
			return 73;
			break;
		
		case joaat("weapon_compactlauncher"):
			return 74;
			break;
		
		case joaat("weapon_battleaxe"):
			return 75;
			break;
		
		case joaat("weapon_pipebomb"):
			return 76;
			break;
		
		case joaat("weapon_poolcue"):
			return 77;
			break;
		
		case joaat("weapon_wrench"):
			return 78;
			break;
		
		case joaat("weapon_assaultrifle_mk2"):
			return 8;
			break;
		
		case joaat("weapon_carbinerifle_mk2"):
			return 9;
			break;
		
		case joaat("weapon_combatmg_mk2"):
			return 13;
			break;
		
		case joaat("weapon_heavysniper_mk2"):
			return 21;
			break;
		
		case joaat("weapon_pistol_mk2"):
			return 1;
			break;
		
		case joaat("weapon_smg_mk2"):
			return 5;
			break;
		
		case joaat("weapon_pumpshotgun_mk2"):
			return 22;
			break;
		
		case joaat("weapon_specialcarbine_mk2"):
			return 46;
			break;
		
		case joaat("weapon_snspistol_mk2"):
			return 47;
			break;
		
		case joaat("weapon_marksmanrifle_mk2"):
			return 56;
			break;
		
		case joaat("weapon_revolver_mk2"):
			return 70;
			break;
		
		case joaat("weapon_bullpuprifle_mk2"):
			return 48;
			break;
		
		case joaat("weapon_doubleaction"):
			return 79;
			break;
		
		case joaat("weapon_stone_hatchet"):
			return 80;
			break;
		
		case joaat("weapon_raypistol"):
			return 81;
			break;
		
		case joaat("weapon_raycarbine"):
			return 82;
			break;
		
		case joaat("weapon_rayminigun"):
			return 83;
			break;
		
		case joaat("weapon_navyrevolver"):
			return 84;
			break;
		
		case joaat("weapon_ceramicpistol"):
			return 85;
			break;
		
		case joaat("weapon_combatshotgun"):
			return 86;
			break;
		
		case joaat("weapon_militaryrifle"):
			return 88;
			break;
		
		case joaat("weapon_gadgetpistol"):
			return 87;
			break;
		
		case -947031628:
			return 10;
			break;
		
		case -618237638:
			return 89;
			break;
		
		case 406929569:
			return 90;
			break;
		
		case 1171102963:
			return 91;
			break;
	}
	return 0;
}

int func_622(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_21(func_623(iParam0), iParam1, 0);
	return iVar0;
}

int func_623(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_620(iParam0);
	iVar1 = func_592(iVar0);
	if ((func_591() == 0 || func_590() == 0) || (func_591() == 999 && func_590() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 680;
				break;
			
			case 1:
				return 681;
				break;
			
			case 2:
				return 2429;
				break;
			
			case 3:
				return 10278;
				break;
		}
	}
	return 12597;
}

char* func_624(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CAS_LW_AM1";
		
		case 1:
			return "CAS_LW_AM2";
		
		case 2:
			return "CAS_LW_AM3";
		
		case 3:
			return "CAS_LW_AM4";
		
		case 4:
			return "CAS_LW_AM5";
		
		case 5:
			return "CAS_LW_AM6";
		
		case 6:
			return "CAS_LW_AM7";
		
		case 7:
			return "CAS_LW_AM8";
		
		default:
	}
	return "INVALID";
}

int func_625()
{
	int iVar0[16];
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 16)
	{
		iVar0[iVar2] = iVar2;
		iVar1 = (iVar1 + func_626(iVar0[iVar2]));
		iVar2++;
	}
	iVar3 = unk_0x95F3C8DAE5A0339C(0, iVar1);
	iVar2 = 0;
	while (iVar2 < 16)
	{
		if (iVar3 <= func_626(iVar0[iVar2]))
		{
			return iVar0[iVar2];
		}
		else
		{
			iVar3 = (iVar3 - func_626(iVar0[iVar2]));
		}
		iVar2++;
	}
	return -1;
}

int func_626(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_26512;
		
		case 1:
			return Global_262145.f_26512;
		
		case 2:
			return Global_262145.f_26512;
		
		case 3:
			return Global_262145.f_26512;
		
		case 4:
			return Global_262145.f_26512;
		
		case 5:
			return Global_262145.f_26512;
		
		case 6:
			return Global_262145.f_26512;
		
		case 7:
			return Global_262145.f_26512;
		
		case 8:
			return Global_262145.f_26512;
		
		case 9:
			return Global_262145.f_26512;
		
		case 10:
			return Global_262145.f_26512;
		
		case 11:
			return Global_262145.f_26512;
		
		case 12:
			return Global_262145.f_26512;
		
		case 13:
			return Global_262145.f_26512;
		
		case 14:
			return Global_262145.f_26512;
		
		case 15:
			return Global_262145.f_26512;
		
		default:
	}
	return 0;
}

int func_627(char* sParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (!unk_0xE2D0C323A1AE5D85(uParam2->f_354, 0))
	{
		uParam2->f_358 = func_697(func_698());
		unk_0xCED9E32812D6C7C7(&(uParam2->f_354), 0);
	}
	else if (!func_696(uParam2->f_358) || (func_362(uParam2->f_358) && !func_538(uParam2->f_358, -1)))
	{
		if (func_362(uParam2->f_358) && !func_538(uParam2->f_358, -1))
		{
		}
		iVar0 = func_695(uParam2->f_358);
		func_631(iVar0, &(uParam2->f_350), &(uParam2->f_357));
		if (uParam2->f_357 == 0)
		{
			StringCopy(sParam0, unk_0x01E2429B82E280E6(uParam2->f_358), 64);
			return 1;
		}
	}
	else if (func_628(uParam1, uParam2->f_358))
	{
		return func_189(sParam0, uParam1, uParam2, -1, 1);
	}
	return 0;
}

int func_628(var uParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		if (func_630(iParam1))
		{
			if (!unk_0xE5965CDF24F93A9F(*uParam0))
			{
				*uParam0 = unk_0xBA715A7BEBA5A1F9(iParam1, 947.0432f, 116.779f, 79.4955f, 318.573f, 0, 0, 0);
				if (unk_0x03AC3319D1B50189(*uParam0) > 0)
				{
					unk_0x3C1BCE3438ECBFC0(*uParam0, 0);
				}
				unk_0x58DAFDEB2F46A5EA(*uParam0, 0, 0);
				unk_0x9210F85E9CD785F1(*uParam0, 1);
				unk_0xFA37094E2DF03E75(*uParam0, 0);
				unk_0x7EEABC35FCFA08B7(*uParam0, 0);
				unk_0xE5283B3A324D3FB0(*uParam0, 1);
				unk_0x3B2646B62E7BBE11(*uParam0, 2);
				unk_0x02443408423266F9(*uParam0);
				unk_0xF160248D9083ED0C(*uParam0, 1000, 0);
				unk_0x2EE80CD0EAEB9B5B(*uParam0, 1000f);
				unk_0x448AD51B3157C957(*uParam0, 1000f);
				unk_0x2EC6505629D78CCE(*uParam0, 0f);
				unk_0x28C1AA9789AB5554(*uParam0, 1);
				unk_0x0CD9B67A70AAD552(*uParam0, 1);
				unk_0xFEF687AF74EEDCC2(*uParam0, 0);
				unk_0xBD10A469F50E1A2A(*uParam0, 0);
				unk_0x398C962F550CF3B4(*uParam0, 1);
				unk_0xF1A23B343DFEDFD0(iParam1);
			}
			else if (func_127(*uParam0))
			{
				if (unk_0x7010991FDA59D3F2(*uParam0, iParam1))
				{
					return 1;
				}
				else if (func_629(*uParam0, &uLocal_64))
				{
					unk_0xD59CC8123FD1A789(uParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_629(int iParam0, var uParam1)
{
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		if (!unk_0xA6A089369417736E(iParam0))
		{
			if (unk_0x58FDF0B505AA2260(iParam0))
			{
				if (!unk_0xF4AD75B2D964D8AB(unk_0x15CAA6D7B11F1A7C(iParam0)))
				{
					unk_0x2D58A6131679D82C(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x930E64CB0285CAEC(iParam0, 0))
		{
			if (unk_0x3A8B0F5B0E3DE13A(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_630(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xD69A0C3662175E68(iParam0);
	return unk_0x0152AA00FA3130F1(iParam0);
}

int func_631(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	
	*uParam2 = -1;
	iVar0 = func_652(iParam0, 0);
	if (iVar0 == -1)
	{
		*uParam2 = 1;
		*uParam1 = 3;
		return 1;
	}
	if (func_649(iVar0))
	{
		*uParam2 = 2;
		*uParam1 = 3;
		return 1;
	}
	if (!func_111())
	{
		func_646(iVar0);
		func_645();
		*uParam2 = 0;
		*uParam1 = 2;
		return 1;
	}
	func_632(&sVar1, iParam0, 0, -1, 0);
	switch (*uParam1)
	{
		case 0:
			if (!func_147(78225582, -1843039992, unk_0x2E87280918B16506(&sVar1), 537254313, 1, 0, 1, 4, 0, 3))
			{
				*uParam2 = 3;
				*uParam1 = 3;
				func_107(func_112());
				return 1;
			}
			sVar2 = "PO_COUPON_CAR_XMAS2017";
			if (!func_147(78225582, -1843039992, unk_0x2E87280918B16506(sVar2), 537254313, 1, 0, 1, 4, unk_0x2E87280918B16506(&sVar1), 3))
			{
				*uParam2 = 3;
				*uParam1 = 3;
				func_107(func_112());
				return 1;
			}
			if (func_142())
			{
				*uParam1 = 1;
			}
			else
			{
				*uParam2 = 3;
				*uParam1 = 3;
				func_107(func_112());
				return 1;
			}
			break;
		
		case 1:
			if (func_141(func_112()))
			{
				if (func_140(func_112()) == 2)
				{
					*uParam2 = 0;
					*uParam1 = 2;
					func_107(func_112());
					func_646(iVar0);
					func_645();
					return 1;
				}
				else
				{
					*uParam2 = 3;
					*uParam1 = 3;
					func_107(func_112());
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_632(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	struct<4> Var1;
	int iVar2;
	
	iVar0 = func_652(iParam1, iParam2);
	if (iVar0 == -1)
	{
		IntToString(sParam0, 0, 64);
		return;
	}
	if (iParam1 == 245)
	{
		StringCopy(sParam0, "VE_BIG_YACHT_t0_v0", 64);
		return;
	}
	if (iParam1 == 323)
	{
		StringCopy(sParam0, "VE_BIG_TRUCK_t0_v0", 64);
		return;
	}
	if (iParam1 == 324)
	{
		StringCopy(sParam0, "VE_BALLISTIC_EQUIPMENT_t0_v0", 64);
		return;
	}
	if (iParam1 == 357)
	{
		StringCopy(sParam0, "VE_BIG_PLANE_t0_v0", 64);
		return;
	}
	if (iParam1 == 402)
	{
		StringCopy(sParam0, "VE_HACKER_TRUCK_t0_v0", 64);
		return;
	}
	if (iParam1 == 518)
	{
		StringCopy(sParam0, "VE_KOSATKA_t0_v0", 64);
		return;
	}
	if (iParam1 == 449)
	{
		StringCopy(sParam0, "VE_RC_BANDITO_t0_v0", 64);
		return;
	}
	StringCopy(&Var1, func_644(iParam1), 16);
	if (unk_0xACC32B78196FBC2A(&Var1) || unk_0x2E87280918B16506(&Var1) == -515263000)
	{
		IntToString(sParam0, 0, 64);
		return;
	}
	iVar2 = func_643(iParam1, -1);
	if (iVar2 == 0)
	{
		IntToString(sParam0, 0, 64);
		return;
	}
	func_393(sParam0, Var1, iVar2, 4, 1, iParam2, -1, -1, 1, bParam4);
	if ((((func_642(iParam1) || func_641(iParam1)) || func_640(func_643(iParam1, -1)) != -1) || func_639(func_643(iParam1, -1)) != -1) || func_638(func_643(iParam1, -1)) != -1)
	{
		if (iParam1 == 200)
		{
			if (Global_262145.f_20016)
			{
				if ((func_642(iParam1) && func_637()) || (func_641(iParam1) && !func_633(iParam1)))
				{
					func_393(sParam0, Var1, iVar2, 4, 1, iParam2, 1, -1, 1, bParam4);
				}
			}
		}
		else if (iParam2 != 0)
		{
			func_393(sParam0, Var1, iVar2, 4, 1, (iParam2 - 1), 1, -1, 1, bParam4);
		}
	}
	else if (iParam1 == 413)
	{
		func_393(sParam0, Var1, iVar2, 4, 1, iParam2, iParam3, -1, 1, bParam4);
	}
	else if ((((iParam1 == 414 || iParam1 == 527) || iParam1 == 531) || iParam1 == 533) || iParam1 == 525)
	{
		func_393(sParam0, Var1, iVar2, 4, 1, iParam2, iParam3, -1, 1, bParam4);
	}
}

int func_633(int iParam0)
{
	int iVar0;
	
	if (!Global_77852)
	{
		return 0;
	}
	iVar0 = 0;
	switch (iParam0)
	{
		case 187:
			iVar0 = 16;
			break;
		
		case 177:
			iVar0 = 12;
			break;
		
		case 185:
			iVar0 = 14;
			break;
		
		case 174:
			iVar0 = 9;
			break;
		
		case 171:
			iVar0 = 20;
			break;
		
		case 172:
			iVar0 = 7;
			break;
		
		case 173:
			iVar0 = 8;
			break;
		
		case 175:
			iVar0 = 10;
			break;
		
		case 176:
			iVar0 = 11;
			break;
		
		case 178:
			iVar0 = 5;
			break;
		
		case 179:
			iVar0 = 6;
			break;
		
		case 183:
			iVar0 = 21;
			break;
		
		case 180:
			iVar0 = 18;
			break;
		
		case 181:
			iVar0 = 22;
			break;
		
		case 182:
			iVar0 = 19;
			break;
		
		case 184:
			iVar0 = 13;
			break;
		
		case 186:
			iVar0 = 15;
			break;
		
		case 188:
			iVar0 = 17;
			break;
	}
	return func_634(iVar0);
}

bool func_634(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_593())
	{
		return 0;
	}
	iVar0 = func_635(iParam0);
	iVar1 = iParam0;
	return unk_0xE2D0C323A1AE5D85(iVar0, func_587(iVar1));
}

int func_635(var uParam0)
{
	int iVar0;
	
	iVar0 = func_21(func_636(uParam0), -1, 0);
	return iVar0;
}

int func_636(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_592(iVar0);
	if ((func_591() == 0 || func_590() == 0) || (func_591() == 999 && func_590() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 739;
				break;
			
			case 1:
				return 740;
				break;
		}
	}
	return 12597;
}

int func_637()
{
	var uVar0;
	
	if (unk_0xAF5DBE95205A49D1())
	{
		if (unk_0x5B66E9FB7530BB95())
		{
			if (unk_0x2F04A4784A70593C())
			{
				unk_0x61481F9FBB1C7EDD(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xCED9E32812D6C7C7(&uVar0, 2);
				unk_0xCED9E32812D6C7C7(&uVar0, 4);
				unk_0xCED9E32812D6C7C7(&uVar0, 6);
				unk_0xCED9E32812D6C7C7(&Global_25, 2);
				unk_0xCED9E32812D6C7C7(&Global_25, 4);
				unk_0xCED9E32812D6C7C7(&Global_25, 6);
				unk_0x076A5661EF5ABEE4(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0xB8F4926B803BFD19())
				{
					iVar0 = unk_0x5D851A9195129CE9(866);
					unk_0xCED9E32812D6C7C7(&iVar0, 0);
					unk_0x212EDDD868F364B5(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_151754 == 2)
	{
		return 1;
	}
	else if (Global_151754 == 3)
	{
		return 0;
	}
	if (unk_0xB8F4926B803BFD19())
	{
		if (unk_0xE2D0C323A1AE5D85(unk_0x5D851A9195129CE9(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_638(int iParam0)
{
	switch (iParam0)
	{
		case joaat("vetir"):
			return 0;
			break;
		
		case joaat("winky"):
			return 1;
			break;
		
		case joaat("longfin"):
			return 2;
			break;
		
		case joaat("annihilator2"):
			return 3;
			break;
		
		case joaat("alkonost"):
			return 4;
			break;
		
		case joaat("patrolboat"):
			return 5;
			break;
		
		case joaat("brioso2"):
			return 6;
			break;
		
		case joaat("weevil"):
			return 7;
			break;
		
		case joaat("italirsx"):
			return 8;
			break;
	}
	return -1;
}

int func_639(int iParam0)
{
	switch (iParam0)
	{
		case joaat("penumbra2"):
			return 0;
			break;
		
		case joaat("seminole2"):
			return 1;
			break;
		
		case joaat("landstalker2"):
			return 2;
			break;
		
		case joaat("wolfsbane"):
			return 3;
			break;
		
		case joaat("club"):
			return 4;
			break;
		
		case joaat("dukes3"):
			return 5;
			break;
	}
	return -1;
}

int func_640(int iParam0)
{
	switch (iParam0)
	{
		case joaat("firetruk"):
			return 0;
			break;
		
		case joaat("burrito2"):
			return 1;
			break;
		
		case joaat("boxville"):
			return 2;
			break;
		
		case joaat("stockade"):
			return 3;
			break;
		
		case joaat("asbo"):
			return 4;
			break;
		
		case joaat("kanjo"):
			return 5;
			break;
		
		case joaat("everon"):
			return 6;
			break;
		
		case joaat("retinue2"):
			return 7;
			break;
		
		case joaat("yosemite2"):
			return 8;
			break;
		
		case joaat("sugoi"):
			return 9;
			break;
		
		case joaat("sultan2"):
			return 10;
			break;
		
		case joaat("outlaw"):
			return 11;
			break;
		
		case joaat("vagrant"):
			return 12;
			break;
		
		case joaat("komoda"):
			return 13;
			break;
		
		case joaat("stryder"):
			return 14;
			break;
		
		case joaat("furia"):
			return 15;
			break;
		
		case joaat("zhaba"):
			return 16;
			break;
		
		case joaat("jugular"):
			return 17;
			break;
		
		case joaat("sentinel3"):
			return 18;
			break;
		
		case joaat("gauntlet3"):
			return 19;
			break;
		
		case joaat("ellie"):
			return 20;
			break;
		
		case joaat("defiler"):
			return 21;
			break;
		
		case joaat("manchez"):
			return 22;
			break;
	}
	return -1;
}

int func_641(int iParam0)
{
	if (((((((((((((((iParam0 == 171 || iParam0 == 172) || iParam0 == 173) || iParam0 == 175) || iParam0 == 177) || iParam0 == 178) || iParam0 == 179) || iParam0 == 180) || iParam0 == 181) || iParam0 == 182) || iParam0 == 183) || iParam0 == 184) || iParam0 == 185) || iParam0 == 186) || iParam0 == 187) || iParam0 == 188)
	{
		return 1;
	}
	return 0;
}

int func_642(int iParam0)
{
	if ((((((iParam0 == 199 || iParam0 == 200) || iParam0 == 201) || iParam0 == 202) || iParam0 == 203) || iParam0 == 204) || iParam0 == 205)
	{
		return 1;
	}
	return 0;
}

int func_643(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("ztype");
		
		case 1:
			return joaat("stinger");
		
		case 2:
			return joaat("jb700");
		
		case 3:
			return joaat("cheetah");
		
		case 4:
			return joaat("entityxf");
		
		case 5:
			return joaat("adder");
		
		case 6:
			return joaat("monroe");
		
		case 7:
			return joaat("cogcabrio");
		
		case 10:
			return joaat("shamal");
		
		case 11:
			return joaat("stunt");
		
		case 12:
			return joaat("cuban800");
		
		case 13:
			return joaat("duster");
		
		case 14:
			return joaat("luxor");
		
		case 15:
			return joaat("frogger");
		
		case 16:
			return joaat("maverick");
		
		case 17:
			return joaat("rhino");
		
		case 18:
			return joaat("titan");
		
		case 19:
			return joaat("cargobob");
		
		case 20:
			return joaat("buzzard");
		
		case 21:
			return joaat("crusader");
		
		case 22:
			return joaat("barracks");
		
		case 24:
			return joaat("marquis");
		
		case 25:
			return joaat("jetmax");
		
		case 27:
			return joaat("squalo");
		
		case 29:
			return joaat("tropic");
		
		case 30:
			return joaat("seashark");
		
		case 31:
			return joaat("submersible");
		
		case 32:
			return joaat("suntrap");
		
		case 258:
			return joaat("tug");
		
		case 33:
			return joaat("bmx");
		
		case 34:
			return joaat("scorcher");
		
		case 35:
			return joaat("tribike");
		
		case 36:
			return joaat("tribike2");
		
		case 37:
			return joaat("tribike3");
		
		case 38:
			return joaat("cruiser");
		
		case 39:
			return joaat("schwarzer");
		
		case 40:
			return joaat("zion");
		
		case 41:
			return joaat("gauntlet");
		
		case 42:
			return joaat("vigero");
		
		case 43:
			return joaat("issi2");
		
		case 44:
			return joaat("infernus");
		
		case 45:
			return joaat("surano");
		
		case 46:
			return joaat("vacca");
		
		case 47:
			return joaat("ninef");
		
		case 48:
			return joaat("comet2");
		
		case 49:
			return joaat("banshee");
		
		case 50:
			return joaat("feltzer2");
		
		case 51:
			return joaat("bfinjection");
		
		case 52:
			return joaat("sandking");
		
		case 53:
			return joaat("fugitive");
		
		case 54:
			return joaat("dilettante");
		
		case 55:
			return joaat("superd");
		
		case 56:
			return joaat("exemplar");
		
		case 57:
			return joaat("baller2");
		
		case 58:
			return joaat("cavalcade");
		
		case 59:
			return joaat("rocoto");
		
		case 60:
			return joaat("felon");
		
		case 61:
			return joaat("oracle2");
		
		case 62:
			return joaat("bati");
		
		case 63:
			return joaat("akuma");
		
		case 64:
			return joaat("ruffian");
		
		case 65:
			return joaat("vader");
		
		case 66:
			return joaat("blazer");
		
		case 67:
			return joaat("pcj");
		
		case 68:
			return joaat("sanchez");
		
		case 69:
			return joaat("faggio2");
		
		case 70:
			return joaat("bullet");
		
		case 71:
			return joaat("carbonizzare");
		
		case 72:
			return joaat("coquette");
		
		case 73:
			return joaat("ninef2");
		
		case 74:
			return joaat("rapidgt");
		
		case 75:
			return joaat("rapidgt2");
		
		case 76:
			return joaat("stingergt");
		
		case 77:
			return joaat("voltic");
		
		case 78:
			return joaat("annihilator");
		
		case joaat("mpsv_lp0_31"):
			return joaat("mammatus");
		
		case 80:
			return joaat("velum");
		
		case 81:
			return joaat("dump");
		
		case 82:
			return joaat("airbus");
		
		case 83:
			return joaat("bus");
		
		case 84:
			return joaat("coach");
		
		case 85:
			return joaat("journey");
		
		case 86:
			return joaat("mule");
		
		case 87:
			return joaat("rentalbus");
		
		case 88:
			return joaat("stretch");
		
		case 89:
			return joaat("bison");
		
		case 90:
			return joaat("double");
		
		case 91:
			return joaat("felon2");
		
		case 92:
			return joaat("hexer");
		
		case 93:
			return joaat("zion2");
		
		case 94:
			return joaat("bati2");
		
		case 95:
			return joaat("elegy2");
		
		case 96:
			return joaat("khamelion");
		
		case 97:
			return joaat("hotknife");
		
		case 98:
			return joaat("carbonrs");
		
		default:
	}
	switch (iParam0)
	{
		case 99:
			return joaat("bifta");
		
		case 100:
			return joaat("kalahari");
		
		case 101:
			return joaat("paradise");
		
		case 102:
			return joaat("speeder");
		
		case 103:
			return joaat("bodhi2");
		
		case 104:
			return joaat("dune");
		
		case 105:
			return joaat("rebel");
		
		case 106:
			return joaat("sadler");
		
		case 107:
			return joaat("sanchez2");
		
		case 108:
			return joaat("sandking2");
		
		case 109:
			return joaat("btype");
		
		case 111:
			return joaat("jester");
		
		case 114:
			return joaat("massacro");
		
		case 112:
			return joaat("turismor");
		
		case 115:
			return joaat("zentorno");
		
		case 116:
			return joaat("huntley");
		
		case 110:
			return joaat("alpha");
		
		case 113:
			return joaat("vestra");
		
		case 117:
			return joaat("coquette");
		
		case 118:
			return joaat("banshee");
		
		case 119:
			return joaat("stinger");
		
		case 120:
			return joaat("voltic");
		
		case 121:
			return joaat("thrust");
		
		case 128:
			return joaat("asea");
		
		case 129:
			return joaat("asterope");
		
		case 130:
			return joaat("bobcatxl");
		
		case 131:
			return joaat("cavalcade2");
		
		case 132:
			return joaat("granger");
		
		case 133:
			return joaat("ingot");
		
		case 134:
			return joaat("intruder");
		
		case 135:
			return joaat("minivan");
		
		case 136:
			return joaat("premier");
		
		case 137:
			return joaat("radi");
		
		case 138:
			return joaat("rancherxl");
		
		case 139:
			return joaat("ratloader");
		
		case 140:
			return joaat("stanier");
		
		case 141:
			return joaat("stratum");
		
		case 142:
			return joaat("washington");
		
		case 122:
			return joaat("dominator");
		
		case 123:
			return joaat("f620");
		
		case 124:
			return joaat("fusilade");
		
		case 125:
			return joaat("penumbra");
		
		case 126:
			return joaat("sentinel");
		
		case 127:
			return joaat("sentinel2");
		
		default:
	}
	switch (iParam0)
	{
		case 143:
			return joaat("blade");
		
		case 144:
			return joaat("warrener");
		
		case 145:
			return joaat("glendale");
		
		case 146:
			return joaat("rhapsody");
		
		case 147:
			return joaat("panto");
		
		case 148:
			return joaat("dubsta3");
		
		case 149:
			return joaat("pigalle");
		
		case 150:
			return joaat("picador");
		
		case 151:
			return joaat("regina");
		
		case 152:
			return joaat("surfer");
		
		case 153:
			return joaat("youga");
		
		case 154:
			return joaat("blazer3");
		
		case 155:
			return joaat("rebel2");
		
		case 156:
			return joaat("primo");
		
		case 157:
			return joaat("buffalo");
		
		case 158:
			return joaat("buffalo2");
		
		case 159:
			return joaat("tailgater");
		
		case 160:
			return joaat("monster");
		
		case 161:
			return joaat("sovereign");
		
		case 162:
			return joaat("miljet");
		
		case 163:
			return joaat("besra");
		
		case 164:
			return joaat("swift");
		
		case 165:
			return joaat("coquette2");
		
		case 166:
			return joaat("coquette2");
		
		case 167:
			return joaat("innovation");
		
		case 168:
			return joaat("hakuchou");
		
		case 169:
			return joaat("furoregt");
		
		case 170:
			return joaat("kalahari");
		
		case 187:
			return joaat("valkyrie");
		
		case 177:
			return joaat("hydra");
		
		case 185:
			return joaat("savage");
		
		case 174:
			return joaat("enduro");
		
		case 171:
			return joaat("boxville4");
		
		case 172:
			return joaat("casco");
		
		case 173:
			return joaat("dinghy3");
		
		case 175:
			return joaat("gburrito2");
		
		case 176:
			return joaat("guardian");
		
		case 178:
			return joaat("insurgent");
		
		case 179:
			return joaat("insurgent2");
		
		case 183:
			return joaat("mule3");
		
		case 180:
			return joaat("kuruma");
		
		case 181:
			return joaat("kuruma2");
		
		case 182:
			return joaat("lectro");
		
		case 184:
			return joaat("pbus");
		
		case 186:
			return joaat("technical");
		
		case 188:
			return joaat("velum2");
		
		case 189:
			return joaat("gresley");
		
		case 190:
			return joaat("jackal");
		
		case 191:
			return joaat("landstalker");
		
		case 192:
			return joaat("mesa3");
		
		case 193:
			return joaat("nemesis");
		
		case 194:
			return joaat("oracle");
		
		case 195:
			return joaat("rumpo");
		
		case 196:
			return joaat("schafter2");
		
		case 197:
			return joaat("seminole");
		
		case 198:
			return joaat("surge");
		
		case 199:
			return joaat("dodo");
		
		case 200:
			return joaat("marshall");
		
		case 201:
			return joaat("submersible2");
		
		case 202:
			return joaat("blista2");
		
		case 203:
			return joaat("stalion");
		
		case 204:
			return joaat("dukes");
		
		case 205:
			return joaat("dukes2");
		
		case 206:
			return joaat("stalion2");
		
		case 207:
			return joaat("dominator2");
		
		case 208:
			return joaat("gauntlet2");
		
		case 209:
			return joaat("buffalo3");
		
		case 210:
			return joaat("slamvan");
		
		case 211:
			return joaat("ratloader2");
		
		case 212:
			return joaat("jester2");
		
		case 213:
			return joaat("massacro2");
		
		case 214:
			return joaat("feltzer3");
		
		case 215:
			return joaat("luxor2");
		
		case 216:
			return joaat("osiris");
		
		case 217:
			return joaat("swift2");
		
		case 218:
			return joaat("virgo");
		
		case 219:
			return joaat("windsor");
		
		case 220:
			return joaat("brawler");
		
		case 221:
			return joaat("chino");
		
		case 222:
			return joaat("coquette3");
		
		case 223:
			return joaat("t20");
		
		case 224:
			return joaat("toro");
		
		case 225:
			return joaat("vindicator");
		
		case 229:
			return joaat("primo");
		
		case 228:
			return joaat("moonbeam");
		
		case 227:
			return joaat("faction");
		
		case 226:
			return joaat("buccaneer");
		
		case 230:
			return joaat("voodoo2");
		
		case 263:
			if (iParam1 == 0)
			{
				return joaat("xls");
			}
			else if (iParam1 == 1)
			{
				return joaat("xls2");
			}
			else
			{
				return joaat("xls");
			}
			break;
		
		case 264:
			return joaat("seven70");
		
		case 259:
			return joaat("windsor2");
		
		case 260:
			return joaat("prototipo");
		
		case 261:
			return joaat("fmj");
		
		case 262:
			return joaat("bestiagts");
		
		case 265:
			return joaat("pfister811");
		
		case 266:
			return joaat("reaper");
		
		case 231:
			return joaat("btype2");
		
		case 232:
			return joaat("lurcher");
		
		case 233:
			if (iParam1 == 0)
			{
				return joaat("baller3");
			}
			else if (iParam1 == 1)
			{
				return joaat("baller5");
			}
			else
			{
				return joaat("baller3");
			}
			break;
		
		case 234:
			if (iParam1 == 0)
			{
				return joaat("baller4");
			}
			else if (iParam1 == 1)
			{
				return joaat("baller6");
			}
			else
			{
				return joaat("baller4");
			}
			break;
		
		case 235:
			if (iParam1 == 0)
			{
				return joaat("cog55");
			}
			else if (iParam1 == 1)
			{
				return joaat("cog552");
			}
			else
			{
				return joaat("cog55");
			}
			break;
		
		case 236:
			if (iParam1 == 0)
			{
				return joaat("cognoscenti");
			}
			else if (iParam1 == 1)
			{
				return joaat("cognoscenti2");
			}
			else
			{
				return joaat("cognoscenti");
			}
			break;
		
		case 237:
			return joaat("limo2");
		
		case 238:
			return joaat("mamba");
		
		case 239:
			return joaat("nightshade");
		
		case 240:
			if (iParam1 == 0)
			{
				return joaat("schafter3");
			}
			else if (iParam1 == 1)
			{
				return joaat("schafter5");
			}
			else
			{
				return joaat("schafter3");
			}
			break;
		
		case 241:
			if (iParam1 == 0)
			{
				return joaat("schafter4");
			}
			else if (iParam1 == 1)
			{
				return joaat("schafter6");
			}
			else
			{
				return joaat("schafter4");
			}
			break;
		
		case 242:
			return joaat("verlierer2");
		
		case 243:
			return joaat("supervolito");
		
		case 244:
			return joaat("supervolito2");
		
		case 245:
			return Global_74982;
		
		case 251:
			return joaat("virgo3");
		
		case 250:
			return joaat("tornado");
		
		case 249:
			return joaat("sabregt");
		
		case 252:
			return joaat("faction");
		
		case 246:
			return joaat("tampa");
		
		case 247:
			return joaat("sultan");
		
		case 49:
			return joaat("banshee");
		
		case 248:
			return joaat("btype3");
		
		case 253:
			return joaat("volatus");
		
		case 254:
			return joaat("cargobob2");
		
		case 255:
			return joaat("rumpo3");
		
		case 256:
			return joaat("brickade");
		
		case 257:
			return joaat("nimbus");
		
		case 267:
			return joaat("le7b");
		
		case 268:
			return joaat("omnis");
		
		case 269:
			return joaat("tropos");
		
		case 270:
			return joaat("brioso");
		
		case 271:
			return joaat("trophytruck");
		
		case 272:
			return joaat("trophytruck2");
		
		case 273:
			return joaat("contender");
		
		case 274:
			return joaat("cliffhanger");
		
		case 275:
			return joaat("bf400");
		
		case 279:
			return joaat("tyrus");
		
		case 280:
			return joaat("lynx");
		
		case 281:
			return joaat("sheava");
		
		case 276:
			return joaat("rallytruck");
		
		case 277:
			return joaat("tampa2");
		
		case 278:
			return joaat("gargoyle");
		
		case 282:
			return joaat("bagger");
		
		case 283:
			return joaat("esskey");
		
		case 284:
			return joaat("nightblade");
		
		case 285:
			return joaat("defiler");
		
		case 286:
			return joaat("avarus");
		
		case 287:
			return joaat("zombiea");
		
		case 288:
			return joaat("zombieb");
		
		case 289:
			return joaat("chimera");
		
		case 290:
			return joaat("daemon2");
		
		case 291:
			return joaat("ratbike");
		
		case 292:
			return joaat("shotaro");
		
		case 293:
			return joaat("raptor");
		
		case 294:
			return joaat("hakuchou2");
		
		case 296:
			return joaat("blazer4");
		
		case 297:
			return joaat("sanctus");
		
		case 295:
			return joaat("vortex");
		
		case 298:
			return joaat("manchez");
		
		case 299:
			return joaat("tornado6");
		
		case 300:
			return joaat("youga2");
		
		case 301:
			return joaat("wolfsbane");
		
		case 302:
			return joaat("faggio3");
		
		case 303:
			return joaat("faggio");
		
		case 304:
			return joaat("dune5");
		
		case 305:
			return joaat("phantom2");
		
		case 306:
			return joaat("technical2");
		
		case 307:
			return joaat("blazer5");
		
		case 308:
			return joaat("boxville5");
		
		case 309:
			return joaat("wastelander");
		
		case 310:
			return joaat("ruiner2");
		
		case 311:
			return joaat("voltic2");
		
		case 312:
			return joaat("penetrator");
		
		case 313:
			return joaat("tempesta");
		
		case 314:
			return joaat("italigtb");
		
		case 315:
			return joaat("nero");
		
		case 316:
			return joaat("diablous");
		
		case 317:
			return joaat("fcr");
		
		case 318:
			return joaat("specter");
		
		case 319:
			return joaat("gp1");
		
		case 320:
			return joaat("infernus2");
		
		case 321:
			return joaat("ruston");
		
		case 322:
			return joaat("turismo2");
	}
	switch (iParam0)
	{
		case 323:
			return Global_74983;
		
		case 324:
			return Global_74984;
		
		case 325:
			return joaat("cheetah2");
		
		case 326:
			return joaat("torero");
		
		case 327:
			return joaat("vagner");
		
		case 328:
			return joaat("xa21");
		
		case 329:
			return joaat("apc");
		
		case 330:
			return joaat("dune3");
		
		case 331:
			return joaat("halftrack");
		
		case 332:
			return joaat("oppressor");
		
		case 333:
			return joaat("tampa3");
		
		case 334:
			return joaat("trailersmall2");
		
		case 335:
			return joaat("ardent");
		
		case 336:
			return joaat("nightshark");
		
		case 337:
			return joaat("lazer");
		
		case 338:
			return joaat("microlight");
		
		case 339:
			return joaat("mogul");
		
		case 340:
			return joaat("rogue");
		
		case 341:
			return joaat("starling");
		
		case 342:
			return joaat("seabreeze");
		
		case 343:
			return joaat("tula");
		
		case 344:
			return joaat("pyro");
		
		case 345:
			return joaat("molotok");
		
		case 346:
			return joaat("nokota");
		
		case 347:
			return joaat("bombushka");
		
		case 348:
			return joaat("hunter");
		
		case 349:
			return joaat("havok");
		
		case 350:
			return joaat("howard");
		
		case 351:
			return joaat("alphaz1");
		
		case 352:
			return joaat("cyclone");
		
		case 353:
			return joaat("visione");
		
		case 354:
			return joaat("retinue");
		
		case 355:
			return joaat("rapidgt3");
		
		case 356:
			return joaat("vigilante");
		
		case 357:
			return Global_74985;
		
		case 358:
			return joaat("deluxo");
		
		case 359:
			return joaat("stromberg");
		
		case 360:
			return joaat("riot2");
		
		case 361:
			return joaat("chernobog");
		
		case 362:
			return joaat("khanjali");
		
		case 363:
			return joaat("akula");
		
		case 364:
			return joaat("thruster");
		
		case 365:
			return joaat("barrage");
		
		case 366:
			return joaat("volatol");
		
		case 367:
			return joaat("comet4");
		
		case 368:
			return joaat("neon");
		
		case 369:
			return joaat("streiter");
		
		case 370:
			return joaat("sentinel3");
		
		case 371:
			return joaat("yosemite");
		
		case 372:
			return joaat("sc1");
		
		case 373:
			return joaat("autarch");
		
		case 374:
			return joaat("gt500");
		
		case 375:
			return joaat("hustler");
		
		case 376:
			return joaat("revolter");
		
		case 377:
			return joaat("pariah");
		
		case 378:
			return joaat("raiden");
		
		case 379:
			return joaat("savestra");
		
		case 380:
			return joaat("riata");
		
		case 381:
			return joaat("hermes");
		
		case 382:
			return joaat("comet5");
		
		case 383:
			return joaat("z190");
		
		case 384:
			return joaat("viseris");
		
		case 385:
			return joaat("kamacho");
		
		case 386:
			return joaat("gb200");
		
		case 387:
			return joaat("fagaloa");
		
		case 388:
			return joaat("ellie");
		
		case 389:
			return joaat("issi3");
		
		case 390:
			return joaat("michelli");
		
		case 391:
			return joaat("flashgt");
		
		case 392:
			return joaat("hotring");
		
		case 393:
			return joaat("tezeract");
		
		case 394:
			return joaat("tyrant");
		
		case 395:
			return joaat("dominator3");
		
		case 396:
			return joaat("taipan");
		
		case 397:
			return joaat("entity2");
		
		case 398:
			return joaat("jester3");
		
		case 399:
			return joaat("cheburek");
		
		case 400:
			return joaat("caracara");
		
		case 401:
			return joaat("seasparrow");
		
		case 402:
			return Global_74986;
		
		case 403:
			return joaat("mule4");
		
		case 404:
			return joaat("pounder2");
		
		case 405:
			return joaat("swinger");
		
		case 406:
			return joaat("menacer");
		
		case 407:
			return joaat("scramjet");
		
		case 408:
			return joaat("strikeforce");
		
		case 409:
			return joaat("oppressor2");
		
		case 410:
			return joaat("patriot2");
		
		case 411:
			return joaat("stafford");
		
		case 412:
			return joaat("freecrawler");
		
		case 415:
			return joaat("futo");
		
		case 416:
			return joaat("ruiner");
		
		case 417:
			return joaat("romero");
		
		case 418:
			return joaat("prairie");
		
		case 419:
			return joaat("baller");
		
		case 420:
			return joaat("serrano");
		
		case 421:
			return joaat("bjxl");
		
		case 422:
			return joaat("habanero");
		
		case 423:
			return joaat("fq2");
		
		case 424:
			return joaat("patriot");
		
		case 413:
			return joaat("blimp3");
		
		case 414:
			return joaat("pbus2");
		
		case 425:
			return joaat("cerberus");
		
		case 426:
			return joaat("cerberus2");
		
		case 427:
			return joaat("cerberus3");
		
		case 428:
			return joaat("brutus");
		
		case 429:
			return joaat("brutus2");
		
		case 430:
			return joaat("brutus3");
		
		case 431:
			return joaat("scarab");
		
		case 432:
			return joaat("scarab2");
		
		case 433:
			return joaat("scarab3");
		
		case 434:
			return joaat("imperator");
		
		case 435:
			return joaat("imperator2");
		
		case 436:
			return joaat("imperator3");
		
		case 437:
			return joaat("zr380");
		
		case 438:
			return joaat("zr3802");
		
		case 439:
			return joaat("zr3803");
		
		case 440:
			return joaat("impaler");
		
		case 450:
			return joaat("taxi");
		
		case 451:
			return joaat("bulldozer");
		
		case 452:
			return joaat("speedo2");
		
		case 453:
			return joaat("trash2");
		
		case 454:
			return joaat("barracks2");
		
		case 455:
			return joaat("mixer");
		
		case 456:
			return joaat("dune2");
		
		case 457:
			return joaat("tractor");
		
		case 458:
			return joaat("blista3");
		
		case 441:
			return joaat("vamos");
		
		case 442:
			return joaat("tulip");
		
		case 443:
			return joaat("deveste");
		
		case 444:
			return joaat("schlagen");
		
		case 445:
			return joaat("toros");
		
		case 446:
			return joaat("deviant");
		
		case 447:
			return joaat("clique");
		
		case 448:
			return joaat("italigto");
		
		case 449:
			return joaat("rcbandito");
		
		case 459:
			return joaat("thrax");
		
		case 460:
			return joaat("drafter");
		
		case 461:
			return joaat("locust");
		
		case 462:
			return joaat("novak");
		
		case 463:
			return joaat("zorrusso");
		
		case 464:
			return joaat("gauntlet3");
		
		case 465:
			return joaat("issi7");
		
		case 466:
			return joaat("zion3");
		
		case 467:
			return joaat("nebula");
		
		case 468:
			return joaat("hellion");
		
		case 469:
			return joaat("dynasty");
		
		case 470:
			return joaat("rrocket");
		
		case 471:
			return joaat("peyote2");
		
		case 472:
			return joaat("gauntlet4");
		
		case 473:
			return joaat("caracara2");
		
		case 474:
			return joaat("jugular");
		
		case 475:
			return joaat("s80");
		
		case 476:
			return joaat("krieger");
		
		case 477:
			return joaat("emerus");
		
		case 478:
			return joaat("neo");
		
		case 479:
			return joaat("paragon");
		
		case 480:
			return joaat("firetruk");
		
		case 481:
			return joaat("burrito2");
		
		case 482:
			return joaat("boxville");
		
		case 483:
			return joaat("stockade");
		
		case 484:
			return joaat("lguard");
		
		case 485:
			return joaat("blazer2");
		
		case 486:
			return joaat("zhaba");
		
		case 487:
			return joaat("minitank");
		
		case 488:
			return joaat("jb7002");
		
		case 489:
			return joaat("stryder");
		
		case 490:
			return joaat("vstr");
		
		case 491:
			return joaat("formula");
		
		case 492:
			return joaat("imorgon");
		
		case 493:
			return joaat("formula2");
		
		case 494:
			return joaat("furia");
		
		case 495:
			return joaat("rebla");
		
		case 496:
			return joaat("vagrant");
		
		case 497:
			return joaat("retinue2");
		
		case 498:
			return joaat("yosemite2");
		
		case 499:
			return joaat("komoda");
		
		case 500:
			return joaat("sultan2");
		
		case 501:
			return joaat("sugoi");
		
		case 502:
			return joaat("everon");
		
		case 503:
			return joaat("asbo");
		
		case 504:
			return joaat("kanjo");
		
		case 505:
			return joaat("outlaw");
		
		default:
	}
	switch (iParam0)
	{
		case 506:
			return joaat("club");
		
		case 507:
			return joaat("dukes3");
		
		case 508:
			return joaat("yosemite3");
		
		case 509:
			return joaat("penumbra2");
		
		case 510:
			return joaat("landstalker2");
		
		case 511:
			return joaat("seminole2");
		
		case 512:
			return joaat("tigon");
		
		case 513:
			return joaat("openwheel1");
		
		case 514:
			return joaat("openwheel2");
		
		case 515:
			return joaat("coquette4");
		
		case 516:
			return joaat("manana");
		
		case 517:
			return joaat("peyote");
		
		case 518:
			return func_394();
		
		case 519:
			return joaat("italirsx");
		
		case 520:
			return joaat("slamtruck");
		
		case 521:
			return joaat("brioso2");
		
		case 522:
			return joaat("weevil");
		
		case 523:
			return joaat("alkonost");
		
		case 524:
			return joaat("annihilator2");
		
		case 525:
			return joaat("dinghy5");
		
		case 526:
			return joaat("manchez2");
		
		case 527:
			return joaat("patrolboat");
		
		case 528:
			return joaat("squaddie");
		
		case 529:
			return joaat("toreador");
		
		case 530:
			return joaat("verus");
		
		case 531:
			return joaat("vetir");
		
		case 532:
			return joaat("winky");
		
		case 533:
			return joaat("longfin");
		
		case 534:
			return joaat("veto");
		
		case 535:
			return joaat("veto2");
		
		case 543:
			return joaat("zr350");
		
		case 537:
			return joaat("comet6");
		
		case 540:
			return joaat("jester4");
		
		case 542:
			return joaat("vectre");
		
		case 538:
			return joaat("cypher");
		
		case 548:
			return joaat("tailgater2");
		
		case 550:
			return joaat("euros");
		
		case 551:
			return joaat("growler");
		
		case 536:
			return joaat("calico");
		
		case 541:
			return joaat("remus");
		
		case 539:
			return joaat("dominator7");
		
		case 546:
			return joaat("futo2");
		
		case 545:
			return joaat("rt3000");
		
		case 544:
			return joaat("warrener2");
		
		case 547:
			return joaat("sultan3");
		
		case 549:
			return joaat("dominator8");
		
		case 552:
			return joaat("previon");
		
		case 554:
			return 1141395928;
		
		case 555:
			return 1353120668;
		
		case 556:
			return 1993851908;
		
		case 557:
			return 359875117;
		
		case 558:
			return -1527436269;
		
		case 559:
			return 461465043;
		
		case 560:
			return 629969764;
		
		case 561:
			return 1532171089;
		
		case 562:
			return 655665811;
		
		case 563:
			return -915234475;
		
		case 564:
			return -1444114309;
		
		case 565:
			return -619930876;
		
		case 566:
			return -261346873;
		
		case 567:
			return 662793086;
		
		case 568:
			return -670086588;
		
		case 553:
			return joaat("supervolito2");
		
		default:
	}
	return 0;
}

char* func_644(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return "";
	}
	if (iParam0 == 8)
	{
		return "";
	}
	iVar0 = func_643(iParam0, -1);
	if (iVar0 == 0)
	{
		return "";
	}
	switch (iParam0)
	{
		case 31:
			return "SUBMERSIBLE";
		
		case 68:
			return "SANCHEZ";
		
		case 105:
			return "REBEL";
		
		case 107:
			return "SANCHEZ2";
		
		case 117:
			return "COQUETTE_TLESS";
		
		case 118:
			return "BANSHEE_TLESS";
		
		case 119:
			return "STINGER_TLESS";
		
		case 120:
			return "VOLTIC_HTOP";
		
		case 154:
			return "BLAZER3";
		
		case 155:
			return "REBEL2";
		
		case 158:
			return "BUFFALO2";
		
		case 159:
			return "TAILGATER";
		
		case 166:
			return "COQUETTE2_TLESS";
		
		case 170:
			return "KALAHARI_TLESS";
		
		case 171:
			return "BOXVILLE4";
		
		case 173:
			return "DINGHY3";
		
		case 183:
			return "MULE3";
		
		case 191:
			return "LANDSTALKER";
		
		case 192:
			return "MESA3";
		
		case 194:
			return "ORACLE1";
		
		case 196:
			return "SCHAFTER2";
		
		case 207:
			return "DOMINATOR2";
		
		case 245:
			return "BIG_YACHT";
		
		case 254:
			return "CARGOBOB2";
		
		case 323:
			return "BIG_TRUCK";
		
		case 324:
			return "BALLISTIC";
		
		case 357:
			return "BIG_PLANE";
		
		case 402:
			return "HACKER_TRUCK";
		
		case 510:
			return "LANDSTLKR2";
		
		default:
	}
	return unk_0x01E2429B82E280E6(iVar0);
}

void func_645()
{
	if (!Global_2810287.f_5193.f_338)
	{
		Global_2810287.f_5193.f_338 = 1;
	}
}

void func_646(int iParam0)
{
	if (iParam0 != -1)
	{
		unk_0xCED9E32812D6C7C7(&(Global_2359296[func_184() /*5559*/].f_1[(iParam0 / 32)]), (iParam0 % 32));
		Global_2359296[func_184() /*5559*/] = unk_0x48352343BC5A41AE();
		func_648();
		func_647();
	}
}

void func_647()
{
}

void func_648()
{
	func_64(1725, Global_2359296[func_184() /*5559*/], -1, 1, 0);
	func_64(1726, Global_2359296[func_184() /*5559*/].f_1[0], -1, 1, 0);
	func_64(1727, Global_2359296[func_184() /*5559*/].f_1[1], -1, 1, 0);
	func_64(1728, Global_2359296[func_184() /*5559*/].f_1[2], -1, 1, 0);
	func_64(1729, Global_2359296[func_184() /*5559*/].f_1[3], -1, 1, 0);
	func_64(1730, Global_2359296[func_184() /*5559*/].f_1[4], -1, 1, 0);
}

int func_649(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_111())
	{
		if (iParam0 == func_652(245, 0) && func_21(3170, -1, 0) != 0)
		{
			return 1;
		}
		if (iParam0 == func_652(323, 0) && func_21(5395, -1, 0) != 0)
		{
			return 1;
		}
		if (iParam0 == func_652(324, 0) && func_501(9461, -1))
		{
			return 1;
		}
		if (iParam0 == func_652(357, 0) && func_21(6158, -1, 0) != 0)
		{
			return 1;
		}
		if (iParam0 == func_652(402, 0) && func_21(7209, -1, 0) != 0)
		{
			return 1;
		}
		if (iParam0 == func_652(518, 0) && func_21(9516, -1, 0) != 0)
		{
			return 1;
		}
		iVar0 = 0;
		while (iVar0 <= 7)
		{
			iVar1 = -1;
			switch (iVar0)
			{
				case 0:
					iVar1 = 450;
					break;
				
				case 1:
					iVar1 = 451;
					break;
				
				case 2:
					iVar1 = 452;
					break;
				
				case 3:
					iVar1 = 453;
					break;
				
				case 4:
					iVar1 = 454;
					break;
				
				case 5:
					iVar1 = 455;
					break;
				
				case 6:
					iVar1 = 456;
					break;
				
				case 7:
					iVar1 = 457;
					break;
			}
			if (iParam0 == func_652(iVar1, 0) && func_650(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	if (iParam0 != -1)
	{
		if (unk_0xE2D0C323A1AE5D85(Global_2359296[func_184() /*5559*/].f_1[(iParam0 / 32)], (iParam0 % 32)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_650(int iParam0)
{
	return func_501(func_651(iParam0), -1);
}

int func_651(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return 24963;
			break;
		
		case 9:
			return 24964;
			break;
		
		case 10:
			return 24966;
			break;
		
		case 11:
			return 24965;
			break;
		
		case 12:
			return 24968;
			break;
		
		case 13:
			return 25101;
			break;
		
		case 14:
			return 24967;
			break;
		
		case 15:
			return 25105;
			break;
		
		case 16:
			return 25106;
			break;
		
		case 20:
			return 25102;
			break;
		
		case 21:
			return 25103;
			break;
		
		case 22:
			return 25104;
			break;
		
		case 102:
			return 24969;
			break;
		
		case 17:
			return 25107;
			break;
		
		case 18:
			return 25108;
			break;
		
		case 19:
			return 25109;
			break;
		
		case 103:
			return 24972;
			break;
		
		case 104:
			return 24973;
			break;
		
		case 105:
			return 24974;
			break;
		
		case 106:
			return 24975;
			break;
		
		case 107:
			return 24976;
			break;
		
		case 108:
			return 24978;
			break;
		
		case 109:
			return 24980;
			break;
		
		case 110:
			return 24981;
			break;
		
		case 111:
			return 24982;
			break;
		
		case 112:
			return 24983;
			break;
		
		case 113:
			return 24984;
			break;
		
		case 114:
			return 24985;
			break;
		
		case 115:
			return 24986;
			break;
		
		case 116:
			return 24987;
			break;
		
		case 117:
			return 24988;
			break;
		
		case 118:
			return 24989;
			break;
		
		case 119:
			return 24990;
			break;
		
		case 120:
			return 24991;
			break;
		
		case 0:
			return 24992;
			break;
		
		case 1:
			return 24993;
			break;
		
		case 2:
			return 24994;
			break;
		
		case 3:
			return 24995;
			break;
		
		case 4:
			return 24996;
			break;
		
		case 5:
			return 24997;
			break;
		
		case 6:
			return 24998;
			break;
		
		case 7:
			return 24999;
			break;
		
		case 127:
			return 25117;
			break;
		
		case 128:
			return 25118;
			break;
		
		case 23:
			return 25119;
			break;
		
		case 139:
			return 25125;
			break;
		
		case 140:
			return 25127;
			break;
		
		case 141:
			return 25128;
			break;
		
		case 27:
			return 25129;
			break;
		
		case 160:
			return 25136;
			break;
		
		case 161:
			return 25139;
			break;
		
		case 162:
			return 25140;
			break;
		
		case 31:
			return 25141;
			break;
		
		case 181:
			return 25148;
			break;
		
		case 182:
			return 25151;
			break;
		
		case 183:
			return 25152;
			break;
		
		case 35:
			return 25153;
			break;
		
		case 193:
			return 25160;
			break;
		
		case 194:
			return 25161;
			break;
		
		case 39:
			return 25162;
			break;
		
		case 206:
			return 25168;
			break;
		
		case 207:
			return 25169;
			break;
		
		case 208:
			return 25170;
			break;
		
		case 209:
			return 25173;
			break;
		
		case 210:
			return 25174;
			break;
		
		case 43:
			return 25175;
			break;
		
		case 234:
			return 25179;
			break;
		
		case 235:
			return 25183;
			break;
		
		case 236:
			return 25184;
			break;
		
		case 47:
			return 25185;
			break;
		
		case 248:
			return 25188;
			break;
		
		case 249:
			return 25191;
			break;
		
		case 250:
			return 25192;
			break;
		
		case 51:
			return 25193;
			break;
		
		case 259:
			return 25198;
			break;
		
		case 260:
			return 25202;
			break;
		
		case 261:
			return 25203;
			break;
		
		case 55:
			return 25204;
			break;
		
		case 274:
			return 25209;
			break;
		
		case 275:
			return 25212;
			break;
		
		case 276:
			return 25213;
			break;
		
		case 59:
			return 25214;
			break;
		
		case 284:
			return 25217;
			break;
		
		case 285:
			return 25221;
			break;
		
		case 286:
			return 25222;
			break;
		
		case 63:
			return 25223;
			break;
		
		case 307:
			return 25228;
			break;
		
		case 308:
			return 24979;
			break;
		
		case 309:
			return 25229;
			break;
		
		case 310:
			return 25111;
			break;
		
		case 67:
			return 25230;
			break;
		
		case 68:
			return 25112;
			break;
		
		case 72:
			return 25231;
			break;
		
		case 73:
			return 25233;
			break;
		
		case 74:
			return 25234;
			break;
		
		case 75:
			return 25235;
			break;
		
		case 76:
			return 25236;
			break;
		
		case 77:
			return 25394;
			break;
		
		case 121:
			return 25395;
			break;
		
		case 122:
			return 25396;
			break;
		
		case 123:
			return 25397;
			break;
		
		case 124:
			return 25398;
			break;
		
		case 125:
			return 25399;
			break;
		
		case 126:
			return 25400;
			break;
	}
	switch (iParam0)
	{
		case 78:
			return 25244;
			break;
		
		case joaat("mpsv_lp0_31"):
			return 25245;
			break;
		
		case 80:
			return 25246;
			break;
		
		case 81:
			return 25247;
			break;
		
		case 82:
			return 25248;
			break;
		
		case 83:
			return 25249;
			break;
		
		case 84:
			return 25250;
			break;
		
		case 85:
			return 25000;
			break;
		
		case 86:
			return 25251;
			break;
		
		case 87:
			return 25252;
			break;
		
		case 88:
			return 25253;
			break;
		
		case 89:
			return 25254;
			break;
		
		case 90:
			return 25255;
			break;
		
		case 91:
			return 25256;
			break;
		
		case 92:
			return 25257;
			break;
		
		case 93:
			return 25258;
			break;
		
		case 94:
			return 25259;
			break;
		
		case 95:
			return 25260;
			break;
		
		case 96:
			return 25261;
			break;
		
		case 97:
			return 25262;
			break;
		
		case 98:
			return 25263;
			break;
		
		case 99:
			return 25264;
			break;
		
		case 100:
			return 25225;
			break;
		
		case 101:
			return 25178;
			break;
		
		case 311:
			return 25265;
			break;
		
		case 312:
			return 25266;
			break;
		
		case 313:
			return 25267;
			break;
		
		case 314:
			return 25268;
			break;
		
		case 315:
			return 24977;
			break;
		
		case 316:
			return 25269;
			break;
		
		case 317:
			return 25270;
			break;
		
		case 318:
			return 25271;
			break;
		
		case 319:
			return 25272;
			break;
		
		case 320:
			return 25273;
			break;
		
		case 321:
			return 25274;
			break;
		
		case 322:
			return 25275;
			break;
		
		case 323:
			return 25276;
			break;
		
		case 324:
			return 25277;
			break;
		
		case 325:
			return 25278;
			break;
		
		case 326:
			return 25279;
			break;
		
		case 327:
			return 25280;
			break;
		
		case 328:
			return 25281;
			break;
		
		case 329:
			return 25282;
			break;
		
		case 330:
			return 25283;
			break;
		
		case 331:
			return 25284;
			break;
		
		case 332:
			return 25285;
			break;
		
		case 333:
			return 25286;
			break;
		
		case 334:
			return 25287;
			break;
		
		case 335:
			return 25288;
			break;
		
		case 336:
			return 25289;
			break;
		
		case 337:
			return 25290;
			break;
		
		case 338:
			return 25291;
			break;
		
		case 339:
			return 25292;
			break;
		
		case 340:
			return 25293;
			break;
		
		case 341:
			return 25294;
			break;
		
		case 342:
			return 25295;
			break;
		
		case 343:
			return 25296;
			break;
		
		case 344:
			return 25297;
			break;
		
		case 345:
			return 25298;
			break;
		
		case 346:
			return 25299;
			break;
		
		case 347:
			return 25300;
			break;
		
		case 348:
			return 25301;
			break;
		
		case 349:
			return 25302;
			break;
		
		case 350:
			return 25303;
			break;
		
		case 351:
			return 25304;
			break;
		
		case 352:
			return 25305;
			break;
		
		case 353:
			return 25306;
			break;
		
		case 354:
			return 25307;
			break;
		
		case 355:
			return 25308;
			break;
		
		case 356:
			return 25309;
			break;
		
		case 357:
			return 25310;
			break;
		
		case 358:
			return 25311;
			break;
		
		case 359:
			return 25312;
			break;
		
		case 360:
			return 25313;
			break;
		
		case 361:
			return 25314;
			break;
		
		case 362:
			return 25315;
			break;
		
		case 363:
			return 25316;
			break;
		
		case 364:
			return 25317;
			break;
		
		case 365:
			return 25318;
			break;
		
		case 366:
			return 25319;
			break;
		
		case 367:
			return 25320;
			break;
		
		case 368:
			return 25321;
			break;
		
		case 369:
			return 25322;
			break;
		
		case 370:
			return 25323;
			break;
		
		case 371:
			return 25324;
			break;
		
		case 372:
			return 25325;
			break;
		
		case 373:
			return 25326;
			break;
		
		case 374:
			return 25327;
			break;
		
		case 375:
			return 25328;
			break;
		
		case 376:
			return 25329;
			break;
		
		case 377:
			return 25330;
			break;
		
		case 378:
			return 25331;
			break;
		
		case 379:
			return 25332;
			break;
		
		case 380:
			return 25333;
			break;
		
		case 381:
			return 25334;
			break;
		
		case 382:
			return 25335;
			break;
		
		case 383:
			return 25336;
			break;
		
		case 384:
			return 25337;
			break;
		
		case 385:
			return 25338;
			break;
		
		case 386:
			return 25339;
			break;
		
		case 387:
			return 25340;
			break;
		
		case 388:
			return 25341;
			break;
		
		case 389:
			return 25342;
			break;
		
		case 390:
			return 25343;
			break;
		
		case 391:
			return 25344;
			break;
		
		case 392:
			return 25345;
			break;
		
		case 393:
			return 25346;
			break;
		
		case 394:
			return 25347;
			break;
		
		case 395:
			return 24970;
			break;
		
		case 396:
			return 25348;
			break;
		
		case 397:
			return 25349;
			break;
		
		case 398:
			return 25350;
			break;
		
		case 399:
			return 25351;
			break;
		
		case 400:
			return 25352;
			break;
		
		case 401:
			return 25353;
			break;
		
		case 402:
			return 25354;
			break;
		
		case 403:
			return 25355;
			break;
		
		case 404:
			return 25356;
			break;
		
		case 405:
			return 25357;
			break;
		
		case 406:
			return 25358;
			break;
		
		case 407:
			return 25359;
			break;
		
		case 408:
			return 25360;
			break;
		
		case 409:
			return 25361;
			break;
		
		case 410:
			return 25362;
			break;
		
		case 411:
			return 25363;
			break;
		
		case 412:
			return 25364;
			break;
		
		case 413:
			return 25365;
			break;
		
		case 414:
			return 25366;
			break;
		
		case 415:
			return 25367;
			break;
		
		case 416:
			return 25368;
			break;
		
		case 417:
			return 25369;
			break;
		
		case 418:
			return 25370;
			break;
		
		case 419:
			return 25371;
			break;
		
		case 420:
			return 25373;
			break;
		
		case 421:
			return 25374;
			break;
		
		case 422:
			return 25375;
			break;
		
		case 423:
			return 25377;
			break;
		
		case 424:
			return 25378;
			break;
		
		case 425:
			return 25379;
			break;
		
		case 426:
			return 25382;
			break;
		
		case 427:
			return 25383;
			break;
		
		case 428:
			return 25386;
			break;
		
		case 429:
			return 25390;
			break;
		
		case 430:
			return 25391;
			break;
		
		case 431:
			return 25392;
			break;
		
		case 432:
			return 25393;
			break;
	}
	switch (iParam0)
	{
		case 24:
			return 24971;
			break;
		
		case 25:
			return 25113;
			break;
		
		case 26:
			return 25114;
			break;
		
		case 28:
			return 25115;
			break;
		
		case 29:
			return 25116;
			break;
		
		case 30:
			return 25120;
			break;
		
		case 32:
			return 25121;
			break;
		
		case 33:
			return 25122;
			break;
		
		case 34:
			return 25123;
			break;
		
		case 36:
			return 25124;
			break;
		
		case 37:
			return 25126;
			break;
		
		case 38:
			return 25130;
			break;
		
		case 40:
			return 25131;
			break;
		
		case 41:
			return 25132;
			break;
		
		case 42:
			return 25133;
			break;
		
		case 44:
			return 25134;
			break;
		
		case 45:
			return 25137;
			break;
		
		case 46:
			return 25138;
			break;
		
		case 48:
			return 25142;
			break;
		
		case 49:
			return 25143;
			break;
		
		case 50:
			return 25144;
			break;
		
		case 52:
			return 25145;
			break;
		
		case 53:
			return 25146;
			break;
		
		case 54:
			return 25147;
			break;
		
		case 56:
			return 25149;
			break;
		
		case 57:
			return 25150;
			break;
		
		case 58:
			return 25154;
			break;
		
		case 60:
			return 25155;
			break;
		
		case 61:
			return 25156;
			break;
		
		case 62:
			return 25157;
			break;
		
		case 64:
			return 25158;
			break;
		
		case 65:
			return 25159;
			break;
		
		case 66:
			return 25163;
			break;
		
		case 69:
			return 25164;
			break;
		
		case 70:
			return 25165;
			break;
		
		case 71:
			return 25166;
			break;
		
		case 129:
			return 25167;
			break;
		
		case 130:
			return 25171;
			break;
		
		case 131:
			return 25172;
			break;
		
		case 132:
			return 25176;
			break;
		
		case 133:
			return 25177;
			break;
		
		case 134:
			return 25181;
			break;
		
		case 135:
			return 25182;
			break;
		
		case 136:
			return 25186;
			break;
		
		case 137:
			return 25187;
			break;
		
		case 138:
			return 25189;
			break;
		
		case 142:
			return 25190;
			break;
		
		case 143:
			return 25194;
			break;
		
		case 144:
			return 25195;
			break;
		
		case 145:
			return 25196;
			break;
		
		case 146:
			return 25197;
			break;
		
		case 147:
			return 25199;
			break;
		
		case 148:
			return 25200;
			break;
		
		case 149:
			return 25201;
			break;
		
		case 150:
			return 25205;
			break;
		
		case 151:
			return 25206;
			break;
		
		case 152:
			return 25207;
			break;
		
		case 153:
			return 25208;
			break;
		
		case 154:
			return 25210;
			break;
		
		case 155:
			return 25211;
			break;
		
		case 156:
			return 25215;
			break;
		
		case 157:
			return 25216;
			break;
		
		case 158:
			return 25218;
			break;
		
		case 159:
			return 25219;
			break;
		
		case 163:
			return 25220;
			break;
		
		case 164:
			return 25224;
			break;
		
		case 165:
			return 25226;
			break;
		
		case 166:
			return 25227;
			break;
		
		case 167:
			return 25232;
			break;
		
		case 168:
			return 25372;
			break;
		
		case 169:
			return 25376;
			break;
		
		case 170:
			return 25380;
			break;
		
		case 171:
			return 25381;
			break;
		
		case 172:
			return 25384;
			break;
		
		case 173:
			return 25385;
			break;
		
		case 174:
			return 25387;
			break;
		
		case 175:
			return 25388;
			break;
		
		case 176:
			return 25389;
			break;
		
		case 177:
			return 25407;
			break;
		
		case 178:
			return 25408;
			break;
		
		case 179:
			return 25409;
			break;
		
		case 180:
			return 25410;
			break;
		
		case 184:
			return 25411;
			break;
		
		case 185:
			return 25412;
			break;
		
		case 186:
			return 25413;
			break;
		
		case 187:
			return 25414;
			break;
		
		case 188:
			return 25415;
			break;
		
		case 189:
			return 25416;
			break;
		
		case 190:
			return 25417;
			break;
		
		case 191:
			return 25418;
			break;
		
		case 192:
			return 25419;
			break;
		
		case 195:
			return 25420;
			break;
		
		case 196:
			return 25421;
			break;
		
		case 197:
			return 25422;
			break;
		
		case 198:
			return 25423;
			break;
		
		case 199:
			return 25424;
			break;
		
		case 200:
			return 25425;
			break;
		
		case 201:
			return 25426;
			break;
		
		case 202:
			return 25427;
			break;
		
		case 203:
			return 25428;
			break;
		
		case 204:
			return 25429;
			break;
		
		case 205:
			return 25430;
			break;
		
		case 211:
			return 25431;
			break;
		
		case 212:
			return 25432;
			break;
		
		case 213:
			return 25433;
			break;
		
		case 214:
			return 25434;
			break;
		
		case 215:
			return 25435;
			break;
		
		case 216:
			return 25436;
			break;
		
		case 217:
			return 25437;
			break;
		
		case 218:
			return 25438;
			break;
		
		case 219:
			return 25439;
			break;
		
		case 220:
			return 25440;
			break;
		
		case 221:
			return 25441;
			break;
		
		case 222:
			return 25442;
			break;
		
		case 223:
			return 25443;
			break;
		
		case 224:
			return 25444;
			break;
		
		case 225:
			return 25445;
			break;
		
		case 226:
			return 25446;
			break;
		
		case 227:
			return 25447;
			break;
		
		case 228:
			return 25448;
			break;
		
		case 229:
			return 25449;
			break;
		
		case 230:
			return 25450;
			break;
		
		case 231:
			return 25451;
			break;
		
		case 232:
			return 25452;
			break;
		
		case 233:
			return 25453;
			break;
		
		case 237:
			return 25454;
			break;
		
		case 238:
			return 25455;
			break;
		
		case 239:
			return 25456;
			break;
		
		case 240:
			return 25457;
			break;
		
		case 241:
			return 25458;
			break;
		
		case 242:
			return 25459;
			break;
		
		case 243:
			return 25460;
			break;
		
		case 244:
			return 25461;
			break;
		
		case 245:
			return 25462;
			break;
		
		case 246:
			return 25463;
			break;
		
		case 247:
			return 25464;
			break;
		
		case 251:
			return 25465;
			break;
		
		case 252:
			return 25466;
			break;
		
		case 253:
			return 25467;
			break;
		
		case 254:
			return 25468;
			break;
		
		case 255:
			return 25469;
			break;
		
		case 256:
			return 25470;
			break;
		
		case 257:
			return 25471;
			break;
		
		case 258:
			return 25472;
			break;
		
		case 262:
			return 25473;
			break;
		
		case 263:
			return 25474;
			break;
		
		case 264:
			return 25475;
			break;
		
		case 265:
			return 25476;
			break;
		
		case 266:
			return 25477;
			break;
		
		case 267:
			return 25478;
			break;
		
		case 268:
			return 25479;
			break;
		
		case 269:
			return 25480;
			break;
		
		case 270:
			return 25481;
			break;
		
		case 271:
			return 25482;
			break;
		
		case 272:
			return 25483;
			break;
		
		case 273:
			return 25484;
			break;
		
		case 277:
			return 25485;
			break;
		
		case 278:
			return 25486;
			break;
		
		case 279:
			return 25487;
			break;
		
		case 280:
			return 25488;
			break;
		
		case 281:
			return 25489;
			break;
		
		case 282:
			return 25490;
			break;
		
		case 283:
			return 25491;
			break;
		
		case 287:
			return 25492;
			break;
		
		case 288:
			return 25493;
			break;
		
		case 289:
			return 25494;
			break;
		
		case 290:
			return 25495;
			break;
		
		case 291:
			return 25496;
			break;
		
		case 292:
			return 25497;
			break;
		
		case 293:
			return 25498;
			break;
		
		case 294:
			return 25499;
			break;
		
		case 295:
			return 25500;
			break;
		
		case 296:
			return 25501;
			break;
		
		case 297:
			return 25502;
			break;
		
		case 298:
			return 25503;
			break;
		
		case 299:
			return 25504;
			break;
		
		case 300:
			return 25505;
			break;
		
		case 301:
			return 25506;
			break;
		
		case 302:
			return 25507;
			break;
		
		case 303:
			return 25508;
			break;
		
		case 304:
			return 25509;
			break;
		
		case 305:
			return 25510;
			break;
		
		case 306:
			return 25511;
			break;
	}
	return 0;
}

int func_652(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	switch (iParam0)
	{
		case 17:
			return 0;
		
		case 9:
			return 1;
		
		case 10:
			return 2;
		
		case 11:
			return 3;
		
		case 12:
			return 4;
		
		case 13:
			return 5;
		
		case 14:
			return 6;
		
		case 15:
			return 7;
		
		case 16:
			return 8;
		
		case 19:
			return 9;
		
		case 22:
			return 10;
		
		case 23:
			return 11;
		
		case 24:
			return 12;
		
		case 25:
			return 13;
		
		case 27:
			return 14;
		
		case 28:
			return 15;
		
		case 29:
			return 16;
		
		case 30:
			return 17;
		
		case 31:
			return 18;
		
		case 20:
			return 19;
		
		case 32:
			return 20;
		
		case 21:
			return 21;
		
		case 78:
			return 22;
		
		case joaat("mpsv_lp0_31"):
			return 23;
		
		case 80:
			return 24;
		
		case 18:
			return 25;
		
		case 81:
			return 26;
		
		case 82:
			return 27;
		
		case 83:
			return 28;
		
		case 84:
			return 29;
		
		case 85:
			return 30;
		
		case 86:
			return 31;
		
		case 87:
			return 32;
		
		case 88:
			return 33;
		
		case 102:
			return 34;
		
		case 113:
			return 35;
		
		case 160:
			return 36;
		
		case 163:
			return 37;
		
		case 162:
			return 38;
		
		case 164:
			if (func_653(iParam0, 11, iParam1))
			{
				return 40;
			}
			return 39;
		
		case 199:
			return 41;
		
		case 201:
			return 42;
		
		case 200:
			switch (iParam1)
			{
				case 1:
					return 43;
				
				case 2:
					return 44;
				
				case 3:
					return 45;
				
				case 4:
					return 46;
				
				case 5:
					return 47;
				
				case 6:
					return 48;
				
				case 7:
					return 49;
				
				case 8:
					return 50;
				
				case 9:
					return 51;
				
				case 10:
					return 52;
				
				case 11:
					return 53;
				
				case 12:
					return 54;
				
				case 13:
					return 55;
				
				case 14:
					return 56;
				
				case 15:
					return 57;
				
				case 16:
					return 58;
				
				case 17:
					return 59;
				
				case 18:
					return 60;
				
				case 19:
					return 61;
				
				case 20:
					return 62;
				
				case 21:
					return 63;
				
				case 22:
					return 64;
				
				case 23:
					return 65;
				
				case 24:
					return 66;
				
				case 25:
					return 67;
				
				default:
			}
			return 43;
		
		case 171:
			return 68;
		
		case 187:
			return 69;
		
		case 177:
			return 70;
		
		case 183:
			return 71;
		
		case 185:
			return 72;
		
		case 184:
			return 73;
		
		case 188:
			return 74;
		
		case 173:
			return 75;
		
		case 178:
			return 76;
		
		case 186:
			return 77;
		
		case 215:
			return 78;
		
		case 217:
			return 79;
		
		case 224:
			return 80;
		
		case 237:
			return 81;
		
		case 243:
			return 82;
		
		case 244:
			return 83;
		
		case 245:
			return 84;
		
		case 253:
			return 85;
		
		case 254:
			return 86;
		
		case 256:
			return 87;
		
		case 257:
			return 88;
		
		case 258:
			return 89;
		
		case 276:
			if (func_653(iParam0, 16, iParam1))
			{
				return 91;
			}
			return 90;
		
		case 323:
			return 92;
		
		case 324:
			return 93;
		
		case 337:
			return 94;
		
		case 357:
			return 95;
		
		case 402:
			return 96;
		
		case 413:
			switch (iParam1)
			{
				case 1:
					return 97;
				
				case 2:
					return 98;
				
				case 3:
					return 99;
				
				case 4:
					return 100;
				
				case 5:
					return 101;
				
				case 6:
					return 102;
				
				case 7:
					return 103;
				
				case 8:
					return 104;
				
				default:
			}
			return 97;
		
		case 414:
			switch (iParam1)
			{
				case 1:
					return 105;
				
				case 2:
					return 106;
				
				case 3:
					return 107;
				
				case 4:
					return 108;
				
				case 5:
					return 109;
				
				case 6:
					return 110;
				
				case 7:
					return 111;
				
				case 8:
					return 112;
				
				case 9:
					return 113;
				
				case 10:
					return 114;
				
				default:
			}
			return 105;
		
		case 450:
			return 115;
		
		case 451:
			return 116;
		
		case 452:
			return 117;
		
		case 453:
			return 118;
		
		case 454:
			return 119;
		
		case 455:
			return 120;
		
		case 456:
			return 121;
		
		case 457:
			return 122;
		
		case 480:
			return 123;
		
		case 482:
			return 124;
		
		case 483:
			return 125;
		
		case 518:
			return 126;
			break;
		
		case 531:
			return 127;
			break;
		
		case 533:
			return 128;
			break;
		
		case 527:
			return 129;
			break;
		
		case 525:
			return 130;
	}
	return -1;
}

int func_653(int iParam0, int iParam1, int iParam2)
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
	
	iVar0 = func_643(iParam0, -1);
	if (iParam0 == 164)
	{
		if (iParam2 == 2)
		{
			return 1;
		}
		return 0;
	}
	if (iParam0 == 276)
	{
		if (iParam2 == 2)
		{
			return 1;
		}
		return 0;
	}
	if (iParam0 == 95)
	{
		if (unk_0xCA8CDFE6F0F62C7F())
		{
			return 1;
		}
		return 0;
	}
	else if ((iParam0 == 96 || iParam0 == 97) || iParam0 == 98)
	{
		if (func_637() && func_694())
		{
			return 1;
		}
		return 0;
	}
	if ((((iParam0 == 206 && unk_0x9315DBF7D972F07A()) || (iParam0 == 207 && unk_0x9315DBF7D972F07A())) || (iParam0 == 208 && unk_0x9315DBF7D972F07A())) || (iParam0 == 209 && unk_0x9315DBF7D972F07A()))
	{
		if (func_637())
		{
			return 1;
		}
		return 0;
	}
	if ((((iParam0 == 170 || iParam0 == 120) || iParam0 == 119) || iParam0 == 117) || iParam0 == 166)
	{
		return 1;
	}
	if (iParam0 == 221 || iParam0 == 135)
	{
		if (iParam1 == 26)
		{
			return 1;
		}
		return 0;
	}
	if (func_693(iParam0))
	{
		if (Global_76588)
		{
			return 1;
		}
		return 0;
	}
	iVar1 = func_476(iVar0);
	if (iVar1 != -1)
	{
		if (func_691(func_692(iVar0)))
		{
			return 1;
		}
		return 0;
	}
	if (func_642(iParam0))
	{
		if (func_637())
		{
			if ((iParam0 == 205 && Global_262145.f_20017) || (iParam0 != 205 && Global_262145.f_20016))
			{
				return 1;
			}
			return 0;
		}
		return 0;
	}
	if (func_641(iParam0))
	{
		if (func_633(iParam0))
		{
			return 0;
		}
		return 1;
	}
	iVar2 = func_690(iVar0);
	if (iVar2 != -1)
	{
		if (func_688(func_689(iVar0)))
		{
			return 1;
		}
		return 0;
	}
	iVar3 = func_687(iVar0);
	if (iVar3 > 0)
	{
		if (func_685(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar4 = func_684(iVar0);
	if (iVar4 != -1)
	{
		if (func_682(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar5 = func_681(iVar0);
	if (iVar5 != -1)
	{
		if (func_679(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar6 = func_678(iVar0);
	if (iVar6 != -1)
	{
		if (func_676(iVar0))
		{
			return 1;
		}
		return 0;
	}
	if ((iVar0 == joaat("firetruk") || iVar0 == joaat("boxville")) || iVar0 == joaat("stockade"))
	{
		if (func_675(iVar0))
		{
			return 0;
		}
		return 1;
	}
	iVar7 = func_640(iVar0);
	if (iVar7 != -1)
	{
		if (func_675(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar8 = func_638(iVar0);
	if (iVar8 != -1)
	{
		if (func_666(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar9 = func_665(iVar0);
	if (iVar9 != -1)
	{
		if (func_663(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar10 = func_662(iVar0);
	if (iVar10 != -1)
	{
		if (func_654(iVar0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_654(int iParam0)
{
	if (!Global_77852)
	{
		return 0;
	}
	switch (iParam0)
	{
		case -619930876:
			return func_661();
		
		case -261346873:
			return func_659(1) >= 5;
		
		case 1532171089:
			return func_659(1) >= 10;
		
		case -670086588:
			return func_659(1) >= 15;
		
		case 461465043:
			return func_659(1) >= 20;
		
		case -915234475:
			return (func_657(11, 1) || func_655(1));
		
		case 359875117:
			return func_655(1);
		
		default:
	}
	return 0;
}

bool func_655(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xE2D0C323A1AE5D85(func_21(9904, -1, 0), 2);
	}
	return func_656(unk_0x9E2D6C50374FCFA9());
}

int func_656(int iParam0)
{
	if (iParam0 != -1)
	{
		return unk_0xE2D0C323A1AE5D85(Global_1977258[iParam0 /*55*/].f_27, 2);
	}
	return 0;
}

bool func_657(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return unk_0xE2D0C323A1AE5D85(func_21(9906, -1, 0), iParam0);
	}
	return func_658(unk_0x9E2D6C50374FCFA9(), iParam0);
}

int func_658(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		return unk_0xE2D0C323A1AE5D85(Global_1977258[iParam0 /*55*/].f_27.f_3, iParam1);
	}
	return 0;
}

int func_659(bool bParam0)
{
	if (bParam0)
	{
		return func_21(9909, -1, 0);
	}
	return func_660(unk_0x9E2D6C50374FCFA9());
}

int func_660(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_1977258[iParam0 /*55*/].f_27.f_8;
	}
	return 0;
}

bool func_661()
{
	return func_21(9902, func_22(-1), 0) != 0;
}

int func_662(int iParam0)
{
	switch (iParam0)
	{
		case 359875117:
			return 0;
		
		case -619930876:
			return 1;
		
		case -915234475:
			return 2;
		
		case 1532171089:
			return 3;
		
		case -261346873:
			return 4;
		
		case 461465043:
			return 5;
		
		case 1343932732:
			return 6;
		
		case -670086588:
			return 7;
		
		case 1486521356:
			return 8;
		
		default:
	}
	return -1;
}

int func_663(int iParam0)
{
	if (!Global_77852)
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("euros"):
			return func_664(unk_0x9E2D6C50374FCFA9());
		
		case joaat("tailgater2"):
			return func_496(unk_0x9E2D6C50374FCFA9());
		
		case joaat("zr350"):
			return func_501(31810, -1);
		
		case joaat("comet6"):
			return func_501(31811, -1);
		
		case joaat("jester4"):
			return func_501(31812, -1);
		
		case joaat("vectre"):
			return func_501(31813, -1);
		
		case joaat("cypher"):
			return func_501(31814, -1);
		
		case joaat("growler"):
			return func_501(31815, -1);
		
		case joaat("calico"):
			return func_501(31816, -1);
		
		case joaat("remus"):
			return func_501(31817, -1);
		
		case joaat("dominator7"):
			return func_501(31818, -1);
		
		case joaat("futo2"):
			return func_501(31819, -1);
		
		case joaat("rt3000"):
			return func_501(31820, -1);
		
		case joaat("warrener2"):
			return func_501(31821, -1);
		
		case joaat("sultan3"):
			return func_501(31822, -1);
		
		case joaat("dominator8"):
			return func_501(31823, -1);
		
		case joaat("previon"):
			return func_501(31824, -1);
		
		default:
	}
	return 0;
}

int func_664(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_460.f_2, 17))
		{
			return 1;
		}
		if (iParam0 == unk_0x9E2D6C50374FCFA9())
		{
			return func_21(9630, -1, 0) != 0;
		}
	}
	return 0;
}

int func_665(int iParam0)
{
	switch (iParam0)
	{
		case joaat("zr350"):
			return 0;
		
		case joaat("comet6"):
			return 1;
		
		case joaat("jester4"):
			return 2;
		
		case joaat("vectre"):
			return 3;
		
		case joaat("cypher"):
			return 4;
		
		case joaat("tailgater2"):
			return 5;
		
		case joaat("euros"):
			return 6;
		
		case joaat("growler"):
			return 7;
		
		case joaat("calico"):
			return 8;
		
		case joaat("remus"):
			return 9;
		
		case joaat("dominator7"):
			return 10;
		
		case joaat("futo2"):
			return 11;
		
		case joaat("rt3000"):
			return 12;
		
		case joaat("warrener2"):
			return 13;
		
		case joaat("sultan3"):
			return 14;
		
		case joaat("dominator8"):
			return 15;
		
		case joaat("previon"):
			return 16;
		
		default:
	}
	return -1;
}

int func_666(int iParam0)
{
	if (!Global_77852)
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("winky"):
			if (func_672(unk_0x9E2D6C50374FCFA9(), 0) || func_671(0))
			{
				return 1;
			}
			break;
		
		case joaat("brioso2"):
			if (func_670(unk_0x9E2D6C50374FCFA9()))
			{
				return 1;
			}
			break;
		
		case joaat("vetir"):
			if (func_669(281, -1))
			{
				return 1;
			}
			break;
		
		case joaat("longfin"):
			if (func_669(282, -1))
			{
				return 1;
			}
			break;
		
		case joaat("annihilator2"):
			if (func_669(283, -1))
			{
				return 1;
			}
			break;
		
		case joaat("alkonost"):
			if (func_669(284, -1))
			{
				return 1;
			}
			break;
		
		case joaat("patrolboat"):
			if (func_669(285, -1))
			{
				return 1;
			}
			break;
		
		case joaat("weevil"):
			if ((func_667(0, 1) && func_667(1, 1)) && func_667(2, 1))
			{
				return 1;
			}
			break;
		
		case joaat("italirsx"):
			if (func_667(3, 1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_667(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return unk_0xE2D0C323A1AE5D85(func_21(9585, -1, 0), iParam0);
	}
	return func_668(unk_0x9E2D6C50374FCFA9(), iParam0);
}

int func_668(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		return unk_0xE2D0C323A1AE5D85(Global_1975399[iParam0 /*53*/].f_3, iParam1);
	}
	return 0;
}

int func_669(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2860375[iParam0 /*3*/][func_22(iParam1)];
	if (unk_0x1BB27397611554CE(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_670(int iParam0)
{
	if (iParam0 != -1)
	{
		return unk_0xE2D0C323A1AE5D85(Global_1975399[iParam0 /*53*/].f_1, 1);
	}
	return 0;
}

bool func_671(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xE2D0C323A1AE5D85(func_21(9510, -1, 0), 1);
	}
	return func_670(unk_0x9E2D6C50374FCFA9());
}

int func_672(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		return func_673(iParam0, func_674(iParam1));
	}
	return 0;
}

int func_673(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		return unk_0xE2D0C323A1AE5D85(Global_1975399[iParam0 /*53*/].f_2, iParam1);
	}
	return 0;
}

int func_674(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 7:
			return 1;
		
		case 1:
			return 2;
		
		case 5:
			return 3;
		
		case 2:
			return 4;
		
		case 3:
			return 5;
		
		case 4:
			return 6;
		
		case 6:
			return 7;
		
		case 8:
			return 8;
		
		case 9:
			return 9;
		
		case 10:
			return 10;
		
		case 11:
			return 10;
		
		case 12:
			return 11;
		
		case 13:
			return 12;
		
		case 14:
			return 13;
		
		case 15:
			return 14;
		
		case 16:
			return 15;
		
		default:
	}
	return -1;
}

int func_675(int iParam0)
{
	int iVar0;
	
	if (!Global_77852)
	{
		return 0;
	}
	iVar0 = func_21(8836, -1, 0);
	switch (iParam0)
	{
		case joaat("firetruk"):
			if (unk_0xE2D0C323A1AE5D85(iVar0, 0) || Global_262145.f_28236)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("burrito2"):
			if (unk_0xE2D0C323A1AE5D85(iVar0, 1) || Global_262145.f_28237)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("boxville"):
			if (unk_0xE2D0C323A1AE5D85(iVar0, 2) || Global_262145.f_28238)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("stockade"):
			if (unk_0xE2D0C323A1AE5D85(iVar0, 3) || Global_262145.f_28239)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("asbo"):
			if (unk_0xE2D0C323A1AE5D85(iVar0, 4) || Global_262145.f_28240)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("kanjo"):
			if (unk_0xE2D0C323A1AE5D85(iVar0, 5) || Global_262145.f_28241)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("everon"):
			if (unk_0xE2D0C323A1AE5D85(iVar0, 6) || Global_262145.f_28242)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("retinue2"):
			if (unk_0xE2D0C323A1AE5D85(iVar0, 7) || Global_262145.f_28243)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("yosemite2"):
			if (unk_0xE2D0C323A1AE5D85(iVar0, 8) || Global_262145.f_28244)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("sugoi"):
			if (unk_0xE2D0C323A1AE5D85(iVar0, 9) || Global_262145.f_28245)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("sultan2"):
			if (unk_0xE2D0C323A1AE5D85(iVar0, 10) || Global_262145.f_28246)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("outlaw"):
			if (unk_0xE2D0C323A1AE5D85(iVar0, 11) || Global_262145.f_28247)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("vagrant"):
			if (unk_0xE2D0C323A1AE5D85(iVar0, 12) || Global_262145.f_28248)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("komoda"):
			if (unk_0xE2D0C323A1AE5D85(iVar0, 13) || Global_262145.f_28249)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("stryder"):
			if (unk_0xE2D0C323A1AE5D85(iVar0, 14) || Global_262145.f_28250)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("furia"):
			if (unk_0xE2D0C323A1AE5D85(iVar0, 15) || Global_262145.f_28251)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("zhaba"):
			if (unk_0xE2D0C323A1AE5D85(iVar0, 16) || Global_262145.f_28252)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("jugular"):
			if (unk_0xE2D0C323A1AE5D85(iVar0, 17) || Global_262145.f_28253)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("sentinel3"):
			if (unk_0xE2D0C323A1AE5D85(iVar0, 18) || Global_262145.f_28254)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("gauntlet3"):
			if (unk_0xE2D0C323A1AE5D85(iVar0, 19) || Global_262145.f_28255)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("ellie"):
			if (unk_0xE2D0C323A1AE5D85(iVar0, 20) || Global_262145.f_28256)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("defiler"):
			if (unk_0xE2D0C323A1AE5D85(iVar0, 21) || Global_262145.f_28257)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("manchez"):
			if (unk_0xE2D0C323A1AE5D85(iVar0, 22) || Global_262145.f_28258)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

int func_676(int iParam0)
{
	if (!Global_77852)
	{
		return 0;
	}
	if (iParam0 == joaat("cognoscenti") || iParam0 == joaat("cognoscenti2"))
	{
		return 0;
	}
	if (func_678(iParam0) != -1)
	{
		if (func_650(func_677(iParam0)))
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

int func_677(int iParam0)
{
	switch (iParam0)
	{
		case joaat("cerberus"):
			return 8;
			break;
		
		case joaat("cerberus2"):
			return 9;
			break;
		
		case joaat("cerberus3"):
			return 10;
			break;
		
		case joaat("brutus"):
			return 11;
			break;
		
		case joaat("brutus2"):
			return 12;
			break;
		
		case joaat("brutus3"):
			return 13;
			break;
		
		case joaat("zr380"):
			return 14;
			break;
		
		case joaat("zr3802"):
			return 15;
			break;
		
		case joaat("zr3803"):
			return 16;
			break;
		
		case joaat("scarab"):
			return 20;
			break;
		
		case joaat("scarab2"):
			return 21;
			break;
		
		case joaat("scarab3"):
			return 22;
			break;
		
		case joaat("imperator"):
			return 17;
			break;
		
		case joaat("imperator2"):
			return 18;
			break;
		
		case joaat("imperator3"):
			return 19;
			break;
		
		case joaat("impaler"):
			return 102;
			break;
		
		case joaat("ratloader2"):
			return 103;
			break;
		
		case joaat("glendale"):
			return 104;
			break;
		
		case joaat("slamvan"):
			return 105;
			break;
		
		case joaat("dominator"):
			return 106;
			break;
		
		case joaat("issi3"):
			return 107;
			break;
		
		case joaat("gargoyle"):
			return 108;
			break;
	}
	return -1;
}

int func_678(int iParam0)
{
	switch (iParam0)
	{
		case joaat("cerberus"):
			return 0;
		
		case joaat("cerberus2"):
			return 1;
		
		case joaat("cerberus3"):
			return 2;
		
		case joaat("brutus"):
			return 3;
		
		case joaat("brutus2"):
			return 4;
		
		case joaat("brutus3"):
			return 5;
		
		case joaat("scarab"):
			return 6;
		
		case joaat("scarab2"):
			return 7;
		
		case joaat("scarab3"):
			return 8;
		
		case joaat("imperator"):
			return 9;
		
		case joaat("imperator2"):
			return 10;
		
		case joaat("imperator3"):
			return 11;
		
		case joaat("zr380"):
			return 12;
		
		case joaat("zr3802"):
			return 13;
		
		case joaat("zr3803"):
			return 14;
		
		case joaat("ratloader2"):
			return 15;
		
		case joaat("glendale"):
			return 16;
		
		case joaat("slamvan"):
			return 17;
		
		case joaat("dominator"):
			return 18;
		
		case joaat("impaler"):
			return 19;
		
		case joaat("issi3"):
			return 20;
		
		case joaat("gargoyle"):
			return 21;
		
		default:
	}
	return -1;
}

int func_679(int iParam0)
{
	switch (iParam0)
	{
		case joaat("mule4"):
			if (func_21(7232, -1, 0) >= func_680(iParam0) || Global_262145.f_24437)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("pounder2"):
			if (func_21(7232, -1, 0) >= func_680(iParam0) || Global_262145.f_24438)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("oppressor2"):
			if (func_67(22050, -1) >= func_680(iParam0) || Global_262145.f_24439)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("pbus2"):
			if (unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_291.f_7, 1) || Global_262145.f_24441)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("patriot2"):
			if (func_21(7230, -1, 0) >= func_680(iParam0) || Global_262145.f_24442)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("blimp3"):
			if (func_21(7230, -1, 0) >= func_680(iParam0) || Global_262145.f_24443)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("scramjet"):
			if (func_501(22123, -1) || Global_262145.f_24440)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

int func_680(int iParam0)
{
	switch (iParam0)
	{
		case joaat("mule4"):
			return Global_262145.f_24444;
			break;
		
		case joaat("pounder2"):
			return Global_262145.f_24445;
			break;
		
		case joaat("oppressor2"):
			return Global_262145.f_24446;
			break;
		
		case joaat("patriot2"):
			return Global_262145.f_24447;
			break;
		
		case joaat("blimp3"):
			return Global_262145.f_24448;
			break;
	}
	return 0;
}

int func_681(int iParam0)
{
	switch (iParam0)
	{
		case joaat("mule4"):
			return 0;
			break;
		
		case joaat("pounder2"):
			return 1;
			break;
		
		case joaat("oppressor2"):
			return 2;
			break;
		
		case joaat("scramjet"):
			return 3;
			break;
		
		case joaat("pbus2"):
			return 4;
			break;
		
		case joaat("patriot2"):
			return 5;
			break;
		
		case joaat("blimp3"):
			return 6;
			break;
	}
	return -1;
}

int func_682(int iParam0)
{
	int iVar0;
	
	if (!Global_77852)
	{
		return 0;
	}
	iVar0 = func_21(5663, -1, 0);
	switch (iParam0)
	{
		case joaat("deluxo"):
			return unk_0xE2D0C323A1AE5D85(iVar0, func_683(1));
		
		case joaat("akula"):
			return unk_0xE2D0C323A1AE5D85(iVar0, func_683(2));
		
		case joaat("riot2"):
			return unk_0xE2D0C323A1AE5D85(iVar0, func_683(6));
		
		case joaat("stromberg"):
			return unk_0xE2D0C323A1AE5D85(iVar0, func_683(7));
		
		case joaat("chernobog"):
			return unk_0xE2D0C323A1AE5D85(iVar0, func_683(10));
		
		case joaat("barrage"):
			return unk_0xE2D0C323A1AE5D85(iVar0, func_683(11));
		
		case joaat("khanjali"):
			return unk_0xE2D0C323A1AE5D85(iVar0, func_683(12));
		
		case joaat("volatol"):
			return unk_0xE2D0C323A1AE5D85(iVar0, func_683(13));
		
		case joaat("thruster"):
			return unk_0xE2D0C323A1AE5D85(iVar0, func_683(15));
		
		default:
	}
	return 0;
}

int func_683(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 1;
		
		case 2:
			return 2;
		
		case 3:
			return 3;
		
		case 4:
			return 4;
		
		case 5:
			return 5;
		
		case 6:
			return 6;
		
		case 7:
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
		
		case 13:
			return 13;
		
		case 14:
			return 14;
		
		case 15:
			return 15;
		
		default:
	}
	return -1;
}

int func_684(int iParam0)
{
	switch (iParam0)
	{
		case joaat("deluxo"):
			return 0;
			break;
		
		case joaat("akula"):
			return 1;
			break;
		
		case joaat("riot2"):
			return 2;
			break;
		
		case joaat("stromberg"):
			return 3;
			break;
		
		case joaat("chernobog"):
			return 4;
			break;
		
		case joaat("barrage"):
			return 5;
			break;
		
		case joaat("khanjali"):
			return 6;
			break;
		
		case joaat("volatol"):
			return 7;
			break;
		
		case joaat("thruster"):
			return 8;
			break;
	}
	return -1;
}

int func_685(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!Global_77852)
	{
		return 0;
	}
	iVar0 = func_687(iParam0);
	iVar1 = func_686();
	if (iVar1 >= iVar0)
	{
		return 1;
	}
	return 0;
}

int func_686()
{
	return func_21(6115, -1, 0);
}

int func_687(int iParam0)
{
	switch (iParam0)
	{
		case joaat("microlight"):
			return Global_262145.f_22482;
		
		case joaat("rogue"):
			return Global_262145.f_22483;
		
		case joaat("alphaz1"):
			return Global_262145.f_22484;
		
		case joaat("havok"):
			return Global_262145.f_22485;
		
		case joaat("starling"):
			return Global_262145.f_22486;
		
		case joaat("molotok"):
			return Global_262145.f_22487;
		
		case joaat("tula"):
			return Global_262145.f_22488;
		
		case joaat("bombushka"):
			return Global_262145.f_22489;
		
		case joaat("howard"):
			return Global_262145.f_22490;
		
		case joaat("mogul"):
			return Global_262145.f_22491;
		
		case joaat("pyro"):
			return Global_262145.f_22492;
		
		case joaat("seabreeze"):
			return Global_262145.f_22493;
		
		case joaat("nokota"):
			return Global_262145.f_22494;
		
		case joaat("hunter"):
			return Global_262145.f_22495;
		
		default:
	}
	return 0;
}

bool func_688(int iParam0)
{
	if (!Global_77852)
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(func_21(5465, -1, 0), iParam0);
}

int func_689(int iParam0)
{
	switch (iParam0)
	{
		case joaat("dune3"):
			return 0;
		
		case joaat("halftrack"):
			return 1;
		
		case joaat("trailersmall2"):
			return 2;
		
		case joaat("apc"):
			return 3;
		
		case joaat("tampa3"):
			return 5;
		
		case joaat("oppressor"):
			return 7;
		
		default:
	}
	return 3;
}

int func_690(int iParam0)
{
	switch (iParam0)
	{
		case joaat("dune3"):
			return 0;
			break;
		
		case joaat("halftrack"):
			return 1;
			break;
		
		case joaat("trailersmall2"):
			return 2;
			break;
		
		case joaat("apc"):
			return 3;
			break;
		
		case joaat("tampa3"):
			return 4;
			break;
		
		case joaat("oppressor"):
			return 5;
			break;
	}
	return -1;
}

bool func_691(int iParam0)
{
	if (!Global_77852)
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(func_21(5328, -1, 0), iParam0);
}

int func_692(int iParam0)
{
	switch (iParam0)
	{
		case joaat("dune4"):
			return 0;
		
		case joaat("dune5"):
			return 0;
		
		case joaat("wastelander"):
			return 1;
		
		case joaat("blazer5"):
			return 2;
		
		case joaat("phantom2"):
			return 3;
		
		case joaat("voltic2"):
			return 4;
		
		case joaat("technical2"):
			return 5;
		
		case joaat("boxville5"):
			return 6;
		
		case joaat("ruiner2"):
			return 7;
		
		default:
	}
	return 0;
}

int func_693(int iParam0)
{
	if ((((((iParam0 == 233 || iParam0 == 234) || iParam0 == 235) || iParam0 == 236) || iParam0 == 240) || iParam0 == 241) || iParam0 == 263)
	{
		return 1;
	}
	return 0;
}

int func_694()
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	
	if (unk_0xE2D0C323A1AE5D85(Global_25, 5))
	{
		if (unk_0xE2D0C323A1AE5D85(Global_25, 1) || unk_0xE2D0C323A1AE5D85(Global_25, 3))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x61481F9FBB1C7EDD(joaat("sp_unlock_exclus_content"), &uVar0, -1))
	{
		if (unk_0xE2D0C323A1AE5D85(uVar0, 5))
		{
			if (unk_0xE2D0C323A1AE5D85(iVar0, 1) || unk_0xE2D0C323A1AE5D85(iVar0, 3))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (unk_0x587B7BF26E4105BF(0))
	{
		if (Global_151756.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (unk_0x61481F9FBB1C7EDD(iVar2, &uVar1, -1))
			{
				if (unk_0xE2D0C323A1AE5D85(uVar1, 5))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0xB8F4926B803BFD19())
	{
		uVar3 = unk_0x5D851A9195129CE9(866);
		if (unk_0xE2D0C323A1AE5D85(uVar3, 1) || unk_0xE2D0C323A1AE5D85(iVar3, 3))
		{
			return 1;
		}
	}
	if (unk_0xAF5DBE95205A49D1())
	{
		if (unk_0x5B66E9FB7530BB95())
		{
			if (unk_0x4CE2AF6D17D3B116())
			{
				unk_0x61481F9FBB1C7EDD(joaat("sp_unlock_exclus_content"), &uVar4, -1);
				unk_0xCED9E32812D6C7C7(&uVar4, 1);
				unk_0xCED9E32812D6C7C7(&uVar4, 3);
				unk_0xCED9E32812D6C7C7(&uVar4, 5);
				unk_0xCED9E32812D6C7C7(&Global_25, 1);
				unk_0xCED9E32812D6C7C7(&Global_25, 3);
				unk_0xCED9E32812D6C7C7(&Global_25, 5);
				unk_0x076A5661EF5ABEE4(joaat("sp_unlock_exclus_content"), uVar4, 1);
				if (unk_0xB8F4926B803BFD19())
				{
					iVar4 = unk_0x5D851A9195129CE9(866);
					unk_0xCED9E32812D6C7C7(&iVar4, 1);
					unk_0xCED9E32812D6C7C7(&iVar4, 3);
					unk_0x212EDDD868F364B5(iVar4);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_695(int iParam0)
{
	switch (iParam0)
	{
		case joaat("ztype"):
			return 0;
		
		case joaat("stinger"):
			return 1;
		
		case joaat("jb700"):
			return 2;
		
		case joaat("cheetah"):
			return 3;
		
		case joaat("entityxf"):
			return 4;
		
		case joaat("adder"):
			return 5;
		
		case joaat("monroe"):
			return 6;
		
		case joaat("cogcabrio"):
			return 7;
		
		case joaat("shamal"):
			return 10;
		
		case joaat("stunt"):
			return 11;
		
		case joaat("cuban800"):
			return 12;
		
		case joaat("duster"):
			return 13;
		
		case joaat("luxor"):
			return 14;
		
		case joaat("frogger"):
			return 15;
		
		case joaat("maverick"):
			return 16;
		
		case joaat("rhino"):
			return 17;
		
		case joaat("titan"):
			return 18;
		
		case joaat("cargobob"):
			return 19;
		
		case joaat("buzzard"):
			return 20;
		
		case joaat("crusader"):
			return 21;
		
		case joaat("barracks"):
			return 22;
		
		case joaat("marquis"):
			return 24;
		
		case joaat("jetmax"):
			return 25;
		
		case joaat("squalo"):
			return 27;
		
		case joaat("tropic"):
			return 29;
		
		case joaat("seashark"):
			return 30;
		
		case joaat("submersible"):
			return 31;
		
		case joaat("suntrap"):
			return 32;
		
		case joaat("tug"):
			return 258;
		
		case joaat("bmx"):
			return 33;
		
		case joaat("scorcher"):
			return 34;
		
		case joaat("tribike"):
			return 35;
		
		case joaat("tribike2"):
			return 36;
		
		case joaat("tribike3"):
			return 37;
		
		case joaat("cruiser"):
			return 38;
		
		case joaat("schwarzer"):
			return 39;
		
		case joaat("zion"):
			return 40;
		
		case joaat("gauntlet"):
			return 41;
		
		case joaat("vigero"):
			return 42;
		
		case joaat("issi2"):
			return 43;
		
		case joaat("infernus"):
			return 44;
		
		case joaat("surano"):
			return 45;
		
		case joaat("vacca"):
			return 46;
		
		case joaat("ninef"):
			return 47;
		
		case joaat("comet2"):
			return 48;
		
		case joaat("banshee"):
			return 49;
		
		case joaat("feltzer2"):
			return 50;
		
		case joaat("bfinjection"):
			return 51;
		
		case joaat("sandking"):
			return 52;
		
		case joaat("fugitive"):
			return 53;
		
		case joaat("dilettante"):
			return 54;
		
		case joaat("superd"):
			return 55;
		
		case joaat("exemplar"):
			return 56;
		
		case joaat("baller2"):
			return 57;
		
		case joaat("cavalcade"):
			return 58;
		
		case joaat("rocoto"):
			return 59;
		
		case joaat("felon"):
			return 60;
		
		case joaat("oracle2"):
			return 61;
		
		case joaat("bati"):
			return 62;
		
		case joaat("akuma"):
			return 63;
		
		case joaat("ruffian"):
			return 64;
		
		case joaat("vader"):
			return 65;
		
		case joaat("blazer"):
			return 66;
		
		case joaat("pcj"):
			return 67;
		
		case joaat("sanchez"):
			return 68;
		
		case joaat("faggio2"):
			return 69;
		
		case joaat("airbus"):
			return 82;
		
		case joaat("annihilator"):
			return 78;
		
		case joaat("bati2"):
			return 94;
		
		case joaat("bison"):
			return 89;
		
		case joaat("bullet"):
			return 70;
		
		case joaat("bus"):
			return 83;
		
		case joaat("carbonizzare"):
			return 71;
		
		case joaat("coach"):
			return 84;
		
		case joaat("coquette"):
			return 72;
		
		case joaat("double"):
			return 90;
		
		case joaat("dump"):
			return 81;
		
		case joaat("felon2"):
			return 91;
		
		case joaat("hexer"):
			return 92;
		
		case joaat("journey"):
			return 85;
		
		case joaat("mammatus"):
			return 79;
		
		case joaat("mule"):
			return 86;
		
		case joaat("ninef2"):
			return 73;
		
		case joaat("rapidgt"):
			return 74;
		
		case joaat("rapidgt2"):
			return 75;
		
		case joaat("rentalbus"):
			return 87;
		
		case joaat("stingergt"):
			return 76;
		
		case joaat("stretch"):
			return 88;
		
		case joaat("velum"):
			return 80;
		
		case joaat("voltic"):
			return 77;
		
		case joaat("zion2"):
			return 93;
		
		case joaat("elegy2"):
			return 95;
		
		case joaat("khamelion"):
			return 96;
		
		case joaat("hotknife"):
			return 97;
		
		case joaat("carbonrs"):
			return 98;
		
		case joaat("bodhi2"):
			return 103;
		
		case joaat("dune"):
			return 104;
		
		case joaat("rebel"):
			return 105;
		
		case joaat("sadler"):
			return 106;
		
		case joaat("sanchez2"):
			return 107;
		
		case joaat("sandking2"):
			return 108;
		
		case joaat("asea"):
			return 128;
		
		case joaat("asterope"):
			return 129;
		
		case joaat("bobcatxl"):
			return 130;
		
		case joaat("cavalcade2"):
			return 131;
		
		case joaat("granger"):
			return 132;
		
		case joaat("ingot"):
			return 133;
		
		case joaat("intruder"):
			return 134;
		
		case joaat("minivan"):
			return 135;
		
		case joaat("premier"):
			return 136;
		
		case joaat("radi"):
			return 137;
		
		case joaat("rancherxl"):
			return 138;
		
		case joaat("ratloader"):
			return 139;
		
		case joaat("stanier"):
			return 140;
		
		case joaat("stratum"):
			return 141;
		
		case joaat("washington"):
			return 142;
		
		case joaat("dominator"):
			return 122;
		
		case joaat("f620"):
			return 123;
		
		case joaat("fusilade"):
			return 124;
		
		case joaat("penumbra"):
			return 125;
		
		case joaat("sentinel"):
			return 126;
		
		case joaat("sentinel2"):
			return 127;
		
		case joaat("picador"):
			return 150;
		
		case joaat("regina"):
			return 151;
		
		case joaat("surfer"):
			return 152;
		
		case joaat("youga"):
			return 153;
		
		case joaat("blazer3"):
			return 154;
		
		case joaat("rebel2"):
			return 155;
		
		case joaat("primo"):
			return 156;
		
		case joaat("buffalo"):
			return 157;
		
		case joaat("buffalo2"):
			return 158;
		
		case joaat("tailgater"):
			return 159;
		
		default:
	}
	if (iParam0 == joaat("bifta"))
	{
		return 99;
	}
	else if (iParam0 == joaat("kalahari"))
	{
		return 100;
	}
	else if (iParam0 == joaat("paradise"))
	{
		return 101;
	}
	else if (iParam0 == joaat("speeder"))
	{
		return 102;
	}
	else if (iParam0 == joaat("ROOSEVELT") || iParam0 == joaat("btype"))
	{
		return 109;
	}
	else if (iParam0 == joaat("jester"))
	{
		return 111;
	}
	else if (iParam0 == joaat("massacro"))
	{
		return 114;
	}
	else if (iParam0 == joaat("turismor"))
	{
		return 112;
	}
	else if (iParam0 == joaat("zentorno"))
	{
		return 115;
	}
	else if (iParam0 == joaat("huntley"))
	{
		return 116;
	}
	else if (iParam0 == joaat("alpha"))
	{
		return 110;
	}
	else if (iParam0 == joaat("vestra"))
	{
		return 113;
	}
	else if (iParam0 == joaat("coquette"))
	{
		return 117;
	}
	else if (iParam0 == joaat("banshee"))
	{
		return 118;
	}
	else if (iParam0 == joaat("stinger"))
	{
		return 119;
	}
	else if (iParam0 == joaat("voltic"))
	{
		return 120;
	}
	else if (iParam0 == joaat("thrust"))
	{
		return 121;
	}
	else if (iParam0 == joaat("blade"))
	{
		return 143;
	}
	else if (iParam0 == joaat("warrener"))
	{
		return 144;
	}
	else if (iParam0 == joaat("glendale"))
	{
		return 145;
	}
	else if (iParam0 == joaat("rhapsody"))
	{
		return 146;
	}
	else if (iParam0 == joaat("panto"))
	{
		return 147;
	}
	else if (iParam0 == joaat("dubsta3"))
	{
		return 148;
	}
	else if (iParam0 == joaat("pigalle"))
	{
		return 149;
	}
	else if (iParam0 == joaat("monster"))
	{
		return 160;
	}
	else if (iParam0 == joaat("sovereign"))
	{
		return 161;
	}
	else if (iParam0 == joaat("miljet"))
	{
		return 162;
	}
	else if (iParam0 == joaat("besra"))
	{
		return 163;
	}
	else if (iParam0 == joaat("swift"))
	{
		return 164;
	}
	else if (iParam0 == joaat("coquette2"))
	{
		return 165;
	}
	else if (iParam0 == joaat("coquette2"))
	{
		return 166;
	}
	else if (iParam0 == joaat("innovation"))
	{
		return 167;
	}
	else if (iParam0 == joaat("hakuchou"))
	{
		return 168;
	}
	else if (iParam0 == joaat("furoregt"))
	{
		return 169;
	}
	else if (iParam0 == joaat("kalahari"))
	{
		return 170;
	}
	else if (iParam0 == joaat("valkyrie"))
	{
		return 187;
	}
	else if (iParam0 == joaat("hydra"))
	{
		return 177;
	}
	else if (iParam0 == joaat("savage"))
	{
		return 185;
	}
	else if (iParam0 == joaat("enduro"))
	{
		return 174;
	}
	else if (iParam0 == joaat("boxville4"))
	{
		return 171;
	}
	else if (iParam0 == joaat("casco"))
	{
		return 172;
	}
	else if (iParam0 == joaat("dinghy3"))
	{
		return 173;
	}
	else if (iParam0 == joaat("gburrito2"))
	{
		return 175;
	}
	else if (iParam0 == joaat("guardian"))
	{
		return 176;
	}
	else if (iParam0 == joaat("insurgent"))
	{
		return 178;
	}
	else if (iParam0 == joaat("mule3"))
	{
		return 183;
	}
	else if (iParam0 == joaat("insurgent2"))
	{
		return 179;
	}
	else if (iParam0 == joaat("lectro"))
	{
		return 182;
	}
	else if (iParam0 == joaat("pbus"))
	{
		return 184;
	}
	else if (iParam0 == joaat("technical"))
	{
		return 186;
	}
	else if (iParam0 == joaat("velum2"))
	{
		return 188;
	}
	else if (iParam0 == joaat("gresley"))
	{
		return 189;
	}
	else if (iParam0 == joaat("jackal"))
	{
		return 190;
	}
	else if (iParam0 == joaat("kuruma"))
	{
		return 180;
	}
	else if (iParam0 == joaat("kuruma2"))
	{
		return 181;
	}
	else if (iParam0 == joaat("landstalker"))
	{
		return 191;
	}
	else if (iParam0 == joaat("mesa3"))
	{
		return 192;
	}
	else if (iParam0 == joaat("nemesis"))
	{
		return 193;
	}
	else if (iParam0 == joaat("oracle"))
	{
		return 194;
	}
	else if (iParam0 == joaat("rumpo"))
	{
		return 195;
	}
	else if (iParam0 == joaat("schafter2"))
	{
		return 196;
	}
	else if (iParam0 == joaat("seminole"))
	{
		return 197;
	}
	else if (iParam0 == joaat("surge"))
	{
		return 198;
	}
	else if (iParam0 == joaat("dodo"))
	{
		return 199;
	}
	else if (iParam0 == joaat("marshall"))
	{
		return 200;
	}
	else if (iParam0 == joaat("submersible2"))
	{
		return 201;
	}
	else if (iParam0 == joaat("blista2"))
	{
		return 202;
	}
	else if (iParam0 == joaat("stalion"))
	{
		return 203;
	}
	else if (iParam0 == joaat("dukes"))
	{
		return 204;
	}
	else if (iParam0 == joaat("dukes2"))
	{
		return 205;
	}
	else if (iParam0 == joaat("stalion2"))
	{
		return 206;
	}
	else if (iParam0 == joaat("dominator2"))
	{
		return 207;
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		return 208;
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		return 209;
	}
	else if (iParam0 == joaat("slamvan"))
	{
		return 210;
	}
	else if (iParam0 == joaat("ratloader2"))
	{
		return 211;
	}
	else if (iParam0 == joaat("jester2"))
	{
		return 212;
	}
	else if (iParam0 == joaat("massacro2"))
	{
		return 213;
	}
	else if (iParam0 == joaat("feltzer3"))
	{
		return 214;
	}
	else if (iParam0 == joaat("luxor2"))
	{
		return 215;
	}
	else if (iParam0 == joaat("osiris"))
	{
		return 216;
	}
	else if (iParam0 == joaat("swift2"))
	{
		return 217;
	}
	else if (iParam0 == joaat("virgo"))
	{
		return 218;
	}
	else if (iParam0 == joaat("windsor"))
	{
		return 219;
	}
	else if (iParam0 == joaat("brawler"))
	{
		return 220;
	}
	else if (iParam0 == joaat("chino"))
	{
		return 221;
	}
	else if (iParam0 == joaat("coquette3"))
	{
		return 222;
	}
	else if (iParam0 == joaat("t20"))
	{
		return 223;
	}
	else if (iParam0 == joaat("toro"))
	{
		return 224;
	}
	else if (iParam0 == joaat("vindicator"))
	{
		return 225;
	}
	else if (iParam0 == joaat("primo"))
	{
		return 229;
	}
	else if (iParam0 == joaat("moonbeam"))
	{
		return 228;
	}
	else if (iParam0 == joaat("faction"))
	{
		return 227;
	}
	else if (iParam0 == joaat("buccaneer"))
	{
		return 226;
	}
	else if (iParam0 == joaat("voodoo2"))
	{
		return 230;
	}
	else if (iParam0 == joaat("btype2"))
	{
		return 231;
	}
	else if (iParam0 == joaat("lurcher"))
	{
		return 232;
	}
	else if (iParam0 == joaat("minivan"))
	{
		return 135;
	}
	else if (iParam0 == joaat("virgo3"))
	{
		return 251;
	}
	else if (iParam0 == joaat("tornado"))
	{
		return 250;
	}
	else if (iParam0 == joaat("sabregt"))
	{
		return 249;
	}
	else if (iParam0 == joaat("slamvan"))
	{
		return 210;
	}
	else if (iParam0 == joaat("faction"))
	{
		return 252;
	}
	else if (iParam0 == joaat("baller3") || iParam0 == joaat("baller5"))
	{
		return 233;
	}
	else if (iParam0 == joaat("baller4") || iParam0 == joaat("baller6"))
	{
		return 234;
	}
	else if (iParam0 == joaat("cog55"))
	{
		return 235;
	}
	else if (iParam0 == joaat("cognoscenti"))
	{
		return 236;
	}
	else if (iParam0 == joaat("limo2"))
	{
		return 237;
	}
	else if (iParam0 == joaat("mamba"))
	{
		return 238;
	}
	else if (iParam0 == joaat("nightshade"))
	{
		return 239;
	}
	else if (iParam0 == joaat("schafter3") || iParam0 == joaat("schafter5"))
	{
		return 240;
	}
	else if (iParam0 == joaat("schafter4") || iParam0 == joaat("schafter6"))
	{
		return 241;
	}
	else if (iParam0 == joaat("verlierer2"))
	{
		return 242;
	}
	else if (iParam0 == joaat("supervolito"))
	{
		return 243;
	}
	else if (iParam0 == joaat("supervolito2"))
	{
		return 244;
	}
	else if (iParam0 == Global_74982)
	{
		return 245;
	}
	else if (iParam0 == joaat("tampa"))
	{
		return 246;
	}
	else if (iParam0 == joaat("sultan"))
	{
		return 247;
	}
	else if (iParam0 == joaat("banshee"))
	{
		return 49;
	}
	else if (iParam0 == joaat("ROOSEVELT2") || iParam0 == joaat("btype3"))
	{
		return 248;
	}
	else if (iParam0 == joaat("volatus"))
	{
		return 253;
	}
	else if (iParam0 == joaat("cargobob2"))
	{
		return 254;
	}
	else if (iParam0 == joaat("rumpo3"))
	{
		return 255;
	}
	else if (iParam0 == joaat("brickade"))
	{
		return 256;
	}
	else if (iParam0 == joaat("nimbus"))
	{
		return 257;
	}
	else if (iParam0 == joaat("windsor2"))
	{
		return 259;
	}
	else if (iParam0 == joaat("prototipo"))
	{
		return 260;
	}
	else if (iParam0 == joaat("fmj"))
	{
		return 261;
	}
	else if (iParam0 == joaat("bestiagts"))
	{
		return 262;
	}
	else if (iParam0 == joaat("xls") || iParam0 == joaat("xls2"))
	{
		return 263;
	}
	else if (iParam0 == joaat("seven70"))
	{
		return 264;
	}
	else if (iParam0 == joaat("pfister811"))
	{
		return 265;
	}
	else if (iParam0 == joaat("reaper"))
	{
		return 266;
	}
	else if (iParam0 == joaat("le7b"))
	{
		return 267;
	}
	else if (iParam0 == joaat("omnis"))
	{
		return 268;
	}
	else if (iParam0 == joaat("tropos"))
	{
		return 269;
	}
	else if (iParam0 == joaat("brioso"))
	{
		return 270;
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		return 271;
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		return 272;
	}
	else if (iParam0 == joaat("contender"))
	{
		return 273;
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		return 274;
	}
	else if (iParam0 == joaat("bf400"))
	{
		return 275;
	}
	else if (iParam0 == joaat("tyrus"))
	{
		return 279;
	}
	else if (iParam0 == joaat("lynx"))
	{
		return 280;
	}
	else if (iParam0 == joaat("sheava"))
	{
		return 281;
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		return 276;
	}
	else if (iParam0 == joaat("tampa2"))
	{
		return 277;
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		return 278;
	}
	else if (iParam0 == joaat("bagger"))
	{
		return 282;
	}
	else if (iParam0 == joaat("esskey"))
	{
		return 283;
	}
	else if (iParam0 == joaat("nightblade"))
	{
		return 284;
	}
	else if (iParam0 == joaat("defiler"))
	{
		return 285;
	}
	else if (iParam0 == joaat("avarus"))
	{
		return 286;
	}
	else if (iParam0 == joaat("zombiea"))
	{
		return 287;
	}
	else if (iParam0 == joaat("zombieb"))
	{
		return 288;
	}
	else if (iParam0 == joaat("chimera"))
	{
		return 289;
	}
	else if (iParam0 == joaat("daemon2"))
	{
		return 290;
	}
	else if (iParam0 == joaat("ratbike"))
	{
		return 291;
	}
	else if (iParam0 == joaat("shotaro"))
	{
		return 292;
	}
	else if (iParam0 == joaat("raptor"))
	{
		return 293;
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		return 294;
	}
	else if (iParam0 == joaat("blazer4"))
	{
		return 296;
	}
	else if (iParam0 == joaat("sanctus"))
	{
		return 297;
	}
	else if (iParam0 == joaat("vortex"))
	{
		return 295;
	}
	else if (iParam0 == joaat("manchez"))
	{
		return 298;
	}
	else if (iParam0 == joaat("tornado6"))
	{
		return 299;
	}
	else if (iParam0 == joaat("youga2"))
	{
		return 300;
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		return 301;
	}
	else if (iParam0 == joaat("faggio3"))
	{
		return 302;
	}
	else if (iParam0 == joaat("faggio"))
	{
		return 303;
	}
	else if (iParam0 == joaat("dune5"))
	{
		return 304;
	}
	else if (iParam0 == joaat("phantom2"))
	{
		return 305;
	}
	else if (iParam0 == joaat("technical2"))
	{
		return 306;
	}
	else if (iParam0 == joaat("blazer5"))
	{
		return 307;
	}
	else if (iParam0 == joaat("boxville5"))
	{
		return 308;
	}
	else if (iParam0 == joaat("wastelander"))
	{
		return 309;
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		return 310;
	}
	else if (iParam0 == joaat("voltic2"))
	{
		return 311;
	}
	else if (iParam0 == joaat("penetrator"))
	{
		return 312;
	}
	else if (iParam0 == joaat("tempesta"))
	{
		return 313;
	}
	else if (iParam0 == joaat("italigtb"))
	{
		return 314;
	}
	else if (iParam0 == joaat("nero"))
	{
		return 315;
	}
	else if (iParam0 == joaat("diablous"))
	{
		return 316;
	}
	else if (iParam0 == joaat("fcr"))
	{
		return 317;
	}
	else if (iParam0 == joaat("specter"))
	{
		return 318;
	}
	else if (iParam0 == joaat("gp1"))
	{
		return 319;
	}
	else if (iParam0 == joaat("infernus2"))
	{
		return 320;
	}
	else if (iParam0 == joaat("ruston"))
	{
		return 321;
	}
	else if (iParam0 == joaat("turismo2"))
	{
		return 322;
	}
	else if (iParam0 == Global_74982)
	{
		return 245;
	}
	else if (iParam0 == Global_74984)
	{
		return 324;
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		return 325;
	}
	else if (iParam0 == joaat("torero"))
	{
		return 326;
	}
	else if (iParam0 == joaat("vagner"))
	{
		return 327;
	}
	else if (iParam0 == joaat("xa21"))
	{
		return 328;
	}
	else if (iParam0 == joaat("apc"))
	{
		return 329;
	}
	else if (iParam0 == joaat("dune3"))
	{
		return 330;
	}
	else if (iParam0 == joaat("halftrack"))
	{
		return 331;
	}
	else if (iParam0 == joaat("oppressor"))
	{
		return 332;
	}
	else if (iParam0 == joaat("tampa3"))
	{
		return 333;
	}
	else if (iParam0 == joaat("trailersmall2"))
	{
		return 334;
	}
	else if (iParam0 == joaat("ardent"))
	{
		return 335;
	}
	else if (iParam0 == joaat("nightshark"))
	{
		return 336;
	}
	else if (iParam0 == joaat("lazer"))
	{
		return 337;
	}
	else if (iParam0 == joaat("microlight"))
	{
		return 338;
	}
	else if (iParam0 == joaat("mogul"))
	{
		return 339;
	}
	else if (iParam0 == joaat("rogue"))
	{
		return 340;
	}
	else if (iParam0 == joaat("starling"))
	{
		return 341;
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		return 342;
	}
	else if (iParam0 == joaat("tula"))
	{
		return 343;
	}
	else if (iParam0 == joaat("pyro"))
	{
		return 344;
	}
	else if (iParam0 == joaat("molotok"))
	{
		return 345;
	}
	else if (iParam0 == joaat("nokota"))
	{
		return 346;
	}
	else if (iParam0 == joaat("bombushka"))
	{
		return 347;
	}
	else if (iParam0 == joaat("hunter"))
	{
		return 348;
	}
	else if (iParam0 == joaat("havok"))
	{
		return 349;
	}
	else if (iParam0 == joaat("howard"))
	{
		return 350;
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		return 351;
	}
	else if (iParam0 == joaat("cyclone"))
	{
		return 352;
	}
	else if (iParam0 == joaat("visione"))
	{
		return 353;
	}
	else if (iParam0 == joaat("retinue"))
	{
		return 354;
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		return 355;
	}
	else if (iParam0 == joaat("vigilante"))
	{
		return 356;
	}
	else if (iParam0 == joaat("deluxo"))
	{
		return 358;
	}
	else if (iParam0 == joaat("stromberg"))
	{
		return 359;
	}
	else if (iParam0 == joaat("riot2"))
	{
		return 360;
	}
	else if (iParam0 == joaat("chernobog"))
	{
		return 361;
	}
	else if (iParam0 == joaat("khanjali"))
	{
		return 362;
	}
	else if (iParam0 == joaat("akula"))
	{
		return 363;
	}
	else if (iParam0 == joaat("thruster"))
	{
		return 364;
	}
	else if (iParam0 == joaat("barrage"))
	{
		return 365;
	}
	else if (iParam0 == joaat("volatol"))
	{
		return 366;
	}
	else if (iParam0 == joaat("comet4"))
	{
		return 367;
	}
	else if (iParam0 == joaat("neon"))
	{
		return 368;
	}
	else if (iParam0 == joaat("streiter"))
	{
		return 369;
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		return 370;
	}
	else if (iParam0 == joaat("yosemite"))
	{
		return 371;
	}
	else if (iParam0 == joaat("sc1"))
	{
		return 372;
	}
	else if (iParam0 == joaat("autarch"))
	{
		return 373;
	}
	else if (iParam0 == joaat("gt500"))
	{
		return 374;
	}
	else if (iParam0 == joaat("hustler"))
	{
		return 375;
	}
	else if (iParam0 == joaat("revolter"))
	{
		return 376;
	}
	else if (iParam0 == joaat("pariah"))
	{
		return 377;
	}
	else if (iParam0 == joaat("raiden"))
	{
		return 378;
	}
	else if (iParam0 == joaat("savestra"))
	{
		return 379;
	}
	else if (iParam0 == joaat("riata"))
	{
		return 380;
	}
	else if (iParam0 == joaat("hermes"))
	{
		return 381;
	}
	else if (iParam0 == joaat("comet5"))
	{
		return 382;
	}
	else if (iParam0 == joaat("z190"))
	{
		return 383;
	}
	else if (iParam0 == joaat("viseris"))
	{
		return 384;
	}
	else if (iParam0 == joaat("kamacho"))
	{
		return 385;
	}
	else if (iParam0 == joaat("gb200"))
	{
		return 386;
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		return 387;
	}
	else if (iParam0 == joaat("ellie"))
	{
		return 388;
	}
	else if (iParam0 == joaat("issi3"))
	{
		return 389;
	}
	else if (iParam0 == joaat("michelli"))
	{
		return 390;
	}
	else if (iParam0 == joaat("flashgt"))
	{
		return 391;
	}
	else if (iParam0 == joaat("hotring"))
	{
		return 392;
	}
	else if (iParam0 == joaat("tezeract"))
	{
		return 393;
	}
	else if (iParam0 == joaat("tyrant"))
	{
		return 394;
	}
	else if (iParam0 == joaat("dominator3"))
	{
		return 395;
	}
	else if (iParam0 == joaat("taipan"))
	{
		return 396;
	}
	else if (iParam0 == joaat("entity2"))
	{
		return 397;
	}
	else if (iParam0 == joaat("jester3"))
	{
		return 398;
	}
	else if (iParam0 == joaat("cheburek"))
	{
		return 399;
	}
	else if (iParam0 == joaat("caracara"))
	{
		return 400;
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		return 401;
	}
	else if (iParam0 == joaat("mule4"))
	{
		return 403;
	}
	else if (iParam0 == joaat("pounder2"))
	{
		return 404;
	}
	else if (iParam0 == joaat("swinger"))
	{
		return 405;
	}
	else if (iParam0 == joaat("menacer"))
	{
		return 406;
	}
	else if (iParam0 == joaat("scramjet"))
	{
		return 407;
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		return 408;
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		return 409;
	}
	else if (iParam0 == joaat("patriot2"))
	{
		return 410;
	}
	else if (iParam0 == joaat("stafford"))
	{
		return 411;
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		return 412;
	}
	else if (iParam0 == joaat("futo"))
	{
		return 415;
	}
	else if (iParam0 == joaat("ruiner"))
	{
		return 416;
	}
	else if (iParam0 == joaat("romero"))
	{
		return 417;
	}
	else if (iParam0 == joaat("prairie"))
	{
		return 418;
	}
	else if (iParam0 == joaat("baller"))
	{
		return 419;
	}
	else if (iParam0 == joaat("serrano"))
	{
		return 420;
	}
	else if (iParam0 == joaat("bjxl"))
	{
		return 421;
	}
	else if (iParam0 == joaat("habanero"))
	{
		return 422;
	}
	else if (iParam0 == joaat("fq2"))
	{
		return 423;
	}
	else if (iParam0 == joaat("patriot"))
	{
		return 424;
	}
	else if (iParam0 == joaat("blimp3"))
	{
		return 413;
	}
	else if (iParam0 == joaat("pbus2"))
	{
		return 414;
	}
	else if (iParam0 == joaat("cerberus"))
	{
		return 425;
	}
	else if (iParam0 == joaat("cerberus2"))
	{
		return 426;
	}
	else if (iParam0 == joaat("cerberus3"))
	{
		return 427;
	}
	else if (iParam0 == joaat("brutus"))
	{
		return 428;
	}
	else if (iParam0 == joaat("brutus2"))
	{
		return 429;
	}
	else if (iParam0 == joaat("brutus3"))
	{
		return 430;
	}
	else if (iParam0 == joaat("scarab"))
	{
		return 431;
	}
	else if (iParam0 == joaat("scarab2"))
	{
		return 432;
	}
	else if (iParam0 == joaat("scarab3"))
	{
		return 433;
	}
	else if (iParam0 == joaat("imperator"))
	{
		return 434;
	}
	else if (iParam0 == joaat("imperator2"))
	{
		return 435;
	}
	else if (iParam0 == joaat("imperator3"))
	{
		return 436;
	}
	else if (iParam0 == joaat("zr380"))
	{
		return 437;
	}
	else if (iParam0 == joaat("zr3802"))
	{
		return 438;
	}
	else if (iParam0 == joaat("zr3803"))
	{
		return 439;
	}
	else if (iParam0 == joaat("impaler"))
	{
		return 440;
	}
	else if (iParam0 == joaat("taxi"))
	{
		return 450;
	}
	else if (iParam0 == joaat("bulldozer"))
	{
		return 451;
	}
	else if (iParam0 == joaat("speedo2"))
	{
		return 452;
	}
	else if (iParam0 == joaat("trash2"))
	{
		return 453;
	}
	else if (iParam0 == joaat("barracks2"))
	{
		return 454;
	}
	else if (iParam0 == joaat("mixer"))
	{
		return 455;
	}
	else if (iParam0 == joaat("dune2"))
	{
		return 456;
	}
	else if (iParam0 == joaat("tractor"))
	{
		return 457;
	}
	else if (iParam0 == joaat("blista3"))
	{
		return 458;
	}
	else if (iParam0 == joaat("vamos"))
	{
		return 441;
	}
	else if (iParam0 == joaat("tulip"))
	{
		return 442;
	}
	else if (iParam0 == joaat("deveste"))
	{
		return 443;
	}
	else if (iParam0 == joaat("schlagen"))
	{
		return 444;
	}
	else if (iParam0 == joaat("toros"))
	{
		return 445;
	}
	else if (iParam0 == joaat("deviant"))
	{
		return 446;
	}
	else if (iParam0 == joaat("clique"))
	{
		return 447;
	}
	else if (iParam0 == joaat("italigto"))
	{
		return 448;
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		return 449;
	}
	else if (iParam0 == joaat("thrax"))
	{
		return 459;
	}
	else if (iParam0 == joaat("drafter"))
	{
		return 460;
	}
	else if (iParam0 == joaat("locust"))
	{
		return 461;
	}
	else if (iParam0 == joaat("novak"))
	{
		return 462;
	}
	else if (iParam0 == joaat("zorrusso"))
	{
		return 463;
	}
	else if (iParam0 == joaat("gauntlet3"))
	{
		return 464;
	}
	else if (iParam0 == joaat("issi7"))
	{
		return 465;
	}
	else if (iParam0 == joaat("zion3"))
	{
		return 466;
	}
	else if (iParam0 == joaat("nebula"))
	{
		return 467;
	}
	else if (iParam0 == joaat("hellion"))
	{
		return 468;
	}
	else if (iParam0 == joaat("dynasty"))
	{
		return 469;
	}
	else if (iParam0 == joaat("rrocket"))
	{
		return 470;
	}
	else if (iParam0 == joaat("peyote2"))
	{
		return 471;
	}
	else if (iParam0 == joaat("gauntlet4"))
	{
		return 472;
	}
	else if (iParam0 == joaat("caracara2"))
	{
		return 473;
	}
	else if (iParam0 == joaat("jugular"))
	{
		return 474;
	}
	else if (iParam0 == joaat("s80"))
	{
		return 475;
	}
	else if (iParam0 == joaat("krieger"))
	{
		return 476;
	}
	else if (iParam0 == joaat("emerus"))
	{
		return 477;
	}
	else if (iParam0 == joaat("neo"))
	{
		return 478;
	}
	else if (iParam0 == joaat("paragon"))
	{
		return 479;
	}
	else if (iParam0 == joaat("firetruk"))
	{
		return 480;
	}
	else if (iParam0 == joaat("burrito2"))
	{
		return 481;
	}
	else if (iParam0 == joaat("boxville"))
	{
		return 482;
	}
	else if (iParam0 == joaat("stockade"))
	{
		return 483;
	}
	else if (iParam0 == joaat("lguard"))
	{
		return 484;
	}
	else if (iParam0 == joaat("blazer2"))
	{
		return 485;
	}
	else if (iParam0 == joaat("jb7002"))
	{
		return 488;
	}
	else if (iParam0 == joaat("zhaba"))
	{
		return 486;
	}
	else if (iParam0 == joaat("minitank"))
	{
		return 487;
	}
	else if (iParam0 == joaat("stryder"))
	{
		return 489;
	}
	else if (iParam0 == joaat("vstr"))
	{
		return 490;
	}
	else if (iParam0 == joaat("formula"))
	{
		return 491;
	}
	else if (iParam0 == joaat("imorgon"))
	{
		return 492;
	}
	else if (iParam0 == joaat("formula2"))
	{
		return 493;
	}
	else if (iParam0 == joaat("furia"))
	{
		return 494;
	}
	else if (iParam0 == joaat("rebla"))
	{
		return 495;
	}
	else if (iParam0 == joaat("vagrant"))
	{
		return 496;
	}
	else if (iParam0 == joaat("retinue2"))
	{
		return 497;
	}
	else if (iParam0 == joaat("yosemite2"))
	{
		return 498;
	}
	else if (iParam0 == joaat("komoda"))
	{
		return 499;
	}
	else if (iParam0 == joaat("sultan2"))
	{
		return 500;
	}
	else if (iParam0 == joaat("sugoi"))
	{
		return 501;
	}
	else if (iParam0 == joaat("everon"))
	{
		return 502;
	}
	else if (iParam0 == joaat("asbo"))
	{
		return 503;
	}
	else if (iParam0 == joaat("kanjo"))
	{
		return 504;
	}
	else if (iParam0 == joaat("outlaw"))
	{
		return 505;
	}
	else if (iParam0 == joaat("club"))
	{
		return 506;
	}
	else if (iParam0 == joaat("dukes3"))
	{
		return 507;
	}
	else if (iParam0 == joaat("yosemite3"))
	{
		return 508;
	}
	else if (iParam0 == joaat("penumbra2"))
	{
		return 509;
	}
	else if (iParam0 == joaat("landstalker2"))
	{
		return 510;
	}
	else if (iParam0 == joaat("seminole2"))
	{
		return 511;
	}
	else if (iParam0 == joaat("tigon"))
	{
		return 512;
	}
	else if (iParam0 == joaat("openwheel1"))
	{
		return 513;
	}
	else if (iParam0 == joaat("openwheel2"))
	{
		return 514;
	}
	else if (iParam0 == joaat("coquette4"))
	{
		return 515;
	}
	else if (iParam0 == joaat("peyote"))
	{
		return 517;
	}
	else if (iParam0 == joaat("manana"))
	{
		return 516;
	}
	else if (iParam0 == func_394())
	{
		return 518;
	}
	else if (iParam0 == joaat("italirsx"))
	{
		return 519;
	}
	else if (iParam0 == joaat("slamtruck"))
	{
		return 520;
	}
	else if (iParam0 == joaat("brioso2"))
	{
		return 521;
	}
	else if (iParam0 == joaat("weevil"))
	{
		return 522;
	}
	else if (iParam0 == joaat("alkonost"))
	{
		return 523;
	}
	else if (iParam0 == joaat("annihilator2"))
	{
		return 524;
	}
	else if (iParam0 == joaat("dinghy5"))
	{
		return 525;
	}
	else if (iParam0 == joaat("manchez2"))
	{
		return 526;
	}
	else if (iParam0 == joaat("patrolboat"))
	{
		return 527;
	}
	else if (iParam0 == joaat("squaddie"))
	{
		return 528;
	}
	else if (iParam0 == joaat("toreador"))
	{
		return 529;
	}
	else if (iParam0 == joaat("verus"))
	{
		return 530;
	}
	else if (iParam0 == joaat("vetir"))
	{
		return 531;
	}
	else if (iParam0 == joaat("winky"))
	{
		return 532;
	}
	else if (iParam0 == joaat("longfin"))
	{
		return 533;
	}
	else if (iParam0 == joaat("veto"))
	{
		return 534;
	}
	else if (iParam0 == joaat("veto2"))
	{
		return 535;
	}
	else if (iParam0 == joaat("calico"))
	{
		return 536;
	}
	else if (iParam0 == joaat("comet6"))
	{
		return 537;
	}
	else if (iParam0 == joaat("cypher"))
	{
		return 538;
	}
	else if (iParam0 == joaat("dominator7"))
	{
		return 539;
	}
	else if (iParam0 == joaat("jester4"))
	{
		return 540;
	}
	else if (iParam0 == joaat("remus"))
	{
		return 541;
	}
	else if (iParam0 == joaat("vectre"))
	{
		return 542;
	}
	else if (iParam0 == joaat("zr350"))
	{
		return 543;
	}
	else if (iParam0 == joaat("warrener2"))
	{
		return 544;
	}
	else if (iParam0 == joaat("rt3000"))
	{
		return 545;
	}
	else if (iParam0 == joaat("futo2"))
	{
		return 546;
	}
	else if (iParam0 == joaat("sultan3"))
	{
		return 547;
	}
	else if (iParam0 == joaat("tailgater2"))
	{
		return 548;
	}
	else if (iParam0 == joaat("dominator8"))
	{
		return 549;
	}
	else if (iParam0 == joaat("euros"))
	{
		return 550;
	}
	else if (iParam0 == joaat("growler"))
	{
		return 551;
	}
	else if (iParam0 == joaat("previon"))
	{
		return 552;
	}
	return -1;
}

int func_696(int iParam0)
{
	if (func_362(iParam0))
	{
		return 1;
	}
	if ((((((((((((((((((((iParam0 == joaat("blazer5") || iParam0 == joaat("boxville5")) || iParam0 == joaat("dune5")) || iParam0 == joaat("phantom2")) || iParam0 == joaat("ruiner2")) || iParam0 == joaat("technical2")) || iParam0 == joaat("voltic2")) || iParam0 == joaat("wastelander")) || iParam0 == joaat("trailersmall2")) || iParam0 == joaat("technical3")) || iParam0 == joaat("insurgent3")) || iParam0 == joaat("khanjali")) || iParam0 == joaat("chernobog")) || iParam0 == joaat("riot2")) || iParam0 == joaat("thruster")) || iParam0 == joaat("stromberg")) || iParam0 == joaat("deluxo")) || iParam0 == joaat("speedo4")) || iParam0 == joaat("mule4")) || iParam0 == joaat("pounder2")) || iParam0 == joaat("oppressor2"))
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("airbus"):
		case joaat("airtug"):
		case joaat("ambulance"):
		case joaat("annihilator"):
		case joaat("armytanker"):
		case joaat("armytrailer"):
		case joaat("asea2"):
		case joaat("baletrailer"):
		case joaat("barracks"):
		case joaat("barracks2"):
		case joaat("barracks3"):
		case joaat("benson"):
		case joaat("besra"):
		case joaat("biff"):
		case joaat("blimp"):
		case joaat("blimp2"):
		case joaat("boattrailer"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("boxville4"):
		case joaat("bulldozer"):
		case joaat("burrito"):
		case joaat("burrito3"):
		case joaat("burrito4"):
		case joaat("burrito5"):
		case joaat("bus"):
		case joaat("buzzard"):
		case joaat("buzzard2"):
		case joaat("caddy"):
		case joaat("caddy2"):
		case joaat("camper"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("cargobob3"):
		case joaat("cargoplane"):
		case joaat("coach"):
		case joaat("crusader"):
		case joaat("cuban800"):
		case joaat("cutter"):
		case joaat("dilettante2"):
		case joaat("dinghy"):
		case joaat("dinghy2"):
		case joaat("dinghy3"):
		case joaat("docktrailer"):
		case joaat("docktug"):
		case joaat("dodo"):
		case joaat("dump"):
		case joaat("dune2"):
		case joaat("duster"):
		case joaat("emperor3"):
		case joaat("fbi"):
		case joaat("fbi2"):
		case joaat("firetruk"):
		case joaat("fixter"):
		case joaat("flatbed"):
		case joaat("forklift"):
		case joaat("freight"):
		case joaat("freightcar"):
		case joaat("freightcont1"):
		case joaat("freightcont2"):
		case joaat("freightgrain"):
		case joaat("frogger"):
		case joaat("frogger2"):
		case joaat("gburrito"):
		case joaat("graintrailer"):
		case joaat("handler"):
		case joaat("hauler"):
		case joaat("hydra"):
		case joaat("insurgent"):
		case joaat("jet"):
		case joaat("jetmax"):
		case joaat("journey"):
		case joaat("lazer"):
		case joaat("limo2"):
		case joaat("luxor"):
		case joaat("luxor2"):
		case joaat("mammatus"):
		case joaat("marshall"):
		case joaat("marquis"):
		case joaat("maverick"):
		case joaat("mesa2"):
		case joaat("metrotrain"):
		case joaat("monster"):
		case joaat("miljet"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("mower"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("mule3"):
		case joaat("packer"):
		case joaat("pbus"):
		case joaat("phantom"):
		case joaat("police"):
		case joaat("policeb"):
		case joaat("policet"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("polmav"):
		case joaat("pony"):
		case joaat("pony2"):
		case joaat("pounder"):
		case joaat("pranger"):
		case joaat("predator"):
		case joaat("proptrailer"):
		case joaat("raketrailer"):
		case joaat("rancherxl2"):
		case joaat("rentalbus"):
		case joaat("rhino"):
		case joaat("riot"):
		case joaat("ripley"):
		case joaat("rubble"):
		case joaat("rumpo2"):
		case joaat("sadler2"):
		case joaat("savage"):
		case joaat("scrap"):
		case joaat("seashark"):
		case joaat("seashark2"):
		case joaat("shamal"):
		case joaat("sheriff"):
		case joaat("sheriff2"):
		case joaat("skylift"):
		case joaat("speeder"):
		case joaat("speedo2"):
		case joaat("squalo"):
		case joaat("stockade"):
		case joaat("stockade3"):
		case joaat("stretch"):
		case joaat("stunt"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("suntrap"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("taco"):
		case joaat("tanker"):
		case joaat("tanker2"):
		case joaat("tankercar"):
		case joaat("taxi"):
		case joaat("technical"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("tiptruck"):
		case joaat("tiptruck2"):
		case joaat("titan"):
		case joaat("toro"):
		case joaat("tourbus"):
		case joaat("tr2"):
		case joaat("tr3"):
		case joaat("tr4"):
		case joaat("tractor"):
		case joaat("tractor2"):
		case joaat("tractor3"):
		case joaat("trailerlogs"):
		case joaat("trailers"):
		case joaat("trailers2"):
		case joaat("trailers3"):
		case joaat("trailersmall"):
		case joaat("trash"):
		case joaat("trash2"):
		case joaat("trflat"):
		case joaat("tropic"):
		case joaat("tvtrailer"):
		case joaat("utillitruck"):
		case joaat("utillitruck2"):
		case joaat("utillitruck3"):
		case joaat("valkyrie"):
		case joaat("velum"):
		case joaat("velum2"):
		case joaat("vestra"):
		case joaat("cargobob4"):
		case joaat("dinghy4"):
		case joaat("seashark3"):
		case joaat("speeder2"):
		case joaat("toro2"):
		case joaat("tropic2"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("valkyrie2"):
		case joaat("dune4"):
		case joaat("ruiner3"):
		case joaat("brickade"):
		case joaat("hauler2"):
		case joaat("phantom3"):
		case joaat("vetir"):
		case joaat("longfin"):
		case joaat("patrolboat"):
		case 1343932732:
			return 0;
			break;
	}
	if (((!unk_0xCB09A834F0C86FBB(iParam0) && !unk_0x6F0299ED3CEB4E5D(iParam0)) && !unk_0xCD8C08FA7D84C27E(iParam0)) && !unk_0x532C99FAF70C652B(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_697(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("dodo");
		
		case 1:
			return joaat("turismor");
		
		case 2:
			return joaat("toros");
		
		case 3:
			return joaat("monroe");
		
		case 4:
			return joaat("velum");
		
		case 5:
			return joaat("furoregt");
		
		case 6:
			return joaat("infernus");
		
		case 7:
			return joaat("infernus2");
		
		case 8:
			return joaat("ruston");
		
		case 9:
			return joaat("marquis");
		
		case 10:
			return joaat("defiler");
		
		case 11:
			return joaat("pigalle");
		
		case 12:
			return joaat("massacro2");
		
		case 13:
			return joaat("tornado6");
		
		case 14:
			return joaat("tampa");
		
		case 15:
			return joaat("issi3");
		
		case 16:
			return joaat("jb700");
		
		case 17:
			return joaat("jester2");
		
		case 18:
			return joaat("kamacho");
		
		case 19:
			return joaat("fagaloa");
		
		case 20:
			return joaat("impaler");
		
		case 21:
			return joaat("dominator2");
		
		case 22:
			return joaat("mammatus");
		
		case 23:
			return joaat("jetmax");
		
		case 24:
			return joaat("stalion2");
		
		case 25:
			return joaat("massacro");
		
		case 26:
			return joaat("esskey");
		
		case 27:
			return joaat("cognoscenti");
		
		case 28:
			return joaat("xls");
		
		case 29:
			return joaat("superd");
		
		case 30:
			return joaat("stunt");
		
		case 31:
			return joaat("cuban800");
		
		case 32:
			return joaat("vacca");
		
		case 33:
			return joaat("jester");
		
		case 34:
			return joaat("gauntlet2");
		
		case 35:
			return joaat("exemplar");
		
		case 36:
			return joaat("slamvan2");
		
		case 37:
			return joaat("glendale");
		
		case 38:
			return joaat("squalo");
		
		case 39:
			return joaat("carbonizzare");
		
		case 40:
			return joaat("virgo");
		
		case 41:
			return joaat("cogcabrio");
		
		case 42:
			return joaat("dinghy3");
		
		case 43:
			return joaat("blade");
		
		case 44:
			return joaat("bullet");
		
		case 45:
			return joaat("brioso");
		
		case 46:
			return joaat("voltic");
		
		case 47:
			return joaat("voltic2");
		
		case 48:
			return joaat("alpha");
		
		case 49:
			return joaat("feltzer2");
		
		case 50:
			return joaat("cheburek");
		
		case 51:
			return joaat("rapidgt2");
		
		case 52:
			return joaat("rhapsody");
		
		case 53:
			return joaat("coquette");
		
		case 54:
			return joaat("coquette2");
		
		case 55:
			return joaat("rapidgt");
		
		case 56:
			return joaat("ninef2");
		
		case 57:
			return joaat("kuruma");
		
		case 58:
			return joaat("ninef");
		
		case 59:
			return joaat("schafter3");
		
		case 60:
			return joaat("surano");
		
		case 61:
			return joaat("banshee");
		
		case 62:
			return joaat("khamelion");
		
		case 63:
			return joaat("nightblade");
		
		case 64:
			return joaat("chino");
		
		case 65:
			return joaat("diablous");
		
		case 66:
			return joaat("virgo3");
		
		case 67:
			return joaat("fcr");
		
		case 68:
			return joaat("comet2");
		
		case 69:
			return joaat("zombiea");
		
		case 70:
			return joaat("felon2");
		
		case 71:
			return joaat("bf400");
		
		case 72:
			return joaat("felon");
		
		case 73:
			return joaat("baller2");
		
		case 74:
			return joaat("hotknife");
		
		case 75:
			return joaat("mesa3");
		
		case 76:
			return joaat("panto");
		
		case 77:
			return joaat("hakuchou");
		
		case 78:
			return joaat("blazer4");
		
		case joaat("mpsv_lp0_31"):
			return joaat("f620");
		
		case 80:
			return joaat("oracle2");
		
		case 81:
			return joaat("bifta");
		
		case 82:
			return joaat("stalion");
		
		case 83:
			return joaat("blazer3");
		
		case 84:
			return joaat("manchez");
		
		case 85:
			return joaat("schafter2");
		
		case 86:
			return joaat("zion2");
		
		case 87:
			return joaat("dukes");
		
		case 88:
			return joaat("jackal");
		
		case 89:
			return joaat("serrano");
		
		case 90:
			return joaat("patriot");
		
		case 91:
			return joaat("fq2");
		
		case 92:
			return joaat("slamvan");
		
		case 93:
			return joaat("enduro");
		
		case 94:
			return joaat("faggio");
		
		case 95:
			return joaat("blista2");
		
		case 96:
			return joaat("carbonrs");
		
		case 97:
			return joaat("kalahari");
		
		case 98:
			return joaat("ratloader2");
		
		case 99:
			return joaat("faction");
		
		case 100:
			return joaat("buffalo");
		
		case 101:
			return joaat("dominator");
		
		case 102:
			return joaat("moonbeam");
		
		case 103:
			return joaat("gauntlet");
		
		case 104:
			return joaat("tornado");
		
		case 105:
			return joaat("buccaneer");
		
		case 106:
			return joaat("prairie");
		
		case 107:
			return joaat("penumbra");
		
		case 108:
			return joaat("fugitive");
		
		case 109:
			return joaat("issi2");
		
		case 110:
			return joaat("seashark");
		
		case 111:
			return joaat("intruder");
		
		case 112:
			return joaat("bagger");
		
		case 113:
			return joaat("bfinjection");
		
		case 114:
			return joaat("hexer");
		
		case 115:
			return joaat("washington");
		
		case 116:
			return joaat("bati");
		
		case 117:
			return joaat("bati2");
		
		case 118:
			return joaat("sabregt");
		
		case 119:
			return joaat("sultan");
		
		case 120:
			return joaat("nemesis");
		
		case 121:
			return joaat("double");
		
		case 122:
			return joaat("tribike");
		
		case 123:
			return joaat("tribike2");
		
		case 124:
			return joaat("tribike3");
		
		case 125:
			return joaat("ruffian");
		
		case 126:
			return joaat("ruiner");
		
		case 127:
			return joaat("picador");
		
		case 128:
			return joaat("akuma");
		
		case 129:
			return joaat("pcj");
		
		case 130:
			return joaat("primo");
		
		case 131:
			return joaat("futo");
		
		case 132:
			return joaat("blazer");
		
		case 133:
			return joaat("sanchez2");
		
		case 134:
			return joaat("sanchez");
		
		case 135:
			return joaat("voodoo2");
		
		case 136:
			return joaat("faggio2");
		
		case 137:
			return joaat("scorcher");
		
		case 138:
			return joaat("cruiser");
		
		case 139:
			return joaat("bmx");
		
		case 140:
			return joaat("minivan");
		
		default:
	}
	return 0;
}

int func_698()
{
	int iVar0[141];
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 141)
	{
		iVar0[iVar2] = iVar2;
		iVar1 = (iVar1 + func_699(iVar0[iVar2]));
		iVar2++;
	}
	iVar3 = unk_0x95F3C8DAE5A0339C(0, iVar1);
	iVar2 = 0;
	while (iVar2 < 141)
	{
		if (iVar3 <= func_699(iVar0[iVar2]))
		{
			return iVar0[iVar2];
		}
		else
		{
			iVar3 = (iVar3 - func_699(iVar0[iVar2]));
		}
		iVar2++;
	}
	return -1;
}

int func_699(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (func_700(joaat("dodo"), 0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26511;
			}
			break;
		
		case 1:
		case 2:
		case 3:
			return Global_262145.f_26511;
			break;
		
		case 4:
			if (func_700(joaat("velum"), 0))
			{
				return 0;
			}
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
			return Global_262145.f_26511;
			break;
		
		case 9:
			if (func_700(joaat("marquis"), 0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26511;
			}
			break;
		
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
			return Global_262145.f_26511;
			break;
		
		case 22:
			if (func_700(joaat("mammatus"), 0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26511;
			}
			break;
		
		case 23:
			if (func_700(joaat("jetmax"), 0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26511;
			}
			break;
		
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
			return Global_262145.f_26511;
			break;
		
		case 30:
			if (func_700(joaat("stunt"), 0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26511;
			}
			break;
		
		case 31:
			if (func_700(joaat("cuban800"), 0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26511;
			}
			break;
		
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
			return Global_262145.f_26511;
			break;
		
		case 37:
			return Global_262145.f_26512;
			break;
		
		case 38:
			if (func_700(joaat("squalo"), 0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26512;
			}
			break;
		
		case 39:
		case 40:
		case 41:
			return Global_262145.f_26512;
			break;
		
		case 42:
			if (func_700(joaat("squalo"), 0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26512;
			}
			break;
		
		case 43:
		case 44:
		case 45:
			return Global_262145.f_26512;
			break;
		
		case 46:
			return Global_262145.f_26513;
			break;
		
		case 47:
			if (func_538(joaat("voltic2"), -1))
			{
				return Global_262145.f_26513;
			}
			else
			{
				return 0;
			}
			break;
		
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
		case 60:
		case 61:
		case 62:
		case 63:
			return Global_262145.f_26512;
			break;
		
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
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
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
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
			return Global_262145.f_26513;
			break;
		
		case 110:
			if (func_700(joaat("seashark"), 0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26513;
			}
			break;
		
		case 111:
		case 112:
		case 113:
		case 114:
		case 115:
		case 116:
		case 117:
		case 118:
		case 119:
		case 120:
		case 121:
			return Global_262145.f_26513;
			break;
		
		case 122:
			if (func_538(joaat("tribike"), -1))
			{
				return Global_262145.f_26513;
			}
			else
			{
				return 0;
			}
			break;
		
		case 123:
			if (func_538(joaat("tribike2"), -1))
			{
				return Global_262145.f_26513;
			}
			else
			{
				return 0;
			}
			break;
		
		case 124:
			if (func_538(joaat("tribike3"), -1))
			{
				return Global_262145.f_26513;
			}
			else
			{
				return 0;
			}
			break;
		
		case 125:
		case 126:
		case 127:
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
			return Global_262145.f_26513;
			break;
		
		case 137:
			if (func_538(joaat("scorcher"), -1))
			{
				return Global_262145.f_26513;
			}
			else
			{
				return 0;
			}
			break;
		
		case 138:
			if (func_538(joaat("cruiser"), -1))
			{
				return Global_262145.f_26513;
			}
			else
			{
				return 0;
			}
			break;
		
		case 139:
			if (func_538(joaat("bmx"), -1))
			{
				return Global_262145.f_26513;
			}
			else
			{
				return 0;
			}
			break;
		
		case 140:
			return Global_262145.f_26513;
			break;
	}
	return 0;
}

int func_700(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_695(iParam0);
	iVar1 = func_652(iVar0, iParam1);
	if (iVar1 != -1)
	{
		return func_649(iVar1);
	}
	return 0;
}

int func_701()
{
	int iVar0[7];
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 7)
	{
		iVar0[iVar2] = iVar2;
		iVar1 = (iVar1 + func_702(iVar0[iVar2]));
		iVar2++;
	}
	iVar3 = unk_0x95F3C8DAE5A0339C(0, iVar1);
	iVar2 = 0;
	while (iVar2 < 7)
	{
		if (iVar3 <= func_702(iVar0[iVar2]))
		{
			return iVar0[iVar2];
		}
		else
		{
			iVar3 = (iVar3 - func_702(iVar0[iVar2]));
		}
		iVar2++;
	}
	return -1;
}

int func_702(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_26504;
		
		case 1:
			return Global_262145.f_26505;
		
		case 2:
			return Global_262145.f_26506;
		
		case 3:
			return Global_262145.f_26507;
		
		case 4:
			return Global_262145.f_26508;
		
		case 5:
			return Global_262145.f_26509;
		
		case 6:
			return Global_262145.f_26510;
		
		default:
	}
	return 0;
}

int func_703(var uParam0, char* sParam1, var uParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (iParam3 != -1 && bParam4)
	{
	}
	if (iParam3 != -1 && !bParam4)
	{
		iVar0 = func_732(iParam3);
	}
	else if (iParam3 == -1)
	{
		iVar1 = func_730();
		iVar0 = func_729(iVar1);
	}
	if (iVar0 > 0)
	{
		if (bParam4)
		{
			StringCopy(sParam1, func_728(), 64);
		}
		if (func_704(iVar0, 3, uParam2, 4, -1))
		{
			*uParam0 = iVar0;
			return 1;
		}
	}
	return 0;
}

int func_704(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<7> Var5;
	
	if (iParam0 <= 0)
	{
	}
	else if (!func_727(iParam1))
	{
	}
	else
	{
		iVar0 = func_160();
		iVar1 = (Global_262145.f_26834 - iVar0);
		iVar2 = 0;
		if (iParam1 == 0)
		{
			iVar3 = func_725();
			if (iVar1 > iVar3)
			{
				iVar1 = iVar3;
			}
		}
		if (iParam0 > iVar1)
		{
			iVar2 = (iVar1 + iVar0);
		}
		else
		{
			iVar2 = (iParam0 + iVar0);
		}
		if (func_724(uParam2, iParam1, (iVar2 - iVar0)))
		{
			iVar4 = (func_160() - Global_1966290);
			func_723(iVar4, 1);
			func_721();
			func_719();
			Global_1966290 = (Global_1966290 + iVar4);
			if (iParam1 == 0)
			{
				func_713(iVar4);
				Global_2725175 = 1;
			}
			else if (iParam1 == 3)
			{
				func_708(iVar4);
				if (iVar4 >= Global_262145.f_26842)
				{
					Global_2725174 = 1;
				}
				else if (iVar4 >= Global_262145.f_26841)
				{
					Global_2725175 = 1;
				}
			}
			Var5 = func_707(iParam1);
			Var5.f_1 = func_706(iParam1, iParam3, iParam4);
			if (func_705(iParam1))
			{
				Var5.f_2 = iVar4;
			}
			else
			{
				Var5.f_2 = 0;
			}
			Var5.f_3 = iVar4;
			Var5.f_4 = iParam1;
			Var5.f_5 = (unk_0xEEE6DAFBF451B942(-1) + unk_0xA257ACF32A90B705());
			Var5.f_6 = Global_1966290;
			unk_0x40B7BAFAE68B3B4B(&Var5);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_705(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 10:
			return 1;
			break;
	}
	return 0;
}

int func_706(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 0:
				if (iParam2 > -1)
				{
					iVar0 = (19 + iParam2);
				}
				else
				{
					iVar0 = 19;
				}
				break;
			
			case 1:
				iVar0 = 21;
				break;
			
			case 4:
				iVar0 = 22;
				break;
			
			case 5:
				iVar0 = 23;
				break;
			
			case 6:
				iVar0 = 24;
				break;
			
			case 7:
				iVar0 = 25;
				break;
			
			case 9:
				iVar0 = 26;
				break;
			
			case 10:
				if (iParam2 > -1)
				{
					iVar0 = (27 + iParam2);
				}
				else
				{
					iVar0 = 27;
				}
				break;
			
			case 11:
				iVar0 = 29;
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				if (iParam0 == 2)
				{
					iVar0 = 1;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 2;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 3;
				}
				break;
			
			case 1:
				if (iParam0 == 2)
				{
					iVar0 = 4;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 5;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 6;
				}
				break;
			
			case 2:
				if (iParam0 == 2)
				{
					iVar0 = 7;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 8;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 9;
				}
				break;
			
			case 3:
				if (iParam0 == 2)
				{
					iVar0 = 10;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 11;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 12;
				}
				break;
			
			case 4:
				if (iParam0 == 2)
				{
					iVar0 = 13;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 14;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 15;
				}
				break;
			
			case 5:
				if (iParam0 == 2)
				{
					iVar0 = 16;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 17;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 18;
				}
				break;
			}
	}
	return iVar0;
}

int func_707(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = -2043662707;
			break;
		
		case 1:
			iVar0 = -1612659516;
			break;
		
		case 2:
			iVar0 = -1304782539;
			break;
		
		case 3:
			iVar0 = 1196301501;
			break;
		
		case 4:
			iVar0 = -1964607937;
			break;
		
		case 5:
			iVar0 = -2125268726;
			break;
		
		case 6:
			iVar0 = 1138851024;
			break;
		
		case 11:
			iVar0 = 1138851024;
			break;
		
		case 7:
			iVar0 = 1848798713;
			break;
		
		case 8:
			iVar0 = 1196301501;
			break;
		
		case 9:
			iVar0 = -1297103179;
			break;
		
		case 10:
			iVar0 = 1754365518;
			break;
	}
	return iVar0;
}

void func_708(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_712();
	iVar1 = unk_0x48352343BC5A41AE();
	iVar2 = func_711();
	if (iVar0 == 0)
	{
		func_710();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_26836)
	{
		func_709();
		iVar2 = 0;
	}
	if ((iParam0 + iVar2) >= Global_262145.f_26838)
	{
		func_138(joaat("mpply_casino_chips_won_gd"), Global_262145.f_26838);
		func_709();
		Global_2725175 = 1;
	}
	else
	{
		func_138(joaat("mpply_casino_chips_won_gd"), (iVar2 + iParam0));
	}
}

void func_709()
{
	func_710();
}

void func_710()
{
	func_138(joaat("mpply_casino_chips_wontim"), unk_0x48352343BC5A41AE());
}

int func_711()
{
	return func_24(joaat("mpply_casino_chips_won_gd"));
}

int func_712()
{
	return func_24(joaat("mpply_casino_chips_wontim"));
}

void func_713(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_718();
	iVar1 = unk_0x48352343BC5A41AE();
	iVar2 = func_717();
	if (iVar0 == 0)
	{
		func_716();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_26835)
	{
		func_715();
		iVar2 = 0;
	}
	if (iParam0 + iVar2) > func_714()
	{
		func_138(joaat("mpply_casino_chips_pur_gd"), func_714());
		func_715();
	}
	else
	{
		func_138(joaat("mpply_casino_chips_pur_gd"), (iVar2 + iParam0));
	}
}

int func_714()
{
	if (func_166(unk_0x9E2D6C50374FCFA9()))
	{
		return Global_262145.f_26630;
	}
	return Global_262145.f_26629;
}

void func_715()
{
	func_716();
}

void func_716()
{
	func_138(joaat("mpply_casino_chips_purtim"), unk_0x48352343BC5A41AE());
}

int func_717()
{
	return func_24(joaat("mpply_casino_chips_pur_gd"));
}

int func_718()
{
	return func_24(joaat("mpply_casino_chips_purtim"));
}

void func_719()
{
	if (unk_0xE2D0C323A1AE5D85(Global_1966363, 6))
	{
		unk_0xCED9E32812D6C7C7(&Global_1966363, 9);
		func_720(&Global_1966366, 0, 0);
	}
}

void func_720(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x9315DBF7D972F07A() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x0A89FDFA763DCAED();
		}
		else
		{
			*uParam0 = unk_0xE75390F3CA208D5E();
		}
	}
	else
	{
		*uParam0 = unk_0x320D1840B6DAA1CC();
	}
	uParam0->f_1 = 1;
}

void func_721()
{
	if (func_722())
	{
		unk_0xCED9E32812D6C7C7(&Global_1966363, 1);
	}
}

bool func_722()
{
	return (unk_0xE2D0C323A1AE5D85(Global_1966363, 6) || unk_0xE2D0C323A1AE5D85(Global_1966363, 5));
}

void func_723(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	unk_0xCED9E32812D6C7C7(&Global_1966363, 6);
	Global_1966364 = iParam0;
	Global_1966365 = iParam1;
}

bool func_724(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = iParam2;
	iVar1 = 1;
	bVar2 = func_705(iParam1);
	if (!bVar2)
	{
		iVar0 = 0;
		iVar1 = 0;
	}
	if (*uParam0 == 3 || *uParam0 == 2)
	{
		*uParam0 = 0;
	}
	if (func_111())
	{
		if (*uParam0 == 0)
		{
			if (func_112() != -1)
			{
				return 0;
			}
			iVar3 = 657241867;
			iVar4 = func_707(iParam1);
			iVar5 = -22148635;
			if (func_727(iParam1))
			{
				iVar5 = -126744038;
			}
			if (func_147(78225582, 1950528552, iVar3, iVar5, iParam2, iVar1, 0, 4, 0, 3))
			{
				if (func_147(78225582, 1845931212, iVar4, iVar5, 1, 0, 0, 4, 0, 3))
				{
					if (func_142())
					{
						*uParam0 = 1;
					}
					else
					{
						*uParam0 = 3;
					}
				}
				else
				{
					*uParam0 = 3;
				}
			}
			else
			{
				*uParam0 = 3;
			}
		}
		else if (*uParam0 == 1)
		{
			if (func_141(func_112()))
			{
				if (func_140(func_112()) == 2)
				{
					unk_0xCDE1C8CEF9603C08(func_113(func_112()));
					if (func_727(iParam1))
					{
						unk_0xD3FFCBEE9841C8F1(iVar0, iParam2);
					}
					else
					{
						unk_0xF746375EF933064E(iVar0, iParam2);
					}
					*uParam0 = 2;
				}
				else
				{
					*uParam0 = 3;
				}
				func_107(func_112());
			}
		}
	}
	else if (iVar0 > 0 || unk_0x616226219F841621(iVar0, 0, 1, 0, -1, 0))
	{
		if (func_727(iParam1))
		{
			unk_0xD3FFCBEE9841C8F1(iVar0, iParam2);
		}
		else
		{
			unk_0xF746375EF933064E(iVar0, iParam2);
		}
		*uParam0 = 2;
	}
	else
	{
		*uParam0 = 3;
	}
	return *uParam0 != 1;
}

int func_725()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (func_714() - func_717());
	iVar1 = (Global_262145.f_26834 - func_160());
	iVar2 = func_726();
	if (iVar0 > iVar1)
	{
		iVar0 = iVar1;
	}
	if (iVar0 > iVar2)
	{
		iVar0 = iVar2;
	}
	return iVar0;
}

int func_726()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_714();
	if (iVar0 <= 0)
	{
		return 0;
	}
	if (unk_0x5D4AF7E88039C9FA())
	{
		if (unk_0x616226219F841621(iVar0, 0, 1, 0, -1, 0))
		{
			iVar1 = iVar0;
		}
		else
		{
			iVar1 = (unk_0xA257ACF32A90B705() + unk_0xEEE6DAFBF451B942(-1));
		}
	}
	else if (unk_0x616226219F841621(iVar0, 0, 1, 0, -1, 1))
	{
		iVar1 = iVar0;
	}
	else
	{
		iVar1 = unk_0x3543F80EAC8D303C();
	}
	return iVar1;
}

int func_727(int iParam0)
{
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 10)
	{
		return 0;
	}
	return 1;
}

char* func_728()
{
	return "CAS_LW_MCI1";
}

int func_729(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_26856;
		
		case 1:
			return Global_262145.f_26857;
		
		case 2:
			return Global_262145.f_26854;
		
		case 3:
			return Global_262145.f_26855;
		
		case 4:
			return Global_262145.f_26852;
		
		case 5:
			return Global_262145.f_26853;
		
		default:
	}
	return 0;
}

int func_730()
{
	int iVar0[6];
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		iVar0[iVar2] = iVar2;
		iVar1 = (iVar1 + func_731(iVar0[iVar2]));
		iVar2++;
	}
	iVar3 = unk_0x95F3C8DAE5A0339C(0, iVar1);
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (iVar3 <= func_731(iVar0[iVar2]))
		{
			return iVar0[iVar2];
		}
		else
		{
			iVar3 = (iVar3 - func_731(iVar0[iVar2]));
		}
		iVar2++;
	}
	return -1;
}

int func_731(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_26513;
		
		case 1:
			return Global_262145.f_26513;
		
		case 2:
			return Global_262145.f_26512;
		
		case 3:
			return Global_262145.f_26512;
		
		case 4:
			return Global_262145.f_26511;
		
		case 5:
			return Global_262145.f_26511;
		
		default:
	}
	return 0;
}

int func_732(int iParam0)
{
	switch (iParam0)
	{
		case 13:
			return 10000;
		
		case 14:
			return 15000;
		
		case 15:
			return 20000;
		
		case 16:
			return 25000;
		
		default:
	}
	return 0;
}

int func_733(var uParam0, char* sParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam2 != -1 && bParam3)
	{
	}
	if (iParam2 != -1 && !bParam3)
	{
		iVar0 = func_745(iParam2);
	}
	else if (iParam2 == -1)
	{
		iVar1 = func_743();
		iVar0 = func_742(iVar1);
	}
	if (iVar0 > 0)
	{
		if (func_111())
		{
			func_738(1261538664, iVar0, &uVar2, 0, 0, 0);
			if (bParam3)
			{
				StringCopy(sParam1, func_737(), 64);
			}
			*uParam0 = iVar0;
			return 1;
		}
		else
		{
			func_734(iVar0, 0);
			unk_0xBF70E41A3DC416CD(iVar0, 707098906);
			if (bParam3)
			{
				StringCopy(sParam1, func_737(), 64);
			}
			*uParam0 = iVar0;
			return 1;
		}
	}
	return 0;
}

void func_734(int iParam0, int iParam1)
{
	func_736(iParam0, 1, 1, 0);
	if (iParam1 == 1)
	{
		func_735(iParam0, 0);
	}
}

void func_735(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_736(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = floor((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_205.f_4 = iVar1;
	Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_205.f_3 = (Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_205.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_735(iVar1, 0);
	}
}

char* func_737()
{
	return "CAS_LW_MC1";
}

void func_738(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_111())
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
			if (iParam1 > 0 || Global_262145.f_28023)
			{
				func_739(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_739(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
		case -168319378:
		case 1637817605:
		case 830018386:
		case 1051883823:
			if (iParam1 > 0 || Global_262145.f_28023)
			{
				func_739(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
		case 1280785534:
		case -1878824774:
		case 247992227:
		case -229237358:
		case -1123183389:
		case 1814197076:
		case 713955548:
		case -2026544524:
		case -719580138:
		case -163417439:
		case -550417574:
			func_739(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_739(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_111())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0xD487B8E9C523DEFD(func_18()) || unk_0xBA5B5030B7954DAA())
		{
			Global_4529831 = 1;
			return 0;
		}
		if (Global_2726388)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4529832 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4528329[iVar2 /*85*/].f_66.f_2 == 0)
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
	if ((bVar0 || iVar1) || unk_0x651232F0FBBD6C7F(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0xE894C3F21E583743(iVar4))
		{
			*uParam0 = func_150(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4528329[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4528329[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4529816 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4529830 = 1;
			Global_4529833 = iParam4;
			Global_4529835 = iParam3;
			Global_4529836 = 1;
			Global_4529834 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4529833 = iParam4;
			Global_4529835 = iParam3;
			Global_4529836 = 1;
			Global_4529834 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_741(1, iParam4);
			Global_4529830 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_740(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_740(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xCED9E32812D6C7C7(&(Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_126.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_107(iParam0);
	}
}

void func_741(int iParam0, var uParam1)
{
	Global_2727573 = uParam1;
	Global_2727572 = iParam0;
}

int func_742(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_26863;
		
		case 1:
			return Global_262145.f_26864;
		
		case 2:
			return Global_262145.f_26865;
		
		case 3:
			return Global_262145.f_26860;
		
		case 4:
			return Global_262145.f_26861;
		
		case 5:
			return Global_262145.f_26862;
		
		case 6:
			return Global_262145.f_26858;
		
		case 7:
			return Global_262145.f_26859;
		
		default:
	}
	return 0;
}

int func_743()
{
	int iVar0[8];
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 8)
	{
		iVar0[iVar2] = iVar2;
		iVar1 = (iVar1 + func_744(iVar0[iVar2]));
		iVar2++;
	}
	iVar3 = unk_0x95F3C8DAE5A0339C(0, iVar1);
	iVar2 = 0;
	while (iVar2 < 8)
	{
		if (iVar3 <= func_744(iVar0[iVar2]))
		{
			return iVar0[iVar2];
		}
		else
		{
			iVar3 = (iVar3 - func_744(iVar0[iVar2]));
		}
		iVar2++;
	}
	return -1;
}

int func_744(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_26513;
		
		case 1:
			return Global_262145.f_26513;
		
		case 2:
			return Global_262145.f_26513;
		
		case 3:
			return Global_262145.f_26512;
		
		case 4:
			return Global_262145.f_26512;
		
		case 5:
			return Global_262145.f_26512;
		
		case 6:
			return Global_262145.f_26511;
		
		case 7:
			return Global_262145.f_26511;
		
		default:
	}
	return 0;
}

int func_745(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			return 20000;
		
		case 10:
			return 30000;
		
		case 11:
			return 40000;
		
		case 12:
			return 50000;
		
		default:
	}
	return 0;
}

int func_746(var uParam0, char* sParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (iParam2 != -1 && bParam3)
	{
	}
	if (iParam2 != -1 && !bParam3)
	{
		iVar0 = func_753(iParam2);
	}
	else if (iParam2 == -1)
	{
		iVar1 = func_751();
		iVar0 = func_750(iVar1);
	}
	if (iVar0 > 0)
	{
		if (bParam3)
		{
			StringCopy(sParam1, func_749(), 64);
		}
		*uParam0 = iVar0;
		func_748();
		func_190(0, unk_0xE2D3D51028F0428A(), func_747(iParam2), -1827353931, 1223799452, iVar0, 1, -1, 0, 0, 0);
		return 1;
	}
	return 0;
}

char* func_747(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return "LUCKY WHEEL RP2500";
		
		case 5:
			return "LUCKY WHEEL RP5000";
		
		case 6:
			return "LUCKY WHEEL RP7500";
		
		case 7:
			return "LUCKY WHEEL RP10K";
		
		case 8:
			return "LUCKY WHEEL RP15K";
		
		default:
	}
	return "UNKNOWN";
}

void func_748()
{
	Global_2726775 = 1;
}

char* func_749()
{
	return "CAS_LW_MRP1";
}

int func_750(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_26850;
		
		case 1:
			return Global_262145.f_26851;
		
		case 2:
			return Global_262145.f_26848;
		
		case 3:
			return Global_262145.f_26849;
		
		case 4:
			return Global_262145.f_26846;
		
		case 5:
			return Global_262145.f_26847;
		
		default:
	}
	return 0;
}

int func_751()
{
	int iVar0[6];
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		iVar0[iVar2] = iVar2;
		iVar1 = (iVar1 + func_752(iVar0[iVar2]));
		iVar2++;
	}
	iVar3 = unk_0x95F3C8DAE5A0339C(0, iVar1);
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (iVar3 <= func_752(iVar0[iVar2]))
		{
			return iVar0[iVar2];
		}
		else
		{
			iVar3 = (iVar3 - func_752(iVar0[iVar2]));
		}
		iVar2++;
	}
	return -1;
}

int func_752(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_26513;
		
		case 1:
			return Global_262145.f_26513;
		
		case 2:
			return Global_262145.f_26512;
		
		case 3:
			return Global_262145.f_26512;
		
		case 4:
			return Global_262145.f_26511;
		
		case 5:
			return Global_262145.f_26511;
		
		default:
	}
	return 0;
}

int func_753(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 2500;
		
		case 5:
			return 5000;
		
		case 6:
			return 7500;
		
		case 7:
			return 10000;
		
		case 8:
			return 15000;
		
		default:
	}
	return 0;
}

int func_754(char* sParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	if (iParam2 != -1 && bParam3)
	{
	}
	if (iParam2 != -1 && !bParam3)
	{
		iVar0 = func_759(bParam3);
		if (iVar0 != -1)
		{
			if (func_758())
			{
				func_185(func_756(unk_0x2E87280918B16506(func_757(iVar0))), 1, -1);
				StringCopy(sParam0, func_757(iVar0), 64);
				return 1;
			}
			else if (!func_755(iVar0))
			{
				func_185(func_756(unk_0x2E87280918B16506(func_757(iVar0))), 1, -1);
				StringCopy(sParam0, func_757(iVar0), 64);
				return 1;
			}
		}
	}
	else if (iParam2 == -1)
	{
		iVar1 = func_759(bParam3);
		if (iVar1 != -1)
		{
			if (func_758())
			{
				unk_0xB0550BC91B0159D6(uParam1, 19);
				StringCopy(sParam0, func_757(iVar1), 64);
				return 0;
			}
			else if (!func_755(iVar1))
			{
				func_185(func_756(unk_0x2E87280918B16506(func_757(iVar1))), 1, -1);
				StringCopy(sParam0, func_757(iVar1), 64);
				return 1;
			}
		}
	}
	return 0;
}

bool func_755(int iParam0)
{
	return func_501(func_756(unk_0x2E87280918B16506(func_757(iParam0))), -1);
}

int func_756(int iParam0)
{
	switch (iParam0)
	{
		case 1436451705:
			return 26970;
		
		case joaat("CLO_ARF_O_12"):
			return 26971;
		
		case joaat("CLO_IEF_O_2"):
			return 26972;
		
		case -2066046545:
			return 26973;
		
		case joaat("CLO_BIF_O_11"):
			return 26974;
		
		case joaat("CLO_STF_O_5"):
			return 26975;
		
		case joaat("CLO_SMF_O_1"):
			return 26976;
		
		case 1210095949:
			return 26977;
		
		case joaat("CLO_STF_O_8"):
			return 26978;
		
		case joaat("CLO_HSTF_O_20"):
			return 26979;
		
		case -1811256960:
			return 26979;
		
		case 1396642220:
			return 26980;
		
		case 217769821:
			return 26981;
		
		case joaat("CLO_GRF_O_1"):
			return 26982;
		
		case joaat("CLO_LXF_U_3_8"):
			return 26983;
		
		case -211022504:
			return 26984;
		
		case 549611408:
			return 26985;
		
		case joaat("CLO_HSTF_S_1_1"):
			return 26986;
		
		case joaat("CLO_IEF_O_11"):
			return 26987;
		
		case joaat("CLO_BIF_U_23_1"):
			return 26988;
		
		case -2056056404:
			return 26989;
		
		case joaat("CLO_EXF_OB_14"):
			return 26990;
		
		case -1153506760:
			return 26991;
		
		case 1699990915:
			return 26992;
		
		case joaat("CLO_L2F_U_7_15"):
			return 26993;
		
		case -1396600463:
			return 26994;
		
		case joaat("CLO_L2F_U_7_12"):
			return 26995;
		
		case joaat("CLO_L2F_U_7_11"):
			return 26996;
		
		case joaat("CLO_STF_U_7_4"):
			return 26997;
		
		case joaat("CLO_IEF_U_3_7"):
			return 26998;
		
		case joaat("CLO_L2F_U_7_1"):
			return 26999;
		
		case joaat("CLO_EXF_OA_0"):
			return 27000;
		
		case 440842954:
			return 27001;
		
		case joaat("CLO_HSTF_O_G_3"):
			return 27001;
		
		case -1708271834:
			return 27002;
		
		case 573367806:
			return 27003;
		
		case -1146312016:
			return 27004;
		
		case joaat("CLO_STF_U_5_9"):
			return 27005;
		
		case -247904379:
			return 27006;
		
		case 1384042054:
			return 27007;
		
		case joaat("CLO_STF_U_5_1"):
			return 27008;
		
		case 926596245:
			return 27009;
		
		case joaat("CLO_HSTF_O_J_2"):
			return 27010;
		
		case -1803247262:
			return 27010;
		
		case joaat("CLO_STF_U_5_6"):
			return 27011;
		
		case joaat("CLO_GRF_U_21_12"):
			return 27012;
		
		case 1117115207:
			return 27013;
		
		case joaat("CLO_GRF_U_21_20"):
			return 27014;
		
		case 1111421610:
			return 27015;
		
		case joaat("CLO_SMF_U_2_15"):
			return 27016;
		
		case joaat("CLO_IEF_U_14_4"):
			return 27017;
		
		case joaat("CLO_IEF_U_14_21"):
			return 27018;
		
		case joaat("CLO_IEF_U_14_9"):
			return 27019;
		
		case 605265254:
			return 27020;
		
		case joaat("CLO_BIF_U_31_1"):
			return 27021;
		
		case joaat("CLO_SMF_U_2_7"):
			return 27022;
		
		case 1586867035:
			return 27023;
		
		case joaat("CLO_SMF_U_2_23"):
			return 27024;
		
		case joaat("CLO_STF_U_5_12"):
			return 27025;
		
		case joaat("CLO_SMF_U_2_19"):
			return 27026;
		
		case joaat("CLO_STF_U_6_18"):
			return 27027;
		
		case joaat("CLO_IEF_U_14_0"):
			return 27028;
		
		case joaat("CLO_EXF_EU_5_0"):
			return 27029;
		
		case joaat("CLO_IEF_U_14_7"):
			return 27030;
		
		case -111410208:
			return 27031;
		
		case -1198246502:
			return 27032;
		
		case joaat("CLO_LXF_U_5_0"):
			return 27033;
		
		case joaat("CLO_IEF_U_4_8"):
			return 27034;
		
		case joaat("CLO_HSTF_O_L_0"):
			return 27035;
		
		case -2106125641:
			return 27035;
		
		case joaat("CLO_HSTF_S_0_0"):
			return 27036;
		
		case joaat("CLO_GRF_U_20_15"):
			return 27037;
		
		case -1545864427:
			return 27038;
		
		case joaat("CLO_IEF_U_1_9"):
			return 27039;
		
		case joaat("CLO_LTSFU_0_0"):
			return 27040;
		
		case joaat("CLO_S2F_U_3_12"):
			return 27041;
		
		case joaat("CLO_IEF_U_4_5"):
			return 27042;
		
		case joaat("CLO_GRF_U_20_24"):
			return 27043;
		
		case joaat("CLO_SMF_U_3_8"):
			return 27044;
		
		case joaat("CLO_IEF_U_4_22"):
			return 27045;
		
		case joaat("CLO_GRF_U_19_16"):
			return 27046;
		
		case joaat("CLO_HSTF_U_0_3"):
			return 27047;
		
		case joaat("CLO_HSTF_U_16_5"):
			return 27048;
		
		case joaat("CLO_SMF_U_3_5"):
			return 27049;
		
		case joaat("CLO_SMF_U_3_6"):
			return 27050;
		
		case joaat("CLO_LXF_U_6_3"):
			return 27051;
		
		case joaat("CLO_S2F_D_7"):
			return 27052;
		
		case joaat("CLO_GRF_U_19_23"):
			return 27053;
		
		case joaat("CLO_GRF_U_0_13"):
			return 27054;
		
		case joaat("CLO_S2F_D_18"):
			return 27055;
		
		case joaat("CLO_EXF_EU_4_2"):
			return 27056;
		
		case joaat("CLO_HP_F_D_10"):
			return 27057;
		
		case joaat("CLO_LXF_U_6_18"):
			return 27058;
		
		case joaat("CLO_IEF_U_7_5"):
			return 27059;
		
		case joaat("CLO_BIF_DECL_67"):
			return 27060;
		
		case -2129160580:
			return 27061;
		
		case joaat("CLO_S1F_U_3_1"):
			return 27062;
		
		case joaat("CLO_IEF_U_7_14"):
			return 27063;
		
		case joaat("CLO_GRF_U_15_10"):
			return 27064;
		
		case joaat("CLO_GRF_U_2_6"):
			return 27065;
		
		case joaat("CLO_IEF_U_7_12"):
			return 27066;
		
		case joaat("CLO_SMF_DECL_16"):
			return 27067;
		
		case 1819862242:
			return 27068;
		
		case joaat("CLO_SMF_DECL_15"):
			return 27069;
		
		case joaat("CLO_BIF_DECL_2"):
			return 27070;
		
		case joaat("CLO_SMF_DECL_7"):
			return 27071;
		
		case joaat("CLO_HP_F_D_9"):
			return 27072;
		
		case joaat("CLO_EXF_EU_9_5"):
			return 27073;
		
		case joaat("CLO_S2F_D_23"):
			return 27074;
		
		case joaat("CLO_SMF_DECL_5"):
			return 27075;
		
		case 1314232490:
			return 27076;
		
		case 2091337530:
			return 27077;
		
		case 572834473:
			return 27078;
		
		case 202917910:
			return 27079;
		
		case -646852824:
			return 27080;
		
		case -905176471:
			return 27081;
		
		case -2111578974:
			return 27082;
		
		case -1767373458:
			return 27083;
		
		case -777211037:
			return 27084;
		
		case -1077066219:
			return 27085;
		
		case -1649792514:
			return 27086;
		
		case 999687:
			return 27087;
		
		case -706446153:
			return 27088;
		
		case 1446655494:
			return 27120;
		
		case -29489557:
			return 27121;
		
		case 1907813631:
			return 27122;
		
		case -1104607682:
			return 27123;
		
		case 802679194:
			return 27124;
		
		case -108266237:
			return 27125;
		
		case -883777391:
			return 27126;
		
		case -1609398199:
			return 27127;
		
		case -1140765579:
			return 27128;
		
		case -1372049181:
			return 27129;
		
		case -1603496628:
			return 27130;
		
		case 308640072:
			return 27131;
		
		case 74374491:
			return 27132;
		
		case 1026674400:
			return 27133;
		
		case -410770554:
			return 27134;
		
		case 559814457:
			return 27135;
		
		case 1242982569:
			return 27136;
		
		case -2080678794:
			return 27137;
		
		case -1998915058:
			return 27138;
		
		case 1758900608:
			return 27139;
		
		case 1465552520:
			return 27140;
		
		case 871876547:
			return 27141;
		
		case 1233646299:
			return 27142;
		
		case 637217730:
			return 27143;
		
		case 323028558:
			return 27144;
		
		case -19210870:
			return 27145;
		
		default:
	}
	switch (iParam0)
	{
		case 356158649:
			return 26970;
		
		case -1531197816:
			return 26971;
		
		case -1034765426:
			return 26972;
		
		case 606339585:
			return 26973;
		
		case 1640388520:
			return 26974;
		
		case -1782451678:
			return 26975;
		
		case 367900409:
			return 26976;
		
		case -775662644:
			return 26977;
		
		case -2012260675:
			return 26978;
		
		case -1302177064:
			return 26980;
		
		case -1136047157:
			return 26981;
		
		case -1372799004:
			return 26982;
		
		case 104927579:
			return 26983;
		
		case -171114594:
			return 26984;
		
		case -838590238:
			return 26985;
		
		case 2027106086:
			return 26986;
		
		case -1336477820:
			return 26987;
		
		case 705382167:
			return 26988;
		
		case 812088197:
			return 26989;
		
		case 812418446:
			return 26990;
		
		case -1264556776:
			return 26991;
		
		case 1453608509:
			return 26992;
		
		case 1569094027:
			return 26993;
		
		case 980555213:
			return 26994;
		
		case 734984327:
			return 26995;
		
		case -1280109902:
			return 26997;
		
		case 157775689:
			return 26998;
		
		case -806866102:
			return 26999;
		
		case 878989084:
			return 27000;
		
		case 2083622977:
			return 27014;
		
		case -1591628927:
			return 27002;
		
		case 59522077:
			return 27003;
		
		case -618721866:
			return 27004;
		
		case -753950190:
			return 27005;
		
		case 952510537:
			return 27006;
		
		case 1675485666:
			return 27007;
		
		case 1636056825:
			return 27008;
		
		case 1008378545:
			return 27009;
		
		case 1279202415:
			return 26996;
		
		case 541533437:
			return 27011;
		
		case -445352626:
			return 27012;
		
		case 396333646:
			return 27013;
		
		case 1019849569:
			return 27015;
		
		case -1045574863:
			return 27017;
		
		case 2099692609:
			return 27018;
		
		case -1711208698:
			return 27019;
		
		case 1907567974:
			return 27020;
		
		case -1708304112:
			return 27021;
		
		case 1195459540:
			return 27022;
		
		case -289956978:
			return 27023;
		
		case 1139128717:
			return 27024;
		
		case -1728576554:
			return 27025;
		
		case 931720181:
			return 27026;
		
		case -411167027:
			return 27027;
		
		case -1560788630:
			return 27028;
		
		case 1410429459:
			return 27029;
		
		case -305731999:
			return 27030;
		
		case 1850648209:
			return 27031;
		
		case -1816187924:
			return 27032;
		
		case 1783002076:
			return 27033;
		
		case 1828567552:
			return 27034;
		
		case 330659273:
			return 27016;
		
		case -1361580068:
			return 27036;
		
		case -2009519706:
			return 27037;
		
		case 1432405432:
			return 27038;
		
		case 1822394461:
			return 27039;
		
		case -1234554049:
			return 27040;
		
		case -1856607714:
			return 27041;
		
		case -716314589:
			return 27042;
		
		case 1511736932:
			return 27043;
		
		case -413109371:
			return 27044;
		
		case 199661462:
			return 27045;
		
		case 2029318935:
			return 27046;
		
		case 1767898797:
			return 27047;
		
		case -1926488251:
			return 27048;
		
		case -708236452:
			return 27049;
		
		case -410464549:
			return 27050;
		
		case 710288251:
			return 27051;
		
		case -852450789:
			return 27052;
		
		case 1530127197:
			return 27053;
		
		case 1970975125:
			return 27054;
		
		case 578571729:
			return 27055;
		
		case 528977640:
			return 27056;
		
		case -182260974:
			return 27057;
		
		case -650509440:
			return 27058;
		
		case 789331251:
			return 27059;
		
		case -346883788:
			return 27060;
		
		case 997661638:
			return 27061;
		
		case -1732981414:
			return 27062;
		
		case 1831034499:
			return 27063;
		
		case -1457557962:
			return 27064;
		
		case 1666283142:
			return 27065;
		
		case -591080416:
			return 27066;
		
		case -1848613075:
			return 27067;
		
		case joaat("CLO_S1M_DEC_25"):
			return 27068;
		
		case 698226378:
			return 27069;
		
		case 85350297:
			return 27070;
		
		case 1727712047:
			return 27071;
		
		case -1229400975:
			return 27072;
		
		case 2089452078:
			return 27073;
		
		case -1711900307:
			return 27074;
		
		case 355772324:
			return 27075;
		
		case -2071810596:
			return 27076;
		
		case -119844455:
			return 27077;
		
		case 683400644:
			return 27078;
		
		case 601407264:
			return 27079;
		
		case joaat("CLO_GRM_DECL_27"):
			return 27080;
		
		case 795762148:
			return 27081;
		
		case joaat("CLO_HST_A_0"):
			return 27082;
		
		case 366454706:
			return 27083;
		
		case joaat("CLO_HST_A_9"):
			return 27084;
		
		case -1521092209:
			return 27085;
		
		case 1970016848:
			return 27086;
		
		case 807882589:
			return 27087;
		
		case 885717964:
			return 27088;
		
		case 780852563:
			return 27120;
		
		case -133599151:
			return 27121;
		
		case 173741300:
			return 27122;
		
		case -714822904:
			return 27123;
		
		case -406892611:
			return 27124;
		
		case -1362076192:
			return 27125;
		
		case -1022261662:
			return 27126;
		
		case 1673296252:
			return 27127;
		
		case -994642134:
			return 27128;
		
		case -1283304255:
			return 27129;
		
		case -1021447204:
			return 27130;
		
		case -1198989646:
			return 27131;
		
		case -441861897:
			return 27132;
		
		case -54270165:
			return 27133;
		
		case -349092858:
			return 27134;
		
		case 427761825:
			return 27135;
		
		case 263523597:
			return 27136;
		
		case 1037953374:
			return 27137;
		
		case 103365845:
			return 27138;
		
		case 1692546288:
			return 27139;
		
		case 1135702663:
			return 27140;
		
		case 1885162466:
			return 27141;
		
		case 156401098:
			return 27142;
		
		case -456805199:
			return 27143;
		
		case 848285764:
			return 27144;
		
		case -1722442286:
			return 27145;
		
		default:
	}
	return 0;
}

char* func_757(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CLO_H2F_O_S_16";
		
		case 1:
			return "CLO_ARF_O_12";
		
		case 2:
			return "CLO_IEF_O_2";
		
		case 3:
			return "CLO_H2F_S_6_0";
		
		case 4:
			return "CLO_BIF_O_11";
		
		case 5:
			return "CLO_STF_O_5";
		
		case 6:
			return "CLO_SMF_O_1";
		
		case 7:
			return "CLO_STF_O_E_1";
		
		case 8:
			return "CLO_STF_O_8";
		
		case 9:
			return "CLO_HSTF_O_20";
		
		case 10:
			return "CLO_H2F_S_4_0";
		
		case 11:
			return "CLO_H2F_O_G_21";
		
		case 12:
			return "CLO_GRF_O_1";
		
		case 13:
			return "CLO_LXF_U_3_8";
		
		case 14:
			return "CLO_H2F_S_9_0";
		
		case 15:
			return "CLO_H2F_S_9_5";
		
		case 16:
			return "CLO_HSTF_S_1_1";
		
		case 17:
			return "CLO_IEF_O_11";
		
		case 18:
			return "CLO_BIF_U_23_1";
		
		case 19:
			return "CLO_BHF_U_11_17";
		
		case 20:
			return "CLO_EXF_OB_14";
		
		case 21:
			return "CLO_H2F_U_3_25";
		
		case 22:
			return "CLO_BHF_U_6_1";
		
		case 23:
			return "CLO_L2F_U_7_15";
		
		case 24:
			return "CLO_BHF_U_14_1";
		
		case 25:
			return "CLO_L2F_U_7_12";
		
		case 26:
			return "CLO_L2F_U_7_11";
		
		case 27:
			return "CLO_STF_U_7_4";
		
		case 28:
			return "CLO_IEF_U_3_7";
		
		case 29:
			return "CLO_L2F_U_7_1";
		
		case 30:
			return "CLO_EXF_OA_0";
		
		case 31:
			return "CLO_HSTF_O_G_3";
		
		case 32:
			return "CLO_BHF_U_5_18";
		
		case 33:
			return "CLO_BHF_U_5_20";
		
		case 34:
			return "CLO_BHF_U_2_14";
		
		case 35:
			return "CLO_STF_U_5_9";
		
		case 36:
			return "CLO_BHF_U_5_3";
		
		case 37:
			return "CLO_BHF_U_13_0";
		
		case 38:
			return "CLO_STF_U_5_1";
		
		case 39:
			return "CLO_BHF_U_4_2";
		
		case 40:
			return "CLO_HSTF_O_J_2";
		
		case 41:
			return "CLO_STF_U_5_6";
		
		case 42:
			return "CLO_GRF_U_21_12";
		
		case 43:
			return "CLO_BHF_U_4_5";
		
		case 44:
			return "CLO_GRF_U_21_20";
		
		case 45:
			return "CLO_BHF_U_7_1";
		
		case 46:
			return "CLO_SMF_U_2_15";
		
		case 47:
			return "CLO_IEF_U_14_4";
		
		case 48:
			return "CLO_IEF_U_14_21";
		
		case 49:
			return "CLO_IEF_U_14_9";
		
		case 50:
			return "CLO_BHF_U_7_14";
		
		case 51:
			return "CLO_BIF_U_31_1";
		
		case 52:
			return "CLO_SMF_U_2_7";
		
		case 53:
			return "CLO_BHF_U_7_7";
		
		case 54:
			return "CLO_SMF_U_2_23";
		
		case 55:
			return "CLO_STF_U_5_12";
		
		case 56:
			return "CLO_SMF_U_2_19";
		
		case 57:
			return "CLO_STF_U_6_18";
		
		case 58:
			return "CLO_IEF_U_14_0";
		
		case 59:
			return "CLO_EXF_EU_5_0";
		
		case 60:
			return "CLO_IEF_U_14_7";
		
		case 61:
			return "CLO_BHF_U_4_18";
		
		case 62:
			return "CLO_BHF_U_0_17";
		
		case 63:
			return "CLO_LXF_U_5_0";
		
		case 64:
			return "CLO_IEF_U_4_8";
		
		case 65:
			return "CLO_HSTM_O_L_0";
		
		case 66:
			return "CLO_HSTF_S_0_0";
		
		case 67:
			return "CLO_GRF_U_20_15";
		
		case 68:
			return "CLO_BHF_U_0_2";
		
		case 69:
			return "CLO_IEF_U_1_9";
		
		case 70:
			return "CLO_LTSFU_0_0";
		
		case 71:
			return "CLO_S2F_U_3_12";
		
		case 72:
			return "CLO_IEF_U_4_5";
		
		case 73:
			return "CLO_GRF_U_20_24";
		
		case 74:
			return "CLO_SMF_U_3_8";
		
		case 75:
			return "CLO_IEF_U_4_22";
		
		case 76:
			return "CLO_GRF_U_19_16";
		
		case 77:
			return "CLO_HSTF_U_0_3";
		
		case 78:
			return "CLO_HSTF_U_16_5";
		
		case joaat("mpsv_lp0_31"):
			return "CLO_SMF_U_3_5";
		
		case 80:
			return "CLO_SMF_U_3_6";
		
		case 81:
			return "CLO_LXF_U_6_3";
		
		case 82:
			return "CLO_S2F_D_7";
		
		case 83:
			return "CLO_GRF_U_19_23";
		
		case 84:
			return "CLO_GRF_U_0_13";
		
		case 85:
			return "CLO_S2F_D_18";
		
		case 86:
			return "CLO_EXF_EU_4_2";
		
		case 87:
			return "CLO_HP_F_D_10";
		
		case 88:
			return "CLO_LXF_U_6_18";
		
		case 89:
			return "CLO_IEF_U_7_5";
		
		case 90:
			return "CLO_BIF_DECL_67";
		
		case 91:
			return "CLO_BHF_U_16_1";
		
		case 92:
			return "CLO_S1F_U_3_1";
		
		case 93:
			return "CLO_IEF_U_7_14";
		
		case 94:
			return "CLO_GRF_U_15_10";
		
		case 95:
			return "CLO_GRF_U_2_6";
		
		case 96:
			return "CLO_IEF_U_7_12";
		
		case 97:
			return "CLO_SMF_DECL_16";
		
		case 98:
			return "CLO_S1F_DEC_23";
		
		case 99:
			return "CLO_SMF_DECL_15";
		
		case 100:
			return "CLO_BIF_DECL_2";
		
		case 101:
			return "CLO_SMF_DECL_7";
		
		case 102:
			return "CLO_HP_F_D_9";
		
		case 103:
			return "CLO_EXF_EU_9_5";
		
		case 104:
			return "CLO_S2F_D_23";
		
		case 105:
			return "CLO_SMF_DECL_5";
		
		case 106:
			return "CLO_BIF_DECL_63";
		
		case 107:
			return "CLO_AWF_DECL_23";
		
		case 108:
			return "CLO_BIF_DECL_49";
		
		case 109:
			return "CLO_HALF_D_10";
		
		case 110:
			return "CLO_GRF_DECL_27";
		
		case 111:
			return "CLO_LXF_DEC_35";
		
		case 112:
			return "CLO_HST_F_A_0";
		
		case 113:
			return "CLO_HST_F_A_9";
		
		case 114:
			return "CLO_BHF_DECL_19";
		
		case 115:
			return "CLO_INDF_HT_6_2";
		
		case 116:
			return "CLO_EXF_DECL_3";
		
		case 117:
			return "CLO_X4F_B_7_0";
		
		case 118:
			return "CLO_X2F_B_2_0";
		
		case 119:
			return "CLO_VWF_U_13_0";
		
		case 120:
			return "CLO_VWF_U_13_1";
		
		case 121:
			return "CLO_VWF_U_13_2";
		
		case 122:
			return "CLO_VWF_U_13_3";
		
		case 123:
			return "CLO_VWF_U_13_4";
		
		case 124:
			return "CLO_VWF_U_13_5";
		
		case 125:
			return "CLO_VWF_U_13_6";
		
		case 126:
			return "CLO_VWF_U_18_5";
		
		case 127:
			return "CLO_VWF_PH_0_0";
		
		case 128:
			return "CLO_VWF_PH_0_1";
		
		case 129:
			return "CLO_VWF_PH_0_2";
		
		case 130:
			return "CLO_VWF_PH_0_3";
		
		case 131:
			return "CLO_VWF_PH_0_4";
		
		case 132:
			return "CLO_VWF_PH_0_5";
		
		case 133:
			return "CLO_VWF_PH_0_6";
		
		case 134:
			return "CLO_VWF_PH_0_7";
		
		case 135:
			return "CLO_VWF_PH_0_8";
		
		case 136:
			return "CLO_VWF_PH_0_9";
		
		case 137:
			return "CLO_VWF_PH_0_10";
		
		case 138:
			return "CLO_VWF_DECL_0";
		
		case 139:
			return "CLO_VWF_DECL_1";
		
		case 140:
			return "CLO_VWF_DECL_3";
		
		case 141:
			return "CLO_VWF_DECL_5";
		
		case 142:
			return "CLO_VWF_DECL_7";
		
		case 143:
			return "CLO_VWF_DECL_8";
		
		case 144:
			return "CLO_VWF_DECL_9";
		
		default:
	}
	switch (iParam0)
	{
		case 145:
			return "CLO_H2M_O_S_16";
		
		case 146:
			return "CLO_ARM_O_12";
		
		case 147:
			return "CLO_IEM_O_1";
		
		case 148:
			return "CLO_H2M_S_6_0";
		
		case 149:
			return "CLO_BIM_O_11";
		
		case 150:
			return "CLO_STM_O_5";
		
		case 151:
			return "CLO_SMM_O_1";
		
		case 152:
			return "CLO_STM_O_E_1";
		
		case 153:
			return "CLO_STM_O_8";
		
		case 154:
			return "CLO_HSTM_O_20";
		
		case 155:
			return "CLO_H2M_S_4_0";
		
		case 156:
			return "CLO_H2M_O_G_21";
		
		case 157:
			return "CLO_GRM_O_1";
		
		case 158:
			return "CLO_H2M_S_9_0";
		
		case 159:
			return "CLO_LXM_U_0_7";
		
		case 160:
			return "CLO_H2M_S_9_5";
		
		case 161:
			return "CLO_HSTM_S_1_1";
		
		case 162:
			return "CLO_IEM_O_11";
		
		case 163:
			return "CLO_BIM_U_18_1";
		
		case 164:
			return "CLO_BHM_U_11_17";
		
		case 165:
			return "CLO_H2M_U_3_25";
		
		case 166:
			return "CLO_BHM_U_6_1";
		
		case 167:
			return "CLO_L2M_U_6_15";
		
		case 168:
			return "CLO_BHM_U_14_1";
		
		case 169:
			return "CLO_L2M_U_6_12";
		
		case 170:
			return "CLO_L2M_U_6_11";
		
		case 171:
			return "CLO_HSTM_O_J_2";
		
		case 172:
			return "CLO_EXM_OB_14";
		
		case 173:
			return "CLO_STM_U_7_4";
		
		case 174:
			return "CLO_IEM_U_3_7";
		
		case 175:
			return "CLO_L2M_U_6_1";
		
		case 176:
			return "CLO_EXM_OA_0";
		
		case 177:
			return "CLO_BHM_U_5_18";
		
		case 178:
			return "CLO_BHM_U_5_20";
		
		case 179:
			return "CLO_BHM_U_2_14";
		
		case 180:
			return "CLO_STM_U_5_9";
		
		case 181:
			return "CLO_BHM_U_5_3";
		
		case 182:
			return "CLO_BHM_U_13_0";
		
		case 183:
			return "CLO_STM_U_5_1";
		
		case 184:
			return "CLO_BHM_U_4_2";
		
		case 185:
			return "CLO_STM_U_5_6";
		
		case 186:
			return "CLO_GRM_U_15_12";
		
		case 187:
			return "CLO_BHM_U_4_5";
		
		case 188:
			return "CLO_GRM_U_15_20";
		
		case 189:
			return "CLO_HSTM_O_G_3";
		
		case 190:
			return "CLO_BHM_U_7_1";
		
		case 191:
			return "CLO_HSTM_O_L_0";
		
		case 192:
			return "CLO_SMM_U_2_15";
		
		case 193:
			return "CLO_IEM_U_17_4";
		
		case 194:
			return "CLO_IEM_U_17_21";
		
		case 195:
			return "CLO_IEM_U_17_9";
		
		case 196:
			return "CLO_BHM_U_7_14";
		
		case 197:
			return "CLO_BIM_U_26_1";
		
		case 198:
			return "CLO_SMM_U_2_7";
		
		case 199:
			return "CLO_BHM_U_7_7";
		
		case 200:
			return "CLO_SMM_U_2_23";
		
		case 201:
			return "CLO_STM_U_5_12";
		
		case 202:
			return "CLO_SMM_U_2_19";
		
		case 203:
			return "CLO_STM_U_6_18";
		
		case 204:
			return "CLO_IEM_U_17_0";
		
		case 205:
			return "CLO_EXM_EU_6_0";
		
		case 206:
			return "CLO_IEM_U_17_7";
		
		case 207:
			return "CLO_HSTM_S_0_0";
		
		case 208:
			return "CLO_BHM_U_4_18";
		
		case 209:
			return "CLO_BHM_U_0_17";
		
		case 210:
			return "CLO_LXM_U_1_0";
		
		case 211:
			return "CLO_IEM_U_4_8";
		
		case 212:
			return "CLO_HSTM_U_15_5";
		
		case 213:
			return "CLO_GRM_U_14_15";
		
		case 214:
			return "CLO_BHM_U_0_2";
		
		case 215:
			return "CLO_LTSMU_0_0";
		
		case 216:
			return "CLO_IEM_U_18_9";
		
		case 217:
			return "CLO_S2M_U_5_10";
		
		case 218:
			return "CLO_IEM_U_4_5";
		
		case 219:
			return "CLO_GRM_U_14_24";
		
		case 220:
			return "CLO_SMM_U_3_8";
		
		case 221:
			return "CLO_IEM_U_4_22";
		
		case 222:
			return "CLO_GRM_U_13_16";
		
		case 223:
			return "CLO_HSTM_U_0_3";
		
		case 224:
			return "CLO_SMM_U_3_5";
		
		case 225:
			return "CLO_SMM_U_3_6";
		
		case 226:
			return "CLO_LXM_U_5_3";
		
		case 227:
			return "CLO_S2M_D_16";
		
		case 228:
			return "CLO_GRM_U_13_23";
		
		case 229:
			return "CLO_GRM_U_0_13";
		
		case 230:
			return "CLO_S2M_D_27";
		
		case 231:
			return "CLO_EXM_EU_5_2";
		
		case 232:
			return "CLO_HP_D_10";
		
		case 233:
			return "CLO_LXM_U_5_17";
		
		case 234:
			return "CLO_IEM_U_7_5";
		
		case 235:
			return "CLO_IEM_U_7_23";
		
		case 236:
			return "CLO_BIM_DECL_67";
		
		case 237:
			return "CLO_BHM_U_16_1";
		
		case 238:
			return "CLO_S1M_U_3_1";
		
		case 239:
			return "CLO_SMM_U_7_10";
		
		case 240:
			return "CLO_GRM_U_2_6";
		
		case 241:
			return "CLO_IEM_U_7_19";
		
		case 242:
			return "CLO_SMM_DECL_16";
		
		case 243:
			return "CLO_S1M_DEC_25";
		
		case 244:
			return "CLO_SMM_DECL_15";
		
		case 245:
			return "CLO_BIM_DECL_2";
		
		case 246:
			return "CLO_SMM_DECL_7";
		
		case 247:
			return "CLO_HP_D_9";
		
		case 248:
			return "CLO_EXM_EU_10_5";
		
		case 249:
			return "CLO_S2M_D_4";
		
		case 250:
			return "CLO_SMM_DECL_5";
		
		case 251:
			return "CLO_BIM_DECL_63";
		
		case 252:
			return "CLO_AWM_DECL_23";
		
		case 253:
			return "CLO_BIM_DECL_49";
		
		case 254:
			return "CLO_HALM_D_10";
		
		case 255:
			return "CLO_GRM_DECL_27";
		
		case 256:
			return "CLO_LXM_DEC_35";
		
		case 257:
			return "CLO_HST_A_0";
		
		case 258:
			return "CLO_EXM_DECL_3";
		
		case 259:
			return "CLO_HST_A_9";
		
		case 260:
			return "CLO_BHM_DECL_19";
		
		case 261:
			return "CLO_INDM_HT_6_2";
		
		case 262:
			return "CLO_X4M_B_7_0";
		
		case 263:
			return "CLO_X2M_B_2_0";
		
		case 264:
			return "CLO_VWM_U_15_0";
		
		case 265:
			return "CLO_VWM_U_15_1";
		
		case 266:
			return "CLO_VWM_U_15_2";
		
		case 267:
			return "CLO_VWM_U_15_3";
		
		case 268:
			return "CLO_VWM_U_15_4";
		
		case 269:
			return "CLO_VWM_U_15_5";
		
		case 270:
			return "CLO_VWM_U_15_6";
		
		case 271:
			return "CLO_VWM_U_20_5";
		
		case 272:
			return "CLO_VWM_PH_0_0";
		
		case 273:
			return "CLO_VWM_PH_0_1";
		
		case 274:
			return "CLO_VWM_PH_0_2";
		
		case 275:
			return "CLO_VWM_PH_0_3";
		
		case 276:
			return "CLO_VWM_PH_0_4";
		
		case 277:
			return "CLO_VWM_PH_0_5";
		
		case 278:
			return "CLO_VWM_PH_0_6";
		
		case 279:
			return "CLO_VWM_PH_0_7";
		
		case 280:
			return "CLO_VWM_PH_0_8";
		
		case 281:
			return "CLO_VWM_PH_0_9";
		
		case 282:
			return "CLO_VWM_PH_0_10";
		
		case 283:
			return "CLO_VWM_DECL_0";
		
		case 284:
			return "CLO_VWM_DECL_1";
		
		case 285:
			return "CLO_VWM_DECL_3";
		
		case 286:
			return "CLO_VWM_DECL_5";
		
		case 287:
			return "CLO_VWM_DECL_7";
		
		case 288:
			return "CLO_VWM_DECL_8";
		
		case 289:
			return "CLO_VWM_DECL_9";
		
		default:
	}
	return "LRCLOTHES_INVALID";
}

int func_758()
{
	int iVar0;
	
	iVar0 = 26970;
	while (iVar0 <= 27088)
	{
		if (!func_501(iVar0, -1))
		{
			return 0;
		}
		iVar0++;
	}
	iVar0 = 27120;
	while (iVar0 <= 27145)
	{
		if (!func_501(iVar0, -1))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_759(bool bParam0)
{
	int iVar0[145];
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 145)
	{
		if (func_80(unk_0xE2D3D51028F0428A()))
		{
			iVar3 = iVar2;
		}
		else
		{
			iVar3 = iVar2 + 145;
		}
		iVar0[iVar2] = iVar3;
		iVar1 = (iVar1 + func_760(iVar0[iVar2], bParam0));
		iVar2++;
	}
	iVar4 = unk_0x95F3C8DAE5A0339C(0, iVar1);
	iVar2 = 0;
	while (iVar2 < 145)
	{
		if (iVar4 <= func_760(iVar0[iVar2], bParam0))
		{
			return iVar0[iVar2];
		}
		else
		{
			iVar4 = (iVar4 - func_760(iVar0[iVar2], bParam0));
		}
		iVar2++;
	}
	return -1;
}

int func_760(int iParam0, bool bParam1)
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
		case 14:
			if (func_755(iParam0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26511;
			}
			break;
		
		case 13:
		case 15:
		case 16:
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
		case 33:
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
		case 60:
		case 61:
			if (func_755(iParam0))
			{
				return 0;
			}
			else if (!bParam1)
			{
				return Global_262145.f_26512;
			}
			else
			{
				return Global_262145.f_26513;
			}
			break;
		
		case 62:
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
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
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
		case 103:
		case 104:
		case 105:
			if (func_755(iParam0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26513;
			}
			break;
		
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
		case 112:
		case 113:
		case 114:
		case 115:
		case 116:
		case 117:
		case 118:
			if (func_755(iParam0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26511;
			}
			break;
		
		case 119:
		case 120:
		case 121:
		case 122:
		case 123:
		case 124:
		case 125:
		case 126:
		case 127:
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
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
			return Global_262145.f_26511;
			break;
	}
	switch (iParam0)
	{
		case 145:
		case 146:
		case 147:
		case 148:
		case 149:
		case 150:
		case 151:
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
		case 158:
			if (func_755(iParam0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26511;
			}
			break;
		
		case 159:
		case 160:
		case 161:
		case 162:
		case 163:
		case 164:
		case 165:
		case 166:
		case 167:
		case 168:
		case 169:
		case 170:
		case 171:
		case 172:
		case 173:
		case 174:
		case 175:
		case 176:
		case 177:
		case 178:
		case 179:
		case 180:
		case 181:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 187:
		case 188:
		case 189:
		case 190:
			if (func_755(iParam0))
			{
				return 0;
			}
			else if (!bParam1)
			{
				return Global_262145.f_26512;
			}
			else
			{
				return Global_262145.f_26513;
			}
			break;
		
		case 191:
			if (func_755(iParam0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26513;
			}
			break;
		
		case 192:
		case 193:
		case 194:
		case 195:
		case 196:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 205:
		case 206:
			if (func_755(iParam0))
			{
				return 0;
			}
			else if (!bParam1)
			{
				return Global_262145.f_26512;
			}
			else
			{
				return Global_262145.f_26513;
			}
			break;
		
		case 207:
			if (func_755(iParam0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26513;
			}
			break;
		
		case 208:
			if (func_755(iParam0))
			{
				return 0;
			}
			else if (!bParam1)
			{
				return Global_262145.f_26512;
			}
			else
			{
				return Global_262145.f_26513;
			}
			break;
		
		case 209:
		case 210:
		case 211:
		case 212:
		case 213:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 222:
		case 223:
		case 224:
		case 225:
		case 226:
		case 227:
		case 228:
		case 229:
		case 230:
		case 231:
		case 232:
		case 233:
		case 234:
		case 235:
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 243:
		case 244:
		case 245:
		case 246:
		case 247:
		case 248:
		case 249:
		case 250:
			if (func_755(iParam0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26513;
			}
			break;
		
		case 251:
		case 252:
		case 253:
		case 254:
		case 255:
		case 256:
		case 257:
		case 258:
		case 259:
		case 260:
		case 261:
		case 262:
		case 263:
			if (func_755(iParam0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26511;
			}
			break;
		
		case 264:
		case 265:
		case 266:
		case 267:
		case 268:
		case 269:
		case 270:
		case 271:
		case 272:
		case 273:
		case 274:
		case 275:
		case 276:
		case 277:
		case 278:
		case 279:
		case 280:
		case 281:
		case 282:
		case 283:
		case 284:
		case 285:
		case 286:
		case 287:
		case 288:
		case 289:
			return Global_262145.f_26511;
			break;
	}
	return 0;
}

int func_761(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 8:
			return 1;
		
		case 12:
			return 2;
		
		case 16:
			return 3;
		
		case 1:
			return 4;
		
		case 5:
			return 5;
		
		case 9:
			return 6;
		
		case 13:
			return 7;
		
		case 17:
			return 8;
		
		case 2:
			return 9;
		
		case 6:
			return 10;
		
		case 14:
			return 11;
		
		case 19:
			return 12;
		
		case 3:
			return 13;
		
		case 7:
			return 14;
		
		case 10:
			return 15;
		
		case 15:
			return 16;
		
		case 11:
			return 17;
		
		case 18:
			return 18;
		
		case 4:
			return 19;
		
		default:
	}
	return -1;
}

void func_762()
{
	if (unk_0xCE2C78E9FC0B01E3(func_763(unk_0x9E2D6C50374FCFA9())))
	{
		unk_0x7FF9609F5D8471AF(func_763(unk_0x9E2D6C50374FCFA9()));
		unk_0x0B92578FB47DA084(func_763(unk_0x9E2D6C50374FCFA9()));
		func_99(-1);
	}
}

int func_763(int iParam0)
{
	if (iParam0 == func_8())
	{
		return 0;
	}
	return Local_112[iParam0 /*5*/].f_2;
}

int func_764()
{
	if (((floor((unk_0x159F9B5A2920DF4E(2, 218) * 128f)) != 0 || floor((unk_0x159F9B5A2920DF4E(2, 219) * 128f)) != 0) || floor((unk_0x159F9B5A2920DF4E(2, 220) * 128f)) != 0) || floor((unk_0x159F9B5A2920DF4E(2, 221) * 128f)) != 0)
	{
		return 1;
	}
	if (unk_0x3A76A0944BE2C291(0))
	{
		if (unk_0xF01464D7AF0B7347(2, 33) || unk_0xF01464D7AF0B7347(2, 32))
		{
			return 1;
		}
	}
	return 0;
}

int func_765()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 12;
	iVar1 = func_793(unk_0x9E2D6C50374FCFA9());
	switch (iVar1)
	{
		case 10:
		case 15:
		case 14:
		case 19:
			iVar0 = 12;
			break;
		
		case 18:
			iVar0 = 13;
			break;
		
		default:
			iVar0 = 11;
			break;
	}
	return iVar0;
}

void func_766(bool bParam0)
{
	func_777(bParam0);
	func_768(bParam0);
	func_767();
}

void func_767()
{
	if (Local_113.f_45 != 10)
	{
		if (unk_0xE5965CDF24F93A9F(Local_113.f_72))
		{
			unk_0x8CE3D365F064F69E(Local_113.f_72, 0f, Local_113.f_18, 0f, 2, 1);
		}
	}
}

void func_768(bool bParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (!func_41(3))
	{
		Local_113.f_25 = unk_0x35DE445E5254AFED(unk_0x0A89FDFA763DCAED(), Local_113.f_16);
		Local_113.f_26 = unk_0x35DE445E5254AFED(unk_0x0A89FDFA763DCAED(), func_776(&(Local_113.f_16), bParam0));
		func_40(3);
	}
	iVar0 = unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Local_113.f_25));
	fVar1 = (1f - ((to_float(iVar0) / IntToFloat(Local_113.f_16)) * 1f));
	if (fVar1 < 0f)
	{
		fVar1 = 0f;
	}
	else if (fVar1 > 1f)
	{
		fVar1 = 1f;
	}
	fVar2 = pow((1f - fVar1), 3f);
	fVar3 = (1f - fVar2);
	Local_113.f_18 = func_775(Local_113.f_19, Local_113.f_20, fVar3);
	Local_113.f_21 = func_775(Local_113.f_19, Local_113.f_20, fVar3);
	if (Local_113.f_18 > IntToFloat((360 * Local_113.f_9)))
	{
		Local_113.f_9++;
	}
	if (Local_113.f_21 > (IntToFloat(Local_113.f_13 + 1) * to_float(18)))
	{
		Local_113.f_13++;
	}
	Local_113.f_14 = (Local_113.f_13 % 20);
	if (!func_41(17) && unk_0x9E2D6C50374FCFA9() == Local_111)
	{
		if (!unk_0x516FE5EF30DF734D(unk_0x0A89FDFA763DCAED(), Local_113.f_26))
		{
			func_795(func_765(), 0, 0, 1, 0);
			func_40(17);
		}
	}
	if (!unk_0x516FE5EF30DF734D(unk_0x0A89FDFA763DCAED(), Local_113.f_25))
	{
		func_774();
		Local_113.f_17 = 0;
		func_86();
		if (unk_0x9E2D6C50374FCFA9() == Local_111)
		{
			func_769();
			func_78(10);
		}
		else
		{
			func_78(17);
		}
	}
}

void func_769()
{
	char* sVar0;
	float fVar1;
	
	func_773(&sVar0, &fVar1);
	func_772(fVar1);
	func_770(func_162(&sVar0));
}

void func_770(char* sParam0)
{
	if (unk_0x78D9ADD511FEAD8B(Local_113.f_457))
	{
		Local_113.f_457 = unk_0xA9ADCC8D104AA552();
		unk_0xD336F8D9637B963F(Local_113.f_457, sParam0, func_771(), "dlc_vw_casino_lucky_wheel_sounds", 1, 0, 0);
	}
}

Vector3 func_771()
{
	return 1111.052f, 229.8579f, -49.133f;
}

void func_772(float fParam0)
{
	if (unk_0x78D9ADD511FEAD8B(Local_113.f_456))
	{
		Local_113.f_456 = unk_0xA9ADCC8D104AA552();
		unk_0xD336F8D9637B963F(Local_113.f_456, "Win", func_771(), "dlc_vw_casino_lucky_wheel_sounds", 1, 0, 0);
		unk_0x57973ADDF2BFAA90(Local_113.f_456, "winSize", fParam0);
	}
	else
	{
		unk_0x57973ADDF2BFAA90(Local_113.f_456, "winSize", fParam0);
	}
}

void func_773(char* sParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = func_793(unk_0x9E2D6C50374FCFA9());
	switch (iVar0)
	{
		case 1:
		case 17:
		case 5:
		case 9:
		case 13:
			StringCopy(sParam0, "Win_RP", 16);
			*uParam1 = 0f;
			break;
		
		case 2:
		case 6:
		case 14:
		case 4:
			StringCopy(sParam0, "Win_Cash", 16);
			*uParam1 = 0f;
			break;
		
		case 19:
			StringCopy(sParam0, "Win_Cash", 16);
			*uParam1 = 1f;
			break;
		
		case 3:
		case 7:
		case 10:
			StringCopy(sParam0, "Win_Chips", 16);
			*uParam1 = 0f;
			break;
		
		case 15:
			StringCopy(sParam0, "Win_Chips", 16);
			*uParam1 = 1f;
			break;
		
		case 11:
			StringCopy(sParam0, "Win_Mystery", 16);
			*uParam1 = 0f;
			break;
		
		case 18:
			StringCopy(sParam0, "Win_Car", 16);
			*uParam1 = 1f;
			break;
		
		default:
			StringCopy(sParam0, "Win_Clothes", 16);
			*uParam1 = 0f;
			break;
	}
}

void func_774()
{
	Local_113.f_18 = Local_113.f_20;
	Local_113.f_19 = Local_113.f_18;
	Local_113.f_10 = func_793(unk_0x9E2D6C50374FCFA9());
	func_807(Local_113.f_10, 0);
	Local_113.f_14 = func_793(unk_0x9E2D6C50374FCFA9());
	Local_113.f_7 = Local_113.f_14;
	func_77(3);
	Local_113.f_13 = Local_113.f_12;
}

float func_775(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

int func_776(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x9E2D6C50374FCFA9();
	if (bParam1)
	{
		iVar1 = Local_111;
	}
	switch (func_805(iVar1))
	{
		case 0:
			iVar0 = (*uParam0 - 2400);
			break;
		
		case 1:
			iVar0 = (*uParam0 - 2300);
			break;
		
		case 2:
			iVar0 = (*uParam0 - 2000);
			break;
	}
	if (iVar0 < 0)
	{
		iVar0 = *uParam0;
	}
	return iVar0;
}

void func_777(bool bParam0)
{
	int iVar0;
	
	if (func_41(2))
	{
		return;
	}
	iVar0 = func_783();
	Local_113.f_12 = (iVar0 + Local_113.f_8 * 20);
	Local_113.f_12 = (Local_113.f_12 + func_782(bParam0));
	Local_113.f_13 = Local_113.f_14;
	Local_113.f_20 = func_778(bParam0);
	Local_113.f_16 = (Local_113.f_15 * Local_113.f_12);
	func_40(2);
}

float func_778(bool bParam0)
{
	float fVar0;
	var uVar1;
	struct<3> Var2;
	float fVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	
	fVar0 = (IntToFloat(Local_113.f_12) * to_float(18));
	if (fVar0 < 180f)
	{
		fVar0 = (fVar0 + 360f);
		Local_113.f_12 += 20;
	}
	uVar1 = unk_0x7F0054A115D66F44(Local_113.f_72, "Base_pivot");
	Var2 = { unk_0x69FEBA414276C40E(Local_113.f_72, uVar1) };
	fVar3 = func_780(Var2.f_1);
	iVar4 = floor((fVar3 / 18f));
	fVar5 = to_float(iVar4 * 18);
	fVar6 = (360f - fVar5);
	fVar7 = unk_0x48053974ED6F63CE((fVar3 - fVar5));
	fVar0 = ((fVar0 - fVar6) - fVar7);
	iVar8 = func_805(unk_0x9E2D6C50374FCFA9());
	if (bParam0)
	{
		iVar8 = func_805(Local_111);
	}
	iVar9 = round((fVar0 / 18f));
	fVar0 = ((to_float(iVar9 * 18) + func_779(iVar8)) + IntToFloat(Local_113.f_10 * 18));
	fVar10 = (fVar0 * -1f);
	return fVar10;
}

float func_779(int iParam0)
{
	if (func_80(unk_0xE2D3D51028F0428A()))
	{
		switch (iParam0)
		{
			case 0:
				return 0.4746f;
			
			case 1:
				return ((to_float(18) * 2f) - 3.4757f);
			
			case 2:
				return (to_float(4) + 1.9002f);
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return (to_float(4) + 1.3709f);
			
			case 1:
				return (to_float(4) + 3.5184f);
			
			case 2:
				return (to_float(18) + 14.2192f);
			}
		
		default:
	}
	return 0f;
}

float func_780(float fParam0)
{
	fParam0 = func_781(fParam0);
	if (fParam0 < 0f)
	{
		return (360f + fParam0);
	}
	return fParam0;
}

float func_781(float fParam0)
{
	while (fParam0 > 180f)
	{
		fParam0 = (fParam0 - 360f);
	}
	while (fParam0 < -180f)
	{
		fParam0 = (fParam0 + 360f);
	}
	return fParam0;
}

int func_782(bool bParam0)
{
	int iVar0;
	
	iVar0 = unk_0x9E2D6C50374FCFA9();
	if (bParam0)
	{
		iVar0 = Local_111;
	}
	switch (func_805(iVar0))
	{
		case 1:
			if (Local_113.f_12 <= 30)
			{
				return 20;
			}
			break;
	}
	return 0;
}

int func_783()
{
	int iVar0;
	int iVar1;
	
	if (Local_113.f_14 > func_793(unk_0x9E2D6C50374FCFA9()))
	{
		iVar1 = (20 - Local_113.f_14);
		iVar0 = (iVar1 + func_793(unk_0x9E2D6C50374FCFA9()));
	}
	else
	{
		iVar0 = (func_793(unk_0x9E2D6C50374FCFA9()) - Local_113.f_14);
	}
	return iVar0;
}

int func_784(bool bParam0)
{
	char* sVar0;
	char* sVar1;
	float fVar2;
	float fVar3;
	
	if (unk_0xE5965CDF24F93A9F(Local_113.f_72))
	{
		if (!bParam0)
		{
			sVar0 = func_154(func_805(unk_0x9E2D6C50374FCFA9()));
		}
		else
		{
			sVar0 = func_154(func_805(Local_111));
		}
		sVar1 = func_79();
		if (!unk_0xACC32B78196FBC2A(sVar0) && !unk_0xACC32B78196FBC2A(sVar1))
		{
			if (unk_0xFCF559C8631ABED7(Local_113.f_72, sVar1, sVar0, 3))
			{
				fVar2 = 1f;
				fVar3 = unk_0xD01FAFCE275C94F3(Local_113.f_72, sVar1, sVar0);
				if (fVar3 == fVar2)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_785(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 8;
		
		case 1:
			return 9;
		
		case 2:
			return 10;
		
		default:
	}
	return -1;
}

int func_786(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	char* sVar3;
	float fVar4;
	var uVar5;
	
	iVar0 = unk_0xE2D3D51028F0428A();
	iVar1 = unk_0x9E2D6C50374FCFA9();
	if (bParam1)
	{
		iVar0 = unk_0x407E03586628E458(Local_111);
		iVar1 = Local_111;
	}
	if (func_127(iVar0))
	{
		sVar2 = func_788(iParam0);
		sVar3 = func_79();
		if (!unk_0xACC32B78196FBC2A(sVar2) && !unk_0xACC32B78196FBC2A(sVar3))
		{
			if (unk_0xFCF559C8631ABED7(iVar0, sVar3, sVar2, 3))
			{
				fVar4 = func_787(iParam0);
				uVar5 = unk_0x57736A7B8965A88A(func_763(iVar1));
				if (((!unk_0xCE2C78E9FC0B01E3(uVar5) || unk_0x54DE1614490C2A83(uVar5) >= fVar4) || unk_0xD9E56EC8ED04E45E(iVar0, unk_0x2E87280918B16506("BLEND_OUT"))) || unk_0xD9E56EC8ED04E45E(iVar0, unk_0x2E87280918B16506("EARLY_OUT")))
				{
					if (bParam2)
					{
						func_762();
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

float func_787(int iParam0)
{
	float fVar0;
	
	fVar0 = 0.96f;
	switch (iParam0)
	{
		case 2:
			if (func_80(unk_0xE2D3D51028F0428A()))
			{
				fVar0 = 0.7f;
			}
			break;
	}
	return fVar0;
}

char* func_788(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "Enter_to_ArmRaisedIDLE";
			break;
		
		case 1:
			sVar0 = "ArmRaisedIDLE";
			break;
		
		case 2:
			sVar0 = "ArmRaisedIDLE_to_SpinReadyIDLE";
			break;
		
		case 3:
			sVar0 = "SpinReadyIDLE";
			break;
		
		case 4:
			sVar0 = "SpinStart_ArmRaisedIDLE_to_BaseIDLE";
			break;
		
		case 5:
			if (func_41(16))
			{
				sVar0 = "spinreadyidle_to_spinningidle_low";
			}
			else
			{
				sVar0 = "ArmRaisedIDLE_to_SpinningIDLE_Low";
			}
			break;
		
		case 6:
			if (func_41(16))
			{
				sVar0 = "spinreadyidle_to_spinningidle_med";
			}
			else
			{
				sVar0 = "ArmRaisedIDLE_to_SpinningIDLE_Med";
			}
			break;
		
		case 7:
			if (func_41(16))
			{
				sVar0 = "spinreadyidle_to_spinningidle_high";
			}
			else
			{
				sVar0 = "ArmRaisedIDLE_to_SpinningIDLE_High";
			}
			break;
		
		case 8:
			sVar0 = "SpinningIDLE_Low";
			break;
		
		case 9:
			sVar0 = "SpinningIDLE_Medium";
			break;
		
		case 10:
			sVar0 = "SpinningIDLE_High";
			break;
		
		case 11:
			sVar0 = "Win";
			break;
		
		case 12:
			sVar0 = "Win_Big";
			break;
		
		case 13:
			sVar0 = "Win_Huge";
			break;
		
		case 14:
			sVar0 = "Exit_to_Standing";
			break;
		
		case 15:
			sVar0 = "SpinReadyIDLE_to_ArmRaisedIDLE";
			break;
	}
	return sVar0;
}

void func_789(float fParam0)
{
	int iVar0;
	
	if (func_41(27))
	{
		if (Local_113.f_455 == -1 && unk_0x78D9ADD511FEAD8B(Local_113.f_455))
		{
			Local_113.f_455 = unk_0xA9ADCC8D104AA552();
			iVar0 = 1;
			if (fParam0 > 0.5f)
			{
				iVar0 = 0;
			}
			unk_0xD336F8D9637B963F(Local_113.f_455, "Spin_Single_Ticks", func_771(), "dlc_vw_casino_lucky_wheel_sounds", iVar0, 0, 0);
			unk_0x57973ADDF2BFAA90(Local_113.f_455, "spinSpeed", fParam0);
		}
		else
		{
			unk_0xF889BDFCC181BA9F(Local_113.f_455);
			unk_0xCDBCC1BC1184B002(Local_113.f_455);
			Local_113.f_455 = -1;
			func_789(fParam0);
		}
	}
}

void func_790(float fParam0)
{
	if (unk_0x78D9ADD511FEAD8B(Local_113.f_454) && Local_113.f_454 == -1)
	{
		Local_113.f_454 = unk_0xA9ADCC8D104AA552();
		unk_0xD336F8D9637B963F(Local_113.f_454, "Spin_Start", func_771(), "dlc_vw_casino_lucky_wheel_sounds", 1, 0, 0);
		unk_0x57973ADDF2BFAA90(Local_113.f_454, "spinSpeed", uParam0);
	}
	else
	{
		unk_0x57973ADDF2BFAA90(Local_113.f_454, "spinSpeed", fParam0);
	}
}

void func_791()
{
	var uVar0;
	struct<3> Var1;
	float fVar2;
	struct<3> Var3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	float fVar8;
	
	uVar0 = unk_0x7F0054A115D66F44(Local_113.f_72, "Base_pivot");
	Var1 = { unk_0x69FEBA414276C40E(Local_113.f_72, uVar0) };
	fVar2 = func_780(Var1.f_1);
	Var3 = { unk_0x63A8BF5E6C2BF85C(Local_113.f_72, 2) };
	fVar4 = func_780(Var3.f_1);
	if (!func_784(0))
	{
		fVar5 = fVar2;
	}
	else if (fVar4 == 0f && fVar2 != 0f)
	{
		fVar5 = fVar2;
	}
	else
	{
		fVar5 = fVar4;
	}
	if (!func_41(26))
	{
		Local_113.f_453 = fVar5;
		func_40(26);
	}
	fVar6 = unk_0x48053974ED6F63CE((fVar5 - Local_113.f_453));
	if (fVar6 > 100f)
	{
		fVar6 = unk_0x48053974ED6F63CE((fVar5 - (360f + Local_113.f_453)));
	}
	iVar7 = unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Local_113.f_25));
	fVar8 = (to_float(iVar7) / IntToFloat(Local_113.f_16));
	if (fVar8 < 0f)
	{
		fVar8 = 0f;
	}
	else if (fVar8 > 1f)
	{
		fVar8 = 1f;
	}
	if (func_792() == 0)
	{
		fVar8 = (fVar8 / 2f);
	}
	Local_113.f_452 = fVar8;
	if (fVar6 >= 18f)
	{
		func_40(27);
		Local_113.f_453 = fVar5;
	}
	else
	{
		func_77(27);
	}
	Local_113.f_452 = fVar8;
}

int func_792()
{
	if (func_157(unk_0x9E2D6C50374FCFA9()) > 3000)
	{
		return 2;
	}
	else if (func_157(unk_0x9E2D6C50374FCFA9()) > 1500)
	{
		return 1;
	}
	return 0;
}

int func_793(int iParam0)
{
	if (iParam0 == func_8())
	{
		return 0;
	}
	return Local_112[iParam0 /*5*/];
}

void func_794(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_8828)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2359296[func_184() /*5559*/].f_675.f_4239[iVar0 /*3*/] == iParam0)
		{
			if (Global_1574732.f_1[iVar0] == -1)
			{
				Global_1574732.f_1[iVar0] = iParam0;
				Global_1574732 = 1;
				return;
			}
		}
		iVar0++;
	}
}

void func_795(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	int iVar4;
	char cVar5[64];
	var uVar6;
	
	if (bParam3)
	{
	}
	Local_113.f_22 = func_788(iParam0);
	Var0 = { func_802(bParam1) };
	Var1 = { 0f, 0f, func_797(bParam1) };
	fVar2 = 2f;
	fVar3 = -2f;
	if ((iParam0 == 5 || iParam0 == 6) || iParam0 == 7)
	{
		fVar2 = 8f;
		fVar3 = -1.5f;
	}
	if ((iParam0 == 8 || iParam0 == 9) || iParam0 == 10)
	{
		fVar2 = 1.5f;
	}
	if (func_80(unk_0xE2D3D51028F0428A()))
	{
		if (iParam0 == 3)
		{
			fVar2 = 4f;
			fVar3 = -4f;
		}
	}
	if (iParam0 == 2 || iParam0 == 1)
	{
		fVar2 = 4f;
		fVar3 = -4f;
	}
	if (iParam0 == 14)
	{
		fVar2 = 4f;
		fVar3 = -4f;
	}
	iVar4 = 5;
	if (bParam2)
	{
		iVar4 = 69;
	}
	func_99(unk_0x497E09037A63D346(Var0, Var1, 2, iParam4, bParam2, 1065353216, 0, 1065353216));
	unk_0xFF47C397A9269A1A(unk_0xE2D3D51028F0428A(), func_763(unk_0x9E2D6C50374FCFA9()), Local_113.f_23, Local_113.f_22, fVar2, fVar3, iVar4, 0, 1148846080, 0);
	unk_0x60E9DD146055C13E(func_763(unk_0x9E2D6C50374FCFA9()));
	StringCopy(&cVar5, Local_113.f_22, 64);
	StringConCat(&cVar5, "_Facial", 64);
	unk_0x4EE98FB70F8A09DE(unk_0xE2D3D51028F0428A(), &cVar5, Local_113.f_23);
	if (func_796(Local_113.f_22))
	{
		uVar6 = func_154(func_805(unk_0x9E2D6C50374FCFA9()));
		unk_0x8CE3D365F064F69E(Local_113.f_72, 0f, 0f, 0f, 2, 1);
		unk_0xF07805FFBF204ED8(Local_113.f_72, uVar6, Local_113.f_23, 1000f, 0, 1, 0, 0f, 2);
		unk_0xEC5CB2A3F2052039(Local_113.f_72);
	}
}

int func_796(char* sParam0)
{
	if ((unk_0x3C57C2F07FEE34D2(uParam0, func_788(7)) || unk_0x3C57C2F07FEE34D2(sParam0, func_788(6))) || unk_0x3C57C2F07FEE34D2(sParam0, func_788(5)))
	{
		return 1;
	}
	return 0;
}

float func_797(bool bParam0)
{
	if (bParam0)
	{
		return func_799();
	}
	else
	{
		return func_798();
	}
	return 0f;
}

float func_798()
{
	return 0f;
}

var func_799()
{
	struct<3> Var0;
	
	Var0 = { unk_0x34AEDCEA59226CCB(Local_113.f_23, Local_113.f_22, func_800(Local_113.f_22), 0f, 0f, 0f, 0, 2) };
	return Var0.f_2;
}

Vector3 func_800(var uParam0)
{
	struct<3> Var0;
	int iVar1;
	
	Var0 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
	iVar1 = func_801(uParam0);
	if (iVar1 == 0)
	{
		Var0 = { func_771() };
	}
	return Var0;
}

int func_801(char* sParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0x3C57C2F07FEE34D2(uParam0, "Enter_to_ArmRaisedIDLE"))
	{
		iVar0 = 0;
	}
	else if (unk_0x3C57C2F07FEE34D2(sParam0, "ArmRaisedIDLE"))
	{
		iVar0 = 1;
	}
	else if (unk_0x3C57C2F07FEE34D2(sParam0, "ArmRaisedIDLE_to_SpinReadyIDLE"))
	{
		iVar0 = 2;
	}
	else if (unk_0x3C57C2F07FEE34D2(sParam0, "SpinReadyIDLE"))
	{
		iVar0 = 3;
	}
	else if (unk_0x3C57C2F07FEE34D2(sParam0, "SpinStart_ArmRaisedIDLE_to_BaseIDLE"))
	{
		iVar0 = 4;
	}
	else if (unk_0x3C57C2F07FEE34D2(sParam0, "spinreadyidle_to_spinningidle_low") || unk_0x3C57C2F07FEE34D2(sParam0, "ArmRaisedIDLE_to_SpinningIDLE_Low"))
	{
		iVar0 = 5;
	}
	else if (unk_0x3C57C2F07FEE34D2(sParam0, "spinreadyidle_to_spinningidle_med") || unk_0x3C57C2F07FEE34D2(sParam0, "ArmRaisedIDLE_to_SpinningIDLE_Med"))
	{
		iVar0 = 6;
	}
	else if (unk_0x3C57C2F07FEE34D2(sParam0, "spinreadyidle_to_spinningidle_high") || unk_0x3C57C2F07FEE34D2(sParam0, "ArmRaisedIDLE_to_SpinningIDLE_High"))
	{
		iVar0 = 7;
	}
	else if (unk_0x3C57C2F07FEE34D2(sParam0, "SpinningIDLE_Low"))
	{
		iVar0 = 8;
	}
	else if (unk_0x3C57C2F07FEE34D2(sParam0, "SpinningIDLE_Med"))
	{
		iVar0 = 9;
	}
	else if (unk_0x3C57C2F07FEE34D2(sParam0, "SpinningIDLE_High"))
	{
		iVar0 = 10;
	}
	else if (unk_0x3C57C2F07FEE34D2(sParam0, "Win"))
	{
		iVar0 = 11;
	}
	else if (unk_0x3C57C2F07FEE34D2(sParam0, "Win_Big"))
	{
		iVar0 = 12;
	}
	else if (unk_0x3C57C2F07FEE34D2(sParam0, "Win_Huge"))
	{
		iVar0 = 13;
	}
	else if (unk_0x3C57C2F07FEE34D2(sParam0, "Exit_to_Standing"))
	{
		iVar0 = 14;
	}
	else if (unk_0x3C57C2F07FEE34D2(sParam0, "SpinReadyIDLE_to_ArmRaisedIDLE"))
	{
		iVar0 = 15;
	}
	return iVar0;
}

Vector3 func_802(bool bParam0)
{
	if (bParam0)
	{
		return func_803();
	}
	else
	{
		return func_54();
	}
	return 0f, 0f, 0f;
}

Vector3 func_803()
{
	return unk_0x3DBAB8E11699EAEE(Local_113.f_23, Local_113.f_22, func_54(), 0f, 0f, 0f, 0, 2);
}

int func_804(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		
		case 1:
			return 6;
		
		case 2:
			return 7;
		
		default:
	}
	return -1;
}

int func_805(int iParam0)
{
	if (iParam0 == func_8())
	{
		return -1;
	}
	return Local_112[iParam0 /*5*/].f_4;
}

void func_806(bool bParam0)
{
	if (unk_0x9E2D6C50374FCFA9() != func_8())
	{
		if (bParam0)
		{
			if (!unk_0xE2D0C323A1AE5D85(Local_112[unk_0x9E2D6C50374FCFA9() /*5*/].f_1, 0))
			{
				unk_0xCED9E32812D6C7C7(&(Local_112[unk_0x9E2D6C50374FCFA9() /*5*/].f_1), 0);
			}
		}
		else if (unk_0xE2D0C323A1AE5D85(Local_112[unk_0x9E2D6C50374FCFA9() /*5*/].f_1, 0))
		{
			unk_0xB0550BC91B0159D6(&(Local_112[unk_0x9E2D6C50374FCFA9() /*5*/].f_1), 0);
		}
	}
}

void func_807(var uParam0, int iParam1)
{
	struct<4> Var0;
	int iVar1;
	
	Var0 = 2032669874;
	Var0.f_1 = unk_0x9E2D6C50374FCFA9();
	Var0.f_2 = uParam0;
	Var0.f_3 = iParam1;
	iVar1 = func_242(1, 1);
	if (iVar1 != -1)
	{
		unk_0x2700C00F82C16BF0(1, &Var0, 4, iVar1);
	}
}

bool func_808(int iParam0)
{
	if (iParam0 == func_8())
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(Local_112[iParam0 /*5*/].f_1, 0);
}

void func_809()
{
	if (!func_41(5))
	{
		Local_113.f_2 = unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Local_113.f_24));
		if (func_41(15))
		{
			func_77(15);
			func_812();
			func_40(5);
		}
		if (!unk_0x516FE5EF30DF734D(unk_0x0A89FDFA763DCAED(), Local_113.f_24) || func_811())
		{
			Local_113.f_2 = 0;
			if (func_810(3))
			{
				func_795(14, 0, 0, 1, 0);
				func_77(4);
				func_40(10);
				func_78(12);
			}
		}
	}
}

int func_810(int iParam0)
{
	char* sVar0;
	char* sVar1;
	
	if (func_127(unk_0xE2D3D51028F0428A()))
	{
		sVar0 = func_788(iParam0);
		sVar1 = func_79();
		if (!unk_0xACC32B78196FBC2A(sVar0) && !unk_0xACC32B78196FBC2A(sVar1))
		{
			return unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), sVar1, sVar0, 3);
		}
	}
	return 0;
}

int func_811()
{
	if (func_28())
	{
		return 1;
	}
	return 0;
}

void func_812()
{
	func_100(Local_113.f_2);
	Local_113.f_15 = func_156();
	Local_113.f_8 = func_155();
	func_95(func_792());
}

void func_813()
{
	Local_113.f_3 = floor((unk_0x664C0A1BF5E133FA(2, 218) * 128f));
	Local_113.f_4 = floor((unk_0x664C0A1BF5E133FA(2, 219) * 128f));
}

void func_814()
{
	func_817();
	func_813();
	if (func_41(18))
	{
		if (func_786(2, 0, 0))
		{
			func_795(3, 0, 1, 0, 0);
			func_69(&(Local_113.f_27));
			func_77(18);
		}
		else if (func_41(12))
		{
			func_40(16);
			func_78(8);
		}
	}
	else if (!func_786(3, 0, 0))
	{
		if (unk_0x3A76A0944BE2C291(0))
		{
			func_46("LUCK_W_SPIN_PC", -1);
		}
		else
		{
			func_46("LUCK_WHEEL_SPIN", -1);
		}
		if (func_41(12))
		{
			func_69(&(Local_113.f_27));
			func_40(16);
			func_78(8);
		}
	}
	else if (func_816() != 7)
	{
		if (!func_815() || func_41(22))
		{
			func_795(15, 0, 0, 0, 1);
			func_78(7);
		}
	}
}

bool func_815()
{
	return ((Local_113.f_3 <= 20 && Local_113.f_3 >= -20) && Local_113.f_4 <= -120);
}

int func_816()
{
	return Local_113.f_45;
}

void func_817()
{
	if (func_816() == 6)
	{
		if (func_72(&(Local_113.f_39)))
		{
			if (func_70(&(Local_113.f_39), 10000, 0))
			{
				func_40(22);
			}
		}
	}
	if (func_41(12) || func_41(13))
	{
		return;
	}
	if (!func_72(&(Local_113.f_27)))
	{
		func_71(&(Local_113.f_27), 0, 0);
	}
	else if (!func_70(&(Local_113.f_27), 5000, 0))
	{
		if (Local_113.f_45 != 5)
		{
			if (func_818())
			{
				Local_113.f_24 = unk_0x35DE445E5254AFED(unk_0x0A89FDFA763DCAED(), 5000);
				func_40(12);
				func_40(15);
				func_69(&(Local_113.f_27));
			}
		}
		else if (func_818())
		{
			func_40(15);
			func_78(8);
		}
		else if (func_815() && !func_41(22))
		{
			func_71(&(Local_113.f_39), 0, 0);
			func_40(12);
			func_69(&(Local_113.f_27));
		}
	}
	else if (func_816() == 6)
	{
		if (!func_815() || func_41(22))
		{
			func_795(15, 0, 0, 0, 1);
			func_78(7);
		}
	}
	else
	{
		func_40(13);
		func_69(&(Local_113.f_27));
	}
}

bool func_818()
{
	if (unk_0x3A76A0944BE2C291(0))
	{
		return unk_0xF09A4F413B0D30EB(2, 33);
	}
	return ((Local_113.f_3 <= 20 && Local_113.f_3 >= -20) && Local_113.f_4 >= 120);
}

void func_819()
{
	if (func_786(15, 0, 0))
	{
		func_77(12);
		func_77(4);
		func_69(&(Local_113.f_27));
		func_795(1, 0, 1, 0, 0);
		func_78(5);
	}
}

void func_820()
{
	if (!func_41(4))
	{
		Local_113.f_24 = unk_0x35DE445E5254AFED(unk_0x0A89FDFA763DCAED(), 5000);
		func_40(4);
	}
	func_817();
	func_813();
	if (unk_0x3A76A0944BE2C291(0))
	{
		func_46("LUCK_W_SPIN_PC", -1);
	}
	else
	{
		func_46("LUCK_WHEEL_SPIN", -1);
	}
	if (func_41(12) && !func_811())
	{
		func_795(2, 0, 0, 0, 0);
		func_40(18);
		func_69(&(Local_113.f_27));
		func_78(6);
		func_77(12);
	}
	else if (func_41(13) || func_811())
	{
		func_795(14, 0, 0, 1, 0);
		func_77(4);
		func_40(10);
		func_78(12);
	}
}

void func_821()
{
	func_825();
	if (!func_41(7))
	{
		if (!func_41(8))
		{
			unk_0x8FB472886552D737(Local_113.f_23);
			if (unk_0x6F940C2636C076AD(Local_113.f_23))
			{
				if (unk_0x174CED88B97C78D9(unk_0xE2D3D51028F0428A(), 2106541073) != 1 && unk_0x174CED88B97C78D9(unk_0xE2D3D51028F0428A(), 2106541073) != 0)
				{
					unk_0x13C3030981EA7C3B(unk_0xE2D3D51028F0428A(), func_802(1), 1f, 5000, func_797(1), 0.001f);
					func_71(&(Local_113.f_31), 0, 0);
					func_40(8);
				}
			}
		}
		else if (unk_0x6F940C2636C076AD(Local_113.f_23))
		{
			if (func_822())
			{
				func_795(0, 0, 0, 1, 0);
				func_69(&(Local_113.f_31));
				func_40(7);
			}
		}
	}
	else if (func_786(0, 0, 0))
	{
		func_795(1, 0, 1, 0, 0);
		func_77(7);
		func_40(9);
	}
}

int func_822()
{
	if ((func_824(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), func_802(1), 0.01f, 0) && func_823(unk_0x82FE2343F8BDFF0B(unk_0xE2D3D51028F0428A()), func_797(1), 5f)) || func_70(&(Local_113.f_31), 5000, 0))
	{
		return 1;
	}
	return 0;
}

int func_823(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

int func_824(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (unk_0x48053974ED6F63CE((Param0.x - Param1.x)) <= fParam2)
		{
			if (unk_0x48053974ED6F63CE((Param0.f_1 - Param1.f_1)) <= fParam2)
			{
				if (unk_0x48053974ED6F63CE((Param0.f_2 - Param1.f_2)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x48053974ED6F63CE((Param0.x - Param1.x)) <= fParam2)
	{
		if (unk_0x48053974ED6F63CE((Param0.f_1 - Param1.f_1)) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

void func_825()
{
	if (!func_41(6))
	{
		if (!func_828())
		{
			func_827();
		}
		if (!func_106())
		{
			func_826();
		}
		unk_0xEDD332B8622A1AAA();
		unk_0xB60709BD0E075903(0);
		func_40(6);
	}
}

void func_826()
{
	if (!Global_2703656.f_847.f_10)
	{
		Global_2703656.f_847.f_10 = 1;
	}
}

void func_827()
{
	Global_2703656.f_847.f_9 = 1;
}

bool func_828()
{
	return Global_2703656.f_847.f_9;
}

void func_829()
{
	func_833(&(Local_113.f_459));
	unk_0x07899AAA5D680386(2, 202);
	if (func_513(0, -1, 0))
	{
		if (func_832(0))
		{
			func_831();
			func_94(0);
		}
		else
		{
			func_469(-1, 1, 1);
		}
		if (!func_539())
		{
			func_456("CAS_DIS_MAIN", 0, 0);
		}
		else
		{
			func_456("CAS_DIS_MAIN2", 0, 0);
		}
		func_830();
		func_418(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
	}
}

void func_830()
{
	unk_0x07899AAA5D680386(2, 202);
	if (!unk_0x3E6C9DAD84CEFED1())
	{
		unk_0x07899AAA5D680386(0, 200);
		unk_0x07899AAA5D680386(2, 200);
	}
	if ((Local_113.f_459.f_10 || func_70(&(Local_113.f_41), 20000, 0)) || func_25(1, 1))
	{
		unk_0x91DFC8F68F6D9B05(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", 1);
		unk_0xB0550BC91B0159D6(&(Local_113.f_1), 3);
		func_78(17);
		func_74(1);
	}
	else if (Local_113.f_459.f_9)
	{
		unk_0x91DFC8F68F6D9B05(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", 1);
		func_78(3);
		unk_0xCED9E32812D6C7C7(&(Local_113.f_1), 3);
	}
}

void func_831()
{
	func_512(0, 0);
	func_503("CAS_BLP_DT");
	func_505(1, 2, 1, 1, 1);
	func_506(1, 1, 0, 0, 0);
	unk_0x91DFC8F68F6D9B05(-1, "DLC_VW_RULES", "dlc_vw_table_games_frontend_sounds", 1);
	func_508(1, "CasinoUI_Lucky_Wheel", "CasinoUI_Lucky_Wheel");
	func_408(202, "TCP_EXIT", -1);
	func_408(201, "TCP_CONT", -1);
}

bool func_832(int iParam0)
{
	return unk_0xE2D0C323A1AE5D85(Local_113.f_459, iParam0);
}

void func_833(var uParam0)
{
	if (unk_0x174CED88B97C78D9(unk_0xE2D3D51028F0428A(), 2106541073) != 1)
	{
		if (unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()))
		{
			unk_0x03A927199A2DFE46(unk_0xE2D3D51028F0428A());
			func_115(unk_0x9E2D6C50374FCFA9(), 0, 33024, 0);
		}
	}
	func_834(uParam0);
}

void func_834(var uParam0)
{
	func_838(&(uParam0->f_4), &(uParam0->f_6), &(uParam0->f_5), &(uParam0->f_7), 0);
	uParam0->f_9 = (unk_0xF09A4F413B0D30EB(2, 201) || unk_0xF01464D7AF0B7347(2, 201));
	uParam0->f_10 = (unk_0xF09A4F413B0D30EB(2, 202) || unk_0xF01464D7AF0B7347(2, 202));
	uParam0->f_11 = (uParam0->f_6 < -64 || unk_0xF09A4F413B0D30EB(2, 188));
	uParam0->f_12 = (uParam0->f_6 > 64 || unk_0xF09A4F413B0D30EB(2, 187));
	unk_0xC43E67C9BA871ECB();
	if ((((func_513(0, -1, 0) && unk_0x1A76A9A82BD6228C() == 0) && !unk_0xDFA2E5162727D6D2()) && !unk_0x3E6C9DAD84CEFED1()) && !Global_100026.f_1457)
	{
		if (unk_0x8FE9914D4872D601() && !unk_0xD199EE48D2842EB1())
		{
			if (unk_0xE360D4C4CE76E4BB(2))
			{
				unk_0x7653D561C9574763(0, 1, 1);
				unk_0x7653D561C9574763(0, 2, 1);
				unk_0x7653D561C9574763(2, 200, 1);
				unk_0x5089DD830FA61D71(0, 237, 1);
				unk_0x5089DD830FA61D71(0, 238, 1);
				unk_0x5089DD830FA61D71(0, 241, 1);
				unk_0x5089DD830FA61D71(0, 242, 1);
				if ((Global_4534059 == -1 || Global_4534059 == -4) || Global_4534059 == -6)
				{
					unk_0x5089DD830FA61D71(1, 1, 1);
					unk_0x5089DD830FA61D71(1, 2, 1);
				}
				else
				{
					unk_0x7653D561C9574763(1, 1, 1);
					unk_0x7653D561C9574763(1, 2, 1);
				}
				func_515(0, 0, 0, 1);
				func_837(0, -1, 1);
			}
			if (func_416())
			{
				if (Global_4534059 == uParam0->f_1)
				{
					uParam0->f_9 = 1;
				}
				else
				{
					uParam0->f_1 = Global_4534059;
					func_469(uParam0->f_1, 1, 1);
				}
			}
			if (func_403())
			{
				uParam0->f_10 = 1;
			}
			if (func_836(0, 0, 0))
			{
				uParam0->f_11 = 1;
			}
			if (func_835(0, 0, 0))
			{
				uParam0->f_12 = 1;
			}
		}
	}
}

int func_835(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x3A76A0944BE2C291(2))
	{
		if (Global_4534059 == -3)
		{
			if ((unk_0x4C1B8C5717647539(2, 237) && iParam0) || unk_0xF09A4F413B0D30EB(2, 237))
			{
				return 1;
			}
		}
		if (iParam2 == 0)
		{
			if (unk_0x4C1B8C5717647539(2, 242) || (unk_0x0DBA73788F6E3C5F(2, 242) && iParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_836(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x3A76A0944BE2C291(2))
	{
		if (Global_4534059 == -2)
		{
			if ((unk_0x4C1B8C5717647539(2, 237) && iParam0) || unk_0xF09A4F413B0D30EB(2, 237))
			{
				return 1;
			}
		}
		if (iParam2 == 0)
		{
			if (unk_0x4C1B8C5717647539(2, 241) || (unk_0x0DBA73788F6E3C5F(2, 241) && iParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_837(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0x3A76A0944BE2C291(2))
	{
		return 0;
	}
	if (unk_0xF1EC2C71FD1371B8() || unk_0x3E6C9DAD84CEFED1())
	{
		return 0;
	}
	if (bParam2)
	{
		unk_0x60236500251FDE8E();
	}
	if (Global_4534059 == -6)
	{
		unk_0x147141484022751B(4);
		if (iParam0 && unk_0x4C1B8C5717647539(2, 237))
		{
			return 1;
		}
		else
		{
			Global_4534059 = -1;
			return 0;
		}
	}
	if (((Global_4534059 > -1 || Global_4534059 == -3) || Global_4534059 == -2) || unk_0xFF792DDC17AFA777())
	{
		unk_0x147141484022751B(1);
		return 0;
	}
	if (Global_4534059 == -1 && iParam0)
	{
		if (unk_0x4C1B8C5717647539(2, 237))
		{
			unk_0x147141484022751B(4);
			Global_4534059 = -6;
			return 1;
		}
		else
		{
			unk_0x147141484022751B(3);
			return 0;
		}
	}
	unk_0x147141484022751B(1);
	return 0;
}

void func_838(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = floor((unk_0x664C0A1BF5E133FA(2, 218) * 127f));
	*uParam1 = floor((unk_0x664C0A1BF5E133FA(2, 219) * 127f));
	*uParam2 = floor((unk_0x664C0A1BF5E133FA(2, 220) * 127f));
	*uParam3 = floor((unk_0x664C0A1BF5E133FA(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = floor((unk_0x159F9B5A2920DF4E(2, 218) * 127f));
			*uParam1 = floor((unk_0x159F9B5A2920DF4E(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = floor((unk_0x159F9B5A2920DF4E(2, 220) * 127f));
			*uParam3 = floor((unk_0x159F9B5A2920DF4E(2, 221) * 127f));
		}
	}
}

void func_839(int iParam0)
{
	if (!unk_0xE2D0C323A1AE5D85(Local_113.f_459, iParam0))
	{
		unk_0xCED9E32812D6C7C7(&(Local_113.f_459), iParam0);
	}
}

void func_840(int iParam0, bool bParam1)
{
	if (iParam0 == func_8())
	{
		return;
	}
	if (bParam1)
	{
		if (!unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_319.f_4, 6))
		{
			unk_0xCED9E32812D6C7C7(&(Global_2689156[iParam0 /*453*/].f_319.f_4), 6);
		}
	}
	else if (unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_319.f_4, 6))
	{
		unk_0xB0550BC91B0159D6(&(Global_2689156[iParam0 /*453*/].f_319.f_4), 6);
	}
}

float func_841(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f;
			break;
		
		case 1:
			return 18f;
			break;
		
		case 2:
			return 36f;
			break;
		
		case 3:
			return 54f;
			break;
		
		case 4:
			return 72f;
			break;
		
		case 5:
			return 90f;
			break;
		
		case 6:
			return 108f;
			break;
		
		case 7:
			return 126f;
			break;
		
		case 8:
			return 144f;
			break;
		
		case 9:
			return 162f;
			break;
		
		case 10:
			return 180f;
			break;
		
		case 11:
			return 198f;
			break;
		
		case 12:
			return 216f;
			break;
		
		case 13:
			return 234f;
			break;
		
		case 14:
			return 252f;
			break;
		
		case 15:
			return 270f;
			break;
		
		case 16:
			return 288f;
			break;
		
		case 17:
			return 306f;
			break;
		
		case 18:
			return 324f;
			break;
		
		case 19:
			return 342f;
			break;
	}
	return 0f;
}

void func_842()
{
	if (func_38("LW_PLAY"))
	{
		unk_0x3410421C60BF7143(1);
	}
	if (!func_47(0))
	{
		func_77(11);
		if (unk_0xE2D0C323A1AE5D85(Global_1946934.f_6, 4))
		{
			if (func_843("CAS_MG_MEMB2", func_43(0)))
			{
				unk_0x3410421C60BF7143(1);
			}
			unk_0xB0550BC91B0159D6(&(Global_1946934.f_6), 4);
		}
		if (func_41(20))
		{
			if (func_38("LUCKY_WHEEL_US"))
			{
				unk_0x3410421C60BF7143(1);
			}
			func_77(20);
		}
		if (func_38("CASINO_LUCK_WD"))
		{
			unk_0x3410421C60BF7143(1);
		}
		if (func_41(25))
		{
			if (func_38("CAS_MG_CBAN"))
			{
				unk_0x3410421C60BF7143(1);
				func_77(25);
			}
		}
		if (func_41(28))
		{
			if (func_38("CAS_LW_REGL"))
			{
				unk_0x3410421C60BF7143(1);
				func_77(28);
			}
		}
	}
}

bool func_843(char* sParam0, int iParam1)
{
	unk_0xB65782D82090BB33(sParam0);
	unk_0x2AE954BA77A66307(uParam1);
	return unk_0x73CB3406A86A3A02(0);
}

void func_844()
{
	func_97();
	func_853();
	func_852();
	func_846();
	func_114(unk_0x9E2D6C50374FCFA9(), 0, 256);
	Local_113.f_23 = func_79();
	Local_113.f_22 = func_788(0);
	Local_113.f_46 = func_845();
}

int func_845()
{
	return 1;
}

void func_846()
{
	if (func_851() || func_850())
	{
		func_849();
		func_847();
	}
}

void func_847()
{
	if ((!func_520() && !func_848()) && Global_2715541)
	{
		Global_4718592.f_86750 = 0;
	}
}

bool func_848()
{
	return Global_2714627.f_691;
}

void func_849()
{
	Global_2714627.f_756 = 1;
}

var func_850()
{
	return Global_2714627.f_735;
}

bool func_851()
{
	return unk_0xE2D0C323A1AE5D85(Global_2714627.f_2, 11);
}

void func_852()
{
	func_129(1);
}

void func_853()
{
	if (!func_41(1))
	{
		func_98(func_854(func_855()));
		func_40(1);
	}
}

int func_854(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 8;
		
		case 2:
			return 12;
		
		case 3:
			return 16;
		
		case 4:
			return 1;
		
		case 5:
			return 5;
		
		case 6:
			return 9;
		
		case 7:
			return 13;
		
		case 8:
			return 17;
		
		case 9:
			return 2;
		
		case 10:
			return 6;
		
		case 11:
			return 14;
		
		case 12:
			return 19;
		
		case 13:
			return 3;
		
		case 14:
			return 7;
		
		case 15:
			return 10;
		
		case 16:
			return 15;
		
		case 17:
			return 11;
		
		case 18:
			return 18;
		
		case 19:
			return 4;
		
		default:
	}
	return 0;
}

int func_855()
{
	int iVar0[20];
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 20)
	{
		iVar0[iVar2] = iVar2;
		iVar1 = (iVar1 + func_856(iVar0[iVar2]));
		iVar2++;
	}
	iVar3 = unk_0x95F3C8DAE5A0339C(0, iVar1);
	iVar2 = 0;
	while (iVar2 < 20)
	{
		if (iVar3 <= func_856(iVar0[iVar2]))
		{
			return iVar0[iVar2];
		}
		else
		{
			iVar3 = (iVar3 - func_856(iVar0[iVar2]));
		}
		iVar2++;
	}
	return -1;
}

int func_856(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_26594)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26484;
			}
			break;
		
		case 1:
			if (Global_262145.f_26594)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26485;
			}
			break;
		
		case 2:
			if (Global_262145.f_26594)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26486;
			}
			break;
		
		case 3:
			if (Global_262145.f_26594)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26487;
			}
			break;
		
		case 4:
			if (Global_262145.f_26595)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26488;
			}
			break;
		
		case 5:
			if (Global_262145.f_26595)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26489;
			}
			break;
		
		case 6:
			if (Global_262145.f_26595)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26490;
			}
			break;
		
		case 7:
			if (Global_262145.f_26595)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26491;
			}
			break;
		
		case 8:
			if (Global_262145.f_26595)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26492;
			}
			break;
		
		case 9:
			if (Global_262145.f_26596)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26493;
			}
			break;
		
		case 10:
			if (Global_262145.f_26596)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26494;
			}
			break;
		
		case 11:
			if (Global_262145.f_26596)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26495;
			}
			break;
		
		case 12:
			if (Global_262145.f_26596)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26496;
			}
			break;
		
		case 13:
			if (Global_262145.f_26597)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26497;
			}
			break;
		
		case 14:
			if (Global_262145.f_26597)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26498;
			}
			break;
		
		case 15:
			if (Global_262145.f_26597)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26499;
			}
			break;
		
		case 16:
			if (Global_262145.f_26597)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26500;
			}
			break;
		
		case 17:
			if (Global_262145.f_26598)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26501;
			}
			break;
		
		case 18:
			if (Global_262145.f_26599)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26502;
			}
			break;
		
		case 19:
			if (Global_262145.f_26600)
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26503;
			}
			break;
	}
	return 0;
}

void func_857()
{
	if (func_38("LW_PLAY"))
	{
		unk_0x3410421C60BF7143(1);
	}
}

void func_858(int iParam0, bool bParam1)
{
	if (iParam0 == func_8())
	{
		return;
	}
	if (bParam1)
	{
		if (!unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_379.f_2, 10))
		{
			unk_0xCED9E32812D6C7C7(&(Global_1853128[iParam0 /*888*/].f_267.f_379.f_2), 10);
		}
	}
	else if (unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_379.f_2, 10))
	{
		unk_0xB0550BC91B0159D6(&(Global_1853128[iParam0 /*888*/].f_267.f_379.f_2), 10);
	}
}

int func_859()
{
	if (func_41(11))
	{
		if (func_127(unk_0xE2D3D51028F0428A()))
		{
			return func_860();
		}
	}
	return 0;
}

int func_860()
{
	if (((((unk_0xF09A4F413B0D30EB(2, 51) && !unk_0xF09A4F413B0D30EB(2, 199)) && !unk_0xF09A4F413B0D30EB(2, 200)) && !unk_0xF01464D7AF0B7347(2, 199)) && !unk_0xF01464D7AF0B7347(2, 200)) && !func_861(unk_0x9E2D6C50374FCFA9()))
	{
		return 1;
	}
	return 0;
}

bool func_861(int iParam0)
{
	return unk_0xE2D0C323A1AE5D85(Global_1644209.f_241.f_136[func_592(9) /*33*/][iParam0], func_587(9));
}

void func_862()
{
	if (func_47(0))
	{
		func_40(11);
	}
	if (func_41(11))
	{
		if (!unk_0xE2D0C323A1AE5D85(Local_113.f_1, 2))
		{
			func_46("LW_PLAY", -1);
		}
		if (!func_47(0))
		{
			func_77(11);
		}
	}
}

bool func_863()
{
	return Local_111 != func_8();
}

void func_864()
{
	if (unk_0x78D9ADD511FEAD8B(Local_113.f_454))
	{
		unk_0xF889BDFCC181BA9F(Local_113.f_454);
		unk_0xCDBCC1BC1184B002(Local_113.f_454);
		Local_113.f_454 = -1;
	}
	if (unk_0x78D9ADD511FEAD8B(Local_113.f_456))
	{
		unk_0xF889BDFCC181BA9F(Local_113.f_456);
		unk_0xCDBCC1BC1184B002(Local_113.f_456);
		Local_113.f_456 = -1;
	}
	if (unk_0x78D9ADD511FEAD8B(Local_113.f_457))
	{
		unk_0xF889BDFCC181BA9F(Local_113.f_457);
		unk_0xCDBCC1BC1184B002(Local_113.f_457);
		Local_113.f_457 = -1;
	}
}

void func_865()
{
	if (!unk_0xE5965CDF24F93A9F(Local_113.f_72))
	{
		unk_0xD69A0C3662175E68(func_866());
		if (!unk_0x0152AA00FA3130F1(func_866()))
		{
			return;
		}
		Local_113.f_72 = unk_0x0A7322C6D0E1A985(func_866(), func_771(), 0, 0, 1);
		unk_0x398C962F550CF3B4(Local_113.f_72, 1);
		unk_0xFEF687AF74EEDCC2(Local_113.f_72, 0);
	}
}

int func_866()
{
	return joaat("vw_prop_vw_luckywheel_02a");
}

int func_867()
{
	int iVar0;
	
	iVar0 = 0;
	if (func_870())
	{
		iVar0 = 1;
	}
	if (!func_868(unk_0x9E2D6C50374FCFA9()) && unk_0xB4C854DD86E40FDA(unk_0x2E87280918B16506("AM_MP_CASINO")) < 1)
	{
		iVar0 = 1;
	}
	if (Global_1966287)
	{
		Global_1966287 = 0;
		iVar0 = 1;
	}
	return iVar0;
}

int func_868(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_869(Global_2689156[iParam0 /*453*/].f_319.f_6) == 14;
			}
		}
	}
	return 0;
}

int func_869(int iParam0)
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
			return 21;
			break;
		
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
			break;
		
		case 154:
			return 23;
			break;
		
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
	}
	return -1;
}

int func_870()
{
	var uVar0;
	
	func_877(&uVar0);
	if (Global_1575022 == 0)
	{
		if (!unk_0x9315DBF7D972F07A())
		{
			return 1;
		}
	}
	if (func_876())
	{
		return 1;
	}
	if (Global_2727476)
	{
		return 1;
	}
	if (func_875())
	{
		return 1;
	}
	if (func_874(159))
	{
		if (!func_873())
		{
			return 1;
		}
	}
	if (func_874(157))
	{
		return 1;
	}
	if (!unk_0x20E4972CBF3DBE1B())
	{
		return 1;
	}
	if (func_871() != 0)
	{
		if (unk_0xB4C854DD86E40FDA(func_871()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_871()
{
	switch (func_591())
	{
		case 0:
			return func_872();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_872()
{
	switch (Global_2727578)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

bool func_873()
{
	return Global_2714627.f_698;
}

int func_874(int iParam0)
{
	if (unk_0x32C089FAFDA9BA2F(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_875()
{
	return Global_2725224;
}

bool func_876()
{
	return Global_2714627.f_693;
}

void func_877(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	
	iVar0 = 0;
	while (iVar0 < unk_0x9418088815C89D59(1))
	{
		iVar1 = unk_0xB1D84E0EF6979085(1, iVar0);
		if (iVar1 == 174)
		{
			unk_0x92039F20B184AB4D(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -1537646326:
					func_878(iVar0);
					break;
				
				case 801199324:
					unk_0x92039F20B184AB4D(1, iVar0, &Var3, 4);
					if (Var3.f_2 == 848999011)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_878(int iParam0)
{
	struct<3> Var0;
	var uVar1;
	var uVar2;
	bool bVar3;
	
	if (unk_0x92039F20B184AB4D(1, iParam0, &Var0, 3))
	{
		if (func_6(Var0.f_1, 1, 1))
		{
			uVar1 = unk_0x407E03586628E458(Var0.f_1);
			if (unk_0xE5965CDF24F93A9F(uVar1))
			{
				if (unk_0xD5C6B5E3B93A5EDC(iVar1, 0))
				{
					uVar2 = unk_0xB3FF0049C1FD38EC(iVar1, 0);
					if (unk_0x49E701A18D345B0E(uVar2, Var0.f_2) && unk_0xDD50B5A22807BAD4())
					{
						if (func_629(uVar2, &bVar3))
						{
							unk_0xF6FBA55B09506B23(uVar2, Var0.f_2);
						}
						if (bVar3)
						{
							unk_0x3D81769BEC61BFF8(&uVar2);
						}
					}
				}
			}
		}
	}
}

void func_879()
{
	if (func_41(21))
	{
		func_137(1);
	}
	unk_0xF1A23B343DFEDFD0(func_866());
	func_806(0);
	func_881();
	func_762();
	func_840(unk_0x9E2D6C50374FCFA9(), 0);
	if (!unk_0xACC32B78196FBC2A(Local_113.f_23))
	{
		unk_0xAFC1FBF3F6AE7B9A(Local_113.f_23);
	}
	if (unk_0xE5965CDF24F93A9F(Local_113.f_72))
	{
		unk_0x4BDA5AFD88C085EB(&(Local_113.f_72));
	}
	if (unk_0xE2D0C323A1AE5D85(Global_1946934.f_6, 4))
	{
		unk_0xB0550BC91B0159D6(&(Global_1946934.f_6), 4);
	}
	func_104(0);
	unk_0x861D35D42CFD2991("CasinoUI_Lucky_Wheel");
	func_880();
}

void func_880()
{
	unk_0xAFBDF6A5E54114C1();
}

void func_881()
{
	var uVar0;
	var uVar1;
	
	uVar0 = func_154(func_805(unk_0x9E2D6C50374FCFA9()));
	uVar1 = func_79();
	if (unk_0xFCF559C8631ABED7(Local_113.f_72, uVar1, uVar0, 3))
	{
		unk_0xA02157241423F32E(Local_113.f_72, sVar0, sVar1, -8f);
	}
}

void func_882()
{
	unk_0xD9B114A8D3A8319F(32, 0, -1);
	func_906(0, -1, 0);
	unk_0x7157B1051528D729(&Local_112, 161, 0);
	unk_0x21F2B09183F31D02(&Local_111, 2, 0);
	if (!func_905())
	{
		func_879();
	}
	unk_0x2C07CBAFAC54A645(0);
	func_883();
}

void func_883()
{
	func_884(&Local_114);
	unk_0xA9911C122B3210B5("CasinoUI_Lucky_Wheel", 0);
}

void func_884(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xE2D0C323A1AE5D85(uParam0->f_7, 9))
	{
		iVar0 = 0;
		while (iVar0 <= 92)
		{
			iVar1 = func_904(iVar0, 0);
			if (func_903(iVar1))
			{
				if (!func_902(iVar1))
				{
					if (func_901(iVar1) && func_896(1623028892, iVar1, -1))
					{
						iVar1 = func_895(iVar1);
					}
					if (func_888(iVar1, -1, 0) || func_885(iVar1))
					{
						if (unk_0x7F4CB90BCA531A70(iVar1) != 0)
						{
							if (unk_0x7F4CB90BCA531A70(iVar1) == joaat("GROUP_MELEE") || iVar1 == joaat("weapon_knuckle"))
							{
								if (!unk_0xE2D0C323A1AE5D85(uParam0->f_4, 0))
								{
									unk_0xCED9E32812D6C7C7(&(uParam0->f_4), 0);
									uParam0->f_5++;
								}
							}
							else if (unk_0x7F4CB90BCA531A70(iVar1) == joaat("GROUP_PISTOL"))
							{
								if (!unk_0xE2D0C323A1AE5D85(uParam0->f_4, 1))
								{
									unk_0xCED9E32812D6C7C7(&(uParam0->f_4), 1);
									uParam0->f_5++;
									if (!unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_28, 30))
									{
										unk_0xCED9E32812D6C7C7(&(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_28), 30);
									}
								}
							}
							else if (unk_0x7F4CB90BCA531A70(iVar1) == joaat("GROUP_RIFLE"))
							{
								if (!unk_0xE2D0C323A1AE5D85(uParam0->f_4, 3))
								{
									unk_0xCED9E32812D6C7C7(&(uParam0->f_4), 3);
									uParam0->f_5++;
									if (!unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_28, 31))
									{
										unk_0xCED9E32812D6C7C7(&(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_28), 31);
									}
								}
							}
							else if (unk_0x7F4CB90BCA531A70(iVar1) == joaat("GROUP_SHOTGUN") || iVar1 == joaat("weapon_musket"))
							{
								if (!unk_0xE2D0C323A1AE5D85(uParam0->f_4, 4))
								{
									unk_0xCED9E32812D6C7C7(&(uParam0->f_4), 4);
									uParam0->f_5++;
									if (!unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_127, 0))
									{
										unk_0xCED9E32812D6C7C7(&(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_127), 0);
									}
								}
							}
							else if (unk_0x7F4CB90BCA531A70(iVar1) == joaat("GROUP_SNIPER") && iVar1 != joaat("weapon_musket"))
							{
								if (!unk_0xE2D0C323A1AE5D85(uParam0->f_4, 5))
								{
									unk_0xCED9E32812D6C7C7(&(uParam0->f_4), 5);
									uParam0->f_5++;
								}
								if (!unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_127, 5))
								{
									unk_0xCED9E32812D6C7C7(&(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_127), 5);
								}
							}
							else if (unk_0x7F4CB90BCA531A70(iVar1) == joaat("GROUP_HEAVY"))
							{
								if (!unk_0xE2D0C323A1AE5D85(uParam0->f_4, 6))
								{
									unk_0xCED9E32812D6C7C7(&(uParam0->f_4), 6);
									uParam0->f_5++;
								}
							}
							else if (unk_0x7F4CB90BCA531A70(iVar1) == joaat("GROUP_THROWN") || iVar1 == joaat("weapon_petrolcan"))
							{
								if (!unk_0xE2D0C323A1AE5D85(uParam0->f_4, 7))
								{
									unk_0xCED9E32812D6C7C7(&(uParam0->f_4), 7);
									uParam0->f_5++;
								}
								if (iVar1 == joaat("weapon_stickybomb") || iVar1 == joaat("weapon_proxmine"))
								{
									if (!unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_127, 2))
									{
										unk_0xCED9E32812D6C7C7(&(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_127), 2);
									}
								}
								else if (iVar1 == joaat("weapon_grenade") || iVar1 == joaat("weapon_smokegrenade"))
								{
									if (!unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_127, 3))
									{
										unk_0xCED9E32812D6C7C7(&(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_127), 3);
									}
								}
							}
							else if (unk_0x7F4CB90BCA531A70(iVar1) == joaat("GROUP_SMG") || unk_0x7F4CB90BCA531A70(iVar1) == joaat("GROUP_MG"))
							{
								if (!unk_0xE2D0C323A1AE5D85(uParam0->f_4, 2))
								{
									unk_0xCED9E32812D6C7C7(&(uParam0->f_4), 2);
									uParam0->f_5++;
								}
								if (iVar1 == joaat("weapon_microsmg"))
								{
									if (!unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_127, 1))
									{
										unk_0xCED9E32812D6C7C7(&(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_127), 1);
									}
								}
								if (unk_0x7F4CB90BCA531A70(iVar1) == joaat("GROUP_MG"))
								{
									if (!unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_127, 4))
									{
										unk_0xCED9E32812D6C7C7(&(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_127), 4);
									}
								}
							}
						}
						else if ((unk_0x8142A6539DDC180F() % 60) == 0)
						{
						}
					}
					else if ((unk_0x8142A6539DDC180F() % 60) == 0)
					{
					}
				}
			}
			iVar0++;
		}
		unk_0xCED9E32812D6C7C7(&(uParam0->f_7), 9);
	}
}

int func_885(int iParam0)
{
	if (iParam0 == joaat("weapon_molotov"))
	{
		if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
		{
			if (unk_0x1F741ABE25B3CDD3(unk_0xE2D3D51028F0428A(), iParam0) > 0)
			{
				return 1;
			}
		}
	}
	if ((((((iParam0 == joaat("weapon_golfclub") || iParam0 == joaat("weapon_crowbar")) || iParam0 == joaat("weapon_bat")) || iParam0 == joaat("weapon_smokegrenade")) || iParam0 == joaat("weapon_grenade")) || iParam0 == joaat("weapon_stickybomb")) && func_21(func_887(iParam0), -1, 0) > 0)
	{
		return 1;
	}
	if (iParam0 == joaat("weapon_stone_hatchet") && func_886())
	{
		return 1;
	}
	return 0;
}

int func_886()
{
	if (func_67(7315, -1) >= 6)
	{
		return 1;
	}
	return 0;
}

int func_887(int iParam0)
{
	if (func_591() == 0 || func_590() == 0)
	{
		switch (iParam0)
		{
			case joaat("weapon_knife"):
				return 200;
				break;
			
			case joaat("weapon_nightstick"):
				return 207;
				break;
			
			case joaat("weapon_pistol"):
				return 258;
				break;
			
			case joaat("weapon_combatpistol"):
				return 268;
				break;
			
			case joaat("weapon_appistol"):
				return 288;
				break;
			
			case joaat("weapon_snspistol"):
				return 1748;
				break;
			
			case joaat("weapon_microsmg"):
				return 298;
				break;
			
			case joaat("weapon_smg"):
				return 308;
				break;
			
			case joaat("weapon_assaultrifle"):
				return 327;
				break;
			
			case joaat("weapon_carbinerifle"):
				return 336;
				break;
			
			case joaat("weapon_specialcarbine"):
				return 10368;
				break;
			
			case joaat("weapon_advancedrifle"):
				return 345;
				break;
			
			case joaat("weapon_mg"):
				return 354;
				break;
			
			case joaat("weapon_combatmg"):
				return 363;
				break;
			
			case joaat("weapon_pumpshotgun"):
				return 381;
				break;
			
			case joaat("weapon_sawnoffshotgun"):
				return 391;
				break;
			
			case joaat("weapon_assaultshotgun"):
				return 409;
				break;
			
			case joaat("weapon_stungun"):
				return 419;
				break;
			
			case joaat("weapon_sniperrifle"):
				return 428;
				break;
			
			case joaat("weapon_heavysniper"):
				return 437;
				break;
			
			case joaat("weapon_grenadelauncher"):
				return 446;
				break;
			
			case joaat("weapon_rpg"):
				return 453;
				break;
			
			case joaat("weapon_minigun"):
				return 462;
				break;
			
			case joaat("weapon_grenade"):
				return 470;
				break;
			
			case joaat("weapon_smokegrenade"):
				return 479;
				break;
			
			case joaat("weapon_stickybomb"):
				return 487;
				break;
			
			case joaat("weapon_molotov"):
				return 496;
				break;
			
			case joaat("weapon_petrolcan"):
				return 587;
				break;
			
			case joaat("weapon_pistol50"):
				return 278;
				break;
			
			case -572349828:
				return 372;
				break;
			
			case joaat("weapon_assaultsmg"):
				return 318;
				break;
			
			case 392730790:
				return 440;
				break;
			
			case joaat("weapon_hammer"):
				return 235;
				break;
			
			case joaat("weapon_bullpupshotgun"):
				return 400;
				break;
			
			case joaat("weapon_bottle"):
				return 1738;
				break;
			
			case joaat("weapon_heavypistol"):
				return 10358;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 10378;
				break;
			
			case joaat("weapon_gusenberg"):
				return 10388;
				break;
			
			case joaat("gadget_parachute"):
				return 584;
				break;
			
			case joaat("weapon_vintagepistol"):
				return 10671;
				break;
			
			case joaat("weapon_dagger"):
				return 10661;
				break;
			
			case joaat("weapon_musket"):
				return 10691;
				break;
			
			case joaat("weapon_firework"):
				return 10681;
				break;
			
			case joaat("weapon_heavyshotgun"):
				return 10769;
				break;
			
			case joaat("weapon_marksmanrifle"):
				return 10779;
				break;
			
			case joaat("weapon_proxmine"):
				return 10795;
				break;
			
			case joaat("weapon_hominglauncher"):
				return 10803;
				break;
			
			case joaat("weapon_combatpdw"):
				return 10813;
				break;
			
			case joaat("weapon_knuckle"):
				return 10820;
				break;
			
			case joaat("weapon_marksmanpistol"):
				return 10830;
				break;
			
			case joaat("weapon_hatchet"):
				return 10787;
				break;
			
			case joaat("weapon_machete"):
				return 10838;
				break;
			
			case joaat("weapon_machinepistol"):
				return 10848;
				break;
			
			case joaat("weapon_dbshotgun"):
				return 10876;
				break;
			
			case joaat("weapon_compactrifle"):
				return 10866;
				break;
			
			case joaat("weapon_flashlight"):
				return 10884;
				break;
			
			case joaat("weapon_golfclub"):
				return 249;
				break;
			
			case joaat("weapon_bat"):
				return 242;
				break;
			
			case joaat("weapon_crowbar"):
				return 214;
				break;
			
			case joaat("weapon_autoshotgun"):
				return 10955;
				break;
			
			case joaat("weapon_minismg"):
				return 10981;
				break;
			
			case joaat("weapon_compactlauncher"):
				return 10971;
				break;
			
			case joaat("weapon_battleaxe"):
				return 10998;
				break;
			
			case joaat("weapon_pipebomb"):
				return 10989;
				break;
			
			case joaat("weapon_poolcue"):
				return 10999;
				break;
			
			case joaat("weapon_wrench"):
				return 228;
				break;
			
			case joaat("weapon_assaultrifle_mk2"):
				return 327;
				break;
			
			case joaat("weapon_carbinerifle_mk2"):
				return 336;
				break;
			
			case joaat("weapon_combatmg_mk2"):
				return 363;
				break;
			
			case joaat("weapon_heavysniper_mk2"):
				return 437;
				break;
			
			case joaat("weapon_pistol_mk2"):
				return 258;
				break;
			
			case joaat("weapon_smg_mk2"):
				return 308;
				break;
			
			case joaat("weapon_bullpuprifle_mk2"):
				return 11463;
				break;
			
			case joaat("weapon_marksmanrifle_mk2"):
				return 11483;
				break;
			
			case joaat("weapon_pumpshotgun_mk2"):
				return 11473;
				break;
			
			case joaat("weapon_revolver_mk2"):
				return 11493;
				break;
			
			case joaat("weapon_snspistol_mk2"):
				return 11513;
				break;
			
			case joaat("weapon_specialcarbine_mk2"):
				return 11523;
				break;
			
			case joaat("weapon_raypistol"):
				return 11883;
				break;
			
			case joaat("weapon_raycarbine"):
				return 11893;
				break;
			
			case joaat("weapon_rayminigun"):
				return 11903;
				break;
			
			case joaat("weapon_navyrevolver"):
				return 12334;
				break;
			
			case joaat("weapon_ceramicpistol"):
				return 12324;
				break;
			
			case joaat("weapon_militaryrifle"):
				return 12494;
				break;
			
			case joaat("weapon_gadgetpistol"):
				return 12484;
				break;
			
			case joaat("weapon_combatshotgun"):
				return 12474;
				break;
			
			case -618237638:
				return 12525;
				break;
			
			case 406929569:
				return 12538;
				break;
			
			case 1171102963:
				return 12547;
				break;
			}
	}
	return 487;
}

bool func_888(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	int iVar1;
	
	if (iParam2 == 0)
	{
	}
	if (func_593())
	{
		return 0;
	}
	if (func_892() == 0)
	{
		return 0;
	}
	if (iParam0 != joaat("gadget_parachute") && iParam0 != joaat("weapon_railgun"))
	{
		if (func_669(func_891(iParam0), -1))
		{
			return 0;
		}
	}
	uVar0 = func_889(iParam0, iParam1);
	iVar1 = func_620(iParam0);
	return unk_0xE2D0C323A1AE5D85(uVar0, func_587(iVar1));
}

var func_889(int iParam0, var uParam1)
{
	var uVar0;
	
	uVar0 = func_21(func_890(iParam0), uParam1, 0);
	return uVar0;
}

int func_890(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_620(iParam0);
	iVar1 = func_592(iVar0);
	if ((func_591() == 0 || func_590() == 0) || (func_591() == 999 && func_590() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 800;
				break;
			
			case 1:
				return 801;
				break;
			
			case 2:
				return 2420;
				break;
			}
	}
	return 12597;
}

int func_891(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_unarmed"):
			return 18;
			break;
		
		case joaat("weapon_grenade"):
			return 66;
			break;
		
		case joaat("weapon_smokegrenade"):
			return 68;
			break;
		
		case joaat("weapon_stickybomb"):
			return 70;
			break;
		
		case joaat("weapon_molotov"):
			return 72;
			break;
		
		case joaat("weapon_pistol"):
			return 18;
			break;
		
		case joaat("weapon_combatpistol"):
			return 40;
			break;
		
		case joaat("weapon_pistol50"):
			return 22;
			break;
		
		case joaat("weapon_appistol"):
			return 24;
			break;
		
		case joaat("weapon_microsmg"):
			return 26;
			break;
		
		case joaat("weapon_smg"):
			return 28;
			break;
		
		case joaat("weapon_assaultsmg"):
			return 30;
			break;
		
		case joaat("weapon_assaultrifle"):
			return 32;
			break;
		
		case joaat("weapon_carbinerifle"):
			return 34;
			break;
		
		case joaat("weapon_advancedrifle"):
			return 36;
			break;
		
		case joaat("weapon_mg"):
			return 38;
			break;
		
		case -572349828:
			return 42;
			break;
		
		case joaat("weapon_pumpshotgun"):
			return 44;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return 46;
			break;
		
		case joaat("weapon_bullpupshotgun"):
			return 48;
			break;
		
		case joaat("weapon_assaultshotgun"):
			return 50;
			break;
		
		case joaat("weapon_sniperrifle"):
			return 54;
			break;
		
		case joaat("weapon_heavysniper"):
			return 56;
			break;
		
		case joaat("weapon_grenadelauncher"):
			return 60;
			break;
		
		case joaat("weapon_rpg"):
			return 62;
			break;
		
		case joaat("weapon_minigun"):
			return 64;
			break;
		
		case joaat("weapon_stungun"):
			return 52;
			break;
		
		case joaat("weapon_petrolcan"):
			return 75;
			break;
		
		case joaat("weapon_knife"):
			return 2;
			break;
		
		case joaat("weapon_nightstick"):
			return 4;
			break;
		
		case joaat("weapon_hammer"):
			return 12;
			break;
		
		case joaat("weapon_bat"):
			return 14;
			break;
		
		case joaat("weapon_crowbar"):
			return 6;
			break;
		
		case joaat("weapon_golfclub"):
			return 16;
			break;
		
		case 392730790:
			return 58;
			break;
		
		case joaat("weapon_combatmg"):
			return 40;
			break;
		
		case joaat("weapon_bottle"):
			return 143;
			break;
		
		case joaat("weapon_specialcarbine"):
			return 349;
			break;
		
		case joaat("weapon_snspistol"):
			return 145;
			break;
		
		case joaat("weapon_heavypistol"):
			return 347;
			break;
		
		case joaat("weapon_bullpuprifle"):
			return 351;
			break;
		
		case joaat("weapon_gusenberg"):
			return 353;
			break;
		
		case joaat("weapon_dagger"):
			return 374;
			break;
		
		case joaat("weapon_vintagepistol"):
			return 376;
			break;
		
		case joaat("weapon_firework"):
			return 378;
			break;
		
		case joaat("weapon_musket"):
			return 380;
			break;
		
		case joaat("weapon_heavyshotgun"):
			return 392;
			break;
		
		case joaat("weapon_marksmanrifle"):
			return 394;
			break;
		
		case joaat("weapon_proxmine"):
			return 398;
			break;
		
		case joaat("weapon_hominglauncher"):
			return 400;
			break;
		
		case joaat("weapon_combatpdw"):
			return 402;
			break;
		
		case joaat("weapon_knuckle"):
			return 404;
			break;
		
		case joaat("weapon_marksmanpistol"):
			return 406;
			break;
		
		case joaat("weapon_hatchet"):
			return 396;
			break;
		
		case joaat("weapon_machete"):
			return 408;
			break;
		
		case joaat("weapon_machinepistol"):
			return 410;
			break;
		
		case joaat("weapon_compactrifle"):
			return 413;
			break;
		
		case joaat("weapon_dbshotgun"):
			return 415;
			break;
		
		case joaat("weapon_flashlight"):
			return 417;
			break;
		
		case joaat("weapon_revolver"):
			return 420;
			break;
		
		case joaat("weapon_switchblade"):
			return 422;
			break;
		
		case joaat("weapon_autoshotgun"):
			return 427;
			break;
		
		case joaat("weapon_minismg"):
			return 433;
			break;
		
		case joaat("weapon_compactlauncher"):
			return 431;
			break;
		
		case joaat("weapon_battleaxe"):
			return 429;
			break;
		
		case joaat("weapon_pipebomb"):
			return 435;
			break;
		
		case joaat("weapon_poolcue"):
			return 437;
			break;
		
		case joaat("weapon_wrench"):
			return 10;
			break;
		
		case joaat("weapon_assaultrifle_mk2"):
			return 32;
			break;
		
		case joaat("weapon_carbinerifle_mk2"):
			return 34;
			break;
		
		case joaat("weapon_combatmg_mk2"):
			return 40;
			break;
		
		case joaat("weapon_heavysniper_mk2"):
			return 56;
			break;
		
		case joaat("weapon_pistol_mk2"):
			return 18;
			break;
		
		case joaat("weapon_smg_mk2"):
			return 28;
			break;
		
		case joaat("weapon_bullpuprifle_mk2"):
			return 48;
			break;
		
		case joaat("weapon_marksmanrifle_mk2"):
			return 394;
			break;
		
		case joaat("weapon_pumpshotgun_mk2"):
			return 44;
			break;
		
		case joaat("weapon_revolver_mk2"):
			return 420;
			break;
		
		case joaat("weapon_snspistol_mk2"):
			return 145;
			break;
		
		case joaat("weapon_specialcarbine_mk2"):
			return 349;
			break;
		
		case joaat("weapon_doubleaction"):
			return 461;
			break;
		
		case joaat("weapon_stone_hatchet"):
			return 467;
			break;
		
		case joaat("weapon_raypistol"):
			return 469;
			break;
		
		case joaat("weapon_raycarbine"):
			return 469;
			break;
		
		case joaat("weapon_rayminigun"):
			return 469;
			break;
		
		case joaat("weapon_navyrevolver"):
			return 477;
			break;
		
		case joaat("weapon_ceramicpistol"):
			return 475;
			break;
		
		case joaat("weapon_hazardcan"):
			return 479;
			break;
		
		case joaat("weapon_gadgetpistol"):
			return 483;
			break;
		
		case joaat("weapon_militaryrifle"):
			return 485;
			break;
		
		case joaat("weapon_combatshotgun"):
			return 481;
			break;
		
		case -947031628:
			return 489;
			break;
		
		case -618237638:
			return 487;
			break;
		
		case 406929569:
			return 491;
			break;
		
		case 1171102963:
			return 493;
			break;
	}
	return 2;
}

int func_892()
{
	if (func_894() && func_893(0))
	{
		return 1;
	}
	return 0;
}

var func_893(int iParam0)
{
	return Global_1574536[iParam0];
}

var func_894()
{
	return func_893(func_18() + 1);
}

int func_895(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			return joaat("weapon_pistol_mk2");
		
		case joaat("weapon_smg"):
			return joaat("weapon_smg_mk2");
		
		case joaat("weapon_assaultrifle"):
			return joaat("weapon_assaultrifle_mk2");
		
		case joaat("weapon_carbinerifle"):
			return joaat("weapon_carbinerifle_mk2");
		
		case joaat("weapon_combatmg"):
			return joaat("weapon_combatmg_mk2");
		
		case joaat("weapon_heavysniper"):
			return joaat("weapon_heavysniper_mk2");
		
		case joaat("weapon_bullpuprifle"):
			return joaat("weapon_bullpuprifle_mk2");
			break;
		
		case joaat("weapon_marksmanrifle"):
			return joaat("weapon_marksmanrifle_mk2");
			break;
		
		case joaat("weapon_pumpshotgun"):
			return joaat("weapon_pumpshotgun_mk2");
			break;
		
		case joaat("weapon_revolver"):
			return joaat("weapon_revolver_mk2");
			break;
		
		case joaat("weapon_snspistol"):
			return joaat("weapon_snspistol_mk2");
			break;
		
		case joaat("weapon_specialcarbine"):
			return joaat("weapon_specialcarbine_mk2");
			break;
	}
	return 0;
}

bool func_896(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	int iVar1;
	
	if (func_593())
	{
		return 0;
	}
	uVar0 = func_899(iParam0, iParam1, iParam2);
	iVar1 = func_897(iParam0, iParam1);
	return unk_0xE2D0C323A1AE5D85(uVar0, func_587(iVar1));
}

int func_897(int iParam0, int iParam1)
{
	return func_898(iParam0, iParam1);
}

int func_898(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("weapon_pistol"):
			switch (iParam0)
			{
				case joaat("component_pistol_clip_01"):
					return 1;
					break;
				
				case joaat("component_pistol_clip_02"):
					return 2;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 3;
					break;
				
				case joaat("component_at_pi_supp_02"):
					return 4;
					break;
				
				case joaat("component_pistol_varmod_luxe"):
					return 175;
					break;
				
				case 1623028892:
					return 211;
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam0)
			{
				case joaat("component_combatpistol_clip_01"):
					return 5;
					break;
				
				case joaat("component_combatpistol_clip_02"):
					return 6;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 7;
					break;
				
				case joaat("component_at_pi_supp"):
					return 8;
					break;
				
				case joaat("component_combatpistol_varmod_lowrider"):
					return 186;
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam0)
			{
				case joaat("component_appistol_clip_01"):
					return 11;
					break;
				
				case joaat("component_appistol_clip_02"):
					return 12;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 13;
					break;
				
				case joaat("component_at_pi_supp"):
					return 14;
				
		