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
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	float fLocal_16 = 0f;
	float fLocal_17[8] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_18 = 0f;
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
	fLocal_16 = -99f;
	fLocal_18 = -1f;
	unk_0x84CFE9237092E41B();
	if (unk_0x9EC5BDC006623C42(32))
	{
		func_31();
	}
	while (true)
	{
		wait(0);
		func_30(0);
		func_29();
		func_22();
		func_19();
		func_14();
		func_2();
		iLocal_13++;
		if (iLocal_13 >= 16)
		{
			iLocal_13 = 0;
		}
		iLocal_14++;
		if (iLocal_14 >= 16)
		{
			iLocal_14 = 0;
		}
		iLocal_15++;
		if (iLocal_15 >= 5)
		{
			iLocal_15 = 0;
		}
		if (!func_1())
		{
			func_31();
		}
	}
}

int func_1()
{
	if (Global_37550)
	{
		return 1;
	}
	if (unk_0x117DAF3BF7232886(Global_37551))
	{
		return 1;
	}
	if (unk_0x1BCDA92AD0A7835B(joaat("drunk")) > 0)
	{
		return 1;
	}
	if (Global_37343 > 0)
	{
		return 1;
	}
	return 0;
}

void func_2()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	bool bVar8;
	
	if (!Global_37550)
	{
		return;
	}
	iVar1 = unk_0xE3903F59E2F22150();
	if (Global_37552 > iVar1 || Global_37552 == -1)
	{
		if (unk_0x71EC91BA8C88BCE0())
		{
			return;
		}
		iVar2 = func_13();
		iVar0 = (fLocal_17 - 1);
		while (iVar0 >= 1)
		{
			fLocal_17[iVar0] = fLocal_17[(iVar0 - 1)];
			iVar0 = (iVar0 + -1);
		}
		fLocal_17[0] = iVar2;
		iVar4 = 0;
		iVar0 = 0;
		while (iVar0 < fLocal_17)
		{
			fVar3 = (fVar3 + fLocal_17[iVar0]);
			iVar4++;
			iVar0++;
		}
		fVar3 = (fVar3 / IntToFloat(iVar4));
		fVar5 = func_8();
		if (Global_37555 != Global_37556)
		{
			fVar6 = (Global_37556 - Global_37555);
			Global_37555 = (Global_37555 + (fVar6 * 0.1f));
			if (unk_0x7EECA16E87982278((Global_37555 - Global_37556)) < 0.01f)
			{
				Global_37555 = Global_37556;
			}
		}
		if (!unk_0x3DAED611AA1401D5())
		{
			unk_0x3597107E70B7871E("DRUNK_SHAKE", ((Global_37555 * fVar3) * fVar5));
		}
		if ((unk_0xE3903F59E2F22150() % 100) == 0)
		{
			if (Global_37552 == -1)
			{
			}
			else
			{
				if (fLocal_18 == -1f)
				{
					fLocal_18 = fVar3;
				}
				unk_0x206C946C7AA76CE3(((Global_37555 * fVar3) * fVar5));
				unk_0x03B5E90BFD644101(((Global_37554 * fVar3) * fVar5));
				fLocal_18 = fVar3;
			}
		}
		if (((Global_37554 * fVar3) * fVar5) < 1f)
		{
			unk_0x91E6B282F48E0CBB(((Global_37554 * fVar3) * fVar5));
		}
		else
		{
			unk_0x91E6B282F48E0CBB(1f);
		}
		if (!unk_0x49AA03BD6DE82655())
		{
			unk_0x56237BAF00A8A544("DRUNK_SHAKE", (((Global_37555 * Global_37549) * fVar3) * fVar5));
		}
		unk_0x532F42EF70E629D3((((Global_37555 * Global_37549) * fVar3) * fVar5));
		if (unk_0x117DAF3BF7232886(Global_37551))
		{
			if (unk_0x4D8A5EFBD6ACB8D4(Global_37551))
			{
				unk_0x9BDA1567F3312F06(Global_37551, ((Global_37555 * fVar3) * fVar5));
			}
		}
		if (!unk_0x786AF4A44E1B5B4B(&Global_37578) && !unk_0x786AF4A44E1B5B4B(&Global_37562))
		{
			unk_0xDEFB5E2E5CBD460A(&Global_37562);
			StringCopy(&Global_37578, "", 16);
		}
		unk_0xE7D91A4B31716AE2();
		if (Global_37557 > 0f)
		{
			if (fLocal_16 != Global_37557)
			{
				if (unk_0x5E20A87157588563() != -1)
				{
				}
				else if (!unk_0xE6823F5DC843146F())
				{
					unk_0x55BF47ABA574B4EC(&Global_37558, 15f);
					fLocal_16 = Global_37557;
				}
			}
			else
			{
				if (unk_0x5E20A87157588563() != -1 && unk_0x11DFDC1A614E78C2() != -1)
				{
					fLocal_16 = -99f;
				}
				unk_0xDBA9E7389F779B73(2);
				iVar7 = (Global_37552 - iVar1);
				if (iVar7 <= (Global_37553 / 2) && Global_37552 != -1)
				{
					bVar8 = false;
					if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
					{
						if (unk_0x8B76D954998C9E96(unk_0x33CD235DF1E6A94E()))
						{
							bVar8 = true;
						}
					}
					if (func_6(unk_0x33CD235DF1E6A94E()))
					{
						Global_37552 += 1000;
					}
					else if (bVar8)
					{
						Global_37552 += 1000;
					}
					else if (unk_0x5E20A87157588563() != -1)
					{
						Global_37552 += 1000;
					}
					else if (func_5())
					{
						Global_37552 += 1000;
					}
					else
					{
						if (unk_0x11DFDC1A614E78C2() != -1)
						{
							unk_0x75F12D9731CD9783((to_float((Global_37553 / 2)) / 1000f));
						}
						fLocal_16 = -99f;
						Global_37557 = 0f;
						StringCopy(&Global_37558, "", 16);
					}
				}
			}
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 < fLocal_17)
	{
		fLocal_17[iVar0] = 0f;
		iVar0++;
	}
	fLocal_18 = -1f;
	fLocal_16 = -99f;
	func_3(1);
	iLocal_12 = 1;
}

