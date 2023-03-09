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
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	bool bLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	vector3 vLocal_63 = { 0f, 0f, 0f };
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	var uLocal_68 = 0;
	bool bLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	var uLocal_74[1] = { 0 };
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	var uLocal_78 = 16;
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
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	int iLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	int iLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	int iLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	int iLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	int iLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	int iLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	int iLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 1097859072;
	var uLocal_267 = 1500;
	var uLocal_268 = 45;
	var uLocal_269 = 1103626240;
	var uLocal_270 = 5;
	int iLocal_271[1] = { 0 };
	char* sLocal_272 = NULL;
	char* sLocal_273 = NULL;
	var uLocal_274 = 1;
	var uLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	var uLocal_278[1] = { 0 };
	int iLocal_279[4] = { 0, 0, 0, 0 };
	struct<9> Local_280 = { 0, 0, 0, 0, 0, 0, 0, 21, 6 } ;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	int iLocal_284 = 0;
	vector3 vLocal_285 = { 0f, 0f, 0f };
	vector3 vLocal_286 = { 0f, 0f, 0f };
	vector3 vLocal_287 = { 0f, 0f, 0f };
	vector3 vLocal_288 = { 0f, 0f, 0f };
	vector3 vLocal_289 = { 0f, 0f, 0f };
	vector3 vLocal_290 = { 0f, 0f, 0f };
	vector3 vLocal_291 = { 0f, 0f, 0f };
	vector3 vLocal_292 = { 0f, 0f, 0f };
	float fLocal_293 = 0f;
	float fLocal_294 = 0f;
	float fLocal_295 = 0f;
	float fLocal_296 = 0f;
	int iLocal_297 = 0;
	var uLocal_298 = 0;
	int iLocal_299 = 0;
	var uLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	bool bLocal_303 = 0;
	bool bLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	struct<5> Local_308 = { 1, 0, 0, 0, 0 } ;
	var uLocal_309 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
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
	vLocal_63 = { 500f, 500f, 500f };
	fLocal_296 = -1f;
	iLocal_299 = -1;
	bLocal_303 = true;
	unk_0x841080481716E87C("stripperhome");
	unk_0xC48A4BABDFAAB2B9(1);
	unk_0x14F2F7DEB29F39A9(unk_0x95B959F18401C09A(), 1);
	if (unk_0x9EC5BDC006623C42(75))
	{
		func_290();
	}
	bLocal_304 = ScriptParam_308.f_5;
	if (bLocal_304)
	{
		unk_0x210E46A190FB3CB3(32, 0, -1);
		func_285(0, -1, 0);
		unk_0x4F8CF72358604361(1);
		unk_0x9980AE643A60F372(0);
	}
	uLocal_74[0] = ScriptParam_308[0];
	Global_105590.f_1 = uLocal_74[0];
	bVar0 = false;
	bVar1 = true;
	iVar2 = unk_0x13348E86D5B8A052();
	if (func_284() && ScriptParam_308.f_4)
	{
		bVar1 = false;
		if (iVar2 > 14 && iVar2 < 22)
		{
			bVar0 = true;
		}
	}
	while (((!func_255(&ScriptParam_308, bVar0) && iLocal_72 != 6) && iLocal_72 != 5) && (iLocal_72 != -1 || !func_254(uLocal_300, 1024)))
	{
		func_246(0);
		wait(0);
	}
	unk_0x71CA80D41E1338B4(func_245(0, 0));
	unk_0x71CA80D41E1338B4(func_245(1, 0));
	if (!bVar1)
	{
		iLocal_72 = 2;
	}
	while (true)
	{
		wait(0);
		if (iLocal_302 > 0)
		{
			func_243();
			iLocal_302 = (iLocal_302 - round((unk_0x7C475FA8D877007F() * 1000f)));
		}
		switch (iLocal_72)
		{
			case -1:
				func_242();
				break;
			
			case 0:
				func_203(1);
				break;
			
			case 1:
				func_106();
				break;
			
			case 2:
				func_203(0);
				break;
			
			case 3:
				func_88();
				break;
			
			case 4:
				func_37(bLocal_303);
				break;
			
			case 5:
				func_11();
				break;
			
			case 6:
				if (!func_10(&iLocal_258))
				{
					func_7(&iLocal_258);
				}
				else if (func_1(&iLocal_258, 7.5f))
				{
					func_290();
				}
				break;
		}
	}
}

int func_1(int iParam0, float fParam1)
{
	if (func_3(iParam0, fParam1))
	{
		func_2(iParam0);
		return 1;
	}
	return 0;
}

