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
	var uLocal_35 = 0;
	int iLocal_36 = 0;
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
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	vector3 vLocal_58[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	struct<21> Local_59 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	if (unk_0xB331FCEB94EB05C8())
	{
		func_49(ScriptParam_59);
	}
	else
	{
		func_46();
	}
	iLocal_53 = unk_0xE3903F59E2F22150();
	while (true)
	{
		func_45();
		if (((func_34() || unk_0x69E8EDFEA57E361D()) || (func_33(unk_0x95B959F18401C09A()) || func_32(unk_0x95B959F18401C09A()))) || func_29(unk_0x95B959F18401C09A()))
		{
			func_46();
		}
		if (unk_0xB331FCEB94EB05C8())
		{
			func_2();
			func_1();
			iLocal_54++;
			if (iLocal_54 >= unk_0xF839A4FC3E76D324())
			{
				iLocal_54 = 0;
			}
		}
		else
		{
			func_46();
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0x6B7EE7681161BCAB();
	iVar0 = 0;
	while (iVar0 < unk_0xF839A4FC3E76D324())
	{
		if ((iLocal_54 % iVar0) == 0)
		{
			if (unk_0x1B094AC15936B3DB(unk_0xDD4FFAA17341D382(iVar0)))
			{
				iVar2 = unk_0x378BD4B3881338C2(unk_0xEB9DC13235C0B345(unk_0xDD4FFAA17341D382(iVar0)));
				if (!unk_0xD62C4419A41F106A(iVar2, 0))
				{
					if (vLocal_58[iVar0 /*3*/].f_2)
					{
						if (vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 0), unk_0xFBB1F99A825CAB09(iVar2, 1)) <= 22500f)
						{
							if (!iLocal_56)
							{
								unk_0x0483D0035D6E46FD("mini@prostitutes@sexlow_veh");
								unk_0x0483D0035D6E46FD("mini@prostitutes@sexnorm_veh");
								unk_0x0483D0035D6E46FD("mini@prostitutes@sexlow_veh_first_person");
								unk_0x0483D0035D6E46FD("mini@prostitutes@sexnorm_veh_first_person");
								iLocal_56 = 1;
							}
							if (!unk_0x0E4018692D92041D(iLocal_55, iVar0))
							{
								unk_0x8950ED5730F62EE8(&iLocal_55, iVar0);
							}
						}
						else if (unk_0x0E4018692D92041D(iLocal_55, iVar0))
						{
							unk_0xCE689A8E8C42ED78(&iLocal_55, iVar0);
						}
					}
					else if (unk_0x0E4018692D92041D(iLocal_55, iVar0))
					{
						unk_0xCE689A8E8C42ED78(&iLocal_55, iVar0);
					}
				}
				else if (unk_0x0E4018692D92041D(iLocal_55, iVar0))
				{
					unk_0xCE689A8E8C42ED78(&iLocal_55, iVar0);
				}
			}
		}
		iVar0++;
	}
	if ((iLocal_55 == 0 && iLocal_56) && !vLocal_58[iVar1 /*3*/].f_2)
	{
		unk_0xFF2DEA68E2D3602E("mini@prostitutes@sexlow_veh");
		unk_0xFF2DEA68E2D3602E("mini@prostitutes@sexnorm_veh");
		unk_0xFF2DEA68E2D3602E("mini@prostitutes@sexlow_veh_first_person");
		unk_0xFF2DEA68E2D3602E("mini@prostitutes@sexnorm_veh_first_person");
		iLocal_56 = 0;
	}
}

