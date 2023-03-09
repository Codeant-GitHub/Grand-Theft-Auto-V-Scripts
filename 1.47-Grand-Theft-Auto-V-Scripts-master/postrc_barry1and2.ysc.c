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
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	char* sLocal_44 = NULL;
	char* sLocal_45 = NULL;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	vector3 vLocal_49 = { 0f, 0f, 0f };
	vector3 vLocal_50 = { 0f, 0f, 0f };
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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	sLocal_44 = "RCMBarryLeadInOut";
	sLocal_45 = "idle";
	vLocal_49 = { 189.5964f, -956.0344f, 29.5771f };
	vLocal_50 = { 190.2424f, -956.379f, 28.63f };
	unk_0x3FD9339AA95E323F(0, 26, 1);
	if (func_24(unk_0x33CD235DF1E6A94E()))
	{
		if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) != 0)
		{
			unk_0x98F04A4FFB4AD01C(unk_0x95B959F18401C09A(), 0, 0);
		}
	}
	if (unk_0x9EC5BDC006623C42(83))
	{
		func_21(0);
	}
	unk_0x0483D0035D6E46FD(sLocal_44);
	unk_0x2EE8D1440C9060EF("BARY1", 7);
	while (!unk_0xE9CCF312047EBEE0(sLocal_44) || !unk_0x8A7F864DAB908749(7))
	{
		unk_0x3FD9339AA95E323F(0, 26, 1);
		wait(0);
	}
	unk_0x3FD9339AA95E323F(0, 26, 1);
	func_24(unk_0x33CD235DF1E6A94E());
	iLocal_46 = unk_0xE3903F59E2F22150() + 13000;
	iLocal_47 = unk_0x9EC3B269A34A2BEE(0, 5);
	func_18();
	while (!func_13(&iLocal_43, 49, vLocal_50, func_17(1.12f), 0))
	{
		unk_0x3FD9339AA95E323F(0, 26, 1);
		wait(0);
	}
	unk_0x3FD9339AA95E323F(0, 26, 1);
	func_12();
	iLocal_48 = unk_0xE3903F59E2F22150() + 1000;
	unk_0x3FD9339AA95E323F(0, 26, 1);
	while (true)
	{
		func_24(unk_0x33CD235DF1E6A94E());
		if (unk_0xE3903F59E2F22150() < iLocal_48)
		{
			unk_0x3FD9339AA95E323F(0, 26, 1);
		}
		func_11();
		if (!func_24(iLocal_43))
		{
			func_21(0);
		}
		if (func_3())
		{
		}
		if (func_2(unk_0x33CD235DF1E6A94E(), vLocal_50, 1) > 70f)
		{
			func_1(&iLocal_40, 0);
			func_1(&iLocal_41, 0);
			func_1(&iLocal_42, 0);
			func_21(0);
		}
		wait(0);
	}
}

void func_1(int iParam0, bool bParam1)
{
	if (unk_0x765F6FEEFF39224F(*iParam0))
	{
		if (unk_0x47904E0914F5B5C6(*iParam0))
		{
			unk_0x35F11A916FDFCF32(*iParam0, 1, true);
		}
		if (!bParam1)
		{
			unk_0x26ABAE1D971CEACD(iParam0);
		}
		else
		{
			unk_0x1FA33938BF46EAE3(*iParam0);
		}
	}
}

float func_2(int iParam0, vector3 vParam1, bool bParam2)
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

int func_3()
{
	var uVar0;
	
	if (((((func_10(unk_0x33CD235DF1E6A94E()) && func_10(iLocal_43)) && !func_9()) && unk_0xE3903F59E2F22150() > iLocal_46) && func_8(unk_0x33CD235DF1E6A94E(), iLocal_43, 1) < 20f) && !unk_0xB2B616B1F434DB30())
	{
		uVar0 = 16;
		func_7(&uVar0, 0, iLocal_43, "BARRY", 0, 1);
		func_4(&uVar0, "BARY1AU", func_6(), 7, 0, 0);
		iLocal_46 = (unk_0xE3903F59E2F22150() + unk_0x9EC3B269A34A2BEE(12000, 18000));
		return 1;
	}
	return 0;
}

