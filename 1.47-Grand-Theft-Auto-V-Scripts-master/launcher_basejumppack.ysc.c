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
	vector3 vLocal_45 = { 0f, 0f, 0f };
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	struct<16> Local_51 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_52 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_53 = 0;
	var uLocal_54 = 0;
	vector3 vLocal_55 = { 0f, 0f, 0f };
	vector3 vLocal_56 = { 0f, 0f, 0f };
	float fLocal_57 = 0f;
	var uLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	char* sLocal_65 = NULL;
	float fLocal_66 = 0f;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	float fLocal_74 = 0f;
	vector3 vLocal_75 = { 0f, 0f, 0f };
	vector3 vLocal_76 = { 0f, 0f, 0f };
	float fLocal_77 = 0f;
	var uLocal_78 = 1;
	var uLocal_79 = 0;
	var uLocal_80 = 1;
	var uLocal_81 = 0;
	int iLocal_82 = 0;
	vector3 vLocal_83 = { 0f, 0f, 0f };
	var uLocal_84 = 0;
	var uLocal_85 = 16;
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
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	int iLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	bool bLocal_254 = 0;
	int iLocal_255 = 0;
	int iLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	struct<2> Local_261 = { 0, 5 } ;
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
	var uLocal_277 = 5;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
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
	vLocal_45 = { 500f, 500f, 500f };
	iLocal_60 = -1;
	iLocal_61 = 2050;
	iLocal_62 = -1;
	iLocal_63 = -1;
	sLocal_65 = "CC_SUBSTR";
	fLocal_66 = 125f;
	iLocal_67 = 1;
	iLocal_69 = 263;
	fLocal_77 = 4f;
	vLocal_56 = { ScriptParam_261.f_1[0 /*3*/] };
	vLocal_56 = { vLocal_56 };
	uLocal_54 = uLocal_54;
	Local_52 = { Local_52 };
	bVar0 = false;
	if (unk_0x9EC5BDC006623C42(114))
	{
		func_139(1);
	}
	iLocal_53 = unk_0x378BD4B3881338C2(unk_0x95B959F18401C09A());
	iLocal_59 = 0;
	func_137(&Global_105216, 0);
	func_131();
	unk_0x1F0C49658F7E2AE1(1);
	if (func_130(uLocal_58, 1))
	{
		iLocal_64 = 10;
	}
	else
	{
		iLocal_64 = 9;
	}
	while (!Global_32193)
	{
		wait(0);
	}
	if (!func_130(uLocal_58, 8))
	{
		if (!func_128(iLocal_64))
		{
			if (func_127(0, iLocal_63))
			{
				func_139(0);
			}
			else
			{
				func_139(1);
			}
		}
	}
	if (iLocal_63 != -1)
	{
		if (!func_127(0, iLocal_63))
		{
			func_139(1);
		}
	}
	if (func_130(uLocal_58, 8388608))
	{
		func_139(1);
	}
	if (func_130(uLocal_58, 524288) && (func_126() && !func_125()))
	{
		func_139(1);
	}
	if (unk_0x1BCDA92AD0A7835B(unk_0x535C9C52117DA0AD()) > 1 && !func_130(uLocal_58, 4194304))
	{
		if (iLocal_69 != 263)
		{
			func_124(iLocal_69, 1, 0);
			iLocal_69 = 263;
		}
		func_123(10);
	}
	while (true)
	{
		if (Global_3)
		{
			func_139(1);
		}
		iLocal_53 = unk_0x378BD4B3881338C2(unk_0x95B959F18401C09A());
		if (func_130(uLocal_58, 1048576))
		{
			if (unk_0xD62C4419A41F106A(iLocal_53, 0))
			{
				func_139(1);
			}
		}
		if (unk_0x765F6FEEFF39224F(iLocal_53) && !unk_0xD62C4419A41F106A(iLocal_53, 0))
		{
			vLocal_55 = { unk_0xFBB1F99A825CAB09(iLocal_53, true) };
			fLocal_57 = vdist2(vLocal_55, ScriptParam_261.f_1[0 /*3*/]);
			fLocal_57 = fLocal_57;
			vLocal_75 = { vLocal_55 };
			vLocal_76 = { ScriptParam_261.f_1[0 /*3*/] };
			vLocal_75.z = 0f;
			vLocal_76.z = 0f;
			fLocal_74 = vdist2(vLocal_75, vLocal_76);
			switch (iLocal_59)
			{
				case 0:
					if (func_128(iLocal_64) || (func_130(uLocal_58, 16) && !func_130(uLocal_58, 524288)))
					{
						iLocal_62 = -1;
						func_119();
						func_123(1);
					}
					else
					{
						if (fLocal_74 > (fLocal_66 * fLocal_66))
						{
							if (iLocal_69 != 263)
							{
								func_124(iLocal_69, 1, 0);
								iLocal_69 = 263;
							}
							func_123(10);
						}
						if ((vLocal_55.z - ScriptParam_261.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_117())
					{
						iLocal_67 = iLocal_67;
						func_123(3);
					}
					else
					{
						func_119();
					}
					break;
				
				case 3:
					if (unk_0x295BEA3FE13E5C3D())
					{
						func_139(1);
						return;
					}
					if (!func_128(iLocal_64))
					{
						if (!func_130(uLocal_58, 8))
						{
							bVar1 = true;
							if (unk_0xCE3CFF625BEBAA04(&(Global_93682.f_3), &Local_52))
							{
								Local_52 = { Local_51 };
								bVar1 = false;
							}
							if (bVar1)
							{
								func_139(0);
								break;
							}
						}
					}
					if (!func_130(uLocal_58, 4))
					{
						func_114();
						func_113(&uLocal_58, 4);
					}
					if (fLocal_74 > (fLocal_66 * fLocal_66) && !Global_93716)
					{
						if (iLocal_69 != 263)
						{
							if (func_112(6) && !func_111(iLocal_69))
							{
							}
							else
							{
								func_124(iLocal_69, 1, 0);
								iLocal_69 = 263;
							}
						}
						func_123(10);
					}
					else
					{
						Local_52 = { Local_51 };
						bVar2 = !func_130(uLocal_58, 64);
						func_137(&uLocal_58, 128);
						if (!func_110(3) && !Global_93716)
						{
							if (func_130(uLocal_58, 2097152))
							{
								if ((!func_130(uLocal_58, 1) || !unk_0x765F6FEEFF39224F(func_109())) && !Global_93716)
								{
									func_123(10);
									break;
								}
							}
						}
						if (func_130(uLocal_58, 524288) && (func_126() && !func_125()))
						{
							func_139(1);
						}
						if (func_108())
						{
							func_139(1);
						}
						if ((!func_100(6) || Global_105612) || func_99())
						{
							bVar2 = false;
						}
						if (func_130(uLocal_58, 1))
						{
							if (!func_98())
							{
								func_96(&uLocal_58, 128);
								bVar2 = false;
							}
						}
						if (func_95(1))
						{
							bVar2 = false;
						}
						if (Global_71590)
						{
							bVar2 = false;
						}
						if (func_94())
						{
							bVar2 = false;
						}
						if (unk_0x71EC91BA8C88BCE0())
						{
							bVar2 = false;
						}
						if (func_93() || func_92(8, -1))
						{
							bVar2 = false;
						}
						if (!unk_0x3B06C717B2793DBE(unk_0x95B959F18401C09A()))
						{
							bVar2 = false;
						}
						if (!unk_0x9808D9BE8CC3331B(unk_0x95B959F18401C09A()))
						{
							bVar2 = false;
						}
						if (func_91(0) || func_90())
						{
							bVar2 = false;
						}
						if (bVar2)
						{
							if (!unk_0x18FB647D79B09657(iLocal_53, ScriptParam_261.f_1[0 /*3*/], fLocal_77, fLocal_77, 2f, false, true, iLocal_67))
							{
								bVar2 = false;
							}
							if (!unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A()))
							{
								bVar2 = false;
							}
							if (bVar2)
							{
								unk_0x144904D2EAA84341(0, 51);
								if (func_89(uLocal_54))
								{
									if (iLocal_60 == -1)
									{
										func_88(&iLocal_60, 4, sLocal_65, 0, 0, 0, 0);
										func_96(&uLocal_58, 2048);
									}
									else if (!func_130(uLocal_58, 2048) || !unk_0xFAC8F20FBC764F4D())
									{
										func_87(&iLocal_60);
										func_137(&uLocal_58, 2048);
									}
									if (func_85(iLocal_60, 1))
									{
										sLocal_65 = sLocal_65;
										func_87(&iLocal_60);
										func_137(&uLocal_58, 2048);
										unk_0x8F59DE352CFE248B(&Local_52);
										unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), false, 56);
										func_123(5);
									}
								}
								else
								{
									sLocal_65 = sLocal_65;
									func_87(&iLocal_60);
									func_137(&uLocal_58, 2048);
									unk_0x8F59DE352CFE248B(&Local_52);
									unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), false, 56);
									func_123(5);
								}
							}
						}
						if (!bVar2)
						{
							if (iLocal_60 != -1)
							{
								func_87(&iLocal_60);
								func_137(&uLocal_58, 2048);
								unk_0xEDF90B96BED57BCE(0);
							}
						}
					}
					func_82();
					break;
				
				case 5:
					unk_0x144904D2EAA84341(0, 51);
					if (unk_0x07AB0925A06BD5AD(&Local_52))
					{
						if (iLocal_60 != -1)
						{
							func_87(&iLocal_60);
						}
						iVar3 = 2;
						bVar0 = false;
						if (func_130(uLocal_58, 1))
						{
							if (func_112(6) || func_112(7))
							{
								iVar3 = 1;
								bVar0 = true;
							}
						}
						if (iVar3 != 1)
						{
							iVar3 = func_79(&iLocal_62, 6, iLocal_64, 0, 0);
						}
						if (iVar3 == 1)
						{
							if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
							{
								unk_0x117A9E054B0F10FB(unk_0x95B959F18401C09A());
							}
							func_78();
							if (Global_37584)
							{
								func_69(unk_0x33CD235DF1E6A94E());
							}
							unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), true, 56);
							iLocal_50 = func_24();
							func_96(&uLocal_58, 2);
							func_123(6);
							func_20(&iLocal_71);
							if (iLocal_63 != -1)
							{
								func_19(iLocal_63);
								func_16(func_18(iLocal_63), 0, 0);
							}
						}
						else if (iVar3 == 2)
						{
							func_15();
						}
						else if (iVar3 == 0)
						{
							func_123(10);
						}
					}
					else
					{
						func_15();
					}
					break;
				
				case 6:
					if (func_130(Global_105216, 262144))
					{
						func_137(&Global_105216, 262144);
						func_14();
					}
					if (func_130(uLocal_58, 2097152))
					{
						if (!func_110(3) && !unk_0x8ED4328770BEE4A1(iLocal_50))
						{
							func_123(10);
						}
					}
					if (!unk_0x8ED4328770BEE4A1(iLocal_50))
					{
						unk_0x198BCB9897710EAB(round((func_10(&iLocal_71) * 1000f)), iLocal_63, 0);
						func_9(&iLocal_71);
						func_137(&uLocal_58, 256);
						func_8();
						if (bVar0)
						{
							func_137(&uLocal_58, 2);
						}
						else if (func_130(uLocal_58, 2))
						{
							if (func_130(Global_105216, 0))
							{
								func_7(&iLocal_62);
								iLocal_62 = -1;
								func_137(&uLocal_58, 2);
							}
							else
							{
								func_7(&iLocal_62);
								iLocal_62 = -1;
								func_137(&uLocal_58, 2);
							}
						}
						func_123(0);
						if (iLocal_63 != -1)
						{
							if (func_130(Global_105216, 0))
							{
								unk_0x4F729C0B5CCB6FEE(func_18(iLocal_63), 0, Global_93719, 0);
								func_6(func_18(iLocal_63), 0, Global_93719, 1, 0);
							}
							else
							{
								unk_0x4F729C0B5CCB6FEE(func_18(iLocal_63), 0, Global_93719, 0);
								func_6(func_18(iLocal_63), 0, Global_93719, 0, 0);
							}
						}
						func_5();
						func_137(&Global_105216, 0);
						if (func_130(uLocal_58, 16777216))
						{
							func_139(1);
						}
						if (iLocal_63 != -1)
						{
							if (Global_106565.f_9079)
							{
								if (!func_127(0, iLocal_63))
								{
									func_139(1);
								}
							}
						}
					}
					func_4();
					break;
				
				case 8:
					func_123(0);
					break;
				
				case 10:
					func_139(1);
					break;
				
				case 9:
					if (fLocal_74 > (fLocal_66 * fLocal_66))
					{
						if (iLocal_69 != 263)
						{
							func_124(iLocal_69, 1, 0);
							iLocal_69 = 263;
						}
						func_123(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_69 != 263)
					{
						func_124(iLocal_69, 0, 0);
					}
					if (iLocal_60 != -1)
					{
						func_87(&iLocal_60);
					}
					if (!unk_0x786AF4A44E1B5B4B(sLocal_65))
					{
						if (func_1(sLocal_65))
						{
							unk_0xEDF90B96BED57BCE(1);
						}
					}
					func_123(4);
					break;
				
				case 4:
					if ((iLocal_68 % 150) == 0)
					{
						if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
						{
							if (iLocal_70 == 2)
							{
								if (iLocal_70 == 2)
								{
									if (func_128(iLocal_64) && func_127(0, iLocal_63))
									{
										func_131();
										if (iLocal_69 != 263)
										{
											func_124(iLocal_69, 1, 0);
										}
										func_123(0);
									}
								}
							}
							else if (iLocal_70 == 0)
							{
								if (fLocal_74 > (fLocal_66 * fLocal_66))
								{
									if (iLocal_69 != 263)
									{
										func_124(iLocal_69, 1, 0);
										iLocal_69 = 263;
									}
									func_123(10);
								}
							}
							else if (iLocal_70 == 1)
							{
								if (fLocal_74 > ((80f + 5f) * (80f + 5f)))
								{
									func_131();
									if (iLocal_69 != 263)
									{
										func_124(iLocal_69, 1, 0);
									}
									func_123(0);
								}
							}
						}
						else
						{
							func_124(iLocal_69, 1, 0);
						}
					}
					else
					{
						iLocal_68++;
					}
					break;
				}
		}
		wait(0);
	}
}

