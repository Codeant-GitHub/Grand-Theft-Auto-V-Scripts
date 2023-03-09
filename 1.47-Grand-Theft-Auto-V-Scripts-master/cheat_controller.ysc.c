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
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	float fLocal_78 = 0f;
	int iLocal_79 = 0;
	int iLocal_80[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_46 = 1;
	iLocal_47 = 1;
	iLocal_48 = 1;
	iLocal_49 = 1;
	iLocal_50 = 1;
	iLocal_51 = 1;
	iLocal_52 = 1;
	iLocal_53 = 1;
	iLocal_54 = 1;
	iLocal_55 = 1;
	iLocal_56 = 1;
	iLocal_57 = 1;
	iLocal_58 = 1;
	iLocal_59 = 1;
	iLocal_60 = 1;
	iLocal_61 = 1;
	iLocal_62 = 1;
	iLocal_63 = 1;
	iLocal_64 = 1;
	iLocal_65 = 1;
	iLocal_66 = 1;
	iLocal_67 = joaat("bmx");
	iLocal_73 = 300000;
	fLocal_78 = 1f;
	if (unk_0x9EC5BDC006623C42(34))
	{
		func_112();
	}
	Global_26011 = 0;
	Global_26010 = 0;
	Global_26012 = 0;
	Global_26013 = 0;
	Global_26015 = 0;
	Global_26014 = 0;
	func_111();
	while (true)
	{
		func_2();
		if (((unk_0xB331FCEB94EB05C8() && func_1(unk_0x95B959F18401C09A(), 1, 1)) && !Global_1574191) && Global_25765 == 0)
		{
			func_112();
		}
		wait(0);
	}
}

int func_1(int iParam0, bool bParam1, bool bParam2)
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

void func_2()
{
	func_87();
	func_67();
	func_21();
	func_3(iLocal_67);
}

void func_3(int iParam0)
{
	switch (iLocal_46)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			if (unk_0x056AEC27A8BE13C6())
			{
				func_20("CHEAT_VEHICLE_SPAWN_DENIED");
				iLocal_46 = 1;
			}
			else
			{
				func_19(iParam0);
			}
			break;
		
		case 4:
			func_4(iParam0);
			break;
		
		default:
			break;
	}
}

void func_4(int iParam0)
{
	vector3 vVar0;
	float fVar1;
	bool bVar2;
	
	bVar2 = false;
	if (unk_0x5D98D654CDC2165A(iParam0))
	{
		if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
		{
			if (unk_0x765F6FEEFF39224F(iLocal_68))
			{
				if (!unk_0xD62C4419A41F106A(iLocal_68, 0))
				{
					if (unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iLocal_68, 0))
					{
						vVar0 = { unk_0xFBB1F99A825CAB09(iLocal_68, true) };
						fVar1 = unk_0xC472E34C8FBEC678(iLocal_68);
						unk_0xBEADAF07D2339505(unk_0x33CD235DF1E6A94E(), vVar0.x, vVar0.y, (vVar0.z + 4f), 1, 0, 0, 1);
						bVar2 = true;
					}
				}
				unk_0x7AC8DF0B83EB4C6B(&iLocal_68);
			}
			if (!bVar2)
			{
				if (iParam0 == joaat("duster") || iParam0 == joaat("stunt"))
				{
					vVar0 = { unk_0x2CA911E7569D12EA(unk_0x33CD235DF1E6A94E(), -1.5f, 3.5f, 1f) };
				}
				else if (iParam0 == joaat("buzzard"))
				{
					vVar0 = { unk_0x2CA911E7569D12EA(unk_0x33CD235DF1E6A94E(), 0f, 6f, 2f) };
				}
				else
				{
					vVar0 = { unk_0x2CA911E7569D12EA(unk_0x33CD235DF1E6A94E(), 0f, 3.5f, 1f) };
				}
				fVar1 = (unk_0xC472E34C8FBEC678(unk_0x33CD235DF1E6A94E()) + 90f);
			}
			if (func_17(iParam0, vVar0, fVar1))
			{
				iLocal_68 = unk_0xC651C43AB13A15E5(iParam0, vVar0, fVar1, 0, 1, 0);
				unk_0x1B2303F9DC2D90D5(iLocal_68, 1084227584);
				unk_0x71CA80D41E1338B4(iParam0);
				unk_0x65F544B458249682(&iLocal_68);
				func_15(iLocal_70);
				func_5(20);
			}
			else
			{
				unk_0x71CA80D41E1338B4(iParam0);
				func_20("CHEAT_VEHICLE_SPAWN_DENIED");
			}
			iLocal_46 = 1;
		}
	}
}

void func_5(int iParam0)
{
	if (!func_14(14) && !func_13(""))
	{
		unk_0x8950ED5730F62EE8(&Global_26012, iParam0);
		Global_26015 = 1;
		func_6();
	}
}

void func_6()
{
	int iVar0;
	
	iVar0 = func_8();
	switch (iVar0)
	{
		case 0:
			func_7(joaat("sp0_times_cheated"), 1);
			break;
		
		case 1:
			func_7(joaat("sp1_times_cheated"), 1);
			break;
		
		case 2:
			func_7(joaat("sp2_times_cheated"), 1);
			break;
	}
}

