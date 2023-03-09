#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
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
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
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
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	bool bLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	bool bLocal_58 = 0;
	int iLocal_59 = 0;
	vector3 vLocal_60 = { 0f, 0f, 0f };
	vector3 vLocal_61 = { 0f, 0f, 0f };
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 16;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
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
	int iLocal_234 = 0;
	int iLocal_235 = 0;
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	struct<57> Local_238 = { 0, 0, 0, -1281684762, 0, 0, -163714847, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_239 = 0;
	struct<5> Local_240[2];
	struct<21> Local_241 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()
{
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	sLocal_21 = "NULL";
	fLocal_24 = 80f;
	fLocal_25 = 140f;
	fLocal_26 = 180f;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	if (unk_0xB331FCEB94EB05C8())
	{
		func_106(ScriptParam_241);
	}
	while (true)
	{
		func_105();
		if (func_94())
		{
			func_90();
		}
		if (unk_0xB331FCEB94EB05C8())
		{
			func_89();
			switch (func_88(unk_0x72B85B341ADBE9DE()))
			{
				case 0:
					if (func_87() > 0)
					{
						Local_240[unk_0x72B85B341ADBE9DE() /*5*/] = 2;
					}
					break;
				
				case 2:
					if (func_87() == 3)
					{
						Local_240[unk_0x72B85B341ADBE9DE() /*5*/] = 3;
					}
					break;
				
				case 3:
					func_90();
					break;
			}
			if (unk_0x06C1EBC003C18F1F())
			{
				switch (func_87())
				{
					case 0:
						Local_238 = 2;
						break;
					
					case 2:
						func_1();
						break;
					
					case 3:
						break;
					}
				}
		}
	}
}

void func_1()
{
	switch (Local_238.f_1)
	{
		case 0:
			func_26();
			break;
		
		case 1:
			func_25();
			break;
	}
	if (Local_238.f_2.f_2 == 3 && iLocal_57 == 0)
	{
		Local_238 = 3;
	}
	func_18();
	if (Local_238.f_53 && Local_238.f_50 < 10)
	{
		func_13();
	}
	if (Local_238.f_50 >= 10)
	{
		if (!func_12(&uLocal_65))
		{
			func_11(&uLocal_65, 0, 0);
		}
		else if (func_10(&uLocal_65, 10000, 0))
		{
			Local_238 = 3;
		}
	}
	if (func_9())
	{
		Local_238 = 3;
	}
	if (Local_238.f_55 == 1)
	{
		if (!Local_238.f_56)
		{
			if (((!unk_0xFAC8F20FBC764F4D() || func_8("AIRSTRIKE_1")) || func_8("AIRSTRIKE_2")) || func_8("AIRSTRIKE_4"))
			{
				func_7("AIRSTRIKE_3", -1);
				Local_238.f_56 = 1;
			}
		}
	}
	if (bLocal_52)
	{
		if (!func_4(unk_0x95B959F18401C09A(), 1))
		{
			Local_238 = 3;
		}
	}
	else if (func_4(unk_0x95B959F18401C09A(), 1) || func_3())
	{
		Local_238 = 3;
	}
	if (unk_0x286C823E0969F22A())
	{
		Local_238 = 3;
	}
	if (Global_2506344.f_170 || func_2(unk_0x95B959F18401C09A()))
	{
		Local_238 = 3;
	}
}

int func_2(int iParam0)
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

bool func_3()
{
	return unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_39.f_18, 0);
}

int func_4(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_5(iParam0))
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

bool func_5(int iParam0)
{
	return func_6(iParam0);
}

bool func_6(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_13.f_1, 0);
}

void func_7(char* sParam0, int iParam1)
{
	unk_0x37621D6689F9E3C3(sParam0);
	unk_0x092150016C06C431(0, 0, 1, iParam1);
}

bool func_8(char* sParam0)
{
	unk_0x6D39881CA5436178(sParam0);
	return unk_0xA32C2C4DF096C08A(0);
}

bool func_9()
{
	return Global_1312417;
}

