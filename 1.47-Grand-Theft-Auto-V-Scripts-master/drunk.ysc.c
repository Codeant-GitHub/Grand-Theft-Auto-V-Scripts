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
	struct<5> Local_43 = { 0, 0, 0, 0, 0 } ;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	bool bLocal_46 = 0;
	bool bLocal_47 = 0;
	float fLocal_48 = 0f;
	float fLocal_49 = 0f;
	char* sLocal_50 = NULL;
	struct<5> Local_51 = { 0, 0, 0, 0, 0 } ;
	vector3 vLocal_52 = { 0f, 0f, 0f };
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	struct<5> Local_55 = { 0, 0, 0, 0, 0 } ;
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
	iLocal_44 = -1;
	iLocal_45 = -1;
	fLocal_48 = 1.7f;
	fLocal_49 = 0f;
	sLocal_50 = "";
	iLocal_53 = -1;
	if (unk_0x9EC5BDC006623C42(2))
	{
		func_164();
	}
	Local_43 = { ScriptParam_55 };
	func_163();
	func_162();
	func_157(iLocal_44, 0, 0);
	settimera(0);
	func_156();
	func_152();
	while (true)
	{
		wait(0);
		func_151(iLocal_44);
		func_150();
		func_148();
		func_141();
		func_157(iLocal_44, 0, 0);
		func_163();
		func_9();
		if ((unk_0xB331FCEB94EB05C8() && !unk_0x289064CB38B560AA()) && !func_8())
		{
			func_1();
		}
	}
}

void func_1()
{
	if (func_7() || func_6())
	{
		func_5();
		func_2();
	}
}

void func_2()
{
	if ((!func_4() && !func_3()) && Global_2449537)
	{
		Global_4456448.f_138474 = 0;
	}
}

bool func_3()
{
	return Global_2448756.f_579;
}

bool func_4()
{
	return Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_196 != 0;
}

void func_5()
{
	Global_2448756.f_644 = 1;
}

var func_6()
{
	return Global_2448756.f_623;
}

bool func_7()
{
	return unk_0x0E4018692D92041D(Global_2448756.f_2, 11);
}

bool func_8()
{
	return unk_0x0E4018692D92041D(Global_2449538.f_1.f_2810, 3);
}

void func_9()
{
	bool bVar0;
	
	if (unk_0xD62C4419A41F106A(Local_43.f_1, 0))
	{
		func_164();
	}
	if (bLocal_46)
	{
		if (!unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
		{
			func_164();
		}
	}
	func_140();
	bVar0 = true;
	switch (vLocal_52.x)
	{
		case 4:
			func_139();
			return;
		
		case 5:
			func_136();
			return;
		
		case 6:
			func_134();
			return;
		
		case 7:
			func_133();
			return;
		
		case 8:
			func_132();
			return;
		
		case 9:
			func_130();
			return;
		
		case 10:
			func_129();
			func_126();
			func_125();
			return;
		
		case 11:
			func_124();
			return;
		
		case 12:
			break;
		
		default:
			bVar0 = false;
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (!vLocal_52.x == 12)
	{
		return;
	}
	switch (vLocal_52.y)
	{
		case 1:
			if (!func_123())
			{
				func_112();
				func_126();
			}
			break;
		
		case 2:
			func_110();
			break;
		
		case 12:
			func_97();
			break;
		
		case 3:
			func_10();
			break;
		
		default:
			break;
	}
}

void func_10()
{
	var uVar0;
	char* sVar1;
	struct<53> Var2;
	int iVar3;
	
	if (!unk_0x0E4018692D92041D(Global_1671295.f_3, 27))
	{
		unk_0x27E510DC69CA08B6(Local_43.f_1, 3000, 3500, 0, 1, 1, 0);
	}
	Global_1666256 = 1;
	if (!unk_0xBB5E373390A5F824())
	{
		unk_0x7EDEAEAED85BEE4F(2500);
		while (unk_0x75A50A9E5219C397())
		{
			wait(0);
		}
	}
	if (unk_0xB331FCEB94EB05C8())
	{
		func_96(&uVar0, 0, 0);
		if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()) && !unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
		{
			unk_0x41C955C667F66F10(unk_0x33CD235DF1E6A94E(), 0, 1);
		}
		while ((unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()) && !unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0)) && unk_0xD0900A362AD1F7AA(unk_0x33CD235DF1E6A94E()))
		{
			wait(0);
		}
		unk_0xCE689A8E8C42ED78(&(Global_1671295.f_3), 27);
		func_85(unk_0x95B959F18401C09A(), 0, 57344, 0);
		Global_2405071.f_2668 = 1;
		if (unk_0x0E4018692D92041D(Global_1671295, 15))
		{
			unk_0xCE689A8E8C42ED78(&Global_1671295, 15);
		}
		if (unk_0x0E4018692D92041D(Global_1671295.f_2, 6))
		{
			unk_0xCE689A8E8C42ED78(&(Global_1671295.f_2), 6);
		}
		if (unk_0x09287BFEE1D9F6EF(unk_0x95B959F18401C09A(), 0))
		{
			Global_2405071.f_2669 = 1;
		}
		else
		{
			Global_2405071.f_2669 = 0;
		}
		if (unk_0xFB9E5CA1DFC10C99())
		{
			unk_0xA327C625224B4751(0);
		}
		if (func_81(1))
		{
			func_68(0);
		}
		func_66(1);
		func_164();
	}
	sVar1 = "";
	Var2.f_3 = 1064514355;
	Var2.f_30 = 1148829696;
	Var2.f_31 = 1148829696;
	Var2.f_52 = 1148829696;
	iVar3 = 7;
	switch (func_61())
	{
		case 0:
			if (func_59() != 2)
			{
				iVar3 = 0;
			}
			else
			{
				iVar3 = 1;
			}
			break;
		
		case 1:
			if (!func_58(126))
			{
				iVar3 = 2;
			}
			else
			{
				iVar3 = 3;
			}
			break;
		
		case 2:
			if (!func_57(4))
			{
				if (func_58(58))
				{
					iVar3 = 4;
				}
				if (func_58(59))
				{
					iVar3 = 5;
				}
				if (iVar3 == 7)
				{
					if (!func_56())
					{
						iVar3 = 4;
					}
					else
					{
						iVar3 = 5;
					}
				}
			}
			else
			{
				iVar3 = 6;
			}
			break;
	}
	switch (iVar3)
	{
		case 0:
			sVar1 = "DWC_MICHAEL_mansion";
			Var2 = "SAVEM_Default@";
			Var2.f_1 = "M_GetOut_R";
			Var2.f_2 = "M_GetOut_R_CAM";
			Var2.f_5 = { -814.181f, 181.1f, 75.74f };
			Var2.f_8 = { 0f, 0f, 21.1994f };
			Var2.f_4 = -1871534317;
			break;
		
		case 1:
			sVar1 = "DWC_MICHAEL_trailer";
			Var2 = "SAVECountryside@";
			Var2.f_1 = "M_GetOut_countryside";
			Var2.f_2 = "M_GetOut_countryside_CAM";
			Var2.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			Var2.f_8 = { 0f, 0f, 29.7938f };
			Var2.f_4 = -1871534317;
			break;
		
		case 2:
			sVar1 = "DWC_FRANKLIN_city";
			Var2 = "SWITCH@FRANKLIN@BED";
			Var2.f_1 = "Sleep_GetUp_RubEyes";
			Var2.f_2 = "Sleep_GetUp_RubEyes_CAM";
			Var2.f_5 = { -17.2168f, -1441.224f, 30.1015f };
			Var2.f_8 = { 0f, 0f, -179.653f };
			Var2.f_4 = -1871534317;
			break;
		
		case 3:
			sVar1 = "DWC_FRANKLIN_hills";
			Var2 = "SAVEBighouse@";
			Var2.f_1 = "F_GetOut_r_bighouse";
			Var2.f_2 = "F_GetOut_r_bighouse_CAM";
			Var2.f_5 = { -1.049f, 524.283f, 170.064f };
			Var2.f_8 = { 0f, 0f, 24f };
			Var2.f_4 = -1871534317;
			break;
		
		case 4:
			sVar1 = "DWC_TREVOR_trailer";
			Var2 = "SAVECountryside@";
			Var2.f_1 = "T_GetOut_countryside";
			Var2.f_2 = "T_GetOut_countryside_CAM";
			Var2.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			Var2.f_8 = { 0f, 0f, 29.7938f };
			Var2.f_4 = -1871534317;
			break;
		
		case 5:
			sVar1 = "DWC_TREVOR_beach";
			Var2 = "SAVEVeniceB@";
			Var2.f_1 = "T_GetOut_r_veniceB";
			Var2.f_2 = "T_GetOut_r_veniceB_CAM";
			Var2.f_5 = { -1148.438f, -1512.246f, 9.689f };
			Var2.f_8 = { 0f, 0f, 36.25f };
			Var2.f_4 = -1871534317;
			break;
		
		case 6:
			sVar1 = "DWC_TREVOR_stripclub";
			Var2 = "SAVECouch@";
			Var2.f_1 = "T_GetOut_couch";
			Var2.f_2 = "T_GetOut_couch_CAM";
			Var2.f_5 = { 94.53f, -1289.86f, 28.27f };
			Var2.f_8 = { 0f, 0f, 29.7938f };
			Var2.f_4 = -1871534317;
			break;
	}
	if (!unk_0xD62C4419A41F106A(Local_43.f_1, 0))
	{
		unk_0xBEADAF07D2339505(Local_43.f_1, Var2.f_5, 1, 0, 0, 1);
	}
	wait(500);
	StringCopy(&(Var2.f_11), "", 16);
	Var2.f_15 = -1f;
	func_12(sVar1, &Var2, "");
	func_11(126, 1);
	func_164();
}