void func_2()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	
	if (unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		return;
	}
	if (iLocal_53 > unk_0xE3903F59E2F22150())
	{
		return;
	}
	iVar0 = 0;
	iVar2 = unk_0x6B7EE7681161BCAB();
	bVar3 = false;
	if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
	{
		if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
		{
			iVar1 = unk_0x33CD235DF1E6A94E();
			if (func_28(&iVar1))
			{
				bVar3 = true;
			}
		}
	}
	switch (iLocal_52)
	{
		case 0:
			if (((func_25(unk_0x95B959F18401C09A(), 1) || func_24()) || !bVar3) || func_17())
			{
				iLocal_52 = 4;
			}
			else
			{
				iVar0 = func_13();
				if (iVar0 != func_12(iVar2) && iVar0 != 0)
				{
					func_11(iVar0);
					iLocal_53 = unk_0xE3903F59E2F22150();
					iLocal_52 = 2;
				}
				else
				{
					iLocal_53 = unk_0xE3903F59E2F22150() + 500;
				}
			}
			break;
		
		case 2:
			if (func_4())
			{
				Global_25918 = 0f;
				unk_0x8F59DE352CFE248B("pb_prostitute");
				iLocal_53 = unk_0xE3903F59E2F22150() + 250;
				vLocal_58[iVar2 /*3*/].f_2 = 0;
				iLocal_52 = 3;
			}
			else
			{
				iLocal_53 = unk_0xE3903F59E2F22150() + 250;
			}
			break;
		
		case 3:
			if ((unk_0x07AB0925A06BD5AD("pb_prostitute") && unk_0x1BCDA92AD0A7835B(joaat("pb_prostitute")) <= 0) && !unk_0x6C7B3B04B7D86C9E("pb_prostitute", unk_0x6B7EE7681161BCAB(), 1, 0))
			{
				iVar4 = func_12(iVar2);
				iLocal_57 = start_new_script_with_args("pb_prostitute", &iVar4, 1, 2050);
				unk_0x841080481716E87C("pb_prostitute");
				iLocal_52 = 0;
			}
			iLocal_53 = unk_0xE3903F59E2F22150();
			break;
		
		case 4:
			if (func_4())
			{
				vLocal_58[iVar2 /*3*/].f_2 = 0;
				iLocal_53 = unk_0xE3903F59E2F22150() + 250;
				iLocal_52 = 5;
			}
			else
			{
				iLocal_53 = unk_0xE3903F59E2F22150() + 500;
			}
			break;
		
		case 5:
			if (((!func_25(unk_0x95B959F18401C09A(), 1) && !func_24()) && bVar3) && !func_3())
			{
				iLocal_53 = unk_0xE3903F59E2F22150() + 250;
				iLocal_52 = 0;
			}
			else
			{
				iLocal_53 = unk_0xE3903F59E2F22150() + 500;
			}
			break;
	}
}

bool func_3()
{
	return Global_1688026;
}

int func_4()
{
	if (unk_0x1BCDA92AD0A7835B(joaat("pb_prostitute")) <= 0 && !unk_0x6C7B3B04B7D86C9E("pb_prostitute", unk_0x6B7EE7681161BCAB(), 1, 0))
	{
		return 1;
	}
	if (iLocal_57 == 0)
	{
		return 1;
	}
	if (unk_0xB331FCEB94EB05C8())
	{
		func_5();
	}
	else
	{
		unk_0x9D2FBE4E4B7BE8D1("pb_prostitute", 1);
	}
	return 0;
}

void func_5()
{
	struct<2> Var0;
	int iVar1;
	
	Var0 = -389015568;
	Var0.f_1 = unk_0x95B959F18401C09A();
	iVar1 = func_6(1, 1);
	if (iVar1 != 0)
	{
		unk_0x09269A9CFC145847(1, &Var0, 2, iVar1);
	}
}

