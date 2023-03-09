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
	int iLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	struct<66> Local_22 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2147483647 } ;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	struct<2> Local_41 = { 0, 0 } ;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
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
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 1;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	int iLocal_86 = 0;
	struct<33> Local_87 = { 2147483647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	iLocal_14 = -1;
	fLocal_15 = 0.001f;
	sLocal_18 = "NULL";
	if (unk_0xB331FCEB94EB05C8())
	{
		func_52(ScriptParam_87);
	}
	else
	{
		func_50();
	}
	while (true)
	{
		func_49();
		if (Global_262145.f_23434)
		{
			func_50();
		}
		if (func_38())
		{
			func_50();
		}
		func_1();
	}
}

void func_1()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	if (Global_4264069)
	{
		if (Global_4267890[iLocal_21 /*12*/].f_11)
		{
			func_35(iLocal_21);
			Global_4267890[iLocal_21 /*12*/].f_11 = 0;
		}
	}
	if (Local_22.f_65.f_8)
	{
		func_17(Local_22.f_65);
	}
	if ((Local_22.f_65.f_2 == 1 && Global_4264070) && func_16(&Local_22))
	{
		bVar0 = true;
	}
	if (Global_4263509[iLocal_21 /*84*/].f_65 == 2147483647 && Local_22.f_65.f_12)
	{
		if (bVar0)
		{
			func_15(0);
		}
		func_50();
	}
	if (Local_22.f_65.f_18 > 0 && !func_14())
	{
		iVar2 = (1000 / round((unk_0x7C475FA8D877007F() * 1000f)));
		if ((unk_0xE77FA521699F639C() - Local_22.f_65.f_18) > iVar2 * 10)
		{
			Local_22.f_65.f_18 = -1;
		}
	}
	if (((func_13() && Local_22.f_65.f_2 == 1) && Local_22.f_65.f_13) && !Local_22.f_65.f_12)
	{
		if (unk_0xE77FA521699F639C() - Local_22.f_65.f_14) >= func_12(Local_22.f_65.f_5)
		{
			iVar1 = 0;
			if (!unk_0xB412AA3DEE298A52(func_11()) || unk_0x2832F5CD8A109CD6())
			{
				iVar1 = 1;
			}
			else if (Local_22.f_65.f_2 != 1)
			{
				iVar1 = 2;
			}
			else if (Local_22.f_65.f_5 != 1 && !unk_0x5787B31B4578002B(&(Local_22.f_65), Local_22.f_65.f_6, Local_22.f_65.f_4, Local_22.f_65.f_7, Local_22.f_65.f_1, Local_22.f_65.f_10))
			{
				iVar1 = 3;
			}
			else if (!unk_0x64875ABCC43EF9A8(Local_22.f_65))
			{
				iVar1 = 4;
			}
			else
			{
				Local_22.f_65.f_12 = 1;
				Global_4263509[iLocal_21 /*84*/].f_65.f_12 = 1;
				Global_4263509[iLocal_21 /*84*/].f_65 = Local_22.f_65;
			}
			if (iVar1 != 0)
			{
				func_7(iLocal_21);
				func_50();
			}
		}
	}
	if (!iLocal_86)
	{
		if (bVar0)
		{
			func_5(&Local_41, 0);
			iLocal_86 = 1;
		}
	}
	else if (bVar0)
	{
		StringCopy(&(Local_41.f_1), "HUD_TRANSP", 64);
		func_2(&Local_41, func_4(&Local_41));
	}
	else
	{
		iLocal_86 = 0;
		func_15(0);
	}
}

void func_2(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_3(uParam0);
	}
	if (*uParam0 == 0)
	{
		if (uParam0->f_36)
		{
			unk_0xCF8FB817B736462A(&(uParam0->f_1));
			unk_0xE800DC85FDF60F85(uParam0->f_33);
			unk_0xE800DC85FDF60F85(uParam0->f_34);
			unk_0xB90003646A14C0B1(uParam0->f_41);
		}
		else if (uParam0->f_37)
		{
			unk_0xCF8FB817B736462A(&(uParam0->f_1));
			unk_0xE800DC85FDF60F85(uParam0->f_33);
			unk_0xB90003646A14C0B1(uParam0->f_41);
		}
		else if (uParam0->f_39)
		{
			unk_0xCF8FB817B736462A(&(uParam0->f_1));
			unk_0xD61E5ED1D4E687A5(&(uParam0->f_17));
			unk_0xE800DC85FDF60F85(uParam0->f_33);
			unk_0xE800DC85FDF60F85(uParam0->f_34);
			unk_0xB90003646A14C0B1(uParam0->f_41);
		}
		else if (uParam0->f_38)
		{
			unk_0xCF8FB817B736462A(&(uParam0->f_1));
			unk_0xD61E5ED1D4E687A5(&(uParam0->f_17));
			unk_0xB90003646A14C0B1(uParam0->f_41);
		}
		else if (uParam0->f_40)
		{
			unk_0xCF8FB817B736462A(&(uParam0->f_1));
			unk_0xDC97362660946DF9(uParam0->f_33, 70);
			unk_0xB90003646A14C0B1(uParam0->f_41);
		}
		else
		{
			unk_0xCF8FB817B736462A(&(uParam0->f_1));
			unk_0xB90003646A14C0B1(uParam0->f_41);
		}
		*uParam0 = 1;
	}
	if (*uParam0 == 1)
	{
	}
}

void func_3(var uParam0)
{
	uParam0->f_35 = 0;
}

int func_4(var uParam0)
{
	return uParam0->f_35;
}

void func_5(var uParam0, bool bParam1)
{
	func_6(uParam0);
	if (bParam1)
	{
		func_15(0);
	}
	uParam0->f_35 = 1;
}

void func_6(var uParam0)
{
	struct<46> Var0;
	
	Var0.f_41 = 1;
	*uParam0 = { Var0 };
}

void func_7(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_13())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_10(iParam0))
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
		func_8(&(Global_4263509[iParam0 /*84*/]));
	}
}

void func_8(var uParam0)
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
	func_9(&(uParam0->f_13));
	func_9(&(uParam0->f_13.f_13));
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

void func_9(var uParam0)
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

int func_10(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263509[iParam0 /*84*/].f_65.f_5 == 1;
	}
	return 0;
}

var func_11()
{
	return Global_1312745;
}

int func_12(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_4264072;
			break;
		
		case 1:
			return Global_4264071;
			break;
	}
	return 0;
}

int func_13()
{
	if (unk_0x4CE1DD5CFC1F941E())
	{
		return unk_0xFCAD2CB678396284();
	}
	return 0;
}

bool func_14()
{
	return Global_93734.f_340 > 0;
}

void func_15(bool bParam0)
{
	unk_0x3FE7249C0944DB7B();
	if (bParam0)
	{
		unk_0xF42DDD84DA1AB2BA();
	}
}

int func_16(var uParam0)
{
	if (uParam0->f_65.f_4 == 2043854386)
	{
		return 0;
	}
	return 1;
}

