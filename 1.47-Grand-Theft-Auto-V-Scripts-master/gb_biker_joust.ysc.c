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
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	var uLocal_114 = -1;
	int iLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	struct<20> Local_121[32];
	vector3 vLocal_122[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	var uLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149[4] = { 0, 0, 0, 0 };
	var uLocal_150[2] = { 0, 0 };
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	struct<8> Local_154 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	struct<8> Local_163 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174[4] = { 0, 0, 0, 0 };
	struct<35> Local_175 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 4, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, -1, -1, 0, 0, 0 } ;
	struct<6> Local_176[32];
	struct<21> Local_177 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	iLocal_112 = Global_262145.f_18172;
	iLocal_143 = unk_0x8CCC0A0504C52531();
	if (unk_0xB331FCEB94EB05C8())
	{
		if (func_983(unk_0x95B959F18401C09A(), 0, 1))
		{
			if (!func_939(ScriptParam_177))
			{
				func_884(0, 1);
				func_818();
			}
		}
		else
		{
			func_818();
		}
	}
	else
	{
		func_884(0, 1);
		func_818();
	}
	while (true)
	{
		func_817();
		if (func_811(1))
		{
			func_884(0, 1);
			func_818();
		}
		if (func_803())
		{
			func_884(0, 1);
			func_818();
		}
		func_799();
		func_797();
		func_796();
		func_793();
		func_792();
		func_786();
		switch (func_785(unk_0x72B85B341ADBE9DE()))
		{
			case 0:
				if (func_784() == 1)
				{
					if (func_776())
					{
						func_775(unk_0x72B85B341ADBE9DE(), 1);
					}
				}
				break;
			
			case 1:
				if (func_784() == 1)
				{
					func_50();
				}
				else if (func_784() == 3)
				{
					func_775(unk_0x72B85B341ADBE9DE(), 3);
				}
				break;
			
			case 3:
				func_818();
				break;
		}
		if (unk_0x06C1EBC003C18F1F())
		{
			func_33();
			if (func_32())
			{
				func_884(0, 1);
				func_31(3);
			}
			switch (func_784())
			{
				case 0:
					if (func_28())
					{
						func_31(1);
					}
					break;
				
				case 1:
					func_1();
					break;
				
				case 3:
					func_818();
					break;
				}
		}
	}
}

void func_1()
{
	switch (func_27())
	{
		case 0:
			func_26(1);
			unk_0xDFDE4DC8546F54CF(&(Local_175.f_33), &(Local_175.f_34));
			break;
		
		case 1:
			if (func_25() == 0)
			{
				func_18();
				if (func_17(6))
				{
					if (func_16())
					{
						func_15(10);
						func_26(2);
					}
					else
					{
						func_14(5);
						func_26(5);
					}
				}
			}
			else
			{
				func_26(5);
			}
			break;
		
		case 2:
			if (func_17(11))
			{
				func_26(3);
			}
			break;
		
		case 3:
			if (func_25() == 0)
			{
				func_6();
				if (!func_5(&(Local_175.f_5)))
				{
					func_4(&(Local_175.f_5), 0, 0);
				}
				else if (func_2(&(Local_175.f_5), func_3(), 0))
				{
					func_14(1);
				}
			}
			else
			{
				func_26(5);
			}
			break;
		
		case 5:
			if (func_17(0))
			{
				func_26(6);
			}
			break;
		
		case 6:
			func_31(3);
			break;
	}
}

int func_2(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_4(uParam0, bParam2, 0);
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

int func_3()
{
	return (1000 * Global_262145.f_18161);
}

void func_4(var uParam0, bool bParam1, bool bParam2)
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

bool func_5(var uParam0)
{
	return uParam0->f_1;
}

void func_6()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = func_13();
	if (iVar0 == 0)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (!unk_0x0E4018692D92041D(Local_175.f_32, iVar1))
		{
			vVar2 = { func_12(iVar1) };
			if (!func_11(vVar2, 0f, 0f, 0f, 0))
			{
				if (!unk_0x4F94F07DAD382CDA(Local_175.f_19[iVar1]))
				{
					if (func_8(&(uLocal_174[iVar1]), &(Local_175.f_19[iVar1]), vVar2, 1))
					{
						unk_0x8950ED5730F62EE8(&(Local_175.f_32), iVar1);
						if (!func_5(&uLocal_144))
						{
							func_4(&uLocal_144, 0, 0);
						}
					}
				}
			}
		}
		iVar1++;
	}
	if (func_2(&uLocal_144, 300000, 0))
	{
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			if (unk_0x0E4018692D92041D(Local_175.f_32, iVar1))
			{
				unk_0xCE689A8E8C42ED78(&(Local_175.f_32), iVar1);
			}
			iVar1++;
		}
		func_7(&uLocal_144);
	}
}

void func_7(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_8(var uParam0, var uParam1, vector3 vParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (!func_10(vParam2))
	{
		iVar0 = joaat("prop_gun_case_01");
		if (func_9(iVar0))
		{
			iVar1 = 0;
			unk_0x8950ED5730F62EE8(&iVar1, 0);
			unk_0x8950ED5730F62EE8(&iVar1, 1);
			unk_0x8950ED5730F62EE8(&iVar1, 9);
			unk_0x8950ED5730F62EE8(&iVar1, 4);
			*uParam0 = unk_0x5A4D875D71EDECDE(-301062413, vParam2 + Vector(0f, 0f, 0f), iVar1, -1, iVar0, iParam3, 1);
			*uParam1 = unk_0x0E0E192D65881AC2(*uParam0);
			return 1;
		}
	}
	return 0;
}

bool func_9(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xB815670C37E03CDE(iParam0);
	return unk_0x5D98D654CDC2165A(iParam0);
}

int func_10(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_11(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

Vector3 func_12(int iParam0)
{
	switch (Local_175.f_31)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 1378.065f, 3179.572f, 39.5194f;
				
				case 1:
					return 1386.56f, 3147.986f, 39.52f;
				
				case 2:
					return 1396.397f, 3111.702f, 39.5088f;
				
				case 3:
					return 1402.808f, 3087.676f, 39.5129f;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					return -1375.18f, -3033.337f, 12.9448f;
				
				case 1:
					return -1364.817f, -3015.949f, 12.9676f;
				
				case 2:
					return -1305.581f, -3048.433f, 12.9444f;
				
				case 3:
					return -1317.517f, -3067.379f, 12.9444f;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					return 2039.639f, 4749.277f, 40.013f;
				
				case 1:
					return 2028.618f, 4775.398f, 40.3574f;
				
				case 2:
					return 2134.54f, 4826.913f, 40.4972f;
				
				case 3:
					return 1936.858f, 4695.858f, 40.2577f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_13()
{
	switch (Local_175.f_31)
	{
		case 0:
			return 4;
		
		case 1:
			return 4;
		
		case 2:
			return 4;
		
		default:
	}
	return 0;
}

void func_14(int iParam0)
{
	if (!unk_0x06C1EBC003C18F1F())
	{
		return;
	}
	Local_175.f_14 = iParam0;
}

void func_15(int iParam0)
{
	if (!unk_0x06C1EBC003C18F1F())
	{
		return;
	}
	unk_0x8950ED5730F62EE8(&(Local_175.f_1), iParam0);
}

bool func_16()
{
	return (func_17(8) && func_17(9));
}

bool func_17(int iParam0)
{
	return unk_0x0E4018692D92041D(Local_175.f_1, iParam0);
}

void func_18()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = func_24();
	if (func_17(4))
	{
		if (!func_17(5))
		{
			if (func_23() - func_22(&(Local_175.f_7), 0, 0)) >= func_21()
			{
				func_7(&(Local_175.f_7));
				func_15(5);
			}
		}
	}
	iVar1 = func_23();
	if (func_17(5))
	{
		iVar1 = func_21();
	}
	if (!func_17(3))
	{
		if (bVar0)
		{
			if (func_5(&(Local_175.f_9)))
			{
				func_7(&(Local_175.f_9));
			}
			if (!func_5(&(Local_175.f_7)))
			{
				func_4(&(Local_175.f_7), 0, 0);
				if (Local_175.f_4 > 0)
				{
					iVar2 = unk_0x6985FC3098CCA0EB(unk_0x78DCC5D0CB43DEBA(), (-1 * Local_175.f_4));
					func_20(&(Local_175.f_7), iVar2);
					Local_175.f_4 = 0;
				}
			}
			else if (!func_17(6))
			{
				if ((iVar1 - func_22(&(Local_175.f_7), 0, 0)) <= 0)
				{
					func_15(6);
				}
			}
		}
		else
		{
			if (func_17(7))
			{
				if (func_5(&(Local_175.f_7)))
				{
					Local_175.f_4 = func_22(&(Local_175.f_7), 0, 0);
				}
			}
			else
			{
				Local_175.f_4 = 0;
			}
			if (func_5(&(Local_175.f_7)))
			{
				func_7(&(Local_175.f_7));
			}
			if (!func_5(&(Local_175.f_9)))
			{
				func_4(&(Local_175.f_9), 0, 0);
			}
			else
			{
				if (func_2(&(Local_175.f_9), func_19(), 0))
				{
					func_15(3);
					func_14(6);
				}
				if (func_2(&(Local_175.f_9), (func_19() - 30000), 0))
				{
					func_15(3);
					func_14(6);
				}
			}
		}
	}
}

int func_19()
{
	return 600000;
}

void func_20(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	uParam0->f_1 = 1;
}

int func_21()
{
	return 20000;
}

int func_22(var uParam0, bool bParam1, bool bParam2)
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

int func_23()
{
	return 180000;
}

var func_24()
{
	return (func_17(8) || func_17(9));
}

int func_25()
{
	return Local_175.f_14;
}

void func_26(int iParam0)
{
	if (!unk_0x06C1EBC003C18F1F())
	{
		return;
	}
	Local_175.f_13 = iParam0;
}

int func_27()
{
	return Local_175.f_13;
}

bool func_28()
{
	if (!func_17(1))
	{
		if (func_30() > -1)
		{
			if (func_30() == 0)
			{
				Local_175.f_31 = 0;
			}
			else if (func_30() == 1)
			{
				Local_175.f_31 = 1;
			}
			else
			{
				Local_175.f_31 = 2;
			}
		}
		else
		{
			Local_175.f_31 = unk_0x9EC3B269A34A2BEE(0, 3);
		}
		if (Global_262145.f_18166)
		{
			if (Local_175.f_31 == 0)
			{
				if (!Global_262145.f_18167)
				{
					Local_175.f_31 = 1;
				}
				else
				{
					Local_175.f_31 = 2;
				}
			}
		}
		else if (Global_262145.f_18167)
		{
			if (Local_175.f_31 == 1)
			{
				if (!Global_262145.f_18168)
				{
					Local_175.f_31 = 2;
				}
				else
				{
					Local_175.f_31 = 0;
				}
			}
		}
		else if (Global_262145.f_18168)
		{
			if (Local_175.f_31 == 2)
			{
				if (!Global_262145.f_18167)
				{
					Local_175.f_31 = 0;
				}
				else
				{
					Local_175.f_31 = 1;
				}
			}
		}
		Local_175.f_15 = unk_0x95B959F18401C09A();
		Local_175.f_16[0] = unk_0x95B959F18401C09A();
		Local_175.f_24[0] = iLocal_112;
		Local_175.f_16[1] = func_29();
		Local_175.f_24[1] = iLocal_112;
		func_15(1);
	}
	return func_17(1);
}

int func_29()
{
	return -1;
}

int func_30()
{
	return Global_2528542.f_4889.f_335;
}

void func_31(int iParam0)
{
	Local_175 = iParam0;
}

int func_32()
{
	if (Global_2528542.f_4889.f_36)
	{
		Global_2528542.f_4889.f_36 = 0;
		return 1;
	}
	return 0;
}

void func_33()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7[2];
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	bVar2 = true;
	bVar3 = true;
	if (Local_175 != 3)
	{
		iVar0 = 0;
		while (iVar0 < unk_0xF839A4FC3E76D324())
		{
			if (unk_0x1B094AC15936B3DB(unk_0xDD4FFAA17341D382(iVar0)))
			{
				iVar1 = unk_0xDD4FFAA17341D382(iVar0);
				iVar11 = unk_0xEB9DC13235C0B345(unk_0xDD4FFAA17341D382(iVar0));
				if (!func_47(iVar11, 0))
				{
					iVar6++;
					if (func_17(1))
					{
						if (Local_175.f_16[1] == func_29())
						{
							if (func_45(iVar11))
							{
								if (iVar11 != Local_175.f_15)
								{
									Local_175.f_16[1] = iVar11;
								}
							}
						}
					}
					if (!func_17(8))
					{
						if (iVar11 == Local_175.f_16[0])
						{
							if (func_44(iVar1, 1))
							{
								func_15(8);
							}
						}
					}
					else if (iVar11 == Local_175.f_16[0])
					{
						if (!func_44(iVar1, 1))
						{
							func_43(8);
						}
					}
					if (!func_17(9))
					{
						if (iVar11 == Local_175.f_16[1])
						{
							if (func_44(iVar1, 1))
							{
								func_15(9);
							}
						}
					}
					else if (iVar11 == Local_175.f_16[1])
					{
						if (!func_44(iVar1, 1))
						{
							func_43(9);
						}
					}
					if (func_27() == 1)
					{
						if (func_44(iVar1, 2))
						{
							if (!unk_0x0E4018692D92041D(Local_175.f_2, iVar0))
							{
								iVar5++;
								unk_0x8950ED5730F62EE8(&(Local_175.f_2), iVar0);
							}
							else
							{
								iVar5++;
							}
						}
						else if (unk_0x0E4018692D92041D(Local_175.f_2, iVar0))
						{
							unk_0xCE689A8E8C42ED78(&(Local_175.f_2), iVar0);
						}
					}
					else if (func_27() == 3)
					{
						if (Local_176[iVar0 /*6*/].f_3 > 0)
						{
							iVar9 = func_34(iVar11);
							iVar7[iVar9] = (iVar7[iVar9] + Local_176[iVar0 /*6*/].f_3);
						}
						if (Local_176[iVar0 /*6*/].f_4 > 0)
						{
							iVar9 = func_34(iVar11);
							iVar10 = (1 - iVar9);
							iVar7[iVar10] = (iVar7[iVar10] + Local_176[iVar0 /*6*/].f_4);
						}
					}
					if (func_27() <= 2)
					{
						if (!bVar4)
						{
							if (func_44(iVar1, 1))
							{
								if (!func_44(iVar1, 7))
								{
									bVar4 = true;
								}
							}
						}
					}
					if (func_45(iVar11))
					{
						bVar3 = false;
						if (func_27() == 1)
						{
							iVar8++;
						}
						else if (func_44(iVar1, 1))
						{
							iVar8++;
						}
					}
					if (!func_44(iVar1, 0))
					{
						bVar2 = false;
					}
				}
			}
			iVar0++;
		}
	}
	if (!func_17(7))
	{
		if (iVar5 > 0)
		{
			func_15(7);
		}
	}
	else if (iVar5 == 0)
	{
		func_43(7);
	}
	if (!func_17(2))
	{
		if (iVar5 > 1)
		{
			func_15(2);
		}
	}
	else if (iVar5 <= 1)
	{
		func_43(2);
	}
	if (!func_17(4))
	{
		if (iVar6 > 1)
		{
			if (iVar6 == iVar5)
			{
				func_15(4);
			}
		}
	}
	if (!func_17(11))
	{
		if (func_27() == 2)
		{
			if (!bVar4)
			{
				func_15(11);
			}
		}
	}
	if (func_27() == 1)
	{
		if (func_25() == 0)
		{
			if (!func_5(&(Local_175.f_11)))
			{
				func_4(&(Local_175.f_11), 0, 0);
			}
			else if (func_2(&(Local_175.f_11), 10000, 0))
			{
				if (iVar8 < 2)
				{
					func_14(5);
				}
			}
		}
	}
	else if (func_27() == 3)
	{
		if (func_25() == 0)
		{
			iVar14 = iVar7[1];
			iVar13 = (iLocal_112 - iVar14);
			Local_175.f_27[0] = iVar7[0];
			Local_175.f_27[1] = iVar7[1];
			if (Local_175.f_24[0] != iVar13)
			{
				iVar12 = 0;
				if (Local_175.f_24[0] < iVar13)
				{
					iVar12 = (iVar13 - Local_175.f_24[0]);
				}
				Local_175.f_24[0] = (iVar13 - iVar12);
			}
			iVar14 = iVar7[0];
			iVar13 = (iLocal_112 - iVar14);
			if (Local_175.f_24[1] != iVar13)
			{
				iVar12 = 0;
				if (Local_175.f_24[1] < iVar13)
				{
					iVar12 = (iVar13 - Local_175.f_24[1]);
				}
				Local_175.f_24[1] = (iVar13 - iVar12);
			}
			if (Local_175.f_27[0] >= iLocal_112)
			{
				Local_175.f_30 = 0;
			}
			else if (Local_175.f_27[1] >= iLocal_112)
			{
				Local_175.f_30 = 1;
			}
			if (iVar8 < 2)
			{
				func_14(5);
			}
		}
		else if (func_25() == 1)
		{
			if (Local_175.f_30 == -1)
			{
				if (Local_175.f_27[0] == Local_175.f_27[1])
				{
					Local_175.f_30 = 99;
				}
				else if (Local_175.f_27[0] > Local_175.f_27[1])
				{
					Local_175.f_30 = 0;
				}
				else
				{
					Local_175.f_30 = 1;
				}
			}
		}
	}
	if (bVar2)
	{
		if (!func_17(0))
		{
			func_15(0);
		}
	}
	else if (func_17(0))
	{
		func_43(0);
	}
	if (Local_175.f_3 != iVar5)
	{
		Local_175.f_3 = iVar5;
	}
	if (func_25() == 0)
	{
		if (bVar3)
		{
			func_14(2);
		}
		if (Local_175.f_30 != -1)
		{
			func_14(4);
		}
	}
}

int func_34(int iParam0)
{
	if (func_37(iParam0) || func_35(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_35(int iParam0)
{
	return func_36() == iParam0;
}

int func_36()
{
	return Local_175.f_15;
}

int func_37(int iParam0)
{
	return func_38(iParam0, func_36(), 0);
}

int func_38(int iParam0, int iParam1, bool bParam2)
{
	return func_39(iParam0, iParam1, bParam2, 1);
}

int func_39(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (iParam1 != func_29() && iParam0 != func_29())
	{
		if (!bParam2)
		{
			if (func_42(iParam0, iParam1, iParam3))
			{
				return 0;
			}
		}
		if (Global_1626536[iParam0 /*603*/].f_11 != func_29())
		{
			if (iParam1 == Global_1626536[iParam0 /*603*/].f_11)
			{
				return func_40(iParam1, iParam3);
			}
		}
	}
	return 0;
}

int func_40(int iParam0, int iParam1)
{
	if (func_41(iParam0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_447 == iParam1;
	}
	return 0;
}

int func_41(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (Global_1626536[iParam0 /*603*/].f_11 != func_29())
		{
			return Global_1626536[iParam0 /*603*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_42(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 != func_29())
	{
		if (iParam0 != func_29())
		{
			if (Global_1626536[iParam0 /*603*/].f_11 != func_29())
			{
				if (Global_1626536[iParam0 /*603*/].f_11 == iParam0)
				{
					if (Global_1626536[iParam0 /*603*/].f_11.f_447 == iParam2)
					{
						return iParam1 == iParam0;
					}
				}
			}
		}
	}
	return 0;
}

void func_43(int iParam0)
{
	unk_0xCE689A8E8C42ED78(&(Local_175.f_1), iParam0);
}

bool func_44(int iParam0, int iParam1)
{
	return unk_0x0E4018692D92041D(Local_176[iParam0 /*6*/].f_1, iParam1);
}

bool func_45(int iParam0)
{
	return func_46(iParam0, 1);
}

int func_46(int iParam0, int iParam1)
{
	if (iParam0 != func_29())
	{
		if (Global_1626536[iParam0 /*603*/].f_11 != func_29())
		{
			if (Global_1626536[iParam0 /*603*/].f_11 == iParam0 && Global_1626536[iParam0 /*603*/].f_11.f_447 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_47(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x95B959F18401C09A())
	{
		bVar0 = func_48(-1, 0) == 8;
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

int func_48(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_49();
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

int func_49()
{
	return Global_1312745;
}

void func_50()
{
	if (iLocal_139 > -1)
	{
		if ((!func_770() && !func_769()) && !func_768(179))
		{
			if (func_735(1, 1, 1))
			{
				switch (Local_176[iLocal_139 /*6*/].f_5)
				{
					case 0:
						if (!func_734(2))
						{
							func_713(179, 1, -1, 0);
							iLocal_152 = func_712(unk_0x95B959F18401C09A());
							StringCopy(&Local_154, func_711(), 64);
							func_710(2);
						}
						if (!func_734(4))
						{
							func_625(-1, 0, 0, -1, 0, 0);
							func_710(4);
						}
						if (Local_175.f_13 > 0)
						{
							if (Local_175.f_13 > 1)
							{
								Local_176[iLocal_139 /*6*/].f_5 = 4;
							}
							else
							{
								Local_176[iLocal_139 /*6*/].f_5 = Local_175.f_13;
							}
						}
						break;
					
					case 1:
						func_583();
						func_582();
						func_559();
						func_545();
						if (Local_175.f_13 != 1)
						{
							if (func_44(unk_0xBF4289280FD7809A(), 1))
							{
								func_535(1);
								Local_176[iLocal_139 /*6*/].f_5 = Local_175.f_13;
							}
							else
							{
								func_528();
								Local_176[iLocal_139 /*6*/].f_5 = 4;
							}
						}
						break;
					
					case 2:
						func_583();
						func_527();
						unk_0x3FD9339AA95E323F(0, 140, 1);
						unk_0x3FD9339AA95E323F(0, 141, 1);
						unk_0x3FD9339AA95E323F(0, 142, 1);
						unk_0x3FD9339AA95E323F(0, 143, 1);
						unk_0x3FD9339AA95E323F(0, 24, 1);
						unk_0x3FD9339AA95E323F(0, 345, 1);
						unk_0x3FD9339AA95E323F(0, 346, 1);
						unk_0x3FD9339AA95E323F(0, 347, 1);
						if (func_44(unk_0xBF4289280FD7809A(), 1) || func_44(unk_0xBF4289280FD7809A(), 2))
						{
							if (!func_44(unk_0xBF4289280FD7809A(), 6))
							{
								func_526(1);
							}
							func_545();
						}
						func_521();
						if (Local_175.f_13 != 2)
						{
							func_520(&iLocal_115);
							Local_176[iLocal_139 /*6*/].f_5 = Local_175.f_13;
						}
						break;
					
					case 3:
						if (func_5(&(Local_175.f_5)))
						{
							func_513((func_3() - func_22(&(Local_175.f_5), 0, 0)), func_25() != 0, &iLocal_113, -1);
						}
						if (!func_734(3))
						{
							if (func_2(&(Local_175.f_5), 10000, 0))
							{
								func_512();
								func_710(3);
							}
						}
						if (func_25() == 0)
						{
							func_583();
							func_511();
							func_510();
							func_509();
							if (func_508())
							{
								if (Local_176[iLocal_139 /*6*/].f_5 == 3)
								{
									func_507();
								}
							}
							if (iLocal_139 > -1)
							{
								if (iLocal_139 == unk_0x72B85B341ADBE9DE())
								{
									func_521();
									func_386(&(Global_1361808.f_534), &Global_1361808, 27, &(Global_1361808.f_1), &(Global_1361808.f_117), -1, 0, 0);
								}
							}
						}
						if (Local_175.f_13 != 3)
						{
							Local_176[iLocal_139 /*6*/].f_5 = Local_175.f_13;
						}
						break;
					
					case 4:
						if (Local_175.f_13 > 4)
						{
							Local_176[iLocal_139 /*6*/].f_5 = Local_175.f_13;
						}
						break;
					
					case 5:
						func_528();
						func_83();
						break;
					
					case 6:
						break;
				}
			}
			else
			{
				func_51();
			}
		}
		else
		{
			func_51();
		}
	}
}

void func_51()
{
	int iVar0;
	
	if (!func_734(5))
	{
		func_528();
		if (unk_0xB331FCEB94EB05C8())
		{
			if (func_44(unk_0xBF4289280FD7809A(), 4))
			{
				func_82(4);
				func_80(1);
				unk_0x7D1F395C3A7A37BE(unk_0x33CD235DF1E6A94E(), 1);
			}
		}
		if (unk_0xE38E3CF1625A4145(iLocal_147))
		{
			unk_0x1ABDB383C83A336A(&iLocal_147);
		}
		if (unk_0xE38E3CF1625A4145(iLocal_146))
		{
			unk_0x1ABDB383C83A336A(&iLocal_146);
		}
		if (unk_0xE38E3CF1625A4145(iLocal_148))
		{
			unk_0x1ABDB383C83A336A(&iLocal_148);
		}
		iVar0 = 0;
		while (iVar0 < func_13())
		{
			if (unk_0xE38E3CF1625A4145(iLocal_149[iVar0]))
			{
				unk_0x1ABDB383C83A336A(&(iLocal_149[iVar0]));
			}
			iVar0++;
		}
		func_70();
		func_68();
		func_67();
		func_54(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0);
		func_520(&iLocal_115);
		func_52();
		func_710(5);
	}
}

void func_52()
{
	func_53(0, 0);
}

void func_53(int iParam0, int iParam1)
{
	Global_2405071.f_22 = iParam0;
	Global_2405071.f_23 = iParam1;
}

void func_54(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	if (bParam0)
	{
		if (func_66())
		{
			func_65();
		}
		Global_2405071.f_704.f_517 = unk_0x8C40DC84EDF05997();
		Global_2405071.f_704.f_504 = iParam1;
		Global_2405071.f_704.f_505 = iParam2;
		Global_2405071.f_704.f_506 = iParam10;
		func_68();
		func_58(8, 0, 0, 0, 0);
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
		func_55();
	}
}

void func_55()
{
	if (func_66() && !func_57())
	{
		func_65();
	}
	if (func_57())
	{
		func_56();
	}
	else
	{
		func_68();
		func_58(0, 0, 0, 0, 0);
		Global_2405071.f_1741 = 0;
		Global_2405071.f_1740 = 0;
	}
}

void func_56()
{
	unk_0xAEA0BFBDA0CDA688(&(Global_2405071.f_704), &(Global_2405071.f_1222), 518);
	Global_2405071.f_485 = { Global_2405071.f_491 };
	if (unk_0x8C40DC84EDF05997() == Global_2405071.f_704.f_517)
	{
		Global_2405071.f_1740 = 0;
	}
}

int func_57()
{
	if ((Global_2405071.f_1740 && !unk_0x8C40DC84EDF05997() == Global_2405071.f_1222.f_517) && unk_0x8ED4328770BEE4A1(Global_2405071.f_1222.f_517))
	{
		return 1;
	}
	return 0;
}

void func_58(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2437364.f_1893.f_690.f_16 != func_29())
	{
		if (unk_0x0E4018692D92041D(Global_2424047[Global_2437364.f_1893.f_690.f_16 /*416*/].f_402, 0) && func_59())
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

int func_59()
{
	if (((((func_63(unk_0x95B959F18401C09A()) == 229 || func_63(unk_0x95B959F18401C09A()) == 191) || func_62()) || func_61()) || func_60(unk_0x95B959F18401C09A())) || Global_2506344.f_173 == 1)
	{
		return 0;
	}
	return 1;
}

int func_60(int iParam0)
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

var func_61()
{
	return Global_1574395;
}

int func_62()
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

int func_63(int iParam0)
{
	if (func_64(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_33;
	}
	return -1;
}

int func_64(int iParam0, int iParam1)
{
	if (Global_1626536[iParam0 /*603*/].f_11.f_33 != -1 || (iParam1 && Global_1626536[iParam0 /*603*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_65()
{
	if (func_57())
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

int func_66()
{
	if ((Global_2405071.f_1741 && !unk_0x8C40DC84EDF05997() == Global_2405071.f_704.f_517) && unk_0x8ED4328770BEE4A1(Global_2405071.f_704.f_517))
	{
		return 1;
	}
	return 0;
}

void func_67()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 101)
	{
		Global_2405071.f_1743[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2405071.f_1742 = 0;
}

void func_68()
{
	if (func_66() && !func_57())
	{
		func_65();
	}
	func_69();
	Global_2405071.f_704 = 0;
}

void func_69()
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

void func_70()
{
	int iVar0;
	int iVar1;
	
	if (!func_734(8))
	{
		func_710(8);
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = unk_0x7C1C88877E8AAA50(iVar0);
			if (unk_0xC4DEA49C5B465481(iVar1))
			{
				if (iVar1 != unk_0x95B959F18401C09A())
				{
					if (unk_0x0E4018692D92041D(iLocal_140, iVar0))
					{
						func_78(iVar1, 432, 0, 0);
						func_71(iVar1, func_77(iLocal_153), 0, 0);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_71(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_73(iParam0))
	{
		return;
	}
	if (func_72(&(Global_2416063.f_614[iParam0]), &(Global_2416063.f_977[iParam0]), &(Global_2416063.f_386), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2416063.f_449[iParam0] = uParam1;
		}
	}
}

int func_72(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)
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

int func_73(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 1;
	}
	if (unk_0x36163153849DFDA1(unk_0xD178EF744F20B712()) == func_74())
	{
		return 1;
	}
	return 0;
}

int func_74()
{
	switch (func_76())
	{
		case 0:
			return func_75();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_75()
{
	switch (Global_2460954)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_76()
{
	return Global_25765;
}

int func_77(int iParam0)
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

void func_78(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	
	if (func_73(iParam0))
	{
		return;
	}
	if (func_72(&(Global_2416063.f_581[iParam0]), &(Global_2416063.f_944[iParam0]), &(Global_2416063.f_385), bParam2, iParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_2416063.f_416[iParam0] = iParam1;
		}
		if (bVar0)
		{
			func_79();
		}
	}
}

void func_79()
{
	Global_2416063.f_1509 = 1;
}

void func_80(bool bParam0)
{
	if (unk_0xB331FCEB94EB05C8())
	{
		if (!func_81())
		{
			if (func_983(unk_0x95B959F18401C09A(), 1, 0))
			{
				unk_0x7D1F395C3A7A37BE(unk_0x33CD235DF1E6A94E(), 1);
				unk_0x5FEE418CE11E6DDE(unk_0x33CD235DF1E6A94E(), 342, false);
				unk_0x5FEE418CE11E6DDE(unk_0x33CD235DF1E6A94E(), 122, false);
			}
			unk_0xC9CEFB3A060444AF(unk_0x95B959F18401C09A(), 1f);
			unk_0x1BFE3E4BBCCE8B31(0);
			unk_0x3E281A3DADCB2E6B(true);
			if (Global_1312417.f_1 == 0 || Global_1312417.f_2 == 1)
			{
				Global_1312417.f_2 = 0;
				if (bParam0)
				{
					unk_0xB7B36B6BE857B203(0, 0);
				}
			}
		}
		else
		{
			if (func_983(unk_0x95B959F18401C09A(), 1, 1))
			{
				unk_0x7D1F395C3A7A37BE(unk_0x33CD235DF1E6A94E(), 0);
				unk_0x274C6068B660FFB4(unk_0x33CD235DF1E6A94E(), joaat("weapon_unarmed"), true);
				unk_0x5FEE418CE11E6DDE(unk_0x33CD235DF1E6A94E(), 342, true);
				unk_0x5FEE418CE11E6DDE(unk_0x33CD235DF1E6A94E(), 122, true);
				unk_0xC9CEFB3A060444AF(unk_0x95B959F18401C09A(), 0.5f);
				if (Global_1312417.f_1 == 0 || Global_1312417.f_2 == 1)
				{
					unk_0xB7B36B6BE857B203(1, 0);
				}
			}
			unk_0x1BFE3E4BBCCE8B31(1);
			unk_0x3E281A3DADCB2E6B(false);
		}
	}
}

bool func_81()
{
	return Global_1312417;
}

void func_82(int iParam0)
{
	unk_0xCE689A8E8C42ED78(&(Local_176[unk_0x72B85B341ADBE9DE() /*6*/].f_1), iParam0);
}

void func_83()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<20> Var3;
	int iVar4;
	
	Var3.f_2 = 1065353216;
	Var3.f_3 = 1065353216;
	Var3.f_4 = 1;
	Var3.f_9 = -1;
	Var3.f_18 = -1;
	Var3.f_19 = -1;
	if (!func_734(1))
	{
		if (func_25() != 0)
		{
			if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
			{
				if (func_735(1, 1, 1))
				{
					if (((!func_770() && !func_769()) && !func_768(179)) && func_44(unk_0xBF4289280FD7809A(), 1))
					{
						if (func_384())
						{
							iVar1 = func_34(unk_0x95B959F18401C09A());
							iVar2 = Local_175.f_30;
							switch (func_25())
							{
								case 2:
									unk_0xEDF90B96BED57BCE(1);
									break;
								
								case 3:
									unk_0xEDF90B96BED57BCE(1);
									break;
								
								case 1:
									unk_0xEDF90B96BED57BCE(1);
									if (Local_175.f_30 > -1)
									{
										if (Local_175.f_30 == 99)
										{
											func_382(88, "BK_RUN_OVER", "BIGM_JOUSTDR", &Local_154, iLocal_152, 0, -1, -1, -1, 2, -1);
										}
										else if (iVar1 == iVar2)
										{
											bVar0 = true;
											func_382(87, "GB_WINNER", "BIGM_JOUSTWD", &Local_154, iLocal_152, 0, -1, -1, -1, 2, -1);
										}
										else
										{
											func_382(88, "BK_RUN_OVER", "BIGM_JOUSTLD", &Local_154, iLocal_152, 0, -1, -1, -1, 2, -1);
										}
									}
									else
									{
										func_363(88, "BK_RUN_OVER", "BIGM_JOUSTLT", 1, -1, 2, 1);
									}
									break;
								
								case 5:
									unk_0xEDF90B96BED57BCE(1);
									func_363(88, "BK_RUN_OVER", "BIGM_JOUSTNB", 1, -1, 2, 1);
									break;
								
								case 4:
									unk_0xEDF90B96BED57BCE(1);
									if (iVar1 == iVar2)
									{
										bVar0 = true;
										func_382(87, "GB_WINNER", "BIGM_JOUSTWD", &Local_154, iLocal_152, 0, -1, -1, -1, 2, -1);
									}
									else
									{
										func_382(88, "BK_RUN_OVER", "BIGM_JOUSTLD", &Local_154, iLocal_152, 0, -1, -1, -1, 2, -1);
									}
									break;
								
								case 6:
									func_382(88, "BK_RUN_OVER", "BIGM_JOUSTLD", &Local_154, iLocal_152, 0, -1, -1, -1, 2, -1);
									break;
							}
						}
					}
				}
				iVar4 = unk_0x95B959F18401C09A();
				func_361(1, iVar4);
				if (bVar0)
				{
				}
				func_123(179, bVar0, &Var3, 0);
				func_884(bVar0, 0);
				func_51();
				func_710(1);
			}
		}
	}
	if (func_85(&uLocal_123, 1, 0))
	{
		func_84(0);
	}
}

void func_84(int iParam0)
{
	unk_0x8950ED5730F62EE8(&(Local_176[unk_0x72B85B341ADBE9DE() /*6*/].f_1), iParam0);
}

int func_85(var uParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	func_122(29);
	if ((*uParam0 > 0 && !func_121()) && func_113(unk_0x95B959F18401C09A()) != 0)
	{
		if (!func_110())
		{
			func_109();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_5(&(uParam0->f_3)))
			{
				func_4(&(uParam0->f_3), 0, 0);
			}
			else if (func_2(&(uParam0->f_3), 1000, 0))
			{
				unk_0x8950ED5730F62EE8(&(Global_1669357.f_3), 2);
				if (bParam1)
				{
					unk_0x8950ED5730F62EE8(&(Global_2528542.f_4579), 0);
					func_4(&(uParam0->f_5), 0, 0);
				}
				func_4(&(uParam0->f_1), 0, 0);
				func_108(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_5(&(uParam0->f_5)))
			{
				if (func_2(&(uParam0->f_5), 3000, 0))
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
				func_97(iParam2);
				func_108(uParam0, 2);
			}
			break;
		
		case 2:
			func_97(0);
			if (func_2(&(uParam0->f_1), 15000, 0))
			{
				if (func_86(func_87(0)))
				{
					unk_0xEDF90B96BED57BCE(1);
				}
				func_108(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_2(&(uParam0->f_1), 23500, 0))
			{
				unk_0xCE689A8E8C42ED78(&(Global_2528542.f_4579), 1);
				unk_0xCE689A8E8C42ED78(&(Global_1669357.f_3), 2);
				func_108(uParam0, 4);
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

int func_86(char* sParam0)
{
	unk_0x6D39881CA5436178(sParam0);
	return unk_0xA32C2C4DF096C08A(0);
}

char* func_87(int iParam0)
{
	if (((func_95(unk_0x95B959F18401C09A()) || func_94(unk_0x95B959F18401C09A())) || func_91()) || iParam0)
	{
		if (func_94(unk_0x95B959F18401C09A()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_88(func_90()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_88(int iParam0)
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
	return func_89(iParam0, 0);
	return 0;
}

int func_89(int iParam0, int iParam1)
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

int func_90()
{
	return Global_1645834;
}

bool func_91()
{
	return (func_93() && func_45(func_92()));
}

int func_92()
{
	return Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_35;
}

bool func_93()
{
	return Global_1589819[unk_0x95B959F18401C09A() /*818*/] == 148;
}

bool func_94(int iParam0)
{
	return func_89(func_63(iParam0), 0);
}

bool func_95(int iParam0)
{
	return func_96(func_63(iParam0));
}

int func_96(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1589819[unk_0x95B959F18401C09A() /*818*/] == 148 && func_46(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_35, 1))
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

void func_97(int iParam0)
{
	if (unk_0x0E4018692D92041D(Global_2528542.f_4579, 0))
	{
		if (((((((((((!unk_0xE35413546DC97620() && !unk_0x0E4018692D92041D(Global_2528542.f_786, 2)) && func_983(unk_0x95B959F18401C09A(), 1, 1)) && !Global_68807) && !Global_53675) && !unk_0xBB5E373390A5F824()) && !func_107(unk_0x95B959F18401C09A(), 22)) && func_113(unk_0x95B959F18401C09A()) != 0) && !func_105(func_106())) && !func_95(unk_0x95B959F18401C09A())) && !func_104(func_63(unk_0x95B959F18401C09A()))) && !func_103(func_63(unk_0x95B959F18401C09A())))
		{
			unk_0x8950ED5730F62EE8(&(Global_2528542.f_4579), 1);
			func_102(func_87(iParam0), -1);
			func_98(1);
			unk_0xCE689A8E8C42ED78(&(Global_2528542.f_4579), 0);
		}
	}
}

void func_98(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_99(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_121())
	{
		unk_0x0F8EAEEC97DDBCB3(-1, "Boss_Message_Orange", sVar0, false);
	}
}

bool func_99(bool bParam0)
{
	return func_100(unk_0x95B959F18401C09A(), bParam0);
}

bool func_100(int iParam0, bool bParam1)
{
	return func_101(iParam0, bParam1, 1);
}

int func_101(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_46(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1626536[iParam0 /*603*/].f_11;
	if (iVar0 != func_29() && Global_1626536[iVar0 /*603*/].f_11.f_447 == iParam2)
	{
		return 1;
	}
	return 0;
}

void func_102(char* sParam0, int iParam1)
{
	unk_0x37621D6689F9E3C3(sParam0);
	unk_0x092150016C06C431(0, 0, false, iParam1);
}

int func_103(int iParam0)
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

int func_104(int iParam0)
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

int func_105(int iParam0)
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

int func_106()
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

bool func_107(int iParam0, int iParam1)
{
	return unk_0x0E4018692D92041D(Global_1626536[iParam0 /*603*/].f_11.f_4, iParam1);
}

void func_108(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_109()
{
	Global_2460155 = 1;
}

int func_110()
{
	if (((((((func_63(unk_0x95B959F18401C09A()) == 170 || func_63(unk_0x95B959F18401C09A()) == 219) || func_63(unk_0x95B959F18401C09A()) == 221) || func_63(unk_0x95B959F18401C09A()) == 220) || func_63(unk_0x95B959F18401C09A()) == 216) || func_63(unk_0x95B959F18401C09A()) == 215) || func_63(unk_0x95B959F18401C09A()) == 214) || func_63(unk_0x95B959F18401C09A()) == 218)
	{
		return 1;
	}
	if (func_111(unk_0x95B959F18401C09A()))
	{
		return 1;
	}
	return 0;
}

int func_111(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_983(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_112(Global_2424047[iParam0 /*416*/].f_309.f_5) == 2;
			}
		}
	}
	return 0;
}

int func_112(int iParam0)
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

int func_113(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_120(iParam0) && !func_119(iParam0)) && !unk_0x0E4018692D92041D(Global_1626536[iParam0 /*603*/].f_1, 8));
	bVar2 = func_118(iParam0);
	bVar3 = func_81();
	uVar4 = func_770();
	if ((bVar1 && (func_117(iParam0) || func_116(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (bVar3 || ((!bVar2 && !func_115(iParam0)) && !func_114(iParam0)))
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

bool func_114(int iParam0)
{
	return func_107(iParam0, 19);
}

int func_115(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_107(iParam0, 9);
	}
	return 0;
}

int func_116(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x0E4018692D92041D(Global_1626536[iVar0 /*603*/].f_1, 0);
	}
	return 0;
}

int func_117(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x0E4018692D92041D(Global_1626536[iVar0 /*603*/].f_1, 7);
	}
	return 0;
}

bool func_118(int iParam0)
{
	return func_107(iParam0, 20);
}

bool func_119(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_1626536[iParam0 /*603*/].f_1, 2);
}

int func_120(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1626536[iVar0 /*603*/] != -1;
	}
	return 0;
}

bool func_121()
{
	return Global_2437364.f_2708[0 /*80*/].f_1 != 0;
}

void func_122(int iParam0)
{
	unk_0x8950ED5730F62EE8(&(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_4), iParam0);
}

void func_123(int iParam0, bool bParam1, var uParam2, bool bParam3)
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
	
	func_359(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		iVar1 = (iVar1 + func_358(iParam0, uParam2->f_13, bParam3));
		if (iParam0 == 233)
		{
			iVar6 = (uParam2->f_10 / uParam2->f_11) * 100;
			iVar1 = ((iVar1 / 100) * iVar6);
		}
		iVar1 = round((to_float(iVar1) / to_float(uParam2->f_4)));
		iVar1 = round((IntToFloat(iVar1) * fVar3));
		iVar1 = round((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = (iVar0 + func_357(iParam0, bParam3));
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
	if (func_355(iParam0))
	{
		if (bParam1)
		{
			if (func_354(unk_0x95B959F18401C09A()) > 0)
			{
				func_353();
			}
			else
			{
				func_352();
			}
		}
		else
		{
			func_351();
		}
	}
	func_335(iParam0, bParam1, uParam2, &iVar0, &iVar4);
	func_333(iParam0, uParam2, &iVar0, &iVar5);
	func_310(iParam0, uParam2, &iVar0, &iVar5);
	func_296(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	func_279(iParam0, uParam2, &iVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_2528542.f_4889.f_378 = iVar4;
	}
	else
	{
		Global_2528542.f_4889.f_378 = iVar5;
	}
	iVar8 = func_92();
	if (iVar8 != func_29() && iParam0 != 148)
	{
		if (func_278(unk_0x95B959F18401C09A(), 0))
		{
			if (!func_276(unk_0x95B959F18401C09A(), iVar8, 1))
			{
				func_232(&iVar0, 1);
			}
		}
	}
	func_227(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_1669366.f_10 = iVar1;
		func_226();
		func_176(0, unk_0x33CD235DF1E6A94E(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1669366.f_9 = iVar0;
		func_150(iParam0, iVar0, iVar7, iVar4, iVar5, uParam2);
		func_149(iParam0, iVar0);
		if (func_148(iParam0))
		{
			if (func_147(iParam0) > -1)
			{
				func_146(func_147(iParam0), iVar0);
			}
		}
		Global_2460813 = iVar0;
		func_145(&Global_2459077, 0, 0);
	}
	if (func_115(unk_0x95B959F18401C09A()) || func_118(unk_0x95B959F18401C09A()))
	{
		func_133(iParam0);
	}
	if (func_96(iParam0))
	{
		Global_1669384.f_13 = iVar0;
		Global_1669384.f_14 = iVar1;
	}
	if (func_104(iParam0))
	{
		Global_1669438.f_13 = iVar0;
		Global_1669438.f_14 = iVar1;
	}
	if (func_132(iParam0))
	{
		Global_1669501.f_12 = iVar0;
		Global_1669501.f_13 = iVar1;
	}
	if (func_131(iParam0))
	{
		Global_1669545.f_12 = iVar0;
		Global_1669545.f_13 = iVar1;
	}
	if (func_130(iParam0))
	{
		Global_1669599.f_12 = iVar0;
		Global_1669599.f_13 = iVar1;
	}
	if (func_103(iParam0))
	{
		if (func_129(iParam0))
		{
			Global_1669680.f_12 = iVar0;
			Global_1669680.f_13 = iVar1;
		}
		else if (func_125(iParam0))
		{
			Global_1669733.f_12 = iVar0;
			Global_1669733.f_13 = iVar1;
		}
	}
	if (func_124(iParam0))
	{
		Global_1669817.f_12 = iVar0;
		Global_1669817.f_13 = iVar1;
	}
}

int func_124(int iParam0)
{
	switch (iParam0)
	{
		case 243:
			return 1;
		
		default:
	}
	return 0;
}

int func_125(int iParam0)
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && func_126(func_127(unk_0x95B959F18401C09A()))))
	{
		return 1;
	}
	return 0;
}

int func_126(int iParam0)
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

int func_127(int iParam0)
{
	if (func_63(iParam0) == 237 || func_63(iParam0) == 250)
	{
		return func_128(iParam0);
	}
	return -1;
}

int func_128(int iParam0)
{
	if (func_64(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_181;
	}
	return -1;
}

int func_129(int iParam0)
{
	if (iParam0 == 237)
	{
		return 1;
	}
	return 0;
}

int func_130(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_131(int iParam0)
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

int func_132(int iParam0)
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

void func_133(int iParam0)
{
	if (func_144(unk_0x95B959F18401C09A()) && func_143())
	{
		if (func_142(iParam0))
		{
			func_136(9086, -1);
		}
		else if (func_135(iParam0))
		{
			func_136(9088, -1);
		}
		else if (func_89(iParam0, 1))
		{
			func_136(9089, -1);
		}
		else if (func_134(iParam0))
		{
			func_136(9090, -1);
		}
	}
}

int func_134(int iParam0)
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

int func_135(int iParam0)
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

void func_136(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_140(iParam0, func_141(iParam1), 0);
	iVar0++;
	if (!func_139(iParam0))
	{
		func_138(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_137(iParam0, iVar0, iParam1, 1);
	}
}

void func_137(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2539502[iParam0 /*3*/][func_141(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x12B6E23F244DDB0F(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1382642[func_141(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1382648[func_141(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1382654[func_141(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1382660[func_141(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1382618[func_141(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1382624[func_141(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1382630[func_141(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1382636[func_141(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1382594[func_141(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1382600[func_141(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1382606[func_141(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1382612[func_141(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1382666[func_141(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1382672[func_141(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1382678[func_141(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1382684[func_141(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1382690[func_141(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1382696[func_141(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1382702[func_141(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1382708[func_141(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2573513[0 /*3*/][func_141(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2573513[1 /*3*/][func_141(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2573513[2 /*3*/][func_141(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2573513[3 /*3*/][func_141(iParam2)] = iParam1;
			break;
		
		case 8956:
			Global_2573644[func_141(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1382714[func_141(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1382720[func_141(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1382726[func_141(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1382732[func_141(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2573577[0 /*3*/][func_141(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2573577[1 /*3*/][func_141(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2573577[2 /*3*/][func_141(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2573577[3 /*3*/][func_141(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2573577[4 /*3*/][func_141(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2573647[0 /*3*/][func_141(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2573647[1 /*3*/][func_141(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2573647[2 /*3*/][func_141(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2573647[3 /*3*/][func_141(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2573647[4 /*3*/][func_141(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2573663[0 /*3*/][func_141(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2573663[1 /*3*/][func_141(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2573663[2 /*3*/][func_141(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2573663[3 /*3*/][func_141(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2573663[4 /*3*/][func_141(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2573577[5 /*3*/][func_141(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2573513[4 /*3*/][func_141(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2573679[func_141(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2573688[func_141(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2573682[func_141(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2573691[func_141(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2573685[func_141(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2573694[func_141(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2573697[func_141(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2573577[6 /*3*/][func_141(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2573513[5 /*3*/][func_141(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2573577[7 /*3*/][func_141(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2573513[6 /*3*/][func_141(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2573577[8 /*3*/][func_141(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2573513[7 /*3*/][func_141(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2573577[9 /*3*/][func_141(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2573513[8 /*3*/][func_141(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2573577[10 /*3*/][func_141(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2573513[9 /*3*/][func_141(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2573577[11 /*3*/][func_141(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2573513[10 /*3*/][func_141(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2573577[12 /*3*/][func_141(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2573513[11 /*3*/][func_141(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2573577[13 /*3*/][func_141(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2573513[12 /*3*/][func_141(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2573577[14 /*3*/][func_141(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2573513[13 /*3*/][func_141(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2573577[15 /*3*/][func_141(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2573513[14 /*3*/][func_141(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2573577[16 /*3*/][func_141(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2573513[15 /*3*/][func_141(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2573577[17 /*3*/][func_141(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2573513[16 /*3*/][func_141(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2573513[17 /*3*/][func_141(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2573513[18 /*3*/][func_141(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2573513[19 /*3*/][func_141(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2573513[20 /*3*/][func_141(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2573700[func_141(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2573703[func_141(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2573706[func_141(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2573709[func_141(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2573712[func_141(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2573715[func_141(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2573718[func_141(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2573721[func_141(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2573724[func_141(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2573727[func_141(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2573730[func_141(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2573733[func_141(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2573736[func_141(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_138(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_141(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x12B6E23F244DDB0F(iVar0, iParam1, iParam3);
	}
}

int func_139(int iParam0)
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

int func_140(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_141(iParam1)];
	if (unk_0x75D54ED6C1AD1642(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_141(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_49();
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

int func_142(int iParam0)
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

bool func_143()
{
	return func_45(unk_0x95B959F18401C09A());
}

bool func_144(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_117, 14);
}

void func_145(var uParam0, bool bParam1, bool bParam2)
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

void func_146(int iParam0, int iParam1)
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

int func_147(int iParam0)
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

int func_148(int iParam0)
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

void func_149(int iParam0, int iParam1)
{
	if (func_144(unk_0x95B959F18401C09A()) && func_143())
	{
		if (func_142(iParam0) && iParam1 > 0)
		{
			func_138(9087, (func_140(9087, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

void func_150(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
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
	
	iVar4 = func_175();
	if (iVar4 != func_29())
	{
		func_174(iVar4, &uVar0, &uVar1);
	}
	bVar5 = !func_173(1);
	Var6.f_1 = -1;
	switch (iParam0)
	{
		case 168:
			if (!func_172())
			{
				unk_0xA4CF8D21E553B5FC(iParam1, iParam3);
			}
			break;
		
		case 190:
			if (func_143())
			{
				if (!func_172())
				{
					Var6 = { func_171() };
					unk_0xD03C3D53A195C1E1(iParam1, unk_0x36163153849DFDA1(func_170(Var6)), func_169(Var6), iParam4);
				}
			}
			else if (func_172())
			{
				func_157(-856006867, iParam1, &iVar7, 0, 1, 0);
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
			if (func_156())
			{
				if (!func_172())
				{
					unk_0xD03C3D53A195C1E1(iParam1, unk_0x36163153849DFDA1(func_170(func_155(unk_0x95B959F18401C09A()))), 5, iParam4);
				}
			}
			else if (func_172())
			{
				func_157(-856006867, iParam1, &iVar8, 0, 1, 0);
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
			if (func_156())
			{
				if (!func_172())
				{
					iVar2 = func_151(uParam5->f_16, iParam4);
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
			else if (func_172())
			{
				func_157(463142405, iParam1, &iVar9, 0, 1, 0);
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
			if (func_172())
			{
				func_157(1407278493, iParam1, &iVar10, 0, 1, 0);
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
			if (func_156())
			{
				if (!func_172())
				{
					unk_0x895A8E4E832DC110(iParam1, uParam5->f_20, iParam4);
				}
			}
			else if (func_172())
			{
				func_157(-856006867, iParam1, &iVar11, 0, 1, 0);
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
			if (func_172())
			{
				func_157(-961034881, iParam1, &iVar12, 0, 1, 0);
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
			if (func_172())
			{
				func_157(1135468152, iParam1, &iVar13, 0, 1, 0);
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
			if (func_172())
			{
				func_157(-634726636, iParam1, &iVar14, 0, 1, 0);
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
			if (func_172())
			{
				func_157(1698417709, iParam1, &iVar15, 0, 1, 0);
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
			if (func_172())
			{
				func_157(-856006867, iParam1, &iVar16, 0, 1, 0);
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

int func_151(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_154(iParam0, iParam1);
	fVar1 = (to_float(func_152(iParam0, iParam1)) * fVar0);
	return round(fVar1);
}

int func_152(int iParam0, int iParam1)
{
	return (func_153(iParam0) * iParam1);
}

int func_153(int iParam0)
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

float func_154(int iParam0, int iParam1)
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

int func_155(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return Global_1589819[iParam0 /*818*/].f_273.f_177[5 /*12*/];
}

bool func_156()
{
	return func_41(unk_0x95B959F18401C09A());
}

void func_157(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_172())
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
				func_158(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_158(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
			if (iParam1 > 0)
			{
				func_158(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -1693570755:
			func_158(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_158(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_158(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_172())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0xB412AA3DEE298A52(func_49()) || unk_0x2832F5CD8A109CD6())
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
			*uParam0 = func_165(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_164(1, iParam4);
			Global_4264084 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_159(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_159(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x8950ED5730F62EE8(&(Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_160(iParam0);
	}
}

void func_160(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_172())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_163(iParam0))
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
		func_161(&(Global_4263509[iParam0 /*84*/]));
	}
}

void func_161(var uParam0)
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
	func_162(&(uParam0->f_13));
	func_162(&(uParam0->f_13.f_13));
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

void func_162(var uParam0)
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

int func_163(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263509[iParam0 /*84*/].f_65.f_5 == 1;
	}
	return 0;
}

void func_164(int iParam0, int iParam1)
{
	Global_2460949 = iParam1;
	Global_2460948 = iParam0;
}

int func_165(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263509[iVar0 /*84*/].f_65.f_2 == 0)
		{
			if (!func_172())
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
				func_166(Global_4263509[iVar0 /*84*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_166(struct<66> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_168(vVar0.y);
	if ((Global_262145.f_23434 && !Global_262145.f_23435) && !Global_262145.f_23436)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_167();
		unk_0x09269A9CFC145847(1, &vVar0, 35, iVar1);
	}
}

void func_167()
{
	unk_0x8F59DE352CFE248B("AM_ARENA_SHP");
}

var func_168(int iParam0)
{
	var uVar0;
	
	unk_0x8950ED5730F62EE8(&uVar0, iParam0);
	return uVar0;
}

int func_169(int iParam0)
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

char* func_170(int iParam0)
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

struct<2> func_171()
{
	return Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_193;
}

int func_172()
{
	if (unk_0x4CE1DD5CFC1F941E())
	{
		return unk_0xFCAD2CB678396284();
	}
	return 0;
}

bool func_173(bool bParam0)
{
	return func_278(unk_0x95B959F18401C09A(), bParam0);
}

void func_174(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1626536[iParam0 /*603*/].f_11.f_8[0];
	*uParam2 = Global_1626536[iParam0 /*603*/].f_11.f_8[1];
}

int func_175()
{
	return Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11;
}

int func_176(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_177(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_177(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_187(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x765F6FEEFF39224F(iParam1))
		{
			if (unk_0x068481DAF84B9654(iParam1))
			{
				iVar1 = unk_0x22B02EC53152632C(iParam1);
				func_183(unk_0x61B226C460A8FCC2(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_178(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_178(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	vector3 vVar0;
	
	vVar0 = { func_181(iParam0, 1) };
	if (iParam0 == func_180(unk_0x33CD235DF1E6A94E()))
	{
		func_179(1);
	}
	func_183(vVar0, iParam1, 0, sParam2, iParam3);
}

void func_179(int iParam0)
{
	Global_2437364.f_1890 = iParam0;
}

int func_180(int iParam0)
{
	return iParam0;
}

Vector3 func_181(int iParam0, bool bParam1)
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
	if (iParam0 == func_182(unk_0x33CD235DF1E6A94E()) && unk_0xCB75C331DD5DDCCC(unk_0x7B9C4CEB6D33A226()) == 4)
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

int func_182(int iParam0)
{
	return iParam0;
}

void func_183(vector3 vParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
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
			Global_2437364.f_1289[iVar1 /*30*/].f_4 = func_186(Global_2437364.f_1289[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2437364.f_1289[iVar1 /*30*/].f_7 = unk_0x78DCC5D0CB43DEBA();
			Global_2437364.f_1289[iVar1 /*30*/].f_3 = iParam1;
			Global_2437364.f_1289[iVar1 /*30*/].f_8 = iParam2;
			Global_2437364.f_1289[iVar1 /*30*/].f_9 = func_185();
			Global_2437364.f_1289[iVar1 /*30*/].f_10 = func_184();
			StringCopy(&(Global_2437364.f_1289[iVar1 /*30*/].f_22), sParam3, 16);
			Global_2437364.f_1289[iVar1 /*30*/].f_26 = unk_0x6985FC3098CCA0EB(unk_0x78DCC5D0CB43DEBA(), iParam4);
		}
	}
}

int func_184()
{
	if (Global_2437364.f_1890)
	{
		Global_2437364.f_1890 = 0;
		return 1;
	}
	Global_2437364.f_1890 = 0;
	return 0;
}

var func_185()
{
	var uVar0;
	
	uVar0 = Global_2437364.f_1892;
	Global_2437364.f_1892 = 1;
	return uVar0;
}

float func_186(vector3 vParam0, var uParam1, var uParam2)
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

var func_187(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_188(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_188(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_225(unk_0x95B959F18401C09A()) || func_224(unk_0x95B959F18401C09A()))
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
	else if (func_221() || func_220(unk_0x95B959F18401C09A()))
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
	if (func_219(sParam2))
	{
	}
	if (func_218())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_216(iVar1);
		fVar3 = (to_float(iVar1) * Global_262145.f_1);
		iVar1 = round(fVar3);
		if (bParam10)
		{
			iVar1 = func_215(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_212(0, &iVar1);
					break;
				
				case 3:
					func_212(1, &iVar1);
					break;
				
				case 1:
					func_208(&iVar1);
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
			func_207(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_199((func_206(unk_0x95B959F18401C09A()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0xE62DD6141BEF78D0(iVar1, iParam8, iParam9);
				if (Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_39.f_2 != -1)
				{
					func_207(1165, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_193(iVar1);
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
				func_189((func_191(unk_0x95B959F18401C09A()) + iVar1));
			}
			else
			{
				func_189((func_191(unk_0x95B959F18401C09A()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_189(int iParam0)
{
	if (func_218())
	{
		Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_211.f_5 = iParam0;
		func_190(joaat("mpply_globalxp"), iParam0);
	}
}

void func_190(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x12B6E23F244DDB0F(iVar0, iParam1, 1);
	}
}

int func_191(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_983(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x95B959F18401C09A())
			{
				return func_192(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1589819[iParam0 /*818*/].f_211.f_5;
			}
		}
		else
		{
			return func_192(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_192(int iParam0)
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

void func_193(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_198(unk_0x95B959F18401C09A()) };
	if (unk_0x062B7A5C795CB453())
	{
		if (unk_0x4A5CDD2BE8070A7F(&Var0))
		{
			iVar1 = func_196(func_197(&Var0));
			if (iVar1 == 0)
			{
				func_195(&Global_1382581, iParam0);
				func_194(joaat("mpply_crew_local_xp_0"), Global_1382581);
			}
			else if (iVar1 == 1)
			{
				func_195(&Global_1382582, iParam0);
				func_194(joaat("mpply_crew_local_xp_1"), Global_1382582);
			}
			else if (iVar1 == 2)
			{
				func_195(&Global_1382583, iParam0);
				func_194(joaat("mpply_crew_local_xp_2"), Global_1382583);
			}
			else if (iVar1 == 3)
			{
				func_195(&Global_1382584, iParam0);
				func_194(joaat("mpply_crew_local_xp_3"), Global_1382584);
			}
			else if (iVar1 == 4)
			{
				func_195(&Global_1382585, iParam0);
				func_194(joaat("mpply_crew_local_xp_4"), Global_1382585);
			}
		}
	}
}

void func_194(int iParam0, int iParam1)
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

void func_195(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_196(int iParam0)
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

int func_197(var uParam0)
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

struct<13> func_198(int iParam0)
{
	struct<13> Var0;
	
	unk_0xBC1B3D38C4BB38F4(iParam0, &Var0, 13);
	return Var0;
}

void func_199(int iParam0, int iParam1, int iParam2)
{
	if (func_218())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9494 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1382702[func_141(-1)])
				{
					unk_0xE62DD6141BEF78D0(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1382702[func_141(-1)])
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
		if (func_205(unk_0x95B959F18401C09A()))
		{
			Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_211.f_1 = iParam0;
			Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_211.f_6 = func_203(iParam0, 1);
		}
		func_137(639, iParam0, -1, 1);
		func_138(640, func_203(iParam0, 1), -1, 1, 0);
		Global_1382702[func_141(-1)] = iParam0;
		func_200(7, 0);
	}
}

void func_200(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_202(iParam0, iParam1))
	{
		iVar0 = func_201();
		Global_2458506[iVar0] = iParam0;
	}
}

int func_201()
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

int func_202(int iParam0, var uParam1)
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

int func_203(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_204(iParam0, 0);
}

int func_204(int iParam0, int iParam1)
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

int func_205(int iParam0)
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

int func_206(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x95B959F18401C09A())
			{
				return Global_1382702[func_141(-1)];
			}
			else if (func_205(iParam0))
			{
				return Global_1589819[iParam0 /*818*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1382702[func_141(-1)];
	}
	return 0;
}

void func_207(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_140(iParam0, func_141(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_139(iParam0))
	{
		func_138(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_137(iParam0, iVar0, iParam2, 1);
	}
}

void func_208(int iParam0)
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
				if (unk_0x12D3B4C76D4AAB00(iVar5) == iVar1 || func_211(unk_0x12D3B4C76D4AAB00(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x95B959F18401C09A())
					{
						if (func_210(unk_0x95B959F18401C09A(), iVar5))
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
		iVar6 = round((func_209(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round((func_209(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_209(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_210(int iParam0, int iParam1)
{
	if (unk_0x062B7A5C795CB453())
	{
		Global_2505680 = { func_198(iParam0) };
		Global_2505693 = { func_198(iParam1) };
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

int func_211(int iParam0, int iParam1, int iParam2)
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

void func_212(bool bParam0, int iParam1)
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
				if (func_983(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x95B959F18401C09A())
					{
						iVar1++;
						if (func_210(unk_0x95B959F18401C09A(), iVar4))
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
			if (func_983(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x95B959F18401C09A())
				{
					if (func_213(unk_0x95B959F18401C09A(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_210(unk_0x95B959F18401C09A(), iVar4))
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
		iVar5 = round((func_209(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round((func_209(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_213(int iParam0, int iParam1)
{
	return vdist(func_214(iParam0), func_214(iParam1));
	return 0f;
}

Vector3 func_214(int iParam0)
{
	return unk_0xFBB1F99A825CAB09(unk_0x378BD4B3881338C2(iParam0), false);
}

int func_215(int iParam0)
{
	int iVar0;
	
	if (unk_0x39DF7EBBDAD69F4B() != 3)
	{
		return *iParam0;
	}
	iVar0 = round((func_209(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_216(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0xEE14D9A9F531ADDC(iParam0) > func_206(unk_0x95B959F18401C09A()))
		{
			iParam0 = -func_206(unk_0x95B959F18401C09A());
		}
	}
	if (func_217(8000, 0, 0) > 0)
	{
		if (func_217(8000, 0, 0) < (iParam0 + func_206(unk_0x95B959F18401C09A())))
		{
			iParam0 = (func_217(8000, 0, 0) - func_206(unk_0x95B959F18401C09A()));
		}
	}
	return iParam0;
}

int func_217(int iParam0, bool bParam1, int iParam2)
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

int func_218()
{
	return 1;
}

int func_219(char* sParam0)
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

int func_220(int iParam0)
{
	return func_130(func_63(iParam0));
}

bool func_221()
{
	if (unk_0x289064CB38B560AA())
	{
		return func_223();
	}
	return func_222(Global_4456448.f_138474);
}

int func_222(int iParam0)
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

bool func_223()
{
	return Global_2448756.f_16;
}

bool func_224(int iParam0)
{
	return Global_2424047[iParam0 /*416*/].f_115 == 2;
}

bool func_225(int iParam0)
{
	return Global_2424047[iParam0 /*416*/].f_115 == 7;
}

void func_226()
{
	Global_2460154 = 1;
}

void func_227(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_231(7))
	{
		return;
	}
	iVar0 = func_230(iParam0);
	iVar1 = func_229(iParam0);
	iVar2 = unk_0xEE14D9A9F531ADDC(unk_0x5009A219B22D2352(Global_2528542.f_4889.f_261, unk_0x78DCC5D0CB43DEBA()));
	if (func_228(iParam0) != -1)
	{
		if (iVar2 > func_228(iParam0))
		{
			iVar2 = func_228(iParam0);
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

int func_228(int iParam0)
{
	if (func_89(iParam0, 0) || func_135(iParam0))
	{
		return Global_262145.f_18361;
	}
	if (func_142(iParam0))
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

int func_229(int iParam0)
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
			if (!func_156())
			{
				return Global_262145.f_20927;
			}
			break;
		
		case 226:
			if (!func_156())
			{
				return Global_262145.f_20907;
			}
			break;
		
		case 227:
			if (!func_156())
			{
				return Global_262145.f_20919;
			}
			break;
		
		case 229:
			if (!func_156())
			{
				return Global_262145.f_22083;
			}
			break;
		
		case 230:
			if (!func_156())
			{
				return Global_262145.f_22179;
			}
			break;
		
		case 233:
			if (!func_156())
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
			if (!func_156())
			{
				return Global_262145.f_23810;
			}
			break;
		
		case 238:
			if (!func_156())
			{
				return Global_262145.f_23921;
			}
			break;
		
		case 249:
			if (!func_156())
			{
				return Global_262145.f_23937;
			}
			break;
		
		case 243:
			if (!func_156())
			{
				return Global_262145.f_26066;
			}
			break;
	}
	return 0;
}

int func_230(int iParam0)
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
			if (!func_156())
			{
				return Global_262145.f_17894;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (!func_156())
			{
				return Global_262145.f_17985;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (!func_156())
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
			if (!func_156())
			{
				return Global_262145.f_20926;
			}
			break;
		
		case 226:
			if (!func_156())
			{
				return Global_262145.f_20906;
			}
			break;
		
		case 227:
			if (!func_156())
			{
				return Global_262145.f_20918;
			}
			break;
		
		case 229:
			if (!func_156())
			{
				return Global_262145.f_22082;
			}
			break;
		
		case 230:
			if (!func_156())
			{
				return Global_262145.f_22178;
			}
			break;
		
		case 233:
			if (!func_156())
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
			if (!func_156())
			{
				return Global_262145.f_23809;
			}
			break;
		
		case 238:
			if (!func_156())
			{
				return Global_262145.f_23920;
			}
			break;
		
		case 249:
			if (!func_156())
			{
				return Global_262145.f_23936;
			}
			break;
		
		case 243:
			return Global_262145.f_26062;
	}
	return 0;
}

bool func_231(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_2528542.f_4889.f_41, iParam0);
}

void func_232(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_156())
		{
			if (func_173(0))
			{
				if (!func_99(0))
				{
					if (unk_0xC4DEA49C5B465481(func_175()))
					{
						if (func_275() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_275());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_273(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_237("GB_BCUT_TICK1", func_175(), iVar0, 0, 0, 1, 1);
						}
						func_236(20);
						func_233(func_175(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_233(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_983(iParam0, 0, 1))
	{
		Var0 = 614714962;
		Var0.f_1 = unk_0x95B959F18401C09A();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_235(iParam0);
		func_234(&(Var0.f_6), &(Var0.f_7));
		unk_0x09269A9CFC145847(1, &Var0, 8, func_168(iParam0));
	}
}

void func_234(var uParam0, var uParam1)
{
	*uParam0 = Global_1645834.f_9;
	*uParam1 = Global_1645834.f_10;
}

var func_235(int iParam0)
{
	return Global_1626536[iParam0 /*603*/].f_529;
}

void func_236(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x8950ED5730F62EE8(&(Global_2528542.f_4889.f_7[iVar0]), iVar1);
}

int func_237(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
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
		unk_0x75D3F9044123D4F9(func_244(iParam1, -2, 1, 0, 0));
		unk_0xD61E5ED1D4E687A5(func_242(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x75D3F9044123D4F9(iParam3);
		}
		unk_0xE800DC85FDF60F85(iParam2);
		iVar0 = unk_0x9457C7E9A5E2BC86(0, 1);
		func_238(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_238(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_241() || !unk_0x289064CB38B560AA()) || !func_47(unk_0x95B959F18401C09A(), 0))
	{
		return;
	}
	iVar0 = func_239(iParam2);
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

int func_239(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1665914 - 1))
	{
		if (iParam0 > Global_1665914.f_5[iVar0 /*53*/].f_1)
		{
			func_240(iVar0);
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

void func_240(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1665914.f_5[iVar0 /*53*/] = { Global_1665914.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_241()
{
	return unk_0xE9D7B652961D4AA3(-1762644250);
}

var func_242(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_243(&cVar0);
}

var func_243(char[4] cParam0)
{
	return cParam0;
}

int func_244(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_271(iParam0) && !bParam4)
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
	if (((func_271(unk_0x95B959F18401C09A()) || (func_270() && func_269())) && !unk_0x0E4018692D92041D(Global_2528542.f_4582, 31)) && !bParam4)
	{
		iVar1 = func_268();
		if (unk_0x765F6FEEFF39224F(iVar1))
		{
			if (unk_0xE09156665EC2D83B(iVar1))
			{
				if (unk_0x5C7617A25D50AAE9(iVar1) != -1)
				{
					if (func_983(unk_0x5C7617A25D50AAE9(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x289064CB38B560AA()) && iParam1 < 4)
						{
							if (Global_4456448.f_133551[iParam1] != -1)
							{
								return func_266(iParam1, iParam0, 0);
							}
							else
							{
								return func_256(iParam0, unk_0x5C7617A25D50AAE9(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_256(iParam0, unk_0x5C7617A25D50AAE9(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x289064CB38B560AA()) && iParam1 < 4)
			{
				if (Global_4456448.f_133551[iParam1] != -1)
				{
					return func_266(iParam1, iParam0, 0);
				}
				else
				{
					return func_245(0, -1, 0);
				}
			}
			else
			{
				return func_245(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x289064CB38B560AA()) && iParam1 < 4)
	{
		if (Global_4456448.f_133551[iParam1] != -1)
		{
			return func_266(iParam1, iParam0, 0);
		}
		else
		{
			return func_256(iParam0, unk_0x95B959F18401C09A(), iParam1, bParam2, bParam3);
		}
	}
	return func_256(iParam0, unk_0x95B959F18401C09A(), iParam1, bParam2, bParam3);
}

int func_245(bool bParam0, int iParam1, bool bParam2)
{
	return func_246(unk_0x95B959F18401C09A(), bParam0, iParam1, bParam2);
}

int func_246(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0xC4DEA49C5B465481(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x12D3B4C76D4AAB00(iParam0);
	if ((func_255() || (func_254() && func_252())) && Global_1382745.f_1)
	{
		if (bParam1)
		{
			return func_251(iParam2, iVar0);
		}
		else
		{
			return func_251(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_211(iVar0, iParam2, 0) && !unk_0x0E4018692D92041D(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_250(1);
				}
				else
				{
					return func_250(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0x0E4018692D92041D(Global_4456448.f_4, 20))
			{
				return func_247(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_247(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_250(1);
	}
	return func_250(0);
}

int func_247(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_249(iParam0, iParam1, iParam3);
	if (func_248(Global_4456448.f_138474, 1))
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

int func_248(int iParam0, bool bParam1)
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

int func_249(int iParam0, int iParam1, int iParam2)
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
			if (!func_211(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_250(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_251(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_249(iParam1, iParam0, 4);
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

bool func_252()
{
	if (func_253())
	{
		return 1;
	}
	return unk_0x0E4018692D92041D(Global_4456448.f_165254, 4);
}

bool func_253()
{
	return unk_0x0E4018692D92041D(Global_4456448.f_154961, 12);
}

bool func_254()
{
	if (unk_0x289064CB38B560AA())
	{
		return unk_0x0E4018692D92041D(Global_4456448.f_165254, 0);
	}
	return ((unk_0x0E4018692D92041D(Global_4456448.f_165254, 0) || Global_1648547) && unk_0x1BCDA92AD0A7835B(joaat("fm_deathmatch_creator")) > 0);
}

int func_255()
{
	if (func_253() && unk_0x289064CB38B560AA())
	{
		return 1;
	}
	return 0;
}

int func_256(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (func_263(1))
			{
				iVar3 = func_261(iParam0);
				if (!iVar3 == -1)
				{
					return func_259(iVar3);
				}
			}
			if ((func_258(iParam1, iParam0, iVar0, 0) && !unk_0x0E4018692D92041D(Global_4456448.f_15, 18)) || ((func_211(unk_0x12D3B4C76D4AAB00(iParam1), unk_0x12D3B4C76D4AAB00(iParam0), 0) && unk_0x0E4018692D92041D(Global_4456448.f_15, 23)) && !unk_0x0E4018692D92041D(Global_4456448.f_15, 18)))
			{
				return func_250(1);
			}
			else if (unk_0x0E4018692D92041D(Global_4456448.f_15, 26))
			{
				return func_257(1);
			}
			else
			{
				return func_246(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574400 || Global_1574391) || Global_1589819[iParam0 /*818*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574400 == 1 && Global_1574410 == 0))
			{
				return func_250(1);
			}
			else
			{
				return func_246(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574395 && Global_1573892.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_261(iParam0);
	if (!iVar4 == -1)
	{
		return func_259(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_257(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_258(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_259(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_260(iParam0);
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

var func_260(int iParam0)
{
	return Global_2417757.f_2105.f_44[iParam0 /*2*/].f_1;
}

int func_261(int iParam0)
{
	if (!iParam0 == func_29())
	{
		if (func_278(iParam0, 1))
		{
			return Global_2417757.f_2105.f_11[func_262(iParam0)];
		}
	}
	return -1;
}

int func_262(int iParam0)
{
	if (iParam0 != func_29())
	{
		return Global_1626536[iParam0 /*603*/].f_11;
	}
	return func_29();
}

int func_263(int iParam0)
{
	if ((func_265() || func_264()) || (func_223() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_264()
{
	return Global_2448756.f_15;
}

var func_265()
{
	return Global_2448756.f_14;
}

int func_266(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969025.f_13[iParam0];
	if (func_263(1))
	{
		iVar2 = func_261(iParam1);
		if (!iVar2 == -1)
		{
			return func_259(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0x0E4018692D92041D(Global_4456448.f_105[iParam0 /*11309*/].f_5586[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_29())
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
			iVar0 = func_246(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0x0E4018692D92041D(Global_4456448.f_21, 13))
		{
			iVar0 = func_267(iParam0);
		}
		if (unk_0x0E4018692D92041D(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (unk_0x0E4018692D92041D(Global_4456448.f_15, 26) && !func_211(iParam0, unk_0x12D3B4C76D4AAB00(iParam1), 0))
		{
			iVar0 = func_257(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_267(int iParam0)
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

var func_268()
{
	return Global_2359302.f_2;
}

bool func_269()
{
	return unk_0x0E4018692D92041D(Global_2359302, 4);
}

bool func_270()
{
	return unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_39.f_18, 14);
}

int func_271(int iParam0)
{
	if (func_47(iParam0, 0))
	{
		return 1;
	}
	if (func_272())
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

bool func_272()
{
	return unk_0x0E4018692D92041D(Global_2359302, 3);
}

void func_273(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_274(1);
	}
	else
	{
		iVar1 = func_274(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_274(bool bParam0)
{
	if (bParam0)
	{
		return round((0.05f * 100f));
	}
	return Global_262145.f_12281;
}

int func_275()
{
	return Global_262145.f_12280;
}

int func_276(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_29())
	{
		if (!bParam2)
		{
			if (func_277(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1626536[iParam0 /*603*/].f_11 != func_29())
		{
			return iParam1 == Global_1626536[iParam0 /*603*/].f_11;
		}
	}
	return 0;
}

int func_277(int iParam0, int iParam1)
{
	if (iParam1 != func_29())
	{
		if (iParam0 != func_29())
		{
			if (Global_1626536[iParam0 /*603*/].f_11 != func_29())
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

bool func_278(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_41(iParam0))
		{
			return 0;
		}
	}
	return Global_1626536[iParam0 /*603*/].f_11 != func_29();
}

void func_279(int iParam0, var uParam1, int iParam2, var uParam3)
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
	
	bVar18 = func_99(1);
	bVar19 = false;
	if (iParam0 == 237)
	{
		if (func_156())
		{
			iVar17 = unk_0x95B959F18401C09A();
		}
		else
		{
			iVar17 = func_175();
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
				iVar2 = func_295(Global_1589819[iVar11 /*818*/].f_796, *uParam3);
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
			iVar10 = func_294(*iParam2);
			if (iVar10 > 0)
			{
				if (iVar17 == unk_0x95B959F18401C09A())
				{
					func_293("TICK_TCUT", iVar10, 1);
				}
				*iParam2 = (*iParam2 - iVar10);
			}
			Global_1669680.f_49 = *uParam3;
			if (iVar17 == unk_0x95B959F18401C09A())
			{
				if (iVar2 > 0)
				{
					func_292(iVar2);
				}
				if (*uParam3 > 0)
				{
					func_290(*uParam3);
				}
				iVar6 = func_289(&uVar5);
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
						func_236(140);
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
								if (func_288(iVar23))
								{
									func_280(iVar23, 1, 198210293);
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
					func_236(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_280(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_282(iParam0);
	func_281(iParam0, uVar0, iParam1, iParam2);
}

void func_281(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<8> Var0;
	
	Var0 = -2087882476;
	Var0.f_1 = unk_0x95B959F18401C09A();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_235(iParam0);
	func_234(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_29())
	{
		if (unk_0xC4DEA49C5B465481(iParam0))
		{
			unk_0x09269A9CFC145847(1, &Var0, 8, func_168(iParam0));
		}
	}
}

int func_282(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_287();
	iVar0 = func_285(iParam0, iVar0);
	iVar1 = Global_1626536[func_175() /*603*/].f_11.f_446;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_14832));
	if (iVar0 < func_284())
	{
		iVar0 = func_284();
	}
	if (iVar0 > func_283())
	{
		iVar0 = func_283();
	}
	return iVar0;
}

int func_283()
{
	return Global_262145.f_14833;
}

int func_284()
{
	return Global_262145.f_16008;
}

int func_285(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_354(iParam0) * func_286());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_286()
{
	return Global_262145.f_16007;
}

var func_287()
{
	return Global_262145.f_12272;
}

int func_288(int iParam0)
{
	if (unk_0xC4DEA49C5B465481(iParam0))
	{
		if (iParam0 != unk_0x95B959F18401C09A())
		{
			if (func_276(iParam0, unk_0x95B959F18401C09A(), 0))
			{
				if (!func_107(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_289(var uParam0)
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
			if (!func_47(iVar2, 0) && !func_276(iVar2, unk_0x95B959F18401C09A(), 1))
			{
				iVar1++;
			}
			else if (func_47(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_290(int iParam0)
{
	func_291(iParam0, 7236);
}

void func_291(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_140(iParam1, -1, 0);
	func_138(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_292(int iParam0)
{
	func_291(iParam0, 7231);
}

int func_293(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x1F85AD4B26B92795(sParam0);
	unk_0xE800DC85FDF60F85(iParam1);
	iVar0 = unk_0x9457C7E9A5E2BC86(0, 1);
	func_238(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_294(int iParam0)
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

int func_295(struct<5> Param0, int iParam1)
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

void func_296(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)
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
	bVar16 = func_99(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_156())
		{
			iVar15 = unk_0x95B959F18401C09A();
		}
		else
		{
			iVar15 = func_175();
		}
		if (iVar15 != -1)
		{
			if (uParam1->f_16 == 8)
			{
				iVar0 = (func_308(iVar15) + uParam1->f_8);
			}
			else
			{
				iVar0 = (func_299(uParam1->f_16) + uParam1->f_8);
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
			iVar2 = func_152(uParam1->f_16, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_151(uParam1->f_16, *uParam3);
				if (iVar9 > 0)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (func_298(*iParam2) > 0)
			{
				if (iVar15 == unk_0x95B959F18401C09A())
				{
					func_293("SMTICK_RONCUT", func_298(*iParam2), 1);
				}
				*iParam2 = (*iParam2 - func_298(*iParam2));
			}
			if (iVar15 == unk_0x95B959F18401C09A())
			{
				func_297(iVar2, iVar9);
				iVar6 = func_289(&uVar5);
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
						func_236(44);
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
								if (func_288(iVar20))
								{
									func_280(iVar20, 1, 1160415507);
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
					func_236(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_297(int iParam0, int iParam1)
{
	if (iParam0 > 0)
	{
		func_291(iParam0, 6116);
	}
	if (iParam1 > 0)
	{
		func_291(iParam1, 6117);
	}
}

int func_298(int iParam0)
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

int func_299(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_306())
	{
		return 0;
	}
	if (iParam0 == 8)
	{
		return func_308(unk_0x95B959F18401C09A());
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		iVar2 = func_301(func_302(func_305(iVar0), -1, -1));
		if (func_300(iVar2) == iParam0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_300(int iParam0)
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

int func_301(int iParam0)
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

int func_302(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_49();
	}
	iVar0 = 0;
	iVar1 = func_304(iParam0, iParam1);
	iVar2 = func_303(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0xD6BB9B31765DFA24(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_303(int iParam0)
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

int func_304(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_49();
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

int func_305(int iParam0)
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

bool func_306()
{
	return func_307() != 0;
}

int func_307()
{
	return Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_258;
}

int func_308(int iParam0)
{
	if (iParam0 != func_29() && func_309(iParam0))
	{
		return Global_1589819[iParam0 /*818*/].f_273.f_258.f_3;
	}
	return 0;
}

int func_309(int iParam0)
{
	if (iParam0 != func_29())
	{
		return Global_1589819[iParam0 /*818*/].f_273.f_258 != 0;
	}
	return 0;
}

void func_310(int iParam0, var uParam1, int iParam2, var uParam3)
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
	
	bVar17 = func_99(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_156())
		{
			iVar15 = unk_0x95B959F18401C09A();
		}
		else
		{
			iVar15 = func_175();
		}
		if (iVar15 != -1)
		{
			iVar16 = func_155(iVar15);
			iVar0 = (func_332(iVar15, iVar16) + uParam1->f_8);
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
			iVar2 = func_328(iVar15, iVar16, iVar1);
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
				func_325(iVar16, iVar2);
				if (func_321(iVar16) >= Global_262145.f_20457 || iVar2 >= Global_262145.f_20457)
				{
					func_311(5);
				}
				iVar6 = func_289(&uVar5);
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
						func_236(108);
					}
					else
					{
						func_236(110);
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
								if (func_288(iVar20))
								{
									func_280(iVar20, 1, -1905128202);
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
					func_236(112);
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

void func_311(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_20445)
			{
				if (func_313(Global_262145.f_20446))
				{
					func_312("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0, 1);
				}
			}
			break;
		
		case 1:
			if (Global_262145.f_20447)
			{
				if (func_313(Global_262145.f_20448))
				{
					func_312("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0, 1);
				}
			}
			break;
		
		case 2:
			if (Global_262145.f_20449)
			{
				if (func_313(Global_262145.f_20450))
				{
					func_312("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0, 1);
				}
			}
			break;
		
		case 3:
			if (Global_262145.f_20451)
			{
				if (func_313(Global_262145.f_20452))
				{
					func_312("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0, 1);
				}
			}
			break;
		
		case 4:
			if (Global_262145.f_20453)
			{
				if (func_313(Global_262145.f_20454))
				{
					func_312("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0, 1);
				}
			}
			break;
		
		case 5:
			if (Global_262145.f_20455)
			{
				if (func_313(Global_262145.f_20456))
				{
					func_293("CLOTHAWDSTRAP3", Global_262145.f_20457, 1);
				}
			}
			break;
		
		case 6:
			if (Global_262145.f_20458)
			{
				if (func_313(Global_262145.f_20459))
				{
					func_293("CLOTHAWDSTRAP5", Global_262145.f_20591, 1);
				}
			}
			break;
		
		case 7:
			if (Global_262145.f_20461)
			{
				if (func_313(Global_262145.f_20462))
				{
					func_312("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0, 1);
				}
			}
			break;
		
		case 8:
			if (Global_262145.f_20463)
			{
				if (func_313(Global_262145.f_20464))
				{
					func_312("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0, 1);
				}
			}
			break;
		
		case 9:
			if (Global_262145.f_20465)
			{
				if (func_313(Global_262145.f_20466))
				{
					func_312("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0, 1);
				}
			}
			break;
		
		case 10:
			if (Global_262145.f_20467)
			{
				if (func_313(Global_262145.f_20468))
				{
					func_312("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0, 1);
				}
			}
			break;
		
		case 11:
			if (Global_262145.f_20469)
			{
				if (func_313(Global_262145.f_20470))
				{
					func_312("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0, 1);
				}
			}
			break;
		
		case 12:
			if (Global_262145.f_20471)
			{
				if (func_313(Global_262145.f_20472))
				{
					func_312("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0, 1);
				}
			}
			break;
		
		case 13:
			if (Global_262145.f_20473)
			{
				if (func_313(Global_262145.f_20474))
				{
					func_312("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0, 1);
				}
			}
			break;
		
		case 14:
			if (Global_262145.f_20475)
			{
				if (func_313(Global_262145.f_20476))
				{
					func_312("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0, 1);
				}
			}
			break;
	}
}

int func_312(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
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
		Global_2505680 = { func_198(unk_0x95B959F18401C09A()) };
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
	func_238(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_313(int iParam0)
{
	switch (iParam0)
	{
		case 558790811:
		case 1740171158:
		case -1191485992:
		case -1735342207:
			if (!func_318(15417, -1, -1))
			{
				func_317(15417, 1, -1, 1);
				return 1;
			}
			break;
		
		case 2108830041:
		case -120911428:
		case -1407302654:
		case -2039798986:
			if (!func_318(15418, -1, -1))
			{
				func_317(15418, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1898746692:
		case -1359197372:
		case -140996548:
		case -1850642937:
			if (!func_318(15425, -1, -1))
			{
				func_317(15425, 1, -1, 1);
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
			if (!func_318(15405, -1, -1))
			{
				func_317(15405, 1, -1, 1);
				return 1;
			}
			break;
		
		case 2024167318:
		case 1915398071:
		case -571324979:
		case 1374601256:
			if (!func_318(15393, -1, -1))
			{
				func_317(15393, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1720955761:
		case 1608057620:
		case 867332432:
		case -660288110:
			if (!func_318(15409, -1, -1))
			{
				func_317(15409, 1, -1, 1);
				return 1;
			}
			break;
		
		case 221872318:
		case -1802539904:
		case -1005186539:
		case -426022529:
			if (!func_318(15396, -1, -1))
			{
				func_317(15396, 1, -1, 1);
				return 1;
			}
			break;
		
		case -2098369500:
		case -1196968784:
		case -1314656979:
		case -1132522169:
			if (!func_318(15412, -1, -1))
			{
				func_317(15412, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1172743557:
		case -1502212019:
		case 1110085176:
		case -889671110:
			if (!func_316(209, -1))
			{
				func_314(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1883175477:
		case -584614481:
		case -1736983851:
		case -182614393:
			if (!func_318(15403, -1, -1))
			{
				func_317(15403, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1449333520:
		case -890709710:
		case -1496983695:
		case 48701978:
			if (!func_316(209, -1))
			{
				func_314(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -869990766:
		case -581140963:
		case 1827333048:
		case -646852824:
			if (!func_318(15389, -1, -1))
			{
				func_317(15389, 1, -1, 1);
				return 1;
			}
			break;
		
		case -542628448:
		case -870458464:
		case 420690954:
		case -408392811:
			if (!func_316(209, -1))
			{
				func_314(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 787769067:
		case 1132791298:
		case 1330653315:
		case 1717168382:
			if (!func_318(15398, -1, -1))
			{
				func_317(15398, 1, -1, 1);
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
			if (!func_318(15400, -1, -1))
			{
				func_317(15400, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1167465472:
		case -313418417:
		case -203035350:
		case -1533320367:
		case 2065127290:
		case -390081030:
			if (!func_316(209, -1))
			{
				func_314(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -2105609173:
		case -698486936:
		case 917598912:
		case 939297301:
		case -56403312:
		case -1368923829:
			if (!func_318(15408, -1, -1))
			{
				func_317(15408, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1864920868:
		case -1072905530:
		case 682284723:
		case 1186965403:
		case -292700571:
		case -2068738593:
			if (!func_316(209, -1))
			{
				func_314(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1729183056:
		case 2114404000:
		case 481083063:
		case 1575507436:
		case -648899601:
		case -612123774:
			if (!func_318(15411, -1, -1))
			{
				func_317(15411, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1967315379:
		case 1750602562:
		case 114660105:
		case 1783131820:
		case -889194678:
		case 801334272:
			if (!func_318(15397, -1, -1))
			{
				func_317(15397, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1192623422:
		case 1330733365:
		case 1897981854:
		case 2059866009:
		case 867092646:
		case -146705667:
			if (!func_318(15413, -1, -1))
			{
				func_317(15413, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1444780905:
		case 1272666697:
		case 1601455173:
		case -1997689882:
		case 627387411:
		case -847831191:
			if (!func_318(15391, -1, -1))
			{
				func_317(15391, 1, -1, 1);
				return 1;
			}
			break;
		
		case 444212231:
		case -1563654102:
		case 1932815241:
		case -1617209023:
		case 308545041:
		case 1682427144:
			if (!func_318(15388, -1, -1))
			{
				func_317(15388, 1, -1, 1);
				return 1;
			}
			break;
		
		case 704955164:
		case -720081735:
		case 1626031863:
		case -1391954917:
		case 35480964:
		case 2029975158:
			if (!func_316(209, -1))
			{
				func_314(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1124704392:
		case -850093035:
		case 926585800:
		case -1832969872:
		case 1539395388:
		case 1377465778:
			if (!func_318(15401, -1, -1))
			{
				func_317(15401, 1, -1, 1);
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
			if (!func_318(15394, -1, -1))
			{
				func_317(15394, 1, -1, 1);
				return 1;
			}
			break;
		
		case -534855486:
		case -1168575065:
		case -1367129204:
		case -1006027910:
			if (!func_316(209, -1))
			{
				func_314(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -516333262:
		case 756873456:
		case 87453937:
		case -1438775324:
			if (!func_318(15406, -1, -1))
			{
				func_317(15406, 1, -1, 1);
				return 1;
			}
			break;
		
		case 485135095:
		case -730037708:
		case -1686659723:
		case -1094274807:
			if (!func_318(15395, -1, -1))
			{
				func_317(15395, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1713551997:
		case -970458486:
		case 1992217604:
		case -1348726092:
			if (!func_316(209, -1))
			{
				func_314(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1490658501:
		case 975601953:
		case -1934557208:
		case 1786218600:
			if (!func_318(15410, -1, -1))
			{
				func_317(15410, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1735635238:
		case 1614208560:
		case -1034032319:
		case -1858021894:
			if (!func_318(15407, -1, -1))
			{
				func_317(15407, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1931303956:
		case -726032561:
		case 1747334867:
		case 1237632771:
			if (!func_316(209, -1))
			{
				func_314(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1931617488:
		case -1824987162:
		case 236389050:
		case 1987485798:
			if (!func_316(209, -1))
			{
				func_314(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1726332301:
		case 417579524:
		case 591736086:
		case 908992470:
			if (!func_318(15414, -1, -1))
			{
				func_317(15414, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1382922530:
		case 734151492:
		case -357636850:
		case -1021993708:
			if (!func_318(15415, -1, -1))
			{
				func_317(15415, 1, -1, 1);
				return 1;
			}
			break;
		
		case 452778672:
		case -1766862320:
		case 479676642:
		case -1654828636:
			if (!func_318(15399, -1, -1))
			{
				func_317(15399, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1776790350:
		case 579562906:
		case 242920617:
		case -1365707749:
			if (!func_318(15404, -1, -1))
			{
				func_317(15404, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1988057295:
		case -619754931:
		case -1219723702:
		case -388208479:
			if (!func_316(209, -1))
			{
				func_314(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 816707921:
		case 1424441799:
		case -1576971340:
		case 2087194554:
			if (!func_318(15392, -1, -1))
			{
				func_317(15392, 1, -1, 1);
				return 1;
			}
			break;
		
		case 744446190:
		case -1405036369:
		case -622901905:
		case 981732339:
			if (!func_318(15390, -1, -1))
			{
				func_317(15390, 1, -1, 1);
				return 1;
			}
			break;
		
		case 917772807:
		case 1929056908:
		case -981132613:
		case 1271443068:
			if (!func_318(15402, -1, -1))
			{
				func_317(15402, 1, -1, 1);
				return 1;
			}
			break;
		
		case -292922355:
		case -34538790:
		case -1908986844:
		case -1785118184:
			if (!func_318(15416, -1, -1))
			{
				func_317(15416, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1495432685:
		case 1898518287:
		case 2029126042:
		case -1521032813:
			if (!func_316(209, -1))
			{
				func_314(209, 1, -1, 1);
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
			if (!func_318(15426, -1, -1))
			{
				func_317(15426, 1, -1, 1);
				return 1;
			}
			break;
		
		case -815706791:
		case -1066127505:
		case 1281631799:
		case -1519028808:
			if (!func_318(15422, -1, -1))
			{
				func_317(15422, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1318802347:
		case -1366750043:
		case 447234752:
		case 1996626130:
			if (!func_318(15423, -1, -1))
			{
				func_317(15423, 1, -1, 1);
				return 1;
			}
			break;
		
		case 306110040:
		case 1944822196:
		case 278933172:
		case -1981759857:
			if (!func_318(15421, -1, -1))
			{
				func_317(15421, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1828101251:
		case -1639289459:
		case -562607521:
		case -879279621:
			if (!func_318(15427, -1, -1))
			{
				func_317(15427, 1, -1, 1);
				return 1;
			}
			break;
		
		case -919314748:
		case 1282565442:
		case 755492739:
		case 1276101346:
			if (!func_318(15419, -1, -1))
			{
				func_317(15419, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1971111649:
		case -884280700:
		case -85982412:
		case 1573086793:
			if (!func_318(15420, -1, -1))
			{
				func_317(15420, 1, -1, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_314(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_315())
	{
		iVar0 = Global_2571340[iParam0 /*3*/][func_141(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x353711570A4FAE35(iVar0, iParam1, iParam3);
		}
	}
}

int func_315()
{
	return 1;
	return 0;
}

int func_316(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2571340[iParam0 /*3*/][func_141(iParam1)];
	if (unk_0x0F0A07F7B2FAAE06(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_317(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_49();
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

int func_318(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_49();
	}
	iVar1 = func_320(iParam0, iParam1);
	uVar2 = func_319(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xE35D1055B69473FB(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_319(int iParam0)
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

int func_320(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_49();
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

int func_321(int iParam0)
{
	int iVar0;
	
	iVar0 = func_323(iParam0);
	return func_140(func_322(iVar0), -1, 0);
}

int func_322(int iParam0)
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

int func_323(int iParam0)
{
	int iVar0;
	
	if (func_324(iParam0))
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

int func_324(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_325(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_323(iParam0);
	iVar1 = func_322(iVar0);
	iVar2 = (func_140(iVar1, -1, 0) + iParam1);
	func_138(iVar1, iVar2, -1, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_302(9357, -1, -1) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_177[iVar0 /*12*/] != 0)
			{
				iVar1 = func_322(iVar0);
				iVar3 = (iVar3 + func_140(iVar1, -1, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_327(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_326(9357, iVar5, -1, 1);
	}
}

var func_326(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_49();
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

int func_327(int iParam0)
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

int func_328(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_169(iParam1);
	if (func_324(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_16837;
				if (func_329(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16842);
				}
				if (func_329(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16847);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_16836;
				if (func_329(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16841);
				}
				if (func_329(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16846);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_16835;
				if (func_329(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16840);
				}
				if (func_329(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16845);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_16833;
				if (func_329(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16838);
				}
				if (func_329(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16843);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_16834;
				if (func_329(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16839);
				}
				if (func_329(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16844);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_262145.f_20934;
				if (func_329(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_20936);
				}
				if (func_329(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_20935);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_329(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_331(iParam0, iParam1))
	{
		iVar0 = func_330(iParam0, iParam1);
		return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_330(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_324(iParam1) && iParam0 != func_29())
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

int func_331(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_324(iParam1) && iParam0 != func_29())
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

int func_332(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	if (func_324(iParam1))
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

void func_333(int iParam0, var uParam1, int iParam2, var uParam3)
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
			if (func_143())
			{
				Var0 = { func_171() };
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
				iVar6 = func_328(unk_0x95B959F18401C09A(), Var0, *uParam3);
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
				iVar10 = func_289(&uVar9);
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
					func_236(86);
				}
				Global_2528542.f_4889.f_377 = *iParam2;
			}
			else if (func_99(0))
			{
				Var14 = { func_334(func_175()) };
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
				iVar20 = func_328(func_175(), Var14, *uParam3);
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

struct<2> func_334(int iParam0)
{
	return Global_1626536[iParam0 /*603*/].f_11.f_193;
}

void func_335(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
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
		if (func_41(unk_0x95B959F18401C09A()))
		{
			if (bParam1)
			{
				func_350();
			}
			func_349();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_41(unk_0x95B959F18401C09A()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_341(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_182));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_340(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_289(&uVar2);
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
						func_236(44);
					}
				}
				func_338(*iParam3);
				func_337();
				Global_2528542.f_4889.f_377 = *iParam3;
				iVar7 = 0;
				while (iVar7 < unk_0xF839A4FC3E76D324())
				{
					iVar8 = iVar7;
					if (unk_0x1B094AC15936B3DB(iVar8))
					{
						iVar9 = unk_0xEB9DC13235C0B345(iVar8);
						if (func_288(iVar9))
						{
							func_280(iVar9, 1, -1292453789);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_41(unk_0x95B959F18401C09A()))
		{
			func_336();
		}
	}
}

void func_336()
{
	int iVar0;
	
	iVar0 = Global_2573685[func_49()];
	iVar0++;
	func_137(3667, iVar0, -1, 1);
}

void func_337()
{
	int iVar0;
	
	iVar0 = Global_2573691[func_49()];
	iVar0++;
	func_137(3666, iVar0, -1, 1);
}

void func_338(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2573694[func_49()];
	iVar0 = (iVar0 + iParam0);
	func_137(3668, iVar0, -1, 1);
	if (func_302(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_339(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_326(7666, iVar2, -1, 1);
	}
}

int func_339(int iParam0)
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

var func_340(int iParam0)
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

int func_341(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_348(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_347(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_346(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_342(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_342(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_346(unk_0x9EC3B269A34A2BEE(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_342(int iParam0)
{
	int iVar0;
	
	if (func_345(iParam0))
	{
		iVar0 = func_343(func_344(iParam0));
		return func_140(iVar0, -1, 0);
	}
	return 0;
}

int func_343(int iParam0)
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

int func_344(int iParam0)
{
	int iVar0;
	
	if (func_345(iParam0))
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

int func_345(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_346(int iParam0)
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

int func_347(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_345(iParam0))
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

int func_348(int iParam0)
{
	int iVar0;
	
	if (func_345(iParam0))
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

void func_349()
{
	int iVar0;
	
	iVar0 = Global_2573682[func_49()];
	iVar0++;
	Global_2573682[func_49()] = iVar0;
	func_137(3665, iVar0, -1, 1);
}

void func_350()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2573679[func_49()];
	iVar1 = Global_2573688[func_49()];
	iVar0++;
	iVar1++;
	Global_2573679[func_49()] = iVar0;
	Global_2573688[func_49()] = iVar1;
	Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_122 = iVar1;
	func_137(3663, iVar0, -1, 1);
	func_137(3664, iVar1, -1, 1);
}

void func_351()
{
	if (func_156())
	{
		Global_2449538.f_3072.f_134 = 0;
		Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_446 = Global_2449538.f_3072.f_134;
	}
}

void func_352()
{
	if (func_156())
	{
		if (Global_2449538.f_3072.f_134 < 10)
		{
			Global_2449538.f_3072.f_134++;
			Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_446 = Global_2449538.f_3072.f_134;
		}
	}
}

void func_353()
{
	if (func_156())
	{
		if (Global_2449538.f_3072.f_134 > 0)
		{
			Global_2449538.f_3072.f_134 = (Global_2449538.f_3072.f_134 - 1);
			Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_446 = Global_2449538.f_3072.f_134;
		}
	}
}

int func_354(int iParam0)
{
	return Global_1626536[iParam0 /*603*/].f_11.f_28;
}

int func_355(int iParam0)
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
			if (func_173(1) && !func_99(1))
			{
				if (func_356(func_175()))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_356(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_23, 26);
}

int func_357(int iParam0, bool bParam1)
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

int func_358(int iParam0, bool bParam1, bool bParam2)
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
			if (func_156())
			{
				return Global_262145.f_18717;
			}
			else if (bParam1)
			{
				return Global_262145.f_18718;
			}
			break;
		
		case 188:
			if (func_156())
			{
				return Global_262145.f_18801;
			}
			else if (bParam1)
			{
				return Global_262145.f_18802;
			}
			break;
		
		case 225:
			if (func_156() && !func_143())
			{
				if (func_356(unk_0x95B959F18401C09A()))
				{
					return Global_262145.f_20922;
				}
				else
				{
					return Global_262145.f_20923;
				}
			}
			else if (func_143())
			{
				return Global_262145.f_20924;
			}
			break;
		
		case 226:
			if (func_156() && !func_143())
			{
				if (func_356(unk_0x95B959F18401C09A()))
				{
					return Global_262145.f_20902;
				}
				else
				{
					return Global_262145.f_20903;
				}
			}
			else if (func_143())
			{
				return Global_262145.f_20904;
			}
			break;
		
		case 227:
			if (func_156() && !func_143())
			{
				if (func_356(unk_0x95B959F18401C09A()))
				{
					return Global_262145.f_20914;
				}
				else
				{
					return Global_262145.f_20915;
				}
			}
			else if (func_143())
			{
				return Global_262145.f_20916;
			}
			break;
		
		case 229:
			if (func_156() && !func_143())
			{
				if (func_356(unk_0x95B959F18401C09A()))
				{
					return Global_262145.f_22078;
				}
				else
				{
					return Global_262145.f_22079;
				}
			}
			else if (func_143())
			{
				return Global_262145.f_22080;
			}
			break;
		
		case 230:
			if (func_156() && !func_143())
			{
				if (func_356(unk_0x95B959F18401C09A()))
				{
					return Global_262145.f_22174;
				}
				else
				{
					return Global_262145.f_22175;
				}
			}
			else if (func_143())
			{
				return Global_262145.f_22176;
			}
			break;
		
		case 233:
			if (func_156() && !func_143())
			{
				if (func_356(unk_0x95B959F18401C09A()))
				{
					return Global_262145.f_22649;
				}
				else
				{
					return Global_262145.f_22650;
				}
			}
			else if (func_143())
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
			if (func_156() && !func_143())
			{
				if (func_356(unk_0x95B959F18401C09A()))
				{
					return Global_262145.f_23805;
				}
				else
				{
					return Global_262145.f_23806;
				}
			}
			else if (func_143())
			{
				return Global_262145.f_23807;
			}
			break;
		
		case 238:
			if (func_156() && !func_143())
			{
				if (func_356(unk_0x95B959F18401C09A()))
				{
					return Global_262145.f_23916;
				}
				else
				{
					return Global_262145.f_23917;
				}
			}
			else if (func_143())
			{
				return Global_262145.f_23918;
			}
			break;
		
		case 249:
			if (func_156() && !func_143())
			{
				if (func_356(unk_0x95B959F18401C09A()))
				{
					return Global_262145.f_23932;
				}
				else
				{
					return Global_262145.f_23933;
				}
			}
			else if (func_143())
			{
				return Global_262145.f_23934;
			}
			break;
		
		case 243:
			if (func_156() && !func_143())
			{
				if (func_356(unk_0x95B959F18401C09A()))
				{
					return Global_262145.f_26064;
				}
				else
				{
					return Global_262145.f_26065;
				}
			}
			else if (func_143())
			{
				return Global_262145.f_26064;
			}
			break;
	}
	return 0;
}

void func_359(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_360(iParam0))
	{
		if (!func_156())
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
	if (func_278(unk_0x95B959F18401C09A(), 1))
	{
		if (func_96(iParam0))
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
	else if (func_96(iParam0))
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
	iVar0 = func_92();
	if (iVar0 != func_29())
	{
		if (func_276(unk_0x95B959F18401C09A(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_360(int iParam0)
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

void func_361(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != func_29())
	{
		if (unk_0xC4DEA49C5B465481(iParam1))
		{
			if (iParam1 == unk_0x95B959F18401C09A())
			{
				iVar0 = 1;
			}
			else if (func_362(iParam1, unk_0x95B959F18401C09A()))
			{
				iVar0 = 1;
			}
		}
	}
	if (iParam0 || iVar0)
	{
		if (func_983(unk_0x95B959F18401C09A(), 1, 1))
		{
			unk_0x98F04A4FFB4AD01C(unk_0x95B959F18401C09A(), 0, 0);
			unk_0x66D901F8097E8E86(unk_0x95B959F18401C09A(), 0);
			Global_2528542.f_4889.f_379 = unk_0xEF4753434B24594D();
		}
	}
}

int func_362(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != func_29() && iParam1 != func_29())
	{
		iVar0 = func_262(iParam0);
		if (iVar0 != func_29())
		{
			return iVar0 == func_262(iParam1);
		}
	}
	return 0;
}

int func_363(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
	func_381(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	return func_364(&Var0);
}

int func_364(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2437364.f_3030)
		{
			return 0;
		}
	}
	func_380(uParam0, uParam0->f_17);
	func_377(uParam0);
	if (func_223())
	{
		func_377(uParam0);
	}
	if (func_376(uParam0->f_1))
	{
		func_369();
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
				func_369();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_367(&(Global_2437364.f_2708[iVar0 /*80*/].f_69), 2);
				Global_2437364.f_2708[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_366(uParam0->f_69, 128))
			{
				if (func_365(Global_2437364.f_2708[iVar0 /*80*/].f_1))
				{
					Global_2437364.f_2708[iVar0 /*80*/].f_2 = 5;
					func_367(&(Global_2437364.f_2708[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_365(int iParam0)
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

bool func_366(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_367(var uParam0, int iParam1)
{
	func_368(uParam0, iParam1);
}

void func_368(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_369()
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
	func_370();
	if (bVar0)
	{
		Global_71858 = 0;
	}
}

void func_370()
{
	Global_2437364.f_3032 = 0;
	Global_2437364.f_3032.f_578 = 0;
	func_374(&(Global_2437364.f_3032.f_1));
	Global_2437364.f_3032.f_1.f_1 = 0;
	func_371(&(Global_2437364.f_3032.f_1));
}

void func_371(var uParam0)
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
				if (unk_0xBB5E373390A5F824() && !func_373(0))
				{
					unk_0xACCDA78123DB57B0(800);
				}
			}
		}
	}
	func_372(0);
}

void func_372(int iParam0)
{
	Global_71850 = iParam0;
	Global_71851 = iParam0;
}

bool func_373(bool bParam0)
{
	if (!bParam0 && unk_0x1BCDA92AD0A7835B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x0E4018692D92041D(Global_71838, 0);
}

void func_374(var uParam0)
{
	func_375(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_375(var uParam0)
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

int func_376(int iParam0)
{
	if ((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105)
	{
		return 1;
	}
	return 0;
}

void func_377(var uParam0)
{
	if (func_379(uParam0->f_1))
	{
		uParam0->f_72 = func_378();
	}
}

int func_378()
{
	return 21;
}

int func_379(int iParam0)
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

void func_380(var uParam0, int iParam1)
{
	if (func_379(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_29() || !func_983(iParam1, 0, 1))
	{
		return;
	}
	if (func_365(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_244(iParam1, -2, 0, 0, 0);
		}
	}
}

void func_381(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_29();
	uParam1->f_18 = func_29();
	uParam1->f_19 = func_29();
	uParam1->f_20 = func_29();
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

int func_382(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_29();
	iVar1 = func_29();
	iVar2 = func_29();
	return func_383(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

int func_383(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
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
	func_381(uParam0, &Var0, uParam9, sParam2, sParam1);
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
	func_367(&(Var0.f_69), 4);
	return func_364(&Var0);
}

int func_384()
{
	if ((func_983(unk_0x95B959F18401C09A(), 1, 1) && !unk_0xD9C92B0885A075F8()) && !func_385())
	{
		return 1;
	}
	return 0;
}

bool func_385()
{
	return unk_0xE3903F59E2F22150() <= Global_17411.f_5878 + 100;
}

void func_386(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)
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
	
	if (func_506(iParam2))
	{
		return;
	}
	fVar10 = -1f;
	iVar11 = -1;
	iVar12 = -1;
	iVar14 = 0;
	iVar15 = 0;
	uParam3->f_36 = 0;
	if (func_504() || iParam2 == 27)
	{
		if (func_455(iParam1, iParam2, uParam3, Global_1574175, 0, func_502(), sParam7))
		{
			func_454(1);
			if ((!func_453() && !func_452()) || unk_0x0E4018692D92041D(Global_2528542.f_4579, 1))
			{
				if (func_451())
				{
					func_449();
				}
				else
				{
					unk_0x1382AC429D0EA2BB(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_448(1);
						Global_1574175 = 0;
						iVar19 = -1;
						if (Global_1574396 != 1)
						{
							func_447(iParam1, 0, 0);
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
								if (func_983(unk_0x7C1C88877E8AAA50(iVar17), 0, 1))
								{
									iVar3 = unk_0x7C1C88877E8AAA50(iVar17);
									if (!func_47(iVar3, 0))
									{
										if ((func_446(iVar3) || Global_2424047[iVar3 /*416*/].f_236 != -1) || func_445(iVar3))
										{
											iVar9 = iVar3;
											if (func_41(iVar3))
											{
												iVar1[iVar9] = iVar20;
												iVar20++;
												iVar0++;
												func_444(&iVar1, iVar3, &iVar20, &iVar0);
											}
										}
									}
								}
								iVar17++;
							}
						}
						if (!func_443(unk_0x95B959F18401C09A(), 0) && func_63(unk_0x95B959F18401C09A()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							if (func_442())
							{
								if (func_983(unk_0x7C1C88877E8AAA50(iVar17), 0, 1))
								{
									iVar3 = unk_0x7C1C88877E8AAA50(iVar17);
								}
								else
								{
									iVar3 = func_29();
								}
							}
							else
							{
								iVar3 = (uParam0[iVar17 /*42*/])->f_1;
							}
							if ((func_441(iVar3) && func_437(iVar3, iParam2)) && func_983(iVar3, 0, 1))
							{
								iVar9 = iVar3;
								iVar7 = Global_1589819[iVar9 /*818*/].f_211.f_6;
								Var6 = { func_432(iVar3) };
								if (iVar3 == unk_0x95B959F18401C09A())
								{
									uParam3->f_35 = iVar18;
								}
								StringCopy(&(uParam3->f_1), unk_0xEEF8394DB3D3DFA1(iVar3), 64);
								*(uParam4[iVar17 /*13*/]) = { func_198(iVar3) };
								iVar5 = func_426(iVar3);
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
									if (!func_442())
									{
										iVar15 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_421(&iVar8, &fVar10, (uParam0[iVar17 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_420(iParam5, 1, 0, 0), 16);
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
								iVar16 = func_419(iVar3, 0);
								if (bVar2)
								{
									if (func_278(iVar3, 1) && iVar1[iVar9] != -1)
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
								if (func_418(iParam5))
								{
									func_417(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar8, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
								}
								else
								{
									func_417(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar11, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
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
							if (func_983(iVar3, 0, 1) && !unk_0x0E4018692D92041D(iVar14, iVar3))
							{
								iVar3 = unk_0x7C1C88877E8AAA50(iVar17);
							}
							else
							{
								iVar3 = func_29();
							}
							if (func_441(iVar3))
							{
								if (func_983(unk_0x7C1C88877E8AAA50(iVar17), 0, 1))
								{
									iVar9 = iVar3;
									iVar7 = Global_1589819[iVar9 /*818*/].f_211.f_6;
									Var6 = { func_432(iVar3) };
									*(uParam4[iVar17 /*13*/]) = { func_198(iVar3) };
									iVar5 = func_426(iVar3);
									sVar4 = "";
									if (iVar5 != 0)
									{
										sVar4 = unk_0xD9A84B163D46BD9B(iVar5);
									}
									Global_1574175++;
									iVar16 = func_419(iVar3, 1);
									if (bVar2)
									{
										if (func_278(iVar3, 1))
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
									func_399(iVar3, unk_0xEEF8394DB3D3DFA1(iVar3), iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar16, iVar15);
									iVar18++;
								}
							}
							iVar17++;
						}
						if (unk_0x0E4018692D92041D(uParam3->f_33, 11))
						{
							func_396(uParam3, iParam1);
						}
						func_7(&(uParam3->f_21));
						func_395();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0x0E4018692D92041D(uParam3->f_33, 7))
						{
							func_394(uParam3, iParam1);
							func_393(iParam1, 0, 1);
							unk_0x8950ED5730F62EE8(&(uParam3->f_33), 7);
						}
						func_394(uParam3, iParam1);
						if (!unk_0x0E4018692D92041D(uParam3->f_33, 11))
						{
							unk_0x8950ED5730F62EE8(&(uParam3->f_33), 11);
						}
						if (func_389(uParam3))
						{
							Global_1574396 = 1;
						}
						func_387(uParam3);
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
			func_395();
			func_448(0);
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

void func_387(var uParam0)
{
	if (!func_5(&(uParam0->f_21)))
	{
		func_4(&(uParam0->f_21), 0, 0);
	}
	else if (func_2(&(uParam0->f_21), 250, 0))
	{
		func_7(&(uParam0->f_21));
		func_388(0);
	}
}

void func_388(bool bParam0)
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

int func_389(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0;
	iVar0 = uParam0->f_37;
	iVar3 = unk_0x7C1C88877E8AAA50(uParam0->f_37);
	if (iVar3 != func_29() && func_983(iVar3, 0, 1))
	{
		Var2 = { func_198(iVar3) };
		iVar1 = func_392(uParam0, uParam0->f_37);
		if (func_391(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x816B8CB68DC70BD1(&Var2))
					{
						if (unk_0xFE7877DB9DB46613(&Var2))
						{
							iVar4 = 1;
							func_390(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x2B1E6E274DDA8154(&Var2))
					{
						iVar4 = 1;
						func_390(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x816B8CB68DC70BD1(&Var2))
					{
						if (!unk_0xFE7877DB9DB46613(&Var2))
						{
							iVar4 = 1;
							func_390(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar4 = 1;
						func_390(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x816B8CB68DC70BD1(&Var2))
					{
						if (!unk_0x2B1E6E274DDA8154(&Var2))
						{
							iVar4 = 1;
							func_390(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x2B1E6E274DDA8154(&Var2))
					{
						iVar4 = 1;
						func_390(uParam0, iVar0, 0);
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

void func_390(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_391(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xEC566F0D860729D3(&uParam0, 13);
}

var func_392(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_393(int iParam0, bool bParam1, int iParam2)
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

void func_394(var uParam0, int iParam1)
{
	if (!unk_0x0E4018692D92041D(uParam0->f_33, 10))
	{
		unk_0xBB698266C5FDF0A7(*iParam1, "SET_HIGHLIGHT");
		unk_0x4D9DA18AB3C2A466(uParam0->f_35);
		unk_0x818901B332D5541D();
		unk_0x8950ED5730F62EE8(&(uParam0->f_33), 10);
	}
}

void func_395()
{
	if (Global_1574396 != 0)
	{
		Global_1574396 = 0;
	}
}

void func_396(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x7C1C88877E8AAA50(iVar0);
		if (iVar2 != func_29())
		{
			if (func_983(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_398(uParam0->f_38[iVar0 /*2*/], 0);
					func_397(iParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1589819[iVar0 /*818*/].f_211.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_397(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_398(int iParam0, bool bParam1)
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

void func_399(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_416() && iParam4 < func_415())
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
				func_414("");
			}
			else
			{
				unk_0x4D9DA18AB3C2A466(iParam10);
			}
			func_414(sParam1);
			unk_0x4D9DA18AB3C2A466(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_414("");
			}
			else
			{
				unk_0x4D9DA18AB3C2A466(65);
			}
			unk_0x4D9DA18AB3C2A466(-1);
			func_414("");
			if (uParam3->f_108 == 6)
			{
				func_414("");
			}
			else
			{
				func_414(&sParam5);
			}
			func_404(uParam3, iParam0);
			unk_0xE3F1DCC670198D2D(sParam9);
			unk_0xE3F1DCC670198D2D(sParam9);
			if (func_403(uParam3))
			{
				func_402("DPAD_FRIEND");
			}
			else if (func_401(uParam3))
			{
				func_402("DPAD_FRIEND");
			}
			else if (func_400(uParam3))
			{
				func_402("DPAD_CREW");
			}
			else
			{
				func_402("");
			}
			unk_0x818901B332D5541D();
		}
	}
}

bool func_400(var uParam0)
{
	return unk_0x0E4018692D92041D(uParam0->f_33, 6);
}

bool func_401(var uParam0)
{
	return unk_0x0E4018692D92041D(uParam0->f_33, 5);
}

void func_402(char* sParam0)
{
	unk_0x713FEBE56D2BD403(sParam0);
	unk_0x36F3AA9FFAAF8606();
}

int func_403(var uParam0)
{
	if (func_401(uParam0) && func_400(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_404(var uParam0, int iParam1)
{
	if (func_413(iParam1))
	{
		unk_0x4D9DA18AB3C2A466(121);
	}
	else if (func_408(iParam1))
	{
		unk_0x4D9DA18AB3C2A466(122);
	}
	else if (((unk_0x0E4018692D92041D(Global_4456448.f_27, 15) && iParam1 > -1) && iParam1 < 32) && unk_0x0E4018692D92041D(Global_2424047[iParam1 /*416*/].f_411, 0))
	{
		unk_0x4D9DA18AB3C2A466(123);
	}
	else
	{
		if (func_405())
		{
			uParam0->f_36 = 0;
		}
		unk_0x295B86DE57A0721D(uParam0->f_36);
	}
}

int func_405()
{
	if (unk_0x289064CB38B560AA())
	{
		if (func_406() || func_265())
		{
			return 1;
		}
	}
	return 0;
}

int func_406()
{
	if (unk_0x289064CB38B560AA())
	{
		return func_265();
	}
	return func_407(Global_4456448.f_138474);
}

int func_407(int iParam0)
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

int func_408(int iParam0)
{
	if ((func_983(iParam0, 0, 1) && func_409()) && func_100(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_409()
{
	if (func_120(unk_0x95B959F18401C09A()) || func_412())
	{
		if (!func_410(unk_0x95B959F18401C09A(), 236))
		{
			return 0;
		}
	}
	return 1;
}

int func_410(int iParam0, int iParam1)
{
	if (func_411(iParam0) == iParam1)
	{
		return func_117(iParam0);
	}
	return 0;
}

int func_411(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1626536[iVar0 /*603*/];
	}
	return -1;
}

int func_412()
{
	switch (func_63(unk_0x95B959F18401C09A()))
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

int func_413(int iParam0)
{
	if (func_405())
	{
		if (func_983(iParam0, 0, 1))
		{
			return func_41(iParam0);
		}
	}
	if ((func_983(iParam0, 0, 1) && func_409()) && func_46(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_414(char* sParam0)
{
	unk_0x3EFC6497702202D6(sParam0);
}

int func_415()
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

int func_416()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574177)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_417(int iParam0, int iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_416() && iParam3 < func_415())
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
					func_414("");
				}
				else
				{
					unk_0x4D9DA18AB3C2A466(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0x786AF4A44E1B5B4B(sParam16))
				{
					func_402(sParam16);
				}
				else
				{
					func_414(&(uParam2->f_1));
				}
				unk_0x4D9DA18AB3C2A466(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_414("");
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
				if (func_442())
				{
					func_414("");
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
						func_402(&(uParam2->f_104));
					}
					else
					{
						func_414("");
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
					func_414("");
				}
				if (uParam2->f_108 == 6)
				{
					func_414("");
				}
				else
				{
					func_414(&sParam4);
				}
				func_404(uParam2, iParam0);
				if (iParam12 == 1 || unk_0x786AF4A44E1B5B4B(sParam8))
				{
					func_414("");
					func_414("");
				}
				else
				{
					unk_0xE3F1DCC670198D2D(sParam8);
					unk_0xE3F1DCC670198D2D(sParam8);
				}
				if (func_403(uParam2))
				{
					func_402("DPAD_FRIEND");
				}
				else if (func_401(uParam2))
				{
					func_402("DPAD_FRIEND");
				}
				else if (func_400(uParam2))
				{
					func_402("DPAD_CREW");
				}
				else
				{
					func_402("");
				}
				unk_0x818901B332D5541D();
			}
		}
	}
}

int func_418(int iParam0)
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

int func_419(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_120(iParam0)) && !func_118(iParam0))
	{
		iVar0 = func_378();
	}
	iVar1 = func_261(iParam0);
	if (!iVar1 == -1)
	{
		return func_259(iVar1);
	}
	return iVar0;
}

char* func_420(int iParam0, bool bParam1, bool bParam2, int iParam3)
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

int func_421(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_425(iParam3))
	{
		*fParam1 = (func_422(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_418(iParam3))
	{
		*fParam1 = (func_422(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_422(int iParam0, int iParam1)
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
				return func_424(to_float(iParam1));
			}
			break;
		
		case 2:
			if (unk_0x65CD0D9BE7EAB2FD())
			{
				return to_float(iParam1);
			}
			else
			{
				return func_423(to_float(iParam1));
			}
			break;
	}
	return to_float(iParam1);
}

float func_423(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_424(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_425(int iParam0)
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

int func_426(int iParam0)
{
	int iVar0;
	
	iVar0 = func_429(iParam0);
	if (iVar0 == -1)
	{
		func_427(iParam0, 1);
		return 0;
	}
	Global_1383710[iVar0 /*5*/].f_4 = 1;
	return Global_1383710[iVar0 /*5*/].f_2;
}

void func_427(int iParam0, bool bParam1)
{
	if (!func_983(iParam0, 0, 1))
	{
		return;
	}
	if (func_429(iParam0) != -1)
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
	if (func_428(iParam0))
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

int func_428(int iParam0)
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

int func_429(int iParam0)
{
	int iVar0;
	
	if (!func_983(iParam0, 0, 1))
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
			func_430(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_430(int iParam0)
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
	func_431(&(Global_1383710[iVar2 /*5*/]));
	Global_1383871 = (Global_1383871 - 1);
}

void func_431(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_29();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0xB331FCEB94EB05C8())
	{
		uParam0->f_3 = unk_0x78DCC5D0CB43DEBA();
	}
}

struct<4> func_432(int iParam0)
{
	char cVar0[32];
	
	if (func_983(iParam0, 0, 1))
	{
		Global_2505680 = { func_198(iParam0) };
		if (unk_0xDB36A8F522CBC12D())
		{
			if (func_391(Global_2505680))
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
		if (func_436(&Global_2505680))
		{
			Global_2505610 = { func_434(iParam0) };
			func_433(&Global_2505610, &cVar0);
		}
	}
	return cVar0;
}

void func_433(var uParam0, char* sParam1)
{
	unk_0x6BD9A45C73EA0684(uParam0, 35, sParam1);
}

struct<35> func_434(int iParam0)
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_435(iParam0))
	{
		return Global_1312899[unk_0x95B959F18401C09A() /*35*/];
	}
	Var0 = { func_198(iParam0) };
	unk_0xDD530AC51A578470(&Var1, 35, &Var0);
	return Var1;
}

int func_435(int iParam0)
{
	if (iParam0 == unk_0x95B959F18401C09A())
	{
		return 1;
	}
	return 0;
}

int func_436(var uParam0)
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

int func_437(int iParam0, int iParam1)
{
	if (iParam1 == 26)
	{
		if ((func_119(iParam0) || func_440(iParam0)) || func_439(iParam0))
		{
			return 0;
		}
	}
	if (!func_438(iParam0))
	{
		return 0;
	}
	if ((!func_446(iParam0) && Global_2424047[iParam0 /*416*/].f_236 == -1) && !func_445(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_438(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_142, 22);
}

bool func_439(int iParam0)
{
	if (func_119(iParam0))
	{
		return 1;
	}
	return unk_0x0E4018692D92041D(Global_1626536[iParam0 /*603*/].f_1, 8);
}

int func_440(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0x0E4018692D92041D(Global_1626536[iParam0 /*603*/].f_1, 10) || unk_0x0E4018692D92041D(Global_1626536[iParam0 /*603*/].f_1, 9));
	}
	return 0;
}

int func_441(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	if (func_47(iParam0, 0))
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

int func_442()
{
	switch (func_63(unk_0x95B959F18401C09A()))
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
	switch (func_411(unk_0x95B959F18401C09A()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_118(unk_0x95B959F18401C09A()))
	{
		switch (func_63(unk_0x95B959F18401C09A()))
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
	if (func_410(unk_0x95B959F18401C09A(), 236))
	{
		return 1;
	}
	return 0;
}

int func_443(int iParam0, int iParam1)
{
	if (Global_1626536[iParam0 /*603*/].f_11.f_33 != -1 && func_88(Global_1626536[iParam0 /*603*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1626536[iParam0 /*603*/].f_11.f_32 != -1)
	{
		if (func_88(Global_1626536[iParam0 /*603*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

void func_444(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_983(unk_0x7C1C88877E8AAA50(iVar0), 0, 1))
		{
			iVar1 = unk_0x7C1C88877E8AAA50(iVar0);
			if (!func_47(iVar1, 0))
			{
				if ((func_446(iVar1) || Global_2424047[iVar1 /*416*/].f_236 != -1) || func_445(iVar1))
				{
					if (func_276(iVar1, iParam1, 0))
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

bool func_445(int iParam0)
{
	return Global_1589819[iParam0 /*818*/].f_196 != 0;
}

int func_446(int iParam0)
{
	if (func_983(iParam0, 0, 1))
	{
		if (func_983(unk_0x95B959F18401C09A(), 0, 1))
		{
			if (unk_0xB4B29C6A8F481EEA(iParam0, unk_0x95B959F18401C09A()) || func_63(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_447(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x11AE7F6A404414C9(*iParam0))
	{
		unk_0xBB698266C5FDF0A7(*iParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x4D9DA18AB3C2A466(iParam1);
		unk_0x4D9DA18AB3C2A466(iParam2);
		unk_0x818901B332D5541D();
	}
}

void func_448(bool bParam0)
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

void func_449()
{
	if (unk_0x0E4018692D92041D(Global_2528542.f_4579, 1))
	{
		if (func_121())
		{
			func_450();
		}
	}
}

void func_450()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2437364.f_2708[iVar0 /*80*/].f_2 != 0)
		{
			Global_2437364.f_2708[iVar0 /*80*/].f_2 = 5;
			func_367(&(Global_2437364.f_2708[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

int func_451()
{
	if (unk_0x0E4018692D92041D(Global_2528542.f_4579, 0) && func_121())
	{
		return 1;
	}
	if (unk_0x0E4018692D92041D(Global_2528542.f_4579, 1) && func_121())
	{
		return 1;
	}
	return 0;
}

int func_452()
{
	if (func_121())
	{
		if (func_365(Global_2437364.f_2708[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_453()
{
	if (func_121())
	{
		if (func_379(Global_2437364.f_2708[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_454(int iParam0)
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

int func_455(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
{
	struct<4> Var0;
	char* sVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	char* sVar6;
	
	StringCopy(&Var0, "", 16);
	bVar3 = func_501(iParam1);
	if (iParam1 == 20)
	{
		bVar2 = true;
	}
	fVar4 = func_500();
	iVar5 = -1;
	if (iParam1 == 26 || iParam1 == 27)
	{
		if (func_499())
		{
			if (func_498() > 0 && Global_1574177)
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
		if (!func_482())
		{
			func_481(iParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0x0E4018692D92041D(Global_2528542.f_4582, 26))
	{
		func_481(iParam0, uParam2, 1);
		return 0;
	}
	if (!func_5(&(uParam2->f_19)))
	{
		if (func_498() == 1)
		{
			func_480(bVar3, iParam0, 0);
			func_4(&(uParam2->f_19), 0, 0);
			func_481(iParam0, uParam2, 0);
			unk_0x8950ED5730F62EE8(&(Global_2528542.f_4583), 5);
		}
	}
	if (func_5(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0xFAC8F20FBC764F4D())
		{
			unk_0x2E4F269906BF5F41();
		}
		unk_0x581AE7724ACAD410(10);
		if (func_2(&(uParam2->f_19), 10000, 0) || (func_498() == 0 && !bParam5))
		{
			func_481(iParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar2 == 0)
			{
				func_479();
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
					func_479();
					if (iParam1 == 26 || iParam1 == 27)
					{
						unk_0x03D404FD169632CA();
					}
					unk_0x581AE7724ACAD410(18);
				}
				unk_0x5E1FA2076D53C3F5(fVar4);
				if (func_480(bVar3, iParam0, 0))
				{
					func_447(iParam0, 0, 0);
					sVar1 = func_477(iParam1, &(Global_4456448.f_138481), bParam4);
					Var0 = { func_475(iParam1) };
					if (bParam4)
					{
						func_472(iParam0, sVar1, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 26)
					{
						func_465(iParam0, func_469(uParam2), func_466(uParam2), -1);
					}
					else if (iParam1 == 27)
					{
						sVar6 = func_463(uParam2);
						if (!unk_0x786AF4A44E1B5B4B(sParam6))
						{
							sVar6 = sParam6;
						}
						func_461(iParam0, sVar6, func_462(), -1);
					}
					else if (func_405())
					{
						uParam2->f_34 = Global_1574176;
						func_472(iParam0, sVar1, &Var0, 1, -1, Global_1574176, 1);
					}
					else if (bVar2)
					{
						iVar5 = func_456(iParam1);
						uParam2->f_34 = Global_1574176;
						func_472(iParam0, sVar1, "", 0, iVar5, Global_1574176, 1);
					}
					else
					{
						iVar5 = func_456(iParam1);
						func_472(iParam0, sVar1, &Var0, 1, iVar5, -1, 1);
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

int func_456(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_460())
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
			if (func_459(unk_0x95B959F18401C09A()))
			{
				iVar0 = 20;
			}
			if (func_458(unk_0x95B959F18401C09A()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_457(unk_0x95B959F18401C09A()))
	{
		iVar0 = 2;
	}
	if (func_221())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_457(int iParam0)
{
	return Global_2424047[iParam0 /*416*/].f_115 == 4;
}

bool func_458(int iParam0)
{
	return Global_2424047[iParam0 /*416*/].f_115 == 7;
}

bool func_459(int iParam0)
{
	return Global_2424047[iParam0 /*416*/].f_115 == 2;
}

bool func_460()
{
	return Global_4456448.f_1 == 0;
}

void func_461(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x11AE7F6A404414C9(*iParam0))
	{
		unk_0xBB698266C5FDF0A7(*iParam0, "SET_TITLE");
		if (unk_0x786AF4A44E1B5B4B(sParam2))
		{
			func_402(sParam1);
		}
		else
		{
			unk_0x713FEBE56D2BD403("FM_AE_BRACKT");
			unk_0xFA6BEE2B1507FF1E(sParam1);
			unk_0xFA6BEE2B1507FF1E(sParam2);
			unk_0x36F3AA9FFAAF8606();
		}
		func_402("");
		if (iParam3 != -1)
		{
			unk_0x4D9DA18AB3C2A466(iParam3);
		}
		unk_0x818901B332D5541D();
	}
}

char* func_462()
{
	switch (func_63(unk_0x95B959F18401C09A()))
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

char* func_463(var uParam0)
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
	switch (func_63(unk_0x95B959F18401C09A()))
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
			if (func_91())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_99(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_99(1))
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
			if (func_464(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_181))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_464(int iParam0)
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

void func_465(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x11AE7F6A404414C9(*iParam0))
	{
		unk_0xBB698266C5FDF0A7(*iParam0, "SET_TITLE");
		if (unk_0x786AF4A44E1B5B4B(sParam2))
		{
			func_402(sParam1);
		}
		else if (func_411(unk_0x95B959F18401C09A()) == 133)
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
		func_402("");
		if (iParam3 != -1)
		{
			unk_0x4D9DA18AB3C2A466(iParam3);
		}
		unk_0x818901B332D5541D();
	}
}

char* func_466(var uParam0)
{
	int iVar0;
	
	iVar0 = func_411(unk_0x95B959F18401C09A());
	if (func_468())
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
			switch (func_467())
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

int func_467()
{
	if (func_411(unk_0x95B959F18401C09A()) == 133)
	{
		return Global_2528542.f_4810;
	}
	return -1;
}

bool func_468()
{
	return Global_1589692;
}

char* func_469(var uParam0)
{
	int iVar0;
	
	iVar0 = func_411(unk_0x95B959F18401C09A());
	if (func_468())
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
			if (func_471() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_471() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_467())
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
			if (func_470() == 1)
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

int func_470()
{
	return Global_2528542.f_4813;
}

int func_471()
{
	if (func_411(unk_0x95B959F18401C09A()) == 132)
	{
		return Global_2528542.f_4808;
	}
	return -1;
}

void func_472(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x11AE7F6A404414C9(*iParam0))
	{
		unk_0xBB698266C5FDF0A7(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_414(sParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x713FEBE56D2BD403(sParam1);
			unk_0xE800DC85FDF60F85(iParam5);
			unk_0x36F3AA9FFAAF8606();
		}
		else
		{
			func_402(sParam1);
		}
		if (func_499() && iParam6)
		{
			if (func_474())
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
			func_402(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x4D9DA18AB3C2A466(iParam4);
			if (func_473(unk_0x95B959F18401C09A()))
			{
				unk_0x4D9DA18AB3C2A466(166);
			}
			else if (func_223())
			{
				unk_0x4D9DA18AB3C2A466(220);
			}
		}
		unk_0x818901B332D5541D();
	}
}

int func_473(int iParam0)
{
	if (func_459(iParam0) || func_458(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_474()
{
	return Global_1574177;
}

struct<4> func_475(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_476(unk_0x95B959F18401C09A()) || func_457(unk_0x95B959F18401C09A()))
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
	if (func_405() && unk_0x289064CB38B560AA())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_39, 16);
	}
	return Var0;
}

bool func_476(int iParam0)
{
	return Global_2424047[iParam0 /*416*/].f_115 == 5;
}

char* func_477(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_405() || unk_0x786AF4A44E1B5B4B(sParam1)))
	{
		uVar0 = func_478();
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

char* func_478()
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

void func_479()
{
	Global_37339 = 1;
}

bool func_480(bool bParam0, int iParam1, bool bParam2)
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

void func_481(int iParam0, var uParam1, bool bParam2)
{
	unk_0xCE689A8E8C42ED78(&(uParam1->f_33), 7);
	Global_1574175 = 0;
	func_395();
	Global_1574174 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_5(&(uParam1->f_19)))
		{
			func_7(&(uParam1->f_19));
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

int func_482()
{
	if (func_385())
	{
		return 0;
	}
	if (func_497())
	{
		return 0;
	}
	if (!func_495())
	{
		return 0;
	}
	if (!func_493())
	{
		return 0;
	}
	if (func_492(8, -1))
	{
		return 0;
	}
	if (func_498() == 2)
	{
		return 0;
	}
	if (Global_2528542.f_4534)
	{
		return 0;
	}
	if (func_491())
	{
		return 0;
	}
	else if (!func_488(unk_0x95B959F18401C09A(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_487(1) || func_485(1)) || Global_17272.f_124) || Global_17272)
	{
		return 0;
	}
	if (unk_0xD9C92B0885A075F8())
	{
		return 0;
	}
	if (func_484() && Global_1689319 == 2)
	{
		return 0;
	}
	if (func_271(unk_0x95B959F18401C09A()) && !func_484())
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
	if (func_231(0))
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
	if (func_483(unk_0x95B959F18401C09A()))
	{
		return 0;
	}
	return 1;
}

bool func_483(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_2424047[iParam0 /*416*/].f_309.f_4, 6);
}

bool func_484()
{
	return (unk_0x0E4018692D92041D(Global_4456448.f_30, 12) && unk_0x0E4018692D92041D(Global_1689320, 0));
}

int func_485(bool bParam0)
{
	if (unk_0xCF5490505B6D51BE())
	{
		if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
		{
			if (func_486(unk_0x33CD235DF1E6A94E()))
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

int func_486(int iParam0)
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

bool func_487(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17272.f_4 && Global_17272.f_104 == 4);
	}
	return Global_17272.f_4;
}

int func_488(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_489(iParam0))
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

bool func_489(int iParam0)
{
	return func_490(iParam0);
}

bool func_490(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_13.f_1, 0);
}

bool func_491()
{
	return Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_196 != 0;
}

bool func_492(int iParam0, int iParam1)
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

int func_493()
{
	if (func_494() == 0)
	{
		return 1;
	}
	return 0;
}

int func_494()
{
	return Global_1312467.f_18;
}

int func_495()
{
	if (func_496())
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

bool func_496()
{
	return Global_1312439;
}

bool func_497()
{
	return Global_1589819[unk_0x95B959F18401C09A() /*818*/] == 5;
}

int func_498()
{
	return Global_1371947.f_68;
}

int func_499()
{
	if (Global_1574176 > 16)
	{
		return 1;
	}
	return 0;
}

float func_500()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x5972EE9BF3C1BE95()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_501(int iParam0)
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

int func_502()
{
	if (func_503(unk_0x95B959F18401C09A()))
	{
		return Global_1319080;
	}
	return 0;
}

int func_503(int iParam0)
{
	if (unk_0xB331FCEB94EB05C8())
	{
		if (func_47(iParam0, 0))
		{
			return unk_0xCCD95118AB42E155(iParam0);
		}
	}
	return 0;
}

int func_504()
{
	if (func_502())
	{
		return 1;
	}
	if (func_439(unk_0x95B959F18401C09A()))
	{
		return 0;
	}
	if (func_468())
	{
		return 1;
	}
	if (func_120(unk_0x95B959F18401C09A()))
	{
		switch (func_411(unk_0x95B959F18401C09A()))
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
				if (!func_505(unk_0x95B959F18401C09A()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_505(unk_0x95B959F18401C09A()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_505(unk_0x95B959F18401C09A()))
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

bool func_505(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_1626536[iParam0 /*603*/].f_1, 4);
}

int func_506(int iParam0)
{
	if (iParam0 == 27)
	{
		if ((func_120(unk_0x95B959F18401C09A()) && !func_118(unk_0x95B959F18401C09A())) && !func_410(unk_0x95B959F18401C09A(), 236))
		{
			return 1;
		}
	}
	if (iParam0 == 26)
	{
		if (func_64(unk_0x95B959F18401C09A(), 0) && func_118(unk_0x95B959F18401C09A()))
		{
			return 1;
		}
		if (func_113(unk_0x95B959F18401C09A()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

void func_507()
{
	if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		func_527();
		unk_0x3FD9339AA95E323F(0, 140, 1);
		unk_0x3FD9339AA95E323F(0, 141, 1);
		unk_0x3FD9339AA95E323F(0, 142, 1);
		unk_0x3FD9339AA95E323F(0, 143, 1);
		unk_0x3FD9339AA95E323F(0, 24, 1);
		unk_0x3FD9339AA95E323F(0, 24, 1);
		unk_0x3FD9339AA95E323F(0, 345, 1);
		unk_0x3FD9339AA95E323F(0, 346, 1);
		unk_0x3FD9339AA95E323F(0, 347, 1);
	}
}

bool func_508()
{
	return func_27() >= 2;
}

void func_509()
{
	func_53(3000, 3000);
}

void func_510()
{
	int iVar0;
	
	if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		iVar0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
		if (((((unk_0x6893A1C97A426D74(iVar0) || unk_0x541D5C57194E73C4(iVar0) == joaat("hydra")) || unk_0x541D5C57194E73C4(iVar0) == joaat("savage")) || unk_0x541D5C57194E73C4(iVar0) == joaat("buzzard")) || unk_0x541D5C57194E73C4(iVar0) == joaat("insurgent")) || unk_0x541D5C57194E73C4(iVar0) == joaat("valkyrie"))
		{
			unk_0x3FD9339AA95E323F(0, 68, 1);
			unk_0x3FD9339AA95E323F(0, 69, 1);
			unk_0x3FD9339AA95E323F(0, 70, 1);
		}
	}
}

void func_511()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_13())
	{
		if (!unk_0xE38E3CF1625A4145(iLocal_149[iVar0]))
		{
			if (unk_0x4F94F07DAD382CDA(Local_175.f_19[iVar0]))
			{
				iLocal_149[iVar0] = unk_0x8848A15CBDADDC60(unk_0xE4B835FDC8B9B086(Local_175.f_19[iVar0]));
				unk_0xA20C1DE21F2F071C(iLocal_149[iVar0], 351);
				unk_0xB9E84A421C105943(iLocal_149[iVar0], 2);
				unk_0x1C95CD840303FC37(iLocal_149[iVar0], "GB_AMMOPICKBLIP");
			}
		}
		iVar0++;
	}
}

void func_512()
{
	unk_0x8950ED5730F62EE8(&(Global_2528542.f_4888), 1);
}

void func_513(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 == -1)
	{
		if (!func_118(unk_0x95B959F18401C09A()))
		{
			return;
		}
	}
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		func_519(iParam2);
		return;
	}
	iVar1 = func_63(unk_0x95B959F18401C09A());
	if (iParam3 != -1)
	{
		iVar1 = iParam3;
	}
	if (unk_0xCE3CFF625BEBAA04(func_518(iVar1), "IE_PRE_COUNTDOWN_STOP"))
	{
		iVar0 = 35000;
	}
	else
	{
		iVar0 = 40000;
	}
	if (iParam2->f_1 > -1)
	{
		iVar0 = iParam2->f_1;
	}
	if (!unk_0x0E4018692D92041D(*iParam2, 0))
	{
		if (iParam0 <= iVar0)
		{
			if (unk_0x65BA35D6D61F1574(func_518(iVar1)))
			{
				unk_0x8950ED5730F62EE8(iParam2, 0);
				unk_0x8950ED5730F62EE8(iParam2, 1);
			}
		}
	}
	if (unk_0x0E4018692D92041D(*iParam2, 1))
	{
		if (iParam0 <= 30000)
		{
			if (!unk_0x0E4018692D92041D(*iParam2, 2))
			{
				if (unk_0x7E2EAC500C9B54E3(func_517(iVar1)))
				{
					unk_0xBDD4EE948C7B9BB5("AllowScoreAndRadio", 1);
					unk_0x1FEA416E00837AFC(0);
					unk_0x8950ED5730F62EE8(iParam2, 2);
				}
			}
			if (!unk_0x0E4018692D92041D(*iParam2, 3))
			{
				if (unk_0x65BA35D6D61F1574(func_516(iVar1)))
				{
					unk_0x8950ED5730F62EE8(iParam2, 3);
				}
			}
			if (unk_0x0E4018692D92041D(*iParam2, 3))
			{
				if (iParam0 <= 27000)
				{
					if (!unk_0x0E4018692D92041D(*iParam2, 4))
					{
						unk_0x1FEA416E00837AFC(1);
						unk_0xBDD4EE948C7B9BB5("AllowScoreAndRadio", 0);
						unk_0x8950ED5730F62EE8(iParam2, 4);
					}
					if (iParam0 <= 5000 && func_515(iVar1))
					{
						if (!unk_0x0E4018692D92041D(*iParam2, 8))
						{
							unk_0x0F8EAEEC97DDBCB3(-1, "5s", "MP_MISSION_COUNTDOWN_SOUNDSET", false);
							unk_0x8950ED5730F62EE8(iParam2, 8);
						}
					}
					if (iParam0 <= 500)
					{
						if (unk_0x65BA35D6D61F1574(func_514(iVar1)))
						{
							unk_0x33854B8151B6D8EC(func_517(iVar1));
							unk_0xCE689A8E8C42ED78(iParam2, 1);
						}
					}
				}
			}
		}
	}
}

char* func_514(int iParam0)
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
		case 236:
		case 243:
			return "IE_FADE_IN_RADIO";
		
		default:
	}
	return "FM_COUNTDOWN_30S_FIRA";
}

int func_515(int iParam0)
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

char* func_516(int iParam0)
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
		case 236:
		case 243:
			return "IE_COUNTDOWN_30S";
		
		default:
	}
	return "FM_COUNTDOWN_30S";
}

char* func_517(int iParam0)
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
		case 236:
		case 243:
			return "IE_COUNTDOWN_30S_KILL";
		
		default:
	}
	return "FM_COUNTDOWN_30S_KILL";
}

char* func_518(int iParam0)
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
		case 236:
		case 243:
			return "IE_PRE_COUNTDOWN_STOP";
		
		default:
	}
	return "FM_PRE_COUNTDOWN_30S";
}

void func_519(int iParam0)
{
	int iVar0;
	
	iVar0 = func_63(unk_0x95B959F18401C09A());
	if (unk_0x0E4018692D92041D(*iParam0, 1))
	{
		if (!unk_0x0E4018692D92041D(*iParam0, 5))
		{
			if (unk_0x0E4018692D92041D(*iParam0, 2))
			{
				if (!unk_0x0E4018692D92041D(*iParam0, 4))
				{
					unk_0x1FEA416E00837AFC(1);
					unk_0xBDD4EE948C7B9BB5("AllowScoreAndRadio", 0);
				}
			}
			if (!unk_0x0E4018692D92041D(*iParam0, 6))
			{
				if (unk_0x65BA35D6D61F1574(func_517(iVar0)))
				{
					unk_0x8950ED5730F62EE8(iParam0, 6);
				}
			}
			if (unk_0x0E4018692D92041D(*iParam0, 6))
			{
				if (!unk_0x0E4018692D92041D(*iParam0, 7))
				{
					if (unk_0x65BA35D6D61F1574(func_514(iVar0)))
					{
						unk_0x8950ED5730F62EE8(iParam0, 7);
					}
				}
				if (unk_0x0E4018692D92041D(*iParam0, 7))
				{
					unk_0x8950ED5730F62EE8(iParam0, 5);
				}
			}
		}
	}
}

void func_520(int iParam0)
{
	unk_0x83A1D480DB0B52CC(iParam0);
	unk_0xB4F447A5639E2006("HUD_MINI_GAME_SOUNDSET");
}

void func_521()
{
	int iVar0;
	
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		if (!func_44(unk_0xBF4289280FD7809A(), 8))
		{
			if (func_524())
			{
				func_84(8);
				if (func_5(&uLocal_172))
				{
					func_7(&uLocal_172);
				}
			}
		}
		else if (!func_524())
		{
			func_82(8);
		}
		if (iLocal_143 >= 0)
		{
			if (func_524())
			{
				if (!unk_0x66DE54BD13B1BD88(iLocal_143))
				{
					unk_0xCBE6AF58552C63B2(iLocal_143);
				}
			}
		}
		if (func_44(unk_0xBF4289280FD7809A(), 1))
		{
			if (Local_176[iLocal_139 /*6*/].f_5 == 3)
			{
				if (Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_222 == 99)
				{
					if (!func_44(unk_0xBF4289280FD7809A(), 8))
					{
						if (!func_5(&uLocal_172))
						{
							if (func_522())
							{
								unk_0x0F8EAEEC97DDBCB3(iLocal_143, "Out_of_Bounds_Explode", "MP_MISSION_COUNTDOWN_SOUNDSET", false);
							}
							else
							{
								unk_0x0F8EAEEC97DDBCB3(iLocal_143, "Out_of_Bounds", "MP_MISSION_COUNTDOWN_SOUNDSET", false);
							}
							func_4(&uLocal_172, 0, 0);
						}
						if (func_5(&uLocal_172))
						{
							if (!func_2(&uLocal_172, 10000, 0))
							{
							}
							else if (unk_0x5C415D10D5CBF689(unk_0x33CD235DF1E6A94E()))
							{
								iVar0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
								unk_0xF5E08ABEC1D02B0C(iVar0, 1, 0, -1);
								Local_176[unk_0x72B85B341ADBE9DE() /*6*/].f_4++;
							}
							else
							{
								unk_0x7FC2040EB34E0E31(unk_0x33CD235DF1E6A94E(), 0, 0);
								Local_176[unk_0x72B85B341ADBE9DE() /*6*/].f_4++;
							}
						}
					}
					if (!func_522())
					{
						func_527();
						unk_0x3FD9339AA95E323F(0, 140, 1);
						unk_0x3FD9339AA95E323F(0, 141, 1);
						unk_0x3FD9339AA95E323F(0, 142, 1);
						unk_0x3FD9339AA95E323F(0, 143, 1);
						unk_0x3FD9339AA95E323F(0, 24, 1);
						unk_0x3FD9339AA95E323F(0, 24, 1);
					}
				}
				else if (func_5(&uLocal_172))
				{
					func_7(&uLocal_172);
				}
			}
		}
	}
}

int func_522()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
		{
			iVar1 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
			iVar0 = unk_0x541D5C57194E73C4(iVar1);
			if (func_523(iVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_523(int iParam0)
{
	if (unk_0x9E374B5F44A76AE2(iParam0) && !unk_0xC3622EC0E0215A79(iParam0))
	{
		return 1;
	}
	if ((((iParam0 == joaat("chimera") || iParam0 == joaat("blazer")) || iParam0 == joaat("blazer2")) || iParam0 == joaat("blazer3")) || iParam0 == joaat("blazer4"))
	{
		return 1;
	}
	return 0;
}

int func_524()
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	func_525(&vVar0, &vVar1, &fVar2);
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), vVar0, vVar1, fVar2, 0, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_525(var uParam0, var uParam1, var uParam2)
{
	switch (Local_175.f_31)
	{
		case 0:
			*uParam0 = { 1056.1f, 3042.89f, 30.78792f };
			*uParam1 = { 1727.083f, 3227.135f, 71.17491f };
			*uParam2 = 100f;
			break;
		
		case 1:
			*uParam0 = { -1689.147f, -2829.733f, 13.9444f };
			*uParam1 = { -989.6f, -3256.4f, 10.9444f };
			*uParam2 = 107f;
			break;
		
		case 2:
			*uParam0 = { 1914.747f, 4705.012f, 35.1674f };
			*uParam1 = { 2166.719f, 4826.836f, 45.523f };
			*uParam2 = 50f;
			break;
	}
}

void func_526(bool bParam0)
{
	unk_0x3FD9339AA95E323F(0, 71, 1);
	unk_0x3FD9339AA95E323F(0, 72, 1);
	unk_0x3FD9339AA95E323F(0, 76, 1);
	unk_0x3FD9339AA95E323F(0, 59, 1);
	unk_0x3FD9339AA95E323F(0, 60, 1);
	if (bParam0)
	{
		unk_0x3FD9339AA95E323F(0, 75, 1);
	}
	unk_0x3FD9339AA95E323F(0, 80, 1);
	unk_0x3FD9339AA95E323F(0, 69, 1);
	unk_0x3FD9339AA95E323F(0, 70, 1);
	unk_0x3FD9339AA95E323F(0, 68, 1);
	unk_0x3FD9339AA95E323F(0, 74, 1);
	unk_0x3FD9339AA95E323F(0, 86, 1);
	unk_0x3FD9339AA95E323F(0, 81, 1);
	unk_0x3FD9339AA95E323F(0, 82, 1);
	unk_0x3FD9339AA95E323F(0, 114, 1);
	unk_0x3FD9339AA95E323F(0, 107, 1);
	unk_0x3FD9339AA95E323F(0, 110, 1);
	unk_0x3FD9339AA95E323F(0, 89, 1);
	unk_0x3FD9339AA95E323F(0, 89, 1);
	unk_0x3FD9339AA95E323F(0, 87, 1);
	unk_0x3FD9339AA95E323F(0, 88, 1);
	unk_0x3FD9339AA95E323F(0, 113, 1);
	unk_0x3FD9339AA95E323F(0, 115, 1);
	unk_0x3FD9339AA95E323F(0, 116, 1);
	unk_0x3FD9339AA95E323F(0, 117, 1);
	unk_0x3FD9339AA95E323F(0, 118, 1);
	unk_0x3FD9339AA95E323F(0, 119, 1);
}

void func_527()
{
	unk_0x3FD9339AA95E323F(0, 69, 1);
	unk_0x3FD9339AA95E323F(0, 70, 1);
	unk_0x3FD9339AA95E323F(0, 68, 1);
	unk_0x3FD9339AA95E323F(0, 114, 1);
	unk_0x3FD9339AA95E323F(0, 115, 1);
	unk_0x3FD9339AA95E323F(0, 116, 1);
	unk_0x3FD9339AA95E323F(0, 91, 1);
	unk_0x3FD9339AA95E323F(0, 92, 1);
	unk_0x3FD9339AA95E323F(0, 99, 1);
	unk_0x3FD9339AA95E323F(0, 100, 1);
	unk_0x3FD9339AA95E323F(0, 24, 1);
	unk_0x3FD9339AA95E323F(0, 257, 1);
	unk_0x3FD9339AA95E323F(0, 37, 1);
}

void func_528()
{
	if (!func_534())
	{
		return;
	}
	if (!unk_0x36163153849DFDA1(unk_0xD178EF744F20B712()) == Global_1312585.f_9)
	{
		return;
	}
	func_529();
}

void func_529()
{
	func_531();
	func_530(0);
}

void func_530(bool bParam0)
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

void func_531()
{
	if (!func_533())
	{
	}
	if (func_534())
	{
		unk_0xA6DAC1F822246DE2(&(Global_1312585.f_12));
		func_532();
		unk_0xFFC12DB0DD7F299E();
	}
}

void func_532()
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

int func_533()
{
	if (!func_534())
	{
		return 0;
	}
	unk_0x1B3E16C485B8DD94(&(Global_1312585.f_12));
	func_532();
	return unk_0xC8F93D36F11F7BE8();
}

int func_534()
{
	if (Global_1312585 == 20)
	{
		return 0;
	}
	return 1;
}

void func_535(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_34(unk_0x95B959F18401C09A());
	if (bParam0)
	{
		iLocal_151 = unk_0xC408CC95C7202D67(unk_0x33CD235DF1E6A94E());
		unk_0x0648A75D3F60E864(unk_0x33CD235DF1E6A94E(), uLocal_150[iVar0]);
		func_80(0);
		func_538();
		func_536();
	}
}

void func_536()
{
	int iVar0;
	
	iVar0 = func_34(unk_0x95B959F18401C09A());
	func_67();
	switch (Local_175.f_31)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					func_537(1708.082f, 3257.124f, 40.0367f, 103.4795f);
					func_537(1708.174f, 3249.501f, 40.0217f, 105.6852f);
					func_537(1709.982f, 3241.591f, 39.9943f, 111.8098f);
					func_537(1713.491f, 3233.364f, 40.1406f, 102.9456f);
					func_537(1701.75f, 3218.817f, 40.4952f, 101.568f);
					func_537(1699.146f, 3212.31f, 41.0702f, 89.9389f);
					func_537(1684.962f, 3214.27f, 41.6779f, 93.4364f);
					func_537(1677.763f, 3224.455f, 39.5792f, 95.5699f);
					func_537(1674.756f, 3233.18f, 39.6863f, 100.0559f);
					func_537(1672.174f, 3242.395f, 39.6958f, 97.4521f);
					break;
				
				case 1:
					func_537(1056.888f, 3088.653f, 40.3451f, 278.7011f);
					func_537(1060.045f, 3081.229f, 40.2589f, 278.8035f);
					func_537(1062.256f, 3073.965f, 40.2523f, 286.0508f);
					func_537(1064.773f, 3066.959f, 40.2525f, 287.8311f);
					func_537(1066.519f, 3057.584f, 40.2967f, 275.5681f);
					func_537(1069.415f, 3042.697f, 40.3412f, 291.182f);
					func_537(1070.516f, 3033.868f, 40.3801f, 289.8516f);
					func_537(1075.104f, 3023.745f, 40.3225f, 276.9676f);
					func_537(1076.357f, 3015.861f, 40.3525f, 288.1565f);
					func_537(1075.891f, 3067.573f, 39.8683f, 291.6247f);
					break;
			}
			break;
		
		case 1:
			switch (iVar0)
			{
				case 0:
					func_537(-1024.927f, -3260.799f, 12.9444f, 80.47f);
					func_537(-1022.464f, -3257.815f, 12.9444f, 80.47f);
					func_537(-1027.673f, -3254.468f, 12.9444f, 80.47f);
					func_537(-1022.058f, -3255.974f, 12.9444f, 80.47f);
					func_537(-1026.681f, -3253.933f, 12.9444f, 80.47f);
					func_537(-1028.014f, -3248.853f, 12.9444f, 80.47f);
					func_537(-1023.804f, -3248.954f, 12.9444f, 80.47f);
					func_537(-1026.189f, -3244.342f, 12.9444f, 80.47f);
					func_537(-1021.859f, -3244.705f, 12.9444f, 80.47f);
					break;
				
				case 1:
					func_537(-1650.909f, -2860.519f, 12.9444f, 250.7f);
					func_537(-1648.204f, -2866.492f, 12.9444f, 250.7f);
					func_537(-1641.552f, -2865.687f, 12.9452f, 250.7f);
					func_537(-1634.865f, -2869.221f, 12.948f, 250.7f);
					func_537(-1634.6f, -2874.042f, 12.9556f, 250.7f);
					func_537(-1629.217f, -2873.462f, 12.9513f, 250.7f);
					func_537(-1626.581f, -2878.242f, 12.9573f, 250.7f);
					func_537(-1621.161f, -2877.972f, 12.951f, 250.7f);
					break;
			}
			break;
		
		case 2:
			switch (iVar0)
			{
				case 0:
					func_537(2128.587f, 4814.231f, 40.1959f, 103.4795f);
					func_537(2131.345f, 4808.89f, 40.1959f, 103.4795f);
					func_537(2133.655f, 4803.1f, 40.1576f, 103.4795f);
					func_537(2127.704f, 4799.296f, 40.1545f, 103.4795f);
					func_537(2123.396f, 4801.777f, 40.0564f, 103.4795f);
					func_537(2119.169f, 4806.328f, 40.1959f, 103.4795f);
					func_537(2114.736f, 4804.185f, 40.1931f, 103.4795f);
					func_537(2113.656f, 4800.263f, 40.1573f, 103.4795f);
					func_537(2115.452f, 4795.467f, 40.1041f, 103.4795f);
					func_537(2110.035f, 4793.893f, 39.8382f, 103.4795f);
					break;
				
				case 1:
					func_537(1927.808f, 4712.542f, 40.1779f, 278.7011f);
					func_537(1928.894f, 4718.197f, 40.1608f, 278.7011f);
					func_537(1934.309f, 4718.631f, 40.098f, 278.7011f);
					func_537(1941.779f, 4714.215f, 40.0632f, 278.7011f);
					func_537(1945.644f, 4715.785f, 40.0656f, 278.7011f);
					func_537(1947.567f, 4720.629f, 40.0604f, 278.7011f);
					func_537(1947.436f, 4726.579f, 40.0851f, 278.7011f);
					func_537(1951.564f, 4730.475f, 40.1026f, 278.7011f);
					func_537(1955.027f, 4729.683f, 40.0806f, 278.7011f);
					func_537(1958.042f, 4726.624f, 40.0604f, 278.7011f);
					func_537(1963.565f, 4722.866f, 40.0783f, 278.7011f);
					break;
			}
			break;
	}
}

void func_537(vector3 vParam0, float fParam1)
{
	if (Global_2405071.f_1742 < 101)
	{
		if (vmag(vParam0) <= 0.01f)
		{
			return;
		}
		Global_2405071.f_1743[Global_2405071.f_1742 /*4*/] = { vParam0 };
		Global_2405071.f_1743[Global_2405071.f_1742 /*4*/].f_3 = fParam1;
		Global_2405071.f_1742++;
	}
}

void func_538()
{
	int iVar0;
	
	iVar0 = func_34(unk_0x95B959F18401C09A());
	func_54(1, 1, 0, 1060320051, 1f, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 1, 1, 0);
	func_541(1, joaat("hexer"), 0, 0, 0, 0, -1, 1, 0, 0, 0);
	switch (Local_175.f_31)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					func_539(1708.082f, 3257.124f, 40.0367f, 103.4795f, 1065353216);
					func_539(1708.174f, 3249.501f, 40.0217f, 105.6852f, 1065353216);
					func_539(1709.982f, 3241.591f, 39.9943f, 111.8098f, 1065353216);
					func_539(1713.491f, 3233.364f, 40.1406f, 102.9456f, 1065353216);
					func_539(1701.75f, 3218.817f, 40.4952f, 101.568f, 1065353216);
					func_539(1699.146f, 3212.31f, 41.0702f, 89.9389f, 1065353216);
					func_539(1684.962f, 3214.27f, 41.6779f, 93.4364f, 1065353216);
					func_539(1677.763f, 3224.455f, 39.5792f, 95.5699f, 1065353216);
					func_539(1674.756f, 3233.18f, 39.6863f, 100.0559f, 1065353216);
					func_539(1672.174f, 3242.395f, 39.6958f, 97.4521f, 1065353216);
					break;
				
				case 1:
					func_539(1056.888f, 3088.653f, 40.3451f, 278.7011f, 1065353216);
					func_539(1060.045f, 3081.229f, 40.2589f, 278.8035f, 1065353216);
					func_539(1062.256f, 3073.965f, 40.2523f, 286.0508f, 1065353216);
					func_539(1064.773f, 3066.959f, 40.2525f, 287.8311f, 1065353216);
					func_539(1066.519f, 3057.584f, 40.2967f, 275.5681f, 1065353216);
					func_539(1069.415f, 3042.697f, 40.3412f, 291.182f, 1065353216);
					func_539(1070.516f, 3033.868f, 40.3801f, 289.8516f, 1065353216);
					func_539(1075.104f, 3023.745f, 40.3225f, 276.9676f, 1065353216);
					func_539(1076.357f, 3015.861f, 40.3525f, 288.1565f, 1065353216);
					func_539(1075.891f, 3067.573f, 39.8683f, 291.6247f, 1065353216);
					break;
			}
			break;
		
		case 1:
			switch (iVar0)
			{
				case 0:
					func_539(-1024.927f, -3260.799f, 12.9444f, 80.47f, 1065353216);
					func_539(-1022.464f, -3257.815f, 12.9444f, 80.47f, 1065353216);
					func_539(-1027.673f, -3254.468f, 12.9444f, 80.47f, 1065353216);
					func_539(-1022.058f, -3255.974f, 12.9444f, 80.47f, 1065353216);
					func_539(-1026.681f, -3253.933f, 12.9444f, 80.47f, 1065353216);
					func_539(-1028.014f, -3248.853f, 12.9444f, 80.47f, 1065353216);
					func_539(-1023.804f, -3248.954f, 12.9444f, 80.47f, 1065353216);
					func_539(-1026.189f, -3244.342f, 12.9444f, 80.47f, 1065353216);
					func_539(-1021.859f, -3244.705f, 12.9444f, 80.47f, 1065353216);
					break;
				
				case 1:
					func_539(-1650.909f, -2860.519f, 12.9444f, 250.7f, 1065353216);
					func_539(-1648.204f, -2866.492f, 12.9444f, 250.7f, 1065353216);
					func_539(-1641.552f, -2865.687f, 12.9452f, 250.7f, 1065353216);
					func_539(-1634.865f, -2869.221f, 12.948f, 250.7f, 1065353216);
					func_539(-1634.6f, -2874.042f, 12.9556f, 250.7f, 1065353216);
					func_539(-1629.217f, -2873.462f, 12.9513f, 250.7f, 1065353216);
					func_539(-1626.581f, -2878.242f, 12.9573f, 250.7f, 1065353216);
					func_539(-1621.161f, -2877.972f, 12.951f, 250.7f, 1065353216);
					break;
			}
			break;
		
		case 2:
			switch (iVar0)
			{
				case 0:
					func_539(2128.587f, 4814.231f, 40.1959f, 103.4795f, 1065353216);
					func_539(2131.345f, 4808.89f, 40.1959f, 103.4795f, 1065353216);
					func_539(2133.655f, 4803.1f, 40.1576f, 103.4795f, 1065353216);
					func_539(2127.704f, 4799.296f, 40.1545f, 103.4795f, 1065353216);
					func_539(2123.396f, 4801.777f, 40.0564f, 103.4795f, 1065353216);
					func_539(2119.169f, 4806.328f, 40.1959f, 103.4795f, 1065353216);
					func_539(2114.736f, 4804.185f, 40.1931f, 103.4795f, 1065353216);
					func_539(2113.656f, 4800.263f, 40.1573f, 103.4795f, 1065353216);
					func_539(2115.452f, 4795.467f, 40.1041f, 103.4795f, 1065353216);
					func_539(2110.035f, 4793.893f, 39.8382f, 103.4795f, 1065353216);
					break;
				
				case 1:
					func_539(1927.808f, 4712.542f, 40.1779f, 278.7011f, 1065353216);
					func_539(1928.894f, 4718.197f, 40.1608f, 278.7011f, 1065353216);
					func_539(1934.309f, 4718.631f, 40.098f, 278.7011f, 1065353216);
					func_539(1941.779f, 4714.215f, 40.0632f, 278.7011f, 1065353216);
					func_539(1945.644f, 4715.785f, 40.0656f, 278.7011f, 1065353216);
					func_539(1947.567f, 4720.629f, 40.0604f, 278.7011f, 1065353216);
					func_539(1947.436f, 4726.579f, 40.0851f, 278.7011f, 1065353216);
					func_539(1951.564f, 4730.475f, 40.1026f, 278.7011f, 1065353216);
					func_539(1955.027f, 4729.683f, 40.0806f, 278.7011f, 1065353216);
					func_539(1958.042f, 4726.624f, 40.0604f, 278.7011f, 1065353216);
					func_539(1963.565f, 4722.866f, 40.0783f, 278.7011f, 1065353216);
					break;
			}
			break;
	}
}

void func_539(vector3 vParam0, float fParam1, int iParam2)
{
	func_540(vParam0, fParam1, iParam2);
}

void func_540(vector3 vParam0, var uParam1, var uParam2)
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

void func_541(bool bParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	int iVar0;
	bool bVar1;
	
	if (!iParam1 == 0 && !unk_0xF237530C2DEF2576(iParam1))
	{
		iParam1 = joaat("tailgater");
	}
	Global_2405071.f_45.f_65 = bParam0;
	Global_2405071.f_45.f_67 = iParam1;
	Global_2405071.f_45.f_68 = bParam2;
	Global_2405071.f_45.f_173 = iParam3;
	Global_2405071.f_45.f_66 = iParam4;
	Global_2405071.f_45.f_175 = bParam5;
	Global_2405071.f_45.f_176 = bParam7;
	Global_2405071.f_45.f_180 = iParam6;
	Global_2405071.f_45.f_177 = iParam8;
	Global_2405071.f_45.f_178 = iParam9;
	Global_2405071.f_45.f_179 = bParam10;
	if (!bParam0)
	{
		func_544();
	}
	if (bParam2)
	{
		iVar0 = func_543();
		if (unk_0x765F6FEEFF39224F(iVar0))
		{
			if (!unk_0x5A04E3BD0B5E7E49(iVar0))
			{
				if (unk_0xFB2062B880AF8075(iVar0))
				{
					unk_0x0D21E1FDE062ED99(iVar0, false, 1);
					bVar1 = true;
				}
			}
			if (!unk_0xD62C4419A41F106A(iVar0, 0))
			{
				if (unk_0x9E08E12414BD4476(iVar0, 1))
				{
					if (!unk_0x0A81FE3D92AE2AC9(iVar0))
					{
						unk_0x254D3936DA813A55(unk_0x0C9AA119B878DDB0(iVar0));
					}
				}
			}
			if (unk_0x0A81FE3D92AE2AC9(iVar0))
			{
				if (bVar1)
				{
					unk_0x65F544B458249682(&iVar0);
				}
				if (bParam5)
				{
					if (!unk_0xD62C4419A41F106A(iVar0, 0))
					{
						unk_0xA155CCFA52A9A0C4(iVar0, true);
					}
				}
				if (bParam7)
				{
					if (!unk_0xD62C4419A41F106A(iVar0, 0))
					{
						unk_0x4459178BAF2918E1(iVar0, false);
					}
				}
				if (iParam6 > -1)
				{
					unk_0x65EA11CF317FE4FA(iVar0, iParam6, iParam6);
					unk_0x4A7AB87632044178(iVar0, iParam6, iParam6);
				}
				if (bParam10)
				{
					func_542(iVar0);
				}
			}
		}
	}
}

void func_542(int iParam0)
{
	if (unk_0x765F6FEEFF39224F(iParam0) && !unk_0xD62C4419A41F106A(iParam0, 0))
	{
		if (unk_0x0A81FE3D92AE2AC9(iParam0))
		{
			if (Global_1681488 > -1)
			{
				if (unk_0x854E8B95CE1C5D29("GBMissionFire", 3))
				{
					if (!unk_0xA0EDFFB6CF5B314A(iParam0, "GBMissionFire"))
					{
						unk_0x2EBF31F210B945F6(iParam0, "GBMissionFire", Global_1681488);
					}
				}
			}
		}
	}
}

var func_543()
{
	return Global_2405071.f_2656;
}

void func_544()
{
	struct<102> Var0;
	
	Var0.f_9 = 49;
	Var0.f_59 = 2;
	Var0.f_78 = -1;
	Var0.f_79 = -1;
	Var0.f_96 = -1;
	Var0.f_97 = 1;
	Var0.f_99 = 132;
	Var0.f_100 = -1;
	Global_2405071.f_45.f_69 = { Var0 };
	Global_2405071.f_45.f_171 = 0;
}

void func_545()
{
	if (!func_44(unk_0xBF4289280FD7809A(), 1))
	{
		return;
	}
	if (!func_734(7))
	{
		func_558(&iLocal_115);
		func_710(7);
		unk_0x9FDF63945C690003(func_557(func_34(unk_0x95B959F18401C09A())), 50f, 1);
	}
	if (!func_44(unk_0xBF4289280FD7809A(), 7))
	{
		if (func_556(&iLocal_115))
		{
			if (func_17(10))
			{
				if (func_546(&iLocal_115, 1, 0, 1))
				{
					func_84(7);
				}
			}
		}
	}
}

int func_546(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	if (func_556(iParam0))
	{
		if (!func_555(&(iParam0->f_3)))
		{
			func_553(&(iParam0->f_3));
		}
		unk_0x5C58D0ADA22491FA(4);
		if (unk_0x11AE7F6A404414C9(*iParam0))
		{
			unk_0xFF524AE40FB6301A(*iParam0, 255, 255, 255, 100, 0);
		}
		iVar0 = floor(func_550(&(iParam0->f_3)));
		iVar1 = unk_0xEE14D9A9F531ADDC((iVar0 - 3));
		bVar2 = false;
		if (func_366(iParam0->f_1, 4))
		{
			if (iParam0->f_2 >= 5)
			{
				if (!func_366(iParam0->f_1, 16))
				{
					unk_0x0F8EAEEC97DDBCB3(-1, "GO", "HUD_MINI_GAME_SOUNDSET", false);
					func_367(&(iParam0->f_1), 16);
					unk_0x151D1B83673FCE66();
				}
			}
			else
			{
				iParam0->f_2++;
			}
		}
		if (!func_366(iParam0->f_1, 8))
		{
			if (iVar1 == 3 && !func_366(iParam0->f_1, 1))
			{
				func_367(&(iParam0->f_1), 1);
				unk_0x0F8EAEEC97DDBCB3(-1, "3_2_1", "HUD_MINI_GAME_SOUNDSET", false);
				func_549(iParam0, iVar1);
			}
			else if (iVar1 == 2 && !func_366(iParam0->f_1, 2))
			{
				func_367(&(iParam0->f_1), 2);
				unk_0x0F8EAEEC97DDBCB3(-1, "3_2_1", "HUD_MINI_GAME_SOUNDSET", false);
				func_549(iParam0, iVar1);
			}
			else if (iVar1 == 1 && !func_366(iParam0->f_1, 4))
			{
				func_367(&(iParam0->f_1), 4);
				unk_0x0F8EAEEC97DDBCB3(-1, "3_2_1", "HUD_MINI_GAME_SOUNDSET", false);
				func_549(iParam0, iVar1);
			}
			else if (iVar1 == 0 && !func_366(iParam0->f_1, 8))
			{
				func_367(&(iParam0->f_1), 8);
				unk_0x65BA35D6D61F1574("BIKER_JOUST_FIGHT");
				unk_0x1256E5EA03020804(18, &iVar3, &iVar4, &iVar5, &uVar6);
				unk_0xBB698266C5FDF0A7(*iParam0, "SET_MESSAGE");
				func_402("CNTDWN_GO");
				unk_0x4D9DA18AB3C2A466(iVar3);
				unk_0x4D9DA18AB3C2A466(iVar4);
				unk_0x4D9DA18AB3C2A466(iVar5);
				unk_0x295B86DE57A0721D(true);
				unk_0x818901B332D5541D();
				func_84(6);
				if (!bParam1)
				{
					bVar2 = true;
				}
			}
		}
		else if (iVar1 == 1)
		{
			bVar2 = true;
		}
		if ((iParam2 && func_548()) || iVar0 > 5)
		{
			bVar2 = true;
		}
		if (bVar2)
		{
			if (bParam3)
			{
				iParam0->f_1 = 0;
				func_547(&(iParam0->f_3));
			}
			unk_0x7CED302277C0F3D3("RACES_RADIO_MUTE_scene");
			unk_0xDEFB5E2E5CBD460A("MP_RACE_GENERAL_SCENE");
			iVar7 = 0;
			while (iVar7 < unk_0xF839A4FC3E76D324())
			{
				if (unk_0x1B094AC15936B3DB(unk_0xDD4FFAA17341D382(iVar7)))
				{
					iVar8 = unk_0xEB9DC13235C0B345(unk_0xDD4FFAA17341D382(iVar7));
					if (iVar8 != unk_0x95B959F18401C09A())
					{
						iVar9 = unk_0x378BD4B3881338C2(iVar8);
						if (unk_0xF0D230FB550CD6EB(iVar9, 0))
						{
							iVar10 = unk_0xF2C96862595654B4(iVar9, 0);
							unk_0x7B1011A61F402324(iVar10, "MP_RACE_NPC_CAR_Group", 0f);
						}
					}
				}
				iVar7++;
			}
			return 1;
		}
	}
	return 0;
}

void func_547(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_548()
{
	if (unk_0xD9C92B0885A075F8())
	{
		return 0;
	}
	if (unk_0xF1CDE9FD207C4CD8(0, 18) || unk_0xF1CDE9FD207C4CD8(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_549(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	unk_0x1256E5EA03020804(12, &iVar0, &iVar1, &iVar2, &uVar3);
	unk_0xBB698266C5FDF0A7(*iParam0, "SET_MESSAGE");
	unk_0x713FEBE56D2BD403("NUMBER");
	unk_0xE800DC85FDF60F85(unk_0xEE14D9A9F531ADDC(iParam1));
	unk_0x36F3AA9FFAAF8606();
	unk_0x4D9DA18AB3C2A466(iVar0);
	unk_0x4D9DA18AB3C2A466(iVar1);
	unk_0x4D9DA18AB3C2A466(iVar2);
	unk_0x295B86DE57A0721D(true);
	unk_0x818901B332D5541D();
}

float func_550(var uParam0)
{
	if (func_555(uParam0))
	{
		if (func_552(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_551(unk_0x0E4018692D92041D(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_551(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = to_float(unk_0xE3903F59E2F22150());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0xB331FCEB94EB05C8())
	{
		iVar2 = unk_0x78DCC5D0CB43DEBA();
		fVar3 = to_float(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (to_float(unk_0xE3903F59E2F22150()) / 1000f);
}

bool func_552(var uParam0)
{
	return unk_0x0E4018692D92041D(*uParam0, 2);
}

void func_553(int iParam0)
{
	func_554(iParam0, 0f);
}

void func_554(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_551(unk_0x0E4018692D92041D(*iParam0, 4)) - fParam1);
	unk_0x8950ED5730F62EE8(iParam0, 1);
	unk_0xCE689A8E8C42ED78(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_555(var uParam0)
{
	return unk_0x0E4018692D92041D(*uParam0, 1);
}

int func_556(int iParam0)
{
	if (!unk_0x11AE7F6A404414C9(*iParam0))
	{
		return 0;
	}
	return 1;
}

Vector3 func_557(int iParam0)
{
	switch (Local_175.f_31)
	{
		case 0:
			if (iParam0 == 0)
			{
				return 1706.612f, 3251.994f, 40.1522f;
			}
			return 1066.192f, 3078.314f, 40.9174f;
			break;
		
		case 1:
			if (iParam0 == 0)
			{
				return -1004.147f, -3235.733f, 12.9444f;
			}
			return -1675.056f, -2848.475f, 12.9444f;
			break;
		
		case 2:
			if (iParam0 == 0)
			{
				return 2141.719f, 4811.836f, 40.1823f;
			}
			return 1928.747f, 4713.012f, 40.1674f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_558(int iParam0)
{
	*iParam0 = unk_0x199B24FF79A52CCF("COUNTDOWN");
}

void func_559()
{
	int iVar0;
	int iVar1;
	
	if (unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		if (func_44(unk_0xBF4289280FD7809A(), 1))
		{
			func_82(1);
		}
		if (func_44(unk_0xBF4289280FD7809A(), 2))
		{
			func_82(2);
		}
		return;
	}
	if (func_581() || func_578())
	{
		func_527();
		unk_0x3FD9339AA95E323F(0, 140, 1);
		unk_0x3FD9339AA95E323F(0, 141, 1);
		unk_0x3FD9339AA95E323F(0, 142, 1);
		unk_0x3FD9339AA95E323F(0, 143, 1);
		unk_0x3FD9339AA95E323F(0, 24, 1);
		unk_0x3FD9339AA95E323F(0, 345, 1);
		unk_0x3FD9339AA95E323F(0, 346, 1);
		unk_0x3FD9339AA95E323F(0, 347, 1);
	}
	if (func_581())
	{
		if (!func_44(unk_0xBF4289280FD7809A(), 4))
		{
			func_84(4);
			unk_0x274C6068B660FFB4(unk_0x33CD235DF1E6A94E(), joaat("weapon_unarmed"), false);
			unk_0x3E281A3DADCB2E6B(false);
			unk_0x7D1F395C3A7A37BE(unk_0x33CD235DF1E6A94E(), 0);
		}
		if (unk_0x5C415D10D5CBF689(unk_0x33CD235DF1E6A94E()))
		{
			if (func_577(2))
			{
				func_576(2);
			}
			if (!func_81())
			{
				if (func_577(3))
				{
					func_576(3);
				}
				iVar1 = unk_0x6EE765D5B613AB2A(unk_0x33CD235DF1E6A94E());
				iVar0 = unk_0x541D5C57194E73C4(iVar1);
				if (func_523(iVar0))
				{
					unk_0x282BAD470C323153(iVar1, 1);
					func_575(3);
					if (func_577(4))
					{
						func_576(4);
					}
					if (!func_44(unk_0xBF4289280FD7809A(), 2))
					{
						func_84(2);
					}
					if (unk_0x0E4018692D92041D(Local_175.f_2, unk_0x72B85B341ADBE9DE()))
					{
						if (!func_44(unk_0xBF4289280FD7809A(), 1))
						{
							unk_0x65BA35D6D61F1574("BIKER_JOUST_START");
							func_84(1);
							func_573();
							unk_0x1549A34EB0282877(1);
						}
						if (!func_572() || !func_571())
						{
							if (func_45(unk_0x95B959F18401C09A()))
							{
								if (!func_572())
								{
									func_560(6);
								}
							}
							else
							{
								func_560(7);
							}
						}
						else
						{
							func_560(8);
						}
					}
				}
				else
				{
					if (func_44(unk_0xBF4289280FD7809A(), 1))
					{
						func_82(1);
					}
					if (func_44(unk_0xBF4289280FD7809A(), 2))
					{
						func_82(2);
					}
					func_560(4);
				}
			}
			else
			{
				if (func_44(unk_0xBF4289280FD7809A(), 1))
				{
					func_82(1);
				}
				if (func_44(unk_0xBF4289280FD7809A(), 2))
				{
					func_82(2);
				}
				if (func_44(unk_0xBF4289280FD7809A(), 4))
				{
					func_82(4);
				}
				func_560(3);
			}
		}
		else
		{
			if (func_44(unk_0xBF4289280FD7809A(), 1))
			{
				func_82(1);
			}
			if (func_44(unk_0xBF4289280FD7809A(), 2))
			{
				func_82(2);
			}
			func_560(2);
		}
	}
	else
	{
		if (func_44(unk_0xBF4289280FD7809A(), 1))
		{
			func_82(1);
		}
		if (func_44(unk_0xBF4289280FD7809A(), 2))
		{
			func_82(2);
		}
		if (func_44(unk_0xBF4289280FD7809A(), 4))
		{
			func_82(4);
			func_80(0);
			unk_0x7D1F395C3A7A37BE(unk_0x33CD235DF1E6A94E(), 1);
		}
	}
}

void func_560(int iParam0)
{
	struct<8> Var0;
	int iVar1;
	
	if (func_570())
	{
		if (!func_577(iParam0))
		{
			switch (iParam0)
			{
				case 3:
					func_102("JST_PASSMD", -1);
					break;
				
				case 2:
					func_102("JST_NOBIKE", -1);
					break;
				
				case 5:
					break;
				
				case 6:
					func_102("JST_HRBOSS", -1);
					break;
				
				case 7:
					func_102("JST_HWBOSS", -1);
					break;
				
				case 8:
					func_102("JST_HTBOSS", -1);
					break;
				
				case 9:
					func_102("JST_KBIKE", -1);
					break;
				
				case 11:
					func_102("JST_OAREA", -1);
					break;
				
				case 12:
					func_102("JST_HSTART", -1);
					break;
				
				case 13:
					if (func_143())
					{
						func_569("JST_HTBLAUNCH", "JST_BLIP", iLocal_152, -1);
					}
					else
					{
						func_569("JST_HGNLNCH", "JST_BLIP", iLocal_152, -1);
					}
					break;
				
				case 14:
					func_569("JST_HGNLNCH", "JST_BLIP", iLocal_152, -1);
					break;
				
				case 10:
					func_569("JST_FIGHT", "HUNT_TARBLP", iLocal_153, -1);
					break;
				
				case 15:
					func_569("JST_AMMOH", "JST_AMMOBL", 18, -1);
					break;
				
				case 16:
					StringCopy(&Var0, func_563(func_36()), 64);
					iVar1 = func_712(func_36());
					func_562("JST_RVLLNCH", &Var0, iVar1, "JST_BLIP", iLocal_152, -1);
					break;
				
				case 17:
					if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
					{
						if (unk_0x541D5C57194E73C4(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0)) != 884483972)
						{
							func_102("JST_DOUB", -1);
						}
					}
					break;
				
				default:
					break;
			}
			func_98(1);
			func_561(iParam0);
		}
	}
}

void func_561(int iParam0)
{
	unk_0x8950ED5730F62EE8(&iLocal_131, iParam0);
}

void func_562(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	unk_0x37621D6689F9E3C3(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x75D3F9044123D4F9(iParam2);
	}
	unk_0xD61E5ED1D4E687A5(sParam1);
	if (!iParam4 == 0)
	{
		unk_0x75D3F9044123D4F9(iParam4);
	}
	unk_0xFA6BEE2B1507FF1E(iParam3);
	unk_0x092150016C06C431(0, 0, false, iParam5);
}

char* func_563(int iParam0)
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == unk_0x95B959F18401C09A())
	{
		sVar0 = func_568(&(Global_1626536[iParam0 /*603*/].f_11.f_104));
		return sVar0;
	}
	if (Global_1626536[iParam0 /*603*/].f_11.f_120 != Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_120)
	{
		sVar0 = func_566(iParam0, 0);
		return sVar0;
	}
	if (((func_107(iParam0, 28) || func_107(unk_0x95B959F18401C09A(), 28)) || func_565(iParam0)) && !func_564(iParam0))
	{
		return func_566(iParam0, 0);
	}
	iVar1 = func_262(iParam0);
	if (iVar1 != func_29())
	{
		if (iVar1 != unk_0x95B959F18401C09A())
		{
			if (!unk_0xDB36A8F522CBC12D() && !unk_0x59D656DCC6383E85(0, -1, 1))
			{
				return func_566(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_29())
	{
		sVar0 = func_568(&(Global_1626536[iVar1 /*603*/].f_11.f_104));
		if (unk_0x786AF4A44E1B5B4B(sVar0))
		{
			return func_566(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_564(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_198(iParam0) };
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

int func_565(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_29())
	{
		Var0 = { func_198(iParam0) };
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

char* func_566(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_100(iParam0, 1))
		{
			return func_567();
		}
	}
	return unk_0x434854E9CAE13C4A("GB_REST_ACC");
}

char* func_567()
{
	return unk_0x434854E9CAE13C4A("GB_REST_ACCM");
}

var func_568(var uParam0)
{
	return uParam0;
}

void func_569(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0x37621D6689F9E3C3(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x75D3F9044123D4F9(iParam2);
	}
	unk_0xFA6BEE2B1507FF1E(iParam1);
	unk_0x092150016C06C431(0, 0, false, iParam3);
}

int func_570()
{
	if (((((!func_385() && !unk_0xD9C92B0885A075F8()) && !unk_0xE35413546DC97620()) && func_983(unk_0x95B959F18401C09A(), 1, 1)) && !func_121()) && !unk_0xFAC8F20FBC764F4D())
	{
		return 1;
	}
	return 0;
}

bool func_571()
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_34(unk_0x95B959F18401C09A());
	if (iVar1 == 0)
	{
		iVar0 = 8;
	}
	else
	{
		iVar0 = 9;
	}
	return func_17(iVar0);
}

bool func_572()
{
	int iVar0;
	int iVar1;
	
	iVar0 = (1 - func_34(unk_0x95B959F18401C09A()));
	if (iVar0 == 0)
	{
		iVar1 = 8;
	}
	else
	{
		iVar1 = 9;
	}
	return func_17(iVar1);
}

void func_573()
{
	if (!func_574(unk_0x95B959F18401C09A()))
	{
		func_122(25);
	}
}

bool func_574(int iParam0)
{
	return func_107(iParam0, 25);
}

void func_575(int iParam0)
{
	Global_2405071.f_45.f_302 = iParam0;
	unk_0x66CDA3DCBCEDF782(unk_0x33CD235DF1E6A94E(), Global_2405071.f_45.f_302);
	if (Global_2405071.f_45.f_302 == 1)
	{
		unk_0x5FEE418CE11E6DDE(unk_0x33CD235DF1E6A94E(), 115, true);
	}
	else
	{
		unk_0x5FEE418CE11E6DDE(unk_0x33CD235DF1E6A94E(), 115, false);
	}
}

void func_576(int iParam0)
{
	unk_0xCE689A8E8C42ED78(&iLocal_131, iParam0);
}

bool func_577(int iParam0)
{
	return unk_0x0E4018692D92041D(iLocal_131, iParam0);
}

int func_578()
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	
	vVar0 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true) };
	vVar1 = { func_557(func_580(unk_0x95B959F18401C09A())) };
	fVar2 = unk_0x16E00F066AFFEA0D(vVar0, vVar1, false);
	fVar3 = (func_579(func_580(unk_0x95B959F18401C09A())) / 2f);
	if (fVar2 <= fVar3)
	{
		if (unk_0x7EECA16E87982278((vVar1.z - vVar0.z)) <= fVar3)
		{
			return 1;
		}
	}
	return 0;
}

float func_579(int iParam0)
{
	if (iParam0 == 0)
	{
		return 44.75f;
	}
	return 44.75f;
}

int func_580(int iParam0)
{
	if (func_37(iParam0) || func_35(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_581()
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	
	vVar0 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true) };
	vVar1 = { func_557(func_34(unk_0x95B959F18401C09A())) };
	fVar2 = unk_0x16E00F066AFFEA0D(vVar0, vVar1, false);
	fVar3 = (func_579(func_34(unk_0x95B959F18401C09A())) / 2f);
	if (fVar2 <= fVar3)
	{
		if (unk_0x7EECA16E87982278((vVar1.z - vVar0.z)) <= fVar3)
		{
			return 1;
		}
	}
	return 0;
}

void func_582()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	unk_0x1256E5EA03020804(iLocal_152, &iVar0, &iVar1, &iVar2, &iVar3);
	fVar4 = 16.125f;
	fVar5 = 3.75f;
	fVar6 = func_579(func_34(unk_0x95B959F18401C09A()));
	vVar7 = { func_557(func_34(unk_0x95B959F18401C09A())) };
	vVar7.z = (vVar7.z - fVar5);
	unk_0xBE9D0FB56A2D798F(1, vVar7, 0f, 0f, 0f, 0f, 0f, 0f, fVar6, fVar6, fVar4, iVar0, iVar1, iVar2, iVar3, 0, 0, 2, 0, 0, 0, false);
}

void func_583()
{
	if (func_622())
	{
		func_616();
		func_615();
		func_602();
		func_585();
		func_584();
	}
	else
	{
		switch (func_113(unk_0x95B959F18401C09A()))
		{
			case 0:
				func_528();
				break;
			
			case 1:
				func_616();
				break;
			
			case 2:
				func_584();
				break;
			
			case 3:
				func_616();
				func_615();
				func_602();
				func_584();
				func_585();
				break;
			}
	}
}

void func_584()
{
	if (func_27() >= 2)
	{
		if (func_17(11))
		{
			if (func_44(unk_0xBF4289280FD7809A(), 1))
			{
				if (!func_577(10))
				{
					func_560(10);
				}
				else
				{
					func_560(15);
				}
				if (!func_577(17))
				{
					func_560(17);
				}
			}
		}
		else if (!func_44(unk_0xBF4289280FD7809A(), 1))
		{
			func_560(12);
		}
		else
		{
			func_560(12);
		}
	}
	else if (func_27() >= 1)
	{
		if (func_622())
		{
			if (unk_0x95B959F18401C09A() == Local_175.f_16[0])
			{
				func_560(13);
			}
			else
			{
				func_560(14);
			}
		}
		else
		{
			func_560(16);
		}
	}
}

void func_585()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_5(&uLocal_172))
	{
		if (func_5(&(Local_175.f_5)))
		{
			iLocal_142 = (func_3() - func_22(&(Local_175.f_5), 0, 0));
			if (iLocal_142 < func_3())
			{
				if (iLocal_142 > 30000)
				{
					iVar1 = 1;
				}
				else
				{
					iVar1 = 6;
				}
				func_601();
				iVar2 = func_34(unk_0x95B959F18401C09A());
				iVar3 = (1 - iVar2);
				iVar4 = func_712(unk_0x95B959F18401C09A());
				iVar5 = Local_175.f_16[iVar3];
				if (Local_175.f_24[iVar2] > 0)
				{
					func_598(Local_175.f_27[iVar2], "JST_TEAML", -1, iVar4, 5, 0, 0, 0, 0, 0, 0, iVar4, 0, iLocal_112, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
				}
				else
				{
					func_598(Local_175.f_27[iVar2], "JST_TEAML", 999999999, 6, 5, 0, 0, 0, 0, 2, 0, 6, 0, iLocal_112, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
				}
				if (iVar5 != func_29())
				{
					if (unk_0xC4DEA49C5B465481(iVar5))
					{
						if (!unk_0x786AF4A44E1B5B4B(&Local_163))
						{
							iVar4 = func_712(iVar5);
							func_598(Local_175.f_27[iVar3], "JST_ETEAML", -1, iVar4, 4, 0, 0, 0, 0, 0, 0, iVar4, 0, iLocal_112, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
						}
					}
				}
				if (iLocal_142 > 0)
				{
					func_597(iLocal_142, "CLUB_WORK_END", 0, 0, -1, 0, 3, 0, iVar1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
				}
				else
				{
					func_597(0, "CLUB_WORK_END", 0, 0, -1, 0, 3, 0, iVar1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
				}
			}
		}
		else
		{
			func_586();
		}
	}
	else
	{
		iVar0 = (10000 - func_22(&uLocal_172, 0, 0));
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		if (func_983(unk_0x95B959F18401C09A(), 1, 1))
		{
			func_601();
			func_597(iVar0, "PEN_ELM", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
		}
	}
}

void func_586()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_508())
	{
		return;
	}
	bVar0 = func_24();
	iVar1 = func_23();
	if (func_17(5))
	{
		iVar1 = func_21();
	}
	if (bVar0)
	{
		iVar2 = func_596();
		if (iVar2 > iLocal_136)
		{
			iVar2 = iLocal_136;
		}
		if (iVar3 != Local_175.f_3)
		{
			iVar3 = Local_175.f_3;
		}
		if ((iVar1 - func_22(&(Local_175.f_7), 0, 0)) >= 0)
		{
			func_595((iVar1 - func_22(&(Local_175.f_7), 0, 0)));
			func_587(iVar3, iVar2, (iVar1 - func_22(&(Local_175.f_7), 0, 0)), 1, func_594(-1));
		}
		else
		{
			func_587(iVar3, iVar2, 0, 1, func_594(-1));
		}
	}
}

void func_587(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4)
{
	char* sVar0;
	
	if (func_592(0) == 0)
	{
		return;
	}
	func_591();
	func_588(iParam0, iParam1, "HUD_PARITIC", -1, 1, 4, 0, 0, 0, 0, 0, 1, 1, 0, 255, 0);
	sVar0 = "HUD_COUNTDOWN";
	if (!func_219(sParam4))
	{
		sVar0 = sParam4;
	}
	func_597(iParam2, sVar0, 0, 0, -1, 0, 3, 0, iParam3, 0, 0, 0, iParam3, 0, 0, 0, 0, -1);
}

void func_588(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_590(4, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1373453.f_1 = 1;
		func_589(4, iVar0);
		Global_1373453.f_3163[iVar0] = iParam0;
		Global_1373453.f_3163.f_172[iVar0] = iParam1;
		StringCopy(&(Global_1373453.f_3163.f_11[iVar0 /*16*/]), sParam2, 64);
		Global_1373453.f_3163.f_183[iVar0] = iParam3;
		Global_1373453.f_3163.f_216[iVar0] = iParam5;
		Global_1373453.f_3163.f_194[iVar0] = iParam4;
		Global_1373453.f_3163.f_227[iVar0] = iParam6;
		Global_1373453.f_3163.f_270[iVar0] = iParam7;
		Global_1373453.f_3163.f_281[iVar0] = iParam8;
		Global_1373453.f_3163.f_292[iVar0] = iParam9;
		Global_1373453.f_3163.f_303[iVar0] = iParam10;
		Global_1373453.f_3163.f_314[iVar0] = iParam11;
		Global_1373453.f_3163.f_325[iVar0] = iParam13;
		Global_1373453.f_3163.f_336[iVar0] = iParam14;
		Global_1373453.f_3163.f_347[iVar0] = iParam15;
		if (((iParam0 > 9 && iParam1 > 9) && unk_0x4CE1DD5CFC1F941E()) && iParam12)
		{
			Global_1373453.f_1109 = 1;
		}
	}
}

void func_589(int iParam0, int iParam1)
{
	unk_0x8950ED5730F62EE8(&(Global_1373453.f_6184[iParam0]), iParam1);
}

bool func_590(int iParam0, int iParam1)
{
	return unk_0x0E4018692D92041D(Global_1373453.f_6184[iParam0], iParam1);
}

void func_591()
{
	unk_0x581AE7724ACAD410(8);
	unk_0x581AE7724ACAD410(9);
	unk_0x581AE7724ACAD410(6);
	unk_0x581AE7724ACAD410(7);
	Global_2460158 = 1;
}

int func_592(bool bParam0)
{
	if (func_593())
	{
		return 0;
	}
	if (func_491())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_983(unk_0x95B959F18401C09A(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_593()
{
	return unk_0x0E4018692D92041D(Global_2359302, 12);
}

char* func_594(int iParam0)
{
	char* sVar0;
	
	sVar0 = unk_0xD178EF744F20B712();
	return "HUD_STARTING";
	if (unk_0xCE3CFF625BEBAA04(sVar0, "am_hot_target"))
	{
		return "AST_HOT_TARG";
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "am_cp_collection"))
	{
		return "AST_CHK_COLL";
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "am_challenges"))
	{
		switch (iParam0)
		{
			case 0:
				return "AST_CHALL_LJ";
			
			case 1:
				return "AST_CHALL_LS";
			
			case 2:
				return "AST_CHALL_HS";
			
			case 3:
				return "AST_CHALL_LST";
			
			case 4:
				return "AST_CHALL_LW";
			
			case 5:
				return "AST_CHALL_NC";
			
			case 6:
				return "AST_CHALL_LP";
			
			case 7:
				return "AST_CHALL_VS";
			
			case 8:
				return "AST_CHALL_NM";
			
			case 9:
				return "AST_CHALL_RD";
			
			case 10:
				return "AST_CHALL_LF";
			
			case 11:
				return "AST_CHALL_LFL";
			
			case 12:
				return "AST_CHALL_LFI";
			
			case 13:
				return "AST_CHALL_LB";
			
			case 14:
				return "AST_CHALL_MB";
			
			case 15:
				return "AST_CHALL_HSH";
			
			case 16:
				return "AST_CHALL_DB";
			
			case 17:
				return "AST_CHALL_ML";
			
			case 18:
				return "AST_CHALL_LSN";
			
			default:
		}
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "am_penned_in"))
	{
		return "AST_PENNED";
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "am_pass_the_parcel"))
	{
		return "AST_PARCEL";
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "am_hot_property"))
	{
		return "AST_PROPERTY";
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "am_dead_drop"))
	{
		return "AST_DDROP";
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "am_king_of_the_castle"))
	{
		return "AST_KCASTLE";
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "AM_CRIMINAL_DAMAGE"))
	{
		return "AST_BLAST";
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "AM_KILL_LIST"))
	{
		return "AST_UWARF";
	}
	else if (unk_0xCE3CFF625BEBAA04(sVar0, "AM_HUNT_THE_BEAST"))
	{
		return "AST_BEAST";
	}
	return "";
}

void func_595(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0x7C475FA8D877007F())
	{
		Global_2528542.f_4726 = 0;
	}
	else if (iParam0 < 6000)
	{
		if (!unk_0x0E4018692D92041D(Global_2528542.f_4726, 1))
		{
			unk_0x0F8EAEEC97DDBCB3(-1, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", false);
			Global_2528542.f_4726 = 0;
			unk_0x8950ED5730F62EE8(&(Global_2528542.f_4726), 1);
		}
	}
}

int func_596()
{
	return 16;
}

void func_597(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_590(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1373453.f_1 = 1;
		func_589(7, iVar0);
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

void func_598(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, var uParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_590(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1373453.f_1 = 1;
		func_589(6, iVar0);
		Global_1373453.f_3835[iVar0] = iParam0;
		StringCopy(&(Global_1373453.f_3835.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1373453.f_3835.f_183[iVar0] = iParam3;
		Global_1373453.f_3835.f_172[iVar0] = iParam2;
		Global_1373453.f_3835.f_260[iVar0] = iParam4;
		Global_1373453.f_3835.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1373453.f_3835.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1373453.f_3835.f_443[iVar0] = iParam7;
		Global_1373453.f_3835.f_454[iVar0] = iParam8;
		Global_1373453.f_3835.f_497[iVar0] = iParam9;
		Global_1373453.f_3835.f_508[iVar0] = iParam10;
		Global_1373453.f_3835.f_205[iVar0] = iParam11;
		Global_1373453.f_3835.f_216[iVar0] = iParam12;
		Global_1373453.f_3835.f_227[iVar0] = uParam13;
		Global_1373453.f_3835.f_238[iVar0] = iParam14;
		Global_1373453.f_3835.f_249[iVar0] = iParam15;
		Global_1373453.f_3835.f_519[iVar0] = iParam16;
		Global_1373453.f_3835.f_530[iVar0] = iParam17;
		Global_1373453.f_3835.f_541[iVar0] = iParam18;
		Global_1373453.f_3835.f_552[iVar0] = iParam19;
		Global_1373453.f_3835.f_563[iVar0] = iParam20;
		Global_1373453.f_3835.f_574[iVar0] = iParam21;
		Global_1373453.f_3835.f_585[iVar0] = iParam22;
		Global_1373453.f_3835.f_596[iVar0] = iParam23;
		Global_1373453.f_3835.f_607[iVar0] = iParam24;
		Global_1373453.f_3835.f_194[iVar0] = iParam25;
		if (iParam15 == 5 && func_600())
		{
			Global_1373453.f_1109 = 1;
		}
		if (unk_0x4CE1DD5CFC1F941E())
		{
			iVar2 = 0;
			unk_0x3A5E614EC752B188(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1373453.f_1113 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1373453.f_1112 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1373453.f_1109 = 1;
			}
			if (func_599())
			{
				Global_1373453.f_1113 = 1;
			}
		}
	}
}

int func_599()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x4CE1DD5CFC1F941E())
	{
		unk_0x3A5E614EC752B188(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_600()
{
	if (((unk_0x97B6A6696D936191() == 8 || unk_0x97B6A6696D936191() == 9) || unk_0x97B6A6696D936191() == 10) || unk_0x97B6A6696D936191() == 12)
	{
		return 1;
	}
	return 0;
}

void func_601()
{
	Global_1373453.f_1109 = 1;
}

void func_602()
{
	if (iLocal_139 > -1)
	{
		if (func_44(unk_0xDD4FFAA17341D382(iLocal_139), 1))
		{
			if (func_44(unk_0xDD4FFAA17341D382(iLocal_139), 6))
			{
				if (func_524())
				{
					if (func_522())
					{
						if (!func_614("JST_OBJ_KILL"))
						{
							func_613("JST_OBJ_KILL", &Local_163, iLocal_153, 0);
						}
					}
					else
					{
						if (func_614("JST_OBJ_KILL"))
						{
							func_528();
						}
						if (!func_614("JST_FBIKE"))
						{
							func_610("JST_FBIKE", 0);
						}
						if (!func_44(unk_0xBF4289280FD7809A(), 10))
						{
							func_84(10);
							func_609("JST_FBIKEGUNS", -1);
						}
					}
				}
				else if (func_522())
				{
					if (!func_614("JST_OBKAREA"))
					{
						func_610("JST_OBKAREA", 0);
					}
				}
				else
				{
					if (func_614("JST_OBJ_KILL"))
					{
						func_528();
					}
					if (!func_614("JST_FBIKE"))
					{
						func_610("JST_FBIKE", 0);
					}
				}
			}
			else if (func_734(9))
			{
				if (func_522())
				{
					if (!func_614("JST_OBJ_CHARGE"))
					{
						func_613("JST_OBJ_CHARGE", &Local_163, iLocal_153, 0);
					}
				}
			}
		}
		else if (!func_581())
		{
			if (!func_614("JST_OGOAREA"))
			{
				func_603("JST_OGOAREA", "JST_START", iLocal_152, 0);
			}
		}
		else if (!func_522())
		{
			if (!func_614("JST_OBIKE"))
			{
				func_610("JST_OBIKE", 0);
			}
		}
	}
}

void func_603(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_604(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1312585 = 19;
		Global_1312585.f_56 = iParam2;
	}
}

int func_604(char* sParam0, char* sParam1, bool bParam2, var uParam3)
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
	if (func_608(sParam0, sParam1) && Global_1312585.f_56 == Global_1312585.f_58)
	{
		return 0;
	}
	func_529();
	Global_1312585 = 3;
	StringCopy(&(Global_1312585.f_1), unk_0xD178EF744F20B712(), 32);
	Global_1312585.f_9 = unk_0x36163153849DFDA1(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	StringCopy(&(Global_1312585.f_16), sParam1, 64);
	Global_1312585.f_58 = uParam3;
	Global_1312585.f_56 = uParam3;
	func_607();
	func_606(bParam2);
	func_605();
	return 1;
}

void func_605()
{
	unk_0x8950ED5730F62EE8(&(Global_1312585.f_59), 1);
}

void func_606(bool bParam0)
{
	if (bParam0)
	{
		unk_0x8950ED5730F62EE8(&(Global_1312585.f_59), 0);
		return;
	}
	unk_0xCE689A8E8C42ED78(&(Global_1312585.f_59), 0);
}

void func_607()
{
	Global_1312585.f_10 = unk_0x6985FC3098CCA0EB(unk_0x78DCC5D0CB43DEBA(), 86400000);
	Global_1312585.f_11 = unk_0x78DCC5D0CB43DEBA();
}

bool func_608(char* sParam0, char* sParam1)
{
	if (!func_534())
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

void func_609(char* sParam0, int iParam1)
{
	unk_0x37621D6689F9E3C3(sParam0);
	unk_0x092150016C06C431(0, 0, true, iParam1);
}

void func_610(char* sParam0, bool bParam1)
{
	if (unk_0x786AF4A44E1B5B4B(sParam0))
	{
		return;
	}
	if (unk_0x85731B98C6C759D5(sParam0) > 23)
	{
		return;
	}
	if (func_611(sParam0))
	{
		return;
	}
	func_529();
	Global_1312585 = 0;
	StringCopy(&(Global_1312585.f_1), unk_0xD178EF744F20B712(), 32);
	Global_1312585.f_9 = unk_0x36163153849DFDA1(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	func_607();
	func_606(bParam1);
	func_605();
}

bool func_611(char* sParam0)
{
	if (!func_534())
	{
		return 0;
	}
	if (Global_1312585 == 11)
	{
		return func_612(sParam0);
	}
	if (unk_0x786AF4A44E1B5B4B(sParam0))
	{
		return 0;
	}
	return unk_0x36163153849DFDA1(sParam0) == unk_0x36163153849DFDA1(&(Global_1312585.f_12));
}

bool func_612(char* sParam0)
{
	if (!func_534())
	{
		return 0;
	}
	if (unk_0x786AF4A44E1B5B4B(sParam0))
	{
		return 0;
	}
	return unk_0x36163153849DFDA1(sParam0) == unk_0x36163153849DFDA1(&(Global_1312585.f_16));
}

void func_613(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_604(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1312585 = 16;
		Global_1312585.f_56 = iParam2;
	}
}

int func_614(char* sParam0)
{
	if (unk_0x786AF4A44E1B5B4B(sParam0))
	{
		return 0;
	}
	if (!func_534())
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
	return func_611(sParam0);
}

void func_615()
{
}

void func_616()
{
	if (!func_508())
	{
		func_621();
	}
	else
	{
		if (unk_0xE38E3CF1625A4145(iLocal_147))
		{
			unk_0x1ABDB383C83A336A(&iLocal_147);
		}
		if (unk_0xE38E3CF1625A4145(iLocal_146))
		{
			unk_0x1ABDB383C83A336A(&iLocal_146);
		}
		if (iLocal_139 > -1)
		{
			if (func_44(unk_0xDD4FFAA17341D382(iLocal_139), 1))
			{
				func_617();
			}
		}
	}
}

void func_617()
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	func_620(&vVar0);
	if (!unk_0xE38E3CF1625A4145(iLocal_148))
	{
		func_619(&fVar1, &fVar2, &iVar3);
		iLocal_148 = unk_0xEFFBEB7486CDFD2F(vVar0, fVar1, fVar2);
		unk_0x9D148E7C7C25619B(iLocal_148, iVar3);
		func_618(&iLocal_148, 29);
		unk_0xE447A1B9434714F3(iLocal_148, 180);
		unk_0x983D75D9630FD905(iLocal_148, false);
	}
}

void func_618(int iParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xE38E3CF1625A4145(*iParam0))
	{
		iVar0 = func_77(iParam1);
		unk_0xB9E84A421C105943(*iParam0, iVar0);
	}
}

void func_619(var uParam0, var uParam1, var uParam2)
{
	if (Local_175.f_31 == 0)
	{
		*uParam0 = 696f;
		*uParam1 = 101.5f;
		*uParam2 = 16;
	}
	else if (Local_175.f_31 == 1)
	{
		*uParam0 = 817f;
		*uParam1 = 101.5f;
		*uParam2 = 149;
	}
	else if (Local_175.f_31 == 2)
	{
		*uParam0 = 280f;
		*uParam1 = 50.5f;
		*uParam2 = 205;
	}
}

void func_620(var uParam0)
{
	switch (Local_175.f_31)
	{
		case 0:
			*uParam0 = { 1392.895f, 3132.5f, 39.4141f };
			break;
		
		case 1:
			*uParam0 = { -1342.056f, -3041.475f, 10.9444f };
			break;
		
		case 2:
			*uParam0 = { 2039.747f, 4768.012f, 40.1674f };
			break;
	}
}

void func_621()
{
	if (!unk_0xE38E3CF1625A4145(iLocal_147))
	{
		iLocal_147 = unk_0x2C0ED4741A007C6A(func_557(func_34(unk_0x95B959F18401C09A())));
		unk_0xA20C1DE21F2F071C(iLocal_147, 495);
		unk_0x0E734BC61706D976(iLocal_147, 1);
		unk_0x43598712EC9E921C(iLocal_147, 7000);
		unk_0x1C95CD840303FC37(iLocal_147, "CELL_JOUST");
		unk_0xC51C58C963968740(iLocal_147, 9);
		Global_2528542.f_264 = 1;
		func_618(&iLocal_147, iLocal_152);
		if (!func_734(6))
		{
			unk_0x0B1FD891620F7745();
			func_710(6);
		}
	}
	if (!unk_0xE38E3CF1625A4145(iLocal_146))
	{
		iLocal_146 = unk_0x9B8C51EA76FFD393(func_557(func_34(unk_0x95B959F18401C09A())), (func_579(func_34(unk_0x95B959F18401C09A())) / 2f));
		func_618(&iLocal_146, iLocal_152);
		unk_0xE447A1B9434714F3(iLocal_146, 100);
		unk_0xCE5C49921A521962(iLocal_146, 1.4f);
		unk_0x983D75D9630FD905(iLocal_146, false);
	}
}

int func_622()
{
	if (func_624() || func_623())
	{
		return 1;
	}
	return 0;
}

int func_623()
{
	return func_37(unk_0x95B959F18401C09A());
}

bool func_624()
{
	return func_35(unk_0x95B959F18401C09A());
}

void func_625(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (bParam5)
	{
		iVar0 = func_411(unk_0x95B959F18401C09A());
		Global_1669645 = iVar0;
		Global_1669645.f_1 = iParam0;
		if (func_175() != func_29())
		{
			Global_1669645.f_2 = func_709(func_175());
			Global_1669645.f_3 = func_708(func_175());
		}
		if (func_92() != func_29())
		{
			func_174(func_92(), &(Global_1669645.f_2), &(Global_1669645.f_3));
		}
		Global_1669645.f_7 = unk_0xEF4753434B24594D();
		Global_1669645.f_28 = func_707(unk_0x95B959F18401C09A());
		Global_1669645.f_13 = 0;
		Global_1669645.f_14 = 0;
		if (func_278(unk_0x95B959F18401C09A(), 1))
		{
			Global_1669645.f_23 = func_706(func_99(1));
		}
	}
	else
	{
		iVar0 = func_63(unk_0x95B959F18401C09A());
	}
	if (iParam2 || func_96(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_1669384 = iVar0;
		if (func_142(iVar0))
		{
			Global_1669384.f_1 = 4;
		}
		else if (func_705(iVar0))
		{
			Global_1669384.f_1 = 5;
		}
		else if (func_89(iVar0, 0))
		{
			Global_1669384.f_1 = 2;
			if (func_134(iVar0))
			{
				Global_1669384.f_1 = 3;
			}
		}
		else
		{
			Global_1669384.f_1 = 1;
		}
		if (func_175() != func_29())
		{
			Global_1669384.f_4 = func_709(func_175());
			Global_1669384.f_5 = func_708(func_175());
		}
		if (func_92() != func_29())
		{
			func_174(func_92(), &(Global_1669384.f_6), &(Global_1669384.f_7));
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
			Global_1669384.f_40 = func_169(iParam1);
			Global_1669384.f_41 = func_704();
			Global_1669384.f_42 = func_332(unk_0x95B959F18401C09A(), iParam1);
			Global_1669384.f_44 = func_703(unk_0x95B959F18401C09A(), iParam1);
		}
		if (!func_156() || iVar0 != 192)
		{
			Global_1669384.f_53 = 0;
		}
	}
	else if (func_132(iVar0))
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
			Global_1669501 = func_702(unk_0x95B959F18401C09A());
		}
		switch (iVar0)
		{
			case 225:
				if (func_128(unk_0x95B959F18401C09A()) == 0)
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
		if (func_175() != func_29())
		{
			Global_1669501.f_4 = func_709(func_175());
			Global_1669501.f_5 = func_708(func_175());
		}
		if (func_92() != func_29())
		{
			func_174(func_92(), &(Global_1669501.f_4), &(Global_1669501.f_5));
		}
		Global_1669501.f_8 = unk_0xEF4753434B24594D();
		if (iParam0 != -1)
		{
			Global_1669501.f_20 = iParam0;
		}
	}
	else if (func_104(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
		}
		Global_1669438 = iVar0;
		Global_1669384.f_1 = 1;
		if (func_175() != func_29())
		{
			Global_1669438.f_4 = func_709(func_175());
			Global_1669438.f_5 = func_708(func_175());
		}
		if (func_92() != func_29())
		{
			func_174(func_92(), &(Global_1669438.f_6), &(Global_1669438.f_7));
		}
		Global_1669438.f_9 = unk_0xEF4753434B24594D();
		if (iParam0 != -1)
		{
			Global_1669438.f_21 = iParam0;
		}
	}
	else if (func_131(iVar0))
	{
		Global_1669545 = iVar0;
		Global_1669545.f_1 = iParam0;
		Global_1669545.f_21 = 1;
		Global_1669545.f_22 = 1;
		if (func_175() != func_29())
		{
			Global_1669545.f_4 = func_709(func_175());
			Global_1669545.f_5 = func_708(func_175());
		}
		if (func_92() != func_29())
		{
			func_174(func_92(), &(Global_1669545.f_4), &(Global_1669545.f_5));
		}
		Global_1669545.f_8 = unk_0xEF4753434B24594D();
		if (iParam0 != -1)
		{
			Global_1669545.f_20 = iParam0;
		}
		Global_1669545.f_27 = func_700(func_49(), 5);
		Global_1669545.f_28 = func_706(func_309(unk_0x95B959F18401C09A()));
		Global_1669545.f_29 = func_140(6107, -1, 0);
		Global_1669545.f_30 = func_140(6103, -1, 0);
		Global_1669545.f_31 = func_140(6104, -1, 0);
		Global_1669545.f_32 = func_140(6106, -1, 0);
		Global_1669545.f_33 = func_140(6105, -1, 0);
		Global_1669545.f_34 = func_140(6108, -1, 0);
		Global_1669545.f_7 = func_698();
		Global_1669545.f_51 = func_706(bParam4);
	}
	else if (func_130(iVar0))
	{
		Global_1669599 = iVar0;
		Global_1669599.f_1 = iParam0;
		Global_1669599.f_21 = 1;
		Global_1669599.f_22 = 1;
		if (func_175() != func_29())
		{
			Global_1669599.f_4 = func_709(func_175());
			Global_1669599.f_5 = func_708(func_175());
		}
		if (func_92() != func_29())
		{
			func_174(func_92(), &(Global_1669599.f_4), &(Global_1669599.f_5));
		}
		Global_1669599.f_8 = unk_0xEF4753434B24594D();
		if (iParam0 != -1)
		{
			Global_1669599.f_20 = iParam0;
		}
		Global_1669599.f_24 = func_140(6157, -1, 0);
		Global_1669599.f_25 = func_140(6162, -1, 0);
		Global_1669599.f_26 = func_140(6163, -1, 0);
		Global_1669599.f_27 = func_706((((func_697() || func_696()) || func_695()) || func_694(unk_0x95B959F18401C09A())));
		Global_1669599.f_28 = func_140(6164, -1, 0);
		Global_1669599.f_29 = func_706(func_693());
		Global_1669599.f_31 = 0;
		Global_1669599.f_30 = 0;
		Global_1669599.f_32 = 0;
		Global_1669599.f_33 = 0;
		Global_1669599.f_34 = 0;
		Global_1669599.f_16 = 0;
		Global_1669599.f_7 = func_698();
	}
	else if (((((((((iVar0 == 250 || iVar0 == 238) || iVar0 == 242) || iVar0 == 244) || iVar0 == 248) || iVar0 == 241) || iVar0 == 239) || iVar0 == 240) || iVar0 == 249) || (iVar0 == 237 && func_126(func_127(unk_0x95B959F18401C09A()))))
	{
		Global_1669733 = iVar0;
		Global_1669733.f_1 = iParam0;
		Global_1669733.f_21 = 1;
		Global_1669733.f_22 = 1;
		Global_1669733.f_7 = func_698();
		if (func_175() != func_29())
		{
			Global_1669733.f_4 = func_709(func_175());
			Global_1669733.f_5 = func_708(func_175());
		}
		if (func_92() != func_29())
		{
			func_174(func_92(), &(Global_1669733.f_4), &(Global_1669733.f_5));
		}
		if (func_175() != -1)
		{
			Global_1669733.f_17 = func_692(func_175());
		}
		Global_1669733.f_8 = unk_0xEF4753434B24594D();
		Global_1669733.f_28 = func_707(unk_0x95B959F18401C09A());
		Global_1669733.f_16 = 0;
		Global_1669733.f_24 = 0;
		Global_1669733.f_23 = 0;
		if (func_278(unk_0x95B959F18401C09A(), 1))
		{
			Global_1669733.f_33 = func_706(func_99(1));
		}
	}
	else if (iVar0 == 237)
	{
		Global_1669680 = iVar0;
		Global_1669680.f_1 = iParam0;
		Global_1669680.f_21 = 1;
		Global_1669680.f_22 = 1;
		Global_1669680.f_7 = func_698();
		Global_1669680.f_24 = 0;
		Global_1669680.f_23 = 0;
		Global_1669680.f_16 = 0;
		if (func_175() != func_29())
		{
			Global_1669680.f_4 = func_709(func_175());
			Global_1669680.f_5 = func_708(func_175());
		}
		Global_1669680.f_28 = func_707(unk_0x95B959F18401C09A());
		if (Global_1669680.f_28)
		{
			Global_1669680.f_29 = func_691(unk_0x95B959F18401C09A());
		}
		else
		{
			Global_1669680.f_29 = 0;
		}
		Global_1669680.f_30 = func_675(unk_0x95B959F18401C09A(), 4, -1);
		Global_1669680.f_31 = func_674(unk_0x95B959F18401C09A());
		Global_1669680.f_32 = func_706(func_673(unk_0x95B959F18401C09A()));
		Global_1669680.f_33 = func_706(func_672(unk_0x95B959F18401C09A()));
		Global_1669680.f_34 = func_706(func_671(unk_0x95B959F18401C09A()));
		Global_1669680.f_35 = func_706(func_670(unk_0x95B959F18401C09A()));
		Global_1669680.f_36 = func_669(unk_0x95B959F18401C09A());
		Global_1669680.f_37 = func_668(unk_0x95B959F18401C09A());
		Global_1669680.f_39 = func_667(unk_0x95B959F18401C09A());
		if (func_278(unk_0x95B959F18401C09A(), 1))
		{
			Global_1669680.f_41 = func_706(func_99(1));
		}
		if (func_92() != func_29())
		{
			func_174(func_92(), &(Global_1669680.f_4), &(Global_1669680.f_5));
		}
		Global_1669680.f_8 = unk_0xEF4753434B24594D();
		Global_1669680.f_28 = func_707(unk_0x95B959F18401C09A());
	}
	else if (func_124(iVar0))
	{
		Global_1669817 = iVar0;
		Global_1669817.f_1 = func_128(unk_0x95B959F18401C09A());
		Global_1669817.f_2 = func_666();
		Global_1669817.f_3 = func_665();
		Global_1669817.f_4 = func_709(func_175());
		Global_1669817.f_5 = func_708(func_175());
		Global_1669817.f_7 = func_698();
		Global_1669817.f_8 = unk_0xEF4753434B24594D();
		Global_1669817.f_17 = func_692(func_175());
		Global_1669817.f_21 = 1;
		Global_1669817.f_22 = 1;
		Global_1669817.f_25 = iParam0;
		Global_1669817.f_27 = func_706(func_664(unk_0x95B959F18401C09A()));
		Global_1669817.f_28 = func_662(21, -1);
	}
	else
	{
		if (func_175() != func_29())
		{
			Global_1669366 = func_709(func_175());
			Global_1669366.f_1 = func_708(func_175());
		}
		Global_1669366.f_5 = unk_0xEF4753434B24594D();
		Global_1669366.f_13 = func_661();
		Global_1669366.f_15 = 0;
		if (func_173(1))
		{
			if (func_92() == func_175())
			{
				Global_1669366.f_15 = 1;
			}
		}
		if (func_660())
		{
			Global_1669501.f_28 = 1;
		}
		if (((((func_659() || func_658()) || func_657()) || func_656()) || func_654()) || func_653(unk_0x95B959F18401C09A()))
		{
			Global_1669501.f_30 = 1;
		}
		if (func_651(func_652(-1881846085)))
		{
			Global_1669501.f_32 = 1;
		}
		if (func_634(func_650(joaat("caddy"))))
		{
			Global_1669501.f_31 = 1;
		}
		if (func_633(unk_0x95B959F18401C09A()) || func_632(unk_0x95B959F18401C09A()))
		{
			Global_1669501.f_29 = 1;
		}
		if (func_631(unk_0x95B959F18401C09A()))
		{
			Global_1669501.f_33 = 1;
			Global_1669501.f_34 = 1;
		}
		if (func_630(unk_0x95B959F18401C09A()))
		{
			Global_1669501.f_36 = 1;
		}
		if (func_629(0, unk_0x95B959F18401C09A()) == 1)
		{
			Global_1669501.f_35 = 1;
		}
		if (func_628(unk_0x95B959F18401C09A(), 3, &uVar1))
		{
			Global_1669501.f_37 = 1;
		}
		if (func_628(unk_0x95B959F18401C09A(), 7, &uVar1))
		{
			Global_1669501.f_38 = 1;
		}
		if (func_627(unk_0x95B959F18401C09A()))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = func_626(unk_0x95B959F18401C09A(), iVar2);
				if (func_329(unk_0x95B959F18401C09A(), iVar3, 0))
				{
					Global_1669501.f_39 = 1;
				}
				if (func_329(unk_0x95B959F18401C09A(), iVar3, 2))
				{
					Global_1669501.f_40 = 1;
				}
				if (func_329(unk_0x95B959F18401C09A(), iVar3, 1))
				{
					Global_1669501.f_41 = 1;
				}
				iVar2++;
			}
		}
	}
}

int func_626(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_324(Global_1589819[iParam0 /*818*/].f_273.f_177[iParam1 /*12*/]))
	{
		uVar0 = Global_1589819[iParam0 /*818*/].f_273.f_177[iParam1 /*12*/];
	}
	return uVar0;
}

int func_627(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_29())
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

int func_628(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 != func_29())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam1 == func_629(iVar0, iParam0))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_629(int iParam0, int iParam1)
{
	if (iParam1 == func_29())
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

bool func_630(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_344, 7);
}

bool func_631(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_344, 8);
}

bool func_632(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_344, 11);
}

bool func_633(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_344, 10);
}

int func_634(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_662(11, -1) == 0)
	{
		return 0;
	}
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = (iParam0 + func_648(11));
		func_647(iVar1, &iVar0, 1);
		iVar2 = func_662(func_636(iVar1), -1);
		if (iVar2 > 0)
		{
		}
		else if (iVar0 >= 0)
		{
		}
		if (iVar0 >= 0)
		{
			iVar3 = func_140(func_635(4, iVar0), -1, 0);
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

int func_635(int iParam0, int iParam1)
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

int func_636(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 271)
	{
		iVar0 = 0;
		while (iVar0 < 22)
		{
			if (iParam0 >= func_648(iVar0) && iParam0 < func_637(iVar0))
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_637(int iParam0)
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
		iVar0 = func_646(iParam0);
		return func_645(iVar0);
	}
	return (func_638(iParam0, -1) * iParam0 + 1);
}

int func_638(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_641(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_640(iParam1))
			{
				return 0;
			}
			else if (func_639(iParam1, -1))
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

int func_639(int iParam0, int iParam1)
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

int func_640(int iParam0)
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

int func_641(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_642(unk_0x95B959F18401C09A(), 0);
	}
	if (bParam1)
	{
		if (func_642(unk_0x95B959F18401C09A(), 0))
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

bool func_642(int iParam0, bool bParam1)
{
	if (Global_1589660 != func_29())
	{
		if (!func_644(Global_1589660))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0x95B959F18401C09A() != Global_1589660)
			{
				if (unk_0x0E4018692D92041D(Global_2424047[Global_1589660 /*416*/].f_195, 24) || func_643(Global_1589660))
				{
					return 1;
				}
			}
		}
	}
	return unk_0x0E4018692D92041D(Global_2424047[iParam0 /*416*/].f_195, 24);
}

int func_643(int iParam0)
{
	if (iParam0 != func_29())
	{
		return unk_0x0E4018692D92041D(Global_2424047[iParam0 /*416*/].f_195, 9);
	}
	return 0;
}

int func_644(int iParam0)
{
	if (iParam0 != func_29())
	{
		return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_344, 2);
	}
	return 0;
}

int func_645(int iParam0)
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

int func_646(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return iParam0;
	}
	return -1;
}

void func_647(int iParam0, int iParam1, bool bParam2)
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

int func_648(int iParam0)
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
		iVar0 = func_646(iParam0);
		return func_649(iVar0);
	}
	return (func_638(iParam0, -1) * iParam0);
}

int func_649(int iParam0)
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

int func_650(int iParam0)
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

int func_651(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = iParam0 + 157;
		func_647(iVar1, &iVar0, 1);
		if (iVar0 >= 0)
		{
			iVar2 = func_140(func_635(4, iVar0), -1, 0);
			if (iVar2 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_652(int iParam0)
{
	switch (iParam0)
	{
		case -1881846085:
			return 0;
			break;
	}
	return -1;
}

int func_653(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (Global_1589819[iParam0 /*818*/].f_273.f_333 != 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_654()
{
	return func_140(func_655(3), -1, 0) != 0;
}

int func_655(int iParam0)
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

bool func_656()
{
	return func_140(6163, -1, 0) != 0;
}

bool func_657()
{
	return func_140(5380, -1, 0) != 0;
}

bool func_658()
{
	return func_140(3828, -1, 0) != 0;
}

bool func_659()
{
	return func_140(3223, -1, 0) != 0;
}

bool func_660()
{
	return func_140(5379, -1, 0) != 0;
}

int func_661()
{
	int iVar0;
	
	iVar0 = func_175();
	if (iVar0 != func_29())
	{
		return Global_1626536[iVar0 /*603*/].f_11.f_98;
	}
	return 0;
}

int func_662(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_49();
	}
	if (iParam0 == 7 && !Global_262145.f_16859)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_646(iParam0);
		if (iVar1 == 0 && func_140(5393, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_663(-1) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_707(unk_0x95B959F18401C09A()) && iVar1 == 1)
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

bool func_663(int iParam0)
{
	if (!Global_262145.f_23529)
	{
		return 0;
	}
	return func_140(7207, iParam0, 0) != 0;
}

int func_664(int iParam0)
{
	if (iParam0 != func_29())
	{
		return Global_1589819[iParam0 /*818*/].f_273.f_362 != 0;
	}
	return 0;
}

int func_665()
{
	if (Global_1669366.f_3 != 0)
	{
		return Global_1669366.f_3;
	}
	return -1;
}

int func_666()
{
	if (Global_1669366.f_2 != 0)
	{
		return Global_1669366.f_2;
	}
	return -1;
}

int func_667(int iParam0)
{
	if (iParam0 != func_29())
	{
		return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_328, 12);
	}
	return 0;
}

int func_668(int iParam0)
{
	if (iParam0 != func_29())
	{
		return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_328, 10);
	}
	return 0;
}

int func_669(int iParam0)
{
	if (iParam0 != func_29())
	{
		return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_328, 11);
	}
	return 0;
}

bool func_670(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 4);
}

bool func_671(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 3);
}

bool func_672(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 2);
}

bool func_673(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 1);
}

bool func_674(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_344, 31);
}

int func_675(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == func_29() || !func_690(iParam1))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			return func_685(iParam0, iParam2);
		
		case 1:
			return func_683(iParam0, iParam2);
		
		case 3:
			return func_682(iParam0);
		
		case 2:
			return func_677(iParam0, iParam2);
		
		case 4:
			return func_676(iParam0);
		
		default:
	}
	return 0;
}

bool func_676(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 6);
}

int func_677(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 10:
			return func_681(iParam0);
		
		case 11:
			return func_680(iParam0);
		
		case 12:
			return func_679(iParam0);
		
		case 13:
			return func_678(iParam0);
		
		default:
	}
	return 0;
}

bool func_678(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 15);
}

bool func_679(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 14);
}

bool func_680(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 13);
}

bool func_681(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 12);
}

bool func_682(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 5);
}

int func_683(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 5:
			return func_684(iParam0);
		
		case 6:
			return func_673(iParam0);
		
		case 7:
			return func_672(iParam0);
		
		case 8:
			return func_671(iParam0);
		
		case 9:
			return func_670(iParam0);
		
		default:
	}
	return 0;
}

bool func_684(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 0);
}

int func_685(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_689(iParam0);
		
		case 1:
			return func_688(iParam0);
		
		case 2:
			return func_687(iParam0);
		
		case 3:
			return func_686(iParam0);
		
		case 4:
			return func_674(iParam0);
		
		default:
	}
	return 0;
}

bool func_686(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 10);
}

bool func_687(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 9);
}

bool func_688(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 8);
}

bool func_689(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_275.f_4, 7);
}

bool func_690(int iParam0)
{
	return (iParam0 != -1 && iParam0 != 6);
}

int func_691(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	iVar0 = 1;
	if (func_675(iParam0, 2, 13))
	{
		iVar0 = 5;
	}
	else if (func_675(iParam0, 2, 12))
	{
		iVar0 = 4;
	}
	else if (func_675(iParam0, 2, 11))
	{
		iVar0 = 3;
	}
	else if (func_675(iParam0, 2, 10))
	{
		iVar0 = 2;
	}
	return iVar0;
}

var func_692(int iParam0)
{
	return Global_1589819[iParam0 /*818*/].f_211.f_6;
}

bool func_693()
{
	return func_140(6156, -1, 0) != 0;
}

int func_694(int iParam0)
{
	if (iParam0 != func_29())
	{
		return Global_1589819[iParam0 /*818*/].f_273.f_265 != 0;
	}
	return 0;
}

bool func_695()
{
	return func_140(6164, -1, 0) == 3;
}

bool func_696()
{
	return func_140(6164, -1, 0) == 2;
}

bool func_697()
{
	return func_140(6164, -1, 0) == 1;
}

int func_698()
{
	int iVar0;
	
	if (func_143())
	{
		return 4;
	}
	else if (func_156())
	{
		if (func_356(unk_0x95B959F18401C09A()))
		{
			return 8;
		}
		return 6;
	}
	if (func_99(1))
	{
		iVar0 = func_699(unk_0x95B959F18401C09A());
		if (iVar0 == -1)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_173(1))
	{
		if (func_356(func_175()))
		{
			return 9;
		}
		return 7;
	}
	return -2;
}

int func_699(int iParam0)
{
	if (func_278(iParam0, 1))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_448;
	}
	return -1;
}

int func_700(int iParam0, int iParam1)
{
	return func_140(func_701(iParam1), iParam0, 0);
}

int func_701(int iParam0)
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

int func_702(int iParam0)
{
	if (func_63(iParam0) == 225 || func_63(iParam0) == 226)
	{
		return func_128(iParam0);
	}
	return -1;
}

int func_703(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	if (func_324(iParam1))
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

var func_704()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_331(unk_0x95B959F18401C09A(), iVar0))
		{
			unk_0x8950ED5730F62EE8(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

int func_705(int iParam0)
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

int func_706(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_707(int iParam0)
{
	if (iParam0 != func_29())
	{
		return Global_1589819[iParam0 /*818*/].f_273.f_316 != 0;
	}
	return 0;
}

int func_708(int iParam0)
{
	if (iParam0 == func_29())
	{
		return -1;
	}
	return Global_1626536[iParam0 /*603*/].f_11.f_8[1];
}

int func_709(int iParam0)
{
	if (iParam0 == func_29())
	{
		return -1;
	}
	return Global_1626536[iParam0 /*603*/].f_11.f_8[0];
}

void func_710(int iParam0)
{
	unk_0x8950ED5730F62EE8(&iLocal_130, iParam0);
}

char* func_711()
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_262(unk_0x95B959F18401C09A());
	if (iVar0 != func_29())
	{
		if (iVar0 != unk_0x95B959F18401C09A())
		{
			if (((func_107(iVar0, 28) || func_107(unk_0x95B959F18401C09A(), 28)) || func_565(iVar0)) && !func_564(iVar0))
			{
				return func_566(iVar0, 0);
			}
			if (!unk_0xDB36A8F522CBC12D() && !unk_0x59D656DCC6383E85(0, -1, 1))
			{
				return func_566(iVar0, 0);
			}
		}
		sVar1 = func_568(&(Global_1626536[iVar0 /*603*/].f_11.f_104));
		if (unk_0x786AF4A44E1B5B4B(sVar1))
		{
			return func_566(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

int func_712(int iParam0)
{
	int iVar0;
	
	iVar0 = func_261(iParam0);
	if (iVar0 != -1)
	{
		return func_259(iVar0);
	}
	return 1;
}

void func_713(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	float fVar0;
	
	if (Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_33 != iParam0)
	{
		func_733(-1);
		Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_33 = iParam0;
		if (func_30() != -1)
		{
			func_732(-1);
		}
		if (func_731() != -1)
		{
			func_730(-1);
		}
		func_729(iParam2);
		func_727(iParam0);
		if (!func_726(iParam0))
		{
			fVar0 = func_725(iParam0);
			if (fVar0 != 1f)
			{
				func_724(fVar0);
				unk_0x8950ED5730F62EE8(&(Global_1669357.f_3), 1);
			}
		}
		if (!func_723(iParam0) || iParam3)
		{
			if (func_722(iParam0, iParam2) && iParam3 == 1)
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
		if (func_81())
		{
			func_122(27);
		}
		if (bParam1)
		{
			if (!func_770())
			{
				func_720(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((unk_0x0E4018692D92041D(Global_2528542.f_4546, 1) || unk_0x0E4018692D92041D(Global_2528542.f_4546, 4)) || unk_0x0E4018692D92041D(Global_2528542.f_4546, 0))
			{
				func_236(6);
			}
			func_719();
		}
		if (((iParam0 == 164 || iParam0 == 208) || iParam0 == 250) || iParam0 == 237)
		{
			unk_0xA53C1C92EE35EC0E(3, false);
			unk_0xA53C1C92EE35EC0E(5, false);
		}
		if (func_120(unk_0x95B959F18401C09A()) && func_115(unk_0x95B959F18401C09A()))
		{
			unk_0x8950ED5730F62EE8(&(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_1), 8);
		}
		func_715();
		if (func_714(iParam0))
		{
			unk_0xA53C1C92EE35EC0E(3, false);
			unk_0xA53C1C92EE35EC0E(5, false);
			unk_0x8950ED5730F62EE8(&(Global_1669357.f_3), 6);
		}
		Global_2528542.f_6270 = 0;
	}
}

int func_714(int iParam0)
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

void func_715()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	bVar3 = func_718();
	iVar2 = func_262(unk_0x95B959F18401C09A());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x7C1C88877E8AAA50(iVar0);
		if (unk_0xC4DEA49C5B465481(iVar1))
		{
			if (func_276(iVar1, iVar2, 1) || func_716(iVar1, unk_0x95B959F18401C09A()))
			{
				unk_0x29247C3358570094(unk_0x95B959F18401C09A(), iVar1, bVar3);
				unk_0x29247C3358570094(iVar1, unk_0x95B959F18401C09A(), bVar3);
			}
		}
		iVar0++;
	}
}

int func_716(int iParam0, int iParam1)
{
	if (func_278(iParam0, 1) && func_278(iParam1, 1))
	{
		return (func_717(iParam0) == func_262(iParam1) || func_717(iParam1) == func_262(iParam0));
	}
	return 0;
}

int func_717(int iParam0)
{
	if (func_278(iParam0, 1))
	{
		return Global_1626536[func_262(iParam0) /*603*/].f_11.f_481;
	}
	return func_29();
}

int func_718()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_175();
	if (iVar0 != func_29())
	{
		if (func_983(iVar0, 0, 1))
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

void func_719()
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

void func_720(int iParam0)
{
	if (func_721() && iParam0)
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

int func_721()
{
	if ((((Global_968393 != -1 && Global_968393 != 33) && Global_968393 != 35) && Global_968393 != 37) && Global_968393 != 21)
	{
		return 1;
	}
	return 0;
}

int func_722(int iParam0, int iParam1)
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

int func_723(int iParam0)
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

void func_724(float fParam0)
{
	float fVar0;
	
	if (unk_0x36163153849DFDA1(unk_0xD178EF744F20B712()) == func_74())
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

float func_725(int iParam0)
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

int func_726(int iParam0)
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

void func_727(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_140(3791, -1, 0);
	iVar1 = func_728(iParam0);
	if (iVar1 != -1)
	{
		unk_0x8950ED5730F62EE8(&iVar0, iVar1);
		func_138(3791, iVar0, -1, 1, 0);
	}
}

int func_728(int iParam0)
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

void func_729(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x95B959F18401C09A();
	if (Global_1626536[iVar0 /*603*/].f_11.f_181 != iParam0)
	{
		Global_1626536[iVar0 /*603*/].f_11.f_181 = iParam0;
	}
}

void func_730(int iParam0)
{
	if (Global_2528542.f_4889.f_336 != iParam0)
	{
		Global_2528542.f_4889.f_336 = iParam0;
	}
}

int func_731()
{
	return Global_2528542.f_4889.f_336;
}

void func_732(int iParam0)
{
	if (Global_2528542.f_4889.f_335 != iParam0)
	{
		Global_2528542.f_4889.f_335 = iParam0;
	}
}

void func_733(int iParam0)
{
	Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_32 = iParam0;
}

bool func_734(int iParam0)
{
	return unk_0x0E4018692D92041D(iLocal_130, iParam0);
}

int func_735(bool bParam0, bool bParam1, bool bParam2)
{
	if (func_767(unk_0x95B959F18401C09A(), 29))
	{
		return 0;
	}
	if (func_766(unk_0x95B959F18401C09A(), 21))
	{
		return 0;
	}
	if (func_766(unk_0x95B959F18401C09A(), 25))
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
	if (!func_438(unk_0x95B959F18401C09A()))
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
	if (func_765(unk_0x95B959F18401C09A()))
	{
		return 0;
	}
	if (func_764())
	{
		return 0;
	}
	if (func_497())
	{
		return 0;
	}
	if (func_763())
	{
		return 0;
	}
	if (func_491())
	{
		return 0;
	}
	if (unk_0x289064CB38B560AA())
	{
		return 0;
	}
	if (func_489(unk_0x95B959F18401C09A()))
	{
		return 0;
	}
	if (!func_493())
	{
		return 0;
	}
	if (func_766(unk_0x95B959F18401C09A(), 0) || func_766(unk_0x95B959F18401C09A(), 3))
	{
		return 0;
	}
	if ((func_766(unk_0x95B959F18401C09A(), 12) || func_766(unk_0x95B959F18401C09A(), 14)) || func_766(unk_0x95B959F18401C09A(), 13))
	{
		return 0;
	}
	if (func_756(unk_0x95B959F18401C09A(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		if (!func_742())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_741())
		{
			return 0;
		}
	}
	if (Global_1657075)
	{
		return 0;
	}
	if (func_740(unk_0x95B959F18401C09A()))
	{
		return 0;
	}
	if (func_739())
	{
		return 0;
	}
	if (func_738(unk_0x95B959F18401C09A()))
	{
		return 0;
	}
	if (func_737())
	{
		return 0;
	}
	if (unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_23, 4))
	{
		return 0;
	}
	if (func_736(unk_0x95B959F18401C09A()))
	{
		return 0;
	}
	if (func_60(unk_0x95B959F18401C09A()))
	{
		return 0;
	}
	return 1;
}

int func_736(int iParam0)
{
	if (Global_2424047[iParam0 /*416*/].f_261.f_4 != 0 || Global_2424047[iParam0 /*416*/].f_261.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_737()
{
	return Global_1671295.f_3663 != -1;
}

int func_738(int iParam0)
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

int func_739()
{
	if (Global_4254407.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

int func_740(int iParam0)
{
	if (!func_983(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1589819[iParam0 /*818*/].f_35;
}

bool func_741()
{
	return Global_93734.f_340 > 0;
}

int func_742()
{
	int iVar0;
	
	iVar0 = func_63(unk_0x95B959F18401C09A());
	if (((func_640(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_25) || func_755(unk_0x95B959F18401C09A())) || func_754(unk_0x95B959F18401C09A())) || func_753(unk_0x95B959F18401C09A()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_752(unk_0x95B959F18401C09A()))
	{
		if (func_142(iVar0) || func_705(iVar0))
		{
			return 1;
		}
	}
	if (func_111(unk_0x95B959F18401C09A()))
	{
		if (func_705(iVar0))
		{
			return 1;
		}
	}
	if (func_751(unk_0x95B959F18401C09A()))
	{
		if (func_132(iVar0))
		{
			return 1;
		}
	}
	if (func_750(unk_0x95B959F18401C09A()))
	{
		if (func_131(iVar0))
		{
			return 1;
		}
	}
	if (func_749(unk_0x95B959F18401C09A()))
	{
		if (func_130(iVar0))
		{
			return 1;
		}
	}
	if (func_748(unk_0x95B959F18401C09A()))
	{
		if (func_747(iVar0))
		{
			return 1;
		}
	}
	if (func_746(unk_0x95B959F18401C09A(), 0))
	{
		if (func_745(iVar0))
		{
			if (func_743(unk_0x95B959F18401C09A()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_743(int iParam0)
{
	if (func_744(iParam0) != func_29())
	{
		return func_744(iParam0) == func_262(iParam0);
	}
	return 0;
}

int func_744(int iParam0)
{
	return Global_1626536[iParam0 /*603*/].f_11.f_35;
}

int func_745(int iParam0)
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

int func_746(int iParam0, bool bParam1)
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
	if (iParam0 != func_29())
	{
		if (func_983(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1 && Global_2424047[iParam0 /*416*/].f_309.f_8 != func_29())
			{
				return func_112(Global_2424047[iParam0 /*416*/].f_309.f_5) == 12;
			}
		}
	}
	return 0;
}

int func_747(int iParam0)
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

int func_748(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_983(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_112(Global_2424047[iParam0 /*416*/].f_309.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_749(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_983(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_112(Global_2424047[iParam0 /*416*/].f_309.f_5) == 9;
			}
		}
	}
	return 0;
}

int func_750(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_983(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_112(Global_2424047[iParam0 /*416*/].f_309.f_5) == 7;
			}
		}
	}
	return 0;
}

int func_751(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_983(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_112(Global_2424047[iParam0 /*416*/].f_309.f_5) == 4;
			}
		}
	}
	return 0;
}

int func_752(int iParam0)
{
	if (func_639(Global_1589819[iParam0 /*818*/].f_273.f_25, -1))
	{
		return 1;
	}
	return 0;
}

int func_753(int iParam0)
{
	if (func_641(Global_1589819[iParam0 /*818*/].f_273.f_25, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_754(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_983(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_112(Global_2424047[iParam0 /*416*/].f_309.f_5) == 1;
			}
		}
	}
	return 0;
}

int func_755(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_983(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_112(Global_2424047[iParam0 /*416*/].f_309.f_5) == 0;
			}
		}
	}
	return 0;
}

int func_756(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
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
		if (func_755(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_111(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_754(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_751(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_750(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_749(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_762(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_748(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_761(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_746(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_760(iParam0))
		{
			return 1;
		}
	}
	if (!bParam13)
	{
		if (func_759(iParam0))
		{
			return 1;
		}
	}
	if (!bParam14)
	{
		if (func_758(iParam0))
		{
			return 1;
		}
	}
	if (!bParam15)
	{
		if (func_757(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_757(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_983(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_112(Global_2424047[iParam0 /*416*/].f_309.f_5) == 16;
			}
		}
	}
	return 0;
}

int func_758(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_983(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_112(Global_2424047[iParam0 /*416*/].f_309.f_5) == 15;
			}
		}
	}
	return 0;
}

int func_759(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_983(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_112(Global_2424047[iParam0 /*416*/].f_309.f_5) == 14;
			}
		}
	}
	return 0;
}

int func_760(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_983(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_112(Global_2424047[iParam0 /*416*/].f_309.f_5) == 13;
			}
		}
	}
	return 0;
}

int func_761(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_983(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_112(Global_2424047[iParam0 /*416*/].f_309.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_762(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_983(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1 && Global_2424047[iParam0 /*416*/].f_309.f_8 != func_29())
			{
				return func_112(Global_2424047[iParam0 /*416*/].f_309.f_5) == 8;
			}
		}
	}
	return 0;
}

bool func_763()
{
	return Global_1312867;
}

bool func_764()
{
	return unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_39.f_18, 0);
}

int func_765(int iParam0)
{
	if (func_488(iParam0, 1))
	{
		if (Global_1589819[iParam0 /*818*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_766(int iParam0, int iParam1)
{
	return unk_0x0E4018692D92041D(Global_2424047[iParam0 /*416*/].f_208, iParam1);
}

bool func_767(int iParam0, int iParam1)
{
	return unk_0x0E4018692D92041D(Global_1626536[iParam0 /*603*/].f_11.f_5, iParam1);
}

int func_768(int iParam0)
{
	if (!func_156() && !func_278(unk_0x95B959F18401C09A(), 1))
	{
		if (!func_115(unk_0x95B959F18401C09A()))
		{
			if (func_770())
			{
				return 1;
			}
		}
	}
	switch (iParam0)
	{
		case 148:
			break;
		
		case 151:
			break;
		
		case 152:
			break;
	}
	return 0;
}

int func_769()
{
	return 0;
}

int func_770()
{
	if ((func_107(unk_0x95B959F18401C09A(), 21) || func_107(unk_0x95B959F18401C09A(), 22)) || func_774())
	{
		return 1;
	}
	if (func_771())
	{
		func_122(22);
		return 1;
	}
	return 0;
}

int func_771()
{
	if (func_64(unk_0x95B959F18401C09A(), 0))
	{
		if (((func_81() && !func_773()) || func_766(unk_0x95B959F18401C09A(), 21)) || func_766(unk_0x95B959F18401C09A(), 25))
		{
			return 1;
		}
		else
		{
			func_772(27);
		}
	}
	return 0;
}

void func_772(int iParam0)
{
	unk_0xCE689A8E8C42ED78(&(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_4), iParam0);
}

bool func_773()
{
	return Global_1312417.f_1;
}

bool func_774()
{
	return func_316(338, -1);
}

void func_775(int iParam0, int iParam1)
{
	Local_176[iParam0 /*6*/] = iParam1;
}

bool func_776()
{
	if (!func_44(unk_0xBF4289280FD7809A(), 3))
	{
		if (func_17(1))
		{
			func_778("JCMcBpPl9UWmcdOYFza0Tg");
			func_778("jDF4fBBUqG9ZuI9TR7mw");
			func_84(3);
			func_777();
		}
	}
	return func_44(unk_0xBF4289280FD7809A(), 3);
}

void func_777()
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

void func_778(char* sParam0)
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
			if (func_779(&(Global_2359721[iVar1 /*26*/].f_15)) == iVar0)
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

int func_779(var uParam0)
{
	struct<13> Var0;
	int iVar1;
	int iVar2;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar1 = 0;
	iVar2 = func_781(uParam0);
	if (iVar2 == -1)
	{
		return iVar1;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_780(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar1;
		
		default:
	}
	return iVar1;
}

struct<13> func_780(var uParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar1 = func_781(uParam0);
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

int func_781(var uParam0)
{
	int iVar0;
	
	if (unk_0x786AF4A44E1B5B4B(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_783(uParam0->f_1))
	{
		if (func_782(uParam0))
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

int func_782(var uParam0)
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

bool func_783(int iParam0)
{
	return iParam0 == 9999;
}

int func_784()
{
	return Local_175;
}

int func_785(int iParam0)
{
	return Local_176[iParam0 /*6*/];
}

void func_786()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 < unk_0x77BABFD1D75AA582(1))
	{
		iVar1 = unk_0x5487531DB7DA4AB5(1, iVar0);
		switch (iVar1)
		{
			case 171:
				unk_0x286A5F0670063839(1, iVar0, &uVar2, 2);
				break;
			
			case 182:
				func_787(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_787(int iParam0)
{
	struct<11> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0x286A5F0670063839(1, iParam0, &Var0, 11))
	{
		if (unk_0x765F6FEEFF39224F(Var0))
		{
			if (unk_0x068481DAF84B9654(Var0))
			{
				iVar1 = unk_0x22B02EC53152632C(Var0);
				if (unk_0xE09156665EC2D83B(iVar1))
				{
					iVar2 = unk_0x5C7617A25D50AAE9(iVar1);
					if (unk_0x982A72D771CF4FE1(iVar2))
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
										if (iVar3 == unk_0x95B959F18401C09A())
										{
											if (func_522())
											{
												if (func_524())
												{
													if (!func_362(iVar3, iVar2) && func_790(iVar3))
													{
														if (func_788(Var0))
														{
															if (func_45(iVar2))
															{
																Local_176[unk_0x72B85B341ADBE9DE() /*6*/].f_3 = (Local_176[unk_0x72B85B341ADBE9DE() /*6*/].f_3 + (Global_262145.f_18170 * Global_262145.f_18171));
															}
															else
															{
																Local_176[unk_0x72B85B341ADBE9DE() /*6*/].f_3 = (Local_176[unk_0x72B85B341ADBE9DE() /*6*/].f_3 + (Global_262145.f_18169 * Global_262145.f_18171));
															}
														}
														else if (func_45(iVar2))
														{
															Local_176[unk_0x72B85B341ADBE9DE() /*6*/].f_3 = (Local_176[unk_0x72B85B341ADBE9DE() /*6*/].f_3 + Global_262145.f_18170);
														}
														else
														{
															Local_176[unk_0x72B85B341ADBE9DE() /*6*/].f_3 = (Local_176[unk_0x72B85B341ADBE9DE() /*6*/].f_3 + Global_262145.f_18169);
														}
													}
													else if (iVar3 == iVar2 || !func_362(iVar3, iVar2))
													{
														if (func_788(Var0))
														{
															Local_176[unk_0x72B85B341ADBE9DE() /*6*/].f_4++;
														}
													}
												}
												else
												{
													func_560(11);
												}
											}
											else
											{
												func_560(9);
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

int func_788(struct<10> Param0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x765F6FEEFF39224F(unk_0x22B02EC53152632C(Param0.f_1)) && !unk_0xD62C4419A41F106A(unk_0x22B02EC53152632C(Param0.f_1), 0))
	{
		if (func_789(unk_0x22B02EC53152632C(Param0.f_1)))
		{
			iVar0 = unk_0xFB0DA5436D45FDEF(Param0.f_4);
			iVar1 = Param0.f_4;
			iVar2 = unk_0xC996D6D89A97A11A(iVar1);
			if (((Param0.f_9 || iVar1 == joaat("weapon_unarmed")) || iVar2 == -728555052) || iVar0 == 2)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_789(int iParam0)
{
	int iVar0;
	
	if (unk_0xA2F0EA9AB6142D97(iParam0))
	{
		return 1;
	}
	if (unk_0xF0D230FB550CD6EB(iParam0, 1))
	{
		iVar0 = unk_0xF2C96862595654B4(iParam0, 1);
		if ((((unk_0x541D5C57194E73C4(iVar0) == joaat("chimera") || unk_0x541D5C57194E73C4(iVar0) == joaat("blazer")) || unk_0x541D5C57194E73C4(iVar0) == joaat("blazer2")) || unk_0x541D5C57194E73C4(iVar0) == joaat("blazer3")) || unk_0x541D5C57194E73C4(iVar0) == joaat("blazer4"))
		{
			return 1;
		}
	}
	return 0;
}

int func_790(int iParam0)
{
	int iVar0;
	int iVar1;
	
	unk_0xEEF8394DB3D3DFA1(iParam0);
	if (unk_0xF0D230FB550CD6EB(unk_0x378BD4B3881338C2(iParam0), 0))
	{
		iVar0 = unk_0xF2C96862595654B4(unk_0x378BD4B3881338C2(iParam0), 0);
		iVar1 = func_791(iVar0);
		if (func_362(iVar1, iParam0) || iVar1 == iParam0)
		{
			unk_0xEEF8394DB3D3DFA1(iParam0);
			unk_0xEEF8394DB3D3DFA1(iVar1);
			return 1;
		}
	}
	return 0;
}

int func_791(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		if (!unk_0x67FFBB75D2430704(iParam0, -1, 0))
		{
			iVar0 = unk_0x7BDC41A7CA0C77A2(iParam0, -1, 0);
			if (!unk_0xBC2FC12AD0FBF72E(iVar0))
			{
				iVar1 = unk_0x5C7617A25D50AAE9(iVar0);
				if (!iVar1 == func_29())
				{
					if (func_983(iVar1, 0, 1))
					{
						return iVar1;
					}
				}
			}
		}
	}
	return iVar1;
}

void func_792()
{
	int iVar0;
	
	if (func_17(1))
	{
		if (!func_734(9))
		{
			iVar0 = (1 - func_34(unk_0x95B959F18401C09A()));
			if (Local_175.f_16[1] != Local_175.f_16[0])
			{
				if (Local_175.f_16[iVar0] != func_29())
				{
					StringCopy(&Local_163, func_563(Local_175.f_16[iVar0]), 64);
					iLocal_153 = func_712(Local_175.f_16[iVar0]);
					func_710(9);
				}
			}
		}
	}
}

void func_793()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x9A1A35CBBF391C78(unk_0x33CD235DF1E6A94E()))
	{
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x7C1C88877E8AAA50(iVar0);
		if (iVar1 != unk_0x95B959F18401C09A())
		{
			if (unk_0xC4DEA49C5B465481(iVar1))
			{
				if (!unk_0x0E4018692D92041D(iLocal_138, iVar0))
				{
					unk_0xC592614C63F2DC5C(iVar1, 0);
					unk_0x8950ED5730F62EE8(&iLocal_138, iVar0);
				}
				else if (!unk_0x982A72D771CF4FE1(iVar1))
				{
					if (!unk_0xBC2FC12AD0FBF72E(unk_0x378BD4B3881338C2(iVar1)))
					{
						if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
						{
							if (!unk_0x0E4018692D92041D(iLocal_137, iVar0))
							{
								if (((!func_795(unk_0x33CD235DF1E6A94E(), unk_0x378BD4B3881338C2(iVar1)) && !func_794(unk_0x378BD4B3881338C2(iVar1))) && !func_362(unk_0x95B959F18401C09A(), iVar1)) && (func_581() || func_578()))
								{
									unk_0xC592614C63F2DC5C(iVar1, 1);
									unk_0x8950ED5730F62EE8(&iLocal_137, iVar0);
								}
							}
							else if (func_795(unk_0x33CD235DF1E6A94E(), unk_0x378BD4B3881338C2(iVar1)))
							{
								unk_0xC592614C63F2DC5C(iVar1, 0);
								unk_0xCE689A8E8C42ED78(&iLocal_137, iVar0);
							}
							else if (func_794(unk_0x378BD4B3881338C2(iVar1)))
							{
								unk_0xC592614C63F2DC5C(iVar1, 0);
								unk_0xCE689A8E8C42ED78(&iLocal_137, iVar0);
							}
							else if (func_362(unk_0x95B959F18401C09A(), iVar1))
							{
								unk_0xC592614C63F2DC5C(iVar1, 0);
								unk_0xCE689A8E8C42ED78(&iLocal_137, iVar0);
							}
							else if (!func_581() && !func_578())
							{
								unk_0xC592614C63F2DC5C(iVar1, 0);
								unk_0xCE689A8E8C42ED78(&iLocal_137, iVar0);
							}
						}
					}
				}
				else if (func_27() < 2)
				{
				}
				else if (func_44(unk_0xBF4289280FD7809A(), 1))
				{
					if (Local_176[iLocal_139 /*6*/].f_5 >= 2)
					{
						if (!func_44(unk_0xF8E1DE22DEB7E100(iVar1), 1))
						{
							if (!unk_0x0E4018692D92041D(iLocal_137, iVar0))
							{
								if (!(unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()) && !unk_0xBC2FC12AD0FBF72E(unk_0x378BD4B3881338C2(iVar1))))
								{
									if (!func_795(unk_0x33CD235DF1E6A94E(), unk_0x378BD4B3881338C2(iVar1)) && !func_794(unk_0x378BD4B3881338C2(iVar1)))
									{
										unk_0xC592614C63F2DC5C(iVar1, 1);
										unk_0x8950ED5730F62EE8(&iLocal_137, iVar0);
									}
								}
							}
							else if (!(unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()) && !unk_0xBC2FC12AD0FBF72E(unk_0x378BD4B3881338C2(iVar1))))
							{
								if (func_795(unk_0x33CD235DF1E6A94E(), unk_0x378BD4B3881338C2(iVar1)) || func_794(unk_0x378BD4B3881338C2(iVar1)))
								{
									unk_0xC592614C63F2DC5C(iVar1, 0);
									unk_0xCE689A8E8C42ED78(&iLocal_137, iVar0);
								}
							}
						}
						else if (unk_0x0E4018692D92041D(iLocal_137, iVar0))
						{
							if (func_44(unk_0xF8E1DE22DEB7E100(iVar1), 1))
							{
								unk_0xC592614C63F2DC5C(iVar1, 0);
								unk_0xCE689A8E8C42ED78(&iLocal_137, iVar0);
							}
						}
					}
				}
				else
				{
					if (!unk_0x0E4018692D92041D(iLocal_137, iVar0))
					{
						if (func_44(unk_0xF8E1DE22DEB7E100(iVar1), 1))
						{
							unk_0xC592614C63F2DC5C(iVar1, 1);
							unk_0x8950ED5730F62EE8(&iLocal_137, iVar0);
						}
					}
					if (!func_44(unk_0xF8E1DE22DEB7E100(iVar1), 1))
					{
						if (unk_0x0E4018692D92041D(iLocal_137, iVar0))
						{
							unk_0xC592614C63F2DC5C(iVar1, 0);
							unk_0xCE689A8E8C42ED78(&iLocal_137, iVar0);
						}
					}
				}
			}
		}
		iVar0++;
	}
}

int func_794(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x5C415D10D5CBF689(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x7C1C88877E8AAA50(iVar0);
		if (unk_0xC4DEA49C5B465481(iVar1))
		{
			if (unk_0x982A72D771CF4FE1(iVar1))
			{
				iVar2 = unk_0x378BD4B3881338C2(iVar1);
				if (iVar2 != iParam0)
				{
					if (func_795(iParam0, iVar2))
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

bool func_795(int iParam0, int iParam1)
{
	if (iParam0 == iParam1)
	{
		return 1;
	}
	if (!unk_0xF0D230FB550CD6EB(iParam0, 0) || !unk_0xF0D230FB550CD6EB(iParam1, 0))
	{
		return 0;
	}
	return unk_0xF2C96862595654B4(iParam0, 0) == unk_0xF2C96862595654B4(iParam1, 0);
}

void func_796()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = unk_0x7C1C88877E8AAA50(iLocal_141);
	iVar2 = func_34(unk_0x95B959F18401C09A());
	if (unk_0xC4DEA49C5B465481(iVar1))
	{
		if (unk_0x982A72D771CF4FE1(iVar1))
		{
			iVar0 = unk_0xF8E1DE22DEB7E100(iVar1);
			if (iLocal_139 > -1)
			{
				if (func_44(unk_0xDD4FFAA17341D382(iLocal_139), 1))
				{
					if (func_734(9))
					{
						if (iVar0 != unk_0xBF4289280FD7809A())
						{
							iVar3 = func_34(iVar1);
							if (iVar3 != iVar2)
							{
								if (func_17(11))
								{
									if (func_44(iVar0, 1))
									{
										if (!unk_0x0E4018692D92041D(iLocal_140, iLocal_141))
										{
											func_78(iVar1, 432, 1, 0);
											func_71(iVar1, func_77(iLocal_153), 1, 0);
											unk_0x8950ED5730F62EE8(&iLocal_140, iLocal_141);
										}
									}
								}
							}
						}
					}
				}
			}
		}
		else if (unk_0x0E4018692D92041D(iLocal_140, iLocal_141))
		{
			func_78(iVar1, 432, 0, 0);
			func_71(iVar1, func_77(iLocal_153), 0, 0);
			unk_0xCE689A8E8C42ED78(&iLocal_140, iLocal_141);
		}
	}
	iLocal_141++;
	if (iLocal_141 >= 32)
	{
		iLocal_141 = 0;
	}
}

void func_797()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	struct<16> Var4;
	int iVar5;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		vLocal_122[iVar1 /*3*/] = func_29();
		vLocal_122[iVar1 /*3*/].f_1 = -1;
		vLocal_122[iVar1 /*3*/].f_2 = uVar3;
		unk_0xCE689A8E8C42ED78(&iLocal_133, iVar1);
		unk_0xCE689A8E8C42ED78(&iLocal_135, iVar1);
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < unk_0xF839A4FC3E76D324())
	{
		Local_121[iVar0 /*20*/] = func_798();
		Local_121[iVar0 /*20*/].f_1 = -1;
		unk_0xCE689A8E8C42ED78(&iLocal_134, iVar0);
		Local_121[iVar0 /*20*/].f_2 = { Var4 };
		Local_121[iVar0 /*20*/].f_18 = 0;
		Local_121[iVar0 /*20*/].f_19 = 0;
		iVar0++;
	}
	iVar5 = 0;
	iVar0 = 0;
	while (iVar0 < unk_0xF839A4FC3E76D324())
	{
		if (unk_0x1B094AC15936B3DB(iVar0))
		{
			Local_121[iVar0 /*20*/] = iVar0;
			unk_0x8950ED5730F62EE8(&iLocal_134, iVar0);
			iVar2 = unk_0xEB9DC13235C0B345(Local_121[iVar0 /*20*/]);
			iVar1 = iVar2;
			if (func_983(iVar2, 0, 1))
			{
				iVar5++;
				vLocal_122[iVar1 /*3*/] = iVar2;
				Local_121[iVar0 /*20*/].f_1 = iVar1;
				vLocal_122[iVar1 /*3*/].f_1 = iVar0;
				vLocal_122[iVar1 /*3*/].f_2 = unk_0x378BD4B3881338C2(iVar2);
				StringCopy(&(Local_121[iVar0 /*20*/].f_2), unk_0xEEF8394DB3D3DFA1(iVar2), 64);
				unk_0x8950ED5730F62EE8(&iLocal_133, iVar1);
				if (unk_0xD62C4419A41F106A(vLocal_122[iVar1 /*3*/].f_2, 0))
				{
					unk_0x8950ED5730F62EE8(&iLocal_135, iVar1);
				}
				if (func_45(vLocal_122[iVar1 /*3*/]))
				{
					Local_121[iVar0 /*20*/].f_18 = 1;
				}
				else if (func_100(vLocal_122[iVar1 /*3*/], 0))
				{
					Local_121[iVar0 /*20*/].f_19 = 1;
				}
				if (iLocal_139 == iVar0)
				{
					if (unk_0xF0D230FB550CD6EB(vLocal_122[iVar1 /*3*/].f_2, 0))
					{
					}
				}
				if (Local_121[iVar0 /*20*/].f_18)
				{
					if (!unk_0x0E4018692D92041D(iLocal_135, iVar1) && !unk_0x0E4018692D92041D(iLocal_135, unk_0x95B959F18401C09A()))
					{
					}
				}
				else if (Local_121[iVar0 /*20*/].f_19)
				{
				}
			}
		}
		iVar0++;
	}
	if (iLocal_136 != iVar5)
	{
		iLocal_136 = iVar5;
	}
}

int func_798()
{
	return -1;
}

void func_799()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iLocal_139 = -1;
	if (unk_0x0E4018692D92041D(iLocal_133, unk_0x95B959F18401C09A()))
	{
		if (unk_0x0E4018692D92041D(iLocal_134, unk_0x72B85B341ADBE9DE()))
		{
			if (!func_271(unk_0x95B959F18401C09A()))
			{
				iLocal_139 = unk_0x72B85B341ADBE9DE();
			}
			else if (func_269() && !func_802())
			{
				iVar0 = func_800();
				if (unk_0xE09156665EC2D83B(iVar0))
				{
					iVar1 = unk_0x5C7617A25D50AAE9(iVar0);
					if (unk_0x982A72D771CF4FE1(iVar1))
					{
						iVar2 = unk_0xF8E1DE22DEB7E100(iVar1);
						iLocal_139 = iVar2;
					}
				}
			}
		}
	}
}

var func_800()
{
	if (unk_0x765F6FEEFF39224F(func_801()))
	{
		return func_801();
	}
	return func_268();
}

var func_801()
{
	return Global_2359302.f_3;
}

bool func_802()
{
	return unk_0x0E4018692D92041D(Global_2359302, 11);
}

int func_803()
{
	var uVar0;
	
	func_808(&uVar0);
	if (Global_1312844 == 0)
	{
		if (!unk_0xB331FCEB94EB05C8())
		{
			return 1;
		}
	}
	if (func_807())
	{
		return 1;
	}
	if (Global_2460852)
	{
		return 1;
	}
	if (func_806())
	{
		return 1;
	}
	if (func_805(157))
	{
		if (!func_804())
		{
			return 1;
		}
	}
	if (func_805(155))
	{
		return 1;
	}
	if (!unk_0x43E505744A9B715D())
	{
		return 1;
	}
	if (func_74() != 0)
	{
		if (unk_0x1BCDA92AD0A7835B(func_74()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_804()
{
	return Global_2448756.f_586;
}

int func_805(int iParam0)
{
	if (unk_0x3AE20F34FEE6C258(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_806()
{
	return Global_2458613;
}

bool func_807()
{
	return Global_2448756.f_581;
}

void func_808(var uParam0)
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
					func_809(iVar0);
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

void func_809(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x286A5F0670063839(1, iParam0, &vVar0, 3))
	{
		if (func_983(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x378BD4B3881338C2(vVar0.y);
			if (unk_0x765F6FEEFF39224F(iVar1))
			{
				if (unk_0xF0D230FB550CD6EB(iVar1, 0))
				{
					iVar2 = unk_0xF2C96862595654B4(iVar1, 0);
					if (unk_0x8F6C3DD0BB146CA3(iVar2, vVar0.z) && unk_0xE36862B47CD70685())
					{
						if (func_810(iVar2, &bVar3))
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

int func_810(int iParam0, var uParam1)
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

int func_811(bool bParam0)
{
	if (func_815(1))
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
		if (func_92() == func_29() || !func_983(func_92(), 0, 1))
		{
			return 1;
		}
	}
	if (!func_743(unk_0x95B959F18401C09A()))
	{
		if (func_814(unk_0x95B959F18401C09A()) && func_812())
		{
			return 1;
		}
	}
	return 0;
}

int func_812()
{
	switch (func_112(func_813(unk_0x95B959F18401C09A())))
	{
		case 11:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_813(int iParam0)
{
	if (iParam0 != func_29() && func_983(iParam0, 1, 1))
	{
		return Global_2424047[iParam0 /*416*/].f_309.f_14;
	}
	return -1;
}

int func_814(int iParam0)
{
	if (iParam0 != func_29() && func_983(iParam0, 1, 1))
	{
		return unk_0x0E4018692D92041D(Global_2424047[iParam0 /*416*/].f_309, 4);
	}
	return 0;
}

int func_815(bool bParam0)
{
	bool bVar0;
	
	if (!func_173(1))
	{
		bVar0 = false;
		if (Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_57 != func_29())
		{
			if (func_983(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_57, 0, 1))
			{
				if ((Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_24 == 4 || Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_24 == 8) || Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_24 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_816(func_63(unk_0x95B959F18401C09A())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_236(31);
				if (func_96(func_63(unk_0x95B959F18401C09A())))
				{
					func_236(81);
				}
				if (Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_57 != func_29() && unk_0xC4DEA49C5B465481(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_57))
				{
					Global_1625024 = func_244(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_57, -2, 0, 0, 0);
					if (!func_45(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_57))
					{
						func_236(88);
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

int func_816(int iParam0)
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

void func_817()
{
	wait(0);
}

void func_818()
{
	int iVar0;
	int iVar1;
	
	if (!func_883(&iLocal_113))
	{
		unk_0x65BA35D6D61F1574("BIKER_MP_MUSIC_STOP");
	}
	unk_0x1549A34EB0282877(0);
	func_519(&iLocal_113);
	if (unk_0xB331FCEB94EB05C8())
	{
		if (unk_0xC408CC95C7202D67(unk_0x33CD235DF1E6A94E()) == uLocal_150[0] || unk_0xC408CC95C7202D67(unk_0x33CD235DF1E6A94E()) == uLocal_150[1])
		{
			unk_0x0648A75D3F60E864(unk_0x33CD235DF1E6A94E(), iLocal_151);
		}
	}
	if (unk_0xB331FCEB94EB05C8())
	{
		if (func_44(unk_0xBF4289280FD7809A(), 9))
		{
			unk_0x9611832841071B69(unk_0x33CD235DF1E6A94E(), false);
			func_82(9);
		}
	}
	func_51();
	Global_2528542.f_264 = 0;
	func_881(Global_1669366, -1, -1, -1, -1);
	func_822(1, 0);
	func_821();
	func_528();
	func_67();
	if (unk_0x5C415D10D5CBF689(unk_0x33CD235DF1E6A94E()))
	{
		iVar0 = unk_0x6EE765D5B613AB2A(unk_0x33CD235DF1E6A94E());
		iVar1 = unk_0x541D5C57194E73C4(iVar0);
		if (func_523(iVar1))
		{
			unk_0x282BAD470C323153(iVar0, 0);
		}
	}
	func_575(0);
	func_820();
	func_819();
	unk_0x5894DC159447E10A();
}

void func_819()
{
	unk_0xCEE359851F3C8198(uLocal_150[0]);
	unk_0xCEE359851F3C8198(uLocal_150[1]);
}

void func_820()
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

void func_821()
{
	struct<20> Var0;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573892 = { Var0 };
	Global_1573892.f_13 = func_29();
	if (unk_0x0E4018692D92041D(Global_1573343, 3))
	{
		unk_0xCE689A8E8C42ED78(&Global_1573343, 3);
	}
}

void func_822(bool bParam0, int iParam1)
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
		func_879();
		unk_0xCE689A8E8C42ED78(&(Global_1669357.f_3), 4);
	}
	if ((func_143() && iParam1 != 0) && Global_262145.f_16856)
	{
		if (Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_33 == 190 || Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_33 == 192)
		{
			func_861(unk_0x95B959F18401C09A(), iParam1, 1, 0);
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
		if (!unk_0x0E4018692D92041D(Global_1574637.f_1, 14) && !func_120(unk_0x95B959F18401C09A()))
		{
			func_720(0);
		}
	}
	else if (func_859(unk_0x95B959F18401C09A()) != -1)
	{
		func_733(-1);
	}
	func_858(func_29());
	if (func_231(16))
	{
		func_857(16);
	}
	func_854(0);
	func_729(-1);
	func_821();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_853(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_851(iVar1);
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
	iVar2 = func_106();
	if ((func_88(iVar2) || iVar2 == 205) || iVar2 == 210)
	{
		func_850(-1);
	}
	else if (((iVar2 == 201 || iVar2 == 200) || iVar2 == 179) || func_142(iVar2))
	{
		func_847(-1, 1);
	}
	else if (((((func_105(iVar2) || func_846(iVar2)) || func_845(iVar2)) || func_132(iVar2)) || func_131(iVar2)) || func_130(iVar2))
	{
	}
	else
	{
		func_847(-1, 1);
	}
	func_772(19);
	func_772(20);
	func_772(21);
	func_772(22);
	func_772(27);
	func_857(3);
	func_857(4);
	func_857(7);
	func_844();
	if (func_115(unk_0x95B959F18401C09A()))
	{
		func_843(0);
	}
	func_772(29);
	Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_57 = func_29();
	if (Global_2528542.f_4889.f_37 != 0)
	{
		Global_2528542.f_4889.f_37 = 0;
	}
	if (bParam0)
	{
		func_836();
	}
	if (!func_120(unk_0x95B959F18401C09A()))
	{
		func_835();
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
		func_834("IMPEXP_SELFDES", 0);
		func_825("IMPEXP_SELFDES");
		unk_0xCE689A8E8C42ED78(&(Global_1669357.f_3), 8);
	}
	func_823(iVar2, 0);
}

void func_823(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x0E4018692D92041D(Global_1669357.f_3, 9))
		{
			unk_0xDEFB5E2E5CBD460A(func_824(iParam0));
			unk_0x8950ED5730F62EE8(&(Global_1669357.f_3), 9);
		}
	}
	else if (unk_0x0E4018692D92041D(Global_1669357.f_3, 9))
	{
		unk_0x7CED302277C0F3D3(func_824(iParam0));
		unk_0xCE689A8E8C42ED78(&(Global_1669357.f_3), 9);
	}
}

char* func_824(int iParam0)
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

void func_825(char* sParam0)
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
					func_827();
					Global_106565.f_14135[iVar0 /*104*/].f_99[Global_14553] = 0;
					if (func_826(iVar0))
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

int func_826(int iParam0)
{
	if ((Global_106565.f_14135[iParam0 /*104*/].f_99[0] == 1 || Global_106565.f_14135[iParam0 /*104*/].f_99[1] == 1) || Global_106565.f_14135[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_827()
{
	if (func_833(14))
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
		Global_14553 = func_828();
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

var func_828()
{
	func_829();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_829()
{
	int iVar0;
	
	if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
	{
		if (func_832(Global_106565.f_2357.f_539.f_4321) != unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()))
		{
			iVar0 = func_831(unk_0x33CD235DF1E6A94E());
			if (func_830(iVar0) && (!func_833(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_830(Global_106565.f_2357.f_539.f_4321))
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

bool func_830(int iParam0)
{
	return iParam0 < 3;
}

int func_831(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		iVar1 = unk_0x541D5C57194E73C4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_832(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_832(int iParam0)
{
	if (func_830(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_833(int iParam0)
{
	return Global_36425 == iParam0;
}

void func_834(char* sParam0, int iParam1)
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

void func_835()
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

void func_836()
{
	unk_0xAEA0BFBDA0CDA688(&(Global_2405071.f_24), &Global_2409313, 2);
	unk_0xAEA0BFBDA0CDA688(&(Global_2405071.f_26), &Global_2409315, 19);
	func_841();
	func_837(1, 1, 0);
	func_52();
}

void func_837(bool bParam0, bool bParam1, bool bParam2)
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
		func_840();
	}
	if (!bParam2)
	{
		func_54(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0);
	}
	func_839(0);
	func_838();
}

void func_838()
{
	struct<6> Var0;
	
	if (Global_2405071.f_485.f_1 == unk_0x8C40DC84EDF05997())
	{
		Global_2405071.f_485 = { Var0 };
	}
}

void func_839(bool bParam0)
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

void func_840()
{
	unk_0xAEA0BFBDA0CDA688(&(Global_2405071.f_363), &Global_2409652, 121);
}

void func_841()
{
	func_842();
	Global_2405071.f_2250 = 0;
}

void func_842()
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

void func_843(bool bParam0)
{
	if (bParam0)
	{
		if (!func_107(unk_0x95B959F18401C09A(), 9))
		{
			if (func_113(unk_0x95B959F18401C09A()) != 0)
			{
				func_122(9);
			}
		}
	}
	else if (func_107(unk_0x95B959F18401C09A(), 9))
	{
		func_772(9);
	}
}

void func_844()
{
	if (func_574(unk_0x95B959F18401C09A()))
	{
		func_772(25);
	}
}

int func_845(int iParam0)
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

int func_846(int iParam0)
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

void func_847(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_106();
	}
	if (iParam0 > 0)
	{
		if (func_175() != func_29())
		{
			if (func_744(unk_0x95B959F18401C09A()) == unk_0x95B959F18401C09A())
			{
				Global_2506960.f_93[func_849(iParam0)] = 1;
			}
		}
		iVar0 = func_849(159);
		if (func_848(iVar0, Global_262145.f_12497, bParam1))
		{
			func_7(&(Global_2506960[iVar0 /*2*/]));
			func_4(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_849(157);
		if (func_848(iVar0, Global_262145.f_12497, bParam1))
		{
			func_7(&(Global_2506960[iVar0 /*2*/]));
			func_4(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_849(148);
		if (func_848(iVar0, Global_262145.f_12497, bParam1))
		{
			func_7(&(Global_2506960[iVar0 /*2*/]));
			func_4(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_849(164);
		if (func_848(iVar0, Global_262145.f_12497, bParam1))
		{
			func_7(&(Global_2506960[iVar0 /*2*/]));
			func_4(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_849(142);
		if (func_848(iVar0, Global_262145.f_12497, bParam1))
		{
			func_7(&(Global_2506960[iVar0 /*2*/]));
			func_4(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_849(152);
		if (func_848(iVar0, Global_262145.f_12497, bParam1))
		{
			func_7(&(Global_2506960[iVar0 /*2*/]));
			func_4(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_849(166);
		if (func_848(iVar0, Global_262145.f_12497, bParam1))
		{
			func_7(&(Global_2506960[iVar0 /*2*/]));
			func_4(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_849(170);
		if (func_848(iVar0, Global_262145.f_12497, bParam1))
		{
			func_7(&(Global_2506960[iVar0 /*2*/]));
			func_4(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_849(173);
		if (func_848(iVar0, Global_262145.f_12497, bParam1))
		{
			func_7(&(Global_2506960[iVar0 /*2*/]));
			func_4(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_849(179);
		if (func_848(iVar0, Global_262145.f_12497, bParam1))
		{
			func_7(&(Global_2506960[iVar0 /*2*/]));
			func_4(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_849(200);
		if (func_848(iVar0, Global_262145.f_12497, bParam1))
		{
			func_7(&(Global_2506960[iVar0 /*2*/]));
			func_4(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_849(201);
		if (func_848(iVar0, Global_262145.f_12497, bParam1))
		{
			func_7(&(Global_2506960[iVar0 /*2*/]));
			func_4(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_849(182);
		if (func_848(iVar0, Global_262145.f_12498, 0))
		{
			func_7(&(Global_2506960[iVar0 /*2*/]));
			func_4(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_849(183);
		if (func_848(iVar0, Global_262145.f_12498, 0))
		{
			func_7(&(Global_2506960[iVar0 /*2*/]));
			func_4(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_849(185);
		if (func_848(iVar0, Global_262145.f_12498, 0))
		{
			func_7(&(Global_2506960[iVar0 /*2*/]));
			func_4(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_849(186);
		if (func_848(iVar0, Global_262145.f_12498, 0))
		{
			func_7(&(Global_2506960[iVar0 /*2*/]));
			func_4(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_849(180);
		if (func_848(iVar0, Global_262145.f_12498, 0))
		{
			func_7(&(Global_2506960[iVar0 /*2*/]));
			func_4(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_849(195);
		if (func_848(iVar0, Global_262145.f_12498, 0))
		{
			func_7(&(Global_2506960[iVar0 /*2*/]));
			func_4(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_849(197);
		if (func_848(iVar0, Global_262145.f_12498, 0))
		{
			func_7(&(Global_2506960[iVar0 /*2*/]));
			func_4(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_849(198);
		if (func_848(iVar0, Global_262145.f_12498, 0))
		{
			func_7(&(Global_2506960[iVar0 /*2*/]));
			func_4(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_849(207);
		if (func_848(iVar0, Global_262145.f_12498, 0))
		{
			func_7(&(Global_2506960[iVar0 /*2*/]));
			func_4(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_849(208);
		if (func_848(iVar0, Global_262145.f_12498, 0))
		{
			func_7(&(Global_2506960[iVar0 /*2*/]));
			func_4(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_849(209);
		if (func_848(iVar0, Global_262145.f_12498, 0))
		{
			func_7(&(Global_2506960[iVar0 /*2*/]));
			func_4(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_849(214);
		if (func_848(iVar0, Global_262145.f_12498, 0))
		{
			func_7(&(Global_2506960[iVar0 /*2*/]));
			func_4(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_849(215);
		if (func_848(iVar0, Global_262145.f_12498, 0))
		{
			func_7(&(Global_2506960[iVar0 /*2*/]));
			func_4(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_849(216);
		if (func_848(iVar0, Global_262145.f_12498, 0))
		{
			func_7(&(Global_2506960[iVar0 /*2*/]));
			func_4(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_849(217);
		if (func_848(iVar0, Global_262145.f_12498, 0))
		{
			func_7(&(Global_2506960[iVar0 /*2*/]));
			func_4(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_849(218);
		if (func_848(iVar0, Global_262145.f_12498, 0))
		{
			func_7(&(Global_2506960[iVar0 /*2*/]));
			func_4(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_849(219);
		if (func_848(iVar0, Global_262145.f_12498, 0))
		{
			func_7(&(Global_2506960[iVar0 /*2*/]));
			func_4(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_849(220);
		if (func_848(iVar0, Global_262145.f_12498, 0))
		{
			func_7(&(Global_2506960[iVar0 /*2*/]));
			func_4(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_849(221);
		if (func_848(iVar0, Global_262145.f_12498, 0))
		{
			func_7(&(Global_2506960[iVar0 /*2*/]));
			func_4(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_848(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_107(unk_0x95B959F18401C09A(), 19) && !func_107(unk_0x95B959F18401C09A(), 20)) && !func_107(unk_0x95B959F18401C09A(), 9))
		{
			return 0;
		}
	}
	if (Global_2506960.f_93[iParam0] == 1 && func_5(&(Global_2506960[iParam0 /*2*/])))
	{
		if (func_22(&(Global_2506960[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2506960.f_93[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_849(int iParam0)
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

void func_850(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_106();
	}
	if (iParam0 > 0)
	{
		if (func_175() != func_29())
		{
			Global_2506960.f_93[func_849(iParam0)] = 1;
		}
		iVar0 = func_849(155);
		if (func_848(iVar0, Global_262145.f_12498, 0))
		{
			func_7(&(Global_2506960[iVar0 /*2*/]));
			func_4(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_849(163);
		if (func_848(iVar0, Global_262145.f_12498, 0))
		{
			func_7(&(Global_2506960[iVar0 /*2*/]));
			func_4(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_849(160);
		if (func_848(iVar0, Global_262145.f_12498, 0))
		{
			func_7(&(Global_2506960[iVar0 /*2*/]));
			func_4(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_849(153);
		if (func_848(iVar0, Global_262145.f_12498, 0))
		{
			func_7(&(Global_2506960[iVar0 /*2*/]));
			func_4(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_849(162);
		if (func_848(iVar0, Global_262145.f_12498, 0))
		{
			func_7(&(Global_2506960[iVar0 /*2*/]));
			func_4(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_849(154);
		if (func_848(iVar0, Global_262145.f_12498, 0))
		{
			func_7(&(Global_2506960[iVar0 /*2*/]));
			func_4(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_849(171);
		if (func_848(iVar0, Global_262145.f_12498, 0))
		{
			func_7(&(Global_2506960[iVar0 /*2*/]));
			func_4(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_849(172);
		if (func_848(iVar0, Global_262145.f_12498, 0))
		{
			func_7(&(Global_2506960[iVar0 /*2*/]));
			func_4(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_849(199);
		if (func_848(iVar0, Global_262145.f_12498, 0))
		{
			func_7(&(Global_2506960[iVar0 /*2*/]));
			func_4(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_849(194);
		if (func_848(iVar0, Global_262145.f_12498, 0))
		{
			func_7(&(Global_2506960[iVar0 /*2*/]));
			func_4(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_849(193);
		if (func_848(iVar0, Global_262145.f_12498, 0))
		{
			func_7(&(Global_2506960[iVar0 /*2*/]));
			func_4(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_849(210);
		if (func_848(iVar0, Global_262145.f_12498, 0))
		{
			func_7(&(Global_2506960[iVar0 /*2*/]));
			func_4(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_849(205);
		if (func_848(iVar0, Global_262145.f_12498, 0))
		{
			func_7(&(Global_2506960[iVar0 /*2*/]));
			func_4(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_849(189);
		if (func_848(iVar0, Global_262145.f_12498, 0))
		{
			func_7(&(Global_2506960[iVar0 /*2*/]));
			func_4(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_849(211);
		if (func_848(iVar0, Global_262145.f_12498, 0))
		{
			func_7(&(Global_2506960[iVar0 /*2*/]));
			func_4(&(Global_2506960[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_851(int iParam0)
{
	if (!func_11(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_334[iParam0 /*3*/], func_852(), 0))
	{
		Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_334[iParam0 /*3*/] = { func_852() };
	}
	if (!func_11(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_321[iParam0 /*3*/], func_852(), 0))
	{
		Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_321[iParam0 /*3*/] = { func_852() };
	}
}

Vector3 func_852()
{
	vector3 vVar0;
	
	return vVar0;
}

void func_853(int iParam0)
{
	if (!func_11(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_150[iParam0 /*3*/], func_852(), 0))
	{
		Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_150[iParam0 /*3*/] = { func_852() };
	}
	if (!func_11(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_125[iParam0 /*3*/], func_852(), 0))
	{
		Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_125[iParam0 /*3*/] = { func_852() };
	}
}

void func_854(bool bParam0)
{
	if (bParam0)
	{
		if (!func_767(unk_0x95B959F18401C09A(), 14))
		{
			func_856(14);
		}
	}
	else if (func_767(unk_0x95B959F18401C09A(), 14))
	{
		func_855(14);
	}
}

void func_855(int iParam0)
{
	unk_0xCE689A8E8C42ED78(&(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_5), iParam0);
}

void func_856(int iParam0)
{
	unk_0x8950ED5730F62EE8(&(Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_5), iParam0);
}

void func_857(int iParam0)
{
	unk_0xCE689A8E8C42ED78(&(Global_2528542.f_4889.f_41), iParam0);
}

void func_858(int iParam0)
{
	if (func_41(unk_0x95B959F18401C09A()))
	{
		if (unk_0x95B959F18401C09A() != iParam0)
		{
			if (Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_481 != iParam0)
			{
				Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_481 = iParam0;
				if (iParam0 != func_29())
				{
				}
			}
		}
	}
}

int func_859(int iParam0)
{
	if (func_860(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_32;
	}
	return -1;
}

int func_860(int iParam0, int iParam1)
{
	if (Global_1626536[iParam0 /*603*/].f_11.f_32 != -1 || (iParam1 && Global_1626536[iParam0 /*603*/].f_11.f_33 != -1))
	{
		return 1;
	}
	return 0;
}

void func_861(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (func_331(iParam0, iParam1) && func_878(iParam0, iParam1))
	{
		iVar0 = func_330(iParam0, iParam1);
		func_865(iVar0, bParam2, bParam3);
		func_862(iVar0, 1);
	}
}

void func_862(int iParam0, bool bParam1)
{
	if (!func_864(iParam0))
	{
		return;
	}
	func_317(func_863(iParam0), bParam1, -1, 1);
	Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_177[iParam0 /*12*/].f_6 = bParam1;
}

int func_863(int iParam0)
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

bool func_864(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 6);
}

void func_865(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = false;
	iVar2 = func_626(unk_0x95B959F18401C09A(), iParam0);
	if (!bParam1)
	{
		func_877(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2505932[iParam0];
		iVar0 = func_876(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1671153 = -1;
		}
		func_875(iParam0, 0, bParam2);
	}
	else if (func_873(iParam0, bParam2))
	{
		iVar0 = func_872(iVar2, 0);
		iVar3 = func_703(unk_0x95B959F18401C09A(), iVar2);
		iVar4 = func_871(iVar2, bParam2);
		iVar5 = func_872(iVar2, bParam2);
		fVar6 = (to_float(iVar5) / to_float(iVar4));
		iVar0 = (iVar0 - round((to_float(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_870(iVar2) && func_869(unk_0x95B959F18401C09A(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_877(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_868(unk_0x95B959F18401C09A(), iVar2) > 0)
		{
			func_867(iParam0, (Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_177[iParam0 /*12*/].f_2 - (func_871(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_872(iVar2, bParam2) / func_868(unk_0x95B959F18401C09A(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_870(iVar2) && func_869(unk_0x95B959F18401C09A(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_866(unk_0x95B959F18401C09A(), iVar2, iVar0, bParam2);
}

void func_866(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return;
	}
	if (func_324(iParam1))
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

void func_867(int iParam0, int iParam1)
{
	if (iParam0 != -1 && iParam1 != Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_177[iParam0 /*12*/].f_2)
	{
		Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_177[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_868(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	if (func_324(iParam1))
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

int func_869(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	if (func_324(iParam1) && func_870(iParam1))
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

bool func_870(int iParam0)
{
	return func_169(iParam0) == 5;
}

int func_871(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_169(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_16827;
			if (func_329(unk_0x95B959F18401C09A(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16832;
			}
			break;
		
		case 3:
			uVar0 = Global_262145.f_16826;
			if (func_329(unk_0x95B959F18401C09A(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16831;
			}
			break;
		
		case 4:
			uVar0 = Global_262145.f_16825;
			if (func_329(unk_0x95B959F18401C09A(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16830;
			}
			break;
		
		case 0:
			uVar0 = Global_262145.f_16823;
			if (func_329(unk_0x95B959F18401C09A(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16828;
			}
			break;
		
		case 2:
			uVar0 = Global_262145.f_16824;
			if (func_329(unk_0x95B959F18401C09A(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16829;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_262145.f_20948;
				if (func_329(unk_0x95B959F18401C09A(), iParam0, 0))
				{
					uVar0 = Global_262145.f_20949;
				}
			}
			else
			{
				uVar0 = Global_262145.f_20932;
				if (func_329(unk_0x95B959F18401C09A(), iParam0, 0))
				{
					uVar0 = Global_262145.f_20933;
				}
			}
			break;
	}
	return uVar0;
}

int func_872(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_169(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_16808;
			if (func_329(unk_0x95B959F18401C09A(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16817);
			}
			if (func_329(unk_0x95B959F18401C09A(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16822);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_16809;
			if (func_329(unk_0x95B959F18401C09A(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16816);
			}
			if (func_329(unk_0x95B959F18401C09A(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16821);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_16810;
			if (func_329(unk_0x95B959F18401C09A(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16815);
			}
			if (func_329(unk_0x95B959F18401C09A(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16820);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_16811;
			if (func_329(unk_0x95B959F18401C09A(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16813);
			}
			if (func_329(unk_0x95B959F18401C09A(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16818);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_16812;
			if (func_329(unk_0x95B959F18401C09A(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16814);
			}
			if (func_329(unk_0x95B959F18401C09A(), iParam0, 1))
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
			if (func_329(unk_0x95B959F18401C09A(), iParam0, 0))
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
			if (func_329(unk_0x95B959F18401C09A(), iParam0, 1))
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
			if (func_869(unk_0x95B959F18401C09A(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_873(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_318(15384, -1, -1);
	}
	return func_318(func_874(iParam0), -1, -1);
}

int func_874(int iParam0)
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

void func_875(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		func_317(15384, bParam1, -1, 1);
		return;
	}
	func_317(func_874(iParam0), bParam1, -1, 1);
}

int func_876(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2505932[iParam0];
	iVar1 = func_626(unk_0x95B959F18401C09A(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_2505939;
	}
	if (func_870(iVar1))
	{
		if (func_869(unk_0x95B959F18401C09A(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_877(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_2505939 = iParam1;
		return;
	}
	Global_2505932[iParam0] = iParam1;
}

int func_878(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_331(iParam0, iParam1))
	{
		iVar0 = func_330(iParam0, iParam1);
		if (Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/].f_4 > 0 && Global_1589819[iParam0 /*818*/].f_273.f_177[iVar0 /*12*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_879()
{
	unk_0xCE689A8E8C42ED78(&(Global_2528542.f_1728), 28);
	unk_0xCE689A8E8C42ED78(&(Global_2528542.f_1728), 29);
	func_880(24);
}

void func_880(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xCE689A8E8C42ED78(&(Global_2528542.f_4889.f_7[iVar0]), iVar1);
}

void func_881(struct<14> Param0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	char* sVar0;
	struct<15> Var1;
	struct<19> Var2;
	struct<19> Var3;
	struct<16> Var4;
	struct<17> Var5;
	struct<15> Var6;
	struct<17> Var7;
	struct<17> Var8;
	
	sVar0 = unk_0xD178EF744F20B712();
	if (unk_0xB331FCEB94EB05C8())
	{
		if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_CARJACKING"))
		{
			Var1 = { Param0 };
			Var1.f_14 = iParam1;
			unk_0xB3A8B5C5D159930A(&Var1);
		}
		else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_ROB_SHOP"))
		{
			Var2 = { Param0 };
			Var2.f_14 = Global_1669366.f_14;
			Var2.f_15 = iParam1;
			Var2.f_16 = iParam2;
			Var2.f_17 = iParam3;
			Var2.f_18 = iParam4;
			unk_0x73A832DC6FF54083(&Var2);
		}
		else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_COLLECT_MONEY"))
		{
			Var3 = { Param0 };
			Var3.f_14 = Global_1669366.f_14;
			Var3.f_15 = iParam1;
			Var3.f_16 = iParam2;
			Var3.f_17 = iParam3;
			Var3.f_18 = iParam4;
			unk_0x51B4477365DBB021(&Var3);
		}
		else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_FIVESTAR"))
		{
			Var4 = { Param0 };
			Var4.f_14 = Global_1669366.f_14;
			Var4.f_15 = iParam1;
			unk_0x809390DDCB8AA89D(&Var4);
		}
		else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_FINDERSKEEPERS"))
		{
			Var5 = { Param0 };
			Var5.f_14 = Global_1669366.f_14;
			Var5.f_15 = iParam1;
			Var5.f_16 = iParam2;
			unk_0x8E3F14FE8F709132(&Var5);
		}
		else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_POINT_TO_POINT"))
		{
			Var6 = { Param0 };
			Var6.f_14 = Global_1669366.f_14;
			unk_0x31B697523E7A273B(&Var6);
		}
		else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_CASHING_OUT"))
		{
			Var7 = { Param0 };
			Var7.f_14 = iParam1;
			Var7.f_15 = (to_float(iParam1) / to_float(iParam2));
			Var7.f_16 = iParam3;
			unk_0x8A4B9AF574840B87(&Var7);
		}
		else if (unk_0xCE3CFF625BEBAA04(sVar0, "GB_SALVAGE"))
		{
			Var8 = { Param0 };
			Var8.f_14 = iParam1;
			Var8.f_15 = iParam2;
			Var8.f_16 = Global_1669366.f_14;
			unk_0xACA839D7D231FE14(&Var8);
		}
	}
	func_882();
}

void func_882()
{
	struct<18> Var0;
	
	Global_1669366 = { Var0 };
}

bool func_883(var uParam0)
{
	return unk_0x0E4018692D92041D(*uParam0, 0);
}

void func_884(bool bParam0, bool bParam1)
{
	bool bVar0;
	var uVar1;
	
	if (!func_734(0))
	{
		uVar1 = func_938(func_25(), bParam0, bVar0, bParam1);
		Global_1669366.f_2 = Local_175.f_33;
		Global_1669366.f_3 = Local_175.f_34;
		func_885(bParam0, uVar1, 0, 0, -1, -1, -1, -1, -1, 0);
		func_710(0);
	}
}

void func_885(bool bParam0, var uParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
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
		iVar0 = func_411(unk_0x95B959F18401C09A());
		Global_1669645.f_4 = func_666();
		Global_1669645.f_5 = func_665();
		if (func_116(unk_0x95B959F18401C09A()) || func_117(unk_0x95B959F18401C09A()))
		{
			Global_1669645.f_6 = 1;
		}
		else
		{
			Global_1669645.f_6 = 0;
		}
		Global_1669645.f_1 = func_934(bParam9);
		Global_1669645.f_8 = unk_0xEF4753434B24594D();
		Global_1669645.f_9 = func_706(bParam0);
		Global_1669645.f_10 = uParam1;
		Global_1669645.f_17 = Global_1669645.f_2;
		Global_1669645.f_18 = Global_1669645.f_2;
		Global_1669645.f_19 = func_698();
		Global_1669645.f_21 = (Global_1669645.f_8 - Global_1669645.f_7);
		if (func_278(unk_0x95B959F18401C09A(), 1))
		{
			Global_1669645.f_23 = func_706(func_99(1));
		}
		Global_1669645.f_24 = func_933(unk_0x95B959F18401C09A());
		Global_1669645.f_28 = func_707(unk_0x95B959F18401C09A());
		if (Global_1669645.f_24 > 2)
		{
			Global_1669645.f_24 = 2;
		}
		func_931(iVar0);
	}
	else
	{
		iVar0 = func_63(unk_0x95B959F18401C09A());
	}
	if (func_96(iVar0))
	{
		Global_1669384.f_2 = func_666();
		Global_1669384.f_3 = func_665();
		Global_1669384.f_50 = iParam4;
		Global_1669384.f_51 = iParam5;
		Global_1669384.f_10 = unk_0xEF4753434B24594D();
		Global_1669384.f_20 = (Global_1669384.f_10 - Global_1669384.f_9);
		Global_1669384.f_12 = uParam1;
		Global_1669384.f_19 = func_927(iVar0, bParam0, func_930(bParam3));
		if (bParam0)
		{
			Global_1669384.f_11 = 1;
		}
		else
		{
			Global_1669384.f_11 = 0;
		}
		if ((func_115(unk_0x95B959F18401C09A()) || func_114(unk_0x95B959F18401C09A())) || func_118(unk_0x95B959F18401C09A()))
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
			Global_1669384.f_45 = func_703(func_175(), iParam2);
			Global_1669384.f_47 = iParam7;
			Global_1669384.f_46 = iParam6;
			Global_1669384.f_52 = func_926(func_175(), iParam2);
		}
		func_924(iVar0);
	}
	else if (func_104(iVar0))
	{
		Global_1669438.f_2 = func_666();
		Global_1669438.f_3 = func_665();
		Global_1669438.f_10 = unk_0xEF4753434B24594D();
		Global_1669438.f_19 = (Global_1669438.f_10 - Global_1669438.f_9);
		Global_1669438.f_12 = uParam1;
		if (bParam0)
		{
			Global_1669438.f_11 = 1;
		}
		else
		{
			Global_1669438.f_11 = 0;
		}
		if ((func_115(unk_0x95B959F18401C09A()) || func_114(unk_0x95B959F18401C09A())) || func_118(unk_0x95B959F18401C09A()))
		{
			Global_1669438.f_8 = 1;
		}
		else
		{
			Global_1669438.f_8 = 0;
		}
		func_922(iVar0);
	}
	else if (func_132(iVar0))
	{
		Global_1669501.f_2 = func_666();
		Global_1669501.f_3 = func_665();
		Global_1669501.f_9 = unk_0xEF4753434B24594D();
		Global_1669501.f_18 = (Global_1669501.f_9 - Global_1669501.f_8);
		Global_1669501.f_11 = uParam1;
		Global_1669501.f_7 = func_698();
		Global_1669501.f_42 = func_700(func_49(), 5);
		iVar1 = unk_0x95B959F18401C09A();
		iVar2 = func_155(iVar1);
		Global_1669501.f_28 = iVar2;
		Global_1669501.f_29 = func_706((func_633(iVar1) || func_632(iVar1)));
		Global_1669501.f_30 = func_706(func_921(iVar1));
		Global_1669501.f_32 = func_706(func_630(iVar1));
		Global_1669501.f_33 = func_706(func_631(iVar1));
		Global_1669501.f_34 = func_706(func_920(iVar1));
		Global_1669501.f_35 = func_706(func_629(0, iVar1) == 1);
		Global_1669501.f_36 = func_706(func_919(iVar1));
		Global_1669501.f_37 = func_706(func_918(iVar1));
		Global_1669501.f_38 = func_706(func_917(iVar1));
		Global_1669501.f_39 = func_706(func_329(iVar1, iVar2, 0));
		Global_1669501.f_40 = func_706(func_329(iVar1, iVar2, 2));
		Global_1669501.f_41 = func_706(func_329(iVar1, iVar2, 1));
		if (func_916(iVar1))
		{
			Global_1669501.f_31 = 2;
		}
		else if (func_915(iVar1))
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
		if ((func_115(unk_0x95B959F18401C09A()) || func_114(unk_0x95B959F18401C09A())) || func_118(unk_0x95B959F18401C09A()))
		{
			Global_1669501.f_6 = 1;
		}
		else
		{
			Global_1669501.f_6 = 0;
		}
		Global_1669501.f_21 = -2;
		Global_1669501.f_22 = -2;
		func_913(iVar0);
	}
	else if (func_131(iVar0))
	{
		Global_1669545.f_2 = func_666();
		Global_1669545.f_3 = func_665();
		if ((func_115(unk_0x95B959F18401C09A()) || func_114(unk_0x95B959F18401C09A())) || func_118(unk_0x95B959F18401C09A()))
		{
			Global_1669545.f_6 = 1;
		}
		else
		{
			Global_1669545.f_6 = 0;
		}
		Global_1669545.f_9 = unk_0xEF4753434B24594D();
		Global_1669545.f_10 = func_706(bParam0);
		Global_1669545.f_11 = uParam1;
		Global_1669545.f_17 = func_699(func_92());
		Global_1669545.f_18 = (Global_1669545.f_9 - Global_1669545.f_8);
		Global_1669545.f_20 = iParam8;
		Global_1669545.f_21 = -2;
		Global_1669545.f_22 = -2;
		Global_1669545.f_27 = func_912();
		Global_1669545.f_29 = func_140(6107, -1, 0);
		Global_1669545.f_30 = func_140(6103, -1, 0);
		Global_1669545.f_31 = func_140(6104, -1, 0);
		Global_1669545.f_32 = func_140(6106, -1, 0);
		Global_1669545.f_33 = func_140(6105, -1, 0);
		Global_1669545.f_34 = func_140(6108, -1, 0);
		Global_1669545.f_36 = func_706(func_99(1));
		Global_1669545.f_37 = func_910();
		func_900();
		func_898(iVar0);
	}
	else if (func_130(iVar0))
	{
		Global_1669599.f_2 = func_666();
		Global_1669599.f_3 = func_665();
		if ((func_115(unk_0x95B959F18401C09A()) || func_114(unk_0x95B959F18401C09A())) || func_118(unk_0x95B959F18401C09A()))
		{
			Global_1669599.f_6 = 1;
		}
		else
		{
			Global_1669599.f_6 = 0;
		}
		Global_1669599.f_9 = unk_0xEF4753434B24594D();
		Global_1669599.f_10 = func_706(bParam0);
		Global_1669599.f_11 = uParam1;
		Global_1669599.f_18 = (Global_1669599.f_9 - Global_1669599.f_8);
		Global_1669599.f_20 = iParam8;
		Global_1669599.f_23 = Global_786547;
		Global_1669599.f_36 = Global_786547.f_1;
		Global_1669599.f_24 = func_140(6157, -1, 0);
		Global_1669599.f_25 = func_140(6162, -1, 0);
		Global_1669599.f_26 = func_140(6163, -1, 0);
		Global_1669599.f_27 = func_706((((func_697() || func_696()) || func_695()) || func_694(unk_0x95B959F18401C09A())));
		Global_1669599.f_28 = func_140(6164, -1, 0);
		Global_1669599.f_29 = func_706(func_693());
		Global_1669599.f_35 = -1;
		Global_1669599.f_38 = -1;
		Global_1669599.f_39 = Global_1669599.f_4;
		Global_1669599.f_40 = Global_1669599.f_5;
		Global_1669599.f_41 = func_666();
		Global_1669599.f_42 = func_706(func_99(1));
		Global_1669599.f_44 = Global_1669599.f_18;
		func_896(iVar0);
	}
	else if (func_125(iVar0))
	{
		if (Global_1669733.f_2 == -1)
		{
			Global_1669733.f_2 = func_666();
		}
		if (Global_1669733.f_3 == -1)
		{
			Global_1669733.f_3 = func_665();
		}
		if ((func_115(unk_0x95B959F18401C09A()) || func_114(unk_0x95B959F18401C09A())) || func_118(unk_0x95B959F18401C09A()))
		{
			Global_1669733.f_6 = 1;
		}
		else
		{
			Global_1669733.f_6 = 0;
		}
		Global_1669733.f_1 = func_934(0);
		Global_1669733.f_7 = func_698();
		Global_1669733.f_9 = unk_0xEF4753434B24594D();
		Global_1669733.f_10 = func_706(bParam0);
		Global_1669733.f_11 = uParam1;
		if (func_175() != -1)
		{
			Global_1669733.f_17 = func_692(func_175());
		}
		Global_1669733.f_18 = (Global_1669733.f_9 - Global_1669733.f_8);
		Global_1669733.f_19 = Global_2528542.f_6270;
		Global_1669733.f_28 = func_707(unk_0x95B959F18401C09A());
		Global_1669733.f_29 = func_706(func_895(unk_0x95B959F18401C09A()));
		Global_1669733.f_30 = func_706(func_894(unk_0x95B959F18401C09A()));
		Global_1669733.f_31 = func_674(unk_0x95B959F18401C09A());
		if (func_278(unk_0x95B959F18401C09A(), 1))
		{
			Global_1669733.f_33 = func_706(func_99(1));
		}
		if (Global_1669733.f_34 > 2)
		{
			Global_1669733.f_34 = 2;
		}
		func_892(iVar0);
	}
	else if (func_129(iVar0))
	{
		Global_1669680.f_2 = func_666();
		Global_1669680.f_3 = func_665();
		if ((func_115(unk_0x95B959F18401C09A()) || func_114(unk_0x95B959F18401C09A())) || func_118(unk_0x95B959F18401C09A()))
		{
			Global_1669680.f_6 = 1;
		}
		else
		{
			Global_1669680.f_6 = 0;
		}
		Global_1669680.f_1 = func_934(0);
		Global_1669680.f_9 = unk_0xEF4753434B24594D();
		Global_1669680.f_10 = func_706(bParam0);
		Global_1669680.f_11 = uParam1;
		Global_1669680.f_18 = (Global_1669680.f_9 - Global_1669680.f_8);
		Global_1669680.f_28 = func_707(unk_0x95B959F18401C09A());
		if (Global_1669680.f_28)
		{
			Global_1669680.f_29 = func_691(unk_0x95B959F18401C09A());
		}
		else
		{
			Global_1669680.f_29 = 0;
		}
		Global_1669680.f_30 = func_675(unk_0x95B959F18401C09A(), 4, -1);
		Global_1669680.f_31 = func_674(unk_0x95B959F18401C09A());
		Global_1669680.f_32 = func_706(func_673(unk_0x95B959F18401C09A()));
		Global_1669680.f_33 = func_706(func_672(unk_0x95B959F18401C09A()));
		Global_1669680.f_34 = func_706(func_671(unk_0x95B959F18401C09A()));
		Global_1669680.f_35 = func_706(func_670(unk_0x95B959F18401C09A()));
		Global_1669680.f_36 = func_669(unk_0x95B959F18401C09A());
		Global_1669680.f_37 = func_668(unk_0x95B959F18401C09A());
		Global_1669680.f_39 = func_667(unk_0x95B959F18401C09A());
		if (func_278(unk_0x95B959F18401C09A(), 1))
		{
			Global_1669680.f_41 = func_706(func_99(1));
		}
		if (Global_1669680.f_42 > 2)
		{
			Global_1669680.f_42 = 2;
		}
		func_890(iVar0);
	}
	else if (func_124(iVar0))
	{
		Global_1669817.f_2 = func_666();
		Global_1669817.f_3 = func_665();
		Global_1669817.f_4 = func_709(func_175());
		Global_1669817.f_5 = func_708(func_175());
		if ((func_115(unk_0x95B959F18401C09A()) || func_114(unk_0x95B959F18401C09A())) || func_118(unk_0x95B959F18401C09A()))
		{
			Global_1669817.f_6 = 1;
		}
		else
		{
			Global_1669817.f_6 = 0;
		}
		Global_1669817.f_7 = func_698();
		Global_1669817.f_9 = unk_0xEF4753434B24594D();
		Global_1669817.f_10 = func_706(bParam0);
		Global_1669817.f_11 = uParam1;
		Global_1669817.f_17 = func_692(func_92());
		Global_1669817.f_18 = (Global_1669817.f_9 - Global_1669817.f_8);
		Global_1669817.f_21 = 1;
		Global_1669817.f_22 = 1;
		Global_1669817.f_25 = func_889(unk_0x95B959F18401C09A());
		Global_1669817.f_27 = func_706(func_664(unk_0x95B959F18401C09A()));
		Global_1669817.f_28 = func_662(21, -1);
		Global_1669817.f_29 = func_706(func_888(unk_0x95B959F18401C09A()));
		func_886(iVar0);
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
		Global_1669366.f_8 = uParam1;
		if (Global_1669366.f_4 == 0)
		{
			if ((func_115(unk_0x95B959F18401C09A()) || func_114(unk_0x95B959F18401C09A())) || func_118(unk_0x95B959F18401C09A()))
			{
				Global_1669366.f_4 = 1;
			}
		}
	}
}

void func_886(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x1A0D4A6C336B7BC5(&Global_1669817);
	func_887();
}

void func_887()
{
	struct<31> Var0;
	
	Global_1669817 = { Var0 };
}

int func_888(int iParam0)
{
	if (iParam0 != func_29())
	{
		return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_362.f_2, 6);
	}
	return 0;
}

int func_889(int iParam0)
{
	if (func_63(iParam0) == 243)
	{
		return func_128(iParam0);
	}
	return -1;
}

void func_890(int iParam0)
{
	unk_0xFBA9F03E7B1497FB(&Global_1669680);
	func_891();
}

void func_891()
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

void func_892(int iParam0)
{
	unk_0x4C7E3C4ACCB2DED7(&Global_1669733);
	func_893();
}

void func_893()
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

bool func_894(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_316.f_1, 0);
}

bool func_895(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_316.f_1, 19);
}

void func_896(int iParam0)
{
	unk_0x04871872974BF74B(&Global_1669599);
	func_897();
}

void func_897()
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

void func_898(int iParam0)
{
	unk_0xAE0DE86DBA563924(&Global_1669545);
	func_899();
}

void func_899()
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

void func_900()
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
		iVar2 = (iVar0 + func_648(12));
		func_647(iVar2, &iVar1, 1);
		if (iVar1 >= 0)
		{
			if (Global_1323594[iVar1 /*141*/].f_66 != 0 && func_902(Global_1323594[iVar1 /*141*/].f_66, 1))
			{
				if (Global_2528542.f_887 != iVar1)
				{
					if (func_901(Global_1323594[iVar1 /*141*/].f_66))
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

int func_901(int iParam0)
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

int func_902(int iParam0, bool bParam1)
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
		if (!func_909())
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
		if ((((!func_908() && !func_907()) && !func_906()) && !func_905()) && !func_909())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xDB36A8F522CBC12D() || unk_0x4CE1DD5CFC1F941E()) || unk_0xF5DB888C353E2BED())
		{
		}
		else if (!func_906())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_904(iParam0))
		{
			return 0;
		}
	}
	if (!func_903(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_903(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_172())
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

int func_904(int iParam0)
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

int func_905()
{
	return 0;
}

int func_906()
{
	return 1;
}

int func_907()
{
	return 1;
}

int func_908()
{
	if (unk_0xE9D7B652961D4AA3(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_909()
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

var func_910()
{
	var uVar0;
	
	uVar0 = func_911();
	if (!func_156())
	{
		if (func_175() != func_29())
		{
			uVar0 = func_933(func_175()) + 1;
		}
	}
	return uVar0;
}

int func_911()
{
	return func_933(unk_0x95B959F18401C09A()) + 1;
}

int func_912()
{
	return func_140(6113, -1, 0);
}

void func_913(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0xE3F45F2E5162B2C7(&Global_1669501);
	func_914();
}

void func_914()
{
	struct<44> Var0;
	
	Global_1669501 = { Var0 };
	Global_1669501.f_23 = 0;
	Global_1669501.f_24 = 0;
	Global_1669501.f_16 = 0;
}

bool func_915(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_344, 12);
}

bool func_916(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_344, 13);
}

int func_917(int iParam0)
{
	if (iParam0 != func_29())
	{
		if ((unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_253, 12) || unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_253, 13)) || unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_253, 14))
		{
			return 1;
		}
	}
	return 0;
}

int func_918(int iParam0)
{
	if (iParam0 != func_29())
	{
		if ((unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_253, 0) || unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_253, 1)) || unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_253, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_919(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (((((unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_253, 3) || unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_253, 4)) || unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_253, 5)) || unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_253, 0)) || unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_253, 1)) || unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_253, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_920(int iParam0)
{
	if (iParam0 != func_29())
	{
		if ((unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_253, 6) || unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_253, 7)) || unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_253, 8))
		{
			return 1;
		}
	}
	return 0;
}

bool func_921(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_344, 9);
}

void func_922(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x79449220E40CF832(&Global_1669438);
	func_923();
}

void func_923()
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

void func_924(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x0118CDB6D266E2BA(&Global_1669384);
	func_925();
}

void func_925()
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

int func_926(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_329(iParam0, iParam1, 2);
	bVar1 = func_329(iParam0, iParam1, 1);
	bVar2 = func_329(iParam0, iParam1, 0);
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

int func_927(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_142(iParam0))
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
	else if (func_705(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_89(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_17554;
			iVar1 = 20;
		}
	}
	else if (func_96(iParam0))
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
		unk_0x27AA661817723FCB(func_709(func_175()), func_708(func_175()), func_666(), func_665(), iVar1, iVar0);
	}
	func_929(iVar0);
	func_928(iVar0);
	return iVar0;
}

void func_928(int iParam0)
{
	int iVar0;
	
	iVar0 = func_140(3968, -1, 0);
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
	func_138(3968, iVar0, -1, 1, 0);
}

void func_929(int iParam0)
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

int func_930(bool bParam0)
{
	if (bParam0)
	{
		return 0;
	}
	if (func_115(unk_0x95B959F18401C09A()) || func_118(unk_0x95B959F18401C09A()))
	{
		return 1;
	}
	return 0;
}

void func_931(var uParam0)
{
	unk_0xEC1C7C0AA7F4D2BB(&Global_1669645);
	func_932();
}

void func_932()
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

int func_933(int iParam0)
{
	if (func_262(iParam0) == func_29())
	{
		return 0;
	}
	return Global_1626536[iParam0 /*603*/].f_11.f_19;
}

int func_934(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = -1;
	if (bParam0)
	{
		iVar0 = func_411(unk_0x95B959F18401C09A());
	}
	else
	{
		iVar0 = func_63(unk_0x95B959F18401C09A());
	}
	if (iVar0 != -1)
	{
	}
	switch (iVar0)
	{
		case 236:
			iVar2 = func_937(unk_0x95B959F18401C09A());
			iVar1 = iVar2;
			break;
		
		case 237:
			iVar2 = func_936(unk_0x95B959F18401C09A());
			if (func_126(func_127(unk_0x95B959F18401C09A())))
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
			iVar2 = func_936(unk_0x95B959F18401C09A());
			iVar1 = 300;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 238:
			iVar2 = func_935(unk_0x95B959F18401C09A());
			iVar1 = 400;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 249:
			iVar2 = func_935(unk_0x95B959F18401C09A());
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

int func_935(int iParam0)
{
	if (func_63(unk_0x95B959F18401C09A()) == 238 || func_63(unk_0x95B959F18401C09A()) == 249)
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_495;
	}
	return -1;
}

int func_936(int iParam0)
{
	if (func_63(unk_0x95B959F18401C09A()) == 237 || func_63(unk_0x95B959F18401C09A()) == 250)
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_494;
	}
	return -1;
}

int func_937(int iParam0)
{
	if (func_411(iParam0) == 236)
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_493;
	}
	return -1;
}

int func_938(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		return 5;
	}
	switch (iParam0)
	{
		case 2:
			return 8;
		
		case 3:
			return 6;
		
		case 1:
		case 4:
		case 6:
			if (bParam1)
			{
				return 1;
			}
			else if (bParam2)
			{
				return 7;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 4;
}

int func_939(struct<21> Param0)
{
	func_981(func_982(Param0), Param0);
	func_978(0, -1, 0);
	unk_0x7643BB59992A9E6E(&Local_175, 35);
	unk_0x568D314D73140729(&Local_176, 193);
	unk_0x9980AE643A60F372(0);
	func_942(0, 0);
	func_940();
	return 1;
}

void func_940()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	unk_0x9315FCF6CFE2AB41("relJoust0", &(uLocal_150[0]));
	unk_0x9315FCF6CFE2AB41("relJoust1", &(uLocal_150[1]));
	iVar0 = unk_0x9AA1574E00850065(unk_0xC408CC95C7202D67(unk_0x33CD235DF1E6A94E()), -1533126372);
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			unk_0xD2E80177F27FD43F(1, Global_1574954[iVar1], uLocal_150[iVar2]);
			unk_0xD2E80177F27FD43F(1, uLocal_150[iVar2], Global_1574954[iVar1]);
			unk_0xD2E80177F27FD43F(iVar0, uLocal_150[iVar2], -1533126372);
			unk_0xD2E80177F27FD43F(iVar0, -1533126372, uLocal_150[iVar2]);
			unk_0xD2E80177F27FD43F(1, uLocal_150[iVar2], Global_1575002[5]);
			unk_0xD2E80177F27FD43F(1, Global_1575002[5], uLocal_150[iVar2]);
			unk_0xD2E80177F27FD43F(1, uLocal_150[iVar2], Global_1574987);
			unk_0xD2E80177F27FD43F(1, Global_1574987, uLocal_150[iVar2]);
			iVar2++;
		}
		iVar1++;
	}
	unk_0xD2E80177F27FD43F(5, uLocal_150[0], uLocal_150[1]);
	unk_0xD2E80177F27FD43F(5, uLocal_150[1], uLocal_150[0]);
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 2)
	{
		unk_0xD2E80177F27FD43F(5, 2017343592, uLocal_150[iVar2]);
		func_941(&(uLocal_150[iVar2]));
		iVar2++;
	}
}

void func_941(var uParam0)
{
	unk_0xD2E80177F27FD43F(1, -1865950624, *uParam0);
	unk_0xD2E80177F27FD43F(1, *uParam0, -1865950624);
	unk_0xD2E80177F27FD43F(1, 296331235, *uParam0);
	unk_0xD2E80177F27FD43F(1, *uParam0, 296331235);
	unk_0xD2E80177F27FD43F(1, 1166638144, *uParam0);
	unk_0xD2E80177F27FD43F(1, *uParam0, 1166638144);
	unk_0xD2E80177F27FD43F(1, 2037579709, *uParam0);
	unk_0xD2E80177F27FD43F(1, *uParam0, 2037579709);
	unk_0xD2E80177F27FD43F(1, 2017343592, *uParam0);
	unk_0xD2E80177F27FD43F(1, *uParam0, 2017343592);
	unk_0xD2E80177F27FD43F(1, -1821475077, *uParam0);
	unk_0xD2E80177F27FD43F(1, *uParam0, -1821475077);
	unk_0xD2E80177F27FD43F(1, 1782292358, *uParam0);
	unk_0xD2E80177F27FD43F(1, *uParam0, 1782292358);
	unk_0xD2E80177F27FD43F(1, -1033021910, *uParam0);
	unk_0xD2E80177F27FD43F(1, *uParam0, -1033021910);
	unk_0xD2E80177F27FD43F(1, -1285976420, *uParam0);
	unk_0xD2E80177F27FD43F(1, *uParam0, -1285976420);
}

void func_942(int iParam0, int iParam1)
{
	func_977();
	if (func_743(unk_0x95B959F18401C09A()))
	{
		func_946(1);
	}
	if ((iParam0 != 0 && unk_0xC4DEA49C5B465481(iParam1)) && func_945(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				unk_0x8950ED5730F62EE8(&Global_1669352, 0);
				break;
			}
	}
	if (!func_156() && !func_278(unk_0x95B959F18401C09A(), 1))
	{
		if (func_774())
		{
			func_944(3);
		}
	}
	func_944(4);
	if (func_173(0))
	{
		Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11.f_57 = func_175();
	}
	if (func_96(iParam0))
	{
		func_925();
		Global_1669384.f_18 = func_699(func_92());
	}
	else if (func_104(func_859(unk_0x95B959F18401C09A())))
	{
		func_923();
		Global_1669438.f_18 = func_699(func_92());
	}
	func_943();
}

void func_943()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1361808.f_534[iVar0 /*42*/].f_1 = func_29();
		Global_1361808.f_534[iVar0 /*42*/].f_9 = 0;
		iVar0++;
	}
}

void func_944(int iParam0)
{
	unk_0x8950ED5730F62EE8(&(Global_2528542.f_4889.f_41), iParam0);
}

int func_945(int iParam0, bool bParam1)
{
	return func_276(unk_0x95B959F18401C09A(), iParam0, bParam1);
}

void func_946(bool bParam0)
{
	int iVar0;
	
	func_880(33);
	func_880(34);
	func_880(35);
	func_880(36);
	func_880(37);
	func_880(38);
	func_880(39);
	func_880(40);
	func_880(43);
	func_880(41);
	func_880(54);
	func_880(42);
	func_880(47);
	func_976(23);
	func_976(24);
	func_880(92);
	unk_0xCE689A8E8C42ED78(&(Global_2528542.f_1728), 2);
	func_975();
	func_970();
	func_965();
	func_960();
	func_952();
	func_948();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2528542.f_4889.f_14[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_947(3))
	{
		func_976(3);
	}
	else if (func_947(4))
	{
		func_976(4);
	}
	else if (func_947(5))
	{
		func_976(5);
	}
	else if (func_947(6))
	{
		func_976(6);
	}
	else if (func_947(7))
	{
		func_976(7);
	}
	else if (((((((((((((((((func_947(0) || func_947(1)) || func_947(2)) || func_947(8)) || func_947(9)) || func_947(10)) || func_947(11)) || func_947(12)) || func_947(13)) || func_947(14)) || func_947(15)) || func_947(16)) || func_947(17)) || func_947(18)) || func_947(19)) || func_947(20)) || func_947(21)) || func_947(22))
	{
		func_976(8);
		func_976(0);
		func_976(1);
		func_976(2);
		func_976(9);
		func_976(10);
		func_976(11);
		func_976(12);
		func_976(13);
		func_976(14);
		func_976(15);
		func_976(16);
		func_976(17);
		func_976(18);
		func_976(19);
		func_976(20);
		func_976(21);
		func_976(22);
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

bool func_947(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0x0E4018692D92041D(Global_2528542.f_4889.f_14[iVar0], iVar1);
}

void func_948()
{
	if (func_950())
	{
		func_949(4);
		func_949(5);
		func_949(6);
		func_949(7);
	}
}

void func_949(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xCE689A8E8C42ED78(&(Global_2528542.f_4889.f_31[iVar0]), iVar1);
}

int func_950()
{
	if (((func_951(4) || func_951(5)) || func_951(6)) || func_951(7))
	{
		return 1;
	}
	return 0;
}

bool func_951(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0x0E4018692D92041D(Global_2528542.f_4889.f_31[iVar0], iVar1);
}

void func_952()
{
	int iVar0;
	
	if (func_959())
	{
		func_958(8);
		func_958(9);
		func_958(10);
		func_958(12);
		func_958(13);
		func_958(14);
		func_958(19);
		func_958(20);
		func_958(21);
		func_958(22);
		func_958(23);
		func_958(24);
		func_958(25);
		func_958(26);
		func_958(15);
		func_958(16);
		func_958(17);
		func_958(18);
		func_958(35);
		func_958(45);
		func_958(46);
		if (func_957(11))
		{
			func_958(11);
			iVar0 = func_140(7226, -1, 0);
			unk_0x8950ED5730F62EE8(&iVar0, 2);
			func_138(7226, iVar0, -1, 1, 0);
		}
	}
	if (func_957(48))
	{
		if (func_956(151, 3))
		{
			func_955(151, 3);
		}
		func_958(48);
	}
	if (func_957(49))
	{
		if (func_956(152, 3))
		{
			func_955(152, 3);
		}
		func_958(49);
	}
	if (func_957(50))
	{
		if (func_956(153, 3))
		{
			func_955(153, 3);
		}
		func_958(50);
	}
	if (func_957(51))
	{
		if (func_956(func_953(), 3))
		{
			func_955(func_953(), 3);
		}
		func_958(51);
	}
}

int func_953()
{
	if (func_954())
	{
		Global_106565.f_28044[154 /*29*/].f_24[Global_14553] = 1;
	}
	return 154;
}

int func_954()
{
	int iVar0;
	
	iVar0 = func_262(unk_0x95B959F18401C09A());
	if (((iVar0 != unk_0x95B959F18401C09A() && iVar0 != func_29()) && unk_0xC4DEA49C5B465481(iVar0)) && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

void func_955(int iParam0, int iParam1)
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

int func_956(int iParam0, int iParam1)
{
	if (Global_106565.f_28044[iParam0 /*29*/].f_12[iParam1] == 1)
	{
		return 1;
	}
	return 0;
}

bool func_957(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0x0E4018692D92041D(Global_2528542.f_4889.f_26[iVar0], iVar1);
}

void func_958(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xCE689A8E8C42ED78(&(Global_2528542.f_4889.f_26[iVar0]), iVar1);
}

int func_959()
{
	if (((((((((((((((((((((func_957(8) || func_957(9)) || func_957(10)) || func_957(12)) || func_957(11)) || func_957(13)) || func_957(14)) || func_957(19)) || func_957(20)) || func_957(21)) || func_957(22)) || func_957(23)) || func_957(24)) || func_957(25)) || func_957(26)) || func_957(15)) || func_957(16)) || func_957(17)) || func_957(18)) || func_957(35)) || func_957(45)) || func_957(46))
	{
		return 1;
	}
	return 0;
}

void func_960()
{
	if (func_964())
	{
		func_963(0);
		func_963(1);
		func_963(2);
		func_963(3);
		func_963(4);
		func_963(5);
		if (func_962(32))
		{
			if (func_956(func_961(), 3))
			{
				func_955(func_961(), 3);
			}
			func_963(32);
		}
	}
}

int func_961()
{
	if (func_954())
	{
		Global_106565.f_28044[12 /*29*/].f_24[Global_14553] = 1;
	}
	return 12;
}

bool func_962(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0x0E4018692D92041D(Global_2528542.f_4889.f_23[iVar0], iVar1);
}

void func_963(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xCE689A8E8C42ED78(&(Global_2528542.f_4889.f_23[iVar0]), iVar1);
}

int func_964()
{
	if ((((func_962(1) || func_962(0)) || func_962(2)) || func_962(4)) || func_962(5))
	{
		return 1;
	}
	return 0;
}

void func_965()
{
	if (func_969())
	{
		func_968(0);
		func_968(1);
		func_968(2);
		func_968(3);
		func_968(4);
		func_968(5);
		func_968(6);
		func_968(7);
		if (func_967(8))
		{
			func_968(8);
		}
		if (func_967(15))
		{
			if (func_956(func_966(), 3))
			{
				func_955(func_966(), 3);
			}
			func_968(15);
		}
	}
}

int func_966()
{
	if (func_954())
	{
		Global_106565.f_28044[20 /*29*/].f_24[Global_14553] = 1;
	}
	return 20;
}

bool func_967(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0x0E4018692D92041D(Global_2528542.f_4889.f_21[iVar0], iVar1);
}

void func_968(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xCE689A8E8C42ED78(&(Global_2528542.f_4889.f_21[iVar0]), iVar1);
}

int func_969()
{
	if ((((((((func_967(0) || func_967(1)) || func_967(2)) || func_967(3)) || func_967(4)) || func_967(5)) || func_967(6)) || func_967(7)) || func_967(8))
	{
		return 1;
	}
	return 0;
}

void func_970()
{
	if (func_974())
	{
		func_973(0);
		func_973(1);
		func_973(2);
		func_973(3);
		func_973(4);
		func_973(5);
		func_973(6);
		func_973(7);
		func_973(8);
		func_973(9);
		func_973(10);
		func_973(11);
		func_973(12);
		if (func_972(13))
		{
			if (func_956(func_971(), 3))
			{
				func_955(func_971(), 3);
			}
			func_973(13);
		}
	}
}

int func_971()
{
	if (func_954())
	{
		Global_106565.f_28044[76 /*29*/].f_24[Global_14553] = 1;
	}
	return 76;
}

bool func_972(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0x0E4018692D92041D(Global_2528542.f_4889.f_19[iVar0], iVar1);
}

void func_973(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xCE689A8E8C42ED78(&(Global_2528542.f_4889.f_19[iVar0]), iVar1);
}

int func_974()
{
	if ((((((((((((func_972(0) || func_972(1)) || func_972(2)) || func_972(3)) || func_972(4)) || func_972(5)) || func_972(6)) || func_972(7)) || func_972(8)) || func_972(9)) || func_972(10)) || func_972(11)) || func_972(12))
	{
		return 1;
	}
	return 0;
}

void func_975()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_2528542.f_4889.f_17[iVar0] = 0;
		iVar0++;
	}
}

void func_976(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xCE689A8E8C42ED78(&(Global_2528542.f_4889.f_14[iVar0]), iVar1);
}

void func_977()
{
	struct<14> Var0;
	
	Global_1669366 = { Var0 };
	Global_1669366.f_14 = 0;
	Global_1669366.f_15 = 0;
}

int func_978(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x52119E312E15DB07();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_980();
			}
			else
			{
				return 0;
			}
		}
		if (!func_979())
		{
			if (iParam0 == 0)
			{
				if (!unk_0xB331FCEB94EB05C8())
				{
					if (!bParam2)
					{
						func_980();
					}
					else
					{
						return 0;
					}
				}
				if (func_807())
				{
					if (!bParam2)
					{
						func_980();
					}
					else
					{
						return 0;
					}
				}
				if (func_805(155))
				{
					if (!bParam2)
					{
						func_980();
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
					func_980();
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
				func_980();
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
			func_980();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_979()
{
	return Global_1312844;
}

void func_980()
{
	unk_0x5894DC159447E10A();
}

void func_981(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0xB331FCEB94EB05C8())
	{
		func_980();
	}
	unk_0x210E46A190FB3CB3(iParam0, 0, Param1.f_16);
}

int func_982(int iParam0)
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

int func_983(int iParam0, bool bParam1, bool bParam2)
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

