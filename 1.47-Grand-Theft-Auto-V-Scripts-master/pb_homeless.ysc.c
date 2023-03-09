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
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	vector3 vLocal_47 = { 0f, 0f, 0f };
	vector3 vLocal_48 = { 0f, 0f, 0f };
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	struct<2> Local_54 = { 0, 5 } ;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 5;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 0;
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
	vLocal_47 = { ScriptParam_54.f_1[0 /*3*/] };
	iLocal_44 = unk_0x9EC3B269A34A2BEE(0, 2);
	func_27();
	if (unk_0x9EC5BDC006623C42(11))
	{
		func_27();
	}
	while (true)
	{
		wait(0);
		if (unk_0xA80721FDC3BDCCDB())
		{
			if (func_8(3))
			{
				switch (iLocal_43)
				{
					case 0:
						if (iLocal_45 == 1)
						{
							iLocal_43 = 1;
						}
						else
						{
							func_7();
						}
						break;
					
					case 1:
						if (!unk_0xD62C4419A41F106A(iLocal_50, 0))
						{
							if (iLocal_46 == 0)
							{
								if (func_2(iLocal_50, 0, 1056964608, 0, 0, 0))
								{
									iLocal_46 = 1;
								}
							}
						}
						if (iLocal_52 == 0)
						{
							func_1();
						}
						break;
				}
			}
			else
			{
				func_27();
			}
		}
		else
		{
			func_27();
		}
	}
}

void func_1()
{
	if (timerb() > 10000)
	{
		if (unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), vLocal_47, 10f, 10f, 10f, false, true, 0) && !unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
		{
			settimerb(0);
			if (!unk_0xD62C4419A41F106A(iLocal_50, 0))
			{
				if (iLocal_44 == 0)
				{
					if (iLocal_46 == 0)
					{
					}
					unk_0x99414FB2D30425C1(&iLocal_53);
					unk_0x11C4AF4137F2A4B5(0, unk_0x33CD235DF1E6A94E(), 0);
					unk_0x108754262311D34F(0, "amb@drug_dealer", "beckon_03", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0xC734F59A13D39AEF(iLocal_53);
					unk_0x13A2D602CD10CBAC(iLocal_50, iLocal_53);
					unk_0xA7A57E7757ED035E(&iLocal_53);
				}
				else if (!unk_0xD62C4419A41F106A(iLocal_51, 0))
				{
					unk_0x11C4AF4137F2A4B5(iLocal_50, iLocal_51, 0);
					if (iLocal_46 == 0)
					{
					}
					unk_0xBD4591245C650283(iLocal_51, 1193033728, 0);
					iLocal_44 = 0;
				}
			}
		}
	}
}

int func_2(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, bool bParam5)
{
	float fVar0;
	
	if (iParam4 == 2)
	{
		fVar0 = 150f;
	}
	else if (iParam4 == 1)
	{
		fVar0 = 100f;
	}
	else if (iParam4 == 0)
	{
		fVar0 = 40f;
	}
	switch (iParam3)
	{
		case 2:
			if (func_3(iParam0, func_6(iParam1, 2, fParam2), fVar0, fParam2, bParam5))
			{
				return 1;
			}
			if (func_3(iParam0, func_6(iParam1, 3, fParam2), fVar0, fParam2, bParam5))
			{
				return 1;
			}
			if (func_3(iParam0, func_6(iParam1, 5, fParam2), fVar0, fParam2, bParam5))
			{
				return 1;
			}
			if (func_3(iParam0, func_6(iParam1, 6, fParam2), fVar0, fParam2, bParam5))
			{
				return 1;
			}
			if (func_3(iParam0, func_6(iParam1, 7, fParam2), fVar0, fParam2, bParam5))
			{
				return 1;
			}
			if (func_3(iParam0, func_6(iParam1, 8, fParam2), fVar0, fParam2, bParam5))
			{
				return 1;
			}
		
		case 1:
			if (func_3(iParam0, func_6(iParam1, 1, fParam2), fVar0, fParam2, bParam5))
			{
				return 1;
			}
		
		case 0:
			if (func_3(iParam0, func_6(iParam1, 0, fParam2), fVar0, fParam2, bParam5))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_3(int iParam0, vector3 vParam1, float fParam2, float fParam3, bool bParam4)
{
	float fVar0;
	vector3 vVar1;
	
	if (fParam3 < 1f)
	{
		fVar0 = (1f + 0.5f);
	}
	else
	{
		fVar0 = (fParam3 + 0.5f);
	}
	vVar1 = { (fParam3 + 0.2f), (fParam3 + 0.2f), fVar0 };
	if (!unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		if ((((unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), unk_0x2CA911E7569D12EA(iParam0, vParam1), vVar1, false, true, 0) && unk_0xC5DC7627BD3861CF(unk_0x33CD235DF1E6A94E(), unk_0xFBB1F99A825CAB09(iParam0, true), fParam2)) && func_5(bParam4)) && !unk_0x3AF2B3B68DD52355(iParam0)) && !unk_0xF7C907E9E8E2BB22(iParam0))
		{
			func_4(iParam0, 1);
			return 1;
		}
		else
		{
			func_4(iParam0, 0);
		}
	}
	return 0;
}

