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
	iLocal_28 = 1;
	if (unk_0x4210287E2833D44B(18))
	{
		func_42();
	}
	func_41(20);
	func_40();
	func_39(1);
	func_39(0);
	func_39(2);
	func_39(13);
	func_39(12);
	Global_7673 = 1;
	func_38();
	if (!func_37(-1615086084))
	{
		func_36(-1615086084, 2, 2, 2, 1, -1, 5);
	}
	if (!func_37(-1970925435))
	{
		func_36(-1970925435, 2, 0, 0, 1, -1, 5);
	}
	if (!func_37(-1817481777))
	{
		func_36(-1817481777, 2, 12, 3, 1, -1, 5);
	}
	bVar0 = false;
	while (func_35(23) && !func_34(134))
	{
		if (func_29() == 1)
		{
			if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()))
			{
				if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
				{
					if ((!unk_0x480609C7D10E7F3E(unk_0x7D2B9E6A64637269()) && !unk_0x0297E633EADA2182(unk_0x7D2B9E6A64637269())) && !unk_0x2AB8EC6521549BAD(unk_0x7D2B9E6A64637269()))
					{
						if (!bVar0)
						{
							if (!((func_28() || unk_0xF471787D45ADC2C1()) || func_27()))
							{
								if (func_13())
								{
									bVar0 = true;
								}
							}
						}
						else
						{
							if (iLocal_28)
							{
								unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), 0, 384);
								unk_0x1A1227D4CEE3DA07(unk_0x7D2B9E6A64637269(), 0f);
								unk_0x681AE3DAF3A73058(0, 173, 1);
								unk_0x681AE3DAF3A73058(0, 172, 1);
								unk_0x681AE3DAF3A73058(0, 174, 1);
								unk_0x681AE3DAF3A73058(0, 175, 1);
								unk_0x681AE3DAF3A73058(0, 176, 1);
								unk_0x681AE3DAF3A73058(0, 177, 1);
								unk_0x681AE3DAF3A73058(0, 178, 1);
								unk_0x681AE3DAF3A73058(0, 179, 1);
								unk_0x681AE3DAF3A73058(0, 180, 1);
								unk_0x681AE3DAF3A73058(0, 181, 1);
							}
							else
							{
								unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), 1, 0);
							}
							switch (func_12())
							{
								case -1615086084:
									if (!func_37(-1989308064))
									{
										func_8(-1989308064, 0, 1, 0, 1, 6000, 6000, -1, 0, -1, 68);
									}
									break;
								
								case -1989308064:
									func_7(12, 0);
									func_6(134, 1);
									unk_0xAC4FD27671081628(joaat("sp_final_decision"), 2, 1);
									break;
								
								case -1970925435:
									if (!func_37(-1060930305))
									{
										func_8(-1060930305, 0, 1, 2, 2, 6000, 6000, -1, 0, -1, 68);
									}
									break;
								
								case -1060930305:
									func_7(12, 1);
									func_6(134, 1);
									unk_0xAC4FD27671081628(joaat("sp_final_decision"), 1, 1);
									break;
								
								case -1817481777:
									func_7(12, 2);
									func_6(134, 1);
									unk_0xAC4FD27671081628(joaat("sp_final_decision"), 3, 1);
									break;
								
								default:
									if (!func_5(0))
									{
										bVar0 = false;
									}
									else if (iLocal_28)
									{
										if (func_4())
										{
											iLocal_28 = 0;
										}
									}
									break;
								}
							}
						}
					}
				}
		}
		SYSTEM::WAIT(0);
	}
	func_3(20);
	Global_99409 = 0;
	func_1();
	func_42();
}