void func_17(int iParam0)
{
	struct<7> Var0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<66> Var4;
	bool bVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	iVar1 = 0;
	bVar2 = false;
	if (!func_13())
	{
		iVar1 = 1;
		Var0 = iParam0;
		Var0.f_2 = 0;
	}
	if (iVar1 || unk_0x286A5F0670063839(1, iParam0, &Var0, 7))
	{
		Var4.f_65 = 2147483647;
		iVar3 = func_34(Var0, &Var4);
		if (iVar3 != -1)
		{
			Global_4263509[iVar3 /*84*/].f_65.f_8 = 0;
			if (Global_4263509[iVar3 /*84*/].f_65.f_18 == 0)
			{
				Global_4263509[iVar3 /*84*/].f_65.f_18 = unk_0xE77FA521699F639C();
			}
		}
		bVar5 = true;
		if (iVar3 != -1)
		{
			Global_4263509[iVar3 /*84*/].f_65.f_17 = Var0.f_2;
		}
		else
		{
			Global_4264057.f_4 = Var0.f_2;
			Global_4264057.f_6 = Var0.f_3;
			Global_4264057.f_7 = Var0.f_4;
			Global_4264057.f_8 = Var0.f_5;
			Global_4264057.f_9 = Var0.f_6;
			if (Global_4264057.f_10 == 0)
			{
				Global_4264057.f_10 = unk_0xE77FA521699F639C();
			}
		}
		switch (Var0.f_2)
		{
			case 0:
				if (iVar3 != -1)
				{
					Global_4267890[iVar3 /*12*/] = Global_4263509[iVar3 /*84*/].f_65.f_3;
					Global_4267890[iVar3 /*12*/].f_1 = Global_4263509[iVar3 /*84*/].f_65.f_7;
					Global_4267890[iVar3 /*12*/].f_2 = Global_4263509[iVar3 /*84*/].f_65.f_4;
					Global_4267890[iVar3 /*12*/].f_3 = Global_4263509[iVar3 /*84*/].f_65.f_1;
					Global_4267890[iVar3 /*12*/].f_5 = Var0.f_1;
					Global_4267890[iVar3 /*12*/].f_6 = Var0.f_3;
					Global_4267890[iVar3 /*12*/].f_7 = Var0.f_4;
					Global_4267890[iVar3 /*12*/].f_8 = Var0.f_5;
					Global_4267890[iVar3 /*12*/].f_9 = Var0.f_6;
					Global_4267890[iVar3 /*12*/].f_11 = 1;
					Global_4263509[iVar3 /*84*/].f_65.f_2 = 2;
					if (Global_4263509[iVar3 /*84*/].f_65.f_11 & 4 != 0)
					{
						func_32(iVar3, bVar5);
					}
					else if (func_13())
					{
						if (bVar5)
						{
							unk_0x60C298D6B0CFE707(Global_4263509[iVar3 /*84*/].f_65, &uVar6);
						}
					}
				}
				break;
			
			default:
				if (iVar3 != -1)
				{
					Global_4263509[iVar3 /*84*/].f_65.f_2 = 3;
					if ((Global_4263509[iVar3 /*84*/].f_65.f_11 & 1 != 0 && Global_4263509[iVar3 /*84*/].f_65.f_9 < 2) && func_31(Var0.f_2))
					{
						if (func_10(iVar3))
						{
							if (func_24())
							{
								Global_4263509[iVar3 /*84*/].f_65.f_2 = 1;
								Global_4263509[iVar3 /*84*/].f_65.f_9++;
							}
							else if (Global_4263509[iVar3 /*84*/].f_65.f_11 & 2 != 0)
							{
								Global_4264087 = Global_4263509[iVar3 /*84*/].f_65.f_4;
								Global_4264089 = Global_4263509[iVar3 /*84*/].f_65.f_6;
								Global_4264090 = Var0.f_2;
								Global_4264088 = Global_4263509[iVar3 /*84*/].f_65.f_1;
								if (func_23(Global_4264087) && func_13())
								{
									if (!func_22(Global_4263509[iVar3 /*84*/].f_65))
									{
										iVar7 = func_21();
										Global_4264014[iVar7 /*7*/] = Global_4263509[iVar3 /*84*/].f_65;
										Global_4264014[iVar7 /*7*/].f_2 = Global_4264087;
										Global_4264014[iVar7 /*7*/].f_3 = Global_4264089;
										Global_4264014[iVar7 /*7*/].f_1 = Global_4264088;
										Global_4264014[iVar7 /*7*/].f_4 = unk_0x78DCC5D0CB43DEBA();
									}
								}
								else
								{
									Global_4264084 = 1;
								}
							}
						}
						else if (func_20(&iVar3))
						{
							Global_4263509[iVar3 /*84*/].f_65.f_2 = 1;
							Global_4263509[iVar3 /*84*/].f_65.f_9++;
						}
						else if (Global_4263509[iVar3 /*84*/].f_65.f_11 & 2 != 0)
						{
							Global_4264087 = Global_4263509[iVar3 /*84*/].f_65.f_4;
							Global_4264089 = Global_4263509[iVar3 /*84*/].f_65.f_6;
							Global_4264090 = Var0.f_2;
							Global_4264088 = Global_4263509[iVar3 /*84*/].f_65.f_1;
							if (func_23(Global_4264087) && func_13())
							{
								if (!func_22(Global_4263509[iVar3 /*84*/].f_65))
								{
									iVar8 = func_21();
									Global_4264014[iVar8 /*7*/] = Global_4263509[iVar3 /*84*/].f_65;
									Global_4264014[iVar8 /*7*/].f_2 = Global_4264087;
									Global_4264014[iVar8 /*7*/].f_3 = Global_4264089;
									Global_4264014[iVar8 /*7*/].f_1 = Global_4264088;
									Global_4264014[iVar8 /*7*/].f_4 = unk_0x78DCC5D0CB43DEBA();
								}
							}
							else
							{
								Global_4264084 = 1;
							}
						}
					}
					else if (Global_4263509[iVar3 /*84*/].f_65.f_11 & 2 != 0)
					{
						Global_4264087 = Global_4263509[iVar3 /*84*/].f_65.f_4;
						Global_4264089 = Global_4263509[iVar3 /*84*/].f_65.f_6;
						Global_4264090 = Var0.f_2;
						Global_4264088 = Global_4263509[iVar3 /*84*/].f_65.f_1;
						if ((func_23(Global_4264087) && func_13()) && func_31(Var0.f_2))
						{
							if (!func_22(Global_4263509[iVar3 /*84*/].f_65))
							{
								iVar9 = func_21();
								Global_4264014[iVar9 /*7*/] = Global_4263509[iVar3 /*84*/].f_65;
								Global_4264014[iVar9 /*7*/].f_2 = Global_4264087;
								Global_4264014[iVar9 /*7*/].f_3 = Global_4264089;
								Global_4264014[iVar9 /*7*/].f_1 = Global_4264088;
								Global_4264014[iVar9 /*7*/].f_4 = unk_0x78DCC5D0CB43DEBA();
							}
						}
						else
						{
							Global_4264084 = 1;
						}
					}
					if (Global_4263509[iVar3 /*84*/].f_65.f_2 == 3)
					{
						if (bVar2)
						{
							func_19(1, Global_4263509[iVar3 /*84*/].f_65.f_4);
							Global_4264084 = 0;
						}
						if (Global_4263509[iVar3 /*84*/].f_65.f_11 & 4 != 0)
						{
							func_18(iVar3, Global_4263509[iVar3 /*84*/].f_65.f_4, Global_4263509[iVar3 /*84*/].f_65.f_10, Global_4263509[iVar3 /*84*/].f_65.f_1, Var0.f_2);
						}
					}
				}
				break;
			}
	}
}

