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
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	struct<68> ScriptParam_0 = { 0, 0, 1132396544, 1132396544, 1132396544, 0, -1082130432, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1092616192 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
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
	if (unk_0x4210287E2833D44B(3))
	{
		func_19();
	}
	while (true)
	{
		switch (iLocal_45)
		{
			case 0:
				uLocal_46 = unk_0x42AA2CCF0B61DCD8("mission_complete");
				iLocal_45 = 1;
				break;
			
			case 1:
				if (unk_0xDAE4BC89A198A6AF(uLocal_46))
				{
					iLocal_45 = 2;
				}
				break;
			
			case 2:
				unk_0x4EA6290996DE4EDC(uLocal_46, "SET_MISSION_TITLE", ScriptParam_0, ScriptParam_0.f_1, 0, 0, 0);
				unk_0x587426517A26C00B(uLocal_46, "SET_MISSION_TITLE_COLOUR", ScriptParam_0.f_2, ScriptParam_0.f_2, ScriptParam_0.f_2, -1082130432, -1082130432);
				if (ScriptParam_0.f_5.f_1 != -1f && !unk_0x4030103C8B148AFC(ScriptParam_0.f_5.f_2))
				{
					unk_0x25B325CC908EE6A5(uLocal_46, "SET_TOTAL", SYSTEM::TO_FLOAT(ScriptParam_0.f_5), ScriptParam_0.f_5.f_1, -1f, -1f, -1f, ScriptParam_0.f_5.f_2, 0, 0, 0, 0);
				}
				unk_0x587426517A26C00B(uLocal_46, "SET_MEDAL", SYSTEM::TO_FLOAT(ScriptParam_0.f_5), -1082130432, -1082130432, -1082130432, -1082130432);
				unk_0x587426517A26C00B(uLocal_46, "SET_SOCIAL_CLUB_INFO", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				iVar0 = 0;
				while (iVar0 < ScriptParam_0.f_66 + 1)
				{
					unk_0x704F8697BB515627(uLocal_46, "SET_DATA_SLOT");
					unk_0x9E3D03981E2E9AD9(ScriptParam_0.f_9[iVar0 /*7*/]);
					unk_0x9E3D03981E2E9AD9(ScriptParam_0.f_9[iVar0 /*7*/].f_1);
					if (ScriptParam_0.f_9[iVar0 /*7*/].f_2 == 4)
					{
						unk_0x9E3D03981E2E9AD9(2);
						unk_0x9E3D03981E2E9AD9(0);
						unk_0x9E3D03981E2E9AD9(0);
						unk_0x35CA0C119E6A2A27("STRING");
						unk_0x4E2EF4B6B665F3F4(SYSTEM::FLOOR((ScriptParam_0.f_9[iVar0 /*7*/].f_3 * 1000f)), 6);
						unk_0xD4B2C39F7AD5A6A6();
						if (!unk_0x4030103C8B148AFC(ScriptParam_0.f_9[iVar0 /*7*/].f_5))
						{
							func_18(ScriptParam_0.f_9[iVar0 /*7*/].f_5);
						}
					}
					else if (ScriptParam_0.f_9[iVar0 /*7*/].f_2 == 8)
					{
						if (!unk_0x4030103C8B148AFC(ScriptParam_0.f_9[iVar0 /*7*/].f_5) && !unk_0x4030103C8B148AFC(ScriptParam_0.f_9[iVar0 /*7*/].f_6))
						{
							unk_0x35CA0C119E6A2A27(ScriptParam_0.f_9[iVar0 /*7*/].f_6);
							unk_0xA91D83F2CC1345A6(ScriptParam_0.f_9[iVar0 /*7*/].f_5);
							unk_0xD4B2C39F7AD5A6A6();
						}
					}
					else
					{
						unk_0x9E3D03981E2E9AD9(ScriptParam_0.f_9[iVar0 /*7*/].f_2);
						if ((ScriptParam_0.f_9[iVar0 /*7*/].f_3 % 1f) == 0f)
						{
							unk_0x82D42F43BE26EB72(ScriptParam_0.f_9[iVar0 /*7*/].f_3);
						}
						else
						{
							unk_0x35CA0C119E6A2A27("NUMBER");
							unk_0x21300A5159EC89B1(ScriptParam_0.f_9[iVar0 /*7*/].f_3, 2);
							unk_0xD4B2C39F7AD5A6A6();
						}
						if ((ScriptParam_0.f_9[iVar0 /*7*/].f_4 % 1f) == 0f)
						{
							unk_0x82D42F43BE26EB72(ScriptParam_0.f_9[iVar0 /*7*/].f_4);
						}
						else
						{
							unk_0x35CA0C119E6A2A27("NUMBER");
							unk_0x21300A5159EC89B1(ScriptParam_0.f_9[iVar0 /*7*/].f_4, 2);
							unk_0xD4B2C39F7AD5A6A6();
						}
						if (!unk_0x4030103C8B148AFC(ScriptParam_0.f_9[iVar0 /*7*/].f_5))
						{
							func_18(ScriptParam_0.f_9[iVar0 /*7*/].f_5);
						}
						if (!unk_0x4030103C8B148AFC(ScriptParam_0.f_9[iVar0 /*7*/].f_6))
						{
							func_18(ScriptParam_0.f_9[iVar0 /*7*/].f_6);
						}
					}
					unk_0x392841D58D2EED1D();
					iVar0++;
				}
				if (ScriptParam_0.f_5 != 0 && !unk_0x4030103C8B148AFC(ScriptParam_0.f_5.f_2))
				{
					unk_0x704F8697BB515627(uLocal_46, "SET_TOTAL");
					unk_0x9E3D03981E2E9AD9(ScriptParam_0.f_5);
					if (!unk_0x4030103C8B148AFC(ScriptParam_0.f_5.f_3))
					{
						func_18(ScriptParam_0.f_5.f_3);
					}
					else
					{
						unk_0x82D42F43BE26EB72(ScriptParam_0.f_5.f_1);
					}
					func_18(ScriptParam_0.f_5.f_2);
					unk_0x392841D58D2EED1D();
				}
				unk_0x704F8697BB515627(uLocal_46, "DRAW_MENU_LIST");
				unk_0x392841D58D2EED1D();
				func_12(1);
				func_9(&uLocal_47);
				if (!func_8(Global_112293.f_19095, 4096))
				{
					func_6(&(Global_112293.f_19095), 4096);
				}
				iLocal_45 = 3;
				break;
			
			case 3:
				if (((func_2(&uLocal_47) > ScriptParam_0.f_67 && ScriptParam_0.f_67 != -1f) || unk_0x8B6A925F148E0E94()) || Global_31490)
				{
					func_19();
				}
				else
				{
					func_1(1);
					unk_0x43D93129BD1AD792(uLocal_46, 0.1495f, 0.3159f, 0.2021f, 0.5111f, 255, 255, 255, 0, 0);
					if (unk_0x184AACD856873F4C(10))
					{
						unk_0xEFD424FDD55A6EC7(10);
					}
				}
				break;
		}
		SYSTEM::WAIT(0);
	}
	func_19();
}

void func_1(int iParam0)
{
	Global_77508 = iParam0;
	Global_77509 = iParam0;
}

float func_2(var uParam0)
{
	if (func_5(uParam0))
	{
		if (func_4(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_3(unk_0x234B68AC2E35ED5A(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_3(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(unk_0xDFB7BFA6482FEE1E());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x02BFF15CAA701972())
	{
		iVar2 = unk_0x551F46B3C7DFB654();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(unk_0xDFB7BFA6482FEE1E()) / 1000f);
}

bool func_4(var uParam0)
{
	return unk_0x234B68AC2E35ED5A(*uParam0, 2);
}

bool func_5(var uParam0)
{
	return unk_0x234B68AC2E35ED5A(*uParam0, 1);
}

void func_6(var uParam0, int iParam1)
{
	func_7(uParam0, iParam1);
}

void func_7(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_8(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_9(var uParam0)
{
	if (!func_5(uParam0))
	{
		func_10(uParam0);
	}
}

void func_10(var uParam0)
{
	func_11(uParam0, 0f);
}

void func_11(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_3(unk_0x234B68AC2E35ED5A(*uParam0, 4)) - fParam1);
	unk_0x191DDA30577F440A(uParam0, 1);
	unk_0xC664C0067EEAB8D1(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_12(int iParam0)
{
	if (func_17())
	{
		return;
	}
	if (Global_19984)
	{
		if (func_16())
		{
			func_14(1, 1);
		}
		else
		{
			func_14(0, 0);
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
	if (!func_13())
	{
		Global_19798.f_1 = 3;
	}
}

int func_13()
{
	if (Global_19798.f_1 == 1 || Global_19798.f_1 == 0)
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

int func_15(int iParam0)
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

bool func_16()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 5);
}

bool func_17()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 19);
}

void func_18(char* sParam0)
{
	unk_0x35CA0C119E6A2A27(sParam0);
	unk_0xD4B2C39F7AD5A6A6();
}

void func_19()
{
	unk_0x3D9BC07C93913E04(&uLocal_46);
	Global_31490 = 0;
	func_1(0);
	unk_0x4BFE89D21F9885DC();
}

