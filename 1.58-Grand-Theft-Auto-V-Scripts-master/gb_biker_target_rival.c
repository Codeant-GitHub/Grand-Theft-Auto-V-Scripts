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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	func_93();
	while (true)
	{
		func_92();
		if (func_84())
		{
			func_83();
		}
		if (Global_2810287.f_5193.f_754 == 0)
		{
			func_83();
		}
		switch (iLocal_35)
		{
			case 0:
				iLocal_35 = 1;
				break;
			
			case 1:
				if (func_11())
				{
					iLocal_35 = 2;
				}
				break;
			
			case 2:
				if (!func_1())
				{
					iLocal_35 = 4;
				}
				break;
			
			case 4:
				func_83();
				break;
		}
	}
}

int func_1()
{
	int iVar0;
	
	if (func_7(1))
	{
		iVar0 = Global_2810287.f_5193.f_753;
		if (iVar0 != func_6())
		{
			if (func_4(iVar0))
			{
				func_2(iVar0);
				return 0;
			}
		}
		else
		{
			func_2(iVar0);
			return 0;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_2(int iParam0)
{
	if (iParam0 != func_6())
	{
		func_3(iParam0);
	}
	Global_2810287.f_5193.f_753 = func_6();
}

void func_3(int iParam0)
{
	var uVar0;
	
	uVar0 = iParam0;
	unk_0xB0550BC91B0159D6(&(Global_2678323.f_388), uVar0);
	unk_0xB0550BC91B0159D6(&(Global_2678323.f_389), iVar0);
	unk_0xB0550BC91B0159D6(&(Global_2678323.f_390), iVar0);
	unk_0xB0550BC91B0159D6(&(Global_2678323.f_392), iVar0);
	unk_0xB0550BC91B0159D6(&(Global_2678323.f_396), iVar0);
	unk_0xB0550BC91B0159D6(&(Global_2678323.f_391), iVar0);
}

int func_4(int iParam0)
{
	if (!func_5(iParam0, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_5(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x0D01086B38EC256F(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x3583A42587543334(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2703656.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_6()
{
	return -1;
}

bool func_7(bool bParam0)
{
	return func_8(unk_0x9E2D6C50374FCFA9(), bParam0);
}

int func_8(int iParam0, bool bParam1)
{
	return func_9(iParam0, bParam1, 1);
}

int func_9(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_6())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_10(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1893548[iParam0 /*600*/].f_11;
	if (iVar0 != func_6() && Global_1893548[iVar0 /*600*/].f_11.f_428 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_10(int iParam0, int iParam1)
{
	if (iParam0 != func_6())
	{
		if (Global_1893548[iParam0 /*600*/].f_11 != func_6())
		{
			if (Global_1893548[iParam0 /*600*/].f_11 == iParam0 && Global_1893548[iParam0 /*600*/].f_11.f_428 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_11()
{
	int iVar0;
	
	if (func_7(1))
	{
		iVar0 = Global_2810287.f_5193.f_753;
		if (iVar0 != func_6())
		{
			if (func_12(iVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_12(int iParam0)
{
	if (func_5(iParam0, 0, 1))
	{
		func_81(iParam0, 432, 1, 0);
		if (func_80(iParam0))
		{
			func_77(iParam0, func_78(func_79(unk_0x9E2D6C50374FCFA9())), 1, 0);
		}
		if (func_75(iParam0))
		{
			func_73(iParam0, 1, 1, 0);
		}
		func_67(iParam0, 1, 0);
		func_13(iParam0, 1, 5000);
		return 1;
	}
	return 0;
}

void func_13(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_6())
	{
		return;
	}
	if (iParam2 > 200000)
	{
		iParam2 = 200000;
	}
	iVar0 = iParam0;
	if (bParam1)
	{
		if (iParam0 == Global_2703656)
		{
		}
		else if (unk_0x12DD4A0B247D9B4D(Global_2678323[iVar0]))
		{
			unk_0xCED9E32812D6C7C7(&(Global_2678323.f_370), iVar0);
			unk_0xB0550BC91B0159D6(&(Global_2678323.f_375), iVar0);
			unk_0x9705014C37E60003(Global_2678323[iVar0], 1);
			unk_0x1209F9274AFF1A3D(Global_2678323[iVar0], 250);
			func_14(iParam0);
			if (iParam2 < 0)
			{
				unk_0xCED9E32812D6C7C7(&(Global_2678323.f_375), iVar0);
			}
			else
			{
				Global_2678323.f_201[iVar0] = unk_0x35DE445E5254AFED(unk_0x0A89FDFA763DCAED(), iParam2);
			}
		}
		else
		{
			unk_0xCED9E32812D6C7C7(&(Global_2678323.f_370), iVar0);
			unk_0xB0550BC91B0159D6(&(Global_2678323.f_375), iVar0);
			if (iParam2 < 0)
			{
				unk_0xCED9E32812D6C7C7(&(Global_2678323.f_375), iVar0);
			}
			else
			{
				Global_2678323.f_201[iVar0] = unk_0x35DE445E5254AFED(unk_0x0A89FDFA763DCAED(), iParam2);
			}
		}
	}
	if (!bParam1)
	{
		unk_0xB0550BC91B0159D6(&(Global_2678323.f_370), iVar0);
		unk_0xB0550BC91B0159D6(&(Global_2678323.f_375), iVar0);
		if (unk_0x12DD4A0B247D9B4D(Global_2678323[iVar0]))
		{
			func_14(iParam0);
			unk_0x9705014C37E60003(Global_2678323[iVar0], 0);
		}
	}
}

void func_14(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (func_5(iParam0, 0, 1))
	{
		if (unk_0x12DD4A0B247D9B4D(Global_2678323[iVar0]))
		{
			Global_2678323.f_1504[iVar0] = func_15(iParam0);
			unk_0x7A610B2EC5DA34E7(Global_2678323[iVar0], Global_2678323.f_1504[iVar0]);
		}
	}
}

int func_15(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (func_5(iParam0, 0, 1))
	{
		if (unk_0x12DD4A0B247D9B4D(Global_2678323[iVar0]))
		{
			iVar1 = unk_0xF33CD92713FC4E3A(Global_2678323[iVar0]);
			if (unk_0xE2D0C323A1AE5D85(Global_2678323.f_386, iVar0) || unk_0xE2D0C323A1AE5D85(Global_2678323.f_385, iVar0))
			{
				return 1;
			}
			else if ((unk_0xE2D0C323A1AE5D85(Global_2678323.f_371, iVar0) || unk_0xE2D0C323A1AE5D85(Global_2678323.f_370, iVar0)) || unk_0xE2D0C323A1AE5D85(Global_2678323.f_388, iVar0))
			{
				return func_64(10);
			}
			else
			{
				switch (iVar1)
				{
					case 253:
					case 252:
					case 255:
						return func_64(7);
						break;
					
					case 257:
					case 258:
					case 259:
					case 260:
					case 261:
						return func_64(11);
						break;
					
					case 254:
						if (unk_0x0E40F846A70BA3EC(iParam0) == unk_0x0E40F846A70BA3EC(Global_2703656))
						{
							return func_64(6);
						}
						else
						{
							return func_64(5);
						}
						break;
					
					case 271:
						if (unk_0x0E40F846A70BA3EC(iParam0) == unk_0x0E40F846A70BA3EC(Global_2703656))
						{
							return func_64(6);
						}
						else
						{
							return func_64(5);
						}
						break;
					
					case 163:
					case 164:
						if (func_63(Global_2703656, iParam0, -2, 0))
						{
							return func_64(6);
						}
						else
						{
							return func_64(5);
						}
						break;
					
					case 303:
					case 418:
						return func_64(10);
						break;
					
					case 364:
						if (func_20(Global_2703656, iParam0, 1))
						{
							return func_64(10);
						}
						else
						{
							return func_64(5);
						}
						break;
					
					case 478:
					case 501:
					case 523:
					case 556:
						return func_64(10);
						break;
					
					case 417:
						if ((func_19(iParam0) || func_18(iParam0)) || func_16(iParam0))
						{
							if (func_20(Global_2703656, iParam0, 1))
							{
								return 3;
							}
							else
							{
								return 4;
							}
						}
						else if (func_20(Global_2703656, iParam0, 1))
						{
							return func_64(6);
						}
						else
						{
							return func_64(5);
						}
						break;
					
					case 256:
					case 268:
					default:
						if (func_20(Global_2703656, iParam0, 1))
						{
							return func_64(6);
						}
						else
						{
							return func_64(5);
						}
						break;
					}
				}
			}
	}
	return 1;
}

int func_16(int iParam0)
{
	if (iParam0 != func_6())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_17(Global_2689156[iParam0 /*453*/].f_319.f_6) == 16;
			}
		}
	}
	return 0;
}

int func_17(int iParam0)
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
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
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
		case joaat("mpsv_lp0_31"):
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
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
		
		case 148:
			return 21;
			break;
		
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
			break;
		
		case 154:
			return 23;
			break;
		
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
	}
	return -1;
}

int func_18(int iParam0)
{
	if (iParam0 != func_6())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_17(Global_2689156[iParam0 /*453*/].f_319.f_6) == 15;
			}
		}
	}
	return 0;
}

int func_19(int iParam0)
{
	if (iParam0 != func_6())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_17(Global_2689156[iParam0 /*453*/].f_319.f_6) == 14;
			}
		}
	}
	return 0;
}

int func_20(int iParam0, int iParam1, bool bParam2)
{
	if (func_23(iParam0, -2, 0, 0, 0) == func_23(iParam1, -2, 0, 0, 0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (func_21(func_23(iParam0, -2, 0, 0, 0)) && func_21(func_23(iParam1, -2, 0, 0, 0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_21(int iParam0)
{
	if (iParam0 == func_22(1) || iParam0 == func_22(0))
	{
		return 1;
	}
	return 0;
}

int func_22(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_23(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	
	if (func_58(iParam0) && !bParam4)
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
		iVar0 = unk_0x0E40F846A70BA3EC(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4718592.f_81475[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_58(unk_0x9E2D6C50374FCFA9()) || (func_57() && func_56())) && !unk_0xE2D0C323A1AE5D85(Global_2810287.f_4659, 31)) && !bParam4)
	{
		uVar1 = func_55();
		if (unk_0xE5965CDF24F93A9F(uVar1))
		{
			if (unk_0x65FAB09725E2FE75(uVar1))
			{
				if (unk_0xFF65CDB0EB7ACE71(uVar1) != -1)
				{
					if (func_5(unk_0xFF65CDB0EB7ACE71(uVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x44859561F653DD4E()) && iParam1 < 4)
						{
							if (Global_4718592.f_81475[iParam1] != -1)
							{
								return func_53(iParam1, iParam0, 0);
							}
							else
							{
								return func_35(iParam0, unk_0xFF65CDB0EB7ACE71(uVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_35(iParam0, unk_0xFF65CDB0EB7ACE71(uVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x44859561F653DD4E()) && iParam1 < 4)
			{
				if (Global_4718592.f_81475[iParam1] != -1)
				{
					return func_53(iParam1, iParam0, 0);
				}
				else
				{
					return func_24(0, -1, 0);
				}
			}
			else
			{
				return func_24(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x44859561F653DD4E()) && iParam1 < 4)
	{
		if (Global_4718592.f_81475[iParam1] != -1)
		{
			return func_53(iParam1, iParam0, 0);
		}
		else
		{
			return func_35(iParam0, unk_0x9E2D6C50374FCFA9(), iParam1, bParam2, bParam3);
		}
	}
	return func_35(iParam0, unk_0x9E2D6C50374FCFA9(), iParam1, bParam2, bParam3);
}

int func_24(bool bParam0, int iParam1, bool bParam2)
{
	return func_25(unk_0x9E2D6C50374FCFA9(), bParam0, iParam1, bParam2);
}

int func_25(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x0D01086B38EC256F(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x0E40F846A70BA3EC(iParam0);
	if ((func_34() || (func_33() && func_31())) && Global_1655683.f_1)
	{
		if (bParam1)
		{
			return func_30(iParam2, iVar0);
		}
		else
		{
			return func_30(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_29(iVar0, iParam2, 0) && !unk_0xE2D0C323A1AE5D85(Global_4718592.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_22(1);
				}
				else
				{
					return func_22(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xE2D0C323A1AE5D85(Global_4718592.f_4, 20))
			{
				return func_26(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_26(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_22(1);
	}
	return func_22(0);
}

int func_26(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_28(iParam0, iParam1, iParam3);
	if (func_27(Global_4718592.f_86750, 1))
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

int func_27(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4718592.f_138117 == 65)
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
		if (iParam0 == Global_262145.f_9277[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_28(int iParam0, int iParam1, int iParam2)
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
			if (!func_29(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_29(int iParam0, int iParam1, int iParam2)
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
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 0);
				
				case 1:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 1);
				
				case 2:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 2);
				
				case 3:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 4);
				
				case 1:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 5);
				
				case 2:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 6);
				
				case 3:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 8);
				
				case 1:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 9);
				
				case 2:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 10);
				
				case 3:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 12);
				
				case 1:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 13);
				
				case 2:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 14);
				
				case 3:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_30(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_28(iParam1, iParam0, 4);
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

bool func_31()
{
	if (func_32())
	{
		return 1;
	}
	return unk_0xE2D0C323A1AE5D85(Global_4718592.f_142301, 4);
}

bool func_32()
{
	return unk_0xE2D0C323A1AE5D85(Global_4718592.f_131903, 12);
}

bool func_33()
{
	if (unk_0x44859561F653DD4E())
	{
		return unk_0xE2D0C323A1AE5D85(Global_4718592.f_142301, 0);
	}
	return ((unk_0xE2D0C323A1AE5D85(Global_4718592.f_142301, 0) || Global_1923663) && unk_0xB4C854DD86E40FDA(joaat("fm_deathmatch_creator")) > 0);
}

int func_34()
{
	if (func_32() && unk_0x44859561F653DD4E())
	{
		return 1;
	}
	return 0;
}

int func_35(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x0E40F846A70BA3EC(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1853128[iVar2 /*888*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_43())
			{
				iVar3 = func_39(iParam0);
				if (!iVar3 == -1)
				{
					return func_37(iVar3);
				}
			}
			if ((func_63(iParam1, iParam0, iVar0, 0) && !unk_0xE2D0C323A1AE5D85(Global_4718592.f_15, 18)) || ((func_29(unk_0x0E40F846A70BA3EC(iParam1), unk_0x0E40F846A70BA3EC(iParam0), 0) && unk_0xE2D0C323A1AE5D85(Global_4718592.f_15, 23)) && !unk_0xE2D0C323A1AE5D85(Global_4718592.f_15, 18)))
			{
				return func_22(1);
			}
			else if (unk_0xE2D0C323A1AE5D85(Global_4718592.f_15, 26))
			{
				return func_36(1);
			}
			else
			{
				return func_25(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1836580 || Global_1836571) || Global_1853128[iParam0 /*888*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1836580 == 1 && Global_1836590 == 0))
			{
				return func_22(1);
			}
			else
			{
				return func_25(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1836575 && Global_1836066.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_39(iParam0);
	if (!iVar4 == -1)
	{
		return func_37(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_36(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

int func_37(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_38(iParam0);
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

var func_38(int iParam0)
{
	return Global_2680195.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_39(int iParam0)
{
	if (!iParam0 == func_6())
	{
		if (func_41(iParam0, 1))
		{
			return Global_2680195.f_818.f_11[func_40(iParam0)];
		}
	}
	return -1;
}

int func_40(int iParam0)
{
	if (iParam0 != func_6())
	{
		return Global_1893548[iParam0 /*600*/].f_11;
	}
	return func_6();
}

bool func_41(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_42(iParam0))
		{
			return 0;
		}
	}
	return Global_1893548[iParam0 /*600*/].f_11 != func_6();
}

int func_42(int iParam0)
{
	if (iParam0 != func_6())
	{
		if (Global_1893548[iParam0 /*600*/].f_11 != func_6())
		{
			return Global_1893548[iParam0 /*600*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_43()
{
	if ((((((func_52() || func_51()) || func_50()) || func_49()) || func_48()) || func_46()) || func_44())
	{
		return 1;
	}
	if (unk_0x44859561F653DD4E() && unk_0xE2D0C323A1AE5D85(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_44()
{
	return func_45(Global_4718592.f_86750);
}

int func_45(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_31343[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_46()
{
	return func_47(Global_4718592.f_86750);
}

int func_47(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_30684[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_48()
{
	return Global_2714627.f_24;
}

var func_49()
{
	return Global_2714627.f_21;
}

var func_50()
{
	return Global_2714627.f_19;
}

var func_51()
{
	return Global_2714627.f_18;
}

var func_52()
{
	return Global_2714627.f_17;
}

int func_53(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_1058064.f_14[iParam0];
	if (func_43())
	{
		iVar2 = func_39(iParam1);
		if (!iVar2 == -1)
		{
			return func_37(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0xE2D0C323A1AE5D85(Global_4718592.f_594[iParam0 /*17044*/].f_7447[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_6())
	{
		if (Global_4718592.f_81475[iParam0] != -1 && Global_4718592.f_81475[iParam0] <= 4)
		{
			if (Global_4718592.f_81475[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4718592.f_81475[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4718592.f_81475[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4718592.f_81475[iParam0] == 4)
			{
				if (unk_0xE2D0C323A1AE5D85(Global_4718592.f_15, 29))
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
				iVar0 = Global_4718592.f_81475[iParam0];
			}
		}
		else
		{
			iVar0 = func_25(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xE2D0C323A1AE5D85(Global_4718592.f_21, 13))
		{
			iVar0 = func_54(iParam0);
		}
		if (unk_0xE2D0C323A1AE5D85(Global_4718592.f_24, 29))
		{
			iVar0 = 0;
		}
		if (unk_0xE2D0C323A1AE5D85(Global_4718592.f_15, 26) && !func_29(iParam0, unk_0x0E40F846A70BA3EC(iParam1), 0))
		{
			iVar0 = func_36(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_54(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4718592.f_138274;
			break;
		
		case 1:
			iVar0 = Global_4718592.f_138275;
			break;
		
		case 2:
			iVar0 = Global_4718592.f_138276;
			break;
		
		case 3:
			iVar0 = Global_4718592.f_138277;
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

var func_55()
{
	return Global_2621446.f_2;
}

bool func_56()
{
	return unk_0xE2D0C323A1AE5D85(Global_2621446, 4);
}

bool func_57()
{
	return unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_36.f_18, 14);
}

int func_58(int iParam0)
{
	if (func_60(iParam0, 0))
	{
		return 1;
	}
	if (func_59())
	{
		if (iParam0 == unk_0x9E2D6C50374FCFA9())
		{
			return 1;
		}
	}
	if (unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_59()
{
	return unk_0xE2D0C323A1AE5D85(Global_2621446, 3);
}

bool func_60(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		bVar0 = func_61(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853128[iParam0 /*888*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x0D01086B38EC256F(iParam0))
		{
			bVar0 = unk_0x0E40F846A70BA3EC(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_61(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_62();
	}
	if (Global_1575026[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574901[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_62()
{
	return Global_1574907;
}

bool func_63(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x0E40F846A70BA3EC(uParam0) == -1 && unk_0x0E40F846A70BA3EC(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x0E40F846A70BA3EC(iParam0) == unk_0x0E40F846A70BA3EC(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x0E40F846A70BA3EC(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x0E40F846A70BA3EC(iParam0) == iParam2;
	}
	return unk_0x0E40F846A70BA3EC(iParam0) == iParam2;
}

int func_64(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
			if (func_66())
			{
				if (iParam0 == 5)
				{
					iParam0 = 6;
				}
				else
				{
					iParam0 = 5;
				}
			}
			break;
	}
	return func_65(iParam0);
}

int func_65(int iParam0)
{
	switch (iParam0)
	{
		case 10:
			return 9;
			break;
		
		case 5:
			return 8;
			break;
		
		case 6:
			return 7;
			break;
		
		case 8:
			return 6;
			break;
		
		case 7:
			return 4;
			break;
		
		case 4:
		case 11:
			return 2;
			break;
		
		case 0:
		case 2:
		case 3:
		case 9:
		case 1:
			return 1;
			break;
	}
	return 1;
}

int func_66()
{
	int iVar0;
	
	iVar0 = unk_0x0E40F846A70BA3EC(Global_2703656);
	if (iVar0 > -1 && iVar0 < 4)
	{
		return unk_0xE2D0C323A1AE5D85(Global_4718592.f_594[iVar0 /*17044*/].f_10660, 4);
	}
	return 0;
}

void func_67(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (func_69(iParam0))
	{
		return;
	}
	func_68(&(Global_2678323.f_723[iParam0]), &(Global_2678323.f_1086[iParam0]), &(Global_2678323.f_393), bParam1, iParam0, bParam2, &uVar0);
}

int func_68(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)
{
	if (bParam5)
	{
		if (!unk_0x87C0DA419F19FF57(*uParam1) || *uParam1 == unk_0x69CE66B03B2184EB())
		{
			*uParam1 = unk_0x69CE66B03B2184EB();
			*uParam0 = unk_0x69CE66B03B2184EB();
		}
	}
	if (!unk_0x87C0DA419F19FF57(*uParam0) || *uParam0 == unk_0x69CE66B03B2184EB())
	{
		if (bParam3)
		{
			if (!unk_0xE2D0C323A1AE5D85(*uParam2, iParam4))
			{
				*uParam6 = 1;
				unk_0xCED9E32812D6C7C7(uParam2, iParam4);
			}
			*uParam0 = unk_0x69CE66B03B2184EB();
		}
		else
		{
			if (unk_0xE2D0C323A1AE5D85(*uParam2, iParam4))
			{
				*uParam6 = 1;
				unk_0xB0550BC91B0159D6(uParam2, iParam4);
			}
			if (*uParam1 == unk_0x69CE66B03B2184EB())
			{
				*uParam1 = -1;
			}
			*uParam0 = -1;
		}
		return 1;
	}
	else if (unk_0x87C0DA419F19FF57(*uParam1) && !*uParam1 == unk_0x69CE66B03B2184EB())
	{
	}
	return 0;
}

int func_69(int iParam0)
{
	if (iParam0 == func_6())
	{
		return 1;
	}
	if (unk_0x2E87280918B16506(unk_0x05CBA41180F5D521()) == func_70())
	{
		return 1;
	}
	return 0;
}

int func_70()
{
	switch (func_72())
	{
		case 0:
			return func_71();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_71()
{
	switch (Global_2727578)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_72()
{
	return Global_31505;
}

void func_73(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_69(iParam0))
	{
		return;
	}
	if (func_68(&(Global_2678323.f_822[iParam0]), &(Global_2678323.f_1185[iParam0]), &(Global_2678323.f_367), bParam1, iParam0, bParam3, &uVar0))
	{
		func_74(iParam0, bParam2);
	}
}

void func_74(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xCED9E32812D6C7C7(&(Global_2678323.f_368), iParam0);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&(Global_2678323.f_368), iParam0);
	}
	if (unk_0x12DD4A0B247D9B4D(Global_2678323[iParam0]))
	{
		if (bParam1)
		{
			unk_0xA241A7085A493F20(Global_2678323[iParam0], 0);
		}
		else
		{
			unk_0xA241A7085A493F20(Global_2678323[iParam0], 1);
		}
	}
}

bool func_75(int iParam0)
{
	return func_76(&(Global_2678323.f_822[iParam0]));
}

int func_76(var uParam0)
{
	if (unk_0x87C0DA419F19FF57(*uParam0))
	{
		if (!*uParam0 == unk_0x69CE66B03B2184EB())
		{
			return 0;
		}
	}
	return 1;
}

void func_77(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_69(iParam0))
	{
		return;
	}
	if (func_68(&(Global_2678323.f_624[iParam0]), &(Global_2678323.f_987[iParam0]), &(Global_2678323.f_389), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2678323.f_459[iParam0] = uParam1;
		}
	}
}

int func_78(int iParam0)
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
	unk_0x2F046C9381D8E91B(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

int func_79(int iParam0)
{
	int iVar0;
	
	iVar0 = func_39(iParam0);
	if (iVar0 != -1)
	{
		return func_37(iVar0);
	}
	return 1;
}

bool func_80(int iParam0)
{
	return func_76(&(Global_2678323.f_624[iParam0]));
}

void func_81(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	
	if (func_69(iParam0))
	{
		return;
	}
	if (func_68(&(Global_2678323.f_591[iParam0]), &(Global_2678323.f_954[iParam0]), &(Global_2678323.f_388), bParam2, iParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_2678323.f_426[iParam0] = iParam1;
		}
		if (bVar0)
		{
			func_82();
		}
	}
}

void func_82()
{
	Global_2678323.f_1651 = 1;
}

void func_83()
{
	func_2(Global_2810287.f_5193.f_753);
	unk_0xAFBDF6A5E54114C1();
}

int func_84()
{
	var uVar0;
	
	func_89(&uVar0);
	if (Global_1575022 == 0)
	{
		if (!unk_0x9315DBF7D972F07A())
		{
			return 1;
		}
	}
	if (func_88())
	{
		return 1;
	}
	if (Global_2727476)
	{
		return 1;
	}
	if (func_87())
	{
		return 1;
	}
	if (func_86(159))
	{
		if (!func_85())
		{
			return 1;
		}
	}
	if (func_86(157))
	{
		return 1;
	}
	if (!unk_0x20E4972CBF3DBE1B())
	{
		return 1;
	}
	if (func_70() != 0)
	{
		if (unk_0xB4C854DD86E40FDA(func_70()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_85()
{
	return Global_2714627.f_698;
}

int func_86(int iParam0)
{
	if (unk_0x32C089FAFDA9BA2F(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_87()
{
	return Global_2725224;
}

bool func_88()
{
	return Global_2714627.f_693;
}

void func_89(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	
	iVar0 = 0;
	while (iVar0 < unk_0x9418088815C89D59(1))
	{
		iVar1 = unk_0xB1D84E0EF6979085(1, iVar0);
		if (iVar1 == 174)
		{
			unk_0x92039F20B184AB4D(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -1537646326:
					func_90(iVar0);
					break;
				
				case 801199324:
					unk_0x92039F20B184AB4D(1, iVar0, &Var3, 4);
					if (Var3.f_2 == 848999011)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_90(int iParam0)
{
	struct<3> Var0;
	var uVar1;
	var uVar2;
	bool bVar3;
	
	if (unk_0x92039F20B184AB4D(1, iParam0, &Var0, 3))
	{
		if (func_5(Var0.f_1, 1, 1))
		{
			uVar1 = unk_0x407E03586628E458(Var0.f_1);
			if (unk_0xE5965CDF24F93A9F(uVar1))
			{
				if (unk_0xD5C6B5E3B93A5EDC(uVar1, 0))
				{
					uVar2 = unk_0xB3FF0049C1FD38EC(uVar1, 0);
					if (unk_0x49E701A18D345B0E(uVar2, Var0.f_2) && unk_0xDD50B5A22807BAD4())
					{
						if (func_91(uVar2, &bVar3))
						{
							unk_0xF6FBA55B09506B23(uVar2, Var0.f_2);
						}
						if (bVar3)
						{
							unk_0x3D81769BEC61BFF8(&uVar2);
						}
					}
				}
			}
		}
	}
}

int func_91(var uParam0, var uParam1)
{
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		if (!unk_0xA6A089369417736E(uParam0))
		{
			if (unk_0x58FDF0B505AA2260(uParam0))
			{
				if (!unk_0xF4AD75B2D964D8AB(unk_0x15CAA6D7B11F1A7C(uParam0)))
				{
					unk_0x2D58A6131679D82C(uParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x930E64CB0285CAEC(uParam0, 0))
		{
			if (unk_0x3A8B0F5B0E3DE13A(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_92()
{
	wait(0);
}

int func_93()
{
	unk_0x2C07CBAFAC54A645(0);
	return 1;
}

