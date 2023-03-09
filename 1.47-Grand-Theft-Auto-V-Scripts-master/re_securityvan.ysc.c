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
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
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
	vector3 vLocal_43 = { 0f, 0f, 0f };
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49[2] = { 0, 0 };
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	var uLocal_56[2] = { 0, 0 };
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	vector3 vLocal_61[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_62[2] = { 0f, 0f };
	vector3 vLocal_63 = { 0f, 0f, 0f };
	float fLocal_64 = 0f;
	vector3 vLocal_65 = { 0f, 0f, 0f };
	vector3 vLocal_66 = { 0f, 0f, 0f };
	vector3 vLocal_67 = { 0f, 0f, 0f };
	vector3 vLocal_68 = { 0f, 0f, 0f };
	vector3 vLocal_69 = { 0f, 0f, 0f };
	vector3 vLocal_70 = { 0f, 0f, 0f };
	vector3 vLocal_71 = { 0f, 0f, 0f };
	float fLocal_72 = 0f;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	bool bLocal_77 = 0;
	bool bLocal_78 = 0;
	bool bLocal_79 = 0;
	bool bLocal_80 = 0;
	bool bLocal_81 = 0;
	bool bLocal_82 = 0;
	bool bLocal_83 = 0;
	bool bLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88[2] = { 0, 0 };
	bool bLocal_89 = 0;
	bool bLocal_90 = 0;
	int iLocal_91[2] = { 0, 0 };
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	char[] cLocal_105[8] = 0;
	struct<10> Local_106[16];
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = -1;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 1000;
	var uLocal_121 = 1000;
	var uLocal_122 = 0;
	var uLocal_123 = 8;
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
	var uLocal_270 = 1;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	float fLocal_275 = 0f;
	vector3 vLocal_276 = { 0f, 0f, 0f };
	vector3 vLocal_277 = { 0f, 0f, 0f };
	int iLocal_278 = 0;
	vector3 vLocal_279 = { 0f, 0f, 0f };
	float fLocal_280 = 0f;
	int iLocal_281[2] = { 0, 0 };
	int iLocal_282 = 0;
	vector3 vLocal_283 = { 0f, 0f, 0f };
	vector3 vLocal_284 = { 0f, 0f, 0f };
	vector3 vLocal_285 = { 0f, 0f, 0f };
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	bool bLocal_288 = 0;
	int iLocal_289 = 0;
	float fLocal_290 = 0f;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	vector3 vLocal_293 = { 0f, 0f, 0f };
	int iLocal_294[2] = { 0, 0 };
	int iLocal_295 = 0;
	float fLocal_296 = 0f;
	float fLocal_297 = 0f;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300[2] = { 0, 0 };
	int iLocal_301[2] = { 0, 0 };
	struct<2> Local_302 = { 0, 5 } ;
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
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 5;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
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
	iLocal_18 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	vLocal_65 = { 0.0203f, -3.1441f, 0.5027f };
	vLocal_66 = { 90f, 0f, 0f };
	vLocal_68 = { 0f, 0f, 0f };
	vLocal_69 = { 0f, 0f, 0f };
	iLocal_95 = 1;
	iLocal_96 = 1;
	cLocal_105 = "RESECAU";
	iLocal_271 = -1;
	fLocal_275 = -3.55f;
	vLocal_276 = { 0.014f, -0.9111f, 1.2317f };
	vLocal_277 = { 0f, -3.4368f, 1.2317f };
	iLocal_286 = -1;
	iLocal_287 = -1;
	iLocal_295 = -1;
	vLocal_67 = { vLocal_67 };
	vLocal_67 = { ScriptParam_302.f_1[0 /*3*/] };
	if (vdist(vLocal_67, -337.3338f, -1460.373f, 29.5668f) < 5f)
	{
		iLocal_45 = 1;
	}
	else if (vdist(vLocal_67, -588.4711f, -866.9462f, 25.3292f) < 5f)
	{
		iLocal_45 = 2;
	}
	else if (vdist(vLocal_67, -389f, 6061f, 31f) < 5f)
	{
		iLocal_45 = 3;
	}
	else if (vdist(vLocal_67, -600f, -1094f, 22.76f) < 5f)
	{
		iLocal_45 = 4;
	}
	else if (vdist(vLocal_67, -1025f, -1086f, 2f) < 5f)
	{
		iLocal_45 = 5;
	}
	else if (vdist(vLocal_67, -595.5618f, -667.7235f, 31.0544f) < 5f)
	{
		iLocal_45 = 6;
	}
	else if (vdist(vLocal_67, 3018.384f, 3634.017f, 70.4076f) < 5f)
	{
		iLocal_45 = 7;
	}
	else if (vdist(vLocal_67, -2815.661f, 2208.171f, 27.8382f) < 5f)
	{
		iLocal_45 = 8;
	}
	else if (vdist(vLocal_67, 856.7742f, -2067.845f, 29.0704f) < 5f)
	{
		iLocal_45 = 9;
	}
	else if (vdist(vLocal_67, 805.1932f, -703.1327f, 28.1632f) < 5f)
	{
		iLocal_45 = 10;
	}
	else
	{
		unk_0x5894DC159447E10A();
	}
	if (Global_3)
	{
		if (iLocal_45 != 2)
		{
			unk_0x5894DC159447E10A();
		}
	}
	else
	{
		if (unk_0x9EC5BDC006623C42(11))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_49)
			{
				if (!unk_0xBC2FC12AD0FBF72E(iLocal_49[iVar0]))
				{
					if (unk_0x91D5C8283D19AF49(iLocal_50, 0))
					{
						if (!unk_0x10930B9CAD4111C2(iLocal_49[iVar0], iLocal_50, 0))
						{
							unk_0xC838CE9837D0ABAF(iLocal_49[iVar0], iLocal_50, -1, func_243(iLocal_50), 2f, 1, 0);
						}
					}
					else
					{
						unk_0x7D575FC8F42508D8(iLocal_49[iVar0], 10000);
					}
				}
				iVar0++;
			}
			func_226();
		}
		if (!func_186(vLocal_67, 9, iLocal_45, 1, 0))
		{
			unk_0x5894DC159447E10A();
		}
		else
		{
			func_183(-1);
		}
	}
	func_182();
	iLocal_59 = unk_0x0335D8135051EA56(vLocal_63 + Vector(30f, 30f, 30f), vLocal_63 - Vector(30f, 30f, 30f), 0, 1, 1, 1);
	while (true)
	{
		wait(0);
		func_179(&uLocal_123);
		if (!func_178())
		{
			if (func_177())
			{
				func_226();
			}
			unk_0x65F534DDBF48606F("RE_SV", 0);
			switch (iLocal_298)
			{
				case 0:
					if (unk_0xA80721FDC3BDCCDB() && !func_165())
					{
						if (func_156())
						{
							if ((iLocal_44 == 3 && !(unk_0x73E7A21FD53144AB(vLocal_63, 3f) && func_155(unk_0x33CD235DF1E6A94E(), vLocal_63, 1) < 150f)) || iLocal_44 != 3)
							{
								if (iLocal_44 == 3)
								{
									if (!unk_0x73E7A21FD53144AB(vLocal_63, 8f))
									{
										unk_0xCE04CE961AF41AB9(vLocal_63, 4f, 1, 0, 0, false);
									}
									iLocal_46 = 4;
									bLocal_79 = true;
								}
								else
								{
									iLocal_46 = 1;
								}
								func_154();
								if (unk_0x91D5C8283D19AF49(iLocal_50, 0) && iLocal_44 == 3)
								{
									unk_0x4522AD7364B6AA54(iLocal_50, 5f);
								}
								settimera(0);
								iLocal_298++;
							}
						}
					}
					else
					{
						func_226();
					}
					break;
				
				case 1:
					if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()) && unk_0x91D5C8283D19AF49(iLocal_50, 0))
					{
						if (((vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), unk_0xFBB1F99A825CAB09(iLocal_50, true)) < 10000f || !unk_0xC30D5C4DCAC8020A(iLocal_50)) || (!unk_0xBC2FC12AD0FBF72E(iLocal_49[0]) && !unk_0xC30D5C4DCAC8020A(iLocal_49[0]))) || (!unk_0xBC2FC12AD0FBF72E(iLocal_49[1]) && !unk_0xC30D5C4DCAC8020A(iLocal_49[1])))
						{
							iLocal_298++;
						}
					}
					if (func_153())
					{
						iLocal_298++;
					}
					if (iLocal_298 != 1)
					{
						settimera(0);
					}
					break;
				
				case 2:
					if (timera() > 2000)
					{
						if (iLocal_44 != 3)
						{
							func_148();
						}
					}
					if (unk_0x765F6FEEFF39224F(iLocal_50) && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
					{
						if (iLocal_44 == 3)
						{
							func_143();
							if (!unk_0xC30D5C4DCAC8020A(iLocal_50) && (vdist(unk_0xFBB1F99A825CAB09(iLocal_50, true), unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true)) < 100f || func_153()))
							{
								func_134(1);
							}
						}
						else if (((!unk_0xC30D5C4DCAC8020A(iLocal_50) && iLocal_46 == 4) || unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), vLocal_70, vLocal_71, fLocal_72, 0, true, 0)) || func_153())
						{
							func_134(1);
						}
						if ((iLocal_46 == 4 && unk_0xC30D5C4DCAC8020A(iLocal_50)) && iLocal_44 != 3)
						{
							if (vdist(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), unk_0xFBB1F99A825CAB09(iLocal_50, true)) > 100f)
							{
								func_226();
							}
							else
							{
								func_134(1);
							}
						}
					}
					break;
			}
			if (iLocal_298 > 0)
			{
				if (unk_0x91D5C8283D19AF49(iLocal_50, 0) && unk_0xC30D5C4DCAC8020A(iLocal_50))
				{
					if (vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), unk_0xFBB1F99A825CAB09(iLocal_50, true)) > 62500f)
					{
						func_226();
					}
					if (vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), unk_0xFBB1F99A825CAB09(iLocal_50, true)) > 10000f && !unk_0xA80721FDC3BDCCDB())
					{
						func_226();
					}
				}
			}
		}
		else
		{
			unk_0x4AE93B307FDB2941(unk_0x95B959F18401C09A());
			if (!unk_0xE38E3CF1625A4145(iLocal_57))
			{
				if (!func_133(2) && !bLocal_84)
				{
					if (!unk_0xFAC8F20FBC764F4D())
					{
						func_132("SV_VANHELP1", 15000);
						func_131(2);
					}
				}
				if (unk_0x765F6FEEFF39224F(iLocal_52))
				{
					if (iLocal_299 != 0)
					{
						if (vdist2(unk_0xFBB1F99A825CAB09(iLocal_52, true), unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true)) < pow(50f, 2f))
						{
							iLocal_299 = 0;
							func_130(&uLocal_111, 0, 0);
						}
					}
				}
				else if (((bLocal_79 && !unk_0xECCFCAB0A094EB5B(iLocal_103)) && unk_0x91D5C8283D19AF49(iLocal_50, 0)) && !bLocal_89)
				{
					if (iLocal_299 != 1)
					{
						if (vdist2(unk_0xFBB1F99A825CAB09(iLocal_50, true), unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true)) < pow(50f, 2f))
						{
							iLocal_299 = 1;
							func_130(&uLocal_111, 0, 0);
						}
					}
				}
				else if (unk_0xECCFCAB0A094EB5B(iLocal_103))
				{
					if (iLocal_299 != 2)
					{
						if (vdist2(unk_0x0F77516D457A04F5(iLocal_103), unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true)) < pow(50f, 2f))
						{
							iLocal_299 = 2;
							func_130(&uLocal_111, 0, 0);
						}
					}
				}
				if (iLocal_299 == 0)
				{
					if (unk_0x765F6FEEFF39224F(iLocal_52))
					{
						func_123(&uLocal_111, iLocal_52, 0, 0, 1, 1, 1);
						if (vdist2(unk_0xFBB1F99A825CAB09(iLocal_52, true), unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true)) > pow(50f, 2f))
						{
							iLocal_299 = -1;
							func_130(&uLocal_111, 0, 0);
						}
					}
				}
				else if (iLocal_299 == 1)
				{
					if (unk_0x91D5C8283D19AF49(iLocal_50, 0) && !unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iLocal_50, 1))
					{
						func_123(&uLocal_111, iLocal_50, 0, 0, 1, 1, 1);
						if (vdist2(unk_0xFBB1F99A825CAB09(iLocal_50, true), unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true)) > pow(50f, 2f))
						{
							iLocal_299 = -1;
							func_130(&uLocal_111, 0, 0);
						}
					}
				}
				else if (iLocal_299 == 2)
				{
					if (unk_0xECCFCAB0A094EB5B(iLocal_103))
					{
						func_98(&uLocal_111, unk_0x0F77516D457A04F5(iLocal_103), 0, 0, 1, 1, 1);
						if (vdist2(unk_0x0F77516D457A04F5(iLocal_103), unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true)) > pow(50f, 2f))
						{
							iLocal_299 = -1;
							func_130(&uLocal_111, 0, 0);
						}
					}
				}
				if (((!unk_0xD62C4419A41F106A(iLocal_50, 0) && bLocal_79) && !bLocal_81) && (!func_133(0) || (unk_0xEAF6E82C7BDE5A4C(unk_0x33CD235DF1E6A94E(), joaat("weapon_stickybomb"), 0) && !func_133(1))))
				{
					switch (iLocal_100)
					{
						case 0:
							if (!unk_0xFAC8F20FBC764F4D() && vdist2(unk_0xFBB1F99A825CAB09(iLocal_50, true), unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true)) < 225f)
							{
								func_132("SV_DOORHELP1", 15000);
								func_131(0);
								iLocal_100++;
							}
							break;
						
						case 1:
							if (!unk_0xFAC8F20FBC764F4D())
							{
								iLocal_101 = unk_0xE3903F59E2F22150();
								iLocal_100++;
							}
							break;
						
						case 2:
							if ((unk_0xE3903F59E2F22150() - iLocal_101) > 2000 && unk_0xEAF6E82C7BDE5A4C(unk_0x33CD235DF1E6A94E(), joaat("weapon_stickybomb"), 0))
							{
								func_132("SV_DOORHELP2", 15000);
								func_131(1);
								iLocal_100++;
							}
							break;
						}
				}
				if (bLocal_81 || bLocal_89)
				{
					if (func_97("SV_DOORHELP1") || func_97("SV_DOORHELP2"))
					{
						unk_0xEDF90B96BED57BCE(1);
					}
				}
			}
			switch (iLocal_46)
			{
				case 1:
					func_148();
					break;
				
				case 2:
					func_89();
					break;
				
				case 3:
					func_87();
					break;
				
				case 4:
					func_143();
					break;
				
				case 5:
					func_84();
					break;
				
				case 6:
					func_80();
					break;
				
				case 7:
					if (!unk_0xBC2FC12AD0FBF72E(iLocal_49[0]))
					{
						if (unk_0xF152E000CAF1FFFF(iLocal_49[0]) != 3)
						{
							unk_0x3309862CD9166E87(iLocal_49[0], 3);
						}
					}
					if (!unk_0xBC2FC12AD0FBF72E(iLocal_49[1]))
					{
						if (unk_0xF152E000CAF1FFFF(iLocal_49[1]) != 3)
						{
							unk_0x3309862CD9166E87(iLocal_49[1], 3);
						}
					}
					if (((!unk_0xBC2FC12AD0FBF72E(iLocal_49[0]) && !unk_0xD62C4419A41F106A(iLocal_49[0], 0)) && !unk_0xBC2FC12AD0FBF72E(iLocal_49[1])) && !unk_0xD62C4419A41F106A(iLocal_49[1], 0))
					{
						iLocal_95 = 1;
						func_73(iLocal_49[1]);
						func_71(0, 1);
					}
					else if (iLocal_95 == 1)
					{
						if (unk_0xBC2FC12AD0FBF72E(iLocal_49[1]) || unk_0xD62C4419A41F106A(iLocal_49[1], 0))
						{
							iLocal_48 = 0;
							iLocal_95 = 0;
						}
						else
						{
							func_73(iLocal_49[1]);
						}
					}
					else if (iLocal_95 == 0)
					{
						if (unk_0xBC2FC12AD0FBF72E(iLocal_49[0]) || unk_0xD62C4419A41F106A(iLocal_49[0], 0))
						{
							iLocal_95 = -1;
						}
						else
						{
							func_73(iLocal_49[0]);
						}
					}
					break;
				
				case 8:
					func_65();
					break;
				
				case 9:
					func_226();
					break;
			}
			if (func_63())
			{
				func_62(9);
			}
			if ((((unk_0x91D5C8283D19AF49(iLocal_50, 0) && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E())) && unk_0x7BDC41A7CA0C77A2(iLocal_50, -1, 0) == unk_0x33CD235DF1E6A94E()) && !bLocal_83) && iLocal_46 != 8)
			{
				if (bLocal_79)
				{
					func_62(8);
				}
				else
				{
					func_62(5);
				}
			}
			if (bLocal_80)
			{
				if (unk_0x9AA1574E00850065(iLocal_60, 1862763509) != 5)
				{
					unk_0xD2E80177F27FD43F(5, iLocal_60, 1862763509);
					unk_0xD2E80177F27FD43F(5, 1862763509, iLocal_60);
				}
			}
			if (bLocal_81)
			{
				if ((unk_0xECCFCAB0A094EB5B(iLocal_103) && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E())) && vdist(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), unk_0x0F77516D457A04F5(iLocal_103)) > 250f)
				{
					func_62(9);
				}
			}
			if (!bLocal_89)
			{
				if (func_61())
				{
					bLocal_89 = true;
				}
			}
			else
			{
				iVar1 = 1;
				iVar2 = 0;
				if (unk_0x765F6FEEFF39224F(iLocal_49[iVar2]))
				{
					if ((!unk_0xD62C4419A41F106A(iLocal_49[iVar2], 0) && !unk_0xBC2FC12AD0FBF72E(iLocal_49[iVar2])) && vdist2(unk_0xFBB1F99A825CAB09(iLocal_49[0], true), unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true)) < 10000f)
					{
						iVar1 = 0;
					}
				}
				if (unk_0x765F6FEEFF39224F(iLocal_50))
				{
					if (unk_0x91D5C8283D19AF49(iLocal_50, 0))
					{
						if (unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iLocal_50, 0))
						{
							iVar3 = 1;
						}
					}
					if ((vdist2(unk_0xFBB1F99A825CAB09(iLocal_50, true), unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true)) > 10000f && unk_0xC30D5C4DCAC8020A(iLocal_50)) || vdist2(unk_0xFBB1F99A825CAB09(iLocal_50, true), unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true)) > 62500f)
					{
						iVar3 = 1;
					}
				}
				if (iVar3 && iVar1)
				{
					func_37();
				}
			}
			func_33();
			func_28();
			func_23();
		}
		if (!bLocal_77)
		{
			if (func_22())
			{
				iLocal_93 = unk_0xE3903F59E2F22150();
				bLocal_77 = true;
			}
		}
		if (bLocal_77)
		{
			if (!bLocal_78)
			{
				if ((unk_0xE3903F59E2F22150() - iLocal_93) > 5000)
				{
					unk_0x98F04A4FFB4AD01C(unk_0x95B959F18401C09A(), 2, 0);
					if (func_21() < 30f)
					{
						if (func_4(&Local_106, cLocal_105, "RESEC_COPS", 8, 0, 0, 0))
						{
							bLocal_78 = true;
						}
					}
					else
					{
						bLocal_78 = true;
					}
				}
			}
		}
		if (((unk_0xE3903F59E2F22150() - iLocal_93) > 10000 && unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) > 0) && !iLocal_92)
		{
			iVar4 = unk_0x9EC3B269A34A2BEE(0, 3);
			if (iVar4 == 0)
			{
				unk_0xCF33FE51707573DB("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_01", 0f);
			}
			else if (iVar4 == 1)
			{
				unk_0xCF33FE51707573DB("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_02", 0f);
			}
			else
			{
				unk_0xCF33FE51707573DB("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_03", 0f);
			}
			iLocal_92 = 1;
		}
		if (bLocal_78)
		{
			if ((!unk_0xBC2FC12AD0FBF72E(iLocal_49[0]) || !unk_0xBC2FC12AD0FBF72E(iLocal_49[1])) && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
			{
				if (vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), unk_0xFBB1F99A825CAB09(func_3(), true)) < pow(50f, 2f))
				{
					if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) == 0)
					{
						unk_0x98F04A4FFB4AD01C(unk_0x95B959F18401C09A(), 2, 0);
						unk_0x66D901F8097E8E86(unk_0x95B959F18401C09A(), 0);
					}
					unk_0x71139C839487A2F9(unk_0x95B959F18401C09A(), unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true));
				}
			}
		}
		if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) == 0 && func_2())
		{
			unk_0x98F04A4FFB4AD01C(unk_0x95B959F18401C09A(), 2, 0);
			unk_0x66D901F8097E8E86(unk_0x95B959F18401C09A(), 0);
		}
		if (func_1())
		{
			func_62(9);
		}
		if (unk_0x91D5C8283D19AF49(iLocal_50, 0) && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
		{
			if (unk_0x0ACBA87310ED2513(iLocal_50, 0) > 0f || unk_0x0ACBA87310ED2513(iLocal_50, 1) > 0f)
			{
				if (unk_0xAF60E30B2CC603B2(iLocal_50) == 3)
				{
					unk_0xD303E20CB0AE4AD0(iLocal_50, 1);
				}
			}
			if (!bLocal_82)
			{
				if (unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iLocal_50, 0))
				{
					bLocal_82 = true;
				}
			}
			if (!bLocal_82)
			{
				if (unk_0x0ACBA87310ED2513(iLocal_50, 0) == 0f && unk_0x0ACBA87310ED2513(iLocal_50, 1) == 0f)
				{
					if (unk_0xAF60E30B2CC603B2(iLocal_50) == 1)
					{
						unk_0xD303E20CB0AE4AD0(iLocal_50, 3);
					}
				}
			}
		}
		if (iLocal_97 != 0)
		{
			if ((iLocal_46 == 8 || iLocal_46 == 6) || iLocal_46 == 4)
			{
				unk_0x6C6FE09E055D0855(iLocal_97);
			}
		}
		if (unk_0x765F6FEEFF39224F(iLocal_52))
		{
			iVar5 = 0;
			while (iVar5 < iLocal_49)
			{
				if (!unk_0xBC2FC12AD0FBF72E(iLocal_49[iVar5]) && !unk_0xD62C4419A41F106A(iLocal_49[iVar5], 0))
				{
					if (unk_0x5A4FB33F5B279A76(iLocal_52, iLocal_49[iVar5]))
					{
						if (iLocal_46 == 1)
						{
							if (!iLocal_300[iVar5])
							{
								unk_0x32321D8034C7B162(iLocal_49[iVar5], 0, "random@security_van", "sec_idle", 1090519040, 1);
								unk_0x32321D8034C7B162(iLocal_49[iVar5], 1, "random@security_van", "sec_walk_calm", 1090519040, 1);
								iLocal_300[iVar5] = 1;
							}
						}
						if (iLocal_46 == 7)
						{
							if (!iLocal_301[iVar5])
							{
								unk_0x32321D8034C7B162(iLocal_49[iVar5], 0, "random@security_van", "sec_idle", 1090519040, 1);
								unk_0x32321D8034C7B162(iLocal_49[iVar5], 1, "random@security_van", "sec_walk_panic", 1090519040, 1);
								iLocal_301[iVar5] = 1;
							}
						}
						if (unk_0x9ED464AAA493C8EF(iLocal_49[iVar5], 4) && !iLocal_85)
						{
							unk_0x098757942E2F9D44(iLocal_49[iVar5], true);
							iLocal_85 = 1;
						}
					}
					else
					{
						if (iLocal_300[iVar5])
						{
							unk_0x0A75DE3DF9D3D284(iLocal_49[iVar5], 0, -8f);
							unk_0x0A75DE3DF9D3D284(iLocal_49[iVar5], 1, -8f);
							iLocal_300[iVar5] = 0;
						}
						if (iLocal_301[iVar5])
						{
							unk_0x0A75DE3DF9D3D284(iLocal_49[iVar5], 0, -8f);
							unk_0x0A75DE3DF9D3D284(iLocal_49[iVar5], 1, -8f);
							iLocal_301[iVar5] = 0;
						}
						if (iLocal_300[iVar5] || iLocal_301[iVar5])
						{
							iLocal_300[iVar5] = 0;
							iLocal_301[iVar5] = 0;
							unk_0x0A75DE3DF9D3D284(iLocal_49[iVar5], 0, -8f);
							unk_0x0A75DE3DF9D3D284(iLocal_49[iVar5], 1, -8f);
						}
						if (unk_0x9ED464AAA493C8EF(iLocal_49[iVar5], 4) && iLocal_85)
						{
							unk_0x098757942E2F9D44(iLocal_49[iVar5], true);
							iLocal_85 = 0;
						}
					}
				}
				iVar5++;
			}
		}
		else
		{
			iVar5 = 0;
			while (iVar5 < iLocal_49)
			{
				if (!unk_0xBC2FC12AD0FBF72E(iLocal_49[iVar5]))
				{
					if (iLocal_300[iVar5] || iLocal_301[iVar5])
					{
						iLocal_300[iVar5] = 0;
						iLocal_301[iVar5] = 0;
						unk_0x0A75DE3DF9D3D284(iLocal_49[iVar5], 0, -8f);
						unk_0x0A75DE3DF9D3D284(iLocal_49[iVar5], 1, -8f);
					}
				}
				iVar5++;
			}
		}
		if (!bLocal_79 && !bLocal_288)
		{
			if (((((unk_0x765F6FEEFF39224F(iLocal_52) && unk_0x9F4718FD61B07058(iLocal_52)) && !unk_0xBC2FC12AD0FBF72E(iLocal_49[iLocal_96])) && !unk_0x1CE8F0A08E65CA6A(iLocal_49[iLocal_96], "random@security_van", "sec_hand_override", 3)) && !unk_0x1CE8F0A08E65CA6A(iLocal_49[iLocal_96], "random@security_van", "sec_case_into_van_panic", 3)) && !unk_0x1CE8F0A08E65CA6A(iLocal_49[iLocal_96], "random@security_van", "sec_case_into_van_calm", 3))
			{
				unk_0x108754262311D34F(iLocal_49[iLocal_96], "random@security_van", "sec_hand_override", 1000f, -4f, -1, 49, 0, 0, 0, 0);
			}
		}
		if (!iLocal_86)
		{
			if (unk_0x765F6FEEFF39224F(iLocal_50))
			{
				if (unk_0x91BBD269506D61D2(iLocal_50, unk_0x33CD235DF1E6A94E(), 1))
				{
					iLocal_86 = 1;
				}
				unk_0x0D847D71D9E6142E(iLocal_50);
			}
		}
	}
}