void func_4(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	if (!unk_0xD62C4419A41F106A(iParam0, 0))
	{
	}
}

int func_5(bool bParam0)
{
	if (unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A()))
	{
		if (bParam0)
		{
			if (unk_0xE0BDEEACBF0F7D82(unk_0x33CD235DF1E6A94E()) == 1f || unk_0xE0BDEEACBF0F7D82(unk_0x33CD235DF1E6A94E()) == 0f)
			{
				return 1;
			}
		}
		else if (unk_0xE0BDEEACBF0F7D82(unk_0x33CD235DF1E6A94E()) == 1f)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_6(int iParam0, int iParam1, float fParam2)
{
	vector3 vVar0;
	
	switch (iParam1)
	{
		case 0:
			if (iParam0 == 0)
			{
				vVar0 = { 0f, fParam2, 0f };
			}
			else if (iParam0 == 1)
			{
				vVar0 = { fParam2, 0f, 0f };
			}
			else if (iParam0 == 3)
			{
				vVar0 = { 0f, -fParam2, 0f };
			}
			else if (iParam0 == 2)
			{
				vVar0 = { -fParam2, 0f, 0f };
			}
			break;
		
		case 1:
			if (iParam0 == 3)
			{
				vVar0 = { 0f, fParam2, 0f };
			}
			else if (iParam0 == 2)
			{
				vVar0 = { fParam2, 0f, 0f };
			}
			else if (iParam0 == 0)
			{
				vVar0 = { 0f, -fParam2, 0f };
			}
			else if (iParam0 == 1)
			{
				vVar0 = { -fParam2, 0f, 0f };
			}
			break;
		
		case 2:
			if (iParam0 == 2)
			{
				vVar0 = { 0f, fParam2, 0f };
			}
			else if (iParam0 == 3)
			{
				vVar0 = { fParam2, 0f, 0f };
			}
			else if (iParam0 == 1)
			{
				vVar0 = { 0f, -fParam2, 0f };
			}
			else if (iParam0 == 0)
			{
				vVar0 = { -fParam2, 0f, 0f };
			}
			break;
		
		case 3:
			if (iParam0 == 1)
			{
				vVar0 = { 0f, fParam2, 0f };
			}
			else if (iParam0 == 0)
			{
				vVar0 = { fParam2, 0f, 0f };
			}
			else if (iParam0 == 2)
			{
				vVar0 = { 0f, -fParam2, 0f };
			}
			else if (iParam0 == 3)
			{
				vVar0 = { -fParam2, 0f, 0f };
			}
			break;
		
		case 5:
			if (iParam0 == 1)
			{
				vVar0 = { fParam2, fParam2, 0f };
			}
			else if (iParam0 == 0)
			{
				vVar0 = { -fParam2, fParam2, 0f };
			}
			else if (iParam0 == 3)
			{
				vVar0 = { fParam2, -fParam2, 0f };
			}
			else if (iParam0 == 2)
			{
				vVar0 = { -fParam2, -fParam2, 0f };
			}
			break;
		
		case 6:
			if (iParam0 == 0)
			{
				vVar0 = { fParam2, fParam2, 0f };
			}
			else if (iParam0 == 2)
			{
				vVar0 = { -fParam2, fParam2, 0f };
			}
			else if (iParam0 == 1)
			{
				vVar0 = { fParam2, -fParam2, 0f };
			}
			else if (iParam0 == 3)
			{
				vVar0 = { -fParam2, -fParam2, 0f };
			}
			break;
		
		case 7:
			if (iParam0 == 3)
			{
				vVar0 = { fParam2, fParam2, 0f };
			}
			else if (iParam0 == 1)
			{
				vVar0 = { -fParam2, fParam2, 0f };
			}
			else if (iParam0 == 2)
			{
				vVar0 = { fParam2, -fParam2, 0f };
			}
			else if (iParam0 == 0)
			{
				vVar0 = { -fParam2, -fParam2, 0f };
			}
			break;
		
		case 8:
			if (iParam0 == 2)
			{
				vVar0 = { fParam2, fParam2, 0f };
			}
			else if (iParam0 == 3)
			{
				vVar0 = { -fParam2, fParam2, 0f };
			}
			else if (iParam0 == 0)
			{
				vVar0 = { fParam2, -fParam2, 0f };
			}
			else if (iParam0 == 1)
			{
				vVar0 = { -fParam2, -fParam2, 0f };
			}
			break;
	}
	if (fParam2 < 0f)
	{
		fParam2 = (fParam2 * -1f);
	}
	return vVar0;
}

void func_7()
{
	if (unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), vLocal_47, 50f, 50f, 50f, false, true, 0))
	{
		unk_0xB815670C37E03CDE(joaat("a_m_o_tramp_01"));
		unk_0xB815670C37E03CDE(joaat("g_m_y_strpunk_01"));
		unk_0x0483D0035D6E46FD("amb@drug_dealer");
		while ((!unk_0x5D98D654CDC2165A(joaat("a_m_o_tramp_01")) || !unk_0x5D98D654CDC2165A(joaat("g_m_y_strpunk_01"))) || !unk_0xE9CCF312047EBEE0("amb@drug_dealer"))
		{
			wait(0);
		}
		unk_0x9315FCF6CFE2AB41("homeless", &iLocal_49);
		vLocal_48.z = (vLocal_47.z - 1f);
		iLocal_50 = unk_0x9BA5CF280376EEA4(19, joaat("a_m_o_tramp_01"), vLocal_47.x, vLocal_47.y, vLocal_48.z, 0f, 1, true);
		unk_0x0648A75D3F60E864(iLocal_50, iLocal_49);
		if (iLocal_44 == 1)
		{
			vLocal_48 = { unk_0x2CA911E7569D12EA(iLocal_50, 0.8f, 0.8f, -1f) };
			iLocal_51 = unk_0x9BA5CF280376EEA4(5, joaat("g_m_y_strpunk_01"), vLocal_48, 0f, 1, true);
			unk_0x9315FCF6CFE2AB41("homeless", &iLocal_49);
			unk_0x0648A75D3F60E864(iLocal_51, iLocal_49);
			if (!unk_0xD62C4419A41F106A(iLocal_50, 0))
			{
				unk_0x99414FB2D30425C1(&iLocal_53);
				unk_0x9F878FE3F23E2C8B(0, vLocal_48, 0);
				unk_0x108754262311D34F(0, "amb@drug_dealer", "beckon_01", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0xC734F59A13D39AEF(iLocal_53);
				unk_0x13A2D602CD10CBAC(iLocal_50, iLocal_53);
				unk_0xA7A57E7757ED035E(&iLocal_53);
			}
			if (!unk_0xD62C4419A41F106A(iLocal_51, 0))
			{
				unk_0x99414FB2D30425C1(&iLocal_53);
				unk_0x9F878FE3F23E2C8B(0, vLocal_47, 0);
				unk_0x108754262311D34F(0, "amb@drug_dealer", "beckon_02", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0xC734F59A13D39AEF(iLocal_53);
				unk_0x13A2D602CD10CBAC(iLocal_51, iLocal_53);
				unk_0xA7A57E7757ED035E(&iLocal_53);
			}
		}
		iLocal_45 = 1;
	}
}

int func_8(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_26(6) || func_26(7))
			{
				return 1;
			}
			else
			{
				return func_8(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_24(5))
			{
				if (func_9(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_9(int iParam0)
{
	int iVar0;
	
	if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
	{
		if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
		{
			if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
			{
				iVar0 = func_20();
				if (!func_19(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0xE027064B1C47E424(unk_0x95B959F18401C09A()) || unk_0x7DD221C91135596A(unk_0x33CD235DF1E6A94E())) || unk_0x707FFB0E65C1C546(unk_0x33CD235DF1E6A94E())) || unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E())) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || unk_0x63E238348058FF52(unk_0x95B959F18401C09A())) || unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0)) || func_18()) || Global_105612) || Global_25767) || func_17()) || func_16(8, -1)) || func_15()) || func_14()) || func_13()) || func_12()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1) || func_18()) || Global_25767) || func_17()) || func_16(8, -1)) || func_13()) || func_15()) || func_14()) || func_12()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xE027064B1C47E424(unk_0x95B959F18401C09A()) || unk_0x7DD221C91135596A(unk_0x33CD235DF1E6A94E())) || unk_0x707FFB0E65C1C546(unk_0x33CD235DF1E6A94E())) || unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E())) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || unk_0x63E238348058FF52(unk_0x95B959F18401C09A())) || unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0)) || func_18()) || Global_105612) || Global_25767) || func_17()) || func_16(8, -1)) || func_13()) || func_15()) || func_14()) || func_12()) || Global_106565.f_7682.f_919[iVar0] == 5) || Global_36972 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E()) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0)) || func_18()) || Global_105612) || Global_25767) || func_17()) || func_16(8, -1)) || func_15()) || func_14()) || func_12()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_18() || unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) > 0) || func_16(8, -1)) || func_12()) || func_11()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_16(8, -1) || func_15()) || func_14()) || func_11()) || func_10())
						{
							return 0;
						}
						if ((unk_0x71EC91BA8C88BCE0() && unk_0xC043A1CA19EA599D() != 3) && unk_0x469BF85808505E83() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
						{
							if ((((((((((((((unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0) || unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) > 0) || unk_0x7DD221C91135596A(unk_0x33CD235DF1E6A94E())) || unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E())) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || unk_0x63E238348058FF52(unk_0x95B959F18401C09A())) || func_18()) || Global_25767) || func_17()) || func_16(8, -1)) || func_14()) || func_13()) || func_12()) || Global_106565.f_7682.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0) || !unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A())) || !unk_0xE027064B1C47E424(unk_0x95B959F18401C09A())) || !unk_0x73DA1542B2F0C458()) || unk_0x7DD221C91135596A(unk_0x33CD235DF1E6A94E())) || unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E())) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || func_18()) || func_14()) || Global_105612) || Global_25767) || func_17()) || Global_37584) || func_16(8, -1)) || func_13()) || func_11()) || func_12()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0) || !unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A())) || !unk_0xE027064B1C47E424(unk_0x95B959F18401C09A())) || !unk_0x73DA1542B2F0C458()) || unk_0x09287BFEE1D9F6EF(unk_0x95B959F18401C09A(), 0)) || unk_0x7DD221C91135596A(unk_0x33CD235DF1E6A94E())) || unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1)) || unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E())) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0x04571D88090E0F77(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || unk_0x63E238348058FF52(unk_0x95B959F18401C09A())) || func_18()) || Global_105612) || Global_25767) || func_17()) || func_16(8, -1)) || func_13()) || func_11()) || func_15()) || func_14()) || func_12())
						{
							return 0;
						}
						break;
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
	else
	{
		return 0;
	}
	return 1;
}

