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
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 10;
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
	var uLocal_72 = 2;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 8;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 8;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	float fLocal_94 = 0f;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	struct<48> Local_103 = { 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, -808831384, 588969535, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_104 = 0;
	vector3 vLocal_105[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_106 = 0;
	var uLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	struct<8> Local_121[3];
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	struct<21> Local_124 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	iLocal_110 = 1076369579;
	iLocal_111 = 20;
	if (unk_0xB331FCEB94EB05C8() && func_235(unk_0x95B959F18401C09A(), 0, 1))
	{
		func_226(ScriptParam_124);
	}
	else
	{
		func_222();
	}
	while (true)
	{
		func_221();
		if (func_210() || func_206(17))
		{
			func_222();
		}
		if (unk_0x69E8EDFEA57E361D())
		{
			func_222();
		}
		switch (func_205(unk_0x72B85B341ADBE9DE()))
		{
			case 0:
				if (func_204() == 1)
				{
					func_203();
					func_201();
					if (func_200(60000))
					{
						if (!func_198())
						{
							if (!unk_0x9E374B5F44A76AE2(Local_103.f_10))
							{
								func_197("DSV_HELP1", -1);
							}
							else
							{
								func_197("DSV_HELP2", -1);
							}
						}
					}
					vLocal_105[unk_0x72B85B341ADBE9DE() /*3*/] = 1;
				}
				else if (func_204() == 4)
				{
					vLocal_105[unk_0x72B85B341ADBE9DE() /*3*/] = 3;
				}
				break;
			
			case 1:
				if (func_204() == 1)
				{
					func_45();
				}
				else if (func_204() == 4)
				{
					vLocal_105[unk_0x72B85B341ADBE9DE() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_44(&(Local_103.f_45));
				if (func_43(&(Local_103.f_45)))
				{
					vLocal_105[unk_0x72B85B341ADBE9DE() /*3*/] = 4;
				}
				break;
			
			case 2:
				vLocal_105[unk_0x72B85B341ADBE9DE() /*3*/] = 4;
			
			case 4:
				func_222();
				break;
		}
		if (unk_0x06C1EBC003C18F1F())
		{
			switch (func_204())
			{
				case 0:
					if (func_10())
					{
						func_203();
						func_9(&(Local_103.f_43), 0, 0);
						Local_103 = 1;
					}
					break;
				
				case 1:
					func_8();
					func_7();
					if (func_1())
					{
						Local_103 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()
{
	struct<14> Var0;
	struct<14> Var1;
	
	if (Local_103.f_42 == 0)
	{
		if (Local_103 != 4)
		{
			if (unk_0xD62C4419A41F106A(unk_0xFC00F22E930BFD55(Local_103.f_2), 0))
			{
				if (func_6(&(Local_103.f_47), 3000, 0))
				{
					if (Local_103.f_8 == func_5())
					{
						Var0.f_2 = -398371224;
						func_3(Var0, func_4(1));
					}
					else
					{
						Var0.f_2 = -402608095;
						Var0.f_10 = Local_103.f_8;
						func_3(Var0, func_4(1));
					}
					return 1;
				}
			}
			if (func_6(&(Local_103.f_43), Global_262145.f_11022, 0))
			{
				Var1.f_2 = 910378974;
				func_3(Var1, func_4(1));
				return 1;
			}
		}
	}
	return 0;
}

void func_3(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0 = 111286607;
	Param0.f_1 = unk_0x95B959F18401C09A();
	if (!iParam13 == 0)
	{
		unk_0x09269A9CFC145847(1, &Param0, 14, iParam13);
	}
}

int func_4(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0xF839A4FC3E76D324())
	{
		if (unk_0x1B094AC15936B3DB(unk_0xDD4FFAA17341D382(iVar1)))
		{
			iVar2 = unk_0xEB9DC13235C0B345(unk_0xDD4FFAA17341D382(iVar1));
			if (func_235(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x95B959F18401C09A() || iParam0)
				{
					unk_0x8950ED5730F62EE8(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_5()
{
	return -1;
}

int func_6(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_9(uParam0, bParam2, 0);
	if (unk_0xB331FCEB94EB05C8() && !bParam2)
	{
		if (unk_0xEE14D9A9F531ADDC(unk_0x5009A219B22D2352(unk_0x78DCC5D0CB43DEBA(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xEE14D9A9F531ADDC(unk_0x5009A219B22D2352(unk_0xE3903F59E2F22150(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_7()
{
	switch (Local_103.f_42)
	{
		case 0:
			break;
		
		case 1:
			break;
	}
}

void func_8()
{
	struct<14> Var0;
	int iVar1;
	
	if (Local_103 != 4)
	{
		iLocal_108 = 0;
		while (iLocal_108 < unk_0xF839A4FC3E76D324())
		{
			if (unk_0x1B094AC15936B3DB(unk_0xDD4FFAA17341D382(iLocal_108)))
			{
				iVar1 = unk_0xEB9DC13235C0B345(unk_0xDD4FFAA17341D382(iLocal_108));
				if (unk_0x0E4018692D92041D(vLocal_105[iLocal_108 /*3*/].f_1, 0))
				{
					Var0.f_2 = -402608095;
					Var0.f_10 = iVar1;
					Local_103.f_8 = iVar1;
					func_3(Var0, func_4(1));
					Local_103 = 4;
					return;
				}
				if (!unk_0x0E4018692D92041D(Local_103.f_1, 0))
				{
					if (unk_0x0E4018692D92041D(vLocal_105[iLocal_108 /*3*/].f_1, 1))
					{
						unk_0x8950ED5730F62EE8(&(Local_103.f_1), 0);
					}
					if (unk_0x0E4018692D92041D(vLocal_105[iLocal_108 /*3*/].f_1, 2))
					{
						unk_0x8950ED5730F62EE8(&(Local_103.f_1), 0);
					}
				}
				else
				{
					if (!unk_0x0E4018692D92041D(Local_103.f_1, 1))
					{
						if (unk_0x0E4018692D92041D(vLocal_105[iLocal_108 /*3*/].f_1, 3))
						{
							unk_0x8950ED5730F62EE8(&(Local_103.f_1), 1);
						}
					}
					if (!unk_0x0E4018692D92041D(Local_103.f_1, 2))
					{
						if (unk_0x0E4018692D92041D(vLocal_105[iLocal_108 /*3*/].f_1, 4))
						{
							unk_0x8950ED5730F62EE8(&(Local_103.f_1), 2);
						}
					}
					if (!unk_0x0E4018692D92041D(Local_103.f_1, 3))
					{
						if (unk_0x0E4018692D92041D(vLocal_105[iLocal_108 /*3*/].f_1, 5))
						{
							unk_0x8950ED5730F62EE8(&(Local_103.f_1), 3);
						}
					}
					if (!unk_0x0E4018692D92041D(Local_103.f_1, 4))
					{
						if (unk_0x0E4018692D92041D(vLocal_105[iLocal_108 /*3*/].f_1, 6))
						{
							unk_0x8950ED5730F62EE8(&(Local_103.f_1), 4);
						}
					}
				}
			}
			iLocal_108++;
		}
	}
}

void func_9(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0xB331FCEB94EB05C8() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x78DCC5D0CB43DEBA();
			}
			else
			{
				*uParam0 = unk_0x765FF3592EC81689();
			}
		}
		else
		{
			*uParam0 = unk_0xE3903F59E2F22150();
		}
		uParam0->f_1 = 1;
	}
}

int func_10()
{
	if (func_42(Local_103.f_10) && func_42(Local_103.f_11))
	{
		if ((func_21() && func_19()) && func_11())
		{
			unk_0x71CA80D41E1338B4(Local_103.f_10);
			unk_0x71CA80D41E1338B4(Local_103.f_11);
			return 1;
		}
	}
	return 0;
}

int func_11()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_103.f_14)
	{
		if ((!unk_0x22C3124A898FB82A(Local_103.f_4[iVar0]) && func_42(Local_103.f_11)) && unk_0x22C3124A898FB82A(Local_103.f_2))
		{
			if (func_17(Local_103.f_2))
			{
				if (Local_103.f_12 == 0)
				{
					if (func_16(&(Local_103.f_4[iVar0]), Local_103.f_2, 22, Local_103.f_11, iVar0, 1, 1, 1))
					{
						func_13(&(Local_103.f_4[iVar0]));
					}
				}
				else if (func_12(&(Local_103.f_4[iVar0]), 22, Local_103.f_11, Local_103.f_28[iVar0 /*3*/], Local_103.f_38[iVar0], 1, 1, 1))
				{
					func_13(&(Local_103.f_4[iVar0]));
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_103.f_14)
	{
		if (!unk_0x22C3124A898FB82A(Local_103.f_4[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_12(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	if (!unk_0xDB7A20748C5E6EF3(1))
	{
		return 0;
	}
	iVar0 = unk_0x9BA5CF280376EEA4(iParam1, iParam2, vParam3, fParam4, iParam6, bParam5);
	*uParam0 = unk_0x50403C3BFA227FE5(iVar0);
	if (unk_0x22C3124A898FB82A(*uParam0))
	{
		unk_0xFE8201EFB515D77B(iVar0, iParam7);
		if (unk_0x0371ECBEC27AF4BE(iVar0))
		{
			if (bParam5)
			{
				unk_0x841CC2A685D6AF3C(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

void func_13(var uParam0)
{
	int iVar0;
	
	unk_0x0648A75D3F60E864(unk_0xBB28786B7F552D0B(*uParam0), Global_1574989);
	unk_0xC475906893AEB995(unk_0xBB28786B7F552D0B(*uParam0), 0);
	unk_0x897EF720254BBEA3(unk_0xBB28786B7F552D0B(*uParam0), 1);
	unk_0xE18BDD1E31C07544(unk_0xBB28786B7F552D0B(*uParam0), func_15(), 25000, 1);
	iVar0 = unk_0x9EC3B269A34A2BEE(0, 10);
	if (iVar0 == 0 || iVar0 == 1)
	{
		unk_0x52F5AAAD4824B17E(unk_0xBB28786B7F552D0B(*uParam0), 0);
	}
	else if ((iVar0 == 2 || iVar0 == 3) || iVar0 == 4)
	{
		unk_0x52F5AAAD4824B17E(unk_0xBB28786B7F552D0B(*uParam0), 2);
	}
	else
	{
		unk_0x52F5AAAD4824B17E(unk_0xBB28786B7F552D0B(*uParam0), 1);
	}
	iVar0 = unk_0x9EC3B269A34A2BEE(0, 10);
	if ((iVar0 == 0 || iVar0 == 1) || iVar0 == 2)
	{
		unk_0x28F648743D7DE312(unk_0xBB28786B7F552D0B(*uParam0), 5, 1);
	}
	else if (iVar0 == 3)
	{
		unk_0x28F648743D7DE312(unk_0xBB28786B7F552D0B(*uParam0), 17, 1);
	}
	else if ((iVar0 == 4 || iVar0 == 5) || iVar0 == 6)
	{
		unk_0x28F648743D7DE312(unk_0xBB28786B7F552D0B(*uParam0), 13, 1);
	}
	if (func_14())
	{
		unk_0x28F648743D7DE312(unk_0xBB28786B7F552D0B(*uParam0), 20, 1);
	}
	unk_0x28F648743D7DE312(unk_0xBB28786B7F552D0B(*uParam0), 2, 1);
	iVar0 = unk_0x9EC3B269A34A2BEE(0, 4);
	if (iVar0 == 0)
	{
		unk_0x34A51926277F67BC(unk_0xBB28786B7F552D0B(*uParam0), 2);
	}
	else if (iVar0 == 1)
	{
		unk_0x34A51926277F67BC(unk_0xBB28786B7F552D0B(*uParam0), 1);
	}
	else if (iVar0 == 2)
	{
		unk_0x34A51926277F67BC(unk_0xBB28786B7F552D0B(*uParam0), 3);
	}
	unk_0x36E99B0EECFE7B6A(unk_0xBB28786B7F552D0B(*uParam0), 1);
	unk_0xBCC19B7CC61AE8CD(unk_0xBB28786B7F552D0B(*uParam0), 1);
	unk_0x5FEE418CE11E6DDE(unk_0xBB28786B7F552D0B(*uParam0), 29, true);
	unk_0x66CDA3DCBCEDF782(unk_0xBB28786B7F552D0B(*uParam0), 3);
	unk_0x7FC2040EB34E0E31(unk_0xBB28786B7F552D0B(*uParam0), round((200f * Global_262145.f_153)), 0);
}

int func_14()
{
	if (unk_0x0E4018692D92041D(unk_0x9EC3B269A34A2BEE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_15()
{
	switch (Local_103.f_11)
	{
		case joaat("g_m_y_ballaorig_01"):
		case joaat("g_m_y_ballaeast_01"):
			switch (unk_0x9EC3B269A34A2BEE(0, 5))
			{
				case 0:
					return joaat("weapon_combatpistol");
				
				case 1:
					return joaat("weapon_pumpshotgun");
				
				case 2:
					return joaat("weapon_microsmg");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_assaultrifle");
				
				default:
			}
			break;
		
		case joaat("g_m_y_mexgoon_02"):
		case joaat("g_f_y_vagos_01"):
			switch (unk_0x9EC3B269A34A2BEE(0, 5))
			{
				case 0:
					return joaat("weapon_pistol");
				
				case 1:
					return joaat("weapon_pumpshotgun");
				
				case 2:
					return joaat("weapon_microsmg");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_assaultrifle");
				
				default:
			}
			break;
		
		case joaat("g_m_y_lost_01"):
		case joaat("g_f_y_lost_01"):
			switch (unk_0x9EC3B269A34A2BEE(0, 5))
			{
				case 0:
					return joaat("weapon_combatpistol");
				
				case 1:
					return joaat("weapon_sawnoffshotgun");
				
				case 2:
					return joaat("weapon_smg");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_assaultrifle");
				
				default:
			}
			break;
		
		case joaat("g_m_m_chigoon_02"):
		case joaat("g_m_m_chigoon_01"):
			switch (unk_0x9EC3B269A34A2BEE(0, 5))
			{
				case 0:
					return joaat("weapon_pistol");
				
				case 1:
					return joaat("weapon_pumpshotgun");
				
				case 2:
					return joaat("weapon_advancedrifle");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_carbinerifle");
				
				default:
			}
			break;
		
		case joaat("g_m_m_armgoon_01"):
		case joaat("g_m_y_armgoon_02"):
			switch (unk_0x9EC3B269A34A2BEE(0, 5))
			{
				case 0:
					return joaat("weapon_pistol");
				
				case 1:
					return joaat("weapon_sawnoffshotgun");
				
				case 2:
					return joaat("weapon_smg");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_carbinerifle");
				
				default:
			}
			break;
		
		case joaat("a_m_m_hillbilly_02"):
		case joaat("a_m_m_hillbilly_01"):
			switch (unk_0x9EC3B269A34A2BEE(0, 5))
			{
				case 0:
					return joaat("weapon_combatpistol");
				
				case 1:
					return joaat("weapon_sawnoffshotgun");
				
				case 2:
					return joaat("weapon_microsmg");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_combatmg");
				
				default:
			}
			break;
		
		case joaat("g_m_y_salvagoon_01"):
		case joaat("g_m_y_salvagoon_02"):
			switch (unk_0x9EC3B269A34A2BEE(0, 5))
			{
				case 0:
					return joaat("weapon_pistol");
				
				case 1:
					return joaat("weapon_pumpshotgun");
				
				case 2:
					return joaat("weapon_microsmg");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_assaultrifle");
				
				default:
			}
			break;
		
		case joaat("g_m_y_strpunk_01"):
		case joaat("g_m_y_strpunk_02"):
			switch (unk_0x9EC3B269A34A2BEE(0, 5))
			{
				case 0:
					return joaat("weapon_pistol");
				
				case 1:
					return joaat("weapon_sawnoffshotgun");
				
				case 2:
					return joaat("weapon_microsmg");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_assaultrifle");
				
				default:
			}
			break;
		
		default:
			switch (unk_0x9EC3B269A34A2BEE(0, 5))
			{
				case 0:
					return joaat("weapon_pistol");
				
				case 1:
					return joaat("weapon_pumpshotgun");
				
				case 2:
					return joaat("weapon_smg");
				
				case 3:
					return joaat("weapon_combatmg");
				
				case 4:
					return joaat("weapon_carbinerifle");
				
				default:
			}
			break;
	}
	return joaat("weapon_pistol");
}

int func_16(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0xDB7A20748C5E6EF3(1))
	{
		return 0;
	}
	if (!unk_0x22C3124A898FB82A(uParam1))
	{
		return 0;
	}
	if (!unk_0x91D5C8283D19AF49(unk_0xFC00F22E930BFD55(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x50403C3BFA227FE5(unk_0xE196503B36B6194B(unk_0xFC00F22E930BFD55(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0x22C3124A898FB82A(*uParam0))
	{
		unk_0xFE8201EFB515D77B(unk_0xBB28786B7F552D0B(*uParam0), iParam7);
		if (unk_0x0371ECBEC27AF4BE(unk_0xBB28786B7F552D0B(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x841CC2A685D6AF3C(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_17(var uParam0)
{
	if (unk_0x22C3124A898FB82A(uParam0))
	{
		return !func_18(unk_0xFC00F22E930BFD55(uParam0));
	}
	return 0;
}

int func_18(int iParam0)
{
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		if (unk_0xD62C4419A41F106A(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x91D5C8283D19AF49(iParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_19()
{
	if ((!unk_0x22C3124A898FB82A(Local_103.f_3) && func_42(Local_103.f_11)) && unk_0x22C3124A898FB82A(Local_103.f_2))
	{
		if (func_17(Local_103.f_2))
		{
			if (Local_103.f_12 == 1)
			{
				if (func_12(&(Local_103.f_3), 22, Local_103.f_11, Local_103.f_24, Local_103.f_27, 1, 1, 1))
				{
					func_13(&(Local_103.f_3));
					func_20();
				}
			}
			else if (func_16(&(Local_103.f_3), Local_103.f_2, 22, Local_103.f_11, -1, 1, 1, 1))
			{
				func_13(&(Local_103.f_3));
				func_20();
			}
		}
	}
	if (!unk_0x22C3124A898FB82A(Local_103.f_3))
	{
		return 0;
	}
	return 1;
}

void func_20()
{
	if (Local_103.f_12 == 0)
	{
		if (func_14())
		{
			unk_0x21D56A8927F5A92A(unk_0xBB28786B7F552D0B(Local_103.f_3), unk_0xFC00F22E930BFD55(Local_103.f_2), unk_0x9562E33C057F7589(7f, 18f), 786468);
		}
		else
		{
			unk_0x21D56A8927F5A92A(unk_0xBB28786B7F552D0B(Local_103.f_3), unk_0xFC00F22E930BFD55(Local_103.f_2), unk_0x9562E33C057F7589(7f, 18f), 786599);
		}
	}
	else if (Local_103.f_12 == 2)
	{
		func_203();
		unk_0x13A2D602CD10CBAC(unk_0xBB28786B7F552D0B(Local_103.f_3), uLocal_107);
	}
}

int func_21()
{
	int iVar0;
	
	if (!unk_0x22C3124A898FB82A(Local_103.f_2))
	{
		if (func_42(Local_103.f_10))
		{
			if (func_25(&(Local_103.f_16), &(Local_103.f_19)))
			{
				if (func_22(&(Local_103.f_2), Local_103.f_10, Local_103.f_16, Local_103.f_19, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0))
				{
					unk_0xF70578F5CD9822CB(unk_0xFC00F22E930BFD55(Local_103.f_2), false);
					unk_0x76CE32E50F0C5270(unk_0xFC00F22E930BFD55(Local_103.f_2), 1);
					unk_0x7FC263D448DC8CAC(unk_0xFC00F22E930BFD55(Local_103.f_2));
					unk_0x9FABD0AB045A5D6E(unk_0xFC00F22E930BFD55(Local_103.f_2), true, 1, 0);
					unk_0xFE8201EFB515D77B(unk_0xFC00F22E930BFD55(Local_103.f_2), 0);
					if (unk_0x854E8B95CE1C5D29("Not_Allow_As_Saved_Veh", 3))
					{
						unk_0x2EBF31F210B945F6(unk_0xFC00F22E930BFD55(Local_103.f_2), "Not_Allow_As_Saved_Veh", 1);
					}
					if (unk_0x854E8B95CE1C5D29("MPBitset", 3))
					{
						if (unk_0xA0EDFFB6CF5B314A(unk_0xFC00F22E930BFD55(Local_103.f_2), "MPBitset"))
						{
							iVar0 = unk_0xE48FAA8A938257C9(unk_0xFC00F22E930BFD55(Local_103.f_2), "MPBitset");
						}
						unk_0x8950ED5730F62EE8(&iVar0, 10);
						unk_0x2EBF31F210B945F6(unk_0xFC00F22E930BFD55(Local_103.f_2), "MPBitset", iVar0);
					}
					if (Local_103.f_12 == 0)
					{
						if (unk_0xC92AA0DBDDDE8BB8(unk_0xFC00F22E930BFD55(Local_103.f_2)) < Local_103.f_14)
						{
							Local_103.f_14 = unk_0xC92AA0DBDDDE8BB8(unk_0xFC00F22E930BFD55(Local_103.f_2));
						}
					}
				}
			}
		}
	}
	if (!unk_0x22C3124A898FB82A(Local_103.f_2))
	{
		return 0;
	}
	return 1;
}

int func_22(var uParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	float fVar0;
	int iVar1;
	
	if (!unk_0xE96A50F1DE6657CB(iParam1))
	{
		return 0;
	}
	if (!unk_0x9907FB1F75C1A914(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == -32878452)
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		unk_0xB7350047030F7672(vParam2, fVar0, 0, 0, 0, 0, false, 0);
	}
	iVar1 = unk_0xC651C43AB13A15E5(iParam1, vParam2, fParam3, iParam5, iParam4, iParam12);
	if (unk_0x765F6FEEFF39224F(iVar1))
	{
		*uParam0 = unk_0x0C9AA119B878DDB0(iVar1);
		Global_2528542.f_6212 = iVar1;
		if (unk_0x22C3124A898FB82A(*uParam0))
		{
			if (bParam13)
			{
				unk_0xA6C43DE7267202AC(iVar1, 1);
			}
			unk_0xFE8201EFB515D77B(iVar1, iParam8);
			if (unk_0x0371ECBEC27AF4BE(iVar1))
			{
				if (bParam6)
				{
					unk_0x841CC2A685D6AF3C(*uParam0, 1);
				}
				else
				{
					unk_0x841CC2A685D6AF3C(*uParam0, 0);
				}
				if (bParam11)
				{
					unk_0x5A48E05E63034C1F(*uParam0, unk_0x95B959F18401C09A(), 1);
				}
			}
			unk_0x2D5A67427544788C(iVar1, bParam7);
			unk_0x720715BA9E55E55A(iVar1, 1);
			if (bParam10)
			{
				unk_0xCBE9DB870BCC6085(iVar1);
				unk_0xF49FF7B4A27C1B94(iVar1, 5, 5, 1f);
			}
			func_23(vParam2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_23(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_24(unk_0x95B959F18401C09A(), vParam0, iParam2) > -1)
	{
		if ((Global_2405071.f_2908[1 /*6*/].f_5 == iParam3 && Global_2405071.f_2908[1 /*6*/].f_4 == iParam2) && vdist(Global_2405071.f_2908[1 /*6*/], vParam0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2405071.f_2908[iVar0 /*6*/] = { Global_2405071.f_2908[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2405071.f_2908[1 /*6*/] = { vParam0 };
		Global_2405071.f_2908[1 /*6*/].f_3 = fParam1;
		Global_2405071.f_2908[1 /*6*/].f_4 = iParam2;
		Global_2405071.f_2908[1 /*6*/].f_5 = iParam3;
	}
}

int func_24(int iParam0, vector3 vParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam2)
			{
				vVar2 = { vParam1 };
				if (unk_0x7EECA16E87982278((Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - vVar2.z)) < 2f)
				{
					vVar2.z = Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (vdist(Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/], vVar2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

bool func_25(var uParam0, float fParam1)
{
	bool bVar0;
	int iVar1;
	var uVar2;
	vector3 vVar3;
	
	vVar3 = { func_41(unk_0x95B959F18401C09A()) };
	if (Local_103.f_12 == 1)
	{
		return 1;
	}
	if (!bVar0)
	{
		if (unk_0xA266A7B6EFD4FE4E(&vVar3, uParam0, &uVar2, 0f, 180f, 150f, 0, 1, 1))
		{
			unk_0x4CD58AFCE9FC3575(*uParam0, 1, uParam0, fParam1, &iVar1, 4, 3f, 0f);
			if (iVar1 >= 1)
			{
				if (unk_0x16E00F066AFFEA0D(-1367.557f, -3220.598f, 12.9448f, vVar3, 1) >= 600f && unk_0x16E00F066AFFEA0D(750f, -3200f, 6f, vVar3, 1) >= 700f)
				{
					if (iLocal_112 <= 5)
					{
						if (func_26(*uParam0, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
						{
							bVar0 = true;
						}
					}
					else
					{
						Local_103 = 4;
					}
				}
			}
		}
	}
	if (!bVar0)
	{
		iLocal_111 += 4;
		if (iLocal_111 >= 80)
		{
			iLocal_111 = 20;
			iLocal_112++;
		}
	}
	return bVar0;
}

int func_26(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	Global_2405071.f_2 = 0;
	if (fParam1 > 0f)
	{
		if (unk_0x7E0147E36EF8D6AC(vParam0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (unk_0xBEEA641EE4F42DBD(vParam0.x, vParam0.y, (vParam0.z + 1f), fParam2) || unk_0xBEEA641EE4F42DBD(vParam0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (unk_0xC106293D8BB9B710(vParam0, fParam3, iParam16))
		{
			return 0;
		}
	}
	Global_2405071.f_2++;
	if (bParam11)
	{
		if (unk_0x1D05F456626EB273(vParam0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405071.f_2++;
	if (fParam12 > 0f)
	{
		if (func_35(vParam0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_2405071.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_27(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2405071.f_2++;
	return 1;
}

int func_27(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_235(unk_0x95B959F18401C09A(), 1, 1))
		{
			if (!unk_0xBB5E373390A5F824())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0x16E00F066AFFEA0D(func_32(unk_0x95B959F18401C09A()), vParam0, 1) <= (fVar2 + fParam1))
				{
					if (unk_0x73E7A21FD53144AB(vParam0, fParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_235(iVar1, 1, 1))
		{
			if (!func_29(iVar1, 0) && unk_0xB4B29C6A8F481EEA(unk_0x95B959F18401C09A(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0x95B959F18401C09A()))
				{
					if ((func_28(iVar1) || !bParam8) && !Global_2424047[iVar1 /*416*/].f_259)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!unk_0x12D3B4C76D4AAB00(iVar1) == -1)
							{
								if (unk_0x12D3B4C76D4AAB00(iVar1) == unk_0x12D3B4C76D4AAB00(unk_0x95B959F18401C09A()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && unk_0x12D3B4C76D4AAB00(iVar1) != unk_0x12D3B4C76D4AAB00(unk_0x95B959F18401C09A()))) || unk_0x12D3B4C76D4AAB00(iVar1) == -1)
							{
								if (unk_0x16E00F066AFFEA0D(func_32(iVar1), vParam0, 1) <= (fVar2 + fParam1))
								{
									if (unk_0x0E3238518B355643(iVar1, vParam0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x12D3B4C76D4AAB00(iVar1) != iParam6 || unk_0x12D3B4C76D4AAB00(iVar1) == -1)
						{
							if (unk_0x16E00F066AFFEA0D(func_32(iVar1), vParam0, 1) <= (fVar2 + fParam1))
							{
								if (unk_0x0E3238518B355643(iVar1, vParam0, fParam1))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_28(int iParam0)
{
	if (unk_0x0A4B2B44CD064704(unk_0x378BD4B3881338C2(iParam0)) || Global_2424047[iParam0 /*416*/].f_245)
	{
		return 1;
	}
	return 0;
}

bool func_29(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x95B959F18401C09A())
	{
		bVar0 = func_30(-1, 0) == 8;
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

int func_30(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_31();
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

int func_31()
{
	return Global_1312745;
}

Vector3 func_32(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_34() && Global_1589819[iVar0 /*818*/].f_789) && !func_33(Global_1589819[iVar0 /*818*/].f_790))
	{
		return Global_1589819[iVar0 /*818*/].f_790;
	}
	return func_41(iParam0);
}

int func_33(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

var func_34()
{
	return Global_2448756.f_16;
}

int func_35(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && unk_0x95B959F18401C09A() != iVar1) || iParam6 == 0)
		{
			if (func_235(iVar1, bParam2, bParam3))
			{
				if (unk_0xB4B29C6A8F481EEA(unk_0x95B959F18401C09A(), iVar1))
				{
					if (!bParam5 || (!unk_0xBC2FC12AD0FBF72E(unk_0x378BD4B3881338C2(iVar1)) && func_28(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x12D3B4C76D4AAB00(unk_0x95B959F18401C09A()) != unk_0x12D3B4C76D4AAB00(iVar1))) || unk_0x12D3B4C76D4AAB00(unk_0x95B959F18401C09A()) == -1)
						{
							if (((unk_0x12D3B4C76D4AAB00(unk_0x95B959F18401C09A()) == -1 && uParam7) && bParam4) && func_36(iVar1))
							{
							}
							else if (unk_0x765F6FEEFF39224F(unk_0x378BD4B3881338C2(iVar1)))
							{
								if (unk_0x16E00F066AFFEA0D(func_41(iVar1), vParam0, 1) < fParam1)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_36(int iParam0)
{
	if (func_40(unk_0x95B959F18401C09A(), iParam0))
	{
		return 1;
	}
	Global_2505680 = { func_39(iParam0) };
	if (unk_0xFC40DD2526841632(&Global_2505680))
	{
		return 1;
	}
	if (func_37(unk_0x95B959F18401C09A(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_37(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_38(iParam0);
	if (!iVar0 == func_5())
	{
		if (iVar0 == func_38(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_38(int iParam0)
{
	if (iParam0 != func_5())
	{
		return Global_1626536[iParam0 /*603*/].f_11;
	}
	return func_5();
}

struct<13> func_39(int iParam0)
{
	struct<13> Var0;
	
	unk_0xBC1B3D38C4BB38F4(iParam0, &Var0, 13);
	return Var0;
}

int func_40(int iParam0, int iParam1)
{
	if (unk_0x062B7A5C795CB453())
	{
		Global_2505680 = { func_39(iParam0) };
		Global_2505693 = { func_39(iParam1) };
		if (unk_0x4A5CDD2BE8070A7F(&Global_2505680))
		{
			if (unk_0x4A5CDD2BE8070A7F(&Global_2505693))
			{
				unk_0xDD530AC51A578470(&Global_2505610, 35, &Global_2505680);
				unk_0xDD530AC51A578470(&Global_2505645, 35, &Global_2505693);
				if (Global_2505610 == Global_2505645)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

Vector3 func_41(int iParam0)
{
	return unk_0xFBB1F99A825CAB09(unk_0x378BD4B3881338C2(iParam0), 0);
}

bool func_42(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xB815670C37E03CDE(iParam0);
	return unk_0x5D98D654CDC2165A(iParam0);
}

int func_43(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0xEE14D9A9F531ADDC(unk_0x5009A219B22D2352(unk_0x78DCC5D0CB43DEBA(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_44(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x06C1EBC003C18F1F())
		{
			func_9(uParam0, 0, 0);
		}
	}
}

void func_45()
{
	switch (vLocal_105[unk_0x72B85B341ADBE9DE() /*3*/].f_2)
	{
		case 0:
			func_201();
			func_51();
			func_46();
			if (Local_103.f_42 > 0)
			{
				vLocal_105[unk_0x72B85B341ADBE9DE() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			func_222();
			break;
	}
}

void func_46()
{
	int iVar0;
	
	func_47(Local_103.f_3, &iLocal_113, -1082130432, 0, 0, 0, 0, -1, -1, 1);
	iVar0 = 0;
	while (iVar0 < Local_103.f_14)
	{
		func_47(Local_103.f_4[iVar0], &(Local_121[iVar0 /*8*/]), -1082130432, 0, 0, 0, 0, -1, -1, 1);
		iVar0++;
	}
	if (unk_0x0E4018692D92041D(Local_103.f_1, 0))
	{
		if (!unk_0x0E4018692D92041D(Local_103.f_1, 1) && !unk_0x0E4018692D92041D(vLocal_105[unk_0x72B85B341ADBE9DE() /*3*/].f_1, 3))
		{
			if (unk_0x22C3124A898FB82A(Local_103.f_3))
			{
				if (unk_0x6F3D61B58C7B4025(Local_103.f_3) || (!unk_0x5E2784BB00B20E8E(Local_103.f_3) && unk_0x06C1EBC003C18F1F()))
				{
					unk_0x0648A75D3F60E864(unk_0xBB28786B7F552D0B(Local_103.f_3), Global_1574990);
					unk_0x8950ED5730F62EE8(&(vLocal_105[unk_0x72B85B341ADBE9DE() /*3*/].f_1), 3);
				}
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (!unk_0x0E4018692D92041D(Local_103.f_1, (2 + iVar0)) && !unk_0x0E4018692D92041D(vLocal_105[unk_0x72B85B341ADBE9DE() /*3*/].f_1, (4 + iVar0)))
			{
				if (unk_0x22C3124A898FB82A(Local_103.f_4[iVar0]))
				{
					if (unk_0x6F3D61B58C7B4025(Local_103.f_4[iVar0]) || (!unk_0x5E2784BB00B20E8E(Local_103.f_4[iVar0]) && unk_0x06C1EBC003C18F1F()))
					{
						unk_0x0648A75D3F60E864(unk_0xBB28786B7F552D0B(Local_103.f_4[iVar0]), Global_1574990);
						if (!unk_0xBC2FC12AD0FBF72E(unk_0xBB28786B7F552D0B(Local_103.f_4[iVar0])))
						{
							unk_0x77631BBB824DF500(unk_0xBB28786B7F552D0B(Local_103.f_4[iVar0]), 100f, 0);
						}
						unk_0x8950ED5730F62EE8(&(vLocal_105[unk_0x72B85B341ADBE9DE() /*3*/].f_1), (4 + iVar0));
					}
				}
			}
			iVar0++;
		}
	}
}

void func_47(var uParam0, int iParam1, float fParam2, bool bParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, bool bParam9)
{
	if (unk_0x22C3124A898FB82A(uParam0))
	{
		if (func_50())
		{
			Global_2437364 = unk_0x95B959F18401C09A();
		}
		if (bParam3)
		{
			func_49(unk_0xBB28786B7F552D0B(uParam0), iParam1, 1, Global_2437364, iParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_49(unk_0xBB28786B7F552D0B(uParam0), iParam1, -1, Global_2437364, iParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (unk_0xE38E3CF1625A4145(*iParam1))
	{
		func_48(iParam1);
	}
}

void func_48(int iParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0xE38E3CF1625A4145(*iParam0))
	{
		unk_0x1ABDB383C83A336A(iParam0);
		bVar0 = true;
	}
	if (unk_0xE38E3CF1625A4145(iParam0->f_1))
	{
		unk_0x1ABDB383C83A336A(&(iParam0->f_1));
		bVar0 = true;
	}
	if (unk_0x765F6FEEFF39224F(iParam0->f_7))
	{
		if (!unk_0xD62C4419A41F106A(iParam0->f_7, 0))
		{
			if (unk_0x9FC2A869F7656459(iParam0->f_7))
			{
				unk_0xE7E396453CA1FDA4(iParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*iParam0 = { Var1 };
	}
}

int func_49(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
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

bool func_50()
{
	return Global_1312844;
}

void func_51()
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (unk_0x22C3124A898FB82A(Local_103.f_2))
	{
		if (!unk_0x0E4018692D92041D(vLocal_105[unk_0x72B85B341ADBE9DE() /*3*/].f_1, 0))
		{
			if (!unk_0x91D5C8283D19AF49(unk_0xFC00F22E930BFD55(Local_103.f_2), 0))
			{
			}
			if (unk_0xD62C4419A41F106A(unk_0xFC00F22E930BFD55(Local_103.f_2), 0))
			{
			}
			if (unk_0xD62C4419A41F106A(unk_0xFC00F22E930BFD55(Local_103.f_2), 0))
			{
				if (unk_0x95B959F18401C09A() == unk_0xED8CA182944FBFEA(Local_103.f_2, &uVar0))
				{
					func_194(2104, 1, -1);
					func_191(68, 1, -1);
					func_142(0, unk_0x33CD235DF1E6A94E(), "XPT_KAIE", -875716015, 1504756458, Global_262145.f_7994, 1, -1, 0, 0, 0);
					if (func_14())
					{
						func_129(86, "DSV_PASS0", 0, 0, -99);
					}
					else
					{
						func_129(86, "DSV_PASS1", 0, 0, -99);
					}
					iVar1 = Global_262145.f_7995;
					Global_2460813 = iVar1;
					func_76(&iVar1, 1);
					if (iVar1 > 0)
					{
						func_72(iVar1, 1, 1, 1092616192);
						if (func_71())
						{
							func_59(-1922554349, iVar1, &uVar2, 0, 0, 0);
						}
						else
						{
							unk_0xDE1422FA669581FD(iVar1, "AM_DESTROY_VEH", &uVar3);
						}
					}
					unk_0x8950ED5730F62EE8(&(vLocal_105[unk_0x72B85B341ADBE9DE() /*3*/].f_1), 0);
				}
			}
			else
			{
				if (!unk_0x0E4018692D92041D(Local_103.f_1, 0))
				{
					if (!unk_0x0E4018692D92041D(vLocal_105[unk_0x72B85B341ADBE9DE() /*3*/].f_1, 1))
					{
						if (func_58(unk_0x33CD235DF1E6A94E(), unk_0xFC00F22E930BFD55(Local_103.f_2), 1))
						{
							unk_0x8950ED5730F62EE8(&(vLocal_105[unk_0x72B85B341ADBE9DE() /*3*/].f_1), 1);
						}
					}
					if (!unk_0x0E4018692D92041D(vLocal_105[unk_0x72B85B341ADBE9DE() /*3*/].f_1, 2))
					{
						if (unk_0x91BBD269506D61D2(unk_0xFC00F22E930BFD55(Local_103.f_2), unk_0x33CD235DF1E6A94E(), 1))
						{
							unk_0x8950ED5730F62EE8(&(vLocal_105[unk_0x72B85B341ADBE9DE() /*3*/].f_1), 2);
						}
					}
				}
				if (func_235(unk_0x95B959F18401C09A(), 1, 1) && func_58(unk_0x33CD235DF1E6A94E(), unk_0xFC00F22E930BFD55(Local_103.f_2), 0))
				{
					if (!unk_0x0E4018692D92041D(Global_2528542.f_4583, 1))
					{
						unk_0x8950ED5730F62EE8(&(Global_2528542.f_4583), 1);
					}
				}
				else if (unk_0x0E4018692D92041D(Global_2528542.f_4583, 1))
				{
					unk_0xCE689A8E8C42ED78(&(Global_2528542.f_4583), 1);
				}
				func_52();
			}
		}
	}
}

void func_52()
{
	if (!unk_0x0E4018692D92041D(iLocal_106, 0))
	{
		if (func_57(27, -1) == 0)
		{
			if (func_235(unk_0x95B959F18401C09A(), 1, 1))
			{
				if (func_58(unk_0x33CD235DF1E6A94E(), unk_0xFC00F22E930BFD55(Local_103.f_2), 0))
				{
					if (func_6(&uLocal_122, 300000, 0))
					{
						func_55(27, 1, -1);
						unk_0x8950ED5730F62EE8(&iLocal_106, 0);
					}
				}
				else if (func_54(&uLocal_122))
				{
					func_53(&uLocal_122);
				}
			}
			else if (func_54(&uLocal_122))
			{
				func_53(&uLocal_122);
			}
		}
		else
		{
			unk_0x8950ED5730F62EE8(&iLocal_106, 0);
		}
	}
}

void func_53(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_54(var uParam0)
{
	return uParam0->f_1;
}

void func_55(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = Global_2573223[iParam0 /*3*/][func_56(iParam2)];
	unk_0x353711570A4FAE35(iVar0, iParam1, 1);
}

int func_56(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_31();
		if (iVar1 > -1)
		{
			Global_2539215 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2539215 = 1;
		}
	}
	return iVar0;
}

int func_57(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2573223[iParam0 /*3*/][func_56(iParam1)];
	if (unk_0x0F0A07F7B2FAAE06(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_58(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x765F6FEEFF39224F(iParam0) && !unk_0xD62C4419A41F106A(iParam0, 0))
	{
		if (unk_0x765F6FEEFF39224F(iParam1) && !unk_0xD62C4419A41F106A(iParam1, 0))
		{
			if (unk_0x10930B9CAD4111C2(iParam0, iParam1, iParam2))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_59(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_71())
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
		case 1850983186:
		case 763367758:
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
			if (iParam1 > 0)
			{
				func_60(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_60(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
			if (iParam1 > 0)
			{
				func_60(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -1693570755:
			func_60(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
		case 1727256317:
		case -2017925037:
			func_60(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_60(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_71())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0xB412AA3DEE298A52(func_31()) || unk_0x2832F5CD8A109CD6())
		{
			Global_4264085 = 1;
			return 0;
		}
		if (Global_2459772)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4264086 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4263509[iVar2 /*84*/].f_65.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0x5787B31B4578002B(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0x64875ABCC43EF9A8(iVar4))
		{
			*uParam0 = func_67(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4263509[*uParam0 /*84*/].f_65.f_8 = 1;
					Global_4263509[*uParam0 /*84*/].f_65.f_12 = 1;
				}
			}
			Global_4264070 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4264084 = 1;
			Global_4264087 = iParam4;
			Global_4264089 = iParam3;
			Global_4264090 = 1;
			Global_4264088 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4264087 = iParam4;
			Global_4264089 = iParam3;
			Global_4264090 = 1;
			Global_4264088 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_66(1, iParam4);
			Global_4264084 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_61(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_61(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x8950ED5730F62EE8(&(Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_62(iParam0);
	}
}

void func_62(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_71())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_65(iParam0))
		{
			if (!bVar0)
			{
				unk_0x9CB3557CC6EF3B3E();
			}
		}
		else if (!bVar0)
		{
			unk_0x8ADF905D8AC780D1(Global_4263509[iParam0 /*84*/].f_65);
		}
		func_63(&(Global_4263509[iParam0 /*84*/]));
	}
}

void func_63(var uParam0)
{
	uParam0->f_65 = 0;
	uParam0->f_65 = 2147483647;
	uParam0->f_65.f_1 = 0;
	uParam0->f_65.f_2 = 0;
	uParam0->f_65.f_3 = -1593119440;
	uParam0->f_65.f_4 = -2085313189;
	uParam0->f_65.f_5 = 0;
	uParam0->f_65.f_6 = 1227573907;
	uParam0->f_65.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	func_64(&(uParam0->f_13));
	func_64(&(uParam0->f_13.f_13));
	StringCopy(&(uParam0->f_13.f_26), "", 32);
	StringCopy(&(uParam0->f_13.f_34), "", 24);
	StringCopy(&(uParam0->f_13.f_40), "", 16);
	StringCopy(&(uParam0->f_13.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_65.f_8 = 0;
	uParam0->f_65.f_9 = 0;
	uParam0->f_65.f_10 = 0;
	uParam0->f_65.f_11 = 0;
	uParam0->f_65.f_13 = 0;
	uParam0->f_65.f_12 = 0;
	uParam0->f_65.f_14 = 0;
	uParam0->f_65.f_15 = 0;
	uParam0->f_65.f_16 = 0;
	uParam0->f_65.f_18 = 0;
}

void func_64(var uParam0)
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

int func_65(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263509[iParam0 /*84*/].f_65.f_5 == 1;
	}
	return 0;
}

void func_66(int iParam0, int iParam1)
{
	Global_2460949 = iParam1;
	Global_2460948 = iParam0;
}

int func_67(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263509[iVar0 /*84*/].f_65.f_2 == 0)
		{
			if (!func_71())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4263509[iVar0 /*84*/].f_65.f_2 = 1;
			Global_4263509[iVar0 /*84*/].f_65.f_1 = iParam5;
			Global_4263509[iVar0 /*84*/].f_65.f_3 = iParam1;
			Global_4263509[iVar0 /*84*/].f_65.f_4 = iParam2;
			Global_4263509[iVar0 /*84*/].f_65.f_7 = iParam3;
			Global_4263509[iVar0 /*84*/].f_65.f_5 = 0;
			Global_4263509[iVar0 /*84*/].f_65 = iParam0;
			Global_4263509[iVar0 /*84*/].f_65.f_6 = iParam4;
			Global_4263509[iVar0 /*84*/].f_65.f_11 = uParam8;
			Global_4263509[iVar0 /*84*/].f_65.f_10 = iParam7;
			Global_4263509[iVar0 /*84*/].f_65.f_13 = iParam9;
			Global_4263509[iVar0 /*84*/].f_65.f_12 = 0;
			Global_4263509[iVar0 /*84*/].f_65.f_14 = unk_0xE77FA521699F639C();
			Global_4263509[iVar0 /*84*/].f_65.f_18 = 0;
			Global_4264070 = 0;
			if (bParam6)
			{
				Global_4263509[iVar0 /*84*/].f_65.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_68(Global_4263509[iVar0 /*84*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_68(struct<66> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	vector3 vVar0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	vVar0.f_2 = 2147483647;
	vVar0.x = 1803946278;
	vVar0.y = unk_0x95B959F18401C09A();
	vVar0.f_2 = { Param0.f_65 };
	vVar0.f_2.f_32 = iParam19;
	iVar1 = func_70(vVar0.y);
	if ((Global_262145.f_23434 && !Global_262145.f_23435) && !Global_262145.f_23436)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_69();
		unk_0x09269A9CFC145847(1, &vVar0, 35, iVar1);
	}
}

void func_69()
{
	unk_0x8F59DE352CFE248B("AM_ARENA_SHP");
}

var func_70(int iParam0)
{
	var uVar0;
	
	unk_0x8950ED5730F62EE8(&uVar0, iParam0);
	return uVar0;
}

int func_71()
{
	if (unk_0x4CE1DD5CFC1F941E())
	{
		return unk_0xFCAD2CB678396284();
	}
	return 0;
}

void func_72(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_73(iParam0, iParam1, iParam2, fParam3);
}

void func_73(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_74(iParam0, iParam1, iParam2, fParam3);
}

void func_74(int iParam0, int iParam1, int iParam2, float fParam3)
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
	Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_211.f_4 = iVar1;
	Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_211.f_3 = (Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_211.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_75(iVar1, 0);
	}
}

void func_75(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_76(var uParam0, int iParam1)
{
	int iVar0;
	
	if (*uParam0 > 0)
	{
		if (!func_128())
		{
			if (func_127(0))
			{
				if (!func_123(0))
				{
					if (unk_0xC4DEA49C5B465481(func_122()))
					{
						if (func_121() == 100)
						{
							iVar0 = *uParam0;
							*uParam0 = 0;
						}
						else
						{
							iVar0 = ((*uParam0 / 100) * func_121());
							*uParam0 = (*uParam0 - iVar0);
						}
						func_119(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_81("GB_BCUT_TICK1", func_122(), iVar0, 0, 0, 1, 1);
						}
						func_80(20);
						func_77(func_122(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_77(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_235(iParam0, 0, 1))
	{
		Var0 = 614714962;
		Var0.f_1 = unk_0x95B959F18401C09A();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_79(iParam0);
		func_78(&(Var0.f_6), &(Var0.f_7));
		unk_0x09269A9CFC145847(1, &Var0, 8, func_70(iParam0));
	}
}

void func_78(var uParam0, var uParam1)
{
	*uParam0 = Global_1645834.f_9;
	*uParam1 = Global_1645834.f_10;
}

var func_79(int iParam0)
{
	return Global_1626536[iParam0 /*603*/].f_529;
}

void func_80(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x8950ED5730F62EE8(&(Global_2528542.f_4889.f_7[iVar0]), iVar1);
}

int func_81(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0xB4B29C6A8F481EEA(unk_0x95B959F18401C09A(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0xEEF8394DB3D3DFA1(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0xEEF8394DB3D3DFA1(iParam1), 64);
		}
		if (unk_0x786AF4A44E1B5B4B(&Var1))
		{
		}
		unk_0x1F85AD4B26B92795(sParam0);
		unk_0x75D3F9044123D4F9(func_88(iParam1, -2, 1, 0, 0));
		unk_0xD61E5ED1D4E687A5(func_86(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x75D3F9044123D4F9(iParam3);
		}
		unk_0xE800DC85FDF60F85(iParam2);
		iVar0 = unk_0x9457C7E9A5E2BC86(0, 1);
		func_82(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_82(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_85() || !unk_0x289064CB38B560AA()) || !func_29(unk_0x95B959F18401C09A(), 0))
	{
		return;
	}
	iVar0 = func_83(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1665914.f_5[iVar0 /*53*/] = iParam0;
		Global_1665914.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1665914.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1665914.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1665914.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1665914.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1665914.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1665914.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1665914.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1665914.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1665914.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1665914.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_83(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1665914 - 1))
	{
		if (iParam0 > Global_1665914.f_5[iVar0 /*53*/].f_1)
		{
			func_84(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1665914++;
	if (Global_1665914 > 5)
	{
		Global_1665914 = 5;
		return Global_1665914;
	}
	return (Global_1665914 - 1);
}

void func_84(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1665914.f_5[iVar0 /*53*/] = { Global_1665914.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_85()
{
	return unk_0xE9D7B652961D4AA3(-1762644250);
}

var func_86(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_87(&cVar0);
}

var func_87(char[4] cParam0)
{
	return cParam0;
}

int func_88(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_117(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = unk_0x12D3B4C76D4AAB00(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_133551[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_117(unk_0x95B959F18401C09A()) || (func_116() && func_115())) && !unk_0x0E4018692D92041D(Global_2528542.f_4582, 31)) && !bParam4)
	{
		iVar1 = func_114();
		if (unk_0x765F6FEEFF39224F(iVar1))
		{
			if (unk_0xE09156665EC2D83B(iVar1))
			{
				if (unk_0x5C7617A25D50AAE9(iVar1) != -1)
				{
					if (func_235(unk_0x5C7617A25D50AAE9(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x289064CB38B560AA()) && iParam1 < 4)
						{
							if (Global_4456448.f_133551[iParam1] != -1)
							{
								return func_112(iParam1, iParam0, 0);
							}
							else
							{
								return func_101(iParam0, unk_0x5C7617A25D50AAE9(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_101(iParam0, unk_0x5C7617A25D50AAE9(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x289064CB38B560AA()) && iParam1 < 4)
			{
				if (Global_4456448.f_133551[iParam1] != -1)
				{
					return func_112(iParam1, iParam0, 0);
				}
				else
				{
					return func_89(0, -1, 0);
				}
			}
			else
			{
				return func_89(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x289064CB38B560AA()) && iParam1 < 4)
	{
		if (Global_4456448.f_133551[iParam1] != -1)
		{
			return func_112(iParam1, iParam0, 0);
		}
		else
		{
			return func_101(iParam0, unk_0x95B959F18401C09A(), iParam1, bParam2, bParam3);
		}
	}
	return func_101(iParam0, unk_0x95B959F18401C09A(), iParam1, bParam2, bParam3);
}

int func_89(bool bParam0, int iParam1, bool bParam2)
{
	return func_90(unk_0x95B959F18401C09A(), bParam0, iParam1, bParam2);
}

int func_90(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0xC4DEA49C5B465481(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x12D3B4C76D4AAB00(iParam0);
	if ((func_100() || (func_99() && func_97())) && Global_1382745.f_1)
	{
		if (bParam1)
		{
			return func_96(iParam2, iVar0);
		}
		else
		{
			return func_96(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_95(iVar0, iParam2, 0) && !unk_0x0E4018692D92041D(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_94(1);
				}
				else
				{
					return func_94(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0x0E4018692D92041D(Global_4456448.f_4, 20))
			{
				return func_91(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_91(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_94(1);
	}
	return func_94(0);
}

int func_91(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_93(iParam0, iParam1, iParam3);
	if (func_92(Global_4456448.f_138474, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_92(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4456448.f_161209 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_8910[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_93(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_95(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_94(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_95(int iParam0, int iParam1, int iParam2)
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
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 0);
				
				case 1:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 1);
				
				case 2:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 2);
				
				case 3:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 4);
				
				case 1:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 5);
				
				case 2:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 6);
				
				case 3:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 8);
				
				case 1:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 9);
				
				case 2:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 10);
				
				case 3:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 12);
				
				case 1:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 13);
				
				case 2:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 14);
				
				case 3:
					return unk_0x0E4018692D92041D(Global_4456448.f_55, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_96(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_93(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

bool func_97()
{
	if (func_98())
	{
		return 1;
	}
	return unk_0x0E4018692D92041D(Global_4456448.f_165254, 4);
}

bool func_98()
{
	return unk_0x0E4018692D92041D(Global_4456448.f_154961, 12);
}

bool func_99()
{
	if (unk_0x289064CB38B560AA())
	{
		return unk_0x0E4018692D92041D(Global_4456448.f_165254, 0);
	}
	return ((unk_0x0E4018692D92041D(Global_4456448.f_165254, 0) || Global_1648547) && unk_0x1BCDA92AD0A7835B(joaat("fm_deathmatch_creator")) > 0);
}

int func_100()
{
	if (func_98() && unk_0x289064CB38B560AA())
	{
		return 1;
	}
	return 0;
}

int func_101(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x12D3B4C76D4AAB00(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1589819[unk_0x95B959F18401C09A() /*818*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1589819[iVar2 /*818*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_109(1))
			{
				iVar3 = func_106(iParam0);
				if (!iVar3 == -1)
				{
					return func_104(iVar3);
				}
			}
			if ((func_103(iParam1, iParam0, iVar0, 0) && !unk_0x0E4018692D92041D(Global_4456448.f_15, 18)) || ((func_95(unk_0x12D3B4C76D4AAB00(iParam1), unk_0x12D3B4C76D4AAB00(iParam0), 0) && unk_0x0E4018692D92041D(Global_4456448.f_15, 23)) && !unk_0x0E4018692D92041D(Global_4456448.f_15, 18)))
			{
				return func_94(1);
			}
			else if (unk_0x0E4018692D92041D(Global_4456448.f_15, 26))
			{
				return func_102(1);
			}
			else
			{
				return func_90(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574400 || Global_1574391) || Global_1589819[iParam0 /*818*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574400 == 1 && Global_1574410 == 0))
			{
				return func_94(1);
			}
			else
			{
				return func_90(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574395 && Global_1573892.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_106(iParam0);
	if (!iVar4 == -1)
	{
		return func_104(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_102(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_103(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x12D3B4C76D4AAB00(iParam0) == -1 && unk_0x12D3B4C76D4AAB00(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x12D3B4C76D4AAB00(iParam0) == unk_0x12D3B4C76D4AAB00(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x12D3B4C76D4AAB00(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x12D3B4C76D4AAB00(iParam0) == iParam2;
	}
	return unk_0x12D3B4C76D4AAB00(iParam0) == iParam2;
}

int func_104(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_105(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_105(int iParam0)
{
	return Global_2417757.f_2105.f_44[iParam0 /*2*/].f_1;
}

int func_106(int iParam0)
{
	if (!iParam0 == func_5())
	{
		if (func_107(iParam0, 1))
		{
			return Global_2417757.f_2105.f_11[func_38(iParam0)];
		}
	}
	return -1;
}

bool func_107(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_108(iParam0))
		{
			return 0;
		}
	}
	return Global_1626536[iParam0 /*603*/].f_11 != func_5();
}

int func_108(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (Global_1626536[iParam0 /*603*/].f_11 != func_5())
		{
			return Global_1626536[iParam0 /*603*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_109(int iParam0)
{
	if ((func_111() || func_110()) || (func_34() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_110()
{
	return Global_2448756.f_15;
}

var func_111()
{
	return Global_2448756.f_14;
}

int func_112(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969025.f_13[iParam0];
	if (func_109(1))
	{
		iVar2 = func_106(iParam1);
		if (!iVar2 == -1)
		{
			return func_104(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0x0E4018692D92041D(Global_4456448.f_105[iParam0 /*11309*/].f_5586[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_5())
	{
		if (Global_4456448.f_133551[iParam0] != -1 && Global_4456448.f_133551[iParam0] <= 4)
		{
			if (Global_4456448.f_133551[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_133551[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_133551[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_133551[iParam0] == 4)
			{
				if (unk_0x0E4018692D92041D(Global_4456448.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4456448.f_133551[iParam0];
			}
		}
		else
		{
			iVar0 = func_90(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0x0E4018692D92041D(Global_4456448.f_21, 13))
		{
			iVar0 = func_113(iParam0);
		}
		if (unk_0x0E4018692D92041D(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (unk_0x0E4018692D92041D(Global_4456448.f_15, 26) && !func_95(iParam0, unk_0x12D3B4C76D4AAB00(iParam1), 0))
		{
			iVar0 = func_102(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_113(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_161253;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_161254;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_161255;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_161256;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_114()
{
	return Global_2359302.f_2;
}

bool func_115()
{
	return unk_0x0E4018692D92041D(Global_2359302, 4);
}

bool func_116()
{
	return unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_39.f_18, 14);
}

int func_117(int iParam0)
{
	if (func_29(iParam0, 0))
	{
		return 1;
	}
	if (func_118())
	{
		if (iParam0 == unk_0x95B959F18401C09A())
		{
			return 1;
		}
	}
	if (unk_0x0E4018692D92041D(Global_2424047[iParam0 /*416*/].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_118()
{
	return unk_0x0E4018692D92041D(Global_2359302, 3);
}

void func_119(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_120(1);
	}
	else
	{
		iVar1 = func_120(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_120(bool bParam0)
{
	if (bParam0)
	{
		return round((0.05f * 100f));
	}
	return Global_262145.f_12281;
}

int func_121()
{
	return Global_262145.f_12280;
}

int func_122()
{
	return Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11;
}

bool func_123(bool bParam0)
{
	return func_124(unk_0x95B959F18401C09A(), bParam0);
}

int func_124(int iParam0, bool bParam1)
{
	return func_125(iParam0, bParam1, 1);
}

int func_125(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_5())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_126(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1626536[iParam0 /*603*/].f_11;
	if (iVar0 != func_5() && Global_1626536[iVar0 /*603*/].f_11.f_447 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_126(int iParam0, int iParam1)
{
	if (iParam0 != func_5())
	{
		if (Global_1626536[iParam0 /*603*/].f_11 != func_5())
		{
			if (Global_1626536[iParam0 /*603*/].f_11 == iParam0 && Global_1626536[iParam0 /*603*/].f_11.f_447 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_127(bool bParam0)
{
	return func_107(unk_0x95B959F18401C09A(), bParam0);
}

bool func_128()
{
	return func_108(unk_0x95B959F18401C09A());
}

void func_129(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4)
{
	func_130(1, iParam0, sParam1, sParam2, bParam3, iParam4);
}

void func_130(int iParam0, var uParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)
{
	var uVar0;
	bool bVar1;
	
	uVar0 = uParam1;
	bVar1 = false;
	func_131(iParam0, sParam2, uVar0, bVar1, sParam3, bParam4, iParam5);
}

void func_131(var uParam0, char* sParam1, var uParam2, bool bParam3, char* sParam4, bool bParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x786AF4A44E1B5B4B(sParam1))
	{
		return;
	}
	if (unk_0x85731B98C6C759D5(sParam1) > 15)
	{
		return;
	}
	if (!unk_0x786AF4A44E1B5B4B(sParam4))
	{
		if (unk_0x85731B98C6C759D5(sParam4) > 31)
		{
			return;
		}
	}
	iVar0 = func_140();
	if (iVar0 == -1)
	{
		return;
	}
	func_139(iVar0);
	func_138(iVar0, uParam0);
	func_137(iVar0, uParam2, bParam3);
	func_136(iVar0, sParam1);
	if (unk_0x786AF4A44E1B5B4B(sParam4) && iParam6 == -99)
	{
		return;
	}
	func_135(iVar0);
	if (!unk_0x786AF4A44E1B5B4B(sParam4))
	{
		func_133(iVar0, sParam4, bParam5);
	}
	if (!iParam6 == -99)
	{
		func_132(iVar0, iParam6);
	}
}

void func_132(int iParam0, int iParam1)
{
	Global_1365424.f_59[iParam0 /*16*/].f_15 = iParam1;
}

void func_133(int iParam0, char* sParam1, bool bParam2)
{
	StringCopy(&(Global_1365424.f_59[iParam0 /*16*/].f_7), sParam1, 32);
	if (!bParam2)
	{
		return;
	}
	func_134(iParam0);
}

void func_134(int iParam0)
{
	unk_0x8950ED5730F62EE8(&(Global_1365424.f_59[iParam0 /*16*/]), 5);
}

void func_135(int iParam0)
{
	unk_0x8950ED5730F62EE8(&(Global_1365424.f_59[iParam0 /*16*/]), 4);
}

void func_136(int iParam0, char* sParam1)
{
	struct<4> Var0;
	
	StringCopy(&Var0, sParam1, 16);
	Global_1365424.f_59[iParam0 /*16*/].f_3 = { Var0 };
}

void func_137(int iParam0, var uParam1, bool bParam2)
{
	Global_1365424.f_59[iParam0 /*16*/].f_2 = uParam1;
	if (bParam2)
	{
		unk_0x8950ED5730F62EE8(&(Global_1365424.f_59[iParam0 /*16*/]), 2);
		unk_0xCE689A8E8C42ED78(&(Global_1365424.f_59[iParam0 /*16*/]), 3);
	}
	else
	{
		unk_0x8950ED5730F62EE8(&(Global_1365424.f_59[iParam0 /*16*/]), 3);
		unk_0xCE689A8E8C42ED78(&(Global_1365424.f_59[iParam0 /*16*/]), 2);
	}
}

void func_138(int iParam0, var uParam1)
{
	Global_1365424.f_59[iParam0 /*16*/].f_1 = uParam1;
}

void func_139(int iParam0)
{
	unk_0x8950ED5730F62EE8(&(Global_1365424.f_59[iParam0 /*16*/]), 0);
}

int func_140()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_141(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_141(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_1365424.f_59[iParam0 /*16*/], 0);
}

int func_142(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_143(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_143(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_153(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x765F6FEEFF39224F(iParam1))
		{
			if (unk_0x068481DAF84B9654(iParam1))
			{
				iVar1 = unk_0x22B02EC53152632C(iParam1);
				func_149(unk_0x61B226C460A8FCC2(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_144(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_144(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	vector3 vVar0;
	
	vVar0 = { func_147(iParam0, 1) };
	if (iParam0 == func_146(unk_0x33CD235DF1E6A94E()))
	{
		func_145(1);
	}
	func_149(vVar0, iParam1, 0, sParam2, iParam3);
}

void func_145(int iParam0)
{
	Global_2437364.f_1890 = iParam0;
}

int func_146(int iParam0)
{
	return iParam0;
}

Vector3 func_147(int iParam0, bool bParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	if (unk_0x51EBF893ED085755())
	{
		vVar1 = { unk_0x4AE56AB92160A4AB(2) };
	}
	if (iParam0 == func_148(unk_0x33CD235DF1E6A94E()) && unk_0xCB75C331DD5DDCCC(unk_0x7B9C4CEB6D33A226()) == 4)
	{
		vVar0 = { unk_0x2CA911E7569D12EA(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		vVar0 = { unk_0xFBB1F99A825CAB09(iParam0, 0) };
	}
	fVar2 = 0f;
	if (!unk_0xD62C4419A41F106A(iParam0, 0))
	{
		fVar2 = unk_0xC472E34C8FBEC678(iParam0);
		if (unk_0xCB75C331DD5DDCCC(unk_0x7B9C4CEB6D33A226()) == 4)
		{
			fVar2 = vVar1.z;
		}
	}
	unk_0xFEF5F9BB57EA2E8D(unk_0x541D5C57194E73C4(iParam0), &vVar3, &vVar4);
	if (bParam1)
	{
		fVar5 = (vVar4.z + 0.18f);
	}
	else
	{
		fVar5 = (vVar3.z + 0.18f);
	}
	vVar0 = { unk_0xCD1EDCB38767B47C(vVar0, fVar2, 0f, 0f, fVar5) };
	return vVar0;
}

int func_148(int iParam0)
{
	return iParam0;
}

void func_149(vector3 vParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2437364.f_1289[iVar0 /*30*/].f_6 == 0 || Global_2437364.f_1289[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2437364.f_1289[iVar1 /*30*/] = { vParam0 };
			Global_2437364.f_1289[iVar1 /*30*/].f_6 = 1;
			Global_2437364.f_1289[iVar1 /*30*/].f_4 = func_152(Global_2437364.f_1289[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2437364.f_1289[iVar1 /*30*/].f_7 = unk_0x78DCC5D0CB43DEBA();
			Global_2437364.f_1289[iVar1 /*30*/].f_3 = iParam1;
			Global_2437364.f_1289[iVar1 /*30*/].f_8 = iParam2;
			Global_2437364.f_1289[iVar1 /*30*/].f_9 = func_151();
			Global_2437364.f_1289[iVar1 /*30*/].f_10 = func_150();
			StringCopy(&(Global_2437364.f_1289[iVar1 /*30*/].f_22), sParam3, 16);
			Global_2437364.f_1289[iVar1 /*30*/].f_26 = unk_0x6985FC3098CCA0EB(unk_0x78DCC5D0CB43DEBA(), iParam4);
		}
	}
}

int func_150()
{
	if (Global_2437364.f_1890)
	{
		Global_2437364.f_1890 = 0;
		return 1;
	}
	Global_2437364.f_1890 = 0;
	return 0;
}

var func_151()
{
	var uVar0;
	
	uVar0 = Global_2437364.f_1892;
	Global_2437364.f_1892 = 1;
	return uVar0;
}

float func_152(vector3 vParam0, var uParam1, var uParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x16E00F066AFFEA0D(unk_0x69E12C716D4FB8BB(), vParam0, 1);
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

var func_153(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_154(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_154(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_190(unk_0x95B959F18401C09A()) || func_189(unk_0x95B959F18401C09A()))
	{
		if (Global_262145.f_9526 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9526;
		}
	}
	else if (func_187() || func_183(unk_0x95B959F18401C09A()))
	{
		if (Global_262145.f_22647 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22647;
		}
	}
	else if (Global_262145.f_6526 > 10000)
	{
		iVar2 = 10000;
	}
	else
	{
		iVar2 = Global_262145.f_6526;
	}
	if (func_182(sParam2))
	{
	}
	if (func_181())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_179(iVar1);
		fVar3 = (to_float(iVar1) * Global_262145.f_1);
		iVar1 = round(fVar3);
		if (bParam10)
		{
			iVar1 = func_178(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_176(0, &iVar1);
					break;
				
				case 3:
					func_176(1, &iVar1);
					break;
				
				case 1:
					func_174(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1680657)
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
			func_194(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_164((func_173(unk_0x95B959F18401C09A()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0xE62DD6141BEF78D0(iVar1, iParam8, iParam9);
				if (Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_39.f_2 != -1)
				{
					func_194(1165, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_159(iVar1);
				}
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_155((func_157(unk_0x95B959F18401C09A()) + iVar1));
			}
			else
			{
				func_155((func_157(unk_0x95B959F18401C09A()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_155(int iParam0)
{
	if (func_181())
	{
		Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_211.f_5 = iParam0;
		func_156(joaat("mpply_globalxp"), iParam0);
	}
}

void func_156(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x12B6E23F244DDB0F(iVar0, iParam1, 1);
	}
}

int func_157(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_235(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x95B959F18401C09A())
			{
				return func_158(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1589819[iParam0 /*818*/].f_211.f_5;
			}
		}
		else
		{
			return func_158(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_158(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0x75D54ED6C1AD1642(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_159(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_39(unk_0x95B959F18401C09A()) };
	if (unk_0x062B7A5C795CB453())
	{
		if (unk_0x4A5CDD2BE8070A7F(&Var0))
		{
			iVar1 = func_162(func_163(&Var0));
			if (iVar1 == 0)
			{
				func_161(&Global_1382581, iParam0);
				func_160(joaat("mpply_crew_local_xp_0"), Global_1382581);
			}
			else if (iVar1 == 1)
			{
				func_161(&Global_1382582, iParam0);
				func_160(joaat("mpply_crew_local_xp_1"), Global_1382582);
			}
			else if (iVar1 == 2)
			{
				func_161(&Global_1382583, iParam0);
				func_160(joaat("mpply_crew_local_xp_2"), Global_1382583);
			}
			else if (iVar1 == 3)
			{
				func_161(&Global_1382584, iParam0);
				func_160(joaat("mpply_crew_local_xp_3"), Global_1382584);
			}
			else if (iVar1 == 4)
			{
				func_161(&Global_1382585, iParam0);
				func_160(joaat("mpply_crew_local_xp_4"), Global_1382585);
			}
		}
	}
}

void func_160(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x12B6E23F244DDB0F(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1382576 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1382578 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1382578 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1382579 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1382580 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1382581 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1382582 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1382583 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1382584 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1382585 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1382586 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1382587 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1382588 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1382589 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1382590 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1382591 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1382592 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_161(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_162(int iParam0)
{
	if (iParam0 == Global_1382576)
	{
		return 0;
	}
	else if (iParam0 == Global_1382577)
	{
		return 1;
	}
	else if (iParam0 == Global_1382578)
	{
		return 2;
	}
	else if (iParam0 == Global_1382579)
	{
		return 3;
	}
	else if (iParam0 == Global_1382580)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_163(var uParam0)
{
	if (unk_0x062B7A5C795CB453())
	{
		if (unk_0x4A5CDD2BE8070A7F(uParam0))
		{
			return Global_2458541;
		}
	}
	return Global_2458541;
}

void func_164(int iParam0, int iParam1, int iParam2)
{
	if (func_181())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9494 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1382702[func_56(-1)])
				{
					unk_0xE62DD6141BEF78D0(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1382702[func_56(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9493 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0xE62DD6141BEF78D0(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9493 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0xE62DD6141BEF78D0(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_172(unk_0x95B959F18401C09A()))
		{
			Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_211.f_1 = iParam0;
			Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_211.f_6 = func_170(iParam0, 1);
		}
		func_169(639, iParam0, -1, 1);
		func_168(640, func_170(iParam0, 1), -1, 1, 0);
		Global_1382702[func_56(-1)] = iParam0;
		func_165(7, 0);
	}
}

void func_165(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_167(iParam0, iParam1))
	{
		iVar0 = func_166();
		Global_2458506[iVar0] = iParam0;
	}
}

int func_166()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2458506[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_167(int iParam0, var uParam1)
{
	if (Global_1312855)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312867) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_168(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_56(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x12B6E23F244DDB0F(iVar0, iParam1, iParam3);
	}
}

void func_169(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2539502[iParam0 /*3*/][func_56(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x12B6E23F244DDB0F(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1382642[func_56(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1382648[func_56(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1382654[func_56(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1382660[func_56(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1382618[func_56(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1382624[func_56(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1382630[func_56(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1382636[func_56(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1382594[func_56(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1382600[func_56(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1382606[func_56(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1382612[func_56(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1382666[func_56(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1382672[func_56(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1382678[func_56(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1382684[func_56(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1382690[func_56(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1382696[func_56(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1382702[func_56(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1382708[func_56(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2573513[0 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2573513[1 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2573513[2 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2573513[3 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 8956:
			Global_2573644[func_56(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1382714[func_56(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1382720[func_56(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1382726[func_56(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1382732[func_56(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2573577[0 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2573577[1 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2573577[2 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2573577[3 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2573577[4 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2573647[0 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2573647[1 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2573647[2 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2573647[3 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2573647[4 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2573663[0 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2573663[1 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2573663[2 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2573663[3 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2573663[4 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2573577[5 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2573513[4 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2573679[func_56(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2573688[func_56(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2573682[func_56(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2573691[func_56(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2573685[func_56(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2573694[func_56(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2573697[func_56(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2573577[6 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2573513[5 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2573577[7 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2573513[6 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2573577[8 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2573513[7 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2573577[9 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2573513[8 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2573577[10 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2573513[9 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2573577[11 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2573513[10 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2573577[12 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2573513[11 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2573577[13 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2573513[12 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2573577[14 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2573513[13 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2573577[15 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2573513[14 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2573577[16 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2573513[15 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2573577[17 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2573513[16 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2573513[17 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2573513[18 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2573513[19 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2573513[20 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2573700[func_56(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2573703[func_56(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2573706[func_56(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2573709[func_56(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2573712[func_56(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2573715[func_56(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2573718[func_56(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2573721[func_56(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2573724[func_56(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2573727[func_56(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2573730[func_56(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2573733[func_56(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2573736[func_56(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_170(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_171(iParam0, 0);
}

int func_171(int iParam0, int iParam1)
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
		if (Global_289559[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_289559[iVar3] < iParam0)
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

int func_172(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0x0E4018692D92041D(Global_2437364.f_1, iParam0);
	}
	return 1;
}

int func_173(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x95B959F18401C09A())
			{
				return Global_1382702[func_56(-1)];
			}
			else if (func_172(iParam0))
			{
				return Global_1589819[iParam0 /*818*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1382702[func_56(-1)];
	}
	return 0;
}

void func_174(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x12D3B4C76D4AAB00(unk_0x95B959F18401C09A());
	iVar0 = 0;
	while (iVar0 < unk_0xF839A4FC3E76D324())
	{
		iVar4 = unk_0xDD4FFAA17341D382(iVar0);
		if (unk_0x1B094AC15936B3DB(iVar4))
		{
			iVar5 = unk_0xEB9DC13235C0B345(iVar4);
			if (unk_0x12D3B4C76D4AAB00(iVar5) != -1)
			{
				if (unk_0x12D3B4C76D4AAB00(iVar5) == iVar1 || func_95(unk_0x12D3B4C76D4AAB00(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x95B959F18401C09A())
					{
						if (func_40(unk_0x95B959F18401C09A(), iVar5))
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
		iVar6 = round((func_175(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round((func_175(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_175(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_176(bool bParam0, int iParam1)
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
		while (iVar0 < unk_0xF839A4FC3E76D324())
		{
			iVar3 = iVar0;
			if (unk_0x1B094AC15936B3DB(iVar3))
			{
				iVar4 = unk_0xEB9DC13235C0B345(iVar3);
				if (func_235(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x95B959F18401C09A())
					{
						iVar1++;
						if (func_40(unk_0x95B959F18401C09A(), iVar4))
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
			if (func_235(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x95B959F18401C09A())
				{
					if (func_177(unk_0x95B959F18401C09A(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_40(unk_0x95B959F18401C09A(), iVar4))
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
		iVar5 = round((func_175(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round((func_175(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_177(int iParam0, int iParam1)
{
	return vdist(func_41(iParam0), func_41(iParam1));
	return 0f;
}

int func_178(int iParam0)
{
	int iVar0;
	
	if (unk_0x39DF7EBBDAD69F4B() != 3)
	{
		return *iParam0;
	}
	iVar0 = round((func_175(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_179(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0xEE14D9A9F531ADDC(iParam0) > func_173(unk_0x95B959F18401C09A()))
		{
			iParam0 = -func_173(unk_0x95B959F18401C09A());
		}
	}
	if (func_180(8000, 0, 0) > 0)
	{
		if (func_180(8000, 0, 0) < (iParam0 + func_173(unk_0x95B959F18401C09A())))
		{
			iParam0 = (func_180(8000, 0, 0) - func_173(unk_0x95B959F18401C09A()));
		}
	}
	return iParam0;
}

int func_180(int iParam0, bool bParam1, int iParam2)
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
	return Global_289559[iParam0];
}

int func_181()
{
	return 1;
}

int func_182(char* sParam0)
{
	if (unk_0x6D2E2622CA149402(sParam0))
	{
		return 1;
	}
	else if (unk_0xCE3CFF625BEBAA04(sParam0, "") || unk_0xCE3CFF625BEBAA04(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_183(int iParam0)
{
	return func_184(func_185(iParam0));
}

int func_184(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_185(int iParam0)
{
	if (func_186(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_33;
	}
	return -1;
}

int func_186(int iParam0, int iParam1)
{
	if (Global_1626536[iParam0 /*603*/].f_11.f_33 != -1 || (iParam1 && Global_1626536[iParam0 /*603*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_187()
{
	if (unk_0x289064CB38B560AA())
	{
		return func_34();
	}
	return func_188(Global_4456448.f_138474);
}

int func_188(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5003[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_189(int iParam0)
{
	return Global_2424047[iParam0 /*416*/].f_115 == 2;
}

bool func_190(int iParam0)
{
	return Global_2424047[iParam0 /*416*/].f_115 == 7;
}

void func_191(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_193(iParam0, func_56(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_192(iParam0, iVar0, iParam2);
}

void func_192(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = Global_2572886[iParam0 /*3*/][func_56(uParam2)];
	unk_0x12B6E23F244DDB0F(iVar0, iParam1, 1);
}

int func_193(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2572886[iParam0 /*3*/][func_56(iParam1)];
	if (unk_0x75D54ED6C1AD1642(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_194(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_196(iParam0, func_56(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_195(iParam0))
	{
		func_168(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_169(iParam0, iVar0, iParam2, 1);
	}
}

int func_195(int iParam0)
{
	if (Global_1382575)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 777:
			case 778:
			case 779:
			case 780:
			case 767:
			case 768:
			case 769:
			case 770:
			case 757:
			case 758:
			case 759:
			case 760:
			case 1303:
			case 7233:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 1236:
			case 1876:
			case 2267:
			case 2929:
			case 3058:
			case 8956:
			case 3053:
			case 3054:
			case 3055:
			case 3056:
			case 3057:
			case 3232:
			case 3234:
			case 3636:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3227:
			case 3221:
			case 3663:
			case 3664:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3689:
			case 3230:
			case 3229:
			case 4020:
			case 4019:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 6110:
			case 6109:
			case 6168:
			case 6167:
			case 6533:
			case 6532:
			case 6546:
			case 6545:
			case 6559:
			case 6558:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 7283:
			case 7285:
			case 7287:
			case 8282:
			case 8283:
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
			case 8010:
				return 1;
				break;
			}
	}
	return 0;
}

int func_196(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_56(iParam1)];
	if (unk_0x75D54ED6C1AD1642(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_197(char* sParam0, int iParam1)
{
	unk_0x37621D6689F9E3C3(sParam0);
	unk_0x092150016C06C431(0, 0, 1, iParam1);
}

int func_198()
{
	if (func_199(20))
	{
		return 1;
	}
	if (func_199(0))
	{
		return 1;
	}
	return 0;
}

bool func_199(int iParam0)
{
	int iVar0;
	
	iVar0 = func_196(2480, -1, 0);
	return unk_0x0E4018692D92041D(iVar0, iParam0);
}

bool func_200(int iParam0)
{
	return unk_0xEE14D9A9F531ADDC(unk_0x5009A219B22D2352(Global_2413879, unk_0x78DCC5D0CB43DEBA())) > iParam0;
}

void func_201()
{
	if (unk_0xE38E3CF1625A4145(iLocal_109))
	{
		if (func_198() || func_202())
		{
			unk_0xAE71BEA7BBBFB78F(iLocal_109, 0);
		}
		else
		{
			unk_0xAE71BEA7BBBFB78F(iLocal_109, 4);
		}
	}
	else if (unk_0x4F94F07DAD382CDA(Local_103.f_2))
	{
		if (!unk_0xD62C4419A41F106A(unk_0xFC00F22E930BFD55(Local_103.f_2), 0))
		{
			iLocal_109 = unk_0x8848A15CBDADDC60(unk_0xFC00F22E930BFD55(Local_103.f_2));
			if (!unk_0x9E374B5F44A76AE2(Local_103.f_10))
			{
				unk_0xA20C1DE21F2F071C(iLocal_109, 225);
			}
			else
			{
				unk_0xA20C1DE21F2F071C(iLocal_109, 348);
			}
			unk_0xB9E84A421C105943(iLocal_109, 1);
			unk_0x43598712EC9E921C(iLocal_109, 7000);
			unk_0xC51C58C963968740(iLocal_109, 6);
			unk_0x1C95CD840303FC37(iLocal_109, "DSV_BLIP");
			if (func_198())
			{
				unk_0xAE71BEA7BBBFB78F(iLocal_109, 0);
			}
		}
	}
}

var func_202()
{
	return Global_2416063.f_1690;
}

void func_203()
{
	if (Local_103.f_12 == 2)
	{
		if (unk_0x4F94F07DAD382CDA(Local_103.f_2))
		{
			if (unk_0x91D5C8283D19AF49(unk_0xFC00F22E930BFD55(Local_103.f_2), 0))
			{
				unk_0x99414FB2D30425C1(&uLocal_107);
				unk_0x94A82F47FF139F3D(0, unk_0xFC00F22E930BFD55(Local_103.f_2), Local_103.f_20, 7f, iLocal_110, 3f);
				unk_0x07C339D4328CA16C(0, 0, 0);
				unk_0x7E268975AF5EA74F(0, Local_103.f_24, 1f, -1, 1048576000, 0, Local_103.f_27);
				unk_0xC734F59A13D39AEF(uLocal_107);
			}
		}
	}
}

int func_204()
{
	return Local_103;
}

int func_205(int iParam0)
{
	return vLocal_105[iParam0 /*3*/];
}

bool func_206(int iParam0)
{
	return !func_207(iParam0);
}

int func_207(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_6551)
			{
				return 0;
			}
			if (func_209(unk_0x95B959F18401C09A(), 7))
			{
				return 0;
			}
			if (unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_23, 0) || unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_23, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_6552)
			{
				return 0;
			}
			if (func_209(unk_0x95B959F18401C09A(), 7))
			{
				return 0;
			}
			if (unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_23, 0) || unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_23, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_6553)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_6554)
			{
				return 0;
			}
			if (func_209(unk_0x95B959F18401C09A(), 7))
			{
				return 0;
			}
			if (unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_23, 0) || unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_23, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_208(4))
			{
				return 0;
			}
			if (func_209(unk_0x95B959F18401C09A(), 7))
			{
				return 0;
			}
			if (unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_23, 0) || unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_23, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_208(4))
			{
				return 0;
			}
			if (func_209(unk_0x95B959F18401C09A(), 7))
			{
				return 0;
			}
			if (unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_23, 0) || unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_23, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_208(4))
			{
				return 0;
			}
			if (func_209(unk_0x95B959F18401C09A(), 7))
			{
				return 0;
			}
			if (unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_23, 0) || unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_23, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_208(4))
			{
				return 0;
			}
			if (func_209(unk_0x95B959F18401C09A(), 7))
			{
				return 0;
			}
			if (unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_23, 0) || unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_23, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_208(4))
			{
				return 0;
			}
			if (func_209(unk_0x95B959F18401C09A(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_208(4))
			{
				return 0;
			}
			if (func_209(unk_0x95B959F18401C09A(), 7))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_208(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_235(unk_0x7C1C88877E8AAA50(iVar0), 0, 1))
		{
			if (unk_0x0E4018692D92041D(Global_2424047[iVar0 /*416*/].f_208, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_209(int iParam0, int iParam1)
{
	return unk_0x0E4018692D92041D(Global_2424047[iParam0 /*416*/].f_208, iParam1);
}

int func_210()
{
	var uVar0;
	
	func_218(&uVar0);
	if (Global_1312844 == 0)
	{
		if (!unk_0xB331FCEB94EB05C8())
		{
			return 1;
		}
	}
	if (func_217())
	{
		return 1;
	}
	if (Global_2460852)
	{
		return 1;
	}
	if (func_216())
	{
		return 1;
	}
	if (func_215(157))
	{
		if (!func_214())
		{
			return 1;
		}
	}
	if (func_215(155))
	{
		return 1;
	}
	if (!unk_0x43E505744A9B715D())
	{
		return 1;
	}
	if (func_211() != 0)
	{
		if (unk_0x1BCDA92AD0A7835B(func_211()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_211()
{
	switch (func_213())
	{
		case 0:
			return func_212();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_212()
{
	switch (Global_2460954)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_213()
{
	return Global_25765;
}

bool func_214()
{
	return Global_2448756.f_586;
}

int func_215(int iParam0)
{
	if (unk_0x3AE20F34FEE6C258(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_216()
{
	return Global_2458613;
}

bool func_217()
{
	return Global_2448756.f_581;
}

void func_218(var uParam0)
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
					func_219(iVar0);
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

void func_219(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x286A5F0670063839(1, iParam0, &vVar0, 3))
	{
		if (func_235(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x378BD4B3881338C2(vVar0.y);
			if (unk_0x765F6FEEFF39224F(iVar1))
			{
				if (unk_0xF0D230FB550CD6EB(iVar1, 0))
				{
					iVar2 = unk_0xF2C96862595654B4(iVar1, 0);
					if (unk_0x8F6C3DD0BB146CA3(iVar2, vVar0.z) && unk_0xE36862B47CD70685())
					{
						if (func_220(iVar2, &bVar3))
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

int func_220(int iParam0, var uParam1)
{
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		if (!unk_0x5A04E3BD0B5E7E49(iParam0))
		{
			if (unk_0xFB2062B880AF8075(iParam0))
			{
				if (!unk_0xFFB467183FEE27C4(unk_0x541D5C57194E73C4(iParam0)))
				{
					unk_0x0D21E1FDE062ED99(iParam0, 0, 1);
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

void func_221()
{
	wait(0);
}

void func_222()
{
	if (unk_0xE38E3CF1625A4145(iLocal_109))
	{
		unk_0x1ABDB383C83A336A(&iLocal_109);
	}
	func_225();
	if (func_204() == 4 && Local_103.f_10 != 0)
	{
		unk_0x8C4EA5F6857553AE(Local_103.f_10, 0);
	}
	unk_0xCE689A8E8C42ED78(&(Global_2528542.f_4583), 1);
	func_224(17, 0);
	func_223();
}

void func_223()
{
	unk_0x5894DC159447E10A();
}

void func_224(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x0E4018692D92041D(Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_208, iParam0))
		{
			unk_0x8950ED5730F62EE8(&(Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_208), iParam0);
		}
	}
	else if (unk_0x0E4018692D92041D(Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_208, iParam0))
	{
		unk_0xCE689A8E8C42ED78(&(Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_208), iParam0);
	}
}

void func_225()
{
	if (Local_103.f_12 == 2)
	{
		unk_0xA7A57E7757ED035E(&uLocal_107);
	}
}

void func_226(struct<21> Param0)
{
	func_233(func_234(Param0), Param0);
	unk_0x4F8CF72358604361(4);
	unk_0x9D34F024713B3952(1);
	func_232(0, -1, 0);
	unk_0x7643BB59992A9E6E(&Local_103, 49);
	unk_0x568D314D73140729(&vLocal_105, 97);
	if (!func_231())
	{
		func_222();
	}
	if (unk_0xB331FCEB94EB05C8())
	{
		unk_0x9980AE643A60F372(0);
		if (unk_0x06C1EBC003C18F1F())
		{
			func_227();
			Local_103.f_8 = func_5();
		}
		func_224(17, 1);
		vLocal_105[unk_0x72B85B341ADBE9DE() /*3*/] = 0;
	}
	else
	{
		func_222();
	}
}

void func_227()
{
	func_230();
	Local_103.f_12 = unk_0x9EC3B269A34A2BEE(0, 3);
	if (Local_103.f_12 == 1 || Local_103.f_12 == 2)
	{
		Local_103.f_15 = unk_0x9EC3B269A34A2BEE(0, 5);
		if (Local_103.f_12 == 1)
		{
			func_229(&(Local_103.f_16), &(Local_103.f_19));
		}
		else
		{
			func_229(&(Local_103.f_20), &(Local_103.f_23));
		}
		func_228();
	}
	Local_103.f_14 = unk_0x9EC3B269A34A2BEE(0, 3);
	if (Global_262145.f_7998 >= 0 && Global_262145.f_7998 < 5)
	{
		Local_103.f_13 = Global_262145.f_7998;
	}
	else
	{
		Local_103.f_13 = unk_0x9EC3B269A34A2BEE(0, 5);
	}
}

void func_228()
{
	switch (Local_103.f_15)
	{
		case 0:
			Local_103.f_24 = { -2195.782f, -420.2502f, 12.0819f };
			Local_103.f_27 = 117.3927f;
			Local_103.f_28[0 /*3*/] = { -2189.975f, -422.8502f, 12.0709f };
			Local_103.f_38[0] = 152.6699f;
			Local_103.f_28[1 /*3*/] = { -2184.031f, -400.948f, 12.2027f };
			Local_103.f_38[1] = 337.9892f;
			Local_103.f_28[2 /*3*/] = { -2175.282f, -426.3756f, 12.128f };
			Local_103.f_38[2] = 12.2947f;
			break;
		
		case 1:
			Local_103.f_24 = { -981.5774f, -1487.319f, 4.5867f };
			Local_103.f_27 = 300.0815f;
			Local_103.f_28[0 /*3*/] = { -977.8269f, -1494.568f, 4.5867f };
			Local_103.f_38[0] = 0.731f;
			Local_103.f_28[1 /*3*/] = { -977.7324f, -1491.717f, 4.5867f };
			Local_103.f_38[1] = 173.7717f;
			Local_103.f_28[2 /*3*/] = { -954.6693f, -1486.713f, 4.16f };
			Local_103.f_38[2] = 304.8721f;
			break;
		
		case 2:
			Local_103.f_24 = { 697.3923f, -1375.27f, 25.196f };
			Local_103.f_27 = 111.1953f;
			Local_103.f_28[0 /*3*/] = { 717.8624f, -1360.491f, 25.0461f };
			Local_103.f_38[0] = 55.1674f;
			Local_103.f_28[1 /*3*/] = { 703.9843f, -1361.094f, 24.6728f };
			Local_103.f_38[1] = 306.7133f;
			Local_103.f_28[2 /*3*/] = { 707.1707f, -1388.706f, 25.2759f };
			Local_103.f_38[2] = 204.5666f;
			break;
		
		case 3:
			Local_103.f_24 = { -258.5791f, 302.4799f, 91.0086f };
			Local_103.f_27 = 180.4109f;
			Local_103.f_28[0 /*3*/] = { -244.9193f, 299.3712f, 91.0424f };
			Local_103.f_38[0] = 43.0354f;
			Local_103.f_28[1 /*3*/] = { -248.7361f, 305.6155f, 91.1444f };
			Local_103.f_38[1] = 191.8736f;
			Local_103.f_28[2 /*3*/] = { -232.4524f, 299.4706f, 91.2088f };
			Local_103.f_38[2] = 199.8353f;
			break;
		
		case 4:
			Local_103.f_24 = { 862.7026f, 2875.148f, 56.9868f };
			Local_103.f_27 = 206.7217f;
			Local_103.f_28[0 /*3*/] = { 880.2893f, 2862.074f, 55.6697f };
			Local_103.f_38[0] = 191.0122f;
			Local_103.f_28[1 /*3*/] = { 865.2399f, 2853.536f, 56.2583f };
			Local_103.f_38[1] = 305.8056f;
			Local_103.f_28[2 /*3*/] = { 867.6559f, 2841.155f, 56.944f };
			Local_103.f_38[2] = 235.4465f;
			break;
	}
}

void func_229(var uParam0, var uParam1)
{
	switch (Local_103.f_15)
	{
		case 0:
			*uParam0 = { -2192.39f, -419.3334f, 12.0959f };
			*uParam1 = 71.2404f;
			break;
		
		case 1:
			*uParam0 = { -977.0366f, -1482.866f, 4.0099f };
			*uParam1 = 124.7807f;
			break;
		
		case 2:
			*uParam0 = { 702.5064f, -1370.477f, 25.0573f };
			*uParam1 = 279.9129f;
			break;
		
		case 3:
			*uParam0 = { -253.3582f, 299.4982f, 90.9592f };
			*uParam1 = 184.8169f;
			break;
		
		case 4:
			*uParam0 = { 868.8133f, 2868.439f, 55.9186f };
			*uParam1 = 200.5778f;
			break;
	}
}

void func_230()
{
	int iVar0;
	
	iVar0 = unk_0x9EC3B269A34A2BEE(0, 8);
	if (Global_262145.f_7997 >= 0 && Global_262145.f_7997 < 8)
	{
		iVar0 = Global_262145.f_7997;
	}
	switch (iVar0)
	{
		case 0:
			if (func_14())
			{
				Local_103.f_10 = joaat("baller");
			}
			else
			{
				Local_103.f_10 = joaat("zion");
			}
			if (func_14())
			{
				Local_103.f_11 = joaat("g_m_y_ballaorig_01");
			}
			else
			{
				Local_103.f_11 = joaat("g_m_y_ballaeast_01");
			}
			break;
		
		case 1:
			if (func_14())
			{
				Local_103.f_10 = joaat("emperor");
			}
			else
			{
				Local_103.f_10 = joaat("cavalcade2");
			}
			if (func_14())
			{
				Local_103.f_11 = joaat("g_m_y_mexgoon_02");
			}
			else
			{
				Local_103.f_11 = joaat("g_f_y_vagos_01");
			}
			break;
		
		case 2:
			if (func_14())
			{
				Local_103.f_10 = joaat("daemon");
			}
			else
			{
				Local_103.f_10 = joaat("gburrito");
			}
			if (func_14())
			{
				Local_103.f_11 = joaat("g_m_y_lost_01");
			}
			else
			{
				Local_103.f_11 = joaat("g_f_y_lost_01");
			}
			break;
		
		case 3:
			if (func_14())
			{
				Local_103.f_10 = joaat("pcj");
			}
			else
			{
				Local_103.f_10 = joaat("bjxl");
			}
			if (func_14())
			{
				Local_103.f_11 = joaat("g_m_m_chigoon_02");
			}
			else
			{
				Local_103.f_11 = joaat("g_m_m_chigoon_01");
			}
			break;
		
		case 4:
			if (func_14())
			{
				Local_103.f_10 = joaat("rocoto");
			}
			else
			{
				Local_103.f_10 = joaat("emperor");
			}
			if (func_14())
			{
				Local_103.f_11 = joaat("g_m_m_armgoon_01");
			}
			else
			{
				Local_103.f_11 = joaat("g_m_y_armgoon_02");
			}
			break;
		
		case 5:
			if (func_14())
			{
				Local_103.f_10 = joaat("journey");
			}
			else
			{
				Local_103.f_10 = joaat("sandking");
			}
			if (func_14())
			{
				Local_103.f_11 = joaat("a_m_m_hillbilly_02");
			}
			else
			{
				Local_103.f_11 = joaat("a_m_m_hillbilly_01");
			}
			break;
		
		case 6:
			if (func_14())
			{
				Local_103.f_10 = joaat("habanero");
			}
			else
			{
				Local_103.f_10 = joaat("sanchez2");
			}
			if (func_14())
			{
				Local_103.f_11 = joaat("g_m_y_salvagoon_01");
			}
			else
			{
				Local_103.f_11 = joaat("g_m_y_salvagoon_02");
			}
			break;
		
		case 7:
			if (func_14())
			{
				Local_103.f_10 = joaat("buffalo2");
			}
			else
			{
				Local_103.f_10 = joaat("dubsta");
			}
			if (func_14())
			{
				Local_103.f_11 = joaat("g_m_y_strpunk_01");
			}
			else
			{
				Local_103.f_11 = joaat("g_m_y_strpunk_02");
			}
			break;
	}
}

int func_231()
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
		if (func_217())
		{
			return 0;
		}
		if (func_215(155))
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

int func_232(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x52119E312E15DB07();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_223();
			}
			else
			{
				return 0;
			}
		}
		if (!func_50())
		{
			if (iParam0 == 0)
			{
				if (!unk_0xB331FCEB94EB05C8())
				{
					if (!bParam2)
					{
						func_223();
					}
					else
					{
						return 0;
					}
				}
				if (func_217())
				{
					if (!bParam2)
					{
						func_223();
					}
					else
					{
						return 0;
					}
				}
				if (func_215(155))
				{
					if (!bParam2)
					{
						func_223();
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
					func_223();
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
				func_223();
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
			func_223();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_233(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0xB331FCEB94EB05C8())
	{
		func_223();
	}
	unk_0x210E46A190FB3CB3(iParam0, 0, Param1.f_16);
}

int func_234(int iParam0)
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

int func_235(int iParam0, bool bParam1, bool bParam2)
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