void func_2(int iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

int func_3(int iParam0, float fParam1)
{
	if (func_10(iParam0))
	{
		if (func_4(iParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float func_4(int iParam0)
{
	if (func_10(iParam0))
	{
		if (func_6(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_5(unk_0x0E4018692D92041D(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_5(bool bParam0)
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

bool func_6(var uParam0)
{
	return unk_0x0E4018692D92041D(*uParam0, 2);
}

void func_7(int iParam0)
{
	if (!func_10(iParam0))
	{
		func_8(iParam0);
	}
}

void func_8(int iParam0)
{
	func_9(iParam0, 0f);
}

void func_9(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_5(unk_0x0E4018692D92041D(*iParam0, 4)) - fParam1);
	unk_0x8950ED5730F62EE8(iParam0, 1);
	unk_0xCE689A8E8C42ED78(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_10(var uParam0)
{
	return unk_0x0E4018692D92041D(*uParam0, 1);
}

void func_11()
{
	if (!func_254(uLocal_300, 8192))
	{
		if (func_36())
		{
			func_26();
		}
		else
		{
			iLocal_72 = 6;
		}
	}
	if (func_254(uLocal_300, 16384))
	{
		if (func_12())
		{
			iLocal_72 = 6;
		}
	}
}

int func_12()
{
	if (unk_0xD62C4419A41F106A(iLocal_271[0], 0))
	{
		return 1;
	}
	if (func_254(uLocal_300, 8192))
	{
		unk_0x41E36A540F8F323F(iLocal_271[0], 60, true);
		if (unk_0x18FB647D79B09657(iLocal_271[0], 96.8033f, -1287.597f, 28.2688f, 5f, 5f, 2f, false, true, 1) || func_25(unk_0x33CD235DF1E6A94E(), 96.8033f, -1287.597f, 28.2688f, 1) > 100f)
		{
			if (unk_0x8FCF53827AC6136E(96.12f, -1284.91f, 29.43f, 5f, joaat("prop_magenta_door"), 0))
			{
				unk_0x41D9972DE84520AB(joaat("prop_magenta_door"), 96.12f, -1284.91f, 29.43f, 1, 0f, 0);
			}
			if (unk_0x117DAF3BF7232886(iLocal_279[0]))
			{
				if (unk_0xFAA5C555ED0CEC9B(iLocal_279[0]))
				{
					func_13(1, 1, 0);
					unk_0x63F0B040CE6EDF0F(false, false, 3000, 1, 0, 0);
					unk_0x2F8A4DF7D0DFF0A8(iLocal_279[0], 1);
				}
			}
			unk_0x4B8B69DAE5BAC592(&(iLocal_271[0]));
			return 1;
		}
	}
	return 0;
}

void func_13(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0x3449EA232F9B8EAD(unk_0x3EE1295CEFBEFED4(), true, 0);
	}
	unk_0x6B9BB8BC34DAFFD9(1);
	func_15(0, 1, iParam2, 0, 0, 0);
	if (bParam1)
	{
		unk_0xDFF589A2149528CE(true);
		unk_0x35675D19812BDF22(true);
	}
	func_14(23, 0);
}

void func_14(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x8950ED5730F62EE8(&Global_26010, iParam0);
	}
	else
	{
		unk_0xCE689A8E8C42ED78(&Global_26010, iParam0);
	}
}

void func_15(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0xCBE6E2953ED9652D(unk_0x95B959F18401C09A());
		unk_0xF4197686EF83F52A(unk_0x95B959F18401C09A(), 1);
		unk_0x11D1216D8F205785(unk_0x95B959F18401C09A(), 1);
		func_24(1);
		unk_0x9F86AEF7DC996029();
		unk_0x68F7298CC6F16961();
		if (Global_14553.f_1 > 3)
		{
			if (unk_0xA30F14B621E3269D())
			{
				unk_0xD92171BC6C48DB90(false);
			}
			if (!func_23())
			{
				Global_14553.f_1 = 3;
			}
			Global_15866 = 5;
		}
		func_22(1, iParam3, iParam2, 0);
		Global_56500 = 1;
		Global_68810 = 1;
		Global_71588 = 1;
	}
	else
	{
		func_24(0);
		unk_0xD384C2E6BE0D5ABF();
		Global_56500 = 0;
		if (bParam1)
		{
			unk_0x36296F11E96E764D();
		}
		unk_0xF4197686EF83F52A(unk_0x95B959F18401C09A(), 0);
		unk_0x11D1216D8F205785(unk_0x95B959F18401C09A(), 0);
		func_22(0, iParam3, iParam2, 0);
		if (unk_0xB331FCEB94EB05C8())
		{
			if (((((!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()) && !func_20(unk_0x95B959F18401C09A())) && !func_17(unk_0x95B959F18401C09A(), 0)) && !func_16()) && !bParam4) && !bParam5)
			{
				unk_0x9611832841071B69(unk_0x33CD235DF1E6A94E(), false);
			}
		}
		else if (((!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()) && !func_20(unk_0x95B959F18401C09A())) && !bParam4) && !bParam5)
		{
			unk_0x9611832841071B69(unk_0x33CD235DF1E6A94E(), false);
		}
		Global_71588 = 0;
	}
}

bool func_16()
{
	return unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_39.f_18, 14);
}

bool func_17(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x95B959F18401C09A())
	{
		bVar0 = func_18(-1, 0) == 8;
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

int func_18(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_19();
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

int func_19()
{
	return Global_1312745;
}

int func_20(int iParam0)
{
	if (func_17(iParam0, 0))
	{
		return 1;
	}
	if (func_21())
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

bool func_21()
{
	return unk_0x0E4018692D92041D(Global_2359302, 3);
}

int func_22(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x4CE1DD5CFC1F941E())
	{
		if (unk_0xAB923D8907C25634() != iParam0 && uParam2)
		{
			unk_0xE5E26871D8586417(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_23()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_24(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x8950ED5730F62EE8(&Global_2423, 13);
	}
	else
	{
		unk_0xCE689A8E8C42ED78(&Global_2423, 13);
	}
}

float func_25(int iParam0, vector3 vParam1, bool bParam2)
{
	vector3 vVar0;
	
	if (!unk_0xD62C4419A41F106A(iParam0, 0))
	{
		vVar0 = { unk_0xFBB1F99A825CAB09(iParam0, true) };
	}
	else
	{
		vVar0 = { unk_0xFBB1F99A825CAB09(iParam0, false) };
	}
	return unk_0x16E00F066AFFEA0D(vVar0, vParam1, bParam2);
}

void func_26()
{
	int iVar0;
	
	func_29();
	if (unk_0x8FCF53827AC6136E(96.12f, -1284.91f, 29.43f, 5f, joaat("prop_magenta_door"), 0))
	{
		unk_0x41D9972DE84520AB(joaat("prop_magenta_door"), 96.12f, -1284.91f, 29.43f, 0, 0f, 0);
	}
	func_27(&uLocal_300, 16384);
	unk_0xF70578F5CD9822CB(iLocal_271[0], false);
	unk_0x5FEE418CE11E6DDE(iLocal_271[0], 104, true);
	unk_0x99414FB2D30425C1(&iVar0);
	unk_0x7E268975AF5EA74F(0, 98.2041f, -1291.252f, 28.2688f, 1f, -1, 0.25f, 1, 1193033728);
	unk_0x7E268975AF5EA74F(0, 107.6303f, -1304.742f, 27.7688f, 1f, -1, 0.25f, 0, 1193033728);
	unk_0x108754262311D34F(0, "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -4f, 15000, 1, 0, 0, 0, 0);
	unk_0xC734F59A13D39AEF(iVar0);
	unk_0x13A2D602CD10CBAC(iLocal_271[0], iVar0);
	unk_0xA7A57E7757ED035E(&iVar0);
	func_27(&uLocal_300, 8192);
}

void func_27(var uParam0, int iParam1)
{
	func_28(uParam0, iParam1);
}

void func_28(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_29()
{
	if (!unk_0xC30D5C4DCAC8020A(iLocal_271[0]) && func_35(1, 0, 1))
	{
		func_30(0, 0, 0);
		iLocal_279[0] = unk_0x392F736BA9C4A337("DEFAULT_SCRIPTED_CAMERA", 90.1007f, -1281.573f, 28.6661f, 2.4422f, 0f, -113.4013f, 45f, 1, 2);
		unk_0x63F0B040CE6EDF0F(true, false, 3000, 1, 0, 0);
	}
}

void func_30(int iParam0, int iParam1, int iParam2)
{
	unk_0x3449EA232F9B8EAD(unk_0x3EE1295CEFBEFED4(), false, iParam0);
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		unk_0x87A1F7523B14E2C9(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), 15f);
	}
	unk_0x6B9BB8BC34DAFFD9(iParam1);
	func_31(0);
	func_15(1, 1, iParam2, 0, 0, 0);
	unk_0xDFF589A2149528CE(false);
	unk_0x35675D19812BDF22(false);
	func_14(23, 1);
}

void func_31(int iParam0)
{
	if (func_34())
	{
		return;
	}
	if (Global_14725)
	{
		func_32(0, 0);
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
	if (!func_23())
	{
		Global_14553.f_1 = 3;
	}
}

void func_32(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_33(0))
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

int func_33(int iParam0)
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

bool func_34()
{
	return unk_0x0E4018692D92041D(Global_1681628, 19);
}

int func_35(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x8D13BA3BB8F16771())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		if (!unk_0x5C415D10D5CBF689(unk_0x33CD235DF1E6A94E()))
		{
			return 0;
		}
		iVar0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
		if (bParam0)
		{
			if (unk_0xD62C4419A41F106A(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0xD62C4419A41F106A(iVar0, 0))
			{
				if (unk_0x7BDC41A7CA0C77A2(iVar0, -1, 0) != unk_0x33CD235DF1E6A94E())
				{
					return 0;
				}
			}
		}
		if (!unk_0xD62C4419A41F106A(iVar0, 0))
		{
			if (unk_0x67F8A06049221C80(iVar0) < 0.95f || unk_0x67F8A06049221C80(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0xE027064B1C47E424(unk_0x95B959F18401C09A()))
	{
		return 0;
	}
	if (!unk_0x3B06C717B2793DBE(unk_0x95B959F18401C09A()))
	{
		return 0;
	}
	return 1;
}

int func_36()
{
	if ((uLocal_74[0] == 8 || uLocal_74[0] == 9) || func_25(iLocal_271[0], 96.12f, -1284.91f, 29.43f, 1) > 10f)
	{
		return 0;
	}
	return 1;
}

void func_37(bool bParam0)
{
	vector3 vVar0;
	var uVar1;
	int iVar2;
	
	func_64();
	if (bParam0)
	{
		vVar0 = { vLocal_287 };
	}
	else
	{
		func_63(&vVar0, &uVar1, 0);
	}
	func_60(vVar0);
	if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		if (unk_0xF0D230FB550CD6EB(iLocal_271[0], 0))
		{
			iVar2 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
			if (unk_0x765F6FEEFF39224F(iVar2) && !unk_0xD62C4419A41F106A(iVar2, 0))
			{
				if (iLocal_305)
				{
					if (func_58(iVar2, 4f, 1, 1056964608, 0, 1, 0))
					{
						func_57();
						unk_0x07C339D4328CA16C(iLocal_271[0], 0, 16777216);
						func_38();
					}
				}
				else if (unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), vVar0, 4f, 4f, 2f, true, true, 2))
				{
					iLocal_305 = 1;
				}
			}
		}
	}
}

void func_38()
{
	func_56();
	func_49(295, 0, 0);
	func_39(0);
	func_290();
}

void func_39(bool bParam0)
{
	struct<8> Var0[3];
	struct<6> Var1[3];
	
	if (!func_46())
	{
		return;
	}
	if (!iLocal_67)
	{
		return;
	}
	StringCopy(&(Var0[0 /*8*/]), "GameType", 32);
	StringCopy(&(Var0[1 /*8*/]), "Location", 32);
	StringCopy(&(Var0[2 /*8*/]), "Type", 32);
	if (bParam0)
	{
		StringCopy(&(Var1[0 /*6*/]), "MP", 24);
	}
	else
	{
		StringCopy(&(Var1[0 /*6*/]), "SP", 24);
	}
	StringCopy(&(Var1[1 /*6*/]), "City", 24);
	StringCopy(&(Var1[2 /*6*/]), "????", 24);
	if (func_44(200, &Var1, &Var0, 3, -1, 0, 0))
	{
		unk_0x652497BD2553F5E9(131, func_43(), 0f);
		unk_0x652497BD2553F5E9(108, func_42(), 0f);
		unk_0x652497BD2553F5E9(102, func_41(), 0f);
		unk_0x652497BD2553F5E9(8, func_40(), 0f);
	}
	iLocal_64 = 0;
	iLocal_65 = 0;
	iLocal_66 = 0;
	iLocal_67 = 0;
}

int func_40()
{
	return iLocal_65;
}

int func_41()
{
	return iLocal_66;
}

int func_42()
{
	return iLocal_64;
}

int func_43()
{
	return 0;
}

int func_44(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<68> Var0;
	int iVar1;
	struct<13> Var2;
	var uVar3;
	
	if (!unk_0x43E505744A9B715D())
	{
	}
	if ((!unk_0x148E92E2B2454BC6() && (unk_0x8553BFC970AE2EC8() || !unk_0xA71A137E08393E8F())) && unk_0xD56CD7C03ECC9CF7())
	{
		Var0.f_2.f_1 = 4;
		Var0 = iParam0;
		if (iParam4 == -1)
		{
			if (unk_0x062B7A5C795CB453())
			{
				Var2 = { func_45(unk_0x95B959F18401C09A()) };
				if (unk_0x4A5CDD2BE8070A7F(&Var2))
				{
					if (unk_0xDD530AC51A578470(&uVar3, 35, &Var2))
					{
						Var0.f_1 = uVar3;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar1 = 0;
		while (iVar1 < iParam3)
		{
			Var0.f_2.f_1[iVar1 /*16*/] = { *(uParam2[iVar1 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar1 /*16*/].f_8), {*(uParam1[iVar1 /*6*/])}, 8);
			iVar1++;
		}
		if (bParam5)
		{
			Global_1835013.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (unk_0xB331FCEB94EB05C8() && Global_2456885.f_3)
			{
				unk_0x6938B282813053C6(&Var0, &(Global_1657223.f_10));
			}
			else
			{
				unk_0x4ADC4AC6D9182D71(&Var0);
			}
		}
		return 1;
	}
	if (unk_0x148E92E2B2454BC6())
	{
	}
	if (!unk_0x8553BFC970AE2EC8())
	{
	}
	if (unk_0xA71A137E08393E8F())
	{
	}
	if (!unk_0xD56CD7C03ECC9CF7())
	{
	}
	return 0;
}

struct<13> func_45(int iParam0)
{
	struct<13> Var0;
	
	unk_0xBC1B3D38C4BB38F4(iParam0, &Var0, 13);
	return Var0;
}

int func_46()
{
	if ((unk_0x43E505744A9B715D() && unk_0x40863EBAEA2F03D7()) && func_47())
	{
		return 1;
	}
	return 0;
}

int func_47()
{
	if (func_48())
	{
		return 0;
	}
	if (unk_0xB16BC34F6CB4A57A() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_48()
{
	return Global_2459114;
}

void func_49(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_55((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_106565.f_10188[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_106565.f_10188[iParam0 /*12*/].f_6 == 11 || Global_106565.f_10188[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_106565.f_10188[iParam0 /*12*/].f_5 = 1;
		Global_106565.f_10188[iParam0 /*12*/].f_10 = iParam1;
		Global_106565.f_10188[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x3BDFDF06B92DF21C(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x3BDFDF06B92DF21C(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x3BDFDF06B92DF21C(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_50();
	}
}

void func_50()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_106301 = 0;
	Global_106302 = 0;
	Global_106303 = 0;
	Global_106304 = 0;
	Global_106305 = 0;
	Global_106306 = 0;
	Global_106307 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_106565.f_10188.f_3853;
	Global_106565.f_10188.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_106565.f_10188[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_106565.f_10188[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_106301++;
					fVar1 = (fVar1 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_106302++;
					fVar2 = (fVar2 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_106303++;
					fVar3 = (fVar3 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_106304++;
					fVar4 = (fVar4 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_106305++;
					fVar5 = (fVar5 + (Global_106565.f_10188[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_106306++;
					fVar6 = (fVar6 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_106307++;
					fVar7 = (fVar7 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_106284 > 0)
	{
		if (Global_106301 == Global_106284)
		{
			fVar1 = 55f;
		}
	}
	if (Global_106285 > 0)
	{
		if (Global_106302 == Global_106285)
		{
			fVar2 = 10f;
		}
	}
	if (Global_106286 > 0)
	{
		if (Global_106303 == Global_106286)
		{
			fVar3 = 0f;
		}
	}
	if (Global_106287 > 0)
	{
		if (Global_106304 == Global_106287)
		{
			fVar4 = 10f;
		}
	}
	if (Global_106288 > 0)
	{
		if (((Global_106305 == Global_106288 || (Global_106288 * 10 / Global_106305) < 41) || Global_106305 > Global_106291) || Global_106305 == Global_106291)
		{
			if (!unk_0x0E4018692D92041D(Global_106565.f_10188.f_3856, 14))
			{
				if (Global_106305 == Global_106288)
				{
					unk_0x3BDFDF06B92DF21C(joaat("num_rndevents_completed"), Global_106288, 0);
					unk_0x8950ED5730F62EE8(&(Global_106565.f_10188.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_106289 > 0)
	{
		if (Global_106306 == Global_106289)
		{
			fVar6 = 15f;
		}
	}
	if (Global_106290 > 0)
	{
		if (Global_106307 == Global_106290)
		{
			fVar7 = 5f;
		}
	}
	Global_106565.f_10188.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_106305 > Global_106291 || Global_106305 == Global_106291)
	{
		iVar9 = Global_106291;
	}
	else
	{
		iVar9 = Global_106305;
	}
	unk_0x12B6E23F244DDB0F(joaat("num_missions_completed"), Global_106301, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_missions_available"), Global_106284, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_minigames_completed"), Global_106302, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_minigames_available"), Global_106285, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_oddjobs_completed"), Global_106303, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_oddjobs_available"), Global_106286, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_rndpeople_completed"), Global_106304, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_rndpeople_available"), Global_106287, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_rndevents_available"), Global_106291, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_misc_completed"), (Global_106307 + Global_106306), 1);
	unk_0x12B6E23F244DDB0F(joaat("num_misc_available"), (Global_106290 + Global_106289), 1);
	Global_106308 = (Global_106301 * 100 / Global_106284);
	Global_106310 = ((Global_106303 + Global_106302) * 100 / (Global_106286 + Global_106285));
	Global_106309 = ((Global_106304 + iVar9) * 100 / (Global_106287 + Global_106291));
	Global_106311 = ((Global_106306 + Global_106307) * 100 / (Global_106289 + Global_106290));
	unk_0xB04A838EE49FBBAD(joaat("total_progress_made"), Global_106565.f_10188.f_3853, 1);
	unk_0x12B6E23F244DDB0F(joaat("percent_story_missions"), Global_106308, 1);
	unk_0x12B6E23F244DDB0F(joaat("percent_ambient_missions"), Global_106309, 1);
	unk_0x12B6E23F244DDB0F(joaat("percent_oddjobs"), Global_106310, 1);
	if (fVar8 > 0f && floor(fVar8) < floor(Global_106565.f_10188.f_3853))
	{
		func_54(13, floor(Global_106565.f_10188.f_3853));
	}
	if (!unk_0xDC17890B0B8B5081())
	{
		if (!Global_71590)
		{
			if (func_53() == 2 == 0 && !unk_0xB331FCEB94EB05C8())
			{
				if (unk_0xB16BC34F6CB4A57A())
				{
					Global_106299 = 0;
				}
				if (!Global_56494)
				{
					func_51();
				}
			}
		}
	}
}

int func_51()
{
	if (func_52(0))
	{
		return 0;
	}
	if (Global_93721.f_8)
	{
		if (Global_93721.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_93721.f_10 > 1)
	{
		return 0;
	}
	Global_93721.f_10++;
	return 1;
}

bool func_52(bool bParam0)
{
	if (!bParam0 && unk_0x1BCDA92AD0A7835B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x0E4018692D92041D(Global_71838, 0);
}

int func_53()
{
	return Global_25765;
}

int func_54(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x95FB4F650A03D477(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x6DD215A8A3129C26(iParam0, iParam1);
	}
	return 0;
}

int func_55(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_19();
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

void func_56()
{
	iLocal_66++;
	iLocal_67 = 1;
}

void func_57()
{
	if (unk_0x765F6FEEFF39224F(iLocal_271[0]) && !unk_0xD62C4419A41F106A(iLocal_271[0], 0))
	{
		unk_0x9FD099B0593CD91D(iLocal_271[0], true);
		if (unk_0xE214B9FCEDF6364A(iLocal_271[0]))
		{
			unk_0x5D94F4D6FE7DA516(iLocal_271[0]);
		}
	}
}

int func_58(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x3FD9339AA95E323F(0, 71, 1);
	unk_0x3FD9339AA95E323F(0, 72, 1);
	unk_0x3FD9339AA95E323F(0, 76, 1);
	unk_0x3FD9339AA95E323F(0, 73, 1);
	unk_0x3FD9339AA95E323F(0, 59, 1);
	unk_0x3FD9339AA95E323F(0, 60, 1);
	if (bParam5)
	{
		unk_0x3FD9339AA95E323F(0, 75, 1);
	}
	unk_0x3FD9339AA95E323F(0, 80, 1);
	if (!bParam6)
	{
		unk_0x3FD9339AA95E323F(0, 69, 1);
		unk_0x3FD9339AA95E323F(0, 70, 1);
		unk_0x3FD9339AA95E323F(0, 68, 1);
	}
	unk_0x3FD9339AA95E323F(0, 74, 1);
	unk_0x3FD9339AA95E323F(0, 86, 1);
	unk_0x3FD9339AA95E323F(0, 81, 1);
	unk_0x3FD9339AA95E323F(0, 82, 1);
	unk_0x3FD9339AA95E323F(0, 138, 1);
	unk_0x3FD9339AA95E323F(0, 136, 1);
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
	unk_0x3FD9339AA95E323F(0, 131, 1);
	unk_0x3FD9339AA95E323F(0, 132, 1);
	unk_0x3FD9339AA95E323F(0, 123, 1);
	unk_0x3FD9339AA95E323F(0, 126, 1);
	unk_0x3FD9339AA95E323F(0, 129, 1);
	unk_0x3FD9339AA95E323F(0, 130, 1);
	unk_0x3FD9339AA95E323F(0, 133, 1);
	unk_0x3FD9339AA95E323F(0, 134, 1);
	unk_0xCD3A495F8C74A0B6();
	func_59(iParam0);
	if ((unk_0xE3903F59E2F22150() - Global_29) > 500)
	{
		unk_0xA4DF1E31BCDF9978(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0xE3903F59E2F22150();
	if (!unk_0xD62C4419A41F106A(iParam0, 0))
	{
		if (unk_0x7EECA16E87982278(unk_0x8BB475EA09C9A0EB(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_59(int iParam0)
{
	if (!unk_0xD62C4419A41F106A(iParam0, 0))
	{
		if (unk_0x3A337D69D2D7C0FF(iParam0))
		{
			if (unk_0x3677406194B5F225(iParam0))
			{
				unk_0x5D1C3DFAF9A33FD4(iParam0, 0);
			}
		}
	}
}

void func_60(vector3 vParam0)
{
	int iVar0;
	
	if (unk_0xE38E3CF1625A4145(iLocal_277))
	{
		unk_0x1ABDB383C83A336A(&iLocal_277);
	}
	if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		return;
	}
	iVar0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
	if (unk_0x765F6FEEFF39224F(iVar0) && !unk_0xD62C4419A41F106A(iVar0, 0))
	{
		if (unk_0xF0D230FB550CD6EB(iLocal_271[0], 0))
		{
			if (unk_0x10930B9CAD4111C2(iLocal_271[0], unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), 0))
			{
				if (!unk_0xE38E3CF1625A4145(iLocal_276))
				{
					iLocal_276 = func_61(vParam0, 1);
				}
			}
		}
	}
}

int func_61(vector3 vParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x2C0ED4741A007C6A(vParam0);
	unk_0xCE5C49921A521962(iVar0, func_62(unk_0xB331FCEB94EB05C8(), 1f, 1f));
	unk_0x1C316779E36C1967(iVar0, bParam1);
	return iVar0;
}

float func_62(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_63(var uParam0, var uParam1, bool bParam2)
{
	vLocal_290 = { vLocal_290 };
	switch (uLocal_74[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (!bParam2)
			{
				*uParam0 = { 92.8829f, -1281.123f, 28.1845f };
				*uParam1 = 15f;
			}
			else
			{
				*uParam0 = { vLocal_289 };
				*uParam1 = fLocal_293;
			}
			vLocal_290 = { *uParam0 };
			break;
		
		case 8:
			if (!bParam2)
			{
				*uParam0 = { -1615.991f, 187.4827f, 59.1337f };
				*uParam1 = 217.5474f;
			}
			else
			{
				*uParam0 = { vLocal_289 };
				*uParam1 = fLocal_293;
			}
			vLocal_290 = { *uParam0 };
			break;
		
		case 9:
			if (!bParam2)
			{
				*uParam0 = { 1538.432f, 3776.85f, 33.5178f };
				*uParam1 = 225.8821f;
			}
			else
			{
				*uParam0 = { vLocal_289 };
				*uParam1 = fLocal_293;
			}
			vLocal_290 = { *uParam0 };
			break;
	}
}

void func_64()
{
	if (unk_0xBC2FC12AD0FBF72E(iLocal_271[0]))
	{
		if (!unk_0x765F6FEEFF39224F(iLocal_271[0]))
		{
		}
		else if (unk_0xD62C4419A41F106A(iLocal_271[0], 0))
		{
		}
		func_65(0);
	}
}

void func_65(int iParam0)
{
	if ((uLocal_74[0] > -1 && uLocal_74[0] < 10) && iParam0 != 2)
	{
		func_86(uLocal_74[0], (func_87(uLocal_74[0]) / 2));
	}
	func_84();
	switch (iParam0)
	{
		case 0:
			func_82("SCLUB_HOME_D", uLocal_74[0]);
			func_86(uLocal_74[0], 0);
			func_71(uLocal_74[0], 1);
			iLocal_72 = 6;
			break;
		
		case 1:
			unk_0xD362430CD61A9B08();
			func_66("SCLUB_HOME_A", uLocal_74[0], 0);
			iLocal_72 = 5;
			break;
		
		case 2:
			iLocal_72 = 5;
			break;
		
		case 4:
			func_82("SCLUB_HOME_D3", uLocal_74[0]);
			iLocal_72 = 6;
			break;
		
		case 3:
			if (func_25(iLocal_271[0], 92.5861f, -1282.86f, 28.2548f, 1) < 10f)
			{
				iLocal_72 = 5;
			}
			else
			{
				iLocal_72 = 6;
			}
			break;
	}
}

void func_66(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	MemCopy(&iVar0, {func_70(iParam1)}, 6);
	if (!func_69(sParam0, &iVar0))
	{
		if (!bParam2)
		{
			func_68(sParam0, &iVar0, -1);
		}
		else
		{
			func_67(sParam0, &iVar0);
		}
	}
}

void func_67(char* sParam0, int iParam1)
{
	unk_0x37621D6689F9E3C3(sParam0);
	unk_0xFA6BEE2B1507FF1E(iParam1);
	unk_0x092150016C06C431(0, 1, true, -1);
}

void func_68(char* sParam0, int iParam1, int iParam2)
{
	unk_0x37621D6689F9E3C3(sParam0);
	unk_0xFA6BEE2B1507FF1E(iParam1);
	unk_0x092150016C06C431(0, 0, true, iParam2);
}

int func_69(char* sParam0, int iParam1)
{
	unk_0x6D39881CA5436178(sParam0);
	unk_0xFA6BEE2B1507FF1E(iParam1);
	return unk_0xA32C2C4DF096C08A(0);
}

struct<4> func_70(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "SCLUB_NM_", 16);
	StringIntConCat(&Var0, iParam0, 16);
	return Var0;
}

void func_71(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_27(&(Global_106565.f_243[func_74() /*53*/].f_2[iParam0 /*5*/].f_3), 2);
	}
	else
	{
		func_72(&(Global_106565.f_243[func_74() /*53*/].f_2[iParam0 /*5*/].f_3), 2);
	}
}

void func_72(var uParam0, int iParam1)
{
	func_73(uParam0, iParam1);
}

void func_73(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_74()
{
	int iVar0;
	
	iVar0 = func_76();
	switch (iVar0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		default:
			switch (func_75(-1))
			{
				case 0:
					return 3;
					break;
				
				case 1:
					return 4;
					break;
				
				case 2:
					return 5;
					break;
				
				case 3:
					return 6;
					break;
				
				case 4:
					return 7;
					break;
				
				default:
					break;
			}
			break;
	}
	return 3;
}

int func_75(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_19();
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

int func_76()
{
	func_77();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_77()
{
	int iVar0;
	
	if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
	{
		if (func_81(Global_106565.f_2357.f_539.f_4321) != unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()))
		{
			iVar0 = func_80(unk_0x33CD235DF1E6A94E());
			if (func_79(iVar0) && (!func_78(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_79(Global_106565.f_2357.f_539.f_4321))
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

bool func_78(int iParam0)
{
	return Global_36425 == iParam0;
}

bool func_79(int iParam0)
{
	return iParam0 < 3;
}

int func_80(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		iVar1 = unk_0x541D5C57194E73C4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_81(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_81(int iParam0)
{
	if (func_79(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_82(char* sParam0, int iParam1)
{
	int iVar0;
	
	MemCopy(&iVar0, {func_70(iParam1)}, 6);
	func_83(sParam0, &iVar0, 7500, 1);
}

void func_83(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0x0C9D26BBBEE23407(sParam0);
	unk_0xFA6BEE2B1507FF1E(iParam1);
	unk_0x495407AC2D466930(iParam2, 1);
}

void func_84()
{
	if (unk_0xE38E3CF1625A4145(iLocal_277))
	{
		unk_0x1ABDB383C83A336A(&iLocal_277);
	}
	if (unk_0xE38E3CF1625A4145(iLocal_276))
	{
		unk_0x1ABDB383C83A336A(&iLocal_276);
	}
	func_85();
}

void func_85()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (unk_0xE38E3CF1625A4145(uLocal_278[iVar0]))
		{
			unk_0x1ABDB383C83A336A(&(uLocal_278[iVar0]));
		}
		iVar0++;
	}
}

void func_86(int iParam0, int iParam1)
{
	Global_106565.f_243[func_74() /*53*/].f_2[iParam0 /*5*/] = iParam1;
}

int func_87(int iParam0)
{
	return Global_106565.f_243[func_74() /*53*/].f_2[iParam0 /*5*/];
}

void func_88()
{
	func_64();
	func_84();
	switch (iLocal_77)
	{
		case 0:
			if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
			{
				if (unk_0xF0D230FB550CD6EB(iLocal_271[0], 0))
				{
					if (!func_105("SCLUB_SECLUDED"))
					{
						func_104("SCLUB_SECLUDED");
					}
					if (func_103() && unk_0x8BB475EA09C9A0EB(unk_0x33CD235DF1E6A94E()) == 0f)
					{
						unk_0xEDF90B96BED57BCE(1);
						unk_0x0483D0035D6E46FD(func_98(iLocal_271[0], 0, 0));
						iLocal_77 = 1;
					}
				}
			}
			break;
		
		case 1:
			if (func_91())
			{
				iLocal_77 = 2;
			}
			break;
		
		case 2:
			if (unk_0xD76D6BCC14B95CE1(unk_0x33CD235DF1E6A94E(), 242628503) != 1)
			{
				func_243();
				if (unk_0x13348E86D5B8A052() > 20 || unk_0x13348E86D5B8A052() < 4)
				{
					bLocal_303 = false;
				}
				unk_0xC4C7F808F6388EAE(iLocal_45);
				func_89(bLocal_303);
				iLocal_72 = 4;
			}
			break;
	}
}

void func_89(bool bParam0)
{
	switch (uLocal_74[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (bParam0)
			{
				func_82("SCLUB_HOME_GO", uLocal_74[0]);
			}
			else
			{
				func_90("SCLUB_CLUB_GO", 7500, 1);
			}
			break;
		
		case 8:
		case 9:
			func_90("SCLUB_HOME_GO3", 7500, 1);
			break;
	}
}

void func_90(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x0C9D26BBBEE23407(sParam0);
	unk_0x495407AC2D466930(iParam1, 1);
}

int func_91()
{
	if (unk_0xE9CCF312047EBEE0(func_98(iLocal_271[0], 0, 0)))
	{
		func_92(iLocal_271[0], 0, 1, -1, 1);
		func_92(unk_0x33CD235DF1E6A94E(), 0, 0, -1, 1);
		return 1;
	}
	return 0;
}

void func_92(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	int iVar3;
	
	if (unk_0xD62C4419A41F106A(iParam0, 0))
	{
		return;
	}
	iVar0 = unk_0xF2C96862595654B4(iParam0, 1);
	if (!unk_0x91D5C8283D19AF49(iVar0, 0))
	{
		return;
	}
	iLocal_45 = unk_0xB813DCBD5002BC42();
	if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1) && func_97(0, 1))
	{
		if (iLocal_45 != 4)
		{
			unk_0xC4C7F808F6388EAE(4);
		}
	}
	bVar1 = func_96(iVar0);
	sVar2 = func_98(iParam0, 0, 0);
	if (!unk_0xE9CCF312047EBEE0(sVar2))
	{
		unk_0x0483D0035D6E46FD(sVar2);
	}
	else
	{
		unk_0x99414FB2D30425C1(&iVar3);
		unk_0x108754262311D34F(0, sVar2, func_93(0, bParam2, bParam1, bVar1), 8f, -8f, -1, 0, 0, 0, 0, 0);
		unk_0x108754262311D34F(0, sVar2, func_93(1, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0x108754262311D34F(0, sVar2, func_93(2, bParam2, bParam1, bVar1), 8f, -4f, iParam3, 1, 0, 0, 0, 0);
		unk_0x108754262311D34F(0, sVar2, func_93(3, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0x108754262311D34F(0, sVar2, func_93(4, bParam2, bParam1, bVar1), 4f, -2f, -1, 0, 0, 0, 0, 0);
		unk_0xC734F59A13D39AEF(iVar3);
		unk_0x13A2D602CD10CBAC(iParam0, iVar3);
		if (bParam4)
		{
			unk_0xA7A57E7757ED035E(&iVar3);
		}
	}
}

char* func_93(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_95(18);
					}
					else
					{
						sVar0 = func_95(23);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_95(8);
				}
				else
				{
					sVar0 = func_95(13);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_94(18);
				}
				else
				{
					sVar0 = func_94(23);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_94(8);
			}
			else
			{
				sVar0 = func_94(13);
			}
			break;
		
		case 1:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_95(19);
					}
					else
					{
						sVar0 = func_95(24);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_95(9);
				}
				else
				{
					sVar0 = func_95(14);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_94(19);
				}
				else
				{
					sVar0 = func_94(24);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_94(9);
			}
			else
			{
				sVar0 = func_94(14);
			}
			break;
		
		case 2:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_95(20);
					}
					else
					{
						sVar0 = func_95(25);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_95(10);
				}
				else
				{
					sVar0 = func_95(15);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_94(20);
				}
				else
				{
					sVar0 = func_94(25);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_94(10);
			}
			else
			{
				sVar0 = func_94(15);
			}
			break;
		
		case 3:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_95(21);
					}
					else
					{
						sVar0 = func_95(26);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_95(11);
				}
				else
				{
					sVar0 = func_95(16);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_94(21);
				}
				else
				{
					sVar0 = func_94(26);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_94(11);
			}
			else
			{
				sVar0 = func_94(16);
			}
			break;
		
		case 4:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_95(22);
					}
					else
					{
						sVar0 = func_95(27);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_95(12);
				}
				else
				{
					sVar0 = func_95(17);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_94(22);
				}
				else
				{
					sVar0 = func_94(27);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_94(12);
			}
			else
			{
				sVar0 = func_94(17);
			}
			break;
		
		case 5:
			if (bParam3)
			{
				if (bParam1)
				{
					sVar0 = func_95(3);
				}
				else
				{
					sVar0 = func_95(2);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_94(3);
			}
			else
			{
				sVar0 = func_94(2);
			}
			break;
		
		case 6:
			break;
	}
	return sVar0;
}

char* func_94(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "into_proposition_male";
			break;
		
		case 1:
			sVar0 = "into_proposition_prostitute";
			break;
		
		case 2:
			sVar0 = "proposition_loop_male";
			break;
		
		case 3:
			sVar0 = "proposition_loop_prostitute";
			break;
		
		case 4:
			sVar0 = "proposition_to_exit_male";
			break;
		
		case 5:
			sVar0 = "prop_to_sit_alt_prostitute";
			break;
		
		case 6:
			sVar0 = "prop_to_sit_male";
			break;
		
		case 7:
			sVar0 = "prop_to_sit_prostitute";
			break;
		
		case 8:
			sVar0 = "proposition_to_sex_p1_prostitute";
			break;
		
		case 9:
			sVar0 = "proposition_to_sex_p2_prostitute";
			break;
		
		case 10:
			sVar0 = "sex_loop_prostitute";
			break;
		
		case 11:
			sVar0 = "sex_to_proposition_p1_prostitute";
			break;
		
		case 12:
			sVar0 = "sex_to_proposition_p2_prostitute";
			break;
		
		case 13:
			sVar0 = "proposition_to_sex_p1_male";
			break;
		
		case 14:
			sVar0 = "proposition_to_sex_p2_male";
			break;
		
		case 15:
			sVar0 = "sex_loop_male";
			break;
		
		case 16:
			sVar0 = "sex_to_proposition_p1_male";
			break;
		
		case 17:
			sVar0 = "sex_to_proposition_p2_male";
			break;
		
		case 18:
			sVar0 = "proposition_to_BJ_p1_prostitute";
			break;
		
		case 19:
			sVar0 = "proposition_to_BJ_p2_prostitute";
			break;
		
		case 20:
			sVar0 = "BJ_loop_prostitute";
			break;
		
		case 21:
			sVar0 = "BJ_to_proposition_p1_prostitute";
			break;
		
		case 22:
			sVar0 = "BJ_to_proposition_p2_prostitute";
			break;
		
		case 23:
			sVar0 = "proposition_to_BJ_p1_male";
			break;
		
		case 24:
			sVar0 = "proposition_to_BJ_p2_male";
			break;
		
		case 25:
			sVar0 = "BJ_loop_male";
			break;
		
		case 26:
			sVar0 = "BJ_to_proposition_p1_male";
			break;
		
		case 27:
			sVar0 = "BJ_to_proposition_p2_male";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

char* func_95(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "low_car_sit_to_prop_player";
			break;
		
		case 1:
			sVar0 = "low_car_sit_to_prop_female";
			break;
		
		case 2:
			sVar0 = "low_car_prop_loop_player";
			break;
		
		case 3:
			sVar0 = "low_car_prop_loop_female";
			break;
		
		case 4:
			sVar0 = "low_car_prop_to_leave_player";
			break;
		
		case 5:
			sVar0 = "low_car_prop_to_sit_alt_female";
			break;
		
		case 6:
			sVar0 = "low_car_prop_to_sit_player";
			break;
		
		case 7:
			sVar0 = "low_car_prop_to_sit_female";
			break;
		
		case 8:
			sVar0 = "low_car_prop_to_sex_p1_female";
			break;
		
		case 9:
			sVar0 = "low_car_prop_to_sex_p2_female";
			break;
		
		case 10:
			sVar0 = "low_car_sex_loop_female";
			break;
		
		case 11:
			sVar0 = "low_car_sex_to_prop_p1_female";
			break;
		
		case 12:
			sVar0 = "low_car_sex_to_prop_p2_female";
			break;
		
		case 13:
			sVar0 = "low_car_prop_to_sex_p1_player";
			break;
		
		case 14:
			sVar0 = "low_car_prop_to_sex_p2_player";
			break;
		
		case 15:
			sVar0 = "low_car_sex_loop_player";
			break;
		
		case 16:
			sVar0 = "low_car_sex_to_prop_p1_player";
			break;
		
		case 17:
			sVar0 = "low_car_sex_to_prop_p2_player";
			break;
		
		case 18:
			sVar0 = "low_car_prop_to_bj_p1_female";
			break;
		
		case 19:
			sVar0 = "low_car_prop_to_bj_p2_female";
			break;
		
		case 20:
			sVar0 = "low_car_bj_loop_female";
			break;
		
		case 21:
			sVar0 = "low_car_bj_to_prop_p1_female";
			break;
		
		case 22:
			sVar0 = "low_car_bj_to_prop_p2_female";
			break;
		
		case 23:
			sVar0 = "low_car_prop_to_bj_p1_player";
			break;
		
		case 24:
			sVar0 = "low_car_prop_to_bj_p2_player";
			break;
		
		case 25:
			sVar0 = "low_car_bj_loop_player";
			break;
		
		case 26:
			sVar0 = "low_car_bj_to_prop_p1_player";
			break;
		
		case 27:
			sVar0 = "low_car_bj_to_prop_p2_player";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

int func_96(int iParam0)
{
	if (unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		switch (unk_0x8D51A3997E8F3769(iParam0))
		{
			case -2066252141:
			case -38413156:
			case -782720499:
			case 542797648:
			case 68566729:
			case -1887744178:
			case -463340997:
			case 2033852426:
			case -1820894825:
			case 1697345049:
			case -635697407:
			case -1453479140:
			case 1837596901:
			case 2013836096:
			case 2071837743:
			case 2130662788:
			case -1546132012:
			case 1192783831:
			case -317944664:
			case 570040040:
			case 1212243433:
			case -193022774:
			case 510359473:
			case -988377294:
			case 1240573865:
			case -627376728:
			case 986556497:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_97(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (bParam0)
	{
		bVar0 = unk_0xCB75C331DD5DDCCC(0) == 4;
	}
	if (bParam1)
	{
		if (!bVar0)
		{
			bVar0 = unk_0xCB75C331DD5DDCCC(1) == 4;
		}
	}
	return bVar0;
}

var func_98(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0xD62C4419A41F106A(iParam0, 0))
	{
		iVar0 = unk_0xF2C96862595654B4(iParam0, 1);
		if (unk_0x91D5C8283D19AF49(iVar0, 0))
		{
			if (func_96(iVar0))
			{
				if ((!func_97(0, 1) || iParam2) && !bParam1)
				{
					return func_102();
				}
				else
				{
					return func_101();
				}
			}
		}
	}
	if ((!func_97(0, 1) || iParam2) && !bParam1)
	{
		return func_100();
	}
	return func_99();
}

char* func_99()
{
	return "mini@prostitutes@sexnorm_veh_first_person";
}

char* func_100()
{
	return "mini@prostitutes@sexnorm_veh";
}

char* func_101()
{
	return "mini@prostitutes@sexlow_veh_first_person";
}

char* func_102()
{
	return "mini@prostitutes@sexlow_veh";
}

int func_103()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar4;
	vector3 vVar5;
	var uVar6;
	vector3 vVar7;
	float fVar8;
	int iVar9;
	
	fVar4 = 25f;
	func_63(&vVar5, &uVar6, 0);
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
		{
			iVar2 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
		}
		vVar3 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true) };
		if (unk_0x42FFEB8AC39C983D(vVar3, &vVar7, 1077936128, 0))
		{
			fVar8 = vdist(vVar3, vVar7);
			if (fVar8 <= 10f)
			{
				return 0;
			}
		}
		if (vdist(vVar3, vLocal_287) < 20f || vdist(vVar3, vVar5) < 20f)
		{
			return 0;
		}
		if (unk_0x4A83E23BE6BCA7B0(vVar3 - Vector(20f, 20f, 20f), vVar3 + Vector(20f, 20f, 20f)))
		{
			return 0;
		}
		unk_0x730FAC2C24A116EC(vVar3, fVar4, 1, 1, &iVar0, 0, 0, -1);
		if (!iVar0 == 0)
		{
			if (!unk_0xD62C4419A41F106A(iVar0, 0))
			{
				if (unk_0x72F7FAFD0710100C(iVar0, unk_0x33CD235DF1E6A94E(), 17))
				{
					return 0;
				}
			}
		}
		else
		{
			iVar1 = unk_0x5E65439BE0A05829(vVar3, fVar4, 0, -1);
			if (!iVar1 == 0)
			{
				if (!iVar1 == iVar2)
				{
					if (unk_0x91D5C8283D19AF49(iVar1, 0))
					{
						iVar0 = unk_0x7BDC41A7CA0C77A2(iVar1, -1, 0);
						if (!iVar0 == 0)
						{
							return 0;
						}
					}
				}
			}
		}
		iVar9 = unk_0x65F35477FEAD6F0F(unk_0x33CD235DF1E6A94E());
		if (!iVar9 == 0)
		{
			return 0;
		}
	}
	return 1;
}

void func_104(char* sParam0)
{
	unk_0x37621D6689F9E3C3(sParam0);
	unk_0x092150016C06C431(0, 1, true, -1);
}

int func_105(char* sParam0)
{
	unk_0x6D39881CA5436178(sParam0);
	return unk_0xA32C2C4DF096C08A(0);
}

void func_106()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iLocal_73 < 12 && iLocal_73 >= 2)
	{
		if (func_201(3000))
		{
			unk_0x7EDEAEAED85BEE4F(1000);
			iLocal_73 = 12;
		}
	}
	if (!bLocal_69 && iLocal_73 >= 5)
	{
		iVar0 = unk_0x6DD92CC717E9E506();
		if (unk_0x91D5C8283D19AF49(iVar0, 0) && !unk_0xD62C4419A41F106A(iVar0, 0))
		{
			if (unk_0x541D5C57194E73C4(iVar0) == joaat("blimp2"))
			{
				bLocal_69 = false;
			}
			else if (unk_0xF3E8C179636ED71E(unk_0x6DD92CC717E9E506()) && uLocal_74[0] == 5)
			{
				bLocal_69 = func_198(&uLocal_68, -865f, 516.3f, 90f, 1, 15f);
			}
			else if (func_197(unk_0x6DD92CC717E9E506()))
			{
				bLocal_69 = func_198(&uLocal_68, vLocal_292, 1, fLocal_294);
			}
			else
			{
				bLocal_69 = func_198(&uLocal_68, vLocal_287, 1, fLocal_294);
			}
		}
	}
	if (iLocal_73 > 0 && iLocal_73 < 13)
	{
		unk_0xF3F3DC87D7163212();
	}
	switch (iLocal_73)
	{
		case 0:
			unk_0xEDF90B96BED57BCE(1);
			unk_0xD362430CD61A9B08();
			func_84();
			unk_0x3C05A6D663EA1B6A("TIME_LAPSE", false, -1);
			func_30(56, 1, 0);
			if (!func_254(uLocal_300, 131072))
			{
				func_27(&uLocal_300, 131072);
			}
			if (!func_254(uLocal_300, 256))
			{
				func_196();
				func_27(&uLocal_300, 256);
			}
			if (!func_254(uLocal_300, 32768))
			{
				unk_0x0483D0035D6E46FD(func_195());
				func_27(&uLocal_300, 32768);
			}
			if (!func_254(uLocal_300, 256))
			{
				unk_0x0483D0035D6E46FD(func_194());
				func_27(&uLocal_300, 256);
			}
			if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
			{
				iLocal_307 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
				func_193(unk_0x33CD235DF1E6A94E(), iLocal_307);
				iLocal_73 = 1;
			}
			else
			{
				func_57();
				func_191(unk_0x33CD235DF1E6A94E(), vLocal_285);
				func_191(iLocal_271[0], vLocal_286);
				iLocal_73 = 2;
			}
			func_189();
			break;
		
		case 1:
			if (!unk_0xD62C4419A41F106A(iLocal_307, 0))
			{
				if (vdist(unk_0xFBB1F99A825CAB09(iLocal_307, true), vLocal_287) < 2f)
				{
					func_57();
					func_191(unk_0x33CD235DF1E6A94E(), vLocal_285);
					func_191(iLocal_271[0], vLocal_286);
					unk_0x4ABB9EF39DA515D7();
					iLocal_73 = 2;
				}
				else if (unk_0xE3903F59E2F22150() >= 10000)
				{
					iLocal_73 = 13;
				}
			}
			break;
		
		case 2:
			if (!unk_0xFAA5C555ED0CEC9B(iLocal_279[0]))
			{
				unk_0x189377BFBDC9127F(iLocal_279[0], true);
				unk_0x63F0B040CE6EDF0F(true, false, 3000, 1, 0, 0);
				if (!unk_0xD62C4419A41F106A(iLocal_307, 0))
				{
					if (unk_0x541D5C57194E73C4(iLocal_307) == joaat("blimp2"))
					{
						unk_0x0CDD28A9DFCE2FCE(iLocal_307, false, 0);
					}
				}
				func_8(&iLocal_252);
				iLocal_73 = 3;
			}
			break;
		
		case 3:
			if (func_188(&iLocal_252) > 1f)
			{
				unk_0x8EB023915CEEDB99(iLocal_279[1], iLocal_279[0], 6000, 1, 1);
				func_187(&Local_280, 1, 0, 2000, 1, 1, 0, 1);
				iVar1 = unk_0x13348E86D5B8A052();
				iLocal_297 = iVar1 + 8;
				if (iLocal_297 > 23)
				{
					iLocal_297 = (iLocal_297 - 24);
				}
				Local_280.f_7 = iVar1;
				Local_280.f_8 = iLocal_297;
				func_2(&iLocal_252);
				iLocal_73 = 4;
			}
			break;
		
		case 4:
			if (!unk_0x6010B3CAC53496C3(iLocal_279[1]) && unk_0xFAA5C555ED0CEC9B(iLocal_279[1]))
			{
				if (!func_254(uLocal_298, 512))
				{
					if (unk_0x765F6FEEFF39224F(iLocal_307) && !unk_0xD62C4419A41F106A(iLocal_307, 0))
					{
						unk_0x65EE1E8C987CD1DB(iLocal_307, 1);
					}
					func_184(unk_0x33CD235DF1E6A94E(), func_186());
					unk_0x3C990C409B3845DE(unk_0x33CD235DF1E6A94E(), func_183());
					func_165();
					func_27(&uLocal_298, 512);
				}
				else if (!func_254(uLocal_298, 2048))
				{
					if (unk_0xD62C4419A41F106A(iLocal_271[0], 0))
					{
					}
					if (!func_164() && !unk_0x07292B2EDB334B14(iLocal_271[0]))
					{
						func_165();
						if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
						{
							unk_0x2918FC6BDEBF9834(unk_0x33CD235DF1E6A94E());
							unk_0xAEED0213982928AC(unk_0x33CD235DF1E6A94E(), "SEX_CLIMAX", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
						}
						func_27(&uLocal_298, 2048);
						func_8(&iLocal_252);
						sLocal_273 = func_163();
						iLocal_73 = 5;
					}
				}
			}
			break;
		
		case 5:
			if (func_188(&iLocal_252) > 1f)
			{
				if (func_138(iLocal_297, 0, sLocal_273, "", &Local_280, (func_188(&iLocal_252) * 0.2f), 0))
				{
					if (!func_164())
					{
						if (unk_0x765F6FEEFF39224F(iLocal_307))
						{
							if (unk_0x541D5C57194E73C4(iLocal_307) != joaat("blimp2"))
							{
								unk_0xCE04CE961AF41AB9(vLocal_286, 20f, 1, 0, 0, false);
							}
						}
						else
						{
							unk_0xCE04CE961AF41AB9(vLocal_286, 20f, 1, 0, 0, false);
						}
						if (unk_0x765F6FEEFF39224F(iLocal_271[0]))
						{
							unk_0x0CDD28A9DFCE2FCE(iLocal_271[0], false, 0);
						}
						unk_0x3C4F26ADF3BEE70B(unk_0x33CD235DF1E6A94E(), 0);
						func_8(&iLocal_252);
						iLocal_73 = 6;
					}
				}
			}
			break;
		
		case 6:
			unk_0x274C6068B660FFB4(unk_0x33CD235DF1E6A94E(), joaat("weapon_unarmed"), true);
			if (func_188(&iLocal_252) > 1.5f)
			{
				if (bLocal_69)
				{
					func_136(&uLocal_68);
				}
				func_8(&iLocal_252);
				iLocal_73 = 7;
			}
			break;
		
		case 7:
			if (!unk_0xFAA5C555ED0CEC9B(iLocal_279[2]))
			{
				unk_0x36296F11E96E764D();
				unk_0x2A06B27D1473E9ED(true);
				unk_0x9588A6F5FFD48F00(1);
				unk_0x8EB023915CEEDB99(iLocal_279[2], iLocal_279[1], 6000, 1, 1);
				func_8(&iLocal_252);
				iLocal_73 = 8;
			}
			break;
		
		case 8:
			if (!func_254(uLocal_300, 262144))
			{
				if (func_188(&iLocal_252) >= 1.25f)
				{
					func_135();
				}
			}
			if (func_188(&iLocal_252) > 6f)
			{
				unk_0x189377BFBDC9127F(iLocal_279[3], true);
				if (!unk_0xD62C4419A41F106A(iLocal_307, 0))
				{
					if (unk_0x541D5C57194E73C4(iLocal_307) == joaat("blimp2"))
					{
						unk_0x0CDD28A9DFCE2FCE(iLocal_307, true, 0);
					}
					unk_0x0D21E1FDE062ED99(iLocal_307, true, 1);
					unk_0xB81134EAAC434D76(iLocal_307, 1000f);
					unk_0xFA05791B9B8FA536(iLocal_307, 1000f);
					unk_0x1A56D9C73BA20091(iLocal_307);
				}
				func_8(&iLocal_252);
				iLocal_73 = 10;
			}
			break;
		
		case 10:
			if (func_188(&iLocal_252) > 2f)
			{
				unk_0x3AAF29F17A3F9825(0, 0, 3, 0);
				iLocal_73 = 13;
			}
			break;
		
		case 12:
			if (unk_0xBB5E373390A5F824() && !unk_0x75A50A9E5219C397())
			{
				if (!func_254(uLocal_300, 262144))
				{
					unk_0xB5327081B2948314(unk_0x95B959F18401C09A(), vLocal_289, fLocal_293, false, true, 1);
					func_135();
				}
				if (!unk_0xD62C4419A41F106A(iLocal_307, 0))
				{
					if (unk_0x541D5C57194E73C4(iLocal_307) == joaat("blimp2"))
					{
						unk_0x0CDD28A9DFCE2FCE(iLocal_307, true, 0);
					}
				}
				unk_0x274C6068B660FFB4(unk_0x33CD235DF1E6A94E(), joaat("weapon_unarmed"), true);
				if (!unk_0xD62C4419A41F106A(iLocal_307, 0))
				{
					unk_0x0D21E1FDE062ED99(iLocal_307, true, 1);
					unk_0xB81134EAAC434D76(iLocal_307, 1000f);
					unk_0xFA05791B9B8FA536(iLocal_307, 1000f);
					unk_0x1A56D9C73BA20091(iLocal_307);
				}
				func_8(&iLocal_252);
				iLocal_73 = 13;
			}
			break;
		
		case 13:
			if (!unk_0x75A50A9E5219C397() && func_188(&iLocal_252) >= 1f)
			{
				func_13(1, 1, 0);
				unk_0x7FC2040EB34E0E31(unk_0x33CD235DF1E6A94E(), unk_0x194C9CD81C97B65B(unk_0x33CD235DF1E6A94E()), 0);
				unk_0xD219E3573CA7427C(unk_0x95B959F18401C09A(), 30, 1);
				if (unk_0x3234E15469EA77BB(unk_0x33CD235DF1E6A94E(), func_81(0)))
				{
					func_134();
				}
				unk_0x78713C03966ED44F(vLocal_287 - Vector(3f, 3f, 3f), vLocal_287 + Vector(3f, 3f, 3f), 15f, 1);
				if (!unk_0xD62C4419A41F106A(iLocal_307, 0))
				{
					unk_0x0D21E1FDE062ED99(iLocal_307, true, 1);
					if (unk_0x541D5C57194E73C4(iLocal_307) != joaat("blimp2"))
					{
						unk_0xBEADAF07D2339505(iLocal_307, vLocal_287, 1, false, 0, 1);
						unk_0x3C990C409B3845DE(iLocal_307, fLocal_294);
						if (unk_0xF3E8C179636ED71E(iLocal_307) && uLocal_74[0] == 5)
						{
							unk_0xBEADAF07D2339505(iLocal_307, -865f, 516.3f, 90f, 1, false, 0, 1);
							unk_0x3C990C409B3845DE(iLocal_307, 15f);
						}
						else if (func_197(iLocal_307))
						{
							unk_0xBEADAF07D2339505(iLocal_307, vLocal_292, 1, false, 0, 1);
							unk_0x3C990C409B3845DE(iLocal_307, fLocal_295);
						}
						unk_0x1B2303F9DC2D90D5(iLocal_307, 1084227584);
					}
				}
				if (!unk_0xBB5E373390A5F824())
				{
					func_187(&Local_280, 0, 0, 2000, 1, 0, 0, 1);
				}
				else
				{
					unk_0x8CE1A59CBA4B57B9(8, 0, 0);
					func_132(to_float(8));
					unk_0xACCDA78123DB57B0(2000);
					unk_0xC7E6A5D90DED6E0B(0f);
					unk_0xD6EDA274D82E8678(0f, 1065353216);
					func_187(&Local_280, 0, 0, 2000, 1, 1, 0, 1);
				}
				if (unk_0x765F6FEEFF39224F(iLocal_271[0]))
				{
					unk_0x4B8B69DAE5BAC592(&(iLocal_271[0]));
				}
				if (!func_131(uLocal_74[0], -1))
				{
					if (uLocal_74[0] == 5)
					{
						func_66("SCLUB_PHON_HELP_ALT", uLocal_74[0], 0);
					}
					else
					{
						func_66("SCLUB_PHON_HELP", uLocal_74[0], 0);
					}
					func_117(uLocal_74[0], 1, -1);
					wait(4000);
				}
				func_115(uLocal_74[0]);
				iVar2 = func_114(uLocal_74[0]);
				if (iVar2 <= 2)
				{
					iVar3 = func_113(uLocal_74[0]);
					iVar4 = func_112(iVar2);
					func_107(-384575792, iVar3, iVar4, 3, func_111(), func_110(uLocal_74[0]), 60000, 10000, -1, 0, -1, 0, 1);
				}
				func_38();
			}
			break;
	}
}

int func_107(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	struct<14> Var0;
	
	if (func_52(0))
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam7 < 0)
	{
		return 0;
	}
	if (iParam8 == 76)
	{
		return 0;
	}
	if (iParam9 == 235)
	{
		return 0;
	}
	if (iParam5 < 3)
	{
		if (unk_0x0E4018692D92041D(iParam4, iParam5))
		{
			return 0;
		}
	}
	if (iParam4 < 1 || iParam4 > 7)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 83 || iParam2 == 83)
	{
		return 0;
	}
	if (Global_106565.f_7682.f_764 < 8)
	{
		Var0 = iParam0;
		Var0.f_3 = func_109(iParam3);
		Var0.f_4 = (unk_0xE3903F59E2F22150() + iParam6);
		Var0.f_5 = iParam7;
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam4;
		Var0.f_6 = iParam5;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		Var0.f_10 = iParam1;
		Var0.f_11 = iParam2;
		Var0.f_13 = iParam12;
		unk_0xCE689A8E8C42ED78(&(Var0.f_1), 0);
		Global_106565.f_7682.f_651[Global_106565.f_7682.f_764 /*14*/] = { Var0 };
		Global_106565.f_7682.f_764++;
		func_108(0);
		func_108(1);
		func_108(2);
		return 1;
	}
	return 0;
}

void func_108(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_79(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_106565.f_7682.f_136)
	{
		if (unk_0x0E4018692D92041D(Global_106565.f_7682[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_106565.f_7682[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_106565.f_7682[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_106565.f_7682.f_764)
	{
		if (unk_0x0E4018692D92041D(Global_106565.f_7682.f_651[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_106565.f_7682.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_106565.f_7682.f_919[iParam0] = iVar1;
}

int func_109(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

int func_110(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 104;
			break;
		
		case 1:
			return 105;
			break;
		
		case 2:
			return 106;
			break;
		
		case 3:
			return 107;
			break;
		
		case 4:
			return 108;
			break;
		
		case 5:
			return 109;
			break;
		
		case 6:
			return 110;
			break;
		
		case 7:
			return 111;
			break;
		
		case 8:
			return 112;
			break;
		
		case 9:
			return 93;
			break;
	}
	return 145;
}

int func_111()
{
	func_77();
	switch (Global_106565.f_2357.f_539.f_4321)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_112(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 8;
			break;
		
		case 2:
			return 9;
			break;
	}
	return -1;
}

int func_113(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 4:
			return 2;
			break;
		
		case 5:
			return 3;
			break;
		
		case 8:
			return 4;
			break;
		
		case 9:
			return 5;
			break;
	}
	return -1;
}

int func_114(int iParam0)
{
	return Global_106565.f_243[func_74() /*53*/].f_2[iParam0 /*5*/].f_2;
}

void func_115(int iParam0)
{
	if (func_114(iParam0) < 0)
	{
		func_116(iParam0, 0);
	}
	Global_106565.f_243[func_74() /*53*/].f_2[iParam0 /*5*/].f_2++;
}

void func_116(int iParam0, int iParam1)
{
	Global_106565.f_243[func_74() /*53*/].f_2[iParam0 /*5*/].f_2 = iParam1;
}

void func_117(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	
	if (iParam2 < 0)
	{
		iParam2 = func_74();
	}
	if (func_130(iParam2) == 4)
	{
	}
	bVar0 = Global_106565.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4;
	if (bVar0)
	{
		if (unk_0xB331FCEB94EB05C8())
		{
			if (!func_129(func_110(iParam0), 3))
			{
				bVar0 = false;
			}
		}
		else if (!func_129(func_110(iParam0), 4))
		{
			bVar0 = false;
		}
	}
	Global_106565.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4 = bParam1;
	if (bParam1)
	{
		if (!bVar0)
		{
			func_128(iParam0, 0);
			func_125(func_110(iParam0), func_130(iParam2), 1);
			iVar1 = unk_0x9EC3B269A34A2BEE(1800000, 2100000);
			switch (iParam2)
			{
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
					unk_0x8950ED5730F62EE8(&(Global_2097152[func_124() /*10778*/].f_6165.f_1272), iParam0);
					func_121(15, 0);
					break;
			}
			func_120(iVar1);
			func_119(iParam0, iVar1);
			Global_105559.f_15[iParam0] = unk_0xE3903F59E2F22150();
		}
	}
	else if (bVar0)
	{
		func_118(func_110(iParam0), func_130(iParam2));
	}
}

void func_118(int iParam0, int iParam1)
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

void func_119(int iParam0, int iParam1)
{
	if (iParam1 > -1)
	{
		Global_105559.f_4[iParam0] = (unk_0xE3903F59E2F22150() + iParam1);
	}
	else
	{
		Global_105559.f_4[iParam0] = (unk_0xE3903F59E2F22150() + unk_0x9EC3B269A34A2BEE(1200000, 2100000));
	}
}

void func_120(int iParam0)
{
	if (iParam0 != -1)
	{
		Global_105559.f_3 = (unk_0xE3903F59E2F22150() + iParam0);
	}
	else
	{
		Global_105559.f_3 = (unk_0xE3903F59E2F22150() + unk_0x9EC3B269A34A2BEE(21600000, 25200000));
	}
}

void func_121(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_123(iParam0, iParam1))
	{
		iVar0 = func_122();
		Global_2458506[iVar0] = iParam0;
	}
}

int func_122()
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

int func_123(int iParam0, var uParam1)
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

int func_124()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_125(int iParam0, int iParam1, bool bParam2)
{
	Global_3109 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 147)
	{
		func_127();
		if (iParam1 == 4)
		{
			Global_106565.f_28044[iParam0 /*29*/].f_12[0] = 1;
			Global_106565.f_28044[iParam0 /*29*/].f_12[1] = 1;
			Global_106565.f_28044[iParam0 /*29*/].f_12[2] = 1;
			Global_106565.f_28044[iParam0 /*29*/].f_24[0] = 1;
			Global_106565.f_28044[iParam0 /*29*/].f_24[1] = 1;
			Global_106565.f_28044[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_106565.f_28044[iParam0 /*29*/].f_12[iParam1] == 1 && Global_106565.f_28044[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_106565.f_28044[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_106565.f_28044[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_71590)
			{
				if (iParam1 != 4)
				{
					if (Global_14553 != iParam1)
					{
						Global_3082[iParam1 /*4*/] = { Global_106565.f_28044[iParam0 /*29*/].f_3 };
						Global_3099[iParam1] = 1;
						Global_3104[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14553)
					{
					}
					else
					{
						Global_3033[1 /*6*/] = { Global_106565.f_28044[iParam0 /*29*/].f_3 };
						Global_3033[1 /*6*/].f_5 = iParam1;
						func_126();
					}
				}
				else
				{
					Global_3033[1 /*6*/] = { Global_106565.f_28044[iParam0 /*29*/].f_3 };
					Global_3033[1 /*6*/].f_5 = iParam1;
					func_126();
				}
			}
			else
			{
				Global_3033[1 /*6*/] = { Global_106565.f_28044[iParam0 /*29*/].f_3 };
				Global_3033[1 /*6*/].f_5 = iParam1;
				func_126();
			}
		}
	}
}

void func_126()
{
	char cVar0[64];
	char cVar1[64];
	char* sVar2;
	
	StringCopy(&cVar0, unk_0x434854E9CAE13C4A(&(Global_106565.f_28044[Global_3109 /*29*/].f_7)), 64);
	if (Global_3128 == 0)
	{
		unk_0x1F85AD4B26B92795("");
		StringCopy(&cVar1, unk_0x434854E9CAE13C4A(&(Global_3033[1 /*6*/])), 64);
		sVar2 = unk_0x434854E9CAE13C4A("CELL_253");
		unk_0xDE1BA36E3BACF7C1(&cVar0, &cVar0, 0, 3, sVar2, &cVar1);
	}
	else
	{
		unk_0x1F85AD4B26B92795("CELL_255");
		unk_0xFA6BEE2B1507FF1E(&(Global_3033[1 /*6*/]));
		unk_0xDE1BA36E3BACF7C1(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0xCE689A8E8C42ED78(&Global_2423, 0);
}

void func_127()
{
	if (func_78(14))
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
		Global_14553 = func_76();
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

void func_128(int iParam0, int iParam1)
{
	Global_106565.f_243[func_74() /*53*/].f_2[iParam0 /*5*/].f_1 = iParam1;
}

int func_129(int iParam0, int iParam1)
{
	if (Global_106565.f_28044[iParam0 /*29*/].f_12[iParam1] == 1)
	{
		return 1;
	}
	return 0;
}

int func_130(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 1:
			return 1;
			break;
		
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return 3;
			break;
	}
	return 4;
}

bool func_131(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = func_74();
	}
	return Global_106565.f_243[iParam1 /*53*/].f_2[iParam0 /*5*/].f_4;
}

void func_132(float fParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_10(&(Global_106565.f_18097.f_175[iVar0 /*19*/].f_5)))
		{
			func_133(&(Global_106565.f_18097.f_175[iVar0 /*19*/].f_5), (fParam0 * 60f));
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_10(&(Global_106565.f_18097.f_362[iVar1 /*3*/])))
		{
			func_133(&(Global_106565.f_18097.f_362[iVar1 /*3*/]), (fParam0 * 60f));
		}
		iVar1++;
	}
	unk_0x532ED5E669993A8A();
}

void func_133(int iParam0, float fParam1)
{
	if (func_10(iParam0))
	{
		func_9(iParam0, (func_4(iParam0) + fParam1));
	}
}

void func_134()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 < 1)
		{
			Global_90174[iVar0] = Global_90174[iVar0 + 1];
		}
		else
		{
			Global_90174[iVar0] = unk_0xE3903F59E2F22150();
		}
		iVar0++;
	}
}

void func_135()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xE9CCF312047EBEE0(sLocal_272))
	{
	}
	else
	{
		iVar0 = unk_0x9EC3B269A34A2BEE(0, 50000);
		unk_0xED68CDDDE25A144E(unk_0x33CD235DF1E6A94E());
		unk_0x99414FB2D30425C1(&iVar1);
		unk_0x7E268975AF5EA74F(0, vLocal_289, 1f, -1, 0.25f, 0, fLocal_293);
		if (iVar0 < 15000)
		{
			unk_0x108754262311D34F(0, sLocal_272, "fidget_rub_hands", 1.5f, -1f, -1, 8320, 0, 0, 0, 0);
		}
		else if (iVar0 >= 15000 && iVar0 < 35000)
		{
			unk_0x108754262311D34F(0, sLocal_272, "fidget_rub_chin", 1.5f, -1f, -1, 8320, 0, 0, 0, 0);
		}
		else
		{
			unk_0x108754262311D34F(0, sLocal_272, "fidget_arm_swing", 1.5f, -1f, -1, 8320, 0, 0, 0, 0);
		}
		unk_0xC734F59A13D39AEF(iVar1);
		unk_0x13A2D602CD10CBAC(unk_0x33CD235DF1E6A94E(), iVar1);
		unk_0xA7A57E7757ED035E(&iVar1);
		func_27(&uLocal_300, 262144);
	}
}

void func_136(var uParam0)
{
	int iVar0;
	
	iVar0 = *uParam0;
	if (unk_0x765F6FEEFF39224F(iVar0))
	{
		if (!func_137(iVar0))
		{
			unk_0x23298AB8A7D0F403(iVar0, true, 0);
			unk_0x0CDD28A9DFCE2FCE(iVar0, true, 0);
			unk_0xF70578F5CD9822CB(iVar0, false);
		}
	}
}

int func_137(int iParam0)
{
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		if (unk_0xD62C4419A41F106A(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x91D5C8283D19AF49(iParam0, 0))
		{
			if (!unk_0x17260B4EA0652E1C(iParam0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_138(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, float fParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	
	switch (uParam4->f_3)
	{
		case 0:
			*uParam4 = func_162();
			iVar4 = func_162();
			func_161(&iVar4, iParam0);
			func_160(&iVar4, iParam1);
			func_159(&iVar4, 0);
			if (func_157(*uParam4, iVar4))
			{
				func_152(&iVar4, 0, 0, 0, 1, 0, 0);
			}
			func_149(*uParam4, iVar4, &iVar0, &iVar1, &iVar2, &uVar5, &uVar6, &uVar7);
			uParam4->f_11 = ((iVar0 + iVar1 * 60) + (iVar2 + iParam6) * 3600);
			func_132((to_float(uParam4->f_11) / 3600f));
			unk_0x8D0EAE4AED63F187(0.6f);
			unk_0x9588A6F5FFD48F00(0);
			unk_0x2A06B27D1473E9ED(false);
			func_148();
			uParam4->f_10 = unk_0x8CCC0A0504C52531();
			unk_0x0F8EAEEC97DDBCB3(uParam4->f_10, "TIME_LAPSE_MASTER", 0, true);
			unk_0xDEFB5E2E5CBD460A("TOD_SHIFT_SCENE");
			func_147();
			uParam4->f_3++;
			break;
		
		case 1:
		case 2:
			if (fParam5 >= 0.5f)
			{
				if (uParam4->f_3 == 1)
				{
					if (unk_0x36163153849DFDA1(sParam2) != 0)
					{
						unk_0x10D261962C02BE0E(sParam2, 1f);
					}
					if (unk_0x36163153849DFDA1(sParam3) != 0)
					{
						unk_0x261B7B698CB4C8D9();
						unk_0x3A8A5929FA4D6472(sParam3, 0);
					}
					uParam4->f_3 = 2;
				}
			}
			if (fParam5 >= 0.99f || fParam5 == -1f)
			{
				iVar4 = *uParam4;
				func_152(&iVar4, uParam4->f_11, 0, 0, 0, 0, 0);
				unk_0xE58124354EC682AC(func_146(iVar4), func_145(iVar4), func_144(iVar4));
				unk_0xCBE6AF58552C63B2(uParam4->f_10);
				unk_0xB4F447A5639E2006("TIME_LAPSE");
				return 1;
			}
			fVar10 = fParam5;
			fVar8 = 0.1f;
			fVar9 = 0.9f;
			fVar11 = func_143(((fVar10 - fVar8) / (fVar9 - fVar8)), 0f, 1f);
			iVar3 = round((IntToFloat(uParam4->f_11) * fVar11));
			iVar4 = *uParam4;
			func_152(&iVar4, iVar3, 0, 0, 0, 0, 0);
			unk_0xE58124354EC682AC(func_146(iVar4), func_145(iVar4), func_144(iVar4));
			if (func_142(iVar4) != unk_0x020A28FAE1C09250())
			{
				unk_0x671D2AE4291F252E(func_142(iVar4), func_141(iVar4), func_139(iVar4));
			}
			func_243();
			unk_0xB01645ECF87D883F(6);
			break;
	}
	return 0;
}

int func_139(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_140(unk_0x0E4018692D92041D(iParam0, 31), -1, 1)) + 2011;
}

int func_140(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_141(int iParam0)
{
	return iParam0 & 15;
}

int func_142(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

float func_143(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_144(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_145(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_146(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

void func_147()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		unk_0x98E765CB9E761233(Global_106565.f_14135[iVar0 /*104*/].f_16);
		iVar0++;
	}
}

int func_148()
{
	int iVar0;
	
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		return 0;
	}
	if (!unk_0x5C415D10D5CBF689(unk_0x33CD235DF1E6A94E()))
	{
		return 0;
	}
	iVar0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
	if (!unk_0xD62C4419A41F106A(iVar0, 0))
	{
		return 0;
	}
	unk_0xE3040995362DF6F7(iVar0, "OFF");
	return 1;
}

void func_149(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_157(iParam0, iParam1))
	{
		iVar0 = func_141(iParam1);
		iVar1 = func_139(iParam0);
		iVar2 = (func_139(iParam0) - func_139(iParam1));
		iVar3 = (func_141(iParam0) - func_141(iParam1));
		iVar4 = (func_142(iParam0) - func_142(iParam1));
		iVar5 = (func_146(iParam0) - func_146(iParam1));
		iVar6 = (func_145(iParam0) - func_145(iParam1));
		iVar7 = (func_144(iParam0) - func_144(iParam1));
	}
	else
	{
		iVar0 = func_141(iParam0);
		iVar1 = func_139(iParam1);
		iVar2 = (func_139(iParam1) - func_139(iParam0));
		iVar3 = (func_141(iParam1) - func_141(iParam0));
		iVar4 = (func_142(iParam1) - func_142(iParam0));
		iVar5 = (func_146(iParam1) - func_146(iParam0));
		iVar6 = (func_145(iParam1) - func_145(iParam0));
		iVar7 = (func_144(iParam1) - func_144(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_151(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_150(to_float(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_150(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(round(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_151(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

void func_152(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_139(*iParam0);
	iVar1 = func_141(*iParam0);
	iVar2 = func_142(*iParam0);
	iVar3 = func_146(*iParam0);
	iVar4 = func_145(*iParam0);
	iVar5 = func_144(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_151(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_151(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_153(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_153(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_159(uParam0, iParam1);
	func_160(uParam0, iParam2);
	func_161(uParam0, iParam3);
	func_156(uParam0, iParam5);
	func_155(uParam0, iParam4);
	func_154(uParam0, iParam6);
}

void func_154(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || shift_left((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || shift_left((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_155(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_141(*uParam0);
	iVar1 = func_139(*uParam0);
	if (iParam1 < 1 || iParam1 > func_151(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_156(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

int func_157(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_158(iParam1) || !func_158(iParam0))
	{
		return 1;
	}
	iVar0 = func_139(iParam0);
	iVar1 = func_139(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_141(iParam0);
	iVar1 = func_141(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_142(iParam0);
	iVar1 = func_142(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_146(iParam0);
	iVar1 = func_146(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_145(iParam0);
	iVar1 = func_145(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_144(iParam0);
	iVar1 = func_144(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_158(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_144(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_145(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_146(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_139(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_141(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_142(iParam0);
	if (iVar5 < 1 || iVar5 > func_151(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_159(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 66060288);
	*iParam0 = (*iParam0 || shift_left(iParam1, 20));
}

void func_160(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 1032192);
	*iParam0 = (*iParam0 || shift_left(iParam1, 14));
}

void func_161(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 15872);
	*iParam0 = (*iParam0 || shift_left(iParam1, 9));
}

int func_162()
{
	var uVar0;
	
	func_159(&uVar0, unk_0xE6A7CE90720B9037());
	func_160(&uVar0, unk_0x7EA67BD818402745());
	func_161(&uVar0, unk_0x13348E86D5B8A052());
	func_155(&uVar0, unk_0x020A28FAE1C09250());
	func_156(&uVar0, unk_0x2C02CAA9C4127339());
	func_154(&uVar0, unk_0xED3F08F762AAA55A());
	return uVar0;
}

char* func_163()
{
	char* sVar0;
	
	switch (uLocal_74[0])
	{
		case 0:
			sVar0 = "CLEARING";
			break;
		
		case 1:
			sVar0 = "OVERCAST";
			break;
		
		case 4:
			sVar0 = "CLOUDS";
			break;
		
		case 5:
			sVar0 = "CLEAR";
			break;
		
		case 8:
			sVar0 = "EXTRASUNNY";
			break;
		
		case 9:
			sVar0 = "RAIN";
			break;
		
		default:
			sVar0 = "EXTRASUNNY";
			break;
	}
	return sVar0;
}

int func_164()
{
	if (Global_15866 != 0 || unk_0x12BF789190D82474())
	{
		return 1;
	}
	return 0;
}

void func_165()
{
	if (!unk_0xD62C4419A41F106A(iLocal_271[0], 0))
	{
		if (uLocal_74[0] == 8 || uLocal_74[0] == 9)
		{
			func_181(&uLocal_78, 1, 0, func_182(uLocal_74[0]), 0, 1);
			func_168("SC_SEX", 0, 0, 0);
		}
		else
		{
			func_166(iLocal_271[0], "SEX_ORAL", 10);
		}
	}
}

void func_166(int iParam0, char* sParam1, int iParam2)
{
	unk_0xAEED0213982928AC(iParam0, sParam1, func_167(iParam2), 1);
}

int func_167(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

int func_168(char* sParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<6> Var0;
	char[] cVar1[8];
	
	if (func_180())
	{
		StringCopy(&Var0, sParam0, 24);
		if (bParam1)
		{
			func_179(&Var0, bParam2);
		}
		else
		{
			Var0 = { func_178(Var0) };
		}
		if (bParam3)
		{
			cVar1 = "SCAUD";
		}
		else
		{
			cVar1 = "SHAUD";
		}
		if (func_169(&uLocal_78, cVar1, &Var0, 7, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_169(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_177(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_2621441 = 0;
	return func_170(sParam2, iParam3, 0);
}

int func_170(char* sParam0, int iParam1, bool bParam2)
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
					func_176();
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
		if (func_175(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_174();
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
				func_127();
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
				if (func_173())
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
			if (func_23())
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
			func_172();
			Global_15876 = bParam2;
		}
		Global_15868 = iParam1;
		StringCopy(&Global_15485, sParam0, 24);
		Global_14732 = 0;
		func_171();
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
		func_176();
	}
	return 0;
}

void func_171()
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

void func_172()
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

int func_173()
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

void func_174()
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

bool func_175(int iParam0, int iParam1)
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

void func_176()
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

void func_177(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15320 = { *uParam0 };
	Global_1739 = iParam1;
	StringCopy(&Global_15936, sParam2, 24);
	Global_16855 = iParam5;
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

struct<6> func_178(char[24] cParam0)
{
	int iVar0;
	
	StringConCat(&cParam0, "_", 24);
	iVar0 = uLocal_74[0];
	StringIntConCat(&cParam0, iVar0, 24);
	return cParam0;
}

void func_179(char* sParam0, bool bParam1)
{
	StringConCat(sParam0, "_", 24);
	if (func_76() == 2)
	{
		StringConCat(sParam0, "T", 24);
	}
	else if (func_76() == 0)
	{
		StringConCat(sParam0, "M", 24);
	}
	else if (func_76() == 1)
	{
		StringConCat(sParam0, "F", 24);
	}
	if (bParam1)
	{
		*sParam0 = { func_178(*sParam0) };
	}
}

int func_180()
{
	if ((unk_0xC4B7D5901EDA35B5() || unk_0x12BF789190D82474()) || Global_15866 != 0)
	{
		return 0;
	}
	return 1;
}

void func_181(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

char* func_182(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Juliet";
			break;
		
		case 1:
			return "Nikki";
			break;
		
		case 2:
			return "Chastity";
			break;
		
		case 3:
			return "Cheetah";
			break;
		
		case 4:
			return "Sapphire";
			break;
		
		case 5:
			return "Infernus";
			break;
		
		case 6:
			return "Fufu";
			break;
		
		case 7:
			return "Peach";
			break;
		
		case 8:
			return "TaxiLiz";
			break;
		
		case 9:
			return "REHH2Hiker";
			break;
	}
	return "Invalid name";
}

float func_183()
{
	switch (uLocal_74[0])
	{
		case 1:
			return 325.6f;
			break;
		
		case 0:
			return 52.89f;
			break;
		
		case 4:
			return 14.5f;
			break;
		
		case 5:
			return 43.85f;
			break;
		
		case 8:
			return 193.5f;
			break;
		
		case 9:
			return 233.2f;
			break;
	}
	return 0f;
}

Vector3 func_184(int iParam0, vector3 vParam1)
{
	var uVar0;
	
	vParam1.z = (vParam1.z + 0.15f);
	if (unk_0x8C1596BAD35D957A(vParam1, &uVar0, 0, 0))
	{
		vParam1.z = uVar0;
	}
	if (func_185(iParam0))
	{
		unk_0xBEADAF07D2339505(iParam0, vParam1, 1, false, 0, 1);
	}
	return vParam1;
}

bool func_185(int iParam0)
{
	if (!unk_0x765F6FEEFF39224F(iParam0))
	{
		return 0;
	}
	return !unk_0xD62C4419A41F106A(iParam0, 0);
}

Vector3 func_186()
{
	switch (uLocal_74[0])
	{
		case 1:
			return 130.7462f, -1896.513f, 22.3246f;
			break;
		
		case 0:
			return -162.4315f, -1635.107f, 32.6529f;
			break;
		
		case 4:
			return -197.6542f, 92.3329f, 68.5846f;
			break;
		
		case 5:
			return -848.9675f, 510.048f, 89.8218f;
			break;
		
		case 8:
			return -28.5266f, -1565.793f, 28.918f;
			break;
		
		case 9:
			return 3315.045f, 5174.08f, 17.6765f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_187(var uParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	
	if (iParam4 == 1)
	{
		unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A()), 64);
	}
	if (!unk_0x286C823E0969F22A())
	{
		unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), !bParam1, 0);
	}
	if (bParam7)
	{
		if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
		{
			unk_0x50E893C437D3AC10(unk_0x33CD235DF1E6A94E(), 1);
		}
	}
	if (!bParam1 && iParam6)
	{
		unk_0x3AAF29F17A3F9825(0, 0, 3, 0);
	}
	else
	{
		unk_0x63F0B040CE6EDF0F(bParam1, bParam2, iParam3, 1, 0, 0);
	}
	if (bParam1)
	{
		unk_0xEDF90B96BED57BCE(1);
	}
	else
	{
		if (unk_0x117DAF3BF7232886(uParam0->f_4))
		{
			if (unk_0x49D25022440E65EE(uParam0->f_4))
			{
				unk_0x189377BFBDC9127F(uParam0->f_4, false);
			}
			unk_0x2F8A4DF7D0DFF0A8(uParam0->f_4, 1);
		}
		if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
		{
			unk_0x0CDD28A9DFCE2FCE(unk_0x33CD235DF1E6A94E(), true, 0);
		}
		iVar0 = unk_0x8918EC905FC8975D();
		if (unk_0x765F6FEEFF39224F(iVar0))
		{
			unk_0x0CDD28A9DFCE2FCE(iVar0, true, 0);
		}
		unk_0xB4F447A5639E2006("TIME_LAPSE");
		if (unk_0x7C71681384076318("TOD_SHIFT_SCENE"))
		{
			unk_0xCBE6AF58552C63B2(uParam0->f_10);
			unk_0xB4F447A5639E2006("TIME_LAPSE");
			unk_0x7CED302277C0F3D3("TOD_SHIFT_SCENE");
		}
	}
	func_15(bParam1, 1, 0, 0, 0, 0);
	func_147();
	if (!bParam1 && iParam5)
	{
		if (uParam0->f_5)
		{
			unk_0xE58124354EC682AC(uParam0->f_7, 0, 0);
		}
		else
		{
			unk_0xE58124354EC682AC(uParam0->f_8, 0, 0);
		}
	}
	if (!bParam1)
	{
		if (unk_0xBB5E373390A5F824())
		{
			unk_0xACCDA78123DB57B0(250);
		}
	}
	if (!bParam1)
	{
		if (Global_106565.f_32743.f_4801 != -15)
		{
			Global_106565.f_32743.f_4801 = func_162();
		}
	}
}

float func_188(int iParam0)
{
	if (func_10(iParam0))
	{
		if (func_6(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_5(unk_0x0E4018692D92041D(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return 0f;
}

void func_189()
{
	int iVar0;
	vector3 vVar1[4];
	vector3 vVar2[4];
	var uVar3[4];
	
	func_190(&vVar1, &vVar2, &uVar3);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0x117DAF3BF7232886(iLocal_279[iVar0]))
		{
			iLocal_279[iVar0] = unk_0xB1A92B63D6757EEF(26379945, vVar1[iVar0 /*3*/], vVar2[iVar0 /*3*/], uVar3[iVar0], 0, 2);
			unk_0x083F68B89E3EA476(iLocal_279[iVar0], "HAND_SHAKE", 0.3f);
		}
		iVar0++;
	}
	Local_280.f_4 = unk_0x00E62F31D05EB2AC("DEFAULT_SPLINE_CAMERA", false);
	unk_0x9A24838D46B52597(Local_280.f_4, vVar1[0 /*3*/], vVar2[0 /*3*/], 6000, 3, 2);
	unk_0x9A24838D46B52597(Local_280.f_4, vVar1[1 /*3*/], vVar2[1 /*3*/], 6000, 3, 2);
	unk_0x63B608CD1957089E(Local_280.f_4, uVar3[0]);
}

void func_190(var uParam0, var uParam1, var uParam2)
{
	switch (uLocal_74[0])
	{
		case 1:
			*(uParam0[0 /*3*/]) = { 140.9085f, -1885.527f, 25.6959f };
			*(uParam1[0 /*3*/]) = { -9.0308f, 0f, 126.3829f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { 141.712f, -1884.935f, 30.7241f };
			*(uParam1[1 /*3*/]) = { 4.7025f, 0f, 129.5531f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { 139.1899f, -1885.865f, 24.96737f };
			*(uParam1[2 /*3*/]) = { -3.535496f, 0.081819f, 135.1308f };
			(*uParam2)[2] = 50f;
			*(uParam0[3 /*3*/]) = { 133.9669f, -1893.292f, 23.9573f };
			*(uParam1[3 /*3*/]) = { -1.8669f, -0.0329f, -5.5828f };
			(*uParam2)[3] = 50f;
			break;
		
		case 0:
			*(uParam0[0 /*3*/]) = { -186.5408f, -1629.328f, 35.8275f };
			*(uParam1[0 /*3*/]) = { -1.5588f, 0f, -118.8025f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -186.1923f, -1629.505f, 48.7132f };
			*(uParam1[1 /*3*/]) = { -1.2745f, 0f, -116.9616f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -184.9595f, -1632.193f, 36.32303f };
			*(uParam1[2 /*3*/]) = { -3.262451f, 0.073971f, -100.6756f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { -164.7078f, -1632.25f, 34.0944f };
			*(uParam1[3 /*3*/]) = { -3.7303f, 0.0222f, 108.1824f };
			(*uParam2)[3] = 40f;
			break;
		
		case 4:
			*(uParam0[0 /*3*/]) = { -208.6886f, 112.8581f, 73.0855f };
			*(uParam1[0 /*3*/]) = { -0.1055f, 0f, -156.0082f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -208.9068f, 113.3747f, 85.2889f };
			*(uParam1[1 /*3*/]) = { 3.8438f, 0f, -157.0767f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -206.2357f, 106.941f, 72.07555f };
			*(uParam1[2 /*3*/]) = { -11.58381f, 0.084975f, -158.9702f };
			(*uParam2)[2] = 45f;
			*(uParam0[3 /*3*/]) = { -197.6886f, 94.7063f, 69.814f };
			*(uParam1[3 /*3*/]) = { 0.5155f, -0.0266f, 48.8652f };
			(*uParam2)[3] = 45f;
			break;
		
		case 5:
			*(uParam0[0 /*3*/]) = { -871.6285f, 520.8466f, 93.1945f };
			*(uParam1[0 /*3*/]) = { -0.1377f, -1.3933f, -105.9309f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -871.5255f, 521.1066f, 104.6356f };
			*(uParam1[1 /*3*/]) = { 3.1118f, -1.3933f, -105.9309f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -866.6436f, 514.6121f, 92.90275f };
			*(uParam1[2 /*3*/]) = { -5.957637f, -1.324997f, -101.9062f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { -849.5522f, 514.2322f, 91.0095f };
			*(uParam1[3 /*3*/]) = { -1.626f, -1.3198f, 92.3739f };
			(*uParam2)[3] = 40f;
			break;
		
		case 8:
			*(uParam0[0 /*3*/]) = { -27.698f, -1584.646f, 31.1034f };
			*(uParam1[0 /*3*/]) = { 0.0044f, 0f, -1.9117f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -27.698f, -1584.646f, 40.4849f };
			*(uParam1[1 /*3*/]) = { 7.981f, 0f, -1.9117f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -28.63904f, -1579.74f, 30.82423f };
			*(uParam1[2 /*3*/]) = { -7.527712f, 0.030218f, -14.33051f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { -28.6719f, -1568.09f, 29.7492f };
			*(uParam1[3 /*3*/]) = { -1.5414f, 0f, -168.6005f };
			(*uParam2)[3] = 40f;
			break;
		
		case 9:
			*(uParam0[0 /*3*/]) = { 3323.631f, 5148.861f, 20.9592f };
			*(uParam1[0 /*3*/]) = { 1.1547f, 1.0064f, 21.8733f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { 3323.844f, 5148.672f, 28.2303f };
			*(uParam1[1 /*3*/]) = { 11.4168f, 1.0064f, 22.8025f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { 3328.904f, 5157.818f, 20.5799f };
			*(uParam1[2 /*3*/]) = { -3.634001f, 1.039937f, 30.44809f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { 3315.368f, 5171.771f, 18.9066f };
			*(uParam1[3 /*3*/]) = { -2.8773f, 1.0064f, -103.0585f };
			(*uParam2)[3] = 40f;
			break;
	}
}

void func_191(int iParam0, vector3 vParam1)
{
	float fVar0;
	float fVar1;
	
	if (!unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		unk_0x3C4F26ADF3BEE70B(iParam0, 1);
		if (unk_0xD76D6BCC14B95CE1(iParam0, 242628503) != 1)
		{
			unk_0xA7A57E7757ED035E(&iLocal_306);
			unk_0x99414FB2D30425C1(&iLocal_306);
			if (unk_0xF0D230FB550CD6EB(iParam0, 0))
			{
				unk_0x07C339D4328CA16C(0, 0, 16777216);
			}
			if (iParam0 == unk_0x33CD235DF1E6A94E())
			{
				fVar0 = vdist(unk_0xFBB1F99A825CAB09(iParam0, true), vLocal_285);
				fVar1 = vdist(unk_0xFBB1F99A825CAB09(iParam0, true), vLocal_286);
				if (fVar1 < fVar0)
				{
					unk_0x11C4AF4137F2A4B5(0, iLocal_271[0], 0);
				}
				else if (!unk_0x786AF4A44E1B5B4B(func_192()))
				{
					unk_0x089BDCEDF5972595(0, func_192(), 0, 552, -1);
				}
				else
				{
					unk_0x7E268975AF5EA74F(0, vLocal_285, 1f, -1, 0.25f, 64, 1193033728);
				}
			}
			if (iParam0 != unk_0x33CD235DF1E6A94E())
			{
				if (!unk_0x786AF4A44E1B5B4B(func_192()))
				{
					unk_0x089BDCEDF5972595(0, func_192(), 0, 546, -1);
				}
				else
				{
					unk_0x7E268975AF5EA74F(0, vParam1, 1f, -1, 0.25f, 1, 1193033728);
				}
				if (func_25(iParam0, vParam1, 1) > 5f)
				{
					unk_0x11C4AF4137F2A4B5(0, unk_0x33CD235DF1E6A94E(), 0);
					unk_0x108754262311D34F(0, "gestures@f@standing@casual", "gesture_come_here_soft", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x7D575FC8F42508D8(0, unk_0x9EC3B269A34A2BEE(3000, 6000));
					unk_0x11C4AF4137F2A4B5(0, unk_0x33CD235DF1E6A94E(), 0);
					unk_0x108754262311D34F(0, "gestures@f@standing@casual", "gesture_come_here_soft", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x7D575FC8F42508D8(0, unk_0x9EC3B269A34A2BEE(3000, 6000));
					unk_0x11C4AF4137F2A4B5(0, unk_0x33CD235DF1E6A94E(), 0);
					unk_0x108754262311D34F(0, "gestures@f@standing@casual", "gesture_come_here_soft", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x108754262311D34F(0, "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -4f, -1, 0, 0, 0, 0, 0);
				}
			}
			unk_0xC734F59A13D39AEF(iLocal_306);
			unk_0x13A2D602CD10CBAC(iParam0, iLocal_306);
		}
	}
}

char* func_192()
{
	char* sVar0;
	
	if (uLocal_74[0] == 1)
	{
		sVar0 = "BC_NIKKI_H_F";
	}
	return sVar0;
}

void func_193(int iParam0, int iParam1)
{
	if (!unk_0xBC2FC12AD0FBF72E(iParam0) && !unk_0xD62C4419A41F106A(iParam1, 0))
	{
		unk_0x19A39772525FA2CD(iParam0, iParam1, vLocal_287, fLocal_294, 3, 1092616192, 0);
	}
}

char* func_194()
{
	return "mini@strip_club@idles@bouncer@base";
}

char* func_195()
{
	if (func_76() == 0)
	{
		return "facials@p_m_zero@variations@happy";
	}
	else if (func_76() == 1)
	{
		return "facials@p_m_one@variations@happy";
	}
	else if (func_76() == 2)
	{
		return "facials@p_m_two@variations@happy";
	}
	return "facials@p_m_zero@variations@happy";
}

void func_196()
{
	sLocal_272 = "move_p_m_one_idles@generic";
	unk_0x0483D0035D6E46FD(sLocal_272);
}

int func_197(int iParam0)
{
	if (unk_0xD470A4E16E9AAE0E(iParam0, joaat("blimp")))
	{
		return 1;
	}
	else if (unk_0xD470A4E16E9AAE0E(iParam0, joaat("cargobob")))
	{
		return 1;
	}
	else if (unk_0xD470A4E16E9AAE0E(iParam0, joaat("cargobob2")))
	{
		return 1;
	}
	else if (unk_0xD470A4E16E9AAE0E(iParam0, joaat("cargobob3")))
	{
		return 1;
	}
	else if (unk_0xD470A4E16E9AAE0E(iParam0, joaat("buzzard")))
	{
		return 1;
	}
	else if (unk_0xD470A4E16E9AAE0E(iParam0, joaat("buzzard2")))
	{
		return 1;
	}
	else if (unk_0xD470A4E16E9AAE0E(iParam0, joaat("maverick")))
	{
		return 1;
	}
	else if (unk_0xD470A4E16E9AAE0E(iParam0, joaat("polmav")))
	{
		return 1;
	}
	else if (unk_0xD470A4E16E9AAE0E(iParam0, joaat("annihilator")))
	{
		return 1;
	}
	else if (unk_0xD470A4E16E9AAE0E(iParam0, joaat("frogger")))
	{
		return 1;
	}
	else if (unk_0xD470A4E16E9AAE0E(iParam0, joaat("frogger2")))
	{
		return 1;
	}
	return 0;
}

int func_198(var uParam0, vector3 vParam1, bool bParam2, float fParam3)
{
	if (func_200(uParam0))
	{
		unk_0xFDAF3D5C2E2300E8(*uParam0);
		if (!func_199(vParam1))
		{
			unk_0xBEADAF07D2339505(*uParam0, vParam1, 1, false, 0, 1);
			if (bParam2)
			{
				unk_0x3C990C409B3845DE(*uParam0, fParam3);
			}
			unk_0x1B2303F9DC2D90D5(*uParam0, 1084227584);
		}
		return 1;
	}
	return 0;
}

int func_199(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_200(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0x8918EC905FC8975D();
	if (unk_0x765F6FEEFF39224F(iVar0))
	{
		if (!func_137(iVar0))
		{
			if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()) && unk_0x335C0645074963FE(iVar0, unk_0x33CD235DF1E6A94E(), vLocal_63, 0, 1, 0))
			{
				unk_0xFDAF3D5C2E2300E8(iVar0);
				unk_0x23298AB8A7D0F403(iVar0, false, 0);
				unk_0x0CDD28A9DFCE2FCE(iVar0, false, 0);
				unk_0xF70578F5CD9822CB(iVar0, true);
				unk_0x0D21E1FDE062ED99(iVar0, true, 1);
				*uParam0 = iVar0;
				return 1;
			}
		}
	}
	return 0;
}

int func_201(int iParam0)
{
	if (unk_0x73DA1542B2F0C458())
	{
		if ((unk_0xE3903F59E2F22150() - Global_28) > iParam0)
		{
			Global_27 = unk_0xE3903F59E2F22150();
		}
		Global_28 = unk_0xE3903F59E2F22150();
		if ((unk_0xE3903F59E2F22150() - Global_27) > iParam0)
		{
			if (func_202())
			{
				Global_27 = unk_0xE3903F59E2F22150();
				return 1;
			}
		}
	}
	return 0;
}

int func_202()
{
	if (unk_0xD9C92B0885A075F8())
	{
		return 0;
	}
	if (unk_0x833B1A3D9F713E03(0, 18) || unk_0x833B1A3D9F713E03(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_203(bool bParam0)
{
	struct<4> Var0;
	float fVar1;
	
	func_64();
	if (unk_0xD62C4419A41F106A(iLocal_271[0], 0))
	{
		return;
	}
	unk_0x5856B9BF2B4E98C4(vLocal_287 + Vector(0f, 1f, 1f) * Vector(10f, 10f, 10f), vLocal_287 + Vector(0f, -1f, -1f) * Vector(10f, 10f, 10f), false, 1);
	fVar1 = vdist(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), unk_0xFBB1F99A825CAB09(iLocal_271[0], true));
	if (iLocal_75 != 9)
	{
		if (((fVar1 >= (200f / 2f) && func_180()) && !func_254(uLocal_300, 2)) || func_241(iLocal_271[0], 0))
		{
			if (unk_0xE38E3CF1625A4145(iLocal_277))
			{
				unk_0x1ABDB383C83A336A(&iLocal_277);
			}
			if (unk_0xE38E3CF1625A4145(iLocal_276))
			{
				unk_0x1ABDB383C83A336A(&iLocal_276);
			}
			func_238(0);
			func_82("SCLUB_HOME_R", uLocal_74[0]);
			iLocal_75 = 9;
		}
	}
	if (unk_0x09287BFEE1D9F6EF(unk_0x95B959F18401C09A(), 0))
	{
		if (iLocal_75 != 8)
		{
			if (unk_0xE38E3CF1625A4145(iLocal_277))
			{
				unk_0x1ABDB383C83A336A(&iLocal_277);
			}
			if (unk_0xE38E3CF1625A4145(iLocal_276))
			{
				unk_0x1ABDB383C83A336A(&iLocal_276);
			}
			iLocal_75 = 8;
		}
	}
	if (func_227(iLocal_271[0], &uLocal_264, &iLocal_261))
	{
		func_65(4);
	}
	if (iLocal_75 <= 1)
	{
		func_246(1);
	}
	switch (iLocal_75)
	{
		case 0:
			iLocal_76 = 0;
			if (func_180())
			{
				if (!func_254(uLocal_300, 1))
				{
					unk_0xF70578F5CD9822CB(iLocal_271[0], true);
					func_82("SCLUB_HOME_MEET", uLocal_74[0]);
					func_238(0);
					func_27(&uLocal_300, 1);
				}
				iLocal_75 = 1;
			}
			break;
		
		case 1:
			iLocal_76 = 1;
			Var0 = { func_70(uLocal_74[0]) };
			if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
			{
				iLocal_307 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
				iLocal_301 = unk_0xE80842D7B53F8525(iLocal_307);
			}
			if (unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), unk_0xFBB1F99A825CAB09(iLocal_271[0], true), 3f, 3f, 3f, false, true, 0) || (unk_0x91D5C8283D19AF49(iLocal_307, 0) && func_226(iLocal_307, iLocal_271[0], 1) <= 10f))
			{
				unk_0xF70578F5CD9822CB(iLocal_271[0], false);
				if (unk_0x765F6FEEFF39224F(iLocal_307) && (unk_0xC92AA0DBDDDE8BB8(iLocal_307) < 1 || (!bParam0 && !unk_0x0C2E237744BA0026(unk_0x541D5C57194E73C4(iLocal_307)))))
				{
					if (!func_69("SCLUB_SMALL_CAR", &Var0))
					{
						func_66("SCLUB_SMALL_CAR", uLocal_74[0], 0);
						func_166(iLocal_271[0], "NEED_A_VEHICLE", 10);
					}
				}
				else
				{
					unk_0xEDF90B96BED57BCE(1);
					unk_0xED68CDDDE25A144E(iLocal_271[0]);
					func_224();
					if (!func_254(uLocal_300, 2))
					{
						func_27(&uLocal_300, 2);
					}
					func_223();
					func_84();
					func_216(39, 1);
					func_216(40, 1);
					func_216(41, 1);
					func_216(42, 1);
					func_216(43, 1);
					func_216(44, 1);
					iLocal_75 = 2;
				}
			}
			else if (func_69("SCLUB_SMALL_CAR", &Var0))
			{
				unk_0xEDF90B96BED57BCE(1);
			}
			break;
		
		case 2:
			iLocal_76 = 2;
			if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
			{
				if (unk_0xF0D230FB550CD6EB(iLocal_271[0], 0))
				{
					iLocal_75 = 3;
				}
			}
			else
			{
				func_166(iLocal_271[0], "NEED_A_VEHICLE", 10);
				iLocal_75 = 3;
			}
			break;
		
		case 3:
			iLocal_76 = 3;
			func_213();
			if (!func_164())
			{
				if (func_180())
				{
					unk_0x496BE3DBA113D228(vLocal_287 - Vector(3f, 3f, 3f), vLocal_287 + Vector(3f, 3f, 3f), false, 1);
					unk_0x5856B9BF2B4E98C4(vLocal_287 - Vector(3f, 3f, 3f), vLocal_287 + Vector(3f, 3f, 3f), false, 1);
					unk_0xB7350047030F7672(vLocal_287, 10f, 0, 0, 0, 0, false, 0);
					unk_0x9C47E5CDFB45F474(vLocal_287, 10f, 0);
					iLocal_284 = unk_0x0335D8135051EA56(vLocal_287 - Vector(35f, 35f, 35f), vLocal_287 + Vector(35f, 35f, 35f), 0, 1, 1, 1);
					func_8(&iLocal_243);
					if (bParam0)
					{
						func_89(1);
						func_212();
					}
					else
					{
						iLocal_72 = 3;
					}
				}
			}
			break;
		
		case 4:
			iLocal_76 = 4;
			func_209(fVar1, vLocal_288);
			func_204();
			if ((func_4(&iLocal_255) > 45f || vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), vLocal_291) > (100f * 100f)) && func_25(unk_0x33CD235DF1E6A94E(), vLocal_288, 1) > 100f)
			{
				if (uLocal_74[0] == 8)
				{
					func_168("SC_WALK", 0, 0, 0);
				}
				else
				{
					func_166(iLocal_271[0], "GENERIC_FUCK_YOU", 10);
				}
				func_65(3);
			}
			else if (func_241(iLocal_271[0], 1))
			{
				if (unk_0xE38E3CF1625A4145(iLocal_277))
				{
					unk_0x1ABDB383C83A336A(&iLocal_277);
				}
				if (unk_0xE38E3CF1625A4145(iLocal_276))
				{
					unk_0x1ABDB383C83A336A(&iLocal_276);
				}
				func_238(0);
				func_82("SCLUB_HOME_R", uLocal_74[0]);
				iLocal_75 = 9;
			}
			else if (unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), vLocal_287, 3f, 3f, 2f, true, true, 2) || unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), vLocal_286, 5f, 5f, 2f, true, true, 1))
			{
				if (func_35(1, 0, 1))
				{
					iLocal_72 = 1;
				}
			}
			else if (!unk_0xA1248DEAD0B27B8E(unk_0x33CD235DF1E6A94E()))
			{
				func_212();
			}
			break;
		
		case 5:
			iLocal_76 = 5;
			func_209(fVar1, vLocal_287);
			func_204();
			func_224();
			if (unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), vLocal_287, 1f, 1f, 2f, true, true, 2))
			{
				iLocal_75 = 6;
			}
			else
			{
				if (unk_0xA1248DEAD0B27B8E(unk_0x33CD235DF1E6A94E()))
				{
					func_212();
				}
				else
				{
					func_60(vLocal_287);
				}
				if (func_105("SCLUB_HOME_WALK"))
				{
					unk_0xEDF90B96BED57BCE(1);
				}
			}
			break;
		
		case 6:
			if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
			{
				if (unk_0x765F6FEEFF39224F(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0)))
				{
					if (func_58(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), 3f, 2, 0.5f, 0, 1, 0))
					{
						func_57();
						func_191(iLocal_271[0], vLocal_286);
						if (uLocal_74[0] == 9 || uLocal_74[0] == 8)
						{
							func_168("SC_GO_DOOR", 0, 0, 0);
						}
						else
						{
							func_168("SC_FOLLOWD", 0, 0, 1);
						}
						iLocal_75 = 7;
					}
				}
			}
			else if (unk_0xA1248DEAD0B27B8E(unk_0x33CD235DF1E6A94E()))
			{
				unk_0x31826EF4A8BC8E9F(iLocal_271[0]);
				func_212();
				unk_0xEDF90B96BED57BCE(1);
			}
			break;
		
		case 7:
			iLocal_76 = 7;
			if ((!func_164() && !unk_0xC4B7D5901EDA35B5()) && !func_254(uLocal_300, 2048))
			{
				Var0 = { func_70(uLocal_74[0]) };
				func_83("SCLUB_FOLLOW_H", &Var0, 7500, 1);
				func_84();
				func_238(0);
				func_27(&uLocal_300, 2048);
			}
			if ((unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), vLocal_288, 5f, 5f, 2f, false, true, 1) || unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), vLocal_286, 5f, 5f, 2f, false, true, 1)) && unk_0xA1248DEAD0B27B8E(unk_0x33CD235DF1E6A94E()))
			{
				if (func_35(1, 0, 1))
				{
					iLocal_72 = 1;
				}
			}
			break;
		
		case 8:
			if ((!func_254(uLocal_298, 4096) && !func_164()) && !unk_0x07292B2EDB334B14(iLocal_271[0]))
			{
				if (iLocal_76 > 1 || vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), unk_0xFBB1F99A825CAB09(iLocal_271[0], true)) < (3f * 3f))
				{
					func_166(iLocal_271[0], "GENERIC_FRIGHTENED_MED", 10);
					func_27(&uLocal_298, 4096);
				}
			}
			if (!unk_0x09287BFEE1D9F6EF(unk_0x95B959F18401C09A(), 0))
			{
				iLocal_75 = iLocal_76;
			}
			break;
		
		case 9:
			if (fVar1 > 200f)
			{
				func_65(1);
			}
			else if (fVar1 <= (200f / 2f) && !func_241(iLocal_271[0], 1))
			{
				unk_0xD362430CD61A9B08();
				iLocal_75 = iLocal_76;
				if (unk_0xA1248DEAD0B27B8E(unk_0x33CD235DF1E6A94E()))
				{
					func_212();
				}
			}
			break;
	}
}

void func_204()
{
	char* sVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	if (!func_254(uLocal_300, 16))
	{
		if (func_205())
		{
			func_27(&uLocal_300, 16);
		}
		else
		{
			return;
		}
	}
	sVar0 = func_98(iLocal_271[0], 0, 0);
	if (!func_254(uLocal_300, 8))
	{
		if (!func_254(uLocal_300, 4))
		{
			if (!func_254(uLocal_298, 256))
			{
				if (uLocal_74[0] == 8 || uLocal_74[0] == 9)
				{
					func_168("SC_BJ", 0, 0, 0);
				}
				func_27(&uLocal_298, 256);
			}
			else
			{
				unk_0x0483D0035D6E46FD(sVar0);
				func_27(&uLocal_300, 4);
			}
		}
		else if (unk_0xE9CCF312047EBEE0(sVar0))
		{
			func_92(iLocal_271[0], 1, 1, -1, 1);
			unk_0x897EF720254BBEA3(iLocal_271[0], true);
			func_7(&iLocal_252);
			func_27(&uLocal_300, 8);
		}
	}
	else if (func_254(uLocal_300, 4))
	{
		iVar1 = 0;
		bVar2 = unk_0x1CE8F0A08E65CA6A(iLocal_271[0], sVar0, func_93(4, 1, 1, func_96(iLocal_307)), 3);
		bVar3 = unk_0x5DACF31D3AC5ED8D(unk_0x33CD235DF1E6A94E());
		bVar4 = unk_0xD76D6BCC14B95CE1(iLocal_271[0], 242628503) == 7;
		bVar5 = unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0);
		bVar6 = false;
		if (bVar5)
		{
			if (unk_0x765F6FEEFF39224F(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0)) && !unk_0xD62C4419A41F106A(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), 0))
			{
				bVar6 = (unk_0x0D386FBDF1E8CD84(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0)) && unk_0x8BB475EA09C9A0EB(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0)) > 5f);
			}
		}
		if ((((!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0) || func_4(&iLocal_252) > 35f) || vdist(vLocal_287, unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true)) < 75f) || bVar3) || bVar6)
		{
			if (!bVar4 && !bVar2)
			{
				unk_0x108754262311D34F(iLocal_271[0], sVar0, func_93(4, 1, 1, func_96(iLocal_307)), 8f, -8f, -1, 0, 0, 0, 0, 0);
			}
			if (bVar3)
			{
				iLocal_302 = 2000;
			}
			iVar1 = 1;
		}
		else if (bVar4)
		{
			iVar1 = 1;
		}
		if (bVar2)
		{
			func_243();
		}
		if ((iVar1 && bVar4) && !bVar2)
		{
			if (!bVar3 && bVar5)
			{
				if (bVar6)
				{
					unk_0x7FC2040EB34E0E31(unk_0x33CD235DF1E6A94E(), (unk_0xE80842D7B53F8525(unk_0x33CD235DF1E6A94E()) - ceil((IntToFloat(unk_0x194C9CD81C97B65B(unk_0x33CD235DF1E6A94E())) * 0.1f))), 0);
					func_166(unk_0x33CD235DF1E6A94E(), "GENERIC_CURSE_HIGH", 10);
				}
				else
				{
					func_166(unk_0x33CD235DF1E6A94E(), "SEX_CLIMAX", 10);
				}
				func_27(&uLocal_298, 128);
			}
			unk_0xFF2DEA68E2D3602E(sVar0);
			func_72(&uLocal_300, 4);
		}
		if (!func_254(uLocal_298, 64))
		{
			if (func_4(&iLocal_252) > 10f)
			{
				func_166(unk_0x33CD235DF1E6A94E(), "SEX_GENERIC", 10);
				func_166(iLocal_271[0], "SEX_ORAL", 10);
				func_27(&uLocal_298, 64);
			}
		}
		unk_0xC2E971FFC45AE37D();
		func_243();
	}
}

int func_205()
{
	vector3 vVar0;
	var uVar1;
	
	if (!func_180())
	{
		return 0;
	}
	func_63(&vVar0, &uVar1, 0);
	if (((vdist(vLocal_287, unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true)) > (75f * 2f) && vdist(vVar0, unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true)) > (75f / 2f)) && func_114(uLocal_74[0]) > 1) && func_206())
	{
		return 1;
	}
	return 0;
}

int func_206()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		return 0;
	}
	iVar0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
	if (unk_0x91D5C8283D19AF49(iVar0, 0))
	{
		iVar1 = unk_0x541D5C57194E73C4(iVar0);
		if (func_208(iVar1, 0) && func_207(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_207(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if (unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		if (unk_0xCD2E94F6C3101AFC(iParam0) > 0)
		{
			iVar0 = 0;
			while (iVar0 < 49)
			{
				iVar1 = iVar0;
				if (((((iVar1 != 17 && iVar1 != 18) && iVar1 != 19) && iVar1 != 20) && iVar1 != 21) && iVar1 != 22)
				{
					if (unk_0xEECA910C75BFF02B(iParam0, iVar1) != -1)
					{
						StringCopy(&cVar3, unk_0xA8D8B8C75983E4D9(iParam0, iVar1, unk_0xEECA910C75BFF02B(iParam0, iVar1)), 16);
						iVar2 = unk_0x36163153849DFDA1(&cVar3);
						if (iVar2 != 0)
						{
							if (iVar2 == unk_0x36163153849DFDA1("SABRE_CAG"))
							{
								return 0;
							}
						}
					}
				}
				iVar0++;
			}
		}
		if (unk_0xD470A4E16E9AAE0E(iParam0, -1804415708))
		{
			if ((!unk_0x34B1602009421B58(iParam0, 2) && !unk_0x34B1602009421B58(iParam0, 3)) && !unk_0x34B1602009421B58(iParam0, 4))
			{
				return 0;
			}
		}
		if (unk_0xD470A4E16E9AAE0E(iParam0, -682108547))
		{
			if (unk_0xEECA910C75BFF02B(iParam0, 10) == -1)
			{
				return 0;
			}
		}
		switch (unk_0x8D51A3997E8F3769(iParam0))
		{
			case -2066252141:
			case -782720499:
			case 542797648:
			case 68566729:
			case -1887744178:
			case 1486715695:
			case -1917671975:
			case -1405350320:
			case -157990217:
			case -280076747:
			case 1710903184:
			case 1663892749:
			case 434478421:
			case 1816176348:
			case 919485892:
			case 945079693:
			case 85100643:
			case 1939145032:
			case 1869774540:
			case -28233912:
			case -1150063973:
			case -463340997:
			case -703649403:
			case 197952738:
			case -208246612:
			case 2033852426:
			case -1820894825:
			case 1697345049:
			case -635697407:
			case -1910741341:
			case -1158091941:
			case -1834221859:
			case -1453479140:
			case -1954624455:
			case 1837596901:
			case 2013836096:
			case 1374303184:
			case 1419869906:
			case -526725184:
			case 1610027666:
			case -970031572:
			case 2071837743:
			case 1482989244:
			case 2130662788:
			case -1546132012:
			case 1410462333:
			case 1192783831:
			case -1304848574:
			case -317944664:
			case 570040040:
			case 1212243433:
			case -193022774:
			case 510359473:
			case -988377294:
			case 954521785:
			case 584837381:
			case -2123959937:
			case 1074598648:
			case 1818992907:
			case -370341013:
			case 1240573865:
			case -627376728:
			case 986556497:
			case -1852541008:
				return 1;
				break;
		}
		if (unk_0x8D51A3997E8F3769(iParam0) == 931866387 && unk_0x541D5C57194E73C4(iParam0) == joaat("slamvan"))
		{
			return 1;
		}
	}
	return 0;
}

int func_208(int iParam0, bool bParam1)
{
	if ((((unk_0x444D956C7F94526E(iParam0) || unk_0x57D74362A8BD1490(iParam0)) || unk_0x097E7778E3E162E8(iParam0)) || unk_0xFFB467183FEE27C4(iParam0)) || unk_0x9E374B5F44A76AE2(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (((((((iParam0 == joaat("police") || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("caddy")) || iParam0 == joaat("caddy2"))
		{
			return 0;
		}
	}
	if (((((((((((((((iParam0 == joaat("issi2") || iParam0 == joaat("hotknife")) || iParam0 == joaat("jb700")) || iParam0 == joaat("jester")) || iParam0 == joaat("jester2")) || iParam0 == 886810209) || iParam0 == -212993243) || iParam0 == -121446169) || iParam0 == 1909189272) || iParam0 == 1617472902) || iParam0 == 1031562256) || iParam0 == 500482303) || iParam0 == 276065473) || iParam0 == 444994115) || iParam0 == -941272559) || iParam0 == -507495760)
	{
		return 0;
	}
	return 1;
}

void func_209(float fParam0, vector3 vParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	if (!func_254(uLocal_298, 262144))
	{
		if (func_211(iLocal_271[0]))
		{
			if (uLocal_74[0] == 8)
			{
				func_168("SC_STEALC", 0, 0, 0);
			}
			else
			{
				func_166(iLocal_271[0], "GENERIC_SHOCKED_MED", 10);
			}
			func_8(&iLocal_246);
			func_27(&uLocal_298, 262144);
		}
	}
	else if (func_4(&iLocal_246) > 10f)
	{
		func_72(&uLocal_298, 262144);
		func_8(&iLocal_246);
	}
	if ((fParam0 > 5f || !func_180()) || func_254(uLocal_300, 4))
	{
		return;
	}
	if (!func_254(uLocal_298, 1) && !func_254(uLocal_298, 128))
	{
		if (vdist(vParam1, unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true)) < 75f)
		{
			if (uLocal_74[0] == 8 || uLocal_74[0] == 9)
			{
				if (func_168("SC_NEAR", 0, 0, 0))
				{
					func_27(&uLocal_298, 1);
				}
			}
			else
			{
				func_27(&uLocal_298, 1);
			}
			unk_0xB7350047030F7672(vLocal_287, 5f, 0, 0, 0, 0, false, 0);
		}
	}
	if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		return;
	}
	iVar0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
	if (!unk_0x91D5C8283D19AF49(iVar0, 0))
	{
		if (!func_254(uLocal_298, 16))
		{
			func_166(iLocal_271[0], "NEED_A_VEHICLE", 10);
			func_27(&uLocal_298, 16);
			func_8(&iLocal_243);
		}
		if (!func_254(uLocal_298, 4))
		{
			func_72(&uLocal_298, 4);
		}
		if (!func_254(uLocal_298, 8))
		{
			func_72(&uLocal_298, 8);
		}
	}
	else
	{
		fVar1 = unk_0x8BB475EA09C9A0EB(iVar0);
		fVar2 = unk_0x629D2D6C17B9B5E2(iVar0);
		if (fVar1 < (fVar2 * 0.9f) || fVar1 > (fVar2 * 0.1f))
		{
			func_8(&iLocal_249);
		}
		if (!func_254(uLocal_298, 4))
		{
			if (func_4(&iLocal_243) > 15f && func_4(&iLocal_249) > 5f)
			{
				func_166(iLocal_271[0], "DRIVEN_FAST", 10);
				func_27(&uLocal_298, 4);
				func_8(&iLocal_243);
			}
		}
		else if (func_4(&iLocal_243) < 5f)
		{
			func_72(&uLocal_298, 4);
			func_8(&iLocal_243);
		}
		if (!func_254(uLocal_298, 8))
		{
			if (func_4(&iLocal_243) > 15f && func_4(&iLocal_249) > 5f)
			{
				func_166(iLocal_271[0], "DRIVEN_SLOW", 10);
				func_27(&uLocal_298, 4);
				func_8(&iLocal_243);
			}
		}
		else if (func_4(&iLocal_243) < 5f)
		{
			func_72(&uLocal_298, 8);
			func_8(&iLocal_243);
		}
		if (!func_254(uLocal_298, 131072))
		{
			if (func_210(iLocal_271[0], &iLocal_301))
			{
				if (func_4(&iLocal_246) > 5f)
				{
					func_166(iLocal_271[0], "CRASH_GENERIC_DRIVEN", 10);
					func_27(&uLocal_298, 131072);
					func_8(&iLocal_243);
				}
			}
		}
		else if (func_4(&iLocal_246) > 5f)
		{
			func_72(&uLocal_298, 131072);
			func_8(&iLocal_246);
		}
		if (!func_254(uLocal_298, 65536))
		{
			if (func_4(&iLocal_243) > 30f || (func_4(&iLocal_243) > 10f && !func_254(uLocal_298, 32)))
			{
				func_166(iLocal_271[0], "BOOTY_FLIRT", 10);
				func_27(&uLocal_298, 32);
				func_27(&uLocal_298, 524288);
				func_8(&iLocal_243);
			}
			else if (func_254(uLocal_298, 524288))
			{
				if (!unk_0x07292B2EDB334B14(iLocal_271[0]) && func_4(&iLocal_243) > 4f)
				{
					func_166(unk_0x33CD235DF1E6A94E(), "BOOTY_FLIRT_RESP", 10);
					func_72(&uLocal_298, 524288);
				}
			}
		}
	}
}

int func_210(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
	if (unk_0x91D5C8283D19AF49(iVar0, 0))
	{
		if (unk_0xEE984ED4E4A374BE(iParam0, iVar0))
		{
			if (unk_0x0D386FBDF1E8CD84(iVar0))
			{
				iVar1 = unk_0xE80842D7B53F8525(iVar0);
				iVar2 = (*iParam1 - iVar1);
				*iParam1 = iVar1;
				unk_0x0D847D71D9E6142E(iVar0);
				if (iVar2 > 10)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_211(int iParam0)
{
	if (!unk_0xD62C4419A41F106A(iParam0, 0))
	{
		if (unk_0x8BBA6285E98709A6(108, unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), 10f) && unk_0xC4BA1231BBAF1161(iParam0, unk_0x33CD235DF1E6A94E()))
		{
			return 1;
		}
	}
	return 0;
}

void func_212()
{
	func_85();
	func_8(&iLocal_243);
	if (unk_0xA1248DEAD0B27B8E(unk_0x33CD235DF1E6A94E()))
	{
		if (unk_0xE38E3CF1625A4145(iLocal_276))
		{
			unk_0x1ABDB383C83A336A(&iLocal_276);
		}
		if (!unk_0xE38E3CF1625A4145(iLocal_277))
		{
			iLocal_277 = func_61(vLocal_288, 0);
		}
		func_8(&iLocal_255);
		vLocal_291 = { unk_0xFBB1F99A825CAB09(iLocal_271[0], true) };
		iLocal_75 = 4;
	}
	else
	{
		func_8(&iLocal_246);
		func_60(vLocal_287);
		iLocal_75 = 5;
	}
}

void func_213()
{
	if (!func_254(uLocal_298, 1024))
	{
		if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0) && unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
		{
			if (func_214(uLocal_74[0]))
			{
				if (!func_164())
				{
					func_166(iLocal_271[0], "NICE_CAR", 10);
					func_27(&uLocal_298, 1024);
				}
			}
		}
	}
}

int func_214(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
	if (unk_0x91D5C8283D19AF49(iVar0, 0))
	{
		iVar1 = unk_0x541D5C57194E73C4(iVar0);
		if (func_215(iParam0, iVar1))
		{
			return 1;
		}
	}
	return 0;
}

int func_215(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("manana"):
		case joaat("tornado"):
		case joaat("tornado3"):
		case joaat("tornado4"):
		case joaat("ztype"):
		case joaat("regina"):
			if (iParam0 == 0)
			{
				return 1;
			}
			break;
		
		case joaat("blista"):
		case joaat("surge"):
		case joaat("dilettante"):
		case joaat("penumbra"):
		case joaat("asterope"):
			if (iParam0 == 1)
			{
				return 1;
			}
			break;
		
		case joaat("dominator"):
		case joaat("gauntlet"):
		case joaat("phoenix"):
		case joaat("sabregt"):
		case joaat("bullet"):
		case joaat("banshee"):
		case joaat("peyote"):
		case joaat("buffalo"):
		case joaat("buffalo2"):
			if (iParam0 == 2)
			{
				return 1;
			}
			break;
		
		case joaat("cheetah"):
		case joaat("cogcabrio"):
		case joaat("jb700"):
		case joaat("stingergt"):
		case joaat("monroe"):
		case joaat("comet2"):
		case joaat("oracle"):
		case joaat("oracle2"):
		case joaat("intruder"):
		case joaat("jackal"):
		case joaat("exemplar"):
		case joaat("felon"):
		case joaat("superd"):
		case joaat("infernus"):
		case joaat("entityxf"):
		case joaat("adder"):
		case joaat("vacca"):
			if (iParam0 == 3 || iParam0 == 5)
			{
				return 1;
			}
			break;
		
		case joaat("baller"):
		case joaat("bison"):
		case joaat("dubsta"):
		case joaat("granger"):
		case joaat("patriot"):
		case joaat("baller2"):
		case joaat("bjxl"):
		case joaat("cavalcade"):
		case joaat("cavalcade2"):
		case joaat("gresley"):
		case joaat("landstalker"):
		case joaat("mesa"):
		case joaat("rancherxl"):
		case joaat("sandking"):
		case joaat("rebel"):
		case joaat("stretch"):
		case joaat("romero"):
		case joaat("coach"):
		case joaat("bus"):
			if (iParam0 == 4 || iParam0 == 7)
			{
				return 1;
			}
			break;
		
		case joaat("surano"):
		case joaat("rapidgt2"):
		case joaat("ninef2"):
		case joaat("zion2"):
		case joaat("tornado2"):
		case joaat("sentinel2"):
		case joaat("issi2"):
		case joaat("felon2"):
			if (iParam0 == 6 || iParam0 == 1)
			{
				return 1;
			}
			break;
		
		case joaat("vader"):
		case joaat("akuma"):
		case joaat("bagger"):
		case joaat("bati"):
		case joaat("bati2"):
		case joaat("double"):
		case joaat("hexer"):
		case joaat("nemesis"):
		case joaat("ruffian"):
			if (iParam0 == 8)
			{
				return 1;
			}
			break;
		
		case joaat("fbi"):
		case joaat("taxi"):
		case joaat("pranger"):
		case joaat("ambulance"):
		case joaat("police3"):
			if (iParam0 == 9)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_216(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_222(iParam0, 2, 1))
		{
			func_221(iParam0, 2, 1);
		}
	}
	else if (func_222(iParam0, 2, 1))
	{
		func_217(iParam0, 2, 1);
	}
}

void func_217(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xCE689A8E8C42ED78(&(Global_93734.f_1350[iParam0]), iParam1);
	}
	else if (unk_0xB331FCEB94EB05C8())
	{
		if (func_53() == 0)
		{
			iVar0 = func_219(func_220(iParam0), -1, 0);
			unk_0xCE689A8E8C42ED78(&iVar0, iParam1);
			func_218(func_220(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xCE689A8E8C42ED78(&(Global_106565.f_668[iParam0]), iParam1);
	}
}

void func_218(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_75(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x12B6E23F244DDB0F(iVar0, iParam1, iParam3);
	}
}

int func_219(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_75(iParam1)];
	if (unk_0x75D54ED6C1AD1642(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_220(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 827;
			break;
		
		case 1:
			return 828;
			break;
		
		case 2:
			return 829;
			break;
		
		case 3:
			return 830;
			break;
		
		case 4:
			return 831;
			break;
		
		case 5:
			return 832;
			break;
		
		case 6:
			return 833;
			break;
		
		case 7:
			return 834;
			break;
		
		case 8:
			return 835;
			break;
		
		case 9:
			return 836;
			break;
		
		case 10:
			return 837;
			break;
		
		case 11:
			return 838;
			break;
		
		case 12:
			return 839;
			break;
		
		case 13:
			return 840;
			break;
		
		case 14:
			return 841;
			break;
		
		case 15:
			return 843;
			break;
		
		case 16:
			return 844;
			break;
		
		case 17:
			return 845;
			break;
		
		case 18:
			return 846;
			break;
		
		case 19:
			return 847;
			break;
		
		case 20:
			return 848;
			break;
		
		case 21:
			return 849;
			break;
		
		case 22:
			return 850;
			break;
		
		case 23:
			return 851;
			break;
		
		case 24:
			return 852;
			break;
		
		case 25:
			return 853;
			break;
		
		case 26:
			return 854;
			break;
		
		case 27:
			return 855;
			break;
		
		case 28:
			return 856;
			break;
		
		case 29:
			return 857;
			break;
		
		case 30:
			return 858;
			break;
		
		case 31:
			return 859;
			break;
		
		case 32:
			return 860;
			break;
		
		case 33:
			return 861;
			break;
		
		case 34:
			return 862;
			break;
		
		case 35:
			return 863;
			break;
		
		case 36:
			return 864;
			break;
		
		case 37:
			return 865;
			break;
		
		case 38:
			return 866;
			break;
		
		case 39:
			return 867;
			break;
		
		case 40:
			return 871;
			break;
		
		case 41:
			return 872;
			break;
		
		case 42:
			return 873;
			break;
		
		case 43:
			return 874;
			break;
		
		case 44:
			return 8917;
			break;
		
		case 45:
			return 3808;
			break;
		
		case 46:
			return 5383;
			break;
		
		case 47:
			return 6155;
			break;
		
		case 48:
			return 7232;
			break;
		
		case 49:
			return 7878;
			break;
		
		case 50:
			return 8265;
			break;
		
		case 51:
			return 8267;
			break;
		
		default:
			break;
	}
	return 10383;
}

void func_221(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x8950ED5730F62EE8(&(Global_93734.f_1350[iParam0]), iParam1);
	}
	else if (unk_0xB331FCEB94EB05C8())
	{
		if (func_53() == 0)
		{
			iVar0 = func_219(func_220(iParam0), -1, 0);
			unk_0x8950ED5730F62EE8(&iVar0, iParam1);
			func_218(func_220(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x8950ED5730F62EE8(&(Global_106565.f_668[iParam0]), iParam1);
	}
}

int func_222(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return unk_0x0E4018692D92041D(Global_93734.f_1350[iParam0], iParam1);
	}
	else if (unk_0xB331FCEB94EB05C8())
	{
		if (func_53() == 0)
		{
			return unk_0x0E4018692D92041D(func_219(func_220(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x0E4018692D92041D(Global_106565.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_223()
{
	if (uLocal_74[0] == 8)
	{
		func_168("SC_GREET", 0, 0, 0);
	}
	else
	{
		func_166(iLocal_271[0], "GENERIC_HI_FLIRTY", 10);
	}
}

void func_224()
{
	if (!unk_0xE214B9FCEDF6364A(iLocal_271[0]) && vdist(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), unk_0xFBB1F99A825CAB09(iLocal_271[0], true)) < 10f)
	{
		unk_0x140D4A6561E11695(iLocal_271[0], func_225());
		unk_0x9AA80CA39F863D9D(iLocal_271[0], 0);
	}
}

int func_225()
{
	return unk_0x733DE09777D47CD6(unk_0x3EE1295CEFBEFED4());
}

float func_226(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!unk_0xD62C4419A41F106A(iParam0, 0))
	{
		vVar0 = { unk_0xFBB1F99A825CAB09(iParam0, true) };
	}
	else
	{
		vVar0 = { unk_0xFBB1F99A825CAB09(iParam0, false) };
	}
	if (!unk_0xD62C4419A41F106A(iParam1, 0))
	{
		vVar1 = { unk_0xFBB1F99A825CAB09(iParam1, true) };
	}
	else
	{
		vVar1 = { unk_0xFBB1F99A825CAB09(iParam1, false) };
	}
	return unk_0x16E00F066AFFEA0D(vVar0, vVar1, bParam2);
}

int func_227(int iParam0, var uParam1, int iParam2)
{
	var uVar0;
	int iVar1;
	
	if (!func_10(iParam2))
	{
		func_7(iParam2);
	}
	if (func_4(iParam2) > 3f)
	{
		if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
		{
			iVar1 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
		}
		if (func_230(iParam0, iVar1, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_228(&uVar0);
			if (unk_0x765F6FEEFF39224F(iParam0))
			{
				if (!unk_0xD62C4419A41F106A(iParam0, 0))
				{
					if (!unk_0xA2BBDC0B3CC54EBF(iLocal_70))
					{
						unk_0x9315FCF6CFE2AB41("BootyCall", &iLocal_70);
					}
					unk_0xD2E80177F27FD43F(2, iLocal_70, 1862763509);
					unk_0xD2E80177F27FD43F(2, 1862763509, iLocal_70);
					unk_0x0648A75D3F60E864(iParam0, iLocal_70);
					unk_0xECCD4FDA45197F97(iParam0, unk_0x33CD235DF1E6A94E(), 500f, -1, 0, 0);
				}
			}
			func_8(iParam2);
			return 1;
		}
	}
	return 0;
}

void func_228(var uParam0)
{
	switch (*uParam0)
	{
		case 1:
		case 4:
		case 16:
			func_229(1);
			break;
		
		case 2:
			break;
	}
}

void func_229(bool bParam0)
{
	Global_105559 = 0;
	Global_105559.f_1 = -1;
	Global_105559.f_2 = -1;
	if (bParam0)
	{
		func_120(-1);
	}
}

int func_230(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0x33CD235DF1E6A94E();
	if (!unk_0xD62C4419A41F106A(iVar0, 0) && !unk_0xD62C4419A41F106A(iParam0, 0))
	{
		if (!func_254(*uParam2, 1))
		{
			if (func_237(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_254(*uParam2, 2))
		{
			if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_254(*uParam2, 4))
		{
			if (func_235(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_254(*uParam2, 8))
		{
			if (func_234(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_254(*uParam2, 128);
		if (bParam4)
		{
			if (func_231(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_254(*uParam2, 16))
		{
			if (func_231(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (unk_0x765F6FEEFF39224F(iParam0))
	{
		if (iParam7 && unk_0x91BBD269506D61D2(iParam0, iVar0, 1))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_231(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_59)
		{
			iLocal_60 = unk_0xE80842D7B53F8525(iParam0);
			bLocal_59 = true;
		}
		iLocal_61 = unk_0xE80842D7B53F8525(iParam0);
		iLocal_62 = (iLocal_60 - iLocal_61);
		iVar0 = unk_0x8918EC905FC8975D();
		if (!unk_0xD62C4419A41F106A(iVar0, 0))
		{
			if (unk_0x91BBD269506D61D2(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_62) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_59)
		{
			if (unk_0x91BBD269506D61D2(iParam0, unk_0x33CD235DF1E6A94E(), 1))
			{
				if (IntToFloat(iLocal_62) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x91BBD269506D61D2(iParam0, unk_0x33CD235DF1E6A94E(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = unk_0x8918EC905FC8975D();
		if (!unk_0xD62C4419A41F106A(iVar1, 0))
		{
			if (unk_0x91BBD269506D61D2(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0xD62C4419A41F106A(iParam0, 0))
		{
			if (unk_0x2E9A4AE2A5B4D8E8(iParam0))
			{
				if (unk_0x457C8D55A1BB6B51(iParam0) == unk_0x33CD235DF1E6A94E())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0xA08B8AEC5B1A55D6(unk_0x33CD235DF1E6A94E()))
		{
			if (unk_0x18FB647D79B09657(iParam0, unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), 10f, 10f, 10f, false, true, 0))
			{
				if (unk_0x7E8740F26D4CAB87(unk_0x95B959F18401C09A()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x16BA85002E7063C6(unk_0x33CD235DF1E6A94E()))
	{
		if (unk_0x162E5B814E5F91B3(iParam0))
		{
			return 1;
		}
	}
	if (func_233(unk_0x33CD235DF1E6A94E(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x3AF2B3B68DD52355(iParam0) && func_232(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0xF0D230FB550CD6EB(iParam0, 0))
		{
			if (unk_0x4ED4D1D8B2023FD8(unk_0x33CD235DF1E6A94E(), unk_0xF2C96862595654B4(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0x4ED4D1D8B2023FD8(unk_0x33CD235DF1E6A94E(), iParam0))
		{
			return 1;
		}
		if (!unk_0xD62C4419A41F106A(iParam1, 0))
		{
			if (unk_0x91BBD269506D61D2(iParam1, unk_0x33CD235DF1E6A94E(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_232(int iParam0, bool bParam1)
{
	return func_226(unk_0x378BD4B3881338C2(unk_0x3EE1295CEFBEFED4()), iParam0, bParam1);
}

int func_233(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x96C4B46F194803A7(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0x5DACF31D3AC5ED8D(iParam0))
		{
			if (vdist(unk_0xFBB1F99A825CAB09(iParam0, true), unk_0xFBB1F99A825CAB09(iParam1, true)) < 2.5f)
			{
				if (unk_0x910FF514D7BC5674(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_234(int iParam0, int iParam1, var uParam2)
{
	if (unk_0x9ED464AAA493C8EF(iParam0, 4))
	{
		if (unk_0x5DACF31D3AC5ED8D(iParam0) && !unk_0xB15E06E3E9C9AEA5(iParam0))
		{
			if (unk_0x18FB647D79B09657(iParam1, unk_0xFBB1F99A825CAB09(iParam0, true), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_235(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar1;
	
	iVar1 = 0;
	if (!unk_0xD62C4419A41F106A(iParam1, 0))
	{
		vVar0 = { unk_0xFBB1F99A825CAB09(iParam1, true) };
	}
	if (unk_0x416C37C19CCE0077(vVar0, 4f, 1))
	{
		return 1;
	}
	if (unk_0xEA8CEFB1F41E5992(vVar0, to_float(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0x9ED464AAA493C8EF(iParam0, 2))
	{
		if (unk_0x5DACF31D3AC5ED8D(iParam0))
		{
			if (unk_0x18FB647D79B09657(iParam1, unk_0xFBB1F99A825CAB09(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
			{
				if (unk_0x910FF514D7BC5674(unk_0x22B02EC53152632C(iParam1), iParam0, 120f) && unk_0x72F7FAFD0710100C(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0xF0D230FB550CD6EB(unk_0x22B02EC53152632C(iParam1), 0))
			{
				iVar1 = unk_0xF2C96862595654B4(unk_0x22B02EC53152632C(iParam1), 0);
			}
			if (unk_0x105CB7A75E93DC77(iParam0) || func_236(iVar1))
			{
				if (unk_0x18FB647D79B09657(iParam1, unk_0xFBB1F99A825CAB09(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
				{
					if (unk_0x910FF514D7BC5674(unk_0x22B02EC53152632C(iParam1), iParam0, 120f) && unk_0x72F7FAFD0710100C(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0x34DB0AC28A1FDE20((vVar0.x - IntToFloat(uParam2->f_6)), (vVar0.y - IntToFloat(uParam2->f_6)), (vVar0.z - IntToFloat(uParam2->f_6)), (vVar0.x + IntToFloat(uParam2->f_6)), (vVar0.y + IntToFloat(uParam2->f_6)), (vVar0.z + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_236(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		if (unk_0x91D5C8283D19AF49(iParam0, 0))
		{
			if (unk_0x7BDC41A7CA0C77A2(iParam0, -1, 0) != 0)
			{
				if (unk_0x96C4B46F194803A7(unk_0x33CD235DF1E6A94E(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_226(unk_0x33CD235DF1E6A94E(), iParam0, 1) < 40f)
						{
							if (unk_0xDFD0ACB809AD97C9(unk_0x95B959F18401C09A(), &iVar1))
							{
								if ((unk_0x680558231C80291D(iVar1) && unk_0xEAE1362B9F5C7B18(iVar1) == iParam0) || (unk_0x068481DAF84B9654(iVar1) && unk_0x22B02EC53152632C(iVar1) == unk_0x7BDC41A7CA0C77A2(iParam0, -1, 0)))
								{
									if ((unk_0xA1248DEAD0B27B8E(unk_0x33CD235DF1E6A94E()) && unk_0xF1CDE9FD207C4CD8(0, 24)) || (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0) && unk_0xF1CDE9FD207C4CD8(0, 69)))
									{
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_237(int iParam0, var uParam1)
{
	if (!unk_0xD62C4419A41F106A(iParam0, 0))
	{
		if (unk_0x9ED464AAA493C8EF(unk_0x33CD235DF1E6A94E(), 6))
		{
			if (unk_0xAC6A512C64D9A9C0(unk_0x95B959F18401C09A(), iParam0) || unk_0xC2ECB90E2DFA5802(unk_0x95B959F18401C09A(), iParam0))
			{
				if (unk_0x910FF514D7BC5674(iParam0, unk_0x33CD235DF1E6A94E(), 90f))
				{
					if (func_232(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0xE3903F59E2F22150();
						}
						else if ((unk_0xE3903F59E2F22150() - uParam1->f_1) > uParam1->f_3)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_238(int iParam0)
{
	struct<4> Var0;
	
	if (unk_0xE38E3CF1625A4145(uLocal_278[iParam0]))
	{
		unk_0x1ABDB383C83A336A(&(uLocal_278[iParam0]));
	}
	uLocal_278[iParam0] = func_239(iLocal_271[iParam0], 0, 145);
	Var0 = { func_70(uLocal_74[iParam0]) };
	unk_0x1C95CD840303FC37(uLocal_278[iParam0], &Var0);
}

int func_239(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_240(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xE38E3CF1625A4145(iVar0)) && unk_0xEAF855A7DC28BC8D(&(Global_106565.f_28044[iParam2 /*29*/].f_3)))
	{
		unk_0x1C95CD840303FC37(iVar0, &(Global_106565.f_28044[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_240(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0x765F6FEEFF39224F(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x8848A15CBDADDC60(iParam0);
	if (unk_0x680558231C80291D(iParam0))
	{
		unk_0xCE5C49921A521962(iVar0, func_62(unk_0xB331FCEB94EB05C8(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xBF11C8A43770C598(iVar0, bParam1);
		}
		else
		{
			unk_0xB9E84A421C105943(iVar0, 2);
		}
	}
	else if (unk_0x068481DAF84B9654(iParam0))
	{
		unk_0xCE5C49921A521962(iVar0, func_62(unk_0xB331FCEB94EB05C8(), 0.7f, 0.7f));
		unk_0xBF11C8A43770C598(iVar0, bParam1);
	}
	else if (unk_0xA3A29DB165882310(iParam0))
	{
		unk_0xCE5C49921A521962(iVar0, func_62(unk_0xB331FCEB94EB05C8(), 0.7f, 0.7f));
	}
	return iVar0;
}

int func_241(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	int iVar2;
	float fVar3;
	
	vVar0 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true) };
	vVar1 = { unk_0xFBB1F99A825CAB09(iParam0, true) };
	if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		iVar2 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
		if (unk_0xD73AC2F2DBBB17E5(iParam0) == func_225())
		{
			if (unk_0x91D5C8283D19AF49(iVar2, 0))
			{
				if (!unk_0x10930B9CAD4111C2(iParam0, iVar2, 0) && vdist(vVar0, vVar1) > 10f)
				{
					return 1;
				}
			}
		}
	}
	if (iParam1 && func_254(uLocal_300, 2))
	{
		fVar3 = unk_0x7EECA16E87982278((vVar0.z - vVar1.z));
		if (fVar3 > 8f)
		{
			return 1;
		}
	}
	return 0;
}

void func_242()
{
	if (!unk_0xD62C4419A41F106A(iLocal_271[0], 0))
	{
		if (!unk_0xE980BAFD70E8A4B3())
		{
			func_184(iLocal_271[0], unk_0xCD1EDCB38767B47C(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), unk_0xC472E34C8FBEC678(unk_0x33CD235DF1E6A94E()), 0f, 2f, 0f));
			iLocal_72 = 1;
			iLocal_73 = 0;
		}
	}
}

void func_243()
{
	unk_0x818D1850BE9E44A9();
	func_244();
}

void func_244()
{
	Global_17272.f_134 = 1;
}

int func_245(int iParam0, bool bParam1)
{
	if (iParam0 == 0)
	{
		if (bParam1)
		{
			return joaat("csb_stripper_01");
		}
		else
		{
			return joaat("s_f_y_stripper_01");
		}
	}
	else if (iParam0 == 1)
	{
		if (bParam1)
		{
			return joaat("csb_stripper_02");
		}
		else
		{
			return joaat("s_f_y_stripper_02");
		}
	}
	return 0;
}

void func_246(bool bParam0)
{
	struct<8> Var0;
	
	if (!func_158(iLocal_71))
	{
		iLocal_71 = func_162();
		func_152(&iLocal_71, 0, 0, unk_0x9EC3B269A34A2BEE(5, 7), 0, 0, 0);
	}
	else if (bParam0)
	{
		if (!func_254(uLocal_300, 512))
		{
			if (func_253(iLocal_71) && unk_0xC30D5C4DCAC8020A(iLocal_271[0]))
			{
				if (uLocal_74[0] == 8 || uLocal_74[0] == 9)
				{
					StringCopy(&Var0, "SC_CANCEL_", 64);
					StringIntConCat(&Var0, uLocal_74[0], 64);
					func_181(&uLocal_78, 1, 0, func_182(uLocal_74[0]), 0, 1);
					func_252(&uLocal_78, func_110(uLocal_74[0]), "SHAUD", &Var0, 7, 0, 0, 1);
				}
				else
				{
					func_250();
				}
				func_249(iLocal_271[0]);
				func_27(&uLocal_300, 512);
			}
		}
		else if (func_248())
		{
			func_72(&uLocal_300, 512);
		}
		else if ((!func_164() && func_247()) && !func_248())
		{
			func_229(1);
			func_65(2);
		}
	}
}

int func_247()
{
	if (Global_15866 == 0)
	{
		return 1;
	}
	return 0;
}

int func_248()
{
	if (Global_15915 == 1 || Global_16882 == 1)
	{
		return 1;
	}
	return 0;
}

void func_249(int iParam0)
{
	if (!unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		unk_0x3C4F26ADF3BEE70B(iParam0, 1);
		if (unk_0xD76D6BCC14B95CE1(iParam0, 242628503) != 1)
		{
			unk_0xA7A57E7757ED035E(&iLocal_306);
			unk_0x99414FB2D30425C1(&iLocal_306);
			unk_0xCB25F217D36BC6F2(0, 8000);
			unk_0x7E268975AF5EA74F(0, vLocal_286, 1.5f, -1, 0.25f, 0, 1193033728);
			unk_0xC734F59A13D39AEF(iLocal_306);
			unk_0x13A2D602CD10CBAC(iParam0, iLocal_306);
		}
	}
}

void func_250()
{
	int iVar0;
	
	if (func_251())
	{
		return;
	}
	iVar0 = func_113(uLocal_74[0]);
	func_107(-384575792, iVar0, 6, 3, func_111(), func_110(uLocal_74[0]), 0, 10000, -1, 0, -1, 0, 1);
}

int func_251()
{
	if (func_53() == 0)
	{
		return 1;
	}
	return 0;
}

int func_252(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_177(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15914 = 1;
	Global_15873 = 1;
	Global_15880 = 0;
	Global_15875 = 0;
	Global_16857 = 0;
	Global_16859 = 0;
	Global_16863 = 0;
	Global_15871 = 0;
	Global_15918 = 0;
	Global_15920 = 0;
	Global_2621441 = 0;
	return func_170(sParam3, iParam4, bParam7);
}

bool func_253(int iParam0)
{
	return func_157(func_162(), iParam0);
}

bool func_254(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_255(var uParam0, bool bParam1)
{
	vector3 vVar0;
	float fVar1;
	int iVar2;
	char cVar3[64];
	struct<16> Var4;
	struct<8> Var5;
	
	func_283();
	func_63(&vVar0, &fVar1, bParam1);
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		if (fLocal_296 == -1f)
		{
			fLocal_296 = vdist(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), vVar0);
		}
		if (iLocal_299 == -1)
		{
			iLocal_299 = uParam0->f_3;
		}
		if (!func_254(uLocal_300, 32))
		{
			func_279(&uLocal_274, func_281((*uParam0)[0], 0));
			func_278(&uLocal_274);
			func_27(&uLocal_300, 32);
			unk_0x0483D0035D6E46FD("mini@strip_club@idles@stripper");
			unk_0x0483D0035D6E46FD("gestures@f@standing@casual");
			func_277();
			return 0;
		}
		else if ((!func_276(&uLocal_274) || !unk_0xE9CCF312047EBEE0("mini@strip_club@idles@stripper")) || !func_275())
		{
			return 0;
		}
		if (bLocal_304)
		{
			if (!unk_0xDB7A20748C5E6EF3(1))
			{
				return 0;
			}
		}
		if (!func_254(uLocal_300, 1024))
		{
			uLocal_74[0] = (*uParam0)[0];
			iLocal_271[0] = unk_0x9BA5CF280376EEA4(26, func_281((*uParam0)[0], 0), vVar0, fVar1, 1, true);
			func_269(iLocal_271[0], uLocal_74[0], 0);
			unk_0x4A852F02088ECC9D(iLocal_271[iVar2], true);
			unk_0x897EF720254BBEA3(iLocal_271[0], true);
			unk_0x262617DE7F70A56D(iLocal_271[0], true);
			func_265(iLocal_271[0]);
			unk_0x108754262311D34F(iLocal_271[0], "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -1.5f, -1, 1, 0, 0, 0, 0);
			unk_0xC4A347124F39D998(iLocal_271[iVar2], unk_0x33CD235DF1E6A94E(), -1, 2048, 4);
			unk_0x9AA80CA39F863D9D(iLocal_271[0], 0);
			unk_0x5464B9731013E08C(iLocal_271[0], func_182((*uParam0)[0]));
			func_181(&uLocal_78, 1, iLocal_271[0], func_182((*uParam0)[0]), 0, 1);
			func_27(&uLocal_300, 1024);
		}
		if (vdist(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), vVar0) > 100f)
		{
			if (func_180())
			{
				if (!func_254(uLocal_300, 1))
				{
					func_264(bParam1);
					func_238(0);
					func_27(&uLocal_300, 1);
				}
			}
			if (!func_254(uLocal_300, 64) && !func_254(uLocal_300, 512))
			{
				if (func_263(func_110((*uParam0)[0])))
				{
					StringCopy(&cVar3, "BC_PLYRC_", 64);
					if (func_76() == 2)
					{
						func_181(&uLocal_78, 0, unk_0x33CD235DF1E6A94E(), "TREVOR", 0, 1);
						StringConCat(&cVar3, "T", 64);
					}
					else if (func_76() == 0)
					{
						func_181(&uLocal_78, 0, unk_0x33CD235DF1E6A94E(), "MICHAEL", 0, 1);
						StringConCat(&cVar3, "M", 64);
					}
					else if (func_76() == 1)
					{
						func_181(&uLocal_78, 0, unk_0x33CD235DF1E6A94E(), "FRANKLIN", 0, 1);
						StringConCat(&cVar3, "F", 64);
					}
					func_181(&uLocal_78, 3, 0, func_182((*uParam0)[0]), 0, 1);
					Var4 = { func_262() };
					func_257(&uLocal_78, func_110((*uParam0)[0]), "BCAUD", &cVar3, &cVar3, &Var4, &Var4, 12, 1, 0, 0, 0);
					func_27(&uLocal_300, 64);
				}
				if (func_158(iLocal_71))
				{
					if (func_253(iLocal_71))
					{
						if ((*uParam0)[0] == 8 || (*uParam0)[0] == 9)
						{
							StringCopy(&Var5, "SC_CANCEL_", 64);
							StringIntConCat(&Var5, (*uParam0)[0], 64);
							func_181(&uLocal_78, 1, 0, func_182((*uParam0)[0]), 0, 1);
							func_252(&uLocal_78, func_110((*uParam0)[0]), "SHAUD", &Var5, 12, 0, 0, 1);
						}
						else
						{
							func_250();
						}
						func_27(&uLocal_300, 512);
					}
				}
			}
			else if (func_248())
			{
				func_72(&uLocal_300, 64);
				func_72(&uLocal_300, 512);
			}
			else if ((!func_164() && func_247()) && !func_248())
			{
				func_256((*uParam0)[0]);
				func_229(1);
				func_65(2);
			}
			if (!func_254(uLocal_300, 128))
			{
				if (!func_33(0))
				{
					func_66("SCLUB_HOME_C_H", uLocal_74[0], 0);
					func_27(&uLocal_300, 128);
				}
			}
			if (vdist(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), vVar0) > (fLocal_296 + (200f * 3f)))
			{
				func_65(1);
			}
			else if (vdist(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), vVar0) < fLocal_296)
			{
				fLocal_296 = vdist(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), vVar0);
			}
			return 0;
		}
	}
	else
	{
		return 0;
	}
	if (func_76() == 2)
	{
		func_181(&uLocal_78, 0, unk_0x33CD235DF1E6A94E(), "TREVOR", 0, 1);
	}
	else if (func_76() == 0)
	{
		func_181(&uLocal_78, 0, unk_0x33CD235DF1E6A94E(), "MICHAEL", 0, 1);
	}
	else if (func_76() == 1)
	{
		func_181(&uLocal_78, 0, unk_0x33CD235DF1E6A94E(), "FRANKLIN", 0, 1);
	}
	return 1;
}

void func_256(int iParam0)
{
	if (Global_106565.f_243[func_74() /*53*/].f_2[iParam0 /*5*/].f_1 < 0)
	{
		Global_106565.f_243[func_74() /*53*/].f_2[iParam0 /*5*/].f_1 = 0;
	}
	Global_106565.f_243[func_74() /*53*/].f_2[iParam0 /*5*/].f_1++;
}

int func_257(var uParam0, int iParam1, char* sParam2, char[4] cParam3, char[4] cParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	var uVar1;
	
	func_177(uParam0, iParam1, sParam2, iParam9, iParam10, 0);
	func_261();
	if (iParam8 == 1)
	{
		Global_15878 = 1;
	}
	else
	{
		Global_15878 = 0;
	}
	uVar0 = 10;
	uVar1 = 10;
	func_259(2, &uVar0, &uVar1, cParam3, cParam4, uParam5, uParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_258(&uVar0, &uVar1, iParam7, bParam11);
}

int func_258(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	Global_15867 = 0;
	if (Global_15866 == 0 || Global_15868 == 2)
	{
		if (Global_15866 != 0)
		{
			if (iParam2 > Global_15868)
			{
				if (bParam3 == 0)
				{
					unk_0xD92171BC6C48DB90(false);
					Global_14553.f_1 = 3;
					Global_15866 = 0;
					Global_15867 = 1;
					Global_15919 = 0;
					Global_15862 = 0;
					Global_15863 = 0;
				}
				else
				{
					func_176();
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
		if (func_175(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_174();
		Global_15155 = { Global_15320 };
		Global_15872 = Global_15873;
		Global_15879 = Global_15880;
		Global_2621442 = Global_2621441;
		Global_15881 = { Global_15897 };
		Global_15874 = Global_15875;
		Global_16856 = Global_16857;
		Global_16864 = { Global_16870 };
		Global_16862 = Global_16863;
		Global_16858 = Global_16859;
		Global_16860 = Global_16861;
		Global_15485.f_368 = Global_16853;
		Global_15485.f_369 = Global_16854;
		Global_15485.f_370 = Global_16855;
		Global_15862 = Global_15863;
		Global_15864 = Global_15865;
		if (Global_16124 == 0)
		{
			Global_16020[0 /*6*/] = { Global_16046[0 /*6*/] };
			Global_16020[1 /*6*/] = { Global_16046[1 /*6*/] };
			Global_16072[0 /*6*/] = { Global_16098[0 /*6*/] };
			Global_16072[1 /*6*/] = { Global_16098[1 /*6*/] };
			Global_16033[0 /*6*/] = { Global_16059[0 /*6*/] };
			Global_16033[1 /*6*/] = { Global_16059[1 /*6*/] };
			Global_16085[0 /*6*/] = { Global_16111[0 /*6*/] };
			Global_16085[1 /*6*/] = { Global_16111[1 /*6*/] };
		}
		if (Global_15872)
		{
			unk_0xCE689A8E8C42ED78(&Global_2423, 20);
			unk_0xCE689A8E8C42ED78(&Global_2424, 17);
			unk_0xCE689A8E8C42ED78(&Global_2425, 0);
			if (bParam3)
			{
				func_127();
				if (Global_3228[Global_14553 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
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
				if (func_173())
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
					if (Global_16124 == 0)
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
			}
			if (func_23())
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
			}
			func_172();
			Global_15876 = bParam3;
		}
		Global_15868 = iParam2;
		if (Global_15862 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_15862)
			{
				StringCopy(&(Global_15485.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_15485.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_14732 = 0;
		func_171();
		return 1;
	}
	if (Global_15866 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_15868 || iParam2 == Global_15868)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_176();
	}
	return 0;
}

void func_259(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	func_260(iParam0);
	(*uParam1)[0] = uParam3;
	(*uParam2)[0] = uParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = iParam7;
	(*uParam2)[2] = iParam8;
	(*uParam1)[3] = iParam9;
	(*uParam2)[3] = iParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

void func_260(var uParam0)
{
	Global_15863 = uParam0;
	Global_15873 = 1;
	Global_15880 = 0;
	Global_15875 = 0;
	Global_16857 = 0;
	Global_16863 = 0;
	Global_2621441 = 0;
}

void func_261()
{
	Global_15914 = 0;
	Global_15873 = 1;
	Global_15880 = 0;
	Global_15875 = 0;
	Global_16857 = 0;
	Global_16859 = 0;
	Global_15880 = 0;
	Global_16863 = 0;
	Global_15871 = 0;
	Global_15918 = 0;
	Global_15920 = 0;
	Global_2621441 = 0;
}

struct<16> func_262()
{
	struct<16> Var0;
	
	StringCopy(&Var0, "BC_DECR_", 64);
	StringIntConCat(&Var0, uLocal_74[0], 64);
	return Var0;
}

int func_263(int iParam0)
{
	if ((Global_16980 || Global_16979) || Global_16981)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return 0;
		}
	}
	if (Global_117[iParam0 /*10*/].f_8 != 147)
	{
		if (Global_14553.f_1 == 10)
		{
			if (Global_1738 == iParam0)
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
	return 0;
}

void func_264(bool bParam0)
{
	switch (uLocal_74[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (bParam0)
			{
				func_82("SCLUB_HOME_MEE4", uLocal_74[0]);
			}
			else
			{
				func_82("SCLUB_HOME_MEET", uLocal_74[0]);
			}
			break;
		
		case 8:
			func_82("SCLUB_HOME_LIZ", uLocal_74[0]);
			break;
		
		case 9:
			func_82("SCLUB_HOME_HITCH", uLocal_74[0]);
			break;
	}
}

void func_265(int iParam0)
{
	if (unk_0x541D5C57194E73C4(iParam0) == joaat("s_f_y_stripper_02"))
	{
		func_268(iParam0, 2, unk_0x9EC3B269A34A2BEE(0, 3));
		func_267(iParam0, 2, unk_0x9EC3B269A34A2BEE(0, 3));
		func_266(iParam0, 0, 0);
	}
}

void func_266(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x8B22CCEB433F9C0F(iParam0, 6, iParam1, iParam2))
	{
		unk_0x93AA93DA1B137032(iParam0, 6, iParam1, iParam2, 0);
	}
}

void func_267(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x8B22CCEB433F9C0F(iParam0, 3, iParam1, iParam2))
	{
		unk_0x93AA93DA1B137032(iParam0, 3, iParam1, iParam2, 0);
	}
}

void func_268(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x8B22CCEB433F9C0F(iParam0, 8, iParam1, iParam2))
	{
		unk_0x93AA93DA1B137032(iParam0, 8, iParam1, iParam2, 0);
	}
}

void func_269(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	
	if (!unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		unk_0xFDA78B1CA2B4FB0A(iParam0);
		bVar0 = false;
		if (unk_0x541D5C57194E73C4(iParam0) == joaat("mp_f_stripperlite"))
		{
			bVar0 = true;
		}
		switch (iParam1)
		{
			case 0:
				if (bVar0)
				{
					func_274(iParam0, 1, 0);
					func_273(iParam0, 1, 0);
					func_267(iParam0, 1, 0);
					func_272(iParam0, 1, 0);
					func_271(iParam0, 1, -1, -1);
				}
				else
				{
					func_274(iParam0, 1, 1);
					func_273(iParam0, 2, 0);
					func_267(iParam0, 0, 0);
					func_272(iParam0, 0, 0);
					func_268(iParam0, 1, 0);
					func_270(iParam0, 0, 0);
					func_271(iParam0, bParam2, -1, -1);
				}
				break;
			
			case 1:
				if (bVar0)
				{
					func_274(iParam0, 0, 0);
					func_273(iParam0, 0, 0);
					func_267(iParam0, 0, 0);
					func_272(iParam0, 0, 0);
					func_268(iParam0, 0, 0);
					func_271(iParam0, bParam2, -1, -1);
				}
				else
				{
					func_274(iParam0, 0, 0);
					func_273(iParam0, 0, 0);
					func_267(iParam0, 0, 0);
					func_272(iParam0, 0, 0);
					func_266(iParam0, 4, 0);
					func_268(iParam0, 0, 0);
					func_271(iParam0, bParam2, 0, 4);
				}
				break;
			
			case 2:
				if (bVar0)
				{
					func_274(iParam0, 1, 0);
					func_273(iParam0, 1, 1);
					func_267(iParam0, 1, 0);
					func_272(iParam0, 1, 0);
					func_271(iParam0, 1, -1, -1);
				}
				else
				{
					func_274(iParam0, 0, 1);
					func_273(iParam0, 1, 1);
					func_267(iParam0, 1, 0);
					func_272(iParam0, 1, 1);
					func_268(iParam0, 1, 0);
					func_270(iParam0, 1, 0);
					func_271(iParam0, bParam2, -1, -1);
				}
				break;
			
			case 3:
				if (bVar0)
				{
					func_274(iParam0, 0, 0);
					func_273(iParam0, 0, 1);
					func_267(iParam0, 0, 1);
					func_272(iParam0, 0, 1);
					func_268(iParam0, 0, 0);
					func_271(iParam0, bParam2, -1, -1);
				}
				else
				{
					func_274(iParam0, 0, 0);
					func_273(iParam0, 2, 0);
					func_267(iParam0, 0, 2);
					func_272(iParam0, 1, 1);
					func_266(iParam0, 0, 0);
					func_268(iParam0, 0, 0);
					func_271(iParam0, bParam2, 2, 0);
				}
				break;
			
			case 4:
				if (bVar0)
				{
					func_274(iParam0, 1, 0);
					func_273(iParam0, 1, 0);
					func_267(iParam0, 1, 0);
					func_272(iParam0, 1, 0);
					func_271(iParam0, 1, -1, -1);
				}
				else
				{
					func_274(iParam0, 1, 0);
					func_273(iParam0, 2, 1);
					func_267(iParam0, 1, 2);
					func_272(iParam0, 0, 2);
					func_268(iParam0, 1, 0);
					func_270(iParam0, 1, 2);
					func_271(iParam0, bParam2, -1, -1);
				}
				break;
			
			case 5:
				if (bVar0)
				{
					func_274(iParam0, 0, 0);
					func_273(iParam0, 0, 0);
					func_267(iParam0, 0, 0);
					func_272(iParam0, 0, 0);
					func_268(iParam0, 0, 0);
					func_271(iParam0, bParam2, -1, -1);
				}
				else
				{
					func_274(iParam0, 1, 1);
					func_273(iParam0, 1, 0);
					func_267(iParam0, 0, 1);
					func_272(iParam0, 0, 2);
					func_266(iParam0, 2, 0);
					func_268(iParam0, 0, 0);
					func_271(iParam0, bParam2, 1, 2);
				}
				break;
			
			case 6:
				if (bVar0)
				{
					func_274(iParam0, 1, 0);
					func_273(iParam0, 1, 0);
					func_267(iParam0, 1, 0);
					func_272(iParam0, 1, 0);
					func_271(iParam0, 1, -1, -1);
				}
				else
				{
					func_274(iParam0, 0, 0);
					func_273(iParam0, 1, 0);
					func_267(iParam0, 0, 1);
					func_272(iParam0, 0, 1);
					func_268(iParam0, 1, 0);
					func_270(iParam0, 0, 1);
					func_271(iParam0, bParam2, 0, 1);
				}
				break;
			
			case 7:
				if (bVar0)
				{
					func_274(iParam0, 0, 0);
					func_273(iParam0, 0, 1);
					func_267(iParam0, 0, 0);
					func_272(iParam0, 0, 0);
					func_268(iParam0, 0, 0);
					func_271(iParam0, bParam2, -1, -1);
				}
				else
				{
					func_274(iParam0, 1, 0);
					func_273(iParam0, 0, 2);
					func_267(iParam0, 1, 1);
					func_272(iParam0, 0, 1);
					func_266(iParam0, 0, 0);
					func_268(iParam0, 1, 0);
					func_271(iParam0, bParam2, 0, 0);
				}
				break;
			
			case 8:
				unk_0x93AA93DA1B137032(iParam0, 3, 2, 0, 0);
				unk_0x93AA93DA1B137032(iParam0, 4, 0, 1, 0);
				break;
			
			case 9:
				unk_0x93AA93DA1B137032(iParam0, 0, 0, 1, 0);
				unk_0x93AA93DA1B137032(iParam0, 2, 0, 1, 0);
				unk_0x93AA93DA1B137032(iParam0, 3, 0, 0, 0);
				unk_0x93AA93DA1B137032(iParam0, 4, 0, 1, 0);
				unk_0x93AA93DA1B137032(iParam0, 8, 1, 0, 0);
				unk_0x93AA93DA1B137032(iParam0, 10, 0, 0, 0);
				break;
			}
	}
}

void func_270(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x8B22CCEB433F9C0F(iParam0, 11, iParam1, iParam2))
	{
		unk_0x93AA93DA1B137032(iParam0, 11, iParam1, iParam2, 0);
	}
}

void func_271(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (unk_0xD62C4419A41F106A(iParam0, 0))
	{
		return;
	}
	iVar0 = unk_0x541D5C57194E73C4(iParam0);
	if (iVar0 == func_245(0, 0) || iVar0 == func_245(0, 1))
	{
		if (bParam1)
		{
			func_267(iParam0, 2, 0);
			func_268(iParam0, 1, 0);
		}
	}
	else if (iVar0 == func_245(1, 0) || iVar0 == func_245(1, 1))
	{
		if (bParam1)
		{
			func_267(iParam0, 0, iParam2);
			func_266(iParam0, iParam3, 0);
			func_268(iParam0, 1, 0);
		}
	}
	else if (iVar0 == joaat("mp_f_stripperlite"))
	{
		if (bParam1)
		{
			func_268(iParam0, 1, 0);
		}
	}
}

void func_272(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x8B22CCEB433F9C0F(iParam0, 4, iParam1, iParam2))
	{
		unk_0x93AA93DA1B137032(iParam0, 4, iParam1, iParam2, 0);
	}
}

void func_273(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x8B22CCEB433F9C0F(iParam0, 2, iParam1, iParam2))
	{
		unk_0x93AA93DA1B137032(iParam0, 2, iParam1, iParam2, 0);
	}
}

void func_274(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x8B22CCEB433F9C0F(iParam0, 0, iParam1, iParam2))
	{
		unk_0x93AA93DA1B137032(iParam0, 0, iParam1, iParam2, 0);
	}
}

int func_275()
{
	if (unk_0x786AF4A44E1B5B4B(func_192()))
	{
		return 1;
	}
	else if (unk_0xB6596C29F3179D0C(func_192()))
	{
		return 1;
	}
	return 0;
}

int func_276(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if (!unk_0x5D98D654CDC2165A((*uParam0)[iVar0]))
			{
				if (!unk_0x5D98D654CDC2165A((*uParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_277()
{
	if (!unk_0x786AF4A44E1B5B4B(func_192()))
	{
		unk_0xBC6AA949398C551E(func_192());
	}
}

void func_278(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0xB815670C37E03CDE((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_279(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if ((*uParam0)[iVar0] == iParam1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_280(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_280(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_281(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		return joaat("mp_f_stripperlite");
	}
	iVar0 = func_110(iParam0);
	if (iVar0 != 145)
	{
		return func_282(iVar0);
	}
	return func_245(0, 0);
}

int func_282(int iParam0)
{
	if (!func_79(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_283()
{
	switch (uLocal_74[0])
	{
		case 1:
			vLocal_285 = { 128.1002f, -1895.001f, 22.4811f };
			vLocal_286 = { 128.1059f, -1896.819f, 22.6792f };
			vLocal_287 = { 133.9411f, -1881.89f, 22.5257f };
			vLocal_288 = { 130.1663f, -1893.057f, 22.3748f };
			vLocal_289 = { 133.4958f, -1891.641f, 22.4252f };
			fLocal_293 = 330.5705f;
			fLocal_294 = 244f;
			vLocal_292 = { 146.293f, -1888.049f, 22.2193f };
			fLocal_295 = fLocal_294;
			break;
		
		case 0:
			vLocal_285 = { -161.9628f, -1636.501f, 33.0339f };
			vLocal_286 = { -159.9415f, -1637.307f, 33.0339f };
			vLocal_287 = { -178.6316f, -1629.522f, 32.1789f };
			vLocal_288 = { -166.1453f, -1633.102f, 32.6574f };
			vLocal_289 = { -166.6636f, -1633.229f, 32.6567f };
			fLocal_293 = 108.072f;
			fLocal_294 = 180.9811f;
			vLocal_292 = { vLocal_287 };
			fLocal_295 = fLocal_294;
			break;
		
		case 4:
			vLocal_285 = { -198.3824f, 87.8785f, 68.7436f };
			vLocal_286 = { -197.2292f, 86.3497f, 68.7561f };
			vLocal_287 = { -200.9078f, 113.537f, 68.5518f };
			vLocal_288 = { -200.1384f, 96.9809f, 68.5203f };
			vLocal_289 = { -199.5068f, 95.7042f, 68.5193f };
			fLocal_293 = 48.99f;
			fLocal_294 = 64.3f;
			vLocal_292 = { vLocal_287 };
			fLocal_295 = fLocal_294;
			break;
		
		case 5:
			vLocal_285 = { -849.0348f, 510.6906f, 89.8218f };
			vLocal_286 = { -849.0408f, 508.5767f, 89.8218f };
			vLocal_287 = { -846.1005f, 520.2202f, 89.6217f };
			vLocal_288 = { -851.8972f, 512.73f, 89.6217f };
			vLocal_289 = { -851.8746f, 513.6746f, 89.6217f };
			fLocal_293 = 92.365f;
			fLocal_294 = 293f;
			vLocal_292 = { -860.4819f, 514.2496f, 88.1473f };
			fLocal_295 = fLocal_294;
			break;
		
		case 8:
			vLocal_285 = { -28.2427f, -1555.892f, 29.6918f };
			vLocal_286 = { -24.8589f, -1556.846f, 29.6819f };
			vLocal_287 = { -41.8174f, -1575.609f, 28.2831f };
			vLocal_288 = { -25.3404f, -1556.341f, 29.6919f };
			vLocal_289 = { -27.7382f, -1570.572f, 29.3f };
			fLocal_293 = 181.352f;
			fLocal_294 = 47.9206f;
			vLocal_292 = { vLocal_287 };
			fLocal_295 = fLocal_294;
			break;
		
		case 9:
			vLocal_285 = { 3313.487f, 5175.831f, 18.619f };
			vLocal_286 = { 3310.816f, 5176.331f, 18.619f };
			vLocal_287 = { 3334.321f, 5161.122f, 17.2996f };
			vLocal_288 = { 3317.788f, 5171.707f, 17.4471f };
			vLocal_289 = { 3318.076f, 5171.805f, 17.4385f };
			fLocal_293 = 236.4579f;
			vLocal_292 = { 3322.927f, 5148.607f, 17.3141f };
			fLocal_295 = 310.8648f;
			break;
	}
}

int func_284()
{
	switch (uLocal_74[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (bLocal_304)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

int func_285(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x52119E312E15DB07();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_289();
			}
			else
			{
				return 0;
			}
		}
		if (!func_288())
		{
			if (iParam0 == 0)
			{
				if (!unk_0xB331FCEB94EB05C8())
				{
					if (!bParam2)
					{
						func_289();
					}
					else
					{
						return 0;
					}
				}
				if (func_287())
				{
					if (!bParam2)
					{
						func_289();
					}
					else
					{
						return 0;
					}
				}
				if (func_286(155))
				{
					if (!bParam2)
					{
						func_289();
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
					func_289();
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
				func_289();
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
			func_289();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_286(int iParam0)
{
	if (unk_0x3AE20F34FEE6C258(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_287()
{
	return Global_2448756.f_581;
}

bool func_288()
{
	return Global_1312844;
}

void func_289()
{
	unk_0x5894DC159447E10A();
}

void func_290()
{
	unk_0x10CDB55C8473F547(0);
	unk_0x9F9B47D8AB616A7C();
	func_84();
	unk_0xD362430CD61A9B08();
	unk_0xF1CFA0046BB67893(iLocal_284, 0);
	unk_0x5856B9BF2B4E98C4(vLocal_287 - Vector(3f, 3f, 3f), vLocal_287 + Vector(3f, 3f, 3f), true, 1);
	unk_0x78713C03966ED44F(vLocal_287 - Vector(3f, 3f, 3f), vLocal_287 + Vector(3f, 3f, 3f), 15f, 1);
	if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
	{
		unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), true, 0);
	}
	unk_0x63F0B040CE6EDF0F(false, false, 3000, 1, 0, 0);
	if (unk_0x765F6FEEFF39224F(iLocal_271[0]))
	{
		if (!unk_0xD62C4419A41F106A(iLocal_271[0], 0))
		{
			if (!func_254(uLocal_300, 8192))
			{
				unk_0xBD4591245C650283(iLocal_271[0], 1193033728, 0);
			}
			unk_0x897EF720254BBEA3(iLocal_271[0], true);
			if (!unk_0xA2BBDC0B3CC54EBF(iLocal_70))
			{
				unk_0x9315FCF6CFE2AB41("BootyCall", &iLocal_70);
			}
			unk_0xD2E80177F27FD43F(2, iLocal_70, 1862763509);
			unk_0xD2E80177F27FD43F(2, 1862763509, iLocal_70);
			unk_0x0648A75D3F60E864(iLocal_271[0], iLocal_70);
		}
		unk_0x1F45B4626AC4A4C0(&(iLocal_271[0]));
	}
	if (iLocal_299 != -1)
	{
		func_292(&iLocal_299);
	}
	if (bLocal_69)
	{
		func_136(&uLocal_68);
	}
	unk_0x14F2F7DEB29F39A9(unk_0x95B959F18401C09A(), 0);
	func_119(uLocal_74[0], -1);
	Global_105559 = 0;
	func_291(0);
	unk_0x5894DC159447E10A();
}

void func_291(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 52)
	{
		func_216(iVar0, bParam0);
		iVar0++;
	}
}

void func_292(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_36387)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_36386 = 0;
	Global_36388 = 0;
	Global_36425 = 15;
	Global_56491 = 0;
	Global_56492 = 0;
}