int func_1(char* sParam0)
{
	unk_0x6D39881CA5436178(sParam0);
	return unk_0xA32C2C4DF096C08A(0);
}

void func_2()
{
	func_3(&uLocal_78);
	func_3(&uLocal_80);
	unk_0xFF2DEA68E2D3602E("pickup_object");
	unk_0xFF2DEA68E2D3602E("oddjobs@basejump@ig_15");
}

void func_3(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0x71CA80D41E1338B4((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_4()
{
}

void func_5()
{
}

void func_6(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (unk_0x786AF4A44E1B5B4B(&Global_90782))
	{
		return;
	}
	if (unk_0xF75A0E8805B9AE6F(sParam0, &Global_90782, 0, -1) != 0)
	{
		return;
	}
	unk_0x6B5B900B02D42C0F(sParam0, iParam1, iParam2, iParam3, iParam4, Global_87889);
	StringCopy(&Global_90782, "", 64);
}

void func_7(int iParam0)
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

void func_8()
{
	vector3 vVar0[24];
	
	if (unk_0xD88B24C279C15EA1() || unk_0xDB36A8F522CBC12D())
	{
		unk_0x0A919F27746977BF(StackVal, 0, 0, 0);
	}
	else if (unk_0xF3622D832771D4B9() || unk_0xF5DB888C353E2BED())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		unk_0x7EB82D55AB02865C(0, &cVar0);
	}
}

void func_9(int iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

float func_10(int iParam0)
{
	if (func_13(iParam0))
	{
		if (func_12(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_11(unk_0x0E4018692D92041D(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_11(bool bParam0)
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

bool func_12(var uParam0)
{
	return unk_0x0E4018692D92041D(*uParam0, 2);
}

bool func_13(var uParam0)
{
	return unk_0x0E4018692D92041D(*uParam0, 1);
}

int func_14()
{
	return 1;
}

void func_15()
{
}

void func_16(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x786AF4A44E1B5B4B(&Global_90782))
	{
		unk_0x6B5B900B02D42C0F(&Global_90782, 0, 0, 0, 1, 0);
		StringCopy(&Global_90782, "", 64);
	}
	StringCopy(&Global_90782, sParam0, 64);
	unk_0x708AAA79D977B46E(sParam0, iParam1, iParam2, func_17(0));
}

bool func_17(bool bParam0)
{
	if (!bParam0 && unk_0x1BCDA92AD0A7835B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x0E4018692D92041D(Global_71838, 0);
}

char* func_18(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "OJBJ";
			break;
		
		case 1:
			return "MGDT";
			break;
		
		case 2:
			return "MGGF";
			break;
		
		case 3:
			return "OJHU";
			break;
		
		case 4:
			return "MGOR";
			break;
		
		case 5:
			return "MGPS";
			break;
		
		case 6:
			return "MGRP";
			break;
		
		case 7:
			return "MGSEA";
			break;
		
		case 8:
			return "MGSTR";
			break;
		
		case 9:
			return "MGSC";
			break;
		
		case 10:
			return "MGSP";
			break;
		
		case 11:
			return "MGSRm";
			break;
		
		case 12:
			return "OJTX";
			break;
		
		case 13:
			return "MGTN";
			break;
		
		case 14:
			return "OJTW";
			break;
		
		case 15:
			return "OJDA";
			break;
		
		case 16:
			return "OJDG";
			break;
		
		case 17:
			return "MGTR";
			break;
		
		case 18:
			return "MGYG";
			break;
		
		case 19:
			return "MGCR";
			break;
	}
	return "INVALID!";
}

void func_19(int iParam0)
{
	var uVar0;
	vector3 vVar1[24];
	
	if (unk_0xD88B24C279C15EA1() || unk_0xDB36A8F522CBC12D())
	{
		uVar0 = iParam0;
		unk_0x0A919F27746977BF(8, &uVar0, 1, 1);
	}
	else if (unk_0xF3622D832771D4B9() || unk_0xF5DB888C353E2BED())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x7EB82D55AB02865C(8, &cVar1);
	}
}

void func_20(int iParam0)
{
	if (!func_13(iParam0))
	{
		func_23(iParam0);
	}
	else
	{
		func_21(iParam0);
	}
}

void func_21(int iParam0)
{
	func_22(iParam0, 0f);
}

void func_22(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_11(unk_0x0E4018692D92041D(*iParam0, 4)) - fParam1);
	unk_0x8950ED5730F62EE8(iParam0, 1);
	unk_0xCE689A8E8C42ED78(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_23(int iParam0)
{
	if (!func_13(iParam0))
	{
		func_21(iParam0);
	}
}

int func_24()
{
	int iVar0;
	
	Global_106565.f_18961 = iLocal_82;
	switch (iLocal_82)
	{
		case 4:
		case 8:
			func_25(1);
			break;
		
		case 5:
		case 12:
		case 6:
			func_25(0);
			break;
		
		default:
			break;
	}
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		unk_0x41E36A540F8F323F(unk_0x33CD235DF1E6A94E(), 177, true);
	}
	iVar0 = start_new_script_with_args(&Local_51, &vLocal_83, 170, iLocal_61);
	unk_0x841080481716E87C(&Local_51);
	return iVar0;
}

void func_25(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	float fVar7;
	bool bVar8;
	
	vVar6 = { func_68(iLocal_82) };
	vVar6 = { func_67(cos(vVar6.z), sin(vVar6.z), unk_0x1CC9EA2BF425C3D0(vVar6.x)) };
	unk_0x25FBDA8BA15A928A(func_66(iLocal_82), vVar6, 5000f, 0);
	unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), false, 256);
	unk_0x35675D19812BDF22(false);
	unk_0xDFF589A2149528CE(false);
	func_64(1);
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		unk_0x274C6068B660FFB4(unk_0x33CD235DF1E6A94E(), joaat("weapon_unarmed"), true);
		unk_0x41E36A540F8F323F(unk_0x33CD235DF1E6A94E(), 177, true);
		if (unk_0x8BB475EA09C9A0EB(unk_0x33CD235DF1E6A94E()) > 0.3f)
		{
			unk_0x7D575FC8F42508D8(unk_0x33CD235DF1E6A94E(), -1);
			while (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0) && unk_0x8BB475EA09C9A0EB(unk_0x33CD235DF1E6A94E()) > 0.3f)
			{
				wait(0);
				if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
				{
					unk_0x41E36A540F8F323F(unk_0x33CD235DF1E6A94E(), 177, true);
				}
			}
		}
		if (unk_0x765F6FEEFF39224F(iLocal_255))
		{
			vVar4 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true) - unk_0xFBB1F99A825CAB09(iLocal_255, false) };
			vVar4.z = 0f;
			fVar7 = vmag(vVar4);
			unk_0x99414FB2D30425C1(&iVar1);
			if (fVar7 > 0.8f)
			{
				vVar4 = { vVar4 * FtoV((0.78f / fVar7)) };
				vVar5 = { unk_0xFBB1F99A825CAB09(iLocal_255, false) + vVar4 };
				if (iLocal_82 == 12)
				{
					unk_0x7E268975AF5EA74F(0, vVar5, 1f, 20000, 1048576000, 0, func_63(vVar5, unk_0xFBB1F99A825CAB09(iLocal_255, false)));
				}
				else
				{
					unk_0x2A25AECBD792A364(0, vVar5, 1f, -1, func_63(vVar5, unk_0xFBB1F99A825CAB09(iLocal_255, false)), 1056964608);
				}
			}
			else if (fVar7 > 0.15f)
			{
				unk_0x43EAD1F94EC8561F(0, func_63(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), unk_0xFBB1F99A825CAB09(iLocal_255, false)), 0);
			}
			unk_0x108754262311D34F(0, "pickup_object", "pickup_low", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0xC734F59A13D39AEF(iVar1);
			if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
			{
				unk_0xED68CDDDE25A144E(unk_0x33CD235DF1E6A94E());
				unk_0x41E36A540F8F323F(unk_0x33CD235DF1E6A94E(), 177, true);
				unk_0x13A2D602CD10CBAC(unk_0x33CD235DF1E6A94E(), iVar1);
			}
			unk_0xA7A57E7757ED035E(&iVar1);
			func_64(1);
		}
	}
	func_23(&iLocal_251);
	while ((func_10(&iLocal_251) < 6f && !unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0)) && !unk_0x1CE8F0A08E65CA6A(unk_0x33CD235DF1E6A94E(), "pickup_object", "pickup_low", 3))
	{
		unk_0x41E36A540F8F323F(unk_0x33CD235DF1E6A94E(), 177, true);
		wait(0);
	}
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0) && unk_0x1CE8F0A08E65CA6A(unk_0x33CD235DF1E6A94E(), "pickup_object", "pickup_low", 3))
	{
		unk_0x764B44E3F1D8F88D(unk_0x33CD235DF1E6A94E(), "pickup_object", "pickup_low", 0.8f);
		bVar8 = true;
	}
	while ((func_10(&iLocal_251) < 6f && !unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0)) && unk_0x204DEACC5BECF723(unk_0x33CD235DF1E6A94E(), "pickup_object", "pickup_low") < 0.22f)
	{
		unk_0x41E36A540F8F323F(unk_0x33CD235DF1E6A94E(), 177, true);
		if (!bVar8 && unk_0x1CE8F0A08E65CA6A(unk_0x33CD235DF1E6A94E(), "pickup_object", "pickup_low", 3))
		{
			unk_0x764B44E3F1D8F88D(unk_0x33CD235DF1E6A94E(), "pickup_object", "pickup_low", 0.8f);
			bVar8 = true;
		}
		wait(0);
	}
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		if (!bVar8 && unk_0x1CE8F0A08E65CA6A(unk_0x33CD235DF1E6A94E(), "pickup_object", "pickup_low", 3))
		{
			unk_0x764B44E3F1D8F88D(unk_0x33CD235DF1E6A94E(), "pickup_object", "pickup_low", 0.7f);
			bVar8 = true;
		}
		unk_0x41E36A540F8F323F(unk_0x33CD235DF1E6A94E(), 177, true);
	}
	func_9(&iLocal_251);
	func_40();
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		if (func_35() == 0)
		{
			unk_0x93AA93DA1B137032(unk_0x33CD235DF1E6A94E(), 9, 5, 0, 0);
		}
		else if (func_35() == 1)
		{
			unk_0x93AA93DA1B137032(unk_0x33CD235DF1E6A94E(), 8, 1, 0, 0);
		}
		else if (func_35() == 2)
		{
			unk_0x93AA93DA1B137032(unk_0x33CD235DF1E6A94E(), 8, 3, 0, 0);
		}
	}
	if (bParam0)
	{
		if (!func_33(func_34(iLocal_82)) && !unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
		{
			unk_0xED68CDDDE25A144E(unk_0x33CD235DF1E6A94E());
			unk_0x7E268975AF5EA74F(unk_0x33CD235DF1E6A94E(), func_34(iLocal_82), 1f, -1, 1048576000, 0, 1193033728);
		}
		if (unk_0x765F6FEEFF39224F(iLocal_255))
		{
			unk_0xEC26F4BFC9942A0C(&iLocal_255);
		}
		iVar2 = unk_0xB1A92B63D6757EEF(26379945, func_32(iLocal_82), func_31(iLocal_82), func_30(iLocal_82), 1, 2);
		iVar3 = unk_0xB1A92B63D6757EEF(26379945, func_29(iLocal_82), func_28(iLocal_82), func_27(iLocal_82), 0, 2);
		unk_0x63F0B040CE6EDF0F(true, false, 3000, 1, 0, 0);
		unk_0xC2C1DE3F1EEFF7AF("HAND_SHAKE", 0.2f);
		func_23(&iVar0);
		while (func_10(&iVar0) < 1.5f)
		{
			wait(0);
		}
		unk_0x8EB023915CEEDB99(iVar3, iVar2, func_26(iLocal_82), 1, 1);
		func_21(&iVar0);
		while (func_10(&iVar0) < ((to_float(func_26(iLocal_82)) / 1000f) + 0.3f))
		{
			if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
			{
				unk_0x41E36A540F8F323F(unk_0x33CD235DF1E6A94E(), 177, true);
			}
			wait(0);
		}
	}
	else
	{
		vLocal_83.z = iLocal_255;
	}
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		unk_0x41E36A540F8F323F(unk_0x33CD235DF1E6A94E(), 177, true);
	}
}

