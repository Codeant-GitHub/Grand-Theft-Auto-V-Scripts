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
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	bool bLocal_23 = 0;
	bool bLocal_24 = 0;
	float fLocal_25 = 0f;
	bool bLocal_26 = 0;
	bool bLocal_27 = 0;
	float fLocal_28 = 0f;
	bool bLocal_29 = 0;
	bool bLocal_30 = 0;
	float fLocal_31 = 0f;
	bool bLocal_32 = 0;
	bool bLocal_33 = 0;
	float fLocal_34 = 0f;
	bool bLocal_35 = 0;
	bool bLocal_36 = 0;
	float fLocal_37 = 0f;
	bool bLocal_38 = 0;
	bool bLocal_39 = 0;
	float fLocal_40 = 0f;
	bool bLocal_41 = 0;
	bool bLocal_42 = 0;
	float fLocal_43 = 0f;
	bool bLocal_44 = 0;
	bool bLocal_45 = 0;
	float fLocal_46 = 0f;
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
	iLocal_20 = unk_0x2C0ED4741A007C6A(100f, 100f, 30f);
	iLocal_22 = 1;
	fLocal_25 = 0f;
	fLocal_28 = 0f;
	fLocal_31 = 0f;
	fLocal_34 = 0f;
	fLocal_37 = 0f;
	fLocal_40 = 0f;
	fLocal_43 = 0f;
	fLocal_46 = 0f;
	if (unk_0xBB5E373390A5F824())
	{
		unk_0xACCDA78123DB57B0(500);
	}
	if (unk_0x9EC5BDC006623C42(3))
	{
		func_2();
	}
	iLocal_18 = unk_0x199B24FF79A52CCF("p_bubblegum");
	while (!unk_0x11AE7F6A404414C9(iLocal_18))
	{
		wait(0);
	}
	while (true)
	{
		if (iLocal_21 == 1)
		{
		}
		if (iLocal_22 == 1)
		{
			iLocal_22 = 0;
			iLocal_19 = unk_0x00E62F31D05EB2AC("DEFAULT_SCRIPTED_CAMERA", true);
			if (unk_0x117DAF3BF7232886(iLocal_19))
			{
				unk_0x2AAFDB86F2CBFB67(iLocal_19, -160.6632f, -1072.144f, -1615.471f, -89.4999f, -0.2863f, 58.1189f, 45f, 0, 1, 1, 2);
				unk_0x6ADA542E698077EB(iLocal_19, 0.01f);
				unk_0x31447C964D5B1A9B(iLocal_19, 0.02f);
				unk_0x63F0B040CE6EDF0F(true, false, 3000, 1, 0, 0);
			}
			unk_0xA20C1DE21F2F071C(iLocal_20, 66);
		}
		iLocal_21 = 1;
		unk_0x5A2C46836B4DF5B3(iLocal_18, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
		func_1(iLocal_18);
		wait(0);
	}
}