int func_1()
{
	if (!unk_0xB331FCEB94EB05C8())
	{
		return Global_91190.f_44 == 1;
	}
	return 0;
}

int func_2()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 50f;
	if (((!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()) && (((unk_0x91D5C8283D19AF49(iLocal_50, 0) && bLocal_84) && unk_0xECCFCAB0A094EB5B(iLocal_103)) || (!unk_0x91D5C8283D19AF49(iLocal_50, 0) && unk_0xECCFCAB0A094EB5B(iLocal_103)))) && vdist(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), unk_0xFBB1F99A825CAB09(iLocal_50, true)) < 20f) && vdist(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), unk_0x0F77516D457A04F5(iLocal_103)) < 20f)
	{
		iVar1 = unk_0x4517BC4DD6D865D7(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false), fVar0, fVar0, fVar0, -1);
		if (!unk_0xBC2FC12AD0FBF72E(iVar1))
		{
			if (unk_0x541D5C57194E73C4(iVar1) == joaat("s_m_y_cop_01") || unk_0x541D5C57194E73C4(iVar1) == joaat("s_f_y_cop_01"))
			{
				return 1;
			}
		}
		iVar1 = unk_0x4517BC4DD6D865D7(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false), fVar0, fVar0, fVar0, -1);
		if (!unk_0xBC2FC12AD0FBF72E(iVar1))
		{
			if (unk_0x541D5C57194E73C4(iVar1) == joaat("s_m_y_cop_01") || unk_0x541D5C57194E73C4(iVar1) == joaat("s_f_y_cop_01"))
			{
				return 1;
			}
		}
		iVar2 = unk_0x5E65439BE0A05829(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false), fVar0, 0, 1024);
		if (unk_0x91D5C8283D19AF49(iVar2, 0))
		{
			return 1;
		}
		iVar2 = unk_0x5E65439BE0A05829(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false), fVar0, 0, 1024);
		if (unk_0x91D5C8283D19AF49(iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

var func_3()
{
	float fVar0;
	int iVar1;
	
	fVar0 = 999999f;
	iVar1 = 0;
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		if (!unk_0xBC2FC12AD0FBF72E(iLocal_49[0]))
		{
			fVar0 = vdist(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), unk_0xFBB1F99A825CAB09(iLocal_49[0], true));
			iVar1 = 0;
		}
		if (!unk_0xBC2FC12AD0FBF72E(iLocal_49[1]))
		{
			if (vdist(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), unk_0xFBB1F99A825CAB09(iLocal_49[1], true)) < fVar0)
			{
				fVar0 = vdist(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), unk_0xFBB1F99A825CAB09(iLocal_49[1], true));
				iVar1 = 1;
			}
		}
	}
	return iLocal_49[iVar1];
}

bool func_4(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_20(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_5(sParam2, iParam3, 0);
}

int func_5(char* sParam0, int iParam1, bool bParam2)
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
					func_19();
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
		if (func_18(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_17();
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
				func_10();
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
				if (func_9())
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
			if (func_8())
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
			func_7();
			Global_15876 = bParam2;
		}
		Global_15868 = iParam1;
		StringCopy(&Global_15485, sParam0, 24);
		Global_14732 = 0;
		func_6();
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
		func_19();
	}
	return 0;
}

void func_6()
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

void func_7()
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

int func_8()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_9()
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