int func_26(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 8:
			return 3500;
			break;
	}
	return 0;
}

float func_27(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 50f;
		
		case 8:
			return 50f;
		
		default:
	}
	return 60f;
}

Vector3 func_28(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 58.4197f, 0f, -47.9402f;
		
		case 8:
			return 47.6798f, 0f, -55.2921f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_29(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -119.8524f, -866.9928f, 42.3211f;
		
		case 8:
			return -846.0496f, 277.5203f, 92.9133f;
		
		default:
	}
	return 0f, 0f, 0f;
}

float func_30(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 50f;
		
		case 8:
			return 50f;
		
		default:
	}
	return 60f;
}

Vector3 func_31(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -4.0151f, 0f, -47.5544f;
		
		case 8:
			return 2.5127f, 0f, -55.2921f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_32(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -119.8524f, -866.9928f, 42.3211f;
		
		case 8:
			return -846.0496f, 277.5203f, 92.9133f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_33(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_34(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -83.4741f, -835.4191f, 39.5575f;
		
		case 8:
			return -772.8513f, 312.9656f, 84.6996f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_35()
{
	func_36();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_36()
{
	int iVar0;
	
	if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
	{
		if (func_39(Global_106565.f_2357.f_539.f_4321) != unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()))
		{
			iVar0 = func_38(unk_0x33CD235DF1E6A94E());
			if (func_37(iVar0) && (!func_112(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_37(Global_106565.f_2357.f_539.f_4321))
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

bool func_37(int iParam0)
{
	return iParam0 < 3;
}

int func_38(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		iVar1 = unk_0x541D5C57194E73C4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_39(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_39(int iParam0)
{
	if (func_37(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_40()
{
	vector3 vVar0;
	var uVar1;
	vector3 vVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		return;
	}
	unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), false, 0);
	if (unk_0x765F6FEEFF39224F(iLocal_255))
	{
		unk_0xEC26F4BFC9942A0C(&iLocal_255);
	}
	func_48(0, 0, 1);
	iLocal_255 = unk_0xDD9A603448A23A17(joaat("p_parachute_s"), func_47(iLocal_82), true, true, false);
	unk_0x1C8705F667F673EA(iLocal_255, func_46(iLocal_82), 2, 1);
	func_41(&vVar0, &uVar1);
	vVar2 = { 0f, 0f, uVar1 };
	iVar3 = unk_0x38A6890195DD00D1(vVar0, vVar2, 2);
	unk_0xCF73ED7F74F29138(iLocal_255, iVar3, "puton_parachute_bag", "oddjobs@basejump@ig_15", 1000f, -1000f, 1, 1148846080);
	if (!unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		unk_0xED68CDDDE25A144E(unk_0x33CD235DF1E6A94E());
		unk_0x08798CBF817BA887(unk_0x33CD235DF1E6A94E(), iVar3, "oddjobs@basejump@ig_15", "puton_parachute", 1000f, -1000f, 0, 0, 1148846080, 0);
	}
	unk_0x0F8EAEEC97DDBCB3(-1, "Grab_Parachute", "BASEJUMPS_SOUNDS", true);
	iVar4 = unk_0x00E62F31D05EB2AC("DEFAULT_ANIMATED_CAMERA", false);
	unk_0x76909D790DDFDCE9(iVar4, iVar3, "puton_parachute_cam", "oddjobs@basejump@ig_15");
	unk_0x189377BFBDC9127F(iVar4, true);
	unk_0x63F0B040CE6EDF0F(true, false, 3000, 1, 0, 0);
	while (unk_0x4EDDCE9AAE0FC976(iVar3) < 0.6f)
	{
		wait(0);
	}
	unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), true, 0);
}

void func_41(var uParam0, var uParam1)
{
	*uParam0 = { func_45(iLocal_82) };
	switch (iLocal_82)
	{
		case 5:
			*uParam1 = -1.8f;
			break;
		
		case 4:
			*uParam1 = func_44(func_63(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), *uParam0), -180f, 180f);
			if (*uParam1 > 0f)
			{
				*uParam1 = func_43(*uParam1, 111.6f);
			}
			else
			{
				*uParam1 = func_42(*uParam1, -104.04f);
			}
			break;
		
		case 8:
			*uParam1 = func_44(func_63(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), *uParam0), -180f, 180f);
			if (*uParam1 > 0f)
			{
				*uParam1 = func_43(*uParam1, 79.28f);
			}
			else
			{
				*uParam1 = func_42(*uParam1, -8f);
			}
			break;
		
		case 6:
			*uParam1 = func_44(func_63(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), *uParam0), -180f, 180f);
			break;
		
		case 12:
			*uParam1 = func_44(func_63(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), *uParam0), -180f, 180f);
			break;
	}
}

float func_42(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

float func_43(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

float func_44(float fParam0, float fParam1, float fParam2)
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

Vector3 func_45(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -829.3729f, -1289.817f, 4.0005f;
		
		case 1:
			return 1208.2f, 174.3914f, 80.1245f;
		
		case 2:
			return 2463.793f, 1509.956f, 35.0349f;
		
		case 3:
			return -274.6549f, 6633.898f, 7.1166f;
		
		case 4:
			return -92.35f, -854.3f, 39.571f;
		
		case 5:
			return -120.92f, -976.05f, 295.49f;
		
		case 6:
			return -1237.2f, 4540.75f, 184.75f;
		
		case 7:
			return -742.5269f, 4493.315f, 75.1444f;
		
		case 8:
			return -801.3582f, 298.8532f, 84.949f;
		
		case 9:
			return -1367.595f, 4381.943f, 41.132f;
		
		case 10:
			return 2517.931f, 4971.752f, 44.7082f;
		
		case 11:
			return 1054.534f, -179.6562f, 70.3066f;
		
		case 12:
			return -767.415f, 4331.792f, 147.682f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_46(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 12f, 0f, 12.77f;
		
		case 5:
			return 10f, 0f, -134.58f;
		
		case 6:
			return 76f, 0f, -89.95f;
		
		case 8:
			return 12f, 0f, 89.56f;
		
		case 12:
			return 0f, 75f, -22f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_47(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -92.25f, -854.28f, 39.85f;
		
		case 5:
			return -120.92f, -976.05f, 295.49f;
		
		case 6:
			return -1237.2f, 4540.75f, 184.75f;
		
		case 8:
			return -801.57f, 298.85f, 85.25f;
		
		case 12:
			return -767.415f, 4331.792f, 147.682f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_48(int iParam0, int iParam1, int iParam2)
{
	unk_0x3449EA232F9B8EAD(unk_0x3EE1295CEFBEFED4(), false, iParam0);
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		unk_0x87A1F7523B14E2C9(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), 15f);
	}
	unk_0x6B9BB8BC34DAFFD9(iParam1);
	func_60(0);
	func_50(1, 1, iParam2, 0, 0, 0);
	unk_0xDFF589A2149528CE(false);
	unk_0x35675D19812BDF22(false);
	func_49(23, 1);
}

void func_49(int iParam0, bool bParam1)
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

void func_50(bool bParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0xCBE6E2953ED9652D(unk_0x95B959F18401C09A());
		unk_0xF4197686EF83F52A(unk_0x95B959F18401C09A(), 1);
		unk_0x11D1216D8F205785(unk_0x95B959F18401C09A(), 1);
		func_59(1);
		unk_0x9F86AEF7DC996029();
		unk_0x68F7298CC6F16961();
		if (Global_14553.f_1 > 3)
		{
			if (unk_0xA30F14B621E3269D())
			{
				unk_0xD92171BC6C48DB90(false);
			}
			if (!func_58())
			{
				Global_14553.f_1 = 3;
			}
			Global_15866 = 5;
		}
		func_57(1, iParam3, uParam2, 0);
		Global_56500 = 1;
		Global_68810 = 1;
		Global_71588 = 1;
	}
	else
	{
		func_59(0);
		unk_0xD384C2E6BE0D5ABF();
		Global_56500 = 0;
		if (bParam1)
		{
			unk_0x36296F11E96E764D();
		}
		unk_0xF4197686EF83F52A(unk_0x95B959F18401C09A(), 0);
		unk_0x11D1216D8F205785(unk_0x95B959F18401C09A(), 0);
		func_57(0, iParam3, uParam2, 0);
		if (unk_0xB331FCEB94EB05C8())
		{
			if (((((!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()) && !func_55(unk_0x95B959F18401C09A())) && !func_52(unk_0x95B959F18401C09A(), 0)) && !func_51()) && !bParam4) && !bParam5)
			{
				unk_0x9611832841071B69(unk_0x33CD235DF1E6A94E(), false);
			}
		}
		else if (((!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()) && !func_55(unk_0x95B959F18401C09A())) && !bParam4) && !bParam5)
		{
			unk_0x9611832841071B69(unk_0x33CD235DF1E6A94E(), false);
		}
		Global_71588 = 0;
	}
}

bool func_51()
{
	return unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_39.f_18, 14);
}

bool func_52(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x95B959F18401C09A())
	{
		bVar0 = func_53(-1, 0) == 8;
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

int func_53(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_54();
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

int func_54()
{
	return Global_1312745;
}

int func_55(int iParam0)
{
	if (func_52(iParam0, 0))
	{
		return 1;
	}
	if (func_56())
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

bool func_56()
{
	return unk_0x0E4018692D92041D(Global_2359302, 3);
}

int func_57(int iParam0, int iParam1, var uParam2, int iParam3)
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

int func_58()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_59(int iParam0)
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

void func_60(int iParam0)
{
	if (func_62())
	{
		return;
	}
	if (Global_14725)
	{
		func_61(0, 0);
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
	if (!func_58())
	{
		Global_14553.f_1 = 3;
	}
}

void func_61(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_91(0))
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

bool func_62()
{
	return unk_0x0E4018692D92041D(Global_1681628, 19);
}

float func_63(struct<2> Param0, float fParam1, struct<2> Param2, float fParam3)
{
	return unk_0x174C48E9E544E9A8((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

void func_64(bool bParam0)
{
	if (bParam0)
	{
		func_65();
		if (Global_14553.f_1 == 10 || Global_14553.f_1 == 9)
		{
			unk_0x8950ED5730F62EE8(&Global_2424, 16);
		}
		Global_14553.f_1 = 1;
		if (func_91(0))
		{
			func_60(0);
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

void func_65()
{
	if (Global_14553.f_1 == 9 || Global_14553.f_1 == 10)
	{
		Global_15919 = 0;
		Global_15915 = 1;
	}
}

Vector3 func_66(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1143.586f, -1859.747f, 208.3878f;
		
		case 1:
			return 877.5864f, -436.3322f, 536.9036f;
		
		case 2:
			return 2041.231f, 1978.98f, 585.9358f;
		
		case 3:
			return 405.2326f, 5705.887f, 697.2318f;
		
		case 4:
			return -103.8901f, -870.8046f, 298.7574f;
		
		case 5:
			return -118.2569f, -975.1133f, 297.3781f;
		
		case 6:
			return -1237.465f, 4526.661f, 181.7929f;
		
		case 7:
			return -357.7932f, 4107.914f, 314.8059f;
		
		case 8:
			return -809.6324f, 331.3331f, 233.2818f;
		
		case 9:
			return -1286.926f, 3660.203f, 1076.051f;
		
		case 10:
			return 1022.178f, 3975.738f, 1362.533f;
		
		case 11:
			return 1608.553f, -434.5186f, 1321.916f;
		
		case 12:
			return -756.3533f, 4341.521f, 143.8134f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_67(vector3 vParam0)
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

Vector3 func_68(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -21.7965f, -0.0328f, 70.0438f;
		
		case 1:
			return -26.5541f, 0.0092f, -86.4416f;
		
		case 2:
			return -11.2825f, 0.0213f, 148.5283f;
		
		case 3:
			return -39.935f, 0f, 12.8174f;
		
		case 4:
			return 0.9749f, 0f, -5.2236f;
		
		case 5:
			return -12.889f, 0f, 1.6227f;
		
		case 6:
			return -48.5605f, 0f, 160.4909f;
		
		case 7:
			return -37.0509f, 0.0324f, 24.0288f;
		
		case 8:
			return -17.4118f, 0f, 117.7175f;
		
		case 9:
			return -15.4633f, 0.0328f, -5.1142f;
		
		case 10:
			return -20.9567f, 0f, 170.5743f;
		
		case 11:
			return 1.9344f, 0f, -55.2084f;
		
		case 12:
			return -46.0342f, 0f, 37.5935f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_69(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0x765F6FEEFF39224F(iParam0))
	{
		return;
	}
	iVar0 = func_77(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_37371[iVar0 /*5*/];
		func_72(1, iVar1, 1);
		return;
	}
	iVar2 = func_71(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_70(iVar2);
}

void func_70(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_37345[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_37345[iParam0 /*5*/].f_1 == unk_0x33CD235DF1E6A94E())
		{
			Global_37582 = 0;
		}
	}
	Global_37345[iParam0 /*5*/] = 13;
	Global_37345[iParam0 /*5*/].f_1 = 0;
	Global_37345[iParam0 /*5*/].f_2 = 0;
	Global_37345[iParam0 /*5*/].f_3 = 0;
	Global_37345[iParam0 /*5*/].f_4 = 0;
	Global_37343 = (Global_37343 - 1);
	if (Global_37343 < 0)
	{
		Global_37343 = 0;
	}
}

int func_71(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_37345[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_72(int iParam0, int iParam1, int iParam2)
{
	func_73(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_73(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_75(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_74();
	if (iVar0 == -1)
	{
		return;
	}
	Global_37452[iVar0 /*6*/] = iParam0;
	Global_37452[iVar0 /*6*/].f_1 = iParam1;
	Global_37452[iVar0 /*6*/].f_2 = iParam2;
	Global_37452[iVar0 /*6*/].f_3 = iParam3;
	Global_37452[iVar0 /*6*/].f_4 = iParam4;
	Global_37452[iVar0 /*6*/].f_5 = iParam5;
}

int func_74()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_37452[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_75(int iParam0, int iParam1, int iParam2)
{
	if (func_76(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_76(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_37452[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_37452[iVar0 /*6*/])
			{
				if (iParam1 == Global_37452[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_77(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_37371[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_37371[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_78()
{
	if (Global_3228[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3228[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3228[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3228[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3228[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3228[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	unk_0xCE689A8E8C42ED78(&Global_2423, 25);
	unk_0x8950ED5730F62EE8(&Global_2424, 11);
}

int func_79(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_81(0))
		{
			return 0;
		}
		Global_36389++;
		*iParam0 = Global_36389;
		unk_0xF23201C524E43F1C(unk_0x3EE1295CEFBEFED4(), 0);
		Global_17272.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x3D732B99F6301C4D(8);
		}
		Global_36425 = iParam2;
		Global_36387 = *iParam0;
		Global_36388 = iParam4;
		Global_36386 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_36386 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_36386)
			{
				if (Global_36392[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_36387 == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_128(iParam2))
		{
			return 0;
		}
		if (Global_36386 == 8)
		{
			return 0;
		}
		Global_36389++;
		*iParam0 = Global_36389;
		Global_36392[Global_36386 /*4*/] = Global_36389;
		Global_36392[Global_36386 /*4*/].f_1 = iParam1;
		Global_36392[Global_36386 /*4*/].f_2 = iParam2;
		Global_36392[Global_36386 /*4*/].f_3 = 0;
		Global_36386++;
		if (iParam4 != 0)
		{
			func_80(iParam0, iParam4);
		}
	}
	return 2;
}

void func_80(var uParam0, int iParam1)
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

int func_81(int iParam0)
{
	if (Global_36425 == 15)
	{
		return 0;
	}
	if (func_128(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_82()
{
	switch (iLocal_82)
	{
		case 4:
		case 5:
		case 6:
		case 8:
		case 12:
			func_83();
			break;
		
		default:
			break;
	}
}

void func_83()
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = unk_0x8918EC905FC8975D();
	if (unk_0x765F6FEEFF39224F(iVar0))
	{
		vLocal_83.y = iVar0;
	}
	if (unk_0x765F6FEEFF39224F(iLocal_255))
	{
		vVar1 = { unk_0xFBB1F99A825CAB09(iLocal_255, true) };
		if (vdist2(vVar1, vLocal_56) > 25f)
		{
			func_84(0);
		}
	}
}

void func_84(int iParam0)
{
	if (iParam0 == 2)
	{
	}
	else if (iParam0 == 0)
	{
	}
	iLocal_70 = iParam0;
	iLocal_68 = 0;
	iLocal_59 = 7;
}

int func_85(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_86(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0xF272A2699B521CE6(unk_0x3EE1295CEFBEFED4()))
	{
		return 0;
	}
	if (func_91(0))
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

int func_86(int iParam0)
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

void func_87(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_86(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_37139[iVar0 /*32*/])
		{
			Global_37139[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

void func_88(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x1BCDA92AD0A7835B(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x71EC91BA8C88BCE0())
	{
		if (!*iParam0 == -1)
		{
			func_87(iParam0);
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

int func_89(var uParam0)
{
	return 1;
}

var func_90()
{
	return Global_68807;
}

int func_91(int iParam0)
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

bool func_92(int iParam0, int iParam1)
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

bool func_93()
{
	return unk_0xE3903F59E2F22150() <= Global_17411.f_5878 + 100;
}

int func_94()
{
	if (unk_0x1BCDA92AD0A7835B(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_95(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17272.f_4 && Global_17272.f_104 == 4);
	}
	return Global_17272.f_4;
}

void func_96(var uParam0, int iParam1)
{
	func_97(uParam0, iParam1);
}

void func_97(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_98()
{
	return 1;
}

bool func_99()
{
	int iVar0;
	bool bVar1;
	
	if (unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		return 0;
	}
	unk_0x96C4B46F194803A7(unk_0x33CD235DF1E6A94E(), &iVar0, 1);
	if (((iVar0 == 0 || iVar0 == joaat("weapon_unarmed")) || iVar0 == joaat("weapon_electric_fence")) || iVar0 == joaat("gadget_parachute"))
	{
		bVar1 = false;
	}
	else
	{
		bVar1 = true;
	}
	if (bVar1)
	{
	}
	if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		return ((((bVar1 && unk_0xF1CDE9FD207C4CD8(0, 69)) || (bVar1 && unk_0xF1CDE9FD207C4CD8(0, 70))) || (bVar1 && unk_0xF1CDE9FD207C4CD8(0, 68))) || unk_0x0FFAAF12F0E94E37(unk_0x95B959F18401C09A()));
	}
	return (((((bVar1 && unk_0xF1CDE9FD207C4CD8(0, 24)) || (bVar1 && unk_0xF1CDE9FD207C4CD8(0, 25))) || (bVar1 && unk_0xF1CDE9FD207C4CD8(0, 47))) || unk_0xE7A1E8F9E47DE4A7(unk_0x33CD235DF1E6A94E())) || unk_0x0FFAAF12F0E94E37(unk_0x95B959F18401C09A()));
}

int func_100(int iParam0)
{
	int iVar0;
	
	if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
	{
		if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
		{
			if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
			{
				iVar0 = func_35();
				if (!func_37(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0xE027064B1C47E424(unk_0x95B959F18401C09A()) || unk_0x7DD221C91135596A(unk_0x33CD235DF1E6A94E())) || unk_0x707FFB0E65C1C546(unk_0x33CD235DF1E6A94E())) || unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E())) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || unk_0x63E238348058FF52(unk_0x95B959F18401C09A())) || unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0)) || func_107()) || Global_105612) || Global_25767) || func_106()) || func_92(8, -1)) || func_105()) || func_104()) || func_103()) || func_94()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1) || func_107()) || Global_25767) || func_106()) || func_92(8, -1)) || func_103()) || func_105()) || func_104()) || func_94()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xE027064B1C47E424(unk_0x95B959F18401C09A()) || unk_0x7DD221C91135596A(unk_0x33CD235DF1E6A94E())) || unk_0x707FFB0E65C1C546(unk_0x33CD235DF1E6A94E())) || unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E())) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || unk_0x63E238348058FF52(unk_0x95B959F18401C09A())) || unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0)) || func_107()) || Global_105612) || Global_25767) || func_106()) || func_92(8, -1)) || func_103()) || func_105()) || func_104()) || func_94()) || Global_106565.f_7682.f_919[iVar0] == 5) || Global_36972 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E()) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0)) || func_107()) || Global_105612) || Global_25767) || func_106()) || func_92(8, -1)) || func_105()) || func_104()) || func_94()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_107() || unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) > 0) || func_92(8, -1)) || func_94()) || func_102()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_92(8, -1) || func_105()) || func_104()) || func_102()) || func_101())
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
							if ((((((((((((((unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0) || unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) > 0) || unk_0x7DD221C91135596A(unk_0x33CD235DF1E6A94E())) || unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E())) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || unk_0x63E238348058FF52(unk_0x95B959F18401C09A())) || func_107()) || Global_25767) || func_106()) || func_92(8, -1)) || func_104()) || func_103()) || func_94()) || Global_106565.f_7682.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0) || !unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A())) || !unk_0xE027064B1C47E424(unk_0x95B959F18401C09A())) || !unk_0x73DA1542B2F0C458()) || unk_0x7DD221C91135596A(unk_0x33CD235DF1E6A94E())) || unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E())) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || func_107()) || func_104()) || Global_105612) || Global_25767) || func_106()) || Global_37584) || func_92(8, -1)) || func_103()) || func_102()) || func_94()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0) || !unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A())) || !unk_0xE027064B1C47E424(unk_0x95B959F18401C09A())) || !unk_0x73DA1542B2F0C458()) || unk_0x09287BFEE1D9F6EF(unk_0x95B959F18401C09A(), 0)) || unk_0x7DD221C91135596A(unk_0x33CD235DF1E6A94E())) || unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1)) || unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E())) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0x04571D88090E0F77(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || unk_0x63E238348058FF52(unk_0x95B959F18401C09A())) || func_107()) || Global_105612) || Global_25767) || func_106()) || func_92(8, -1)) || func_103()) || func_102()) || func_105()) || func_104()) || func_94())
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