void func_3(bool bParam0)
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
	func_4();
}

void func_4()
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

bool func_5()
{
	return Global_2507139;
}

int func_6(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_7(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_7(int iParam0)
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

float func_8()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 0.1f;
	iVar1 = func_12(unk_0x33CD235DF1E6A94E());
	iVar2 = func_9(unk_0x33CD235DF1E6A94E());
	if (iVar2 == 0)
	{
		if (iVar1 == 0)
		{
			fVar0 = 0.1f;
		}
		else
		{
			fVar0 = (to_float(iVar1) / to_float(10));
			if (fVar0 > 1f)
			{
				fVar0 = 1f;
			}
		}
	}
	else if (iVar2 == 0)
	{
		fVar0 = 0.1f;
	}
	else
	{
		fVar0 = (to_float(iVar2) / to_float(5));
		if (fVar0 > 1f)
		{
			fVar0 = 1f;
		}
	}
	return fVar0;
}

int func_9(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x765F6FEEFF39224F(iParam0))
	{
		return 0;
	}
	iVar0 = func_11(iParam0);
	iVar1 = func_10(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_37371[iVar1 /*5*/].f_4;
}

int func_10(int iParam0)
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

int func_11(int iParam0)
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

int func_12(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x765F6FEEFF39224F(iParam0))
	{
		return 0;
	}
	iVar0 = func_11(iParam0);
	iVar1 = func_10(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_37371[iVar1 /*5*/].f_3;
}

float func_13()
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = unk_0xE3903F59E2F22150();
	fVar1 = 1f;
	iVar2 = (Global_37552 - iVar0);
	if (iVar2 <= Global_37553)
	{
		if (Global_37552 != -1)
		{
			fVar1 = (to_float(iVar2) / to_float(Global_37553));
		}
	}
	return fVar1;
}