void func_10()
{
	if (func_16(14))
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
		Global_14553 = func_11();
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

int func_11()
{
	func_12();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_12()
{
	int iVar0;
	
	if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
	{
		if (func_15(Global_106565.f_2357.f_539.f_4321) != unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()))
		{
			iVar0 = func_14(unk_0x33CD235DF1E6A94E());
			if (func_13(iVar0) && (!func_16(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_13(Global_106565.f_2357.f_539.f_4321))
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

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		iVar1 = unk_0x541D5C57194E73C4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_15(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_15(int iParam0)
{
	if (func_13(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_16(int iParam0)
{
	return Global_36425 == iParam0;
}

void func_17()
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

bool func_18(int iParam0, int iParam1)
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

void func_19()
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

void func_20(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

float func_21()
{
	float fVar0;
	
	fVar0 = 999999f;
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		if (!unk_0xBC2FC12AD0FBF72E(iLocal_49[0]))
		{
			fVar0 = vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), unk_0xFBB1F99A825CAB09(iLocal_49[0], true));
		}
		if (!unk_0xBC2FC12AD0FBF72E(iLocal_49[1]))
		{
			if (vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), unk_0xFBB1F99A825CAB09(iLocal_49[1], true)) < fVar0)
			{
				fVar0 = vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), unk_0xFBB1F99A825CAB09(iLocal_49[1], true));
			}
		}
	}
	return sqrt(fVar0);
}

int func_22()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		iVar1 = 0;
		while (iVar1 < iLocal_49)
		{
			if (unk_0x765F6FEEFF39224F(iLocal_49[iVar1]))
			{
				if (((!unk_0xBC2FC12AD0FBF72E(iLocal_49[iVar1]) && unk_0x91BBD269506D61D2(iLocal_49[iVar1], unk_0x33CD235DF1E6A94E(), 1)) || unk_0xBC2FC12AD0FBF72E(iLocal_49[iVar1])) || unk_0xD62C4419A41F106A(iLocal_49[iVar1], 0))
				{
					iVar0 = 1;
				}
			}
			iVar1++;
		}
		if ((!unk_0xBC2FC12AD0FBF72E(iLocal_49[0]) && !unk_0xBC2FC12AD0FBF72E(iLocal_49[1])) && iLocal_86)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_23()
{
	if (!bLocal_89)
	{
		if (!bLocal_79)
		{
			if (unk_0x765F6FEEFF39224F(iLocal_52))
			{
				if (!unk_0x9F4718FD61B07058(iLocal_52))
				{
					unk_0xEC26F4BFC9942A0C(&iLocal_52);
					if (!unk_0xECCFCAB0A094EB5B(iLocal_103) && !bLocal_81)
					{
						func_24(0f, 0f, 0f, 0);
					}
				}
				else if ((unk_0xE3903F59E2F22150() - iLocal_102) > 3000)
				{
					if (unk_0xBC2FC12AD0FBF72E(iLocal_49[iLocal_96]) || unk_0x3AF2B3B68DD52355(iLocal_49[iLocal_96]))
					{
						unk_0x35F11A916FDFCF32(iLocal_52, 1, true);
						iLocal_102 = unk_0xE3903F59E2F22150();
					}
				}
			}
			else if (!unk_0xECCFCAB0A094EB5B(iLocal_103))
			{
				if (unk_0xBC2FC12AD0FBF72E(iLocal_49[iLocal_96]) || ((!unk_0xBC2FC12AD0FBF72E(iLocal_49[iLocal_96]) && unk_0x3AF2B3B68DD52355(iLocal_49[iLocal_96])) && !bLocal_81))
				{
					func_24(0f, 0f, 0f, 0);
				}
			}
		}
	}
	else
	{
		if (unk_0x765F6FEEFF39224F(iLocal_52))
		{
			unk_0xEC26F4BFC9942A0C(&iLocal_52);
		}
		if (unk_0xECCFCAB0A094EB5B(iLocal_103))
		{
			unk_0x40A22CF588A191A1(iLocal_103);
		}
	}
}

void func_24(vector3 vParam0, bool bParam1)
{
	if (!bLocal_89 && !bLocal_81)
	{
		if (!bParam1)
		{
			if (bLocal_79)
			{
				vParam0 = { unk_0xE3ADC76D6418297E(unk_0x2CA911E7569D12EA(iLocal_50, 0f, -3.3f, 0f), 1.2f, 1.5f) };
			}
			else
			{
				vParam0 = { unk_0xE3ADC76D6418297E(unk_0xFBB1F99A825CAB09(iLocal_49[iLocal_96], false), 1.2f, 1.5f) };
			}
		}
		unk_0x8950ED5730F62EE8(&iLocal_104, 3);
		unk_0x8950ED5730F62EE8(&iLocal_104, 4);
		unk_0x8950ED5730F62EE8(&iLocal_104, 1);
		if (bParam1)
		{
			iLocal_103 = unk_0x3B3AEF3A73FB80C9(joaat("pickup_money_security_case"), vParam0, unk_0x60B5C1FD066CB864(iLocal_52, 2), 0, iLocal_94, 2, 1, 0);
		}
		else
		{
			iLocal_103 = unk_0x6413BF5F9B062200(joaat("pickup_money_security_case"), vParam0, iLocal_104, iLocal_94, 1, 0);
		}
		if (!unk_0xE38E3CF1625A4145(iLocal_58))
		{
			iLocal_58 = func_25(iLocal_103);
		}
		if (unk_0x765F6FEEFF39224F(iLocal_52))
		{
			unk_0xEC26F4BFC9942A0C(&iLocal_52);
		}
		bLocal_81 = true;
	}
}

int func_25(int iParam0)
{
	return func_26(iParam0);
}

int func_26(int iParam0)
{
	int iVar0;
	
	if (!unk_0xECCFCAB0A094EB5B(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0xCB795F691042D011(iParam0);
	unk_0xCE5C49921A521962(iVar0, func_27(unk_0xB331FCEB94EB05C8(), 0.7f, 0.7f));
	return iVar0;
}

float func_27(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_28()
{
	if (func_30())
	{
		if (unk_0x765F6FEEFF39224F(iLocal_53))
		{
			unk_0x4A3BD9D189356B69(iLocal_50, 2, 0, 0);
			unk_0x4A3BD9D189356B69(iLocal_50, 3, 0, 0);
			if (unk_0x765F6FEEFF39224F(iLocal_53))
			{
				unk_0xEC26F4BFC9942A0C(&iLocal_53);
			}
		}
	}
	switch (iLocal_47)
	{
		case 0:
			if (bLocal_79)
			{
				iLocal_47 = 1;
			}
			break;
		
		case 1:
			if (unk_0x0ACBA87310ED2513(iLocal_50, 2) == 0f && unk_0x0ACBA87310ED2513(iLocal_50, 3) == 0f)
			{
				if (unk_0x765F6FEEFF39224F(iLocal_52))
				{
					if (unk_0x9F4718FD61B07058(iLocal_52))
					{
						unk_0x35F11A916FDFCF32(iLocal_52, 1, true);
					}
					unk_0x2F0A6390D863D337(iLocal_52, iLocal_50, 0, vLocal_65, vLocal_66, 0, 0, 0, 0, 2, 1);
					iLocal_47 = 2;
				}
			}
			break;
		
		case 2:
			if (!bLocal_81 && !bLocal_89)
			{
				if (!unk_0xD62C4419A41F106A(iLocal_50, 0))
				{
					if (((unk_0x91D5C8283D19AF49(iLocal_50, 0) && unk_0x0ACBA87310ED2513(iLocal_50, 2) > 0.25f) && unk_0x0ACBA87310ED2513(iLocal_50, 3) > 0.25f) || !unk_0x91D5C8283D19AF49(iLocal_50, 0))
					{
						if (unk_0x765F6FEEFF39224F(iLocal_52))
						{
							if (unk_0x9F4718FD61B07058(iLocal_52))
							{
								unk_0xEC95D37A139F1D5C(unk_0x8CCC0A0504C52531(), "DOORS_BLOWN", unk_0x2D49816199C51B0C(iLocal_50, 13), "RE_SECURITY_VAN_SOUNDSET", 0, 0, 0);
								unk_0x35F11A916FDFCF32(iLocal_52, 1, false);
								unk_0x23298AB8A7D0F403(iLocal_52, true, 0);
								unk_0x7FC263D448DC8CAC(iLocal_52);
								unk_0x4CBC0B0C8471392B(iLocal_52, 1);
								vLocal_279 = { unk_0xFBB1F99A825CAB09(iLocal_52, true) - unk_0xFBB1F99A825CAB09(iLocal_50, true) * Vector(1.5f, 1.5f, 1.5f) };
								if (vmag(vLocal_279) > 10f)
								{
									vLocal_279 = { func_29(vLocal_279) };
									vLocal_279 = { vLocal_279 * Vector(10f, 10f, 10f) };
								}
								if (iLocal_99 < 100)
								{
									iLocal_87 = 1;
								}
								unk_0x0848C95091F9ECB9(iLocal_52, 1, 0f, 1f, 5f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
								iLocal_278 = unk_0xE3903F59E2F22150();
							}
							else if (unk_0x68FFF67710CA5C91(unk_0xFBB1F99A825CAB09(iLocal_52, true), unk_0x2CA911E7569D12EA(iLocal_50, vLocal_276), unk_0x2CA911E7569D12EA(iLocal_50, vLocal_277), 0) >= 1f)
							{
								iLocal_47 = 3;
								iLocal_91[0] = 0;
								iLocal_91[1] = 0;
							}
							else if ((unk_0xE3903F59E2F22150() - iLocal_278) > 5000)
							{
								func_24(0f, 0f, 0f, 0);
							}
						}
					}
				}
				else if (unk_0x765F6FEEFF39224F(iLocal_50))
				{
					unk_0x4A3BD9D189356B69(iLocal_50, 2, 0, 0);
					unk_0x4A3BD9D189356B69(iLocal_50, 3, 0, 0);
					func_24(unk_0x2CA911E7569D12EA(iLocal_50, 0f, 2f, 0f), 0);
				}
			}
			break;
		
		case 3:
			if (iLocal_46 != 8)
			{
				func_62(8);
			}
			if (unk_0x765F6FEEFF39224F(iLocal_52) && !unk_0xECCFCAB0A094EB5B(iLocal_103))
			{
				if (unk_0x8BB475EA09C9A0EB(iLocal_52) == 0f && (unk_0xE3903F59E2F22150() - iLocal_278) > 1000)
				{
					func_24(unk_0xFBB1F99A825CAB09(iLocal_52, true), 1);
					unk_0xEC26F4BFC9942A0C(&iLocal_52);
				}
				else if ((unk_0xE3903F59E2F22150() - iLocal_278) > 5000)
				{
					func_24(0f, 0f, 0f, 0);
				}
			}
			break;
	}
}

Vector3 func_29(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

int func_30()
{
	int iVar0;
	
	if (unk_0x765F6FEEFF39224F(iLocal_53) && unk_0x9F4718FD61B07058(iLocal_53))
	{
		if (!iLocal_272)
		{
			if (unk_0x30267FEB358AA2E4(unk_0xFBB1F99A825CAB09(iLocal_53, true), joaat("weapon_stickybomb"), 0.25f, 0) || unk_0x8FCF53827AC6136E(unk_0xFBB1F99A825CAB09(iLocal_53, true), 0.3f, unk_0x12772FC739A13F81(joaat("weapon_stickybomb")), 0))
			{
				iLocal_272 = 1;
			}
		}
		iVar0 = 0;
		unk_0x65A0E70E3C94DBD7(unk_0xFBB1F99A825CAB09(iLocal_53, true), 0.1f, 255, 0, 0, 255);
		if (func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0xFBB1F99A825CAB09(iLocal_53, true), 1f, 1) || (unk_0xCA12322D8FBBDBEE(2, unk_0xFBB1F99A825CAB09(iLocal_53, true), 0.3f) && iLocal_272))
		{
			iLocal_87 = 1;
			iVar0 = 1;
		}
		if (unk_0xE80842D7B53F8525(iLocal_53) < iLocal_98 && unk_0x91BBD269506D61D2(iLocal_53, unk_0x33CD235DF1E6A94E(), 0))
		{
			iLocal_99 = (iLocal_99 + (iLocal_98 - unk_0xE80842D7B53F8525(iLocal_53)));
			unk_0x0D847D71D9E6142E(iLocal_53);
		}
		if ((unk_0xE3903F59E2F22150() - iLocal_273) > 200 && unk_0x765F6FEEFF39224F(iLocal_50))
		{
			if (unk_0x7E480C68737C0B83(unk_0x2CA911E7569D12EA(iLocal_50, 0f, 0f, (1.2195f - 0.27f)), unk_0x2CA911E7569D12EA(iLocal_50, 0f, fLocal_275, (1.2195f + 0.09f)), 0.45f, 1))
			{
				iLocal_273 = unk_0xE3903F59E2F22150();
				iLocal_274++;
			}
		}
		if (iLocal_274 > 5)
		{
			return 1;
		}
		if (iLocal_99 > 100 || iVar0)
		{
			return 1;
		}
		iLocal_98 = unk_0xE80842D7B53F8525(iLocal_53);
	}
	return 0;
}

int func_31(vector3 vParam0, vector3 vParam1, vector3 vParam2, float fParam3, bool bParam4)
{
	int iVar0;
	
	iVar0 = 0;
	if (!func_32(vParam0 + vParam1))
	{
		if ((((((((((((((((((((((unk_0x1041083D5BD8F51E(5, vParam1, vParam0) || (unk_0x1041083D5BD8F51E(2, vParam1, vParam0) && !bParam4)) || (unk_0x1041083D5BD8F51E(20, vParam1, vParam0) && !bParam4)) || unk_0x1041083D5BD8F51E(4, vParam1, vParam0)) || (unk_0x1041083D5BD8F51E(28, vParam1, vParam0) && !bParam4)) || unk_0x1041083D5BD8F51E(32, vParam1, vParam0)) || unk_0x1041083D5BD8F51E(25, vParam1, vParam0)) || unk_0x1041083D5BD8F51E(9, vParam1, vParam0)) || (unk_0x1041083D5BD8F51E(3, vParam1, vParam0) && !bParam4)) || (unk_0x1041083D5BD8F51E(6, vParam1, vParam0) && !bParam4)) || unk_0x1041083D5BD8F51E(0, vParam1, vParam0)) || unk_0x1041083D5BD8F51E(1, vParam1, vParam0)) || unk_0x1041083D5BD8F51E(23, vParam1, vParam0)) || unk_0x1041083D5BD8F51E(34, vParam1, vParam0)) || unk_0x1041083D5BD8F51E(14, vParam1, vParam0)) || (unk_0x1041083D5BD8F51E(30, vParam1, vParam0) && !bParam4)) || (unk_0x1041083D5BD8F51E(12, vParam1, vParam0) && !bParam4)) || unk_0x1041083D5BD8F51E(7, vParam1, vParam0)) || (unk_0x1041083D5BD8F51E(21, vParam1, vParam0) && !bParam4)) || (unk_0x1041083D5BD8F51E(18, vParam1, vParam0) && !bParam4)) || unk_0x1041083D5BD8F51E(15, vParam1, vParam0)) || unk_0x1041083D5BD8F51E(10, vParam1, vParam0)) || unk_0x1041083D5BD8F51E(27, vParam1, vParam0))
		{
			iVar0 = 1;
		}
	}
	else if ((((((((((((((((((((((unk_0xCA12322D8FBBDBEE(5, vParam2, fParam3) || (unk_0xCA12322D8FBBDBEE(2, vParam2, fParam3) && !bParam4)) || (unk_0xCA12322D8FBBDBEE(20, vParam2, fParam3) && !bParam4)) || unk_0xCA12322D8FBBDBEE(4, vParam2, fParam3)) || (unk_0xCA12322D8FBBDBEE(28, vParam2, fParam3) && !bParam4)) || unk_0xCA12322D8FBBDBEE(32, vParam2, fParam3)) || unk_0xCA12322D8FBBDBEE(25, vParam2, fParam3)) || unk_0xCA12322D8FBBDBEE(9, vParam2, fParam3)) || (unk_0xCA12322D8FBBDBEE(3, vParam2, fParam3) && !bParam4)) || (unk_0xCA12322D8FBBDBEE(6, vParam2, fParam3) && !bParam4)) || unk_0xCA12322D8FBBDBEE(0, vParam2, fParam3)) || unk_0xCA12322D8FBBDBEE(1, vParam2, fParam3)) || unk_0xCA12322D8FBBDBEE(23, vParam2, fParam3)) || unk_0xCA12322D8FBBDBEE(34, vParam2, fParam3)) || unk_0xCA12322D8FBBDBEE(14, vParam2, fParam3)) || (unk_0xCA12322D8FBBDBEE(30, vParam2, fParam3) && !bParam4)) || (unk_0xCA12322D8FBBDBEE(12, vParam2, fParam3) && !bParam4)) || unk_0xCA12322D8FBBDBEE(7, vParam2, fParam3)) || (unk_0xCA12322D8FBBDBEE(21, vParam2, fParam3) && !bParam4)) || (unk_0xCA12322D8FBBDBEE(18, vParam2, fParam3) && !bParam4)) || unk_0xCA12322D8FBBDBEE(15, vParam2, fParam3)) || unk_0xCA12322D8FBBDBEE(10, vParam2, fParam3)) || unk_0xCA12322D8FBBDBEE(27, vParam2, fParam3))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_32(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_33()
{
	int iVar0;
	bool bVar1;
	int iVar2[2];
	
	if (!unk_0xE38E3CF1625A4145(iLocal_57))
	{
		if (!bLocal_80)
		{
			if ((!unk_0xBC2FC12AD0FBF72E(iLocal_49[1]) && unk_0x91D5C8283D19AF49(iLocal_50, 0)) && !bLocal_89)
			{
				if (!bLocal_79)
				{
					if (!unk_0xE38E3CF1625A4145(uLocal_56[1]))
					{
						uLocal_56[1] = func_36(iLocal_49[1], 0, 145);
					}
				}
				else
				{
					if (unk_0xE38E3CF1625A4145(uLocal_56[1]))
					{
						unk_0x1ABDB383C83A336A(&(uLocal_56[1]));
					}
					if (!unk_0xE38E3CF1625A4145(iLocal_55))
					{
						iLocal_55 = func_34(iLocal_50, 0, 0);
					}
				}
			}
			else
			{
				if (unk_0xE38E3CF1625A4145(uLocal_56[1]))
				{
					unk_0x1ABDB383C83A336A(&(uLocal_56[1]));
				}
				if (unk_0xE38E3CF1625A4145(iLocal_55))
				{
					unk_0x1ABDB383C83A336A(&iLocal_55);
				}
			}
		}
		else
		{
			if (unk_0xE38E3CF1625A4145(uLocal_56[0]) && unk_0xD7BEA9B57BCF07B6(uLocal_56[0]) != 119)
			{
				unk_0x1ABDB383C83A336A(&(uLocal_56[0]));
			}
			if (unk_0xE38E3CF1625A4145(uLocal_56[1]) && unk_0xD7BEA9B57BCF07B6(uLocal_56[1]) != 119)
			{
				unk_0x1ABDB383C83A336A(&(uLocal_56[1]));
			}
			if (unk_0xE38E3CF1625A4145(iLocal_55) && unk_0xD7BEA9B57BCF07B6(iLocal_55) != 119)
			{
				unk_0x1ABDB383C83A336A(&iLocal_55);
			}
			if (unk_0x91D5C8283D19AF49(iLocal_50, 0))
			{
				iVar0 = 0;
				while (iVar0 < iLocal_49)
				{
					if (!unk_0xBC2FC12AD0FBF72E(iLocal_49[iVar0]))
					{
						if (unk_0x10930B9CAD4111C2(iLocal_49[iVar0], iLocal_50, 0))
						{
							bVar1 = true;
						}
					}
					iVar0++;
				}
			}
			if (bVar1)
			{
				if (!unk_0xE38E3CF1625A4145(iLocal_55))
				{
					iLocal_55 = func_34(iLocal_50, 1, 0);
				}
			}
			else if (unk_0xE38E3CF1625A4145(iLocal_55))
			{
				unk_0x1ABDB383C83A336A(&iLocal_55);
			}
			if ((unk_0x91D5C8283D19AF49(iLocal_50, 0) && unk_0xE38E3CF1625A4145(iLocal_55)) && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
			{
				if (unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iLocal_50, 0))
				{
					if (unk_0x163940E51B9C8A0D(iLocal_55) != 0)
					{
						unk_0xE447A1B9434714F3(iLocal_55, 0);
					}
				}
				else if (unk_0x163940E51B9C8A0D(iLocal_55) != 255)
				{
					unk_0xE447A1B9434714F3(iLocal_55, 255);
				}
			}
			iVar0 = 0;
			while (iVar0 < iLocal_49)
			{
				if (!unk_0xBC2FC12AD0FBF72E(iLocal_49[iVar0]) && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
				{
					if (!unk_0xECCFCAB0A094EB5B(iLocal_103) && !unk_0xF0D230FB550CD6EB(iLocal_49[iVar0], 0))
					{
						if (!unk_0xD82CBCB7E04DDA8A(iLocal_49[iVar0]) || vdist(unk_0xFBB1F99A825CAB09(iLocal_49[iVar0], true), unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true)) < 30f)
						{
							iVar2[iVar0] = 1;
						}
					}
					if (iLocal_46 == 8 && !unk_0xF0D230FB550CD6EB(iLocal_49[iVar0], 0))
					{
						iVar2[iVar0] = 1;
					}
					if (iLocal_46 == 5)
					{
						iVar2[iVar0] = 0;
					}
				}
				if (iVar2[iVar0])
				{
					if (!unk_0xE38E3CF1625A4145(uLocal_56[iVar0]))
					{
						uLocal_56[iVar0] = func_36(iLocal_49[iVar0], 1, 145);
					}
				}
				else if (unk_0xE38E3CF1625A4145(uLocal_56[iVar0]))
				{
					unk_0x1ABDB383C83A336A(&(uLocal_56[iVar0]));
				}
				iVar0++;
			}
			if (unk_0xECCFCAB0A094EB5B(iLocal_103) && !bLocal_89)
			{
				if (!unk_0xE38E3CF1625A4145(iLocal_58))
				{
					iLocal_58 = func_26(iLocal_103);
				}
			}
			else if (unk_0xE38E3CF1625A4145(iLocal_58))
			{
				unk_0x1ABDB383C83A336A(&iLocal_58);
			}
		}
	}
	else if ((unk_0x765F6FEEFF39224F(iLocal_50) && unk_0x765F6FEEFF39224F(iLocal_49[0])) && unk_0x765F6FEEFF39224F(iLocal_49[1]))
	{
		if ((((((!unk_0xC30D5C4DCAC8020A(iLocal_50) && unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iLocal_50, 100f, 100f, 30f, 0, 1, 0)) || (!unk_0xC30D5C4DCAC8020A(iLocal_49[0]) && unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iLocal_49[0], 100f, 100f, 30f, 0, 1, 0))) || (!unk_0xC30D5C4DCAC8020A(iLocal_49[1]) && unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iLocal_49[1], 100f, 100f, 30f, 0, 1, 0))) || unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iLocal_50, 50f, 50f, 20f, 0, 1, 0)) || unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iLocal_49[0], 50f, 50f, 20f, 0, 1, 0)) || unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iLocal_49[1], 50f, 50f, 20f, 0, 1, 0))
		{
			unk_0x1ABDB383C83A336A(&iLocal_57);
		}
	}
	if (unk_0xE38E3CF1625A4145(uLocal_56[0]))
	{
		unk_0x983D75D9630FD905(uLocal_56[0], iLocal_90);
	}
	if (unk_0xE38E3CF1625A4145(uLocal_56[1]))
	{
		unk_0x983D75D9630FD905(uLocal_56[1], bLocal_90);
	}
	if (unk_0xE38E3CF1625A4145(iLocal_55))
	{
		unk_0x983D75D9630FD905(iLocal_55, bLocal_90);
	}
	if (unk_0xE38E3CF1625A4145(iLocal_58))
	{
		unk_0x983D75D9630FD905(iLocal_58, bLocal_90);
	}
	if (!bLocal_90)
	{
		if (bLocal_80 || iLocal_47 == 3)
		{
			bLocal_90 = false;
		}
	}
}

int func_34(int iParam0, bool bParam1, bool bParam2)
{
	return func_35(iParam0, !bParam1, bParam2);
}

int func_35(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0x765F6FEEFF39224F(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x8848A15CBDADDC60(iParam0);
	if (unk_0x680558231C80291D(iParam0))
	{
		unk_0xCE5C49921A521962(iVar0, func_27(unk_0xB331FCEB94EB05C8(), 1f, 1f));
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
		unk_0xCE5C49921A521962(iVar0, func_27(unk_0xB331FCEB94EB05C8(), 0.7f, 0.7f));
		unk_0xBF11C8A43770C598(iVar0, bParam1);
	}
	else if (unk_0xA3A29DB165882310(iParam0))
	{
		unk_0xCE5C49921A521962(iVar0, func_27(unk_0xB331FCEB94EB05C8(), 0.7f, 0.7f));
	}
	return iVar0;
}

int func_36(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_35(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xE38E3CF1625A4145(iVar0)) && unk_0xEAF855A7DC28BC8D(&(Global_106565.f_28044[iParam2 /*29*/].f_3)))
	{
		unk_0x1C95CD840303FC37(iVar0, &(Global_106565.f_28044[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

void func_37()
{
	func_39(9, iLocal_45);
	while (!func_38())
	{
		wait(0);
	}
	func_226();
}

int func_38()
{
	return 1;
}

void func_39(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_59();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_58(iParam0))
	{
		func_57(iParam0, iParam1);
		if (!func_56(51))
		{
			func_52("RE_REWARD", 1, 0, 4000, 10000, func_55(), 0, 138, 0);
			func_51(51);
		}
		if (func_50(iParam0))
		{
			Global_106565.f_24989.f_2 = 3;
		}
		if (func_49(iParam0, iParam1) != 322)
		{
			func_41(func_49(iParam0, iParam1), vLocal_43.x, vLocal_43.y);
		}
		Global_106553 = iParam1;
		if (Global_106551 == 0)
		{
			if (((Global_106554 == 1 || Global_106554 == 5) || Global_106554 == 11) || Global_106554 == 25)
			{
				func_40(2);
			}
			else if ((Global_106554 == 26 || Global_106554 == 8) || Global_106554 == 17)
			{
				func_40(7);
			}
			else
			{
				func_40(1);
			}
		}
	}
}

void func_40(int iParam0)
{
	Global_106551 = iParam0;
}

void func_41(int iParam0, var uParam1, var uParam2)
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
		func_47((891 + iParam0), 1, -1, 1);
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
		Global_106565.f_10188[iParam0 /*12*/].f_10 = uParam1;
		Global_106565.f_10188[iParam0 /*12*/].f_11 = uParam2;
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
		func_42();
	}
}

void func_42()
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
		func_46(13, floor(Global_106565.f_10188.f_3853));
	}
	if (!unk_0xDC17890B0B8B5081())
	{
		if (!Global_71590)
		{
			if (func_45() == 2 == 0 && !unk_0xB331FCEB94EB05C8())
			{
				if (unk_0xB16BC34F6CB4A57A())
				{
					Global_106299 = 0;
				}
				if (!Global_56494)
				{
					func_43();
				}
			}
		}
	}
}

int func_43()
{
	if (func_44(0))
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

bool func_44(bool bParam0)
{
	if (!bParam0 && unk_0x1BCDA92AD0A7835B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x0E4018692D92041D(Global_71838, 0);
}

int func_45()
{
	return Global_25765;
}

int func_46(int iParam0, int iParam1)
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

int func_47(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_48();
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

int func_48()
{
	return Global_1312745;
}

int func_49(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_50(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_51(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		unk_0x8950ED5730F62EE8(&(Global_106565.f_20404.f_150[iVar1]), iVar0);
	}
}

void func_52(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_53(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_53(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xCE3CFF625BEBAA04(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_106565.f_20404.f_145)
	{
		if (unk_0xCE3CFF625BEBAA04(&(Global_106565.f_20404[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_106565.f_20404.f_145 < 9)
	{
		StringCopy(&(Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_4), sParam1, 16);
		Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_8 = (unk_0xE3903F59E2F22150() + iParam3);
		Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_9 = iParam5;
		Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_11 = iParam6;
		Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_12 = uParam2;
		Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_13 = iParam7;
		Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_14 = iParam8;
		Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_10 = ((unk_0xE3903F59E2F22150() + iParam3) + iParam4);
		}
		else
		{
			Global_106565.f_20404[Global_106565.f_20404.f_145 /*16*/].f_10 = -1;
		}
		Global_106565.f_20404.f_145++;
		func_54();
	}
}

void func_54()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_106565.f_20404.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_106565.f_20404.f_145)
	{
		if (unk_0x0E4018692D92041D(Global_106565.f_20404[iVar0 /*16*/].f_11, 0))
		{
			if (Global_106565.f_20404[iVar0 /*16*/].f_12 > Global_106565.f_20404.f_146[0])
			{
				Global_106565.f_20404.f_146[0] = Global_106565.f_20404[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x0E4018692D92041D(Global_106565.f_20404[iVar0 /*16*/].f_11, 1))
		{
			if (Global_106565.f_20404[iVar0 /*16*/].f_12 > Global_106565.f_20404.f_146[1])
			{
				Global_106565.f_20404.f_146[1] = Global_106565.f_20404[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x0E4018692D92041D(Global_106565.f_20404[iVar0 /*16*/].f_11, 2))
		{
			if (Global_106565.f_20404[iVar0 /*16*/].f_12 > Global_106565.f_20404.f_146[2])
			{
				Global_106565.f_20404.f_146[2] = Global_106565.f_20404[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_55()
{
	func_12();
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

int func_56(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return unk_0x0E4018692D92041D(Global_106565.f_20404.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_57(int iParam0, int iParam1)
{
	unk_0x8950ED5730F62EE8(&(Global_106565.f_24989.f_8[iParam0]), iParam1);
}

int func_58(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_59()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0xD178EF744F20B712(), 64);
	uVar1 = func_60(Var0);
	return uVar1;
}

int func_60(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x36163153849DFDA1(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

int func_61()
{
	if (bLocal_81)
	{
		if (unk_0xC52B92C972695208(iLocal_103))
		{
			return 1;
		}
	}
	return 0;
}

void func_62(int iParam0)
{
	iLocal_46 = iParam0;
	iLocal_48 = 0;
}

int func_63()
{
	if (!unk_0xECCFCAB0A094EB5B(iLocal_103))
	{
		if (bLocal_79)
		{
			if (unk_0x91D5C8283D19AF49(iLocal_50, 0))
			{
				if (!func_64(iLocal_50))
				{
					if (iLocal_271 == -1)
					{
						iLocal_271 = unk_0xE3903F59E2F22150();
					}
				}
				else if (iLocal_271 != -1)
				{
					iLocal_271 = -1;
				}
			}
		}
		if (!bLocal_79)
		{
			if (iLocal_96 != -1)
			{
				if (!unk_0xBC2FC12AD0FBF72E(iLocal_49[iLocal_96]))
				{
					if (!func_64(iLocal_50))
					{
						if (iLocal_271 == -1)
						{
							iLocal_271 = unk_0xE3903F59E2F22150();
						}
					}
					else if (iLocal_271 != -1)
					{
						iLocal_271 = -1;
					}
				}
			}
		}
		if (iLocal_271 != -1)
		{
			if ((unk_0xE3903F59E2F22150() - iLocal_271) > 3000)
			{
				unk_0x1F45B4626AC4A4C0(&(iLocal_49[0]));
				unk_0x1F45B4626AC4A4C0(&(iLocal_49[1]));
				unk_0x0C6BB9365C4A5F6E(iLocal_50, -1000f, 1);
				unk_0x23298AB8A7D0F403(iLocal_50, true, 0);
				unk_0x65F544B458249682(&iLocal_50);
				return 1;
			}
		}
	}
	else
	{
		if (iLocal_271 != -1)
		{
			iLocal_271 = -1;
		}
		if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()) && vdist(unk_0x0F77516D457A04F5(iLocal_103), unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true)) > 300f)
		{
			return 1;
		}
	}
	return 0;
}

int func_64(int iParam0)
{
	if (unk_0x765F6FEEFF39224F(iParam0) && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		if (vdist(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), unk_0xFBB1F99A825CAB09(iParam0, true)) < 150f)
		{
			return 1;
		}
		else if (!unk_0xC30D5C4DCAC8020A(iParam0) && vdist(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), unk_0xFBB1F99A825CAB09(iParam0, true)) < 300f)
		{
			return 1;
		}
	}
	return 0;
}

void func_65()
{
	int iVar0;
	int iVar1;
	
	if (iLocal_295 == -1)
	{
		iLocal_295 = unk_0xE3903F59E2F22150();
	}
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		switch (iLocal_48)
		{
			case 0:
				bLocal_80 = true;
				if (!unk_0xBC2FC12AD0FBF72E(iLocal_49[0]) || !unk_0xBC2FC12AD0FBF72E(iLocal_49[1]))
				{
					if (func_21() < 30f && !unk_0xBC2FC12AD0FBF72E(Local_106[3 /*10*/]))
					{
						func_4(&Local_106, cLocal_105, "RESEC_SHT1", 8, 0, 0, 0);
					}
				}
				iVar0 = 0;
				while (iVar0 < iLocal_49)
				{
					if (!unk_0xBC2FC12AD0FBF72E(iLocal_49[iVar0]) && unk_0x765F6FEEFF39224F(iLocal_52))
					{
						if ((iVar0 != iLocal_96 || bLocal_79) || !unk_0x5A4FB33F5B279A76(iLocal_52, iLocal_49[iVar0]))
						{
							unk_0xED68CDDDE25A144E(iLocal_49[iVar0]);
							unk_0x99414FB2D30425C1(&iLocal_54);
							if (unk_0xF0D230FB550CD6EB(iLocal_49[iVar0], 0))
							{
								if (iLocal_87)
								{
									if (unk_0xCDA107F8BEE35F40("move_injured_generic"))
									{
										unk_0x511559F67646F1C0(iLocal_49[iVar0], "move_injured_generic", 1048576000);
										iLocal_88[iVar0] = 1;
									}
								}
								unk_0x07C339D4328CA16C(0, 0, 256);
							}
							unk_0xE0DAC4ABE9900D9A(0);
							if (iLocal_88[iVar0])
							{
								unk_0x7D575FC8F42508D8(0, unk_0x9EC3B269A34A2BEE(1000, 3000));
							}
							unk_0x277716E9E7CC0692(0, unk_0x33CD235DF1E6A94E(), 0, 16);
							unk_0xC734F59A13D39AEF(iLocal_54);
							unk_0x13A2D602CD10CBAC(iLocal_49[iVar0], iLocal_54);
							unk_0xA7A57E7757ED035E(&iLocal_54);
						}
						unk_0x28F648743D7DE312(iLocal_49[iVar0], 6, false);
						unk_0x28F648743D7DE312(iLocal_49[iVar0], 0, true);
						unk_0x28F648743D7DE312(iLocal_49[iVar0], 1, false);
						unk_0x34A51926277F67BC(iLocal_49[iVar0], 1);
						unk_0x9E280E42C0773A3A(iLocal_49[iVar0], 1);
						unk_0x4A852F02088ECC9D(iLocal_49[iVar0], true);
					}
					iVar0++;
				}
				if ((unk_0x765F6FEEFF39224F(iLocal_52) && unk_0x9F4718FD61B07058(iLocal_52)) && !unk_0xBC2FC12AD0FBF72E(iLocal_49[iLocal_96]))
				{
					unk_0xED68CDDDE25A144E(iLocal_49[iLocal_96]);
				}
				settimera(0);
				iLocal_48++;
				break;
			
			case 1:
				if (func_70(iLocal_96))
				{
					if (!unk_0xBC2FC12AD0FBF72E(iLocal_49[iLocal_96]))
					{
						unk_0xED68CDDDE25A144E(iLocal_49[iLocal_96]);
						unk_0x99414FB2D30425C1(&iLocal_54);
						if (unk_0xF0D230FB550CD6EB(iLocal_49[iLocal_96], 0))
						{
							unk_0x07C339D4328CA16C(0, 0, 256);
						}
						unk_0xE0DAC4ABE9900D9A(0);
						unk_0x277716E9E7CC0692(0, unk_0x33CD235DF1E6A94E(), 0, 16);
						unk_0xC734F59A13D39AEF(iLocal_54);
						unk_0x13A2D602CD10CBAC(iLocal_49[iLocal_96], iLocal_54);
						unk_0xA7A57E7757ED035E(&iLocal_54);
					}
					iLocal_48++;
				}
				break;
			
			case 2:
				if (!unk_0xBC2FC12AD0FBF72E(iLocal_49[0]) || !unk_0xBC2FC12AD0FBF72E(iLocal_49[1]))
				{
					if (unk_0xBC2FC12AD0FBF72E(iLocal_49[0]) && !unk_0xBC2FC12AD0FBF72E(iLocal_49[1]))
					{
						if (Local_106[3 /*10*/] != iLocal_49[1])
						{
							func_69(&Local_106, 3);
							func_69(&Local_106, 4);
							func_68(&Local_106, 3, iLocal_49[1], "SECVANGUY1", 0, 1);
						}
					}
					iVar0 = 0;
					while (iVar0 < iLocal_49)
					{
						if (!unk_0xBC2FC12AD0FBF72E(iLocal_49[iVar0]))
						{
							if ((iLocal_47 == 2 && !iLocal_91[iVar0]) && !unk_0xD62C4419A41F106A(iLocal_50, 0))
							{
								unk_0xAC84CE374DF7A3BB(iLocal_49[iVar0], iLocal_50, unk_0x2CA911E7569D12EA(iLocal_50, 0f, -4f, 0f), 5f, 0);
								iLocal_91[iVar0] = 1;
							}
							if (((unk_0xECCFCAB0A094EB5B(iLocal_103) && !iLocal_91[iVar0]) && iLocal_47 == 3) && !bLocal_89)
							{
								unk_0xAC84CE374DF7A3BB(iLocal_49[iVar0], iLocal_50, unk_0x0F77516D457A04F5(iLocal_103), 5f, 0);
								iLocal_91[iVar0] = 1;
							}
							if (bLocal_89)
							{
								if (iLocal_91[iVar0])
								{
									unk_0x57930A6A2FECA598(iLocal_49[iVar0], 0);
									iLocal_91[iVar0] = 0;
								}
							}
						}
						iVar0++;
					}
					if (IntToFloat((unk_0xE3903F59E2F22150() - iLocal_292)) > unk_0x9562E33C057F7589(10000f, 15000f))
					{
						if (!func_67() && func_21() < 30f)
						{
							if (unk_0x9ED464AAA493C8EF(unk_0x33CD235DF1E6A94E(), 4))
							{
								if (func_4(&Local_106, cLocal_105, "RESEC_SHT2", 8, 0, 0, 0))
								{
									iLocal_292 = unk_0xE3903F59E2F22150();
								}
							}
						}
					}
					if (unk_0x91D5C8283D19AF49(iLocal_50, 0))
					{
						if (!bLocal_79)
						{
							if (!unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iLocal_50, 0) && (unk_0xE3903F59E2F22150() - iLocal_295) > 5000)
							{
								if (func_21() > (30f + (30f / 10f)))
								{
									func_62(7);
								}
								if (func_21() > (30f / 2f) && !func_66())
								{
									if (!bLocal_79)
									{
										func_62(7);
									}
									else
									{
										func_62(6);
									}
								}
								if (iLocal_46 != 8)
								{
									iLocal_91[0] = 0;
									iLocal_91[1] = 0;
									iLocal_295 = -1;
								}
							}
						}
					}
				}
				break;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_49)
		{
			if (!unk_0xBC2FC12AD0FBF72E(iLocal_49[iVar0]))
			{
				if (iVar0 == 0)
				{
					iVar1 = 7000;
				}
				else
				{
					iVar1 = 9000;
				}
				if (timera() > iVar1 && iLocal_88[iVar0])
				{
					unk_0xEB5F94C785667633(iLocal_49[iVar0], 1048576000);
					iLocal_88[iVar0] = 0;
				}
			}
			iVar0++;
		}
	}
}

bool func_66()
{
	int iVar0;
	
	if ((unk_0xE3903F59E2F22150() - iLocal_282) > 250)
	{
		if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_49)
			{
				if (!unk_0xBC2FC12AD0FBF72E(iLocal_49[iVar0]))
				{
					if (unk_0x72F7FAFD0710100C(iLocal_49[iVar0], unk_0x33CD235DF1E6A94E(), 19) && unk_0xC4BA1231BBAF1161(iLocal_49[iVar0], unk_0x33CD235DF1E6A94E()))
					{
						iLocal_281[iVar0] = 1;
					}
					else
					{
						iLocal_281[iVar0] = 0;
					}
				}
				iVar0++;
			}
		}
	}
	return (iLocal_281[0] || iLocal_281[1]);
}

int func_67()
{
	if (Global_15866 != 0 || unk_0x12BF789190D82474())
	{
		return 1;
	}
	return 0;
}

void func_68(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_69(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

bool func_70(int iParam0)
{
	bool bVar0;
	
	if (unk_0x765F6FEEFF39224F(iLocal_52))
	{
		if (!unk_0xBC2FC12AD0FBF72E(iLocal_49[iParam0]))
		{
			if (unk_0x5A4FB33F5B279A76(iLocal_52, iLocal_49[iParam0]))
			{
				if (unk_0x1CE8F0A08E65CA6A(iLocal_49[iParam0], "weapons@holster_1h", "holster", 3))
				{
					if (unk_0x204DEACC5BECF723(iLocal_49[iParam0], "weapons@holster_1h", "holster") > 0.9f)
					{
						unk_0x35F11A916FDFCF32(iLocal_52, 1, true);
						unk_0xEC26F4BFC9942A0C(&iLocal_52);
					}
				}
				else
				{
					unk_0x4A852F02088ECC9D(iLocal_49[iParam0], true);
					unk_0x108754262311D34F(iLocal_49[iParam0], "weapons@holster_1h", "holster", 8f, -8f, -1, 0, 0, 0, 0, 0);
				}
			}
		}
	}
	bVar0 = (!unk_0x765F6FEEFF39224F(iLocal_52) || (unk_0x765F6FEEFF39224F(iLocal_52) && !unk_0x5A4FB33F5B279A76(iLocal_52, iLocal_49[iParam0])));
	if (bVar0)
	{
		if (!unk_0xBC2FC12AD0FBF72E(iLocal_49[iParam0]))
		{
			unk_0x4A852F02088ECC9D(iLocal_49[iParam0], false);
		}
	}
	return bVar0;
}

void func_71(int iParam0, bool bParam1)
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	vector3 vVar3[2];
	int iVar4;
	bool bVar5;
	int iVar6;
	
	if (unk_0x91D5C8283D19AF49(iLocal_50, 0) && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		vVar0 = { func_29(unk_0x16068053F8800179(iLocal_50, unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true))) };
		fVar1 = ((unk_0xC472E34C8FBEC678(iLocal_50) + unk_0x174C48E9E544E9A8(vVar0.x, vVar0.y)) + 45f);
		fVar2 = ((unk_0xC472E34C8FBEC678(iLocal_50) + unk_0x174C48E9E544E9A8(vVar0.x, vVar0.y)) - 45f);
		vVar3[0 /*3*/] = { unk_0xCD1EDCB38767B47C(unk_0xFBB1F99A825CAB09(iLocal_50, true), fVar1, 0f, 4.5f, 0f) };
		vVar3[1 /*3*/] = { unk_0xCD1EDCB38767B47C(unk_0xFBB1F99A825CAB09(iLocal_50, true), fVar2, 0f, 4.5f, 0f) };
		func_72(&fVar1);
		func_72(&fVar2);
		if (vdist(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), vLocal_293) > 2f)
		{
			bVar5 = true;
		}
		iVar4 = 0;
		while (iVar4 < iLocal_49)
		{
			if (!unk_0xBC2FC12AD0FBF72E(iLocal_49[iVar4]))
			{
				if (vdist(unk_0xFBB1F99A825CAB09(iLocal_49[iVar4], true), vVar3[iVar4 /*3*/]) > 2f)
				{
					bVar5 = true;
				}
			}
			iVar4++;
		}
		if (bVar5)
		{
			iVar4 = 0;
			while (iVar4 < iLocal_49)
			{
				if ((((((!unk_0xBC2FC12AD0FBF72E(iLocal_49[iVar4]) && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E())) && vdist(unk_0xFBB1F99A825CAB09(iLocal_49[iVar4], true), vVar3[iVar4 /*3*/]) > 2f) && (unk_0xE3903F59E2F22150() - iLocal_294[iVar4]) > 1000) && !unk_0xF0D230FB550CD6EB(iLocal_49[iVar4], 0)) && !iLocal_281[iVar4]) && (iParam0 == -1 || iParam0 == iVar4))
				{
					if (bParam1)
					{
						if (func_66())
						{
							vLocal_293 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true) };
						}
						unk_0x99414FB2D30425C1(&iVar6);
						if (func_66() || func_32(vLocal_293))
						{
							unk_0x1E6D9DB41BEDAFB3(0, vVar3[iVar4 /*3*/], unk_0x33CD235DF1E6A94E(), 2f, false, 0.5f, 4f, true, 0, 0, -957453492, 20000);
							unk_0x4DDF5809B68AA635(0, unk_0x33CD235DF1E6A94E(), -1, 1);
						}
						else
						{
							unk_0x46F8A470FADAF002(0, vVar3[iVar4 /*3*/], vLocal_293, 2f, false, 0.5f, 4f, 1, 0, 0, -957453492);
							unk_0x36F61AEFB7DF9586(0, vLocal_293, -1, 1, 0);
						}
						unk_0xC734F59A13D39AEF(iVar6);
						unk_0x13A2D602CD10CBAC(iLocal_49[iVar4], iVar6);
						unk_0xA7A57E7757ED035E(&iVar6);
					}
					iLocal_294[iVar4] = unk_0xE3903F59E2F22150();
				}
				iVar4++;
			}
		}
	}
}

void func_72(float fParam0)
{
	if (*fParam0 > 180f)
	{
		*fParam0 = (*fParam0 - 360f);
	}
	else if (*fParam0 < -180f)
	{
		*fParam0 = (*fParam0 + 360f);
	}
}

void func_73(int iParam0)
{
	float fVar0;
	
	if (unk_0x91D5C8283D19AF49(iLocal_50, 0))
	{
		switch (iLocal_48)
		{
			case 0:
				if (!bLocal_79)
				{
					unk_0x4A852F02088ECC9D(iParam0, true);
					unk_0xED68CDDDE25A144E(iParam0);
					vLocal_283 = { unk_0x2D49816199C51B0C(iLocal_50, 0) };
					vLocal_284 = { unk_0x60B5C1FD066CB864(iLocal_50, 2) };
					vLocal_285 = { unk_0xF666CBF66A90975A("random@security_van", "sec_case_into_van_panic", vLocal_283, vLocal_284, 0, 2) };
					if (((!unk_0xBC2FC12AD0FBF72E(iLocal_49[1]) && !unk_0xD62C4419A41F106A(iLocal_49[1], 0)) && !unk_0xBC2FC12AD0FBF72E(iLocal_49[0])) && !unk_0xD62C4419A41F106A(iLocal_49[0], 0))
					{
						if (func_21() < 20f)
						{
							if (bLocal_80)
							{
								func_4(&Local_106, cLocal_105, "RESEC_REC", 8, 0, 0, 0);
							}
						}
						if (unk_0xECCFCAB0A094EB5B(iLocal_103))
						{
							if (bLocal_80)
							{
								unk_0x7E268975AF5EA74F(iParam0, unk_0x0F77516D457A04F5(iLocal_103), 2f, -1, 1048576000, 0, 1193033728);
							}
							else
							{
								unk_0x7E268975AF5EA74F(iParam0, unk_0x0F77516D457A04F5(iLocal_103), 1f, -1, 1048576000, 0, 1193033728);
							}
							iLocal_48++;
						}
						else
						{
							func_79(iParam0);
							iLocal_48 = 2;
						}
					}
					else if (!unk_0xBC2FC12AD0FBF72E(iParam0))
					{
						if (unk_0xECCFCAB0A094EB5B(iLocal_103))
						{
							unk_0x7E268975AF5EA74F(iParam0, unk_0x0F77516D457A04F5(iLocal_103), 2f, -1, 1048576000, 0, 1193033728);
							iLocal_48++;
						}
						else
						{
							func_79(iParam0);
							iLocal_48 = 2;
						}
					}
				}
				else
				{
					iLocal_48 = 4;
				}
				break;
			
			case 1:
				if (!unk_0xBC2FC12AD0FBF72E(iParam0) && unk_0xECCFCAB0A094EB5B(iLocal_103))
				{
					if ((unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(iParam0, true), unk_0x0F77516D457A04F5(iLocal_103), true) < 2f && !unk_0x3AF2B3B68DD52355(iParam0)) && (unk_0xE3903F59E2F22150() - iLocal_102) > 3000)
					{
						if (unk_0x9ED464AAA493C8EF(iParam0, 4))
						{
							unk_0x274C6068B660FFB4(iParam0, joaat("weapon_unarmed"), true);
						}
						unk_0x40A22CF588A191A1(iLocal_103);
						func_79(iParam0);
						unk_0x274C6068B660FFB4(iParam0, joaat("weapon_unarmed"), true);
						bLocal_81 = false;
						iLocal_96 = iLocal_95;
						iLocal_48++;
					}
				}
				break;
			
			case 2:
				if (!unk_0xBC2FC12AD0FBF72E(iParam0) && unk_0x91D5C8283D19AF49(iLocal_50, 0))
				{
					if (unk_0xD76D6BCC14B95CE1(iParam0, 713668775) != 1)
					{
						if (bLocal_80)
						{
							unk_0x7E268975AF5EA74F(iParam0, vLocal_285, 2f, -1, 0.1f, 512, vLocal_284.z);
						}
						else
						{
							unk_0x7E268975AF5EA74F(iParam0, vLocal_285, 1f, -1, 0.1f, 512, vLocal_284.z);
						}
						iLocal_48++;
					}
				}
				break;
			
			case 3:
				if (!unk_0xBC2FC12AD0FBF72E(iParam0))
				{
					if (unk_0xECCFCAB0A094EB5B(iLocal_103))
					{
						iLocal_48 = 0;
					}
					else
					{
						fVar0 = unk_0xC472E34C8FBEC678(iParam0);
						if (fVar0 > 180f)
						{
							fVar0 = (fVar0 - 360f);
						}
						if (fVar0 <= -180f)
						{
							fVar0 = (fVar0 + 360f);
						}
						if (vLocal_284.z > 180f)
						{
							vLocal_284.z = (vLocal_284.z - 360f);
						}
						if (vLocal_284.z <= -180f)
						{
							vLocal_284.z = (vLocal_284.z + 360f);
						}
						if (vdist(vLocal_285, unk_0xFBB1F99A825CAB09(iParam0, true)) < 0.3f)
						{
							if (unk_0x7EECA16E87982278((fVar0 - vLocal_284.z)) < 15f)
							{
								unk_0x53D6CDF9A1057FDB(iParam0, -1056964608);
								unk_0xED68CDDDE25A144E(iParam0);
								bLocal_288 = true;
								iLocal_286 = unk_0x38A6890195DD00D1(vLocal_283, vLocal_284, 2);
								if (bLocal_80)
								{
									unk_0x08798CBF817BA887(iParam0, iLocal_286, "random@security_van", "sec_case_into_van_panic", 4f, 4f, 3, 0, 4f, 0);
									unk_0xCF73ED7F74F29138(iLocal_50, iLocal_286, "van_case_into_van_panic", "random@security_van", 4f, -1000f, 0, -1000f);
								}
								else
								{
									unk_0x08798CBF817BA887(iParam0, iLocal_286, "random@security_van", "sec_case_into_van_calm", 4f, -4f, 3, 0, 4f, 0);
									unk_0xCF73ED7F74F29138(iLocal_50, iLocal_286, "van_case_into_van_calm", "random@security_van", 4f, -1000f, 0, -1000f);
								}
								unk_0x880B00F3FAE4C022(iParam0, 0, 0);
								iLocal_48++;
							}
						}
						else if (unk_0xC30D5C4DCAC8020A(iParam0) && !unk_0x73E7A21FD53144AB(vLocal_283, 2f))
						{
							unk_0xBEADAF07D2339505(iParam0, vLocal_283, 1, false, 0, 1);
						}
					}
				}
				break;
			
			case 4:
				if (unk_0xDB4C79A9697E6A55(iLocal_286))
				{
					if (bLocal_80)
					{
						fLocal_296 = 0.42f;
					}
					else
					{
						fLocal_296 = 0.3893f;
					}
					if (bLocal_80)
					{
						fLocal_297 = 0.52f;
					}
					else
					{
						fLocal_297 = 0.546243f;
					}
					if (!bLocal_79)
					{
						if ((unk_0x765F6FEEFF39224F(iLocal_52) && unk_0x5A4FB33F5B279A76(iLocal_52, iParam0)) && unk_0x4EDDCE9AAE0FC976(iLocal_286) > fLocal_296)
						{
							if (!unk_0x5A4FB33F5B279A76(iLocal_52, iLocal_50))
							{
								unk_0x35F11A916FDFCF32(iLocal_52, 1, true);
								unk_0x23298AB8A7D0F403(iLocal_52, false, 0);
								unk_0x2F0A6390D863D337(iLocal_52, iLocal_50, 0, unk_0x16068053F8800179(iLocal_50, unk_0xFBB1F99A825CAB09(iLocal_52, true)), 90f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							}
							bLocal_79 = true;
						}
					}
					else if (unk_0x4EDDCE9AAE0FC976(iLocal_286) > fLocal_297)
					{
						unk_0x0C6BB9365C4A5F6E(iLocal_50, -4f, 1);
						unk_0xED68CDDDE25A144E(iParam0);
						if (unk_0x765F6FEEFF39224F(iLocal_52))
						{
							iLocal_76 = 0;
							unk_0xB40411FADDCA9CC8(iLocal_50, 2, 1);
							unk_0xB40411FADDCA9CC8(iLocal_50, 3, 1);
							unk_0x4A852F02088ECC9D(iParam0, false);
							iLocal_48++;
						}
					}
				}
				break;
			
			case 5:
				if ((unk_0xDB4C79A9697E6A55(iLocal_286) && unk_0x4EDDCE9AAE0FC976(iLocal_286) > fLocal_297) || !unk_0xDB4C79A9697E6A55(iLocal_286))
				{
					if (!bLocal_80)
					{
						if (!unk_0xBC2FC12AD0FBF72E(iLocal_49[0]))
						{
							unk_0xC838CE9837D0ABAF(iLocal_49[0], iLocal_50, -1, -1, 1f, 1, 0);
						}
					}
					iLocal_48++;
				}
				break;
			
			case 6:
				if (unk_0x91D5C8283D19AF49(iLocal_50, 0))
				{
					if (bLocal_80)
					{
						func_62(6);
					}
					else
					{
						func_62(4);
					}
				}
				else
				{
					func_62(8);
				}
				break;
			}
	}
	if (!unk_0x91D5C8283D19AF49(iLocal_50, 0))
	{
		if (!unk_0xBC2FC12AD0FBF72E(iLocal_49[0]) || !unk_0xBC2FC12AD0FBF72E(iLocal_49[1]))
		{
			func_62(8);
		}
	}
	if ((!unk_0xBC2FC12AD0FBF72E(iLocal_49[0]) || !unk_0xBC2FC12AD0FBF72E(iLocal_49[1])) && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		if (!bLocal_79)
		{
			if ((((((func_21() < 10f && unk_0x9ED464AAA493C8EF(unk_0x33CD235DF1E6A94E(), 6)) && func_66()) || ((func_21() < 20f && unk_0x9ED464AAA493C8EF(unk_0x33CD235DF1E6A94E(), 6)) && unk_0x5DACF31D3AC5ED8D(unk_0x33CD235DF1E6A94E()))) || (func_21() < 5f && bLocal_80)) || (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0) && func_74(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0)))) || ((!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0) && unk_0x765F6FEEFF39224F(unk_0x8918EC905FC8975D())) && func_74(unk_0x8918EC905FC8975D())))
			{
				func_62(8);
			}
		}
	}
	if (iLocal_46 != 7)
	{
		if (bLocal_79)
		{
			if (unk_0xDB4C79A9697E6A55(iLocal_286))
			{
				unk_0x0C6BB9365C4A5F6E(iLocal_50, -8f, 1);
			}
		}
		if (!unk_0xBC2FC12AD0FBF72E(iParam0))
		{
			unk_0x4A852F02088ECC9D(iParam0, false);
		}
	}
	if ((unk_0x91D5C8283D19AF49(iLocal_50, 0) && iLocal_46 != 7) && unk_0xDB4C79A9697E6A55(iLocal_286))
	{
		unk_0x0C6BB9365C4A5F6E(iLocal_50, -8f, 1);
	}
}

int func_74(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	struct<2> Var2;
	vector3 vVar3[4];
	vector3 vVar4[4];
	vector3 vVar5[4];
	vector3 vVar6[4];
	var uVar7;
	float fVar8;
	float fVar9;
	
	iVar0 = 0;
	if (unk_0x765F6FEEFF39224F(iParam0) && unk_0x765F6FEEFF39224F(iLocal_50))
	{
		uVar7 = 4;
		unk_0xFEF5F9BB57EA2E8D(unk_0x541D5C57194E73C4(iParam0), &Var1, &Var2);
		vVar3[0 /*3*/] = { unk_0x2CA911E7569D12EA(iParam0, Var1, Var2.f_1, 0f) };
		vVar3[1 /*3*/] = { unk_0x2CA911E7569D12EA(iParam0, Var2, Var2.f_1, 0f) };
		vVar3[2 /*3*/] = { unk_0x2CA911E7569D12EA(iParam0, Var2, Var1.f_1, 0f) };
		vVar3[3 /*3*/] = { unk_0x2CA911E7569D12EA(iParam0, Var1, Var1.f_1, 0f) };
		fVar8 = -3.7f;
		fVar9 = 1.35f;
		vVar4[0 /*3*/] = { unk_0x2CA911E7569D12EA(iLocal_50, (-fVar9 - 0.25f), fVar8, 0f) };
		vVar4[1 /*3*/] = { unk_0x2CA911E7569D12EA(iLocal_50, (fVar9 + 0.25f), fVar8, 0f) };
		vVar4[2 /*3*/] = { unk_0x2CA911E7569D12EA(iLocal_50, (fVar9 - 0.25f), (fVar8 - 1.55f), 0f) };
		vVar4[3 /*3*/] = { unk_0x2CA911E7569D12EA(iLocal_50, (-fVar9 + 0.25f), (fVar8 - 1.55f), 0f) };
		vVar5[0 /*3*/] = { unk_0x2CA911E7569D12EA(iLocal_50, -fVar9, 0.5f, 0f) };
		vVar5[1 /*3*/] = { unk_0x2CA911E7569D12EA(iLocal_50, (-fVar9 - 0.75f), 0.5f, 0f) };
		vVar5[2 /*3*/] = { unk_0x2CA911E7569D12EA(iLocal_50, (-fVar9 - 0.75f), 1.5f, 0f) };
		vVar5[3 /*3*/] = { unk_0x2CA911E7569D12EA(iLocal_50, -fVar9, 1.5f, 0f) };
		vVar6[0 /*3*/] = { unk_0x2CA911E7569D12EA(iLocal_50, fVar9, 0.5f, 0f) };
		vVar6[1 /*3*/] = { unk_0x2CA911E7569D12EA(iLocal_50, (fVar9 + 0.75f), 0.5f, 0f) };
		vVar6[2 /*3*/] = { unk_0x2CA911E7569D12EA(iLocal_50, (fVar9 + 0.75f), 1.5f, 0f) };
		vVar6[3 /*3*/] = { unk_0x2CA911E7569D12EA(iLocal_50, fVar9, 1.5f, 0f) };
		if (!bLocal_79)
		{
			if (func_75(&vVar4, &vVar3, &uVar7))
			{
				iVar0 = 1;
			}
		}
		if (!unk_0xBC2FC12AD0FBF72E(iLocal_49[0]) && !unk_0x10930B9CAD4111C2(iLocal_49[0], iLocal_50, 1))
		{
			if (func_75(&vVar5, &vVar3, &uVar7))
			{
				iVar0 = 1;
			}
		}
		if (!unk_0xBC2FC12AD0FBF72E(iLocal_49[1]) && !unk_0x10930B9CAD4111C2(iLocal_49[1], iLocal_50, 1))
		{
			if (func_75(&vVar6, &vVar3, &uVar7))
			{
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

int func_75(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		iVar2 = iVar0 + 1;
		if (iVar2 == *uParam0)
		{
			iVar2 = 0;
		}
		iVar1 = 0;
		while (iVar1 < *uParam1)
		{
			iVar3 = iVar1 + 1;
			if (iVar3 == *uParam1)
			{
				iVar3 = 0;
			}
			if (func_76(*(uParam0[iVar0 /*3*/]), *(uParam0[iVar2 /*3*/]), *(uParam1[iVar1 /*3*/]), *(uParam1[iVar3 /*3*/]), uParam2[iVar0 /*3*/]))
			{
				return 1;
			}
			iVar1++;
		}
		iVar0++;
	}
	return 0;
}

int func_76(vector3 vParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, struct<2> Param5, var uParam6, var uParam7)
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
	float fVar10;
	float fVar11;
	float fVar12;
	
	fVar0 = vParam0.x;
	fVar1 = Param1;
	fVar2 = Param3;
	fVar3 = Param5;
	fVar4 = vParam0.y;
	fVar5 = Param1.f_1;
	fVar6 = Param3.f_1;
	fVar7 = Param5.f_1;
	fVar8 = (((fVar0 - fVar1) * (fVar6 - fVar7)) - ((fVar4 - fVar5) * (fVar2 - fVar3)));
	if (fVar8 == 0f)
	{
		return 0;
	}
	fVar9 = ((fVar0 * fVar5) - (fVar4 * fVar1));
	fVar10 = ((fVar2 * fVar7) - (fVar6 * fVar3));
	fVar11 = (((fVar9 * (fVar2 - fVar3)) - ((fVar0 - fVar1) * fVar10)) / fVar8);
	fVar12 = (((fVar9 * (fVar6 - fVar7)) - ((fVar4 - fVar5) * fVar10)) / fVar8);
	if (((fVar11 < func_78(fVar0, fVar1) || fVar11 > func_77(fVar0, fVar1)) || fVar11 < func_78(fVar2, fVar3)) || fVar11 > func_77(fVar2, fVar3))
	{
		return 0;
	}
	if (((fVar12 < func_78(fVar4, fVar5) || fVar12 > func_77(fVar4, fVar5)) || fVar12 < func_78(fVar6, fVar7)) || fVar12 > func_77(fVar6, fVar7))
	{
		return 0;
	}
	*uParam7 = fVar11;
	uParam7->f_1 = fVar12;
	uParam7->f_2 = vParam0.z;
	return 1;
}

float func_77(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

float func_78(float fParam0, float fParam1)
{
	if (fParam0 < fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

void func_79(int iParam0)
{
	if (!unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		if (!unk_0x765F6FEEFF39224F(iLocal_52))
		{
			iLocal_52 = unk_0x7CA67831169E8AA6(iLocal_75, vLocal_63, true, true, false);
			unk_0x6B8FD1D1616EE677(iLocal_52, false);
		}
		if (unk_0x765F6FEEFF39224F(iLocal_52))
		{
			unk_0x2F0A6390D863D337(iLocal_52, iParam0, unk_0xFCAF61876D23D31D(iParam0, 28422), vLocal_68, vLocal_69, 1, 0, 0, 0, 2, 1);
		}
	}
}

void func_80()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	switch (iLocal_48)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < iLocal_49)
			{
				if (!unk_0xBC2FC12AD0FBF72E(iLocal_49[iVar0]))
				{
					unk_0x4A852F02088ECC9D(iLocal_49[iVar0], true);
				}
				iVar0++;
			}
			bLocal_80 = true;
			if (unk_0x91D5C8283D19AF49(iLocal_50, 0))
			{
				if (unk_0x765F6FEEFF39224F(func_83()))
				{
					if (!unk_0xBC2FC12AD0FBF72E(func_83()))
					{
						if (unk_0x7BDC41A7CA0C77A2(iLocal_50, -1, 0) != func_83() && unk_0x67FFBB75D2430704(iLocal_50, -1, 0))
						{
							unk_0xC838CE9837D0ABAF(func_83(), iLocal_50, 20000, -1, 2f, 1, 0);
						}
					}
				}
				if (!unk_0xBC2FC12AD0FBF72E(iLocal_49[1]) && func_83() != iLocal_49[1])
				{
					if (unk_0x7BDC41A7CA0C77A2(iLocal_50, 0, 0) != iLocal_49[1] && unk_0x67FFBB75D2430704(iLocal_50, 0, 0))
					{
						unk_0xC838CE9837D0ABAF(iLocal_49[1], iLocal_50, -1, 0, 2f, 1, 0);
					}
				}
				iLocal_48++;
			}
			else
			{
				func_62(8);
			}
			break;
		
		case 1:
			if (func_82())
			{
				if (unk_0x765F6FEEFF39224F(func_83()) && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
				{
					unk_0x48B8A6610EAA0C89(func_83(), iLocal_50, unk_0x33CD235DF1E6A94E(), 8, 50f, 786484, 100f, 5f, 1);
					iLocal_48++;
				}
			}
			break;
		
		case 2:
			if (func_81())
			{
				if (unk_0x765F6FEEFF39224F(func_83()))
				{
					unk_0x2BC4614F764725A6(func_83(), iLocal_50, 0, 5, 0f, 786484, 100f, 100f, 1);
					iLocal_48++;
				}
			}
			break;
		
		case 3:
			if (unk_0x91D5C8283D19AF49(iLocal_50, 0))
			{
				if (unk_0x8BB475EA09C9A0EB(iLocal_50) < 2f)
				{
					func_62(8);
				}
			}
			break;
	}
	if ((unk_0x765F6FEEFF39224F(iLocal_50) && unk_0x765F6FEEFF39224F(unk_0x7BDC41A7CA0C77A2(iLocal_50, -1, 0))) && (unk_0xD62C4419A41F106A(unk_0x7BDC41A7CA0C77A2(iLocal_50, -1, 0), 0) || unk_0xBC2FC12AD0FBF72E(unk_0x7BDC41A7CA0C77A2(iLocal_50, -1, 0))))
	{
		iVar1 = 0;
		if (unk_0x7BDC41A7CA0C77A2(iLocal_50, -1, 0) == iLocal_49[0])
		{
			iVar1 = 1;
		}
		if (vdist2(unk_0xFBB1F99A825CAB09(iLocal_50, true), unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true)) > 100f)
		{
			if (!unk_0xBC2FC12AD0FBF72E(iLocal_49[iVar1]) && unk_0xD76D6BCC14B95CE1(iLocal_49[iVar1], 242628503) != 1)
			{
				unk_0x33F6BE48E356DA27(iLocal_49[iVar1], 2, true);
				unk_0x99414FB2D30425C1(&iVar2);
				unk_0xB66F510766D11582(0, iLocal_50, 0);
				unk_0x48B8A6610EAA0C89(0, iLocal_50, unk_0x33CD235DF1E6A94E(), 8, 50f, 786484, 100f, 5f, 1);
				unk_0xC734F59A13D39AEF(iVar2);
				unk_0x13A2D602CD10CBAC(iLocal_49[iVar1], iVar2);
				unk_0xA7A57E7757ED035E(&iVar2);
			}
		}
		else
		{
			func_62(8);
		}
	}
	if (((((((!unk_0x91D5C8283D19AF49(iLocal_50, 0) || unk_0xECCFCAB0A094EB5B(iLocal_103)) || iLocal_47 == 3) || unk_0x67001C5CC88C66A8(iLocal_50, 0, 7000)) || unk_0x67001C5CC88C66A8(iLocal_50, 3, 30000)) || unk_0x67001C5CC88C66A8(iLocal_50, 2, 30000)) || unk_0x67001C5CC88C66A8(iLocal_50, 1, 40000)) || (iLocal_48 > 1 && !func_82()))
	{
		if (!func_82())
		{
		}
		func_62(8);
	}
}

int func_81()
{
	if (unk_0x765F6FEEFF39224F(iLocal_50))
	{
		if (!unk_0xD62C4419A41F106A(iLocal_50, 0))
		{
			if (((((unk_0xE80842D7B53F8525(iLocal_50) < 300 || unk_0x787CBB9DB6BA1A49(iLocal_50) < 200f) || (unk_0xEED5625DB4F88798(iLocal_50, 0, 0) && unk_0xEED5625DB4F88798(iLocal_50, 1, 0))) || (unk_0xEED5625DB4F88798(iLocal_50, 4, 0) && unk_0xEED5625DB4F88798(iLocal_50, 5, 0))) || (unk_0xEED5625DB4F88798(iLocal_50, 0, 0) && unk_0xEED5625DB4F88798(iLocal_50, 4, 0))) || (unk_0xEED5625DB4F88798(iLocal_50, 1, 0) && unk_0xEED5625DB4F88798(iLocal_50, 5, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_82()
{
	int iVar0;
	
	iVar0 = 1;
	if (unk_0x91D5C8283D19AF49(iLocal_50, 0))
	{
		if (!unk_0xBC2FC12AD0FBF72E(iLocal_49[0]) && !unk_0xD62C4419A41F106A(iLocal_49[0], 0))
		{
			if (!unk_0x10930B9CAD4111C2(iLocal_49[0], iLocal_50, 0))
			{
				iVar0 = 0;
			}
		}
		if (!unk_0xBC2FC12AD0FBF72E(iLocal_49[1]) && !unk_0xD62C4419A41F106A(iLocal_49[1], 0))
		{
			if (!unk_0x10930B9CAD4111C2(iLocal_49[1], iLocal_50, 0))
			{
				iVar0 = 0;
			}
		}
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_83()
{
	if (!unk_0xBC2FC12AD0FBF72E(iLocal_49[0]) && !unk_0xD62C4419A41F106A(iLocal_49[0], 0))
	{
		return iLocal_49[0];
	}
	if (!unk_0xBC2FC12AD0FBF72E(iLocal_49[1]) && !unk_0xD62C4419A41F106A(iLocal_49[1], 0))
	{
		return iLocal_49[1];
	}
	return 0;
}

void func_84()
{
	int iVar0;
	int iVar1;
	
	switch (iLocal_48)
	{
		case 0:
			if (!bLocal_79)
			{
				if (unk_0x765F6FEEFF39224F(iLocal_52) && unk_0x9F4718FD61B07058(iLocal_52))
				{
					unk_0x35F11A916FDFCF32(iLocal_52, 1, true);
				}
			}
			if ((!unk_0xBC2FC12AD0FBF72E(iLocal_49[0]) || !unk_0xBC2FC12AD0FBF72E(iLocal_49[1])) && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
			{
				if (func_21() < 20f)
				{
					func_4(&Local_106, cLocal_105, "RESEC_FFLEE", 8, 0, 0, 0);
				}
				iVar0 = 0;
				while (iVar0 < iLocal_49)
				{
					if (!unk_0xBC2FC12AD0FBF72E(iLocal_49[iVar0]))
					{
						unk_0x28F648743D7DE312(iLocal_49[iVar0], 17, true);
						unk_0x33F6BE48E356DA27(iLocal_49[iVar0], 128, true);
						unk_0x33F6BE48E356DA27(iLocal_49[iVar0], 16, true);
						unk_0x28F648743D7DE312(iLocal_49[iVar0], 1, false);
						unk_0x99414FB2D30425C1(&iVar1);
						if (unk_0xF0D230FB550CD6EB(iLocal_49[iVar0], 1))
						{
							unk_0x07C339D4328CA16C(iLocal_49[iVar0], 0, 256);
						}
						unk_0xECCD4FDA45197F97(0, unk_0x33CD235DF1E6A94E(), 300f, -1, 0, 0);
						unk_0xC734F59A13D39AEF(iVar1);
						unk_0x13A2D602CD10CBAC(iLocal_49[iVar0], iVar1);
						unk_0xA7A57E7757ED035E(&iVar1);
					}
					iVar0++;
				}
			}
			bLocal_83 = true;
			iLocal_48++;
			break;
		
		case 1:
			if (unk_0x91D5C8283D19AF49(iLocal_50, 0))
			{
				if (func_85(iLocal_50, 1, 0, 0, 0, 0, 1, 0, 1))
				{
					iLocal_48++;
				}
			}
			break;
	}
}

int func_85(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0xC92AA0DBDDDE8BB8(iParam0) + 1;
	if (iParam4 || !unk_0xD62C4419A41F106A(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_86(iParam0, (iVar0 - 1), bParam6, iParam7);
			if (unk_0x765F6FEEFF39224F(iVar2))
			{
				if (iParam3 && iVar2 == unk_0x33CD235DF1E6A94E())
				{
				}
				else if (iParam2 && unk_0xE09156665EC2D83B(iVar2))
				{
					if (!unk_0xBC2FC12AD0FBF72E(iVar2) || iParam8)
					{
						if (unk_0x002F527E1A3238DC(unk_0x5C7617A25D50AAE9(iVar2)) == 0)
						{
							if (!bParam5)
							{
								return 0;
							}
						}
						else
						{
							return 0;
						}
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!unk_0xBC2FC12AD0FBF72E(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_86(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	if (!unk_0x67FFBB75D2430704(iParam0, iParam1, iParam3))
	{
		iVar0 = unk_0x7BDC41A7CA0C77A2(iParam0, iParam1, iParam3);
	}
	if (bParam2)
	{
		if (!unk_0x765F6FEEFF39224F(iVar0) && !unk_0xD62C4419A41F106A(iParam0, 0))
		{
			iVar0 = unk_0xDAF93A0E27EE6FC7(iParam0, iParam1);
			if (!unk_0xD62C4419A41F106A(iVar0, 0))
			{
				if (unk_0xD76D6BCC14B95CE1(iVar0, 451360105) == 1 || unk_0xD76D6BCC14B95CE1(iVar0, -828834893) == 1)
				{
					if (vdist(unk_0xFBB1F99A825CAB09(iParam0, false), unk_0xFBB1F99A825CAB09(iVar0, false)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

void func_87()
{
	if (!unk_0xBC2FC12AD0FBF72E(iLocal_49[0]) && !unk_0xBC2FC12AD0FBF72E(iLocal_49[1]))
	{
		switch (iLocal_48)
		{
			case 0:
				if (func_4(&Local_106, cLocal_105, "RESEC_CAR1", 8, 0, 0, 0))
				{
					if (unk_0x765F6FEEFF39224F(iLocal_52) && unk_0x9F4718FD61B07058(iLocal_52))
					{
						if (!unk_0x5A4FB33F5B279A76(iLocal_52, iLocal_49[0]))
						{
							func_88(0);
						}
						else
						{
							unk_0xED68CDDDE25A144E(iLocal_49[0]);
						}
						if (!unk_0x5A4FB33F5B279A76(iLocal_52, iLocal_49[1]))
						{
							func_88(1);
						}
						else
						{
							unk_0xED68CDDDE25A144E(iLocal_49[1]);
						}
						iLocal_48++;
					}
					else
					{
						func_88(0);
						func_88(1);
						iLocal_48 = 2;
					}
				}
				break;
			
			case 1:
				if (func_70(iLocal_96))
				{
					if (!unk_0xBC2FC12AD0FBF72E(iLocal_49[iLocal_96]))
					{
						func_88(iLocal_96);
					}
					iLocal_48++;
				}
				break;
			
			case 2:
				if (!func_67())
				{
					if (func_4(&Local_106, cLocal_105, "RESEC_CAR2", 8, 0, 0, 0))
					{
						settimera(0);
						iLocal_48++;
					}
				}
				break;
			
			case 3:
				if ((timera() > 12000 && !func_67()) && func_4(&Local_106, cLocal_105, "RESEC_CAR3", 8, 0, 0, 0))
				{
					settimera(0);
					iLocal_48++;
				}
				break;
			
			case 4:
				if ((timera() > 7000 && !func_67()) && func_4(&Local_106, cLocal_105, "RESEC_CAR4", 8, 0, 0, 0))
				{
					settimera(0);
					func_62(8);
				}
				break;
			}
	}
	if (iLocal_48 > 0)
	{
		func_71(-1, 1);
	}
	if (unk_0x765F6FEEFF39224F(iLocal_51))
	{
		if (!unk_0xD62C4419A41F106A(iLocal_51, 0) && unk_0x91D5C8283D19AF49(iLocal_50, 0))
		{
			if (vdist(unk_0xFBB1F99A825CAB09(iLocal_51, true), unk_0xFBB1F99A825CAB09(iLocal_50, true)) > 10f)
			{
				func_62(7);
			}
		}
		if ((unk_0xD62C4419A41F106A(iLocal_51, 0) || !unk_0x91D5C8283D19AF49(iLocal_51, 0)) || (!unk_0x71D489B4139EA15B(iLocal_51, 90f) && !unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iLocal_51, 1)))
		{
			if (!func_74(iLocal_51))
			{
				func_62(7);
			}
			else
			{
				func_62(8);
			}
		}
	}
	if (!unk_0xBC2FC12AD0FBF72E(iLocal_49[0]) && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		if (unk_0x91BBD269506D61D2(iLocal_49[0], unk_0x33CD235DF1E6A94E(), 1))
		{
			func_62(8);
		}
	}
	if (!unk_0xBC2FC12AD0FBF72E(iLocal_49[1]) && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		if (unk_0x91BBD269506D61D2(iLocal_49[1], unk_0x33CD235DF1E6A94E(), 1))
		{
			func_62(8);
		}
	}
	if (unk_0x91D5C8283D19AF49(iLocal_50, 0) && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		if (iLocal_86)
		{
			func_62(8);
		}
	}
	if (bLocal_89)
	{
		func_62(8);
	}
	if ((!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()) && func_66()) && unk_0x9ED464AAA493C8EF(unk_0x33CD235DF1E6A94E(), 7))
	{
		func_62(2);
	}
	if (!unk_0x91D5C8283D19AF49(iLocal_50, 0))
	{
		func_62(5);
	}
}

void func_88(int iParam0)
{
	if (!unk_0xBC2FC12AD0FBF72E(iLocal_49[iParam0]) && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		unk_0xED68CDDDE25A144E(iLocal_49[iParam0]);
		unk_0x99414FB2D30425C1(&iLocal_54);
		if (unk_0xF0D230FB550CD6EB(iLocal_49[iParam0], 0))
		{
			unk_0x07C339D4328CA16C(0, 0, 256);
		}
		unk_0xE0DAC4ABE9900D9A(0);
		unk_0xC4A347124F39D998(0, unk_0x33CD235DF1E6A94E(), -1, 0, 2);
		unk_0x4DDF5809B68AA635(0, unk_0x33CD235DF1E6A94E(), -1, 0);
		unk_0xC734F59A13D39AEF(iLocal_54);
		unk_0x13A2D602CD10CBAC(iLocal_49[iParam0], iLocal_54);
		unk_0xA7A57E7757ED035E(&iLocal_54);
		if (iLocal_97 == 0)
		{
			iLocal_97 = unk_0x4381C79571201852(116, unk_0xFBB1F99A825CAB09(iLocal_49[iParam0], true), -1f);
		}
	}
}

void func_89()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	switch (iLocal_48)
	{
		case 0:
			if (!unk_0xBC2FC12AD0FBF72E(iLocal_49[0]))
			{
				unk_0x4A852F02088ECC9D(iLocal_49[0], true);
			}
			if (!unk_0xBC2FC12AD0FBF72E(iLocal_49[1]))
			{
				unk_0x4A852F02088ECC9D(iLocal_49[1], true);
			}
			if (func_96())
			{
				if (func_4(&Local_106, cLocal_105, "RESEC_ATT1", 8, 0, 0, 0))
				{
					settimera(0);
					func_62(8);
				}
			}
			else if ((!unk_0xBC2FC12AD0FBF72E(iLocal_49[0]) && !unk_0xBC2FC12AD0FBF72E(iLocal_49[1])) && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
			{
				if (func_95() || func_94())
				{
					func_4(&Local_106, cLocal_105, "RESEC_ENT1", 8, 0, 0, 0);
				}
				else if (unk_0x9ED464AAA493C8EF(unk_0x33CD235DF1E6A94E(), 4))
				{
					func_4(&Local_106, cLocal_105, "RESEC_WEP1", 8, 0, 0, 0);
				}
				else
				{
					func_4(&Local_106, cLocal_105, "RESEC_WARN", 8, 0, 0, 0);
				}
				settimera(0);
				if (unk_0x765F6FEEFF39224F(iLocal_52) && unk_0x9F4718FD61B07058(iLocal_52))
				{
					if (!unk_0x5A4FB33F5B279A76(iLocal_52, iLocal_49[0]))
					{
						func_88(0);
					}
					else
					{
						unk_0xED68CDDDE25A144E(iLocal_49[0]);
					}
					if (!unk_0x5A4FB33F5B279A76(iLocal_52, iLocal_49[1]))
					{
						func_88(1);
					}
					else
					{
						unk_0xED68CDDDE25A144E(iLocal_49[1]);
					}
					iLocal_48++;
				}
				else
				{
					func_88(0);
					func_88(1);
					iLocal_48 = 2;
				}
			}
			break;
		
		case 1:
			if (func_70(iLocal_96))
			{
				if (!unk_0xBC2FC12AD0FBF72E(iLocal_49[iLocal_96]))
				{
					func_88(iLocal_96);
				}
				iLocal_48++;
			}
			break;
		
		case 2:
			if (!func_93())
			{
				if (!func_92(iLocal_50, 1000) && timera() > 10000)
				{
					bVar0 = true;
				}
				else if (timera() > 7000)
				{
					settimera(7000);
				}
				if (timera() > 5000)
				{
					if (func_95())
					{
						bVar0 = true;
					}
				}
				if (timera() > 10000)
				{
					if (func_94())
					{
						bVar0 = true;
					}
				}
				iVar1 = 0;
				while (iVar1 < iLocal_49)
				{
					if (!func_92(iLocal_49[iVar1], 1000) && (func_21() < 2f && unk_0x9ED464AAA493C8EF(unk_0x33CD235DF1E6A94E(), 6)))
					{
						bVar0 = true;
					}
					if (!unk_0xD62C4419A41F106A(iLocal_49[iVar1], 0))
					{
						if (unk_0xAC6A512C64D9A9C0(unk_0x95B959F18401C09A(), iLocal_49[iVar1]) || unk_0xC2ECB90E2DFA5802(unk_0x95B959F18401C09A(), iLocal_49[iVar1]))
						{
							bVar0 = true;
						}
					}
					iVar1++;
				}
				func_71(-1, 1);
				if (IntToFloat((unk_0xE3903F59E2F22150() - iLocal_292)) > unk_0x9562E33C057F7589(5000f, 7500f))
				{
					if (!func_67())
					{
						if (func_4(&Local_106, cLocal_105, "RESEC_WARN", 8, 0, 0, 0))
						{
							iLocal_292 = unk_0xE3903F59E2F22150();
						}
					}
				}
				if (bVar0)
				{
					func_90();
					func_62(8);
				}
			}
			break;
	}
	iVar2 = 0;
	while (iVar2 < iLocal_49)
	{
		if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()) && unk_0x765F6FEEFF39224F(iLocal_49[iVar2]))
		{
			if ((unk_0xBC2FC12AD0FBF72E(iLocal_49[iVar2]) || unk_0xD62C4419A41F106A(iLocal_49[iVar2], 0)) && unk_0x91BBD269506D61D2(iLocal_49[iVar2], unk_0x33CD235DF1E6A94E(), 0))
			{
				func_62(8);
			}
		}
		iVar2++;
	}
	if ((unk_0xBC2FC12AD0FBF72E(iLocal_49[0]) || unk_0xBC2FC12AD0FBF72E(iLocal_49[1])) || bLocal_89)
	{
		func_62(8);
	}
	if ((unk_0x91D5C8283D19AF49(iLocal_50, 0) && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E())) && func_66())
	{
		if (unk_0x91BBD269506D61D2(iLocal_50, unk_0x33CD235DF1E6A94E(), 1))
		{
			func_62(8);
		}
	}
	if (!unk_0x91D5C8283D19AF49(iLocal_50, 0))
	{
		func_62(5);
	}
	if ((!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()) && unk_0x9ED464AAA493C8EF(unk_0x33CD235DF1E6A94E(), 6)) && unk_0x5DACF31D3AC5ED8D(unk_0x33CD235DF1E6A94E()))
	{
		func_62(8);
	}
	if (func_21() > 20f || ((!iLocal_281[0] && !iLocal_281[1]) && func_21() > 5f))
	{
		func_62(7);
	}
}

void func_90()
{
	Global_14732 = 0;
	func_91();
}

void func_91()
{
	unk_0x3F4DBD0F910C454B();
	Global_16877 = 0;
	if (unk_0x12BF789190D82474())
	{
		unk_0xD92171BC6C48DB90(false);
		Global_15866 = 6;
	}
}

int func_92(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		if (unk_0x765F6FEEFF39224F(iParam0))
		{
			if ((unk_0x068481DAF84B9654(iParam0) && !unk_0xBC2FC12AD0FBF72E(unk_0x22B02EC53152632C(iParam0))) || (unk_0x680558231C80291D(iParam0) && unk_0x91D5C8283D19AF49(unk_0xEAE1362B9F5C7B18(iParam0), 0)))
			{
				if (vdist(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), unk_0xFBB1F99A825CAB09(iParam0, true)) > fLocal_290)
				{
					iVar0 = 1;
				}
				if ((unk_0xE3903F59E2F22150() - iLocal_291) > iParam1)
				{
					fLocal_290 = vdist(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), unk_0xFBB1F99A825CAB09(iParam0, true));
					iLocal_291 = unk_0xE3903F59E2F22150();
				}
			}
		}
	}
	return iVar0;
}

int func_93()
{
	if (unk_0x91D5C8283D19AF49(iLocal_50, 0) && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		if (!unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iLocal_50, 20f, 20f, 5f, 0, 1, 0) && !unk_0x09287BFEE1D9F6EF(unk_0x95B959F18401C09A(), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_94()
{
	int iVar0;
	
	if (unk_0x91D5C8283D19AF49(iLocal_50, 0) && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), unk_0x2CA911E7569D12EA(iLocal_50, 0f, 1.7532f, 0.5984f), unk_0x2CA911E7569D12EA(iLocal_50, 0f, 3.3477f, 3.5984f), 2.8f, 0, true, 0))
		{
			return 1;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_49)
		{
			if (!unk_0xBC2FC12AD0FBF72E(iLocal_49[iVar0]))
			{
				if ((!unk_0x10930B9CAD4111C2(iLocal_49[iVar0], iLocal_50, 0) && unk_0x7EABAA6F963BC011(unk_0x33CD235DF1E6A94E(), iLocal_50)) && vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), unk_0xFBB1F99A825CAB09(iLocal_49[iVar0], true)) < 400f)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_95()
{
	if (unk_0x91D5C8283D19AF49(iLocal_50, 0) && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		if (unk_0x6EE765D5B613AB2A(unk_0x33CD235DF1E6A94E()) == iLocal_50)
		{
			if (unk_0x07F8A5FB357E9307(unk_0x33CD235DF1E6A94E()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_96()
{
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		if ((!unk_0xBC2FC12AD0FBF72E(iLocal_49[0]) && unk_0x335C0645074963FE(iLocal_49[0], unk_0x33CD235DF1E6A94E(), 20f, 20f, 5f, 0, 1, 0)) || (!unk_0xBC2FC12AD0FBF72E(iLocal_49[1]) && unk_0x335C0645074963FE(iLocal_49[1], unk_0x33CD235DF1E6A94E(), 20f, 20f, 5f, 0, 1, 0)))
		{
			if (unk_0x9ED464AAA493C8EF(unk_0x33CD235DF1E6A94E(), 4) && unk_0x5DACF31D3AC5ED8D(unk_0x33CD235DF1E6A94E()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_97(char* sParam0)
{
	unk_0x6D39881CA5436178(sParam0);
	return unk_0xA32C2C4DF096C08A(0);
}

void func_98(var uParam0, vector3 vParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
	{
		func_130(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_99(uParam0, vParam1, iParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_99(var uParam0, vector3 vParam1, var uParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	int iVar0;
	
	if (uParam0->f_1 && unk_0x8D255802EBF1DA76())
	{
		if (unk_0xE3903F59E2F22150() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = uParam2;
	if (unk_0x6D2E2622CA149402(iVar0))
	{
		if (!unk_0xB331FCEB94EB05C8())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_97(iVar0))
	{
		func_122();
	}
	if (!unk_0x8D255802EBF1DA76())
	{
		if (func_117(uParam0, bParam4, bParam6, 0))
		{
			func_116(uParam0, vParam1, iParam3);
		}
		if (*uParam0)
		{
			*uParam0 = 0;
		}
		else if (uParam0->f_6 == 2)
		{
			if (func_104(iVar0))
			{
				if ((unk_0x6D2E2622CA149402(uParam0->f_3) && !unk_0x6D2E2622CA149402(iVar0)) && unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
				{
					if ((unk_0x73E7A21FD53144AB(vParam1, 1f) && !unk_0xFAC8F20FBC764F4D()) && uParam5)
					{
						if (!func_97(iVar0))
						{
							func_132(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0xCE3CFF625BEBAA04("CMN_HINT", iVar0))
							{
								func_103(1);
							}
						}
					}
				}
			}
		}
		else if (func_104(iVar0))
		{
			if (unk_0x6D2E2622CA149402(uParam0->f_3) && !unk_0x6D2E2622CA149402(iVar0))
			{
				if ((unk_0x73E7A21FD53144AB(vParam1, 1f) && !unk_0xFAC8F20FBC764F4D()) && uParam5)
				{
					if (!func_97(iVar0))
					{
						func_132(iVar0, -1);
						uParam0->f_3 = iVar0;
						if (unk_0xCE3CFF625BEBAA04("CMN_HINT", iVar0))
						{
							func_103(1);
						}
					}
				}
			}
		}
	}
	else
	{
		if (!unk_0x6D2E2622CA149402(iVar0))
		{
			if (func_97(iVar0) && unk_0xFAC8F20FBC764F4D())
			{
				unk_0xEDF90B96BED57BCE(1);
			}
		}
		if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
		{
			if (unk_0x21DE39E28274C4C1(unk_0x33CD235DF1E6A94E()))
			{
				if (unk_0xCB75C331DD5DDCCC(3) == 3 || unk_0xCB75C331DD5DDCCC(3) == 4)
				{
					func_130(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xBEAC9DF5323BB074(unk_0x33CD235DF1E6A94E()))
			{
				if (unk_0xCB75C331DD5DDCCC(6) == 3 || unk_0xCB75C331DD5DDCCC(6) == 4)
				{
					func_130(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xA5C8D37514ACC1FA(unk_0x33CD235DF1E6A94E()))
			{
				if (unk_0xCB75C331DD5DDCCC(4) == 3 || unk_0xCB75C331DD5DDCCC(4) == 4)
				{
					func_130(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xFF29C0328E1D9F8D(unk_0x33CD235DF1E6A94E()))
			{
				if (unk_0xCB75C331DD5DDCCC(5) == 3 || unk_0xCB75C331DD5DDCCC(5) == 4)
				{
					func_130(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xA2F0EA9AB6142D97(unk_0x33CD235DF1E6A94E()))
			{
				if (unk_0xCB75C331DD5DDCCC(2) == 3 || unk_0xCB75C331DD5DDCCC(2) == 4)
				{
					func_130(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x8ACF6D19519697BD() == 3 || unk_0x8ACF6D19519697BD() == 4)
			{
				func_130(uParam0, iVar0, 1);
			}
		}
		if (!func_117(uParam0, bParam4, bParam6, 0))
		{
			if ((!*uParam0 && !uParam0->f_1) && !func_102(uParam0))
			{
				func_100(uParam0);
			}
		}
	}
}

void func_100(var uParam0)
{
	if (func_101(unk_0x33CD235DF1E6A94E()))
	{
		unk_0xE0DAC4ABE9900D9A(unk_0x33CD235DF1E6A94E());
	}
	if (unk_0x8D255802EBF1DA76())
	{
		unk_0x052830EE89C97404(true);
		unk_0x3754CDF254D9F523(0);
		unk_0x7CED302277C0F3D3("HINT_CAM_SCENE");
		unk_0xA94473FEE1796AED("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x0B1F8038F56C12B7("FocusOut", 0, 0);
			unk_0x0F8EAEEC97DDBCB3(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_101(int iParam0)
{
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		if (unk_0x680558231C80291D(iParam0))
		{
			if (unk_0x91D5C8283D19AF49(unk_0xEAE1362B9F5C7B18(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x068481DAF84B9654(iParam0))
		{
			if (!unk_0xBC2FC12AD0FBF72E(unk_0x22B02EC53152632C(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0xA3A29DB165882310(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_102(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0xE3903F59E2F22150()
		{
			return 1;
		}
	}
	return 0;
}

int func_103(bool bParam0)
{
	switch (Global_36425)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_106565.f_10043.f_100++;
			}
			return Global_106565.f_10043.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_106565.f_10043.f_101++;
			}
			return Global_106565.f_10043.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_106565.f_10043.f_102++;
			}
			return Global_106565.f_10043.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_104(char* sParam0)
{
	if (!func_105(1, 1, 0))
	{
		if ((!unk_0x786AF4A44E1B5B4B(sParam0) && func_97(sParam0)) || func_97("CMN_HINT"))
		{
			unk_0xEDF90B96BED57BCE(1);
		}
		return 0;
	}
	switch (Global_36425)
	{
		case 0:
		case 3:
			if (func_103(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_103(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_103(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_105(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x71EC91BA8C88BCE0())
	{
		return 0;
	}
	if (func_115(0))
	{
		return 0;
	}
	if (func_114())
	{
		return 0;
	}
	if (unk_0xE3F7CBC28F745843())
	{
		return 0;
	}
	if (Global_68807)
	{
		return 0;
	}
	if (unk_0x1BCDA92AD0A7835B(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_53675)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
		{
			if (unk_0x21DE39E28274C4C1(unk_0x33CD235DF1E6A94E()))
			{
				if (unk_0xCB75C331DD5DDCCC(3) == 3 || unk_0xCB75C331DD5DDCCC(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xBEAC9DF5323BB074(unk_0x33CD235DF1E6A94E()))
			{
				if (unk_0xCB75C331DD5DDCCC(6) == 3 || unk_0xCB75C331DD5DDCCC(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xA5C8D37514ACC1FA(unk_0x33CD235DF1E6A94E()))
			{
				if (unk_0xCB75C331DD5DDCCC(4) == 3 || unk_0xCB75C331DD5DDCCC(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xFF29C0328E1D9F8D(unk_0x33CD235DF1E6A94E()))
			{
				if (unk_0xCB75C331DD5DDCCC(5) == 3 || unk_0xCB75C331DD5DDCCC(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xA2F0EA9AB6142D97(unk_0x33CD235DF1E6A94E()))
			{
				if (unk_0xCB75C331DD5DDCCC(2) == 3 || unk_0xCB75C331DD5DDCCC(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x8ACF6D19519697BD() == 3 || unk_0x8ACF6D19519697BD() == 4)
			{
				return 0;
			}
			if (unk_0x1E67980B42842E37())
			{
				return 0;
			}
		}
	}
	if ((func_113() || func_112(Global_4456448.f_161209)) || func_111())
	{
		if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
		{
			iVar0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
			iVar1 = func_110(unk_0x33CD235DF1E6A94E(), 0);
			if (((unk_0x3FCD3FCFAFC3878C(iVar0, iVar1) || (unk_0x541D5C57194E73C4(iVar0) == 562680400 && iVar1 != -1)) || (unk_0x541D5C57194E73C4(iVar0) == 1181327175 && iVar1 != -1)) || (((unk_0x541D5C57194E73C4(iVar0) == -1693015116 && iVar1 == 0) && func_109(iVar0, 10)) && unk_0xEECA910C75BFF02B(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1680665)
	{
		return 0;
	}
	if (func_106(unk_0x95B959F18401C09A()))
	{
		return 0;
	}
	return 1;
}

int func_106(int iParam0)
{
	if (iParam0 != func_108())
	{
		if (func_107(iParam0, 1, 1))
		{
			return Global_2424047[iParam0 /*416*/].f_309.f_5 != -1;
		}
		else if ((Global_1312867 && iParam0 == unk_0x95B959F18401C09A()) && func_107(iParam0, 1, 0))
		{
			return Global_2424047[iParam0 /*416*/].f_309.f_5 != -1;
		}
	}
	return 0;
}

int func_107(int iParam0, bool bParam1, bool bParam2)
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

int func_108()
{
	return -1;
}

int func_109(int iParam0, int iParam1)
{
	if (unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		if (unk_0xCD2E94F6C3101AFC(iParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (unk_0x3DE306309922F8D1(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_110(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		if (unk_0xF0D230FB550CD6EB(iParam0, iParam1))
		{
			iVar0 = unk_0xF2C96862595654B4(iParam0, iParam1);
			if (unk_0x765F6FEEFF39224F(iVar0))
			{
				iVar1 = unk_0xA2AD91D40FCCF9D2(unk_0x541D5C57194E73C4(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x67FFBB75D2430704(iVar0, iVar3, 0))
					{
						if (unk_0x7BDC41A7CA0C77A2(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

var func_111()
{
	return Global_2448756.f_16;
}

bool func_112(int iParam0)
{
	return iParam0 == 51;
}

var func_113()
{
	return Global_2448756.f_15;
}

bool func_114()
{
	return unk_0xE3903F59E2F22150() <= Global_17411.f_5878 + 100;
}

int func_115(int iParam0)
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

void func_116(var uParam0, vector3 vParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x052830EE89C97404(false);
	iVar0 = uParam0->f_9;
	iVar1 = uParam0->f_10;
	if (iParam2 == 1726668277)
	{
		if (iVar0 < 1500)
		{
			iVar0 = 1500;
		}
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
	}
	unk_0xAB2EAB7DC12EC718(vParam1, -1, iVar0, iVar1, iParam2);
	iVar2 = 2048;
	iVar3 = 3;
	unk_0xAE5B044AA2973E2A(unk_0x33CD235DF1E6A94E(), vParam1, -1, iVar2, iVar3);
	unk_0x0B1F8038F56C12B7("FocusIn", 0, 0);
	unk_0xDEFB5E2E5CBD460A("HINT_CAM_SCENE");
	unk_0x0F8EAEEC97DDBCB3(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0xE3903F59E2F22150();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

int func_117(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0xE3903F59E2F22150() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
				{
					if (func_121(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xE3903F59E2F22150();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_120(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xE3903F59E2F22150();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_120(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xE3903F59E2F22150();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_121(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xE3903F59E2F22150();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_102(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0xE3903F59E2F22150() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
					{
						if (!func_121(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0xE3903F59E2F22150();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_120(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xE3903F59E2F22150();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_120(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xE3903F59E2F22150();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_121(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xE3903F59E2F22150();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
				{
					if (!func_121(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_120(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_120(bParam1, bParam2, bParam3) || unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1) || unk_0xA9680DDFB5EB643A(unk_0x33CD235DF1E6A94E(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_121(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0xE3903F59E2F22150() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
					{
						if (func_119(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_118(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1) || func_118(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1) || unk_0xA9680DDFB5EB643A(unk_0x33CD235DF1E6A94E(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_119(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_102(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_105(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_122();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_118(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_105(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		if (!unk_0x0FFAAF12F0E94E37(unk_0x95B959F18401C09A()))
		{
			unk_0x3FD9339AA95E323F(0, 140, 1);
			unk_0x3FD9339AA95E323F(0, 80, 1);
			if (unk_0xC6FADCE8D6467372(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_119(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_105(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		unk_0x3FD9339AA95E323F(0, 80, 1);
		if (unk_0x7D01DE4C909B4391())
		{
			if (unk_0xC6FADCE8D6467372(0, 80))
			{
				unk_0x052830EE89C97404(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_120(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_105(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		if (!unk_0x0FFAAF12F0E94E37(unk_0x95B959F18401C09A()))
		{
			unk_0x3FD9339AA95E323F(0, 140, 1);
			unk_0x3FD9339AA95E323F(0, 80, 1);
			if (unk_0x1CAA347A3C84C225(0, 80) && unk_0xE3903F59E2F22150() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_121(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_105(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		unk_0x3FD9339AA95E323F(0, 80, 1);
		if (unk_0x7D01DE4C909B4391())
		{
			if (unk_0x1CAA347A3C84C225(0, 80) && unk_0xE3903F59E2F22150() > Global_116)
			{
				unk_0x052830EE89C97404(false);
				return 1;
			}
		}
	}
	return 0;
}

void func_122()
{
	unk_0x8950ED5730F62EE8(&Global_2424, 4);
}

void func_123(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_124(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_124(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
	{
		func_130(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_125(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_125(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0x8D255802EBF1DA76())
	{
		if (unk_0xE3903F59E2F22150() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam3;
	if (unk_0x6D2E2622CA149402(iVar0))
	{
		if (!unk_0xB331FCEB94EB05C8())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_97(iVar0))
	{
		func_122();
	}
	if (func_101(iParam1) && unk_0x042B0E494045A7DF(iParam1))
	{
		iVar1 = 0;
		if (unk_0x068481DAF84B9654(iParam1))
		{
			unk_0x58F0F30530159EBB(unk_0x22B02EC53152632C(iParam1));
			unk_0x8DBE7210C47D73E7(unk_0x22B02EC53152632C(iParam1), 1);
			if (unk_0x74297B6E2665ED22(unk_0x22B02EC53152632C(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x680558231C80291D(iParam1))
		{
			unk_0xBC85CA5EAD2D2A92(unk_0xEAE1362B9F5C7B18(iParam1));
			if (unk_0xB623C0AF503B1EA7(unk_0xEAE1362B9F5C7B18(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xA3A29DB165882310(iParam1))
		{
			unk_0x502305F7344E91C7(unk_0x6BB2785511E9F977(iParam1));
			if (unk_0xC5183090D5499516(unk_0x6BB2785511E9F977(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x8D255802EBF1DA76())
		{
			if (func_117(uParam0, bParam5, bParam7, 0))
			{
				func_126(uParam0, iParam1, vParam2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_104(iVar0))
				{
					if ((unk_0x6D2E2622CA149402(uParam0->f_3) && !unk_0x6D2E2622CA149402(iVar0)) && unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
					{
						if ((iVar1 && !unk_0xFAC8F20FBC764F4D()) && uParam6)
						{
							if (!func_97(iVar0))
							{
								func_132(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0xCE3CFF625BEBAA04("CMN_HINT", iVar0))
								{
									func_103(1);
								}
							}
						}
					}
				}
			}
			else if (func_104(iVar0))
			{
				if (unk_0x6D2E2622CA149402(uParam0->f_3) && !unk_0x6D2E2622CA149402(iVar0))
				{
					if (((unk_0x3F219400E5FE4B69(iParam1) && iVar1) && !unk_0xFAC8F20FBC764F4D()) && uParam6)
					{
						if (!func_97(iVar0))
						{
							func_132(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0xCE3CFF625BEBAA04("CMN_HINT", iVar0))
							{
								func_103(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0x6D2E2622CA149402(sParam3))
			{
				if (func_97(sParam3))
				{
					unk_0xEDF90B96BED57BCE(1);
				}
			}
			if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
			{
				if (unk_0x21DE39E28274C4C1(unk_0x33CD235DF1E6A94E()))
				{
					if (unk_0xCB75C331DD5DDCCC(3) == 3 || unk_0xCB75C331DD5DDCCC(3) == 4)
					{
						func_130(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xBEAC9DF5323BB074(unk_0x33CD235DF1E6A94E()))
				{
					if (unk_0xCB75C331DD5DDCCC(6) == 3 || unk_0xCB75C331DD5DDCCC(6) == 4)
					{
						func_130(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xA5C8D37514ACC1FA(unk_0x33CD235DF1E6A94E()))
				{
					if (unk_0xCB75C331DD5DDCCC(4) == 3 || unk_0xCB75C331DD5DDCCC(4) == 4)
					{
						func_130(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xFF29C0328E1D9F8D(unk_0x33CD235DF1E6A94E()))
				{
					if (unk_0xCB75C331DD5DDCCC(5) == 3 || unk_0xCB75C331DD5DDCCC(5) == 4)
					{
						func_130(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xA2F0EA9AB6142D97(unk_0x33CD235DF1E6A94E()))
				{
					if (unk_0xCB75C331DD5DDCCC(2) == 3 || unk_0xCB75C331DD5DDCCC(2) == 4)
					{
						func_130(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8ACF6D19519697BD() == 3 || unk_0x8ACF6D19519697BD() == 4)
				{
					func_130(uParam0, iVar0, 1);
				}
			}
			if (!func_117(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_102(uParam0))
				{
					func_100(uParam0);
				}
			}
		}
	}
	else
	{
		func_130(uParam0, iVar0, 0);
	}
}

void func_126(var uParam0, int iParam1, vector3 vParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1319096 == 1)
	{
		return;
	}
	if (unk_0xD62C4419A41F106A(iParam1, 0))
	{
		func_130(uParam0, 0, 0);
	}
	if (func_129(vParam2, 0f, 0f, 0f, 0))
	{
		if (unk_0x068481DAF84B9654(iParam1))
		{
			iVar0 = unk_0x22B02EC53152632C(iParam1);
			if (!unk_0xF0D230FB550CD6EB(iVar0, 0))
			{
				if (unk_0xE09156665EC2D83B(iVar0))
				{
					if (!func_127())
					{
						vParam2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0x28C4F998CC33B00F(iVar0))
				{
					vParam2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x052830EE89C97404(false);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam3 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	unk_0xC94CF61BF93818C8(iParam1, vParam2, 1, -1, iVar1, iVar2, iParam3);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0xC4A347124F39D998(unk_0x33CD235DF1E6A94E(), iParam1, -1, iVar3, iVar4);
	unk_0x0B1F8038F56C12B7("FocusIn", 0, 0);
	unk_0xDEFB5E2E5CBD460A("HINT_CAM_SCENE");
	unk_0x0F8EAEEC97DDBCB3(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0xE3903F59E2F22150();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_127()
{
	return func_128(unk_0x95B959F18401C09A());
}

int func_128(int iParam0)
{
	if (unk_0x541D5C57194E73C4(unk_0x378BD4B3881338C2(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_129(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

void func_130(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0xB331FCEB94EB05C8())
	{
		if (unk_0x0E4018692D92041D(Global_2528542.f_4582, 26))
		{
			return;
		}
	}
	if (unk_0x8D255802EBF1DA76())
	{
		unk_0x3754CDF254D9F523(iParam2);
		unk_0xA94473FEE1796AED("FocusIn");
		unk_0x7CED302277C0F3D3("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x0B1F8038F56C12B7("FocusOut", 0, 0);
			unk_0x0F8EAEEC97DDBCB3(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	unk_0x052830EE89C97404(true);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x6D2E2622CA149402(sVar0))
	{
		if (!unk_0xB331FCEB94EB05C8())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x6D2E2622CA149402(uParam0->f_3))
	{
		if (func_97(uParam0->f_3))
		{
			unk_0xEDF90B96BED57BCE(1);
		}
	}
	if (!unk_0x6D2E2622CA149402(sVar0))
	{
		if (func_97(sVar0))
		{
			unk_0xEDF90B96BED57BCE(1);
		}
	}
}

void func_131(int iParam0)
{
	unk_0x8950ED5730F62EE8(&(Global_106565.f_24989.f_6), iParam0);
}

void func_132(char* sParam0, int iParam1)
{
	unk_0x37621D6689F9E3C3(sParam0);
	unk_0x092150016C06C431(0, 0, true, iParam1);
}

bool func_133(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_106565.f_24989.f_6, iParam0);
}

int func_134(int iParam0)
{
	if (func_137())
	{
		Global_106555 = 1;
		Global_106552 = unk_0xE3903F59E2F22150();
		if (func_50(Global_106554))
		{
			func_135(0);
		}
		unk_0xF72C40745AA793F1(1, "RE_TITLE");
		if (iParam0 && func_50(Global_106554))
		{
			unk_0x0B1FD891620F7745();
		}
		return 1;
	}
	return 0;
}

void func_135(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_106565.f_24989.f_2 < 3)
			{
				if (!unk_0x6B59932722922B69())
				{
					func_132(func_136(iParam0), -1);
					Global_106565.f_24989.f_2++;
					unk_0x8950ED5730F62EE8(&Global_106561, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x0E4018692D92041D(Global_106561, 1))
			{
				if (!unk_0x6B59932722922B69())
				{
					func_132(func_136(iParam0), -1);
					Global_106565.f_24989.f_3++;
					unk_0x8950ED5730F62EE8(&Global_106561, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x0E4018692D92041D(Global_106561, 2))
			{
				if (!unk_0x6B59932722922B69())
				{
					func_132(func_136(iParam0), -1);
					Global_106565.f_24989.f_4++;
					unk_0x8950ED5730F62EE8(&Global_106561, 2);
				}
			}
			break;
	}
}

char* func_136(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_137()
{
	switch (func_138(&Global_25824, 0, 5, 0, unk_0x8C40DC84EDF05997()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_138(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_91190.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_142(0))
		{
			return 0;
		}
		Global_36389++;
		*uParam0 = Global_36389;
		unk_0xF23201C524E43F1C(unk_0x3EE1295CEFBEFED4(), 0);
		Global_17272.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x3D732B99F6301C4D(8);
		}
		Global_36425 = iParam2;
		Global_36387 = *uParam0;
		Global_36388 = iParam4;
		Global_36386 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_36386 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_36386)
			{
				if (Global_36392[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_36387 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_140(iParam2))
		{
			return 0;
		}
		if (Global_36386 == 8)
		{
			return 0;
		}
		Global_36389++;
		*uParam0 = Global_36389;
		Global_36392[Global_36386 /*4*/] = Global_36389;
		Global_36392[Global_36386 /*4*/].f_1 = iParam1;
		Global_36392[Global_36386 /*4*/].f_2 = iParam2;
		Global_36392[Global_36386 /*4*/].f_3 = 0;
		Global_36386++;
		if (iParam4 != 0)
		{
			func_139(uParam0, iParam4);
		}
	}
	return 2;
}

void func_139(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_36386 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_36386)
	{
		if (Global_36392[iVar0 /*4*/] == *uParam0)
		{
			Global_36392[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_140(int iParam0)
{
	return func_141(iParam0, Global_36425);
}

int func_141(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_142(int iParam0)
{
	if (Global_36425 == 15)
	{
		return 0;
	}
	if (func_140(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_143()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	switch (iLocal_48)
	{
		case 0:
			if (unk_0x91D5C8283D19AF49(iLocal_50, 0))
			{
				if (!unk_0xBC2FC12AD0FBF72E(iLocal_49[0]) && !unk_0xBC2FC12AD0FBF72E(iLocal_49[1]))
				{
					unk_0x28F648743D7DE312(iLocal_49[0], 6, true);
					unk_0x28F648743D7DE312(iLocal_49[1], 6, true);
					unk_0x4A852F02088ECC9D(iLocal_49[0], true);
					unk_0x4A852F02088ECC9D(iLocal_49[1], true);
					if (unk_0x10930B9CAD4111C2(iLocal_49[0], iLocal_50, 0) && unk_0x10930B9CAD4111C2(iLocal_49[1], iLocal_50, 0))
					{
						if (iLocal_45 == 2)
						{
							unk_0x99414FB2D30425C1(&iVar0);
							unk_0x77C4189A8E5C57C2(0, iLocal_50, -574.6195f, -847.232f, 25.2925f, 10f, 0, joaat("stockade"), 786603, 2f, 4f);
							unk_0x21D56A8927F5A92A(0, iLocal_50, 10f, 786603);
							unk_0xC734F59A13D39AEF(iVar0);
							unk_0x13A2D602CD10CBAC(iLocal_49[0], iVar0);
							unk_0xA7A57E7757ED035E(&iVar0);
							iLocal_48++;
						}
						else if (iLocal_45 == 4)
						{
							unk_0x99414FB2D30425C1(&iVar1);
							unk_0x77C4189A8E5C57C2(0, iLocal_50, -551.2968f, -1119.418f, 20.4011f, 10f, 0, joaat("stockade"), 786603, 2f, 4f);
							unk_0x21D56A8927F5A92A(0, iLocal_50, 10f, 786603);
							unk_0xC734F59A13D39AEF(iVar1);
							unk_0x13A2D602CD10CBAC(iLocal_49[0], iVar1);
							unk_0xA7A57E7757ED035E(&iVar1);
							iLocal_48++;
						}
						else if (iLocal_45 == 7)
						{
							unk_0x99414FB2D30425C1(&iVar2);
							unk_0x77C4189A8E5C57C2(0, iLocal_50, 2786.752f, 4358.032f, 48.6794f, 10f, 0, joaat("stockade"), 786603, 2f, 4f);
							unk_0x21D56A8927F5A92A(0, iLocal_50, 10f, 786603);
							unk_0xC734F59A13D39AEF(iVar2);
							unk_0x13A2D602CD10CBAC(iLocal_49[0], iVar2);
							unk_0xA7A57E7757ED035E(&iVar2);
							iLocal_48++;
						}
						else
						{
							unk_0x21D56A8927F5A92A(iLocal_49[0], iLocal_50, 10f, 786603);
							iLocal_48++;
						}
					}
					else
					{
						if (!unk_0x10930B9CAD4111C2(iLocal_49[0], iLocal_50, 0) && unk_0xD76D6BCC14B95CE1(iLocal_49[0], -1794415470) != 1)
						{
							unk_0xC838CE9837D0ABAF(iLocal_49[0], iLocal_50, -1, -1, 1f, 8388608, 0);
						}
						if (!unk_0x10930B9CAD4111C2(iLocal_49[1], iLocal_50, 0) && unk_0xD76D6BCC14B95CE1(iLocal_49[1], -1794415470) != 1)
						{
							unk_0xC838CE9837D0ABAF(iLocal_49[1], iLocal_50, -1, 0, 1f, 8388608, 0);
						}
					}
				}
			}
			break;
		
		case 1:
			if (((((func_147() || func_146()) || func_95()) || func_94()) || func_145()) || func_144())
			{
				if (func_21() < 20f)
				{
					func_90();
					func_4(&Local_106, cLocal_105, "RESEC_VFLEE1", 8, 0, 0, 0);
				}
				func_62(6);
			}
			if (unk_0x91D5C8283D19AF49(iLocal_50, 0) && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
			{
				iVar3 = 0;
				while (iVar3 < iLocal_49)
				{
					if (!unk_0xBC2FC12AD0FBF72E(iLocal_49[iVar3]) && !unk_0xD62C4419A41F106A(iLocal_49[iVar3], 0))
					{
						if (unk_0x085941C2A0E1ABAF(unk_0x33CD235DF1E6A94E()) && unk_0x2E9A4AE2A5B4D8E8(iLocal_49[iVar3]))
						{
							func_62(8);
						}
					}
					else
					{
						func_62(6);
					}
					iVar3++;
				}
				if (unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iLocal_50, 1))
				{
					func_62(8);
				}
			}
			break;
	}
	if (iLocal_46 == 4)
	{
		if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
		{
			unk_0x96C4B46F194803A7(unk_0x33CD235DF1E6A94E(), &iVar4, 1);
			if ((iVar4 == joaat("weapon_stickybomb") || iVar4 == joaat("weapon_molotov")) || iVar4 == joaat("weapon_grenade"))
			{
				unk_0x635CFE8F0E30DBAF("PLAYER HAS PROJECTILE WEAPON", unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), 0, 0, 255, 255);
				if ((unk_0x5DACF31D3AC5ED8D(unk_0x33CD235DF1E6A94E()) && !unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), unk_0x2CA911E7569D12EA(iLocal_50, 0f, -3.44f, -3f), unk_0x2CA911E7569D12EA(iLocal_50, 0f, -13.44f, 3f), 2.3f, 0, true, 0)) && vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), unk_0xFBB1F99A825CAB09(iLocal_50, true)) < 225f)
				{
					func_62(6);
				}
				if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), unk_0x2CA911E7569D12EA(iLocal_50, 0f, -3.44f, -3f), unk_0x2CA911E7569D12EA(iLocal_50, 0f, -13.44f, 3f), 2.3f, 0, true, 0))
				{
					unk_0xCFBA20230D6CDB6C("PLAYER IS BEHIND VAN", 0.1f, 0.8f, 0f, 0, 0, 255, 255);
				}
				if (vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), unk_0xFBB1F99A825CAB09(iLocal_50, true)) < 225f)
				{
					unk_0xCFBA20230D6CDB6C("PLAYER IS CLOSE TO VAN", 0.1f, 0.82f, 0f, 0, 0, 255, 255);
				}
				if (unk_0x5DACF31D3AC5ED8D(unk_0x33CD235DF1E6A94E()))
				{
				}
			}
		}
		if (((unk_0x91D5C8283D19AF49(iLocal_50, 0) && func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0xFBB1F99A825CAB09(iLocal_50, true), 25f, 0)) || (!unk_0xBC2FC12AD0FBF72E(iLocal_49[0]) && func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0xFBB1F99A825CAB09(iLocal_49[0], true), 20f, 0))) || (!unk_0xBC2FC12AD0FBF72E(iLocal_49[1]) && func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0xFBB1F99A825CAB09(iLocal_49[1], true), 20f, 0)))
		{
			func_62(6);
		}
		if (iLocal_46 != 4)
		{
			if (!unk_0xBC2FC12AD0FBF72E(iLocal_49[0]))
			{
				unk_0x28F648743D7DE312(iLocal_49[0], 6, false);
				unk_0x4A852F02088ECC9D(iLocal_49[0], false);
			}
			if (!unk_0xBC2FC12AD0FBF72E(iLocal_49[1]))
			{
				unk_0x28F648743D7DE312(iLocal_49[1], 6, false);
				unk_0x4A852F02088ECC9D(iLocal_49[1], false);
			}
		}
	}
}

int func_144()
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	if ((unk_0x91D5C8283D19AF49(iLocal_50, 0) && unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A())) && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		vVar0 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true) - unk_0xFBB1F99A825CAB09(iLocal_50, true) };
		vVar1 = { unk_0xB969B7304D29679F(iLocal_50) };
		vVar2 = { unk_0x16068053F8800179(iLocal_50, unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true)) };
		if (((vVar2.y > 1f && (((unk_0xC2ECB90E2DFA5802(unk_0x95B959F18401C09A(), iLocal_50) || unk_0xAC6A512C64D9A9C0(unk_0x95B959F18401C09A(), iLocal_50)) || unk_0xAC6A512C64D9A9C0(unk_0x95B959F18401C09A(), iLocal_49[0])) || unk_0xAC6A512C64D9A9C0(unk_0x95B959F18401C09A(), iLocal_49[1]))) && unk_0x7EECA16E87982278(unk_0x989A68339D9F80C4(vVar1.x, vVar1.y, vVar0.x, vVar0.y)) < 60f) && unk_0x989A68339D9F80C4(vVar1.z, vVar1.y, vVar0.z, vVar0.y) < 30f)
		{
			return 1;
		}
	}
	return 0;
}

int func_145()
{
	if (unk_0x91D5C8283D19AF49(iLocal_50, 0) && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		if ((unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), unk_0x2CA911E7569D12EA(iLocal_50, 2.7f, 7f, -2f), unk_0x2CA911E7569D12EA(iLocal_50, 2.7f, -3.25f, 3f), 3f, 0, true, 0) || unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), unk_0x2CA911E7569D12EA(iLocal_50, -2.7f, 7f, -2f), unk_0x2CA911E7569D12EA(iLocal_50, -2.7f, -3.25f, 3f), 3f, 0, true, 0)) || unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), unk_0x2CA911E7569D12EA(iLocal_50, 0f, 7f, -2f), unk_0x2CA911E7569D12EA(iLocal_50, 0f, 0f, 3f), 2.4f, 0, true, 0))
		{
			if (unk_0x105CB7A75E93DC77(unk_0x33CD235DF1E6A94E()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_146()
{
	int iVar0;
	
	if (unk_0x91D5C8283D19AF49(iLocal_50, 0) && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
		{
			if (unk_0x91D5C8283D19AF49(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), 0))
			{
				iVar0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
			}
		}
		else if (unk_0x765F6FEEFF39224F(unk_0x8918EC905FC8975D()))
		{
			iVar0 = unk_0x8918EC905FC8975D();
		}
		if (unk_0x765F6FEEFF39224F(iVar0) && unk_0x765F6FEEFF39224F(iLocal_50))
		{
			return ((unk_0x91D5C8283D19AF49(iVar0, 0) && unk_0x4ED4D1D8B2023FD8(iVar0, iLocal_50)) && unk_0x8BB475EA09C9A0EB(iVar0) > 10f);
		}
	}
	return 0;
}

int func_147()
{
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		if (iLocal_86)
		{
			return 1;
		}
		if (!unk_0xBC2FC12AD0FBF72E(iLocal_49[0]) || unk_0xD62C4419A41F106A(iLocal_49[0], 0))
		{
			if (unk_0x91BBD269506D61D2(iLocal_49[0], unk_0x33CD235DF1E6A94E(), 1))
			{
				return 1;
			}
		}
		if (!unk_0xBC2FC12AD0FBF72E(iLocal_49[1]) || unk_0xD62C4419A41F106A(iLocal_49[1], 0))
		{
			if (unk_0x91BBD269506D61D2(iLocal_49[1], unk_0x33CD235DF1E6A94E(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_148()
{
	float fVar0;
	
	if ((!unk_0xBC2FC12AD0FBF72E(iLocal_49[0]) && !unk_0xBC2FC12AD0FBF72E(iLocal_49[1])) && unk_0x91D5C8283D19AF49(iLocal_50, 0))
	{
		switch (iLocal_48)
		{
			case 0:
				vLocal_283 = { unk_0x2D49816199C51B0C(iLocal_50, 0) };
				vLocal_284 = { unk_0x60B5C1FD066CB864(iLocal_50, 2) };
				vLocal_285 = { unk_0xF666CBF66A90975A("random@security_van", "sec_case_into_van_calm", vLocal_283, vLocal_284, 0, 2) };
				bLocal_288 = false;
				iLocal_289 = 0;
				unk_0x1B2303F9DC2D90D5(iLocal_50, 1084227584);
				unk_0x99414FB2D30425C1(&iLocal_54);
				unk_0x7D575FC8F42508D8(0, 5000);
				unk_0x7E268975AF5EA74F(0, vLocal_285, 1f, -1, 0.1f, 512, vLocal_284.z);
				unk_0x43EAD1F94EC8561F(0, vLocal_284.z, 0);
				unk_0xC734F59A13D39AEF(iLocal_54);
				unk_0x13A2D602CD10CBAC(iLocal_49[1], iLocal_54);
				unk_0xA7A57E7757ED035E(&iLocal_54);
				iLocal_48++;
				break;
			
			case 1:
				vLocal_283 = { unk_0x2D49816199C51B0C(iLocal_50, 0) };
				vLocal_284 = { unk_0x60B5C1FD066CB864(iLocal_50, 2) };
				vLocal_285 = { unk_0xF666CBF66A90975A("random@security_van", "sec_case_into_van_calm", vLocal_283, vLocal_284, 0, 2) };
				if (!unk_0xDB4C79A9697E6A55(iLocal_287))
				{
					if (vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), vLocal_63) < 22500f && unk_0x715998283B012F11(iLocal_50))
					{
						iLocal_287 = unk_0x38A6890195DD00D1(vLocal_283, vLocal_284, 2);
						unk_0x08798CBF817BA887(iLocal_49[0], iLocal_287, "random@security_van", "driver_idle", 2f, -8f, 13, 0, 1148846080, 0);
						unk_0x6359F1F7F5174D4A(iLocal_287, true);
					}
				}
				if (unk_0xD76D6BCC14B95CE1(iLocal_49[1], 242628503) != 1)
				{
					unk_0x99414FB2D30425C1(&iLocal_54);
					unk_0x7E268975AF5EA74F(0, vLocal_285, 1f, -1, 0.1f, 512, vLocal_284.z);
					unk_0x43EAD1F94EC8561F(0, vLocal_284.z, 0);
					unk_0xC734F59A13D39AEF(iLocal_54);
					unk_0x13A2D602CD10CBAC(iLocal_49[1], iLocal_54);
					unk_0xA7A57E7757ED035E(&iLocal_54);
				}
				fVar0 = unk_0xC472E34C8FBEC678(iLocal_49[1]);
				if (fVar0 > 180f)
				{
					fVar0 = (fVar0 - 360f);
				}
				if (fVar0 <= -180f)
				{
					fVar0 = (fVar0 + 360f);
				}
				if (vLocal_284.z > 180f)
				{
					vLocal_284.z = (vLocal_284.z - 360f);
				}
				if (vLocal_284.z <= -180f)
				{
					vLocal_284.z = (vLocal_284.z + 360f);
				}
				if (unk_0x7EECA16E87982278((fVar0 - vLocal_284.z)) < 15f && vdist(vLocal_285, unk_0xFBB1F99A825CAB09(iLocal_49[1], true)) < 0.2f)
				{
					unk_0x53D6CDF9A1057FDB(iLocal_49[1], -1056964608);
					unk_0xED68CDDDE25A144E(iLocal_49[1]);
					bLocal_288 = true;
					iLocal_286 = unk_0x38A6890195DD00D1(vLocal_283, vLocal_284, 2);
					unk_0x08798CBF817BA887(iLocal_49[1], iLocal_286, "random@security_van", "sec_case_into_van_calm", 4f, -4f, 3, 0, 4f, 0);
					unk_0xCF73ED7F74F29138(iLocal_50, iLocal_286, "van_case_into_van_calm", "random@security_van", 4f, -1000f, 0, -1000f);
					iLocal_48++;
				}
				break;
			
			case 2:
				if (!iLocal_76)
				{
					if (((unk_0xDB4C79A9697E6A55(iLocal_286) && unk_0x4EDDCE9AAE0FC976(iLocal_286) > 0.09f) && unk_0x4EDDCE9AAE0FC976(iLocal_286) < 0.11f) && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
					{
						if (unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iLocal_49[1], 20f, 20f, 5f, 0, 1, 0))
						{
							if (func_4(&Local_106, cLocal_105, "RESEC_CHT1", 3, 0, 0, 0))
							{
								iLocal_76 = 1;
							}
						}
					}
				}
				if (unk_0xDB4C79A9697E6A55(iLocal_286))
				{
					if (!bLocal_79)
					{
						if ((unk_0x765F6FEEFF39224F(iLocal_52) && unk_0x5A4FB33F5B279A76(iLocal_52, iLocal_49[1])) && unk_0x4EDDCE9AAE0FC976(iLocal_286) > 0.3793f)
						{
							if (!unk_0x5A4FB33F5B279A76(iLocal_52, iLocal_50))
							{
								unk_0x35F11A916FDFCF32(iLocal_52, 1, true);
								unk_0x23298AB8A7D0F403(iLocal_52, false, 0);
								unk_0x2F0A6390D863D337(iLocal_52, iLocal_50, 0, unk_0x16068053F8800179(iLocal_50, unk_0xFBB1F99A825CAB09(iLocal_52, true)), 90f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							}
							bLocal_79 = true;
						}
					}
					else if (unk_0x4EDDCE9AAE0FC976(iLocal_286) > 0.546243f)
					{
						unk_0x0C6BB9365C4A5F6E(iLocal_50, -4f, 1);
						if (unk_0x765F6FEEFF39224F(iLocal_52))
						{
							iLocal_76 = 0;
							unk_0xB40411FADDCA9CC8(iLocal_50, 2, 1);
							unk_0xB40411FADDCA9CC8(iLocal_50, 3, 1);
							iLocal_48++;
						}
					}
				}
				break;
			
			case 3:
				if (!iLocal_76)
				{
					if (((unk_0xDB4C79A9697E6A55(iLocal_286) && unk_0x4EDDCE9AAE0FC976(iLocal_286) > 0.56f) && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E())) && unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iLocal_49[1], 20f, 20f, 5f, 0, 1, 0))
					{
						if (func_4(&Local_106, cLocal_105, "RESEC_CHT2", 3, 0, 0, 0))
						{
							iLocal_76 = 1;
						}
					}
				}
				if (!iLocal_289)
				{
					if ((unk_0xDB4C79A9697E6A55(iLocal_286) && unk_0x4EDDCE9AAE0FC976(iLocal_286) > 0.6f) || !unk_0xDB4C79A9697E6A55(iLocal_286))
					{
						if (unk_0xDB4C79A9697E6A55(iLocal_287))
						{
							unk_0xED68CDDDE25A144E(iLocal_49[0]);
							iLocal_287 = unk_0x38A6890195DD00D1(vLocal_283, vLocal_284, 2);
							unk_0x08798CBF817BA887(iLocal_49[0], iLocal_287, "random@security_van", "driver_exit_calm", 4f, -4f, 9, 0, 1148846080, 0);
						}
						iLocal_289 = 1;
					}
				}
				else if ((unk_0xDB4C79A9697E6A55(iLocal_287) && unk_0x4EDDCE9AAE0FC976(iLocal_287) >= 0.92f) || !unk_0xDB4C79A9697E6A55(iLocal_287))
				{
					if (!unk_0x10930B9CAD4111C2(iLocal_49[0], iLocal_50, 0) && unk_0xD76D6BCC14B95CE1(iLocal_49[0], -1794415470) != 1)
					{
						unk_0xED68CDDDE25A144E(iLocal_49[0]);
						unk_0xC838CE9837D0ABAF(iLocal_49[0], iLocal_50, -1, -1, 1f, 1, 0);
					}
				}
				if (unk_0xDB4C79A9697E6A55(iLocal_286) && unk_0xFBEC827720F84540(iLocal_49[1], unk_0x36163153849DFDA1("ENDS_IN_WALK")))
				{
					unk_0xED68CDDDE25A144E(iLocal_49[1]);
					unk_0xC838CE9837D0ABAF(iLocal_49[1], iLocal_50, -1, 0, 1f, 1, 0);
					settimera(0);
				}
				if ((func_82() && unk_0x0ACBA87310ED2513(iLocal_50, 0) == 0f) && unk_0x0ACBA87310ED2513(iLocal_50, 1) == 0f)
				{
					func_62(4);
				}
				break;
			
			case 4:
				if (timera() > 15000)
				{
					unk_0xB40411FADDCA9CC8(iLocal_50, 0, 1);
					unk_0xB40411FADDCA9CC8(iLocal_50, 1, 1);
				}
				break;
		}
		if (((!unk_0xBC2FC12AD0FBF72E(func_3()) && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E())) && vdist(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), unk_0xFBB1F99A825CAB09(func_3(), true)) < 30f) && unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) != 0)
		{
			func_62(8);
		}
	}
	if (!unk_0xBC2FC12AD0FBF72E(iLocal_49[1]))
	{
		if (unk_0xECCFCAB0A094EB5B(iLocal_103))
		{
			func_62(7);
		}
	}
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		if (func_152())
		{
			if (func_82())
			{
				func_62(6);
			}
			else
			{
				func_62(8);
			}
		}
		else if (func_150())
		{
			func_62(2);
		}
		else if (func_149())
		{
			func_62(3);
		}
	}
	if (iLocal_46 != 1)
	{
		if (iLocal_46 != 4)
		{
			func_90();
			if (!unk_0xBC2FC12AD0FBF72E(iLocal_49[0]))
			{
				if (unk_0x1CE8F0A08E65CA6A(iLocal_49[0], "random@security_van", "driver_idle", 3))
				{
					if (iLocal_45 != 2)
					{
						unk_0x548FEB9052C36FFD(iLocal_49[0], "random@security_van", "driver_exit_panic", vLocal_283, vLocal_284, 1000f, -8f, -1, 4096, 0f, 2, 0);
					}
					else
					{
						unk_0xED68CDDDE25A144E(iLocal_49[0]);
						unk_0x108754262311D34F(iLocal_49[0], "random@security_van", "driver_exit_panic", 1000f, -8f, -1, 0, 0, 0, 0, 0);
					}
				}
			}
			if ((unk_0x91D5C8283D19AF49(iLocal_50, 0) && unk_0xDB4C79A9697E6A55(iLocal_286)) && !unk_0xBC2FC12AD0FBF72E(iLocal_49[1]))
			{
				unk_0x0C6BB9365C4A5F6E(iLocal_50, -1000f, 1);
				unk_0xED68CDDDE25A144E(iLocal_49[1]);
			}
		}
		if (bLocal_79 && !unk_0xECCFCAB0A094EB5B(iLocal_103))
		{
			unk_0xB40411FADDCA9CC8(iLocal_50, 2, 1);
			unk_0xB40411FADDCA9CC8(iLocal_50, 3, 1);
		}
	}
}

int func_149()
{
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
		{
			if (!unk_0xD62C4419A41F106A(unk_0x8918EC905FC8975D(), 0))
			{
				if (func_74(unk_0x8918EC905FC8975D()))
				{
					iLocal_51 = unk_0x8918EC905FC8975D();
					return 1;
				}
			}
		}
		else if (!unk_0xD62C4419A41F106A(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), 0))
		{
			if (func_74(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0)))
			{
				fLocal_280 = (fLocal_280 + unk_0x7C475FA8D877007F());
			}
			else if (fLocal_280 > 0f)
			{
				fLocal_280 = (fLocal_280 - (unk_0x7C475FA8D877007F() * 10f));
			}
			else if (fLocal_280 < 0f)
			{
				fLocal_280 = 0f;
			}
			if (fLocal_280 > 3f)
			{
				iLocal_51 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
				return 1;
			}
		}
	}
	return 0;
}

int func_150()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_49)
	{
		if ((((((!unk_0xBC2FC12AD0FBF72E(iLocal_49[iVar0]) && unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A())) && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E())) && (unk_0xC2ECB90E2DFA5802(unk_0x95B959F18401C09A(), iLocal_49[iVar0]) || unk_0xA08B8AEC5B1A55D6(unk_0x33CD235DF1E6A94E()))) && vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), unk_0xFBB1F99A825CAB09(iLocal_49[iVar0], true)) < 9f) && !unk_0x9ED464AAA493C8EF(unk_0x33CD235DF1E6A94E(), 7)) && func_66())
		{
			return 1;
		}
		if (unk_0x3AF2B3B68DD52355(iLocal_49[iVar0]))
		{
			return 1;
		}
		iVar0++;
	}
	if (func_94())
	{
		return 1;
	}
	if ((func_151() || func_95()) && func_66())
	{
		if (!unk_0x10930B9CAD4111C2(iLocal_49[0], iLocal_50, 0) || !unk_0x10930B9CAD4111C2(iLocal_49[1], iLocal_50, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_151()
{
	int iVar0;
	
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		unk_0x96C4B46F194803A7(unk_0x33CD235DF1E6A94E(), &iVar0, 1);
		if (unk_0x9ED464AAA493C8EF(unk_0x33CD235DF1E6A94E(), 7) || (iVar0 == joaat("weapon_petrolcan") && unk_0x5DACF31D3AC5ED8D(unk_0x33CD235DF1E6A94E())))
		{
			if (unk_0xA1248DEAD0B27B8E(unk_0x33CD235DF1E6A94E()))
			{
				if (!unk_0xBC2FC12AD0FBF72E(iLocal_49[0]))
				{
					if (unk_0x335C0645074963FE(iLocal_49[0], unk_0x33CD235DF1E6A94E(), 12f, 12f, 5f, 0, 1, 0))
					{
						return 1;
					}
				}
				if (!unk_0xBC2FC12AD0FBF72E(iLocal_49[1]))
				{
					if (unk_0x335C0645074963FE(iLocal_49[1], unk_0x33CD235DF1E6A94E(), 12f, 12f, 5f, 0, 1, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_152()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_49)
	{
		if ((((((!unk_0xBC2FC12AD0FBF72E(iLocal_49[iVar0]) && unk_0x91BBD269506D61D2(iLocal_49[iVar0], unk_0x33CD235DF1E6A94E(), 1)) || (!unk_0xBC2FC12AD0FBF72E(iLocal_49[iVar0]) && unk_0x71E0DAA57FE7D5C7(iLocal_49[iVar0], unk_0x33CD235DF1E6A94E()))) || unk_0x91BBD269506D61D2(iLocal_49[iVar0], unk_0x33CD235DF1E6A94E(), 1)) || (unk_0x91BBD269506D61D2(iLocal_50, unk_0x33CD235DF1E6A94E(), 1) && func_66())) || unk_0xBC2FC12AD0FBF72E(iLocal_49[iVar0])) || unk_0xD62C4419A41F106A(iLocal_49[iVar0], 0))
		{
			return 1;
		}
		iVar0++;
	}
	if (func_145() || func_96())
	{
		return 1;
	}
	if (unk_0x91D5C8283D19AF49(iLocal_50, 0))
	{
		iVar0 = 0;
		while (iVar0 < iLocal_49)
		{
			if (!unk_0xBC2FC12AD0FBF72E(iLocal_49[iVar0]))
			{
				if (unk_0x085941C2A0E1ABAF(unk_0x33CD235DF1E6A94E()) && unk_0x2E9A4AE2A5B4D8E8(iLocal_49[iVar0]))
				{
					return 1;
				}
			}
			iVar0++;
		}
		if (unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iLocal_50, 1))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	if (unk_0xBEAC9DF5323BB074(unk_0x33CD235DF1E6A94E()) || unk_0xA5C8D37514ACC1FA(unk_0x33CD235DF1E6A94E()))
	{
		if (unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), vLocal_63, 25f, 25f, 20f, false, true, 0))
		{
			return 1;
		}
	}
	if (((unk_0x91D5C8283D19AF49(iLocal_50, 0) && func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0xFBB1F99A825CAB09(iLocal_50, true), 25f, 0)) || (!unk_0xBC2FC12AD0FBF72E(iLocal_49[0]) && func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0xFBB1F99A825CAB09(iLocal_49[0], true), 20f, 0))) || (!unk_0xBC2FC12AD0FBF72E(iLocal_49[1]) && func_31(0f, 0f, 0f, 0f, 0f, 0f, unk_0xFBB1F99A825CAB09(iLocal_49[1], true), 20f, 0)))
	{
		return 1;
	}
	return 0;
}

int func_153()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_49)
	{
		if (unk_0x765F6FEEFF39224F(iLocal_49[iVar0]))
		{
			if ((!unk_0xBC2FC12AD0FBF72E(iLocal_49[iVar0]) && !unk_0xD62C4419A41F106A(iLocal_49[iVar0], 0)) && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
			{
				if ((unk_0x416C37C19CCE0077(unk_0xFBB1F99A825CAB09(iLocal_49[iVar0], true), 5f, 1) || func_31(unk_0xFBB1F99A825CAB09(iLocal_49[iVar0], true) + Vector(5f, 10f, 10f), unk_0xFBB1F99A825CAB09(iLocal_49[iVar0], true) - Vector(5f, 5f, 5f), 0f, 0f, 0f, 0, 0)) || unk_0x91BBD269506D61D2(iLocal_49[iVar0], unk_0x33CD235DF1E6A94E(), 1))
				{
					bLocal_80 = true;
					return 1;
				}
			}
			else
			{
				bLocal_80 = true;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_154()
{
	int iVar0;
	
	iLocal_50 = unk_0xC651C43AB13A15E5(iLocal_74, vLocal_63, fLocal_64, true, true, false);
	iLocal_53 = unk_0x7CA67831169E8AA6(joaat("prop_security_case_01"), vLocal_63, true, true, false);
	unk_0x2F0A6390D863D337(iLocal_53, iLocal_50, 0, 0f, -2.4589f, 1.2195f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	unk_0x0CDD28A9DFCE2FCE(iLocal_53, false, 0);
	unk_0x6EB479EB6FF2894D(iLocal_53, iLocal_50, false);
	unk_0x1B2303F9DC2D90D5(iLocal_50, 1084227584);
	unk_0xD303E20CB0AE4AD0(iLocal_50, 3);
	unk_0x4D5F3407F1F37E28(iLocal_53, false, true, true, true, true, true, 0, false);
	unk_0x428C55A965F78103(iLocal_50, 1, 0);
	unk_0x7FC2040EB34E0E31(iLocal_50, 700, 0);
	unk_0x1C2B995BA5ADE8FF(iLocal_50, false, 0);
	unk_0x43D47AD82DA3C6EC(iLocal_50, true, 1);
	unk_0x9650821087024D0F(iLocal_50, 0);
	unk_0xD266F9D236AE6C86(iLocal_50, 1);
	unk_0x6CB3E644E3FBFEF0((vLocal_63.x - 200f), (vLocal_63.y - 200f), (vLocal_63.x + 200f), (vLocal_63.y + 200f));
	if (iLocal_44 == 3)
	{
		iLocal_49[0] = unk_0xE196503B36B6194B(iLocal_50, 26, iLocal_73, -1, 1, true);
		iLocal_49[1] = unk_0xE196503B36B6194B(iLocal_50, 26, iLocal_73, 0, 1, true);
		unk_0x9FABD0AB045A5D6E(iLocal_50, true, true, 0);
		unk_0x43D47AD82DA3C6EC(iLocal_50, true, 1);
	}
	else
	{
		iLocal_49[1] = unk_0x9BA5CF280376EEA4(26, iLocal_73, vLocal_61[1 /*3*/], fLocal_62[1], 1, true);
		iLocal_49[0] = unk_0x9BA5CF280376EEA4(26, iLocal_73, vLocal_61[0 /*3*/], fLocal_62[0], 1, true);
		unk_0xC4A347124F39D998(iLocal_49[1], iLocal_49[0], -1, 0, 2);
	}
	func_79(iLocal_49[1]);
	unk_0x9315FCF6CFE2AB41("Security_guards", &iLocal_60);
	iVar0 = 0;
	while (iVar0 < iLocal_49)
	{
		unk_0xF8E07C228A90E953(iLocal_49[iVar0], 0);
		unk_0x28F648743D7DE312(iLocal_49[iVar0], 1, false);
		unk_0x28F648743D7DE312(iLocal_49[iVar0], 13, false);
		unk_0x28F648743D7DE312(iLocal_49[iVar0], 6, true);
		unk_0x28F648743D7DE312(iLocal_49[iVar0], 8, false);
		unk_0x28F648743D7DE312(iLocal_49[iVar0], 10, true);
		unk_0x33F6BE48E356DA27(iLocal_49[iVar0], 512, true);
		unk_0x5FEE418CE11E6DDE(iLocal_49[iVar0], 118, false);
		unk_0x33F6BE48E356DA27(iLocal_49[iVar0], 128, true);
		unk_0x1096811DB3A77EC1(iLocal_49[iVar0], 0);
		unk_0x428C55A965F78103(iLocal_49[iVar0], 1, 0);
		unk_0xBCC19B7CC61AE8CD(iLocal_49[iVar0], 1);
		unk_0x955CDCCD13613323(iLocal_49[iVar0], 1);
		unk_0x697EBA5CF1A6AB57(iLocal_49[iVar0], joaat("weapon_pistol"), -1, false, true);
		unk_0x0648A75D3F60E864(iLocal_49[iVar0], iLocal_60);
		unk_0x897EF720254BBEA3(iLocal_49[iVar0], true);
		unk_0x3D258435016D9F74(iLocal_49[iVar0], 250);
		iVar0++;
	}
	unk_0x43D47AD82DA3C6EC(iLocal_49[1], true, 1);
	unk_0xD2E80177F27FD43F(1, -1533126372, iLocal_60);
	unk_0xD2E80177F27FD43F(1, iLocal_60, -1533126372);
	unk_0xD2E80177F27FD43F(2, iLocal_60, 1862763509);
	unk_0xD2E80177F27FD43F(2, 1862763509, iLocal_60);
	if (iLocal_44 == 1)
	{
		unk_0x73D993BCA1CEC58D(iLocal_49[0], 0, 1, 0, false);
		unk_0xE9220325B81B2901(iLocal_49[0], 0);
		unk_0x73D993BCA1CEC58D(iLocal_49[1], 0, 1, 0, false);
		unk_0xE9220325B81B2901(iLocal_49[1], 0);
	}
	if (func_11() == 0 && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		func_68(&Local_106, 0, unk_0x33CD235DF1E6A94E(), "MICHAEL", 0, 1);
	}
	if (func_11() == 1 && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		func_68(&Local_106, 1, unk_0x33CD235DF1E6A94E(), "FRANKLIN", 0, 1);
	}
	if (func_11() == 2 && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		func_68(&Local_106, 2, unk_0x33CD235DF1E6A94E(), "TREVOR", 0, 1);
	}
	func_68(&Local_106, 3, iLocal_49[0], "SECVANGUY1", 0, 1);
	func_68(&Local_106, 4, iLocal_49[1], "SECVANGUY2", 0, 1);
	unk_0x8C4EA5F6857553AE(iLocal_74, true);
	unk_0xE44D3FEE07A9EF2C(iLocal_73, true);
	if (iLocal_44 != 3)
	{
	}
}

float func_155(int iParam0, vector3 vParam1, bool bParam2)
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

bool func_156()
{
	func_164(&uLocal_123, iLocal_73);
	func_164(&uLocal_123, iLocal_74);
	func_164(&uLocal_123, iLocal_75);
	func_162(&uLocal_123, "random@security_van");
	func_162(&uLocal_123, "weapons@holster_1h");
	func_162(&uLocal_123, "move_injured_generic");
	func_161(&uLocal_123, 3);
	return func_157(&uLocal_123);
}

int func_157(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_145)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0x0E4018692D92041D((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!unk_0x0E4018692D92041D((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_158(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_145 = 0;
	return 1;
}

bool func_158(var uParam0)
{
	return func_159(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_159(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0x0E4018692D92041D(iParam0, 30))
	{
		if (unk_0x0E4018692D92041D(iParam0, 29))
		{
			switch (func_160(iParam0))
			{
				case 0:
					return unk_0x5D98D654CDC2165A(iParam2);
					break;
				
				case 1:
					return unk_0xE9CCF312047EBEE0(sParam1);
					break;
				
				case 2:
					return unk_0xCDA107F8BEE35F40(sParam1);
					break;
				
				case 3:
					return unk_0xD83C9F072D059CC4(sParam1);
					break;
				
				case 4:
					return unk_0x371855A6F27F144B(iParam2, sParam1);
					break;
				
				case 5:
					return unk_0xB6596C29F3179D0C(sParam1);
					break;
				
				case 6:
					return unk_0x3C05A6D663EA1B6A(sParam1, unk_0x0E4018692D92041D(iParam0, 27), -1);
					break;
				
				case 7:
					return unk_0x854F5F1E3A6FEA55(iParam2);
					break;
				
				case 8:
					return unk_0x8A7F864DAB908749(iParam2);
					break;
				
				case 9:
					return unk_0xD3957903B061A8C8();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_160(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x0E4018692D92041D(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_161(var uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		uParam0->f_147 = iParam1;
	}
}

void func_162(var uParam0, char* sParam1)
{
	func_163(uParam0, 1, -1, sParam1, 0);
}

void func_163(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0x0E4018692D92041D((*uParam0)[iVar0 /*18*/], 30))
		{
			if (unk_0x0E4018692D92041D((*uParam0)[iVar0 /*18*/], iParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 != 4)
				{
					if (!unk_0xCE3CFF625BEBAA04(sParam3, "NULL"))
					{
						if (unk_0xCE3CFF625BEBAA04(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
						{
							return;
						}
					}
				}
				if (iParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_145)
	{
		uParam0->f_145 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!unk_0x0E4018692D92041D((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0x8950ED5730F62EE8(uParam0[iVar0 /*18*/], iParam1);
			unk_0x8950ED5730F62EE8(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

void func_164(var uParam0, int iParam1)
{
	func_163(uParam0, 0, iParam1, "NULL", 0);
}

int func_165()
{
	if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()) && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		if (vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), vLocal_43) < (75f * 75f))
		{
			return 1;
		}
		if (vmag2(unk_0x43D8A2CCB19FE8A8(unk_0x33CD235DF1E6A94E())) > 1369f && !func_176())
		{
			return 0;
		}
	}
	if (func_172())
	{
		return 1;
	}
	if (func_166(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_166(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	
	iVar2 = -1;
	fVar3 = fParam0;
	if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
	{
		if (func_13(func_11()))
		{
			iVar5 = func_55();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0x0E4018692D92041D(Global_106565.f_18568[iVar1 /*6*/], 2) && !unk_0x0E4018692D92041D(Global_106565.f_18568[iVar1 /*6*/], 3))
				{
					func_167(iVar1, &Var0);
					fVar4 = unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false), Var0.f_6, true);
					if (fVar4 < fVar3)
					{
						bVar7 = true;
						if (bParam1)
						{
							if (iVar5 != Var0.f_26)
							{
								bVar7 = false;
							}
						}
						if (bVar7)
						{
							iVar2 = iVar1;
							fVar3 = fVar4;
						}
					}
				}
				iVar6++;
			}
		}
	}
	return iVar2;
}

void func_167(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_168(uParam1, "Abigail1", func_170(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_169(iParam0), 1, 0);
			break;
		
		case 1:
			func_168(uParam1, "Abigail2", func_170(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_169(iParam0), 1, 0);
			break;
		
		case 2:
			func_168(uParam1, "Barry1", func_170(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_169(iParam0), 1, 0);
			break;
		
		case 3:
			func_168(uParam1, "Barry2", func_170(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_169(iParam0), 1, 1);
			break;
		
		case 4:
			func_168(uParam1, "Barry3", func_170(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_169(iParam0), 0, 0);
			break;
		
		case 5:
			func_168(uParam1, "Barry3A", func_170(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_169(iParam0), 0, 1);
			break;
		
		case 6:
			func_168(uParam1, "Barry3C", func_170(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_169(iParam0), 0, 1);
			break;
		
		case 7:
			func_168(uParam1, "Barry4", func_170(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_169(iParam0), 0, 0);
			break;
		
		case 8:
			func_168(uParam1, "Dreyfuss1", func_170(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_169(iParam0), 0, 0);
			break;
		
		case 9:
			func_168(uParam1, "Epsilon1", func_170(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_169(iParam0), 0, 0);
			break;
		
		case 10:
			func_168(uParam1, "Epsilon2", func_170(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_169(iParam0), 1, 0);
			break;
		
		case 11:
			func_168(uParam1, "Epsilon3", func_170(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_169(iParam0), 0, 0);
			break;
		
		case 12:
			func_168(uParam1, "Epsilon4", func_170(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_169(iParam0), 0, 0);
			break;
		
		case 13:
			func_168(uParam1, "Epsilon5", func_170(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_169(iParam0), 1, 0);
			break;
		
		case 14:
			func_168(uParam1, "Epsilon6", func_170(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_169(iParam0), 0, 1);
			break;
		
		case 15:
			func_168(uParam1, "Epsilon7", func_170(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_169(iParam0), 0, 0);
			break;
		
		case 16:
			func_168(uParam1, "Epsilon8", func_170(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_169(iParam0), 1, 0);
			break;
		
		case 17:
			func_168(uParam1, "Extreme1", func_170(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_169(iParam0), 0, 1);
			break;
		
		case 18:
			func_168(uParam1, "Extreme2", func_170(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_169(iParam0), 0, 1);
			break;
		
		case 19:
			func_168(uParam1, "Extreme3", func_170(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_169(iParam0), 0, 1);
			break;
		
		case 20:
			func_168(uParam1, "Extreme4", func_170(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_169(iParam0), 0, 0);
			break;
		
		case 21:
			func_168(uParam1, "Fanatic1", func_170(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_169(iParam0), 1, 0);
			break;
		
		case 22:
			func_168(uParam1, "Fanatic2", func_170(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_169(iParam0), 1, 0);
			break;
		
		case 23:
			func_168(uParam1, "Fanatic3", func_170(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_169(iParam0), 0, 1);
			break;
		
		case 24:
			func_168(uParam1, "Hao1", func_170(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_169(iParam0), 0, 1);
			break;
		
		case 25:
			func_168(uParam1, "Hunting1", func_170(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_169(iParam0), 0, 1);
			break;
		
		case 26:
			func_168(uParam1, "Hunting2", func_170(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_169(iParam0), 0, 1);
			break;
		
		case 27:
			func_168(uParam1, "Josh1", func_170(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_169(iParam0), 1, 0);
			break;
		
		case 28:
			func_168(uParam1, "Josh2", func_170(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_169(iParam0), 1, 1);
			break;
		
		case 29:
			func_168(uParam1, "Josh3", func_170(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_169(iParam0), 1, 1);
			break;
		
		case 30:
			func_168(uParam1, "Josh4", func_170(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_169(iParam0), 1, 0);
			break;
		
		case 31:
			func_168(uParam1, "Maude1", func_170(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_169(iParam0), 0, 1);
			break;
		
		case 32:
			func_168(uParam1, "Minute1", func_170(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_169(iParam0), 0, 1);
			break;
		
		case 33:
			func_168(uParam1, "Minute2", func_170(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_169(iParam0), 0, 1);
			break;
		
		case 34:
			func_168(uParam1, "Minute3", func_170(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_169(iParam0), 0, 1);
			break;
		
		case 35:
			func_168(uParam1, "MrsPhilips1", func_170(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_169(iParam0), 0, 0);
			break;
		
		case 36:
			func_168(uParam1, "MrsPhilips2", func_170(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_169(iParam0), 0, 0);
			break;
		
		case 37:
			func_168(uParam1, "Nigel1", func_170(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_169(iParam0), 1, 0);
			break;
		
		case 38:
			func_168(uParam1, "Nigel1A", func_170(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_169(iParam0), 1, 1);
			break;
		
		case 39:
			func_168(uParam1, "Nigel1B", func_170(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_169(iParam0), 1, 1);
			break;
		
		case 40:
			func_168(uParam1, "Nigel1C", func_170(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_169(iParam0), 1, 1);
			break;
		
		case 41:
			func_168(uParam1, "Nigel1D", func_170(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_169(iParam0), 1, 1);
			break;
		
		case 42:
			func_168(uParam1, "Nigel2", func_170(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_169(iParam0), 1, 1);
			break;
		
		case 43:
			func_168(uParam1, "Nigel3", func_170(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_169(iParam0), 1, 1);
			break;
		
		case 44:
			func_168(uParam1, "Omega1", func_170(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_169(iParam0), 0, 0);
			break;
		
		case 45:
			func_168(uParam1, "Omega2", func_170(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_169(iParam0), 0, 0);
			break;
		
		case 46:
			func_168(uParam1, "Paparazzo1", func_170(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_169(iParam0), 0, 1);
			break;
		
		case 47:
			func_168(uParam1, "Paparazzo2", func_170(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_169(iParam0), 0, 1);
			break;
		
		case 48:
			func_168(uParam1, "Paparazzo3", func_170(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_169(iParam0), 0, 0);
			break;
		
		case 49:
			func_168(uParam1, "Paparazzo3A", func_170(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_169(iParam0), 0, 1);
			break;
		
		case 50:
			func_168(uParam1, "Paparazzo3B", func_170(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_169(iParam0), 0, 1);
			break;
		
		case 51:
			func_168(uParam1, "Paparazzo4", func_170(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_169(iParam0), 0, 0);
			break;
		
		case 52:
			func_168(uParam1, "Rampage1", func_170(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_169(iParam0), 0, 0);
			break;
		
		case 54:
			func_168(uParam1, "Rampage3", func_170(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_169(iParam0), 1, 0);
			break;
		
		case 55:
			func_168(uParam1, "Rampage4", func_170(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_169(iParam0), 1, 0);
			break;
		
		case 56:
			func_168(uParam1, "Rampage5", func_170(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_169(iParam0), 0, 0);
			break;
		
		case 53:
			func_168(uParam1, "Rampage2", func_170(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_169(iParam0), 1, 0);
			break;
		
		case 57:
			func_168(uParam1, "TheLastOne", func_170(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_169(iParam0), 0, 1);
			break;
		
		case 58:
			func_168(uParam1, "Tonya1", func_170(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_169(iParam0), 0, 1);
			break;
		
		case 59:
			func_168(uParam1, "Tonya2", func_170(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_169(iParam0), 0, 1);
			break;
		
		case 60:
			func_168(uParam1, "Tonya3", func_170(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_169(iParam0), 0, 1);
			break;
		
		case 61:
			func_168(uParam1, "Tonya4", func_170(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_169(iParam0), 0, 1);
			break;
		
		case 62:
			func_168(uParam1, "Tonya5", func_170(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_169(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_168(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
{
	uParam0->f_4 = iParam4;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam3;
	uParam0->f_5 = iParam5;
	uParam0->f_6 = { vParam6 };
	uParam0->f_9 = iParam7;
	StringCopy(&(uParam0->f_10), sParam8, 16);
	uParam0->f_14 = iParam9;
	uParam0->f_15 = iParam10;
	StringCopy(&(uParam0->f_16), sParam11, 24);
	uParam0->f_22 = iParam12;
	uParam0->f_23 = iParam13;
	uParam0->f_24 = iParam14;
	uParam0->f_25 = iParam15;
	uParam0->f_26 = iParam16;
	uParam0->f_27 = iParam17;
	uParam0->f_28 = iParam18;
	uParam0->f_29 = uParam19;
	uParam0->f_30 = iParam20;
	uParam0->f_31 = iParam21;
}

int func_169(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_170(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_171(iParam0) };
	if (unk_0x786AF4A44E1B5B4B(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_171(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_172()
{
	if (func_175() && !func_176())
	{
		return 1;
	}
	if (func_174() && func_173())
	{
		return 1;
	}
	return 0;
}

bool func_173()
{
	return Global_106283 > 0;
}

int func_174()
{
	if (Global_90634 != -1)
	{
		return 1;
	}
	return 0;
}

int func_175()
{
	if (Global_90634 != -1)
	{
		return unk_0x0E4018692D92041D(Global_84500[Global_90634 /*34*/].f_15, 20);
	}
	return 0;
}

int func_176()
{
	if (unk_0x4CE1DD5CFC1F941E())
	{
		if (unk_0x7A0BCF765DB6E029() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_177()
{
	if (!func_140(5))
	{
		return 1;
	}
	if (func_172())
	{
		return 1;
	}
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		if (vmag2(unk_0x43D8A2CCB19FE8A8(unk_0x33CD235DF1E6A94E())) > 1369f && !func_176())
		{
			return 0;
		}
	}
	if (func_166(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_178()
{
	if ((Global_106554 == func_59() && unk_0x40AC0B9EFCB6A65B()) && Global_106555)
	{
		return 1;
	}
	return 0;
}

void func_179(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_145)
	{
		if ((unk_0xE77FA521699F639C() >= (uParam0->f_146 + uParam0->f_147) || unk_0x0E4018692D92041D(Global_93682.f_20, 2)) || unk_0x0E4018692D92041D(Global_93682.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (unk_0x0E4018692D92041D((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!unk_0x0E4018692D92041D((*uParam0)[iVar0 /*18*/], 29))
					{
						func_180(uParam0[iVar0 /*18*/]);
						uParam0->f_146 = unk_0xE77FA521699F639C();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_180(int iParam0)
{
	func_181(iParam0, &(iParam0->f_2), iParam0->f_1);
}

void func_181(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0x0E4018692D92041D(*iParam0, 30))
	{
		switch (func_160(*iParam0))
		{
			case 0:
				unk_0xB815670C37E03CDE(iParam2);
				break;
			
			case 1:
				unk_0x0483D0035D6E46FD(sParam1);
				break;
			
			case 2:
				unk_0x1FCB57E33CEA24E8(sParam1);
				break;
			
			case 3:
				unk_0x0A06DEFFF267C21E(sParam1, unk_0x0E4018692D92041D(*iParam0, 28));
				break;
			
			case 4:
				unk_0xD51062C52BCD2AE8(iParam2, sParam1);
				break;
			
			case 5:
				unk_0xBC6AA949398C551E(sParam1);
				break;
			
			case 6:
				unk_0x3C05A6D663EA1B6A(sParam1, unk_0x0E4018692D92041D(*iParam0, 27), -1);
				break;
			
			case 7:
				unk_0xA70F5BB55D0343E6(iParam2);
				break;
			
			case 8:
				unk_0x2EE8D1440C9060EF(sParam1, iParam2);
				break;
			
			case 9:
				unk_0x13157A56158089D8();
				break;
			
			default:
				break;
		}
		unk_0x8950ED5730F62EE8(iParam0, 29);
	}
}

void func_182()
{
	iLocal_75 = joaat("prop_security_case_01");
	iLocal_74 = joaat("stockade");
	iLocal_73 = joaat("s_m_m_armoured_01");
	iLocal_94 = unk_0x9EC3B269A34A2BEE(3000, 8000);
	switch (iLocal_45)
	{
		case 1:
			vLocal_70 = { -315.889f, -1550.554f, 7.233013f };
			vLocal_71 = { -315.2352f, -1366.581f, 45.29617f };
			fLocal_72 = 180f;
			vLocal_63 = { -331.8429f, -1461.042f, 30.153f };
			fLocal_64 = -64.3539f;
			vLocal_61[0 /*3*/] = { -335.564f, -1462.237f, 29.5452f };
			fLocal_62[0] = 158.3857f;
			vLocal_61[1 /*3*/] = { -342.7024f, -1475.043f, 29.6004f };
			fLocal_62[1] = 290.3041f;
			iLocal_44 = 1;
			break;
		
		case 2:
			vLocal_70 = { -538.2149f, -868.7426f, 17.96054f };
			vLocal_71 = { -663.8162f, -867.9987f, 53.66249f };
			fLocal_72 = 121.5f;
			vLocal_63 = { -588.5128f, -866.9584f, 25.32786f };
			fLocal_64 = -89.02679f;
			vLocal_61[0 /*3*/] = { -589.4673f, -865.4055f, 24.7622f };
			fLocal_62[0] = 12.5464f;
			vLocal_61[1 /*3*/] = { -578.4414f, -874.5964f, 24.9183f };
			fLocal_62[1] = 352.4951f;
			iLocal_44 = 1;
			break;
		
		case 3:
			vLocal_70 = { -468.6309f, 6101.907f, 14.8912f };
			vLocal_71 = { -359.9734f, 5994.152f, 50.36843f };
			fLocal_72 = 152.25f;
			vLocal_63 = { -395.6852f, 6056.967f, 30.5001f };
			fLocal_64 = 188.9862f;
			vLocal_61[0 /*3*/] = { -398.4612f, 6051.296f, 30.5003f };
			fLocal_62[0] = 251.7138f;
			vLocal_61[1 /*3*/] = { -378.408f, 6035.689f, 30.498f };
			fLocal_62[1] = 154.0836f;
			iLocal_44 = 2;
			break;
		
		case 4:
			vLocal_70 = { -631.3408f, -1105.581f, 7.220509f };
			vLocal_71 = { -462.1721f, -1103.597f, 62.53583f };
			fLocal_72 = 177.25f;
			vLocal_63 = { -595.7766f, -1094.089f, 21.1785f };
			fLocal_64 = 263.4662f;
			vLocal_61[0 /*3*/] = { -600.8182f, -1103.778f, 21.3292f };
			fLocal_62[0] = 338.8304f;
			vLocal_61[1 /*3*/] = { -595.3461f, -1096.054f, 21.1785f };
			fLocal_62[1] = 151.297f;
			iLocal_44 = 1;
			break;
		
		case 5:
			vLocal_63 = { -1042.768f, -1049.296f, 1.0825f };
			fLocal_64 = 26.9919f;
			iLocal_44 = 3;
			break;
		
		case 6:
			vLocal_63 = { -595.5618f, -667.7325f, 31.0544f };
			fLocal_64 = 271.1543f;
			iLocal_44 = 3;
			break;
		
		case 7:
			vLocal_63 = { 3018.384f, 3634.017f, 70.4076f };
			fLocal_64 = 335.9052f;
			iLocal_44 = 3;
			break;
		
		case 8:
			vLocal_63 = { -2815.661f, 2208.171f, 27.8382f };
			fLocal_64 = 119.1519f;
			iLocal_44 = 3;
			break;
		
		case 9:
			vLocal_63 = { 856.7742f, -2067.845f, 29.0704f };
			fLocal_64 = 83.1204f;
			iLocal_44 = 3;
			break;
		
		case 10:
			vLocal_63 = { 805.1932f, -703.1327f, 28.1632f };
			fLocal_64 = 248.8625f;
			iLocal_44 = 3;
			break;
		
		default:
			break;
	}
}

void func_183(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_59();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_185(iParam0);
	unk_0x88B04627B159D024(0);
	unk_0xDCCE32451D4E5521(1);
	Global_106551 = 0;
	func_184();
}

void func_184()
{
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
		{
			unk_0x8C4EA5F6857553AE(unk_0x541D5C57194E73C4(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0)), true);
		}
		unk_0x5FEE418CE11E6DDE(unk_0x33CD235DF1E6A94E(), 32, false);
	}
}

void func_185(int iParam0)
{
	Global_106554 = iParam0;
}

int func_186(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	vector3 vVar1;
	int iVar2;
	vector3 vVar3;
	int iVar4;
	
	if (!Global_145143)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = func_59();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_225())
		{
			return 0;
		}
	}
	vLocal_43 = { vParam0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()) && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
		{
			vVar1 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true) };
			if (vmag2(unk_0x43D8A2CCB19FE8A8(unk_0x33CD235DF1E6A94E())) > 1369f && !func_176())
			{
				return 0;
			}
		}
		if (!Global_106565.f_9079)
		{
			return 0;
		}
		if (func_44(0))
		{
			return 0;
		}
		if (func_172())
		{
			return 0;
		}
		if (func_224())
		{
			return 0;
		}
		if (Global_106554 != -1)
		{
			return 0;
		}
		if (func_13(func_11()))
		{
			if (func_166(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()) && !bParam4)
		{
			if ((vVar1.z - vLocal_43.z) > 50f)
			{
				return 0;
			}
		}
		if (!func_223(iParam1))
		{
			return 0;
		}
		if (func_13(func_11()))
		{
			if (func_222(func_11()) == 4 || func_222(func_11()) == 5)
			{
				return 0;
			}
		}
		if (func_13(func_11()))
		{
			if (!func_221(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_220(Global_106565.f_24989.f_43[iParam1]))
		{
			return 0;
		}
		if ((unk_0xE3903F59E2F22150() - Global_106556) < 150000)
		{
			if (iParam1 != 30)
			{
				return 0;
			}
		}
		if (func_219())
		{
			return 0;
		}
		if (unk_0xB2B616B1F434DB30())
		{
			return 0;
		}
		if (unk_0x40AC0B9EFCB6A65B())
		{
			return 0;
		}
		if (!func_211(4))
		{
			return 0;
		}
		if (!func_140(5))
		{
			return 0;
		}
		if (func_210(iParam1, iParam2) && !bParam3)
		{
			return 0;
		}
		if (Global_3 && iParam1 != 10)
		{
			return 0;
		}
		if (unk_0xDE9B75BB528AC06E(unk_0x65F35477FEAD6F0F(unk_0x33CD235DF1E6A94E())))
		{
			if ((unk_0x65F35477FEAD6F0F(unk_0x33CD235DF1E6A94E()) == unk_0x90D2E06562D440E1(377.153f, -717.567f, 10.0536f) || unk_0x65F35477FEAD6F0F(unk_0x33CD235DF1E6A94E()) == unk_0x90D2E06562D440E1(320.9934f, 265.2515f, 82.1221f)) || unk_0x65F35477FEAD6F0F(unk_0x33CD235DF1E6A94E()) == unk_0x90D2E06562D440E1(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_210(0, 0))
		{
			return 0;
		}
		if (Global_25911)
		{
			return 0;
		}
		if (func_223(30) && !func_210(30, 0))
		{
			if (iParam1 != 30)
			{
				if (vdist2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_13(func_11()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				vVar3 = { Global_106565.f_2357.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_106565.f_2357.f_539.f_2296[iVar2];
				if (func_209(iVar4))
				{
					if (func_187(iVar2))
					{
						if (!func_129(vVar3, 0f, 0f, 0f, 0))
						{
							if (vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false), vVar3) < (210f * 210f))
							{
								if (func_11() != iVar2)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return 1;
}

bool func_187(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_106565.f_2357.f_539.f_2296[iParam0];
	return func_188(iVar0);
}

int func_188(int iParam0)
{
	return func_189(iParam0, 1);
}

int func_189(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_209(iParam0))
	{
		return 0;
	}
	func_190(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_190(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_191(func_202(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_191(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_201(iParam0, iParam1))
	{
		iVar0 = func_200(iParam1);
		iVar1 = func_198(iParam0);
		iVar2 = (func_198(iParam0) - func_198(iParam1));
		iVar3 = (func_200(iParam0) - func_200(iParam1));
		iVar4 = (func_197(iParam0) - func_197(iParam1));
		iVar5 = (func_196(iParam0) - func_196(iParam1));
		iVar6 = (func_195(iParam0) - func_195(iParam1));
		iVar7 = (func_194(iParam0) - func_194(iParam1));
	}
	else
	{
		iVar0 = func_200(iParam0);
		iVar1 = func_198(iParam1);
		iVar2 = (func_198(iParam1) - func_198(iParam0));
		iVar3 = (func_200(iParam1) - func_200(iParam0));
		iVar4 = (func_197(iParam1) - func_197(iParam0));
		iVar5 = (func_196(iParam1) - func_196(iParam0));
		iVar6 = (func_195(iParam1) - func_195(iParam0));
		iVar7 = (func_194(iParam1) - func_194(iParam0));
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
		iVar4 = (iVar4 + func_193(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_192(to_float(iVar0 + 1), 0f, 12f));
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

float func_192(float fParam0, float fParam1, float fParam2)
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

int func_193(int iParam0, int iParam1)
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

int func_194(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_195(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_196(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_197(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_198(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_199(unk_0x0E4018692D92041D(iParam0, 31), -1, 1)) + 2011;
}

int func_199(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_200(int iParam0)
{
	return iParam0 & 15;
}

int func_201(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_209(iParam1) || !func_209(iParam0))
	{
		return 1;
	}
	iVar0 = func_198(iParam0);
	iVar1 = func_198(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_200(iParam0);
	iVar1 = func_200(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_197(iParam0);
	iVar1 = func_197(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_196(iParam0);
	iVar1 = func_196(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_195(iParam0);
	iVar1 = func_195(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_194(iParam0);
	iVar1 = func_194(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_202()
{
	var uVar0;
	
	func_208(&uVar0, unk_0xE6A7CE90720B9037());
	func_207(&uVar0, unk_0x7EA67BD818402745());
	func_206(&uVar0, unk_0x13348E86D5B8A052());
	func_205(&uVar0, unk_0x020A28FAE1C09250());
	func_204(&uVar0, unk_0x2C02CAA9C4127339());
	func_203(&uVar0, unk_0xED3F08F762AAA55A());
	return uVar0;
}

void func_203(var uParam0, int iParam1)
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

void func_204(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_205(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_200(*uParam0);
	iVar1 = func_198(*uParam0);
	if (iParam1 < 1 || iParam1 > func_193(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_206(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_207(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_208(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_209(int iParam0)
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
	iVar0 = func_194(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_195(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_196(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_198(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_200(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_197(iParam0);
	if (iVar5 < 1 || iVar5 > func_193(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_210(int iParam0, int iParam1)
{
	if (unk_0x0E4018692D92041D(Global_106565.f_24989.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_211(int iParam0)
{
	int iVar0;
	
	if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
	{
		if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
		{
			if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
			{
				iVar0 = func_11();
				if (!func_13(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0xE027064B1C47E424(unk_0x95B959F18401C09A()) || unk_0x7DD221C91135596A(unk_0x33CD235DF1E6A94E())) || unk_0x707FFB0E65C1C546(unk_0x33CD235DF1E6A94E())) || unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E())) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || unk_0x63E238348058FF52(unk_0x95B959F18401C09A())) || unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0)) || func_1()) || Global_105612) || Global_25767) || func_218()) || func_18(8, -1)) || func_217()) || func_216()) || func_215()) || func_214()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1) || func_1()) || Global_25767) || func_218()) || func_18(8, -1)) || func_215()) || func_217()) || func_216()) || func_214()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xE027064B1C47E424(unk_0x95B959F18401C09A()) || unk_0x7DD221C91135596A(unk_0x33CD235DF1E6A94E())) || unk_0x707FFB0E65C1C546(unk_0x33CD235DF1E6A94E())) || unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E())) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || unk_0x63E238348058FF52(unk_0x95B959F18401C09A())) || unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0)) || func_1()) || Global_105612) || Global_25767) || func_218()) || func_18(8, -1)) || func_215()) || func_217()) || func_216()) || func_214()) || Global_106565.f_7682.f_919[iVar0] == 5) || Global_36972 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E()) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0)) || func_1()) || Global_105612) || Global_25767) || func_218()) || func_18(8, -1)) || func_217()) || func_216()) || func_214()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_1() || unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) > 0) || func_18(8, -1)) || func_214()) || func_213()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_18(8, -1) || func_217()) || func_216()) || func_213()) || func_212())
						{
							return 0;
						}
						if ((unk_0x71EC91BA8C88BCE0() && unk_0xC043A1CA19EA599D() != 3) && unk_0x469BF85808505E83() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
						{
							if ((((((((((((((unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0) || unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) > 0) || unk_0x7DD221C91135596A(unk_0x33CD235DF1E6A94E())) || unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E())) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || unk_0x63E238348058FF52(unk_0x95B959F18401C09A())) || func_1()) || Global_25767) || func_218()) || func_18(8, -1)) || func_216()) || func_215()) || func_214()) || Global_106565.f_7682.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0) || !unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A())) || !unk_0xE027064B1C47E424(unk_0x95B959F18401C09A())) || !unk_0x73DA1542B2F0C458()) || unk_0x7DD221C91135596A(unk_0x33CD235DF1E6A94E())) || unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E())) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || func_1()) || func_216()) || Global_105612) || Global_25767) || func_218()) || Global_37584) || func_18(8, -1)) || func_215()) || func_213()) || func_214()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0) || !unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A())) || !unk_0xE027064B1C47E424(unk_0x95B959F18401C09A())) || !unk_0x73DA1542B2F0C458()) || unk_0x09287BFEE1D9F6EF(unk_0x95B959F18401C09A(), 0)) || unk_0x7DD221C91135596A(unk_0x33CD235DF1E6A94E())) || unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1)) || unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E())) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0x04571D88090E0F77(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || unk_0x63E238348058FF52(unk_0x95B959F18401C09A())) || func_1()) || Global_105612) || Global_25767) || func_218()) || func_18(8, -1)) || func_215()) || func_213()) || func_217()) || func_216()) || func_214())
						{
							return 0;
						}
						break;
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
	else
	{
		return 0;
	}
	return 1;
}

var func_212()
{
	return Global_93721.f_1;
}

int func_213()
{
	if (Global_90634 != -1)
	{
		return unk_0x0E4018692D92041D(Global_84500[Global_90634 /*34*/].f_15, 13);
	}
	return 0;
}

int func_214()
{
	if (unk_0x1BCDA92AD0A7835B(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_215()
{
	if (Global_71850)
	{
		return 1;
	}
	else if (Global_56488 && !Global_56494)
	{
		return 1;
	}
	return 0;
}

bool func_216()
{
	return Global_93734.f_340 > 0;
}

bool func_217()
{
	return Global_93734.f_339 > 0;
}

var func_218()
{
	return Global_1312867;
}

int func_219()
{
	func_10();
	if (Global_3228[Global_14553 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_220(int iParam0)
{
	return func_201(func_202(), iParam0);
}

int func_221(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_11();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
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
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_222(int iParam0)
{
	if (!func_13(iParam0))
	{
		return 7;
	}
	return Global_106565.f_7682.f_919[iParam0];
}

bool func_223(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_225())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0x0E4018692D92041D(Global_106565.f_24989, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0x0E4018692D92041D(Global_106565.f_24989.f_1, iVar0);
	}
	return bVar1;
}

int func_224()
{
	int iVar0;
	
	if (Global_25915)
	{
		if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
		{
			iVar0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
			if (unk_0x91D5C8283D19AF49(iVar0, 0))
			{
				if (!unk_0xBC2FC12AD0FBF72E(unk_0x7BDC41A7CA0C77A2(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_225()
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

void func_226()
{
	if (func_178())
	{
		if (unk_0xECCFCAB0A094EB5B(iLocal_103))
		{
			if (unk_0xE38E3CF1625A4145(iLocal_58))
			{
				unk_0x1ABDB383C83A336A(&iLocal_58);
			}
		}
		if (unk_0x765F6FEEFF39224F(iLocal_53))
		{
			unk_0xEC26F4BFC9942A0C(&iLocal_53);
		}
		if (unk_0x765F6FEEFF39224F(iLocal_52))
		{
			if (unk_0xC30D5C4DCAC8020A(iLocal_52))
			{
				unk_0xEC26F4BFC9942A0C(&iLocal_52);
			}
			else
			{
				unk_0x26ABAE1D971CEACD(&iLocal_52);
			}
		}
		unk_0x71CA80D41E1338B4(iLocal_74);
		unk_0x71CA80D41E1338B4(iLocal_73);
		unk_0x71CA80D41E1338B4(iLocal_75);
		unk_0xF4197686EF83F52A(unk_0x95B959F18401C09A(), 0);
		unk_0xE44D3FEE07A9EF2C(iLocal_73, false);
		unk_0x8C4EA5F6857553AE(iLocal_74, false);
	}
	if (iLocal_97 != 0)
	{
		unk_0x6C6FE09E055D0855(iLocal_97);
	}
	unk_0xF1CFA0046BB67893(iLocal_59, 0);
	func_130(&uLocal_111, 0, 0);
	func_232(-1);
	func_227(&uLocal_123, 0);
	unk_0x5894DC159447E10A();
}

void func_227(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_229(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_228(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_145 = 0;
	uParam0->f_146 = -1;
}

void func_228(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_229(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0x0E4018692D92041D((*uParam0)[iVar0 /*18*/], 30))
		{
			func_230(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_145 = 1;
}

void func_230(var uParam0)
{
	func_231(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_231(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0x0E4018692D92041D(iParam0, 30))
	{
		switch (func_160(iParam0))
		{
			case 0:
				unk_0x71CA80D41E1338B4(iParam2);
				break;
			
			case 1:
				unk_0xFF2DEA68E2D3602E(sParam1);
				break;
			
			case 2:
				unk_0x80BCAFF1FDCC7E85(sParam1);
				break;
			
			case 3:
				unk_0x30F6F0B876E12AD8(sParam1);
				break;
			
			case 4:
				unk_0x4167B14D99BD7D75(iParam2, sParam1);
				break;
			
			case 5:
				unk_0xF1C2AA9472B34A78(sParam1);
				break;
			
			case 6:
				unk_0xC16C998D785ABF3A();
				break;
			
			case 7:
				unk_0x7316EA42E2F967B0(iParam2);
				break;
			
			case 8:
				unk_0xB073DB452891DC0B(iParam2, unk_0x0E4018692D92041D(iParam0, 26));
				break;
			
			case 9:
				unk_0xAEF90BD69E5087CF();
				break;
			
			default:
				break;
		}
	}
}

void func_232(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_59();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_178())
	{
		func_236(iParam0);
		unk_0xF72C40745AA793F1(0, 0);
		Global_106556 = unk_0xE3903F59E2F22150();
		func_235(30000);
		StringCopy(&cVar0, func_234(Global_106554, 1), 64);
		if (func_58(Global_106554) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_106553, 64);
		}
		unk_0x3976D3CAA943B599(&cVar0, Global_106551, (unk_0xE3903F59E2F22150() - Global_106552), 0);
	}
	else if (unk_0x0E4018692D92041D(Global_106561, 0) && Global_106565.f_24989.f_2 < 3)
	{
		unk_0xCE689A8E8C42ED78(&Global_106561, 0);
	}
	func_233(&Global_25824);
	Global_106555 = 0;
	func_185(-1);
}

void func_233(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_36387)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_36386 = 0;
	Global_36388 = 0;
	Global_36425 = 15;
	Global_56491 = 0;
	Global_56492 = 0;
}

char* func_234(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_235(int iParam0)
{
	Global_36976 = (unk_0xE3903F59E2F22150() + iParam0);
}

void func_236(int iParam0)
{
	func_237(iParam0, 0, func_242(iParam0));
}

void func_237(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_202();
	func_240(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_239(iParam0, &uVar0);
	Var1 = { func_238(&uVar0) };
}

struct<16> func_238(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_196(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_195(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_194(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_197(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_200(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_198(*uParam0), 64);
	return Var0;
}

void func_239(int iParam0, var uParam1)
{
	Global_106565.f_24989.f_43[iParam0] = *uParam1;
}

void func_240(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_198(*uParam0);
	iVar1 = func_200(*uParam0);
	iVar2 = func_197(*uParam0);
	iVar3 = func_196(*uParam0);
	iVar4 = func_195(*uParam0);
	iVar5 = func_194(*uParam0);
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
	iVar6 = func_193(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_193(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_241(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_241(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_208(uParam0, iParam1);
	func_207(uParam0, iParam2);
	func_206(uParam0, iParam3);
	func_204(uParam0, iParam5);
	func_205(uParam0, iParam4);
	func_203(uParam0, iParam6);
}

int func_242(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

int func_243(int iParam0)
{
	if (!unk_0xD62C4419A41F106A(iParam0, 0))
	{
		if (unk_0x67FFBB75D2430704(iParam0, -1, 0))
		{
			return -1;
		}
		if (unk_0x67FFBB75D2430704(iParam0, 0, 0))
		{
			return 0;
		}
		if (unk_0x67FFBB75D2430704(iParam0, 1, 0))
		{
			return 1;
		}
		if (unk_0x67FFBB75D2430704(iParam0, 2, 0))
		{
			return 2;
		}
		if (unk_0x67FFBB75D2430704(iParam0, 3, 0))
		{
			return 3;
		}
		if (unk_0x67FFBB75D2430704(iParam0, 4, 0))
		{
			return 4;
		}
		if (unk_0x67FFBB75D2430704(iParam0, 5, 0))
		{
			return 5;
		}
		if (unk_0x67FFBB75D2430704(iParam0, 6, 0))
		{
			return 6;
		}
		if (unk_0x67FFBB75D2430704(iParam0, 7, 0))
		{
			return 7;
		}
		if (unk_0x67FFBB75D2430704(iParam0, 8, 0))
		{
			return 8;
		}
	}
	return -2;
}