var func_101()
{
	return Global_93721.f_1;
}

int func_102()
{
	if (Global_90634 != -1)
	{
		return unk_0x0E4018692D92041D(Global_84500[Global_90634 /*34*/].f_15, 13);
	}
	return 0;
}

int func_103()
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

bool func_104()
{
	return Global_93734.f_340 > 0;
}

bool func_105()
{
	return Global_93734.f_339 > 0;
}

var func_106()
{
	return Global_1312867;
}

int func_107()
{
	if (!unk_0xB331FCEB94EB05C8())
	{
		return Global_91190.f_44 == 1;
	}
	return 0;
}

int func_108()
{
	if (unk_0x1BCDA92AD0A7835B(joaat("stripperhome")) > 0)
	{
		return 1;
	}
	return 0;
}

var func_109()
{
	return Global_89544;
}

int func_110(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_112(6) || func_112(7))
			{
				return 1;
			}
			else
			{
				return func_110(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_128(5))
			{
				if (func_100(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_111(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return unk_0xE38E3CF1625A4145(Global_26140[iVar0 /*23*/].f_19);
}

bool func_112(int iParam0)
{
	return Global_36425 == iParam0;
}

void func_113(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_114()
{
	vector3 vVar0;
	
	if (bLocal_254)
	{
		switch (iLocal_82)
		{
			case 4:
			case 5:
			case 8:
				iLocal_255 = unk_0xDD9A603448A23A17(joaat("p_parachute_s"), func_47(iLocal_82), true, true, false);
				unk_0x1C8705F667F673EA(iLocal_255, func_46(iLocal_82), 2, 1);
				unk_0xF70578F5CD9822CB(iLocal_255, true);
				break;
			
			case 6:
			case 12:
				iLocal_255 = unk_0xDD9A603448A23A17(joaat("p_parachute_s"), func_47(iLocal_82), true, true, false);
				unk_0x1C8705F667F673EA(iLocal_255, func_46(iLocal_82), 2, 1);
				unk_0x148F2F9880C74ABA(iLocal_255);
				vVar0 = { func_116(iLocal_82) };
				if (!func_33(vVar0))
				{
					iLocal_256 = unk_0xC651C43AB13A15E5(joaat("bati"), vVar0, func_115(iLocal_82), true, true, false);
					iLocal_256 = iLocal_256;
				}
				break;
			
			default:
				break;
			}
	}
}

float func_115(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return 165.0425f;
		
		default:
	}
	return 0f;
}

Vector3 func_116(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return -1243.606f, 4543.016f, 185.9527f;
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_117()
{
	switch (iLocal_82)
	{
		case 5:
		case 4:
		case 8:
		case 6:
			return (((unk_0xE9CCF312047EBEE0("pickup_object") && unk_0xE9CCF312047EBEE0("oddjobs@basejump@ig_15")) && func_118(&uLocal_78)) && func_118(&uLocal_80));
			break;
		
		case 12:
			return ((unk_0xE9CCF312047EBEE0("pickup_object") && unk_0xE9CCF312047EBEE0("oddjobs@basejump@ig_15")) && func_118(&uLocal_78));
			break;
		
		default:
			break;
	}
	return (func_118(&uLocal_78) && func_118(&uLocal_80));
}

int func_118(var uParam0)
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

void func_119()
{
	switch (iLocal_82)
	{
		case 5:
		case 8:
			func_121(&uLocal_78, joaat("p_parachute_s"));
			unk_0x0483D0035D6E46FD("pickup_object");
			unk_0x0483D0035D6E46FD("oddjobs@basejump@ig_15");
			break;
		
		case 4:
		case 6:
			func_121(&uLocal_78, joaat("p_parachute_s"));
			func_121(&uLocal_80, joaat("bati"));
			unk_0x0483D0035D6E46FD("pickup_object");
			unk_0x0483D0035D6E46FD("oddjobs@basejump@ig_15");
			break;
		
		case 12:
			func_121(&uLocal_78, joaat("p_parachute_s"));
			unk_0x0483D0035D6E46FD("pickup_object");
			unk_0x0483D0035D6E46FD("oddjobs@basejump@ig_15");
			break;
		
		default:
			break;
	}
	func_120(&uLocal_78);
	func_120(&uLocal_80);
}

void func_120(var uParam0)
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

int func_121(var uParam0, int iParam1)
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
	iVar1 = func_122(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_122(var uParam0)
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

void func_123(int iParam0)
{
	iLocal_59 = iParam0;
}

void func_124(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		bVar1 = unk_0x0E4018692D92041D(Global_26140[iVar0 /*23*/].f_11, 15);
		if (bVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0x0E4018692D92041D(Global_26140[iVar0 /*23*/].f_11, 0))
	{
		unk_0x8950ED5730F62EE8(&(Global_26140[iVar0 /*23*/].f_11), 18);
		if (Global_26137 == 1)
		{
			Global_26138 = 1;
		}
		Global_26137 = 1;
	}
	if (bParam1)
	{
		unk_0x8950ED5730F62EE8(&(Global_26140[iVar0 /*23*/].f_11), 0);
		unk_0x8950ED5730F62EE8(&(Global_26140[iVar0 /*23*/].f_11), 15);
		unk_0x8950ED5730F62EE8(&(Global_26140[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		unk_0xCE689A8E8C42ED78(&(Global_26140[iVar0 /*23*/].f_11), 0);
		unk_0xCE689A8E8C42ED78(&(Global_26140[iVar0 /*23*/].f_11), 15);
	}
	if (!unk_0x0E4018692D92041D(Global_26140[iVar0 /*23*/].f_11, 0))
	{
		if (unk_0xE38E3CF1625A4145(Global_26140[iVar0 /*23*/].f_19))
		{
			unk_0x1F685E0FB1FEAB13(1);
			unk_0x1ABDB383C83A336A(&(Global_26140[iVar0 /*23*/].f_19));
			unk_0x1F685E0FB1FEAB13(0);
		}
	}
}

int func_125()
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

int func_126()
{
	if (Global_90634 != -1)
	{
		return unk_0x0E4018692D92041D(Global_84500[Global_90634 /*34*/].f_15, 20);
	}
	return 0;
}

bool func_127(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	bVar0 = unk_0x0E4018692D92041D(Global_106565.f_9079.f_99.f_219[iParam0], iParam1);
	return bVar0;
}

bool func_128(int iParam0)
{
	return func_129(iParam0, Global_36425);
}

int func_129(int iParam0, int iParam1)
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

bool func_130(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_131()
{
	if (unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		func_96(&uLocal_58, 8388608);
		return;
	}
	StringCopy(&Local_51, "bj", 64);
	iLocal_82 = func_135(vLocal_56, 0);
	switch (iLocal_82)
	{
		case 4:
			iLocal_69 = 129;
			break;
		
		case 5:
			iLocal_69 = 130;
			break;
		
		case 6:
			iLocal_69 = 131;
			break;
		
		case 8:
			iLocal_69 = 133;
			break;
		
		case 12:
			iLocal_69 = 137;
			break;
		
		default:
			break;
	}
	if (iLocal_69 == 129)
	{
		if (func_134(19))
		{
			func_133(iLocal_69);
		}
	}
	func_96(&uLocal_58, 4194304);
	iLocal_63 = 0;
	fLocal_66 = (to_float(func_132(iLocal_69)) + 5f);
	fLocal_77 = 1.1f;
	sLocal_65 = "PLAY_BASEJUMP_G";
	if (iLocal_69 != 263)
	{
		if (!func_127(0, iLocal_63))
		{
			bLocal_254 = false;
			func_133(iLocal_69);
		}
		else
		{
			bLocal_254 = true;
		}
	}
	else
	{
		bLocal_254 = false;
	}
	if (unk_0x1BCDA92AD0A7835B(joaat("bj")) > 0)
	{
		func_96(&uLocal_58, 8);
	}
	else
	{
		func_137(&uLocal_58, 8);
	}
	if (func_112(12))
	{
		func_96(&uLocal_58, 8);
	}
	iLocal_61 = 28000;
}

int func_132(int iParam0)
{
	switch (iParam0)
	{
		case 91:
		case 92:
		case 110:
		case 111:
			return 20;
			break;
		
		case 66:
		case 67:
		case 76:
		case 107:
		case 108:
		case 109:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 129:
		case 130:
		case 131:
		case 133:
		case 137:
			return 100;
			break;
		
		case 125:
		case 126:
		case 127:
		case 128:
		case 132:
		case 134:
		case 135:
		case 136:
		case 68:
		case 69:
		case 95:
		case 70:
		case 71:
		case 73:
		case 74:
		case 75:
		case 72:
			return 209;
			break;
	}
	return -1;
}

void func_133(int iParam0)
{
	if (iLocal_59 < 5)
	{
		if (iParam0 != 263)
		{
			if (iParam0 < 0 || iParam0 >= 263)
			{
			}
			func_124(iParam0, 0, 0);
		}
		iLocal_69 = 263;
		func_87(&iLocal_60);
		iLocal_59 = 9;
	}
}

bool func_134(int iParam0)
{
	return Global_105652[iParam0 /*10*/].f_1;
}

int func_135(vector3 vParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = 0;
	while (iVar3 < 13)
	{
		if (iParam1 == func_136(iVar3))
		{
			fVar1 = vdist2(vParam0, func_45(iVar3));
			if (fVar0 > fVar1)
			{
				fVar0 = fVar1;
				iVar2 = iVar3;
			}
		}
		iVar3++;
	}
	return iVar2;
}

int func_136(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 7:
		case 9:
		case 10:
		case 11:
			return 1;
			break;
	}
	return 0;
}

void func_137(var uParam0, int iParam1)
{
	func_138(uParam0, iParam1);
}

void func_138(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_139(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_69 != 263)
		{
			func_124(iLocal_69, 0, 0);
		}
	}
	func_87(&iLocal_60);
	if (func_130(uLocal_58, 2))
	{
		func_5();
		func_137(&uLocal_58, 2);
		func_7(&iLocal_62);
	}
	iLocal_62 = -1;
	func_140();
	unk_0x5894DC159447E10A();
}

void func_140()
{
	func_137(&uLocal_58, 4);
	func_141();
	if (unk_0x8ED4328770BEE4A1(iLocal_50))
	{
		unk_0x0432BBEFF2AF18F4(iLocal_50, 3);
	}
	if (!unk_0x6D2E2622CA149402(&Local_52))
	{
		if (unk_0x625A8786A9CA5F9A(&Local_52) != 0)
		{
			unk_0x841080481716E87C(&Local_52);
		}
	}
}

void func_141()
{
}

