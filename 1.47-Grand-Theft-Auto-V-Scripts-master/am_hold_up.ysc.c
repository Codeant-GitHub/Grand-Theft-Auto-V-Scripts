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
	var uLocal_60 = 10;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 2;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 8;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 8;
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
	float fLocal_94 = 0f;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	struct<73> Local_103 = { 0, 0, 3, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1101004800, 0 } ;
	struct<10> Local_104[32];
	struct<54> Local_105 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0 } ;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	int iLocal_108 = 0;
	char* sLocal_109 = NULL;
	int iLocal_110 = 0;
	vector3 vLocal_111 = { 0f, 0f, 0f };
	vector3 vLocal_112 = { 0f, 0f, 0f };
	float fLocal_113 = 0f;
	int iLocal_114 = 0;
	vector3 vLocal_115 = { 0f, 0f, 0f };
	vector3 vLocal_116 = { 0f, 0f, 0f };
	int iLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	vector3 vLocal_127 = { 0f, 0f, 0f };
	float fLocal_128 = 0f;
	vector3 vLocal_129 = { 0f, 0f, 0f };
	float fLocal_130 = 0f;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	vector3 vLocal_143 = { 0f, 0f, 0f };
	vector3 vLocal_144 = { 0f, 0f, 0f };
	vector3 vLocal_145 = { 0f, 0f, 0f };
	vector3 vLocal_146 = { 0f, 0f, 0f };
	float fLocal_147 = 0f;
	vector3 vLocal_148 = { 0f, 0f, 0f };
	vector3 vLocal_149 = { 0f, 0f, 0f };
	float fLocal_150 = 0f;
	var uLocal_151 = 16;
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
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	int iLocal_316[5] = { 0, 0, 0, 0, 0 };
	int iLocal_317[5] = { 0, 0, 0, 0, 0 };
	float fLocal_318 = 0f;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	int iLocal_333 = 0;
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	int iLocal_341 = 0;
	vector3 vLocal_342 = { 0f, 0f, 0f };
	struct<21> Local_343 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	iLocal_110 = joaat("mp_m_shopkeep_01");
	iLocal_114 = -1;
	iLocal_117 = -1;
	iLocal_131 = 303280717;
	iLocal_132 = round(Global_262145.f_2421);
	iLocal_133 = round(Global_262145.f_2417) + 1;
	iLocal_134 = 1;
	if (unk_0xB331FCEB94EB05C8())
	{
		if (!func_434(ScriptParam_343))
		{
			func_429();
		}
		if (func_428(1))
		{
			func_419(unk_0x95B959F18401C09A(), 0, 98816, 0);
		}
	}
	while (true)
	{
		func_418();
		if (func_407())
		{
			func_429();
		}
		func_405();
		if (unk_0x0E4018692D92041D(Local_103.f_23, 6))
		{
			if (func_428(1))
			{
				func_419(unk_0x95B959F18401C09A(), 1, 0, 0);
				func_402();
				unk_0xCE689A8E8C42ED78(&(Local_105.f_53), 7);
				func_401();
			}
		}
		switch (func_400(unk_0x72B85B341ADBE9DE()))
		{
			case 0:
				unk_0x0483D0035D6E46FD("mp_am_hold_up");
				if (unk_0xE9CCF312047EBEE0("mp_am_hold_up"))
				{
					if (func_390())
					{
						unk_0x0A06DEFFF267C21E(func_389(Local_105), 0);
						if (unk_0x22C3124A898FB82A(Local_103))
						{
							if (func_388() > 0)
							{
								if (!func_387(Local_103))
								{
									func_386(&uLocal_151, 3, unk_0xBB28786B7F552D0B(Local_103), &(Local_103.f_46), 1, 0);
									func_385();
								}
								unk_0x8950ED5730F62EE8(&(Local_105.f_52), 22);
								Local_104[unk_0x72B85B341ADBE9DE() /*10*/].f_4 = 2;
							}
						}
					}
				}
				if (func_388() == 6)
				{
					Local_104[unk_0x72B85B341ADBE9DE() /*10*/].f_4 = 5;
				}
				break;
			
			case 2:
				func_261(&Local_105, vLocal_115, vLocal_116, &Local_103, &(Local_104[unk_0x72B85B341ADBE9DE() /*10*/]), unk_0xD4B4F68F3449CBEC(unk_0xBB28786B7F552D0B(Local_103), vLocal_148, vLocal_149, fLocal_150, 0, 1, 0), 0);
				func_254();
				if (func_388() == 2)
				{
					func_128();
				}
				else if (func_388() == 6)
				{
					Local_104[unk_0x72B85B341ADBE9DE() /*10*/].f_4 = 5;
				}
				if (!unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), vLocal_144, 30f, 30f, 30f, 0, 1, 0))
				{
					Local_104[unk_0x72B85B341ADBE9DE() /*10*/].f_4 = 6;
				}
				break;
			
			case 5:
				func_127(&(Local_103.f_69));
				if (func_126(&(Local_103.f_69)))
				{
					Local_104[unk_0x72B85B341ADBE9DE() /*10*/].f_4 = 6;
				}
				break;
			
			case 4:
				Local_104[unk_0x72B85B341ADBE9DE() /*10*/].f_4 = 6;
			
			case 6:
				func_53();
				func_429();
				break;
		}
		if (unk_0x06C1EBC003C18F1F())
		{
			switch (func_388())
			{
				case 0:
					if (!unk_0x0E4018692D92041D(Local_105.f_52, 16))
					{
						func_51(func_52(0));
						func_51(func_52(1));
						func_51(func_52(2));
						unk_0x0483D0035D6E46FD("mp_am_hold_up");
						if (unk_0xE9CCF312047EBEE0("mp_am_hold_up"))
						{
							if (func_390())
							{
								unk_0xCE04CE961AF41AB9(vLocal_115, 1.5f, 0, 1, 0, true);
								unk_0xCE04CE961AF41AB9(vLocal_112, 1.5f, 0, 1, 0, true);
								unk_0x8950ED5730F62EE8(&(Local_105.f_52), 16);
							}
						}
					}
					else if (func_49())
					{
						Local_103.f_12 = 2;
					}
					break;
				
				case 2:
					func_48();
					func_45();
					func_29();
					func_28();
					func_21();
					func_20();
					func_12();
					func_11();
					if (func_4())
					{
						func_1();
						Local_103.f_12 = 6;
					}
					break;
				
				case 6:
					func_1();
					break;
				}
		}
	}
}

void func_1()
{
	if (unk_0x22C3124A898FB82A(Local_103.f_13))
	{
		if (func_3(Local_103.f_13))
		{
			if (unk_0x9F4718FD61B07058(unk_0xE4B835FDC8B9B086(Local_103.f_13)))
			{
				unk_0x35F11A916FDFCF32(unk_0xE4B835FDC8B9B086(Local_103.f_13), 1, 1);
				func_2(&(Local_103.f_13));
			}
		}
	}
}

void func_2(var uParam0)
{
	int iVar0;
	
	if (unk_0x4F94F07DAD382CDA(*uParam0))
	{
		iVar0 = unk_0xF2D53AA87148ACED(*uParam0);
		unk_0x4955686EF8308B47(&iVar0);
	}
}

int func_3(var uParam0)
{
	if (unk_0x22C3124A898FB82A(uParam0))
	{
		unk_0x254D3936DA813A55(uParam0);
		return unk_0x6F3D61B58C7B4025(uParam0);
	}
	return 0;
}

int func_4()
{
	if (func_5())
	{
		return 1;
	}
	return 0;
}

int func_5()
{
	if (unk_0x0E4018692D92041D(Local_103.f_23, 2))
	{
		return 1;
	}
	if (unk_0x0E4018692D92041D(Local_103.f_23, 3))
	{
		return 1;
	}
	if (!func_10())
	{
		if ((unk_0x0E4018692D92041D(Local_103.f_23, 11) || unk_0x0E4018692D92041D(Local_103.f_23, 19)) || (unk_0x0E4018692D92041D(Local_103.f_23, 9) && !unk_0x0E4018692D92041D(Local_103.f_23, 20)))
		{
			func_6(Local_105.f_50, 1, func_7());
			return 1;
		}
		if (unk_0x0E4018692D92041D(Local_103.f_23, 18))
		{
			func_6(Local_105.f_50, 1, func_7());
			return 1;
		}
	}
	if (unk_0x0E4018692D92041D(Local_103.f_23, 18))
	{
		if (!unk_0x0E4018692D92041D(Local_103.f_24, 7))
		{
			func_6(Local_105.f_50, 1, func_7());
			unk_0x8950ED5730F62EE8(&(Local_103.f_24), 7);
		}
	}
	return 0;
}

void func_6(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	Var0 = -316567419;
	Var0.f_1 = unk_0x95B959F18401C09A();
	Var0.f_2 = uParam0;
	Var0.f_3 = iParam1;
	if (!iParam2 == 0)
	{
		unk_0x09269A9CFC145847(1, &Var0, 4, iParam2);
	}
}

int func_7()
{
	return func_8(unk_0x6A41F53FE1128E10(func_9(), -1, 0));
}

int func_8(int iParam0)
{
	var uVar0;
	
	unk_0x8950ED5730F62EE8(&uVar0, iParam0);
	return uVar0;
}

char* func_9()
{
	switch (Global_2460954)
	{
		case 0:
			return "freemode";
		
		default:
	}
	return "freemode";
}

int func_10()
{
	if ((unk_0x0E4018692D92041D(Local_103.f_23, 13) || unk_0x0E4018692D92041D(Local_103.f_23, 27)) || unk_0x0E4018692D92041D(Local_103.f_23, 28))
	{
		return 1;
	}
	return 0;
}

void func_11()
{
	var uVar0;
	
	if (!unk_0x0E4018692D92041D(Local_103.f_23, 21))
	{
		if (func_387(Local_103))
		{
			Local_103.f_72 = unk_0xED8CA182944FBFEA(Local_103, &uVar0);
			unk_0x8950ED5730F62EE8(&(Local_103.f_23), 21);
		}
	}
	if (!unk_0x0E4018692D92041D(Local_103.f_23, 19))
	{
		if (unk_0x0E4018692D92041D(Local_103.f_23, 10) && Local_103.f_37 <= 0f)
		{
			unk_0x8950ED5730F62EE8(&(Local_103.f_23), 19);
		}
	}
	if (!unk_0x0E4018692D92041D(Local_103.f_24, 17))
	{
		if (unk_0x0E4018692D92041D(Local_103.f_23, 20))
		{
			if (func_3(Local_103.f_13))
			{
				unk_0x861C6D8520E774EA(unk_0xE4B835FDC8B9B086(Local_103.f_13), 0, 0);
				unk_0x8950ED5730F62EE8(&(Local_103.f_24), 17);
			}
		}
	}
	if (!unk_0x0E4018692D92041D(Local_103.f_23, 6))
	{
		if (Global_2528542.f_8 == 1)
		{
			unk_0x8950ED5730F62EE8(&(Local_103.f_23), 6);
			unk_0x8950ED5730F62EE8(&(Local_103.f_23), 16);
		}
	}
}

int func_12()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x06C1EBC003C18F1F() || !unk_0x0E4018692D92041D(Local_103.f_25, 0))
	{
		return 0;
	}
	if (Local_103.f_66 != 6)
	{
		if (Local_103.f_66 > 0 && func_387(Local_103.f_15))
		{
			Local_103.f_66 = 6;
			return 0;
		}
		switch (Local_103.f_66)
		{
			case 0:
				if (!func_18(&uLocal_331, 10000, 0))
				{
					iVar0 = unk_0x4517BC4DD6D865D7(vLocal_148, 20f, 20f, 20f, -1);
					if (!unk_0xBC2FC12AD0FBF72E(iVar0))
					{
						if (!unk_0x5A04E3BD0B5E7E49(iVar0))
						{
							iVar1 = unk_0x541D5C57194E73C4(iVar0);
							if (((((((iVar1 != joaat("mp_m_freemode_01") && iVar1 != joaat("mp_f_freemode_01")) && !unk_0xB05EBD564C7A1480(vLocal_148, 25f, 25f, 25f)) && !unk_0x18FB647D79B09657(iVar0, vLocal_143, 1f, 1f, 2f, 0, 1, 0)) && !unk_0x9ED464AAA493C8EF(iVar0, 7)) && !unk_0xF0D230FB550CD6EB(iVar0, 1)) && unk_0x81FEEDF0A4196B0F(iVar0)) && func_17(iVar1))
							{
								unk_0xA5F44EC021F96C6B(iVar0);
								if (unk_0x0A81FE3D92AE2AC9(iVar0))
								{
									if (func_16(&(Local_103.f_15), iVar0, 1, 0))
									{
										unk_0xE18BDD1E31C07544(unk_0xBB28786B7F552D0B(Local_103.f_15), joaat("weapon_pistol"), 25000, 0);
										unk_0x897EF720254BBEA3(unk_0xBB28786B7F552D0B(Local_103.f_15), 1);
										Local_103.f_66 = 1;
										unk_0x8950ED5730F62EE8(&(Local_103.f_25), 1);
										unk_0x0648A75D3F60E864(unk_0xBB28786B7F552D0B(Local_103.f_15), Global_1574992);
										unk_0x34A51926277F67BC(unk_0xBB28786B7F552D0B(Local_103.f_15), 2);
										unk_0x7FC2040EB34E0E31(unk_0xBB28786B7F552D0B(Local_103.f_15), round((200f * Global_262145.f_153)), 0);
										func_386(&uLocal_151, 4, unk_0xBB28786B7F552D0B(Local_103.f_15), "StoreHero", 1, 0);
										unk_0xF6D940C3CF409665(unk_0xBB28786B7F552D0B(Local_103.f_15), func_15(), 0, 1);
									}
								}
							}
						}
					}
				}
				break;
			
			case 1:
				if ((unk_0x0E4018692D92041D(Local_103.f_23, 9) || unk_0x0E4018692D92041D(Local_103.f_23, 5)) || unk_0x0E4018692D92041D(Local_103.f_23, 4))
				{
					Local_103.f_66 = 2;
				}
				break;
			
			case 2:
				if (func_18(&(Local_103.f_67), 3000, 0) || (unk_0xD76D6BCC14B95CE1(unk_0xBB28786B7F552D0B(Local_103.f_15), 1227113341) != 0 && unk_0xD76D6BCC14B95CE1(unk_0xBB28786B7F552D0B(Local_103.f_15), 1227113341) != 1))
				{
					func_14(&(Local_103.f_67));
					Local_103.f_66 = 3;
				}
				break;
			
			case 3:
				if (((unk_0x0E4018692D92041D(Local_103.f_23, 5) || unk_0x0E4018692D92041D(Local_103.f_25, 8)) || unk_0x0E4018692D92041D(Local_103.f_25, 9)) || func_18(&(Local_103.f_67), 5000, 0))
				{
					if (func_13() || func_18(&(Local_103.f_67), 5000, 0))
					{
						Local_103.f_66 = 4;
					}
					else
					{
						Local_103.f_66 = 5;
					}
				}
				break;
			
			case 4:
				break;
			
			case 5:
				break;
			}
	}
	return 1;
}

int func_13()
{
	if (unk_0x0E4018692D92041D(unk_0x9EC3B269A34A2BEE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_14(var uParam0)
{
	uParam0->f_1 = 0;
}

char* func_15()
{
	int iVar0;
	
	iVar0 = unk_0x9EC3B269A34A2BEE(0, 100);
	if (iVar0 < 30)
	{
		return "WORLD_HUMAN_SMOKING";
	}
	if (iVar0 >= 30 && iVar0 < 70)
	{
		return "WORLD_HUMAN_HANG_OUT_STREET";
	}
	return "WORLD_HUMAN_STAND_MOBILE";
}

int func_16(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	unk_0x0D21E1FDE062ED99(iParam1, bParam2, iParam3);
	*uParam0 = unk_0x8370E68A3DEEB1D3(iParam1);
	if (unk_0x22C3124A898FB82A(*uParam0))
	{
		if (bParam2)
		{
			unk_0x841CC2A685D6AF3C(*uParam0, 1);
		}
		return 1;
	}
	return 0;
}

int func_17(int iParam0)
{
	if (((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == joaat("mp_m_freemode_01") || iParam0 == joaat("mp_m_fibsec_01")) || iParam0 == joaat("mp_s_m_armoured_01")) || iParam0 == joaat("s_f_y_airhostess_01")) || iParam0 == joaat("s_f_y_baywatch_01")) || iParam0 == joaat("s_f_y_cop_01")) || iParam0 == joaat("s_f_y_ranger_01")) || iParam0 == joaat("s_f_y_scrubs_01")) || iParam0 == joaat("s_f_y_sheriff_01")) || iParam0 == joaat("s_m_m_armoured_01")) || iParam0 == joaat("s_m_m_armoured_02")) || iParam0 == joaat("s_m_m_bouncer_01")) || iParam0 == joaat("s_m_m_ciasec_01")) || iParam0 == joaat("s_m_m_chemsec_01")) || iParam0 == joaat("s_m_m_doctor_01")) || iParam0 == joaat("s_m_m_fiboffice_01")) || iParam0 == joaat("s_m_m_fiboffice_02")) || iParam0 == joaat("s_m_m_highsec_01")) || iParam0 == joaat("s_m_m_highsec_02")) || iParam0 == joaat("s_m_m_janitor")) || iParam0 == joaat("s_m_m_lsmetro_01")) || iParam0 == joaat("s_m_m_marine_01")) || iParam0 == joaat("s_m_m_marine_02")) || iParam0 == joaat("s_m_m_paramedic_01")) || iParam0 == joaat("s_m_m_pilot_01")) || iParam0 == joaat("s_m_m_pilot_02")) || iParam0 == joaat("s_m_m_postal_01")) || iParam0 == joaat("s_m_m_postal_02")) || iParam0 == joaat("s_m_m_prisguard_01")) || iParam0 == joaat("s_m_m_scientist_01")) || iParam0 == joaat("s_m_m_security_01")) || iParam0 == joaat("s_m_m_ups_01")) || iParam0 == joaat("s_m_m_ups_02")) || iParam0 == joaat("s_m_y_airworker")) || iParam0 == joaat("s_m_y_armymech_01")) || iParam0 == joaat("s_m_y_baywatch_01")) || iParam0 == joaat("s_m_y_blackops_01")) || iParam0 == joaat("s_m_y_blackops_02")) || iParam0 == joaat("s_m_y_cop_01")) || iParam0 == joaat("s_m_y_doorman_01")) || iParam0 == joaat("s_m_y_fireman_01")) || iParam0 == joaat("s_m_y_garbage")) || iParam0 == joaat("s_m_y_hwaycop_01")) || iParam0 == joaat("s_m_y_marine_01")) || iParam0 == joaat("s_m_y_marine_02")) || iParam0 == joaat("s_m_y_marine_03")) || iParam0 == joaat("s_m_y_pilot_01")) || iParam0 == joaat("s_m_y_ranger_01")) || iParam0 == joaat("s_m_y_sheriff_01")) || iParam0 == joaat("s_m_y_swat_01")) || iParam0 == joaat("s_m_y_uscg_01")) || iParam0 == joaat("s_m_y_valet_01")) || iParam0 == joaat("s_m_y_waiter_01")) || iParam0 == joaat("u_m_m_jewelsec_01"))
	{
		return 0;
	}
	return 1;
}

int func_18(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_19(uParam0, bParam2, 0);
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

void func_19(var uParam0, bool bParam1, bool bParam2)
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

void func_20()
{
	if (Local_103.f_30 == 0)
	{
		if (Local_103.f_3 >= 2 && Local_103.f_3 != 9)
		{
			Local_103.f_30 = unk_0xB2B786AC5C8C12A2(99, unk_0x33CD235DF1E6A94E(), 60000f);
		}
	}
}

void func_21()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!unk_0x0E4018692D92041D(Local_103.f_1, 5))
	{
		if (Local_103.f_41 > 0)
		{
			func_25();
			if (!unk_0x0E4018692D92041D(Local_103.f_1, 5))
			{
				return;
			}
		}
	}
	if (unk_0x0E4018692D92041D(Local_103.f_1, 1))
	{
		if (Local_103.f_2 == 3 && !unk_0x0E4018692D92041D(Local_103.f_23, 9))
		{
			Local_103.f_2 = 0;
		}
		unk_0xCE689A8E8C42ED78(&(Local_103.f_1), 1);
	}
	switch (Local_103.f_2)
	{
		case 0:
			if ((((func_3(Local_103) && !func_387(Local_103)) && func_3(Local_103.f_16[Local_103.f_26])) && Local_103.f_3 != 8) && Local_103.f_3 != 7)
			{
				if (!unk_0x3AF2B3B68DD52355(unk_0xBB28786B7F552D0B(Local_103)))
				{
					if (unk_0x0E4018692D92041D(Local_103.f_23, 9) || unk_0x0E4018692D92041D(Local_103.f_1, 4))
					{
						Local_103.f_2 = 2;
						return;
					}
					if (!iLocal_108)
					{
						unk_0x43EAD1F94EC8561F(unk_0xBB28786B7F552D0B(Local_103), Local_103.f_42, 1600);
						iLocal_108 = 1;
					}
					if (func_18(&uLocal_321, 100, 0))
					{
						fVar0 = unk_0xC472E34C8FBEC678(unk_0xBB28786B7F552D0B(Local_103));
						fVar1 = (Local_103.f_42 - 10f);
						fVar2 = (Local_103.f_42 + 10f);
						if (fVar1 < 0f)
						{
							fVar2 = ((Local_103.f_42 - 10f) + 360f);
							fVar1 = ((Local_103.f_42 + 10f) + 360f);
						}
						else if (fVar2 >= 360f)
						{
							fVar2 = ((Local_103.f_42 - 10f) - 360f);
							fVar1 = ((Local_103.f_42 + 10f) - 360f);
						}
						if (((fVar0 < fVar2 && fVar0 > fVar1) && func_18(&uLocal_327, 1000, 0)) || func_18(&uLocal_327, 3125, 0))
						{
							unk_0x05AB47B112CF24AE(unk_0xBB28786B7F552D0B(Local_103));
							Local_103.f_27 = unk_0x6D57E93CB68152FE(unk_0x2CA911E7569D12EA(unk_0xBB28786B7F552D0B(Local_103), -0.65f, 0.87f, -0.02f), vLocal_116, 2, 1, 0, 1065353216, 0, 1065353216);
							unk_0x74E9D455686E1F3A(unk_0xBB28786B7F552D0B(Local_103), Local_103.f_27, "mp_am_hold_up", func_24(Local_103.f_26), 1.5f, -1.5f, 157, 16, 1148846080, 0);
							if (unk_0x22C3124A898FB82A(Local_103.f_16[Local_103.f_26]))
							{
								unk_0x0CDD28A9DFCE2FCE(unk_0xE4B835FDC8B9B086(Local_103.f_16[Local_103.f_26]), true, 0);
								unk_0x3F0E98C9B9F44619(unk_0xE4B835FDC8B9B086(Local_103.f_16[Local_103.f_26]), Local_103.f_27, "mp_am_hold_up", func_23(Local_103.f_26), 4f, -4f, 8);
							}
							unk_0x930FB6CDE4B41DD2(Local_103.f_27);
							Local_103.f_2 = 1;
							iLocal_117 = unk_0x3F2F21BCB3761848(Local_103.f_27);
						}
					}
				}
			}
			break;
		
		case 1:
			if (unk_0x0E4018692D92041D(Local_103.f_23, 9) || unk_0x0E4018692D92041D(Local_103.f_1, 4))
			{
				iLocal_117 = unk_0x3F2F21BCB3761848(Local_103.f_27);
				if (unk_0xDB4C79A9697E6A55(iLocal_117))
				{
					unk_0x352A1C032A91CEAD(Local_103.f_27);
				}
				Local_103.f_2 = 2;
				return;
			}
			if (iLocal_117 != -1)
			{
				if (unk_0xDB4C79A9697E6A55(iLocal_117) || func_18(&uLocal_323, 2000, 0))
				{
					if ((unk_0xDB4C79A9697E6A55(iLocal_117) && unk_0x4EDDCE9AAE0FC976(iLocal_117) == 1f) || func_18(&uLocal_323, 2000, 0))
					{
						if ((func_3(Local_103) && !func_387(Local_103)) && !unk_0x0E4018692D92041D(Local_103.f_23, 9))
						{
							unk_0xED68CDDDE25A144E(unk_0xBB28786B7F552D0B(Local_103));
						}
						unk_0x352A1C032A91CEAD(Local_103.f_27);
						Local_103.f_2 = 2;
					}
				}
			}
			else
			{
				iLocal_117 = unk_0x3F2F21BCB3761848(Local_103.f_27);
			}
			break;
		
		case 2:
			func_3(Local_103.f_16[Local_103.f_26]);
			if (func_18(&uLocal_329, 1000, 0) && func_3(Local_103.f_16[Local_103.f_26]))
			{
				if (unk_0x765F6FEEFF39224F(unk_0xE4B835FDC8B9B086(Local_103.f_16[Local_103.f_26])))
				{
					unk_0x0CDD28A9DFCE2FCE(unk_0xE4B835FDC8B9B086(Local_103.f_16[Local_103.f_26]), false, 0);
					unk_0xF70578F5CD9822CB(unk_0xE4B835FDC8B9B086(Local_103.f_16[Local_103.f_26]), true);
					unk_0xBEADAF07D2339505(unk_0xE4B835FDC8B9B086(Local_103.f_16[Local_103.f_26]), func_22(Local_103.f_26), 1, 0, 0, 1);
				}
				iLocal_117 = -1;
				iLocal_108 = 0;
				if (unk_0x0E4018692D92041D(Local_103.f_1, 4))
				{
					unk_0xCE689A8E8C42ED78(&(Local_103.f_1), 4);
				}
				func_14(&uLocal_329);
				func_14(&uLocal_323);
				func_14(&uLocal_321);
				func_14(&uLocal_327);
				Local_103.f_2 = 3;
			}
			break;
		
		case 3:
			break;
	}
}

Vector3 func_22(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return vLocal_129 - Vector(1f, 0.2f, 0.1f);
		
		case 1:
			return vLocal_129 - Vector(1f, 0.2f, 0f);
		
		case 2:
			return vLocal_129 - Vector(1f, 0.2f, -0.1f);
		
		case 4:
			return vLocal_129 - Vector(1f, -0.2f, 0.1f);
		
		case 0:
			return vLocal_129 - Vector(1f, -0.2f, 0f);
		
		case 5:
			return vLocal_129 - Vector(1f, -0.2f, -0.1f);
		
		default:
	}
	return vLocal_129 - Vector(1f, 0f, -0.1f);
}

char* func_23(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return "purchase_chocbar";
		
		case 1:
			return "purchase_chocbar";
		
		case 2:
			return "purchase_chocbar";
		
		case 4:
			return "purchase_cigarette";
		
		case 0:
			return "purchase_beer";
		
		case 5:
			return "purchase_energydrink";
		
		default:
	}
	return "purchase_energydrink";
}

char* func_24(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return "purchase_chocbar_shopkeeper";
		
		case 1:
			return "purchase_chocbar_shopkeeper";
		
		case 2:
			return "purchase_chocbar_shopkeeper";
		
		case 4:
			return "purchase_cigarette_shopkeeper";
		
		case 0:
			return "purchase_beer_shopkeeper";
		
		case 5:
			return "purchase_energydrink_shopkeeper";
		
		default:
	}
	return "purchase_energydrink_shopkeeper";
}

int func_25()
{
	if (((((!unk_0x22C3124A898FB82A(Local_103.f_16[3]) || !unk_0x22C3124A898FB82A(Local_103.f_16[1])) || !unk_0x22C3124A898FB82A(Local_103.f_16[2])) || !unk_0x22C3124A898FB82A(Local_103.f_16[4])) || !unk_0x22C3124A898FB82A(Local_103.f_16[0])) || !unk_0x22C3124A898FB82A(Local_103.f_16[5]))
	{
		if (((((func_51(func_27(3)) && func_51(func_27(1))) && func_51(func_27(2))) && func_51(func_27(4))) && func_51(func_27(0))) && func_51(func_27(5)))
		{
			if (unk_0xA107BB59F9A92498(0, 0, 6, 0))
			{
				if (!unk_0x22C3124A898FB82A(Local_103.f_16[3]))
				{
					if (func_26(&(Local_103.f_16[3]), func_27(3), func_22(3), 1, 1, 0, 1, 0, 0, 0))
					{
						unk_0x576963EA28E5BD52(unk_0xE4B835FDC8B9B086(Local_103.f_16[3]), unk_0x90D2E06562D440E1(vLocal_111));
						unk_0xF70578F5CD9822CB(unk_0xE4B835FDC8B9B086(Local_103.f_16[3]), true);
						unk_0x0CDD28A9DFCE2FCE(unk_0xE4B835FDC8B9B086(Local_103.f_16[3]), false, 0);
					}
				}
				if (!unk_0x22C3124A898FB82A(Local_103.f_16[1]))
				{
					if (func_26(&(Local_103.f_16[1]), func_27(1), func_22(1), 1, 1, 0, 1, 0, 0, 0))
					{
						unk_0x576963EA28E5BD52(unk_0xE4B835FDC8B9B086(Local_103.f_16[1]), unk_0x90D2E06562D440E1(vLocal_111));
						unk_0xF70578F5CD9822CB(unk_0xE4B835FDC8B9B086(Local_103.f_16[1]), true);
						unk_0x0CDD28A9DFCE2FCE(unk_0xE4B835FDC8B9B086(Local_103.f_16[1]), false, 0);
					}
				}
				if (!unk_0x22C3124A898FB82A(Local_103.f_16[2]))
				{
					if (func_26(&(Local_103.f_16[2]), func_27(2), func_22(2), 1, 1, 0, 1, 0, 0, 0))
					{
						unk_0x576963EA28E5BD52(unk_0xE4B835FDC8B9B086(Local_103.f_16[2]), unk_0x90D2E06562D440E1(vLocal_111));
						unk_0xF70578F5CD9822CB(unk_0xE4B835FDC8B9B086(Local_103.f_16[2]), true);
						unk_0x0CDD28A9DFCE2FCE(unk_0xE4B835FDC8B9B086(Local_103.f_16[2]), false, 0);
					}
				}
				if (!unk_0x22C3124A898FB82A(Local_103.f_16[4]))
				{
					if (func_26(&(Local_103.f_16[4]), func_27(4), func_22(4), 1, 1, 0, 1, 0, 0, 0))
					{
						unk_0x576963EA28E5BD52(unk_0xE4B835FDC8B9B086(Local_103.f_16[4]), unk_0x90D2E06562D440E1(vLocal_111));
						unk_0xF70578F5CD9822CB(unk_0xE4B835FDC8B9B086(Local_103.f_16[4]), true);
						unk_0x0CDD28A9DFCE2FCE(unk_0xE4B835FDC8B9B086(Local_103.f_16[4]), false, 0);
					}
				}
				if (!unk_0x22C3124A898FB82A(Local_103.f_16[0]))
				{
					if (func_26(&(Local_103.f_16[0]), func_27(0), func_22(0), 1, 1, 0, 1, 0, 0, 0))
					{
						unk_0x576963EA28E5BD52(unk_0xE4B835FDC8B9B086(Local_103.f_16[0]), unk_0x90D2E06562D440E1(vLocal_111));
						unk_0xF70578F5CD9822CB(unk_0xE4B835FDC8B9B086(Local_103.f_16[0]), true);
						unk_0x0CDD28A9DFCE2FCE(unk_0xE4B835FDC8B9B086(Local_103.f_16[0]), false, 0);
					}
				}
				if (!unk_0x22C3124A898FB82A(Local_103.f_16[5]))
				{
					if (func_26(&(Local_103.f_16[5]), func_27(5), func_22(5), 1, 1, 0, 1, 0, 0, 0))
					{
						unk_0x576963EA28E5BD52(unk_0xE4B835FDC8B9B086(Local_103.f_16[5]), unk_0x90D2E06562D440E1(vLocal_111));
						unk_0xF70578F5CD9822CB(unk_0xE4B835FDC8B9B086(Local_103.f_16[5]), true);
						unk_0x0CDD28A9DFCE2FCE(unk_0xE4B835FDC8B9B086(Local_103.f_16[5]), false, 0);
					}
				}
			}
		}
	}
	else
	{
		unk_0x8950ED5730F62EE8(&(Local_103.f_1), 5);
		return 1;
	}
	return 0;
}

int func_26(var uParam0, int iParam1, vector3 vParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
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

int func_27(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return joaat("prop_choc_pq");
		
		case 1:
			return joaat("prop_choc_ego");
		
		case 2:
			return joaat("prop_choc_meto");
		
		case 4:
			return joaat("prop_ld_fags_01");
		
		case 0:
			return joaat("prop_ecola_can");
		
		case 5:
			return joaat("prop_amb_beer_bottle");
		
		default:
	}
	return joaat("prop_choc_pq");
}

void func_28()
{
	float fVar0;
	
	if (!unk_0x0E4018692D92041D(Local_103.f_23, 9))
	{
		if (Global_2528542.f_8 == 1 || unk_0x0E4018692D92041D(Local_103.f_23, 6))
		{
			if ((((func_3(Local_103.f_13) && func_3(Local_103)) && !func_387(Local_103)) && Local_103.f_3 != 8) && Local_103.f_3 != 7)
			{
				if (!unk_0x3AF2B3B68DD52355(unk_0xBB28786B7F552D0B(Local_103)))
				{
					if (!unk_0x0E4018692D92041D(Local_105.f_52, 30))
					{
						unk_0x43EAD1F94EC8561F(unk_0xBB28786B7F552D0B(Local_103), Local_103.f_42, 1600);
						unk_0x8950ED5730F62EE8(&(Local_105.f_52), 30);
					}
					if (func_18(&uLocal_319, 100, 0))
					{
						fVar0 = unk_0xC472E34C8FBEC678(unk_0xBB28786B7F552D0B(Local_103));
						if ((fVar0 > (Local_103.f_42 - 20f) && fVar0 < (Local_103.f_42 + 20f)) || func_18(&uLocal_325, 1500, 0))
						{
							unk_0x05AB47B112CF24AE(unk_0xBB28786B7F552D0B(Local_103));
							Local_103.f_29 = unk_0x6D57E93CB68152FE(vLocal_115, vLocal_116, 2, 1, 0, 1065353216, 0, 1065353216);
							unk_0x74E9D455686E1F3A(unk_0xBB28786B7F552D0B(Local_103), Local_103.f_29, "mp_am_hold_up", "holdup_victim_20s", 4f, -1.5f, 157, 16, 1148846080, 0);
							if (unk_0x22C3124A898FB82A(Local_103.f_13))
							{
								unk_0xF70578F5CD9822CB(unk_0xE4B835FDC8B9B086(Local_103.f_13), false);
								unk_0x76CE32E50F0C5270(unk_0xE4B835FDC8B9B086(Local_103.f_13), 1);
								unk_0x3F0E98C9B9F44619(unk_0xE4B835FDC8B9B086(Local_103.f_13), Local_103.f_29, "mp_am_hold_up", "holdup_victim_20s_bag", 4f, -4f, 137);
							}
							if (unk_0x22C3124A898FB82A(Local_103.f_14))
							{
								unk_0x3F0E98C9B9F44619(unk_0xE4B835FDC8B9B086(Local_103.f_14), Local_103.f_29, "mp_am_hold_up", "holdup_victim_20s_till", 4f, -4f, 137);
							}
							unk_0x930FB6CDE4B41DD2(Local_103.f_29);
							unk_0x8950ED5730F62EE8(&(Local_103.f_23), 9);
						}
					}
				}
				else
				{
					Local_103.f_3 = 8;
				}
			}
		}
	}
	else if (!unk_0x0E4018692D92041D(Local_103.f_23, 17))
	{
		iLocal_114 = unk_0x3F2F21BCB3761848(Local_103.f_29);
		if (iLocal_114 != -1)
		{
			func_3(Local_103);
			if (unk_0xDB4C79A9697E6A55(iLocal_114))
			{
				unk_0x92A2FAFA76B7EC9B(unk_0x33CD235DF1E6A94E(), 0, -1, 0);
				unk_0x8950ED5730F62EE8(&(Local_103.f_23), 17);
			}
		}
	}
	else if (!unk_0x0E4018692D92041D(Local_103.f_24, 15))
	{
		iLocal_114 = unk_0x3F2F21BCB3761848(Local_103.f_29);
		if (iLocal_114 != -1)
		{
			if (unk_0xDB4C79A9697E6A55(iLocal_114))
			{
				func_3(Local_103);
				if ((unk_0x22C3124A898FB82A(Local_103.f_13) && func_3(Local_103.f_13)) && func_3(Local_103))
				{
					if (unk_0x4EDDCE9AAE0FC976(iLocal_114) > 0.44f)
					{
						unk_0x0CDD28A9DFCE2FCE(unk_0xE4B835FDC8B9B086(Local_103.f_13), true, 0);
						unk_0x23298AB8A7D0F403(unk_0xE4B835FDC8B9B086(Local_103.f_13), true, 0);
						unk_0x8950ED5730F62EE8(&(Local_103.f_24), 15);
					}
				}
			}
		}
	}
}

int func_29()
{
	int iVar0;
	float fVar1;
	
	if (!unk_0x06C1EBC003C18F1F())
	{
		return 0;
	}
	func_43();
	if (Local_103.f_3 != 9)
	{
		if (func_387(Local_103))
		{
			Local_103.f_3 = 9;
			return 0;
		}
		if ((unk_0x0E4018692D92041D(Local_103.f_23, 6) && !unk_0x0E4018692D92041D(Local_103.f_23, 9)) && Local_103.f_3 < 8)
		{
			if (!unk_0x22C3124A898FB82A(Local_103.f_13) || !unk_0x22C3124A898FB82A(Local_103.f_14))
			{
				Local_103.f_3 = 8;
			}
		}
		switch (Local_103.f_3)
		{
			case 0:
				if (!func_387(Local_103))
				{
					Local_103.f_3 = 1;
				}
				break;
			
			case 1:
				if (unk_0x0E4018692D92041D(Local_103.f_23, 4))
				{
					Local_103.f_3 = 2;
				}
				else if (unk_0x0E4018692D92041D(Local_103.f_23, 6) || unk_0x0E4018692D92041D(Local_103.f_23, 9))
				{
					Local_103.f_3 = 4;
				}
				else if (func_41() || func_34(0))
				{
					Local_103.f_3 = 8;
				}
				else if (func_32())
				{
					Local_103.f_3 = 7;
				}
				break;
			
			case 2:
				if (unk_0x0E4018692D92041D(Local_103.f_23, 6) || unk_0x0E4018692D92041D(Local_103.f_23, 9))
				{
					Local_103.f_3 = 4;
				}
				else if (func_41() || func_34(1))
				{
					Local_103.f_3 = 8;
				}
				else if (func_32())
				{
					Local_103.f_3 = 7;
				}
				break;
			
			case 3:
				if (unk_0xD76D6BCC14B95CE1(unk_0xBB28786B7F552D0B(Local_103), 1920390111) != 0 && unk_0xD76D6BCC14B95CE1(unk_0xBB28786B7F552D0B(Local_103), 1920390111) != 1)
				{
					Local_103.f_3 = 4;
				}
				else if (func_34(1))
				{
					Local_103.f_3 = 8;
				}
				else if (func_32())
				{
					Local_103.f_3 = 7;
				}
				break;
			
			case 4:
				if (unk_0x0E4018692D92041D(Local_103.f_23, 17))
				{
					iVar0 = 0;
					iLocal_114 = unk_0x3F2F21BCB3761848(Local_103.f_29);
					if (iLocal_114 != -1)
					{
						if (unk_0xDB4C79A9697E6A55(iLocal_114))
						{
							if (unk_0x416C37C19CCE0077(vLocal_111, 3f, 0))
							{
								if (!unk_0x0E4018692D92041D(Local_103.f_23, 25))
								{
									unk_0x8950ED5730F62EE8(&(Local_103.f_23), 25);
								}
								Local_103.f_33 = (Local_103.f_33 + 0.35f);
							}
							fVar1 = unk_0x4EDDCE9AAE0FC976(iLocal_114);
							if (fVar1 >= 0.8f)
							{
								Local_103.f_37 = 1f;
							}
							else if (fVar1 <= 0.5f)
							{
								Local_103.f_37 = 0f;
							}
							else if (fVar1 > Local_103.f_37)
							{
								Local_103.f_37 = ((fVar1 - 0.5f) * 3.33f);
							}
							if (fVar1 >= 0.92f)
							{
								Local_103.f_37 = 1f;
								iVar0 = 1;
							}
						}
						else
						{
							iVar0 = 1;
						}
					}
					else
					{
						iVar0 = 1;
					}
					if (iVar0 == 1)
					{
						Local_103.f_3 = 6;
					}
					else if (func_34(1))
					{
						Local_103.f_3 = 8;
					}
					else if (func_32())
					{
						Local_103.f_3 = 7;
					}
				}
				break;
			
			case 5:
				if (func_41() || func_34(1))
				{
					Local_103.f_3 = 8;
				}
				break;
			
			case 6:
				func_30();
				if (func_41() || func_34(1))
				{
					Local_103.f_3 = 8;
				}
				else if (func_32())
				{
					Local_103.f_3 = 7;
				}
				else if (unk_0x0E4018692D92041D(Local_103.f_24, 3))
				{
					if (!unk_0x0E4018692D92041D(Local_103.f_24, 4))
					{
						Local_103.f_3 = 7;
					}
				}
				break;
			
			case 8:
				func_30();
				break;
			
			case 7:
				break;
		}
	}
	else if (!unk_0x0E4018692D92041D(Local_103.f_24, 10))
	{
		if (!unk_0x22C3124A898FB82A(Local_103))
		{
			Local_103.f_43 = (Local_103.f_43 - 1);
			unk_0x8950ED5730F62EE8(&(Local_103.f_24), 10);
		}
	}
	return 1;
}

void func_30()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x0E4018692D92041D(Local_103.f_24, 2))
	{
		iVar0 = unk_0x9EC3B269A34A2BEE(0, 10);
		iVar1 = (iLocal_134 + func_31());
		if (iVar0 < iVar1)
		{
			unk_0x8950ED5730F62EE8(&(Local_103.f_24), 3);
		}
		unk_0x8950ED5730F62EE8(&(Local_103.f_24), 2);
	}
}

int func_31()
{
	int iVar0;
	
	iVar0 = (Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_36 - 1);
	if (iVar0 >= 4)
	{
		return 4;
	}
	return iVar0;
}

int func_32()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x833B1A3D9F713E03(0, 24) || unk_0x833B1A3D9F713E03(0, 257))
	{
		iVar0 = func_33(unk_0x33CD235DF1E6A94E());
		if ((((((iVar0 != joaat("weapon_unarmed") && iVar0 != 0) && iVar0 != joaat("vehicle_weapon_player_bullet")) && iVar0 != joaat("vehicle_weapon_player_buzzard")) && iVar0 != joaat("vehicle_weapon_player_laser")) && iVar0 != joaat("vehicle_weapon_tank")) && iVar0 != joaat("weapon_flare"))
		{
			iVar1 = unk_0xC996D6D89A97A11A(iVar0);
			if (((((((unk_0xFAF00EC53D4815FE(unk_0x33CD235DF1E6A94E(), iVar0) == 0 && iVar1 != -728555052) && iVar1 != 507375312) && iVar1 != 0) && iVar1 != -37788308) && iVar1 != -801780072) && iVar1 != 431593103) && iVar1 != -755518101)
			{
				if (unk_0x65F35477FEAD6F0F(unk_0x33CD235DF1E6A94E()) == iLocal_139)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

var func_33(int iParam0)
{
	var uVar0;
	
	unk_0x96C4B46F194803A7(iParam0, &uVar0, 1);
	return uVar0;
}

int func_34(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	int iVar2;
	int iVar3;
	
	if (func_39(unk_0x95B959F18401C09A(), 146))
	{
		return 1;
	}
	if (func_38(unk_0x95B959F18401C09A()))
	{
		return 1;
	}
	if (unk_0x0E4018692D92041D(Local_103.f_23, 5))
	{
		return 1;
	}
	if (unk_0x3AF2B3B68DD52355(unk_0xBB28786B7F552D0B(Local_103)))
	{
		return 1;
	}
	if (func_37() || func_36())
	{
		return 1;
	}
	if (func_35())
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < unk_0x77BABFD1D75AA582(1))
	{
		if (unk_0x5487531DB7DA4AB5(1, iVar0) == 182)
		{
			if (unk_0x286A5F0670063839(1, iVar0, &Var1, 11))
			{
				if (unk_0x765F6FEEFF39224F(Var1) && unk_0x068481DAF84B9654(Var1))
				{
					iVar2 = unk_0x22B02EC53152632C(Var1);
					if (unk_0xBC2FC12AD0FBF72E(iVar2) && unk_0x65F35477FEAD6F0F(iVar2) == iLocal_139)
					{
						if (unk_0x765F6FEEFF39224F(Var1.f_1) && unk_0x068481DAF84B9654(Var1.f_1))
						{
							iVar3 = unk_0x22B02EC53152632C(Var1.f_1);
							if (iVar3 != unk_0xBB28786B7F552D0B(Local_103))
							{
								return 1;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (iParam0 == 1)
	{
		if (!unk_0x0E4018692D92041D(Local_103.f_24, 5))
		{
			if (unk_0xB05EBD564C7A1480(vLocal_145 - Vector(25f, 25f, 25f), vLocal_145 + Vector(25f, 25f, 25f)))
			{
				unk_0x8950ED5730F62EE8(&(Local_103.f_24), 5);
			}
		}
	}
	return 0;
}

int func_35()
{
	if (Local_105.f_50 >= 15 && Local_105.f_50 <= 19)
	{
		if (unk_0xCA12322D8FBBDBEE(9, vLocal_145, 40f))
		{
			return 1;
		}
	}
	if (unk_0xCF50815BECDF585D(-1, vLocal_145, vLocal_146, fLocal_147))
	{
		return 1;
	}
	if (unk_0xCF50815BECDF585D(-1, vLocal_148, vLocal_149, fLocal_150))
	{
		return 1;
	}
	return 0;
}

int func_36()
{
	if ((unk_0x5B948815B881FB6B(vLocal_148, vLocal_149, fLocal_150, joaat("weapon_grenade"), 0) || unk_0x5B948815B881FB6B(vLocal_148, vLocal_149, fLocal_150, joaat("weapon_molotov"), 0)) || unk_0x5B948815B881FB6B(vLocal_148, vLocal_149, fLocal_150, joaat("weapon_stickybomb"), 0))
	{
		return 1;
	}
	return 0;
}

int func_37()
{
	if ((unk_0x5B948815B881FB6B(vLocal_145, vLocal_146, fLocal_147, joaat("weapon_grenade"), 0) || unk_0x5B948815B881FB6B(vLocal_145, vLocal_146, fLocal_147, joaat("weapon_molotov"), 0)) || unk_0x5B948815B881FB6B(vLocal_145, vLocal_146, fLocal_147, joaat("weapon_stickybomb"), 0))
	{
		return 1;
	}
	return 0;
}

int func_38(int iParam0)
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

int func_39(int iParam0, int iParam1)
{
	if (Global_1626536[iParam0 /*603*/] == iParam1)
	{
		return func_40(iParam0);
	}
	return 0;
}

int func_40(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x0E4018692D92041D(Global_1626536[iVar0 /*603*/].f_1, 0);
	}
	return 0;
}

int func_41()
{
	if (func_42() || func_35())
	{
		return 1;
	}
	return 0;
}

int func_42()
{
	if (unk_0x7E480C68737C0B83(vLocal_145, vLocal_146, fLocal_147, 0))
	{
		return 1;
	}
	if (unk_0x7E480C68737C0B83(vLocal_148, vLocal_149, fLocal_150, 0))
	{
		return 1;
	}
	return 0;
}

void func_43()
{
	if (Local_103.f_33 > 0f)
	{
		if (func_44(&(Local_103.f_34), 50, 0))
		{
			Local_103.f_33 = (Local_103.f_33 - 0.02f);
			if (Local_103.f_33 < 0f)
			{
				Local_103.f_33 = 0f;
			}
			func_14(&(Local_103.f_34));
		}
	}
}

int func_44(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_19(uParam0, bParam2, 0);
	if (unk_0xB331FCEB94EB05C8() && !bParam2)
	{
		if (unk_0xEE14D9A9F531ADDC(unk_0x5009A219B22D2352(unk_0x78DCC5D0CB43DEBA(), *uParam0)) >= iParam1)
		{
			func_14(uParam0);
			return 1;
		}
	}
	else if (unk_0xEE14D9A9F531ADDC(unk_0x5009A219B22D2352(unk_0xE3903F59E2F22150(), *uParam0)) >= iParam1)
	{
		func_14(uParam0);
		return 1;
	}
	return 0;
}

void func_45()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x1B094AC15936B3DB(unk_0xDD4FFAA17341D382(iLocal_124)))
	{
		iVar0 = unk_0xEB9DC13235C0B345(unk_0xDD4FFAA17341D382(iLocal_124));
		iVar1 = unk_0x378BD4B3881338C2(iVar0);
		if (!unk_0x0E4018692D92041D(Local_103.f_23, 11))
		{
			if (unk_0x0E4018692D92041D(Local_104[iLocal_124 /*10*/], 5))
			{
				if (unk_0x4F94F07DAD382CDA(Local_103.f_13))
				{
					if (func_3(Local_103.f_13))
					{
						unk_0x35F11A916FDFCF32(unk_0xE4B835FDC8B9B086(Local_103.f_13), 1, 1);
						func_47(&(Local_103.f_13));
					}
				}
				else
				{
					Local_103.f_38 = { Local_104[iLocal_124 /*10*/].f_7 };
					Local_103.f_44 = 7;
					unk_0x8950ED5730F62EE8(&(Local_103.f_23), 11);
				}
			}
		}
		if (!unk_0x0E4018692D92041D(Local_103.f_23, 14))
		{
			if (unk_0x0E4018692D92041D(Local_104[iLocal_124 /*10*/], 6))
			{
				unk_0x8950ED5730F62EE8(&(Local_103.f_23), 14);
			}
		}
		if (!unk_0x0E4018692D92041D(Local_103.f_23, 15))
		{
			if (unk_0x0E4018692D92041D(Local_104[iLocal_124 /*10*/], 7))
			{
				unk_0x8950ED5730F62EE8(&(Local_103.f_23), 15);
			}
		}
		if (!unk_0x0E4018692D92041D(Local_103.f_23, 26))
		{
			if (unk_0x0E4018692D92041D(Local_104[iLocal_124 /*10*/], 24))
			{
				unk_0x8950ED5730F62EE8(&(Local_103.f_23), 26);
			}
		}
		if (!unk_0x0E4018692D92041D(Local_103.f_23, 22))
		{
			if (unk_0x0E4018692D92041D(Local_104[iLocal_124 /*10*/], 22))
			{
				unk_0x8950ED5730F62EE8(&(Local_103.f_23), 22);
			}
		}
		if (!unk_0x0E4018692D92041D(Local_103.f_23, 23))
		{
			if (unk_0x0E4018692D92041D(Local_104[iLocal_124 /*10*/], 23))
			{
				unk_0x8950ED5730F62EE8(&(Local_103.f_23), 23);
			}
		}
		if (!unk_0x0E4018692D92041D(Local_103.f_23, 30))
		{
			if (unk_0x0E4018692D92041D(Local_104[iLocal_124 /*10*/], 25))
			{
				unk_0x8950ED5730F62EE8(&(Local_103.f_23), 30);
			}
		}
		if (!unk_0x0E4018692D92041D(Local_103.f_23, 31))
		{
			if (unk_0x0E4018692D92041D(Local_104[iLocal_124 /*10*/], 26))
			{
				unk_0x8950ED5730F62EE8(&(Local_103.f_23), 31);
			}
		}
		if (!unk_0x0E4018692D92041D(Local_103.f_24, 6))
		{
			if (unk_0x0E4018692D92041D(Local_104[iLocal_124 /*10*/], 29))
			{
				unk_0x8950ED5730F62EE8(&(Local_103.f_24), 6);
			}
		}
		if (!unk_0x0E4018692D92041D(Local_103.f_24, 9))
		{
			if (unk_0x0E4018692D92041D(Local_104[iLocal_124 /*10*/], 31))
			{
				unk_0x8950ED5730F62EE8(&(Local_103.f_24), 9);
			}
		}
		if (!unk_0x0E4018692D92041D(Local_103.f_1, 3))
		{
			if (unk_0x0E4018692D92041D(Local_104[iLocal_124 /*10*/].f_1, 3))
			{
				unk_0x8950ED5730F62EE8(&(Local_103.f_1), 3);
			}
		}
		if (unk_0x0E4018692D92041D(Local_103.f_25, 1))
		{
			if (!unk_0x0E4018692D92041D(Local_103.f_25, 6))
			{
				if (unk_0x0E4018692D92041D(Local_104[iLocal_124 /*10*/].f_5, 1))
				{
					unk_0x8950ED5730F62EE8(&(Local_103.f_25), 6);
				}
			}
			if (!unk_0x0E4018692D92041D(Local_103.f_25, 7))
			{
				if (unk_0x0E4018692D92041D(Local_104[iLocal_124 /*10*/].f_5, 2))
				{
					unk_0x8950ED5730F62EE8(&(Local_103.f_25), 7);
				}
			}
			if (!unk_0x0E4018692D92041D(Local_103.f_25, 5))
			{
				if (unk_0x0E4018692D92041D(Local_104[iLocal_124 /*10*/].f_5, 0))
				{
					unk_0x8950ED5730F62EE8(&(Local_103.f_25), 5);
				}
			}
		}
		if (!unk_0x0E4018692D92041D(Local_103.f_23, 20))
		{
			if (unk_0x0E4018692D92041D(Local_104[iLocal_124 /*10*/], 11))
			{
				unk_0x8950ED5730F62EE8(&(Local_103.f_23), 20);
			}
		}
		if (!unk_0x0E4018692D92041D(Local_103.f_24, 17))
		{
			if (unk_0x0E4018692D92041D(Local_104[iLocal_124 /*10*/], 13))
			{
				unk_0x8950ED5730F62EE8(&(Local_103.f_24), 17);
			}
		}
		if (func_46(iVar0, 1, 1))
		{
			if (!unk_0x0E4018692D92041D(Local_103.f_23, 5))
			{
				if (!func_387(Local_103))
				{
					if (unk_0x91BBD269506D61D2(unk_0xBB28786B7F552D0B(Local_103), iVar1, 1))
					{
						unk_0x8950ED5730F62EE8(&(Local_103.f_23), 5);
					}
				}
			}
			if (unk_0x0E4018692D92041D(Local_103.f_25, 1))
			{
				if (!unk_0x0E4018692D92041D(Local_103.f_25, 8))
				{
					if (!func_387(Local_103.f_15))
					{
						if (unk_0x91BBD269506D61D2(unk_0xBB28786B7F552D0B(Local_103.f_15), iVar1, 1))
						{
							unk_0x8950ED5730F62EE8(&(Local_103.f_25), 8);
						}
					}
				}
				if (!unk_0x0E4018692D92041D(Local_103.f_25, 9))
				{
					if (unk_0x0E4018692D92041D(Local_104[iLocal_124 /*10*/].f_5, 3))
					{
						unk_0x8950ED5730F62EE8(&(Local_103.f_25), 9);
					}
				}
			}
			if (!unk_0x0E4018692D92041D(Local_103.f_23, 6))
			{
				if (unk_0x0E4018692D92041D(Local_104[iLocal_124 /*10*/], 1))
				{
					unk_0x8950ED5730F62EE8(&(Local_103.f_23), 6);
				}
			}
			if (!unk_0x0E4018692D92041D(Local_103.f_23, 16))
			{
				if (unk_0x0E4018692D92041D(Local_104[iLocal_124 /*10*/], 8))
				{
					unk_0x8950ED5730F62EE8(&(Local_103.f_23), 16);
				}
			}
			if (!unk_0x0E4018692D92041D(Local_103.f_24, 1))
			{
				if (unk_0x0E4018692D92041D(Local_104[iLocal_124 /*10*/], 27))
				{
					unk_0x8950ED5730F62EE8(&(Local_103.f_24), 1);
				}
			}
			if (!unk_0x0E4018692D92041D(Local_103.f_23, 7))
			{
				if (unk_0x0E4018692D92041D(Local_104[iLocal_124 /*10*/], 0))
				{
					unk_0x8950ED5730F62EE8(&(Local_103.f_23), 7);
				}
			}
			if (!unk_0x0E4018692D92041D(Local_103.f_23, 10))
			{
				if (unk_0x0E4018692D92041D(Local_104[iLocal_124 /*10*/], 4))
				{
					if (Local_103.f_3 != 5 && Local_103.f_3 != 6)
					{
						Local_103.f_3 = 5;
					}
					unk_0x8950ED5730F62EE8(&(Local_103.f_23), 10);
				}
			}
			if (!unk_0x0E4018692D92041D(Local_103.f_1, 2))
			{
				if (unk_0x0E4018692D92041D(Local_104[iLocal_124 /*10*/].f_1, 2))
				{
					unk_0x8950ED5730F62EE8(&(Local_103.f_1), 2);
					unk_0x8950ED5730F62EE8(&(Local_103.f_1), 4);
					iLocal_126 = iLocal_124;
				}
			}
			else if (!unk_0x0E4018692D92041D(Local_104[iLocal_126 /*10*/].f_1, 2))
			{
				unk_0xCE689A8E8C42ED78(&(Local_103.f_1), 2);
				if (unk_0x0E4018692D92041D(Local_103.f_1, 3))
				{
					unk_0xCE689A8E8C42ED78(&(Local_103.f_1), 3);
				}
			}
			if (!unk_0x0E4018692D92041D(Local_103.f_24, 8))
			{
				if (unk_0x0E4018692D92041D(Local_104[iLocal_124 /*10*/], 30))
				{
					unk_0x8950ED5730F62EE8(&(Local_103.f_24), 8);
				}
			}
			if (!unk_0x0E4018692D92041D(Local_103.f_1, 0))
			{
				if (unk_0x0E4018692D92041D(Local_104[iLocal_124 /*10*/].f_1, 0))
				{
					unk_0x8950ED5730F62EE8(&(Local_103.f_1), 0);
					unk_0x8950ED5730F62EE8(&(Local_103.f_1), 1);
					Local_103.f_26 = Local_104[iLocal_124 /*10*/].f_2;
					iLocal_125 = iLocal_124;
				}
			}
			else if (!unk_0x0E4018692D92041D(Local_104[iLocal_125 /*10*/].f_1, 0))
			{
				unk_0xCE689A8E8C42ED78(&(Local_103.f_1), 0);
			}
			if (!unk_0x0E4018692D92041D(Local_103.f_24, 13))
			{
				if (unk_0x0E4018692D92041D(Local_104[iLocal_124 /*10*/], 21))
				{
					unk_0x8950ED5730F62EE8(&(Local_103.f_24), 13);
				}
			}
		}
	}
	iLocal_124++;
	if (iLocal_124 == unk_0xF839A4FC3E76D324())
	{
		iLocal_124 = 0;
	}
}

int func_46(int iParam0, bool bParam1, bool bParam2)
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

void func_47(var uParam0)
{
	int iVar0;
	
	if (unk_0x22C3124A898FB82A(*uParam0))
	{
		if (!unk_0x6F3D61B58C7B4025(*uParam0))
		{
		}
	}
	if (unk_0x4F94F07DAD382CDA(*uParam0))
	{
		iVar0 = unk_0xF2D53AA87148ACED(*uParam0);
		unk_0xFD5D4D96D91EEAAD(&iVar0);
	}
}

void func_48()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	unk_0x8950ED5730F62EE8(&(Local_103.f_23), 2);
	unk_0x8950ED5730F62EE8(&(Local_103.f_23), 3);
	unk_0xCE689A8E8C42ED78(&(Local_103.f_23), 13);
	unk_0xCE689A8E8C42ED78(&(Local_103.f_23), 27);
	unk_0xCE689A8E8C42ED78(&(Local_103.f_23), 28);
	unk_0xCE689A8E8C42ED78(&(Local_103.f_24), 4);
	if (!unk_0x0E4018692D92041D(Local_103.f_23, 18))
	{
		if (func_387(Local_103))
		{
			if (Local_103.f_37 <= 0f)
			{
				unk_0x8950ED5730F62EE8(&(Local_103.f_23), 18);
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < unk_0xF839A4FC3E76D324())
	{
		if (unk_0x1B094AC15936B3DB(unk_0xDD4FFAA17341D382(iVar0)))
		{
			iVar5 = unk_0xEB9DC13235C0B345(unk_0xDD4FFAA17341D382(iVar0));
			iVar6 = unk_0x378BD4B3881338C2(iVar5);
			if (Local_104[iVar0 /*10*/].f_3 > 0)
			{
				Local_103.f_4 = (Local_103.f_4 + Local_104[iVar0 /*10*/].f_3);
				Local_104[iVar0 /*10*/].f_3 = 0;
			}
			if (unk_0x0E4018692D92041D(Local_103.f_23, 3))
			{
				if (unk_0x18FB647D79B09657(iVar6, vLocal_144, 30f, 30f, 30f, 0, 1, 0))
				{
					unk_0xCE689A8E8C42ED78(&(Local_103.f_23), 3);
				}
			}
			if (!unk_0x0E4018692D92041D(Local_103.f_24, 16))
			{
				if (unk_0x0E4018692D92041D(Local_104[iVar0 /*10*/], 12))
				{
					unk_0x8950ED5730F62EE8(&(Local_103.f_24), 16);
				}
			}
			if (func_46(iVar5, 1, 1))
			{
				if (unk_0x0E4018692D92041D(Local_103.f_23, 2))
				{
					unk_0xCE689A8E8C42ED78(&(Local_103.f_23), 2);
				}
				if (unk_0x65F35477FEAD6F0F(iVar6) == iLocal_139)
				{
					if (unk_0x90D54DCF679C0BBE(iVar6) == iLocal_140 || unk_0x90D54DCF679C0BBE(iVar6) == iLocal_141)
					{
						iVar2 = 1;
					}
					else if (unk_0x90D54DCF679C0BBE(iVar6) == iLocal_142)
					{
						unk_0x8950ED5730F62EE8(&(Local_103.f_23), 27);
						iVar3 = 1;
					}
				}
				if (iVar2 == 1 || iVar3 == 1)
				{
					unk_0x8950ED5730F62EE8(&(Local_103.f_23), 13);
					iVar4++;
					if (!unk_0x0E4018692D92041D(Local_103.f_23, 9) && !unk_0x0E4018692D92041D(Local_103.f_23, 21))
					{
						if (!unk_0x0E4018692D92041D(Local_103.f_23, 4))
						{
							if (unk_0x96C4B46F194803A7(iVar6, &iVar1, 1))
							{
								if ((((iVar1 != joaat("weapon_unarmed") && iVar1 != 0) && iVar1 != joaat("object")) && iVar1 != joaat("weapon_flare")) && iVar1 != joaat("weapon_snowball"))
								{
									if (Local_103.f_32 == -1)
									{
										Local_103.f_32 = iVar0;
									}
									else if (!unk_0x1B094AC15936B3DB(unk_0xDD4FFAA17341D382(Local_103.f_32)))
									{
										Local_103.f_32 = -1;
									}
									unk_0x8950ED5730F62EE8(&(Local_103.f_23), 4);
									if (!unk_0x0E4018692D92041D(Local_103.f_23, 12))
									{
										if (unk_0x18FB647D79B09657(iVar6, vLocal_111, 2.5f, 2.5f, 3f, 0, 1, 0))
										{
											unk_0x8950ED5730F62EE8(&(Local_103.f_23), 12);
										}
									}
								}
							}
						}
						if (!unk_0x0E4018692D92041D(Local_103.f_24, 0))
						{
							if (unk_0x002F527E1A3238DC(iVar5) > 0)
							{
								unk_0x8950ED5730F62EE8(&(Local_103.f_24), 0);
							}
						}
					}
				}
				else if (unk_0x18FB647D79B09657(iVar6, vLocal_144, 5f, 5f, 2.5f, 0, 1, 0))
				{
					unk_0x8950ED5730F62EE8(&(Local_103.f_23), 28);
					iVar4++;
				}
				if (!unk_0x0E4018692D92041D(Local_103.f_24, 4))
				{
					if (unk_0x0E4018692D92041D(Local_104[iVar0 /*10*/], 28))
					{
						unk_0x8950ED5730F62EE8(&(Local_103.f_24), 4);
					}
				}
				if ((unk_0x0E4018692D92041D(Local_103.f_23, 9) && !unk_0x0E4018692D92041D(Local_103.f_23, 20)) && !unk_0x0E4018692D92041D(Local_103.f_23, 19))
				{
					if (Local_104[iLocal_124 /*10*/].f_6 > Local_103.f_33)
					{
						Local_103.f_33 = Local_104[iVar0 /*10*/].f_6;
						func_14(&(Local_103.f_34));
						if (!unk_0x0E4018692D92041D(Local_103.f_23, 24))
						{
							if (Local_103.f_33 > (0.55f + 0.2f))
							{
								unk_0x8950ED5730F62EE8(&(Local_103.f_23), 24);
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (Local_103.f_41 != iVar4)
	{
		Local_103.f_41 = iVar4;
	}
}

int func_49()
{
	int iVar0;
	
	if ((!unk_0x22C3124A898FB82A(Local_103) || !unk_0x22C3124A898FB82A(Local_103.f_13)) || !unk_0x22C3124A898FB82A(Local_103.f_14))
	{
		if ((func_51(iLocal_110) && func_51(func_52(1))) && func_51(func_52(2)))
		{
			if (unk_0xA107BB59F9A92498(1, 0, 2, 0))
			{
				if (!unk_0x22C3124A898FB82A(Local_103))
				{
					if (func_50(&Local_103, 4, iLocal_110, vLocal_111 - Vector(1f, 0f, 0f), Local_103.f_42, 1, 1, 1))
					{
						unk_0x93AA93DA1B137032(unk_0xBB28786B7F552D0B(Local_103), 0, iLocal_316[0], iLocal_317[0], 0);
						unk_0x93AA93DA1B137032(unk_0xBB28786B7F552D0B(Local_103), 2, iLocal_316[1], iLocal_317[1], 0);
						unk_0x93AA93DA1B137032(unk_0xBB28786B7F552D0B(Local_103), 3, iLocal_316[2], iLocal_317[2], 0);
						unk_0x93AA93DA1B137032(unk_0xBB28786B7F552D0B(Local_103), 4, iLocal_316[3], iLocal_317[3], 0);
						unk_0x93AA93DA1B137032(unk_0xBB28786B7F552D0B(Local_103), 8, iLocal_316[4], iLocal_317[4], 0);
						unk_0x576963EA28E5BD52(unk_0xBB28786B7F552D0B(Local_103), unk_0x90D2E06562D440E1(vLocal_111));
						unk_0x897EF720254BBEA3(unk_0xBB28786B7F552D0B(Local_103), 1);
						unk_0x4A852F02088ECC9D(unk_0xBB28786B7F552D0B(Local_103), 1);
						unk_0x428C55A965F78103(unk_0xBB28786B7F552D0B(Local_103), 1, 0);
						unk_0xBE470ACBEDCBF6FC(unk_0xBB28786B7F552D0B(Local_103), 16);
						unk_0x6EE33B67DCAC6DB1(unk_0xBB28786B7F552D0B(Local_103), 0);
						unk_0x33F6BE48E356DA27(unk_0xBB28786B7F552D0B(Local_103), 1024, true);
						unk_0x141A3DB3233829B3(unk_0xBB28786B7F552D0B(Local_103), 1);
						unk_0x7FC2040EB34E0E31(unk_0xBB28786B7F552D0B(Local_103), round((200f * Global_262145.f_153)), 0);
						if (!unk_0xA0EDFFB6CF5B314A(unk_0xBB28786B7F552D0B(Local_103), "XP_Blocker"))
						{
							unk_0x6767500A150CF86F(unk_0xBB28786B7F552D0B(Local_103), "XP_Blocker", 1);
						}
						func_386(&uLocal_151, 3, unk_0xBB28786B7F552D0B(Local_103), &(Local_103.f_46), 1, 0);
					}
				}
				if (!unk_0x22C3124A898FB82A(Local_103.f_13))
				{
					iVar0 = unk_0x06C389ED9C5A7E7D(-1795552418, vLocal_127, 0, func_52(1));
					if (unk_0x765F6FEEFF39224F(iVar0))
					{
						Local_103.f_13 = unk_0x0E0E192D65881AC2(iVar0);
						unk_0xF70578F5CD9822CB(unk_0xE4B835FDC8B9B086(Local_103.f_13), true);
						unk_0x23298AB8A7D0F403(unk_0xE4B835FDC8B9B086(Local_103.f_13), false, 0);
						unk_0x3C990C409B3845DE(unk_0xE4B835FDC8B9B086(Local_103.f_13), fLocal_128);
						unk_0x576963EA28E5BD52(unk_0xE4B835FDC8B9B086(Local_103.f_13), unk_0x90D2E06562D440E1(vLocal_111));
						unk_0x9611832841071B69(unk_0xE4B835FDC8B9B086(Local_103.f_13), 1);
						unk_0x371E5AB66DC2B32E(unk_0xE4B835FDC8B9B086(Local_103.f_13), -0.2f, 1);
						unk_0x861C6D8520E774EA(unk_0xE4B835FDC8B9B086(Local_103.f_13), 1, 0);
						unk_0x0CDD28A9DFCE2FCE(unk_0xE4B835FDC8B9B086(Local_103.f_13), false, 0);
					}
				}
				if (!unk_0x22C3124A898FB82A(Local_103.f_14))
				{
					if (func_26(&(Local_103.f_14), func_52(2), vLocal_129 - Vector(0.12f, 0f, 0f), 1, 1, 0, 1, 0, 0, 0))
					{
						unk_0x3C990C409B3845DE(unk_0xE4B835FDC8B9B086(Local_103.f_14), fLocal_130);
						unk_0x576963EA28E5BD52(unk_0xE4B835FDC8B9B086(Local_103.f_14), unk_0x90D2E06562D440E1(vLocal_111));
						unk_0xF70578F5CD9822CB(unk_0xE4B835FDC8B9B086(Local_103.f_14), true);
					}
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_50(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	if (!unk_0xDB7A20748C5E6EF3(1))
	{
		return 0;
	}
	iVar0 = unk_0x9BA5CF280376EEA4(iParam1, iParam2, vParam3, fParam4, iParam6, bParam5);
	*uParam0 = unk_0x50403C3BFA227FE5(iVar0);
	if (unk_0x22C3124A898FB82A(*uParam0))
	{
		unk_0xFE8201EFB515D77B(iVar0, iParam7);
		if (unk_0x0371ECBEC27AF4BE(iVar0))
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

bool func_51(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xB815670C37E03CDE(iParam0);
	return unk_0x5D98D654CDC2165A(iParam0);
}

int func_52(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("mp_m_shopkeep_01");
		
		case 1:
			return joaat("p_poly_bag_01_s");
		
		case 2:
			return joaat("p_till_01_s");
		
		default:
	}
	return joaat("mp_m_shopkeep_01");
}

void func_53()
{
	if (!unk_0x0E4018692D92041D(Local_105.f_52, 20))
	{
		if (unk_0x0E4018692D92041D(Local_103.f_23, 11) || unk_0x0E4018692D92041D(Local_103.f_24, 16))
		{
			if (unk_0x65F35477FEAD6F0F(unk_0x33CD235DF1E6A94E()) == iLocal_139 || unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), vLocal_144, 5f, 5f, 2.5f, 0, 1, 0))
			{
				func_56();
				func_54();
				func_6(Local_105.f_50, 1, func_7());
				unk_0x8950ED5730F62EE8(&(Local_105.f_52), 20);
			}
			else
			{
				if ((unk_0x0E4018692D92041D(Local_105.f_52, 31) && (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) > 0 || unk_0x0E4018692D92041D(Local_104[unk_0x72B85B341ADBE9DE() /*10*/], 1))) && unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), vLocal_144, 20f, 20f, 20f, 0, 1, 0))
				{
					func_56();
				}
				unk_0x8950ED5730F62EE8(&(Local_105.f_52), 20);
			}
		}
	}
}

void func_54()
{
	int iVar0;
	
	iVar0 = func_55(47);
	Global_2414402[iVar0 /*83*/] = 47;
	StringCopy(&(Global_2414402[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

int func_55(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2414402[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2414402[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_56()
{
	int iVar0;
	
	if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) > 0 || unk_0x0E4018692D92041D(Local_104[unk_0x72B85B341ADBE9DE() /*10*/], 1))
	{
		iVar0 = func_125(1181, -1, 0);
		if (!unk_0x0E4018692D92041D(iVar0, Local_105.f_50))
		{
			func_123(14, 1, -1);
			unk_0x8950ED5730F62EE8(&iVar0, Local_105.f_50);
			func_122(1181, iVar0, -1, 1, 0);
			if (func_121(14, -1) >= 20)
			{
				func_107(44, 1);
			}
			else
			{
				func_106(44, func_121(14, -1));
			}
		}
		func_104(1167, 1, -1);
		func_103(12, 1, -1, 1);
		func_102(19);
		iLocal_334 = 100;
		iLocal_334 = round((IntToFloat(iLocal_334) * Global_262145.f_4225));
		func_60(2, "XPT_HOLDUP", -1636175450, -235721452, iLocal_334, 1, -1, 0);
		func_57(12, 0);
	}
}

void func_57(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_59(iParam0, iParam1))
	{
		iVar0 = func_58();
		Global_2458506[iVar0] = iParam0;
	}
}

int func_58()
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

int func_59(int iParam0, var uParam1)
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

var func_60(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_61(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_61(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_62(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_62(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_101(unk_0x95B959F18401C09A()) || func_100(unk_0x95B959F18401C09A()))
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
	else if (func_97() || func_93(unk_0x95B959F18401C09A()))
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
	if (func_92(sParam2))
	{
	}
	if (func_91())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_89(iVar1);
		fVar3 = (to_float(iVar1) * Global_262145.f_1);
		iVar1 = round(fVar3);
		if (bParam10)
		{
			iVar1 = func_88(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_85(0, &iVar1);
					break;
				
				case 3:
					func_85(1, &iVar1);
					break;
				
				case 1:
					func_81(&iVar1);
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
			func_104(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_73((func_80(unk_0x95B959F18401C09A()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0xE62DD6141BEF78D0(iVar1, iParam8, iParam9);
				if (Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_39.f_2 != -1)
				{
					func_104(1165, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_67(iVar1);
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
				func_63((func_65(unk_0x95B959F18401C09A()) + iVar1));
			}
			else
			{
				func_63((func_65(unk_0x95B959F18401C09A()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_63(int iParam0)
{
	if (func_91())
	{
		Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_211.f_5 = iParam0;
		func_64(joaat("mpply_globalxp"), iParam0);
	}
}

void func_64(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x12B6E23F244DDB0F(iVar0, iParam1, 1);
	}
}

int func_65(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_46(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x95B959F18401C09A())
			{
				return func_66(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1589819[iParam0 /*818*/].f_211.f_5;
			}
		}
		else
		{
			return func_66(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_66(int iParam0)
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

void func_67(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_72(unk_0x95B959F18401C09A()) };
	if (unk_0x062B7A5C795CB453())
	{
		if (unk_0x4A5CDD2BE8070A7F(&Var0))
		{
			iVar1 = func_70(func_71(&Var0));
			if (iVar1 == 0)
			{
				func_69(&Global_1382581, iParam0);
				func_68(joaat("mpply_crew_local_xp_0"), Global_1382581);
			}
			else if (iVar1 == 1)
			{
				func_69(&Global_1382582, iParam0);
				func_68(joaat("mpply_crew_local_xp_1"), Global_1382582);
			}
			else if (iVar1 == 2)
			{
				func_69(&Global_1382583, iParam0);
				func_68(joaat("mpply_crew_local_xp_2"), Global_1382583);
			}
			else if (iVar1 == 3)
			{
				func_69(&Global_1382584, iParam0);
				func_68(joaat("mpply_crew_local_xp_3"), Global_1382584);
			}
			else if (iVar1 == 4)
			{
				func_69(&Global_1382585, iParam0);
				func_68(joaat("mpply_crew_local_xp_4"), Global_1382585);
			}
		}
	}
}

void func_68(int iParam0, int iParam1)
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

void func_69(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_70(int iParam0)
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

int func_71(var uParam0)
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

struct<13> func_72(int iParam0)
{
	struct<13> Var0;
	
	unk_0xBC1B3D38C4BB38F4(iParam0, &Var0, 13);
	return Var0;
}

void func_73(int iParam0, int iParam1, int iParam2)
{
	if (func_91())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9494 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1382702[func_78(-1)])
				{
					unk_0xE62DD6141BEF78D0(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1382702[func_78(-1)])
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
		if (func_77(unk_0x95B959F18401C09A()))
		{
			Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_211.f_1 = iParam0;
			Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_211.f_6 = func_75(iParam0, 1);
		}
		func_74(639, iParam0, -1, 1);
		func_122(640, func_75(iParam0, 1), -1, 1, 0);
		Global_1382702[func_78(-1)] = iParam0;
		func_57(7, 0);
	}
}

void func_74(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2539502[iParam0 /*3*/][func_78(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x12B6E23F244DDB0F(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1382642[func_78(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1382648[func_78(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1382654[func_78(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1382660[func_78(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1382618[func_78(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1382624[func_78(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1382630[func_78(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1382636[func_78(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1382594[func_78(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1382600[func_78(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1382606[func_78(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1382612[func_78(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1382666[func_78(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1382672[func_78(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1382678[func_78(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1382684[func_78(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1382690[func_78(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1382696[func_78(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1382702[func_78(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1382708[func_78(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2573513[0 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2573513[1 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2573513[2 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2573513[3 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 8956:
			Global_2573644[func_78(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1382714[func_78(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1382720[func_78(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1382726[func_78(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1382732[func_78(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2573577[0 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2573577[1 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2573577[2 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2573577[3 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2573577[4 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2573647[0 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2573647[1 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2573647[2 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2573647[3 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2573647[4 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2573663[0 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2573663[1 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2573663[2 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2573663[3 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2573663[4 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2573577[5 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2573513[4 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2573679[func_78(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2573688[func_78(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2573682[func_78(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2573691[func_78(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2573685[func_78(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2573694[func_78(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2573697[func_78(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2573577[6 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2573513[5 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2573577[7 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2573513[6 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2573577[8 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2573513[7 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2573577[9 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2573513[8 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2573577[10 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2573513[9 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2573577[11 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2573513[10 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2573577[12 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2573513[11 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2573577[13 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2573513[12 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2573577[14 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2573513[13 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2573577[15 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2573513[14 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2573577[16 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2573513[15 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2573577[17 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2573513[16 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2573513[17 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2573513[18 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2573513[19 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2573513[20 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2573700[func_78(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2573703[func_78(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2573706[func_78(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2573709[func_78(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2573712[func_78(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2573715[func_78(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2573718[func_78(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2573721[func_78(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2573724[func_78(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2573727[func_78(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2573730[func_78(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2573733[func_78(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2573736[func_78(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_75(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_76(iParam0, 0);
}

int func_76(int iParam0, int iParam1)
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

int func_77(int iParam0)
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

int func_78(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_79();
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

int func_79()
{
	return Global_1312745;
}

int func_80(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x95B959F18401C09A())
			{
				return Global_1382702[func_78(-1)];
			}
			else if (func_77(iParam0))
			{
				return Global_1589819[iParam0 /*818*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1382702[func_78(-1)];
	}
	return 0;
}

void func_81(int iParam0)
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
				if (unk_0x12D3B4C76D4AAB00(iVar5) == iVar1 || func_84(unk_0x12D3B4C76D4AAB00(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x95B959F18401C09A())
					{
						if (func_83(unk_0x95B959F18401C09A(), iVar5))
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
		iVar6 = round((func_82(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round((func_82(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_82(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_83(int iParam0, int iParam1)
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

int func_84(int iParam0, int iParam1, int iParam2)
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

void func_85(bool bParam0, int iParam1)
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
				if (func_46(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x95B959F18401C09A())
					{
						iVar1++;
						if (func_83(unk_0x95B959F18401C09A(), iVar4))
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
			if (func_46(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x95B959F18401C09A())
				{
					if (func_86(unk_0x95B959F18401C09A(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_83(unk_0x95B959F18401C09A(), iVar4))
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
		iVar5 = round((func_82(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round((func_82(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_86(int iParam0, int iParam1)
{
	return vdist(func_87(iParam0), func_87(iParam1));
	return 0f;
}

Vector3 func_87(int iParam0)
{
	return unk_0xFBB1F99A825CAB09(unk_0x378BD4B3881338C2(iParam0), 0);
}

int func_88(int iParam0)
{
	int iVar0;
	
	if (unk_0x39DF7EBBDAD69F4B() != 3)
	{
		return *iParam0;
	}
	iVar0 = round((func_82(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_89(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0xEE14D9A9F531ADDC(iParam0) > func_80(unk_0x95B959F18401C09A()))
		{
			iParam0 = -func_80(unk_0x95B959F18401C09A());
		}
	}
	if (func_90(8000, 0, 0) > 0)
	{
		if (func_90(8000, 0, 0) < (iParam0 + func_80(unk_0x95B959F18401C09A())))
		{
			iParam0 = (func_90(8000, 0, 0) - func_80(unk_0x95B959F18401C09A()));
		}
	}
	return iParam0;
}

int func_90(int iParam0, bool bParam1, int iParam2)
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

int func_91()
{
	return 1;
}

int func_92(char* sParam0)
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

int func_93(int iParam0)
{
	return func_94(func_95(iParam0));
}

int func_94(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_95(int iParam0)
{
	if (func_96(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_33;
	}
	return -1;
}

int func_96(int iParam0, int iParam1)
{
	if (Global_1626536[iParam0 /*603*/].f_11.f_33 != -1 || (iParam1 && Global_1626536[iParam0 /*603*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_97()
{
	if (unk_0x289064CB38B560AA())
	{
		return func_99();
	}
	return func_98(Global_4456448.f_138474);
}

int func_98(int iParam0)
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

var func_99()
{
	return Global_2448756.f_16;
}

bool func_100(int iParam0)
{
	return Global_2424047[iParam0 /*416*/].f_115 == 2;
}

bool func_101(int iParam0)
{
	return Global_2424047[iParam0 /*416*/].f_115 == 7;
}

void func_102(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_8462)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1312570.f_1[iVar0] == -1)
		{
			Global_1312570.f_1[iVar0] = iParam0;
			Global_1312570 = 1;
			return;
		}
		iVar0++;
	}
}

int func_103(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_79();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x7FB03A24AC826003((iParam0 - 0)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x7FB03A24AC826003((iParam0 - 192)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x7FB03A24AC826003((iParam0 - 513)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x7FB03A24AC826003((iParam0 - 705)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0xD9ABF415C92ECCBC((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x7FB03A24AC826003((iParam0 - 3111)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0xD9ABF415C92ECCBC((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x7FB03A24AC826003((iParam0 - 2919)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x8951614902E1632F((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x7FB03A24AC826003((iParam0 - 4207)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x8951614902E1632F((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x7FB03A24AC826003((iParam0 - 4335)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x8951614902E1632F((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x7FB03A24AC826003((iParam0 - 6029)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x8951614902E1632F((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x7FB03A24AC826003((iParam0 - 7385)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x8951614902E1632F((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x7FB03A24AC826003((iParam0 - 7321)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x8951614902E1632F((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x7FB03A24AC826003((iParam0 - 9361)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x8951614902E1632F((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x7FB03A24AC826003((iParam0 - 15369)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x8951614902E1632F((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x7FB03A24AC826003((iParam0 - 15562)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x8951614902E1632F((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x7FB03A24AC826003((iParam0 - 15946)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0x8951614902E1632F((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x7FB03A24AC826003((iParam0 - 18098)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = unk_0x8951614902E1632F((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x7FB03A24AC826003((iParam0 - 22066)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = unk_0x8951614902E1632F((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x7FB03A24AC826003((iParam0 - 24962)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = unk_0x8951614902E1632F((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - unk_0x7FB03A24AC826003((iParam0 - 26810)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(iVar20, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_104(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_125(iParam0, func_78(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_105(iParam0))
	{
		func_122(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_74(iParam0, iVar0, iParam2, 1);
	}
}

int func_105(int iParam0)
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

int func_106(int iParam0, int iParam1)
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

int func_107(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_108(iParam0, iParam1);
}

int func_108(int iParam0, int iParam1)
{
	if (func_120(14) && !func_119(iParam0))
	{
		return 0;
	}
	if (unk_0x321808B6A32CCA20(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_26012 != 0 && !Global_71590)
	{
		return 0;
	}
	if (func_118(&Global_4269608))
	{
		if (func_116(&Global_4269608, iParam0))
		{
			return 0;
		}
		if (func_109(&Global_4269608, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xBECC4FBAC9C8E5E7(iParam0))
		{
			return 0;
		}
		if (unk_0x321808B6A32CCA20(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_109(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x321808B6A32CCA20(iParam1))
	{
		return 0;
	}
	if (func_120(14) && !func_119(iParam1))
	{
		return 0;
	}
	if (func_116(uParam0, iParam1))
	{
		return 0;
	}
	if (func_115(uParam0) < 0f)
	{
		func_114(uParam0, 0);
	}
	func_112(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_110(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_110(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x321808B6A32CCA20(iParam1))
	{
		return 0;
	}
	if (func_120(14) && !func_119(iParam1))
	{
		return 0;
	}
	if (func_116(uParam0, iParam1))
	{
		return 0;
	}
	if (func_115(uParam0) < 0f)
	{
		func_114(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_111(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_111(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_112(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_113(uParam0, iVar0);
		iVar0++;
	}
	func_114(uParam0, (Global_4269607 - 0.5f));
}

void func_113(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_114(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_115(var uParam0)
{
	return uParam0->f_80;
}

bool func_116(var uParam0, int iParam1)
{
	return func_117(uParam0, iParam1) != -1;
}

int func_117(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_118(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_119(int iParam0)
{
	switch (iParam0)
	{
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
		
		default:
	}
	return 0;
}

bool func_120(int iParam0)
{
	return Global_36425 == iParam0;
}

int func_121(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2572886[iParam0 /*3*/][func_78(iParam1)];
	if (unk_0x75D54ED6C1AD1642(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_122(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_78(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x12B6E23F244DDB0F(iVar0, iParam1, iParam3);
	}
}

void func_123(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_121(iParam0, func_78(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_124(iParam0, iVar0, iParam2);
}

void func_124(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = Global_2572886[iParam0 /*3*/][func_78(uParam2)];
	unk_0x12B6E23F244DDB0F(iVar0, iParam1, 1);
}

int func_125(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_78(iParam1)];
	if (unk_0x75D54ED6C1AD1642(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_126(var uParam0)
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

void func_127(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x06C1EBC003C18F1F())
		{
			func_19(uParam0, 0, 0);
		}
	}
}

void func_128()
{
	bool bVar0;
	int iVar1;
	
	func_246();
	func_220();
	func_171();
	func_53();
	func_169();
	func_168();
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		if (unk_0x65F35477FEAD6F0F(unk_0x33CD235DF1E6A94E()) == iLocal_139)
		{
			if (Global_2528542.f_5643.f_1 == 0)
			{
				Global_2528542.f_5643.f_1 = 1;
			}
			if (unk_0x90D54DCF679C0BBE(unk_0x33CD235DF1E6A94E()) == iLocal_140 || unk_0x90D54DCF679C0BBE(unk_0x33CD235DF1E6A94E()) == iLocal_141)
			{
				bVar0 = true;
			}
			else if (unk_0x90D54DCF679C0BBE(unk_0x33CD235DF1E6A94E()) == iLocal_142)
			{
				iVar1 = 1;
			}
		}
		else if (Global_2528542.f_5643.f_1 == 1)
		{
			Global_2528542.f_5643.f_1 = 0;
		}
	}
	if (!unk_0x0E4018692D92041D(Local_105.f_52, 31))
	{
		if (func_95(unk_0x95B959F18401C09A()) != 154)
		{
			if ((bVar0 || iVar1) || unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), vLocal_144, (5f / 2f), (5f / 2f), (5f / 2f), 0, 1, 0))
			{
				if (!func_38(unk_0x95B959F18401C09A()))
				{
					unk_0x274C6068B660FFB4(unk_0x33CD235DF1E6A94E(), joaat("weapon_unarmed"), true);
					unk_0x8950ED5730F62EE8(&(Local_105.f_52), 31);
				}
			}
		}
	}
	if ((!unk_0x0E4018692D92041D(Local_105.f_52, 26) && bVar0) && !(func_167(0) || func_166()))
	{
		if (func_164("SNK_MNU", Local_105, 0))
		{
			unk_0x8950ED5730F62EE8(&(Local_105.f_52), 26);
		}
	}
	if (!bVar0 && unk_0x0E4018692D92041D(Local_105.f_52, 26))
	{
		if (!unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A()) || (unk_0x117DAF3BF7232886(Local_105.f_1) && unk_0x49D25022440E65EE(Local_105.f_1)))
		{
			unk_0xED68CDDDE25A144E(unk_0x33CD235DF1E6A94E());
			unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), true, 0);
			unk_0xC7E6A5D90DED6E0B(0f);
			unk_0xD6EDA274D82E8678(0f, 1065353216);
			if (Local_105.f_51 > 0)
			{
				Local_104[unk_0x72B85B341ADBE9DE() /*10*/].f_3 = Local_105.f_51;
				Local_105.f_51 = 0;
			}
			func_402();
			unk_0xCE689A8E8C42ED78(&(Local_105.f_53), 7);
			if (unk_0x117DAF3BF7232886(Local_105.f_1))
			{
				unk_0x2F8A4DF7D0DFF0A8(Local_105.f_1, 0);
			}
			unk_0x63F0B040CE6EDF0F(false, 0, 3000, 1, 0, 0);
		}
		func_161(1, Local_105);
		unk_0xCE689A8E8C42ED78(&(Local_105.f_52), 26);
	}
	if (!unk_0x0E4018692D92041D(Local_104[unk_0x72B85B341ADBE9DE() /*10*/], 21))
	{
		if (iVar1 || func_159(unk_0x33CD235DF1E6A94E(), Local_105.f_50))
		{
			unk_0x8950ED5730F62EE8(&(Local_104[unk_0x72B85B341ADBE9DE() /*10*/]), 21);
		}
	}
	if (bVar0 || iVar1)
	{
		func_156();
		func_150();
		func_144();
		func_140(1);
		func_133();
		unk_0xA801F23A1C1DECFB(unk_0x95B959F18401C09A());
		unk_0xC6C5852786DF8AF4(unk_0x95B959F18401C09A());
		if (unk_0x0E4018692D92041D(Global_2528542.f_7, 0))
		{
			unk_0x66712A10AB39A4EA(Local_103.f_71);
			func_131(vLocal_144, func_132(30), 0);
			unk_0xCE689A8E8C42ED78(&(Global_2528542.f_7), 0);
		}
	}
	else
	{
		if (unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), vLocal_144, 5f, 5f, 2.5f, 0, 1, 0))
		{
			func_140(0);
		}
		if (!unk_0x0E4018692D92041D(Global_2528542.f_7, 0))
		{
			unk_0x2EF5DD41310F2175();
			func_129(vLocal_144, func_132(30), "");
			unk_0x8950ED5730F62EE8(&(Global_2528542.f_7), 0);
		}
	}
	if ((unk_0x0E4018692D92041D(Local_103.f_23, 22) || unk_0x0E4018692D92041D(Local_103.f_23, 23)) || unk_0x0E4018692D92041D(Local_103.f_23, 7))
	{
		unk_0x4AE93B307FDB2941(unk_0x95B959F18401C09A());
	}
}

int func_129(vector3 vParam0, char* sParam1, char* sParam2)
{
	int iVar0;
	
	if (!unk_0x786AF4A44E1B5B4B(sParam1))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (!unk_0xCE3CFF625BEBAA04(&(Global_2528542.f_3959[iVar0 /*26*/].f_4), sParam1))
			{
				if (unk_0x786AF4A44E1B5B4B(&(Global_2528542.f_3959[iVar0 /*26*/].f_4)))
				{
					Global_2528542.f_3959[iVar0 /*26*/] = 1;
					Global_2528542.f_3959[iVar0 /*26*/].f_1 = { vParam0 };
					StringCopy(&(Global_2528542.f_3959[iVar0 /*26*/].f_4), sParam1, 24);
					StringCopy(&(Global_2528542.f_3959[iVar0 /*26*/].f_10), sParam2, 64);
					return 1;
				}
			}
			else if (!func_130(Global_2528542.f_3959[iVar0 /*26*/].f_1, vParam0, 0))
			{
				Global_2528542.f_3959[iVar0 /*26*/] = 1;
				Global_2528542.f_3959[iVar0 /*26*/].f_1 = { vParam0 };
				StringCopy(&(Global_2528542.f_3959[iVar0 /*26*/].f_4), sParam1, 24);
				StringCopy(&(Global_2528542.f_3959[iVar0 /*26*/].f_10), sParam2, 64);
				return 1;
			}
			else
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_130(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

void func_131(vector3 vParam0, char* sParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0x786AF4A44E1B5B4B(sParam1))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (unk_0xCE3CFF625BEBAA04(&(Global_2528542.f_3959[iVar0 /*26*/].f_4), sParam1))
			{
				if (iParam2 || func_130(Global_2528542.f_3959[iVar0 /*26*/].f_1, vParam0, 0))
				{
					Global_2528542.f_3959[iVar0 /*26*/] = 0;
					Global_2528542.f_3959[iVar0 /*26*/].f_1 = { 0f, 0f, 0f };
					StringCopy(&(Global_2528542.f_3959[iVar0 /*26*/].f_4), "", 24);
					StringCopy(&(Global_2528542.f_3959[iVar0 /*26*/].f_10), "", 64);
				}
			}
			iVar0++;
		}
	}
}

char* func_132(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
	return "";
}

void func_133()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xCE689A8E8C42ED78(&(Local_104[unk_0x72B85B341ADBE9DE() /*10*/]), 28);
	if (!func_387(Local_103) && func_46(unk_0x95B959F18401C09A(), 1, 1))
	{
		if (unk_0x96C4B46F194803A7(unk_0x33CD235DF1E6A94E(), &iVar0, 1))
		{
			if ((((iVar0 != joaat("weapon_unarmed") && iVar0 != joaat("object")) && iVar0 != joaat("weapon_flare")) && iVar0 != joaat("weapon_snowball")) && iVar0 != joaat("weapon_flashlight"))
			{
				if ((((unk_0x5801F241F822A181(unk_0x95B959F18401C09A()) && unk_0x910FF514D7BC5674(unk_0x33CD235DF1E6A94E(), unk_0xBB28786B7F552D0B(Local_103), 45f)) && unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), unk_0xBB28786B7F552D0B(Local_103), 5f, 5f, 2f, 0, 1, 0)) || unk_0xAC6A512C64D9A9C0(unk_0x95B959F18401C09A(), unk_0xBB28786B7F552D0B(Local_103))) || unk_0xC2ECB90E2DFA5802(unk_0x95B959F18401C09A(), unk_0xBB28786B7F552D0B(Local_103)))
				{
					if (!(func_167(0) || func_166()) && ((!func_137(unk_0x95B959F18401C09A()) || func_95(unk_0x95B959F18401C09A()) == 154) || func_95(unk_0x95B959F18401C09A()) == 171))
					{
						if (func_135(unk_0x95B959F18401C09A(), unk_0xBB28786B7F552D0B(Local_103)) || unk_0xBA29D5A53F3F8776(unk_0x95B959F18401C09A()))
						{
							if (!unk_0x0E4018692D92041D(Local_104[unk_0x72B85B341ADBE9DE() /*10*/], 1))
							{
								func_134(func_8(unk_0xEB9DC13235C0B345(unk_0x7661A555C1463336())));
								unk_0x8950ED5730F62EE8(&(Local_104[unk_0x72B85B341ADBE9DE() /*10*/]), 1);
							}
							if (!unk_0x0E4018692D92041D(Local_104[unk_0x72B85B341ADBE9DE() /*10*/], 8))
							{
								unk_0x8950ED5730F62EE8(&(Local_104[unk_0x72B85B341ADBE9DE() /*10*/]), 8);
							}
						}
						unk_0x8950ED5730F62EE8(&(Local_104[unk_0x72B85B341ADBE9DE() /*10*/]), 28);
					}
				}
			}
		}
	}
	if (!unk_0x0E4018692D92041D(Local_105.f_52, 28))
	{
		if (unk_0x0E4018692D92041D(Local_104[unk_0x72B85B341ADBE9DE() /*10*/], 28))
		{
			if (unk_0x96C4B46F194803A7(unk_0x33CD235DF1E6A94E(), &iVar1, 1))
			{
				if (iVar1 != 0 && iVar1 != joaat("weapon_snowball"))
				{
					iVar2 = unk_0xC996D6D89A97A11A(iVar1);
					if (iVar2 == 416676503)
					{
						sLocal_109 = "hold_up_head_additive_pistol";
						unk_0x108754262311D34F(unk_0x33CD235DF1E6A94E(), "mp_am_hold_up", sLocal_109, 8f, -8f, -1, 305, 0, 0, 0, 0);
					}
					else if ((((iVar2 == 1159398588 || iVar2 == 970310034) || iVar2 == 860033945) || iVar2 == -1212426201) || iVar2 == -957766203)
					{
						sLocal_109 = "hold_up_head_additive_rifle";
						unk_0x108754262311D34F(unk_0x33CD235DF1E6A94E(), "mp_am_hold_up", sLocal_109, 8f, -8f, -1, 305, 0, 0, 0, 0);
					}
					else
					{
						sLocal_109 = "";
					}
					unk_0x8950ED5730F62EE8(&(Local_105.f_52), 28);
				}
			}
		}
	}
	else if (!unk_0x0E4018692D92041D(Local_104[unk_0x72B85B341ADBE9DE() /*10*/], 28) || unk_0x5DACF31D3AC5ED8D(unk_0x33CD235DF1E6A94E()))
	{
		if (!unk_0x786AF4A44E1B5B4B(sLocal_109))
		{
			if (unk_0x1CE8F0A08E65CA6A(unk_0x33CD235DF1E6A94E(), "mp_am_hold_up", sLocal_109, 3))
			{
				unk_0xCCAF0916949DD646(unk_0x33CD235DF1E6A94E(), "mp_am_hold_up", sLocal_109, -8f);
			}
		}
		unk_0xCE689A8E8C42ED78(&(Local_105.f_52), 28);
	}
	if (unk_0x0E4018692D92041D(Local_103.f_25, 1))
	{
		if (!unk_0x0E4018692D92041D(Local_104[unk_0x72B85B341ADBE9DE() /*10*/].f_5, 3))
		{
			if (!func_387(Local_103.f_15) && func_46(unk_0x95B959F18401C09A(), 1, 1))
			{
				if (unk_0x96C4B46F194803A7(unk_0x33CD235DF1E6A94E(), &iVar3, 1))
				{
					if ((((iVar3 != joaat("weapon_unarmed") && iVar3 != joaat("object")) && iVar3 != joaat("weapon_flare")) && iVar3 != joaat("weapon_snowball")) && !(func_167(0) || func_166()))
					{
						if (unk_0xAC6A512C64D9A9C0(unk_0x95B959F18401C09A(), unk_0xBB28786B7F552D0B(Local_103.f_15)) || unk_0xC2ECB90E2DFA5802(unk_0x95B959F18401C09A(), unk_0xBB28786B7F552D0B(Local_103.f_15)))
						{
							if (func_135(unk_0x95B959F18401C09A(), unk_0xBB28786B7F552D0B(Local_103.f_15)) || unk_0xBA29D5A53F3F8776(unk_0x95B959F18401C09A()))
							{
								unk_0x8950ED5730F62EE8(&(Local_104[unk_0x72B85B341ADBE9DE() /*10*/].f_5), 3);
							}
						}
					}
				}
			}
		}
	}
}

void func_134(int iParam0)
{
	struct<2> Var0;
	
	Var0 = -1667825764;
	Var0.f_1 = unk_0x95B959F18401C09A();
	if (!iParam0 == 0)
	{
		unk_0x09269A9CFC145847(1, &Var0, 2, iParam0);
	}
}

int func_135(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	if (func_46(iParam0, 1, 1))
	{
		vVar0 = { func_87(iParam0) };
	}
	if (!unk_0xBC2FC12AD0FBF72E(iParam1))
	{
		vVar1 = { unk_0xFBB1F99A825CAB09(iParam1, 1) };
	}
	vVar3 = { vVar1 - vVar0 };
	if (!unk_0xBC2FC12AD0FBF72E(iParam1))
	{
		vVar2 = { unk_0x2CA911E7569D12EA(iParam1, 0f, 7f, 0f) };
		vVar4 = { vVar2 - vVar1 };
	}
	vVar3.z = 0f;
	vVar4.z = 0f;
	fVar5 = func_136(vVar3, vVar4);
	if (fVar5 < -0.1f)
	{
		return 1;
	}
	return 0;
}

float func_136(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

int func_137(int iParam0)
{
	if (func_40(iParam0))
	{
		return 1;
	}
	if (func_138(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_138(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_139(iParam0, 9);
	}
	return 0;
}

bool func_139(int iParam0, int iParam1)
{
	return unk_0x0E4018692D92041D(Global_1626536[iParam0 /*603*/].f_11.f_4, iParam1);
}

void func_140(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x95B959F18401C09A() != Global_2528542.f_4814 && !func_38(unk_0x95B959F18401C09A()))
	{
		if (!unk_0x0E4018692D92041D(Local_105.f_52, 6))
		{
			if (iParam0 == 1)
			{
				if (unk_0x96C4B46F194803A7(unk_0x33CD235DF1E6A94E(), &iVar2, 1))
				{
					if ((((iVar2 != joaat("weapon_unarmed") && iVar2 != 0) && iVar2 != joaat("object")) && iVar2 != joaat("weapon_flare")) && iVar2 != joaat("weapon_snowball"))
					{
						if (!unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), vLocal_111, 2.5f, 2.5f, 3f, 0, 1, 0))
						{
							iVar1 = 1;
						}
						iVar0 = 1;
					}
				}
				if ((((iVar1 == 1 || unk_0x0E4018692D92041D(Local_104[unk_0x72B85B341ADBE9DE() /*10*/], 5)) || (iVar0 == 1 && Local_103.f_3 >= 3)) || (iVar0 == 1 && unk_0x0E4018692D92041D(Local_103.f_24, 16))) || unk_0x0E4018692D92041D(Local_104[unk_0x72B85B341ADBE9DE() /*10*/], 12))
				{
					if (((!unk_0x0E4018692D92041D(Local_103.f_23, 12) || Local_103.f_3 >= 3) || unk_0x0E4018692D92041D(Local_104[unk_0x72B85B341ADBE9DE() /*10*/], 12)) || (iVar0 == 1 && unk_0x0E4018692D92041D(Local_103.f_24, 16)))
					{
						Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_36++;
						func_14(&(Global_2437364.f_3733));
						func_19(&(Global_2437364.f_3733), 0, 0);
						if (Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_36 <= 2)
						{
							if (func_143())
							{
								if (func_142() < 2)
								{
									unk_0xD155487E7E231D33(unk_0x95B959F18401C09A(), 37, unk_0xC223020D5BE76715(func_142()));
								}
								else
								{
									unk_0xD155487E7E231D33(unk_0x95B959F18401C09A(), 37, unk_0xC223020D5BE76715(2));
								}
							}
							else
							{
								unk_0xD155487E7E231D33(unk_0x95B959F18401C09A(), 37, unk_0xC223020D5BE76715(2));
							}
						}
						else if (Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_36 >= 5)
						{
							if (func_143())
							{
								if (func_142() < 3)
								{
									unk_0xD155487E7E231D33(unk_0x95B959F18401C09A(), 37, unk_0xC223020D5BE76715(func_142()));
								}
								else
								{
									unk_0xD155487E7E231D33(unk_0x95B959F18401C09A(), 37, unk_0xC223020D5BE76715(3));
								}
							}
							else
							{
								unk_0xD155487E7E231D33(unk_0x95B959F18401C09A(), 37, unk_0xC223020D5BE76715(4));
							}
						}
						else if (func_143())
						{
							if (func_142() < 3)
							{
								unk_0xD155487E7E231D33(unk_0x95B959F18401C09A(), 37, unk_0xC223020D5BE76715(func_142()));
							}
							else
							{
								unk_0xD155487E7E231D33(unk_0x95B959F18401C09A(), 37, unk_0xC223020D5BE76715(3));
							}
						}
						else
						{
							unk_0xD155487E7E231D33(unk_0x95B959F18401C09A(), 37, unk_0xC223020D5BE76715(3));
						}
						if (!unk_0x0E4018692D92041D(Local_104[unk_0x72B85B341ADBE9DE() /*10*/], 1))
						{
							unk_0x8950ED5730F62EE8(&(Local_104[unk_0x72B85B341ADBE9DE() /*10*/]), 2);
						}
						unk_0x8950ED5730F62EE8(&(Local_105.f_52), 6);
						unk_0x8950ED5730F62EE8(&(Local_104[unk_0x72B85B341ADBE9DE() /*10*/]), 25);
					}
				}
			}
			if (!unk_0x0E4018692D92041D(Local_105.f_52, 27) && !unk_0x0E4018692D92041D(Local_105.f_52, 6))
			{
				if (unk_0xA08B8AEC5B1A55D6(unk_0x33CD235DF1E6A94E()))
				{
					if (func_18(&uLocal_137, 2000, 0) || unk_0xE7A1E8F9E47DE4A7(unk_0x33CD235DF1E6A94E()))
					{
						unk_0xD155487E7E231D33(unk_0x95B959F18401C09A(), 37, unk_0xC223020D5BE76715(1));
						unk_0x8950ED5730F62EE8(&(Local_105.f_52), 27);
						unk_0x8950ED5730F62EE8(&(Local_104[unk_0x72B85B341ADBE9DE() /*10*/]), 27);
						unk_0x8950ED5730F62EE8(&(Local_104[unk_0x72B85B341ADBE9DE() /*10*/]), 25);
						if (!unk_0x0E4018692D92041D(Local_104[unk_0x72B85B341ADBE9DE() /*10*/], 1))
						{
							unk_0x8950ED5730F62EE8(&(Local_104[unk_0x72B85B341ADBE9DE() /*10*/]), 2);
						}
					}
				}
				else if (func_141(&uLocal_137))
				{
					func_14(&uLocal_137);
				}
			}
		}
		if (!unk_0x0E4018692D92041D(Local_105.f_52, 24))
		{
			if (unk_0x0E4018692D92041D(Local_105.f_52, 31))
			{
				if (func_387(Local_103))
				{
					if (func_143())
					{
						if (func_142() < 3)
						{
							unk_0xD155487E7E231D33(unk_0x95B959F18401C09A(), 37, unk_0xC223020D5BE76715(func_142()));
						}
						else
						{
							unk_0xD155487E7E231D33(unk_0x95B959F18401C09A(), 37, unk_0xC223020D5BE76715(3));
						}
					}
					else
					{
						unk_0xD155487E7E231D33(unk_0x95B959F18401C09A(), 13, unk_0xC223020D5BE76715(3));
					}
					unk_0x8950ED5730F62EE8(&(Local_105.f_52), 24);
					if (!unk_0x0E4018692D92041D(Local_104[unk_0x72B85B341ADBE9DE() /*10*/], 1))
					{
						unk_0x8950ED5730F62EE8(&(Local_104[unk_0x72B85B341ADBE9DE() /*10*/]), 2);
					}
				}
			}
		}
	}
}

bool func_141(var uParam0)
{
	return uParam0->f_1;
}

int func_142()
{
	return Global_262145.f_12488;
}

int func_143()
{
	if (func_138(unk_0x95B959F18401C09A()) && func_95(unk_0x95B959F18401C09A()) == 154)
	{
		return 1;
	}
	return 0;
}

void func_144()
{
	int iVar0;
	int iVar1;
	
	if (func_46(unk_0x95B959F18401C09A(), 1, 1))
	{
		if (!unk_0x0E4018692D92041D(Local_105.f_52, 23) && unk_0x0E4018692D92041D(Local_103.f_23, 17))
		{
			if (!func_387(Local_103))
			{
				iLocal_114 = unk_0x3F2F21BCB3761848(Local_103.f_29);
				if (iLocal_114 != -1)
				{
					if (unk_0xDB4C79A9697E6A55(iLocal_114))
					{
						if ((!unk_0x0E4018692D92041D(Global_1648421, 15) && func_149()) && func_148())
						{
							unk_0x8950ED5730F62EE8(&Global_1648421, 15);
						}
						if (!unk_0xFAC8F20FBC764F4D())
						{
							iVar0 = func_125(1190, -1, 0);
							if (!unk_0x0E4018692D92041D(iVar0, 3))
							{
								if (unk_0x4EDDCE9AAE0FC976(iLocal_114) < 0.4f && unk_0x65F35477FEAD6F0F(unk_0x33CD235DF1E6A94E()) == iLocal_139)
								{
									func_147("FHU_HELP3", -1);
									unk_0x8950ED5730F62EE8(&iVar0, 3);
									func_122(1190, iVar0, -1, 1, 0);
								}
							}
							else if (!unk_0x0E4018692D92041D(iVar0, 5) || !unk_0x0E4018692D92041D(iVar0, 6))
							{
								if (unk_0x4EDDCE9AAE0FC976(iLocal_114) < 0.7f && unk_0x65F35477FEAD6F0F(unk_0x33CD235DF1E6A94E()) == iLocal_139)
								{
									func_147("FHU_HELP4", -1);
									unk_0x8950ED5730F62EE8(&iVar0, 5);
									func_122(1190, iVar0, -1, 1, 0);
									unk_0x8950ED5730F62EE8(&(Local_105.f_52), 23);
								}
							}
							else
							{
								unk_0x8950ED5730F62EE8(&(Local_105.f_52), 23);
							}
						}
					}
				}
			}
		}
		if (((((((((!func_39(unk_0x95B959F18401C09A(), 146) && !func_146()) && func_95(unk_0x95B959F18401C09A()) != 167) && func_95(unk_0x95B959F18401C09A()) != 190) && func_95(unk_0x95B959F18401C09A()) != 191) && func_95(unk_0x95B959F18401C09A()) != 250) && func_95(unk_0x95B959F18401C09A()) != 237) && func_95(unk_0x95B959F18401C09A()) != 238) && !func_38(unk_0x95B959F18401C09A())) && (!func_137(unk_0x95B959F18401C09A()) || func_95(unk_0x95B959F18401C09A()) == 154))
		{
			if (!unk_0x0E4018692D92041D(Local_105.f_53, 1))
			{
				if (!unk_0xFAC8F20FBC764F4D())
				{
					if (((((func_387(Local_103) || Local_103.f_3 > 7) && !unk_0x0E4018692D92041D(Local_103.f_23, 20)) && !unk_0x0E4018692D92041D(Local_103.f_23, 11)) && !unk_0x0E4018692D92041D(Local_104[unk_0x72B85B341ADBE9DE() /*10*/], 5)) && unk_0x1D05F456626EB273(vLocal_115, 1.5f) == 0)
					{
						iVar1 = func_125(1190, -1, 0);
						if (!unk_0x0E4018692D92041D(iVar1, 20) || !unk_0x0E4018692D92041D(iVar1, 21))
						{
							func_147("FHU_HELPM", -1);
							if (!unk_0x0E4018692D92041D(iVar1, 20))
							{
								unk_0x8950ED5730F62EE8(&iVar1, 20);
							}
							else
							{
								unk_0x8950ED5730F62EE8(&iVar1, 21);
							}
							func_122(1190, iVar1, -1, 1, 0);
							unk_0x8950ED5730F62EE8(&(Local_105.f_53), 1);
						}
						else
						{
							unk_0x8950ED5730F62EE8(&(Local_105.f_53), 1);
						}
					}
				}
			}
			else if (func_145("FHU_HELPM"))
			{
				if ((unk_0x0E4018692D92041D(Local_103.f_23, 20) || unk_0x0E4018692D92041D(Local_103.f_23, 11)) || unk_0x0E4018692D92041D(Local_104[unk_0x72B85B341ADBE9DE() /*10*/], 5))
				{
					unk_0xEDF90B96BED57BCE(1);
				}
			}
		}
	}
}

int func_145(char* sParam0)
{
	unk_0x6D39881CA5436178(sParam0);
	return unk_0xA32C2C4DF096C08A(0);
}

bool func_146()
{
	return Global_1573342;
}

void func_147(char* sParam0, int iParam1)
{
	unk_0x37621D6689F9E3C3(sParam0);
	unk_0x092150016C06C431(0, 0, 1, iParam1);
}

bool func_148()
{
	return unk_0x0E4018692D92041D(Global_2528542.f_1723, 21);
}

bool func_149()
{
	return unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_146, 3);
}

void func_150()
{
	float fVar0;
	float fVar1;
	
	if (Local_103.f_3 == 4)
	{
		if (func_46(unk_0x95B959F18401C09A(), 1, 1))
		{
			if (!func_387(Local_103))
			{
				iLocal_114 = unk_0x3F2F21BCB3761848(Local_103.f_29);
				if (iLocal_114 != -1)
				{
					if (unk_0xDB4C79A9697E6A55(iLocal_114))
					{
						fVar0 = unk_0x4EDDCE9AAE0FC976(iLocal_114);
						fVar0 = (fVar0 * 1000f);
						if (fVar0 <= 890f)
						{
							func_151(round(fVar0), 890, "HUP_PROG", func_155(unk_0x12D3B4C76D4AAB00(unk_0x95B959F18401C09A())), 0, 1, 13);
						}
						fVar1 = unk_0xF874BDEF39A98F7D(unk_0x95B959F18401C09A());
						fVar1 = (fVar1 - 0.3f);
						if (fVar1 < 0f)
						{
							fVar1 = 0f;
						}
						fVar1 = (fVar1 * 4f);
						Local_104[unk_0x72B85B341ADBE9DE() /*10*/].f_6 = fVar1;
					}
				}
			}
		}
	}
}

void func_151(int iParam0, int iParam1, char* sParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	func_152(iParam0, iParam1, sParam2, uParam3, iParam4, iParam6, -1f, -1f, 0, iParam5, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1);
}

void func_152(var uParam0, var uParam1, char* sParam2, var uParam3, var uParam4, var uParam5, float fParam6, float fParam7, int iParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_154(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1373453.f_1 = 1;
		func_153(0, iVar0);
		Global_1373453.f_1114[iVar0] = uParam0;
		Global_1373453.f_1114.f_11[iVar0] = uParam1;
		StringCopy(&(Global_1373453.f_1114.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1373453.f_1114.f_194[iVar0] = uParam3;
		Global_1373453.f_1114.f_183[iVar0] = uParam4;
		Global_1373453.f_1114.f_216[iVar0] = uParam5;
		Global_1373453.f_1114.f_227[iVar0 /*3*/] = fParam6;
		Global_1373453.f_1114.f_227[iVar0 /*3*/].f_1 = fParam7;
		Global_1373453.f_1114.f_258[iVar0] = iParam8;
		Global_1373453.f_1114.f_269[iVar0] = uParam9;
		Global_1373453.f_1114.f_312[iVar0] = iParam10;
		Global_1373453.f_1114.f_323[iVar0] = iParam11;
		Global_1373453.f_1114.f_334[iVar0] = iParam12;
		Global_1373453.f_1114.f_345[iVar0] = iParam13;
		Global_1373453.f_1109 = 1;
		Global_1373453.f_1114.f_356[iVar0] = iParam14;
		Global_1373453.f_1114.f_367[iVar0] = iParam15;
		Global_1373453.f_1114.f_378[iVar0] = iParam16;
		Global_1373453.f_1114.f_389[iVar0] = iParam17;
		Global_1373453.f_1114.f_400[iVar0] = iParam18;
		Global_1373453.f_1114.f_411[iVar0] = iParam19;
		Global_1373453.f_1114.f_422[iVar0] = iParam20;
		Global_1373453.f_1114.f_433[iVar0] = iParam21;
		Global_1373453.f_1114.f_444[iVar0] = iParam22;
		Global_1373453.f_1114.f_455[iVar0] = iParam23;
		Global_1373453.f_1114.f_466[iVar0] = iParam24;
		Global_1373453.f_1114.f_205[iVar0] = iParam25;
	}
}

void func_153(int iParam0, int iParam1)
{
	unk_0x8950ED5730F62EE8(&(Global_1373453.f_6184[iParam0]), iParam1);
}

bool func_154(int iParam0, int iParam1)
{
	return unk_0x0E4018692D92041D(Global_1373453.f_6184[iParam0], iParam1);
}

int func_155(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	return 116;
}

void func_156()
{
	if (!unk_0x0E4018692D92041D(Local_105.f_53, 2))
	{
		unk_0x0483D0035D6E46FD("oddjobs@shop_robbery@rob_till");
		unk_0x0483D0035D6E46FD(func_157());
		if (unk_0xE9CCF312047EBEE0("oddjobs@shop_robbery@rob_till") && unk_0xE9CCF312047EBEE0(func_157()))
		{
			unk_0x8950ED5730F62EE8(&(Local_105.f_53), 2);
		}
	}
}

char* func_157()
{
	if (func_158(unk_0x95B959F18401C09A()))
	{
		return "anim@am_hold_up@male";
	}
	return "anim@am_hold_up@female";
}

int func_158(int iParam0)
{
	if (!unk_0xB331FCEB94EB05C8())
	{
		return 1;
	}
	return Global_2424047[iParam0 /*416*/].f_230;
}

int func_159(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { 0f, 0f, 0f };
	vVar1 = { 0f, 0f, 0f };
	fVar2 = 0f;
	func_160(iParam1, &vVar0, &vVar1, &fVar2);
	if (unk_0xD4B4F68F3449CBEC(iParam0, vVar0, vVar1, fVar2, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

void func_160(int iParam0, var uParam1, var uParam2, float fParam3)
{
	if (iParam0 == 0)
	{
		*uParam1 = { 1390.033f, 3605.529f, 33.98091f };
		*uParam2 = { 1394.412f, 3607.156f, 36.38288f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 1)
	{
		*uParam1 = { -3041.675f, 583.5931f, 6.908931f };
		*uParam2 = { -3037.284f, 585.0375f, 9.521532f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 2)
	{
		*uParam1 = { -3245.184f, 1000.124f, 11.83071f };
		*uParam2 = { -3240.504f, 999.7783f, 14.46645f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 3)
	{
		*uParam1 = { 549.5332f, 2668.464f, 41.15651f };
		*uParam2 = { 548.9114f, 2673.108f, 43.7766f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 4)
	{
		*uParam1 = { 2554.316f, 380.8569f, 107.623f };
		*uParam2 = { 2558.98f, 380.6908f, 110.2684f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 5)
	{
		*uParam1 = { 2675.476f, 3280.807f, 54.24115f };
		*uParam2 = { 2679.577f, 3278.526f, 56.8955f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 6)
	{
		*uParam1 = { 1729.145f, 6417.834f, 34.03724f };
		*uParam2 = { 1727.07f, 6413.635f, 36.66442f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 7)
	{
		*uParam1 = { 1958.61f, 3742.512f, 31.34376f };
		*uParam2 = { 1960.958f, 3738.465f, 33.98634f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 8)
	{
		*uParam1 = { 24.51093f, -1344.449f, 28.49703f };
		*uParam2 = { 24.52224f, -1349.084f, 31.14272f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 9)
	{
		*uParam1 = { 373.296f, 329.2379f, 102.5664f };
		*uParam2 = { 372.1347f, 324.6985f, 105.214f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 10)
	{
		*uParam1 = { 1168.183f, 2711.203f, 37.06316f };
		*uParam2 = { 1163.144f, 2711.246f, 40.16688f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 11)
	{
		*uParam1 = { -2966.142f, 388.6418f, 14.04331f };
		*uParam2 = { -2965.812f, 393.6473f, 17.17248f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 12)
	{
		*uParam1 = { -1223.599f, -909.8984f, 11.32635f };
		*uParam2 = { -1219.443f, -907.0756f, 14.45929f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 13)
	{
		*uParam1 = { 1133.524f, -980.3087f, 45.41582f };
		*uParam2 = { 1134.22f, -985.284f, 48.53235f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 14)
	{
		*uParam1 = { -1484.413f, -379.3236f, 39.16341f };
		*uParam2 = { -1487.954f, -375.7666f, 42.28885f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 15)
	{
		*uParam1 = { 1699.447f, 4921.57f, 41.06366f };
		*uParam2 = { 1695.64f, 4924.245f, 44.22165f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 16)
	{
		*uParam1 = { -705.7869f, -911.6997f, 18.2156f };
		*uParam2 = { -705.7026f, -916.374f, 21.33545f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 17)
	{
		*uParam1 = { -45.26995f, -1756.669f, 28.42101f };
		*uParam2 = { -48.26036f, -1760.285f, 31.56342f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 18)
	{
		*uParam1 = { 1164.697f, -320.7587f, 68.2051f };
		*uParam2 = { 1165.463f, -325.0899f, 71.37893f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 19)
	{
		*uParam1 = { -1821.205f, 795.8699f, 137.0893f };
		*uParam2 = { -1818.041f, 792.3982f, 140.1836f };
		*fParam3 = 2.25f;
	}
}

void func_161(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_163(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17411.f_8353)
	{
		unk_0x019859CB72B1DB4C(15);
		Global_17411.f_8353 = 0;
	}
	unk_0x5E1FA2076D53C3F5(0f);
	if (Global_17411.f_5628[iVar0])
	{
		unk_0xB073DB452891DC0B(9, 0);
		Global_17411.f_5628[iVar0] = 0;
	}
	if (Global_17411.f_5614[iVar0])
	{
		unk_0x30F6F0B876E12AD8("CommonMenu");
		Global_17411.f_5614[iVar0] = 0;
	}
	if (Global_17411.f_5621[iVar0])
	{
		unk_0x30F6F0B876E12AD8("MPShopSale");
		Global_17411.f_5621[iVar0] = 0;
	}
	if (bParam0)
	{
		func_162(&(Global_17411.f_5660[iVar0 /*10*/]));
		Global_17411.f_5721[iVar0] = 0;
	}
	else
	{
		Global_17411.f_5721[iVar0] = 0;
	}
}

void func_162(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0x11AE7F6A404414C9(*uParam0))
		{
			unk_0x83A1D480DB0B52CC(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_163(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -1)
	{
		if (unk_0xB331FCEB94EB05C8() && unk_0xE36862B47CD70685())
		{
			iParam2 = unk_0x3031F3812E92B62B();
		}
	}
	StringCopy(&cVar0, unk_0xD178EF744F20B712(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar1 = unk_0x36163153849DFDA1(&cVar0);
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (Global_17411.f_5721[iVar2] == iVar1)
		{
			*uParam0 = iVar2;
			return 1;
		}
		else if (Global_17411.f_5721[iVar2] == 0)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != -1)
		{
			Global_17411.f_5721[iVar3] = iVar1;
			*uParam0 = iVar3;
			return 1;
		}
	}
	return 0;
}

bool func_164(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_163(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_17411.f_5635[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0x786AF4A44E1B5B4B(&(Global_17411.f_5635[iVar0 /*4*/])))
	{
		unk_0x2EE8D1440C9060EF(&(Global_17411.f_5635[iVar0 /*4*/]), 9);
		Global_17411.f_5628[iVar0] = 1;
		if (!unk_0x65F173513F5EF79C(&(Global_17411.f_5635[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0x0A06DEFFF267C21E("CommonMenu", 0);
	Global_17411.f_5614[iVar0] = 1;
	if (!unk_0xD83C9F072D059CC4("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0x0A06DEFFF267C21E("MPShopSale", 0);
		Global_17411.f_5621[iVar0] = 1;
		if (!unk_0xD83C9F072D059CC4("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_17411.f_5660[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_165(&(Global_17411.f_5660[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_165(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0x11AE7F6A404414C9(*uParam0))
			{
				*uParam0 = unk_0x199B24FF79A52CCF(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x11AE7F6A404414C9(*uParam0))
					{
						uParam0->f_8 = unk_0xE3903F59E2F22150();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0xE3903F59E2F22150();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x11AE7F6A404414C9(*uParam0))
			{
				uParam0->f_8 = unk_0xE3903F59E2F22150();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x11AE7F6A404414C9(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

int func_166()
{
	if (unk_0x1BCDA92AD0A7835B(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_167(int iParam0)
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

void func_168()
{
	if (unk_0x95B959F18401C09A() != Global_2528542.f_4814 && !func_38(unk_0x95B959F18401C09A()))
	{
		if (!unk_0x0E4018692D92041D(Local_105.f_52, 24))
		{
			if (Local_103.f_72 == unk_0x95B959F18401C09A() || (unk_0x0E4018692D92041D(Local_105.f_52, 31) && unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), vLocal_145, 20f, 20f, 20f, 0, 1, 0)))
			{
				if (func_387(Local_103))
				{
					if (func_143())
					{
						if (func_142() < 3)
						{
							unk_0xD155487E7E231D33(unk_0x95B959F18401C09A(), 37, unk_0xC223020D5BE76715(func_142()));
						}
						else
						{
							unk_0xD155487E7E231D33(unk_0x95B959F18401C09A(), 37, unk_0xC223020D5BE76715(3));
						}
					}
					else
					{
						unk_0xD155487E7E231D33(unk_0x95B959F18401C09A(), 13, unk_0xC223020D5BE76715(3));
					}
					unk_0x8950ED5730F62EE8(&(Local_105.f_52), 24);
					if (!unk_0x0E4018692D92041D(Local_104[unk_0x72B85B341ADBE9DE() /*10*/], 1))
					{
						unk_0x8950ED5730F62EE8(&(Local_104[unk_0x72B85B341ADBE9DE() /*10*/]), 2);
					}
				}
			}
		}
	}
}

int func_169()
{
	if (!unk_0x0E4018692D92041D(Local_103.f_25, 0))
	{
		return 0;
	}
	if (func_387(Local_103.f_15))
	{
		if (unk_0xE38E3CF1625A4145(iLocal_333))
		{
			unk_0x1ABDB383C83A336A(&iLocal_333);
		}
		return 0;
	}
	if (Local_103.f_66 == 4)
	{
		if (!unk_0xE38E3CF1625A4145(iLocal_333))
		{
			iLocal_333 = unk_0x8848A15CBDADDC60(unk_0xBB28786B7F552D0B(Local_103.f_15));
			unk_0xB9E84A421C105943(iLocal_333, 1);
			unk_0xCE5C49921A521962(iLocal_333, 0.7f);
		}
	}
	if (!unk_0x6F3D61B58C7B4025(Local_103.f_15))
	{
		return 0;
	}
	switch (Local_103.f_66)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			if (unk_0xD76D6BCC14B95CE1(unk_0xBB28786B7F552D0B(Local_103.f_15), 713668775) != 0)
			{
				if (unk_0xD76D6BCC14B95CE1(unk_0xBB28786B7F552D0B(Local_103.f_15), 713668775) != 1)
				{
					if (func_46(unk_0x95B959F18401C09A(), 1, 1))
					{
						unk_0x3C0F6044C54799A8(unk_0xBB28786B7F552D0B(Local_103.f_15), unk_0x33CD235DF1E6A94E(), -1, 4f, 2f, 1073741824, 0);
					}
				}
			}
			break;
		
		case 3:
			if (!unk_0x0E4018692D92041D(Local_103.f_25, 5) && !unk_0x0E4018692D92041D(Local_104[unk_0x72B85B341ADBE9DE() /*10*/].f_5, 0))
			{
				if (unk_0xD76D6BCC14B95CE1(unk_0xBB28786B7F552D0B(Local_103.f_15), 1227113341) != 0 && unk_0xD76D6BCC14B95CE1(unk_0xBB28786B7F552D0B(Local_103.f_15), 1227113341) != 1)
				{
					unk_0x11C4AF4137F2A4B5(unk_0xBB28786B7F552D0B(Local_103.f_15), unk_0x33CD235DF1E6A94E(), 10000);
					unk_0x8950ED5730F62EE8(&(Local_104[unk_0x72B85B341ADBE9DE() /*10*/].f_5), 0);
				}
			}
			if ((!unk_0x0E4018692D92041D(Local_103.f_25, 6) && !unk_0x0E4018692D92041D(Local_104[unk_0x72B85B341ADBE9DE() /*10*/].f_5, 1)) && !func_170())
			{
				func_386(&uLocal_151, 4, unk_0xBB28786B7F552D0B(Local_103.f_15), "StoreHero", 1, 0);
				unk_0xAEED0213982928AC(unk_0xBB28786B7F552D0B(Local_103.f_15), "GENERIC_INSULT_HIGH", "SPEECH_PARAMS_FORCE", 1);
				unk_0x8950ED5730F62EE8(&(Local_104[unk_0x72B85B341ADBE9DE() /*10*/].f_5), 1);
			}
			break;
		
		case 4:
			if ((!unk_0x0E4018692D92041D(Local_103.f_25, 7) && !unk_0x0E4018692D92041D(Local_104[unk_0x72B85B341ADBE9DE() /*10*/].f_5, 2)) && !func_170())
			{
				func_386(&uLocal_151, 4, unk_0xBB28786B7F552D0B(Local_103.f_15), "StoreHero", 1, 0);
				unk_0xAEED0213982928AC(unk_0xBB28786B7F552D0B(Local_103.f_15), "GENERIC_FUCK_YOU", "SPEECH_PARAMS_FORCE", 1);
				unk_0x8950ED5730F62EE8(&(Local_104[unk_0x72B85B341ADBE9DE() /*10*/].f_5), 2);
			}
			if (unk_0x0E4018692D92041D(Local_103.f_25, 7) || unk_0x0E4018692D92041D(Local_104[unk_0x72B85B341ADBE9DE() /*10*/].f_5, 2))
			{
				if (unk_0xD76D6BCC14B95CE1(unk_0xBB28786B7F552D0B(Local_103.f_15), -1442466670) != 0 && unk_0xD76D6BCC14B95CE1(unk_0xBB28786B7F552D0B(Local_103.f_15), -1442466670) != 1)
				{
					unk_0xED68CDDDE25A144E(unk_0xBB28786B7F552D0B(Local_103.f_15));
					unk_0x0648A75D3F60E864(unk_0xBB28786B7F552D0B(Local_103.f_15), Global_1574993);
					unk_0x77631BBB824DF500(unk_0xBB28786B7F552D0B(Local_103.f_15), 20f, 0);
					unk_0x897EF720254BBEA3(unk_0xBB28786B7F552D0B(Local_103.f_15), 1);
				}
			}
			break;
		
		case 5:
			if (unk_0xD76D6BCC14B95CE1(unk_0xBB28786B7F552D0B(Local_103.f_15), 242628503) != 0 && unk_0xD76D6BCC14B95CE1(unk_0xBB28786B7F552D0B(Local_103.f_15), 242628503) != 1)
			{
				unk_0xED68CDDDE25A144E(unk_0xBB28786B7F552D0B(Local_103.f_15));
				unk_0x13A2D602CD10CBAC(unk_0xBB28786B7F552D0B(Local_103.f_15), uLocal_119);
				unk_0x897EF720254BBEA3(unk_0xBB28786B7F552D0B(Local_103.f_15), 1);
			}
			else if (unk_0xD76D6BCC14B95CE1(unk_0xBB28786B7F552D0B(Local_103.f_15), -875674219) != 1 && unk_0xD76D6BCC14B95CE1(unk_0xBB28786B7F552D0B(Local_103.f_15), -875674219) != 0)
			{
				if (func_18(&uLocal_135, 5000, 0))
				{
					func_14(&uLocal_135);
					unk_0x11C4AF4137F2A4B5(unk_0xBB28786B7F552D0B(Local_103.f_15), unk_0x33CD235DF1E6A94E(), 10000);
				}
			}
			break;
	}
	return 1;
}

int func_170()
{
	if (Global_15866 != 0 || unk_0x12BF789190D82474())
	{
		return 1;
	}
	return 0;
}

void func_171()
{
	if (Local_103.f_3 == 4)
	{
		if ((!unk_0x0E4018692D92041D(Local_103.f_23, 10) && !unk_0x0E4018692D92041D(Local_104[unk_0x72B85B341ADBE9DE() /*10*/], 4)) && unk_0x0E4018692D92041D(Local_103.f_23, 17))
		{
			if (unk_0x22C3124A898FB82A(Local_103.f_13))
			{
				if (unk_0x6F3D61B58C7B4025(Local_103.f_13) || (!unk_0x5E2784BB00B20E8E(Local_103.f_13) && unk_0x06C1EBC003C18F1F()))
				{
					if (!func_387(Local_103))
					{
						if (unk_0x3AF2B3B68DD52355(unk_0xBB28786B7F552D0B(Local_103)))
						{
							unk_0x23298AB8A7D0F403(unk_0xE4B835FDC8B9B086(Local_103.f_13), true, 0);
							unk_0x76CE32E50F0C5270(unk_0xE4B835FDC8B9B086(Local_103.f_13), 1);
							unk_0xC496DD5F2D1B6923(unk_0xE4B835FDC8B9B086(Local_103.f_13), 0f, 0f, -1f);
							unk_0xBE470ACBEDCBF6FC(unk_0xBB28786B7F552D0B(Local_103), 16);
							unk_0x8950ED5730F62EE8(&(Local_104[unk_0x72B85B341ADBE9DE() /*10*/]), 4);
						}
					}
					else
					{
						unk_0x23298AB8A7D0F403(unk_0xE4B835FDC8B9B086(Local_103.f_13), true, 0);
						unk_0x76CE32E50F0C5270(unk_0xE4B835FDC8B9B086(Local_103.f_13), 1);
						unk_0xC496DD5F2D1B6923(unk_0xE4B835FDC8B9B086(Local_103.f_13), 0f, 0f, -1f);
						unk_0x8950ED5730F62EE8(&(Local_104[unk_0x72B85B341ADBE9DE() /*10*/]), 4);
					}
				}
			}
		}
	}
	func_172();
}

void func_172()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x22C3124A898FB82A(Local_103.f_13))
	{
		if (!unk_0xD62C4419A41F106A(unk_0xE4B835FDC8B9B086(Local_103.f_13), 0))
		{
			if ((!unk_0x0E4018692D92041D(Local_103.f_23, 11) && !unk_0x0E4018692D92041D(Local_104[unk_0x72B85B341ADBE9DE() /*10*/], 5)) && Local_103.f_37 > 0f)
			{
				if (((func_219() || func_218(0.87f)) || Local_103.f_3 >= 5) || unk_0x0E4018692D92041D(Local_103.f_23, 10))
				{
					if (!unk_0x0E4018692D92041D(Local_104[unk_0x72B85B341ADBE9DE() /*10*/], 11))
					{
						if (unk_0x6F3D61B58C7B4025(Local_103.f_13))
						{
							unk_0x861C6D8520E774EA(unk_0xE4B835FDC8B9B086(Local_103.f_13), 0, 0);
							unk_0x8950ED5730F62EE8(&(Local_104[unk_0x72B85B341ADBE9DE() /*10*/]), 13);
						}
						if (func_95(unk_0x95B959F18401C09A()) != 155)
						{
							unk_0x403A4762426EF1E8(func_52(1), 1);
						}
						unk_0x8950ED5730F62EE8(&(Local_104[unk_0x72B85B341ADBE9DE() /*10*/]), 11);
					}
					if (unk_0x5A4FB33F5B279A76(unk_0xE4B835FDC8B9B086(Local_103.f_13), unk_0x33CD235DF1E6A94E()))
					{
						Local_104[unk_0x72B85B341ADBE9DE() /*10*/].f_7 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 1) };
						unk_0x8C1596BAD35D957A(Local_104[unk_0x72B85B341ADBE9DE() /*10*/].f_7, &(Local_104[unk_0x72B85B341ADBE9DE() /*10*/].f_7.f_2), 0, 0);
						if (unk_0x6F3D61B58C7B4025(Local_103.f_13))
						{
							unk_0x35F11A916FDFCF32(unk_0xE4B835FDC8B9B086(Local_103.f_13), 1, 1);
							func_47(&(Local_103.f_13));
						}
						iVar0 = unk_0x9EC3B269A34A2BEE(iLocal_132, iLocal_133);
						if (unk_0x0E4018692D92041D(Local_103.f_23, 10))
						{
							iVar0 = floor((to_float(iVar0) * Local_103.f_37));
						}
						if (Local_103.f_4 > 1000)
						{
							Local_103.f_4 = 1000;
						}
						iVar0 = (iVar0 + Local_103.f_4);
						iVar0 = func_217(iVar0, 1);
						if (iVar0 > Global_262145.f_166)
						{
							iVar0 = Global_262145.f_166;
						}
						if (func_216(unk_0x95B959F18401C09A()) && func_214(func_215(unk_0x95B959F18401C09A())) < 1f)
						{
							if (Global_262145.f_4226 > 1f)
							{
								Global_262145.f_4226 = 1f;
							}
							iVar0 = round((to_float(iVar0) * Global_262145.f_4226));
						}
						if (iVar0 > 0)
						{
							if (func_213())
							{
								func_202(1734805203, iVar0, &uVar1, 0, 0, 0);
							}
							else
							{
								func_198(iVar0, 1, 1, 1092616192);
								unk_0x21C816A90BEB45BA(iVar0);
							}
						}
						Global_2528542.f_5643 = (Global_2528542.f_5643 + iVar0);
						Global_2528542.f_5643.f_2 = 1;
						Global_2528542.f_5643.f_5 = 1;
						iLocal_335 = (iLocal_335 + iVar0);
						func_197(3);
						if (!unk_0x0E4018692D92041D(Local_104[unk_0x72B85B341ADBE9DE() /*10*/], 5))
						{
							func_196(Local_103.f_38, iVar0);
						}
						else
						{
							func_187(unk_0x33CD235DF1E6A94E(), iVar0);
						}
						func_186(1, iVar0);
						if (func_182(1))
						{
							func_173(4);
						}
						unk_0x8950ED5730F62EE8(&(Local_104[unk_0x72B85B341ADBE9DE() /*10*/]), 5);
						unk_0x8950ED5730F62EE8(&(Local_105.f_53), 6);
					}
				}
			}
		}
	}
}

void func_173(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_262145.f_17567;
			break;
		
		case 1:
			iVar0 = Global_262145.f_17557;
			break;
		
		case 2:
			iVar0 = Global_262145.f_17568;
			break;
		
		case 3:
			iVar0 = Global_262145.f_17560;
			break;
		
		case 4:
			iVar0 = Global_262145.f_17556;
			break;
		
		case 6:
			iVar0 = 3;
			break;
		
		case 7:
			iVar0 = Global_262145.f_17571;
			break;
		
		case 8:
			iVar0 = Global_262145.f_17572;
			break;
		
		case 9:
			iVar0 = Global_262145.f_17575;
			break;
		
		case 22:
			iVar0 = Global_262145.f_17576;
			break;
		
		case 23:
			iVar0 = Global_262145.f_17569;
			break;
		
		case 25:
			iVar0 = Global_262145.f_18457;
			break;
		
		case 26:
			iVar0 = Global_262145.f_18456;
			break;
	}
	if (iVar0 != 0)
	{
		unk_0x27AA661817723FCB(func_180(func_181()), func_178(func_181()), func_177(), func_176(), iParam0, iVar0);
	}
	func_175(iVar0);
	func_174(iVar0);
}

void func_174(int iParam0)
{
	int iVar0;
	
	iVar0 = func_125(3968, -1, 0);
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
	func_122(3968, iVar0, -1, 1, 0);
}

void func_175(int iParam0)
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

int func_176()
{
	if (Global_1669366.f_3 != 0)
	{
		return Global_1669366.f_3;
	}
	return -1;
}

int func_177()
{
	if (Global_1669366.f_2 != 0)
	{
		return Global_1669366.f_2;
	}
	return -1;
}

int func_178(int iParam0)
{
	if (iParam0 == func_179())
	{
		return -1;
	}
	return Global_1626536[iParam0 /*603*/].f_11.f_8[1];
}

int func_179()
{
	return -1;
}

int func_180(int iParam0)
{
	if (iParam0 == func_179())
	{
		return -1;
	}
	return Global_1626536[iParam0 /*603*/].f_11.f_8[0];
}

int func_181()
{
	return Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_11;
}

bool func_182(bool bParam0)
{
	return func_183(unk_0x95B959F18401C09A(), bParam0);
}

int func_183(int iParam0, bool bParam1)
{
	return func_184(iParam0, bParam1, 1);
}

int func_184(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_179())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_185(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1626536[iParam0 /*603*/].f_11;
	if (iVar0 != func_179() && Global_1626536[iVar0 /*603*/].f_11.f_447 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_185(int iParam0, int iParam1)
{
	if (iParam0 != func_179())
	{
		if (Global_1626536[iParam0 /*603*/].f_11 != func_179())
		{
			if (Global_1626536[iParam0 /*603*/].f_11 == iParam0 && Global_1626536[iParam0 /*603*/].f_11.f_447 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_186(int iParam0, int iParam1)
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

void func_187(int iParam0, int iParam1)
{
	vector3 vVar0;
	
	vVar0 = { func_194(unk_0x33CD235DF1E6A94E(), 1) };
	if (iParam0 == func_193(unk_0x33CD235DF1E6A94E()))
	{
		func_192(1);
	}
	func_188(vVar0, iParam1, 7, 0, 0);
}

void func_188(vector3 vParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
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
			Global_2437364.f_1289[iVar1 /*30*/].f_4 = func_191(Global_2437364.f_1289[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2437364.f_1289[iVar1 /*30*/].f_7 = unk_0x78DCC5D0CB43DEBA();
			Global_2437364.f_1289[iVar1 /*30*/].f_3 = iParam1;
			Global_2437364.f_1289[iVar1 /*30*/].f_8 = iParam2;
			Global_2437364.f_1289[iVar1 /*30*/].f_9 = func_190();
			Global_2437364.f_1289[iVar1 /*30*/].f_10 = func_189();
			StringCopy(&(Global_2437364.f_1289[iVar1 /*30*/].f_22), sParam3, 16);
			Global_2437364.f_1289[iVar1 /*30*/].f_26 = unk_0x6985FC3098CCA0EB(unk_0x78DCC5D0CB43DEBA(), iParam4);
		}
	}
}

int func_189()
{
	if (Global_2437364.f_1890)
	{
		Global_2437364.f_1890 = 0;
		return 1;
	}
	Global_2437364.f_1890 = 0;
	return 0;
}

var func_190()
{
	var uVar0;
	
	uVar0 = Global_2437364.f_1892;
	Global_2437364.f_1892 = 1;
	return uVar0;
}

float func_191(vector3 vParam0, var uParam1, var uParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x16E00F066AFFEA0D(unk_0x69E12C716D4FB8BB(), vParam0, 1);
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

void func_192(int iParam0)
{
	Global_2437364.f_1890 = iParam0;
}

int func_193(int iParam0)
{
	return iParam0;
}

Vector3 func_194(int iParam0, bool bParam1)
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
	if (iParam0 == func_195(unk_0x33CD235DF1E6A94E()) && unk_0xCB75C331DD5DDCCC(unk_0x7B9C4CEB6D33A226()) == 4)
	{
		vVar0 = { unk_0x2CA911E7569D12EA(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		vVar0 = { unk_0xFBB1F99A825CAB09(iParam0, 0) };
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

int func_195(int iParam0)
{
	return iParam0;
}

void func_196(vector3 vParam0, int iParam1)
{
	func_188(vParam0, iParam1, 6, 0, 0);
}

void func_197(int iParam0)
{
	Global_2437364.f_1892 = iParam0;
}

void func_198(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_199(iParam0, iParam1, iParam2, fParam3);
}

void func_199(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_200(iParam0, iParam1, iParam2, fParam3);
}

void func_200(int iParam0, int iParam1, int iParam2, float fParam3)
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
		func_201(iVar1, 0);
	}
}

void func_201(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_202(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_213())
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
				func_203(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_203(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
			if (iParam1 > 0)
			{
				func_203(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -1693570755:
			func_203(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_203(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_203(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_213())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0xB412AA3DEE298A52(func_79()) || unk_0x2832F5CD8A109CD6())
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
			*uParam0 = func_210(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_209(1, iParam4);
			Global_4264084 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_204(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_204(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x8950ED5730F62EE8(&(Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_205(iParam0);
	}
}

void func_205(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_213())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_208(iParam0))
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
		func_206(&(Global_4263509[iParam0 /*84*/]));
	}
}

void func_206(var uParam0)
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
	func_207(&(uParam0->f_13));
	func_207(&(uParam0->f_13.f_13));
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

void func_207(var uParam0)
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

int func_208(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263509[iParam0 /*84*/].f_65.f_5 == 1;
	}
	return 0;
}

void func_209(int iParam0, int iParam1)
{
	Global_2460949 = iParam1;
	Global_2460948 = iParam0;
}

int func_210(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263509[iVar0 /*84*/].f_65.f_2 == 0)
		{
			if (!func_213())
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
			if (iParam1 == -1135378931 && bParam10)
			{
				func_211(Global_4263509[iVar0 /*84*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_211(struct<66> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_8(vVar0.y);
	if ((Global_262145.f_23434 && !Global_262145.f_23435) && !Global_262145.f_23436)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_212();
		unk_0x09269A9CFC145847(1, &vVar0, 35, iVar1);
	}
}

void func_212()
{
	unk_0x8F59DE352CFE248B("AM_ARENA_SHP");
}

int func_213()
{
	if (unk_0x4CE1DD5CFC1F941E())
	{
		return unk_0xFCAD2CB678396284();
	}
	return 0;
}

float func_214(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
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
			return 0f;
		
		case 144:
			return 0f;
		
		case 185:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_215(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1626536[iVar0 /*603*/];
	}
	return -1;
}

int func_216(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1626536[iVar0 /*603*/] != -1;
	}
	return 0;
}

int func_217(int iParam0, int iParam1)
{
	float fVar0;
	
	switch (iParam1)
	{
		case 0:
			break;
		
		case 1:
			if (iParam0 > 0)
			{
				fVar0 = (to_float(iParam0) * Global_262145);
				iParam0 = round(fVar0);
			}
			break;
		
		default:
			break;
	}
	return iParam0;
}

int func_218(float fParam0)
{
	iLocal_114 = unk_0x3F2F21BCB3761848(Local_103.f_29);
	if (iLocal_114 != -1)
	{
		if (unk_0xDB4C79A9697E6A55(iLocal_114))
		{
			if (unk_0x4EDDCE9AAE0FC976(iLocal_114) >= fParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_219()
{
	iLocal_114 = unk_0x3F2F21BCB3761848(Local_103.f_29);
	if (iLocal_114 != -1)
	{
		if (unk_0xDB4C79A9697E6A55(iLocal_114))
		{
			if (unk_0x4EDDCE9AAE0FC976(iLocal_114) >= 1f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_220()
{
	func_221();
}

int func_221()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!unk_0x6F3D61B58C7B4025(Local_103))
	{
		return 0;
	}
	if (func_387(Local_103))
	{
		if (!unk_0x0E4018692D92041D(Local_105.f_53, 3))
		{
			unk_0x1400DA3CD323B316(unk_0xBB28786B7F552D0B(Local_103));
			unk_0x8950ED5730F62EE8(&(Local_105.f_53), 3);
		}
		return 0;
	}
	switch (Local_103.f_3)
	{
		case 0:
			unk_0x41E36A540F8F323F(unk_0xBB28786B7F552D0B(Local_103), 71, 1);
			break;
		
		case 1:
			if (!unk_0x0E4018692D92041D(Local_103.f_23, 4) && !unk_0x0E4018692D92041D(Local_103.f_23, 12))
			{
				if (unk_0x0E4018692D92041D(Local_103.f_23, 13))
				{
					if (!unk_0x0E4018692D92041D(Local_105.f_52, 17))
					{
						unk_0xBE470ACBEDCBF6FC(unk_0xBB28786B7F552D0B(Local_103), 16);
						unk_0xC4A347124F39D998(unk_0xBB28786B7F552D0B(Local_103), unk_0x33CD235DF1E6A94E(), -1, 0, 2);
						if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
						{
							func_227(10);
						}
						else if (unk_0x0E4018692D92041D(Local_103.f_24, 0))
						{
							if (!unk_0x0E4018692D92041D(Local_103.f_24, 11))
							{
								if (!unk_0x0E4018692D92041D(Local_103.f_24, 12))
								{
									func_227(13);
								}
								else
								{
									func_227(20);
								}
							}
							else
							{
								func_227(17);
							}
							unk_0x8950ED5730F62EE8(&(Local_104[unk_0x72B85B341ADBE9DE() /*10*/]), 25);
						}
						else if (!unk_0x0E4018692D92041D(Local_103.f_24, 11))
						{
							if (!unk_0x0E4018692D92041D(Local_103.f_24, 12))
							{
								func_227(0);
							}
							else
							{
								func_227(18);
							}
						}
						else
						{
							func_227(15);
						}
						unk_0x8950ED5730F62EE8(&(Local_105.f_52), 17);
					}
					else if (unk_0xD76D6BCC14B95CE1(unk_0xBB28786B7F552D0B(Local_103), -875674219) != 1 && unk_0xD76D6BCC14B95CE1(unk_0xBB28786B7F552D0B(Local_103), -875674219) != 0)
					{
						if (func_18(&uLocal_135, 5000, 0))
						{
							func_14(&uLocal_135);
							if (!iLocal_108)
							{
								unk_0x11C4AF4137F2A4B5(unk_0xBB28786B7F552D0B(Local_103), unk_0x33CD235DF1E6A94E(), 10000);
							}
							unk_0xC4A347124F39D998(unk_0xBB28786B7F552D0B(Local_103), unk_0x33CD235DF1E6A94E(), -1, 0, 2);
						}
					}
				}
			}
			unk_0x41E36A540F8F323F(unk_0xBB28786B7F552D0B(Local_103), 71, 1);
			break;
		
		case 2:
			if (!unk_0x0E4018692D92041D(Local_103.f_23, 7) && !unk_0x0E4018692D92041D(Local_104[unk_0x72B85B341ADBE9DE() /*10*/], 0))
			{
				iVar1 = unk_0x33CD235DF1E6A94E();
				if (Local_103.f_32 > -1)
				{
					if (unk_0x1B094AC15936B3DB(unk_0xDD4FFAA17341D382(Local_103.f_32)))
					{
						iVar0 = unk_0xEB9DC13235C0B345(unk_0xDD4FFAA17341D382(Local_103.f_32));
						iVar1 = unk_0x378BD4B3881338C2(iVar0);
					}
				}
				if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
				{
					unk_0xC4A347124F39D998(unk_0xBB28786B7F552D0B(Local_103), iVar1, -1, 0, 2);
					unk_0xBE470ACBEDCBF6FC(unk_0xBB28786B7F552D0B(Local_103), 16);
					unk_0x108754262311D34F(unk_0xBB28786B7F552D0B(Local_103), "mp_am_hold_up", "WARY_LOOP", 4f, -4f, -1, 49, 0, 0, 0, 0);
					unk_0x8950ED5730F62EE8(&(Local_104[unk_0x72B85B341ADBE9DE() /*10*/]), 0);
				}
			}
			else if (unk_0xD76D6BCC14B95CE1(unk_0xBB28786B7F552D0B(Local_103), -875674219) != 1 && unk_0xD76D6BCC14B95CE1(unk_0xBB28786B7F552D0B(Local_103), -875674219) != 0)
			{
				if (func_18(&uLocal_135, 5000, 0))
				{
					iVar1 = unk_0x33CD235DF1E6A94E();
					if (Local_103.f_32 > -1)
					{
						if (unk_0x1B094AC15936B3DB(unk_0xDD4FFAA17341D382(Local_103.f_32)))
						{
							iVar0 = unk_0xEB9DC13235C0B345(unk_0xDD4FFAA17341D382(Local_103.f_32));
							iVar1 = unk_0x378BD4B3881338C2(iVar0);
						}
					}
					func_14(&uLocal_135);
					unk_0x11C4AF4137F2A4B5(unk_0xBB28786B7F552D0B(Local_103), iVar1, 10000);
					unk_0xC4A347124F39D998(unk_0xBB28786B7F552D0B(Local_103), iVar1, -1, 0, 2);
				}
			}
			if (unk_0x0E4018692D92041D(Local_103.f_23, 16))
			{
				unk_0xBE470ACBEDCBF6FC(unk_0xBB28786B7F552D0B(Local_103), 16);
			}
			unk_0x41E36A540F8F323F(unk_0xBB28786B7F552D0B(Local_103), 71, 1);
			break;
		
		case 3:
			if (!unk_0x0E4018692D92041D(Local_105.f_52, 25))
			{
				if (unk_0xD76D6BCC14B95CE1(unk_0xBB28786B7F552D0B(Local_103), 1920390111) != 0 && unk_0xD76D6BCC14B95CE1(unk_0xBB28786B7F552D0B(Local_103), 1920390111) != 1)
				{
					unk_0x897EF720254BBEA3(unk_0xBB28786B7F552D0B(Local_103), 1);
					unk_0x33F6BE48E356DA27(unk_0xBB28786B7F552D0B(Local_103), 2, false);
					unk_0x33F6BE48E356DA27(unk_0xBB28786B7F552D0B(Local_103), 8, true);
					unk_0x33F6BE48E356DA27(unk_0xBB28786B7F552D0B(Local_103), 16, true);
					unk_0xBE470ACBEDCBF6FC(unk_0xBB28786B7F552D0B(Local_103), 16);
					unk_0x43EAD1F94EC8561F(unk_0xBB28786B7F552D0B(Local_103), Local_103.f_42, -1);
					unk_0x8950ED5730F62EE8(&(Local_105.f_52), 25);
				}
			}
			break;
		
		case 4:
			if (!unk_0x0E4018692D92041D(Local_103.f_23, 17) && !unk_0x0E4018692D92041D(Local_104[unk_0x72B85B341ADBE9DE() /*10*/], 3))
			{
				if (unk_0x06C1EBC003C18F1F())
				{
					Global_2528542.f_8 = 1;
				}
				iVar2 = unk_0x33CD235DF1E6A94E();
				if (Global_2528542.f_9 != func_179())
				{
					if (func_46(Global_2528542.f_9, 1, 1))
					{
						iVar2 = unk_0x378BD4B3881338C2(Global_2528542.f_9);
					}
				}
				unk_0xC4A347124F39D998(unk_0xBB28786B7F552D0B(Local_103), iVar2, 30000, 0, 3);
				unk_0x524B4AAA3328E253(unk_0xBB28786B7F552D0B(Local_103), "mood_stressed_1", 0);
				unk_0x8950ED5730F62EE8(&(Local_104[unk_0x72B85B341ADBE9DE() /*10*/]), 3);
			}
			else
			{
				iLocal_114 = unk_0x3F2F21BCB3761848(Local_103.f_29);
				if (iLocal_114 != -1)
				{
					if (unk_0xDB4C79A9697E6A55(iLocal_114))
					{
						fLocal_318 = (Local_103.f_33 + 0.6f);
						if (fLocal_318 < 0.75f)
						{
							fLocal_318 = 0.75f;
						}
						if (unk_0x0E4018692D92041D(Local_103.f_24, 4))
						{
							fLocal_318 = (fLocal_318 + 0.25f);
						}
						if (fLocal_318 > 1.75f)
						{
							fLocal_318 = 1.75f;
						}
						unk_0x5B56BDD0171D81E5(iLocal_114, fLocal_318);
					}
				}
			}
			break;
		
		case 5:
			if (!unk_0x0E4018692D92041D(Local_104[unk_0x72B85B341ADBE9DE() /*10*/], 10))
			{
				if (unk_0xD76D6BCC14B95CE1(unk_0xBB28786B7F552D0B(Local_103), 242628503) != 0 && unk_0xD76D6BCC14B95CE1(unk_0xBB28786B7F552D0B(Local_103), 242628503) != 1)
				{
					if (!unk_0x3AF2B3B68DD52355(unk_0xBB28786B7F552D0B(Local_103)))
					{
						iLocal_114 = unk_0x3F2F21BCB3761848(Local_103.f_29);
						if ((iLocal_114 != -1 && !unk_0xDB4C79A9697E6A55(iLocal_114)) || iLocal_114 == -1)
						{
							unk_0x13A2D602CD10CBAC(unk_0xBB28786B7F552D0B(Local_103), uLocal_119);
							unk_0xBE470ACBEDCBF6FC(unk_0xBB28786B7F552D0B(Local_103), 16);
							unk_0x897EF720254BBEA3(unk_0xBB28786B7F552D0B(Local_103), 1);
							unk_0x8950ED5730F62EE8(&(Local_104[unk_0x72B85B341ADBE9DE() /*10*/]), 10);
						}
					}
				}
			}
			else if (unk_0xD76D6BCC14B95CE1(unk_0xBB28786B7F552D0B(Local_103), -875674219) != 1 && unk_0xD76D6BCC14B95CE1(unk_0xBB28786B7F552D0B(Local_103), -875674219) != 0)
			{
				if (func_18(&uLocal_135, 5000, 0))
				{
					func_14(&uLocal_135);
					iVar1 = unk_0x33CD235DF1E6A94E();
					if (Local_103.f_32 > -1)
					{
						if (unk_0x1B094AC15936B3DB(unk_0xDD4FFAA17341D382(Local_103.f_32)))
						{
							iVar0 = unk_0xEB9DC13235C0B345(unk_0xDD4FFAA17341D382(Local_103.f_32));
							iVar1 = unk_0x378BD4B3881338C2(iVar0);
						}
					}
					unk_0x11C4AF4137F2A4B5(unk_0xBB28786B7F552D0B(Local_103), iVar1, 10000);
					unk_0xC4A347124F39D998(unk_0xBB28786B7F552D0B(Local_103), unk_0x33CD235DF1E6A94E(), -1, 0, 2);
				}
			}
			break;
		
		case 6:
			if (!unk_0x0E4018692D92041D(Local_104[unk_0x72B85B341ADBE9DE() /*10*/], 10))
			{
				if ((iLocal_114 == -1 || !unk_0xDB4C79A9697E6A55(iLocal_114)) || unk_0x4EDDCE9AAE0FC976(iLocal_114) >= 0.95f)
				{
					func_226();
					iVar1 = unk_0x33CD235DF1E6A94E();
					if (Local_103.f_32 > -1)
					{
						if (unk_0x1B094AC15936B3DB(unk_0xDD4FFAA17341D382(Local_103.f_32)))
						{
							iVar0 = unk_0xEB9DC13235C0B345(unk_0xDD4FFAA17341D382(Local_103.f_32));
							iVar1 = unk_0x378BD4B3881338C2(iVar0);
						}
					}
					unk_0x8CF360BBBD42762D(unk_0xBB28786B7F552D0B(Local_103), -1, iVar1, -1, 1);
					unk_0x880B00F3FAE4C022(unk_0xBB28786B7F552D0B(Local_103), 0, 0);
					unk_0xBE470ACBEDCBF6FC(unk_0xBB28786B7F552D0B(Local_103), 16);
					unk_0x897EF720254BBEA3(unk_0xBB28786B7F552D0B(Local_103), 1);
					unk_0x8950ED5730F62EE8(&(Local_104[unk_0x72B85B341ADBE9DE() /*10*/]), 10);
				}
			}
			break;
		
		case 7:
			if (unk_0xD76D6BCC14B95CE1(unk_0xBB28786B7F552D0B(Local_103), -1442466670) != 0 && unk_0xD76D6BCC14B95CE1(unk_0xBB28786B7F552D0B(Local_103), -1442466670) != 1)
			{
				if (!func_170())
				{
					func_225();
					unk_0xED68CDDDE25A144E(unk_0xBB28786B7F552D0B(Local_103));
					unk_0x77631BBB824DF500(unk_0xBB28786B7F552D0B(Local_103), 20f, 0);
					func_227(4);
				}
			}
			break;
		
		case 8:
			if (!unk_0x0E4018692D92041D(Local_104[unk_0x72B85B341ADBE9DE() /*10*/], 9))
			{
				func_226();
				iLocal_114 = unk_0x3F2F21BCB3761848(Local_103.f_29);
				if ((iLocal_114 != -1 && !unk_0xDB4C79A9697E6A55(iLocal_114)) || iLocal_114 == -1)
				{
					if ((!unk_0x0E4018692D92041D(Local_103.f_23, 27) && !func_37()) && !func_36())
					{
						if (unk_0x0E4018692D92041D(Local_103.f_24, 2))
						{
							if (!unk_0x0E4018692D92041D(Local_103.f_24, 3))
							{
								unk_0x13A2D602CD10CBAC(unk_0xBB28786B7F552D0B(Local_103), uLocal_121);
								iVar3 = 1;
							}
							else
							{
								func_225();
								unk_0x13A2D602CD10CBAC(unk_0xBB28786B7F552D0B(Local_103), uLocal_122);
								iVar3 = 1;
							}
						}
					}
					else
					{
						unk_0x6DA4DBA91F234052(unk_0xBB28786B7F552D0B(Local_103), vLocal_112, 250f, -1, 1, 0);
						iVar3 = 1;
					}
					if (iVar3 == 1)
					{
						func_227(25);
						unk_0x897EF720254BBEA3(unk_0xBB28786B7F552D0B(Local_103), 1);
						func_6(Local_105.f_50, 1, func_7());
						unk_0x8950ED5730F62EE8(&(Local_104[unk_0x72B85B341ADBE9DE() /*10*/]), 9);
					}
				}
			}
			else if (!unk_0x0E4018692D92041D(Local_104[unk_0x72B85B341ADBE9DE() /*10*/], 19))
			{
				iVar4 = unk_0xE32E5EE0A68EBF7A(unk_0xBB28786B7F552D0B(Local_103));
				if (iVar4 == 3)
				{
					unk_0x05AB47B112CF24AE(unk_0xBB28786B7F552D0B(Local_103));
					unk_0x8950ED5730F62EE8(&(Local_104[unk_0x72B85B341ADBE9DE() /*10*/]), 19);
				}
				else if (iVar4 == 2)
				{
					unk_0xED68CDDDE25A144E(unk_0xBB28786B7F552D0B(Local_103));
					if (!unk_0x0E4018692D92041D(Local_103.f_24, 3))
					{
						unk_0x13A2D602CD10CBAC(unk_0xBB28786B7F552D0B(Local_103), uLocal_123);
					}
					else
					{
						unk_0x77631BBB824DF500(unk_0xBB28786B7F552D0B(Local_103), 20f, 0);
					}
					unk_0x8950ED5730F62EE8(&(Local_104[unk_0x72B85B341ADBE9DE() /*10*/]), 19);
				}
			}
			break;
	}
	func_222();
	return 1;
}

void func_222()
{
	if ((Local_103.f_3 != 8 && Local_103.f_3 != 7) && Local_103.f_2 == 3)
	{
		if ((((!unk_0x0E4018692D92041D(Local_103.f_23, 14) || !unk_0x0E4018692D92041D(Local_103.f_23, 15)) || !unk_0x0E4018692D92041D(Local_103.f_23, 22)) || !unk_0x0E4018692D92041D(Local_103.f_23, 23)) || !unk_0x0E4018692D92041D(Local_103.f_23, 30))
		{
			iLocal_114 = unk_0x3F2F21BCB3761848(Local_103.f_29);
			if (iLocal_114 != -1)
			{
				if (unk_0xDB4C79A9697E6A55(iLocal_114))
				{
					if (!func_170())
					{
						if (!unk_0x0E4018692D92041D(Local_103.f_23, 14) && !unk_0x0E4018692D92041D(Local_104[unk_0x72B85B341ADBE9DE() /*10*/], 6))
						{
							func_227(2);
							unk_0x8950ED5730F62EE8(&(Local_104[unk_0x72B85B341ADBE9DE() /*10*/]), 6);
						}
						if (!unk_0x0E4018692D92041D(Local_103.f_23, 15) && !unk_0x0E4018692D92041D(Local_104[unk_0x72B85B341ADBE9DE() /*10*/], 7))
						{
							if (unk_0x4EDDCE9AAE0FC976(iLocal_114) > 0.87f)
							{
								func_227(3);
								unk_0x8950ED5730F62EE8(&(Local_104[unk_0x72B85B341ADBE9DE() /*10*/]), 7);
							}
						}
						if (!unk_0x0E4018692D92041D(Local_103.f_23, 22) && !unk_0x0E4018692D92041D(Local_104[unk_0x72B85B341ADBE9DE() /*10*/], 22))
						{
							if (unk_0x0E4018692D92041D(Local_103.f_23, 24) && !func_170())
							{
								func_227(11);
								unk_0x8950ED5730F62EE8(&(Local_104[unk_0x72B85B341ADBE9DE() /*10*/]), 22);
							}
						}
						if (!unk_0x0E4018692D92041D(Local_103.f_23, 23) && !unk_0x0E4018692D92041D(Local_104[unk_0x72B85B341ADBE9DE() /*10*/], 23))
						{
							if (unk_0x0E4018692D92041D(Local_103.f_23, 25) && !func_170())
							{
								func_227(12);
								unk_0x8950ED5730F62EE8(&(Local_104[unk_0x72B85B341ADBE9DE() /*10*/]), 23);
							}
						}
					}
				}
			}
		}
		if (!unk_0x0E4018692D92041D(Local_103.f_23, 9))
		{
			if (!unk_0x0E4018692D92041D(Local_103.f_23, 26) && !unk_0x0E4018692D92041D(Local_104[unk_0x72B85B341ADBE9DE() /*10*/], 24))
			{
				if (unk_0x0E4018692D92041D(Local_103.f_23, 7))
				{
					if (!func_170())
					{
						if (!unk_0x0E4018692D92041D(Local_103.f_24, 11))
						{
							if (!unk_0x0E4018692D92041D(Local_103.f_24, 12))
							{
								func_227(1);
							}
							else
							{
								func_227(19);
							}
						}
						else
						{
							func_227(16);
						}
						unk_0x8950ED5730F62EE8(&(Local_104[unk_0x72B85B341ADBE9DE() /*10*/]), 24);
						return;
					}
					else
					{
						func_223();
						return;
					}
				}
			}
			if (((!unk_0x0E4018692D92041D(Local_103.f_23, 30) && !unk_0x0E4018692D92041D(Local_104[unk_0x72B85B341ADBE9DE() /*10*/], 25)) && !unk_0x0E4018692D92041D(Local_103.f_23, 7)) && !unk_0x0E4018692D92041D(Local_103.f_23, 4))
			{
				if (unk_0x0E4018692D92041D(Local_103.f_24, 0) && !func_170())
				{
					if ((unk_0x0E4018692D92041D(Local_103.f_23, 7) && unk_0x0E4018692D92041D(Local_103.f_23, 4)) || (!unk_0x0E4018692D92041D(Local_103.f_23, 7) && !unk_0x0E4018692D92041D(Local_103.f_23, 4)))
					{
						if (!unk_0x0E4018692D92041D(Local_103.f_24, 11))
						{
							if (!unk_0x0E4018692D92041D(Local_103.f_24, 12))
							{
								func_227(13);
							}
							else
							{
								func_227(20);
							}
						}
						else
						{
							func_227(17);
						}
						unk_0x8950ED5730F62EE8(&(Local_104[unk_0x72B85B341ADBE9DE() /*10*/]), 25);
						return;
					}
				}
			}
			if (!unk_0x0E4018692D92041D(Local_103.f_23, 31) && !unk_0x0E4018692D92041D(Local_104[unk_0x72B85B341ADBE9DE() /*10*/], 26))
			{
				if (unk_0x0E4018692D92041D(Local_103.f_24, 1) && !func_170())
				{
					func_227(14);
					unk_0x8950ED5730F62EE8(&(Local_104[unk_0x72B85B341ADBE9DE() /*10*/]), 26);
					return;
				}
			}
			if (!unk_0x0E4018692D92041D(Local_103.f_24, 9) && !unk_0x0E4018692D92041D(Local_104[unk_0x72B85B341ADBE9DE() /*10*/], 31))
			{
				if (unk_0x0E4018692D92041D(Local_103.f_24, 8) && !func_170())
				{
					func_227(22);
					unk_0x8950ED5730F62EE8(&(Local_104[unk_0x72B85B341ADBE9DE() /*10*/]), 31);
					return;
				}
			}
			if (!unk_0x0E4018692D92041D(Local_103.f_1, 3) && !unk_0x0E4018692D92041D(Local_104[unk_0x72B85B341ADBE9DE() /*10*/].f_1, 3))
			{
				if (unk_0x0E4018692D92041D(Local_103.f_1, 2) && !func_170())
				{
					func_227(24);
					unk_0x8950ED5730F62EE8(&(Local_104[unk_0x72B85B341ADBE9DE() /*10*/].f_1), 3);
					return;
				}
			}
			if (!unk_0x0E4018692D92041D(Local_103.f_24, 14) && !unk_0x0E4018692D92041D(Local_104[unk_0x72B85B341ADBE9DE() /*10*/], 20))
			{
				if (unk_0x0E4018692D92041D(Local_103.f_24, 13) && !func_170())
				{
					func_227(23);
					unk_0x8950ED5730F62EE8(&(Local_104[unk_0x72B85B341ADBE9DE() /*10*/]), 20);
					return;
				}
			}
		}
	}
	if (!unk_0x0E4018692D92041D(Local_103.f_24, 6) && !unk_0x0E4018692D92041D(Local_104[unk_0x72B85B341ADBE9DE() /*10*/], 29))
	{
		if (unk_0x0E4018692D92041D(Local_103.f_24, 5))
		{
			if (!func_170())
			{
				func_227(21);
				unk_0x8950ED5730F62EE8(&(Local_104[unk_0x72B85B341ADBE9DE() /*10*/]), 29);
				return;
			}
		}
	}
}

void func_223()
{
	Global_14732 = 0;
	func_224();
}

void func_224()
{
	unk_0x3F4DBD0F910C454B();
	Global_16877 = 0;
	if (unk_0x12BF789190D82474())
	{
		unk_0xD92171BC6C48DB90(false);
		Global_15866 = 6;
	}
}

void func_225()
{
	int iVar0;
	
	iVar0 = unk_0x9EC3B269A34A2BEE(0, 12);
	if (iVar0 < 3)
	{
		unk_0xE18BDD1E31C07544(unk_0xBB28786B7F552D0B(Local_103), joaat("weapon_pistol"), 25000, 0);
		unk_0xDE9FF07CFD5DC172(unk_0xBB28786B7F552D0B(Local_103), unk_0x9EC3B269A34A2BEE(10, 35));
	}
	else if (iVar0 < 6)
	{
		unk_0xE18BDD1E31C07544(unk_0xBB28786B7F552D0B(Local_103), joaat("weapon_combatpistol"), 25000, 0);
		unk_0xDE9FF07CFD5DC172(unk_0xBB28786B7F552D0B(Local_103), unk_0x9EC3B269A34A2BEE(15, 40));
	}
	else if (iVar0 == 6)
	{
		unk_0xE18BDD1E31C07544(unk_0xBB28786B7F552D0B(Local_103), joaat("weapon_microsmg"), 25000, 0);
		unk_0xDE9FF07CFD5DC172(unk_0xBB28786B7F552D0B(Local_103), unk_0x9EC3B269A34A2BEE(10, 25));
	}
	else if (iVar0 == 7)
	{
		unk_0xE18BDD1E31C07544(unk_0xBB28786B7F552D0B(Local_103), joaat("weapon_combatmg"), 25000, 0);
		unk_0xDE9FF07CFD5DC172(unk_0xBB28786B7F552D0B(Local_103), unk_0x9EC3B269A34A2BEE(5, 15));
	}
	else if (iVar0 == 8)
	{
		unk_0xE18BDD1E31C07544(unk_0xBB28786B7F552D0B(Local_103), joaat("weapon_bat"), 25000, 0);
		unk_0xDE9FF07CFD5DC172(unk_0xBB28786B7F552D0B(Local_103), unk_0x9EC3B269A34A2BEE(20, 40));
	}
	else if (iVar0 == 9)
	{
		unk_0xE18BDD1E31C07544(unk_0xBB28786B7F552D0B(Local_103), joaat("weapon_assaultrifle"), 25000, 0);
		unk_0xDE9FF07CFD5DC172(unk_0xBB28786B7F552D0B(Local_103), unk_0x9EC3B269A34A2BEE(5, 30));
	}
	else if (iVar0 == 10)
	{
		unk_0xE18BDD1E31C07544(unk_0xBB28786B7F552D0B(Local_103), joaat("weapon_sawnoffshotgun"), 25000, 0);
		unk_0xDE9FF07CFD5DC172(unk_0xBB28786B7F552D0B(Local_103), unk_0x9EC3B269A34A2BEE(5, 20));
	}
	else
	{
		unk_0xE18BDD1E31C07544(unk_0xBB28786B7F552D0B(Local_103), joaat("weapon_pumpshotgun"), 25000, 0);
		unk_0xDE9FF07CFD5DC172(unk_0xBB28786B7F552D0B(Local_103), unk_0x9EC3B269A34A2BEE(10, 25));
	}
	func_6(Local_105.f_50, 1, func_7());
	unk_0x0648A75D3F60E864(unk_0xBB28786B7F552D0B(Local_103), Global_1574993);
	unk_0x083F9B3B112E951F(unk_0xBB28786B7F552D0B(Local_103), 1);
	unk_0x34A51926277F67BC(unk_0xBB28786B7F552D0B(Local_103), 1);
	unk_0xAF4482B584BBF3B8(unk_0xBB28786B7F552D0B(Local_103), vLocal_111, 20f, 0, 0);
	unk_0x897EF720254BBEA3(unk_0xBB28786B7F552D0B(Local_103), 1);
}

void func_226()
{
	iLocal_114 = unk_0x3F2F21BCB3761848(Local_103.f_29);
	if (iLocal_114 != -1)
	{
		if (unk_0xDB4C79A9697E6A55(iLocal_114))
		{
			unk_0x352A1C032A91CEAD(Local_103.f_29);
		}
	}
}

void func_227(int iParam0)
{
	struct<2> Var0;
	int iVar1;
	
	if (unk_0x0E4018692D92041D(Local_103.f_23, 13))
	{
		if (!func_387(Local_103))
		{
			if (unk_0x6F3D61B58C7B4025(Local_103) || (!unk_0x5E2784BB00B20E8E(Local_103) && unk_0x06C1EBC003C18F1F()))
			{
				if (!unk_0x3AF2B3B68DD52355(unk_0xBB28786B7F552D0B(Local_103)))
				{
					if (Local_103.f_45 == 0)
					{
						StringCopy(&Var0, "RB_SH2", 16);
					}
					else if (Local_103.f_45 == 1)
					{
						StringCopy(&Var0, "RB_12_F", 16);
					}
					else
					{
						StringCopy(&Var0, "RB_SH3", 16);
					}
					StringIntConCat(&Var0, Local_103.f_31, 16);
					StringIntConCat(&Var0, iParam0, 16);
					if (unk_0xCE3CFF625BEBAA04(&Var0, "RB_SH241"))
					{
						if (unk_0x96C4B46F194803A7(unk_0x33CD235DF1E6A94E(), &iVar1, 1))
						{
							if ((((((iVar1 == joaat("weapon_unarmed") || iVar1 == 0) || iVar1 == joaat("object")) || iVar1 == joaat("weapon_flare")) || iVar1 == joaat("weapon_snowball")) || func_245(iVar1)) || func_244(iVar1))
							{
								StringCopy(&Var0, "RB_SH211", 16);
							}
						}
					}
					func_386(&uLocal_151, 3, unk_0xBB28786B7F552D0B(Local_103), &(Local_103.f_46), 1, 0);
					switch (iParam0)
					{
						case 0:
							unk_0xF0502D0584CCD9A6(unk_0xBB28786B7F552D0B(Local_103), "SHOP_GREET", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 1:
							func_228(&uLocal_151, "RB_12AU", &Var0, 12, 1, 0, 1);
							break;
						
						case 2:
							func_228(&uLocal_151, "RB_12AU", &Var0, 12, 1, 0, 1);
							break;
						
						case 3:
							func_228(&uLocal_151, "RB_12AU", &Var0, 12, 1, 0, 1);
							break;
						
						case 4:
							unk_0xF0502D0584CCD9A6(unk_0xBB28786B7F552D0B(Local_103), "SHOP_BRAVE", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 10:
							unk_0xF0502D0584CCD9A6(unk_0xBB28786B7F552D0B(Local_103), "SHOP_REMOVE_VEHICLE", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 11:
							unk_0xF0502D0584CCD9A6(unk_0xBB28786B7F552D0B(Local_103), "SHOP_REACT_TO_SHOUT", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 12:
							unk_0xF0502D0584CCD9A6(unk_0xBB28786B7F552D0B(Local_103), "SHOP_HURRYING", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 13:
							unk_0xF0502D0584CCD9A6(unk_0xBB28786B7F552D0B(Local_103), "SHOP_NO_COPS", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 14:
							unk_0xF0502D0584CCD9A6(unk_0xBB28786B7F552D0B(Local_103), "SHOP_THREATENED", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 15:
							unk_0xF0502D0584CCD9A6(unk_0xBB28786B7F552D0B(Local_103), "SHOP_GREET_START", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 16:
							unk_0xF0502D0584CCD9A6(unk_0xBB28786B7F552D0B(Local_103), "SHOP_SCARED_START", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 17:
							unk_0xF0502D0584CCD9A6(unk_0xBB28786B7F552D0B(Local_103), "SHOP_NO_COPS_START", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 18:
							unk_0xF0502D0584CCD9A6(unk_0xBB28786B7F552D0B(Local_103), "SHOP_GREET_END", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 19:
							unk_0xF0502D0584CCD9A6(unk_0xBB28786B7F552D0B(Local_103), "SHOP_SCARED_END", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 20:
							unk_0xF0502D0584CCD9A6(unk_0xBB28786B7F552D0B(Local_103), "SHOP_NO_COPS_END", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 21:
							unk_0xF0502D0584CCD9A6(unk_0xBB28786B7F552D0B(Local_103), "SHOP_COPS_ARRIVED", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 22:
							unk_0xF0502D0584CCD9A6(unk_0xBB28786B7F552D0B(Local_103), "SHOP_SELL", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 23:
							unk_0xF0502D0584CCD9A6(unk_0xBB28786B7F552D0B(Local_103), "SHOP_NO_ENTRY", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 24:
							unk_0xF0502D0584CCD9A6(unk_0xBB28786B7F552D0B(Local_103), "SHOP_STEAL", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 25:
							unk_0xF0502D0584CCD9A6(unk_0xBB28786B7F552D0B(Local_103), "SCREAM_PANIC", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						}
					}
				}
			}
	}
}

int func_228(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_243(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_229(sParam2, iParam3, 0);
}

int func_229(char* sParam0, int iParam1, bool bParam2)
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
					func_242();
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
		if (func_241(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_240();
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
				func_234();
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
				if (func_233())
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
			if (func_232())
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
			func_231();
			Global_15876 = bParam2;
		}
		Global_15868 = iParam1;
		StringCopy(&Global_15485, sParam0, 24);
		Global_14732 = 0;
		func_230();
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
		func_242();
	}
	return 0;
}

void func_230()
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

void func_231()
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

int func_232()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_233()
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

void func_234()
{
	if (func_120(14))
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
		Global_14553 = func_235();
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

var func_235()
{
	func_236();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_236()
{
	int iVar0;
	
	if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
	{
		if (func_239(Global_106565.f_2357.f_539.f_4321) != unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()))
		{
			iVar0 = func_238(unk_0x33CD235DF1E6A94E());
			if (func_237(iVar0) && (!func_120(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_237(Global_106565.f_2357.f_539.f_4321))
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

bool func_237(int iParam0)
{
	return iParam0 < 3;
}

int func_238(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		iVar1 = unk_0x541D5C57194E73C4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_239(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_239(int iParam0)
{
	if (func_237(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_240()
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

bool func_241(int iParam0, int iParam1)
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

void func_242()
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

void func_243(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

int func_244(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_molotov"):
		case joaat("weapon_smokegrenade"):
		case joaat("weapon_grenade"):
		case joaat("weapon_stickybomb"):
		case joaat("weapon_proxmine"):
			return 1;
			break;
		
		case -1169823560:
			return 1;
			break;
	}
	return 0;
}

int func_245(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_knife"):
		case joaat("weapon_bat"):
		case joaat("weapon_nightstick"):
		case joaat("weapon_hammer"):
		case joaat("weapon_golfclub"):
		case joaat("weapon_crowbar"):
		case joaat("weapon_bottle"):
		case joaat("weapon_dagger"):
		case joaat("weapon_knuckle"):
		case joaat("weapon_hatchet"):
		case joaat("weapon_machete"):
		case joaat("weapon_switchblade"):
			return 1;
			break;
		
		case -853065399:
		case -1810795771:
		case 419712736:
			return 1;
			break;
		
		case 940833800:
			return 1;
	}
	return 0;
}

void func_246()
{
	int iVar0;
	
	iVar0 = unk_0x276149CFFB30EADE(false, 0);
	if (Local_103.f_43 != iVar0)
	{
		if (Local_103.f_43 < iVar0 || func_253(Local_103.f_43, 0, 1))
		{
			unk_0x4F8CF72358604361(Local_103.f_43);
		}
	}
	iVar0 = unk_0x88CD84C553EF6ED9(false, 0);
	if (Local_103.f_44 != iVar0)
	{
		if (Local_103.f_44 < iVar0 || func_247(Local_103.f_44, 0, 1))
		{
			unk_0x12F5DDEAB00B8213(Local_103.f_44);
		}
	}
}

int func_247(int iParam0, bool bParam1, bool bParam2)
{
	return func_248(2, iParam0, 1, bParam1, bParam2);
}

int func_248(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x0E4018692D92041D(Global_1383928, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_252(iParam0) - func_251(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_251(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_252(iParam0) - func_250(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_251(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_252(iParam0) - func_251(iParam0, 1));
		}
		if (!bParam4 && Global_1589819[unk_0x95B959F18401C09A() /*818*/] != 3)
		{
			iVar1 = (iVar1 - func_249(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_249(int iParam0)
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

int func_250(int iParam0)
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

int func_251(int iParam0, bool bParam1)
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

int func_252(int iParam0)
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

int func_253(int iParam0, bool bParam1, bool bParam2)
{
	return func_248(0, iParam0, 1, bParam1, bParam2);
}

void func_254()
{
	float fVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	
	switch (iLocal_336)
	{
		case 0:
			if (!unk_0x0E4018692D92041D(Local_105.f_53, 0))
			{
				if (unk_0x22C3124A898FB82A(Local_103.f_14))
				{
					if (func_260(vLocal_342))
					{
						vLocal_342 = { unk_0x2CA911E7569D12EA(unk_0xE4B835FDC8B9B086(Local_103.f_14), 0f, -0.5f, 0f) };
						unk_0x8950ED5730F62EE8(&(Local_105.f_53), 0);
					}
				}
			}
			if ((((unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), vLocal_342, 0.5f, 0.5f, 1f, 0, 1, 0) && (func_387(Local_103) || Local_103.f_3 > 7)) && !unk_0x0E4018692D92041D(Local_103.f_23, 20)) && !unk_0x0E4018692D92041D(Local_103.f_23, 11)) && unk_0x1D05F456626EB273(vLocal_115, 1.5f) == 0)
			{
				if (((((((!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0) && !func_167(0)) && !func_259()) && !unk_0xD9C92B0885A075F8()) && !func_39(unk_0x95B959F18401C09A(), 146)) && !func_38(unk_0x95B959F18401C09A())) && unk_0x22C3124A898FB82A(Local_103.f_14)) && (!func_137(unk_0x95B959F18401C09A()) || func_95(unk_0x95B959F18401C09A()) == 154))
				{
					func_147("FHU_MANR", -1);
					Global_2528542.f_5643.f_4 = 1;
					iLocal_336 = 1;
				}
			}
			break;
		
		case 1:
			if (((((!unk_0x0E4018692D92041D(Local_103.f_24, 16) && !unk_0x0E4018692D92041D(Local_104[unk_0x72B85B341ADBE9DE() /*10*/], 12)) && !unk_0x0E4018692D92041D(Local_103.f_23, 20)) && !unk_0x0E4018692D92041D(Local_103.f_23, 11)) && unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), vLocal_342, 0.5f, 0.5f, 1f, 0, 1, 0)) && (!func_137(unk_0x95B959F18401C09A()) || func_95(unk_0x95B959F18401C09A()) == 154))
			{
				if (((unk_0x833B1A3D9F713E03(0, 51) && !func_258(0)) && !func_259()) && !unk_0xD9C92B0885A075F8())
				{
					if (func_145("FHU_MANR"))
					{
						unk_0xEDF90B96BED57BCE(1);
					}
					unk_0x3449EA232F9B8EAD(unk_0x3EE1295CEFBEFED4(), false, 640);
					unk_0x8950ED5730F62EE8(&(Local_104[unk_0x72B85B341ADBE9DE() /*10*/]), 12);
					iLocal_336 = 2;
				}
				else if ((unk_0xE3903F59E2F22150() % 1000) < 50)
				{
					if (iLocal_341 == 0)
					{
						func_255(&iLocal_341, 4, "FHU_MANR", 0, 0, 0, 0);
					}
				}
			}
			else if (func_145("FHU_MANR"))
			{
				unk_0xEDF90B96BED57BCE(1);
			}
			break;
		
		case 2:
			if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
			{
				vVar3 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 1) };
				vLocal_342.z = (vVar3.z - 1f);
				unk_0xBEADAF07D2339505(unk_0x33CD235DF1E6A94E(), vLocal_342, 1, 0, 0, 1);
				unk_0x3C990C409B3845DE(unk_0x33CD235DF1E6A94E(), unk_0x174C48E9E544E9A8((vLocal_129.x - vLocal_342.x), (vLocal_129.y - vLocal_342.y)));
				unk_0xA7A57E7757ED035E(&uVar4);
				unk_0x99414FB2D30425C1(&uVar4);
				unk_0x108754262311D34F(0, "oddjobs@shop_robbery@rob_till", "enter", 8f, -8f, 4000, 262144, 0, 0, 0, 0);
				unk_0x108754262311D34F(0, "oddjobs@shop_robbery@rob_till", "loop", 8f, -8f, 4000, 262145, 0, 0, 0, 0);
				unk_0x108754262311D34F(0, "oddjobs@shop_robbery@rob_till", "exit", 8f, -8f, 4000, 262144, 0, 0, 0, 0);
				unk_0xC734F59A13D39AEF(uVar4);
				unk_0x13A2D602CD10CBAC(unk_0x33CD235DF1E6A94E(), uVar4);
				unk_0x92A2FAFA76B7EC9B(unk_0x33CD235DF1E6A94E(), 0, -1, 0);
				unk_0x41E36A540F8F323F(unk_0x33CD235DF1E6A94E(), 200, 1);
				unk_0x41E36A540F8F323F(unk_0x33CD235DF1E6A94E(), 71, 1);
				bVar2 = unk_0x96C4B46F194803A7(unk_0x33CD235DF1E6A94E(), &iLocal_340, 1);
				if (bVar2)
				{
					unk_0x274C6068B660FFB4(unk_0x33CD235DF1E6A94E(), joaat("weapon_unarmed"), true);
				}
				unk_0x880B00F3FAE4C022(unk_0x33CD235DF1E6A94E(), 0, 0);
				if (!unk_0x117DAF3BF7232886(iLocal_337))
				{
					iLocal_337 = unk_0xB1A92B63D6757EEF(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				unk_0x5A488F57F21B3451(iLocal_337, unk_0x33CD235DF1E6A94E(), -0.1878f, 3.0635f, 0.68f, 1);
				unk_0x1C98D51D7C424A85(iLocal_337, unk_0x33CD235DF1E6A94E(), -0.0129f, 0.0927f, 0.3008f, 1);
				unk_0x63B608CD1957089E(iLocal_337, 35f);
				unk_0x083F68B89E3EA476(iLocal_337, "HAND_SHAKE", 0.1f);
				unk_0x189377BFBDC9127F(iLocal_337, true);
				unk_0x63F0B040CE6EDF0F(true, 0, 3000, 1, 0, 0);
			}
			iLocal_336 = 3;
			break;
		
		case 3:
			if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
			{
				if (!unk_0x117DAF3BF7232886(iLocal_338))
				{
					iLocal_338 = unk_0xB1A92B63D6757EEF(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				unk_0x5A488F57F21B3451(iLocal_338, unk_0x33CD235DF1E6A94E(), -1.0346f, 2.9183f, 0.68f, 1);
				unk_0x1C98D51D7C424A85(iLocal_338, unk_0x33CD235DF1E6A94E(), -0.0574f, 0.1074f, 0.3008f, 1);
				unk_0x63B608CD1957089E(iLocal_338, 35f);
				unk_0x083F68B89E3EA476(iLocal_338, "HAND_SHAKE", 0.1f);
				unk_0x8EB023915CEEDB99(iLocal_338, iLocal_337, 6000, 1, 1);
				unk_0x41E36A540F8F323F(unk_0x33CD235DF1E6A94E(), 71, 1);
				unk_0x92A2FAFA76B7EC9B(unk_0x33CD235DF1E6A94E(), 0, -1, 0);
				unk_0x41E36A540F8F323F(unk_0x33CD235DF1E6A94E(), 200, 1);
			}
			iLocal_336 = 4;
			break;
		
		case 4:
			if (!unk_0x6010B3CAC53496C3(iLocal_338))
			{
				iLocal_336 = 5;
			}
			else if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
			{
				if (unk_0x1CE8F0A08E65CA6A(unk_0x33CD235DF1E6A94E(), "oddjobs@shop_robbery@rob_till", "loop", 3))
				{
					fVar0 = unk_0x204DEACC5BECF723(unk_0x33CD235DF1E6A94E(), "oddjobs@shop_robbery@rob_till", "loop");
					if ((fVar0 > 0.374f && fVar0 <= 0.484f) || (fVar0 > 0.824f && fVar0 <= 0.92f))
					{
						if (!iLocal_339)
						{
							iVar5 = round(((IntToFloat(iLocal_132) * 0.75f) / 4f));
							iVar6 = round(((IntToFloat(iLocal_133) * 0.75f) / 4f));
							iVar1 = unk_0x9EC3B269A34A2BEE(iVar5, iVar6 + 1);
							iVar1 = func_217(iVar1, 1);
							if (iVar1 > (Global_262145.f_166 / 4))
							{
								iVar1 = (Global_262145.f_166 / 4);
							}
							if (func_216(unk_0x95B959F18401C09A()) && func_214(func_215(unk_0x95B959F18401C09A())) < 1f)
							{
								if (Global_262145.f_4226 > 1f)
								{
									Global_262145.f_4226 = 1f;
								}
								iVar1 = round((to_float(iVar1) * Global_262145.f_4226));
							}
							if (iVar1 > 0)
							{
								if (func_213())
								{
									func_202(1734805203, iVar1, &uVar7, 0, 0, 0);
								}
								else
								{
									func_198(iVar1, 1, 1, 1092616192);
									unk_0x21C816A90BEB45BA(iVar1);
								}
							}
							Global_2528542.f_5643 = (Global_2528542.f_5643 + iVar1);
							iLocal_335 = (iLocal_335 + iVar1);
							func_186(1, iLocal_335);
							unk_0x0F8EAEEC97DDBCB3(-1, "ROBBERY_MONEY_TOTAL", "HUD_FRONTEND_CUSTOM_SOUNDSET", 1);
							iLocal_339 = 1;
						}
					}
					else if (iLocal_339)
					{
						iLocal_339 = 0;
					}
				}
				unk_0x41E36A540F8F323F(unk_0x33CD235DF1E6A94E(), 71, 1);
				unk_0x92A2FAFA76B7EC9B(unk_0x33CD235DF1E6A94E(), 0, -1, 0);
				unk_0x41E36A540F8F323F(unk_0x33CD235DF1E6A94E(), 200, 1);
			}
			break;
		
		case 5:
			if (iLocal_340 != joaat("weapon_unarmed") && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
			{
				unk_0x274C6068B660FFB4(unk_0x33CD235DF1E6A94E(), iLocal_340, true);
			}
			unk_0x92A2FAFA76B7EC9B(unk_0x33CD235DF1E6A94E(), 1, -1, 0);
			unk_0xC7E6A5D90DED6E0B(0f);
			unk_0xD6EDA274D82E8678(0f, 1065353216);
			if (unk_0x117DAF3BF7232886(iLocal_337))
			{
				unk_0x2F8A4DF7D0DFF0A8(iLocal_337, 0);
			}
			if (unk_0x117DAF3BF7232886(iLocal_338))
			{
				unk_0x2F8A4DF7D0DFF0A8(iLocal_338, 0);
			}
			unk_0x63F0B040CE6EDF0F(false, 0, 3000, 1, 0, 0);
			unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), true, 0);
			Global_2528542.f_5643.f_2 = 1;
			Global_2528542.f_5643.f_5 = 1;
			if (func_182(1))
			{
				func_173(4);
			}
			iLocal_336 = 7;
			break;
		
		case 6:
			unk_0x189377BFBDC9127F(iLocal_338, false);
			unk_0x63F0B040CE6EDF0F(false, 0, 3000, 1, 0, 0);
			if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
			{
				unk_0x31826EF4A8BC8E9F(unk_0x33CD235DF1E6A94E());
			}
			iLocal_336 = 5;
			break;
	}
}

void func_255(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x1BCDA92AD0A7835B(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x71EC91BA8C88BCE0())
	{
		if (!*iParam0 == -1)
		{
			func_256(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_37139[iVar0 /*32*/])
		{
			Global_37139[iVar0 /*32*/] = 1;
			Global_37139[iVar0 /*32*/].f_1 = Global_37340;
			Global_37340++;
			Global_37139[iVar0 /*32*/].f_4 = 0;
			Global_37139[iVar0 /*32*/].f_29 = 0;
			Global_37139[iVar0 /*32*/].f_5 = 0;
			Global_37139[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_37139[iVar0 /*32*/].f_8), sParam2, 16);
			Global_37139[iVar0 /*32*/].f_6 = iParam3;
			Global_37139[iVar0 /*32*/].f_31 = unk_0x8C40DC84EDF05997();
			Global_37139[iVar0 /*32*/].f_7 = 0;
			Global_37139[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0x786AF4A44E1B5B4B(sParam4))
			{
				Global_37139[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_37139[iVar0 /*32*/].f_13), sParam4, 64);
				Global_37139[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_37139[iVar0 /*32*/].f_12 = 0;
				Global_37139[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_37139[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_256(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_257(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_37139[iVar0 /*32*/])
		{
			Global_37139[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_257(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_37139[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_258(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14553.f_1 > 3)
		{
			if (unk_0x0E4018692D92041D(Global_2423, 14))
			{
				if (Global_14552 == 1)
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
		else
		{
			return 0;
		}
	}
	if (unk_0x1BCDA92AD0A7835B(joaat("cellphone_flashhand")) > 0)
	{
		if (Global_14552 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (Global_14553.f_1 > 3)
	{
		if (Global_14552 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

bool func_259()
{
	return unk_0xE3903F59E2F22150() <= Global_17411.f_5878 + 100;
}

int func_260(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_261(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, var uParam5, int iParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	int iVar4;
	char* sVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	
	if (((uParam5->f_4 >= 1000 || (uParam5->f_4 + uParam0->f_51) >= 1000) || func_384(&(uParam5->f_5))) || (func_141(&(Global_2528542.f_10)) && !func_383(Global_2528542.f_10, 300000, 0)))
	{
		if (func_141(&(Global_2528542.f_10)))
		{
			if ((unk_0xE3903F59E2F22150() % 2500) < 50)
			{
			}
		}
		if (!uParam0->f_34)
		{
			uParam0->f_34 = 1;
			if (!func_141(&(Global_2528542.f_10)))
			{
				func_19(&(Global_2528542.f_10), 0, 0);
			}
		}
	}
	else
	{
		if (func_141(&(Global_2528542.f_10)))
		{
			func_14(&(Global_2528542.f_10));
		}
		if (uParam0->f_34)
		{
			uParam0->f_34 = 0;
		}
	}
	if ((unk_0xE3903F59E2F22150() % 5000) < 50)
	{
	}
	if ((((((uParam5->f_3 < 2 && func_46(unk_0x95B959F18401C09A(), 1, 1)) && unk_0x0E4018692D92041D(uParam0->f_52, 26)) && !func_382(-1082130432)) && unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) < 1) && !bParam7) && !func_387(*uParam5))
	{
		iVar4 = 0;
		if ((unk_0xD9C92B0885A075F8() && uParam0->f_54 != 0) && !unk_0xBAA5E93732372E34())
		{
			if (!bParam8)
			{
				uParam0->f_54 = 0;
				func_381(uParam0, &(iParam6->f_3));
			}
		}
		switch (uParam0->f_54)
		{
			case 0:
				if ((((!unk_0xD9C92B0885A075F8() && !unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1)) && !unk_0x6105CDB23E256B76(unk_0x33CD235DF1E6A94E())) && (!func_137(unk_0x95B959F18401C09A()) || func_95(unk_0x95B959F18401C09A()) == 154)) && !func_380(unk_0x95B959F18401C09A(), 21))
				{
					if (func_379(*uParam0, &uParam1, vParam4.z, &(uParam0->f_16[0 /*3*/]), &(uParam0->f_16[1 /*3*/]), &(uParam0->f_23), &(uParam0->f_26)))
					{
						vVar2 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 1) };
						vVar3 = { unk_0xFBB1F99A825CAB09(unk_0xBB28786B7F552D0B(*uParam5), 1) };
						if ((unk_0x16E00F066AFFEA0D(vVar2, uParam0->f_23, 1) < 5f && unk_0x7EECA16E87982278((vVar2.z - vVar3.z)) < 0.25f) || func_428(1))
						{
							if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), uParam0->f_16[0 /*3*/], uParam0->f_16[1 /*3*/], uParam0->f_26, 0, 1, 0) || func_428(1))
							{
								if (unk_0xC5DC7627BD3861CF(unk_0x33CD235DF1E6A94E(), uParam0->f_23, 135f) || func_428(1))
								{
									if (uParam0->f_34)
									{
										if (func_428(1))
										{
											func_401();
										}
										if (((!func_145("SHR_HOLDUP_1") && !func_145("SHR_MENU")) && !func_378()) && func_377())
										{
											func_147("SHR_SOLD_OUT", -1);
											uParam0->f_54 = 10;
										}
									}
									else
									{
										if (func_428(1))
										{
										}
										uParam0->f_14 = -1;
										func_255(&(uParam0->f_14), 4, "SHR_MENU", 0, 0, 0, 0);
										uParam0->f_54 = 2;
									}
								}
								else if ((unk_0xE3903F59E2F22150() % 8000) < 50)
								{
								}
							}
							else
							{
								if ((unk_0xE3903F59E2F22150() % 8000) < 50)
								{
								}
								unk_0x82EF7DCBEE45753D(vVar2, uParam0->f_16[0 /*3*/], 0, 0, 255, 255);
								unk_0x82EF7DCBEE45753D(vVar2, uParam0->f_16[1 /*3*/], 0, 0, 255, 255);
							}
						}
						else
						{
							if ((unk_0xE3903F59E2F22150() % 8000) < 50)
							{
							}
							unk_0x82EF7DCBEE45753D(vVar2, uParam0->f_23, 0, 0, 255, 255);
						}
					}
				}
				else
				{
					if (func_145("SHR_MENU"))
					{
						unk_0xEDF90B96BED57BCE(1);
					}
					if (func_40(unk_0x95B959F18401C09A()))
					{
						if (!unk_0x0E4018692D92041D(uParam0->f_53, 4))
						{
							func_147("SHR_FM_CRIT", -1);
							unk_0x19200462D21D0B7A(3, 21, 200, 0, 0);
							unk_0x8950ED5730F62EE8(&(uParam0->f_53), 4);
						}
					}
					if ((unk_0xE3903F59E2F22150() % 8000) < 50)
					{
					}
				}
				break;
			
			case 2:
				vVar2 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 1) };
				vVar3 = { unk_0xFBB1F99A825CAB09(unk_0xBB28786B7F552D0B(*uParam5), 1) };
				if ((!unk_0xC5DC7627BD3861CF(unk_0x33CD235DF1E6A94E(), uParam0->f_23, 135f) || unk_0x7EECA16E87982278((vVar2.z - vVar3.z)) >= 0.25f) && !func_428(1))
				{
					if (func_145("SHR_MENU"))
					{
						unk_0xEDF90B96BED57BCE(1);
					}
					func_256(&(uParam0->f_14));
					uParam0->f_54 = 0;
				}
				if (unk_0xD9C92B0885A075F8())
				{
					if (func_145("SHR_MENU"))
					{
						unk_0xEDF90B96BED57BCE(1);
					}
					func_256(&(uParam0->f_14));
					uParam0->f_54 = 0;
				}
				if (func_167(0) || func_166())
				{
					if (func_145("SHR_MENU"))
					{
						unk_0xEDF90B96BED57BCE(1);
					}
					func_256(&(uParam0->f_14));
					func_161(1, *uParam0);
					unk_0xCE689A8E8C42ED78(&(uParam0->f_52), 26);
					uParam0->f_54 = 0;
				}
				if (!unk_0x6105CDB23E256B76(unk_0x33CD235DF1E6A94E()))
				{
					if (func_376(uParam0->f_14, 1) || func_428(1))
					{
						if (func_428(1))
						{
							func_401();
						}
						if (func_145("SHR_MENU"))
						{
							unk_0xEDF90B96BED57BCE(1);
						}
						func_374(&(uParam0->f_44));
						func_256(&(uParam0->f_14));
						func_368(0, 0);
						unk_0x8950ED5730F62EE8(&(uParam0->f_53), 7);
						func_419(unk_0x95B959F18401C09A(), 0, 66048, 0);
						unk_0x9F86AEF7DC996029();
						if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()) && !func_387(*uParam5))
						{
							unk_0x11C4AF4137F2A4B5(unk_0x33CD235DF1E6A94E(), unk_0xBB28786B7F552D0B(*uParam5), 0);
							unk_0xCE689A8E8C42ED78(&(iParam6->f_1), 1);
						}
						func_367();
						uParam0->f_54 = 3;
					}
				}
				break;
			
			case 3:
				if (!bParam8)
				{
					if (!unk_0x117DAF3BF7232886(uParam0->f_1))
					{
						uParam0->f_1 = unk_0xB1A92B63D6757EEF(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
						func_366(*uParam0, &(uParam0->f_2), &(uParam0->f_5), &fVar6);
						unk_0xFA3130C046AC45A7(uParam0->f_1, uParam0->f_2);
						unk_0x833A05A7AD82EA44(uParam0->f_1, uParam0->f_5, 2);
						unk_0x63B608CD1957089E(uParam0->f_1, fVar6);
						unk_0x083F68B89E3EA476(uParam0->f_1, "HAND_SHAKE", 0.1f);
						unk_0x189377BFBDC9127F(uParam0->f_1, true);
						unk_0x63F0B040CE6EDF0F(true, 0, 3000, 1, 0, 0);
					}
					uParam0->f_37 = func_389(*uParam0);
				}
				if (unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A()))
				{
					unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), false, 0);
				}
				uParam0->f_13 = 6;
				func_365(0, 0);
				func_364(1, 1, 0, 0, 0);
				func_363(1, 2, 1, 1, 1);
				func_362("SNK_ITEM");
				if (!bParam8)
				{
					func_360(1, uParam0->f_37, uParam0->f_37);
				}
				iVar7 = 0;
				while (iVar7 < uParam0->f_13)
				{
					func_355(iVar7, func_359(iVar7), 0, 1, 0, 0);
					if (uParam5->f_5[iVar7] >= 10 || ((func_141(&(Global_2528542.f_12[iVar7 /*2*/])) && !func_383(Global_2528542.f_12[iVar7 /*2*/], 150000, 0)) && *uParam0 == Global_2528542.f_27))
					{
						func_355(iVar7, "", 1, 1, 0, 0);
						func_354(15, 0);
						if (func_141(&(Global_2528542.f_12[iVar7 /*2*/])) && !func_383(Global_2528542.f_12[iVar7 /*2*/], 150000, 0))
						{
							uParam5->f_5[iVar7] = 10;
						}
						if (!func_141(&(Global_2528542.f_12[iVar7 /*2*/])))
						{
							Global_2528542.f_27 = *uParam0;
							func_19(&(Global_2528542.f_12[iVar7 /*2*/]), 0, 0);
						}
					}
					else if (func_351(iVar7))
					{
						func_355(iVar7, "SNK_FULL", 0, 1, 0, 0);
					}
					else if (!bParam8)
					{
						func_355(iVar7, "ITEM_COST", 1, 1, 0, 0);
						func_347(func_350(uParam0, iVar7), 0);
					}
					else
					{
						func_355(iVar7, "SNK_FREE", 0, 1, 0, 0);
					}
					iVar7++;
				}
				func_346(0);
				func_345(uParam0->f_12, 1, 1);
				if (uParam0->f_35)
				{
					if (!bParam8)
					{
						func_344("SNK_BOUGHT", 0, 0);
					}
					else
					{
						func_344("SNK_STORED", 0, 0);
					}
				}
				else if (uParam5->f_5[uParam0->f_12] >= 10)
				{
					func_344("SNK_SOUT", 0, 0);
				}
				else
				{
					func_344(func_343(uParam0->f_12), 0, 0);
				}
				func_342(201, "ITEM_SELECT", -1, 0);
				func_342(202, "ITEM_BACK", -1, 0);
				if (!bParam8)
				{
					func_342(203, "SNK_LIFT", -1, 0);
					func_309(1, *uParam0, 1, 0, 1, -1082130432, 0, 0, -1);
				}
				uParam0->f_54 = 4;
				break;
			
			case 4:
				if (unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A()))
				{
					unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), false, 0);
				}
				if (unk_0xD76D6BCC14B95CE1(unk_0x33CD235DF1E6A94E(), -875674219) == 7)
				{
					if (!unk_0x0E4018692D92041D(iParam6->f_1, 1))
					{
						if (!bParam8)
						{
							func_419(unk_0x95B959F18401C09A(), 0, 98816, 0);
						}
						else
						{
							func_419(unk_0x95B959F18401C09A(), 0, 256, 0);
						}
						unk_0x8950ED5730F62EE8(&(iParam6->f_1), 1);
					}
				}
				iVar4 = 0;
				if (unk_0x4CE1DD5CFC1F941E())
				{
					if (unk_0x33CAB544FAAE661D(2))
					{
						unk_0x3FD9339AA95E323F(0, 1, 1);
						unk_0x3FD9339AA95E323F(0, 2, 1);
						unk_0xAE4810E427AD9203(0, 237, 1);
						unk_0xAE4810E427AD9203(0, 238, 1);
						unk_0xAE4810E427AD9203(0, 241, 1);
						unk_0xAE4810E427AD9203(0, 242, 1);
						func_305(0, 0, 0, 1);
						func_304(0, -1, 1);
						if (func_303())
						{
							if (Global_4268040 != uParam0->f_12)
							{
								unk_0x0F8EAEEC97DDBCB3(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								uParam0->f_12 = Global_4268040;
								func_345(uParam0->f_12, 1, 1);
								uParam0->f_27 = 0;
								uParam0->f_29 = 0;
								uParam0->f_30 = 0;
								uParam0->f_32 = 0;
								sVar5 = func_343(uParam0->f_12);
								if (unk_0xEAF855A7DC28BC8D(sVar5))
								{
									func_344(sVar5, 0, 0);
								}
							}
							else
							{
								iVar4 = 1;
							}
						}
					}
				}
				if (!bParam8)
				{
					func_309(1, *uParam0, 1, 0, 1, -1082130432, 0, 0, -1);
				}
				func_293(uParam0, &(uParam5->f_5), bParam8);
				if ((uParam5->f_2 > 2 && unk_0x0E4018692D92041D(uParam5->f_1, 0)) && unk_0x0E4018692D92041D(iParam6->f_1, 0))
				{
					unk_0xCE689A8E8C42ED78(&(iParam6->f_1), 0);
				}
				if ((unk_0x833B1A3D9F713E03(2, 201) || iVar4 == 1) || uParam0->f_47)
				{
					if (!uParam0->f_47)
					{
						uParam0->f_27 = 1;
						uParam0->f_29 = 0;
						uParam0->f_30 = 0;
						uParam0->f_32 = 0;
						func_374(&(uParam0->f_44));
					}
					if ((uParam0->f_28 && uParam0->f_31) && uParam0->f_33)
					{
						if (func_213())
						{
							uParam0->f_47 = 1;
							uParam0->f_48 = 0;
							uParam0->f_49 = -1;
							iVar0 = 0;
							if (!bParam8)
							{
								iVar0 = func_350(uParam0, uParam0->f_12);
							}
							func_281(uParam0, -1303831698, 537254313, iVar0);
							uParam0->f_54 = 5;
						}
						else
						{
							uParam0->f_35 = 1;
							unk_0x0F8EAEEC97DDBCB3(-1, "PURCHASE", "HUD_LIQUOR_STORE_SOUNDSET", 1);
							uParam5->f_5[uParam0->f_12]++;
							uParam0->f_54 = 6;
						}
					}
					else
					{
						uParam0->f_35 = 0;
						if (!uParam0->f_28 && !uParam0->f_36)
						{
							iVar0 = 0;
							if (!bParam8)
							{
								iVar0 = func_350(uParam0, uParam0->f_12);
							}
							func_280(unk_0x36163153849DFDA1(func_343(uParam0->f_12)), iVar0, 0);
							func_273(0, 31, 3);
							uParam0->f_54 = 11;
						}
						unk_0x0F8EAEEC97DDBCB3(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", 1);
					}
					if (!uParam0->f_33)
					{
						uParam0->f_54 = 3;
					}
				}
				if (!bParam8)
				{
					if (unk_0x833B1A3D9F713E03(2, 203) && !uParam0->f_47)
					{
						uParam0->f_27 = 1;
						if (uParam5->f_5[uParam0->f_12] < 10)
						{
							uParam0->f_33 = 1;
						}
						else
						{
							uParam0->f_33 = 0;
						}
						func_374(&(uParam0->f_44));
						if (!uParam0->f_33)
						{
							unk_0x0F8EAEEC97DDBCB3(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", 1);
						}
						else if (!uParam0->f_31)
						{
							unk_0x0F8EAEEC97DDBCB3(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", 1);
						}
						else
						{
							unk_0x108754262311D34F(unk_0x33CD235DF1E6A94E(), func_157(), func_272(), 8f, -8f, -1, 1048576, 0, 0, 0, 0);
							uParam0->f_54 = 8;
							uParam0->f_15 = unk_0xE3903F59E2F22150();
							unk_0x0F8EAEEC97DDBCB3(-1, "SELECT", "HUD_LIQUOR_STORE_SOUNDSET", 1);
							if (!bParam8)
							{
								func_381(uParam0, &(iParam6->f_3));
							}
						}
					}
				}
				if (unk_0x833B1A3D9F713E03(2, 202) || unk_0x1771F6BAF60B44FA(2, 238))
				{
					if (func_428(1))
					{
						func_401();
					}
					uParam0->f_54 = 9;
					uParam0->f_15 = unk_0xE3903F59E2F22150();
					if (!bParam8)
					{
						unk_0x0F8EAEEC97DDBCB3(-1, "CANCEL", "HUD_LIQUOR_STORE_SOUNDSET", 1);
						func_381(uParam0, &(iParam6->f_3));
					}
					else
					{
						unk_0x0F8EAEEC97DDBCB3(-1, "BACK", "HUD_FREEMODE_SOUNDSET", 1);
						Global_2458643 = 1;
					}
				}
				if (uParam0->f_34)
				{
					uParam0->f_54 = 10;
					uParam0->f_15 = unk_0xE3903F59E2F22150();
					if (!bParam8)
					{
						func_381(uParam0, &(iParam6->f_3));
					}
					func_147("SHR_SOLD_OUT", -1);
				}
				iVar8 = 0;
				while (iVar8 < uParam0->f_13)
				{
					if (func_141(&(Global_2528542.f_12[iVar8 /*2*/])) && func_383(Global_2528542.f_12[iVar8 /*2*/], 150000, 0))
					{
						func_14(&(Global_2528542.f_12[iVar8 /*2*/]));
						uParam5->f_5[iVar8] = 0;
						uParam0->f_54 = 3;
					}
					iVar8++;
				}
				break;
			
			case 5:
				iVar0 = 0;
				if (!bParam8)
				{
					func_309(1, *uParam0, 1, 0, 1, -1082130432, 0, 0, -1);
					iVar0 = func_350(uParam0, uParam0->f_12);
				}
				if (func_281(uParam0, -1303831698, 537254313, iVar0))
				{
				}
				else
				{
					switch (uParam0->f_49)
					{
						case 0:
							uParam0->f_35 = 0;
							if (!uParam0->f_28 && !uParam0->f_36)
							{
								if (!bParam8)
								{
									iVar0 = func_350(uParam0, uParam0->f_12);
								}
								func_280(unk_0x36163153849DFDA1(func_343(uParam0->f_12)), iVar0, 0);
								func_273(0, 31, 3);
								func_271();
								func_270();
								uParam0->f_54 = 11;
							}
							else
							{
								if (func_428(1))
								{
									func_401();
								}
								uParam0->f_54 = 9;
								uParam0->f_15 = unk_0xE3903F59E2F22150();
								unk_0x0F8EAEEC97DDBCB3(-1, "CANCEL", "HUD_LIQUOR_STORE_SOUNDSET", 1);
								if (!bParam8)
								{
									func_381(uParam0, &(iParam6->f_3));
								}
							}
							break;
						
						case 2:
							uParam0->f_35 = 1;
							unk_0x0F8EAEEC97DDBCB3(-1, "PURCHASE", "HUD_LIQUOR_STORE_SOUNDSET", 1);
							uParam5->f_5[uParam0->f_12]++;
							uParam0->f_54 = 6;
							break;
						
						default:
							break;
						}
				}
				break;
			
			case 6:
				if (!bParam8)
				{
					func_309(1, *uParam0, 1, 0, 1, -1082130432, 0, 0, -1);
				}
				if (func_213())
				{
					unk_0x9409D2F56E25B407(func_268(func_269()));
				}
				if (bParam8)
				{
					if (!unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_117, 6))
					{
						unk_0xDE8005FB0797ABCC(1, uParam0->f_12, 0, 1);
						unk_0x8950ED5730F62EE8(&(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_273.f_117), 6);
					}
					iVar1 = 0;
					switch (uParam0->f_12)
					{
						case 3:
							func_104(1275, 1, -1);
							func_103(16, 1, -1, 1);
							break;
						
						case 1:
							func_104(1276, 1, -1);
							func_103(15, 1, -1, 1);
							break;
						
						case 2:
							func_103(14, 1, -1, 1);
							func_104(1277, 1, -1);
							break;
						
						case 4:
							uParam0->f_55 = 20;
							if (func_125(1097, -1, 0) + 20 > 20)
							{
								uParam0->f_55 = (20 - func_125(1097, -1, 0));
							}
							func_104(1097, uParam0->f_55, -1);
							break;
						
						case 0:
							func_104(62, 1, -1);
							break;
						
						case 5:
							func_104(63, 1, -1);
							break;
					}
				}
				else
				{
					switch (uParam0->f_12)
					{
						case 3:
							if (func_267(unk_0x95B959F18401C09A(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_350(uParam0, uParam0->f_12);
							}
							func_104(1275, 1, -1);
							func_103(16, 1, -1, 1);
							unk_0x68642A60A49B0D2B(iVar1, unk_0x36163153849DFDA1("SNK_ITEM1"), 12, 1, false, 0, 0, 0, 0, 1);
							break;
						
						case 1:
							if (func_267(unk_0x95B959F18401C09A(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_350(uParam0, uParam0->f_12);
							}
							func_104(1276, 1, -1);
							func_103(15, 1, -1, 1);
							unk_0x68642A60A49B0D2B(iVar1, unk_0x36163153849DFDA1("SNK_ITEM2"), 12, 1, false, 0, 0, 0, 0, 1);
							break;
						
						case 2:
							if (func_267(unk_0x95B959F18401C09A(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_350(uParam0, uParam0->f_12);
							}
							func_103(14, 1, -1, 1);
							func_104(1277, 1, -1);
							unk_0x68642A60A49B0D2B(iVar1, unk_0x36163153849DFDA1("SNK_ITEM3"), 12, 1, false, 0, 0, 0, 0, 1);
							break;
						
						case 4:
							if (func_267(unk_0x95B959F18401C09A(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_350(uParam0, uParam0->f_12);
							}
							uParam0->f_55 = 20;
							if (func_125(1097, -1, 0) + 20 > 20)
							{
								uParam0->f_55 = (20 - func_125(1097, -1, 0));
							}
							func_104(1097, uParam0->f_55, -1);
							unk_0x68642A60A49B0D2B(iVar1, unk_0x36163153849DFDA1("SNK_ITEM4"), 12, 1, false, 0, 0, 0, 0, 1);
							break;
						
						case 0:
							if (func_267(unk_0x95B959F18401C09A(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_350(uParam0, uParam0->f_12);
							}
							func_104(62, 1, -1);
							unk_0x68642A60A49B0D2B(iVar1, unk_0x36163153849DFDA1("SNK_ITEM5"), 12, 1, false, 0, 0, 0, 0, 1);
							break;
						
						case 5:
							if (func_267(unk_0x95B959F18401C09A(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_350(uParam0, uParam0->f_12);
							}
							func_104(63, 1, -1);
							unk_0x68642A60A49B0D2B(iVar1, unk_0x36163153849DFDA1("SNK_ITEM6"), 12, 1, false, 0, 0, 0, 0, 1);
							break;
						}
				}
				if (func_213())
				{
					func_205(func_269());
				}
				func_266(-iVar1, 0);
				uParam0->f_51 = (uParam0->f_51 + iVar1);
				if (!unk_0x0E4018692D92041D(*iParam6, 30))
				{
					unk_0x8950ED5730F62EE8(iParam6, 30);
				}
				if (!unk_0x0E4018692D92041D(iParam6->f_1, 0))
				{
					unk_0x8950ED5730F62EE8(&(iParam6->f_1), 0);
					iParam6->f_2 = uParam0->f_12;
				}
				if (uParam0->f_34 || uParam0->f_51 >= 1000)
				{
					uParam0->f_54 = 10;
					if (!bParam8)
					{
						func_381(uParam0, &(iParam6->f_3));
					}
					func_147("SHR_SOLD_OUT", -1);
				}
				else if (uParam5->f_5[uParam0->f_12] >= 10 || func_351(uParam0->f_12))
				{
					uParam0->f_54 = 3;
				}
				else
				{
					uParam0->f_54 = 4;
				}
				break;
			
			case 8:
				func_192(1);
				switch (uParam0->f_12)
				{
					case 3:
						func_264(0, 1f, 3);
						func_104(1275, 1, -1);
						func_103(13, 1, -1, 1);
						break;
					
					case 1:
						func_264(1, 1f, 3);
						func_104(1276, 1, -1);
						func_103(13, 1, -1, 1);
						break;
					
					case 2:
						func_264(2, 1f, 3);
						func_104(1277, 1, -1);
						func_103(13, 1, -1, 1);
						break;
					
					case 4:
						uParam0->f_55 = 20;
						if (func_125(1097, -1, 0) + 20 > 20)
						{
							uParam0->f_55 = (20 - func_125(1097, -1, 0));
						}
						func_264(5, to_float(uParam0->f_55), 3);
						func_104(1097, uParam0->f_55, -1);
						break;
					
					case 0:
						func_264(3, 1f, 3);
						func_104(62, 1, -1);
						break;
					
					case 5:
						func_264(4, 1f, 3);
						func_104(63, 1, -1);
						break;
				}
				if (!bParam8)
				{
					func_419(unk_0x95B959F18401C09A(), 1, 0, 0);
				}
				if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) < 1 && !func_262(unk_0x95B959F18401C09A()))
				{
					unk_0xD155487E7E231D33(unk_0x95B959F18401C09A(), 37, unk_0xC223020D5BE76715(1));
					unk_0x8950ED5730F62EE8(iParam6, 25);
					if (!unk_0x0E4018692D92041D(*iParam6, 1))
					{
						unk_0x8950ED5730F62EE8(iParam6, 2);
					}
				}
				if (!unk_0x0E4018692D92041D(iParam6->f_1, 2))
				{
					unk_0x8950ED5730F62EE8(&(iParam6->f_1), 2);
				}
				uParam0->f_54 = 12;
				break;
			
			case 11:
				if (!Global_93734.f_1409 && !unk_0xBAA5E93732372E34())
				{
					uParam0->f_54 = 4;
				}
				break;
			
			case 10:
				if (!bParam8)
				{
					func_419(unk_0x95B959F18401C09A(), 1, 0, 0);
				}
				if ((unk_0xE3903F59E2F22150() - uParam0->f_15) > 1000)
				{
					uParam0->f_54 = 12;
				}
				else
				{
					unk_0x144904D2EAA84341(2, 203);
					unk_0x144904D2EAA84341(2, 202);
					unk_0x144904D2EAA84341(2, 188);
					unk_0x144904D2EAA84341(2, 187);
					unk_0x144904D2EAA84341(2, 189);
					unk_0x144904D2EAA84341(2, 190);
				}
				break;
			
			case 9:
				if ((unk_0xE3903F59E2F22150() - uParam0->f_15) > 1000)
				{
					uParam0->f_54 = 0;
				}
				else
				{
					unk_0x144904D2EAA84341(2, 203);
					unk_0x144904D2EAA84341(2, 202);
					unk_0x144904D2EAA84341(2, 188);
					unk_0x144904D2EAA84341(2, 187);
					unk_0x144904D2EAA84341(2, 189);
					unk_0x144904D2EAA84341(2, 190);
				}
				break;
			
			case 12:
				if (unk_0x0E4018692D92041D(uParam5->f_1, 3))
				{
					if (unk_0x0E4018692D92041D(iParam6->f_1, 2))
					{
						unk_0xCE689A8E8C42ED78(&(iParam6->f_1), 2);
					}
					if (unk_0x0E4018692D92041D(iParam6->f_1, 3))
					{
						unk_0xCE689A8E8C42ED78(&(iParam6->f_1), 3);
					}
				}
				break;
		}
	}
	else
	{
		if ((unk_0xE3903F59E2F22150() % 8000) < 50)
		{
		}
		if (unk_0x0E4018692D92041D(uParam5->f_1, 3))
		{
			if (unk_0x0E4018692D92041D(iParam6->f_1, 2))
			{
				unk_0xCE689A8E8C42ED78(&(iParam6->f_1), 2);
			}
			if (unk_0x0E4018692D92041D(iParam6->f_1, 3))
			{
				unk_0xCE689A8E8C42ED78(&(iParam6->f_1), 3);
			}
		}
		if ((uParam0->f_54 != 12 && unk_0x0E4018692D92041D(uParam0->f_52, 26)) && !unk_0xBAA5E93732372E34())
		{
			if ((((uParam0->f_54 == 4 || uParam0->f_54 == 3) || uParam0->f_54 == 6) || uParam0->f_54 == 11) || uParam0->f_54 == 5)
			{
				func_381(uParam0, &(iParam6->f_3));
			}
			uParam0->f_54 = 12;
		}
		if (uParam0->f_14 != -1)
		{
			func_256(&(uParam0->f_14));
		}
	}
}

int func_262(int iParam0)
{
	if ((func_40(iParam0) || func_263(iParam0)) && func_214(func_215(iParam0)) == 0f)
	{
		return 1;
	}
	return 0;
}

int func_263(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x0E4018692D92041D(Global_1626536[iVar0 /*603*/].f_1, 7);
	}
	return 0;
}

void func_264(int iParam0, float fParam1, int iParam2)
{
	struct<8> Var0;
	vector3 vVar1;
	int iVar2;
	int iVar3;
	
	if (fParam1 > 0f)
	{
		if (func_265(iParam0, &Var0))
		{
			vVar1 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 0) };
			func_192(1);
			iVar3 = -1;
			iVar2 = 0;
			while (iVar2 < 20)
			{
				if (Global_2437364.f_1289[iVar2 /*30*/].f_6 == 0 || Global_2437364.f_1289[iVar2 /*30*/].f_6 == 7)
				{
					iVar3 = iVar2;
					iVar2 = 20;
				}
				iVar2++;
			}
			if (iVar3 != -1)
			{
				Global_2437364.f_1289[iVar3 /*30*/] = { vVar1 };
				Global_2437364.f_1289[iVar3 /*30*/].f_6 = 1;
				Global_2437364.f_1289[iVar3 /*30*/].f_4 = func_191(Global_2437364.f_1289[iVar3 /*30*/], &Global_1312317, &Global_1312318);
				Global_2437364.f_1289[iVar3 /*30*/].f_5 = fParam1;
				Global_2437364.f_1289[iVar3 /*30*/].f_7 = unk_0x78DCC5D0CB43DEBA();
				Global_2437364.f_1289[iVar3 /*30*/].f_8 = iParam2;
				Global_2437364.f_1289[iVar3 /*30*/].f_14 = { Var0 };
				Global_2437364.f_1289[iVar3 /*30*/].f_9 = func_190();
				Global_2437364.f_1289[iVar3 /*30*/].f_10 = func_189();
			}
		}
	}
}

int func_265(int iParam0, char* sParam1)
{
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "PU_REWARD_S1", 32);
			return 1;
		
		case 1:
			StringCopy(sParam1, "PU_REWARD_S2", 32);
			return 1;
		
		case 2:
			StringCopy(sParam1, "PU_REWARD_S3", 32);
			return 1;
		
		case 3:
			StringCopy(sParam1, "PU_REWARD_D1", 32);
			return 1;
		
		case 4:
			StringCopy(sParam1, "PU_REWARD_D2", 32);
			return 1;
		
		case 5:
			StringCopy(sParam1, "PU_REWARD_11", 32);
			return 1;
		
		case 6:
			StringCopy(sParam1, "PU_REWARD_PC", 32);
			return 1;
		
		default:
	}
	return 0;
}

void func_266(int iParam0, int iParam1)
{
	func_200(iParam0, 1, 1, 0);
	if (iParam1 == 1)
	{
		func_201(iParam0, 0);
	}
}

int func_267(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_179())
	{
		return 0;
	}
	if (unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_23, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_273.f_23, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_268(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263509[iParam0 /*84*/].f_65;
	}
	return -1;
}

int func_269()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_268(iVar0) != 2147483647)
		{
			if (func_208(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_270()
{
	Global_2448756.f_672.f_32 = 1;
}

void func_271()
{
	Global_2448756.f_672.f_28 = 1;
	Global_2448756.f_672.f_32 = 0;
	Global_2448756.f_672.f_31 = unk_0x36163153849DFDA1(unk_0xD178EF744F20B712());
	func_14(&(Global_2448756.f_672.f_29));
}

char* func_272()
{
	if (func_13())
	{
		return "Shoplift_Mid";
	}
	return "Shoplift_Low";
}

void func_273(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0x0DB260A75EDF2C76())
	{
		return;
	}
	if (unk_0xB331FCEB94EB05C8() && func_277(unk_0x95B959F18401C09A(), 1))
	{
		return;
	}
	if (unk_0xF1CDE9FD207C4CD8(2, 199) || unk_0x1CAA347A3C84C225(2, 199))
	{
		return;
	}
	if (unk_0x1B9A01A53920FD50() != 0)
	{
		return;
	}
	if (unk_0xD9C92B0885A075F8())
	{
		return;
	}
	if (unk_0x24B9147563567EC4())
	{
		return;
	}
	if (unk_0x15C85368E432C647())
	{
		return;
	}
	if (func_276())
	{
		return;
	}
	if (!func_274())
	{
		return;
	}
	if (unk_0xB331FCEB94EB05C8() || iParam0)
	{
		if (!Global_93734.f_1409 && !unk_0xBAA5E93732372E34())
		{
			iVar0 = 18;
			_set_warning_message_2("BRSCRWTEX", "BRDISTEX", iVar0, "BRSHETEX", 0, -1, 0, 0, 1, 0);
			Global_2459667 = iParam1;
			Global_93734.f_1409 = 1;
			Global_93734.f_1410 = iParam2;
		}
	}
}

int func_274()
{
	if (func_275())
	{
		return 0;
	}
	if (unk_0xB16BC34F6CB4A57A() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_275()
{
	return Global_2459114;
}

bool func_276()
{
	return Global_2459772;
}

int func_277(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_278(iParam0))
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

bool func_278(int iParam0)
{
	return func_279(iParam0);
}

bool func_279(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_1589819[iParam0 /*818*/].f_13.f_1, 0);
}

void func_280(int iParam0, int iParam1, int iParam2)
{
	Global_93734.f_1411 = iParam0;
	Global_93734.f_1412 = iParam1;
	Global_93734.f_1413 = iParam2;
}

int func_281(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	char* sVar4;
	
	if (uParam0->f_47)
	{
		switch (uParam0->f_48)
		{
			case 0:
				iVar0 = 0;
				iVar1 = 0;
				iVar2 = iParam3;
				if (unk_0xE52C61F31682D1EA() > 0)
				{
					if (unk_0xE52C61F31682D1EA() >= iVar2)
					{
						iVar1 = iVar2;
					}
					else
					{
						iVar1 = (iVar2 - (iVar2 - unk_0xE52C61F31682D1EA()));
					}
					iVar2 = (iVar2 - iVar1);
				}
				if (iVar2 > 0)
				{
					if (unk_0xF69DA3FD5AA96104(-1) > 0)
					{
						if (unk_0xF69DA3FD5AA96104(-1) >= iVar2)
						{
							iVar0 = iVar2;
						}
						else
						{
							iVar0 = (iVar2 - (iVar2 - unk_0xF69DA3FD5AA96104(-1)));
						}
						iVar2 = (iVar2 - iVar0);
					}
				}
				cVar3 = func_359(uParam0->f_12);
				func_289(&sVar4, cVar3, func_290(uParam0));
				if (func_286(78225582, iParam1, unk_0x36163153849DFDA1(&sVar4), iParam2, 1, iParam3, 1, 8, 0, 3))
				{
					if (func_284())
					{
						unk_0xA184A5D3685DBB01(1);
						unk_0xC217D8CA7BD476EA(-iVar0, -iVar1);
						uParam0->f_48 = 1;
					}
					else
					{
						uParam0->f_48 = 3;
					}
				}
				else
				{
					uParam0->f_48 = 3;
				}
				break;
			
			case 1:
				if (func_283(func_269()))
				{
					if (func_282(func_269()) == 2)
					{
						uParam0->f_48 = 2;
					}
					else
					{
						uParam0->f_48 = 3;
					}
				}
				break;
			
			case 2:
				uParam0->f_47 = 0;
				uParam0->f_48 = 0;
				unk_0xA184A5D3685DBB01(0);
				unk_0x581AE7724ACAD410(13);
				uParam0->f_49 = 2;
				return 0;
				break;
			
			case 3:
				func_205(func_269());
				uParam0->f_47 = 0;
				uParam0->f_48 = 0;
				unk_0xA184A5D3685DBB01(0);
				unk_0x581AE7724ACAD410(13);
				uParam0->f_49 = 0;
				return 0;
				break;
		}
		return 1;
	}
	uParam0->f_48 = 0;
	uParam0->f_49 = -1;
	return 0;
}

int func_282(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263509[iParam0 /*84*/].f_65.f_2;
	}
	return 0;
}

int func_283(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263509[iParam0 /*84*/].f_65.f_2 != 1;
	}
	return 0;
}

int func_284()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_213())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_269();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0xB412AA3DEE298A52(func_79()) || unk_0x2832F5CD8A109CD6())
		{
			if (func_285(Global_4263509[iVar2 /*84*/].f_65.f_6, Global_4263509[iVar2 /*84*/].f_65.f_4, Global_4263509[iVar2 /*84*/].f_65.f_1) == 1)
			{
				Global_4264085 = 1;
			}
			return 0;
		}
		if (Global_2459772)
		{
			if (Global_4263509[iVar2 /*84*/].f_65.f_6 == 1067618600 || Global_4263509[iVar2 /*84*/].f_65.f_6 == -1303831698)
			{
				Global_4264086 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_268(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || unk_0x64875ABCC43EF9A8(iVar3))
		{
			Global_4263509[iVar2 /*84*/].f_65.f_13 = 1;
			Global_4263509[iVar2 /*84*/].f_65.f_12 = 0;
			Global_4263509[iVar2 /*84*/].f_65.f_14 = unk_0xE77FA521699F639C();
			if (bVar0)
			{
				Global_4263509[iVar2 /*84*/].f_65.f_8 = 1;
				Global_4263509[iVar2 /*84*/].f_65.f_12 = 1;
			}
			Global_4263509[iVar2 /*84*/].f_65.f_18 = 0;
			if (bVar0 || iVar1)
			{
				func_211(Global_4263509[iVar2 /*84*/], iVar2);
			}
			Global_4264070 = 1;
			return 1;
		}
	}
	return 0;
}

int func_285(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -31156877:
			case -327918414:
			case 550898518:
			case 835976347:
			case 1347433368:
			case -1100963799:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case 1982688246:
				return 0;
				break;
			
			case 1718438689:
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
			case -664597565:
			case 599804707:
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
			case 443347049:
			case 403506509:
			case -883876414:
			case -1064150715:
			case -1387253055:
			case -716963152:
			case 1138089938:
			case -561012053:
			case 1240683675:
			case 1241904665:
			case -494565059:
			case 827308208:
			case -1857685192:
			case 1698417709:
			case -2017925037:
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
				return 1;
				break;
			
			case 1515774909:
			case 1173654533:
			case -899802304:
			case -663944335:
			case 1208553146:
			case -613221010:
			case -671062876:
			case 291576838:
			case -1276678868:
			case 711665950:
			case -407201236:
			case -754024203:
			case -1885444887:
			case 1931729587:
			case 1064954035:
			case -180141073:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case -876847842:
			case 68030260:
				return 2;
				break;
			
			default:
				return 0;
				break;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_286(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_213())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0xB412AA3DEE298A52(func_79()) || unk_0x2832F5CD8A109CD6())
		{
			Global_4264085 = 1;
			return 0;
		}
		if (Global_2459772)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_4264086 = 1;
				return 0;
			}
		}
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar1 = func_269();
	if (iVar1 == -1)
	{
		if (!func_288(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_287(iParam1))
		{
			Var2 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = uParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = uParam5;
			Var2.f_3 = iParam6;
		}
		Global_4263509[iVar1 /*84*/].f_65.f_1 = Var2.f_2;
		Global_4263509[iVar1 /*84*/].f_65.f_15 = Var2;
		Global_4263509[iVar1 /*84*/].f_65.f_16 = Var2.f_1;
		if (bVar0 || unk_0xB8D8D71C45A12097(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_287(int iParam0)
{
	switch (iParam0)
	{
		case -221807075:
		case -1224924353:
		case -2121967344:
		case 1394405165:
		case -2052814106:
		case 1701289268:
		case -1796535835:
		case -1928802392:
		case 581564040:
		case 23048035:
		case 2117376854:
		case -1377881127:
		case -504675202:
		case 1906937290:
		case -1616616027:
		case -1799524201:
		case 269396419:
		case 69656641:
		case -103880010:
		case -1494913648:
			return 1;
			break;
	}
	return 0;
}

int func_288(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_213())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0xB412AA3DEE298A52(func_79()) || unk_0x2832F5CD8A109CD6())
		{
			Global_4264085 = 1;
			return 0;
		}
		if (Global_2459772)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_4264086 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_4263509[iVar1 /*84*/].f_65.f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_4263509[iVar1 /*84*/].f_65.f_5 == 1)
		{
			return 0;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*iParam0 = 0;
	if (!bVar0)
	{
		if (unk_0x8FE916202B7400CC())
		{
			unk_0x9CB3557CC6EF3B3E();
		}
	}
	if (bVar0 || unk_0xB2D302D2C9D6672F(&iVar3, iParam2, iParam3, iParam4))
	{
		*iParam0 = func_210(iVar3, iParam1, -2085313189, iParam3, iParam2, 0, 1, iParam4, uParam5, 0, bVar0);
		return 1;
	}
	return 0;
}

void func_289(char* sParam0, char* sParam1, int iParam2)
{
	StringCopy(sParam0, "MT_", 64);
	StringConCat(sParam0, sParam1, 64);
	StringConCat(sParam0, "_t0_v", 64);
	StringIntConCat(sParam0, iParam2, 64);
}

int func_290(var uParam0)
{
	if (func_267(unk_0x95B959F18401C09A(), 1, 0) || func_291(unk_0x95B959F18401C09A()))
	{
		return 3;
	}
	else if (uParam0->f_50 >= 10 && uParam0->f_50 <= 14)
	{
		return 0;
	}
	else if (uParam0->f_50 >= 15 && uParam0->f_50 <= 19)
	{
		return 1;
	}
	else
	{
		return 2;
	}
	return -1;
}

int func_291(int iParam0)
{
	if (iParam0 != func_179())
	{
		if (func_46(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_292(Global_2424047[iParam0 /*416*/].f_309.f_5) == 9;
			}
		}
	}
	return 0;
}

int func_292(int iParam0)
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

void func_293(var uParam0, var uParam1, bool bParam2)
{
	char* sVar0;
	
	if (!uParam0->f_29)
	{
	}
	if (func_302(uParam0))
	{
		uParam0->f_27 = 0;
		func_301(&(uParam0->f_44));
		uParam0->f_12 = (uParam0->f_12 - 1);
		if (uParam0->f_12 < 0)
		{
			uParam0->f_12 = (uParam0->f_13 - 1);
		}
		unk_0x0F8EAEEC97DDBCB3(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", 1);
		func_345(uParam0->f_12, 1, 1);
		sVar0 = func_343(uParam0->f_12);
		uParam0->f_29 = 0;
		uParam0->f_30 = 0;
		uParam0->f_32 = 0;
		if (unk_0xEAF855A7DC28BC8D(sVar0))
		{
			func_344(sVar0, 0, 0);
		}
	}
	if (func_298(uParam0))
	{
		uParam0->f_27 = 0;
		func_301(&(uParam0->f_44));
		uParam0->f_12++;
		if (uParam0->f_12 > (uParam0->f_13 - 1))
		{
			uParam0->f_12 = 0;
		}
		unk_0x0F8EAEEC97DDBCB3(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", 1);
		func_345(uParam0->f_12, 1, 1);
		sVar0 = func_343(uParam0->f_12);
		uParam0->f_29 = 0;
		uParam0->f_30 = 0;
		uParam0->f_32 = 0;
		if (unk_0xEAF855A7DC28BC8D(sVar0))
		{
			func_344(sVar0, 0, 0);
		}
	}
	if (!uParam0->f_29)
	{
		if (unk_0x8AF8FB62F0BE628C(func_350(uParam0, uParam0->f_12), 0, 1, 0, -1, 0))
		{
			uParam0->f_28 = 1;
		}
		else
		{
			uParam0->f_28 = 0;
			uParam0->f_36 = 1;
		}
		uParam0->f_29 = 1;
	}
	if (!uParam0->f_30)
	{
		uParam0->f_31 = 1;
		if (uParam0->f_12 == 3)
		{
			uParam0->f_31 = func_125(1275, -1, 0) < 30;
		}
		else if (uParam0->f_12 == 1)
		{
			uParam0->f_31 = func_125(1276, -1, 0) < 15;
		}
		else if (uParam0->f_12 == 2)
		{
			uParam0->f_31 = func_125(1277, -1, 0) < 5;
		}
		else if (uParam0->f_12 == 4)
		{
			uParam0->f_31 = func_125(1097, -1, 0) < 20;
		}
		else if (uParam0->f_12 == 0)
		{
			uParam0->f_31 = func_125(62, -1, 0) < 10;
		}
		else if (uParam0->f_12 == 5)
		{
			uParam0->f_31 = func_125(63, -1, 0) < 10;
		}
		uParam0->f_30 = 1;
	}
	if (!uParam0->f_32)
	{
		if ((*uParam1)[uParam0->f_12] < 10)
		{
			uParam0->f_33 = 1;
		}
		else
		{
			uParam0->f_33 = 0;
			func_344("SNK_SOUT", 0, 0);
		}
		uParam0->f_32 = 1;
	}
	if (uParam0->f_27)
	{
		if (func_294(&(uParam0->f_44)) < 3f)
		{
			if (uParam0->f_35)
			{
				if (!bParam2)
				{
					func_344("SNK_BOUGHT", 0, 0);
				}
				else
				{
					func_344("SNK_STORED", 0, 0);
				}
			}
			else if (!uParam0->f_28)
			{
				func_344("SNK_AFFORD", 0, 0);
			}
			else if (!uParam0->f_33)
			{
				func_344("SNK_SOUT", 0, 0);
			}
			else if (!uParam0->f_31)
			{
				if (uParam0->f_12 == 3)
				{
					func_344("SNK_SNK1FU", 0, 0);
				}
				else if (uParam0->f_12 == 1)
				{
					func_344("SNK_SNK2FU", 0, 0);
				}
				else if (uParam0->f_12 == 2)
				{
					func_344("SNK_SNK3FU", 0, 0);
				}
				else if (uParam0->f_12 == 4)
				{
					func_344("SNK_SMOKFU", 0, 0);
				}
				else if (uParam0->f_12 == 0)
				{
					func_344("SNK_DRK1FU", 0, 0);
				}
				else if (uParam0->f_12 == 5)
				{
					func_344("SNK_DRK2FU", 0, 0);
				}
				else
				{
					func_344("SNK_NEEDED", 0, 0);
				}
				unk_0x8950ED5730F62EE8(&(uParam0->f_53), 26);
			}
		}
		else
		{
			uParam0->f_27 = 0;
			uParam0->f_35 = 0;
			func_301(&(uParam0->f_44));
			sVar0 = func_343(uParam0->f_12);
			if (unk_0xEAF855A7DC28BC8D(sVar0))
			{
				func_344(sVar0, 0, 0);
			}
		}
	}
}

float func_294(var uParam0)
{
	if (func_297(uParam0))
	{
		if (func_296(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_295(unk_0x0E4018692D92041D(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

float func_295(bool bParam0)
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

bool func_296(var uParam0)
{
	return unk_0x0E4018692D92041D(*uParam0, 2);
}

bool func_297(var uParam0)
{
	return unk_0x0E4018692D92041D(*uParam0, 1);
}

int func_298(var uParam0)
{
	float fVar0;
	
	fVar0 = unk_0xAFD26C4E558D823B(2, 219);
	if ((fVar0 > 0.8f || unk_0xF1CDE9FD207C4CD8(2, 187)) || unk_0x833B1A3D9F713E03(2, 242))
	{
		if (!func_297(&(uParam0->f_41)))
		{
			func_300(&(uParam0->f_41));
			return 1;
		}
		else if (func_299(&(uParam0->f_41)) > 0.25f)
		{
			func_374(&(uParam0->f_41));
			return 1;
		}
	}
	else if (func_297(&(uParam0->f_41)))
	{
		func_301(&(uParam0->f_41));
	}
	return 0;
}

float func_299(var uParam0)
{
	if (func_297(uParam0))
	{
		if (func_296(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_295(unk_0x0E4018692D92041D(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_300(int iParam0)
{
	if (!func_297(iParam0))
	{
		func_374(iParam0);
	}
}

void func_301(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_302(var uParam0)
{
	float fVar0;
	
	fVar0 = unk_0xAFD26C4E558D823B(2, 219);
	if ((fVar0 < -0.8f || unk_0xF1CDE9FD207C4CD8(2, 188)) || unk_0x833B1A3D9F713E03(2, 241))
	{
		if (!func_297(&(uParam0->f_38)))
		{
			func_300(&(uParam0->f_38));
			return 1;
		}
		else if (func_299(&(uParam0->f_38)) > 0.25f)
		{
			func_374(&(uParam0->f_38));
			return 1;
		}
	}
	else if (func_297(&(uParam0->f_38)))
	{
		func_301(&(uParam0->f_38));
	}
	return 0;
}

int func_303()
{
	if (unk_0x5D79F3D06EB318A0(2))
	{
		if (Global_4268040 > -1)
		{
			if (unk_0x833B1A3D9F713E03(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_304(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0x5D79F3D06EB318A0(2))
	{
		return 0;
	}
	if (unk_0xD9C92B0885A075F8() || unk_0x15C85368E432C647())
	{
		return 0;
	}
	if (bParam2)
	{
		unk_0x0817B4F2C156A62D();
	}
	if (Global_4268040 == -6)
	{
		unk_0x2C02423528813544(4);
		if (iParam0 && unk_0xF1CDE9FD207C4CD8(2, 237))
		{
			return 1;
		}
		else
		{
			Global_4268040 = -1;
			return 0;
		}
	}
	if (((Global_4268040 > -1 || Global_4268040 == -3) || Global_4268040 == -2) || unk_0x7B37FD322F4D4188())
	{
		unk_0x2C02423528813544(1);
		return 0;
	}
	if (Global_4268040 == -1 && iParam0)
	{
		if (unk_0xF1CDE9FD207C4CD8(2, 237))
		{
			unk_0x2C02423528813544(4);
			Global_4268040 = -6;
			return 1;
		}
		else
		{
			unk_0x2C02423528813544(3);
			return 0;
		}
	}
	unk_0x2C02423528813544(1);
	return 0;
}

void func_305(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0.034722f / 2f);
	iVar13 = -1;
	if (!unk_0x5D79F3D06EB318A0(2))
	{
		Global_4268040 = -1;
		return;
	}
	unk_0xDF7C6E5DFD633758(1);
	fVar0 = Global_17408;
	fVar2 = (fVar0 + Global_17410);
	fVar3 = Global_17411.f_5730;
	fVar1 = (Global_17411.f_5730 - (IntToFloat(Global_17411.f_5732) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_17411.f_5732 < 1)
	{
		fVar1 = (Global_17411.f_5730 - 0.034722f);
	}
	unk_0x1382AC429D0EA2BB(76, 84);
	unk_0x04602263DC4A45E9(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0xDF73B9B8F283BB7B(fVar0, fVar1, &fVar0, &fVar1);
	unk_0xDF73B9B8F283BB7B(fVar2, fVar3, &fVar2, &fVar3);
	unk_0x94A8B1D385430451();
	func_308();
	if (Global_4268040 == -6)
	{
		return;
	}
	Global_4268040 = -1;
	fVar7 = Global_4268034;
	fVar8 = Global_4268035;
	if (Global_17411.f_5733 > Global_17411.f_5732)
	{
		if (((Global_4268034 >= fVar0 && Global_4268034 <= fVar2) && Global_4268035 >= fVar3) && Global_4268035 < (fVar3 + fVar6))
		{
			Global_4268040 = -2;
			if (bParam3)
			{
				func_307(0);
			}
			return;
		}
		if (((Global_4268034 >= fVar0 && Global_4268034 <= fVar2) && Global_4268035 >= (fVar3 + fVar6)) && Global_4268035 < (fVar3 + 0.034722f))
		{
			Global_4268040 = -3;
			if (bParam3)
			{
				func_307(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = floor((fVar9 / 0.034722f));
		if (Global_17411.f_5733 == -1)
		{
			Global_4268040 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_17411.f_5732);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				unk_0x1382AC429D0EA2BB(76, 84);
				unk_0x04602263DC4A45E9(-0.05f, -0.05f, 0f, 0f);
				func_306(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_17410, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				unk_0x94A8B1D385430451();
			}
		}
		Global_4268040 = Global_17411.f_7974[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4268040 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_4268040 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_4268040 = -4;
		return;
	}
	Global_4268040 = -1;
}

void func_306(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0x5263FF82360FF7E2((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

void func_307(bool bParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_17408;
	fVar1 = Global_17411.f_5730;
	unk_0x1382AC429D0EA2BB(76, 84);
	unk_0x04602263DC4A45E9(-0.05f, -0.05f, 0f, 0f);
	if (Global_4268040 == -2)
	{
		func_306(fVar0, fVar1, Global_17410, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4268040 == -3)
	{
		func_306(fVar0, (fVar1 + fVar2), Global_17410, fVar2, 255, 255, 255, iVar3);
	}
	unk_0x94A8B1D385430451();
}

void func_308()
{
	Global_4268036 = Global_4268034;
	Global_4268037 = Global_4268035;
	Global_4268034 = unk_0x2D0598FBFD4D8A23(2, 239);
	Global_4268035 = unk_0x2D0598FBFD4D8A23(2, 240);
	Global_4268038 = (Global_4268034 - Global_4268036);
	Global_4268039 = (Global_4268035 - Global_4268037);
}

void func_309(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
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
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	vector3 vVar38;
	bool bVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	float fVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	bool bVar53;
	float fVar54;
	float fVar55;
	float fVar56;
	float fVar57;
	int iVar58;
	int iVar59;
	float fVar60;
	float fVar61;
	float fVar62;
	char cVar63[64];
	char cVar64[64];
	float fVar65;
	int iVar66;
	float fVar67;
	float fVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	char cVar75[16];
	float fVar76;
	float fVar77;
	float fVar78;
	float fVar79;
	float fVar80;
	
	if (!func_163(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_340(0, bParam6))
	{
		return;
	}
	unk_0x1382AC429D0EA2BB(76, 84);
	unk_0x04602263DC4A45E9(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	fVar56 = 0f;
	if (Global_17411)
	{
		if (func_338(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar55 = fVar37;
			fVar56 = fVar36;
			fVar55 = (fVar55 + 0f);
		}
		else
		{
			Global_17411 = 0;
		}
	}
	if (unk_0x36163153849DFDA1(&(Global_17411.f_1)) == unk_0x36163153849DFDA1("HIDE"))
	{
		fVar57 = Global_17409;
	}
	else
	{
		fVar57 = (((Global_17409 + fVar55) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_17410;
	}
	fVar60 = 1f;
	if (bParam7)
	{
		unk_0x3A5E614EC752B188(&iVar58, &iVar59);
		fVar61 = unk_0x63151314B8B4D6EB(0);
		if (func_337())
		{
			iVar58 = round((to_float(iVar59) * fVar61));
		}
		fVar62 = (to_float(iVar58) / to_float(iVar59));
		fVar60 = (fVar62 / fVar61);
		if (func_337())
		{
			fVar60 = 1f;
		}
		iVar58 = round((to_float(iVar58) / fVar60));
		iVar59 = round((to_float(iVar59) / fVar60));
	}
	else
	{
		unk_0x6521432F7BEAC16C(&iVar58, &iVar59);
	}
	if (bParam3)
	{
		if (Global_17411.f_5218 <= 1)
		{
			func_355(Global_17411.f_5218 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0);
			Global_17411.f_6014 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_17411.f_5728)
		{
			if (unk_0x36163153849DFDA1(&(Global_17411.f_1)) == unk_0x36163153849DFDA1("HIDE"))
			{
				fVar49 = Global_17409;
			}
			else
			{
				if (Global_17411)
				{
					StringCopy(&cVar63, func_336(29), 64);
					StringCopy(&cVar64, func_334(29, 1), 64);
					if (unk_0x36163153849DFDA1(&(Global_17411.f_6997[29 /*16*/])) == -1487683087)
					{
						func_306(Global_17408, Global_17409, fParam5, (fVar55 - 0f), 0, 0, 0, 255);
						unk_0x281206A3ED9B7B48(&cVar63, &cVar64, (Global_17408 + (fParam5 * 0.5f)), (Global_17409 + ((fVar55 - 0f) * 0.5f)), fVar56, (fVar55 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0x281206A3ED9B7B48(&cVar63, &cVar64, (Global_17408 + (fParam5 * 0.5f)), (Global_17409 + ((fVar55 - 0f) * 0.5f)), fParam5, (fVar55 - 0f), 0f, 255, 255, 255, 255, 0);
					}
				}
				if (Global_17411.f_8323)
				{
					iVar1 = Global_17411.f_8319;
					iVar2 = Global_17411.f_8320;
					iVar3 = Global_17411.f_8321;
					iVar4 = Global_17411.f_8322;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_306(Global_17408, (Global_17409 + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_17409 + fVar55) + 0.034722f) + 0f);
				if (unk_0x36163153849DFDA1(&(Global_17411.f_1)) != 0)
				{
					func_333();
					unk_0xAA70163B3B48EEE4(&(Global_17411.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17411.f_68)
					{
						if (Global_17411.f_5[iVar14] == 2)
						{
							unk_0xE800DC85FDF60F85(Global_17411.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17411.f_5[iVar14] == 3)
						{
							unk_0x974BEF45D557B847(Global_17411.f_14[iVar16], Global_17411.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17411.f_5[iVar14] == 1)
						{
							unk_0xFA6BEE2B1507FF1E(&(Global_17411.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17411.f_5[iVar14] == 8)
						{
							unk_0xFA6BEE2B1507FF1E(&(Global_17411.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17411.f_5[iVar14] == 5)
						{
							unk_0xD61E5ED1D4E687A5(&(Global_17411.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17411.f_5[iVar14] == 6)
						{
							unk_0xFA6BEE2B1507FF1E(&(Global_17411.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17411.f_5[iVar14] == 7)
						{
							unk_0xD61E5ED1D4E687A5(&(Global_17411.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17411.f_5[iVar14] == 9)
						{
							unk_0xD61E5ED1D4E687A5(&(Global_17411.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0xCCA49CAF391D1A15((Global_17408 + 0.00390625f), ((Global_17409 + fVar55) + 0.00416664f), 0);
				}
				if (Global_17411.f_5735)
				{
					func_333();
					func_331((((Global_17408 + fParam5) - 0.00390625f) - func_332("CM_ITEM_COUNT", Global_17411.f_5736, Global_17411.f_5737)), ((Global_17409 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_17411.f_5736, Global_17411.f_5737);
				}
				else if (Global_17411.f_5731 > Global_17411.f_5225)
				{
					if (Global_17411.f_5734 != 0)
					{
						func_333();
						func_331((((Global_17408 + fParam5) - 0.00390625f) - func_332("CM_ITEM_COUNT", Global_17411.f_5734, Global_17411.f_5733)), ((Global_17409 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_17411.f_5734, Global_17411.f_5733);
					}
				}
			}
			iVar6 = Global_17411.f_5738;
			iVar9 = 0;
			fVar65 = fVar49;
			if (Global_17411.f_8333)
			{
				iVar1 = Global_17411.f_8329;
				iVar2 = Global_17411.f_8330;
				iVar3 = Global_17411.f_8331;
				iVar4 = Global_17411.f_8332;
			}
			else
			{
				unk_0x1256E5EA03020804(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_17411.f_5225 && iVar6 <= Global_17411.f_5218)
			{
				if (iVar6 >= 0)
				{
					if (Global_17411.f_5485[iVar6])
					{
						if (Global_17411.f_5356[iVar6] && iVar6 != Global_17411.f_5738)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar54 = 0.034722f;
						if (Global_17411.f_5745[iVar6] != 0f)
						{
							fVar54 = Global_17411.f_5745[iVar6];
						}
						fVar49 = (fVar49 + fVar54);
						iVar9++;
					}
				}
				iVar6++;
			}
			unk_0x281206A3ED9B7B48("CommonMenu", "Gradient_Bgd", (Global_17408 + (fParam5 * 0.5f)), ((fVar65 + ((fVar49 - fVar65) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar65), 0f, 255, 255, 255, 255, 0);
			if (Global_17411.f_5731 > Global_17411.f_5225)
			{
				if (Global_17411.f_8338)
				{
					iVar1 = Global_17411.f_8334;
					iVar2 = Global_17411.f_8335;
					iVar3 = Global_17411.f_8336;
					iVar4 = Global_17411.f_8337;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_306(Global_17408, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				vVar38 = { unk_0x5B78EE936879124F("CommonMenu", "shop_arrows_upANDdown") };
				vVar38.x = (vVar38.x * (0.5f / fVar60));
				vVar38.y = (vVar38.y * (0.5f / fVar60));
				if (Global_17411.f_8351)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0x1256E5EA03020804(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x281206A3ED9B7B48("CommonMenu", "shop_arrows_upANDdown", (Global_17408 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((vVar38.x / 1280f) * fVar60), ((vVar38.y / 720f) * fVar60), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (unk_0x36163153849DFDA1(&(Global_17411.f_4690)) != 0 && Global_17411.f_4766 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_17408 + 0.0046875f);
				if (Global_17411.f_4768 != 0)
				{
					func_338(Global_17411.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_17408 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_330(fVar40);
				unk_0x611EA72F39AAD0DD(&(Global_17411.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17411.f_4762)
				{
					if (Global_17411.f_4696[iVar14] == 2)
					{
						unk_0xE800DC85FDF60F85(Global_17411.f_4701[iVar15]);
						iVar15++;
					}
					else if (Global_17411.f_4696[iVar14] == 3)
					{
						unk_0x974BEF45D557B847(Global_17411.f_4705[iVar16], Global_17411.f_4709[iVar16]);
						iVar16++;
					}
					else if (Global_17411.f_4696[iVar14] == 1)
					{
						unk_0xFA6BEE2B1507FF1E(&(Global_17411.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17411.f_4696[iVar14] == 5)
					{
						unk_0xD61E5ED1D4E687A5(&(Global_17411.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17411.f_4696[iVar14] == 6)
					{
						unk_0xFA6BEE2B1507FF1E(&(Global_17411.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17411.f_4696[iVar14] == 7)
					{
						unk_0xD61E5ED1D4E687A5(&(Global_17411.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17411.f_4696[iVar14] == 9)
					{
						unk_0xD61E5ED1D4E687A5(&(Global_17411.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x767F5E4858E200EB(fVar40, (fVar49 + 0.00277776f));
				unk_0x1256E5EA03020804(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_306(Global_17408, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17411.f_8343)
				{
					iVar1 = Global_17411.f_8339;
					iVar2 = Global_17411.f_8340;
					iVar3 = Global_17411.f_8341;
					iVar4 = Global_17411.f_8342;
				}
				else
				{
					unk_0x1256E5EA03020804(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x281206A3ED9B7B48("CommonMenu", "Gradient_Bgd", (Global_17408 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x6486D2A6F2DC8DCB(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x6486D2A6F2DC8DCB(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_330(fVar40);
				unk_0xAA70163B3B48EEE4(&(Global_17411.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17411.f_4762)
				{
					if (Global_17411.f_4696[iVar14] == 2)
					{
						unk_0xE800DC85FDF60F85(Global_17411.f_4701[iVar15]);
						iVar15++;
					}
					else if (Global_17411.f_4696[iVar14] == 3)
					{
						unk_0x974BEF45D557B847(Global_17411.f_4705[iVar16], Global_17411.f_4709[iVar16]);
						iVar16++;
					}
					else if (Global_17411.f_4696[iVar14] == 1)
					{
						unk_0xFA6BEE2B1507FF1E(&(Global_17411.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17411.f_4696[iVar14] == 5)
					{
						unk_0xD61E5ED1D4E687A5(&(Global_17411.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17411.f_4696[iVar14] == 6)
					{
						unk_0xFA6BEE2B1507FF1E(&(Global_17411.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17411.f_4696[iVar14] == 7)
					{
						unk_0xD61E5ED1D4E687A5(&(Global_17411.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17411.f_4696[iVar14] == 9)
					{
						unk_0xD61E5ED1D4E687A5(&(Global_17411.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17411.f_4696[iVar14] == 8)
					{
						unk_0xFA6BEE2B1507FF1E(&(Global_17411.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xCCA49CAF391D1A15(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_17411.f_4768 != 0)
				{
					func_338(Global_17411.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					func_329(Global_17411.f_4768, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0x281206A3ED9B7B48(func_336(Global_17411.f_4768), func_334(Global_17411.f_4768, 1), ((Global_17408 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
				}
				fVar49 = (fVar49 + (((unk_0x6486D2A6F2DC8DCB(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_17411.f_4766 > 0)
				{
					if ((unk_0xE3903F59E2F22150() - Global_17411.f_4767) > Global_17411.f_4766)
					{
						StringCopy(&(Global_17411.f_4690), "", 24);
						Global_17411.f_4766 = -1;
					}
				}
			}
			if (unk_0x36163153849DFDA1(&(Global_4267964.f_21)) != 0 && Global_4267964.f_65 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_17408 + 0.0046875f);
				if (Global_4267964.f_67 != 0)
				{
					func_338(Global_4267964.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_17408 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_330(fVar40);
				unk_0x611EA72F39AAD0DD(&(Global_4267964.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4267964.f_61)
				{
					if (Global_4267964.f_25[iVar14] == 2)
					{
						unk_0xE800DC85FDF60F85(Global_4267964.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4267964.f_25[iVar14] == 3)
					{
						unk_0x974BEF45D557B847(Global_4267964.f_34[iVar16], Global_4267964.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4267964.f_25[iVar14] == 1)
					{
						unk_0xFA6BEE2B1507FF1E(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4267964.f_25[iVar14] == 5)
					{
						unk_0xD61E5ED1D4E687A5(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4267964.f_25[iVar14] == 6)
					{
						unk_0xFA6BEE2B1507FF1E(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4267964.f_25[iVar14] == 7)
					{
						unk_0xD61E5ED1D4E687A5(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4267964.f_25[iVar14] == 9)
					{
						unk_0xD61E5ED1D4E687A5(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4267964.f_25[iVar14] == 8)
					{
						unk_0xFA6BEE2B1507FF1E(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x767F5E4858E200EB(fVar40, (fVar49 + 0.00277776f));
				unk_0x1256E5EA03020804(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_306(Global_17408, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17411.f_8343)
				{
					iVar1 = Global_17411.f_8339;
					iVar2 = Global_17411.f_8340;
					iVar3 = Global_17411.f_8341;
					iVar4 = Global_17411.f_8342;
				}
				else
				{
					unk_0x1256E5EA03020804(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x281206A3ED9B7B48("CommonMenu", "Gradient_Bgd", (Global_17408 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x6486D2A6F2DC8DCB(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x6486D2A6F2DC8DCB(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_330(fVar40);
				unk_0xAA70163B3B48EEE4(&(Global_4267964.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4267964.f_61)
				{
					if (Global_4267964.f_25[iVar14] == 2)
					{
						unk_0xE800DC85FDF60F85(Global_4267964.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4267964.f_25[iVar14] == 3)
					{
						unk_0x974BEF45D557B847(Global_4267964.f_34[iVar16], Global_4267964.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4267964.f_25[iVar14] == 1)
					{
						unk_0xFA6BEE2B1507FF1E(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4267964.f_25[iVar14] == 8)
					{
						unk_0xFA6BEE2B1507FF1E(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4267964.f_25[iVar14] == 5)
					{
						unk_0xD61E5ED1D4E687A5(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4267964.f_25[iVar14] == 6)
					{
						unk_0xFA6BEE2B1507FF1E(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4267964.f_25[iVar14] == 7)
					{
						unk_0xD61E5ED1D4E687A5(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4267964.f_25[iVar14] == 9)
					{
						unk_0xD61E5ED1D4E687A5(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xCCA49CAF391D1A15(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_4267964.f_67 != 0)
				{
					func_338(Global_4267964.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_329(Global_4267964.f_67, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0x281206A3ED9B7B48(func_336(Global_4267964.f_67), func_334(Global_4267964.f_67, 1), ((Global_17408 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
				}
				fVar49 = (fVar49 + (((unk_0x6486D2A6F2DC8DCB(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4267964.f_65 > 0)
				{
					if ((unk_0xE3903F59E2F22150() - Global_4267964.f_66) > Global_4267964.f_65)
					{
						StringCopy(&(Global_4267964.f_21), "", 16);
						Global_4267964.f_65 = -1;
					}
				}
			}
			func_322(iVar58, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			unk_0x1382AC429D0EA2BB(76, 84);
			unk_0x04602263DC4A45E9(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_17411.f_5728)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar66 = Global_17411.f_5218;
			if (Global_17411.f_5729)
			{
				iVar66 = (Global_17411.f_5732 - 1);
			}
			fVar67 = 0f;
			fVar68 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar66)
			{
				fVar54 = 0.034722f;
				if (Global_17411.f_5745[iVar6] != 0f)
				{
					fVar54 = Global_17411.f_5745[iVar6];
				}
				if (Global_17411.f_5729)
				{
					iVar6 = Global_17411.f_7974[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_17411.f_5738 && iVar9 < Global_17411.f_5225)
				{
					bVar33 = true;
					if (Global_17411.f_5739 == iVar6)
					{
						fVar68 = fVar67;
					}
					if (Global_17411.f_5356[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar57 + fVar67) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_17411.f_5879[iVar6] = fVar35;
				fVar34 = (Global_17408 + 0.0046875f);
				bVar39 = false;
				bVar32 = Global_17411.f_5739 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar70 = 255;
					iVar71 = 255;
					iVar72 = 255;
					iVar73 = 255;
					if (Global_17411.f_8345)
					{
						unk_0x1256E5EA03020804(Global_17411.f_8344, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					else
					{
						unk_0x1256E5EA03020804(1, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					unk_0x281206A3ED9B7B48("CommonMenu", "Gradient_Nav", (Global_17408 + (fParam5 * 0.5f)), (((fVar57 + fVar68) + (0.00277776f * IntToFloat(iVar12))) + (fVar54 * 0.5f)), fParam5, fVar54, 0f, iVar70, iVar71, iVar72, iVar73, 0);
					Global_17411.f_5877 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_17411.f_5226)
				{
					if (unk_0x0E4018692D92041D(Global_17411.f_5089[iVar6], iVar8) || Global_17411.f_5056[iVar8] == 5)
					{
						if (Global_17411.f_5729)
						{
							iVar19 = Global_17411.f_7990[((iVar9 * Global_17411.f_5226) + iVar8)];
							iVar20 = Global_17411.f_8031[((iVar9 * Global_17411.f_5226) + iVar8)];
							iVar21 = Global_17411.f_8072[((iVar9 * Global_17411.f_5226) + iVar8)];
							iVar22 = Global_17411.f_8113[((iVar9 * Global_17411.f_5226) + iVar8)];
							iVar23 = Global_17411.f_8154[((iVar9 * Global_17411.f_5226) + iVar8)];
						}
						else
						{
							Global_17411.f_7990[((iVar9 * Global_17411.f_5226) + iVar8)] = iVar19;
							Global_17411.f_8031[((iVar9 * Global_17411.f_5226) + iVar8)] = iVar20;
							Global_17411.f_8072[((iVar9 * Global_17411.f_5226) + iVar8)] = iVar21;
							Global_17411.f_8113[((iVar9 * Global_17411.f_5226) + iVar8)] = iVar22;
							Global_17411.f_8154[((iVar9 * Global_17411.f_5226) + iVar8)] = iVar23;
						}
						iVar74 = 0;
						bVar53 = false;
						if (Global_17411.f_6011[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_17411.f_6008[0])
							{
								bVar53 = true;
								iVar74 = 0;
							}
						}
						if (Global_17411.f_6011[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_17411.f_6008[1])
							{
								bVar53 = true;
								iVar74 = 1;
							}
						}
						if (Global_17411.f_5062[iVar8] != -1f)
						{
							fVar34 = ((Global_17408 + 0.0046875f) + Global_17411.f_5062[iVar8]);
						}
						if ((iVar8 < 4 && Global_17411.f_5062[iVar8 + 1] != -1f) && fVar34 < Global_17411.f_5062[iVar8 + 1])
						{
							fVar44 = (Global_17411.f_5062[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar44 = (((Global_17408 + Global_17410) - 0.0046875f) - fVar34);
						}
						if ((Global_17411.f_5075[iVar8] && Global_17411.f_5874) && bVar32)
						{
							bVar52 = true;
						}
						else
						{
							bVar52 = false;
						}
						switch (Global_17411.f_5056[iVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_17411.f_5729)
									{
										fVar41 = 0f;
										fVar42 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0)
										{
											bVar50 = false;
											bVar51 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17411.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													bVar51 = true;
												}
												else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											func_320(bVar32, Global_17411.f_1610[iVar24], Global_17411.f_1867[iVar24], bVar53, iVar74, bVar51, bVar50);
											unk_0xCAE35308CC49F0CC(&(Global_17411.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xFA6BEE2B1507FF1E(&(Global_17411.f_73[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xFA6BEE2B1507FF1E(&(Global_17411.f_73[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xD61E5ED1D4E687A5(&(Global_2459153[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xFA6BEE2B1507FF1E(&(Global_2459153[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xD61E5ED1D4E687A5(&(Global_2459153[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xD61E5ED1D4E687A5(&(Global_2459153[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xE800DC85FDF60F85(Global_17411.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x974BEF45D557B847(Global_17411.f_4175[(iVar21 + iVar27)], Global_17411.f_4304[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0)
										{
											fVar41 = unk_0x201339347519B9A8(1);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_338(Global_17411.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + fVar36);
													if (iVar14 > 0)
													{
														fVar42 = (fVar42 - (0.00078125f * 4f));
													}
													if ((Global_17411.f_4433[(iVar22 + iVar14)] == 2 || Global_17411.f_4433[(iVar22 + iVar14)] == 50) || Global_17411.f_4433[(iVar22 + iVar14)] == 60)
													{
														fVar42 = (fVar42 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar40 = 0f;
										if (Global_17411.f_5083[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - (fVar41 + fVar42)) + (0.00078125f * 1f)));
										}
										else if (Global_17411.f_5083[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - ((fVar41 + fVar42) * 0.5f)));
										}
										Global_17411.f_8195[((iVar9 * Global_17411.f_5226) + iVar8)] = fVar40;
										Global_17411.f_8236[((iVar9 * Global_17411.f_5226) + iVar8)] = fVar41;
										Global_17411.f_8277[((iVar9 * Global_17411.f_5226) + iVar8)] = fVar42;
										if (Global_17411.f_5083[iVar8] == 2)
										{
											iVar69 = (iVar8 - 1);
											while (iVar69 >= 0)
											{
												if (Global_17411.f_5083[iVar69] == 2)
												{
													Global_17411.f_8195[((iVar9 * Global_17411.f_5226) + iVar69)] = (Global_17411.f_8195[((iVar9 * Global_17411.f_5226) + iVar69)] - Global_17411.f_5068[iVar8]);
												}
												iVar69 = (iVar69 + -1);
											}
										}
									}
									else
									{
										fVar40 = Global_17411.f_8195[((iVar9 * Global_17411.f_5226) + iVar8)];
										fVar41 = Global_17411.f_8236[((iVar9 * Global_17411.f_5226) + iVar8)];
										fVar42 = Global_17411.f_8277[((iVar9 * Global_17411.f_5226) + iVar8)];
									}
									if (bVar52)
									{
										if (func_338(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_17411.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_338(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_329(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x281206A3ED9B7B48(func_336(26), func_334(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_338(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_338(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_329(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x281206A3ED9B7B48(func_336(27), func_334(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar31 = 0;
									if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										bVar50 = false;
										bVar51 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17411.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												bVar51 = true;
											}
											else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												bVar50 = true;
											}
											iVar14++;
										}
										func_320(bVar32, Global_17411.f_1610[iVar24], Global_17411.f_1867[iVar24], bVar53, 0, bVar51, bVar50);
										if (Global_17411.f_8349 && Global_17411.f_8350 == iVar6)
										{
											func_319(bVar32);
										}
										unk_0xAA70163B3B48EEE4(&(Global_17411.f_73[iVar24 /*6*/]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 1)
										{
											iVar25++;
											if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xFA6BEE2B1507FF1E(&(Global_17411.f_73[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 1;
										}
										else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 8)
										{
											iVar25++;
											if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xFA6BEE2B1507FF1E(&(Global_17411.f_73[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 8;
										}
										else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 5)
										{
											if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xD61E5ED1D4E687A5(&(Global_2459153[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 6)
										{
											if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xFA6BEE2B1507FF1E(&(Global_2459153[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 7)
										{
											if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xD61E5ED1D4E687A5(&(Global_2459153[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 9)
										{
											if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xD61E5ED1D4E687A5(&(Global_2459153[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 2)
										{
											if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xE800DC85FDF60F85(Global_17411.f_3918[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 3)
										{
											if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x974BEF45D557B847(Global_17411.f_4175[(iVar21 + iVar27)], Global_17411.f_4304[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 4)
										{
											if ((Global_17411.f_4433[(iVar22 + iVar28)] == 2 || Global_17411.f_4433[(iVar22 + iVar28)] == 50) || Global_17411.f_4433[(iVar22 + iVar28)] == 60)
											{
												if (func_338(Global_17411.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (func_338(Global_17411.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_329(Global_17411.f_4433[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
														if (iVar5 == 1)
														{
															if (Global_17411.f_5083[iVar8] == 2)
															{
																unk_0x281206A3ED9B7B48(func_336(Global_17411.f_4433[(iVar22 + iVar28)]), func_334(Global_17411.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0x281206A3ED9B7B48(func_336(Global_17411.f_4433[(iVar22 + iVar28)]), func_334(Global_17411.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
														}
														fVar40 = (fVar40 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (unk_0x36163153849DFDA1(&(Global_17411.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_17411.f_5083[iVar8] == 2)
										{
											unk_0xCCA49CAF391D1A15(((fVar34 + fVar40) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											unk_0xCCA49CAF391D1A15((fVar34 + fVar40), fVar35, 0);
											if (func_318() && unk_0x1BCDA92AD0A7835B(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													func_320(0, Global_17411.f_1610[iVar24], Global_17411.f_1867[iVar24], bVar53, 0, bVar51, bVar50);
													StringCopy(&cVar75, "TEST_LABEL", 16);
													fVar76 = 0f;
													fVar77 = 55f;
													fVar78 = 0.0185f;
													fVar79 = 0.004f;
													fVar80 = 0.02f;
													unk_0xC56FB1634FB1F447(0f, (0.35f * 0.7f));
													unk_0x762F7A52B1325903(255, 255, 255, 150);
													unk_0x5263FF82360FF7E2((fVar34 - (fVar80 * 0.6f)), (fVar35 + (fVar78 * 0.75f)), 0.0175f, 0.035f, floor(fVar76), floor(fVar76), floor(fVar76), floor(fVar77), 0);
													unk_0xAA70163B3B48EEE4(&cVar75);
													unk_0xE800DC85FDF60F85((Global_17411.f_5738 + iVar30));
													unk_0xCCA49CAF391D1A15((fVar34 - fVar80), (fVar35 + fVar79), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar40 = (fVar40 + (6f * 0.00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_17411.f_4433[(iVar22 + iVar14)] != 2 && Global_17411.f_4433[(iVar22 + iVar14)] != 50) && Global_17411.f_4433[(iVar22 + iVar14)] != 60)
											{
												if (func_338(Global_17411.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_338(Global_17411.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_329(Global_17411.f_4433[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_17411.f_4433[(iVar22 + iVar14)] == 30)
															{
																unk_0x281206A3ED9B7B48(func_336(Global_17411.f_4433[(iVar22 + iVar14)]), func_334(Global_17411.f_4433[(iVar22 + iVar14)], bVar32), (Global_17408 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else if (Global_17411.f_5083[iVar8] == 2)
															{
																unk_0x281206A3ED9B7B48(func_336(Global_17411.f_4433[(iVar22 + iVar14)]), func_334(Global_17411.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0x281206A3ED9B7B48(func_336(Global_17411.f_4433[(iVar22 + iVar14)]), func_334(Global_17411.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
														}
													}
													fVar40 = (fVar40 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar39 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_17411.f_5729)
									{
										func_320(bVar32, Global_17411.f_1610[iVar24], Global_17411.f_1867[iVar24], bVar53, 0, 0, 0);
										if (Global_17411.f_8349 && Global_17411.f_8350 == iVar6)
										{
											func_319(bVar32);
										}
										unk_0xCAE35308CC49F0CC("NUMBER");
										unk_0xE800DC85FDF60F85(Global_17411.f_3918[iVar20]);
										fVar41 = unk_0x201339347519B9A8(1);
										fVar40 = 0f;
										if (Global_17411.f_5083[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_17411.f_5083[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_17411.f_8195[((iVar9 * Global_17411.f_5226) + iVar8)] = fVar40;
										Global_17411.f_8236[((iVar9 * Global_17411.f_5226) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_17411.f_8195[((iVar9 * Global_17411.f_5226) + iVar8)];
										fVar41 = Global_17411.f_8236[((iVar9 * Global_17411.f_5226) + iVar8)];
									}
									if (bVar52)
									{
										if (func_338(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_17411.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_338(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_329(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x281206A3ED9B7B48(func_336(26), func_334(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_338(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_338(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_329(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x281206A3ED9B7B48(func_336(27), func_334(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_320(bVar32, Global_17411.f_1610[iVar24], Global_17411.f_1867[iVar24], bVar53, 0, 0, 0);
										func_317((fVar34 + fVar40), fVar35, "NUMBER", Global_17411.f_3918[iVar20], 0);
									}
								}
								bVar39 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_17411.f_5729)
									{
										func_320(bVar32, Global_17411.f_1610[iVar24], Global_17411.f_1867[iVar24], bVar53, 0, 0, 0);
										if (Global_17411.f_8349 && Global_17411.f_8350 == iVar6)
										{
											func_319(bVar32);
										}
										unk_0xCAE35308CC49F0CC("NUMBER");
										unk_0x974BEF45D557B847(Global_17411.f_4175[iVar21], Global_17411.f_4304[iVar21]);
										fVar41 = unk_0x201339347519B9A8(1);
										fVar40 = 0f;
										if (Global_17411.f_5083[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_17411.f_5083[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_17411.f_8195[((iVar9 * Global_17411.f_5226) + iVar8)] = fVar40;
										Global_17411.f_8236[((iVar9 * Global_17411.f_5226) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_17411.f_8195[((iVar9 * Global_17411.f_5226) + iVar8)];
										fVar41 = Global_17411.f_8236[((iVar9 * Global_17411.f_5226) + iVar8)];
									}
									if (bVar52)
									{
										if (func_338(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_17411.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_338(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_329(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x281206A3ED9B7B48(func_336(26), func_334(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_338(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_338(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_329(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x281206A3ED9B7B48(func_336(27), func_334(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
									}
									func_320(bVar32, Global_17411.f_1610[iVar24], Global_17411.f_1867[iVar24], bVar53, 0, 0, 0);
									func_316((fVar34 + fVar40), fVar35, "NUMBER", Global_17411.f_4175[iVar21], Global_17411.f_4304[iVar21]);
								}
								bVar39 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_338(Global_17411.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_17411.f_5729)
										{
											fVar42 = fVar36;
											fVar40 = 0f;
											if (Global_17411.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17411.f_5083[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17411.f_8195[((iVar9 * Global_17411.f_5226) + iVar8)] = fVar40;
											Global_17411.f_8277[((iVar9 * Global_17411.f_5226) + iVar8)] = fVar42;
										}
										else
										{
											fVar40 = Global_17411.f_8195[((iVar9 * Global_17411.f_5226) + iVar8)];
											fVar42 = Global_17411.f_8277[((iVar9 * Global_17411.f_5226) + iVar8)];
										}
										if (bVar52)
										{
											if (func_338(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_17411.f_5083[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_338(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_329(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														unk_0x281206A3ED9B7B48(func_336(26), func_334(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
											if (func_338(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_338(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_329(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														unk_0x281206A3ED9B7B48(func_336(27), func_334(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_338(Global_17411.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_329(Global_17411.f_4433[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												unk_0x281206A3ED9B7B48(func_336(Global_17411.f_4433[iVar22]), func_334(Global_17411.f_4433[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), (fVar36 * func_315(Global_17411.f_4433[iVar22])), (fVar37 * func_315(Global_17411.f_4433[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0);
											}
										}
									}
								}
								bVar39 = true;
								iVar22++;
								break;
							
							case 5:
								bVar39 = true;
								break;
						}
						if (Global_17411.f_5056[iVar8] == 5)
						{
							if (Global_17411.f_5068[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_17411.f_5068[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_17411.f_5068[iVar8]);
							if (Global_17411.f_5075[iVar8])
							{
								if (func_338(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_17411.f_5068[iVar8]);
					}
					iVar8++;
				}
				if (bVar39)
				{
					if (bVar33)
					{
						Global_17411.f_7974[iVar9] = iVar6;
						Global_17411.f_5740 = iVar6;
						iVar9++;
						if (Global_17411.f_5356[iVar6])
						{
							iVar13++;
						}
						if (Global_17411.f_5745[iVar6] != 0f)
						{
							fVar67 = (fVar67 + Global_17411.f_5745[iVar6]);
						}
						else
						{
							fVar67 = (fVar67 + 0.034722f);
						}
					}
					if (!Global_17411.f_5728)
					{
						Global_17411.f_5485[iVar6] = 1;
						if (Global_17411.f_5227[iVar6])
						{
							if (bVar32)
							{
								Global_17411.f_5734 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_17411.f_5734 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_17411.f_5728)
			{
				Global_17411.f_5730 = ((fVar57 + fVar67) + (0.00277776f * IntToFloat(iVar12)));
				Global_17411.f_5733 = iVar11;
				Global_17411.f_5731 = iVar10;
				Global_17411.f_5728 = 1;
			}
		}
		if (!Global_17411.f_5729)
		{
			Global_17411.f_5732 = iVar9;
			Global_17411.f_5729 = 1;
		}
		iVar5++;
	}
	Global_17411.f_5876 = fVar49;
	Global_17411.f_5878 = unk_0xE3903F59E2F22150();
	unk_0x5E1FA2076D53C3F5(Global_17411.f_5876);
	if (!Global_17411.f_8318)
	{
		func_311(0);
	}
	Global_17411.f_8318 = 0;
	if (bParam2)
	{
		unk_0x581AE7724ACAD410(10);
	}
	unk_0x581AE7724ACAD410(6);
	unk_0x581AE7724ACAD410(7);
	unk_0x581AE7724ACAD410(9);
	unk_0x581AE7724ACAD410(8);
	if (bParam0)
	{
		func_310(1);
	}
	unk_0x94A8B1D385430451();
}

void func_310(int iParam0)
{
	Global_1373453.f_1100 = iParam0;
}

void func_311(int iParam0)
{
	if (func_314())
	{
		return;
	}
	if (!Global_14553.f_1 == 1)
	{
		if (func_167(0))
		{
			func_312(iParam0);
		}
		unk_0x8950ED5730F62EE8(&Global_2424, 2);
	}
}

void func_312(int iParam0)
{
	if (func_314())
	{
		return;
	}
	if (Global_14725)
	{
		func_313(0, 0);
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
	if (!func_232())
	{
		Global_14553.f_1 = 3;
	}
}

void func_313(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_167(0))
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

bool func_314()
{
	return unk_0x0E4018692D92041D(Global_1681628, 19);
}

float func_315(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 52:
		case 43:
		case 44:
		case 45:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_316(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	unk_0xAA70163B3B48EEE4(sParam2);
	unk_0x974BEF45D557B847(fParam3, iParam4);
	unk_0xCCA49CAF391D1A15(fParam0, fParam1, 0);
}

void func_317(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0xAA70163B3B48EEE4(sParam2);
	unk_0xE800DC85FDF60F85(iParam3);
	unk_0xCCA49CAF391D1A15(fParam0, fParam1, iParam4);
}

bool func_318()
{
	return unk_0xE9D7B652961D4AA3(-1762644250);
}

void func_319(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0x1256E5EA03020804(Global_17411.f_8346[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0x1256E5EA03020804(Global_17411.f_8346[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0x762F7A52B1325903(iVar0, iVar1, iVar2, 255);
}

void func_320(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_321(Global_17411.f_6011[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0x1256E5EA03020804(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			unk_0x762F7A52B1325903(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0x1256E5EA03020804(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x762F7A52B1325903(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0x1256E5EA03020804(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x762F7A52B1325903(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0x762F7A52B1325903(155, 155, 155, 255);
		}
		else
		{
			unk_0x762F7A52B1325903(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0x762F7A52B1325903(0, 0, 0, floor((255f * 0.8f)));
		}
		else
		{
			unk_0x1256E5EA03020804(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0x762F7A52B1325903(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0x762F7A52B1325903(155, 155, 155, 255);
	}
	else
	{
		unk_0x762F7A52B1325903(155, 155, 155, 255);
	}
	unk_0xC56FB1634FB1F447(0f, 0.35f);
	unk_0x5E831B95C8BE4F09(1);
	if (bParam5)
	{
		unk_0xC56FB1634FB1F447(0f, 0.425f);
		unk_0xBED53673591D764E(4);
	}
	else if (bParam6)
	{
		unk_0xC56FB1634FB1F447(0f, 0.425f);
		unk_0xBED53673591D764E(6);
	}
	else
	{
		unk_0xBED53673591D764E(0);
	}
	unk_0x1C500BB2E1897008(0f, 1f);
	unk_0x2775439F06235586(0);
	unk_0xCFB6E66E3665BF86(0, 0, 0, 0, 0);
	unk_0x0B40AAC1DD7D44E6(0, 0, 0, 0, 0);
}

void func_321(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_322(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_163(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_340(bParam4, bParam8))
	{
		return;
	}
	if (func_327())
	{
		return;
	}
	if (unk_0xE3F7CBC28F745843())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_325(unk_0x95B959F18401C09A(), 0))
		{
			return;
		}
	}
	if (unk_0x4CE1DD5CFC1F941E())
	{
		if (unk_0x86CF3D110E5DD82F() == 0 || unk_0xE3F7CBC28F745843())
		{
			return;
		}
	}
	if (Global_17411.f_4769 != 0)
	{
		if (unk_0xEABBA3F8727C0FE7(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_17411.f_4769)
			{
				if (Global_17411.f_5026[iVar1] != 359)
				{
					StringCopy(&(Global_17411.f_4771[iVar1 /*16*/]), unk_0x4464D5595CEED843(2, Global_17411.f_5026[iVar1], true), 64);
				}
				else if (Global_17411.f_5039[iVar1] != 32)
				{
					StringCopy(&(Global_17411.f_4771[iVar1 /*16*/]), unk_0xF745CA12DC8836EB(2, Global_17411.f_5039[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_17411.f_4770 = 0;
		}
		if (!Global_17411.f_4770)
		{
			unk_0xBB698266C5FDF0A7(Global_17411.f_5660[iVar0 /*10*/], "CLEAR_ALL");
			unk_0x818901B332D5541D();
			unk_0xBB698266C5FDF0A7(Global_17411.f_5660[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0x8DAB5B12D7B9AD29((1f - (Global_17411.f_5081 / 100f)));
			unk_0x818901B332D5541D();
			if (unk_0x4CE1DD5CFC1F941E())
			{
				unk_0xBB698266C5FDF0A7(Global_17411.f_5660[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0x295B86DE57A0721D(true);
				unk_0x818901B332D5541D();
			}
			iVar1 = 0;
			while (iVar1 < Global_17411.f_4769)
			{
				if (unk_0x36163153849DFDA1(&(Global_17411.f_4964[iVar1 /*4*/])) != unk_0x36163153849DFDA1("PREV"))
				{
					unk_0xBB698266C5FDF0A7(Global_17411.f_5660[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x4D9DA18AB3C2A466(iVar1);
					func_324(&(Global_17411.f_4771[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x36163153849DFDA1(&(Global_17411.f_4964[iVar2 /*4*/])) == unk_0x36163153849DFDA1("PREV"))
					{
						func_324(&(Global_17411.f_4771[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17411.f_5013[iVar1] == -1)
					{
						func_323(&(Global_17411.f_4964[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_17411.f_5013[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						unk_0x713FEBE56D2BD403(&(Global_17411.f_4964[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0xDC97362660946DF9(iVar3, 70);
						}
						else
						{
							unk_0xE800DC85FDF60F85(iVar3);
						}
						unk_0x36F3AA9FFAAF8606();
					}
					if (unk_0x4CE1DD5CFC1F941E())
					{
						if (Global_17411.f_5026[iVar1] != 359 && unk_0x0E4018692D92041D(Global_17411.f_5052, iVar1))
						{
							unk_0x295B86DE57A0721D(true);
							unk_0x4D9DA18AB3C2A466(Global_17411.f_5026[iVar1]);
						}
						else
						{
							unk_0x295B86DE57A0721D(false);
							unk_0x4D9DA18AB3C2A466(359);
						}
					}
					unk_0x818901B332D5541D();
				}
				iVar1++;
			}
			if (unk_0x36163153849DFDA1(&(Global_4267964.f_16)) != unk_0x36163153849DFDA1(""))
			{
				unk_0xBB698266C5FDF0A7(Global_17411.f_5660[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x4D9DA18AB3C2A466(Global_17411.f_4769);
				func_324(&Global_4267964);
				if (Global_4267964.f_20 == -1)
				{
					func_323(&(Global_4267964.f_16));
				}
				else
				{
					iVar4 = Global_17411.f_5013[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					unk_0x713FEBE56D2BD403(&(Global_4267964.f_16));
					if (bParam5)
					{
						unk_0xDC97362660946DF9(iVar4, 70);
					}
					else
					{
						unk_0xE800DC85FDF60F85(iVar4);
					}
					unk_0x36F3AA9FFAAF8606();
				}
				unk_0x818901B332D5541D();
			}
			unk_0xBB698266C5FDF0A7(Global_17411.f_5660[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x4D9DA18AB3C2A466(0);
			unk_0x4D9DA18AB3C2A466(0);
			unk_0x4D9DA18AB3C2A466(0);
			unk_0x4D9DA18AB3C2A466(80);
			unk_0x818901B332D5541D();
			unk_0xBB698266C5FDF0A7(Global_17411.f_5660[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17411.f_5082)
			{
				unk_0x4D9DA18AB3C2A466(1);
			}
			else
			{
				unk_0x4D9DA18AB3C2A466(0);
			}
			unk_0x818901B332D5541D();
			Global_17411.f_4770 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17411.f_4769)
		{
			if (Global_17411.f_5013[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0xBB698266C5FDF0A7(Global_17411.f_5660[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x4D9DA18AB3C2A466(iVar1);
					unk_0x713FEBE56D2BD403(&(Global_17411.f_4964[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0xDC97362660946DF9(iParam2, 70);
					}
					else
					{
						unk_0xE800DC85FDF60F85(iParam2);
					}
					unk_0x36F3AA9FFAAF8606();
					unk_0x818901B332D5541D();
				}
			}
			iVar1++;
		}
		if (Global_4267964.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0xBB698266C5FDF0A7(Global_17411.f_5660[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x4D9DA18AB3C2A466(iVar1);
				unk_0x713FEBE56D2BD403(&(Global_4267964.f_16));
				if (bParam5)
				{
					unk_0xDC97362660946DF9(iParam2, 70);
				}
				else
				{
					unk_0xE800DC85FDF60F85(iParam2);
				}
				unk_0x36F3AA9FFAAF8606();
				unk_0x818901B332D5541D();
			}
		}
		unk_0x1382AC429D0EA2BB(76, 66);
		unk_0x04602263DC4A45E9(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_17411.f_8353)
			{
				unk_0x7049F65F85106838(15, 0f, -0.0375f);
				Global_17411.f_8353 = 1;
			}
		}
		else if (Global_17411.f_8353)
		{
			unk_0x019859CB72B1DB4C(15);
			Global_17411.f_8353 = 0;
		}
		unk_0x94A8B1D385430451();
		if (Global_17411.f_5055)
		{
			unk_0x1382AC429D0EA2BB(82, 66);
			unk_0x04602263DC4A45E9(0f, 0f, 0f, 0f);
			unk_0x5A2C46836B4DF5B3(Global_17411.f_5660[iVar0 /*10*/], Global_17411.f_5053, Global_17411.f_5054, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0x94A8B1D385430451();
		}
		else
		{
			unk_0xFF524AE40FB6301A(Global_17411.f_5660[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_323(char* sParam0)
{
	unk_0x713FEBE56D2BD403(sParam0);
	unk_0x36F3AA9FFAAF8606();
}

void func_324(char* sParam0)
{
	unk_0x3EFC6497702202D6(sParam0);
}

bool func_325(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x95B959F18401C09A())
	{
		bVar0 = func_326(-1, 0) == 8;
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

int func_326(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_79();
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

int func_327()
{
	vector3 vVar0;
	
	if (Global_14553.f_1 > 3)
	{
		return 1;
	}
	if (func_328())
	{
		vVar0 = { 0f, -500f, 0f };
		unk_0x4951EE4BB7B6B4F7(&vVar0);
		if (Global_14498 == 0)
		{
			if (vVar0.y > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (vVar0.y > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_328()
{
	if (unk_0x1BCDA92AD0A7835B(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_329(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	unk_0x1256E5EA03020804(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 52:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
		case 51:
		case 55:
		case 56:
		case 57:
		case 58:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 53:
			*iParam5 = 100;
			break;
		
		case 54:
			unk_0x1256E5EA03020804(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_330(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x1256E5EA03020804(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0xBED53673591D764E(0);
	unk_0xC56FB1634FB1F447(0f, 0.35f);
	unk_0xBD5053F7FFEB44E5(2);
	unk_0x762F7A52B1325903(iVar0, iVar1, iVar2, iVar3);
	unk_0x1C500BB2E1897008(fParam0, ((Global_17408 + Global_17410) - 0.0046875f));
	unk_0x2775439F06235586(0);
	unk_0xCFB6E66E3665BF86(0, 0, 0, 0, 0);
	unk_0x0B40AAC1DD7D44E6(0, 0, 0, 0, 0);
}

void func_331(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0xAA70163B3B48EEE4(sParam2);
	unk_0xE800DC85FDF60F85(iParam3);
	unk_0xE800DC85FDF60F85(iParam4);
	unk_0xCCA49CAF391D1A15(fParam0, fParam1, 0);
}

float func_332(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x6D2E2622CA149402(sParam0))
	{
		if (unk_0x36163153849DFDA1(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_333();
	unk_0xCAE35308CC49F0CC(sParam0);
	unk_0xE800DC85FDF60F85(iParam1);
	unk_0xE800DC85FDF60F85(iParam2);
	return unk_0x201339347519B9A8(1);
}

void func_333()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x1256E5EA03020804(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_17411.f_8328)
	{
		iVar0 = Global_17411.f_8324;
		iVar1 = Global_17411.f_8325;
		iVar2 = Global_17411.f_8326;
		iVar3 = Global_17411.f_8327;
	}
	unk_0xBED53673591D764E(0);
	unk_0xC56FB1634FB1F447(0f, 0.35f);
	unk_0x762F7A52B1325903(iVar0, iVar1, iVar2, iVar3);
	unk_0x1C500BB2E1897008((Global_17408 + 0.0046875f), ((Global_17408 + Global_17410) - 0.0046875f));
	unk_0x2775439F06235586(0);
	unk_0xCFB6E66E3665BF86(0, 0, 0, 0, 0);
	unk_0x0B40AAC1DD7D44E6(0, 0, 0, 0, 0);
}

var func_334(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0x786AF4A44E1B5B4B(&(Global_17411.f_6997[iParam0 /*16*/])))
	{
		if (unk_0x36163153849DFDA1(&(Global_17411.f_6997[iParam0 /*16*/])) == -1487683087)
		{
			Var2 = { func_72(unk_0x95B959F18401C09A()) };
			if (unk_0x5E6D03D528D40F43(&Var2, &uVar1))
			{
				return func_335(&uVar1);
			}
		}
		else
		{
			return func_335(&(Global_17411.f_6997[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 50:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 51:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 53:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 54:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 55:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 56:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 57:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 58:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 59:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 60:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_335(var uParam0)
{
	return uParam0;
}

char* func_336(int iParam0)
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0x786AF4A44E1B5B4B(&(Global_17411.f_6020[iParam0 /*16*/])))
	{
		if (unk_0x36163153849DFDA1(&(Global_17411.f_6020[iParam0 /*16*/])) == -1487683087)
		{
			Var1 = { func_72(unk_0x95B959F18401C09A()) };
			unk_0x5E6D03D528D40F43(&Var1, &uVar0);
			return func_335(&uVar0);
		}
		else
		{
			return func_335(&(Global_17411.f_6020[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 50)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

int func_337()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0x3A5E614EC752B188(&iVar0, &iVar1);
	fVar2 = (to_float(iVar0) / to_float(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

int func_338(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	StringCopy(&cVar0, func_336(iParam0), 64);
	StringCopy(&cVar1, func_334(iParam0, bParam1), 64);
	if (unk_0x36163153849DFDA1(&cVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0x3A5E614EC752B188(&iVar2, &iVar3);
			fVar5 = unk_0x63151314B8B4D6EB(0);
			if (func_337())
			{
				iVar2 = round((to_float(iVar3) * fVar5));
			}
			fVar6 = (to_float(iVar2) / to_float(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_337())
			{
				fVar4 = 1f;
			}
			if (unk_0x1BCDA92AD0A7835B(joaat("director_mode")) > 0)
			{
				unk_0x6521432F7BEAC16C(&iVar2, &iVar3);
			}
			iVar2 = round((to_float(iVar2) / fVar4));
			iVar3 = round((to_float(iVar3) / fVar4));
		}
		else
		{
			unk_0x6521432F7BEAC16C(&iVar2, &iVar3);
		}
		vVar7 = { unk_0x5B78EE936879124F(&cVar0, &cVar1) };
		vVar7.x = (vVar7.x * (func_339(iParam0) / fVar4));
		vVar7.y = (vVar7.y * (func_339(iParam0) / fVar4));
		if (!bParam2)
		{
			vVar7.x = (vVar7.x - 2f);
			vVar7.y = (vVar7.y - 2f);
		}
		if (iParam0 == 30)
		{
			vVar7.x = 288f;
			vVar7.y = 106f;
		}
		if (iParam0 == 29 && unk_0x36163153849DFDA1(&(Global_17411.f_6997[29 /*16*/])) == -1487683087)
		{
			vVar7.x = 106f;
			vVar7.y = 106f;
		}
		*fParam3 = ((vVar7.x / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((vVar7.y / IntToFloat(iVar3)) / (vVar7.x / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x9E7AB96D7830E5B1() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_17410)
			{
				*fParam4 = (*fParam4 * (Global_17410 / *fParam3));
				*fParam3 = Global_17410;
			}
		}
		return 1;
	}
	return 0;
}

float func_339(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 51:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
			return 0.5f;
			break;
		
		case 60:
			return 0.8f;
			break;
	}
	return 1f;
}

int func_340(bool bParam0, bool bParam1)
{
	if (Global_2437364.f_1893.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x73DA1542B2F0C458() || (func_241(8, -1) && func_341() != 64)) || (unk_0x1B9A01A53920FD50() != 0 && !bParam1)) || (unk_0x71EC91BA8C88BCE0() && !bParam0)) || unk_0xBAA5E93732372E34()) || Global_71850) || Global_17411.f_8352) || unk_0x15C85368E432C647()) || Global_93734.f_1409)
	{
		return 0;
	}
	return 1;
}

int func_341()
{
	return Global_1312802;
}

void func_342(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = unk_0x4464D5595CEED843(2, iParam0, true);
	if (Global_17411.f_4769 >= 12)
	{
		StringCopy(&Global_4267964, sVar0, 64);
		StringCopy(&(Global_4267964.f_16), sParam1, 16);
		Global_4267964.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		unk_0x8950ED5730F62EE8(&(Global_17411.f_5052), Global_17411.f_4769);
	}
	StringCopy(&(Global_17411.f_4771[Global_17411.f_4769 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17411.f_4964[Global_17411.f_4769 /*4*/]), sParam1, 16);
	Global_17411.f_5013[Global_17411.f_4769] = iParam2;
	Global_17411.f_5026[Global_17411.f_4769] = iParam0;
	Global_17411.f_5039[Global_17411.f_4769] = 32;
	Global_17411.f_4769++;
}

char* func_343(int iParam0)
{
	int iVar0;
	
	if (iParam0 != -1)
	{
		iVar0 = iParam0;
	}
	else
	{
		iVar0 = 6;
	}
	switch (iVar0)
	{
		case 6:
			return "SNK_AFFORD";
		
		case 3:
			return "SNK_ITEM1_D";
		
		case 1:
			return "SNK_ITEM2_D";
		
		case 2:
			return "SNK_ITEM3_D";
		
		case 4:
			return "SNK_ITEM4_D";
		
		case 0:
			return "SNK_ITEM5_D";
		
		case 5:
			return "SNK_ITEM6_D";
		
		default:
	}
	return "";
}

void func_344(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_17411.f_4690), sParam0, 24);
	Global_17411.f_4762 = 0;
	Global_17411.f_4763 = 0;
	Global_17411.f_4764 = 0;
	Global_17411.f_4765 = 0;
	Global_17411.f_4766 = iParam1;
	Global_17411.f_4767 = unk_0xE3903F59E2F22150();
	Global_17411.f_4768 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17411.f_4696[iVar0] = 0;
		iVar0++;
	}
}

void func_345(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_17411.f_5739 = uParam0;
	Global_17411.f_5874 = iParam2;
	if (Global_17411.f_5739 < Global_17411.f_5738)
	{
		Global_17411.f_5738 = Global_17411.f_5739;
	}
	else if ((Global_17411.f_5729 && Global_17411.f_5739 > Global_17411.f_5740) || (!Global_17411.f_5729 && Global_17411.f_5739 >= (Global_17411.f_5738 + Global_17411.f_5225)))
	{
		iVar0 = Global_17411.f_5738;
		while (iVar0 <= Global_17411.f_5739)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_17411.f_5089[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_17411.f_5225 && Global_17411.f_5738 < 128)
		{
			Global_17411.f_5738++;
			iVar1 = 0;
			iVar0 = Global_17411.f_5738;
			while (iVar0 <= Global_17411.f_5739)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_17411.f_5089[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_17411.f_5728 = 0;
	Global_17411.f_5729 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_17411.f_4690), "", 24);
		StringCopy(&(Global_4267964.f_21), "", 16);
	}
}

void func_346(int iParam0)
{
	Global_17411.f_5738 = iParam0;
}

void func_347(var uParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_17411.f_5222 >= 256)
	{
		return;
	}
	if (Global_17411.f_5743 >= 4)
	{
		return;
	}
	if (Global_17411.f_5744 != 1)
	{
		return;
	}
	if (Global_17411.f_5743 >= Global_17411.f_5741)
	{
		return;
	}
	Global_17411.f_3918[Global_17411.f_5222] = uParam0;
	Global_17411.f_5222++;
	Global_17411.f_2124[Global_17411.f_5742 /*5*/][Global_17411.f_5743] = 2;
	Global_17411.f_5743++;
	if (Global_17411.f_5743 >= Global_17411.f_5741)
	{
		fVar0 = func_349();
		if (Global_17411.f_5075[Global_17411.f_5219] && Global_17411.f_5743 == Global_17411.f_5741)
		{
			func_338(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_17411.f_5068[(Global_17411.f_5219 - 1)])
		{
			Global_17411.f_5068[(Global_17411.f_5219 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_17411.f_5743 >= Global_17411.f_5741)
		{
			fVar3 = func_348();
			if (fVar3 > Global_17411.f_5745[Global_17411.f_5218])
			{
				Global_17411.f_5745[Global_17411.f_5218] = fVar3;
			}
		}
	}
}

float func_348()
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_17411.f_5743)
	{
		if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_17411.f_4433[((Global_17411.f_5224 - iVar1) + iVar0)] != 0)
		{
			if (func_338(Global_17411.f_4433[((Global_17411.f_5224 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > unk_0x6486D2A6F2DC8DCB(0.35f, 0))
	{
		return fVar2;
	}
	return unk_0x6486D2A6F2DC8DCB(0.35f, 0);
}

float func_349()
{
	float fVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar7 = 0;
	while (iVar7 < Global_17411.f_5743)
	{
		if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 9)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_320(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (unk_0x36163153849DFDA1(&(Global_17411.f_73[Global_17411.f_5742 /*6*/])) != 0)
	{
		unk_0xCAE35308CC49F0CC(&(Global_17411.f_73[Global_17411.f_5742 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_17411.f_5743)
	{
		if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (unk_0x36163153849DFDA1(&(Global_17411.f_73[Global_17411.f_5742 /*6*/])) != 0)
			{
				unk_0xFA6BEE2B1507FF1E(&(Global_17411.f_73[(Global_17411.f_5742 + iVar8) /*6*/]));
			}
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (unk_0x36163153849DFDA1(&(Global_17411.f_73[Global_17411.f_5742 /*6*/])) != 0)
			{
				unk_0xFA6BEE2B1507FF1E(&(Global_17411.f_73[(Global_17411.f_5742 + iVar8) /*6*/]));
			}
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 2)
		{
			if (unk_0x36163153849DFDA1(&(Global_17411.f_73[Global_17411.f_5742 /*6*/])) != 0)
			{
				unk_0xE800DC85FDF60F85(Global_17411.f_3918[((Global_17411.f_5222 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 3)
		{
			if (unk_0x36163153849DFDA1(&(Global_17411.f_73[Global_17411.f_5742 /*6*/])) != 0)
			{
				unk_0x974BEF45D557B847(Global_17411.f_4175[((Global_17411.f_5223 - iVar4) + iVar10)], Global_17411.f_4304[((Global_17411.f_5223 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 5)
		{
			if (unk_0x36163153849DFDA1(&(Global_17411.f_73[Global_17411.f_5742 /*6*/])) != 0)
			{
				unk_0xD61E5ED1D4E687A5(&(Global_2459153[((Global_17411.f_5221 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 6)
		{
			if (unk_0x36163153849DFDA1(&(Global_17411.f_73[Global_17411.f_5742 /*6*/])) != 0)
			{
				unk_0xFA6BEE2B1507FF1E(&(Global_2459153[((Global_17411.f_5221 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 7)
		{
			if (unk_0x36163153849DFDA1(&(Global_17411.f_73[Global_17411.f_5742 /*6*/])) != 0)
			{
				unk_0xD61E5ED1D4E687A5(&(Global_2459153[((Global_17411.f_5221 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17411.f_2124[Global_17411.f_5742 /*5*/][iVar7] == 9)
		{
			if (unk_0x36163153849DFDA1(&(Global_17411.f_73[Global_17411.f_5742 /*6*/])) != 0)
			{
				unk_0xD61E5ED1D4E687A5(&(Global_2459153[((Global_17411.f_5221 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (unk_0x36163153849DFDA1(&(Global_17411.f_73[Global_17411.f_5742 /*6*/])) != 0)
	{
		fVar0 = unk_0x201339347519B9A8(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_17411.f_4433[((Global_17411.f_5224 - iVar5) + iVar7)] != 0)
		{
			func_338(Global_17411.f_4433[((Global_17411.f_5224 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

int func_350(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	switch (func_290(uParam0))
	{
		case 0:
			switch (iVar0)
			{
				case 3:
					return 2;
				
				case 1:
					return 3;
				
				case 2:
					return 5;
				
				case 4:
					return 7;
				
				case 0:
					return 2;
				
				case 5:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			switch (iVar0)
			{
				case 3:
					return 1;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				
				case 4:
					return 8;
				
				case 0:
					return 2;
				
				case 5:
					return 5;
				
				default:
			}
			break;
		
		case 2:
			switch (iVar0)
			{
				case 3:
					return 1;
				
				case 1:
					return 2;
				
				case 2:
					return 4;
				
				case 4:
					return 6;
				
				case 0:
					return 3;
				
				case 5:
					return 4;
				
				default:
			}
			break;
	}
	return 0;
}

int func_351(int iParam0)
{
	if (func_125(func_353(iParam0), -1, 0) >= func_352(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_352(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 3:
			return 30;
		
		case 1:
			return 15;
		
		case 2:
			return 5;
		
		case 4:
			return 20;
		
		case 0:
			return 10;
		
		case 5:
			return 10;
		
		default:
	}
	return 0;
}

int func_353(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 3:
			return 1275;
		
		case 1:
			return 1276;
		
		case 2:
			return 1277;
		
		case 4:
			return 1097;
		
		case 0:
			return 62;
		
		case 5:
			return 63;
		
		default:
	}
	return 10383;
}

void func_354(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_17411.f_5224 >= 256)
	{
		return;
	}
	if (Global_17411.f_5743 >= 4)
	{
		return;
	}
	if (Global_17411.f_5744 != 1)
	{
		return;
	}
	if (Global_17411.f_5743 >= Global_17411.f_5741)
	{
		return;
	}
	Global_17411.f_4433[Global_17411.f_5224] = iParam0;
	Global_17411.f_5224++;
	Global_17411.f_2124[Global_17411.f_5742 /*5*/][Global_17411.f_5743] = 4;
	Global_17411.f_5743++;
	if (Global_17411.f_5743 >= Global_17411.f_5741)
	{
		fVar0 = func_349();
		if (Global_17411.f_5075[Global_17411.f_5219] && Global_17411.f_5743 == Global_17411.f_5741)
		{
			func_338(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_17411.f_5068[(Global_17411.f_5219 - 1)])
		{
			Global_17411.f_5068[(Global_17411.f_5219 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_17411.f_5743 >= Global_17411.f_5741)
		{
			fVar3 = func_348();
			if (fVar3 > Global_17411.f_5745[Global_17411.f_5218])
			{
				Global_17411.f_5745[Global_17411.f_5218] = fVar3;
			}
		}
	}
}

void func_355(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_17411.f_5218 > iParam0)
	{
		return;
	}
	if (Global_17411.f_5218 >= 128)
	{
		return;
	}
	if (Global_17411.f_5220 >= 256)
	{
		return;
	}
	if (Global_17411.f_5743 < Global_17411.f_5741)
	{
		return;
	}
	if (Global_17411.f_5218 != iParam0)
	{
		Global_17411.f_5218 = iParam0;
		Global_17411.f_5219 = 0;
	}
	iVar0 = Global_17411.f_5056[Global_17411.f_5219];
	if (iVar0 != 1)
	{
		while (Global_17411.f_5219 < 4 && iVar0 != 1)
		{
			Global_17411.f_5219++;
			iVar0 = Global_17411.f_5056[Global_17411.f_5219];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_17411.f_73[Global_17411.f_5220 /*6*/]), sParam1, 24);
	if (!unk_0x786AF4A44E1B5B4B(sParam1) && !unk_0xEAF855A7DC28BC8D(sParam1))
	{
	}
	Global_17411.f_1610[Global_17411.f_5220] = bParam3;
	Global_17411.f_1867[Global_17411.f_5220] = iParam4;
	Global_17411.f_5220++;
	if (!bParam3)
	{
		func_358(Global_17411.f_5218, 1);
	}
	else
	{
		func_358(Global_17411.f_5218, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_357(&(Global_17411.f_73[Global_17411.f_5220 /*6*/]));
		if (Global_17411.f_5075[Global_17411.f_5219])
		{
			func_338(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_17411.f_5068[Global_17411.f_5219])
		{
			Global_17411.f_5068[Global_17411.f_5219] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_356(&(Global_17411.f_73[Global_17411.f_5220 /*6*/]));
			if (fVar4 > Global_17411.f_5745[iParam0])
			{
				Global_17411.f_5745[iParam0] = fVar4;
			}
		}
	}
	unk_0x8950ED5730F62EE8(&(Global_17411.f_5089[iParam0]), Global_17411.f_5219);
	Global_17411.f_5219++;
	Global_17411.f_5744 = 1;
	Global_17411.f_5742 = (Global_17411.f_5220 - 1);
	Global_17411.f_5743 = 0;
	Global_17411.f_5741 = iParam2;
}

float func_356(char* sParam0)
{
	if (!unk_0xEAF855A7DC28BC8D(sParam0))
	{
	}
	return unk_0x6486D2A6F2DC8DCB(0.35f, 0);
}

float func_357(char* sParam0)
{
	if (!unk_0x6D2E2622CA149402(sParam0))
	{
		if (unk_0x36163153849DFDA1(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_320(0, 1, 0, 0, 0, 0, 0);
	unk_0xCAE35308CC49F0CC(sParam0);
	return unk_0x201339347519B9A8(1);
}

void func_358(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = floor((to_float(iParam0) / 32f));
	if (bParam1)
	{
		unk_0x8950ED5730F62EE8(&(Global_17411.f_6015[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0xCE689A8E8C42ED78(&(Global_17411.f_6015[iVar0]), (iParam0 - iVar0 * 32));
	}
}

char* func_359(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 3:
			return "SNK_ITEM1";
		
		case 1:
			return "SNK_ITEM2";
		
		case 2:
			return "SNK_ITEM3";
		
		case 4:
			return "SNK_ITEM4";
		
		case 0:
			return "SNK_ITEM5";
		
		case 5:
			return "SNK_ITEM6";
		
		default:
	}
	return "";
}

void func_360(int iParam0, char* sParam1, char* sParam2)
{
	Global_17411 = iParam0;
	func_361(29, sParam1, sParam2);
}

void func_361(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_17411.f_6020[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_17411.f_6997[iParam0 /*16*/]), sParam2, 64);
}

void func_362(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_17411.f_1), sParam0, 16);
	Global_17411.f_68 = 0;
	Global_17411.f_69 = 0;
	Global_17411.f_70 = 0;
	Global_17411.f_71 = 0;
	Global_17411.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17411.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_363(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17411.f_5083[0] = iParam0;
	Global_17411.f_5083[1] = iParam1;
	Global_17411.f_5083[2] = iParam2;
	Global_17411.f_5083[3] = iParam3;
	Global_17411.f_5083[4] = iParam4;
}

void func_364(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17411.f_5056[0] = iParam0;
	Global_17411.f_5056[1] = iParam1;
	Global_17411.f_5056[2] = iParam2;
	Global_17411.f_5056[3] = iParam3;
	Global_17411.f_5056[4] = iParam4;
	Global_17411.f_5226 = 0;
	if (iParam0 != 0)
	{
		Global_17411.f_5226++;
	}
	if (iParam1 != 0)
	{
		Global_17411.f_5226++;
	}
	if (iParam2 != 0)
	{
		Global_17411.f_5226++;
	}
	if (iParam3 != 0)
	{
		Global_17411.f_5226++;
	}
	if (iParam4 != 0)
	{
		Global_17411.f_5226++;
	}
}

void func_365(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_17411.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_17411.f_2124[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2459153[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_17411.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17411.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_17411.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17411.f_5089[iVar0] = 0;
		Global_17411.f_5227[iVar0] = 0;
		Global_17411.f_5356[iVar0] = 0;
		Global_17411.f_5879[iVar0] = 0f;
		Global_17411.f_5485[iVar0] = 0;
		Global_17411.f_5745[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_17411.f_5056[iVar0] = 0;
		Global_17411.f_5068[iVar0] = 0f;
		Global_17411.f_5062[iVar0] = -1f;
		Global_17411.f_5075[iVar0] = 0;
		Global_17411.f_5083[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17411.f_4964[iVar0 /*4*/]), "", 16);
		Global_17411.f_5013[iVar0] = -1;
		Global_17411.f_5026[iVar0] = 359;
		Global_17411.f_5039[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 61)
	{
		StringCopy(&(Global_17411.f_6020[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_17411.f_6997[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_17411.f_1610[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4267964.f_16), "", 16);
	Global_4267964.f_20 = -1;
	Global_17411 = 0;
	Global_17411.f_5218 = 0;
	Global_17411.f_5219 = 0;
	Global_17411.f_5220 = 0;
	Global_17411.f_5222 = 0;
	Global_17411.f_5223 = 0;
	Global_17411.f_5224 = 0;
	Global_17411.f_5221 = 0;
	Global_17411.f_5874 = 0;
	Global_17411.f_6014 = 0;
	Global_17411.f_5739 = 0;
	Global_17411.f_5738 = 0;
	Global_17411.f_5740 = 0;
	StringCopy(&(Global_17411.f_4690), "", 24);
	Global_17411.f_4762 = 0;
	Global_17411.f_4763 = 0;
	Global_17411.f_4764 = 0;
	Global_17411.f_4765 = 0;
	Global_17411.f_4766 = 0;
	Global_17411.f_4767 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17411.f_4696[iVar0] = 0;
		iVar0++;
	}
	Global_17411.f_4768 = 0;
	StringCopy(&(Global_4267964.f_21), "", 16);
	Global_4267964.f_61 = 0;
	Global_4267964.f_62 = 0;
	Global_4267964.f_63 = 0;
	Global_4267964.f_64 = 0;
	Global_4267964.f_65 = 0;
	Global_4267964.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4267964.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4267964.f_67 = 0;
	StringCopy(&(Global_17411.f_1), "", 16);
	Global_17411.f_5074 = 0f;
	Global_17411.f_68 = 0;
	Global_17411.f_69 = 0;
	Global_17411.f_70 = 0;
	Global_17411.f_71 = 0;
	Global_17411.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17411.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_17411.f_5744 = 0;
	Global_17411.f_5743 = 0;
	Global_17411.f_5741 = 0;
	Global_17411.f_5742 = 0;
	Global_17411.f_4769 = 0;
	Global_17411.f_4770 = 0;
	Global_17411.f_5225 = 10;
	Global_17411.f_5226 = 0;
	Global_17411.f_5876 = 0f;
	Global_17411.f_5877 = 0f;
	Global_17411.f_5728 = 0;
	Global_17411.f_5729 = 0;
	Global_17411.f_5730 = 0f;
	Global_17411.f_5731 = 0;
	Global_17411.f_5733 = 0;
	Global_17411.f_5732 = 0;
	Global_17411.f_5734 = 0;
	Global_17411.f_5735 = 0;
	Global_17411.f_5736 = 0;
	Global_17411.f_5737 = 0;
	Global_17411.f_8349 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_17411.f_6008[iVar0] = -1;
		Global_17411.f_6011[iVar0] = -1;
		iVar0++;
	}
	Global_17411.f_5081 = 0f;
	Global_17411.f_5052 = 0;
	Global_17411.f_5082 = 0;
	iVar0 = 0;
	while (iVar0 < Global_17411.f_6015)
	{
		Global_17411.f_6015[iVar0] = 0;
		iVar0++;
	}
	Global_17411.f_8328 = 0;
	Global_17411.f_8323 = 0;
	Global_17411.f_8333 = 0;
	Global_17411.f_8338 = 0;
	Global_17411.f_8343 = 0;
	Global_17411.f_8345 = 0;
	Global_17411.f_8351 = 0;
	Global_17408 = 0.05f;
	Global_17409 = 0.05f;
	Global_17410 = 0.225f;
	fVar2 = unk_0x63151314B8B4D6EB(0);
	if (bParam0)
	{
		Global_17410 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_17410 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_17410 = 0.225f;
	}
}

int func_366(int iParam0, var uParam1, var uParam2, var uParam3)
{
	vector3 vVar0;
	float fVar1;
	
	switch (iParam0)
	{
		case 0:
			*uParam1 = { unk_0xCD1EDCB38767B47C(-706.6382f, -913.6887f, 19.21f, -89.999f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-89.999f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 1:
			*uParam1 = { unk_0xCD1EDCB38767B47C(-47.19871f, -1757.67f, 29.42f, -130f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-130f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 2:
			*uParam1 = { unk_0xCD1EDCB38767B47C(1164.21f, -322.89f, 69.2f, -80f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-80f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 3:
			*uParam1 = { unk_0xCD1EDCB38767B47C(1698.307f, 4923.371f, 42.06f, 145f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (145f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 4:
			*uParam1 = { unk_0xCD1EDCB38767B47C(-1820.465f, 793.8166f, 138.09f, -47.53f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-47.53f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 5:
			vVar0 = { 1165.958f, 2710.201f, 38.14286f };
			fVar1 = -1.15f;
			*uParam1 = { unk_0xCD1EDCB38767B47C(vVar0, fVar1, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar1 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 6:
			vVar0 = { -2967.027f, 390.9038f, 15.02f };
			fVar1 = -94.76f;
			*uParam1 = { unk_0xCD1EDCB38767B47C(vVar0, fVar1, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar1 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 7:
			vVar0 = { -1222.331f, -907.8234f, 12.31f };
			fVar1 = -147.297f;
			*uParam1 = { unk_0xCD1EDCB38767B47C(vVar0, fVar1, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar1 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 8:
			vVar0 = { 1134.811f, -982.3615f, 46.4f };
			fVar1 = 96.68562f;
			*uParam1 = { unk_0xCD1EDCB38767B47C(vVar0, fVar1, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar1 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 9:
			vVar0 = { -1486.673f, -378.4638f, 40.15f };
			fVar1 = -46.229f;
			*uParam1 = { unk_0xCD1EDCB38767B47C(vVar0, fVar1, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar1 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 10:
			vVar0 = { -3244.573f, 1000.658f, 12.83f };
			fVar1 = 175.074f;
			*uParam1 = { unk_0xCD1EDCB38767B47C(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 11:
			vVar0 = { -3041.357f, 584.2665f, 7.9f };
			fVar1 = -162.241f;
			*uParam1 = { unk_0xCD1EDCB38767B47C(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 12:
			vVar0 = { 548.9015f, 2668.941f, 42.15f };
			fVar1 = -82.5f;
			*uParam1 = { unk_0xCD1EDCB38767B47C(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 13:
			vVar0 = { 2554.875f, 381.3857f, 108.62f };
			fVar1 = 177.716f;
			*uParam1 = { unk_0xCD1EDCB38767B47C(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 14:
			vVar0 = { 2676.212f, 3280.969f, 55.24f };
			fVar1 = 150.87f;
			*uParam1 = { unk_0xCD1EDCB38767B47C(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 15:
			vVar0 = { 1729.329f, 6417.123f, 35.03f };
			fVar1 = 63.641f;
			*uParam1 = { unk_0xCD1EDCB38767B47C(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 16:
			vVar0 = { 1959.323f, 3742.29f, 32.34f };
			fVar1 = 120f;
			*uParam1 = { unk_0xCD1EDCB38767B47C(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 17:
			vVar0 = { 24.94562f, -1344.954f, 29.49f };
			fVar1 = 90f;
			*uParam1 = { unk_0xCD1EDCB38767B47C(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 18:
			vVar0 = { 373.5954f, 328.5892f, 103.56f };
			fVar1 = 75.885f;
			*uParam1 = { unk_0xCD1EDCB38767B47C(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case -2:
			*uParam1 = { 1390.653f, 3598.966f, 35.6115f };
			*uParam2 = { -3.6091f, 0.022f, -8.6461f };
			*uParam3 = 35f;
			break;
	}
	return 1;
}

void func_367()
{
	if (unk_0x4CE1DD5CFC1F941E())
	{
		unk_0x0C130F0ECCD773BC(0.325f, 0.3f);
	}
}

void func_368(int iParam0, int iParam1)
{
	if (!func_277(unk_0x95B959F18401C09A(), 1) || iParam1)
	{
		if (!func_373())
		{
			Global_1312417.f_1 = 1;
			Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_9 = 1;
			if (iParam0 == 1)
			{
				Global_1312417.f_2 = 1;
			}
			func_369(7, 0, -1);
		}
	}
}

void func_369(int iParam0, int iParam1, int iParam2)
{
	if (!func_373() || iParam1)
	{
		Global_1312417 = 1;
		func_372(1);
		if (((!unk_0x289064CB38B560AA() && !func_371()) && !func_370(unk_0x95B959F18401C09A())) && !func_137(unk_0x95B959F18401C09A()))
		{
			Global_968392 = 1;
		}
		Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_8 = 1;
		unk_0x35EEC6C2BC821A71(1, iParam0, iParam2, -1);
	}
}

int func_370(int iParam0)
{
	if (func_277(iParam0, 1))
	{
		if (Global_1589819[iParam0 /*818*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_371()
{
	return Global_2448756.f_728;
}

void func_372(bool bParam0)
{
	if (unk_0xB331FCEB94EB05C8())
	{
		if (!func_373())
		{
			if (func_46(unk_0x95B959F18401C09A(), 1, 0))
			{
				unk_0x7D1F395C3A7A37BE(unk_0x33CD235DF1E6A94E(), 1);
				unk_0x5FEE418CE11E6DDE(unk_0x33CD235DF1E6A94E(), 342, false);
				unk_0x5FEE418CE11E6DDE(unk_0x33CD235DF1E6A94E(), 122, false);
			}
			unk_0xC9CEFB3A060444AF(unk_0x95B959F18401C09A(), 1f);
			unk_0x1BFE3E4BBCCE8B31(0);
			unk_0x3E281A3DADCB2E6B(1);
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
			if (func_46(unk_0x95B959F18401C09A(), 1, 1))
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
			unk_0x3E281A3DADCB2E6B(0);
		}
	}
}

bool func_373()
{
	return Global_1312417;
}

void func_374(int iParam0)
{
	func_375(iParam0, 0f);
}

void func_375(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_295(unk_0x0E4018692D92041D(*iParam0, 4)) - fParam1);
	unk_0x8950ED5730F62EE8(iParam0, 1);
	unk_0xCE689A8E8C42ED78(iParam0, 2);
	iParam0->f_2 = 0f;
}

int func_376(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_257(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0xF272A2699B521CE6(unk_0x3EE1295CEFBEFED4()))
	{
		return 0;
	}
	if (func_167(0))
	{
		return 0;
	}
	if (unk_0x286C823E0969F22A())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_37139[iVar0 /*32*/] == 1 && Global_37139[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_37139[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_37139[iVar0 /*32*/].f_5 = 1;
			Global_37139[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_37139[iVar0 /*32*/] == 0)
			{
			}
			if (Global_37139[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_377()
{
	if (Global_106565.f_20404.f_145 > 0)
	{
		return 0;
	}
	return 1;
}

bool func_378()
{
	return Global_17270;
}

int func_379(int iParam0, var uParam1, float fParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam3 = { unk_0xCD1EDCB38767B47C(*uParam1, fParam2, 1.46991f, -0.814453f, -0.97226f) };
			*uParam4 = { unk_0xCD1EDCB38767B47C(*uParam1, fParam2, -1.5828f, -0.814453f, 0.84774f) };
			*uParam5 = { unk_0xCD1EDCB38767B47C(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam3 = { unk_0xCD1EDCB38767B47C(*uParam1, fParam2, -1.55054f, -0.920414f, -0.998837f) };
			*uParam4 = { unk_0xCD1EDCB38767B47C(*uParam1, fParam2, 1.54138f, -0.920414f, 0.901165f) };
			*uParam5 = { unk_0xCD1EDCB38767B47C(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam3 = { unk_0xCD1EDCB38767B47C(*uParam1, fParam2, -2.60296f, -0.851523f, -0.999289f) };
			*uParam4 = { unk_0xCD1EDCB38767B47C(*uParam1, fParam2, 0.443411f, -0.851523f, 0.820711f) };
			*uParam5 = { unk_0xCD1EDCB38767B47C(*uParam1, fParam2, -1.17421f, 0.39005f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case -2:
			*uParam3 = { 1390.955f, 3604.379f, 33.98091f };
			*uParam4 = { 1394.475f, 3605.664f, 35.98091f };
			*uParam5 = { 1392.551f, 3605.449f, 35.30949f };
			*uParam6 = 0.75f;
			break;
	}
	return 1;
}

bool func_380(int iParam0, int iParam1)
{
	return unk_0x0E4018692D92041D(Global_2424047[iParam0 /*416*/].f_208, iParam1);
}

void func_381(var uParam0, var uParam1)
{
	unk_0xED68CDDDE25A144E(unk_0x33CD235DF1E6A94E());
	func_419(unk_0x95B959F18401C09A(), 1, 0, 0);
	unk_0xC7E6A5D90DED6E0B(0f);
	unk_0xD6EDA274D82E8678(0f, 1065353216);
	if (uParam0->f_51 > 0)
	{
		*uParam1 = uParam0->f_51;
		uParam0->f_51 = 0;
	}
	func_402();
	unk_0xCE689A8E8C42ED78(&(uParam0->f_53), 7);
	if (func_145("SHR_MENU"))
	{
		unk_0xEDF90B96BED57BCE(1);
	}
	if (uParam0->f_14 != -1)
	{
		func_256(&(uParam0->f_14));
	}
	if (unk_0x117DAF3BF7232886(uParam0->f_1))
	{
		unk_0x2F8A4DF7D0DFF0A8(uParam0->f_1, 0);
	}
	unk_0x63F0B040CE6EDF0F(false, 0, 3000, 1, 0, 0);
}

int func_382(float fParam0)
{
	if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()) && !unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		if (fParam0 <= 0f)
		{
			return unk_0xB6AC6399D9375C3A(unk_0x33CD235DF1E6A94E()) > 0;
		}
		else
		{
			return unk_0x7A607552722EC814(unk_0x33CD235DF1E6A94E(), unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), 1), fParam0) > 0;
		}
	}
	return 0;
}

int func_383(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (iParam2 == -1)
	{
		return 1;
	}
	if (unk_0xB331FCEB94EB05C8() && !bParam3)
	{
		if (unk_0xEE14D9A9F531ADDC(unk_0x5009A219B22D2352(unk_0x78DCC5D0CB43DEBA(), iParam0)) >= iParam2)
		{
			return 1;
		}
	}
	else if (unk_0xEE14D9A9F531ADDC(unk_0x5009A219B22D2352(unk_0xE3903F59E2F22150(), iParam0)) >= iParam2)
	{
		return 1;
	}
	return 0;
}

int func_384(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if ((*uParam0)[iVar0] < 10)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_385()
{
	unk_0x99414FB2D30425C1(&uLocal_119);
	unk_0xC4A347124F39D998(0, unk_0x33CD235DF1E6A94E(), -1, 0, 2);
	unk_0x108754262311D34F(0, "mp_am_hold_up", "handsup_enter", 8f, -8f, -1, 262192, 0, 0, 0, 0);
	unk_0x108754262311D34F(0, "mp_am_hold_up", "handsup_base", 8f, -4f, -1, 262193, 0, 0, 0, 0);
	unk_0xC734F59A13D39AEF(uLocal_119);
	unk_0x99414FB2D30425C1(&uLocal_120);
	unk_0x108754262311D34F(0, "mp_am_hold_up", "handsup_base", 4f, -4f, -1, 262193, 0, 0, 0, 0);
	unk_0xC734F59A13D39AEF(uLocal_120);
	unk_0x99414FB2D30425C1(&uLocal_121);
	unk_0x7E268975AF5EA74F(0, vLocal_112, 2f, -1, 0.25f, 0, fLocal_113);
	unk_0x108754262311D34F(0, "mp_am_hold_up", "cower_intro", 8f, -4f, -1, 262144, 0, 0, 0, 0);
	unk_0x108754262311D34F(0, "mp_am_hold_up", "cower_loop", 8f, -4f, -1, 270337, 0, 0, 0, 0);
	unk_0x6DA4DBA91F234052(0, vLocal_112, 250f, -1, 1, 0);
	unk_0x976357E602648DDF(0, 0);
	unk_0xC734F59A13D39AEF(uLocal_121);
	unk_0x99414FB2D30425C1(&uLocal_123);
	unk_0x108754262311D34F(0, "mp_am_hold_up", "cower_intro", 8f, -4f, -1, 262144, 0, 0, 0, 0);
	unk_0x108754262311D34F(0, "mp_am_hold_up", "cower_loop", 8f, -4f, -1, 270337, 0, 0, 0, 0);
	unk_0x976357E602648DDF(0, 0);
	unk_0xC734F59A13D39AEF(uLocal_123);
	unk_0x99414FB2D30425C1(&uLocal_122);
	unk_0x7E268975AF5EA74F(0, vLocal_112, 2f, -1, 0.25f, 0, (fLocal_113 - 180f));
	unk_0x951C731169A4F5FC(0, 1);
	unk_0x77631BBB824DF500(0, 20f, 0);
	unk_0xC734F59A13D39AEF(uLocal_122);
}

void func_386(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_387(var uParam0)
{
	if (unk_0x22C3124A898FB82A(uParam0))
	{
		return unk_0xBC2FC12AD0FBF72E(unk_0xBB28786B7F552D0B(uParam0));
	}
	return 1;
}

int func_388()
{
	return Local_103.f_12;
}

char* func_389(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return "ShopUI_Title_GasStation";
		
		case 5:
			return "ShopUI_Title_LiquorStore3";
		
		case 6:
		case 7:
		case 8:
		case 9:
			return "ShopUI_Title_LiquorStore2";
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			return "ShopUI_Title_ConvenienceStore";
		
		case -2:
			return "ShopUI_Title_LiquorStore";
		
		default:
	}
	return "NULL";
}

int func_390()
{
	vector3 vVar0;
	
	if (func_398(&(Local_105.f_50), 0))
	{
		func_396(Local_105.f_50, &iLocal_139, &iLocal_140, &iLocal_141, &iLocal_142, &vLocal_143, &vLocal_144);
		func_395(Local_105.f_50, &vLocal_145, &vLocal_146, &fLocal_147);
		func_394(Local_105.f_50, &vLocal_148, &vLocal_149, &fLocal_150);
		switch (Local_105.f_50)
		{
			case 0:
				vLocal_115 = { 1393.1f, 3605.89f, (35.2f - 0.2f) };
				vLocal_116 = { 0f, 0f, 21.89f };
				iLocal_110 = func_52(0);
				vLocal_112 = { 1394.852f, 3609.509f, 33.9809f };
				fLocal_113 = 116.5329f;
				iLocal_134 = 1;
				if (func_392(6, 18))
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 0;
					iLocal_316[1] = 0;
					iLocal_317[1] = 0;
					iLocal_316[2] = 0;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 0;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 1;
					iLocal_317[0] = 0;
					iLocal_316[1] = 1;
					iLocal_317[1] = 1;
					iLocal_316[2] = 1;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 0;
					iLocal_317[4] = 0;
				}
				break;
			
			case 1:
				vLocal_116 = { 0f, 0f, -160f };
				vLocal_115 = { -3041.38f, 584.35f, (8.11f - 0.2f) };
				iLocal_110 = func_52(0);
				vLocal_112 = { -3047.512f, 588.9807f, 6.9089f };
				fLocal_113 = 178.8753f;
				iLocal_134 = 1;
				if (func_392(6, 18))
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 1;
					iLocal_316[1] = 1;
					iLocal_317[1] = 0;
					iLocal_316[2] = 0;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 0;
					iLocal_317[4] = 1;
				}
				else
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 0;
					iLocal_316[1] = 0;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 0;
					iLocal_317[4] = 1;
				}
				break;
			
			case 2:
				vLocal_115 = { -3244.56f, 1000.74f, (13.03f - 0.2f) };
				vLocal_116 = { 0f, 0f, 175.52f };
				iLocal_110 = func_52(0);
				vLocal_112 = { -3249.114f, 1006.558f, 11.8307f };
				fLocal_113 = 191.594f;
				iLocal_134 = 1;
				if (func_392(6, 18))
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 2;
					iLocal_316[1] = 1;
					iLocal_317[1] = 1;
					iLocal_316[2] = 0;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 0;
					iLocal_317[4] = 2;
				}
				else
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 1;
					iLocal_316[1] = 0;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 0;
					iLocal_317[4] = 2;
				}
				break;
			
			case 3:
				vLocal_116 = { 0f, 0f, -82.38f };
				vLocal_115 = { 548.82f, 2668.93f, (42.36f - 0.2f) };
				iLocal_110 = func_52(0);
				vLocal_112 = { 543.0796f, 2663.967f, 41.1565f };
				fLocal_113 = 228.4295f;
				iLocal_134 = 1;
				if (func_392(6, 18))
				{
					iLocal_316[0] = 1;
					iLocal_317[0] = 0;
					iLocal_316[1] = 2;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 0;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 0;
					iLocal_316[1] = 2;
					iLocal_317[1] = 1;
					iLocal_316[2] = 1;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 0;
					iLocal_317[4] = 0;
				}
				break;
			
			case 4:
				vLocal_116 = { 0f, 0f, 180f };
				vLocal_115 = { 2554.88f, 381.47f, (108.82f - 0.2f) };
				iLocal_110 = func_52(0);
				vLocal_112 = { 2549.85f, 387.1622f, 107.623f };
				fLocal_113 = 197.2994f;
				iLocal_134 = 1;
				if (func_392(6, 18))
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 0;
					iLocal_316[1] = 2;
					iLocal_317[1] = 1;
					iLocal_316[2] = 1;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 0;
					iLocal_317[4] = 1;
				}
				else
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 1;
					iLocal_316[1] = 1;
					iLocal_317[1] = 0;
					iLocal_316[2] = 0;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 0;
					iLocal_317[4] = 1;
				}
				break;
			
			case 5:
				vLocal_116 = { 0f, 0f, 155f };
				vLocal_115 = { 2676.26f, 3281.04f, (55.44f - 0.2f) };
				iLocal_110 = func_52(0);
				vLocal_112 = { 2671.351f, 3283.136f, 54.2411f };
				fLocal_113 = 296.5427f;
				iLocal_134 = 1;
				if (func_392(6, 18))
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 1;
					iLocal_316[1] = 0;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 0;
					iLocal_317[4] = 2;
				}
				else
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 2;
					iLocal_316[1] = 2;
					iLocal_317[1] = 1;
					iLocal_316[2] = 0;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 0;
					iLocal_317[4] = 2;
				}
				break;
			
			case 6:
				vLocal_116 = { 0f, 0f, 63.3f };
				vLocal_115 = { 1729.4f, 6417.08f, (35.24f - 0.2f) };
				iLocal_110 = func_52(0);
				vLocal_112 = { 1733.967f, 6421.495f, 34.0372f };
				fLocal_113 = 130.9518f;
				iLocal_134 = 1;
				if (func_392(6, 18))
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 2;
					iLocal_316[1] = 1;
					iLocal_317[1] = 0;
					iLocal_316[2] = 0;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 0;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 1;
					iLocal_317[0] = 0;
					iLocal_316[1] = 0;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 0;
					iLocal_317[4] = 0;
				}
				break;
			
			case 7:
				vLocal_116 = { 0f, 0f, 117f };
				vLocal_115 = { 1959.4f, 3742.33f, (32.54f - 0.2f) };
				iLocal_110 = func_52(0);
				vLocal_112 = { 1958.92f, 3746.267f, 31.3438f };
				fLocal_113 = 73.6245f;
				iLocal_134 = 1;
				if (func_392(6, 18))
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 0;
					iLocal_316[1] = 1;
					iLocal_317[1] = 1;
					iLocal_316[2] = 0;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 0;
					iLocal_317[4] = 1;
				}
				else
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 0;
					iLocal_316[1] = 0;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 0;
					iLocal_317[4] = 1;
				}
				break;
			
			case 8:
				vLocal_116 = { 0f, 0f, 92f };
				vLocal_115 = { 25.03f, -1344.96f, (29.69f - 0.2f) };
				iLocal_110 = func_52(0);
				vLocal_112 = { 30.5721f, -1339.782f, 28.4939f };
				fLocal_113 = 110.7699f;
				iLocal_134 = 1;
				if (func_392(6, 18))
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 1;
					iLocal_316[1] = 2;
					iLocal_317[1] = 0;
					iLocal_316[2] = 0;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 0;
					iLocal_317[4] = 2;
				}
				else
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 1;
					iLocal_316[1] = 1;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 0;
					iLocal_317[4] = 2;
				}
				break;
			
			case 9:
				vLocal_116 = { 0f, 0f, 75f };
				vLocal_115 = { 373.68f, 328.56f, (103.77f - 0.2f) };
				iLocal_110 = func_52(0);
				vLocal_112 = { 376.2976f, 331.8158f, 102.5664f };
				fLocal_113 = 52.0064f;
				iLocal_134 = 1;
				if (func_392(6, 18))
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 2;
					iLocal_316[1] = 2;
					iLocal_317[1] = 1;
					iLocal_316[2] = 1;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 0;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 2;
					iLocal_316[1] = 1;
					iLocal_317[1] = 1;
					iLocal_316[2] = 0;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 0;
					iLocal_317[4] = 0;
				}
				break;
			
			case 10:
				vLocal_116 = { 0f, 0f, 0f };
				vLocal_115 = { 1165.96f, 2710.2f, (38.25f - 0.105f) };
				iLocal_110 = func_52(0);
				vLocal_112 = { 1168.971f, 2719.118f, 36.0632f };
				fLocal_113 = 136.5945f;
				iLocal_134 = 3;
				if (func_392(10, 22))
				{
					iLocal_316[0] = 1;
					iLocal_317[0] = 0;
					iLocal_316[1] = 0;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 0;
					iLocal_316[1] = 2;
					iLocal_317[1] = 0;
					iLocal_316[2] = 0;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				break;
			
			case 11:
				vLocal_116 = { 0f, 0f, -92f };
				vLocal_115 = { -2967.03f, 390.9f, (15.23f - 0.2f) };
				iLocal_110 = func_52(0);
				vLocal_112 = { -2962.983f, 391.9788f, 14.0433f };
				fLocal_113 = 176.1174f;
				iLocal_134 = 3;
				if (func_392(10, 22))
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 0;
					iLocal_316[1] = 1;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 1;
					iLocal_316[1] = 2;
					iLocal_317[1] = 1;
					iLocal_316[2] = 0;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				break;
			
			case 12:
				vLocal_116 = { 0f, 0f, -145f };
				vLocal_115 = { -1222.33f, -907.82f, (12.52f - 0.2f) };
				iLocal_110 = func_52(0);
				vLocal_112 = { -1218.283f, -915.7103f, 10.3264f };
				fLocal_113 = 43.8031f;
				iLocal_134 = 3;
				if (func_392(10, 22))
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 1;
					iLocal_316[1] = 1;
					iLocal_317[1] = 1;
					iLocal_316[2] = 0;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 2;
					iLocal_316[1] = 1;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				break;
			
			case 13:
				vLocal_116 = { 0f, 0f, 103f };
				vLocal_115 = { 1134.81f, -982.36f, (46.6f - 0.2f) };
				iLocal_110 = func_52(0);
				vLocal_112 = { 1130.155f, -979.2816f, 45.4158f };
				fLocal_113 = 269.2587f;
				iLocal_134 = 3;
				if (func_392(10, 22))
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 2;
					iLocal_316[1] = 2;
					iLocal_317[1] = 0;
					iLocal_316[2] = 0;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 1;
					iLocal_317[0] = 0;
					iLocal_316[1] = 0;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				break;
			
			case 14:
				vLocal_116 = { 0f, 0f, -41f };
				vLocal_115 = { -1486.67f, -378.46f, (40.35f - 0.2f) };
				iLocal_110 = func_52(0);
				vLocal_112 = { -1479.163f, -375.0302f, 38.1633f };
				fLocal_113 = 36.5415f;
				iLocal_134 = 3;
				if (func_392(10, 22))
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 0;
					iLocal_316[1] = 2;
					iLocal_317[1] = 1;
					iLocal_316[2] = 0;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 0;
					iLocal_316[1] = 1;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				break;
			
			case 15:
				vLocal_116 = { 0f, 0f, 145f };
				vLocal_115 = { (1698.33f - 0.04f), 4923.33f, (42.12f - 0.06f) };
				iLocal_110 = func_52(0);
				vLocal_112 = { 1707.303f, 4918.31f, 41.0636f };
				fLocal_113 = 24.9178f;
				iLocal_134 = 2;
				if (func_392(8, 20))
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 1;
					iLocal_316[1] = 0;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 1;
					iLocal_316[1] = 1;
					iLocal_317[1] = 1;
					iLocal_316[2] = 0;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				break;
			
			case 16:
				vLocal_116 = { 0f, 0f, -87f };
				vLocal_115 = { -706.69f, -913.69f, (19.27f - 0.06f) };
				iLocal_110 = func_52(0);
				vLocal_112 = { -709.7998f, -907.1352f, 18.2156f };
				fLocal_113 = 291.6504f;
				iLocal_134 = 2;
				if (func_392(8, 20))
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 2;
					iLocal_316[1] = 1;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 2;
					iLocal_316[1] = 2;
					iLocal_317[1] = 0;
					iLocal_316[2] = 0;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				break;
			
			case 17:
				vLocal_116 = { 0f, 0f, -125f };
				vLocal_115 = { -47.23f, -1757.64f, (29.48f - 0.06f) };
				iLocal_110 = func_52(0);
				vLocal_112 = { -40.42f, -1751.423f, 28.421f };
				fLocal_113 = 145.6553f;
				iLocal_134 = 2;
				if (func_392(8, 20))
				{
					iLocal_316[0] = 1;
					iLocal_317[0] = 0;
					iLocal_316[1] = 1;
					iLocal_317[1] = 1;
					iLocal_316[2] = 1;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 0;
					iLocal_316[1] = 2;
					iLocal_317[1] = 0;
					iLocal_316[2] = 0;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				break;
			
			case 18:
				vLocal_116 = { 0f, 0f, -74f };
				vLocal_115 = { 1164.16f, -322.9f, (69.26f - 0.06f) };
				iLocal_110 = func_52(0);
				vLocal_112 = { 1159.682f, -314.254f, 68.2051f };
				fLocal_113 = 232.6337f;
				iLocal_134 = 2;
				if (func_392(8, 20))
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 0;
					iLocal_316[1] = 2;
					iLocal_317[1] = 1;
					iLocal_316[2] = 0;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 1;
					iLocal_316[1] = 2;
					iLocal_317[1] = 0;
					iLocal_316[2] = 0;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				break;
			
			case 19:
				vLocal_115 = { -1820.5f, 793.78f, (138.32f - 0.22f) };
				vLocal_116 = { 0f, 0f, -47.3f };
				iLocal_110 = func_52(0);
				vLocal_112 = { -1828.907f, 799.6096f, 137.1776f };
				fLocal_113 = 247.1234f;
				iLocal_134 = 2;
				if (func_392(8, 20))
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 1;
					iLocal_316[1] = 0;
					iLocal_317[1] = 0;
					iLocal_316[2] = 0;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 2;
					iLocal_316[1] = 2;
					iLocal_317[1] = 1;
					iLocal_316[2] = 0;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				break;
		}
		vLocal_115 = { unk_0xCD1EDCB38767B47C(vLocal_115, vLocal_116.z, 0f, 0.075f, 0f) };
		vLocal_111 = { unk_0xF666CBF66A90975A("mp_am_hold_up", "holdup_victim_20s", vLocal_115, vLocal_116, 0, 2) };
		vVar0 = { unk_0xFC7404297ED3CF49("mp_am_hold_up", "holdup_victim_20s", vLocal_115, vLocal_116, 0f, 2) };
		Local_103.f_42 = vVar0.z;
		vLocal_127 = { unk_0xF666CBF66A90975A("mp_am_hold_up", "holdup_victim_20s_bag", vLocal_115, vLocal_116, 0, 2) };
		vVar0 = { unk_0xFC7404297ED3CF49("mp_am_hold_up", "holdup_victim_20s_bag", vLocal_115, vLocal_116, 0f, 2) };
		fLocal_128 = vVar0.z;
		vLocal_129 = { unk_0xF666CBF66A90975A("mp_am_hold_up", "holdup_victim_20s_till", vLocal_115, vLocal_116, 0, 2) };
		vVar0 = { unk_0xFC7404297ED3CF49("mp_am_hold_up", "holdup_victim_20s_till", vLocal_115, vLocal_116, 0f, 2) };
		fLocal_130 = vVar0.z;
		Local_105 = func_391(Local_105.f_50);
		if (unk_0x06C1EBC003C18F1F())
		{
			Local_103.f_45 = iLocal_316[0];
			if (Local_103.f_45 == 0)
			{
				StringCopy(&(Local_103.f_50), "MP_M_SHOPKEEP_01_PAKISTANI_MINI_01", 64);
				StringCopy(&(Local_103.f_46), "StoreOwner2", 16);
			}
			else if (Local_103.f_45 == 1)
			{
				StringCopy(&(Local_103.f_50), "MP_M_SHOPKEEP_01_LATINO_MINI_01", 64);
				StringCopy(&(Local_103.f_46), "StoreOwner", 16);
			}
			else
			{
				StringCopy(&(Local_103.f_50), "MP_M_SHOPKEEP_01_CHINESE_MINI_01", 64);
				StringCopy(&(Local_103.f_46), "StoreOwner3", 16);
			}
		}
		if (!unk_0x0E4018692D92041D(Local_105.f_52, 29))
		{
			unk_0x17D569F7C0516CDF(vLocal_115, 0.5f, iLocal_131, 1);
			unk_0x8950ED5730F62EE8(&(Local_105.f_52), 29);
		}
		return 1;
	}
	return 0;
}

int func_391(int iParam0)
{
	switch (iParam0)
	{
		case 16:
			return 0;
		
		case 17:
			return 1;
		
		case 18:
			return 2;
		
		case 15:
			return 3;
		
		case 19:
			return 4;
		
		case 10:
			return 5;
		
		case 11:
			return 6;
		
		case 12:
			return 7;
		
		case 13:
			return 8;
		
		case 14:
			return 9;
		
		case 2:
			return 10;
		
		case 1:
			return 11;
		
		case 3:
			return 12;
		
		case 4:
			return 13;
		
		case 5:
			return 14;
		
		case 6:
			return 15;
		
		case 7:
			return 16;
		
		case 8:
			return 17;
		
		case 9:
			return 18;
		
		case 0:
			return -2;
		
		default:
	}
	return -1;
}

bool func_392(int iParam0, int iParam1)
{
	return func_393(unk_0x13348E86D5B8A052(), iParam0, iParam1);
}

int func_393(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return 0;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return 0;
	}
	if (iParam1 == iParam2)
	{
		return 1;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	if (!bVar0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	return 0;
}

void func_394(int iParam0, var uParam1, var uParam2, var uParam3)
{
	if (iParam0 == 0)
	{
		*uParam1 = { 1393.091f, 3607.383f, 33.9809f };
		*uParam2 = { 1391.178f, 3612.516f, (38.3614f - 0.2f) };
		*uParam3 = 12.5f;
	}
	else if (iParam0 == 1)
	{
		*uParam1 = { -3045.013f, 585.9666f, (10.35421f - 0.2f) };
		*uParam2 = { -3048.714f, 584.7961f, 6.948262f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 2)
	{
		*uParam1 = { -3247.313f, 1003.657f, (15.27433f - 0.2f) };
		*uParam2 = { -3251.157f, 1003.984f, 11.83501f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 3)
	{
		*uParam1 = { 546.5474f, 2665.642f, (44.60108f - 0.2f) };
		*uParam2 = { 547.054f, 2661.794f, 41.15667f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 4)
	{
		*uParam1 = { 2552f, 384.2527f, (111.0656f - 0.2f) };
		*uParam2 = { 2548.145f, 384.4133f, 107.6241f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 5)
	{
		*uParam1 = { 2674.946f, 3284.833f, (57.68088f - 0.2f) };
		*uParam2 = { 2671.569f, 3286.699f, 54.24464f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 6)
	{
		*uParam1 = { 1733.119f, 6418.579f, (37.48002f - 0.2f) };
		*uParam2 = { 1734.839f, 6422.032f, 34.03751f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 7)
	{
		*uParam1 = { 1960.224f, 3746.258f, (34.7878f - 0.2f) };
		*uParam2 = { 1958.295f, 3749.599f, 31.34522f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 8)
	{
		*uParam1 = { 27.71382f, -1341.968f, (31.93314f - 0.2f) };
		*uParam2 = { 27.71049f, -1338.109f, 28.49479f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 9)
	{
		*uParam1 = { 377.0183f, 330.808f, (106.0112f - 0.2f) };
		*uParam2 = { 377.9499f, 334.5523f, 102.567f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 10)
	{
		*uParam1 = { 1167.015f, 2711.601f, (40.66147f - 0.2f) };
		*uParam2 = { 1167.082f, 2720.243f, 36.06501f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 11)
	{
		*uParam1 = { -2965.705f, 389.6696f, (17.64162f - 0.2f) };
		*uParam2 = { -2957.095f, 389.139f, 13.04323f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 12)
	{
		*uParam1 = { -1222.402f, -909.5575f, (14.92466f - 0.2f) };
		*uParam2 = { -1217.682f, -916.7974f, 10.33735f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 13)
	{
		*uParam1 = { 1133.284f, -981.473f, (49.01414f - 0.2f) };
		*uParam2 = { 1124.708f, -982.6027f, 44.42008f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 14)
	{
		*uParam1 = { -1484.883f, -378.2694f, (42.76172f - 0.2f) };
		*uParam2 = { -1478.771f, -372.1664f, 38.16948f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 15)
	{
		*uParam1 = { 1704.556f, 4921.806f, (44.02687f - 0.2f) };
		*uParam2 = { 1708.285f, 4919.196f, 41.06359f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 16)
	{
		*uParam1 = { -709.019f, -907.7159f, (21.17918f - 0.2f) };
		*uParam2 = { -709.0177f, -903.1516f, 18.21618f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 17)
	{
		*uParam1 = { -45.16617f, -1751.578f, (31.37973f - 0.2f) };
		*uParam2 = { -42.22961f, -1748.09f, 28.42099f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 18)
	{
		*uParam1 = { 1160.825f, -317.4214f, (71.16085f - 0.2f) };
		*uParam2 = { 1160.033f, -312.932f, 68.20509f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 19)
	{
		*uParam1 = { -1826.218f, 796.6393f, (140.1334f - 0.2f) };
		*uParam2 = { -1829.301f, 799.9996f, 137.18f };
		*uParam3 = 4f;
	}
}

void func_395(int iParam0, var uParam1, var uParam2, var uParam3)
{
	if (iParam0 == 0)
	{
		*uParam1 = { 1395.548f, 3600.575f, 33.98914f };
		*uParam2 = { 1392.08f, 3609.983f, (37.33543f - 0.2f) };
		*uParam3 = 12.25f;
	}
	if (iParam0 == 1)
	{
		*uParam1 = { -3038.657f, 589.5176f, 6.904751f };
		*uParam2 = { -3045.476f, 587.4066f, (11.31222f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 2)
	{
		*uParam1 = { -3240.032f, 1004.482f, 11.8307f };
		*uParam2 = { -3247.188f, 1005.107f, (16.25224f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 3)
	{
		*uParam1 = { 544.2278f, 2672.5f, 41.1565f };
		*uParam2 = { 545.201f, 2665.442f, (45.69155f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 4)
	{
		*uParam1 = { 2559.176f, 385.3936f, 107.623f };
		*uParam2 = { 2552.054f, 385.6057f, (112.1638f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 5)
	{
		*uParam1 = { 2681.864f, 3282.603f, 54.24114f };
		*uParam2 = { 2675.586f, 3285.981f, (58.79021f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 6)
	{
		*uParam1 = { 1731.237f, 6411.557f, 34.03723f };
		*uParam2 = { 1734.383f, 6417.952f, (38.58461f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 7)
	{
		*uParam1 = { 1964.999f, 3740.795f, 31.34375f };
		*uParam2 = { 1961.384f, 3746.928f, (35.89571f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 8)
	{
		*uParam1 = { Vector(28.49392f, -1348.507f, 27.03358f) + Vector(0f, -0.4f, 2f) };
		*uParam2 = { Vector(33.03834f, -1341.382f, 27.05614f) - Vector(0.2f, 0.2f, 0.2f) + Vector(0f, -0.4f, 2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 9)
	{
		*uParam1 = { 376.6309f, 323.5533f, 102.5664f };
		*uParam2 = { 378.3253f, 330.4793f, (107.1095f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 10)
	{
		*uParam1 = { 1166.497f, 2703.756f, 37.06307f };
		*uParam2 = { 1166.525f, 2711.974f, (41.66307f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 11)
	{
		*uParam1 = { -2973.512f, 390.7873f, 14.04322f };
		*uParam2 = { -2965.288f, 390.2452f, (18.54322f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 12)
	{
		*uParam1 = { -1226.417f, -902.6738f, 11.33496f };
		*uParam2 = { -1221.765f, -909.5887f, (15.82626f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 13)
	{
		*uParam1 = { 1141.35f, -980.9322f, 45.41594f };
		*uParam2 = { 1132.976f, -982.0952f, (49.91574f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 14)
	{
		*uParam1 = { -1490.949f, -383.4771f, 39.16332f };
		*uParam2 = { -1485.006f, -377.6167f, (43.66332f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 15)
	{
		*uParam1 = { 1698.98f, 4929.093f, 41.06357f };
		*uParam2 = { 1705.233f, 4924.578f, (45.60386f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 16)
	{
		*uParam1 = { -711.77f, -916.4685f, 18.21557f };
		*uParam2 = { -711.7368f, -908.7517f, (22.76488f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 17)
	{
		*uParam1 = { -52.90452f, -1756.474f, 28.42097f };
		*uParam2 = { -47.92523f, -1750.614f, (32.94246f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 18)
	{
		*uParam1 = { 1159.633f, -326.5087f, 68.20507f };
		*uParam2 = { 1158.335f, -318.9123f, (72.74828f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 19)
	{
		*uParam1 = { -1822.373f, 788.2851f, 137.1876f };
		*uParam2 = { -1827.484f, 794.0739f, (141.6933f - 0.2f) };
		*uParam3 = 14f;
	}
}

void func_396(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_397(iParam0, uParam5, uParam6);
	switch (iParam0)
	{
		case 0:
			if (*iParam1 == 0)
			{
				*iParam1 = unk_0x30B9FCF52BAAEB11(*uParam5, "v_methlab");
			}
			*uParam2 = -1621784842;
			*uParam4 = -924210258;
			*uParam3 = -1;
			break;
		
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			if (*iParam1 == 0)
			{
				*iParam1 = unk_0x30B9FCF52BAAEB11(*uParam5, "v_shop_247");
			}
			*uParam2 = 1569794095;
			*uParam4 = 462608346;
			*uParam3 = -1;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			if (*iParam1 == 0)
			{
				*iParam1 = unk_0x30B9FCF52BAAEB11(*uParam5, "v_gen_liquor");
			}
			*uParam2 = -278510267;
			*uParam4 = -1293435817;
			*uParam3 = -1;
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			if (*iParam1 == 0)
			{
				*iParam1 = unk_0x30B9FCF52BAAEB11(*uParam5, "v_gasstation");
			}
			*uParam2 = -1659520475;
			*uParam4 = -1272390353;
			*uParam3 = -835664728;
			break;
	}
}

void func_397(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1394.169f, 3599.86f, 34.0121f };
			*uParam2 = { 1395.548f, 3600.575f, 33.98914f };
			break;
		
		case 1:
			*uParam1 = { -3038.908f, 589.5187f, 6.9048f };
			*uParam2 = { -3038.657f, 589.5176f, 6.904751f };
			break;
		
		case 2:
			*uParam1 = { -3240.317f, 1004.433f, 11.8307f };
			*uParam2 = { -3240.032f, 1004.482f, 11.8307f };
			break;
		
		case 3:
			*uParam1 = { 544.2802f, 2672.811f, 41.1566f };
			*uParam2 = { 544.2278f, 2672.5f, 41.1565f };
			break;
		
		case 4:
			*uParam1 = { 2559.247f, 385.5266f, 107.623f };
			*uParam2 = { 2559.176f, 385.3936f, 107.623f };
			break;
		
		case 5:
			*uParam1 = { 2682.003f, 3282.543f, 54.2411f };
			*uParam2 = { 2681.864f, 3282.603f, 54.24114f };
			break;
		
		case 6:
			*uParam1 = { 1731.21f, 6411.403f, 34.0372f };
			*uParam2 = { 1731.237f, 6411.557f, 34.03723f };
			break;
		
		case 7:
			*uParam1 = { 1965.054f, 3740.555f, 31.3448f };
			*uParam2 = { 1964.999f, 3740.795f, 31.34375f };
			break;
		
		case 8:
			*uParam1 = { Vector(28.5036f, -1348.813f, 27.0641f) + Vector(0f, -0.4f, 2f) };
			*uParam2 = { Vector(28.49392f, -1348.507f, 27.03358f) + Vector(0f, -0.4f, 2f) };
			break;
		
		case 9:
			*uParam1 = { 376.6533f, 323.6471f, 102.5664f };
			*uParam2 = { 376.6309f, 323.5533f, 102.5664f };
			break;
		
		case 10:
			*uParam1 = { Vector(37.1573f, 2703.114f, 1195.432f) + Vector(0f, 0.39f, -29.04f) };
			*uParam2 = { 1166.497f, 2703.756f, 37.06307f };
			break;
		
		case 11:
			*uParam1 = { -2973.262f, 390.8184f, 14.0433f };
			*uParam2 = { -2973.512f, 390.7873f, 14.04322f };
			break;
		
		case 12:
			*uParam1 = { -1226.464f, -902.5864f, 11.2783f };
			*uParam2 = { -1226.417f, -902.6738f, 11.33496f };
			break;
		
		case 13:
			*uParam1 = { 1141.36f, -980.8802f, 45.4155f };
			*uParam2 = { 1141.35f, -980.9322f, 45.41594f };
			break;
		
		case 14:
			*uParam1 = { -1491.057f, -383.5728f, 39.1706f };
			*uParam2 = { -1490.949f, -383.4771f, 39.16332f };
			break;
		
		case 15:
			*uParam1 = { 1698.808f, 4929.198f, 41.0783f };
			*uParam2 = { 1698.98f, 4929.093f, 41.06357f };
			break;
		
		case 16:
			*uParam1 = { -711.721f, -916.6965f, 18.2145f };
			*uParam2 = { -711.77f, -916.4685f, 18.21557f };
			break;
		
		case 17:
			*uParam1 = { -53.124f, -1756.405f, 28.421f };
			*uParam2 = { -52.90452f, -1756.474f, 28.42097f };
			break;
		
		case 18:
			*uParam1 = { 1159.542f, -326.6986f, 67.923f };
			*uParam2 = { 1159.633f, -326.5087f, 68.20507f };
			break;
		
		case 19:
			*uParam1 = { -1822.287f, 788.006f, 137.1859f };
			*uParam2 = { -1822.373f, 788.2851f, 137.1876f };
			break;
	}
}

int func_398(var uParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar1 = 9999.9f;
	iVar2 = 0;
	while (iVar2 < 20)
	{
		fVar0 = unk_0x16E00F066AFFEA0D(func_87(unk_0x95B959F18401C09A()), func_399(iVar2), 1);
		if (fVar0 < fVar1)
		{
			if (bParam1)
			{
				if (!unk_0x0E4018692D92041D(Global_2423876.f_62, iVar2) && unk_0x0E4018692D92041D(Global_2423876.f_64, iVar2))
				{
					fVar1 = fVar0;
					*uParam0 = iVar2;
				}
			}
			else
			{
				fVar1 = fVar0;
				*uParam0 = iVar2;
			}
		}
		iVar2++;
	}
	return 1;
}

Vector3 func_399(int iParam0)
{
	vector3 vVar0;
	var uVar1;
	
	func_397(iParam0, &vVar0, &uVar1);
	return vVar0;
}

int func_400(int iParam0)
{
	return Local_104[iParam0 /*10*/].f_4;
}

void func_401()
{
	Global_2448756.f_672.f_28 = 0;
}

void func_402()
{
	if (Global_1312417.f_1 == 1)
	{
		func_403(7, 0, 1);
		Global_1312417.f_1 = 0;
		Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_9 = 0;
	}
}

void func_403(int iParam0, int iParam1, bool bParam2)
{
	if (func_373())
	{
		if (iParam1 == 1)
		{
			if (Global_2528542.f_4386 == -1)
			{
				Global_2528542.f_4386 = Global_262145.f_26155;
			}
			func_404(&(Global_2528542.f_4384), 0, 0);
			if (bParam2)
			{
				if (Global_2528542.f_4389 == -1)
				{
					Global_2528542.f_4389 = Global_262145.f_26156;
				}
				func_404(&(Global_2528542.f_4387), 0, 0);
			}
			else
			{
				Global_1312417 = 0;
				Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_8 = 0;
				func_372(1);
			}
		}
		else
		{
			Global_1312417 = 0;
			Global_1626536[unk_0x95B959F18401C09A() /*603*/].f_8 = 0;
			func_372(1);
		}
		if ((!unk_0x289064CB38B560AA() && !func_371()) && !func_370(unk_0x95B959F18401C09A()))
		{
			Global_968392 = 0;
		}
		unk_0x35EEC6C2BC821A71(0, -1, -1, iParam0);
	}
}

void func_404(var uParam0, bool bParam1, bool bParam2)
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

void func_405()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	if (!func_46(unk_0x95B959F18401C09A(), 1, 1))
	{
		iVar0 = 1;
		if (unk_0x0E4018692D92041D(Local_105.f_53, 6) && !unk_0x0E4018692D92041D(Local_105.f_53, 5))
		{
			iVar1 = unk_0xF69DA3FD5AA96104(-1);
			iVar2 = 0;
			unk_0x8950ED5730F62EE8(&iVar2, 8);
			unk_0x8950ED5730F62EE8(&iVar2, 4);
			unk_0x8950ED5730F62EE8(&iVar2, 1);
			if (iLocal_335 > Global_262145.f_166)
			{
				iLocal_335 = Global_262145.f_166;
			}
			if (iVar1 < iLocal_335)
			{
				if (iVar1 > 0)
				{
					if (func_51(func_52(1)))
					{
						if (unk_0x12485CA48AD6F92D(iVar1, 0, 0, 0, &uVar3, -1, 0))
						{
							if (func_213())
							{
								if (!unk_0x0E4018692D92041D(Global_2528542.f_7, 1))
								{
									Global_2528542.f_4714 = iVar1;
									Global_2528542.f_4715 = iVar2;
									Global_2528542.f_4716 = { unk_0xB06F4A08BF57E69A(unk_0x33CD235DF1E6A94E(), 1067030938, 1069547520) };
									func_203(&(Global_2528542.f_4713), -1135378931, 537254313, 1474183246, 1022400740, Global_2528542.f_4714, 1, 3);
									unk_0x8950ED5730F62EE8(&(Global_2528542.f_7), 1);
									iLocal_335 = 0;
									unk_0x8950ED5730F62EE8(&(Local_105.f_53), 5);
								}
							}
							else
							{
								unk_0x5A4D875D71EDECDE(joaat("pickup_money_variable"), unk_0xB06F4A08BF57E69A(unk_0x33CD235DF1E6A94E(), 1067030938, 1069547520), iVar2, iVar1, func_52(1), 0, 0);
								func_198(-iVar1, 1, 1, 1092616192);
								unk_0xA14965140EFF1DFD(iVar1, 0, 0);
								func_202(1022400740, iVar1, &uVar4, 0, 0, 0);
								iLocal_335 = 0;
								func_406();
								unk_0x8950ED5730F62EE8(&(Local_105.f_53), 5);
							}
						}
					}
					else
					{
						iVar0 = 0;
					}
				}
			}
			else if (iLocal_335 > 0)
			{
				if (func_51(func_52(1)))
				{
					if (unk_0x12485CA48AD6F92D(iLocal_335, 0, 0, 0, &uVar3, -1, 0))
					{
						if (func_213())
						{
							if (!unk_0x0E4018692D92041D(Global_2528542.f_7, 1))
							{
								Global_2528542.f_4714 = iLocal_335;
								Global_2528542.f_4715 = iVar2;
								Global_2528542.f_4716 = { unk_0xB06F4A08BF57E69A(unk_0x33CD235DF1E6A94E(), 1067030938, 1069547520) };
								func_203(&(Global_2528542.f_4713), -1135378931, 537254313, 1474183246, 1022400740, Global_2528542.f_4714, 1, 3);
								unk_0x8950ED5730F62EE8(&(Global_2528542.f_7), 1);
								iLocal_335 = 0;
								unk_0x8950ED5730F62EE8(&(Local_105.f_53), 5);
							}
						}
						else
						{
							unk_0x5A4D875D71EDECDE(joaat("pickup_money_variable"), unk_0xB06F4A08BF57E69A(unk_0x33CD235DF1E6A94E(), 1067030938, 1069547520), iVar2, iLocal_335, func_52(1), 0, 0);
							func_198(-iLocal_335, 1, 1, 1092616192);
							unk_0xA14965140EFF1DFD(iLocal_335, 0, 0);
							func_202(1022400740, iLocal_335, &uVar5, 0, 0, 0);
							iLocal_335 = 0;
							func_406();
							unk_0x8950ED5730F62EE8(&(Local_105.f_53), 5);
						}
					}
				}
				else
				{
					iVar0 = 0;
				}
			}
		}
		if (iVar0 == 1)
		{
			func_429();
		}
		else
		{
			return;
		}
	}
}

void func_406()
{
	Global_2528542.f_274 = 0;
	Global_2528542.f_275 = 0;
	Global_2528542.f_276 = 0;
}

int func_407()
{
	var uVar0;
	
	func_415(&uVar0);
	if (Global_1312844 == 0)
	{
		if (!unk_0xB331FCEB94EB05C8())
		{
			return 1;
		}
	}
	if (func_414())
	{
		return 1;
	}
	if (Global_2460852)
	{
		return 1;
	}
	if (func_413())
	{
		return 1;
	}
	if (func_412(157))
	{
		if (!func_411())
		{
			return 1;
		}
	}
	if (func_412(155))
	{
		return 1;
	}
	if (!unk_0x43E505744A9B715D())
	{
		return 1;
	}
	if (func_408() != 0)
	{
		if (unk_0x1BCDA92AD0A7835B(func_408()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_408()
{
	switch (func_410())
	{
		case 0:
			return func_409();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_409()
{
	switch (Global_2460954)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_410()
{
	return Global_25765;
}

bool func_411()
{
	return Global_2448756.f_586;
}

int func_412(int iParam0)
{
	if (unk_0x3AE20F34FEE6C258(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_413()
{
	return Global_2458613;
}

bool func_414()
{
	return Global_2448756.f_581;
}

void func_415(var uParam0)
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
					func_416(iVar0);
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

void func_416(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x286A5F0670063839(1, iParam0, &vVar0, 3))
	{
		if (func_46(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x378BD4B3881338C2(vVar0.y);
			if (unk_0x765F6FEEFF39224F(iVar1))
			{
				if (unk_0xF0D230FB550CD6EB(iVar1, 0))
				{
					iVar2 = unk_0xF2C96862595654B4(iVar1, 0);
					if (unk_0x8F6C3DD0BB146CA3(iVar2, vVar0.z) && unk_0xE36862B47CD70685())
					{
						if (func_417(iVar2, &bVar3))
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

int func_417(int iParam0, var uParam1)
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

void func_418()
{
	wait(0);
}

void func_419(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	int iVar25;
	int iVar26;
	
	if (bParam1)
	{
		if (unk_0xC78552DAEE19D97B())
		{
			unk_0x05CFB4D665C2A88D(false);
		}
	}
	if (func_427())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!unk_0xB331FCEB94EB05C8())
	{
		iVar0 = iParam2;
		unk_0x3449EA232F9B8EAD(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = iParam2 & 2 != false;
		bVar2 = iParam2 & 4 != false;
		bVar3 = iParam2 & 8 != false;
		bVar4 = iParam2 & 16 != false;
		bVar5 = iParam2 & 32 != false;
		bVar6 = iParam2 & 64 != false;
		bVar7 = iParam2 & 128 != false;
		bVar8 = iParam2 & 256 != false;
		bVar9 = iParam2 & 512 != false;
		bVar10 = iParam2 & 1024 != false;
		bVar11 = iParam2 & 2048 != false;
		bVar12 = iParam2 & 4096 != false;
		bVar13 = iParam2 & 8192 != false;
		bVar14 = iParam2 & 16384 != false;
		bVar15 = iParam2 & 32768 != false;
		bVar16 = iParam2 & 65536 != false;
		bVar17 = iParam2 & 131072 != false;
		bVar18 = iParam2 & 262144 != false;
		bVar19 = iParam2 & 524288 != false;
		bVar20 = iParam2 & 1048576 != false;
		bVar21 = iParam2 & 2097152 != false;
		bVar22 = iParam2 & 4194304 != false;
		bVar23 = iParam2 & 8388608 != false;
		if (!func_425())
		{
			bVar24 = false;
			if (bParam1 == 1)
			{
				bVar24 = true;
			}
			if (bVar15 == 0 && !bVar20)
			{
				bVar24 = true;
			}
			if (bVar9 == 1)
			{
				bVar24 = true;
			}
			if (bVar24)
			{
				return;
			}
		}
		if (bVar17)
		{
		}
		if (unk_0xC4DEA49C5B465481(iParam0) && (unk_0xF272A2699B521CE6(iParam0) || iParam3 == 1))
		{
			if (iParam3 && unk_0xD62C4419A41F106A(unk_0x378BD4B3881338C2(iParam0), 0))
			{
				return;
			}
			iVar25 = unk_0x378BD4B3881338C2(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0xB331FCEB94EB05C8())
				{
					unk_0x7FB656A6AFE2A7A8(1);
				}
				else if (bVar13 || (!func_325(unk_0x95B959F18401C09A(), 0) && !func_424()))
				{
					unk_0x0CDD28A9DFCE2FCE(iVar25, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (unk_0xB331FCEB94EB05C8() && !bVar18)
					{
						unk_0x7FB656A6AFE2A7A8(0);
					}
					Global_2424047[iParam0 /*416*/].f_244 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_423(iVar25) && !unk_0x67E42C11097164BA(iVar25))
				{
					if (!bVar21)
					{
						unk_0x23298AB8A7D0F403(iVar25, true, 0);
					}
				}
				if (!unk_0x9F4718FD61B07058(iVar25))
				{
					if (!bVar20)
					{
						unk_0xF70578F5CD9822CB(iVar25, false);
					}
					unk_0xFE8201EFB515D77B(iVar25, 1);
				}
				else if (!bVar20)
				{
					unk_0xF70578F5CD9822CB(iVar25, false);
				}
				unk_0xF0BE7CB40DE62A2F(iVar25, true);
				unk_0xF23201C524E43F1C(iParam0, 0);
				unk_0x1B9C92466C9CAC2A(iParam0, 0);
				if (unk_0x055C6611FF8B993C(iVar25) && unk_0x7B3767E83E6F888A(iVar25))
				{
					unk_0x1130EB06CDE2ECD0(iVar25);
				}
				unk_0xC2A270E9C5578803(iVar25, 1);
				if (unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A()) == 0)
				{
					func_422();
					func_421();
				}
				if (unk_0x5D1B43675B257F3A())
				{
					if (!bVar22)
					{
					}
				}
				if (unk_0xE980BAFD70E8A4B3())
				{
				}
				Global_2424047[iParam0 /*416*/].f_245 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
				if (Global_2405071.f_2668)
				{
					Global_2405071.f_2668 = 0;
				}
			}
			else
			{
				if (!func_423(iVar25) && !unk_0x67E42C11097164BA(iVar25))
				{
					if (!bVar21)
					{
						unk_0x23298AB8A7D0F403(iVar25, !bVar14, 0);
					}
					if (!unk_0x9F4718FD61B07058(iVar25))
					{
						if (!bVar20)
						{
							unk_0xF70578F5CD9822CB(iVar25, bVar15);
						}
						if (!bVar15)
						{
							unk_0xFE8201EFB515D77B(iVar25, 1);
						}
					}
					if (func_420(Global_4456448.f_161209))
					{
						unk_0xF70578F5CD9822CB(iVar25, true);
					}
				}
				if (Global_1312844)
				{
					bVar9 = false;
				}
				if (bVar9)
				{
					unk_0xF23201C524E43F1C(iParam0, 0);
				}
				else
				{
					unk_0xF23201C524E43F1C(iParam0, 1);
				}
				unk_0xF0BE7CB40DE62A2F(iVar25, bVar16);
				if (bVar2)
				{
					if (!unk_0x691E8EF7DCB53AAD(iVar25) && !unk_0xF0D230FB550CD6EB(iVar25, 0))
					{
						unk_0x31826EF4A8BC8E9F(iVar25);
					}
				}
			}
			iVar26 = 0;
			if (bVar1)
			{
				iVar26 |= 2;
			}
			if (bVar2)
			{
				iVar26 |= 4;
			}
			if (bVar3)
			{
				iVar26 |= 8;
			}
			if (bVar4)
			{
				iVar26 |= 16;
			}
			if (bVar5)
			{
				iVar26 |= 32;
			}
			if (bVar6)
			{
				iVar26 |= 64;
			}
			if (bVar7)
			{
				iVar26 |= 128;
			}
			if (bVar8)
			{
				iVar26 |= 256;
			}
			if (bVar9)
			{
				iVar26 |= 512;
			}
			if (bVar10)
			{
				iVar26 |= 1024;
			}
			if (bVar11)
			{
				iVar26 |= 2048;
			}
			if (bVar12)
			{
				iVar26 |= 4096;
			}
			unk_0x3449EA232F9B8EAD(iParam0, bParam1, iVar26);
		}
	}
}

bool func_420(int iParam0)
{
	return iParam0 == 17;
}

void func_421()
{
	vector3 vVar0;
	
	Global_2437364.f_1232 = 0;
	Global_2437364.f_1233 = 0;
	Global_2437364.f_1234 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2437364.f_1239 = -1;
	Global_2437364.f_1240 = 0;
	Global_2405071.f_2679 = { vVar0 };
}

void func_422()
{
	Global_2405071.f_692 = 0;
	Global_2405071.f_2722 = 0;
	Global_2405071.f_510 = 0;
	Global_2405071.f_598 = 0;
	Global_2424047[unk_0x95B959F18401C09A() /*416*/].f_207 = 0;
	Global_2405071.f_2677 = 0;
}

int func_423(int iParam0)
{
	int iVar0;
	
	if (unk_0xF0D230FB550CD6EB(iParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0xD76D6BCC14B95CE1(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_424()
{
	return unk_0x0E4018692D92041D(Global_2359302, 3);
}

int func_425()
{
	if (func_426() == 0)
	{
		return 1;
	}
	return 0;
}

int func_426()
{
	return Global_1312467.f_18;
}

int func_427()
{
	if (Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_35 && !Global_2449538.f_2846.f_214 == -1)
	{
		return 1;
	}
	return 0;
}

bool func_428(bool bParam0)
{
	if (bParam0)
	{
		return (Global_2448756.f_672.f_28 && unk_0x36163153849DFDA1(unk_0xD178EF744F20B712()) == Global_2448756.f_672.f_31);
	}
	return Global_2448756.f_672.f_28;
}

void func_429()
{
	int iVar0;
	
	Global_2528542.f_8 = 0;
	if (unk_0xB331FCEB94EB05C8())
	{
		if (!func_387(Local_103))
		{
			if (unk_0x6F3D61B58C7B4025(Local_103) || (!unk_0x5E2784BB00B20E8E(Local_103) && unk_0x06C1EBC003C18F1F()))
			{
				unk_0xBE470ACBEDCBF6FC(unk_0xBB28786B7F552D0B(Local_103), 0);
				unk_0x1400DA3CD323B316(unk_0xBB28786B7F552D0B(Local_103));
				if (unk_0x0E4018692D92041D(Local_105.f_52, 22))
				{
					if (unk_0x0E4018692D92041D(Local_105.f_52, 20))
					{
						if (Local_103.f_3 != 7)
						{
							if (!unk_0x0E4018692D92041D(Local_104[unk_0x72B85B341ADBE9DE() /*10*/], 9))
							{
								unk_0xED68CDDDE25A144E(unk_0xBB28786B7F552D0B(Local_103));
								unk_0x13A2D602CD10CBAC(unk_0xBB28786B7F552D0B(Local_103), uLocal_121);
								unk_0x4A852F02088ECC9D(unk_0xBB28786B7F552D0B(Local_103), 0);
							}
						}
						else if (unk_0xD76D6BCC14B95CE1(unk_0xBB28786B7F552D0B(Local_103), -1442466670) != 0 && unk_0xD76D6BCC14B95CE1(unk_0xBB28786B7F552D0B(Local_103), -1442466670) != 1)
						{
							unk_0xED68CDDDE25A144E(unk_0xBB28786B7F552D0B(Local_103));
							if (!unk_0xEAF6E82C7BDE5A4C(unk_0xBB28786B7F552D0B(Local_103), joaat("weapon_pistol"), 0))
							{
								unk_0xE18BDD1E31C07544(unk_0xBB28786B7F552D0B(Local_103), joaat("weapon_pistol"), 25000, 1);
								unk_0xDE9FF07CFD5DC172(unk_0xBB28786B7F552D0B(Local_103), 30);
							}
							func_227(4);
							unk_0x77631BBB824DF500(unk_0xBB28786B7F552D0B(Local_103), 20f, 0);
						}
					}
					else if ((unk_0x0E4018692D92041D(Local_103.f_23, 3) || !func_10()) || !func_433())
					{
						if (!unk_0x0E4018692D92041D(Local_104[unk_0x72B85B341ADBE9DE() /*10*/], 9))
						{
							unk_0xED68CDDDE25A144E(unk_0xBB28786B7F552D0B(Local_103));
							unk_0x13A2D602CD10CBAC(unk_0xBB28786B7F552D0B(Local_103), uLocal_121);
							unk_0x4A852F02088ECC9D(unk_0xBB28786B7F552D0B(Local_103), 0);
						}
					}
					else
					{
						unk_0xED68CDDDE25A144E(unk_0xBB28786B7F552D0B(Local_103));
						unk_0x897EF720254BBEA3(unk_0xBB28786B7F552D0B(Local_103), 1);
						unk_0x7D575FC8F42508D8(unk_0xBB28786B7F552D0B(Local_103), -1);
						unk_0x4A852F02088ECC9D(unk_0xBB28786B7F552D0B(Local_103), 0);
					}
				}
			}
		}
		if ((unk_0x0E4018692D92041D(Local_103.f_23, 3) || !func_10()) || unk_0x396A8511217F9C1A() <= 1)
		{
			if (unk_0x22C3124A898FB82A(Local_103.f_13))
			{
				if (unk_0x6F3D61B58C7B4025(Local_103.f_13))
				{
					unk_0x35F11A916FDFCF32(unk_0xE4B835FDC8B9B086(Local_103.f_13), 1, 1);
					func_47(&(Local_103.f_13));
				}
			}
		}
		if (((unk_0x0E4018692D92041D(Local_103.f_23, 3) || !func_10()) || unk_0x0E4018692D92041D(Local_105.f_52, 20)) || unk_0x396A8511217F9C1A() <= 1)
		{
			if (unk_0x22C3124A898FB82A(Local_103.f_14))
			{
				if (unk_0x6F3D61B58C7B4025(Local_103.f_14))
				{
					func_47(&(Local_103.f_14));
				}
			}
		}
		if (func_213() && unk_0x0E4018692D92041D(Global_2528542.f_7, 1))
		{
			if (func_282(Global_2528542.f_4713) == 1)
			{
				func_432(Global_2528542.f_4713, 4);
			}
			else
			{
				func_205(Global_2528542.f_4713);
			}
			unk_0xCE689A8E8C42ED78(&(Global_2528542.f_7), 1);
		}
		if (Local_103.f_12 == 6)
		{
			if (unk_0x22C3124A898FB82A(Local_103))
			{
				if (unk_0xA0EDFFB6CF5B314A(unk_0xBB28786B7F552D0B(Local_103), "XP_Blocker"))
				{
					unk_0x715473842579507F(unk_0xBB28786B7F552D0B(Local_103), "XP_Blocker");
				}
			}
		}
		if (unk_0x06C1EBC003C18F1F())
		{
			unk_0x6C6FE09E055D0855(Local_103.f_30);
		}
	}
	func_431();
	unk_0xFF2DEA68E2D3602E("mp_am_hold_up");
	unk_0x2EF5DD41310F2175();
	if (func_145("SHR_MENU"))
	{
		unk_0xEDF90B96BED57BCE(1);
	}
	Global_2528542.f_9 = func_179();
	unk_0x30F6F0B876E12AD8(func_389(Local_105));
	func_161(1, Local_105);
	if (Local_105.f_14 != -1)
	{
		func_256(&(Local_105.f_14));
	}
	Global_2528542.f_27 = Local_105;
	if (Global_2528542.f_5643.f_4 == 1)
	{
		Global_2528542.f_5643.f_4 = 0;
	}
	if (Global_2528542.f_5643.f_5 == 1)
	{
		Global_2528542.f_5643.f_5 = 0;
	}
	if (unk_0x0E4018692D92041D(Local_105.f_52, 29))
	{
		unk_0x1BFBC1E2615E22FC(vLocal_115, 0.5f, iLocal_131, 1);
	}
	if (unk_0x0E4018692D92041D(Local_105.f_53, 7))
	{
		func_402();
		unk_0xCE689A8E8C42ED78(&(Local_105.f_53), 7);
	}
	if (unk_0xB331FCEB94EB05C8())
	{
		if (unk_0x0E4018692D92041D(Local_103.f_23, 6) || unk_0x0E4018692D92041D(Local_103.f_23, 21))
		{
			if (unk_0x0E4018692D92041D(Local_103.f_23, 21))
			{
				iVar0 = 1;
			}
			unk_0x37EB897D6D75166F(30, iLocal_334, iLocal_335, iVar0);
		}
	}
	if (unk_0x117DAF3BF7232886(Local_105.f_1))
	{
		if (unk_0x49D25022440E65EE(Local_105.f_1))
		{
			unk_0x63F0B040CE6EDF0F(false, 0, 3000, 1, 0, 0);
		}
		unk_0x2F8A4DF7D0DFF0A8(Local_105.f_1, 0);
	}
	func_430();
}

void func_430()
{
	unk_0x5894DC159447E10A();
}

void func_431()
{
	unk_0xA7A57E7757ED035E(&uLocal_118);
	unk_0xA7A57E7757ED035E(&uLocal_119);
}

void func_432(int iParam0, int iParam1)
{
	if (func_268(iParam0) != -1)
	{
		if (Global_4263509[iParam0 /*84*/].f_65.f_2 == 1)
		{
			Global_4263509[iParam0 /*84*/].f_65.f_11 = iParam1;
		}
	}
}

int func_433()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < unk_0xF839A4FC3E76D324())
	{
		if (unk_0x1B094AC15936B3DB(unk_0xDD4FFAA17341D382(iVar0)))
		{
			iVar1 = unk_0xEB9DC13235C0B345(unk_0xDD4FFAA17341D382(iVar0));
			iVar2 = unk_0x378BD4B3881338C2(iVar1);
			if (func_46(iVar1, 1, 1))
			{
				if (unk_0x65F35477FEAD6F0F(iVar2) == iLocal_139)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_434(struct<21> Param0)
{
	int iVar0;
	
	func_440(func_441(Param0), Param0);
	unk_0x4F8CF72358604361(2);
	unk_0x12F5DDEAB00B8213(8);
	func_438(0, -1, 0);
	unk_0x7643BB59992A9E6E(&Local_103, 73);
	unk_0x568D314D73140729(&Local_104, 321);
	unk_0x9980AE643A60F372(0);
	if (!func_437())
	{
		return 0;
	}
	if (unk_0x06C1EBC003C18F1F())
	{
		func_51(func_52(0));
		func_51(func_52(1));
		func_51(func_52(2));
		unk_0x0483D0035D6E46FD("mp_am_hold_up");
		unk_0x0483D0035D6E46FD("mp_missheist_countrybank@cower");
		Local_103.f_44 = 8;
		if (func_436())
		{
			unk_0x8950ED5730F62EE8(&(Local_103.f_24), 11);
		}
		else if (func_435())
		{
			unk_0x8950ED5730F62EE8(&(Local_103.f_24), 12);
		}
		Local_103.f_28 = unk_0x9EC3B269A34A2BEE(1, 11);
		Local_103.f_31 = unk_0x9EC3B269A34A2BEE(1, 5);
		if ((func_13() && !func_380(unk_0x95B959F18401C09A(), 1)) && !func_380(unk_0x95B959F18401C09A(), 2))
		{
			Local_103.f_43 = 2;
			unk_0x8950ED5730F62EE8(&(Local_103.f_25), 0);
		}
		else
		{
			Local_103.f_43 = 1;
		}
		Local_103.f_71 = unk_0x9562E33C057F7589(18f, 28f);
	}
	if (func_95(unk_0x95B959F18401C09A()) != 155)
	{
		unk_0x403A4762426EF1E8(func_52(1), 0);
	}
	iVar0 = func_125(1190, -1, 0);
	if (unk_0x0E4018692D92041D(iVar0, 20) && unk_0x0E4018692D92041D(iVar0, 21))
	{
		unk_0x8950ED5730F62EE8(&(Local_105.f_53), 1);
	}
	Local_104[unk_0x72B85B341ADBE9DE() /*10*/].f_4 = 0;
	return 1;
}

int func_435()
{
	if (Local_105.f_50 >= 0 && Local_105.f_50 <= 9)
	{
		if (func_392(5, 6) || func_392(17, 18))
		{
			return 1;
		}
		return 0;
	}
	if (Local_105.f_50 >= 10 && Local_105.f_50 <= 14)
	{
		if (func_392(9, 10) || func_392(21, 22))
		{
			return 1;
		}
		return 0;
	}
	if (Local_105.f_50 >= 15 && Local_105.f_50 <= 19)
	{
		if (func_392(7, 8) || func_392(19, 20))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_436()
{
	if (Local_105.f_50 >= 0 && Local_105.f_50 <= 9)
	{
		if (func_392(6, 7) || func_392(18, 19))
		{
			return 1;
		}
		return 0;
	}
	if (Local_105.f_50 >= 10 && Local_105.f_50 <= 14)
	{
		if (func_392(10, 11) || func_392(22, 23))
		{
			return 1;
		}
		return 0;
	}
	if (Local_105.f_50 >= 15 && Local_105.f_50 <= 19)
	{
		if (func_392(8, 9) || func_392(20, 21))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_437()
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
		if (func_414())
		{
			return 0;
		}
		if (func_412(155))
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

int func_438(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x52119E312E15DB07();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_430();
			}
			else
			{
				return 0;
			}
		}
		if (!func_439())
		{
			if (iParam0 == 0)
			{
				if (!unk_0xB331FCEB94EB05C8())
				{
					if (!bParam2)
					{
						func_430();
					}
					else
					{
						return 0;
					}
				}
				if (func_414())
				{
					if (!bParam2)
					{
						func_430();
					}
					else
					{
						return 0;
					}
				}
				if (func_412(155))
				{
					if (!bParam2)
					{
						func_430();
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
					func_430();
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
				func_430();
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
			func_430();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_439()
{
	return Global_1312844;
}

void func_440(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0xB331FCEB94EB05C8())
	{
		func_430();
	}
	unk_0x210E46A190FB3CB3(iParam0, 0, Param1.f_16);
}

int func_441(int iParam0)
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