void func_18(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x8950ED5730F62EE8(&(Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_7(iParam0);
	}
}

void func_19(int iParam0, var uParam1)
{
	Global_2460949 = uParam1;
	Global_2460948 = iParam0;
}

int func_20(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (!func_13())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (*iParam0 == -1 || func_10(*iParam0))
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0xB412AA3DEE298A52(func_11()) || unk_0x2832F5CD8A109CD6())
		{
			Global_4264085 = 1;
			return 0;
		}
		if (Global_2459772)
		{
			if (Global_4263509[*iParam0 /*84*/].f_65.f_6 == 1067618600 || Global_4263509[*iParam0 /*84*/].f_65.f_6 == -1303831698)
			{
				Global_4264086 = 1;
				return 0;
			}
		}
	}
	if ((bVar0 || iVar1) || unk_0x64875ABCC43EF9A8(Global_4263509[*iParam0 /*84*/].f_65))
	{
		if (iVar1 && !bVar0)
		{
		}
		Global_4263509[*iParam0 /*84*/].f_65.f_13 = 1;
		Global_4263509[*iParam0 /*84*/].f_65.f_12 = 0;
		Global_4263509[*iParam0 /*84*/].f_65.f_14 = unk_0xE77FA521699F639C();
		if (bVar0)
		{
			if (*iParam0 != -1)
			{
				Global_4263509[*iParam0 /*84*/].f_65.f_8 = 1;
				Global_4263509[*iParam0 /*84*/].f_65.f_12 = 1;
			}
		}
		Global_4263509[*iParam0 /*84*/].f_65.f_18 = 0;
		return 1;
	}
	return 0;
}

int func_21()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = Global_4264014;
	iVar0 = 0;
	while (iVar0 <= (iVar2 - 1))
	{
		if (Global_4264014[iVar0 /*7*/] != 0 && Global_4264014[iVar0 /*7*/] != 2147483647)
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= iVar2)
	{
		return 0;
	}
	return iVar1;
}

int func_22(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = Global_4264014;
	if (iParam0 == 2147483647 || iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		if (Global_4264014[iVar0 /*7*/] == iParam0)
		{
			return 1;
		}
		if (Global_4264014[iVar0 /*7*/].f_6 == iParam0)
		{
			Global_4264014[iVar0 /*7*/].f_4 = unk_0x78DCC5D0CB43DEBA();
			Global_4264014[iVar0 /*7*/].f_6 = 2147483647;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_23(int iParam0)
{
	if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == 1780666425 || iParam0 == -2043695058) || iParam0 == -1586170317) || iParam0 == 393059668) || iParam0 == -1027218631) || iParam0 == 1048226110) || iParam0 == 569170531) || iParam0 == -856006867) || iParam0 == 848090538) || iParam0 == -293060240) || iParam0 == -47546905) || iParam0 == 463142405) || iParam0 == 1550217370) || iParam0 == -101307780) || iParam0 == 1052472386) || iParam0 == -2130199671) || iParam0 == -1227654538) || iParam0 == -876012764) || iParam0 == -722894325) || iParam0 == 1407278493) || iParam0 == -1579394494) || iParam0 == 1179783540) || iParam0 == 923419301) || iParam0 == -308826175) || iParam0 == 603298940) || iParam0 == -12619854) || iParam0 == -311112675) || iParam0 == 870439158) || iParam0 == -974288740) || iParam0 == -4138654) || iParam0 == -1180954122) || iParam0 == -1918051016) || iParam0 == 844330594) || iParam0 == 1934825517) || iParam0 == 1852024236) || iParam0 == 2099238988) || iParam0 == 1952643559) || iParam0 == -1172900789) || iParam0 == -2015399333) || iParam0 == -1574795641) || iParam0 == -961034881) || iParam0 == 1135468152) || iParam0 == 1265272476) || iParam0 == -634726636) || iParam0 == 696556762) || iParam0 == 443347049) || iParam0 == 403506509) || iParam0 == -883876414) || iParam0 == -1064150715) || iParam0 == -1387253055) || iParam0 == -716963152) || iParam0 == 1138089938) || iParam0 == -561012053) || iParam0 == 1240683675) || iParam0 == 1241904665) || iParam0 == -494565059) || iParam0 == 827308208) || iParam0 == -1857685192) || iParam0 == 1698417709) || iParam0 == -2017925037) || iParam0 == 1057653594) || iParam0 == 1810506918) || iParam0 == 451427308) || iParam0 == 824622151) || iParam0 == 1253978276) || iParam0 == -1576080766) || iParam0 == 1508411869) || iParam0 == 1428501742) || iParam0 == -1918967151) || iParam0 == 1261538664) || iParam0 == 1180397655) || iParam0 == 1414674366) || iParam0 == 261460130) || iParam0 == -2027658376)
	{
		return 1;
	}
	return 0;
}

int func_24()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_13())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_30();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0xB412AA3DEE298A52(func_11()) || unk_0x2832F5CD8A109CD6())
		{
			if (func_29(Global_4263509[iVar2 /*84*/].f_65.f_6, Global_4263509[iVar2 /*84*/].f_65.f_4, Global_4263509[iVar2 /*84*/].f_65.f_1) == 1)
			{
				Global_4264085 = 1;
			}
			return 0;
		}
		if (Global_2459772)
		{
			if (Global_4263509[iVar2 /*84*/].f_65.f_6 == 1067618600 || Global_4263509[iVar2 /*84*/].f_65.f_6 == -1303831698)
			{
				Global_4264086 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_28(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || unk_0x64875ABCC43EF9A8(iVar3))
		{
			Global_4263509[iVar2 /*84*/].f_65.f_13 = 1;
			Global_4263509[iVar2 /*84*/].f_65.f_12 = 0;
			Global_4263509[iVar2 /*84*/].f_65.f_14 = unk_0xE77FA521699F639C();
			if (bVar0)
			{
				Global_4263509[iVar2 /*84*/].f_65.f_8 = 1;
				Global_4263509[iVar2 /*84*/].f_65.f_12 = 1;
			}
			Global_4263509[iVar2 /*84*/].f_65.f_18 = 0;
			if (bVar0 || iVar1)
			{
				func_25(Global_4263509[iVar2 /*84*/], iVar2);
			}
			Global_4264070 = 1;
			return 1;
		}
	}
	return 0;
}

void func_25(struct<66> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_27(vVar0.y);
	if ((Global_262145.f_23434 && !Global_262145.f_23435) && !Global_262145.f_23436)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_26();
		unk_0x09269A9CFC145847(1, &vVar0, 35, iVar1);
	}
}

void func_26()
{
	unk_0x8F59DE352CFE248B("AM_ARENA_SHP");
}

var func_27(int iParam0)
{
	var uVar0;
	
	unk_0x8950ED5730F62EE8(&uVar0, iParam0);
	return uVar0;
}

int func_28(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263509[iParam0 /*84*/].f_65;
	}
	return -1;
}