void func_4(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	func_5(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	unk_0x8950ED5730F62EE8(&Global_14732, 0);
	Global_15869 = iParam3;
	StringCopy(&Global_15856, sParam2, 24);
}

void func_5(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

char* func_6()
{
	char* sVar0;
	
	switch (iLocal_47)
	{
		case 0:
			sVar0 = "BARY1_RCMLI1";
			break;
		
		case 1:
			sVar0 = "BARY1_RCMLI2";
			break;
		
		case 2:
			sVar0 = "BARY1_RCMLI3";
			break;
		
		case 3:
			sVar0 = "BARY1_RCMLI4";
			break;
		
		case 4:
			sVar0 = "BARY1_RCMLI5";
			break;
	}
	iLocal_47++;
	if (iLocal_47 > 4)
	{
		iLocal_47 = 0;
	}
	return sVar0;
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

float func_8(int iParam0, int iParam1, bool bParam2)
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

int func_9()
{
	if (Global_15866 != 0 || unk_0x12BF789190D82474())
	{
		return 1;
	}
	return 0;
}

int func_10(int iParam0)
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

void func_11()
{
	if (unk_0xCA12322D8FBBDBEE(-1, vLocal_50, 5f))
	{
		if (func_10(iLocal_43))
		{
			unk_0xF70578F5CD9822CB(iLocal_43, false);
			unk_0x3AA7BDD1A9C14E75(iLocal_43, 1000, 1, 0);
		}
		if (func_10(iLocal_41))
		{
			unk_0xF70578F5CD9822CB(iLocal_41, false);
		}
		if (func_10(iLocal_40))
		{
			unk_0xF70578F5CD9822CB(iLocal_40, false);
		}
	}
}

void func_12()
{
	if (func_10(iLocal_43))
	{
		if (!unk_0x5A04E3BD0B5E7E49(iLocal_43))
		{
			unk_0x0D21E1FDE062ED99(iLocal_43, true, 0);
		}
		unk_0x73D993BCA1CEC58D(iLocal_43, 1, 0, 0, false);
		unk_0x4A852F02088ECC9D(iLocal_43, true);
		unk_0xF8E07C228A90E953(iLocal_43, 0);
		unk_0xF0BE7CB40DE62A2F(iLocal_43, false);
		unk_0xC6CDB5F78F0E3592(iLocal_43, "POSTBARRY");
		unk_0x0648A75D3F60E864(iLocal_43, 1862763509);
		unk_0x23298AB8A7D0F403(iLocal_43, false, 0);
		unk_0xF70578F5CD9822CB(iLocal_43, true);
		unk_0xBEADAF07D2339505(iLocal_43, vLocal_50, 1, false, 0, 1);
		unk_0x3C990C409B3845DE(iLocal_43, func_17(1.12f));
		unk_0xF70578F5CD9822CB(iLocal_43, true);
		unk_0x108754262311D34F(iLocal_43, sLocal_44, sLocal_45, 8f, -8f, -1, 9, 0, 0, 0, 0);
		unk_0xC4A347124F39D998(iLocal_43, unk_0x33CD235DF1E6A94E(), -1, 0, 2);
	}
}

int func_13(int iParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_16(iParam1))
	{
		iVar0 = func_15(iParam1);
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
			func_14(*iParam0, iParam1);
			if (bParam4)
			{
				unk_0x71CA80D41E1338B4(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_14(var uParam0, int iParam1)
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

int func_15(int iParam0)
{
	if (!func_16(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_16(int iParam0)
{
	return iParam0 < 3;
}

float func_17(float fParam0)
{
	return (fParam0 * 57.29578f);
}

void func_18()
{
	if (unk_0x8FCF53827AC6136E(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), 0))
	{
		iLocal_41 = unk_0x68F833BFE3A28FEA(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), 0, 0, 1);
		if (func_24(iLocal_41))
		{
			if (!unk_0x5A04E3BD0B5E7E49(iLocal_41))
			{
				unk_0x0D21E1FDE062ED99(iLocal_41, true, 0);
			}
			vLocal_49 = { 189.5964f, -956.0344f, 29.54f };
			unk_0xBEADAF07D2339505(iLocal_41, vLocal_49, 1, false, 0, 1);
			unk_0x3C990C409B3845DE(iLocal_41, func_17(-2.01f));
			unk_0xF70578F5CD9822CB(iLocal_41, true);
		}
	}
	if (unk_0x8FCF53827AC6136E(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), 0))
	{
		iLocal_40 = unk_0x68F833BFE3A28FEA(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), 0, 0, 1);
		if (func_24(iLocal_40))
		{
			if (!unk_0x5A04E3BD0B5E7E49(iLocal_40))
			{
				unk_0x0D21E1FDE062ED99(iLocal_40, true, 0);
			}
			vLocal_49 = { 190.2574f, -956.3513f, 29.621f };
			unk_0xBEADAF07D2339505(iLocal_40, vLocal_49, 1, false, 0, 1);
			unk_0x3C990C409B3845DE(iLocal_40, func_17(-1.68f));
			unk_0xF70578F5CD9822CB(iLocal_40, true);
		}
	}
	else
	{
		vLocal_49 = { 190.2574f, -956.3513f, 29.621f };
		func_19(&iLocal_40, joaat("prop_chair_08"), vLocal_49, func_17(-1.68f));
		unk_0xBEADAF07D2339505(iLocal_40, vLocal_49, 1, false, 0, 1);
		unk_0x3C990C409B3845DE(iLocal_40, func_17(-1.68f));
		unk_0xF70578F5CD9822CB(iLocal_40, true);
	}
	vLocal_49 = { 192.4462f, -953.5946f, 29.0919f };
	if (unk_0x8FCF53827AC6136E(vLocal_49, 25f, joaat("prop_protest_sign_01"), 0))
	{
		iLocal_42 = unk_0x68F833BFE3A28FEA(vLocal_49, 25f, joaat("prop_protest_sign_01"), 0, 0, 1);
		if (func_24(iLocal_42))
		{
			if (!unk_0x5A04E3BD0B5E7E49(iLocal_42))
			{
				unk_0x0D21E1FDE062ED99(iLocal_42, true, 0);
			}
			vLocal_49.z = 29.603f;
			unk_0xBEADAF07D2339505(iLocal_42, vLocal_49, 1, false, 0, 1);
			unk_0x3C990C409B3845DE(iLocal_42, 23.45f);
		}
	}
	else
	{
		func_19(&iLocal_42, joaat("prop_protest_sign_01"), vLocal_49, 23.45f);
		unk_0xBEADAF07D2339505(iLocal_42, vLocal_49, 1, false, 0, 1);
		unk_0x3C990C409B3845DE(iLocal_42, 23.45f);
	}
}

void func_19(int iParam0, int iParam1, vector3 vParam2, float fParam3)
{
	func_20(iParam0);
	*iParam0 = unk_0x7CA67831169E8AA6(iParam1, vParam2, true, true, false);
	unk_0x3C990C409B3845DE(*iParam0, fParam3);
}

void func_20(int iParam0)
{
	if (unk_0x765F6FEEFF39224F(*iParam0))
	{
		if (unk_0x47904E0914F5B5C6(*iParam0))
		{
			unk_0x35F11A916FDFCF32(*iParam0, 1, true);
		}
		unk_0xEC26F4BFC9942A0C(iParam0);
	}
}

void func_21(bool bParam0)
{
	if (bParam0)
	{
		func_23(&iLocal_43);
	}
	else
	{
		func_22(&iLocal_43, 1, 0, 1);
	}
	if (func_10(iLocal_41))
	{
		unk_0xF70578F5CD9822CB(iLocal_41, false);
	}
	if (func_10(iLocal_40))
	{
		unk_0xF70578F5CD9822CB(iLocal_40, false);
	}
	if (bParam0)
	{
		func_20(&iLocal_40);
		func_20(&iLocal_41);
		func_20(&iLocal_42);
	}
	else
	{
		func_1(&iLocal_40, 0);
		func_1(&iLocal_41, 0);
		func_1(&iLocal_42, 0);
	}
	unk_0xFF2DEA68E2D3602E(sLocal_44);
	unk_0xB073DB452891DC0B(7, false);
	unk_0x5894DC159447E10A();
}

void func_22(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (unk_0x765F6FEEFF39224F(*iParam0))
	{
		if (!unk_0xBC2FC12AD0FBF72E(*iParam0))
		{
			unk_0x43D47AD82DA3C6EC(*iParam0, false, 1);
			if (iParam3 == 0)
			{
				unk_0x05AB47B112CF24AE(*iParam0);
			}
			unk_0x897EF720254BBEA3(*iParam0, bParam1);
			if (iParam2 == 1)
			{
				unk_0x4A852F02088ECC9D(*iParam0, false);
			}
		}
		unk_0x1F45B4626AC4A4C0(iParam0);
	}
}

void func_23(int iParam0)
{
	if (unk_0x765F6FEEFF39224F(*iParam0))
	{
		if (!unk_0xD62C4419A41F106A(*iParam0, 0))
		{
			unk_0x43D47AD82DA3C6EC(*iParam0, false, 1);
		}
		if (!unk_0x5A04E3BD0B5E7E49(*iParam0))
		{
			unk_0x0D21E1FDE062ED99(*iParam0, true, 0);
		}
		unk_0x4B8B69DAE5BAC592(iParam0);
	}
}

bool func_24(int iParam0)
{
	if (!unk_0x765F6FEEFF39224F(iParam0))
	{
		return 0;
	}
	return !unk_0xD62C4419A41F106A(iParam0, 0);
}

