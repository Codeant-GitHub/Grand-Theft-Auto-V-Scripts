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
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	struct<65> Local_112 = { 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0 } ;
	struct<6> Local_113[32];
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	vector3 vLocal_117 = { 0f, 0f, 0f };
	struct<8> Local_118[15];
	vector3 vLocal_119 = { 0f, 0f, 0f };
	var uLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	vector3 vLocal_132 = { 0f, 0f, 0f };
	vector3 vLocal_133 = { 0f, 0f, 0f };
	var uLocal_134 = 0;
	int iLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	struct<21> Local_145 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	iLocal_110 = -1;
	iLocal_111 = -1;
	vLocal_117 = { 104.4489f, -1320.723f, 28.26478f };
	iLocal_125 = -1;
	iLocal_126 = -1;
	iLocal_128 = -1;
	iLocal_129 = -1;
	if (unk_0xB331FCEB94EB05C8() && func_1228(unk_0x95B959F18401C09A(), 0, 1))
	{
		func_1187(ScriptParam_145);
	}
	else
	{
		func_1134();
	}
	while (true)
	{
		func_1133();
		if (func_1126())
		{
			func_1134();
		}
		else if (func_1121(1))
		{
			func_1134();
		}
		Global_1669366.f_2 = Local_112.f_63;
		Global_1669366.f_3 = Local_112.f_64;
		switch (func_1120(unk_0x72B85B341ADBE9DE()))
		{
			case 0:
				if (func_1119() == 1)
				{
					if (func_1118())
					{
						if (unk_0x4F94F07DAD382CDA(Local_112.f_12))
						{
						}
						func_1117();
						if (func_1116())
						{
							func_1101(159, 1, -1, 0);
							unk_0x89D80FC214D65D3D(1);
						}
						else
						{
							func_1101(159, 0, -1, 0);
							if (unk_0x4F94F07DAD382CDA(Local_112.f_12))
							{
								unk_0x861C6D8520E774EA(unk_0xE4B835FDC8B9B086(Local_112.f_12), true, 1);
							}
						}
						if (func_1100() == 1)
						{
							unk_0xCA569B59B8B12D63("CS3_07_MPGates");
							unk_0x8950ED5730F62EE8(&iLocal_114, 4);
							unk_0x8C4EA5F6857553AE(joaat("rhino"), true);
						}
						else if (func_1100() == 2)
						{
							func_1099();
						}
						else if (func_1100() == 3)
						{
							func_1098();
						}
						if (func_1097(1))
						{
							unk_0x8950ED5730F62EE8(&iLocal_115, 5);
						}
						if (unk_0x4F94F07DAD382CDA(Local_112.f_12))
						{
							unk_0x3D258435016D9F74(unk_0xE4B835FDC8B9B086(Local_112.f_12), 1200);
						}
						func_1096();
						func_1089();
						Local_113[unk_0x72B85B341ADBE9DE() /*6*/] = 1;
					}
				}
				else if (func_1119() == 4)
				{
					Local_113[unk_0x72B85B341ADBE9DE() /*6*/] = 3;
				}
				break;
			
			case 1:
				if (func_1119() == 1)
				{
					func_1088();
					func_1080();
					func_393();
					func_382();
					if (func_1116() || func_381())
					{
						func_220(&(Global_1361808.f_534), &Global_1361808, 27, &(Global_1361808.f_1), &(Global_1361808.f_117), -1, 0, 0);
					}
				}
				else if (func_1119() == 4)
				{
					Local_113[unk_0x72B85B341ADBE9DE() /*6*/] = 3;
				}
				func_219();
				break;
			
			case 3:
				func_218(&(Local_112.f_52));
				if (func_217(&(Local_112.f_52)))
				{
					Local_113[unk_0x72B85B341ADBE9DE() /*6*/] = 4;
				}
				func_219();
				break;
			
			case 2:
				func_219();
				Local_113[unk_0x72B85B341ADBE9DE() /*6*/] = 4;
			
			case 4:
				func_1134();
				break;
		}
		if (unk_0x06C1EBC003C18F1F())
		{
			switch (func_1119())
			{
				case 0:
					if (func_1100() != -1)
					{
						if ((func_207() && func_49()) && func_26())
						{
							func_25();
							func_23();
							if (func_1100() == 3)
							{
								unk_0x8950ED5730F62EE8(&(Local_112.f_1), 6);
							}
							Local_112 = 1;
							Local_112.f_8 = unk_0x72B85B341ADBE9DE();
							Local_112.f_9 = unk_0x95B959F18401C09A();
							func_1101(159, 1, -1, 0);
							unk_0xDFDE4DC8546F54CF(&(Local_112.f_63), &(Local_112.f_64));
						}
					}
					break;
				
				case 1:
					func_14();
					func_13();
					func_4();
					if (func_2())
					{
						Local_112 = 4;
					}
					else if (func_1())
					{
						Local_112 = 4;
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
	if (Global_2528542.f_4889.f_36)
	{
		Global_2528542.f_4889.f_36 = 0;
		return 1;
	}
	return 0;
}

int func_2()
{
	if (func_3())
	{
		return 1;
	}
	if (unk_0x0E4018692D92041D(Local_112.f_1, 0))
	{
		return 1;
	}
	return 0;
}

int func_3()
{
	if (Local_112.f_51 > 0)
	{
		if (Local_112 != 4)
		{
		}
	}
	return 0;
}

void func_4()
{
	switch (Local_112.f_51)
	{
		case 0:
			Local_112.f_51 = 1;
			break;
		
		case 1:
			func_11();
			if (unk_0x0E4018692D92041D(Local_112.f_1, 7))
			{
				Local_112.f_51 = 2;
			}
			else if (unk_0x0E4018692D92041D(Local_112.f_1, 20))
			{
				if (Local_112.f_5 != -1)
				{
					Local_112.f_51 = 2;
				}
			}
			break;
		
		case 2:
			if (!unk_0x0E4018692D92041D(Local_112.f_1, 6))
			{
				if (unk_0x4F94F07DAD382CDA(Local_112.f_13[0]))
				{
					if (func_10(Local_112.f_13[0]))
					{
						unk_0x8950ED5730F62EE8(&(Local_112.f_1), 6);
					}
				}
			}
			func_11();
			break;
		
		case 3:
			break;
		
		case 4:
			break;
	}
	func_5();
}

void func_5()
{
	if (!unk_0x0E4018692D92041D(Local_112.f_1, 16))
	{
		if (!unk_0x0E4018692D92041D(Local_112.f_1, 20))
		{
			if (!func_9(&(Local_112.f_60)))
			{
				func_8(&(Local_112.f_60), 0, 0);
			}
			else if (func_6(&(Local_112.f_60), func_7(), 0))
			{
				unk_0x8950ED5730F62EE8(&(Local_112.f_1), 20);
			}
		}
	}
}

int func_6(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_8(uParam0, bParam2, 0);
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

int func_7()
{
	return 600000;
}

void func_8(var uParam0, bool bParam1, bool bParam2)
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

bool func_9(var uParam0)
{
	return uParam0->f_1;
}

int func_10(int iParam0)
{
	if (unk_0x22C3124A898FB82A(iParam0))
	{
		return unk_0xBC2FC12AD0FBF72E(unk_0xBB28786B7F552D0B(iParam0));
	}
	return 1;
}

void func_11()
{
	if (!func_9(&(Local_112.f_54)))
	{
		if (unk_0x0E4018692D92041D(Local_112.f_1, 2))
		{
			func_8(&(Local_112.f_54), 0, 0);
		}
	}
	else if (!unk_0x0E4018692D92041D(Local_112.f_1, 4))
	{
		if (!unk_0x0E4018692D92041D(Local_112.f_1, 3))
		{
			if (!unk_0x0E4018692D92041D(Local_112.f_1, 1))
			{
				if (func_6(&(Local_112.f_54), func_12(), 0))
				{
					unk_0x8950ED5730F62EE8(&(Local_112.f_1), 3);
				}
			}
		}
	}
}

int func_12()
{
	return Global_262145.f_12340;
}

void func_13()
{
	int iVar0;
	
	if (!unk_0x06C1EBC003C18F1F())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		switch (Local_112.f_35[iVar0])
		{
			case 0:
				if (unk_0x4F94F07DAD382CDA(Local_112.f_13[iVar0]))
				{
					if (func_1100() != 2)
					{
						Local_112.f_35[iVar0] = 3;
					}
					else
					{
						Local_112.f_35[iVar0] = 1;
					}
				}
				break;
			
			case 1:
				if (unk_0x0E4018692D92041D(Local_112.f_1, 11))
				{
					Local_112.f_35[iVar0] = 3;
				}
				else if (unk_0x0E4018692D92041D(Local_112.f_1, 12))
				{
					Local_112.f_35[iVar0] = 3;
				}
				else if (unk_0x0E4018692D92041D(Local_112.f_1, 13))
				{
					Local_112.f_35[iVar0] = 3;
				}
				else if (unk_0x0E4018692D92041D(Local_112.f_1, 14))
				{
					Local_112.f_35[iVar0] = 3;
				}
				break;
			
			case 3:
				break;
		}
		iVar0++;
	}
}

void func_14()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = -1;
	if (Local_112 != 4)
	{
		iVar3 = 0;
		while (iVar3 < 32)
		{
			iVar4 = unk_0x7C1C88877E8AAA50(iVar3);
			if (unk_0xC4DEA49C5B465481(iVar4))
			{
				if (unk_0x982A72D771CF4FE1(iVar4))
				{
					iLocal_116 = unk_0xF8E1DE22DEB7E100(iVar4);
					if (func_1228(iVar4, 1, 1))
					{
						func_15(iLocal_116, 0);
					}
					if (!unk_0x0E4018692D92041D(Local_112.f_1, 2))
					{
						unk_0x8950ED5730F62EE8(&(Local_112.f_1), 2);
					}
					if (!unk_0x0E4018692D92041D(Local_112.f_1, 7))
					{
						if (unk_0x0E4018692D92041D(Local_113[iLocal_116 /*6*/].f_1, 7))
						{
							unk_0x8950ED5730F62EE8(&(Local_112.f_1), 7);
						}
					}
					if (!unk_0x0E4018692D92041D(Local_112.f_1, 11))
					{
						if (unk_0x0E4018692D92041D(Local_113[iLocal_116 /*6*/].f_1, 12))
						{
							unk_0x8950ED5730F62EE8(&(Local_112.f_1), 11);
						}
					}
					if (!unk_0x0E4018692D92041D(Local_112.f_1, 12))
					{
						if (unk_0x0E4018692D92041D(Local_113[iLocal_116 /*6*/].f_1, 13))
						{
							unk_0x8950ED5730F62EE8(&(Local_112.f_1), 12);
						}
					}
					if (!unk_0x0E4018692D92041D(Local_112.f_1, 13))
					{
						if (unk_0x0E4018692D92041D(Local_113[iLocal_116 /*6*/].f_1, 14))
						{
							unk_0x8950ED5730F62EE8(&(Local_112.f_1), 13);
						}
					}
					if (!unk_0x0E4018692D92041D(Local_112.f_1, 14))
					{
						if (Local_113[iLocal_116 /*6*/].f_2 != 0)
						{
							unk_0x8950ED5730F62EE8(&(Local_112.f_1), 14);
						}
					}
					if (iVar0 == -1)
					{
						if (unk_0x0E4018692D92041D(Local_113[iLocal_116 /*6*/].f_1, 2))
						{
							iVar0 = iLocal_116;
						}
					}
					if (!unk_0x0E4018692D92041D(Local_112.f_1, 4))
					{
						if (!unk_0x0E4018692D92041D(Local_112.f_1, 1))
						{
							if (unk_0x0E4018692D92041D(Local_113[iLocal_116 /*6*/].f_1, 3))
							{
								Local_112.f_6 = iVar4;
								unk_0x8950ED5730F62EE8(&(Local_112.f_1), 1);
							}
						}
					}
					if (iVar1 == -1)
					{
						if (unk_0x0E4018692D92041D(Local_113[iLocal_116 /*6*/].f_1, 8))
						{
							iVar1 = iLocal_116;
						}
					}
					if (!unk_0x0E4018692D92041D(Local_112.f_1, 8))
					{
						if (unk_0x0E4018692D92041D(Local_113[iLocal_116 /*6*/].f_1, 9))
						{
							Local_112.f_6 = iVar4;
							unk_0x8950ED5730F62EE8(&(Local_112.f_1), 8);
						}
					}
					if (!unk_0x0E4018692D92041D(Local_112.f_1, 10))
					{
						if (unk_0x0E4018692D92041D(Local_113[iLocal_116 /*6*/].f_1, 11))
						{
							if (unk_0x0E4018692D92041D(Local_113[iLocal_116 /*6*/].f_1, 5))
							{
								Local_112.f_6 = iVar4;
							}
							unk_0x8950ED5730F62EE8(&(Local_112.f_1), 10);
						}
					}
					if (!unk_0x0E4018692D92041D(Local_112.f_1, 15))
					{
						if (unk_0x0E4018692D92041D(Local_113[iLocal_116 /*6*/].f_1, 15))
						{
							unk_0x8950ED5730F62EE8(&(Local_112.f_1), 15);
						}
					}
					if (!unk_0x0E4018692D92041D(Local_112.f_1, 18))
					{
						if (unk_0x0E4018692D92041D(Local_113[iLocal_116 /*6*/].f_1, 16))
						{
							unk_0x8950ED5730F62EE8(&(Local_112.f_1), 18);
						}
					}
					if (!unk_0x0E4018692D92041D(Local_112.f_1, 0))
					{
						if (!bVar2)
						{
							if ((((((((unk_0x0E4018692D92041D(Local_112.f_1, 1) || unk_0x0E4018692D92041D(Local_112.f_1, 3)) || unk_0x0E4018692D92041D(Local_112.f_1, 4)) || unk_0x0E4018692D92041D(Local_112.f_1, 5)) || unk_0x0E4018692D92041D(Local_112.f_1, 8)) || unk_0x0E4018692D92041D(Local_112.f_1, 9)) || unk_0x0E4018692D92041D(Local_112.f_1, 10)) || unk_0x0E4018692D92041D(Local_112.f_1, 15)) || unk_0x0E4018692D92041D(Local_112.f_1, 18))
							{
								if (!unk_0x0E4018692D92041D(Local_113[iLocal_116 /*6*/].f_1, 1))
								{
									bVar2 = true;
								}
							}
							else
							{
								bVar2 = true;
							}
						}
					}
				}
				else if (!unk_0x0E4018692D92041D(Local_112.f_1, 5))
				{
					if (Local_112.f_9 > -1)
					{
						if (iVar3 == Local_112.f_9)
						{
							unk_0x8950ED5730F62EE8(&(Local_112.f_1), 5);
						}
					}
				}
			}
			else if (!unk_0x0E4018692D92041D(Local_112.f_1, 5))
			{
				if (Local_112.f_9 > -1)
				{
					if (iVar3 == Local_112.f_9)
					{
						unk_0x8950ED5730F62EE8(&(Local_112.f_1), 5);
					}
				}
			}
			iVar3++;
		}
		if (!unk_0x0E4018692D92041D(Local_112.f_1, 1))
		{
			if (!unk_0x0E4018692D92041D(Local_112.f_1, 4))
			{
				if (Local_112.f_5 != iVar0)
				{
					Local_112.f_5 = iVar0;
					if (Local_112.f_5 == -1)
					{
					}
					else if (!unk_0x0E4018692D92041D(Local_112.f_1, 16))
					{
						unk_0x8950ED5730F62EE8(&(Local_112.f_1), 16);
					}
				}
			}
		}
		if (!unk_0x0E4018692D92041D(Local_112.f_1, 8))
		{
			if (Local_112.f_7 != iVar1)
			{
				Local_112.f_7 = iVar1;
				if (Local_112.f_7 == -1)
				{
				}
				else if (!unk_0x0E4018692D92041D(Local_112.f_1, 16))
				{
					unk_0x8950ED5730F62EE8(&(Local_112.f_1), 16);
				}
			}
		}
		if (!unk_0x0E4018692D92041D(Local_112.f_1, 0))
		{
			if (!bVar2)
			{
				unk_0x8950ED5730F62EE8(&(Local_112.f_1), 0);
			}
		}
	}
}

void func_15(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (func_1100() == 1)
	{
		if (!unk_0x0E4018692D92041D(Local_112.f_2, iParam0))
		{
			if (unk_0x4F94F07DAD382CDA(Local_112.f_29[iParam1]))
			{
				if (func_21(Local_112.f_29[iParam1]))
				{
					iVar0 = unk_0xEB9DC13235C0B345(unk_0xDD4FFAA17341D382(iParam0));
					if (!func_19(iVar0, 1))
					{
						bVar2 = true;
					}
					else if (Local_112.f_9 > -1)
					{
						iVar1 = unk_0x7C1C88877E8AAA50(Local_112.f_9);
						if (unk_0xC4DEA49C5B465481(iVar1))
						{
							if (!func_16(iVar0, iVar1, 1))
							{
								bVar2 = true;
							}
							else
							{
								unk_0x8950ED5730F62EE8(&(Local_112.f_2), iParam0);
							}
						}
					}
					if (bVar2)
					{
						unk_0x89F592DE615A3F69(unk_0xFC00F22E930BFD55(Local_112.f_29[iParam1]), iVar0, 1);
						unk_0x8950ED5730F62EE8(&(Local_112.f_2), iParam0);
					}
				}
			}
		}
	}
}

int func_16(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_18())
	{
		if (!bParam2)
		{
			if (func_17(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1626536[iParam0 /*603*/].f_11 != func_18())
		{
			return iParam1 == Global_1626536[iParam0 /*603*/].f_11;
		}
	}
	return 0;
}

int func_17(int iParam0, int iParam1)
{
	if (iParam1 != func_18())
	{
		if (iParam0 != func_18())
		{
			if (Global_1626536[iParam0 /*603*/].f_11 != func_18())
			{
				if (Global_1626536[iParam0 /*603*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

int func_18()
{
	return -1;
}

bool func_19(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_20(iParam0))
		{
			return 0;
		}
	}
	return Global_1626536[iParam0 /*603*/].f_11 != func_18();
}

int func_20(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (Global_1626536[iParam0 /*603*/].f_11 != func_18())
		{
			return Global_1626536[iParam0 /*603*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_21(int iParam0)
{
	if (unk_0x22C3124A898FB82A(iParam0))
	{
		return !func_22(unk_0xFC00F22E930BFD55(iParam0));
	}
	return 0;
}

int func_22(int iParam0)
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

void func_23()
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!unk_0x0E4018692D92041D(Local_112.f_1, 17))
	{
		vVar0 = { 200f, 200f, 200f };
		vVar1 = { func_24() };
		unk_0x5856B9BF2B4E98C4(vVar1 - vVar0, vVar1 + vVar0, false, 1);
		unk_0x8950ED5730F62EE8(&(Local_112.f_1), 17);
	}
}

Vector3 func_24()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = func_1100();
	iVar1 = func_25();
	vVar2 = { 0f, 0f, 0f };
	switch (iVar0)
	{
		case 1:
			switch (iVar1)
			{
				case 0:
					vVar2 = { -575.3725f, 5373.049f, 69.2404f };
					break;
				
				case 1:
					vVar2 = { -3172.135f, 1110.661f, 19.8375f };
					break;
				
				case 2:
					vVar2 = { 872.9173f, 2863.337f, 55.7587f };
					break;
			}
			break;
		
		case 0:
			switch (iVar1)
			{
				case 0:
					vVar2 = { 2308.704f, 4886.404f, 40.8082f };
					break;
				
				case 1:
					vVar2 = { 1209.813f, 1859.069f, 77.9116f };
					break;
				
				case 2:
					vVar2 = { -1928.495f, 2061.418f, 139.8375f };
					break;
			}
			break;
		
		case 2:
			switch (iVar1)
			{
				case 0:
					vVar2 = { -3020.817f, 84.6034f, 10.6835f };
					break;
				
				case 1:
					vVar2 = { -1041.637f, 796.9575f, 166.2528f };
					break;
				
				case 2:
					vVar2 = { 690.2265f, 602.1689f, 127.9112f };
					break;
			}
			break;
		
		case 3:
			switch (iVar1)
			{
				case 0:
					vVar2 = { 1530.058f, 1727.639f, 108.9429f };
					break;
				
				case 1:
					vVar2 = { 783.2252f, 1278.739f, 359.2967f };
					break;
				
				case 2:
					vVar2 = { -1796.565f, 407.1885f, 112.4107f };
					break;
			}
			break;
	}
	return vVar2;
}

int func_25()
{
	int iVar0;
	int iVar1;
	
	if (Local_112.f_4 != -1)
	{
		return Local_112.f_4;
	}
	iVar0 = 0;
	iVar1 = func_1100();
	switch (iVar1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			iVar0 = unk_0x9EC3B269A34A2BEE(0, 3);
			break;
	}
	Local_112.f_4 = iVar0;
	return Local_112.f_4;
}

int func_26()
{
	switch (Local_112.f_3)
	{
		case 1:
			func_28(0, joaat("rhino"), -2117.102f, 3292.854f, 31.8103f, 174.0669f, 0);
			break;
		
		case 2:
			func_28(0, joaat("fbi"), -1297.834f, -3399.368f, 12.9452f, 109.6593f, 0);
			func_28(1, joaat("superd"), -1303.505f, -3396.021f, 12.9452f, 152.3324f, 0);
			break;
		
		case 0:
			func_28(0, joaat("hexer"), -1057.896f, 4903.114f, 210.3096f, 127.0391f, 0);
			func_28(1, joaat("hexer"), -1060.599f, 4903.006f, 210.642f, 126.9637f, 0);
			break;
		
		case 3:
			return 1;
	}
	if (!func_27())
	{
		return 0;
	}
	return 1;
}

int func_27()
{
	switch (func_1100())
	{
		case 1:
			if (unk_0x4F94F07DAD382CDA(Local_112.f_29[0]))
			{
				return 1;
			}
			break;
		
		case 2:
			if (unk_0x4F94F07DAD382CDA(Local_112.f_29[0]) && unk_0x4F94F07DAD382CDA(Local_112.f_29[1]))
			{
				return 1;
			}
			break;
		
		case 0:
			if (unk_0x4F94F07DAD382CDA(Local_112.f_29[0]) && unk_0x4F94F07DAD382CDA(Local_112.f_29[1]))
			{
				return 1;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_28(int iParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	
	if (!unk_0x4F94F07DAD382CDA(Local_112.f_29[iParam0]))
	{
		unk_0xB815670C37E03CDE(iParam1);
		if (unk_0x5D98D654CDC2165A(iParam1))
		{
			if (unk_0xA107BB59F9A92498(0, 1, 0, 0))
			{
				if (!unk_0x0E4018692D92041D(Local_112.f_10, iParam0))
				{
					unk_0xCE04CE961AF41AB9(vParam2, 5f, 1, 0, 0, false);
					unk_0x8950ED5730F62EE8(&(Local_112.f_10), iParam0);
				}
				if (func_33(vParam2, 1f, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 50f, 0, 0, 0, 0))
				{
					if (func_30(&(Local_112.f_29[iParam0]), iParam1, vParam2, fParam3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
					{
						unk_0x9EA78777174DE734(unk_0xF2D53AA87148ACED(Local_112.f_29[iParam0]), 1, 1);
						if (bParam4)
						{
							unk_0xD303E20CB0AE4AD0(unk_0xFC00F22E930BFD55(Local_112.f_29[iParam0]), 2);
						}
						else
						{
							unk_0xD303E20CB0AE4AD0(unk_0xFC00F22E930BFD55(Local_112.f_29[iParam0]), 1);
						}
						unk_0x9E86FE28A241DCAB(unk_0xFC00F22E930BFD55(Local_112.f_29[iParam0]), 1);
						unk_0xAA636074B1E78F5D(unk_0xFC00F22E930BFD55(Local_112.f_29[iParam0]), 0);
						unk_0x1C2B995BA5ADE8FF(unk_0xFC00F22E930BFD55(Local_112.f_29[iParam0]), false, 0);
						unk_0xD52C9EADB5D68C6C(unk_0xFC00F22E930BFD55(Local_112.f_29[iParam0]), 1);
						unk_0xF70578F5CD9822CB(unk_0xFC00F22E930BFD55(Local_112.f_29[iParam0]), false);
						unk_0x76CE32E50F0C5270(unk_0xFC00F22E930BFD55(Local_112.f_29[iParam0]), 1);
						unk_0x7FC263D448DC8CAC(unk_0xFC00F22E930BFD55(Local_112.f_29[iParam0]));
						unk_0x9FABD0AB045A5D6E(unk_0xFC00F22E930BFD55(Local_112.f_29[iParam0]), true, true, 0);
						unk_0xFE8201EFB515D77B(unk_0xFC00F22E930BFD55(Local_112.f_29[iParam0]), true);
						unk_0xD47EB38F463B3441(unk_0xFC00F22E930BFD55(Local_112.f_29[iParam0]), 0);
						if (func_1100() == 1)
						{
							if (iParam1 == joaat("rhino"))
							{
								fVar0 = to_float(unk_0xE80842D7B53F8525(unk_0xFC00F22E930BFD55(Local_112.f_29[iParam0])));
								fVar1 = func_29();
								fVar0 = (fVar0 * fVar1);
								unk_0x7FC2040EB34E0E31(unk_0xFC00F22E930BFD55(Local_112.f_29[iParam0]), round(fVar0), 0);
								unk_0x77172C3632BD7CE5(unk_0xFC00F22E930BFD55(Local_112.f_29[iParam0]), round(fVar0));
								unk_0xFA05791B9B8FA536(unk_0xFC00F22E930BFD55(Local_112.f_29[iParam0]), fVar0);
								unk_0x3465486651F18FB8(unk_0xFC00F22E930BFD55(Local_112.f_29[iParam0]), fVar0);
								unk_0xB81134EAAC434D76(unk_0xFC00F22E930BFD55(Local_112.f_29[iParam0]), fVar0);
							}
						}
					}
				}
			}
		}
	}
	if (!unk_0x4F94F07DAD382CDA(Local_112.f_29[iParam0]))
	{
		return 0;
	}
	return 1;
}

var func_29()
{
	return Global_262145.f_12346;
}

int func_30(var uParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
	iVar1 = unk_0xC651C43AB13A15E5(iParam1, vParam2, fParam3, bParam5, iParam4, bParam12);
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
			unk_0xFE8201EFB515D77B(iVar1, bParam8);
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
			func_31(vParam2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_31(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_32(unk_0x95B959F18401C09A(), vParam0, iParam2) > -1)
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

int func_32(int iParam0, vector3 vParam1, int iParam2)
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

int func_33(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
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
		if (func_43(vParam0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_2405071.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_34(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2405071.f_2++;
	return 1;
}

int func_34(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_1228(unk_0x95B959F18401C09A(), 1, 1))
		{
			if (!unk_0xBB5E373390A5F824())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0x16E00F066AFFEA0D(func_39(unk_0x95B959F18401C09A()), vParam0, true) <= (fVar2 + fParam1))
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
		if (func_1228(iVar1, 1, 1))
		{
			if (!func_36(iVar1, 0) && unk_0xB4B29C6A8F481EEA(unk_0x95B959F18401C09A(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0x95B959F18401C09A()))
				{
					if ((func_35(iVar1) || !bParam8) && !Global_2424047[iVar1 /*416*/].f_259)
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
								if (unk_0x16E00F066AFFEA0D(func_39(iVar1), vParam0, true) <= (fVar2 + fParam1))
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
							if (unk_0x16E00F066AFFEA0D(func_39(iVar1), vParam0, true) <= (fVar2 + fParam1))
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

int func_35(int iParam0)
{
	if (unk_0x0A4B2B44CD064704(unk_0x378BD4B3881338C2(iParam0)) || Global_2424047[iParam0 /*416*/].f_245)
	{
		return 1;
	}
	return 0;
}

bool func_36(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x95B959F18401C09A())
	{
		bVar0 = func_37(-1, 0) == 8;
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

int func_37(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_38();
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

int func_38()
{
	return Global_1312745;
}

Vector3 func_39(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_42() && Global_1589819[iVar0 /*818*/].f_789) && !func_41(Global_1589819[iVar0 /*818*/].f_790))
	{
		return Global_1589819[iVar0 /*818*/].f_790;
	}
	return func_40(iParam0);
}

Vector3 func_40(int iParam0)
{
	return unk_0xFBB1F99A825CAB09(unk_0x378BD4B3881338C2(iParam0), false);
}

int func_41(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_42()
{
	return Global_2448756.f_16;
}

int func_43(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && unk_0x95B959F18401C09A() != iVar1) || iParam6 == 0)
		{
			if (func_1228(iVar1, bParam2, bParam3))
			{
				if (unk_0xB4B29C6A8F481EEA(unk_0x95B959F18401C09A(), iVar1))
				{
					if (!bParam5 || (!unk_0xBC2FC12AD0FBF72E(unk_0x378BD4B3881338C2(iVar1)) && func_35(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x12D3B4C76D4AAB00(unk_0x95B959F18401C09A()) != unk_0x12D3B4C76D4AAB00(iVar1))) || unk_0x12D3B4C76D4AAB00(unk_0x95B959F18401C09A()) == -1)
						{
							if (((unk_0x12D3B4C76D4AAB00(unk_0x95B959F18401C09A()) == -1 && iParam7) && bParam4) && func_44(iVar1))
							{
							}
							else if (unk_0x765F6FEEFF39224F(unk_0x378BD4B3881338C2(iVar1)))
							{
								if (unk_0x16E00F066AFFEA0D(func_40(iVar1), vParam0, true) < fParam1)
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

int func_44(int iParam0)
{
	if (func_48(unk_0x95B959F18401C09A(), iParam0))
	{
		return 1;
	}
	Global_2505680 = { func_47(iParam0) };
	if (unk_0xFC40DD2526841632(&Global_2505680))
	{
		return 1;
	}
	if (func_45(unk_0x95B959F18401C09A(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_45(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_46(iParam0);
	if (!iVar0 == func_18())
	{
		if (iVar0 == func_46(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_46(int iParam0)
{
	if (iParam0 != func_18())
	{
		return Global_1626536[iParam0 /*603*/].f_11;
	}
	return func_18();
}

struct<13> func_47(int iParam0)
{
	struct<13> Var0;
	
	unk_0xBC1B3D38C4BB38F4(iParam0, &Var0, 13);
	return Var0;
}

int func_48(int iParam0, int iParam1)
{
	if (unk_0x062B7A5C795CB453())
	{
		Global_2505680 = { func_47(iParam0) };
		Global_2505693 = { func_47(iParam1) };
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

int func_49()
{
	switch (Local_112.f_3)
	{
		case 1:
			return 1;
		
		case 0:
		case 2:
			if (func_50(1, 0, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if (func_50(0, 0, 1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_50(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	struct<35> Var1;
	vector3 vVar2;
	
	iVar0 = joaat("prop_ld_case_01");
	Var1.f_5 = 1115815936;
	Var1.f_13 = 2;
	Var1.f_20 = 2;
	Var1.f_32 = -1082130432;
	Var1.f_34 = 1;
	Var1.f_3 = 0;
	Var1.f_5 = 10f;
	if (!unk_0x4F94F07DAD382CDA(Local_112.f_12))
	{
		unk_0xB815670C37E03CDE(iVar0);
		if (unk_0x5D98D654CDC2165A(iVar0))
		{
			if (unk_0x4A1A4733BFE10244(1))
			{
				vVar2 = { func_206() };
				if (!func_9(&(Local_112.f_58)))
				{
					func_8(&(Local_112.f_58), 0, 0);
				}
				if (func_51(vVar2, 5f, &vLocal_119, &uLocal_120, &Var1) || unk_0x0E4018692D92041D(Local_112.f_1, 19))
				{
					if (unk_0x0E4018692D92041D(Local_112.f_1, 19))
					{
						vLocal_119 = { vVar2 };
					}
					Local_112.f_12 = unk_0x0E0E192D65881AC2(unk_0x06C389ED9C5A7E7D(-301062413, vLocal_119, true, iVar0));
					unk_0x841CC2A685D6AF3C(Local_112.f_12, 1);
					unk_0xC7C47D4054903839(unk_0xE4B835FDC8B9B086(Local_112.f_12), vLocal_119 + Vector(0.5f, 0f, 0f), 0, 0, 1);
					unk_0x71CA80D41E1338B4(iVar0);
					unk_0x9611832841071B69(unk_0xE4B835FDC8B9B086(Local_112.f_12), true);
					unk_0xFE8201EFB515D77B(unk_0xE4B835FDC8B9B086(Local_112.f_12), true);
					if (bParam0)
					{
						if (unk_0x4F94F07DAD382CDA(Local_112.f_13[iParam1]))
						{
							if (!func_10(Local_112.f_13[iParam1]))
							{
								unk_0x6272742446AC02A3(unk_0xE4B835FDC8B9B086(Local_112.f_12), unk_0xBB28786B7F552D0B(Local_112.f_13[iParam1]));
							}
						}
					}
					if (bParam2)
					{
						unk_0xC7C47D4054903839(unk_0xE4B835FDC8B9B086(Local_112.f_12), vVar2 + Vector(0.5f, 0f, 0f), 0, 0, 1);
					}
				}
				else if (!unk_0x0E4018692D92041D(Local_112.f_1, 19))
				{
					if (func_6(&(Local_112.f_58), 15000, 0))
					{
						unk_0x8950ED5730F62EE8(&(Local_112.f_1), 19);
					}
				}
			}
		}
	}
	if (unk_0x4F94F07DAD382CDA(Local_112.f_12))
	{
		return 1;
	}
	return 0;
}

int func_51(vector3 vParam0, float fParam1, var uParam2, var uParam3, var uParam4)
{
	struct<17> Var0;
	struct<18> Var1;
	vector3 vVar2;
	
	if (uParam4->f_5 > (fParam1 - 20f))
	{
		uParam4->f_5 = (fParam1 - 20f);
	}
	Var0 = 5;
	Var0.f_16 = 5;
	Var0.f_22 = 5;
	Var0.f_28 = 5;
	Var1.f_16 = 1;
	Var1.f_22 = 1;
	Var1.f_23 = 1;
	Var1.f_24 = 1;
	Var1 = { vParam0 };
	Var1.f_3 = uParam4->f_11;
	Var1.f_4 = fParam1;
	Var1.f_5 = 0;
	Var1.f_6 = 1;
	Var1.f_7 = 0;
	Var1.f_15 = 0;
	Var1.f_16 = 1;
	Var1.f_17 = 0;
	if (func_52(&Var1, uParam4, &Var0))
	{
		if ((uParam4->f_12 > 0f && uParam4->f_7) && uParam4->f_8)
		{
			vVar2 = { vParam0 - Var0[0 /*3*/] };
			if (vVar2.z > uParam4->f_12)
			{
				Var0[0 /*3*/] = { vParam0 };
				Var0.f_16[0] = uParam4->f_11;
			}
		}
		*uParam2 = { Var0[0 /*3*/] };
		*uParam3 = Var0.f_16[0];
		return 1;
	}
	return 0;
}

int func_52(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	vector3 vVar7;
	vector3 vVar8;
	int iVar9;
	vector3 vVar10;
	vector3 vVar11;
	var uVar12;
	bool bVar13;
	struct<56> Var14;
	bool bVar15;
	
	bVar13 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_2405071.f_2454 == *uParam0 || !Global_2405071.f_2454.f_1 == uParam0->f_1) || !Global_2405071.f_2454.f_2 == uParam0->f_2) || !Global_2405071.f_2457 == uParam0->f_4)
			{
				bVar13 = true;
			}
			break;
		
		case 1:
			if (((((!Global_2405071.f_2468 == uParam0->f_8 || !Global_2405071.f_2468.f_1 == uParam0->f_8.f_1) || !Global_2405071.f_2468.f_2 == uParam0->f_8.f_2) || !Global_2405071.f_2471 == uParam0->f_11) || !Global_2405071.f_2471.f_1 == uParam0->f_11.f_1) || !Global_2405071.f_2471.f_2 == uParam0->f_11.f_2)
			{
				bVar13 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_2405071.f_2468 == uParam0->f_8 || !Global_2405071.f_2468.f_1 == uParam0->f_8.f_1) || !Global_2405071.f_2468.f_2 == uParam0->f_8.f_2) || !Global_2405071.f_2471 == uParam0->f_11) || !Global_2405071.f_2471.f_1 == uParam0->f_11.f_1) || !Global_2405071.f_2471.f_2 == uParam0->f_11.f_2) || !Global_2405071.f_2474 == uParam0->f_14)
			{
				bVar13 = true;
			}
			break;
	}
	if (bVar13)
	{
		if (Global_2405071.f_2452 == 1)
		{
			if (unk_0x8ED4328770BEE4A1(Global_2405071.f_2461))
			{
				if (Global_2405071.f_2461 == unk_0x8C40DC84EDF05997())
				{
					if (unk_0x5009A219B22D2352(unk_0x78DCC5D0CB43DEBA(), Global_2405071.f_2458) < func_205(0))
					{
						return 0;
					}
				}
				else if (unk_0x5009A219B22D2352(unk_0x78DCC5D0CB43DEBA(), Global_2405071.f_2458) < func_205(0))
				{
					return 0;
				}
			}
			unk_0x74EBBDF5D138DB5D();
			unk_0x2C9AFF5BAF906CD4();
			func_204();
		}
		Global_2405071.f_2452 = 0;
	}
	else if (unk_0x5009A219B22D2352(unk_0x78DCC5D0CB43DEBA(), Global_2405071.f_2458) > func_205(0))
	{
		Global_2405071.f_2459 = unk_0x78DCC5D0CB43DEBA();
		func_198();
	}
	switch (uParam0->f_7)
	{
		case 0:
			fVar2 = (*uParam0 - uParam0->f_4);
			fVar3 = (uParam0->f_1 - uParam0->f_4);
			fVar4 = (*uParam0 + uParam0->f_4);
			fVar5 = (uParam0->f_1 + uParam0->f_4);
			break;
		
		case 1:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar2 = uParam0->f_8;
				fVar4 = uParam0->f_11;
			}
			else
			{
				fVar2 = uParam0->f_11;
				fVar4 = uParam0->f_8;
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar3 = uParam0->f_8.f_1;
				fVar5 = uParam0->f_11.f_1;
			}
			else
			{
				fVar3 = uParam0->f_11.f_1;
				fVar5 = uParam0->f_8.f_1;
			}
			break;
		
		case 2:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar2 = (uParam0->f_8 - (0.5f * uParam0->f_14));
				fVar4 = (uParam0->f_11 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar2 = (uParam0->f_11 - (0.5f * uParam0->f_14));
				fVar4 = (uParam0->f_8 + (0.5f * uParam0->f_14));
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar3 = (uParam0->f_8.f_1 - (0.5f * uParam0->f_14));
				fVar5 = (uParam0->f_11.f_1 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar3 = (uParam0->f_11.f_1 - (0.5f * uParam0->f_14));
				fVar5 = (uParam0->f_8.f_1 + (0.5f * uParam0->f_14));
			}
			break;
	}
	unk_0x6CB3E644E3FBFEF0(fVar2, fVar3, fVar4, fVar5);
	if (uParam0->f_7 == 0)
	{
		vVar6 = { *uParam0 };
	}
	else
	{
		vVar6 = { uParam0->f_8 + uParam0->f_11 * Vector(0.5f, 0.5f, 0.5f) };
	}
	vVar7 = { vVar6 + Vector(-0.1f, -0.1f, -0.1f) };
	vVar8 = { vVar6 + Vector(0.1f, 0.1f, 0.1f) };
	if (!Global_2405071.f_2452)
	{
		unk_0x74EBBDF5D138DB5D();
		unk_0x2C9AFF5BAF906CD4();
		func_204();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (vmag(*uParam0) > 0f)
			{
				if (func_33(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_16[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!unk_0x6733602399899068())
		{
			Global_2405071.f_2475 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2405071.f_2454 = { *uParam0 };
					Global_2405071.f_2457 = uParam0->f_4;
					break;
				
				case 1:
					Global_2405071.f_2468 = { uParam0->f_8 };
					Global_2405071.f_2471 = { uParam0->f_11 };
					Global_2405071.f_2474 = 0f;
					Global_2405071.f_2454 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_2405071.f_2468 = { uParam0->f_8 };
					Global_2405071.f_2471 = { uParam0->f_11 };
					Global_2405071.f_2474 = uParam0->f_14;
					Global_2405071.f_2454 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_197(vVar6.x, vVar6.y);
			}
			Global_2405071.f_2453 = 1;
			Global_2405071.f_2452 = 1;
			Global_2405071.f_2459 = unk_0x78DCC5D0CB43DEBA();
			Global_2405071.f_2458 = unk_0x78DCC5D0CB43DEBA();
			Global_2405071.f_2461 = unk_0x8C40DC84EDF05997();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2405071.f_2452)
	{
		if (Global_2405071.f_2453 == 1)
		{
			if (unk_0x656BB209FFCEE74A(fVar2, fVar3, fVar4, fVar5) || unk_0x5009A219B22D2352(unk_0x78DCC5D0CB43DEBA(), Global_2405071.f_2459) > 5000)
			{
				Global_2405071.f_2459 = unk_0x78DCC5D0CB43DEBA();
				if (uParam1->f_8 || uParam1->f_9)
				{
					if (uParam0->f_21)
					{
						*(uParam2[0 /*3*/]) = { uParam0->f_18 };
					}
					else
					{
						*(uParam2[0 /*3*/]) = { vVar6 };
					}
					Var14.f_6 = 1082130432;
					Var14.f_7 = 1176255488;
					Var14.f_8 = 1;
					Var14.f_10 = 1;
					Var14.f_13 = 1;
					Var14.f_15 = 1;
					Var14.f_16 = 1;
					Var14.f_31 = 1;
					Var14.f_34 = joaat("tailgater");
					Var14.f_38 = 2;
					Var14.f_45 = 2;
					Var14.f_49 = 1123024896;
					Var14.f_53 = 999;
					Var14.f_54 = 1176256410;
					Var14.f_55 = 1;
					Var14.f_56 = 1;
					Var14.f_57 = 1;
					Var14 = { *uParam1 };
					Var14.f_3 = uParam1->f_5;
					Var14.f_11 = uParam1->f_9;
					Var14.f_18 = 1;
					if (uParam1->f_32 > 0f)
					{
						Var14.f_6 = uParam1->f_32;
					}
					switch (uParam0->f_7)
					{
						case 0:
							Var14.f_19 = { *uParam0 };
							Var14.f_25 = uParam0->f_4;
							break;
						
						case 1:
							Var14.f_19 = { uParam0->f_8 };
							Var14.f_22 = { uParam0->f_11 };
							Var14.f_25 = 0f;
							break;
						
						case 2:
							Var14.f_19 = { uParam0->f_8 };
							Var14.f_22 = { uParam0->f_11 };
							Var14.f_25 = uParam0->f_14;
							break;
					}
					Var14.f_26 = uParam0->f_7;
					Var14.f_12 = uParam0->f_15;
					if (uParam0->f_21)
					{
						Var14.f_30 = 1;
						Var14.f_32 = 1;
					}
					iVar9 = 0;
					while (iVar9 < 2)
					{
						Var14.f_38[iVar9 /*3*/] = { uParam1->f_13[iVar9 /*3*/] };
						Var14.f_45[iVar9] = uParam1->f_20[iVar9];
						iVar9++;
					}
					Var14.f_51 = uParam1->f_30;
					Var14.f_55 = uParam0->f_16;
					if (uParam0->f_26)
					{
						Var14.f_10 = 0;
					}
					if (func_196(Global_4456448.f_161209))
					{
						Var14.f_9 = 1;
					}
					func_171(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var14);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_170(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_16[0] = uParam0->f_3;
						}
					}
					Global_2405071.f_2453 = 9;
				}
				else
				{
					Global_2405071.f_2453 = 2;
				}
			}
		}
		if (Global_2405071.f_2453 == 2)
		{
			if ((unk_0xEFB81C76B9F62EA3(vVar7, vVar8) || unk_0x5009A219B22D2352(unk_0x78DCC5D0CB43DEBA(), Global_2405071.f_2459) > 15000) || unk_0x63976B42976F740D(vVar7, vVar8) == 0)
			{
				Global_2405071.f_2459 = unk_0x78DCC5D0CB43DEBA();
				if (uParam0->f_5 && !func_36(unk_0x95B959F18401C09A(), 0))
				{
					Global_2405071.f_2453 = 3;
				}
				else
				{
					Global_2405071.f_2453 = 4;
				}
			}
			else if (unk_0x5009A219B22D2352(unk_0x78DCC5D0CB43DEBA(), Global_2405071.f_2463) > 7000)
			{
				func_169(vVar6.x, vVar6.y);
			}
		}
		if (Global_2405071.f_2453 == 3)
		{
			if (func_168() || unk_0x5009A219B22D2352(unk_0x78DCC5D0CB43DEBA(), Global_2405071.f_2459) > 10000)
			{
				Global_2405071.f_2459 = unk_0x78DCC5D0CB43DEBA();
				Global_2405071.f_2453 = 4;
			}
		}
		if (Global_2405071.f_2453 == 4)
		{
			if (unk_0x6733602399899068())
			{
				unk_0x74EBBDF5D138DB5D();
				unk_0x2C9AFF5BAF906CD4();
			}
			else
			{
				iVar0 = 0;
				func_198();
				if (uParam0->f_5)
				{
					if (vmag(*uParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (uParam1->f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!unk_0x12D3B4C76D4AAB00(unk_0x95B959F18401C09A()) == -1)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					switch (uParam0->f_7)
					{
						case 0:
							if (unk_0x3D20368E3E7DA9AB(unk_0x95B959F18401C09A(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2405071.f_2459 = unk_0x78DCC5D0CB43DEBA();
								Global_2405071.f_2453 = 5;
							}
							break;
						
						case 1:
							func_167(uParam0->f_8, uParam0->f_11, &vVar10, &vVar11, &uVar12);
							if (unk_0xE797E40D3E5ED014(unk_0x95B959F18401C09A(), vVar10, vVar11, uVar12, *uParam1, iVar0))
							{
								Global_2405071.f_2459 = unk_0x78DCC5D0CB43DEBA();
								Global_2405071.f_2453 = 5;
							}
							break;
						
						case 2:
							if (unk_0xE797E40D3E5ED014(unk_0x95B959F18401C09A(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2405071.f_2459 = unk_0x78DCC5D0CB43DEBA();
								Global_2405071.f_2453 = 5;
							}
							break;
					}
				}
				else
				{
					if (uParam1->f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (uParam1->f_10)
					{
						iVar0 += 32;
					}
					Global_2405071.f_2459 = unk_0x78DCC5D0CB43DEBA();
					Global_2405071.f_2453 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							unk_0x10403E3173535455(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_167(uParam0->f_8, uParam0->f_11, &vVar10, &vVar11, &uVar12);
							unk_0x4E363EE6F9D07E3D(vVar10, vVar11, uVar12, iVar0, 2f, 5000);
							break;
						
						case 2:
							unk_0x4E363EE6F9D07E3D(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2405071.f_2453 == 5)
		{
			if (func_104(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2405071.f_2479.f_5)
				{
					Global_2405071.f_2459 = unk_0x78DCC5D0CB43DEBA();
					Global_2405071.f_2453 = 6;
				}
				else
				{
					Global_2405071.f_2459 = unk_0x78DCC5D0CB43DEBA();
					if (!uParam0->f_5)
					{
						if (!vmag(*uParam1) == 0f)
						{
							vVar1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_16[0] = unk_0x174C48E9E544E9A8(vVar1.x, vVar1.y);
						}
					}
					Global_2405071.f_2453 = 9;
				}
			}
			else if (unk_0x5009A219B22D2352(unk_0x78DCC5D0CB43DEBA(), Global_2405071.f_2459) > 20000)
			{
				unk_0x74EBBDF5D138DB5D();
				unk_0x2C9AFF5BAF906CD4();
				Global_2405071.f_2459 = unk_0x78DCC5D0CB43DEBA();
				Global_2405071.f_2453 = 8;
			}
		}
		if (Global_2405071.f_2453 == 6)
		{
			iVar0 = 0;
			Global_2405071.f_2479.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_103(uParam0->f_4))
				{
					if (unk_0xDE9B75BB528AC06E(unk_0x90D2E06562D440E1(vVar6)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_102(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (unk_0xDE9B75BB528AC06E(unk_0x90D2E06562D440E1(vVar6)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (uParam1->f_10)
			{
				iVar0 += 32;
			}
			if (uParam0->f_15)
			{
				iVar0 += 16;
			}
			Global_2405071.f_2459 = unk_0x78DCC5D0CB43DEBA();
			Global_2405071.f_2453 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					unk_0x10403E3173535455(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_167(uParam0->f_8, uParam0->f_11, &vVar10, &vVar11, &uVar12);
					unk_0x4E363EE6F9D07E3D(vVar10, vVar11, uVar12, iVar0, 2f, 5000);
					break;
				
				case 2:
					unk_0x4E363EE6F9D07E3D(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2405071.f_2453 == 7)
		{
			if (func_104(uParam2, uParam0, uParam1, 1))
			{
				if (vmag(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 3)
					{
						if (vmag(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!vmag(Global_2405071.f_2613[iVar9 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_170(Global_2405071.f_2613[iVar9 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2405071.f_2613[iVar9 /*3*/] };
										}
										break;
									
									case 1:
										if (func_100(Global_2405071.f_2613[iVar9 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2405071.f_2613[iVar9 /*3*/] };
										}
										break;
									
									case 2:
										if (unk_0xC2F708DE8AD68197(Global_2405071.f_2613[iVar9 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, true))
										{
											*(uParam2[0 /*3*/]) = { Global_2405071.f_2613[iVar9 /*3*/] };
										}
										break;
									}
								}
						}
						iVar9++;
					}
					if (vmag(*(uParam2[0 /*3*/])) == 0f)
					{
						switch (uParam0->f_7)
						{
							case 0:
								vVar1 = { *uParam0 };
								break;
							
							case 1:
							case 2:
								vVar1 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
								break;
						}
						func_55(&vVar1, 0, 1, 1, 0, uParam0, uParam1);
						*(uParam2[0 /*3*/]) = { vVar1 };
					}
				}
				Global_2405071.f_2459 = unk_0x78DCC5D0CB43DEBA();
				if (!vmag(*uParam1) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 5)
					{
						vVar1 = { *uParam1 - *(uParam2[iVar9 /*3*/]) };
						uParam2->f_16[iVar9] = unk_0x174C48E9E544E9A8(vVar1.x, vVar1.y);
						iVar9++;
					}
				}
				Global_2405071.f_2453 = 9;
			}
			else if (unk_0x5009A219B22D2352(unk_0x78DCC5D0CB43DEBA(), Global_2405071.f_2459) > 20000)
			{
				Global_2405071.f_2459 = unk_0x78DCC5D0CB43DEBA();
				Global_2405071.f_2453 = 8;
			}
		}
		if (Global_2405071.f_2453 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_54(Global_2405071.f_484))
				{
				}
			}
			else if (Global_2405071.f_2479.f_2)
			{
				func_53(uParam2, &(Global_2405071.f_2479.f_6));
			}
			else
			{
				if (uParam0->f_15)
				{
					bVar15 = false;
				}
				else
				{
					bVar15 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_2405071.f_2454 };
				func_55(uParam2[0 /*3*/], 0, bVar15, 0, 0, uParam0, uParam1);
			}
			Global_2405071.f_2459 = unk_0x78DCC5D0CB43DEBA();
			Global_2405071.f_2453 = 9;
		}
		if (Global_2405071.f_2453 == 9)
		{
			Global_2405071.f_2452 = 0;
			unk_0x74EBBDF5D138DB5D();
			unk_0x2C9AFF5BAF906CD4();
			func_204();
			return 1;
		}
		Global_2405071.f_2458 = unk_0x78DCC5D0CB43DEBA();
	}
	return 0;
}

void func_53(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		*(uParam0[iVar0 /*3*/]) = { (uParam1[iVar0 /*10*/])->f_4 };
		uParam0->f_16[iVar0] = (uParam1[iVar0 /*10*/])->f_7;
		uParam0->f_22[iVar0] = (*uParam1)[iVar0 /*10*/];
		iVar0++;
	}
}

int func_54(int iParam0)
{
	if (iParam0 == 3 || iParam0 == 26)
	{
		return 1;
	}
	return 0;
}

void func_55(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)
{
	vector3 vVar0;
	var uVar1;
	struct<56> Var2;
	var uVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	float fVar10;
	
	Var2.f_6 = 1082130432;
	Var2.f_7 = 1176255488;
	Var2.f_8 = 1;
	Var2.f_10 = 1;
	Var2.f_13 = 1;
	Var2.f_15 = 1;
	Var2.f_16 = 1;
	Var2.f_31 = 1;
	Var2.f_34 = joaat("tailgater");
	Var2.f_38 = 2;
	Var2.f_45 = 2;
	Var2.f_49 = 1123024896;
	Var2.f_53 = 999;
	Var2.f_54 = 1176256410;
	Var2.f_55 = 1;
	Var2.f_56 = 1;
	Var2.f_57 = 1;
	if (bParam1)
	{
		iVar6 = 0;
	}
	else
	{
		iVar6 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_22)
			{
				iVar6 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						vVar7 = { *uParam5 };
						if (func_103(uParam5->f_4) || !unk_0xDE9B75BB528AC06E(unk_0x90D2E06562D440E1(vVar7)))
						{
							iVar6 += 4;
						}
						break;
					
					case 1:
						vVar7 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_102(uParam5->f_8, uParam5->f_11, 0f) || !unk_0xDE9B75BB528AC06E(unk_0x90D2E06562D440E1(vVar7)))
						{
							iVar6 += 4;
						}
						break;
					
					case 2:
						vVar7 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_102(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !unk_0xDE9B75BB528AC06E(unk_0x90D2E06562D440E1(vVar7)))
						{
							iVar6 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar6 += 4;
		}
	}
	if (func_69(*uParam0, &vVar0, iVar6, iParam3, 1))
	{
	}
	else
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		vVar0 = { *uParam0 };
		Var2 = { *uParam6 };
		Var2.f_8 = 1;
		Var2.f_3 = uParam6->f_5;
		if (bParam2)
		{
			Var2.f_10 = 0;
		}
		else
		{
			Var2.f_10 = 1;
		}
		Var2.f_13 = uParam5->f_15;
		Var2.f_15 = iParam3;
		if (uParam6->f_32 > 0f)
		{
			Var2.f_6 = uParam6->f_32;
		}
		if (bParam4)
		{
			Var2.f_18 = 1;
			Var2.f_26 = uParam5->f_7;
			switch (uParam5->f_7)
			{
				case 0:
					Var2.f_19 = { *uParam5 };
					Var2.f_25 = uParam5->f_4;
					break;
				
				case 1:
					Var2.f_19 = { uParam5->f_8 };
					Var2.f_22 = { uParam5->f_11 };
					Var2.f_25 = 0f;
					break;
				
				case 2:
					Var2.f_19 = { uParam5->f_8 };
					Var2.f_22 = { uParam5->f_11 };
					Var2.f_25 = uParam5->f_14;
					break;
				}
		}
		iVar4 = 0;
		while (iVar4 < 2)
		{
			Var2.f_38[iVar4 /*3*/] = { uParam6->f_13[iVar4 /*3*/] };
			Var2.f_45[iVar4] = uParam6->f_20[iVar4];
			iVar4++;
		}
		Var2.f_51 = uParam6->f_30;
		Var2.f_55 = uParam5->f_16;
		if (func_67(unk_0x95B959F18401C09A(), 0))
		{
			Var2.f_9 = 1;
		}
		func_171(&vVar0, &uVar1, &Var2);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				vVar8 = { *uParam5 };
				fVar10 = uParam5->f_4;
				break;
			
			case 1:
				vVar8 = { uParam5->f_8 };
				vVar9 = { uParam5->f_11 };
				break;
			
			case 2:
				vVar8 = { uParam5->f_8 };
				vVar9 = { uParam5->f_11 };
				fVar10 = uParam5->f_14;
				break;
		}
		if (!func_66(vVar0, uParam5->f_7, vVar8, vVar9, fVar10))
		{
			if (func_69(*uParam0, &vVar0, iVar6, iParam3, 0))
			{
				if (!func_66(vVar0, uParam5->f_7, vVar8, vVar9, fVar10))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						vVar0 = { vVar8 + vVar9 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						vVar0 = { vVar8 };
					}
					if (unk_0x8C1596BAD35D957A(vVar0, &uVar3, 0, 0))
					{
						vVar0.z = uVar3;
					}
				}
			}
			else if (func_56(uParam0, 1, 1, 1, 1))
			{
				func_55(uParam0, bParam1, bParam2, iParam3, bParam4, uParam5, uParam6);
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					vVar0 = { vVar8 + vVar9 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					vVar0 = { vVar8 };
				}
				if (unk_0x8C1596BAD35D957A(vVar0, &uVar3, 0, 0))
				{
					vVar0.z = uVar3;
				}
			}
		}
	}
	*uParam0 = { vVar0 };
	Global_2405071.f_659 = 1;
}

int func_56(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2409968[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2409968[iVar0 /*17*/].f_16))
			{
				if (func_65(*uParam0, &(Global_2409968[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2409968[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2409968[iVar0 /*17*/].f_13 };
						}
						else
						{
							vVar1 = { *uParam0 };
							func_57(&vVar1, &(Global_2409968[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_56(&vVar1, 0, 0, 0, 1))
							{
								vVar1 = { *uParam0 };
								func_57(&vVar1, &(Global_2409968[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { vVar1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_57(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_64(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2405071.f_2722) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_64(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_64(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_62(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2405071.f_2722) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_61(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_58(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

void func_58(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3, float fParam4, bool bParam5)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar5;
	float fVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	vector3 vVar10;
	vector3 vVar11;
	
	vVar0 = { vParam2 - vParam1 };
	vVar0.z = 0f;
	vVar1 = { *uParam0 - vParam1 };
	vVar1.z = 0f;
	vVar2 = { func_60(0f, 0f, 1f, vVar0) };
	vVar2 = { vVar2 / FtoV(vmag(vVar2)) };
	fVar3 = (vmag(vVar1) * sin(unk_0x989A68339D9F80C4(vVar0.x, vVar0.y, vVar1.x, vVar1.y)));
	if (fVar3 < (fParam3 * 0.5f))
	{
		if (!bParam5)
		{
			if (func_59(vVar2, vVar1) >= 0f)
			{
				vVar2 = { vVar2 * FtoV((((fParam3 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				vVar2 = { vVar2 * FtoV(((((fParam3 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_59(vVar2, vVar1) >= 0f)
		{
			vVar2 = { vVar2 * FtoV(((((fParam3 * 0.5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			vVar2 = { vVar2 * FtoV((((fParam3 * 0.5f) + fVar3) + fParam4)) };
		}
		vVar4 = { *uParam0 + vVar2 };
		fVar6 = vdist(vParam1.x, vParam1.y, 0f, vParam2.x, vParam2.y, 0f);
		vVar7 = { vParam1 + vParam2 / Vector(2f, 2f, 2f) };
		vVar7.z = 0f;
		vVar2 = { func_60(0f, 0f, 1f, vVar0) };
		vVar2 = { vVar2 / FtoV(vmag(vVar2)) };
		vVar2 = { vVar2 * FtoV((fParam3 * 0.5f)) };
		vVar8 = { vVar7 - vVar2 };
		vVar9 = { vVar7 + vVar2 };
		vVar10 = { vVar9 - vVar8 };
		vVar10.z = 0f;
		vVar11 = { *uParam0 - vVar8 };
		vVar11.z = 0f;
		vVar2 = { func_60(0f, 0f, 1f, vVar10) };
		vVar2 = { vVar2 / FtoV(vmag(vVar2)) };
		fVar3 = (vmag(vVar11) * sin(unk_0x989A68339D9F80C4(vVar10.x, vVar10.y, vVar11.x, vVar11.y)));
		if (!bParam5)
		{
			if (func_59(vVar2, vVar11) >= 0f)
			{
				vVar2 = { vVar2 * FtoV((((fVar6 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				vVar2 = { vVar2 * FtoV(((((fVar6 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_59(vVar2, vVar11) >= 0f)
		{
			vVar2 = { vVar2 * FtoV(((((fVar6 * 0.5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			vVar2 = { vVar2 * FtoV((((fVar6 * 0.5f) + fVar3) + fParam4)) };
		}
		vVar5 = { *uParam0 + vVar2 };
		if (vdist(vVar4, *uParam0, uParam0->f_1, 0f) < vdist(vVar5, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { vVar4 };
		}
		else
		{
			*uParam0 = { vVar5 };
		}
	}
}

float func_59(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_60(vector3 vParam0, vector3 vParam1)
{
	return ((vParam0.y * vParam1.z) - (vParam0.z * vParam1.y)), ((vParam0.z * vParam1.x) - (vParam0.x * vParam1.z)), ((vParam0.x * vParam1.y) - (vParam0.y * vParam1.x));
}

void func_61(var uParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, float fParam5, bool bParam6)
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	vVar0 = { *uParam0 };
	fVar1 = (*uParam0 - Param1);
	fVar2 = (*uParam0 - Param3);
	if (fVar1 < fVar2)
	{
		fVar3 = fVar1;
	}
	else
	{
		fVar3 = fVar2;
	}
	fVar4 = (uParam0->f_1 - Param1.f_1);
	fVar5 = (uParam0->f_1 - Param3.f_1);
	if (fVar4 < fVar5)
	{
		fVar6 = fVar4;
	}
	else
	{
		fVar6 = fVar5;
	}
	vVar0 = { *uParam0 };
	if (!bParam6)
	{
		if (fVar3 < fVar6)
		{
			if (fVar1 < fVar2)
			{
				vVar0.x = (Param1 - fParam5);
			}
			else
			{
				vVar0.x = (Param3 + fParam5);
			}
		}
		else if (fVar4 < fVar5)
		{
			vVar0.y = (Param1.f_1 - fParam5);
		}
		else
		{
			vVar0.y = (Param3.f_1 + fParam5);
		}
	}
	else if (fVar3 < fVar6)
	{
		if (fVar1 < fVar2)
		{
			vVar0.x = (Param3 + fParam5);
		}
		else
		{
			vVar0.x = (Param1 - fParam5);
		}
	}
	else if (fVar4 < fVar5)
	{
		vVar0.y = (Param3.f_1 + fParam5);
	}
	else
	{
		vVar0.y = (Param1.f_1 - fParam5);
	}
	*uParam0 = { vVar0 };
}

void func_62(var uParam0, vector3 vParam1, float fParam2, float fParam3, bool bParam4, float fParam5)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { *uParam0 - vParam1 };
	vVar0.z = 0f;
	if (vmag(vVar0) > 0f)
	{
		vVar0 = { vVar0 / FtoV(vmag(vVar0)) };
	}
	else
	{
		vVar0 = { 0f, 1f, 0f };
		if (fParam5 == 0f)
		{
			func_63(&vVar0, 0f, 0f, unk_0x9562E33C057F7589(0f, 360f));
		}
		else
		{
			func_63(&vVar0, 0f, 0f, fParam5);
		}
	}
	vVar0 = { vVar0 * FtoV((fParam2 + fParam3)) };
	if (!bParam4)
	{
		vVar1 = { vParam1 + vVar0 };
	}
	else
	{
		vVar1 = { vParam1 - vVar0 };
	}
	*uParam0 = vVar1.x;
	uParam0->f_1 = vVar1.y;
}

void func_63(var uParam0, vector3 vParam1)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	
	fVar0 = cos(vParam1.x);
	fVar1 = sin(vParam1.x);
	vVar2.x = *uParam0;
	vVar2.y = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	vVar2.z = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { vVar2 };
	fVar0 = cos(vParam1.y);
	fVar1 = sin(vParam1.y);
	vVar2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	vVar2.y = uParam0->f_1;
	vVar2.z = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { vVar2 };
	fVar0 = cos(vParam1.z);
	fVar1 = sin(vParam1.z);
	vVar2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	vVar2.y = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	vVar2.z = uParam0->f_2;
	*uParam0 = { vVar2 };
}

Vector3 func_64(vector3 vParam0, vector3 vParam1, vector3 vParam2, float fParam3, int iParam4, float fParam5, bool bParam6)
{
	int iVar0;
	vector3 vVar1;
	
	switch (iParam4)
	{
		case 0:
			func_62(&vParam0, vParam1, fParam3, fParam5, bParam6, 0);
			break;
		
		case 1:
			func_61(&vParam0, vParam1, vParam2, fParam5, bParam6);
			break;
		
		case 2:
			func_58(&vParam0, vParam1, vParam2, fParam3, fParam5, bParam6);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		unk_0xC6CDE40F70F13196(vParam0, iVar0 * 5, &vVar1, 1, 0f, 0f);
		switch (iParam4)
		{
			case 0:
				if (!func_170(vVar1, vParam1, fParam3, 0, 0))
				{
					return vVar1;
				}
				break;
			
			case 1:
				if (!func_100(vVar1, vParam1, vParam2, 0, 0))
				{
					return vVar1;
				}
				break;
			
			case 2:
				if (!unk_0xC2F708DE8AD68197(vVar1, vParam1, vParam2, fParam3, 0, true))
				{
					return vVar1;
				}
				break;
		}
		iVar0++;
	}
	return vParam0;
}

int func_65(vector3 vParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	switch (uParam1->f_10)
	{
		case 0:
			return func_170(vParam0, *uParam1, ((uParam1->f_6 + fParam2) + (IntToFloat(Global_2405071.f_2722) * uParam1->f_8)), bParam3, bParam4);
			break;
		
		case 1:
			return func_100(vParam0, *uParam1 + Vector((fParam2 * -1f), (fParam2 * -1f), (fParam2 * -1f)), uParam1->f_3 + Vector(fParam2, fParam2, fParam2), bParam3, bParam4);
			break;
		
		case 2:
			if (bParam3 && bParam4)
			{
				return unk_0xC2F708DE8AD68197(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, false);
			}
			else if (bParam3)
			{
				if (unk_0xC2F708DE8AD68197(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, false) && !(vParam0.z < uParam1->f_2 && vParam0.z < uParam1->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam4)
			{
				if (unk_0xC2F708DE8AD68197(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, false) && !(vParam0.z > uParam1->f_2 && vParam0.z > uParam1->f_3.f_2))
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
				return unk_0xC2F708DE8AD68197(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, true);
			}
			break;
	}
	return 0;
}

int func_66(vector3 vParam0, int iParam1, vector3 vParam2, vector3 vParam3, float fParam4)
{
	switch (iParam1)
	{
		case 0:
			if (vdist(vParam0, vParam2) <= fParam4)
			{
				return 1;
			}
			break;
		
		case 1:
			return func_100(vParam0, vParam2, vParam3, 0, 0);
			break;
		
		case 2:
			return unk_0xC2F708DE8AD68197(vParam0, vParam2, vParam3, fParam4, 0, true);
			break;
	}
	return 0;
}

int func_67(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
		{
			iVar0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
			if (unk_0x541D5C57194E73C4(iVar0) == -1988428699)
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_18())
	{
		if (func_1228(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1 && Global_2424047[iParam0 /*416*/].f_309.f_8 != func_18())
			{
				return func_68(Global_2424047[iParam0 /*416*/].f_309.f_5) == 12;
			}
		}
	}
	return 0;
}

int func_68(int iParam0)
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

int func_69(vector3 vParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_99(vParam0, uParam1))
	{
		if (func_70(vParam0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	if (unk_0xFC05F8C42B023B2E(vParam0, 0, uParam1, iParam2))
	{
		if (func_70(vParam0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_70(vector3 vParam0, var uParam1, int iParam2, bool bParam3)
{
	float fVar0;
	var uVar1;
	var uVar2;
	
	fVar0 = vdist(vParam0, *uParam1);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar2 = 2;
		if ((iParam2 == 1 && !func_86(Global_2405071.f_507, uParam1, &uVar1, &uVar2, bParam3, 1)) || iParam2 == 0)
		{
			if (!func_74(*uParam1, 1056964608))
			{
				if (!func_71(uParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_71(var uParam0, bool bParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	
	vVar1 = { *uParam0 };
	iVar2 = func_73(vVar1);
	iVar0 = 0;
	while (iVar0 < Global_2411443[iVar2])
	{
		if (func_72(vVar1, &(Global_2410173[iVar2 /*141*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_58(&vVar1, Global_2410173[iVar2 /*141*/][iVar0 /*7*/], Global_2410173[iVar2 /*141*/][iVar0 /*7*/].f_3, Global_2410173[iVar2 /*141*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411443[8])
	{
		if (func_72(vVar1, &(Global_2410173[8 /*141*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_58(&vVar1, Global_2410173[8 /*141*/][iVar0 /*7*/], Global_2410173[8 /*141*/][iVar0 /*7*/].f_3, Global_2410173[8 /*141*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_72(vector3 vParam0, var uParam1)
{
	return unk_0xC2F708DE8AD68197(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, true);
}

int func_73(struct<2> Param0, var uParam1)
{
	if (Param0.f_1 > Global_2411453[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2411453[1])
	{
		if (Param0 < Global_2411457[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2411453[2])
	{
		if (Param0 < Global_2411457[1])
		{
			return 3;
		}
		else if (Param0 < Global_2411457[2])
		{
			return 4;
		}
		else if (Param0 < Global_2411457[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

int func_74(vector3 vParam0, float fParam1)
{
	int iVar0;
	
	if (func_83(unk_0x95B959F18401C09A(), 1))
	{
		if (Global_4456448.f_61781 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_61781)
			{
				if (Global_4456448.f_61782[iVar0 /*80*/].f_7 != 0)
				{
					if (func_75(vParam0, Global_4456448.f_61782[iVar0 /*80*/], Global_4456448.f_61782[iVar0 /*80*/].f_6, Global_4456448.f_61782[iVar0 /*80*/].f_7, fParam1))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4456448.f_58131 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_58131)
			{
				if (Global_4456448.f_58134[iVar0 /*151*/].f_16 != 0)
				{
					if (func_75(vParam0, Global_4456448.f_58134[iVar0 /*151*/], Global_4456448.f_58134[iVar0 /*151*/].f_3, Global_4456448.f_58134[iVar0 /*151*/].f_16, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4456448.f_83453 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_83453)
			{
				if (Global_4456448.f_83457[iVar0 /*250*/].f_12 != 0)
				{
					if (func_75(vParam0, Global_4456448.f_83457[iVar0 /*250*/], Global_4456448.f_83457[iVar0 /*250*/].f_3, Global_4456448.f_83457[iVar0 /*250*/].f_12, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_969025.f_255 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_969025.f_255)
			{
				if (unk_0x765F6FEEFF39224F(Global_969025.f_220[iVar0]) && !unk_0xD62C4419A41F106A(Global_969025.f_220[iVar0], 0))
				{
					if (func_75(vParam0, unk_0xFBB1F99A825CAB09(Global_969025.f_220[iVar0], true), unk_0xC472E34C8FBEC678(Global_969025.f_220[iVar0]), unk_0x541D5C57194E73C4(Global_969025.f_220[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_969025.f_253 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_969025.f_253)
			{
				if (unk_0x765F6FEEFF39224F(Global_969025.f_118[iVar0]) && !unk_0xD62C4419A41F106A(Global_969025.f_118[iVar0], 0))
				{
					if (func_75(vParam0, unk_0xFBB1F99A825CAB09(Global_969025.f_118[iVar0], true), unk_0xC472E34C8FBEC678(Global_969025.f_118[iVar0]), unk_0x541D5C57194E73C4(Global_969025.f_118[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_75(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3, float fParam4)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (vdist(vParam0, vParam1) < func_82(iParam3, 1008981770))
	{
		func_76(vParam1, fParam2, iParam3, &vVar0, &vVar1, &fVar2, fParam4);
		if (unk_0xC2F708DE8AD68197(vParam0, vVar0, vVar1, fVar2, 0, true))
		{
			return 1;
		}
	}
	return 0;
}

void func_76(vector3 vParam0, float fParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	
	vVar0 = { 0f, 1f, 0f };
	func_63(&vVar0, 0f, 0f, fParam1);
	vVar0 = { vVar0 / FtoV(vmag(vVar0)) };
	func_77(iParam2, &vVar1, &vVar2, 1086324736, 1080033280, 1077936128);
	vVar3 = { vParam0 + vVar0 * FtoV((vVar2.y + fParam6)) };
	vVar3.z = (vVar3.z - ((0.5f * unk_0x7EECA16E87982278((vVar2.z - vVar1.z))) + fParam6));
	vVar4 = { vParam0 - vVar0 * FtoV(((vVar1.y * -1f) + fParam6)) };
	vVar4.z = (vVar4.z + ((0.5f * unk_0x7EECA16E87982278((vVar2.z - vVar1.z))) + fParam6));
	*uParam3 = { vVar3 };
	*uParam4 = { vVar4 };
	*uParam5 = unk_0x7EECA16E87982278((vVar2.x - vVar1.x));
}

void func_77(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (unk_0xE96A50F1DE6657CB(iParam0))
	{
		unk_0xFEF5F9BB57EA2E8D(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_80(iParam0);
		if (iVar0 != 0)
		{
			func_78(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}
	if (vmag(*uParam1) <= 0.01f || vmag(*uParam2) <= 0.01f)
	{
		*uParam1 = (0f - (fParam4 * 0.5f));
		*uParam2 = (0f + (fParam4 * 0.5f));
		uParam1->f_1 = (0f - (fParam3 * 0.5f));
		uParam2->f_1 = (0f + (fParam3 * 0.5f));
		uParam1->f_2 = (0f - (fParam5 * 0.5f));
		uParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_78(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_79(iParam0, &Global_1315802);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0xE96A50F1DE6657CB(Global_1315802[iVar0]))
		{
			unk_0xFEF5F9BB57EA2E8D(Global_1315802[iVar0], &(Global_1315806[iVar0 /*3*/]), &(Global_1315813[iVar0 /*3*/]));
		}
		if (vmag(Global_1315806[iVar0 /*3*/]) <= 0.01f || vmag(Global_1315813[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1315806[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1315813[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1315806[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1315813[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1315806[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1315813[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1315820[iVar0] = (Global_1315813[iVar0 /*3*/] - Global_1315806[iVar0 /*3*/]);
		Global_1315823[iVar0] = (Global_1315813[iVar0 /*3*/].f_1 - Global_1315806[iVar0 /*3*/].f_1);
		Global_1315826[iVar0] = (Global_1315813[iVar0 /*3*/].f_2 - Global_1315806[iVar0 /*3*/].f_2);
		if (Global_1315820[iVar0] > Global_1315829)
		{
			Global_1315829 = Global_1315820[iVar0];
		}
		if (Global_1315826[iVar0] > Global_1315830)
		{
			Global_1315830 = Global_1315826[iVar0];
		}
		iVar0++;
	}
	Global_1315831 = (Global_1315829 * -0.5f);
	Global_1315834 = (Global_1315829 * 0.5f);
	Global_1315831.f_1 = ((((0.5f * Global_1315823[0]) + Global_1315823[1]) + Global_1315802.f_3) * -1f);
	Global_1315834.f_1 = (0.5f * Global_1315823[0]);
	Global_1315831.f_2 = (Global_1315826[0] * -0.5f);
	Global_1315834.f_2 = (Global_1315826[0] * 0.5f);
	*uParam1 = { Global_1315831 };
	*uParam2 = { Global_1315834 };
}

void func_79(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = 387748548;
			(*uParam1)[1] = 1502869817;
			uParam1->f_3 = -2.6f;
			break;
		
		case 2:
			(*uParam1)[0] = 177270108;
			(*uParam1)[1] = 1502869817;
			uParam1->f_3 = -2.6f;
			break;
		
		case 3:
			(*uParam1)[0] = 433954513;
			(*uParam1)[1] = -1881846085;
			uParam1->f_3 = 0.5f;
			break;
	}
}

int func_80(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_81(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_81(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

float func_82(int iParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_77(iParam0, &vVar0, &vVar1, 1086324736, 1080033280, 1077936128);
	vVar2 = { vVar1 - vVar0 };
	fVar3 = (sqrt(((((vVar2.x * 0.5f) * (vVar2.x * 0.5f)) + ((vVar2.y * 0.5f) * (vVar2.y * 0.5f))) + ((vVar2.z * 0.5f) * (vVar2.z * 0.5f)))) + fParam1);
	return fVar3;
}

int func_83(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_84(iParam0))
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

bool func_84(int iParam0)
{
	return func_85(iParam0);
}

bool func_85(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_13.f_1, 0);
}

int func_86(vector3 vParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;
	
	if (func_93(vParam0))
	{
		if (func_56(uParam1, bParam4, 0, 1, 1))
		{
			if (bParam4)
			{
			}
			return 1;
		}
	}
	if (func_88(uParam1, bParam4, 1))
	{
		if (bParam4)
		{
		}
		return 1;
	}
	if (bParam5)
	{
		if (func_87(*uParam1, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (vdist(*uParam1, *(uParam2[iVar0 /*3*/])) < (*uParam3)[iVar0])
		{
			if (bParam4)
			{
				func_62(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

int func_87(vector3 vParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (vdist(vParam0, Global_2405071.f_2724[iVar0 /*3*/]) < fParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_88(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	
	if (func_90(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			vVar2 = { *uParam0 };
			func_57(&vVar2, &(Global_2405071.f_363[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_90(vVar2, &uVar1) || func_89(vVar2))
			{
				vVar2 = { *uParam0 };
				func_57(&vVar2, &(Global_2405071.f_363[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { vVar2 };
		}
		return 1;
	}
	return 0;
}

int func_89(vector3 vParam0)
{
	float fVar0;
	
	if (Global_2405071.f_588 > 0f)
	{
		fVar0 = vdist(vParam0, Global_2405071.f_585);
		if (fVar0 < Global_2405071.f_588)
		{
			return 1;
		}
	}
	return 0;
}

int func_90(vector3 vParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (func_92())
	{
		return 0;
	}
	iVar1 = func_91();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2405071.f_363[iVar0 /*12*/].f_9 == 1)
		{
			if (func_65(vParam0, &(Global_2405071.f_363[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam1 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_91()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2405071.f_363[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_92()
{
	return Global_1671295.f_163;
}

int func_93(vector3 vParam0)
{
	int iVar0;
	vector3 vVar1;
	
	if (!Global_2405071.f_510 && !Global_2405071.f_511)
	{
		if (!Global_2405071.f_45.f_314)
		{
			if (!func_97(unk_0x95B959F18401C09A(), 1))
			{
				return 1;
			}
			if (!func_96(vParam0, 1008981770))
			{
				if (!func_56(&vParam0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_56(&vParam0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_95(vParam0, 1008981770);
				if (iVar0 > -1)
				{
					vVar1 = { func_94(&(Global_2405071.f_45[iVar0 /*12*/])) };
					if (!func_56(&vVar1, 0, 0, 0, 1))
					{
						if (!func_56(&vParam0, 0, 0, 0, 1))
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

Vector3 func_94(var uParam0)
{
	switch (uParam0->f_10)
	{
		case 0:
			return *uParam0;
			break;
		
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
			break;
	}
	return *uParam0;
}

int func_95(vector3 vParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405071.f_45[iVar0 /*12*/].f_9)
		{
			if (func_65(vParam0, &(Global_2405071.f_45[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_96(vector3 vParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405071.f_45[iVar0 /*12*/].f_9)
		{
			if (func_65(vParam0, &(Global_2405071.f_45[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_97(int iParam0, bool bParam1)
{
	if (Global_1312448 != 0)
	{
		return func_98(iParam0) != 0;
	}
	return func_83(iParam0, bParam1);
}

int func_98(int iParam0)
{
	if (func_1228(iParam0, 0, 1))
	{
		return Global_2424047[iParam0 /*416*/].f_1;
	}
	return 0;
}

int func_99(vector3 vParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = -1;
	fVar2 = 999999.9f;
	if (Global_2405071.f_2250 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2405071.f_2250)
		{
			fVar3 = vdist(Global_2405071.f_2251[iVar0 /*4*/], vParam0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*uParam1 = { Global_2405071.f_2251[iVar1 /*4*/] };
			return 1;
		}
	}
	return 0;
}

int func_100(vector3 vParam0, vector3 vParam1, vector3 vParam2, bool bParam3, bool bParam4)
{
	func_101(&vParam1, &vParam2);
	if (((!vParam0.x >= vParam1.x || !vParam0.y >= vParam1.y) || !vParam0.x <= vParam2.x) || !vParam0.y <= vParam2.y)
	{
		return 0;
	}
	if (bParam3 && bParam4)
	{
		return 1;
	}
	else if (bParam3)
	{
		if (vParam0.z >= vParam1.z)
		{
			return 1;
		}
	}
	else if (bParam4)
	{
		if (vParam0.z <= vParam2.z)
		{
			return 1;
		}
	}
	else if (vParam0.z >= vParam1.z && vParam0.z <= vParam2.z)
	{
		return 1;
	}
	return 0;
}

void func_101(var uParam0, var uParam1)
{
	var uVar0;
	
	if (*uParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = uVar0;
	}
	if (uParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = uParam0->f_1;
		uParam0->f_1 = uVar0;
	}
	if (uParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = uParam0->f_2;
		uParam0->f_2 = uVar0;
	}
}

int func_102(vector3 vParam0, vector3 vParam1, float fParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (vParam0.x > vParam1.x)
	{
		vVar1.x = vParam0.x;
		vVar0.x = vParam1.x;
	}
	else
	{
		vVar1.x = vParam1.x;
		vVar0.x = vParam0.x;
	}
	if (vParam0.y > vParam1.y)
	{
		vVar1.y = vParam0.y;
		vVar0.y = vParam1.y;
	}
	else
	{
		vVar1.y = vParam1.y;
		vVar0.y = vParam0.y;
	}
	if (vParam0.z > vParam1.z)
	{
		vVar1.z = vParam0.z;
		vVar0.z = vParam1.z;
	}
	else
	{
		vVar1.z = vParam1.z;
		vVar0.z = vParam0.z;
	}
	if (vmag(vVar1 - vVar0) > 100f)
	{
		return 1;
	}
	if (fParam2 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_103(float fParam0)
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_104(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	
	if (Global_2405071.f_2479.f_1 == 0 && Global_2405071.f_2479 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (unk_0x3F38B2C145787E16(&(Global_2405071.f_2479.f_1)))
			{
				case 0:
					func_165(uParam1, uParam2);
					if (!Global_2405071.f_2479.f_2)
					{
						if (uParam2->f_7 && Global_2405071.f_550.f_7 == 0)
						{
							*(uParam0[0 /*3*/]) = { *uParam1 };
							uParam0->f_16[0] = uParam1->f_3;
							return 1;
						}
						else
						{
							if (uParam1->f_21)
							{
								*(uParam0[0 /*3*/]) = { uParam1->f_18 };
							}
							else
							{
								*(uParam0[0 /*3*/]) = { Global_2405071.f_2454 };
							}
							if (uParam1->f_5 && func_54(Global_2405071.f_484))
							{
								if (!Global_2405071.f_2479.f_5)
								{
									Global_2405071.f_2479.f_5 = 1;
								}
								else
								{
									func_55(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_55(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
							}
							uParam0->f_16[0] = unk_0x9562E33C057F7589(0f, 360f);
							return 1;
						}
					}
					break;
				
				case 1:
					func_165(uParam1, uParam2);
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
		}
		else if (unk_0x6733602399899068())
		{
			if (!unk_0xC04B993E9BACB3D5())
			{
				if (unk_0xE6CC4A277FB5CB21())
				{
					func_165(uParam1, uParam2);
					Global_2405071.f_2479.f_1 = unk_0xF40DE7CF7C1D0BBB();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				unk_0x2C9AFF5BAF906CD4();
				func_165(uParam1, uParam2);
				if (!Global_2405071.f_2479.f_2)
				{
					Global_2405071.f_2479.f_5 = 1;
					return 1;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (uParam1->f_5)
	{
		func_162(Global_2405071.f_550, &(Global_2405071.f_2479.f_57), &(Global_2405071.f_2479.f_90));
	}
	if (uParam2->f_7 && !Global_2405071.f_2479.f_4)
	{
		Global_2405071.f_2479.f_4 = 1;
		func_112(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
	}
	iVar4 = 0;
	if (uParam1->f_5)
	{
		iVar5 = 64;
	}
	else
	{
		iVar5 = 32;
	}
	if (Global_2405071.f_2479.f_1 > 0 || Global_2405071.f_2479 > 0)
	{
		if (uParam1->f_5 || unk_0x6733602399899068())
		{
			iVar2 = 0;
			while (iVar2 < Global_2405071.f_2479.f_1)
			{
				if (iVar4 < iVar5)
				{
					if (iVar2 <= Global_2405071.f_2479.f_3)
					{
						iVar2 = Global_2405071.f_2479.f_3 + 1;
					}
					if (iVar2 > (Global_2405071.f_2479.f_1 - 1))
					{
						iVar2 = (Global_2405071.f_2479.f_1 - 1);
					}
					if (iVar2 < 0)
					{
						iVar2 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						unk_0x653ED9176EA96780(iVar2, &vVar0, &fVar1);
						fVar1 = (fVar1 * 57.29578f);
					}
					else
					{
						unk_0xC5E4A180D7650902(iVar2, &vVar0, &(vVar0.f_1), &(vVar0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar3 = unk_0xBDFCB927BB230A99(iVar2);
					}
					else
					{
						unk_0x01275BB7C5082A0E(iVar2, &iVar3);
					}
					func_112(vVar0, fVar1, uParam1, uParam2, 0, iVar3);
					iVar4++;
					Global_2405071.f_2479.f_3 = iVar2;
				}
				else
				{
					return 0;
				}
				iVar2++;
			}
		}
		else
		{
			iVar2 = Global_2405071.f_2479.f_1;
		}
		if (Global_2405071.f_2479.f_1 == iVar2)
		{
			if (uParam1->f_5 && Global_2405071.f_2876)
			{
				func_106(&(Global_2405071.f_2479.f_6[0 /*10*/]), &(Global_2405071.f_2479.f_6[1 /*10*/]), &(Global_2405071.f_2479.f_6[2 /*10*/]));
			}
			if (uParam1->f_5 && func_54(Global_2405071.f_484))
			{
				if (Global_2405071.f_2479.f_2)
				{
					func_53(uParam0, &(Global_2405071.f_2479.f_6));
					func_105(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2405071.f_2454 };
					func_55(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_16[0] = unk_0x9562E33C057F7589(0f, 360f);
					func_105(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2405071.f_2479.f_2)
			{
				func_53(uParam0, &(Global_2405071.f_2479.f_6));
				func_105(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar2 = unk_0x9EC3B269A34A2BEE(0, Global_2405071.f_2479.f_1);
				unk_0x653ED9176EA96780(iVar2, uParam0[0 /*3*/], &(uParam0->f_16[0]));
				if (!func_71(uParam0[0 /*3*/], 0))
				{
					uParam0->f_16[0] = (uParam0->f_16[0] * 57.29578f);
					func_105(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2405071.f_2454 };
					func_55(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_16[0] = unk_0x9562E33C057F7589(0f, 360f);
					func_105(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2405071.f_2454 };
				func_55(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_16[0] = unk_0x9562E33C057F7589(0f, 360f);
				func_105(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2405071.f_2454 };
		if (uParam1->f_5 && func_54(Global_2405071.f_484))
		{
			if (!Global_2405071.f_2479.f_5)
			{
				Global_2405071.f_2479.f_5 = 1;
			}
			else
			{
				func_55(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
			}
		}
		else
		{
			if (uParam1->f_15)
			{
				bVar6 = false;
			}
			else
			{
				bVar6 = true;
			}
			func_55(uParam0[0 /*3*/], 0, bVar6, 0, 0, uParam1, uParam2);
		}
		uParam0->f_16[0] = unk_0x9562E33C057F7589(0f, 360f);
		func_105(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_105(vector3 vParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_2405071.f_2613[(3 - iVar0) /*3*/] = { Global_2405071.f_2613[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_2405071.f_2613[0 /*3*/] = { vParam0 };
}

void func_106(var uParam0, var uParam1, var uParam2)
{
	if (func_54(Global_2405071.f_484) && func_111() < 4096)
	{
		func_110(uParam0, 0f);
		func_110(uParam1, uParam0->f_2);
		func_110(uParam2, uParam1->f_2);
	}
	else
	{
		func_109(uParam0);
		func_108(uParam2, uParam0->f_4);
		func_107(uParam1, uParam0->f_4, uParam2->f_4);
	}
}

void func_107(var uParam0, vector3 vParam1, vector3 vParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<10> Var5;
	
	fVar1 = -1f;
	Var5.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407993[iVar0 /*10*/] > 0)
		{
			fVar2 = vdist(Global_2407993[iVar0 /*10*/].f_4, vParam1);
			fVar3 = vdist(Global_2407993[iVar0 /*10*/].f_4, vParam2);
			fVar4 = (fVar2 + fVar3);
			fVar4 = (fVar4 * Global_2407993[iVar0 /*10*/].f_1);
			if (fVar4 > fVar1)
			{
				fVar1 = fVar4;
				Var5 = { Global_2407993[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var5 };
}

void func_108(var uParam0, vector3 vParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<10> Var3;
	
	fVar1 = -1f;
	Var3.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407993[iVar0 /*10*/] > 0)
		{
			fVar2 = vdist(Global_2407993[iVar0 /*10*/].f_4, vParam1);
			fVar2 = (fVar2 * Global_2407993[iVar0 /*10*/].f_1);
			if (fVar2 > fVar1)
			{
				fVar1 = fVar2;
				Var3 = { Global_2407993[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var3 };
}

void func_109(var uParam0)
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = -1f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407993[iVar0 /*10*/] > 0)
		{
			if (Global_2407993[iVar0 /*10*/].f_1 > fVar1)
			{
				fVar1 = Global_2407993[iVar0 /*10*/].f_1;
				Var2 = { Global_2407993[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

void func_110(var uParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = 999999.9f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407993[iVar0 /*10*/] > 0)
		{
			if (Global_2407993[iVar0 /*10*/].f_2 < fVar1 && Global_2407993[iVar0 /*10*/].f_2 > fParam1)
			{
				fVar1 = Global_2407993[iVar0 /*10*/].f_2;
				Var2 = { Global_2407993[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

int func_111()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407993[iVar0 /*10*/] > iVar1)
		{
			iVar1 = Global_2407993[iVar0 /*10*/];
		}
		iVar0++;
	}
	return iVar1;
}

void func_112(vector3 vParam0, float fParam1, var uParam2, var uParam3, bool bParam4, int iParam5)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	var uVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	vector3 vVar12;
	bool bVar13;
	int iVar14;
	vector3 vVar15;
	vector3 vVar16;
	float fVar17;
	int iVar18;
	struct<10> Var19;
	bool bVar20;
	bool bVar21;
	
	iVar10 = 0;
	iVar8 = 0;
	bVar9 = false;
	if (uParam2->f_5)
	{
		if (Global_2405071.f_484 == 1)
		{
			if (unk_0x7EECA16E87982278((Global_2405071.f_507.f_2 - vParam0.z)) < 25f)
			{
				iVar8++;
			}
		}
		else
		{
			iVar8++;
		}
	}
	else
	{
		iVar8++;
	}
	if (uParam2->f_5)
	{
		if (func_158(unk_0x95B959F18401C09A()))
		{
			if (iParam5 == -1)
			{
				bVar9 = true;
			}
			else if (!iParam5 & 1 == 0)
			{
				bVar9 = true;
			}
		}
		else if (iParam5 == -1)
		{
			iVar8 += 2;
		}
		else if (!iParam5 & 1 == 0)
		{
			iVar8 += 2;
		}
	}
	else
	{
		iVar8 += 2;
	}
	if (uParam2->f_5 && uParam2->f_6)
	{
		if (!func_157(vParam0, 1084227584, 1123024896, 0))
		{
			iVar8 += 4;
		}
	}
	else
	{
		iVar8 += 4;
	}
	if (uParam2->f_5)
	{
		if (!unk_0x6D4E1A5D98AE8372(unk_0x33CD235DF1E6A94E(), vParam0, 65f))
		{
			iVar8 += 8;
			iVar8 += 16;
		}
		else if (!unk_0x6D4E1A5D98AE8372(unk_0x33CD235DF1E6A94E(), vParam0, 20f))
		{
			iVar8 += 8;
		}
	}
	else
	{
		iVar8 += 8;
		iVar8 += 16;
	}
	if (uParam2->f_5)
	{
		if (!func_43(vParam0, uParam3->f_5, 1, 1, 1, 1, 1, 1))
		{
			iVar8 += 32;
		}
	}
	else
	{
		iVar8 += 32;
	}
	bVar13 = true;
	iVar11 = 0;
	while (iVar11 < 2)
	{
		if (vmag(uParam3->f_13[iVar11 /*3*/]) > 0f)
		{
			if (!vdist(vParam0, uParam3->f_13[iVar11 /*3*/]) > uParam3->f_20[iVar11])
			{
				bVar13 = false;
			}
		}
		iVar11++;
	}
	if (bVar13)
	{
		if ((vmag(uParam3->f_23) > 0f && vmag(uParam3->f_26) > 0f) && uParam3->f_29 > 0f)
		{
			if (unk_0xC2F708DE8AD68197(vParam0, uParam3->f_23, uParam3->f_26, uParam3->f_29, 0, true))
			{
				bVar13 = false;
			}
		}
	}
	if (bVar13)
	{
		iVar8 += 256;
	}
	if (uParam2->f_5)
	{
		if (func_151(vParam0, fParam1, uParam2->f_15, func_156(1), uParam2->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			iVar8 += 64;
			iVar8 += 128;
		}
		else
		{
			iVar10 = Global_2405071.f_3;
		}
	}
	else if (!func_148(vParam0, 25f, unk_0x95B959F18401C09A(), 1, 1))
	{
		if (uParam2->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_34(vParam0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar8 += 128;
			iVar8 += 64;
		}
		else if (!func_34(vParam0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar8 += 64;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_2405071.f_691)
		{
			vVar12 = { Global_2405071.f_507 };
			if (Global_2405071.f_484 == 26)
			{
				vVar12 = { Global_2405071.f_550.f_18 };
			}
			if (!func_87(vParam0, 0.5f))
			{
				if (func_93(vVar12))
				{
					if (!func_56(&vParam0, 0, 0, 0, 1) && !func_147(&vParam0, 0))
					{
						iVar8 += 512;
					}
				}
				else if (!func_147(&vParam0, 0))
				{
					iVar8 += 512;
				}
			}
		}
		else
		{
			iVar8 += 512;
		}
	}
	else if (!func_146(vParam0, 2.5f, 3))
	{
		iVar8 += 512;
	}
	if (uParam2->f_5)
	{
		if (!(func_145(unk_0x95B959F18401C09A()) && func_143(unk_0x95B959F18401C09A())))
		{
			if (!func_142(&vParam0, &(Global_2405071.f_2479.f_90), 0, 1065353216))
			{
				iVar8 += 1024;
			}
		}
		else
		{
			iVar8 += 1024;
		}
	}
	else
	{
		iVar8 += 1024;
	}
	if (uParam2->f_5)
	{
		if (!func_143(unk_0x95B959F18401C09A()))
		{
			if (!func_141(vParam0, &(Global_2405071.f_2479.f_57), &(Global_2405071.f_2479.f_90), 1073741824))
			{
				iVar8 += 2048;
			}
		}
		else
		{
			iVar8 += 2048;
		}
	}
	else
	{
		iVar8 += 2048;
	}
	if (func_140(vParam0))
	{
		if (uParam2->f_5)
		{
			if (func_54(Global_2405071.f_484))
			{
				if (func_96(vParam0, 0.01f))
				{
					iVar8 += 4096;
				}
			}
			else
			{
				iVar8 += 4096;
			}
		}
		else
		{
			iVar8 += 4096;
		}
	}
	if (uParam2->f_5)
	{
		if (func_139(vParam0))
		{
			iVar8 += 8192;
		}
	}
	else
	{
		iVar8 += 8192;
	}
	if (!Global_2405071.f_45.f_55)
	{
		iVar8 += 16384;
	}
	else if (uParam2->f_5)
	{
		if (!iParam5 & 1 == 0)
		{
			if (unk_0xDE9B75BB528AC06E(unk_0x90D2E06562D440E1(vParam0)))
			{
				iVar8 += 16384;
			}
		}
	}
	else if (!iParam5 & 2 == 0)
	{
		if (unk_0xDE9B75BB528AC06E(unk_0x90D2E06562D440E1(vParam0)))
		{
			iVar8 += 16384;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_2405071.f_691)
		{
			if (!func_88(&vParam0, 0, 0))
			{
				iVar8 = (iVar8 + 32768);
			}
		}
		else
		{
			iVar8 = (iVar8 + 32768);
		}
	}
	else
	{
		iVar8 = (iVar8 + 32768);
	}
	if (!func_71(&vParam0, 0))
	{
		iVar8 = (iVar8 + 65536);
	}
	else
	{
		iVar14 = func_95(vParam0, 1008981770);
		if (iVar14 > -1)
		{
			func_138(vParam0, &vVar15, &vVar16, &fVar17);
			if (!func_133(&(Global_2405071.f_45[iVar14 /*12*/]), vVar15, vVar16, fVar17))
			{
				iVar8 = -1;
			}
		}
		else
		{
			iVar8 = -1;
		}
	}
	if (func_74(vParam0, 1056964608))
	{
		iVar8 = -1;
	}
	if (uParam3->f_33)
	{
		if (unk_0xBEEA641EE4F42DBD(vParam0.x, vParam0.y, (vParam0.z + 1f), 0.3f))
		{
			iVar8 = -1;
		}
	}
	if (uParam3->f_34)
	{
		if (unk_0x7E0147E36EF8D6AC(vParam0.x, vParam0.y, (vParam0.z + 1f), 1f))
		{
			iVar8 = -1;
		}
	}
	if (uParam2->f_5)
	{
	}
	else if (func_132(vParam0, 1, 0, uParam2->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar8 = 0;
	}
	Var19.f_2 = 1176256410;
	bVar20 = false;
	bVar21 = false;
	if (Global_2405071.f_2876 && uParam2->f_5)
	{
		if (iVar8 > 0)
		{
			if (bParam4)
			{
				uParam3->f_4 = 0;
				bVar4 = false;
			}
			else
			{
				bVar4 = true;
			}
			if (uParam2->f_21)
			{
				fVar0 = func_124(vParam0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			else
			{
				fVar0 = func_124(vParam0, Global_2405071.f_2454, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			if (bVar9)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (func_54(Global_2405071.f_484) && iVar8 < 4096)
			{
				Var19.f_2 = func_122(vParam0);
			}
			uVar7 = func_117(vParam0, 1, 0, 0, 0, 0);
			Var19.f_4 = { vParam0 };
			Var19.f_7 = fParam1;
			Var19 = iVar8;
			Var19.f_1 = fVar0;
			Var19.f_9 = uVar7;
			func_116(Var19);
			Global_2405071.f_2479.f_2 = 1;
		}
	}
	else
	{
		iVar18 = 0;
		while (iVar18 < 5)
		{
			if (iVar8 >= Global_2405071.f_2479.f_6[iVar18 /*10*/])
			{
				if (uParam2->f_5)
				{
					if (!bVar20)
					{
						if (bParam4)
						{
							uParam3->f_4 = 0;
							bVar4 = false;
						}
						else
						{
							bVar4 = true;
						}
						if (uParam2->f_21)
						{
							fVar0 = func_124(vParam0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						else
						{
							fVar0 = func_124(vParam0, Global_2405071.f_2454, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						if (bVar9)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar20 = true;
					}
					if ((func_54(Global_2405071.f_484) && iVar8 == Global_2405071.f_2479.f_6[iVar18 /*10*/]) && iVar8 < 4096)
					{
						if (!bVar21)
						{
							fVar2 = func_122(vParam0);
							bVar21 = true;
						}
						if (fVar2 < Global_2405071.f_2479.f_6[iVar18 /*10*/].f_2)
						{
							Var19.f_4 = { vParam0 };
							Var19.f_7 = fParam1;
							Var19 = iVar8;
							Var19.f_1 = fVar0;
							Var19.f_2 = fVar2;
							func_115(Var19, iVar18);
							Global_2405071.f_2479.f_2 = 1;
							return;
						}
					}
					else if (iVar8 > Global_2405071.f_2479.f_6[iVar18 /*10*/] || (iVar8 == Global_2405071.f_2479.f_6[iVar18 /*10*/] && fVar0 > Global_2405071.f_2479.f_6[iVar18 /*10*/].f_1))
					{
						Var19.f_4 = { vParam0 };
						Var19.f_7 = fParam1;
						Var19 = iVar8;
						Var19.f_1 = fVar0;
						func_115(Var19, iVar18);
						Global_2405071.f_2479.f_2 = 1;
						return;
					}
				}
				else
				{
					if (!bVar20)
					{
						if (uParam2->f_15)
						{
							fVar1 = 3.5f;
						}
						else
						{
							fVar1 = 1f;
						}
						fVar5 = func_114(vParam0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = func_117(vParam0, 1, 1, 1, 1, 0);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = func_113(fVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = func_113(fVar6, 0f, 80f, 160f, 0f, 0.2f);
						}
						bVar20 = true;
					}
					if (iVar8 > Global_2405071.f_2479.f_6[iVar18 /*10*/] || (iVar8 == Global_2405071.f_2479.f_6[iVar18 /*10*/] && fVar3 > Global_2405071.f_2479.f_6[iVar18 /*10*/].f_3))
					{
						Var19.f_4 = { vParam0 };
						Var19.f_7 = fParam1;
						Var19 = iVar8;
						Var19.f_3 = fVar3;
						func_115(Var19, iVar18);
						Global_2405071.f_2479.f_2 = 1;
						return;
					}
				}
			}
			iVar18++;
		}
	}
}

float func_113(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	float fVar0;
	
	if (fParam1 >= fParam3)
	{
		fParam1 = (fParam3 * 0.5f);
	}
	if (fParam0 < fParam1)
	{
		fParam0 = fParam1;
	}
	if (fParam0 > fParam3)
	{
		fParam0 = fParam3;
	}
	if (fParam2 < fParam3 && fParam2 > fParam1)
	{
		if (fParam0 < fParam2)
		{
			fVar0 = (fParam4 + ((1f - fParam4) - ((1f - fParam4) * ((fParam2 - fParam0) / (fParam2 - fParam1)))));
		}
		else
		{
			fVar0 = (fParam5 + ((1f - fParam5) - ((1f - fParam5) * ((fParam0 - fParam2) / (fParam3 - fParam2)))));
		}
	}
	else
	{
		fVar0 = (fParam4 + (((fParam0 - fParam1) / (fParam3 - fParam1)) * (fParam5 - fParam4)));
	}
	return fVar0;
}

float func_114(vector3 vParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	
	bVar2 = false;
	fVar3 = 1E+13f;
	if (iParam2 && !bParam4)
	{
		if (func_1228(unk_0x95B959F18401C09A(), 1, 1))
		{
			if (!unk_0xBB5E373390A5F824())
			{
				if (unk_0x73E7A21FD53144AB(vParam0, fParam1))
				{
					fVar4 = vdist2(vParam0, unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false));
					if (fVar4 < fVar3)
					{
						fVar3 = fVar4;
						bVar2 = true;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_1228(iVar1, 1, 1))
		{
			if (!func_36(iVar1, 0) && unk_0xB4B29C6A8F481EEA(unk_0x95B959F18401C09A(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0x95B959F18401C09A()))
				{
					if (func_35(iVar1) || !bParam6)
					{
						if (!bParam4)
						{
							if ((iParam3 || (iParam3 == 0 && unk_0x12D3B4C76D4AAB00(iVar1) != unk_0x12D3B4C76D4AAB00(unk_0x95B959F18401C09A()))) || unk_0x12D3B4C76D4AAB00(iVar1) == -1)
							{
								if (unk_0x0E3238518B355643(iVar1, vParam0, fParam1))
								{
									fVar4 = vdist2(vParam0, unk_0xFBB1F99A825CAB09(unk_0x378BD4B3881338C2(iVar1), false));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (unk_0x12D3B4C76D4AAB00(iVar1) != iParam5 || unk_0x12D3B4C76D4AAB00(iVar1) == -1)
						{
							if (unk_0x0E3238518B355643(iVar1, vParam0, fParam1))
							{
								fVar4 = vdist2(vParam0, unk_0xFBB1F99A825CAB09(unk_0x378BD4B3881338C2(iVar1), false));
								if (fVar4 < fVar3)
								{
									fVar3 = fVar4;
									bVar2 = true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		return sqrt(fVar3);
	}
	return -1f;
}

void func_115(struct<10> Param0, int iParam1)
{
	struct<10> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = { Global_2405071.f_2479.f_6[iParam1 /*10*/] };
	Global_2405071.f_2479.f_6[iParam1 /*10*/] = { Param0 };
	if (iParam1 < 4)
	{
		func_115(Var0, iParam1 + 1);
	}
}

void func_116(struct<10> Param0)
{
	int iVar0;
	struct<10> Var1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	Var1.f_2 = 1176256410;
	iVar2 = func_111();
	if (Param0 > iVar2)
	{
		iVar2 = Param0;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407993[iVar0 /*10*/] < iVar2)
		{
			Global_2407993[iVar0 /*10*/] = { Var1 };
		}
		iVar0++;
	}
	if (Param0 < iVar2)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407993[iVar0 /*10*/] == 0)
		{
			Global_2407993[iVar0 /*10*/] = { Param0 };
			return;
		}
		iVar0++;
	}
	fVar3 = 9999.9f;
	iVar4 = -1;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407993[iVar0 /*10*/] > 0)
		{
			if (Global_2407993[iVar0 /*10*/].f_1 < fVar3)
			{
				fVar3 = Global_2407993[iVar0 /*10*/].f_1;
				iVar4 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar4 > -1)
	{
		Global_2407993[iVar4 /*10*/] = { Param0 };
	}
}

float func_117(vector3 vParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar6;
	int iVar7;
	
	fVar3 = 999999.9f;
	bVar4 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar7 = iVar0;
		if (func_1228(iVar7, 1, 1) || (iParam5 == 1 && func_1228(iVar7, 0, 0)))
		{
			if (!iVar7 == unk_0x95B959F18401C09A() || iParam3 == 1)
			{
				bVar4 = false;
				if (bParam1)
				{
					if (func_118(iVar7))
					{
						bVar4 = true;
					}
				}
				if (bParam2)
				{
					if (unk_0x12D3B4C76D4AAB00(iVar7) == unk_0x12D3B4C76D4AAB00(unk_0x95B959F18401C09A()))
					{
						if (!unk_0x12D3B4C76D4AAB00(iVar7) == -1 || !func_97(unk_0x95B959F18401C09A(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (unk_0xB4B29C6A8F481EEA(unk_0x95B959F18401C09A(), iVar7) || !bParam4)
					{
						if (func_35(iVar7))
						{
							vVar5 = { func_40(iVar7) };
							if (!iVar7 == unk_0x95B959F18401C09A())
							{
								vVar6 = { unk_0x9DFA154D409C82CB(unk_0x378BD4B3881338C2(iVar7)) };
							}
							else
							{
								vVar6 = { vVar5 };
							}
							if (!bParam4)
							{
								if (vVar5.z < -100f)
								{
									vVar5.z = vParam0.z;
								}
								if (vVar6.z < -100f)
								{
									vVar6.z = vParam0.z;
								}
							}
							fVar1 = unk_0x16E00F066AFFEA0D(vParam0, vVar5, true);
							fVar2 = unk_0x16E00F066AFFEA0D(vParam0, vVar6, true);
							if (fVar1 < fVar3)
							{
								fVar3 = fVar1;
							}
							if (fVar2 < fVar3)
							{
								fVar3 = fVar2;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return fVar3;
}

int func_118(int iParam0)
{
	if (func_1228(iParam0, 0, 1))
	{
		if (!func_120(iParam0))
		{
			if (unk_0xB4B29C6A8F481EEA(unk_0x95B959F18401C09A(), iParam0))
			{
				if (!unk_0x12D3B4C76D4AAB00(iParam0) == unk_0x12D3B4C76D4AAB00(unk_0x95B959F18401C09A()))
				{
					if (func_83(unk_0x95B959F18401C09A(), 1))
					{
						if (!func_119(unk_0x12D3B4C76D4AAB00(iParam0), unk_0x12D3B4C76D4AAB00(unk_0x95B959F18401C09A()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0x12D3B4C76D4AAB00(iParam0) == -1 && unk_0x12D3B4C76D4AAB00(unk_0x95B959F18401C09A()) == -1)
				{
					if (!func_83(unk_0x95B959F18401C09A(), 1))
					{
						if (!func_44(iParam0))
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
		}
	}
	return 0;
}

int func_119(int iParam0, int iParam1, int iParam2)
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

int func_120(int iParam0)
{
	if (func_36(iParam0, 0))
	{
		return 1;
	}
	if (func_121())
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

bool func_121()
{
	return unk_0x0E4018692D92041D(Global_2359302, 3);
}

float func_122(vector3 vParam0)
{
	var uVar0;
	
	return func_123(vParam0, &(Global_2405071.f_45), &uVar0);
}

float func_123(vector3 vParam0, var uParam1, var uParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = -1;
	fVar2 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if ((uParam1[iVar0 /*12*/])->f_9)
		{
			fVar1 = 0f;
			switch ((uParam1[iVar0 /*12*/])->f_10)
			{
				case 0:
					fVar1 = vdist(*(uParam1[iVar0 /*12*/]), vParam0);
					fVar1 = (fVar1 - ((uParam1[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2405071.f_2722) * (uParam1[iVar0 /*12*/])->f_8)));
					break;
				
				case 1:
				case 2:
					if (vParam0.x < (*uParam1)[iVar0 /*12*/])
					{
						fVar1 = (fVar1 + ((*uParam1)[iVar0 /*12*/] - vParam0.x));
					}
					else if (vParam0.x > (uParam1[iVar0 /*12*/])->f_3)
					{
						fVar1 = (fVar1 + (vParam0.x - (uParam1[iVar0 /*12*/])->f_3));
					}
					if (vParam0.y < (uParam1[iVar0 /*12*/])->f_1)
					{
						fVar1 = (fVar1 + ((uParam1[iVar0 /*12*/])->f_1 - vParam0.y));
					}
					else if (vParam0.y > (uParam1[iVar0 /*12*/])->f_3.f_1)
					{
						fVar1 = (fVar1 + (vParam0.y - (uParam1[iVar0 /*12*/])->f_3.f_1));
					}
					if (vParam0.z < (uParam1[iVar0 /*12*/])->f_2)
					{
						fVar1 = (fVar1 + ((uParam1[iVar0 /*12*/])->f_2 - vParam0.z));
					}
					else if (vParam0.z > (uParam1[iVar0 /*12*/])->f_3.f_2)
					{
						fVar1 = (fVar1 + (vParam0.z - (uParam1[iVar0 /*12*/])->f_3.f_2));
					}
					break;
			}
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	if (fVar2 < 0f)
	{
		fVar2 = 0f;
	}
	*uParam2 = iVar3;
	return fVar2;
}

float func_124(vector3 vParam0, vector3 vParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, var uParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	fVar1 = 1f;
	if (iParam5 > 0)
	{
		fVar1 = (to_float(iParam5) / to_float(8));
	}
	if (bParam2)
	{
		fVar0 = func_113(vdist(vParam0, vParam1), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	*uParam6 = 1E+07f;
	fVar4 = func_117(vParam0, 1, 0, 0, 1, 0);
	fVar0 = func_113(fVar4, 0f, func_131(), func_129(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	fVar4 = func_127(vParam0);
	fVar0 = func_113(fVar4, 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (unk_0x12D3B4C76D4AAB00(unk_0x95B959F18401C09A()) == -1 && !func_97(unk_0x95B959F18401C09A(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = func_126(vParam0, unk_0x95B959F18401C09A(), 0);
	fVar0 = func_113(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	if (bParam3)
	{
		if (func_125(vParam0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_113(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + func_113(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam4)
	{
		fVar0 = func_113(vdist(Global_2405071.f_507, vParam0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_125(vector3 vParam0, var uParam1, var uParam2)
{
	vector3 vVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	iVar1 = unk_0x482D46B42779DC80(vParam0, 1, &uVar3, &uVar2, 1, 3f, 0f);
	if (unk_0xE23E0C76E7F802F6(iVar1))
	{
		unk_0x2119DC81E4EDBA78(iVar1, &vVar0);
		*uParam1 = vdist(vParam0.x, vParam0.y, 0f, vVar0.x, vVar0.y, 0f);
		*uParam2 = unk_0x7EECA16E87982278((vParam0.z - vVar0.z));
		return 1;
	}
	return 0;
}

float func_126(vector3 vParam0, int iParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 999999.9f;
	if (func_1228(iParam1, 0, 1))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			if (!iParam1 == iVar2 || iParam2 == 1)
			{
				iVar3 = iVar2;
				if (func_1228(iVar3, 0, 1))
				{
					if (unk_0x12D3B4C76D4AAB00(iVar3) != unk_0x12D3B4C76D4AAB00(iParam1) || (unk_0x12D3B4C76D4AAB00(iVar3) == -1 && unk_0x12D3B4C76D4AAB00(iParam1) == -1))
					{
						if (Global_2417757.f_261[iVar2])
						{
							fVar1 = vdist(Global_2417757.f_131[iVar2 /*3*/], vParam0);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	return fVar0;
}

float func_127(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	vector3 vVar3;
	var uVar4[32];
	int iVar5;
	
	iVar5 = unk_0xB62DA19846051096(unk_0x33CD235DF1E6A94E(), &uVar4, 2);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar5)
	{
		if (unk_0x765F6FEEFF39224F(uVar4[iVar2]))
		{
			if (!unk_0xD62C4419A41F106A(uVar4[iVar2], 0))
			{
				if (func_128(uVar4[iVar2]))
				{
					vVar3 = { unk_0xFBB1F99A825CAB09(uVar4[iVar2], true) };
					fVar1 = unk_0x16E00F066AFFEA0D(vParam0, vVar3, true);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
			}
		}
		iVar2++;
	}
	if (Global_2405071.f_2921)
	{
		if (Global_969025.f_254 > 0)
		{
			iVar2 = 0;
			while (iVar2 < Global_969025.f_254)
			{
				if (unk_0x765F6FEEFF39224F(Global_969025.f_139[iVar2]))
				{
					if (!unk_0xD62C4419A41F106A(Global_969025.f_139[iVar2], 0))
					{
						if (func_128(Global_969025.f_139[iVar2]))
						{
							vVar3 = { unk_0xFBB1F99A825CAB09(Global_969025.f_139[iVar2], true) };
							fVar1 = unk_0x16E00F066AFFEA0D(vParam0, vVar3, true);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return fVar0;
}

int func_128(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0xC408CC95C7202D67(iParam0);
	switch (unk_0x9AA1574E00850065(iVar0, 1862763509))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (unk_0xA2BBDC0B3CC54EBF(Global_1574954[unk_0x95B959F18401C09A()]))
	{
		switch (unk_0x9AA1574E00850065(iVar0, Global_1574954[unk_0x95B959F18401C09A()]))
		{
			case 3:
			case 5:
				return 1;
				break;
			}
	}
	if (Global_1589819[unk_0x95B959F18401C09A() /*818*/] == 0)
	{
		iVar1 = unk_0x12D3B4C76D4AAB00(unk_0x95B959F18401C09A());
		if (iVar1 > -1 && iVar1 < 4)
		{
			if (unk_0xA2BBDC0B3CC54EBF(Global_1574664[iVar1]))
			{
				switch (unk_0x9AA1574E00850065(iVar0, Global_1574664[iVar1]))
				{
					case 3:
					case 5:
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

float func_129()
{
	if (func_130())
	{
		if ((unk_0x57D74362A8BD1490(Global_2405071.f_45.f_67) || unk_0x097E7778E3E162E8(Global_2405071.f_45.f_67)) || Global_2405071.f_45.f_67 == joaat("rhino"))
		{
			return 640f;
		}
		else
		{
			return 320f;
		}
	}
	return 160f;
}

int func_130()
{
	if (Global_2405071.f_45.f_65 && !Global_2405071.f_45.f_301)
	{
		if (!func_120(unk_0x95B959F18401C09A()))
		{
			return 1;
		}
	}
	return 0;
}

float func_131()
{
	if (func_130())
	{
		if ((unk_0x57D74362A8BD1490(Global_2405071.f_45.f_67) || unk_0x097E7778E3E162E8(Global_2405071.f_45.f_67)) || Global_2405071.f_45.f_67 == joaat("rhino"))
		{
			return 320f;
		}
		else
		{
			return 160f;
		}
	}
	return 80f;
}

int func_132(vector3 vParam0, int iParam1, int iParam2, bool bParam3, int iParam4, float fParam5, float fParam6, float fParam7)
{
	float fVar0;
	
	fVar0 = iParam4;
	if (bParam3)
	{
		fVar0 = fParam5;
	}
	if ((((fParam5 > 0f && unk_0x7E0147E36EF8D6AC(vParam0, fParam5)) || (fVar0 > 0f && unk_0xBEEA641EE4F42DBD(vParam0, fVar0))) || ((iParam2 == 1 && fParam6 > 0f) && unk_0xC106293D8BB9B710(vParam0, fParam6, 0))) || ((iParam1 == 1 && fParam7 > 0f) && unk_0xC106293D8BB9B710(vParam0, fParam7, 1)))
	{
		return 1;
	}
	return 0;
}

int func_133(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3)
{
	switch (uParam0->f_10)
	{
		case 0:
			if (func_137(*uParam0, uParam0->f_6, vParam1, vParam2, fParam3))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_136(*uParam0, uParam0->f_3, vParam1, vParam2, fParam3))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_134(*uParam0, uParam0->f_3, uParam0->f_6, vParam1, vParam2, fParam3))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_134(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, vector3 vParam4, float fParam5)
{
	vector3 vVar0[8];
	int iVar1;
	
	func_135(vParam0, vParam1, fParam2, &vVar0);
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (!unk_0xC2F708DE8AD68197(vVar0[iVar1 /*3*/], vParam3, vParam4, fParam5, 0, true))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

void func_135(vector3 vParam0, vector3 vParam1, float fParam2, var uParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	var uVar2;
	var uVar3;
	
	if (vParam0.z == vParam1.z)
	{
		vParam1.z = (vParam1.z + 0.01f);
	}
	vVar0 = { vParam0 - vParam1 };
	vVar1 = { func_60(vVar0, vVar0.x, vVar0.y, 0f) };
	vVar1 = { vVar1 / FtoV(vmag(vVar1)) };
	vVar1 = { vVar1 * FtoV((fParam2 * 0.5f)) };
	if (vParam0.z > vParam1.z)
	{
		uVar2 = vParam1.z;
		uVar3 = vParam0.z;
	}
	else
	{
		uVar2 = vParam0.z;
		uVar3 = vParam1.z;
	}
	*(uParam3[0 /*3*/]) = { Vector(uVar2, vParam0.y, vParam0.x) + vVar1 };
	*(uParam3[1 /*3*/]) = { Vector(uVar2, vParam0.y, vParam0.x) - vVar1 };
	*(uParam3[2 /*3*/]) = { Vector(uVar3, vParam0.y, vParam0.x) - vVar1 };
	*(uParam3[3 /*3*/]) = { Vector(uVar3, vParam0.y, vParam0.x) + vVar1 };
	*(uParam3[4 /*3*/]) = { Vector(uVar2, vParam1.y, vParam1.x) + vVar1 };
	*(uParam3[5 /*3*/]) = { Vector(uVar2, vParam1.y, vParam1.x) - vVar1 };
	*(uParam3[6 /*3*/]) = { Vector(uVar3, vParam1.y, vParam1.x) - vVar1 };
	*(uParam3[7 /*3*/]) = { Vector(uVar3, vParam1.y, vParam1.x) + vVar1 };
}

int func_136(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, float fParam4)
{
	vector3 vVar0[8];
	int iVar1;
	
	vVar0[0 /*3*/] = { vParam0.x, vParam0.y, vParam0.z };
	vVar0[1 /*3*/] = { vParam0.x, vParam0.y, vParam1.z };
	vVar0[2 /*3*/] = { vParam0.x, vParam1.y, vParam1.z };
	vVar0[3 /*3*/] = { vParam0.x, vParam1.y, vParam0.z };
	vVar0[4 /*3*/] = { vParam1.x, vParam0.y, vParam0.z };
	vVar0[5 /*3*/] = { vParam1.x, vParam0.y, vParam1.z };
	vVar0[6 /*3*/] = { vParam1.x, vParam1.y, vParam1.z };
	vVar0[7 /*3*/] = { vParam1.x, vParam1.y, vParam0.z };
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (!unk_0xC2F708DE8AD68197(vVar0[iVar1 /*3*/], vParam2, vParam3, fParam4, 0, true))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

int func_137(vector3 vParam0, float fParam1, vector3 vParam2, vector3 vParam3, float fParam4)
{
	vector3 vVar0[4];
	int iVar1;
	
	vVar0[0 /*3*/] = { vParam0 + Vector(0f, fParam1, 0f) };
	vVar0[1 /*3*/] = { vParam0 + Vector(0f, (-1f * fParam1), 0f) };
	vVar0[2 /*3*/] = { vParam0 + Vector(0f, 0f, fParam1) };
	vVar0[3 /*3*/] = { vParam0 + Vector(0f, 0f, (-1f * fParam1)) };
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (!unk_0xC2F708DE8AD68197(vVar0[iVar1 /*3*/], vParam2, vParam3, fParam4, 0, true))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

void func_138(vector3 vParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	
	vVar1 = { vParam0 };
	iVar2 = func_73(vVar1);
	iVar0 = 0;
	while (iVar0 < Global_2411443[iVar2])
	{
		if (func_72(vVar1, &(Global_2410173[iVar2 /*141*/][iVar0 /*7*/])))
		{
			*uParam1 = { Global_2410173[iVar2 /*141*/][iVar0 /*7*/] };
			*uParam2 = { Global_2410173[iVar2 /*141*/][iVar0 /*7*/].f_3 };
			*uParam3 = Global_2410173[iVar2 /*141*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411443[8])
	{
		if (func_72(vVar1, &(Global_2410173[8 /*141*/][iVar0 /*7*/])))
		{
			*uParam1 = { Global_2410173[8 /*141*/][iVar0 /*7*/] };
			*uParam2 = { Global_2410173[8 /*141*/][iVar0 /*7*/].f_3 };
			*uParam3 = Global_2410173[8 /*141*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
}

int func_139(vector3 vParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2405071.f_45.f_55)
	{
		if (unk_0xDE9B75BB528AC06E(Global_2405071.f_45.f_56))
		{
			if (!unk_0xA4EE7D490EB4E0C9(vParam0))
			{
				iVar0 = unk_0x90D2E06562D440E1(vParam0);
				if (unk_0xDE9B75BB528AC06E(iVar0))
				{
					iVar1 = unk_0xE056C244FACC746C(iVar0);
					if (!iVar1 == Global_2405071.f_45.f_57)
					{
						return 0;
					}
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
	}
	return 1;
}

int func_140(vector3 vParam0)
{
	switch (Global_2405071.f_2475)
	{
		case 0:
			return func_170(vParam0, Global_2405071.f_2454, Global_2405071.f_2457, 0, 0);
			break;
		
		case 1:
			return func_100(vParam0, Global_2405071.f_2468, Global_2405071.f_2471, 0, 0);
			break;
		
		case 2:
			return unk_0xC2F708DE8AD68197(vParam0, Global_2405071.f_2468, Global_2405071.f_2471, Global_2405071.f_2474, 0, true);
			break;
	}
	return 0;
}

int func_141(vector3 vParam0, var uParam1, var uParam2, float fParam3)
{
	float fVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	
	fVar0 = 0f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < *uParam1)
	{
		fVar0 = ((uParam1[iVar1 /*4*/])->f_3 + fParam3);
		if (vdist(*(uParam1[iVar1 /*4*/]), vParam0) < fVar0)
		{
			return 1;
		}
		iVar1++;
	}
	vVar2 = { 0f, 0f, 0f };
	vVar3 = { 0f, 0f, 0f };
	fVar4 = 0f;
	iVar1 = 0;
	while (iVar1 < *uParam2)
	{
		vVar2 = { *(uParam2[iVar1 /*10*/]) };
		vVar3 = { (uParam2[iVar1 /*10*/])->f_3 };
		fVar4 = (uParam2[iVar1 /*10*/])->f_6;
		if (unk_0xC2F708DE8AD68197(vParam0, vVar2, vVar3, fVar4, 0, true))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_142(var uParam0, var uParam1, bool bParam2, float fParam3)
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (vdist((uParam1[iVar0 /*10*/])->f_7, *uParam0) < (80f * fParam3))
		{
			if (bParam2)
			{
				vVar1 = { *uParam0 };
				func_62(&vVar1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_143(int iParam0)
{
	switch (Global_1312448)
	{
		case 0:
			if (!func_144(iParam0))
			{
				if (Global_1589819[iParam0 /*818*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_144(int iParam0)
{
	return Global_1589819[iParam0 /*818*/].f_196 != 0;
}

int func_145(int iParam0)
{
	if (func_83(iParam0, 1))
	{
		if (Global_1589819[iParam0 /*818*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_146(vector3 vParam0, float fParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (vdist2(Global_2405071.f_2613[iVar0 /*3*/], vParam0) < (fParam1 * fParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_147(var uParam0, bool bParam1)
{
	var uVar0;
	vector3 vVar1;
	float fVar2;
	
	if (func_89(*uParam0))
	{
		if (bParam1)
		{
			vVar1 = { *uParam0 };
			fVar2 = unk_0x9562E33C057F7589(0.01f, 360f);
			func_62(&vVar1, Global_2405071.f_585, Global_2405071.f_588, 1036831949, 0, fVar2);
			if (func_90(vVar1, &uVar0) || func_89(vVar1))
			{
				vVar1 = { *uParam0 };
				func_62(&vVar1, Global_2405071.f_585, Global_2405071.f_588, 1036831949, 1, fVar2);
			}
			*uParam0 = { vVar1 };
		}
	}
	return 0;
}

int func_148(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_150(vParam0, fParam1, iParam2, iParam3, 0) || func_149(vParam0, iParam2, iParam4))
	{
		return 1;
	}
	return 0;
}

int func_149(vector3 vParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam1 == iVar0 || iParam2 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (!Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
				{
					if (func_75(vParam0, Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
					{
						if (func_1228(iVar2, 0, 1) && func_1228(iParam1, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_150(vector3 vParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam2 == iVar0 || iParam3 == 1)
		{
			iVar1 = iVar0;
			bVar2 = false;
			if (bParam4)
			{
				if (func_1228(iVar1, 0, 1) && func_1228(iParam2, 0, 1))
				{
					if (unk_0x12D3B4C76D4AAB00(iVar1) == unk_0x12D3B4C76D4AAB00(iParam2))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_1228(iVar1, 0, 1) && func_1228(iParam2, 0, 1))
				{
					if (Global_2417757.f_261[iVar0])
					{
						if (vdist(Global_2417757.f_131[iVar0 /*3*/], vParam0) < fParam1)
						{
							return 1;
						}
					}
					else if (vdist(func_40(iVar1), vParam0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2417757.f_261[iVar0])
				{
					if (vdist(Global_2417757.f_131[iVar0 /*3*/], vParam0) < fParam1)
					{
						return 1;
					}
				}
				else if (func_1228(iVar1, 0, 1))
				{
					if (vdist(func_40(iVar1), vParam0) < 1f)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_151(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, bool bParam12, bool bParam13)
{
	Global_2405071.f_3 = 0;
	if (!func_148(vParam0, 0.5f, unk_0x95B959F18401C09A(), 0, 0))
	{
		Global_2405071.f_3++;
		if (bParam3)
		{
			if (func_33(vParam0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
			{
				Global_2405071.f_3 = (Global_2405071.f_3 + Global_2405071.f_2);
				if (!func_155(vParam0, fParam10))
				{
					Global_2405071.f_3++;
					if (!func_74(vParam0, 1056964608))
					{
						Global_2405071.f_3++;
						return 1;
					}
				}
			}
			else
			{
				Global_2405071.f_3 = (Global_2405071.f_3 + Global_2405071.f_2);
			}
		}
		else if (!bParam2)
		{
			if (func_33(vParam0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
			{
				Global_2405071.f_3 = (Global_2405071.f_3 + Global_2405071.f_2);
				if (!func_155(vParam0, fParam10))
				{
					Global_2405071.f_3++;
					if (!func_152(vParam0, fParam1, fParam7, fParam8, 1084227584))
					{
						Global_2405071.f_3++;
						if (!func_74(vParam0, 1056964608))
						{
							Global_2405071.f_3++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2405071.f_3 = (Global_2405071.f_3 + Global_2405071.f_2);
			}
		}
		else if (func_33(vParam0, 6f, 5f, 5f, 5f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
		{
			Global_2405071.f_3 = (Global_2405071.f_3 + Global_2405071.f_2);
			if (!func_155(vParam0, fParam10))
			{
				Global_2405071.f_3++;
				if (!func_152(vParam0, fParam1, fParam7, fParam8, fParam9))
				{
					Global_2405071.f_3++;
					if (!func_74(vParam0, 1056964608))
					{
						Global_2405071.f_3++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2405071.f_3 = (Global_2405071.f_3 + Global_2405071.f_2);
		}
	}
	return 0;
}

int func_152(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!unk_0x95B959F18401C09A() == iVar1)
		{
			if ((func_1228(iVar1, 1, 1) && func_35(iVar1)) && unk_0xB4B29C6A8F481EEA(unk_0x95B959F18401C09A(), iVar1))
			{
				if (!func_154(unk_0x95B959F18401C09A(), iVar1, -2, 0))
				{
					if (func_153(func_40(iVar1), vParam0, fParam1, fParam2, fParam3, fParam4))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_153(vector3 vParam0, vector3 vParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	vector3 vVar0;
	vector3 vVar1;
	
	fParam2 = (fParam2 * -1f);
	fParam2 = (fParam2 + 360f);
	vVar0.x = sin(fParam2);
	vVar0.y = cos(fParam2);
	vVar0.z = 0f;
	vVar0 = { vVar0 / FtoV(vmag(vVar0)) };
	vVar0 = { vVar0 * Vector(fParam3, fParam3, fParam3) };
	vVar1 = { vParam1 + vVar0 };
	vVar1.z = vParam1.z;
	vVar1.z = (vVar1.z + fParam5);
	vParam1.z = (vParam1.z + fParam5);
	return unk_0xC2F708DE8AD68197(vParam0, vParam1, vVar1, fParam4, 0, true);
}

bool func_154(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_155(vector3 vParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_1228(iVar1, 1, 1) && func_35(iVar1)) && unk_0xB4B29C6A8F481EEA(unk_0x95B959F18401C09A(), iVar1))
		{
			if ((unk_0x12D3B4C76D4AAB00(unk_0x95B959F18401C09A()) == -1 && unk_0x12D3B4C76D4AAB00(iVar1) == -1) && !func_97(unk_0x95B959F18401C09A(), 1))
			{
				return 0;
			}
			else if ((unk_0x12D3B4C76D4AAB00(unk_0x95B959F18401C09A()) == -1 && !unk_0x95B959F18401C09A() == iVar1) || !func_154(unk_0x95B959F18401C09A(), iVar1, -2, 0))
			{
				if (vdist(vParam0, func_40(iVar1)) < fParam1)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_156(int iParam0)
{
	if ((Global_2405071.f_484 == 9 || Global_2405071.f_484 == 9) || (Global_2405071.f_484 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_157(vector3 vParam0, float fParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = unk_0x12D3B4C76D4AAB00(unk_0x95B959F18401C09A());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_1228(iVar1, 1, 1))
			{
				if ((!func_36(iVar1, 0) && unk_0xB4B29C6A8F481EEA(unk_0x95B959F18401C09A(), iVar1)) && iVar1 != unk_0x95B959F18401C09A())
				{
					fVar2 = iParam2;
					if (fParam3 > 0f)
					{
						if (!unk_0x12D3B4C76D4AAB00(iVar1) == -1)
						{
							if (unk_0x12D3B4C76D4AAB00(iVar1) == unk_0x12D3B4C76D4AAB00(unk_0x95B959F18401C09A()))
							{
								fVar2 = fParam3;
							}
						}
					}
					if (unk_0x12D3B4C76D4AAB00(iVar1) == iVar3)
					{
						if (unk_0x16E00F066AFFEA0D(func_40(iVar1), vParam0, true) <= (fVar2 + fParam1))
						{
							if (unk_0x0E3238518B355643(iVar1, vParam0, fParam1))
							{
								return 1;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_158(int iParam0)
{
	if (((func_97(iParam0, 1) || func_161(iParam0)) || func_160(iParam0, 0)) || func_159(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_159(int iParam0)
{
	if (!func_1228(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1589819[iParam0 /*818*/].f_35;
}

int func_160(int iParam0, int iParam1)
{
	if (Global_1626536[iParam0 /*603*/].f_11.f_33 != -1 || (iParam1 && Global_1626536[iParam0 /*603*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_161(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1626536[iVar0 /*603*/] != -1;
	}
	return 0;
}

void func_162(vector3 vParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	struct<8> Var4;
	vector3 vVar5;
	vector3 vVar6;
	
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		*(uParam1[iVar0 /*4*/]) = { Var3 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		*(uParam2[iVar0 /*10*/]) = { Var4 };
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!unk_0x0E4018692D92041D(Global_2359721[iVar1 /*26*/].f_12, 11))
			{
				if (vmag(*(uParam1[iVar0 /*4*/])) == 0f || vdist(Global_2359721[iVar1 /*26*/].f_3, vParam0) < vdist(*(uParam1[iVar0 /*4*/]), vParam0))
				{
					Var3 = { Global_2359721[iVar1 /*26*/].f_3 };
					Var3.f_3 = Global_2359721[iVar1 /*26*/].f_6.f_2;
					func_164(&Var3, uParam1, iVar0);
					iVar0 = *uParam1;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 15)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (vmag(*(uParam1[iVar0 /*4*/])) == 0f || vdist(Global_262145.f_5920[iVar1 /*3*/], vParam0) < vdist(*(uParam1[iVar0 /*4*/]), vParam0))
			{
				Var3 = { Global_262145.f_5920[iVar1 /*3*/] };
				Var3.f_3 = 3f;
				func_164(&Var3, uParam1, iVar0);
				iVar0 = *uParam1;
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 13)
	{
		iVar2 = 0;
		while (iVar2 < 6)
		{
			iVar0 = 0;
			while (iVar0 < *uParam1)
			{
				if (vmag(*(uParam1[iVar0 /*4*/])) == 0f || vdist(Global_262145.f_5966[iVar1 /*19*/][iVar2 /*3*/], vParam0) < vdist(*(uParam1[iVar0 /*4*/]), vParam0))
				{
					Var3 = { Global_262145.f_5966[iVar1 /*19*/][iVar2 /*3*/] };
					Var3.f_3 = 3f;
					func_164(&Var3, uParam1, iVar0);
					iVar0 = *uParam1;
				}
				iVar0++;
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311706)
	{
		iVar0 = 0;
		while (iVar0 < *uParam2)
		{
			vVar5 = { Global_1311025[iVar1 /*8*/].f_1 + Global_1311025[iVar1 /*8*/].f_4 * Vector(0.5f, 0.5f, 0.5f) };
			vVar6 = { *(uParam2[iVar0 /*10*/]) + (uParam2[iVar0 /*10*/])->f_3 * Vector(0.5f, 0.5f, 0.5f) };
			if (vmag(*(uParam2[iVar0 /*10*/])) == 0f || vdist(vVar5, vParam0) < vdist(vVar6, vParam0))
			{
				Var4 = { Global_1311025[iVar1 /*8*/].f_1 };
				Var4.f_3 = { Global_1311025[iVar1 /*8*/].f_4 };
				Var4.f_6 = Global_1311025[iVar1 /*8*/].f_7;
				Var4.f_7 = { Global_2359397[iVar1 /*3*/] };
				func_163(&Var4, uParam2, iVar0);
				iVar0 = *uParam2;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_163(var uParam0, var uParam1, int iParam2)
{
	Global_2412448 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_163(&Global_2412448, uParam1, iParam2 + 1);
	}
}

void func_164(var uParam0, var uParam1, int iParam2)
{
	Global_2412444 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_164(&Global_2412444, uParam1, iParam2 + 1);
	}
}

void func_165(var uParam0, var uParam1)
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	
	if (Global_2405071.f_2250 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2405071.f_2250)
		{
			if (func_166(Global_2405071.f_2251[iVar0 /*4*/], uParam0))
			{
				fVar2 = Global_2405071.f_2251[iVar0 /*4*/].f_3;
				if (vmag(*uParam1) > 0.01f)
				{
					vVar1 = { *uParam1 - Global_2405071.f_2251[iVar0 /*4*/] };
					fVar2 = unk_0x174C48E9E544E9A8(vVar1.x, vVar1.y);
				}
				func_112(Global_2405071.f_2251[iVar0 /*4*/], fVar2, uParam0, uParam1, 0, -1);
				Global_2405071.f_2479++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2405071.f_2876)
	{
		func_106(&(Global_2405071.f_2479.f_6[0 /*10*/]), &(Global_2405071.f_2479.f_6[1 /*10*/]), &(Global_2405071.f_2479.f_6[2 /*10*/]));
	}
}

int func_166(vector3 vParam0, var uParam1)
{
	switch (uParam1->f_7)
	{
		case 0:
			return func_66(vParam0, uParam1->f_7, *uParam1, 0f, 0f, 0f, uParam1->f_4);
		
		case 1:
		case 2:
			return func_66(vParam0, uParam1->f_7, uParam1->f_8, uParam1->f_11, uParam1->f_14);
		
		default:
	}
	return 0;
}

void func_167(vector3 vParam0, vector3 vParam1, var uParam2, var uParam3, var uParam4)
{
	float fVar0;
	
	func_101(&vParam0, &vParam1);
	fVar0 = (vParam1.x - vParam0.x);
	*uParam2 = (vParam0.x + (fVar0 * 0.5f));
	uParam2->f_1 = vParam0.y;
	uParam2->f_2 = vParam0.z;
	*uParam3 = *uParam2;
	uParam3->f_1 = vParam1.y;
	uParam3->f_2 = vParam1.z;
	*uParam4 = (fVar0 * 0.5f);
}

var func_168()
{
	return Global_1310987.f_4;
}

void func_169(float fParam0, float fParam1)
{
	func_204();
	func_197(fParam0, fParam1);
}

bool func_170(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3 && bParam4)
	{
		vParam0.z = 0f;
		vParam1.z = 0f;
		return vdist(vParam0, vParam1) < (fParam2 + 0.01f);
	}
	else if (bParam3)
	{
		if (vParam0.z > vParam1.z)
		{
			vParam0.z = vParam1.z;
		}
		return vdist(vParam0, vParam1) < (fParam2 + 0.01f);
	}
	else if (bParam4)
	{
		if (vParam0.z < vParam1.z)
		{
			vParam0.z = vParam1.z;
		}
		return vdist(vParam0, vParam1) < (fParam2 + 0.01f);
	}
	return vdist(vParam0, vParam1) < (fParam2 + 0.01f);
}

void func_171(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_2405071.f_1742 > 0)
	{
		iVar0 = 0;
		while (func_193(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			uParam2->f_33 = 0;
		}
		else
		{
			return;
		}
	}
	iVar0 = 0;
	while (func_172(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_172(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	float fVar20;
	int iVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	vector3 vVar25;
	var uVar26;
	vector3 vVar27;
	float fVar28;
	bool bVar29;
	
	iVar0 = 0;
	if (!vmag(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_86(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	}
	if (uParam2->f_51)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_48)
	{
		if (func_192(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
	}
	iVar3 = 0;
	iVar8 = 1;
	if (uParam2->f_11)
	{
		iVar3 += 2;
		iVar3++;
		iVar8 = 0;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar3++;
		iVar8 = 0;
	}
	iVar3 += 4;
	fVar11 = 3f;
	fVar12 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			fVar11 = 3f;
			fVar12 = 5f;
			break;
		
		case 1:
			fVar11 = 2.75f;
			fVar12 = 7.5f;
			break;
		
		default:
			fVar11 = 2.5f;
			fVar12 = 10f;
			break;
	}
	iVar13 = 0;
	Global_2412458.f_162 = 0;
	Global_2412458.f_163 = 0;
	Global_2412458.f_164 = -99;
	Global_2412458.f_165 = { 0f, 0f, 0f };
	iVar14 = 0;
	while (iVar14 < 40)
	{
		Global_2412458[iVar14 /*3*/] = { 0f, 0f, 0f };
		Global_2412458.f_121[iVar14] = 0f;
		iVar14++;
	}
	iVar15 = 1;
	if (func_80(uParam2->f_34) != 0)
	{
		iVar15 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar6 = unk_0x482D46B42779DC80(*uParam0, (iVar0 * iVar15), &fVar2, &iVar7, iVar3, fVar11, fVar12);
		if (unk_0xE23E0C76E7F802F6(iVar6))
		{
			unk_0x2119DC81E4EDBA78(iVar6, &vVar1);
			bVar10 = false;
			if (Global_2412458.f_164 == iVar6)
			{
				bVar10 = true;
			}
			Global_2412458.f_165 = { vVar1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !unk_0xB024BD7BA99751DA(iVar6)) || unk_0xF9130D332492FAAF(iVar6))
			{
				unk_0xEBE37E4C0F1F0B0B(vVar1, &uVar4, &uVar5);
				if (vdist(vVar1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_147(&vVar1, 0))
					{
						if ((uParam2->f_13 || uVar5 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar5 & 16 == 0)
							{
								if ((uVar5 & 128 == 0 && uVar5 & 256 == 0) && uVar5 & 512 == 0)
								{
									if (!func_191(vVar1))
									{
										vVar1 = { func_187(vVar1, &fVar2, iVar7, uParam2->f_9, *uParam2, iVar8, uParam2->f_11, uParam2->f_34, &bVar9, bVar10, 1, uParam2->f_51) };
										if (vmag(vVar1) > 0f)
										{
											if (!func_74(vVar1, 5f))
											{
												if (vVar1.z >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (vVar1.z <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_186(vVar1, uParam2))
														{
															if ((uParam2->f_48 && !func_192(&vVar1, 0)) || uParam2->f_48 == 0)
															{
																bVar16 = true;
																if (!bVar10)
																{
																	if (bVar9)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar16 = false;
																	}
																}
																if (vmag(vVar1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && vdist(vVar1.x, vVar1.y, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																	{
																		if ((uParam2->f_12 && !func_182(vVar1, fVar2, uParam2->f_34, unk_0x95B959F18401C09A(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_86(uParam2->f_35, &vVar1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar17 = uParam2->f_31;
																					bVar18 = true;
																					iVar19 = 1;
																					fVar20 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						fVar20 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar20 = (fVar20 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar18 = true;
																						iVar19 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar20 = (fVar20 * 0.375f);
																							}
																						}
																					}
																					iVar21 = 0;
																					if (!func_181(vVar1, fVar2, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_33(vVar1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar21 = 1;
																							}
																						}
																						else if (func_33(vVar1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_179(vVar1, fVar2, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																						{
																							iVar21 = 1;
																						}
																					}
																					if (iVar21 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar23 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar22 = func_178(vVar1, uParam2->f_54, &fVar23);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar22 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar22 < uParam2->f_53)
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2412458.f_162)
																										{
																											Global_2412458[iVar14 /*3*/] = { 0f, 0f, 0f };
																											Global_2412458.f_121[iVar14] = 0f;
																											iVar14++;
																										}
																										Global_2412458.f_162 = 0;
																										uParam2->f_53 = iVar22;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2412458.f_162 == 0)
																									{
																										Global_2412458[0 /*3*/] = { vVar1 };
																										Global_2412458.f_121[0] = fVar2;
																									}
																									else
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2412458.f_162 + 1)
																										{
																											if (iVar14 < 40)
																											{
																												if (vdist2(vVar1, uParam2->f_35) < vdist2(Global_2412458[iVar14 /*3*/], uParam2->f_35))
																												{
																													func_177(vVar1, fVar2, iVar14);
																													iVar14 = Global_2412458.f_162 + 1;
																												}
																											}
																											iVar14++;
																										}
																									}
																									Global_2412458.f_162++;
																									if (Global_2412458.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412458.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2412458[Global_2412458.f_162 /*3*/] = { vVar1 };
																									Global_2412458.f_121[Global_2412458.f_162] = fVar2;
																									Global_2412458.f_162++;
																									if (func_186(vVar1, uParam2))
																									{
																										Global_2412458.f_163++;
																									}
																									if (Global_2412458.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412458.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { vVar1 };
																							*uParam1 = fVar2;
																							return 1;
																						}
																					}
																					else if (bVar16)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { vVar1 };
																					*uParam1 = fVar2;
																					return 1;
																				}
																			}
																		}
																		else
																		{
																			iVar13++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_32)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar13++;
					}
				}
				else
				{
					iVar13++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar13) || iVar0 >= 100)
			{
				if (Global_2412458.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2412458[0 /*3*/] };
						*uParam1 = Global_2412458.f_121[0];
						return 1;
					}
					else
					{
						if (Global_2412458.f_163 > 0 && !Global_2412458.f_163 == Global_2412458.f_162)
						{
							func_175(0, uParam2);
						}
						iVar24 = unk_0x9EC3B269A34A2BEE(0, Global_2412458.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar24 = 0;
						}
						vVar25 = { Global_2412458[0 /*3*/] };
						uVar26 = Global_2412458.f_121[0];
						Global_2412458[0 /*3*/] = { Global_2412458[iVar24 /*3*/] };
						Global_2412458.f_121[0] = Global_2412458.f_121[iVar24];
						Global_2412458[iVar24 /*3*/] = { vVar25 };
						Global_2412458.f_121[iVar24] = uVar26;
						*uParam0 = { Global_2412458[0 /*3*/] };
						*uParam1 = Global_2412458.f_121[0];
						return 1;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						return 0;
					}
					else
					{
						func_174(iVar13, *uParam0, &iVar0, &vVar1, &fVar2, uParam2, iVar8, iVar7, iVar3, fVar11, fVar12, bVar9);
						vVar27 = { vVar1 };
						fVar28 = fVar2;
						if (!uParam2->f_50)
						{
							bVar29 = true;
						}
						else
						{
							bVar29 = false;
						}
						if (func_86(uParam2->f_35, &vVar27, &(uParam2->f_38), &(uParam2->f_45), bVar29, 1) || func_192(&vVar27, bVar29))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { vVar27 };
								*uParam1 = fVar28;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								return 0;
							}
							else
							{
								*uParam0 = { vVar27 };
								*uParam1 = fVar28;
								return 1;
							}
						}
						else
						{
							*uParam0 = { vVar27 };
							*uParam1 = fVar28;
							return 1;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 3)
			{
				return 0;
			}
			else
			{
				func_173(&Global_1312061, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return 1;
			}
		}
		Global_2412458.f_164 = iVar6;
	}
	return 0;
}

void func_173(var uParam0, var uParam1, var uParam2, vector3 vParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = vdist(*(uParam0[iVar2 /*4*/]), vParam3);
		if (fVar1 < fVar0)
		{
			if (!func_148(*(uParam0[iVar2 /*4*/]), 5f, unk_0x95B959F18401C09A(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*uParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

void func_174(int iParam0, vector3 vParam1, int iParam2, var uParam3, float fParam4, var uParam5, int iParam6, int iParam7, int iParam8, float fParam9, float fParam10, bool bParam11)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam2 = unk_0x9EC3B269A34A2BEE((1 + iParam0), (40 + iParam0));
		unk_0x4CD58AFCE9FC3575(vParam1, *iParam2, uParam3, fParam4, &iParam7, iParam8, fParam9, fParam10);
		*uParam3 = { func_187(*uParam3, fParam4, iParam7, uParam5->f_9, *uParam5, iParam6, uParam5->f_11, uParam5->f_34, &bParam11, 0, 0, uParam5->f_51) };
		if (!func_191(*uParam3))
		{
			iVar0 = 999;
			return;
		}
		iVar0++;
	}
}

void func_175(int iParam0, var uParam1)
{
	if (!func_186(Global_2412458[iParam0 /*3*/], uParam1))
	{
		Global_2412458.f_162 = (Global_2412458.f_162 - 1);
		func_176(iParam0);
		if (Global_2412458.f_162 > Global_2412458.f_163)
		{
			func_175(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_175(iParam0 + 1, uParam1);
	}
}

void func_176(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2412458[iParam0 /*3*/] = { Global_2412458[iParam0 + 1 /*3*/] };
			Global_2412458.f_121[iParam0] = Global_2412458.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_177(vector3 vParam0, float fParam1, int iParam2)
{
	vector3 vVar0;
	var uVar1;
	
	vVar0 = { Global_2412458[iParam2 /*3*/] };
	uVar1 = Global_2412458.f_121[iParam2];
	Global_2412458[iParam2 /*3*/] = { vParam0 };
	Global_2412458.f_121[iParam2] = fParam1;
	if (iParam2 <= Global_2412458.f_162 && iParam2 < 39)
	{
		if (vmag(vVar0) > 0f)
		{
			func_177(vVar0, uVar1, iParam2 + 1);
		}
	}
}

int func_178(vector3 vParam0, float fParam1, float fParam2)
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	
	fVar4 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar3 = iVar0;
		if (func_118(iVar3))
		{
			vVar1 = { func_40(iVar3) };
			fVar5 = vdist(vParam0, vVar1);
			if (fVar5 < fParam1)
			{
				if (fVar5 < fVar4)
				{
					fVar4 = fVar5;
				}
				iVar2++;
			}
		}
		iVar0++;
	}
	*fParam2 = fVar4;
	return iVar2;
}

int func_179(vector3 vParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	float fVar6;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam7 == 1 && unk_0x95B959F18401C09A() != iVar1) || iParam7 == 0)
		{
			if (func_1228(iVar1, bParam3, bParam4))
			{
				if (unk_0xB4B29C6A8F481EEA(unk_0x95B959F18401C09A(), iVar1))
				{
					if (!bParam6 || (!unk_0xBC2FC12AD0FBF72E(unk_0x378BD4B3881338C2(iVar1)) && func_35(iVar1)))
					{
						if ((!bParam5 || (bParam5 == 1 && unk_0x12D3B4C76D4AAB00(unk_0x95B959F18401C09A()) != unk_0x12D3B4C76D4AAB00(iVar1))) || unk_0x12D3B4C76D4AAB00(unk_0x95B959F18401C09A()) == -1)
						{
							if (((unk_0x12D3B4C76D4AAB00(unk_0x95B959F18401C09A()) == -1 && iParam8) && bParam5) && func_44(iVar1))
							{
							}
							else if (unk_0x765F6FEEFF39224F(unk_0x378BD4B3881338C2(iVar1)))
							{
								fVar2 = 0.1f;
								if (unk_0xF0D230FB550CD6EB(unk_0x378BD4B3881338C2(iVar1), 0))
								{
									iVar3 = unk_0xF2C96862595654B4(unk_0x378BD4B3881338C2(iVar1), 0);
									if (unk_0x765F6FEEFF39224F(iVar3) && !unk_0xD62C4419A41F106A(iVar3, 0))
									{
										iVar4 = unk_0x541D5C57194E73C4(iVar3);
										vVar5 = { unk_0xFBB1F99A825CAB09(iVar3, false) };
										fVar6 = unk_0xC472E34C8FBEC678(iVar3);
										if (func_180(vParam0, fParam1, iParam2, vVar5, fVar6, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_75(func_40(iVar1), vParam0, fParam1, iParam2, fVar2))
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

int func_180(vector3 vParam0, float fParam1, int iParam2, vector3 vParam3, float fParam4, int iParam5, bool bParam6)
{
	int iVar0;
	vector3 vVar1[4];
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	
	if (func_75(vParam0, vParam3, fParam4, iParam5, 1036831949))
	{
		return 1;
	}
	func_77(iParam2, &vVar2, &vVar3, 1086324736, 1080033280, 1077936128);
	vVar4 = { 0f, vVar3.y, 0f };
	func_63(&vVar4, 0f, 0f, fParam1);
	vVar5 = { 0f, vVar2.y, 0f };
	func_63(&vVar5, 0f, 0f, fParam1);
	vVar6 = { (unk_0x7EECA16E87982278((vVar3.x - vVar2.x)) * 0.5f), 0f, 0f };
	func_63(&vVar6, 0f, 0f, fParam1);
	vVar1[0 /*3*/] = { vParam0 + vVar4 + vVar6 };
	vVar1[0 /*3*/].f_2 = (vVar1[0 /*3*/].f_2 + (0.5f * unk_0x7EECA16E87982278((vVar3.z - vVar2.z))));
	vVar1[1 /*3*/] = { vParam0 + vVar4 - vVar6 };
	vVar1[1 /*3*/].f_2 = (vVar1[1 /*3*/].f_2 + (0.5f * unk_0x7EECA16E87982278((vVar3.z - vVar2.z))));
	vVar1[2 /*3*/] = { vParam0 + vVar5 + vVar6 };
	vVar1[2 /*3*/].f_2 = (vVar1[2 /*3*/].f_2 + (0.5f * unk_0x7EECA16E87982278((vVar3.z - vVar2.z))));
	vVar1[3 /*3*/] = { vParam0 + vVar5 - vVar6 };
	vVar1[3 /*3*/].f_2 = (vVar1[3 /*3*/].f_2 + (0.5f * unk_0x7EECA16E87982278((vVar3.z - vVar2.z))));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_75(vVar1[iVar0 /*3*/], vParam3, fParam4, iParam5, 1036831949))
		{
			return 1;
		}
		iVar0++;
	}
	if (!bParam6)
	{
		if (func_180(vParam3, fParam4, iParam5, vParam0, fParam1, iParam2, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_181(vector3 vParam0, float fParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar4;
	
	iVar0 = 1;
	iVar0 += 2;
	iVar0 += 4;
	iVar0 += 8;
	iVar0 += 16;
	iVar0 += 32;
	iVar0 += 64;
	iVar0 = (iVar0 + 131076);
	iVar1 = unk_0xACC2D6D9762C28BB(vParam0, 30f, 0, iVar0);
	if (unk_0x765F6FEEFF39224F(iVar1) && !unk_0xD62C4419A41F106A(iVar1, 0))
	{
		iVar2 = unk_0x541D5C57194E73C4(iVar1);
		vVar3 = { unk_0xFBB1F99A825CAB09(iVar1, false) };
		fVar4 = unk_0xC472E34C8FBEC678(iVar1);
		if (func_180(vParam0, fParam1, iParam2, vVar3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	iVar1 = unk_0xACC2D6D9762C28BB(vParam0, 30f, 0, iVar0);
	if (unk_0x765F6FEEFF39224F(iVar1) && !unk_0xD62C4419A41F106A(iVar1, 0))
	{
		iVar2 = unk_0x541D5C57194E73C4(iVar1);
		vVar3 = { unk_0xFBB1F99A825CAB09(iVar1, false) };
		fVar4 = unk_0xC472E34C8FBEC678(iVar1);
		if (func_180(vParam0, fParam1, iParam2, vVar3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_182(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (func_185(vParam0, fParam1, iParam2, iParam3, iParam4) || func_183(vParam0, fParam1, iParam2, iParam3, iParam5))
	{
		return 1;
	}
	return 0;
}

int func_183(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (func_184(vParam0, iParam2, Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_180(vParam0, fParam1, iParam2, Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_1228(iVar2, 0, 1) && func_1228(iParam3, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_184(vector3 vParam0, int iParam1, vector3 vParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_82(iParam1, 1008981770);
	fVar1 = func_82(iParam3, 1008981770);
	fVar2 = vdist(vParam0, vParam2);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_185(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (func_1228(iVar1, 0, 1) && func_1228(iParam3, 0, 1))
			{
				if (Global_2417757.f_261[iVar0])
				{
					if (func_75(Global_2417757.f_131[iVar0 /*3*/], vParam0, fParam1, iParam2, 1036831949))
					{
						return 1;
					}
				}
				else if (func_75(func_40(iVar1), vParam0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2417757.f_261[iVar0])
			{
				if (func_75(Global_2417757.f_131[iVar0 /*3*/], vParam0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (func_1228(iVar1, 0, 0))
			{
				if (unk_0x765F6FEEFF39224F(unk_0x378BD4B3881338C2(iVar1)))
				{
					if (func_75(func_40(iVar1), vParam0, fParam1, iParam2, 1036831949))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_186(vector3 vParam0, var uParam1)
{
	if (uParam1->f_18)
	{
		switch (uParam1->f_26)
		{
			case 0:
				if (func_170(vParam0, uParam1->f_19, uParam1->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_100(vParam0, uParam1->f_19, uParam1->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0xC2F708DE8AD68197(vParam0, uParam1->f_19, uParam1->f_22, uParam1->f_25, 0, true))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

Vector3 func_187(vector3 vParam0, float fParam1, int iParam2, bool bParam3, vector3 vParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10, bool bParam11)
{
	vector3 vVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	float fVar10;
	vector3 vVar11;
	vector3 vVar12;
	vector3 vVar13;
	
	if (bParam11)
	{
		if (vmag(vParam4) > 0f)
		{
			if (!func_190(vParam0, *fParam1, vParam4))
			{
				*fParam1 = (*fParam1 + 180f);
			}
		}
		return vParam0;
	}
	unk_0xEBE37E4C0F1F0B0B(vParam0, &uVar1, &uVar2);
	if (uVar2 & 1024 == 0 && !bParam6)
	{
		unk_0xAF894373822C8B54(vParam0, 1f, 1, &uVar3, &uVar3, &iVar4, &iVar5, &fVar6, iParam5);
		if (iVar4 == iVar5)
		{
			*uParam8 = 1;
		}
		if (bParam10)
		{
			if (!uVar2 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar4 + iVar5) != iParam2)
			{
				return 0f, 0f, 0f;
			}
			if (unk_0x097E7778E3E162E8(iParam7) && func_189(vParam0))
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam9 && *uParam8)
		{
			*fParam1 = (*fParam1 + 180f);
			if (*fParam1 > 360f)
			{
				*fParam1 = (*fParam1 + -360f);
			}
		}
		if (*fParam1 <= 90f || *fParam1 > 270f)
		{
			bVar8 = true;
		}
		else
		{
			bVar8 = false;
		}
		bVar9 = false;
		if (bVar8)
		{
			if (iVar4 == 0)
			{
				if (bParam10)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam2 == iVar4)
			{
				bVar9 = true;
			}
		}
		else if (iVar5 == 0)
		{
			if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam2 == iVar5)
		{
			bVar9 = true;
		}
		if (fVar6 < 0f)
		{
			fVar7 = 0f;
		}
		else
		{
			if (bVar8)
			{
				if (bVar9)
				{
					fVar7 = (4.2f * (to_float(iVar4) * 0.5f));
				}
				else
				{
					fVar7 = (4.2f * to_float(iVar4));
				}
				if (bVar9)
				{
					if (iVar4 > 2)
					{
						fVar7 = (fVar7 + (IntToFloat((iVar4 - 2)) * 1f));
					}
				}
				else if (iVar4 > 1)
				{
					fVar7 = (fVar7 + (IntToFloat((iVar4 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar9)
				{
					fVar7 = (4.2f * (to_float(iVar5) * 0.5f));
				}
				else
				{
					fVar7 = (4.2f * to_float(iVar5));
				}
				if (bVar9)
				{
					if (iVar5 > 2)
					{
						fVar7 = (fVar7 + (IntToFloat((iVar5 - 2)) * 1f));
					}
				}
				else if (iVar5 > 1)
				{
					fVar7 = (fVar7 + (IntToFloat((iVar5 - 1)) * 1f));
				}
			}
			if (!uVar2 & 64 == 0)
			{
				fVar7 = (fVar7 + (0.95f * fVar6));
			}
			if (!uVar2 & 4 == 0 || !uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + -0.5f);
			}
			if ((!uVar2 & 32 == 0 && uVar2 & 4 == 0) && uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + -1f);
			}
			if (!bParam3 || !uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + (4.2f * -0.5f));
			}
			if (!iParam7 == 0)
			{
				if (uVar2 & 8 != 0)
				{
					fVar10 = func_188(iParam7, 3.5f);
				}
				else
				{
					fVar10 = func_188(iParam7, 1.5f);
				}
				if (fVar10 > 1.8f)
				{
					fVar7 = (fVar7 + ((fVar10 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (vmag(vParam4) > 0f)
	{
		if (!func_190(vParam0, *fParam1, vParam4))
		{
			if (bParam3 || ((uVar2 & 1024 != 0 || vParam0.z == 0f) && bParam6))
			{
				*fParam1 = (*fParam1 + 180f);
			}
			else if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar7 < 0f)
	{
		fVar7 = 0f;
	}
	vVar0 = { unk_0xCD1EDCB38767B47C(vParam0, *fParam1, fVar7, 0f, 0f) };
	if (bParam3)
	{
		if (unk_0x1326E32991D42735(vParam0, *fParam1, &vVar11))
		{
			vVar12 = { vVar11 - vParam0 };
			if (!iParam7 == 0)
			{
				vVar13 = { vVar12 / FtoV(vmag(vVar12)) };
				if (uVar2 & 8 != 0)
				{
					fVar10 = func_188(iParam7, 3.5f);
				}
				else
				{
					fVar10 = func_188(iParam7, 1.5f);
				}
				vVar13 = { vVar13 * FtoV((fVar10 * 0.5f)) };
				vVar12 = { vVar12 - vVar13 };
				vVar11 = { vParam0 + vVar12 };
			}
			vVar13 = { vVar0 - vVar11 };
			vVar0 = { vVar11 };
		}
	}
	return vVar0;
}

float func_188(int iParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	func_77(iParam0, &fVar0, &fVar1, 1086324736, 1080033280, 1077936128);
	fVar2 = (fVar1 - fVar0);
	if (fVar2 < fParam1)
	{
		return fParam1;
	}
	return fVar2;
}

int func_189(vector3 vParam0)
{
	float fVar0;
	
	if (unk_0x8C1596BAD35D957A(vParam0.x, vParam0.y, (vParam0.z + 500f), &fVar0, 0, 0))
	{
		fVar0 = (fVar0 - vParam0.z);
		if (fVar0 > 6f)
		{
			return 1;
		}
	}
	return 0;
}

int func_190(vector3 vParam0, float fParam1, vector3 vParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { 0f, 1f, 0f };
	func_63(&vVar0, 0f, 0f, fParam1);
	vVar1 = { vParam2 - vParam0 };
	if (func_59(vVar1, vVar0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_191(vector3 vParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_73(vParam0);
	iVar0 = 0;
	while (iVar0 < Global_2412165[iVar1])
	{
		if (func_72(vParam0, &(Global_2411462[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2412165[8])
	{
		if (func_72(vParam0, &(Global_2411462[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_192(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2405071.f_26.f_18)
	{
		switch (Global_2405071.f_26.f_17)
		{
			case 0:
				if (func_170(*uParam0, Global_2405071.f_26.f_10, Global_2405071.f_26.f_16, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_100(*uParam0, Global_2405071.f_26.f_10, Global_2405071.f_26.f_13, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (unk_0xC2F708DE8AD68197(*uParam0, Global_2405071.f_26.f_10, Global_2405071.f_26.f_13, Global_2405071.f_26.f_16, 0, true))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_64(*uParam0, Global_2405071.f_26.f_10, Global_2405071.f_26.f_13, Global_2405071.f_26.f_16, Global_2405071.f_26.f_17, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_193(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	float fVar8;
	bool bVar9;
	int iVar10;
	float fVar11;
	int iVar12;
	vector3 vVar13;
	var uVar14;
	
	if (Global_2405071.f_1742 > 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		if (!vmag(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_86(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_192(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
		Global_2412458.f_162 = 0;
		Global_2412458.f_163 = 0;
		iVar4 = 0;
		while (iVar4 < 40)
		{
			Global_2412458[iVar4 /*3*/] = { 0f, 0f, 0f };
			Global_2412458.f_121[iVar4] = 0f;
			iVar4++;
		}
		func_194(*uParam0);
		iVar0 = 0;
		while (iVar0 < Global_2405071.f_1742)
		{
			iVar1 = Global_2405071.f_2148[iVar0];
			if (iVar1 > -1 && iVar1 < 101)
			{
				vVar2 = { Global_2405071.f_1743[iVar1 /*4*/] };
				fVar3 = Global_2405071.f_1743[iVar1 /*4*/].f_3;
				if (vmag(vVar2) > 0f)
				{
					if ((uParam2->f_57 && vdist(vVar2, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && vdist(vVar2.x, vVar2.y, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !func_182(vVar2, fVar3, uParam2->f_34, unk_0x95B959F18401C09A(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_86(uParam2->f_35, &vVar2, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar5 = uParam2->f_31;
										bVar6 = true;
										iVar7 = 1;
										fVar8 = uParam2->f_49;
										if (!uParam2->f_55)
										{
											iVar5 = 0;
											bVar6 = false;
											iVar7 = 0;
											fVar8 = 1f;
										}
										else if (uParam2->f_17)
										{
											iVar5 = 0;
											bVar6 = false;
											iVar7 = 0;
											if (uParam2->f_33 == 1)
											{
												fVar8 = (fVar8 * 0.375f);
											}
										}
										else
										{
											bVar6 = true;
											iVar7 = 1;
											if (uParam2->f_28)
											{
												if (uParam2->f_33 == 1)
												{
													fVar8 = (fVar8 * 0.375f);
												}
											}
										}
										bVar9 = false;
										if (!func_181(vVar2, fVar3, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_33(vVar2, 6f, 1f, 1f, 5f, iVar5, bVar6, iVar7, fVar8, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar9 = true;
												}
											}
											else if (func_33(vVar2, 6f, 1f, 1f, 5f, iVar5, bVar6, iVar7, fVar8, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_179(vVar2, fVar3, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
											{
												bVar9 = true;
											}
										}
										if (bVar9)
										{
											if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
											{
												fVar11 = 0f;
												if (uParam2->f_52)
												{
													iVar10 = func_178(vVar2, uParam2->f_54, &fVar11);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar10 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar10 < uParam2->f_53)
														{
															iVar4 = 0;
															while (iVar4 < Global_2412458.f_162)
															{
																Global_2412458[iVar4 /*3*/] = { 0f, 0f, 0f };
																Global_2412458.f_121[iVar4] = 0f;
																iVar4++;
															}
															Global_2412458.f_162 = 0;
															uParam2->f_53 = iVar10;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2412458.f_162 == 0)
														{
															Global_2412458[0 /*3*/] = { vVar2 };
															Global_2412458.f_121[0] = fVar3;
														}
														else
														{
															iVar4 = 0;
															while (iVar4 < Global_2412458.f_162 + 1)
															{
																if (iVar4 < 40)
																{
																	if (vdist2(vVar2, uParam2->f_35) < vdist2(Global_2412458[iVar4 /*3*/], uParam2->f_35))
																	{
																		func_177(vVar2, fVar3, iVar4);
																		iVar4 = Global_2412458.f_162 + 1;
																	}
																}
																iVar4++;
															}
														}
														Global_2412458.f_162++;
														if (Global_2412458.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2405071.f_1742;
															}
															else if (Global_2412458.f_162 == 40)
															{
																iVar0 = Global_2405071.f_1742;
															}
														}
													}
													else
													{
														Global_2412458[Global_2412458.f_162 /*3*/] = { vVar2 };
														Global_2412458.f_121[Global_2412458.f_162] = fVar3;
														Global_2412458.f_162++;
														if (Global_2412458.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2405071.f_1742;
															}
															else if (Global_2412458.f_162 == 40)
															{
																iVar0 = Global_2405071.f_1742;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { vVar2 };
												*uParam1 = fVar3;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { vVar2 };
										*uParam1 = fVar3;
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
		if (Global_2412458.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2412458[0 /*3*/] };
				*uParam1 = Global_2412458.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2412458.f_163 > 0 && !Global_2412458.f_163 == Global_2412458.f_162)
				{
					func_175(0, uParam2);
				}
				iVar12 = unk_0x9EC3B269A34A2BEE(0, Global_2412458.f_162);
				vVar13 = { Global_2412458[0 /*3*/] };
				uVar14 = Global_2412458.f_121[0];
				Global_2412458[0 /*3*/] = { Global_2412458[iVar12 /*3*/] };
				Global_2412458.f_121[0] = Global_2412458.f_121[iVar12];
				Global_2412458[iVar12 /*3*/] = { vVar13 };
				Global_2412458.f_121[iVar12] = uVar14;
				*uParam0 = { Global_2412458[0 /*3*/] };
				*uParam1 = Global_2412458.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return 0;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_194(vector3 vParam0)
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_2405071.f_1742)
	{
		uVar1 = func_195(vParam0, fVar0, &fVar0);
		Global_2405071.f_2148[iVar2] = uVar1;
		iVar2++;
	}
}

int func_195(vector3 vParam0, float fParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = -1;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_2405071.f_1742)
	{
		fVar2 = vdist2(vParam0, Global_2405071.f_1743[iVar3 /*4*/]);
		if (fVar2 < fVar1 && fVar2 > fParam1)
		{
			iVar0 = iVar3;
			fVar1 = fVar2;
		}
		iVar3++;
	}
	*fParam2 = fVar1;
	return iVar0;
}

bool func_196(int iParam0)
{
	return iParam0 == 50;
}

void func_197(float fParam0, float fParam1)
{
	unk_0xBC4506127EC35620(fParam0, fParam1, 0.1f);
	Global_2405071.f_2462 = unk_0x8C40DC84EDF05997();
	Global_2405071.f_2460 = 1;
	Global_2405071.f_2463 = unk_0x78DCC5D0CB43DEBA();
}

void func_198()
{
	func_203();
	func_202();
	func_201();
	func_200();
	func_199();
}

void func_199()
{
	struct<10> Var0;
	int iVar1;
	
	Var0.f_2 = 1176256410;
	iVar1 = 0;
	while (iVar1 < 128)
	{
		Global_2407993[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_200()
{
	struct<10> Var0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		Global_2405071.f_2479.f_90[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_201()
{
	struct<4> Var0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 8)
	{
		Global_2405071.f_2479.f_57[iVar1 /*4*/] = { Var0 };
		iVar1++;
	}
}

void func_202()
{
	struct<10> Var0;
	int iVar1;
	
	Var0.f_2 = 1176256410;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		Global_2405071.f_2479.f_6[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_203()
{
	struct<6> Var0;
	
	Var0.f_3 = -1;
	Global_2405071.f_2479 = { Var0 };
}

void func_204()
{
	if (Global_2405071.f_2460)
	{
		if (unk_0x8C40DC84EDF05997() == Global_2405071.f_2462)
		{
			unk_0x46D12E4D89CFEBBB();
		}
		else
		{
			unk_0x46D12E4D89CFEBBB();
		}
		Global_2405071.f_2460 = 0;
	}
}

int func_205(bool bParam0)
{
	if (unk_0xBB5E373390A5F824())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

Vector3 func_206()
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = func_1100();
	vVar1 = { 0f, 0f, 0f };
	switch (iVar0)
	{
		case 0:
			vVar1 = { -1166.81f, 4928.695f, 222.1781f };
			break;
		
		case 1:
			vVar1 = { -2117.441f, 3301.337f, 31.8103f };
			break;
		
		case 2:
			vVar1 = { -1298.069f, -3398.051f, 12.9452f };
			break;
		
		case 3:
			vVar1 = { 567.0107f, -3125.8f, 17.7686f };
			break;
	}
	return vVar1;
}

int func_207()
{
	switch (Local_112.f_3)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			if (func_208())
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_208()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_216();
	iVar1 = func_215();
	if (func_1100() == 0)
	{
		iVar5 = Global_1574990;
	}
	else if (func_1100() == 3)
	{
		iVar5 = -347613984;
	}
	else
	{
		iVar5 = Global_1574993;
	}
	switch (func_1100())
	{
		case 1:
			func_214(&vVar2, &fVar4, &fVar3);
			func_213(0, iVar0, vVar2, fVar4, fVar3, iVar5);
			iVar6 = 1;
			while (iVar6 <= 4)
			{
				func_212((iVar6 - 1), &vVar2, &fVar4, &fVar3);
				func_210(iVar6, iVar1, vVar2, fVar4, fVar3, iVar5);
				iVar6++;
			}
			break;
		
		case 2:
			func_214(&vVar2, &fVar4, &fVar3);
			func_213(0, iVar0, vVar2, fVar4, fVar3, iVar5);
			iVar6 = 1;
			while (iVar6 <= 4)
			{
				func_212((iVar6 - 1), &vVar2, &fVar4, &fVar3);
				if (iVar6 <= 2)
				{
					iVar1 = 2072724299;
				}
				else
				{
					iVar1 = func_215();
				}
				func_210(iVar6, iVar1, vVar2, fVar4, fVar3, iVar5);
				iVar6++;
			}
			break;
		
		case 0:
			func_214(&vVar2, &fVar4, &fVar3);
			func_213(0, iVar0, vVar2, fVar4, fVar3, iVar5);
			iVar6 = 1;
			while (iVar6 <= 3)
			{
				if (iVar6 == 1)
				{
					iVar1 = func_215();
				}
				else
				{
					iVar1 = joaat("g_m_y_lost_03");
				}
				func_212((iVar6 - 1), &vVar2, &fVar4, &fVar3);
				func_210(iVar6, iVar1, vVar2, fVar4, fVar3, iVar5);
				iVar6++;
			}
			break;
		
		case 3:
			func_214(&vVar2, &fVar4, &fVar3);
			iVar6 = 1;
			while (iVar6 <= 9)
			{
				func_212((iVar6 - 1), &vVar2, &fVar4, &fVar3);
				func_210(iVar6, iVar1, vVar2, fVar4, fVar3, iVar5);
				iVar6++;
			}
			break;
	}
	if (func_209())
	{
		return 1;
	}
	return 0;
}

int func_209()
{
	switch (func_1100())
	{
		case 1:
			if ((((unk_0x4F94F07DAD382CDA(Local_112.f_13[0]) && unk_0x4F94F07DAD382CDA(Local_112.f_13[1])) && unk_0x4F94F07DAD382CDA(Local_112.f_13[2])) && unk_0x4F94F07DAD382CDA(Local_112.f_13[3])) && unk_0x4F94F07DAD382CDA(Local_112.f_13[4]))
			{
				return 1;
			}
			break;
		
		case 2:
			if ((((unk_0x4F94F07DAD382CDA(Local_112.f_13[0]) && unk_0x4F94F07DAD382CDA(Local_112.f_13[1])) && unk_0x4F94F07DAD382CDA(Local_112.f_13[2])) && unk_0x4F94F07DAD382CDA(Local_112.f_13[3])) && unk_0x4F94F07DAD382CDA(Local_112.f_13[4]))
			{
				return 1;
			}
			break;
		
		case 0:
			if ((unk_0x4F94F07DAD382CDA(Local_112.f_13[0]) && unk_0x4F94F07DAD382CDA(Local_112.f_13[1])) && unk_0x4F94F07DAD382CDA(Local_112.f_13[2]))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((((((((unk_0x4F94F07DAD382CDA(Local_112.f_13[1]) && unk_0x4F94F07DAD382CDA(Local_112.f_13[2])) && unk_0x4F94F07DAD382CDA(Local_112.f_13[3])) && unk_0x4F94F07DAD382CDA(Local_112.f_13[4])) && unk_0x4F94F07DAD382CDA(Local_112.f_13[5])) && unk_0x4F94F07DAD382CDA(Local_112.f_13[6])) && unk_0x4F94F07DAD382CDA(Local_112.f_13[7])) && unk_0x4F94F07DAD382CDA(Local_112.f_13[8])) && unk_0x4F94F07DAD382CDA(Local_112.f_13[9]))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_210(int iParam0, int iParam1, vector3 vParam2, float fParam3, float fParam4, int iParam5)
{
	float fVar0;
	
	if (!unk_0x4F94F07DAD382CDA(Local_112.f_13[iParam0]))
	{
		unk_0xB815670C37E03CDE(iParam1);
		if (unk_0x5D98D654CDC2165A(iParam1))
		{
			if (unk_0xA107BB59F9A92498(1, 0, 0, 0))
			{
				if (!unk_0x0E4018692D92041D(Local_112.f_11, iParam0))
				{
					unk_0xCE04CE961AF41AB9(vParam2, 2f, 1, 0, 0, false);
					unk_0x8950ED5730F62EE8(&(Local_112.f_11), iParam0);
				}
				if (func_33(vParam2, 1f, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 50f, 0, 0, 0, 0))
				{
					if (func_211(&(Local_112.f_13[iParam0]), 26, iParam1, vParam2, fParam3, 1, 1, 1))
					{
						unk_0x0648A75D3F60E864(unk_0xBB28786B7F552D0B(Local_112.f_13[iParam0]), iParam5);
						unk_0x428C55A965F78103(unk_0xBB28786B7F552D0B(Local_112.f_13[iParam0]), 1, 0);
						unk_0xC475906893AEB995(unk_0xBB28786B7F552D0B(Local_112.f_13[iParam0]), 0);
						unk_0xE18BDD1E31C07544(unk_0xBB28786B7F552D0B(Local_112.f_13[iParam0]), joaat("weapon_carbinerifle"), 25000, true);
						fVar0 = (30f * 1f);
						unk_0xDE9FF07CFD5DC172(unk_0xBB28786B7F552D0B(Local_112.f_13[iParam0]), round(fVar0));
						unk_0x52F5AAAD4824B17E(unk_0xBB28786B7F552D0B(Local_112.f_13[iParam0]), 1);
						unk_0x34A51926277F67BC(unk_0xBB28786B7F552D0B(Local_112.f_13[iParam0]), 1);
						unk_0x28F648743D7DE312(unk_0xBB28786B7F552D0B(Local_112.f_13[iParam0]), 0, true);
						unk_0x9E280E42C0773A3A(unk_0xBB28786B7F552D0B(Local_112.f_13[iParam0]), 1);
						unk_0xBCA389843909EB28(unk_0xBB28786B7F552D0B(Local_112.f_13[iParam0]), 1);
						unk_0x5FEE418CE11E6DDE(unk_0xBB28786B7F552D0B(Local_112.f_13[iParam0]), 42, true);
						unk_0x7FC2040EB34E0E31(unk_0xBB28786B7F552D0B(Local_112.f_13[iParam0]), 200, 0);
						unk_0x083F9B3B112E951F(unk_0xBB28786B7F552D0B(Local_112.f_13[iParam0]), 1);
						unk_0x897EF720254BBEA3(unk_0xBB28786B7F552D0B(Local_112.f_13[iParam0]), true);
						unk_0x262617DE7F70A56D(unk_0xBB28786B7F552D0B(Local_112.f_13[iParam0]), true);
						unk_0xAF4482B584BBF3B8(unk_0xBB28786B7F552D0B(Local_112.f_13[iParam0]), vParam2, fParam4, 0, 0);
						if (func_1100() == 2)
						{
							unk_0x4A852F02088ECC9D(unk_0xBB28786B7F552D0B(Local_112.f_13[iParam0]), true);
						}
					}
				}
			}
		}
	}
	if (unk_0x4F94F07DAD382CDA(Local_112.f_13[iParam0]))
	{
		return 1;
	}
	return 0;
}

int func_211(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam4, bool bParam5, int iParam6, bool bParam7)
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
		unk_0xFE8201EFB515D77B(iVar0, bParam7);
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

void func_212(int iParam0, var uParam1, float fParam2, float fParam3)
{
	switch (func_1100())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					*uParam1 = { -1170.255f, 4928.144f, 223.2858f };
					*fParam2 = 252.5942f;
					*fParam3 = 1f;
					break;
				
				case 1:
					*uParam1 = { -1162.207f, 4924.064f, 221.7922f };
					*fParam2 = 47.6051f;
					*fParam3 = 5f;
					break;
				
				case 2:
					*uParam1 = { -1159.473f, 4926.255f, 221.7704f };
					*fParam2 = 107.9506f;
					*fParam3 = 5f;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					*uParam1 = { -2117.605f, 3284.526f, 31.8103f };
					*fParam2 = 323.9433f;
					*fParam3 = 10f;
					break;
				
				case 1:
					*uParam1 = { -2114.597f, 3283.476f, 31.8103f };
					*fParam2 = 357.3127f;
					*fParam3 = 5f;
					break;
				
				case 2:
					*uParam1 = { -2127.048f, 3285.237f, 37.7325f };
					*fParam2 = 219.4789f;
					*fParam3 = 5f;
					break;
				
				case 3:
					*uParam1 = { -2113.078f, 3276.096f, 37.7325f };
					*fParam2 = 62.113f;
					*fParam3 = 1f;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					*uParam1 = { -1300.61f, -3400.856f, 12.9452f };
					*fParam2 = 28.2234f;
					*fParam3 = 5f;
					break;
				
				case 1:
					*uParam1 = { -1300.13f, -3397.689f, 12.9452f };
					*fParam2 = 65.8332f;
					*fParam3 = 5f;
					break;
				
				case 2:
					*uParam1 = { -1301.792f, -3392.742f, 12.9452f };
					*fParam2 = 323.2079f;
					*fParam3 = 5f;
					break;
				
				case 3:
					*uParam1 = { -1307.278f, -3392.964f, 16.0027f };
					*fParam2 = 296.486f;
					*fParam3 = 1f;
					break;
			}
			break;
		
		case 3:
			*fParam3 = 1f;
			switch (iParam0)
			{
				case 0:
					*uParam1 = { 572.3206f, -3126.495f, 17.7686f };
					*fParam2 = 183.7487f;
					break;
				
				case 1:
					*uParam1 = { 563.9862f, -3118.138f, 17.7687f };
					*fParam2 = 91.0942f;
					break;
				
				case 2:
					*uParam1 = { 580.0829f, -3117.409f, 17.7686f };
					*fParam2 = 97.2584f;
					break;
				
				case 3:
					*uParam1 = { 520.6996f, -3119.512f, 17.714f };
					*fParam2 = 119.4985f;
					break;
				
				case 4:
					*uParam1 = { 541.4325f, -3119.131f, 7.566f };
					*fParam2 = 181.8911f;
					break;
				
				case 5:
					*uParam1 = { 586.7628f, -3118.98f, 17.7149f };
					*fParam2 = 271.86f;
					break;
				
				case 6:
					*uParam1 = { 594.2654f, -3122.402f, 5.0693f };
					*fParam2 = 89.4349f;
					break;
				
				case 7:
					*uParam1 = { 550.7189f, -3131.083f, 16.3604f };
					*fParam2 = 172.4657f;
					break;
				
				case 8:
					*uParam1 = { 587.6816f, -3131.081f, 16.3706f };
					*fParam2 = 200.5195f;
					break;
			}
			break;
	}
}

int func_213(int iParam0, int iParam1, vector3 vParam2, float fParam3, float fParam4, int iParam5)
{
	float fVar0;
	
	if (!unk_0x4F94F07DAD382CDA(Local_112.f_13[iParam0]))
	{
		unk_0xB815670C37E03CDE(iParam1);
		if (unk_0x5D98D654CDC2165A(iParam1))
		{
			if (unk_0xA107BB59F9A92498(0, 1, 0, 0))
			{
				if (!unk_0x0E4018692D92041D(Local_112.f_11, iParam0))
				{
					unk_0xCE04CE961AF41AB9(vParam2, 2f, 1, 0, 0, false);
					unk_0x8950ED5730F62EE8(&(Local_112.f_11), iParam0);
				}
				if (func_33(vParam2, 1f, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 50f, 0, 0, 0, 0))
				{
					if (func_211(&(Local_112.f_13[iParam0]), 26, iParam1, vParam2, fParam3, 1, 1, 1))
					{
						unk_0x0648A75D3F60E864(unk_0xBB28786B7F552D0B(Local_112.f_13[iParam0]), iParam5);
						unk_0x428C55A965F78103(unk_0xBB28786B7F552D0B(Local_112.f_13[iParam0]), 1, 0);
						if (func_1100() == 1)
						{
							unk_0x93AA93DA1B137032(unk_0xBB28786B7F552D0B(Local_112.f_13[iParam0]), 3, 0, 0, 0);
							unk_0x93AA93DA1B137032(unk_0xBB28786B7F552D0B(Local_112.f_13[iParam0]), 8, 0, 0, 0);
							unk_0x93AA93DA1B137032(unk_0xBB28786B7F552D0B(Local_112.f_13[iParam0]), 10, 0, 0, 0);
							unk_0x73D993BCA1CEC58D(unk_0xBB28786B7F552D0B(Local_112.f_13[iParam0]), 0, 1, 0, false);
						}
						else
						{
							unk_0xC475906893AEB995(unk_0xBB28786B7F552D0B(Local_112.f_13[iParam0]), 0);
						}
						unk_0xE18BDD1E31C07544(unk_0xBB28786B7F552D0B(Local_112.f_13[iParam0]), joaat("weapon_advancedrifle"), 25000, true);
						fVar0 = (30f * 1f);
						unk_0xDE9FF07CFD5DC172(unk_0xBB28786B7F552D0B(Local_112.f_13[iParam0]), round(fVar0));
						unk_0x52F5AAAD4824B17E(unk_0xBB28786B7F552D0B(Local_112.f_13[iParam0]), 1);
						unk_0x34A51926277F67BC(unk_0xBB28786B7F552D0B(Local_112.f_13[iParam0]), 1);
						unk_0x28F648743D7DE312(unk_0xBB28786B7F552D0B(Local_112.f_13[iParam0]), 0, true);
						unk_0x9E280E42C0773A3A(unk_0xBB28786B7F552D0B(Local_112.f_13[iParam0]), 1);
						unk_0xBCA389843909EB28(unk_0xBB28786B7F552D0B(Local_112.f_13[iParam0]), 1);
						unk_0x5FEE418CE11E6DDE(unk_0xBB28786B7F552D0B(Local_112.f_13[iParam0]), 42, true);
						unk_0x7FC2040EB34E0E31(unk_0xBB28786B7F552D0B(Local_112.f_13[iParam0]), 200, 0);
						unk_0x083F9B3B112E951F(unk_0xBB28786B7F552D0B(Local_112.f_13[iParam0]), 1);
						unk_0x897EF720254BBEA3(unk_0xBB28786B7F552D0B(Local_112.f_13[iParam0]), true);
						unk_0x262617DE7F70A56D(unk_0xBB28786B7F552D0B(Local_112.f_13[iParam0]), true);
						unk_0xAF4482B584BBF3B8(unk_0xBB28786B7F552D0B(Local_112.f_13[iParam0]), vParam2, fParam4, 0, 0);
					}
				}
			}
		}
	}
	if (unk_0x4F94F07DAD382CDA(Local_112.f_13[iParam0]))
	{
		return 1;
	}
	return 0;
}

void func_214(var uParam0, float fParam1, float fParam2)
{
	switch (func_1100())
	{
		case 0:
			*uParam0 = { -1166.844f, 4925.441f, 221.9988f };
			*fParam1 = 346.3493f;
			*fParam2 = 5f;
			break;
		
		case 1:
			*uParam0 = { -2113.965f, 3287.681f, 31.8103f };
			*fParam1 = 155.4586f;
			*fParam2 = 5f;
			break;
		
		case 2:
			*uParam0 = { -1301.891f, -3396.512f, 12.9452f };
			*fParam1 = 235.3724f;
			*fParam2 = 5f;
			break;
		
		case 3:
			*uParam0 = { 547.5576f, -3198.299f, 5.0693f };
			*fParam1 = 22.5507f;
			*fParam2 = 1f;
			break;
	}
}

int func_215()
{
	int iVar0;
	
	switch (func_1100())
	{
		case 0:
			iVar0 = joaat("a_m_o_acult_01");
			break;
		
		case 1:
			iVar0 = joaat("s_m_m_marine_01");
			break;
		
		case 2:
			iVar0 = joaat("g_m_m_armgoon_01");
			break;
		
		case 3:
			iVar0 = joaat("s_m_y_blackops_01");
			break;
	}
	return iVar0;
}

int func_216()
{
	int iVar0;
	
	switch (func_1100())
	{
		case 0:
			iVar0 = joaat("a_m_o_acult_02");
			break;
		
		case 1:
			iVar0 = joaat("s_m_m_marine_02");
			break;
		
		case 2:
			iVar0 = joaat("g_m_m_armboss_01");
			break;
		
		case 3:
			iVar0 = joaat("s_m_y_blackops_02");
			break;
	}
	return iVar0;
}

int func_217(var uParam0)
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

void func_218(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x06C1EBC003C18F1F())
		{
			func_8(uParam0, 0, 0);
		}
	}
}

void func_219()
{
	if (unk_0x0E4018692D92041D(iLocal_114, 29))
	{
		if (unk_0x0E4018692D92041D(iLocal_114, 28))
		{
			if (!unk_0x0E4018692D92041D(iLocal_114, 25))
			{
				if (unk_0x0E4018692D92041D(iLocal_115, 0))
				{
					if (!unk_0x0E4018692D92041D(iLocal_115, 1))
					{
						unk_0x1FEA416E00837AFC(1);
						unk_0xBDD4EE948C7B9BB5("AllowScoreAndRadio", 0);
					}
				}
				if (!unk_0x0E4018692D92041D(iLocal_114, 26))
				{
					if (unk_0x65BA35D6D61F1574("APT_COUNTDOWN_30S_KILL"))
					{
						unk_0x8950ED5730F62EE8(&iLocal_114, 26);
					}
				}
				if (unk_0x0E4018692D92041D(iLocal_114, 26))
				{
					if (!unk_0x0E4018692D92041D(iLocal_114, 27))
					{
						if (unk_0x65BA35D6D61F1574("APT_FADE_IN_RADIO"))
						{
							unk_0x8950ED5730F62EE8(&iLocal_114, 27);
						}
					}
					if (unk_0x0E4018692D92041D(iLocal_114, 27))
					{
						unk_0x8950ED5730F62EE8(&iLocal_114, 25);
					}
				}
			}
		}
	}
}

void func_220(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)
{
	int iVar0;
	int iVar1[32];
	bool bVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	struct<4> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
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
	struct<2> Var22;
	
	if (func_366(iParam2))
	{
		return;
	}
	fVar10 = -1f;
	iVar11 = -1;
	iVar12 = -1;
	iVar14 = 0;
	iVar15 = 0;
	uParam3->f_36 = 0;
	if (func_364() || iParam2 == 27)
	{
		if (func_309(iParam1, iParam2, uParam3, Global_1574175, 0, func_362(), sParam7))
		{
			func_308(1);
			if ((!func_306() && !func_304()) || unk_0x0E4018692D92041D(Global_2528542.f_4579, 1))
			{
				if (func_303())
				{
					func_298();
				}
				else
				{
					unk_0x1382AC429D0EA2BB(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_297(1);
						Global_1574175 = 0;
						iVar19 = -1;
						if (Global_1574396 != 1)
						{
							func_296(iParam1, 0, 0);
							if (unk_0x0E4018692D92041D(uParam3->f_33, 7))
							{
								unk_0xCE689A8E8C42ED78(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 27)
						{
							iVar17 = 0;
							while (iVar17 < 32)
							{
								iVar1[iVar17] = -1;
								iVar17++;
							}
							iVar17 = 0;
							while (iVar17 < 32)
							{
								if (func_1228(unk_0x7C1C88877E8AAA50(iVar17), 0, 1))
								{
									iVar3 = unk_0x7C1C88877E8AAA50(iVar17);
									if (!func_36(iVar3, 0))
									{
										if ((func_295(iVar3) || Global_2424047[iVar3 /*416*/].f_236 != -1) || func_144(iVar3))
										{
											iVar9 = iVar3;
											if (func_20(iVar3))
											{
												iVar1[iVar9] = iVar20;
												iVar20++;
												iVar0++;
												func_294(&iVar1, iVar3, &iVar20, &iVar0);
											}
										}
									}
								}
								iVar17++;
							}
						}
						if (!func_291(unk_0x95B959F18401C09A(), 0) && func_290(unk_0x95B959F18401C09A()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							if (func_289())
							{
								if (func_1228(unk_0x7C1C88877E8AAA50(iVar17), 0, 1))
								{
									iVar3 = unk_0x7C1C88877E8AAA50(iVar17);
								}
								else
								{
									iVar3 = func_18();
								}
							}
							else
							{
								iVar3 = (uParam0[iVar17 /*42*/])->f_1;
							}
							if ((func_288(iVar3) && func_283(iVar3, iParam2)) && func_1228(iVar3, 0, 1))
							{
								iVar9 = iVar3;
								iVar7 = Global_1589819[iVar9 /*818*/].f_211.f_6;
								Var6 = { func_278(iVar3) };
								if (iVar3 == unk_0x95B959F18401C09A())
								{
									uParam3->f_35 = iVar18;
								}
								StringCopy(&(uParam3->f_1), unk_0xEEF8394DB3D3DFA1(iVar3), 64);
								*(uParam4[iVar17 /*13*/]) = { func_47(iVar3) };
								iVar5 = func_272(iVar3);
								sVar4 = "";
								if (iVar5 != 0)
								{
									sVar4 = unk_0xD9A84B163D46BD9B(iVar5);
								}
								Global_1574175++;
								if ((uParam0[iVar17 /*42*/])->f_22 != -1f)
								{
									fVar10 = (uParam0[iVar17 /*42*/])->f_22;
								}
								if ((uParam0[iVar17 /*42*/])->f_31 != -1)
								{
									iVar11 = (uParam0[iVar17 /*42*/])->f_31;
								}
								if ((uParam0[iVar17 /*42*/])->f_41 != -1)
								{
									iVar12 = (uParam0[iVar17 /*42*/])->f_41;
								}
								iVar8 = (uParam0[iVar17 /*42*/])->f_9;
								if (((uParam0[iVar17 /*42*/])->f_9 != -1 || (uParam0[iVar17 /*42*/])->f_22 != -1f) || (uParam0[iVar17 /*42*/])->f_31 != -1)
								{
									if (!func_289())
									{
										iVar15 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_267(&iVar8, &fVar10, (uParam0[iVar17 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_266(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar13 = (uParam0[iVar17 /*42*/])->f_2 + 1;
									if (iVar19 != iVar13)
									{
										iVar19 = iVar13;
									}
									else
									{
										iVar13 = -2;
									}
								}
								iVar16 = func_259(iVar3, 0);
								if (bVar2)
								{
									if (func_19(iVar3, 1) && iVar1[iVar9] != -1)
									{
										iVar18 = iVar1[iVar9];
									}
									else
									{
										iVar18 = (iVar0 + iVar21);
										iVar21++;
									}
								}
								uParam3->f_38[iVar9 /*2*/].f_1 = iVar18;
								if ((uParam0[iVar17 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var22, "UW_TM", 16);
									StringIntConCat(&Var22, (uParam0[iVar17 /*42*/])->f_39, 16);
								}
								if (func_258(iParam5))
								{
									func_257(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar8, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
								}
								else
								{
									func_257(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar11, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
								}
								unk_0x8950ED5730F62EE8(&iVar14, iVar3);
								iVar18++;
							}
							iVar17++;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							iVar3 = unk_0x7C1C88877E8AAA50(iVar17);
							if (func_1228(iVar3, 0, 1) && !unk_0x0E4018692D92041D(iVar14, iVar3))
							{
								iVar3 = unk_0x7C1C88877E8AAA50(iVar17);
							}
							else
							{
								iVar3 = func_18();
							}
							if (func_288(iVar3))
							{
								if (func_1228(unk_0x7C1C88877E8AAA50(iVar17), 0, 1))
								{
									iVar9 = iVar3;
									iVar7 = Global_1589819[iVar9 /*818*/].f_211.f_6;
									Var6 = { func_278(iVar3) };
									*(uParam4[iVar17 /*13*/]) = { func_47(iVar3) };
									iVar5 = func_272(iVar3);
									sVar4 = "";
									if (iVar5 != 0)
									{
										sVar4 = unk_0xD9A84B163D46BD9B(iVar5);
									}
									Global_1574175++;
									iVar16 = func_259(iVar3, 1);
									if (bVar2)
									{
										if (func_19(iVar3, 1))
										{
											iVar18 = iVar1[iVar17];
										}
										else
										{
											iVar18 = (iVar0 + iVar21);
											iVar21++;
										}
									}
									uParam3->f_38[iVar9 /*2*/].f_1 = iVar18;
									func_234(iVar3, unk_0xEEF8394DB3D3DFA1(iVar3), iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar16, iVar15);
									iVar18++;
								}
							}
							iVar17++;
						}
						if (unk_0x0E4018692D92041D(uParam3->f_33, 11))
						{
							func_231(uParam3, iParam1);
						}
						func_230(&(uParam3->f_21));
						func_229();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0x0E4018692D92041D(uParam3->f_33, 7))
						{
							func_228(uParam3, iParam1);
							func_227(iParam1, 0, 1);
							unk_0x8950ED5730F62EE8(&(uParam3->f_33), 7);
						}
						func_228(uParam3, iParam1);
						if (!unk_0x0E4018692D92041D(uParam3->f_33, 11))
						{
							unk_0x8950ED5730F62EE8(&(uParam3->f_33), 11);
						}
						if (func_223(uParam3))
						{
							Global_1574396 = 1;
						}
						func_221(uParam3);
						if (Global_1574396 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574396 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0x11AE7F6A404414C9(*iParam1))
					{
						unk_0x5C58D0ADA22491FA(7);
						unk_0x5A2C46836B4DF5B3(*iParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0x5C58D0ADA22491FA(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_229();
			func_297(0);
			if (unk_0x0E4018692D92041D(uParam3->f_33, 7))
			{
				unk_0xCE689A8E8C42ED78(&(uParam3->f_33), 7);
			}
			if (unk_0x0E4018692D92041D(uParam3->f_33, 10))
			{
				unk_0xCE689A8E8C42ED78(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0x94A8B1D385430451();
}

void func_221(var uParam0)
{
	if (!func_9(&(uParam0->f_21)))
	{
		func_8(&(uParam0->f_21), 0, 0);
	}
	else if (func_6(&(uParam0->f_21), 250, 0))
	{
		func_230(&(uParam0->f_21));
		func_222(0);
	}
}

void func_222(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574396 != 2)
		{
			Global_1574396 = 2;
		}
	}
	else
	{
		switch (Global_1574396)
		{
			case 0:
				Global_1574396 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_223(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0;
	iVar0 = uParam0->f_37;
	iVar3 = unk_0x7C1C88877E8AAA50(uParam0->f_37);
	if (iVar3 != func_18() && func_1228(iVar3, 0, 1))
	{
		Var2 = { func_47(iVar3) };
		iVar1 = func_226(uParam0, uParam0->f_37);
		if (func_225(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x816B8CB68DC70BD1(&Var2))
					{
						if (unk_0xFE7877DB9DB46613(&Var2))
						{
							iVar4 = 1;
							func_224(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x2B1E6E274DDA8154(&Var2))
					{
						iVar4 = 1;
						func_224(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x816B8CB68DC70BD1(&Var2))
					{
						if (!unk_0xFE7877DB9DB46613(&Var2))
						{
							iVar4 = 1;
							func_224(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar4 = 1;
						func_224(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x816B8CB68DC70BD1(&Var2))
					{
						if (!unk_0x2B1E6E274DDA8154(&Var2))
						{
							iVar4 = 1;
							func_224(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x2B1E6E274DDA8154(&Var2))
					{
						iVar4 = 1;
						func_224(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar4;
}

void func_224(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_225(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xEC566F0D860729D3(&uParam0, 13);
}

var func_226(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_227(int iParam0, bool bParam1, int iParam2)
{
	if (unk_0xBB698266C5FDF0A7(*iParam0, "COLLAPSE"))
	{
		unk_0x295B86DE57A0721D(bParam1);
		unk_0x818901B332D5541D();
	}
	if (iParam2 == 1)
	{
		if (unk_0xBB698266C5FDF0A7(*iParam0, "DISPLAY_VIEW"))
		{
			unk_0x818901B332D5541D();
		}
	}
}

void func_228(var uParam0, int iParam1)
{
	if (!unk_0x0E4018692D92041D(uParam0->f_33, 10))
	{
		unk_0xBB698266C5FDF0A7(*iParam1, "SET_HIGHLIGHT");
		unk_0x4D9DA18AB3C2A466(uParam0->f_35);
		unk_0x818901B332D5541D();
		unk_0x8950ED5730F62EE8(&(uParam0->f_33), 10);
	}
}

void func_229()
{
	if (Global_1574396 != 0)
	{
		Global_1574396 = 0;
	}
}

void func_230(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_231(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x7C1C88877E8AAA50(iVar0);
		if (iVar2 != func_18())
		{
			if (func_1228(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_233(uParam0->f_38[iVar0 /*2*/], 0);
					func_232(iParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1589819[iVar0 /*818*/].f_211.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_232(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x11AE7F6A404414C9(*uParam0))
	{
		if (unk_0xBB698266C5FDF0A7(*uParam0, "SET_ICON"))
		{
			unk_0x4D9DA18AB3C2A466(iParam1);
			unk_0x4D9DA18AB3C2A466(iParam2);
			if (iParam2 == 65)
			{
				unk_0x4D9DA18AB3C2A466(iParam3);
			}
			unk_0x818901B332D5541D();
		}
	}
}

int func_233(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 65;
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_234(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_256() && iParam4 < func_255())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574177)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574396 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xBB698266C5FDF0A7(*iParam2, sVar1))
		{
			unk_0x4D9DA18AB3C2A466(iParam4);
			if (unk_0x0E4018692D92041D(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_254("");
			}
			else
			{
				unk_0x4D9DA18AB3C2A466(iParam10);
			}
			func_254(sParam1);
			unk_0x4D9DA18AB3C2A466(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_254("");
			}
			else
			{
				unk_0x4D9DA18AB3C2A466(65);
			}
			unk_0x4D9DA18AB3C2A466(-1);
			func_254("");
			if (uParam3->f_108 == 6)
			{
				func_254("");
			}
			else
			{
				func_254(&sParam5);
			}
			func_239(uParam3, iParam0);
			unk_0xE3F1DCC670198D2D(sParam9);
			unk_0xE3F1DCC670198D2D(sParam9);
			if (func_238(uParam3))
			{
				func_237("DPAD_FRIEND");
			}
			else if (func_236(uParam3))
			{
				func_237("DPAD_FRIEND");
			}
			else if (func_235(uParam3))
			{
				func_237("DPAD_CREW");
			}
			else
			{
				func_237("");
			}
			unk_0x818901B332D5541D();
		}
	}
}

bool func_235(var uParam0)
{
	return unk_0x0E4018692D92041D(uParam0->f_33, 6);
}

bool func_236(var uParam0)
{
	return unk_0x0E4018692D92041D(uParam0->f_33, 5);
}

void func_237(char* sParam0)
{
	unk_0x713FEBE56D2BD403(sParam0);
	unk_0x36F3AA9FFAAF8606();
}

int func_238(var uParam0)
{
	if (func_236(uParam0) && func_235(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_239(var uParam0, int iParam1)
{
	if (func_253(iParam1))
	{
		unk_0x4D9DA18AB3C2A466(121);
	}
	else if (func_244(iParam1))
	{
		unk_0x4D9DA18AB3C2A466(122);
	}
	else if (((unk_0x0E4018692D92041D(Global_4456448.f_27, 15) && iParam1 > -1) && iParam1 < 32) && unk_0x0E4018692D92041D(Global_2424047[iParam1 /*416*/].f_411, 0))
	{
		unk_0x4D9DA18AB3C2A466(123);
	}
	else
	{
		if (func_240())
		{
			uParam0->f_36 = 0;
		}
		unk_0x295B86DE57A0721D(uParam0->f_36);
	}
}

int func_240()
{
	if (unk_0x289064CB38B560AA())
	{
		if (func_242() || func_241())
		{
			return 1;
		}
	}
	return 0;
}

var func_241()
{
	return Global_2448756.f_14;
}

int func_242()
{
	if (unk_0x289064CB38B560AA())
	{
		return func_241();
	}
	return func_243(Global_4456448.f_138474);
}

int func_243(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4985[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_244(int iParam0)
{
	if ((func_1228(iParam0, 0, 1) && func_248()) && func_245(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_245(int iParam0, bool bParam1)
{
	return func_246(iParam0, bParam1, 1);
}

int func_246(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_247(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1626536[iParam0 /*603*/].f_11;
	if (iVar0 != func_18() && Global_1626536[iVar0 /*603*/].f_11.f_447 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_247(int iParam0, int iParam1)
{
	if (iParam0 != func_18())
	{
		if (Global_1626536[iParam0 /*603*/].f_11 != func_18())
		{
			if (Global_1626536[iParam0 /*603*/].f_11 == iParam0 && Global_1626536[iParam0 /*603*/].f_11.f_447 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_248()
{
	if (func_161(unk_0x95B959F18401C09A()) || func_252())
	{
		if (!func_249(unk_0x95B959F18401C09A(), 236))
		{
			return 0;
		}
	}
	return 1;
}

int func_249(int iParam0, int iParam1)
{
	if (func_251(iParam0) == iParam1)
	{
		return func_250(iParam0);
	}
	return 0;
}

int func_250(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x0E4018692D92041D(Global_1626536[iVar0 /*603*/].f_1, 7);
	}
	return 0;
}

int func_251(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1626536[iVar0 /*603*/];
	}
	return -1;
}

int func_252()
{
	switch (func_290(unk_0x95B959F18401C09A()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_253(int iParam0)
{
	if (func_240())
	{
		if (func_1228(iParam0, 0, 1))
		{
			return func_20(iParam0);
		}
	}
	if ((func_1228(iParam0, 0, 1) && func_248()) && func_247(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_254(char* sParam0)
{
	unk_0x3EFC6497702202D6(sParam0);
}

int func_255()
{
	int iVar0;
	
	if (Global_1574177)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_256()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574177)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_257(int iParam0, int iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_256() && iParam3 < func_255())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574177)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574396 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x11AE7F6A404414C9(*iParam1))
		{
			if (unk_0xBB698266C5FDF0A7(*iParam1, sVar1))
			{
				unk_0x4D9DA18AB3C2A466(iParam3);
				if (unk_0x0E4018692D92041D(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_254("");
				}
				else
				{
					unk_0x4D9DA18AB3C2A466(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0x786AF4A44E1B5B4B(sParam16))
				{
					func_237(sParam16);
				}
				else
				{
					func_254(&(uParam2->f_1));
				}
				unk_0x4D9DA18AB3C2A466(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_254("");
				}
				else
				{
					unk_0x4D9DA18AB3C2A466(65);
				}
				if (iParam12 == 1)
				{
					unk_0x4D9DA18AB3C2A466(iVar0);
				}
				else
				{
					unk_0x4D9DA18AB3C2A466(-1);
				}
				if (func_289())
				{
					func_254("");
				}
				else if (uParam2->f_108 == 6 && !unk_0x786AF4A44E1B5B4B(sParam16))
				{
					unk_0x713FEBE56D2BD403("FM_AE_ONE_INT");
					unk_0xFA6BEE2B1507FF1E(sParam16);
					unk_0xE800DC85FDF60F85(iParam17);
					unk_0x36F3AA9FFAAF8606();
				}
				else if (uParam2->f_108 == 5 && !unk_0x786AF4A44E1B5B4B(sParam16))
				{
					unk_0x713FEBE56D2BD403("FM_AE_ONE_INT");
					unk_0xFA6BEE2B1507FF1E(sParam16);
					unk_0xE800DC85FDF60F85(iParam17);
					unk_0x36F3AA9FFAAF8606();
				}
				else if (uParam2->f_108 == 7 && !unk_0x786AF4A44E1B5B4B(sParam16))
				{
					unk_0x713FEBE56D2BD403("FM_AE_TWO_INT");
					unk_0xFA6BEE2B1507FF1E(sParam16);
					unk_0xE800DC85FDF60F85(iParam17);
					unk_0x36F3AA9FFAAF8606();
				}
				else if (uParam2->f_108 == 8 && !unk_0x786AF4A44E1B5B4B(&(uParam2->f_104)))
				{
					unk_0x713FEBE56D2BD403("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x974BEF45D557B847(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						unk_0xE800DC85FDF60F85(iParam10);
					}
					unk_0xFA6BEE2B1507FF1E(&(uParam2->f_104));
					unk_0x36F3AA9FFAAF8606();
				}
				else if (uParam2->f_108 == 9)
				{
					unk_0x713FEBE56D2BD403("FM_AE_CASH");
					unk_0x9454B3D676754D96(iParam10, 1);
					unk_0x36F3AA9FFAAF8606();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						unk_0x713FEBE56D2BD403("FM_AE_CASH");
						unk_0x9454B3D676754D96(iParam10, 1);
						unk_0x36F3AA9FFAAF8606();
					}
					else
					{
						unk_0x713FEBE56D2BD403("FM_NG_CASH");
						unk_0x9454B3D676754D96(iParam10, 1);
						unk_0x36F3AA9FFAAF8606();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !unk_0x786AF4A44E1B5B4B(&(uParam2->f_104)))
					{
						func_237(&(uParam2->f_104));
					}
					else
					{
						func_254("");
					}
				}
				else if (iParam14 != -1)
				{
					unk_0x713FEBE56D2BD403("STRING");
					unk_0xDC97362660946DF9(iParam14, 6);
					unk_0x36F3AA9FFAAF8606();
				}
				else if (fParam13 != -1f)
				{
					unk_0x713FEBE56D2BD403("NUMBER");
					unk_0x974BEF45D557B847(fParam13, 1);
					unk_0x36F3AA9FFAAF8606();
				}
				else if (iParam10 != -1)
				{
					unk_0x4D9DA18AB3C2A466(iParam10);
				}
				else
				{
					func_254("");
				}
				if (uParam2->f_108 == 6)
				{
					func_254("");
				}
				else
				{
					func_254(&sParam4);
				}
				func_239(uParam2, iParam0);
				if (iParam12 == 1 || unk_0x786AF4A44E1B5B4B(sParam8))
				{
					func_254("");
					func_254("");
				}
				else
				{
					unk_0xE3F1DCC670198D2D(sParam8);
					unk_0xE3F1DCC670198D2D(sParam8);
				}
				if (func_238(uParam2))
				{
					func_237("DPAD_FRIEND");
				}
				else if (func_236(uParam2))
				{
					func_237("DPAD_FRIEND");
				}
				else if (func_235(uParam2))
				{
					func_237("DPAD_CREW");
				}
				else
				{
					func_237("");
				}
				unk_0x818901B332D5541D();
			}
		}
	}
}

int func_258(int iParam0)
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_259(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_161(iParam0)) && !func_264(iParam0))
	{
		iVar0 = func_263();
	}
	iVar1 = func_262(iParam0);
	if (!iVar1 == -1)
	{
		return func_260(iVar1);
	}
	return iVar0;
}

int func_260(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_261(iParam0);
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

var func_261(int iParam0)
{
	return Global_2417757.f_2105.f_44[iParam0 /*2*/].f_1;
}

int func_262(int iParam0)
{
	if (!iParam0 == func_18())
	{
		if (func_19(iParam0, 1))
		{
			return Global_2417757.f_2105.f_11[func_46(iParam0)];
		}
	}
	return -1;
}

int func_263()
{
	return 21;
}

bool func_264(int iParam0)
{
	return func_265(iParam0, 20);
}

bool func_265(int iParam0, int iParam1)
{
	return unk_0x0E4018692D92041D(Global_1626536[iParam0 /*603*/].f_11.f_4, iParam1);
}

char* func_266(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0x65CD0D9BE7EAB2FD())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (unk_0x65CD0D9BE7EAB2FD())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_267(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_271(iParam3))
	{
		*fParam1 = (func_268(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_258(iParam3))
	{
		*fParam1 = (func_268(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_268(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0x65CD0D9BE7EAB2FD())
			{
				return to_float(iParam1);
			}
			else
			{
				return func_270(to_float(iParam1));
			}
			break;
		
		case 2:
			if (unk_0x65CD0D9BE7EAB2FD())
			{
				return to_float(iParam1);
			}
			else
			{
				return func_269(to_float(iParam1));
			}
			break;
	}
	return to_float(iParam1);
}

float func_269(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_270(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_271(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_272(int iParam0)
{
	int iVar0;
	
	iVar0 = func_275(iParam0);
	if (iVar0 == -1)
	{
		func_273(iParam0, 1);
		return 0;
	}
	Global_1383710[iVar0 /*5*/].f_4 = 1;
	return Global_1383710[iVar0 /*5*/].f_2;
}

void func_273(int iParam0, bool bParam1)
{
	if (!func_1228(iParam0, 0, 1))
	{
		return;
	}
	if (func_275(iParam0) != -1)
	{
		return;
	}
	if (Global_1383873)
	{
		if (iParam0 == Global_1383873.f_1)
		{
			return;
		}
	}
	if (func_274(iParam0))
	{
		return;
	}
	if (Global_1383911 >= 32)
	{
		return;
	}
	Global_1383878[Global_1383911] = iParam0;
	Global_1383911++;
	if (bParam1)
	{
	}
}

int func_274(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1383911)
	{
		if (Global_1383878[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_275(int iParam0)
{
	int iVar0;
	
	if (!func_1228(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1383871 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1383871)
	{
		if (Global_1383710[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x5E83461198335D9B(Global_1383710[iVar0 /*5*/].f_2) && unk_0x47CD6BA404AEE035(Global_1383710[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_276(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_276(int iParam0)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_1383871)
	{
		return;
	}
	if (unk_0x5E83461198335D9B(Global_1383710[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1383710[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, unk_0xD9A84B163D46BD9B(Global_1383710[iParam0 /*5*/].f_2), 64);
			unk_0x4F9021F32A32F422(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		unk_0x381D44C2F0113354(Global_1383710[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1383871)
	{
		Global_1383710[iVar2 /*5*/] = { Global_1383710[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_277(&(Global_1383710[iVar2 /*5*/]));
	Global_1383871 = (Global_1383871 - 1);
}

void func_277(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_18();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0xB331FCEB94EB05C8())
	{
		uParam0->f_3 = unk_0x78DCC5D0CB43DEBA();
	}
}

struct<4> func_278(int iParam0)
{
	char cVar0[32];
	
	if (func_1228(iParam0, 0, 1))
	{
		Global_2505680 = { func_47(iParam0) };
		if (unk_0xDB36A8F522CBC12D())
		{
			if (func_225(Global_2505680))
			{
				if (!unk_0x8CB86A22FA87265D(&Global_2505680))
				{
					return cVar0;
				}
			}
		}
		else if (!unk_0xE9FD52A86479B22B(0))
		{
			return cVar0;
		}
		if (func_282(&Global_2505680))
		{
			Global_2505610 = { func_280(iParam0) };
			func_279(&Global_2505610, &cVar0);
		}
	}
	return cVar0;
}

void func_279(var uParam0, char* sParam1)
{
	unk_0x6BD9A45C73EA0684(uParam0, 35, sParam1);
}

struct<35> func_280(int iParam0)
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_281(iParam0))
	{
		return Global_1312899[unk_0x95B959F18401C09A() /*35*/];
	}
	Var0 = { func_47(iParam0) };
	unk_0xDD530AC51A578470(&Var1, 35, &Var0);
	return Var1;
}

int func_281(int iParam0)
{
	if (iParam0 == unk_0x95B959F18401C09A())
	{
		return 1;
	}
	return 0;
}

int func_282(var uParam0)
{
	if (unk_0x28D5F9AC3E7BC48B())
	{
		if (unk_0x062B7A5C795CB453() && unk_0x4A5CDD2BE8070A7F(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_283(int iParam0, int iParam1)
{
	if (iParam1 == 26)
	{
		if ((func_287(iParam0) || func_286(iParam0)) || func_285(iParam0))
		{
			return 0;
		}
	}
	if (!func_284(iParam0))
	{
		return 0;
	}
	if ((!func_295(iParam0) && Global_2424047[iParam0 /*416*/].f_236 == -1) && !func_144(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_284(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_142, 22);
}

bool func_285(int iParam0)
{
	if (func_287(iParam0))
	{
		return 1;
	}
	return unk_0x0E4018692D92041D(Global_1626536[iParam0 /*603*/].f_1, 8);
}

int func_286(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0x0E4018692D92041D(Global_1626536[iParam0 /*603*/].f_1, 10) || unk_0x0E4018692D92041D(Global_1626536[iParam0 /*603*/].f_1, 9));
	}
	return 0;
}

bool func_287(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_1626536[iParam0 /*603*/].f_1, 2);
}

int func_288(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return 0;
	}
	if (func_36(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x0E4018692D92041D(Global_1589819[iVar0 /*818*/].f_142, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_289()
{
	switch (func_290(unk_0x95B959F18401C09A()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		
		default:
	}
	switch (func_251(unk_0x95B959F18401C09A()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_264(unk_0x95B959F18401C09A()))
	{
		switch (func_290(unk_0x95B959F18401C09A()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	if (func_249(unk_0x95B959F18401C09A(), 236))
	{
		return 1;
	}
	return 0;
}

int func_290(int iParam0)
{
	if (func_160(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_33;
	}
	return -1;
}

int func_291(int iParam0, int iParam1)
{
	if (Global_1626536[iParam0 /*603*/].f_11.f_33 != -1 && func_292(Global_1626536[iParam0 /*603*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1626536[iParam0 /*603*/].f_11.f_32 != -1)
	{
		if (func_292(Global_1626536[iParam0 /*603*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_292(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_293(iParam0, 0);
	return 0;
}

int func_293(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

void func_294(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_1228(unk_0x7C1C88877E8AAA50(iVar0), 0, 1))
		{
			iVar1 = unk_0x7C1C88877E8AAA50(iVar0);
			if (!func_36(iVar1, 0))
			{
				if ((func_295(iVar1) || Global_2424047[iVar1 /*416*/].f_236 != -1) || func_144(iVar1))
				{
					if (func_16(iVar1, iParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_295(int iParam0)
{
	if (func_1228(iParam0, 0, 1))
	{
		if (func_1228(unk_0x95B959F18401C09A(), 0, 1))
		{
			if (unk_0xB4B29C6A8F481EEA(iParam0, unk_0x95B959F18401C09A()) || func_290(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_296(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x11AE7F6A404414C9(*iParam0))
	{
		unk_0xBB698266C5FDF0A7(*iParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x4D9DA18AB3C2A466(iParam1);
		unk_0x4D9DA18AB3C2A466(iParam2);
		unk_0x818901B332D5541D();
	}
}

void func_297(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1371944.f_2 == 0)
		{
			Global_1371944.f_2 = 1;
		}
	}
	else if (Global_1371944.f_2 == 1)
	{
		Global_1371944.f_2 = 0;
	}
}

void func_298()
{
	if (unk_0x0E4018692D92041D(Global_2528542.f_4579, 1))
	{
		if (func_302())
		{
			func_299();
		}
	}
}

void func_299()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2437364.f_2708[iVar0 /*80*/].f_2 != 0)
		{
			Global_2437364.f_2708[iVar0 /*80*/].f_2 = 5;
			func_300(&(Global_2437364.f_2708[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_300(var uParam0, int iParam1)
{
	func_301(uParam0, iParam1);
}

void func_301(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_302()
{
	return Global_2437364.f_2708[0 /*80*/].f_1 != 0;
}

int func_303()
{
	if (unk_0x0E4018692D92041D(Global_2528542.f_4579, 0) && func_302())
	{
		return 1;
	}
	if (unk_0x0E4018692D92041D(Global_2528542.f_4579, 1) && func_302())
	{
		return 1;
	}
	return 0;
}

int func_304()
{
	if (func_302())
	{
		if (func_305(Global_2437364.f_2708[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_305(int iParam0)
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
			return 1;
		
		default:
	}
	return 0;
}

int func_306()
{
	if (func_302())
	{
		if (func_307(Global_2437364.f_2708[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_307(int iParam0)
{
	switch (iParam0)
	{
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
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_308(int iParam0)
{
	if (Global_1371944.f_1 != Global_1371944)
	{
		Global_1371944.f_1 = Global_1371944;
	}
	if (Global_1371944 != iParam0)
	{
		Global_1371944 = iParam0;
	}
}

int func_309(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
{
	struct<4> Var0;
	char* sVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	char* sVar6;
	
	StringCopy(&Var0, "", 16);
	bVar3 = func_361(iParam1);
	if (iParam1 == 20)
	{
		bVar2 = true;
	}
	fVar4 = func_360();
	iVar5 = -1;
	if (iParam1 == 26 || iParam1 == 27)
	{
		if (func_359())
		{
			if (func_358() > 0 && Global_1574177)
			{
				unk_0x03D404FD169632CA();
				unk_0x5E1FA2076D53C3F5(fVar4);
				unk_0x581AE7724ACAD410(18);
				if (unk_0xFAC8F20FBC764F4D())
				{
					unk_0x2E4F269906BF5F41();
				}
				unk_0x581AE7724ACAD410(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_343())
		{
			func_342(iParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0x0E4018692D92041D(Global_2528542.f_4582, 26))
	{
		func_342(iParam0, uParam2, 1);
		return 0;
	}
	if (!func_9(&(uParam2->f_19)))
	{
		if (func_358() == 1)
		{
			func_341(bVar3, iParam0, 0);
			func_8(&(uParam2->f_19), 0, 0);
			func_342(iParam0, uParam2, 0);
			unk_0x8950ED5730F62EE8(&(Global_2528542.f_4583), 5);
		}
	}
	if (func_9(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0xFAC8F20FBC764F4D())
		{
			unk_0x2E4F269906BF5F41();
		}
		unk_0x581AE7724ACAD410(10);
		if (func_6(&(uParam2->f_19), 10000, 0) || (func_358() == 0 && !bParam5))
		{
			func_342(iParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar2 == 0)
			{
				func_340();
				if (iParam1 == 26 || iParam1 == 27)
				{
					unk_0x03D404FD169632CA();
				}
				unk_0x581AE7724ACAD410(18);
			}
			if (!unk_0x0E4018692D92041D(uParam2->f_33, 0))
			{
				if (bVar2 == 0)
				{
					func_340();
					if (iParam1 == 26 || iParam1 == 27)
					{
						unk_0x03D404FD169632CA();
					}
					unk_0x581AE7724ACAD410(18);
				}
				unk_0x5E1FA2076D53C3F5(fVar4);
				if (func_341(bVar3, iParam0, 0))
				{
					func_296(iParam0, 0, 0);
					sVar1 = func_338(iParam1, &(Global_4456448.f_138481), bParam4);
					Var0 = { func_336(iParam1) };
					if (bParam4)
					{
						func_333(iParam0, sVar1, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 26)
					{
						func_326(iParam0, func_330(uParam2), func_327(uParam2), -1);
					}
					else if (iParam1 == 27)
					{
						sVar6 = func_319(uParam2);
						if (!unk_0x786AF4A44E1B5B4B(sParam6))
						{
							sVar6 = sParam6;
						}
						func_317(iParam0, sVar6, func_318(), -1);
					}
					else if (func_240())
					{
						uParam2->f_34 = Global_1574176;
						func_333(iParam0, sVar1, &Var0, 1, -1, Global_1574176, 1);
					}
					else if (bVar2)
					{
						iVar5 = func_310(iParam1);
						uParam2->f_34 = Global_1574176;
						func_333(iParam0, sVar1, "", 0, iVar5, Global_1574176, 1);
					}
					else
					{
						iVar5 = func_310(iParam1);
						func_333(iParam0, sVar1, &Var0, 1, iVar5, -1, 1);
					}
					unk_0x8950ED5730F62EE8(&(uParam2->f_33), 0);
				}
			}
			if (unk_0x0E4018692D92041D(uParam2->f_33, 0))
			{
				Global_1574175 = uParam3;
				Global_1574174 = 1;
				unk_0x5E1FA2076D53C3F5(fVar4);
				if (bVar2)
				{
					if (uParam2->f_34 != Global_1574176)
					{
						unk_0xCE689A8E8C42ED78(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_310(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_316())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 39:
			iVar0 = 22;
			break;
		
		case 0:
		case 30:
		case 29:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 25:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 12:
		case 13:
		case 14:
		case 17:
			iVar0 = 2;
			break;
		
		case 15:
			iVar0 = 17;
			break;
		
		case 16:
			iVar0 = 18;
			break;
		
		case 18:
			if (func_315(unk_0x95B959F18401C09A()))
			{
				iVar0 = 20;
			}
			if (func_314(unk_0x95B959F18401C09A()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_313(unk_0x95B959F18401C09A()))
	{
		iVar0 = 2;
	}
	if (func_311())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_311()
{
	if (unk_0x289064CB38B560AA())
	{
		return func_42();
	}
	return func_312(Global_4456448.f_138474);
}

int func_312(int iParam0)
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

bool func_313(int iParam0)
{
	return Global_2424047[iParam0 /*416*/].f_115 == 4;
}

bool func_314(int iParam0)
{
	return Global_2424047[iParam0 /*416*/].f_115 == 7;
}

bool func_315(int iParam0)
{
	return Global_2424047[iParam0 /*416*/].f_115 == 2;
}

bool func_316()
{
	return Global_4456448.f_1 == 0;
}

void func_317(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x11AE7F6A404414C9(*iParam0))
	{
		unk_0xBB698266C5FDF0A7(*iParam0, "SET_TITLE");
		if (unk_0x786AF4A44E1B5B4B(sParam2))
		{
			func_237(sParam1);
		}
		else
		{
			unk_0x713FEBE56D2BD403("FM_AE_BRACKT");
			unk_0xFA6BEE2B1507FF1E(sParam1);
			unk_0xFA6BEE2B1507FF1E(sParam2);
			unk_0x36F3AA9FFAAF8606();
		}
		func_237("");
		if (iParam3 != -1)
		{
			unk_0x4D9DA18AB3C2A466(iParam3);
		}
		unk_0x818901B332D5541D();
	}
}

char* func_318()
{
	switch (func_290(unk_0x95B959F18401C09A()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_319(var uParam0)
{
	switch (uParam0->f_112)
	{
		case 0:
			return "GR_DPD_E";
			break;
		
		case 1:
			return "GR_DPD_F";
			break;
		
		case 2:
			return "GR_DPD_S";
			break;
	}
	switch (uParam0->f_110)
	{
		case 0:
			return "GR_DPD_A";
			break;
		
		case 1:
			return "GR_DPD_B";
			break;
		
		case 2:
			return "GR_DPD_C";
			break;
		
		case 3:
			return "GR_DPD_D";
			break;
	}
	switch (func_290(unk_0x95B959F18401C09A()))
	{
		case 233:
			return "H2_DPAD_SET";
			break;
		
		case 180:
			return "GB_BIGUNLOAD_T";
			break;
		
		case 182:
			return "DEAL_DEALN";
			break;
		
		case 194:
			return "PI_BIK_13_0";
			break;
		
		case 189:
			return "PI_BIK_4_1";
			break;
		
		case 193:
			return "PI_BIK_13_1";
			break;
		
		case 205:
			return "PI_BIK_13_3";
			break;
		
		case 186:
			return "CELL_BIKER_CK";
			break;
		
		case 207:
			return "DV_SH_TITLE";
			break;
		
		case 208:
			return "BA_SH_TITLE";
			break;
		
		case 209:
			return "SHU_SH_TITLE";
			break;
		
		case 210:
			return "PI_BIK_13_4";
			break;
		
		case 183:
			return "CELL_BIKER_RESC";
			break;
		
		case 199:
			return "CELL_BIKER_SEAR";
			break;
		
		case 201:
			return "CELL_BIKER_STAN";
			break;
		
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			if (func_322())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_321(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_321(1))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
		
		case 178:
			return "VEX_TITLEa";
		
		case 188:
			return "VEX_TITLEb";
		
		case 218:
			return "FRT_MODE";
		
		case 217:
			return "FRT_TRNS";
		
		case 214:
			return "MODE_PLW";
		
		case 215:
			return "MODE_FUL";
		
		case 216:
			return "MODE_AA";
		
		case 219:
			return "MODE_VEL";
		
		case 220:
			return "MODE_RMP";
		
		case 221:
			return "MODE_STK";
		
		case 225:
			return "GR_TITLEL";
		
		case 226:
			return "GRS_TITLEL";
		
		case 227:
			return "GRD_TITLEL";
		
		case 195:
			return "GB_STEAL_T";
		
		case 198:
			return "SC_MENU_TITLE";
		
		case 190:
			return "GB_DPAD_BSEL";
		
		case 191:
			return "GB_DPAD_BDEF";
		
		case 185:
			return "GB_DPAD_GFH";
		
		case 197:
			return "GB_DPAD_JB";
		
		case 179:
			return "CELL_JOUST";
		
		case 200:
			return "CAG_BLIP";
		
		case 192:
			if (func_320(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_181))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_320(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

bool func_321(bool bParam0)
{
	return func_245(unk_0x95B959F18401C09A(), bParam0);
}

bool func_322()
{
	return (func_325() && func_323(func_324()));
}

bool func_323(int iParam0)
{
	return func_247(iParam0, 1);
}

int func_324()
{
	return Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_35;
}

bool func_325()
{
	return Global_1589819[unk_0x95B959F18401C09A() /*818*/] == 148;
}

void func_326(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x11AE7F6A404414C9(*iParam0))
	{
		unk_0xBB698266C5FDF0A7(*iParam0, "SET_TITLE");
		if (unk_0x786AF4A44E1B5B4B(sParam2))
		{
			func_237(sParam1);
		}
		else if (func_251(unk_0x95B959F18401C09A()) == 133)
		{
			unk_0x713FEBE56D2BD403("FM_AE_BRACKT_C");
			unk_0xFA6BEE2B1507FF1E(sParam1);
			unk_0xFA6BEE2B1507FF1E(sParam2);
			unk_0x36F3AA9FFAAF8606();
		}
		else
		{
			unk_0x713FEBE56D2BD403("FM_AE_BRACKT");
			unk_0xFA6BEE2B1507FF1E(sParam1);
			unk_0xFA6BEE2B1507FF1E(sParam2);
			unk_0x36F3AA9FFAAF8606();
		}
		func_237("");
		if (iParam3 != -1)
		{
			unk_0x4D9DA18AB3C2A466(iParam3);
		}
		unk_0x818901B332D5541D();
	}
}

char* func_327(var uParam0)
{
	int iVar0;
	
	iVar0 = func_251(unk_0x95B959F18401C09A());
	if (func_329())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_328())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

int func_328()
{
	if (func_251(unk_0x95B959F18401C09A()) == 133)
	{
		return Global_2528542.f_4810;
	}
	return -1;
}

bool func_329()
{
	return Global_1589692;
}

char* func_330(var uParam0)
{
	int iVar0;
	
	iVar0 = func_251(unk_0x95B959F18401C09A());
	if (func_329())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_332() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_332() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_328())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_331() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_331()
{
	return Global_2528542.f_4813;
}

int func_332()
{
	if (func_251(unk_0x95B959F18401C09A()) == 132)
	{
		return Global_2528542.f_4808;
	}
	return -1;
}

void func_333(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x11AE7F6A404414C9(*iParam0))
	{
		unk_0xBB698266C5FDF0A7(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_254(sParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x713FEBE56D2BD403(sParam1);
			unk_0xE800DC85FDF60F85(iParam5);
			unk_0x36F3AA9FFAAF8606();
		}
		else
		{
			func_237(sParam1);
		}
		if (func_359() && iParam6)
		{
			if (func_335())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x713FEBE56D2BD403("LBD_DPD_CNT");
			unk_0xE800DC85FDF60F85(iVar0);
			unk_0xE800DC85FDF60F85(iVar1);
			unk_0x36F3AA9FFAAF8606();
		}
		else
		{
			func_237(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x4D9DA18AB3C2A466(iParam4);
			if (func_334(unk_0x95B959F18401C09A()))
			{
				unk_0x4D9DA18AB3C2A466(166);
			}
			else if (func_42())
			{
				unk_0x4D9DA18AB3C2A466(220);
			}
		}
		unk_0x818901B332D5541D();
	}
}

int func_334(int iParam0)
{
	if (func_315(iParam0) || func_314(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_335()
{
	return Global_1574177;
}

struct<4> func_336(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_337(unk_0x95B959F18401C09A()) || func_313(unk_0x95B959F18401C09A()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
		case 17:
		case 15:
		case 16:
		case 18:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_4456448.f_39, 16);
			break;
	}
	if (func_240() && unk_0x289064CB38B560AA())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_39, 16);
	}
	return Var0;
}

bool func_337(int iParam0)
{
	return Global_2424047[iParam0 /*416*/].f_115 == 5;
}

char* func_338(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_240() || unk_0x786AF4A44E1B5B4B(sParam1)))
	{
		uVar0 = func_339();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 24)
	{
		if (Global_1574415 == 0)
		{
			Global_1574415 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0x786AF4A44E1B5B4B(sParam1))
	{
		if (Global_1574415 == 1)
		{
			Global_1574415 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574415 == 0)
		{
			Global_1574415 = 1;
		}
		switch (iParam0)
		{
			case 0:
			case 30:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 9:
			case 10:
			case 6:
			case 25:
			case 11:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 18:
			case 14:
			case 17:
			case 15:
			case 13:
			case 12:
			case 16:
			case 19:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 21:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_339()
{
	if (unk_0x3D766F5FD36E703E())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0xC95AE863AB260A58())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0x18D92F5299E07379())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0xC8AE1B3BA3C8EDC9())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_340()
{
	Global_37339 = 1;
}

bool func_341(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		*iParam1 = unk_0x199B24FF79A52CCF("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*iParam1 = unk_0x199B24FF79A52CCF("MP_SPECTATOR_CARD");
	}
	else
	{
		*iParam1 = unk_0x199B24FF79A52CCF("mp_matchmaking_card");
	}
	return unk_0x11AE7F6A404414C9(*iParam1);
}

void func_342(int iParam0, var uParam1, bool bParam2)
{
	unk_0xCE689A8E8C42ED78(&(uParam1->f_33), 7);
	Global_1574175 = 0;
	func_229();
	Global_1574174 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_9(&(uParam1->f_19)))
		{
			func_230(&(uParam1->f_19));
			unk_0xCE689A8E8C42ED78(&(Global_2528542.f_4583), 5);
		}
	}
	if (unk_0x11AE7F6A404414C9(*iParam0))
	{
		unk_0x83A1D480DB0B52CC(iParam0);
	}
	if (unk_0x0E4018692D92041D(uParam1->f_33, 0))
	{
		unk_0xCE689A8E8C42ED78(&(uParam1->f_33), 0);
	}
	unk_0x5E1FA2076D53C3F5(0f);
}

int func_343()
{
	if (func_357())
	{
		return 0;
	}
	if (func_356())
	{
		return 0;
	}
	if (!func_354())
	{
		return 0;
	}
	if (!func_352())
	{
		return 0;
	}
	if (func_351(8, -1))
	{
		return 0;
	}
	if (func_358() == 2)
	{
		return 0;
	}
	if (Global_2528542.f_4534)
	{
		return 0;
	}
	if (func_350())
	{
		return 0;
	}
	else if (!func_83(unk_0x95B959F18401C09A(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_349(1) || func_347(1)) || Global_17272.f_124) || Global_17272)
	{
		return 0;
	}
	if (unk_0xD9C92B0885A075F8())
	{
		return 0;
	}
	if (func_346() && Global_1689319 == 2)
	{
		return 0;
	}
	if (func_120(unk_0x95B959F18401C09A()) && !func_346())
	{
		return 0;
	}
	if (Global_1657075)
	{
		return 0;
	}
	if (Global_1657080)
	{
		return 0;
	}
	if (func_345(0))
	{
		return 0;
	}
	if (unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_23, 4))
	{
		return 0;
	}
	if (Global_1365133)
	{
		return 0;
	}
	if ((Global_1682620.f_705.f_5 || Global_1685431.f_705.f_5) || Global_1681663.f_705.f_5)
	{
		return 0;
	}
	if (func_344(unk_0x95B959F18401C09A()))
	{
		return 0;
	}
	return 1;
}

bool func_344(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_2424047[iParam0 /*416*/].f_309.f_4, 6);
}

bool func_345(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_2528542.f_4889.f_41, iParam0);
}

bool func_346()
{
	return (unk_0x0E4018692D92041D(Global_4456448.f_30, 12) && unk_0x0E4018692D92041D(Global_1689320, 0));
}

int func_347(bool bParam0)
{
	if (unk_0xCF5490505B6D51BE())
	{
		if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
		{
			if (func_348(unk_0x33CD235DF1E6A94E()))
			{
				if (unk_0xF1CDE9FD207C4CD8(0, 25) || unk_0xF1CDE9FD207C4CD8(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_17272.f_130)
	{
		return 0;
	}
	if (unk_0xF1CDE9FD207C4CD8(0, 19) || (!bParam0 && unk_0x1CAA347A3C84C225(0, 19)))
	{
		return 1;
	}
	if (unk_0x4CE1DD5CFC1F941E())
	{
		if (((unk_0xF1CDE9FD207C4CD8(0, 166) || unk_0xF1CDE9FD207C4CD8(0, 167)) || unk_0xF1CDE9FD207C4CD8(0, 168)) || unk_0xF1CDE9FD207C4CD8(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0x1CAA347A3C84C225(0, 166) || unk_0x1CAA347A3C84C225(0, 167)) || unk_0x1CAA347A3C84C225(0, 168)) || unk_0x1CAA347A3C84C225(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_348(int iParam0)
{
	int iVar0;
	
	if (unk_0xF9FB5255747DBE88())
	{
		if (!unk_0xBC2FC12AD0FBF72E(iParam0))
		{
			unk_0x96C4B46F194803A7(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == 177293209)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_349(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17272.f_4 && Global_17272.f_104 == 4);
	}
	return Global_17272.f_4;
}

bool func_350()
{
	return Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_196 != 0;
}

bool func_351(int iParam0, int iParam1)
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

int func_352()
{
	if (func_353() == 0)
	{
		return 1;
	}
	return 0;
}

int func_353()
{
	return Global_1312467.f_18;
}

int func_354()
{
	if (func_355())
	{
		return 1;
	}
	if (unk_0xBB5E373390A5F824())
	{
		return 0;
	}
	if (unk_0x75A50A9E5219C397() || unk_0xD33DAC8D0D70A78C())
	{
		return 0;
	}
	if (unk_0x90346DACE0A79A81())
	{
		return 0;
	}
	return 1;
}

bool func_355()
{
	return Global_1312439;
}

bool func_356()
{
	return Global_1589819[unk_0x95B959F18401C09A() /*818*/] == 5;
}

bool func_357()
{
	return unk_0xE3903F59E2F22150() <= Global_17411.f_5878 + 100;
}

int func_358()
{
	return Global_1371947.f_68;
}

int func_359()
{
	if (Global_1574176 > 16)
	{
		return 1;
	}
	return 0;
}

float func_360()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x5972EE9BF3C1BE95()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_361(int iParam0)
{
	switch (iParam0)
	{
		case 20:
		case 26:
		case 27:
		case 39:
			return 1;
		
		default:
	}
	return 0;
}

int func_362()
{
	if (func_363(unk_0x95B959F18401C09A()))
	{
		return Global_1319080;
	}
	return 0;
}

int func_363(int iParam0)
{
	if (unk_0xB331FCEB94EB05C8())
	{
		if (func_36(iParam0, 0))
		{
			return unk_0xCCD95118AB42E155(iParam0);
		}
	}
	return 0;
}

int func_364()
{
	if (func_362())
	{
		return 1;
	}
	if (func_285(unk_0x95B959F18401C09A()))
	{
		return 0;
	}
	if (func_329())
	{
		return 1;
	}
	if (func_161(unk_0x95B959F18401C09A()))
	{
		switch (func_251(unk_0x95B959F18401C09A()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_365(unk_0x95B959F18401C09A()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_365(unk_0x95B959F18401C09A()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_365(unk_0x95B959F18401C09A()))
				{
					return 1;
				}
				break;
			
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_365(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_1626536[iParam0 /*603*/].f_1, 4);
}

int func_366(int iParam0)
{
	if (iParam0 == 27)
	{
		if ((func_161(unk_0x95B959F18401C09A()) && !func_264(unk_0x95B959F18401C09A())) && !func_249(unk_0x95B959F18401C09A(), 236))
		{
			return 1;
		}
	}
	if (iParam0 == 26)
	{
		if (func_160(unk_0x95B959F18401C09A(), 0) && func_264(unk_0x95B959F18401C09A()))
		{
			return 1;
		}
		if (func_367(unk_0x95B959F18401C09A()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_367(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_161(iParam0) && !func_287(iParam0)) && !unk_0x0E4018692D92041D(Global_1626536[iParam0 /*603*/].f_1, 8));
	bVar2 = func_264(iParam0);
	uVar3 = func_380();
	uVar4 = func_371();
	if ((bVar1 && (func_250(iParam0) || func_370(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_369(iParam0)) && !func_368(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2528542.f_4889.f_212 != iVar0)
	{
		Global_2528542.f_4889.f_212 = iVar0;
	}
	return iVar0;
}

bool func_368(int iParam0)
{
	return func_265(iParam0, 19);
}

int func_369(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_265(iParam0, 9);
	}
	return 0;
}

int func_370(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x0E4018692D92041D(Global_1626536[iVar0 /*603*/].f_1, 0);
	}
	return 0;
}

int func_371()
{
	if ((func_265(unk_0x95B959F18401C09A(), 21) || func_265(unk_0x95B959F18401C09A(), 22)) || func_377())
	{
		return 1;
	}
	if (func_373())
	{
		func_372(22);
		return 1;
	}
	return 0;
}

void func_372(int iParam0)
{
	unk_0x8950ED5730F62EE8(&(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_4), iParam0);
}

int func_373()
{
	if (func_160(unk_0x95B959F18401C09A(), 0))
	{
		if (((func_380() && !func_376()) || func_375(unk_0x95B959F18401C09A(), 21)) || func_375(unk_0x95B959F18401C09A(), 25))
		{
			return 1;
		}
		else
		{
			func_374(27);
		}
	}
	return 0;
}

void func_374(int iParam0)
{
	unk_0xCE689A8E8C42ED78(&(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_4), iParam0);
}

bool func_375(int iParam0, int iParam1)
{
	return unk_0x0E4018692D92041D(Global_2424047[iParam0 /*416*/].f_208, iParam1);
}

bool func_376()
{
	return Global_1312417.f_1;
}

bool func_377()
{
	return func_378(338, -1);
}

int func_378(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2571340[iParam0 /*3*/][func_379(iParam1)];
	if (unk_0x0F0A07F7B2FAAE06(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_379(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_38();
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

bool func_380()
{
	return Global_1312417;
}

bool func_381()
{
	return unk_0x0E4018692D92041D(Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_1, 5);
}

void func_382()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x77BABFD1D75AA582(1))
	{
		iVar1 = unk_0x5487531DB7DA4AB5(1, iVar0);
		switch (iVar1)
		{
			case 182:
				func_383(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_383(int iParam0)
{
	struct<4> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	if (unk_0x286A5F0670063839(1, iParam0, &Var0, 11))
	{
		if (func_1100() == 1)
		{
			if (!unk_0x0E4018692D92041D(Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_1, 11))
			{
				if (!unk_0x0E4018692D92041D(Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_1, 15))
				{
					if (!unk_0x0E4018692D92041D(Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_1, 16))
					{
						if (!unk_0x0E4018692D92041D(Local_112.f_1, 15))
						{
							if (!unk_0x0E4018692D92041D(Local_112.f_1, 10))
							{
								if (unk_0x4F94F07DAD382CDA(Local_112.f_29[0]))
								{
									if (unk_0x765F6FEEFF39224F(Var0))
									{
										if (unk_0x680558231C80291D(Var0))
										{
											iVar5 = unk_0xEAE1362B9F5C7B18(Var0);
											if (iVar5 == unk_0xFC00F22E930BFD55(Local_112.f_29[0]))
											{
												if (Var0.f_3)
												{
													if (unk_0x765F6FEEFF39224F(Var0.f_1))
													{
														if (unk_0x068481DAF84B9654(Var0.f_1))
														{
															iVar1 = unk_0x22B02EC53152632C(Var0.f_1);
															if (unk_0xE09156665EC2D83B(iVar1))
															{
																iVar3 = unk_0x5C7617A25D50AAE9(iVar1);
																if (unk_0x982A72D771CF4FE1(iVar3))
																{
																	if (iVar3 == unk_0x95B959F18401C09A())
																	{
																		unk_0x8950ED5730F62EE8(&(Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_1), 11);
																		if (!func_265(unk_0x95B959F18401C09A(), 20))
																		{
																			if (func_381())
																			{
																				func_386(0);
																				func_384();
																			}
																		}
																	}
																}
																else
																{
																	unk_0x8950ED5730F62EE8(&(Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_1), 16);
																}
															}
															else
															{
																unk_0x8950ED5730F62EE8(&(Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_1), 15);
															}
														}
													}
												}
												else if (!func_265(unk_0x95B959F18401C09A(), 20))
												{
													if (func_381())
													{
														if (unk_0x765F6FEEFF39224F(Var0.f_1))
														{
															if (unk_0x068481DAF84B9654(Var0.f_1))
															{
																iVar1 = unk_0x22B02EC53152632C(Var0.f_1);
																if (unk_0xE09156665EC2D83B(iVar1))
																{
																	iVar3 = unk_0x5C7617A25D50AAE9(iVar1);
																	if (iVar3 == unk_0x95B959F18401C09A())
																	{
																		func_386(0);
																		func_384();
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		if (func_1100() == 2)
		{
			iVar6 = 0;
			while (iVar6 < 15)
			{
				if (unk_0x4F94F07DAD382CDA(Local_112.f_13[iVar6]))
				{
					if (!unk_0x0E4018692D92041D(Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_2, iVar6))
					{
						if (unk_0x765F6FEEFF39224F(Var0))
						{
							if (unk_0x068481DAF84B9654(Var0))
							{
								iVar2 = unk_0x22B02EC53152632C(Var0);
								if (iVar2 == unk_0xBB28786B7F552D0B(Local_112.f_13[iVar6]))
								{
									if (unk_0x765F6FEEFF39224F(Var0.f_1))
									{
										if (unk_0x068481DAF84B9654(Var0.f_1))
										{
											iVar1 = unk_0x22B02EC53152632C(Var0.f_1);
											if (unk_0xE09156665EC2D83B(iVar1))
											{
												iVar3 = unk_0x5C7617A25D50AAE9(iVar1);
												if (iVar3 == unk_0x95B959F18401C09A())
												{
													unk_0x8950ED5730F62EE8(&(Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_2), iVar6);
												}
											}
										}
									}
								}
							}
						}
					}
				}
				iVar6++;
			}
		}
		if (func_381())
		{
			if (!func_265(unk_0x95B959F18401C09A(), 20))
			{
				if (unk_0x765F6FEEFF39224F(Var0))
				{
					if (unk_0x068481DAF84B9654(Var0))
					{
						iVar2 = unk_0x22B02EC53152632C(Var0);
						if (unk_0xE09156665EC2D83B(iVar2))
						{
							iVar4 = unk_0x5C7617A25D50AAE9(iVar2);
							if (unk_0x765F6FEEFF39224F(Var0.f_1))
							{
								if (unk_0x068481DAF84B9654(Var0.f_1))
								{
									iVar1 = unk_0x22B02EC53152632C(Var0.f_1);
									if (unk_0xE09156665EC2D83B(iVar1))
									{
										iVar3 = unk_0x5C7617A25D50AAE9(iVar1);
										if (iVar3 == unk_0x95B959F18401C09A())
										{
											if (unk_0x982A72D771CF4FE1(iVar4))
											{
												iVar7 = unk_0xF8E1DE22DEB7E100(iVar4);
												if (iVar7 == Local_112.f_5)
												{
													func_386(0);
													func_384();
												}
												else if (iVar7 == Local_112.f_7)
												{
													func_386(0);
													func_384();
												}
												else if (func_19(iVar4, 1))
												{
													if (Local_112.f_8 > -1)
													{
														iVar8 = unk_0xEB9DC13235C0B345(unk_0xDD4FFAA17341D382(Local_112.f_8));
														if (func_16(iVar4, iVar8, 1))
														{
															func_386(0);
															func_384();
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_384()
{
	if (!func_385(unk_0x95B959F18401C09A()))
	{
		func_372(25);
	}
}

bool func_385(int iParam0)
{
	return func_265(iParam0, 25);
}

void func_386(int iParam0)
{
	if (!func_264(unk_0x95B959F18401C09A()))
	{
		if (iParam0 || func_367(unk_0x95B959F18401C09A()) != 0)
		{
			func_372(20);
			func_387(func_388());
			if (func_161(unk_0x95B959F18401C09A()))
			{
				if (!unk_0x0E4018692D92041D(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_1, 8))
				{
					unk_0x8950ED5730F62EE8(&(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_1), 8);
				}
			}
		}
	}
}

void func_387(var uParam0)
{
	int iVar0;
	
	if (Global_262145.f_8462)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1312570.f_1[iVar0] == -1)
		{
			Global_1312570.f_1[iVar0] = uParam0;
			Global_1312570 = 1;
			return;
		}
		iVar0++;
	}
}

int func_388()
{
	int iVar0;
	
	iVar0 = func_290(unk_0x95B959F18401C09A());
	if (func_392(iVar0) == 0)
	{
		return -1;
	}
	if (func_391(iVar0))
	{
		return 65;
	}
	if (func_390(iVar0))
	{
		return 66;
	}
	if (func_389(iVar0))
	{
		return 63;
	}
	return 64;
}

int func_389(int iParam0)
{
	switch (iParam0)
	{
		case 241:
		case 248:
		case 242:
		case 244:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return 0;
}

int func_390(int iParam0)
{
	switch (iParam0)
	{
		case 180:
		case 183:
		case 185:
		case 186:
		case 182:
		case 195:
		case 197:
		case 198:
		case 207:
		case 208:
		case 209:
			return 1;
		
		default:
	}
	return 0;
}

int func_391(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 201:
		case 200:
		case 148:
			return 1;
		
		default:
	}
	return 0;
}

int func_392(int iParam0)
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 249:
		case 250:
		case 243:
			return 0;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 241:
		case 242:
		case 244:
		case 248:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

void func_393()
{
	struct<8> Var0;
	
	switch (Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_5)
	{
		case 0:
			if (func_1116())
			{
				Var0 = { func_1079() };
				func_1078(86, "BIGM_ASLTN", &Var0, 1, -1, 2, 1);
				func_1055(-1, 0, 0, -1, 0, 0);
				Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_5 = 1;
			}
			else
			{
				Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_5 = 2;
			}
			break;
		
		case 1:
			func_1049();
			func_1046();
			func_1045();
			func_1036();
			func_1032();
			func_1029();
			func_1028();
			func_1027();
			func_717();
			if (Local_112.f_51 == 2)
			{
				if (unk_0xE38E3CF1625A4145(iLocal_123))
				{
					unk_0x1ABDB383C83A336A(&iLocal_123);
				}
				Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_5 = 2;
			}
			else if (Local_112.f_51 == 3)
			{
				Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_5 = 3;
			}
			else if (Local_112.f_51 == 4)
			{
				Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_5 = 4;
			}
			break;
		
		case 2:
			func_716();
			func_1049();
			func_699();
			func_1046();
			func_1045();
			func_676();
			func_591();
			func_1036();
			func_541();
			func_540();
			func_1029();
			func_538();
			func_1028();
			func_447();
			func_1027();
			func_717();
			if (unk_0x0E4018692D92041D(Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_1, 1))
			{
				Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_5 = 3;
			}
			else if (Local_112.f_51 == 3)
			{
				Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_5 = 3;
			}
			else if (Local_112.f_51 == 4)
			{
				Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_5 = 4;
			}
			else if (func_438())
			{
				unk_0x8950ED5730F62EE8(&iLocal_114, 24);
				Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_5 = 4;
			}
			break;
		
		case 3:
			if (Local_112.f_51 == 4)
			{
				Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_5 = 4;
			}
			break;
		
		case 4:
			func_1134();
			break;
	}
	if (Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_5 < 3)
	{
		func_394();
	}
}

void func_394()
{
	vector3 vVar0;
	
	if (!func_1116() && !func_381())
	{
		return;
	}
	if (func_1100() == 1)
	{
		if (unk_0x4F94F07DAD382CDA(Local_112.f_29[0]))
		{
			vVar0 = { unk_0xFBB1F99A825CAB09(unk_0xFC00F22E930BFD55(Local_112.f_29[0]), false) };
		}
	}
	else if (unk_0x4F94F07DAD382CDA(Local_112.f_12))
	{
		vVar0 = { unk_0xFBB1F99A825CAB09(unk_0xFC00F22E930BFD55(Local_112.f_12), false) };
	}
	if (!func_437(vVar0, 0f, 0f, 0f, 0))
	{
		func_395(159, vVar0, &uLocal_136, 1140457472, 1144750080, 0);
	}
}

void func_395(int iParam0, vector3 vParam1, var uParam2, float fParam3, float fParam4, int iParam5)
{
	float fVar0;
	float fVar1;
	
	if ((((func_161(unk_0x95B959F18401C09A()) && !func_287(unk_0x95B959F18401C09A())) && !unk_0x0E4018692D92041D(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_1, 8)) && (func_250(unk_0x95B959F18401C09A()) || func_370(unk_0x95B959F18401C09A()))) || func_41(vParam1))
	{
		return;
	}
	Global_1669357 = { vParam1 };
	fVar0 = vdist(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false), vParam1);
	func_435(iParam0, fVar0);
	if (unk_0xD9C92B0885A075F8() && unk_0x1B9A01A53920FD50() == 15)
	{
		if (func_369(unk_0x95B959F18401C09A()) || func_434(unk_0x95B959F18401C09A()))
		{
			if (!unk_0x43AF959D59AC7162(1344549371))
			{
				unk_0xC3E18E4C4B2A7CEF(1344549371);
			}
		}
		else if (unk_0x43AF959D59AC7162(1344549371))
		{
			unk_0xDFCF2335B2854E41(1344549371);
		}
	}
	if (fVar0 < fParam3)
	{
		if (!(func_375(unk_0x95B959F18401C09A(), 21) || func_375(unk_0x95B959F18401C09A(), 25)))
		{
			func_433(vParam1, 1, 0);
		}
		if (!*uParam2 && func_1228(unk_0x95B959F18401C09A(), 1, 1))
		{
			*uParam2 = 1;
			if (func_432(iParam0))
			{
				unk_0x4B06B5746CBEC99F(func_431(iParam0));
				if (func_430(iParam0, -1))
				{
					unk_0xD875615F72CD34A6(0);
					if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) > 0)
					{
						unk_0x98F04A4FFB4AD01C(unk_0x95B959F18401C09A(), 0, 1);
						unk_0x66D901F8097E8E86(unk_0x95B959F18401C09A(), 1);
					}
					unk_0x8950ED5730F62EE8(&(Global_1669357.f_3), 0);
				}
			}
			if (func_429(iParam0))
			{
				fVar1 = func_428(iParam0);
				if (fVar1 != 1f)
				{
					func_424(fVar1);
					unk_0x8950ED5730F62EE8(&(Global_1669357.f_3), 1);
				}
			}
			if (!Global_2391045)
			{
				if (func_423(iParam0) && func_369(unk_0x95B959F18401C09A()))
				{
					func_421(1);
					func_420(2);
				}
			}
			func_372(19);
		}
	}
	else
	{
		if (fVar0 > fParam4)
		{
			if (func_265(unk_0x95B959F18401C09A(), 19))
			{
				func_374(19);
			}
		}
		if (*uParam2 && func_1228(unk_0x95B959F18401C09A(), 1, 1))
		{
			*uParam2 = 0;
			if (func_432(iParam0))
			{
				if (unk_0x0E4018692D92041D(Global_1669357.f_3, 0))
				{
					unk_0x4B06B5746CBEC99F(1f);
					unk_0xD875615F72CD34A6(5);
					unk_0xCE689A8E8C42ED78(&(Global_1669357.f_3), 0);
				}
			}
			if (func_429(iParam0))
			{
				func_419();
				unk_0xCE689A8E8C42ED78(&(Global_1669357.f_3), 1);
			}
			if (iParam5 && !func_161(unk_0x95B959F18401C09A()))
			{
				if (func_290(unk_0x95B959F18401C09A()) != 152)
				{
					func_397();
				}
			}
			if (func_345(2))
			{
				func_421(0);
				func_396(2);
			}
		}
	}
}

void func_396(int iParam0)
{
	unk_0xCE689A8E8C42ED78(&(Global_2528542.f_4889.f_41), iParam0);
}

void func_397()
{
	unk_0xAEA0BFBDA0CDA688(&(Global_2405071.f_24), &Global_2409313, 2);
	unk_0xAEA0BFBDA0CDA688(&(Global_2405071.f_26), &Global_2409315, 19);
	func_417();
	func_400(1, 1, 0);
	func_398();
}

void func_398()
{
	func_399(0, 0);
}

void func_399(int iParam0, int iParam1)
{
	Global_2405071.f_22 = iParam0;
	Global_2405071.f_23 = iParam1;
}

void func_400(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		unk_0xAEA0BFBDA0CDA688(&(Global_2405071.f_45), &Global_2409334, 318);
	}
	else
	{
		Global_2405071.f_45 = { Global_2409334 };
		Global_2405071.f_45.f_49 = { Global_2409334.f_49 };
		Global_2405071.f_45.f_52 = Global_2409334.f_52;
		Global_2405071.f_45.f_53 = Global_2409334.f_53;
	}
	if (bParam0)
	{
		func_416();
	}
	if (!bParam2)
	{
		func_403(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0);
	}
	func_402(0);
	func_401();
}

void func_401()
{
	struct<6> Var0;
	
	if (Global_2405071.f_485.f_1 == unk_0x8C40DC84EDF05997())
	{
		Global_2405071.f_485 = { Var0 };
	}
}

void func_402(bool bParam0)
{
	if (bParam0)
	{
		Global_2405071.f_703 = 0;
	}
	else
	{
		Global_2405071.f_703 = 1;
	}
}

void func_403(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	if (bParam0)
	{
		if (func_415())
		{
			func_414();
		}
		Global_2405071.f_704.f_517 = unk_0x8C40DC84EDF05997();
		Global_2405071.f_704.f_504 = iParam1;
		Global_2405071.f_704.f_505 = iParam2;
		Global_2405071.f_704.f_506 = iParam10;
		func_412();
		func_407(8, 0, 0, 0, 0);
		Global_2405071.f_704.f_507 = iParam11;
		Global_2405071.f_704.f_512 = iParam3;
		Global_2405071.f_704.f_513 = iParam4;
		Global_2405071.f_704.f_510 = iParam5;
		Global_2405071.f_704.f_511 = iParam6;
		Global_2405071.f_704.f_514 = iParam7;
		Global_2405071.f_704.f_515 = iParam8;
		Global_2405071.f_704.f_516 = iParam9;
		Global_2405071.f_704.f_508 = iParam12;
		Global_2405071.f_704.f_509 = iParam13;
		Global_2405071.f_1741 = 1;
	}
	else
	{
		func_404();
	}
}

void func_404()
{
	if (func_415() && !func_406())
	{
		func_414();
	}
	if (func_406())
	{
		func_405();
	}
	else
	{
		func_412();
		func_407(0, 0, 0, 0, 0);
		Global_2405071.f_1741 = 0;
		Global_2405071.f_1740 = 0;
	}
}

void func_405()
{
	unk_0xAEA0BFBDA0CDA688(&(Global_2405071.f_704), &(Global_2405071.f_1222), 518);
	Global_2405071.f_485 = { Global_2405071.f_491 };
	if (unk_0x8C40DC84EDF05997() == Global_2405071.f_704.f_517)
	{
		Global_2405071.f_1740 = 0;
	}
}

int func_406()
{
	if ((Global_2405071.f_1740 && !unk_0x8C40DC84EDF05997() == Global_2405071.f_1222.f_517) && unk_0x8ED4328770BEE4A1(Global_2405071.f_1222.f_517))
	{
		return 1;
	}
	return 0;
}

void func_407(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2437364.f_1893.f_690.f_16 != func_18())
	{
		if (unk_0x0E4018692D92041D(Global_2424047[Global_2437364.f_1893.f_690.f_16 /*416*/].f_402, 0) && func_408())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2412626 = 0;
	}
	Global_2405071.f_485 = iParam0;
	Global_2405071.f_485.f_1 = unk_0x8C40DC84EDF05997();
	Global_2405071.f_485.f_2 = iParam1;
	Global_2405071.f_485.f_3 = iParam2;
	Global_2405071.f_485.f_4 = iParam3;
	Global_2405071.f_485.f_5 = iParam4;
}

int func_408()
{
	if (((((func_290(unk_0x95B959F18401C09A()) == 229 || func_290(unk_0x95B959F18401C09A()) == 191) || func_411()) || func_410()) || func_409(unk_0x95B959F18401C09A())) || Global_2506344.f_173 == 1)
	{
		return 0;
	}
	return 1;
}

int func_409(int iParam0)
{
	int iVar0;
	
	if (!unk_0xB331FCEB94EB05C8())
	{
		return 0;
	}
	if (iParam0 == unk_0x95B959F18401C09A())
	{
		return Global_2506343;
	}
	else
	{
		iVar0 = unk_0x541D5C57194E73C4(unk_0x378BD4B3881338C2(iParam0));
		if (iVar0 == joaat("mp_m_freemode_01") || iVar0 == joaat("mp_f_freemode_01"))
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

var func_410()
{
	return Global_1574395;
}

int func_411()
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

void func_412()
{
	if (func_415() && !func_406())
	{
		func_414();
	}
	func_413();
	Global_2405071.f_704 = 0;
}

void func_413()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2405071.f_704.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_414()
{
	if (func_406())
	{
		if (Global_2405071.f_704.f_517 == Global_2405071.f_1222.f_517)
		{
			return;
		}
	}
	if (!unk_0x8C40DC84EDF05997() == Global_2405071.f_704.f_517)
	{
		unk_0xAEA0BFBDA0CDA688(&(Global_2405071.f_1222), &(Global_2405071.f_704), 518);
		Global_2405071.f_491 = { Global_2405071.f_485 };
		Global_2405071.f_1740 = 1;
	}
}

int func_415()
{
	if ((Global_2405071.f_1741 && !unk_0x8C40DC84EDF05997() == Global_2405071.f_704.f_517) && unk_0x8ED4328770BEE4A1(Global_2405071.f_704.f_517))
	{
		return 1;
	}
	return 0;
}

void func_416()
{
	unk_0xAEA0BFBDA0CDA688(&(Global_2405071.f_363), &Global_2409652, 121);
}

void func_417()
{
	func_418();
	Global_2405071.f_2250 = 0;
}

void func_418()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2405071.f_2251[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

void func_419()
{
	if (unk_0x8ED4328770BEE4A1(Global_2528542.f_4885))
	{
		if (!Global_2528542.f_4885 == unk_0x8C40DC84EDF05997() && Global_2528542.f_4884 < 1f)
		{
			return;
		}
	}
	Global_2528542.f_4885 = -1;
	Global_2528542.f_4884 = 1f;
}

void func_420(int iParam0)
{
	unk_0x8950ED5730F62EE8(&(Global_2528542.f_4889.f_41), iParam0);
}

void func_421(int iParam0)
{
	if (func_422() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391045)
	{
		return;
	}
	Global_2391045 = iParam0;
	Global_2391047 = 0;
	Global_2391048 = 0;
}

int func_422()
{
	if ((((Global_968393 != -1 && Global_968393 != 33) && Global_968393 != 35) && Global_968393 != 37) && Global_968393 != 21)
	{
		return 1;
	}
	return 0;
}

int func_423(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 159:
		case 148:
		case 157:
		case 166:
		case 179:
		case 189:
		case 193:
		case 198:
		case 205:
			return 1;
		
		default:
	}
	return 0;
}

void func_424(float fParam0)
{
	float fVar0;
	
	if (unk_0x36163153849DFDA1(unk_0xD178EF744F20B712()) == func_425())
	{
		return;
	}
	fVar0 = (Global_2528542.f_4884 - fParam0);
	if (unk_0x8ED4328770BEE4A1(Global_2528542.f_4885))
	{
		if (!Global_2528542.f_4885 == unk_0x8C40DC84EDF05997() && unk_0x7EECA16E87982278(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2528542.f_4884 = fParam0;
	Global_2528542.f_4885 = unk_0x8C40DC84EDF05997();
}

int func_425()
{
	switch (func_427())
	{
		case 0:
			return func_426();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_426()
{
	switch (Global_2460954)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_427()
{
	return Global_25765;
}

float func_428(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 157:
		case 159:
		case 151:
		case 148:
		case 164:
		case 152:
		case 153:
		case 154:
		case 155:
		case 160:
		case 162:
		case 166:
		case 173:
		case 169:
		case 167:
		case 168:
		case 170:
		case 178:
		case 179:
		case 189:
		case 180:
		case 182:
		case 183:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 199:
		case 201:
		case 185:
		case 197:
		case 186:
		case 198:
		case 195:
		case 205:
		case 207:
		case 208:
		case 209:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 243:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_429(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 164:
		case 151:
		case 170:
		case 169:
		case 201:
		case 191:
		case 198:
		case 180:
		case 200:
		case 208:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_430(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 148:
		case 164:
		case 152:
		case 153:
		case 160:
			return 1;
		
		case 168:
			if ((iParam1 != 2 && iParam1 != 10) && iParam1 != 7)
			{
				return 1;
			}
			break;
		
		case 170:
		case 166:
		case 173:
			return 1;
		
		case 179:
		case 183:
		case 189:
		case 191:
		case 192:
		case 193:
		case 194:
		case 186:
		case 199:
		case 185:
		case 201:
		case 198:
		case 195:
		case 180:
		case 207:
		case 208:
		case 209:
		case 210:
		case 214:
		case 217:
		case 218:
		case 215:
		case 216:
		case 219:
		case 220:
		case 221:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 227:
			return 1;
		
		case 190:
			if (((iParam1 != 6 && iParam1 != 9) && iParam1 != 7) && iParam1 != 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

float func_431(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 0f;
		
		case 144:
			return 0f;
		
		case 185:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_432(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
		case 166:
		case 173:
		case 183:
		case 185:
		case 197:
		case 186:
		case 201:
		case 191:
		case 198:
		case 207:
		case 208:
		case 209:
		case 200:
		case 195:
		case 180:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

void func_433(vector3 vParam0, int iParam1, int iParam2)
{
	Global_2405071.f_45.f_49 = { vParam0 };
	Global_2405071.f_45.f_52 = iParam1;
	Global_2405071.f_45.f_53 = iParam2;
}

int func_434(int iParam0)
{
	if (func_20(iParam0))
	{
		if (func_369(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_435(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = func_436(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_384();
	}
}

int func_436(int iParam0)
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_12413;
		
		case 142:
			return Global_262145.f_12401;
		
		case 157:
			return Global_262145.f_12368;
		
		case 159:
			return Global_262145.f_12351;
		
		case 162:
			return Global_262145.f_12462;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return -1;
}

bool func_437(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_438()
{
	bool bVar0;
	
	if (func_441())
	{
		bVar0 = true;
	}
	else if (func_440())
	{
		bVar0 = true;
	}
	else if (func_439(unk_0x95B959F18401C09A()) > 0)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (unk_0x4F94F07DAD382CDA(Local_112.f_12))
		{
			if (unk_0x5A4FB33F5B279A76(unk_0xE4B835FDC8B9B086(Local_112.f_12), unk_0x33CD235DF1E6A94E()))
			{
				if (unk_0x0E4018692D92041D(Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_1, 2))
				{
					unk_0xCE689A8E8C42ED78(&(Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_1), 2);
				}
				unk_0x861C6D8520E774EA(unk_0xE4B835FDC8B9B086(Local_112.f_12), true, 1);
				unk_0x05E692E6C0FD48E1(unk_0xE4B835FDC8B9B086(Local_112.f_12));
				unk_0x0CDD28A9DFCE2FCE(unk_0xE4B835FDC8B9B086(Local_112.f_12), true, 0);
				unk_0x7C38A7CBDE9727A6(unk_0xE4B835FDC8B9B086(Local_112.f_12), false);
			}
		}
	}
	return bVar0;
}

int func_439(int iParam0)
{
	return Global_1589819[iParam0 /*818*/].f_196;
}

bool func_440()
{
	return unk_0x0E4018692D92041D(Global_2448756, 20);
}

int func_441()
{
	if (unk_0x0E4018692D92041D(Global_2528542.f_384.f_5, 0))
	{
		return 1;
	}
	if (func_443() && Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_98 != 3)
	{
		return 1;
	}
	if (func_442() && Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_98 != 3)
	{
		return 1;
	}
	if (Global_2394768)
	{
		return 1;
	}
	if (Global_1574637.f_20)
	{
		return 1;
	}
	return 0;
}

bool func_442()
{
	return unk_0x0E4018692D92041D(Global_2448756, 5);
}

int func_443()
{
	if (((func_446() || func_440()) || func_445()) || func_444())
	{
		return 1;
	}
	return 0;
}

bool func_444()
{
	return unk_0x0E4018692D92041D(Global_2448756, 1);
}

bool func_445()
{
	return unk_0x0E4018692D92041D(Global_2448756, 2);
}

bool func_446()
{
	return Global_2448756.f_586;
}

void func_447()
{
	if (!unk_0x0E4018692D92041D(iLocal_114, 6))
	{
		if (func_1116())
		{
			if (func_367(unk_0x95B959F18401C09A()) >= 1)
			{
				if (func_449(82, func_537(), 0, 0))
				{
					unk_0x8950ED5730F62EE8(&iLocal_114, 6);
				}
			}
		}
		else
		{
			unk_0x8950ED5730F62EE8(&iLocal_114, 6);
		}
	}
	if (!unk_0x0E4018692D92041D(iLocal_114, 15))
	{
		if (func_1100() == 0 || func_1100() == 3)
		{
			if (func_1116())
			{
				if (func_367(unk_0x95B959F18401C09A()) >= 1)
				{
					if (Local_112.f_5 != -1 || Local_112.f_7 != -1)
					{
						if (func_449(82, func_448(), 0, 0))
						{
							unk_0x8950ED5730F62EE8(&iLocal_114, 15);
						}
					}
				}
			}
			else
			{
				unk_0x8950ED5730F62EE8(&iLocal_114, 15);
			}
		}
	}
}

char* func_448()
{
	switch (func_1100())
	{
		case 0:
			return "GB_ASLT_MALT2";
		
		case 3:
			return "GB_ASLT_MMER2";
		
		default:
	}
	return "";
}

bool func_449(int iParam0, char* sParam1, bool bParam2, int iParam3)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_450(iParam0, sParam1, sVar0, bVar1, iVar2, sVar0, sVar0, bParam2, iParam3);
}

int func_450(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, char* sParam6, bool bParam7, int iParam8)
{
	var uVar0;
	int iVar1;
	
	uVar0 = 16;
	iVar1 = 2;
	if (bParam7)
	{
		iVar1 = 5;
	}
	return func_451(&uVar0, iParam0, func_536(), sParam1, iVar1, 3, iParam8, sParam2, bParam3, iParam4, sParam5, sParam6, -1);
}

int func_451(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x786AF4A44E1B5B4B(sParam2))
	{
		return 0;
	}
	if (unk_0x85731B98C6C759D5(sParam2) > 7)
	{
		return 0;
	}
	if (unk_0x786AF4A44E1B5B4B(sParam3))
	{
		return 0;
	}
	if (unk_0x85731B98C6C759D5(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = unk_0x36163153849DFDA1(unk_0xD178EF744F20B712());
	iVar1 = func_535(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0x786AF4A44E1B5B4B(sParam7))
	{
		iVar2 = unk_0x36163153849DFDA1(sParam7);
	}
	if (func_534(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_528(iParam6))
	{
		return 0;
	}
	if (func_525(iVar0, iVar1, iVar2))
	{
		if (func_524())
		{
			return 0;
		}
		func_523();
		return func_458(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, iParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_457(iParam4))
	{
		return 0;
	}
	func_452(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, iParam6);
	return 0;
}

void func_452(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	Global_1365424.f_40.f_1 = iParam0;
	Global_1365424.f_40.f_2 = iParam1;
	Global_1365424.f_40.f_3 = iParam2;
	StringCopy(&(Global_1365424.f_40.f_4), sParam3, 16);
	Global_1365424.f_40.f_8 = iParam4;
	Global_1365424.f_40.f_9 = iParam5;
	Global_1365424.f_40.f_14 = iParam6;
	func_453(iParam4);
	func_523();
	Global_1365424.f_40.f_13 = unk_0x6985FC3098CCA0EB(unk_0x78DCC5D0CB43DEBA(), 7000);
}

void func_453(int iParam0)
{
	if (func_456(iParam0))
	{
		func_455();
		return;
	}
	func_454();
}

void func_454()
{
	Global_1365424.f_40.f_10 = 0;
}

void func_455()
{
	Global_1365424.f_40.f_10 = 1;
}

int func_456(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return 1;
		
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return 0;
		
		default:
	}
	return 0;
}

bool func_457(int iParam0)
{
	return iParam0 > Global_1365424.f_40.f_8;
}

int func_458(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_522();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_519(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_516(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_519(uParam0, sParam3, sParam4);
		}
		return func_500(uParam0, iParam1, sParam3, sParam4, iParam7);
	}
	if (iParam5 == 5)
	{
		return func_499(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_489(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_488(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_459(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_459(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_487();
	bVar0 = true;
	if (func_461(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_460(120000);
		return 1;
	}
	return 0;
}

void func_460(int iParam0)
{
	Global_1365424.f_40.f_11 = unk_0x6985FC3098CCA0EB(unk_0x78DCC5D0CB43DEBA(), iParam0);
	Global_1365424.f_40.f_12 = 1;
}

int func_461(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_18();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0xEEF8394DB3D3DFA1(iVar0);
		iVar1 = func_272(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0xB09BA22C73228B8C(unk_0x78DCC5D0CB43DEBA(), Global_1365424.f_40.f_13))
			{
				return 0;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_486(sParam5, bParam6, &iVar3);
	uVar5 = func_484(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0x786AF4A44E1B5B4B(sParam8))
	{
		iVar6++;
		if (!unk_0x786AF4A44E1B5B4B(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0xCE3CFF625BEBAA04(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (unk_0x0E4018692D92041D(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0x0E4018692D92041D(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0x786AF4A44E1B5B4B(sVar2))
	{
		bVar12 = func_483(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_465(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0x0E4018692D92041D(iParam4, 0))
	{
		func_464();
	}
	func_487();
	func_463();
	func_462();
	return 1;
}

void func_462()
{
	Global_1365424.f_57 = 0;
	Global_1365424.f_57.f_1 = 0;
}

void func_463()
{
	Global_1365424.f_40 = 3;
}

void func_464()
{
	unk_0x8950ED5730F62EE8(&Global_2423, 8);
}

int func_465(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_466(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3130 = iParam6;
			unk_0x8950ED5730F62EE8(&Global_4269308, 0);
		}
		return 1;
	}
	return 0;
}

int func_466(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0xCE3CFF625BEBAA04(sParam14, sParam15))
	{
	}
	func_477();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14553 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14553 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14553 == 1)
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
		if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
		{
			if (unk_0x60F5B36347629584(unk_0x33CD235DF1E6A94E()))
			{
				return 0;
			}
		}
		if (Global_4269293 == 1)
		{
			return 0;
		}
		if (unk_0x1BCDA92AD0A7835B(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (unk_0x1BCDA92AD0A7835B(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_476() == 0)
	{
		func_474();
		return 0;
	}
	func_473(Global_4269292);
	StringCopy(&(Global_4268043[Global_4269292 /*104*/]), sParam1, 64);
	Global_4268043[Global_4269292 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_4268043[Global_4269292 /*104*/].f_24 = iParam2;
	}
	Global_4268043[Global_4269292 /*104*/].f_25 = iParam7;
	Global_4268043[Global_4269292 /*104*/].f_26 = uParam8;
	Global_4268043[Global_4269292 /*104*/].f_29 = uParam9;
	Global_4268043[Global_4269292 /*104*/].f_30 = uParam12;
	Global_4268043[Global_4269292 /*104*/].f_31 = uParam11;
	Global_4268043[Global_4269292 /*104*/].f_28 = 0;
	Global_4268043[Global_4269292 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_4268043[Global_4269292 /*104*/].f_33), sParam4, 64);
	Global_4268043[Global_4269292 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_4268043[Global_4269292 /*104*/].f_50), sParam5, 64);
	Global_4268043[Global_4269292 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_4268043[Global_4269292 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_4268043[Global_4269292 /*104*/].f_83), sParam15, 64);
	func_477();
	switch (iParam16)
	{
		case 3:
			Global_4268043[Global_4269292 /*104*/].f_99[Global_14553] = 1;
			break;
		
		case 0:
			Global_4268043[Global_4269292 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_4268043[Global_4269292 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_4268043[Global_4269292 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_14553)
		{
			case 0:
				func_472(0);
				break;
			
			case 1:
				func_472(1);
				break;
			
			case 2:
				func_472(2);
				break;
			
			case 3:
				func_472(3);
				break;
			
			default:
				break;
			}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_4269293 = 1;
				break;
			
			case 0:
				Global_4269293 = 1;
				break;
			
			case 2:
				Global_4269293 = 1;
				break;
			
			case 1:
				Global_4269293 = 1;
				break;
			}
	}
	Global_16935[Global_4269292] = 0;
	if (bParam10)
	{
		func_477();
		if (Global_14496)
		{
			StringCopy(&Global_14542, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14553)
			{
				case 0:
					StringCopy(&Global_14542, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14542, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14542, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14542, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3228[Global_14553 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_471())
			{
				unk_0x0F8EAEEC97DDBCB3(-1, "Text_Arrive_Tone", &Global_14542, true);
			}
		}
	}
	if (!Global_14726)
	{
		if (Global_14553.f_1 == 6)
		{
			func_470(Global_14534, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_467(1);
			func_470(Global_14534, "DISPLAY_VIEW", 1f, to_float(Global_14533), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_467(int iParam0)
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
	
	Global_16934 = 0;
	Global_3028 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2992[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_469(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2430[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2430[iVar1 /*15*/].f_4)
					{
						if (Global_2992[iVar0] == 0)
						{
							Global_2956[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0x0E4018692D92041D(Global_2424, 3))
								{
									iVar2 = 42;
									Global_14729 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14729 = 0;
								}
								unk_0xBB698266C5FDF0A7(Global_14534, "SET_DATA_SLOT");
								unk_0x4D9DA18AB3C2A466(1);
								unk_0x4D9DA18AB3C2A466(iVar0);
								unk_0x4D9DA18AB3C2A466(Global_2430[iVar1 /*15*/].f_10);
								unk_0x4D9DA18AB3C2A466(0);
								func_237(&(Global_2430[iVar1 /*15*/]));
								unk_0x4D9DA18AB3C2A466(iVar2);
								unk_0x818901B332D5541D();
							}
							if (Global_2458608)
							{
								if (iVar1 == 14)
								{
									func_468(Global_14534, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2430[iVar1 /*15*/].f_10), to_float(Global_16929), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2992[iVar0] = 1;
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
				if (iParam0 == Global_2430[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2430[iVar1 /*15*/].f_4)
					{
						if (Global_2992[iVar0] == 0)
						{
							Global_2956[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_106565.f_14135[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_106565.f_14135[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_106565.f_14135[iVar3 /*104*/].f_99[Global_14553] == 1)
											{
												Global_16934++;
											}
										}
									}
									iVar3++;
								}
								func_468(Global_14534, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2430[iVar1 /*15*/].f_10), to_float(Global_16934), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_71590)
								{
									iVar4 = 0;
									iVar4 = Global_4268042;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4268043[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4268043[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4268043[iVar5 /*104*/].f_99[Global_14553] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_468(Global_14534, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2430[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14553)
									{
										case 0:
											iVar6 = Global_37589;
											break;
										
										case 1:
											iVar6 = Global_37590;
											break;
										
										case 2:
											iVar6 = Global_37591;
											break;
										
										default:
											break;
									}
									func_468(Global_14534, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2430[iVar1 /*15*/].f_10), to_float(iVar6), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_468(Global_14534, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2430[iVar1 /*15*/].f_10), to_float(Global_16929), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xBB698266C5FDF0A7(Global_14534, "SET_DATA_SLOT");
								unk_0x4D9DA18AB3C2A466(1);
								unk_0x4D9DA18AB3C2A466(iVar0);
								unk_0x4D9DA18AB3C2A466(Global_2430[iVar1 /*15*/].f_10);
								unk_0x4D9DA18AB3C2A466(0);
								func_237(&(Global_2430[iVar1 /*15*/]));
								unk_0x4D9DA18AB3C2A466(Global_2429);
								unk_0x818901B332D5541D();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x0E4018692D92041D(Global_2424, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xBB698266C5FDF0A7(Global_14534, "SET_DATA_SLOT");
								unk_0x4D9DA18AB3C2A466(1);
								unk_0x4D9DA18AB3C2A466(iVar0);
								unk_0x4D9DA18AB3C2A466(Global_2430[iVar1 /*15*/].f_10);
								unk_0x4D9DA18AB3C2A466(0);
								func_237(&(Global_2430[iVar1 /*15*/]));
								unk_0x4D9DA18AB3C2A466(iVar7);
								unk_0x818901B332D5541D();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x0E4018692D92041D(Global_2424, 3))
								{
									iVar8 = 42;
									Global_14729 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14729 = 0;
								}
								unk_0xBB698266C5FDF0A7(Global_14534, "SET_DATA_SLOT");
								unk_0x4D9DA18AB3C2A466(1);
								unk_0x4D9DA18AB3C2A466(iVar0);
								unk_0x4D9DA18AB3C2A466(Global_2430[iVar1 /*15*/].f_10);
								unk_0x4D9DA18AB3C2A466(0);
								func_237(&(Global_2430[iVar1 /*15*/]));
								unk_0x4D9DA18AB3C2A466(iVar8);
								unk_0x818901B332D5541D();
							}
							else if (iVar1 == 8)
							{
								unk_0xBB698266C5FDF0A7(Global_14534, "SET_DATA_SLOT");
								unk_0x4D9DA18AB3C2A466(1);
								unk_0x4D9DA18AB3C2A466(iVar0);
								unk_0x4D9DA18AB3C2A466(Global_2430[iVar1 /*15*/].f_10);
								unk_0x4D9DA18AB3C2A466(0);
								func_237(&(Global_2430[iVar1 /*15*/]));
								unk_0x4D9DA18AB3C2A466(42);
								unk_0x818901B332D5541D();
							}
							else if ((iVar1 == 23 && unk_0xCE3CFF625BEBAA04(&(Global_2430[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0x0E4018692D92041D(Global_2424, 6))
							{
								unk_0xBB698266C5FDF0A7(Global_14534, "SET_DATA_SLOT");
								unk_0x4D9DA18AB3C2A466(1);
								unk_0x4D9DA18AB3C2A466(iVar0);
								unk_0x4D9DA18AB3C2A466(Global_2430[iVar1 /*15*/].f_10);
								unk_0x4D9DA18AB3C2A466(0);
								func_237(&(Global_2430[iVar1 /*15*/]));
								unk_0x4D9DA18AB3C2A466(42);
								unk_0x818901B332D5541D();
							}
							else if (Global_2430[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1625180.f_1;
								func_468(Global_14534, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2430[iVar1 /*15*/].f_10), to_float(iVar9), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_468(Global_14534, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2430[iVar1 /*15*/].f_10), to_float(0), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2992[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_468(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0xBB698266C5FDF0A7(iParam0, sParam1);
	unk_0x4D9DA18AB3C2A466(round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4D9DA18AB3C2A466(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4D9DA18AB3C2A466(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4D9DA18AB3C2A466(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4D9DA18AB3C2A466(round(fParam6));
	}
	if (!unk_0x786AF4A44E1B5B4B(sParam7))
	{
		func_237(sParam7);
	}
	if (!unk_0x786AF4A44E1B5B4B(sParam8))
	{
		func_237(sParam8);
	}
	if (!unk_0x786AF4A44E1B5B4B(sParam9))
	{
		func_237(sParam9);
	}
	if (!unk_0x786AF4A44E1B5B4B(sParam10))
	{
		func_237(sParam10);
	}
	if (!unk_0x786AF4A44E1B5B4B(sParam11))
	{
		func_237(sParam11);
	}
	unk_0x818901B332D5541D();
}

bool func_469(int iParam0)
{
	return Global_36425 == iParam0;
}

void func_470(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xBB698266C5FDF0A7(iParam0, sParam1);
	unk_0x4D9DA18AB3C2A466(round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4D9DA18AB3C2A466(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4D9DA18AB3C2A466(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4D9DA18AB3C2A466(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4D9DA18AB3C2A466(round(fParam6));
	}
	unk_0x818901B332D5541D();
}

bool func_471()
{
	return Global_1312867;
}

void func_472(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_106565.f_14045[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_473(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = unk_0xE6A7CE90720B9037();
	iVar1 = unk_0x7EA67BD818402745();
	iVar2 = unk_0x13348E86D5B8A052();
	iVar3 = unk_0x020A28FAE1C09250();
	uVar4 = unk_0x2C02CAA9C4127339() + 1;
	iVar5 = unk_0xED3F08F762AAA55A();
	Global_4268043[iParam0 /*104*/].f_18 = iVar0;
	Global_4268043[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_4268043[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_4268043[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_4268043[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_4268043[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_474()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_4269292 = 11;
	Global_4268043[Global_4269292 /*104*/].f_18 = -1;
	Global_4268043[Global_4269292 /*104*/].f_18.f_1 = 0;
	Global_4268043[Global_4269292 /*104*/].f_18.f_2 = 0;
	Global_4268043[Global_4269292 /*104*/].f_18.f_3 = 0;
	Global_4268043[Global_4269292 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_475(Global_4268043[iVar2 /*104*/].f_18, Global_4268043[Global_4269292 /*104*/].f_18))
		{
			Global_4269292 = iVar2;
		}
		iVar2++;
	}
	Global_4268043[Global_4269292 /*104*/].f_24 = 1;
}

int func_475(struct<6> Param0, struct<6> Param1)
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

int func_476()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_4268043[iVar2 /*104*/].f_24 == 0)
		{
			Global_4269292 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4269292 = 11;
	Global_4268043[Global_4269292 /*104*/].f_18 = -1;
	Global_4268043[Global_4269292 /*104*/].f_18.f_1 = 0;
	Global_4268043[Global_4269292 /*104*/].f_18.f_2 = 0;
	Global_4268043[Global_4269292 /*104*/].f_18.f_3 = 0;
	Global_4268043[Global_4269292 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_4268043[iVar2 /*104*/].f_24 == 0 || Global_4268043[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_475(Global_4268043[iVar2 /*104*/].f_18, Global_4268043[Global_4269292 /*104*/].f_18))
			{
				Global_4269292 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4269292 == 11)
	{
		return 0;
	}
	Global_4268043[Global_4269292 /*104*/].f_99[0] = 0;
	Global_4268043[Global_4269292 /*104*/].f_99[1] = 0;
	Global_4268043[Global_4269292 /*104*/].f_99[2] = 0;
	return 1;
}

void func_477()
{
	if (func_469(14))
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
		Global_14553 = func_478();
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

var func_478()
{
	func_479();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_479()
{
	int iVar0;
	
	if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
	{
		if (func_482(Global_106565.f_2357.f_539.f_4321) != unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()))
		{
			iVar0 = func_481(unk_0x33CD235DF1E6A94E());
			if (func_480(iVar0) && (!func_469(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_480(Global_106565.f_2357.f_539.f_4321))
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

bool func_480(int iParam0)
{
	return iParam0 < 3;
}

int func_481(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		iVar1 = unk_0x541D5C57194E73C4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_482(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_482(int iParam0)
{
	if (func_480(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_483(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	iVar0 = 3;
	if (func_466(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3130 = iParam10;
			unk_0x8950ED5730F62EE8(&Global_4269308, 0);
		}
		return 1;
	}
	return 0;
}

int func_484(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_485(2, iParam1);
	return iParam0;
}

void func_485(int iParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	
	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	switch (iParam0)
	{
		case 1:
			bVar0 = true;
			break;
		
		case 2:
			bVar1 = true;
			break;
		
		default:
			return;
	}
	if (bVar0)
	{
		switch (*uParam1)
		{
			case 1:
			case 3:
				break;
			
			case 0:
				*uParam1 = 1;
				break;
			
			case 2:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*uParam1)
		{
			case 2:
			case 3:
				break;
			
			case 0:
				*uParam1 = 2;
				break;
			
			case 1:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
}

char* func_486(char* sParam0, bool bParam1, int iParam2)
{
	if (unk_0x786AF4A44E1B5B4B(sParam0))
	{
		return sLocal_18;
	}
	if (unk_0xCE3CFF625BEBAA04(sParam0, sLocal_18))
	{
		return sLocal_18;
	}
	func_485(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0x434854E9CAE13C4A(sParam0);
}

void func_487()
{
	Global_1365424.f_40.f_9 = 4;
}

int func_488(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_487();
	bVar0 = false;
	return func_461(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_489(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_490(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_490(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_18();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0xEEF8394DB3D3DFA1(iVar0);
		iVar1 = func_272(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0xB09BA22C73228B8C(unk_0x78DCC5D0CB43DEBA(), Global_1365424.f_40.f_13))
			{
				return 0;
			}
		}
		Global_16927 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_486(sParam5, bParam6, &iVar3);
	uVar5 = func_484(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0x786AF4A44E1B5B4B(sParam8))
	{
		iVar6++;
		if (!unk_0x786AF4A44E1B5B4B(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0xCE3CFF625BEBAA04(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (unk_0x0E4018692D92041D(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0x0E4018692D92041D(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0x786AF4A44E1B5B4B(sVar2))
	{
		bVar12 = func_498(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_492(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0x0E4018692D92041D(iParam4, 0))
	{
		func_464();
	}
	func_491();
	func_463();
	func_462();
	return 1;
}

void func_491()
{
	Global_1365424.f_40.f_9 = 3;
}

int func_492(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0xCE689A8E8C42ED78(&Global_2423, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_493(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3130 = iParam6;
			Global_3033[3 /*6*/] = { Global_106565.f_28044[iParam0 /*29*/].f_3 };
			Global_3110 = iParam0;
			unk_0x8950ED5730F62EE8(&Global_2423, 1);
			unk_0x8950ED5730F62EE8(&Global_2423, 7);
		}
		return 1;
	}
	return 0;
}

int func_493(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0xCE3CFF625BEBAA04(sParam14, sParam15))
	{
	}
	func_477();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14553 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14553 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14553 == 1)
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
		if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
		{
			if (unk_0x60F5B36347629584(unk_0x33CD235DF1E6A94E()))
			{
				return 0;
			}
		}
		if (Global_106565.f_14045[Global_14553 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x1BCDA92AD0A7835B(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x1BCDA92AD0A7835B(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_497() == 0)
	{
		func_495();
		return 0;
	}
	func_494(Global_16933);
	StringCopy(&(Global_106565.f_14135[Global_16933 /*104*/]), sParam1, 64);
	Global_106565.f_14135[Global_16933 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_106565.f_14135[Global_16933 /*104*/].f_24 = iParam2;
	}
	Global_106565.f_14135[Global_16933 /*104*/].f_25 = iParam7;
	Global_106565.f_14135[Global_16933 /*104*/].f_26 = uParam8;
	Global_106565.f_14135[Global_16933 /*104*/].f_29 = uParam9;
	Global_106565.f_14135[Global_16933 /*104*/].f_30 = uParam12;
	Global_106565.f_14135[Global_16933 /*104*/].f_31 = uParam11;
	Global_106565.f_14135[Global_16933 /*104*/].f_28 = 0;
	Global_106565.f_14135[Global_16933 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_106565.f_14135[Global_16933 /*104*/].f_33), sParam4, 64);
	Global_106565.f_14135[Global_16933 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_106565.f_14135[Global_16933 /*104*/].f_50), sParam5, 64);
	Global_106565.f_14135[Global_16933 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_106565.f_14135[Global_16933 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_106565.f_14135[Global_16933 /*104*/].f_83), sParam15, 64);
	if (unk_0x0E4018692D92041D(Global_2423, 10))
	{
		Global_106565.f_14135[Global_16933 /*104*/].f_99[0] = 1;
		Global_106565.f_14135[Global_16933 /*104*/].f_99[1] = 1;
		Global_106565.f_14135[Global_16933 /*104*/].f_99[2] = 1;
		Global_3129 = 4;
		func_472(0);
		func_472(2);
		func_472(1);
	}
	else
	{
		func_477();
		switch (iParam16)
		{
			case 3:
				Global_106565.f_14135[Global_16933 /*104*/].f_99[Global_14553] = 1;
				break;
			
			case 0:
				Global_106565.f_14135[Global_16933 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_106565.f_14135[Global_16933 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_106565.f_14135[Global_16933 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14553)
			{
				case 0:
					func_472(0);
					Global_3129 = 0;
					break;
				
				case 1:
					func_472(1);
					Global_3129 = 1;
					break;
				
				case 2:
					func_472(2);
					Global_3129 = 2;
					break;
				
				case 3:
					func_472(3);
					Global_3129 = 3;
					break;
				
				default:
					Global_3129 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0x0E4018692D92041D(Global_2423, 10))
		{
			Global_106565.f_14045[0 /*20*/].f_17 = 1;
			Global_106565.f_14045[1 /*20*/].f_17 = 1;
			Global_106565.f_14045[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_106565.f_14045[Global_14553 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_106565.f_14045[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_106565.f_14045[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_106565.f_14045[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16935[Global_16933] = 0;
	if (bParam10)
	{
		func_477();
		if (Global_14496)
		{
			StringCopy(&Global_14542, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14553)
			{
				case 0:
					StringCopy(&Global_14542, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14542, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14542, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14542, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3228[Global_14553 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_471())
			{
				unk_0x0F8EAEEC97DDBCB3(-1, "Text_Arrive_Tone", &Global_14542, true);
			}
		}
	}
	if (!Global_14726)
	{
		if (Global_14553.f_1 == 6)
		{
			func_470(Global_14534, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_467(1);
			func_470(Global_14534, "DISPLAY_VIEW", 1f, to_float(Global_14533), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_494(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = unk_0xE6A7CE90720B9037();
	iVar1 = unk_0x7EA67BD818402745();
	iVar2 = unk_0x13348E86D5B8A052();
	iVar3 = unk_0x020A28FAE1C09250();
	uVar4 = unk_0x2C02CAA9C4127339() + 1;
	iVar5 = unk_0xED3F08F762AAA55A();
	Global_106565.f_14135[iParam0 /*104*/].f_18 = iVar0;
	Global_106565.f_14135[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_106565.f_14135[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_106565.f_14135[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_106565.f_14135[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_106565.f_14135[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_495()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_71590)
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
	Global_16933 = 34;
	Global_106565.f_14135[Global_16933 /*104*/].f_18 = -1;
	Global_106565.f_14135[Global_16933 /*104*/].f_18.f_1 = 0;
	Global_106565.f_14135[Global_16933 /*104*/].f_18.f_2 = 0;
	Global_106565.f_14135[Global_16933 /*104*/].f_18.f_3 = 0;
	Global_106565.f_14135[Global_16933 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_496(Global_106565.f_14135[iVar2 /*104*/].f_18, Global_106565.f_14135[Global_16933 /*104*/].f_18))
		{
			Global_16933 = iVar2;
		}
		iVar2++;
	}
	Global_106565.f_14135[Global_16933 /*104*/].f_24 = 1;
}

int func_496(struct<6> Param0, struct<6> Param1)
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

int func_497()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_71590)
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
		if (Global_106565.f_14135[iVar2 /*104*/].f_24 == 0)
		{
			Global_16933 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16933 = 34;
	Global_106565.f_14135[Global_16933 /*104*/].f_18 = -1;
	Global_106565.f_14135[Global_16933 /*104*/].f_18.f_1 = 0;
	Global_106565.f_14135[Global_16933 /*104*/].f_18.f_2 = 0;
	Global_106565.f_14135[Global_16933 /*104*/].f_18.f_3 = 0;
	Global_106565.f_14135[Global_16933 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_106565.f_14135[iVar2 /*104*/].f_24 == 0 || Global_106565.f_14135[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_496(Global_106565.f_14135[iVar2 /*104*/].f_18, Global_106565.f_14135[Global_16933 /*104*/].f_18))
			{
				Global_16933 = iVar2;
			}
		}
		if (Global_106565.f_14135[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_16933 == 34)
	{
		return 0;
	}
	Global_106565.f_14135[Global_16933 /*104*/].f_99[0] = 0;
	Global_106565.f_14135[Global_16933 /*104*/].f_99[1] = 0;
	Global_106565.f_14135[Global_16933 /*104*/].f_99[2] = 0;
	return 1;
}

int func_498(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	unk_0xCE689A8E8C42ED78(&Global_2423, 10);
	iVar0 = 3;
	if (func_493(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3130 = iParam10;
			Global_3033[3 /*6*/] = { Global_106565.f_28044[iParam0 /*29*/].f_3 };
			Global_3110 = iParam0;
			StringCopy(&Global_3111, sParam5, 64);
			unk_0x8950ED5730F62EE8(&Global_2423, 1);
			unk_0x8950ED5730F62EE8(&Global_2423, 7);
		}
		return 1;
	}
	return 0;
}

int func_499(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
	}
	if (unk_0xC90E2CD6BFE5CC33(unk_0x33CD235DF1E6A94E()))
	{
		return 0;
	}
	func_491();
	bVar0 = true;
	if (func_490(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_460(120000);
		return 1;
	}
	return 0;
}

int func_500(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		if (unk_0xC90E2CD6BFE5CC33(unk_0x33CD235DF1E6A94E()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (unk_0x0E4018692D92041D(iParam4, 7))
	{
		iVar1 = 9;
	}
	if (unk_0x0E4018692D92041D(iParam4, 4))
	{
		bVar0 = func_515(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_506(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (unk_0x0E4018692D92041D(iParam4, 3))
		{
			func_505(1);
		}
		if (unk_0x0E4018692D92041D(iParam4, 5))
		{
			func_504(1);
		}
		func_503();
		func_463();
		func_502();
		func_501();
		return 1;
	}
	return 0;
}

void func_501()
{
	Global_2537642 = 0;
}

void func_502()
{
	Global_1365424.f_57 = 1;
	Global_1365424.f_57.f_1 = 0;
}

void func_503()
{
	Global_1365424.f_40.f_9 = 1;
}

void func_504(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x8950ED5730F62EE8(&Global_2425, 0);
	}
	else
	{
		unk_0xCE689A8E8C42ED78(&Global_2425, 0);
	}
}

void func_505(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x8950ED5730F62EE8(&Global_2423, 20);
	}
	else
	{
		unk_0xCE689A8E8C42ED78(&Global_2423, 20);
	}
}

int func_506(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_514(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
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
	Global_2621441 = 0;
	return func_507(sParam3, iParam4, bParam7);
}

int func_507(char* sParam0, int iParam1, bool bParam2)
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
					func_513();
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
		if (func_351(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_512();
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
				func_477();
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
				if (func_511())
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
			if (func_510())
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
			func_509();
			Global_15876 = bParam2;
		}
		Global_15868 = iParam1;
		StringCopy(&Global_15485, sParam0, 24);
		Global_14732 = 0;
		func_508();
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
		func_513();
	}
	return 0;
}

void func_508()
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

void func_509()
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

int func_510()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_511()
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

void func_512()
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

void func_513()
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

void func_514(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_515(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_514(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15914 = 1;
	Global_15873 = 1;
	Global_15880 = 0;
	Global_15875 = 0;
	Global_16857 = 0;
	Global_16859 = 0;
	Global_16863 = 0;
	Global_15871 = 0;
	Global_15918 = 0;
	Global_15920 = 0;
	Global_2621441 = 0;
	return func_507(sParam3, iParam4, bParam7);
}

int func_516(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
	}
	if (unk_0xC90E2CD6BFE5CC33(unk_0x33CD235DF1E6A94E()))
	{
		return 0;
	}
	if (func_518(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_517();
		func_503();
		func_463();
		func_502();
		func_501();
		return 1;
	}
	return 0;
}

void func_517()
{
	Global_16884 = 0;
}

bool func_518(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_514(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_15914 = 0;
	Global_15873 = 1;
	Global_15880 = 0;
	Global_15875 = 1;
	Global_16857 = 0;
	Global_16859 = 0;
	Global_16863 = 0;
	Global_15871 = 0;
	Global_15918 = 1;
	Global_15920 = 0;
	StringCopy(&Global_16014, sParam5, 24);
	Global_2621441 = 0;
	return func_507(sParam3, iParam4, bParam8);
}

int func_519(var uParam0, char* sParam1, char* sParam2)
{
	if (func_521(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_520();
		func_463();
		func_502();
		return 1;
	}
	return 0;
}

void func_520()
{
	Global_1365424.f_40.f_9 = 2;
}

bool func_521(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_514(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_507(sParam2, iParam3, 0);
}

void func_522()
{
	Global_1365424.f_55 = Global_1365424.f_40.f_1;
	Global_1365424.f_55.f_1 = Global_1365424.f_40.f_10;
}

void func_523()
{
	Global_1365424.f_40 = 1;
}

bool func_524()
{
	return Global_1365424.f_40 == 1;
}

int func_525(int iParam0, int iParam1, int iParam2)
{
	if (!func_526(iParam0))
	{
		return 0;
	}
	if (Global_1365424.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1365424.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_526(int iParam0)
{
	if (!func_527())
	{
		return 0;
	}
	if (!Global_1365424.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_527()
{
	if (Global_1365424.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_528(int iParam0)
{
	if (func_533())
	{
		return 0;
	}
	if (func_532())
	{
		return 0;
	}
	if (func_531(0))
	{
		return 0;
	}
	if (Global_1312467.f_18 != 0)
	{
		return 0;
	}
	if (Global_1657075 || func_530())
	{
		return 0;
	}
	if (!unk_0x0E4018692D92041D(iParam0, 6))
	{
		if (func_529())
		{
			return 0;
		}
	}
	return 1;
}

bool func_529()
{
	return unk_0xB09BA22C73228B8C(unk_0x78DCC5D0CB43DEBA(), Global_1382380);
}

int func_530()
{
	if (Global_4254407.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

int func_531(int iParam0)
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

bool func_532()
{
	return Global_1365424.f_40 == 3;
}

bool func_533()
{
	return func_510();
}

int func_534(int iParam0, int iParam1, int iParam2)
{
	if (!func_532())
	{
		return 0;
	}
	return func_525(iParam0, iParam1, iParam2);
}

int func_535(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0x36163153849DFDA1(&cVar0);
}

char* func_536()
{
	return "TXTMSG";
}

char* func_537()
{
	switch (func_1100())
	{
		case 0:
			return "GB_ASLT_MALT";
		
		case 1:
			return "GB_ASLT_MZAN";
		
		case 2:
			return "GB_ASLT_MAIR";
		
		case 3:
			return "GB_ASLT_MMER";
		
		default:
	}
	return "";
}

void func_538()
{
	vector3 vVar0;
	
	if (func_1100() == 0)
	{
		vVar0 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false) };
		if (!unk_0x0E4018692D92041D(iLocal_115, 7))
		{
			if (unk_0x16E00F066AFFEA0D(vVar0, func_539(), true) < 200f)
			{
				if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) > 0)
				{
					unk_0x8950ED5730F62EE8(&iLocal_115, 7);
				}
			}
		}
		else if (unk_0x16E00F066AFFEA0D(vVar0, func_539(), true) < 121f)
		{
			unk_0x2E6EC0FAB080C550(0f, 0f);
		}
	}
}

Vector3 func_539()
{
	vector3 vVar0;
	
	switch (func_1100())
	{
		case 0:
			vVar0 = { -1166.252f, 4926.183f, 222.0286f };
			break;
		
		case 1:
			vVar0 = { -2115.022f, 3295.797f, 31.8103f };
			break;
		
		case 2:
			vVar0 = { -1289.853f, -3388.459f, 12.9452f };
			break;
		
		case 3:
			vVar0 = { 542.5379f, -3196.361f, 5.0693f };
			break;
	}
	return vVar0;
}

void func_540()
{
	int iVar0;
	
	if (!func_1116() && !func_381())
	{
		return;
	}
	if (!func_265(unk_0x95B959F18401C09A(), 20))
	{
		return;
	}
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		if (unk_0x0E4018692D92041D(iLocal_114, 18))
		{
			if (unk_0xEAF6E82C7BDE5A4C(unk_0x33CD235DF1E6A94E(), iLocal_135, 0))
			{
				unk_0x274C6068B660FFB4(unk_0x33CD235DF1E6A94E(), iLocal_135, false);
				unk_0xCE689A8E8C42ED78(&iLocal_114, 18);
			}
			else
			{
				unk_0xCE689A8E8C42ED78(&iLocal_114, 18);
			}
		}
		else if (unk_0x96C4B46F194803A7(unk_0x33CD235DF1E6A94E(), &iVar0, 1))
		{
			if (iLocal_135 != iVar0)
			{
				iLocal_135 = iVar0;
			}
		}
	}
	else if (!unk_0x0E4018692D92041D(iLocal_114, 18))
	{
		unk_0x8950ED5730F62EE8(&iLocal_114, 18);
	}
}

void func_541()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (!func_1116() && !func_381())
	{
		return;
	}
	if (!func_552())
	{
		return;
	}
	if (!unk_0x0E4018692D92041D(iLocal_114, 10))
	{
		if (Local_112.f_51 > 1)
		{
			if (func_550())
			{
				if (!func_549())
				{
					if (!func_548())
					{
						unk_0xD875615F72CD34A6(func_547());
						unk_0x8950ED5730F62EE8(&iLocal_114, 10);
						unk_0x98F04A4FFB4AD01C(unk_0x95B959F18401C09A(), func_547(), 0);
						unk_0x66D901F8097E8E86(unk_0x95B959F18401C09A(), 0);
					}
					else if (func_546())
					{
						unk_0xD875615F72CD34A6(func_547());
						unk_0x8950ED5730F62EE8(&iLocal_114, 10);
						unk_0x98F04A4FFB4AD01C(unk_0x95B959F18401C09A(), func_547(), 0);
						unk_0x66D901F8097E8E86(unk_0x95B959F18401C09A(), 0);
					}
				}
			}
		}
	}
	else if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) > 0)
	{
		if (func_550())
		{
			unk_0xBE4EF1CC6597EA75(unk_0x95B959F18401C09A());
			unk_0xA801F23A1C1DECFB(unk_0x95B959F18401C09A());
		}
	}
	if (Local_112.f_5 != -1)
	{
		if (!unk_0x0E4018692D92041D(iLocal_114, 11))
		{
			if (Local_112.f_5 == unk_0x72B85B341ADBE9DE())
			{
				unk_0xD875615F72CD34A6(func_547());
				unk_0x98F04A4FFB4AD01C(unk_0x95B959F18401C09A(), func_547(), 0);
				unk_0x66D901F8097E8E86(unk_0x95B959F18401C09A(), 0);
				unk_0x8950ED5730F62EE8(&iLocal_114, 11);
			}
			else if (func_544())
			{
				iVar0 = func_543();
				if (iVar0 != func_18())
				{
					if (!unk_0x0E4018692D92041D(iLocal_114, 10))
					{
						unk_0xD875615F72CD34A6(func_547());
						unk_0x8950ED5730F62EE8(&iLocal_114, 10);
					}
					if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
					{
						if (!unk_0xBC2FC12AD0FBF72E(unk_0x378BD4B3881338C2(iVar0)))
						{
							if (func_542(unk_0x33CD235DF1E6A94E(), unk_0x378BD4B3881338C2(iVar0), 1) <= 200f)
							{
								unk_0x98F04A4FFB4AD01C(unk_0x95B959F18401C09A(), func_547(), 0);
								unk_0x66D901F8097E8E86(unk_0x95B959F18401C09A(), 0);
								unk_0x8950ED5730F62EE8(&iLocal_114, 11);
							}
						}
					}
				}
			}
		}
		else if (!func_544())
		{
			unk_0xCE689A8E8C42ED78(&iLocal_114, 11);
		}
	}
	else if (unk_0x0E4018692D92041D(iLocal_114, 11))
	{
		unk_0xCE689A8E8C42ED78(&iLocal_114, 11);
	}
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		if (!unk_0x0E4018692D92041D(iLocal_114, 8))
		{
			iVar1 = unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A());
			if (iLocal_127 != iVar1)
			{
				iLocal_127 = iVar1;
			}
			if (iVar1 > 0)
			{
				if (func_1116())
				{
					fVar2 = unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), func_539(), true);
					if (fVar2 < 150f)
					{
						unk_0xBE4EF1CC6597EA75(unk_0x95B959F18401C09A());
						unk_0xA801F23A1C1DECFB(unk_0x95B959F18401C09A());
					}
				}
			}
		}
		else if (unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A()))
		{
			if (iLocal_127 > 0)
			{
				unk_0xD875615F72CD34A6(func_547());
				unk_0x98F04A4FFB4AD01C(unk_0x95B959F18401C09A(), iLocal_127, 0);
				unk_0x66D901F8097E8E86(unk_0x95B959F18401C09A(), 0);
			}
			unk_0xCE689A8E8C42ED78(&iLocal_114, 8);
		}
	}
	else if (!unk_0x0E4018692D92041D(iLocal_114, 8))
	{
		unk_0x8950ED5730F62EE8(&iLocal_114, 8);
	}
}

float func_542(int iParam0, int iParam1, bool bParam2)
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

int func_543()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_18();
	iVar1 = Local_112.f_5;
	if (iVar1 != -1)
	{
		if (unk_0x1B094AC15936B3DB(unk_0xDD4FFAA17341D382(iVar1)))
		{
			iVar0 = unk_0xEB9DC13235C0B345(unk_0xDD4FFAA17341D382(iVar1));
		}
	}
	return iVar0;
}

int func_544()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_543();
	if (iVar0 == func_18())
	{
		return 0;
	}
	if (iVar0 == unk_0x95B959F18401C09A())
	{
		return 1;
	}
	iVar1 = func_545();
	if (iVar1 != func_18())
	{
		if (func_16(iVar0, iVar1, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_545()
{
	return Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11;
}

bool func_546()
{
	return (((unk_0x0E4018692D92041D(Local_112.f_1, 11) || unk_0x0E4018692D92041D(Local_112.f_1, 12)) || unk_0x0E4018692D92041D(Local_112.f_1, 13)) || unk_0x0E4018692D92041D(Local_112.f_1, 14));
}

int func_547()
{
	switch (func_1100())
	{
		case 1:
			return Global_262145.f_12343;
		
		case 2:
			return Global_262145.f_12345;
		
		case 0:
			return Global_262145.f_12342;
		
		case 3:
			return Global_262145.f_12344;
		
		default:
	}
	return 5;
}

int func_548()
{
	switch (func_1100())
	{
		case 2:
			return 1;
		
		default:
	}
	return 0;
}

int func_549()
{
	switch (func_1100())
	{
		case 0:
		case 3:
			return 1;
		
		default:
	}
	return 0;
}

int func_550()
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = func_1100();
	switch (iVar0)
	{
		case 0:
			if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
			{
				vVar1 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true) };
				if (unk_0x16E00F066AFFEA0D(vVar1, func_539(), true) < 121f)
				{
					return 1;
				}
			}
			break;
		
		case 1:
			if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
			{
				vVar1 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true) };
				if (func_551(vVar1, 3, 1000, 0))
				{
					return 1;
				}
			}
			break;
		
		case 2:
			if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
			{
				vVar1 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true) };
				if (func_551(vVar1, 2, 1000, 0))
				{
					return 1;
				}
			}
			break;
		
		case 3:
			if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
			{
				vVar1 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true) };
				if (unk_0x16E00F066AFFEA0D(vVar1, func_539(), true) < 200f)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_551(vector3 vParam0, int iParam1, int iParam2, bool bParam3)
{
	vector3 vVar0[15];
	vector3 vVar1[15];
	float fVar2[15];
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar5 = 0;
	switch (iParam1)
	{
		case 1:
			vVar0[0 /*3*/] = { -1332.211f, 100.4608f, 40.38437f };
			vVar1[0 /*3*/] = { -1094.238f, 148.4274f, 73f };
			fVar2[0] = 171.25f;
			vVar0[1 /*3*/] = { -999.7344f, -110.2231f, 25.25706f };
			vVar1[1 /*3*/] = { -1149.494f, 109.2558f, 73f };
			fVar2[1] = 132f;
			vVar0[2 /*3*/] = { -1035.113f, -84.95885f, 28.2746f };
			vVar1[2 /*3*/] = { -1261.103f, 50.08148f, 73f };
			fVar2[2] = 132f;
			iVar3 = 3;
			break;
		
		case 2:
			vVar0[0 /*3*/] = { -804.3439f, -3346.5f, 10f };
			vVar1[0 /*3*/] = { -1816.954f, -2768.893f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 247f;
			vVar0[1 /*3*/] = { -1911.488f, -2934.197f, 10f };
			vVar1[1 /*3*/] = { -968.6236f, -3477.748f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 149f;
			vVar0[2 /*3*/] = { -844.9433f, -2802.785f, 10f };
			vVar1[2 /*3*/] = { -1011.081f, -3086.904f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 185.5f;
			vVar0[3 /*3*/] = { -1021.086f, -2952.277f, 10f };
			vVar1[3 /*3*/] = { -1599.008f, -2616.271f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 250f;
			vVar0[4 /*3*/] = { -1027.136f, -2436.457f, 10f };
			vVar1[4 /*3*/] = { -1392.61f, -2226.763f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 193.5f;
			vVar0[5 /*3*/] = { -1497.549f, -2408.712f, 10f };
			vVar1[5 /*3*/] = { -1136.917f, -2617.955f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 234.5f;
			vVar0[6 /*3*/] = { -982.7924f, -2831.709f, 12.93313f };
			vVar1[6 /*3*/] = { -966.4677f, -2803.458f, 16.68313f };
			fVar2[6] = 16f;
			vVar0[7 /*3*/] = { -1110.083f, -3496.806f, 12f };
			vVar1[7 /*3*/] = { -1955.298f, -3010.431f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 80f;
			vVar0[8 /*3*/] = { -1886.899f, -3193.024f, 12f };
			vVar1[8 /*3*/] = { -1836.143f, -3105.268f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 142f;
			vVar0[9 /*3*/] = { -1134.337f, -3535.648f, 12f };
			vVar1[9 /*3*/] = { -1259.649f, -3463.486f, IntToFloat((250 + iParam2)) };
			fVar2[9] = 30.75f;
			vVar0[10 /*3*/] = { -969.1279f, -3463.899f, 12f };
			vVar1[10 /*3*/] = { -896.3734f, -3505.715f, IntToFloat((250 + iParam2)) };
			fVar2[10] = 150f;
			vVar0[11 /*3*/] = { -1369.491f, -2173.579f, 10f };
			vVar1[11 /*3*/] = { -1685.626f, -2720.364f, IntToFloat((250 + iParam2)) };
			fVar2[11] = 29.25f;
			vVar0[12 /*3*/] = { -1010.926f, -3550.943f, 10f };
			vVar1[12 /*3*/] = { -1110.198f, -3493.617f, IntToFloat((250 + iParam2)) };
			fVar2[12] = 43f;
			iVar3 = 13;
			break;
		
		case 3:
			vVar0[0 /*3*/] = { -1773.944f, 3287.334f, 30f };
			vVar1[0 /*3*/] = { -2029.776f, 2845.083f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 255f;
			vVar0[1 /*3*/] = { -2725.889f, 3291.099f, 30f };
			vVar1[1 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 180f;
			vVar0[2 /*3*/] = { -2442.026f, 3326.699f, 30f };
			vVar1[2 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 205f;
			vVar0[3 /*3*/] = { -1917.165f, 3374.209f, 30f };
			vVar1[3 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 86.25f;
			vVar0[4 /*3*/] = { -2192.753f, 3373.278f, 30f };
			vVar1[4 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 150.5f;
			vVar0[5 /*3*/] = { -2077.663f, 3344.514f, 30f };
			vVar1[5 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 140.5f;
			vVar0[6 /*3*/] = { -2861.755f, 3352.661f, 30f };
			vVar1[6 /*3*/] = { -2715.871f, 3269.916f, IntToFloat((250 + iParam2)) };
			fVar2[6] = 90f;
			vVar0[7 /*3*/] = { -2005.574f, 3364.533f, 30f };
			vVar1[7 /*3*/] = { -1977.569f, 3330.888f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 100f;
			vVar0[8 /*3*/] = { -1682.235f, 3004.285f, 30f };
			vVar1[8 /*3*/] = { -1942.747f, 2947.441f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 248.75f;
			vVar0[9 /*3*/] = { -2393.295f, 2936.406f, 31.6801f };
			vVar1[9 /*3*/] = { -2453.037f, 3006.863f, 52.31003f };
			fVar2[9] = 128f;
			vVar0[10 /*3*/] = { -2347.185f, 3023.83f, 31.56573f };
			vVar1[10 /*3*/] = { -2517.33f, 2989.063f, 49.95644f };
			fVar2[10] = 140f;
			vVar0[11 /*3*/] = { -2259.922f, 3358.04f, 29.99972f };
			vVar1[11 /*3*/] = { -2299.772f, 3385.79f, 38.06014f };
			fVar2[11] = 16f;
			vVar0[12 /*3*/] = { -2476.309f, 3363.914f, 31.67933f };
			vVar1[12 /*3*/] = { -2431.981f, 3287.669f, 39.97826f };
			fVar2[12] = 214.25f;
			vVar0[13 /*3*/] = { -2103.081f, 2797.783f, 29.37864f };
			vVar1[13 /*3*/] = { -2096.821f, 2874.423f, 57.80989f };
			fVar2[13] = 65.75f;
			if (bParam3)
			{
				iVar6 = iParam2;
			}
			else
			{
				iVar6 = 0;
			}
			vVar1[9 /*3*/].f_2 = (vVar1[9 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[10 /*3*/].f_2 = (vVar1[10 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[11 /*3*/].f_2 = (vVar1[11 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[12 /*3*/].f_2 = (vVar1[12 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[13 /*3*/].f_2 = (vVar1[13 /*3*/].f_2 + IntToFloat(iVar6));
			iVar3 = 14;
			break;
		
		case 4:
			vVar0[0 /*3*/] = { 1541.607f, 2527.555f, 40f };
			vVar1[0 /*3*/] = { 1815.575f, 2535.06f, IntToFloat((150 + iParam2)) };
			fVar2[0] = 114f;
			vVar0[1 /*3*/] = { 1788.879f, 2445.727f, 40f };
			vVar1[1 /*3*/] = { 1716.96f, 2502.957f, IntToFloat((150 + iParam2)) };
			fVar2[1] = 88.5f;
			vVar0[2 /*3*/] = { 1601.157f, 2436.244f, 40f };
			vVar1[2 /*3*/] = { 1650.078f, 2515.923f, IntToFloat((150 + iParam2)) };
			fVar2[2] = 133.25f;
			vVar0[3 /*3*/] = { 1706.331f, 2407.597f, 40f };
			vVar1[3 /*3*/] = { 1698.555f, 2460.208f, IntToFloat((150 + iParam2)) };
			fVar2[3] = 104.5f;
			vVar0[4 /*3*/] = { 1712.452f, 2756.218f, 40f };
			vVar1[4 /*3*/] = { 1718.848f, 2589.162f, IntToFloat((150 + iParam2)) };
			fVar2[4] = 121.75f;
			vVar0[5 /*3*/] = { 1830.228f, 2661.24f, 40f };
			vVar1[5 /*3*/] = { 1774.812f, 2679.419f, IntToFloat((150 + iParam2)) };
			fVar2[5] = 84.5f;
			vVar0[6 /*3*/] = { 1559.05f, 2632.22f, 40f };
			vVar1[6 /*3*/] = { 1657.208f, 2595.484f, IntToFloat((150 + iParam2)) };
			fVar2[6] = 103.75f;
			vVar0[7 /*3*/] = { 1612.021f, 2716.869f, 40f };
			vVar1[7 /*3*/] = { 1657.165f, 2669.721f, IntToFloat((150 + iParam2)) };
			fVar2[7] = 104.25f;
			vVar0[8 /*3*/] = { 1809.872f, 2729.827f, 40f };
			vVar1[8 /*3*/] = { 1789.855f, 2705.037f, IntToFloat((150 + iParam2)) };
			fVar2[8] = 91f;
			vVar0[9 /*3*/] = { 1818.789f, 2605.948f, 40f };
			vVar1[9 /*3*/] = { 1783.114f, 2606.783f, IntToFloat((150 + iParam2)) };
			fVar2[9] = 51.25f;
			iVar3 = 10;
			break;
		
		case 5:
			vVar0[0 /*3*/] = { 3411.002f, 3663.185f, 20f };
			vVar1[0 /*3*/] = { 3615.583f, 3626.194f, IntToFloat((40 + iParam2)) };
			fVar2[0] = 45.75f;
			vVar0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			vVar1[1 /*3*/] = { 3643.801f, 3694.362f, IntToFloat((40 + iParam2)) };
			fVar2[1] = 99f;
			vVar0[2 /*3*/] = { 3446.036f, 3795.688f, 20f };
			vVar1[2 /*3*/] = { 3650.914f, 3766.152f, IntToFloat((40 + iParam2)) };
			fVar2[2] = 81.5f;
			iVar3 = 3;
			break;
		
		case 6:
			vVar0[0 /*3*/] = { 526.053f, -3391.497f, -10f };
			vVar1[0 /*3*/] = { 523.2289f, -3118.678f, IntToFloat((10 + iParam2)) };
			fVar2[0] = 120f;
			vVar0[1 /*3*/] = { 459.4397f, -3199.99f, 4.819676f };
			vVar1[1 /*3*/] = { 593.8928f, -3199.998f, 30.06926f };
			fVar2[1] = 170f;
			vVar0[2 /*3*/] = { 552.8467f, -3111.054f, 4.819394f };
			vVar1[2 /*3*/] = { 585.3137f, -3111.844f, 17.56923f };
			fVar2[2] = 12.5f;
			vVar0[3 /*3*/] = { 598.4666f, -3140.147f, 4.819257f };
			vVar1[3 /*3*/] = { 597.4973f, -3117.063f, 17.31926f };
			fVar2[3] = 9.75f;
			iVar3 = 4;
			break;
		
		case 7:
			vVar0[0 /*3*/] = { -1108.55f, -570.8798f, 20f };
			vVar1[0 /*3*/] = { -1187.811f, -477.5037f, IntToFloat((50 + iParam2)) };
			fVar2[0] = 162f;
			vVar0[1 /*3*/] = { -1201.378f, -485.9673f, 20f };
			vVar1[1 /*3*/] = { -1215.796f, -464.8281f, IntToFloat((50 + iParam2)) };
			fVar2[1] = 124f;
			vVar0[2 /*3*/] = { -985.6311f, -525.4233f, 20f };
			vVar1[2 /*3*/] = { -1013.393f, -475.2057f, IntToFloat((50 + iParam2)) };
			fVar2[2] = 55f;
			vVar0[3 /*3*/] = { -1055.849f, -477.8226f, 20f };
			vVar1[3 /*3*/] = { -1073.333f, -498.717f, IntToFloat((50 + iParam2)) };
			fVar2[3] = 142f;
			iVar3 = 4;
			break;
		
		case 8:
			vVar0[0 /*3*/] = { 461.5684f, -984.572f, 29.43951f };
			vVar1[0 /*3*/] = { 471.17f, -984.4292f, 40.14212f };
			fVar2[0] = 7.75f;
			vVar0[1 /*3*/] = { 457.3404f, -984.756f, 34.43951f };
			vVar1[1 /*3*/] = { 457.2084f, -993.7189f, 29.38958f };
			fVar2[1] = 14.75f;
			vVar0[2 /*3*/] = { 477.6227f, -986.6f, 40.00819f };
			vVar1[2 /*3*/] = { 424.8687f, -986.3279f, 48.71241f };
			fVar2[2] = 31.5f;
			vVar0[3 /*3*/] = { 474.3889f, -974.4613f, 39.55761f };
			vVar1[3 /*3*/] = { 474.0358f, -1021.972f, 49.10033f };
			fVar2[3] = 30.5f;
			vVar0[4 /*3*/] = { 442.1768f, -974.1888f, 29.68951f };
			vVar1[4 /*3*/] = { 442.1855f, -979.8635f, 33.43951f };
			fVar2[4] = 6.75f;
			iVar3 = 5;
			break;
	}
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		if (unk_0xC2F708DE8AD68197(vParam0, vVar0[iVar4 /*3*/], vVar1[iVar4 /*3*/], fVar2[iVar4], iVar5, true))
		{
			return 1;
		}
		iVar4++;
	}
	return 0;
}

int func_552()
{
	if (!func_554(1, 1, 1))
	{
		return 0;
	}
	if (func_371())
	{
		if (!unk_0x0E4018692D92041D(iLocal_115, 11))
		{
			if (!func_553())
			{
				if (unk_0x4F94F07DAD382CDA(Local_112.f_12))
				{
					unk_0x8950ED5730F62EE8(&iLocal_115, 11);
					unk_0x861C6D8520E774EA(unk_0xE4B835FDC8B9B086(Local_112.f_12), true, 1);
				}
			}
			else
			{
				unk_0x8950ED5730F62EE8(&iLocal_115, 11);
			}
		}
		return 0;
	}
	if (func_367(unk_0x95B959F18401C09A()) < 1)
	{
		return 0;
	}
	if (func_1116())
	{
		return 1;
	}
	if (func_381())
	{
		return 1;
	}
	return 0;
}

bool func_553()
{
	int iVar0;
	
	iVar0 = func_1100();
	return iVar0 == 1;
}

int func_554(bool bParam0, bool bParam1, bool bParam2)
{
	if (func_590(unk_0x95B959F18401C09A(), 29))
	{
		return 0;
	}
	if (func_375(unk_0x95B959F18401C09A(), 21))
	{
		return 0;
	}
	if (func_375(unk_0x95B959F18401C09A(), 25))
	{
		return 0;
	}
	if (bParam2)
	{
		if (unk_0x69E8EDFEA57E361D())
		{
			return 0;
		}
	}
	if (!func_284(unk_0x95B959F18401C09A()))
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xF29C37CB006AE9DD())
		{
			return 0;
		}
	}
	if (func_145(unk_0x95B959F18401C09A()))
	{
		return 0;
	}
	if (func_589())
	{
		return 0;
	}
	if (func_356())
	{
		return 0;
	}
	if (func_471())
	{
		return 0;
	}
	if (func_350())
	{
		return 0;
	}
	if (unk_0x289064CB38B560AA())
	{
		return 0;
	}
	if (func_84(unk_0x95B959F18401C09A()))
	{
		return 0;
	}
	if (!func_352())
	{
		return 0;
	}
	if (func_375(unk_0x95B959F18401C09A(), 0) || func_375(unk_0x95B959F18401C09A(), 3))
	{
		return 0;
	}
	if ((func_375(unk_0x95B959F18401C09A(), 12) || func_375(unk_0x95B959F18401C09A(), 14)) || func_375(unk_0x95B959F18401C09A(), 13))
	{
		return 0;
	}
	if (func_582(unk_0x95B959F18401C09A(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		if (!func_559())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_558())
		{
			return 0;
		}
	}
	if (Global_1657075)
	{
		return 0;
	}
	if (func_159(unk_0x95B959F18401C09A()))
	{
		return 0;
	}
	if (func_530())
	{
		return 0;
	}
	if (func_557(unk_0x95B959F18401C09A()))
	{
		return 0;
	}
	if (func_556())
	{
		return 0;
	}
	if (unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_23, 4))
	{
		return 0;
	}
	if (func_555(unk_0x95B959F18401C09A()))
	{
		return 0;
	}
	if (func_409(unk_0x95B959F18401C09A()))
	{
		return 0;
	}
	return 1;
}

int func_555(int iParam0)
{
	if (Global_2424047[iParam0 /*416*/].f_261.f_4 != 0 || Global_2424047[iParam0 /*416*/].f_261.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_556()
{
	return Global_1671295.f_3663 != -1;
}

int func_557(int iParam0)
{
	if (unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_23, 14))
	{
		return 1;
	}
	if (unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_23, 11))
	{
		return 1;
	}
	return 0;
}

bool func_558()
{
	return Global_93734.f_340 > 0;
}

int func_559()
{
	int iVar0;
	
	iVar0 = func_290(unk_0x95B959F18401C09A());
	if (((func_581(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_25) || func_580(unk_0x95B959F18401C09A())) || func_579(unk_0x95B959F18401C09A())) || func_574(unk_0x95B959F18401C09A()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_572(unk_0x95B959F18401C09A()))
	{
		if (func_390(iVar0) || func_571(iVar0))
		{
			return 1;
		}
	}
	if (func_570(unk_0x95B959F18401C09A()))
	{
		if (func_571(iVar0))
		{
			return 1;
		}
	}
	if (func_569(unk_0x95B959F18401C09A()))
	{
		if (func_568(iVar0))
		{
			return 1;
		}
	}
	if (func_567(unk_0x95B959F18401C09A()))
	{
		if (func_566(iVar0))
		{
			return 1;
		}
	}
	if (func_565(unk_0x95B959F18401C09A()))
	{
		if (func_564(iVar0))
		{
			return 1;
		}
	}
	if (func_563(unk_0x95B959F18401C09A()))
	{
		if (func_562(iVar0))
		{
			return 1;
		}
	}
	if (func_67(unk_0x95B959F18401C09A(), 0))
	{
		if (func_389(iVar0))
		{
			if (func_560(unk_0x95B959F18401C09A()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_560(int iParam0)
{
	if (func_561(iParam0) != func_18())
	{
		return func_561(iParam0) == func_46(iParam0);
	}
	return 0;
}

int func_561(int iParam0)
{
	return Global_1626536[iParam0 /*603*/].f_11.f_35;
}

int func_562(int iParam0)
{
	switch (iParam0)
	{
		case 237:
		case 238:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_563(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_1228(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_68(Global_2424047[iParam0 /*416*/].f_309.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_564(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_565(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_1228(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_68(Global_2424047[iParam0 /*416*/].f_309.f_5) == 9;
			}
		}
	}
	return 0;
}

int func_566(int iParam0)
{
	switch (iParam0)
	{
		case 229:
		case 230:
			return 1;
		
		default:
	}
	return 0;
}

int func_567(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_1228(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_68(Global_2424047[iParam0 /*416*/].f_309.f_5) == 7;
			}
		}
	}
	return 0;
}

int func_568(int iParam0)
{
	switch (iParam0)
	{
		case 225:
		case 226:
		case 227:
			return 1;
		
		default:
	}
	return 0;
}

int func_569(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_1228(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_68(Global_2424047[iParam0 /*416*/].f_309.f_5) == 4;
			}
		}
	}
	return 0;
}

int func_570(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_1228(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_68(Global_2424047[iParam0 /*416*/].f_309.f_5) == 2;
			}
		}
	}
	return 0;
}

int func_571(int iParam0)
{
	switch (iParam0)
	{
		case 190:
		case 191:
		case 192:
			return 1;
		
		default:
	}
	return 0;
}

int func_572(int iParam0)
{
	if (func_573(Global_1589819[iParam0 /*818*/].f_273.f_25, -1))
	{
		return 1;
	}
	return 0;
}

int func_573(int iParam0, int iParam1)
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

int func_574(int iParam0)
{
	if (func_575(Global_1589819[iParam0 /*818*/].f_273.f_25, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_575(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_576(unk_0x95B959F18401C09A(), 0);
	}
	if (bParam1)
	{
		if (func_576(unk_0x95B959F18401C09A(), 0))
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

bool func_576(int iParam0, bool bParam1)
{
	if (Global_1589660 != func_18())
	{
		if (!func_578(Global_1589660))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0x95B959F18401C09A() != Global_1589660)
			{
				if (unk_0x0E4018692D92041D(Global_2424047[Global_1589660 /*416*/].f_195, 24) || func_577(Global_1589660))
				{
					return 1;
				}
			}
		}
	}
	return unk_0x0E4018692D92041D(Global_2424047[iParam0 /*416*/].f_195, 24);
}

int func_577(int iParam0)
{
	if (iParam0 != func_18())
	{
		return unk_0x0E4018692D92041D(Global_2424047[iParam0 /*416*/].f_195, 9);
	}
	return 0;
}

int func_578(int iParam0)
{
	if (iParam0 != func_18())
	{
		return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_344, 2);
	}
	return 0;
}

int func_579(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_1228(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_68(Global_2424047[iParam0 /*416*/].f_309.f_5) == 1;
			}
		}
	}
	return 0;
}

int func_580(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_1228(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_68(Global_2424047[iParam0 /*416*/].f_309.f_5) == 0;
			}
		}
	}
	return 0;
}

int func_581(int iParam0)
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

int func_582(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
{
	if (Global_1589819[iParam0 /*818*/].f_273.f_25 > 0)
	{
		if (bParam1)
		{
			if (unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_23, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (!bParam2)
	{
		if (func_580(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_570(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_579(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_569(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_567(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_565(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_588(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_563(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_587(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_67(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_586(iParam0))
		{
			return 1;
		}
	}
	if (!bParam13)
	{
		if (func_585(iParam0))
		{
			return 1;
		}
	}
	if (!bParam14)
	{
		if (func_584(iParam0))
		{
			return 1;
		}
	}
	if (!bParam15)
	{
		if (func_583(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_583(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_1228(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_68(Global_2424047[iParam0 /*416*/].f_309.f_5) == 16;
			}
		}
	}
	return 0;
}

int func_584(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_1228(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_68(Global_2424047[iParam0 /*416*/].f_309.f_5) == 15;
			}
		}
	}
	return 0;
}

int func_585(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_1228(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_68(Global_2424047[iParam0 /*416*/].f_309.f_5) == 14;
			}
		}
	}
	return 0;
}

int func_586(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_1228(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_68(Global_2424047[iParam0 /*416*/].f_309.f_5) == 13;
			}
		}
	}
	return 0;
}

int func_587(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_1228(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_68(Global_2424047[iParam0 /*416*/].f_309.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_588(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_1228(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1 && Global_2424047[iParam0 /*416*/].f_309.f_8 != func_18())
			{
				return func_68(Global_2424047[iParam0 /*416*/].f_309.f_5) == 8;
			}
		}
	}
	return 0;
}

bool func_589()
{
	return unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_39.f_18, 0);
}

bool func_590(int iParam0, int iParam1)
{
	return unk_0x0E4018692D92041D(Global_1626536[iParam0 /*603*/].f_11.f_5, iParam1);
}

void func_591()
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char* sVar5;
	int iVar6;
	
	if (Local_112.f_3 != 1)
	{
		return;
	}
	if (!func_552())
	{
		if (iLocal_126 != -2)
		{
			if (iLocal_126 > -1)
			{
				iVar4 = unk_0xDD4FFAA17341D382(iLocal_126);
				if (unk_0x1B094AC15936B3DB(iVar4))
				{
					iVar2 = unk_0xEB9DC13235C0B345(iVar4);
					if (iVar2 != unk_0x95B959F18401C09A())
					{
						func_674(iVar2, 421, 0, 0);
						if (!func_1116())
						{
							func_673(iVar2, 1, 0, 0);
							func_672(iVar2, 0, 0, 0);
							func_671(iVar2, 0);
							func_668(iVar2, Global_262145.f_12246, 0, 0);
						}
					}
				}
			}
			else if (unk_0xE38E3CF1625A4145(iLocal_124))
			{
				unk_0x1ABDB383C83A336A(&iLocal_124);
			}
			if (unk_0xE38E3CF1625A4145(iLocal_122))
			{
				unk_0x1ABDB383C83A336A(&iLocal_122);
			}
			iLocal_126 = -2;
			func_667();
		}
		return;
	}
	if (unk_0x4F94F07DAD382CDA(Local_112.f_29[0]))
	{
		if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
		{
			if (func_21(Local_112.f_29[0]))
			{
				if (unk_0xEE984ED4E4A374BE(unk_0x33CD235DF1E6A94E(), unk_0xFC00F22E930BFD55(Local_112.f_29[0])))
				{
					if (unk_0x7BDC41A7CA0C77A2(unk_0xFC00F22E930BFD55(Local_112.f_29[0]), -1, 0) == unk_0x33CD235DF1E6A94E())
					{
						if (!unk_0x0E4018692D92041D(Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_1, 8))
						{
							unk_0x8950ED5730F62EE8(&(Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_1), 8);
							func_384();
							func_386(0);
							if (unk_0xE38E3CF1625A4145(iLocal_124))
							{
								unk_0x1ABDB383C83A336A(&iLocal_124);
							}
						}
					}
					else if (unk_0x0E4018692D92041D(Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_1, 8))
					{
						unk_0xCE689A8E8C42ED78(&(Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_1), 8);
					}
				}
				else if (unk_0x0E4018692D92041D(Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_1, 8))
				{
					unk_0xCE689A8E8C42ED78(&(Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_1), 8);
				}
			}
			else if (unk_0x0E4018692D92041D(Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_1, 8))
			{
				unk_0xCE689A8E8C42ED78(&(Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_1), 8);
			}
		}
		else if (unk_0x0E4018692D92041D(Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_1, 8))
		{
			unk_0xCE689A8E8C42ED78(&(Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_1), 8);
		}
		if (iLocal_126 != Local_112.f_7)
		{
			if (func_21(Local_112.f_29[0]))
			{
				if (Local_112.f_7 == -1)
				{
					if (func_552())
					{
						if (func_367(unk_0x95B959F18401C09A()) >= 1)
						{
							iVar4 = unk_0xDD4FFAA17341D382(iLocal_126);
							if (unk_0x1B094AC15936B3DB(iVar4))
							{
								iVar2 = unk_0xEB9DC13235C0B345(iVar4);
								if (iVar2 != unk_0x95B959F18401C09A())
								{
									func_674(iVar2, 421, 0, 0);
									if (!func_1116())
									{
										func_673(iVar2, 1, 0, 0);
										func_672(iVar2, 0, 0, 0);
										func_671(iVar2, 0);
										func_668(iVar2, Global_262145.f_12246, 0, 0);
									}
								}
							}
						}
					}
					func_664();
				}
				else
				{
					iVar4 = unk_0xDD4FFAA17341D382(Local_112.f_7);
					if (unk_0x1B094AC15936B3DB(iVar4))
					{
						if (func_552())
						{
							if (func_367(unk_0x95B959F18401C09A()) >= 1)
							{
								iVar2 = unk_0xEB9DC13235C0B345(iVar4);
								if (unk_0xE38E3CF1625A4145(iLocal_124))
								{
									unk_0x1ABDB383C83A336A(&iLocal_124);
								}
								if (iVar2 != unk_0x95B959F18401C09A())
								{
									if (!func_1116())
									{
										if (!func_662())
										{
											func_674(iVar2, 421, 1, 0);
											func_672(iVar2, 1, 1, 0);
											func_673(iVar2, 1, 1, 0);
											func_671(iVar2, 1);
											func_668(iVar2, Global_262145.f_12246, 1, 0);
										}
										else
										{
											func_674(iVar2, 421, 1, 0);
											func_668(iVar2, Global_262145.f_12246, 1, 0);
										}
									}
									else if (func_662())
									{
										func_674(iVar2, 421, 1, 0);
										func_668(iVar2, Global_262145.f_12246, 1, 0);
									}
									else
									{
										func_674(iVar2, 421, 1, 0);
										func_672(iVar2, 1, 1, 0);
										func_673(iVar2, 1, 1, 0);
										func_671(iVar2, 1);
										func_668(iVar2, Global_262145.f_12246, 1, 0);
									}
								}
								if (iVar2 != unk_0x95B959F18401C09A())
								{
									func_633("GB_AST_TCKR", iVar2, 0, 0, 0, 1, 1, 0);
								}
							}
						}
					}
				}
				iLocal_126 = Local_112.f_7;
				if (iLocal_126 == -1)
				{
				}
			}
		}
		if (func_552())
		{
			if (func_367(unk_0x95B959F18401C09A()) > 2)
			{
				if (iLocal_126 == -1)
				{
					if (func_1116())
					{
						if (!func_632("GB_AST_RETV"))
						{
							func_629("GB_AST_RETV", 0);
						}
					}
					else if (func_381())
					{
						if (!func_632("GB_AST_DESR"))
						{
							func_629("GB_AST_DESR", 0);
						}
					}
				}
				else if (iLocal_126 == unk_0x72B85B341ADBE9DE())
				{
					if (func_1116())
					{
						if (!func_632("GB_AST_DROPV"))
						{
							func_629("GB_AST_DROPV", 0);
						}
					}
				}
				else
				{
					iVar2 = func_628();
					if (iVar2 != func_18())
					{
						if (func_1097(1))
						{
							iVar3 = func_545();
							if (iVar3 != func_18() && func_16(iVar2, iVar3, 1))
							{
								if (!func_632("GB_AST_DROPBV"))
								{
									iVar0 = func_262(iVar2);
									if (iVar0 > -1)
									{
										uVar1 = func_260(iVar0);
										func_616("GB_AST_DROPBV", iVar2, "GB_AST_RNO", 1, uVar1, 0);
									}
								}
							}
							else if (!func_632("GB_AST_DESR"))
							{
								func_629("GB_AST_DESR", 0);
							}
						}
						else if (!func_632("GB_AST_DESR"))
						{
							func_629("GB_AST_DESR", 0);
						}
					}
				}
			}
		}
		if (iLocal_126 == -1)
		{
			if (unk_0xE38E3CF1625A4145(iLocal_122))
			{
				unk_0x1ABDB383C83A336A(&iLocal_122);
			}
			func_664();
		}
		else if (iLocal_126 == unk_0x72B85B341ADBE9DE())
		{
			if (unk_0xE38E3CF1625A4145(iLocal_124))
			{
				unk_0x1ABDB383C83A336A(&iLocal_124);
			}
			if (!unk_0x0E4018692D92041D(Local_112.f_1, 8))
			{
				if (func_367(unk_0x95B959F18401C09A()) >= 1)
				{
					if (!unk_0xE38E3CF1625A4145(iLocal_122))
					{
						iLocal_122 = unk_0x2C0ED4741A007C6A(func_24());
						unk_0x1C316779E36C1967(iLocal_122, true);
					}
				}
				else if (unk_0xE38E3CF1625A4145(iLocal_122))
				{
					unk_0x1ABDB383C83A336A(&iLocal_122);
				}
			}
			else if (unk_0xE38E3CF1625A4145(iLocal_122))
			{
				unk_0x1ABDB383C83A336A(&iLocal_122);
			}
		}
		else
		{
			if (unk_0xE38E3CF1625A4145(iLocal_124))
			{
				unk_0x1ABDB383C83A336A(&iLocal_124);
			}
			iVar2 = func_628();
			if (iVar2 != func_18())
			{
				if (func_1097(1))
				{
					iVar3 = func_545();
					if (iVar3 != func_18())
					{
						if (func_16(iVar2, iVar3, 1))
						{
							if (!unk_0x0E4018692D92041D(Local_112.f_1, 1))
							{
								if (func_367(unk_0x95B959F18401C09A()) >= 1)
								{
									if (!unk_0xE38E3CF1625A4145(iLocal_122))
									{
										iLocal_122 = unk_0x2C0ED4741A007C6A(func_24());
										unk_0x1C316779E36C1967(iLocal_122, true);
									}
								}
							}
							else if (unk_0xE38E3CF1625A4145(iLocal_122))
							{
								unk_0x1ABDB383C83A336A(&iLocal_122);
							}
						}
					}
				}
			}
		}
		if (!unk_0x0E4018692D92041D(iLocal_114, 2))
		{
			if (func_381())
			{
				if (!func_615(86))
				{
					if (func_367(unk_0x95B959F18401C09A()) >= 1)
					{
						if (func_609(0, 1, 1, 1))
						{
							sVar5 = func_603(unk_0x7C1C88877E8AAA50(Local_112.f_9));
							iVar6 = func_602(unk_0x7C1C88877E8AAA50(Local_112.f_9));
							if (func_1097(1))
							{
								func_601("GB_AST_HELP3", sVar5, iVar6, -1);
							}
							else
							{
								func_601("GB_AST_HELP6", sVar5, iVar6, -1);
							}
							func_600(1);
							unk_0x8950ED5730F62EE8(&iLocal_114, 2);
						}
					}
				}
			}
		}
		func_594();
	}
	func_592();
}

void func_592()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	
	if (!func_552())
	{
		return;
	}
	if (!func_1116() && !func_381())
	{
		return;
	}
	bVar6 = false;
	if (unk_0x4F94F07DAD382CDA(Local_112.f_29[0]))
	{
		if (func_21(Local_112.f_29[0]))
		{
			if (Local_112.f_7 == -1)
			{
				if (!func_381())
				{
					unk_0x1256E5EA03020804(9, &iVar0, &iVar1, &iVar2, &uVar3);
				}
				else
				{
					unk_0x1256E5EA03020804(6, &iVar0, &iVar1, &iVar2, &uVar3);
				}
				bVar6 = true;
			}
			else
			{
				iVar5 = func_628();
				if (iVar5 != func_18())
				{
					if (!func_1097(1))
					{
						unk_0x1256E5EA03020804(6, &iVar0, &iVar1, &iVar2, &uVar3);
						bVar6 = true;
					}
					else
					{
						iVar4 = func_545();
						if (iVar4 != func_18() && !func_16(iVar5, iVar4, 1))
						{
							unk_0x1256E5EA03020804(6, &iVar0, &iVar1, &iVar2, &uVar3);
							bVar6 = true;
						}
					}
				}
			}
			if (bVar6)
			{
				func_593(unk_0xFC00F22E930BFD55(Local_112.f_29[0]), iVar0, iVar1, iVar2, 0);
			}
		}
	}
}

void func_593(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	fVar2 = 0.5f;
	unk_0xFEF5F9BB57EA2E8D(unk_0x541D5C57194E73C4(iParam0), &vVar0, &vVar1);
	fVar3 = ((vVar1.z - vVar0.z) / 2f);
	fVar4 = (vVar1.z - fVar3);
	if (fVar2 <= (fVar4 + 0.1f))
	{
		fVar2 = (fVar4 + 0.4f);
	}
	fVar2 = (fVar2 + fParam4);
	unk_0xBE9D0FB56A2D798F(2, unk_0xFBB1F99A825CAB09(iParam0, true) + Vector((((vVar1.z - vVar0.z) / 2f) + fVar2), 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, iParam1, iParam2, iParam3, 100, 1, 1, 2, 0, 0, 0, false);
}

void func_594()
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = func_628();
	vVar1 = { func_24() };
	if (unk_0x4F94F07DAD382CDA(Local_112.f_29[0]))
	{
		if (unk_0x6F3D61B58C7B4025(Local_112.f_29[0]))
		{
			if (!unk_0x0E4018692D92041D(Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_1, 9))
			{
				if (iVar0 == unk_0x95B959F18401C09A())
				{
					if (!unk_0xBC2FC12AD0FBF72E(unk_0x378BD4B3881338C2(iVar0)))
					{
						if (unk_0x18FB647D79B09657(unk_0x378BD4B3881338C2(iVar0), vVar1, 6f, 6f, 2f, true, true, 0))
						{
							func_595(unk_0xFC00F22E930BFD55(Local_112.f_29[0]), &uLocal_144, 0, 1);
							if (unk_0x0A81FE3D92AE2AC9(unk_0xFC00F22E930BFD55(Local_112.f_29[0])))
							{
								unk_0x9D933DC08CBBEC60(unk_0xFC00F22E930BFD55(Local_112.f_29[0]), 1);
							}
							unk_0x8950ED5730F62EE8(&(Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_1), 9);
						}
					}
				}
			}
		}
	}
}

int func_595(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	if (!func_598(iParam0, 1, 1, 0, 0, 0, 1, 0, 1))
	{
		if (unk_0xEE14D9A9F531ADDC(unk_0x5009A219B22D2352(unk_0x78DCC5D0CB43DEBA(), *uParam1)) > 1000)
		{
			iVar0 = 0;
			while (iVar0 < 32)
			{
				iVar1 = unk_0x7C1C88877E8AAA50(iVar0);
				if (func_1228(iVar1, 0, 1))
				{
					if (unk_0x10930B9CAD4111C2(unk_0x378BD4B3881338C2(iVar1), iParam0, 0))
					{
						func_596(func_597(iVar1), 0, 0f, 0, 0, 0, -1);
					}
				}
				iVar0++;
			}
			*uParam1 = unk_0x78DCC5D0CB43DEBA();
		}
	}
	else if (!unk_0x0A81FE3D92AE2AC9(iParam0))
	{
		unk_0xA5F44EC021F96C6B(iParam0);
	}
	else
	{
		if (bParam3)
		{
			unk_0x9D933DC08CBBEC60(iParam0, 1);
		}
		unk_0xF70578F5CD9822CB(iParam0, false);
		if (bParam2)
		{
			unk_0x9611832841071B69(iParam0, true);
		}
		return 1;
	}
	return 0;
}

void func_596(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<9> Var0;
	
	Var0 = 1796063150;
	Var0.f_1 = unk_0x95B959F18401C09A();
	Var0.f_7 = iParam6;
	Var0.f_4 = iParam1;
	Var0.f_5 = iParam4;
	Var0.f_2 = fParam2;
	Var0.f_3 = iParam3;
	Var0.f_6 = iParam5;
	Var0.f_8 = unk_0xE77FA521699F639C();
	if (!iParam0 == 0)
	{
		unk_0x09269A9CFC145847(1, &Var0, 9, iParam0);
	}
}

int func_597(int iParam0)
{
	var uVar0;
	
	unk_0x8950ED5730F62EE8(&uVar0, iParam0);
	return uVar0;
}

int func_598(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0xC92AA0DBDDDE8BB8(iParam0) + 1;
	if (iParam4 || !unk_0xD62C4419A41F106A(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_599(iParam0, (iVar0 - 1), bParam6, iParam7);
			if (unk_0x765F6FEEFF39224F(iVar2))
			{
				if (iParam3 && iVar2 == unk_0x33CD235DF1E6A94E())
				{
				}
				else if (iParam2 && unk_0xE09156665EC2D83B(iVar2))
				{
					if (!unk_0xBC2FC12AD0FBF72E(iVar2) || iParam8)
					{
						if (unk_0x002F527E1A3238DC(unk_0x5C7617A25D50AAE9(iVar2)) == 0)
						{
							if (!bParam5)
							{
								return 0;
							}
						}
						else
						{
							return 0;
						}
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!unk_0xBC2FC12AD0FBF72E(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_599(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	if (!unk_0x67FFBB75D2430704(iParam0, iParam1, iParam3))
	{
		iVar0 = unk_0x7BDC41A7CA0C77A2(iParam0, iParam1, iParam3);
	}
	if (bParam2)
	{
		if (!unk_0x765F6FEEFF39224F(iVar0) && !unk_0xD62C4419A41F106A(iParam0, 0))
		{
			iVar0 = unk_0xDAF93A0E27EE6FC7(iParam0, iParam1);
			if (!unk_0xD62C4419A41F106A(iVar0, 0))
			{
				if (unk_0xD76D6BCC14B95CE1(iVar0, 451360105) == 1 || unk_0xD76D6BCC14B95CE1(iVar0, -828834893) == 1)
				{
					if (vdist(unk_0xFBB1F99A825CAB09(iParam0, false), unk_0xFBB1F99A825CAB09(iVar0, false)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

void func_600(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_321(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_302())
	{
		unk_0x0F8EAEEC97DDBCB3(-1, "Boss_Message_Orange", sVar0, false);
	}
}

void func_601(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0x37621D6689F9E3C3(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x75D3F9044123D4F9(iParam2);
	}
	unk_0xD61E5ED1D4E687A5(sParam1);
	unk_0x092150016C06C431(0, 0, false, iParam3);
}

int func_602(int iParam0)
{
	int iVar0;
	
	iVar0 = func_262(iParam0);
	if (iVar0 != -1)
	{
		return func_260(iVar0);
	}
	return 1;
}

char* func_603(int iParam0)
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == unk_0x95B959F18401C09A())
	{
		sVar0 = func_608(&(Global_1626536[iParam0 /*603*/].f_11.f_104));
		return sVar0;
	}
	if (Global_1626536[iParam0 /*603*/].f_11.f_120 != Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_120)
	{
		sVar0 = func_606(iParam0, 0);
		return sVar0;
	}
	if (((func_265(iParam0, 28) || func_265(unk_0x95B959F18401C09A(), 28)) || func_605(iParam0)) && !func_604(iParam0))
	{
		return func_606(iParam0, 0);
	}
	iVar1 = func_46(iParam0);
	if (iVar1 != func_18())
	{
		if (iVar1 != unk_0x95B959F18401C09A())
		{
			if (!unk_0xDB36A8F522CBC12D() && !unk_0x59D656DCC6383E85(0, -1, 1))
			{
				return func_606(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_18())
	{
		sVar0 = func_608(&(Global_1626536[iVar1 /*603*/].f_11.f_104));
		if (unk_0x786AF4A44E1B5B4B(sVar0))
		{
			return func_606(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_604(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_47(iParam0) };
	if (unk_0xDB36A8F522CBC12D())
	{
		if (unk_0xE9FD52A86479B22B(0))
		{
			if (unk_0x8CB86A22FA87265D(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_605(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_18())
	{
		Var0 = { func_47(iParam0) };
		if (unk_0xF5DB888C353E2BED() || unk_0x4CE1DD5CFC1F941E())
		{
			if (unk_0xE9FD52A86479B22B(0))
			{
				return 0;
			}
		}
		else if (unk_0xDB36A8F522CBC12D())
		{
			if (unk_0xE9FD52A86479B22B(0))
			{
				if (unk_0x8CB86A22FA87265D(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

char* func_606(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_245(iParam0, 1))
		{
			return func_607();
		}
	}
	return unk_0x434854E9CAE13C4A("GB_REST_ACC");
}

char* func_607()
{
	return unk_0x434854E9CAE13C4A("GB_REST_ACCM");
}

var func_608(var uParam0)
{
	return uParam0;
}

int func_609(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0xFAC8F20FBC764F4D())
	{
		return 0;
	}
	if (func_614())
	{
		return 0;
	}
	if (!unk_0x73DA1542B2F0C458())
	{
		return 0;
	}
	if (func_357())
	{
		return 0;
	}
	if (func_589())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_83(unk_0x95B959F18401C09A(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_613(unk_0x95B959F18401C09A()))
		{
			return 0;
		}
	}
	if (func_612())
	{
		return 0;
	}
	if (unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		return 0;
	}
	if (unk_0xD9C92B0885A075F8())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A()))
		{
			return 0;
		}
	}
	if (Global_1574174)
	{
		return 0;
	}
	if (func_611())
	{
		return 0;
	}
	if (func_610())
	{
		return 0;
	}
	if (func_350())
	{
		return 0;
	}
	if (Global_68807)
	{
		return 0;
	}
	if (Global_2538126)
	{
		return 0;
	}
	if (func_409(unk_0x95B959F18401C09A()))
	{
		return 0;
	}
	return 1;
}

bool func_610()
{
	return Global_2448756.f_579;
}

bool func_611()
{
	return Global_2448756.f_732;
}

bool func_612()
{
	return Global_2437364.f_3032.f_578;
}

int func_613(int iParam0)
{
	if (Global_2424047[iParam0 /*416*/].f_208 == 0)
	{
		return 0;
	}
	return 1;
}

int func_614()
{
	if (Global_15866 != 0 || unk_0x12BF789190D82474())
	{
		return 1;
	}
	return 0;
}

bool func_615(int iParam0)
{
	return Global_2437364.f_2708[0 /*80*/].f_1 == iParam0;
}

void func_616(char* sParam0, int iParam1, char* sParam2, int iParam3, var uParam4, bool bParam5)
{
	if (func_617(sParam0, unk_0xEEF8394DB3D3DFA1(iParam1), sParam2, bParam5, iParam3))
	{
		Global_1312585 = 15;
		Global_1312585.f_56 = iParam3;
		Global_1312585.f_57 = uParam4;
		Global_1312585.f_54 = iParam1;
	}
}

int func_617(char* sParam0, char* sParam1, char* sParam2, bool bParam3, var uParam4)
{
	if (unk_0x786AF4A44E1B5B4B(sParam0))
	{
		return 0;
	}
	if (unk_0x85731B98C6C759D5(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0x786AF4A44E1B5B4B(sParam1))
	{
		return 0;
	}
	if (unk_0x85731B98C6C759D5(sParam1) > 63)
	{
		return 0;
	}
	if (unk_0x786AF4A44E1B5B4B(sParam2))
	{
		return 0;
	}
	if (unk_0x85731B98C6C759D5(sParam2) > 63)
	{
		return 0;
	}
	if (func_627(sParam0, sParam1, sParam2) && Global_1312585.f_56 == Global_1312585.f_58)
	{
		return 0;
	}
	func_621();
	Global_1312585 = 10;
	StringCopy(&(Global_1312585.f_1), unk_0xD178EF744F20B712(), 32);
	Global_1312585.f_9 = unk_0x36163153849DFDA1(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	StringCopy(&(Global_1312585.f_16), sParam1, 64);
	StringCopy(&(Global_1312585.f_32), sParam2, 64);
	Global_1312585.f_58 = uParam4;
	Global_1312585.f_56 = uParam4;
	func_620();
	func_619(bParam3);
	func_618();
	return 1;
}

void func_618()
{
	unk_0x8950ED5730F62EE8(&(Global_1312585.f_59), 1);
}

void func_619(bool bParam0)
{
	if (bParam0)
	{
		unk_0x8950ED5730F62EE8(&(Global_1312585.f_59), 0);
		return;
	}
	unk_0xCE689A8E8C42ED78(&(Global_1312585.f_59), 0);
}

void func_620()
{
	Global_1312585.f_10 = unk_0x6985FC3098CCA0EB(unk_0x78DCC5D0CB43DEBA(), 86400000);
	Global_1312585.f_11 = unk_0x78DCC5D0CB43DEBA();
}

void func_621()
{
	func_623();
	func_622(0);
}

void func_622(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0xB331FCEB94EB05C8();
	Global_1312585 = 20;
	StringCopy(&(Global_1312585.f_1), "", 32);
	Global_1312585.f_9 = 0;
	if (bVar0)
	{
		Global_1312585.f_10 = unk_0x78DCC5D0CB43DEBA();
		Global_1312585.f_11 = unk_0x78DCC5D0CB43DEBA();
	}
	StringCopy(&(Global_1312585.f_12), "", 16);
	StringCopy(&(Global_1312585.f_16), "", 64);
	StringCopy(&(Global_1312585.f_32), "", 64);
	Global_1312585.f_52 = 0;
	Global_1312585.f_53 = 0;
	Global_1312585.f_54 = 0;
	Global_1312585.f_55 = -1;
	Global_1312585.f_56 = 0;
	Global_1312585.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_623()
{
	if (!func_626())
	{
	}
	if (func_625())
	{
		unk_0xA6DAC1F822246DE2(&(Global_1312585.f_12));
		func_624();
		unk_0xFFC12DB0DD7F299E();
	}
}

void func_624()
{
	switch (Global_1312585)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0xE800DC85FDF60F85(Global_1312585.f_52);
			return;
		
		case 2:
			unk_0xE800DC85FDF60F85(Global_1312585.f_52);
			unk_0xE800DC85FDF60F85(Global_1312585.f_53);
			return;
		
		case 3:
			unk_0xFA6BEE2B1507FF1E(&(Global_1312585.f_16));
			return;
		
		case 4:
			unk_0xFA6BEE2B1507FF1E(&(Global_1312585.f_16));
			unk_0xFA6BEE2B1507FF1E(&(Global_1312585.f_32));
			return;
		
		case 5:
			unk_0xD61E5ED1D4E687A5(&(Global_1312585.f_16));
			return;
		
		case 6:
			unk_0x75D3F9044123D4F9(Global_1312585.f_56);
			unk_0xD61E5ED1D4E687A5(&(Global_1312585.f_16));
			return;
		
		case 7:
			unk_0xFA6BEE2B1507FF1E(&(Global_1312585.f_16));
			return;
		
		case 8:
			unk_0x75D3F9044123D4F9(Global_1312585.f_56);
			unk_0xFA6BEE2B1507FF1E(&(Global_1312585.f_16));
			return;
		
		case 9:
			unk_0x21471CA300278599(&(Global_1312585.f_16));
			return;
		
		case 10:
			unk_0xD61E5ED1D4E687A5(&(Global_1312585.f_16));
			unk_0xD61E5ED1D4E687A5(&(Global_1312585.f_32));
			return;
		
		case 12:
			unk_0xD61E5ED1D4E687A5(&(Global_1312585.f_16));
			unk_0xFA6BEE2B1507FF1E(&(Global_1312585.f_32));
			return;
		
		case 13:
			unk_0x75D3F9044123D4F9(Global_1312585.f_56);
			unk_0xFA6BEE2B1507FF1E(&(Global_1312585.f_16));
			unk_0x75D3F9044123D4F9(Global_1312585.f_57);
			unk_0xFA6BEE2B1507FF1E(&(Global_1312585.f_32));
			return;
		
		case 11:
			unk_0x21471CA300278599(&(Global_1312585.f_16));
			return;
		
		case 14:
			unk_0x75D3F9044123D4F9(Global_1312585.f_56);
			unk_0xD61E5ED1D4E687A5(&(Global_1312585.f_16));
			unk_0x75D3F9044123D4F9(Global_1312585.f_56);
			unk_0xFA6BEE2B1507FF1E(&(Global_1312585.f_32));
			return;
		
		case 15:
			unk_0x75D3F9044123D4F9(Global_1312585.f_56);
			unk_0xD61E5ED1D4E687A5(&(Global_1312585.f_16));
			unk_0x75D3F9044123D4F9(Global_1312585.f_57);
			unk_0xFA6BEE2B1507FF1E(&(Global_1312585.f_32));
			return;
		
		case 17:
			unk_0xD61E5ED1D4E687A5(&(Global_1312585.f_16));
			unk_0xD61E5ED1D4E687A5(&(Global_1312585.f_32));
			unk_0x75D3F9044123D4F9(Global_1312585.f_56);
			unk_0xFA6BEE2B1507FF1E(&(Global_1312585.f_48));
			return;
		
		case 16:
			unk_0x75D3F9044123D4F9(Global_1312585.f_56);
			unk_0xD61E5ED1D4E687A5(&(Global_1312585.f_16));
			return;
		
		case 19:
			unk_0x75D3F9044123D4F9(Global_1312585.f_56);
			unk_0xFA6BEE2B1507FF1E(&(Global_1312585.f_16));
			return;
		
		case 18:
			unk_0xD61E5ED1D4E687A5(&(Global_1312585.f_16));
			unk_0x75D3F9044123D4F9(Global_1312585.f_56);
			unk_0xFA6BEE2B1507FF1E(&(Global_1312585.f_48));
			unk_0xD61E5ED1D4E687A5(&(Global_1312585.f_32));
			return;
		
		default:
	}
}

int func_625()
{
	if (Global_1312585 == 20)
	{
		return 0;
	}
	return 1;
}

int func_626()
{
	if (!func_625())
	{
		return 0;
	}
	unk_0x1B3E16C485B8DD94(&(Global_1312585.f_12));
	func_624();
	return unk_0xC8F93D36F11F7BE8();
}

bool func_627(char* sParam0, char* sParam1, char* sParam2)
{
	if (!func_625())
	{
		return 0;
	}
	if (unk_0x786AF4A44E1B5B4B(sParam0))
	{
		return 0;
	}
	if (unk_0x786AF4A44E1B5B4B(sParam1))
	{
		return 0;
	}
	if (unk_0x786AF4A44E1B5B4B(sParam2))
	{
		return 0;
	}
	if (!unk_0x36163153849DFDA1(sParam0) == unk_0x36163153849DFDA1(&(Global_1312585.f_12)))
	{
		return 0;
	}
	if (!unk_0x36163153849DFDA1(sParam1) == unk_0x36163153849DFDA1(&(Global_1312585.f_16)))
	{
		return 0;
	}
	return unk_0x36163153849DFDA1(sParam2) == unk_0x36163153849DFDA1(&(Global_1312585.f_32));
}

int func_628()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_18();
	iVar1 = Local_112.f_7;
	if (iVar1 != -1)
	{
		if (unk_0x1B094AC15936B3DB(unk_0xDD4FFAA17341D382(iVar1)))
		{
			iVar0 = unk_0xEB9DC13235C0B345(unk_0xDD4FFAA17341D382(iVar1));
		}
	}
	return iVar0;
}

void func_629(char* sParam0, bool bParam1)
{
	if (unk_0x786AF4A44E1B5B4B(sParam0))
	{
		return;
	}
	if (unk_0x85731B98C6C759D5(sParam0) > 23)
	{
		return;
	}
	if (func_630(sParam0))
	{
		return;
	}
	func_621();
	Global_1312585 = 0;
	StringCopy(&(Global_1312585.f_1), unk_0xD178EF744F20B712(), 32);
	Global_1312585.f_9 = unk_0x36163153849DFDA1(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	func_620();
	func_619(bParam1);
	func_618();
}

bool func_630(char* sParam0)
{
	if (!func_625())
	{
		return 0;
	}
	if (Global_1312585 == 11)
	{
		return func_631(sParam0);
	}
	if (unk_0x786AF4A44E1B5B4B(sParam0))
	{
		return 0;
	}
	return unk_0x36163153849DFDA1(sParam0) == unk_0x36163153849DFDA1(&(Global_1312585.f_12));
}

bool func_631(char* sParam0)
{
	if (!func_625())
	{
		return 0;
	}
	if (unk_0x786AF4A44E1B5B4B(sParam0))
	{
		return 0;
	}
	return unk_0x36163153849DFDA1(sParam0) == unk_0x36163153849DFDA1(&(Global_1312585.f_16));
}

int func_632(char* sParam0)
{
	if (unk_0x786AF4A44E1B5B4B(sParam0))
	{
		return 0;
	}
	if (!func_625())
	{
		return 0;
	}
	if (Global_1312585 == 11)
	{
		if (unk_0x85731B98C6C759D5(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (unk_0x85731B98C6C759D5(sParam0) > 23)
	{
		return 0;
	}
	return func_630(sParam0);
}

int func_633(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = unk_0x12D3B4C76D4AAB00(iParam1);
	if (unk_0xB4B29C6A8F481EEA(unk_0x95B959F18401C09A(), iParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var2, unk_0xEEF8394DB3D3DFA1(iParam1), 64);
		}
		else
		{
			StringCopy(&Var2, unk_0xEEF8394DB3D3DFA1(iParam1), 64);
		}
		if (unk_0x786AF4A44E1B5B4B(&Var2))
		{
		}
		unk_0x1F85AD4B26B92795(sParam0);
		if ((iVar1 != -1 && unk_0x289064CB38B560AA()) && iVar1 < 4)
		{
			if (Global_4456448.f_133551[iVar1] != -1)
			{
				unk_0x75D3F9044123D4F9(func_660(iVar1, iParam1, 0));
			}
			else
			{
				unk_0x75D3F9044123D4F9(func_641(iParam1, -2, 1, 0, 0));
			}
		}
		else
		{
			unk_0x75D3F9044123D4F9(func_641(iParam1, -2, 1, 0, 0));
		}
		unk_0xD61E5ED1D4E687A5(func_639(&Var2));
		if (!bParam4)
		{
			iVar0 = unk_0x9457C7E9A5E2BC86(0, 1);
		}
		else
		{
			Global_2505680 = { func_47(iParam1) };
			if (unk_0xDD530AC51A578470(&Global_2505610, 35, &Global_2505680))
			{
				iVar3 = 0;
				if (unk_0xCE3CFF625BEBAA04(&(Global_2505610.f_22), "Leader") && Global_2505610.f_30 == 0)
				{
					iVar3 = 1;
				}
				if (Global_2505610.f_21 > 0)
				{
					iVar4 = 0;
				}
				else
				{
					iVar4 = 1;
				}
				if (bParam6)
				{
					if (bParam7)
					{
						Var2 = { func_638(&Var2) };
					}
					iVar0 = unk_0xFB9D4E6534D32F54(iVar4, unk_0x068AEB9AB0499A8A(&Global_2505610, 35), &(Global_2505610.f_17), Global_2505610.f_30, iVar3, 0, Global_2505610, &Var2, Global_1314024, Global_1314025, Global_1314026);
				}
				else
				{
					iVar0 = unk_0x1F65EC88D1B3CAAD(iVar4, unk_0x068AEB9AB0499A8A(&Global_2505610, 35), &(Global_2505610.f_17), Global_2505610.f_30, iVar3, 0, Global_2505610, Global_1314024, Global_1314025, Global_1314026);
				}
			}
			else
			{
				iVar0 = unk_0x9457C7E9A5E2BC86(0, 1);
			}
		}
		func_634(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_634(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_637() || !unk_0x289064CB38B560AA()) || !func_36(unk_0x95B959F18401C09A(), 0))
	{
		return;
	}
	iVar0 = func_635(iParam2);
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

int func_635(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1665914 - 1))
	{
		if (iParam0 > Global_1665914.f_5[iVar0 /*53*/].f_1)
		{
			func_636(iVar0);
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

void func_636(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1665914.f_5[iVar0 /*53*/] = { Global_1665914.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_637()
{
	return unk_0xE9D7B652961D4AA3(-1762644250);
}

struct<16> func_638(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

var func_639(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_640(&cVar0);
}

var func_640(char[4] cParam0)
{
	return cParam0;
}

int func_641(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_120(iParam0) && !bParam4)
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
	if (((func_120(unk_0x95B959F18401C09A()) || (func_659() && func_658())) && !unk_0x0E4018692D92041D(Global_2528542.f_4582, 31)) && !bParam4)
	{
		iVar1 = func_657();
		if (unk_0x765F6FEEFF39224F(iVar1))
		{
			if (unk_0xE09156665EC2D83B(iVar1))
			{
				if (unk_0x5C7617A25D50AAE9(iVar1) != -1)
				{
					if (func_1228(unk_0x5C7617A25D50AAE9(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x289064CB38B560AA()) && iParam1 < 4)
						{
							if (Global_4456448.f_133551[iParam1] != -1)
							{
								return func_660(iParam1, iParam0, 0);
							}
							else
							{
								return func_653(iParam0, unk_0x5C7617A25D50AAE9(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_653(iParam0, unk_0x5C7617A25D50AAE9(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x289064CB38B560AA()) && iParam1 < 4)
			{
				if (Global_4456448.f_133551[iParam1] != -1)
				{
					return func_660(iParam1, iParam0, 0);
				}
				else
				{
					return func_642(0, -1, 0);
				}
			}
			else
			{
				return func_642(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x289064CB38B560AA()) && iParam1 < 4)
	{
		if (Global_4456448.f_133551[iParam1] != -1)
		{
			return func_660(iParam1, iParam0, 0);
		}
		else
		{
			return func_653(iParam0, unk_0x95B959F18401C09A(), iParam1, bParam2, bParam3);
		}
	}
	return func_653(iParam0, unk_0x95B959F18401C09A(), iParam1, bParam2, bParam3);
}

int func_642(bool bParam0, int iParam1, bool bParam2)
{
	return func_643(unk_0x95B959F18401C09A(), bParam0, iParam1, bParam2);
}

int func_643(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0xC4DEA49C5B465481(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x12D3B4C76D4AAB00(iParam0);
	if ((func_652() || (func_651() && func_649())) && Global_1382745.f_1)
	{
		if (bParam1)
		{
			return func_648(iParam2, iVar0);
		}
		else
		{
			return func_648(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_119(iVar0, iParam2, 0) && !unk_0x0E4018692D92041D(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_647(1);
				}
				else
				{
					return func_647(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0x0E4018692D92041D(Global_4456448.f_4, 20))
			{
				return func_644(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_644(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_647(1);
	}
	return func_647(0);
}

int func_644(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_646(iParam0, iParam1, iParam3);
	if (func_645(Global_4456448.f_138474, 1))
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

int func_645(int iParam0, bool bParam1)
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

int func_646(int iParam0, int iParam1, int iParam2)
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
			if (!func_119(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_647(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_648(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_646(iParam1, iParam0, 4);
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

bool func_649()
{
	if (func_650())
	{
		return 1;
	}
	return unk_0x0E4018692D92041D(Global_4456448.f_165254, 4);
}

bool func_650()
{
	return unk_0x0E4018692D92041D(Global_4456448.f_154961, 12);
}

bool func_651()
{
	if (unk_0x289064CB38B560AA())
	{
		return unk_0x0E4018692D92041D(Global_4456448.f_165254, 0);
	}
	return ((unk_0x0E4018692D92041D(Global_4456448.f_165254, 0) || Global_1648547) && unk_0x1BCDA92AD0A7835B(joaat("fm_deathmatch_creator")) > 0);
}

int func_652()
{
	if (func_650() && unk_0x289064CB38B560AA())
	{
		return 1;
	}
	return 0;
}

int func_653(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (func_655(1))
			{
				iVar3 = func_262(iParam0);
				if (!iVar3 == -1)
				{
					return func_260(iVar3);
				}
			}
			if ((func_154(iParam1, iParam0, iVar0, 0) && !unk_0x0E4018692D92041D(Global_4456448.f_15, 18)) || ((func_119(unk_0x12D3B4C76D4AAB00(iParam1), unk_0x12D3B4C76D4AAB00(iParam0), 0) && unk_0x0E4018692D92041D(Global_4456448.f_15, 23)) && !unk_0x0E4018692D92041D(Global_4456448.f_15, 18)))
			{
				return func_647(1);
			}
			else if (unk_0x0E4018692D92041D(Global_4456448.f_15, 26))
			{
				return func_654(1);
			}
			else
			{
				return func_643(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574400 || Global_1574391) || Global_1589819[iParam0 /*818*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574400 == 1 && Global_1574410 == 0))
			{
				return func_647(1);
			}
			else
			{
				return func_643(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574395 && Global_1573892.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_262(iParam0);
	if (!iVar4 == -1)
	{
		return func_260(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_654(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

int func_655(int iParam0)
{
	if ((func_241() || func_656()) || (func_42() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_656()
{
	return Global_2448756.f_15;
}

var func_657()
{
	return Global_2359302.f_2;
}

bool func_658()
{
	return unk_0x0E4018692D92041D(Global_2359302, 4);
}

bool func_659()
{
	return unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_39.f_18, 14);
}

int func_660(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969025.f_13[iParam0];
	if (func_655(1))
	{
		iVar2 = func_262(iParam1);
		if (!iVar2 == -1)
		{
			return func_260(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0x0E4018692D92041D(Global_4456448.f_105[iParam0 /*11309*/].f_5586[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_18())
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
			iVar0 = func_643(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0x0E4018692D92041D(Global_4456448.f_21, 13))
		{
			iVar0 = func_661(iParam0);
		}
		if (unk_0x0E4018692D92041D(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (unk_0x0E4018692D92041D(Global_4456448.f_15, 26) && !func_119(iParam0, unk_0x12D3B4C76D4AAB00(iParam1), 0))
		{
			iVar0 = func_654(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_661(int iParam0)
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

int func_662()
{
	switch (func_1100())
	{
		case 1:
			return func_663();
		
		case 0:
		case 2:
		case 3:
			return func_544();
		
		default:
	}
	return 0;
}

int func_663()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_628();
	if (iVar0 == func_18())
	{
		return 0;
	}
	if (iVar0 == unk_0x95B959F18401C09A())
	{
		return 1;
	}
	iVar1 = func_545();
	if (iVar1 != func_18())
	{
		if (func_16(iVar0, iVar1, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_664()
{
	if (unk_0xE38E3CF1625A4145(iLocal_124))
	{
		return;
	}
	if (!func_1116() && !func_381())
	{
		return;
	}
	if (func_367(unk_0x95B959F18401C09A()) < 1)
	{
		if (unk_0xE38E3CF1625A4145(iLocal_124))
		{
			unk_0x1ABDB383C83A336A(&iLocal_124);
		}
		return;
	}
	iLocal_124 = unk_0x8848A15CBDADDC60(unk_0xFC00F22E930BFD55(Local_112.f_29[0]));
	unk_0x67110AB55548E699(iLocal_124, 1);
	unk_0x983D75D9630FD905(iLocal_124, true);
	unk_0xC51C58C963968740(iLocal_124, 12);
	unk_0xA20C1DE21F2F071C(iLocal_124, 421);
	unk_0xCE5C49921A521962(iLocal_124, Global_262145.f_12246);
	unk_0x1C95CD840303FC37(iLocal_124, "GB_AST_RHN");
	if (func_1116())
	{
		func_665(&iLocal_124, 9);
	}
	else
	{
		func_665(&iLocal_124, 6);
	}
	if (func_1116())
	{
		if (!unk_0x0E4018692D92041D(iLocal_114, 0))
		{
			unk_0x0E734BC61706D976(iLocal_124, 1);
			unk_0x43598712EC9E921C(iLocal_124, 7000);
			unk_0x0B1FD891620F7745();
			unk_0x8950ED5730F62EE8(&iLocal_114, 0);
		}
	}
}

void func_665(int iParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xE38E3CF1625A4145(*iParam0))
	{
		iVar0 = func_666(iParam1);
		unk_0xB9E84A421C105943(*iParam0, iVar0);
	}
}

int func_666(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	unk_0x1256E5EA03020804(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_667()
{
	if (!func_625())
	{
		return;
	}
	if (!unk_0x36163153849DFDA1(unk_0xD178EF744F20B712()) == Global_1312585.f_9)
	{
		return;
	}
	func_621();
}

void func_668(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_670(iParam0))
	{
		return;
	}
	if (func_669(&(Global_2416063.f_746[iParam0]), &(Global_2416063.f_1109[iParam0]), &(Global_2416063.f_389), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2416063.f_548[iParam0] = uParam1;
		}
	}
}

int func_669(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)
{
	if (bParam5)
	{
		if (!unk_0x8ED4328770BEE4A1(*uParam1) || *uParam1 == unk_0x8C40DC84EDF05997())
		{
			*uParam1 = unk_0x8C40DC84EDF05997();
			*uParam0 = unk_0x8C40DC84EDF05997();
		}
	}
	if (!unk_0x8ED4328770BEE4A1(*uParam0) || *uParam0 == unk_0x8C40DC84EDF05997())
	{
		if (bParam3)
		{
			if (!unk_0x0E4018692D92041D(*iParam2, iParam4))
			{
				*uParam6 = 1;
				unk_0x8950ED5730F62EE8(iParam2, iParam4);
			}
			*uParam0 = unk_0x8C40DC84EDF05997();
		}
		else
		{
			if (unk_0x0E4018692D92041D(*iParam2, iParam4))
			{
				*uParam6 = 1;
				unk_0xCE689A8E8C42ED78(iParam2, iParam4);
			}
			if (*uParam1 == unk_0x8C40DC84EDF05997())
			{
				*uParam1 = -1;
			}
			*uParam0 = -1;
		}
		return 1;
	}
	else if (unk_0x8ED4328770BEE4A1(*uParam1) && !*uParam1 == unk_0x8C40DC84EDF05997())
	{
	}
	return 0;
}

int func_670(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 1;
	}
	if (unk_0x36163153849DFDA1(unk_0xD178EF744F20B712()) == func_425())
	{
		return 1;
	}
	return 0;
}

void func_671(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x8950ED5730F62EE8(&(Global_2416063.f_365), iParam0);
	}
	else
	{
		unk_0xCE689A8E8C42ED78(&(Global_2416063.f_365), iParam0);
	}
	if (unk_0xE38E3CF1625A4145(Global_2416063[iParam0]))
	{
		if (bParam1)
		{
			unk_0xD99530E6E53B24BF(Global_2416063[iParam0], false);
		}
		else
		{
			unk_0xD99530E6E53B24BF(Global_2416063[iParam0], true);
		}
	}
}

void func_672(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_670(iParam0))
	{
		return;
	}
	if (func_669(&(Global_2416063.f_812[iParam0]), &(Global_2416063.f_1175[iParam0]), &(Global_2416063.f_364), bParam1, iParam0, bParam3, &uVar0))
	{
		func_671(iParam0, bParam2);
	}
}

void func_673(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_670(iParam0))
	{
		return;
	}
	if (func_669(&(Global_2416063.f_614[iParam0]), &(Global_2416063.f_977[iParam0]), &(Global_2416063.f_386), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2416063.f_449[iParam0] = iParam1;
		}
	}
}

void func_674(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	
	if (func_670(iParam0))
	{
		return;
	}
	if (func_669(&(Global_2416063.f_581[iParam0]), &(Global_2416063.f_944[iParam0]), &(Global_2416063.f_385), bParam2, iParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_2416063.f_416[iParam0] = iParam1;
		}
		if (bVar0)
		{
			func_675();
		}
	}
}

void func_675()
{
	Global_2416063.f_1509 = 1;
}

void func_676()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	bool bVar7;
	struct<8> Var8;
	int iVar9;
	var uVar10;
	char* sVar11;
	int iVar12;
	
	if (Local_112.f_3 == 1)
	{
		return;
	}
	if (!func_552())
	{
		if (iLocal_125 != -2)
		{
			if (iLocal_125 > -1)
			{
				iVar2 = unk_0xDD4FFAA17341D382(iLocal_125);
				if (unk_0x1B094AC15936B3DB(iVar2))
				{
					iVar0 = unk_0xEB9DC13235C0B345(iVar2);
					if (iVar0 != unk_0x95B959F18401C09A())
					{
						func_674(iVar0, 457, 0, 0);
						if (!func_1116())
						{
							func_673(iVar0, 1, 0, 0);
							func_672(iVar0, 0, 0, 0);
							func_671(iVar0, 0);
							func_668(iVar0, Global_262145.f_12246, 0, 0);
						}
						else if (Local_112.f_9 > -1)
						{
							iVar1 = unk_0x7C1C88877E8AAA50(Local_112.f_9);
							if (unk_0xC4DEA49C5B465481(iVar1))
							{
								if (!func_16(iVar0, iVar1, 1))
								{
									func_673(iVar0, 1, 0, 0);
									func_672(iVar0, 0, 0, 0);
									func_671(iVar0, 0);
									func_668(iVar0, Global_262145.f_12246, 0, 0);
								}
							}
						}
					}
				}
			}
			else if (unk_0xE38E3CF1625A4145(iLocal_121))
			{
				unk_0x1ABDB383C83A336A(&iLocal_121);
			}
			if (unk_0xE38E3CF1625A4145(iLocal_122))
			{
				unk_0x1ABDB383C83A336A(&iLocal_122);
			}
			iLocal_125 = -2;
			func_667();
		}
		return;
	}
	if (iLocal_125 != Local_112.f_5)
	{
		if (Local_112.f_5 == -1)
		{
			if (func_552())
			{
				if (func_367(unk_0x95B959F18401C09A()) >= 1)
				{
					iVar2 = unk_0xDD4FFAA17341D382(iLocal_125);
					if (unk_0x1B094AC15936B3DB(iVar2))
					{
						iVar0 = unk_0xEB9DC13235C0B345(iVar2);
						if (iVar0 != unk_0x95B959F18401C09A())
						{
							func_674(iVar0, 457, 0, 0);
							if (!func_1116())
							{
								func_673(iVar0, 1, 0, 0);
								func_672(iVar0, 0, 0, 0);
								func_671(iVar0, 0);
								func_668(iVar0, Global_262145.f_12246, 0, 0);
							}
							else if (Local_112.f_9 > -1)
							{
								iVar1 = unk_0x7C1C88877E8AAA50(Local_112.f_9);
								if (unk_0xC4DEA49C5B465481(iVar1))
								{
									if (!func_16(iVar0, iVar1, 1))
									{
										func_673(iVar0, 1, 0, 0);
										func_672(iVar0, 0, 0, 0);
										func_671(iVar0, 0);
										func_668(iVar0, Global_262145.f_12246, 0, 0);
									}
								}
							}
						}
					}
					if (unk_0x0E4018692D92041D(Local_112.f_1, 6))
					{
						func_698("GB_AST_TCKD", 1);
					}
				}
			}
		}
		else
		{
			if (iLocal_125 != -1)
			{
				if (iLocal_125 > -1)
				{
					iVar2 = unk_0xDD4FFAA17341D382(iLocal_125);
					if (unk_0x1B094AC15936B3DB(iVar2))
					{
						iVar0 = unk_0xEB9DC13235C0B345(iVar2);
						if (iVar0 != unk_0x95B959F18401C09A())
						{
							if (func_367(unk_0x95B959F18401C09A()) >= 1)
							{
								func_674(iVar0, 457, 0, 0);
								if (!func_1116())
								{
									func_673(iVar0, 1, 0, 0);
									func_672(iVar0, 0, 0, 0);
									func_671(iVar0, 0);
									func_668(iVar0, Global_262145.f_12246, 0, 0);
								}
							}
						}
					}
				}
			}
			iVar2 = unk_0xDD4FFAA17341D382(Local_112.f_5);
			if (unk_0x1B094AC15936B3DB(iVar2))
			{
				if (func_552())
				{
					if (func_367(unk_0x95B959F18401C09A()) >= 1)
					{
						iVar0 = unk_0xEB9DC13235C0B345(iVar2);
						if (func_1228(iVar0, 1, 1))
						{
							if (unk_0xE38E3CF1625A4145(iLocal_121))
							{
								unk_0x1ABDB383C83A336A(&iLocal_121);
							}
							if (iVar0 != unk_0x95B959F18401C09A())
							{
								if (!func_1116())
								{
									if (!func_544())
									{
										func_674(iVar0, 457, 1, 0);
										func_672(iVar0, 1, 1, 0);
										func_673(iVar0, 1, 1, 0);
										func_671(iVar0, 1);
										func_668(iVar0, Global_262145.f_12246, 1, 0);
									}
									else
									{
										func_674(iVar0, 457, 1, 0);
										func_668(iVar0, Global_262145.f_12246, 1, 0);
									}
								}
								else if (func_544())
								{
									func_674(iVar0, 457, 1, 0);
									func_668(iVar0, Global_262145.f_12246, 1, 0);
								}
								else
								{
									func_674(iVar0, 457, 1, 0);
									func_672(iVar0, 1, 1, 0);
									func_673(iVar0, 1, 1, 0);
									func_671(iVar0, 1);
									func_668(iVar0, Global_262145.f_12246, 1, 0);
								}
							}
							if (iVar0 != unk_0x95B959F18401C09A())
							{
								func_633("GB_AST_TCKC", iVar0, 0, 0, 0, 1, 1, 0);
							}
						}
					}
				}
			}
		}
		iLocal_125 = Local_112.f_5;
	}
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		if (unk_0x4F94F07DAD382CDA(Local_112.f_12))
		{
			if (!unk_0x0E4018692D92041D(Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_1, 2))
			{
				if (unk_0x5A4FB33F5B279A76(unk_0xE4B835FDC8B9B086(Local_112.f_12), unk_0x33CD235DF1E6A94E()))
				{
					unk_0x8950ED5730F62EE8(&(Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_1), 2);
					func_697(1);
					func_384();
					if (func_381())
					{
						func_386(0);
						unk_0x8950ED5730F62EE8(&(Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_1), 6);
					}
					if (!func_696())
					{
						func_695(1, 0, 0);
					}
					if (unk_0xFF29C0328E1D9F8D(unk_0x33CD235DF1E6A94E()))
					{
						if (unk_0x6F3D61B58C7B4025(Local_112.f_12))
						{
							unk_0x35F11A916FDFCF32(unk_0xE4B835FDC8B9B086(Local_112.f_12), 1, 1);
							unk_0x8950ED5730F62EE8(&iLocal_114, 12);
						}
					}
					else if (unk_0x0E4018692D92041D(iLocal_114, 12))
					{
						unk_0xCE689A8E8C42ED78(&iLocal_114, 12);
						unk_0xCE689A8E8C42ED78(&iLocal_114, 13);
					}
					iLocal_129 = unk_0x8CCC0A0504C52531();
					if (func_321(1))
					{
						unk_0x0F8EAEEC97DDBCB3(iLocal_129, "Pickup_Briefcase", "GTAO_Biker_Modes_Soundset", false);
					}
					else
					{
						unk_0x0F8EAEEC97DDBCB3(iLocal_129, "Pickup_Briefcase", "GTAO_Magnate_Boss_Modes_Soundset", false);
					}
					if (func_694(unk_0x33CD235DF1E6A94E()))
					{
						if (unk_0x6F3D61B58C7B4025(Local_112.f_12))
						{
							unk_0x35F11A916FDFCF32(unk_0xE4B835FDC8B9B086(Local_112.f_12), 1, 1);
							unk_0xC7C47D4054903839(unk_0xE4B835FDC8B9B086(Local_112.f_12), vLocal_117, 0, 0, 1);
						}
					}
				}
			}
			else if (!unk_0x5A4FB33F5B279A76(unk_0xE4B835FDC8B9B086(Local_112.f_12), unk_0x33CD235DF1E6A94E()))
			{
				unk_0xCE689A8E8C42ED78(&(Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_1), 2);
				if (func_696())
				{
					func_695(0, 0, 0);
				}
				if (unk_0x72B85B341ADBE9DE() != Local_112.f_8)
				{
					func_697(0);
				}
				if (unk_0x0E4018692D92041D(iLocal_114, 12))
				{
					unk_0xCE689A8E8C42ED78(&iLocal_114, 12);
					unk_0xCE689A8E8C42ED78(&iLocal_114, 13);
				}
			}
			else
			{
				if (func_694(unk_0x33CD235DF1E6A94E()))
				{
					if (unk_0x6F3D61B58C7B4025(Local_112.f_12))
					{
						unk_0x35F11A916FDFCF32(unk_0xE4B835FDC8B9B086(Local_112.f_12), 1, 1);
						unk_0xC7C47D4054903839(unk_0xE4B835FDC8B9B086(Local_112.f_12), vLocal_117, 0, 0, 1);
					}
				}
				if (unk_0x0E4018692D92041D(iLocal_114, 12))
				{
					if (!unk_0x0E4018692D92041D(iLocal_114, 13))
					{
						if (func_609(0, 1, 1, 1))
						{
							func_693("GB_ASLT_SUB", -1);
							unk_0x8950ED5730F62EE8(&iLocal_114, 13);
						}
					}
				}
			}
		}
	}
	else if (unk_0x0E4018692D92041D(Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_1, 2))
	{
		unk_0xCE689A8E8C42ED78(&(Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_1), 2);
	}
	if (iLocal_125 == -1)
	{
		if (func_552())
		{
			if (!unk_0xE38E3CF1625A4145(iLocal_121))
			{
				if (unk_0x4F94F07DAD382CDA(Local_112.f_12))
				{
					func_692();
				}
			}
			else if (!unk_0x0E4018692D92041D(iLocal_114, 5))
			{
				if (unk_0x0E4018692D92041D(Local_112.f_1, 6))
				{
					unk_0x8950ED5730F62EE8(&iLocal_114, 5);
					unk_0x1ABDB383C83A336A(&iLocal_121);
				}
			}
			if (!unk_0x0E4018692D92041D(Local_112.f_1, 6))
			{
				if (func_367(unk_0x95B959F18401C09A()) >= 1)
				{
					if (unk_0x4F94F07DAD382CDA(Local_112.f_13[0]))
					{
						if (!func_10(Local_112.f_13[0]))
						{
							unk_0x1256E5EA03020804(6, &iVar3, &iVar4, &iVar5, &uVar6);
							unk_0xBE9D0FB56A2D798F(2, unk_0xFBB1F99A825CAB09(unk_0xBB28786B7F552D0B(Local_112.f_13[0]), true) + Vector(2f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, iVar3, iVar4, iVar5, 100, 1, 1, 2, 0, 0, 0, false);
						}
					}
				}
			}
		}
		if (unk_0xE38E3CF1625A4145(iLocal_122))
		{
			unk_0x1ABDB383C83A336A(&iLocal_122);
		}
	}
	else if (iLocal_125 == unk_0x72B85B341ADBE9DE())
	{
		if (unk_0xE38E3CF1625A4145(iLocal_121))
		{
			unk_0x1ABDB383C83A336A(&iLocal_121);
		}
		if (!unk_0x0E4018692D92041D(Local_112.f_1, 1))
		{
			if (func_367(unk_0x95B959F18401C09A()) >= 1)
			{
				if (!unk_0xE38E3CF1625A4145(iLocal_122))
				{
					iLocal_122 = unk_0x2C0ED4741A007C6A(func_24());
					unk_0x1C316779E36C1967(iLocal_122, true);
				}
			}
			else if (unk_0xE38E3CF1625A4145(iLocal_122))
			{
				unk_0x1ABDB383C83A336A(&iLocal_122);
			}
		}
		else if (unk_0xE38E3CF1625A4145(iLocal_122))
		{
			unk_0x1ABDB383C83A336A(&iLocal_122);
		}
	}
	else
	{
		if (unk_0xE38E3CF1625A4145(iLocal_121))
		{
			unk_0x1ABDB383C83A336A(&iLocal_121);
		}
		iVar0 = func_543();
		if (iVar0 != func_18())
		{
			if (func_1097(1))
			{
				iVar1 = func_545();
				if (iVar1 != func_18())
				{
					if (func_16(iVar0, iVar1, 1))
					{
						if (!unk_0x0E4018692D92041D(Local_112.f_1, 1))
						{
							if (func_367(unk_0x95B959F18401C09A()) >= 1)
							{
								if (!unk_0xE38E3CF1625A4145(iLocal_122))
								{
									iLocal_122 = unk_0x2C0ED4741A007C6A(func_24());
									unk_0x1C316779E36C1967(iLocal_122, true);
								}
							}
						}
						else if (unk_0xE38E3CF1625A4145(iLocal_122))
						{
							unk_0x1ABDB383C83A336A(&iLocal_122);
						}
					}
				}
			}
		}
		bVar7 = false;
		if (func_552())
		{
			if (func_367(unk_0x95B959F18401C09A()) >= 1)
			{
				if (unk_0x0E4018692D92041D(Local_112.f_1, 6))
				{
					if (iVar0 != func_18())
					{
						iVar1 = func_545();
						if (func_1097(1))
						{
							if (unk_0xC4DEA49C5B465481(iVar1))
							{
								if (iVar1 != func_18() && func_16(iVar0, iVar1, 1))
								{
								}
								else
								{
									unk_0x1256E5EA03020804(6, &iVar3, &iVar4, &iVar5, &uVar6);
									bVar7 = true;
								}
							}
						}
						else
						{
							unk_0x1256E5EA03020804(6, &iVar3, &iVar4, &iVar5, &uVar6);
							bVar7 = true;
						}
						if (bVar7)
						{
							if (!unk_0xBC2FC12AD0FBF72E(unk_0x378BD4B3881338C2(iVar0)))
							{
								if (unk_0xF0D230FB550CD6EB(unk_0x378BD4B3881338C2(iVar0), 0) && unk_0x91D5C8283D19AF49(unk_0xF2C96862595654B4(unk_0x378BD4B3881338C2(iVar0), 1), 0))
								{
									func_593(unk_0xF2C96862595654B4(unk_0x378BD4B3881338C2(iVar0), 1), iVar3, iVar4, iVar5, 0);
								}
								else
								{
									unk_0xBE9D0FB56A2D798F(2, unk_0xFBB1F99A825CAB09(unk_0x378BD4B3881338C2(iVar0), true) + Vector(2f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, iVar3, iVar4, iVar5, 100, 1, 1, 2, 0, 0, 0, false);
								}
							}
						}
					}
				}
			}
		}
	}
	if (!unk_0x0E4018692D92041D(Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_1, 4))
	{
		unk_0x8950ED5730F62EE8(&(Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_1), 4);
	}
	if (func_552())
	{
		if (func_367(unk_0x95B959F18401C09A()) > 2)
		{
			if (!unk_0x0E4018692D92041D(iLocal_115, 6))
			{
				if (unk_0x0E4018692D92041D(Local_112.f_1, 6))
				{
					if (iLocal_125 == -1)
					{
						if (func_1116())
						{
							if (!func_632("GB_AST_RETP"))
							{
								func_629("GB_AST_RETP", 0);
							}
						}
						else if (func_381())
						{
							if (!func_632("GB_AST_RETP"))
							{
								func_629("GB_AST_RETP", 0);
							}
						}
					}
					else if (iLocal_125 == unk_0x72B85B341ADBE9DE())
					{
						if (!func_632("GB_AST_DROP"))
						{
							func_629("GB_AST_DROP", 0);
						}
					}
					else
					{
						iVar0 = func_543();
						if (iVar0 != func_18())
						{
							if (func_1097(1))
							{
								iVar1 = func_545();
								if (iVar1 != func_18() && func_16(iVar0, iVar1, 1))
								{
									if (!func_632("GB_AST_DROPB"))
									{
										iVar9 = func_262(iVar0);
										if (iVar9 > -1)
										{
											uVar10 = func_260(iVar9);
											func_616("GB_AST_DROPB", iVar0, "GB_AST_BRIEF", 1, uVar10, 0);
										}
									}
								}
								else if (!func_19(iVar0, 1))
								{
									if (!func_632("GB_AST_RETNG"))
									{
										func_689("GB_AST_RETNG", iVar0, 1, 0);
									}
								}
								else if (!func_632("GB_AST_RETGR"))
								{
									sVar11 = func_603(iVar0);
									func_686("GB_AST_RETGR", sVar11, 1, 0);
								}
							}
							else if (!func_19(iVar0, 1))
							{
								if (!func_632("GB_AST_RETNG"))
								{
									func_689("GB_AST_RETNG", iVar0, 1, 0);
								}
							}
							else if (!func_632("GB_AST_RETGR"))
							{
								sVar11 = func_603(iVar0);
								func_686("GB_AST_RETGR", sVar11, 1, 0);
							}
						}
					}
				}
				else
				{
					Var8 = { func_685() };
					if (!func_632(&Var8))
					{
						func_629(&Var8, 0);
					}
				}
			}
		}
		else
		{
			func_667();
		}
	}
	else
	{
		func_667();
	}
	if (!unk_0x0E4018692D92041D(iLocal_114, 2))
	{
		if (func_381())
		{
			if (!func_615(86))
			{
				if (func_367(unk_0x95B959F18401C09A()) >= 1)
				{
					if (func_609(0, 1, 1, 1))
					{
						sVar11 = func_603(unk_0x7C1C88877E8AAA50(Local_112.f_9));
						iVar12 = func_602(unk_0x7C1C88877E8AAA50(Local_112.f_9));
						if (func_1097(1))
						{
							if (Local_112.f_5 > -1)
							{
								func_601("GB_AST_HELP2", sVar11, iVar12, -1);
							}
							else
							{
								func_601("GB_AST_HELP22", sVar11, iVar12, -1);
							}
						}
						else if (Local_112.f_5 > -1)
						{
							func_601("GB_AST_HELP5", sVar11, iVar12, -1);
						}
						else
						{
							func_601("GB_AST_HELP52", sVar11, iVar12, -1);
						}
						func_600(1);
						unk_0x8950ED5730F62EE8(&iLocal_114, 2);
					}
				}
			}
		}
	}
	func_679();
	func_678();
	func_677();
}

void func_677()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (!func_552())
	{
		return;
	}
	if (func_367(unk_0x95B959F18401C09A()) >= 1)
	{
		if (unk_0x22C3124A898FB82A(Local_112.f_12) && !unk_0xD62C4419A41F106A(unk_0xE4B835FDC8B9B086(Local_112.f_12), 0))
		{
			if (!unk_0x47904E0914F5B5C6(unk_0xE4B835FDC8B9B086(Local_112.f_12)))
			{
				if (!unk_0x0E4018692D92041D(Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_1, 3) && !unk_0x0E4018692D92041D(Local_112.f_1, 1))
				{
					unk_0x1256E5EA03020804(18, &iVar0, &iVar1, &iVar2, &uVar3);
					unk_0xBE9D0FB56A2D798F(2, unk_0xFBB1F99A825CAB09(unk_0xF2D53AA87148ACED(Local_112.f_12), true) + Vector(1f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, iVar0, iVar1, iVar2, 100, 1, 1, 2, 0, 0, 0, false);
				}
			}
		}
	}
}

void func_678()
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	
	iVar0 = func_543();
	vVar1 = { func_24() };
	if (unk_0xE38E3CF1625A4145(iLocal_122))
	{
		unk_0x1256E5EA03020804(12, &iVar2, &iVar3, &iVar4, &uVar5);
		unk_0xBE9D0FB56A2D798F(1, vVar1, 0f, 0f, 0f, 0f, 0f, 0f, 0.6f, 0.6f, 1f, iVar2, iVar3, iVar4, 100, 0, 0, 2, 0, 0, 0, false);
	}
	if (!unk_0x0E4018692D92041D(Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_1, 3))
	{
		if (iVar0 == unk_0x95B959F18401C09A())
		{
			if (!unk_0xBC2FC12AD0FBF72E(unk_0x378BD4B3881338C2(iVar0)))
			{
				if (unk_0x18FB647D79B09657(unk_0x378BD4B3881338C2(iVar0), vVar1, 6f, 6f, 2f, false, true, 0))
				{
					unk_0x8950ED5730F62EE8(&(Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_1), 3);
				}
			}
		}
	}
}

void func_679()
{
	vector3 vVar0;
	bool bVar1;
	struct<35> Var2;
	
	switch (iLocal_130)
	{
		case 0:
			if (unk_0x4F94F07DAD382CDA(Local_112.f_12))
			{
				vVar0 = { unk_0xFBB1F99A825CAB09(unk_0xF2D53AA87148ACED(Local_112.f_12), true) };
				if (!func_437(vLocal_132, 0f, 0f, 0f, 0))
				{
					vLocal_132 = { 0f, 0f, 0f };
				}
				if (func_680(vVar0, iLocal_131, 0))
				{
					iLocal_130++;
				}
				if (iLocal_130 == 0)
				{
					iLocal_131++;
				}
				if (iLocal_131 >= 36)
				{
					iLocal_131 = 0;
				}
			}
			break;
		
		case 1:
			if (Local_112.f_5 == -1)
			{
				if (unk_0x6F3D61B58C7B4025(Local_112.f_12))
				{
					bVar1 = true;
					if (func_437(vLocal_132, 0f, 0f, 0f, 0))
					{
						vLocal_132 = { unk_0xFBB1F99A825CAB09(unk_0xF2D53AA87148ACED(Local_112.f_12), true) };
					}
				}
			}
			else if (Local_112.f_5 == unk_0x72B85B341ADBE9DE())
			{
				if (unk_0x6F3D61B58C7B4025(Local_112.f_12))
				{
					if (func_437(vLocal_132, 0f, 0f, 0f, 0))
					{
						vLocal_132 = { unk_0xFBB1F99A825CAB09(unk_0xF2D53AA87148ACED(Local_112.f_12), true) };
					}
					bVar1 = true;
				}
				else
				{
					unk_0x254D3936DA813A55(Local_112.f_12);
				}
			}
			if (bVar1)
			{
				Var2.f_5 = 1115815936;
				Var2.f_13 = 2;
				Var2.f_20 = 2;
				Var2.f_32 = -1082130432;
				Var2.f_34 = 1;
				Var2.f_3 = 0;
				Var2.f_5 = 1f;
				Var2.f_13[0 /*3*/] = { vLocal_132 };
				Var2.f_20[0] = 8f;
				Var2.f_20[0] = 100f;
				if (unk_0x6F3D61B58C7B4025(Local_112.f_12))
				{
					if (func_51(vLocal_132, 20f, &vLocal_133, &uLocal_134, &Var2))
					{
						vLocal_133 = { vLocal_133 + Vector(0.5f, 0f, 0f) };
						if (unk_0x5A4FB33F5B279A76(unk_0xE4B835FDC8B9B086(Local_112.f_12), unk_0x33CD235DF1E6A94E()))
						{
							unk_0x05E692E6C0FD48E1(unk_0xE4B835FDC8B9B086(Local_112.f_12));
						}
						unk_0xC7C47D4054903839(unk_0xE4B835FDC8B9B086(Local_112.f_12), vLocal_133, 0, 0, 1);
						unk_0xFE8201EFB515D77B(unk_0xE4B835FDC8B9B086(Local_112.f_12), true);
						unk_0x0CDD28A9DFCE2FCE(unk_0xE4B835FDC8B9B086(Local_112.f_12), true, 1);
						unk_0x8950ED5730F62EE8(&iLocal_115, 3);
						iLocal_130 = 0;
					}
				}
			}
			else if (Local_112.f_5 != unk_0x72B85B341ADBE9DE())
			{
				vVar0 = { unk_0xFBB1F99A825CAB09(unk_0xF2D53AA87148ACED(Local_112.f_12), true) };
				if (!func_680(vVar0, iLocal_131, 0))
				{
					iLocal_130 = 0;
				}
			}
			break;
		
		case 2:
			break;
	}
	if (unk_0x0E4018692D92041D(iLocal_115, 3))
	{
		if (func_609(0, 1, 1, 1))
		{
			unk_0xCE689A8E8C42ED78(&iLocal_115, 3);
			func_693("GB_HLP_WRP", -1);
		}
	}
}

int func_680(vector3 vParam0, int iParam1, float fParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (func_684(iParam1))
	{
		func_681(iParam1, &vVar0, &vVar1, &fVar2, fParam2);
		return unk_0xC2F708DE8AD68197(vParam0, vVar0, vVar1, fVar2, 0, true);
	}
	return 0;
}

void func_681(int iParam0, var uParam1, var uParam2, var uParam3, float fParam4)
{
	vector3 vVar0;
	var uVar1;
	vector3 vVar2;
	
	vVar0 = { func_683(iParam0) };
	uVar1 = func_682(iParam0);
	vVar2 = { 0f, 1f, 0f };
	func_63(&vVar2, 0f, 0f, uVar1);
	vVar2 = { vVar2 / FtoV(vmag(vVar2)) };
	*uParam1 = { vVar0 + vVar2 * FtoV((0.5f * (120f + fParam4))) };
	uParam1->f_2 = (uParam1->f_2 - (0.5f * (34f + fParam4)));
	*uParam2 = { vVar0 - vVar2 * FtoV((0.5f * (120f + fParam4))) };
	uParam2->f_2 = (uParam2->f_2 + (0.5f * (34f + fParam4)));
	*uParam3 = (16.17f + fParam4);
}

var func_682(int iParam0)
{
	return Global_4006552[iParam0 /*45*/].f_7;
}

Vector3 func_683(int iParam0)
{
	return Global_4006552[iParam0 /*45*/].f_4;
}

int func_684(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 36)
	{
		return 1;
	}
	return 0;
}

struct<8> func_685()
{
	struct<8> Var0;
	
	switch (func_1100())
	{
		case 0:
			StringCopy(&Var0, "GB_ASLT_CUL", 32);
			break;
		
		case 1:
			StringCopy(&Var0, "GB_ASLT_GEN", 32);
			break;
		
		case 2:
			StringCopy(&Var0, "GB_ASLT_AIR", 32);
			break;
		
		case 3:
			StringCopy(&Var0, "GB_ASLT_MER", 32);
			break;
	}
	return Var0;
}

void func_686(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_687(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1312585 = 16;
		Global_1312585.f_56 = iParam2;
	}
}

int func_687(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	if (unk_0x786AF4A44E1B5B4B(sParam0))
	{
		return 0;
	}
	if (unk_0x85731B98C6C759D5(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0x786AF4A44E1B5B4B(sParam1))
	{
		return 0;
	}
	if (func_688(sParam0, sParam1) && Global_1312585.f_56 == Global_1312585.f_58)
	{
		return 0;
	}
	func_621();
	Global_1312585 = 3;
	StringCopy(&(Global_1312585.f_1), unk_0xD178EF744F20B712(), 32);
	Global_1312585.f_9 = unk_0x36163153849DFDA1(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	StringCopy(&(Global_1312585.f_16), sParam1, 64);
	Global_1312585.f_58 = iParam3;
	Global_1312585.f_56 = iParam3;
	func_620();
	func_619(bParam2);
	func_618();
	return 1;
}

bool func_688(char* sParam0, char* sParam1)
{
	if (!func_625())
	{
		return 0;
	}
	if (unk_0x786AF4A44E1B5B4B(sParam0))
	{
		return 0;
	}
	if (unk_0x786AF4A44E1B5B4B(sParam1))
	{
		return 0;
	}
	if (!unk_0x36163153849DFDA1(sParam0) == unk_0x36163153849DFDA1(&(Global_1312585.f_12)))
	{
		return 0;
	}
	return unk_0x36163153849DFDA1(sParam1) == unk_0x36163153849DFDA1(&(Global_1312585.f_16));
}

void func_689(char* sParam0, int iParam1, int iParam2, bool bParam3)
{
	func_690(sParam0, unk_0xEEF8394DB3D3DFA1(iParam1), bParam3, 1);
}

int func_690(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	var uVar0;
	
	if (unk_0x786AF4A44E1B5B4B(sParam0))
	{
		return 0;
	}
	if (unk_0x85731B98C6C759D5(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0x786AF4A44E1B5B4B(sParam1))
	{
		return 0;
	}
	if (unk_0x85731B98C6C759D5(sParam1) > 63)
	{
		return 0;
	}
	if (func_691(sParam0, sParam1) && Global_1312585.f_56 == Global_1312585.f_58)
	{
		return 0;
	}
	uVar0 = Global_1312585.f_54;
	func_621();
	Global_1312585 = 9;
	StringCopy(&(Global_1312585.f_1), unk_0xD178EF744F20B712(), 32);
	Global_1312585.f_9 = unk_0x36163153849DFDA1(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	StringCopy(&(Global_1312585.f_16), sParam1, 64);
	Global_1312585.f_58 = iParam3;
	Global_1312585.f_56 = iParam3;
	Global_1312585.f_54 = uVar0;
	func_620();
	func_619(bParam2);
	func_618();
	return 1;
}

bool func_691(char* sParam0, char* sParam1)
{
	if (!func_625())
	{
		return 0;
	}
	if (unk_0x786AF4A44E1B5B4B(sParam0))
	{
		return 0;
	}
	if (unk_0x786AF4A44E1B5B4B(sParam1))
	{
		return 0;
	}
	if (!unk_0x36163153849DFDA1(sParam0) == unk_0x36163153849DFDA1(&(Global_1312585.f_12)))
	{
		return 0;
	}
	return unk_0x36163153849DFDA1(sParam1) == unk_0x36163153849DFDA1(&(Global_1312585.f_16));
}

void func_692()
{
	if (func_367(unk_0x95B959F18401C09A()) < 1)
	{
		if (unk_0xE38E3CF1625A4145(iLocal_121))
		{
			unk_0x1ABDB383C83A336A(&iLocal_121);
		}
		return;
	}
	if (unk_0xE38E3CF1625A4145(iLocal_121))
	{
		return;
	}
	iLocal_121 = unk_0x8848A15CBDADDC60(unk_0xF2D53AA87148ACED(Local_112.f_12));
	unk_0xC51C58C963968740(iLocal_121, 12);
	unk_0xA20C1DE21F2F071C(iLocal_121, 457);
	unk_0x67110AB55548E699(iLocal_121, 1);
	unk_0x983D75D9630FD905(iLocal_121, true);
	unk_0xCE5C49921A521962(iLocal_121, Global_262145.f_12246);
	unk_0x1C95CD840303FC37(iLocal_121, "GB_AST_BLIP");
	if (unk_0x0E4018692D92041D(Local_112.f_1, 6))
	{
		if (func_1116())
		{
			func_665(&iLocal_121, 18);
		}
		else
		{
			func_665(&iLocal_121, 18);
		}
	}
	else
	{
		func_665(&iLocal_121, 6);
	}
	if (func_1116())
	{
		if (!unk_0x0E4018692D92041D(iLocal_114, 0))
		{
			unk_0x0E734BC61706D976(iLocal_121, 1);
			unk_0x43598712EC9E921C(iLocal_121, 7000);
			unk_0x0B1FD891620F7745();
			unk_0x8950ED5730F62EE8(&iLocal_114, 0);
		}
	}
}

void func_693(char* sParam0, int iParam1)
{
	unk_0x37621D6689F9E3C3(sParam0);
	unk_0x092150016C06C431(0, 0, true, iParam1);
}

bool func_694(int iParam0)
{
	if (!unk_0x765F6FEEFF39224F(iParam0))
	{
		return 0;
	}
	if (unk_0xD62C4419A41F106A(iParam0, 0))
	{
	}
	return unk_0x65F35477FEAD6F0F(iParam0) == Global_145230;
}

void func_695(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	
	bVar0 = true;
	if (!bParam2)
	{
		if ((!bParam0 && unk_0xB331FCEB94EB05C8()) && !unk_0x289064CB38B560AA())
		{
			if (bParam1)
			{
				if (!func_250(unk_0x95B959F18401C09A()))
				{
					bVar0 = false;
				}
			}
			else if (!func_264(unk_0x95B959F18401C09A()))
			{
				bVar0 = false;
			}
		}
	}
	if (bVar0)
	{
		if (Global_1573342 != bParam0)
		{
			Global_1573342 = bParam0;
		}
	}
}

bool func_696()
{
	return Global_1573342;
}

void func_697(bool bParam0)
{
	if (bParam0)
	{
		if (!func_265(unk_0x95B959F18401C09A(), 9))
		{
			if (func_367(unk_0x95B959F18401C09A()) != 0)
			{
				func_372(9);
			}
		}
	}
	else if (func_265(unk_0x95B959F18401C09A(), 9))
	{
		func_374(9);
	}
}

int func_698(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x1F85AD4B26B92795(sParam0);
	iVar0 = unk_0x9457C7E9A5E2BC86(0, 1);
	func_634(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_699()
{
	struct<8> Var0;
	char[] cVar1[8];
	int iVar2;
	
	if (func_371())
	{
		return;
	}
	if (func_367(unk_0x95B959F18401C09A()) == 0)
	{
		return;
	}
	if (!unk_0x0E4018692D92041D(Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_1, 5))
	{
		if (!func_1116())
		{
			if (((Local_112.f_5 != -1 || Local_112.f_7 != -1) || unk_0x0E4018692D92041D(Local_112.f_1, 16)) || unk_0x0E4018692D92041D(Local_112.f_1, 20))
			{
				unk_0x8950ED5730F62EE8(&(Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_1), 5);
				unk_0x89D80FC214D65D3D(1);
				if (unk_0x22C3124A898FB82A(Local_112.f_12))
				{
					unk_0x861C6D8520E774EA(unk_0xE4B835FDC8B9B086(Local_112.f_12), false, 1);
				}
				cVar1 = func_603(unk_0x7C1C88877E8AAA50(Local_112.f_9));
				iVar2 = func_602(unk_0x7C1C88877E8AAA50(Local_112.f_9));
				if (func_19(unk_0x95B959F18401C09A(), 1))
				{
					Var0 = { func_715(1) };
					if (func_552())
					{
						if (func_367(unk_0x95B959F18401C09A()) > 0)
						{
							func_700(86, "BIGM_ASLTN", &Var0, cVar1, iVar2, 0, -1, -1, -1, 2, -1);
						}
					}
					func_1055(-1, 0, 0, -1, 0, 0);
				}
				else
				{
					Var0 = { func_715(0) };
					if (func_552())
					{
						if (func_367(unk_0x95B959F18401C09A()) > 0)
						{
							func_700(86, "BIGM_ASLTN", &Var0, cVar1, iVar2, 0, -1, -1, -1, 2, -1);
						}
					}
					func_1055(-1, 0, 0, -1, 0, 0);
				}
				func_421(1);
			}
		}
	}
}

int func_700(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_18();
	iVar1 = func_18();
	iVar2 = func_18();
	return func_701(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

int func_701(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_714(uParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_17 = iParam5;
	Var0.f_18 = iParam6;
	Var0.f_19 = iParam7;
	StringCopy(&(Var0.f_25), sParam3, 64);
	StringCopy(&(Var0.f_57), sParam8, 16);
	Var0.f_73 = uParam4;
	Var0.f_71 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_72 = uParam12;
	if (iParam14 != 2)
	{
		Var0.f_71 = iParam14;
	}
	func_300(&(Var0.f_69), 4);
	return func_702(&Var0);
}

int func_702(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2437364.f_3030)
		{
			return 0;
		}
	}
	func_713(uParam0, uParam0->f_17);
	func_712(uParam0);
	if (func_42())
	{
		func_712(uParam0);
	}
	if (func_711(uParam0->f_1))
	{
		func_704();
		if (Global_2437364.f_2708[0 /*80*/].f_2 == 0)
		{
			Global_2437364.f_2708[0 /*80*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2437364.f_2708[0 /*80*/].f_1 == 13 || Global_2437364.f_2708[0 /*80*/].f_1 == 53) || Global_2437364.f_2708[0 /*80*/].f_1 == 54) || Global_2437364.f_2708[0 /*80*/].f_1 == 58)
		{
			Global_2437364.f_2708[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2437364.f_2708[iVar0 + 1 /*80*/] = { Global_2437364.f_2708[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2437364.f_2708[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2437364.f_2708[iVar0 /*80*/].f_2 == 0)
		{
			Global_2437364.f_2708[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_704();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_300(&(Global_2437364.f_2708[iVar0 /*80*/].f_69), 2);
				Global_2437364.f_2708[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_703(uParam0->f_69, 128))
			{
				if (func_305(Global_2437364.f_2708[iVar0 /*80*/].f_1))
				{
					Global_2437364.f_2708[iVar0 /*80*/].f_2 = 5;
					func_300(&(Global_2437364.f_2708[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_703(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_704()
{
	bool bVar0;
	
	if (Global_2437364.f_3031)
	{
		return;
	}
	if (!Global_71858)
	{
		Global_71858 = 1;
		bVar0 = true;
	}
	func_705();
	if (bVar0)
	{
		Global_71858 = 0;
	}
}

void func_705()
{
	Global_2437364.f_3032 = 0;
	Global_2437364.f_3032.f_578 = 0;
	func_709(&(Global_2437364.f_3032.f_1));
	Global_2437364.f_3032.f_1.f_1 = 0;
	func_706(&(Global_2437364.f_3032.f_1));
}

void func_706(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		unk_0x83A1D480DB0B52CC(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (unk_0x4CE1DD5CFC1F941E())
		{
			unk_0xBB698266C5FDF0A7(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0x295B86DE57A0721D(false);
			unk_0x818901B332D5541D();
		}
		unk_0x83A1D480DB0B52CC(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		unk_0x05CFB4D665C2A88D(false);
		uParam0->f_564 = 0;
	}
	if (!Global_71858)
	{
		if (!unk_0xB59A1CE271CEA093(unk_0x3EE1295CEFBEFED4()))
		{
			if (!Global_71859)
			{
				if (unk_0xBB5E373390A5F824() && !func_708(0))
				{
					unk_0xACCDA78123DB57B0(800);
				}
			}
		}
	}
	func_707(0);
}

void func_707(int iParam0)
{
	Global_71850 = iParam0;
	Global_71851 = iParam0;
}

bool func_708(bool bParam0)
{
	if (!bParam0 && unk_0x1BCDA92AD0A7835B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x0E4018692D92041D(Global_71838, 0);
}

void func_709(var uParam0)
{
	func_710(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_710(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

int func_711(int iParam0)
{
	if ((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105)
	{
		return 1;
	}
	return 0;
}

void func_712(var uParam0)
{
	if (func_307(uParam0->f_1))
	{
		uParam0->f_72 = func_263();
	}
}

void func_713(var uParam0, int iParam1)
{
	if (func_307(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_18() || !func_1228(iParam1, 0, 1))
	{
		return;
	}
	if (func_305(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_641(iParam1, -2, 0, 0, 0);
		}
	}
}

void func_714(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_18();
	uParam1->f_18 = func_18();
	uParam1->f_19 = func_18();
	uParam1->f_20 = func_18();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = iParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

struct<8> func_715(bool bParam0)
{
	struct<8> Var0;
	
	if (bParam0)
	{
		switch (func_1100())
		{
			case 0:
				StringCopy(&Var0, "BIGM_ASLTDR", 32);
				break;
			
			case 1:
				StringCopy(&Var0, "BIGM_ASLV", 32);
				break;
			
			case 2:
				StringCopy(&Var0, "BIGM_ASLTDR", 32);
				break;
			
			case 3:
				StringCopy(&Var0, "BIGM_ASLTDR", 32);
				break;
		}
	}
	else
	{
		switch (func_1100())
		{
			case 0:
				StringCopy(&Var0, "BIGM_ASLTDO", 32);
				break;
			
			case 1:
				StringCopy(&Var0, "BIGM_ASLVO", 32);
				break;
			
			case 2:
				StringCopy(&Var0, "BIGM_ASLTDO", 32);
				break;
			
			case 3:
				StringCopy(&Var0, "BIGM_ASLTDO", 32);
				break;
			}
	}
	return Var0;
}

void func_716()
{
	if (unk_0x4F94F07DAD382CDA(Local_112.f_12))
	{
		if (!unk_0x0E4018692D92041D(iLocal_115, 12))
		{
			if (func_370(unk_0x95B959F18401C09A()))
			{
				unk_0x8950ED5730F62EE8(&iLocal_115, 12);
				unk_0x861C6D8520E774EA(unk_0xE4B835FDC8B9B086(Local_112.f_12), true, 1);
			}
			else if (func_367(unk_0x95B959F18401C09A()) < 1)
			{
				unk_0x8950ED5730F62EE8(&iLocal_115, 12);
				unk_0x861C6D8520E774EA(unk_0xE4B835FDC8B9B086(Local_112.f_12), true, 1);
			}
		}
		else if (!func_370(unk_0x95B959F18401C09A()))
		{
			if (func_367(unk_0x95B959F18401C09A()) >= 1)
			{
				unk_0x861C6D8520E774EA(unk_0xE4B835FDC8B9B086(Local_112.f_12), false, 1);
				unk_0xCE689A8E8C42ED78(&iLocal_115, 12);
			}
		}
	}
}

void func_717()
{
	int iVar0;
	int iVar1;
	struct<20> Var2;
	char* sVar3;
	char[] cVar4[8];
	char[] cVar5[8];
	char[] cVar6[8];
	char[] cVar7[8];
	char* sVar8;
	char* sVar9;
	int iVar10;
	
	iVar0 = func_18();
	Var2.f_2 = 1065353216;
	Var2.f_3 = 1065353216;
	Var2.f_4 = 1;
	Var2.f_9 = -1;
	Var2.f_18 = -1;
	Var2.f_19 = -1;
	if (!unk_0x0E4018692D92041D(Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_1, 1))
	{
		if (!unk_0x0E4018692D92041D(iLocal_115, 6))
		{
			if (unk_0x0E4018692D92041D(Local_112.f_1, 1) || unk_0x0E4018692D92041D(Local_112.f_1, 8))
			{
				func_1026(&sVar3, &cVar4, &cVar5, &cVar6, &cVar7, &sVar8);
				if (func_552())
				{
					iVar0 = unk_0x7C1C88877E8AAA50(Local_112.f_6);
					if (iVar0 == unk_0x95B959F18401C09A())
					{
						if (func_367(unk_0x95B959F18401C09A()) > 1)
						{
							func_1078(87, "GB_WINNER", &sVar3, 1, -1, 2, 1);
						}
						if (!unk_0x0E4018692D92041D(iLocal_114, 17))
						{
							unk_0x8950ED5730F62EE8(&iLocal_114, 17);
							func_918(1, 1, 0, 0, -1, -1, -1, -1, -1, 0);
						}
						func_736(159, 1, &Var2, 0);
						unk_0x117A9E054B0F10FB(unk_0x95B959F18401C09A());
					}
					else if (func_19(unk_0x95B959F18401C09A(), 1))
					{
						iVar1 = func_545();
						if (iVar1 != func_18() && func_16(iVar0, iVar1, 1))
						{
							if (func_367(unk_0x95B959F18401C09A()) > 1)
							{
								sVar9 = func_735();
								iVar10 = func_602(unk_0x95B959F18401C09A());
								func_700(87, "GB_WINNER", &cVar4, sVar9, iVar10, 0, -1, -1, -1, 2, -1);
							}
							if (!unk_0x0E4018692D92041D(iLocal_114, 17))
							{
								unk_0x8950ED5730F62EE8(&iLocal_114, 17);
								func_918(1, 1, 0, 0, -1, -1, -1, -1, -1, 0);
							}
							if (func_1117() == Local_112.f_8)
							{
								func_736(159, 1, &Var2, 0);
							}
							else
							{
								func_736(159, 0, &Var2, 0);
							}
							unk_0x117A9E054B0F10FB(unk_0x95B959F18401C09A());
						}
						else
						{
							if (func_367(unk_0x95B959F18401C09A()) > 1)
							{
								if (func_19(iVar0, 1))
								{
									sVar9 = func_603(iVar0);
									iVar10 = func_602(iVar0);
								}
								else
								{
									sVar9 = unk_0xEEF8394DB3D3DFA1(iVar0);
									iVar10 = 1;
								}
								if (func_1100() != 1)
								{
									func_700(88, "GB_WORK_OVER", &cVar5, sVar9, iVar10, 0, -1, -1, -1, 2, -1);
								}
								else if (unk_0x0E4018692D92041D(Local_112.f_1, 8))
								{
									func_700(88, "GB_WORK_OVER", "BIGM_ASL_DESFG", sVar9, iVar10, 0, -1, -1, -1, 2, -1);
								}
							}
							func_736(159, 0, &Var2, 0);
							if (!unk_0x0E4018692D92041D(iLocal_114, 17))
							{
								unk_0x8950ED5730F62EE8(&iLocal_114, 17);
								func_918(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							}
							func_736(159, 0, &Var2, 0);
						}
					}
					else
					{
						if (func_367(unk_0x95B959F18401C09A()) > 1)
						{
							if (func_19(iVar0, 1))
							{
								sVar9 = func_603(iVar0);
								iVar10 = func_602(iVar0);
							}
							else
							{
								sVar9 = unk_0xEEF8394DB3D3DFA1(iVar0);
								iVar10 = 1;
							}
							if (func_1100() != 1)
							{
								func_700(88, "GB_WORK_OVER", &cVar5, sVar9, iVar10, 0, -1, -1, -1, 2, -1);
							}
							else if (unk_0x0E4018692D92041D(Local_112.f_1, 8))
							{
								func_700(88, "GB_WORK_OVER", "BIGM_ASL_DESFG", sVar9, iVar10, 0, -1, -1, -1, 2, -1);
							}
						}
						if (!unk_0x0E4018692D92041D(iLocal_114, 17))
						{
							unk_0x8950ED5730F62EE8(&iLocal_114, 17);
							func_918(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
						}
						func_736(159, 0, &Var2, 0);
					}
				}
				unk_0x8950ED5730F62EE8(&iLocal_115, 6);
			}
			else if (unk_0x0E4018692D92041D(Local_112.f_1, 10))
			{
				if (Local_112.f_6 > -1)
				{
					iVar0 = unk_0x7C1C88877E8AAA50(Local_112.f_6);
				}
				if (func_552())
				{
					if (func_1116())
					{
						if (func_367(unk_0x95B959F18401C09A()) > 1)
						{
							if (unk_0xC4DEA49C5B465481(iVar0))
							{
								if (func_19(iVar0, 1))
								{
									sVar9 = func_603(iVar0);
									iVar10 = func_602(iVar0);
								}
								else
								{
									sVar9 = unk_0xEEF8394DB3D3DFA1(iVar0);
									iVar10 = 1;
								}
								func_700(88, "GB_WORK_OVER", "BIGM_ASL_DESFG2", sVar9, iVar10, 0, -1, -1, -1, 2, -1);
							}
							else
							{
								func_1078(88, "GB_WORK_OVER", "BIGM_ASL_DESFL", 1, -1, 2, 1);
							}
						}
						if (func_1116() || func_381())
						{
							if (!unk_0x0E4018692D92041D(iLocal_114, 17))
							{
								unk_0x8950ED5730F62EE8(&iLocal_114, 17);
								func_918(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							}
						}
						func_736(159, 0, &Var2, 0);
					}
					else if (Local_112.f_6 > -1)
					{
						if (func_19(unk_0x95B959F18401C09A(), 1))
						{
							iVar1 = func_545();
							if (iVar1 != func_18() && func_16(iVar0, iVar1, 1))
							{
								if (iVar0 == unk_0x95B959F18401C09A())
								{
									if (func_367(unk_0x95B959F18401C09A()) > 1)
									{
										func_1078(87, "GB_WINNER", "BIGM_ASL_DESY", 1, -1, 2, 1);
									}
								}
								else if (func_367(unk_0x95B959F18401C09A()) > 1)
								{
									iVar10 = func_602(unk_0x95B959F18401C09A());
									sVar9 = func_735();
									func_700(87, "GB_WINNER", "BIGM_ASL_DESG", sVar9, iVar10, 0, -1, -1, -1, 2, -1);
								}
								if (func_1116() || func_381())
								{
									if (!unk_0x0E4018692D92041D(iLocal_114, 17))
									{
										unk_0x8950ED5730F62EE8(&iLocal_114, 17);
										func_918(1, 1, 0, 0, -1, -1, -1, -1, -1, 0);
									}
								}
								if (Local_112.f_6 == unk_0x95B959F18401C09A())
								{
									func_736(159, 1, &Var2, 0);
								}
								else
								{
									func_736(159, 1, &Var2, 0);
								}
							}
							else
							{
								if (func_367(unk_0x95B959F18401C09A()) > 1)
								{
									if (func_19(iVar0, 1))
									{
										sVar9 = func_603(iVar0);
										iVar10 = func_602(iVar0);
									}
									else
									{
										sVar9 = unk_0xEEF8394DB3D3DFA1(iVar0);
										iVar10 = 1;
									}
									func_700(88, "GB_WORK_OVER", "BIGM_ASL_DESFG2", sVar9, iVar10, 0, -1, -1, -1, 2, -1);
								}
								if (func_1116() || func_381())
								{
									if (!unk_0x0E4018692D92041D(iLocal_114, 17))
									{
										unk_0x8950ED5730F62EE8(&iLocal_114, 17);
										func_918(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
									}
								}
								func_736(159, 0, &Var2, 0);
							}
						}
						else if (iVar0 == unk_0x95B959F18401C09A())
						{
							if (func_367(unk_0x95B959F18401C09A()) > 1)
							{
								func_1078(87, "GB_WINNER", "BIGM_ASL_DESY", 1, -1, 2, 1);
							}
							if (func_1116() || func_381())
							{
								if (!unk_0x0E4018692D92041D(iLocal_114, 17))
								{
									unk_0x8950ED5730F62EE8(&iLocal_114, 17);
									func_918(1, 1, 0, 0, -1, -1, -1, -1, -1, 0);
								}
							}
							func_736(159, 1, &Var2, 0);
						}
						else
						{
							if (func_367(unk_0x95B959F18401C09A()) > 1)
							{
								if (func_19(iVar0, 1))
								{
									sVar9 = func_603(iVar0);
									iVar10 = func_602(iVar0);
								}
								else
								{
									sVar9 = unk_0xEEF8394DB3D3DFA1(iVar0);
									iVar10 = 1;
								}
								func_700(88, "GB_WORK_OVER", "BIGM_ASL_DESFG2", sVar9, iVar10, 0, -1, -1, -1, 2, -1);
							}
							if (func_1116() || func_381())
							{
								if (!unk_0x0E4018692D92041D(iLocal_114, 17))
								{
									unk_0x8950ED5730F62EE8(&iLocal_114, 17);
									func_918(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
								}
							}
							func_736(159, 0, &Var2, 0);
						}
					}
					else if (func_19(unk_0x95B959F18401C09A(), 1))
					{
						if (func_367(unk_0x95B959F18401C09A()) > 1)
						{
							sVar9 = func_735();
							iVar10 = func_602(unk_0x95B959F18401C09A());
							func_700(88, "GB_WORK_OVER", "BIGM_ASL_DESMG", sVar9, iVar10, 0, -1, -1, -1, 2, -1);
						}
						if (func_1116() || func_381())
						{
							if (!unk_0x0E4018692D92041D(iLocal_114, 17))
							{
								unk_0x8950ED5730F62EE8(&iLocal_114, 17);
								func_918(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							}
						}
						func_736(159, 0, &Var2, 0);
					}
					else
					{
						if (func_367(unk_0x95B959F18401C09A()) > 1)
						{
							func_1078(88, "GB_WORK_OVER", "BIGM_ASL_DESF", 1, -1, 2, 1);
						}
						if (func_1116() || func_381())
						{
							if (!unk_0x0E4018692D92041D(iLocal_114, 17))
							{
								unk_0x8950ED5730F62EE8(&iLocal_114, 17);
								func_918(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							}
						}
						func_736(159, 0, &Var2, 0);
					}
				}
				unk_0x8950ED5730F62EE8(&iLocal_115, 6);
			}
			else if (unk_0x0E4018692D92041D(Local_112.f_1, 15))
			{
				if (func_552())
				{
					if (func_1116())
					{
						if (func_367(unk_0x95B959F18401C09A()) > 1)
						{
							func_1078(88, "GB_WORK_OVER", "BIGM_ASL_DESFL", 1, -1, 2, 1);
						}
						if (func_1116() || func_381())
						{
							if (!unk_0x0E4018692D92041D(iLocal_114, 17))
							{
								unk_0x8950ED5730F62EE8(&iLocal_114, 17);
								func_918(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							}
						}
						func_736(159, 0, &Var2, 0);
					}
					else if (func_19(unk_0x95B959F18401C09A(), 1))
					{
						if (func_367(unk_0x95B959F18401C09A()) > 1)
						{
							sVar9 = func_735();
							iVar10 = func_602(unk_0x95B959F18401C09A());
							func_700(88, "GB_WORK_OVER", "BIGM_ASL_DESMG", sVar9, iVar10, 0, -1, -1, -1, 2, -1);
						}
						if (func_1116() || func_381())
						{
							if (!unk_0x0E4018692D92041D(iLocal_114, 17))
							{
								unk_0x8950ED5730F62EE8(&iLocal_114, 17);
								func_918(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							}
						}
						func_736(159, 0, &Var2, 0);
					}
					else
					{
						if (func_367(unk_0x95B959F18401C09A()) > 1)
						{
							func_1078(88, "GB_WORK_OVER", "BIGM_ASL_DESF", 1, -1, 2, 1);
						}
						if (func_1116() || func_381())
						{
							if (!unk_0x0E4018692D92041D(iLocal_114, 17))
							{
								unk_0x8950ED5730F62EE8(&iLocal_114, 17);
								func_918(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							}
						}
						func_736(159, 0, &Var2, 0);
					}
				}
				unk_0x8950ED5730F62EE8(&iLocal_115, 6);
			}
			else if (unk_0x0E4018692D92041D(Local_112.f_1, 18))
			{
				if (func_552())
				{
					if (func_1116())
					{
						if (func_367(unk_0x95B959F18401C09A()) > 1)
						{
							func_1078(88, "GB_WORK_OVER", "BIGM_ASL_DESFL", 1, -1, 2, 1);
						}
						if (func_1116() || func_381())
						{
							if (!unk_0x0E4018692D92041D(iLocal_114, 17))
							{
								unk_0x8950ED5730F62EE8(&iLocal_114, 17);
								func_918(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							}
						}
						func_736(159, 0, &Var2, 0);
					}
					else if (func_19(unk_0x95B959F18401C09A(), 1))
					{
						if (func_367(unk_0x95B959F18401C09A()) > 1)
						{
							sVar9 = func_735();
							iVar10 = func_602(unk_0x95B959F18401C09A());
							func_700(88, "GB_WORK_OVER", "BIGM_ASL_DESMG", sVar9, iVar10, 0, -1, -1, -1, 2, -1);
						}
						if (func_1116() || func_381())
						{
							if (!unk_0x0E4018692D92041D(iLocal_114, 17))
							{
								unk_0x8950ED5730F62EE8(&iLocal_114, 17);
								func_918(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							}
						}
						func_736(159, 0, &Var2, 0);
					}
					else
					{
						if (func_367(unk_0x95B959F18401C09A()) > 1)
						{
							func_1078(88, "GB_WORK_OVER", "BIGM_ASL_DESF", 1, -1, 2, 1);
						}
						if (func_1116() || func_381())
						{
							if (!unk_0x0E4018692D92041D(iLocal_114, 17))
							{
								unk_0x8950ED5730F62EE8(&iLocal_114, 17);
								func_918(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							}
						}
						func_736(159, 0, &Var2, 0);
					}
				}
				unk_0x8950ED5730F62EE8(&iLocal_115, 6);
			}
			else if (unk_0x0E4018692D92041D(Local_112.f_1, 3))
			{
				func_1026(&sVar3, &cVar4, &cVar5, &cVar6, &cVar7, &sVar8);
				if (func_552())
				{
					if (func_19(unk_0x95B959F18401C09A(), 1))
					{
						if (func_367(unk_0x95B959F18401C09A()) > 1)
						{
							func_1078(88, "GB_WORK_OVER", &sVar8, 1, -1, 2, 1);
						}
					}
					else if (func_367(unk_0x95B959F18401C09A()) > 1)
					{
						func_1078(88, "GB_WORK_OVER", &sVar8, 1, -1, 2, 1);
					}
				}
				if (func_1116() || func_381())
				{
					if (!unk_0x0E4018692D92041D(iLocal_114, 17))
					{
						unk_0x8950ED5730F62EE8(&iLocal_114, 17);
						func_918(0, 7, 0, 0, -1, -1, -1, -1, -1, 0);
					}
				}
				func_736(159, 0, &Var2, 0);
				unk_0x8950ED5730F62EE8(&iLocal_115, 6);
			}
			else if (unk_0x0E4018692D92041D(Local_112.f_1, 5))
			{
				if (func_552())
				{
					if (func_1116())
					{
						if (func_367(unk_0x95B959F18401C09A()) > 1)
						{
						}
					}
					else if (func_367(unk_0x95B959F18401C09A()) > 1)
					{
						func_1078(88, "GB_WORK_OVER", "BIGM_ASLTRBQ", 1, -1, 2, 1);
					}
				}
				if (func_1116() || func_381())
				{
					if (!unk_0x0E4018692D92041D(iLocal_114, 17))
					{
						unk_0x8950ED5730F62EE8(&iLocal_114, 17);
						func_918(0, 8, 0, 0, -1, -1, -1, -1, -1, 0);
					}
				}
				func_736(159, 0, &Var2, 0);
				unk_0x8950ED5730F62EE8(&iLocal_115, 6);
			}
			else if (unk_0x0E4018692D92041D(Local_112.f_1, 9))
			{
				if (func_552())
				{
					if (func_1116())
					{
						if (func_367(unk_0x95B959F18401C09A()) > 1)
						{
							func_1078(88, "GB_WORK_OVER", "BIGM_ASLWRK", 1, -1, 2, 1);
						}
					}
					else if (func_367(unk_0x95B959F18401C09A()) > 1)
					{
						func_1078(88, "GB_WORK_OVER", "BIGM_ASLWRK", 1, -1, 2, 1);
					}
				}
				if (func_1116() || func_381())
				{
					if (!unk_0x0E4018692D92041D(iLocal_114, 17))
					{
						unk_0x8950ED5730F62EE8(&iLocal_114, 17);
						func_918(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
					}
				}
				func_736(159, 0, &Var2, 0);
				unk_0x8950ED5730F62EE8(&iLocal_115, 6);
			}
		}
		if (unk_0x0E4018692D92041D(iLocal_115, 6))
		{
			if (!unk_0x0E4018692D92041D(iLocal_115, 8))
			{
				if (unk_0x0E4018692D92041D(iLocal_114, 19))
				{
					iLocal_128 = -1;
					unk_0xCBE6AF58552C63B2(iLocal_128);
				}
				func_667();
				unk_0x8950ED5730F62EE8(&iLocal_115, 8);
				if (unk_0x0E4018692D92041D(iLocal_114, 20))
				{
					unk_0x65BA35D6D61F1574("BG_ASSAULT_STOP");
					unk_0xBDD4EE948C7B9BB5("DisableFlightMusic", 0);
					unk_0xBDD4EE948C7B9BB5("WantedMusicDisabled", 0);
				}
			}
			if (unk_0xE38E3CF1625A4145(iLocal_124))
			{
				unk_0x1ABDB383C83A336A(&iLocal_124);
			}
			if (unk_0xE38E3CF1625A4145(iLocal_123))
			{
				unk_0x1ABDB383C83A336A(&iLocal_123);
			}
			if (unk_0xE38E3CF1625A4145(iLocal_121))
			{
				unk_0x1ABDB383C83A336A(&iLocal_121);
			}
			func_734();
			if (!unk_0x0E4018692D92041D(iLocal_114, 29))
			{
				unk_0x8950ED5730F62EE8(&iLocal_114, 29);
			}
			if (func_718(&uLocal_137, 1, 0))
			{
				unk_0x8950ED5730F62EE8(&(Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_1), 1);
			}
		}
	}
}

int func_718(var uParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	func_372(29);
	if ((*uParam0 > 0 && !func_302()) && func_367(unk_0x95B959F18401C09A()) != 0)
	{
		if (!func_733())
		{
			func_732();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_9(&(uParam0->f_3)))
			{
				func_8(&(uParam0->f_3), 0, 0);
			}
			else if (func_6(&(uParam0->f_3), 1000, 0))
			{
				unk_0x8950ED5730F62EE8(&(Global_1669357.f_3), 2);
				if (bParam1)
				{
					unk_0x8950ED5730F62EE8(&(Global_2528542.f_4579), 0);
					func_8(&(uParam0->f_5), 0, 0);
				}
				func_8(&(uParam0->f_1), 0, 0);
				func_731(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_9(&(uParam0->f_5)))
			{
				if (func_6(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_725(iParam2);
				func_731(uParam0, 2);
			}
			break;
		
		case 2:
			func_725(0);
			if (func_6(&(uParam0->f_1), 15000, 0))
			{
				if (func_719(func_720(0)))
				{
					unk_0xEDF90B96BED57BCE(1);
				}
				func_731(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_6(&(uParam0->f_1), 23500, 0))
			{
				unk_0xCE689A8E8C42ED78(&(Global_2528542.f_4579), 1);
				unk_0xCE689A8E8C42ED78(&(Global_1669357.f_3), 2);
				func_731(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0xCE689A8E8C42ED78(&(Global_2528542.f_4579), 1);
			unk_0xCE689A8E8C42ED78(&(Global_1669357.f_3), 2);
			return 1;
	}
	return 0;
}

int func_719(char* sParam0)
{
	unk_0x6D39881CA5436178(sParam0);
	return unk_0xA32C2C4DF096C08A(0);
}

char* func_720(int iParam0)
{
	if (((func_723(unk_0x95B959F18401C09A()) || func_722(unk_0x95B959F18401C09A())) || func_322()) || iParam0)
	{
		if (func_722(unk_0x95B959F18401C09A()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_292(func_721()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_721()
{
	return Global_1645834;
}

bool func_722(int iParam0)
{
	return func_293(func_290(iParam0), 0);
}

bool func_723(int iParam0)
{
	return func_724(func_290(iParam0));
}

int func_724(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1589819[unk_0x95B959F18401C09A() /*818*/] == 148 && func_247(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_35, 1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 182:
		case 183:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 205:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
			return 1;
	}
	return 0;
}

void func_725(int iParam0)
{
	if (unk_0x0E4018692D92041D(Global_2528542.f_4579, 0))
	{
		if (((((((((((!unk_0xE35413546DC97620() && !unk_0x0E4018692D92041D(Global_2528542.f_786, 2)) && func_1228(unk_0x95B959F18401C09A(), 1, 1)) && !Global_68807) && !Global_53675) && !unk_0xBB5E373390A5F824()) && !func_265(unk_0x95B959F18401C09A(), 22)) && func_367(unk_0x95B959F18401C09A()) != 0) && !func_729(func_730())) && !func_723(unk_0x95B959F18401C09A())) && !func_728(func_290(unk_0x95B959F18401C09A()))) && !func_727(func_290(unk_0x95B959F18401C09A())))
		{
			unk_0x8950ED5730F62EE8(&(Global_2528542.f_4579), 1);
			func_726(func_720(iParam0), -1);
			func_600(1);
			unk_0xCE689A8E8C42ED78(&(Global_2528542.f_4579), 0);
		}
	}
}

void func_726(char* sParam0, int iParam1)
{
	unk_0x37621D6689F9E3C3(sParam0);
	unk_0x092150016C06C431(0, 0, false, iParam1);
}

int func_727(int iParam0)
{
	switch (iParam0)
	{
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_728(int iParam0)
{
	switch (iParam0)
	{
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 188:
		case 178:
			return 1;
		
		default:
	}
	return 0;
}

int func_729(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

int func_730()
{
	char* sVar0;
	
	sVar0 = unk_0xD178EF744F20B712();
	if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_RAMPED_UP"))
	{
		return 220;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_GUNRUNNING"))
	{
		return 225;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_GUNRUNNING_DEFEND"))
	{
		return 227;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_SMUGGLER"))
	{
		return 229;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_FM_GANGOPS"))
	{
		return 233;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "FMMC_TYPE_FMBB_SELL"))
	{
		return 237;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "FMMC_TYPE_FMBB_DEFEND"))
	{
		return 238;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "FMMC_TYPE_FMBB_SECURITY_VAN"))
	{
		return 239;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "FMMC_TYPE_FMBB_TARGET_PURSUIT"))
	{
		return 240;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "FMMC_TYPE_FMBB_JEWEL_STORE_GRAB"))
	{
		return 241;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "FMMC_TYPE_FMBB_BANK_JOB"))
	{
		return 242;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "FMMC_TYPE_FMBB_DATA_HACK"))
	{
		return 244;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "FMMC_TYPE_FMBB_INFILTRATION"))
	{
		return 248;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "FMMC_TYPE_FMBB_PHONECALL"))
	{
		return 249;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "FMMC_TYPE_FMBB_CLUB_MANAGEMENT"))
	{
		return 250;
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "FMMC_TYPE_GB_CASINO"))
	{
		return 243;
	}
	return 0;
}

void func_731(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_732()
{
	Global_2460155 = 1;
}

int func_733()
{
	if (((((((func_290(unk_0x95B959F18401C09A()) == 170 || func_290(unk_0x95B959F18401C09A()) == 219) || func_290(unk_0x95B959F18401C09A()) == 221) || func_290(unk_0x95B959F18401C09A()) == 220) || func_290(unk_0x95B959F18401C09A()) == 216) || func_290(unk_0x95B959F18401C09A()) == 215) || func_290(unk_0x95B959F18401C09A()) == 214) || func_290(unk_0x95B959F18401C09A()) == 218)
	{
		return 1;
	}
	if (func_570(unk_0x95B959F18401C09A()))
	{
		return 1;
	}
	return 0;
}

void func_734()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x0E4018692D92041D(iLocal_115, 9))
	{
		unk_0x8950ED5730F62EE8(&iLocal_115, 9);
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = unk_0x7C1C88877E8AAA50(iVar0);
			if (unk_0xC4DEA49C5B465481(iVar1))
			{
				if (iVar1 != unk_0x95B959F18401C09A())
				{
					if (func_553())
					{
						func_674(iVar1, 421, 0, 0);
					}
					else
					{
						func_674(iVar1, 457, 0, 0);
					}
					func_673(iVar1, 1, 0, 0);
				}
			}
			iVar0++;
		}
	}
}

char* func_735()
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_46(unk_0x95B959F18401C09A());
	if (iVar0 != func_18())
	{
		if (iVar0 != unk_0x95B959F18401C09A())
		{
			if (((func_265(iVar0, 28) || func_265(unk_0x95B959F18401C09A(), 28)) || func_605(iVar0)) && !func_604(iVar0))
			{
				return func_606(iVar0, 0);
			}
			if (!unk_0xDB36A8F522CBC12D() && !unk_0x59D656DCC6383E85(0, -1, 1))
			{
				return func_606(iVar0, 0);
			}
		}
		sVar1 = func_608(&(Global_1626536[iVar0 /*603*/].f_11.f_104));
		if (unk_0x786AF4A44E1B5B4B(sVar1))
		{
			return func_606(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

void func_736(int iParam0, bool bParam1, var uParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	func_916(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		iVar1 = (iVar1 + func_915(iParam0, uParam2->f_13, bParam3));
		if (iParam0 == 233)
		{
			iVar6 = (uParam2->f_10 / uParam2->f_11) * 100;
			iVar1 = ((iVar1 / 100) * iVar6);
		}
		iVar1 = round((to_float(iVar1) / to_float(uParam2->f_4)));
		iVar1 = round((IntToFloat(iVar1) * fVar3));
		iVar1 = round((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = (iVar0 + func_914(iParam0, bParam3));
		iVar0 = round((to_float(iVar0) / to_float(uParam2->f_4)));
		iVar0 = round((IntToFloat(iVar0) * fVar2));
		iVar0 = round((IntToFloat(iVar0) * uParam2->f_2));
	}
	else if ((iParam0 == 185 || iParam0 == 220) || iParam0 == 221)
	{
		iVar1 = round((to_float(iVar1) / to_float(uParam2->f_4)));
		iVar1 = round((IntToFloat(iVar1) * fVar3));
		iVar1 = round((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = round((to_float(iVar0) / to_float(uParam2->f_4)));
		iVar0 = round((IntToFloat(iVar0) * fVar2));
		iVar0 = round((IntToFloat(iVar0) * uParam2->f_2));
	}
	if (uParam2->f_18 > -1)
	{
		iVar0 = (iVar0 + uParam2->f_18);
	}
	if (uParam2->f_19 > -1)
	{
		iVar1 = (iVar1 + uParam2->f_19);
	}
	if (func_912(iParam0))
	{
		if (bParam1)
		{
			if (func_911(unk_0x95B959F18401C09A()) > 0)
			{
				func_910();
			}
			else
			{
				func_909();
			}
		}
		else
		{
			func_908();
		}
	}
	func_892(iParam0, bParam1, uParam2, &iVar0, &iVar4);
	func_890(iParam0, uParam2, &iVar0, &iVar5);
	func_868(iParam0, uParam2, &iVar0, &iVar5);
	func_854(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	func_837(iParam0, uParam2, &iVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_2528542.f_4889.f_378 = iVar4;
	}
	else
	{
		Global_2528542.f_4889.f_378 = iVar5;
	}
	iVar8 = func_324();
	if (iVar8 != func_18() && iParam0 != 148)
	{
		if (func_19(unk_0x95B959F18401C09A(), 0))
		{
			if (!func_16(unk_0x95B959F18401C09A(), iVar8, 1))
			{
				func_828(&iVar0, 1);
			}
		}
	}
	func_824(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_1669366.f_10 = iVar1;
		func_823();
		func_780(0, unk_0x33CD235DF1E6A94E(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1669366.f_9 = iVar0;
		func_757(iParam0, iVar0, iVar7, iVar4, iVar5, uParam2);
		func_756(iParam0, iVar0);
		if (func_755(iParam0))
		{
			if (func_754(iParam0) > -1)
			{
				func_753(func_754(iParam0), iVar0);
			}
		}
		Global_2460813 = iVar0;
		func_752(&Global_2459077, 0, 0);
	}
	if (func_369(unk_0x95B959F18401C09A()) || func_264(unk_0x95B959F18401C09A()))
	{
		func_743(iParam0);
	}
	if (func_724(iParam0))
	{
		Global_1669384.f_13 = iVar0;
		Global_1669384.f_14 = iVar1;
	}
	if (func_728(iParam0))
	{
		Global_1669438.f_13 = iVar0;
		Global_1669438.f_14 = iVar1;
	}
	if (func_568(iParam0))
	{
		Global_1669501.f_12 = iVar0;
		Global_1669501.f_13 = iVar1;
	}
	if (func_566(iParam0))
	{
		Global_1669545.f_12 = iVar0;
		Global_1669545.f_13 = iVar1;
	}
	if (func_564(iParam0))
	{
		Global_1669599.f_12 = iVar0;
		Global_1669599.f_13 = iVar1;
	}
	if (func_727(iParam0))
	{
		if (func_742(iParam0))
		{
			Global_1669680.f_12 = iVar0;
			Global_1669680.f_13 = iVar1;
		}
		else if (func_738(iParam0))
		{
			Global_1669733.f_12 = iVar0;
			Global_1669733.f_13 = iVar1;
		}
	}
	if (func_737(iParam0))
	{
		Global_1669817.f_12 = iVar0;
		Global_1669817.f_13 = iVar1;
	}
}

int func_737(int iParam0)
{
	switch (iParam0)
	{
		case 243:
			return 1;
		
		default:
	}
	return 0;
}

int func_738(int iParam0)
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && func_739(func_740(unk_0x95B959F18401C09A()))))
	{
		return 1;
	}
	return 0;
}

int func_739(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 3:
		case 2:
		case 5:
		case 1:
			return 1;
		
		default:
	}
	return 0;
}

int func_740(int iParam0)
{
	if (func_290(iParam0) == 237 || func_290(iParam0) == 250)
	{
		return func_741(iParam0);
	}
	return -1;
}

int func_741(int iParam0)
{
	if (func_160(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_181;
	}
	return -1;
}

int func_742(int iParam0)
{
	if (iParam0 == 237)
	{
		return 1;
	}
	return 0;
}

void func_743(int iParam0)
{
	if (func_751(unk_0x95B959F18401C09A()) && func_750())
	{
		if (func_390(iParam0))
		{
			func_745(9086, -1);
		}
		else if (func_391(iParam0))
		{
			func_745(9088, -1);
		}
		else if (func_293(iParam0, 1))
		{
			func_745(9089, -1);
		}
		else if (func_744(iParam0))
		{
			func_745(9090, -1);
		}
	}
}

int func_744(int iParam0)
{
	switch (iParam0)
	{
		case 194:
		case 193:
		case 189:
		case 153:
			return 1;
		
		default:
	}
	return 0;
}

void func_745(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_749(iParam0, func_379(iParam1), 0);
	iVar0++;
	if (!func_748(iParam0))
	{
		func_747(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_746(iParam0, iVar0, iParam1, 1);
	}
}

void func_746(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2539502[iParam0 /*3*/][func_379(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x12B6E23F244DDB0F(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1382642[func_379(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1382648[func_379(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1382654[func_379(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1382660[func_379(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1382618[func_379(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1382624[func_379(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1382630[func_379(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1382636[func_379(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1382594[func_379(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1382600[func_379(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1382606[func_379(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1382612[func_379(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1382666[func_379(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1382672[func_379(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1382678[func_379(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1382684[func_379(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1382690[func_379(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1382696[func_379(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1382702[func_379(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1382708[func_379(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2573513[0 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2573513[1 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2573513[2 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2573513[3 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 8956:
			Global_2573644[func_379(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1382714[func_379(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1382720[func_379(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1382726[func_379(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1382732[func_379(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2573577[0 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2573577[1 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2573577[2 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2573577[3 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2573577[4 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2573647[0 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2573647[1 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2573647[2 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2573647[3 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2573647[4 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2573663[0 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2573663[1 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2573663[2 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2573663[3 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2573663[4 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2573577[5 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2573513[4 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2573679[func_379(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2573688[func_379(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2573682[func_379(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2573691[func_379(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2573685[func_379(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2573694[func_379(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2573697[func_379(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2573577[6 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2573513[5 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2573577[7 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2573513[6 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2573577[8 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2573513[7 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2573577[9 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2573513[8 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2573577[10 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2573513[9 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2573577[11 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2573513[10 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2573577[12 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2573513[11 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2573577[13 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2573513[12 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2573577[14 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2573513[13 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2573577[15 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2573513[14 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2573577[16 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2573513[15 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2573577[17 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2573513[16 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2573513[17 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2573513[18 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2573513[19 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2573513[20 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2573700[func_379(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2573703[func_379(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2573706[func_379(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2573709[func_379(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2573712[func_379(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2573715[func_379(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2573718[func_379(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2573721[func_379(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2573724[func_379(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2573727[func_379(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2573730[func_379(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2573733[func_379(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2573736[func_379(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_747(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_379(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x12B6E23F244DDB0F(iVar0, iParam1, iParam3);
	}
}

int func_748(int iParam0)
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

int func_749(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_379(iParam1)];
	if (unk_0x75D54ED6C1AD1642(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_750()
{
	return func_323(unk_0x95B959F18401C09A());
}

bool func_751(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_117, 14);
}

void func_752(var uParam0, bool bParam1, bool bParam2)
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

void func_753(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23355 == 0 || Global_262145.f_23355 == 1)
		{
			if (!unk_0x4CE1DD5CFC1F941E() || Global_262145.f_23355 == 1)
			{
				Global_2528542.f_274 = iParam0;
				if (iParam1 > Global_262145.f_6475)
				{
					iParam1 = Global_262145.f_6475;
				}
				Global_2528542.f_275 = iParam1;
				Global_2528542.f_276 = 0;
			}
		}
	}
}

int func_754(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return 25;
		
		case 157:
			return 22;
		
		case 159:
			return 21;
		
		case 151:
			return 33;
		
		case 148:
			return 23;
		
		case 164:
			return 24;
		
		case 152:
			return 26;
		
		case 153:
			return 30;
		
		case 154:
			return 32;
		
		case 155:
			return 28;
		
		case 160:
			return 29;
		
		case 162:
			return 31;
		
		case 163:
			return 27;
		
		case 166:
			return 38;
		
		case 170:
			return 34;
		
		case 171:
			return 35;
		
		case 172:
			return 36;
		
		case 173:
			return 37;
		
		case 179:
			return 23;
		
		default:
	}
	return 0;
}

int func_755(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 167:
			iVar0 = 0;
			break;
		
		case 169:
			iVar0 = 0;
			break;
		
		case 168:
			iVar0 = 0;
			break;
		
		case 166:
			iVar0 = 0;
			break;
		
		case 190:
			iVar0 = 0;
			break;
		
		case 191:
			iVar0 = 0;
			break;
		
		case 192:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_756(int iParam0, int iParam1)
{
	if (func_751(unk_0x95B959F18401C09A()) && func_750())
	{
		if (func_390(iParam0) && iParam1 > 0)
		{
			func_747(9087, (func_749(9087, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

void func_757(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	struct<2> Var6;
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
	
	iVar4 = func_545();
	if (iVar4 != func_18())
	{
		func_779(iVar4, &uVar0, &uVar1);
	}
	bVar5 = !func_1097(1);
	Var6.f_1 = -1;
	switch (iParam0)
	{
		case 168:
			if (!func_778())
			{
				unk_0xA4CF8D21E553B5FC(iParam1, iParam3);
			}
			break;
		
		case 190:
			if (func_750())
			{
				if (!func_778())
				{
					Var6 = { func_777() };
					unk_0xD03C3D53A195C1E1(iParam1, unk_0x36163153849DFDA1(func_776(Var6)), func_775(Var6), iParam4);
				}
			}
			else if (func_778())
			{
				func_764(-856006867, iParam1, &iVar7, 0, 1, 0);
				Global_4263509[iVar7 /*84*/].f_6 = uVar0;
				Global_4263509[iVar7 /*84*/].f_7 = uVar1;
				Global_4263509[iVar7 /*84*/].f_8 = bVar5;
			}
			else
			{
				unk_0xA4CF8D21E553B5FC(iParam1, iParam4);
			}
			break;
		
		case 226:
			if (func_763())
			{
				if (!func_778())
				{
					unk_0xD03C3D53A195C1E1(iParam1, unk_0x36163153849DFDA1(func_776(func_762(unk_0x95B959F18401C09A()))), 5, iParam4);
				}
			}
			else if (func_778())
			{
				func_764(-856006867, iParam1, &iVar8, 0, 1, 0);
				Global_4263509[iVar8 /*84*/].f_6 = uVar0;
				Global_4263509[iVar8 /*84*/].f_7 = uVar1;
				Global_4263509[iVar8 /*84*/].f_8 = bVar5;
			}
			else
			{
				unk_0xA4CF8D21E553B5FC(iParam1, iParam4);
			}
			break;
		
		case 230:
			if (func_763())
			{
				if (!func_778())
				{
					iVar2 = func_758(uParam5->f_16, iParam4);
					iVar3 = iParam1;
					if (iVar2 > 0)
					{
						iVar3 = (iVar3 - iVar2);
					}
					if (iParam2 > 0)
					{
						iVar3 = (iVar3 - iParam2);
					}
					unk_0x8A79103C750D1A15(iVar3, iParam4, iParam2, iVar2, uParam5->f_16);
				}
			}
			else if (func_778())
			{
				func_764(463142405, iParam1, &iVar9, 0, 1, 0);
				Global_4263509[iVar9 /*84*/].f_6 = uVar0;
				Global_4263509[iVar9 /*84*/].f_7 = uVar1;
				Global_4263509[iVar9 /*84*/].f_8 = bVar5;
			}
			else
			{
				unk_0x37FCBC83E6BD91A9(uVar0, uVar1, iParam1, bVar5);
			}
			break;
		
		case 233:
			if (func_778())
			{
				func_764(1407278493, iParam1, &iVar10, 0, 1, 0);
				Global_4263509[iVar10 /*84*/].f_6 = uVar0;
				Global_4263509[iVar10 /*84*/].f_7 = uVar1;
				Global_4263509[iVar10 /*84*/].f_8 = bVar5;
			}
			else
			{
				unk_0x858499DE32273450(iParam1);
			}
			break;
		
		case 237:
			if (func_763())
			{
				if (!func_778())
				{
					unk_0x895A8E4E832DC110(iParam1, uParam5->f_20, iParam4);
				}
			}
			else if (func_778())
			{
				func_764(-856006867, iParam1, &iVar11, 0, 1, 0);
				Global_4263509[iVar11 /*84*/].f_6 = uVar0;
				Global_4263509[iVar11 /*84*/].f_7 = uVar1;
				Global_4263509[iVar11 /*84*/].f_8 = bVar5;
			}
			else
			{
				unk_0xA4CF8D21E553B5FC(iParam1, iParam4);
			}
			break;
		
		case 250:
			if (func_778())
			{
				func_764(-961034881, iParam1, &iVar12, 0, 1, 0);
				Global_4263509[iVar12 /*84*/].f_6 = uVar0;
				Global_4263509[iVar12 /*84*/].f_7 = uVar1;
				Global_4263509[iVar12 /*84*/].f_8 = bVar5;
			}
			else
			{
				unk_0x37FAB2C396FC9AFA(iParam1);
			}
			break;
		
		case 249:
			if (func_778())
			{
				func_764(1135468152, iParam1, &iVar13, 0, 1, 0);
				Global_4263509[iVar13 /*84*/].f_6 = uVar0;
				Global_4263509[iVar13 /*84*/].f_7 = uVar1;
				Global_4263509[iVar13 /*84*/].f_8 = bVar5;
			}
			else
			{
				unk_0x874D7013B1B5609D(iParam1);
			}
			break;
		
		case 242:
		case 244:
		case 248:
		case 241:
		case 239:
		case 240:
			if (func_778())
			{
				func_764(-634726636, iParam1, &iVar14, 0, 1, 0);
				Global_4263509[iVar14 /*84*/].f_6 = uVar0;
				Global_4263509[iVar14 /*84*/].f_7 = uVar1;
				Global_4263509[iVar14 /*84*/].f_8 = bVar5;
			}
			else
			{
				unk_0xFF5647924B4375B1(iParam1);
			}
			break;
		
		case 243:
			if (func_778())
			{
				func_764(1698417709, iParam1, &iVar15, 0, 1, 0);
				Global_4263509[iVar15 /*84*/].f_6 = uVar0;
				Global_4263509[iVar15 /*84*/].f_7 = uVar1;
				Global_4263509[iVar15 /*84*/].f_8 = bVar5;
			}
			else
			{
				unk_0x566FD402B25787DE(iParam1);
			}
			break;
		
		default:
			if (func_778())
			{
				func_764(-856006867, iParam1, &iVar16, 0, 1, 0);
				Global_4263509[iVar16 /*84*/].f_6 = uVar0;
				Global_4263509[iVar16 /*84*/].f_7 = uVar1;
				Global_4263509[iVar16 /*84*/].f_8 = bVar5;
			}
			else
			{
				unk_0x9B2453C4B3C419EC(uVar0, uVar1, iParam1, bVar5);
			}
			break;
	}
}

int func_758(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_761(iParam0, iParam1);
	fVar1 = (to_float(func_759(iParam0, iParam1)) * fVar0);
	return round(fVar1);
}

int func_759(int iParam0, int iParam1)
{
	return (func_760(iParam0) * iParam1);
}

int func_760(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return Global_262145.f_22180;
		
		case 0:
			return Global_262145.f_22181;
		
		case 1:
			return Global_262145.f_22182;
		
		case 2:
			return Global_262145.f_22183;
		
		case 3:
			return Global_262145.f_22184;
		
		case 4:
			return Global_262145.f_22185;
		
		case 5:
			return Global_262145.f_22186;
		
		case 6:
			return Global_262145.f_22187;
		
		case 7:
			return Global_262145.f_22188;
		
		default:
	}
	return 0;
}

float func_761(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = to_float(Global_262145.f_22190);
	switch (iParam0)
	{
		case -1:
		case 8:
			return 0f;
		
		case 7:
			fVar0 = Global_262145.f_22192;
			fVar1 = to_float(Global_262145.f_22189);
			break;
		
		case 3:
			fVar0 = Global_262145.f_22192;
			fVar1 = to_float(Global_262145.f_22189);
			break;
		
		case 0:
			fVar0 = Global_262145.f_22193;
			break;
		
		case 1:
			fVar0 = Global_262145.f_22193;
			break;
		
		case 4:
			fVar0 = Global_262145.f_22193;
			break;
		
		case 6:
			fVar0 = Global_262145.f_22194;
			fVar1 = to_float(Global_262145.f_22191);
			break;
		
		case 2:
			fVar0 = Global_262145.f_22194;
			fVar1 = to_float(Global_262145.f_22191);
			break;
		
		case 5:
			fVar0 = Global_262145.f_22194;
			fVar1 = to_float(Global_262145.f_22191);
			break;
	}
	iVar2 = floor((to_float(iParam1) / fVar1));
	return (to_float(iVar2) * fVar0);
}

int func_762(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return Global_1589819[iParam0 /*818*/].f_273.f_177[5 /*12*/];
}

bool func_763()
{
	return func_20(unk_0x95B959F18401C09A());
}

void func_764(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_778())
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
				func_765(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_765(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
			if (iParam1 > 0)
			{
				func_765(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -1693570755:
			func_765(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_765(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_765(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_778())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0xB412AA3DEE298A52(func_38()) || unk_0x2832F5CD8A109CD6())
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
			*uParam0 = func_772(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_771(1, iParam4);
			Global_4264084 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_766(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_766(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x8950ED5730F62EE8(&(Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_767(iParam0);
	}
}

void func_767(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_778())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_770(iParam0))
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
		func_768(&(Global_4263509[iParam0 /*84*/]));
	}
}

void func_768(var uParam0)
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
	func_769(&(uParam0->f_13));
	func_769(&(uParam0->f_13.f_13));
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

void func_769(var uParam0)
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

int func_770(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263509[iParam0 /*84*/].f_65.f_5 == 1;
	}
	return 0;
}

void func_771(int iParam0, int iParam1)
{
	Global_2460949 = iParam1;
	Global_2460948 = iParam0;
}

int func_772(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263509[iVar0 /*84*/].f_65.f_2 == 0)
		{
			if (!func_778())
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
				func_773(Global_4263509[iVar0 /*84*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_773(struct<66> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_597(vVar0.y);
	if ((Global_262145.f_23434 && !Global_262145.f_23435) && !Global_262145.f_23436)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_774();
		unk_0x09269A9CFC145847(1, &vVar0, 35, iVar1);
	}
}

void func_774()
{
	unk_0x8F59DE352CFE248B("AM_ARENA_SHP");
}

int func_775(int iParam0)
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

char* func_776(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 2:
			sVar0 = "MP_BWH_WEED_1";
			break;
		
		case 1:
			sVar0 = "MP_BWH_METH_1";
			break;
		
		case 3:
			sVar0 = "MP_BWH_CRACK_1";
			break;
		
		case 5:
			sVar0 = "MP_BWH_FAKEID_1";
			break;
		
		case 4:
			sVar0 = "MP_BWH_CASH_1";
			break;
		
		case 7:
			sVar0 = "MP_BWH_WEED_2";
			break;
		
		case 6:
			sVar0 = "MP_BWH_METH_2";
			break;
		
		case 8:
			sVar0 = "MP_BWH_CRACK_2";
			break;
		
		case 10:
			sVar0 = "MP_BWH_FAKEID_2";
			break;
		
		case 9:
			sVar0 = "MP_BWH_CASH_2";
			break;
		
		case 12:
			sVar0 = "MP_BWH_WEED_3";
			break;
		
		case 11:
			sVar0 = "MP_BWH_METH_3";
			break;
		
		case 13:
			sVar0 = "MP_BWH_CRACK_3";
			break;
		
		case 15:
			sVar0 = "MP_BWH_FAKEID_3";
			break;
		
		case 14:
			sVar0 = "MP_BWH_CASH_3";
			break;
		
		case 17:
			sVar0 = "MP_BWH_WEED_4";
			break;
		
		case 16:
			sVar0 = "MP_BWH_METH_4";
			break;
		
		case 18:
			sVar0 = "MP_BWH_CRACK_4";
			break;
		
		case 20:
			sVar0 = "MP_BWH_FAKEID_4";
			break;
		
		case 19:
			sVar0 = "MP_BWH_CASH_4";
			break;
		
		case 21:
			sVar0 = "MP_BUNKER_1";
			break;
		
		case 22:
			sVar0 = "MP_BUNKER_2";
			break;
		
		case 23:
			sVar0 = "MP_BUNKER_3";
			break;
		
		case 24:
			sVar0 = "MP_BUNKER_4";
			break;
		
		case 25:
			sVar0 = "MP_BUNKER_5";
			break;
		
		case 26:
			sVar0 = "MP_BUNKER_6";
			break;
		
		case 27:
			sVar0 = "MP_BUNKER_7";
			break;
		
		case 28:
			sVar0 = "MP_BUNKER_9";
			break;
		
		case 29:
			sVar0 = "MP_BUNKER_10";
			break;
		
		case 30:
			sVar0 = "MP_BUNKER_11";
			break;
		
		case 31:
			sVar0 = "MP_BUNKER_12";
			break;
	}
	return sVar0;
}

struct<2> func_777()
{
	return Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_193;
}

int func_778()
{
	if (unk_0x4CE1DD5CFC1F941E())
	{
		return unk_0xFCAD2CB678396284();
	}
	return 0;
}

void func_779(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1626536[iParam0 /*603*/].f_11.f_8[0];
	*uParam2 = Global_1626536[iParam0 /*603*/].f_11.f_8[1];
}

int func_780(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_781(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_781(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_791(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x765F6FEEFF39224F(iParam1))
		{
			if (unk_0x068481DAF84B9654(iParam1))
			{
				iVar1 = unk_0x22B02EC53152632C(iParam1);
				func_787(unk_0x61B226C460A8FCC2(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_782(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_782(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	vector3 vVar0;
	
	vVar0 = { func_785(iParam0, 1) };
	if (iParam0 == func_784(unk_0x33CD235DF1E6A94E()))
	{
		func_783(1);
	}
	func_787(vVar0, iParam1, 0, sParam2, iParam3);
}

void func_783(int iParam0)
{
	Global_2437364.f_1890 = iParam0;
}

int func_784(int iParam0)
{
	return iParam0;
}

Vector3 func_785(int iParam0, bool bParam1)
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
	if (iParam0 == func_786(unk_0x33CD235DF1E6A94E()) && unk_0xCB75C331DD5DDCCC(unk_0x7B9C4CEB6D33A226()) == 4)
	{
		vVar0 = { unk_0x2CA911E7569D12EA(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		vVar0 = { unk_0xFBB1F99A825CAB09(iParam0, false) };
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

int func_786(int iParam0)
{
	return iParam0;
}

void func_787(vector3 vParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
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
			Global_2437364.f_1289[iVar1 /*30*/].f_4 = func_790(Global_2437364.f_1289[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2437364.f_1289[iVar1 /*30*/].f_7 = unk_0x78DCC5D0CB43DEBA();
			Global_2437364.f_1289[iVar1 /*30*/].f_3 = iParam1;
			Global_2437364.f_1289[iVar1 /*30*/].f_8 = iParam2;
			Global_2437364.f_1289[iVar1 /*30*/].f_9 = func_789();
			Global_2437364.f_1289[iVar1 /*30*/].f_10 = func_788();
			StringCopy(&(Global_2437364.f_1289[iVar1 /*30*/].f_22), sParam3, 16);
			Global_2437364.f_1289[iVar1 /*30*/].f_26 = unk_0x6985FC3098CCA0EB(unk_0x78DCC5D0CB43DEBA(), iParam4);
		}
	}
}

int func_788()
{
	if (Global_2437364.f_1890)
	{
		Global_2437364.f_1890 = 0;
		return 1;
	}
	Global_2437364.f_1890 = 0;
	return 0;
}

var func_789()
{
	var uVar0;
	
	uVar0 = Global_2437364.f_1892;
	Global_2437364.f_1892 = 1;
	return uVar0;
}

float func_790(vector3 vParam0, var uParam1, var uParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x16E00F066AFFEA0D(unk_0x69E12C716D4FB8BB(), vParam0, true);
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

var func_791(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_792(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_792(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_822(unk_0x95B959F18401C09A()) || func_821(unk_0x95B959F18401C09A()))
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
	else if (func_311() || func_820(unk_0x95B959F18401C09A()))
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
	if (func_819(sParam2))
	{
	}
	if (func_818())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_816(iVar1);
		fVar3 = (to_float(iVar1) * Global_262145.f_1);
		iVar1 = round(fVar3);
		if (bParam10)
		{
			iVar1 = func_815(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_813(0, &iVar1);
					break;
				
				case 3:
					func_813(1, &iVar1);
					break;
				
				case 1:
					func_811(&iVar1);
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
			func_810(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_802((func_809(unk_0x95B959F18401C09A()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0xE62DD6141BEF78D0(iVar1, iParam8, iParam9);
				if (Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_39.f_2 != -1)
				{
					func_810(1165, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_797(iVar1);
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
				func_793((func_795(unk_0x95B959F18401C09A()) + iVar1));
			}
			else
			{
				func_793((func_795(unk_0x95B959F18401C09A()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_793(int iParam0)
{
	if (func_818())
	{
		Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_211.f_5 = iParam0;
		func_794(joaat("mpply_globalxp"), iParam0);
	}
}

void func_794(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x12B6E23F244DDB0F(iVar0, iParam1, 1);
	}
}

int func_795(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_1228(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x95B959F18401C09A())
			{
				return func_796(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1589819[iParam0 /*818*/].f_211.f_5;
			}
		}
		else
		{
			return func_796(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_796(int iParam0)
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

void func_797(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_47(unk_0x95B959F18401C09A()) };
	if (unk_0x062B7A5C795CB453())
	{
		if (unk_0x4A5CDD2BE8070A7F(&Var0))
		{
			iVar1 = func_800(func_801(&Var0));
			if (iVar1 == 0)
			{
				func_799(&Global_1382581, iParam0);
				func_798(joaat("mpply_crew_local_xp_0"), Global_1382581);
			}
			else if (iVar1 == 1)
			{
				func_799(&Global_1382582, iParam0);
				func_798(joaat("mpply_crew_local_xp_1"), Global_1382582);
			}
			else if (iVar1 == 2)
			{
				func_799(&Global_1382583, iParam0);
				func_798(joaat("mpply_crew_local_xp_2"), Global_1382583);
			}
			else if (iVar1 == 3)
			{
				func_799(&Global_1382584, iParam0);
				func_798(joaat("mpply_crew_local_xp_3"), Global_1382584);
			}
			else if (iVar1 == 4)
			{
				func_799(&Global_1382585, iParam0);
				func_798(joaat("mpply_crew_local_xp_4"), Global_1382585);
			}
		}
	}
}

void func_798(int iParam0, int iParam1)
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

void func_799(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_800(int iParam0)
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

int func_801(var uParam0)
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

void func_802(int iParam0, int iParam1, int iParam2)
{
	if (func_818())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9494 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1382702[func_379(-1)])
				{
					unk_0xE62DD6141BEF78D0(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1382702[func_379(-1)])
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
		if (func_808(unk_0x95B959F18401C09A()))
		{
			Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_211.f_1 = iParam0;
			Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_211.f_6 = func_806(iParam0, 1);
		}
		func_746(639, iParam0, -1, 1);
		func_747(640, func_806(iParam0, 1), -1, 1, 0);
		Global_1382702[func_379(-1)] = iParam0;
		func_803(7, 0);
	}
}

void func_803(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_805(iParam0, iParam1))
	{
		iVar0 = func_804();
		Global_2458506[iVar0] = iParam0;
	}
}

int func_804()
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

int func_805(int iParam0, var uParam1)
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

int func_806(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_807(iParam0, 0);
}

int func_807(int iParam0, int iParam1)
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

int func_808(int iParam0)
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

int func_809(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x95B959F18401C09A())
			{
				return Global_1382702[func_379(-1)];
			}
			else if (func_808(iParam0))
			{
				return Global_1589819[iParam0 /*818*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1382702[func_379(-1)];
	}
	return 0;
}

void func_810(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_749(iParam0, func_379(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_748(iParam0))
	{
		func_747(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_746(iParam0, iVar0, iParam2, 1);
	}
}

void func_811(int iParam0)
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
				if (unk_0x12D3B4C76D4AAB00(iVar5) == iVar1 || func_119(unk_0x12D3B4C76D4AAB00(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x95B959F18401C09A())
					{
						if (func_48(unk_0x95B959F18401C09A(), iVar5))
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
		iVar6 = round((func_812(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round((func_812(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_812(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_813(bool bParam0, int iParam1)
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
				if (func_1228(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x95B959F18401C09A())
					{
						iVar1++;
						if (func_48(unk_0x95B959F18401C09A(), iVar4))
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
			if (func_1228(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x95B959F18401C09A())
				{
					if (func_814(unk_0x95B959F18401C09A(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_48(unk_0x95B959F18401C09A(), iVar4))
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
		iVar5 = round((func_812(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round((func_812(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_814(int iParam0, int iParam1)
{
	return vdist(func_40(iParam0), func_40(iParam1));
	return 0f;
}

int func_815(int iParam0)
{
	int iVar0;
	
	if (unk_0x39DF7EBBDAD69F4B() != 3)
	{
		return *iParam0;
	}
	iVar0 = round((func_812(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_816(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0xEE14D9A9F531ADDC(iParam0) > func_809(unk_0x95B959F18401C09A()))
		{
			iParam0 = -func_809(unk_0x95B959F18401C09A());
		}
	}
	if (func_817(8000, 0, 0) > 0)
	{
		if (func_817(8000, 0, 0) < (iParam0 + func_809(unk_0x95B959F18401C09A())))
		{
			iParam0 = (func_817(8000, 0, 0) - func_809(unk_0x95B959F18401C09A()));
		}
	}
	return iParam0;
}

int func_817(int iParam0, bool bParam1, int iParam2)
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

int func_818()
{
	return 1;
}

int func_819(char* sParam0)
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

int func_820(int iParam0)
{
	return func_564(func_290(iParam0));
}

bool func_821(int iParam0)
{
	return Global_2424047[iParam0 /*416*/].f_115 == 2;
}

bool func_822(int iParam0)
{
	return Global_2424047[iParam0 /*416*/].f_115 == 7;
}

void func_823()
{
	Global_2460154 = 1;
}

void func_824(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_345(7))
	{
		return;
	}
	iVar0 = func_827(iParam0);
	iVar1 = func_826(iParam0);
	iVar2 = unk_0xEE14D9A9F531ADDC(unk_0x5009A219B22D2352(Global_2528542.f_4889.f_261, unk_0x78DCC5D0CB43DEBA()));
	if (func_825(iParam0) != -1)
	{
		if (iVar2 > func_825(iParam0))
		{
			iVar2 = func_825(iParam0);
		}
	}
	else if (iVar2 > Global_262145.f_12286)
	{
		iVar2 = Global_262145.f_12286;
	}
	iVar3 = floor((to_float(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_825(int iParam0)
{
	if (func_293(iParam0, 0) || func_391(iParam0))
	{
		return Global_262145.f_18361;
	}
	if (func_390(iParam0))
	{
		return Global_262145.f_18360;
	}
	switch (iParam0)
	{
		case 192:
			return Global_262145.f_18357;
		
		case 191:
			return Global_262145.f_18359;
		
		case 190:
			return Global_262145.f_18358;
		
		case 227:
			return Global_262145.f_20917;
		
		case 226:
			return Global_262145.f_20905;
		
		case 225:
			return Global_262145.f_20925;
		
		case 230:
			return Global_262145.f_22177;
		
		case 229:
			return Global_262145.f_22081;
		
		case 233:
			return Global_262145.f_22652;
		
		case 237:
			return Global_262145.f_23808;
		
		case 238:
			return Global_262145.f_23919;
		
		case 249:
			return Global_262145.f_23935;
		
		case 243:
			return Global_262145.f_26063;
		
		default:
	}
	return -1;
}

int func_826(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12377;
		
		case 152:
			return Global_262145.f_12412;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_12400;
		
		case 157:
			return Global_262145.f_12367;
		
		case 159:
			return Global_262145.f_12350;
		
		case 164:
			return Global_262145.f_12390;
		
		case 160:
			return Global_262145.f_12440;
		
		case 162:
			return Global_262145.f_12460;
		
		case 163:
			return Global_262145.f_12425;
		
		case 154:
			return Global_262145.f_12495;
		
		case 155:
			return Global_262145.f_12485;
		
		case 153:
			return Global_262145.f_12449;
		
		case 170:
			return Global_262145.f_14872;
		
		case 171:
			return Global_262145.f_14931;
		
		case 172:
			return Global_262145.f_14949;
		
		case 173:
			return Global_262145.f_14890;
		
		case 166:
			return Global_262145.f_14905;
		
		case 167:
			return Global_262145.f_14996;
		
		case 169:
			return Global_262145.f_14968;
		
		case 168:
			return Global_262145.f_14961;
		
		case 179:
			return Global_262145.f_18240;
		
		case 180:
			return Global_262145.f_18019;
		
		case 182:
			return Global_262145.f_18019;
		
		case 183:
			return Global_262145.f_18019;
		
		case 185:
			return Global_262145.f_18019;
		
		case 186:
			return Global_262145.f_18019;
		
		case 189:
			return Global_262145.f_18240;
		
		case 190:
			return Global_262145.f_17895;
		
		case 191:
			return Global_262145.f_17986;
		
		case 192:
			return Global_262145.f_17780;
		
		case 193:
			return Global_262145.f_18240;
		
		case 194:
			return Global_262145.f_18240;
		
		case 195:
			return Global_262145.f_18019;
		
		case 197:
			return Global_262145.f_18019;
		
		case 198:
			return Global_262145.f_18019;
		
		case 199:
			return Global_262145.f_18240;
		
		case 200:
			return Global_262145.f_18240;
		
		case 201:
			return Global_262145.f_18240;
		
		case 205:
			return Global_262145.f_18240;
		
		case 207:
			return Global_262145.f_18019;
		
		case 208:
			return Global_262145.f_18019;
		
		case 209:
			return Global_262145.f_18019;
		
		case 210:
			return Global_262145.f_18240;
		
		case 211:
			return Global_262145.f_18240;
		
		case 214:
			return Global_262145.f_19090;
		
		case 215:
			return Global_262145.f_19092;
		
		case 216:
			return Global_262145.f_19094;
		
		case 217:
			return Global_262145.f_19096;
		
		case 218:
			return Global_262145.f_19098;
		
		case 219:
			return Global_262145.f_19100;
		
		case 220:
			return Global_262145.f_19102;
		
		case 221:
			return Global_262145.f_19104;
		
		case 225:
			if (!func_763())
			{
				return Global_262145.f_20927;
			}
			break;
		
		case 226:
			if (!func_763())
			{
				return Global_262145.f_20907;
			}
			break;
		
		case 227:
			if (!func_763())
			{
				return Global_262145.f_20919;
			}
			break;
		
		case 229:
			if (!func_763())
			{
				return Global_262145.f_22083;
			}
			break;
		
		case 230:
			if (!func_763())
			{
				return Global_262145.f_22179;
			}
			break;
		
		case 233:
			if (!func_763())
			{
				return Global_262145.f_22651;
			}
			break;
		
		case 241:
			return 100;
		
		case 242:
			return 100;
		
		case 244:
			return 100;
		
		case 248:
			return 100;
		
		case 239:
			return 100;
		
		case 240:
			return 100;
		
		case 250:
			return 100;
		
		case 237:
			if (!func_763())
			{
				return Global_262145.f_23810;
			}
			break;
		
		case 238:
			if (!func_763())
			{
				return Global_262145.f_23921;
			}
			break;
		
		case 249:
			if (!func_763())
			{
				return Global_262145.f_23937;
			}
			break;
		
		case 243:
			if (!func_763())
			{
				return Global_262145.f_26066;
			}
			break;
	}
	return 0;
}

int func_827(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12376;
		
		case 152:
			return Global_262145.f_12411;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_12399;
		
		case 157:
			return Global_262145.f_12366;
		
		case 159:
			return Global_262145.f_12349;
		
		case 164:
			return Global_262145.f_12389;
		
		case 160:
			return Global_262145.f_12439;
		
		case 162:
			return Global_262145.f_12459;
		
		case 163:
			return Global_262145.f_12424;
		
		case 154:
			return Global_262145.f_12494;
		
		case 155:
			return Global_262145.f_12484;
		
		case 153:
			return Global_262145.f_12448;
		
		case 170:
			return Global_262145.f_14871;
		
		case 171:
			return Global_262145.f_14930;
		
		case 172:
			return Global_262145.f_14948;
		
		case 173:
			return Global_262145.f_14889;
		
		case 166:
			return Global_262145.f_14904;
		
		case 179:
			return Global_262145.f_18239;
		
		case 180:
			return Global_262145.f_18018;
		
		case 182:
			return Global_262145.f_18018;
		
		case 183:
			return Global_262145.f_18018;
		
		case 185:
			return Global_262145.f_18018;
		
		case 186:
			return Global_262145.f_18018;
		
		case 189:
			return Global_262145.f_18239;
		
		case 193:
			return Global_262145.f_18239;
		
		case 194:
			return Global_262145.f_18239;
		
		case 195:
			return Global_262145.f_18018;
		
		case 197:
			return Global_262145.f_18018;
		
		case 198:
			return Global_262145.f_18018;
		
		case 199:
			return Global_262145.f_18239;
		
		case 200:
			return Global_262145.f_18239;
		
		case 201:
			return Global_262145.f_18239;
		
		case 205:
			return Global_262145.f_18239;
		
		case 207:
			return Global_262145.f_18018;
		
		case 208:
			return Global_262145.f_18018;
		
		case 209:
			return Global_262145.f_18018;
		
		case 210:
			return Global_262145.f_18239;
		
		case 211:
			return Global_262145.f_18239;
		
		case 190:
			if (!func_763())
			{
				return Global_262145.f_17894;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (!func_763())
			{
				return Global_262145.f_17985;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (!func_763())
			{
				return Global_262145.f_17779;
			}
			else
			{
				return 0;
			}
			break;
		
		case 214:
			return Global_262145.f_19089;
		
		case 215:
			return Global_262145.f_19091;
		
		case 216:
			return Global_262145.f_19093;
		
		case 217:
			return Global_262145.f_19095;
		
		case 218:
			return Global_262145.f_19097;
		
		case 219:
			return Global_262145.f_19099;
		
		case 220:
			return Global_262145.f_19101;
		
		case 221:
			return Global_262145.f_19103;
		
		case 225:
			if (!func_763())
			{
				return Global_262145.f_20926;
			}
			break;
		
		case 226:
			if (!func_763())
			{
				return Global_262145.f_20906;
			}
			break;
		
		case 227:
			if (!func_763())
			{
				return Global_262145.f_20918;
			}
			break;
		
		case 229:
			if (!func_763())
			{
				return Global_262145.f_22082;
			}
			break;
		
		case 230:
			if (!func_763())
			{
				return Global_262145.f_22178;
			}
			break;
		
		case 233:
			if (!func_763())
			{
				return Global_262145.f_22653;
			}
			break;
		
		case 241:
			return 500;
		
		case 242:
			return 500;
		
		case 244:
			return 500;
		
		case 248:
			return 500;
		
		case 239:
			return 500;
		
		case 240:
			return 500;
		
		case 250:
			return 500;
		
		case 237:
			if (!func_763())
			{
				return Global_262145.f_23809;
			}
			break;
		
		case 238:
			if (!func_763())
			{
				return Global_262145.f_23920;
			}
			break;
		
		case 249:
			if (!func_763())
			{
				return Global_262145.f_23936;
			}
			break;
		
		case 243:
			return Global_262145.f_26062;
	}
	return 0;
}

void func_828(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_763())
		{
			if (func_1097(0))
			{
				if (!func_321(0))
				{
					if (unk_0xC4DEA49C5B465481(func_545()))
					{
						if (func_836() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_836());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_834(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_833("GB_BCUT_TICK1", func_545(), iVar0, 0, 0, 1, 1);
						}
						func_832(20);
						func_829(func_545(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_829(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_1228(iParam0, 0, 1))
	{
		Var0 = 614714962;
		Var0.f_1 = unk_0x95B959F18401C09A();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_831(iParam0);
		func_830(&(Var0.f_6), &(Var0.f_7));
		unk_0x09269A9CFC145847(1, &Var0, 8, func_597(iParam0));
	}
}

void func_830(var uParam0, var uParam1)
{
	*uParam0 = Global_1645834.f_9;
	*uParam1 = Global_1645834.f_10;
}

var func_831(int iParam0)
{
	return Global_1626536[iParam0 /*603*/].f_529;
}

void func_832(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x8950ED5730F62EE8(&(Global_2528542.f_4889.f_7[iVar0]), iVar1);
}

int func_833(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
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
		unk_0x75D3F9044123D4F9(func_641(iParam1, -2, 1, 0, 0));
		unk_0xD61E5ED1D4E687A5(func_639(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x75D3F9044123D4F9(iParam3);
		}
		unk_0xE800DC85FDF60F85(iParam2);
		iVar0 = unk_0x9457C7E9A5E2BC86(0, 1);
		func_634(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_834(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_835(1);
	}
	else
	{
		iVar1 = func_835(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_835(bool bParam0)
{
	if (bParam0)
	{
		return round((0.05f * 100f));
	}
	return Global_262145.f_12281;
}

int func_836()
{
	return Global_262145.f_12280;
}

void func_837(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	
	bVar18 = func_321(1);
	bVar19 = false;
	if (iParam0 == 237)
	{
		if (func_763())
		{
			iVar17 = unk_0x95B959F18401C09A();
		}
		else
		{
			iVar17 = func_545();
		}
		iVar11 = iVar17;
		if (iVar11 != -1)
		{
			iVar0 = Global_1589819[iVar11 /*818*/].f_796.f_1;
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar19 = true;
			}
			else
			{
				fVar12 = to_float(uParam1->f_10);
				fVar13 = to_float(uParam1->f_11);
				fVar14 = ((fVar12 / fVar13) * 100f);
				fVar15 = ((IntToFloat(iVar0) / 100f) * fVar14);
				iVar1 = ceil(fVar15);
			}
			*uParam3 = iVar1;
			if (bVar19)
			{
				iVar2 = Global_1589819[iVar11 /*818*/].f_796.f_2;
			}
			else
			{
				iVar2 = func_853(Global_1589819[iVar11 /*818*/].f_796, *uParam3);
			}
			if (uParam1->f_17)
			{
				iVar20 = (iVar2 - ceil((IntToFloat(iVar2) * 0.9f)));
				if (iVar20 > 100000)
				{
					iVar20 = 100000;
				}
				iVar2 = (iVar2 - iVar20);
			}
			*iParam2 = (*iParam2 + iVar2);
			iVar10 = func_852(*iParam2);
			if (iVar10 > 0)
			{
				if (iVar17 == unk_0x95B959F18401C09A())
				{
					func_851("TICK_TCUT", iVar10, 1);
				}
				*iParam2 = (*iParam2 - iVar10);
			}
			Global_1669680.f_49 = *uParam3;
			if (iVar17 == unk_0x95B959F18401C09A())
			{
				if (iVar2 > 0)
				{
					func_850(iVar2);
				}
				if (*uParam3 > 0)
				{
					func_848(*uParam3);
				}
				iVar6 = func_847(&uVar5);
				iVar7 = Global_262145.f_23839;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar9 = ceil((IntToFloat(iVar6) * Global_262145.f_23838));
				iVar8 = ((*iParam2 / 100) * iVar9);
				*iParam2 = (*iParam2 + iVar8);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_832(140);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar18)
					{
						iVar21 = 0;
						while (iVar21 < unk_0xF839A4FC3E76D324())
						{
							iVar22 = iVar21;
							if (unk_0x1B094AC15936B3DB(iVar22))
							{
								iVar23 = unk_0xEB9DC13235C0B345(iVar22);
								if (func_846(iVar23))
								{
									func_838(iVar23, 1, 198210293);
								}
							}
							iVar21++;
						}
					}
				}
				Global_2528542.f_4889.f_377 = *iParam2;
			}
			else if (bVar18)
			{
				fVar16 = Global_262145.f_23811;
				iVar3 = ceil((IntToFloat(*iParam2) * fVar16));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_23812;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1680666 = *iParam2;
					func_832(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_838(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_840(iParam0);
	func_839(iParam0, uVar0, iParam1, iParam2);
}

void func_839(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<8> Var0;
	
	Var0 = -2087882476;
	Var0.f_1 = unk_0x95B959F18401C09A();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_831(iParam0);
	func_830(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_18())
	{
		if (unk_0xC4DEA49C5B465481(iParam0))
		{
			unk_0x09269A9CFC145847(1, &Var0, 8, func_597(iParam0));
		}
	}
}

int func_840(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_845();
	iVar0 = func_843(iParam0, iVar0);
	iVar1 = Global_1626536[func_545() /*603*/].f_11.f_446;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_14832));
	if (iVar0 < func_842())
	{
		iVar0 = func_842();
	}
	if (iVar0 > func_841())
	{
		iVar0 = func_841();
	}
	return iVar0;
}

int func_841()
{
	return Global_262145.f_14833;
}

int func_842()
{
	return Global_262145.f_16008;
}

int func_843(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_911(iParam0) * func_844());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_844()
{
	return Global_262145.f_16007;
}

var func_845()
{
	return Global_262145.f_12272;
}

int func_846(int iParam0)
{
	if (unk_0xC4DEA49C5B465481(iParam0))
	{
		if (iParam0 != unk_0x95B959F18401C09A())
		{
			if (func_16(iParam0, unk_0x95B959F18401C09A(), 0))
			{
				if (!func_265(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_847(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0xC4DEA49C5B465481(unk_0x7C1C88877E8AAA50(iVar0)))
		{
			iVar2 = unk_0x7C1C88877E8AAA50(iVar0);
			if (!func_36(iVar2, 0) && !func_16(iVar2, unk_0x95B959F18401C09A(), 1))
			{
				iVar1++;
			}
			else if (func_36(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_848(int iParam0)
{
	func_849(iParam0, 7236);
}

void func_849(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_749(iParam1, -1, 0);
	func_747(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_850(int iParam0)
{
	func_849(iParam0, 7231);
}

int func_851(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x1F85AD4B26B92795(sParam0);
	unk_0xE800DC85FDF60F85(iParam1);
	iVar0 = unk_0x9457C7E9A5E2BC86(0, 1);
	func_634(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_852(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = to_float(iParam0);
	fVar1 = (fVar0 * Global_262145.f_23840);
	if (fVar1 > 100000f)
	{
		fVar1 = 100000f;
	}
	return round(fVar1);
}

int func_853(struct<5> Param0, int iParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	if (iParam1 == Param0.f_1)
	{
		return Param0.f_2;
	}
	iVar0 = Param0.f_2;
	if ((Param0.f_4 == 1 || Param0.f_4 == 2) || Param0.f_4 == 3)
	{
		iVar0 = (iVar0 - Param0.f_3);
	}
	fVar1 = (to_float(iParam1) / to_float(Param0.f_1));
	fVar2 = to_float(iVar0);
	return floor((fVar2 * fVar1));
}

void func_854(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	*uParam4 = 0;
	bVar16 = func_321(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_763())
		{
			iVar15 = unk_0x95B959F18401C09A();
		}
		else
		{
			iVar15 = func_545();
		}
		if (iVar15 != -1)
		{
			if (uParam1->f_16 == 8)
			{
				iVar0 = (func_866(iVar15) + uParam1->f_8);
			}
			else
			{
				iVar0 = (func_857(uParam1->f_16) + uParam1->f_8);
			}
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar17 = true;
			}
			else
			{
				fVar10 = to_float(uParam1->f_10);
				fVar11 = to_float(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = ceil(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_759(uParam1->f_16, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_758(uParam1->f_16, *uParam3);
				if (iVar9 > 0)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (func_856(*iParam2) > 0)
			{
				if (iVar15 == unk_0x95B959F18401C09A())
				{
					func_851("SMTICK_RONCUT", func_856(*iParam2), 1);
				}
				*iParam2 = (*iParam2 - func_856(*iParam2));
			}
			if (iVar15 == unk_0x95B959F18401C09A())
			{
				func_855(iVar2, iVar9);
				iVar6 = func_847(&uVar5);
				iVar7 = Global_262145.f_22196;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = ceil((IntToFloat(iVar6) * Global_262145.f_22195));
				*uParam4 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + *uParam4);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_832(44);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar16)
					{
						iVar18 = 0;
						while (iVar18 < unk_0xF839A4FC3E76D324())
						{
							iVar19 = iVar18;
							if (unk_0x1B094AC15936B3DB(iVar19))
							{
								iVar20 = unk_0xEB9DC13235C0B345(iVar19);
								if (func_846(iVar20))
								{
									func_838(iVar20, 1, 1160415507);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2528542.f_4889.f_377 = *iParam2;
			}
			else if (bVar16)
			{
				fVar14 = Global_262145.f_22129;
				iVar3 = ceil((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_22130;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1680666 = *iParam2;
					func_832(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_855(int iParam0, int iParam1)
{
	if (iParam0 > 0)
	{
		func_849(iParam0, 6116);
	}
	if (iParam1 > 0)
	{
		func_849(iParam1, 6117);
	}
}

int func_856(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = to_float(iParam0);
	fVar1 = (fVar0 * Global_262145.f_22163);
	if (fVar1 > to_float(Global_262145.f_22164))
	{
		fVar1 = to_float(Global_262145.f_22164);
	}
	return round(fVar1);
}

int func_857(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_864())
	{
		return 0;
	}
	if (iParam0 == 8)
	{
		return func_866(unk_0x95B959F18401C09A());
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		iVar2 = func_859(func_860(func_863(iVar0), -1, -1));
		if (func_858(iVar2) == iParam0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_858(int iParam0)
{
	switch (iParam0)
	{
		case -508960047:
			return 5;
		
		case -1996578712:
			return 5;
		
		case -324063008:
			return 7;
		
		case -1537242760:
			return 7;
		
		case 167523060:
			return 1;
		
		case 440723308:
			return 1;
		
		case -1821684485:
			return 6;
		
		case 1075487129:
			return 6;
		
		case 1339867730:
			return 4;
		
		case 1158536477:
			return 4;
		
		case -1222709082:
			return 0;
		
		case -260422691:
			return 0;
		
		case -1117639471:
			return 3;
		
		case -1434473216:
			return 3;
		
		case 690570889:
			return 2;
		
		case 320416020:
			return 2;
		
		default:
	}
	return -1;
}

int func_859(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -508960047;
		
		case 2:
			return -1996578712;
		
		case 3:
			return -324063008;
		
		case 4:
			return -1537242760;
		
		case 5:
			return 167523060;
		
		case 6:
			return 440723308;
		
		case 7:
			return -1821684485;
		
		case 8:
			return 1075487129;
		
		case 9:
			return 1339867730;
		
		case 10:
			return 1158536477;
		
		case 11:
			return -1222709082;
		
		case 12:
			return -260422691;
		
		case 13:
			return -1117639471;
		
		case 14:
			return -1434473216;
		
		case 15:
			return 690570889;
		
		case 16:
			return 320416020;
		
		default:
	}
	return 0;
}

int func_860(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_38();
	}
	iVar0 = 0;
	iVar1 = func_862(iParam0, iParam1);
	iVar2 = func_861(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0xD6BB9B31765DFA24(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_861(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0x16C7E6707C38E190((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0x16C7E6707C38E190((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0x16C7E6707C38E190((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0x16C7E6707C38E190((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0x16C7E6707C38E190((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0x16C7E6707C38E190((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0x16C7E6707C38E190((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0x16C7E6707C38E190((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0x16C7E6707C38E190((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0x16C7E6707C38E190((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0x16C7E6707C38E190((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0x16C7E6707C38E190((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0x16C7E6707C38E190((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0x16C7E6707C38E190((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0x16C7E6707C38E190((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0x16C7E6707C38E190((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - unk_0x16C7E6707C38E190((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - unk_0x16C7E6707C38E190((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - unk_0x16C7E6707C38E190((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - unk_0x16C7E6707C38E190((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = ((iParam0 - 25538) - unk_0x16C7E6707C38E190((iParam0 - 25538)) * 8) * 8;
	}
	return iVar0;
}

int func_862(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_38();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xE88E9DF07DD22760((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xE88E9DF07DD22760((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xE88E9DF07DD22760((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xE88E9DF07DD22760((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x343D7C741C8353C8((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x343D7C741C8353C8((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 25538), 0, 1, iParam1, "_CASINOPSTAT_INT");
	}
	return iVar0;
}

int func_863(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 16011;
		
		case 1:
			return 16012;
		
		case 2:
			return 16013;
		
		case 3:
			return 16014;
		
		case 4:
			return 16015;
		
		case 5:
			return 16016;
		
		case 6:
			return 16017;
		
		case 7:
			return 16018;
		
		case 8:
			return 16019;
		
		case 9:
			return 16020;
		
		case 10:
			return 16021;
		
		case 11:
			return 16022;
		
		case 12:
			return 16023;
		
		case 13:
			return 16024;
		
		case 14:
			return 16025;
		
		case 15:
			return 16026;
		
		case 16:
			return 16027;
		
		case 17:
			return 16028;
		
		case 18:
			return 16029;
		
		case 19:
			return 16030;
		
		case 20:
			return 16031;
		
		case 21:
			return 16032;
		
		case 22:
			return 16033;
		
		case 23:
			return 16034;
		
		case 24:
			return 16035;
		
		case 25:
			return 16036;
		
		case 26:
			return 16037;
		
		case 27:
			return 16038;
		
		case 28:
			return 16039;
		
		case 29:
			return 16040;
		
		case 30:
			return 16041;
		
		case 31:
			return 16042;
		
		case 32:
			return 16043;
		
		case 33:
			return 16044;
		
		case 34:
			return 16045;
		
		case 35:
			return 16046;
		
		case 36:
			return 16047;
		
		case 37:
			return 16048;
		
		case 38:
			return 16049;
		
		case 39:
			return 16050;
		
		case 40:
			return 16051;
		
		case 41:
			return 16052;
		
		case 42:
			return 16053;
		
		case 43:
			return 16054;
		
		case 44:
			return 16055;
		
		case 45:
			return 16056;
		
		case 46:
			return 16057;
		
		case 47:
			return 16058;
		
		case 48:
			return 16059;
		
		case 49:
			return 16060;
		
		default:
	}
	return 16011;
}

bool func_864()
{
	return func_865() != 0;
}

int func_865()
{
	return Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_258;
}

int func_866(int iParam0)
{
	if (iParam0 != func_18() && func_867(iParam0))
	{
		return Global_1589819[iParam0 /*818*/].f_273.f_258.f_3;
	}
	return 0;
}

int func_867(int iParam0)
{
	if (iParam0 != func_18())
	{
		return Global_1589819[iParam0 /*818*/].f_273.f_258 != 0;
	}
	return 0;
}

void func_868(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	bVar17 = func_321(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_763())
		{
			iVar15 = unk_0x95B959F18401C09A();
		}
		else
		{
			iVar15 = func_545();
		}
		if (iVar15 != -1)
		{
			iVar16 = func_762(iVar15);
			iVar0 = (func_889(iVar15, iVar16) + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
			}
			else
			{
				fVar10 = to_float(uParam1->f_10);
				fVar11 = to_float(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = ceil(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_885(iVar15, iVar16, iVar1);
			if (uParam1->f_14 == 0)
			{
				iVar2 = ceil((IntToFloat(iVar2) * Global_262145.f_20909));
			}
			else
			{
				iVar2 = ceil((IntToFloat(iVar2) * Global_262145.f_20908));
			}
			*iParam2 = (*iParam2 + iVar2);
			if (iVar15 == unk_0x95B959F18401C09A())
			{
				func_882(iVar16, iVar2);
				if (func_878(iVar16) >= Global_262145.f_20457 || iVar2 >= Global_262145.f_20457)
				{
					func_869(5);
				}
				iVar6 = func_847(&uVar5);
				iVar7 = round(Global_262145.f_20911);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = ceil((IntToFloat(iVar6) * Global_262145.f_20910));
				iVar9 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + iVar9);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_832(108);
					}
					else
					{
						func_832(110);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar17)
					{
						iVar18 = 0;
						while (iVar18 < unk_0xF839A4FC3E76D324())
						{
							iVar19 = iVar18;
							if (unk_0x1B094AC15936B3DB(iVar19))
							{
								iVar20 = unk_0xEB9DC13235C0B345(iVar19);
								if (func_846(iVar20))
								{
									func_838(iVar20, 1, -1905128202);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2528542.f_4889.f_377 = *iParam2;
			}
			else if (bVar17)
			{
				fVar14 = Global_262145.f_20912;
				iVar3 = ceil((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_20913;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1680666 = *iParam2;
					func_832(112);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
	else if (iParam0 == 227)
	{
	}
}

void func_869(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_20445)
			{
				if (func_871(Global_262145.f_20446))
				{
					func_870("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0, 1);
				}
			}
			break;
		
		case 1:
			if (Global_262145.f_20447)
			{
				if (func_871(Global_262145.f_20448))
				{
					func_870("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0, 1);
				}
			}
			break;
		
		case 2:
			if (Global_262145.f_20449)
			{
				if (func_871(Global_262145.f_20450))
				{
					func_870("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0, 1);
				}
			}
			break;
		
		case 3:
			if (Global_262145.f_20451)
			{
				if (func_871(Global_262145.f_20452))
				{
					func_870("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0, 1);
				}
			}
			break;
		
		case 4:
			if (Global_262145.f_20453)
			{
				if (func_871(Global_262145.f_20454))
				{
					func_870("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0, 1);
				}
			}
			break;
		
		case 5:
			if (Global_262145.f_20455)
			{
				if (func_871(Global_262145.f_20456))
				{
					func_851("CLOTHAWDSTRAP3", Global_262145.f_20457, 1);
				}
			}
			break;
		
		case 6:
			if (Global_262145.f_20458)
			{
				if (func_871(Global_262145.f_20459))
				{
					func_851("CLOTHAWDSTRAP5", Global_262145.f_20591, 1);
				}
			}
			break;
		
		case 7:
			if (Global_262145.f_20461)
			{
				if (func_871(Global_262145.f_20462))
				{
					func_870("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0, 1);
				}
			}
			break;
		
		case 8:
			if (Global_262145.f_20463)
			{
				if (func_871(Global_262145.f_20464))
				{
					func_870("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0, 1);
				}
			}
			break;
		
		case 9:
			if (Global_262145.f_20465)
			{
				if (func_871(Global_262145.f_20466))
				{
					func_870("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0, 1);
				}
			}
			break;
		
		case 10:
			if (Global_262145.f_20467)
			{
				if (func_871(Global_262145.f_20468))
				{
					func_870("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0, 1);
				}
			}
			break;
		
		case 11:
			if (Global_262145.f_20469)
			{
				if (func_871(Global_262145.f_20470))
				{
					func_870("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0, 1);
				}
			}
			break;
		
		case 12:
			if (Global_262145.f_20471)
			{
				if (func_871(Global_262145.f_20472))
				{
					func_870("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0, 1);
				}
			}
			break;
		
		case 13:
			if (Global_262145.f_20473)
			{
				if (func_871(Global_262145.f_20474))
				{
					func_870("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0, 1);
				}
			}
			break;
		
		case 14:
			if (Global_262145.f_20475)
			{
				if (func_871(Global_262145.f_20476))
				{
					func_870("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0, 1);
				}
			}
			break;
	}
}

int func_870(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	unk_0x1F85AD4B26B92795(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x75D3F9044123D4F9(iParam2);
	}
	if (!iParam3 == 0)
	{
		unk_0x75D3F9044123D4F9(iParam3);
	}
	unk_0xFA6BEE2B1507FF1E(sParam1);
	if (!bParam4)
	{
		iVar0 = unk_0x9457C7E9A5E2BC86(0, 1);
	}
	else
	{
		Global_2505680 = { func_47(unk_0x95B959F18401C09A()) };
		if (unk_0xDD530AC51A578470(&Global_2505610, 35, &Global_2505680))
		{
			iVar1 = 0;
			if (unk_0xCE3CFF625BEBAA04(&(Global_2505610.f_22), "Leader") && Global_2505610.f_30 == 0)
			{
				iVar1 = 1;
			}
			if (Global_2505610.f_21 > 0)
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 1;
			}
			iVar0 = unk_0xFB9D4E6534D32F54(iVar2, unk_0x068AEB9AB0499A8A(&Global_2505610, 35), &(Global_2505610.f_17), Global_2505610.f_30, iVar1, 0, Global_2505610, unk_0xEEF8394DB3D3DFA1(unk_0x95B959F18401C09A()), Global_1314024, Global_1314025, Global_1314026);
		}
		else
		{
			iVar0 = unk_0x9457C7E9A5E2BC86(0, 1);
		}
	}
	func_634(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_871(int iParam0)
{
	switch (iParam0)
	{
		case 558790811:
		case 1740171158:
		case -1191485992:
		case -1735342207:
			if (!func_875(15417, -1, -1))
			{
				func_874(15417, 1, -1, 1);
				return 1;
			}
			break;
		
		case 2108830041:
		case -120911428:
		case -1407302654:
		case -2039798986:
			if (!func_875(15418, -1, -1))
			{
				func_874(15418, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1898746692:
		case -1359197372:
		case -140996548:
		case -1850642937:
			if (!func_875(15425, -1, -1))
			{
				func_874(15425, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case -695364761:
		case 1263491585:
		case -1307315235:
		case 258618816:
			if (!func_875(15405, -1, -1))
			{
				func_874(15405, 1, -1, 1);
				return 1;
			}
			break;
		
		case 2024167318:
		case 1915398071:
		case -571324979:
		case 1374601256:
			if (!func_875(15393, -1, -1))
			{
				func_874(15393, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1720955761:
		case 1608057620:
		case 867332432:
		case -660288110:
			if (!func_875(15409, -1, -1))
			{
				func_874(15409, 1, -1, 1);
				return 1;
			}
			break;
		
		case 221872318:
		case -1802539904:
		case -1005186539:
		case -426022529:
			if (!func_875(15396, -1, -1))
			{
				func_874(15396, 1, -1, 1);
				return 1;
			}
			break;
		
		case -2098369500:
		case -1196968784:
		case -1314656979:
		case -1132522169:
			if (!func_875(15412, -1, -1))
			{
				func_874(15412, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1172743557:
		case -1502212019:
		case 1110085176:
		case -889671110:
			if (!func_378(209, -1))
			{
				func_872(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1883175477:
		case -584614481:
		case -1736983851:
		case -182614393:
			if (!func_875(15403, -1, -1))
			{
				func_874(15403, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1449333520:
		case -890709710:
		case -1496983695:
		case 48701978:
			if (!func_378(209, -1))
			{
				func_872(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -869990766:
		case -581140963:
		case 1827333048:
		case -646852824:
			if (!func_875(15389, -1, -1))
			{
				func_874(15389, 1, -1, 1);
				return 1;
			}
			break;
		
		case -542628448:
		case -870458464:
		case 420690954:
		case -408392811:
			if (!func_378(209, -1))
			{
				func_872(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 787769067:
		case 1132791298:
		case 1330653315:
		case 1717168382:
			if (!func_875(15398, -1, -1))
			{
				func_874(15398, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case -1361097493:
		case -73647644:
		case -1036580403:
		case -1765816422:
		case -1991379993:
		case -1731611121:
			if (!func_875(15400, -1, -1))
			{
				func_874(15400, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1167465472:
		case -313418417:
		case -203035350:
		case -1533320367:
		case 2065127290:
		case -390081030:
			if (!func_378(209, -1))
			{
				func_872(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -2105609173:
		case -698486936:
		case 917598912:
		case 939297301:
		case -56403312:
		case -1368923829:
			if (!func_875(15408, -1, -1))
			{
				func_874(15408, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1864920868:
		case -1072905530:
		case 682284723:
		case 1186965403:
		case -292700571:
		case -2068738593:
			if (!func_378(209, -1))
			{
				func_872(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1729183056:
		case 2114404000:
		case 481083063:
		case 1575507436:
		case -648899601:
		case -612123774:
			if (!func_875(15411, -1, -1))
			{
				func_874(15411, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1967315379:
		case 1750602562:
		case 114660105:
		case 1783131820:
		case -889194678:
		case 801334272:
			if (!func_875(15397, -1, -1))
			{
				func_874(15397, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1192623422:
		case 1330733365:
		case 1897981854:
		case 2059866009:
		case 867092646:
		case -146705667:
			if (!func_875(15413, -1, -1))
			{
				func_874(15413, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1444780905:
		case 1272666697:
		case 1601455173:
		case -1997689882:
		case 627387411:
		case -847831191:
			if (!func_875(15391, -1, -1))
			{
				func_874(15391, 1, -1, 1);
				return 1;
			}
			break;
		
		case 444212231:
		case -1563654102:
		case 1932815241:
		case -1617209023:
		case 308545041:
		case 1682427144:
			if (!func_875(15388, -1, -1))
			{
				func_874(15388, 1, -1, 1);
				return 1;
			}
			break;
		
		case 704955164:
		case -720081735:
		case 1626031863:
		case -1391954917:
		case 35480964:
		case 2029975158:
			if (!func_378(209, -1))
			{
				func_872(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1124704392:
		case -850093035:
		case 926585800:
		case -1832969872:
		case 1539395388:
		case 1377465778:
			if (!func_875(15401, -1, -1))
			{
				func_874(15401, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case 1029334921:
		case -322091380:
		case -1604737223:
		case -836382797:
			if (!func_875(15394, -1, -1))
			{
				func_874(15394, 1, -1, 1);
				return 1;
			}
			break;
		
		case -534855486:
		case -1168575065:
		case -1367129204:
		case -1006027910:
			if (!func_378(209, -1))
			{
				func_872(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -516333262:
		case 756873456:
		case 87453937:
		case -1438775324:
			if (!func_875(15406, -1, -1))
			{
				func_874(15406, 1, -1, 1);
				return 1;
			}
			break;
		
		case 485135095:
		case -730037708:
		case -1686659723:
		case -1094274807:
			if (!func_875(15395, -1, -1))
			{
				func_874(15395, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1713551997:
		case -970458486:
		case 1992217604:
		case -1348726092:
			if (!func_378(209, -1))
			{
				func_872(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1490658501:
		case 975601953:
		case -1934557208:
		case 1786218600:
			if (!func_875(15410, -1, -1))
			{
				func_874(15410, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1735635238:
		case 1614208560:
		case -1034032319:
		case -1858021894:
			if (!func_875(15407, -1, -1))
			{
				func_874(15407, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1931303956:
		case -726032561:
		case 1747334867:
		case 1237632771:
			if (!func_378(209, -1))
			{
				func_872(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1931617488:
		case -1824987162:
		case 236389050:
		case 1987485798:
			if (!func_378(209, -1))
			{
				func_872(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1726332301:
		case 417579524:
		case 591736086:
		case 908992470:
			if (!func_875(15414, -1, -1))
			{
				func_874(15414, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1382922530:
		case 734151492:
		case -357636850:
		case -1021993708:
			if (!func_875(15415, -1, -1))
			{
				func_874(15415, 1, -1, 1);
				return 1;
			}
			break;
		
		case 452778672:
		case -1766862320:
		case 479676642:
		case -1654828636:
			if (!func_875(15399, -1, -1))
			{
				func_874(15399, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1776790350:
		case 579562906:
		case 242920617:
		case -1365707749:
			if (!func_875(15404, -1, -1))
			{
				func_874(15404, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1988057295:
		case -619754931:
		case -1219723702:
		case -388208479:
			if (!func_378(209, -1))
			{
				func_872(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 816707921:
		case 1424441799:
		case -1576971340:
		case 2087194554:
			if (!func_875(15392, -1, -1))
			{
				func_874(15392, 1, -1, 1);
				return 1;
			}
			break;
		
		case 744446190:
		case -1405036369:
		case -622901905:
		case 981732339:
			if (!func_875(15390, -1, -1))
			{
				func_874(15390, 1, -1, 1);
				return 1;
			}
			break;
		
		case 917772807:
		case 1929056908:
		case -981132613:
		case 1271443068:
			if (!func_875(15402, -1, -1))
			{
				func_874(15402, 1, -1, 1);
				return 1;
			}
			break;
		
		case -292922355:
		case -34538790:
		case -1908986844:
		case -1785118184:
			if (!func_875(15416, -1, -1))
			{
				func_874(15416, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1495432685:
		case 1898518287:
		case 2029126042:
		case -1521032813:
			if (!func_378(209, -1))
			{
				func_872(209, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case -2123485438:
		case 1457900554:
		case -14316613:
		case 619771057:
			if (!func_875(15426, -1, -1))
			{
				func_874(15426, 1, -1, 1);
				return 1;
			}
			break;
		
		case -815706791:
		case -1066127505:
		case 1281631799:
		case -1519028808:
			if (!func_875(15422, -1, -1))
			{
				func_874(15422, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1318802347:
		case -1366750043:
		case 447234752:
		case 1996626130:
			if (!func_875(15423, -1, -1))
			{
				func_874(15423, 1, -1, 1);
				return 1;
			}
			break;
		
		case 306110040:
		case 1944822196:
		case 278933172:
		case -1981759857:
			if (!func_875(15421, -1, -1))
			{
				func_874(15421, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1828101251:
		case -1639289459:
		case -562607521:
		case -879279621:
			if (!func_875(15427, -1, -1))
			{
				func_874(15427, 1, -1, 1);
				return 1;
			}
			break;
		
		case -919314748:
		case 1282565442:
		case 755492739:
		case 1276101346:
			if (!func_875(15419, -1, -1))
			{
				func_874(15419, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1971111649:
		case -884280700:
		case -85982412:
		case 1573086793:
			if (!func_875(15420, -1, -1))
			{
				func_874(15420, 1, -1, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_872(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_873())
	{
		iVar0 = Global_2571340[iParam0 /*3*/][func_379(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x353711570A4FAE35(iVar0, iParam1, iParam3);
		}
	}
}

int func_873()
{
	return 1;
	return 0;
}

int func_874(int iParam0, bool bParam1, int iParam2, int iParam3)
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_38();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x7FB03A24AC826003((iParam0 - 0)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar2, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x7FB03A24AC826003((iParam0 - 192)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar3, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x7FB03A24AC826003((iParam0 - 513)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar4, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x7FB03A24AC826003((iParam0 - 705)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar5, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0xD9ABF415C92ECCBC((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x7FB03A24AC826003((iParam0 - 3111)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar6, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0xD9ABF415C92ECCBC((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x7FB03A24AC826003((iParam0 - 2919)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar7, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x8951614902E1632F((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x7FB03A24AC826003((iParam0 - 4207)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar8, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x8951614902E1632F((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x7FB03A24AC826003((iParam0 - 4335)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar9, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x8951614902E1632F((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x7FB03A24AC826003((iParam0 - 6029)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar10, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x8951614902E1632F((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x7FB03A24AC826003((iParam0 - 7385)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar11, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x8951614902E1632F((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x7FB03A24AC826003((iParam0 - 7321)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar12, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x8951614902E1632F((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x7FB03A24AC826003((iParam0 - 9361)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar13, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x8951614902E1632F((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x7FB03A24AC826003((iParam0 - 15369)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar14, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x8951614902E1632F((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x7FB03A24AC826003((iParam0 - 15562)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar15, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x8951614902E1632F((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x7FB03A24AC826003((iParam0 - 15946)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar16, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0x8951614902E1632F((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x7FB03A24AC826003((iParam0 - 18098)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar17, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = unk_0x8951614902E1632F((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x7FB03A24AC826003((iParam0 - 22066)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar18, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = unk_0x8951614902E1632F((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x7FB03A24AC826003((iParam0 - 24962)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar19, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = unk_0x8951614902E1632F((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - unk_0x7FB03A24AC826003((iParam0 - 26810)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar20, bParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_875(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_38();
	}
	iVar1 = func_877(iParam0, iParam1);
	uVar2 = func_876(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xE35D1055B69473FB(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_876(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x7FB03A24AC826003((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x7FB03A24AC826003((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x7FB03A24AC826003((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x7FB03A24AC826003((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x7FB03A24AC826003((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x7FB03A24AC826003((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x7FB03A24AC826003((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x7FB03A24AC826003((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x7FB03A24AC826003((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x7FB03A24AC826003((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x7FB03A24AC826003((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x7FB03A24AC826003((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x7FB03A24AC826003((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x7FB03A24AC826003((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x7FB03A24AC826003((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x7FB03A24AC826003((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x7FB03A24AC826003((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - unk_0x7FB03A24AC826003((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - unk_0x7FB03A24AC826003((iParam0 - 26810)) * 64);
	}
	return iVar0;
}

int func_877(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_38();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0xD9ABF415C92ECCBC((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0xD9ABF415C92ECCBC((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = unk_0x8951614902E1632F((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
	}
	return iVar0;
}

int func_878(int iParam0)
{
	int iVar0;
	
	iVar0 = func_880(iParam0);
	return func_749(func_879(iVar0), -1, 0);
}

int func_879(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3951;
		
		case 1:
			return 3952;
		
		case 2:
			return 3953;
		
		case 3:
			return 3954;
		
		case 4:
			return 3955;
		
		case 5:
			return 5456;
		
		default:
	}
	return 3951;
}

int func_880(int iParam0)
{
	int iVar0;
	
	if (func_881(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_177[iVar0 /*12*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_881(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_882(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_880(iParam0);
	iVar1 = func_879(iVar0);
	iVar2 = (func_749(iVar1, -1, 0) + iParam1);
	func_747(iVar1, iVar2, -1, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_860(9357, -1, -1) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_177[iVar0 /*12*/] != 0)
			{
				iVar1 = func_879(iVar0);
				iVar3 = (iVar3 + func_749(iVar1, -1, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_884(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_883(9357, iVar5, -1, 1);
	}
}

var func_883(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_38();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xE88E9DF07DD22760((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0x16C7E6707C38E190((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xE88E9DF07DD22760((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0x16C7E6707C38E190((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xE88E9DF07DD22760((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0x16C7E6707C38E190((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xE88E9DF07DD22760((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0x16C7E6707C38E190((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x343D7C741C8353C8((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0x16C7E6707C38E190((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x343D7C741C8353C8((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0x16C7E6707C38E190((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0x16C7E6707C38E190((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0x16C7E6707C38E190((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0x16C7E6707C38E190((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0x16C7E6707C38E190((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0x16C7E6707C38E190((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0x16C7E6707C38E190((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0x16C7E6707C38E190((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - unk_0x16C7E6707C38E190((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - unk_0x16C7E6707C38E190((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - unk_0x16C7E6707C38E190((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 19018), 0, 1, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - unk_0x16C7E6707C38E190((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 22194), 0, 1, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - unk_0x16C7E6707C38E190((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 25538), 0, 1, iParam2, "_CASINOPSTAT_INT");
		iVar1 = ((iParam0 - 25538) - unk_0x16C7E6707C38E190((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0x16C7E6707C38E190((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x2D53B49DBFEA6DC2((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0x16C7E6707C38E190((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0x6668A708A3DA7FB4(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_884(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 100000;
			break;
		
		case 2:
			return 300000;
			break;
		
		case 3:
			return 500000;
			break;
	}
	return 0;
}

int func_885(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_775(iParam1);
	if (func_881(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_16837;
				if (func_886(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16842);
				}
				if (func_886(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16847);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_16836;
				if (func_886(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16841);
				}
				if (func_886(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16846);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_16835;
				if (func_886(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16840);
				}
				if (func_886(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16845);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_16833;
				if (func_886(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16838);
				}
				if (func_886(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16843);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_16834;
				if (func_886(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16839);
				}
				if (func_886(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16844);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_262145.f_20934;
				if (func_886(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_20936);
				}
				if (func_886(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_20935);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_886(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_888(iParam0, iParam1))
	{
		iVar0 = func_887(iParam0, iParam1);
		return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_887(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_881(iParam1) && iParam0 != func_18())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_888(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_881(iParam1) && iParam0 != func_18())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_889(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return 0;
	}
	if (func_881(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/] == iParam1)
			{
				return Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_890(int iParam0, var uParam1, int iParam2, var uParam3)
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	var uVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<2> Var14;
	float fVar15;
	float fVar16;
	float fVar17;
	int iVar18;
	float fVar19;
	int iVar20;
	float fVar21;
	int iVar22;
	int iVar23;
	
	if (iParam0 == 192)
	{
	}
	else if (iParam0 == 190)
	{
		if (uParam1->f_10 > 0)
		{
			if (func_750())
			{
				Var0 = { func_777() };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar1 = to_float(uParam1->f_10);
					fVar2 = to_float(uParam1->f_11);
					fVar3 = ((fVar1 / fVar2) * 100f);
					iVar4 = (uParam1->f_15 + uParam1->f_8);
					fVar5 = ((IntToFloat(iVar4) / 100f) * fVar3);
					*uParam3 = ceil(fVar5);
				}
				iVar6 = func_885(unk_0x95B959F18401C09A(), Var0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar7 = (to_float(iVar6) * Global_262145.f_18469);
					iVar6 = round(fVar7);
				}
				else
				{
					fVar8 = (to_float(iVar6) * Global_262145.f_18468);
					iVar6 = round(fVar8);
				}
				*iParam2 = (*iParam2 + iVar6);
				iVar10 = func_847(&uVar9);
				iVar11 = round(Global_262145.f_18459);
				if (iVar10 > iVar11)
				{
					iVar10 = iVar11;
				}
				iVar12 = ceil((IntToFloat(iVar10) * Global_262145.f_18458));
				iVar13 = ((*iParam2 / 100) * iVar12);
				*iParam2 = (*iParam2 + iVar13);
				if (uParam1->f_6)
				{
					*iParam2 = (*iParam2 + *uParam1);
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
					else if (uParam1->f_12 == 9)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
				if (iVar10 > 0)
				{
					func_832(86);
				}
				Global_2528542.f_4889.f_377 = *iParam2;
			}
			else if (func_321(0))
			{
				Var14 = { func_891(func_545()) };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar15 = to_float(uParam1->f_10);
					fVar16 = to_float(uParam1->f_11);
					fVar17 = ((fVar15 / fVar16) * 100f);
					iVar18 = (uParam1->f_15 + uParam1->f_8);
					fVar19 = ((IntToFloat(iVar18) / 100f) * fVar17);
					*uParam3 = ceil(fVar19);
				}
				iVar20 = func_885(func_545(), Var14, *uParam3);
				if (Var14.f_1 == 1)
				{
					iVar20 = ceil((IntToFloat(iVar20) * Global_262145.f_18469));
				}
				else if (Var14.f_1 == 0)
				{
					iVar20 = ceil((IntToFloat(iVar20) * Global_262145.f_18468));
				}
				*iParam2 = (*iParam2 + iVar20);
				fVar21 = Global_262145.f_18508;
				iVar22 = ceil((IntToFloat(*iParam2) * fVar21));
				*iParam2 = iVar22;
				iVar23 = Global_262145.f_18509;
				if (*iParam2 > iVar23)
				{
					*iParam2 = iVar23;
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
			}
		}
	}
}

struct<2> func_891(int iParam0)
{
	return Global_1626536[iParam0 /*603*/].f_11.f_193;
}

void func_892(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (iParam0 == 167)
	{
		if (func_20(unk_0x95B959F18401C09A()))
		{
			if (bParam1)
			{
				func_907();
			}
			func_906();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_20(unk_0x95B959F18401C09A()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_898(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_182));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_897(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_847(&uVar2);
					iVar4 = Global_262145.f_16018;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = ceil((IntToFloat(iVar3) * Global_262145.f_15227));
					iVar6 = ((*iParam3 / 100) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_832(44);
					}
				}
				func_895(*iParam3);
				func_894();
				Global_2528542.f_4889.f_377 = *iParam3;
				iVar7 = 0;
				while (iVar7 < unk_0xF839A4FC3E76D324())
				{
					iVar8 = iVar7;
					if (unk_0x1B094AC15936B3DB(iVar8))
					{
						iVar9 = unk_0xEB9DC13235C0B345(iVar8);
						if (func_846(iVar9))
						{
							func_838(iVar9, 1, -1292453789);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_20(unk_0x95B959F18401C09A()))
		{
			func_893();
		}
	}
}

void func_893()
{
	int iVar0;
	
	iVar0 = Global_2573685[func_38()];
	iVar0++;
	func_746(3667, iVar0, -1, 1);
}

void func_894()
{
	int iVar0;
	
	iVar0 = Global_2573691[func_38()];
	iVar0++;
	func_746(3666, iVar0, -1, 1);
}

void func_895(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2573694[func_38()];
	iVar0 = (iVar0 + iParam0);
	func_746(3668, iVar0, -1, 1);
	if (func_860(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_896(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_883(7666, iVar2, -1, 1);
	}
}

int func_896(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_16151;
			break;
		
		case 2:
			return Global_262145.f_16152;
			break;
		
		case 3:
			return Global_262145.f_16153;
			break;
		
		case 4:
			return Global_262145.f_16154;
			break;
		
		case 5:
			return Global_262145.f_16155;
			break;
		
		case 6:
			return Global_262145.f_16156;
			break;
		
		case 7:
			return Global_262145.f_16157;
			break;
		
		case 8:
			return Global_262145.f_16158;
			break;
		
		case 9:
			return Global_262145.f_16159;
			break;
		
		case 10:
			return Global_262145.f_16160;
			break;
		
		case 11:
			return Global_262145.f_16161;
			break;
		
		case 12:
			return Global_262145.f_16162;
			break;
		
		case 13:
			return Global_262145.f_16163;
			break;
		
		case 14:
			return Global_262145.f_16164;
			break;
		
		case 15:
			return Global_262145.f_16165;
			break;
		
		case 16:
			return Global_262145.f_16166;
			break;
		
		case 17:
			return Global_262145.f_16167;
			break;
		
		case 18:
			return Global_262145.f_16168;
			break;
		
		case 19:
			return Global_262145.f_16169;
			break;
		
		case 20:
			return Global_262145.f_16170;
			break;
		
		case 21:
			return Global_262145.f_16171;
			break;
		
		case 22:
			return Global_262145.f_16172;
			break;
		
		case 23:
			return Global_262145.f_16173;
			break;
		
		case 24:
			return Global_262145.f_16174;
			break;
	}
	return 0;
}

var func_897(int iParam0)
{
	if (iParam0 >= Global_262145.f_15205)
	{
		return Global_262145.f_15226;
	}
	else if (iParam0 >= Global_262145.f_15204)
	{
		return Global_262145.f_15225;
	}
	else if (iParam0 >= Global_262145.f_15203)
	{
		return Global_262145.f_15224;
	}
	else if (iParam0 >= Global_262145.f_15202)
	{
		return Global_262145.f_15223;
	}
	else if (iParam0 >= Global_262145.f_15201)
	{
		return Global_262145.f_15222;
	}
	else if (iParam0 >= Global_262145.f_15200)
	{
		return Global_262145.f_15221;
	}
	else if (iParam0 >= Global_262145.f_15199)
	{
		return Global_262145.f_15220;
	}
	else if (iParam0 >= Global_262145.f_15198)
	{
		return Global_262145.f_15219;
	}
	else if (iParam0 >= Global_262145.f_15197)
	{
		return Global_262145.f_15218;
	}
	else if (iParam0 >= Global_262145.f_15196)
	{
		return Global_262145.f_15217;
	}
	else if (iParam0 >= Global_262145.f_15195)
	{
		return Global_262145.f_15216;
	}
	else if (iParam0 >= Global_262145.f_15194)
	{
		return Global_262145.f_15215;
	}
	else if (iParam0 >= Global_262145.f_15193)
	{
		return Global_262145.f_15214;
	}
	else if (iParam0 >= Global_262145.f_15192)
	{
		return Global_262145.f_15213;
	}
	else if (iParam0 >= Global_262145.f_15191)
	{
		return Global_262145.f_15212;
	}
	else if (iParam0 >= Global_262145.f_15190)
	{
		return Global_262145.f_15211;
	}
	else if (iParam0 >= Global_262145.f_15189)
	{
		return Global_262145.f_15210;
	}
	else if (iParam0 >= Global_262145.f_15188)
	{
		return Global_262145.f_15209;
	}
	else if (iParam0 >= Global_262145.f_15187)
	{
		return Global_262145.f_15208;
	}
	else if (iParam0 >= Global_262145.f_15186)
	{
		return Global_262145.f_15207;
	}
	return Global_262145.f_15206;
}

int func_898(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_905(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_904(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_903(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_899(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_899(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_903(unk_0x9EC3B269A34A2BEE(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_899(int iParam0)
{
	int iVar0;
	
	if (func_902(iParam0))
	{
		iVar0 = func_900(func_901(iParam0));
		return func_749(iVar0, -1, 0);
	}
	return 0;
}

int func_900(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3646;
	}
	else if (iParam0 == 1)
	{
		return 3647;
	}
	else if (iParam0 == 2)
	{
		return 3648;
	}
	else if (iParam0 == 3)
	{
		return 3649;
	}
	else if (iParam0 == 4)
	{
		return 3650;
	}
	return 3646;
}

int func_901(int iParam0)
{
	int iVar0;
	
	if (func_902(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_100[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_902(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_903(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_15405;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_15403;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_15407;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_15401;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_15399;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_15409;
	}
	return 0;
}

int func_904(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_902(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1671007[iVar0] == iParam1 && Global_1671014[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_905(int iParam0)
{
	int iVar0;
	
	if (func_902(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_100[iVar0 /*3*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_906()
{
	int iVar0;
	
	iVar0 = Global_2573682[func_38()];
	iVar0++;
	Global_2573682[func_38()] = iVar0;
	func_746(3665, iVar0, -1, 1);
}

void func_907()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2573679[func_38()];
	iVar1 = Global_2573688[func_38()];
	iVar0++;
	iVar1++;
	Global_2573679[func_38()] = iVar0;
	Global_2573688[func_38()] = iVar1;
	Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_122 = iVar1;
	func_746(3663, iVar0, -1, 1);
	func_746(3664, iVar1, -1, 1);
}

void func_908()
{
	if (func_763())
	{
		Global_2449538.f_3072.f_134 = 0;
		Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_446 = Global_2449538.f_3072.f_134;
	}
}

void func_909()
{
	if (func_763())
	{
		if (Global_2449538.f_3072.f_134 < 10)
		{
			Global_2449538.f_3072.f_134++;
			Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_446 = Global_2449538.f_3072.f_134;
		}
	}
}

void func_910()
{
	if (func_763())
	{
		if (Global_2449538.f_3072.f_134 > 0)
		{
			Global_2449538.f_3072.f_134 = (Global_2449538.f_3072.f_134 - 1);
			Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_446 = Global_2449538.f_3072.f_134;
		}
	}
}

int func_911(int iParam0)
{
	return Global_1626536[iParam0 /*603*/].f_11.f_28;
}

int func_912(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 168:
		case 178:
		case 188:
			return 1;
		
		case 225:
		case 226:
		case 229:
		case 230:
		case 233:
		case 237:
			if (func_1097(1) && !func_321(1))
			{
				if (func_913(func_545()))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_913(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_23, 26);
}

int func_914(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return Global_262145.f_18155;
	}
	switch (iParam0)
	{
		case 142:
			return round((IntToFloat(Global_262145.f_12397) * Global_262145.f_12402));
		
		case 157:
			return 0;
		
		case 159:
			return round((IntToFloat(Global_262145.f_12347) * Global_262145.f_12352));
		
		case 151:
			return 0;
		
		case 148:
			return round((IntToFloat(Global_262145.f_12374) * Global_262145.f_12378));
		
		case 164:
			return round((IntToFloat(Global_262145.f_12387) * Global_262145.f_12391));
		
		case 152:
			return round((IntToFloat(Global_262145.f_12409) * Global_262145.f_12414));
		
		case 153:
			return round((IntToFloat(Global_262145.f_12571) * Global_262145.f_12572));
		
		case 154:
			return round((IntToFloat(Global_262145.f_12577) * Global_262145.f_12578));
		
		case 155:
			return round((IntToFloat(Global_262145.f_12575) * Global_262145.f_12576));
		
		case 160:
			return round((IntToFloat(Global_262145.f_12569) * Global_262145.f_12570));
		
		case 162:
			return round((IntToFloat(Global_262145.f_12573) * Global_262145.f_12574));
		
		case 163:
			return round((IntToFloat(Global_262145.f_12567) * Global_262145.f_12568));
		
		case 170:
			return 0;
		
		case 171:
			return Global_262145.f_14928;
		
		case 172:
			return Global_262145.f_14944;
		
		case 173:
			return Global_262145.f_14887;
		
		case 166:
			return 0;
		
		case 179:
			return Global_262145.f_18163;
		
		case 180:
			return Global_262145.f_18039;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_18047;
		
		case 185:
			return Global_262145.f_18056;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_18251;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_18268;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_18116;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_18299;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_18177;
		
		case 205:
			return Global_262145.f_18286;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_18144;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_18281;
		
		case 211:
			return Global_262145.f_18245;
		
		case 214:
			return Global_262145.f_18839;
		
		case 215:
			return Global_262145.f_18849;
		
		case 216:
			return Global_262145.f_18859;
		
		case 217:
			return Global_262145.f_18868;
		
		case 218:
			return Global_262145.f_18877;
		
		case 219:
			return Global_262145.f_18893;
		
		case 241:
			return Global_262145.f_23956;
		
		case 242:
			return Global_262145.f_23952;
		
		case 248:
			return Global_262145.f_23955;
		
		case 244:
			return Global_262145.f_23953;
		
		case 239:
			return Global_262145.f_23957;
		
		case 240:
			return Global_262145.f_23958;
		
		case 243:
			return Global_262145.f_26061;
		
		default:
	}
	return 0;
}

int func_915(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return Global_262145.f_18156;
	}
	switch (iParam0)
	{
		case 142:
			return round((IntToFloat(Global_262145.f_12398) * Global_262145.f_12403));
		
		case 157:
			return 0;
		
		case 159:
			return round((IntToFloat(Global_262145.f_12348) * Global_262145.f_12353));
		
		case 151:
			return 0;
		
		case 148:
			return round((IntToFloat(Global_262145.f_12375) * Global_262145.f_12379));
		
		case 164:
			return round((IntToFloat(Global_262145.f_12388) * Global_262145.f_12392));
		
		case 152:
			return round((IntToFloat(Global_262145.f_12410) * Global_262145.f_12415));
		
		case 153:
			return round((IntToFloat(Global_262145.f_12447) * Global_262145.f_12450));
		
		case 154:
			return round((IntToFloat(Global_262145.f_12493) * Global_262145.f_12496));
		
		case 155:
			return round((IntToFloat(Global_262145.f_12483) * Global_262145.f_12486));
		
		case 160:
			return round((IntToFloat(Global_262145.f_12438) * Global_262145.f_12441));
		
		case 162:
			return round((IntToFloat(Global_262145.f_12458) * Global_262145.f_12463));
		
		case 163:
			return round((IntToFloat(Global_262145.f_12423) * Global_262145.f_12426));
		
		case 170:
			return Global_262145.f_14870;
		
		case 171:
			return Global_262145.f_14929;
		
		case 172:
			return Global_262145.f_14945;
		
		case 173:
			return Global_262145.f_14888;
		
		case 166:
			return 0;
		
		case 167:
			return Global_262145.f_16965;
		
		case 168:
			return Global_262145.f_16964;
		
		case 179:
			return Global_262145.f_18164;
		
		case 180:
			return Global_262145.f_18040;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_18048;
		
		case 185:
			return Global_262145.f_18057;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_18252;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_18269;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_18117;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_18300;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_18178;
		
		case 205:
			return Global_262145.f_18287;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_18145;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_18282;
		
		case 211:
			return Global_262145.f_18246;
		
		case 214:
			return Global_262145.f_18840;
		
		case 215:
			return Global_262145.f_18850;
		
		case 216:
			return Global_262145.f_18860;
		
		case 217:
			return Global_262145.f_18869;
		
		case 218:
			return Global_262145.f_18878;
		
		case 219:
			return Global_262145.f_18894;
		
		case 178:
			if (func_763())
			{
				return Global_262145.f_18717;
			}
			else if (bParam1)
			{
				return Global_262145.f_18718;
			}
			break;
		
		case 188:
			if (func_763())
			{
				return Global_262145.f_18801;
			}
			else if (bParam1)
			{
				return Global_262145.f_18802;
			}
			break;
		
		case 225:
			if (func_763() && !func_750())
			{
				if (func_913(unk_0x95B959F18401C09A()))
				{
					return Global_262145.f_20922;
				}
				else
				{
					return Global_262145.f_20923;
				}
			}
			else if (func_750())
			{
				return Global_262145.f_20924;
			}
			break;
		
		case 226:
			if (func_763() && !func_750())
			{
				if (func_913(unk_0x95B959F18401C09A()))
				{
					return Global_262145.f_20902;
				}
				else
				{
					return Global_262145.f_20903;
				}
			}
			else if (func_750())
			{
				return Global_262145.f_20904;
			}
			break;
		
		case 227:
			if (func_763() && !func_750())
			{
				if (func_913(unk_0x95B959F18401C09A()))
				{
					return Global_262145.f_20914;
				}
				else
				{
					return Global_262145.f_20915;
				}
			}
			else if (func_750())
			{
				return Global_262145.f_20916;
			}
			break;
		
		case 229:
			if (func_763() && !func_750())
			{
				if (func_913(unk_0x95B959F18401C09A()))
				{
					return Global_262145.f_22078;
				}
				else
				{
					return Global_262145.f_22079;
				}
			}
			else if (func_750())
			{
				return Global_262145.f_22080;
			}
			break;
		
		case 230:
			if (func_763() && !func_750())
			{
				if (func_913(unk_0x95B959F18401C09A()))
				{
					return Global_262145.f_22174;
				}
				else
				{
					return Global_262145.f_22175;
				}
			}
			else if (func_750())
			{
				return Global_262145.f_22176;
			}
			break;
		
		case 233:
			if (func_763() && !func_750())
			{
				if (func_913(unk_0x95B959F18401C09A()))
				{
					return Global_262145.f_22649;
				}
				else
				{
					return Global_262145.f_22650;
				}
			}
			else if (func_750())
			{
				return Global_262145.f_22648;
			}
			break;
		
		case 241:
			return Global_262145.f_23963;
		
		case 242:
			return Global_262145.f_23959;
		
		case 244:
			return Global_262145.f_23960;
		
		case 248:
			return Global_262145.f_23962;
		
		case 239:
			return Global_262145.f_23964;
		
		case 240:
			return Global_262145.f_23965;
		
		case 237:
			if (func_763() && !func_750())
			{
				if (func_913(unk_0x95B959F18401C09A()))
				{
					return Global_262145.f_23805;
				}
				else
				{
					return Global_262145.f_23806;
				}
			}
			else if (func_750())
			{
				return Global_262145.f_23807;
			}
			break;
		
		case 238:
			if (func_763() && !func_750())
			{
				if (func_913(unk_0x95B959F18401C09A()))
				{
					return Global_262145.f_23916;
				}
				else
				{
					return Global_262145.f_23917;
				}
			}
			else if (func_750())
			{
				return Global_262145.f_23918;
			}
			break;
		
		case 249:
			if (func_763() && !func_750())
			{
				if (func_913(unk_0x95B959F18401C09A()))
				{
					return Global_262145.f_23932;
				}
				else
				{
					return Global_262145.f_23933;
				}
			}
			else if (func_750())
			{
				return Global_262145.f_23934;
			}
			break;
		
		case 243:
			if (func_763() && !func_750())
			{
				if (func_913(unk_0x95B959F18401C09A()))
				{
					return Global_262145.f_26064;
				}
				else
				{
					return Global_262145.f_26065;
				}
			}
			else if (func_750())
			{
				return Global_262145.f_26064;
			}
			break;
	}
	return 0;
}

void func_916(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_917(iParam0))
	{
		if (!func_763())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_12291;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (func_19(unk_0x95B959F18401C09A(), 1))
	{
		if (func_724(iParam0))
		{
			*uParam1 = (Global_262145.f_18016 / 100f);
			*uParam2 = (Global_262145.f_18016 / 100f);
		}
		else if (iParam0 == 242)
		{
			*uParam1 = Global_262145.f_23966;
			*uParam2 = Global_262145.f_23966;
		}
		else if (iParam0 == 244)
		{
			*uParam1 = Global_262145.f_23967;
			*uParam2 = Global_262145.f_23967;
		}
		else if (iParam0 == 248)
		{
			*uParam1 = Global_262145.f_23969;
			*uParam2 = Global_262145.f_23969;
		}
		else if (iParam0 == 241)
		{
			*uParam1 = Global_262145.f_23970;
			*uParam2 = Global_262145.f_23970;
		}
		else if (iParam0 == 239)
		{
			*uParam1 = Global_262145.f_23971;
			*uParam2 = Global_262145.f_23971;
		}
		else if (iParam0 == 240)
		{
			*uParam1 = Global_262145.f_23972;
			*uParam2 = Global_262145.f_23972;
		}
		else
		{
			*uParam1 = Global_262145.f_12288;
			*uParam2 = Global_262145.f_12287;
		}
	}
	else if (func_724(iParam0))
	{
		*uParam1 = (Global_262145.f_18017 / 100f);
		*uParam2 = (Global_262145.f_18017 / 100f);
	}
	else if (iParam0 == 242)
	{
		*uParam1 = Global_262145.f_23973;
		*uParam2 = Global_262145.f_23973;
	}
	else if (iParam0 == 244)
	{
		*uParam1 = Global_262145.f_23974;
		*uParam2 = Global_262145.f_23974;
	}
	else if (iParam0 == 248)
	{
		*uParam1 = Global_262145.f_23976;
		*uParam2 = Global_262145.f_23976;
	}
	else if (iParam0 == 241)
	{
		*uParam1 = Global_262145.f_23977;
		*uParam2 = Global_262145.f_23977;
	}
	else if (iParam0 == 239)
	{
		*uParam1 = Global_262145.f_23978;
		*uParam2 = Global_262145.f_23978;
	}
	else if (iParam0 == 240)
	{
		*uParam1 = Global_262145.f_23979;
		*uParam2 = Global_262145.f_23979;
	}
	else
	{
		*uParam1 = Global_262145.f_12290;
		*uParam2 = Global_262145.f_12289;
	}
	iVar0 = func_324();
	if (iVar0 != func_18())
	{
		if (func_16(unk_0x95B959F18401C09A(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_917(int iParam0)
{
	switch (iParam0)
	{
		case 160:
		case 162:
		case 153:
		case 154:
		case 155:
		case 163:
		case 171:
		case 172:
			return 1;
		
		default:
	}
	return 0;
}

void func_918(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0xB331FCEB94EB05C8())
	{
		return;
	}
	if (bParam9)
	{
		iVar0 = func_251(unk_0x95B959F18401C09A());
		Global_1669645.f_4 = func_1025();
		Global_1669645.f_5 = func_1024();
		if (func_370(unk_0x95B959F18401C09A()) || func_250(unk_0x95B959F18401C09A()))
		{
			Global_1669645.f_6 = 1;
		}
		else
		{
			Global_1669645.f_6 = 0;
		}
		Global_1669645.f_1 = func_1020(bParam9);
		Global_1669645.f_8 = unk_0xEF4753434B24594D();
		Global_1669645.f_9 = func_1019(bParam0);
		Global_1669645.f_10 = iParam1;
		Global_1669645.f_17 = Global_1669645.f_2;
		Global_1669645.f_18 = Global_1669645.f_2;
		Global_1669645.f_19 = func_1018();
		Global_1669645.f_21 = (Global_1669645.f_8 - Global_1669645.f_7);
		if (func_19(unk_0x95B959F18401C09A(), 1))
		{
			Global_1669645.f_23 = func_1019(func_321(1));
		}
		Global_1669645.f_24 = func_1017(unk_0x95B959F18401C09A());
		Global_1669645.f_28 = func_1016(unk_0x95B959F18401C09A());
		if (Global_1669645.f_24 > 2)
		{
			Global_1669645.f_24 = 2;
		}
		func_1014(iVar0);
	}
	else
	{
		iVar0 = func_290(unk_0x95B959F18401C09A());
	}
	if (func_724(iVar0))
	{
		Global_1669384.f_2 = func_1025();
		Global_1669384.f_3 = func_1024();
		Global_1669384.f_50 = iParam4;
		Global_1669384.f_51 = iParam5;
		Global_1669384.f_10 = unk_0xEF4753434B24594D();
		Global_1669384.f_20 = (Global_1669384.f_10 - Global_1669384.f_9);
		Global_1669384.f_12 = iParam1;
		Global_1669384.f_19 = func_1010(iVar0, bParam0, func_1013(bParam3));
		if (bParam0)
		{
			Global_1669384.f_11 = 1;
		}
		else
		{
			Global_1669384.f_11 = 0;
		}
		if ((func_369(unk_0x95B959F18401C09A()) || func_368(unk_0x95B959F18401C09A())) || func_264(unk_0x95B959F18401C09A()))
		{
			Global_1669384.f_8 = 1;
		}
		else
		{
			Global_1669384.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_1669384.f_43 = 0;
			Global_1669384.f_45 = func_1009(func_545(), iParam2);
			Global_1669384.f_47 = iParam7;
			Global_1669384.f_46 = iParam6;
			Global_1669384.f_52 = func_1008(func_545(), iParam2);
		}
		func_1006(iVar0);
	}
	else if (func_728(iVar0))
	{
		Global_1669438.f_2 = func_1025();
		Global_1669438.f_3 = func_1024();
		Global_1669438.f_10 = unk_0xEF4753434B24594D();
		Global_1669438.f_19 = (Global_1669438.f_10 - Global_1669438.f_9);
		Global_1669438.f_12 = iParam1;
		if (bParam0)
		{
			Global_1669438.f_11 = 1;
		}
		else
		{
			Global_1669438.f_11 = 0;
		}
		if ((func_369(unk_0x95B959F18401C09A()) || func_368(unk_0x95B959F18401C09A())) || func_264(unk_0x95B959F18401C09A()))
		{
			Global_1669438.f_8 = 1;
		}
		else
		{
			Global_1669438.f_8 = 0;
		}
		func_1004(iVar0);
	}
	else if (func_568(iVar0))
	{
		Global_1669501.f_2 = func_1025();
		Global_1669501.f_3 = func_1024();
		Global_1669501.f_9 = unk_0xEF4753434B24594D();
		Global_1669501.f_18 = (Global_1669501.f_9 - Global_1669501.f_8);
		Global_1669501.f_11 = iParam1;
		Global_1669501.f_7 = func_1018();
		Global_1669501.f_42 = func_1002(func_38(), 5);
		iVar1 = unk_0x95B959F18401C09A();
		iVar2 = func_762(iVar1);
		Global_1669501.f_28 = iVar2;
		Global_1669501.f_29 = func_1019((func_1001(iVar1) || func_1000(iVar1)));
		Global_1669501.f_30 = func_1019(func_999(iVar1));
		Global_1669501.f_32 = func_1019(func_998(iVar1));
		Global_1669501.f_33 = func_1019(func_997(iVar1));
		Global_1669501.f_34 = func_1019(func_996(iVar1));
		Global_1669501.f_35 = func_1019(func_995(0, iVar1) == 1);
		Global_1669501.f_36 = func_1019(func_994(iVar1));
		Global_1669501.f_37 = func_1019(func_993(iVar1));
		Global_1669501.f_38 = func_1019(func_992(iVar1));
		Global_1669501.f_39 = func_1019(func_886(iVar1, iVar2, 0));
		Global_1669501.f_40 = func_1019(func_886(iVar1, iVar2, 2));
		Global_1669501.f_41 = func_1019(func_886(iVar1, iVar2, 1));
		if (func_991(iVar1))
		{
			Global_1669501.f_31 = 2;
		}
		else if (func_990(iVar1))
		{
			Global_1669501.f_31 = 1;
		}
		if (bParam0)
		{
			Global_1669501.f_10 = 1;
		}
		else
		{
			Global_1669501.f_10 = 0;
		}
		if ((func_369(unk_0x95B959F18401C09A()) || func_368(unk_0x95B959F18401C09A())) || func_264(unk_0x95B959F18401C09A()))
		{
			Global_1669501.f_6 = 1;
		}
		else
		{
			Global_1669501.f_6 = 0;
		}
		Global_1669501.f_21 = -2;
		Global_1669501.f_22 = -2;
		func_988(iVar0);
	}
	else if (func_566(iVar0))
	{
		Global_1669545.f_2 = func_1025();
		Global_1669545.f_3 = func_1024();
		if ((func_369(unk_0x95B959F18401C09A()) || func_368(unk_0x95B959F18401C09A())) || func_264(unk_0x95B959F18401C09A()))
		{
			Global_1669545.f_6 = 1;
		}
		else
		{
			Global_1669545.f_6 = 0;
		}
		Global_1669545.f_9 = unk_0xEF4753434B24594D();
		Global_1669545.f_10 = func_1019(bParam0);
		Global_1669545.f_11 = iParam1;
		Global_1669545.f_17 = func_987(func_324());
		Global_1669545.f_18 = (Global_1669545.f_9 - Global_1669545.f_8);
		Global_1669545.f_20 = iParam8;
		Global_1669545.f_21 = -2;
		Global_1669545.f_22 = -2;
		Global_1669545.f_27 = func_986();
		Global_1669545.f_29 = func_749(6107, -1, 0);
		Global_1669545.f_30 = func_749(6103, -1, 0);
		Global_1669545.f_31 = func_749(6104, -1, 0);
		Global_1669545.f_32 = func_749(6106, -1, 0);
		Global_1669545.f_33 = func_749(6105, -1, 0);
		Global_1669545.f_34 = func_749(6108, -1, 0);
		Global_1669545.f_36 = func_1019(func_321(1));
		Global_1669545.f_37 = func_984();
		func_970();
		func_968(iVar0);
	}
	else if (func_564(iVar0))
	{
		Global_1669599.f_2 = func_1025();
		Global_1669599.f_3 = func_1024();
		if ((func_369(unk_0x95B959F18401C09A()) || func_368(unk_0x95B959F18401C09A())) || func_264(unk_0x95B959F18401C09A()))
		{
			Global_1669599.f_6 = 1;
		}
		else
		{
			Global_1669599.f_6 = 0;
		}
		Global_1669599.f_9 = unk_0xEF4753434B24594D();
		Global_1669599.f_10 = func_1019(bParam0);
		Global_1669599.f_11 = iParam1;
		Global_1669599.f_18 = (Global_1669599.f_9 - Global_1669599.f_8);
		Global_1669599.f_20 = iParam8;
		Global_1669599.f_23 = Global_786547;
		Global_1669599.f_36 = Global_786547.f_1;
		Global_1669599.f_24 = func_749(6157, -1, 0);
		Global_1669599.f_25 = func_749(6162, -1, 0);
		Global_1669599.f_26 = func_749(6163, -1, 0);
		Global_1669599.f_27 = func_1019((((func_967() || func_966()) || func_965()) || func_964(unk_0x95B959F18401C09A())));
		Global_1669599.f_28 = func_749(6164, -1, 0);
		Global_1669599.f_29 = func_1019(func_963());
		Global_1669599.f_35 = -1;
		Global_1669599.f_38 = -1;
		Global_1669599.f_39 = Global_1669599.f_4;
		Global_1669599.f_40 = Global_1669599.f_5;
		Global_1669599.f_41 = func_1025();
		Global_1669599.f_42 = func_1019(func_321(1));
		Global_1669599.f_44 = Global_1669599.f_18;
		func_961(iVar0);
	}
	else if (func_738(iVar0))
	{
		if (Global_1669733.f_2 == -1)
		{
			Global_1669733.f_2 = func_1025();
		}
		if (Global_1669733.f_3 == -1)
		{
			Global_1669733.f_3 = func_1024();
		}
		if ((func_369(unk_0x95B959F18401C09A()) || func_368(unk_0x95B959F18401C09A())) || func_264(unk_0x95B959F18401C09A()))
		{
			Global_1669733.f_6 = 1;
		}
		else
		{
			Global_1669733.f_6 = 0;
		}
		Global_1669733.f_1 = func_1020(0);
		Global_1669733.f_7 = func_1018();
		Global_1669733.f_9 = unk_0xEF4753434B24594D();
		Global_1669733.f_10 = func_1019(bParam0);
		Global_1669733.f_11 = iParam1;
		if (func_545() != -1)
		{
			Global_1669733.f_17 = func_960(func_545());
		}
		Global_1669733.f_18 = (Global_1669733.f_9 - Global_1669733.f_8);
		Global_1669733.f_19 = Global_2528542.f_6270;
		Global_1669733.f_28 = func_1016(unk_0x95B959F18401C09A());
		Global_1669733.f_29 = func_1019(func_959(unk_0x95B959F18401C09A()));
		Global_1669733.f_30 = func_1019(func_958(unk_0x95B959F18401C09A()));
		Global_1669733.f_31 = func_957(unk_0x95B959F18401C09A());
		if (func_19(unk_0x95B959F18401C09A(), 1))
		{
			Global_1669733.f_33 = func_1019(func_321(1));
		}
		if (Global_1669733.f_34 > 2)
		{
			Global_1669733.f_34 = 2;
		}
		func_955(iVar0);
	}
	else if (func_742(iVar0))
	{
		Global_1669680.f_2 = func_1025();
		Global_1669680.f_3 = func_1024();
		if ((func_369(unk_0x95B959F18401C09A()) || func_368(unk_0x95B959F18401C09A())) || func_264(unk_0x95B959F18401C09A()))
		{
			Global_1669680.f_6 = 1;
		}
		else
		{
			Global_1669680.f_6 = 0;
		}
		Global_1669680.f_1 = func_1020(0);
		Global_1669680.f_9 = unk_0xEF4753434B24594D();
		Global_1669680.f_10 = func_1019(bParam0);
		Global_1669680.f_11 = iParam1;
		Global_1669680.f_18 = (Global_1669680.f_9 - Global_1669680.f_8);
		Global_1669680.f_28 = func_1016(unk_0x95B959F18401C09A());
		if (Global_1669680.f_28)
		{
			Global_1669680.f_29 = func_954(unk_0x95B959F18401C09A());
		}
		else
		{
			Global_1669680.f_29 = 0;
		}
		Global_1669680.f_30 = func_938(unk_0x95B959F18401C09A(), 4, -1);
		Global_1669680.f_31 = func_957(unk_0x95B959F18401C09A());
		Global_1669680.f_32 = func_1019(func_937(unk_0x95B959F18401C09A()));
		Global_1669680.f_33 = func_1019(func_936(unk_0x95B959F18401C09A()));
		Global_1669680.f_34 = func_1019(func_935(unk_0x95B959F18401C09A()));
		Global_1669680.f_35 = func_1019(func_934(unk_0x95B959F18401C09A()));
		Global_1669680.f_36 = func_933(unk_0x95B959F18401C09A());
		Global_1669680.f_37 = func_932(unk_0x95B959F18401C09A());
		Global_1669680.f_39 = func_931(unk_0x95B959F18401C09A());
		if (func_19(unk_0x95B959F18401C09A(), 1))
		{
			Global_1669680.f_41 = func_1019(func_321(1));
		}
		if (Global_1669680.f_42 > 2)
		{
			Global_1669680.f_42 = 2;
		}
		func_929(iVar0);
	}
	else if (func_737(iVar0))
	{
		Global_1669817.f_2 = func_1025();
		Global_1669817.f_3 = func_1024();
		Global_1669817.f_4 = func_928(func_545());
		Global_1669817.f_5 = func_927(func_545());
		if ((func_369(unk_0x95B959F18401C09A()) || func_368(unk_0x95B959F18401C09A())) || func_264(unk_0x95B959F18401C09A()))
		{
			Global_1669817.f_6 = 1;
		}
		else
		{
			Global_1669817.f_6 = 0;
		}
		Global_1669817.f_7 = func_1018();
		Global_1669817.f_9 = unk_0xEF4753434B24594D();
		Global_1669817.f_10 = func_1019(bParam0);
		Global_1669817.f_11 = iParam1;
		Global_1669817.f_17 = func_960(func_324());
		Global_1669817.f_18 = (Global_1669817.f_9 - Global_1669817.f_8);
		Global_1669817.f_21 = 1;
		Global_1669817.f_22 = 1;
		Global_1669817.f_25 = func_926(unk_0x95B959F18401C09A());
		Global_1669817.f_27 = func_1019(func_925(unk_0x95B959F18401C09A()));
		Global_1669817.f_28 = func_922(21, -1);
		Global_1669817.f_29 = func_1019(func_921(unk_0x95B959F18401C09A()));
		func_919(iVar0);
	}
	else
	{
		Global_1669366.f_6 = unk_0xEF4753434B24594D();
		if (bParam0)
		{
			Global_1669366.f_7 = 1;
		}
		else
		{
			Global_1669366.f_7 = 0;
		}
		Global_1669366.f_8 = iParam1;
		if (Global_1669366.f_4 == 0)
		{
			if ((func_369(unk_0x95B959F18401C09A()) || func_368(unk_0x95B959F18401C09A())) || func_264(unk_0x95B959F18401C09A()))
			{
				Global_1669366.f_4 = 1;
			}
		}
	}
}

void func_919(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x1A0D4A6C336B7BC5(&Global_1669817);
	func_920();
}

void func_920()
{
	struct<31> Var0;
	
	Global_1669817 = { Var0 };
}

int func_921(int iParam0)
{
	if (iParam0 != func_18())
	{
		return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_362.f_2, 6);
	}
	return 0;
}

int func_922(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_38();
	}
	if (iParam0 == 7 && !Global_262145.f_16859)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_924(iParam0);
		if (iVar1 == 0 && func_749(5393, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_923(-1) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_1016(unk_0x95B959F18401C09A()) && iVar1 == 1)
		{
			return 1237;
		}
	}
	if (iParam0 == 0)
	{
		return Global_1382708[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_2573644[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 22)
		{
			return 0;
		}
		return Global_2573513[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

bool func_923(int iParam0)
{
	if (!Global_262145.f_23529)
	{
		return 0;
	}
	return func_749(7207, iParam0, 0) != 0;
}

int func_924(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return iParam0;
	}
	return -1;
}

int func_925(int iParam0)
{
	if (iParam0 != func_18())
	{
		return Global_1589819[iParam0 /*818*/].f_273.f_362 != 0;
	}
	return 0;
}

int func_926(int iParam0)
{
	if (func_290(iParam0) == 243)
	{
		return func_741(iParam0);
	}
	return -1;
}

int func_927(int iParam0)
{
	if (iParam0 == func_18())
	{
		return -1;
	}
	return Global_1626536[iParam0 /*603*/].f_11.f_8[1];
}

int func_928(int iParam0)
{
	if (iParam0 == func_18())
	{
		return -1;
	}
	return Global_1626536[iParam0 /*603*/].f_11.f_8[0];
}

void func_929(int iParam0)
{
	unk_0xFBA9F03E7B1497FB(&Global_1669680);
	func_930();
}

void func_930()
{
	struct<53> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Global_1669680 = { Var0 };
}

int func_931(int iParam0)
{
	if (iParam0 != func_18())
	{
		return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_328, 12);
	}
	return 0;
}

int func_932(int iParam0)
{
	if (iParam0 != func_18())
	{
		return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_328, 10);
	}
	return 0;
}

int func_933(int iParam0)
{
	if (iParam0 != func_18())
	{
		return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_328, 11);
	}
	return 0;
}

bool func_934(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 4);
}

bool func_935(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 3);
}

bool func_936(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 2);
}

bool func_937(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 1);
}

int func_938(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == func_18() || !func_953(iParam1))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			return func_948(iParam0, iParam2);
		
		case 1:
			return func_946(iParam0, iParam2);
		
		case 3:
			return func_945(iParam0);
		
		case 2:
			return func_940(iParam0, iParam2);
		
		case 4:
			return func_939(iParam0);
		
		default:
	}
	return 0;
}

bool func_939(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 6);
}

int func_940(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 10:
			return func_944(iParam0);
		
		case 11:
			return func_943(iParam0);
		
		case 12:
			return func_942(iParam0);
		
		case 13:
			return func_941(iParam0);
		
		default:
	}
	return 0;
}

bool func_941(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 15);
}

bool func_942(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 14);
}

bool func_943(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 13);
}

bool func_944(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 12);
}

bool func_945(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 5);
}

int func_946(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 5:
			return func_947(iParam0);
		
		case 6:
			return func_937(iParam0);
		
		case 7:
			return func_936(iParam0);
		
		case 8:
			return func_935(iParam0);
		
		case 9:
			return func_934(iParam0);
		
		default:
	}
	return 0;
}

bool func_947(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 0);
}

int func_948(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_952(iParam0);
		
		case 1:
			return func_951(iParam0);
		
		case 2:
			return func_950(iParam0);
		
		case 3:
			return func_949(iParam0);
		
		case 4:
			return func_957(iParam0);
		
		default:
	}
	return 0;
}

bool func_949(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 10);
}

bool func_950(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 9);
}

bool func_951(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 8);
}

bool func_952(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 7);
}

bool func_953(int iParam0)
{
	return (iParam0 != -1 && iParam0 != 6);
}

int func_954(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return 0;
	}
	iVar0 = 1;
	if (func_938(iParam0, 2, 13))
	{
		iVar0 = 5;
	}
	else if (func_938(iParam0, 2, 12))
	{
		iVar0 = 4;
	}
	else if (func_938(iParam0, 2, 11))
	{
		iVar0 = 3;
	}
	else if (func_938(iParam0, 2, 10))
	{
		iVar0 = 2;
	}
	return iVar0;
}

void func_955(int iParam0)
{
	unk_0x4C7E3C4ACCB2DED7(&Global_1669733);
	func_956();
}

void func_956()
{
	struct<39> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Global_1669733 = { Var0 };
}

bool func_957(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_344, 31);
}

bool func_958(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_316.f_1, 0);
}

bool func_959(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_316.f_1, 19);
}

var func_960(int iParam0)
{
	return Global_1589819[iParam0 /*818*/].f_211.f_6;
}

void func_961(int iParam0)
{
	unk_0x04871872974BF74B(&Global_1669599);
	func_962();
}

void func_962()
{
	struct<46> Var0;
	
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Global_1669599 = { Var0 };
	Global_1669599.f_16 = 0;
}

bool func_963()
{
	return func_749(6156, -1, 0) != 0;
}

int func_964(int iParam0)
{
	if (iParam0 != func_18())
	{
		return Global_1589819[iParam0 /*818*/].f_273.f_265 != 0;
	}
	return 0;
}

bool func_965()
{
	return func_749(6164, -1, 0) == 3;
}

bool func_966()
{
	return func_749(6164, -1, 0) == 2;
}

bool func_967()
{
	return func_749(6164, -1, 0) == 1;
}

void func_968(int iParam0)
{
	unk_0xAE0DE86DBA563924(&Global_1669545);
	func_969();
}

void func_969()
{
	struct<54> Var0;
	
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Global_1669545 = { Var0 };
	Global_1669545.f_23 = 0;
	Global_1669545.f_24 = 0;
	Global_1669545.f_16 = 0;
}

void func_970()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar2 = (iVar0 + func_981(12));
		func_980(iVar2, &iVar1, 1);
		if (iVar1 >= 0)
		{
			if (Global_1323594[iVar1 /*141*/].f_66 != 0 && func_972(Global_1323594[iVar1 /*141*/].f_66, 1))
			{
				if (Global_2528542.f_887 != iVar1)
				{
					if (func_971(Global_1323594[iVar1 /*141*/].f_66))
					{
						if (Global_1323594[iVar1 /*141*/].f_66 != 0)
						{
							iVar3 = Global_1323594[iVar1 /*141*/].f_66;
						}
						switch (iVar0)
						{
							case 0:
								Global_1669545.f_38 = iVar3;
								break;
							
							case 1:
								Global_1669545.f_39 = iVar3;
								break;
							
							case 2:
								Global_1669545.f_40 = iVar3;
								break;
							
							case 3:
								Global_1669545.f_41 = iVar3;
								break;
							
							case 4:
								Global_1669545.f_42 = iVar3;
								break;
							
							case 5:
								Global_1669545.f_43 = iVar3;
								break;
							
							case 6:
								Global_1669545.f_44 = iVar3;
								break;
							
							case 7:
								Global_1669545.f_45 = iVar3;
								break;
							
							case 8:
								Global_1669545.f_46 = iVar3;
								break;
							
							case 9:
								Global_1669545.f_47 = iVar3;
								break;
							}
						}
					}
				}
		}
		iVar0++;
	}
}

int func_971(int iParam0)
{
	switch (iParam0)
	{
		case joaat("buzzard"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("hydra"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case -1984275979:
		case -42959138:
		case joaat("volatus"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("annihilator"):
		case -749299473:
		case -975345305:
		case -1700874274:
		case -392675425:
		case -1763555241:
		case 1043222410:
		case joaat("lazer"):
		case -1386191424:
		case 1565978651:
		case 1036591958:
		case -1007528109:
		case -32878452:
		case -1523619738:
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
		case 1181327175:
		case 447548909:
		case -726768679:
			return 1;
		
		default:
	}
	if (iParam0 == 1692272545)
	{
		return 1;
	}
	return 0;
}

int func_972(int iParam0, bool bParam1)
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
		if (!func_979())
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
		if ((((!func_978() && !func_977()) && !func_976()) && !func_975()) && !func_979())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xDB36A8F522CBC12D() || unk_0x4CE1DD5CFC1F941E()) || unk_0xF5DB888C353E2BED())
		{
		}
		else if (!func_976())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_974(iParam0))
		{
			return 0;
		}
	}
	if (!func_973(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_973(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_778())
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

int func_974(int iParam0)
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

int func_975()
{
	return 0;
}

int func_976()
{
	return 1;
}

int func_977()
{
	return 1;
}

int func_978()
{
	if (unk_0xE9D7B652961D4AA3(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_979()
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

void func_980(int iParam0, int iParam1, bool bParam2)
{
	if (Global_262145.f_10054)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_1666267[iParam0] - 1);
		if (bParam2)
		{
			if ((unk_0xE77FA521699F639C() % 5) == 0)
			{
			}
		}
	}
	else
	{
		*iParam1 = -1;
	}
}

int func_981(int iParam0)
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
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_924(iParam0);
		return func_983(iVar0);
	}
	return (func_982(iParam0, -1) * iParam0);
}

int func_982(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_575(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_581(iParam1))
			{
				return 0;
			}
			else if (func_573(iParam1, -1))
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
			else if (iParam1 <= 125 && iParam1 > 0)
			{
				if (Global_1049815[iParam1 /*1951*/].f_33 == 2)
				{
					return 3;
				}
				else if (Global_1049815[iParam1 /*1951*/].f_33 == 6)
				{
					return 8;
				}
				else if (Global_1049815[iParam1 /*1951*/].f_33 == 10)
				{
					return 13;
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
	}
	return 0;
}

int func_983(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 156;
		
		case 2:
			return 223;
		
		case 1:
			return 224;
		
		default:
	}
	return -1;
}

var func_984()
{
	var uVar0;
	
	uVar0 = func_985();
	if (!func_763())
	{
		if (func_545() != func_18())
		{
			uVar0 = func_1017(func_545()) + 1;
		}
	}
	return uVar0;
}

int func_985()
{
	return func_1017(unk_0x95B959F18401C09A()) + 1;
}

int func_986()
{
	return func_749(6113, -1, 0);
}

int func_987(int iParam0)
{
	if (func_19(iParam0, 1))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_448;
	}
	return -1;
}

void func_988(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0xE3F45F2E5162B2C7(&Global_1669501);
	func_989();
}

void func_989()
{
	struct<44> Var0;
	
	Global_1669501 = { Var0 };
	Global_1669501.f_23 = 0;
	Global_1669501.f_24 = 0;
	Global_1669501.f_16 = 0;
}

bool func_990(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_344, 12);
}

bool func_991(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_344, 13);
}

int func_992(int iParam0)
{
	if (iParam0 != func_18())
	{
		if ((unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_253, 12) || unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_253, 13)) || unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_253, 14))
		{
			return 1;
		}
	}
	return 0;
}

int func_993(int iParam0)
{
	if (iParam0 != func_18())
	{
		if ((unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_253, 0) || unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_253, 1)) || unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_253, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_994(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (((((unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_253, 3) || unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_253, 4)) || unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_253, 5)) || unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_253, 0)) || unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_253, 1)) || unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_253, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_995(int iParam0, int iParam1)
{
	if (iParam1 == func_18())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (unk_0x0E4018692D92041D(Global_1589819[iParam1 /*818*/].f_273.f_253, 0))
			{
				return 3;
			}
			else if (unk_0x0E4018692D92041D(Global_1589819[iParam1 /*818*/].f_273.f_253, 3))
			{
				return 2;
			}
			else if (unk_0x0E4018692D92041D(Global_1589819[iParam1 /*818*/].f_273.f_253, 6))
			{
				return 4;
			}
			else if (unk_0x0E4018692D92041D(Global_1589819[iParam1 /*818*/].f_273.f_253, 9))
			{
				return 1;
			}
			else if (unk_0x0E4018692D92041D(Global_1589819[iParam1 /*818*/].f_273.f_253, 12))
			{
				return 7;
			}
			else if (unk_0x0E4018692D92041D(Global_1589819[iParam1 /*818*/].f_273.f_253, 15))
			{
				return 5;
			}
			else if (unk_0x0E4018692D92041D(Global_1589819[iParam1 /*818*/].f_273.f_253, 18))
			{
				return 6;
			}
			else if (unk_0x0E4018692D92041D(Global_1589819[iParam1 /*818*/].f_273.f_253, 21))
			{
				return 0;
			}
			else if (unk_0x0E4018692D92041D(Global_1589819[iParam1 /*818*/].f_273.f_253, 24))
			{
				return 8;
			}
			break;
		
		case 1:
			if (unk_0x0E4018692D92041D(Global_1589819[iParam1 /*818*/].f_273.f_253, 1))
			{
				return 3;
			}
			else if (unk_0x0E4018692D92041D(Global_1589819[iParam1 /*818*/].f_273.f_253, 4))
			{
				return 2;
			}
			else if (unk_0x0E4018692D92041D(Global_1589819[iParam1 /*818*/].f_273.f_253, 7))
			{
				return 4;
			}
			else if (unk_0x0E4018692D92041D(Global_1589819[iParam1 /*818*/].f_273.f_253, 10))
			{
				return 1;
			}
			else if (unk_0x0E4018692D92041D(Global_1589819[iParam1 /*818*/].f_273.f_253, 13))
			{
				return 7;
			}
			else if (unk_0x0E4018692D92041D(Global_1589819[iParam1 /*818*/].f_273.f_253, 16))
			{
				return 5;
			}
			else if (unk_0x0E4018692D92041D(Global_1589819[iParam1 /*818*/].f_273.f_253, 19))
			{
				return 6;
			}
			else if (unk_0x0E4018692D92041D(Global_1589819[iParam1 /*818*/].f_273.f_253, 22))
			{
				return 0;
			}
			else if (unk_0x0E4018692D92041D(Global_1589819[iParam1 /*818*/].f_273.f_253, 25))
			{
				return 8;
			}
			break;
		
		case 2:
			if (unk_0x0E4018692D92041D(Global_1589819[iParam1 /*818*/].f_273.f_253, 2))
			{
				return 3;
			}
			else if (unk_0x0E4018692D92041D(Global_1589819[iParam1 /*818*/].f_273.f_253, 5))
			{
				return 2;
			}
			else if (unk_0x0E4018692D92041D(Global_1589819[iParam1 /*818*/].f_273.f_253, 8))
			{
				return 4;
			}
			else if (unk_0x0E4018692D92041D(Global_1589819[iParam1 /*818*/].f_273.f_253, 11))
			{
				return 1;
			}
			else if (unk_0x0E4018692D92041D(Global_1589819[iParam1 /*818*/].f_273.f_253, 14))
			{
				return 7;
			}
			else if (unk_0x0E4018692D92041D(Global_1589819[iParam1 /*818*/].f_273.f_253, 17))
			{
				return 5;
			}
			else if (unk_0x0E4018692D92041D(Global_1589819[iParam1 /*818*/].f_273.f_253, 20))
			{
				return 6;
			}
			else if (unk_0x0E4018692D92041D(Global_1589819[iParam1 /*818*/].f_273.f_253, 23))
			{
				return 0;
			}
			else if (unk_0x0E4018692D92041D(Global_1589819[iParam1 /*818*/].f_273.f_253, 26))
			{
				return 8;
			}
			break;
	}
	return 0;
}

int func_996(int iParam0)
{
	if (iParam0 != func_18())
	{
		if ((unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_253, 6) || unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_253, 7)) || unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_253, 8))
		{
			return 1;
		}
	}
	return 0;
}

bool func_997(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_344, 8);
}

bool func_998(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_344, 7);
}

bool func_999(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_344, 9);
}

bool func_1000(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_344, 11);
}

bool func_1001(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_344, 10);
}

int func_1002(int iParam0, int iParam1)
{
	return func_749(func_1003(iParam1), iParam0, 0);
}

int func_1003(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3898;
		
		case 1:
			return 3927;
		
		case 2:
			return 3931;
		
		case 3:
			return 3935;
		
		case 4:
			return 3939;
		
		case 5:
			return 5450;
		
		default:
	}
	return 3898;
}

void func_1004(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x79449220E40CF832(&Global_1669438);
	func_1005();
}

void func_1005()
{
	struct<63> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Var0.f_54 = -1;
	Var0.f_55 = -1;
	Var0.f_56 = -1;
	Var0.f_57 = -1;
	Var0.f_58 = -1;
	Var0.f_59 = -1;
	Var0.f_60 = -1;
	Var0.f_61 = -1;
	Var0.f_62 = -1;
	Global_1669438 = { Var0 };
	Global_1669438.f_24 = 0;
	Global_1669438.f_25 = 0;
	Global_1669438.f_17 = 0;
}

void func_1006(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x0118CDB6D266E2BA(&Global_1669384);
	func_1007();
}

void func_1007()
{
	struct<54> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Global_1669384 = { Var0 };
	Global_1669384.f_29 = 0;
	Global_1669384.f_30 = 0;
	Global_1669384.f_17 = 0;
}

int func_1008(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_886(iParam0, iParam1, 2);
	bVar1 = func_886(iParam0, iParam1, 1);
	bVar2 = func_886(iParam0, iParam1, 0);
	if ((bVar0 && bVar1) && bVar2)
	{
		return 7;
	}
	else if ((bVar1 && bVar0) && !bVar2)
	{
		return 6;
	}
	else if ((bVar2 && bVar0) && !bVar1)
	{
		return 5;
	}
	else if ((bVar2 && bVar1) && !bVar0)
	{
		return 4;
	}
	else if (bVar0)
	{
		return 3;
	}
	else if (bVar1)
	{
		return 2;
	}
	else if (bVar2)
	{
		return 1;
	}
	return 0;
}

int func_1009(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return 0;
	}
	if (func_881(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/] == iParam1)
			{
				return Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1010(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_390(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17574;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17573;
		}
		else
		{
			iVar0 = Global_262145.f_17555;
		}
		iVar1 = 19;
	}
	else if (func_571(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_293(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_17554;
			iVar1 = 20;
		}
	}
	else if (func_724(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17574;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17573;
		}
		else
		{
			iVar0 = Global_262145.f_17555;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		unk_0x27AA661817723FCB(func_928(func_545()), func_927(func_545()), func_1025(), func_1024(), iVar1, iVar0);
	}
	func_1012(iVar0);
	func_1011(iVar0);
	return iVar0;
}

void func_1011(int iParam0)
{
	int iVar0;
	
	iVar0 = func_749(3968, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_487 = iVar0;
	func_747(3968, iVar0, -1, 1, 0);
}

void func_1012(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x95B959F18401C09A();
	Global_1626536[iVar0 /*603*/].f_11.f_486 = (Global_1626536[iVar0 /*603*/].f_11.f_486 + iParam0);
	if (Global_1626536[iVar0 /*603*/].f_11.f_486 < -9999)
	{
		Global_1626536[iVar0 /*603*/].f_11.f_486 = 9999;
	}
	else if (Global_1626536[iVar0 /*603*/].f_11.f_486 > 9999)
	{
		Global_1626536[iVar0 /*603*/].f_11.f_486 = 9999;
	}
}

int func_1013(bool bParam0)
{
	if (bParam0)
	{
		return 0;
	}
	if (func_369(unk_0x95B959F18401C09A()) || func_264(unk_0x95B959F18401C09A()))
	{
		return 1;
	}
	return 0;
}

void func_1014(var uParam0)
{
	unk_0xEC1C7C0AA7F4D2BB(&Global_1669645);
	func_1015();
}

void func_1015()
{
	struct<35> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Global_1669645 = { Var0 };
}

int func_1016(int iParam0)
{
	if (iParam0 != func_18())
	{
		return Global_1589819[iParam0 /*818*/].f_273.f_316 != 0;
	}
	return 0;
}

int func_1017(int iParam0)
{
	if (func_46(iParam0) == func_18())
	{
		return 0;
	}
	return Global_1626536[iParam0 /*603*/].f_11.f_19;
}

int func_1018()
{
	int iVar0;
	
	if (func_750())
	{
		return 4;
	}
	else if (func_763())
	{
		if (func_913(unk_0x95B959F18401C09A()))
		{
			return 8;
		}
		return 6;
	}
	if (func_321(1))
	{
		iVar0 = func_987(unk_0x95B959F18401C09A());
		if (iVar0 == -1)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_1097(1))
	{
		if (func_913(func_545()))
		{
			return 9;
		}
		return 7;
	}
	return -2;
}

int func_1019(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_1020(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = -1;
	if (bParam0)
	{
		iVar0 = func_251(unk_0x95B959F18401C09A());
	}
	else
	{
		iVar0 = func_290(unk_0x95B959F18401C09A());
	}
	if (iVar0 != -1)
	{
	}
	switch (iVar0)
	{
		case 236:
			iVar2 = func_1023(unk_0x95B959F18401C09A());
			iVar1 = iVar2;
			break;
		
		case 237:
			iVar2 = func_1022(unk_0x95B959F18401C09A());
			if (func_739(func_740(unk_0x95B959F18401C09A())))
			{
				iVar1 = 100;
			}
			else
			{
				iVar1 = 200;
			}
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 250:
			iVar2 = func_1022(unk_0x95B959F18401C09A());
			iVar1 = 300;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 238:
			iVar2 = func_1021(unk_0x95B959F18401C09A());
			iVar1 = 400;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 249:
			iVar2 = func_1021(unk_0x95B959F18401C09A());
			iVar1 = 500;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 239:
			iVar1 = 600;
			break;
		
		case 240:
			iVar1 = 700;
			break;
		
		case 241:
			iVar1 = 800;
			break;
		
		case 242:
			iVar1 = 900;
			break;
		
		case 244:
			iVar1 = 1100;
			break;
		
		case 248:
			iVar1 = 1200;
			break;
	}
	return iVar1;
}

int func_1021(int iParam0)
{
	if (func_290(unk_0x95B959F18401C09A()) == 238 || func_290(unk_0x95B959F18401C09A()) == 249)
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_495;
	}
	return -1;
}

int func_1022(int iParam0)
{
	if (func_290(unk_0x95B959F18401C09A()) == 237 || func_290(unk_0x95B959F18401C09A()) == 250)
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_494;
	}
	return -1;
}

int func_1023(int iParam0)
{
	if (func_251(iParam0) == 236)
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_493;
	}
	return -1;
}

int func_1024()
{
	if (Global_1669366.f_3 != 0)
	{
		return Global_1669366.f_3;
	}
	return -1;
}

int func_1025()
{
	if (Global_1669366.f_2 != 0)
	{
		return Global_1669366.f_2;
	}
	return -1;
}

void func_1026(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	switch (func_1100())
	{
		case 0:
		case 2:
		case 3:
			StringCopy(sParam0, "BIGM_ASLTYD", 16);
			StringCopy(sParam1, "BIGM_ASLTWD", 16);
			StringCopy(sParam2, "BIGM_ASLTWRF", 16);
			StringCopy(sParam3, "BIGM_ASLTYD", 16);
			StringCopy(sParam4, "BIGM_ASLTWRF2", 16);
			StringCopy(sParam5, "BIGM_ASLTFN", 16);
			break;
		
		case 1:
			StringCopy(sParam0, "BIGM_ASLTYV", 16);
			StringCopy(sParam1, "BIGM_ASLTWV", 16);
			StringCopy(sParam2, "BIGM_ASLTWFV", 16);
			StringCopy(sParam3, "BIGM_ASLTYV", 16);
			StringCopy(sParam4, "BIGM_ASLTWFV2", 16);
			StringCopy(sParam5, "BIGM_ASLTFN2", 16);
			break;
	}
}

void func_1027()
{
	if (func_265(unk_0x95B959F18401C09A(), 20) || func_369(unk_0x95B959F18401C09A()))
	{
		if (!unk_0x0E4018692D92041D(iLocal_114, 20))
		{
			unk_0xBDD4EE948C7B9BB5("DisableFlightMusic", 1);
			unk_0xBDD4EE948C7B9BB5("WantedMusicDisabled", 1);
			unk_0x8950ED5730F62EE8(&iLocal_114, 20);
		}
		if (!unk_0x0E4018692D92041D(iLocal_114, 21))
		{
			if (unk_0x65BA35D6D61F1574("BG_ASSAULT_START"))
			{
				unk_0x8950ED5730F62EE8(&iLocal_114, 21);
			}
		}
		else if (Local_112.f_5 == -1 && Local_112.f_7 == -1)
		{
			if (!unk_0x0E4018692D92041D(iLocal_114, 22))
			{
				if (Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_5 > 1)
				{
					if (unk_0x65BA35D6D61F1574("BG_ASSAULT_COLLECT"))
					{
						unk_0x8950ED5730F62EE8(&iLocal_114, 22);
						if (unk_0x0E4018692D92041D(iLocal_114, 23))
						{
							unk_0xCE689A8E8C42ED78(&iLocal_114, 23);
						}
					}
				}
			}
		}
		else if (!unk_0x0E4018692D92041D(iLocal_114, 23))
		{
			if (unk_0x65BA35D6D61F1574("BG_ASSAULT_DELIVER"))
			{
				unk_0x8950ED5730F62EE8(&iLocal_114, 23);
				if (unk_0x0E4018692D92041D(iLocal_114, 22))
				{
					unk_0xCE689A8E8C42ED78(&iLocal_114, 22);
				}
			}
		}
	}
}

void func_1028()
{
	if (func_553())
	{
		if (!unk_0x0E4018692D92041D(Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_1, 10))
		{
			if (unk_0x4F94F07DAD382CDA(Local_112.f_29[0]))
			{
				if (!func_21(Local_112.f_29[0]))
				{
					unk_0x8950ED5730F62EE8(&(Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_1), 10);
				}
			}
		}
	}
}

void func_1029()
{
	int iVar0;
	
	if (func_1100() != 2)
	{
		return;
	}
	if (!unk_0x0E4018692D92041D(Local_112.f_1, 11))
	{
		if (!unk_0x0E4018692D92041D(Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_1, 12))
		{
			if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
			{
				if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -1271.592f, -3358.28f, 12.07015f, -1300.658f, -3408.515f, 20.94515f, 48.875f, 0, true, 0))
				{
					unk_0x8950ED5730F62EE8(&(Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_1), 12);
				}
			}
		}
	}
	if (!unk_0x0E4018692D92041D(Local_112.f_1, 12))
	{
		if (!unk_0x0E4018692D92041D(Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_1, 13))
		{
			if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
			{
				if (unk_0x416C37C19CCE0077(-1301.704f, -3398.337f, 13.0508f, 50f, 1))
				{
					unk_0x8950ED5730F62EE8(&(Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_1), 13);
				}
			}
		}
	}
	if (!unk_0x0E4018692D92041D(Local_112.f_1, 13))
	{
		iVar0 = 0;
		while (iVar0 < 15)
		{
			if (unk_0x4F94F07DAD382CDA(Local_112.f_13[iVar0]))
			{
				if (!func_10(Local_112.f_13[iVar0]))
				{
					if (!unk_0x0E4018692D92041D(Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_1, 14))
					{
						if (func_1030(unk_0xBB28786B7F552D0B(Local_112.f_13[iVar0])))
						{
							unk_0x8950ED5730F62EE8(&(Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_1), 14);
						}
					}
				}
			}
			iVar0++;
		}
	}
}

int func_1030(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC2ECB90E2DFA5802(unk_0x95B959F18401C09A(), iParam0))
	{
		return 1;
	}
	if (unk_0xAC6A512C64D9A9C0(unk_0x95B959F18401C09A(), iParam0))
	{
		return 1;
	}
	if (func_1031())
	{
		if (unk_0xDFD0ACB809AD97C9(unk_0x95B959F18401C09A(), &iVar0))
		{
			if (unk_0x068481DAF84B9654(iVar0))
			{
				iVar1 = unk_0x22B02EC53152632C(iVar0);
				if (unk_0x765F6FEEFF39224F(iVar1))
				{
					if (!unk_0xD62C4419A41F106A(iVar1, 0))
					{
						if (unk_0xF0D230FB550CD6EB(iVar1, 0))
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

bool func_1031()
{
	return Global_1574394;
}

void func_1032()
{
	if (!unk_0x0E4018692D92041D(Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_1, 7))
	{
		if (!unk_0xE38E3CF1625A4145(iLocal_123))
		{
			func_1034();
		}
		if (func_552())
		{
			if (func_367(unk_0x95B959F18401C09A()) > 2)
			{
				if (!func_632("GB_ASLT_GO"))
				{
					func_687("GB_ASLT_GO", func_1033(), 0, 0);
				}
			}
			else
			{
				func_667();
			}
		}
		else
		{
			func_667();
		}
		if (func_550())
		{
			unk_0x8950ED5730F62EE8(&(Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_1), 7);
		}
	}
	func_447();
}

char* func_1033()
{
	switch (func_1100())
	{
		case 0:
			return "GB_ASLT_GO0";
		
		case 1:
			return "GB_ASLT_GO1";
		
		case 2:
			return "GB_ASLT_GO2";
		
		case 3:
			return "GB_ASLT_GO4";
		
		default:
	}
	return "";
}

void func_1034()
{
	vector3 vVar0;
	
	if (func_367(unk_0x95B959F18401C09A()) < 1)
	{
		if (unk_0xE38E3CF1625A4145(iLocal_123))
		{
			unk_0x1ABDB383C83A336A(&iLocal_123);
		}
		return;
	}
	vVar0 = { func_1035() };
	if (func_1116())
	{
		if (!func_437(vVar0, 0f, 0f, 0f, 0))
		{
			iLocal_123 = unk_0x2C0ED4741A007C6A(vVar0);
			unk_0x1C316779E36C1967(iLocal_123, true);
			if (!unk_0x0E4018692D92041D(iLocal_114, 0))
			{
				unk_0x0E734BC61706D976(iLocal_123, 1);
				unk_0x43598712EC9E921C(iLocal_123, 7000);
				unk_0x0B1FD891620F7745();
				unk_0x8950ED5730F62EE8(&iLocal_114, 0);
			}
		}
	}
}

Vector3 func_1035()
{
	vector3 vVar0;
	
	switch (func_1100())
	{
		case 0:
			vVar0 = { -1067.07f, 4907.115f, 211.5355f };
			break;
		
		case 1:
		case 2:
		case 3:
			vVar0 = { func_539() };
			break;
	}
	return vVar0;
}

void func_1036()
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	bool bVar5;
	int iVar6;
	
	func_1044();
	vVar4 = { func_539() };
	if (!func_553())
	{
		if (unk_0x4F94F07DAD382CDA(Local_112.f_12))
		{
			iVar6 = 1;
		}
	}
	else if (unk_0x4F94F07DAD382CDA(Local_112.f_29[0]))
	{
		iVar6 = 1;
	}
	if (((iVar6 && func_552()) && unk_0x0E4018692D92041D(iLocal_114, 3)) && !func_582(unk_0x95B959F18401C09A(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		if (func_1116())
		{
			if (!unk_0x0E4018692D92041D(Local_112.f_1, 16))
			{
				if (!unk_0x0E4018692D92041D(iLocal_114, 16))
				{
					fVar2 = unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false), vVar4, false);
					if (func_1100() == 1)
					{
						fVar3 = 350f;
					}
					else
					{
						fVar3 = 200f;
					}
					if (fVar2 < fVar3)
					{
						func_403(1, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0);
						func_1041();
						unk_0x8950ED5730F62EE8(&iLocal_114, 16);
					}
				}
				else
				{
					fVar2 = unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false), vVar4, false);
					if (func_1100() == 1)
					{
						fVar3 = 350f;
					}
					else
					{
						fVar3 = 200f;
					}
					if (fVar2 > fVar3)
					{
						unk_0xCE689A8E8C42ED78(&iLocal_114, 16);
						func_412();
						func_403(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0);
					}
				}
			}
			else
			{
				if (unk_0x0E4018692D92041D(iLocal_114, 16))
				{
					unk_0xCE689A8E8C42ED78(&iLocal_114, 16);
					func_412();
					func_403(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0);
				}
				bVar5 = true;
			}
		}
		else
		{
			bVar5 = true;
		}
		if (!bVar5)
		{
			return;
		}
		vVar1 = { func_1040() };
		if (func_437(vVar1, 0f, 0f, 0f, 0))
		{
			return;
		}
		vVar0 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false) };
		switch (func_1100())
		{
			case 1:
				if (!func_551(vVar0, 3, 1000, 0))
				{
					func_407(10, 0, 0, 0, 0);
					func_1039(vVar1, 0f, 250f, 1, 75f, 0, 1, 65f, 1, 0, 0, 1, -1082130432);
					func_433(vVar1, 1, 0);
				}
				else if (func_551(vVar1, 3, 1000, 0))
				{
					func_407(10, 0, 0, 0, 0);
					func_1039(-2125.303f, 3130.697f, 31.8101f, 0f, 250f, 1, 100f, 0, 1, 65f, 1, 1, 0, 1, -1082130432);
					func_433(vVar1, 1, 0);
				}
				else
				{
					func_407(10, 0, 0, 0, 0);
					func_1039(vVar1, 0f, 250f, 1, 75f, 0, 1, 65f, 1, 0, 0, 1, -1082130432);
					func_433(vVar1, 1, 0);
				}
				break;
			
			case 2:
				if (!func_551(vVar0, 2, 1000, 0))
				{
					func_407(10, 0, 0, 0, 0);
					func_1039(vVar1, 0f, 250f, 1, 75f, 0, 1, 65f, 1, 0, 0, 1, -1082130432);
					func_433(vVar1, 1, 0);
				}
				else if (func_551(vVar1, 2, 1000, 0))
				{
					func_407(10, 0, 0, 0, 0);
					func_1039(-1294.827f, -3110.422f, 12.9469f, 0f, 250f, 1, 100f, 0, 1, 65f, 1, 1, 0, 1, -1082130432);
					func_433(vVar1, 1, 0);
				}
				else
				{
					func_407(10, 0, 0, 0, 0);
					func_1039(vVar1, 0f, 250f, 1, 75f, 0, 1, 65f, 1, 0, 0, 1, -1082130432);
					func_433(vVar1, 1, 0);
				}
				break;
			
			case 0:
			case 3:
				func_407(10, 0, 0, 0, 0);
				func_1039(vVar1, 0f, 250f, 1, 75f, 0, 1, 65f, 1, 0, 0, 1, -1082130432);
				func_433(vVar1, 1, 0);
				break;
		}
	}
	else
	{
		if (unk_0x0E4018692D92041D(iLocal_114, 16))
		{
			unk_0xCE689A8E8C42ED78(&iLocal_114, 16);
			func_412();
			func_403(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0);
		}
		if (unk_0x0E4018692D92041D(iLocal_114, 7))
		{
			func_401();
			func_1037();
		}
	}
}

void func_1037()
{
	if (Global_2413883.f_6 == unk_0x8C40DC84EDF05997())
	{
		func_1038();
	}
}

void func_1038()
{
	struct<28> Var0;
	
	if (unk_0x8ED4328770BEE4A1(Global_2413883.f_6))
	{
		if (!Global_2413883.f_6 == unk_0x8C40DC84EDF05997())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	Global_2413883 = { Var0 };
	Global_2413883.f_6 = -1;
}

void func_1039(vector3 vParam0, float fParam1, float fParam2, int iParam3, float fParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	struct<28> Var0;
	
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	if (unk_0x8ED4328770BEE4A1(Global_2413883.f_6))
	{
		if (!Global_2413883.f_6 == unk_0x8C40DC84EDF05997())
		{
			return;
		}
	}
	if (vmag(vParam0) == 0f)
	{
		return;
	}
	if (!unk_0x8ED4328770BEE4A1(Global_2413883.f_6))
	{
		Global_2413883.f_6 = unk_0x8C40DC84EDF05997();
	}
	Var0.f_6 = Global_2413883.f_6;
	Var0 = { vParam0 };
	Var0.f_5 = fParam1;
	Var0.f_4 = fParam2;
	Var0.f_7 = iParam3;
	Var0.f_3 = fParam4;
	Var0.f_8 = iParam6;
	Var0.f_9 = iParam5;
	Var0.f_10 = 0;
	Var0.f_11 = { 0f, 0f, 0f };
	Var0.f_14 = { 0f, 0f, 0f };
	Var0.f_17 = 0f;
	Var0.f_21 = fParam7;
	Var0.f_22 = iParam8;
	if (func_158(unk_0x95B959F18401C09A()))
	{
		if (iParam11 || iParam5)
		{
			Var0.f_23 = 1;
		}
		else
		{
			Var0.f_23 = 0;
		}
	}
	else
	{
		Var0.f_23 = 0;
	}
	if (Var0.f_21 < 1f)
	{
		Var0.f_21 = 1f;
	}
	Var0.f_24 = iParam9;
	Var0.f_26 = iParam10;
	Var0.f_27 = iParam12;
	Global_2413883 = { Var0 };
}

Vector3 func_1040()
{
	vector3 vVar0;
	
	vVar0 = { 0f, 0f, 0f };
	if (func_553())
	{
		if (unk_0x4F94F07DAD382CDA(Local_112.f_29[0]))
		{
			if (func_21(Local_112.f_29[0]))
			{
				vVar0 = { unk_0xFBB1F99A825CAB09(unk_0xFC00F22E930BFD55(Local_112.f_29[0]), true) };
			}
		}
	}
	else if (unk_0x4F94F07DAD382CDA(Local_112.f_12))
	{
		vVar0 = { unk_0xFBB1F99A825CAB09(unk_0xFC00F22E930BFD55(Local_112.f_12), true) };
	}
	return vVar0;
}

void func_1041()
{
	int iVar0;
	
	iVar0 = func_1100();
	switch (iVar0)
	{
		case 0:
			func_1042(-1018.545f, 4933.331f, 200.4811f, 131.9232f, 1065353216);
			func_1042(-998.4789f, 4962.462f, 192.9872f, 136.2f, 1065353216);
			func_1042(-1003.253f, 4975.881f, 191.8856f, 146.627f, 1065353216);
			func_1042(-1024.035f, 4964.985f, 198.0934f, 166.4202f, 1065353216);
			func_1042(-1031.564f, 4972.597f, 198.979f, 191.1345f, 1065353216);
			func_1042(-1038.26f, 4969.637f, 200.8855f, 199.1591f, 1065353216);
			func_1042(-985.6907f, 4953.929f, 203.5606f, 113.9255f, 1065353216);
			func_1042(-1013.707f, 4968.009f, 194.3295f, 162.9687f, 1065353216);
			func_1042(-1032.827f, 4939.053f, 202.438f, 167.0185f, 1065353216);
			func_1042(-1006.289f, 4951.076f, 196.4628f, 131.5821f, 1065353216);
			break;
		
		case 1:
			func_1042(-2268.493f, 3209.18f, 31.8102f, 273.8885f, 1065353216);
			func_1042(-2257.837f, 3235.47f, 31.8102f, 265.6924f, 1065353216);
			func_1042(-2249.269f, 3271.294f, 31.8102f, 249.5277f, 1065353216);
			func_1042(-2080.921f, 3261.697f, 31.8103f, 151.5588f, 1065353216);
			func_1042(-2070.796f, 3247.121f, 31.8103f, 90.5367f, 1065353216);
			func_1042(-2098.889f, 3234.007f, 31.8103f, 149.989f, 1065353216);
			func_1042(-2243.794f, 3279.584f, 31.8102f, 241.0335f, 1065353216);
			func_1042(-2293.544f, 3161.903f, 31.8269f, 290.6908f, 1065353216);
			func_1042(-2160.678f, 3141.504f, 31.8101f, 355.472f, 1065353216);
			func_1042(-2211.019f, 3163.282f, 31.8101f, 319.4941f, 1065353216);
			break;
		
		case 2:
			func_1042(-1331.171f, -3363.24f, 12.9452f, 313.574f, 1065353216);
			func_1042(-1326.501f, -3368.407f, 12.9471f, 322.2009f, 1065353216);
			func_1042(-1236.78f, -3414.983f, 12.9452f, 333.1109f, 1065353216);
			func_1042(-1231.426f, -3418.524f, 12.9452f, 334.4677f, 1065353216);
			func_1042(-1177.312f, -3375.885f, 12.945f, 83.8491f, 1065353216);
			func_1042(-1186.243f, -3377.919f, 12.945f, 74.4569f, 1065353216);
			func_1042(-1216.411f, -3378.862f, 12.945f, 70.7863f, 1065353216);
			func_1042(-1288.771f, -3328.059f, 12.945f, 232.0976f, 1065353216);
			func_1042(-1309.375f, -3295.191f, 12.9445f, 221.801f, 1065353216);
			func_1042(-1308.348f, -3285.848f, 12.9451f, 214.9276f, 1065353216);
			break;
		
		case 3:
			func_1042(445.1494f, -3025.946f, 5.0696f, 222.6693f, 1065353216);
			func_1042(448.0641f, -3001.941f, 5.0157f, 207.0258f, 1065353216);
			func_1042(465.6537f, -3021.472f, 5.0018f, 197.7798f, 1065353216);
			func_1042(481.5974f, -3008.189f, 5.0445f, 173.8646f, 1065353216);
			func_1042(514.1252f, -2991.035f, 5.0445f, 158.1715f, 1065353216);
			func_1042(529.0361f, -2988.633f, 5.0445f, 146.636f, 1065353216);
			func_1042(466.7868f, -3000.262f, 5.0445f, 191.0695f, 1065353216);
			func_1042(601.0988f, -3151.348f, 5.0693f, 12.3165f, 1065353216);
			func_1042(445.6588f, -3053.024f, 5.0696f, 277.6793f, 1065353216);
			func_1042(444.9568f, -3034.352f, 5.0696f, 241.1481f, 1065353216);
			break;
	}
}

void func_1042(vector3 vParam0, float fParam1, int iParam2)
{
	func_1043(vParam0, fParam1, iParam2);
}

void func_1043(vector3 vParam0, var uParam1, var uParam2)
{
	if (!Global_2405071.f_1741)
	{
	}
	if (Global_2405071.f_704 < 100)
	{
		if (vmag(vParam0) <= 0.01f)
		{
			return;
		}
		Global_2405071.f_704.f_1[Global_2405071.f_704 /*5*/] = { vParam0 };
		Global_2405071.f_704.f_1[Global_2405071.f_704 /*5*/].f_3 = uParam1;
		Global_2405071.f_704.f_1[Global_2405071.f_704 /*5*/].f_4 = uParam2;
		Global_2405071.f_704++;
	}
}

void func_1044()
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { 0f, 0f, 0f };
	if (!func_1116() && !func_381())
	{
		return;
	}
	if (func_553())
	{
		if (unk_0x4F94F07DAD382CDA(Local_112.f_29[0]))
		{
			if (func_21(Local_112.f_29[0]))
			{
				vVar0 = { unk_0xFBB1F99A825CAB09(unk_0xFC00F22E930BFD55(Local_112.f_29[0]), true) };
			}
		}
	}
	else if (unk_0x4F94F07DAD382CDA(Local_112.f_12))
	{
		vVar0 = { unk_0xFBB1F99A825CAB09(unk_0xE4B835FDC8B9B086(Local_112.f_12), true) };
	}
	if (!func_437(vVar0, 0f, 0f, 0f, 0))
	{
		if (func_552())
		{
			if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
			{
				vVar1 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true) };
				fVar2 = vdist2(vVar0, vVar1);
				if (!unk_0x0E4018692D92041D(iLocal_114, 3))
				{
					if (fVar2 <= 250000f)
					{
						unk_0x8950ED5730F62EE8(&iLocal_114, 3);
					}
					else if (!unk_0x0E4018692D92041D(Local_112.f_1, 6))
					{
						if (func_551(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false), 3, 1000, 0))
						{
							unk_0x8950ED5730F62EE8(&iLocal_114, 3);
						}
					}
				}
				else if (fVar2 > 562500f)
				{
					if (unk_0x0E4018692D92041D(Local_112.f_1, 6) || (!unk_0x0E4018692D92041D(Local_112.f_1, 6) && !func_551(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false), 3, 1000, 0)))
					{
						unk_0xCE689A8E8C42ED78(&iLocal_114, 3);
					}
				}
			}
		}
	}
}

void func_1045()
{
	if (func_381())
	{
		if (unk_0x4F94F07DAD382CDA(Local_112.f_12))
		{
			if (!unk_0x0E4018692D92041D(iLocal_114, 9))
			{
				if (func_380())
				{
					unk_0x861C6D8520E774EA(unk_0xE4B835FDC8B9B086(Local_112.f_12), true, 1);
					if (unk_0x4F94F07DAD382CDA(Local_112.f_12))
					{
						if (unk_0x5A4FB33F5B279A76(unk_0xE4B835FDC8B9B086(Local_112.f_12), unk_0x33CD235DF1E6A94E()))
						{
							unk_0x05E692E6C0FD48E1(unk_0xE4B835FDC8B9B086(Local_112.f_12));
						}
					}
					unk_0x8950ED5730F62EE8(&iLocal_114, 9);
				}
			}
			else if (!func_371())
			{
				if (!func_380())
				{
					unk_0x861C6D8520E774EA(unk_0xE4B835FDC8B9B086(Local_112.f_12), false, 1);
					unk_0xCE689A8E8C42ED78(&iLocal_114, 9);
				}
			}
		}
	}
}

void func_1046()
{
	struct<8> Var0;
	
	if (!unk_0x0E4018692D92041D(iLocal_114, 1))
	{
		if (func_1116())
		{
			if (func_367(unk_0x95B959F18401C09A()) >= 1)
			{
				if (!func_615(86))
				{
					if (func_609(0, 1, 1, 1))
					{
						Var0 = { func_1048() };
						func_726(&Var0, -1);
						func_600(1);
						unk_0x8950ED5730F62EE8(&iLocal_114, 1);
					}
				}
			}
		}
		else
		{
			unk_0x8950ED5730F62EE8(&iLocal_114, 1);
		}
	}
	if (!unk_0x0E4018692D92041D(iLocal_115, 2))
	{
		if (unk_0x0E4018692D92041D(iLocal_114, 1))
		{
			if (func_1116())
			{
				if (Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_5 > 1)
				{
					if (func_609(0, 1, 1, 1))
					{
						if (func_609(0, 1, 1, 1))
						{
							Var0 = { func_1047() };
							func_726(&Var0, -1);
							func_600(1);
							unk_0x8950ED5730F62EE8(&iLocal_115, 2);
						}
					}
				}
			}
		}
	}
	if (!unk_0x0E4018692D92041D(iLocal_115, 10))
	{
		if (func_1116())
		{
			if (((Local_112.f_5 != -1 || Local_112.f_7 != -1) || unk_0x0E4018692D92041D(Local_112.f_1, 16)) || unk_0x0E4018692D92041D(Local_112.f_1, 20))
			{
				if (func_609(0, 1, 1, 1))
				{
					func_726("GB_SGHT_RVL", -1);
					func_600(1);
					unk_0x8950ED5730F62EE8(&iLocal_115, 10);
				}
			}
		}
	}
}

struct<8> func_1047()
{
	struct<8> Var0;
	
	switch (func_1100())
	{
		case 0:
			StringCopy(&Var0, "GB_AST_RPCK1", 32);
			break;
		
		case 1:
			StringCopy(&Var0, "GB_AST_RTNK", 32);
			break;
		
		case 2:
			StringCopy(&Var0, "GB_AST_RPCK1", 32);
			break;
		
		case 3:
			StringCopy(&Var0, "GB_AST_RPCK2", 32);
			break;
	}
	return Var0;
}

struct<8> func_1048()
{
	struct<8> Var0;
	
	if (func_763())
	{
		switch (func_1100())
		{
			case 0:
				StringCopy(&Var0, "GB_AST_HELP1", 32);
				break;
			
			case 1:
				StringCopy(&Var0, "GB_AST_HELP4", 32);
				break;
			
			case 2:
				StringCopy(&Var0, "GB_AST_HELP1", 32);
				break;
			
			case 3:
				StringCopy(&Var0, "GB_AST_HELP1", 32);
				break;
		}
	}
	else
	{
		switch (func_1100())
		{
			case 0:
				StringCopy(&Var0, "GB_AST_HELP1G", 32);
				break;
			
			case 1:
				StringCopy(&Var0, "GB_AST_HELP4G", 32);
				break;
			
			case 2:
				StringCopy(&Var0, "GB_AST_HELP1G", 32);
				break;
			
			case 3:
				StringCopy(&Var0, "GB_AST_HELP1G", 32);
				break;
			}
	}
	return Var0;
}

void func_1049()
{
	int iVar0;
	
	if (!func_9(&(Local_112.f_54)))
	{
		return;
	}
	if (unk_0x0E4018692D92041D(iLocal_115, 6))
	{
		return;
	}
	iVar0 = (func_12() - func_1054(&(Local_112.f_54), 0, 0));
	if (!func_552())
	{
		return;
	}
	if (unk_0x0E4018692D92041D(Local_112.f_1, 1))
	{
		return;
	}
	if (unk_0x0E4018692D92041D(Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_1, 1))
	{
		return;
	}
	if (func_367(unk_0x95B959F18401C09A()) < 3)
	{
		return;
	}
	if (iVar0 <= 10000)
	{
		if (!unk_0x0E4018692D92041D(iLocal_114, 19))
		{
			iLocal_128 = unk_0x8CCC0A0504C52531();
			unk_0x0F8EAEEC97DDBCB3(iLocal_128, "10s", "MP_MISSION_COUNTDOWN_SOUNDSET", false);
			unk_0x8950ED5730F62EE8(&iLocal_114, 19);
		}
	}
	func_1053(iVar0);
	if (iVar0 > 30000)
	{
		func_1050(iVar0, "GB_WORK_END", 0, 0, 0, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	else if (iVar0 >= 0)
	{
		func_1050(iVar0, "GB_WORK_END", 0, 0, 0, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
	}
	else
	{
		func_1050(0, "GB_WORK_END", 0, 0, 0, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
	}
}

void func_1050(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_1052(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1373453.f_1 = 1;
		func_1051(7, iVar0);
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

void func_1051(int iParam0, int iParam1)
{
	unk_0x8950ED5730F62EE8(&(Global_1373453.f_6184[iParam0]), iParam1);
}

bool func_1052(int iParam0, int iParam1)
{
	return unk_0x0E4018692D92041D(Global_1373453.f_6184[iParam0], iParam1);
}

void func_1053(int iParam0)
{
	if (unk_0x0E4018692D92041D(iLocal_114, 29))
	{
		func_219();
		return;
	}
	if (!unk_0x0E4018692D92041D(iLocal_114, 30))
	{
		if (iParam0 <= 35000)
		{
			if (unk_0x65BA35D6D61F1574("APT_PRE_COUNTDOWN_STOP"))
			{
				unk_0x8950ED5730F62EE8(&iLocal_114, 30);
				unk_0x8950ED5730F62EE8(&iLocal_114, 28);
			}
		}
	}
	if (unk_0x0E4018692D92041D(iLocal_114, 28))
	{
		if (iParam0 <= 30000)
		{
			if (!unk_0x0E4018692D92041D(iLocal_115, 0))
			{
				if (unk_0x7E2EAC500C9B54E3("APT_COUNTDOWN_30S_KILL"))
				{
					unk_0xBDD4EE948C7B9BB5("AllowScoreAndRadio", 1);
					unk_0x1FEA416E00837AFC(0);
					unk_0x8950ED5730F62EE8(&iLocal_115, 0);
				}
			}
			if (!unk_0x0E4018692D92041D(iLocal_114, 31))
			{
				if (unk_0x65BA35D6D61F1574("APT_COUNTDOWN_30S"))
				{
					unk_0x8950ED5730F62EE8(&iLocal_114, 31);
				}
			}
			if (unk_0x0E4018692D92041D(iLocal_114, 31))
			{
				if (iParam0 <= 27000)
				{
					if (!unk_0x0E4018692D92041D(iLocal_115, 1))
					{
						unk_0x1FEA416E00837AFC(1);
						unk_0xBDD4EE948C7B9BB5("AllowScoreAndRadio", 0);
						unk_0x8950ED5730F62EE8(&iLocal_115, 1);
					}
					if (iParam0 <= 500)
					{
						if (unk_0x65BA35D6D61F1574("APT_FADE_IN_RADIO"))
						{
							unk_0x33854B8151B6D8EC("APT_COUNTDOWN_30S_KILL");
							unk_0xCE689A8E8C42ED78(&iLocal_114, 28);
						}
					}
				}
			}
		}
	}
}

int func_1054(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0xB331FCEB94EB05C8() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x5009A219B22D2352(unk_0x78DCC5D0CB43DEBA(), *uParam0);
		}
		else
		{
			return unk_0x5009A219B22D2352(unk_0x765FF3592EC81689(), *uParam0);
		}
	}
	return unk_0x5009A219B22D2352(unk_0xE3903F59E2F22150(), *uParam0);
}

void func_1055(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (bParam5)
	{
		iVar0 = func_251(unk_0x95B959F18401C09A());
		Global_1669645 = iVar0;
		Global_1669645.f_1 = iParam0;
		if (func_545() != func_18())
		{
			Global_1669645.f_2 = func_928(func_545());
			Global_1669645.f_3 = func_927(func_545());
		}
		if (func_324() != func_18())
		{
			func_779(func_324(), &(Global_1669645.f_2), &(Global_1669645.f_3));
		}
		Global_1669645.f_7 = unk_0xEF4753434B24594D();
		Global_1669645.f_28 = func_1016(unk_0x95B959F18401C09A());
		Global_1669645.f_13 = 0;
		Global_1669645.f_14 = 0;
		if (func_19(unk_0x95B959F18401C09A(), 1))
		{
			Global_1669645.f_23 = func_1019(func_321(1));
		}
	}
	else
	{
		iVar0 = func_290(unk_0x95B959F18401C09A());
	}
	if (iParam2 || func_724(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_1669384 = iVar0;
		if (func_390(iVar0))
		{
			Global_1669384.f_1 = 4;
		}
		else if (func_571(iVar0))
		{
			Global_1669384.f_1 = 5;
		}
		else if (func_293(iVar0, 0))
		{
			Global_1669384.f_1 = 2;
			if (func_744(iVar0))
			{
				Global_1669384.f_1 = 3;
			}
		}
		else
		{
			Global_1669384.f_1 = 1;
		}
		if (func_545() != func_18())
		{
			Global_1669384.f_4 = func_928(func_545());
			Global_1669384.f_5 = func_927(func_545());
		}
		if (func_324() != func_18())
		{
			func_779(func_324(), &(Global_1669384.f_6), &(Global_1669384.f_7));
		}
		Global_1669384.f_9 = unk_0xEF4753434B24594D();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_1669384.f_27 = 1;
			Global_1669384.f_28 = 1;
		}
		if (iParam0 != -1)
		{
			Global_1669384.f_26 = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_1669384.f_40 = func_775(iParam1);
			Global_1669384.f_41 = func_1077();
			Global_1669384.f_42 = func_889(unk_0x95B959F18401C09A(), iParam1);
			Global_1669384.f_44 = func_1009(unk_0x95B959F18401C09A(), iParam1);
		}
		if (!func_763() || iVar0 != 192)
		{
			Global_1669384.f_53 = 0;
		}
	}
	else if (func_568(iVar0))
	{
		if (iVar0 == 225 || iVar0 == 226)
		{
			Global_1669501 = iParam0 + 1;
		}
		else if (iVar0 == 227)
		{
			Global_1669501 = iParam0 + 1;
		}
		else
		{
			Global_1669501 = func_1076(unk_0x95B959F18401C09A());
		}
		switch (iVar0)
		{
			case 225:
				if (func_741(unk_0x95B959F18401C09A()) == 0)
				{
					Global_1669501.f_1 = 0;
				}
				else
				{
					Global_1669501.f_1 = 1;
				}
				break;
			
			case 226:
				Global_1669501.f_1 = 2;
				break;
			
			case 227:
				Global_1669501.f_1 = 3;
				break;
		}
		Global_1669501.f_21 = 1;
		Global_1669501.f_22 = 1;
		if (func_545() != func_18())
		{
			Global_1669501.f_4 = func_928(func_545());
			Global_1669501.f_5 = func_927(func_545());
		}
		if (func_324() != func_18())
		{
			func_779(func_324(), &(Global_1669501.f_4), &(Global_1669501.f_5));
		}
		Global_1669501.f_8 = unk_0xEF4753434B24594D();
		if (iParam0 != -1)
		{
			Global_1669501.f_20 = iParam0;
		}
	}
	else if (func_728(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
		}
		Global_1669438 = iVar0;
		Global_1669384.f_1 = 1;
		if (func_545() != func_18())
		{
			Global_1669438.f_4 = func_928(func_545());
			Global_1669438.f_5 = func_927(func_545());
		}
		if (func_324() != func_18())
		{
			func_779(func_324(), &(Global_1669438.f_6), &(Global_1669438.f_7));
		}
		Global_1669438.f_9 = unk_0xEF4753434B24594D();
		if (iParam0 != -1)
		{
			Global_1669438.f_21 = iParam0;
		}
	}
	else if (func_566(iVar0))
	{
		Global_1669545 = iVar0;
		Global_1669545.f_1 = iParam0;
		Global_1669545.f_21 = 1;
		Global_1669545.f_22 = 1;
		if (func_545() != func_18())
		{
			Global_1669545.f_4 = func_928(func_545());
			Global_1669545.f_5 = func_927(func_545());
		}
		if (func_324() != func_18())
		{
			func_779(func_324(), &(Global_1669545.f_4), &(Global_1669545.f_5));
		}
		Global_1669545.f_8 = unk_0xEF4753434B24594D();
		if (iParam0 != -1)
		{
			Global_1669545.f_20 = iParam0;
		}
		Global_1669545.f_27 = func_1002(func_38(), 5);
		Global_1669545.f_28 = func_1019(func_867(unk_0x95B959F18401C09A()));
		Global_1669545.f_29 = func_749(6107, -1, 0);
		Global_1669545.f_30 = func_749(6103, -1, 0);
		Global_1669545.f_31 = func_749(6104, -1, 0);
		Global_1669545.f_32 = func_749(6106, -1, 0);
		Global_1669545.f_33 = func_749(6105, -1, 0);
		Global_1669545.f_34 = func_749(6108, -1, 0);
		Global_1669545.f_7 = func_1018();
		Global_1669545.f_51 = func_1019(bParam4);
	}
	else if (func_564(iVar0))
	{
		Global_1669599 = iVar0;
		Global_1669599.f_1 = iParam0;
		Global_1669599.f_21 = 1;
		Global_1669599.f_22 = 1;
		if (func_545() != func_18())
		{
			Global_1669599.f_4 = func_928(func_545());
			Global_1669599.f_5 = func_927(func_545());
		}
		if (func_324() != func_18())
		{
			func_779(func_324(), &(Global_1669599.f_4), &(Global_1669599.f_5));
		}
		Global_1669599.f_8 = unk_0xEF4753434B24594D();
		if (iParam0 != -1)
		{
			Global_1669599.f_20 = iParam0;
		}
		Global_1669599.f_24 = func_749(6157, -1, 0);
		Global_1669599.f_25 = func_749(6162, -1, 0);
		Global_1669599.f_26 = func_749(6163, -1, 0);
		Global_1669599.f_27 = func_1019((((func_967() || func_966()) || func_965()) || func_964(unk_0x95B959F18401C09A())));
		Global_1669599.f_28 = func_749(6164, -1, 0);
		Global_1669599.f_29 = func_1019(func_963());
		Global_1669599.f_31 = 0;
		Global_1669599.f_30 = 0;
		Global_1669599.f_32 = 0;
		Global_1669599.f_33 = 0;
		Global_1669599.f_34 = 0;
		Global_1669599.f_16 = 0;
		Global_1669599.f_7 = func_1018();
	}
	else if (((((((((iVar0 == 250 || iVar0 == 238) || iVar0 == 242) || iVar0 == 244) || iVar0 == 248) || iVar0 == 241) || iVar0 == 239) || iVar0 == 240) || iVar0 == 249) || (iVar0 == 237 && func_739(func_740(unk_0x95B959F18401C09A()))))
	{
		Global_1669733 = iVar0;
		Global_1669733.f_1 = iParam0;
		Global_1669733.f_21 = 1;
		Global_1669733.f_22 = 1;
		Global_1669733.f_7 = func_1018();
		if (func_545() != func_18())
		{
			Global_1669733.f_4 = func_928(func_545());
			Global_1669733.f_5 = func_927(func_545());
		}
		if (func_324() != func_18())
		{
			func_779(func_324(), &(Global_1669733.f_4), &(Global_1669733.f_5));
		}
		if (func_545() != -1)
		{
			Global_1669733.f_17 = func_960(func_545());
		}
		Global_1669733.f_8 = unk_0xEF4753434B24594D();
		Global_1669733.f_28 = func_1016(unk_0x95B959F18401C09A());
		Global_1669733.f_16 = 0;
		Global_1669733.f_24 = 0;
		Global_1669733.f_23 = 0;
		if (func_19(unk_0x95B959F18401C09A(), 1))
		{
			Global_1669733.f_33 = func_1019(func_321(1));
		}
	}
	else if (iVar0 == 237)
	{
		Global_1669680 = iVar0;
		Global_1669680.f_1 = iParam0;
		Global_1669680.f_21 = 1;
		Global_1669680.f_22 = 1;
		Global_1669680.f_7 = func_1018();
		Global_1669680.f_24 = 0;
		Global_1669680.f_23 = 0;
		Global_1669680.f_16 = 0;
		if (func_545() != func_18())
		{
			Global_1669680.f_4 = func_928(func_545());
			Global_1669680.f_5 = func_927(func_545());
		}
		Global_1669680.f_28 = func_1016(unk_0x95B959F18401C09A());
		if (Global_1669680.f_28)
		{
			Global_1669680.f_29 = func_954(unk_0x95B959F18401C09A());
		}
		else
		{
			Global_1669680.f_29 = 0;
		}
		Global_1669680.f_30 = func_938(unk_0x95B959F18401C09A(), 4, -1);
		Global_1669680.f_31 = func_957(unk_0x95B959F18401C09A());
		Global_1669680.f_32 = func_1019(func_937(unk_0x95B959F18401C09A()));
		Global_1669680.f_33 = func_1019(func_936(unk_0x95B959F18401C09A()));
		Global_1669680.f_34 = func_1019(func_935(unk_0x95B959F18401C09A()));
		Global_1669680.f_35 = func_1019(func_934(unk_0x95B959F18401C09A()));
		Global_1669680.f_36 = func_933(unk_0x95B959F18401C09A());
		Global_1669680.f_37 = func_932(unk_0x95B959F18401C09A());
		Global_1669680.f_39 = func_931(unk_0x95B959F18401C09A());
		if (func_19(unk_0x95B959F18401C09A(), 1))
		{
			Global_1669680.f_41 = func_1019(func_321(1));
		}
		if (func_324() != func_18())
		{
			func_779(func_324(), &(Global_1669680.f_4), &(Global_1669680.f_5));
		}
		Global_1669680.f_8 = unk_0xEF4753434B24594D();
		Global_1669680.f_28 = func_1016(unk_0x95B959F18401C09A());
	}
	else if (func_737(iVar0))
	{
		Global_1669817 = iVar0;
		Global_1669817.f_1 = func_741(unk_0x95B959F18401C09A());
		Global_1669817.f_2 = func_1025();
		Global_1669817.f_3 = func_1024();
		Global_1669817.f_4 = func_928(func_545());
		Global_1669817.f_5 = func_927(func_545());
		Global_1669817.f_7 = func_1018();
		Global_1669817.f_8 = unk_0xEF4753434B24594D();
		Global_1669817.f_17 = func_960(func_545());
		Global_1669817.f_21 = 1;
		Global_1669817.f_22 = 1;
		Global_1669817.f_25 = iParam0;
		Global_1669817.f_27 = func_1019(func_925(unk_0x95B959F18401C09A()));
		Global_1669817.f_28 = func_922(21, -1);
	}
	else
	{
		if (func_545() != func_18())
		{
			Global_1669366 = func_928(func_545());
			Global_1669366.f_1 = func_927(func_545());
		}
		Global_1669366.f_5 = unk_0xEF4753434B24594D();
		Global_1669366.f_13 = func_1075();
		Global_1669366.f_15 = 0;
		if (func_1097(1))
		{
			if (func_324() == func_545())
			{
				Global_1669366.f_15 = 1;
			}
		}
		if (func_1074())
		{
			Global_1669501.f_28 = 1;
		}
		if (((((func_1073() || func_1072()) || func_1071()) || func_1070()) || func_1068()) || func_1067(unk_0x95B959F18401C09A()))
		{
			Global_1669501.f_30 = 1;
		}
		if (func_1065(func_1066(-1881846085)))
		{
			Global_1669501.f_32 = 1;
		}
		if (func_1059(func_1064(joaat("caddy"))))
		{
			Global_1669501.f_31 = 1;
		}
		if (func_1001(unk_0x95B959F18401C09A()) || func_1000(unk_0x95B959F18401C09A()))
		{
			Global_1669501.f_29 = 1;
		}
		if (func_997(unk_0x95B959F18401C09A()))
		{
			Global_1669501.f_33 = 1;
			Global_1669501.f_34 = 1;
		}
		if (func_998(unk_0x95B959F18401C09A()))
		{
			Global_1669501.f_36 = 1;
		}
		if (func_995(0, unk_0x95B959F18401C09A()) == 1)
		{
			Global_1669501.f_35 = 1;
		}
		if (func_1058(unk_0x95B959F18401C09A(), 3, &uVar1))
		{
			Global_1669501.f_37 = 1;
		}
		if (func_1058(unk_0x95B959F18401C09A(), 7, &uVar1))
		{
			Global_1669501.f_38 = 1;
		}
		if (func_1057(unk_0x95B959F18401C09A()))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = func_1056(unk_0x95B959F18401C09A(), iVar2);
				if (func_886(unk_0x95B959F18401C09A(), iVar3, 0))
				{
					Global_1669501.f_39 = 1;
				}
				if (func_886(unk_0x95B959F18401C09A(), iVar3, 2))
				{
					Global_1669501.f_40 = 1;
				}
				if (func_886(unk_0x95B959F18401C09A(), iVar3, 1))
				{
					Global_1669501.f_41 = 1;
				}
				iVar2++;
			}
		}
	}
}

int func_1056(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == func_18())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_881(Global_1589819[iParam0 /*818*/].f_273.f_177[iParam1 /*12*/]))
	{
		uVar0 = Global_1589819[iParam0 /*818*/].f_273.f_177[iParam1 /*12*/];
	}
	return uVar0;
}

int func_1057(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1058(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 != func_18())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam1 == func_995(iVar0, iParam0))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1059(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_922(11, -1) == 0)
	{
		return 0;
	}
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = (iParam0 + func_981(11));
		func_980(iVar1, &iVar0, 1);
		iVar2 = func_922(func_1061(iVar1), -1);
		if (iVar2 > 0)
		{
		}
		else if (iVar0 >= 0)
		{
		}
		if (iVar0 >= 0)
		{
			iVar3 = func_749(func_1060(4, iVar0), -1, 0);
			if (iVar2 > 0)
			{
			}
			if (iVar3 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1060(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1629;
				
				case 1:
					return 1636;
				
				case 2:
					return 1643;
				
				case 3:
					return 1650;
				
				case 4:
					return 1657;
				
				case 5:
					return 1664;
				
				case 6:
					return 1671;
				
				case 7:
					return 1678;
				
				case 8:
					return 1685;
				
				case 9:
					return 1692;
				
				case 10:
					return 1699;
				
				case 11:
					return 1705;
				
				case 12:
					return 1711;
				
				case 13:
					return 1717;
				
				case 14:
					return 1795;
				
				case 15:
					return 1802;
				
				case 16:
					return 1809;
				
				case 17:
					return 1816;
				
				case 18:
					return 1823;
				
				case 19:
					return 1830;
				
				case 20:
					return 1837;
				
				case 21:
					return 1844;
				
				case 22:
					return 1851;
				
				case 23:
					return 1858;
				
				case 24:
					return 1864;
				
				case 25:
					return 1870;
				
				case 26:
					return 2165;
				
				case 27:
					return 2172;
				
				case 28:
					return 2179;
				
				case 29:
					return 2186;
				
				case 30:
					return 2193;
				
				case 31:
					return 2200;
				
				case 32:
					return 2207;
				
				case 33:
					return 2214;
				
				case 34:
					return 2221;
				
				case 35:
					return 2228;
				
				case 36:
					return 2235;
				
				case 37:
					return 2241;
				
				case 38:
					return 2247;
				
				case 39:
					return 2828;
				
				case 40:
					return 2835;
				
				case 41:
					return 2842;
				
				case 42:
					return 2849;
				
				case 43:
					return 2856;
				
				case 44:
					return 2863;
				
				case 45:
					return 2870;
				
				case 46:
					return 2877;
				
				case 47:
					return 2884;
				
				case 48:
					return 2891;
				
				case 49:
					return 2898;
				
				case 50:
					return 2904;
				
				case 51:
					return 2910;
				
				case 52:
					return 2952;
				
				case 53:
					return 2959;
				
				case 54:
					return 2966;
				
				case 55:
					return 2973;
				
				case 56:
					return 2980;
				
				case 57:
					return 2987;
				
				case 58:
					return 2994;
				
				case 59:
					return 3001;
				
				case 60:
					return 3008;
				
				case 61:
					return 3015;
				
				case 62:
					return 3022;
				
				case 63:
					return 3028;
				
				case 64:
					return 3034;
				
				case 65:
					return 3235;
				
				case 66:
					return 3243;
				
				case 67:
					return 3251;
				
				case 68:
					return 3259;
				
				case 69:
					return 3267;
				
				case 70:
					return 3275;
				
				case 71:
					return 3283;
				
				case 72:
					return 3291;
				
				case 73:
					return 3299;
				
				case 74:
					return 3307;
				
				case 75:
					return 3315;
				
				case 76:
					return 3323;
				
				case 77:
					return 3331;
				
				case 78:
					return 3339;
				
				case 79:
					return 3347;
				
				case 80:
					return 3355;
				
				case 81:
					return 3363;
				
				case 82:
					return 3371;
				
				case 83:
					return 3379;
				
				case 84:
					return 3387;
				
				case 85:
					return 3395;
				
				case 86:
					return 3402;
				
				case 87:
					return 3409;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4031;
				
				case 89:
					return 4039;
				
				case 90:
					return 4047;
				
				case 91:
					return 4055;
				
				case 92:
					return 4063;
				
				case 93:
					return 4071;
				
				case 94:
					return 4079;
				
				case 95:
					return 4087;
				
				case 96:
					return 4095;
				
				case 97:
					return 4103;
				
				case 98:
					return 4111;
				
				case 99:
					return 4119;
				
				case 100:
					return 4127;
				
				case 101:
					return 4135;
				
				case 102:
					return 4143;
				
				case 103:
					return 4151;
				
				case 104:
					return 4159;
				
				case 105:
					return 4167;
				
				case 106:
					return 4175;
				
				case 107:
					return 4183;
				
				case 108:
					return 4191;
				
				case 109:
					return 4199;
				
				case 110:
					return 4207;
				
				case 111:
					return 4215;
				
				case 112:
					return 4223;
				
				case 113:
					return 4231;
				
				case 114:
					return 4239;
				
				case 115:
					return 4247;
				
				case 116:
					return 4255;
				
				case 117:
					return 4263;
				
				case 118:
					return 4271;
				
				case 119:
					return 4279;
				
				case 120:
					return 4287;
				
				case 121:
					return 4295;
				
				case 122:
					return 4303;
				
				case 123:
					return 4311;
				
				case 124:
					return 4319;
				
				case 125:
					return 4327;
				
				case 126:
					return 4335;
				
				case 127:
					return 4343;
				
				case 128:
					return 4351;
				
				case 129:
					return 4359;
				
				case 130:
					return 4367;
				
				case 131:
					return 4375;
				
				case 132:
					return 4383;
				
				case 133:
					return 4391;
				
				case 134:
					return 4399;
				
				case 135:
					return 4407;
				
				case 136:
					return 4415;
				
				case 137:
					return 4423;
				
				case 138:
					return 4431;
				
				case 139:
					return 4439;
				
				case 140:
					return 4447;
				
				case 141:
					return 4455;
				
				case 142:
					return 4463;
				
				case 143:
					return 4471;
				
				case 144:
					return 4479;
				
				case 145:
					return 4487;
				
				case 146:
					return 4495;
				
				case 147:
					return 4503;
				
				case 148:
					return 4511;
				
				case 149:
					return 4519;
				
				case 150:
					return 4527;
				
				case 151:
					return 4535;
				
				case 152:
					return 4543;
				
				case 153:
					return 4551;
				
				case 154:
					return 4559;
				
				case 155:
					return 4567;
				
				case 156:
					return 4575;
				
				case 157:
					return 4583;
				
				case 158:
					return 5476;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5925;
				
				case 160:
					return 5932;
				
				case 161:
					return 5939;
				
				case 162:
					return 5946;
				
				case 163:
					return 5953;
				
				case 164:
					return 5960;
				
				case 165:
					return 5967;
				
				case 166:
					return 5974;
				
				case 167:
					return 5981;
				
				case 168:
					return 5988;
				
				case 169:
					return 5995;
				
				case 170:
					return 6002;
				
				case 171:
					return 6009;
				
				case 172:
					return 6016;
				
				case 173:
					return 6023;
				
				case 174:
					return 6030;
				
				case 175:
					return 6037;
				
				case 176:
					return 6044;
				
				case 177:
					return 6051;
				
				case 178:
					return 6058;
				
				case 179:
					return 6065;
				
				case 180:
					return 6072;
				
				case 181:
					return 6079;
				
				case 182:
					return 6086;
				
				case 183:
					return 6093;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6170;
				
				case 185:
					return 6177;
				
				case 186:
					return 6184;
				
				case 187:
					return 6191;
				
				case 188:
					return 6198;
				
				case 189:
					return 6205;
				
				case 190:
					return 6212;
				
				case 191:
					return 6219;
				
				case 192:
					return 6226;
				
				case 193:
					return 6233;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6567;
				
				case 195:
					return 6574;
				
				case 196:
					return 6581;
				
				case 197:
					return 6588;
				
				case 198:
					return 6595;
				
				case 199:
					return 6602;
				
				case 200:
					return 6609;
				
				case 201:
					return 6616;
				
				case 202:
					return 6623;
				
				case 203:
					return 6630;
				
				case 204:
					return 6637;
				
				case 205:
					return 6644;
				
				case 206:
					return 6651;
				
				case 207:
					return 6658;
				
				case 208:
					return 6665;
				
				case 209:
					return 6672;
				
				case 210:
					return 6679;
				
				case 211:
					return 6686;
				
				case 212:
					return 6693;
				
				case 213:
					return 6700;
				
				case 214:
					return 6707;
				
				case 215:
					return 6714;
				
				case 216:
					return 6721;
				
				case 217:
					return 6728;
				
				case 218:
					return 6735;
				
				case 219:
					return 6742;
				
				case 220:
					return 6749;
				
				case 221:
					return 6756;
				
				case 222:
					return 6763;
				
				case 223:
					return 6770;
				
				case 224:
					return 6777;
				
				case 225:
					return 6784;
				
				case 226:
					return 6791;
				
				case 227:
					return 6798;
				
				case 228:
					return 6805;
				
				case 229:
					return 6812;
				
				case 230:
					return 6819;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7289;
				
				case 232:
					return 7296;
				
				case 233:
					return 7303;
				
				case 234:
					return 7310;
				
				case 235:
					return 7317;
				
				case 236:
					return 7324;
				
				case 237:
					return 7331;
				
				case 238:
					return 7338;
				
				case 239:
					return 7345;
				
				case 240:
					return 7352;
				
				case 241:
					return 7359;
				
				case 242:
					return 7366;
				
				case 243:
					return 7373;
				
				case 244:
					return 7380;
				
				case 245:
					return 7387;
				
				case 246:
					return 7394;
				
				case 247:
					return 7401;
				
				case 248:
					return 7408;
				
				case 249:
					return 7415;
				
				case 250:
					return 7422;
				
				case 251:
					return 7429;
				
				case 252:
					return 7436;
				
				case 253:
					return 7443;
				
				case 254:
					return 7450;
				
				case 255:
					return 7457;
				
				case 256:
					return 7464;
				
				case 257:
					return 7471;
				
				case 258:
					return 7478;
				
				case 259:
					return 7485;
				
				case 260:
					return 7492;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8012;
				
				case 262:
					return 8019;
				
				case 263:
					return 8026;
				
				case 264:
					return 8033;
				
				case 265:
					return 8040;
				
				case 266:
					return 8047;
				
				case 267:
					return 8054;
				
				case 268:
					return 8061;
				
				case 269:
					return 8068;
				
				case 270:
					return 8075;
				
				default:
			}
			break;
		
		case 2:
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
					return 1796;
				
				case 15:
					return 1803;
				
				case 16:
					return 1810;
				
				case 17:
					return 1817;
				
				case 18:
					return 1824;
				
				case 19:
					return 1831;
				
				case 20:
					return 1838;
				
				case 21:
					return 1845;
				
				case 22:
					return 1852;
				
				case 23:
					return 1859;
				
				case 24:
					return 1865;
				
				case 25:
					return 1871;
				
				case 26:
					return 2166;
				
				case 27:
					return 2173;
				
				case 28:
					return 2180;
				
				case 29:
					return 2187;
				
				case 30:
					return 2194;
				
				case 31:
					return 2201;
				
				case 32:
					return 2208;
				
				case 33:
					return 2215;
				
				case 34:
					return 2222;
				
				case 35:
					return 2229;
				
				case 36:
					return 2236;
				
				case 37:
					return 2242;
				
				case 38:
					return 2248;
				
				case 39:
					return 2829;
				
				case 40:
					return 2836;
				
				case 41:
					return 2843;
				
				case 42:
					return 2850;
				
				case 43:
					return 2857;
				
				case 44:
					return 2864;
				
				case 45:
					return 2871;
				
				case 46:
					return 2878;
				
				case 47:
					return 2885;
				
				case 48:
					return 2892;
				
				case 49:
					return 2899;
				
				case 50:
					return 2905;
				
				case 51:
					return 2911;
				
				case 52:
					return 2953;
				
				case 53:
					return 2960;
				
				case 54:
					return 2967;
				
				case 55:
					return 2974;
				
				case 56:
					return 2981;
				
				case 57:
					return 2988;
				
				case 58:
					return 2995;
				
				case 59:
					return 3002;
				
				case 60:
					return 3009;
				
				case 61:
					return 3016;
				
				case 62:
					return 3023;
				
				case 63:
					return 3029;
				
				case 64:
					return 3035;
				
				case 65:
					return 3236;
				
				case 66:
					return 3244;
				
				case 67:
					return 3252;
				
				case 68:
					return 3260;
				
				case 69:
					return 3268;
				
				case 70:
					return 3276;
				
				case 71:
					return 3284;
				
				case 72:
					return 3292;
				
				case 73:
					return 3300;
				
				case 74:
					return 3308;
				
				case 75:
					return 3316;
				
				case 76:
					return 3324;
				
				case 77:
					return 3332;
				
				case 78:
					return 3340;
				
				case 79:
					return 3348;
				
				case 80:
					return 3356;
				
				case 81:
					return 3364;
				
				case 82:
					return 3372;
				
				case 83:
					return 3380;
				
				case 84:
					return 3388;
				
				case 85:
					return 3396;
				
				case 86:
					return 3403;
				
				case 87:
					return 3410;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4032;
				
				case 89:
					return 4040;
				
				case 90:
					return 4048;
				
				case 91:
					return 4056;
				
				case 92:
					return 4064;
				
				case 93:
					return 4072;
				
				case 94:
					return 4080;
				
				case 95:
					return 4088;
				
				case 96:
					return 4096;
				
				case 97:
					return 4104;
				
				case 98:
					return 4112;
				
				case 99:
					return 4120;
				
				case 100:
					return 4128;
				
				case 101:
					return 4136;
				
				case 102:
					return 4144;
				
				case 103:
					return 4152;
				
				case 104:
					return 4160;
				
				case 105:
					return 4168;
				
				case 106:
					return 4176;
				
				case 107:
					return 4184;
				
				case 108:
					return 4192;
				
				case 109:
					return 4200;
				
				case 110:
					return 4208;
				
				case 111:
					return 4216;
				
				case 112:
					return 4224;
				
				case 113:
					return 4232;
				
				case 114:
					return 4240;
				
				case 115:
					return 4248;
				
				case 116:
					return 4256;
				
				case 117:
					return 4264;
				
				case 118:
					return 4272;
				
				case 119:
					return 4280;
				
				case 120:
					return 4288;
				
				case 121:
					return 4296;
				
				case 122:
					return 4304;
				
				case 123:
					return 4312;
				
				case 124:
					return 4320;
				
				case 125:
					return 4328;
				
				case 126:
					return 4336;
				
				case 127:
					return 4344;
				
				case 128:
					return 4352;
				
				case 129:
					return 4360;
				
				case 130:
					return 4368;
				
				case 131:
					return 4376;
				
				case 132:
					return 4384;
				
				case 133:
					return 4392;
				
				case 134:
					return 4400;
				
				case 135:
					return 4408;
				
				case 136:
					return 4416;
				
				case 137:
					return 4424;
				
				case 138:
					return 4432;
				
				case 139:
					return 4440;
				
				case 140:
					return 4448;
				
				case 141:
					return 4456;
				
				case 142:
					return 4464;
				
				case 143:
					return 4472;
				
				case 144:
					return 4480;
				
				case 145:
					return 4488;
				
				case 146:
					return 4496;
				
				case 147:
					return 4504;
				
				case 148:
					return 4512;
				
				case 149:
					return 4520;
				
				case 150:
					return 4528;
				
				case 151:
					return 4536;
				
				case 152:
					return 4544;
				
				case 153:
					return 4552;
				
				case 154:
					return 4560;
				
				case 155:
					return 4568;
				
				case 156:
					return 4576;
				
				case 157:
					return 4584;
				
				case 158:
					return 5477;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5926;
				
				case 160:
					return 5933;
				
				case 161:
					return 5940;
				
				case 162:
					return 5947;
				
				case 163:
					return 5954;
				
				case 164:
					return 5961;
				
				case 165:
					return 5968;
				
				case 166:
					return 5975;
				
				case 167:
					return 5982;
				
				case 168:
					return 5989;
				
				case 169:
					return 5996;
				
				case 170:
					return 6003;
				
				case 171:
					return 6010;
				
				case 172:
					return 6017;
				
				case 173:
					return 6024;
				
				case 174:
					return 6031;
				
				case 175:
					return 6038;
				
				case 176:
					return 6045;
				
				case 177:
					return 6052;
				
				case 178:
					return 6059;
				
				case 179:
					return 6066;
				
				case 180:
					return 6073;
				
				case 181:
					return 6080;
				
				case 182:
					return 6087;
				
				case 183:
					return 6094;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6171;
				
				case 185:
					return 6178;
				
				case 186:
					return 6185;
				
				case 187:
					return 6192;
				
				case 188:
					return 6199;
				
				case 189:
					return 6206;
				
				case 190:
					return 6213;
				
				case 191:
					return 6220;
				
				case 192:
					return 6227;
				
				case 193:
					return 6234;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6568;
				
				case 195:
					return 6575;
				
				case 196:
					return 6582;
				
				case 197:
					return 6589;
				
				case 198:
					return 6596;
				
				case 199:
					return 6603;
				
				case 200:
					return 6610;
				
				case 201:
					return 6617;
				
				case 202:
					return 6624;
				
				case 203:
					return 6631;
				
				case 204:
					return 6638;
				
				case 205:
					return 6645;
				
				case 206:
					return 6652;
				
				case 207:
					return 6659;
				
				case 208:
					return 6666;
				
				case 209:
					return 6673;
				
				case 210:
					return 6680;
				
				case 211:
					return 6687;
				
				case 212:
					return 6694;
				
				case 213:
					return 6701;
				
				case 214:
					return 6708;
				
				case 215:
					return 6715;
				
				case 216:
					return 6722;
				
				case 217:
					return 6729;
				
				case 218:
					return 6736;
				
				case 219:
					return 6743;
				
				case 220:
					return 6750;
				
				case 221:
					return 6757;
				
				case 222:
					return 6764;
				
				case 223:
					return 6771;
				
				case 224:
					return 6778;
				
				case 225:
					return 6785;
				
				case 226:
					return 6792;
				
				case 227:
					return 6799;
				
				case 228:
					return 6806;
				
				case 229:
					return 6813;
				
				case 230:
					return 6820;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7290;
				
				case 232:
					return 7297;
				
				case 233:
					return 7304;
				
				case 234:
					return 7311;
				
				case 235:
					return 7318;
				
				case 236:
					return 7325;
				
				case 237:
					return 7332;
				
				case 238:
					return 7339;
				
				case 239:
					return 7346;
				
				case 240:
					return 7353;
				
				case 241:
					return 7360;
				
				case 242:
					return 7367;
				
				case 243:
					return 7374;
				
				case 244:
					return 7381;
				
				case 245:
					return 7388;
				
				case 246:
					return 7395;
				
				case 247:
					return 7402;
				
				case 248:
					return 7409;
				
				case 249:
					return 7416;
				
				case 250:
					return 7423;
				
				case 251:
					return 7430;
				
				case 252:
					return 7437;
				
				case 253:
					return 7444;
				
				case 254:
					return 7451;
				
				case 255:
					return 7458;
				
				case 256:
					return 7465;
				
				case 257:
					return 7472;
				
				case 258:
					return 7479;
				
				case 259:
					return 7486;
				
				case 260:
					return 7493;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8013;
				
				case 262:
					return 8020;
				
				case 263:
					return 8027;
				
				case 264:
					return 8034;
				
				case 265:
					return 8041;
				
				case 266:
					return 8048;
				
				case 267:
					return 8055;
				
				case 268:
					return 8062;
				
				case 269:
					return 8069;
				
				case 270:
					return 8076;
				
				default:
			}
			break;
		
		case 3:
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
				
				case 79:
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
				
				default:
			}
			break;
		
		case 4:
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
				
				case 79:
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
				
				default:
			}
			break;
		
		case 5:
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
				
				case 79:
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
				
				default:
			}
			break;
		
		case 6:
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
				
				case 13:
					return 1723;
				
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
					return 3338;
				
				case 78:
					return 3346;
				
				case 79:
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
					return 4134;
				
				case 101:
					return 4142;
				
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
					return 4294;
				
				case 121:
					return 4302;
				
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
					return 4454;
				
				case 141:
					return 4462;
				
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
				
				default:
			}
			break;
		
		case 7:
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
					return 3337;
				
				case 78:
					return 3345;
				
				case 79:
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
					return 4133;
				
				case 101:
					return 4141;
				
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
					return 4293;
				
				case 121:
					return 4301;
				
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
					return 4453;
				
				case 141:
					return 4461;
				
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
				
				default:
			}
			break;
	}
	return 1629;
}

int func_1061(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 271)
	{
		iVar0 = 0;
		while (iVar0 < 22)
		{
			if (iParam0 >= func_981(iVar0) && iParam0 < func_1062(iVar0))
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_1062(int iParam0)
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
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_924(iParam0);
		return func_1063(iVar0);
	}
	return (func_982(iParam0, -1) * iParam0 + 1);
}

int func_1063(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 157;
		
		case 2:
			return 224;
		
		case 1:
			return 227;
		
		default:
	}
	return -1;
}

int func_1064(int iParam0)
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

int func_1065(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = iParam0 + 157;
		func_980(iVar1, &iVar0, 1);
		if (iVar0 >= 0)
		{
			iVar2 = func_749(func_1060(4, iVar0), -1, 0);
			if (iVar2 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1066(int iParam0)
{
	switch (iParam0)
	{
		case -1881846085:
			return 0;
			break;
	}
	return -1;
}

int func_1067(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (Global_1589819[iParam0 /*818*/].f_273.f_333 != 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1068()
{
	return func_749(func_1069(3), -1, 0) != 0;
}

int func_1069(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6538;
			break;
		
		case 1:
			return 6540;
			break;
		
		case 2:
			return 6541;
			break;
		
		case 3:
			return 6542;
			break;
		
		case 4:
			return 6543;
			break;
		
		case 5:
			return 6544;
			break;
	}
	return 10383;
}

bool func_1070()
{
	return func_749(6163, -1, 0) != 0;
}

bool func_1071()
{
	return func_749(5380, -1, 0) != 0;
}

bool func_1072()
{
	return func_749(3828, -1, 0) != 0;
}

bool func_1073()
{
	return func_749(3223, -1, 0) != 0;
}

bool func_1074()
{
	return func_749(5379, -1, 0) != 0;
}

int func_1075()
{
	int iVar0;
	
	iVar0 = func_545();
	if (iVar0 != func_18())
	{
		return Global_1626536[iVar0 /*603*/].f_11.f_98;
	}
	return 0;
}

int func_1076(int iParam0)
{
	if (func_290(iParam0) == 225 || func_290(iParam0) == 226)
	{
		return func_741(iParam0);
	}
	return -1;
}

var func_1077()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_888(unk_0x95B959F18401C09A(), iVar0))
		{
			unk_0x8950ED5730F62EE8(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

int func_1078(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_714(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	return func_702(&Var0);
}

struct<8> func_1079()
{
	struct<8> Var0;
	
	switch (func_1100())
	{
		case 0:
			StringCopy(&Var0, "BIGM_ASLTD", 32);
			break;
		
		case 1:
			StringCopy(&Var0, "BIGM_ASLDV", 32);
			break;
		
		case 2:
			StringCopy(&Var0, "BIGM_ASLTD", 32);
			break;
		
		case 3:
			StringCopy(&Var0, "BIGM_ASLTD", 32);
			break;
	}
	return Var0;
}

void func_1080()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		switch (Local_112.f_35[iVar0])
		{
			case 0:
				break;
			
			case 1:
				break;
			
			case 3:
				if (unk_0x4F94F07DAD382CDA(Local_112.f_13[iVar0]))
				{
					if (func_1085(Local_112.f_13[iVar0]))
					{
						if (unk_0x6F3D61B58C7B4025(Local_112.f_13[iVar0]))
						{
							if (!func_10(Local_112.f_13[iVar0]))
							{
								if (unk_0xD76D6BCC14B95CE1(unk_0xBB28786B7F552D0B(Local_112.f_13[iVar0]), -1442466670) != 1 && unk_0xD76D6BCC14B95CE1(unk_0xBB28786B7F552D0B(Local_112.f_13[iVar0]), -1442466670) != 0)
								{
									if (func_1100() == 2)
									{
										unk_0x4A852F02088ECC9D(unk_0xBB28786B7F552D0B(Local_112.f_13[iVar0]), false);
									}
									unk_0x77631BBB824DF500(unk_0xBB28786B7F552D0B(Local_112.f_13[iVar0]), 299f, 0);
								}
							}
						}
					}
				}
				break;
		}
		if (iVar0 > 0)
		{
			func_1081(Local_112.f_13[iVar0], &(Local_118[iVar0 /*8*/]), -1082130432, 0, 0, 0, 0, -1, -1, 1);
		}
		iVar0++;
	}
}

void func_1081(int iParam0, int iParam1, float fParam2, bool bParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, bool bParam9)
{
	if (unk_0x22C3124A898FB82A(iParam0))
	{
		if (func_1084())
		{
			Global_2437364 = unk_0x95B959F18401C09A();
		}
		if (bParam3)
		{
			func_1083(unk_0xBB28786B7F552D0B(iParam0), iParam1, 1, Global_2437364, iParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_1083(unk_0xBB28786B7F552D0B(iParam0), iParam1, -1, Global_2437364, iParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (unk_0xE38E3CF1625A4145(*iParam1))
	{
		func_1082(iParam1);
	}
}

void func_1082(int iParam0)
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

int func_1083(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
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

bool func_1084()
{
	return Global_1312844;
}

int func_1085(int iParam0)
{
	if (unk_0x5E2784BB00B20E8E(iParam0))
	{
		return 1;
	}
	if (func_1086(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_1086(int iParam0)
{
	if (!unk_0x06C1EBC003C18F1F())
	{
		return 0;
	}
	if (!unk_0x4F94F07DAD382CDA(iParam0))
	{
		return 0;
	}
	if (func_1087(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_1087(int iParam0)
{
	if (unk_0x22C3124A898FB82A(iParam0))
	{
		unk_0x254D3936DA813A55(iParam0);
		return unk_0x6F3D61B58C7B4025(iParam0);
	}
	return 0;
}

void func_1088()
{
	int iVar0;
	int iVar1;
	
	if (Local_112 != 4)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = unk_0x7C1C88877E8AAA50(iVar0);
			if (unk_0xC4DEA49C5B465481(iVar1))
			{
				if (iVar1 != unk_0x95B959F18401C09A())
				{
					if (unk_0x982A72D771CF4FE1(iVar1))
					{
						if (!unk_0x0E4018692D92041D(Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_3, iVar0))
						{
							if (func_553())
							{
								func_674(iVar1, 421, 0, 0);
							}
							else
							{
								func_674(iVar1, 457, 0, 0);
							}
							unk_0x8950ED5730F62EE8(&(Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_3), iVar0);
						}
					}
					else if (unk_0x0E4018692D92041D(Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_3, iVar0))
					{
						if (func_553())
						{
							func_674(iVar1, 421, 0, 0);
						}
						else
						{
							func_674(iVar1, 457, 0, 0);
						}
						unk_0xCE689A8E8C42ED78(&(Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_3), iVar0);
					}
				}
			}
			else if (unk_0x0E4018692D92041D(Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_3, iVar0))
			{
				unk_0xCE689A8E8C42ED78(&(Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_3), iVar0);
			}
			iVar0++;
		}
	}
}

void func_1089()
{
	if (func_1100() == 0)
	{
		if (func_25() == 0)
		{
			func_1090("PY8hdiWoAkudg9SpK8G2xQ");
		}
	}
}

void func_1090(char* sParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x786AF4A44E1B5B4B(sParam0))
	{
		return;
	}
	iVar0 = unk_0x36163153849DFDA1(sParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		if (unk_0x0E4018692D92041D(Global_2359721[iVar1 /*26*/].f_12, 11))
		{
			if (func_1091(&(Global_2359721[iVar1 /*26*/].f_15)) == iVar0)
			{
				if (!unk_0x0E4018692D92041D(Global_2359721[iVar1 /*26*/].f_13, 26))
				{
					unk_0x8950ED5730F62EE8(&(Global_2359721[iVar1 /*26*/].f_13), 26);
				}
				return;
			}
		}
		iVar1++;
	}
}

int func_1091(var uParam0)
{
	struct<13> Var0;
	int iVar1;
	int iVar2;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar1 = 0;
	iVar2 = func_1093(uParam0);
	if (iVar2 == -1)
	{
		return iVar1;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_1092(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar1;
		
		default:
	}
	return iVar1;
}

struct<13> func_1092(var uParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar1 = func_1093(uParam0);
	if (iVar1 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_107189[iVar1 /*13*/];
		
		case 62:
			return Global_917806.f_9405[iVar1 /*13*/];
		
		default:
	}
	return Var0;
}

int func_1093(var uParam0)
{
	int iVar0;
	
	if (unk_0x786AF4A44E1B5B4B(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_1095(uParam0->f_1))
	{
		if (func_1094(uParam0))
		{
			return 9999;
		}
		return -1;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (unk_0x0E4018692D92041D(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (unk_0xCE3CFF625BEBAA04(&(Global_794709.f_4[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0x0E4018692D92041D(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1218)
			{
				if (unk_0x0E4018692D92041D(Global_794709.f_4[iVar0 /*88*/].f_76, 13))
				{
					if (unk_0xCE3CFF625BEBAA04(&(Global_794709.f_4[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 62:
			if (unk_0x0E4018692D92041D(Global_917806.f_604[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (unk_0xCE3CFF625BEBAA04(&(Global_917806.f_604[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0x0E4018692D92041D(Global_917806.f_604[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 100)
			{
				if (unk_0x0E4018692D92041D(Global_917806.f_604[iVar0 /*88*/].f_76, 13))
				{
					if (unk_0xCE3CFF625BEBAA04(&(Global_917806.f_604[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 40:
			return uParam0->f_1;
		
		default:
	}
	if (uParam0->f_2 == unk_0x95B959F18401C09A())
	{
		if (unk_0x0E4018692D92041D(Global_939452.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (unk_0xCE3CFF625BEBAA04(&(Global_939452.f_5[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (unk_0x0E4018692D92041D(Global_939452.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (Global_1310987.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (unk_0x0E4018692D92041D(Global_939452.f_5[iVar0 /*88*/].f_76, 13))
			{
				if (unk_0xCE3CFF625BEBAA04(&(Global_939452.f_5[iVar0 /*88*/]), &(uParam0->f_3)))
				{
					uParam0->f_1 = iVar0;
					return iVar0;
				}
			}
			iVar0++;
		}
		return -1;
	}
	else if (uParam0->f_2 < 32)
	{
		return -1;
	}
	return -1;
}

int func_1094(var uParam0)
{
	if (Global_2398103)
	{
		if (unk_0xCE3CFF625BEBAA04(&(Global_2398103.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_1095(int iParam0)
{
	return iParam0 == 9999;
}

void func_1096()
{
	if (func_1100() != 1 && func_1100() != 2)
	{
		return;
	}
	if (func_1100() != 1)
	{
		if (unk_0x4F94F07DAD382CDA(Local_112.f_29[0]))
		{
			unk_0x73EE98A5DB0530DA(Local_112.f_29[0], 1);
		}
	}
}

bool func_1097(bool bParam0)
{
	return func_19(unk_0x95B959F18401C09A(), bParam0);
}

void func_1098()
{
	if (unk_0x36CDBD83DF514AC4(1343869835))
	{
		unk_0x046ED2CF120C8949(1343869835, 1, 0, 0);
		unk_0x1ABC36611CBE0E84(1343869835, 1f, 0, 0);
	}
	if (unk_0x36CDBD83DF514AC4(207506449))
	{
		unk_0x046ED2CF120C8949(207506449, 1, 0, 0);
		unk_0x1ABC36611CBE0E84(207506449, 1f, 0, 0);
	}
}

void func_1099()
{
	Global_1666782 = 1;
	if (!unk_0x0E4018692D92041D(Global_2537168, 0))
	{
		unk_0x8950ED5730F62EE8(&Global_2537168, 0);
		unk_0x8950ED5730F62EE8(&Global_1666783, 0);
	}
	if (!unk_0x0E4018692D92041D(Global_2537168, 1))
	{
		unk_0x8950ED5730F62EE8(&Global_2537168, 1);
		unk_0x8950ED5730F62EE8(&Global_1666783, 1);
	}
	if (!unk_0x0E4018692D92041D(Global_2537168, 5))
	{
		unk_0x8950ED5730F62EE8(&Global_2537168, 5);
		unk_0x8950ED5730F62EE8(&Global_1666783, 5);
	}
	if (unk_0x36CDBD83DF514AC4(-355737150))
	{
		unk_0x046ED2CF120C8949(-355737150, 0, 0, 0);
	}
	if (unk_0x36CDBD83DF514AC4(-580979506))
	{
		unk_0x046ED2CF120C8949(-580979506, 0, 0, 0);
	}
	if (unk_0x36CDBD83DF514AC4(-1426452475))
	{
		unk_0x046ED2CF120C8949(-1426452475, 0, 0, 0);
	}
	if (unk_0x36CDBD83DF514AC4(745417724))
	{
		unk_0x046ED2CF120C8949(745417724, 0, 0, 0);
	}
	if (unk_0x36CDBD83DF514AC4(-1305304906))
	{
		unk_0x046ED2CF120C8949(-1305304906, 0, 0, 0);
	}
	if (unk_0x36CDBD83DF514AC4(-1543175077))
	{
		unk_0x046ED2CF120C8949(-1543175077, 0, 0, 0);
	}
	if (unk_0x36CDBD83DF514AC4(-811770997))
	{
		unk_0x046ED2CF120C8949(-811770997, 0, 0, 0);
	}
}

int func_1100()
{
	if (Local_112.f_3 != -1)
	{
		return Local_112.f_3;
	}
	if (unk_0x06C1EBC003C18F1F())
	{
		if (Local_112.f_3 == -1)
		{
			if (Local_112.f_3 == -1)
			{
				if (Global_2528542.f_5657 != -1)
				{
					Local_112.f_3 = Global_2528542.f_5657;
				}
				else
				{
					Local_112.f_3 = 1;
				}
			}
		}
	}
	return Local_112.f_3;
}

void func_1101(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	float fVar0;
	
	if (Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_33 != iParam0)
	{
		func_1115(-1);
		Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_33 = iParam0;
		if (func_1114() != -1)
		{
			func_1113(-1);
		}
		if (func_1112() != -1)
		{
			func_1111(-1);
		}
		func_1110(iParam2);
		func_1108(iParam0);
		if (!func_429(iParam0))
		{
			fVar0 = func_428(iParam0);
			if (fVar0 != 1f)
			{
				func_424(fVar0);
				unk_0x8950ED5730F62EE8(&(Global_1669357.f_3), 1);
			}
		}
		if (!func_432(iParam0) || iParam3)
		{
			if (func_430(iParam0, iParam2) && iParam3 == 1)
			{
				unk_0xD875615F72CD34A6(0);
				if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
				{
					unk_0x98F04A4FFB4AD01C(unk_0x95B959F18401C09A(), 0, 0);
					unk_0x66D901F8097E8E86(unk_0x95B959F18401C09A(), 0);
				}
				unk_0x8950ED5730F62EE8(&(Global_1669357.f_3), 0);
			}
			else if (unk_0xB83C26C286A4219F() < 5)
			{
				unk_0x4B06B5746CBEC99F(1f);
				unk_0xD875615F72CD34A6(5);
			}
		}
		if (func_380())
		{
			func_372(27);
		}
		if (bParam1)
		{
			if (!func_371())
			{
				func_421(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((unk_0x0E4018692D92041D(Global_2528542.f_4546, 1) || unk_0x0E4018692D92041D(Global_2528542.f_4546, 4)) || unk_0x0E4018692D92041D(Global_2528542.f_4546, 0))
			{
				func_832(6);
			}
			func_1107();
		}
		if (((iParam0 == 164 || iParam0 == 208) || iParam0 == 250) || iParam0 == 237)
		{
			unk_0xA53C1C92EE35EC0E(3, false);
			unk_0xA53C1C92EE35EC0E(5, false);
		}
		if (func_161(unk_0x95B959F18401C09A()) && func_369(unk_0x95B959F18401C09A()))
		{
			unk_0x8950ED5730F62EE8(&(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_1), 8);
		}
		func_1103();
		if (func_1102(iParam0))
		{
			unk_0xA53C1C92EE35EC0E(3, false);
			unk_0xA53C1C92EE35EC0E(5, false);
			unk_0x8950ED5730F62EE8(&(Global_1669357.f_3), 6);
		}
		Global_2528542.f_6270 = 0;
	}
}

int func_1102(int iParam0)
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
			return 1;
		
		default:
	}
	return 0;
}

void func_1103()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	bVar3 = func_1106();
	iVar2 = func_46(unk_0x95B959F18401C09A());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x7C1C88877E8AAA50(iVar0);
		if (unk_0xC4DEA49C5B465481(iVar1))
		{
			if (func_16(iVar1, iVar2, 1) || func_1104(iVar1, unk_0x95B959F18401C09A()))
			{
				unk_0x29247C3358570094(unk_0x95B959F18401C09A(), iVar1, bVar3);
				unk_0x29247C3358570094(iVar1, unk_0x95B959F18401C09A(), bVar3);
			}
		}
		iVar0++;
	}
}

int func_1104(int iParam0, int iParam1)
{
	if (func_19(iParam0, 1) && func_19(iParam1, 1))
	{
		return (func_1105(iParam0) == func_46(iParam1) || func_1105(iParam1) == func_46(iParam0));
	}
	return 0;
}

int func_1105(int iParam0)
{
	if (func_19(iParam0, 1))
	{
		return Global_1626536[func_46(iParam0) /*603*/].f_11.f_481;
	}
	return func_18();
}

int func_1106()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_545();
	if (iVar0 != func_18())
	{
		if (func_1228(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return unk_0x0E4018692D92041D(Global_1626536[iVar1 /*603*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_1107()
{
	if (unk_0x0E4018692D92041D(Global_2528542.f_4546, 1))
	{
		unk_0xCE689A8E8C42ED78(&(Global_2528542.f_4546), 1);
	}
	if (unk_0x0E4018692D92041D(Global_2528542.f_4546, 4))
	{
		unk_0xCE689A8E8C42ED78(&(Global_2528542.f_4546), 4);
	}
	if (unk_0x0E4018692D92041D(Global_2528542.f_4546, 6))
	{
		unk_0xCE689A8E8C42ED78(&(Global_2528542.f_4546), 6);
	}
	unk_0xCE689A8E8C42ED78(&(Global_2528542.f_4546), 0);
	unk_0xCE689A8E8C42ED78(&(Global_2528542.f_4546), 2);
	Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_693 = 0;
	if (Global_2528542.f_4548 > 0)
	{
		unk_0xD875615F72CD34A6(Global_2528542.f_4548);
	}
	Global_2528542.f_4547 = 0;
}

void func_1108(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_749(3791, -1, 0);
	iVar1 = func_1109(iParam0);
	if (iVar1 != -1)
	{
		unk_0x8950ED5730F62EE8(&iVar0, iVar1);
		func_747(3791, iVar0, -1, 1, 0);
	}
}

int func_1109(int iParam0)
{
	switch (iParam0)
	{
		case 170:
			return 0;
		
		case 166:
			return 1;
		
		case 171:
			return 2;
		
		case 172:
			return 3;
		
		case 173:
			return 4;
		
		case 214:
			return 5;
		
		case 215:
			return 6;
		
		case 216:
			return 7;
		
		case 217:
			return 8;
		
		case 218:
			return 9;
		
		case 219:
			return 10;
		
		case 220:
			return 11;
		
		case 221:
			return 12;
		
		default:
	}
	return -1;
}

void func_1110(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x95B959F18401C09A();
	if (Global_1626536[iVar0 /*603*/].f_11.f_181 != iParam0)
	{
		Global_1626536[iVar0 /*603*/].f_11.f_181 = iParam0;
	}
}

void func_1111(int iParam0)
{
	if (Global_2528542.f_4889.f_336 != iParam0)
	{
		Global_2528542.f_4889.f_336 = iParam0;
	}
}

int func_1112()
{
	return Global_2528542.f_4889.f_336;
}

void func_1113(int iParam0)
{
	if (Global_2528542.f_4889.f_335 != iParam0)
	{
		Global_2528542.f_4889.f_335 = iParam0;
	}
}

int func_1114()
{
	return Global_2528542.f_4889.f_335;
}

void func_1115(int iParam0)
{
	Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_32 = iParam0;
}

int func_1116()
{
	int iVar0;
	
	iVar0 = func_1117();
	if (iVar0 > -1)
	{
		if (Local_112.f_8 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_1117()
{
	int iVar0;
	
	if (Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_4 != -1)
	{
		return Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_4;
	}
	if (func_20(unk_0x95B959F18401C09A()))
	{
		Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_4 = unk_0x72B85B341ADBE9DE();
		if (unk_0x72B85B341ADBE9DE() == Local_112.f_8)
		{
			func_697(1);
		}
	}
	else if (func_19(unk_0x95B959F18401C09A(), 1))
	{
		iVar0 = func_545();
		if (iVar0 != func_18())
		{
			if (unk_0x982A72D771CF4FE1(iVar0))
			{
				Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_4 = unk_0xF8E1DE22DEB7E100(iVar0);
			}
		}
	}
	return Local_113[unk_0x72B85B341ADBE9DE() /*6*/].f_4;
}

int func_1118()
{
	if (func_553())
	{
		if (!unk_0x4F94F07DAD382CDA(Local_112.f_29[0]))
		{
			return 0;
		}
	}
	else if (!unk_0x4F94F07DAD382CDA(Local_112.f_12))
	{
		return 0;
	}
	return 1;
}

int func_1119()
{
	return Local_112;
}

int func_1120(int iParam0)
{
	return Local_113[iParam0 /*6*/];
}

int func_1121(bool bParam0)
{
	if (func_1125(1))
	{
		return 1;
	}
	if (Global_2528542.f_4889.f_37)
	{
		Global_2528542.f_4889.f_37 = 0;
		return 1;
	}
	if (bParam0)
	{
		if (func_324() == func_18() || !func_1228(func_324(), 0, 1))
		{
			return 1;
		}
	}
	if (!func_560(unk_0x95B959F18401C09A()))
	{
		if (func_1124(unk_0x95B959F18401C09A()) && func_1122())
		{
			return 1;
		}
	}
	return 0;
}

int func_1122()
{
	switch (func_68(func_1123(unk_0x95B959F18401C09A())))
	{
		case 11:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_1123(int iParam0)
{
	if (iParam0 != func_18() && func_1228(iParam0, 1, 1))
	{
		return Global_2424047[iParam0 /*416*/].f_309.f_14;
	}
	return -1;
}

int func_1124(int iParam0)
{
	if (iParam0 != func_18() && func_1228(iParam0, 1, 1))
	{
		return unk_0x0E4018692D92041D(Global_2424047[iParam0 /*416*/].f_309, 4);
	}
	return 0;
}

int func_1125(bool bParam0)
{
	bool bVar0;
	
	if (!func_1097(1))
	{
		bVar0 = false;
		if (Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_57 != func_18())
		{
			if (func_1228(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_57, 0, 1))
			{
				if ((Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_24 == 4 || Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_24 == 8) || Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_24 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_392(func_290(unk_0x95B959F18401C09A())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_832(31);
				if (func_724(func_290(unk_0x95B959F18401C09A())))
				{
					func_832(81);
				}
				if (Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_57 != func_18() && unk_0xC4DEA49C5B465481(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_57))
				{
					Global_1625024 = func_641(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_57, -2, 0, 0, 0);
					if (!func_323(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_57))
					{
						func_832(88);
					}
				}
				else
				{
					Global_1625024 = 1;
				}
				Global_1625008 = { Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_104 };
			}
			return 1;
		}
	}
	return 0;
}

int func_1126()
{
	var uVar0;
	
	func_1130(&uVar0);
	if (Global_1312844 == 0)
	{
		if (!unk_0xB331FCEB94EB05C8())
		{
			return 1;
		}
	}
	if (func_1129())
	{
		return 1;
	}
	if (Global_2460852)
	{
		return 1;
	}
	if (func_1128())
	{
		return 1;
	}
	if (func_1127(157))
	{
		if (!func_446())
		{
			return 1;
		}
	}
	if (func_1127(155))
	{
		return 1;
	}
	if (!unk_0x43E505744A9B715D())
	{
		return 1;
	}
	if (func_425() != 0)
	{
		if (unk_0x1BCDA92AD0A7835B(func_425()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_1127(int iParam0)
{
	if (unk_0x3AE20F34FEE6C258(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_1128()
{
	return Global_2458613;
}

bool func_1129()
{
	return Global_2448756.f_581;
}

void func_1130(var uParam0)
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
					func_1131(iVar0);
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

void func_1131(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x286A5F0670063839(1, iParam0, &vVar0, 3))
	{
		if (func_1228(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x378BD4B3881338C2(vVar0.y);
			if (unk_0x765F6FEEFF39224F(iVar1))
			{
				if (unk_0xF0D230FB550CD6EB(iVar1, 0))
				{
					iVar2 = unk_0xF2C96862595654B4(iVar1, 0);
					if (unk_0x8F6C3DD0BB146CA3(iVar2, vVar0.z) && unk_0xE36862B47CD70685())
					{
						if (func_1132(iVar2, &bVar3))
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

int func_1132(int iParam0, var uParam1)
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

void func_1133()
{
	wait(0);
}

void func_1134()
{
	int iVar0;
	
	if (func_553())
	{
		if (unk_0x4F94F07DAD382CDA(Local_112.f_29[0]))
		{
			if (unk_0x0E4018692D92041D(iLocal_115, 5))
			{
				if (!func_1097(1))
				{
					if (func_21(Local_112.f_29[0]))
					{
						if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
						{
							if (unk_0xEE984ED4E4A374BE(unk_0x33CD235DF1E6A94E(), unk_0xFC00F22E930BFD55(Local_112.f_29[0])))
							{
								unk_0x07C339D4328CA16C(unk_0x33CD235DF1E6A94E(), 0, 0);
							}
						}
					}
				}
			}
		}
	}
	func_1186();
	unk_0x89D80FC214D65D3D(1);
	func_697(0);
	if (!unk_0x0E4018692D92041D(iLocal_114, 17))
	{
		if (unk_0xB331FCEB94EB05C8())
		{
			if (func_1116() || func_381())
			{
				unk_0x8950ED5730F62EE8(&iLocal_114, 17);
				Global_1669366.f_2 = Local_112.f_63;
				Global_1669366.f_3 = Local_112.f_64;
				func_918(0, 4, 0, 0, -1, -1, -1, -1, -1, 0);
			}
		}
	}
	if (unk_0x0E4018692D92041D(iLocal_114, 17))
	{
		func_1184(func_1100(), -1, -1, -1082130432);
	}
	if (unk_0x0E4018692D92041D(iLocal_114, 4))
	{
		func_420(8);
	}
	if (unk_0x0E4018692D92041D(iLocal_114, 20))
	{
		unk_0x65BA35D6D61F1574("BG_ASSAULT_STOP");
		unk_0xBDD4EE948C7B9BB5("DisableFlightMusic", 0);
		unk_0xBDD4EE948C7B9BB5("WantedMusicDisabled", 0);
	}
	if (Local_112.f_3 == 1)
	{
		unk_0x8C4EA5F6857553AE(joaat("rhino"), false);
	}
	unk_0xD875615F72CD34A6(5);
	if (!func_1183())
	{
		if (unk_0x4F94F07DAD382CDA(Local_112.f_12))
		{
			if (unk_0x6F3D61B58C7B4025(Local_112.f_12))
			{
				iVar0 = unk_0xF2D53AA87148ACED(Local_112.f_12);
				unk_0xFD5D4D96D91EEAAD(&iVar0);
			}
		}
	}
	else
	{
		unk_0x8950ED5730F62EE8(&iLocal_114, 29);
	}
	if (func_696())
	{
		func_695(0, 0, 0);
	}
	func_1140(1, 0);
	if (Global_2528542.f_5657 != -1)
	{
		Global_2528542.f_5657 = -1;
	}
	func_1139();
	if (func_1100() == 3)
	{
		func_1138();
	}
	if (unk_0x0E4018692D92041D(iLocal_115, 0))
	{
		if (!unk_0x0E4018692D92041D(iLocal_115, 1))
		{
			unk_0x1FEA416E00837AFC(1);
			unk_0xBDD4EE948C7B9BB5("AllowScoreAndRadio", 0);
			unk_0x33854B8151B6D8EC("APT_COUNTDOWN_30S_KILL");
		}
	}
	func_219();
	func_1136();
	if (unk_0x0E4018692D92041D(iLocal_114, 19))
	{
		unk_0xCBE6AF58552C63B2(iLocal_128);
	}
	if (unk_0x0E4018692D92041D(iLocal_114, 16))
	{
		func_412();
		func_403(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0);
	}
	func_1135();
}

void func_1135()
{
	unk_0x5894DC159447E10A();
}

void func_1136()
{
	struct<6> Var0;
	
	if (func_1100() == 0)
	{
		if (func_25() == 0)
		{
			StringCopy(&Var0, "PY8hdiWoAkudg9SpK8G2xQ", 24);
			func_1137(Var0);
		}
	}
}

void func_1137(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x786AF4A44E1B5B4B(&cParam0))
	{
		return;
	}
	iVar0 = unk_0x36163153849DFDA1(&cParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		if (unk_0x0E4018692D92041D(Global_2359721[iVar1 /*26*/].f_12, 11))
		{
			if (func_1091(&(Global_2359721[iVar1 /*26*/].f_15)) == iVar0)
			{
				if (unk_0x0E4018692D92041D(Global_2359721[iVar1 /*26*/].f_13, 26))
				{
					unk_0xCE689A8E8C42ED78(&(Global_2359721[iVar1 /*26*/].f_13), 26);
				}
				return;
			}
		}
		iVar1++;
	}
}

void func_1138()
{
	if (unk_0x36CDBD83DF514AC4(1343869835))
	{
		unk_0x046ED2CF120C8949(1343869835, 0, 0, 0);
		unk_0x1ABC36611CBE0E84(1343869835, 0f, 0, 0);
	}
	if (unk_0x36CDBD83DF514AC4(207506449))
	{
		unk_0x046ED2CF120C8949(207506449, 0, 0, 0);
		unk_0x1ABC36611CBE0E84(207506449, 0f, 0, 0);
	}
}

void func_1139()
{
	if (Global_1666782)
	{
		if (unk_0x0E4018692D92041D(Global_1666783, 0))
		{
			unk_0xCE689A8E8C42ED78(&Global_2537168, 0);
		}
		if (unk_0x0E4018692D92041D(Global_1666783, 1))
		{
			unk_0xCE689A8E8C42ED78(&Global_2537168, 1);
		}
		if (unk_0x0E4018692D92041D(Global_1666783, 5))
		{
			unk_0xCE689A8E8C42ED78(&Global_2537168, 5);
		}
		if (unk_0x36CDBD83DF514AC4(-355737150))
		{
			unk_0x046ED2CF120C8949(-355737150, 1, 0, 0);
		}
		if (unk_0x36CDBD83DF514AC4(-580979506))
		{
			unk_0x046ED2CF120C8949(-580979506, 1, 0, 0);
		}
		if (unk_0x36CDBD83DF514AC4(-1426452475))
		{
			unk_0x046ED2CF120C8949(-1426452475, 1, 0, 0);
		}
		if (unk_0x36CDBD83DF514AC4(745417724))
		{
			unk_0x046ED2CF120C8949(745417724, 1, 0, 0);
		}
		if (unk_0x36CDBD83DF514AC4(-1305304906))
		{
			unk_0x046ED2CF120C8949(-1305304906, 1, 0, 0);
		}
		if (unk_0x36CDBD83DF514AC4(-1543175077))
		{
			unk_0x046ED2CF120C8949(-1543175077, 1, 0, 0);
		}
		if (unk_0x36CDBD83DF514AC4(-811770997))
		{
			unk_0x046ED2CF120C8949(-811770997, 1, 0, 0);
		}
		Global_1666783 = 0;
	}
	Global_1666782 = 0;
}

void func_1140(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_1361808.f_1.f_108 != 0)
	{
		Global_1361808.f_1.f_108 = 0;
	}
	Global_1361808.f_1.f_109 = -1;
	Global_1361808.f_1.f_110 = -1;
	if (Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_33 == 167 || Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_33 == 168)
	{
		func_1181();
		unk_0xCE689A8E8C42ED78(&(Global_1669357.f_3), 4);
	}
	if ((func_750() && iParam1 != 0) && Global_262145.f_16856)
	{
		if (Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_33 == 190 || Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_33 == 192)
		{
			func_1163(unk_0x95B959F18401C09A(), iParam1, 1, 0);
		}
	}
	if (((Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_33 == 164 || Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_33 == 208) || Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_33 == 250) || Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_33 == 237)
	{
		unk_0xA53C1C92EE35EC0E(3, true);
		unk_0xA53C1C92EE35EC0E(5, true);
	}
	if (Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_33 != -1)
	{
		Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_33 = -1;
		if (!unk_0x0E4018692D92041D(Global_1574637.f_1, 14) && !func_161(unk_0x95B959F18401C09A()))
		{
			func_421(0);
		}
	}
	else if (func_1161(unk_0x95B959F18401C09A()) != -1)
	{
		func_1115(-1);
	}
	func_1160(func_18());
	if (func_345(16))
	{
		func_396(16);
	}
	func_1157(0);
	func_1110(-1);
	func_1156();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_1155(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_1153(iVar1);
		iVar1++;
	}
	if (unk_0x0E4018692D92041D(Global_1669357.f_3, 0))
	{
		unk_0x4B06B5746CBEC99F(1f);
		unk_0xD875615F72CD34A6(5);
		unk_0xCE689A8E8C42ED78(&(Global_1669357.f_3), 0);
	}
	if (unk_0x0E4018692D92041D(Global_1669357.f_3, 5))
	{
		unk_0xCE689A8E8C42ED78(&(Global_1669357.f_3), 5);
	}
	iVar2 = func_730();
	if ((func_292(iVar2) || iVar2 == 205) || iVar2 == 210)
	{
		func_1152(-1);
	}
	else if (((iVar2 == 201 || iVar2 == 200) || iVar2 == 179) || func_390(iVar2))
	{
		func_1149(-1, 1);
	}
	else if (((((func_729(iVar2) || func_1148(iVar2)) || func_1147(iVar2)) || func_568(iVar2)) || func_566(iVar2)) || func_564(iVar2))
	{
	}
	else
	{
		func_1149(-1, 1);
	}
	func_374(19);
	func_374(20);
	func_374(21);
	func_374(22);
	func_374(27);
	func_396(3);
	func_396(4);
	func_396(7);
	func_1146();
	if (func_369(unk_0x95B959F18401C09A()))
	{
		func_697(0);
	}
	func_374(29);
	Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_57 = func_18();
	if (Global_2528542.f_4889.f_37 != 0)
	{
		Global_2528542.f_4889.f_37 = 0;
	}
	if (bParam0)
	{
		func_397();
	}
	if (!func_161(unk_0x95B959F18401C09A()))
	{
		func_419();
		unk_0xCE689A8E8C42ED78(&(Global_1669357.f_3), 1);
	}
	if (unk_0x0E4018692D92041D(Global_1669357.f_3, 6))
	{
		unk_0xA53C1C92EE35EC0E(3, true);
		unk_0xA53C1C92EE35EC0E(5, true);
		unk_0xCE689A8E8C42ED78(&(Global_1669357.f_3), 6);
	}
	if (unk_0x0E4018692D92041D(Global_1669357.f_3, 7))
	{
		unk_0xCE689A8E8C42ED78(&(Global_1669357.f_3), 7);
	}
	if (unk_0x0E4018692D92041D(Global_1669357.f_3, 8))
	{
		func_1145("IMPEXP_SELFDES", 0);
		func_1143("IMPEXP_SELFDES");
		unk_0xCE689A8E8C42ED78(&(Global_1669357.f_3), 8);
	}
	func_1141(iVar2, 0);
}

void func_1141(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x0E4018692D92041D(Global_1669357.f_3, 9))
		{
			unk_0xDEFB5E2E5CBD460A(func_1142(iParam0));
			unk_0x8950ED5730F62EE8(&(Global_1669357.f_3), 9);
		}
	}
	else if (unk_0x0E4018692D92041D(Global_1669357.f_3, 9))
	{
		unk_0x7CED302277C0F3D3(func_1142(iParam0));
		unk_0xCE689A8E8C42ED78(&(Global_1669357.f_3), 9);
	}
}

char* func_1142(int iParam0)
{
	switch (iParam0)
	{
		case 219:
			return "DLC_IE_VIP_Velocity_Vehicle_Scene";
		
		case 221:
			return "DLC_IE_VIP_Stockpiling_Vehicle_Scene";
		
		case 220:
			return "DLC_IE_VIP_Ramped_Up_Vehicle_Scene";
		
		case 214:
			return "DLC_IE_VIP_Plowed_Vehicle_Scene";
		
		case 217:
			return "DLC_IE_VIP_Transporter_Vehicle_Scene";
		
		case 218:
			return "DLC_IE_VIP_Fortified_Vehicle_Scene";
		
		case 215:
			return "DLC_IE_VIP_Fully_Loaded_Vehicle_Scene";
		
		case 216:
			return "DLC_IE_VIP_Amphibious_Assault_Vehicle_Scene";
		
		default:
	}
	return "";
}

void func_1143(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x6D2E2622CA149402(&(Global_106565.f_14135[iVar0 /*104*/])))
		{
			if (unk_0xCE3CFF625BEBAA04(&(Global_106565.f_14135[iVar0 /*104*/]), sParam0))
			{
				if (Global_106565.f_14135[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					func_477();
					Global_106565.f_14135[iVar0 /*104*/].f_99[Global_14553] = 0;
					if (func_1144(iVar0))
					{
					}
					else
					{
						Global_106565.f_14135[iVar0 /*104*/].f_24 = 0;
						Global_106565.f_14135[iVar0 /*104*/].f_28 = 0;
						Global_106565.f_14135[iVar0 /*104*/].f_29 = 0;
					}
					unk_0x98E765CB9E761233(Global_106565.f_14135[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

int func_1144(int iParam0)
{
	if ((Global_106565.f_14135[iParam0 /*104*/].f_99[0] == 1 || Global_106565.f_14135[iParam0 /*104*/].f_99[1] == 1) || Global_106565.f_14135[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_1145(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x6D2E2622CA149402(&(Global_106565.f_14135[iVar0 /*104*/])))
		{
			if (unk_0xCE3CFF625BEBAA04(&(Global_106565.f_14135[iVar0 /*104*/]), sParam0))
			{
				if (Global_106565.f_14135[iVar0 /*104*/].f_24 == 0)
				{
				}
				Global_106565.f_14135[iVar0 /*104*/].f_24 = 1;
				if (Global_106565.f_14135[iVar0 /*104*/].f_25 == 1)
				{
					if (Global_106565.f_14135[iVar0 /*104*/].f_99[0] == 1)
					{
						Global_106565.f_14045[0 /*20*/].f_17 = 0;
					}
					if (Global_106565.f_14135[iVar0 /*104*/].f_99[1] == 1)
					{
						Global_106565.f_14045[1 /*20*/].f_17 = 0;
					}
					if (Global_106565.f_14135[iVar0 /*104*/].f_99[2] == 1)
					{
						Global_106565.f_14045[2 /*20*/].f_17 = 0;
					}
					if (Global_106565.f_14135[iVar0 /*104*/].f_99[3] == 1)
					{
						Global_106565.f_14045[3 /*20*/].f_17 = 0;
					}
					Global_106565.f_14135[iVar0 /*104*/].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_106565.f_14135[iVar0 /*104*/].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_1146()
{
	if (func_385(unk_0x95B959F18401C09A()))
	{
		func_374(25);
	}
}

int func_1147(int iParam0)
{
	switch (iParam0)
	{
		case 178:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_1148(int iParam0)
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

void func_1149(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_730();
	}
	if (iParam0 > 0)
	{
		if (func_545() != func_18())
		{
			if (func_561(unk_0x95B959F18401C09A()) == unk_0x95B959F18401C09A())
			{
				Global_2506960.f_93[func_1151(iParam0)] = 1;
			}
		}
		iVar0 = func_1151(159);
		if (func_1150(iVar0, Global_262145.f_12497, bParam1))
		{
			func_230(&(Global_2506960[iVar0 /*2*/]));
			func_8(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1151(157);
		if (func_1150(iVar0, Global_262145.f_12497, bParam1))
		{
			func_230(&(Global_2506960[iVar0 /*2*/]));
			func_8(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1151(148);
		if (func_1150(iVar0, Global_262145.f_12497, bParam1))
		{
			func_230(&(Global_2506960[iVar0 /*2*/]));
			func_8(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1151(164);
		if (func_1150(iVar0, Global_262145.f_12497, bParam1))
		{
			func_230(&(Global_2506960[iVar0 /*2*/]));
			func_8(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1151(142);
		if (func_1150(iVar0, Global_262145.f_12497, bParam1))
		{
			func_230(&(Global_2506960[iVar0 /*2*/]));
			func_8(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1151(152);
		if (func_1150(iVar0, Global_262145.f_12497, bParam1))
		{
			func_230(&(Global_2506960[iVar0 /*2*/]));
			func_8(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1151(166);
		if (func_1150(iVar0, Global_262145.f_12497, bParam1))
		{
			func_230(&(Global_2506960[iVar0 /*2*/]));
			func_8(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1151(170);
		if (func_1150(iVar0, Global_262145.f_12497, bParam1))
		{
			func_230(&(Global_2506960[iVar0 /*2*/]));
			func_8(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1151(173);
		if (func_1150(iVar0, Global_262145.f_12497, bParam1))
		{
			func_230(&(Global_2506960[iVar0 /*2*/]));
			func_8(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1151(179);
		if (func_1150(iVar0, Global_262145.f_12497, bParam1))
		{
			func_230(&(Global_2506960[iVar0 /*2*/]));
			func_8(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1151(200);
		if (func_1150(iVar0, Global_262145.f_12497, bParam1))
		{
			func_230(&(Global_2506960[iVar0 /*2*/]));
			func_8(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1151(201);
		if (func_1150(iVar0, Global_262145.f_12497, bParam1))
		{
			func_230(&(Global_2506960[iVar0 /*2*/]));
			func_8(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1151(182);
		if (func_1150(iVar0, Global_262145.f_12498, 0))
		{
			func_230(&(Global_2506960[iVar0 /*2*/]));
			func_8(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1151(183);
		if (func_1150(iVar0, Global_262145.f_12498, 0))
		{
			func_230(&(Global_2506960[iVar0 /*2*/]));
			func_8(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1151(185);
		if (func_1150(iVar0, Global_262145.f_12498, 0))
		{
			func_230(&(Global_2506960[iVar0 /*2*/]));
			func_8(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1151(186);
		if (func_1150(iVar0, Global_262145.f_12498, 0))
		{
			func_230(&(Global_2506960[iVar0 /*2*/]));
			func_8(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1151(180);
		if (func_1150(iVar0, Global_262145.f_12498, 0))
		{
			func_230(&(Global_2506960[iVar0 /*2*/]));
			func_8(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1151(195);
		if (func_1150(iVar0, Global_262145.f_12498, 0))
		{
			func_230(&(Global_2506960[iVar0 /*2*/]));
			func_8(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1151(197);
		if (func_1150(iVar0, Global_262145.f_12498, 0))
		{
			func_230(&(Global_2506960[iVar0 /*2*/]));
			func_8(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1151(198);
		if (func_1150(iVar0, Global_262145.f_12498, 0))
		{
			func_230(&(Global_2506960[iVar0 /*2*/]));
			func_8(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1151(207);
		if (func_1150(iVar0, Global_262145.f_12498, 0))
		{
			func_230(&(Global_2506960[iVar0 /*2*/]));
			func_8(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1151(208);
		if (func_1150(iVar0, Global_262145.f_12498, 0))
		{
			func_230(&(Global_2506960[iVar0 /*2*/]));
			func_8(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1151(209);
		if (func_1150(iVar0, Global_262145.f_12498, 0))
		{
			func_230(&(Global_2506960[iVar0 /*2*/]));
			func_8(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1151(214);
		if (func_1150(iVar0, Global_262145.f_12498, 0))
		{
			func_230(&(Global_2506960[iVar0 /*2*/]));
			func_8(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1151(215);
		if (func_1150(iVar0, Global_262145.f_12498, 0))
		{
			func_230(&(Global_2506960[iVar0 /*2*/]));
			func_8(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1151(216);
		if (func_1150(iVar0, Global_262145.f_12498, 0))
		{
			func_230(&(Global_2506960[iVar0 /*2*/]));
			func_8(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1151(217);
		if (func_1150(iVar0, Global_262145.f_12498, 0))
		{
			func_230(&(Global_2506960[iVar0 /*2*/]));
			func_8(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1151(218);
		if (func_1150(iVar0, Global_262145.f_12498, 0))
		{
			func_230(&(Global_2506960[iVar0 /*2*/]));
			func_8(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1151(219);
		if (func_1150(iVar0, Global_262145.f_12498, 0))
		{
			func_230(&(Global_2506960[iVar0 /*2*/]));
			func_8(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1151(220);
		if (func_1150(iVar0, Global_262145.f_12498, 0))
		{
			func_230(&(Global_2506960[iVar0 /*2*/]));
			func_8(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1151(221);
		if (func_1150(iVar0, Global_262145.f_12498, 0))
		{
			func_230(&(Global_2506960[iVar0 /*2*/]));
			func_8(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_1150(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_265(unk_0x95B959F18401C09A(), 19) && !func_265(unk_0x95B959F18401C09A(), 20)) && !func_265(unk_0x95B959F18401C09A(), 9))
		{
			return 0;
		}
	}
	if (Global_2506960.f_93[iParam0] == 1 && func_9(&(Global_2506960[iParam0 /*2*/])))
	{
		if (func_1054(&(Global_2506960[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2506960.f_93[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_1151(int iParam0)
{
	switch (iParam0)
	{
		case 159:
			return 11;
		
		case 157:
			return 12;
		
		case 148:
			return 13;
		
		case 164:
			return 14;
		
		case 142:
			return 15;
		
		case 152:
			return 16;
		
		case 163:
			return 17;
		
		case 155:
			return 18;
		
		case 160:
			return 19;
		
		case 153:
			return 20;
		
		case 162:
			return 21;
		
		case 154:
			return 22;
		
		case 166:
			return 8;
		
		case 170:
			return 9;
		
		case 173:
			return 10;
		
		case 171:
			return 23;
		
		case 172:
			return 24;
		
		case 179:
			return 25;
		
		case 189:
			return 26;
		
		case 193:
			return 27;
		
		case 194:
			return 28;
		
		case 199:
			return 29;
		
		case 201:
			return 30;
		
		case 200:
			return 31;
		
		case 205:
			return 32;
		
		case 210:
			return 33;
		
		case 182:
			return 34;
		
		case 183:
			return 35;
		
		case 185:
			return 36;
		
		case 186:
			return 37;
		
		case 180:
			return 38;
		
		case 195:
			return 39;
		
		case 197:
			return 40;
		
		case 198:
			return 41;
		
		case 207:
			return 42;
		
		case 208:
			return 43;
		
		case 209:
			return 44;
		
		case 211:
			return 45;
		
		case 214:
			return 0;
		
		case 215:
			return 1;
		
		case 216:
			return 2;
		
		case 217:
			return 3;
		
		case 218:
			return 4;
		
		case 219:
			return 5;
		
		case 220:
			return 6;
		
		case 221:
			return 7;
		
		default:
	}
	return -1;
}

void func_1152(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_730();
	}
	if (iParam0 > 0)
	{
		if (func_545() != func_18())
		{
			Global_2506960.f_93[func_1151(iParam0)] = 1;
		}
		iVar0 = func_1151(155);
		if (func_1150(iVar0, Global_262145.f_12498, 0))
		{
			func_230(&(Global_2506960[iVar0 /*2*/]));
			func_8(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1151(163);
		if (func_1150(iVar0, Global_262145.f_12498, 0))
		{
			func_230(&(Global_2506960[iVar0 /*2*/]));
			func_8(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1151(160);
		if (func_1150(iVar0, Global_262145.f_12498, 0))
		{
			func_230(&(Global_2506960[iVar0 /*2*/]));
			func_8(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1151(153);
		if (func_1150(iVar0, Global_262145.f_12498, 0))
		{
			func_230(&(Global_2506960[iVar0 /*2*/]));
			func_8(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1151(162);
		if (func_1150(iVar0, Global_262145.f_12498, 0))
		{
			func_230(&(Global_2506960[iVar0 /*2*/]));
			func_8(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1151(154);
		if (func_1150(iVar0, Global_262145.f_12498, 0))
		{
			func_230(&(Global_2506960[iVar0 /*2*/]));
			func_8(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1151(171);
		if (func_1150(iVar0, Global_262145.f_12498, 0))
		{
			func_230(&(Global_2506960[iVar0 /*2*/]));
			func_8(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1151(172);
		if (func_1150(iVar0, Global_262145.f_12498, 0))
		{
			func_230(&(Global_2506960[iVar0 /*2*/]));
			func_8(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1151(199);
		if (func_1150(iVar0, Global_262145.f_12498, 0))
		{
			func_230(&(Global_2506960[iVar0 /*2*/]));
			func_8(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1151(194);
		if (func_1150(iVar0, Global_262145.f_12498, 0))
		{
			func_230(&(Global_2506960[iVar0 /*2*/]));
			func_8(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1151(193);
		if (func_1150(iVar0, Global_262145.f_12498, 0))
		{
			func_230(&(Global_2506960[iVar0 /*2*/]));
			func_8(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1151(210);
		if (func_1150(iVar0, Global_262145.f_12498, 0))
		{
			func_230(&(Global_2506960[iVar0 /*2*/]));
			func_8(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1151(205);
		if (func_1150(iVar0, Global_262145.f_12498, 0))
		{
			func_230(&(Global_2506960[iVar0 /*2*/]));
			func_8(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1151(189);
		if (func_1150(iVar0, Global_262145.f_12498, 0))
		{
			func_230(&(Global_2506960[iVar0 /*2*/]));
			func_8(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1151(211);
		if (func_1150(iVar0, Global_262145.f_12498, 0))
		{
			func_230(&(Global_2506960[iVar0 /*2*/]));
			func_8(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_1153(int iParam0)
{
	if (!func_437(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_334[iParam0 /*3*/], func_1154(), 0))
	{
		Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_334[iParam0 /*3*/] = { func_1154() };
	}
	if (!func_437(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_321[iParam0 /*3*/], func_1154(), 0))
	{
		Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_321[iParam0 /*3*/] = { func_1154() };
	}
}

Vector3 func_1154()
{
	vector3 vVar0;
	
	return vVar0;
}

void func_1155(int iParam0)
{
	if (!func_437(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_150[iParam0 /*3*/], func_1154(), 0))
	{
		Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_150[iParam0 /*3*/] = { func_1154() };
	}
	if (!func_437(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_125[iParam0 /*3*/], func_1154(), 0))
	{
		Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_125[iParam0 /*3*/] = { func_1154() };
	}
}

void func_1156()
{
	struct<20> Var0;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573892 = { Var0 };
	Global_1573892.f_13 = func_18();
	if (unk_0x0E4018692D92041D(Global_1573343, 3))
	{
		unk_0xCE689A8E8C42ED78(&Global_1573343, 3);
	}
}

void func_1157(bool bParam0)
{
	if (bParam0)
	{
		if (!func_590(unk_0x95B959F18401C09A(), 14))
		{
			func_1159(14);
		}
	}
	else if (func_590(unk_0x95B959F18401C09A(), 14))
	{
		func_1158(14);
	}
}

void func_1158(int iParam0)
{
	unk_0xCE689A8E8C42ED78(&(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_5), iParam0);
}

void func_1159(int iParam0)
{
	unk_0x8950ED5730F62EE8(&(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_5), iParam0);
}

void func_1160(int iParam0)
{
	if (func_20(unk_0x95B959F18401C09A()))
	{
		if (unk_0x95B959F18401C09A() != iParam0)
		{
			if (Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_481 != iParam0)
			{
				Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_481 = iParam0;
				if (iParam0 != func_18())
				{
				}
			}
		}
	}
}

int func_1161(int iParam0)
{
	if (func_1162(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_32;
	}
	return -1;
}

int func_1162(int iParam0, int iParam1)
{
	if (Global_1626536[iParam0 /*603*/].f_11.f_32 != -1 || (iParam1 && Global_1626536[iParam0 /*603*/].f_11.f_33 != -1))
	{
		return 1;
	}
	return 0;
}

void func_1163(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (func_888(iParam0, iParam1) && func_1180(iParam0, iParam1))
	{
		iVar0 = func_887(iParam0, iParam1);
		func_1167(iVar0, bParam2, bParam3);
		func_1164(iVar0, 1);
	}
}

void func_1164(int iParam0, bool bParam1)
{
	if (!func_1166(iParam0))
	{
		return;
	}
	func_874(func_1165(iParam0), bParam1, -1, 1);
	Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_177[iParam0 /*12*/].f_6 = bParam1;
}

int func_1165(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7628;
		
		case 1:
			return 7629;
		
		case 2:
			return 7630;
		
		case 3:
			return 7631;
		
		case 4:
			return 7632;
		
		case 5:
			return 15373;
		
		default:
	}
	return 7628;
}

bool func_1166(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 6);
}

void func_1167(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = false;
	iVar2 = func_1056(unk_0x95B959F18401C09A(), iParam0);
	if (!bParam1)
	{
		func_1179(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2505932[iParam0];
		iVar0 = func_1178(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1671153 = -1;
		}
		func_1177(iParam0, 0, bParam2);
	}
	else if (func_1175(iParam0, bParam2))
	{
		iVar0 = func_1174(iVar2, 0);
		iVar3 = func_1009(unk_0x95B959F18401C09A(), iVar2);
		iVar4 = func_1173(iVar2, bParam2);
		iVar5 = func_1174(iVar2, bParam2);
		fVar6 = (to_float(iVar5) / to_float(iVar4));
		iVar0 = (iVar0 - round((to_float(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_1172(iVar2) && func_1171(unk_0x95B959F18401C09A(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_1179(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_1170(unk_0x95B959F18401C09A(), iVar2) > 0)
		{
			func_1169(iParam0, (Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_177[iParam0 /*12*/].f_2 - (func_1173(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_1174(iVar2, bParam2) / func_1170(unk_0x95B959F18401C09A(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_1172(iVar2) && func_1171(unk_0x95B959F18401C09A(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_1168(unk_0x95B959F18401C09A(), iVar2, iVar0, bParam2);
}

void func_1168(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return;
	}
	if (func_881(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/] == iParam1)
			{
				if (bParam3)
				{
					Global_1589819[iParam0 /*818*/].f_273.f_251 = iParam2;
				}
				else
				{
					Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/].f_9 = iParam2;
				}
			}
			iVar0++;
		}
	}
}

void func_1169(int iParam0, int iParam1)
{
	if (iParam0 != -1 && iParam1 != Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_177[iParam0 /*12*/].f_2)
	{
		Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_177[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_1170(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return 0;
	}
	if (func_881(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/] == iParam1)
			{
				return Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1171(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return 0;
	}
	if (func_881(iParam1) && func_1172(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/] == iParam1)
			{
				return Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/].f_11;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_1172(int iParam0)
{
	return func_775(iParam0) == 5;
}

int func_1173(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_775(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_16827;
			if (func_886(unk_0x95B959F18401C09A(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16832;
			}
			break;
		
		case 3:
			uVar0 = Global_262145.f_16826;
			if (func_886(unk_0x95B959F18401C09A(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16831;
			}
			break;
		
		case 4:
			uVar0 = Global_262145.f_16825;
			if (func_886(unk_0x95B959F18401C09A(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16830;
			}
			break;
		
		case 0:
			uVar0 = Global_262145.f_16823;
			if (func_886(unk_0x95B959F18401C09A(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16828;
			}
			break;
		
		case 2:
			uVar0 = Global_262145.f_16824;
			if (func_886(unk_0x95B959F18401C09A(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16829;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_262145.f_20948;
				if (func_886(unk_0x95B959F18401C09A(), iParam0, 0))
				{
					uVar0 = Global_262145.f_20949;
				}
			}
			else
			{
				uVar0 = Global_262145.f_20932;
				if (func_886(unk_0x95B959F18401C09A(), iParam0, 0))
				{
					uVar0 = Global_262145.f_20933;
				}
			}
			break;
	}
	return uVar0;
}

int func_1174(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_775(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_16808;
			if (func_886(unk_0x95B959F18401C09A(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16817);
			}
			if (func_886(unk_0x95B959F18401C09A(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16822);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_16809;
			if (func_886(unk_0x95B959F18401C09A(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16816);
			}
			if (func_886(unk_0x95B959F18401C09A(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16821);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_16810;
			if (func_886(unk_0x95B959F18401C09A(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16815);
			}
			if (func_886(unk_0x95B959F18401C09A(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16820);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_16811;
			if (func_886(unk_0x95B959F18401C09A(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16813);
			}
			if (func_886(unk_0x95B959F18401C09A(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16818);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_16812;
			if (func_886(unk_0x95B959F18401C09A(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16814);
			}
			if (func_886(unk_0x95B959F18401C09A(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16819);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				iVar0 = Global_262145.f_20945;
			}
			else
			{
				iVar0 = Global_262145.f_20929;
			}
			if (func_886(unk_0x95B959F18401C09A(), iParam0, 0))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_20946);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_20930);
				}
			}
			if (func_886(unk_0x95B959F18401C09A(), iParam0, 1))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_20947);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_20931);
				}
			}
			if (func_1171(unk_0x95B959F18401C09A(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_1175(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_875(15384, -1, -1);
	}
	return func_875(func_1176(iParam0), -1, -1);
}

int func_1176(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9416;
		
		case 1:
			return 9417;
		
		case 2:
			return 9418;
		
		case 3:
			return 9419;
		
		case 4:
			return 9420;
		
		case 5:
			return 15372;
		
		default:
	}
	return 9416;
}

void func_1177(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		func_874(15384, bParam1, -1, 1);
		return;
	}
	func_874(func_1176(iParam0), bParam1, -1, 1);
}

int func_1178(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2505932[iParam0];
	iVar1 = func_1056(unk_0x95B959F18401C09A(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_2505939;
	}
	if (func_1172(iVar1))
	{
		if (func_1171(unk_0x95B959F18401C09A(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_1179(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_2505939 = iParam1;
		return;
	}
	Global_2505932[iParam0] = iParam1;
}

int func_1180(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_888(iParam0, iParam1))
	{
		iVar0 = func_887(iParam0, iParam1);
		if (Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/].f_4 > 0 && Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_1181()
{
	unk_0xCE689A8E8C42ED78(&(Global_2528542.f_1728), 28);
	unk_0xCE689A8E8C42ED78(&(Global_2528542.f_1728), 29);
	func_1182(24);
}

void func_1182(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xCE689A8E8C42ED78(&(Global_2528542.f_4889.f_7[iVar0]), iVar1);
}

int func_1183()
{
	if (unk_0x0E4018692D92041D(iLocal_114, 24))
	{
		return 1;
	}
	if (unk_0x0E4018692D92041D(Local_112.f_1, 1))
	{
		return 0;
	}
	if (unk_0x0E4018692D92041D(Local_112.f_1, 3))
	{
		return 0;
	}
	if (unk_0x0E4018692D92041D(Local_112.f_1, 4))
	{
		return 0;
	}
	if (unk_0x0E4018692D92041D(Local_112.f_1, 5))
	{
		return 0;
	}
	if (unk_0x0E4018692D92041D(Local_112.f_1, 8))
	{
		return 0;
	}
	if (unk_0x0E4018692D92041D(Local_112.f_1, 9))
	{
		return 0;
	}
	if (unk_0x0E4018692D92041D(Local_112.f_1, 10))
	{
		return 0;
	}
	if (unk_0x0E4018692D92041D(Local_112.f_1, 15))
	{
		return 0;
	}
	if (unk_0x0E4018692D92041D(Local_112.f_1, 18))
	{
		return 0;
	}
	return 1;
}

void func_1184(var uParam0, int iParam1, int iParam2, int iParam3)
{
	char* sVar0;
	struct<14> Var1;
	struct<17> Var2;
	struct<17> Var3;
	struct<16> Var4;
	struct<17> Var5;
	struct<16> Var6;
	struct<18> Var7;
	struct<18> Var8;
	struct<19> Var9;
	struct<18> Var10;
	
	sVar0 = unk_0xD178EF744F20B712();
	Var1 = Global_1669366;
	Var1.f_1 = Global_1669366.f_1;
	Var1.f_2 = Global_1669366.f_2;
	Var1.f_3 = Global_1669366.f_3;
	Var1.f_4 = Global_1669366.f_4;
	Var1.f_5 = Global_1669366.f_5;
	Var1.f_6 = Global_1669366.f_6;
	Var1.f_7 = Global_1669366.f_7;
	Var1.f_8 = Global_1669366.f_8;
	Var1.f_9 = Global_1669366.f_9;
	Var1.f_10 = Global_1669366.f_10;
	Var1.f_11 = Global_1669366.f_11;
	Var1.f_12 = Global_1669366.f_12;
	Var1.f_13 = Global_1669366.f_14;
	if (unk_0xB331FCEB94EB05C8())
	{
		if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_DEATHMATCH"))
		{
			Var2 = { Var1 };
			Var2.f_14 = Global_1669366.f_15;
			Var2.f_15 = Global_1669366.f_16;
			Var2.f_16 = Global_1669366.f_17;
			unk_0x4474FCE0D07B711F(&Var2);
		}
		else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_YACHT_ROB"))
		{
			Var3 = { Var1 };
			Var3.f_14 = Global_1669366.f_15;
			Var3.f_15 = uParam0;
			Var3.f_16 = iParam1;
			unk_0xFF4746A8B3C29BE0(&Var3);
		}
		else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_HUNT_THE_BOSS"))
		{
			Var4 = { Var1 };
			Var4.f_14 = Global_1669366.f_15;
			Var4.f_15 = uParam0;
			unk_0x8D3D3453B862AB6C(&Var4);
		}
		else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_SIGHTSEER"))
		{
			Var5 = { Var1 };
			Var5.f_14 = Global_1669366.f_15;
			Var5.f_15 = uParam0;
			Var5.f_16 = iParam1;
			unk_0xA0558C3D8406230F(&Var5);
		}
		else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_ASSAULT"))
		{
			Var6 = { Var1 };
			Var6.f_14 = Global_1669366.f_15;
			Var6.f_15 = uParam0;
			unk_0x46466C34BBB8452A(&Var6);
		}
		else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_BELLYBEAST"))
		{
			Var7 = { Var1 };
			Var7.f_14 = Global_1669366.f_15;
			Var7.f_15 = uParam0;
			Var7.f_16 = iParam1;
			Var7.f_17 = iParam2;
			unk_0xBDDFA98CDDF18526(&Var7);
		}
		else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_HEADHUNTER"))
		{
			Var8 = { Var1 };
			Var8.f_14 = uParam0;
			Var8.f_15 = iParam1;
			Var8.f_16 = iParam2;
			Var8.f_17 = Global_1669366.f_15;
			unk_0xDA81DBEA680FB9D8(&Var8);
		}
		else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_FRAGILE_GOODS"))
		{
			Var9 = { Var1 };
			Var9.f_15 = uParam0;
			Var9.f_16 = iParam1;
			Var9.f_17 = iParam2;
			Var9.f_14 = iParam3;
			Var9.f_18 = Global_1669366.f_15;
			unk_0xE23CB8869EF84E2F(&Var9);
		}
		else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_AIRFREIGHT"))
		{
			Var10 = { Var1 };
			Var10.f_14 = uParam0;
			Var10.f_15 = iParam1;
			Var10.f_16 = iParam2;
			Var10.f_17 = Global_1669366.f_15;
			unk_0x905CCFFBC1B50B32(&Var10);
		}
	}
	func_1185();
}

void func_1185()
{
	struct<18> Var0;
	
	Global_1669366 = { Var0 };
}

void func_1186()
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (unk_0x06C1EBC003C18F1F())
	{
		if (unk_0x0E4018692D92041D(Local_112.f_1, 17))
		{
			vVar0 = { 200f, 200f, 200f };
			vVar1 = { func_24() };
			unk_0x5856B9BF2B4E98C4(vVar1 - vVar0, vVar1 + vVar0, true, 1);
			unk_0xCE689A8E8C42ED78(&(Local_112.f_1), 17);
		}
	}
}

void func_1187(struct<21> Param0)
{
	func_1226(func_1227(Param0), Param0);
	unk_0x12F5DDEAB00B8213(1);
	unk_0x4F8CF72358604361(15);
	unk_0x9D34F024713B3952(5);
	func_1225(0, -1, 0);
	unk_0x7643BB59992A9E6E(&Local_112, 65);
	unk_0x568D314D73140729(&Local_113, 193);
	if (!func_1224())
	{
		func_1134();
	}
	if (unk_0xB331FCEB94EB05C8())
	{
		unk_0x9980AE643A60F372(0);
		if (unk_0x06C1EBC003C18F1F())
		{
		}
		func_1223();
		func_1188(0, 0);
		if (func_345(8))
		{
			func_396(8);
		}
		Local_113[unk_0x72B85B341ADBE9DE() /*6*/] = 0;
	}
	else
	{
		func_1134();
	}
}

void func_1188(int iParam0, int iParam1)
{
	func_1222();
	if (func_560(unk_0x95B959F18401C09A()))
	{
		func_1191(1);
	}
	if ((iParam0 != 0 && unk_0xC4DEA49C5B465481(iParam1)) && func_1190(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				unk_0x8950ED5730F62EE8(&Global_1669352, 0);
				break;
			}
	}
	if (!func_763() && !func_19(unk_0x95B959F18401C09A(), 1))
	{
		if (func_377())
		{
			func_420(3);
		}
	}
	func_420(4);
	if (func_1097(0))
	{
		Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_57 = func_545();
	}
	if (func_724(iParam0))
	{
		func_1007();
		Global_1669384.f_18 = func_987(func_324());
	}
	else if (func_728(func_1161(unk_0x95B959F18401C09A())))
	{
		func_1005();
		Global_1669438.f_18 = func_987(func_324());
	}
	func_1189();
}

void func_1189()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1361808.f_534[iVar0 /*42*/].f_1 = func_18();
		Global_1361808.f_534[iVar0 /*42*/].f_9 = 0;
		iVar0++;
	}
}

int func_1190(int iParam0, bool bParam1)
{
	return func_16(unk_0x95B959F18401C09A(), iParam0, bParam1);
}

void func_1191(bool bParam0)
{
	int iVar0;
	
	func_1182(33);
	func_1182(34);
	func_1182(35);
	func_1182(36);
	func_1182(37);
	func_1182(38);
	func_1182(39);
	func_1182(40);
	func_1182(43);
	func_1182(41);
	func_1182(54);
	func_1182(42);
	func_1182(47);
	func_1221(23);
	func_1221(24);
	func_1182(92);
	unk_0xCE689A8E8C42ED78(&(Global_2528542.f_1728), 2);
	func_1220();
	func_1215();
	func_1210();
	func_1205();
	func_1197();
	func_1193();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2528542.f_4889.f_14[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_1192(3))
	{
		func_1221(3);
	}
	else if (func_1192(4))
	{
		func_1221(4);
	}
	else if (func_1192(5))
	{
		func_1221(5);
	}
	else if (func_1192(6))
	{
		func_1221(6);
	}
	else if (func_1192(7))
	{
		func_1221(7);
	}
	else if (((((((((((((((((func_1192(0) || func_1192(1)) || func_1192(2)) || func_1192(8)) || func_1192(9)) || func_1192(10)) || func_1192(11)) || func_1192(12)) || func_1192(13)) || func_1192(14)) || func_1192(15)) || func_1192(16)) || func_1192(17)) || func_1192(18)) || func_1192(19)) || func_1192(20)) || func_1192(21)) || func_1192(22))
	{
		func_1221(8);
		func_1221(0);
		func_1221(1);
		func_1221(2);
		func_1221(9);
		func_1221(10);
		func_1221(11);
		func_1221(12);
		func_1221(13);
		func_1221(14);
		func_1221(15);
		func_1221(16);
		func_1221(17);
		func_1221(18);
		func_1221(19);
		func_1221(20);
		func_1221(21);
		func_1221(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2528542.f_4889.f_14[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_1192(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0x0E4018692D92041D(Global_2528542.f_4889.f_14[iVar0], iVar1);
}

void func_1193()
{
	if (func_1195())
	{
		func_1194(4);
		func_1194(5);
		func_1194(6);
		func_1194(7);
	}
}

void func_1194(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xCE689A8E8C42ED78(&(Global_2528542.f_4889.f_31[iVar0]), iVar1);
}

int func_1195()
{
	if (((func_1196(4) || func_1196(5)) || func_1196(6)) || func_1196(7))
	{
		return 1;
	}
	return 0;
}

bool func_1196(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0x0E4018692D92041D(Global_2528542.f_4889.f_31[iVar0], iVar1);
}

void func_1197()
{
	int iVar0;
	
	if (func_1204())
	{
		func_1203(8);
		func_1203(9);
		func_1203(10);
		func_1203(12);
		func_1203(13);
		func_1203(14);
		func_1203(19);
		func_1203(20);
		func_1203(21);
		func_1203(22);
		func_1203(23);
		func_1203(24);
		func_1203(25);
		func_1203(26);
		func_1203(15);
		func_1203(16);
		func_1203(17);
		func_1203(18);
		func_1203(35);
		func_1203(45);
		func_1203(46);
		if (func_1202(11))
		{
			func_1203(11);
			iVar0 = func_749(7226, -1, 0);
			unk_0x8950ED5730F62EE8(&iVar0, 2);
			func_747(7226, iVar0, -1, 1, 0);
		}
	}
	if (func_1202(48))
	{
		if (func_1201(151, 3))
		{
			func_1200(151, 3);
		}
		func_1203(48);
	}
	if (func_1202(49))
	{
		if (func_1201(152, 3))
		{
			func_1200(152, 3);
		}
		func_1203(49);
	}
	if (func_1202(50))
	{
		if (func_1201(153, 3))
		{
			func_1200(153, 3);
		}
		func_1203(50);
	}
	if (func_1202(51))
	{
		if (func_1201(func_1198(), 3))
		{
			func_1200(func_1198(), 3);
		}
		func_1203(51);
	}
}

int func_1198()
{
	if (func_1199())
	{
		Global_106565.f_28044[154 /*29*/].f_24[Global_14553] = 1;
	}
	return 154;
}

int func_1199()
{
	int iVar0;
	
	iVar0 = func_46(unk_0x95B959F18401C09A());
	if (((iVar0 != unk_0x95B959F18401C09A() && iVar0 != func_18()) && unk_0xC4DEA49C5B465481(iVar0)) && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

void func_1200(int iParam0, int iParam1)
{
	if (Global_117[iParam0 /*10*/].f_8 != 147)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			Global_106565.f_28044[iParam0 /*29*/].f_12[iParam1] = 0;
			Global_106565.f_28044[iParam0 /*29*/].f_24[iParam1] = 0;
		}
	}
}

int func_1201(int iParam0, int iParam1)
{
	if (Global_106565.f_28044[iParam0 /*29*/].f_12[iParam1] == 1)
	{
		return 1;
	}
	return 0;
}

bool func_1202(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0x0E4018692D92041D(Global_2528542.f_4889.f_26[iVar0], iVar1);
}

void func_1203(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xCE689A8E8C42ED78(&(Global_2528542.f_4889.f_26[iVar0]), iVar1);
}

int func_1204()
{
	if (((((((((((((((((((((func_1202(8) || func_1202(9)) || func_1202(10)) || func_1202(12)) || func_1202(11)) || func_1202(13)) || func_1202(14)) || func_1202(19)) || func_1202(20)) || func_1202(21)) || func_1202(22)) || func_1202(23)) || func_1202(24)) || func_1202(25)) || func_1202(26)) || func_1202(15)) || func_1202(16)) || func_1202(17)) || func_1202(18)) || func_1202(35)) || func_1202(45)) || func_1202(46))
	{
		return 1;
	}
	return 0;
}

void func_1205()
{
	if (func_1209())
	{
		func_1208(0);
		func_1208(1);
		func_1208(2);
		func_1208(3);
		func_1208(4);
		func_1208(5);
		if (func_1207(32))
		{
			if (func_1201(func_1206(), 3))
			{
				func_1200(func_1206(), 3);
			}
			func_1208(32);
		}
	}
}

int func_1206()
{
	if (func_1199())
	{
		Global_106565.f_28044[12 /*29*/].f_24[Global_14553] = 1;
	}
	return 12;
}

bool func_1207(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0x0E4018692D92041D(Global_2528542.f_4889.f_23[iVar0], iVar1);
}

void func_1208(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xCE689A8E8C42ED78(&(Global_2528542.f_4889.f_23[iVar0]), iVar1);
}

int func_1209()
{
	if ((((func_1207(1) || func_1207(0)) || func_1207(2)) || func_1207(4)) || func_1207(5))
	{
		return 1;
	}
	return 0;
}

void func_1210()
{
	if (func_1214())
	{
		func_1213(0);
		func_1213(1);
		func_1213(2);
		func_1213(3);
		func_1213(4);
		func_1213(5);
		func_1213(6);
		func_1213(7);
		if (func_1212(8))
		{
			func_1213(8);
		}
		if (func_1212(15))
		{
			if (func_1201(func_1211(), 3))
			{
				func_1200(func_1211(), 3);
			}
			func_1213(15);
		}
	}
}

int func_1211()
{
	if (func_1199())
	{
		Global_106565.f_28044[20 /*29*/].f_24[Global_14553] = 1;
	}
	return 20;
}

bool func_1212(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0x0E4018692D92041D(Global_2528542.f_4889.f_21[iVar0], iVar1);
}

void func_1213(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xCE689A8E8C42ED78(&(Global_2528542.f_4889.f_21[iVar0]), iVar1);
}

int func_1214()
{
	if ((((((((func_1212(0) || func_1212(1)) || func_1212(2)) || func_1212(3)) || func_1212(4)) || func_1212(5)) || func_1212(6)) || func_1212(7)) || func_1212(8))
	{
		return 1;
	}
	return 0;
}

void func_1215()
{
	if (func_1219())
	{
		func_1218(0);
		func_1218(1);
		func_1218(2);
		func_1218(3);
		func_1218(4);
		func_1218(5);
		func_1218(6);
		func_1218(7);
		func_1218(8);
		func_1218(9);
		func_1218(10);
		func_1218(11);
		func_1218(12);
		if (func_1217(13))
		{
			if (func_1201(func_1216(), 3))
			{
				func_1200(func_1216(), 3);
			}
			func_1218(13);
		}
	}
}

int func_1216()
{
	if (func_1199())
	{
		Global_106565.f_28044[76 /*29*/].f_24[Global_14553] = 1;
	}
	return 76;
}

bool func_1217(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0x0E4018692D92041D(Global_2528542.f_4889.f_19[iVar0], iVar1);
}

void func_1218(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xCE689A8E8C42ED78(&(Global_2528542.f_4889.f_19[iVar0]), iVar1);
}

int func_1219()
{
	if ((((((((((((func_1217(0) || func_1217(1)) || func_1217(2)) || func_1217(3)) || func_1217(4)) || func_1217(5)) || func_1217(6)) || func_1217(7)) || func_1217(8)) || func_1217(9)) || func_1217(10)) || func_1217(11)) || func_1217(12))
	{
		return 1;
	}
	return 0;
}

void func_1220()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_2528542.f_4889.f_17[iVar0] = 0;
		iVar0++;
	}
}

void func_1221(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xCE689A8E8C42ED78(&(Global_2528542.f_4889.f_14[iVar0]), iVar1);
}

void func_1222()
{
	struct<14> Var0;
	
	Global_1669366 = { Var0 };
	Global_1669366.f_14 = 0;
	Global_1669366.f_15 = 0;
}

void func_1223()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		unk_0xD2E80177F27FD43F(5, Global_1574954[iVar0], -347613984);
		unk_0xD2E80177F27FD43F(5, -347613984, Global_1574954[iVar0]);
		iVar0++;
	}
}

int func_1224()
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
		if (func_1129())
		{
			return 0;
		}
		if (func_1127(155))
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

int func_1225(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x52119E312E15DB07();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_1135();
			}
			else
			{
				return 0;
			}
		}
		if (!func_1084())
		{
			if (iParam0 == 0)
			{
				if (!unk_0xB331FCEB94EB05C8())
				{
					if (!bParam2)
					{
						func_1135();
					}
					else
					{
						return 0;
					}
				}
				if (func_1129())
				{
					if (!bParam2)
					{
						func_1135();
					}
					else
					{
						return 0;
					}
				}
				if (func_1127(155))
				{
					if (!bParam2)
					{
						func_1135();
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
					func_1135();
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
				func_1135();
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
			func_1135();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_1226(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0xB331FCEB94EB05C8())
	{
		func_1135();
	}
	unk_0x210E46A190FB3CB3(iParam0, 0, Param1.f_16);
}

int func_1227(int iParam0)
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

int func_1228(int iParam0, bool bParam1, bool bParam2)
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