void func_14()
{
	if (Global_37345[iLocal_15 /*5*/] == 0)
	{
		func_15(iLocal_15);
	}
}

void func_15(int iParam0)
{
	int iVar0;
	struct<5> Var1;
	
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (unk_0xD62C4419A41F106A(Global_37345[iParam0 /*5*/].f_1, 0))
	{
		func_18(iParam0);
		return;
	}
	if (func_6(Global_37345[iParam0 /*5*/].f_1))
	{
		func_18(iParam0);
		return;
	}
	if (!unk_0x07AB0925A06BD5AD("drunk"))
	{
		unk_0x8F59DE352CFE248B("drunk");
		return;
	}
	iVar0 = func_17();
	if (iVar0 == -1)
	{
		func_18(iParam0);
		return;
	}
	Global_37371[iVar0 /*5*/] = func_16();
	Global_37371[iVar0 /*5*/].f_1 = Global_37345[iParam0 /*5*/].f_1;
	Global_37371[iVar0 /*5*/].f_2 = 0;
	Var1 = { Global_37345[iParam0 /*5*/] };
	start_new_script_with_args("drunk", &Var1, 5, 1424);
	unk_0x841080481716E87C("drunk");
	func_18(iParam0);
}

var func_16()
{
	var uVar0;
	
	uVar0 = Global_37342;
	Global_37342++;
	return uVar0;
}

int func_17()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_37371[iVar0 /*5*/] == -1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_18(int iParam0)
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

void func_19()
{
	if (!Global_37452[iLocal_13 /*6*/].f_2 == 6)
	{
		if (Global_37452[iLocal_13 /*6*/].f_1 == 0)
		{
			func_21(iLocal_13);
			func_20(iLocal_13);
		}
	}
}

void func_20(int iParam0)
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

void func_21(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_37452[iParam0 /*6*/].f_2;
	switch (iVar0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			break;
		
		default:
			break;
	}
}

void func_22()
{
	int iVar0;
	
	iVar0 = -1;
	if (!Global_37371[iLocal_14 /*5*/] == -1)
	{
		iVar0 = func_28(Global_37371[iLocal_14 /*5*/], 0);
		if (iVar0 == -1)
		{
			func_23(Global_37371[iLocal_14 /*5*/]);
		}
		else
		{
			func_20(iVar0);
		}
	}
}

void func_23(int iParam0)
{
	int iVar0;
	
	func_26(iParam0);
	iVar0 = func_25(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	func_24(iVar0);
}

void func_24(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_37371[iParam0 /*5*/] = -1;
	Global_37371[iParam0 /*5*/].f_1 = 0;
	Global_37371[iParam0 /*5*/].f_2 = -1;
	Global_37371[iParam0 /*5*/].f_3 = 0;
	Global_37371[iParam0 /*5*/].f_4 = 0;
}

int func_25(int iParam0)
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

void func_26(int iParam0)
{
	func_30(iParam0);
	func_27(iParam0);
}

void func_27(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_37452[iVar0 /*6*/].f_1)
		{
			func_20(iVar0);
		}
		iVar0++;
	}
}

int func_28(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam1 == Global_37452[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_37452[iVar0 /*6*/])
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_29()
{
	if (Global_37452[iLocal_13 /*6*/] == 1)
	{
		Global_37452[iLocal_13 /*6*/] = 0;
	}
}

void func_30(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_37452[iVar0 /*6*/])
		{
			func_20(iVar0);
		}
		iVar0++;
	}
}

void func_31()
{
	func_32();
	if (!iLocal_12)
	{
		func_3(1);
	}
	unk_0x5894DC159447E10A();
}

void func_32()
{
	func_35();
	func_34();
	func_33();
	func_4();
	Global_37583 = 0;
	Global_37582 = 0;
	Global_37343 = 0;
	unk_0x941B4C548836797D("drunk");
}

void func_33()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_20(iVar0);
		iVar0++;
	}
}

void func_34()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_24(iVar0);
		iVar0++;
	}
}

void func_35()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_18(iVar0);
		iVar0++;
	}
}