int func_1()
{
	if (func_2(0))
	{
		return 0;
	}
	if (Global_99409.f_8)
	{
		if (Global_99409.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_99409.f_10 > 1)
	{
		return 0;
	}
	Global_99409.f_10++;
	return 1;
}

bool func_2(bool bParam0)
{
	if (!bParam0 && unk_0x636F1F53CC61D2C9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x234B68AC2E35ED5A(Global_77496, 0);
}

int func_3(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0x234B68AC2E35ED5A(Global_112293.f_9083.f_99.f_219[iVar0], iVar1))
	{
		unk_0xC664C0067EEAB8D1(&(Global_112293.f_9083.f_99.f_219[iVar0]), iVar1);
		return 1;
	}
	return 0;
}

int func_4()
{
	if (Global_19798.f_1 == 10 || Global_19798.f_1 == 9)
	{
		return 1;
	}
	return 0;
}

int func_5(int iParam0)
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

void func_6(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_112293.f_9083.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_112293.f_9083.f_99.f_58[iParam0] = iParam1;
}

void func_7(int iParam0, int iParam1)
{
	if (iParam0 == 13 || iParam0 == -1)
	{
		return;
	}
	if (Global_112293.f_9083.f_99.f_205[iParam0] == iParam1)
	{
		return;
	}
	Global_112293.f_9083.f_99.f_205[iParam0] = iParam1;
}

int func_8(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<15> Var0;
	int iVar15;
	
	if (func_2(0))
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam7 == 76)
	{
		return 0;
	}
	if (iParam8 == 235)
	{
		return 0;
	}
	if (iParam3 == iParam2)
	{
		return 0;
	}
	if (((iParam2 != 144 && iParam2 != 0) && iParam2 != 1) && iParam2 != 2)
	{
		return 0;
	}
	if (Global_112293.f_7686.f_136 < 9)
	{
		Var0 = iParam0;
		if (Global_112293.f_7686.f_911 == Var0)
		{
			Global_112293.f_7686.f_911 = -1;
		}
		Var0.f_3 = func_11(iParam1);
		Var0.f_5 = iParam6;
		Var0.f_4 = (unk_0xDFB7BFA6482FEE1E() + iParam5);
		Var0.f_1 = iParam10;
		iVar15 = 0;
		unk_0x191DDA30577F440A(&iVar15, iParam2);
		Var0.f_2 = iVar15;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = -1;
		Var0.f_11 = -1;
		Var0.f_7 = iParam7;
		Var0.f_8 = iParam8;
		Var0.f_9 = iParam9;
		unk_0x191DDA30577F440A(&(Var0.f_1), 0);
		unk_0xC664C0067EEAB8D1(&(Var0.f_1), 1);
		if (iParam1 == 0)
		{
			unk_0x191DDA30577F440A(&(Var0.f_1), 10);
		}
		Global_112293.f_7686[Global_112293.f_7686.f_136 /*15*/] = { Var0 };
		Global_112293.f_7686.f_136++;
		func_9(iParam2);
		return 1;
	}
	return 0;
}