var func_10()
{
	return Global_93721.f_1;
}

int func_11()
{
	if (Global_90634 != -1)
	{
		return unk_0x0E4018692D92041D(Global_84500[Global_90634 /*34*/].f_15, 13);
	}
	return 0;
}

int func_12()
{
	if (unk_0x1BCDA92AD0A7835B(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_13()
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

bool func_14()
{
	return Global_93734.f_340 > 0;
}

bool func_15()
{
	return Global_93734.f_339 > 0;
}

bool func_16(int iParam0, int iParam1)
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

var func_17()
{
	return Global_1312867;
}

int func_18()
{
	if (!unk_0xB331FCEB94EB05C8())
	{
		return Global_91190.f_44 == 1;
	}
	return 0;
}

bool func_19(int iParam0)
{
	return iParam0 < 3;
}

var func_20()
{
	func_21();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_21()
{
	int iVar0;
	
	if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
	{
		if (func_23(Global_106565.f_2357.f_539.f_4321) != unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()))
		{
			iVar0 = func_22(unk_0x33CD235DF1E6A94E());
			if (func_19(iVar0) && (!func_26(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_19(Global_106565.f_2357.f_539.f_4321))
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

int func_22(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		iVar1 = unk_0x541D5C57194E73C4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_23(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_23(int iParam0)
{
	if (func_19(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_24(int iParam0)
{
	return func_25(iParam0, Global_36425);
}

int func_25(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

bool func_26(int iParam0)
{
	return Global_36425 == iParam0;
}

void func_27()
{
	unk_0x5894DC159447E10A();
}

