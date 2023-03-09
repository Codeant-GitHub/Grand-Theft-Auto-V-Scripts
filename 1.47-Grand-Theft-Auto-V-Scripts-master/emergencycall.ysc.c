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
	vector3 vLocal_45 = { 0f, 0f, 0f };
	int iLocal_46 = 0;
	var uLocal_47 = 0;
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
	if (unk_0x9EC5BDC006623C42(11))
	{
		iLocal_43 = 5;
	}
	while (true)
	{
		wait(0);
		if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
		{
			switch (iLocal_43)
			{
				case 0:
					func_9();
					break;
				
				case 1:
					break;
				
				case 2:
					func_8();
					if (unk_0xB331FCEB94EB05C8())
					{
						if (unk_0xEC46B8A749DB209F(7, unk_0x33CD235DF1E6A94E(), 2, 3f, &uLocal_47, 0, 0))
						{
							iLocal_46 = unk_0xE3903F59E2F22150();
							iLocal_43 = 5;
						}
					}
					else if (unk_0x3A59853E7DA8A5D8(7, vLocal_45, 2, 3f, &uLocal_47, 0, 0))
					{
						iLocal_46 = unk_0xE3903F59E2F22150();
						iLocal_43 = 5;
					}
					break;
				
				case 3:
					func_8();
					if (unk_0xB331FCEB94EB05C8())
					{
						if ((func_7(unk_0x95B959F18401C09A(), 0) && func_4(unk_0x95B959F18401C09A()) == 5) && Global_1687979)
						{
							if (Global_1687980 == 0)
							{
								Global_1687980 = 1;
							}
							iLocal_43 = 5;
						}
						else if (unk_0xEC46B8A749DB209F(5, unk_0x33CD235DF1E6A94E(), 2, 3f, &uLocal_47, 0, 0))
						{
							iLocal_46 = unk_0xE3903F59E2F22150();
							iLocal_43 = 5;
						}
					}
					else if (unk_0x3A59853E7DA8A5D8(5, vLocal_45, 2, 3f, &uLocal_47, 0, 0))
					{
						iLocal_46 = unk_0xE3903F59E2F22150();
						iLocal_43 = 5;
					}
					break;
				
				case 4:
					func_8();
					if (unk_0xB331FCEB94EB05C8())
					{
						if (unk_0xEC46B8A749DB209F(3, unk_0x33CD235DF1E6A94E(), 4, 3f, &uLocal_47, 0, 0))
						{
							iLocal_46 = unk_0xE3903F59E2F22150();
							iLocal_43 = 5;
						}
					}
					else if (unk_0x3A59853E7DA8A5D8(3, vLocal_45, 4, 3f, &uLocal_47, 0, 0))
					{
						if (Global_90209.f_358 == unk_0x36163153849DFDA1("AGENCY_PREP_1") || (unk_0x1BCDA92AD0A7835B(unk_0x36163153849DFDA1("agency_prep1")) > 0 && func_3(0)))
						{
							Global_90209.f_358 = unk_0x36163153849DFDA1("AHP1_TRUCKCALLED");
						}
						else if (func_2(67) && !func_2(68))
						{
							Global_90139 = 1;
						}
						iLocal_46 = unk_0xE3903F59E2F22150();
						iLocal_43 = 5;
					}
					break;
				
				case 5:
					if (unk_0xE3903F59E2F22150() > (iLocal_46 + 60000) || !unk_0xB5531A0D55065699(uLocal_47))
					{
						func_1();
					}
					else if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
					{
						if (!unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A()))
						{
							if (unk_0xB5531A0D55065699(uLocal_47))
							{
								unk_0x1C51D7F2678BAFEB(uLocal_47);
							}
						}
					}
					break;
				}
		}
	}
}

void func_1()
{
	iLocal_43 = 0;
	iLocal_44 = 0;
	unk_0x5894DC159447E10A();
}

int func_2(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_106565.f_9079.f_330[iParam0 /*6*/];
}

