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
	struct<3> Local_43 = { 0, 0, 0 } ;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	struct<3> Local_49 = { 0, 0, 0 } ;
	struct<3> Local_52 = { 0, 0, 0 } ;
	struct<3> Local_55 = { 0, 0, 0 } ;
	struct<3> Local_58 = { 0, 0, 0 } ;
	struct<3> Local_61 = { 0, 0, 0 } ;
	struct<3> Local_64 = { 0, 0, 0 } ;
	float fLocal_67 = 0f;
	var uLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 16;
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
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	int iLocal_241 = 0;
	int iLocal_242 = 0;
	bool bLocal_243 = 0;
	bool bLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
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
	Local_49 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0x4210287E2833D44B(11))
	{
		func_181();
	}
	if (func_139(Local_49, -1, 0, 0, 0))
	{
		func_136(-1);
	}
	else
	{
		unk_0x4BFE89D21F9885DC();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (unk_0xCC7E6EA219FD8BAC() || bLocal_243)
		{
			if (!func_135())
			{
				if (func_134())
				{
					func_181();
				}
			}
			unk_0xE9F487B66E055135("RE_LU", 0);
			switch (iLocal_46)
			{
				case 0:
					if (func_122())
					{
						func_181();
					}
					if (iLocal_47)
					{
						iLocal_46 = 1;
						iLocal_48 = 1;
					}
					else
					{
						func_119();
					}
					break;
				
				case 1:
					if (!bLocal_243)
					{
						if (!iLocal_242)
						{
							func_106();
						}
						else if (!iLocal_246)
						{
							func_105();
							func_104();
						}
						func_93();
						if (!unk_0xECEC7528A52B4EE8(iLocal_69))
						{
							unk_0xD991F7672CE8EAD3(iLocal_69, 247, 1);
						}
					}
					else
					{
						unk_0x6906086484B6A5CE(unk_0x1146A9AE09CE2B14());
						if (!iLocal_246)
						{
							func_58();
						}
						else if (!iLocal_247)
						{
							func_57();
						}
					}
					if (!unk_0xECEC7528A52B4EE8(iLocal_70))
					{
						unk_0xD991F7672CE8EAD3(iLocal_70, 156, 1);
					}
					func_36();
					func_35();
					func_1();
					break;
			}
		}
		else
		{
			func_181();
		}
	}
}

void func_1()
{
	if (bLocal_243)
	{
		if (unk_0xECEC7528A52B4EE8(iLocal_70))
		{
			func_3();
		}
		else if (bLocal_244)
		{
			if (!unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_70, 100f, 100f, 100f, 0, 1, 0))
			{
				func_2();
			}
		}
		else if (!unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_70, 100f, 100f, 100f, 0, 1, 0))
		{
			func_3();
		}
	}
	else
	{
		if (!unk_0xECEC7528A52B4EE8(iLocal_69))
		{
			if (unk_0xA6E8FBD68548675F(iLocal_69, unk_0x7D2B9E6A64637269(), 1) || unk_0xC51EC1626E7099CA(iLocal_69))
			{
				func_2();
			}
		}
		if (unk_0xECEC7528A52B4EE8(iLocal_69))
		{
			if (!unk_0xECEC7528A52B4EE8(iLocal_70))
			{
				unk_0x5C679902079A7E80(&uLocal_75);
				unk_0x8ADA462BC5F42FD8(0, unk_0x7D2B9E6A64637269(), -1, 2052, 2);
				unk_0x1DC2BF231DE6A016(0, unk_0x7D2B9E6A64637269(), 1000f, -1, 0, 0);
				unk_0x1BBD0A5729AB1226(uLocal_75);
				unk_0x8A1AC8EBC73850C8(iLocal_70, uLocal_75);
				unk_0x504B26425DFF773C(iLocal_70, 1);
			}
			func_2();
		}
		if (unk_0xECEC7528A52B4EE8(iLocal_70))
		{
			if (!unk_0xECEC7528A52B4EE8(iLocal_69))
			{
				unk_0xCA089CD1A17D76DF(iLocal_69);
				unk_0x5C679902079A7E80(&uLocal_75);
				unk_0x8ADA462BC5F42FD8(0, unk_0x7D2B9E6A64637269(), -1, 2052, 2);
				unk_0x1DC2BF231DE6A016(0, unk_0x7D2B9E6A64637269(), 1000f, -1, 0, 0);
				unk_0x1BBD0A5729AB1226(uLocal_75);
				unk_0x8A1AC8EBC73850C8(iLocal_69, uLocal_75);
				unk_0x504B26425DFF773C(iLocal_69, 1);
			}
			func_2();
		}
	}
	if (unk_0xECEC7528A52B4EE8(iLocal_69))
	{
		if (unk_0x575B7C28D81C0B4D(uLocal_71))
		{
			unk_0x1AD5BCFEC31BB8D9(&uLocal_71);
		}
	}
	if (unk_0xECEC7528A52B4EE8(iLocal_70))
	{
		if (unk_0x575B7C28D81C0B4D(uLocal_72))
		{
			unk_0x1AD5BCFEC31BB8D9(&uLocal_72);
		}
	}
}

void func_2()
{
	func_181();
}

void func_3()
{
	while (func_34())
	{
		SYSTEM::WAIT(0);
	}
	while (!func_33())
	{
		SYSTEM::WAIT(0);
	}
	func_7(-1, 0);
	func_4();
	func_181();
}

void func_4()
{
	func_5();
}

