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
	bool bLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	vector3 vLocal_53[12] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_54 = 0;
	bool bLocal_55 = 0;
	int iLocal_56 = 0;
	var uLocal_57 = 0;
	bool bLocal_58 = 0;
	int iLocal_59[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_60 = 0;
	bool bLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	struct<7> Local_70 = { 0, 0, 1097859072, 1500, 45, 1103626240, 5 } ;
	var uLocal_71 = 0;
	int iLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	int iLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 16;
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
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	vector3 vLocal_248 = { 0f, 0f, 0f };
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	struct<76> Local_252 = { 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
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
	int iLocal_263[3] = { 0, 0, 0 };
	int iLocal_264[3] = { 0, 0, 0 };
	int iLocal_265[3] = { 0, 0, 0 };
	float fLocal_266 = 0f;
	bool bLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	struct<13> Local_270[10];
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
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	bool bLocal_292 = 0;
	int iLocal_293 = 0;
	bool bLocal_294 = 0;
	int iLocal_295 = 0;
	var uLocal_296[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_297[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_298 = 0;
	int iLocal_299 = 0;
	var uLocal_300 = 0;
	int iLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	vector3 vLocal_305 = { 0f, 0f, 0f };
	int iLocal_306 = 0;
	struct<41> Local_307 = { 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 3, 0, 0, 0, 4 } ;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_266 = 0f;
	bLocal_267 = true;
	vLocal_305 = { 1683.682f, 2518.867f, 44.5651f };
	if (unk_0x9EC5BDC006623C42(3))
	{
		func_83(0);
	}
	iLocal_247 = unk_0x33CD235DF1E6A94E();
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		unk_0x5560135EA44157F4(unk_0x95B959F18401C09A());
	}
	while (true)
	{
		if (unk_0xD62C4419A41F106A(iLocal_247, 0))
		{
			func_83(0);
		}
		func_82();
		vLocal_248 = { unk_0xFBB1F99A825CAB09(iLocal_247, true) };
		switch (iLocal_246)
		{
			case 0:
				func_80();
				iLocal_246 = 1;
				break;
			
			case 1:
				if (!Global_25773)
				{
					func_79();
					func_78();
					func_77();
					func_75();
					iLocal_246 = 2;
				}
				break;
			
			case 2:
				if ((((func_74() && func_73()) && func_72()) && func_71()) && func_70())
				{
					iLocal_246 = 3;
				}
				break;
			
			case 3:
				func_64();
				wait(0);
				func_63();
				wait(0);
				func_60();
				func_59();
				iLocal_246 = 4;
				break;
			
			case 4:
				if (!Global_25773)
				{
					if (Global_90640)
					{
						func_83(0);
					}
					func_34();
					func_33();
					func_30();
					func_29();
					func_27();
					func_5();
					func_4();
				}
				else if (func_1(0))
				{
					func_83(1);
				}
				break;
		}
		wait(0);
	}
}

int func_1(bool bParam0)
{
	if (bParam0)
	{
		if (func_3())
		{
			return 1;
		}
	}
	if (func_2(14))
	{
		return 1;
	}
	return 0;
}

bool func_2(int iParam0)
{
	return Global_36425 == iParam0;
}

int func_3()
{
	if (Global_105510)
	{
		return 1;
	}
	if (!func_2(14) && unk_0x1BCDA92AD0A7835B(joaat("director_mode")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_4()
{
	int iVar0;
	bool bVar1;
	
	bVar1 = false;
	if (iLocal_51 == 1)
	{
		if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
		{
			if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), 1766.972f, 2409.596f, 43.55469f, 1826.647f, 2471.633f, 56.30863f, 12f, 0, true, 0))
			{
				if (!bLocal_55)
				{
					unk_0xE4F4DE6178AB3FC1("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0xE4F4DE6178AB3FC1("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_59[0] = 1;
				}
			}
			else
			{
				iLocal_59[0] = 0;
			}
		}
	}
	else if (iLocal_51 == 2)
	{
		if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
		{
			if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), 1662.31f, 2391.06f, 43.51377f, 1761.362f, 2405.143f, 56.65472f, 12f, 0, true, 0))
			{
				if (!bLocal_55)
				{
					unk_0xE4F4DE6178AB3FC1("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0xE4F4DE6178AB3FC1("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_59[1] = 1;
				}
			}
			else
			{
				iLocal_59[1] = 0;
			}
		}
	}
	else if (iLocal_51 == 3)
	{
		if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
		{
			if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), 1537.369f, 2465.132f, 43.5756f, 1655.663f, 2391.822f, 56.54404f, 12f, 0, true, 0))
			{
				if (!bLocal_55)
				{
					unk_0xE4F4DE6178AB3FC1("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0xE4F4DE6178AB3FC1("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_59[2] = 1;
				}
			}
			else
			{
				iLocal_59[2] = 0;
			}
		}
	}
	else if (iLocal_51 == 4)
	{
		if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
		{
			if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), 1529.153f, 2584.264f, 43.6168f, 1535.014f, 2469.253f, 56.5985f, 12f, 0, true, 0))
			{
				if (!bLocal_55)
				{
					unk_0xE4F4DE6178AB3FC1("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0xE4F4DE6178AB3FC1("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_59[3] = 1;
				}
			}
			else
			{
				iLocal_59[3] = 0;
			}
		}
	}
	else if (iLocal_51 == 5)
	{
		if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
		{
			if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), 1565.045f, 2681.205f, 43.50552f, 1529.915f, 2586.427f, 56.52686f, 12f, 0, true, 0))
			{
				if (!bLocal_55)
				{
					unk_0xE4F4DE6178AB3FC1("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0xE4F4DE6178AB3FC1("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_59[4] = 1;
				}
			}
			else
			{
				iLocal_59[4] = 0;
			}
		}
	}
	else if (iLocal_51 == 6)
	{
		if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
		{
			if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), 1645.169f, 2760.33f, 43.6705f, 1567.113f, 2682.905f, 56.39177f, 12f, 0, true, 0))
			{
				if (!bLocal_55)
				{
					unk_0xE4F4DE6178AB3FC1("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0xE4F4DE6178AB3FC1("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_59[5] = 1;
				}
			}
			else
			{
				iLocal_59[5] = 0;
			}
		}
	}
	else if (iLocal_51 == 7)
	{
		if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
		{
			if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), 1772.306f, 2766.364f, 43.59126f, 1650.228f, 2761.691f, 56.53028f, 12f, 0, true, 0))
			{
				if (!bLocal_55)
				{
					unk_0xE4F4DE6178AB3FC1("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0xE4F4DE6178AB3FC1("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_59[6] = 1;
				}
			}
			else
			{
				iLocal_59[6] = 0;
			}
		}
	}
	else if (iLocal_51 == 8)
	{
		if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
		{
			if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), 1831.435f, 2623.257f, 43.46658f, 1851.659f, 2696.404f, 56.68093f, 12f, 0, true, 0))
			{
				if (!bLocal_55)
				{
					unk_0xE4F4DE6178AB3FC1("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0xE4F4DE6178AB3FC1("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_59[7] = 1;
				}
			}
			else
			{
				iLocal_59[7] = 0;
			}
		}
	}
	else if (iLocal_51 == 9)
	{
		if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
		{
			if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), 1831.435f, 2623.257f, 43.46658f, 1851.659f, 2696.404f, 56.68093f, 12f, 0, true, 0))
			{
				if (!bLocal_55)
				{
					unk_0xE4F4DE6178AB3FC1("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0xE4F4DE6178AB3FC1("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_59[8] = 1;
				}
			}
			else
			{
				iLocal_59[8] = 0;
			}
		}
	}
	else if (iLocal_51 == 10)
	{
		if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
		{
			if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), 1829.468f, 2480.96f, 43.52237f, 1836.998f, 2566.856f, 60.35412f, 20.5f, 0, true, 0))
			{
				if (!bLocal_55)
				{
					unk_0xE4F4DE6178AB3FC1("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0xE4F4DE6178AB3FC1("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_59[9] = 1;
				}
			}
			else
			{
				iLocal_59[9] = 0;
			}
		}
	}
	iLocal_51++;
	if (iLocal_51 > 10)
	{
		iLocal_51 = 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (iLocal_59[iVar0])
			{
				bVar1 = true;
			}
			iVar0++;
		}
		if (!bVar1)
		{
			if (!bLocal_55)
			{
				unk_0xE4F4DE6178AB3FC1("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 0, 1);
				unk_0xE4F4DE6178AB3FC1("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 1, 1);
			}
		}
	}
}

void func_5()
{
	vector3 vVar0;
	
	switch (iLocal_50)
	{
		case 0:
			unk_0xB815670C37E03CDE(joaat("police3"));
			unk_0xB815670C37E03CDE(joaat("s_m_y_cop_01"));
			if (unk_0x5D98D654CDC2165A(joaat("police3")) && unk_0x5D98D654CDC2165A(joaat("s_m_y_cop_01")))
			{
				iLocal_50++;
			}
			break;
		
		case 1:
			iLocal_66 = unk_0xC651C43AB13A15E5(joaat("police3"), 1797.785f, 2599.697f, 44.5769f, 269.6189f, true, true, false);
			iLocal_68 = unk_0xE196503B36B6194B(iLocal_66, 6, joaat("s_m_y_cop_01"), -1, 1, true);
			func_26(&iLocal_68);
			iLocal_50++;
			break;
		
		case 2:
			if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
			{
				vVar0 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true) };
			}
			if ((func_16(iLocal_68, iLocal_66, &Local_70, &uLocal_71, 0, 1, 0, 1, 1) || func_16(iLocal_69, iLocal_67, &Local_70, &uLocal_71, 0, 1, 0, 1, 1)) || (func_15(vVar0, 4, 20, 0) && !unk_0xB4185A89B91B3C53(unk_0x33CD235DF1E6A94E())))
			{
				unk_0xCCBED19EF0483C96(joaat("prop_gate_prison_01"), 1845f, 2605f, 45f, 0, 0f, 50f, 0f);
				unk_0xCCBED19EF0483C96(joaat("prop_gate_prison_01"), 1819.274f, 2608.537f, 44.6195f, 0, 0f, 50f, 0f);
				if (!unk_0xD62C4419A41F106A(iLocal_68, 0))
				{
					unk_0x277716E9E7CC0692(iLocal_68, unk_0x33CD235DF1E6A94E(), 0, 16);
				}
				if (!func_14(&iLocal_72))
				{
					func_11(&iLocal_72);
				}
				iLocal_50++;
			}
			break;
		
		case 3:
			if (func_14(&iLocal_72))
			{
				if (func_8(&iLocal_72) > 15f)
				{
					iLocal_67 = unk_0xC651C43AB13A15E5(joaat("police3"), 1755.159f, 2614.456f, 44.5652f, 179.3394f, true, true, false);
					iLocal_69 = unk_0xE196503B36B6194B(iLocal_67, 6, joaat("s_m_y_cop_01"), -1, 1, true);
					func_26(&iLocal_69);
					unk_0x277716E9E7CC0692(iLocal_69, unk_0x33CD235DF1E6A94E(), 0, 16);
					iLocal_50++;
				}
				else if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) == 0)
				{
					if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
					{
						vVar0 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true) };
					}
					if (func_7(1818.237f, 2604.927f, 44.57381f, vVar0, 1125515264))
					{
						func_6();
						iLocal_50 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) == 0)
			{
				if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
				{
					vVar0 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true) };
				}
				if (func_7(1818.237f, 2604.927f, 44.57381f, vVar0, 1125515264))
				{
					func_6();
					iLocal_50 = 0;
				}
			}
			break;
	}
}

void func_6()
{
	if (unk_0x765F6FEEFF39224F(iLocal_66))
	{
		unk_0x7AC8DF0B83EB4C6B(&iLocal_66);
	}
	if (unk_0x765F6FEEFF39224F(iLocal_68))
	{
		unk_0x4B8B69DAE5BAC592(&iLocal_68);
	}
	if (unk_0x765F6FEEFF39224F(iLocal_67))
	{
		unk_0x7AC8DF0B83EB4C6B(&iLocal_67);
	}
	if (unk_0x765F6FEEFF39224F(iLocal_69))
	{
		unk_0x4B8B69DAE5BAC592(&iLocal_69);
	}
}