void func_1(int iParam0)
{
	if (Global_14532 == 0)
	{
		if (unk_0xF1CDE9FD207C4CD8(2, 189) || unk_0xF1CDE9FD207C4CD8(2, 190))
		{
			Global_14532 = 1;
			settimera(0);
		}
	}
	else if (timera() > 50)
	{
		Global_14532 = 0;
	}
	if (Global_14532 == 0)
	{
		if (unk_0x833B1A3D9F713E03(2, 189))
		{
			bLocal_23 = true;
			fLocal_25 = 1f;
		}
		if (unk_0xF1CDE9FD207C4CD8(2, 189))
		{
			bLocal_23 = true;
			fLocal_25 = 1f;
		}
		if (!unk_0xF1CDE9FD207C4CD8(2, 189))
		{
			bLocal_23 = false;
			fLocal_25 = 0f;
		}
		if (!bLocal_23 == bLocal_24)
		{
			bLocal_24 = bLocal_23;
			unk_0xBB698266C5FDF0A7(iParam0, "SET_INPUT_EVENT");
			unk_0x4D9DA18AB3C2A466(10);
			unk_0x8DAB5B12D7B9AD29(fLocal_25);
			unk_0x818901B332D5541D();
		}
		if (unk_0x833B1A3D9F713E03(2, 190))
		{
			bLocal_26 = true;
			fLocal_28 = 1f;
		}
		if (unk_0xF1CDE9FD207C4CD8(2, 190))
		{
			bLocal_26 = true;
			fLocal_28 = 1f;
		}
		if (!unk_0xF1CDE9FD207C4CD8(2, 190))
		{
			bLocal_26 = false;
			fLocal_28 = 0f;
		}
		if (!bLocal_26 == bLocal_27)
		{
			bLocal_27 = bLocal_26;
			unk_0xBB698266C5FDF0A7(iParam0, "SET_INPUT_EVENT");
			unk_0x4D9DA18AB3C2A466(11);
			unk_0x8DAB5B12D7B9AD29(fLocal_28);
			unk_0x818901B332D5541D();
		}
		if (unk_0x833B1A3D9F713E03(2, 188))
		{
			bLocal_29 = true;
			fLocal_31 = 1f;
		}
		if (unk_0xF1CDE9FD207C4CD8(2, 188))
		{
			bLocal_29 = true;
			fLocal_31 = 1f;
		}
		if (!unk_0xF1CDE9FD207C4CD8(2, 188))
		{
			bLocal_29 = false;
			fLocal_31 = 0f;
		}
		if (!bLocal_29 == bLocal_30)
		{
			bLocal_30 = bLocal_29;
			unk_0xBB698266C5FDF0A7(iParam0, "SET_INPUT_EVENT");
			unk_0x4D9DA18AB3C2A466(8);
			unk_0x8DAB5B12D7B9AD29(fLocal_31);
			unk_0x818901B332D5541D();
		}
		if (unk_0x833B1A3D9F713E03(2, 187))
		{
			bLocal_32 = true;
			fLocal_34 = 1f;
		}
		if (unk_0xF1CDE9FD207C4CD8(2, 187))
		{
			bLocal_32 = true;
			fLocal_34 = 1f;
		}
		if (!unk_0xF1CDE9FD207C4CD8(2, 187))
		{
			bLocal_32 = false;
			fLocal_34 = 0f;
		}
		if (!bLocal_32 == bLocal_33)
		{
			bLocal_33 = bLocal_32;
			unk_0xBB698266C5FDF0A7(iParam0, "SET_INPUT_EVENT");
			unk_0x4D9DA18AB3C2A466(9);
			unk_0x8DAB5B12D7B9AD29(fLocal_34);
			unk_0x818901B332D5541D();
		}
		if (unk_0x833B1A3D9F713E03(2, 202))
		{
			bLocal_35 = true;
			fLocal_37 = 1f;
		}
		if (unk_0xF1CDE9FD207C4CD8(2, 202))
		{
			bLocal_35 = true;
			fLocal_37 = 1f;
		}
		if (!unk_0xF1CDE9FD207C4CD8(2, 202))
		{
			bLocal_35 = false;
			fLocal_37 = 0f;
		}
		if (!bLocal_35 == bLocal_36)
		{
			bLocal_36 = bLocal_35;
			unk_0xBB698266C5FDF0A7(iParam0, "SET_INPUT_EVENT");
			unk_0x4D9DA18AB3C2A466(17);
			unk_0x8DAB5B12D7B9AD29(fLocal_37);
			unk_0x818901B332D5541D();
		}
		if (unk_0x833B1A3D9F713E03(2, 204))
		{
			bLocal_38 = true;
			fLocal_40 = 1f;
		}
		if (unk_0xF1CDE9FD207C4CD8(2, 204))
		{
			bLocal_38 = true;
			fLocal_40 = 1f;
		}
		if (!unk_0xF1CDE9FD207C4CD8(2, 204))
		{
			bLocal_38 = false;
			fLocal_40 = 0f;
		}
		if (!bLocal_38 == bLocal_39)
		{
			bLocal_39 = bLocal_38;
			unk_0xBB698266C5FDF0A7(iParam0, "SET_INPUT_EVENT");
			unk_0x4D9DA18AB3C2A466(15);
			unk_0x8DAB5B12D7B9AD29(fLocal_40);
			unk_0x818901B332D5541D();
		}
		if (unk_0x833B1A3D9F713E03(2, 201))
		{
			bLocal_41 = true;
			fLocal_43 = 1f;
		}
		if (unk_0xF1CDE9FD207C4CD8(2, 201))
		{
			bLocal_41 = true;
			fLocal_43 = 1f;
		}
		if (!unk_0xF1CDE9FD207C4CD8(2, 201))
		{
			bLocal_41 = false;
			fLocal_43 = 0f;
		}
		if (!bLocal_41 == bLocal_42)
		{
			bLocal_42 = bLocal_41;
			unk_0xBB698266C5FDF0A7(iParam0, "SET_INPUT_EVENT");
			unk_0x4D9DA18AB3C2A466(16);
			unk_0x8DAB5B12D7B9AD29(fLocal_43);
			unk_0x818901B332D5541D();
		}
		if (unk_0x833B1A3D9F713E03(2, 203))
		{
			bLocal_44 = true;
			fLocal_46 = 1f;
		}
		if (unk_0xF1CDE9FD207C4CD8(2, 203))
		{
			bLocal_44 = true;
			fLocal_46 = 1f;
		}
		if (!unk_0xF1CDE9FD207C4CD8(2, 203))
		{
			bLocal_44 = false;
			fLocal_46 = 0f;
		}
		if (!bLocal_44 == bLocal_45)
		{
			bLocal_45 = bLocal_44;
			unk_0xBB698266C5FDF0A7(iParam0, "SET_INPUT_EVENT");
			unk_0x4D9DA18AB3C2A466(14);
			unk_0x8DAB5B12D7B9AD29(fLocal_46);
			unk_0x818901B332D5541D();
		}
	}
}

void func_2()
{
	if (unk_0x117DAF3BF7232886(iLocal_19))
	{
		unk_0x2F8A4DF7D0DFF0A8(iLocal_19, 0);
	}
	unk_0x63F0B040CE6EDF0F(false, false, 3000, 1, 0, 0);
	func_3(0);
	unk_0xD5CD4268EDE6F40E(0);
	unk_0xEDF90B96BED57BCE(1);
	unk_0x83A1D480DB0B52CC(&iLocal_18);
	unk_0x5894DC159447E10A();
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		func_9();
		if (Global_14553.f_1 == 10 || Global_14553.f_1 == 9)
		{
			unk_0x8950ED5730F62EE8(&Global_2424, 16);
		}
		Global_14553.f_1 = 1;
		if (func_8(0))
		{
			func_4(0);
		}
	}
	else if (Global_14553.f_1 == 1)
	{
		if (!Global_14553.f_1 == 0)
		{
			Global_14553.f_1 = 3;
		}
	}
}

void func_4(int iParam0)
{
	if (func_7())
	{
		return;
	}
	if (Global_14725)
	{
		func_6(0, 0);
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
	if (!func_5())
	{
		Global_14553.f_1 = 3;
	}
}

int func_5()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_8(0))
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

bool func_7()
{
	return unk_0x0E4018692D92041D(Global_1681628, 19);
}

int func_8(int iParam0)
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

void func_9()
{
	if (Global_14553.f_1 == 9 || Global_14553.f_1 == 10)
	{
		Global_15919 = 0;
		Global_15915 = 1;
	}
}