int func_5()
{
	if (func_6(0))
	{
		return 0;
	}
	if (Global_99409.f_8)
	{
		if (Global_99409.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_99409.f_10 > 1)
	{
		return 0;
	}
	Global_99409.f_10++;
	return 1;
}

bool func_6(bool bParam0)
{
	if (!bParam0 && unk_0x636F1F53CC61D2C9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x234B68AC2E35ED5A(Global_77496, 0);
}

void func_7(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_31();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_30(iParam0))
	{
		func_29(iParam0, iParam1);
		if (!func_28(51))
		{
			func_18("RE_REWARD", 1, 0, 4000, 10000, func_21(), 0, 138, 0);
			func_17(51);
		}
		if (func_16(iParam0))
		{
			Global_112293.f_24993.f_2 = 3;
		}
		if (func_15(iParam0, iParam1) != 322)
		{
			func_9(func_15(iParam0, iParam1), Local_43.x, Local_43.f_1);
		}
		Global_112281 = iParam1;
		if (Global_112279 == 0)
		{
			if (((Global_112282 == 1 || Global_112282 == 5) || Global_112282 == 11) || Global_112282 == 25)
			{
				func_8(2);
			}
			else if ((Global_112282 == 26 || Global_112282 == 8) || Global_112282 == 17)
			{
				func_8(7);
			}
			else
			{
				func_8(1);
			}
		}
	}
}

void func_8(int iParam0)
{
	Global_112279 = iParam0;
}

void func_9(int iParam0, var uParam1, var uParam2)
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
		func_13((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_112293.f_10192[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_112293.f_10192[iParam0 /*12*/].f_6 == 11 || Global_112293.f_10192[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_112293.f_10192[iParam0 /*12*/].f_5 = 1;
		Global_112293.f_10192[iParam0 /*12*/].f_10 = uParam1;
		Global_112293.f_10192[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x94F7E80BDFF33F26(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x94F7E80BDFF33F26(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x94F7E80BDFF33F26(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_10();
	}
}

void func_10()
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
	Global_112029 = 0;
	Global_112030 = 0;
	Global_112031 = 0;
	Global_112032 = 0;
	Global_112033 = 0;
	Global_112034 = 0;
	Global_112035 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_112293.f_10192.f_3853;
	Global_112293.f_10192.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_112293.f_10192[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_112293.f_10192[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_112029++;
					fVar1 = (fVar1 + Global_112293.f_10192[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_112030++;
					fVar2 = (fVar2 + Global_112293.f_10192[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_112031++;
					fVar3 = (fVar3 + Global_112293.f_10192[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_112032++;
					fVar4 = (fVar4 + Global_112293.f_10192[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_112033++;
					fVar5 = (fVar5 + (Global_112293.f_10192[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_112034++;
					fVar6 = (fVar6 + Global_112293.f_10192[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_112035++;
					fVar7 = (fVar7 + Global_112293.f_10192[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_112012 > 0)
	{
		if (Global_112029 == Global_112012)
		{
			fVar1 = 55f;
		}
	}
	if (Global_112013 > 0)
	{
		if (Global_112030 == Global_112013)
		{
			fVar2 = 10f;
		}
	}
	if (Global_112014 > 0)
	{
		if (Global_112031 == Global_112014)
		{
			fVar3 = 0f;
		}
	}
	if (Global_112015 > 0)
	{
		if (Global_112032 == Global_112015)
		{
			fVar4 = 10f;
		}
	}
	if (Global_112016 > 0)
	{
		if (((Global_112033 == Global_112016 || (Global_112016 * 10 / Global_112033) < 41) || Global_112033 > Global_112019) || Global_112033 == Global_112019)
		{
			if (!unk_0x234B68AC2E35ED5A(Global_112293.f_10192.f_3856, 14))
			{
				if (Global_112033 == Global_112016)
				{
					unk_0x94F7E80BDFF33F26(joaat("num_rndevents_completed"), Global_112016, 0);
					unk_0x191DDA30577F440A(&(Global_112293.f_10192.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_112017 > 0)
	{
		if (Global_112034 == Global_112017)
		{
			fVar6 = 15f;
		}
	}
	if (Global_112018 > 0)
	{
		if (Global_112035 == Global_112018)
		{
			fVar7 = 5f;
		}
	}
	Global_112293.f_10192.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_112033 > Global_112019 || Global_112033 == Global_112019)
	{
		iVar9 = Global_112019;
	}
	else
	{
		iVar9 = Global_112033;
	}
	unk_0xAC4FD27671081628(joaat("num_missions_completed"), Global_112029, 1);
	unk_0xAC4FD27671081628(joaat("num_missions_available"), Global_112012, 1);
	unk_0xAC4FD27671081628(joaat("num_minigames_completed"), Global_112030, 1);
	unk_0xAC4FD27671081628(joaat("num_minigames_available"), Global_112013, 1);
	unk_0xAC4FD27671081628(joaat("num_oddjobs_completed"), Global_112031, 1);
	unk_0xAC4FD27671081628(joaat("num_oddjobs_available"), Global_112014, 1);
	unk_0xAC4FD27671081628(joaat("num_rndpeople_completed"), Global_112032, 1);
	unk_0xAC4FD27671081628(joaat("num_rndpeople_available"), Global_112015, 1);
	unk_0xAC4FD27671081628(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xAC4FD27671081628(joaat("num_rndevents_available"), Global_112019, 1);
	unk_0xAC4FD27671081628(joaat("num_misc_completed"), (Global_112035 + Global_112034), 1);
	unk_0xAC4FD27671081628(joaat("num_misc_available"), (Global_112018 + Global_112017), 1);
	Global_112036 = (Global_112029 * 100 / Global_112012);
	Global_112038 = ((Global_112031 + Global_112030) * 100 / (Global_112014 + Global_112013));
	Global_112037 = ((Global_112032 + iVar9) * 100 / (Global_112015 + Global_112019));
	Global_112039 = ((Global_112034 + Global_112035) * 100 / (Global_112017 + Global_112018));
	unk_0xBAE77BA3A38F7944(joaat("total_progress_made"), Global_112293.f_10192.f_3853, 1);
	unk_0xAC4FD27671081628(joaat("percent_story_missions"), Global_112036, 1);
	unk_0xAC4FD27671081628(joaat("percent_ambient_missions"), Global_112037, 1);
	unk_0xAC4FD27671081628(joaat("percent_oddjobs"), Global_112038, 1);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_112293.f_10192.f_3853))
	{
		func_12(13, SYSTEM::FLOOR(Global_112293.f_10192.f_3853));
	}
	if (!unk_0x0854A007D3887A73())
	{
		if (!Global_77248)
		{
			if (func_11() == 2 == 0 && !unk_0x02BFF15CAA701972())
			{
				if (unk_0x6280556FDB0D083D())
				{
					Global_112027 = 0;
				}
				if (!Global_62098)
				{
					func_5();
				}
			}
		}
	}
}

int func_11()
{
	return Global_31345;
}

int func_12(int iParam0, int iParam1)
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
	iVar0 = unk_0x37A2D5DD137657EB(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x74634292CAC72DD6(iParam0, iParam1);
	}
	return 0;
}

int func_13(int iParam0, int iParam1, int iParam2, int iParam3)
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_14();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0xACDC64E5D157EC08((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x5002208C5710DBEB((iParam0 - 0)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0xACDC64E5D157EC08((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x5002208C5710DBEB((iParam0 - 192)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0xACDC64E5D157EC08((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x5002208C5710DBEB((iParam0 - 513)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0xACDC64E5D157EC08((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x5002208C5710DBEB((iParam0 - 705)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0x20CEBFA2EEC4CA42((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x5002208C5710DBEB((iParam0 - 3111)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0x20CEBFA2EEC4CA42((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x5002208C5710DBEB((iParam0 - 2919)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x783924BA309D8E09((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x5002208C5710DBEB((iParam0 - 4207)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x783924BA309D8E09((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x5002208C5710DBEB((iParam0 - 4335)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x783924BA309D8E09((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x5002208C5710DBEB((iParam0 - 6029)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x783924BA309D8E09((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x5002208C5710DBEB((iParam0 - 7385)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x783924BA309D8E09((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x5002208C5710DBEB((iParam0 - 7321)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x783924BA309D8E09((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x5002208C5710DBEB((iParam0 - 9361)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x783924BA309D8E09((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x5002208C5710DBEB((iParam0 - 15369)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x783924BA309D8E09((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x5002208C5710DBEB((iParam0 - 15562)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x783924BA309D8E09((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x5002208C5710DBEB((iParam0 - 15946)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0x783924BA309D8E09((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x5002208C5710DBEB((iParam0 - 18098)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = unk_0x783924BA309D8E09((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x5002208C5710DBEB((iParam0 - 22066)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = unk_0x783924BA309D8E09((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x5002208C5710DBEB((iParam0 - 24962)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = unk_0x783924BA309D8E09((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - unk_0x5002208C5710DBEB((iParam0 - 26810)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar20, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = unk_0x783924BA309D8E09((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - unk_0x5002208C5710DBEB((iParam0 - 28098)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar21, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = unk_0x783924BA309D8E09((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - unk_0x5002208C5710DBEB((iParam0 - 28355)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar22, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar23 = unk_0x783924BA309D8E09((iParam0 - 30227), 0, 1, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - unk_0x5002208C5710DBEB((iParam0 - 30227)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar23, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar24 = unk_0x783924BA309D8E09((iParam0 - 30355), 0, 1, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - unk_0x5002208C5710DBEB((iParam0 - 30355)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar24, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar25 = unk_0x783924BA309D8E09((iParam0 - 30515), 0, 1, iParam2, "_HISLANDPSTAT_BOOL");
		iVar1 = ((iParam0 - 30515) - unk_0x5002208C5710DBEB((iParam0 - 30515)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar25, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 31707 && iParam0 < 32283)
	{
		iVar26 = unk_0x783924BA309D8E09((iParam0 - 31707), 0, 1, iParam2, "_TUNERPSTAT_BOOL");
		iVar1 = ((iParam0 - 31707) - unk_0x5002208C5710DBEB((iParam0 - 31707)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar26, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_14()
{
	return Global_1312763;
}

int func_15(int iParam0, int iParam1)
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

int func_16(int iParam0)
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

void func_17(int iParam0)
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
		unk_0x191DDA30577F440A(&(Global_112293.f_20408.f_150[iVar1]), iVar0);
	}
}

void func_18(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_19(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_19(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xDA654EB115F9FF7D(sParam0, ""))
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
	while (iVar0 < Global_112293.f_20408.f_145)
	{
		if (unk_0xDA654EB115F9FF7D(&(Global_112293.f_20408[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_112293.f_20408.f_145 < 9)
	{
		StringCopy(&(Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_4), sParam1, 16);
		Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_8 = (unk_0xDFB7BFA6482FEE1E() + iParam3);
		Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_9 = iParam5;
		Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_11 = iParam6;
		Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_12 = uParam2;
		Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_13 = iParam7;
		Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_14 = iParam8;
		Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_10 = ((unk_0xDFB7BFA6482FEE1E() + iParam3) + iParam4);
		}
		else
		{
			Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_10 = -1;
		}
		Global_112293.f_20408.f_145++;
		func_20();
	}
}

void func_20()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_112293.f_20408.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_112293.f_20408.f_145)
	{
		if (unk_0x234B68AC2E35ED5A(Global_112293.f_20408[iVar0 /*16*/].f_11, 0))
		{
			if (Global_112293.f_20408[iVar0 /*16*/].f_12 > Global_112293.f_20408.f_146[0])
			{
				Global_112293.f_20408.f_146[0] = Global_112293.f_20408[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x234B68AC2E35ED5A(Global_112293.f_20408[iVar0 /*16*/].f_11, 1))
		{
			if (Global_112293.f_20408[iVar0 /*16*/].f_12 > Global_112293.f_20408.f_146[1])
			{
				Global_112293.f_20408.f_146[1] = Global_112293.f_20408[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x234B68AC2E35ED5A(Global_112293.f_20408[iVar0 /*16*/].f_11, 2))
		{
			if (Global_112293.f_20408[iVar0 /*16*/].f_12 > Global_112293.f_20408.f_146[2])
			{
				Global_112293.f_20408.f_146[2] = Global_112293.f_20408[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_21()
{
	func_22();
	switch (Global_112293.f_2361.f_539.f_4321)
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

void func_22()
{
	int iVar0;
	
	if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()))
	{
		if (func_26(Global_112293.f_2361.f_539.f_4321) != unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()))
		{
			iVar0 = func_25(unk_0x7D2B9E6A64637269());
			if (func_24(iVar0) && (!func_23(14) || Global_111244))
			{
				if (Global_112293.f_2361.f_539.f_4321 != iVar0 && func_24(Global_112293.f_2361.f_539.f_4321))
				{
					Global_112293.f_2361.f_539.f_4322 = Global_112293.f_2361.f_539.f_4321;
				}
				Global_112293.f_2361.f_539.f_4323 = iVar0;
				Global_112293.f_2361.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_112293.f_2361.f_539.f_4321 != 145)
			{
				Global_112293.f_2361.f_539.f_4323 = Global_112293.f_2361.f_539.f_4321;
			}
			return;
		}
	}
	Global_112293.f_2361.f_539.f_4321 = 145;
}

bool func_23(int iParam0)
{
	return Global_42009 == iParam0;
}

bool func_24(int iParam0)
{
	return iParam0 < 3;
}

int func_25(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x419E13582192CFEA(uParam0))
	{
		iVar1 = unk_0x6471F4759775FCA4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_26(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_26(int iParam0)
{
	if (func_24(iParam0))
	{
		return func_27(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_27(int iParam0)
{
	return Global_1878[iParam0 /*29*/];
}

int func_28(int iParam0)
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
		return unk_0x234B68AC2E35ED5A(Global_112293.f_20408.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_29(int iParam0, int iParam1)
{
	unk_0x191DDA30577F440A(&(Global_112293.f_24993.f_8[iParam0]), iParam1);
}

int func_30(int iParam0)
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

int func_31()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x471C98FD94C0A5FD(), 64);
	uVar16 = func_32(Var0);
	return uVar16;
}

int func_32(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x15173FB88ABC94F9(&cParam0))
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

int func_33()
{
	return 1;
}

int func_34()
{
	if (Global_21125 != 0 || unk_0x6C2F471E0CF8D4CF())
	{
		return 1;
	}
	return 0;
}

void func_35()
{
}

void func_36()
{
	if (!bLocal_243)
	{
		if (func_56())
		{
			iLocal_246 = 1;
			if (!unk_0xECEC7528A52B4EE8(iLocal_70))
			{
				unk_0xCA089CD1A17D76DF(iLocal_70);
				unk_0x5C679902079A7E80(&uLocal_75);
				unk_0x8ADA462BC5F42FD8(0, unk_0x7D2B9E6A64637269(), -1, 2052, 2);
				unk_0x1DC2BF231DE6A016(0, unk_0x7D2B9E6A64637269(), 1000f, -1, 0, 0);
				unk_0x1BBD0A5729AB1226(uLocal_75);
				unk_0x8A1AC8EBC73850C8(iLocal_70, uLocal_75);
				unk_0x504B26425DFF773C(iLocal_70, 1);
			}
			if (!unk_0xECEC7528A52B4EE8(iLocal_69))
			{
				unk_0xCA089CD1A17D76DF(iLocal_69);
				unk_0x5C679902079A7E80(&uLocal_75);
				unk_0x8ADA462BC5F42FD8(0, unk_0x7D2B9E6A64637269(), -1, 2052, 2);
				unk_0x1DC2BF231DE6A016(0, unk_0x7D2B9E6A64637269(), 1000f, -1, 0, 0);
				unk_0x1BBD0A5729AB1226(uLocal_75);
				unk_0x8A1AC8EBC73850C8(iLocal_69, uLocal_75);
				unk_0x504B26425DFF773C(iLocal_69, 1);
			}
			func_2();
		}
	}
	else if (!iLocal_246 && !bLocal_244)
	{
		if ((func_56() || unk_0x24A466C655E8588A(unk_0x7D2B9E6A64637269(), 6)) || !unk_0x591190E69BE43117(unk_0x7D2B9E6A64637269(), unk_0xD6E677FAD7521410(iLocal_70, 0), 12f, 12f, 5f, 0, 1, 0))
		{
			unk_0x78B2DF314748056B(5, uLocal_68, 1862763509);
			if (!unk_0xECEC7528A52B4EE8(iLocal_70))
			{
				unk_0xCA089CD1A17D76DF(iLocal_70);
				unk_0x9DA29013F33252A6(iLocal_70, unk_0x7D2B9E6A64637269(), 0, 16);
				if (unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_70, 15f, 15f, 15f, 0, 1, 0))
				{
					func_54();
					SYSTEM::WAIT(0);
					func_37(&uLocal_76, "lurinau", "lurin_fucked", 4, 0, 0, 0);
				}
			}
			if (!unk_0xECEC7528A52B4EE8(iLocal_69))
			{
				unk_0xCA089CD1A17D76DF(iLocal_69);
				unk_0x9DA29013F33252A6(iLocal_69, unk_0x7D2B9E6A64637269(), 0, 16);
			}
			iLocal_246 = 1;
		}
	}
}

bool func_37(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_53(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21132 = 0;
	Global_21134 = 0;
	Global_21139 = 0;
	Global_22116 = 0;
	Global_22118 = 0;
	Global_22122 = 0;
	Global_2621441 = 0;
	return func_38(sParam2, iParam3, 0);
}

int func_38(char* sParam0, int iParam1, bool bParam2)
{
	Global_21126 = 0;
	if (Global_21125 == 0 || Global_21127 == 2)
	{
		if (Global_21125 != 0)
		{
			if (iParam1 > Global_21127)
			{
				if (Global_21132 == 0)
				{
					unk_0x75B41F5020877259(0);
					Global_19798.f_1 = 3;
					Global_21125 = 0;
					Global_21126 = 1;
					Global_21178 = 0;
					Global_21121 = 0;
					Global_21122 = 0;
					Global_21136 = 0;
					Global_21135 = 0;
					Global_19797 = 0;
				}
				else
				{
					func_52();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x6C2F471E0CF8D4CF())
		{
			return 0;
		}
		if (func_51(8, -1))
		{
			return 0;
		}
		Global_21201 = { Global_21195 };
		func_50();
		Global_20414 = { Global_20579 };
		Global_21131 = Global_21132;
		Global_21138 = Global_21139;
		Global_2621442 = Global_2621441;
		Global_21140 = { Global_21156 };
		Global_21133 = Global_21134;
		Global_22115 = Global_22116;
		Global_22123 = { Global_22129 };
		Global_22117 = Global_22118;
		Global_22119 = Global_22120;
		Global_22121 = Global_22122;
		Global_20744.f_370 = Global_22114;
		Global_20744.f_368 = Global_22112;
		Global_20744.f_369 = Global_22113;
		Global_21121 = Global_21122;
		if (Global_21131)
		{
			unk_0xC664C0067EEAB8D1(&Global_7668, 20);
			unk_0xC664C0067EEAB8D1(&Global_7669, 17);
			unk_0xC664C0067EEAB8D1(&Global_7670, 0);
			if (bParam2)
			{
				func_48();
				if (Global_8473[Global_19798 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19798.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19764 == 1)
			{
				return 0;
			}
			if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
			{
				if (unk_0x97AEEA04505AFDC3(unk_0x7D2B9E6A64637269()))
				{
					return 0;
				}
				if (func_47())
				{
					return 0;
				}
				if (unk_0xB800560AF60FDD2E(unk_0x7D2B9E6A64637269()))
				{
					return 0;
				}
				if (unk_0x6B9E71121F5B8154(unk_0x7D2B9E6A64637269()))
				{
					return 0;
				}
				if (unk_0xA115FBF153CD1608(unk_0x7D2B9E6A64637269()))
				{
					return 0;
				}
				if (unk_0xF6AD8282F4B81331(unk_0x7D2B9E6A64637269(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_77248)
				{
					if (unk_0x0297E633EADA2182(unk_0x7D2B9E6A64637269()))
					{
						return 0;
					}
					if (unk_0xF4D8C7957C89929B(unk_0x1146A9AE09CE2B14()))
					{
						return 0;
					}
					if (unk_0x8A92595B8AA1D4E9(unk_0x7D2B9E6A64637269()))
					{
						return 0;
					}
					if (unk_0x3C4ADC6B88FA8A08(unk_0x1146A9AE09CE2B14(), 0))
					{
						return 0;
					}
				}
			}
			if (func_46())
			{
				return 0;
			}
			else
			{
				switch (Global_19798.f_1)
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
				if (unk_0x234B68AC2E35ED5A(Global_7668, 9))
				{
					return 0;
				}
			}
			func_45();
			Global_21135 = bParam2;
		}
		Global_21127 = iParam1;
		StringCopy(&Global_20744, sParam0, 24);
		Global_19991 = 0;
		func_44();
		func_39();
		return 1;
	}
	if (Global_21125 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21127 || iParam1 == Global_21127)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_52();
	}
	return 0;
}

void func_39()
{
	if (!func_40())
	{
		return;
	}
	if (Global_21131)
	{
		MemCopy(&(Global_1710127.f_1), {Global_20744}, 4);
		Global_1710127 = Global_6983;
		Global_1710127.f_6 = Global_21135;
	}
}

int func_40()
{
	if (!Global_262145.f_28376)
	{
		return 0;
	}
	if (!Global_77248)
	{
		return 0;
	}
	if (unk_0x1146A9AE09CE2B14() == func_43())
	{
		return 0;
	}
	if (func_41(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if (unk_0x234B68AC2E35ED5A(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0xE45310E861787FC2())
	{
		return 0;
	}
	return 1;
}

bool func_41(int iParam0)
{
	return func_42(iParam0, 20);
}

bool func_42(int iParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_11.f_4, iParam1);
}

int func_43()
{
	return -1;
}

void func_44()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19993[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x75B41F5020877259(0);
	Global_21125 = 1;
}

void func_45()
{
	Global_21178 = Global_21177;
	Global_21172 = Global_21173;
	Global_21219 = { Global_21207 };
	Global_21225 = { Global_21213 };
	Global_21180 = Global_21179;
	Global_21249 = { Global_21231 };
	Global_21255 = { Global_21237 };
	Global_21261 = { Global_21243 };
	Global_21267 = { Global_21273 };
	Global_6983 = Global_6984;
	Global_6985 = Global_6986;
	Global_21136 = Global_21137;
	Global_21138 = Global_21139;
	Global_21140 = { Global_21156 };
	Global_21129 = Global_21130;
	Global_22141 = 0;
	Global_21174 = 0;
	Global_21175 = 0;
	unk_0xC664C0067EEAB8D1(&Global_7669, 16);
}

int func_46()
{
	if (Global_19798.f_1 == 1 || Global_19798.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_47()
{
	int iVar0;
	int iVar1;
	
	if (Global_77248)
	{
		iVar0 = 0;
		unk_0xBDC364B886846D11(unk_0x7D2B9E6A64637269(), &iVar1, 1);
		if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xC1DFA5E3535B69F6() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
	{
		if (unk_0xC4D136140D260163(unk_0x7D2B9E6A64637269(), 78, 1))
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

void func_48()
{
	if (func_23(14))
	{
		if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
		{
			if (unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()) == Global_112293.f_28048[0 /*29*/])
			{
				Global_19798 = 0;
			}
			else if (unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()) == Global_112293.f_28048[1 /*29*/])
			{
				Global_19798 = 1;
			}
			else if (unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()) == Global_112293.f_28048[2 /*29*/])
			{
				Global_19798 = 2;
			}
			else
			{
				Global_19798 = 0;
			}
		}
	}
	else
	{
		Global_19798 = func_49();
		if (Global_19798 == 145)
		{
			Global_19798 = 3;
		}
		if (Global_77248)
		{
			Global_19798 = 3;
		}
		if (Global_19798 > 3)
		{
			Global_19798 = 3;
		}
	}
}

int func_49()
{
	func_22();
	return Global_112293.f_2361.f_539.f_4321;
}

void func_50()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20414[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20414[iVar0 /*10*/].f_1), "", 24);
		Global_20414[iVar0 /*10*/].f_7 = 0;
		Global_20414[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20414.f_161 = -99;
	Global_20414.f_162 = { 0f, 0f, 0f };
}

bool func_51(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1379108.f_203[iParam1];
			}
			break;
	}
	return unk_0x234B68AC2E35ED5A(Global_1379108.f_1048, iParam0);
}

void func_52()
{
	unk_0xBA3738C78262143F();
	Global_22136 = 0;
	if ((unk_0x8820F6FCD373F9F7() || Global_19798.f_1 == 9) || Global_19797 == 1)
	{
		unk_0x75B41F5020877259(0);
		Global_21125 = 6;
		Global_19798.f_1 = 3;
		return;
	}
	if (unk_0x6C2F471E0CF8D4CF())
	{
		unk_0x75B41F5020877259(1);
		Global_21125 = 6;
		return;
	}
}

void func_53(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_20579 = { *uParam0 };
	Global_6984 = iParam1;
	StringCopy(&Global_21195, sParam2, 24);
	Global_22114 = uParam5;
	if (iParam3 == 0)
	{
		Global_22112 = 1;
		Global_22110 = 0;
	}
	else
	{
		Global_22112 = 0;
		Global_22110 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22113 = 1;
		Global_22111 = 0;
	}
	else
	{
		Global_22113 = 0;
		Global_22111 = 1;
	}
}

void func_54()
{
	Global_19991 = 0;
	func_55();
}

void func_55()
{
	unk_0xBA3738C78262143F();
	Global_22136 = 0;
	if (unk_0x6C2F471E0CF8D4CF())
	{
		unk_0x75B41F5020877259(0);
		Global_21125 = 6;
	}
}

int func_56()
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 30f, 30f, 30f };
	Var3 = { -30f, -30f, -30f };
	if (!unk_0xECEC7528A52B4EE8(iLocal_69) && !unk_0xECEC7528A52B4EE8(iLocal_70))
	{
		if (unk_0x3E72EB0926A107F9(unk_0x885F3A431ECE75E3(iLocal_69, 31086, 0f, 0f, 0f), 30f, 1))
		{
			return 1;
		}
		if (unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_69, 30f, 30f, 30f, 0, 1, 0) && unk_0x24A466C655E8588A(unk_0x7D2B9E6A64637269(), 6))
		{
			if (((unk_0x4140085B99B17F97(unk_0x1146A9AE09CE2B14(), iLocal_69) || unk_0x4140085B99B17F97(unk_0x1146A9AE09CE2B14(), iLocal_70)) || unk_0x87BE50F80F3FCEAB(unk_0x1146A9AE09CE2B14(), iLocal_69)) || unk_0x87BE50F80F3FCEAB(unk_0x1146A9AE09CE2B14(), iLocal_70))
			{
				if (unk_0xCA70422943A4EC8D(iLocal_69, unk_0x7D2B9E6A64637269()) || unk_0xCA70422943A4EC8D(iLocal_70, unk_0x7D2B9E6A64637269()))
				{
					func_54();
					SYSTEM::WAIT(0);
					func_37(&uLocal_76, "lurinau", "lurin_gun", 4, 0, 0, 0);
					return 1;
				}
			}
		}
		Var0 = { Var0 + unk_0x885F3A431ECE75E3(iLocal_69, 31086, 0f, 0f, 0f) };
		Var3 = { Var3 + unk_0x885F3A431ECE75E3(iLocal_69, 31086, 0f, 0f, 0f) };
		if ((unk_0x93B9F446C9E48692(Var3, Var0, joaat("weapon_smokegrenade"), 1) || unk_0x93B9F446C9E48692(Var3, Var0, joaat("weapon_grenade"), 1)) || unk_0x93B9F446C9E48692(Var3, Var0, joaat("weapon_stickybomb"), 1))
		{
			return 1;
		}
		if (unk_0x80F28BAD1826C85F(unk_0x885F3A431ECE75E3(iLocal_69, 31086, 0f, 0f, 0f), 3f))
		{
			return 1;
		}
		if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
		{
			if (unk_0x16D329E799CE6084(unk_0x7D2B9E6A64637269(), joaat("bulldozer")))
			{
				if (unk_0x83B12E293561B796(unk_0x7D2B9E6A64637269(), iLocal_69) || unk_0x83B12E293561B796(unk_0x7D2B9E6A64637269(), iLocal_70))
				{
					return 1;
				}
			}
			if (((unk_0x16D329E799CE6084(unk_0x7D2B9E6A64637269(), joaat("rhino")) || unk_0x16D329E799CE6084(unk_0x7D2B9E6A64637269(), joaat("annihilator"))) || unk_0x16D329E799CE6084(unk_0x7D2B9E6A64637269(), joaat("buzzard"))) || unk_0x16D329E799CE6084(unk_0x7D2B9E6A64637269(), joaat("lazer")))
			{
				return 1;
			}
		}
		if (unk_0xD4C5E892E2E71D05(unk_0xD6E677FAD7521410(iLocal_69, 0) - Local_55, unk_0xD6E677FAD7521410(iLocal_69, 0) + Local_55) || unk_0xDDC360B77B1C1AE6(unk_0xD6E677FAD7521410(iLocal_69, 0) - Local_55, unk_0xD6E677FAD7521410(iLocal_69, 0) + Local_55))
		{
			return 1;
		}
	}
	if (unk_0x591190E69BE43117(unk_0x7D2B9E6A64637269(), 894.1762f, -1048.294f, 41.828f, 15f, 21.5625f, 10f, 0, 1, 0))
	{
		func_54();
		SYSTEM::WAIT(0);
		func_37(&uLocal_76, "lurinau", "lurin_other", 4, 0, 0, 0);
		return 1;
	}
	if (unk_0x591190E69BE43117(unk_0x7D2B9E6A64637269(), Local_49, 15f, 15f, 15f, 0, 1, 0))
	{
		if (unk_0x733CCC70A38EA8EC(unk_0x1146A9AE09CE2B14()))
		{
			func_54();
			return 1;
		}
	}
	else if (unk_0x733CCC70A38EA8EC(unk_0x1146A9AE09CE2B14()))
	{
		unk_0x13520157939D4329(unk_0x1146A9AE09CE2B14());
		func_54();
	}
	if (unk_0x591190E69BE43117(unk_0x7D2B9E6A64637269(), Local_49, 40f, 40f, 40f, 0, 1, 0))
	{
		if (unk_0xCDDAB3241735D813(unk_0x7D2B9E6A64637269()))
		{
			return 1;
		}
	}
	if (unk_0xA12BCF836724905A(unk_0x1146A9AE09CE2B14(), 0))
	{
		return 1;
	}
	if (unk_0x419E13582192CFEA(iLocal_69))
	{
		if (unk_0xA6E8FBD68548675F(iLocal_69, unk_0x7D2B9E6A64637269(), 1))
		{
			func_54();
			return 1;
		}
	}
	if (unk_0x419E13582192CFEA(iLocal_70))
	{
		if (unk_0xA6E8FBD68548675F(iLocal_70, unk_0x7D2B9E6A64637269(), 1))
		{
			func_54();
			return 1;
		}
	}
	return 0;
}

void func_57()
{
	if (unk_0x591190E69BE43117(unk_0x7D2B9E6A64637269(), -734.9749f, -728.4423f, 29.4985f, 2f, 6f, 2f, 0, 1, 0) || unk_0x591190E69BE43117(unk_0x7D2B9E6A64637269(), -663.9312f, -725.6195f, 28.2592f, 2f, 6f, 2f, 0, 1, 0))
	{
		if (!unk_0xECEC7528A52B4EE8(iLocal_70))
		{
			unk_0x5C679902079A7E80(&uLocal_75);
			unk_0x8ADA462BC5F42FD8(0, unk_0x7D2B9E6A64637269(), -1, 2052, 2);
			unk_0x1DC2BF231DE6A016(0, unk_0x7D2B9E6A64637269(), 1000f, -1, 0, 0);
			unk_0x1BBD0A5729AB1226(uLocal_75);
			unk_0x8A1AC8EBC73850C8(iLocal_70, uLocal_75);
			unk_0x504B26425DFF773C(iLocal_70, 1);
		}
		if (!unk_0xECEC7528A52B4EE8(iLocal_69))
		{
			unk_0x5C679902079A7E80(&uLocal_75);
			unk_0x8ADA462BC5F42FD8(0, unk_0x7D2B9E6A64637269(), -1, 2052, 2);
			unk_0x1DC2BF231DE6A016(0, unk_0x7D2B9E6A64637269(), 1000f, -1, 0, 0);
			unk_0x1BBD0A5729AB1226(uLocal_75);
			unk_0x8A1AC8EBC73850C8(iLocal_69, uLocal_75);
			unk_0x504B26425DFF773C(iLocal_69, 1);
		}
		iLocal_247 = 1;
	}
}

void func_58()
{
	if (!bLocal_244)
	{
		if (!unk_0xECEC7528A52B4EE8(iLocal_70))
		{
			if (unk_0x4E8DA737B686529A(iLocal_70, 242628503) == 7 && unk_0xD406352E21A7E1D0(iLocal_70, unk_0x7D2B9E6A64637269(), 2.8f, 2.8f, 2.8f, 0, 1, 0))
			{
				if (!iLocal_245)
				{
					iLocal_250 = 500;
					func_54();
					SYSTEM::WAIT(0);
					if (func_92(func_49()) >= iLocal_250)
					{
						func_59(func_49(), 1, iLocal_250);
						iLocal_251 = iLocal_250;
						func_37(&uLocal_76, "lurinau", "lurin_mugtha", 4, 0, 0, 0);
					}
					else if (func_92(func_49()) <= 0)
					{
						iLocal_251 = 0;
						func_37(&uLocal_76, "lurinau", "lurin_mugnom", 4, 0, 0, 0);
					}
					else
					{
						iLocal_251 = func_92(func_49());
						func_59(func_49(), 1, func_92(func_49()));
						func_37(&uLocal_76, "lurinau", "lurin_mugtha", 4, 0, 0, 0);
					}
					if (!unk_0xECEC7528A52B4EE8(iLocal_70))
					{
						unk_0xEC7D41CF790FC6FB(iLocal_70, iLocal_251);
					}
					iLocal_245 = 1;
				}
				if (!unk_0xECEC7528A52B4EE8(iLocal_70))
				{
					unk_0x5C679902079A7E80(&uLocal_75);
					unk_0x8ADA462BC5F42FD8(0, unk_0x7D2B9E6A64637269(), -1, 2052, 2);
					unk_0x1DC2BF231DE6A016(0, unk_0x7D2B9E6A64637269(), 1000f, -1, 0, 0);
					unk_0x1BBD0A5729AB1226(uLocal_75);
					unk_0x8A1AC8EBC73850C8(iLocal_70, uLocal_75);
					unk_0x504B26425DFF773C(iLocal_70, 1);
					if (!unk_0xECEC7528A52B4EE8(iLocal_69))
					{
						unk_0xCA089CD1A17D76DF(iLocal_69);
						unk_0x5C679902079A7E80(&uLocal_75);
						unk_0x8ADA462BC5F42FD8(0, unk_0x7D2B9E6A64637269(), -1, 2052, 2);
						unk_0x1DC2BF231DE6A016(0, unk_0x7D2B9E6A64637269(), 1000f, -1, 0, 0);
						unk_0x1BBD0A5729AB1226(uLocal_75);
						unk_0x8A1AC8EBC73850C8(iLocal_69, uLocal_75);
						unk_0x504B26425DFF773C(iLocal_69, 1);
					}
					bLocal_244 = true;
				}
			}
		}
	}
}

int func_59(int iParam0, int iParam1, int iParam2)
{
	if (func_91(iParam0) == 3)
	{
		return 0;
	}
	if (func_91(iParam0) == 4)
	{
		return 0;
	}
	return func_60(func_91(iParam0), 0, iParam1, iParam2, 0);
}

int func_60(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_90();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_89(99, 1);
					func_88(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_88(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_88(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_74(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_69(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_88(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_88(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_88(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_69(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_88(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_88(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_88(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_88(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_88(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_88(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_88(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_88(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_88(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0xC34DC2DC2423B647())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_88(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_88(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_88(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_88(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_88(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_88(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_69(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_88(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_88(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_88(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_88(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_88(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_88(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_68(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_89(95, iParam3);
					break;
				
				case 1:
					func_89(97, iParam3);
					break;
				
				case 2:
					func_89(96, iParam3);
					break;
			}
			func_89(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_63(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_63(iVar1);
	}
	iVar5 = (Global_59272[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_59272[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_59272[iVar2] = 2147483647;
				}
				else
				{
					Global_59272[iVar2] = (Global_59272[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_88(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_88(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_88(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_59272[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_59272[iVar2];
			Global_59272[iVar2] = (Global_59272[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_112293.f_20562.f_233[iVar2 /*69*/].f_2[Global_112293.f_20562.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_112293.f_20562.f_233[iVar2 /*69*/].f_2[Global_112293.f_20562.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_112293.f_20562.f_233[iVar2 /*69*/].f_2[Global_112293.f_20562.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_112293.f_20562.f_233[iVar2 /*69*/]++;
		Global_112293.f_20562.f_233[iVar2 /*69*/].f_1++;
		if (Global_112293.f_20562.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_112293.f_20562.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_62(iParam0);
	if (Global_42009 == 15)
	{
		func_61(0);
	}
	return 1;
}

void func_61(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_112293.f_20562.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_112293.f_20562.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_112293.f_20562.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_112293.f_20562.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_112293.f_20562.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_112293.f_20562.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_59280[iVar0 /*3*/][0] = Global_112293.f_20562[iVar0];
		Global_59280.f_31[iVar0 /*3*/][0] = Global_112293.f_20562.f_11[iVar0];
		Global_59280.f_62[iVar0 /*3*/][0] = Global_112293.f_20562.f_22[iVar0];
		Global_59280.f_93[iVar0 /*3*/][0] = Global_112293.f_20562.f_33[iVar0];
		Global_59280.f_124[iVar0 /*3*/][0] = Global_112293.f_20562.f_44[iVar0];
		Global_59280.f_155[iVar0 /*3*/][0] = Global_112293.f_20562.f_55[iVar0];
		Global_59280.f_186[iVar0 /*3*/][0] = Global_112293.f_20562.f_66[iVar0];
		Global_59280.f_217[iVar0 /*3*/][0] = Global_112293.f_20562.f_77[iVar0];
		Global_59280.f_248[iVar0 /*3*/][0] = Global_112293.f_20562.f_88[iVar0];
		if (!bParam0)
		{
			Global_59280[iVar0 /*3*/][1] = Global_112293.f_20562[iVar0];
			Global_59280.f_31[iVar0 /*3*/][1] = Global_112293.f_20562.f_11[iVar0];
			Global_59280.f_62[iVar0 /*3*/][1] = Global_112293.f_20562.f_22[iVar0];
			Global_59280.f_93[iVar0 /*3*/][1] = Global_112293.f_20562.f_33[iVar0];
			Global_59280.f_124[iVar0 /*3*/][1] = Global_112293.f_20562.f_44[iVar0];
			Global_59280.f_155[iVar0 /*3*/][1] = Global_112293.f_20562.f_55[iVar0];
			Global_59280.f_186[iVar0 /*3*/][1] = Global_112293.f_20562.f_66[iVar0];
			Global_59280.f_217[iVar0 /*3*/][1] = Global_112293.f_20562.f_77[iVar0];
			Global_59280.f_248[iVar0 /*3*/][1] = Global_112293.f_20562.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_62(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_59272[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xAC4FD27671081628(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0xAC4FD27671081628(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0xAC4FD27671081628(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_63(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_13(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_13(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_13(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_13(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_66(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_66(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_66(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_66(8274, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_66(8275, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_66(8276, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!unk_0x02BFF15CAA701972())
	{
		if (unk_0x234B68AC2E35ED5A(Global_112293.f_20562.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xC664C0067EEAB8D1(&(Global_112293.f_20562.f_471), iParam0);
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Global_112293.f_20562.f_471, iParam0) || unk_0x234B68AC2E35ED5A(Global_2097152[func_65() /*5557*/].f_675.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xC664C0067EEAB8D1(&(Global_112293.f_20562.f_471), iParam0);
		unk_0xC664C0067EEAB8D1(&(Global_2097152[func_65() /*5557*/].f_675.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xAD97A7EDCF347FBB("COUP_RED");
		unk_0x1896EC0B030A48A2(func_64(iParam0));
		unk_0x1664AA1696810AD6(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_64(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
		
		default:
	}
	return "";
}

int func_65()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_66(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2555716[iParam0 /*3*/][func_67(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xAC4FD27671081628(iVar0, iParam1, iParam3);
	}
}

int func_67(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_14();
		if (iVar1 > -1)
		{
			Global_2555428 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2555428 = 1;
		}
	}
	return iVar0;
}

void func_68(int iParam0)
{
	func_89(93, iParam0);
	func_89(29, iParam0);
	func_89(30, iParam0);
}

bool func_69(int iParam0)
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
	
	if (iParam0 == 8)
	{
		return func_71(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_71(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_71(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_71(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0x666C16A4ED8F3098();
		iVar1 = func_70(8271, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0x666C16A4ED8F3098();
		iVar3 = func_70(8272, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0x666C16A4ED8F3098();
		iVar5 = func_70(8273, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0x666C16A4ED8F3098();
		iVar7 = func_70(8274, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0x666C16A4ED8F3098();
		iVar9 = func_70(8275, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0x666C16A4ED8F3098();
		iVar11 = func_70(8276, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!unk_0x02BFF15CAA701972())
	{
		return unk_0x234B68AC2E35ED5A(Global_112293.f_20562.f_471, iParam0);
	}
	return unk_0x234B68AC2E35ED5A(Global_2097152[func_65() /*5557*/].f_675.f_10, iParam0);
}

int func_70(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 12074)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2555716[iParam0 /*3*/][func_67(iParam1)];
		if (unk_0xD885BEFA31A18D47(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_71(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_14();
	}
	iVar1 = func_73(iParam0, iParam1);
	uVar2 = func_72(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xE51D1C588E8D869E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_72(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x5002208C5710DBEB((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x5002208C5710DBEB((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x5002208C5710DBEB((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x5002208C5710DBEB((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x5002208C5710DBEB((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x5002208C5710DBEB((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x5002208C5710DBEB((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x5002208C5710DBEB((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x5002208C5710DBEB((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x5002208C5710DBEB((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x5002208C5710DBEB((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x5002208C5710DBEB((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x5002208C5710DBEB((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x5002208C5710DBEB((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x5002208C5710DBEB((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x5002208C5710DBEB((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x5002208C5710DBEB((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - unk_0x5002208C5710DBEB((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - unk_0x5002208C5710DBEB((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - unk_0x5002208C5710DBEB((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - unk_0x5002208C5710DBEB((iParam0 - 28355)) * 64);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = ((iParam0 - 30227) - unk_0x5002208C5710DBEB((iParam0 - 30227)) * 64);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = ((iParam0 - 30355) - unk_0x5002208C5710DBEB((iParam0 - 30355)) * 64);
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar0 = ((iParam0 - 30515) - unk_0x5002208C5710DBEB((iParam0 - 30515)) * 64);
	}
	else if (iParam0 >= 31707 && iParam0 < 32283)
	{
		iVar0 = ((iParam0 - 31707) - unk_0x5002208C5710DBEB((iParam0 - 31707)) * 64);
	}
	return iVar0;
}

int func_73(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_14();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xACDC64E5D157EC08((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xACDC64E5D157EC08((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xACDC64E5D157EC08((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xACDC64E5D157EC08((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x20CEBFA2EEC4CA42((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x20CEBFA2EEC4CA42((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 28098), 0, 1, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 28355), 0, 1, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 30227), 0, 1, iParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 30355), 0, 1, iParam1, "_SU20TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 30515), 0, 1, iParam1, "_HISLANDPSTAT_BOOL");
	}
	else if (iParam0 >= 31707 && iParam0 < 32283)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 31707), 0, 1, iParam1, "_TUNERPSTAT_BOOL");
	}
	return iVar0;
}

int func_74(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x4999364EFF3B7CFC(27))
	{
		return 0;
	}
	if (unk_0xD885BEFA31A18D47(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xD885BEFA31A18D47(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xD885BEFA31A18D47(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0xD885BEFA31A18D47(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xAC4FD27671081628(joaat("num_cash_spent"), iVar1, 1);
		func_12(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_75(27, 1);
	return 1;
}

int func_75(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_76(iParam0, iParam1);
}

int func_76(int iParam0, int iParam1)
{
	if (func_23(14) && !func_87(iParam0))
	{
		return 0;
	}
	if (unk_0x4999364EFF3B7CFC(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_31595 != 0 && !Global_77248)
	{
		return 0;
	}
	if (func_86(&Global_4272779))
	{
		if (func_84(&Global_4272779, iParam0))
		{
			return 0;
		}
		if (func_77(&Global_4272779, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x6296023D689C5E64(iParam0))
		{
			return 0;
		}
		if (unk_0x4999364EFF3B7CFC(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_77(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x4999364EFF3B7CFC(iParam1))
	{
		return 0;
	}
	if (func_23(14) && !func_87(iParam1))
	{
		return 0;
	}
	if (func_84(uParam0, iParam1))
	{
		return 0;
	}
	if (func_83(uParam0) < 0f)
	{
		func_82(uParam0, 0);
	}
	func_80(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_78(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_78(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x4999364EFF3B7CFC(iParam1))
	{
		return 0;
	}
	if (func_23(14) && !func_87(iParam1))
	{
		return 0;
	}
	if (func_84(uParam0, iParam1))
	{
		return 0;
	}
	if (func_83(uParam0) < 0f)
	{
		func_82(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_79(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_79(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_80(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_81(uParam0, iVar0);
		iVar0++;
	}
	func_82(uParam0, (Global_4272778 - 0.5f));
}

void func_81(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_82(var uParam0, float fParam1)
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

float func_83(var uParam0)
{
	return uParam0->f_80;
}

bool func_84(var uParam0, int iParam1)
{
	return func_85(uParam0, iParam1) != -1;
}

int func_85(var uParam0, int iParam1)
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

bool func_86(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_87(int iParam0)
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

void func_88(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xD885BEFA31A18D47(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xAC4FD27671081628(iParam0, iVar0, 1);
}

void func_89(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_57840[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x02BFF15CAA701972())
	{
		return;
	}
	if (Global_57840[iParam0 /*7*/])
	{
		unk_0xD885BEFA31A18D47(Global_57840[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xAC4FD27671081628(Global_57840[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_90()
{
	int iVar0;
	
	if (unk_0xB2EC8B4970766623())
	{
		unk_0xD885BEFA31A18D47(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_59272[0] == iVar0)
		{
			Global_59272[0] = iVar0;
		}
		unk_0xD885BEFA31A18D47(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_59272[1] == iVar0)
		{
			Global_59272[1] = iVar0;
		}
		unk_0xD885BEFA31A18D47(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_59272[2] == iVar0)
		{
			Global_59272[2] = iVar0;
		}
	}
}

int func_91(int iParam0)
{
	return Global_1878[iParam0 /*29*/].f_17;
}

int func_92(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0xD885BEFA31A18D47(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0xD885BEFA31A18D47(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0xD885BEFA31A18D47(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

void func_93()
{
	if (!unk_0xECEC7528A52B4EE8(iLocal_70))
	{
		if (unk_0x591190E69BE43117(unk_0x7D2B9E6A64637269(), 873.9561f, -1050.806f, 33.0066f, 4.75f, 1.9f, 1f, 0, 1, 0))
		{
			if (!unk_0x24A466C655E8588A(unk_0x7D2B9E6A64637269(), 6))
			{
				unk_0x8ADA462BC5F42FD8(iLocal_70, unk_0x7D2B9E6A64637269(), -1, 2048, 2);
				unk_0xB0008BCA992FE670(iLocal_70, 0);
				unk_0xD82D50E4AC0D46B9(iLocal_70, joaat("weapon_pistol"), 200, 1, 1);
				if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
				{
					func_54();
					SYSTEM::WAIT(0);
					func_37(&uLocal_76, "lurinau", "lurin_other", 4, 0, 0, 0);
					func_2();
				}
				else
				{
					unk_0x5C679902079A7E80(&uLocal_75);
					unk_0x8ADA462BC5F42FD8(0, unk_0x7D2B9E6A64637269(), -1, 2048, 2);
					unk_0x4261814A9A26E86F(0, "random@mugging5", "ig_1_guy_enter_stickup", 2f, -2f, -1, 0, 0, 0, 0, 0);
					unk_0xF77EA5B6EAF40F43(0, unk_0x7D2B9E6A64637269(), unk_0x7D2B9E6A64637269(), 2f, 0, 2.3f, 4f, 1, 1, -957453492);
					unk_0x2AA99ECF9FBD1E5D(0, unk_0x7D2B9E6A64637269(), 500, 0);
					unk_0x1BBD0A5729AB1226(uLocal_75);
				}
				unk_0x8A1AC8EBC73850C8(iLocal_70, uLocal_75);
				unk_0x8D5B447F21217223(&uLocal_75);
				unk_0xB592493CDC7124C3(uLocal_71, 0);
				uLocal_72 = func_101(iLocal_70, 1, 145);
				unk_0xFB8A6909539A30B1("RE35_OS");
				SYSTEM::WAIT(500);
				if (!unk_0xECEC7528A52B4EE8(iLocal_69))
				{
					unk_0x8ADA462BC5F42FD8(iLocal_69, unk_0x7D2B9E6A64637269(), -1, 2048, 2);
					unk_0xD82D50E4AC0D46B9(iLocal_69, joaat("weapon_pistol"), 200, 1, 1);
					unk_0x5C679902079A7E80(&uLocal_75);
					unk_0xC3219A6FBFC09F37(0, Local_64, unk_0x7D2B9E6A64637269(), 2f, 0, 0f, 4f, 1, 512, 0, -957453492, 20000);
					unk_0x2AA99ECF9FBD1E5D(0, unk_0x7D2B9E6A64637269(), 5000, 0);
					unk_0x1BBD0A5729AB1226(uLocal_75);
					unk_0x8A1AC8EBC73850C8(iLocal_69, uLocal_75);
					unk_0x8D5B447F21217223(&uLocal_75);
				}
				if (!unk_0xECEC7528A52B4EE8(iLocal_70))
				{
					unk_0x5C679902079A7E80(&uLocal_75);
					unk_0x8ADA462BC5F42FD8(0, iLocal_70, -1, 2048, 2);
					unk_0xC85977CD781454AC(0, 1000);
					unk_0x1BBD0A5729AB1226(uLocal_75);
					unk_0x8A1AC8EBC73850C8(unk_0x7D2B9E6A64637269(), uLocal_75);
					unk_0x8D5B447F21217223(&uLocal_75);
					func_94(1);
				}
				func_54();
				SYSTEM::WAIT(0);
				func_37(&uLocal_76, "lurinau", "lurin_mugger", 4, 0, 0, 0);
				SYSTEM::SETTIMERA(0);
				bLocal_243 = true;
			}
			else
			{
				unk_0xCA089CD1A17D76DF(iLocal_70);
				unk_0x5C679902079A7E80(&uLocal_75);
				unk_0x8ADA462BC5F42FD8(0, unk_0x7D2B9E6A64637269(), -1, 2052, 2);
				unk_0x1DC2BF231DE6A016(0, unk_0x7D2B9E6A64637269(), 1000f, -1, 0, 0);
				unk_0x1BBD0A5729AB1226(uLocal_75);
				unk_0x8A1AC8EBC73850C8(iLocal_70, uLocal_75);
				unk_0x504B26425DFF773C(iLocal_70, 1);
				if (!unk_0xECEC7528A52B4EE8(iLocal_69))
				{
					unk_0xCA089CD1A17D76DF(iLocal_69);
					unk_0x5C679902079A7E80(&uLocal_75);
					unk_0x8ADA462BC5F42FD8(0, unk_0x7D2B9E6A64637269(), -1, 2052, 2);
					unk_0x1DC2BF231DE6A016(0, unk_0x7D2B9E6A64637269(), 1000f, -1, 0, 0);
					unk_0x1BBD0A5729AB1226(uLocal_75);
					unk_0x8A1AC8EBC73850C8(iLocal_69, uLocal_75);
					unk_0x504B26425DFF773C(iLocal_69, 1);
				}
				func_54();
				SYSTEM::WAIT(0);
				func_37(&uLocal_76, "lurinau", "lurin_gun", 4, 0, 0, 0);
				func_2();
			}
		}
	}
}

void func_94(bool bParam0)
{
	if (bParam0)
	{
		func_100();
		if (Global_19798.f_1 == 10 || Global_19798.f_1 == 9)
		{
			unk_0x191DDA30577F440A(&Global_7669, 16);
		}
		Global_19798.f_1 = 1;
		if (func_99(0))
		{
			func_95(0);
		}
	}
	else if (Global_19798.f_1 == 1)
	{
		if (!Global_19798.f_1 == 0)
		{
			Global_19798.f_1 = 3;
		}
	}
}

void func_95(int iParam0)
{
	if (func_98())
	{
		return;
	}
	if (Global_19984)
	{
		if (func_97())
		{
			func_96(1, 1);
		}
		else
		{
			func_96(0, 0);
		}
	}
	if (Global_19798.f_1 == 10 || Global_19798.f_1 == 9)
	{
		unk_0x191DDA30577F440A(&Global_7669, 16);
	}
	if (unk_0x8820F6FCD373F9F7())
	{
		unk_0x75B41F5020877259(0);
	}
	Global_21125 = 5;
	if (iParam0 == 1)
	{
		unk_0x191DDA30577F440A(&Global_7668, 30);
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&Global_7668, 30);
	}
	if (!func_46())
	{
		Global_19798.f_1 = 3;
	}
}

void func_96(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_99(0))
		{
			Global_19984 = 1;
			if (bParam1)
			{
				unk_0x3AEC124A3999B3D1(&Global_19735);
			}
			Global_19726 = { Global_19744[Global_19743 /*3*/] };
			unk_0xA48FA5CE681A5230(Global_19726);
		}
	}
	else if (Global_19984 == 1)
	{
		Global_19984 = 0;
		Global_19726 = { Global_19751[Global_19743 /*3*/] };
		if (bParam1)
		{
			unk_0xA48FA5CE681A5230(Global_19735);
		}
		else
		{
			unk_0xA48FA5CE681A5230(Global_19726);
		}
	}
}

bool func_97()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 5);
}

bool func_98()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 19);
}

int func_99(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19798.f_1 > 3)
		{
			if (unk_0x234B68AC2E35ED5A(Global_7668, 14))
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
	if (unk_0x636F1F53CC61D2C9(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19798.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_100()
{
	if (Global_19798.f_1 == 9 || Global_19798.f_1 == 10)
	{
		Global_21178 = 0;
		Global_21174 = 1;
	}
}

var func_101(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_102(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x575B7C28D81C0B4D(uVar0)) && unk_0x49875FC4498CDA9A(&(Global_1878[iParam2 /*29*/].f_3)))
	{
		unk_0xDD944E3FD2028A48(uVar0, &(Global_1878[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_102(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x419E13582192CFEA(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xB20BB447C131B310(iParam0);
	if (unk_0x55F5BD4ABD80B211(iParam0))
	{
		unk_0xDD205B87CDFD0C1B(uVar0, func_103(unk_0x02BFF15CAA701972(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xB592493CDC7124C3(uVar0, bParam1);
		}
		else
		{
			unk_0xFA3E6ADC3E5D386E(uVar0, 2);
		}
	}
	else if (unk_0xA2CCAAC7F5CA3F49(iParam0))
	{
		unk_0xDD205B87CDFD0C1B(uVar0, func_103(unk_0x02BFF15CAA701972(), 0.7f, 0.7f));
		unk_0xB592493CDC7124C3(uVar0, bParam1);
	}
	else if (unk_0x50997FC21D62251F(iParam0))
	{
		unk_0xDD205B87CDFD0C1B(uVar0, func_103(unk_0x02BFF15CAA701972(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_103(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_104()
{
	if (!unk_0xE50EB54E0F21BED0(iLocal_69, 0))
	{
		if (unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_69, 15f, 15f, 15f, 0, 1, 0))
		{
			if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
			{
				if (!func_34())
				{
					if (iLocal_249 == 0)
					{
						func_37(&uLocal_76, "lurinau", "lurin_girlta", 4, 0, 0, 0);
						unk_0x8ADA462BC5F42FD8(iLocal_69, unk_0x7D2B9E6A64637269(), -1, 2052, 2);
						iLocal_249++;
						SYSTEM::SETTIMERB(0);
					}
					if ((SYSTEM::TIMERB() > 3500 && iLocal_249 == 1) && !func_34())
					{
						func_37(&uLocal_76, "lurinau", "lurin_girltb", 4, 0, 0, 0);
						unk_0x8ADA462BC5F42FD8(iLocal_69, unk_0x7D2B9E6A64637269(), -1, 2052, 2);
						iLocal_249++;
						SYSTEM::SETTIMERB(0);
					}
					if ((SYSTEM::TIMERB() > 7000 && iLocal_249 == 2) && !func_34())
					{
						SYSTEM::SETTIMERB(0);
						unk_0x8ADA462BC5F42FD8(iLocal_69, unk_0x7D2B9E6A64637269(), -1, 2052, 2);
						func_37(&uLocal_76, "lurinau", "lurin_girlch", 4, 0, 0, 0);
					}
				}
			}
			else
			{
				unk_0x2FF622571073AA69(unk_0x7D2B9E6A64637269(), joaat("weapon_unarmed"), 1);
			}
		}
	}
}

void func_105()
{
	if (!unk_0xECEC7528A52B4EE8(iLocal_69))
	{
		if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
		{
			if (unk_0x24A466C655E8588A(unk_0x7D2B9E6A64637269(), 6) && unk_0xCA70422943A4EC8D(iLocal_69, unk_0x7D2B9E6A64637269()))
			{
				unk_0xCA089CD1A17D76DF(iLocal_69);
				unk_0x5C679902079A7E80(&uLocal_75);
				unk_0x8ADA462BC5F42FD8(0, unk_0x7D2B9E6A64637269(), -1, 2052, 2);
				unk_0x1DC2BF231DE6A016(0, unk_0x7D2B9E6A64637269(), 1000f, -1, 0, 0);
				unk_0x1BBD0A5729AB1226(uLocal_75);
				unk_0x8A1AC8EBC73850C8(iLocal_69, uLocal_75);
				unk_0x504B26425DFF773C(iLocal_69, 1);
				if (!unk_0xECEC7528A52B4EE8(iLocal_70))
				{
					unk_0xCA089CD1A17D76DF(iLocal_70);
					unk_0x5C679902079A7E80(&uLocal_75);
					unk_0x8ADA462BC5F42FD8(0, unk_0x7D2B9E6A64637269(), -1, 2052, 2);
					unk_0x1DC2BF231DE6A016(0, unk_0x7D2B9E6A64637269(), 1000f, -1, 0, 0);
					unk_0x1BBD0A5729AB1226(uLocal_75);
					unk_0x8A1AC8EBC73850C8(iLocal_70, uLocal_75);
					unk_0x504B26425DFF773C(iLocal_70, 1);
				}
				func_54();
				SYSTEM::WAIT(0);
				if (unk_0x24A466C655E8588A(unk_0x7D2B9E6A64637269(), 4))
				{
					func_37(&uLocal_76, "lurinau", "lurin_gun", 4, 0, 0, 0);
				}
				else if (unk_0x24A466C655E8588A(unk_0x7D2B9E6A64637269(), 2))
				{
					func_37(&uLocal_76, "lurinau", "lurin_other", 4, 0, 0, 0);
				}
				func_2();
			}
		}
	}
}

void func_106()
{
	if (!func_135())
	{
		if (!unk_0xE50EB54E0F21BED0(iLocal_69, 0))
		{
			if (unk_0x591190E69BE43117(unk_0x7D2B9E6A64637269(), Local_49, 65f, 60f, 60f, 0, 1, 0) || Global_112288)
			{
				if (unk_0x575B7C28D81C0B4D(uLocal_73))
				{
					unk_0x1AD5BCFEC31BB8D9(&uLocal_73);
				}
				uLocal_71 = func_101(iLocal_69, 0, 145);
				unk_0xB5E587F8B911573B(uLocal_71, 0);
				unk_0x5E84945E26CAEF1F(0f);
				func_109(1);
			}
		}
	}
	if (!iLocal_241)
	{
		if (!unk_0xECEC7528A52B4EE8(iLocal_69))
		{
			if (unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_69, 25f, 25f, 25f, 0, 1, 0) && func_135())
			{
				if (func_37(&uLocal_76, "lurinau", "lurin_help2", 4, 0, 0, 0))
				{
					unk_0x5C679902079A7E80(&uLocal_75);
					unk_0x8ADA462BC5F42FD8(0, unk_0x7D2B9E6A64637269(), -1, 2064, 2);
					unk_0x4261814A9A26E86F(0, "random@gang_intimidation@", "001445_01_gangintimidation_1_female_idle_b", 4f, -4f, -1, 49, 0, 0, 0, 0);
					unk_0xB0C1A43193C25F7A(0, unk_0x7D2B9E6A64637269(), -1);
					unk_0x1BBD0A5729AB1226(uLocal_75);
					unk_0x8A1AC8EBC73850C8(iLocal_69, uLocal_75);
					unk_0x8D5B447F21217223(&uLocal_75);
					iLocal_241 = 1;
				}
			}
		}
	}
	if (!unk_0xE50EB54E0F21BED0(iLocal_69, 0))
	{
		if (unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_69, 15f, 15f, 15f, 0, 1, 0) && unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
		{
			unk_0x2FF622571073AA69(unk_0x7D2B9E6A64637269(), joaat("weapon_unarmed"), 1);
		}
		if (unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iLocal_69, 8f, 8f, 8f, 0, 1, 0))
		{
			if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
			{
				iLocal_242 = 1;
				if (unk_0x575B7C28D81C0B4D(uLocal_71))
				{
					unk_0xB5E587F8B911573B(uLocal_71, 1);
				}
				unk_0xCA089CD1A17D76DF(iLocal_69);
				func_37(&uLocal_76, "lurinau", "lurin_help", 4, 0, 0, 0);
				if (!unk_0xE50EB54E0F21BED0(iLocal_69, 0))
				{
					SYSTEM::SETTIMERB(0);
					unk_0xB154967CB3B9C1CF(iLocal_69);
					unk_0x5C679902079A7E80(&uLocal_75);
					unk_0x8ADA462BC5F42FD8(0, unk_0x7D2B9E6A64637269(), -1, 2064, 2);
					unk_0x373635EFD76DFAB3(0, 1000);
					unk_0x45B1B4E55BF15523(0, Local_61, 2f, -1, 0.25f, 512, 80.1325f);
					unk_0x4261814A9A26E86F(0, "random@gang_intimidation@", "001445_01_gangintimidation_1_female_idle_b", 4f, -4f, -1, 1, 0, 0, 0, 0);
					unk_0x1BBD0A5729AB1226(uLocal_75);
					unk_0x8A1AC8EBC73850C8(iLocal_69, uLocal_75);
					unk_0x8D5B447F21217223(&uLocal_75);
					Local_55 = { 40f, 40f, 30f };
				}
			}
			else if (!iLocal_248)
			{
				func_107();
				SYSTEM::WAIT(0);
				if (!func_34())
				{
					if (!unk_0xECEC7528A52B4EE8(iLocal_69))
					{
						func_37(&uLocal_76, "lurinau", "lurin_girlca", 4, 0, 0, 0);
						unk_0x5C679902079A7E80(&uLocal_75);
						unk_0x8ADA462BC5F42FD8(0, unk_0x7D2B9E6A64637269(), -1, 3076, 2);
						unk_0xB0C1A43193C25F7A(0, unk_0x7D2B9E6A64637269(), -1);
						unk_0x1BBD0A5729AB1226(uLocal_75);
						unk_0x8A1AC8EBC73850C8(iLocal_69, uLocal_75);
						unk_0x8D5B447F21217223(&uLocal_75);
						iLocal_248 = 1;
					}
				}
			}
		}
	}
}

void func_107()
{
	Global_19991 = 0;
	func_108();
}

void func_108()
{
	if (unk_0x6C2F471E0CF8D4CF())
	{
		unk_0xBA3738C78262143F();
		Global_22136 = 0;
		unk_0x75B41F5020877259(1);
		Global_21125 = 6;
		return;
	}
}

int func_109(int iParam0)
{
	if (func_113())
	{
		Global_112283 = 1;
		Global_112280 = unk_0xDFB7BFA6482FEE1E();
		if (func_16(Global_112282))
		{
			func_110(0);
		}
		unk_0xB4D080997F77F539(1, "RE_TITLE");
		if (iParam0 && func_16(Global_112282))
		{
			unk_0xC5CEFC62F3637652();
		}
		return 1;
	}
	return 0;
}

void func_110(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_112293.f_24993.f_2 < 3)
			{
				if (!unk_0x9B8D025C6C2200C5())
				{
					func_111(func_112(iParam0), -1);
					Global_112293.f_24993.f_2++;
					unk_0x191DDA30577F440A(&Global_112289, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x234B68AC2E35ED5A(Global_112289, 1))
			{
				if (!unk_0x9B8D025C6C2200C5())
				{
					func_111(func_112(iParam0), -1);
					Global_112293.f_24993.f_3++;
					unk_0x191DDA30577F440A(&Global_112289, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x234B68AC2E35ED5A(Global_112289, 2))
			{
				if (!unk_0x9B8D025C6C2200C5())
				{
					func_111(func_112(iParam0), -1);
					Global_112293.f_24993.f_4++;
					unk_0x191DDA30577F440A(&Global_112289, 2);
				}
			}
			break;
	}
}

void func_111(var uParam0, int iParam1)
{
	unk_0xDDEC6D09154BA73A(uParam0);
	unk_0x4A5DC2FF6E0B609F(0, 0, 1, iParam1);
}

char* func_112(int iParam0)
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

int func_113()
{
	switch (func_114(&Global_31405, 0, 5, 0, unk_0x62D18D65FE22FF39()))
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

int func_114(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_96848.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_118(0))
		{
			return 0;
		}
		Global_41973++;
		*uParam0 = Global_41973;
		unk_0x03903A362E41A74F(unk_0x638BDC79E655C1C2(), 0);
		Global_22531.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x4A8177C3950CBBB7(8);
		}
		Global_42009 = iParam2;
		Global_41971 = *uParam0;
		Global_41972 = iParam4;
		Global_41970 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_41970 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_41970)
			{
				if (Global_41976[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_41971 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_116(iParam2))
		{
			return 0;
		}
		if (Global_41970 == 8)
		{
			return 0;
		}
		Global_41973++;
		*uParam0 = Global_41973;
		Global_41976[Global_41970 /*4*/] = Global_41973;
		Global_41976[Global_41970 /*4*/].f_1 = iParam1;
		Global_41976[Global_41970 /*4*/].f_2 = iParam2;
		Global_41976[Global_41970 /*4*/].f_3 = 0;
		Global_41970++;
		if (iParam4 != 0)
		{
			func_115(uParam0, iParam4);
		}
	}
	return 2;
}

void func_115(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_41970 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_41970)
	{
		if (Global_41976[iVar0 /*4*/] == *uParam0)
		{
			Global_41976[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_116(int iParam0)
{
	return func_117(iParam0, Global_42009);
}

int func_117(int iParam0, int iParam1)
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

int func_118(int iParam0)
{
	if (Global_42009 == 15)
	{
		return 0;
	}
	if (func_116(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_119()
{
	func_121();
	unk_0x16E516CA9C88FF48(joaat("a_m_m_tramp_01"));
	unk_0x16E516CA9C88FF48(joaat("a_f_m_skidrow_01"));
	unk_0x16E516CA9C88FF48(joaat("prop_ld_wallet_01_s"));
	unk_0x068BDE31F7D112BB("random@mugging5");
	unk_0x068BDE31F7D112BB("random@gang_intimidation@");
	unk_0x8A54885A635DC8D1("RE35_OS");
	while ((((!unk_0xA9C0BBFB9CBB66F1(joaat("a_f_m_skidrow_01")) || !unk_0xA9C0BBFB9CBB66F1(joaat("a_m_m_tramp_01"))) || !unk_0xA9C0BBFB9CBB66F1(joaat("prop_ld_wallet_01_s"))) || !unk_0x0EC2B29D4172D225("random@mugging5")) || !unk_0x0EC2B29D4172D225("random@gang_intimidation@"))
	{
		SYSTEM::WAIT(0);
	}
	unk_0x0823FA7465392E20(Local_49 - Vector(10f, 30f, 30f), Local_49 + Vector(10f, 30f, 30f), 0, 1, 1, 1);
	unk_0xF479CA7199C54C8F("mugger", &uLocal_68);
	iLocal_69 = unk_0x0FDCFECB2EF2BC1C(19, joaat("a_f_m_skidrow_01"), Local_58, 79.765f, 1, 1);
	unk_0xBE91B077ADADE97F(iLocal_69, 1);
	unk_0x7B28A83A0D3DD0F9(iLocal_69, 185, 1);
	unk_0x82D2BB48A39F1E88(iLocal_69, 128, 1);
	unk_0x05D0B763CEEA9ABD(iLocal_69, 1);
	unk_0x2271ED1E65FB75EE(iLocal_69, uLocal_68);
	unk_0x78B2DF314748056B(5, uLocal_68, 1862763509);
	unk_0x5C679902079A7E80(&uLocal_75);
	unk_0x8ADA462BC5F42FD8(0, unk_0x7D2B9E6A64637269(), -1, 3076, 2);
	unk_0x4261814A9A26E86F(0, "random@mugging5", "ig_1_girl_agitated_loop", 2f, -2f, -1, 1, 0, 0, 0, 0);
	unk_0xB0C1A43193C25F7A(0, unk_0x7D2B9E6A64637269(), -1);
	unk_0x1BBD0A5729AB1226(uLocal_75);
	unk_0x8A1AC8EBC73850C8(iLocal_69, uLocal_75);
	unk_0x8D5B447F21217223(&uLocal_75);
	iLocal_70 = unk_0x0FDCFECB2EF2BC1C(7, joaat("a_m_m_tramp_01"), Local_52, fLocal_67, 1, 1);
	unk_0x90517F1BF9113FB8(iLocal_70, "A_M_M_TRAMP_01_BLACK_MINI_01");
	unk_0xBE91B077ADADE97F(iLocal_70, 1);
	unk_0x82D2BB48A39F1E88(iLocal_70, 128, 1);
	unk_0xEA44C65D5434D223(iLocal_70, 1, 0);
	unk_0x05D0B763CEEA9ABD(iLocal_70, 1);
	unk_0x2271ED1E65FB75EE(iLocal_70, uLocal_68);
	unk_0x8ADA462BC5F42FD8(iLocal_70, unk_0x7D2B9E6A64637269(), -1, 2052, 2);
	func_120(&uLocal_76, 0, unk_0x7D2B9E6A64637269(), "FRANKLIN", 0, 1);
	func_120(&uLocal_76, 4, iLocal_69, "HOBOFEMALE", 0, 1);
	func_120(&uLocal_76, 5, iLocal_70, "HOBOMALE", 0, 1);
	iLocal_47 = 1;
}

void func_120(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_77248)
	{
		if (!unk_0xECEC7528A52B4EE8(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x9CF2691831C7455F(iParam2, 0);
			}
			else
			{
				unk_0x9CF2691831C7455F(iParam2, 1);
			}
		}
		if (!unk_0xECEC7528A52B4EE8(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x354924FCEF0851C8(iParam2, 0);
			}
			else
			{
				unk_0x354924FCEF0851C8(iParam2, 1);
			}
		}
	}
}

void func_121()
{
	Local_52 = { 879.8144f, -1047.433f, 32.0067f };
	fLocal_67 = 237.0934f;
	Local_58 = { 862.9633f, -1049.857f, 28.5362f };
	Local_55 = { 15f, 15f, 15f };
	Local_61 = { 881.1367f, -1050.706f, 32.0067f };
	Local_64 = { 876.7977f, -1052.52f, 32.0067f };
}

int func_122()
{
	if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()) && !unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		if (SYSTEM::VDIST2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(unk_0x9F2928DF31D785C7(unk_0x7D2B9E6A64637269())) > 1369f && !func_133())
		{
			return 0;
		}
	}
	if (func_129())
	{
		return 1;
	}
	if (func_123(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_123(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	
	iVar33 = -1;
	fVar34 = fParam0;
	if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
	{
		if (func_24(func_49()))
		{
			iVar36 = func_21();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0x234B68AC2E35ED5A(Global_112293.f_18572[iVar32 /*6*/], 2) && !unk_0x234B68AC2E35ED5A(Global_112293.f_18572[iVar32 /*6*/], 3))
				{
					func_124(iVar32, &Var0);
					fVar35 = unk_0x0BABEFEA577FCFA4(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0), Var0.f_6, 1);
					if (fVar35 < fVar34)
					{
						bVar38 = true;
						if (bParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								bVar38 = false;
							}
						}
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_124(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_125(uParam1, "Abigail1", func_127(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_126(iParam0), 1, 0);
			break;
		
		case 1:
			func_125(uParam1, "Abigail2", func_127(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_126(iParam0), 1, 0);
			break;
		
		case 2:
			func_125(uParam1, "Barry1", func_127(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_126(iParam0), 1, 0);
			break;
		
		case 3:
			func_125(uParam1, "Barry2", func_127(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_126(iParam0), 1, 1);
			break;
		
		case 4:
			func_125(uParam1, "Barry3", func_127(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_126(iParam0), 0, 0);
			break;
		
		case 5:
			func_125(uParam1, "Barry3A", func_127(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_126(iParam0), 0, 1);
			break;
		
		case 6:
			func_125(uParam1, "Barry3C", func_127(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_126(iParam0), 0, 1);
			break;
		
		case 7:
			func_125(uParam1, "Barry4", func_127(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_126(iParam0), 0, 0);
			break;
		
		case 8:
			func_125(uParam1, "Dreyfuss1", func_127(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_126(iParam0), 0, 0);
			break;
		
		case 9:
			func_125(uParam1, "Epsilon1", func_127(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_126(iParam0), 0, 0);
			break;
		
		case 10:
			func_125(uParam1, "Epsilon2", func_127(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_126(iParam0), 1, 0);
			break;
		
		case 11:
			func_125(uParam1, "Epsilon3", func_127(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_126(iParam0), 0, 0);
			break;
		
		case 12:
			func_125(uParam1, "Epsilon4", func_127(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_126(iParam0), 0, 0);
			break;
		
		case 13:
			func_125(uParam1, "Epsilon5", func_127(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_126(iParam0), 1, 0);
			break;
		
		case 14:
			func_125(uParam1, "Epsilon6", func_127(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_126(iParam0), 0, 1);
			break;
		
		case 15:
			func_125(uParam1, "Epsilon7", func_127(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_126(iParam0), 0, 0);
			break;
		
		case 16:
			func_125(uParam1, "Epsilon8", func_127(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_126(iParam0), 1, 0);
			break;
		
		case 17:
			func_125(uParam1, "Extreme1", func_127(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_126(iParam0), 0, 1);
			break;
		
		case 18:
			func_125(uParam1, "Extreme2", func_127(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_126(iParam0), 0, 1);
			break;
		
		case 19:
			func_125(uParam1, "Extreme3", func_127(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_126(iParam0), 0, 1);
			break;
		
		case 20:
			func_125(uParam1, "Extreme4", func_127(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_126(iParam0), 0, 0);
			break;
		
		case 21:
			func_125(uParam1, "Fanatic1", func_127(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_126(iParam0), 1, 0);
			break;
		
		case 22:
			func_125(uParam1, "Fanatic2", func_127(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_126(iParam0), 1, 0);
			break;
		
		case 23:
			func_125(uParam1, "Fanatic3", func_127(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_126(iParam0), 0, 1);
			break;
		
		case 24:
			func_125(uParam1, "Hao1", func_127(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_126(iParam0), 0, 1);
			break;
		
		case 25:
			func_125(uParam1, "Hunting1", func_127(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_126(iParam0), 0, 1);
			break;
		
		case 26:
			func_125(uParam1, "Hunting2", func_127(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_126(iParam0), 0, 1);
			break;
		
		case 27:
			func_125(uParam1, "Josh1", func_127(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_126(iParam0), 1, 0);
			break;
		
		case 28:
			func_125(uParam1, "Josh2", func_127(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_126(iParam0), 1, 1);
			break;
		
		case 29:
			func_125(uParam1, "Josh3", func_127(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_126(iParam0), 1, 1);
			break;
		
		case 30:
			func_125(uParam1, "Josh4", func_127(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_126(iParam0), 1, 0);
			break;
		
		case 31:
			func_125(uParam1, "Maude1", func_127(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_126(iParam0), 0, 1);
			break;
		
		case 32:
			func_125(uParam1, "Minute1", func_127(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_126(iParam0), 0, 1);
			break;
		
		case 33:
			func_125(uParam1, "Minute2", func_127(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_126(iParam0), 0, 1);
			break;
		
		case 34:
			func_125(uParam1, "Minute3", func_127(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_126(iParam0), 0, 1);
			break;
		
		case 35:
			func_125(uParam1, "MrsPhilips1", func_127(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_126(iParam0), 0, 0);
			break;
		
		case 36:
			func_125(uParam1, "MrsPhilips2", func_127(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_126(iParam0), 0, 0);
			break;
		
		case 37:
			func_125(uParam1, "Nigel1", func_127(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_126(iParam0), 1, 0);
			break;
		
		case 38:
			func_125(uParam1, "Nigel1A", func_127(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_126(iParam0), 1, 1);
			break;
		
		case 39:
			func_125(uParam1, "Nigel1B", func_127(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_126(iParam0), 1, 1);
			break;
		
		case 40:
			func_125(uParam1, "Nigel1C", func_127(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_126(iParam0), 1, 1);
			break;
		
		case 41:
			func_125(uParam1, "Nigel1D", func_127(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_126(iParam0), 1, 1);
			break;
		
		case 42:
			func_125(uParam1, "Nigel2", func_127(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_126(iParam0), 1, 1);
			break;
		
		case 43:
			func_125(uParam1, "Nigel3", func_127(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_126(iParam0), 1, 1);
			break;
		
		case 44:
			func_125(uParam1, "Omega1", func_127(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_126(iParam0), 0, 0);
			break;
		
		case 45:
			func_125(uParam1, "Omega2", func_127(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_126(iParam0), 0, 0);
			break;
		
		case 46:
			func_125(uParam1, "Paparazzo1", func_127(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_126(iParam0), 0, 1);
			break;
		
		case 47:
			func_125(uParam1, "Paparazzo2", func_127(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_126(iParam0), 0, 1);
			break;
		
		case 48:
			func_125(uParam1, "Paparazzo3", func_127(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_126(iParam0), 0, 0);
			break;
		
		case 49:
			func_125(uParam1, "Paparazzo3A", func_127(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_126(iParam0), 0, 1);
			break;
		
		case 50:
			func_125(uParam1, "Paparazzo3B", func_127(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_126(iParam0), 0, 1);
			break;
		
		case 51:
			func_125(uParam1, "Paparazzo4", func_127(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_126(iParam0), 0, 0);
			break;
		
		case 52:
			func_125(uParam1, "Rampage1", func_127(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_126(iParam0), 0, 0);
			break;
		
		case 54:
			func_125(uParam1, "Rampage3", func_127(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_126(iParam0), 1, 0);
			break;
		
		case 55:
			func_125(uParam1, "Rampage4", func_127(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_126(iParam0), 1, 0);
			break;
		
		case 56:
			func_125(uParam1, "Rampage5", func_127(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_126(iParam0), 0, 0);
			break;
		
		case 53:
			func_125(uParam1, "Rampage2", func_127(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_126(iParam0), 1, 0);
			break;
		
		case 57:
			func_125(uParam1, "TheLastOne", func_127(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_126(iParam0), 0, 1);
			break;
		
		case 58:
			func_125(uParam1, "Tonya1", func_127(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_126(iParam0), 0, 1);
			break;
		
		case 59:
			func_125(uParam1, "Tonya2", func_127(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_126(iParam0), 0, 1);
			break;
		
		case 60:
			func_125(uParam1, "Tonya3", func_127(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_126(iParam0), 0, 1);
			break;
		
		case 61:
			func_125(uParam1, "Tonya4", func_127(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_126(iParam0), 0, 1);
			break;
		
		case 62:
			func_125(uParam1, "Tonya5", func_127(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_126(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_125(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_126(int iParam0)
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

struct<2> func_127(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_128(iParam0) };
	if (unk_0xAB6A270F84A8781E(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_128(int iParam0)
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

int func_129()
{
	if (func_132() && !func_133())
	{
		return 1;
	}
	if (func_131() && func_130())
	{
		return 1;
	}
	return 0;
}

bool func_130()
{
	return Global_112011 > 0;
}

int func_131()
{
	if (Global_96292 != -1)
	{
		return 1;
	}
	return 0;
}

int func_132()
{
	if (Global_96292 != -1)
	{
		return unk_0x234B68AC2E35ED5A(Global_90158[Global_96292 /*34*/].f_15, 20);
	}
	return 0;
}

int func_133()
{
	if (unk_0x3640D836D145B814())
	{
		if (unk_0xC1D06696CC3E719B() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_134()
{
	if (!func_116(5))
	{
		return 1;
	}
	if (func_129())
	{
		return 1;
	}
	if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		if (SYSTEM::VMAG2(unk_0x9F2928DF31D785C7(unk_0x7D2B9E6A64637269())) > 1369f && !func_133())
		{
			return 0;
		}
	}
	if (func_123(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_135()
{
	if ((Global_112282 == func_31() && unk_0x5E9AD12CB585F23D()) && Global_112283)
	{
		return 1;
	}
	return 0;
}

void func_136(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_31();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_138(iParam0);
	unk_0xA87835FA95542DD6(0);
	unk_0xD72603E43F4527D1(1);
	Global_112279 = 0;
	func_137();
}

void func_137()
{
	if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
		{
			unk_0x16C6E55F8C91ED24(unk_0x6471F4759775FCA4(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0)), 1);
		}
		unk_0x7B28A83A0D3DD0F9(unk_0x7D2B9E6A64637269(), 32, 0);
	}
}

void func_138(int iParam0)
{
	Global_112282 = iParam0;
}

int func_139(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_150875)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_31();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_180())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()) && !unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
		{
			Var1 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) };
			if (SYSTEM::VMAG2(unk_0x9F2928DF31D785C7(unk_0x7D2B9E6A64637269())) > 1369f && !func_133())
			{
				return 0;
			}
		}
		if (!Global_112293.f_9083)
		{
			return 0;
		}
		if (func_6(0))
		{
			return 0;
		}
		if (func_129())
		{
			return 0;
		}
		if (func_179())
		{
			return 0;
		}
		if (Global_112282 != -1)
		{
			return 0;
		}
		if (func_24(func_49()))
		{
			if (func_123(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()) && !bParam6)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_178(iParam3))
		{
			return 0;
		}
		if (func_24(func_49()))
		{
			if (func_177(func_49()) == 4 || func_177(func_49()) == 5)
			{
				return 0;
			}
		}
		if (func_24(func_49()))
		{
			if (!func_176(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_175(Global_112293.f_24993.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0xDFB7BFA6482FEE1E() - Global_112284) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_174())
		{
			return 0;
		}
		if (unk_0x16371AB7527A7757())
		{
			return 0;
		}
		if (unk_0x5E9AD12CB585F23D())
		{
			return 0;
		}
		if (!func_165(4))
		{
			return 0;
		}
		if (!func_116(5))
		{
			return 0;
		}
		if (func_164(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0xE75EE67F14EAAE37(unk_0xB71084333B418824(unk_0x7D2B9E6A64637269())))
		{
			if ((unk_0xB71084333B418824(unk_0x7D2B9E6A64637269()) == unk_0xDE7E9AF51E2E18EB(377.153f, -717.567f, 10.0536f) || unk_0xB71084333B418824(unk_0x7D2B9E6A64637269()) == unk_0xDE7E9AF51E2E18EB(320.9934f, 265.2515f, 82.1221f)) || unk_0xB71084333B418824(unk_0x7D2B9E6A64637269()) == unk_0xDE7E9AF51E2E18EB(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_164(0, 0))
		{
			return 0;
		}
		if (Global_31492)
		{
			return 0;
		}
		if (func_178(30) && !func_164(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_24(func_49()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_112293.f_2361.f_539.f_2300[iVar4 /*3*/] };
				iVar8 = Global_112293.f_2361.f_539.f_2296[iVar4];
				if (func_163(iVar8))
				{
					if (func_141(iVar4))
					{
						if (!func_140(Var5, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0), Var5) < (210f * 210f))
							{
								if (func_49() != iVar4)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return 1;
}

bool func_140(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.x == Param3.x && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.x == Param3.x && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_141(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_112293.f_2361.f_539.f_2296[iParam0];
	return func_142(iVar0);
}

int func_142(int iParam0)
{
	return func_143(iParam0, 1);
}

int func_143(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_163(iParam0))
	{
		return 0;
	}
	func_144(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_144(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_145(func_156(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_145(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_155(iParam0, iParam1))
	{
		iVar0 = func_154(iParam1);
		iVar1 = func_152(iParam0);
		iVar2 = (func_152(iParam0) - func_152(iParam1));
		iVar3 = (func_154(iParam0) - func_154(iParam1));
		iVar4 = (func_151(iParam0) - func_151(iParam1));
		iVar5 = (func_150(iParam0) - func_150(iParam1));
		iVar6 = (func_149(iParam0) - func_149(iParam1));
		iVar7 = (func_148(iParam0) - func_148(iParam1));
	}
	else
	{
		iVar0 = func_154(iParam0);
		iVar1 = func_152(iParam1);
		iVar2 = (func_152(iParam1) - func_152(iParam0));
		iVar3 = (func_154(iParam1) - func_154(iParam0));
		iVar4 = (func_151(iParam1) - func_151(iParam0));
		iVar5 = (func_150(iParam1) - func_150(iParam0));
		iVar6 = (func_149(iParam1) - func_149(iParam0));
		iVar7 = (func_148(iParam1) - func_148(iParam0));
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
		iVar4 = (iVar4 + func_147(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_146(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_146(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_147(int iParam0, int iParam1)
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

int func_148(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_149(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_150(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_151(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_152(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_153(unk_0x234B68AC2E35ED5A(iParam0, 31), -1, 1)) + 2011;
}

int func_153(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_154(int iParam0)
{
	return iParam0 & 15;
}

int func_155(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_163(iParam1) || !func_163(iParam0))
	{
		return 1;
	}
	iVar0 = func_152(iParam0);
	iVar1 = func_152(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_154(iParam0);
	iVar1 = func_154(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_151(iParam0);
	iVar1 = func_151(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_150(iParam0);
	iVar1 = func_150(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_149(iParam0);
	iVar1 = func_149(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_148(iParam0);
	iVar1 = func_148(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_156()
{
	var uVar0;
	
	func_162(&uVar0, unk_0x1947D86A2BB06F8D());
	func_161(&uVar0, unk_0x942C8DFFBBCB3EB4());
	func_160(&uVar0, unk_0xCA86FAB7FADC8353());
	func_159(&uVar0, unk_0x9E6858A319A1F6F2());
	func_158(&uVar0, unk_0xA91C851005050418());
	func_157(&uVar0, unk_0x77D50D8E8FF785AC());
	return uVar0;
}

void func_157(var uParam0, int iParam1)
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
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_158(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_159(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_154(*uParam0);
	iVar1 = func_152(*uParam0);
	if (iParam1 < 1 || iParam1 > func_147(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_160(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_161(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_162(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_163(int iParam0)
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
	iVar0 = func_148(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_149(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_150(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_152(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_154(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_151(iParam0);
	if (iVar5 < 1 || iVar5 > func_147(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_164(int iParam0, int iParam1)
{
	if (unk_0x234B68AC2E35ED5A(Global_112293.f_24993.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_165(int iParam0)
{
	int iVar0;
	
	if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
	{
		if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()))
		{
			if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
			{
				iVar0 = func_49();
				if (!func_24(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x0711D6B5B61B3EBC(unk_0x1146A9AE09CE2B14()) || unk_0x397C98A5552886EB(unk_0x7D2B9E6A64637269())) || unk_0x195733224245A760(unk_0x7D2B9E6A64637269())) || unk_0x6B9E71121F5B8154(unk_0x7D2B9E6A64637269())) || unk_0x480609C7D10E7F3E(unk_0x7D2B9E6A64637269())) || unk_0x4766CFEFD1C88C1A(unk_0x1146A9AE09CE2B14(), 1)) || unk_0xF4D8C7957C89929B(unk_0x1146A9AE09CE2B14())) || unk_0x3D28F4F0775C6C2A(unk_0x7D2B9E6A64637269(), 0)) || func_173()) || Global_111340) || Global_31348) || func_172()) || func_51(8, -1)) || func_171()) || func_170()) || func_169()) || func_168()) || Global_112293.f_7686.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x4766CFEFD1C88C1A(unk_0x1146A9AE09CE2B14(), 1) || func_173()) || Global_31348) || func_172()) || func_51(8, -1)) || func_169()) || func_171()) || func_170()) || func_168()) || Global_112293.f_7686.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x0711D6B5B61B3EBC(unk_0x1146A9AE09CE2B14()) || unk_0x397C98A5552886EB(unk_0x7D2B9E6A64637269())) || unk_0x195733224245A760(unk_0x7D2B9E6A64637269())) || unk_0x6B9E71121F5B8154(unk_0x7D2B9E6A64637269())) || unk_0x480609C7D10E7F3E(unk_0x7D2B9E6A64637269())) || unk_0x4766CFEFD1C88C1A(unk_0x1146A9AE09CE2B14(), 1)) || unk_0xF4D8C7957C89929B(unk_0x1146A9AE09CE2B14())) || unk_0x3D28F4F0775C6C2A(unk_0x7D2B9E6A64637269(), 0)) || func_173()) || Global_111340) || Global_31348) || func_172()) || func_51(8, -1)) || func_169()) || func_171()) || func_170()) || func_168()) || Global_112293.f_7686.f_919[iVar0] == 5) || Global_42556 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x6B9E71121F5B8154(unk_0x7D2B9E6A64637269()) || unk_0x480609C7D10E7F3E(unk_0x7D2B9E6A64637269())) || unk_0x4766CFEFD1C88C1A(unk_0x1146A9AE09CE2B14(), 1)) || unk_0x3D28F4F0775C6C2A(unk_0x7D2B9E6A64637269(), 0)) || func_173()) || Global_111340) || Global_31348) || func_172()) || func_51(8, -1)) || func_171()) || func_170()) || func_168()) || Global_112293.f_7686.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_173() || unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) > 0) || func_51(8, -1)) || func_168()) || func_167()) || Global_112293.f_7686.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_51(8, -1) || func_171()) || func_170()) || func_167()) || func_166())
						{
							return 0;
						}
						if ((unk_0xF471787D45ADC2C1() && unk_0xC50751593572DDAE() != 3) && unk_0xE544790FBAA57D4F() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()))
						{
							if ((((((((((((((unk_0x3D28F4F0775C6C2A(unk_0x7D2B9E6A64637269(), 0) || unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) > 0) || unk_0x397C98A5552886EB(unk_0x7D2B9E6A64637269())) || unk_0x6B9E71121F5B8154(unk_0x7D2B9E6A64637269())) || unk_0x480609C7D10E7F3E(unk_0x7D2B9E6A64637269())) || unk_0x4766CFEFD1C88C1A(unk_0x1146A9AE09CE2B14(), 1)) || unk_0xF4D8C7957C89929B(unk_0x1146A9AE09CE2B14())) || func_173()) || Global_31348) || func_172()) || func_51(8, -1)) || func_170()) || func_169()) || func_168()) || Global_112293.f_7686.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x3D28F4F0775C6C2A(unk_0x7D2B9E6A64637269(), 0) || !unk_0xDF02DA324F934755(unk_0x1146A9AE09CE2B14())) || !unk_0x0711D6B5B61B3EBC(unk_0x1146A9AE09CE2B14())) || !unk_0xE0A6F16F546C8274()) || unk_0x397C98A5552886EB(unk_0x7D2B9E6A64637269())) || unk_0x6B9E71121F5B8154(unk_0x7D2B9E6A64637269())) || unk_0x480609C7D10E7F3E(unk_0x7D2B9E6A64637269())) || unk_0x4766CFEFD1C88C1A(unk_0x1146A9AE09CE2B14(), 1)) || func_173()) || func_170()) || Global_111340) || Global_31348) || func_172()) || Global_43182) || func_51(8, -1)) || func_169()) || func_167()) || func_168()) || Global_112293.f_7686.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x3D28F4F0775C6C2A(unk_0x7D2B9E6A64637269(), 0) || !unk_0xDF02DA324F934755(unk_0x1146A9AE09CE2B14())) || !unk_0x0711D6B5B61B3EBC(unk_0x1146A9AE09CE2B14())) || !unk_0xE0A6F16F546C8274()) || unk_0xA12BCF836724905A(unk_0x1146A9AE09CE2B14(), 0)) || unk_0x397C98A5552886EB(unk_0x7D2B9E6A64637269())) || unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1)) || unk_0x6B9E71121F5B8154(unk_0x7D2B9E6A64637269())) || unk_0x480609C7D10E7F3E(unk_0x7D2B9E6A64637269())) || unk_0x32FBDF1C2B7942F9(unk_0x7D2B9E6A64637269())) || unk_0x4766CFEFD1C88C1A(unk_0x1146A9AE09CE2B14(), 1)) || unk_0xF4D8C7957C89929B(unk_0x1146A9AE09CE2B14())) || func_173()) || Global_111340) || Global_31348) || func_172()) || func_51(8, -1)) || func_169()) || func_167()) || func_171()) || func_170()) || func_168())
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

var func_166()
{
	return Global_99409.f_1;
}

int func_167()
{
	if (Global_96292 != -1)
	{
		return unk_0x234B68AC2E35ED5A(Global_90158[Global_96292 /*34*/].f_15, 13);
	}
	return 0;
}

int func_168()
{
	if (unk_0x636F1F53CC61D2C9(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_169()
{
	if (Global_77508)
	{
		return 1;
	}
	else if (Global_62092 && !Global_62098)
	{
		return 1;
	}
	return 0;
}

bool func_170()
{
	return Global_99422.f_364 > 0;
}

bool func_171()
{
	return Global_99422.f_363 > 0;
}

var func_172()
{
	return Global_1312902;
}

int func_173()
{
	if (!unk_0x02BFF15CAA701972())
	{
		return Global_96848.f_44 == 1;
	}
	return 0;
}

int func_174()
{
	func_48();
	if (Global_8473[Global_19798 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_175(int iParam0)
{
	return func_155(func_156(), iParam0);
}

int func_176(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_49();
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

int func_177(int iParam0)
{
	if (!func_24(iParam0))
	{
		return 7;
	}
	return Global_112293.f_7686.f_919[iParam0];
}

bool func_178(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_180())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0x234B68AC2E35ED5A(Global_112293.f_24993, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0x234B68AC2E35ED5A(Global_112293.f_24993.f_1, iVar0);
	}
	return bVar1;
}

int func_179()
{
	var uVar0;
	
	if (Global_31496)
	{
		if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
		{
			uVar0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
			if (unk_0xBFCE58B2B3249999(uVar0, 0))
			{
				if (!unk_0xECEC7528A52B4EE8(unk_0x27FC1B0077581B37(uVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_180()
{
	var uVar0;
	
	if (unk_0xB2EC8B4970766623())
	{
		if (unk_0x1D0F0A8090E1551E())
		{
			if (unk_0x722D5CFE95568B02())
			{
				unk_0xD885BEFA31A18D47(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x191DDA30577F440A(&uVar0, 2);
				unk_0x191DDA30577F440A(&uVar0, 4);
				unk_0x191DDA30577F440A(&uVar0, 6);
				unk_0x191DDA30577F440A(&Global_25, 2);
				unk_0x191DDA30577F440A(&Global_25, 4);
				unk_0x191DDA30577F440A(&Global_25, 6);
				unk_0xAC4FD27671081628(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0xF7701A907195ED86())
				{
					iVar0 = unk_0xC82CD1DB42480082(866);
					unk_0x191DDA30577F440A(&iVar0, 0);
					unk_0x0E32F508F8A14DE9(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_151130 == 2)
	{
		return 1;
	}
	else if (Global_151130 == 3)
	{
		return 0;
	}
	if (unk_0xF7701A907195ED86())
	{
		if (unk_0x234B68AC2E35ED5A(unk_0xC82CD1DB42480082(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_181()
{
	if (iLocal_48)
	{
		unk_0x7D394B326546E281();
		func_94(0);
		unk_0x08918C6897982748("RE35_OS");
		unk_0x5E84945E26CAEF1F(1f);
		unk_0x04F4D55F2C0C756D(&uLocal_74);
		if (!unk_0xECEC7528A52B4EE8(iLocal_69))
		{
			unk_0x5C679902079A7E80(&uLocal_75);
			unk_0x8ADA462BC5F42FD8(0, unk_0x7D2B9E6A64637269(), -1, 2052, 2);
			unk_0x1DC2BF231DE6A016(0, unk_0x7D2B9E6A64637269(), 1000f, -1, 0, 0);
			unk_0x1BBD0A5729AB1226(uLocal_75);
			unk_0x8A1AC8EBC73850C8(iLocal_69, uLocal_75);
			unk_0x504B26425DFF773C(iLocal_69, 1);
		}
		if (!unk_0xECEC7528A52B4EE8(iLocal_70))
		{
			unk_0x5C679902079A7E80(&uLocal_75);
			unk_0x8ADA462BC5F42FD8(0, unk_0x7D2B9E6A64637269(), -1, 2052, 2);
			unk_0x1DC2BF231DE6A016(0, unk_0x7D2B9E6A64637269(), 1000f, -1, 0, 0);
			unk_0x1BBD0A5729AB1226(uLocal_75);
			unk_0x8A1AC8EBC73850C8(iLocal_70, uLocal_75);
			unk_0x504B26425DFF773C(iLocal_70, 1);
		}
	}
	Global_112288 = 0;
	func_182(-1);
	unk_0x4BFE89D21F9885DC();
}

void func_182(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_31();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_135())
	{
		func_186(iParam0);
		unk_0xB4D080997F77F539(0, 0);
		Global_112284 = unk_0xDFB7BFA6482FEE1E();
		func_185(30000);
		StringCopy(&cVar0, func_184(Global_112282, 1), 64);
		if (func_30(Global_112282) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_112281, 64);
		}
		unk_0x551AA2E1D1F02037(&cVar0, Global_112279, (unk_0xDFB7BFA6482FEE1E() - Global_112280), 0);
	}
	else if (unk_0x234B68AC2E35ED5A(Global_112289, 0) && Global_112293.f_24993.f_2 < 3)
	{
		unk_0xC664C0067EEAB8D1(&Global_112289, 0);
	}
	func_183(&Global_31405);
	Global_112283 = 0;
	func_138(-1);
}

void func_183(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_41971)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_41970 = 0;
	Global_41972 = 0;
	Global_42009 = 15;
	Global_62095 = 0;
	Global_62096 = 0;
}

char* func_184(int iParam0, bool bParam1)
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

void func_185(int iParam0)
{
	Global_42560 = (unk_0xDFB7BFA6482FEE1E() + iParam0);
}

void func_186(int iParam0)
{
	func_187(iParam0, 0, func_192(iParam0));
}

void func_187(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_156();
	func_190(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_189(iParam0, &uVar0);
	Var1 = { func_188(&uVar0) };
}

struct<16> func_188(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_150(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_149(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_148(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_151(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_154(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_152(*uParam0), 64);
	return Var0;
}

void func_189(int iParam0, var uParam1)
{
	Global_112293.f_24993.f_43[iParam0] = *uParam1;
}

void func_190(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_152(*uParam0);
	iVar1 = func_154(*uParam0);
	iVar2 = func_151(*uParam0);
	iVar3 = func_150(*uParam0);
	iVar4 = func_149(*uParam0);
	iVar5 = func_148(*uParam0);
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
	iVar6 = func_147(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_147(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_191(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_191(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_162(uParam0, iParam1);
	func_161(uParam0, iParam2);
	func_160(uParam0, iParam3);
	func_158(uParam0, iParam5);
	func_159(uParam0, iParam4);
	func_157(uParam0, iParam6);
}

int func_192(int iParam0)
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

