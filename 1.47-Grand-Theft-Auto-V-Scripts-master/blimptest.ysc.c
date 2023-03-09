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
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_41 = joaat("blimp");
	iLocal_44 = joaat("s_m_m_pilot_02");
	iLocal_46 = joaat("buzzard");
	if (unk_0xBB5E373390A5F824())
	{
		unk_0xACCDA78123DB57B0(500);
	}
	if (unk_0x9EC5BDC006623C42(18))
	{
		func_18();
	}
	unk_0xD875615F72CD34A6(0);
	func_17();
	func_16();
	func_14();
	func_11();
	while (true)
	{
		unk_0x762F7A52B1325903(255, 255, 255, 255);
		unk_0xC56FB1634FB1F447(0.75f, 0.9f);
		unk_0x1C500BB2E1897008(0f, 1f);
		func_10(0.05f, 0.63f, "PLCHLD_MISS", 0);
		unk_0x762F7A52B1325903(255, 255, 255, 255);
		unk_0xC56FB1634FB1F447(0.4f, 0.45f);
		unk_0x1C500BB2E1897008(0f, 1f);
		func_10(0.05f, 0.7f, "PLCHLD_PASS", 0);
		func_1();
		wait(0);
	}
}

void func_1()
{
	vector3 vVar0;
	
	if (unk_0x765F6FEEFF39224F(iLocal_40))
	{
		if ((unk_0xD62C4419A41F106A(iLocal_40, 0) || unk_0xE80842D7B53F8525(iLocal_40) <= 0) || unk_0x787CBB9DB6BA1A49(iLocal_40) <= 0f)
		{
			func_9(&iLocal_42);
			if (unk_0x4278060E716E1226(iLocal_40))
			{
				unk_0x8D50B2BEF003AB31(iLocal_40);
			}
			if (iLocal_47 == 1)
			{
				vVar0 = { unk_0xFBB1F99A825CAB09(iLocal_40, 0) };
				func_8(vVar0);
			}
			if (iLocal_47 == 1)
			{
				func_7(&iLocal_43);
				func_4(&iLocal_40);
			}
			else
			{
				func_3(&iLocal_43, 1, 0, 1);
				func_2(&iLocal_40);
			}
		}
		else if (unk_0x4278060E716E1226(iLocal_40))
		{
			unk_0xA36A8CD53DC38048(iLocal_40, 0.25f);
		}
	}
}

void func_2(int iParam0)
{
	if (unk_0x765F6FEEFF39224F(*iParam0))
	{
		unk_0xD62C4419A41F106A(*iParam0, 0);
		if (unk_0x5A04E3BD0B5E7E49(*iParam0) && unk_0x9E08E12414BD4476(*iParam0, 1))
		{
			unk_0x65F544B458249682(iParam0);
		}
	}
}

void func_3(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x765F6FEEFF39224F(*iParam0))
	{
		if (!unk_0xBC2FC12AD0FBF72E(*iParam0))
		{
			unk_0x43D47AD82DA3C6EC(*iParam0, 0, 1);
			if (iParam3 == 0)
			{
				unk_0x05AB47B112CF24AE(*iParam0);
			}
			unk_0x897EF720254BBEA3(*iParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x4A852F02088ECC9D(*iParam0, 0);
			}
		}
		unk_0x1F45B4626AC4A4C0(iParam0);
	}
}

void func_4(int iParam0)
{
	if (unk_0x765F6FEEFF39224F(*iParam0))
	{
		if (!unk_0x5A04E3BD0B5E7E49(*iParam0))
		{
			unk_0x0D21E1FDE062ED99(*iParam0, true, 0);
		}
		if (func_6(*iParam0))
		{
			if (unk_0x5A04E3BD0B5E7E49(*iParam0) && unk_0x9E08E12414BD4476(*iParam0, 1))
			{
				if (func_5(unk_0x33CD235DF1E6A94E()))
				{
					if (unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), *iParam0, 0))
					{
						unk_0x65F544B458249682(iParam0);
						return;
					}
				}
				unk_0x7AC8DF0B83EB4C6B(iParam0);
			}
		}
		else
		{
			if (func_5(unk_0x33CD235DF1E6A94E()))
			{
				if (unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), *iParam0, 0))
				{
					unk_0x65F544B458249682(iParam0);
					return;
				}
			}
			unk_0x7AC8DF0B83EB4C6B(iParam0);
		}
	}
}