bool func_3(bool bParam0)
{
	if (!bParam0 && unk_0x1BCDA92AD0A7835B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x0E4018692D92041D(Global_71838, 0);
}

int func_4(int iParam0)
{
	if (func_6(iParam0) == 233)
	{
		return func_5(iParam0);
	}
	return -1;
}

int func_5(int iParam0)
{
	if (func_7(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_181;
	}
	return -1;
}

int func_6(int iParam0)
{
	if (func_7(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_33;
	}
	return -1;
}

int func_7(int iParam0, int iParam1)
{
	if (Global_1626536[iParam0 /*603*/].f_11.f_33 != -1 || (iParam1 && Global_1626536[iParam0 /*603*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_8()
{
	if (unk_0xE3903F59E2F22150() > iLocal_46 + 30000)
	{
		iLocal_43 = 5;
	}
}

void func_9()
{
	var uVar0;
	
	switch (iLocal_44)
	{
		case 0:
			iLocal_44 = 1;
			iLocal_46 = unk_0xE3903F59E2F22150();
			break;
		
		case 1:
			while (!func_18())
			{
				wait(0);
				if (func_17() == 3)
				{
					iLocal_43 = 3;
				}
				if (func_17() == 4)
				{
					iLocal_43 = 4;
				}
				if (func_17() == 5)
				{
					iLocal_43 = 2;
				}
				if (unk_0xE3903F59E2F22150() > iLocal_46 + 30000)
				{
					iLocal_46 = unk_0xE3903F59E2F22150();
					func_12(0);
				}
			}
			if (iLocal_43 == 0)
			{
				iLocal_43 = 5;
			}
			if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
			{
				func_10(unk_0x33CD235DF1E6A94E(), &vLocal_45, &uVar0);
			}
			iLocal_46 = unk_0xE3903F59E2F22150();
			break;
	}
}

void func_10(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	vector3 vVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	var uVar16;
	vector3 vVar17;
	var uVar18;
	
	fVar12 = 5f;
	iVar0 = 1;
	iVar13 = 0;
	while (iVar13 < 2)
	{
		switch (iVar13)
		{
			case 0:
				unk_0x4CD58AFCE9FC3575(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), iVar0, uParam1, &fVar10, &iVar1, 5, 3f, 0f);
				unk_0xAF894373822C8B54(*uParam1, 1f, 1, &uVar4, &uVar5, &uVar2, &uVar3, &fVar7, 0);
				if (unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false), -3044.66f, 596.43f, 6.58f, true) < 25f)
				{
					*uParam1 = { -3031.38f, 605.32f, 6.86f };
				}
				vVar6 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true) - unk_0xFBB1F99A825CAB09(iParam0, true) };
				fVar8 = unk_0x174C48E9E544E9A8(vVar6.x, vVar6.y);
				fVar9 = (fVar10 + 180f);
				if (fVar9 > 360f)
				{
					fVar9 = (fVar9 - 360f);
				}
				if (func_11(fVar8, fVar10, 90f))
				{
					*uParam2 = fVar10;
				}
				else
				{
					*uParam2 = fVar9;
				}
				if (fVar7 < 0f)
				{
					fVar11 = 0f;
				}
				else if (unk_0xB024BD7BA99751DA(unk_0x8FE805A2903F1C0A(*uParam1, 1, 1, 1077936128, 0)))
				{
					fVar11 = 0f;
				}
				else
				{
					fVar11 = (fVar12 * to_float((iVar1 / 2)));
					if (fVar11 == 0f)
					{
						fVar11 = (fVar11 + fVar12);
					}
					if (iVar1 == 5)
					{
						fVar11 = (fVar11 + fVar12);
					}
					if (unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false), 294f, -895f, 28f, true) < 25f || unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false), -713.01f, -819.64f, 22.63f, true) < 25f)
					{
						fVar11 = (fVar11 + 5f);
					}
					else
					{
						fVar11 = (fVar11 + 3.75f);
					}
					fVar11 = (fVar11 + (fVar7 / 2f));
				}
				if (vdist(unk_0xCD1EDCB38767B47C(*uParam1, *uParam2, fVar11, 0f, 0f), unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true)) > vdist(unk_0xCD1EDCB38767B47C(*uParam1, *uParam2, -fVar11, 0f, 0f), unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true)))
				{
					fVar11 = -fVar11;
				}
				*uParam1 = { unk_0xCD1EDCB38767B47C(*uParam1, *uParam2, fVar11, 0f, 0f) };
				iVar14 = unk_0x0F79DCFDE3D6F778(*uParam1 + FtoV((uParam1->f_2 + 4.5f)), *uParam1 + Vector(4.5f, 0.5f, 0.5f), 2.5f, 1, 0, 4);
				iVar13++;
				break;
			
			case 1:
				if (iVar0 <= 2)
				{
					if (unk_0x819B6E76423AE494(iVar14, &iVar15, &vVar17, &uVar16, &uVar18) == 2)
					{
						if (iVar15 != 0)
						{
							if (vVar17.z > (uParam1->f_2 + 8.5f))
							{
								iVar13++;
							}
							else
							{
								iVar0++;
								iVar13 = 0;
							}
						}
						else
						{
							iVar13++;
						}
					}
				}
				else
				{
					iVar13++;
				}
				break;
			
			case 2:
				break;
		}
	}
}

int func_11(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

void func_12(int iParam0)
{
	if (func_16())
	{
		return;
	}
	if (Global_14725)
	{
		func_14(0, 0);
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
	if (!func_13())
	{
		Global_14553.f_1 = 3;
	}
}

int func_13()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_14(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_15(0))
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

int func_15(int iParam0)
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

bool func_16()
{
	return unk_0x0E4018692D92041D(Global_1681628, 19);
}

int func_17()
{
	return Global_16883;
}

int func_18()
{
	if (Global_15866 == 0)
	{
		return 1;
	}
	return 0;
}