void func_7(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x75D54ED6C1AD1642(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x12B6E23F244DDB0F(iParam0, iVar0, 1);
}

int func_8()
{
	func_9();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_9()
{
	int iVar0;
	
	if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
	{
		if (func_12(Global_106565.f_2357.f_539.f_4321) != unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()))
		{
			iVar0 = func_11(unk_0x33CD235DF1E6A94E());
			if (func_10(iVar0) && (!func_14(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_10(Global_106565.f_2357.f_539.f_4321))
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

bool func_10(int iParam0)
{
	return iParam0 < 3;
}

int func_11(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		iVar1 = unk_0x541D5C57194E73C4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_12(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_12(int iParam0)
{
	if (func_10(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_13(char* sParam0)
{
	if (iLocal_84 != 0)
	{
		if (func_14(14) && unk_0x73DA1542B2F0C458())
		{
			if (unk_0xCE3CFF625BEBAA04(sParam0, "CHEAT_SUPER_JUMP") && unk_0x056AEC27A8BE13C6())
			{
				return 0;
			}
			if ((unk_0xCE3CFF625BEBAA04(sParam0, "CHEAT_GRAVITY_MOON") && !unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0)) && unk_0x8AE34E8B10270D31(unk_0x33CD235DF1E6A94E()))
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

bool func_14(int iParam0)
{
	return Global_36425 == iParam0;
}

void func_15(int iParam0)
{
	if (func_13(""))
	{
	}
	else
	{
		unk_0x1F85AD4B26B92795("CHEAT_ACTIVATED");
		unk_0xFA6BEE2B1507FF1E(iParam0);
		func_16(unk_0x9457C7E9A5E2BC86(0, 1));
		unk_0xB8155D6650F8C5A1(iParam0);
	}
}

void func_16(int iParam0)
{
	iLocal_80[iLocal_81] = iParam0;
	iLocal_81++;
	if (iLocal_81 >= 10)
	{
		iLocal_81 = 0;
	}
}

int func_17(int iParam0, vector3 vParam1, float fParam2)
{
	vector3 vVar0[9];
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	var uVar14;
	
	unk_0xFEF5F9BB57EA2E8D(iParam0, &vVar1, &vVar2);
	vVar3.x = (unk_0x7EECA16E87982278((vVar2.x - vVar1.x)) / 2f);
	vVar3.y = (unk_0x7EECA16E87982278((vVar2.y - vVar1.y)) / 2f);
	vVar3.z = (unk_0x7EECA16E87982278((vVar2.z - vVar1.z)) / 2f);
	vVar0[0 /*3*/] = { vParam1 };
	vVar0[1 /*3*/] = { unk_0xCD1EDCB38767B47C(vParam1, fParam2, -vVar3.x, -vVar3.y, -vVar3.z) };
	vVar0[2 /*3*/] = { unk_0xCD1EDCB38767B47C(vParam1, fParam2, vVar3.x, -vVar3.y, -vVar3.z) };
	vVar0[3 /*3*/] = { unk_0xCD1EDCB38767B47C(vParam1, fParam2, vVar3.x, vVar3.y, -vVar3.z) };
	vVar0[4 /*3*/] = { unk_0xCD1EDCB38767B47C(vParam1, fParam2, -vVar3.x, vVar3.y, -vVar3.z) };
	vVar0[5 /*3*/] = { unk_0xCD1EDCB38767B47C(vParam1, fParam2, -vVar3.x, -vVar3.y, vVar3.z) };
	vVar0[6 /*3*/] = { unk_0xCD1EDCB38767B47C(vParam1, fParam2, vVar3.x, -vVar3.y, vVar3.z) };
	vVar0[7 /*3*/] = { unk_0xCD1EDCB38767B47C(vParam1, fParam2, vVar3.x, vVar3.y, vVar3.z) };
	vVar0[8 /*3*/] = { unk_0xCD1EDCB38767B47C(vParam1, fParam2, -vVar3.x, vVar3.y, vVar3.z) };
	if (!unk_0xA4EE7D490EB4E0C9(vParam1))
	{
		return 0;
	}
	iVar13 = unk_0xB48050F6C65C8232(func_18(unk_0x95B959F18401C09A()) + Vector(1f, 0f, 0f), vParam1, 87, unk_0x33CD235DF1E6A94E(), 0);
	unk_0x819B6E76423AE494(iVar13, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar7 = unk_0xB48050F6C65C8232(vVar0[1 /*3*/], vVar0[3 /*3*/], 87, unk_0x33CD235DF1E6A94E(), 0);
	unk_0x819B6E76423AE494(iVar7, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar8 = unk_0xB48050F6C65C8232(vVar0[2 /*3*/], vVar0[4 /*3*/], 87, unk_0x33CD235DF1E6A94E(), 0);
	unk_0x819B6E76423AE494(iVar8, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar9 = unk_0xB48050F6C65C8232(vVar0[5 /*3*/], vVar0[7 /*3*/], 87, unk_0x33CD235DF1E6A94E(), 0);
	unk_0x819B6E76423AE494(iVar9, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar10 = unk_0xB48050F6C65C8232(vVar0[6 /*3*/], vVar0[8 /*3*/], 87, unk_0x33CD235DF1E6A94E(), 0);
	unk_0x819B6E76423AE494(iVar10, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar11 = unk_0xB48050F6C65C8232(vVar0[1 /*3*/], vVar0[8 /*3*/], 87, unk_0x33CD235DF1E6A94E(), 0);
	unk_0x819B6E76423AE494(iVar11, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar12 = unk_0xB48050F6C65C8232(vVar0[2 /*3*/], vVar0[7 /*3*/], 87, unk_0x33CD235DF1E6A94E(), 0);
	unk_0x819B6E76423AE494(iVar12, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	return 1;
}

Vector3 func_18(int iParam0)
{
	return unk_0xFBB1F99A825CAB09(unk_0x378BD4B3881338C2(iParam0), false);
}

void func_19(int iParam0)
{
	if (unk_0xF237530C2DEF2576(iParam0))
	{
		unk_0xB815670C37E03CDE(iParam0);
		if (unk_0x5D98D654CDC2165A(iParam0))
		{
			iLocal_46 = 4;
		}
	}
}

void func_20(int iParam0)
{
	if (!func_14(14))
	{
		unk_0x1F85AD4B26B92795("CHEAT_DENIED");
		unk_0xFA6BEE2B1507FF1E(iParam0);
		func_16(unk_0x9457C7E9A5E2BC86(0, 1));
	}
}

void func_21()
{
	func_64();
	func_63();
	func_44();
	func_43();
	func_42();
	func_38();
	func_35();
	func_31();
	func_22();
}

void func_22()
{
	switch (iLocal_66)
	{
		case 1:
			break;
		
		case 4:
			func_30(19, 1);
			func_29();
			break;
		
		case 5:
			if ((((!unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()) || func_27()) || func_26(23)) || func_26(21)) || func_26(19))
			{
				iLocal_66 = 9;
				return;
			}
			func_24();
			break;
		
		case 9:
			func_23("CHEAT_AIM_SLOW_MO");
			func_30(19, 0);
			unk_0xCBDC8BC7A589C76E(1f);
			iLocal_77 = 0;
			iLocal_66 = 1;
			break;
		
		default:
			break;
	}
}

void func_23(char* sParam0)
{
	if (func_13(sParam0))
	{
	}
	else
	{
		unk_0x1F85AD4B26B92795("CHEAT_DEACTIVATED");
		unk_0xFA6BEE2B1507FF1E(sParam0);
		func_16(unk_0x9457C7E9A5E2BC86(0, 1));
	}
}

void func_24()
{
	if (unk_0xA1248DEAD0B27B8E(unk_0x33CD235DF1E6A94E()))
	{
		if (unk_0xF1CDE9FD207C4CD8(2, 25))
		{
			if (func_25(unk_0x33CD235DF1E6A94E()) != joaat("weapon_unarmed") && func_25(unk_0x33CD235DF1E6A94E()) != joaat("object"))
			{
				unk_0xCBDC8BC7A589C76E(fLocal_78);
			}
			else
			{
				unk_0xCBDC8BC7A589C76E(1f);
			}
		}
		else
		{
			unk_0xCBDC8BC7A589C76E(1f);
		}
	}
}

int func_25(int iParam0)
{
	var uVar0;
	
	unk_0x96C4B46F194803A7(iParam0, &uVar0, 1);
	return uVar0;
}

int func_26(int iParam0)
{
	if (unk_0x0E4018692D92041D(Global_26010, iParam0))
	{
		return 1;
	}
	return 0;
}

int func_27()
{
	if (((((((func_14(0) || func_14(11)) || func_14(4)) || func_14(9)) || func_14(10)) || func_14(3)) || func_14(2)) || func_28(35))
	{
		return 1;
	}
	return 0;
}

int func_28(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_106565.f_9079.f_99.f_58[iParam0];
}

void func_29()
{
	iLocal_77++;
	if (iLocal_77 > 3)
	{
		iLocal_77 = 0;
		iLocal_66 = 9;
		return;
	}
	switch (iLocal_77)
	{
		case 1:
			func_15("CHEAT_AIM_SLOW_MO1");
			fLocal_78 = 0.6f;
			break;
		
		case 2:
			func_15("CHEAT_AIM_SLOW_MO2");
			fLocal_78 = 0.4f;
			break;
		
		case 3:
			func_15("CHEAT_AIM_SLOW_MO3");
			fLocal_78 = 0.2f;
			break;
		
		default:
			break;
	}
	iLocal_66 = 5;
}

void func_30(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x8950ED5730F62EE8(&Global_26011, iParam0);
		func_5(iParam0);
	}
	else
	{
		unk_0xCE689A8E8C42ED78(&Global_26011, iParam0);
	}
}

void func_31()
{
	switch (iLocal_63)
	{
		case 1:
			break;
		
		case 4:
			func_30(16, 1);
			func_34();
			break;
		
		case 5:
			unk_0x3FD9339AA95E323F(2, 37, 1);
			unk_0x3FD9339AA95E323F(2, 19, 1);
			if ((((((((!unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()) || func_27()) || func_33()) || func_32(1)) || unk_0x5EBE50D55314CEAD(2, 37)) || unk_0x5EBE50D55314CEAD(2, 19)) || func_26(23)) || func_26(21)) || func_26(16))
			{
				iLocal_63 = 9;
			}
			break;
		
		case 9:
			unk_0x3FD9339AA95E323F(2, 37, 1);
			unk_0x3FD9339AA95E323F(2, 19, 1);
			func_23("CHEAT_SLOW_MO");
			func_30(16, 0);
			iLocal_76 = 0;
			unk_0xCBDC8BC7A589C76E(1f);
			iLocal_63 = 1;
			break;
		
		default:
			break;
	}
}

bool func_32(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17272.f_4 && Global_17272.f_104 == 4);
	}
	return Global_17272.f_4;
}

int func_33()
{
	if (!unk_0xB331FCEB94EB05C8())
	{
		return Global_91190.f_44 == 1;
	}
	return 0;
}

void func_34()
{
	iLocal_76++;
	if (iLocal_76 > 3)
	{
		iLocal_63 = 9;
		return;
	}
	switch (iLocal_76)
	{
		case 1:
			func_15("CHEAT_SLOW_MO1");
			unk_0xCBDC8BC7A589C76E(0.6f);
			break;
		
		case 2:
			func_15("CHEAT_SLOW_MO2");
			unk_0xCBDC8BC7A589C76E(0.4f);
			break;
		
		case 3:
			func_15("CHEAT_SLOW_MO3");
			unk_0xCBDC8BC7A589C76E(0.2f);
			break;
		
		default:
			break;
	}
	iLocal_63 = 5;
}

void func_35()
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	
	switch (iLocal_64)
	{
		case 1:
			break;
		
		case 2:
			func_30(17, 1);
			unk_0xF70578F5CD9822CB(unk_0x33CD235DF1E6A94E(), true);
			unk_0xF23201C524E43F1C(unk_0x95B959F18401C09A(), 1);
			unk_0x4D5F3407F1F37E28(unk_0x33CD235DF1E6A94E(), true, true, true, true, true, 0, 0, 0);
			unk_0x697EBA5CF1A6AB57(unk_0x33CD235DF1E6A94E(), joaat("gadget_parachute"), 1, false, true);
			vVar0 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true) };
			fVar1 = unk_0xC472E34C8FBEC678(unk_0x33CD235DF1E6A94E());
			unk_0x8C1596BAD35D957A(vVar0, &fVar2, 0, 0);
			fVar2 = (fVar2 + 500f);
			unk_0xBEADAF07D2339505(unk_0x33CD235DF1E6A94E(), vVar0.x, vVar0.y, fVar2, 1, 0, 0, 1);
			unk_0x3C990C409B3845DE(unk_0x33CD235DF1E6A94E(), fVar1);
			iLocal_72 = unk_0xE3903F59E2F22150();
			unk_0x7EDEAEAED85BEE4F(0);
			iLocal_64 = 3;
			break;
		
		case 3:
			if (func_37(1000, iLocal_72))
			{
				unk_0xF70578F5CD9822CB(unk_0x33CD235DF1E6A94E(), false);
				unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), true, 0);
				iLocal_72 = unk_0xE3903F59E2F22150();
				iLocal_64 = 4;
			}
			break;
		
		case 4:
			if (func_37(1000, iLocal_72))
			{
				unk_0x3FD9339AA95E323F(0, 144, 1);
				unk_0x3FD9339AA95E323F(0, 149, 1);
				if (func_8() == 0)
				{
					unk_0x93AA93DA1B137032(unk_0x33CD235DF1E6A94E(), 9, 0, 0, 0);
				}
				else
				{
					unk_0x93AA93DA1B137032(unk_0x33CD235DF1E6A94E(), 8, 0, 0, 0);
				}
				unk_0xACCDA78123DB57B0(250);
				iLocal_72 = unk_0xE3903F59E2F22150();
				func_15("CHEAT_SKYFALL");
				unk_0x29074975F22A27B9(2);
				iLocal_64 = 5;
			}
			break;
		
		case 5:
			if ((((!unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()) || func_27()) || func_26(23)) || func_26(21)) || func_26(17))
			{
				iLocal_64 = 9;
				break;
			}
			unk_0x3FD9339AA95E323F(0, 144, 1);
			unk_0x581AE7724ACAD410(2);
			if (unk_0xD084701173607F29(unk_0x33CD235DF1E6A94E()))
			{
				unk_0x0848C95091F9ECB9(unk_0x33CD235DF1E6A94E(), 1, 0f, 200f, 2.5f, 0f, 0f, 0f, 0, 1, 0, 0, 0, 1);
				if (unk_0x0D386FBDF1E8CD84(unk_0x33CD235DF1E6A94E()))
				{
					iLocal_64 = 9;
				}
			}
			else
			{
				iLocal_64 = 9;
			}
			break;
		
		case 9:
			func_36();
			func_23("CHEAT_SKYFALL");
			func_30(17, 0);
			iLocal_64 = 1;
			break;
		
		default:
			break;
	}
}

void func_36()
{
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		unk_0x681FB12989BD5DEA(unk_0x33CD235DF1E6A94E(), joaat("gadget_parachute"));
	}
	if (iLocal_62 != 5)
	{
		unk_0xF23201C524E43F1C(unk_0x95B959F18401C09A(), 0);
		unk_0x4D5F3407F1F37E28(unk_0x33CD235DF1E6A94E(), false, false, false, false, false, 0, 0, 0);
	}
	unk_0x29074975F22A27B9(0);
}

int func_37(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0xE3903F59E2F22150();
	iVar1 = (iVar0 - iParam0);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_38()
{
	vector3 vVar0;
	
	switch (iLocal_62)
	{
		case 1:
			break;
		
		case 4:
			func_15("CHEAT_INVINCIBILITY");
			func_30(15, 1);
			iLocal_62 = 5;
			iLocal_74 = unk_0xE3903F59E2F22150();
			unk_0xF23201C524E43F1C(unk_0x95B959F18401C09A(), 1);
			unk_0x4D5F3407F1F37E28(unk_0x33CD235DF1E6A94E(), true, true, true, true, true, 0, 0, 0);
			break;
		
		case 5:
			if (!unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()) || unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
			{
				iLocal_62 = 9;
				return;
			}
			vVar0 = { func_18(unk_0x95B959F18401C09A()) };
			if (((((func_27() || func_33()) || func_26(23)) || func_26(21)) || func_26(15)) || vVar0.z <= -170f)
			{
				iLocal_62 = 9;
				return;
			}
			iLocal_75 = (unk_0xE3903F59E2F22150() - iLocal_74);
			if (unk_0x1BCDA92AD0A7835B(joaat("appinternet")) == 0)
			{
				func_39((iLocal_73 - iLocal_75), "CHEAT_INV", 0, 0, 1000, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			if (iLocal_75 >= (iLocal_73 - 1000))
			{
				iLocal_62 = 9;
				return;
			}
			unk_0xF23201C524E43F1C(unk_0x95B959F18401C09A(), 1);
			unk_0x4D5F3407F1F37E28(unk_0x33CD235DF1E6A94E(), true, true, true, true, true, 0, 0, 0);
			unk_0x779E97A945CAA2A1();
			break;
		
		case 9:
			func_23("CHEAT_INVINCIBILITY_OFF");
			func_30(15, 0);
			iLocal_62 = 1;
			if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
			{
				unk_0xF23201C524E43F1C(unk_0x95B959F18401C09A(), 0);
				unk_0x4D5F3407F1F37E28(unk_0x33CD235DF1E6A94E(), false, false, false, false, false, 0, 0, 0);
			}
			break;
		
		default:
			break;
	}
}

void func_39(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_41(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1373453.f_1 = 1;
		func_40(7, iVar0);
		Global_1373453.f_4453[iVar0] = iParam0;
		StringCopy(&(Global_1373453.f_4453.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1373453.f_4453.f_172[iVar0] = iParam2;
		Global_1373453.f_4453.f_216[iVar0] = iParam3;
		Global_1373453.f_4453.f_183[iVar0] = iParam4;
		Global_1373453.f_4453.f_194[iVar0] = iParam5;
		Global_1373453.f_4453.f_249[iVar0] = iParam6;
		Global_1373453.f_4453.f_260[iVar0] = iParam7;
		Global_1373453.f_4453.f_205[iVar0] = iParam8;
		Global_1373453.f_4453.f_314[iVar0] = iParam9;
		Global_1373453.f_4453.f_325[iVar0] = iParam10;
		Global_1373453.f_4453.f_357[iVar0] = iParam11;
		Global_1373453.f_4453.f_238[iVar0] = iParam12;
		Global_1373453.f_4453.f_271[iVar0] = iParam13;
		Global_1373453.f_4453.f_368[iVar0] = iParam14;
		Global_1373453.f_4453.f_379[iVar0] = iParam15;
		Global_1373453.f_4453.f_390[iVar0] = iParam16;
		Global_1373453.f_4453.f_227[iVar0] = iParam17;
	}
}

void func_40(int iParam0, int iParam1)
{
	unk_0x8950ED5730F62EE8(&(Global_1373453.f_6184[iParam0]), iParam1);
}

bool func_41(int iParam0, int iParam1)
{
	return unk_0x0E4018692D92041D(Global_1373453.f_6184[iParam0], iParam1);
}

void func_42()
{
	switch (iLocal_59)
	{
		case 1:
			break;
		
		case 4:
			func_15("CHEAT_FLAMING_BULLETS");
			func_30(12, 1);
			iLocal_59 = 5;
			break;
		
		case 5:
			if (((!unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()) || func_26(23)) || func_26(21)) || func_26(12))
			{
				iLocal_59 = 9;
				return;
			}
			if (func_27())
			{
				iLocal_59 = 9;
				return;
			}
			unk_0xE9EB6152EBFE0653(unk_0x95B959F18401C09A());
			break;
		
		case 9:
			func_23("CHEAT_FLAMING_BULLETS");
			func_30(12, 0);
			iLocal_59 = 1;
			break;
		
		default:
			break;
	}
}

void func_43()
{
	switch (iLocal_60)
	{
		case 1:
			break;
		
		case 4:
			func_15("CHEAT_EXPLOSIVE_MELEE");
			func_30(13, 1);
			iLocal_60 = 5;
			break;
		
		case 5:
			if ((((!unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()) || func_26(23)) || func_26(21)) || func_26(13)) || func_27())
			{
				iLocal_60 = 9;
				return;
			}
			unk_0x24DFE49CD039D018(unk_0x95B959F18401C09A());
			break;
		
		case 9:
			func_23("CHEAT_EXPLOSIVE_MELEE");
			func_30(13, 0);
			iLocal_60 = 1;
			break;
		
		default:
			break;
	}
}

void func_44()
{
	switch (iLocal_65)
	{
		case 1:
			break;
		
		case 4:
			func_15("CHEAT_DRUNK");
			func_30(18, 1);
			func_59(unk_0x33CD235DF1E6A94E());
			func_57(30000, 1050253722, 1065353216, 0);
			iLocal_65 = 5;
			break;
		
		case 5:
			if ((((func_27() || !unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A())) || func_26(23)) || func_26(21)) || func_26(18))
			{
				iLocal_65 = 9;
			}
			break;
		
		case 9:
			func_23("CHEAT_DRUNK");
			func_30(18, 0);
			func_48(unk_0x33CD235DF1E6A94E());
			func_47(1000);
			iLocal_65 = 1;
			break;
		
		case 10:
			func_45(1);
			func_30(18, 0);
			iLocal_65 = 1;
			break;
		
		default:
			break;
	}
}

void func_45(bool bParam0)
{
	unk_0x03B5E90BFD644101(0f);
	unk_0x91E6B282F48E0CBB(0f);
	unk_0x206C946C7AA76CE3(0f);
	unk_0x493014A3701A3C65(1);
	unk_0x532F42EF70E629D3(0f);
	unk_0xB1E5BF6A447FD19C(1);
	unk_0xDBA9E7389F779B73(0);
	if (unk_0x7C71681384076318("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0x7CED302277C0F3D3("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0x786AF4A44E1B5B4B(&Global_37562))
	{
		if (unk_0x7C71681384076318(&Global_37562))
		{
			unk_0x7CED302277C0F3D3(&Global_37562);
		}
	}
	if (unk_0x117DAF3BF7232886(Global_37551))
	{
		if (unk_0x4D8A5EFBD6ACB8D4(Global_37551))
		{
			unk_0x9BDA1567F3312F06(Global_37551, 0f);
			unk_0x85961BF1C6552672(Global_37551, 1);
		}
	}
	if (unk_0xFB9E5CA1DFC10C99())
	{
		unk_0xA327C625224B4751(0);
	}
	if (bParam0)
	{
		if (unk_0x11DFDC1A614E78C2() != -1 || unk_0x5E20A87157588563() != -1)
		{
			unk_0x3DE34B8864800B14();
		}
		else if (unk_0x71EC91BA8C88BCE0())
		{
			unk_0x3DE34B8864800B14();
		}
	}
	Global_37557 = 0f;
	StringCopy(&Global_37558, "", 16);
	StringCopy(&Global_37562, "", 64);
	StringCopy(&Global_37578, "", 16);
	func_46();
}

void func_46()
{
	Global_37550 = 0;
	Global_37551 = 0;
	Global_37552 = 0;
	Global_37553 = 30000;
	Global_37554 = 0f;
	Global_37556 = 0f;
	Global_37555 = 0f;
	Global_37557 = 0f;
	StringCopy(&Global_37558, "", 16);
}

void func_47(int iParam0)
{
	int iVar0;
	
	if (!Global_37550)
	{
		return;
	}
	iVar0 = unk_0xE3903F59E2F22150();
	Global_37552 = (iVar0 + iParam0);
	Global_37553 = iParam0;
}

void func_48(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0x765F6FEEFF39224F(iParam0))
	{
		return;
	}
	iVar0 = func_56(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_37371[iVar0 /*5*/];
		func_51(1, iVar1, 1);
		return;
	}
	iVar2 = func_50(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_49(iVar2);
}

void func_49(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_37345[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_37345[iParam0 /*5*/].f_1 == unk_0x33CD235DF1E6A94E())
		{
			Global_37582 = 0;
		}
	}
	Global_37345[iParam0 /*5*/] = 13;
	Global_37345[iParam0 /*5*/].f_1 = 0;
	Global_37345[iParam0 /*5*/].f_2 = 0;
	Global_37345[iParam0 /*5*/].f_3 = 0;
	Global_37345[iParam0 /*5*/].f_4 = 0;
	Global_37343 = (Global_37343 - 1);
	if (Global_37343 < 0)
	{
		Global_37343 = 0;
	}
}

int func_50(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_37345[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_51(int iParam0, int iParam1, int iParam2)
{
	func_52(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_52(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_54(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_53();
	if (iVar0 == -1)
	{
		return;
	}
	Global_37452[iVar0 /*6*/] = iParam0;
	Global_37452[iVar0 /*6*/].f_1 = iParam1;
	Global_37452[iVar0 /*6*/].f_2 = iParam2;
	Global_37452[iVar0 /*6*/].f_3 = iParam3;
	Global_37452[iVar0 /*6*/].f_4 = iParam4;
	Global_37452[iVar0 /*6*/].f_5 = iParam5;
}

int func_53()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_37452[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_54(int iParam0, int iParam1, int iParam2)
{
	if (func_55(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_55(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_37452[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_37452[iVar0 /*6*/])
			{
				if (iParam1 == Global_37452[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_56(int iParam0)
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
		if (!Global_37371[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_37371[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_57(int iParam0, float fParam1, float fParam2, int iParam3)
{
	func_58(-1, iParam0, fParam1, fParam2, iParam3, 1);
}

void func_58(int iParam0, var uParam1, float fParam2, float fParam3, int iParam4, bool bParam5)
{
	int iVar0;
	
	if (Global_3)
	{
		return;
	}
	if (Global_37550)
	{
		return;
	}
	if (!bParam5)
	{
		if (iParam0 < 0)
		{
			return;
		}
	}
	if (fParam2 < 0f || fParam2 > 5f)
	{
		return;
	}
	if (!unk_0x3DAED611AA1401D5())
	{
		unk_0x3597107E70B7871E("DRUNK_SHAKE", fParam3);
	}
	if (!unk_0x49AA03BD6DE82655())
	{
		unk_0x56237BAF00A8A544("DRUNK_SHAKE", (fParam3 * Global_37549));
	}
	if (unk_0x117DAF3BF7232886(iParam4))
	{
		unk_0x083F68B89E3EA476(iParam4, "DRUNK_SHAKE", fParam3);
		Global_37551 = iParam4;
	}
	else
	{
		Global_37551 = 0;
	}
	Global_37550 = 1;
	iVar0 = unk_0xE3903F59E2F22150();
	Global_37552 = (iVar0 + iParam0);
	if (bParam5)
	{
		if (iParam0 == -1)
		{
			Global_37552 = -1;
		}
	}
	Global_37553 = uParam1;
	Global_37554 = fParam2;
	Global_37556 = fParam3;
	Global_37555 = fParam3;
}

int func_59(int iParam0)
{
	return func_60(iParam0, -1, 1);
}

int func_60(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x765F6FEEFF39224F(iParam0))
	{
		return 0;
	}
	iVar0 = func_62(iParam0);
	if (!iVar0 == -1)
	{
		return 1;
	}
	iVar1 = func_50(iParam0);
	if (!iVar1 == -1)
	{
		return 1;
	}
	if (!bParam2)
	{
		if (iParam1 == 0 || iParam1 < 0)
		{
			return 0;
		}
	}
	iVar2 = func_61();
	if (iVar2 == -1)
	{
		return 0;
	}
	Global_37345[iVar2 /*5*/] = 0;
	Global_37345[iVar2 /*5*/].f_1 = iParam0;
	Global_37345[iVar2 /*5*/].f_2 = iParam1;
	Global_37345[iVar2 /*5*/].f_3 = iParam1;
	Global_37345[iVar2 /*5*/].f_4 = 0;
	if (iParam0 == unk_0x33CD235DF1E6A94E())
	{
		Global_37582 = 1;
	}
	Global_37343++;
	return 1;
}

int func_61()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_37345[iVar0 /*5*/] == 13)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_62(int iParam0)
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
		if (iParam0 == Global_37371[iVar0 /*5*/].f_1)
		{
			return Global_37371[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

void func_63()
{
	switch (iLocal_58)
	{
		case 1:
			break;
		
		case 4:
			func_15("CHEAT_BANG_BANG");
			func_30(11, 1);
			iLocal_58 = 5;
			break;
		
		case 5:
			if (((!unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()) || func_26(23)) || func_26(21)) || func_26(11))
			{
				iLocal_58 = 9;
				return;
			}
			if (func_27())
			{
				iLocal_58 = 9;
				return;
			}
			unk_0xA099FB03FE5A9F6D(unk_0x95B959F18401C09A());
			break;
		
		case 9:
			func_23("CHEAT_BANG_BANG");
			func_30(11, 0);
			iLocal_58 = 1;
			break;
		
		default:
			break;
	}
}

void func_64()
{
	switch (iLocal_61)
	{
		case 1:
			break;
		
		case 4:
			func_5(14);
			func_30(14, 1);
			func_66();
			break;
		
		case 5:
			if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
			{
				if ((((((!unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()) || func_27()) || func_26(23)) || func_26(21)) || func_26(14)) || func_65(17)) || unk_0x8AE34E8B10270D31(unk_0x33CD235DF1E6A94E()))
				{
					iLocal_61 = 9;
				}
			}
			else
			{
				iLocal_61 = 9;
			}
			break;
		
		case 9:
			func_23("CHEAT_GRAVITY_MOON");
			func_30(14, 0);
			unk_0x5C2EC74E2089E64D(0);
			iLocal_79 = 0;
			iLocal_61 = 1;
			break;
		
		default:
			break;
	}
}

int func_65(int iParam0)
{
	if (unk_0x0E4018692D92041D(Global_26011, iParam0))
	{
		return 1;
	}
	return 0;
}

void func_66()
{
	iLocal_79++;
	if (iLocal_79 > 1)
	{
		iLocal_61 = 9;
		return;
	}
	switch (iLocal_79)
	{
		case 1:
			func_15("CHEAT_GRAVITY_MOON");
			unk_0x5C2EC74E2089E64D(1);
			break;
		
		default:
			break;
	}
	iLocal_61 = 5;
}

void func_67()
{
	func_86();
	func_80();
	func_79();
	func_78();
	func_77();
	func_76();
	func_75();
	func_73();
	func_72();
	func_71();
	func_68();
}

void func_68()
{
	if (iLocal_57 == 4)
	{
		iLocal_57 = 1;
		if ((func_26(23) || func_26(22)) || func_26(10))
		{
			func_20("CHEAT_NOT_NOW");
			return;
		}
		if (func_69())
		{
			func_20("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
		{
			func_15("CHEAT_GIVE_PARACHUTE");
			unk_0x697EBA5CF1A6AB57(unk_0x33CD235DF1E6A94E(), joaat("gadget_parachute"), 1, true, true);
			func_5(10);
		}
	}
}

int func_69()
{
	if (iLocal_83)
	{
		iLocal_83 = 0;
		return 0;
	}
	if (func_70(0))
	{
		return 1;
	}
	return 0;
}

int func_70(int iParam0)
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

void func_71()
{
	int iVar0;
	
	if (iLocal_56 == 4)
	{
		iLocal_56 = 1;
		if ((func_26(23) || func_26(22)) || func_26(9))
		{
			func_20("CHEAT_NOT_NOW");
			return;
		}
		if (func_69())
		{
			func_20("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
		{
			if (unk_0xB83C26C286A4219F() == 0)
			{
				func_20("CHEAT_NOT_NOW");
				return;
			}
			iVar0 = unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A());
			if (iVar0 > 0)
			{
				func_15("CHEAT_WANTED_DOWN");
				unk_0x98F04A4FFB4AD01C(unk_0x95B959F18401C09A(), (iVar0 - 1), 0);
				func_5(9);
			}
			else
			{
				func_20("CHEAT_WANTED_DOWN_DENIED");
			}
		}
	}
}

void func_72()
{
	int iVar0;
	
	if (iLocal_55 == 4)
	{
		iLocal_55 = 1;
		if ((func_26(23) || func_26(22)) || func_26(8))
		{
			func_20("CHEAT_NOT_NOW");
			return;
		}
		if (func_69())
		{
			func_20("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
		{
			if (unk_0xB83C26C286A4219F() == 0)
			{
				func_20("CHEAT_NOT_NOW");
				return;
			}
			iVar0 = unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A());
			if (iVar0 < unk_0xB83C26C286A4219F())
			{
				unk_0x98F04A4FFB4AD01C(unk_0x95B959F18401C09A(), iVar0 + 1, 0);
				unk_0x66D901F8097E8E86(unk_0x95B959F18401C09A(), 0);
				func_15("CHEAT_WANTED_UP");
				func_5(8);
			}
			else
			{
				func_20("CHEAT_WANTED_UP_DENIED");
			}
		}
	}
}

void func_73()
{
	if (iLocal_54 == 4)
	{
		iLocal_54 = 1;
		if ((((((func_26(23) || func_26(22)) || func_26(7)) || func_14(9)) || func_14(10)) || !unk_0xC5D35F50889A4332(func_74())) || !unk_0xFA411175F279DC8C(unk_0x95B959F18401C09A()))
		{
			func_20("CHEAT_NOT_NOW");
			return;
		}
		if (func_69())
		{
			func_20("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
		{
			unk_0xAC1D3DA2FFE0570F(unk_0x95B959F18401C09A(), 1);
			func_15("CHEAT_SPECIAL_ABILITY");
			func_5(7);
		}
	}
}

int func_74()
{
	return unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E());
}

void func_75()
{
	int iVar0;
	
	if (iLocal_53 == 4)
	{
		iLocal_53 = 1;
		if ((((func_26(23) || func_26(22)) || func_26(6)) || func_14(9)) || func_14(10))
		{
			func_20("CHEAT_NOT_NOW");
			return;
		}
		if (func_69())
		{
			func_20("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
		{
			func_15("CHEAT_HEALTH_ARMOR");
			func_5(6);
			unk_0x7FC2040EB34E0E31(unk_0x33CD235DF1E6A94E(), unk_0x036A6F2CC2A6E4CA(unk_0x33CD235DF1E6A94E()), 0);
			unk_0x0270D61366A3CF56(unk_0x33CD235DF1E6A94E(), (unk_0x46F6E1D254A6B4A9(unk_0x95B959F18401C09A()) - unk_0xEB5DD88FB5DFC736(unk_0x33CD235DF1E6A94E())));
			if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
			{
				iVar0 = unk_0x6EE765D5B613AB2A(unk_0x33CD235DF1E6A94E());
				if (unk_0x765F6FEEFF39224F(iVar0))
				{
					if (!unk_0xD62C4419A41F106A(iVar0, 0))
					{
						unk_0x1A56D9C73BA20091(iVar0);
					}
				}
			}
		}
	}
}

void func_76()
{
	if (iLocal_52 == 4)
	{
		iLocal_52 = 1;
		if ((func_26(23) || func_26(22)) || func_26(5))
		{
			func_20("CHEAT_NOT_NOW");
			return;
		}
		if (func_69())
		{
			func_20("CHEAT_PHONE_DENIED");
			return;
		}
		func_5(5);
		switch (iLocal_71)
		{
			case 0:
				iLocal_71 = 1;
			
			case 1:
				unk_0x68673F1F33387A35("EXTRASUNNY");
				unk_0xFEE41843770AB969();
				func_15("CHEAT_ADVANCE_WEATHER_EXTRA_SUNNY");
				iLocal_71 = 2;
				break;
			
			case 2:
				unk_0x68673F1F33387A35("CLEAR");
				unk_0xFEE41843770AB969();
				func_15("CHEAT_ADVANCE_WEATHER_CLEAR");
				iLocal_71 = 3;
				break;
			
			case 3:
				unk_0x68673F1F33387A35("CLOUDS");
				unk_0xFEE41843770AB969();
				func_15("CHEAT_ADVANCE_WEATHER_CLOUDY");
				iLocal_71 = 4;
				break;
			
			case 4:
				unk_0x68673F1F33387A35("SMOG");
				unk_0xFEE41843770AB969();
				func_15("CHEAT_ADVANCE_WEATHER_SMOGGY");
				iLocal_71 = 6;
				break;
			
			case 6:
				unk_0x68673F1F33387A35("OVERCAST");
				unk_0xFEE41843770AB969();
				func_15("CHEAT_ADVANCE_WEATHER_OVERCAST");
				iLocal_71 = 7;
				break;
			
			case 7:
				unk_0x68673F1F33387A35("RAIN");
				unk_0xFEE41843770AB969();
				func_15("CHEAT_ADVANCE_WEATHER_RAIN");
				func_30(5, 1);
				iLocal_71 = 8;
				break;
			
			case 8:
				unk_0x68673F1F33387A35("THUNDER");
				unk_0xFEE41843770AB969();
				func_15("CHEAT_ADVANCE_WEATHER_THUNDER");
				iLocal_71 = 9;
				break;
			
			case 9:
				unk_0x68673F1F33387A35("CLEARING");
				unk_0xFEE41843770AB969();
				func_15("CHEAT_ADVANCE_WEATHER_CLEARING");
				iLocal_71 = 11;
				break;
			
			case 11:
				unk_0x68673F1F33387A35("XMAS");
				unk_0xFEE41843770AB969();
				func_15("CHEAT_ADVANCE_WEATHER_SNOW");
				iLocal_71 = 0;
				break;
			
			default:
				break;
			}
	}
}

void func_77()
{
	if (iLocal_51 == 4)
	{
		iLocal_51 = 1;
		if ((func_26(23) || func_26(22)) || func_26(4))
		{
			func_20("CHEAT_NOT_NOW");
			return;
		}
		if (func_69())
		{
			func_20("CHEAT_PHONE_DENIED");
			return;
		}
		func_15("CHEAT_GIVE_WEAPONS");
		func_5(4);
		if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
		{
			unk_0xE18BDD1E31C07544(unk_0x33CD235DF1E6A94E(), joaat("weapon_knife"), -1, false);
			unk_0xE18BDD1E31C07544(unk_0x33CD235DF1E6A94E(), joaat("weapon_smg"), 300, false);
			unk_0xE18BDD1E31C07544(unk_0x33CD235DF1E6A94E(), joaat("weapon_assaultrifle"), 300, true);
			unk_0xE18BDD1E31C07544(unk_0x33CD235DF1E6A94E(), joaat("weapon_pumpshotgun"), 150, false);
			unk_0xE18BDD1E31C07544(unk_0x33CD235DF1E6A94E(), joaat("weapon_sniperrifle"), 30, false);
			unk_0xE18BDD1E31C07544(unk_0x33CD235DF1E6A94E(), joaat("weapon_grenade"), 5, false);
			unk_0xE18BDD1E31C07544(unk_0x33CD235DF1E6A94E(), joaat("weapon_rpg"), 5, false);
		}
	}
}

void func_78()
{
	switch (iLocal_50)
	{
		case 1:
			break;
		
		case 4:
			func_15("CHEAT_FAST_SWIM");
			func_30(3, 1);
			iLocal_50 = 5;
			break;
		
		case 5:
			if (((!unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()) || func_26(23)) || func_26(22)) || func_26(3))
			{
				iLocal_50 = 9;
			}
			else
			{
				unk_0xA7C01382DAA3032D(unk_0x95B959F18401C09A(), 1.49f);
				unk_0x779E97A945CAA2A1();
			}
			break;
		
		case 9:
			unk_0xA7C01382DAA3032D(unk_0x95B959F18401C09A(), 1f);
			func_23("CHEAT_FAST_SWIM");
			func_30(3, 0);
			iLocal_50 = 1;
			break;
		
		default:
			break;
	}
}

void func_79()
{
	switch (iLocal_49)
	{
		case 1:
			break;
		
		case 4:
			func_15("CHEAT_FAST_RUN");
			func_30(2, 1);
			iLocal_49 = 5;
			break;
		
		case 5:
			if ((((!unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()) || unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E())) || func_26(23)) || func_26(22)) || func_26(2))
			{
				iLocal_49 = 9;
			}
			else
			{
				if (unk_0x6105CDB23E256B76(unk_0x33CD235DF1E6A94E()) || (unk_0xC90E2CD6BFE5CC33(unk_0x33CD235DF1E6A94E()) && !unk_0x707FFB0E65C1C546(unk_0x33CD235DF1E6A94E())))
				{
					unk_0x46C53B6318BB9A15(unk_0x95B959F18401C09A(), 1.49f);
				}
				else
				{
					unk_0x46C53B6318BB9A15(unk_0x95B959F18401C09A(), 1f);
				}
				unk_0x779E97A945CAA2A1();
			}
			break;
		
		case 9:
			unk_0x46C53B6318BB9A15(unk_0x95B959F18401C09A(), 1f);
			func_23("CHEAT_FAST_RUN");
			func_30(2, 0);
			iLocal_49 = 1;
			break;
		
		default:
			break;
	}
}

void func_80()
{
	int iVar0;
	
	switch (iLocal_48)
	{
		case 1:
			break;
		
		case 4:
			func_15("CHEAT_SLIDEY_CARS");
			func_30(1, 1);
			iLocal_48 = 5;
			break;
		
		case 5:
			if (((!unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()) || func_26(23)) || func_26(22)) || func_26(1))
			{
				iLocal_48 = 9;
			}
			if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
			{
				iVar0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
				if (!unk_0xD62C4419A41F106A(iVar0, 0))
				{
					if (unk_0x7BDC41A7CA0C77A2(iVar0, -1, 0) == unk_0x33CD235DF1E6A94E())
					{
						if (iLocal_69 == 0)
						{
							iLocal_69 = iVar0;
							if (!unk_0xD62C4419A41F106A(iLocal_69, 0))
							{
								if (func_81(1))
								{
									unk_0xC5441DF30553FB3A(iLocal_69, 1);
								}
								else
								{
									iLocal_69 = 0;
								}
							}
						}
						else if (iLocal_69 != iVar0)
						{
							if (!unk_0xD62C4419A41F106A(iLocal_69, 0))
							{
								unk_0xC5441DF30553FB3A(iLocal_69, 0);
							}
							iLocal_69 = 0;
						}
					}
				}
			}
			break;
		
		case 9:
			func_23("CHEAT_SLIDEY_CARS");
			iLocal_48 = 10;
			break;
		
		case 10:
			if (!unk_0xD62C4419A41F106A(iLocal_69, 0))
			{
				unk_0xC5441DF30553FB3A(iLocal_69, 0);
				iLocal_69 = 0;
			}
			func_30(1, 0);
			iLocal_48 = 1;
			break;
		
		default:
			break;
	}
}

int func_81(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	char* sVar4;
	
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		iVar0 = unk_0x8918EC905FC8975D();
		if (unk_0x765F6FEEFF39224F(iVar0))
		{
			if (unk_0x91D5C8283D19AF49(iVar0, 0))
			{
				iVar1 = unk_0x541D5C57194E73C4(iVar0);
				iVar2 = func_8();
				if (iParam0 & 1 != 0)
				{
					if (!unk_0x0C2E237744BA0026(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 2 != 0)
				{
					if (!unk_0x9E374B5F44A76AE2(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 4 != 0)
				{
					if (!unk_0x097E7778E3E162E8(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 8 != 0)
				{
					if (!unk_0x444D956C7F94526E(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 16 != 0)
				{
					if (unk_0x89DDAAE6EFF42DD9(iVar0, "door_dside_r") != -1 || unk_0x89DDAAE6EFF42DD9(iVar0, "door_pside_r") != -1)
					{
						return 0;
					}
				}
				if (iParam0 & 32 != 0)
				{
					if (unk_0x89DDAAE6EFF42DD9(iVar0, "door_dside_r") == -1 || unk_0x89DDAAE6EFF42DD9(iVar0, "door_pside_r") == -1)
					{
						return 0;
					}
				}
				if (iParam0 & 64 != 0)
				{
					if (unk_0x9E374B5F44A76AE2(iVar1))
					{
						if (unk_0x89DDAAE6EFF42DD9(iVar0, "seat_r") == -1)
						{
							return 0;
						}
					}
					else if (unk_0x89DDAAE6EFF42DD9(iVar0, "seat_dside_r") != -1 || unk_0x89DDAAE6EFF42DD9(iVar0, "seat_pside_r") != -1)
					{
						return 0;
					}
				}
				if (iParam0 & 128 != 0)
				{
					if (unk_0x89DDAAE6EFF42DD9(iVar0, "seat_dside_r") == -1 || unk_0x89DDAAE6EFF42DD9(iVar0, "seat_pside_r") == -1)
					{
						return 0;
					}
				}
				if (iParam0 & 256 != 0)
				{
					if (!func_10(iVar2))
					{
						return 0;
					}
					if (func_84(iVar2, 0) != iVar1)
					{
						return 0;
					}
				}
				if (iParam0 & 512 != 0)
				{
					if (!unk_0x0C2E237744BA0026(iVar1) && !unk_0x9E374B5F44A76AE2(iVar1))
					{
						return 0;
					}
					if (unk_0xF3E8C179636ED71E(iVar0))
					{
						return 0;
					}
					sVar4 = unk_0x4527878B077DBA42(iVar0, &uVar3);
					if (!unk_0x786AF4A44E1B5B4B(sVar4))
					{
						if (unk_0x36163153849DFDA1(sVar4) == unk_0x36163153849DFDA1("taxiService"))
						{
							return 0;
						}
					}
					if (func_82(iVar0, iVar2, 0))
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

int func_82(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0x765F6FEEFF39224F(iParam0) || !unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_83(iParam1, iVar0, &sVar1, &iVar2))
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

int func_83(int iParam0, int iParam1, char* sParam2, var uParam3)
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

int func_84(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_10(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_85(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_85(int iParam0, var uParam1, int iParam2)
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

void func_86()
{
	switch (iLocal_47)
	{
		case 1:
			break;
		
		case 4:
			func_15("CHEAT_SUPER_JUMP");
			func_30(0, 1);
			iLocal_47 = 5;
			break;
		
		case 5:
			if ((((!unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()) || func_26(23)) || func_26(22)) || func_26(0)) || unk_0x056AEC27A8BE13C6())
			{
				iLocal_47 = 9;
				return;
			}
			unk_0xC87F06DF3A5185FE(unk_0x95B959F18401C09A());
			unk_0x41E36A540F8F323F(unk_0x33CD235DF1E6A94E(), 217, 1);
			break;
		
		case 9:
			func_23("CHEAT_SUPER_JUMP");
			func_30(0, 0);
			iLocal_47 = 1;
			break;
		
		default:
			break;
	}
}

void func_87()
{
	if ((func_110() || iLocal_84 != 0) || func_14(14))
	{
		unk_0x3FD9339AA95E323F(2, 243, 1);
	}
	func_109();
	if (unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		return;
	}
	if (unk_0xA7772238DA986E33(unk_0x33CD235DF1E6A94E()))
	{
		return;
	}
	if (!unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
	{
		return;
	}
	if (!unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A()))
	{
		return;
	}
	if (func_33() || unk_0x71EC91BA8C88BCE0())
	{
		return;
	}
	if (func_108())
	{
		if (!iLocal_82)
		{
			func_107();
			iLocal_82 = 1;
		}
		return;
	}
	iLocal_82 = 0;
	iLocal_83 = 0;
	if ((func_106(988027572, 12) || unk_0x5D696B7051C33DD0(joaat("buzzoff"))) || func_105(20, joaat("buzzard")))
	{
		func_102(joaat("buzzard"), "CHEAT_SPAWN_VEH1");
	}
	if ((func_106(-1134279030, 11) || unk_0x5D696B7051C33DD0(joaat("bandit"))) || func_105(20, joaat("bmx")))
	{
		func_102(joaat("bmx"), "CHEAT_SPAWN_VEH2");
	}
	if ((func_106(971352167, 10) || unk_0x5D696B7051C33DD0(joaat("holein1"))) || func_105(20, joaat("caddy")))
	{
		func_102(joaat("caddy"), "CHEAT_SPAWN_VEH3");
	}
	if ((func_106(-269863225, 10) || unk_0x5D696B7051C33DD0(joaat("comet"))) || func_105(20, joaat("comet2")))
	{
		func_102(joaat("comet2"), "CHEAT_SPAWN_VEH4");
	}
	if ((func_106(458579068, 12) || unk_0x5D696B7051C33DD0(joaat("flyspray"))) || func_105(20, joaat("duster")))
	{
		func_102(joaat("duster"), "CHEAT_SPAWN_VEH5");
	}
	if ((func_106(-666513193, 12) || unk_0x5D696B7051C33DD0(joaat("rocket"))) || func_105(20, joaat("pcj")))
	{
		func_102(joaat("pcj"), "CHEAT_SPAWN_VEH6");
	}
	if ((func_106(-1245984749, 10) || unk_0x5D696B7051C33DD0(joaat("rapidgt"))) || func_105(20, joaat("rapidgt")))
	{
		func_102(joaat("rapidgt"), "CHEAT_SPAWN_VEH7");
	}
	if ((func_106(2076774618, 12) || unk_0x5D696B7051C33DD0(joaat("offroad"))) || func_105(20, joaat("sanchez")))
	{
		func_102(joaat("sanchez"), "CHEAT_SPAWN_VEH8");
	}
	if ((func_106(855685457, 9) || unk_0x5D696B7051C33DD0(joaat("vinewood"))) || func_105(20, joaat("stretch")))
	{
		func_102(joaat("stretch"), "CHEAT_SPAWN_VEH9");
	}
	if ((func_106(-591395876, 12) || unk_0x5D696B7051C33DD0(joaat("barnstorm"))) || func_105(20, joaat("stunt")))
	{
		func_102(joaat("stunt"), "CHEAT_SPAWN_VEH10");
	}
	if ((func_106(-1399217582, 10) || unk_0x5D696B7051C33DD0(joaat("trashed"))) || func_105(20, joaat("trash")))
	{
		func_102(joaat("trash"), "CHEAT_SPAWN_VEH11");
	}
	if (func_101())
	{
		if ((func_106(-375917581, 10) || unk_0x5D696B7051C33DD0(joaat("extinct"))) || func_105(20, joaat("dodo")))
		{
			func_102(joaat("dodo"), "CHEAT_SPAWN_VEH12");
		}
		if ((func_106(-2124307881, 10) || unk_0x5D696B7051C33DD0(joaat("deathcar"))) || func_105(20, joaat("dukes2")))
		{
			func_102(joaat("dukes2"), "CHEAT_SPAWN_VEH13");
		}
		if ((func_106(1028964594, 9) || unk_0x5D696B7051C33DD0(joaat("bubbles"))) || func_105(20, joaat("submersible2")))
		{
			func_102(joaat("submersible2"), "CHEAT_SPAWN_VEH14");
		}
	}
	if ((func_106(-393416581, 11) || unk_0x5D696B7051C33DD0(joaat("hoptoit"))) || func_105(0, 0))
	{
		func_100();
	}
	if ((func_106(-296509791, 8) || unk_0x5D696B7051C33DD0(joaat("snowday"))) || func_105(1, 0))
	{
		func_99();
	}
	if ((func_106(1120820643, 7) || unk_0x5D696B7051C33DD0(joaat("catchme"))) || func_105(2, 0))
	{
		func_98();
	}
	if ((func_106(-421458016, 9) || unk_0x5D696B7051C33DD0(joaat("gotgills"))) || func_105(3, 0))
	{
		func_97();
	}
	if ((func_106(372390926, 12) || unk_0x5D696B7051C33DD0(joaat("toolup"))) || func_105(4, 0))
	{
		iLocal_51 = 4;
	}
	if ((func_106(606506837, 8) || unk_0x5D696B7051C33DD0(joaat("makeitrain"))) || func_105(5, 0))
	{
		iLocal_52 = 4;
	}
	if ((func_106(453014206, 12) || unk_0x5D696B7051C33DD0(joaat("turtle"))) || func_105(6, 0))
	{
		iLocal_53 = 4;
	}
	if ((func_106(1773187142, 9) || unk_0x5D696B7051C33DD0(joaat("powerup"))) || func_105(7, 0))
	{
		iLocal_54 = 4;
	}
	if ((func_106(1173296014, 10) || unk_0x5D696B7051C33DD0(joaat("fugitive"))) || func_105(8, 0))
	{
		iLocal_55 = 4;
	}
	if ((func_106(-381269753, 10) || unk_0x5D696B7051C33DD0(joaat("lawyerup"))) || func_105(9, 0))
	{
		iLocal_56 = 4;
	}
	if ((func_106(-2023988698, 11) || unk_0x5D696B7051C33DD0(joaat("skydive"))) || func_105(10, 0))
	{
		iLocal_57 = 4;
	}
	if ((func_106(-835863906, 12) || unk_0x5D696B7051C33DD0(joaat("highex"))) || func_105(11, 0))
	{
		func_96();
	}
	if ((func_106(1958387485, 12) || unk_0x5D696B7051C33DD0(joaat("incendiary"))) || func_105(12, 0))
	{
		func_95();
	}
	if ((func_106(-903985180, 9) || unk_0x5D696B7051C33DD0(joaat("hothands"))) || func_105(13, 0))
	{
		func_94();
	}
	if ((func_106(2087642905, 9) || unk_0x5D696B7051C33DD0(joaat("floater"))) || func_105(14, 0))
	{
		func_93();
	}
	if ((func_106(1257820019, 10) || unk_0x5D696B7051C33DD0(joaat("painkiller"))) || func_105(15, 0))
	{
		func_92();
	}
	if ((func_106(1540206179, 7) || unk_0x5D696B7051C33DD0(joaat("slowmo"))) || func_105(16, 0))
	{
		func_91();
	}
	if ((func_106(115565392, 16) || unk_0x5D696B7051C33DD0(joaat("skyfall"))) || func_105(17, 0))
	{
		func_90();
	}
	if ((func_106(-1276513277, 8) || unk_0x5D696B7051C33DD0(joaat("liquor"))) || func_105(18, 0))
	{
		func_89();
	}
	if ((func_106(2040433593, 9) || unk_0x5D696B7051C33DD0(joaat("deadeye"))) || func_105(19, 0))
	{
		func_88();
	}
}

void func_88()
{
	if (func_27())
	{
		func_20("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		return;
	}
	if ((func_26(23) || func_26(21)) || func_26(16))
	{
		func_20("CHEAT_NOT_NOW");
		return;
	}
	if (iLocal_63 != 1)
	{
		func_20("CHEAT_NOT_NOW");
	}
	else
	{
		iLocal_66 = 4;
	}
}

void func_89()
{
	if (func_27())
	{
		func_20("CHEAT_MISSION_DENIED");
		iLocal_65 = 1;
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		iLocal_65 = 1;
		return;
	}
	if ((func_26(23) || func_26(21)) || func_26(18))
	{
		func_20("CHEAT_NOT_NOW");
		iLocal_65 = 1;
		return;
	}
	if (iLocal_65 == 1)
	{
		iLocal_65 = 4;
	}
	else if (iLocal_65 == 5)
	{
		iLocal_65 = 9;
	}
}

void func_90()
{
	if (func_27())
	{
		func_20("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		return;
	}
	if (unk_0x056AEC27A8BE13C6())
	{
		func_20("CHEAT_NOT_HERE");
		return;
	}
	if (iLocal_64 != 1)
	{
		func_20("CHEAT_ALREADY_ACTIVE");
		return;
	}
	if (((((func_26(23) || func_26(21)) || func_26(17)) || func_65(0)) || unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0)) || !unk_0x51EBF893ED085755())
	{
		func_20("CHEAT_NOT_NOW");
		return;
	}
	if ((unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 0)) || unk_0x1BCDA92AD0A7835B(joaat("respawn_controller")) > 0)
	{
		func_20("CHEAT_NOT_NOW");
		return;
	}
	iLocal_64 = 2;
}

void func_91()
{
	if (func_27())
	{
		func_20("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		return;
	}
	if ((func_26(23) || func_26(21)) || func_26(16))
	{
		func_20("CHEAT_NOT_NOW");
		return;
	}
	if (iLocal_66 != 1)
	{
		func_20("CHEAT_NOT_NOW");
	}
	else
	{
		iLocal_63 = 4;
	}
}

void func_92()
{
	vector3 vVar0;
	
	vVar0 = { func_18(unk_0x95B959F18401C09A()) };
	if (func_27())
	{
		func_20("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		return;
	}
	if (((func_26(23) || func_26(21)) || func_26(15)) || vVar0.z <= -170f)
	{
		func_20("CHEAT_NOT_NOW");
		return;
	}
	if (iLocal_62 == 1)
	{
		iLocal_62 = 4;
	}
	else if (iLocal_62 == 5)
	{
		iLocal_62 = 9;
	}
}

void func_93()
{
	if (func_27())
	{
		func_20("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		return;
	}
	if ((((func_26(23) || func_26(21)) || func_26(14)) || func_65(17)) || unk_0x8AE34E8B10270D31(unk_0x33CD235DF1E6A94E()))
	{
		func_20("CHEAT_NOT_NOW");
		return;
	}
	iLocal_61 = 4;
}

void func_94()
{
	if (func_27())
	{
		func_20("CHEAT_MISSION_DENIED");
		iLocal_60 = 1;
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		iLocal_60 = 1;
		return;
	}
	if ((func_26(23) || func_26(21)) || func_26(13))
	{
		func_20("CHEAT_NOT_NOW");
		iLocal_60 = 1;
		return;
	}
	if (iLocal_60 == 1)
	{
		iLocal_60 = 4;
	}
	else if (iLocal_60 == 5)
	{
		iLocal_60 = 9;
	}
}

void func_95()
{
	if (func_27())
	{
		func_20("CHEAT_MISSION_DENIED");
		iLocal_59 = 1;
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		iLocal_59 = 1;
		return;
	}
	if ((func_26(23) || func_26(21)) || func_26(12))
	{
		func_20("CHEAT_NOT_NOW");
		iLocal_59 = 1;
		return;
	}
	if (iLocal_59 == 1)
	{
		iLocal_59 = 4;
	}
	else if (iLocal_59 == 5)
	{
		iLocal_59 = 9;
	}
}

void func_96()
{
	if (func_27())
	{
		func_20("CHEAT_MISSION_DENIED");
		iLocal_58 = 1;
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		iLocal_58 = 1;
		return;
	}
	if ((func_26(23) || func_26(21)) || func_26(11))
	{
		func_20("CHEAT_NOT_NOW");
		iLocal_58 = 1;
		return;
	}
	if (iLocal_58 == 1)
	{
		iLocal_58 = 4;
	}
	else if (iLocal_58 == 5)
	{
		iLocal_58 = 9;
	}
}

void func_97()
{
	if ((((func_26(23) || func_26(22)) || func_26(3)) || func_14(9)) || func_14(10))
	{
		func_20("CHEAT_NOT_NOW");
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_50 == 1)
	{
		iLocal_50 = 4;
	}
	else if (iLocal_50 == 5)
	{
		iLocal_50 = 9;
	}
}

void func_98()
{
	if ((((func_26(23) || func_26(22)) || func_26(2)) || func_14(9)) || func_14(10))
	{
		func_20("CHEAT_NOT_NOW");
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_49 == 1)
	{
		iLocal_49 = 4;
	}
	else if (iLocal_49 == 5)
	{
		iLocal_49 = 9;
	}
}

void func_99()
{
	if ((func_26(23) || func_26(22)) || func_26(1))
	{
		func_20("CHEAT_NOT_NOW");
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_48 == 1)
	{
		iLocal_48 = 4;
	}
	else if (iLocal_48 == 5)
	{
		iLocal_48 = 9;
	}
}

void func_100()
{
	if (((func_26(23) || func_26(22)) || func_26(0)) || unk_0x056AEC27A8BE13C6())
	{
		func_20("CHEAT_NOT_NOW");
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_47 == 1)
	{
		iLocal_47 = 4;
	}
	else if (iLocal_47 == 5)
	{
		iLocal_47 = 9;
	}
}

int func_101()
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

void func_102(int iParam0, char* sParam1)
{
	if (iLocal_46 == 1)
	{
		if (((((func_14(9) || unk_0x1BCDA92AD0A7835B(joaat("barry1")) > 0) || unk_0x1BCDA92AD0A7835B(joaat("tennis")) > 0) || func_26(23)) || func_26(22)) || func_26(20))
		{
			func_20("CHEAT_NOT_NOW");
			return;
		}
		if (func_69())
		{
			func_20("CHEAT_PHONE_DENIED");
			return;
		}
		if (!func_103(iParam0))
		{
			func_20("CHEAT_VEHICLE_LOCKED_DENIED");
			return;
		}
		iLocal_67 = iParam0;
		iLocal_70 = sParam1;
		iLocal_46 = 2;
	}
}

int func_103(int iParam0)
{
	switch (iParam0)
	{
		case joaat("dodo"):
			if (func_104(66, 0) == 0)
			{
				return 0;
			}
			break;
		
		case joaat("dukes2"):
			if (func_104(64, 0) == 0)
			{
				return 0;
			}
			break;
		
		case joaat("submersible2"):
			if (func_104(63, 0) == 0)
			{
				return 0;
			}
			break;
	}
	return 1;
}

bool func_104(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_106565.f_32743[iParam0], iParam1);
}

int func_105(int iParam0, int iParam1)
{
	if (unk_0x0E4018692D92041D(Global_26013, iParam0))
	{
		if (iParam1 != 0)
		{
			if (iParam1 == Global_26014)
			{
				unk_0xCE689A8E8C42ED78(&Global_26013, iParam0);
				iLocal_83 = 1;
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			unk_0xCE689A8E8C42ED78(&Global_26013, iParam0);
			iLocal_83 = 1;
			return 1;
		}
	}
	return 0;
}

int func_106(int iParam0, int iParam1)
{
	if (!func_14(14))
	{
		return unk_0x454078694FE8C013(iParam0, iParam1);
	}
	return 0;
}

void func_107()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iLocal_80[iVar0] != -1)
		{
			unk_0x98E765CB9E761233(iLocal_80[iVar0]);
			iLocal_80[iVar0] = -1;
		}
		iVar0++;
	}
}

int func_108()
{
	if (((Global_93682 == 13 || Global_93682 == 10) || Global_93682 == 11) || Global_93682 == 12)
	{
		return 0;
	}
	return 1;
}

void func_109()
{
	if (func_14(14) || (!unk_0x73DA1542B2F0C458() && iLocal_84 != 0))
	{
		iLocal_84 = unk_0xE3903F59E2F22150();
	}
	if (iLocal_84 != 0)
	{
		if (!func_14(14))
		{
			if ((unk_0xE3903F59E2F22150() - iLocal_84) > 1000)
			{
				iLocal_84 = 0;
			}
		}
	}
}

int func_110()
{
	if (Global_71850)
	{
		return 1;
	}
	else if (Global_56488 && !Global_56494)
	{
		return 1;
	}
	return 0;
}

void func_111()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iLocal_80[iVar0] = -1;
		iVar0++;
	}
	iLocal_82 = 0;
	iLocal_81 = 0;
}

void func_112()
{
	unk_0x9F8B0970D1B05742(0);
	if (iLocal_64 == 5)
	{
		func_36();
	}
	if (iLocal_65 == 5)
	{
		func_45(1);
	}
	if (iLocal_63 == 5 || iLocal_66 == 5)
	{
		unk_0xCBDC8BC7A589C76E(1f);
	}
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		if (iLocal_62 == 5)
		{
			unk_0xF23201C524E43F1C(unk_0x95B959F18401C09A(), 0);
			unk_0x4D5F3407F1F37E28(unk_0x33CD235DF1E6A94E(), false, false, false, false, false, 0, 0, 0);
		}
		unk_0x46C53B6318BB9A15(unk_0x95B959F18401C09A(), 1f);
		unk_0xA7C01382DAA3032D(unk_0x95B959F18401C09A(), 1f);
	}
	unk_0x5C2EC74E2089E64D(0);
	Global_26011 = 0;
	Global_26010 = 0;
	Global_26012 = 0;
	Global_26013 = 0;
	Global_26015 = 0;
	Global_26014 = 0;
	unk_0x5894DC159447E10A();
}