int func_5(int iParam0)
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

int func_6(int iParam0)
{
	if (func_5(iParam0))
	{
		if (unk_0x91D5C8283D19AF49(iParam0, 0))
		{
			if (!unk_0x17260B4EA0652E1C(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_7(int iParam0)
{
	if (unk_0x765F6FEEFF39224F(*iParam0))
	{
		if (!unk_0xD62C4419A41F106A(*iParam0, 0))
		{
			unk_0x43D47AD82DA3C6EC(*iParam0, 0, 1);
		}
		if (!unk_0x5A04E3BD0B5E7E49(*iParam0))
		{
			unk_0x0D21E1FDE062ED99(*iParam0, true, 0);
		}
		unk_0x4B8B69DAE5BAC592(iParam0);
	}
}

void func_8(vector3 vParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2[12];
	
	iVar1 = 12;
	vVar2[0 /*3*/] = { 5f, 0f, 0f };
	vVar2[1 /*3*/] = { 0f, 5f, 0f };
	vVar2[2 /*3*/] = { 0f, 0f, 5f };
	vVar2[3 /*3*/] = { 5f, 5f, 0f };
	vVar2[4 /*3*/] = { 5f, 0f, 5f };
	vVar2[5 /*3*/] = { 0f, 5f, 5f };
	vVar2[6 /*3*/] = { 20f, 0f, 0f };
	vVar2[7 /*3*/] = { 0f, 20f, 0f };
	vVar2[8 /*3*/] = { 0f, 0f, 20f };
	vVar2[9 /*3*/] = { 20f, 20f, 0f };
	vVar2[10 /*3*/] = { 20f, 0f, 20f };
	vVar2[11 /*3*/] = { 0f, 20f, 20f };
	unk_0xB7C14A395669007F(vParam0, 8, 1f, 1, 0, 1f, 0);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		unk_0xB7C14A395669007F(vParam0 + vVar2[iVar0 /*3*/], 8, 1f, 1, 0, 1f, 0);
		iVar0++;
	}
}

void func_9(int iParam0)
{
	if (unk_0xE38E3CF1625A4145(*iParam0))
	{
		unk_0x1C316779E36C1967(*iParam0, 0);
		unk_0x1ABDB383C83A336A(iParam0);
	}
}

void func_10(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0xAA70163B3B48EEE4(sParam2);
	unk_0xCCA49CAF391D1A15(fParam0, fParam1, iParam3);
}

void func_11()
{
	func_2(&iLocal_45);
	unk_0xB815670C37E03CDE(iLocal_46);
	while (!unk_0x5D98D654CDC2165A(iLocal_46))
	{
		wait(0);
	}
	if (func_6(iLocal_40))
	{
		iLocal_45 = unk_0xC651C43AB13A15E5(iLocal_46, unk_0x2CA911E7569D12EA(iLocal_40, 50f, 0f, 15f), 0f, 1, 1, 0);
		unk_0x44D61A9D5B660538(iLocal_45);
		func_12(iLocal_45, iLocal_40);
		if (func_5(unk_0x33CD235DF1E6A94E()))
		{
			unk_0x094626C0798AE1F8(unk_0x33CD235DF1E6A94E(), iLocal_45, -1);
			unk_0xD6EDA274D82E8678(0f, 1065353216);
			unk_0xC7E6A5D90DED6E0B(0f);
			unk_0xCE04CE961AF41AB9(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 1), 500f, 1, 0, 0, false);
		}
	}
	unk_0x71CA80D41E1338B4(iLocal_46);
}

void func_12(int iParam0, int iParam1)
{
	float fVar0;
	
	fVar0 = func_13(unk_0xFBB1F99A825CAB09(iParam0, 1), unk_0xFBB1F99A825CAB09(iParam1, 1), 1);
	unk_0x3C990C409B3845DE(iParam0, fVar0);
}

float func_13(struct<2> Param0, float fParam1, struct<2> Param2, float fParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param2 - Param0);
	fVar2 = (Param2.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = unk_0xB92C3C556226E8F9(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam4 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

void func_14()
{
	func_9(&iLocal_42);
	if (func_6(iLocal_40))
	{
		iLocal_42 = func_15(iLocal_40, 1, 5);
	}
}

int func_15(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_5(iParam0))
	{
		iVar0 = unk_0x8848A15CBDADDC60(iParam0);
		unk_0xBF11C8A43770C598(iVar0, bParam1);
		unk_0xC51C58C963968740(iVar0, iParam2);
		unk_0xCE5C49921A521962(iVar0, 1f);
	}
	return iVar0;
}

void func_16()
{
	unk_0xB815670C37E03CDE(iLocal_44);
	while (!unk_0x5D98D654CDC2165A(iLocal_44))
	{
		wait(0);
	}
	if (func_6(iLocal_40))
	{
		iLocal_43 = unk_0xE196503B36B6194B(iLocal_40, 26, iLocal_44, -1, 1, true);
		if (func_5(iLocal_43))
		{
			unk_0x4A852F02088ECC9D(iLocal_43, 1);
			unk_0x5FEE418CE11E6DDE(iLocal_43, 118, false);
			unk_0x5FEE418CE11E6DDE(iLocal_43, 29, false);
			unk_0x5FEE418CE11E6DDE(iLocal_43, 116, false);
		}
	}
	if (func_6(iLocal_40))
	{
		unk_0xCCFFBA26C1726838(iLocal_40, 1, "Blimp_City", 1);
	}
	unk_0x71CA80D41E1338B4(iLocal_44);
}

void func_17()
{
	vector3 vVar0;
	
	if (func_6(iLocal_40) && unk_0x4278060E716E1226(iLocal_40))
	{
		unk_0x8D50B2BEF003AB31(iLocal_40);
	}
	func_9(&iLocal_42);
	func_7(&iLocal_43);
	func_4(&iLocal_40);
	unk_0xB815670C37E03CDE(iLocal_41);
	unk_0xD51062C52BCD2AE8(1, "Blimp_City");
	while (!unk_0x5D98D654CDC2165A(iLocal_41) || !unk_0x371855A6F27F144B(1, "Blimp_City"))
	{
		wait(0);
	}
	vVar0 = { unk_0x961059E00C533B1A(unk_0xBC87A51648397337(1, "Blimp_City"), 0f) };
	iLocal_40 = unk_0xC651C43AB13A15E5(iLocal_41, unk_0x59E2C528A2675E72(unk_0xBC87A51648397337(1, "Blimp_City"), 0f), vVar0.z, 1, 1, 0);
	unk_0x71CA80D41E1338B4(iLocal_41);
}

void func_18()
{
	if (func_6(iLocal_40) && unk_0x4278060E716E1226(iLocal_40))
	{
		unk_0x8D50B2BEF003AB31(iLocal_40);
	}
	unk_0x4167B14D99BD7D75(1, "Blimp_city");
	func_9(&iLocal_42);
	func_3(&iLocal_43, 1, 0, 1);
	func_2(&iLocal_40);
	func_2(&iLocal_45);
	unk_0x71CA80D41E1338B4(iLocal_44);
	unk_0x71CA80D41E1338B4(iLocal_41);
	unk_0x71CA80D41E1338B4(iLocal_46);
	unk_0xD875615F72CD34A6(6);
	unk_0x5894DC159447E10A();
}