int func_29(int iParam0, int iParam1, int iParam2)
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
			case 1727256317:
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
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_30()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_28(iVar0) != 2147483647)
		{
			if (func_10(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_31(int iParam0)
{
	if ((iParam0 >= 500 && iParam0 <= 599) || iParam0 == 408)
	{
		return 1;
	}
	return 0;
}

void func_32(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	var uVar2;
	var uVar3;
	
	if (iParam0 == -1)
	{
		return;
	}
	unk_0x9409D2F56E25B407(func_28(iParam0));
	if (Global_4263509[iParam0 /*84*/].f_65.f_10 == 1)
	{
	}
	else if (Global_4263509[iParam0 /*84*/].f_65.f_10 == 4)
	{
		iVar0 = 1;
	}
	else if (Global_4263509[iParam0 /*84*/].f_65.f_10 == 2)
	{
		bVar1 = true;
	}
	switch (Global_4263509[iParam0 /*84*/].f_65.f_4)
	{
		case 631654431:
			unk_0xABC7B8C1BE239012(Global_4263509[iParam0 /*84*/].f_65.f_1, bVar1, iVar0);
			break;
		
		case -180141073:
			unk_0xAE44886DE0F3D443(Global_4263509[iParam0 /*84*/].f_65.f_1, &(Global_4263509[iParam0 /*84*/].f_13), bVar1, iVar0);
			break;
		
		case 68030260:
			unk_0xB767D44257A3CF80(Global_4263509[iParam0 /*84*/].f_65.f_1, Global_4263509[iParam0 /*84*/], &(Global_4263509[iParam0 /*84*/].f_13), bVar1, iVar0);
			break;
		
		case -982394051:
			unk_0xFAA4676625466505(Global_4263509[iParam0 /*84*/].f_65.f_1, Global_4263509[iParam0 /*84*/].f_1, bVar1, iVar0);
			break;
		
		case 454359403:
			unk_0x9B45FA4F3B7E1A65(Global_4263509[iParam0 /*84*/].f_65.f_1, bVar1, Global_4263509[iParam0 /*84*/].f_2, iVar0);
			break;
		
		case -1586170317:
			unk_0xB283FB4A36A6769A(Global_4263509[iParam0 /*84*/].f_65.f_1, &(Global_4263509[iParam0 /*84*/].f_13.f_26), &(Global_4263509[iParam0 /*84*/].f_13.f_34));
			break;
		
		case 650665123:
			unk_0x20284E8C37B5322F(Global_4263509[iParam0 /*84*/].f_65.f_1, bVar1, iVar0);
			break;
		
		case 1654961868:
			unk_0x20FD998D5103B80F(Global_4263509[iParam0 /*84*/].f_65.f_1, &(Global_4263509[iParam0 /*84*/].f_13), bVar1, iVar0);
			break;
		
		case 1182673174:
			unk_0xE7099B1A79D501B1(Global_4263509[iParam0 /*84*/].f_65.f_1, Global_4263509[iParam0 /*84*/], Global_4263509[iParam0 /*84*/].f_1, bVar1, iVar0);
			break;
		
		case 563463121:
			unk_0x71145C9C6157526A(Global_4263509[iParam0 /*84*/].f_65.f_1);
			break;
		
		case 1940862352:
			unk_0xEC48E56C631256C9(Global_4263509[iParam0 /*84*/].f_65.f_1, &(Global_4263509[iParam0 /*84*/].f_13.f_26), bVar1, iVar0);
			break;
		
		case -1389227906:
			unk_0xEC48E56C631256C9(Global_4263509[iParam0 /*84*/].f_65.f_1, &(Global_4263509[iParam0 /*84*/].f_13.f_26), bVar1, iVar0);
			break;
		
		case -516219046:
			unk_0x4BFB9802BD6D14DA(Global_4263509[iParam0 /*84*/].f_65.f_1, bVar1, iVar0);
			break;
		
		case -1398318418:
			unk_0xAB02CF5820CDCE16(Global_4263509[iParam0 /*84*/].f_65.f_1, &(Global_4263509[iParam0 /*84*/].f_13.f_34));
			break;
		
		case 2043854386:
			unk_0x397E507BBF2CC708(Global_4263509[iParam0 /*84*/].f_65.f_1, bVar1, iVar0);
			break;
		
		case 277665518:
			unk_0x2A0AAC08F2536E86(Global_4263509[iParam0 /*84*/].f_65.f_1, bVar1, iVar0);
			break;
		
		case -1077156170:
			unk_0x72AC5E9E5F31D086(Global_4263509[iParam0 /*84*/].f_65.f_1, &(Global_4263509[iParam0 /*84*/].f_13.f_34), -1);
			break;
		
		case -96593501:
			unk_0x8BE0B3DF33CB2106(Global_4263509[iParam0 /*84*/].f_65.f_1, bVar1, iVar0);
			break;
		
		case 742499889:
			unk_0x5042A31F324CBA02(Global_4263509[iParam0 /*84*/].f_6, Global_4263509[iParam0 /*84*/].f_7, Global_4263509[iParam0 /*84*/].f_65.f_1);
			break;
		
		case 2050093329:
			unk_0xE4083C1D968F4663(Global_4263509[iParam0 /*84*/].f_6, Global_4263509[iParam0 /*84*/].f_7, Global_4263509[iParam0 /*84*/].f_65.f_1);
			break;
		
		case -1752488069:
			unk_0x88D0B61C77282B4E(Global_4263509[iParam0 /*84*/].f_6, Global_4263509[iParam0 /*84*/].f_7, Global_4263509[iParam0 /*84*/].f_65.f_1);
			break;
		
		case 634375935:
			unk_0x569BFF4D3561CD4B(Global_4263509[iParam0 /*84*/].f_65.f_1, bVar1, iVar0);
			break;
		
		case -1027218631:
			unk_0xC5A334D1F44D5BE5(Global_4263509[iParam0 /*84*/].f_65.f_1, &(Global_4263509[iParam0 /*84*/].f_13.f_26));
			break;
		
		case -47546905:
			unk_0x71B530BAA6A35357(Global_4263509[iParam0 /*84*/].f_65.f_1, &(Global_4263509[iParam0 /*84*/].f_13.f_26));
			break;
		
		case 291576838:
			unk_0x68642A60A49B0D2B(Global_4263509[iParam0 /*84*/].f_65.f_1, Global_4263509[iParam0 /*84*/], 14, 1, bVar1, &(Global_4263509[iParam0 /*84*/].f_13.f_26), 0, 0, 0, iVar0);
			break;
		
		case 1612072658:
			unk_0xA071803B31DFBDF2(Global_4263509[iParam0 /*84*/].f_65.f_1, bVar1, iVar0);
			break;
		
		case -990286235:
			unk_0x6317E0D2A474F346(Global_4263509[iParam0 /*84*/].f_65.f_1, &(Global_4263509[iParam0 /*84*/].f_13), &(Global_4263509[iParam0 /*84*/].f_13.f_13), 1);
			break;
		
		case 1349151477:
			unk_0xDEC4B8294C817628(Global_4263509[iParam0 /*84*/].f_65.f_1);
			break;
		
		case -31156877:
		case -327918414:
		case 550898518:
		case 835976347:
			unk_0x6120E1E912338F6F(Global_4263509[iParam0 /*84*/].f_65.f_1);
			break;
		
		case -1186079845:
			unk_0x4B9C64F7B558A263(Global_4263509[iParam0 /*84*/].f_65.f_1);
			break;
		
		case 1734805203:
			unk_0x21C816A90BEB45BA(Global_4263509[iParam0 /*84*/].f_65.f_1);
			break;
		
		case -1645229221:
			unk_0x947D9EDD40EEE615(Global_4263509[iParam0 /*84*/].f_65.f_1, bVar1, iVar0);
			break;
		
		case -585718395:
			unk_0xDC15027531B01EC1(Global_4263509[iParam0 /*84*/].f_65.f_1, bVar1, iVar0);
			break;
		
		case 763367758:
			unk_0xBBE89CE5E970AA46(Global_4263509[iParam0 /*84*/].f_65.f_1, bVar1, iVar0);
			break;
		
		case 1850983186:
			unk_0x947D9EDD40EEE615(Global_4263509[iParam0 /*84*/].f_65.f_1, bVar1, iVar0);
			break;
		
		case -2129781826:
			unk_0x665437F81CFE4C07(Global_4263509[iParam0 /*84*/].f_65.f_1, Global_4263509[iParam0 /*84*/], bVar1, iVar0);
			break;
		
		case 1941570214:
			unk_0xCCA49445BB4F29B3(Global_4263509[iParam0 /*84*/].f_65.f_1, Global_4263509[iParam0 /*84*/], bVar1, iVar0);
			break;
		
		case 1869490922:
			unk_0xA651EA9C36144ADA(Global_4263509[iParam0 /*84*/].f_65.f_1, Global_4263509[iParam0 /*84*/], Global_4263509[iParam0 /*84*/].f_1, bVar1, iVar0);
			break;
		
		case -336803850:
			unk_0xA651EA9C36144ADA(Global_4263509[iParam0 /*84*/].f_65.f_1, Global_4263509[iParam0 /*84*/], Global_4263509[iParam0 /*84*/].f_1, bVar1, iVar0);
			break;
		
		case -1412692765:
			unk_0xA651EA9C36144ADA(Global_4263509[iParam0 /*84*/].f_65.f_1, Global_4263509[iParam0 /*84*/], Global_4263509[iParam0 /*84*/].f_1, bVar1, iVar0);
			break;
		
		case 618167454:
			unk_0xA651EA9C36144ADA(Global_4263509[iParam0 /*84*/].f_65.f_1, Global_4263509[iParam0 /*84*/], Global_4263509[iParam0 /*84*/].f_1, bVar1, iVar0);
			break;
		
		case 980623936:
			unk_0xA651EA9C36144ADA(Global_4263509[iParam0 /*84*/].f_65.f_1, Global_4263509[iParam0 /*84*/], Global_4263509[iParam0 /*84*/].f_1, bVar1, iVar0);
			break;
		
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
		case -664597565:
		case -1100963799:
			unk_0x910DEDDEE7716047(Global_4263509[iParam0 /*84*/].f_65.f_1, &(Global_4263509[iParam0 /*84*/].f_13.f_40), &(Global_4263509[iParam0 /*84*/].f_13.f_44), bVar1);
			break;
		
		case 312105838:
			unk_0x3098D440E766A1DD(Global_4263509[iParam0 /*84*/].f_65.f_1);
			break;
		
		case -1922554349:
			unk_0xDE1422FA669581FD(Global_4263509[iParam0 /*84*/].f_65.f_1, "AM_DESTROY_VEH", &uVar2);
			break;
		
		case -2043695058:
			unk_0xDE1422FA669581FD(Global_4263509[iParam0 /*84*/].f_65.f_1, "AM_DISTRACT_COPS", &uVar2);
			break;
		
		case 1780666425:
			unk_0xDE1422FA669581FD(Global_4263509[iParam0 /*84*/].f_65.f_1, "AM_PLANE_TAKEDOWN", &uVar2);
			break;
		
		case 1643659499:
			unk_0xDCE1E8102C957262(Global_4263509[iParam0 /*84*/].f_65.f_1, Global_4263509[iParam0 /*84*/].f_1, bVar1, iVar0);
			break;
		
		case 1839532116:
			unk_0xD8987A612E450E2B(Global_4263509[iParam0 /*84*/].f_65.f_1, 0, 0);
			break;
		
		case 941287179:
			unk_0x5BE9F9D31C80B910(Global_4263509[iParam0 /*84*/].f_65.f_1, Global_4263509[iParam0 /*84*/].f_3);
			break;
		
		case -352356931:
			unk_0x82A80EEFBA2EC1BB(Global_4263509[iParam0 /*84*/].f_65.f_1, Global_4263509[iParam0 /*84*/]);
			break;
		
		case 1948102096:
			unk_0x4377D5AA7BE1D538(Global_4263509[iParam0 /*84*/].f_65.f_1, bVar1, iVar0);
			break;
		
		case -1834046564:
			unk_0x98F24756A9BCC5CB(Global_4263509[iParam0 /*84*/].f_65.f_1, bVar1, iVar0);
			break;
		
		case 393059668:
			unk_0xEAD768A4AD33068A(Global_4263509[iParam0 /*84*/].f_65.f_1, &(Global_4263509[iParam0 /*84*/].f_13.f_26));
			break;
		
		case -57868256:
			unk_0xF0D63C857C8B1466(Global_4263509[iParam0 /*84*/].f_65.f_1, &(Global_4263509[iParam0 /*84*/].f_13.f_34), Global_4263509[iParam0 /*84*/].f_4);
			break;
		
		case -1127021384:
			unk_0x2BDC2B9C951F4BEB(Global_4263509[iParam0 /*84*/].f_65.f_1);
			break;
		
		case 1564537328:
			unk_0xEC48E56C631256C9(Global_4263509[iParam0 /*84*/].f_65.f_1, "RaceToPoint", false, 0);
			break;
		
		case -1359375127:
			unk_0x86F9094D3DA3E3AA(Global_4263509[iParam0 /*84*/].f_65.f_1, 0, 0);
			break;
		
		case 283351220:
			unk_0x68642A60A49B0D2B(Global_4263509[iParam0 /*84*/].f_65.f_1, Global_4263509[iParam0 /*84*/], Global_4263509[iParam0 /*84*/].f_5, 1, bVar1, &(Global_4263509[iParam0 /*84*/].f_13.f_40), 0, 0, 0, iVar0);
			break;
		
		case -2085313189:
			switch (Global_4263509[iParam0 /*84*/].f_65.f_6)
			{
				case 1067618600:
					unk_0x68642A60A49B0D2B(Global_4263509[iParam0 /*84*/].f_65.f_1, Global_4263509[iParam0 /*84*/], Global_4263509[iParam0 /*84*/].f_5, 1, bVar1, &(Global_4263509[iParam0 /*84*/].f_13.f_40), 0, 0, 0, iVar0);
					break;
			}
			break;
		
		case 1704445500:
			unk_0x0AE1118D77B7E29F(Global_4263509[iParam0 /*84*/].f_65.f_1, 0, &(Global_4263509[iParam0 /*84*/].f_13.f_34), 0, 0);
			break;
		
		case 1620609399:
			unk_0xDE1422FA669581FD(Global_4263509[iParam0 /*84*/].f_65.f_1, "AM_HOT_TARGET_DELIVER", &uVar2);
			break;
		
		case 1961641934:
			unk_0xDE1422FA669581FD(Global_4263509[iParam0 /*84*/].f_65.f_1, "AM_HOT_TARGET_KILL", &uVar2);
			break;
		
		case 210955503:
			unk_0xDE1422FA669581FD(Global_4263509[iParam0 /*84*/].f_65.f_1, "AM_KILL_LIST", &uVar2);
			break;
		
		case -59668082:
			unk_0xDE1422FA669581FD(Global_4263509[iParam0 /*84*/].f_65.f_1, "AM_CP_COLLECTION", &uVar2);
			break;
		
		case 1736933716:
			unk_0xDE1422FA669581FD(Global_4263509[iParam0 /*84*/].f_65.f_1, "AM_TIME_TRIAL", &uVar2);
			break;
		
		case -1468524125:
			unk_0xDE1422FA669581FD(Global_4263509[iParam0 /*84*/].f_65.f_1, "AM_CHALLENGES", &uVar2);
			break;
		
		case 111573502:
			unk_0xDE1422FA669581FD(Global_4263509[iParam0 /*84*/].f_65.f_1, "AM_HOT_TARGET_HELI", &uVar2);
			break;
		
		case 1525644423:
			unk_0xDE1422FA669581FD(Global_4263509[iParam0 /*84*/].f_65.f_1, "AM_DEAD_DROP", &uVar2);
			break;
		
		case 968073639:
			unk_0xDE1422FA669581FD(Global_4263509[iParam0 /*84*/].f_65.f_1, "AM_PENNED_IN", &uVar2);
			break;
		
		case 1577781788:
			unk_0xDE1422FA669581FD(Global_4263509[iParam0 /*84*/].f_65.f_1, "AM_PASS_THE_PARCEL", &uVar2);
			break;
		
		case -934465332:
			unk_0xDE1422FA669581FD(Global_4263509[iParam0 /*84*/].f_65.f_1, "AM_CRIMINAL_DAMAGE", &uVar2);
			break;
		
		case -1194253122:
			unk_0xDE1422FA669581FD(Global_4263509[iParam0 /*84*/].f_65.f_1, "AM_HOT_PROPERTY", &uVar2);
			break;
		
		case -212607085:
			unk_0xDE1422FA669581FD(Global_4263509[iParam0 /*84*/].f_65.f_1, "AM_KING_OF_THE_HILL", &uVar2);
			break;
		
		case -815546555:
			unk_0xDE1422FA669581FD(Global_4263509[iParam0 /*84*/].f_65.f_1, "AM_HUNT_THE_BEAST", &uVar2);
			break;
		
		case 1048226110:
			unk_0xFCDB301E3DAFDCA6(Global_4263509[iParam0 /*84*/].f_6, Global_4263509[iParam0 /*84*/].f_7, Global_4263509[iParam0 /*84*/].f_65.f_1);
			break;
		
		case 569170531:
			unk_0x32795CB155B2FBA7(Global_4263509[iParam0 /*84*/].f_6, Global_4263509[iParam0 /*84*/].f_7, Global_4263509[iParam0 /*84*/].f_65.f_1);
			break;
		
		case -856006867:
			unk_0x9B2453C4B3C419EC(Global_4263509[iParam0 /*84*/].f_6, Global_4263509[iParam0 /*84*/].f_7, Global_4263509[iParam0 /*84*/].f_65.f_1, Global_4263509[iParam0 /*84*/].f_8);
			break;
		
		case 208223429:
			unk_0xA4CF8D21E553B5FC(Global_4263509[iParam0 /*84*/].f_65.f_1, Global_4263509[iParam0 /*84*/].f_9);
			break;
		
		case 848090538:
			unk_0x808E1C5DC539543C(Global_4263509[iParam0 /*84*/].f_65.f_1);
			break;
		
		case 665109499:
			unk_0x82A5D78181F55C7D(Global_4263509[iParam0 /*84*/].f_65.f_1, Global_4263509[iParam0 /*84*/], 0, 1);
			break;
		
		case -1330755006:
			unk_0xB36BD3E91448C545(Global_4263509[iParam0 /*84*/].f_65.f_1, Global_4263509[iParam0 /*84*/], 0, 1);
			break;
		
		case 1976384368:
			unk_0x237B05DFBD78EB67(Global_4263509[iParam0 /*84*/].f_65.f_1, Global_4263509[iParam0 /*84*/], 0, 0);
			break;
		
		case 268924934:
			unk_0xE5B884DE6E6FA75D(Global_4263509[iParam0 /*84*/].f_65.f_1, Global_4263509[iParam0 /*84*/], Global_4263509[iParam0 /*84*/].f_1, Global_4263509[iParam0 /*84*/].f_9);
			break;
		
		case -293060240:
			unk_0xCB7905BBF082C26C(Global_4263509[iParam0 /*84*/].f_65.f_1, Global_4263509[iParam0 /*84*/].f_6, Global_4263509[iParam0 /*84*/].f_7);
			break;
		
		case 437291904:
			unk_0xBC2FC8C9FD491EAF(Global_4263509[iParam0 /*84*/].f_65.f_1, 0, 1, Global_4263509[iParam0 /*84*/].f_6, Global_4263509[iParam0 /*84*/].f_7, Global_4263509[iParam0 /*84*/].f_1, Global_4263509[iParam0 /*84*/], Global_4263509[iParam0 /*84*/].f_10, Global_4263509[iParam0 /*84*/].f_11, Global_4263509[iParam0 /*84*/].f_12);
			break;
		
		case -135813048:
			unk_0xD9FF0DB2B2504258(Global_4263509[iParam0 /*84*/].f_65.f_1, 0, 1);
			break;
		
		case 463142405:
			unk_0x37FCBC83E6BD91A9(Global_4263509[iParam0 /*84*/].f_6, Global_4263509[iParam0 /*84*/].f_7, Global_4263509[iParam0 /*84*/].f_65.f_1, Global_4263509[iParam0 /*84*/].f_8);
			break;
		
		case 1550217370:
			unk_0x79074263DF3F4671(Global_4263509[iParam0 /*84*/].f_65.f_1);
			break;
		
		case -101307780:
			unk_0x3E09A0D86D741939(Global_4263509[iParam0 /*84*/].f_65.f_1);
			break;
		
		case 599804707:
			unk_0xDE1422FA669581FD(Global_4263509[iParam0 /*84*/].f_65.f_1, "GB_SALVAGE", &uVar2);
			break;
		
		case 1347433368:
			unk_0x053B7181BEF7ECC1(Global_4263509[iParam0 /*84*/].f_65.f_1);
			break;
		
		case 1052472386:
			unk_0x9A64DEED09590304(Global_4263509[iParam0 /*84*/].f_65.f_1, &(Global_4263509[iParam0 /*84*/].f_13.f_26), &(Global_4263509[iParam0 /*84*/].f_13.f_34));
			break;
		
		case -2130199671:
			unk_0xA5F7DF249316EC85(Global_4263509[iParam0 /*84*/].f_65.f_1, &(Global_4263509[iParam0 /*84*/].f_13.f_26), &(Global_4263509[iParam0 /*84*/].f_13.f_34));
			break;
		
		case -1227654538:
			unk_0x578FDAD9CAFBCC37(Global_4263509[iParam0 /*84*/].f_65.f_1, &(Global_4263509[iParam0 /*84*/].f_13.f_26), &(Global_4263509[iParam0 /*84*/].f_13.f_34));
			break;
		
		case -930104477:
			unk_0xCA2214E58EFED486(Global_4263509[iParam0 /*84*/].f_65.f_1, 0, 1, Global_4263509[iParam0 /*84*/]);
			break;
		
		case 1864522104:
			unk_0x798F9614DD3DE771(Global_4263509[iParam0 /*84*/].f_65.f_1, 0);
			break;
		
		case 215608230:
			unk_0x798F9614DD3DE771(Global_4263509[iParam0 /*84*/].f_65.f_1, 1);
			break;
		
		case -876012764:
			unk_0xF2D2BF7606114089(Global_4263509[iParam0 /*84*/].f_65.f_1, Global_4263509[iParam0 /*84*/]);
			break;
		
		case -722894325:
			unk_0x5338DBA671E24476(Global_4263509[iParam0 /*84*/].f_65.f_1, Global_4263509[iParam0 /*84*/]);
			break;
		
		case 1407278493:
			unk_0x858499DE32273450(Global_4263509[iParam0 /*84*/].f_65.f_1);
			break;
		
		case -1579394494:
		case -27443911:
			unk_0xF04F75CAC5C1CB2F(Global_4263509[iParam0 /*84*/].f_65.f_1, &(Global_4263509[iParam0 /*84*/].f_13.f_26));
			break;
		
		case 1179783540:
			unk_0x156DEA2C269D37F8(Global_4263509[iParam0 /*84*/].f_65.f_1, &(Global_4263509[iParam0 /*84*/].f_13.f_26));
			break;
		
		case 923419301:
			unk_0x2F14B39C22AB5E4B(Global_4263509[iParam0 /*84*/].f_65.f_1, &(Global_4263509[iParam0 /*84*/].f_13.f_26), 0);
			break;
		
		case -308826175:
			unk_0x2F14B39C22AB5E4B(Global_4263509[iParam0 /*84*/].f_65.f_1, &(Global_4263509[iParam0 /*84*/].f_13.f_26), 1);
			break;
		
		case 603298940:
			unk_0x2F14B39C22AB5E4B(Global_4263509[iParam0 /*84*/].f_65.f_1, &(Global_4263509[iParam0 /*84*/].f_13.f_26), 2);
			break;
		
		case -12619854:
			unk_0x2F14B39C22AB5E4B(Global_4263509[iParam0 /*84*/].f_65.f_1, &(Global_4263509[iParam0 /*84*/].f_13.f_26), 3);
			break;
		
		case -311112675:
			unk_0x2F14B39C22AB5E4B(Global_4263509[iParam0 /*84*/].f_65.f_1, &(Global_4263509[iParam0 /*84*/].f_13.f_26), 4);
			break;
		
		case 870439158:
			unk_0x2F14B39C22AB5E4B(Global_4263509[iParam0 /*84*/].f_65.f_1, &(Global_4263509[iParam0 /*84*/].f_13.f_26), 5);
			break;
		
		case -974288740:
			unk_0x2F14B39C22AB5E4B(Global_4263509[iParam0 /*84*/].f_65.f_1, &(Global_4263509[iParam0 /*84*/].f_13.f_26), 6);
			break;
		
		case -4138654:
			unk_0x2F14B39C22AB5E4B(Global_4263509[iParam0 /*84*/].f_65.f_1, &(Global_4263509[iParam0 /*84*/].f_13.f_26), 7);
			break;
		
		case -1180954122:
			unk_0x2F14B39C22AB5E4B(Global_4263509[iParam0 /*84*/].f_65.f_1, &(Global_4263509[iParam0 /*84*/].f_13.f_26), 8);
			break;
		
		case -1918051016:
			unk_0x2F14B39C22AB5E4B(Global_4263509[iParam0 /*84*/].f_65.f_1, &(Global_4263509[iParam0 /*84*/].f_13.f_26), 9);
			break;
		
		case 844330594:
			unk_0x2F14B39C22AB5E4B(Global_4263509[iParam0 /*84*/].f_65.f_1, &(Global_4263509[iParam0 /*84*/].f_13.f_26), 10);
			break;
		
		case 1934825517:
			unk_0xC58E2F5C9D86DF7E(Global_4263509[iParam0 /*84*/].f_65.f_1, &(Global_4263509[iParam0 /*84*/].f_13.f_26), 0);
			break;
		
		case 1852024236:
			unk_0xC58E2F5C9D86DF7E(Global_4263509[iParam0 /*84*/].f_65.f_1, &(Global_4263509[iParam0 /*84*/].f_13.f_26), 1);
			break;
		
		case 2099238988:
			unk_0xC58E2F5C9D86DF7E(Global_4263509[iParam0 /*84*/].f_65.f_1, &(Global_4263509[iParam0 /*84*/].f_13.f_26), 2);
			break;
		
		case 1952643559:
			break;
		
		case 2039302543:
			break;
		
		case -1172900789:
			unk_0x61002B599E6217C7(Global_4263509[iParam0 /*84*/].f_65.f_1, Global_4263509[iParam0 /*84*/].f_9);
			break;
		
		case -1733398043:
			unk_0x8867BF605AC9A928(Global_4263509[iParam0 /*84*/].f_9, Global_4263509[iParam0 /*84*/].f_65.f_1, 0, 1);
			break;
		
		case -1892760262:
			unk_0xCF930BE8B1CC9962(Global_4263509[iParam0 /*84*/].f_9, Global_4263509[iParam0 /*84*/].f_65.f_1, 0, 1);
			break;
		
		case -2015399333:
			unk_0x44D3540EDE38086E(Global_4263509[iParam0 /*84*/].f_65.f_1);
			break;
		
		case 402505853:
			if (func_33(unk_0x7C1C88877E8AAA50(Global_4263509[iParam0 /*84*/]), 0, 0))
			{
				unk_0x3B85AC9A9FEBEE76(unk_0x7C1C88877E8AAA50(Global_4263509[iParam0 /*84*/]), Global_4263509[iParam0 /*84*/].f_1, Global_4263509[iParam0 /*84*/].f_65.f_1, 0, 1);
			}
			break;
		
		case 1678112166:
			unk_0x0BBCAA17653CBEF3(Global_4263509[iParam0 /*84*/].f_65.f_1, Global_4263509[iParam0 /*84*/], 0, 1);
			break;
		
		case -1143510182:
			unk_0xBCC9F81FD3C1F34E(Global_4263509[iParam0 /*84*/], Global_4263509[iParam0 /*84*/].f_65.f_1, 0, 1);
			break;
		
		case -1574795641:
			unk_0x3E1ADB2741CDDB0B(Global_4263509[iParam0 /*84*/].f_65.f_1);
			break;
		
		case -961034881:
			unk_0x37FAB2C396FC9AFA(Global_4263509[iParam0 /*84*/].f_65.f_1);
			break;
		
		case 1135468152:
			unk_0x874D7013B1B5609D(Global_4263509[iParam0 /*84*/].f_65.f_1);
			break;
		
		case 1265272476:
			unk_0x895A8E4E832DC110(Global_4263509[iParam0 /*84*/].f_65.f_1, Global_4263509[iParam0 /*84*/].f_1, Global_4263509[iParam0 /*84*/].f_9);
			break;
		
		case -634726636:
			unk_0xFF5647924B4375B1(Global_4263509[iParam0 /*84*/].f_65.f_1);
			break;
		
		case 696556762:
			unk_0xB99A18C3A7A01CE7(Global_4263509[iParam0 /*84*/].f_65.f_1);
			break;
		
		case 837955913:
			unk_0x410B2EF5949491D4(Global_4263509[iParam0 /*84*/].f_65.f_1, Global_4263509[iParam0 /*84*/].f_65.f_15, 0, 1);
			break;
		
		case 403506509:
			unk_0x8FAD2CDDD889500C(Global_4263509[iParam0 /*84*/].f_65.f_1);
			break;
		
		case -883876414:
			unk_0x1258855BEDB187FD(Global_4263509[iParam0 /*84*/].f_65.f_1, Global_4263509[iParam0 /*84*/].f_65.f_15);
			break;
		
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
			unk_0xB3A7F4939357F4F5(Global_4263509[iParam0 /*84*/].f_65.f_1, Global_4263509[iParam0 /*84*/].f_65.f_15);
			break;
		
		case -1532467144:
			unk_0x5137A331D25442A1(Global_4263509[iParam0 /*84*/].f_65.f_1, Global_4263509[iParam0 /*84*/], 0, 1);
			break;
		
		case 1815541181:
			unk_0xDA75EE5419FA6D6D(Global_4263509[iParam0 /*84*/].f_65.f_1, 0, 0);
			break;
		
		case -561012053:
			unk_0xA096826D3281BFA2(Global_4263509[iParam0 /*84*/].f_65.f_1);
			break;
		
		case -1342064661:
			unk_0xE5148E54B9D1AE21(Global_4263509[iParam0 /*84*/].f_65.f_1, 0, 1);
			break;
		
		case 1240683675:
			unk_0x9DF89498DF28310C(Global_4263509[iParam0 /*84*/].f_65.f_1);
			break;
		
		case 1241904665:
			unk_0xE1C3A26465E3F966(Global_4263509[iParam0 /*84*/].f_65.f_1, Global_4263509[iParam0 /*84*/], Global_4263509[iParam0 /*84*/].f_65.f_16, Global_4263509[iParam0 /*84*/].f_1);
			break;
		
		case -494565059:
			unk_0xDFF49EE984E7AAE8(Global_4263509[iParam0 /*84*/].f_65.f_1);
			break;
		
		case 827308208:
			unk_0x5128DF14A5BB86FC(Global_4263509[iParam0 /*84*/].f_65.f_1);
			break;
		
		case -1857685192:
			unk_0x5517F90043466049(Global_4263509[iParam0 /*84*/].f_65.f_1);
			break;
		
		case 1698417709:
			unk_0x566FD402B25787DE(Global_4263509[iParam0 /*84*/].f_65.f_1);
			break;
		
		case -2017925037:
			unk_0xAC95ED552157E092(Global_4263509[iParam0 /*84*/].f_65.f_1);
			break;
		
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
			unk_0x973A9781A34F8DEB(Global_4263509[iParam0 /*84*/].f_65.f_1, Global_4263509[iParam0 /*84*/]);
			break;
		
		case -1693570755:
			unk_0x88BF9B612B84D3C3(Global_4263509[iParam0 /*84*/].f_65.f_1, 0, 1, &(Global_4263509[iParam0 /*84*/].f_13.f_26), Global_4263509[iParam0 /*84*/]);
			break;
		
		case 1727256317:
			unk_0xDEBBF584665411D0(Global_4263509[iParam0 /*84*/].f_65.f_1, &(Global_4263509[iParam0 /*84*/].f_13.f_26));
			break;
		
		case 1982688246:
			break;
	}
	if (func_13())
	{
		if (bParam1)
		{
			unk_0x60C298D6B0CFE707(Global_4263509[iParam0 /*84*/].f_65, &uVar3);
		}
	}
	func_7(iParam0);
}

int func_33(int iParam0, bool bParam1, bool bParam2)
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

int func_34(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263509[iVar0 /*84*/].f_65 == iParam0)
		{
			*uParam1 = { Global_4263509[iVar0 /*84*/] };
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_35(int iParam0)
{
	int iVar0;
	var uVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (Global_4267890[iParam0 /*12*/].f_1 == Global_4267890[iParam0 /*12*/].f_6)
	{
		if (Global_4267890[iParam0 /*12*/].f_1 != 1445302971 && Global_4267890[iParam0 /*12*/].f_1 != -1316591359)
		{
			return;
		}
	}
	iVar0 = 0;
	sVar2 = "Wardrobe";
	iVar0 = unk_0x36163153849DFDA1(sVar2);
	iVar0 = (iVar0 || func_37());
	iVar0 = (iVar0 + Global_4265840);
	func_36(&uVar1);
	iVar0 = (iVar0 || uVar1);
	unk_0xCE689A8E8C42ED78(&iVar0, 28);
	unk_0xCE689A8E8C42ED78(&iVar0, 29);
	unk_0xCE689A8E8C42ED78(&iVar0, 26);
	iVar3 = (Global_4267890[iParam0 /*12*/].f_9 && iVar0);
	iVar4 = (Global_4267890[iParam0 /*12*/].f_8 && iVar0);
	iVar5 = Global_4267890[iParam0 /*12*/].f_7;
	if (iVar5 == 0)
	{
		iVar5 = -2085313189;
	}
	if (((Global_4267890[iParam0 /*12*/] != Global_4267890[iParam0 /*12*/].f_5 || Global_4267890[iParam0 /*12*/].f_1 != Global_4267890[iParam0 /*12*/].f_6) || Global_4267890[iParam0 /*12*/].f_2 != iVar5) || Global_4267890[iParam0 /*12*/].f_3 != (iVar4 + iVar3))
	{
		Global_103267 = 1;
	}
}

int func_36(var uParam0)
{
	*uParam0 = shift_left(1, 2);
	return 5410420;
}

var func_37()
{
	return shift_left(1, 25);
}

int func_38()
{
	var uVar0;
	
	func_46(&uVar0);
	if (Global_1312844 == 0)
	{
		if (!unk_0xB331FCEB94EB05C8())
		{
			return 1;
		}
	}
	if (func_45())
	{
		return 1;
	}
	if (Global_2460852)
	{
		return 1;
	}
	if (func_44())
	{
		return 1;
	}
	if (func_43(157))
	{
		if (!func_42())
		{
			return 1;
		}
	}
	if (func_43(155))
	{
		return 1;
	}
	if (!unk_0x43E505744A9B715D())
	{
		return 1;
	}
	if (func_39() != 0)
	{
		if (unk_0x1BCDA92AD0A7835B(func_39()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_39()
{
	switch (func_41())
	{
		case 0:
			return func_40();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_40()
{
	switch (Global_2460954)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_41()
{
	return Global_25765;
}

bool func_42()
{
	return Global_2448756.f_586;
}

int func_43(int iParam0)
{
	if (unk_0x3AE20F34FEE6C258(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_44()
{
	return Global_2458613;
}

bool func_45()
{
	return Global_2448756.f_581;
}

void func_46(var uParam0)
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
					func_47(iVar0);
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

void func_47(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x286A5F0670063839(1, iParam0, &vVar0, 3))
	{
		if (func_33(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x378BD4B3881338C2(vVar0.y);
			if (unk_0x765F6FEEFF39224F(iVar1))
			{
				if (unk_0xF0D230FB550CD6EB(iVar1, 0))
				{
					iVar2 = unk_0xF2C96862595654B4(iVar1, 0);
					if (unk_0x8F6C3DD0BB146CA3(iVar2, vVar0.z) && unk_0xE36862B47CD70685())
					{
						if (func_48(iVar2, &bVar3))
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

int func_48(int iParam0, var uParam1)
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

void func_49()
{
	wait(0);
}

void func_50()
{
	func_51();
}

void func_51()
{
	unk_0x5894DC159447E10A();
}

void func_52(struct<33> Param0)
{
	if (Global_262145.f_23434)
	{
		func_50();
	}
	Local_22.f_65 = { Param0 };
	Local_22 = { Param0.f_19 };
	Local_22.f_13 = { Global_4263509[Param0.f_32 /*84*/].f_13 };
	iLocal_21 = Param0.f_32;
	if (Param0.f_32 < 0)
	{
		func_50();
	}
	if (!func_53(Param0, Param0.f_32))
	{
		func_7(Param0.f_32);
		func_50();
	}
	if (Local_22.f_65.f_2 != 0)
	{
		Local_22.f_65.f_2 = 1;
	}
}

int func_53(struct<18> Param0, var uParam1, int iParam2)
{
	if (Global_4263509[iParam2 /*84*/].f_65.f_1 != Param0.f_1)
	{
		return 0;
	}
	if (Global_4263509[iParam2 /*84*/].f_65.f_3 != Param0.f_3)
	{
		return 0;
	}
	if (Global_4263509[iParam2 /*84*/].f_65.f_4 != Param0.f_4)
	{
		return 0;
	}
	if (Global_4263509[iParam2 /*84*/].f_65.f_5 != Param0.f_5)
	{
		return 0;
	}
	if (Global_4263509[iParam2 /*84*/].f_65.f_6 != Param0.f_6)
	{
		return 0;
	}
	if (Global_4263509[iParam2 /*84*/].f_65.f_7 != Param0.f_7)
	{
		return 0;
	}
	if (Global_4263509[iParam2 /*84*/].f_65.f_14 != Param0.f_14)
	{
		return 0;
	}
	if (Global_4263509[iParam2 /*84*/].f_65.f_17 != Param0.f_17)
	{
		return 0;
	}
	return 1;
}