void func_9(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_10(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_112293.f_7686.f_136)
	{
		if (unk_0x234B68AC2E35ED5A(Global_112293.f_7686[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_112293.f_7686[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_112293.f_7686[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_112293.f_7686.f_764)
	{
		if (unk_0x234B68AC2E35ED5A(Global_112293.f_7686.f_651[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_112293.f_7686.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_112293.f_7686.f_919[iParam0] = iVar1;
}

bool func_10(int iParam0)
{
	return iParam0 < 3;
}

int func_11(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

int func_12()
{
	return Global_112293.f_7686.f_911;
}

int func_13()
{
	if (Global_19798.f_1 > 3)
	{
		unk_0xC664C0067EEAB8D1(&Global_7669, 0);
		func_22(0);
		return 0;
	}
	unk_0x191DDA30577F440A(&Global_7669, 0);
	if (func_14(0, 0, 1, 1))
	{
		return 1;
	}
	unk_0xC664C0067EEAB8D1(&Global_7669, 0);
	return 0;
}

int func_14(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (Global_77248)
	{
		if (((iParam0 != 17 && iParam0 != 3) && iParam0 != 23) && iParam0 != 1)
		{
			return 0;
		}
		if (!unk_0x234B68AC2E35ED5A(Global_4272479, 14))
		{
			if (iParam0 == 17)
			{
				unk_0x191DDA30577F440A(&Global_4272479, 14);
				unk_0x191DDA30577F440A(&Global_4272479, 16);
			}
			if (iParam0 == 3)
			{
				unk_0x191DDA30577F440A(&Global_4272479, 14);
				unk_0x191DDA30577F440A(&Global_4272479, 15);
			}
			if (iParam0 == 23)
			{
				unk_0x191DDA30577F440A(&Global_4272479, 14);
				unk_0x191DDA30577F440A(&Global_4272479, 27);
			}
			if (iParam0 == 1)
			{
				unk_0x191DDA30577F440A(&Global_4272479, 14);
				unk_0x191DDA30577F440A(&Global_4272479, 29);
			}
		}
		if (Global_7675[iParam0 /*15*/].f_9 == 0)
		{
			func_20();
		}
		if (unk_0x636F1F53CC61D2C9(Global_7675[iParam0 /*15*/].f_9) > 0)
		{
			unk_0xC664C0067EEAB8D1(&Global_4272479, 14);
			unk_0xC664C0067EEAB8D1(&Global_4272479, 16);
			unk_0xC664C0067EEAB8D1(&Global_4272479, 15);
			unk_0xC664C0067EEAB8D1(&Global_4272479, 27);
			unk_0xC664C0067EEAB8D1(&Global_4272479, 29);
			return 1;
		}
		else
		{
			return 0;
		}
	}
	func_19();
	if (Global_19798.f_1 == 9)
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		if (func_5(0) == 1)
		{
			return 0;
		}
	}
	if (Global_19764 == 1)
	{
		return 0;
	}
	if (Global_19798.f_1 == 7)
	{
		return 0;
	}
	if (iParam1 == 1)
	{
	}
	if (!unk_0x4BE697D014536271(Global_19795))
	{
		if (unk_0x636F1F53CC61D2C9(joaat("cellphone_flashhand")) == 0)
		{
			if (Global_19798.f_1 < 4)
			{
				func_18("cellphone_flashhand");
				if (unk_0x636F1F53CC61D2C9(joaat("cellphone_flashhand")) == 0)
				{
					Global_19795 = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", 1424);
				}
				unk_0xFC3890D22570A26E("cellphone_flashhand");
			}
		}
	}
	while (!Global_19780)
	{
		SYSTEM::WAIT(0);
	}
	func_20();
	func_15();
	if (unk_0x636F1F53CC61D2C9(Global_7675[iParam0 /*15*/].f_9) == 0)
	{
		Global_8274 = 0;
		Global_19798.f_1 = 7;
		func_18(&(Global_7675[iParam0 /*15*/].f_5));
		if (bParam3)
		{
			if (unk_0x636F1F53CC61D2C9(Global_7675[iParam0 /*15*/].f_9) == 0)
			{
				Global_19796 = SYSTEM::START_NEW_SCRIPT(&(Global_7675[iParam0 /*15*/].f_5), 4000);
			}
		}
		else if (unk_0x636F1F53CC61D2C9(Global_7675[iParam0 /*15*/].f_9) == 0)
		{
			Global_19796 = SYSTEM::START_NEW_SCRIPT(&(Global_7675[iParam0 /*15*/].f_5), 2552);
		}
		unk_0xFC3890D22570A26E(&(Global_7675[iParam0 /*15*/].f_5));
		return 1;
	}
	return 1;
}

void func_15()
{
	if (Global_77248 == 0)
	{
		Global_7675[14 /*15*/].f_4 = -99;
		Global_7675[4 /*15*/].f_4 = -99;
		if (Global_2463492)
		{
			if (func_17(14))
			{
				func_16(2, "CELL_2", 2, "appInternet", 6, 1, 1, 0, 0);
				func_16(14, "CELL_29", 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				func_16(14, "CELL_29", 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			func_16(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}
}

void func_16(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	StringCopy(&(Global_7675[iParam0 /*15*/]), sParam1, 16);
	Global_7675[iParam0 /*15*/].f_4 = iParam2;
	StringCopy(&(Global_7675[iParam0 /*15*/].f_5), sParam3, 16);
	Global_7675[iParam0 /*15*/].f_9 = unk_0x15173FB88ABC94F9(sParam3);
	Global_7675[iParam0 /*15*/].f_10 = iParam4;
	Global_7675[iParam0 /*15*/].f_11 = iParam5;
	Global_7675[iParam0 /*15*/].f_12 = iParam6;
	Global_7675[iParam0 /*15*/].f_13 = iParam7;
	Global_7675[iParam0 /*15*/].f_14 = iParam8;
	if (Global_7675[iParam0 /*15*/].f_12 == 0)
	{
		Global_7675[iParam0 /*15*/].f_12 = 0;
	}
	if (Global_7675[iParam0 /*15*/].f_13 == 0)
	{
		Global_7675[iParam0 /*15*/].f_13 = 0;
	}
	if (Global_7675[iParam0 /*15*/].f_14 == 0)
	{
		Global_7675[iParam0 /*15*/].f_14 = 0;
	}
}

bool func_17(int iParam0)
{
	return Global_42009 == iParam0;
}

void func_18(char* sParam0)
{
	unk_0xA7988ABD4140D469(sParam0);
	while (!unk_0x79CDCC8ABB331B8C(sParam0))
	{
		SYSTEM::WAIT(0);
	}
}

void func_19()
{
	if (func_17(14))
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
		Global_19798 = func_29();
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

void func_20()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 34)
	{
		Global_7675[iVar0 /*15*/].f_4 = -99;
		iVar0++;
	}
	if (Global_77248 == 0)
	{
		iVar1 = 0;
		while (iVar2 < 161)
		{
			if (func_21(iVar2, Global_19798) == 1)
			{
				iVar1 = 1;
			}
			iVar2++;
		}
		func_16(7, "CELL_5", 0, "appEmail", 4, 1, 1, 0, 0);
		func_16(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_16(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		if ((Global_42009 == 15 && func_2(0) == 0) && Global_7673 == 0)
		{
			func_16(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_19987 = 0;
			Global_7674 = 255;
		}
		else
		{
			func_16(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_19987 = 1;
			Global_7674 = 42;
		}
		if (iVar1 == 1)
		{
			func_16(0, "CELL_0", 4, "appContacts", 27, 1, 1, 0, 0);
		}
		else
		{
			func_16(0, "CELL_0", 4, "appContacts", 5, 1, 1, 0, 0);
		}
		func_16(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_16(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_16(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		if (Global_112293.f_14049.f_89 == 1)
		{
			func_16(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		if (Global_112293.f_14049.f_88 == 1)
		{
			func_16(16, "CELL_25", 0, "appContacts", 40, 2, 1, 0, 0);
		}
		func_16(25, "CELL_14", -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_16(11, "CELL_14", -99, "appContacts", 8, 2, 1, 0, 0);
		func_16(27, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(28, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(29, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
		func_16(30, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(31, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(32, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_16(7, "CELL_5", 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_16(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_16(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_16(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_16(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		func_16(14, "CELL_29", 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_16(0, "CELL_0", 2, "appContacts", 5, 1, 1, 0, 0);
		func_16(21, "JIPMP_QJ", 3, "AppJIPMP", 14, 1, 1, 0, 0);
		if (unk_0x234B68AC2E35ED5A(Global_4272479, 4) == 1)
		{
			func_16(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		func_16(13, "CELL_35", -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_16(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_16(15, "CELL_18", -99, "appContacts", 8, 1, 1, 0, 0);
		func_16(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_16(5, "CELL_4", -99, "appContacts", 12, 2, 1, 0, 0);
		func_16(23, "CELL_15", 0, "appContacts", 17, 2, 1, 0, 0);
		func_16(24, "CELL_15", 1, "appContacts", 17, 2, 1, 0, 0);
		func_16(25, "CELL_15", 2, "appContacts", 17, 2, 1, 0, 0);
		func_16(26, "CELL_15", 3, "appContacts", 17, 2, 1, 0, 0);
		func_16(27, "CELL_15", 4, "appContacts", 17, 2, 1, 0, 0);
		func_16(28, "CELL_15", 5, "appContacts", 17, 2, 1, 0, 0);
		func_16(29, "CELL_15", 6, "appContacts", 17, 2, 1, 0, 0);
		func_16(30, "CELL_15", 7, "appContacts", 17, 2, 1, 0, 0);
		func_16(31, "CELL_15", 8, "appContacts", 17, 2, 1, 0, 0);
		func_16(32, "CELL_15", 9, "appContacts", 17, 2, 1, 0, 0);
		func_16(33, "CELL_15", 10, "appContacts", 17, 2, 1, 0, 0);
		if (!unk_0x234B68AC2E35ED5A(Global_4272479, 4) == 1)
		{
			if (Global_1573938)
			{
				func_16(23, "CELL_CIRCBREAK", 8, "AppVLSI", 54, 1, 1, 0, 0);
			}
			else if (unk_0x234B68AC2E35ED5A(Global_4272479, 20) == 1)
			{
				func_16(23, "CELL_SIGHTS", 8, "AppSettings", 59, 1, 1, 0, 0);
			}
			else if (unk_0x234B68AC2E35ED5A(Global_4272479, 22) == 1)
			{
				func_16(23, "CELL_EXTRACT", 8, "AppExtraction", 58, 1, 1, 0, 0);
			}
			else if (unk_0x234B68AC2E35ED5A(Global_4272479, 26) == 1)
			{
				func_16(23, "CELL_SECHACK", 8, "AppSecuroHack", 57, 1, 1, 0, 0);
			}
		}
		if ((((unk_0x234B68AC2E35ED5A(Global_4272479, 4) == 0 && Global_1573938 == 0) && unk_0x234B68AC2E35ED5A(Global_4272479, 20) == 0) && unk_0x234B68AC2E35ED5A(Global_4272479, 22) == 0) && unk_0x234B68AC2E35ED5A(Global_4272479, 26) == 0)
		{
			func_16(23, "CELL_BOSSAGE", 8, "appMPBossAgency", 57, 1, 1, 0, 0);
		}
	}
}

int func_21(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1878[iParam0 /*29*/].f_19[iParam1];
}

void func_22(int iParam0)
{
	if (func_26())
	{
		return;
	}
	if (Global_19984)
	{
		if (func_25())
		{
			func_24(1, 1);
		}
		else
		{
			func_24(0, 0);
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
	if (!func_23())
	{
		Global_19798.f_1 = 3;
	}
}

int func_23()
{
	if (Global_19798.f_1 == 1 || Global_19798.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_24(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_5(0))
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

bool func_25()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 5);
}

bool func_26()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 19);
}

int func_27()
{
	if (!unk_0x02BFF15CAA701972())
	{
		return Global_96848.f_44 == 1;
	}
	return 0;
}

int func_28()
{
	if (unk_0x636F1F53CC61D2C9(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_29()
{
	func_30();
	return Global_112293.f_2361.f_539.f_4321;
}

void func_30()
{
	int iVar0;
	
	if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()))
	{
		if (func_32(Global_112293.f_2361.f_539.f_4321) != unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()))
		{
			iVar0 = func_31(unk_0x7D2B9E6A64637269());
			if (func_10(iVar0) && (!func_17(14) || Global_111244))
			{
				if (Global_112293.f_2361.f_539.f_4321 != iVar0 && func_10(Global_112293.f_2361.f_539.f_4321))
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

int func_31(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x419E13582192CFEA(uParam0))
	{
		iVar1 = unk_0x6471F4759775FCA4(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_32(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_32(int iParam0)
{
	if (func_10(iParam0))
	{
		return func_33(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_33(int iParam0)
{
	return Global_1878[iParam0 /*29*/];
}

int func_34(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_112293.f_9083.f_99.f_58[iParam0];
}

int func_35(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_112293.f_9083.f_330[iParam0 /*6*/];
}

int func_36(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<15> Var0;
	
	if (func_2(0))
	{
		return 0;
	}
	if (iParam2 < 3)
	{
		if (unk_0x234B68AC2E35ED5A(iParam1, iParam2))
		{
			return 0;
		}
	}
	if (iParam1 < 1 || iParam1 > 7)
	{
		return 0;
	}
	if (iParam4 <= 0)
	{
		return 0;
	}
	if (Global_112293.f_7686.f_650 < 30)
	{
		Var0 = iParam0;
		if (Global_112293.f_7686.f_911 == Var0)
		{
			Global_112293.f_7686.f_911 = -1;
		}
		Var0.f_1 = 0;
		Var0.f_6 = iParam2;
		Var0.f_2 = iParam1;
		Var0.f_14 = iParam3;
		Var0.f_3 = iParam6;
		Var0.f_7 = -1;
		Var0.f_8 = 0;
		Var0.f_9 = -1;
		Var0.f_4 = (unk_0xDFB7BFA6482FEE1E() + iParam4);
		Var0.f_9 = iParam5;
		Var0.f_10 = -1;
		Var0.f_11 = -1;
		unk_0x191DDA30577F440A(&(Var0.f_1), 0);
		unk_0x191DDA30577F440A(&(Var0.f_1), 6);
		Global_112293.f_7686.f_199[Global_112293.f_7686.f_650 /*15*/] = { Var0 };
		Global_112293.f_7686.f_650++;
		return 1;
	}
	return 0;
}

int func_37(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_112293.f_7686.f_136)
	{
		if (Global_112293.f_7686[iVar0 /*15*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_112293.f_7686.f_650)
	{
		if (Global_112293.f_7686.f_199[iVar0 /*15*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_112293.f_7686.f_198)
	{
		if (Global_112293.f_7686.f_137[iVar0 /*15*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_112293.f_7686.f_764)
	{
		if (Global_112293.f_7686.f_651[iVar0 /*14*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_112293.f_7686.f_866)
	{
		if (Global_112293.f_7686.f_765[iVar0 /*10*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_38()
{
	Global_99409 = 1;
}

void func_39(int iParam0)
{
	if (((((iParam0 == 144 || iParam0 == 145) || iParam0 == 161) || iParam0 == 176) || iParam0 == 175) || iParam0 == 162)
	{
		return;
	}
	Global_42561[iParam0] = unk_0xDFB7BFA6482FEE1E();
}

void func_40()
{
	Global_42560 = unk_0xDFB7BFA6482FEE1E();
}

int func_41(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0x234B68AC2E35ED5A(Global_112293.f_9083.f_99.f_219[iVar0], iVar1))
	{
		return 0;
	}
	unk_0x191DDA30577F440A(&(Global_112293.f_9083.f_99.f_219[iVar0]), iVar1);
	return 1;
}

void func_42()
{
	func_43(-1615086084);
	func_43(-1989308064);
	func_43(-1970925435);
	func_43(-1060930305);
	func_43(-1817481777);
	Global_7673 = 0;
	unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), 1, 0);
	unk_0x4BFE89D21F9885DC();
}

int func_43(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < Global_112293.f_7686.f_136)
	{
		if (Global_112293.f_7686[iVar0 /*15*/] == iParam0)
		{
			if (Global_42556 != iVar0)
			{
				func_54(iVar0);
				func_47(iParam0);
				iVar1 = 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_112293.f_7686.f_198)
	{
		if (Global_112293.f_7686.f_137[iVar0 /*15*/] == iParam0)
		{
			func_47(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_112293.f_7686.f_650)
	{
		if (Global_112293.f_7686.f_199[iVar0 /*15*/] == iParam0)
		{
			func_46(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_112293.f_7686.f_764)
	{
		if (Global_112293.f_7686.f_651[iVar0 /*14*/] == iParam0)
		{
			func_45(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_112293.f_7686.f_866)
	{
		if (Global_112293.f_7686.f_765[iVar0 /*10*/] == iParam0)
		{
			func_44(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	return iVar1;
}

void func_44(int iParam0)
{
	int iVar0;
	struct<10> Var1;
	
	if (iParam0 < 0 || iParam0 >= Global_112293.f_7686.f_866)
	{
		return;
	}
	if (Global_112293.f_7686.f_866 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_112293.f_7686.f_866 - 2))
		{
			Global_112293.f_7686.f_765[iVar0 /*10*/] = { Global_112293.f_7686.f_765[iVar0 + 1 /*10*/] };
			iVar0++;
		}
	}
	if (Global_112293.f_7686.f_866 > 0)
	{
		Global_112293.f_7686.f_765[(Global_112293.f_7686.f_866 - 1) /*10*/] = { Var1 };
		Global_112293.f_7686.f_866 = (Global_112293.f_7686.f_866 - 1);
	}
}

void func_45(int iParam0)
{
	int iVar0;
	struct<14> Var1;
	
	if (iParam0 < 0 || iParam0 >= Global_112293.f_7686.f_764)
	{
		return;
	}
	if (Global_112293.f_7686.f_764 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_112293.f_7686.f_764 - 2))
		{
			Global_112293.f_7686.f_651[iVar0 /*14*/] = { Global_112293.f_7686.f_651[iVar0 + 1 /*14*/] };
			iVar0++;
		}
	}
	if (Global_112293.f_7686.f_764 > 0)
	{
		Global_112293.f_7686.f_651[(Global_112293.f_7686.f_764 - 1) /*14*/] = { Var1 };
		Global_112293.f_7686.f_764 = (Global_112293.f_7686.f_764 - 1);
	}
	func_9(0);
	func_9(1);
	func_9(2);
}

void func_46(int iParam0)
{
	struct<15> Var0;
	int iVar15;
	int iVar16;
	
	iVar15 = 0;
	while (iVar15 < Global_112293.f_7686.f_650)
	{
		if (Global_112293.f_7686.f_199[iVar15 /*15*/] == iParam0)
		{
			iVar16 = iVar15;
			while (iVar16 <= (Global_112293.f_7686.f_650 - 2))
			{
				Global_112293.f_7686.f_199[iVar16 /*15*/] = { Global_112293.f_7686.f_199[iVar16 + 1 /*15*/] };
				iVar16++;
			}
			Global_112293.f_7686.f_199[(Global_112293.f_7686.f_650 - 1) /*15*/] = { Var0 };
			Global_112293.f_7686.f_650 = (Global_112293.f_7686.f_650 - 1);
			return;
		}
		iVar15++;
	}
}

void func_47(int iParam0)
{
	struct<15> Var0;
	int iVar15;
	int iVar16;
	
	iVar15 = 0;
	while (iVar15 < Global_112293.f_7686.f_198)
	{
		if (Global_112293.f_7686.f_137[iVar15 /*15*/] == iParam0)
		{
			func_48(Global_112293.f_7686.f_137[iVar15 /*15*/].f_6);
			iVar16 = iVar15;
			while (iVar16 <= (Global_112293.f_7686.f_198 - 2))
			{
				Global_112293.f_7686.f_137[iVar16 /*15*/] = { Global_112293.f_7686.f_137[iVar16 + 1 /*15*/] };
				iVar16++;
			}
			Global_112293.f_7686.f_137[(Global_112293.f_7686.f_198 - 1) /*15*/] = { Var0 };
			Global_112293.f_7686.f_198 = (Global_112293.f_7686.f_198 - 1);
			return;
		}
		iVar15++;
	}
}

int func_48(int iParam0)
{
	int iVar0;
	
	if (Global_117[iParam0 /*10*/].f_8 != 158)
	{
		if (func_21(iParam0, Global_19798) == 1)
		{
			func_53(iParam0, Global_19798, 0);
			if (func_52(iParam0, Global_19798) == 0)
			{
				iVar0 = Global_19798;
				func_49(iParam0, iVar0);
			}
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_49(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_117[iParam0 /*10*/].f_8 != 158)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			iVar0 = iParam1;
			func_51(iParam0, iVar0, 0);
			func_50(iParam0, iVar0, 0);
		}
	}
}

void func_50(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1878[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_112293.f_28048[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

void func_51(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1878[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_112293.f_28048[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

int func_52(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1878[iParam0 /*29*/].f_24[iParam1];
}

void func_53(int iParam0, int iParam1, int iParam2)
{
	Global_1878[iParam0 /*29*/].f_19[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_112293.f_28048[iParam0 /*29*/].f_19[iParam1] = iParam2;
	}
}

void func_54(int iParam0)
{
	int iVar0;
	var uVar1;
	struct<15> Var2;
	
	if (iParam0 < 0 || iParam0 >= Global_112293.f_7686.f_136)
	{
		return;
	}
	uVar1 = Global_112293.f_7686[iParam0 /*15*/].f_2;
	if (Global_112293.f_7686.f_136 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_112293.f_7686.f_136 - 2))
		{
			Global_112293.f_7686[iVar0 /*15*/] = { Global_112293.f_7686[iVar0 + 1 /*15*/] };
			iVar0++;
		}
	}
	if (Global_112293.f_7686.f_136 > 0)
	{
		Global_112293.f_7686[(Global_112293.f_7686.f_136 - 1) /*15*/] = { Var2 };
		Global_112293.f_7686.f_136 = (Global_112293.f_7686.f_136 - 1);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x234B68AC2E35ED5A(uVar1, iVar0))
		{
			func_9(iVar0);
		}
		iVar0++;
	}
}