int func_7(vector3 vParam0, vector3 vParam1, float fParam2)
{
	if (vdist2(vParam0, vParam1) < (fParam2 * fParam2))
	{
		if (((unk_0x765F6FEEFF39224F(iLocal_66) && unk_0x765F6FEEFF39224F(iLocal_68)) && unk_0x765F6FEEFF39224F(iLocal_67)) && unk_0x765F6FEEFF39224F(iLocal_69))
		{
			if (unk_0xC30D5C4DCAC8020A(iLocal_66) || !unk_0x3F219400E5FE4B69(iLocal_66))
			{
				if (unk_0xC30D5C4DCAC8020A(iLocal_68) || !unk_0x3F219400E5FE4B69(iLocal_68))
				{
					if (unk_0xC30D5C4DCAC8020A(iLocal_67) || !unk_0x3F219400E5FE4B69(iLocal_67))
					{
						if (unk_0xC30D5C4DCAC8020A(iLocal_69) || !unk_0x3F219400E5FE4B69(iLocal_69))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	else if (vdist2(vParam0, vParam1) > 62500f)
	{
		return 1;
	}
	return 0;
}

float func_8(int iParam0)
{
	if (func_14(iParam0))
	{
		if (func_10(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_9(unk_0x0E4018692D92041D(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_9(bool bParam0)
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

bool func_10(int iParam0)
{
	return unk_0x0E4018692D92041D(*iParam0, 2);
}

void func_11(int iParam0)
{
	if (!func_14(iParam0))
	{
		func_12(iParam0);
	}
}

void func_12(int iParam0)
{
	func_13(iParam0, 0f);
}

void func_13(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_9(unk_0x0E4018692D92041D(*iParam0, 4)) - fParam1);
	unk_0x8950ED5730F62EE8(iParam0, 1);
	unk_0xCE689A8E8C42ED78(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_14(int iParam0)
{
	return unk_0x0E4018692D92041D(*iParam0, 1);
}

int func_15(vector3 vParam0, int iParam1, int iParam2, bool bParam3)
{
	vector3 vVar0[15];
	vector3 vVar1[15];
	float fVar2[15];
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar5 = 0;
	switch (iParam1)
	{
		case 1:
			vVar0[0 /*3*/] = { -1332.211f, 100.4608f, 40.38437f };
			vVar1[0 /*3*/] = { -1094.238f, 148.4274f, 73f };
			fVar2[0] = 171.25f;
			vVar0[1 /*3*/] = { -999.7344f, -110.2231f, 25.25706f };
			vVar1[1 /*3*/] = { -1149.494f, 109.2558f, 73f };
			fVar2[1] = 132f;
			vVar0[2 /*3*/] = { -1035.113f, -84.95885f, 28.2746f };
			vVar1[2 /*3*/] = { -1261.103f, 50.08148f, 73f };
			fVar2[2] = 132f;
			iVar3 = 3;
			break;
		
		case 2:
			vVar0[0 /*3*/] = { -804.3439f, -3346.5f, 10f };
			vVar1[0 /*3*/] = { -1816.954f, -2768.893f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 247f;
			vVar0[1 /*3*/] = { -1911.488f, -2934.197f, 10f };
			vVar1[1 /*3*/] = { -968.6236f, -3477.748f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 149f;
			vVar0[2 /*3*/] = { -844.9433f, -2802.785f, 10f };
			vVar1[2 /*3*/] = { -1011.081f, -3086.904f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 185.5f;
			vVar0[3 /*3*/] = { -1021.086f, -2952.277f, 10f };
			vVar1[3 /*3*/] = { -1599.008f, -2616.271f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 250f;
			vVar0[4 /*3*/] = { -1027.136f, -2436.457f, 10f };
			vVar1[4 /*3*/] = { -1392.61f, -2226.763f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 193.5f;
			vVar0[5 /*3*/] = { -1497.549f, -2408.712f, 10f };
			vVar1[5 /*3*/] = { -1136.917f, -2617.955f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 234.5f;
			vVar0[6 /*3*/] = { -982.7924f, -2831.709f, 12.93313f };
			vVar1[6 /*3*/] = { -966.4677f, -2803.458f, 16.68313f };
			fVar2[6] = 16f;
			vVar0[7 /*3*/] = { -1110.083f, -3496.806f, 12f };
			vVar1[7 /*3*/] = { -1955.298f, -3010.431f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 80f;
			vVar0[8 /*3*/] = { -1886.899f, -3193.024f, 12f };
			vVar1[8 /*3*/] = { -1836.143f, -3105.268f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 142f;
			vVar0[9 /*3*/] = { -1134.337f, -3535.648f, 12f };
			vVar1[9 /*3*/] = { -1259.649f, -3463.486f, IntToFloat((250 + iParam2)) };
			fVar2[9] = 30.75f;
			vVar0[10 /*3*/] = { -969.1279f, -3463.899f, 12f };
			vVar1[10 /*3*/] = { -896.3734f, -3505.715f, IntToFloat((250 + iParam2)) };
			fVar2[10] = 150f;
			vVar0[11 /*3*/] = { -1369.491f, -2173.579f, 10f };
			vVar1[11 /*3*/] = { -1685.626f, -2720.364f, IntToFloat((250 + iParam2)) };
			fVar2[11] = 29.25f;
			vVar0[12 /*3*/] = { -1010.926f, -3550.943f, 10f };
			vVar1[12 /*3*/] = { -1110.198f, -3493.617f, IntToFloat((250 + iParam2)) };
			fVar2[12] = 43f;
			iVar3 = 13;
			break;
		
		case 3:
			vVar0[0 /*3*/] = { -1773.944f, 3287.334f, 30f };
			vVar1[0 /*3*/] = { -2029.776f, 2845.083f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 255f;
			vVar0[1 /*3*/] = { -2725.889f, 3291.099f, 30f };
			vVar1[1 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 180f;
			vVar0[2 /*3*/] = { -2442.026f, 3326.699f, 30f };
			vVar1[2 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 205f;
			vVar0[3 /*3*/] = { -1917.165f, 3374.209f, 30f };
			vVar1[3 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 86.25f;
			vVar0[4 /*3*/] = { -2192.753f, 3373.278f, 30f };
			vVar1[4 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 150.5f;
			vVar0[5 /*3*/] = { -2077.663f, 3344.514f, 30f };
			vVar1[5 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 140.5f;
			vVar0[6 /*3*/] = { -2861.755f, 3352.661f, 30f };
			vVar1[6 /*3*/] = { -2715.871f, 3269.916f, IntToFloat((250 + iParam2)) };
			fVar2[6] = 90f;
			vVar0[7 /*3*/] = { -2005.574f, 3364.533f, 30f };
			vVar1[7 /*3*/] = { -1977.569f, 3330.888f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 100f;
			vVar0[8 /*3*/] = { -1682.235f, 3004.285f, 30f };
			vVar1[8 /*3*/] = { -1942.747f, 2947.441f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 248.75f;
			vVar0[9 /*3*/] = { -2393.295f, 2936.406f, 31.6801f };
			vVar1[9 /*3*/] = { -2453.037f, 3006.863f, 52.31003f };
			fVar2[9] = 128f;
			vVar0[10 /*3*/] = { -2347.185f, 3023.83f, 31.56573f };
			vVar1[10 /*3*/] = { -2517.33f, 2989.063f, 49.95644f };
			fVar2[10] = 140f;
			vVar0[11 /*3*/] = { -2259.922f, 3358.04f, 29.99972f };
			vVar1[11 /*3*/] = { -2299.772f, 3385.79f, 38.06014f };
			fVar2[11] = 16f;
			vVar0[12 /*3*/] = { -2476.309f, 3363.914f, 31.67933f };
			vVar1[12 /*3*/] = { -2431.981f, 3287.669f, 39.97826f };
			fVar2[12] = 214.25f;
			vVar0[13 /*3*/] = { -2103.081f, 2797.783f, 29.37864f };
			vVar1[13 /*3*/] = { -2096.821f, 2874.423f, 57.80989f };
			fVar2[13] = 65.75f;
			if (bParam3)
			{
				iVar6 = iParam2;
			}
			else
			{
				iVar6 = 0;
			}
			vVar1[9 /*3*/].f_2 = (vVar1[9 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[10 /*3*/].f_2 = (vVar1[10 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[11 /*3*/].f_2 = (vVar1[11 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[12 /*3*/].f_2 = (vVar1[12 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[13 /*3*/].f_2 = (vVar1[13 /*3*/].f_2 + IntToFloat(iVar6));
			iVar3 = 14;
			break;
		
		case 4:
			vVar0[0 /*3*/] = { 1541.607f, 2527.555f, 40f };
			vVar1[0 /*3*/] = { 1815.575f, 2535.06f, IntToFloat((150 + iParam2)) };
			fVar2[0] = 114f;
			vVar0[1 /*3*/] = { 1788.879f, 2445.727f, 40f };
			vVar1[1 /*3*/] = { 1716.96f, 2502.957f, IntToFloat((150 + iParam2)) };
			fVar2[1] = 88.5f;
			vVar0[2 /*3*/] = { 1601.157f, 2436.244f, 40f };
			vVar1[2 /*3*/] = { 1650.078f, 2515.923f, IntToFloat((150 + iParam2)) };
			fVar2[2] = 133.25f;
			vVar0[3 /*3*/] = { 1706.331f, 2407.597f, 40f };
			vVar1[3 /*3*/] = { 1698.555f, 2460.208f, IntToFloat((150 + iParam2)) };
			fVar2[3] = 104.5f;
			vVar0[4 /*3*/] = { 1712.452f, 2756.218f, 40f };
			vVar1[4 /*3*/] = { 1718.848f, 2589.162f, IntToFloat((150 + iParam2)) };
			fVar2[4] = 121.75f;
			vVar0[5 /*3*/] = { 1830.228f, 2661.24f, 40f };
			vVar1[5 /*3*/] = { 1774.812f, 2679.419f, IntToFloat((150 + iParam2)) };
			fVar2[5] = 84.5f;
			vVar0[6 /*3*/] = { 1559.05f, 2632.22f, 40f };
			vVar1[6 /*3*/] = { 1657.208f, 2595.484f, IntToFloat((150 + iParam2)) };
			fVar2[6] = 103.75f;
			vVar0[7 /*3*/] = { 1612.021f, 2716.869f, 40f };
			vVar1[7 /*3*/] = { 1657.165f, 2669.721f, IntToFloat((150 + iParam2)) };
			fVar2[7] = 104.25f;
			vVar0[8 /*3*/] = { 1809.872f, 2729.827f, 40f };
			vVar1[8 /*3*/] = { 1789.855f, 2705.037f, IntToFloat((150 + iParam2)) };
			fVar2[8] = 91f;
			vVar0[9 /*3*/] = { 1818.789f, 2605.948f, 40f };
			vVar1[9 /*3*/] = { 1783.114f, 2606.783f, IntToFloat((150 + iParam2)) };
			fVar2[9] = 51.25f;
			iVar3 = 10;
			break;
		
		case 5:
			vVar0[0 /*3*/] = { 3411.002f, 3663.185f, 20f };
			vVar1[0 /*3*/] = { 3615.583f, 3626.194f, IntToFloat((40 + iParam2)) };
			fVar2[0] = 45.75f;
			vVar0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			vVar1[1 /*3*/] = { 3643.801f, 3694.362f, IntToFloat((40 + iParam2)) };
			fVar2[1] = 99f;
			vVar0[2 /*3*/] = { 3446.036f, 3795.688f, 20f };
			vVar1[2 /*3*/] = { 3650.914f, 3766.152f, IntToFloat((40 + iParam2)) };
			fVar2[2] = 81.5f;
			iVar3 = 3;
			break;
		
		case 6:
			vVar0[0 /*3*/] = { 526.053f, -3391.497f, -10f };
			vVar1[0 /*3*/] = { 523.2289f, -3118.678f, IntToFloat((10 + iParam2)) };
			fVar2[0] = 120f;
			vVar0[1 /*3*/] = { 459.4397f, -3199.99f, 4.819676f };
			vVar1[1 /*3*/] = { 593.8928f, -3199.998f, 30.06926f };
			fVar2[1] = 170f;
			vVar0[2 /*3*/] = { 552.8467f, -3111.054f, 4.819394f };
			vVar1[2 /*3*/] = { 585.3137f, -3111.844f, 17.56923f };
			fVar2[2] = 12.5f;
			vVar0[3 /*3*/] = { 598.4666f, -3140.147f, 4.819257f };
			vVar1[3 /*3*/] = { 597.4973f, -3117.063f, 17.31926f };
			fVar2[3] = 9.75f;
			iVar3 = 4;
			break;
		
		case 7:
			vVar0[0 /*3*/] = { -1108.55f, -570.8798f, 20f };
			vVar1[0 /*3*/] = { -1187.811f, -477.5037f, IntToFloat((50 + iParam2)) };
			fVar2[0] = 162f;
			vVar0[1 /*3*/] = { -1201.378f, -485.9673f, 20f };
			vVar1[1 /*3*/] = { -1215.796f, -464.8281f, IntToFloat((50 + iParam2)) };
			fVar2[1] = 124f;
			vVar0[2 /*3*/] = { -985.6311f, -525.4233f, 20f };
			vVar1[2 /*3*/] = { -1013.393f, -475.2057f, IntToFloat((50 + iParam2)) };
			fVar2[2] = 55f;
			vVar0[3 /*3*/] = { -1055.849f, -477.8226f, 20f };
			vVar1[3 /*3*/] = { -1073.333f, -498.717f, IntToFloat((50 + iParam2)) };
			fVar2[3] = 142f;
			iVar3 = 4;
			break;
		
		case 8:
			vVar0[0 /*3*/] = { 461.5684f, -984.572f, 29.43951f };
			vVar1[0 /*3*/] = { 471.17f, -984.4292f, 40.14212f };
			fVar2[0] = 7.75f;
			vVar0[1 /*3*/] = { 457.3404f, -984.756f, 34.43951f };
			vVar1[1 /*3*/] = { 457.2084f, -993.7189f, 29.38958f };
			fVar2[1] = 14.75f;
			vVar0[2 /*3*/] = { 477.6227f, -986.6f, 40.00819f };
			vVar1[2 /*3*/] = { 424.8687f, -986.3279f, 48.71241f };
			fVar2[2] = 31.5f;
			vVar0[3 /*3*/] = { 474.3889f, -974.4613f, 39.55761f };
			vVar1[3 /*3*/] = { 474.0358f, -1021.972f, 49.10033f };
			fVar2[3] = 30.5f;
			vVar0[4 /*3*/] = { 442.1768f, -974.1888f, 29.68951f };
			vVar1[4 /*3*/] = { 442.1855f, -979.8635f, 33.43951f };
			fVar2[4] = 6.75f;
			iVar3 = 5;
			break;
	}
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		if (unk_0xC2F708DE8AD68197(vParam0, vVar0[iVar4 /*3*/], vVar1[iVar4 /*3*/], fVar2[iVar4], iVar5, true))
		{
			return 1;
		}
		iVar4++;
	}
	return 0;
}

int func_16(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0x33CD235DF1E6A94E();
	if (!unk_0xD62C4419A41F106A(iVar0, 0) && !unk_0xD62C4419A41F106A(iParam0, 0))
	{
		if (!func_25(*uParam2, 1))
		{
			if (func_24(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_25(*uParam2, 2))
		{
			if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_25(*uParam2, 4))
		{
			if (func_22(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_25(*uParam2, 8))
		{
			if (func_21(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_25(*uParam2, 128);
		if (bParam4)
		{
			if (func_17(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_25(*uParam2, 16))
		{
			if (func_17(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
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

int func_17(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_45)
		{
			iLocal_46 = unk_0xE80842D7B53F8525(iParam0);
			bLocal_45 = true;
		}
		iLocal_47 = unk_0xE80842D7B53F8525(iParam0);
		iLocal_48 = (iLocal_46 - iLocal_47);
		iVar0 = unk_0x8918EC905FC8975D();
		if (!unk_0xD62C4419A41F106A(iVar0, 0))
		{
			if (unk_0x91BBD269506D61D2(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_48) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_45)
		{
			if (unk_0x91BBD269506D61D2(iParam0, unk_0x33CD235DF1E6A94E(), 1))
			{
				if (IntToFloat(iLocal_48) > 100f)
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
	if (func_20(unk_0x33CD235DF1E6A94E(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x3AF2B3B68DD52355(iParam0) && func_18(iParam0, 1) < 1.5f)
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

float func_18(int iParam0, bool bParam1)
{
	return func_19(unk_0x378BD4B3881338C2(unk_0x3EE1295CEFBEFED4()), iParam0, bParam1);
}

float func_19(int iParam0, int iParam1, bool bParam2)
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

int func_20(int iParam0, int iParam1)
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

int func_21(int iParam0, int iParam1, var uParam2)
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

int func_22(int iParam0, int iParam1, var uParam2, bool bParam3)
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
			if (unk_0x105CB7A75E93DC77(iParam0) || func_23(iVar1))
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

int func_23(int iParam0)
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
						if (func_19(unk_0x33CD235DF1E6A94E(), iParam0, 1) < 40f)
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

int func_24(int iParam0, var uParam1)
{
	if (!unk_0xD62C4419A41F106A(iParam0, 0))
	{
		if (unk_0x9ED464AAA493C8EF(unk_0x33CD235DF1E6A94E(), 6))
		{
			if (unk_0xAC6A512C64D9A9C0(unk_0x95B959F18401C09A(), iParam0) || unk_0xC2ECB90E2DFA5802(unk_0x95B959F18401C09A(), iParam0))
			{
				if (unk_0x910FF514D7BC5674(iParam0, unk_0x33CD235DF1E6A94E(), 90f))
				{
					if (func_18(iParam0, 1) < uParam1->f_2)
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

bool func_25(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_26(int iParam0)
{
	unk_0x697EBA5CF1A6AB57(*iParam0, joaat("weapon_assaultshotgun"), -1, false, true);
	unk_0x4A852F02088ECC9D(*iParam0, true);
	unk_0x28F648743D7DE312(*iParam0, 13, true);
	unk_0x28F648743D7DE312(*iParam0, 0, true);
	unk_0x9E280E42C0773A3A(*iParam0, 1);
	unk_0x34A51926277F67BC(*iParam0, 1);
	unk_0x318780EBA3E142A0(*iParam0, 0f);
	unk_0x897EF720254BBEA3(*iParam0, true);
	unk_0xDE9FF07CFD5DC172(*iParam0, 100);
	unk_0x1E0350F1D7702D6A(*iParam0, 2);
	unk_0x28F648743D7DE312(*iParam0, 23, false);
	unk_0x18E5E2B41CD6CE17(*iParam0, 1000f);
	unk_0x28F648743D7DE312(*iParam0, 1, true);
}

void func_27()
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (bLocal_294)
	{
		if (!unk_0xD62C4419A41F106A(iLocal_289, 0))
		{
			if (!unk_0x4278060E716E1226(iLocal_289))
			{
				unk_0xCCFFBA26C1726838(iLocal_289, 101, "PrisonHeli", 1);
			}
			if (!unk_0xD62C4419A41F106A(iLocal_290, 0))
			{
				vVar0 = { unk_0x2CA911E7569D12EA(iLocal_290, 0f, 4f, -2f) };
				unk_0x2E088AA96005F9EB(iLocal_290, vVar0);
			}
			if (bLocal_292)
			{
				if (!func_28())
				{
					bLocal_292 = false;
					unk_0x077F5A8B03703391(iLocal_289, 0, 0);
				}
			}
			else if (func_28())
			{
				bLocal_292 = true;
				unk_0x077F5A8B03703391(iLocal_289, 1, 0);
			}
			if (bLocal_292)
			{
				vVar1 = { unk_0xFBB1F99A825CAB09(iLocal_289, true) };
				if (vdist2(vLocal_248, vVar1) < 90000f)
				{
					if (!iLocal_293)
					{
						iLocal_293 = 1;
					}
				}
			}
		}
		else if (unk_0xE38E3CF1625A4145(iLocal_291))
		{
			unk_0x1ABDB383C83A336A(&iLocal_291);
		}
	}
}

int func_28()
{
	if (unk_0x13348E86D5B8A052() >= 20 || unk_0x13348E86D5B8A052() < 6)
	{
		return 1;
	}
	return 0;
}

void func_29()
{
	int iVar0;
	vector3 vVar1;
	
	if (!Local_307.f_18[0])
	{
		if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
		{
			vVar1 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true) };
		}
		if (!bLocal_58)
		{
			if (vdist2(vVar1, vLocal_305) < 5625f)
			{
				iLocal_306 = 1;
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0xBC2FC12AD0FBF72E(Local_307.f_27[iVar0]))
		{
			if (!Local_307.f_18[iVar0])
			{
				if (func_16(Local_307.f_27[iVar0], 0, &Local_70, &uLocal_71, 1, 1, 0, 1, 1) || iLocal_306)
				{
					unk_0x277716E9E7CC0692(Local_307.f_27[iVar0], unk_0x33CD235DF1E6A94E(), 0, 16);
					Local_307.f_18[iVar0] = 1;
				}
			}
			if (!Local_307.f_18[iVar0])
			{
				if (!unk_0xBC17B8529DADF0F8(Local_307.f_27[iVar0]))
				{
					unk_0x089BDCEDF5972595(Local_307.f_27[iVar0], Local_307.f_14[iVar0], 0, 0, -1);
				}
			}
		}
		else if (unk_0xE38E3CF1625A4145(Local_307.f_36[iVar0]))
		{
			unk_0x1ABDB383C83A336A(&(Local_307.f_36[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x765F6FEEFF39224F(Local_307.f_31[iVar0]))
		{
			if (unk_0xBC2FC12AD0FBF72E(Local_307.f_31[iVar0]))
			{
				if (unk_0xE38E3CF1625A4145(Local_307.f_40[iVar0]))
				{
					unk_0x1ABDB383C83A336A(&(Local_307.f_40[iVar0]));
				}
			}
		}
		iVar0++;
	}
	if (!Local_307.f_22[0])
	{
		if (!unk_0xBC2FC12AD0FBF72E(Local_307.f_31[0]))
		{
			if ((func_16(Local_307.f_31[0], 0, &Local_70, &uLocal_71, 1, 1, 0, 1, 1) || Local_307.f_18[1] == 1) || iLocal_306)
			{
				unk_0xED68CDDDE25A144E(Local_307.f_31[0]);
				unk_0x277716E9E7CC0692(Local_307.f_31[0], unk_0x33CD235DF1E6A94E(), 0, 16);
				Local_307.f_22[0] = 1;
			}
		}
	}
	if (!Local_307.f_22[1])
	{
		if (!unk_0xBC2FC12AD0FBF72E(Local_307.f_31[1]))
		{
			if ((func_16(Local_307.f_31[1], 0, &Local_70, &uLocal_71, 0, 1, 0, 1, 1) || Local_307.f_18[1] == 1) || iLocal_306)
			{
				unk_0xED68CDDDE25A144E(Local_307.f_31[1]);
				unk_0x277716E9E7CC0692(Local_307.f_31[1], unk_0x33CD235DF1E6A94E(), 0, 16);
				Local_307.f_22[1] = 1;
			}
		}
	}
	if (!Local_307.f_22[2])
	{
		if (!unk_0xBC2FC12AD0FBF72E(Local_307.f_31[2]))
		{
			if ((func_16(Local_307.f_31[2], 0, &Local_70, &uLocal_71, 0, 1, 0, 1, 1) || Local_307.f_18[2] == 1) || iLocal_306)
			{
				unk_0xED68CDDDE25A144E(Local_307.f_31[2]);
				unk_0x277716E9E7CC0692(Local_307.f_31[2], unk_0x33CD235DF1E6A94E(), 0, 16);
				Local_307.f_22[2] = 1;
			}
		}
	}
	if (!Local_307.f_22[3])
	{
		if (!unk_0xBC2FC12AD0FBF72E(Local_307.f_31[3]))
		{
			if ((func_16(Local_307.f_31[3], 0, &Local_70, &uLocal_71, 0, 1, 0, 1, 1) || Local_307.f_18[2] == 1) || iLocal_306)
			{
				unk_0xED68CDDDE25A144E(Local_307.f_31[3]);
				unk_0x277716E9E7CC0692(Local_307.f_31[3], unk_0x33CD235DF1E6A94E(), 0, 16);
				Local_307.f_22[3] = 1;
			}
		}
	}
	if (!unk_0xBC2FC12AD0FBF72E(Local_307.f_27[1]))
	{
		if (unk_0xBC17B8529DADF0F8(Local_307.f_27[1]))
		{
			if (!Local_307.f_22[0])
			{
				if (!unk_0xBC2FC12AD0FBF72E(Local_307.f_31[0]))
				{
					unk_0x38CD0CF7DF213A81(Local_307.f_31[0], Local_307.f_27[1], -2f, 0f, 0f, 1f, -1, 1036831949, 1);
				}
			}
			if (!Local_307.f_22[1])
			{
				if (!unk_0xBC2FC12AD0FBF72E(Local_307.f_31[1]))
				{
					unk_0x38CD0CF7DF213A81(Local_307.f_31[1], Local_307.f_27[1], -1f, 0f, 0f, 1f, -1, 1036831949, 1);
				}
			}
		}
	}
	if (!unk_0xBC2FC12AD0FBF72E(Local_307.f_27[2]))
	{
		if (unk_0xBC17B8529DADF0F8(Local_307.f_27[2]))
		{
			if (!Local_307.f_22[2])
			{
				if (!unk_0xBC2FC12AD0FBF72E(Local_307.f_31[2]))
				{
					unk_0x38CD0CF7DF213A81(Local_307.f_31[2], Local_307.f_27[2], 1f, 0f, 0f, 1f, -1, 1036831949, 1);
				}
			}
			if (!Local_307.f_22[3])
			{
				if (!unk_0xBC2FC12AD0FBF72E(Local_307.f_31[3]))
				{
					unk_0x38CD0CF7DF213A81(Local_307.f_31[3], Local_307.f_27[2], -1f, 0f, 0f, 1f, -1, 1036831949, 1);
				}
			}
		}
	}
}

void func_30()
{
	int iVar0;
	vector3 vVar1;
	
	iLocal_269++;
	if (iLocal_269 >= 30)
	{
		if (!bLocal_58)
		{
			if (func_15(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), 4, 100, 0))
			{
				iVar0 = 0;
				while (iVar0 < 10)
				{
					if (unk_0x765F6FEEFF39224F(Local_252.f_64[iVar0]) && !unk_0xBC2FC12AD0FBF72E(Local_252.f_64[iVar0]))
					{
						if (unk_0xDBAC1EFC22D74E44(unk_0x33CD235DF1E6A94E()) != -1)
						{
							if (unk_0xDBAC1EFC22D74E44(unk_0x33CD235DF1E6A94E()) == 1 || unk_0xDBAC1EFC22D74E44(unk_0x33CD235DF1E6A94E()) == 2)
							{
								unk_0xDE9FF07CFD5DC172(Local_252.f_64[iVar0], 10);
								iLocal_268 = 1;
							}
						}
						else if (unk_0xB4185A89B91B3C53(unk_0x33CD235DF1E6A94E()))
						{
							unk_0xDE9FF07CFD5DC172(Local_252.f_64[iVar0], 10);
							iLocal_268 = 1;
						}
						else
						{
							unk_0xDE9FF07CFD5DC172(Local_252.f_64[iVar0], 100);
							iLocal_268 = 1;
						}
					}
					iVar0++;
				}
			}
			else
			{
				iLocal_268 = 0;
			}
		}
		iLocal_269 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x765F6FEEFF39224F(Local_252.f_64[iVar0]) && !unk_0xBC2FC12AD0FBF72E(Local_252.f_64[iVar0]))
		{
			if (unk_0x09287BFEE1D9F6EF(unk_0x3EE1295CEFBEFED4(), 0))
			{
				unk_0xC6C5852786DF8AF4(unk_0x95B959F18401C09A());
			}
			if ((((func_16(Local_252.f_64[iVar0], 0, &Local_70, &uLocal_71, 0, 1, 0, 1, 1) || unk_0x416C37C19CCE0077(Local_252[iVar0 /*3*/], 20f, 1)) || unk_0x978F18A8DE1F6EF3(Local_252[iVar0 /*3*/] - Vector(20f, 20f, 20f), Local_252[iVar0 /*3*/] + Vector(20f, 20f, 20f))) || iLocal_268) || func_32(&(Local_252.f_64[iVar0])))
			{
				if (!func_2(5))
				{
					if (unk_0xB4185A89B91B3C53(unk_0x33CD235DF1E6A94E()))
					{
						if (bLocal_61)
						{
							func_31(iVar0);
						}
					}
					else
					{
						func_31(iVar0);
					}
				}
			}
			else if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) == 0)
			{
				if (!unk_0xBC17B8529DADF0F8(Local_252.f_64[iVar0]))
				{
					unk_0x089BDCEDF5972595(Local_252.f_64[iVar0], Local_252.f_42[iVar0], 0, 0, -1);
					Local_252.f_53[iVar0] = 0;
				}
			}
		}
		else if (unk_0xE38E3CF1625A4145(Local_252.f_75[iVar0]))
		{
			unk_0x1ABDB383C83A336A(&(Local_252.f_75[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (((unk_0x765F6FEEFF39224F(iLocal_264[iVar0]) && !unk_0xD62C4419A41F106A(iLocal_264[iVar0], 0)) && unk_0x765F6FEEFF39224F(iLocal_263[iVar0])) && !unk_0xD62C4419A41F106A(iLocal_263[iVar0], 0))
		{
			vVar1 = { unk_0x2CA911E7569D12EA(iLocal_264[iVar0], 0f, 3.5f, -2f) };
			unk_0x2E088AA96005F9EB(iLocal_264[iVar0], vVar1);
			unk_0x9FABD0AB045A5D6E(iLocal_263[iVar0], false, false, 0);
			if (iLocal_265[iVar0])
			{
				if (!func_28())
				{
					if (!unk_0xD62C4419A41F106A(iLocal_263[iVar0], 0))
					{
						iLocal_265[iVar0] = 0;
						unk_0x077F5A8B03703391(iLocal_263[iVar0], 0, 0);
					}
				}
			}
			else if (func_28())
			{
				if (!unk_0xD62C4419A41F106A(iLocal_263[iVar0], 0))
				{
					iLocal_265[iVar0] = 1;
					unk_0x077F5A8B03703391(iLocal_263[iVar0], 1, 0);
				}
			}
		}
		iVar0++;
	}
	if (fLocal_266 > 20f)
	{
		bLocal_267 = false;
	}
	else if (fLocal_266 < -20f)
	{
		bLocal_267 = true;
	}
	if (bLocal_267)
	{
		fLocal_266 = (fLocal_266 + 0.25f);
	}
	else
	{
		fLocal_266 = (fLocal_266 - 0.25f);
	}
	if (unk_0x765F6FEEFF39224F(iLocal_263[0]))
	{
		unk_0x3C990C409B3845DE(iLocal_263[0], (53f + fLocal_266));
	}
	if (unk_0x765F6FEEFF39224F(iLocal_263[1]))
	{
		unk_0x3C990C409B3845DE(iLocal_263[1], (13f + fLocal_266));
	}
	if (unk_0x765F6FEEFF39224F(iLocal_263[2]))
	{
		unk_0x3C990C409B3845DE(iLocal_263[2], (250f + fLocal_266));
	}
}

void func_31(int iParam0)
{
	if (!Local_252.f_53[iParam0])
	{
		unk_0x0B303ED4E12A5F06(Local_252.f_64[iParam0], unk_0x33CD235DF1E6A94E(), -1, 0);
		unk_0x18E5E2B41CD6CE17(Local_252.f_64[iParam0], 1000f);
		unk_0x07CA8FF5BA390419(Local_252.f_64[iParam0]);
		Local_252.f_53[iParam0] = 1;
		if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) == 0)
		{
			unk_0x98F04A4FFB4AD01C(unk_0x95B959F18401C09A(), 3, 0);
			unk_0x66D901F8097E8E86(unk_0x95B959F18401C09A(), 0);
		}
	}
}

int func_32(var uParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		vVar0 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true) };
	}
	if (!unk_0xD62C4419A41F106A(*uParam0, 0))
	{
		vVar1 = { unk_0xFBB1F99A825CAB09(*uParam0, true) };
	}
	if (vdist2(vVar0, vVar1) < 100f)
	{
		return 1;
	}
	return 0;
}

void func_33()
{
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) >= 2 || func_15(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), 4, 150, 0))
		{
			if (unk_0x80C90B71B6E0E34B("PRISON_ALARMS"))
			{
				unk_0xF2376062423B42B9("PRISON_ALARMS", false);
			}
		}
		else
		{
			unk_0x4CCF49FD38F157B1("PRISON_ALARMS", false);
		}
	}
}

void func_34()
{
	vector3 vVar0;
	
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), 1840.23f, 2471.49f, 41.94113f, 1840.553f, 2751.983f, 54.68177f, 84.25f, 0, true, 0))
		{
			func_57(&Local_70, 2);
		}
		else
		{
			func_55(&Local_70, 2);
		}
	}
	if (iLocal_49 > 20)
	{
		if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
		{
			vVar0 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true) };
			if (unk_0xB4185A89B91B3C53(unk_0x33CD235DF1E6A94E()))
			{
				if (func_15(vVar0, 4, 150, 0))
				{
					func_54(4, 1);
					if (!func_14(&iLocal_78))
					{
						func_11(&iLocal_78);
					}
					if (!bLocal_60)
					{
						if (unk_0x765F6FEEFF39224F(iLocal_68) && !unk_0xD62C4419A41F106A(iLocal_68, 0))
						{
							func_53(&uLocal_81, 8, iLocal_68, "TANNOY", 0, 1);
							if (func_37(&uLocal_81, "FH1AUD", "FH1_TANNOY", 8, 0, 0, 0))
							{
								bLocal_58 = true;
								bLocal_60 = true;
							}
						}
					}
				}
				else
				{
					func_54(4, 0);
					if (func_14(&iLocal_78))
					{
						func_12(&iLocal_78);
					}
					bLocal_58 = false;
				}
			}
			else
			{
				func_54(4, 0);
				if (func_14(&iLocal_78))
				{
					func_12(&iLocal_78);
				}
				bLocal_58 = false;
			}
			if (bLocal_58)
			{
				if (func_14(&iLocal_78))
				{
					if (func_8(&iLocal_78) > 10f)
					{
						if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) < 4)
						{
							unk_0x98F04A4FFB4AD01C(unk_0x95B959F18401C09A(), 4, 0);
							unk_0x66D901F8097E8E86(unk_0x95B959F18401C09A(), 0);
							bLocal_61 = true;
							bLocal_58 = false;
							func_54(4, 0);
						}
					}
				}
			}
			if (!bLocal_55)
			{
				if (bLocal_60)
				{
					if (!func_36())
					{
						if (unk_0x09287BFEE1D9F6EF(unk_0x95B959F18401C09A(), 0))
						{
							unk_0xE4F4DE6178AB3FC1("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
							unk_0xE4F4DE6178AB3FC1("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", 1, 1);
							bLocal_55 = true;
						}
					}
				}
				else if (unk_0x09287BFEE1D9F6EF(unk_0x95B959F18401C09A(), 0))
				{
					unk_0xE4F4DE6178AB3FC1("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0xE4F4DE6178AB3FC1("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", 1, 1);
					bLocal_55 = true;
				}
			}
			if (!bLocal_58)
			{
				if (func_15(vVar0, 4, 100, 0))
				{
					if (!bLocal_55)
					{
						if (bLocal_60)
						{
							if (!func_36())
							{
								unk_0xE4F4DE6178AB3FC1("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
								unk_0xE4F4DE6178AB3FC1("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", 1, 1);
								bLocal_55 = true;
							}
						}
						else
						{
							unk_0xE4F4DE6178AB3FC1("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
							unk_0xE4F4DE6178AB3FC1("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", 1, 1);
							bLocal_55 = true;
						}
					}
					func_35();
				}
			}
			iLocal_49 = 0;
		}
	}
	iLocal_49++;
}

void func_35()
{
	int iVar0;
	
	if (!iLocal_54)
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			iLocal_52[iVar0] = unk_0x6E6EB18FDAB9A074(vLocal_53[iVar0 /*3*/], 10f, 10f, 10f, 0f, 0, 7);
			iVar0++;
		}
		iLocal_54 = 1;
	}
}

int func_36()
{
	if (Global_15866 != 0 || unk_0x12BF789190D82474())
	{
		return 1;
	}
	return 0;
}

bool func_37(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_52(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_38(sParam2, iParam3, 0);
}

int func_38(char* sParam0, int iParam1, bool bParam2)
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
					func_51();
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
		if (func_50(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_49();
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
				func_43();
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
				if (func_42())
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
			if (func_41())
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
			func_40();
			Global_15876 = bParam2;
		}
		Global_15868 = iParam1;
		StringCopy(&Global_15485, sParam0, 24);
		Global_14732 = 0;
		func_39();
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
		func_51();
	}
	return 0;
}

void func_39()
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

void func_40()
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

int func_41()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_42()
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

void func_43()
{
	if (func_2(14))
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
		Global_14553 = func_44();
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

var func_44()
{
	func_45();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_45()
{
	int iVar0;
	
	if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
	{
		if (func_48(Global_106565.f_2357.f_539.f_4321) != unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()))
		{
			iVar0 = func_47(unk_0x33CD235DF1E6A94E());
			if (func_46(iVar0) && (!func_2(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_46(Global_106565.f_2357.f_539.f_4321))
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

bool func_46(int iParam0)
{
	return iParam0 < 3;
}

int func_47(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		iVar1 = unk_0x541D5C57194E73C4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_48(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_48(int iParam0)
{
	if (func_46(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_49()
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

bool func_50(int iParam0, int iParam1)
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

void func_51()
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

void func_52(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_53(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_54(int iParam0, int iParam1)
{
	unk_0x8950ED5730F62EE8(&Global_25923, iParam0);
	StringCopy(&(Global_25924[iParam0 /*6*/]), unk_0xD178EF744F20B712(), 24);
	Global_25979[iParam0] = iParam1;
}

void func_55(var uParam0, int iParam1)
{
	func_56(uParam0, iParam1);
}

void func_56(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_57(var uParam0, int iParam1)
{
	func_58(uParam0, iParam1);
}

void func_58(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_59()
{
	unk_0x71CA80D41E1338B4(joaat("s_m_m_security_01"));
	unk_0x71CA80D41E1338B4(joaat("s_m_m_prisguard_01"));
}

void func_60()
{
	func_62();
	func_61();
}

void func_61()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x765F6FEEFF39224F(Local_307.f_27[iVar0]) && !unk_0xD62C4419A41F106A(Local_307.f_27[iVar0], 0))
		{
			unk_0x697EBA5CF1A6AB57(Local_307.f_27[iVar0], joaat("weapon_assaultrifle"), -1, true, true);
			unk_0x3D258435016D9F74(Local_307.f_27[iVar0], 1000);
			unk_0x0648A75D3F60E864(Local_307.f_27[iVar0], -183807561);
			unk_0x9CBCE00F59BD6654(Local_307.f_27[iVar0], false);
			unk_0x4A852F02088ECC9D(Local_307.f_27[iVar0], true);
			if (!unk_0xBC2FC12AD0FBF72E(Local_307.f_27[iVar0]))
			{
				unk_0x089BDCEDF5972595(Local_307.f_27[iVar0], Local_307.f_14[iVar0], 0, 0, -1);
			}
		}
		iVar0++;
	}
}

void func_62()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x765F6FEEFF39224F(Local_307.f_27[iVar0]))
		{
			Local_307.f_27[iVar0] = unk_0x9BA5CF280376EEA4(6, joaat("s_m_m_prisguard_01"), Local_307[iVar0 /*3*/], Local_307.f_10[iVar0], 1, true);
			wait(0);
		}
		iVar0++;
	}
	vVar1 = { unk_0xCD1EDCB38767B47C(Local_307[1 /*3*/], Local_307.f_10[1], -2f, 0f, 0f) };
	vVar2 = { unk_0xCD1EDCB38767B47C(Local_307[1 /*3*/], Local_307.f_10[1], -1f, 0f, 0f) };
	vVar3 = { unk_0xCD1EDCB38767B47C(Local_307[2 /*3*/], Local_307.f_10[2], 1f, 0f, 0f) };
	vVar4 = { unk_0xCD1EDCB38767B47C(Local_307[2 /*3*/], Local_307.f_10[2], -1f, 0f, 0f) };
	Local_307.f_31[0] = unk_0x9BA5CF280376EEA4(6, joaat("s_m_m_prisguard_01"), vVar1, Local_307.f_10[1], 1, true);
	Local_307.f_31[1] = unk_0x9BA5CF280376EEA4(6, joaat("s_m_m_prisguard_01"), vVar2, Local_307.f_10[1], 1, true);
	Local_307.f_31[2] = unk_0x9BA5CF280376EEA4(6, joaat("s_m_m_prisguard_01"), vVar3, Local_307.f_10[2], 1, true);
	Local_307.f_31[3] = unk_0x9BA5CF280376EEA4(6, joaat("s_m_m_prisguard_01"), vVar4, Local_307.f_10[2], 1, true);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x765F6FEEFF39224F(Local_307.f_31[iVar0]))
		{
			unk_0x697EBA5CF1A6AB57(Local_307.f_31[iVar0], joaat("weapon_assaultrifle"), -1, true, true);
			unk_0x3D258435016D9F74(Local_307.f_31[iVar0], 500);
			unk_0x0648A75D3F60E864(Local_307.f_31[iVar0], -183807561);
			unk_0xB9F0674FFC455E48(Local_307.f_31[iVar0], 0);
			unk_0x4A852F02088ECC9D(Local_307.f_31[iVar0], true);
		}
		iVar0++;
	}
	unk_0x71CA80D41E1338B4(joaat("s_m_m_prisguard_01"));
}

void func_63()
{
	if (bLocal_294)
	{
		iLocal_289 = unk_0xC651C43AB13A15E5(joaat("polmav"), 10f, 10f, -30f, 0f, true, true, false);
		unk_0x9FABD0AB045A5D6E(iLocal_289, true, true, 0);
		unk_0x44D61A9D5B660538(iLocal_289);
		unk_0xC496DD5F2D1B6923(iLocal_289, 0f, 0f, 10f);
		unk_0x3D258435016D9F74(iLocal_289, 500);
		if (func_28())
		{
			bLocal_292 = true;
			unk_0x077F5A8B03703391(iLocal_289, 1, 0);
		}
		iLocal_290 = unk_0x9BA5CF280376EEA4(6, joaat("s_m_m_prisguard_01"), 10f, 10f, -20f, 0f, 1, true);
		unk_0x094626C0798AE1F8(iLocal_290, iLocal_289, -1);
		if (!unk_0xD62C4419A41F106A(iLocal_289, 0))
		{
			unk_0xCCFFBA26C1726838(iLocal_289, 101, "PrisonHeli", 1);
		}
		unk_0x71CA80D41E1338B4(joaat("polmav"));
	}
}

void func_64()
{
	func_69();
	func_68();
	func_67();
	func_66();
	func_65();
}

void func_65()
{
	Local_270[0 /*13*/][0 /*3*/] = { 1827.69f, 2474.181f, 61.7202f };
	Local_270[0 /*13*/][1 /*3*/] = { 1826.054f, 2478.934f, 61.7157f };
	Local_270[0 /*13*/][2 /*3*/] = { 1820.909f, 2477.528f, 61.7153f };
	Local_270[0 /*13*/][3 /*3*/] = { 1822.585f, 2472.122f, 61.7167f };
	unk_0x11EB963358E13D24("miss_Tower_01");
	unk_0x4AF4743D9BAB178B(0, "WORLD_HUMAN_GUARD_STAND", Local_270[0 /*13*/][0 /*3*/], 1879.944f, 2461.988f, 53.5496f, unk_0x9EC3B269A34A2BEE(5000, 10000));
	unk_0x4AF4743D9BAB178B(1, "WORLD_HUMAN_GUARD_STAND", Local_270[0 /*13*/][1 /*3*/], 1831.631f, 2522.218f, 54.1376f, unk_0x9EC3B269A34A2BEE(5000, 10000));
	unk_0x4AF4743D9BAB178B(2, "WORLD_HUMAN_GUARD_STAND", Local_270[0 /*13*/][2 /*3*/], 1789.07f, 2490.558f, 54.1381f, unk_0x9EC3B269A34A2BEE(5000, 10000));
	unk_0x4AF4743D9BAB178B(3, "WORLD_HUMAN_GUARD_STAND", Local_270[0 /*13*/][3 /*3*/], 1789.8f, 2426.876f, 44.7729f, unk_0x9EC3B269A34A2BEE(5000, 10000));
	unk_0x301705FAF07CB0B2(0, 1);
	unk_0x301705FAF07CB0B2(1, 2);
	unk_0x301705FAF07CB0B2(2, 3);
	unk_0x301705FAF07CB0B2(3, 0);
	unk_0x46DFBE6BE64A00AB();
	unk_0x55B9AE8865784F30();
	Local_270[1 /*13*/][0 /*3*/] = { 1764.729f, 2409.139f, 61.7533f };
	Local_270[1 /*13*/][1 /*3*/] = { 1763.129f, 2413.976f, 61.7328f };
	Local_270[1 /*13*/][2 /*3*/] = { 1758.079f, 2411.984f, 61.7403f };
	Local_270[1 /*13*/][3 /*3*/] = { 1760.213f, 2406.827f, 61.7419f };
	unk_0x11EB963358E13D24("miss_Tower_02");
	unk_0x4AF4743D9BAB178B(0, "WORLD_HUMAN_GUARD_STAND", Local_270[1 /*13*/][0 /*3*/], 1879.944f, 2461.988f, 53.5496f, unk_0x9EC3B269A34A2BEE(5000, 10000));
	unk_0x4AF4743D9BAB178B(1, "WORLD_HUMAN_GUARD_STAND", Local_270[1 /*13*/][1 /*3*/], 1831.631f, 2522.218f, 54.1376f, unk_0x9EC3B269A34A2BEE(5000, 10000));
	unk_0x4AF4743D9BAB178B(2, "WORLD_HUMAN_GUARD_STAND", Local_270[1 /*13*/][2 /*3*/], 1789.07f, 2490.558f, 54.1381f, unk_0x9EC3B269A34A2BEE(5000, 10000));
	unk_0x4AF4743D9BAB178B(3, "WORLD_HUMAN_GUARD_STAND", Local_270[1 /*13*/][3 /*3*/], 1789.8f, 2426.876f, 44.7729f, unk_0x9EC3B269A34A2BEE(5000, 10000));
	unk_0x301705FAF07CB0B2(0, 1);
	unk_0x301705FAF07CB0B2(1, 2);
	unk_0x301705FAF07CB0B2(2, 3);
	unk_0x301705FAF07CB0B2(3, 0);
	unk_0x46DFBE6BE64A00AB();
	unk_0x55B9AE8865784F30();
	Local_270[2 /*13*/][0 /*3*/] = { 1658.829f, 2390.888f, 61.7462f };
	Local_270[2 /*13*/][1 /*3*/] = { 1662.521f, 2394.692f, 61.7532f };
	Local_270[2 /*13*/][2 /*3*/] = { 1658.854f, 2398.062f, 61.7573f };
	Local_270[2 /*13*/][3 /*3*/] = { 1655.15f, 2394.705f, 61.7429f };
	unk_0x11EB963358E13D24("miss_Tower_03");
	unk_0x4AF4743D9BAB178B(0, "WORLD_HUMAN_GUARD_STAND", Local_270[2 /*13*/][0 /*3*/], 1655.908f, 2349.021f, 55.1775f, unk_0x9EC3B269A34A2BEE(5000, 10000));
	unk_0x4AF4743D9BAB178B(1, "WORLD_HUMAN_GUARD_STAND", Local_270[2 /*13*/][1 /*3*/], 1733.875f, 2385.521f, 44.9049f, unk_0x9EC3B269A34A2BEE(5000, 10000));
	unk_0x4AF4743D9BAB178B(2, "WORLD_HUMAN_GUARD_STAND", Local_270[2 /*13*/][2 /*3*/], 1662.234f, 2446.357f, 44.5652f, unk_0x9EC3B269A34A2BEE(5000, 10000));
	unk_0x4AF4743D9BAB178B(3, "WORLD_HUMAN_GUARD_STAND", Local_270[2 /*13*/][3 /*3*/], 1524.631f, 2426.997f, 44.6212f, unk_0x9EC3B269A34A2BEE(5000, 10000));
	unk_0x301705FAF07CB0B2(0, 1);
	unk_0x301705FAF07CB0B2(1, 2);
	unk_0x301705FAF07CB0B2(2, 3);
	unk_0x301705FAF07CB0B2(3, 0);
	unk_0x46DFBE6BE64A00AB();
	unk_0x55B9AE8865784F30();
	Local_270[3 /*13*/][0 /*3*/] = { 1537.28f, 2468.338f, 61.7497f };
	Local_270[3 /*13*/][1 /*3*/] = { 1542.189f, 2465.756f, 61.7247f };
	Local_270[3 /*13*/][2 /*3*/] = { 1543.899f, 2470.971f, 61.7482f };
	Local_270[3 /*13*/][3 /*3*/] = { 1539.14f, 2473.264f, 61.7359f };
	unk_0x11EB963358E13D24("miss_Tower_04");
	unk_0x4AF4743D9BAB178B(0, "WORLD_HUMAN_GUARD_STAND", Local_270[3 /*13*/][0 /*3*/], 1455.081f, 2432.642f, 51.3366f, unk_0x9EC3B269A34A2BEE(5000, 10000));
	unk_0x4AF4743D9BAB178B(1, "WORLD_HUMAN_GUARD_STAND", Local_270[3 /*13*/][1 /*3*/], 1576.174f, 2407.076f, 44.8143f, unk_0x9EC3B269A34A2BEE(5000, 10000));
	unk_0x4AF4743D9BAB178B(2, "WORLD_HUMAN_GUARD_STAND", Local_270[3 /*13*/][2 /*3*/], 1578.1f, 2486.227f, 44.5655f, unk_0x9EC3B269A34A2BEE(5000, 10000));
	unk_0x4AF4743D9BAB178B(3, "WORLD_HUMAN_GUARD_STAND", Local_270[3 /*13*/][3 /*3*/], 1512.837f, 2560.419f, 44.8417f, unk_0x9EC3B269A34A2BEE(5000, 10000));
	unk_0x301705FAF07CB0B2(0, 1);
	unk_0x301705FAF07CB0B2(1, 2);
	unk_0x301705FAF07CB0B2(2, 3);
	unk_0x301705FAF07CB0B2(3, 0);
	unk_0x46DFBE6BE64A00AB();
	unk_0x55B9AE8865784F30();
	Local_270[4 /*13*/][0 /*3*/] = { 1535.098f, 2581.919f, 61.7312f };
	Local_270[4 /*13*/][1 /*3*/] = { 1535.124f, 2581.101f, 61.7002f };
	Local_270[4 /*13*/][2 /*3*/] = { 1538.325f, 2585.722f, 61.7251f };
	Local_270[4 /*13*/][3 /*3*/] = { 1534.679f, 2589.268f, 61.7123f };
	unk_0x11EB963358E13D24("miss_Tower_05");
	unk_0x4AF4743D9BAB178B(0, "WORLD_HUMAN_GUARD_STAND", Local_270[4 /*13*/][0 /*3*/], 1484.2f, 2584.409f, 51.9283f, unk_0x9EC3B269A34A2BEE(5000, 10000));
	unk_0x4AF4743D9BAB178B(1, "WORLD_HUMAN_GUARD_STAND", Local_270[4 /*13*/][1 /*3*/], 1535.154f, 2538.926f, 44.496f, unk_0x9EC3B269A34A2BEE(5000, 10000));
	unk_0x4AF4743D9BAB178B(2, "WORLD_HUMAN_GUARD_STAND", Local_270[4 /*13*/][2 /*3*/], 1570.661f, 2587.814f, 44.5655f, unk_0x9EC3B269A34A2BEE(5000, 10000));
	unk_0x4AF4743D9BAB178B(3, "WORLD_HUMAN_GUARD_STAND", Local_270[4 /*13*/][3 /*3*/], 1538.227f, 2655.531f, 44.9156f, unk_0x9EC3B269A34A2BEE(5000, 10000));
	unk_0x301705FAF07CB0B2(0, 1);
	unk_0x301705FAF07CB0B2(1, 2);
	unk_0x301705FAF07CB0B2(2, 3);
	unk_0x301705FAF07CB0B2(3, 0);
	unk_0x46DFBE6BE64A00AB();
	unk_0x55B9AE8865784F30();
	Local_270[5 /*13*/][0 /*3*/] = { 1566.921f, 2682.525f, 61.7716f };
	Local_270[5 /*13*/][1 /*3*/] = { 1567.927f, 2677.463f, 61.7741f };
	Local_270[5 /*13*/][2 /*3*/] = { 1572.574f, 2678.193f, 61.7702f };
	Local_270[5 /*13*/][3 /*3*/] = { 1572.359f, 2683.086f, 61.7664f };
	unk_0x11EB963358E13D24("miss_Tower_06");
	unk_0x4AF4743D9BAB178B(0, "WORLD_HUMAN_GUARD_STAND", Local_270[5 /*13*/][0 /*3*/], 1505.538f, 2727.242f, 37.6965f, unk_0x9EC3B269A34A2BEE(5000, 10000));
	unk_0x4AF4743D9BAB178B(1, "WORLD_HUMAN_GUARD_STAND", Local_270[5 /*13*/][1 /*3*/], 1545.95f, 2632.524f, 44.7178f, unk_0x9EC3B269A34A2BEE(5000, 10000));
	unk_0x4AF4743D9BAB178B(2, "WORLD_HUMAN_GUARD_STAND", Local_270[5 /*13*/][2 /*3*/], 1599.355f, 2658.319f, 44.5652f, unk_0x9EC3B269A34A2BEE(5000, 10000));
	unk_0x4AF4743D9BAB178B(3, "WORLD_HUMAN_GUARD_STAND", Local_270[5 /*13*/][3 /*3*/], 1599.041f, 2713.393f, 44.4309f, unk_0x9EC3B269A34A2BEE(5000, 10000));
	unk_0x301705FAF07CB0B2(0, 1);
	unk_0x301705FAF07CB0B2(1, 2);
	unk_0x301705FAF07CB0B2(2, 3);
	unk_0x301705FAF07CB0B2(3, 0);
	unk_0x46DFBE6BE64A00AB();
	unk_0x55B9AE8865784F30();
	Local_270[6 /*13*/][0 /*3*/] = { 1648.104f, 2761.528f, 61.9103f };
	Local_270[6 /*13*/][1 /*3*/] = { 1646.051f, 2756.671f, 61.9091f };
	Local_270[6 /*13*/][2 /*3*/] = { 1651.533f, 2754.668f, 61.9021f };
	Local_270[6 /*13*/][3 /*3*/] = { 1653.125f, 2759.327f, 61.9056f };
	unk_0x11EB963358E13D24("miss_Tower_07");
	unk_0x4AF4743D9BAB178B(0, "WORLD_HUMAN_GUARD_STAND", Local_270[6 /*13*/][0 /*3*/], 1606.661f, 2815.673f, 37.9512f, unk_0x9EC3B269A34A2BEE(5000, 10000));
	unk_0x4AF4743D9BAB178B(1, "WORLD_HUMAN_GUARD_STAND", Local_270[6 /*13*/][1 /*3*/], 1602.887f, 2721.398f, 44.651f, unk_0x9EC3B269A34A2BEE(5000, 10000));
	unk_0x4AF4743D9BAB178B(2, "WORLD_HUMAN_GUARD_STAND", Local_270[6 /*13*/][2 /*3*/], 1599.355f, 2658.319f, 44.5652f, unk_0x9EC3B269A34A2BEE(5000, 10000));
	unk_0x4AF4743D9BAB178B(3, "WORLD_HUMAN_GUARD_STAND", Local_270[6 /*13*/][3 /*3*/], 1719.225f, 2766.111f, 44.6846f, unk_0x9EC3B269A34A2BEE(5000, 10000));
	unk_0x301705FAF07CB0B2(0, 1);
	unk_0x301705FAF07CB0B2(1, 2);
	unk_0x301705FAF07CB0B2(2, 3);
	unk_0x301705FAF07CB0B2(3, 0);
	unk_0x46DFBE6BE64A00AB();
	unk_0x55B9AE8865784F30();
	Local_270[7 /*13*/][0 /*3*/] = { 1774.523f, 2766.559f, 61.9143f };
	Local_270[7 /*13*/][1 /*3*/] = { 1769.768f, 2763.816f, 61.9248f };
	Local_270[7 /*13*/][2 /*3*/] = { 1772.442f, 2759.139f, 61.9193f };
	Local_270[7 /*13*/][3 /*3*/] = { 1776.893f, 2762.356f, 61.9258f };
	unk_0x11EB963358E13D24("miss_Tower_08");
	unk_0x4AF4743D9BAB178B(0, "WORLD_HUMAN_GUARD_STAND", Local_270[7 /*13*/][0 /*3*/], 1783.204f, 2811.375f, 44.4414f, unk_0x9EC3B269A34A2BEE(5000, 10000));
	unk_0x4AF4743D9BAB178B(1, "WORLD_HUMAN_GUARD_STAND", Local_270[7 /*13*/][1 /*3*/], 1709.275f, 2764.432f, 44.5747f, unk_0x9EC3B269A34A2BEE(5000, 10000));
	unk_0x4AF4743D9BAB178B(2, "WORLD_HUMAN_GUARD_STAND", Local_270[7 /*13*/][2 /*3*/], 1599.355f, 2658.319f, 44.5652f, unk_0x9EC3B269A34A2BEE(5000, 10000));
	unk_0x4AF4743D9BAB178B(3, "WORLD_HUMAN_GUARD_STAND", Local_270[7 /*13*/][3 /*3*/], 1822.456f, 2749.189f, 44.9326f, unk_0x9EC3B269A34A2BEE(5000, 10000));
	unk_0x301705FAF07CB0B2(0, 1);
	unk_0x301705FAF07CB0B2(1, 2);
	unk_0x301705FAF07CB0B2(2, 3);
	unk_0x301705FAF07CB0B2(3, 0);
	unk_0x46DFBE6BE64A00AB();
	unk_0x55B9AE8865784F30();
	Local_270[9 /*13*/][0 /*3*/] = { 1824.288f, 2625.042f, 61.9749f };
	Local_270[9 /*13*/][1 /*3*/] = { 1820.524f, 2621.49f, 61.9951f };
	Local_270[9 /*13*/][2 /*3*/] = { 1820.414f, 2621.544f, 61.9908f };
	Local_270[9 /*13*/][3 /*3*/] = { 1823.45f, 2617.477f, 61.9829f };
	unk_0x11EB963358E13D24("miss_Tower_10");
	unk_0x4AF4743D9BAB178B(0, "WORLD_HUMAN_GUARD_STAND", Local_270[9 /*13*/][0 /*3*/], 1606.661f, 2815.673f, 37.9512f, unk_0x9EC3B269A34A2BEE(5000, 10000));
	unk_0x4AF4743D9BAB178B(1, "WORLD_HUMAN_GUARD_STAND", Local_270[9 /*13*/][1 /*3*/], 1602.887f, 2721.398f, 44.651f, unk_0x9EC3B269A34A2BEE(5000, 10000));
	unk_0x4AF4743D9BAB178B(2, "WORLD_HUMAN_GUARD_STAND", Local_270[9 /*13*/][2 /*3*/], 1599.355f, 2658.319f, 44.5652f, unk_0x9EC3B269A34A2BEE(5000, 10000));
	unk_0x4AF4743D9BAB178B(3, "WORLD_HUMAN_GUARD_STAND", Local_270[9 /*13*/][3 /*3*/], 1719.225f, 2766.111f, 44.6846f, unk_0x9EC3B269A34A2BEE(5000, 10000));
	unk_0x301705FAF07CB0B2(0, 1);
	unk_0x301705FAF07CB0B2(1, 2);
	unk_0x301705FAF07CB0B2(2, 3);
	unk_0x301705FAF07CB0B2(3, 0);
	unk_0x46DFBE6BE64A00AB();
	unk_0x55B9AE8865784F30();
}

void func_66()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x765F6FEEFF39224F(Local_252.f_64[iVar0]) && !unk_0xD62C4419A41F106A(Local_252.f_64[iVar0], 0))
		{
			unk_0x0648A75D3F60E864(Local_252.f_64[iVar0], -183807561);
			unk_0x5FEE418CE11E6DDE(Local_252.f_64[iVar0], 132, true);
			unk_0x16D56D398FB73BE7(Local_252.f_64[iVar0], 300f, 10);
			unk_0x18E5E2B41CD6CE17(Local_252.f_64[iVar0], 1000f);
			unk_0xF1D4D3425A1FAF38(Local_252.f_64[iVar0], 1000f);
			unk_0x5F9955D3E93BCC84(Local_252.f_64[iVar0], 1000f);
			unk_0x52F5AAAD4824B17E(Local_252.f_64[iVar0], 2);
			unk_0x28F648743D7DE312(Local_252.f_64[iVar0], 13, true);
			unk_0x28F648743D7DE312(Local_252.f_64[iVar0], 0, false);
			unk_0x9E280E42C0773A3A(Local_252.f_64[iVar0], 1);
			unk_0x34A51926277F67BC(Local_252.f_64[iVar0], 1);
			unk_0x318780EBA3E142A0(Local_252.f_64[iVar0], 0f);
			unk_0x897EF720254BBEA3(Local_252.f_64[iVar0], true);
			unk_0xDE9FF07CFD5DC172(Local_252.f_64[iVar0], 20);
			unk_0x1E0350F1D7702D6A(Local_252.f_64[iVar0], 2);
			unk_0x28F648743D7DE312(Local_252.f_64[iVar0], 23, false);
			unk_0x697EBA5CF1A6AB57(Local_252.f_64[iVar0], joaat("weapon_sniperrifle"), -1, true, true);
			unk_0x3D258435016D9F74(Local_252.f_64[iVar0], 1000);
			unk_0x4A852F02088ECC9D(Local_252.f_64[iVar0], true);
			unk_0x18E5E2B41CD6CE17(Local_252.f_64[iVar0], 1000f);
			if (!unk_0xBC2FC12AD0FBF72E(Local_252.f_64[iVar0]))
			{
				if (iVar0 == 0)
				{
					unk_0x67AD0714691BDFF0(Local_252.f_64[iVar0], "miss_Tower_01", 1, 0, 1);
				}
				else if (iVar0 == 1)
				{
					unk_0x67AD0714691BDFF0(Local_252.f_64[iVar0], "miss_Tower_02", 1, 0, 1);
				}
				else if (iVar0 == 2)
				{
					unk_0x67AD0714691BDFF0(Local_252.f_64[iVar0], "miss_Tower_03", 1, 0, 1);
				}
				else if (iVar0 == 3)
				{
					unk_0x67AD0714691BDFF0(Local_252.f_64[iVar0], "miss_Tower_04", 1, 0, 1);
				}
				else if (iVar0 == 4)
				{
					unk_0x67AD0714691BDFF0(Local_252.f_64[iVar0], "miss_Tower_05", 1, 0, 1);
				}
				else if (iVar0 == 5)
				{
					unk_0x67AD0714691BDFF0(Local_252.f_64[iVar0], "miss_Tower_06", 1, 0, 1);
				}
				else if (iVar0 == 6)
				{
					unk_0x67AD0714691BDFF0(Local_252.f_64[iVar0], "miss_Tower_07", 1, 0, 1);
				}
				else if (iVar0 == 7)
				{
					unk_0x67AD0714691BDFF0(Local_252.f_64[iVar0], "miss_Tower_08", 1, 0, 1);
				}
				else if (iVar0 == 9)
				{
					unk_0x67AD0714691BDFF0(Local_252.f_64[iVar0], "miss_Tower_10", 1, 0, 1);
				}
				else
				{
					unk_0x089BDCEDF5972595(Local_252.f_64[iVar0], Local_252.f_42[iVar0], 0, 0, -1);
				}
			}
		}
		iVar0++;
	}
}

void func_67()
{
	int iVar0;
	
	if (!unk_0x73E7A21FD53144AB(1823.845f, 2621.267f, 57f, 0.5f))
	{
		iLocal_263[0] = unk_0xC651C43AB13A15E5(joaat("polmav"), 1823.845f, 2621.267f, 57f, 53f, true, true, false);
		if (unk_0x765F6FEEFF39224F(iLocal_263[0]) && !unk_0xD62C4419A41F106A(iLocal_263[0], 0))
		{
			iLocal_264[0] = unk_0xE196503B36B6194B(iLocal_263[0], 6, joaat("s_m_m_prisguard_01"), -1, 1, true);
			unk_0x6B8FD1D1616EE677(iLocal_264[0], false);
			unk_0x0648A75D3F60E864(iLocal_264[0], iLocal_250);
			unk_0x23298AB8A7D0F403(iLocal_263[0], false, 0);
			unk_0x0CDD28A9DFCE2FCE(iLocal_263[0], false, 0);
			unk_0x6B8FD1D1616EE677(iLocal_263[0], false);
			unk_0xF70578F5CD9822CB(iLocal_263[0], true);
		}
		wait(0);
	}
	if (!unk_0x73E7A21FD53144AB(1761.418f, 2410.378f, 61f, 0.5f))
	{
		iLocal_263[1] = unk_0xC651C43AB13A15E5(joaat("polmav"), 1761.418f, 2410.378f, 61f, 13f, true, true, false);
		if (unk_0x765F6FEEFF39224F(iLocal_263[1]) && !unk_0xD62C4419A41F106A(iLocal_263[1], 0))
		{
			iLocal_264[1] = unk_0xE196503B36B6194B(iLocal_263[1], 6, joaat("s_m_m_prisguard_01"), -1, 1, true);
			unk_0x6B8FD1D1616EE677(iLocal_264[1], false);
			unk_0x0648A75D3F60E864(iLocal_264[1], iLocal_250);
			unk_0x23298AB8A7D0F403(iLocal_263[1], false, 0);
			unk_0x0CDD28A9DFCE2FCE(iLocal_263[1], false, 0);
			unk_0x6B8FD1D1616EE677(iLocal_263[1], false);
			unk_0xF70578F5CD9822CB(iLocal_263[1], true);
		}
		wait(0);
	}
	if (!unk_0x73E7A21FD53144AB(1534.635f, 2585.162f, 61f, 0.5f))
	{
		iLocal_263[2] = unk_0xC651C43AB13A15E5(joaat("polmav"), 1534.635f, 2585.162f, 61f, 250f, true, true, false);
		if (unk_0x765F6FEEFF39224F(iLocal_263[2]) && !unk_0xD62C4419A41F106A(iLocal_263[2], 0))
		{
			iLocal_264[2] = unk_0xE196503B36B6194B(iLocal_263[2], 6, joaat("s_m_m_prisguard_01"), -1, 1, true);
			unk_0x6B8FD1D1616EE677(iLocal_264[2], false);
			unk_0x0648A75D3F60E864(iLocal_264[2], iLocal_250);
			unk_0x23298AB8A7D0F403(iLocal_263[2], false, 0);
			unk_0x0CDD28A9DFCE2FCE(iLocal_263[2], false, 0);
			unk_0x6B8FD1D1616EE677(iLocal_263[2], false);
			unk_0xF70578F5CD9822CB(iLocal_263[2], true);
		}
		wait(0);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if ((unk_0x765F6FEEFF39224F(iLocal_264[iVar0]) && !unk_0xD62C4419A41F106A(iLocal_264[iVar0], 0)) && !unk_0xD62C4419A41F106A(iLocal_263[iVar0], 0))
		{
			if (func_28())
			{
				iLocal_265[iVar0] = 1;
				unk_0x077F5A8B03703391(iLocal_263[iVar0], 1, 0);
			}
		}
		iVar0++;
	}
}

void func_68()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!unk_0x765F6FEEFF39224F(Local_252.f_64[iVar0]))
		{
			Local_252.f_64[iVar0] = unk_0x9BA5CF280376EEA4(6, joaat("s_m_m_prisguard_01"), Local_252[iVar0 /*3*/], Local_252.f_31[iVar0], 1, true);
			unk_0x71CA80D41E1338B4(joaat("s_m_m_prisguard_01"));
			wait(0);
		}
		iVar0++;
	}
}

void func_69()
{
	Local_252[0 /*3*/] = { 1827.69f, 2474.181f, 61.7202f };
	Local_252[1 /*3*/] = { 1764.729f, 2409.139f, 61.7533f };
	Local_252[2 /*3*/] = { 1658.829f, 2390.888f, 61.7462f };
	Local_252[3 /*3*/] = { 1537.28f, 2468.338f, 61.7497f };
	Local_252[4 /*3*/] = { 1530.493f, 2585.172f, 61.7001f };
	Local_252[5 /*3*/] = { 1566.921f, 2682.525f, 61.7716f };
	Local_252[6 /*3*/] = { 1648.104f, 2761.528f, 61.9103f };
	Local_252[7 /*3*/] = { 1774.523f, 2766.559f, 61.9143f };
	Local_252[8 /*3*/] = { 1852.475f, 2697.632f, 61.9547f };
	Local_252[9 /*3*/] = { 1824.288f, 2625.042f, 61.9749f };
	Local_252.f_31[0] = 248.9733f;
	Local_252.f_31[1] = 45.8793f;
	Local_252.f_31[2] = 186.3656f;
	Local_252.f_31[3] = 313.5206f;
	Local_252.f_31[4] = 95.9574f;
	Local_252.f_31[5] = 289.3531f;
	Local_252.f_31[6] = 13.7511f;
	Local_252.f_31[7] = 0f;
	Local_252.f_31[8] = 208.5786f;
	Local_252.f_31[9] = 280.9389f;
}

int func_70()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		while (!unk_0xB6596C29F3179D0C(Local_307.f_14[iVar0]))
		{
			wait(0);
		}
		iVar0++;
	}
	return 1;
}

int func_71()
{
	if (bLocal_298)
	{
		if (!unk_0x5D98D654CDC2165A(joaat("s_m_y_prisoner_01")))
		{
			return 0;
		}
	}
	return 1;
}

int func_72()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!unk_0xB6596C29F3179D0C(Local_252.f_42[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	if (!unk_0x5D98D654CDC2165A(joaat("polmav")))
	{
		return 0;
	}
	if (!unk_0x5D98D654CDC2165A(joaat("s_m_m_prisguard_01")))
	{
		return 0;
	}
	return 1;
}

int func_73()
{
	if (bLocal_294)
	{
		if (!unk_0x5D98D654CDC2165A(joaat("polmav")))
		{
			return 0;
		}
		if (!unk_0x371855A6F27F144B(101, "PrisonHeli"))
		{
			return 0;
		}
	}
	return 1;
}

int func_74()
{
	if (!unk_0x5D98D654CDC2165A(joaat("s_m_m_security_01")))
	{
		return 0;
	}
	if (!unk_0x5D98D654CDC2165A(joaat("s_m_m_prisguard_01")))
	{
		return 0;
	}
	if (!unk_0x5D98D654CDC2165A(joaat("polmav")))
	{
		return 0;
	}
	return 1;
}

void func_75()
{
	int iVar0;
	
	func_76();
	iVar0 = 0;
	while (iVar0 < 3)
	{
		unk_0xBC6AA949398C551E(Local_307.f_14[iVar0]);
		iVar0++;
	}
}

void func_76()
{
	Local_307[0 /*3*/] = { 1768.628f, 2538.97f, 44.4054f };
	Local_307[1 /*3*/] = { 1633.613f, 2498.849f, 44.4117f };
	Local_307[2 /*3*/] = { 1622.61f, 2555.683f, 44.4051f };
	Local_307.f_10[0] = 0f;
	Local_307.f_10[1] = 0f;
	Local_307.f_10[2] = 198.4323f;
	Local_307.f_14[0] = "PatrolGuard02";
	Local_307.f_14[1] = "PatrolGuard03";
	Local_307.f_14[2] = "PatrolGuard04";
}

void func_77()
{
	int iVar0;
	
	Local_252.f_42[0] = "TowerGuard01";
	Local_252.f_42[1] = "TowerGuard02";
	Local_252.f_42[2] = "TowerGuard03";
	Local_252.f_42[3] = "TowerGuard04";
	Local_252.f_42[4] = "TowerGuard05";
	Local_252.f_42[5] = "TowerGuard06";
	Local_252.f_42[6] = "TowerGuard07";
	Local_252.f_42[7] = "TowerGuard08";
	Local_252.f_42[8] = "TowerGuard09";
	Local_252.f_42[9] = "TowerGuard10";
	iVar0 = 0;
	while (iVar0 < 10)
	{
		unk_0xBC6AA949398C551E(Local_252.f_42[iVar0]);
		iVar0++;
	}
	unk_0xB815670C37E03CDE(joaat("polmav"));
	unk_0xB815670C37E03CDE(joaat("s_m_m_prisguard_01"));
}

void func_78()
{
	bLocal_294 = false;
	if (func_28())
	{
		iLocal_295 = (unk_0x9EC3B269A34A2BEE(0, 65535) % 2);
		if (iLocal_295 == 0)
		{
			bLocal_294 = true;
			unk_0xB815670C37E03CDE(joaat("polmav"));
			unk_0xD51062C52BCD2AE8(101, "PrisonHeli");
		}
		else
		{
			bLocal_294 = false;
		}
	}
}

void func_79()
{
	unk_0xB815670C37E03CDE(joaat("s_m_m_security_01"));
	unk_0xB815670C37E03CDE(joaat("s_m_m_prisguard_01"));
	unk_0xB815670C37E03CDE(joaat("polmav"));
}

void func_80()
{
	iLocal_249 = iLocal_249;
	iLocal_249 = 0;
	func_81();
	func_34();
	Local_70.f_4 = 75;
	Local_70.f_6 = 15;
	unk_0xCCBED19EF0483C96(joaat("prop_gate_prison_01"), 1845f, 2605f, 45f, 1, 0f, 0f, 0f);
	unk_0xCCBED19EF0483C96(joaat("prop_gate_prison_01"), 1819.274f, 2608.537f, 44.6195f, 1, 0f, 50f, 0f);
	unk_0x9315FCF6CFE2AB41("Prison_Guards", &iLocal_250);
	unk_0x9315FCF6CFE2AB41("Prison_Prisoners", &iLocal_251);
	unk_0xD2E80177F27FD43F(2, iLocal_250, iLocal_251);
	unk_0xD2E80177F27FD43F(2, iLocal_251, iLocal_250);
	unk_0xD2E80177F27FD43F(1, iLocal_250, -1533126372);
	unk_0xD2E80177F27FD43F(1, -1533126372, iLocal_250);
	unk_0xD2E80177F27FD43F(3, 1862763509, iLocal_251);
	unk_0xD2E80177F27FD43F(3, iLocal_251, 1862763509);
}

void func_81()
{
	vLocal_53[0 /*3*/] = { 1809.816f, 2482.877f, 44.4744f };
	vLocal_53[1 /*3*/] = { 1755.823f, 2424.904f, 44.4319f };
	vLocal_53[2 /*3*/] = { 1661.2f, 2410.096f, 44.4265f };
	vLocal_53[3 /*3*/] = { 1555.966f, 2476.43f, 44.4042f };
	vLocal_53[4 /*3*/] = { 1549.141f, 2583.103f, 44.4225f };
	vLocal_53[5 /*3*/] = { 1581.156f, 2671.974f, 44.481f };
	vLocal_53[6 /*3*/] = { 1655.49f, 2743.69f, 44.4665f };
	vLocal_53[7 /*3*/] = { 1768.776f, 2748.527f, 44.4402f };
	vLocal_53[8 /*3*/] = { 1831.2f, 2696f, 44.4578f };
	vLocal_53[9 /*3*/] = { 1803.121f, 2617.781f, 44.5082f };
	vLocal_53[10 /*3*/] = { 1817.221f, 2608.387f, 44.6204f };
	vLocal_53[11 /*3*/] = { 1843.838f, 2608.361f, 44.6178f };
}

void func_82()
{
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		if ((unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), 1879.956f, 2705.097f, 52.07341f, 1869.859f, 2726.776f, 59.82338f, 24.75f, 0, true, 0) || unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), 1833.113f, 2520.888f, 52.26086f, 1833.115f, 2554.431f, 61.25998f, 15f, 0, true, 0)) || unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), 1832.742f, 2568.421f, 48.87375f, 1833.015f, 2596.529f, 57.12439f, 27.75f, 0, true, 0))
		{
			if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) == 0)
			{
				unk_0x98F04A4FFB4AD01C(unk_0x95B959F18401C09A(), 2, 0);
				unk_0x66D901F8097E8E86(unk_0x95B959F18401C09A(), 0);
			}
		}
	}
	if (!iLocal_56)
	{
		if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
		{
			if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), 1917.889f, 2618.476f, -45.677f, 1822.889f, 2618.476f, 45.677f, 195f, 0, false, 0))
			{
				if (unk_0x60F149B1E077551D(unk_0x95B959F18401C09A()))
				{
					unk_0x98F04A4FFB4AD01C(unk_0x95B959F18401C09A(), 4, 0);
					unk_0x66D901F8097E8E86(unk_0x95B959F18401C09A(), 0);
					unk_0xD2E80177F27FD43F(5, 1862763509, -183807561);
					unk_0xD2E80177F27FD43F(5, -183807561, 1862763509);
					iLocal_56 = 1;
				}
				if ((unk_0x416C37C19CCE0077(1874.072f, 2605.423f, 44.6723f, 100f, 1) && !unk_0x7E8740F26D4CAB87(unk_0x95B959F18401C09A())) || (unk_0x5DACF31D3AC5ED8D(unk_0x33CD235DF1E6A94E()) && !unk_0x60F149B1E077551D(unk_0x95B959F18401C09A())))
				{
					unk_0x66D901F8097E8E86(unk_0x95B959F18401C09A(), 0);
					unk_0x98F04A4FFB4AD01C(unk_0x95B959F18401C09A(), 1, 0);
					unk_0xD2E80177F27FD43F(5, 1862763509, -183807561);
					unk_0xD2E80177F27FD43F(5, -183807561, 1862763509);
					iLocal_56 = 1;
				}
			}
		}
	}
}

void func_83(bool bParam0)
{
	int iVar0;
	
	func_89();
	func_88();
	func_87();
	func_86();
	func_85();
	func_84();
	unk_0x4CCF49FD38F157B1("PRISON_ALARMS", true);
	if (iLocal_56)
	{
		unk_0xD2E80177F27FD43F(2, 1862763509, -183807561);
		unk_0xD2E80177F27FD43F(2, -183807561, 1862763509);
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (unk_0xB0D69EC116526983(iLocal_52[iVar0]))
		{
			unk_0xF4BF002874250DB7(iLocal_52[iVar0]);
		}
		iVar0++;
	}
	unk_0xCCBED19EF0483C96(joaat("prop_gate_prison_01"), 1845f, 2605f, 45f, 1, 0f, 0f, 0f);
	unk_0xCCBED19EF0483C96(joaat("prop_gate_prison_01"), 1819.274f, 2608.537f, 44.6195f, 1, 0f, 50f, 0f);
	if (bParam0)
	{
		unk_0xCE04CE961AF41AB9(1695.1f, 2595.8f, 50f, 1000f, 1, 0, 0, false);
	}
	unk_0x5894DC159447E10A();
}

void func_84()
{
	if (unk_0x765F6FEEFF39224F(iLocal_66))
	{
		unk_0x65F544B458249682(&iLocal_66);
	}
	if (unk_0x765F6FEEFF39224F(iLocal_68))
	{
		unk_0x1F45B4626AC4A4C0(&iLocal_68);
	}
	if (unk_0x765F6FEEFF39224F(iLocal_67))
	{
		unk_0x65F544B458249682(&iLocal_67);
	}
	if (unk_0x765F6FEEFF39224F(iLocal_69))
	{
		unk_0x1F45B4626AC4A4C0(&iLocal_69);
	}
}

void func_85()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x765F6FEEFF39224F(Local_307.f_27[iVar0]))
		{
			if (unk_0xE38E3CF1625A4145(Local_307.f_36[iVar0]))
			{
				unk_0x1ABDB383C83A336A(&(Local_307.f_36[iVar0]));
			}
			if (unk_0xC30D5C4DCAC8020A(Local_307.f_27[iVar0]))
			{
				unk_0x4B8B69DAE5BAC592(&(Local_307.f_27[iVar0]));
			}
			else
			{
				unk_0x1F45B4626AC4A4C0(&(Local_307.f_27[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x765F6FEEFF39224F(Local_307.f_31[iVar0]))
		{
			if (unk_0xE38E3CF1625A4145(Local_307.f_40[iVar0]))
			{
				unk_0x1ABDB383C83A336A(&(Local_307.f_40[iVar0]));
			}
			if (unk_0xC30D5C4DCAC8020A(Local_307.f_31[iVar0]))
			{
				unk_0x4B8B69DAE5BAC592(&(Local_307.f_31[iVar0]));
			}
			else
			{
				unk_0x1F45B4626AC4A4C0(&(Local_307.f_31[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_86()
{
	if (unk_0xE38E3CF1625A4145(iLocal_301))
	{
		unk_0x1ABDB383C83A336A(&iLocal_301);
	}
	if (unk_0x765F6FEEFF39224F(iLocal_299))
	{
		unk_0x7AC8DF0B83EB4C6B(&iLocal_299);
	}
}

void func_87()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (unk_0x765F6FEEFF39224F(uLocal_296[iVar0]))
		{
			if (unk_0xE38E3CF1625A4145(uLocal_297[iVar0]))
			{
				unk_0x1ABDB383C83A336A(&(uLocal_297[iVar0]));
			}
			unk_0x4B8B69DAE5BAC592(&(uLocal_296[iVar0]));
		}
		iVar0++;
	}
}

void func_88()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x765F6FEEFF39224F(iLocal_263[iVar0]))
		{
			unk_0x7AC8DF0B83EB4C6B(&(iLocal_263[iVar0]));
		}
		if (unk_0x765F6FEEFF39224F(iLocal_264[iVar0]))
		{
			unk_0x4B8B69DAE5BAC592(&(iLocal_264[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x765F6FEEFF39224F(Local_252.f_64[iVar0]))
		{
			if (unk_0xE38E3CF1625A4145(Local_252.f_75[iVar0]))
			{
				unk_0x1ABDB383C83A336A(&(Local_252.f_75[iVar0]));
			}
			if (unk_0xC30D5C4DCAC8020A(Local_252.f_64[iVar0]))
			{
				unk_0x4B8B69DAE5BAC592(&(Local_252.f_64[iVar0]));
			}
			else
			{
				unk_0x1F45B4626AC4A4C0(&(Local_252.f_64[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_89()
{
	if (unk_0xE38E3CF1625A4145(iLocal_291))
	{
		unk_0x1ABDB383C83A336A(&iLocal_291);
	}
	if (unk_0x765F6FEEFF39224F(iLocal_289))
	{
		if (unk_0xC30D5C4DCAC8020A(iLocal_289))
		{
			unk_0x7AC8DF0B83EB4C6B(&iLocal_289);
			unk_0x4B8B69DAE5BAC592(&iLocal_290);
		}
		else
		{
			func_90(&iLocal_289, &iLocal_290);
			unk_0x65F544B458249682(&iLocal_289);
		}
	}
}

void func_90(int iParam0, var uParam1)
{
	if (((unk_0x765F6FEEFF39224F(*iParam0) && unk_0x765F6FEEFF39224F(*uParam1)) && !unk_0xD62C4419A41F106A(*iParam0, 0)) && !unk_0xD62C4419A41F106A(*uParam1, 0))
	{
		if (unk_0x7DD221C91135596A(*iParam0))
		{
			if (unk_0x4278060E716E1226(*iParam0))
			{
				if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
				{
					unk_0x4EA529533F2C0E2A(*uParam1, *iParam0, 0, 0, unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), 8, 50f, -1f, 30f, 100, 50, 1);
				}
			}
		}
	}
}

