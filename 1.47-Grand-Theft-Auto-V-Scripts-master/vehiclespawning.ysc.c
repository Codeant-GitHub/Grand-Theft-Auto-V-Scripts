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
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	bool bLocal_39 = 0;
	int iLocal_40 = 0;
	bool bLocal_41 = 0;
	var uLocal_42 = 0;
	float fLocal_43 = 0f;
	int iLocal_44 = 0;
	vector3 vLocal_45 = { 0f, 0f, 0f };
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
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	fLocal_43 = 277.7314f;
	vLocal_45 = { -196.045f, -580.13f, 135.0004f };
	unk_0x7EDEAEAED85BEE4F(800);
	func_20();
	while (true)
	{
		unk_0xA0C03C1F783AD4C4();
		func_19();
		if (func_7() || uLocal_42)
		{
			func_3();
		}
		if (!iLocal_38)
		{
			if (!iLocal_37 && unk_0xBB5E373390A5F824())
			{
				unk_0xBEADAF07D2339505(unk_0x33CD235DF1E6A94E(), vLocal_45, 1, false, 0, 1);
				unk_0x3C990C409B3845DE(unk_0x33CD235DF1E6A94E(), fLocal_43);
				unk_0x1F6A09AE9372AE6C(vLocal_45, 2500f, 0);
				unk_0xC7E6A5D90DED6E0B(0f);
				iLocal_37 = 1;
			}
			else if (unk_0xE980BAFD70E8A4B3())
			{
				if (!bLocal_41)
				{
					bLocal_41 = func_2();
				}
				else if (!bLocal_39)
				{
					bLocal_39 = func_1();
				}
				else
				{
					unk_0xACCDA78123DB57B0(800);
					iLocal_38 = 1;
				}
			}
		}
	}
}

int func_1()
{
	if (!unk_0x802F1160A12FDAC3(iLocal_44, "garage_decor_01"))
	{
		unk_0xAFF9058FF075CFD5(iLocal_44, "garage_decor_01");
	}
	else
	{
		unk_0x7749193AF003DC67(iLocal_44);
		return 1;
	}
	return 0;
}

int func_2()
{
	iLocal_44 = unk_0x65F35477FEAD6F0F(unk_0x33CD235DF1E6A94E());
	if (unk_0xDE9B75BB528AC06E(iLocal_44))
	{
		if (!iLocal_40)
		{
			unk_0xDDF57F769FD85704(iLocal_44);
			iLocal_40 = 1;
		}
		else if (unk_0x5FC25A9F19EB39FA(iLocal_44))
		{
			unk_0x2F7BF094F3C2A257(iLocal_44);
			return 1;
		}
	}
	return 0;
}

void func_3()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_36)
	{
		func_5(iVar0);
		iVar0++;
	}
	func_4();
}

void func_4()
{
	unk_0x5894DC159447E10A();
}

void func_5(int iParam0)
{
	func_6(&(uLocal_35[iParam0]));
	unk_0x9D34F024713B3952((unk_0x04C948F9025CE510(false, 0) - 1));
}

void func_6(var uParam0)
{
	int iVar0;
	
	if (unk_0x22C3124A898FB82A(*uParam0))
	{
		if (!unk_0x6F3D61B58C7B4025(*uParam0))
		{
		}
	}
	if (unk_0x4F94F07DAD382CDA(*uParam0))
	{
		iVar0 = unk_0xF2D53AA87148ACED(*uParam0);
		unk_0xFD5D4D96D91EEAAD(&iVar0);
	}
}

