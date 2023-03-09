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
	struct<22> Local_60 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 3, -1, 0, 0, 0, -1861623876, 0 } ;
	var uLocal_61 = 0;
	vector3 vLocal_62[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 16;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
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
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
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
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	struct<21> Local_237 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	if (unk_0xB331FCEB94EB05C8())
	{
		if (!func_146(ScriptParam_237))
		{
			func_140();
		}
	}
	while (true)
	{
		func_139();
		if (func_128())
		{
			func_140();
		}
		if (unk_0x69E8EDFEA57E361D() != iLocal_67)
		{
			func_140();
		}
		if (unk_0xEB9DC13235C0B345(unk_0x7661A555C1463336()) != Local_60.f_17)
		{
			func_140();
		}
		unk_0xAE5F29036A361832();
		switch (func_127(unk_0x72B85B341ADBE9DE()))
		{
			case 0:
				if (func_125())
				{
					if (func_124() == 1)
					{
						func_123();
						vLocal_62[unk_0x72B85B341ADBE9DE() /*3*/] = 1;
					}
					else if (func_124() == 4)
					{
						vLocal_62[unk_0x72B85B341ADBE9DE() /*3*/] = 3;
					}
				}
				break;
			
			case 1:
				if (func_124() == 1)
				{
					func_105();
				}
				else if (func_124() == 4)
				{
					vLocal_62[unk_0x72B85B341ADBE9DE() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_104(&(Local_60.f_21));
				if (func_103(&(Local_60.f_21)))
				{
					vLocal_62[unk_0x72B85B341ADBE9DE() /*3*/] = 4;
				}
				break;
			
			case 2:
				vLocal_62[unk_0x72B85B341ADBE9DE() /*3*/] = 4;
			
			case 4:
				func_140();
				break;
		}
		if (unk_0x06C1EBC003C18F1F())
		{
			switch (func_124())
			{
				case 0:
					if (func_74())
					{
						Local_60 = 1;
					}
					break;
				
				case 1:
					func_38();
					if (func_1())
					{
						Local_60 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()
{
	if (unk_0x0E4018692D92041D(iLocal_63, 8))
	{
		if (!func_37(unk_0x95B959F18401C09A(), 1, 1))
		{
			if (!unk_0x0E4018692D92041D(Local_60.f_1, 9))
			{
				unk_0x8950ED5730F62EE8(&(Local_60.f_1), 9);
			}
			return 0;
		}
		else if (unk_0x0E4018692D92041D(Local_60.f_1, 9))
		{
			return 1;
		}
	}
	if (Local_60.f_12 == 0 || Local_60.f_12 == 1)
	{
		if (!unk_0x4F94F07DAD382CDA(Local_60.f_4))
		{
			if (!func_35(Local_60.f_2))
			{
				return 1;
			}
			if (func_34(Local_60.f_3))
			{
				return 1;
			}
			if (Local_60.f_12 > 0)
			{
				return 1;
			}
		}
		if (unk_0x0E4018692D92041D(iLocal_63, 8))
		{
			if (!unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), Local_60.f_6, 250f, 250f, 250f, 0, 1, 0))
			{
				if (Local_60.f_18 == 1)
				{
					func_13();
				}
				return 1;
			}
			if (Local_60.f_18 == 1)
			{
				if ((((func_9(unk_0x95B959F18401C09A()) && func_8() != 151) || func_6(unk_0x95B959F18401C09A(), 146)) || func_5()) || func_4())
				{
					func_13();
					if (unk_0x22C3124A898FB82A(Local_60.f_4))
					{
						func_3(&(Local_60.f_4));
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_3(var uParam0)
{
	var uVar0;
	
	if (unk_0x22C3124A898FB82A(*uParam0))
	{
		if (!unk_0x6F3D61B58C7B4025(*uParam0))
		{
		}
	}
	if (unk_0x4F94F07DAD382CDA(*uParam0))
	{
		uVar0 = unk_0xF2D53AA87148ACED(*uParam0);
		unk_0xFD5D4D96D91EEAAD(&uVar0);
	}
}

var func_4()
{
	return Global_1312417;
}

var func_5()
{
	return Global_2528542.f_4886;
}

int func_6(int iParam0, int iParam1)
{
	if (Global_1626536[iParam0 /*603*/] == iParam1)
	{
		return func_7(iParam0);
	}
	return 0;
}

int func_7(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x0E4018692D92041D(Global_1626536[iVar0 /*603*/].f_1, 0);
	}
	return 0;
}

int func_8()
{
	return Global_1645834;
}

int func_9(int iParam0)
{
	if (func_12(iParam0))
	{
		return 1;
	}
	if (func_10(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_10(int iParam0)
{
	return func_11(iParam0, 20);
}

bool func_11(int iParam0, int iParam1)
{
	return unk_0x0E4018692D92041D(Global_1626536[iParam0 /*603*/].f_11.f_4, iParam1);
}

int func_12(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return unk_0x0E4018692D92041D(Global_1626536[iVar0 /*603*/].f_1, 7);
	}
	return 0;
}

void func_13()
{
	if (unk_0x22C3124A898FB82A(Local_60.f_4))
	{
		if (Global_262145.f_19690 > 0)
		{
			func_31(Global_262145.f_19690, 0);
			func_14(Global_262145.f_19690, 14, 2, 1);
		}
	}
}

void func_14(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<4> Var0;
	struct<8> Var1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, func_30(iParam1), 16);
	StringCopy(&Var1, func_29(iParam2), 32);
	switch (iParam1)
	{
		case 0:
			iVar2 = 1287308202;
			break;
		
		case 1:
			iVar2 = 691372038;
			break;
		
		case 2:
			iVar2 = 1480707108;
			break;
		
		case 3:
			iVar2 = 1512499951;
			break;
		
		case 4:
			iVar2 = 562283735;
			break;
		
		case 5:
			iVar2 = -154732333;
			break;
		
		case 6:
			iVar2 = -1362660491;
			break;
		
		case 7:
			iVar2 = 645708827;
			break;
		
		case 8:
			iVar2 = 767907967;
			break;
		
		case 9:
			iVar2 = -1970151306;
			break;
		
		case 10:
			iVar2 = 718859568;
			break;
		
		case 11:
			iVar2 = -1955564771;
			break;
		
		case 12:
			iVar2 = 892388724;
			break;
		
		case 13:
			iVar2 = -1426920838;
			break;
		
		case 14:
			iVar2 = -664597565;
			break;
		
		case 15:
			iVar2 = 1864522104;
			break;
		
		case 16:
			iVar2 = 215608230;
			break;
		
		case 17:
			iVar2 = -1100963799;
			break;
	}
	if (func_28())
	{
		func_15(iVar2, iParam0, &iVar3, bParam3, bParam3, 0);
		Global_4263509[iVar3 /*84*/].f_13.f_40 = { Var0 };
		Global_4263509[iVar3 /*84*/].f_13.f_44 = { Var1 };
	}
	else
	{
		unk_0x910DEDDEE7716047(iParam0, &Var0, &Var1, bParam3);
	}
}

void func_15(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_28())
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
				func_16(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_16(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
			if (iParam1 > 0)
			{
				func_16(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -1693570755:
			func_16(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_16(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_16(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_28())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0xB412AA3DEE298A52(func_27()) || unk_0x2832F5CD8A109CD6())
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
			*uParam0 = func_23(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_22(1, iParam4);
			Global_4264084 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_17(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_17(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x8950ED5730F62EE8(&(Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_18(iParam0);
	}
}

void func_18(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_28())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_21(iParam0))
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
		func_19(&(Global_4263509[iParam0 /*84*/]));
	}
}

void func_19(var uParam0)
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
	func_20(&(uParam0->f_13));
	func_20(&(uParam0->f_13.f_13));
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

void func_20(var uParam0)
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

int func_21(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263509[iParam0 /*84*/].f_65.f_5 == 1;
	}
	return 0;
}

void func_22(int iParam0, int iParam1)
{
	Global_2460949 = iParam1;
	Global_2460948 = iParam0;
}

int func_23(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263509[iVar0 /*84*/].f_65.f_2 == 0)
		{
			if (!func_28())
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
				func_24(Global_4263509[iVar0 /*84*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_24(struct<66> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_26(vVar0.y);
	if ((Global_262145.f_23434 && !Global_262145.f_23435) && !Global_262145.f_23436)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_25();
		unk_0x09269A9CFC145847(1, &vVar0, 35, iVar1);
	}
}

void func_25()
{
	unk_0x8F59DE352CFE248B("AM_ARENA_SHP");
}

var func_26(int iParam0)
{
	var uVar0;
	
	unk_0x8950ED5730F62EE8(&uVar0, iParam0);
	return uVar0;
}

int func_27()
{
	return Global_1312745;
}

int func_28()
{
	if (unk_0x4CE1DD5CFC1F941E())
	{
		return unk_0xFCAD2CB678396284();
	}
	return 0;
}

char* func_29(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "NOTREACHTARGET";
			break;
		
		case 1:
			return "TARGET_ESCAPE";
			break;
		
		case 2:
			return "DELIVERY_FAIL";
			break;
		
		case 3:
			return "NOT_USED";
			break;
		
		case 4:
			return "TEAM_QUIT";
			break;
		
		case 5:
			return "SERVER_ERROR";
			break;
		
		case 6:
			return "RECEIVE_LJ_L";
			break;
		
		case 8:
			return "CHALLENGE_PLAYER_LEFT";
			break;
	}
	return "DEFAULT";
}

char* func_30(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BACKUP_VAGOS";
		
		case 1:
			return "BACKUP_LOST";
		
		case 2:
			return "BACKUP_FAMILIES";
		
		case 3:
			return "HIRE_MUGGER";
		
		case 4:
			return "HIRE_MERCENARY";
		
		case 5:
			return "BUY_CARDROPOFF";
		
		case 6:
			return "HELI_PICKUP";
		
		case 7:
			return "BOAT_PICKUP";
		
		case 8:
			return "CLEAR_WANTED";
		
		case 9:
			return "HEAD_2_HEAD";
		
		case 10:
			return "CHALLENGE";
		
		case 11:
			return "SHARE_LAST_JOB";
		
		case 13:
			return "REFUNDAPPEA";
		
		case 14:
			return "AMMO_DROP_REF";
		
		case 15:
			return "ORBITAL_MANUAL";
		
		case 16:
			return "ORBITAL_AUTO";
		
		case 17:
			return "ARENA_SPEC_BOX";
		
		default:
	}
	return "DEFAULT";
}

void func_31(int iParam0, int iParam1)
{
	func_33(iParam0, 1, 1, 0);
	if (iParam1 == 1)
	{
		func_32(iParam0, 0);
	}
}

void func_32(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_33(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = floor((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_211.f_4 = iVar1;
	Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_211.f_3 = (Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_211.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_32(iVar1, 0);
	}
}

int func_34(var uParam0)
{
	if (unk_0x22C3124A898FB82A(uParam0))
	{
		return unk_0xBC2FC12AD0FBF72E(unk_0xBB28786B7F552D0B(uParam0));
	}
	return 1;
}

int func_35(var uParam0)
{
	if (unk_0x22C3124A898FB82A(uParam0))
	{
		return !func_36(unk_0xFC00F22E930BFD55(uParam0));
	}
	return 0;
}

int func_36(int iParam0)
{
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		if (unk_0xD62C4419A41F106A(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x91D5C8283D19AF49(iParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_37(int iParam0, bool bParam1, bool bParam2)
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

void func_38()
{
	switch (Local_60.f_12)
	{
		case 0:
			if (Local_60.f_18)
			{
				func_73();
			}
			else
			{
				func_68();
			}
			if (func_42())
			{
				func_41();
				Local_60.f_12 = 1;
			}
			break;
		
		case 1:
			if (unk_0x22C3124A898FB82A(Local_60.f_4))
			{
				func_40(Local_60.f_4, 18);
				if (Local_60.f_15 == 3)
				{
					if (!unk_0x22C3124A898FB82A(Local_60.f_5))
					{
						Local_60.f_15 = 2;
					}
				}
				if (unk_0x22C3124A898FB82A(Local_60.f_2))
				{
					func_39(&(Local_60.f_2));
				}
				else if (Local_60.f_13 == 1)
				{
					Local_60.f_13 = 0;
				}
				if (unk_0x22C3124A898FB82A(Local_60.f_3))
				{
					func_39(&(Local_60.f_3));
				}
				else if (Local_60.f_14 == 1)
				{
					Local_60.f_14 = 0;
				}
			}
			break;
		
		case 2:
			break;
	}
}

void func_39(var uParam0)
{
	var uVar0;
	
	if (unk_0x4F94F07DAD382CDA(*uParam0))
	{
		uVar0 = unk_0xF2D53AA87148ACED(*uParam0);
		unk_0x4955686EF8308B47(&uVar0);
	}
}

void func_40(var uParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	float fVar7;
	float fVar8;
	
	unk_0x1256E5EA03020804(iParam1, &uVar3, &uVar4, &uVar5, &uVar6);
	fVar2 = 0.5f;
	unk_0xFEF5F9BB57EA2E8D(unk_0x541D5C57194E73C4(unk_0xE4B835FDC8B9B086(uParam0)), &vVar0, &vVar1);
	fVar7 = ((vVar1.z - vVar0.z) / 2f);
	fVar8 = (vVar1.z - fVar7);
	if (fVar2 <= (fVar8 + 0.1f))
	{
		fVar2 = (fVar8 + 0.4f);
	}
	unk_0xBE9D0FB56A2D798F(2, unk_0xFBB1F99A825CAB09(unk_0xE4B835FDC8B9B086(uParam0), 1) + Vector((((vVar1.z - vVar0.z) / 2f) + fVar2), 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uVar3, uVar4, uVar5, 100, 1, 1, 2, 0, 0, 0, 0);
}

void func_41()
{
	if (!unk_0xE38E3CF1625A4145(iLocal_64))
	{
		iLocal_64 = unk_0x8848A15CBDADDC60(unk_0xE4B835FDC8B9B086(Local_60.f_4));
		if (Local_60.f_18)
		{
			unk_0xA20C1DE21F2F071C(iLocal_64, 84);
			unk_0xCE5C49921A521962(iLocal_64, 1.2f);
			unk_0x1C95CD840303FC37(iLocal_64, "AMD_BLIPBALL");
		}
		else
		{
			unk_0xA20C1DE21F2F071C(iLocal_64, 351);
			unk_0x1C95CD840303FC37(iLocal_64, "AMD_BLIPN");
			unk_0xCE5C49921A521962(iLocal_64, 0.7f);
		}
		unk_0xB9E84A421C105943(iLocal_64, 2);
		unk_0xE447A1B9434714F3(iLocal_64, 120);
	}
}

int func_42()
{
	if (!unk_0x0E4018692D92041D(Local_60.f_1, 7))
	{
		if (func_35(Local_60.f_2))
		{
			if (unk_0x18FB647D79B09657(unk_0xFC00F22E930BFD55(Local_60.f_2), Local_60.f_6, 5f, 5f, 600f, 0, 1, 0))
			{
				unk_0x8950ED5730F62EE8(&(Local_60.f_1), 7);
			}
		}
	}
	else if (func_125())
	{
		if (func_45())
		{
			if (func_43())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_43()
{
	unk_0xB815670C37E03CDE(Local_60.f_19.f_1);
	if (unk_0x5D98D654CDC2165A(Local_60.f_19.f_1))
	{
		if (!unk_0x22C3124A898FB82A(Local_60.f_19) && unk_0x22C3124A898FB82A(Local_60.f_4))
		{
			if (unk_0x4A1A4733BFE10244(1))
			{
				if (func_44(&(Local_60.f_19), Local_60.f_19.f_1, unk_0xFBB1F99A825CAB09(unk_0xE4B835FDC8B9B086(Local_60.f_4), 1) - Vector(5f, 0f, 0f), 1, 1, 1, 0, 0, 0, 0))
				{
					unk_0x841CC2A685D6AF3C(Local_60.f_19, 1);
					unk_0x3C990C409B3845DE(unk_0xE4B835FDC8B9B086(Local_60.f_19), unk_0xC472E34C8FBEC678(unk_0xE4B835FDC8B9B086(Local_60.f_4)));
					unk_0x2F0A6390D863D337(unk_0xE4B835FDC8B9B086(Local_60.f_4), unk_0xE4B835FDC8B9B086(Local_60.f_19), 0, 0f, 0f, 0.25f, 0f, 0f, 0f, 0, 0, 1, 0, 2, 1);
					unk_0x4CBC0B0C8471392B(unk_0xE4B835FDC8B9B086(Local_60.f_19), 1);
					unk_0xFE8201EFB515D77B(unk_0xE4B835FDC8B9B086(Local_60.f_19), 0);
					unk_0x7FC263D448DC8CAC(unk_0xE4B835FDC8B9B086(Local_60.f_19));
					unk_0xC496DD5F2D1B6923(unk_0xE4B835FDC8B9B086(Local_60.f_19), 0f, 0f, -0.2f);
					unk_0x5628CE9F91160050(unk_0xE4B835FDC8B9B086(Local_60.f_19), 1);
				}
			}
		}
	}
	if (!unk_0x22C3124A898FB82A(Local_60.f_19))
	{
		return 0;
	}
	return 1;
}

int func_44(var uParam0, int iParam1, vector3 vParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (!unk_0x4A1A4733BFE10244(1))
	{
		return 0;
	}
	if (bParam7)
	{
		*uParam0 = unk_0x0E0E192D65881AC2(unk_0xDD9A603448A23A17(iParam1, vParam2, iParam4, bParam3, iParam5));
	}
	else
	{
		*uParam0 = unk_0x0E0E192D65881AC2(unk_0x7CA67831169E8AA6(iParam1, vParam2, iParam4, bParam3, iParam5));
	}
	if (unk_0x22C3124A898FB82A(*uParam0))
	{
		unk_0xFE8201EFB515D77B(unk_0xE4B835FDC8B9B086(*uParam0), iParam6);
		if (bParam8)
		{
			unk_0xA6C43DE7267202AC(unk_0xE4B835FDC8B9B086(*uParam0), 1);
		}
		if (bParam9)
		{
			unk_0x0CDD28A9DFCE2FCE(unk_0xE4B835FDC8B9B086(*uParam0), false, 0);
		}
		if (unk_0x0371ECBEC27AF4BE(unk_0xE4B835FDC8B9B086(*uParam0)))
		{
			if (bParam3)
			{
				unk_0x841CC2A685D6AF3C(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_45()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = joaat("prop_box_ammo02a");
	if (Local_60.f_18 == 1)
	{
		iVar0 = 1688540826;
	}
	unk_0xB815670C37E03CDE(iVar0);
	unk_0xB815670C37E03CDE(joaat("p_cargo_chute_s"));
	if (unk_0x5D98D654CDC2165A(iVar0) && unk_0x5D98D654CDC2165A(joaat("p_cargo_chute_s")))
	{
		if (!unk_0x22C3124A898FB82A(Local_60.f_4) && !unk_0x22C3124A898FB82A(Local_60.f_5))
		{
			if (func_35(Local_60.f_2) && unk_0xA107BB59F9A92498(0, 0, 2, 0))
			{
				iVar1 = 200;
				if (!unk_0x22C3124A898FB82A(Local_60.f_4))
				{
					iVar2 = 0;
					iVar3 = joaat("pickup_ammo_bullet_mp");
					if (Local_60.f_18 == 1)
					{
						iVar3 = joaat("pickup_weapon_minigun");
					}
					if (Local_60.f_18 == 0)
					{
						unk_0x8950ED5730F62EE8(&iVar2, 12);
					}
					else
					{
						unk_0x8950ED5730F62EE8(&iVar2, 12);
					}
					Local_60.f_4 = unk_0x0E0E192D65881AC2(unk_0x5A4D875D71EDECDE(iVar3, unk_0xFBB1F99A825CAB09(unk_0xFC00F22E930BFD55(Local_60.f_2), 1) - Vector(3f, 0f, 0f), iVar2, iVar1, iVar0, 1, 1));
					if (Local_60.f_18 == 1)
					{
						func_67(unk_0xE4B835FDC8B9B086(Local_60.f_4));
						unk_0x2B4C632983B0A26A(0);
					}
					unk_0x9611832841071B69(unk_0xE4B835FDC8B9B086(Local_60.f_4), 1);
					unk_0x5DF33F31C6066615(unk_0xE4B835FDC8B9B086(Local_60.f_4), 1);
					unk_0x4CBC0B0C8471392B(unk_0xE4B835FDC8B9B086(Local_60.f_4), 1);
					unk_0xFE8201EFB515D77B(unk_0xE4B835FDC8B9B086(Local_60.f_4), 0);
					unk_0x7FC263D448DC8CAC(unk_0xE4B835FDC8B9B086(Local_60.f_4));
					func_66();
					iVar4 = unk_0x8CCC0A0504C52531();
					unk_0xE9739440E5BF08EE(iVar4, "Crate_Beeps", unk_0xE4B835FDC8B9B086(Local_60.f_4), "MP_CRATE_DROP_SOUNDS", 1, 0);
					Local_60.f_16 = unk_0xA649E2DA0F4EE5B8(iVar4);
				}
				if (unk_0x22C3124A898FB82A(Local_60.f_4) && !unk_0x22C3124A898FB82A(Local_60.f_5))
				{
					if (func_44(&(Local_60.f_5), joaat("p_cargo_chute_s"), unk_0xFBB1F99A825CAB09(unk_0xFC00F22E930BFD55(Local_60.f_2), 1) - Vector(2f, 0f, 0f), 1, 1, 0, 1, 0, 0, 0))
					{
						unk_0x841CC2A685D6AF3C(Local_60.f_5, 1);
						unk_0x2F0A6390D863D337(unk_0xE4B835FDC8B9B086(Local_60.f_5), unk_0xE4B835FDC8B9B086(Local_60.f_4), 0, 0f, 0f, 0.1f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
						unk_0x4CBC0B0C8471392B(unk_0xE4B835FDC8B9B086(Local_60.f_5), 1);
						unk_0xFE8201EFB515D77B(unk_0xE4B835FDC8B9B086(Local_60.f_5), 0);
						unk_0x1BE9DE786D9E5DF3(unk_0xE4B835FDC8B9B086(Local_60.f_5), "P_cargo_chute_S_deploy", "P_cargo_chute_S", 1000f, 0, 0, 0, 0f, 0);
						unk_0xD45DDB32B5FADE2E(unk_0xE4B835FDC8B9B086(Local_60.f_5));
					}
				}
				func_64();
				if (!unk_0x0E4018692D92041D(iLocal_63, 15))
				{
					if (!Local_60.f_18)
					{
						func_63(&uLocal_72, 3, unk_0xBB28786B7F552D0B(Local_60.f_3), "FM_Pilot_Ammo", 0, 1);
						func_46(&uLocal_72, "CT_AUD", "MPCT_AMOinc", 12, 0, 0, 1);
					}
					unk_0x8950ED5730F62EE8(&iLocal_63, 15);
				}
			}
		}
	}
	if (unk_0x22C3124A898FB82A(Local_60.f_4) && unk_0x22C3124A898FB82A(Local_60.f_5))
	{
		return 1;
	}
	return 0;
}

int func_46(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_62(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_2621441 = 1;
	return func_47(sParam2, iParam3, 0);
}

int func_47(char* sParam0, int iParam1, bool bParam2)
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
					func_61();
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
		if (func_60(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_59();
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
				func_52();
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
				if (func_51())
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
			if (func_50())
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
			func_49();
			Global_15876 = bParam2;
		}
		Global_15868 = iParam1;
		StringCopy(&Global_15485, sParam0, 24);
		Global_14732 = 0;
		func_48();
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
		func_61();
	}
	return 0;
}

void func_48()
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

void func_49()
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

int func_50()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_51()
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

void func_52()
{
	if (func_58(14))
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
		Global_14553 = func_53();
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

var func_53()
{
	func_54();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_54()
{
	int iVar0;
	
	if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
	{
		if (func_57(Global_106565.f_2357.f_539.f_4321) != unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()))
		{
			iVar0 = func_56(unk_0x33CD235DF1E6A94E());
			if (func_55(iVar0) && (!func_58(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_55(Global_106565.f_2357.f_539.f_4321))
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

bool func_55(int iParam0)
{
	return iParam0 < 3;
}

int func_56(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		iVar1 = unk_0x541D5C57194E73C4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_57(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_57(int iParam0)
{
	if (func_55(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_58(int iParam0)
{
	return Global_36425 == iParam0;
}

void func_59()
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

bool func_60(int iParam0, int iParam1)
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

void func_61()
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

void func_62(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_63(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_64()
{
	if (func_65())
	{
		if (!unk_0xC2FDDE313D5A5398(iLocal_66))
		{
			iLocal_66 = unk_0xBABA29FE992CD51C("scr_crate_drop_beacon", unk_0xE4B835FDC8B9B086(Local_60.f_4), 0f, 0f, 0.2f, 0f, 0f, 0f, 1065353216, 0, 0, 0, 1065353216, 1065353216, 1065353216, 0);
			unk_0xEA3ABFEE23D6171C(iLocal_66, 0.8f, 0.18f, 0.19f, 0);
		}
	}
	if (!unk_0xC2FDDE313D5A5398(iLocal_66))
	{
		return 0;
	}
	return 1;
}

int func_65()
{
	unk_0x13157A56158089D8();
	if (unk_0xD3957903B061A8C8())
	{
		return 1;
	}
	return 0;
}

void func_66()
{
	if (unk_0xF90274A2198D0169(Local_60.f_16) != -1)
	{
		if (unk_0x22C3124A898FB82A(Local_60.f_4))
		{
			if (!unk_0x66DE54BD13B1BD88(unk_0xF90274A2198D0169(Local_60.f_16)))
			{
				unk_0xCBE6AF58552C63B2(unk_0xF90274A2198D0169(Local_60.f_16));
			}
			unk_0x44D426446FAF55FB(unk_0xF90274A2198D0169(Local_60.f_16));
		}
		else
		{
			if (!unk_0x66DE54BD13B1BD88(unk_0xF90274A2198D0169(Local_60.f_16)))
			{
				unk_0xCBE6AF58552C63B2(unk_0xF90274A2198D0169(Local_60.f_16));
			}
			unk_0x44D426446FAF55FB(unk_0xF90274A2198D0169(Local_60.f_16));
		}
	}
}

void func_67(var uParam0)
{
	var uVar0;
	
	unk_0x8950ED5730F62EE8(&uVar0, unk_0x6B7EE7681161BCAB());
	unk_0xB9941E6F1556FF2B(uParam0, uVar0);
}

void func_68()
{
	int iVar0;
	
	if (!unk_0x0E4018692D92041D(iLocal_63, 11))
	{
		if (!unk_0xFAC8F20FBC764F4D())
		{
			iVar0 = func_72(1190, -1, 0);
			if (!unk_0x0E4018692D92041D(iVar0, 10))
			{
				func_71("AMD_HELP1", -1);
				unk_0x8950ED5730F62EE8(&iVar0, 10);
				func_69(1190, iVar0, -1, 1, 0);
				unk_0x8950ED5730F62EE8(&iLocal_63, 11);
			}
			else if (!unk_0x0E4018692D92041D(iVar0, 11))
			{
				func_71("AMD_HELP2", -1);
				unk_0x8950ED5730F62EE8(&iVar0, 11);
				func_69(1190, iVar0, -1, 1, 0);
				unk_0x8950ED5730F62EE8(&iLocal_63, 11);
			}
			else
			{
				unk_0x8950ED5730F62EE8(&iLocal_63, 11);
			}
		}
	}
}

void func_69(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_70(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x12B6E23F244DDB0F(iVar0, iParam1, iParam3);
	}
}

int func_70(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_27();
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

void func_71(char* sParam0, int iParam1)
{
	unk_0x37621D6689F9E3C3(sParam0);
	unk_0x092150016C06C431(0, 0, 1, iParam1);
}

int func_72(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_70(iParam1)];
	if (unk_0x75D54ED6C1AD1642(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_73()
{
	int iVar0;
	
	if (!unk_0x0E4018692D92041D(iLocal_63, 17))
	{
		if (!unk_0xFAC8F20FBC764F4D())
		{
			iVar0 = func_72(1190, -1, 0);
			if (!unk_0x0E4018692D92041D(iVar0, 24))
			{
				func_71("BALD_HELP1", -1);
				unk_0x8950ED5730F62EE8(&iVar0, 24);
				func_69(1190, iVar0, -1, 1, 0);
				unk_0x8950ED5730F62EE8(&iLocal_63, 17);
			}
			else if (!unk_0x0E4018692D92041D(iVar0, 25))
			{
				func_71("BALD_HELP2", -1);
				unk_0x8950ED5730F62EE8(&iVar0, 25);
				func_69(1190, iVar0, -1, 1, 0);
				unk_0x8950ED5730F62EE8(&iLocal_63, 17);
			}
			else
			{
				unk_0x8950ED5730F62EE8(&iLocal_63, 17);
			}
		}
	}
}

int func_74()
{
	if (func_102(joaat("cuban800")) && func_102(joaat("s_m_m_pilot_02")))
	{
		if (func_100(&uLocal_70, 4000, 0))
		{
			if (func_77() && func_75())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_75()
{
	if ((!unk_0x22C3124A898FB82A(Local_60.f_3) && func_102(joaat("s_m_m_pilot_02"))) && unk_0x22C3124A898FB82A(Local_60.f_2))
	{
		if (func_35(Local_60.f_2))
		{
			if (func_76(&(Local_60.f_3), Local_60.f_2, 22, joaat("s_m_m_pilot_02"), -1, 1, 1, 1))
			{
				unk_0x4A852F02088ECC9D(unk_0xBB28786B7F552D0B(Local_60.f_3), 1);
				unk_0x0648A75D3F60E864(unk_0xBB28786B7F552D0B(Local_60.f_3), Global_1574987);
				unk_0xC475906893AEB995(unk_0xBB28786B7F552D0B(Local_60.f_3), 0);
				unk_0x897EF720254BBEA3(unk_0xBB28786B7F552D0B(Local_60.f_3), 1);
				unk_0x7FC2040EB34E0E31(unk_0xBB28786B7F552D0B(Local_60.f_3), round((200f * Global_262145.f_153)), 0);
				func_123();
				unk_0x13A2D602CD10CBAC(unk_0xBB28786B7F552D0B(Local_60.f_3), uLocal_65);
				unk_0x4B0F8AD495CC3930(unk_0xFC00F22E930BFD55(Local_60.f_2), round(50f));
			}
		}
	}
	if (!unk_0x22C3124A898FB82A(Local_60.f_3))
	{
		return 0;
	}
	unk_0x71CA80D41E1338B4(joaat("s_m_m_pilot_02"));
	return 1;
}

int func_76(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0xDB7A20748C5E6EF3(1))
	{
		return 0;
	}
	if (!unk_0x22C3124A898FB82A(uParam1))
	{
		return 0;
	}
	if (!unk_0x91D5C8283D19AF49(unk_0xFC00F22E930BFD55(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x50403C3BFA227FE5(unk_0xE196503B36B6194B(unk_0xFC00F22E930BFD55(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0x22C3124A898FB82A(*uParam0))
	{
		unk_0xFE8201EFB515D77B(unk_0xBB28786B7F552D0B(*uParam0), iParam7);
		if (unk_0x0371ECBEC27AF4BE(unk_0xBB28786B7F552D0B(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x841CC2A685D6AF3C(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_77()
{
	vector3 vVar0;
	float fVar1;
	
	if (!unk_0x22C3124A898FB82A(Local_60.f_2))
	{
		if (func_102(joaat("cuban800")))
		{
			func_97(&vVar0, &fVar1);
			if (func_81(vVar0, 6f, 1f, 1f, 5f, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
			{
				if (func_78(&(Local_60.f_2), joaat("cuban800"), vVar0, fVar1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
				{
					unk_0xD303E20CB0AE4AD0(unk_0xFC00F22E930BFD55(Local_60.f_2), 2);
					unk_0xF70578F5CD9822CB(unk_0xFC00F22E930BFD55(Local_60.f_2), false);
					unk_0x76CE32E50F0C5270(unk_0xFC00F22E930BFD55(Local_60.f_2), 1);
					unk_0x7FC263D448DC8CAC(unk_0xFC00F22E930BFD55(Local_60.f_2));
					unk_0x4522AD7364B6AA54(unk_0xFC00F22E930BFD55(Local_60.f_2), 60f);
					unk_0x44D61A9D5B660538(unk_0xFC00F22E930BFD55(Local_60.f_2));
					unk_0x9FABD0AB045A5D6E(unk_0xFC00F22E930BFD55(Local_60.f_2), 1, 1, 0);
					unk_0xD460482B9A347153(unk_0xFC00F22E930BFD55(Local_60.f_2), 0);
					unk_0xFE8201EFB515D77B(unk_0xFC00F22E930BFD55(Local_60.f_2), 0);
					unk_0x6B091F0028E6FE5F(unk_0xFC00F22E930BFD55(Local_60.f_2), 3);
					unk_0xB29B4778A44B21A8(unk_0xFC00F22E930BFD55(Local_60.f_2));
					if (Local_60.f_18 == 1)
					{
						unk_0x4D5F3407F1F37E28(unk_0xFC00F22E930BFD55(Local_60.f_2), 1, 0, 1, 0, 0, 0, 0, 0);
					}
				}
			}
		}
	}
	if (!unk_0x22C3124A898FB82A(Local_60.f_2))
	{
		return 0;
	}
	unk_0x71CA80D41E1338B4(joaat("cuban800"));
	return 1;
}

int func_78(var uParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	float fVar0;
	int iVar1;
	
	if (!unk_0xE96A50F1DE6657CB(iParam1))
	{
		return 0;
	}
	if (!unk_0x9907FB1F75C1A914(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == -32878452)
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		unk_0xB7350047030F7672(vParam2, fVar0, 0, 0, 0, 0, false, 0);
	}
	iVar1 = unk_0xC651C43AB13A15E5(iParam1, vParam2, fParam3, iParam5, iParam4, iParam12);
	if (unk_0x765F6FEEFF39224F(iVar1))
	{
		*uParam0 = unk_0x0C9AA119B878DDB0(iVar1);
		Global_2528542.f_6212 = iVar1;
		if (unk_0x22C3124A898FB82A(*uParam0))
		{
			if (bParam13)
			{
				unk_0xA6C43DE7267202AC(iVar1, 1);
			}
			unk_0xFE8201EFB515D77B(iVar1, iParam8);
			if (unk_0x0371ECBEC27AF4BE(iVar1))
			{
				if (bParam6)
				{
					unk_0x841CC2A685D6AF3C(*uParam0, 1);
				}
				else
				{
					unk_0x841CC2A685D6AF3C(*uParam0, 0);
				}
				if (bParam11)
				{
					unk_0x5A48E05E63034C1F(*uParam0, unk_0x95B959F18401C09A(), 1);
				}
			}
			unk_0x2D5A67427544788C(iVar1, bParam7);
			unk_0x720715BA9E55E55A(iVar1, 1);
			if (bParam10)
			{
				unk_0xCBE9DB870BCC6085(iVar1);
				unk_0xF49FF7B4A27C1B94(iVar1, 5, 5, 1f);
			}
			func_79(vParam2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_79(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_80(unk_0x95B959F18401C09A(), vParam0, iParam2) > -1)
	{
		if ((Global_2405071.f_2908[1 /*6*/].f_5 == iParam3 && Global_2405071.f_2908[1 /*6*/].f_4 == iParam2) && vdist(Global_2405071.f_2908[1 /*6*/], vParam0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2405071.f_2908[iVar0 /*6*/] = { Global_2405071.f_2908[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2405071.f_2908[1 /*6*/] = { vParam0 };
		Global_2405071.f_2908[1 /*6*/].f_3 = fParam1;
		Global_2405071.f_2908[1 /*6*/].f_4 = iParam2;
		Global_2405071.f_2908[1 /*6*/].f_5 = iParam3;
	}
}

int func_80(int iParam0, vector3 vParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam2)
			{
				vVar2 = { vParam1 };
				if (unk_0x7EECA16E87982278((Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - vVar2.z)) < 2f)
				{
					vVar2.z = Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (vdist(Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/], vVar2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_81(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	Global_2405071.f_2 = 0;
	if (fParam1 > 0f)
	{
		if (unk_0x7E0147E36EF8D6AC(vParam0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (unk_0xBEEA641EE4F42DBD(vParam0.x, vParam0.y, (vParam0.z + 1f), fParam2) || unk_0xBEEA641EE4F42DBD(vParam0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (unk_0xC106293D8BB9B710(vParam0, fParam3, iParam16))
		{
			return 0;
		}
	}
	Global_2405071.f_2++;
	if (bParam11)
	{
		if (unk_0x1D05F456626EB273(vParam0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405071.f_2++;
	if (fParam12 > 0f)
	{
		if (func_90(vParam0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_2405071.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_82(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2405071.f_2++;
	return 1;
}

int func_82(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_37(unk_0x95B959F18401C09A(), 1, 1))
		{
			if (!unk_0xBB5E373390A5F824())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0x16E00F066AFFEA0D(func_86(unk_0x95B959F18401C09A()), vParam0, 1) <= (fVar2 + fParam1))
				{
					if (unk_0x73E7A21FD53144AB(vParam0, fParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_37(iVar1, 1, 1))
		{
			if (!func_84(iVar1, 0) && unk_0xB4B29C6A8F481EEA(unk_0x95B959F18401C09A(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0x95B959F18401C09A()))
				{
					if ((func_83(iVar1) || !bParam8) && !Global_2424047[iVar1 /*416*/].f_259)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!unk_0x12D3B4C76D4AAB00(iVar1) == -1)
							{
								if (unk_0x12D3B4C76D4AAB00(iVar1) == unk_0x12D3B4C76D4AAB00(unk_0x95B959F18401C09A()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && unk_0x12D3B4C76D4AAB00(iVar1) != unk_0x12D3B4C76D4AAB00(unk_0x95B959F18401C09A()))) || unk_0x12D3B4C76D4AAB00(iVar1) == -1)
							{
								if (unk_0x16E00F066AFFEA0D(func_86(iVar1), vParam0, 1) <= (fVar2 + fParam1))
								{
									if (unk_0x0E3238518B355643(iVar1, vParam0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x12D3B4C76D4AAB00(iVar1) != iParam6 || unk_0x12D3B4C76D4AAB00(iVar1) == -1)
						{
							if (unk_0x16E00F066AFFEA0D(func_86(iVar1), vParam0, 1) <= (fVar2 + fParam1))
							{
								if (unk_0x0E3238518B355643(iVar1, vParam0, fParam1))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_83(int iParam0)
{
	if (unk_0x0A4B2B44CD064704(unk_0x378BD4B3881338C2(iParam0)) || Global_2424047[iParam0 /*416*/].f_245)
	{
		return 1;
	}
	return 0;
}

bool func_84(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x95B959F18401C09A())
	{
		bVar0 = func_85(-1, 0) == 8;
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

int func_85(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_27();
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

Vector3 func_86(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_89() && Global_1589819[iVar0 /*818*/].f_789) && !func_88(Global_1589819[iVar0 /*818*/].f_790))
	{
		return Global_1589819[iVar0 /*818*/].f_790;
	}
	return func_87(iParam0);
}

Vector3 func_87(int iParam0)
{
	return unk_0xFBB1F99A825CAB09(unk_0x378BD4B3881338C2(iParam0), 0);
}

int func_88(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

var func_89()
{
	return Global_2448756.f_16;
}

int func_90(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && unk_0x95B959F18401C09A() != iVar1) || iParam6 == 0)
		{
			if (func_37(iVar1, bParam2, bParam3))
			{
				if (unk_0xB4B29C6A8F481EEA(unk_0x95B959F18401C09A(), iVar1))
				{
					if (!bParam5 || (!unk_0xBC2FC12AD0FBF72E(unk_0x378BD4B3881338C2(iVar1)) && func_83(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x12D3B4C76D4AAB00(unk_0x95B959F18401C09A()) != unk_0x12D3B4C76D4AAB00(iVar1))) || unk_0x12D3B4C76D4AAB00(unk_0x95B959F18401C09A()) == -1)
						{
							if (((unk_0x12D3B4C76D4AAB00(unk_0x95B959F18401C09A()) == -1 && uParam7) && bParam4) && func_91(iVar1))
							{
							}
							else if (unk_0x765F6FEEFF39224F(unk_0x378BD4B3881338C2(iVar1)))
							{
								if (unk_0x16E00F066AFFEA0D(func_87(iVar1), vParam0, 1) < fParam1)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_91(int iParam0)
{
	if (func_96(unk_0x95B959F18401C09A(), iParam0))
	{
		return 1;
	}
	Global_2505680 = { func_95(iParam0) };
	if (unk_0xFC40DD2526841632(&Global_2505680))
	{
		return 1;
	}
	if (func_92(unk_0x95B959F18401C09A(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_92(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_94(iParam0);
	if (!iVar0 == func_93())
	{
		if (iVar0 == func_94(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_93()
{
	return -1;
}

int func_94(int iParam0)
{
	if (iParam0 != func_93())
	{
		return Global_1626536[iParam0 /*603*/].f_11;
	}
	return func_93();
}

struct<13> func_95(int iParam0)
{
	struct<13> Var0;
	
	unk_0xBC1B3D38C4BB38F4(iParam0, &Var0, 13);
	return Var0;
}

int func_96(int iParam0, int iParam1)
{
	if (unk_0x062B7A5C795CB453())
	{
		Global_2505680 = { func_95(iParam0) };
		Global_2505693 = { func_95(iParam1) };
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

void func_97(var uParam0, var uParam1)
{
	float fVar0;
	
	*uParam0 = { func_98(Local_60.f_6 + Vector(200f, 0f, 0f), (400f / 2f), 400f, (200f / 2f)) };
	*uParam1 = unk_0x174C48E9E544E9A8((Local_60.f_6 - *uParam0), (Local_60.f_6.f_1 - uParam0->f_1));
	fVar0 = unk_0x954BB77DB6263C48((*uParam0 - 400f), (uParam0->f_1 - 400f), (*uParam0 + 400f), (uParam0->f_1 + 400f));
	if (uParam0->f_2 < fVar0)
	{
		uParam0->f_2 = fVar0;
	}
}

Vector3 func_98(vector3 vParam0, float fParam1, float fParam2, float fParam3)
{
	vector3 vVar0;
	float fVar1;
	
	vVar0 = { unk_0x9562E33C057F7589(-1f, 1f), unk_0x9562E33C057F7589(-1f, 1f), 0f };
	fVar1 = (fParam3 / 2f);
	vVar0 = { func_99(vVar0, unk_0x9562E33C057F7589(fParam1, fParam2)) };
	vVar0.z = unk_0x9562E33C057F7589(-fVar1, fVar1);
	return vParam0 + vVar0;
}

Vector3 func_99(vector3 vParam0, float fParam1)
{
	float fVar0;
	
	if (fParam1 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		return vParam0 * FtoV((fParam1 / fVar0));
	}
	return 0f, 0f, 0f;
}

int func_100(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_101(uParam0, bParam2, 0);
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

void func_101(var uParam0, bool bParam1, bool bParam2)
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

bool func_102(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xB815670C37E03CDE(iParam0);
	return unk_0x5D98D654CDC2165A(iParam0);
}

int func_103(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0xEE14D9A9F531ADDC(unk_0x5009A219B22D2352(unk_0x78DCC5D0CB43DEBA(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_104(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x06C1EBC003C18F1F())
		{
			func_101(uParam0, 0, 0);
		}
	}
}

void func_105()
{
	func_114();
	switch (vLocal_62[unk_0x72B85B341ADBE9DE() /*3*/].f_2)
	{
		case 0:
			if (Local_60.f_12 > 0)
			{
				vLocal_62[unk_0x72B85B341ADBE9DE() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			func_110();
			func_106();
			break;
		
		case 2:
			func_140();
			break;
	}
}

void func_106()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x22C3124A898FB82A(Local_60.f_4))
	{
		if (func_37(unk_0x95B959F18401C09A(), 1, 1))
		{
			iVar1 = func_109(unk_0x33CD235DF1E6A94E());
			if (((((((((((((((((iVar1 == joaat("weapon_unarmed") || iVar1 == joaat("weapon_flare")) || iVar1 == joaat("weapon_knife")) || iVar1 == joaat("weapon_nightstick")) || iVar1 == joaat("weapon_bat")) || iVar1 == joaat("weapon_hammer")) || iVar1 == joaat("weapon_golfclub")) || iVar1 == joaat("weapon_crowbar")) || iVar1 == joaat("weapon_molotov")) || iVar1 == joaat("weapon_grenade")) || iVar1 == joaat("weapon_grenadelauncher")) || iVar1 == joaat("weapon_grenadelauncher_smoke")) || iVar1 == joaat("weapon_petrolcan")) || iVar1 == joaat("weapon_rpg")) || iVar1 == joaat("weapon_smokegrenade")) || iVar1 == joaat("weapon_stickybomb")) || iVar1 == joaat("weapon_bzgas")) || iVar1 == joaat("weapon_bottle"))
			{
				iVar1 = Global_1312415;
			}
			unk_0x29577D0C92766C53(unk_0x33CD235DF1E6A94E(), iVar1, &iVar0);
			if ((func_108(iVar1) && func_107(iVar1)) && unk_0xFAF00EC53D4815FE(unk_0x33CD235DF1E6A94E(), iVar1) < iVar0)
			{
			}
			else if (unk_0x06C1EBC003C18F1F())
			{
				if (!unk_0x0E4018692D92041D(iLocal_63, 12))
				{
					if (!unk_0xFAC8F20FBC764F4D())
					{
						if (Local_60.f_18)
						{
							func_71("BALD_HELP3", -1);
						}
						else
						{
							func_71("AMD_HELP3", -1);
						}
						unk_0x8950ED5730F62EE8(&iLocal_63, 12);
					}
				}
				else if (!unk_0x0E4018692D92041D(iLocal_63, 13))
				{
					if (!unk_0xFAC8F20FBC764F4D())
					{
						if (unk_0x4F94F07DAD382CDA(Local_60.f_4))
						{
							if (unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), unk_0xE4B835FDC8B9B086(Local_60.f_4), 10f, 10f, 10f, 0, 1, 0))
							{
								if (func_100(&uLocal_68, 20000, 0))
								{
									if (!Local_60.f_18)
									{
										func_71("AMD_HELP3", -1);
									}
									unk_0x8950ED5730F62EE8(&iLocal_63, 13);
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_107(int iParam0)
{
	if ((((((((((iParam0 == joaat("gadget_parachute") || iParam0 == joaat("weapon_knife")) || iParam0 == joaat("weapon_bat")) || iParam0 == joaat("weapon_crowbar")) || iParam0 == joaat("weapon_nightstick")) || iParam0 == joaat("weapon_golfclub")) || iParam0 == joaat("weapon_hammer")) || iParam0 == joaat("weapon_bat")) || iParam0 == joaat("weapon_bottle")) || iParam0 == joaat("weapon_dagger")) || iParam0 == joaat("weapon_hatchet"))
	{
		return 0;
	}
	return 1;
}

int func_108(int iParam0)
{
	if (iParam0 == joaat("weapon_flare"))
	{
		return 0;
	}
	return 1;
}

var func_109(int iParam0)
{
	var uVar0;
	
	unk_0x96C4B46F194803A7(iParam0, &uVar0, 1);
	return uVar0;
}

void func_110()
{
	bool bVar0;
	vector3 vVar1;
	int iVar2;
	
	if (unk_0x4F94F07DAD382CDA(Local_60.f_4))
	{
		if (unk_0x6F3D61B58C7B4025(Local_60.f_4) || (!unk_0x5E2784BB00B20E8E(Local_60.f_4) && unk_0x06C1EBC003C18F1F()))
		{
			if (unk_0x4F94F07DAD382CDA(Local_60.f_5))
			{
				if (unk_0x6F3D61B58C7B4025(Local_60.f_5) || (!unk_0x5E2784BB00B20E8E(Local_60.f_5) && unk_0x06C1EBC003C18F1F()))
				{
					if (func_113(Local_60.f_4) && func_113(Local_60.f_5))
					{
						if (!unk_0x0E4018692D92041D(iLocal_63, 8))
						{
							if (unk_0x0E4018692D92041D(iLocal_63, 7))
							{
								if (!unk_0x1CE8F0A08E65CA6A(unk_0xE4B835FDC8B9B086(Local_60.f_5), "P_cargo_chute_S", "P_cargo_chute_S_crumple", 3))
								{
									unk_0x8950ED5730F62EE8(&iLocal_63, 8);
									func_3(&(Local_60.f_5));
									if (Local_60.f_18 == 1)
									{
										func_67(unk_0xE4B835FDC8B9B086(Local_60.f_4));
									}
								}
							}
						}
						if (!unk_0x0E4018692D92041D(iLocal_63, 7))
						{
							if (unk_0x0E4018692D92041D(iLocal_63, 6))
							{
								if (unk_0x1CE8F0A08E65CA6A(unk_0xE4B835FDC8B9B086(Local_60.f_5), "P_cargo_chute_S", "P_cargo_chute_S_crumple", 3))
								{
									unk_0x8950ED5730F62EE8(&iLocal_63, 7);
								}
							}
						}
						if (!unk_0x0E4018692D92041D(iLocal_63, 6))
						{
							unk_0x039BADEB7A41B445(unk_0xE4B835FDC8B9B086(Local_60.f_4), 2, 0.0245f);
							if (func_111())
							{
								unk_0x1BE9DE786D9E5DF3(unk_0xE4B835FDC8B9B086(Local_60.f_5), "P_cargo_chute_S_crumple", "P_cargo_chute_S", 1000f, 0, 0, 0, 0f, 0);
								unk_0x8950ED5730F62EE8(&iLocal_63, 6);
								if (unk_0xE38E3CF1625A4145(iLocal_64))
								{
									unk_0xE447A1B9434714F3(iLocal_64, 255);
								}
							}
						}
					}
				}
			}
			if (!unk_0x0E4018692D92041D(iLocal_63, 14))
			{
				if (unk_0x4F94F07DAD382CDA(Local_60.f_19))
				{
					if (unk_0x6F3D61B58C7B4025(Local_60.f_19) || (!unk_0x5E2784BB00B20E8E(Local_60.f_19) && unk_0x06C1EBC003C18F1F()))
					{
						if (func_113(Local_60.f_19))
						{
							unk_0x039BADEB7A41B445(unk_0xE4B835FDC8B9B086(Local_60.f_19), 2, 0.1f);
							if (unk_0x68B9F6D5580D0106(unk_0xE4B835FDC8B9B086(Local_60.f_19), 0))
							{
								if (unk_0x4F94F07DAD382CDA(Local_60.f_4))
								{
									unk_0x35F11A916FDFCF32(unk_0xE4B835FDC8B9B086(Local_60.f_4), 1, 1);
									if (Local_60.f_18 == 1)
									{
										func_67(unk_0xE4B835FDC8B9B086(Local_60.f_4));
									}
								}
								unk_0x8950ED5730F62EE8(&iLocal_63, 14);
							}
						}
						if (!unk_0x0E4018692D92041D(Local_60.f_1, 8) && unk_0x0E4018692D92041D(iLocal_63, 8))
						{
							if (func_113(Local_60.f_19))
							{
								if (!unk_0x719381AA15935FDC(unk_0xE4B835FDC8B9B086(Local_60.f_19)) && unk_0x715998283B012F11(unk_0xE4B835FDC8B9B086(Local_60.f_19)))
								{
									if (unk_0x45AD2119A5B580CD(unk_0xE4B835FDC8B9B086(Local_60.f_19)))
									{
										bVar0 = true;
									}
									else if (!unk_0x7DD221C91135596A(unk_0xE4B835FDC8B9B086(Local_60.f_19)) && unk_0xA4E357ABBEF712C9(unk_0xE4B835FDC8B9B086(Local_60.f_19)))
									{
										bVar0 = true;
									}
									if (bVar0)
									{
										unk_0x5628CE9F91160050(unk_0xE4B835FDC8B9B086(Local_60.f_19), 0);
										unk_0x8950ED5730F62EE8(&(Local_60.f_1), 8);
									}
									if (Local_60.f_18 == 1)
									{
										func_67(unk_0xE4B835FDC8B9B086(Local_60.f_4));
									}
								}
							}
						}
					}
				}
			}
			vVar1 = { unk_0xFBB1F99A825CAB09(unk_0xE4B835FDC8B9B086(Local_60.f_4), 1) };
			if (vVar1.z < -50f && !unk_0x8AE34E8B10270D31(unk_0xE4B835FDC8B9B086(Local_60.f_4)))
			{
				if (func_113(Local_60.f_4))
				{
					unk_0xBEADAF07D2339505(unk_0xE4B835FDC8B9B086(Local_60.f_4), Local_60.f_6, 1, 0, 0, 1);
					if (Local_60.f_18 == 1)
					{
						func_67(unk_0xE4B835FDC8B9B086(Local_60.f_4));
					}
				}
			}
			if (unk_0x4F94F07DAD382CDA(Local_60.f_4))
			{
				if (unk_0x4F94F07DAD382CDA(Local_60.f_19) && unk_0x9F4718FD61B07058(unk_0xE4B835FDC8B9B086(Local_60.f_4)))
				{
					iVar2 = unk_0xE4B835FDC8B9B086(Local_60.f_19);
				}
				else
				{
					iVar2 = unk_0xE4B835FDC8B9B086(Local_60.f_4);
				}
			}
			if (unk_0x765F6FEEFF39224F(iVar2))
			{
				if (!unk_0x0E4018692D92041D(iLocal_63, 16))
				{
					if (unk_0x073F9A78D00FB9C0(iVar2) >= 0.9f)
					{
						if (unk_0xF90274A2198D0169(Local_60.f_16) != -1)
						{
							unk_0x1819081E2D6040CB(unk_0xF90274A2198D0169(Local_60.f_16), "Crate_Underwater", 1f);
						}
						unk_0x8950ED5730F62EE8(&iLocal_63, 16);
					}
				}
				else if (unk_0x073F9A78D00FB9C0(iVar2) < 0.9f)
				{
					if (unk_0xF90274A2198D0169(Local_60.f_16) != -1)
					{
						unk_0x1819081E2D6040CB(unk_0xF90274A2198D0169(Local_60.f_16), "Crate_Underwater", 0f);
					}
					unk_0xCE689A8E8C42ED78(&iLocal_63, 16);
				}
			}
		}
	}
}

int func_111()
{
	int iVar0;
	
	if (unk_0x4F94F07DAD382CDA(Local_60.f_19))
	{
		if (!unk_0x7DD221C91135596A(unk_0xE4B835FDC8B9B086(Local_60.f_19)))
		{
			iVar0 = 1;
		}
		if (unk_0x68B9F6D5580D0106(unk_0xE4B835FDC8B9B086(Local_60.f_19), 0))
		{
			iVar0 = 1;
		}
		if (unk_0x8AE34E8B10270D31(unk_0xE4B835FDC8B9B086(Local_60.f_19)))
		{
			iVar0 = 1;
		}
		if (func_112())
		{
			iVar0 = 1;
		}
		if (iVar0 == 1)
		{
			if (func_113(Local_60.f_19))
			{
				unk_0x5628CE9F91160050(unk_0xE4B835FDC8B9B086(Local_60.f_19), 0);
				return 1;
			}
		}
	}
	return 0;
}

int func_112()
{
	float fVar0;
	
	fVar0 = unk_0xD3B014D54AEA6296(unk_0xE4B835FDC8B9B086(Local_60.f_5));
	if (fVar0 > 10f || fVar0 < -10f)
	{
		return 1;
	}
	fVar0 = unk_0x582A50CDE1F806AE(unk_0xE4B835FDC8B9B086(Local_60.f_5));
	if (fVar0 > 10f || fVar0 < -10f)
	{
		return 1;
	}
	return 0;
}

int func_113(var uParam0)
{
	if (unk_0x22C3124A898FB82A(uParam0))
	{
		unk_0x254D3936DA813A55(uParam0);
		return unk_0x6F3D61B58C7B4025(uParam0);
	}
	return 0;
}

void func_114()
{
	int iVar0;
	
	iVar0 = unk_0x04C948F9025CE510(false, 0);
	if (Local_60.f_13 != iVar0)
	{
		if (Local_60.f_13 > 0 || !unk_0x22C3124A898FB82A(Local_60.f_2))
		{
			if (Local_60.f_13 < iVar0 || func_122(Local_60.f_13, 0, 1))
			{
				unk_0x9D34F024713B3952(Local_60.f_13);
			}
		}
	}
	iVar0 = unk_0x276149CFFB30EADE(false, 0);
	if (Local_60.f_14 != iVar0)
	{
		if (Local_60.f_14 > 0 || !unk_0x22C3124A898FB82A(Local_60.f_3))
		{
			if (Local_60.f_14 < iVar0 || func_121(Local_60.f_14, 0, 1))
			{
				unk_0x4F8CF72358604361(Local_60.f_14);
			}
		}
	}
	iVar0 = unk_0x88CD84C553EF6ED9(false, 0);
	if (Local_60.f_15 != iVar0)
	{
		if (Local_60.f_15 < iVar0 || func_115(Local_60.f_15, 0, 1))
		{
			unk_0x12F5DDEAB00B8213(Local_60.f_15);
		}
	}
}

int func_115(int iParam0, bool bParam1, bool bParam2)
{
	return func_116(2, iParam0, 1, bParam1, bParam2);
}

int func_116(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x0E4018692D92041D(Global_1383928, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_120(iParam0) - func_119(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_119(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_120(iParam0) - func_118(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_119(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_120(iParam0) - func_119(iParam0, 1));
		}
		if (!bParam4 && Global_1589819[unk_0x95B959F18401C09A() /*818*/] != 3)
		{
			iVar1 = (iVar1 - func_117(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_117(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_118(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1383928.f_1;
			break;
		
		case 1:
			return Global_1383928.f_2;
			break;
		
		case 2:
			return Global_1383928.f_3;
			break;
	}
	return 0;
}

int func_119(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x95B959F18401C09A();
	switch (iParam0)
	{
		case 0:
			if (!unk_0xE36862B47CD70685())
			{
				return Global_2424047[iVar0 /*416*/].f_209;
			}
			else
			{
				return unk_0x276149CFFB30EADE(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!unk_0xE36862B47CD70685())
			{
				return Global_2424047[iVar0 /*416*/].f_210;
			}
			else
			{
				return unk_0x04C948F9025CE510(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!unk_0xE36862B47CD70685())
			{
				return Global_2424047[iVar0 /*416*/].f_211;
			}
			else
			{
				return unk_0x88CD84C553EF6ED9(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_120(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1383936;
			break;
		
		case 1:
			return Global_1383937;
			break;
		
		case 2:
			return Global_1383938;
			break;
	}
	return 0;
}

int func_121(int iParam0, bool bParam1, bool bParam2)
{
	return func_116(0, iParam0, 1, bParam1, bParam2);
}

int func_122(int iParam0, bool bParam1, bool bParam2)
{
	return func_116(1, iParam0, 1, bParam1, bParam2);
}

void func_123()
{
	if (!unk_0x0E4018692D92041D(iLocal_63, 10))
	{
		if (func_35(Local_60.f_2))
		{
			unk_0x99414FB2D30425C1(&uLocal_65);
			unk_0x77C4189A8E5C57C2(0, unk_0xFC00F22E930BFD55(Local_60.f_2), Local_60.f_6 + Vector(50f, 0f, 0f), 60f, 0, joaat("cuban800"), 262144, 15f, -1f);
			unk_0x77C4189A8E5C57C2(0, unk_0xFC00F22E930BFD55(Local_60.f_2), Local_60.f_9, 60f, 0, joaat("cuban800"), 262144, -1f, -1f);
			unk_0xC734F59A13D39AEF(uLocal_65);
			unk_0x8950ED5730F62EE8(&iLocal_63, 10);
		}
	}
}

int func_124()
{
	return Local_60;
}

int func_125()
{
	int iVar0;
	
	iVar0 = joaat("prop_box_ammo02a");
	if (Local_60.f_18 == 1)
	{
		iVar0 = 1688540826;
	}
	unk_0xB815670C37E03CDE(iVar0);
	unk_0xB815670C37E03CDE(joaat("p_cargo_chute_s"));
	if ((unk_0x5D98D654CDC2165A(iVar0) && unk_0x5D98D654CDC2165A(joaat("p_cargo_chute_s"))) && func_126())
	{
		return 1;
	}
	return 0;
}

int func_126()
{
	unk_0x0483D0035D6E46FD("P_cargo_chute_S");
	if (unk_0xE9CCF312047EBEE0("P_cargo_chute_S"))
	{
		return 1;
	}
	return 0;
}

int func_127(int iParam0)
{
	return vLocal_62[iParam0 /*3*/];
}

int func_128()
{
	var uVar0;
	
	func_136(&uVar0);
	if (Global_1312844 == 0)
	{
		if (!unk_0xB331FCEB94EB05C8())
		{
			return 1;
		}
	}
	if (func_135())
	{
		return 1;
	}
	if (Global_2460852)
	{
		return 1;
	}
	if (func_134())
	{
		return 1;
	}
	if (func_133(157))
	{
		if (!func_132())
		{
			return 1;
		}
	}
	if (func_133(155))
	{
		return 1;
	}
	if (!unk_0x43E505744A9B715D())
	{
		return 1;
	}
	if (func_129() != 0)
	{
		if (unk_0x1BCDA92AD0A7835B(func_129()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_129()
{
	switch (func_131())
	{
		case 0:
			return func_130();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_130()
{
	switch (Global_2460954)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_131()
{
	return Global_25765;
}

bool func_132()
{
	return Global_2448756.f_586;
}

int func_133(int iParam0)
{
	if (unk_0x3AE20F34FEE6C258(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_134()
{
	return Global_2458613;
}

bool func_135()
{
	return Global_2448756.f_581;
}

void func_136(var uParam0)
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
					func_137(iVar0);
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

void func_137(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x286A5F0670063839(1, iParam0, &vVar0, 3))
	{
		if (func_37(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x378BD4B3881338C2(vVar0.y);
			if (unk_0x765F6FEEFF39224F(iVar1))
			{
				if (unk_0xF0D230FB550CD6EB(iVar1, 0))
				{
					iVar2 = unk_0xF2C96862595654B4(iVar1, 0);
					if (unk_0x8F6C3DD0BB146CA3(iVar2, vVar0.z) && unk_0xE36862B47CD70685())
					{
						if (func_138(iVar2, &bVar3))
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

int func_138(int iParam0, var uParam1)
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

void func_139()
{
	wait(0);
}

void func_140()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0xE38E3CF1625A4145(iLocal_64))
	{
		unk_0x1ABDB383C83A336A(&iLocal_64);
	}
	if (unk_0x06C1EBC003C18F1F())
	{
		iVar0 = 0;
		while (iVar0 < 250)
		{
			if (iVar1 == 0)
			{
				if (unk_0x4F94F07DAD382CDA(Local_60.f_19))
				{
					if (unk_0x68B9F6D5580D0106(unk_0xE4B835FDC8B9B086(Local_60.f_19), 0))
					{
						if (func_113(Local_60.f_19))
						{
							unk_0x5628CE9F91160050(unk_0xE4B835FDC8B9B086(Local_60.f_19), 0);
							iVar1 = 1;
						}
					}
					else
					{
						iVar1 = 1;
					}
				}
				else
				{
					iVar1 = 1;
				}
			}
			if (iVar2 == 0)
			{
				if (unk_0x4F94F07DAD382CDA(Local_60.f_4))
				{
					if (unk_0x9F4718FD61B07058(unk_0xE4B835FDC8B9B086(Local_60.f_4)))
					{
						if (func_113(Local_60.f_4))
						{
							unk_0x35F11A916FDFCF32(unk_0xE4B835FDC8B9B086(Local_60.f_4), 1, 1);
							iVar2 = 1;
						}
					}
					else
					{
						iVar2 = 1;
					}
				}
				else
				{
					iVar2 = 1;
				}
			}
			if (iVar3 == 0)
			{
				if (unk_0x4F94F07DAD382CDA(Local_60.f_5))
				{
					if (func_113(Local_60.f_5))
					{
						func_3(&(Local_60.f_5));
						iVar3 = 1;
					}
				}
				else
				{
					iVar3 = 1;
				}
			}
			if ((iVar2 == 1 && iVar3 == 1) && iVar1 == 1)
			{
				iVar0 = 9999;
			}
			else
			{
				wait(0);
			}
			iVar0++;
		}
		Local_60 = 4;
		func_144(func_145(1, 1), 8, func_93());
	}
	func_143();
	func_66();
	func_142();
	func_141();
}

void func_141()
{
	unk_0x5894DC159447E10A();
}

void func_142()
{
	if (unk_0x0E4018692D92041D(iLocal_63, 10))
	{
		unk_0xA7A57E7757ED035E(&uLocal_65);
	}
}

void func_143()
{
	if (iLocal_66 != 0)
	{
		if (unk_0xC2FDDE313D5A5398(iLocal_66))
		{
			unk_0x91F3E4311D34B364(iLocal_66, 0);
			iLocal_66 = 0;
		}
	}
}

void func_144(int iParam0, int iParam1, var uParam2)
{
	struct<4> Var0;
	
	Var0 = -418126478;
	Var0.f_1 = unk_0x95B959F18401C09A();
	Var0.f_3 = iParam1;
	Var0.f_2 = uParam2;
	if (!iParam0 == 0)
	{
		unk_0x09269A9CFC145847(1, &Var0, 6, iParam0);
	}
}

int func_145(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x7C1C88877E8AAA50(iVar1);
		if (func_37(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x95B959F18401C09A() || iParam0)
			{
				if (bParam1)
				{
					unk_0x8950ED5730F62EE8(&uVar0, iVar1);
				}
				else if (!func_84(iVar2, 0))
				{
					unk_0x8950ED5730F62EE8(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_146(struct<21> Param0)
{
	int iVar0;
	
	func_150(func_151(Param0), Param0);
	unk_0x4F8CF72358604361(1);
	unk_0x9D34F024713B3952(1);
	unk_0x12F5DDEAB00B8213(2);
	func_148(0, -1, 0);
	unk_0x7643BB59992A9E6E(&Local_60, 23);
	unk_0x568D314D73140729(&vLocal_62, 97);
	if (!func_147())
	{
		return 0;
	}
	unk_0x9980AE643A60F372(0);
	if (unk_0x06C1EBC003C18F1F())
	{
		Local_60.f_17 = unk_0x95B959F18401C09A();
		Local_60.f_6 = { unk_0x2CA911E7569D12EA(unk_0x33CD235DF1E6A94E(), 0f, (5f * 1.5f), 0f) };
		Local_60.f_13 = 1;
		Local_60.f_14 = 1;
		Local_60.f_15 = 3;
		Local_60.f_9 = { 0f, 0f, 500f };
		if (Param0.f_20 == 3)
		{
			Local_60.f_18 = 1;
		}
		iVar0 = unk_0x9EC3B269A34A2BEE(0, 3);
		if (iVar0 == 1)
		{
			Local_60.f_9 = 9000f;
		}
		else if (iVar0 == 2)
		{
			Local_60.f_9 = -9000f;
		}
		iVar0 = unk_0x9EC3B269A34A2BEE(0, 3);
		if (iVar0 == 1)
		{
			Local_60.f_9.f_1 = 9000f;
		}
		else if (iVar0 == 2)
		{
			Local_60.f_9.f_1 = -9000f;
		}
		if (Local_60.f_9 == 0f && Local_60.f_9.f_1 == 0f)
		{
			Local_60.f_9 = { -9000f, 5000f, 500f };
		}
	}
	iLocal_67 = unk_0x69E8EDFEA57E361D();
	if (unk_0xB331FCEB94EB05C8())
	{
		vLocal_62[unk_0x72B85B341ADBE9DE() /*3*/] = 0;
	}
	return 1;
}

int func_147()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0xB331FCEB94EB05C8())
		{
			return 0;
		}
		if (unk_0x4BA2474DB2034FF1())
		{
			return 1;
		}
		if (func_135())
		{
			return 0;
		}
		if (func_133(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		wait(0);
	}
	return 0;
}

int func_148(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x52119E312E15DB07();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_141();
			}
			else
			{
				return 0;
			}
		}
		if (!func_149())
		{
			if (iParam0 == 0)
			{
				if (!unk_0xB331FCEB94EB05C8())
				{
					if (!bParam2)
					{
						func_141();
					}
					else
					{
						return 0;
					}
				}
				if (func_135())
				{
					if (!bParam2)
					{
						func_141();
					}
					else
					{
						return 0;
					}
				}
				if (func_133(155))
				{
					if (!bParam2)
					{
						func_141();
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
					func_141();
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
				func_141();
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
			func_141();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_149()
{
	return Global_1312844;
}

void func_150(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0xB331FCEB94EB05C8())
	{
		func_141();
	}
	unk_0x210E46A190FB3CB3(iParam0, 0, Param1.f_16);
}

int func_151(int iParam0)
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