int func_10(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_11(uParam0, bParam2, 0);
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

void func_11(var uParam0, bool bParam1, bool bParam2)
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

bool func_12(var uParam0)
{
	return uParam0->f_1;
}

void func_13()
{
	vector3 vVar0;
	vector3 vVar1;
	int iVar2;
	
	iVar2 = 200;
	if (func_17(vLocal_61))
	{
		if (func_15(Local_238.f_2))
		{
			vLocal_61 = { unk_0xFBB1F99A825CAB09(unk_0xFC00F22E930BFD55(Local_238.f_2), 1) };
			vLocal_61.z = (vLocal_61.z - 5f);
		}
	}
	switch (Local_238.f_50)
	{
		case 0:
			if (!func_12(&(Local_238.f_51)))
			{
				if (!unk_0x0E4018692D92041D(iLocal_237, Local_238.f_50))
				{
					vVar0 = { Local_240[unk_0x72B85B341ADBE9DE() /*5*/].f_2 };
					vVar0.z = vLocal_61.z;
					vVar1 = { Local_240[unk_0x72B85B341ADBE9DE() /*5*/].f_2 };
					vVar1 = { vVar1 + Vector(0f, 0.1f, 0.1f) };
					unk_0x8C1596BAD35D957A(vVar1 + Vector(10f, 0f, 0f), &(vVar1.f_2), 0, 0);
					vVar1.z = (vVar1.z - 25f);
					unk_0xDAAE40D23C256135(vVar0, vVar1, iVar2, 1, joaat("weapon_airstrike_rocket"), unk_0x33CD235DF1E6A94E(), 1, 0, -1f, unk_0x33CD235DF1E6A94E(), 1, 1, 0, 0, 0, 0);
					func_11(&(Local_238.f_51), 0, 0);
					iLocal_57 = 1;
					unk_0x8950ED5730F62EE8(&iLocal_237, Local_238.f_50);
				}
			}
			else if (func_10(&(Local_238.f_51), 750, 0))
			{
				func_14(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 1:
			if (!func_12(&(Local_238.f_51)))
			{
				if (!unk_0x0E4018692D92041D(iLocal_237, Local_238.f_50))
				{
					vVar0 = { Local_240[unk_0x72B85B341ADBE9DE() /*5*/].f_2 + Vector(0f, 5f, 5f) };
					vVar0.z = vLocal_61.z;
					vVar1 = { Local_240[unk_0x72B85B341ADBE9DE() /*5*/].f_2 + Vector(0f, 5f, 5f) };
					vVar1 = { vVar1 + Vector(0f, 0.1f, 0.1f) };
					unk_0x8C1596BAD35D957A(vVar1 + Vector(10f, 0f, 0f), &(vVar1.f_2), 0, 0);
					vVar1.z = (vVar1.z - 25f);
					unk_0xDAAE40D23C256135(vVar0, vVar1, iVar2, 1, joaat("weapon_airstrike_rocket"), unk_0xBB28786B7F552D0B(Local_238.f_2.f_3), 1, 0, -1f, unk_0x33CD235DF1E6A94E(), 1, 0, 0, 0, 0, 0);
					func_11(&(Local_238.f_51), 0, 0);
					unk_0x8950ED5730F62EE8(&iLocal_237, Local_238.f_50);
				}
			}
			else if (func_10(&(Local_238.f_51), 500, 0))
			{
				func_14(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 2:
			if (!func_12(&(Local_238.f_51)))
			{
				if (!unk_0x0E4018692D92041D(iLocal_237, Local_238.f_50))
				{
					vVar0 = { Local_240[unk_0x72B85B341ADBE9DE() /*5*/].f_2 + Vector(0f, -5f, -5f) };
					vVar0.z = vLocal_61.z;
					vVar1 = { Local_240[unk_0x72B85B341ADBE9DE() /*5*/].f_2 + Vector(0f, -5f, -5f) };
					vVar1 = { vVar1 + Vector(0f, 0.1f, 0.1f) };
					unk_0x8C1596BAD35D957A(vVar1 + Vector(10f, 0f, 0f), &(vVar1.f_2), 0, 0);
					vVar1.z = (vVar1.z - 25f);
					unk_0xDAAE40D23C256135(vVar0, vVar1, iVar2, 1, joaat("weapon_airstrike_rocket"), unk_0xBB28786B7F552D0B(Local_238.f_2.f_3), 1, 0, -1f, unk_0x33CD235DF1E6A94E(), 1, 0, 0, 0, 0, 0);
					func_11(&(Local_238.f_51), 0, 0);
					unk_0x8950ED5730F62EE8(&iLocal_237, Local_238.f_50);
				}
			}
			else if (func_10(&(Local_238.f_51), 500, 0))
			{
				func_14(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 3:
			if (!func_12(&(Local_238.f_51)))
			{
				if (!unk_0x0E4018692D92041D(iLocal_237, Local_238.f_50))
				{
					vVar0 = { Local_240[unk_0x72B85B341ADBE9DE() /*5*/].f_2 + Vector(0f, 5f, -5f) };
					vVar0.z = vLocal_61.z;
					vVar1 = { Local_240[unk_0x72B85B341ADBE9DE() /*5*/].f_2 + Vector(0f, 5f, -5f) };
					vVar1 = { vVar1 + Vector(0f, 0.1f, 0.1f) };
					unk_0x8C1596BAD35D957A(vVar1 + Vector(10f, 0f, 0f), &(vVar1.f_2), 0, 0);
					vVar1.z = (vVar1.z - 25f);
					unk_0xDAAE40D23C256135(vVar0, vVar1, iVar2, 1, joaat("weapon_airstrike_rocket"), unk_0xBB28786B7F552D0B(Local_238.f_2.f_3), 1, 0, -1f, unk_0x33CD235DF1E6A94E(), 1, 0, 0, 0, 0, 0);
					func_11(&(Local_238.f_51), 0, 0);
					unk_0x8950ED5730F62EE8(&iLocal_237, Local_238.f_50);
				}
			}
			else if (func_10(&(Local_238.f_51), 750, 0))
			{
				func_14(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 4:
			if (!func_12(&(Local_238.f_51)))
			{
				if (!unk_0x0E4018692D92041D(iLocal_237, Local_238.f_50))
				{
					vVar0 = { Local_240[unk_0x72B85B341ADBE9DE() /*5*/].f_2 + Vector(0f, -5f, 5f) };
					vVar0.z = vLocal_61.z;
					vVar1 = { Local_240[unk_0x72B85B341ADBE9DE() /*5*/].f_2 + Vector(0f, -5f, 5f) };
					vVar1 = { vVar1 + Vector(0f, 0.1f, 0.1f) };
					unk_0x8C1596BAD35D957A(vVar1 + Vector(10f, 0f, 0f), &(vVar1.f_2), 0, 0);
					vVar1.z = (vVar1.z - 25f);
					unk_0xDAAE40D23C256135(vVar0, vVar1, iVar2, 1, joaat("weapon_airstrike_rocket"), unk_0xBB28786B7F552D0B(Local_238.f_2.f_3), 1, 0, -1f, unk_0x33CD235DF1E6A94E(), 1, 0, 0, 0, 0, 0);
					func_11(&(Local_238.f_51), 0, 0);
					unk_0x8950ED5730F62EE8(&iLocal_237, Local_238.f_50);
				}
			}
			else if (func_10(&(Local_238.f_51), 500, 0))
			{
				func_14(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 5:
			if (!func_12(&(Local_238.f_51)))
			{
				if (!unk_0x0E4018692D92041D(iLocal_237, Local_238.f_50))
				{
					vVar0 = { Local_240[unk_0x72B85B341ADBE9DE() /*5*/].f_2 + Vector(0f, 5f, 10f) };
					vVar0.z = vLocal_61.z;
					vVar1 = { Local_240[unk_0x72B85B341ADBE9DE() /*5*/].f_2 + Vector(0f, 5f, 10f) };
					vVar1 = { vVar1 + Vector(0f, 0.1f, 0.1f) };
					unk_0x8C1596BAD35D957A(vVar1 + Vector(10f, 0f, 0f), &(vVar1.f_2), 0, 0);
					vVar1.z = (vVar1.z - 25f);
					unk_0xDAAE40D23C256135(vVar0, vVar1, iVar2, 1, joaat("weapon_airstrike_rocket"), unk_0xBB28786B7F552D0B(Local_238.f_2.f_3), 1, 0, -1f, unk_0x33CD235DF1E6A94E(), 1, 0, 0, 0, 0, 0);
					func_11(&(Local_238.f_51), 0, 0);
					unk_0x8950ED5730F62EE8(&iLocal_237, Local_238.f_50);
				}
			}
			else if (func_10(&(Local_238.f_51), 750, 0))
			{
				func_14(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 6:
			if (!func_12(&(Local_238.f_51)))
			{
				if (!unk_0x0E4018692D92041D(iLocal_237, Local_238.f_50))
				{
					vVar0 = { Local_240[unk_0x72B85B341ADBE9DE() /*5*/].f_2 + Vector(0f, 10f, 10f) };
					vVar0.z = vLocal_61.z;
					vVar1 = { Local_240[unk_0x72B85B341ADBE9DE() /*5*/].f_2 + Vector(0f, 10f, 10f) };
					vVar1 = { vVar1 + Vector(0f, 0.1f, 0.1f) };
					unk_0x8C1596BAD35D957A(vVar1 + Vector(10f, 0f, 0f), &(vVar1.f_2), 0, 0);
					vVar1.z = (vVar1.z - 25f);
					unk_0xDAAE40D23C256135(vVar0, vVar1, iVar2, 1, joaat("weapon_airstrike_rocket"), unk_0xBB28786B7F552D0B(Local_238.f_2.f_3), 1, 0, -1f, unk_0x33CD235DF1E6A94E(), 1, 0, 0, 0, 0, 0);
					func_11(&(Local_238.f_51), 0, 0);
					unk_0x8950ED5730F62EE8(&iLocal_237, Local_238.f_50);
				}
			}
			else if (func_10(&(Local_238.f_51), 500, 0))
			{
				func_14(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 7:
			if (!func_12(&(Local_238.f_51)))
			{
				if (!unk_0x0E4018692D92041D(iLocal_237, Local_238.f_50))
				{
					vVar0 = { Local_240[unk_0x72B85B341ADBE9DE() /*5*/].f_2 + Vector(0f, -10f, -10f) };
					vVar0.z = vLocal_61.z;
					vVar1 = { Local_240[unk_0x72B85B341ADBE9DE() /*5*/].f_2 + Vector(0f, -10f, -10f) };
					vVar1 = { vVar1 + Vector(0f, 0.1f, 0.1f) };
					unk_0x8C1596BAD35D957A(vVar1 + Vector(10f, 0f, 0f), &(vVar1.f_2), 0, 0);
					vVar1.z = (vVar1.z - 25f);
					unk_0xDAAE40D23C256135(vVar0, vVar1, iVar2, 1, joaat("weapon_airstrike_rocket"), unk_0xBB28786B7F552D0B(Local_238.f_2.f_3), 1, 0, -1f, unk_0x33CD235DF1E6A94E(), 1, 0, 0, 0, 0, 0);
					func_11(&(Local_238.f_51), 0, 0);
					unk_0x8950ED5730F62EE8(&iLocal_237, Local_238.f_50);
				}
			}
			else if (func_10(&(Local_238.f_51), 500, 0))
			{
				func_14(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 8:
			if (!func_12(&(Local_238.f_51)))
			{
				if (!unk_0x0E4018692D92041D(iLocal_237, Local_238.f_50))
				{
					vVar0 = { Local_240[unk_0x72B85B341ADBE9DE() /*5*/].f_2 + Vector(0f, 10f, -10f) };
					vVar0.z = vLocal_61.z;
					vVar1 = { Local_240[unk_0x72B85B341ADBE9DE() /*5*/].f_2 + Vector(0f, 10f, -10f) };
					vVar1 = { vVar1 + Vector(0f, 0.1f, 0.1f) };
					unk_0x8C1596BAD35D957A(vVar1 + Vector(10f, 0f, 0f), &(vVar1.f_2), 0, 0);
					vVar1.z = (vVar1.z - 25f);
					unk_0xDAAE40D23C256135(vVar0, vVar1, iVar2, 1, joaat("weapon_airstrike_rocket"), unk_0xBB28786B7F552D0B(Local_238.f_2.f_3), 1, 0, -1f, unk_0x33CD235DF1E6A94E(), 1, 0, 0, 0, 0, 0);
					func_11(&(Local_238.f_51), 0, 0);
					unk_0x8950ED5730F62EE8(&iLocal_237, Local_238.f_50);
				}
			}
			else if (func_10(&(Local_238.f_51), 500, 0))
			{
				func_14(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 9:
			if (!func_12(&(Local_238.f_51)))
			{
				if (!unk_0x0E4018692D92041D(iLocal_237, Local_238.f_50))
				{
					vVar0 = { Local_240[unk_0x72B85B341ADBE9DE() /*5*/].f_2 + Vector(0f, -10f, 10f) };
					vVar0.z = vLocal_61.z;
					vVar1 = { Local_240[unk_0x72B85B341ADBE9DE() /*5*/].f_2 + Vector(0f, -10f, 10f) };
					vVar1 = { vVar1 + Vector(0f, 0.1f, 0.1f) };
					unk_0x8C1596BAD35D957A(vVar1 + Vector(10f, 0f, 0f), &(vVar1.f_2), 0, 0);
					vVar1.z = (vVar1.z - 25f);
					unk_0xDAAE40D23C256135(vVar0, vVar1, iVar2, 1, joaat("weapon_airstrike_rocket"), unk_0xBB28786B7F552D0B(Local_238.f_2.f_3), 1, 0, -1f, unk_0x33CD235DF1E6A94E(), 1, 0, 0, 0, 0, 0);
					Local_238.f_50++;
					iLocal_57 = 0;
					unk_0x8950ED5730F62EE8(&iLocal_237, Local_238.f_50);
				}
			}
			break;
	}
}

void func_14(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_15(var uParam0)
{
	if (unk_0x22C3124A898FB82A(uParam0))
	{
		return !func_16(unk_0xFC00F22E930BFD55(uParam0));
	}
	return 0;
}

int func_16(int iParam0)
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

int func_17(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_18()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	int iVar3;
	int iVar4;
	
	if (func_15(Local_238.f_2))
	{
		iVar0 = unk_0xFC00F22E930BFD55(Local_238.f_2);
		vVar2 = { unk_0xFBB1F99A825CAB09(iVar0, 1) };
	}
	if (!iLocal_59)
	{
		if (!func_17(Local_240[unk_0x72B85B341ADBE9DE() /*5*/].f_2))
		{
			vVar1 = { Local_240[unk_0x72B85B341ADBE9DE() /*5*/].f_2 };
		}
		else if (func_24(unk_0x95B959F18401C09A(), 1, 1))
		{
			vVar1 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 1) };
		}
	}
	if (bLocal_58)
	{
		if (!iLocal_59)
		{
			if (func_15(Local_238.f_2))
			{
				if (!unk_0x18FB647D79B09657(iVar0, vLocal_60, 75f, 75f, 1000f, 0, 1, 0))
				{
					fLocal_62 = unk_0x16E00F066AFFEA0D(vVar2, vVar1, 0);
				}
				else
				{
					iLocal_59 = 1;
				}
			}
			else
			{
				iLocal_59 = 1;
			}
		}
		else
		{
			fLocal_62 = (fLocal_62 - 3.75f);
		}
		iVar3 = floor(fLocal_62);
		if (fLocal_62 <= 200f)
		{
			iVar4 = 6;
		}
		else
		{
			iVar4 = 1;
		}
		if (fLocal_62 >= 0f)
		{
			func_19(iVar3, "AIRSTRIKE_2", -1, iVar4, 2, 0, "AIRSTRIKE_6", 0, 0f, 0, 0, iVar4, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
		}
	}
}

void func_19(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
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
			if (func_23(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1373453.f_1 = 1;
		func_22(6, iVar0);
		Global_1373453.f_3835[iVar0] = iParam0;
		StringCopy(&(Global_1373453.f_3835.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1373453.f_3835.f_183[iVar0] = iParam3;
		Global_1373453.f_3835.f_172[iVar0] = iParam2;
		Global_1373453.f_3835.f_260[iVar0] = iParam4;
		Global_1373453.f_3835.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1373453.f_3835.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1373453.f_3835.f_443[iVar0] = iParam7;
		Global_1373453.f_3835.f_454[iVar0] = fParam8;
		Global_1373453.f_3835.f_497[iVar0] = iParam9;
		Global_1373453.f_3835.f_508[iVar0] = iParam10;
		Global_1373453.f_3835.f_205[iVar0] = iParam11;
		Global_1373453.f_3835.f_216[iVar0] = iParam12;
		Global_1373453.f_3835.f_227[iVar0] = iParam13;
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
		if (iParam15 == 5 && func_21())
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
			if (func_20())
			{
				Global_1373453.f_1113 = 1;
			}
		}
	}
}

int func_20()
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

int func_21()
{
	if (((unk_0x97B6A6696D936191() == 8 || unk_0x97B6A6696D936191() == 9) || unk_0x97B6A6696D936191() == 10) || unk_0x97B6A6696D936191() == 12)
	{
		return 1;
	}
	return 0;
}

void func_22(int iParam0, int iParam1)
{
	unk_0x8950ED5730F62EE8(&(Global_1373453.f_6184[iParam0]), iParam1);
}

bool func_23(int iParam0, int iParam1)
{
	return unk_0x0E4018692D92041D(Global_1373453.f_6184[iParam0], iParam1);
}

int func_24(int iParam0, bool bParam1, bool bParam2)
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

void func_25()
{
}

void func_26()
{
	vector3 vVar0;
	bool bVar1;
	
	func_85();
	if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
	{
		if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
		{
			if (!iLocal_56)
			{
				if (unk_0x1BCDA92AD0A7835B(joaat("cellphone_flashhand")) <= 0)
				{
					bVar1 = !func_84();
					unk_0x697EBA5CF1A6AB57(unk_0x33CD235DF1E6A94E(), joaat("weapon_flare"), 1, bVar1, bVar1);
					unk_0x274C6068B660FFB4(unk_0x33CD235DF1E6A94E(), joaat("weapon_flare"), bVar1);
					iLocal_56 = 1;
				}
			}
			else if (unk_0x2AAD009EC638EFF7(unk_0x33CD235DF1E6A94E(), joaat("weapon_flare"), 100f, &(Local_240[unk_0x72B85B341ADBE9DE() /*5*/].f_2), 1))
			{
				if (func_83(Local_240[unk_0x72B85B341ADBE9DE() /*5*/].f_2, 0f, 0f, 0f, 0))
				{
					Local_240[unk_0x72B85B341ADBE9DE() /*5*/].f_2 = { vVar0 };
				}
				if (func_8("AIRSTRIKE_1"))
				{
					unk_0xEDF90B96BED57BCE(1);
				}
				if (!iLocal_55)
				{
					if (!func_82(Local_238.f_2.f_3))
					{
						if (func_15(Local_238.f_2))
						{
							func_81();
							unk_0xED68CDDDE25A144E(unk_0xBB28786B7F552D0B(Local_238.f_2.f_3));
							unk_0x13A2D602CD10CBAC(unk_0xBB28786B7F552D0B(Local_238.f_2.f_3), uLocal_49);
							unk_0x4B0F8AD495CC3930(unk_0xFC00F22E930BFD55(Local_238.f_2), round(50f));
							iLocal_55 = 1;
						}
					}
				}
			}
			else if (!iLocal_54)
			{
				if (!unk_0xFAC8F20FBC764F4D())
				{
					if (func_80(unk_0x33CD235DF1E6A94E()))
					{
						func_7("AIRSTRIKE_4", -1);
					}
					else
					{
						func_7("AIRSTRIKE_1", -1);
					}
					iLocal_54 = 1;
				}
			}
		}
	}
	func_50();
	func_27();
}

void func_27()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	
	switch (Local_238.f_2.f_2)
	{
		case 0:
			func_49();
			break;
		
		case 1:
			func_49();
			break;
		
		case 2:
			if (func_15(Local_238.f_2))
			{
				bLocal_58 = true;
				iVar0 = unk_0xFC00F22E930BFD55(Local_238.f_2);
				if (!unk_0xE38E3CF1625A4145(iLocal_47))
				{
					iLocal_47 = unk_0x8848A15CBDADDC60(iVar0);
					unk_0xA20C1DE21F2F071C(iLocal_47, 16);
					unk_0x1C95CD840303FC37(iLocal_47, "AIRSTRIKE_5");
					unk_0x983D75D9630FD905(iLocal_47, 0);
				}
				else
				{
					unk_0x9D148E7C7C25619B(iLocal_47, ceil(unk_0xC472E34C8FBEC678(iVar0)));
				}
				if (!iLocal_53)
				{
					if (!func_17(Local_240[unk_0x72B85B341ADBE9DE() /*5*/].f_2))
					{
						vVar3 = { Local_240[unk_0x72B85B341ADBE9DE() /*5*/].f_2 };
					}
					else
					{
						vVar3 = { vLocal_60 };
					}
					if (unk_0x16E00F066AFFEA0D(vVar3, unk_0xFBB1F99A825CAB09(iVar0, 1), 1) <= (60f * 5f))
					{
						unk_0x12533A8CE4D9105B(unk_0xFC00F22E930BFD55(Local_238.f_2));
						iLocal_53 = 1;
					}
				}
				if (!iLocal_235)
				{
					if (!Local_238.f_54)
					{
						if (!func_82(Local_238.f_2.f_3))
						{
							if (!func_17(Local_240[unk_0x72B85B341ADBE9DE() /*5*/].f_2))
							{
								if (unk_0x16E00F066AFFEA0D(func_48(unk_0x95B959F18401C09A()), unk_0xFBB1F99A825CAB09(unk_0xFC00F22E930BFD55(Local_238.f_2.f_3), 1), 0) <= 250f)
								{
									if (unk_0x16E00F066AFFEA0D(vVar3, unk_0xFBB1F99A825CAB09(iVar0, 1), 1) >= (60f * 2.5f))
									{
										func_31(&uLocal_69, "CT_AUD", "MPCT_ASarr", 12, 0, 0, 0);
										iLocal_235 = 1;
									}
								}
							}
						}
					}
				}
				if (Local_238.f_50 < 10)
				{
					if (!Local_238.f_53)
					{
						if (!func_17(Local_240[unk_0x72B85B341ADBE9DE() /*5*/].f_2))
						{
							if (func_30() == 2)
							{
								if (!func_12(&uLocal_63))
								{
									func_11(&uLocal_63, 0, 0);
								}
								else if (func_10(&uLocal_63, 7500, 0))
								{
									Local_238.f_53 = 1;
								}
								vVar1 = { Local_240[unk_0x72B85B341ADBE9DE() /*5*/].f_2 - Vector(1000f, 25f, 25f) };
								vVar2 = { Local_240[unk_0x72B85B341ADBE9DE() /*5*/].f_2 + Vector(1000f, 25f, 25f) };
								vVar1.z = -200f;
								vVar2.z = 1500f;
								if (unk_0x18FB647D79B09657(iVar0, Local_240[unk_0x72B85B341ADBE9DE() /*5*/].f_2, 75f, 75f, 1000f, 0, 1, 0) && unk_0x7EEE8B447AB73C25(vVar1, vVar2, joaat("weapon_flare"), 0))
								{
									Local_238.f_53 = 1;
								}
							}
							else if (func_30() == 1)
							{
								Local_238.f_53 = 1;
								Local_238.f_50 = 100;
							}
						}
						else if (unk_0x18FB647D79B09657(iVar0, vLocal_60, 75f, 75f, 1000f, 0, 1, 0))
						{
							Local_238.f_53 = 1;
							Local_238.f_50 = 100;
							Local_238.f_54 = 1;
							if (!iLocal_236)
							{
								func_31(&uLocal_69, "CT_AUD", "MPCT_ASflr", 12, 0, 0, 0);
								iLocal_236 = 1;
							}
						}
					}
				}
			}
			if (!func_15(Local_238.f_2) || func_82(Local_238.f_2.f_3))
			{
				func_28();
			}
			break;
		
		case 3:
			func_49();
			break;
	}
}

void func_28()
{
	int iVar0;
	
	if (!func_82(Local_238.f_2.f_3))
	{
		if (func_29(Local_238.f_2.f_3))
		{
			if (unk_0x6F3D61B58C7B4025(Local_238.f_2.f_3))
			{
				iVar0 = unk_0xBB28786B7F552D0B(Local_238.f_2.f_3);
				unk_0x7FC2040EB34E0E31(iVar0, 0, 0);
			}
		}
	}
}

int func_29(var uParam0)
{
	if (unk_0x5E2784BB00B20E8E(uParam0))
	{
		return 1;
	}
	if (unk_0x06C1EBC003C18F1F())
	{
		unk_0x254D3936DA813A55(uParam0);
	}
	return 0;
}

int func_30()
{
	if (Local_238.f_55 == 1)
	{
		return Local_238.f_55;
	}
	else if (Local_238.f_55 == 2)
	{
		return Local_238.f_55;
	}
	if (!unk_0xA4EE7D490EB4E0C9(Local_240[unk_0x72B85B341ADBE9DE() /*5*/].f_2 + Vector(0.5f, 0f, 0f)))
	{
		Local_238.f_55 = 1;
		return Local_238.f_55;
	}
	Local_238.f_55 = 2;
	return Local_238.f_55;
}

int func_31(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_47(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_32(sParam2, iParam3, 0);
}

int func_32(char* sParam0, int iParam1, bool bParam2)
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
					func_46();
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
		if (func_45(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_44();
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
				func_37();
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
				if (func_36())
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
			if (func_35())
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
			func_34();
			Global_15876 = bParam2;
		}
		Global_15868 = iParam1;
		StringCopy(&Global_15485, sParam0, 24);
		Global_14732 = 0;
		func_33();
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
		func_46();
	}
	return 0;
}

void func_33()
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

void func_34()
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

int func_35()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_36()
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

void func_37()
{
	if (func_43(14))
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
		Global_14553 = func_38();
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

var func_38()
{
	func_39();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_39()
{
	int iVar0;
	
	if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
	{
		if (func_42(Global_106565.f_2357.f_539.f_4321) != unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()))
		{
			iVar0 = func_41(unk_0x33CD235DF1E6A94E());
			if (func_40(iVar0) && (!func_43(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_40(Global_106565.f_2357.f_539.f_4321))
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

bool func_40(int iParam0)
{
	return iParam0 < 3;
}

int func_41(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		iVar1 = unk_0x541D5C57194E73C4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_42(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_42(int iParam0)
{
	if (func_40(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_43(int iParam0)
{
	return Global_36425 == iParam0;
}

void func_44()
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

bool func_45(int iParam0, int iParam1)
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

void func_46()
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

void func_47(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

Vector3 func_48(int iParam0)
{
	return unk_0xFBB1F99A825CAB09(unk_0x378BD4B3881338C2(iParam0), 0);
}

void func_49()
{
	if (unk_0xE38E3CF1625A4145(iLocal_47))
	{
		unk_0x1ABDB383C83A336A(&iLocal_47);
	}
}

void func_50()
{
	switch (Local_238.f_2.f_2)
	{
		case 0:
			func_79(1);
			break;
		
		case 1:
			if (func_51())
			{
				func_79(2);
			}
			break;
		
		case 2:
			if (!func_15(Local_238.f_2))
			{
				if (func_82(Local_238.f_2.f_3))
				{
					func_79(3);
				}
			}
			else if (func_82(Local_238.f_2.f_3))
			{
				func_79(3);
			}
			break;
		
		case 3:
			break;
	}
}

int func_51()
{
	if (!func_12(&uLocal_67))
	{
		func_11(&uLocal_67, 0, 0);
	}
	else if (func_78(Local_238.f_2.f_1) && func_78(Local_238.f_2.f_3.f_1))
	{
		if (func_10(&uLocal_67, 3000, 0))
		{
			if (func_55() && func_52())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_52()
{
	if ((!unk_0x22C3124A898FB82A(Local_238.f_2.f_3) && func_78(Local_238.f_2.f_3.f_1)) && unk_0x22C3124A898FB82A(Local_238.f_2))
	{
		if (func_15(Local_238.f_2))
		{
			if (func_54(&(Local_238.f_2.f_3), Local_238.f_2, 22, Local_238.f_2.f_3.f_1, -1, 1, 1, 1))
			{
				unk_0x4A852F02088ECC9D(unk_0xBB28786B7F552D0B(Local_238.f_2.f_3), 1);
				unk_0x0648A75D3F60E864(unk_0xBB28786B7F552D0B(Local_238.f_2.f_3), Global_1574987);
				unk_0xC475906893AEB995(unk_0xBB28786B7F552D0B(Local_238.f_2.f_3), 0);
				unk_0x897EF720254BBEA3(unk_0xBB28786B7F552D0B(Local_238.f_2.f_3), 1);
				func_53();
				unk_0x13A2D602CD10CBAC(unk_0xBB28786B7F552D0B(Local_238.f_2.f_3), uLocal_48);
				unk_0x4B0F8AD495CC3930(unk_0xFC00F22E930BFD55(Local_238.f_2), round(50f));
			}
		}
	}
	if (!unk_0x22C3124A898FB82A(Local_238.f_2.f_3))
	{
		return 0;
	}
	unk_0x71CA80D41E1338B4(Local_238.f_2.f_3.f_1);
	return 1;
}

void func_53()
{
	if (!iLocal_50)
	{
		if (func_15(Local_238.f_2))
		{
			unk_0x99414FB2D30425C1(&uLocal_48);
			unk_0x4EA529533F2C0E2A(0, unk_0xFC00F22E930BFD55(Local_238.f_2), 0, 0, vLocal_60 + Vector((50f + 5f), 0f, 0f), 4, 60f, 15f, -1f, ceil((50f + 5f)), 20, 1);
			unk_0x4EA529533F2C0E2A(0, unk_0xFC00F22E930BFD55(Local_238.f_2), 0, 0, Local_238.f_2.f_14, 4, 60f, 25f, -1f, ceil((50f + 5f)), 20, 1);
			unk_0xC734F59A13D39AEF(uLocal_48);
			iLocal_50 = 1;
		}
	}
}

int func_54(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
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

int func_55()
{
	vector3 vVar0;
	float fVar1;
	
	if (!unk_0x22C3124A898FB82A(Local_238.f_2))
	{
		if (func_78(Local_238.f_2.f_1))
		{
			if (unk_0xEABEE41AE38D3281("AIRSTRIKE_FLYOVER", 0))
			{
				func_74(&vVar0, &fVar1);
				if (func_59(vVar0, 6f, 1f, 1f, 5f, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					if (func_56(&(Local_238.f_2), Local_238.f_2.f_1, vVar0, fVar1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
					{
						Local_238.f_2.f_14 = { vVar0 * Vector(0f, -1f, -1f) };
						unk_0xD303E20CB0AE4AD0(unk_0xFC00F22E930BFD55(Local_238.f_2), 2);
						unk_0xF70578F5CD9822CB(unk_0xFC00F22E930BFD55(Local_238.f_2), false);
						unk_0x76CE32E50F0C5270(unk_0xFC00F22E930BFD55(Local_238.f_2), 1);
						unk_0x7FC263D448DC8CAC(unk_0xFC00F22E930BFD55(Local_238.f_2));
						unk_0x4522AD7364B6AA54(unk_0xFC00F22E930BFD55(Local_238.f_2), 60f);
						unk_0x9FABD0AB045A5D6E(unk_0xFC00F22E930BFD55(Local_238.f_2), 1, 1, 0);
						unk_0xF563D0E25F1EA9CA(unk_0xFC00F22E930BFD55(Local_238.f_2), 1000);
						unk_0xFE8201EFB515D77B(unk_0xFC00F22E930BFD55(Local_238.f_2), 0);
						unk_0x6B091F0028E6FE5F(unk_0xFC00F22E930BFD55(Local_238.f_2), 3);
						unk_0xB29B4778A44B21A8(unk_0xFC00F22E930BFD55(Local_238.f_2));
						unk_0x71CA80D41E1338B4(Local_238.f_2.f_1);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_56(var uParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
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
			func_57(vParam2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_57(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_58(unk_0x95B959F18401C09A(), vParam0, iParam2) > -1)
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

int func_58(int iParam0, vector3 vParam1, int iParam2)
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

int func_59(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
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
		if (func_67(vParam0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_2405071.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_60(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2405071.f_2++;
	return 1;
}

int func_60(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_24(unk_0x95B959F18401C09A(), 1, 1))
		{
			if (!unk_0xBB5E373390A5F824())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0x16E00F066AFFEA0D(func_65(unk_0x95B959F18401C09A()), vParam0, 1) <= (fVar2 + fParam1))
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
		if (func_24(iVar1, 1, 1))
		{
			if (!func_62(iVar1, 0) && unk_0xB4B29C6A8F481EEA(unk_0x95B959F18401C09A(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0x95B959F18401C09A()))
				{
					if ((func_61(iVar1) || !bParam8) && !Global_2424047[iVar1 /*416*/].f_259)
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
								if (unk_0x16E00F066AFFEA0D(func_65(iVar1), vParam0, 1) <= (fVar2 + fParam1))
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
							if (unk_0x16E00F066AFFEA0D(func_65(iVar1), vParam0, 1) <= (fVar2 + fParam1))
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

int func_61(int iParam0)
{
	if (unk_0x0A4B2B44CD064704(unk_0x378BD4B3881338C2(iParam0)) || Global_2424047[iParam0 /*416*/].f_245)
	{
		return 1;
	}
	return 0;
}

bool func_62(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x95B959F18401C09A())
	{
		bVar0 = func_63(-1, 0) == 8;
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

int func_63(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_64();
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

int func_64()
{
	return Global_1312745;
}

Vector3 func_65(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_66() && Global_1589819[iVar0 /*818*/].f_789) && !func_17(Global_1589819[iVar0 /*818*/].f_790))
	{
		return Global_1589819[iVar0 /*818*/].f_790;
	}
	return func_48(iParam0);
}

var func_66()
{
	return Global_2448756.f_16;
}

int func_67(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && unk_0x95B959F18401C09A() != iVar1) || iParam6 == 0)
		{
			if (func_24(iVar1, bParam2, bParam3))
			{
				if (unk_0xB4B29C6A8F481EEA(unk_0x95B959F18401C09A(), iVar1))
				{
					if (!bParam5 || (!unk_0xBC2FC12AD0FBF72E(unk_0x378BD4B3881338C2(iVar1)) && func_61(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x12D3B4C76D4AAB00(unk_0x95B959F18401C09A()) != unk_0x12D3B4C76D4AAB00(iVar1))) || unk_0x12D3B4C76D4AAB00(unk_0x95B959F18401C09A()) == -1)
						{
							if (((unk_0x12D3B4C76D4AAB00(unk_0x95B959F18401C09A()) == -1 && uParam7) && bParam4) && func_68(iVar1))
							{
							}
							else if (unk_0x765F6FEEFF39224F(unk_0x378BD4B3881338C2(iVar1)))
							{
								if (unk_0x16E00F066AFFEA0D(func_48(iVar1), vParam0, 1) < fParam1)
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

int func_68(int iParam0)
{
	if (func_73(unk_0x95B959F18401C09A(), iParam0))
	{
		return 1;
	}
	Global_2505680 = { func_72(iParam0) };
	if (unk_0xFC40DD2526841632(&Global_2505680))
	{
		return 1;
	}
	if (func_69(unk_0x95B959F18401C09A(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_69(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_71(iParam0);
	if (!iVar0 == func_70())
	{
		if (iVar0 == func_71(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_70()
{
	return -1;
}

int func_71(int iParam0)
{
	if (iParam0 != func_70())
	{
		return Global_1626536[iParam0 /*603*/].f_11;
	}
	return func_70();
}

struct<13> func_72(int iParam0)
{
	struct<13> Var0;
	
	unk_0xBC1B3D38C4BB38F4(iParam0, &Var0, 13);
	return Var0;
}

int func_73(int iParam0, int iParam1)
{
	if (unk_0x062B7A5C795CB453())
	{
		Global_2505680 = { func_72(iParam0) };
		Global_2505693 = { func_72(iParam1) };
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

void func_74(var uParam0, var uParam1)
{
	float fVar0;
	
	*uParam0 = { func_76(vLocal_60 + Vector(200f, 0f, 0f), 600f, 600f, (200f / 2f)) };
	fVar0 = unk_0x954BB77DB6263C48((*uParam0 - 600f), (uParam0->f_1 - 600f), (*uParam0 + 600f), (uParam0->f_1 + 600f));
	if (uParam0->f_2 < fVar0)
	{
		uParam0->f_2 = fVar0;
	}
	*uParam1 = func_75(*uParam0, vLocal_60);
}

float func_75(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)
{
	return unk_0x174C48E9E544E9A8((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

Vector3 func_76(vector3 vParam0, float fParam1, float fParam2, float fParam3)
{
	vector3 vVar0;
	float fVar1;
	
	vVar0 = { unk_0x9562E33C057F7589(-1f, 1f), unk_0x9562E33C057F7589(-1f, 1f), 0f };
	fVar1 = (fParam3 / 2f);
	vVar0 = { func_77(vVar0, unk_0x9562E33C057F7589(fParam1, fParam2)) };
	vVar0.z = unk_0x9562E33C057F7589(-fVar1, fVar1);
	return vParam0 + vVar0;
}

Vector3 func_77(vector3 vParam0, float fParam1)
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

bool func_78(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xB815670C37E03CDE(iParam0);
	return unk_0x5D98D654CDC2165A(iParam0);
}

void func_79(int iParam0)
{
	Local_238.f_2.f_2 = iParam0;
}

int func_80(int iParam0)
{
	int iVar0;
	
	if (unk_0xBEAC9DF5323BB074(iParam0))
	{
		iVar0 = unk_0xF2C96862595654B4(iParam0, 0);
		if (unk_0x91D5C8283D19AF49(iVar0, 0))
		{
			if (unk_0x7BDC41A7CA0C77A2(iVar0, -1, 0) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_81()
{
	if (!iLocal_51)
	{
		if (func_15(Local_238.f_2))
		{
			unk_0x99414FB2D30425C1(&uLocal_49);
			unk_0x4EA529533F2C0E2A(0, unk_0xFC00F22E930BFD55(Local_238.f_2), 0, 0, Local_240[unk_0x72B85B341ADBE9DE() /*5*/].f_2 + Vector((50f + 5f), 0f, 0f), 4, 60f, 15f, -1f, ceil((50f + 5f)), 20, 1);
			unk_0x4EA529533F2C0E2A(0, unk_0xFC00F22E930BFD55(Local_238.f_2), 0, 0, Local_238.f_2.f_14, 4, 60f, 25f, -1f, ceil((50f + 5f)), 20, 1);
			unk_0xC734F59A13D39AEF(uLocal_49);
			iLocal_51 = 1;
		}
	}
}

int func_82(var uParam0)
{
	if (unk_0x22C3124A898FB82A(uParam0))
	{
		return unk_0xBC2FC12AD0FBF72E(unk_0xBB28786B7F552D0B(uParam0));
	}
	return 1;
}

bool func_83(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_84()
{
	return Global_93734.f_339 > 0;
}

void func_85()
{
	if (!iLocal_234)
	{
		if (!func_82(Local_238.f_2.f_3))
		{
			func_86(&uLocal_69, 3, unk_0xBB28786B7F552D0B(Local_238.f_2.f_3), "FM_Pilot_Air", 1, 1);
			iLocal_234 = 1;
		}
	}
}

void func_86(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_87()
{
	return Local_238;
}

int func_88(int iParam0)
{
	return Local_240[iParam0 /*5*/];
}

void func_89()
{
}

void func_90()
{
	if (unk_0x22C3124A898FB82A(Local_238.f_2.f_3) && unk_0x22C3124A898FB82A(Local_238.f_2))
	{
		if (func_15(Local_238.f_2) && !func_82(Local_238.f_2.f_3))
		{
			unk_0x4EA529533F2C0E2A(unk_0xBB28786B7F552D0B(Local_238.f_2.f_3), unk_0xFC00F22E930BFD55(Local_238.f_2), 0, unk_0x33CD235DF1E6A94E(), 1f, 1f, 1f, 8, 60f, 1000f, -1f, 400, 400, 1);
		}
	}
	func_92(func_93(1, 1), 11, func_70());
	func_91();
}

void func_91()
{
	unk_0x5894DC159447E10A();
}

void func_92(int iParam0, int iParam1, var uParam2)
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

int func_93(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x7C1C88877E8AAA50(iVar1);
		if (func_24(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x95B959F18401C09A() || iParam0)
			{
				if (bParam1)
				{
					unk_0x8950ED5730F62EE8(&uVar0, iVar1);
				}
				else if (!func_62(iVar2, 0))
				{
					unk_0x8950ED5730F62EE8(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_94()
{
	var uVar0;
	
	func_102(&uVar0);
	if (Global_1312844 == 0)
	{
		if (!unk_0xB331FCEB94EB05C8())
		{
			return 1;
		}
	}
	if (func_101())
	{
		return 1;
	}
	if (Global_2460852)
	{
		return 1;
	}
	if (func_100())
	{
		return 1;
	}
	if (func_99(157))
	{
		if (!func_98())
		{
			return 1;
		}
	}
	if (func_99(155))
	{
		return 1;
	}
	if (!unk_0x43E505744A9B715D())
	{
		return 1;
	}
	if (func_95() != 0)
	{
		if (unk_0x1BCDA92AD0A7835B(func_95()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_95()
{
	switch (func_97())
	{
		case 0:
			return func_96();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_96()
{
	switch (Global_2460954)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_97()
{
	return Global_25765;
}

bool func_98()
{
	return Global_2448756.f_586;
}

int func_99(int iParam0)
{
	if (unk_0x3AE20F34FEE6C258(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_100()
{
	return Global_2458613;
}

bool func_101()
{
	return Global_2448756.f_581;
}

void func_102(var uParam0)
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
					func_103(iVar0);
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

void func_103(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x286A5F0670063839(1, iParam0, &vVar0, 3))
	{
		if (func_24(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x378BD4B3881338C2(vVar0.y);
			if (unk_0x765F6FEEFF39224F(iVar1))
			{
				if (unk_0xF0D230FB550CD6EB(iVar1, 0))
				{
					iVar2 = unk_0xF2C96862595654B4(iVar1, 0);
					if (unk_0x8F6C3DD0BB146CA3(iVar2, vVar0.z) && unk_0xE36862B47CD70685())
					{
						if (func_104(iVar2, &bVar3))
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

int func_104(int iParam0, var uParam1)
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

void func_105()
{
	wait(0);
}

void func_106(struct<21> Param0)
{
	func_112(func_113(Param0), Param0);
	unk_0x4F8CF72358604361(1);
	unk_0x9D34F024713B3952(1);
	func_110(0, -1, 0);
	unk_0x7643BB59992A9E6E(&Local_238, 58);
	unk_0x568D314D73140729(&Local_240, 11);
	unk_0x9980AE643A60F372(0);
	if (!func_109())
	{
		func_90();
	}
	if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
	{
		vLocal_60 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 0) };
	}
	if (func_4(unk_0x95B959F18401C09A(), 1))
	{
		bLocal_52 = true;
	}
	func_107(64, 1);
	Local_240[unk_0x72B85B341ADBE9DE() /*5*/] = 0;
}

void func_107(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = -1;
	}
	switch (iParam0)
	{
		case 59:
			Global_2097152[func_108() /*10778*/].f_6165.f_19 = iVar0;
			break;
		
		case 19:
			Global_2097152[func_108() /*10778*/].f_6165.f_18 = iVar0;
			break;
		
		case 74:
			Global_2097152[func_108() /*10778*/].f_6165.f_12 = iVar0;
			break;
		
		case 29:
			Global_2097152[func_108() /*10778*/].f_6165.f_14 = iVar0;
			break;
		
		case 8:
			Global_2097152[func_108() /*10778*/].f_6165.f_15 = iVar0;
			break;
		
		case 31:
			Global_2097152[func_108() /*10778*/].f_6165.f_16 = iVar0;
			break;
		
		case 3:
			Global_2097152[func_108() /*10778*/].f_6165.f_20 = iVar0;
			break;
		
		case 6:
			Global_2097152[func_108() /*10778*/].f_6165.f_17 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2097152[func_108() /*10778*/].f_6165.f_23 = iVar0;
			break;
		
		case 76:
			Global_2097152[func_108() /*10778*/].f_6165.f_24 = iVar0;
			break;
		
		case 93:
			Global_2097152[func_108() /*10778*/].f_6165.f_25 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2097152[func_108() /*10778*/].f_6165.f_26 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2097152[func_108() /*10778*/].f_6165.f_27 = iVar0;
			break;
			break;
		
		case 97:
			Global_2097152[func_108() /*10778*/].f_6165.f_29 = iVar0;
			break;
		
		case 88:
			Global_2097152[func_108() /*10778*/].f_6165.f_28 = iVar0;
			break;
		
		case 100:
			Global_2097152[func_108() /*10778*/].f_6165.f_31 = iVar0;
			break;
		
		case 106:
			Global_2097152[func_108() /*10778*/].f_6165.f_32 = iVar0;
			break;
		
		case 99:
			Global_2097152[func_108() /*10778*/].f_6165.f_30 = iVar0;
			break;
	}
}

int func_108()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_109()
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
		if (func_101())
		{
			return 0;
		}
		if (func_99(155))
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

int func_110(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x52119E312E15DB07();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_91();
			}
			else
			{
				return 0;
			}
		}
		if (!func_111())
		{
			if (iParam0 == 0)
			{
				if (!unk_0xB331FCEB94EB05C8())
				{
					if (!bParam2)
					{
						func_91();
					}
					else
					{
						return 0;
					}
				}
				if (func_101())
				{
					if (!bParam2)
					{
						func_91();
					}
					else
					{
						return 0;
					}
				}
				if (func_99(155))
				{
					if (!bParam2)
					{
						func_91();
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
					func_91();
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
				func_91();
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
			func_91();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_111()
{
	return Global_1312844;
}

void func_112(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0xB331FCEB94EB05C8())
	{
		func_91();
	}
	unk_0x210E46A190FB3CB3(iParam0, 0, Param1.f_16);
}

int func_113(int iParam0)
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