int func_7()
{
	var uVar0;
	
	func_15(&uVar0);
	if (Global_1312844 == 0)
	{
		if (!unk_0xB331FCEB94EB05C8())
		{
			return 1;
		}
	}
	if (func_14())
	{
		return 1;
	}
	if (Global_2460852)
	{
		return 1;
	}
	if (func_13())
	{
		return 1;
	}
	if (func_12(157))
	{
		if (!func_11())
		{
			return 1;
		}
	}
	if (func_12(155))
	{
		return 1;
	}
	if (!unk_0x43E505744A9B715D())
	{
		return 1;
	}
	if (func_8() != 0)
	{
		if (unk_0x1BCDA92AD0A7835B(func_8()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_8()
{
	switch (func_10())
	{
		case 0:
			return func_9();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_9()
{
	switch (Global_2460954)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_10()
{
	return Global_25765;
}

bool func_11()
{
	return Global_2448756.f_586;
}

int func_12(int iParam0)
{
	if (unk_0x3AE20F34FEE6C258(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_13()
{
	return Global_2458613;
}

bool func_14()
{
	return Global_2448756.f_581;
}

void func_15(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	iVar0 = 0;
	while (iVar0 < unk_0x77BABFD1D75AA582(1))
	{
		iVar1 = unk_0x5487531DB7DA4AB5(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x286A5F0670063839(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -275425152:
					func_16(iVar0);
					break;
				
				case -42615386:
					unk_0x286A5F0670063839(1, iVar0, &vVar3, 4);
					if (vVar3.z == 1267052711)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_16(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x286A5F0670063839(1, iParam0, &vVar0, 3))
	{
		if (func_18(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x378BD4B3881338C2(vVar0.y);
			if (unk_0x765F6FEEFF39224F(iVar1))
			{
				if (unk_0xF0D230FB550CD6EB(iVar1, 0))
				{
					iVar2 = unk_0xF2C96862595654B4(iVar1, 0);
					if (unk_0x8F6C3DD0BB146CA3(iVar2, vVar0.z) && unk_0xE36862B47CD70685())
					{
						if (func_17(iVar2, &bVar3))
						{
							unk_0xD4A76B5E6C175542(iVar2, vVar0.z);
						}
						if (bVar3)
						{
							unk_0x65F544B458249682(&iVar2);
						}
					}
				}
			}
		}
	}
}

int func_17(int iParam0, var uParam1)
{
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		if (!unk_0x5A04E3BD0B5E7E49(iParam0))
		{
			if (unk_0xFB2062B880AF8075(iParam0))
			{
				if (!unk_0xFFB467183FEE27C4(unk_0x541D5C57194E73C4(iParam0)))
				{
					unk_0x0D21E1FDE062ED99(iParam0, false, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x9E08E12414BD4476(iParam0, 0))
		{
			if (unk_0x0A81FE3D92AE2AC9(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_18(int iParam0, bool bParam1, bool bParam2)
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

void func_19()
{
	wait(0);
}

void func_20()
{
	unk_0x210E46A190FB3CB3(32, 0, -1);
	func_22(0, -1, 0);
	unk_0x7643BB59992A9E6E(&uLocal_35, 21);
	if (!func_21())
	{
		func_3();
	}
	unk_0x9980AE643A60F372(0);
	if (!unk_0x00771EA747B50636("imp_dt1_02_cargarage_a"))
	{
		unk_0x7E3B06742E797067("imp_dt1_02_cargarage_a");
	}
}

int func_21()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0xB331FCEB94EB05C8())
		{
			return 0;
		}
		if (unk_0x4BA2474DB2034FF1())
		{
			return 1;
		}
		if (func_14())
		{
			return 0;
		}
		if (func_12(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		wait(0);
	}
	return 0;
}

int func_22(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x52119E312E15DB07();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_4();
			}
			else
			{
				return 0;
			}
		}
		if (!func_23())
		{
			if (iParam0 == 0)
			{
				if (!unk_0xB331FCEB94EB05C8())
				{
					if (!bParam2)
					{
						func_4();
					}
					else
					{
						return 0;
					}
				}
				if (func_14())
				{
					if (!bParam2)
					{
						func_4();
					}
					else
					{
						return 0;
					}
				}
				if (func_12(155))
				{
					if (!bParam2)
					{
						func_4();
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
					func_4();
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
				func_4();
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
			func_4();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_23()
{
	return Global_1312844;
}