void func_11(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_52236[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0xB331FCEB94EB05C8())
	{
		return;
	}
	if (Global_52236[iParam0 /*7*/])
	{
		unk_0x75D54ED6C1AD1642(Global_52236[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x12B6E23F244DDB0F(Global_52236[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_12(char* sParam0, var uParam1, char* sParam2)
{
	float fVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	var uVar9;
	int iVar10;
	int iVar11;
	char* sVar12;
	char* sVar13;
	char* sVar14;
	int iVar15;
	float fVar16;
	float fVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	float fVar21;
	vector3 vVar22;
	vector3 vVar23;
	float fVar24;
	float fVar25;
	float fVar26;
	vector3 vVar27;
	float fVar28;
	float fVar29;
	float fVar30;
	vector3 vVar31;
	vector3 vVar32;
	float fVar33;
	int iVar34;
	float fVar35;
	float fVar36;
	vector3 vVar37;
	float fVar38;
	float fVar39;
	float fVar40;
	vector3 vVar41;
	vector3 vVar42;
	float fVar43;
	int iVar44;
	bool bVar45;
	bool bVar46;
	int iVar47;
	
	fVar0 = 0f;
	unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), false, 0);
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		unk_0x9611832841071B69(unk_0x33CD235DF1E6A94E(), true);
	}
	unk_0x40EF19475E844CE3(uParam1->f_5, 4500f);
	unk_0x2532E297CF3112F2(uParam1->f_5, 4500f);
	unk_0xCE04CE961AF41AB9(uParam1->f_5, 5f, 1, 0, 0, false);
	unk_0xBEADAF07D2339505(unk_0x33CD235DF1E6A94E(), uParam1->f_5, 1, 0, 0, 1);
	unk_0xF70578F5CD9822CB(unk_0x33CD235DF1E6A94E(), true);
	wait(0);
	unk_0xD5CD4268EDE6F40E(1);
	unk_0x0483D0035D6E46FD(*uParam1);
	if (unk_0x786AF4A44E1B5B4B(uParam1->f_16))
	{
	}
	else
	{
		unk_0x0483D0035D6E46FD(uParam1->f_16);
	}
	if (!unk_0xBB5E373390A5F824())
	{
		unk_0x7EDEAEAED85BEE4F(0);
	}
	func_51(uParam1->f_5, uParam1->f_8.f_2, 0, 1);
	if (!unk_0xBB5E373390A5F824())
	{
		unk_0x7EDEAEAED85BEE4F(0);
	}
	iVar1 = unk_0xE3903F59E2F22150() + 20000;
	bVar2 = false;
	uParam1->f_33 = 0;
	while (!bVar2 && iVar1 > unk_0xE3903F59E2F22150())
	{
		bVar2 = true;
		unk_0x0483D0035D6E46FD(*uParam1);
		if (!unk_0xE9CCF312047EBEE0(*uParam1))
		{
			bVar2 = false;
		}
		if (!unk_0x786AF4A44E1B5B4B(uParam1->f_16))
		{
			unk_0x0483D0035D6E46FD(uParam1->f_16);
			if (!unk_0xE9CCF312047EBEE0(uParam1->f_16))
			{
				bVar2 = false;
			}
		}
		if (!unk_0xBB5E373390A5F824())
		{
			unk_0x7EDEAEAED85BEE4F(0);
		}
		wait(0);
	}
	func_48();
	if (!func_47(uParam1->f_22, 0f, 0f, 0f, 0))
	{
		unk_0x496BE3DBA113D228(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, false, 1);
		unk_0xB7350047030F7672(uParam1->f_5 + uParam1->f_19, (vmag(uParam1->f_22) + 25f), 0, 0, 0, 0, false, 0);
		unk_0xCE04CE961AF41AB9(uParam1->f_5 + uParam1->f_19, (vmag(uParam1->f_22) + 25f), 1, 0, 0, false);
	}
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		unk_0x117A9E054B0F10FB(unk_0x95B959F18401C09A());
		unk_0x274C6068B660FFB4(unk_0x33CD235DF1E6A94E(), joaat("weapon_unarmed"), true);
		unk_0x31826EF4A8BC8E9F(unk_0x33CD235DF1E6A94E());
	}
	unk_0xF70578F5CD9822CB(unk_0x33CD235DF1E6A94E(), false);
	unk_0xD5CD4268EDE6F40E(0);
	unk_0xCE04CE961AF41AB9(uParam1->f_5, 15f, 1, 0, 0, false);
	unk_0x27364C9AEEF636F2();
	unk_0x69EAA10DA1B594D6();
	func_45();
	while (func_44())
	{
		wait(0);
	}
	if (!unk_0x73DA1542B2F0C458() && !unk_0xD33DAC8D0D70A78C())
	{
		unk_0xACCDA78123DB57B0(250);
	}
	unk_0x476CFECD9A50C6EC(1);
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		iVar4 = unk_0x38A6890195DD00D1(uParam1->f_5, uParam1->f_8, 2);
		unk_0x6359F1F7F5174D4A(iVar4, 0);
		unk_0x34C803C2BC1CAFB2(iVar4, 0);
		iVar5 = unk_0x00E62F31D05EB2AC("DEFAULT_ANIMATED_CAMERA", 1);
		iVar6 = 4;
		if (uParam1->f_4 != -1871534317)
		{
			iVar6 |= 2;
		}
		func_42(unk_0x33CD235DF1E6A94E(), uParam1->f_18);
		unk_0x08798CBF817BA887(unk_0x33CD235DF1E6A94E(), iVar4, *uParam1, uParam1->f_1, 1000f, -1.5f, iVar6, 0, 1148846080, 0);
		unk_0xBA6145F0B26FEF64(unk_0x33CD235DF1E6A94E(), 1);
		unk_0xDB3AEB906AC134AB(unk_0x95B959F18401C09A(), 1);
		bVar3 = unk_0x712B120C5A12D9F5(unk_0x33CD235DF1E6A94E(), 77);
		unk_0x41E36A540F8F323F(unk_0x33CD235DF1E6A94E(), 77, true);
		unk_0x76909D790DDFDCE9(iVar5, iVar4, uParam1->f_2, *uParam1);
		unk_0x63F0B040CE6EDF0F(true, false, 3000, 1, 0, 0);
		if (!unk_0x786AF4A44E1B5B4B(uParam1->f_16) && !unk_0x786AF4A44E1B5B4B(uParam1->f_17))
		{
			unk_0x108754262311D34F(unk_0x33CD235DF1E6A94E(), uParam1->f_16, uParam1->f_17, 1000f, -1.5f, 10000, 33, 0, 0, 0, 0);
		}
	}
	else
	{
		iVar4 = -1;
	}
	if (!uParam1->f_25)
	{
		if (!unk_0x786AF4A44E1B5B4B(sParam2))
		{
			func_41(sParam2, -1);
			uParam1->f_25 = 1;
		}
	}
	bVar7 = false;
	bVar8 = false;
	uVar9 = 16;
	if (!unk_0x786AF4A44E1B5B4B(&(uParam1->f_11)))
	{
		iVar10 = func_61();
		iVar11 = -1;
		sVar12 = "";
		switch (iVar10)
		{
			case 0:
				iVar11 = 0;
				sVar12 = "MICHAEL";
				break;
			
			case 1:
				iVar11 = 1;
				sVar12 = "FRANKLIN";
				break;
			
			case 2:
				iVar11 = 2;
				sVar12 = "TREVOR";
				break;
			
			default:
				break;
		}
		func_40(&uVar9, iVar11, unk_0x33CD235DF1E6A94E(), sVar12, 0, 1);
	}
	if (unk_0xDB4C79A9697E6A55(iVar4))
	{
		sVar13 = "WalkInterruptible";
		sVar14 = "ForceBlendout";
		while (unk_0xDB4C79A9697E6A55(iVar4) && !unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
		{
			if (!bVar8)
			{
				if (!unk_0xBB5E373390A5F824())
				{
					if (!unk_0x786AF4A44E1B5B4B(uParam1->f_26))
					{
						unk_0x0B1F8038F56C12B7(uParam1->f_26, 0, 0);
						bVar8 = true;
					}
					if (!unk_0x786AF4A44E1B5B4B(uParam1->f_27))
					{
						if (!unk_0x786AF4A44E1B5B4B(uParam1->f_28))
						{
							unk_0x0F8EAEEC97DDBCB3(-1, uParam1->f_28, uParam1->f_27, 0);
							bVar8 = true;
						}
						if (!unk_0x786AF4A44E1B5B4B(uParam1->f_29))
						{
							unk_0x0F8EAEEC97DDBCB3(-1, uParam1->f_29, uParam1->f_27, 0);
							bVar8 = true;
						}
					}
				}
			}
			unk_0xF3F3DC87D7163212();
			unk_0x581AE7724ACAD410(18);
			unk_0x725D99CB808A3B4A();
			func_35(0);
			iVar15 = unk_0xE3903F59E2F22150();
			if (iVar15 >= (Global_36976 - 500))
			{
				func_34(4000);
			}
			fVar16 = -1f;
			fVar17 = -1f;
			fVar0 = unk_0x4EDDCE9AAE0FC976(iVar4);
			if (!unk_0x786AF4A44E1B5B4B(&(uParam1->f_11)))
			{
				if (!bVar7)
				{
					if (fVar0 >= uParam1->f_15)
					{
						if (func_22(&uVar9, "PRSAUD", &(uParam1->f_11), 3, 0, 0, 0))
						{
							bVar7 = true;
						}
					}
				}
			}
			iVar18 = 0;
			if (unk_0xFBEC827720F84540(unk_0x33CD235DF1E6A94E(), unk_0x36163153849DFDA1(sVar13)))
			{
				iVar19 = (unk_0xC6A1EC79D232D93C(2, 195) - 128);
				iVar20 = (unk_0xC6A1EC79D232D93C(2, 196) - 128);
				if (((iVar19 < 64 && iVar19 > -64) && iVar20 < 64) && iVar20 > -64)
				{
				}
				else
				{
					iVar18 = 1;
				}
			}
			else
			{
				fVar16 = -1f;
				fVar17 = -1f;
				iVar18 = 0;
				uParam1->f_3 = uParam1->f_3;
				fVar16 = fVar16;
				fVar17 = fVar17;
			}
			if (unk_0xB813DCBD5002BC42() == 4 && uParam1->f_52 > 0f)
			{
				if (fVar0 >= uParam1->f_52)
				{
					if (!uParam1->f_32)
					{
						fVar21 = 1.5f;
						vVar22 = { unk_0x8422CE67C0A53728() };
						vVar23 = { unk_0x61B226C460A8FCC2(unk_0x33CD235DF1E6A94E(), 31086, 0f, 0f, 0f) };
						fVar24 = unk_0x16E00F066AFFEA0D(vVar22, vVar23, true);
						fVar21 = func_21(fVar21, 0.001f, (fVar24 - 0.75f));
						if (fVar21 < 0f)
						{
							fVar21 = 0.001f;
						}
						func_20(&(uParam1->f_34), unk_0x33CD235DF1E6A94E(), func_61(), 1E-06f, 300, 300, 0, 0, 1045220557);
						func_19(&(uParam1->f_34), uParam1->f_53);
						if (!uParam1->f_33)
						{
							uParam1->f_34 = 1;
							uParam1->f_34.f_7 = unk_0xE3903F59E2F22150();
							uParam1->f_34.f_8 = 0;
							uParam1->f_33 = 1;
						}
						if (uParam1->f_57 == 999f)
						{
							uParam1->f_56 = 0f;
						}
						if (uParam1->f_57 == 999f)
						{
							vVar27 = { unk_0x8BE3F20792F38FEB(2) };
							fVar28 = unk_0xC472E34C8FBEC678(unk_0x33CD235DF1E6A94E());
							fVar29 = vVar27.z;
							fVar30 = fVar28;
							uParam1->f_57 = (fVar29 - fVar30);
							if (uParam1->f_57 < 360f)
							{
								uParam1->f_57 = (uParam1->f_57 + 360f);
							}
							if (uParam1->f_57 > 360f)
							{
								uParam1->f_57 = (uParam1->f_57 - 360f);
							}
						}
						fVar25 = uParam1->f_56;
						fVar26 = uParam1->f_57;
						unk_0xD6EDA274D82E8678(fVar25, 1065353216);
						unk_0xC7E6A5D90DED6E0B(fVar26);
						unk_0x07FC70EA5C123778(fVar25);
						unk_0xD0F81BF65194609F(fVar26);
						vVar31 = { unk_0x8422CE67C0A53728() };
						vVar32 = { unk_0x69E12C716D4FB8BB() };
						fVar33 = unk_0x16E00F066AFFEA0D(vVar31, vVar32, true);
						iVar34 = round((fVar33 * 1000f));
						uParam1->f_32 = 1;
					}
					if (uParam1->f_32)
					{
						unk_0xFD435B95C49E4547();
						if (func_16(&(uParam1->f_34), 1, 1, 1, 0, 0, 0))
						{
						}
					}
				}
			}
			if (unk_0xFBEC827720F84540(unk_0x33CD235DF1E6A94E(), unk_0x36163153849DFDA1(sVar14)) || iVar18)
			{
				if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
				{
					unk_0xED68CDDDE25A144E(unk_0x33CD235DF1E6A94E());
					switch (uParam1->f_4)
					{
						case -1871534317:
							unk_0x13C3FE558ED056EE(unk_0x33CD235DF1E6A94E(), -1871534317, 1, 0, 0);
							unk_0x3AAF29F17A3F9825(0, 0, 3, 0);
							break;
						
						case -668482597:
							unk_0x13C3FE558ED056EE(unk_0x33CD235DF1E6A94E(), -668482597, 1, 0, 0);
							unk_0x0E7A95202BF2383F(unk_0x95B959F18401C09A(), 1f, 500, 0, 1, 0);
							if (unk_0xB813DCBD5002BC42() != 4)
							{
								if (uParam1->f_31 == 999f)
								{
									uParam1->f_30 = 0f;
								}
								if (uParam1->f_31 == 999f)
								{
									vVar37 = { unk_0x8BE3F20792F38FEB(2) };
									fVar38 = unk_0xC472E34C8FBEC678(unk_0x33CD235DF1E6A94E());
									fVar39 = vVar37.z;
									fVar40 = fVar38;
									uParam1->f_31 = (fVar39 - fVar40);
									if (uParam1->f_31 < 360f)
									{
										uParam1->f_31 = (uParam1->f_31 + 360f);
									}
									if (uParam1->f_31 > 360f)
									{
										uParam1->f_31 = (uParam1->f_31 - 360f);
									}
								}
								fVar35 = uParam1->f_30;
								fVar36 = uParam1->f_31;
								unk_0xD6EDA274D82E8678(fVar35, 1065353216);
								unk_0xC7E6A5D90DED6E0B(fVar36);
								vVar41 = { unk_0x8422CE67C0A53728() };
								vVar42 = { unk_0x69E12C716D4FB8BB() };
								fVar43 = unk_0x16E00F066AFFEA0D(vVar41, vVar42, true);
								iVar44 = round((fVar43 * 1000f));
								unk_0x63F0B040CE6EDF0F(false, true, iVar44, 0, 0, 0);
							}
							break;
						
						default:
							break;
					}
					if (unk_0xDB4C79A9697E6A55(iVar4))
					{
						unk_0xC94F9717AA77D4D0(iVar4);
						iVar4 = -1;
					}
				}
			}
			wait(0);
		}
	}
	if (!func_47(uParam1->f_22, 0f, 0f, 0f, 0))
	{
		unk_0xF699E61158861D53(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 1);
	}
	unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), true, 0);
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		unk_0xED68CDDDE25A144E(unk_0x33CD235DF1E6A94E());
	}
	bVar45 = unk_0x9270A1E407520471();
	bVar46 = false;
	if (uParam1->f_32)
	{
		unk_0xFD435B95C49E4547();
		if (!func_16(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
		{
			bVar46 = true;
		}
	}
	if (bVar45 || bVar46)
	{
		while ((bVar45 || bVar46) && !unk_0x71EC91BA8C88BCE0())
		{
			if (bVar45)
			{
			}
			if (bVar46)
			{
			}
			iVar47 = 2;
			func_15(1, 26, &iVar47);
			func_15(1, 79, &iVar47);
			func_15(1, 1, &iVar47);
			func_15(1, 2, &iVar47);
			func_15(0, 22, &iVar47);
			func_15(0, 36, &iVar47);
			func_15(0, 142, &iVar47);
			func_15(0, 141, &iVar47);
			func_15(0, 140, &iVar47);
			func_15(0, 263, &iVar47);
			func_15(0, 264, &iVar47);
			wait(0);
			bVar45 = unk_0x9270A1E407520471();
			bVar46 = false;
			if (uParam1->f_32)
			{
				unk_0xFD435B95C49E4547();
				if (!func_16(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
				{
					bVar46 = true;
				}
			}
		}
	}
	if (!unk_0x786AF4A44E1B5B4B(uParam1->f_16))
	{
		unk_0xFF2DEA68E2D3602E(uParam1->f_16);
	}
	unk_0xFF2DEA68E2D3602E(*uParam1);
	unk_0x2F8A4DF7D0DFF0A8(iVar5, 0);
	func_13(&(uParam1->f_34));
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		unk_0x41E36A540F8F323F(unk_0x33CD235DF1E6A94E(), 77, bVar3);
		unk_0x9611832841071B69(unk_0x33CD235DF1E6A94E(), false);
	}
	sParam0 = sParam0;
}

void func_13(var uParam0)
{
	func_14(uParam0);
	*uParam0 = 0;
	uParam0->f_9 = { 0f, 0f, 0f };
}

void func_14(var uParam0)
{
	if (unk_0x117DAF3BF7232886(uParam0->f_1))
	{
		unk_0x2F8A4DF7D0DFF0A8(uParam0->f_1, 0);
	}
	if (unk_0x117DAF3BF7232886(uParam0->f_2))
	{
		unk_0x2F8A4DF7D0DFF0A8(uParam0->f_2, 0);
	}
	if (unk_0x117DAF3BF7232886(uParam0->f_3))
	{
		unk_0x2F8A4DF7D0DFF0A8(uParam0->f_3, 0);
	}
	if (unk_0x117DAF3BF7232886(uParam0->f_4))
	{
		unk_0x2F8A4DF7D0DFF0A8(uParam0->f_4, 0);
	}
}

void func_15(int iParam0, int iParam1, int iParam2)
{
	unk_0x3FD9339AA95E323F(iParam0, iParam1, 1);
	*iParam2++;
}

int func_16(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	float fVar7;
	
	switch (*uParam0)
	{
		case 0:
			func_17();
			if (!unk_0xD62C4419A41F106A(uParam0->f_5, 0))
			{
				func_14(uParam0);
				vVar0 = { unk_0x8422CE67C0A53728() };
				if (bParam1)
				{
					vVar0 = { vVar0 + unk_0x43D8A2CCB19FE8A8(uParam0->f_5) * FtoV(unk_0x7C475FA8D877007F()) };
				}
				vVar1 = { unk_0x16068053F8800179(uParam0->f_5, vVar0) };
				vVar2 = { unk_0x8BE3F20792F38FEB(2) };
				vVar3 = { vVar2 + uParam0->f_9 };
				vVar4 = { vVar3 - unk_0x60B5C1FD066CB864(uParam0->f_5, 2) };
				vVar5 = { (-sin(vVar3.z) * cos(vVar3.x)), (cos(vVar3.z) * cos(vVar3.x)), sin(vVar3.x) };
				vVar6 = { (-sin(vVar4.z) * cos(vVar4.x)), (cos(vVar4.z) * cos(vVar4.x)), sin(vVar4.x) };
				fVar7 = unk_0xB767426878B17869();
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					uParam0->f_3 = unk_0x8E09C0735236F309(1775630800, 0);
				}
				uParam0->f_1 = unk_0x8E09C0735236F309(26379945, 1);
				if (bParam1)
				{
					unk_0x5A488F57F21B3451(uParam0->f_1, uParam0->f_5, vVar1, 1);
				}
				else
				{
					unk_0xFA3130C046AC45A7(uParam0->f_1, vVar0);
				}
				unk_0x833A05A7AD82EA44(uParam0->f_1, vVar2, 2);
				unk_0x63B608CD1957089E(uParam0->f_1, fVar7);
				uParam0->f_2 = unk_0x8E09C0735236F309(26379945, 1);
				if (bParam1 && !bParam4)
				{
					unk_0x5A488F57F21B3451(uParam0->f_2, uParam0->f_5, vVar1 + vVar6 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12), 1);
				}
				else
				{
					unk_0xFA3130C046AC45A7(uParam0->f_2, vVar0 + vVar5 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12));
				}
				unk_0x833A05A7AD82EA44(uParam0->f_2, vVar2, 2);
				unk_0x63B608CD1957089E(uParam0->f_2, fVar7);
				if (uParam0->f_17 > 0 && iParam6 == 0)
				{
					uParam0->f_4 = unk_0x8E09C0735236F309(26379945, 1);
					if (bParam1 && !bParam4)
					{
						unk_0x5A488F57F21B3451(uParam0->f_4, uParam0->f_5, vVar1 + vVar6 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13), 1);
					}
					else
					{
						unk_0xFA3130C046AC45A7(uParam0->f_4, vVar0 + vVar5 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13));
					}
					unk_0x833A05A7AD82EA44(uParam0->f_4, vVar2, 2);
					unk_0x63B608CD1957089E(uParam0->f_4, fVar7);
				}
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					unk_0x09723AB7C299F4A6(uParam0->f_3, uParam0->f_1, 0, 2);
					if (iParam6 == 0)
					{
						unk_0x09723AB7C299F4A6(uParam0->f_3, uParam0->f_4, uParam0->f_17, 2);
					}
					unk_0x09723AB7C299F4A6(uParam0->f_3, uParam0->f_2, (uParam0->f_14 - uParam0->f_17), 2);
					unk_0xBAA621DD1913585A(uParam0->f_3, iParam6);
					unk_0x189377BFBDC9127F(uParam0->f_3, true);
				}
				else
				{
					unk_0x8EB023915CEEDB99(uParam0->f_2, uParam0->f_1, uParam0->f_14, 2, 2);
				}
				unk_0x63F0B040CE6EDF0F(true, false, 3000, 1, 0, 0);
				uParam0->f_7 = unk_0xE3903F59E2F22150();
				uParam0->f_8 = 0;
				*uParam0 = 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 1:
			func_17();
			if (bParam3)
			{
				if (!uParam0->f_8)
				{
					if (unk_0xE3903F59E2F22150() >= (uParam0->f_7 + uParam0->f_16))
					{
						if (bParam5)
						{
							switch (uParam0->f_6)
							{
								case 1:
									unk_0x0B1F8038F56C12B7("CamPushInFranklin", 0, 0);
									break;
								
								case 0:
									unk_0x0B1F8038F56C12B7("CamPushInMichael", 0, 0);
									break;
								
								case 2:
									unk_0x0B1F8038F56C12B7("CamPushInTrevor", 0, 0);
									break;
							}
						}
						else
						{
							unk_0x0B1F8038F56C12B7("CamPushInNeutral", 0, 0);
						}
						unk_0x0F8EAEEC97DDBCB3(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						uParam0->f_8 = 1;
					}
				}
			}
			if (unk_0xE3903F59E2F22150() >= (uParam0->f_7 + uParam0->f_15))
			{
				if (bParam2)
				{
					func_14(uParam0);
					unk_0x63F0B040CE6EDF0F(false, false, 3000, 1, 0, 0);
				}
				return 1;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

void func_17()
{
	unk_0x818D1850BE9E44A9();
	func_18();
}

void func_18()
{
	Global_17272.f_134 = 1;
}

void func_19(var uParam0, vector3 vParam1)
{
	uParam0->f_9 = { vParam1 };
}

void func_20(var uParam0, int iParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	uParam0->f_5 = iParam1;
	uParam0->f_6 = iParam2;
	uParam0->f_12 = fParam3;
	uParam0->f_14 = iParam4;
	uParam0->f_15 = iParam5;
	uParam0->f_16 = iParam6;
	uParam0->f_17 = iParam7;
	uParam0->f_13 = iParam8;
}

float func_21(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_22(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_33(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_23(sParam2, iParam3, 0);
}

int func_23(char* sParam0, int iParam1, bool bParam2)
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
					func_32();
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
		if (func_31(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_30();
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
				func_28();
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
				if (func_27())
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
			if (func_26())
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
			func_25();
			Global_15876 = bParam2;
		}
		Global_15868 = iParam1;
		StringCopy(&Global_15485, sParam0, 24);
		Global_14732 = 0;
		func_24();
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
		func_32();
	}
	return 0;
}

void func_24()
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

void func_25()
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

int func_26()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_27()
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

void func_28()
{
	if (func_29(14))
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
		Global_14553 = func_61();
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

bool func_29(int iParam0)
{
	return Global_36425 == iParam0;
}

void func_30()
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

bool func_31(int iParam0, int iParam1)
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

void func_32()
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

void func_33(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15320 = { *uParam0 };
	Global_1739 = iParam1;
	StringCopy(&Global_15936, sParam2, 24);
	Global_16855 = uParam5;
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

void func_34(int iParam0)
{
	Global_36976 = (unk_0xE3903F59E2F22150() + iParam0);
}

void func_35(int iParam0)
{
	if (func_39())
	{
		return;
	}
	if (!Global_14553.f_1 == 1)
	{
		if (func_38(0))
		{
			func_36(iParam0);
		}
		unk_0x8950ED5730F62EE8(&Global_2424, 2);
	}
}

void func_36(int iParam0)
{
	if (func_39())
	{
		return;
	}
	if (Global_14725)
	{
		func_37(0, 0);
	}
	if (Global_14553.f_1 == 10 || Global_14553.f_1 == 9)
	{
		unk_0x8950ED5730F62EE8(&Global_2424, 16);
	}
	if (unk_0xA30F14B621E3269D())
	{
		unk_0xD92171BC6C48DB90(false);
	}
	Global_15866 = 5;
	if (iParam0 == 1)
	{
		unk_0x8950ED5730F62EE8(&Global_2423, 30);
	}
	else
	{
		unk_0xCE689A8E8C42ED78(&Global_2423, 30);
	}
	if (!func_26())
	{
		Global_14553.f_1 = 3;
	}
}

void func_37(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_38(0))
		{
			Global_14725 = 1;
			if (bParam1)
			{
				unk_0x4951EE4BB7B6B4F7(&Global_14490);
			}
			Global_14481 = { Global_14499[Global_14498 /*3*/] };
			unk_0x727F454F1D40BAE4(Global_14481);
		}
	}
	else if (Global_14725 == 1)
	{
		Global_14725 = 0;
		Global_14481 = { Global_14506[Global_14498 /*3*/] };
		if (bParam1)
		{
			unk_0x727F454F1D40BAE4(Global_14490);
		}
		else
		{
			unk_0x727F454F1D40BAE4(Global_14481);
		}
	}
}

int func_38(int iParam0)
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

bool func_39()
{
	return unk_0x0E4018692D92041D(Global_1681628, 19);
}

void func_40(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_41(char* sParam0, int iParam1)
{
	unk_0x37621D6689F9E3C3(sParam0);
	unk_0x092150016C06C431(0, 0, true, iParam1);
}

void func_42(int iParam0, var uParam1)
{
	if (func_43(uParam1, 1))
	{
		unk_0x25C292B90705215C(iParam0, "HOSPITAL_0", 0f, 1f);
	}
	if (func_43(uParam1, 2))
	{
		unk_0x25C292B90705215C(iParam0, "HOSPITAL_1", 0f, 1f);
	}
	if (func_43(uParam1, 4))
	{
		unk_0x25C292B90705215C(iParam0, "HOSPITAL_2", 0f, 1f);
	}
	if (func_43(uParam1, 8))
	{
		unk_0x25C292B90705215C(iParam0, "HOSPITAL_3", 0f, 1f);
	}
	if (func_43(uParam1, 16))
	{
		unk_0x25C292B90705215C(iParam0, "HOSPITAL_4", 0f, 1f);
	}
	if (func_43(uParam1, 32))
	{
		unk_0x25C292B90705215C(iParam0, "HOSPITAL_5", 0f, 1f);
	}
	if (func_43(uParam1, 64))
	{
		unk_0x25C292B90705215C(iParam0, "HOSPITAL_6", 0f, 1f);
	}
	if (func_43(uParam1, 128))
	{
		unk_0x25C292B90705215C(iParam0, "HOSPITAL_7", 0f, 1f);
	}
	if (func_43(uParam1, 256))
	{
		unk_0x25C292B90705215C(iParam0, "HOSPITAL_8", 0f, 1f);
	}
	if (func_43(uParam1, 512))
	{
		unk_0x25C292B90705215C(iParam0, "HOSPITAL_9", 0f, 1f);
	}
	if (func_43(uParam1, 0))
	{
	}
}

bool func_43(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_44()
{
	if (((Global_93682 == 13 || Global_93682 == 10) || Global_93682 == 11) || Global_93682 == 12)
	{
		return 0;
	}
	return 1;
}

void func_45()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_90645[iVar0 /*17*/] && !Global_90645[iVar0 /*17*/].f_1)
		{
			if (Global_90645[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_90645[iVar0 /*17*/].f_5 != 88 && Global_90645[iVar0 /*17*/].f_5 != 89) && Global_90645[iVar0 /*17*/].f_5 != 92)
				{
					func_46(Global_90645[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_46(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_87697[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_87697[iParam0 /*2*/] = 0;
	}
}

bool func_47(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

void func_48()
{
	func_49();
	func_66(1);
}

void func_49()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		iVar1 = Global_37371[iVar0 /*5*/];
		if (!iVar1 == -1)
		{
			func_157(1, iVar1, 1);
		}
		iVar0++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_37345[iVar2 /*5*/] == 0)
		{
			func_50(iVar2);
		}
		iVar2++;
	}
}

void func_50(int iParam0)
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

int func_51(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
	{
		func_55(0);
		unk_0xCE04CE961AF41AB9(vParam0, 5f, 1, 0, 0, false);
		if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
		{
			if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
			{
				unk_0xBEADAF07D2339505(unk_0x33CD235DF1E6A94E(), vParam0, 1, 0, 0, 1);
				unk_0x3C990C409B3845DE(unk_0x33CD235DF1E6A94E(), fParam1);
				unk_0xD6EDA274D82E8678(0f, 1065353216);
				unk_0xC7E6A5D90DED6E0B(0f);
			}
		}
		unk_0x1F6A09AE9372AE6C(vParam0, 4500f, 0);
		wait(0);
		unk_0xCE04CE961AF41AB9(vParam0, 5000f, 1, 0, 0, false);
		unk_0xBAE549A63F38DAE8(vParam0, 5000f, 0);
		unk_0x40EF19475E844CE3(vParam0, 5000f);
		unk_0x2532E297CF3112F2(vParam0, 5000f);
		func_54();
		func_53();
		settimera(0);
		func_55(1);
		if (!unk_0xE980BAFD70E8A4B3())
		{
			while (!unk_0x1F6A09AE9372AE6C(vParam0, 4500f, 0))
			{
				wait(0);
				if (timera() > 2000)
				{
					unk_0xD5CD4268EDE6F40E(0);
					return 0;
				}
			}
		}
		settimera(0);
		while (!unk_0x4E1190A8D88ABDB7())
		{
			wait(0);
			if (timera() > 20000)
			{
				unk_0xD5CD4268EDE6F40E(0);
				if (unk_0xE980BAFD70E8A4B3())
				{
					unk_0x4ABB9EF39DA515D7();
				}
				return 0;
			}
		}
		if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
		{
			if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
			{
				if (unk_0xE980BAFD70E8A4B3())
				{
					unk_0x4ABB9EF39DA515D7();
				}
				unk_0xD5CD4268EDE6F40E(0);
				settimera(0);
				unk_0x27364C9AEEF636F2();
				if (iParam3 == 1)
				{
					unk_0x69EAA10DA1B594D6();
				}
				else
				{
					settimera(5000);
				}
				unk_0x83AF8B1B51F18CD7();
			}
		}
		while ((!unk_0x8AD0FDC5DE116E81() && !func_52()) && timera() < 1500)
		{
			wait(0);
		}
		if (timera() > 1500)
		{
			if (iParam3 == 1)
			{
			}
		}
		if (iParam2 == 1)
		{
			unk_0x8C1596BAD35D957A(vParam0, &(vParam0.f_2), 0, 0);
			unk_0xCE04CE961AF41AB9(vParam0, 5f, 1, 0, 0, false);
			if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
			{
				if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
				{
					unk_0xBEADAF07D2339505(unk_0x33CD235DF1E6A94E(), vParam0, 1, 0, 0, 1);
					unk_0x3C990C409B3845DE(unk_0x33CD235DF1E6A94E(), fParam1);
				}
			}
		}
		unk_0xD6EDA274D82E8678(0f, 1065353216);
		unk_0xC7E6A5D90DED6E0B(0f);
		func_55(0);
		return 1;
	}
	func_55(0);
	return 0;
}

bool func_52()
{
	return !Global_70409.f_553;
}

void func_53()
{
	Global_70409.f_553 = 1;
	Global_70409.f_554 = 0;
}

void func_54()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		Global_70409[iVar0] = 0;
		iVar0++;
	}
}

void func_55(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!unk_0x0E4018692D92041D(Global_93682.f_20, 2))
			{
				unk_0xD5CD4268EDE6F40E(1);
				unk_0x8950ED5730F62EE8(&(Global_93682.f_20), 2);
			}
		}
		else if (unk_0x0E4018692D92041D(Global_93682.f_20, 2))
		{
			unk_0xD5CD4268EDE6F40E(0);
			unk_0xCE689A8E8C42ED78(&(Global_93682.f_20), 2);
		}
	}
}

int func_56()
{
	if (unk_0x0E4018692D92041D(unk_0x9EC3B269A34A2BEE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

bool func_57(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_106565.f_7223[iParam0], 0);
}

int func_58(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_106565.f_9079.f_99.f_58[iParam0];
}

int func_59()
{
	if (Global_33790[11] == 1)
	{
		return 4;
	}
	if (!func_60(21))
	{
		return 0;
	}
	if (!func_58(130))
	{
		return 1;
	}
	if (!func_58(131))
	{
		return 2;
	}
	if (!func_60(22))
	{
		return 1;
	}
	if (!func_60(49))
	{
		return 3;
	}
	if (!func_60(28))
	{
		return 1;
	}
	return 3;
}

int func_60(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_106565.f_9079.f_330[iParam0 /*6*/];
}

int func_61()
{
	func_62();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_62()
{
	int iVar0;
	
	if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
	{
		if (func_65(Global_106565.f_2357.f_539.f_4321) != unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()))
		{
			iVar0 = func_64(unk_0x33CD235DF1E6A94E());
			if (func_63(iVar0) && (!func_29(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_63(Global_106565.f_2357.f_539.f_4321))
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

bool func_63(int iParam0)
{
	return iParam0 < 3;
}

int func_64(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		iVar1 = unk_0x541D5C57194E73C4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_65(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_65(int iParam0)
{
	if (func_63(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_66(bool bParam0)
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
	func_67();
}

void func_67()
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

void func_68(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_262145.f_17567;
			break;
		
		case 1:
			iVar0 = Global_262145.f_17557;
			break;
		
		case 2:
			iVar0 = Global_262145.f_17568;
			break;
		
		case 3:
			iVar0 = Global_262145.f_17560;
			break;
		
		case 4:
			iVar0 = Global_262145.f_17556;
			break;
		
		case 6:
			iVar0 = 3;
			break;
		
		case 7:
			iVar0 = Global_262145.f_17571;
			break;
		
		case 8:
			iVar0 = Global_262145.f_17572;
			break;
		
		case 9:
			iVar0 = Global_262145.f_17575;
			break;
		
		case 22:
			iVar0 = Global_262145.f_17576;
			break;
		
		case 23:
			iVar0 = Global_262145.f_17569;
			break;
		
		case 25:
			iVar0 = Global_262145.f_18457;
			break;
		
		case 26:
			iVar0 = Global_262145.f_18456;
			break;
	}
	if (iVar0 != 0)
	{
		unk_0x27AA661817723FCB(func_79(func_80()), func_77(func_80()), func_76(), func_75(), iParam0, iVar0);
	}
	func_74(iVar0);
	func_69(iVar0);
}

void func_69(int iParam0)
{
	int iVar0;
	
	iVar0 = func_73(3968, -1, 0);
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
	func_70(3968, iVar0, -1, 1, 0);
}

void func_70(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_71(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x12B6E23F244DDB0F(iVar0, iParam1, iParam3);
	}
}

int func_71(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_72();
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

int func_72()
{
	return Global_1312745;
}

int func_73(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_71(iParam1)];
	if (unk_0x75D54ED6C1AD1642(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_74(int iParam0)
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

int func_75()
{
	if (Global_1669366.f_3 != 0)
	{
		return Global_1669366.f_3;
	}
	return -1;
}

int func_76()
{
	if (Global_1669366.f_2 != 0)
	{
		return Global_1669366.f_2;
	}
	return -1;
}

int func_77(int iParam0)
{
	if (iParam0 == func_78())
	{
		return -1;
	}
	return Global_1626536[iParam0 /*603*/].f_11.f_8[1];
}

int func_78()
{
	return -1;
}

int func_79(int iParam0)
{
	if (iParam0 == func_78())
	{
		return -1;
	}
	return Global_1626536[iParam0 /*603*/].f_11.f_8[0];
}

int func_80()
{
	return Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11;
}

bool func_81(bool bParam0)
{
	return func_82(unk_0x95B959F18401C09A(), bParam0);
}

int func_82(int iParam0, bool bParam1)
{
	return func_83(iParam0, bParam1, 1);
}

int func_83(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_78())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_84(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1626536[iParam0 /*603*/].f_11;
	if (iVar0 != func_78() && Global_1626536[iVar0 /*603*/].f_11.f_447 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_84(int iParam0, int iParam1)
{
	if (iParam0 != func_78())
	{
		if (Global_1626536[iParam0 /*603*/].f_11 != func_78())
		{
			if (Global_1626536[iParam0 /*603*/].f_11 == iParam0 && Global_1626536[iParam0 /*603*/].f_11.f_447 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_85(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
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
	int iVar25;
	int iVar26;
	
	if (bParam1)
	{
		if (unk_0xC78552DAEE19D97B())
		{
			unk_0x05CFB4D665C2A88D(false);
		}
	}
	if (func_95())
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
	if (!unk_0xB331FCEB94EB05C8())
	{
		iVar0 = iParam2;
		unk_0x3449EA232F9B8EAD(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = iParam2 & 2 != false;
		bVar2 = iParam2 & 4 != false;
		bVar3 = iParam2 & 8 != false;
		bVar4 = iParam2 & 16 != false;
		bVar5 = iParam2 & 32 != false;
		bVar6 = iParam2 & 64 != false;
		bVar7 = iParam2 & 128 != false;
		bVar8 = iParam2 & 256 != false;
		bVar9 = iParam2 & 512 != false;
		bVar10 = iParam2 & 1024 != false;
		bVar11 = iParam2 & 2048 != false;
		bVar12 = iParam2 & 4096 != false;
		bVar13 = iParam2 & 8192 != false;
		bVar14 = iParam2 & 16384 != false;
		bVar15 = iParam2 & 32768 != false;
		bVar16 = iParam2 & 65536 != false;
		bVar17 = iParam2 & 131072 != false;
		bVar18 = iParam2 & 262144 != false;
		bVar19 = iParam2 & 524288 != false;
		bVar20 = iParam2 & 1048576 != false;
		bVar21 = iParam2 & 2097152 != false;
		bVar22 = iParam2 & 4194304 != false;
		bVar23 = iParam2 & 8388608 != false;
		if (!func_93())
		{
			bVar24 = false;
			if (bParam1 == 1)
			{
				bVar24 = true;
			}
			if (bVar15 == 0 && !bVar20)
			{
				bVar24 = true;
			}
			if (bVar9 == 1)
			{
				bVar24 = true;
			}
			if (bVar24)
			{
				return;
			}
		}
		if (bVar17)
		{
		}
		if (unk_0xC4DEA49C5B465481(iParam0) && (unk_0xF272A2699B521CE6(iParam0) || iParam3 == 1))
		{
			if (iParam3 && unk_0xD62C4419A41F106A(unk_0x378BD4B3881338C2(iParam0), 0))
			{
				return;
			}
			iVar25 = unk_0x378BD4B3881338C2(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0xB331FCEB94EB05C8())
				{
					unk_0x7FB656A6AFE2A7A8(1);
				}
				else if (bVar13 || (!func_91(unk_0x95B959F18401C09A(), 0) && !func_90()))
				{
					unk_0x0CDD28A9DFCE2FCE(iVar25, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (unk_0xB331FCEB94EB05C8() && !bVar18)
					{
						unk_0x7FB656A6AFE2A7A8(0);
					}
					Global_2424047[iParam0 /*416*/].f_244 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_89(iVar25) && !unk_0x67E42C11097164BA(iVar25))
				{
					if (!bVar21)
					{
						unk_0x23298AB8A7D0F403(iVar25, true, 0);
					}
				}
				if (!unk_0x9F4718FD61B07058(iVar25))
				{
					if (!bVar20)
					{
						unk_0xF70578F5CD9822CB(iVar25, false);
					}
					unk_0xFE8201EFB515D77B(iVar25, 1);
				}
				else if (!bVar20)
				{
					unk_0xF70578F5CD9822CB(iVar25, false);
				}
				unk_0xF0BE7CB40DE62A2F(iVar25, true);
				unk_0xF23201C524E43F1C(iParam0, 0);
				unk_0x1B9C92466C9CAC2A(iParam0, 0);
				if (unk_0x055C6611FF8B993C(iVar25) && unk_0x7B3767E83E6F888A(iVar25))
				{
					unk_0x1130EB06CDE2ECD0(iVar25);
				}
				unk_0xC2A270E9C5578803(iVar25, 1);
				if (unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A()) == 0)
				{
					func_88();
					func_87();
				}
				if (unk_0x5D1B43675B257F3A())
				{
					if (!bVar22)
					{
					}
				}
				if (unk_0xE980BAFD70E8A4B3())
				{
				}
				Global_2424047[iParam0 /*416*/].f_245 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
				if (Global_2405071.f_2668)
				{
					Global_2405071.f_2668 = 0;
				}
			}
			else
			{
				if (!func_89(iVar25) && !unk_0x67E42C11097164BA(iVar25))
				{
					if (!bVar21)
					{
						unk_0x23298AB8A7D0F403(iVar25, !bVar14, 0);
					}
					if (!unk_0x9F4718FD61B07058(iVar25))
					{
						if (!bVar20)
						{
							unk_0xF70578F5CD9822CB(iVar25, bVar15);
						}
						if (!bVar15)
						{
							unk_0xFE8201EFB515D77B(iVar25, 1);
						}
					}
					if (func_86(Global_4456448.f_161209))
					{
						unk_0xF70578F5CD9822CB(iVar25, true);
					}
				}
				if (Global_1312844)
				{
					bVar9 = false;
				}
				if (bVar9)
				{
					unk_0xF23201C524E43F1C(iParam0, 0);
				}
				else
				{
					unk_0xF23201C524E43F1C(iParam0, 1);
				}
				unk_0xF0BE7CB40DE62A2F(iVar25, bVar16);
				if (bVar2)
				{
					if (!unk_0x691E8EF7DCB53AAD(iVar25) && !unk_0xF0D230FB550CD6EB(iVar25, 0))
					{
						unk_0x31826EF4A8BC8E9F(iVar25);
					}
				}
			}
			iVar26 = 0;
			if (bVar1)
			{
				iVar26 |= 2;
			}
			if (bVar2)
			{
				iVar26 |= 4;
			}
			if (bVar3)
			{
				iVar26 |= 8;
			}
			if (bVar4)
			{
				iVar26 |= 16;
			}
			if (bVar5)
			{
				iVar26 |= 32;
			}
			if (bVar6)
			{
				iVar26 |= 64;
			}
			if (bVar7)
			{
				iVar26 |= 128;
			}
			if (bVar8)
			{
				iVar26 |= 256;
			}
			if (bVar9)
			{
				iVar26 |= 512;
			}
			if (bVar10)
			{
				iVar26 |= 1024;
			}
			if (bVar11)
			{
				iVar26 |= 2048;
			}
			if (bVar12)
			{
				iVar26 |= 4096;
			}
			unk_0x3449EA232F9B8EAD(iParam0, bParam1, iVar26);
		}
	}
}

bool func_86(int iParam0)
{
	return iParam0 == 17;
}

void func_87()
{
	vector3 vVar0;
	
	Global_2437364.f_1232 = 0;
	Global_2437364.f_1233 = 0;
	Global_2437364.f_1234 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2437364.f_1239 = -1;
	Global_2437364.f_1240 = 0;
	Global_2405071.f_2679 = { vVar0 };
}

void func_88()
{
	Global_2405071.f_692 = 0;
	Global_2405071.f_2722 = 0;
	Global_2405071.f_510 = 0;
	Global_2405071.f_598 = 0;
	Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_207 = 0;
	Global_2405071.f_2677 = 0;
}

int func_89(int iParam0)
{
	int iVar0;
	
	if (unk_0xF0D230FB550CD6EB(iParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0xD76D6BCC14B95CE1(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_90()
{
	return unk_0x0E4018692D92041D(Global_2359302, 3);
}

bool func_91(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x95B959F18401C09A())
	{
		bVar0 = func_92(-1, 0) == 8;
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

int func_92(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_72();
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

int func_93()
{
	if (func_94() == 0)
	{
		return 1;
	}
	return 0;
}

int func_94()
{
	return Global_1312467.f_18;
}

int func_95()
{
	if (Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_35 && !Global_2449538.f_2846.f_214 == -1)
	{
		return 1;
	}
	return 0;
}

void func_96(var uParam0, bool bParam1, bool bParam2)
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

void func_97()
{
	int iVar0;
	
	if (bLocal_46)
	{
		return;
	}
	Local_43.f_4 = 0;
	if (!func_98(Global_37371[iLocal_54 /*5*/].f_2))
	{
		return;
	}
	iVar0 = unk_0x9EC3B269A34A2BEE(500, 3000);
	vLocal_52.x = 5;
	Local_51.f_2 = (timera() + iVar0);
}

int func_98(int iParam0)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	
	iVar0 = func_109();
	if (iVar0 == -2)
	{
		return 0;
	}
	if (unk_0xBC2FC12AD0FBF72E(Local_43.f_1))
	{
		if (unk_0xF0D230FB550CD6EB(Local_43.f_1, 0) || unk_0x707FFB0E65C1C546(Local_43.f_1))
		{
			return 0;
		}
		if (unk_0x719381AA15935FDC(Local_43.f_1))
		{
			return 0;
		}
		if (func_105(Local_43.f_1))
		{
			return 0;
		}
	}
	if ((Global_37371[iLocal_54 /*5*/].f_3 < 3 && Global_37371[iLocal_54 /*5*/].f_3 != 0) && Global_37371[iLocal_54 /*5*/].f_3 > Global_37371[iLocal_54 /*5*/].f_4)
	{
		return 0;
	}
	if ((Global_37371[iLocal_54 /*5*/].f_4 < 9 && Global_37371[iLocal_54 /*5*/].f_4 != 0) && Global_37371[iLocal_54 /*5*/].f_4 > Global_37371[iLocal_54 /*5*/].f_3)
	{
		return 0;
	}
	sVar1 = func_104(iParam0);
	if (unk_0x786AF4A44E1B5B4B(sVar1))
	{
		return 0;
	}
	if (func_105(Local_43.f_1))
	{
		return 0;
	}
	unk_0x1FCB57E33CEA24E8(sVar1);
	if (func_101(Local_43.f_1))
	{
		sVar2 = "MOVE_M@DRUNK@TRANSITIONS";
		sVar3 = "";
		switch (iParam0)
		{
			case 0:
				sVar3 = "";
				break;
			
			case 2:
				sVar3 = "VERY_TO_MODERATE";
				break;
			
			case 1:
				sVar3 = "MODERATE_TO_SLIGHTLY";
				break;
			
			default:
				break;
		}
		if (!unk_0x786AF4A44E1B5B4B(sVar2) && !unk_0x786AF4A44E1B5B4B(sVar3))
		{
			unk_0x0483D0035D6E46FD(sVar2);
			while (!unk_0xE9CCF312047EBEE0(sVar2))
			{
				wait(0);
			}
			if (!unk_0xBC2FC12AD0FBF72E(Local_43.f_1))
			{
				unk_0x108754262311D34F(Local_43.f_1, sVar2, sVar3, 1.5f, -1.5f, -1, 48, 0, 0, 0, 0);
				sLocal_50 = sVar3;
			}
		}
	}
	if (!unk_0xCDA107F8BEE35F40(sVar1))
	{
		return 0;
	}
	if (unk_0xBC2FC12AD0FBF72E(Local_43.f_1))
	{
		return 0;
	}
	unk_0x511559F67646F1C0(Local_43.f_1, sVar1, 0.75f);
	if (unk_0xB813DCBD5002BC42() == 4)
	{
		unk_0xC6DBE47F33AD19B2(Local_43.f_1, "move_ped_strafing_firstperson@drunk");
	}
	unk_0x32321D8034C7B162(Local_43.f_1, 0, sVar1, "idle", 2f, 1);
	vLocal_52.z = sVar1;
	bLocal_47 = true;
	iVar4 = 0;
	switch (func_64(Local_43.f_1))
	{
		case 0:
			iVar4 = "FACIALS@P_M_ZERO@BASE";
			break;
		
		case 1:
			iVar4 = "FACIALS@P_M_ONE@BASE";
			break;
		
		case 2:
			iVar4 = "FACIALS@P_M_TWO@BASE";
			break;
		
		default:
			if (unk_0xE09156665EC2D83B(Local_43.f_1))
			{
				if (!func_99())
				{
					iVar4 = "FACIALS@GEN_MALE@BASE";
				}
				else
				{
					iVar4 = "FACIALS@GEN_FEMALE@BASE";
				}
			}
			else if (unk_0x28C4F998CC33B00F(Local_43.f_1))
			{
				iVar4 = "FACIALS@GEN_MALE@BASE";
			}
			else
			{
				iVar4 = "FACIALS@GEN_FEMALE@BASE";
			}
			break;
	}
	unk_0x524B4AAA3328E253(Local_43.f_1, "mood_drunk_1", iVar4);
	unk_0x41E36A540F8F323F(Local_43.f_1, 200, true);
	unk_0x41E36A540F8F323F(Local_43.f_1, 46, true);
	unk_0x990A34F9DA8E506D(Local_43.f_1, 0);
	unk_0x33F6BE48E356DA27(Local_43.f_1, 262144, true);
	unk_0x7952B5F52781E66E(Local_43.f_1, 1);
	return 1;
}

bool func_99()
{
	return func_100(unk_0x95B959F18401C09A());
}

int func_100(int iParam0)
{
	if (unk_0x541D5C57194E73C4(unk_0x378BD4B3881338C2(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_101(int iParam0)
{
	vector3 vVar0;
	
	if (unk_0xF0D230FB550CD6EB(iParam0, 1) || unk_0x707FFB0E65C1C546(iParam0))
	{
		return 0;
	}
	if (unk_0xD76D6BCC14B95CE1(iParam0, -2017877118) != 7)
	{
		return 0;
	}
	if (unk_0xD76D6BCC14B95CE1(iParam0, 1785177548) != 7)
	{
		return 0;
	}
	if (unk_0x5DACF31D3AC5ED8D(iParam0))
	{
		return 0;
	}
	if (unk_0x7DD221C91135596A(iParam0))
	{
		return 0;
	}
	if (unk_0x3AF2B3B68DD52355(iParam0))
	{
		return 0;
	}
	if (unk_0x6C296F3A10E6939B(iParam0))
	{
		return 0;
	}
	if (Global_68807)
	{
		return 0;
	}
	if (func_103())
	{
		return 0;
	}
	if (iParam0 == unk_0x33CD235DF1E6A94E())
	{
		if (!unk_0x5CB6D04DB0945EB7(unk_0x95B959F18401C09A()))
		{
			return 0;
		}
		if (!unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A()))
		{
			return 0;
		}
		if (unk_0x5801F241F822A181(unk_0x95B959F18401C09A()) || unk_0x0FFAAF12F0E94E37(unk_0x95B959F18401C09A()))
		{
			return 0;
		}
		if (func_102())
		{
			return 0;
		}
	}
	vVar0 = { unk_0x43D8A2CCB19FE8A8(iParam0) };
	if (vmag2(vVar0) >= (1f * 1f))
	{
		return 0;
	}
	return 1;
}

bool func_102()
{
	return Global_93734.f_340 > 0;
}

bool func_103()
{
	return unk_0xE3903F59E2F22150() <= Global_17411.f_5878 + 100;
}

char* func_104(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "move_m@drunk@verydrunk";
			break;
		
		case 1:
			return "move_m@drunk@slightlydrunk";
			break;
		
		case 2:
			return "move_m@drunk@moderatedrunk";
			break;
	}
	return "";
}

bool func_105(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_106(iParam0);
	sVar1 = func_104(iVar0);
	if (unk_0x786AF4A44E1B5B4B(vLocal_52.z))
	{
		if (unk_0x786AF4A44E1B5B4B(sVar1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return unk_0xCE3CFF625BEBAA04(vLocal_52.z, sVar1);
}

int func_106(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!unk_0x765F6FEEFF39224F(iParam0))
	{
		return -1;
	}
	iVar0 = func_108(iParam0);
	iVar1 = func_107(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_37371[iVar1 /*5*/].f_2;
}

int func_107(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_37371[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_108(int iParam0)
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

int func_109()
{
	int iVar0;
	
	if (Local_51 == -2)
	{
		return -2;
	}
	if (Local_51 == -1)
	{
		return -1;
	}
	iVar0 = (Local_51 - timera());
	if (iVar0 < 0)
	{
		return -2;
	}
	if (iVar0 > 65534)
	{
		iVar0 = 65534;
	}
	return iVar0;
}

void func_110()
{
	if (bLocal_46)
	{
		return;
	}
	if (!func_111())
	{
		vLocal_52.x = 5;
		Local_51.f_2 = timera() + 5000;
		return;
	}
	vLocal_52.x = 6;
}

bool func_111()
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (Local_43.f_4 == 0)
	{
		return 0;
	}
	if (unk_0xD62C4419A41F106A(Local_43.f_4, 0))
	{
		return 0;
	}
	vVar0 = { unk_0xFBB1F99A825CAB09(Local_43.f_1, true) };
	vVar1 = { unk_0xFBB1F99A825CAB09(Local_43.f_4, true) };
	fVar2 = unk_0x16E00F066AFFEA0D(vVar0, vVar1, true);
	return fVar2 < 7f;
}

void func_112()
{
	int iVar0;
	char* sVar1;
	
	if (Local_43.f_1 == unk_0x33CD235DF1E6A94E())
	{
		unk_0x3FD9339AA95E323F(0, 36, 1);
		if (unk_0xBFCF1429B1DC83C2(Local_43.f_1))
		{
			if (Global_37371[iLocal_54 /*5*/].f_2 == 0 || Global_37371[iLocal_54 /*5*/].f_2 == 2)
			{
				unk_0xB5FEFF716515EF9E(Local_43.f_1, 0, 0);
			}
		}
		if (unk_0x0860DE2971F678B0(Local_43.f_1))
		{
			unk_0x7D66088AF22DD38E(Local_43.f_1, 0);
		}
	}
	if (Local_51 != -2)
	{
		if (Local_51 == -1)
		{
			if (Global_37371[iLocal_54 /*5*/].f_2 != 0)
			{
				Global_37371[iLocal_54 /*5*/].f_2 = 0;
			}
		}
		else
		{
			iVar0 = (Local_51 - timera());
			if (iVar0 <= 0)
			{
				iVar0 = 0;
			}
			iVar0 = (iVar0 / 1000) + 1;
			if (Global_37371[iLocal_54 /*5*/].f_2 == 0)
			{
				if (iVar0 < 30)
				{
					Global_37371[iLocal_54 /*5*/].f_2 = 2;
					if (!func_98(2))
					{
						Global_37371[iLocal_54 /*5*/].f_2 = 0;
						return;
					}
				}
			}
			if (Global_37371[iLocal_54 /*5*/].f_2 == 2)
			{
				if (iVar0 < 10)
				{
					Global_37371[iLocal_54 /*5*/].f_2 = 1;
					if (!func_98(2))
					{
						Global_37371[iLocal_54 /*5*/].f_2 = 2;
						return;
					}
				}
			}
			if (Global_37371[iLocal_54 /*5*/].f_2 == 1)
			{
			}
		}
	}
	else
	{
		return;
	}
	if (!unk_0x786AF4A44E1B5B4B(sLocal_50))
	{
		if (!func_101(Local_43.f_1))
		{
			sVar1 = "MOVE_M@DRUNK@TRANSITIONS";
			if (unk_0x1CE8F0A08E65CA6A(Local_43.f_1, sVar1, sLocal_50, 3))
			{
				unk_0xCCAF0916949DD646(Local_43.f_1, sVar1, sLocal_50, -4f);
			}
			sLocal_50 = "";
			return;
		}
	}
	if (Global_37371[iLocal_54 /*5*/].f_3 >= 10 || Global_37371[iLocal_54 /*5*/].f_4 >= 15)
	{
		if (unk_0xD76D6BCC14B95CE1(Local_43.f_1, 1785177548) == 1 && !unk_0x0E4018692D92041D(Global_1671295.f_3, 27))
		{
			return;
		}
		if (unk_0x8B76D954998C9E96(Local_43.f_1))
		{
			return;
		}
		if (unk_0xF0D230FB550CD6EB(Local_43.f_1, 1))
		{
			if (Global_37371[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_37371[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_37371[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_37371[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((unk_0xB331FCEB94EB05C8() && Local_43.f_1 == unk_0x33CD235DF1E6A94E()) && func_122(unk_0x95B959F18401C09A())) && Global_262145.f_23709)
		{
			if (Global_37371[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_37371[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_37371[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_37371[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if ((unk_0xB331FCEB94EB05C8() && Local_43.f_1 == unk_0x33CD235DF1E6A94E()) && func_121())
		{
			if (Global_37371[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_37371[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_37371[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_37371[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((unk_0xB331FCEB94EB05C8() && Local_43.f_1 == unk_0x33CD235DF1E6A94E()) && func_120(unk_0x95B959F18401C09A())) && Global_262145.f_26005)
		{
			if (Global_37371[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_37371[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_37371[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_37371[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((unk_0xB331FCEB94EB05C8() && Local_43.f_1 == unk_0x33CD235DF1E6A94E()) && func_117(unk_0x95B959F18401C09A())) && Global_262145.f_26038)
		{
			if (Global_37371[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_37371[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_37371[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_37371[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if ((unk_0xB331FCEB94EB05C8() && Local_43.f_1 == unk_0x33CD235DF1E6A94E()) && func_113(unk_0x95B959F18401C09A()) == 15)
		{
			if (Global_37371[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_37371[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_37371[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_37371[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((unk_0xB331FCEB94EB05C8() && Local_43.f_1 == unk_0x33CD235DF1E6A94E()) && Global_68807) && !Global_37344)
		{
			if (Global_37371[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_37371[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_37371[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_37371[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		vLocal_52.y = 3;
		return;
	}
	if (!bLocal_47)
	{
		return;
	}
	if (!func_105(Local_43.f_1))
	{
		return;
	}
}

int func_113(int iParam0)
{
	if (func_116(iParam0) == 243)
	{
		return func_114(iParam0);
	}
	return -1;
}

int func_114(int iParam0)
{
	if (func_115(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_181;
	}
	return -1;
}

int func_115(int iParam0, int iParam1)
{
	if (Global_1626536[iParam0 /*603*/].f_11.f_33 != -1 || (iParam1 && Global_1626536[iParam0 /*603*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_116(int iParam0)
{
	if (func_115(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_33;
	}
	return -1;
}

int func_117(int iParam0)
{
	if (iParam0 != func_78())
	{
		if (func_119(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_118(Global_2424047[iParam0 /*416*/].f_309.f_5) == 15;
			}
		}
	}
	return 0;
}

int func_118(int iParam0)
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

int func_119(int iParam0, bool bParam1, bool bParam2)
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

int func_120(int iParam0)
{
	if (iParam0 != func_78())
	{
		if (func_119(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_118(Global_2424047[iParam0 /*416*/].f_309.f_5) == 14;
			}
		}
	}
	return 0;
}

var func_121()
{
	return Global_2506066;
}

int func_122(int iParam0)
{
	if (iParam0 != func_78())
	{
		if (func_119(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_118(Global_2424047[iParam0 /*416*/].f_309.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_123()
{
	int iVar0;
	
	if (!unk_0x5C415D10D5CBF689(Local_43.f_1))
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = unk_0xF2C96862595654B4(Local_43.f_1, 0);
	if (!unk_0x91D5C8283D19AF49(iVar0, 0))
	{
		return 0;
	}
	if (!unk_0x7BDC41A7CA0C77A2(iVar0, -1, 0) == Local_43.f_1)
	{
		return 0;
	}
	Local_43.f_4 = iVar0;
	vLocal_52.x = 7;
	return 1;
}

void func_124()
{
	if (!unk_0xF0D230FB550CD6EB(Local_43.f_1, 0))
	{
		vLocal_52.x = 4;
		return;
	}
}

void func_125()
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	
	if (!bLocal_46)
	{
		return;
	}
	if (!unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
	{
		return;
	}
	if (!unk_0x5C415D10D5CBF689(unk_0x33CD235DF1E6A94E()))
	{
		return;
	}
	if (unk_0x09287BFEE1D9F6EF(unk_0x95B959F18401C09A(), 0))
	{
		return;
	}
	iVar0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
	fVar1 = unk_0x8BB475EA09C9A0EB(iVar0);
	if (fVar1 < 5f)
	{
		return;
	}
	vVar2 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true) };
	vVar3 = { vVar2 - Vector(3f, 30f, 30f) };
	vVar4 = { vVar2 + Vector(3f, 30f, 30f) };
	if (!unk_0x4A83E23BE6BCA7B0(vVar3, vVar4) && !unk_0xB05EBD564C7A1480(vVar3, vVar4))
	{
		return;
	}
	unk_0x563D94E1BFFD5CC6(unk_0x95B959F18401C09A(), 1, 0);
	unk_0x66D901F8097E8E86(unk_0x95B959F18401C09A(), 0);
	func_11(73, 1);
}

void func_126()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	iVar0 = Local_43.f_1;
	if (unk_0xF0D230FB550CD6EB(Local_43.f_1, 0))
	{
		iVar1 = unk_0xF2C96862595654B4(Local_43.f_1, 0);
		iVar2 = unk_0x7BDC41A7CA0C77A2(iVar1, -1, 0);
		if (!iVar2 == Local_43.f_1)
		{
			return;
		}
		if (unk_0xB331FCEB94EB05C8() && !unk_0x0A81FE3D92AE2AC9(iVar1))
		{
			return;
		}
		iVar0 = iVar1;
	}
	else if (!unk_0x33CD235DF1E6A94E() == Local_43.f_1)
	{
		return;
	}
	else if (!unk_0xB813DCBD5002BC42() == 4)
	{
		fLocal_49 = 0f;
		func_128(iVar0, 0f);
		return;
	}
	if (timera() < Local_51.f_4)
	{
		func_128(iVar0, fLocal_49);
		return;
	}
	if (unk_0x068481DAF84B9654(iVar0))
	{
		Local_51.f_4 = timera() + 2000;
	}
	else
	{
		Local_51.f_4 = timera() + 1000;
	}
	fVar3 = unk_0x8BB475EA09C9A0EB(iVar0);
	if (fVar3 < 0.04f)
	{
		fLocal_49 = 0f;
		func_128(iVar0, 0f);
		return;
	}
	if (Local_51.f_1 == -1)
	{
		fLocal_49 = func_127(iVar0, 0.13f, 0.06f);
	}
	else
	{
		iVar4 = (Local_51.f_1 - timera());
		if (iVar4 < 5000)
		{
			fLocal_49 = 0f;
		}
		else if (iVar4 < 15000)
		{
			fLocal_49 = func_127(iVar0, 0.05f, 0.02f);
		}
		else if (iVar4 < 30000)
		{
			fLocal_49 = func_127(iVar0, 0.07f, 0.03f);
		}
		else if (iVar4 < 45000)
		{
			fLocal_49 = func_127(iVar0, 0.09f, 0.04f);
		}
		else if (iVar4 < 600000)
		{
			fLocal_49 = func_127(iVar0, 0.1f, 0.05f);
		}
		else
		{
			fLocal_49 = func_127(iVar0, 0.13f, 0.06f);
		}
	}
	func_128(iVar0, fLocal_49);
}

float func_127(int iParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = unk_0x9562E33C057F7589(-fParam1, fParam1);
	fVar1 = unk_0x9562E33C057F7589(0f, fParam2);
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 - fVar1);
	}
	else
	{
		fVar0 = (fVar0 + fVar1);
	}
	if (unk_0x068481DAF84B9654(iParam0))
	{
		if (unk_0xC90E2CD6BFE5CC33(unk_0x22B02EC53152632C(iParam0)))
		{
			fVar0 = (fVar0 * 4.5f);
		}
		else
		{
			fVar0 = (fVar0 * 3f);
		}
	}
	else
	{
		iVar2 = unk_0x541D5C57194E73C4(iParam0);
		if (unk_0x9E374B5F44A76AE2(iVar2))
		{
			fVar0 = (fVar0 * 1.5f);
		}
		else
		{
			fVar0 = (fVar0 * 0.5f);
		}
	}
	fVar0 = func_21(fVar0, -1f, 1f);
	return fVar0;
}

void func_128(int iParam0, float fParam1)
{
	if (unk_0xB331FCEB94EB05C8() && !unk_0x0A81FE3D92AE2AC9(iParam0))
	{
		return;
	}
	if (unk_0x068481DAF84B9654(iParam0))
	{
		unk_0x1986D20E78B5AD52(unk_0x22B02EC53152632C(iParam0), fParam1);
	}
	else if (unk_0x680558231C80291D(iParam0))
	{
		unk_0x288465326F320354(unk_0xEAE1362B9F5C7B18(iParam0), fParam1);
	}
}

void func_129()
{
	int iVar0;
	
	if (!unk_0xF0D230FB550CD6EB(Local_43.f_1, 0))
	{
		vLocal_52.x = 4;
		return;
	}
	if (unk_0xB331FCEB94EB05C8())
	{
		if (Global_37371[iLocal_54 /*5*/].f_3 >= 10 || Global_37371[iLocal_54 /*5*/].f_4 >= 15)
		{
			if (Global_37371[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_37371[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_37371[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_37371[iLocal_54 /*5*/].f_4 = 14;
			}
		}
	}
	if (bLocal_46)
	{
		return;
	}
	iVar0 = unk_0xF2C96862595654B4(Local_43.f_1, 0);
	if (!unk_0x91D5C8283D19AF49(iVar0, 0))
	{
		unk_0x07C339D4328CA16C(Local_43.f_1, 0, 0);
		vLocal_52.x = 11;
		return;
	}
}

void func_130()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (timera() <= Local_51.f_3)
	{
		return;
	}
	iVar0 = unk_0xD76D6BCC14B95CE1(unk_0x33CD235DF1E6A94E(), 355471868);
	if (!iVar0 == 7)
	{
		Local_51.f_3 = timera() + 1000;
		return;
	}
	if (!unk_0xF0D230FB550CD6EB(Local_43.f_1, 0))
	{
		vLocal_52.x = 4;
		Local_51.f_3 = -2;
		return;
	}
	iVar1 = unk_0xF2C96862595654B4(Local_43.f_1, 0);
	iVar2 = unk_0x7BDC41A7CA0C77A2(iVar1, -1, 0);
	if (iVar2 == Local_43.f_1)
	{
		func_131();
		Local_51.f_3 = -2;
		return;
	}
	unk_0xB66F510766D11582(Local_43.f_1, iVar1, 0);
	vLocal_52.x = 9;
	Local_51.f_3 = timera() + 1000;
}

void func_131()
{
	if (vLocal_52.x == 10)
	{
		return;
	}
	vLocal_52.x = 10;
	if (iLocal_44 == -1)
	{
		return;
	}
	func_157(iLocal_44, 2, 5);
	Local_51.f_4 = timera();
	fLocal_49 = 0f;
}

void func_132()
{
	if (unk_0x5C415D10D5CBF689(Local_43.f_1))
	{
		vLocal_52.x = 10;
		return;
	}
	if (timera() < Local_51.f_3)
	{
		return;
	}
	vLocal_52.x = 4;
	Local_51.f_3 = -2;
}

void func_133()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (!bLocal_46)
	{
	}
	iVar0 = 0;
	bVar1 = false;
	if (bVar1 || unk_0x5C415D10D5CBF689(Local_43.f_1))
	{
		if (!bLocal_46)
		{
		}
		iVar0 = unk_0xF2C96862595654B4(Local_43.f_1, 0);
		if (!iVar0 == Local_43.f_4)
		{
			if (!bLocal_46)
			{
			}
			if (!bLocal_46)
			{
				if (!bLocal_46)
				{
				}
				unk_0x07C339D4328CA16C(Local_43.f_1, 0, 0);
				vLocal_52.x = 11;
				return;
			}
			Local_43.f_4 = iVar0;
		}
		if (bVar1)
		{
			if (!bLocal_46)
			{
			}
			func_131();
			return;
		}
		if (!bLocal_46)
		{
			if (!bLocal_46)
			{
			}
			func_131();
			return;
		}
		if (!bLocal_46)
		{
		}
		iVar2 = unk_0x7BDC41A7CA0C77A2(Local_43.f_4, -1, 0);
		if (iVar2 == Local_43.f_1)
		{
			func_131();
			return;
		}
		unk_0xB66F510766D11582(Local_43.f_1, iVar0, 0);
		vLocal_52.x = 9;
		Local_51.f_3 = timera() + 1000;
		return;
	}
	if (!func_111())
	{
		unk_0xED68CDDDE25A144E(Local_43.f_1);
		vLocal_52.x = 4;
		return;
	}
	if (!bLocal_46)
	{
		iVar3 = unk_0xD76D6BCC14B95CE1(Local_43.f_1, -1794415470);
		if (iVar3 == 7)
		{
			if (!unk_0xF0D230FB550CD6EB(Local_43.f_1, 0))
			{
				unk_0xED68CDDDE25A144E(Local_43.f_1);
				vLocal_52.x = 4;
				return;
			}
		}
	}
}

void func_134()
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (bLocal_46)
	{
		return;
	}
	if (Local_43.f_4 == 0)
	{
		vLocal_52.x = 4;
		return;
	}
	if (!unk_0x91D5C8283D19AF49(Local_43.f_4, 0))
	{
		Local_43.f_4 = 0;
		vLocal_52.x = 4;
		return;
	}
	vVar0 = { unk_0xFBB1F99A825CAB09(Local_43.f_1, true) };
	vVar1 = { unk_0xFBB1F99A825CAB09(Local_43.f_4, true) };
	fVar2 = unk_0x16E00F066AFFEA0D(vVar0, vVar1, true);
	if (fVar2 > 3f)
	{
		if (!func_98(Global_37371[iLocal_54 /*5*/].f_2))
		{
			vLocal_52.x = 12;
			return;
		}
		vLocal_52.x = 5;
		Local_51.f_2 = timera() + 2000;
		return;
	}
	iVar3 = unk_0xC92AA0DBDDDE8BB8(Local_43.f_4);
	iVar4 = 0;
	bVar5 = true;
	iVar4 = 1;
	while (bVar5)
	{
		if (iVar4 < iVar3)
		{
			if (unk_0x67FFBB75D2430704(Local_43.f_4, iVar4, 0))
			{
				bVar5 = false;
			}
			else
			{
				iVar4++;
			}
		}
		else
		{
			bVar5 = false;
			iVar4 = -1;
		}
	}
	if (iVar4 == -1)
	{
		if (iVar4 == -1)
		{
			vLocal_52.x = 4;
			return;
		}
	}
	func_135();
	unk_0xC838CE9837D0ABAF(Local_43.f_1, Local_43.f_4, -1, iVar4, 2f, 1, 0);
	vLocal_52.x = 7;
}

void func_135()
{
	if (!unk_0x765F6FEEFF39224F(Local_43.f_1))
	{
		return;
	}
	if (!unk_0xBC2FC12AD0FBF72E(Local_43.f_1))
	{
		unk_0xEB5F94C785667633(Local_43.f_1, 1048576000);
		unk_0x7A01E62DE63CF78D(Local_43.f_1);
		unk_0x0A75DE3DF9D3D284(Local_43.f_1, 0, -8f);
		vLocal_52.z = "";
		unk_0x1400DA3CD323B316(Local_43.f_1);
		unk_0x41E36A540F8F323F(Local_43.f_1, 200, false);
		unk_0x41E36A540F8F323F(Local_43.f_1, 46, false);
		unk_0x990A34F9DA8E506D(Local_43.f_1, 1);
		unk_0x33F6BE48E356DA27(Local_43.f_1, 262144, false);
		unk_0x7952B5F52781E66E(Local_43.f_1, 0);
	}
	if (!bLocal_47)
	{
		return;
	}
	bLocal_47 = false;
}

void func_136()
{
	if (timera() < Local_51.f_2)
	{
		func_112();
		return;
	}
	func_137();
	Local_51.f_2 = -2;
	vLocal_52.x = 12;
}

int func_137()
{
	if (!func_105(Local_43.f_1))
	{
		return 0;
	}
	if (!bLocal_47)
	{
		return 0;
	}
	func_138(Local_43.f_1);
	vLocal_52.z = "";
	Global_2528542.f_4531 = 1;
	return 1;
}

void func_138(int iParam0)
{
	unk_0xEB5F94C785667633(iParam0, 1048576000);
	unk_0x0A75DE3DF9D3D284(iParam0, 0, -8f);
	unk_0x41E36A540F8F323F(iParam0, 200, false);
	unk_0x990A34F9DA8E506D(iParam0, 1);
	unk_0x33F6BE48E356DA27(iParam0, 262144, false);
	unk_0x7952B5F52781E66E(iParam0, 0);
}

void func_139()
{
	int iVar0;
	
	if (Local_51 == -1)
	{
		Global_37371[iLocal_54 /*5*/].f_2 = 0;
	}
	else if (Global_37371[iLocal_54 /*5*/].f_3 < 3 && Global_37371[iLocal_54 /*5*/].f_3 != 0)
	{
		Global_37371[iLocal_54 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_51 - timera());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_37371[iLocal_54 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_37371[iLocal_54 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_37371[iLocal_54 /*5*/].f_2 = 1;
		}
	}
	if (unk_0xF0D230FB550CD6EB(Local_43.f_1, 0))
	{
		vLocal_52.x = 10;
		return;
	}
	if (func_105(Local_43.f_1))
	{
		vLocal_52.x = 12;
		return;
	}
	if (Local_51 == -2)
	{
		return;
	}
	if (!func_98(Global_37371[iLocal_54 /*5*/].f_2))
	{
		return;
	}
	vLocal_52.x = 12;
}

void func_140()
{
}

void func_141()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 6;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 16)
	{
		iVar0 = Global_37452[iVar1 /*6*/].f_2;
		if (!iVar0 == 6)
		{
			if (Global_37452[iVar1 /*6*/].f_1 == iLocal_44)
			{
				func_143(iVar1);
				func_142(iVar1);
			}
			else if (Global_37452[iVar1 /*6*/].f_1 == 2)
			{
				if (!iLocal_45 == -1)
				{
					if (iLocal_45 == Global_37452[iVar1 /*6*/])
					{
						func_143(iVar1);
					}
				}
			}
		}
		iVar1++;
	}
}

void func_142(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_37452[iParam0 /*6*/] = -1;
	Global_37452[iParam0 /*6*/].f_1 = -1;
	Global_37452[iParam0 /*6*/].f_2 = 6;
	Global_37452[iParam0 /*6*/].f_3 = 0;
	Global_37452[iParam0 /*6*/].f_4 = 0;
}

void func_143(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_37452[iParam0 /*6*/].f_2;
	switch (iVar0)
	{
		case 1:
			func_164();
			break;
		
		case 2:
			func_147(Global_37452[iParam0 /*6*/].f_4);
			break;
		
		case 3:
			func_146(Global_37452[iParam0 /*6*/].f_5);
			break;
		
		case 4:
			func_145();
			break;
		
		case 5:
			func_144();
			break;
		
		case 0:
			break;
		
		case 6:
			break;
		
		default:
			break;
	}
}

void func_144()
{
	vLocal_52.y = 2;
}

void func_145()
{
	int iVar0;
	
	Global_37371[iLocal_54 /*5*/].f_4++;
	if (Local_51 == -1)
	{
		Global_37371[iLocal_54 /*5*/].f_2 = 0;
	}
	else if (Global_37371[iLocal_54 /*5*/].f_4 < 9 && Global_37371[iLocal_54 /*5*/].f_4 != 0)
	{
		Global_37371[iLocal_54 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_51 - timera());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_37371[iLocal_54 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_37371[iLocal_54 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_37371[iLocal_54 /*5*/].f_2 = 1;
		}
		if (!func_105(Local_43.f_1))
		{
			func_98(Global_37371[iLocal_54 /*5*/].f_2);
		}
	}
}

void func_146(int iParam0)
{
	int iVar0;
	
	Global_37371[iLocal_54 /*5*/].f_3 = (Global_37371[iLocal_54 /*5*/].f_3 + iParam0);
	if (Local_51 == -1)
	{
		Global_37371[iLocal_54 /*5*/].f_2 = 0;
	}
	else if (Global_37371[iLocal_54 /*5*/].f_3 < 3 && Global_37371[iLocal_54 /*5*/].f_3 != 0)
	{
		Global_37371[iLocal_54 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_51 - timera());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_37371[iLocal_54 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_37371[iLocal_54 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_37371[iLocal_54 /*5*/].f_2 = 1;
		}
		if (!func_105(Local_43.f_1))
		{
			func_98(Global_37371[iLocal_54 /*5*/].f_2);
		}
	}
}

void func_147(int iParam0)
{
	Local_43.f_3 = (Local_43.f_3 + iParam0);
	Local_43.f_2 = (Local_43.f_2 + iParam0);
	Local_51.f_1 = (Local_51.f_1 + iParam0);
	Local_51 = (Local_51 + iParam0);
}

void func_148()
{
	int iVar0;
	
	if (!bLocal_46)
	{
		iLocal_53 = -1;
		return;
	}
	if (iLocal_53 < 0)
	{
		iLocal_53 = unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A());
		return;
	}
	iVar0 = unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A());
	if (iVar0 != iLocal_53)
	{
		if (iVar0 > iLocal_53)
		{
			func_149();
		}
		iLocal_53 = iVar0;
		return;
	}
}

void func_149()
{
}

void func_150()
{
	if (!Local_51 == -1)
	{
		if (!Local_51 == -2)
		{
			if (timera() >= Local_51)
			{
				func_135();
				Local_51 = -2;
				vLocal_52.x = 12;
			}
		}
		if (timera() > Local_51.f_1)
		{
			func_164();
		}
	}
}

void func_151(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_37452[iVar0 /*6*/])
		{
			func_142(iVar0);
		}
		iVar0++;
	}
}

void func_152()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	vLocal_52.x = 4;
	if (!unk_0xD62C4419A41F106A(Local_43.f_1, 0))
	{
		if (unk_0x5C415D10D5CBF689(Local_43.f_1))
		{
			vLocal_52.x = 10;
		}
	}
	if (bLocal_46)
	{
		func_155();
		func_11(71, 1);
		if (unk_0xB331FCEB94EB05C8())
		{
			iVar0 = func_73(2057, -1, 0);
			iVar1 = (iVar0 / 10) + 1 * 10;
			if (iVar0 + 1 >= iVar1)
			{
				func_153(iVar1);
			}
			func_70(2057, iVar0 + 1, -1, 1, 0);
		}
		else
		{
			iVar2 = 0;
			iVar3 = 0;
			iVar4 = 0;
			unk_0x75D54ED6C1AD1642(joaat("sp0_sp_num_times_drunk"), &iVar2, -1);
			unk_0x75D54ED6C1AD1642(joaat("sp1_sp_num_times_drunk"), &iVar3, -1);
			unk_0x75D54ED6C1AD1642(joaat("sp2_sp_num_times_drunk"), &iVar4, -1);
			iVar5 = ((iVar2 + iVar3) + iVar4);
			iVar6 = (iVar5 / 10) + 1 * 10;
			if (iVar5 + 1 >= iVar6)
			{
				func_153(iVar6);
			}
			switch (func_61())
			{
				case 0:
					unk_0x12B6E23F244DDB0F(joaat("sp0_sp_num_times_drunk"), iVar2 + 1, 1);
					break;
				
				case 1:
					unk_0x12B6E23F244DDB0F(joaat("sp1_sp_num_times_drunk"), iVar3 + 1, 1);
					break;
				
				case 2:
					unk_0x12B6E23F244DDB0F(joaat("sp2_sp_num_times_drunk"), iVar4 + 1, 1);
					break;
				}
		}
		vLocal_52.y = 1;
		return;
	}
	vLocal_52.y = 12;
	if (Local_51 == -1)
	{
		Global_37371[iLocal_54 /*5*/].f_2 = 0;
	}
	else if (Global_37371[iLocal_54 /*5*/].f_3 < 3 && Global_37371[iLocal_54 /*5*/].f_3 != 0)
	{
		Global_37371[iLocal_54 /*5*/].f_2 = -1;
	}
	else
	{
		iVar7 = (Local_51 - timera());
		if (iVar7 <= 0)
		{
			iVar7 = 0;
		}
		iVar7 = (iVar7 / 1000) + 1;
		Global_37371[iLocal_54 /*5*/].f_2 = 0;
		if (iVar7 < 30)
		{
			Global_37371[iLocal_54 /*5*/].f_2 = 2;
		}
		if (iVar7 < 10)
		{
			Global_37371[iLocal_54 /*5*/].f_2 = 1;
		}
	}
}

void func_153(int iParam0)
{
	int iVar0;
	
	iVar0 = func_154(81);
	Global_2414402[iVar0 /*83*/] = 81;
	Global_2414402[iVar0 /*83*/].f_17 = iParam0;
	StringCopy(&(Global_2414402[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

int func_154(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2414402[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2414402[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_155()
{
}

void func_156()
{
	Local_51 = Local_43.f_2;
	Local_51.f_1 = Local_43.f_3;
	Local_51.f_2 = -2;
	Local_51.f_3 = -2;
}

void func_157(int iParam0, int iParam1, int iParam2)
{
	func_158(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_158(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	if (func_160(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_159();
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

int func_159()
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

int func_160(int iParam0, int iParam1, int iParam2)
{
	if (func_161(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_161(int iParam0, int iParam1, int iParam2)
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

void func_162()
{
	int iVar0;
	
	bLocal_46 = false;
	if (Local_43.f_1 == unk_0x33CD235DF1E6A94E())
	{
		bLocal_46 = true;
		Global_37583 = 1;
		Global_37585++;
	}
	if (!unk_0xD62C4419A41F106A(Local_43.f_1, 0))
	{
		iVar0 = func_64(Local_43.f_1);
		switch (iVar0)
		{
			case 17:
				unk_0x5464B9731013E08C(Local_43.f_1, "AMANDA_DRUNK");
				break;
			
			case 19:
				unk_0x5464B9731013E08C(Local_43.f_1, "LAMAR_DRUNK");
				break;
			}
	}
}

void func_163()
{
	if (!iLocal_44 == -1)
	{
		return;
	}
	iLocal_44 = func_108(Local_43.f_1);
	if (iLocal_44 == -1)
	{
		return;
	}
	iLocal_54 = func_107(iLocal_44);
}

void func_164()
{
	int iVar0;
	
	if (!func_29(0) && !func_29(3))
	{
		if (!unk_0xD62C4419A41F106A(Local_43.f_1, 0))
		{
			iVar0 = func_64(Local_43.f_1);
			if (Global_37371[iLocal_54 /*5*/].f_4 > 0)
			{
				switch (iVar0)
				{
					case 0:
						func_166(Local_43.f_1, "POST_STONED", 24);
						break;
					
					case 1:
						func_166(Local_43.f_1, "POST_STONED", 24);
						break;
					
					case 2:
						func_166(Local_43.f_1, "POST_STONED", 24);
						break;
					}
			}
			switch (iVar0)
			{
				case 17:
					unk_0x5464B9731013E08C(Local_43.f_1, "AMANDA_NORMAL");
					break;
				
				case 19:
					unk_0x5464B9731013E08C(Local_43.f_1, "LAMAR_NORMAL");
					break;
				}
			}
	}
	func_135();
	if (bLocal_46)
	{
		Global_37583 = 0;
	}
	func_165();
	unk_0xFF2DEA68E2D3602E(func_104(0));
	unk_0xFF2DEA68E2D3602E(func_104(2));
	unk_0xFF2DEA68E2D3602E(func_104(1));
	Global_1666256 = 0;
	if (unk_0x1BCDA92AD0A7835B(joaat("appemail")) > 0)
	{
		func_36(0);
	}
	unk_0x5894DC159447E10A();
}

void func_165()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xD62C4419A41F106A(Local_43.f_1, 0))
	{
		return;
	}
	iVar0 = Local_43.f_1;
	if (unk_0xF0D230FB550CD6EB(Local_43.f_1, 0))
	{
		iVar1 = unk_0xF2C96862595654B4(Local_43.f_1, 0);
		iVar2 = unk_0x7BDC41A7CA0C77A2(iVar1, -1, 0);
		if (!Local_43.f_1 == iVar2)
		{
			return;
		}
		iVar0 = iVar1;
	}
	else if (!unk_0xB813DCBD5002BC42() == 4 || !unk_0x33CD235DF1E6A94E() == Local_43.f_1)
	{
		return;
	}
	fLocal_49 = 0f;
	func_128(iVar0, 0f);
}

void func_166(int iParam0, char* sParam1, int iParam2)
{
	unk_0xAEED0213982928AC(iParam0, sParam1, func_167(iParam2), 1);
}

int func_167(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

