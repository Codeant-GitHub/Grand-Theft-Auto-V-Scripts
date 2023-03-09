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
	int iLocal_19[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	struct<6> Local_49[165];
	struct<6> Local_50[165];
	struct<8> Local_51[19];
	int iLocal_52 = 0;
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
	unk_0x84CFE9237092E41B();
	if (unk_0x1BCDA92AD0A7835B(joaat("cellphone_flashhand")) == 0)
	{
		func_47();
	}
	func_41();
	Global_16932 = 0;
	Global_106565.f_14045[Global_14553 /*20*/].f_18 = 0;
	Global_14724 = 0;
	func_40(Global_14534, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_38();
	func_37();
	if (Global_14553.f_1 > 3)
	{
		Global_14553.f_1 = 7;
	}
	iLocal_30 = unk_0xE3903F59E2F22150();
	Global_14557 = 1;
	while (true)
	{
		wait(0);
		if (iLocal_29 == 0)
		{
			iLocal_31 = unk_0xE3903F59E2F22150();
			if ((iLocal_31 - iLocal_30) > 500)
			{
				iLocal_29 = 1;
			}
		}
		if (Global_14553.f_1 != 9)
		{
			switch (Global_14553.f_1)
			{
				case 7:
					if (Global_16932 == 0)
					{
						if (Global_2538128 == 0)
						{
							func_32();
							func_28();
						}
					}
					break;
				
				case 8:
					if (Global_16932 == 1)
					{
						func_5();
						func_32();
					}
					break;
				
				default:
					break;
			}
			if (Global_16932 == 0)
			{
				if (func_4())
				{
					func_47();
				}
			}
			else if (func_3(2, Global_14521, 0) || unk_0x0E4018692D92041D(Global_2424, 12))
			{
				if (unk_0xCE3CFF625BEBAA04(&(Global_106565.f_14135[iLocal_23 /*104*/]), "CELL_FINV"))
				{
				}
				else
				{
					wait(0);
					unk_0xCE689A8E8C42ED78(&Global_2424, 12);
					func_2();
					Global_14531 = 1;
					Global_16932 = 0;
					if (Global_14553.f_1 > 3)
					{
						Global_14553.f_1 = 7;
					}
					if (unk_0x1BCDA92AD0A7835B(joaat("cellphone_flashhand")) == 0)
					{
						func_47();
					}
					func_40(Global_14534, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_38();
					func_37();
					if (Global_106565.f_14135[iLocal_23 /*104*/].f_29 > 0)
					{
						if (Global_106565.f_14135[iLocal_23 /*104*/].f_31 == 1)
						{
							Global_106565.f_14135[iLocal_23 /*104*/].f_29 = 4;
							Global_106565.f_14135[iLocal_23 /*104*/].f_24 = 1;
						}
						else
						{
							Global_106565.f_14135[iLocal_23 /*104*/].f_29 = 4;
							Global_106565.f_14135[iLocal_23 /*104*/].f_24 = 1;
						}
					}
				}
			}
		}
		if (unk_0x1BCDA92AD0A7835B(joaat("cellphone_flashhand")) == 0)
		{
			func_47();
		}
		if (func_1())
		{
			func_47();
		}
	}
}

int func_1()
{
	if (((Global_14553.f_1 == 1 || Global_14553.f_1 == 3) || Global_14553.f_1 == 0) || Global_14497 == 1)
	{
		Global_14540 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		unk_0x0F8EAEEC97DDBCB3(-1, "Menu_Back", &Global_14542, 1);
	}
}

int func_3(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x833B1A3D9F713E03(iParam0, iParam1) || (iParam2 == 1 && unk_0x5EBE50D55314CEAD(iParam0, iParam1)))
	{
		if (unk_0x4CE1DD5CFC1F941E())
		{
			if (unk_0x86CF3D110E5DD82F() == 0 || (unk_0xE3F7CBC28F745843() && unk_0x5D79F3D06EB318A0(2)))
			{
				return 0;
			}
		}
		if (unk_0xD9C92B0885A075F8() || unk_0x15C85368E432C647())
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

int func_4()
{
	if (Global_3029 == 1 || Global_14553.f_1 < 7)
	{
		Global_14540 = 1;
		return 1;
	}
	return 0;
}

void func_5()
{
	func_6();
}

void func_6()
{
	if (Global_106565.f_14135[iLocal_23 /*104*/].f_24 == 1)
	{
		if (Global_14531 == 0)
		{
			if (unk_0x833B1A3D9F713E03(2, Global_14524))
			{
				func_2();
				Global_14531 = 1;
				func_22();
				if (Global_106565.f_14135[iLocal_23 /*104*/].f_27 == 1)
				{
					Global_106565.f_14135[iLocal_23 /*104*/].f_99[0] = 0;
					Global_106565.f_14135[iLocal_23 /*104*/].f_99[1] = 0;
					Global_106565.f_14135[iLocal_23 /*104*/].f_99[2] = 0;
				}
				else
				{
					Global_106565.f_14135[iLocal_23 /*104*/].f_99[Global_14553] = 0;
				}
				if (func_21(iLocal_23))
				{
				}
				else
				{
					Global_106565.f_14135[iLocal_23 /*104*/].f_24 = 0;
					Global_106565.f_14135[iLocal_23 /*104*/].f_28 = 0;
				}
				unk_0x98E765CB9E761233(Global_106565.f_14135[iLocal_23 /*104*/].f_16);
				func_40(Global_14534, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_38();
				if (iLocal_21 > 0)
				{
					iLocal_21 = (iLocal_21 - 1);
				}
				func_37();
				if (Global_14553.f_1 > 3)
				{
					Global_14553.f_1 = 7;
					Global_16932 = 0;
				}
			}
		}
	}
	else if (Global_14531 == 0)
	{
		if (unk_0xF1CDE9FD207C4CD8(2, Global_14525))
		{
			if (iLocal_25 == 1)
			{
				if (Global_14553.f_1 > 3)
				{
					StringCopy(&Global_68791, unk_0x434854E9CAE13C4A(&Global_16907), 64);
					Global_68920 = 7;
					unk_0x8950ED5730F62EE8(&Global_2424, 10);
					Global_14553.f_1 = 6;
				}
				func_47();
			}
		}
	}
	if (Global_106565.f_14135[iLocal_23 /*104*/].f_31 == 1)
	{
		if (Global_14531 == 0)
		{
			if (func_3(2, Global_14525, 0))
			{
				func_18();
				Global_14531 = 1;
				Global_106565.f_14135[iLocal_23 /*104*/].f_29 = 2;
				Global_106565.f_14135[iLocal_23 /*104*/].f_24 = 1;
				Global_106565.f_14135[iLocal_23 /*104*/].f_31 = 0;
				unk_0xCE689A8E8C42ED78(&Global_2423, 17);
				Global_16932 = 0;
				if (Global_14553.f_1 > 3)
				{
					Global_14553.f_1 = 7;
				}
				func_40(Global_14534, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_38();
				func_37();
			}
		}
	}
	if (Global_14531 == 0 && iLocal_29 == 1)
	{
		if (func_3(2, Global_14522, 0))
		{
			Global_14531 = 1;
			if (Global_106565.f_14135[iLocal_23 /*104*/].f_29 > 0)
			{
				func_18();
				Global_106565.f_14135[iLocal_23 /*104*/].f_29 = 3;
				Global_106565.f_14135[iLocal_23 /*104*/].f_24 = 1;
				Global_16932 = 0;
				if (Global_14553.f_1 > 3)
				{
					Global_14553.f_1 = 7;
				}
				func_40(Global_14534, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_38();
				func_37();
			}
			else if (Global_106565.f_14135[iLocal_23 /*104*/].f_30 == 1)
			{
				func_18();
				Global_1738 = 144;
				if (Global_14553.f_1 > 3)
				{
					Global_14553.f_1 = 10;
					if (func_17() == 0)
					{
						func_15();
					}
				}
				func_14("appContacts");
				Global_14551 = start_new_script("appContacts", 4000);
				unk_0x841080481716E87C("appContacts");
				Global_1738 = Global_106565.f_14135[iLocal_23 /*104*/].f_17;
				if (Global_106565.f_28044[Global_1738 /*29*/].f_24[Global_14553] == 0)
				{
					func_13(Global_14534, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_117[Global_1738 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
				}
				else
				{
					func_13(Global_14534, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_106565.f_28044[Global_1738 /*29*/].f_3), &(Global_106565.f_28044[Global_1738 /*29*/].f_7), "CELL_211", &(Global_106565.f_28044[Global_1738 /*29*/].f_3), 0);
				}
				func_7();
				func_47();
			}
		}
	}
}

void func_7()
{
	vector3 vVar0[24];
	
	if (Global_14536 == 1)
	{
		return;
	}
	if (Global_14553.f_1 < 4)
	{
		return;
	}
	while (!unk_0x11AE7F6A404414C9(Global_14534))
	{
		if (Global_71590)
		{
			return;
		}
		wait(0);
	}
	switch (Global_14553.f_1)
	{
		case 6:
			func_40(Global_14534, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_11(Global_3028);
			if (Global_3028 == 1)
			{
				func_40(Global_14534, "DISPLAY_VIEW", 1f, to_float(Global_14557), -1082130432, -1082130432, -1082130432);
				Global_14533 = Global_14557;
			}
			else
			{
				func_40(Global_14534, "DISPLAY_VIEW", 1f, to_float(Global_14558), -1082130432, -1082130432, -1082130432);
				Global_14533 = Global_14558;
			}
			if (Global_14541)
			{
				func_13(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_13(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_13(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14727 == 0)
			{
				func_13(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xCE689A8E8C42ED78(&Global_2423, 17);
			}
			else if (Global_71590)
			{
				func_13(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xCE689A8E8C42ED78(&Global_2423, 17);
			}
			else
			{
				if (Global_14726 == 1)
				{
					if (Global_14541)
					{
						func_13(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_13(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14541)
				{
					func_13(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_13(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0x8950ED5730F62EE8(&Global_2423, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_40(Global_14534, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_13(Global_14534, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_13(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xCE689A8E8C42ED78(&Global_2423, 17);
			if (unk_0x0E4018692D92041D(Global_2423, 20))
			{
				func_13(Global_14534, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14541)
			{
				func_13(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14496)
				{
					func_13(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_13(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14552 == 1)
			{
				func_10();
				func_40(Global_14534, "SET_THEME", to_float(Global_106565.f_14045[Global_14553 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15879)
				{
					unk_0xBB698266C5FDF0A7(Global_14534, "SET_DATA_SLOT");
					unk_0x4D9DA18AB3C2A466(4);
					unk_0x4D9DA18AB3C2A466(0);
					unk_0x4D9DA18AB3C2A466(2);
					unk_0x713FEBE56D2BD403("CELL_CONDFON");
					unk_0xD61E5ED1D4E687A5(&Global_15881);
					unk_0x36F3AA9FFAAF8606();
					func_9("CELL_300");
					func_9("CELL_217");
					func_9("CELL_217");
					unk_0x818901B332D5541D();
				}
				else if (Global_106565.f_28044[Global_1738 /*29*/].f_24[Global_14553] == 0)
				{
					func_13(Global_14534, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_117[Global_1738 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_13(Global_14534, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_106565.f_28044[Global_1738 /*29*/].f_3), &(Global_106565.f_28044[Global_1738 /*29*/].f_7), "CELL_217", &(Global_106565.f_28044[Global_1738 /*29*/].f_3), 0);
				}
				func_40(Global_14534, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15866 == 4 || Global_15866 == 3)
			{
				func_40(Global_14534, "SET_THEME", to_float(Global_106565.f_14045[Global_14553 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_10();
				if (Global_15879)
				{
					unk_0xBB698266C5FDF0A7(Global_14534, "SET_DATA_SLOT");
					unk_0x4D9DA18AB3C2A466(4);
					unk_0x4D9DA18AB3C2A466(0);
					unk_0x4D9DA18AB3C2A466(2);
					unk_0x713FEBE56D2BD403("CELL_CONDFON");
					unk_0xD61E5ED1D4E687A5(&Global_15881);
					unk_0x36F3AA9FFAAF8606();
					func_9("CELL_300");
					func_9("CELL_219");
					func_9("CELL_219");
					unk_0x818901B332D5541D();
				}
				else
				{
					if (Global_16124)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (Global_106565.f_28044[Global_1738 /*29*/].f_24[Global_14553] == 0)
					{
						func_40(Global_14534, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_13(Global_14534, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_117[Global_1738 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_40(Global_14534, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_13(Global_14534, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_106565.f_28044[Global_1738 /*29*/].f_3), &(Global_106565.f_28044[Global_1738 /*29*/].f_7), &cVar0, &(Global_106565.f_28044[Global_1738 /*29*/].f_3), 0);
					}
				}
				func_40(Global_14534, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_8();
			break;
		
		default:
			break;
	}
}

void func_8()
{
	if (unk_0x11AE7F6A404414C9(Global_14534))
	{
		if (Global_14552 == 1)
		{
			if (Global_14541)
			{
				func_13(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15913)
			{
				func_13(Global_14534, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0x0E4018692D92041D(Global_2423, 20))
			{
				func_13(Global_14534, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14541)
			{
				func_13(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_13(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xCE689A8E8C42ED78(&Global_2423, 17);
		}
		else
		{
			func_13(Global_14534, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_13(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xCE689A8E8C42ED78(&Global_2423, 17);
			if (unk_0x0E4018692D92041D(Global_2423, 20))
			{
				func_13(Global_14534, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14541)
			{
				func_13(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14496)
				{
					func_13(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_13(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_9(char* sParam0)
{
	unk_0x713FEBE56D2BD403(sParam0);
	unk_0x36F3AA9FFAAF8606();
}

void func_10()
{
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		if (Global_14553 == 0)
		{
			switch (Global_106565.f_14045[Global_14553 /*20*/].f_6)
			{
				case 1:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 0);
					break;
				
				case 2:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 1);
					break;
				
				case 3:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 2);
					break;
				
				case 4:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 3);
					break;
				
				case 5:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 4);
					break;
				
				case 6:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 5);
					break;
				
				case 7:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14553 == 1)
		{
			switch (Global_106565.f_14045[Global_14553 /*20*/].f_6)
			{
				case 1:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 6);
					break;
				
				case 2:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 0);
					break;
				
				case 3:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 1);
					break;
				
				case 4:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 2);
					break;
				
				case 5:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 3);
					break;
				
				case 6:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 4);
					break;
				
				case 7:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14553 == 2)
		{
			switch (Global_106565.f_14045[Global_14553 /*20*/].f_6)
			{
				case 1:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 5);
					break;
				
				case 2:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 6);
					break;
				
				case 3:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 1);
					break;
				
				case 4:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 0);
					break;
				
				case 5:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 2);
					break;
				
				case 6:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 3);
					break;
				
				case 7:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14553 == 3)
		{
			switch (Global_4269584)
			{
				case 1:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 0);
					break;
				
				case 2:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 1);
					break;
				
				case 3:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 2);
					break;
				
				case 4:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 3);
					break;
				
				case 5:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 4);
					break;
				
				case 6:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 5);
					break;
				
				case 7:
					unk_0xBA85A9F236C12DF4(unk_0x95B959F18401C09A(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_11(int iParam0)
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
		if (func_12(14))
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
								func_9(&(Global_2430[iVar1 /*15*/]));
								unk_0x4D9DA18AB3C2A466(iVar2);
								unk_0x818901B332D5541D();
							}
							if (Global_2458608)
							{
								if (iVar1 == 14)
								{
									func_13(Global_14534, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2430[iVar1 /*15*/].f_10), to_float(Global_16929), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_13(Global_14534, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2430[iVar1 /*15*/].f_10), to_float(Global_16934), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_13(Global_14534, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2430[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_13(Global_14534, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2430[iVar1 /*15*/].f_10), to_float(iVar6), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_13(Global_14534, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2430[iVar1 /*15*/].f_10), to_float(Global_16929), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xBB698266C5FDF0A7(Global_14534, "SET_DATA_SLOT");
								unk_0x4D9DA18AB3C2A466(1);
								unk_0x4D9DA18AB3C2A466(iVar0);
								unk_0x4D9DA18AB3C2A466(Global_2430[iVar1 /*15*/].f_10);
								unk_0x4D9DA18AB3C2A466(0);
								func_9(&(Global_2430[iVar1 /*15*/]));
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
								func_9(&(Global_2430[iVar1 /*15*/]));
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
								func_9(&(Global_2430[iVar1 /*15*/]));
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
								func_9(&(Global_2430[iVar1 /*15*/]));
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
								func_9(&(Global_2430[iVar1 /*15*/]));
								unk_0x4D9DA18AB3C2A466(42);
								unk_0x818901B332D5541D();
							}
							else if (Global_2430[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1625180.f_1;
								func_13(Global_14534, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2430[iVar1 /*15*/].f_10), to_float(iVar9), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_13(Global_14534, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2430[iVar1 /*15*/].f_10), to_float(0), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
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

bool func_12(int iParam0)
{
	return Global_36425 == iParam0;
}

void func_13(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_9(sParam7);
	}
	if (!unk_0x786AF4A44E1B5B4B(sParam8))
	{
		func_9(sParam8);
	}
	if (!unk_0x786AF4A44E1B5B4B(sParam9))
	{
		func_9(sParam9);
	}
	if (!unk_0x786AF4A44E1B5B4B(sParam10))
	{
		func_9(sParam10);
	}
	if (!unk_0x786AF4A44E1B5B4B(sParam11))
	{
		func_9(sParam11);
	}
	unk_0x818901B332D5541D();
}

void func_14(char* sParam0)
{
	unk_0x8F59DE352CFE248B(sParam0);
	while (!unk_0x07AB0925A06BD5AD(sParam0))
	{
		wait(0);
	}
}

void func_15()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		if (func_16() && unk_0xB5D4E8F757C24136(unk_0x33CD235DF1E6A94E(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_71590)
	{
		if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()) && iVar1 == 0)
		{
			iVar2 = unk_0x063A77907C209DC4(unk_0x33CD235DF1E6A94E(), 0);
			if (Global_71590)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || unk_0xFB6FED41DB480F1C(unk_0x33CD235DF1E6A94E()))
				{
					iVar0 = 1;
				}
			}
			else if (unk_0xFB6FED41DB480F1C(unk_0x33CD235DF1E6A94E()))
			{
				iVar0 = 1;
			}
			if (!Global_14496)
			{
				if (Global_1738 != 128)
				{
					if (iVar0 == 0)
					{
						if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
						{
							if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
							{
							}
							else
							{
								if (Global_71590)
								{
									unk_0x5FEE418CE11E6DDE(unk_0x33CD235DF1E6A94E(), 244, false);
									unk_0x5FEE418CE11E6DDE(unk_0x33CD235DF1E6A94E(), 243, false);
									unk_0x5FEE418CE11E6DDE(unk_0x33CD235DF1E6A94E(), 242, false);
								}
								unk_0x8950ED5730F62EE8(&Global_2423, 11);
								unk_0x6E690C20044225CB(unk_0x33CD235DF1E6A94E(), 1, 1);
							}
						}
					}
				}
			}
		}
	}
}

int func_16()
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x7B9C4CEB6D33A226();
	iVar1 = unk_0xCB75C331DD5DDCCC(iVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

int func_17()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		if (Global_14553.f_1 == 10 || Global_14553.f_1 == 9)
		{
			if (Global_14496 == 0)
			{
				if (Global_1738 != 128)
				{
					if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
					{
						if (Global_15866 != 2)
						{
						}
					}
				}
			}
		}
		if (func_12(14))
		{
			return 0;
		}
		if (unk_0xB5D4E8F757C24136(unk_0x33CD235DF1E6A94E(), 0))
		{
			return 0;
		}
		if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
		{
			if (!unk_0x051B931529C63ADC())
			{
				if (unk_0x8AE34E8B10270D31(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0x04571D88090E0F77(unk_0x33CD235DF1E6A94E()) || unk_0x60F5B36347629584(unk_0x33CD235DF1E6A94E())) || unk_0x63E238348058FF52(unk_0x95B959F18401C09A())) || unk_0x4638E26BEF5EAFDC(unk_0x33CD235DF1E6A94E()))
		{
			return 0;
		}
		if (Global_105613)
		{
			return 0;
		}
	}
	if (Global_71590)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x7B9C4CEB6D33A226();
	iVar1 = unk_0xCB75C331DD5DDCCC(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0x051B931529C63ADC()))
	{
		iVar2 = 1;
		if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
		{
			if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
			{
				iVar3 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
				if ((((((((unk_0x9E374B5F44A76AE2(unk_0x541D5C57194E73C4(iVar3)) || unk_0xC3622EC0E0215A79(unk_0x541D5C57194E73C4(iVar3))) || unk_0x86A90EB179092418(unk_0x541D5C57194E73C4(iVar3))) || unk_0x541D5C57194E73C4(iVar3) == joaat("seashark")) || unk_0x541D5C57194E73C4(iVar3) == joaat("seashark2")) || unk_0x541D5C57194E73C4(iVar3) == joaat("rhino")) || unk_0x541D5C57194E73C4(iVar3) == joaat("submersible")) || unk_0x541D5C57194E73C4(iVar3) == joaat("submersible2")) || unk_0x541D5C57194E73C4(iVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4269586 || iVar2 == 1)
	{
		if (unk_0x1BCDA92AD0A7835B(joaat("apptrackify")) > 0 || Global_106565.f_14045.f_89)
		{
			if (unk_0x1BCDA92AD0A7835B(joaat("michael2")) > 0)
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
			return 1;
		}
	}
	return 0;
}

void func_18()
{
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		unk_0x0F8EAEEC97DDBCB3(-1, "Menu_Accept", &Global_14542, 1);
		func_19();
	}
}

void func_19()
{
	if (func_20())
	{
		unk_0x59444F5D27C23602(5);
	}
}

int func_20()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_71590)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x7B9C4CEB6D33A226();
	iVar1 = unk_0xCB75C331DD5DDCCC(iVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4269586 || iVar2)
	{
		return 1;
	}
	return 1;
}

int func_21(int iParam0)
{
	if ((Global_106565.f_14135[iParam0 /*104*/].f_99[0] == 1 || Global_106565.f_14135[iParam0 /*104*/].f_99[1] == 1) || Global_106565.f_14135[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_22()
{
	if (func_12(14))
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
		Global_14553 = func_23();
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

var func_23()
{
	func_24();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_24()
{
	int iVar0;
	
	if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
	{
		if (func_27(Global_106565.f_2357.f_539.f_4321) != unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()))
		{
			iVar0 = func_26(unk_0x33CD235DF1E6A94E());
			if (func_25(iVar0) && (!func_12(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_25(Global_106565.f_2357.f_539.f_4321))
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

bool func_25(int iParam0)
{
	return iParam0 < 3;
}

int func_26(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		iVar1 = unk_0x541D5C57194E73C4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_27(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_27(int iParam0)
{
	if (func_25(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_28()
{
	struct<16> Var0;
	char* sVar1;
	int iVar2;
	
	if (Global_14531 == 0)
	{
		if ((func_3(2, Global_14522, 0) || Global_106565.f_14045[Global_14553 /*20*/].f_17 == 1) || Global_16926 == 1)
		{
			if (Global_106565.f_14045[Global_14553 /*20*/].f_17 == 0 && Global_16926 == 0)
			{
				func_18();
			}
			Global_14531 = 1;
			iLocal_29 = 0;
			iLocal_23 = iLocal_19[iLocal_21];
			if (Global_106565.f_14135[iLocal_23 /*104*/].f_24 != 0)
			{
				if (Global_14553.f_1 > 3)
				{
					func_13(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
					unk_0xCE689A8E8C42ED78(&Global_2423, 17);
					Global_14553.f_1 = 8;
				}
				if (Global_106565.f_14045[Global_14553 /*20*/].f_17 == 1 || Global_16926 == 1)
				{
					iLocal_23 = iLocal_19[0];
					iLocal_22 = 0;
					if (Global_106565.f_14045[Global_14553 /*20*/].f_17 == 1)
					{
					}
					Global_16926 = 0;
				}
				else
				{
					settimerb(0);
					iLocal_27 = 0;
					unk_0xBB698266C5FDF0A7(Global_14534, "GET_CURRENT_SELECTION");
					iLocal_32 = unk_0x614EE52A69097A4C();
					while (!unk_0xBFCC17D9792F43AF(iLocal_32) && iLocal_27 == 0)
					{
						wait(0);
						if (timerb() > 2000)
						{
							iLocal_27 = 1;
						}
					}
					if (iLocal_27 == 1)
					{
						iLocal_28 = 0;
					}
					else
					{
						iLocal_28 = unk_0x82D58DA03789627A(iLocal_32);
					}
					if (iLocal_28 < 0)
					{
						iLocal_28 = 0;
					}
					iLocal_23 = iLocal_19[iLocal_28];
					iLocal_22 = iLocal_28;
				}
				Global_106565.f_14135[iLocal_23 /*104*/].f_28 = 1;
				iLocal_25 = 0;
				StringCopy(&Global_16907, "NO_HYPERLINK", 64);
				Var0 = { Global_106565.f_14135[iLocal_23 /*104*/] };
				StringConCat(&Var0, "_LINK", 64);
				if (unk_0xEAF855A7DC28BC8D(&Var0))
				{
					Global_16907 = { Var0 };
					iLocal_25 = 1;
					if (Global_14541)
					{
						func_13(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, "CELL_267", 0, 0, 0, 0);
					}
					else
					{
						func_13(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					unk_0x8950ED5730F62EE8(&Global_2423, 17);
					Global_106565.f_14135[iLocal_23 /*104*/].f_26 = 1;
					Global_106565.f_14135[iLocal_23 /*104*/].f_24 = 2;
				}
				if (Global_106565.f_14135[iLocal_23 /*104*/].f_26 == 0)
				{
					Global_106565.f_14135[iLocal_23 /*104*/].f_24 = 1;
				}
				func_31();
				unk_0xBB698266C5FDF0A7(Global_14534, "SET_DATA_SLOT");
				unk_0x4D9DA18AB3C2A466(7);
				unk_0x4D9DA18AB3C2A466(0);
				if (Global_106565.f_14135[iLocal_23 /*104*/].f_17 == 145)
				{
					unk_0x713FEBE56D2BD403("CELL_2000");
					unk_0xD61E5ED1D4E687A5(&(Global_106565.f_14135[iLocal_23 /*104*/].f_50));
					unk_0x36F3AA9FFAAF8606();
				}
				else
				{
					func_9(&(Global_106565.f_28044[Global_106565.f_14135[iLocal_23 /*104*/].f_17 /*29*/].f_3));
				}
				switch (Global_106565.f_14135[iLocal_23 /*104*/].f_32)
				{
					case 0:
						func_9(&(Global_106565.f_14135[iLocal_23 /*104*/]));
						break;
					
					case 1:
						unk_0x713FEBE56D2BD403(&(Global_106565.f_14135[iLocal_23 /*104*/]));
						unk_0xD61E5ED1D4E687A5(&(Global_106565.f_14135[iLocal_23 /*104*/].f_33));
						if (Global_106565.f_14135[iLocal_23 /*104*/].f_66 == 1 && !unk_0xCE3CFF625BEBAA04(&(Global_106565.f_14135[iLocal_23 /*104*/].f_67), "NULL"))
						{
							unk_0xD61E5ED1D4E687A5(&(Global_106565.f_14135[iLocal_23 /*104*/].f_67));
						}
						if ((Global_106565.f_14135[iLocal_23 /*104*/].f_66 == 2 && !unk_0xCE3CFF625BEBAA04(&(Global_106565.f_14135[iLocal_23 /*104*/].f_67), "NULL")) && !unk_0xCE3CFF625BEBAA04(&(Global_106565.f_14135[iLocal_23 /*104*/].f_83), "NULL"))
						{
							if (unk_0xEAF855A7DC28BC8D(&(Global_106565.f_14135[iLocal_23 /*104*/].f_67)))
							{
								unk_0xFA6BEE2B1507FF1E(&(Global_106565.f_14135[iLocal_23 /*104*/].f_67));
							}
							else
							{
								unk_0xD61E5ED1D4E687A5(&(Global_106565.f_14135[iLocal_23 /*104*/].f_67));
							}
							if (unk_0xEAF855A7DC28BC8D(&(Global_106565.f_14135[iLocal_23 /*104*/].f_83)))
							{
								unk_0xFA6BEE2B1507FF1E(&(Global_106565.f_14135[iLocal_23 /*104*/].f_83));
							}
							else
							{
								unk_0xD61E5ED1D4E687A5(&(Global_106565.f_14135[iLocal_23 /*104*/].f_83));
							}
						}
						unk_0x36F3AA9FFAAF8606();
						break;
					
					case 2:
						unk_0x713FEBE56D2BD403(&(Global_106565.f_14135[iLocal_23 /*104*/]));
						unk_0xE800DC85FDF60F85(Global_106565.f_14135[iLocal_23 /*104*/].f_49);
						unk_0x36F3AA9FFAAF8606();
						break;
					
					case 3:
						unk_0x713FEBE56D2BD403(&(Global_106565.f_14135[iLocal_23 /*104*/]));
						unk_0xD61E5ED1D4E687A5(&(Global_106565.f_14135[iLocal_23 /*104*/].f_33));
						unk_0xE800DC85FDF60F85(Global_106565.f_14135[iLocal_23 /*104*/].f_49);
						if (Global_106565.f_14135[iLocal_23 /*104*/].f_66 == 1 && !unk_0xCE3CFF625BEBAA04(&(Global_106565.f_14135[iLocal_23 /*104*/].f_67), "NULL"))
						{
							unk_0xD61E5ED1D4E687A5(&(Global_106565.f_14135[iLocal_23 /*104*/].f_67));
						}
						if ((Global_106565.f_14135[iLocal_23 /*104*/].f_66 == 2 && !unk_0xCE3CFF625BEBAA04(&(Global_106565.f_14135[iLocal_23 /*104*/].f_67), "NULL")) && !unk_0xCE3CFF625BEBAA04(&(Global_106565.f_14135[iLocal_23 /*104*/].f_83), "NULL"))
						{
							if (unk_0xEAF855A7DC28BC8D(&(Global_106565.f_14135[iLocal_23 /*104*/].f_67)))
							{
								unk_0xFA6BEE2B1507FF1E(&(Global_106565.f_14135[iLocal_23 /*104*/].f_67));
							}
							else
							{
								unk_0xD61E5ED1D4E687A5(&(Global_106565.f_14135[iLocal_23 /*104*/].f_67));
							}
							if (unk_0xEAF855A7DC28BC8D(&(Global_106565.f_14135[iLocal_23 /*104*/].f_83)))
							{
								unk_0xFA6BEE2B1507FF1E(&(Global_106565.f_14135[iLocal_23 /*104*/].f_83));
							}
							else
							{
								unk_0xD61E5ED1D4E687A5(&(Global_106565.f_14135[iLocal_23 /*104*/].f_83));
							}
						}
						unk_0x36F3AA9FFAAF8606();
						break;
					
					case 4:
						func_30(iLocal_23);
						break;
					
					case 5:
						func_30(iLocal_23);
						break;
					
					case 6:
						func_30(iLocal_23);
						break;
					
					case 7:
						func_30(iLocal_23);
						break;
					
					case 8:
						func_30(iLocal_23);
						break;
					
					case 9:
						func_30(iLocal_23);
						break;
					
					case 10:
						func_30(iLocal_23);
						break;
					
					case 11:
						func_30(iLocal_23);
						break;
				}
				if (Global_16935[iLocal_23] == 0)
				{
					if (Global_106565.f_14135[iLocal_23 /*104*/].f_17 == 159)
					{
						func_9("CELL_COMIC_P");
					}
					else
					{
						func_9(&(Global_106565.f_28044[Global_106565.f_14135[iLocal_23 /*104*/].f_17 /*29*/].f_7));
					}
				}
				else
				{
					if (unk_0x5E83461198335D9B(Global_16935[iLocal_23]))
					{
						if (unk_0x47CD6BA404AEE035(Global_16935[iLocal_23]))
						{
							sVar1 = unk_0xD9A84B163D46BD9B(Global_16935[iLocal_23]);
						}
						else
						{
							sVar1 = "CHAR_DEFAULT";
						}
					}
					else
					{
						sVar1 = "CHAR_DEFAULT";
					}
					unk_0x713FEBE56D2BD403("CELL_2000");
					unk_0xD61E5ED1D4E687A5(sVar1);
					unk_0x36F3AA9FFAAF8606();
				}
				unk_0x818901B332D5541D();
				Global_16932 = 1;
				func_40(Global_14534, "DISPLAY_VIEW", 7f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_29(Global_14534, "SET_HEADER", "CELL_1", 0, 0, 0, 0);
				unk_0x98E765CB9E761233(Global_106565.f_14135[iLocal_23 /*104*/].f_16);
				if (Global_106565.f_14135[iLocal_23 /*104*/].f_29 > 0)
				{
					if (Global_14541)
					{
						func_13(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
					}
					else
					{
						func_13(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_106565.f_14135[iLocal_23 /*104*/].f_30 == 1)
				{
					if (Global_14541)
					{
						func_13(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					}
					else
					{
						func_13(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else
				{
					func_13(Global_14534, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_106565.f_14135[iLocal_23 /*104*/].f_29 > 0)
				{
					if (unk_0xCE3CFF625BEBAA04(&(Global_106565.f_14135[iLocal_23 /*104*/]), "CELL_FINV"))
					{
						if (Global_14541)
						{
							func_13(Global_14534, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
						}
						else
						{
							func_13(Global_14534, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else if (Global_14541)
					{
						func_13(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
					}
					else
					{
						func_13(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14541)
				{
					func_13(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_13(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_106565.f_14135[iLocal_23 /*104*/].f_24 == 2)
				{
					if (Global_106565.f_14135[iLocal_23 /*104*/].f_31 == 1)
					{
						iLocal_25 = 0;
						if (Global_14541)
						{
							func_13(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, "CELL_264", 0, 0, 0, 0);
						}
						else
						{
							func_13(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						unk_0x8950ED5730F62EE8(&Global_2423, 17);
					}
					else if (iLocal_25 == 0)
					{
						func_13(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						unk_0xCE689A8E8C42ED78(&Global_2423, 17);
					}
				}
				else if (Global_14541)
				{
					func_13(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, "CELL_216", 0, 0, 0, 0);
					unk_0x8950ED5730F62EE8(&Global_2423, 17);
				}
				else
				{
					func_13(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, 0, 0, 0, 0, 0);
					unk_0x8950ED5730F62EE8(&Global_2423, 17);
				}
				Global_106565.f_14045[Global_14553 /*20*/].f_18 = 0;
				Global_106565.f_14045[Global_14553 /*20*/].f_17 = 0;
			}
			else
			{
				iVar2 = 0;
				if (Global_106565.f_14045[Global_14553 /*20*/].f_17 == 1 || Global_16926 == 1)
				{
					if (Global_16926)
					{
					}
					iVar2 = 1;
				}
				Global_106565.f_14045[Global_14553 /*20*/].f_18 = 0;
				Global_106565.f_14045[Global_14553 /*20*/].f_17 = 0;
				if (iVar2 == 1)
				{
					iVar2 = 0;
					Global_14553.f_1 = 3;
				}
			}
		}
		if (Global_2538128 == 0)
		{
			if (Global_71590)
			{
				unk_0x144904D2EAA84341(0, Global_14525);
				if (func_3(2, Global_14525, 0))
				{
					Global_14531 = 1;
					Global_2538128 = 1;
				}
			}
		}
	}
}

void func_29(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0xBB698266C5FDF0A7(iParam0, sParam1);
	func_9(sParam2);
	if (!unk_0x786AF4A44E1B5B4B(sParam3))
	{
		func_9(sParam3);
	}
	if (!unk_0x786AF4A44E1B5B4B(sParam4))
	{
		func_9(sParam4);
	}
	if (!unk_0x786AF4A44E1B5B4B(sParam5))
	{
		func_9(sParam5);
	}
	if (!unk_0x786AF4A44E1B5B4B(sParam6))
	{
		func_9(sParam6);
	}
	unk_0x818901B332D5541D();
}

void func_30(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (Global_106565.f_14135[iParam0 /*104*/].f_49)
	{
		case 1:
			unk_0x713FEBE56D2BD403("CELL_CL01");
			break;
		
		case 2:
			unk_0x713FEBE56D2BD403("CELL_CL02");
			break;
		
		case 3:
			unk_0x713FEBE56D2BD403("CELL_CL03");
			break;
		
		case 4:
			unk_0x713FEBE56D2BD403("CELL_CL04");
			break;
		
		case 5:
			unk_0x713FEBE56D2BD403("CELL_CL05");
			break;
		
		case 6:
			unk_0x713FEBE56D2BD403("CELL_CL06");
			break;
		
		case 7:
			unk_0x713FEBE56D2BD403("CELL_CL07");
			break;
		
		case 8:
			unk_0x713FEBE56D2BD403("CELL_CL08");
			break;
		
		case 9:
			unk_0x713FEBE56D2BD403("CELL_CL09");
			break;
	}
	unk_0xFA6BEE2B1507FF1E(&(Global_106565.f_14135[iParam0 /*104*/]));
	while (iVar0 < Global_106565.f_14135[iParam0 /*104*/].f_49)
	{
		switch (Global_106565.f_14135[iParam0 /*104*/].f_32)
		{
			case 4:
				unk_0xFA6BEE2B1507FF1E(&(Global_2528542.f_1653[iVar0 /*4*/]));
				break;
			
			case 5:
				unk_0xFA6BEE2B1507FF1E(&(Global_1657086[iVar0 /*4*/]));
				break;
			
			case 6:
				unk_0xFA6BEE2B1507FF1E(&(Global_1657127[iVar0 /*4*/]));
				break;
			
			case 7:
				unk_0xFA6BEE2B1507FF1E(&(Global_1657148[iVar0 /*4*/]));
				break;
			
			case 8:
				unk_0xFA6BEE2B1507FF1E(&(Global_1657165[iVar0 /*4*/]));
				break;
			
			case 9:
				unk_0xFA6BEE2B1507FF1E(&(Global_1657178[iVar0 /*4*/]));
				break;
			
			case 10:
				unk_0xFA6BEE2B1507FF1E(&(Global_1657191[iVar0 /*4*/]));
				break;
			
			case 11:
				unk_0xFA6BEE2B1507FF1E(&(Global_1657204[iVar0 /*4*/]));
				break;
		}
		iVar0++;
	}
	unk_0x36F3AA9FFAAF8606();
}

void func_31()
{
	int iVar0;
	
	if (iLocal_52)
	{
		unk_0x30F6F0B876E12AD8(&uLocal_33);
	}
	iLocal_52 = 0;
	if (Global_106565.f_14135[iLocal_23 /*104*/].f_24 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 165)
		{
			if (unk_0xCE3CFF625BEBAA04(&(Global_106565.f_14135[iLocal_23 /*104*/]), &(Local_49[iVar0 /*6*/])))
			{
				if (iVar0 < 19)
				{
					MemCopy(&uLocal_33, {Local_51[iVar0 /*8*/]}, 16);
				}
				else
				{
					MemCopy(&uLocal_33, {Local_50[iVar0 /*6*/]}, 16);
				}
				iLocal_52 = 1;
				unk_0x0A06DEFFF267C21E(&uLocal_33, 0);
				while (!unk_0xD83C9F072D059CC4(&uLocal_33))
				{
					wait(100);
				}
			}
			iVar0++;
		}
	}
}

void func_32()
{
	if (iLocal_26)
	{
		if (timera() > 50)
		{
			iLocal_26 = 0;
		}
	}
	if (iLocal_26 == 0)
	{
		if (func_3(2, Global_14529, 0) || unk_0x833B1A3D9F713E03(2, 181))
		{
			if (iLocal_21 > 0)
			{
				iLocal_21 = (iLocal_21 - 1);
			}
			func_35();
			iLocal_26 = 1;
			settimera(0);
		}
		if (func_3(2, Global_14530, 0) || unk_0x833B1A3D9F713E03(2, 180))
		{
			iLocal_21++;
			if (iLocal_21 == iLocal_20)
			{
				iLocal_21 = 0;
			}
			func_33();
			iLocal_26 = 1;
			settimera(0);
		}
	}
}

void func_33()
{
	func_40(Global_14534, "SET_INPUT_EVENT", to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x0F8EAEEC97DDBCB3(-1, "Menu_Navigate", &Global_14542, 1);
	func_34();
}

void func_34()
{
	if (func_20())
	{
		if (Global_14730 == 0)
		{
			unk_0x59444F5D27C23602(2);
		}
		else
		{
			unk_0x59444F5D27C23602(1);
		}
	}
}

void func_35()
{
	func_40(Global_14534, "SET_INPUT_EVENT", to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x0F8EAEEC97DDBCB3(-1, "Menu_Navigate", &Global_14542, 1);
	func_36();
}

void func_36()
{
	if (func_20())
	{
		if (Global_14730 == 0)
		{
			unk_0x59444F5D27C23602(1);
		}
		else
		{
			unk_0x59444F5D27C23602(2);
		}
	}
}

void func_37()
{
	if (Global_106565.f_14045[Global_14553 /*20*/].f_17 == 0)
	{
		if (iLocal_22 < 0)
		{
			iLocal_22 = 0;
		}
		func_40(Global_14534, "DISPLAY_VIEW", 6f, to_float(iLocal_22), -1082130432, -1082130432, -1082130432);
		func_29(Global_14534, "SET_HEADER", "CELL_1", 0, 0, 0, 0);
		if (Global_14541)
		{
			if (iLocal_20 > 0)
			{
				func_13(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_214", 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_14534, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_13(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			if (iLocal_20 > 0)
			{
				func_13(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_14534, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_13(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_71590)
		{
			func_13(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xCE689A8E8C42ED78(&Global_2423, 17);
		}
		else
		{
			func_13(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xCE689A8E8C42ED78(&Global_2423, 17);
		}
	}
	else
	{
		iLocal_22 = 0;
	}
}

void func_38()
{
	int iVar0[35];
	int iVar1;
	int iVar2;
	int iVar3;
	
	iLocal_20 = 0;
	func_22();
	iVar1 = 0;
	while (iVar1 < 34)
	{
		if (unk_0x1BCDA92AD0A7835B(joaat("cellphone_flashhand")) == 0)
		{
			func_47();
		}
		iVar2 = 0;
		iVar3 = 34;
		Global_106565.f_14135[iVar3 /*104*/].f_18 = -1;
		Global_106565.f_14135[iVar3 /*104*/].f_18.f_1 = 0;
		Global_106565.f_14135[iVar3 /*104*/].f_18.f_2 = 0;
		Global_106565.f_14135[iVar3 /*104*/].f_18.f_3 = 0;
		Global_106565.f_14135[iVar3 /*104*/].f_18.f_5 = 0;
		while (iVar2 < 35)
		{
			if (unk_0x1BCDA92AD0A7835B(joaat("cellphone_flashhand")) == 0)
			{
				func_47();
			}
			if (iVar0[iVar2] == 0)
			{
				if (Global_106565.f_14135[iVar2 /*104*/].f_24 != 0)
				{
					if (Global_106565.f_14135[iVar2 /*104*/].f_99[Global_14553] == 1)
					{
						if (func_39(Global_106565.f_14135[iVar2 /*104*/].f_18, Global_106565.f_14135[iVar3 /*104*/].f_18))
						{
							iVar3 = iVar2;
							if (Global_106565.f_14135[iVar3 /*104*/].f_28 == 0)
							{
								iLocal_24 = 33;
							}
							else
							{
								iLocal_24 = 34;
							}
						}
					}
				}
			}
			iVar2++;
		}
		iLocal_19[iVar1] = iVar3;
		iVar0[iVar3] = 1;
		if (Global_106565.f_14135[iVar3 /*104*/].f_24 != 0)
		{
			if (Global_106565.f_14135[iVar3 /*104*/].f_99[Global_14553] == 1)
			{
				unk_0xBB698266C5FDF0A7(Global_14534, "SET_DATA_SLOT");
				unk_0x4D9DA18AB3C2A466(6);
				unk_0x4D9DA18AB3C2A466(iVar1);
				unk_0x4D9DA18AB3C2A466(Global_106565.f_14135[iVar3 /*104*/].f_18.f_2);
				unk_0x4D9DA18AB3C2A466(Global_106565.f_14135[iVar3 /*104*/].f_18.f_1);
				unk_0x4D9DA18AB3C2A466(iLocal_24);
				if (Global_106565.f_14135[iVar3 /*104*/].f_17 == 145)
				{
					unk_0x713FEBE56D2BD403("CELL_CONDFNH");
					unk_0xD61E5ED1D4E687A5(&(Global_106565.f_14135[iVar3 /*104*/].f_50));
					unk_0x36F3AA9FFAAF8606();
				}
				else
				{
					func_9(&(Global_106565.f_28044[Global_106565.f_14135[iVar3 /*104*/].f_17 /*29*/].f_3));
				}
				switch (Global_106565.f_14135[iVar3 /*104*/].f_32)
				{
					case 0:
						func_9(&(Global_106565.f_14135[iVar3 /*104*/]));
						break;
					
					case 1:
						unk_0x713FEBE56D2BD403(&(Global_106565.f_14135[iVar3 /*104*/]));
						unk_0xD61E5ED1D4E687A5(&(Global_106565.f_14135[iVar3 /*104*/].f_33));
						if (Global_106565.f_14135[iVar3 /*104*/].f_66 == 1 && !unk_0xCE3CFF625BEBAA04(&(Global_106565.f_14135[iVar3 /*104*/].f_67), "NULL"))
						{
							unk_0xD61E5ED1D4E687A5(&(Global_106565.f_14135[iVar3 /*104*/].f_67));
						}
						if ((Global_106565.f_14135[iVar3 /*104*/].f_66 == 2 && !unk_0xCE3CFF625BEBAA04(&(Global_106565.f_14135[iVar3 /*104*/].f_67), "NULL")) && !unk_0xCE3CFF625BEBAA04(&(Global_106565.f_14135[iVar3 /*104*/].f_83), "NULL"))
						{
							if (unk_0xEAF855A7DC28BC8D(&(Global_106565.f_14135[iVar3 /*104*/].f_67)))
							{
								unk_0xFA6BEE2B1507FF1E(&(Global_106565.f_14135[iVar3 /*104*/].f_67));
							}
							else
							{
								unk_0xD61E5ED1D4E687A5(&(Global_106565.f_14135[iVar3 /*104*/].f_67));
							}
							if (unk_0xEAF855A7DC28BC8D(&(Global_106565.f_14135[iVar3 /*104*/].f_83)))
							{
								unk_0xFA6BEE2B1507FF1E(&(Global_106565.f_14135[iVar3 /*104*/].f_83));
							}
							else
							{
								unk_0xD61E5ED1D4E687A5(&(Global_106565.f_14135[iVar3 /*104*/].f_83));
							}
						}
						unk_0x36F3AA9FFAAF8606();
						break;
					
					case 2:
						unk_0x713FEBE56D2BD403(&(Global_106565.f_14135[iVar3 /*104*/]));
						unk_0xE800DC85FDF60F85(Global_106565.f_14135[iVar3 /*104*/].f_49);
						unk_0x36F3AA9FFAAF8606();
						break;
					
					case 3:
						unk_0x713FEBE56D2BD403(&(Global_106565.f_14135[iVar3 /*104*/]));
						unk_0xD61E5ED1D4E687A5(&(Global_106565.f_14135[iVar3 /*104*/].f_33));
						unk_0xE800DC85FDF60F85(Global_106565.f_14135[iVar3 /*104*/].f_49);
						if (Global_106565.f_14135[iVar3 /*104*/].f_66 == 1 && !unk_0xCE3CFF625BEBAA04(&(Global_106565.f_14135[iVar3 /*104*/].f_67), "NULL"))
						{
							unk_0xD61E5ED1D4E687A5(&(Global_106565.f_14135[iVar3 /*104*/].f_67));
						}
						if ((Global_106565.f_14135[iVar3 /*104*/].f_66 == 2 && !unk_0xCE3CFF625BEBAA04(&(Global_106565.f_14135[iVar3 /*104*/].f_67), "NULL")) && !unk_0xCE3CFF625BEBAA04(&(Global_106565.f_14135[iVar3 /*104*/].f_83), "NULL"))
						{
							if (unk_0xEAF855A7DC28BC8D(&(Global_106565.f_14135[iVar3 /*104*/].f_67)))
							{
								unk_0xFA6BEE2B1507FF1E(&(Global_106565.f_14135[iVar3 /*104*/].f_67));
							}
							else
							{
								unk_0xD61E5ED1D4E687A5(&(Global_106565.f_14135[iVar3 /*104*/].f_67));
							}
							if (unk_0xEAF855A7DC28BC8D(&(Global_106565.f_14135[iVar3 /*104*/].f_83)))
							{
								unk_0xFA6BEE2B1507FF1E(&(Global_106565.f_14135[iVar3 /*104*/].f_83));
							}
							else
							{
								unk_0xD61E5ED1D4E687A5(&(Global_106565.f_14135[iVar3 /*104*/].f_83));
							}
						}
						unk_0x36F3AA9FFAAF8606();
						break;
					
					case 4:
						func_30(iVar3);
						break;
					
					case 5:
						func_30(iVar3);
						break;
					
					case 6:
						func_30(iVar3);
						break;
					
					case 7:
						func_30(iVar3);
						break;
					
					case 8:
						func_30(iVar3);
						break;
					
					case 9:
						func_30(iVar3);
						break;
					
					case 10:
						func_30(iVar3);
						break;
					
					case 11:
						func_30(iVar3);
						break;
				}
				unk_0x818901B332D5541D();
			}
		}
		if (Global_106565.f_14135[iVar1 /*104*/].f_24 != 0)
		{
			if (Global_106565.f_14135[iVar1 /*104*/].f_99[Global_14553] == 1)
			{
				iLocal_20++;
			}
		}
		iVar1++;
	}
}

int func_39(struct<6> Param0, struct<6> Param1)
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

void func_40(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_41()
{
	StringCopy(&(Local_49[0 /*6*/]), "SXT_JUL_1ST", 24);
	StringCopy(&(Local_51[0 /*8*/]), "05_a_sext_stripperJuliet", 32);
	StringCopy(&(Local_49[1 /*6*/]), "SXT_JUL_2ND", 24);
	StringCopy(&(Local_51[1 /*8*/]), "05_b_sext_stripperJuliet", 32);
	StringCopy(&(Local_49[2 /*6*/]), "SXT_JUL_NEED", 24);
	StringCopy(&(Local_51[2 /*8*/]), "05_c_sext_stripperJuliet", 32);
	StringCopy(&(Local_49[3 /*6*/]), "SXT_NIK_1ST", 24);
	StringCopy(&(Local_51[3 /*8*/]), "06_a_sext_stripperNikki", 32);
	StringCopy(&(Local_49[4 /*6*/]), "SXT_NIK_2ND", 24);
	StringCopy(&(Local_51[4 /*8*/]), "06_b_sext_stripperNikki", 32);
	StringCopy(&(Local_49[5 /*6*/]), "SXT_NIK_NEED", 24);
	StringCopy(&(Local_51[5 /*8*/]), "06_c_sext_stripperNikki", 32);
	StringCopy(&(Local_49[6 /*6*/]), "SXT_SAP_1ST", 24);
	StringCopy(&(Local_51[6 /*8*/]), "08_a_sext_stripperSapphire", 32);
	StringCopy(&(Local_49[7 /*6*/]), "SXT_SAP_2ND", 24);
	StringCopy(&(Local_51[7 /*8*/]), "08_b_sext_stripperSapphire", 32);
	StringCopy(&(Local_49[8 /*6*/]), "SXT_SAP_NEED", 24);
	StringCopy(&(Local_51[8 /*8*/]), "08_c_sext_stripperSapphire", 32);
	StringCopy(&(Local_49[9 /*6*/]), "SXT_INF_1ST", 24);
	StringCopy(&(Local_51[9 /*8*/]), "04_a_sext_stripperInfernus", 32);
	StringCopy(&(Local_49[10 /*6*/]), "SXT_INF_2ND", 24);
	StringCopy(&(Local_51[10 /*8*/]), "04_b_sext_stripperInfernus", 32);
	StringCopy(&(Local_49[11 /*6*/]), "SXT_INF_NEED", 24);
	StringCopy(&(Local_51[11 /*8*/]), "04_c_sext_stripperInfernus", 32);
	StringCopy(&(Local_49[12 /*6*/]), "SXT_TXI_1ST", 24);
	StringCopy(&(Local_51[12 /*8*/]), "11_a_sext_taxiLiz", 32);
	StringCopy(&(Local_49[13 /*6*/]), "SXT_TXI_2ND", 24);
	StringCopy(&(Local_51[13 /*8*/]), "11_b_sext_taxiLiz", 32);
	StringCopy(&(Local_49[14 /*6*/]), "SXT_TXI_NEED", 24);
	StringCopy(&(Local_51[14 /*8*/]), "11_c_sext_taxiLiz", 32);
	StringCopy(&(Local_49[15 /*6*/]), "SXT_HCH_1ST", 24);
	StringCopy(&(Local_51[15 /*8*/]), "10_a_sext_hitcherGirl", 32);
	StringCopy(&(Local_49[16 /*6*/]), "SXT_HCH_2ND", 24);
	StringCopy(&(Local_51[16 /*8*/]), "10_b_sext_hitcherGirl", 32);
	StringCopy(&(Local_49[17 /*6*/]), "SXT_HCH_NEED", 24);
	StringCopy(&(Local_51[17 /*8*/]), "10_c_sext_hitcherGirl", 32);
	StringCopy(&(Local_49[18 /*6*/]), "SOL2_PASS", 24);
	StringCopy(&(Local_51[18 /*8*/]), "executiveproducer", 32);
	StringCopy(&(Local_49[19 /*6*/]), "LR_PIC_TXT1", 24);
	StringCopy(&(Local_50[19 /*6*/]), "mt_phone_image_1", 24);
	StringCopy(&(Local_49[20 /*6*/]), "LR_PIC_TXT2", 24);
	StringCopy(&(Local_50[20 /*6*/]), "mt_phone_image_2", 24);
	StringCopy(&(Local_49[21 /*6*/]), "LR_PIC_TXT3", 24);
	StringCopy(&(Local_50[21 /*6*/]), "mt_phone_image_3", 24);
	StringCopy(&(Local_49[22 /*6*/]), "LR_PIC_TXT4", 24);
	StringCopy(&(Local_50[22 /*6*/]), "mt_phone_image_4", 24);
	StringCopy(&(Local_49[23 /*6*/]), "LR_PIC_TXT5", 24);
	StringCopy(&(Local_50[23 /*6*/]), "mt_phone_image_5", 24);
	StringCopy(&(Local_49[24 /*6*/]), "SAD_SMS_0", 24);
	StringCopy(&(Local_50[24 /*6*/]), "MP_SND_TARGET_01", 24);
	StringCopy(&(Local_49[25 /*6*/]), "SAD_SMS_1", 24);
	StringCopy(&(Local_50[25 /*6*/]), "MP_SND_TARGET_02", 24);
	StringCopy(&(Local_49[26 /*6*/]), "SAD_SMS_2", 24);
	StringCopy(&(Local_50[26 /*6*/]), "MP_SND_TARGET_03", 24);
	StringCopy(&(Local_49[27 /*6*/]), "SAD_SMS_3", 24);
	StringCopy(&(Local_50[27 /*6*/]), "MP_SND_TARGET_04", 24);
	StringCopy(&(Local_49[28 /*6*/]), "SAD_SMS_4", 24);
	StringCopy(&(Local_50[28 /*6*/]), "MP_SND_TARGET_05", 24);
	StringCopy(&(Local_49[29 /*6*/]), "SAD_SMS_5", 24);
	StringCopy(&(Local_50[29 /*6*/]), "MP_SND_TARGET_06", 24);
	StringCopy(&(Local_49[30 /*6*/]), "SAD_SMS_6", 24);
	StringCopy(&(Local_50[30 /*6*/]), "MP_SND_TARGET_07", 24);
	StringCopy(&(Local_49[31 /*6*/]), "SAD_SMS_7", 24);
	StringCopy(&(Local_50[31 /*6*/]), "MP_SND_TARGET_08", 24);
	StringCopy(&(Local_49[32 /*6*/]), "SAD_SMS_8", 24);
	StringCopy(&(Local_50[32 /*6*/]), "MP_SND_TARGET_09", 24);
	StringCopy(&(Local_49[33 /*6*/]), "SAD_SMS_9", 24);
	StringCopy(&(Local_50[33 /*6*/]), "MP_SND_TARGET_10", 24);
	StringCopy(&(Local_49[34 /*6*/]), "SAD_SMS_10", 24);
	StringCopy(&(Local_50[34 /*6*/]), "MP_SND_TARGET_11", 24);
	StringCopy(&(Local_49[35 /*6*/]), "SAD_SMS_11", 24);
	StringCopy(&(Local_50[35 /*6*/]), "MP_SND_TARGET_12", 24);
	StringCopy(&(Local_49[36 /*6*/]), "SAD_SMS_12", 24);
	StringCopy(&(Local_50[36 /*6*/]), "MP_SND_TARGET_13", 24);
	StringCopy(&(Local_49[37 /*6*/]), "SAD_SMS_13", 24);
	StringCopy(&(Local_50[37 /*6*/]), "MP_SND_TARGET_14", 24);
	StringCopy(&(Local_49[38 /*6*/]), "SAD_SMS_14", 24);
	StringCopy(&(Local_50[38 /*6*/]), "MP_SND_TARGET_15", 24);
	StringCopy(&(Local_49[39 /*6*/]), "SAD_SMS_15", 24);
	StringCopy(&(Local_50[39 /*6*/]), "MP_SND_TARGET_16", 24);
	StringCopy(&(Local_49[40 /*6*/]), "SAD_SMS_16", 24);
	StringCopy(&(Local_50[40 /*6*/]), "MP_SND_TARGET_17", 24);
	StringCopy(&(Local_49[41 /*6*/]), "SAD_SMS_17", 24);
	StringCopy(&(Local_50[41 /*6*/]), "MP_SND_TARGET_18", 24);
	StringCopy(&(Local_49[42 /*6*/]), "SAD_SMS_18", 24);
	StringCopy(&(Local_50[42 /*6*/]), "MP_SND_TARGET_19", 24);
	StringCopy(&(Local_49[43 /*6*/]), "SAD_SMS_19", 24);
	StringCopy(&(Local_50[43 /*6*/]), "MP_SND_TARGET_20", 24);
	StringCopy(&(Local_49[44 /*6*/]), "VEX_PM_PHOTO0", 24);
	StringCopy(&(Local_50[44 /*6*/]), "MP_EX_LOCATION_01", 24);
	StringCopy(&(Local_49[45 /*6*/]), "VEX_PM_PHOTO1", 24);
	StringCopy(&(Local_50[45 /*6*/]), "MP_EX_LOCATION_02", 24);
	StringCopy(&(Local_49[46 /*6*/]), "VEX_PM_PHOTO2", 24);
	StringCopy(&(Local_50[46 /*6*/]), "MP_EX_LOCATION_03", 24);
	StringCopy(&(Local_49[47 /*6*/]), "VEX_PM_PHOTO3", 24);
	StringCopy(&(Local_50[47 /*6*/]), "MP_EX_LOCATION_04", 24);
	StringCopy(&(Local_49[48 /*6*/]), "VEX_PM_PHOTO4", 24);
	StringCopy(&(Local_50[48 /*6*/]), "MP_EX_LOCATION_05", 24);
	StringCopy(&(Local_49[49 /*6*/]), "VEX_PM_PHOTO5", 24);
	StringCopy(&(Local_50[49 /*6*/]), "MP_EX_LOCATION_06", 24);
	StringCopy(&(Local_49[50 /*6*/]), "VEX_PM_PHOTO6", 24);
	StringCopy(&(Local_50[50 /*6*/]), "MP_EX_LOCATION_07", 24);
	StringCopy(&(Local_49[51 /*6*/]), "VEX_PM_PHOTO7", 24);
	StringCopy(&(Local_50[51 /*6*/]), "MP_EX_LOCATION_08", 24);
	StringCopy(&(Local_49[52 /*6*/]), "VEX_PM_PHOTO8", 24);
	StringCopy(&(Local_50[52 /*6*/]), "MP_EX_LOCATION_09", 24);
	StringCopy(&(Local_49[53 /*6*/]), "VEX_PM_PHOTO9", 24);
	StringCopy(&(Local_50[53 /*6*/]), "MP_EX_LOCATION_10", 24);
	StringCopy(&(Local_49[54 /*6*/]), "VEX_PM_PHOTO10", 24);
	StringCopy(&(Local_50[54 /*6*/]), "MP_EX_LOCATION_11", 24);
	StringCopy(&(Local_49[55 /*6*/]), "VEX_PM_PHOTO11", 24);
	StringCopy(&(Local_50[55 /*6*/]), "MP_EX_LOCATION_12", 24);
	StringCopy(&(Local_49[56 /*6*/]), "VEX_PM_PHOTO12", 24);
	StringCopy(&(Local_50[56 /*6*/]), "MP_EX_LOCATION_13", 24);
	StringCopy(&(Local_49[57 /*6*/]), "VEX_PM_PHOTO13", 24);
	StringCopy(&(Local_50[57 /*6*/]), "MP_EX_LOCATION_14", 24);
	StringCopy(&(Local_49[58 /*6*/]), "VEX_1_PROTO", 24);
	StringCopy(&(Local_50[58 /*6*/]), "IE_TEXTVECH_01", 24);
	StringCopy(&(Local_49[59 /*6*/]), "VEX_2_PROTO", 24);
	StringCopy(&(Local_50[59 /*6*/]), "IE_TEXTVECH_02", 24);
	StringCopy(&(Local_49[60 /*6*/]), "VEX_3_PROTO", 24);
	StringCopy(&(Local_50[60 /*6*/]), "IE_TEXTVECH_03", 24);
	StringCopy(&(Local_49[61 /*6*/]), "VEX_4_TYRUS", 24);
	StringCopy(&(Local_50[61 /*6*/]), "IE_TEXTVECH_04", 24);
	StringCopy(&(Local_49[62 /*6*/]), "VEX_5_TYRUS", 24);
	StringCopy(&(Local_50[62 /*6*/]), "IE_TEXTVECH_05", 24);
	StringCopy(&(Local_49[63 /*6*/]), "VEX_6_TYRUS", 24);
	StringCopy(&(Local_50[63 /*6*/]), "IE_TEXTVECH_06", 24);
	StringCopy(&(Local_49[64 /*6*/]), "VEX_7_BESTIA", 24);
	StringCopy(&(Local_50[64 /*6*/]), "IE_TEXTVECH_07", 24);
	StringCopy(&(Local_49[65 /*6*/]), "VEX_8_BESTIA", 24);
	StringCopy(&(Local_50[65 /*6*/]), "IE_TEXTVECH_08", 24);
	StringCopy(&(Local_49[66 /*6*/]), "VEX_9_BESTIA", 24);
	StringCopy(&(Local_50[66 /*6*/]), "IE_TEXTVECH_09", 24);
	StringCopy(&(Local_49[67 /*6*/]), "VEX_10_T20", 24);
	StringCopy(&(Local_50[67 /*6*/]), "IE_TEXTVECH_10", 24);
	StringCopy(&(Local_49[68 /*6*/]), "VEX_11_T20", 24);
	StringCopy(&(Local_50[68 /*6*/]), "IE_TEXTVECH_11", 24);
	StringCopy(&(Local_49[69 /*6*/]), "VEX_12_T20", 24);
	StringCopy(&(Local_50[69 /*6*/]), "IE_TEXTVECH_12", 24);
	StringCopy(&(Local_49[70 /*6*/]), "VEX_13_SHEAVA", 24);
	StringCopy(&(Local_50[70 /*6*/]), "IE_TEXTVECH_13", 24);
	StringCopy(&(Local_49[71 /*6*/]), "VEX_14_SHEAVA", 24);
	StringCopy(&(Local_50[71 /*6*/]), "IE_TEXTVECH_14", 24);
	StringCopy(&(Local_49[72 /*6*/]), "VEX_15_SHEAVA", 24);
	StringCopy(&(Local_50[72 /*6*/]), "IE_TEXTVECH_15", 24);
	StringCopy(&(Local_49[73 /*6*/]), "VEX_16_OSIRIS", 24);
	StringCopy(&(Local_50[73 /*6*/]), "IE_TEXTVECH_16", 24);
	StringCopy(&(Local_49[74 /*6*/]), "VEX_17_OSIRIS", 24);
	StringCopy(&(Local_50[74 /*6*/]), "IE_TEXTVECH_17", 24);
	StringCopy(&(Local_49[75 /*6*/]), "VEX_18_OSIRIS", 24);
	StringCopy(&(Local_50[75 /*6*/]), "IE_TEXTVECH_18", 24);
	StringCopy(&(Local_49[76 /*6*/]), "VEX_19_FMJ", 24);
	StringCopy(&(Local_50[76 /*6*/]), "IE_TEXTVECH_19", 24);
	StringCopy(&(Local_49[77 /*6*/]), "VEX_20_FMJ", 24);
	StringCopy(&(Local_50[77 /*6*/]), "IE_TEXTVECH_20", 24);
	StringCopy(&(Local_49[78 /*6*/]), "VEX_21_FMJ", 24);
	StringCopy(&(Local_50[78 /*6*/]), "IE_TEXTVECH_21", 24);
	StringCopy(&(Local_49[79 /*6*/]), "VEX_22_REAPER", 24);
	StringCopy(&(Local_50[79 /*6*/]), "IE_TEXTVECH_22", 24);
	StringCopy(&(Local_49[80 /*6*/]), "VEX_23_REAPER", 24);
	StringCopy(&(Local_50[80 /*6*/]), "IE_TEXTVECH_23", 24);
	StringCopy(&(Local_49[81 /*6*/]), "VEX_24_REAPER", 24);
	StringCopy(&(Local_50[81 /*6*/]), "IE_TEXTVECH_24", 24);
	StringCopy(&(Local_49[82 /*6*/]), "VEX_25_PFISTER", 24);
	StringCopy(&(Local_50[82 /*6*/]), "IE_TEXTVECH_25", 24);
	StringCopy(&(Local_49[83 /*6*/]), "VEX_26_PFISTER", 24);
	StringCopy(&(Local_50[83 /*6*/]), "IE_TEXTVECH_26", 24);
	StringCopy(&(Local_49[84 /*6*/]), "VEX_27_PFISTER", 24);
	StringCopy(&(Local_50[84 /*6*/]), "IE_TEXTVECH_27", 24);
	StringCopy(&(Local_49[85 /*6*/]), "VEX_28_ALPHA", 24);
	StringCopy(&(Local_50[85 /*6*/]), "IE_TEXTVECH_28", 24);
	StringCopy(&(Local_49[86 /*6*/]), "VEX_29_ALPHA", 24);
	StringCopy(&(Local_50[86 /*6*/]), "IE_TEXTVECH_29", 24);
	StringCopy(&(Local_49[87 /*6*/]), "VEX_30_ALPHA", 24);
	StringCopy(&(Local_50[87 /*6*/]), "IE_TEXTVECH_30", 24);
	StringCopy(&(Local_49[88 /*6*/]), "VEX_31_MAMBA", 24);
	StringCopy(&(Local_50[88 /*6*/]), "IE_TEXTVECH_31", 24);
	StringCopy(&(Local_49[89 /*6*/]), "VEX_32_MAMBA", 24);
	StringCopy(&(Local_50[89 /*6*/]), "IE_TEXTVECH_32", 24);
	StringCopy(&(Local_49[90 /*6*/]), "VEX_33_MAMBA", 24);
	StringCopy(&(Local_50[90 /*6*/]), "IE_TEXTVECH_33", 24);
	StringCopy(&(Local_49[91 /*6*/]), "VEX_34_TAMPA", 24);
	StringCopy(&(Local_50[91 /*6*/]), "IE_TEXTVECH_34", 24);
	StringCopy(&(Local_49[92 /*6*/]), "VEX_35_TAMPA", 24);
	StringCopy(&(Local_50[92 /*6*/]), "IE_TEXTVECH_35", 24);
	StringCopy(&(Local_49[93 /*6*/]), "VEX_36_TAMPA", 24);
	StringCopy(&(Local_50[93 /*6*/]), "IE_TEXTVECH_36", 24);
	StringCopy(&(Local_49[94 /*6*/]), "VEX_37_BTYPE", 24);
	StringCopy(&(Local_50[94 /*6*/]), "IE_TEXTVECH_37", 24);
	StringCopy(&(Local_49[95 /*6*/]), "VEX_38_BTYPE", 24);
	StringCopy(&(Local_50[95 /*6*/]), "IE_TEXTVECH_38", 24);
	StringCopy(&(Local_49[96 /*6*/]), "VEX_39_BTYPE", 24);
	StringCopy(&(Local_50[96 /*6*/]), "IE_TEXTVECH_39", 24);
	StringCopy(&(Local_49[97 /*6*/]), "VEX_40_FELTZ3", 24);
	StringCopy(&(Local_50[97 /*6*/]), "IE_TEXTVECH_40", 24);
	StringCopy(&(Local_49[98 /*6*/]), "VEX_41_FELTZ3", 24);
	StringCopy(&(Local_50[98 /*6*/]), "IE_TEXTVECH_41", 24);
	StringCopy(&(Local_49[99 /*6*/]), "VEX_42_FELTZ3", 24);
	StringCopy(&(Local_50[99 /*6*/]), "IE_TEXTVECH_42", 24);
	StringCopy(&(Local_49[100 /*6*/]), "VEX_43_ZTYPE", 24);
	StringCopy(&(Local_50[100 /*6*/]), "IE_TEXTVECH_43", 24);
	StringCopy(&(Local_49[101 /*6*/]), "VEX_44_ZTYPE", 24);
	StringCopy(&(Local_50[101 /*6*/]), "IE_TEXTVECH_44", 24);
	StringCopy(&(Local_49[102 /*6*/]), "VEX_45_ZTYPE", 24);
	StringCopy(&(Local_50[102 /*6*/]), "IE_TEXTVECH_45", 24);
	StringCopy(&(Local_49[103 /*6*/]), "VEX_46_TROPOS", 24);
	StringCopy(&(Local_50[103 /*6*/]), "IE_TEXTVECH_46", 24);
	StringCopy(&(Local_49[104 /*6*/]), "VEX_47_TROPOS", 24);
	StringCopy(&(Local_50[104 /*6*/]), "IE_TEXTVECH_47", 24);
	StringCopy(&(Local_49[105 /*6*/]), "VEX_48_TROPOS", 24);
	StringCopy(&(Local_50[105 /*6*/]), "IE_TEXTVECH_48", 24);
	StringCopy(&(Local_49[106 /*6*/]), "VEX_49_ENTITYXF", 24);
	StringCopy(&(Local_50[106 /*6*/]), "IE_TEXTVECH_49", 24);
	StringCopy(&(Local_49[107 /*6*/]), "VEX_50_ENTITYXF", 24);
	StringCopy(&(Local_50[107 /*6*/]), "IE_TEXTVECH_50", 24);
	StringCopy(&(Local_49[108 /*6*/]), "VEX_51_ENTITYXF", 24);
	StringCopy(&(Local_50[108 /*6*/]), "IE_TEXTVECH_51", 24);
	StringCopy(&(Local_49[109 /*6*/]), "VEX_52_SULTANRS", 24);
	StringCopy(&(Local_50[109 /*6*/]), "IE_TEXTVECH_52", 24);
	StringCopy(&(Local_49[110 /*6*/]), "VEX_53_SULTANRS", 24);
	StringCopy(&(Local_50[110 /*6*/]), "IE_TEXTVECH_53", 24);
	StringCopy(&(Local_49[111 /*6*/]), "VEX_54_SULTANRS", 24);
	StringCopy(&(Local_50[111 /*6*/]), "IE_TEXTVECH_54", 24);
	StringCopy(&(Local_49[112 /*6*/]), "VEX_55_ZENTORNO", 24);
	StringCopy(&(Local_50[112 /*6*/]), "IE_TEXTVECH_55", 24);
	StringCopy(&(Local_49[113 /*6*/]), "VEX_56_ZENTORNO", 24);
	StringCopy(&(Local_50[113 /*6*/]), "IE_TEXTVECH_56", 24);
	StringCopy(&(Local_49[114 /*6*/]), "VEX_57_ZENTORNO", 24);
	StringCopy(&(Local_50[114 /*6*/]), "IE_TEXTVECH_57", 24);
	StringCopy(&(Local_49[115 /*6*/]), "VEX_58_OMNIS", 24);
	StringCopy(&(Local_50[115 /*6*/]), "IE_TEXTVECH_58", 24);
	StringCopy(&(Local_49[116 /*6*/]), "VEX_59_OMNIS", 24);
	StringCopy(&(Local_50[116 /*6*/]), "IE_TEXTVECH_59", 24);
	StringCopy(&(Local_49[117 /*6*/]), "VEX_60_OMNIS", 24);
	StringCopy(&(Local_50[117 /*6*/]), "IE_TEXTVECH_60", 24);
	StringCopy(&(Local_49[118 /*6*/]), "VEX_61_COQUET3", 24);
	StringCopy(&(Local_50[118 /*6*/]), "IE_TEXTVECH_61", 24);
	StringCopy(&(Local_49[119 /*6*/]), "VEX_62_COQUET3", 24);
	StringCopy(&(Local_50[119 /*6*/]), "IE_TEXTVECH_62", 24);
	StringCopy(&(Local_49[120 /*6*/]), "VEX_63_COQUET3", 24);
	StringCopy(&(Local_50[120 /*6*/]), "IE_TEXTVECH_63", 24);
	StringCopy(&(Local_49[121 /*6*/]), "VEX_64_SEVEN70", 24);
	StringCopy(&(Local_50[121 /*6*/]), "IE_TEXTVECH_64", 24);
	StringCopy(&(Local_49[122 /*6*/]), "VEX_65_SEVEN70", 24);
	StringCopy(&(Local_50[122 /*6*/]), "IE_TEXTVECH_65", 24);
	StringCopy(&(Local_49[123 /*6*/]), "VEX_66_SEVEN70", 24);
	StringCopy(&(Local_50[123 /*6*/]), "IE_TEXTVECH_66", 24);
	StringCopy(&(Local_49[124 /*6*/]), "VEX_67_VERLI", 24);
	StringCopy(&(Local_50[124 /*6*/]), "IE_TEXTVECH_67", 24);
	StringCopy(&(Local_49[125 /*6*/]), "VEX_68_VERLI", 24);
	StringCopy(&(Local_50[125 /*6*/]), "IE_TEXTVECH_68", 24);
	StringCopy(&(Local_49[126 /*6*/]), "VEX_69_VERLI", 24);
	StringCopy(&(Local_50[126 /*6*/]), "IE_TEXTVECH_69", 24);
	StringCopy(&(Local_49[127 /*6*/]), "VEX_70_FELTZ2", 24);
	StringCopy(&(Local_50[127 /*6*/]), "IE_TEXTVECH_70", 24);
	StringCopy(&(Local_49[128 /*6*/]), "VEX_71_FELTZ2", 24);
	StringCopy(&(Local_50[128 /*6*/]), "IE_TEXTVECH_71", 24);
	StringCopy(&(Local_49[129 /*6*/]), "VEX_72_FELTZ2", 24);
	StringCopy(&(Local_50[129 /*6*/]), "IE_TEXTVECH_72", 24);
	StringCopy(&(Local_49[130 /*6*/]), "VEX_73_COQUET2", 24);
	StringCopy(&(Local_50[130 /*6*/]), "IE_TEXTVECH_73", 24);
	StringCopy(&(Local_49[131 /*6*/]), "VEX_74_COQUET2", 24);
	StringCopy(&(Local_50[131 /*6*/]), "IE_TEXTVECH_74", 24);
	StringCopy(&(Local_49[132 /*6*/]), "VEX_75_COQUET2", 24);
	StringCopy(&(Local_50[132 /*6*/]), "IE_TEXTVECH_75", 24);
	StringCopy(&(Local_49[133 /*6*/]), "VEX_76_CHEETAH", 24);
	StringCopy(&(Local_50[133 /*6*/]), "IE_TEXTVECH_76", 24);
	StringCopy(&(Local_49[134 /*6*/]), "VEX_77_CHEETAH", 24);
	StringCopy(&(Local_50[134 /*6*/]), "IE_TEXTVECH_77", 24);
	StringCopy(&(Local_49[135 /*6*/]), "VEX_78_CHEETAH", 24);
	StringCopy(&(Local_50[135 /*6*/]), "IE_TEXTVECH_78", 24);
	StringCopy(&(Local_49[136 /*6*/]), "VEX_79_NSHADE", 24);
	StringCopy(&(Local_50[136 /*6*/]), "IE_TEXTVECH_79", 24);
	StringCopy(&(Local_49[137 /*6*/]), "VEX_80_NSHADE", 24);
	StringCopy(&(Local_50[137 /*6*/]), "IE_TEXTVECH_80", 24);
	StringCopy(&(Local_49[138 /*6*/]), "VEX_81_NSHADE", 24);
	StringCopy(&(Local_50[138 /*6*/]), "IE_TEXTVECH_81", 24);
	StringCopy(&(Local_49[139 /*6*/]), "VEX_82_BANSH2", 24);
	StringCopy(&(Local_50[139 /*6*/]), "IE_TEXTVECH_82", 24);
	StringCopy(&(Local_49[140 /*6*/]), "VEX_83_BANSH2", 24);
	StringCopy(&(Local_50[140 /*6*/]), "IE_TEXTVECH_84", 24);
	StringCopy(&(Local_49[141 /*6*/]), "VEX_84_BANSH2", 24);
	StringCopy(&(Local_50[141 /*6*/]), "IE_TEXTVECH_85", 24);
	StringCopy(&(Local_49[142 /*6*/]), "VEX_82_TURIS", 24);
	StringCopy(&(Local_50[142 /*6*/]), "IE_TEXTVECH_83", 24);
	StringCopy(&(Local_49[143 /*6*/]), "VEX_86_TURIS", 24);
	StringCopy(&(Local_50[143 /*6*/]), "IE_TEXTVECH_86", 24);
	StringCopy(&(Local_49[144 /*6*/]), "VEX_87_TURIS", 24);
	StringCopy(&(Local_50[144 /*6*/]), "IE_TEXTVECH_87", 24);
	StringCopy(&(Local_49[145 /*6*/]), "VEX_88_MASS", 24);
	StringCopy(&(Local_50[145 /*6*/]), "IE_TEXTVECH_88", 24);
	StringCopy(&(Local_49[146 /*6*/]), "VEX_89_MASS", 24);
	StringCopy(&(Local_50[146 /*6*/]), "IE_TEXTVECH_89", 24);
	StringCopy(&(Local_49[147 /*6*/]), "VEX_90_MASS", 24);
	StringCopy(&(Local_50[147 /*6*/]), "IE_TEXTVECH_90", 24);
	StringCopy(&(Local_49[148 /*6*/]), "VEX_91_SABRE2", 24);
	StringCopy(&(Local_50[148 /*6*/]), "IE_TEXTVECH_91", 24);
	StringCopy(&(Local_49[149 /*6*/]), "VEX_92_SABRE2", 24);
	StringCopy(&(Local_50[149 /*6*/]), "IE_TEXTVECH_92", 24);
	StringCopy(&(Local_49[150 /*6*/]), "VEX_93_SABRE2", 24);
	StringCopy(&(Local_50[150 /*6*/]), "IE_TEXTVECH_93", 24);
	StringCopy(&(Local_49[151 /*6*/]), "VEX_94_JESTER", 24);
	StringCopy(&(Local_50[151 /*6*/]), "IE_TEXTVECH_94", 24);
	StringCopy(&(Local_49[152 /*6*/]), "VEX_95_JESTER", 24);
	StringCopy(&(Local_50[152 /*6*/]), "IE_TEXTVECH_95", 24);
	StringCopy(&(Local_49[153 /*6*/]), "VEX_96_JESTER", 24);
	StringCopy(&(Local_50[153 /*6*/]), "IE_TEXTVECH_96", 24);
	StringCopy(&(Local_49[154 /*6*/]), "GO_AS_PICM", 24);
	StringCopy(&(Local_50[154 /*6*/]), "NHP_prep_autosalvage", 24);
	StringCopy(&(Local_49[155 /*6*/]), "GO_DR_PICM", 24);
	StringCopy(&(Local_50[155 /*6*/]), "nhp_prep_daylightrob", 24);
	StringCopy(&(Local_49[156 /*6*/]), "FHTXT_DDR00M", 24);
	StringCopy(&(Local_50[156 /*6*/]), "NHP_prep_deaddrop", 24);
	StringCopy(&(Local_49[157 /*6*/]), "BBTXT_CPS00M", 24);
	StringCopy(&(Local_50[157 /*6*/]), "BAT_carpark_1", 24);
	StringCopy(&(Local_49[158 /*6*/]), "BBTXT_CPS10M", 24);
	StringCopy(&(Local_50[158 /*6*/]), "BAT_carpark_2", 24);
	StringCopy(&(Local_49[159 /*6*/]), "BBTXT_CPS20M", 24);
	StringCopy(&(Local_50[159 /*6*/]), "BAT_carpark_3", 24);
	if (func_46(unk_0x95B959F18401C09A()) == 19)
	{
		StringCopy(&(Local_49[44 /*6*/]), "SNP_IMG_0_0", 24);
		StringCopy(&(Local_50[44 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_49[45 /*6*/]), "SNP_IMG_0_1", 24);
		StringCopy(&(Local_50[45 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_49[46 /*6*/]), "SNP_IMG_0_2", 24);
		StringCopy(&(Local_50[46 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_49[47 /*6*/]), "SNP_IMG_0_3", 24);
		StringCopy(&(Local_50[47 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_49[48 /*6*/]), "SNP_IMG_0_4", 24);
		StringCopy(&(Local_50[48 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_49[49 /*6*/]), "SNP_IMG_0_5", 24);
		StringCopy(&(Local_50[49 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_49[50 /*6*/]), "SNP_IMG_0_6", 24);
		StringCopy(&(Local_50[50 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_49[51 /*6*/]), "SNP_IMG_0_7", 24);
		StringCopy(&(Local_50[51 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_49[52 /*6*/]), "SNP_IMG_0_8", 24);
		StringCopy(&(Local_50[52 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_49[53 /*6*/]), "SNP_IMG_0_9", 24);
		StringCopy(&(Local_50[53 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_49[54 /*6*/]), "SNP_IMG_1_0", 24);
		StringCopy(&(Local_50[54 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_49[55 /*6*/]), "SNP_IMG_1_1", 24);
		StringCopy(&(Local_50[55 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_49[56 /*6*/]), "SNP_IMG_1_2", 24);
		StringCopy(&(Local_50[56 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_49[57 /*6*/]), "SNP_IMG_1_3", 24);
		StringCopy(&(Local_50[57 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_49[58 /*6*/]), "SNP_IMG_1_4", 24);
		StringCopy(&(Local_50[58 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_49[59 /*6*/]), "SNP_IMG_1_5", 24);
		StringCopy(&(Local_50[59 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_49[60 /*6*/]), "SNP_IMG_1_6", 24);
		StringCopy(&(Local_50[60 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_49[61 /*6*/]), "SNP_IMG_1_7", 24);
		StringCopy(&(Local_50[61 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_49[62 /*6*/]), "SNP_IMG_1_8", 24);
		StringCopy(&(Local_50[62 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_49[64 /*6*/]), "SNP_IMG_1_9", 24);
		StringCopy(&(Local_50[64 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_49[65 /*6*/]), "SNP_IMG_2_0", 24);
		StringCopy(&(Local_50[65 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_49[66 /*6*/]), "SNP_IMG_2_1", 24);
		StringCopy(&(Local_50[66 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_49[67 /*6*/]), "SNP_IMG_2_2", 24);
		StringCopy(&(Local_50[67 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_49[68 /*6*/]), "SNP_IMG_2_3", 24);
		StringCopy(&(Local_50[68 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_49[69 /*6*/]), "SNP_IMG_2_4", 24);
		StringCopy(&(Local_50[69 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_49[70 /*6*/]), "SNP_IMG_2_5", 24);
		StringCopy(&(Local_50[70 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_49[71 /*6*/]), "SNP_IMG_2_6", 24);
		StringCopy(&(Local_50[71 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_49[72 /*6*/]), "SNP_IMG_2_7", 24);
		StringCopy(&(Local_50[72 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_49[73 /*6*/]), "SNP_IMG_2_8", 24);
		StringCopy(&(Local_50[73 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_49[74 /*6*/]), "SNP_IMG_2_9", 24);
		StringCopy(&(Local_50[74 /*6*/]), "SCLUB_3", 24);
	}
	else if (func_42(unk_0x95B959F18401C09A()) == 14)
	{
		StringCopy(&(Local_49[44 /*6*/]), "GBC_TM_TC100", 24);
		StringCopy(&(Local_50[44 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_49[45 /*6*/]), "GBC_TM_TC101", 24);
		StringCopy(&(Local_50[45 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_49[46 /*6*/]), "GBC_TM_TC102", 24);
		StringCopy(&(Local_50[46 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_49[47 /*6*/]), "GBC_TM_TC103", 24);
		StringCopy(&(Local_50[47 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_49[48 /*6*/]), "GBC_TM_TC104", 24);
		StringCopy(&(Local_50[48 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_49[49 /*6*/]), "GBC_TM_TC105", 24);
		StringCopy(&(Local_50[49 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_49[50 /*6*/]), "GBC_TM_TC110", 24);
		StringCopy(&(Local_50[50 /*6*/]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_49[51 /*6*/]), "GBC_TM_TC111", 24);
		StringCopy(&(Local_50[51 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_49[52 /*6*/]), "GBC_TM_TC120", 24);
		StringCopy(&(Local_50[52 /*6*/]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_49[53 /*6*/]), "GBC_TM_TC121", 24);
		StringCopy(&(Local_50[53 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_49[54 /*6*/]), "GBC_TM_TC130", 24);
		StringCopy(&(Local_50[54 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_49[55 /*6*/]), "GBC_TM_TC140", 24);
		StringCopy(&(Local_50[55 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_49[56 /*6*/]), "GBC_TM_TC200", 24);
		StringCopy(&(Local_50[56 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_49[57 /*6*/]), "GBC_TM_TC201", 24);
		StringCopy(&(Local_50[57 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_49[58 /*6*/]), "GBC_TM_TC202", 24);
		StringCopy(&(Local_50[58 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_49[59 /*6*/]), "GBC_TM_TC203", 24);
		StringCopy(&(Local_50[59 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_49[60 /*6*/]), "GBC_TM_TC204", 24);
		StringCopy(&(Local_50[60 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_49[61 /*6*/]), "GBC_TM_TC205", 24);
		StringCopy(&(Local_50[61 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_49[62 /*6*/]), "GBC_TM_TC210", 24);
		StringCopy(&(Local_50[62 /*6*/]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_49[63 /*6*/]), "GBC_TM_TC211", 24);
		StringCopy(&(Local_50[63 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_49[64 /*6*/]), "GBC_TM_TC220", 24);
		StringCopy(&(Local_50[64 /*6*/]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_49[65 /*6*/]), "GBC_TM_TC221", 24);
		StringCopy(&(Local_50[65 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_49[66 /*6*/]), "GBC_TM_TC230", 24);
		StringCopy(&(Local_50[66 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_49[67 /*6*/]), "GBC_TM_TC240", 24);
		StringCopy(&(Local_50[67 /*6*/]), "VC_TC_CASINOCCTV", 24);
	}
}

int func_42(int iParam0)
{
	if (func_45(iParam0) == 243)
	{
		return func_43(iParam0);
	}
	return -1;
}

int func_43(int iParam0)
{
	if (func_44(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_181;
	}
	return -1;
}

int func_44(int iParam0, int iParam1)
{
	if (Global_1626536[iParam0 /*603*/].f_11.f_33 != -1 || (iParam1 && Global_1626536[iParam0 /*603*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_45(int iParam0)
{
	if (func_44(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_33;
	}
	return -1;
}

int func_46(int iParam0)
{
	if (func_45(iParam0) == 237 || func_45(iParam0) == 250)
	{
		return func_43(iParam0);
	}
	return -1;
}

void func_47()
{
	if (unk_0x1BCDA92AD0A7835B(joaat("cellphone_flashhand")) == 0)
	{
		func_48(0);
	}
	if (iLocal_52)
	{
		unk_0x30F6F0B876E12AD8(&uLocal_33);
	}
	unk_0x5894DC159447E10A();
}

void func_48(int iParam0)
{
	if (func_52())
	{
		return;
	}
	if (Global_14725)
	{
		func_50(0, 0);
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
	if (!func_49())
	{
		Global_14553.f_1 = 3;
	}
}

int func_49()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_50(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_51(0))
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

int func_51(int iParam0)
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

bool func_52()
{
	return unk_0x0E4018692D92041D(Global_1681628, 19);
}