var func_6(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x7C1C88877E8AAA50(iVar1);
		if (func_10(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x95B959F18401C09A() || iParam0)
			{
				if (bParam1)
				{
					unk_0x8950ED5730F62EE8(&uVar0, iVar1);
				}
				else if (!func_7(iVar2, 0))
				{
					unk_0x8950ED5730F62EE8(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_7(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x95B959F18401C09A())
	{
		bVar0 = func_8(-1, 0) == 8;
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

int func_8(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_9();
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

int func_9()
{
	return Global_1312745;
}

int func_10(int iParam0, bool bParam1, bool bParam2)
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

void func_11(int iParam0)
{
	vLocal_58[unk_0x6B7EE7681161BCAB() /*3*/] = iParam0;
}

int func_12(int iParam0)
{
	if (iParam0 == -1)
	{
		return vLocal_58[unk_0x6B7EE7681161BCAB() /*3*/];
	}
	return vLocal_58[iParam0 /*3*/];
}

int func_13()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	float fVar7;
	float fVar8;
	
	iVar0 = func_14();
	iVar1 = unk_0x6B7EE7681161BCAB();
	if (!unk_0x765F6FEEFF39224F(func_12(iVar1)))
	{
		func_11(0);
		return iVar0;
	}
	if (iLocal_57 != 0 && unk_0x8ED4328770BEE4A1(iLocal_57))
	{
		if (vLocal_58[iVar1 /*3*/].f_2)
		{
			return func_12(iVar1);
		}
		if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
		{
			if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
			{
				iVar2 = unk_0x33CD235DF1E6A94E();
				if (func_28(&iVar2))
				{
					iVar3 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
					if (unk_0x765F6FEEFF39224F(iVar3))
					{
						if (func_12(iVar1) == unk_0x7BDC41A7CA0C77A2(iVar3, 0, 0) || unk_0x10930B9CAD4111C2(func_12(iVar1), iVar3, 1))
						{
							vLocal_58[iVar1 /*3*/].f_2 = 1;
							return func_12(iVar1);
						}
					}
					if (iVar0 == 0)
					{
						return func_12(iVar1);
					}
					vVar4 = { unk_0xFBB1F99A825CAB09(func_12(iVar1), 0) };
					vVar5 = { unk_0xFBB1F99A825CAB09(iVar0, 0) };
					vVar6 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 0) };
					fVar7 = vdist(vVar4, vVar6);
					fVar8 = vdist(vVar6, vVar5);
					if (fVar7 > fVar8)
					{
						if ((fVar7 - fVar8) > 25f)
						{
							return iVar0;
						}
						else if (fVar8 < 6f && fVar7 > 11f)
						{
							return iVar0;
						}
						else
						{
							return func_12(iVar1);
						}
					}
					else
					{
						return func_12(iVar1);
					}
				}
			}
		}
	}
	return iVar0;
}

int func_14()
{
	int iVar0;
	var uVar1[8];
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar2 = unk_0xB62DA19846051096(unk_0x33CD235DF1E6A94E(), &uVar1, -1);
	if (iVar2 > 0)
	{
		iVar3 = 0;
		while (iVar3 <= 7)
		{
			if (!unk_0xBC2FC12AD0FBF72E(uVar1[iVar3]))
			{
				if (unk_0x37FBF97457299644(uVar1[iVar3], "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS") || unk_0x37FBF97457299644(uVar1[iVar3], "WORLD_HUMAN_PROSTITUTE_LOW_CLASS"))
				{
					if (func_16(uVar1[iVar3]))
					{
						if (!func_15(uVar1[iVar3]))
						{
							if (!unk_0xD82CBCB7E04DDA8A(uVar1[iVar3]))
							{
								return uVar1[iVar3];
							}
						}
					}
				}
			}
			iVar3++;
		}
	}
	return iVar0;
}

int func_15(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (vLocal_58[iVar0 /*3*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_16(int iParam0)
{
	var uVar0;
	char* sVar1;
	
	sVar1 = unk_0x4527878B077DBA42(iParam0, &uVar0);
	if (!unk_0x786AF4A44E1B5B4B(sVar1))
	{
		if (unk_0xCE3CFF625BEBAA04(sVar1, "GB_VEHICLE_EXPORT"))
		{
			return 0;
		}
		if (unk_0xCE3CFF625BEBAA04(sVar1, "BUSINESS_BATTLES_SELL"))
		{
			return 0;
		}
		if (unk_0xCE3CFF625BEBAA04(sVar1, "BUSINESS_BATTLES"))
		{
			return 0;
		}
		if (unk_0xCE3CFF625BEBAA04(sVar1, "GB_CASINO"))
		{
			return 0;
		}
	}
	return 1;
}

int func_17()
{
	if (func_3())
	{
		return 1;
	}
	if (func_22(unk_0x95B959F18401C09A()) != -1)
	{
		return 1;
	}
	if (func_18(unk_0x95B959F18401C09A()))
	{
		return 1;
	}
	return 0;
}

int func_18(int iParam0)
{
	if (func_19(func_20(iParam0)))
	{
		return 1;
	}
	return 0;
}

int func_19(int iParam0)
{
	switch (iParam0)
	{
		case 243:
			return 1;
		
		default:
	}
	return 0;
}

int func_20(int iParam0)
{
	if (func_21(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_33;
	}
	return -1;
}

int func_21(int iParam0, int iParam1)
{
	if (Global_1626536[iParam0 /*603*/].f_11.f_33 != -1 || (iParam1 && Global_1626536[iParam0 /*603*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_22(int iParam0)
{
	if (func_20(iParam0) == 237 || func_20(iParam0) == 250)
	{
		return func_23(iParam0);
	}
	return -1;
}

int func_23(int iParam0)
{
	if (func_21(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_181;
	}
	return -1;
}

bool func_24()
{
	return unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_39.f_18, 0);
}

int func_25(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_26(iParam0))
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

bool func_26(int iParam0)
{
	return func_27(iParam0);
}

bool func_27(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_13.f_1, 0);
}

int func_28(int iParam0)
{
	if (unk_0xF0D230FB550CD6EB(*iParam0, 0))
	{
		if (unk_0x7BDC41A7CA0C77A2(unk_0x6EE765D5B613AB2A(*iParam0), -1, 0) == *iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_29(int iParam0)
{
	if (iParam0 != func_31())
	{
		if (func_10(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_30(Global_2424047[iParam0 /*416*/].f_309.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_30(int iParam0)
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

int func_31()
{
	return -1;
}

bool func_32(int iParam0)
{
	return Global_2424047[iParam0 /*416*/].f_115 == 7;
}

bool func_33(int iParam0)
{
	return Global_2424047[iParam0 /*416*/].f_115 == 2;
}

int func_34()
{
	var uVar0;
	
	func_42(&uVar0);
	if (Global_1312844 == 0)
	{
		if (!unk_0xB331FCEB94EB05C8())
		{
			return 1;
		}
	}
	if (func_41())
	{
		return 1;
	}
	if (Global_2460852)
	{
		return 1;
	}
	if (func_40())
	{
		return 1;
	}
	if (func_39(157))
	{
		if (!func_38())
		{
			return 1;
		}
	}
	if (func_39(155))
	{
		return 1;
	}
	if (!unk_0x43E505744A9B715D())
	{
		return 1;
	}
	if (func_35() != 0)
	{
		if (unk_0x1BCDA92AD0A7835B(func_35()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_35()
{
	switch (func_37())
	{
		case 0:
			return func_36();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_36()
{
	switch (Global_2460954)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_37()
{
	return Global_25765;
}

bool func_38()
{
	return Global_2448756.f_586;
}

int func_39(int iParam0)
{
	if (unk_0x3AE20F34FEE6C258(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_40()
{
	return Global_2458613;
}

bool func_41()
{
	return Global_2448756.f_581;
}

void func_42(var uParam0)
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
					func_43(iVar0);
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

void func_43(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x286A5F0670063839(1, iParam0, &vVar0, 3))
	{
		if (func_10(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x378BD4B3881338C2(vVar0.y);
			if (unk_0x765F6FEEFF39224F(iVar1))
			{
				if (unk_0xF0D230FB550CD6EB(iVar1, 0))
				{
					iVar2 = unk_0xF2C96862595654B4(iVar1, 0);
					if (unk_0x8F6C3DD0BB146CA3(iVar2, vVar0.z) && unk_0xE36862B47CD70685())
					{
						if (func_44(iVar2, &bVar3))
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

int func_44(int iParam0, var uParam1)
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

void func_45()
{
	wait(0);
}

void func_46()
{
	if (iLocal_56)
	{
		unk_0xFF2DEA68E2D3602E("mini@prostitutes@sexlow_veh");
		unk_0xFF2DEA68E2D3602E("mini@prostitutes@sexnorm_veh");
		unk_0xFF2DEA68E2D3602E("mini@prostitutes@sexlow_veh_first_person");
		unk_0xFF2DEA68E2D3602E("mini@prostitutes@sexnorm_veh_first_person");
	}
	func_48();
	func_4();
	if (unk_0xB331FCEB94EB05C8())
	{
		func_5();
	}
	else
	{
		unk_0x9D2FBE4E4B7BE8D1("pb_prostitute", 1);
	}
	Global_2528542.f_4 = 0;
	func_47();
}

void func_47()
{
	unk_0x5894DC159447E10A();
}

void func_48()
{
	Global_2437364.f_1155.f_10 = 0;
}

void func_49(struct<21> Param0)
{
	func_52(func_53(Param0), Param0);
	func_50(0, -1, 0);
	unk_0x568D314D73140729(&vLocal_58, 97);
	if (unk_0xB331FCEB94EB05C8())
	{
		func_5();
	}
	else
	{
		unk_0x9D2FBE4E4B7BE8D1("pb_prostitute", 1);
	}
	unk_0x9980AE643A60F372(0);
}

int func_50(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x52119E312E15DB07();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_47();
			}
			else
			{
				return 0;
			}
		}
		if (!func_51())
		{
			if (iParam0 == 0)
			{
				if (!unk_0xB331FCEB94EB05C8())
				{
					if (!bParam2)
					{
						func_47();
					}
					else
					{
						return 0;
					}
				}
				if (func_41())
				{
					if (!bParam2)
					{
						func_47();
					}
					else
					{
						return 0;
					}
				}
				if (func_39(155))
				{
					if (!bParam2)
					{
						func_47();
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
					func_47();
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
				func_47();
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
			func_47();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_51()
{
	return Global_1312844;
}

void func_52(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0xB331FCEB94EB05C8())
	{
		func_47();
	}
	unk_0x210E46A190FB3CB3(iParam0, 0, Param1.f_16);
}

int func_53(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 8;
		
		case 91:
			return 32;
		
		case 92:
			return 8;
		
		case 93:
			return 8;
		
		case 101:
			return 8;
		
		case 94:
			return 8;
		
		case 95:
			return 32;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 8;
		
		case 99:
			return 32;
		
		case 100:
			return 32;
		
		case 102:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 8;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 32;
		
		case 114:
			return 8;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 32;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 8;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 125:
			return 32;
		
		case 126:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 137:
			return 32;
		
		case 138:
			return 32;
		
		case 127:
			return 32;
		
		case 128:
			return 32;
		
		case 132:
			return 32;
		
		case 130:
			return 32;
		
		case 131:
			return 32;
		
		case 135:
			return 32;
		
		case 136:
			return 32;
		
		case 133:
			return 32;
		
		case 134:
			return 32;
		
		case 139:
			return 32;
		
		case 140:
			return 32;
		
		case 141:
			return 32;
		
		case 142:
			return 32;
		
		case 143:
			return 2;
		
		case 148:
			return 1;
		
		case 144:
			return 2;
		
		case 145:
			return 4;
		
		case 146:
			return 2;
		
		case 147:
			return 2;
		
		case 129:
			return 1;
		
		case 149:
			return 2;
		
		case 150:
		case 151:
		case 152:
		case 153:
		case 154:
		case 155:
			return 0;
		
		case 163:
			return 1;
		
		case 156:
			return 4;
		
		case 159:
			return 4;
		
		case 160:
			return 1;
		
		case 161:
			return 8;
		
		case 162:
			return 8;
		
		case 157:
			return 16;
		
		case 158:
			return 32;
		
		default:
	}
	return 0;
}

