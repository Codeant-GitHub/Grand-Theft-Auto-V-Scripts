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
	float fLocal_44 = 0f;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	vector3 vLocal_48 = { 0f, 0f, 0f };
	vector3 vLocal_49 = { 0f, 0f, 0f };
	vector3 vLocal_50 = { 0f, 0f, 0f };
	float fLocal_51 = 0f;
	vector3 vLocal_52 = { 0f, 0f, 0f };
	vector3 vLocal_53 = { 0f, 0f, 0f };
	vector3 vLocal_54 = { 0f, 0f, 0f };
	int iLocal_55 = 0;
	bool bLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	struct<6> Local_61 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	vector3 vLocal_68 = { 0f, 0f, 0f };
	float fLocal_69 = 0f;
	int iLocal_70 = 0;
	vector3 vLocal_71 = { 0f, 0f, 0f };
	float fLocal_72 = 0f;
	int iLocal_73 = 0;
	var uLocal_74 = 15;
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
	var uLocal_107 = 1;
	struct<18> Local_108[4];
	struct<18> Local_109[8];
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	bool bLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	char* sLocal_132 = NULL;
	char[] cLocal_133[8] = 0;
	char* sLocal_134 = NULL;
	char* sLocal_135 = NULL;
	int iLocal_136[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_137 = 0;
	int iLocal_138[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<10> Local_139[16];
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	int iLocal_144[3] = { 0, 0, 0 };
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	float fLocal_150 = 0f;
	float fLocal_151 = 0f;
	int iLocal_152[2] = { 0, 0 };
	float fLocal_153 = 0f;
	vector3 vLocal_154 = { 0f, 0f, 0f };
	vector3 vLocal_155 = { 0f, 0f, 0f };
	vector3 vLocal_156 = { 0f, 0f, 0f };
	vector3 vLocal_157 = { 0f, 0f, 0f };
	vector3 vLocal_158 = { 0f, 0f, 0f };
	vector3 vLocal_159 = { 0f, 0f, 0f };
	vector3 vLocal_160 = { 0f, 0f, 0f };
	vector3 vLocal_161[4] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_162[4] = { 0f, 0f, 0f, 0f };
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	char* sLocal_175[3] = { NULL, NULL, NULL };
	int iLocal_176 = 0;
	char* sLocal_177 = NULL;
	vector3 vLocal_178 = { 0f, 0f, 0f };
	vector3 vLocal_179 = { 0f, 0f, 0f };
	float fLocal_180 = 0f;
	vector3 vLocal_181 = { 0f, 0f, 0f };
	vector3 vLocal_182 = { 0f, 0f, 0f };
	float fLocal_183 = 0f;
	vector3 vLocal_184 = { 0f, 0f, 0f };
	vector3 vLocal_185 = { 0f, 0f, 0f };
	float fLocal_186 = 0f;
	vector3 vLocal_187 = { 0f, 0f, 0f };
	vector3 vLocal_188 = { 0f, 0f, 0f };
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	float fLocal_191 = 0f;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	bool bLocal_194 = 0;
	float fLocal_195 = 0f;
	int iLocal_196 = 0;
	int iLocal_197 = 0;
	bool bLocal_198 = 0;
	bool bLocal_199 = 0;
	int iLocal_200 = 0;
	int iLocal_201 = 0;
	int iLocal_202 = 0;
	int iLocal_203 = 0;
	struct<2> Local_204 = { 0, 5 } ;
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
	var uLocal_220 = 5;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
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
	fLocal_44 = -1f;
	vLocal_49 = { 226.6825f, 681.0297f, 188.4987f };
	vLocal_50 = { 231.8002f, 672.5261f, 188.9459f };
	fLocal_51 = 32.0905f;
	StringCopy(&Local_61, "", 24);
	vLocal_68 = { 259.4603f, 125.8718f, 100.9754f };
	fLocal_69 = 283.0367f;
	vLocal_71 = { 245.1998f, 76.8231f, 90.7069f };
	fLocal_72 = -18.4743f;
	cLocal_133 = "REPAPAU";
	sLocal_134 = "random@escape_paparazzi@standing@";
	sLocal_135 = "random@escape_paparazzi@incar@";
	iLocal_146 = 4000;
	fLocal_150 = 0f;
	fLocal_151 = 0f;
	fLocal_153 = 0f;
	vLocal_154 = { 272.6356f, 155.5618f, 103.3306f };
	vLocal_155 = { 247.5795f, 88.7094f, 92.9859f };
	vLocal_156 = { 259.0348f, 114.0369f, 98.9984f };
	vLocal_157 = { 255.4971f, 116.8744f, 99.8162f };
	vLocal_158 = { 266.8217f, 139.7698f, 103.2269f };
	vLocal_159 = { 270.0174f, 139.1181f, 103.2195f };
	vLocal_160 = { 265.4954f, 144.6143f, 103.3326f };
	sLocal_177 = "left_";
	vLocal_178 = { 261.9341f, 126.2429f, 95.15405f };
	vLocal_179 = { 270.6759f, 152.4763f, 109.2356f };
	fLocal_180 = 16f;
	vLocal_181 = { 261.9341f, 126.2429f, 107.6541f };
	vLocal_182 = { 248.354f, 87.01792f, 92.389f };
	fLocal_183 = 16f;
	vLocal_184 = { 256.6779f, 126.573f, 99.54784f };
	vLocal_185 = { 266.4471f, 123.412f, 105.6728f };
	fLocal_186 = 5.75f;
	vLocal_187 = { 260.242f, 127.423f, 101.65f };
	vLocal_188 = { 0f, 0f, -20f };
	vLocal_48 = { ScriptParam_204.f_1[0 /*3*/] };
	if (unk_0x9EC5BDC006623C42(11))
	{
		func_274();
	}
	func_273(&uLocal_74, 3);
	if (!Global_3)
	{
		if (func_231(vLocal_48, -1, 0, 0, 0))
		{
			func_228(-1);
		}
		else
		{
			unk_0x5894DC159447E10A();
		}
	}
	iLocal_126 = unk_0x0335D8135051EA56(Vector(93.3633f, 82.5239f, 276.3459f) + Vector(10f, 10f, 10f), Vector(93.3633f, 82.5239f, 276.3459f) - Vector(10f, 10f, 10f), 0, 1, 1, 1);
	iLocal_127 = unk_0x0335D8135051EA56(Vector(188.5935f, 675.8706f, 227.8598f) + Vector(4f, 4f, 4f), Vector(188.5935f, 675.8706f, 227.8598f) - Vector(4f, 4f, 4f), 0, 1, 1, 1);
	iLocal_128 = unk_0x0335D8135051EA56(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), 0, 1, 1, 1);
	if (Global_3)
	{
		unk_0xCE04CE961AF41AB9(246.1673f, 92.1704f, 93.8361f, 6f, 1, 0, 0, false);
	}
	unk_0x5856B9BF2B4E98C4(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), false, 1);
	unk_0xCC323859A8DA2B88("WORLD_VEHICLE_DRIVE_SOLO", false);
	while (true)
	{
		wait(0);
		func_225(&uLocal_74);
		if (!func_224())
		{
			if (func_223())
			{
				func_274();
			}
		}
		unk_0x65F534DDBF48606F("RE_EP", 0);
		iVar0 = 0;
		while (iVar0 < Local_108)
		{
			if (unk_0x765F6FEEFF39224F(Local_108[iVar0 /*18*/]) && !unk_0xD62C4419A41F106A(Local_108[iVar0 /*18*/], 0))
			{
				Local_108[iVar0 /*18*/].f_8 = { unk_0xFBB1F99A825CAB09(Local_108[iVar0 /*18*/], true) };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < Local_109)
		{
			if (unk_0x765F6FEEFF39224F(Local_109[iVar0 /*18*/]) && !unk_0xD62C4419A41F106A(Local_109[iVar0 /*18*/], 0))
			{
				Local_109[iVar0 /*18*/].f_6 = { unk_0xFBB1F99A825CAB09(Local_109[iVar0 /*18*/], true) };
			}
			iVar0++;
		}
		if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()) && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
		{
			vLocal_52 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true) };
		}
		if (!unk_0xBC2FC12AD0FBF72E(iLocal_67))
		{
			vLocal_53 = { unk_0xFBB1F99A825CAB09(iLocal_67, true) };
		}
		if (unk_0x765F6FEEFF39224F(iLocal_70) && !unk_0xD62C4419A41F106A(iLocal_70, 0))
		{
			vLocal_54 = { unk_0xFBB1F99A825CAB09(iLocal_70, true) };
		}
		if (!func_224())
		{
			if (unk_0xA80721FDC3BDCCDB())
			{
				switch (iLocal_130)
				{
					case 0:
						if (func_214())
						{
							func_207();
							iLocal_130++;
						}
						else if (func_195())
						{
							func_274();
						}
						break;
					
					case 1:
						if ((func_194() || unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) > 0) || !unk_0x91D5C8283D19AF49(iLocal_70, 0))
						{
							if (!Global_3 && !bLocal_56)
							{
								func_193();
								func_274();
							}
						}
						else if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), 281.0074f, 192.4805f, 58.08817f, 228.8291f, 50.88667f, 111.6104f, 82.75f, 0, true, 0))
						{
							func_184(1);
							iLocal_121 = func_183(iLocal_67, 0, 145);
							func_182("MAG_2_ESCAPE_PAP_GET_CAR");
							func_181(0);
						}
						break;
				}
			}
			else
			{
				func_274();
			}
		}
		else
		{
			unk_0x4AE93B307FDB2941(unk_0x95B959F18401C09A());
			switch (iLocal_45)
			{
				case 0:
					func_178();
					break;
				
				case 1:
					func_175();
					break;
				
				case 2:
					func_153();
					break;
				
				case 3:
					func_141();
					break;
				
				case 4:
					func_105();
					break;
				
				case 10:
					func_274();
					break;
				
				case 5:
					func_104();
					break;
				
				case 6:
					func_101(sLocal_132);
					break;
				
				case 7:
					func_100();
					break;
				
				case 9:
					break;
				
				case 8:
					if (func_99())
					{
						if (unk_0x765F6FEEFF39224F(iLocal_67))
						{
							unk_0x4B8B69DAE5BAC592(&iLocal_67);
						}
						func_75();
					}
					break;
				
				case 11:
					func_71();
					break;
			}
			if (!unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), vLocal_53, 210f, 210f, 210f, false, true, 0))
			{
				func_193();
				func_274();
			}
			if (((iLocal_45 != 5 && iLocal_45 != 6) && iLocal_45 != 10) && iLocal_45 != 7)
			{
				if (!Global_3 && !bLocal_56)
				{
					if (func_68(iLocal_67, 1, 1) || func_67())
					{
						if (iLocal_45 > 0)
						{
							func_181(5);
						}
						else
						{
							func_193();
							func_181(10);
						}
					}
					if (((iLocal_45 != 5 && iLocal_45 != 10) && iLocal_45 != 0) && iLocal_45 != 7)
					{
						if (func_63())
						{
							func_181(6);
						}
					}
				}
			}
		}
		func_25();
		if (iLocal_45 <= 0)
		{
			iVar1 = func_24();
			if (iVar1 != -1 && (iLocal_60 || func_19() != 0))
			{
				if ((!unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), 243.6443f, 123.7193f, 97.59898f, 262.4353f, 116.8746f, 107.4762f, 32.25f, 0, true, 0) && (unk_0xE3903F59E2F22150() - iLocal_145) > 5000) && !unk_0xBC2FC12AD0FBF72E(Local_109[iVar1 /*18*/]))
				{
					if (vdist2(unk_0xFBB1F99A825CAB09(Local_109[iVar1 /*18*/], true), vLocal_52) < (30.5f * 30.5f) && vdist2(vLocal_53, vLocal_52) > (22.5f * 22.5f))
					{
						if (func_224())
						{
							if (Local_139[4 /*10*/] != Local_109[iVar1 /*18*/])
							{
								func_18(&Local_139, 4);
								func_17(&Local_139, 4, Local_109[iVar1 /*18*/], "PAPARAZZO", 0, 1);
							}
							else if (!iLocal_193)
							{
								if (func_5(&Local_139, cLocal_133, "REPAP_CALL1", 1, 0, 0, 0))
								{
									iLocal_145 = unk_0xE3903F59E2F22150();
									iLocal_193 = 1;
								}
							}
							else if (func_5(&Local_139, cLocal_133, "REPAP_CHAT", 1, 0, 0, 0))
							{
								iLocal_145 = unk_0xE3903F59E2F22150();
							}
						}
						else
						{
							StringCopy(&vVar2, "REPAP_AZAA_0", 24);
							StringIntConCat(&vVar2, unk_0x9EC3B269A34A2BEE(1, 13), 24);
							func_3(Local_109[iVar1 /*18*/], &vVar2, "PAPARAZZO", 24);
							iLocal_145 = unk_0xE3903F59E2F22150();
						}
					}
				}
			}
		}
		if (iLocal_45 <= 1)
		{
			func_2();
		}
		func_1();
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	
	if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
	{
		iVar0 = unk_0x35364EF44BEB123B(unk_0x33CD235DF1E6A94E());
		if (unk_0x91D5C8283D19AF49(iVar0, 0))
		{
			iVar1 = unk_0x7BDC41A7CA0C77A2(iVar0, 0, 0);
			if (!unk_0xBC2FC12AD0FBF72E(iVar1))
			{
				if (iVar1 != unk_0x33CD235DF1E6A94E())
				{
					if (unk_0x5A04E3BD0B5E7E49(iVar1))
					{
						if (!unk_0x7E4FD94BA083E45B(iVar1, unk_0x33CD235DF1E6A94E()))
						{
							unk_0xC4A347124F39D998(iVar1, unk_0x33CD235DF1E6A94E(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_2()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_109)
	{
		if (unk_0x765F6FEEFF39224F(Local_109[iVar0 /*18*/]))
		{
			if (unk_0xE80842D7B53F8525(Local_109[iVar0 /*18*/]) < Local_109[iVar0 /*18*/].f_17)
			{
				if (unk_0x91BBD269506D61D2(Local_109[iVar0 /*18*/], unk_0x33CD235DF1E6A94E(), 1))
				{
					iLocal_138[iVar0] = (iLocal_138[iVar0] + (Local_109[iVar0 /*18*/].f_17 - unk_0xE80842D7B53F8525(Local_109[iVar0 /*18*/])));
					iLocal_63 = (iLocal_63 + (Local_109[iVar0 /*18*/].f_17 - unk_0xE80842D7B53F8525(Local_109[iVar0 /*18*/])));
					unk_0x0D847D71D9E6142E(Local_109[iVar0 /*18*/]);
					if (iLocal_138[iVar0] > iLocal_137)
					{
						iLocal_137 = iLocal_138[iVar0];
					}
				}
			}
			Local_109[iVar0 /*18*/].f_17 = unk_0xE80842D7B53F8525(Local_109[iVar0 /*18*/]);
		}
		iVar0++;
	}
}

void func_3(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xF0502D0584CCD9A6(iParam0, sParam1, sParam2, func_4(iParam3), 0);
}

int func_4(int iParam0)
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

bool func_5(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_16(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_6(sParam2, iParam3, 0);
}

int func_6(char* sParam0, int iParam1, bool bParam2)
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
					func_15();
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
		if (func_14(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_13();
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
				func_11();
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
				if (func_10())
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
			if (func_9())
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
			func_8();
			Global_15876 = bParam2;
		}
		Global_15868 = iParam1;
		StringCopy(&Global_15485, sParam0, 24);
		Global_14732 = 0;
		func_7();
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
		func_15();
	}
	return 0;
}

void func_7()
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

void func_8()
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

int func_9()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_10()
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

void func_11()
{
	if (func_12(14))
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
		Global_14553 = func_19();
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

bool func_12(int iParam0)
{
	return Global_36425 == iParam0;
}

void func_13()
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

bool func_14(int iParam0, int iParam1)
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

void func_15()
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

void func_16(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_17(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_18(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

int func_19()
{
	func_20();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_20()
{
	int iVar0;
	
	if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
	{
		if (func_23(Global_106565.f_2357.f_539.f_4321) != unk_0x541D5C57194E73C4(unk_0x33CD235DF1E6A94E()))
		{
			iVar0 = func_22(unk_0x33CD235DF1E6A94E());
			if (func_21(iVar0) && (!func_12(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_21(Global_106565.f_2357.f_539.f_4321))
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

bool func_21(int iParam0)
{
	return iParam0 < 3;
}

int func_22(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		iVar1 = unk_0x541D5C57194E73C4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_23(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_23(int iParam0)
{
	if (func_21(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_24()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar1 = -1;
	fVar2 = 999999f;
	iVar0 = 0;
	while (iVar0 < Local_109)
	{
		if ((unk_0x765F6FEEFF39224F(Local_109[iVar0 /*18*/]) && !unk_0xBC2FC12AD0FBF72E(Local_109[iVar0 /*18*/])) && !unk_0xBC2FC12AD0FBF72E(iLocal_67))
		{
			if (vdist2(vLocal_52, Local_109[iVar0 /*18*/].f_6) < fVar2)
			{
				fVar2 = vdist2(vLocal_53, Local_109[iVar0 /*18*/].f_6);
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_25()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	
	switch (iLocal_47)
	{
		case 0:
			iLocal_165 = 0;
			unk_0xB815670C37E03CDE(joaat("a_m_y_genstreet_02"));
			unk_0xB815670C37E03CDE(joaat("prop_pap_camera_01"));
			unk_0xB815670C37E03CDE(joaat("cavalcade2"));
			unk_0xB815670C37E03CDE(joaat("vader"));
			unk_0x0483D0035D6E46FD(sLocal_134);
			unk_0x0483D0035D6E46FD("random@paparazzi@pap_anims");
			if (((((unk_0x5D98D654CDC2165A(joaat("a_m_y_genstreet_02")) && unk_0x5D98D654CDC2165A(joaat("prop_pap_camera_01"))) && unk_0x5D98D654CDC2165A(joaat("cavalcade2"))) && unk_0x5D98D654CDC2165A(joaat("vader"))) && unk_0xE9CCF312047EBEE0(sLocal_134)) && unk_0xE9CCF312047EBEE0("random@paparazzi@pap_anims"))
			{
				vLocal_161[0 /*3*/] = { 266.6049f, 157.7677f, 104.2417f };
				vLocal_161[1 /*3*/] = { 280.2455f, 152.1227f, 103.7096f };
				vLocal_161[2 /*3*/] = { 223.2588f, 50.6347f, 83.6598f };
				vLocal_161[3 /*3*/] = { 244.1302f, 37.4709f, 83.4804f };
				fLocal_162[0] = -111.1625f;
				fLocal_162[1] = 68.857f;
				fLocal_162[2] = -108.2056f;
				fLocal_162[3] = 50.8189f;
				iVar0 = 0;
				while (iVar0 < Local_108)
				{
					func_62(iVar0);
					func_60(func_61(iVar0));
					func_60(func_59(iVar0));
					iVar0++;
				}
				iLocal_163 = 0;
				func_58(func_61(1), 274.9306f, 147.164f, 103.3794f, 2.2109f);
				func_58(func_59(1), 275.6894f, 148.1107f, 103.3723f, 117.9416f);
				func_58(func_59(2), vLocal_161[1 /*3*/], fLocal_162[1]);
				func_58(func_59(3), vLocal_161[1 /*3*/], fLocal_162[1]);
				func_57(0, vLocal_161[0 /*3*/], fLocal_162[0], 1);
				func_57(1, vLocal_161[1 /*3*/], fLocal_162[1], 0);
				unk_0xBEADAF07D2339505(func_56(0, 1), 265.408f, 151.2875f, 103.5673f, 1, false, 0, 1);
				unk_0x3C990C409B3845DE(func_56(0, 1), 217.1033f);
				unk_0xBEADAF07D2339505(func_56(2, 1), 245.9477f, 72.661f, 89.1067f, 1, false, 0, 1);
				unk_0x3C990C409B3845DE(func_56(2, 1), 38.6283f);
				unk_0xBEADAF07D2339505(func_56(3, 1), 244.1872f, 73.3336f, 89.0917f, 1, false, 0, 1);
				unk_0x3C990C409B3845DE(func_56(3, 1), 272.9875f);
				unk_0x108754262311D34F(func_56(0, 1), "random@paparazzi@pap_anims", "base_pap", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x108754262311D34F(func_56(1, 0), "random@paparazzi@pap_anims", "pap_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x108754262311D34F(func_56(1, 1), "random@paparazzi@pap_anims", "pap_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x108754262311D34F(func_56(2, 1), "random@paparazzi@pap_anims", "pap_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x108754262311D34F(func_56(3, 1), "random@paparazzi@pap_anims", "pap_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
				iLocal_47 = 1;
			}
			break;
		
		case 1:
			func_54(func_59(0), 265.408f, 151.2875f, 103.5673f, 217.1033f, "random@paparazzi@pap_anims", "base_pap", 0);
			func_54(func_61(1), 274.9306f, 147.164f, 103.3794f, 2.2109f, "random@paparazzi@pap_anims", "pap_idle_a", "base_pap");
			func_54(func_59(1), 277.1364f, 148.4023f, 103.3493f, 104.6318f, "random@paparazzi@pap_anims", "pap_idle_b", 0);
			func_54(func_59(2), 245.9477f, 72.661f, 89.1067f, 38.6283f, "random@paparazzi@pap_anims", "pap_idle_b", 0);
			func_54(func_59(3), 244.1872f, 73.3336f, 89.0917f, 272.9875f, "random@paparazzi@pap_anims", "pap_idle_a", 0);
			break;
		
		case 2:
			if (unk_0x765F6FEEFF39224F(Local_109[2 /*18*/].f_2))
			{
				if (!unk_0x042B0E494045A7DF(Local_109[2 /*18*/].f_2))
				{
					unk_0x0CDD28A9DFCE2FCE(Local_109[2 /*18*/].f_2, true, 0);
				}
			}
			switch (iLocal_165)
			{
				case 0:
					if (!unk_0xBC2FC12AD0FBF72E(func_56(1, 0)))
					{
						unk_0xED68CDDDE25A144E(func_56(1, 0));
					}
					if (!unk_0xBC2FC12AD0FBF72E(func_56(1, 1)))
					{
						unk_0xED68CDDDE25A144E(func_56(1, 1));
					}
					if (!unk_0x765F6FEEFF39224F(Local_108[2 /*18*/]))
					{
						func_57(2, vLocal_161[2 /*3*/], fLocal_162[2], 0);
						if (unk_0x91D5C8283D19AF49(Local_108[2 /*18*/], 0))
						{
							func_58(func_61(2), unk_0xFBB1F99A825CAB09(Local_108[2 /*18*/], true), 0f);
							unk_0x094626C0798AE1F8(func_56(2, 0), Local_108[2 /*18*/], -1);
						}
					}
					if (!unk_0x765F6FEEFF39224F(Local_108[3 /*18*/]))
					{
						func_57(3, vLocal_161[3 /*3*/], fLocal_162[3], 0);
					}
					if (!unk_0xBC2FC12AD0FBF72E(func_56(2, 1)))
					{
						unk_0x7E268975AF5EA74F(func_56(2, 1), vLocal_156, 2f, -1, 1048576000, 0, 1193033728);
					}
					if (!unk_0xBC2FC12AD0FBF72E(func_56(3, 1)))
					{
						unk_0x7E268975AF5EA74F(func_56(3, 1), vLocal_157, 2f, -1, 1048576000, 0, 1193033728);
					}
					if (!unk_0x765F6FEEFF39224F(func_56(3, 0)))
					{
						func_58(func_61(3), 253.8376f, 85.4544f, 92.8933f, 85.1702f);
					}
					if (Global_3 || bLocal_56)
					{
						if (!unk_0xBC2FC12AD0FBF72E(func_56(1, 0)))
						{
							unk_0x7E268975AF5EA74F(func_56(1, 0), vLocal_158, 2f, 20000, 1048576000, 0, 1193033728);
						}
						if (!unk_0xBC2FC12AD0FBF72E(func_56(1, 1)))
						{
							unk_0x7E268975AF5EA74F(func_56(1, 1), vLocal_159, 2f, 20000, 1048576000, 0, 1193033728);
						}
						if (!unk_0xBC2FC12AD0FBF72E(func_56(0, 1)))
						{
							unk_0x7E268975AF5EA74F(func_56(0, 1), vLocal_160, 2f, 20000, 1048576000, 0, 1193033728);
						}
					}
					settimerb(0);
					iVar1 = 0;
					while (iVar1 < Local_109)
					{
						if (unk_0x765F6FEEFF39224F(Local_109[iVar1 /*18*/]))
						{
							unk_0x7B1011A61F402324(Local_109[iVar1 /*18*/], "MAG_2_PAPARAZZI_GROUP", 0);
						}
						iVar1++;
					}
					iVar1 = 0;
					while (iVar1 < Local_108)
					{
						if (unk_0x765F6FEEFF39224F(Local_108[iVar1 /*18*/]))
						{
							unk_0x7B1011A61F402324(Local_108[iVar1 /*18*/], "MAG_2_PAPARAZZI_GROUP", 0);
						}
						iVar1++;
					}
					iLocal_165++;
					break;
				
				case 1:
					func_49();
					if ((unk_0x91D5C8283D19AF49(Local_108[0 /*18*/], 0) && !unk_0xBC2FC12AD0FBF72E(func_56(0, 0))) && !unk_0xBC2FC12AD0FBF72E(func_56(0, 1)))
					{
						if (!iLocal_152[1])
						{
							iLocal_152[1] = 1;
							unk_0x77C4189A8E5C57C2(func_56(0, 0), Local_108[0 /*18*/], vLocal_154, 10f, 0, joaat("cavalcade2"), 786469, 2f, 10f);
						}
					}
					if ((unk_0x91D5C8283D19AF49(Local_108[2 /*18*/], 0) && !unk_0xBC2FC12AD0FBF72E(func_56(2, 0))) && !unk_0xBC2FC12AD0FBF72E(func_56(2, 1)))
					{
						if (!iLocal_152[0])
						{
							unk_0x77C4189A8E5C57C2(func_56(2, 0), Local_108[2 /*18*/], vLocal_155, 10f, 0, joaat("cavalcade2"), 786469, 2f, 10f);
							iLocal_152[0] = 1;
						}
					}
					if (unk_0x765F6FEEFF39224F(iLocal_67) && !unk_0xBC2FC12AD0FBF72E(iLocal_67))
					{
						func_46(iLocal_67, 6);
						if (Global_3 || bLocal_56)
						{
							if (!unk_0xBC2FC12AD0FBF72E(func_56(1, 0)))
							{
								if (unk_0x18FB647D79B09657(func_56(1, 0), vLocal_158, Global_22, false, true, 0))
								{
									func_45(iLocal_67, func_61(1));
								}
							}
							if (!unk_0xBC2FC12AD0FBF72E(func_56(1, 1)))
							{
								if (unk_0x18FB647D79B09657(func_56(1, 1), vLocal_159, Global_22, false, true, 0))
								{
									func_45(iLocal_67, func_59(1));
								}
							}
							if (!unk_0xBC2FC12AD0FBF72E(func_56(0, 1)))
							{
								if (unk_0x18FB647D79B09657(func_56(0, 1), vLocal_159, Global_22, false, true, 0))
								{
									func_45(iLocal_67, func_59(0));
								}
							}
						}
						else
						{
							func_46(iLocal_67, func_61(1));
							func_46(iLocal_67, func_59(1));
							if (timerb() > 1000)
							{
								func_46(iLocal_67, func_61(1));
							}
						}
					}
					if (vdist2(unk_0xFBB1F99A825CAB09(iLocal_70, true), vLocal_68) < 9f)
					{
						if (unk_0x18FB647D79B09657(func_56(2, 1), vLocal_156, Global_22, false, true, 0))
						{
							func_45(iLocal_67, func_59(2));
						}
						if (unk_0x18FB647D79B09657(func_56(3, 1), vLocal_157, Global_22, false, true, 0))
						{
							func_45(iLocal_67, func_59(3));
						}
						if (unk_0x18FB647D79B09657(func_56(0, 1), vLocal_157, Global_22, false, true, 0))
						{
							func_45(iLocal_67, func_59(0));
						}
					}
					else
					{
						if (!unk_0x0E4018692D92041D(iLocal_168, 3))
						{
							unk_0xED68CDDDE25A144E(Local_109[func_59(3) /*18*/]);
							unk_0x8950ED5730F62EE8(&iLocal_168, 3);
						}
						if (!unk_0x0E4018692D92041D(iLocal_168, 2))
						{
							unk_0xED68CDDDE25A144E(Local_109[func_59(2) /*18*/]);
							unk_0x8950ED5730F62EE8(&iLocal_168, 2);
						}
						if (!unk_0x0E4018692D92041D(iLocal_168, 0))
						{
							unk_0xED68CDDDE25A144E(Local_109[func_59(0) /*18*/]);
							unk_0x8950ED5730F62EE8(&iLocal_168, 0);
						}
						if (Global_3 || bLocal_56)
						{
							func_45(iLocal_67, func_59(3));
						}
						else
						{
							func_46(iLocal_67, func_59(3));
						}
						func_46(iLocal_67, func_59(2));
						func_46(iLocal_67, func_59(0));
					}
					break;
			}
			func_44();
			break;
		
		case 3:
			func_49();
			if (unk_0x91D5C8283D19AF49(iLocal_70, 0))
			{
				if (unk_0x8BB475EA09C9A0EB(iLocal_70) < 1f)
				{
					fLocal_153 = (fLocal_153 + unk_0x7C475FA8D877007F());
				}
				else if (fLocal_153 > 0f)
				{
					fLocal_153 = 0f;
				}
			}
			iVar0 = 0;
			while (iVar0 < Local_108)
			{
				if (unk_0x765F6FEEFF39224F(Local_108[iVar0 /*18*/]) && iLocal_45 != 6)
				{
					if ((iVar0 < 2 && ((iVar0 != iLocal_163 || !unk_0x765F6FEEFF39224F(Local_108[0 /*18*/])) || !unk_0x765F6FEEFF39224F(Local_108[1 /*18*/]))) && (unk_0xE3903F59E2F22150() - iLocal_164) > 500)
					{
						if (vdist2(vLocal_52, vLocal_68) > 400f)
						{
							if (vdist2(vLocal_52, vLocal_68) < 62500f || (unk_0xE3903F59E2F22150() - iLocal_131) < 30000)
							{
								func_40(Local_108[iVar0 /*18*/], iLocal_70, &(Local_108[iVar0 /*18*/].f_5), &(Local_108[iVar0 /*18*/].f_15), &(Local_108[iVar0 /*18*/].f_11), &(Local_108[iVar0 /*18*/].f_14), &(Local_108[iVar0 /*18*/].f_16), Local_108[iVar0 /*18*/].f_2, 800, 50f);
								iLocal_163 = iVar0;
								iLocal_164 = unk_0xE3903F59E2F22150();
							}
						}
					}
					iVar2 = func_61(iVar0);
					if (!unk_0xBC2FC12AD0FBF72E(Local_109[iVar2 /*18*/]))
					{
						iVar3 = func_59(iVar0);
					}
					else
					{
						iVar3 = func_61(iVar0);
					}
					switch (Local_108[iVar0 /*18*/].f_17)
					{
						case 0:
							if (unk_0x91D5C8283D19AF49(Local_108[iVar0 /*18*/], 0))
							{
								if (!unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), Local_108[iVar0 /*18*/], 0))
								{
									if (!unk_0xBC2FC12AD0FBF72E(Local_109[iVar2 /*18*/]))
									{
										if (!unk_0x10930B9CAD4111C2(Local_109[iVar2 /*18*/], Local_108[iVar0 /*18*/], 0))
										{
											if (unk_0xD76D6BCC14B95CE1(Local_109[iVar2 /*18*/], -1794415470) != 1 && unk_0x67FFBB75D2430704(Local_108[iVar0 /*18*/], -1, 0))
											{
												unk_0xC838CE9837D0ABAF(Local_109[iVar2 /*18*/], Local_108[iVar0 /*18*/], -1, -1, 2f, 1, 0);
											}
										}
									}
									if (iVar3 != -1)
									{
										if (!unk_0xBC2FC12AD0FBF72E(Local_109[iVar3 /*18*/]))
										{
											if (!unk_0x10930B9CAD4111C2(Local_109[iVar3 /*18*/], Local_108[iVar0 /*18*/], 0))
											{
												if (unk_0xD76D6BCC14B95CE1(Local_109[iVar3 /*18*/], -1794415470) != 1 && unk_0x67FFBB75D2430704(Local_108[iVar0 /*18*/], 0, 0))
												{
													unk_0xC838CE9837D0ABAF(Local_109[iVar3 /*18*/], Local_108[iVar0 /*18*/], -1, 0, 2f, 1, 0);
												}
											}
										}
										if (!unk_0xBC2FC12AD0FBF72E(Local_109[iVar2 /*18*/]) && (iVar3 != -1 && !unk_0xBC2FC12AD0FBF72E(Local_109[iVar3 /*18*/])))
										{
											if ((unk_0x10930B9CAD4111C2(Local_109[iVar2 /*18*/], Local_108[iVar0 /*18*/], 0) && (iVar3 != -1 && unk_0x10930B9CAD4111C2(Local_109[iVar3 /*18*/], Local_108[iVar0 /*18*/], 0))) && unk_0x91D5C8283D19AF49(iLocal_70, 0))
											{
												if (unk_0xD76D6BCC14B95CE1(Local_109[iVar2 /*18*/], -1273030092) != 1 && unk_0xD76D6BCC14B95CE1(Local_109[iVar2 /*18*/], -1817882002) != 1)
												{
													unk_0x28F648743D7DE312(Local_109[iVar2 /*18*/], 3, false);
													unk_0x28F648743D7DE312(Local_109[iVar2 /*18*/], 1, true);
													unk_0x28F648743D7DE312(Local_109[iVar2 /*18*/], 2, false);
													if (iVar0 == 0)
													{
														unk_0x2BC4614F764725A6(Local_109[iVar2 /*18*/], Local_108[iVar0 /*18*/], iLocal_70, 10, 50f, 786471, 4f, 10f, 1);
													}
													else if (iVar0 == 1)
													{
														unk_0x2BC4614F764725A6(Local_109[iVar2 /*18*/], Local_108[iVar0 /*18*/], iLocal_70, 11, 50f, 786470, 4f, 10f, 1);
													}
													else if (iVar0 == 2)
													{
														unk_0x2BC4614F764725A6(Local_109[iVar2 /*18*/], Local_108[iVar0 /*18*/], iLocal_70, 10, 50f, 786471, 4f, 10f, 1);
													}
													else if (iVar0 == 3)
													{
														unk_0x2BC4614F764725A6(Local_109[iVar2 /*18*/], Local_108[iVar0 /*18*/], iLocal_70, 11, 50f, 786470, 4f, 10f, 1);
													}
												}
												unk_0xB225487E62B643CA(Local_109[iVar2 /*18*/], func_39((3f * unk_0x16E00F066AFFEA0D(vLocal_54, Local_108[iVar0 /*18*/].f_8, true)), 50f, 120f));
											}
										}
									}
									if (fLocal_153 > 3f && vdist(Local_108[iVar0 /*18*/].f_8, vLocal_54) < 10f)
									{
										Local_108[iVar0 /*18*/].f_17 = 1;
									}
								}
							}
							else
							{
								if (!unk_0xBC2FC12AD0FBF72E(Local_109[iVar2 /*18*/]))
								{
									if (!unk_0xD82CBCB7E04DDA8A(Local_109[iVar2 /*18*/]))
									{
										unk_0x33F6BE48E356DA27(Local_109[iVar2 /*18*/], 2, false);
										unk_0xECCD4FDA45197F97(Local_109[iVar2 /*18*/], unk_0x33CD235DF1E6A94E(), 300f, 100000, 0, 0);
									}
								}
								if (iVar3 != -1)
								{
									if (!unk_0xBC2FC12AD0FBF72E(Local_109[iVar3 /*18*/]))
									{
										if (!unk_0xD82CBCB7E04DDA8A(Local_109[iVar3 /*18*/]))
										{
											unk_0x33F6BE48E356DA27(Local_109[iVar3 /*18*/], 2, false);
											unk_0xECCD4FDA45197F97(Local_109[iVar3 /*18*/], unk_0x33CD235DF1E6A94E(), 300f, 100000, 0, 0);
										}
									}
								}
							}
							break;
						
						case 1:
							if (unk_0xF0D230FB550CD6EB(Local_109[iVar2 /*18*/], 0))
							{
								unk_0x07C339D4328CA16C(Local_109[iVar2 /*18*/], 1, 256);
							}
							else
							{
								func_46(iLocal_67, iVar2);
							}
							if (iVar3 != -1)
							{
								if (!unk_0xBC2FC12AD0FBF72E(Local_109[iVar3 /*18*/]))
								{
									if (unk_0xF0D230FB550CD6EB(Local_109[iVar3 /*18*/], 0))
									{
										unk_0x07C339D4328CA16C(Local_109[iVar3 /*18*/], 0, 256);
									}
									else
									{
										func_46(iLocal_67, iVar3);
									}
								}
							}
							if (unk_0x91D5C8283D19AF49(Local_108[iVar0 /*18*/], 0))
							{
								if (vdist(Local_108[iVar0 /*18*/].f_8, vLocal_54) > 15f)
								{
									Local_108[iVar0 /*18*/].f_17 = 0;
								}
							}
							break;
					}
					if ((!unk_0xBC2FC12AD0FBF72E(Local_109[iVar2 /*18*/]) && (iVar3 == -1 || !unk_0xBC2FC12AD0FBF72E(Local_109[iVar3 /*18*/]))) && unk_0x91D5C8283D19AF49(Local_108[iVar0 /*18*/], 0))
					{
						iVar4 = 1;
						if (!unk_0xC30D5C4DCAC8020A(Local_109[iVar2 /*18*/]))
						{
							iVar4 = 0;
						}
						if (iVar3 != -1)
						{
							if (!unk_0xC30D5C4DCAC8020A(Local_109[iVar3 /*18*/]))
							{
								iVar4 = 0;
							}
						}
						if (!unk_0xC30D5C4DCAC8020A(Local_108[iVar0 /*18*/]))
						{
							iVar4 = 0;
						}
						if ((iVar4 && vdist(vLocal_52, Local_108[iVar0 /*18*/].f_8) > 25f) && vdist(vLocal_52, Local_109[iVar0 /*18*/].f_6) > 25f)
						{
							if (!unk_0x10930B9CAD4111C2(Local_109[iVar2 /*18*/], Local_108[iVar0 /*18*/], 0))
							{
								unk_0x094626C0798AE1F8(Local_109[iVar2 /*18*/], Local_108[iVar0 /*18*/], -1);
							}
							if (iVar3 != -1)
							{
								if (!unk_0x10930B9CAD4111C2(Local_109[iVar3 /*18*/], Local_108[iVar0 /*18*/], 0))
								{
									unk_0x094626C0798AE1F8(Local_109[iVar3 /*18*/], Local_108[iVar0 /*18*/], 0);
								}
							}
						}
					}
					if (func_38(iVar0, 1125515264))
					{
						func_37(iVar0);
					}
				}
				func_44();
				func_29();
				iVar0++;
			}
			break;
		
		case 4:
			func_49();
			if (!iLocal_167)
			{
				iVar0 = 0;
				while (iVar0 < Local_108)
				{
					iVar5 = func_61(iVar0);
					if (!unk_0xBC2FC12AD0FBF72E(Local_109[iVar5 /*18*/]))
					{
						iVar6 = func_59(iVar0);
					}
					else
					{
						iVar6 = func_61(iVar0);
					}
					if (unk_0x91D5C8283D19AF49(Local_108[iVar0 /*18*/], 0))
					{
						if (!unk_0xBC2FC12AD0FBF72E(Local_109[iVar5 /*18*/]))
						{
							if (!unk_0x10930B9CAD4111C2(Local_109[iVar5 /*18*/], Local_108[iVar0 /*18*/], 0))
							{
								if (unk_0xD76D6BCC14B95CE1(Local_109[iVar5 /*18*/], -1794415470) != 1)
								{
									unk_0xC838CE9837D0ABAF(Local_109[iVar5 /*18*/], Local_108[iVar0 /*18*/], -1, -1, 2f, 1, 0);
								}
							}
						}
						if (iVar6 != -1)
						{
							if (!unk_0xBC2FC12AD0FBF72E(Local_109[iVar6 /*18*/]))
							{
								if (!unk_0x10930B9CAD4111C2(Local_109[iVar6 /*18*/], Local_108[iVar0 /*18*/], 0))
								{
									if (unk_0xD76D6BCC14B95CE1(Local_109[iVar6 /*18*/], -1794415470) != 1)
									{
										unk_0xC838CE9837D0ABAF(Local_109[iVar6 /*18*/], Local_108[iVar0 /*18*/], -1, 0, 2f, 1, 0);
									}
								}
							}
							if (!unk_0xBC2FC12AD0FBF72E(Local_109[iVar5 /*18*/]) && (iVar6 != -1 && !unk_0xBC2FC12AD0FBF72E(Local_109[iVar6 /*18*/])))
							{
								if ((unk_0x10930B9CAD4111C2(Local_109[iVar5 /*18*/], Local_108[iVar0 /*18*/], 0) && (iVar6 != -1 && unk_0x10930B9CAD4111C2(Local_109[iVar6 /*18*/], Local_108[iVar0 /*18*/], 0))) && unk_0x91D5C8283D19AF49(iLocal_70, 0))
								{
									fVar7 = func_39((70f - (to_float((unk_0xE3903F59E2F22150() - iLocal_66)) / 50f)), 0f, 70f);
									if (fVar7 <= 1f || (unk_0xE3903F59E2F22150() - iLocal_66) > 4000)
									{
										unk_0x3F1EBCFED4923B07(Local_109[iVar5 /*18*/], fVar7);
										iVar8 = 0;
										while (iVar8 < Local_108)
										{
											if ((unk_0x91D5C8283D19AF49(Local_108[iVar8 /*18*/], 0) && !unk_0xBC2FC12AD0FBF72E(func_56(iVar8, 0))) && unk_0x10930B9CAD4111C2(func_56(iVar8, 0), Local_108[iVar8 /*18*/], 0))
											{
												unk_0xED68CDDDE25A144E(func_56(iVar8, 0));
												unk_0x2BC4614F764725A6(func_56(iVar8, 0), Local_108[iVar8 /*18*/], 0, 5, 10f, 786468, 10f, 10f, 1);
											}
											iVar8++;
										}
										iLocal_167 = 1;
									}
									else if (unk_0xD76D6BCC14B95CE1(Local_109[iVar5 /*18*/], -1273030092) != 1 && unk_0xD76D6BCC14B95CE1(Local_109[iVar5 /*18*/], -1817882002) != 1)
									{
										unk_0x28F648743D7DE312(Local_109[iVar5 /*18*/], 3, false);
										unk_0x28F648743D7DE312(Local_109[iVar5 /*18*/], 1, true);
										unk_0x28F648743D7DE312(Local_109[iVar5 /*18*/], 2, false);
										if (iVar0 == 0)
										{
											unk_0x2BC4614F764725A6(Local_109[iVar5 /*18*/], Local_108[iVar0 /*18*/], iLocal_70, 10, fVar7, 786471, 4f, 10f, 1);
										}
										else if (iVar0 == 1)
										{
											unk_0x2BC4614F764725A6(Local_109[iVar5 /*18*/], Local_108[iVar0 /*18*/], iLocal_70, 11, fVar7, 786470, 4f, 10f, 1);
										}
										else if (iVar0 == 2)
										{
											unk_0x2BC4614F764725A6(Local_109[iVar5 /*18*/], Local_108[iVar0 /*18*/], iLocal_70, 10, fVar7, 786471, 4f, 10f, 1);
										}
										else if (iVar0 == 3)
										{
											unk_0x2BC4614F764725A6(Local_109[iVar5 /*18*/], Local_108[iVar0 /*18*/], iLocal_70, 11, fVar7, 786470, 4f, 10f, 1);
										}
									}
								}
							}
						}
					}
					else
					{
						if (!unk_0xBC2FC12AD0FBF72E(Local_109[iVar5 /*18*/]))
						{
							if (!unk_0xD82CBCB7E04DDA8A(Local_109[iVar5 /*18*/]))
							{
								unk_0x33F6BE48E356DA27(Local_109[iVar5 /*18*/], 2, false);
								unk_0xECCD4FDA45197F97(Local_109[iVar5 /*18*/], unk_0x33CD235DF1E6A94E(), 300f, 100000, 0, 0);
							}
						}
						if (iVar6 != -1)
						{
							if (!unk_0xBC2FC12AD0FBF72E(Local_109[iVar6 /*18*/]))
							{
								if (!unk_0xD82CBCB7E04DDA8A(Local_109[iVar6 /*18*/]))
								{
									unk_0x33F6BE48E356DA27(Local_109[iVar6 /*18*/], 2, false);
									unk_0xECCD4FDA45197F97(Local_109[iVar6 /*18*/], unk_0x33CD235DF1E6A94E(), 300f, 100000, 0, 0);
								}
							}
						}
					}
					iVar0++;
				}
			}
			else
			{
				if (func_38(iLocal_166, 10f))
				{
					func_37(iLocal_166);
				}
				iLocal_166++;
				if (iLocal_166 > 3)
				{
					iLocal_166 = 0;
				}
			}
			func_44();
			func_29();
			break;
		
		case 6:
			if (func_38(iLocal_166, 1125515264))
			{
				func_37(iLocal_166);
			}
			iLocal_166++;
			if (iLocal_166 > 3)
			{
				iLocal_166 = 0;
			}
			break;
	}
	iVar0 = 0;
	while (iVar0 < Local_109)
	{
		if (unk_0x765F6FEEFF39224F(Local_109[iVar0 /*18*/]) && !unk_0xBC2FC12AD0FBF72E(Local_109[iVar0 /*18*/]))
		{
			if (iLocal_47 > 1)
			{
				if (!unk_0x786AF4A44E1B5B4B(sLocal_134))
				{
					func_28(iVar0);
					if (unk_0x765F6FEEFF39224F(Local_109[iVar0 /*18*/].f_2) && unk_0x9F4718FD61B07058(Local_109[iVar0 /*18*/].f_2))
					{
						if (!unk_0xF0D230FB550CD6EB(Local_109[iVar0 /*18*/], 0))
						{
							if (unk_0x042B0E494045A7DF(Local_109[iVar0 /*18*/].f_2))
							{
								if (unk_0xF7C907E9E8E2BB22(Local_109[iVar0 /*18*/]))
								{
									unk_0x0CDD28A9DFCE2FCE(Local_109[iVar0 /*18*/].f_2, false, 0);
								}
							}
							else if (!unk_0xF7C907E9E8E2BB22(Local_109[iVar0 /*18*/]))
							{
								unk_0x0CDD28A9DFCE2FCE(Local_109[iVar0 /*18*/].f_2, true, 0);
							}
							if (!unk_0xC30D5C4DCAC8020A(Local_109[iVar0 /*18*/]))
							{
								if (!unk_0x1CE8F0A08E65CA6A(Local_109[iVar0 /*18*/], sLocal_134, func_27(iVar0), 3))
								{
									if (!Local_109[iVar0 /*18*/].f_11)
									{
										if (!unk_0x1CE8F0A08E65CA6A(Local_109[iVar0 /*18*/], sLocal_134, "grip", 3))
										{
											unk_0x108754262311D34F(Local_109[iVar0 /*18*/], sLocal_134, "grip", 1000f, -1000f, -1, 57, 0, 0, 0, 0);
											Local_109[iVar0 /*18*/].f_11 = 1;
										}
									}
								}
								else if (Local_109[iVar0 /*18*/].f_11)
								{
									unk_0x108754262311D34F(Local_109[iVar0 /*18*/], sLocal_134, "grip", 1000f, -1000f, -1, 48, 0.99f, 0, 0, 0);
									Local_109[iVar0 /*18*/].f_11 = 0;
								}
							}
							if (!Local_109[iVar0 /*18*/].f_10)
							{
								unk_0xC5AC1209923D6240(sLocal_134);
								if (unk_0x657046D7B5023C3B(sLocal_134))
								{
									unk_0x6C3D450F961FEA9B(Local_109[iVar0 /*18*/], sLocal_134);
									Local_109[iVar0 /*18*/].f_10 = 1;
								}
							}
						}
						else
						{
							if (Local_109[iVar0 /*18*/].f_11)
							{
								unk_0x108754262311D34F(Local_109[iVar0 /*18*/], sLocal_134, "grip", 1000f, -1000f, -1, 48, 0.99f, 0, 0, 0);
								Local_109[iVar0 /*18*/].f_11 = 0;
							}
							if (Local_109[iVar0 /*18*/].f_10)
							{
								unk_0x9047D2A75A34D3EE(Local_109[iVar0 /*18*/]);
								Local_109[iVar0 /*18*/].f_10 = 0;
							}
						}
						if (unk_0x5C415D10D5CBF689(Local_109[iVar0 /*18*/]) && func_26(Local_109[iVar0 /*18*/], unk_0xF2C96862595654B4(Local_109[iVar0 /*18*/], 0)) == -1)
						{
							if (unk_0x042B0E494045A7DF(Local_109[iVar0 /*18*/].f_2))
							{
								unk_0x0CDD28A9DFCE2FCE(Local_109[iVar0 /*18*/].f_2, false, 0);
							}
						}
						else if (!unk_0x042B0E494045A7DF(Local_109[iVar0 /*18*/].f_2))
						{
							unk_0x0CDD28A9DFCE2FCE(Local_109[iVar0 /*18*/].f_2, true, 0);
						}
					}
					else
					{
						if (Local_109[iVar0 /*18*/].f_11)
						{
							unk_0x108754262311D34F(Local_109[iVar0 /*18*/], sLocal_134, "grip", 1000f, -1000f, -1, 48, 0.99f, 0, 0, 0);
							Local_109[iVar0 /*18*/].f_11 = 0;
						}
						if (Local_109[iVar0 /*18*/].f_10)
						{
							unk_0x9047D2A75A34D3EE(Local_109[iVar0 /*18*/]);
							Local_109[iVar0 /*18*/].f_10 = 0;
						}
					}
				}
			}
			if (iLocal_45 != 7)
			{
				if (unk_0x2E9A4AE2A5B4D8E8(Local_109[iVar0 /*18*/]) && unk_0x085941C2A0E1ABAF(unk_0x33CD235DF1E6A94E()))
				{
					func_181(7);
				}
			}
		}
		iVar0++;
	}
	if (iLocal_45 != 7)
	{
		iVar0 = 0;
		while (iVar0 < Local_108)
		{
			if (unk_0x765F6FEEFF39224F(Local_108[iVar0 /*18*/]))
			{
				if (unk_0x91D5C8283D19AF49(Local_108[iVar0 /*18*/], 0))
				{
					if (unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), Local_108[iVar0 /*18*/], 0))
					{
						func_181(7);
					}
				}
			}
			iVar0++;
		}
	}
}

int func_26(int iParam0, int iParam1)
{
	if (!unk_0xD62C4419A41F106A(iParam0, 0) && !unk_0xD62C4419A41F106A(iParam1, 0))
	{
		if (unk_0xEE984ED4E4A374BE(iParam0, iParam1))
		{
			if (unk_0x7BDC41A7CA0C77A2(iParam1, -1, 0) == iParam0)
			{
				return -1;
			}
			if (unk_0x7BDC41A7CA0C77A2(iParam1, 0, 0) == iParam0)
			{
				return 0;
			}
			if (unk_0x7BDC41A7CA0C77A2(iParam1, 1, 0) == iParam0)
			{
				return 1;
			}
			if (unk_0x7BDC41A7CA0C77A2(iParam1, 2, 0) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

char* func_27(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 5:
			return "idle_a";
			break;
		
		case 1:
		case 6:
			return "idle_b";
			break;
		
		case 2:
		case 7:
			return "idle_c";
			break;
		
		case 3:
			return "idle_d";
			break;
		
		case 4:
			return "idle_e";
			break;
		
		default:
			break;
	}
	return "";
}

void func_28(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x0E4018692D92041D(Local_109[iParam0 /*18*/].f_15, iVar0))
		{
			iVar1 = 5;
			iVar2 = (iVar1 + iLocal_136);
			iVar3 = iVar0;
			if (iVar3 < iVar1)
			{
				if (unk_0x1CE8F0A08E65CA6A(Local_109[iParam0 /*18*/], sLocal_134, func_27(iParam0), 3))
				{
					if (unk_0x204DEACC5BECF723(Local_109[iParam0 /*18*/], sLocal_134, func_27(iParam0)) > 0.9f)
					{
						unk_0xCE689A8E8C42ED78(&(Local_109[iParam0 /*18*/].f_15), iVar0);
					}
				}
			}
			else if (iVar3 < iVar2)
			{
				if (unk_0x1CE8F0A08E65CA6A(Local_109[iParam0 /*18*/], sLocal_135, iLocal_136[(iVar3 - iVar1)], 3))
				{
					if (unk_0x204DEACC5BECF723(Local_109[iParam0 /*18*/], sLocal_135, iLocal_136[(iVar3 - iVar1)]) > 0.9f)
					{
						unk_0xCE689A8E8C42ED78(&(Local_109[iParam0 /*18*/].f_15), iVar0);
					}
				}
			}
			else if (!unk_0x1CE8F0A08E65CA6A(Local_109[iParam0 /*18*/], sLocal_134, "grip", 3))
			{
				unk_0xCE689A8E8C42ED78(&(Local_109[iParam0 /*18*/].f_15), iVar0);
			}
		}
		iVar0++;
	}
}

void func_29()
{
	int iVar0;
	
	if (!unk_0xBC2FC12AD0FBF72E(iLocal_67))
	{
		iVar0 = func_59(iLocal_149);
		if (((unk_0x765F6FEEFF39224F(Local_108[iLocal_149 /*18*/]) && unk_0x91D5C8283D19AF49(Local_108[iLocal_149 /*18*/], 0)) && unk_0x765F6FEEFF39224F(Local_109[iVar0 /*18*/])) && !unk_0xBC2FC12AD0FBF72E(Local_109[iVar0 /*18*/]))
		{
			if (unk_0xD470A4E16E9AAE0E(Local_108[iLocal_149 /*18*/], joaat("cavalcade2")))
			{
				if (vdist2(Local_109[iVar0 /*18*/].f_6, vLocal_53) < pow(30f, 2f) && unk_0x7BDC41A7CA0C77A2(Local_108[iLocal_149 /*18*/], 0, 0) == Local_109[iVar0 /*18*/])
				{
					if (!Local_109[iVar0 /*18*/].f_9)
					{
						if (!func_36(iVar0))
						{
							func_30(iVar0);
						}
					}
					else if (!func_36(iVar0) && (unk_0xE3903F59E2F22150() - Local_109[iVar0 /*18*/].f_13) > 1000)
					{
						if (!unk_0x1CE8F0A08E65CA6A(Local_109[iVar0 /*18*/], sLocal_135, "base", 3))
						{
							unk_0x108754262311D34F(Local_109[iVar0 /*18*/], sLocal_135, "base", 8f, 1000f, -1, 16, 0, 0, 0, 0);
						}
					}
				}
			}
			else if (!Local_109[iVar0 /*18*/].f_9)
			{
				if (vdist2(Local_109[iVar0 /*18*/].f_6, vLocal_53) < pow(30f, 2f) && unk_0x7BDC41A7CA0C77A2(Local_108[iLocal_149 /*18*/], 0, 0) == Local_109[iVar0 /*18*/])
				{
					unk_0x24BCD8432FE6AF77(Local_109[iVar0 /*18*/], "random@paparazzi@pap_anims", "sweep_low", "sweep_med", "sweep_high", -1, iLocal_67, 1.57f, 0.25f);
					Local_109[iVar0 /*18*/].f_9 = 1;
					Local_109[iVar0 /*18*/].f_13 = unk_0xE3903F59E2F22150();
				}
			}
			else if (Local_109[iVar0 /*18*/].f_9)
			{
				if ((unk_0xE3903F59E2F22150() - Local_109[iVar0 /*18*/].f_13) > 2000)
				{
					Local_109[iVar0 /*18*/].f_9 = 0;
				}
			}
		}
		iLocal_149++;
		if (iLocal_149 >= Local_108)
		{
			iLocal_149 = 0;
		}
	}
}

void func_30(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	if (!unk_0xBC2FC12AD0FBF72E(Local_109[iParam0 /*18*/]) && !unk_0xBC2FC12AD0FBF72E(iLocal_67))
	{
		iVar0 = 15;
		vVar1 = { vLocal_53 - Local_109[iParam0 /*18*/].f_6 };
		vVar2 = { unk_0xB969B7304D29679F(Local_109[iParam0 /*18*/]) };
		fVar3 = func_34(vVar2, vVar1);
		if (unk_0x7EECA16E87982278(fVar3) < 10f)
		{
			iVar0 = 5;
		}
		else if (fVar3 >= 10f && fVar3 < 60f)
		{
			iVar0 = 7;
		}
		else if (fVar3 >= 60f && fVar3 < 100f)
		{
			iVar0 = 6;
		}
		else if (fVar3 <= -10f && fVar3 > -60f)
		{
			iVar0 = 10;
		}
		else if (fVar3 < -60f && fVar3 > -100f)
		{
			iVar0 = 9;
		}
		if (iVar0 != 15)
		{
			func_31(iParam0, iVar0);
		}
	}
}

void func_31(int iParam0, int iParam1)
{
	if (iParam1 < 15)
	{
		if (!unk_0x0E4018692D92041D(Local_109[iParam0 /*18*/].f_15, iParam1))
		{
			if (func_33(iParam1))
			{
				unk_0x108754262311D34F(Local_109[iParam0 /*18*/], sLocal_135, iLocal_136[func_32(iParam1)], 4f, -4f, -1, 16, 0, 0, 0, 0);
			}
			else if (iParam1 < 5)
			{
				unk_0x108754262311D34F(Local_109[iParam0 /*18*/], sLocal_134, func_27(iParam0), 8f, -8f, -1, 0, 0, 0, 0, 0);
			}
			else
			{
				unk_0x108754262311D34F(Local_109[iParam0 /*18*/], sLocal_134, "grip", 1000f, -1000f, -1, 57, 0, 0, 0, 0);
			}
			Local_109[iParam0 /*18*/].f_15 = 0;
			unk_0x8950ED5730F62EE8(&(Local_109[iParam0 /*18*/].f_15), iParam1);
		}
	}
}

int func_32(int iParam0)
{
	return (iParam0 - 5);
}

bool func_33(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	return (iVar0 >= 5 && iVar0 < (5 + iLocal_136));
}

float func_34(vector3 vParam0, vector3 vParam1)
{
	float fVar0;
	
	vParam0 = { func_35(vParam0) };
	vParam1 = { func_35(vParam1) };
	fVar0 = (unk_0xB92C3C556226E8F9(vParam1.y, vParam1.x) - unk_0xB92C3C556226E8F9(vParam0.y, vParam0.x));
	if (fVar0 > 180f)
	{
		fVar0 = (fVar0 - 360f);
	}
	else if (fVar0 < -180f)
	{
		fVar0 = (fVar0 + 360f);
	}
	return fVar0;
}

Vector3 func_35(vector3 vParam0)
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

bool func_36(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (!unk_0x786AF4A44E1B5B4B(sLocal_135))
	{
		iVar1 = 5;
		while (iVar1 <= 13)
		{
			if (!bVar0)
			{
				if (unk_0x0E4018692D92041D(Local_109[iParam0 /*18*/].f_15, iVar1))
				{
					bVar0 = true;
				}
			}
			iVar1++;
		}
	}
	return bVar0;
}

void func_37(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x765F6FEEFF39224F(Local_108[iParam0 /*18*/]) && unk_0xC30D5C4DCAC8020A(Local_108[iParam0 /*18*/]))
	{
		unk_0x7AC8DF0B83EB4C6B(&(Local_108[iParam0 /*18*/]));
	}
	if (unk_0xE38E3CF1625A4145(Local_108[iParam0 /*18*/].f_1))
	{
		unk_0x1ABDB383C83A336A(&(Local_108[iParam0 /*18*/].f_1));
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (iVar0 == 1)
		{
			iVar1 = func_59(iParam0);
		}
		else
		{
			iVar1 = func_61(iParam0);
		}
		if (unk_0x765F6FEEFF39224F(Local_109[iVar1 /*18*/]) && unk_0xC30D5C4DCAC8020A(Local_109[iVar1 /*18*/]))
		{
			if (unk_0x765F6FEEFF39224F(Local_109[iVar1 /*18*/]))
			{
				unk_0xEC26F4BFC9942A0C(&(Local_109[iVar1 /*18*/].f_2));
			}
			if (unk_0xE38E3CF1625A4145(Local_109[iVar1 /*18*/].f_1))
			{
				unk_0x1ABDB383C83A336A(&(Local_109[iVar1 /*18*/].f_1));
			}
			unk_0x4B8B69DAE5BAC592(&(Local_109[iVar1 /*18*/]));
		}
		iVar0++;
	}
}

int func_38(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 1;
	if (unk_0x765F6FEEFF39224F(Local_108[iParam0 /*18*/]))
	{
		if (unk_0x91D5C8283D19AF49(Local_108[iParam0 /*18*/], 0))
		{
			if (vdist2(vLocal_52, Local_108[iParam0 /*18*/].f_8) < (fParam1 * fParam1) || !unk_0xC30D5C4DCAC8020A(Local_108[iParam0 /*18*/]))
			{
				iVar0 = 0;
			}
		}
	}
	if (unk_0x765F6FEEFF39224F(func_56(iParam0, 0)))
	{
		if (!unk_0xBC2FC12AD0FBF72E(func_56(iParam0, 0)))
		{
			if (vdist2(vLocal_52, Local_109[func_61(iParam0) /*18*/].f_6) < (fParam1 * fParam1) || !unk_0xC30D5C4DCAC8020A(func_56(iParam0, 0)))
			{
				iVar0 = 0;
			}
		}
	}
	if (unk_0x765F6FEEFF39224F(func_56(iParam0, 1)))
	{
		if (!unk_0xBC2FC12AD0FBF72E(func_56(iParam0, 1)))
		{
			if (vdist2(vLocal_52, Local_109[func_59(iParam0) /*18*/].f_6) < (fParam1 * fParam1) || !unk_0xC30D5C4DCAC8020A(func_56(iParam0, 1)))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

float func_39(float fParam0, float fParam1, float fParam2)
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

void func_40(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, vector3 vParam7, int iParam8, float fParam9)
{
	if (unk_0x765F6FEEFF39224F(iParam0) && unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		if (((((unk_0x765F6FEEFF39224F(iParam1) && iParam0 != iParam1) && !unk_0x444D956C7F94526E(unk_0x541D5C57194E73C4(iParam1))) && !unk_0x57D74362A8BD1490(unk_0x541D5C57194E73C4(iParam1))) && !unk_0x097E7778E3E162E8(unk_0x541D5C57194E73C4(iParam1))) && !unk_0xFFB467183FEE27C4(unk_0x541D5C57194E73C4(iParam1)))
		{
			if (unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(iParam1, true), *uParam4, true) > 20f)
			{
				if (func_43(iParam0, iParam1, iLocal_119, unk_0xFBB1F99A825CAB09(iParam1, true), unk_0x60B5C1FD066CB864(iParam1, 2)))
				{
					*uParam2 = { *uParam4 };
					*uParam3 = *uParam5;
					*uParam2 = { unk_0xCD1EDCB38767B47C(*uParam2, *uParam3, vParam7) };
					*uParam4 = { unk_0xFBB1F99A825CAB09(iParam1, true) };
					*uParam5 = unk_0xC472E34C8FBEC678(iParam1);
				}
			}
			if (!unk_0xC30D5C4DCAC8020A(iParam0))
			{
				*uParam6 = unk_0xE3903F59E2F22150();
			}
			else if ((unk_0xE3903F59E2F22150() - *uParam6) > iParam8)
			{
				if ((func_42(iParam0, iParam1, 1) > fParam9 && unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(iParam1, true), *uParam2, true) > 20f) && vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), *uParam2) > 100f)
				{
					if (!func_41(*uParam2))
					{
						if (!unk_0x73E7A21FD53144AB(*uParam2, 6f))
						{
							unk_0x9C47E5CDFB45F474(*uParam2, 6f, 0);
							unk_0xB7350047030F7672(*uParam2, 6f, 0, 0, 0, 0, false, 0);
							unk_0xBEADAF07D2339505(iParam0, *uParam2, 1, false, 0, 1);
							unk_0x3C990C409B3845DE(iParam0, *uParam3);
							unk_0x1B2303F9DC2D90D5(iParam0, 1084227584);
							unk_0x4522AD7364B6AA54(iParam0, func_39((unk_0x8BB475EA09C9A0EB(iParam1) + 10f), 10f, 60f));
							unk_0x9FABD0AB045A5D6E(iParam0, true, true, 0);
							*uParam6 = unk_0xE3903F59E2F22150();
						}
					}
				}
			}
		}
		else
		{
			*uParam6 = unk_0xE3903F59E2F22150();
		}
	}
}

int func_41(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

float func_42(int iParam0, int iParam1, bool bParam2)
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

int func_43(int iParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam4)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	var uVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	vector3 vVar12;
	int iVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	int iVar17;
	
	if (unk_0x765F6FEEFF39224F(iParam2))
	{
		unk_0xFEF5F9BB57EA2E8D(unk_0x541D5C57194E73C4(iParam0), &vVar3, &vVar4);
		unk_0xFEF5F9BB57EA2E8D(unk_0x541D5C57194E73C4(iParam1), &vVar5, &uVar6);
		fVar7 = unk_0x7EECA16E87982278((vVar4.z - vVar3.z));
		fVar8 = unk_0x7EECA16E87982278((vVar4.x - vVar3.x));
		fVar9 = unk_0x7EECA16E87982278((vVar4.y - vVar3.y));
		if (fVar8 > fVar7)
		{
			fVar10 = (fVar8 / 2f);
			fVar11 = (fVar10 - unk_0x7EECA16E87982278(vVar3.z));
		}
		else
		{
			fVar10 = (fVar9 / 2f);
			fVar11 = (fVar10 - unk_0x7EECA16E87982278(vVar3.x));
		}
		vVar12.z = (vVar12.z + (vVar5.z - vVar3.z));
		unk_0xBEADAF07D2339505(iParam2, vParam3, 1, false, 0, 1);
		unk_0x1C8705F667F673EA(iParam2, vParam4, 2, 1);
		vVar1 = { unk_0x2CA911E7569D12EA(iParam2, Vector((fVar11 * 1.25f), ((fVar9 / 2f) - (fVar10 * 0.75f)), 0f) + vVar12) };
		vVar2 = { unk_0x2CA911E7569D12EA(iParam2, Vector((fVar11 * 1.25f), ((-fVar9 / 2f) + (fVar10 * 0.75f)), 0f) + vVar12) };
		iVar17 = unk_0x0F79DCFDE3D6F778(vVar2, vVar1, fVar10, 19, unk_0x33CD235DF1E6A94E(), 4);
		if (unk_0x819B6E76423AE494(iVar17, &iVar13, &uVar14, &uVar15, &uVar16) != 2)
		{
		}
		if (iVar13 != 0)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_44()
{
	bool bVar0;
	
	if ((unk_0xE3903F59E2F22150() - iLocal_148) > 100)
	{
		if ((unk_0xE3903F59E2F22150() - Local_109[iLocal_147 /*18*/].f_12) > 500)
		{
			if (unk_0x765F6FEEFF39224F(Local_109[iLocal_147 /*18*/]) && !unk_0xBC2FC12AD0FBF72E(Local_109[iLocal_147 /*18*/]))
			{
				bVar0 = true;
				if (!Local_109[iLocal_147 /*18*/].f_9 && unk_0xF0D230FB550CD6EB(Local_109[iLocal_147 /*18*/], 0))
				{
					bVar0 = false;
				}
				if (bVar0)
				{
					if (((unk_0x1CE8F0A08E65CA6A(Local_109[iLocal_147 /*18*/], sLocal_134, func_27(iLocal_147), 3) && unk_0x204DEACC5BECF723(Local_109[iLocal_147 /*18*/], sLocal_134, func_27(iLocal_147)) > 0.5f) && unk_0x204DEACC5BECF723(Local_109[iLocal_147 /*18*/], sLocal_134, func_27(iLocal_147)) < 0.75f) || Local_109[iLocal_147 /*18*/].f_9)
					{
						unk_0xD9F039B57895690F("scr_rcpap1_camera", Local_109[iLocal_147 /*18*/].f_2, 0.019f, -0.01f, 0.046f, 0f, 0f, -180f, 1065353216, 0, 0, 0);
						if ((iLocal_147 % 3) == 0)
						{
							unk_0xEC95D37A139F1D5C(-1, "SHUTTER_FLASH", unk_0xFBB1F99A825CAB09(Local_109[iLocal_147 /*18*/].f_2, true), "CAMERA_FLASH_SOUNDSET", 0, 0, 0);
						}
						else if ((iLocal_147 % 3) == 1)
						{
							unk_0xEC95D37A139F1D5C(-1, "SHUTTER", unk_0xFBB1F99A825CAB09(Local_109[iLocal_147 /*18*/].f_2, true), "CAMERA_FLASH_SOUNDSET", 0, 0, 0);
						}
						else
						{
							unk_0xEC95D37A139F1D5C(-1, "FLASH", unk_0xFBB1F99A825CAB09(Local_109[iLocal_147 /*18*/].f_2, true), "CAMERA_FLASH_SOUNDSET", 0, 0, 0);
						}
						Local_109[iLocal_147 /*18*/].f_12 = unk_0xE3903F59E2F22150();
					}
					iLocal_148 = unk_0xE3903F59E2F22150();
				}
			}
			iLocal_147++;
			if (iLocal_147 >= Local_109)
			{
				iLocal_147 = 0;
			}
		}
	}
}

void func_45(int iParam0, int iParam1)
{
	if (!unk_0xBC2FC12AD0FBF72E(Local_109[iParam1 /*18*/]) && !unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		if (!unk_0x910FF514D7BC5674(Local_109[iParam1 /*18*/], iParam0, 20f))
		{
			if (unk_0xD76D6BCC14B95CE1(Local_109[iParam1 /*18*/], -875674219) != 1)
			{
				unk_0x11C4AF4137F2A4B5(Local_109[iParam1 /*18*/], iParam0, 0);
			}
		}
		else if ((unk_0xE3903F59E2F22150() - Local_109[iParam1 /*18*/].f_13) > 2000)
		{
			if (!unk_0x1CE8F0A08E65CA6A(Local_109[iParam1 /*18*/], sLocal_134, func_27(iParam1), 3))
			{
				unk_0x108754262311D34F(Local_109[iParam1 /*18*/], sLocal_134, func_27(iParam1), 4f, -4f, -1, 0, 0, 0, 0, 0);
				Local_109[iParam1 /*18*/].f_13 = unk_0xE3903F59E2F22150();
			}
		}
	}
}

void func_46(int iParam0, int iParam1)
{
	vector3 vVar0;
	
	if (!unk_0xBC2FC12AD0FBF72E(Local_109[iParam1 /*18*/]) && !unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		vVar0 = { unk_0x2CA911E7569D12EA(iParam0, func_48(iParam1)) };
		switch (Local_109[iParam1 /*18*/].f_16)
		{
			case 0:
				func_47(vVar0, iParam1, iParam0);
				Local_109[iParam1 /*18*/].f_16++;
				break;
			
			case 1:
				if (unk_0xD76D6BCC14B95CE1(Local_109[iParam1 /*18*/], 713668775) != 1 || vdist(vVar0, Local_109[iParam1 /*18*/].f_6) > 5f)
				{
					Local_109[iParam1 /*18*/].f_16++;
				}
				break;
			
			case 2:
				if (vdist(vVar0, Local_109[iParam1 /*18*/].f_6) > 10f)
				{
					func_47(vVar0, iParam1, iParam0);
					Local_109[iParam1 /*18*/].f_16++;
				}
				else
				{
					func_45(iParam0, iParam1);
				}
				break;
			
			case 3:
				if (vdist2(vVar0, Local_109[iParam1 /*18*/].f_3) > 25f)
				{
					func_47(vVar0, iParam1, iParam0);
				}
				if (unk_0xD76D6BCC14B95CE1(Local_109[iParam1 /*18*/], 713668775) != 1)
				{
					Local_109[iParam1 /*18*/].f_16 = (Local_109[iParam1 /*18*/].f_16 - 1);
				}
				break;
			}
	}
}

void func_47(vector3 vParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	float fVar1;
	
	vVar0 = { func_35(unk_0xFBB1F99A825CAB09(iParam2, true) - vParam0) };
	fVar1 = unk_0x174C48E9E544E9A8(vVar0.x, vVar0.y);
	Local_109[iParam1 /*18*/].f_3 = { vParam0 };
	unk_0xED68CDDDE25A144E(Local_109[iParam1 /*18*/]);
	if (vdist(vParam0, Local_109[iParam1 /*18*/].f_6) < 2f)
	{
		unk_0x7E268975AF5EA74F(Local_109[iParam1 /*18*/], Local_109[iParam1 /*18*/].f_3, 1f, -1, 0.5f, 512, fVar1);
	}
	else
	{
		unk_0x7E268975AF5EA74F(Local_109[iParam1 /*18*/], Local_109[iParam1 /*18*/].f_3, 2f, -1, 0.5f, 512, fVar1);
	}
}

Vector3 func_48(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -0.6578f, 3.328f, 0.2129f;
			break;
		
		case 1:
			return 0.5781f, 3.1584f, 0.2203f;
			break;
		
		case 2:
			return 1.6953f, 2.4036f, 0.1413f;
			break;
		
		case 3:
			return 2.2778f, 1.3153f, 0.1534f;
			break;
		
		case 4:
			return 2.0457f, 0.0073f, 0.2707f;
			break;
		
		case 5:
			return 2.097f, -1.2978f, 0.23f;
			break;
		
		case 6:
			return 2.0693f, -3.2216f, 0.3726f;
			break;
		
		case 7:
			return 1.0275f, -3.6726f, 0.155f;
			break;
		
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_49()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	iVar0 = 0;
	while (iVar0 < Local_109)
	{
		if (unk_0xE38E3CF1625A4145(Local_109[iVar0 /*18*/].f_1))
		{
			if (unk_0xBC2FC12AD0FBF72E(Local_109[iVar0 /*18*/]))
			{
				unk_0x1ABDB383C83A336A(&(Local_109[iVar0 /*18*/].f_1));
			}
			else if (unk_0xF0D230FB550CD6EB(Local_109[iVar0 /*18*/], 0))
			{
				unk_0x1ABDB383C83A336A(&(Local_109[iVar0 /*18*/].f_1));
			}
		}
		else if (!unk_0xBC2FC12AD0FBF72E(Local_109[iVar0 /*18*/]) && !unk_0xF0D230FB550CD6EB(Local_109[iVar0 /*18*/], 0))
		{
			Local_109[iVar0 /*18*/].f_1 = func_183(Local_109[iVar0 /*18*/], 1, 145);
			unk_0x1C95CD840303FC37(Local_109[iVar0 /*18*/].f_1, "EP_PAPBLIP");
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_108)
	{
		if (unk_0x91D5C8283D19AF49(Local_108[iVar0 /*18*/], 0))
		{
			if (unk_0xE38E3CF1625A4145(Local_108[iVar0 /*18*/].f_1))
			{
				vVar1 = { unk_0x7BC3899BF7085A7D(Local_108[iVar0 /*18*/].f_1) };
				vVar2 = { Local_108[iVar0 /*18*/].f_8 };
				vVar1.x = (vVar1.x + ((vVar2.x - vVar1.x) / 10f));
				vVar1.y = (vVar1.y + ((vVar2.y - vVar1.y) / 10f));
				vVar1.z = (vVar1.z + ((vVar2.z - vVar1.z) / 10f));
				unk_0xA0220BF0AB292278(Local_108[iVar0 /*18*/].f_1, vVar1);
				if (func_52(Local_108[iVar0 /*18*/], 1, 0, 0, 0, 0, 1, 0, 1))
				{
					unk_0x1ABDB383C83A336A(&(Local_108[iVar0 /*18*/].f_1));
				}
			}
			else if (!func_52(Local_108[iVar0 /*18*/], 1, 0, 0, 0, 0, 1, 0, 1))
			{
				Local_108[iVar0 /*18*/].f_1 = func_50(Local_108[iVar0 /*18*/].f_8, 0);
				unk_0xB9E84A421C105943(Local_108[iVar0 /*18*/].f_1, 1);
				unk_0x1C95CD840303FC37(Local_108[iVar0 /*18*/].f_1, "EP_PAPBLIP");
				unk_0xC51C58C963968740(Local_108[iVar0 /*18*/].f_1, 9);
			}
		}
		else if (unk_0xE38E3CF1625A4145(Local_108[iVar0 /*18*/].f_1))
		{
			unk_0x1ABDB383C83A336A(&(Local_108[iVar0 /*18*/].f_1));
		}
		iVar0++;
	}
}

int func_50(vector3 vParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x2C0ED4741A007C6A(vParam0);
	unk_0xCE5C49921A521962(iVar0, func_51(unk_0xB331FCEB94EB05C8(), 1f, 1f));
	unk_0x1C316779E36C1967(iVar0, bParam1);
	return iVar0;
}

float func_51(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_52(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
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
			iVar2 = func_53(iParam0, (iVar0 - 1), bParam6, iParam7);
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

int func_53(int iParam0, int iParam1, bool bParam2, int iParam3)
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

void func_54(int iParam0, vector3 vParam1, float fParam2, char* sParam3, char* sParam4, char* sParam5)
{
	if (!unk_0xBC2FC12AD0FBF72E(Local_109[iParam0 /*18*/]))
	{
		if (vdist(unk_0xFBB1F99A825CAB09(Local_109[iParam0 /*18*/], true), vParam1) > 1.5f)
		{
			if (unk_0xD76D6BCC14B95CE1(Local_109[iParam0 /*18*/], 713668775) != 1)
			{
				unk_0x7E268975AF5EA74F(Local_109[iParam0 /*18*/], vParam1, 2f, -1, 0.25f, 0, fParam2);
			}
		}
		else if (unk_0x7EECA16E87982278((func_55(unk_0xC472E34C8FBEC678(Local_109[iParam0 /*18*/])) - func_55(fParam2))) > 10f)
		{
			if (unk_0xD76D6BCC14B95CE1(Local_109[iParam0 /*18*/], 1920390111) != 1)
			{
				unk_0x43EAD1F94EC8561F(Local_109[iParam0 /*18*/], fParam2, 0);
			}
		}
		else
		{
			switch (Local_109[iParam0 /*18*/].f_16)
			{
				case 0:
					if (unk_0x786AF4A44E1B5B4B(sParam5))
					{
						if (!unk_0x1CE8F0A08E65CA6A(Local_109[iParam0 /*18*/], sParam3, sParam4, 3))
						{
							unk_0x108754262311D34F(Local_109[iParam0 /*18*/], sParam3, sParam4, 4f, -4f, -1, 1, 0, 0, 0, 0);
						}
					}
					else if (!unk_0x1CE8F0A08E65CA6A(Local_109[iParam0 /*18*/], sParam3, sParam4, 3))
					{
						unk_0x108754262311D34F(Local_109[iParam0 /*18*/], sParam3, sParam4, 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
					else if (unk_0x204DEACC5BECF723(Local_109[iParam0 /*18*/], sParam3, sParam4) > 0.99f)
					{
						unk_0x108754262311D34F(Local_109[iParam0 /*18*/], sParam3, sParam5, 4f, -4f, -1, 0, 0, 0, 0, 0);
						Local_109[iParam0 /*18*/].f_16++;
					}
					break;
				
				case 1:
					if (!unk_0x1CE8F0A08E65CA6A(Local_109[iParam0 /*18*/], sParam3, sParam5, 3))
					{
						unk_0x108754262311D34F(Local_109[iParam0 /*18*/], sParam3, sParam5, 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
					else if (unk_0x204DEACC5BECF723(Local_109[iParam0 /*18*/], sParam3, sParam5) > 0.99f)
					{
						unk_0x108754262311D34F(Local_109[iParam0 /*18*/], sParam3, sParam4, 4f, -4f, -1, 0, 0, 0, 0, 0);
						Local_109[iParam0 /*18*/].f_16 = 0;
					}
					break;
				}
			}
	}
}

float func_55(float fParam0)
{
	if (fParam0 >= 180f)
	{
		fParam0 = (fParam0 - 360f);
	}
	if (fParam0 < -180f)
	{
		fParam0 = (fParam0 + 360f);
	}
	return fParam0;
}

var func_56(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return Local_109[func_61(iParam0) /*18*/];
	}
	return Local_109[func_59(iParam0) /*18*/];
}

void func_57(int iParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	if ((iParam0 % 2) == 1)
	{
		Local_108[iParam0 /*18*/] = unk_0xC651C43AB13A15E5(joaat("vader"), vParam1, fParam2, true, true, false);
	}
	else
	{
		Local_108[iParam0 /*18*/] = unk_0xC651C43AB13A15E5(joaat("cavalcade2"), vParam1, fParam2, true, true, false);
		unk_0xD6D2420F0051065A(Local_108[iParam0 /*18*/], 0);
	}
	unk_0x1B2303F9DC2D90D5(Local_108[iParam0 /*18*/], 1084227584);
	unk_0xA155CCFA52A9A0C4(Local_108[iParam0 /*18*/], true);
	if (bParam3)
	{
		if (!unk_0x765F6FEEFF39224F(func_56(iParam0, 0)))
		{
			func_58(func_61(iParam0), vParam1, fParam2);
		}
		if (!unk_0x765F6FEEFF39224F(func_56(iParam0, 1)))
		{
			func_58(func_59(iParam0), vParam1, fParam2);
		}
		if (!unk_0xBC2FC12AD0FBF72E(func_56(iParam0, 0)) && unk_0x91D5C8283D19AF49(Local_108[iParam0 /*18*/], 0))
		{
			unk_0x094626C0798AE1F8(func_56(iParam0, 0), Local_108[iParam0 /*18*/], -1);
		}
		if (!unk_0xBC2FC12AD0FBF72E(func_56(iParam0, 1)) && unk_0x91D5C8283D19AF49(Local_108[iParam0 /*18*/], 0))
		{
			unk_0x094626C0798AE1F8(func_56(iParam0, 1), Local_108[iParam0 /*18*/], 0);
		}
		unk_0x9FABD0AB045A5D6E(Local_108[iParam0 /*18*/], true, true, 0);
	}
}

void func_58(int iParam0, vector3 vParam1, float fParam2)
{
	Local_109[iParam0 /*18*/] = unk_0x9BA5CF280376EEA4(26, joaat("a_m_y_genstreet_02"), vParam1, fParam2, 1, true);
	unk_0x28F648743D7DE312(Local_109[iParam0 /*18*/], 1, false);
	unk_0x4A852F02088ECC9D(Local_109[iParam0 /*18*/], true);
	unk_0x28F648743D7DE312(Local_109[iParam0 /*18*/], 0, true);
	unk_0x66CDA3DCBCEDF782(Local_109[iParam0 /*18*/], 3);
	unk_0xAD3D24C8070DA056(Local_109[iParam0 /*18*/], true);
	unk_0x28F648743D7DE312(Local_109[iParam0 /*18*/], 17, true);
	unk_0x33F6BE48E356DA27(Local_109[iParam0 /*18*/], 2, false);
	unk_0xFE8201EFB515D77B(Local_109[iParam0 /*18*/], false);
	unk_0x897EF720254BBEA3(Local_109[iParam0 /*18*/], true);
	unk_0x41AAD0031D053A00(Local_109[iParam0 /*18*/], 100);
	unk_0x5BFA1F420ED32CFF(Local_109[iParam0 /*18*/], -957453492);
	unk_0x5FEE418CE11E6DDE(Local_109[iParam0 /*18*/], 101, true);
	unk_0x5FEE418CE11E6DDE(Local_109[iParam0 /*18*/], 185, false);
	unk_0x7FC2040EB34E0E31(Local_109[iParam0 /*18*/], 300, 0);
	unk_0x93AA93DA1B137032(Local_109[iParam0 /*18*/], 3, (iParam0 % 2), floor((to_float(iParam0) / 2f)), 0);
	if (Global_3 || bLocal_56)
	{
		unk_0x9611832841071B69(Local_109[iParam0 /*18*/], true);
		unk_0x7FC2040EB34E0E31(Local_109[iParam0 /*18*/], 500, 0);
	}
	unk_0x9E280E42C0773A3A(Local_109[iParam0 /*18*/], 1);
	unk_0x28F648743D7DE312(Local_109[iParam0 /*18*/], 2, true);
	unk_0xA9E472293522522F(Local_109[iParam0 /*18*/], 2f);
	unk_0xFE8201EFB515D77B(Local_109[iParam0 /*18*/], false);
	unk_0x2B4A2E9ED65D5C93(Local_109[iParam0 /*18*/], 0);
	Local_109[iParam0 /*18*/].f_2 = unk_0x7CA67831169E8AA6(joaat("prop_pap_camera_01"), unk_0x61B226C460A8FCC2(Local_109[iParam0 /*18*/], 28422, 0f, 0f, 0f), true, true, false);
	unk_0x2F0A6390D863D337(Local_109[iParam0 /*18*/].f_2, Local_109[iParam0 /*18*/], unk_0xFCAF61876D23D31D(Local_109[iParam0 /*18*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	if (unk_0x765F6FEEFF39224F(Local_109[0 /*18*/].f_2))
	{
		unk_0x0CDD28A9DFCE2FCE(Local_109[0 /*18*/].f_2, false, 0);
	}
	Local_109[iParam0 /*18*/].f_17 = unk_0xE80842D7B53F8525(Local_109[iParam0 /*18*/]);
}

int func_59(int iParam0)
{
	return iParam0 * 2 + 1;
}

void func_60(int iParam0)
{
	if ((iParam0 % 2) == 1)
	{
		Local_109[iParam0 /*18*/].f_14 = ((iParam0 - 1) / 2);
	}
	else
	{
		Local_109[iParam0 /*18*/].f_14 = (iParam0 / 2);
	}
}

int func_61(int iParam0)
{
	return iParam0 * 2;
}

void func_62(int iParam0)
{
	Local_108[iParam0 /*18*/].f_17 = 0;
}

int func_63()
{
	bool bVar0;
	bool bVar1;
	
	if (!unk_0xBC2FC12AD0FBF72E(iLocal_67))
	{
		bVar0 = false;
		if (func_66())
		{
			if (unk_0x765F6FEEFF39224F(func_65()))
			{
				if (vdist(unk_0xFBB1F99A825CAB09(func_65(), true), vLocal_53) < 5f && unk_0x8BB475EA09C9A0EB(iLocal_70) < 1f)
				{
					bVar0 = true;
				}
			}
		}
		else if (unk_0x91D5C8283D19AF49(iLocal_70, 0))
		{
			if (!unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iLocal_70, 0) && unk_0x10930B9CAD4111C2(iLocal_67, iLocal_70, 0))
			{
				fLocal_151 = (fLocal_151 + unk_0x7C475FA8D877007F());
			}
			else if (fLocal_151 > 0f)
			{
				fLocal_151 = 0f;
			}
		}
		if (bVar0)
		{
			fLocal_150 = (fLocal_150 + unk_0x7C475FA8D877007F());
		}
		else if (fLocal_150 > 0f)
		{
			fLocal_150 = 0f;
		}
		if (fLocal_150 > 30f)
		{
			bVar1 = true;
		}
		if (iLocal_57)
		{
			if (!unk_0xEE984ED4E4A374BE(iLocal_67, iLocal_70))
			{
				if (unk_0x3AF2B3B68DD52355(iLocal_67))
				{
					bVar1 = true;
				}
				iLocal_57 = 0;
			}
		}
		if (!iLocal_57)
		{
			if (unk_0xEE984ED4E4A374BE(iLocal_67, iLocal_70))
			{
				iLocal_57 = 1;
			}
		}
		if (fLocal_151 > 30f)
		{
			bVar1 = true;
		}
		if (!unk_0x91D5C8283D19AF49(iLocal_70, 0) && (!bLocal_129 || iLocal_45 == 1))
		{
			bVar1 = true;
		}
		if (vdist(vLocal_53, vLocal_52) > 30f)
		{
			bVar1 = true;
		}
		if (((unk_0x91D5C8283D19AF49(iLocal_70, 0) && func_64(iLocal_70)) && (!bLocal_129 || iLocal_45 == 1)) && vdist(unk_0xFBB1F99A825CAB09(iLocal_67, true), vLocal_50) > 15f)
		{
			bVar1 = true;
		}
		if (unk_0x91D5C8283D19AF49(iLocal_70, 0) && unk_0x8AE34E8B10270D31(iLocal_70))
		{
			bVar1 = true;
		}
		if (bVar1)
		{
			if (unk_0x9EC3B269A34A2BEE(0, 2) == 1)
			{
				sLocal_132 = "REPAP_GUP";
			}
			else
			{
				sLocal_132 = "REPAP_GUP2";
			}
			return 1;
		}
	}
	return 0;
}

int func_64(int iParam0)
{
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		if (unk_0x91D5C8283D19AF49(iParam0, 0))
		{
			if (((unk_0x67001C5CC88C66A8(iParam0, 0, 7000) || unk_0x67001C5CC88C66A8(iParam0, 3, 30000)) || unk_0x67001C5CC88C66A8(iParam0, 2, 30000)) || unk_0x67001C5CC88C66A8(iParam0, 1, 40000))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_65()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar1 = -1;
	fVar2 = 999999f;
	iVar0 = 0;
	while (iVar0 < Local_109)
	{
		if ((unk_0x765F6FEEFF39224F(Local_109[iVar0 /*18*/]) && !unk_0xBC2FC12AD0FBF72E(Local_109[iVar0 /*18*/])) && !unk_0xBC2FC12AD0FBF72E(iLocal_67))
		{
			if (vdist2(vLocal_53, Local_109[iVar0 /*18*/].f_6) < fVar2)
			{
				fVar2 = vdist2(vLocal_53, Local_109[iVar0 /*18*/].f_6);
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != -1)
	{
		return Local_109[iVar1 /*18*/];
	}
	return 0;
}

int func_66()
{
	if (unk_0x91D5C8283D19AF49(iLocal_70, 0))
	{
		if (!unk_0xBC2FC12AD0FBF72E(iLocal_67))
		{
			if (unk_0x10930B9CAD4111C2(iLocal_67, iLocal_70, 0) && unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iLocal_70, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_67()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_109)
	{
		if (func_68(Local_109[iVar0 /*18*/], 0, 0))
		{
			return 1;
		}
		if (unk_0x765F6FEEFF39224F(Local_109[iVar0 /*18*/]))
		{
			if (unk_0xBC2FC12AD0FBF72E(Local_109[iVar0 /*18*/]) || unk_0xD62C4419A41F106A(Local_109[iVar0 /*18*/], 0))
			{
				if (iLocal_138[iVar0] > 50)
				{
					iLocal_110++;
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_68(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	int iVar1;
	
	if (!unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		vVar0 = { unk_0xFBB1F99A825CAB09(iParam0, true) };
		if (unk_0x9ED464AAA493C8EF(unk_0x33CD235DF1E6A94E(), 7))
		{
			unk_0x96C4B46F194803A7(unk_0x33CD235DF1E6A94E(), &iVar1, 1);
		}
		if (!bParam2)
		{
			if (unk_0x416C37C19CCE0077(vVar0, 5f, 1))
			{
				return 1;
			}
		}
		if (vdist2(vVar0, vLocal_52) < 400f)
		{
			if (!bParam2)
			{
				if ((unk_0x9ED464AAA493C8EF(unk_0x33CD235DF1E6A94E(), 6) && !unk_0xB15E06E3E9C9AEA5(unk_0x33CD235DF1E6A94E())) && unk_0x5DACF31D3AC5ED8D(unk_0x33CD235DF1E6A94E()))
				{
					return 1;
				}
			}
			if ((iVar1 == joaat("weapon_petrolcan") && unk_0x5DACF31D3AC5ED8D(unk_0x33CD235DF1E6A94E())) && vdist2(vLocal_52, vVar0) < 9f)
			{
				return 1;
			}
			if (((unk_0xAC6A512C64D9A9C0(unk_0x95B959F18401C09A(), iParam0) || unk_0xC2ECB90E2DFA5802(unk_0x95B959F18401C09A(), iParam0)) && (func_69(vLocal_52, iParam0) && vdist2(vLocal_52, unk_0xFBB1F99A825CAB09(iParam0, true)) < 100f)) && unk_0x9ED464AAA493C8EF(unk_0x33CD235DF1E6A94E(), 6))
			{
				return 1;
			}
			if (iLocal_137 > 150)
			{
				return 1;
			}
		}
		if (unk_0x4141DE783FB62352(unk_0x61B226C460A8FCC2(iParam0, 31086, 0f, 0f, 0f), 6f))
		{
			return 1;
		}
	}
	else if (unk_0x765F6FEEFF39224F(iParam0) && iParam1)
	{
		return 1;
	}
	return 0;
}

int func_69(vector3 vParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	vVar0 = { unk_0xFBB1F99A825CAB09(iParam1, true) };
	vVar1 = { unk_0x2CA911E7569D12EA(iParam1, 0f, 1f, 0f) - vVar0 };
	vVar2 = { vParam0 - vVar0 };
	fVar3 = func_70(vVar1, vVar2);
	if (fVar3 > 0.5f)
	{
		return 1;
	}
	return 0;
}

float func_70(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

void func_71()
{
	if (iLocal_45 != 11)
	{
		if (unk_0xE38E3CF1625A4145(iLocal_123))
		{
			unk_0x1ABDB383C83A336A(&iLocal_123);
		}
		if (unk_0xE38E3CF1625A4145(iLocal_124))
		{
			unk_0x1ABDB383C83A336A(&iLocal_124);
		}
		if (unk_0xE38E3CF1625A4145(iLocal_121))
		{
			unk_0x1ABDB383C83A336A(&iLocal_121);
		}
		iLocal_46 = iLocal_45;
		iLocal_45 = 11;
	}
	else if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) > 0)
	{
		if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) < 3)
		{
			if (!func_74())
			{
				func_72("REPAP_COP1");
			}
		}
		else
		{
			func_181(5);
		}
	}
	else if (func_5(&Local_139, cLocal_133, "REPAP_COP2", 4, 0, 0, 0))
	{
		iLocal_45 = iLocal_46;
	}
}

void func_72(char* sParam0)
{
	if ((unk_0xE3903F59E2F22150() - iLocal_197) > 5000)
	{
		if (!func_73())
		{
			if (func_5(&Local_139, cLocal_133, sParam0, 4, 0, 0, 0))
			{
				iLocal_197 = unk_0xE3903F59E2F22150();
			}
		}
	}
}

int func_73()
{
	if (Global_15866 != 0 || unk_0x12BF789190D82474())
	{
		return 1;
	}
	return 0;
}

bool func_74()
{
	if (!unk_0xBC2FC12AD0FBF72E(iLocal_67) && vdist2(vLocal_52, vLocal_53) < 400f)
	{
		if (!iLocal_111 && (unk_0xE3903F59E2F22150() - iLocal_113) > 5000)
		{
			if (iLocal_63 > 10)
			{
				iLocal_111 = 1;
				iLocal_63 = 0;
			}
		}
		if ((!iLocal_116 && !iLocal_111) && (unk_0xE3903F59E2F22150() - iLocal_117) > 4000)
		{
			if (unk_0x9ED464AAA493C8EF(unk_0x33CD235DF1E6A94E(), 6) && unk_0x5DACF31D3AC5ED8D(unk_0x33CD235DF1E6A94E()))
			{
				if (iLocal_118 > 2)
				{
					if (!Global_3 && !bLocal_56)
					{
						func_181(5);
					}
				}
				else
				{
					iLocal_116 = 1;
					iLocal_118++;
				}
			}
		}
		if (((!iLocal_114 && !iLocal_111) && !iLocal_116) && (unk_0xE3903F59E2F22150() - iLocal_115) > 15000)
		{
			if (unk_0x9ED464AAA493C8EF(unk_0x33CD235DF1E6A94E(), 6) && !unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
			{
				iLocal_114 = 1;
			}
		}
		if (iLocal_111)
		{
			if (iLocal_112)
			{
				if (func_5(&Local_139, cLocal_133, "REPAP_HIT", 4, 0, 0, 0))
				{
					iLocal_113 = unk_0xE3903F59E2F22150();
					iLocal_111 = 0;
				}
			}
			else if (func_5(&Local_139, cLocal_133, "REPAP_HUR", 4, 0, 0, 0))
			{
				iLocal_113 = unk_0xE3903F59E2F22150();
				iLocal_111 = 0;
				iLocal_112 = 1;
			}
		}
		if (iLocal_116)
		{
			if (func_5(&Local_139, cLocal_133, "REPAP_SHOOT", 4, 0, 0, 0))
			{
				iLocal_117 = unk_0xE3903F59E2F22150();
				iLocal_116 = 0;
			}
		}
		if (iLocal_114)
		{
			if (func_5(&Local_139, cLocal_133, "REPAP_GUN", 4, 0, 0, 0))
			{
				iLocal_115 = unk_0xE3903F59E2F22150();
				iLocal_114 = 0;
			}
		}
	}
	return ((iLocal_114 || iLocal_116) || iLocal_111);
}

void func_75()
{
	if (!unk_0xBC2FC12AD0FBF72E(iLocal_67))
	{
		unk_0x897EF720254BBEA3(iLocal_67, true);
		unk_0xD2E80177F27FD43F(255, iLocal_55, 1862763509);
		if (!Global_3 && !bLocal_56)
		{
			unk_0x5FEE418CE11E6DDE(iLocal_67, 317, true);
			unk_0x4A852F02088ECC9D(iLocal_67, false);
		}
	}
	func_79(-1, 0);
	func_76();
	unk_0x53F48527D958ED8D(62);
	func_274();
}

void func_76()
{
	func_77();
}

int func_77()
{
	if (func_78(0))
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

bool func_78(bool bParam0)
{
	if (!bParam0 && unk_0x1BCDA92AD0A7835B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x0E4018692D92041D(Global_71838, 0);
}

void func_79(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_97();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_96(iParam0))
	{
		func_95(iParam0, iParam1);
		if (!func_94(51))
		{
			func_90("RE_REWARD", 1, 0, 4000, 10000, func_93(), 0, 138, 0);
			func_89(51);
		}
		if (func_88(iParam0))
		{
			Global_106565.f_24989.f_2 = 3;
		}
		if (func_87(iParam0, iParam1) != 322)
		{
			func_81(func_87(iParam0, iParam1), vLocal_43.x, vLocal_43.y);
		}
		Global_106553 = iParam1;
		if (Global_106551 == 0)
		{
			if (((Global_106554 == 1 || Global_106554 == 5) || Global_106554 == 11) || Global_106554 == 25)
			{
				func_80(2);
			}
			else if ((Global_106554 == 26 || Global_106554 == 8) || Global_106554 == 17)
			{
				func_80(7);
			}
			else
			{
				func_80(1);
			}
		}
	}
}

void func_80(int iParam0)
{
	Global_106551 = iParam0;
}

void func_81(int iParam0, var uParam1, var uParam2)
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
		func_85((891 + iParam0), 1, -1, 1);
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
		func_82();
	}
}

void func_82()
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
		func_84(13, floor(Global_106565.f_10188.f_3853));
	}
	if (!unk_0xDC17890B0B8B5081())
	{
		if (!Global_71590)
		{
			if (func_83() == 2 == 0 && !unk_0xB331FCEB94EB05C8())
			{
				if (unk_0xB16BC34F6CB4A57A())
				{
					Global_106299 = 0;
				}
				if (!Global_56494)
				{
					func_77();
				}
			}
		}
	}
}

int func_83()
{
	return Global_25765;
}

int func_84(int iParam0, int iParam1)
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

int func_85(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_86();
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

int func_86()
{
	return Global_1312745;
}

int func_87(int iParam0, int iParam1)
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

int func_88(int iParam0)
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

void func_89(int iParam0)
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

void func_90(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_91(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_91(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_92();
	}
}

void func_92()
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

int func_93()
{
	func_20();
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

int func_94(int iParam0)
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

void func_95(int iParam0, int iParam1)
{
	unk_0x8950ED5730F62EE8(&(Global_106565.f_24989.f_8[iParam0]), iParam1);
}

int func_96(int iParam0)
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

int func_97()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0xD178EF744F20B712(), 64);
	uVar1 = func_98(Var0);
	return uVar1;
}

int func_98(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

int func_99()
{
	if (Global_26001)
	{
		func_80(4);
		return 1;
	}
	return 0;
}

void func_100()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_47 != 5)
	{
		iLocal_47 = 5;
	}
	if (unk_0xE38E3CF1625A4145(iLocal_121))
	{
		unk_0x1ABDB383C83A336A(&iLocal_121);
	}
	switch (iLocal_130)
	{
		case 0:
			if (!unk_0xBC2FC12AD0FBF72E(iLocal_67))
			{
				unk_0xECCD4FDA45197F97(iLocal_67, unk_0x33CD235DF1E6A94E(), 300f, -1, 0, 0);
			}
			iVar0 = 0;
			while (iVar0 < Local_109)
			{
				if (unk_0x765F6FEEFF39224F(Local_109[iVar0 /*18*/]))
				{
					if (unk_0xC30D5C4DCAC8020A(Local_109[iVar0 /*18*/]) && vdist2(unk_0xFBB1F99A825CAB09(Local_109[iVar0 /*18*/], true), unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true)) > 900f)
					{
						if (unk_0x765F6FEEFF39224F(Local_109[iVar0 /*18*/].f_2))
						{
							unk_0xEC26F4BFC9942A0C(&(Local_109[iVar0 /*18*/].f_2));
						}
						unk_0x4B8B69DAE5BAC592(&(Local_109[iVar0 /*18*/]));
					}
				}
				if (unk_0xE38E3CF1625A4145(Local_109[iVar0 /*18*/].f_1))
				{
					unk_0x1ABDB383C83A336A(&(Local_109[iVar0 /*18*/].f_1));
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < Local_108)
			{
				if (unk_0x765F6FEEFF39224F(Local_108[iVar0 /*18*/]))
				{
					if (unk_0xC30D5C4DCAC8020A(Local_108[iVar0 /*18*/]) && vdist2(unk_0xFBB1F99A825CAB09(Local_108[iVar0 /*18*/], true), unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true)) > 900f)
					{
						unk_0x7AC8DF0B83EB4C6B(&(Local_108[iVar0 /*18*/]));
					}
				}
				if (unk_0xE38E3CF1625A4145(Local_108[iVar0 /*18*/].f_1))
				{
					unk_0x1ABDB383C83A336A(&(Local_108[iVar0 /*18*/].f_1));
				}
				iVar0++;
			}
			settimera(0);
			iLocal_203 = 0;
			iLocal_130++;
			break;
		
		case 1:
			iVar1 = 0;
			iVar0 = 0;
			while (iVar0 < Local_109)
			{
				if ((unk_0x765F6FEEFF39224F(Local_109[iVar0 /*18*/]) && !unk_0xBC2FC12AD0FBF72E(Local_109[iVar0 /*18*/])) && !unk_0xD62C4419A41F106A(Local_109[iVar0 /*18*/], 0))
				{
					iVar1++;
					func_46(unk_0x33CD235DF1E6A94E(), iVar0);
					if (unk_0xC30D5C4DCAC8020A(Local_109[iVar0 /*18*/]) && vdist2(unk_0xFBB1F99A825CAB09(Local_109[iVar0 /*18*/], true), unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true)) > 2500f)
					{
						if (unk_0x765F6FEEFF39224F(Local_109[iVar0 /*18*/].f_2))
						{
							unk_0xEC26F4BFC9942A0C(&(Local_109[iVar0 /*18*/].f_2));
						}
						unk_0x4B8B69DAE5BAC592(&(Local_109[iVar0 /*18*/]));
					}
				}
				iVar0++;
			}
			if (!iLocal_203)
			{
				if (vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), unk_0xFBB1F99A825CAB09(func_65(), true)) < 100f)
				{
					iVar2 = unk_0x9EC3B269A34A2BEE(0, 3);
					if (func_19() == 1)
					{
						func_18(&Local_139, 6);
						func_18(&Local_139, 7);
						func_18(&Local_139, 8);
						switch (iVar2)
						{
							case 0:
								func_17(&Local_139, 6, func_65(), "PAP1ESCAPE", 0, 1);
								if (unk_0x765F6FEEFF39224F(Local_139[6 /*10*/]) && !unk_0xBC2FC12AD0FBF72E(Local_139[6 /*10*/]))
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_PAP1", 4, 0, 0, 0))
									{
										iLocal_203 = 1;
									}
								}
								break;
							
							case 1:
								func_17(&Local_139, 7, func_65(), "PAP2ESCAPE", 0, 1);
								if (unk_0x765F6FEEFF39224F(Local_139[7 /*10*/]) && !unk_0xBC2FC12AD0FBF72E(Local_139[7 /*10*/]))
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_PAP2", 4, 0, 0, 0))
									{
										iLocal_203 = 1;
									}
								}
								break;
							
							case 2:
								func_17(&Local_139, 8, func_65(), "PAP3ESCAPE", 0, 1);
								if (unk_0x765F6FEEFF39224F(Local_139[8 /*10*/]) && !unk_0xBC2FC12AD0FBF72E(Local_139[8 /*10*/]))
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_PAP3", 4, 0, 0, 0))
									{
										iLocal_203 = 1;
									}
								}
								break;
						}
					}
					else if (func_19() == 2)
					{
						func_18(&Local_139, 6);
						func_18(&Local_139, 5);
						iVar2 = unk_0x9EC3B269A34A2BEE(0, 3);
						switch (iVar2)
						{
							case 0:
								func_17(&Local_139, 6, func_65(), "PAP1ESCAPE", 0, 1);
								if (unk_0x765F6FEEFF39224F(Local_139[iVar2 /*10*/]) && !unk_0xBC2FC12AD0FBF72E(Local_139[iVar2 /*10*/]))
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_TAKE1T", 4, 0, 0, 0))
									{
										iLocal_203 = 1;
									}
								}
								break;
							
							case 1:
								func_17(&Local_139, 5, func_65(), "PAP2ESCAPE", 0, 1);
								if (unk_0x765F6FEEFF39224F(Local_139[iVar2 /*10*/]) && !unk_0xBC2FC12AD0FBF72E(Local_139[iVar2 /*10*/]))
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_TAKE2T", 4, 0, 0, 0))
									{
										iLocal_203 = 1;
									}
								}
								break;
							
							case 2:
								func_17(&Local_139, 5, func_65(), "PAP2ESCAPE", 0, 1);
								if (unk_0x765F6FEEFF39224F(Local_139[iVar2 /*10*/]) && !unk_0xBC2FC12AD0FBF72E(Local_139[iVar2 /*10*/]))
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_TAKE2T", 4, 0, 0, 0))
									{
										iLocal_203 = 1;
									}
								}
								break;
						}
					}
					else
					{
						func_18(&Local_139, 6);
						func_18(&Local_139, 5);
						iVar2 = unk_0x9EC3B269A34A2BEE(0, 3);
						switch (iVar2)
						{
							case 0:
								func_17(&Local_139, 6, func_65(), "PAP1ESCAPE", 0, 1);
								if (unk_0x765F6FEEFF39224F(Local_139[iVar2 /*10*/]) && !unk_0xBC2FC12AD0FBF72E(Local_139[iVar2 /*10*/]))
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_TAKE1M", 4, 0, 0, 0))
									{
										iLocal_203 = 1;
									}
								}
								break;
							
							case 1:
								func_17(&Local_139, 5, func_65(), "PAP2ESCAPE", 0, 1);
								if (unk_0x765F6FEEFF39224F(Local_139[iVar2 /*10*/]) && !unk_0xBC2FC12AD0FBF72E(Local_139[iVar2 /*10*/]))
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_TAKE2M", 4, 0, 0, 0))
									{
										iLocal_203 = 1;
									}
								}
								break;
							
							case 2:
								func_17(&Local_139, 5, func_65(), "PAP2ESCAPE", 0, 1);
								if (unk_0x765F6FEEFF39224F(Local_139[iVar2 /*10*/]) && !unk_0xBC2FC12AD0FBF72E(Local_139[iVar2 /*10*/]))
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_TAKE2M", 4, 0, 0, 0))
									{
										iLocal_203 = 1;
									}
								}
								break;
							}
						}
					}
			}
			if (func_67())
			{
				func_193();
				func_274();
			}
			if (iVar1 == 0)
			{
				func_274();
			}
			break;
	}
}

void func_101(char* sParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iLocal_47 != 5)
	{
		iLocal_47 = 5;
	}
	if (!iLocal_202)
	{
		iVar0 = 0;
		while (iVar0 < Local_109)
		{
			if (unk_0x765F6FEEFF39224F(Local_109[iVar0 /*18*/]) && !unk_0xBC2FC12AD0FBF72E(Local_109[iVar0 /*18*/]))
			{
				unk_0xED68CDDDE25A144E(Local_109[iVar0 /*18*/]);
				Local_109[iVar0 /*18*/].f_16 = 2;
			}
			iVar0++;
		}
		iLocal_202 = 1;
	}
	iVar0 = 0;
	while (iVar0 < Local_109)
	{
		if (unk_0xE38E3CF1625A4145(Local_109[iVar0 /*18*/].f_1))
		{
			unk_0x1ABDB383C83A336A(&(Local_109[iVar0 /*18*/].f_1));
		}
		if (unk_0x765F6FEEFF39224F(Local_109[iVar0 /*18*/]))
		{
			if (!unk_0xBC2FC12AD0FBF72E(Local_109[iVar0 /*18*/]))
			{
				iVar1++;
				if (!unk_0xBC2FC12AD0FBF72E(iLocal_67))
				{
					if (unk_0xF0D230FB550CD6EB(Local_109[iVar0 /*18*/], 0))
					{
						unk_0x07C339D4328CA16C(Local_109[iVar0 /*18*/], 0, 0);
					}
					else
					{
						func_46(iLocal_67, iVar0);
					}
				}
				else if (unk_0xD76D6BCC14B95CE1(Local_109[iVar0 /*18*/], -1146898486) != 1)
				{
					unk_0xBD4591245C650283(Local_109[iVar0 /*18*/], 1193033728, 0);
				}
			}
			if ((unk_0xC30D5C4DCAC8020A(Local_109[iVar0 /*18*/]) && vdist2(unk_0xFBB1F99A825CAB09(Local_109[iVar0 /*18*/], true), unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true)) > 400f) && vdist2(unk_0xFBB1F99A825CAB09(Local_109[iVar0 /*18*/], true), unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true)) > 400f)
			{
				unk_0x4B8B69DAE5BAC592(&(Local_109[iVar0 /*18*/]));
				if (unk_0x765F6FEEFF39224F(Local_109[iVar0 /*18*/].f_2))
				{
					unk_0xEC26F4BFC9942A0C(&(Local_109[iVar0 /*18*/].f_2));
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_108)
	{
		if (unk_0x765F6FEEFF39224F(Local_108[iVar0 /*18*/]))
		{
			if ((unk_0xC30D5C4DCAC8020A(Local_108[iVar0 /*18*/]) && vdist2(unk_0xFBB1F99A825CAB09(Local_108[iVar0 /*18*/], true), unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true)) > 2500f) && func_52(Local_108[iVar0 /*18*/], 0, 0, 0, 0, 0, 1, 0, 1))
			{
				unk_0x65F544B458249682(&(Local_108[iVar0 /*18*/]));
			}
		}
		if (unk_0xE38E3CF1625A4145(Local_108[iVar0 /*18*/].f_1))
		{
			unk_0x1ABDB383C83A336A(&(Local_108[iVar0 /*18*/].f_1));
		}
		iVar0++;
	}
	if (unk_0x765F6FEEFF39224F(iLocal_67))
	{
		if (unk_0xC30D5C4DCAC8020A(iLocal_67) && vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), vLocal_53) > 2500f)
		{
			unk_0x1F45B4626AC4A4C0(&iLocal_67);
			func_274();
		}
	}
	if (func_67() || func_68(iLocal_67, 1, 1))
	{
		func_181(5);
	}
	iVar0 = 0;
	while (iVar0 < Local_109)
	{
		if (unk_0x765F6FEEFF39224F(Local_109[iVar0 /*18*/]))
		{
			if (!unk_0xBC2FC12AD0FBF72E(Local_109[iVar0 /*18*/]))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	switch (iLocal_130)
	{
		case 0:
			if (unk_0xE38E3CF1625A4145(iLocal_121))
			{
				unk_0x1ABDB383C83A336A(&iLocal_121);
			}
			if (unk_0xE38E3CF1625A4145(iLocal_122))
			{
				unk_0x1ABDB383C83A336A(&iLocal_122);
			}
			if (!unk_0xBC2FC12AD0FBF72E(iLocal_67))
			{
				unk_0xED68CDDDE25A144E(iLocal_67);
				unk_0xA9E472293522522F(iLocal_67, 3f);
			}
			func_102();
			if (vdist(vLocal_52, vLocal_53) < 30f)
			{
				if (func_5(&Local_139, cLocal_133, sParam0, 4, 0, 0, 0))
				{
					iVar0 = 0;
					while (iVar0 < Local_109)
					{
						if (unk_0x765F6FEEFF39224F(Local_109[iVar0 /*18*/]))
						{
							if (!unk_0xBC2FC12AD0FBF72E(Local_109[iVar0 /*18*/]))
							{
								unk_0xED68CDDDE25A144E(Local_109[iVar0 /*18*/]);
							}
						}
						iVar0++;
					}
					iLocal_130++;
				}
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < Local_109)
				{
					if (unk_0x765F6FEEFF39224F(Local_109[iVar0 /*18*/]))
					{
						if (!unk_0xBC2FC12AD0FBF72E(Local_109[iVar0 /*18*/]))
						{
							unk_0xED68CDDDE25A144E(Local_109[iVar0 /*18*/]);
						}
					}
					iVar0++;
				}
				iLocal_130++;
			}
			break;
		
		case 1:
			if (((unk_0x91D5C8283D19AF49(iLocal_70, 0) && unk_0x10930B9CAD4111C2(iLocal_67, iLocal_70, 0)) && !bLocal_129) && unk_0x67FFBB75D2430704(iLocal_70, -1, 0))
			{
				if (vdist(vLocal_53, vLocal_49) < 100f)
				{
					unk_0x99414FB2D30425C1(&iVar2);
					unk_0xB66F510766D11582(0, iLocal_70, 0);
					unk_0x77C4189A8E5C57C2(0, iLocal_70, vLocal_49, 20f, 0, joaat("serrano"), 786599, 10f, 10f);
					unk_0x19A39772525FA2CD(0, iLocal_70, vLocal_49, 288.7089f, 1, 50f, 0);
					unk_0x6ED1018181C54CFB(0, iLocal_70, unk_0xFBB1F99A825CAB09(iLocal_70, true), 5, 10f, 262144, 2f, 2f, 1);
					unk_0x0FF06FD8DEB3AB01(0, iLocal_70, 0);
					unk_0x7E268975AF5EA74F(0, vLocal_50, 1f, -1, 0.25f, 512, fLocal_51);
					unk_0xF6D940C3CF409665(0, "WORLD_HUMAN_SMOKING", 0, 1);
					unk_0xC734F59A13D39AEF(iVar2);
					unk_0x13A2D602CD10CBAC(iLocal_67, iVar2);
					unk_0xA7A57E7757ED035E(&iVar2);
				}
				else
				{
					unk_0x99414FB2D30425C1(&iVar3);
					unk_0xB66F510766D11582(0, iLocal_70, 0);
					unk_0x21D56A8927F5A92A(0, iLocal_70, 15f, 786468);
					unk_0xC734F59A13D39AEF(iVar3);
					unk_0x13A2D602CD10CBAC(iLocal_67, iVar3);
					unk_0xA7A57E7757ED035E(&iVar3);
				}
				iLocal_130 = 1000;
			}
			else
			{
				if (unk_0xF0D230FB550CD6EB(iLocal_67, 0))
				{
					unk_0x07C339D4328CA16C(iLocal_67, 0, 0);
				}
				iLocal_130++;
			}
			break;
		
		case 2:
			if (iVar1 > 0)
			{
				unk_0xECCD4FDA45197F97(iLocal_67, unk_0x33CD235DF1E6A94E(), 3000f, -1, 1, 0);
				iLocal_130 = 1000;
			}
			else
			{
				if (vdist(vLocal_53, vLocal_49) < 100f)
				{
					unk_0x99414FB2D30425C1(&iVar4);
					unk_0x7E268975AF5EA74F(0, vLocal_50, 1f, -1, 0.25f, 512, fLocal_51);
					unk_0xF6D940C3CF409665(0, "WORLD_HUMAN_SMOKING", 0, 1);
					unk_0xC734F59A13D39AEF(iVar4);
					unk_0x13A2D602CD10CBAC(iLocal_67, iVar4);
					unk_0xA7A57E7757ED035E(&iVar4);
				}
				else
				{
					unk_0xBD4591245C650283(iLocal_67, 1193033728, 0);
				}
				iLocal_130 = 1000;
			}
			break;
		
		case 1000:
			if (iVar1 == 0)
			{
				func_274();
			}
			break;
	}
}

void func_102()
{
	Global_14732 = 0;
	func_103();
}

void func_103()
{
	unk_0x3F4DBD0F910C454B();
	Global_16877 = 0;
	if (unk_0x12BF789190D82474())
	{
		unk_0xD92171BC6C48DB90(false);
		Global_15866 = 6;
	}
}

void func_104()
{
	func_102();
	if (!unk_0xBC2FC12AD0FBF72E(iLocal_67) && vdist2(vLocal_52, vLocal_53) < 900f)
	{
		unk_0xED68CDDDE25A144E(iLocal_67);
		if (func_5(&Local_139, cLocal_133, "REPAP_CRZY", 4, 0, 0, 0))
		{
			func_193();
			func_181(10);
		}
		unk_0x0648A75D3F60E864(iLocal_67, -2065892691);
	}
	else
	{
		func_193();
		func_181(10);
	}
}

void func_105()
{
	int iVar0;
	
	switch (iLocal_130)
	{
		case 0:
			func_140();
			if (!unk_0xBC2FC12AD0FBF72E(iLocal_67))
			{
				if (!unk_0xE38E3CF1625A4145(iLocal_121))
				{
					iLocal_121 = func_183(iLocal_67, 0, 145);
				}
				if (unk_0xE38E3CF1625A4145(iLocal_124))
				{
					unk_0x1ABDB383C83A336A(&iLocal_124);
				}
				if (unk_0xE38E3CF1625A4145(iLocal_123))
				{
					unk_0x1ABDB383C83A336A(&iLocal_123);
				}
				unk_0xED68CDDDE25A144E(iLocal_67);
				unk_0x99414FB2D30425C1(&iVar0);
				unk_0x0FF06FD8DEB3AB01(0, iLocal_70, 0);
				unk_0x7E268975AF5EA74F(0, vLocal_50, 1f, 30000, 0.25f, 512, fLocal_51);
				unk_0xF6D940C3CF409665(0, "WORLD_HUMAN_SMOKING", 0, 1);
				unk_0xC734F59A13D39AEF(iVar0);
				unk_0x13A2D602CD10CBAC(iLocal_67, iVar0);
				unk_0xA7A57E7757ED035E(&iVar0);
				if (unk_0xE214B9FCEDF6364A(iLocal_67))
				{
					unk_0x5D94F4D6FE7DA516(iLocal_67);
				}
				func_102();
				iLocal_130++;
			}
			break;
		
		case 1:
			if (!func_73() && !unk_0xBC2FC12AD0FBF72E(iLocal_67))
			{
				if (unk_0x18FB647D79B09657(iLocal_67, vLocal_50, 3f, 3f, 3f, false, true, 0) && unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), vLocal_50, 5f, 5f, 5f, false, true, 0))
				{
					iLocal_130++;
				}
			}
			break;
		
		case 2:
			if (!unk_0xBC2FC12AD0FBF72E(iLocal_67))
			{
				func_139(0);
				if (func_5(&Local_139, cLocal_133, "REPAP_THK", 4, 0, 0, 0))
				{
					func_107(func_19(), 1, 150, 0, 1);
					iLocal_130++;
				}
			}
			break;
		
		case 3:
			if (!func_73() && !unk_0xBC2FC12AD0FBF72E(iLocal_67))
			{
				settimera(0);
				iLocal_130++;
			}
			break;
		
		case 4:
			if (timera() > 2000)
			{
				if (func_106())
				{
					func_75();
				}
			}
			break;
	}
}

int func_106()
{
	return 1;
}

void func_107(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_106565.f_28044[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_106565.f_28044[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_108(Global_106565.f_28044[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		unk_0x75D54ED6C1AD1642(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x12B6E23F244DDB0F(iVar1, iVar0, 1);
	}
}

int func_108(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_138();
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
					func_137(99, 1);
					func_136(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_136(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_136(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_122(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_117(5))
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
							func_136(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_136(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_136(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_117(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_136(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_136(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_136(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_136(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_136(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_136(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_136(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_136(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_136(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x535C9C52117DA0AD())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_136(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_136(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_136(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_136(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_136(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_136(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_117(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_136(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_136(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_136(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_136(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_136(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_136(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_116(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_137(95, iParam3);
					break;
				
				case 1:
					func_137(97, iParam3);
					break;
				
				case 2:
					func_137(96, iParam3);
					break;
			}
			func_137(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor((fVar0 * to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_111(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_111(iVar1);
	}
	iVar5 = (Global_53668[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_53668[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_53668[iVar2] = 2147483647;
				}
				else
				{
					Global_53668[iVar2] = (Global_53668[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_136(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_136(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_136(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_53668[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_53668[iVar2];
			Global_53668[iVar2] = (Global_53668[iVar2] - iParam3);
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
		Global_106565.f_20558.f_233[iVar2 /*69*/].f_2[Global_106565.f_20558.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_106565.f_20558.f_233[iVar2 /*69*/].f_2[Global_106565.f_20558.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_106565.f_20558.f_233[iVar2 /*69*/].f_2[Global_106565.f_20558.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_106565.f_20558.f_233[iVar2 /*69*/]++;
		Global_106565.f_20558.f_233[iVar2 /*69*/].f_1++;
		if (Global_106565.f_20558.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_106565.f_20558.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_110(iParam0);
	if (Global_36425 == 15)
	{
		func_109(0);
	}
	return 1;
}

void func_109(bool bParam0)
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
			Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53676[iVar0 /*3*/][0] = Global_106565.f_20558[iVar0];
		Global_53676.f_31[iVar0 /*3*/][0] = Global_106565.f_20558.f_11[iVar0];
		Global_53676.f_62[iVar0 /*3*/][0] = Global_106565.f_20558.f_22[iVar0];
		Global_53676.f_93[iVar0 /*3*/][0] = Global_106565.f_20558.f_33[iVar0];
		Global_53676.f_124[iVar0 /*3*/][0] = Global_106565.f_20558.f_44[iVar0];
		Global_53676.f_155[iVar0 /*3*/][0] = Global_106565.f_20558.f_55[iVar0];
		Global_53676.f_186[iVar0 /*3*/][0] = Global_106565.f_20558.f_66[iVar0];
		Global_53676.f_217[iVar0 /*3*/][0] = Global_106565.f_20558.f_77[iVar0];
		Global_53676.f_248[iVar0 /*3*/][0] = Global_106565.f_20558.f_88[iVar0];
		if (!bParam0)
		{
			Global_53676[iVar0 /*3*/][1] = Global_106565.f_20558[iVar0];
			Global_53676.f_31[iVar0 /*3*/][1] = Global_106565.f_20558.f_11[iVar0];
			Global_53676.f_62[iVar0 /*3*/][1] = Global_106565.f_20558.f_22[iVar0];
			Global_53676.f_93[iVar0 /*3*/][1] = Global_106565.f_20558.f_33[iVar0];
			Global_53676.f_124[iVar0 /*3*/][1] = Global_106565.f_20558.f_44[iVar0];
			Global_53676.f_155[iVar0 /*3*/][1] = Global_106565.f_20558.f_55[iVar0];
			Global_53676.f_186[iVar0 /*3*/][1] = Global_106565.f_20558.f_66[iVar0];
			Global_53676.f_217[iVar0 /*3*/][1] = Global_106565.f_20558.f_77[iVar0];
			Global_53676.f_248[iVar0 /*3*/][1] = Global_106565.f_20558.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_110(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_53668[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x12B6E23F244DDB0F(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x12B6E23F244DDB0F(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x12B6E23F244DDB0F(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_111(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_85(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_85(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_85(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_85(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_114(8269, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_114(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_114(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_114(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_114(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_114(8274, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!unk_0xB331FCEB94EB05C8())
	{
		if (unk_0x0E4018692D92041D(Global_106565.f_20558.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xCE689A8E8C42ED78(&(Global_106565.f_20558.f_471), iParam0);
		}
	}
	else if (unk_0x0E4018692D92041D(Global_106565.f_20558.f_471, iParam0) || unk_0x0E4018692D92041D(Global_2097152[func_113() /*10778*/].f_6165.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xCE689A8E8C42ED78(&(Global_106565.f_20558.f_471), iParam0);
		unk_0xCE689A8E8C42ED78(&(Global_2097152[func_113() /*10778*/].f_6165.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x1F85AD4B26B92795("COUP_RED");
		unk_0xFA6BEE2B1507FF1E(func_112(iParam0));
		unk_0xDE1BA36E3BACF7C1(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_112(int iParam0)
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

int func_113()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_114(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_115(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x12B6E23F244DDB0F(iVar0, iParam1, iParam3);
	}
}

int func_115(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_86();
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

void func_116(int iParam0)
{
	func_137(93, iParam0);
	func_137(29, iParam0);
	func_137(30, iParam0);
}

bool func_117(int iParam0)
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
		return func_119(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_119(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_119(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_119(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0xEF4753434B24594D();
		iVar1 = func_118(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0xEF4753434B24594D();
		iVar3 = func_118(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0xEF4753434B24594D();
		iVar5 = func_118(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0xEF4753434B24594D();
		iVar7 = func_118(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0xEF4753434B24594D();
		iVar9 = func_118(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0xEF4753434B24594D();
		iVar11 = func_118(8274, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!unk_0xB331FCEB94EB05C8())
	{
		return unk_0x0E4018692D92041D(Global_106565.f_20558.f_471, iParam0);
	}
	return unk_0x0E4018692D92041D(Global_2097152[func_113() /*10778*/].f_6165.f_10, iParam0);
}

int func_118(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_115(iParam1)];
	if (unk_0x75D54ED6C1AD1642(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_119(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_86();
	}
	iVar1 = func_121(iParam0, iParam1);
	uVar2 = func_120(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xE35D1055B69473FB(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_120(int iParam0)
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

int func_121(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_86();
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

int func_122(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x321808B6A32CCA20(27))
	{
		return 0;
	}
	if (unk_0x75D54ED6C1AD1642(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x75D54ED6C1AD1642(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x75D54ED6C1AD1642(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x75D54ED6C1AD1642(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x12B6E23F244DDB0F(joaat("num_cash_spent"), iVar1, 1);
		func_84(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_123(27, 1);
	return 1;
}

int func_123(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_124(iParam0, iParam1);
}

int func_124(int iParam0, int iParam1)
{
	if (func_12(14) && !func_135(iParam0))
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
	if (func_134(&Global_4269608))
	{
		if (func_132(&Global_4269608, iParam0))
		{
			return 0;
		}
		if (func_125(&Global_4269608, iParam0))
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

int func_125(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x321808B6A32CCA20(iParam1))
	{
		return 0;
	}
	if (func_12(14) && !func_135(iParam1))
	{
		return 0;
	}
	if (func_132(uParam0, iParam1))
	{
		return 0;
	}
	if (func_131(uParam0) < 0f)
	{
		func_130(uParam0, 0);
	}
	func_128(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_126(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_126(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x321808B6A32CCA20(iParam1))
	{
		return 0;
	}
	if (func_12(14) && !func_135(iParam1))
	{
		return 0;
	}
	if (func_132(uParam0, iParam1))
	{
		return 0;
	}
	if (func_131(uParam0) < 0f)
	{
		func_130(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_127(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_127(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_128(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_129(uParam0, iVar0);
		iVar0++;
	}
	func_130(uParam0, (Global_4269607 - 0.5f));
}

void func_129(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_130(var uParam0, float fParam1)
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

float func_131(var uParam0)
{
	return uParam0->f_80;
}

bool func_132(var uParam0, int iParam1)
{
	return func_133(uParam0, iParam1) != -1;
}

int func_133(var uParam0, int iParam1)
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

bool func_134(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_135(int iParam0)
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

void func_136(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x75D54ED6C1AD1642(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x12B6E23F244DDB0F(iParam0, iVar0, 1);
}

void func_137(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_52236[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0xB331FCEB94EB05C8())
	{
		return;
	}
	if (Global_52236[iParam0 /*7*/])
	{
		unk_0x75D54ED6C1AD1642(Global_52236[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x12B6E23F244DDB0F(Global_52236[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_138()
{
	int iVar0;
	
	if (unk_0x40863EBAEA2F03D7())
	{
		unk_0x75D54ED6C1AD1642(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_53668[0] == iVar0)
		{
			Global_53668[0] = iVar0;
		}
		unk_0x75D54ED6C1AD1642(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_53668[1] == iVar0)
		{
			Global_53668[1] = iVar0;
		}
		unk_0x75D54ED6C1AD1642(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_53668[2] == iVar0)
		{
			Global_53668[2] = iVar0;
		}
	}
}

void func_139(bool bParam0)
{
	if (!unk_0xBC2FC12AD0FBF72E(iLocal_67))
	{
		if (iLocal_170 > 1)
		{
			if (!unk_0x910FF514D7BC5674(iLocal_67, unk_0x33CD235DF1E6A94E(), 60f))
			{
				iLocal_170 = 0;
				iLocal_171 = 0;
			}
		}
		switch (iLocal_170)
		{
			case 0:
				unk_0xED68CDDDE25A144E(iLocal_67);
				unk_0xC4A347124F39D998(iLocal_67, unk_0x33CD235DF1E6A94E(), -1, 16, 2);
				unk_0x99414FB2D30425C1(&iLocal_169);
				unk_0x11C4AF4137F2A4B5(0, unk_0x33CD235DF1E6A94E(), 0);
				unk_0xC4A347124F39D998(0, unk_0x33CD235DF1E6A94E(), -1, 16, 2);
				unk_0xC734F59A13D39AEF(iLocal_169);
				unk_0x13A2D602CD10CBAC(iLocal_67, iLocal_169);
				unk_0xA7A57E7757ED035E(&iLocal_169);
				iLocal_170++;
				break;
			
			case 1:
				if (unk_0xD76D6BCC14B95CE1(iLocal_67, 242628503) != 1)
				{
					iLocal_170++;
				}
				break;
			
			case 2:
				if (bParam0)
				{
					switch (iLocal_171)
					{
						case 0:
							if (!unk_0x1CE8F0A08E65CA6A(iLocal_67, "random@paparazzi@wait", "wait_a", 3))
							{
								unk_0x108754262311D34F(iLocal_67, "random@paparazzi@wait", "wait_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
							else if (unk_0x204DEACC5BECF723(iLocal_67, "random@paparazzi@wait", "wait_a") > 0.95f)
							{
								unk_0x108754262311D34F(iLocal_67, "random@paparazzi@wait", "wait_b", 4f, -4f, -1, 0, 0, 0, 0, 0);
								iLocal_171++;
							}
							break;
						
						case 1:
							if (!unk_0x1CE8F0A08E65CA6A(iLocal_67, "random@paparazzi@wait", "wait_b", 3))
							{
								unk_0x108754262311D34F(iLocal_67, "random@paparazzi@wait", "wait_b", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
							else if (unk_0x204DEACC5BECF723(iLocal_67, "random@paparazzi@wait", "wait_b") > 0.95f)
							{
								unk_0x108754262311D34F(iLocal_67, "random@paparazzi@wait", "wait_c", 4f, -4f, -1, 0, 0, 0, 0, 0);
								iLocal_171++;
							}
							break;
						
						case 2:
							if (!unk_0x1CE8F0A08E65CA6A(iLocal_67, "random@paparazzi@wait", "wait_c", 3))
							{
								unk_0x108754262311D34F(iLocal_67, "random@paparazzi@wait", "wait_c", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
							else if (unk_0x204DEACC5BECF723(iLocal_67, "random@paparazzi@wait", "wait_c") > 0.95f)
							{
								unk_0x108754262311D34F(iLocal_67, "random@paparazzi@wait", "wait_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
								iLocal_171 = 0;
							}
							break;
						}
				}
				break;
			}
	}
}

void func_140()
{
	if (unk_0xE38E3CF1625A4145(iLocal_125))
	{
		unk_0x1ABDB383C83A336A(&iLocal_125);
	}
}

void func_141()
{
	int iVar0;
	
	if (unk_0x91D5C8283D19AF49(iLocal_70, 0))
	{
		switch (iLocal_130)
		{
			case 0:
				if (!unk_0xBC2FC12AD0FBF72E(iLocal_67) && unk_0x91D5C8283D19AF49(iLocal_70, 0))
				{
					func_140();
					func_145(1, 1, 0, 0, 0, 0);
					if (unk_0xE38E3CF1625A4145(iLocal_123))
					{
						unk_0x1ABDB383C83A336A(&iLocal_123);
					}
					if (unk_0xE38E3CF1625A4145(iLocal_121))
					{
						unk_0x1ABDB383C83A336A(&iLocal_121);
					}
					if (unk_0xE38E3CF1625A4145(iLocal_122))
					{
						unk_0x1ABDB383C83A336A(&iLocal_122);
					}
					if (unk_0xE214B9FCEDF6364A(iLocal_67))
					{
						unk_0x5D94F4D6FE7DA516(iLocal_67);
					}
					func_143();
					if (!unk_0xBC2FC12AD0FBF72E(iLocal_67))
					{
						unk_0xAE5B044AA2973E2A(iLocal_67, unk_0x2CA911E7569D12EA(iLocal_70, -10f, 5f, 0f), -1, 16, 4);
					}
					unk_0xAE5B044AA2973E2A(unk_0x33CD235DF1E6A94E(), unk_0x2CA911E7569D12EA(iLocal_70, 10f, 5f, 0f), 15000, 16, 4);
					unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), false, 1280);
					if ((bLocal_129 || Global_3) || bLocal_56)
					{
						while (!func_142(&Local_139, cLocal_133, "REPAP_THK", "REPAP_THK_1", 4, 0, 0))
						{
							wait(0);
						}
					}
					else
					{
						while (!func_5(&Local_139, cLocal_133, "REPAP_THK", 4, 0, 0, 0))
						{
							wait(0);
						}
					}
					func_107(func_19(), 1, 750, 0, 1);
					if (!unk_0xBC2FC12AD0FBF72E(iLocal_67))
					{
						unk_0xAE5B044AA2973E2A(iLocal_67, unk_0x2CA911E7569D12EA(iLocal_70, -10f, 5f, 0f), -1, 16, 4);
						unk_0x880B00F3FAE4C022(iLocal_67, 0, 0);
					}
					unk_0xAE5B044AA2973E2A(unk_0x33CD235DF1E6A94E(), unk_0x2CA911E7569D12EA(iLocal_70, 10f, 5f, 0f), 15000, 16, 4);
					iLocal_130++;
				}
				break;
			
			case 1:
				if (!func_73() && !unk_0xBC2FC12AD0FBF72E(iLocal_67))
				{
					unk_0x99414FB2D30425C1(&iVar0);
					unk_0x0FF06FD8DEB3AB01(0, iLocal_70, 0);
					unk_0x7E268975AF5EA74F(0, vLocal_50, 1f, 30000, 0.25f, 512, fLocal_51);
					unk_0xF6D940C3CF409665(0, "WORLD_HUMAN_SMOKING", 0, 1);
					unk_0xC734F59A13D39AEF(iVar0);
					unk_0x13A2D602CD10CBAC(iLocal_67, iVar0);
					unk_0xA7A57E7757ED035E(&iVar0);
					iLocal_130++;
					settimera(0);
				}
				break;
			
			case 2:
				if (!unk_0xBC2FC12AD0FBF72E(iLocal_67) && unk_0x91D5C8283D19AF49(iLocal_70, 0))
				{
					if (!unk_0x10930B9CAD4111C2(iLocal_67, iLocal_70, 0))
					{
						settimera(0);
						if (bLocal_129)
						{
							unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), true, 0);
							func_145(0, 1, 0, 0, 0, 0);
							iLocal_130 = 5;
						}
						else
						{
							iLocal_130++;
						}
					}
				}
				break;
			
			case 3:
				if ((!unk_0xBC2FC12AD0FBF72E(iLocal_67) && unk_0x91D5C8283D19AF49(iLocal_70, 0)) && timera() > 1000)
				{
					unk_0x0FF06FD8DEB3AB01(unk_0x33CD235DF1E6A94E(), iLocal_70, 0);
					unk_0xC4A347124F39D998(unk_0x33CD235DF1E6A94E(), iLocal_70, 10000, 0, 3);
					iLocal_130++;
				}
				break;
			
			case 4:
				if (unk_0x91D5C8283D19AF49(iLocal_70, 0) && !unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iLocal_70, 0))
				{
					unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), true, 0);
					func_145(0, 1, 0, 0, 0, 0);
					unk_0xD303E20CB0AE4AD0(iLocal_70, 2);
					settimera(0);
					iLocal_130++;
				}
				break;
			
			case 5:
				if (timera() > 1000)
				{
					if (func_106())
					{
						if (!bLocal_129)
						{
							if (!func_94(19))
							{
								func_90("AM_H_CALLTX", 1, 0, -1, 10000, 7, 0, 0, 0);
								func_89(19);
							}
						}
						func_75();
					}
				}
				break;
			}
	}
}

bool func_142(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_16(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15873 = 0;
	Global_15880 = 0;
	Global_15875 = 0;
	Global_16857 = 1;
	Global_16859 = 0;
	Global_16863 = 0;
	StringCopy(&Global_16870, sParam3, 24);
	Global_2621441 = 0;
	return func_6(sParam2, iParam4, 0);
}

void func_143()
{
	Global_14732 = 0;
	func_144();
}

void func_144()
{
	if (unk_0x12BF789190D82474())
	{
		unk_0x3F4DBD0F910C454B();
		Global_16877 = 0;
		unk_0xD92171BC6C48DB90(true);
		Global_15866 = 6;
		return;
	}
}

void func_145(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0xCBE6E2953ED9652D(unk_0x95B959F18401C09A());
		unk_0xF4197686EF83F52A(unk_0x95B959F18401C09A(), 1);
		unk_0x11D1216D8F205785(unk_0x95B959F18401C09A(), 1);
		func_152(1);
		unk_0x9F86AEF7DC996029();
		unk_0x68F7298CC6F16961();
		if (Global_14553.f_1 > 3)
		{
			if (unk_0xA30F14B621E3269D())
			{
				unk_0xD92171BC6C48DB90(false);
			}
			if (!func_9())
			{
				Global_14553.f_1 = 3;
			}
			Global_15866 = 5;
		}
		func_151(1, iParam3, iParam2, 0);
		Global_56500 = 1;
		Global_68810 = 1;
		Global_71588 = 1;
	}
	else
	{
		func_152(0);
		unk_0xD384C2E6BE0D5ABF();
		Global_56500 = 0;
		if (bParam1)
		{
			unk_0x36296F11E96E764D();
		}
		unk_0xF4197686EF83F52A(unk_0x95B959F18401C09A(), 0);
		unk_0x11D1216D8F205785(unk_0x95B959F18401C09A(), 0);
		func_151(0, iParam3, iParam2, 0);
		if (unk_0xB331FCEB94EB05C8())
		{
			if (((((!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()) && !func_149(unk_0x95B959F18401C09A())) && !func_147(unk_0x95B959F18401C09A(), 0)) && !func_146()) && !bParam4) && !bParam5)
			{
				unk_0x9611832841071B69(unk_0x33CD235DF1E6A94E(), false);
			}
		}
		else if (((!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()) && !func_149(unk_0x95B959F18401C09A())) && !bParam4) && !bParam5)
		{
			unk_0x9611832841071B69(unk_0x33CD235DF1E6A94E(), false);
		}
		Global_71588 = 0;
	}
}

bool func_146()
{
	return unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_39.f_18, 14);
}

bool func_147(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x95B959F18401C09A())
	{
		bVar0 = func_148(-1, 0) == 8;
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

int func_148(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_86();
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

int func_149(int iParam0)
{
	if (func_147(iParam0, 0))
	{
		return 1;
	}
	if (func_150())
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

bool func_150()
{
	return unk_0x0E4018692D92041D(Global_2359302, 3);
}

int func_151(int iParam0, int iParam1, var uParam2, int iParam3)
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

void func_152(int iParam0)
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

void func_153()
{
	if (Global_3 || bLocal_56)
	{
		unk_0x453924F2AAE93AD9(0.7f);
	}
	if (bLocal_129 && !unk_0xBC2FC12AD0FBF72E(iLocal_67))
	{
		if (!func_174(iLocal_67))
		{
			if (!unk_0xE38E3CF1625A4145(iLocal_121))
			{
				iLocal_121 = func_183(iLocal_67, 0, 145);
			}
		}
		else
		{
			if (func_66())
			{
				if (!unk_0xE38E3CF1625A4145(iLocal_123))
				{
					iLocal_123 = func_50(vLocal_49, 1);
				}
				if (unk_0xE38E3CF1625A4145(iLocal_124))
				{
					unk_0x1ABDB383C83A336A(&iLocal_124);
				}
			}
			else
			{
				if (!unk_0xE38E3CF1625A4145(iLocal_124))
				{
					iLocal_124 = func_50(vLocal_50, 1);
				}
				if (unk_0xE38E3CF1625A4145(iLocal_123))
				{
					unk_0x1ABDB383C83A336A(&iLocal_123);
				}
			}
			if (unk_0xE38E3CF1625A4145(iLocal_121))
			{
				unk_0x1ABDB383C83A336A(&iLocal_121);
			}
		}
		if (!unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iLocal_70, 0))
		{
			if ((unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0) && unk_0x91D5C8283D19AF49(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), 0)) && func_173(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0)))
			{
				iLocal_70 = 0;
				iLocal_70 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
				unk_0x0D21E1FDE062ED99(iLocal_70, true, 1);
				unk_0xD303E20CB0AE4AD0(iLocal_70, 1);
				unk_0x1C2B995BA5ADE8FF(iLocal_70, false, 0);
			}
		}
		if (unk_0xE38E3CF1625A4145(iLocal_124) && !unk_0xF0D230FB550CD6EB(iLocal_67, 0))
		{
			if (unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), vLocal_50, 15f, 15f, 15f, false, true, 0) || unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), 231.7982f, 672.7683f, 189.2f, 1f, 1f, 2.5f, true, true, 0))
			{
				func_181(4);
			}
		}
		else if (iLocal_130 != 100)
		{
			if (func_66() && func_172(1, 1, 1))
			{
				if (unk_0xD4B4F68F3449CBEC(iLocal_70, 225.5938f, 681.1489f, 188.4262f, 232.02f, 681.3113f, 191.9843f, 8.75f, 0, true, 0) || unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), 226.6788f, 681.0637f, 189f, 1f, 1f, 2.5f, true, true, 0))
				{
					settimera(0);
					iLocal_130 = 100;
				}
			}
			else if (!unk_0x10930B9CAD4111C2(iLocal_67, iLocal_70, 0))
			{
				if (unk_0xD76D6BCC14B95CE1(iLocal_67, -1794415470) != 1)
				{
					unk_0xC838CE9837D0ABAF(iLocal_67, iLocal_70, -1, func_171(iLocal_70), 2f, 8388608, 0);
				}
			}
		}
	}
	else
	{
		if (iLocal_130 != 100)
		{
			if (func_66() && func_172(1, 1, 1))
			{
				if (unk_0xD4B4F68F3449CBEC(iLocal_70, 225.5938f, 681.1489f, 188.4262f, 232.02f, 681.3113f, 191.9843f, 8.75f, 0, true, 0) || unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), 226.6788f, 681.0637f, 189f, 1f, 1f, 2.5f, true, true, 0))
				{
					settimera(0);
					iLocal_130 = 100;
				}
			}
		}
		func_168(1);
	}
	switch (iLocal_130)
	{
		case 0:
			if (func_66())
			{
				if (unk_0x1CE8F0A08E65CA6A(iLocal_67, "VEH@STD@PS@IDLE_PANIC", "sit", 3) || unk_0x1CE8F0A08E65CA6A(iLocal_67, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3))
				{
					unk_0xED68CDDDE25A144E(iLocal_67);
				}
				if (func_5(&Local_139, cLocal_133, "REPAP_HM", 4, 0, 0, 0))
				{
					unk_0x4B06B5746CBEC99F(0.5f);
					iLocal_130++;
				}
				if (!func_167())
				{
					func_162();
				}
			}
			break;
		
		case 1:
			if (!func_74())
			{
				if (func_66())
				{
					if (!func_73())
					{
						if (func_19() == 0)
						{
							if (func_5(&Local_139, cLocal_133, "REPAP_LIFTM", 4, 0, 0, 0))
							{
								iLocal_130++;
							}
						}
						else if (func_19() == 1)
						{
							if (func_5(&Local_139, cLocal_133, "REPAP_LIFTF", 4, 0, 0, 0))
							{
								iLocal_130++;
							}
						}
						else if (func_5(&Local_139, cLocal_133, "REPAP_LIFTT", 4, 0, 0, 0))
						{
							iLocal_130++;
						}
					}
				}
			}
			break;
		
		case 2:
			if (!func_74())
			{
				if (func_66())
				{
					if (func_5(&Local_139, cLocal_133, "REPAP_PLEAD", 4, 0, 0, 0))
					{
						settimera(0);
						if (Global_3 || bLocal_56)
						{
							iLocal_130 = 99;
						}
						else
						{
							iLocal_130++;
						}
					}
				}
			}
			break;
		
		case 3:
			if (timera() > 7000)
			{
				if (func_158("REPAP_HOME1", (func_161() && !func_74())))
				{
					iLocal_130++;
				}
			}
			break;
		
		case 4:
			if (func_19() == 0)
			{
				if (func_158("REPAP_HOME1M", (func_161() && !func_74())))
				{
					iLocal_130++;
				}
			}
			else if (func_19() == 1)
			{
				if (func_158("REPAP_HOME1F", (func_161() && !func_74())))
				{
					iLocal_130++;
				}
			}
			else if (func_158("REPAP_HOME1T", (func_161() && !func_74())))
			{
				iLocal_130++;
			}
			break;
		
		case 5:
			if (func_158("REPAP_HOME1L", (func_161() && !func_74())))
			{
				settimera(0);
				iLocal_130++;
			}
			break;
		
		case 6:
			if (!func_74())
			{
				if (timera() > 7000)
				{
					if (func_161())
					{
						if (func_5(&Local_139, cLocal_133, "REPAP_HOME2", 4, 0, 0, 0))
						{
							iLocal_130++;
						}
					}
				}
			}
			break;
		
		case 7:
			if (!func_74())
			{
				if (func_161() && !func_73())
				{
					if (func_157("REPAP_HOME2"))
					{
						iLocal_130++;
					}
				}
			}
			break;
		
		case 8:
			if (func_158("REPAP_HOME2L", (func_161() && !func_74())))
			{
				iLocal_130++;
			}
			break;
		
		case 9:
			if (!func_74())
			{
				if (func_161() && !func_73())
				{
					if (func_157("REPAP_RESP2"))
					{
						settimera(0);
						iLocal_130++;
					}
				}
			}
			break;
		
		case 10:
			if (timera() > 7000)
			{
				if (func_158("REPAP_HOME3", (func_161() && !func_74())))
				{
					iLocal_130++;
				}
			}
			break;
		
		case 11:
			if (!func_74())
			{
				if (func_161() && !func_73())
				{
					if (func_157("REPAP_HOME3"))
					{
						settimera(0);
						iLocal_130++;
					}
				}
			}
			break;
		
		case 12:
			if (timera() > 7000)
			{
				if (func_158("REPAP_HOME4", (func_161() && !func_74())))
				{
					iLocal_130++;
				}
			}
			break;
		
		case 13:
			if (!func_74())
			{
				if (func_161() && !func_73())
				{
					if (func_157("REPAP_HOME4"))
					{
						settimera(0);
						iLocal_130++;
					}
				}
			}
			break;
		
		case 14:
			if (timera() > 7000)
			{
				if (func_158("REPAP_NOBAN", (func_161() && !func_74())))
				{
					iLocal_130++;
				}
			}
			break;
		
		case 15:
			if (!func_74())
			{
				if (func_161() && !func_73())
				{
					if (func_157("REPAP_NOBAN"))
					{
						iLocal_130++;
					}
				}
			}
			break;
		
		case 16:
			if (!func_74())
			{
				if (func_161() && !func_73())
				{
					if (func_5(&Local_139, cLocal_133, "REPAP_NOBANL", 4, 0, 0, 0))
					{
						iLocal_130++;
					}
				}
			}
			break;
		
		case 17:
			func_74();
			break;
		
		case 100:
			if (func_155(iLocal_70, 5f, 5, 1056964608, 0, 1, 0))
			{
				func_182("");
				func_181(3);
			}
			break;
	}
	if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) > 0)
	{
		func_71();
	}
	if (func_19() == 2)
	{
		if ((func_154() && !func_167()) && iLocal_45 != 8)
		{
			if (!unk_0xBC2FC12AD0FBF72E(iLocal_67))
			{
				if (unk_0x18FB647D79B09657(iLocal_67, -1034.6f, 4918.6f, 205.9f, 5f, 5f, 5f, false, true, 0))
				{
					if (!unk_0x731F434EAFE6E9FE(iLocal_67, unk_0x733DE09777D47CD6(unk_0x95B959F18401C09A())))
					{
						unk_0x140D4A6561E11695(iLocal_67, unk_0x733DE09777D47CD6(unk_0x95B959F18401C09A()));
					}
					func_102();
					iLocal_45 = 8;
				}
			}
		}
	}
}

var func_154()
{
	return Global_26000;
}

int func_155(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_156(iParam0);
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

void func_156(int iParam0)
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

int func_157(char* sParam0)
{
	vector3 vVar0;
	
	StringConCat(&vVar0, sParam0, 24);
	if (func_19() == 0)
	{
		StringConCat(&vVar0, "M", 24);
	}
	else if (func_19() == 1)
	{
		StringConCat(&vVar0, "F", 24);
	}
	else
	{
		StringConCat(&vVar0, "T", 24);
	}
	if (func_5(&Local_139, cLocal_133, &vVar0, 4, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_158(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!iLocal_58)
		{
			if (func_5(&Local_139, cLocal_133, sParam0, 4, 0, 0, 0))
			{
				iLocal_58 = 1;
				iLocal_59 = 0;
			}
		}
		else if (iLocal_59)
		{
			if (func_160(&Local_139, cLocal_133, sParam0, &Local_61, 4, 0, 0))
			{
				iLocal_59 = 0;
			}
		}
		if ((iLocal_58 && !iLocal_59) && bParam1)
		{
			if (iLocal_62 == -1)
			{
				if (!func_73())
				{
					iLocal_62 = unk_0xE3903F59E2F22150();
				}
			}
			else if ((unk_0xE3903F59E2F22150() - iLocal_62) > 500)
			{
				iLocal_62 = -1;
				iLocal_58 = 0;
				iLocal_59 = 0;
				return 1;
			}
		}
	}
	else if (iLocal_58 && !iLocal_59)
	{
		Local_61 = { func_159() };
		func_143();
		iLocal_59 = 1;
	}
	return 0;
}

struct<6> func_159()
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15866 == 4)
	{
		iVar1 = unk_0xF26F606F8B36E2AC();
		iVar1 = (iVar1 + Global_16876);
		iVar2 = iVar1 + 1;
		if (iVar2 > -1 && iVar1 > -1)
		{
			if (unk_0xEAF855A7DC28BC8D(&(Global_14734[iVar2 /*6*/])))
			{
				return Global_14734[iVar2 /*6*/];
			}
			else
			{
				iVar3 = iVar2;
				while (iVar3 < 70)
				{
					if (unk_0xEAF855A7DC28BC8D(&(Global_14734[iVar3 /*6*/])))
					{
						return Global_14734[iVar3 /*6*/];
						iVar3 = 70;
					}
					iVar3++;
				}
				return Var0;
			}
			return Global_14734[iVar1 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

bool func_160(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_16(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15873 = 0;
	Global_15880 = 0;
	Global_15875 = 0;
	Global_16857 = 0;
	Global_16859 = 0;
	Global_16863 = 1;
	StringCopy(&Global_16870, sParam3, 24);
	Global_2621441 = 0;
	return func_6(sParam2, iParam4, 0);
}

int func_161()
{
	if (bLocal_129)
	{
		if (unk_0x91D5C8283D19AF49(iLocal_70, 0))
		{
			if (func_66())
			{
				return 1;
			}
		}
		if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0) && !unk_0xF0D230FB550CD6EB(iLocal_67, 0))
		{
			if (vdist2(vLocal_52, vLocal_53) < 400f)
			{
				return 1;
			}
		}
	}
	else
	{
		return func_66();
	}
	return 0;
}

void func_162()
{
	if (func_19() == 2)
	{
		if (!unk_0xE38E3CF1625A4145(iLocal_125))
		{
			func_165();
			iLocal_125 = func_164(-1034.6f, 4918.6f, 205.9f, 0);
			unk_0xA20C1DE21F2F071C(iLocal_125, 269);
			func_163();
		}
	}
}

void func_163()
{
	if (!func_167())
	{
		if (func_19() == 2)
		{
			Global_26000 = 1;
		}
	}
}

int func_164(vector3 vParam0, bool bParam1)
{
	return func_50(vParam0, bParam1);
}

void func_165()
{
	if (func_19() == 2)
	{
		if (!Global_26002)
		{
			func_166("CULT_BLIP_HELP", -1);
			Global_26002 = 1;
		}
	}
}

void func_166(char* sParam0, int iParam1)
{
	unk_0x37621D6689F9E3C3(sParam0);
	unk_0x092150016C06C431(0, 0, true, iParam1);
}

int func_167()
{
	if (Global_106565.f_24989.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

void func_168(bool bParam0)
{
	if (unk_0x91D5C8283D19AF49(iLocal_70, 0) && !unk_0xBC2FC12AD0FBF72E(iLocal_67))
	{
		if (func_66())
		{
			if (bParam0)
			{
				if (!unk_0xE38E3CF1625A4145(iLocal_123))
				{
					iLocal_123 = func_50(vLocal_49, 1);
				}
			}
			if (unk_0xE38E3CF1625A4145(iLocal_121))
			{
				unk_0x1ABDB383C83A336A(&iLocal_121);
			}
			if (unk_0xE38E3CF1625A4145(iLocal_122))
			{
				unk_0x1ABDB383C83A336A(&iLocal_122);
			}
		}
		else
		{
			if (unk_0xE38E3CF1625A4145(iLocal_123))
			{
				unk_0x1ABDB383C83A336A(&iLocal_123);
			}
			if (!unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iLocal_70, 0))
			{
				if (!unk_0xE38E3CF1625A4145(iLocal_122))
				{
					iLocal_122 = func_169(iLocal_70, 0, 0);
				}
			}
			if (!unk_0x10930B9CAD4111C2(iLocal_67, iLocal_70, 0))
			{
				if (!unk_0xE38E3CF1625A4145(iLocal_121))
				{
					iLocal_121 = func_183(iLocal_67, 0, 145);
				}
			}
			else if (unk_0xE38E3CF1625A4145(iLocal_121))
			{
				unk_0x1ABDB383C83A336A(&iLocal_121);
			}
		}
	}
}

int func_169(int iParam0, bool bParam1, bool bParam2)
{
	return func_170(iParam0, !bParam1, bParam2);
}

int func_170(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0x765F6FEEFF39224F(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x8848A15CBDADDC60(iParam0);
	if (unk_0x680558231C80291D(iParam0))
	{
		unk_0xCE5C49921A521962(iVar0, func_51(unk_0xB331FCEB94EB05C8(), 1f, 1f));
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
		unk_0xCE5C49921A521962(iVar0, func_51(unk_0xB331FCEB94EB05C8(), 0.7f, 0.7f));
		unk_0xBF11C8A43770C598(iVar0, bParam1);
	}
	else if (unk_0xA3A29DB165882310(iParam0))
	{
		unk_0xCE5C49921A521962(iVar0, func_51(unk_0xB331FCEB94EB05C8(), 0.7f, 0.7f));
	}
	return iVar0;
}

int func_171(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	if (unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		iVar1 = 0;
		while (iVar1 <= (unk_0xC92AA0DBDDDE8BB8(iParam0) - 1))
		{
			if (iVar0 == -1)
			{
				iVar2 = iVar1;
				if (unk_0x67FFBB75D2430704(iParam0, iVar2, 0))
				{
					iVar0 = iVar2;
				}
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_172(bool bParam0, bool bParam1, bool bParam2)
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

int func_173(int iParam0)
{
	if (!unk_0xD62C4419A41F106A(iParam0, 0))
	{
		if (unk_0x67FFBB75D2430704(iParam0, -1, 0))
		{
			return 1;
		}
		if (unk_0x67FFBB75D2430704(iParam0, 0, 0))
		{
			return 1;
		}
		if (unk_0x67FFBB75D2430704(iParam0, 1, 0))
		{
			return 1;
		}
		if (unk_0x67FFBB75D2430704(iParam0, 2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_174(int iParam0)
{
	if (unk_0x731F434EAFE6E9FE(iParam0, unk_0x733DE09777D47CD6(unk_0x95B959F18401C09A())))
	{
		if (!unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iParam0, 25f, 25f, 25f, 0, 1, 0))
		{
			unk_0x5D94F4D6FE7DA516(iParam0);
		}
		return 1;
	}
	else if (unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iParam0, Global_19, 0, 1, 0))
	{
		unk_0x140D4A6561E11695(iParam0, unk_0x733DE09777D47CD6(unk_0x95B959F18401C09A()));
	}
	return 0;
}

void func_175()
{
	if (!unk_0xBC2FC12AD0FBF72E(iLocal_67) && unk_0x91D5C8283D19AF49(iLocal_70, 0))
	{
		if (!unk_0x10930B9CAD4111C2(iLocal_67, iLocal_70, 1))
		{
			if (unk_0xD76D6BCC14B95CE1(iLocal_67, -1794415470) != 1)
			{
				unk_0xC838CE9837D0ABAF(iLocal_67, iLocal_70, -1, func_171(iLocal_70), 2f, 8388608, 0);
			}
		}
		if ((unk_0x765F6FEEFF39224F(func_65()) && vdist2(unk_0xFBB1F99A825CAB09(iLocal_67, true), unk_0xFBB1F99A825CAB09(func_65(), true)) < 100f) && (unk_0x8BB475EA09C9A0EB(iLocal_70) < 5f || !unk_0x9E374B5F44A76AE2(unk_0x541D5C57194E73C4(iLocal_70))))
		{
			if (bLocal_129)
			{
				if (!unk_0x1CE8F0A08E65CA6A(iLocal_67, "VEH@STD@PS@IDLE_PANIC", "sit", 3) && unk_0xEE984ED4E4A374BE(iLocal_67, iLocal_70))
				{
					unk_0x108754262311D34F(iLocal_67, "VEH@STD@PS@IDLE_PANIC", "sit", 4f, -4f, -1, 48, 0, 0, 0, 0);
				}
			}
			else if (!unk_0x1CE8F0A08E65CA6A(iLocal_67, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3) && unk_0xEE984ED4E4A374BE(iLocal_67, iLocal_70))
			{
				unk_0x108754262311D34F(iLocal_67, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 4f, -4f, -1, 48, 0, 0, 0, 0);
			}
		}
		else if ((unk_0x1CE8F0A08E65CA6A(iLocal_67, "VEH@STD@PS@IDLE_PANIC", "sit", 3) || unk_0x1CE8F0A08E65CA6A(iLocal_67, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3)) && unk_0xEE984ED4E4A374BE(iLocal_67, iLocal_70))
		{
			unk_0xED68CDDDE25A144E(iLocal_67);
		}
		switch (iLocal_130)
		{
			case 0:
				if (timera() > 2000)
				{
					if (unk_0x765F6FEEFF39224F(func_65()) && !unk_0xBC2FC12AD0FBF72E(func_65()))
					{
						func_18(&Local_139, 4);
						func_17(&Local_139, 4, func_65(), "PAPARAZZO", 0, 1);
					}
					iLocal_47 = 2;
					func_102();
					if (func_5(&Local_139, cLocal_133, "REPAP_GO", 4, 0, 0, 0))
					{
						unk_0x4B06B5746CBEC99F(0.2f);
						unk_0x4A852F02088ECC9D(iLocal_67, true);
						unk_0xD2E80177F27FD43F(1, iLocal_55, 1862763509);
						iLocal_119 = unk_0x7CA67831169E8AA6(joaat("prop_ld_test_01"), vLocal_68, true, true, false);
						unk_0x23298AB8A7D0F403(iLocal_119, false, 0);
						unk_0x0CDD28A9DFCE2FCE(iLocal_119, false, 0);
						unk_0xF70578F5CD9822CB(iLocal_119, true);
						iLocal_130++;
					}
				}
				break;
			
			case 1:
				func_177();
				if (!unk_0xD4B4F68F3449CBEC(iLocal_67, 243.5571f, 77.51265f, 90.08002f, 268.2083f, 144.2189f, 109.853f, 23.25f, 0, true, 0))
				{
					iLocal_130++;
					iLocal_131 = unk_0xE3903F59E2F22150();
					iLocal_47 = 3;
				}
				break;
			
			case 2:
				if (!bLocal_198)
				{
					if (((((iLocal_200 != 1 && iLocal_200 != 3) && iLocal_200 != 6) && iLocal_200 != 9) && iLocal_200 != 11) && iLocal_200 != 13)
					{
						bLocal_199 = false;
						if (unk_0x765F6FEEFF39224F(func_65()) && unk_0x335C0645074963FE(func_65(), iLocal_70, 5f, 5f, 3f, 0, 1, 0))
						{
							bLocal_198 = true;
						}
					}
				}
				else
				{
					if (!func_73())
					{
						bLocal_199 = true;
					}
					if (unk_0x765F6FEEFF39224F(func_65()))
					{
						if (!unk_0x335C0645074963FE(func_65(), iLocal_70, 5f, 5f, 3f, 0, 1, 0))
						{
							bLocal_198 = false;
						}
					}
				}
				if (bLocal_199)
				{
					if (!func_74())
					{
						if (!func_176())
						{
							func_177();
						}
					}
				}
				else
				{
					switch (iLocal_200)
					{
						case 0:
							if (((!bLocal_198 && func_161()) && !func_74()) && !func_73())
							{
								if (func_5(&Local_139, cLocal_133, "REPAP_CHT", 4, 0, 0, 0))
								{
									iLocal_200++;
								}
							}
							break;
						
						case 1:
							if (((!bLocal_198 && func_161()) && !func_74()) && !func_73())
							{
								if (func_157("REPAP_RES1"))
								{
									iLocal_201 = unk_0xE3903F59E2F22150();
									iLocal_200++;
								}
							}
							break;
						
						case 2:
							if ((unk_0xE3903F59E2F22150() - iLocal_201) > 8000)
							{
								if (((!bLocal_198 && func_161()) && !func_74()) && !func_73())
								{
									if (func_157("REPAP_CHT2"))
									{
										iLocal_200++;
									}
								}
							}
							break;
						
						case 3:
							if (((!bLocal_198 && func_161()) && !func_74()) && !func_73())
							{
								if (func_5(&Local_139, cLocal_133, "REPAP_RESP2L", 4, 0, 0, 0))
								{
									iLocal_201 = unk_0xE3903F59E2F22150();
									iLocal_200++;
								}
							}
							break;
						
						case 4:
							if ((unk_0xE3903F59E2F22150() - iLocal_201) > 6000)
							{
								if (func_19() == 0)
								{
									if (func_158("REPAP_CHT3M", ((func_161() && !func_74()) && !bLocal_198)))
									{
										iLocal_200++;
									}
								}
								else if (func_19() == 1)
								{
									if (func_158("REPAP_CHT3F", ((func_161() && !func_74()) && !bLocal_198)))
									{
										iLocal_200++;
									}
								}
								else if (func_158("REPAP_CHT3T", ((func_161() && !func_74()) && !bLocal_198)))
								{
									iLocal_200++;
								}
								if (iLocal_200 > 4)
								{
									iLocal_201 = unk_0xE3903F59E2F22150();
								}
							}
							break;
						
						case 5:
							if ((unk_0xE3903F59E2F22150() - iLocal_201) > 8000)
							{
								if (func_19() == 0)
								{
									if (func_158("REPAP_CHT4M", ((func_161() && !func_74()) && !bLocal_198)))
									{
										iLocal_200++;
									}
								}
								else if (func_19() == 1)
								{
									if (func_158("REPAP_CHT4F", ((func_161() && !func_74()) && !bLocal_198)))
									{
										iLocal_200++;
									}
								}
								else if (func_158("REPAP_CHT4T", ((func_161() && !func_74()) && !bLocal_198)))
								{
									iLocal_200++;
								}
								if (iLocal_200 > 5)
								{
									iLocal_201 = unk_0xE3903F59E2F22150();
								}
							}
							break;
						
						case 6:
							if ((unk_0xE3903F59E2F22150() - iLocal_201) > 8000)
							{
								if (func_19() == 0)
								{
									if (func_158("REPAP_CHT5M", ((func_161() && !func_74()) && !bLocal_198)))
									{
										iLocal_200++;
									}
								}
								else if (func_19() == 1)
								{
									if (func_158("REPAP_CHT5F", ((func_161() && !func_74()) && !bLocal_198)))
									{
										iLocal_200++;
									}
								}
								else if (func_158("REPAP_CHT5T", ((func_161() && !func_74()) && !bLocal_198)))
								{
									iLocal_200++;
								}
								if (iLocal_200 > 6)
								{
									iLocal_201 = unk_0xE3903F59E2F22150();
								}
							}
							break;
						
						case 7:
							if ((unk_0xE3903F59E2F22150() - iLocal_201) > 8000)
							{
								if (((!bLocal_198 && func_161()) && !func_74()) && !func_73())
								{
									if (func_157("REPAP_CHT6"))
									{
										iLocal_200++;
									}
								}
							}
							break;
						
						case 8:
							if (((!bLocal_198 && func_161()) && !func_74()) && !func_73())
							{
								if (func_5(&Local_139, cLocal_133, "REPAP_RESP6L", 4, 0, 0, 0))
								{
									iLocal_201 = unk_0xE3903F59E2F22150();
									iLocal_200++;
								}
							}
							break;
						
						case 9:
							if ((unk_0xE3903F59E2F22150() - iLocal_201) > 8000)
							{
								if (((!bLocal_198 && func_161()) && !func_74()) && !func_73())
								{
									if (func_157("REPAP_CHT7"))
									{
										iLocal_200++;
									}
								}
							}
							break;
						
						case 10:
							if (((!bLocal_198 && func_161()) && !func_74()) && !func_73())
							{
								if (func_5(&Local_139, cLocal_133, "REPAP_RESP7L", 4, 0, 0, 0))
								{
									iLocal_201 = unk_0xE3903F59E2F22150();
									iLocal_200++;
								}
							}
							break;
						
						case 11:
							if ((unk_0xE3903F59E2F22150() - iLocal_201) > 8000)
							{
								if (((!bLocal_198 && func_161()) && !func_74()) && !func_73())
								{
									if (func_157("REPAP_CHT8"))
									{
										iLocal_200++;
									}
								}
							}
							break;
						
						case 12:
							if (((!bLocal_198 && func_161()) && !func_74()) && !func_73())
							{
								if (func_5(&Local_139, cLocal_133, "REPAP_RESP8L", 4, 0, 0, 0))
								{
									iLocal_200++;
								}
							}
							break;
						}
				}
				if (!unk_0x765F6FEEFF39224F(func_65()))
				{
					settimera(0);
					iLocal_130++;
					func_143();
					if (!Global_3 && !bLocal_56)
					{
						iLocal_47 = 6;
					}
				}
				if (Global_3 || bLocal_56)
				{
					if (unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), 244.2175f, 441.0128f, 126.2767f, 33.5f, 40f, 14.75f, false, true, 0) && func_66())
					{
						iLocal_47 = 4;
						iLocal_66 = unk_0xE3903F59E2F22150();
					}
				}
				break;
			
			case 3:
				if (timera() > 3000 && func_66())
				{
					func_182("MAG_2_ESCAPE_PAP_TAKE_ACTRESS_HOME");
					if (func_5(&Local_139, cLocal_133, "REPAP_LOS", 4, 0, 0, 0))
					{
						func_181(2);
					}
				}
				break;
			
			case 4:
				break;
			
			case 5:
				break;
		}
		func_168(0);
	}
}

int func_176()
{
	int iVar0;
	
	iVar0 = func_24();
	if ((unk_0xE3903F59E2F22150() - iLocal_196) > 5000)
	{
		if (unk_0x765F6FEEFF39224F(iLocal_70) && unk_0x10930B9CAD4111C2(iLocal_67, iLocal_70, 0))
		{
			if (unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iLocal_70, 1))
			{
				if (iVar0 != -1 && (unk_0xE3903F59E2F22150() - Local_109[iVar0 /*18*/].f_12) < 3000)
				{
					if (func_5(&Local_139, cLocal_133, "REPAP_WHINE", 4, 0, 0, 0))
					{
						iLocal_196 = unk_0xE3903F59E2F22150();
						return 1;
					}
				}
			}
			else if (func_5(&Local_139, cLocal_133, "REPAP_EXIT", 4, 0, 0, 0))
			{
				iLocal_196 = unk_0xE3903F59E2F22150();
				return 1;
			}
		}
	}
	return 0;
}

void func_177()
{
	int iVar0;
	
	if ((unk_0xE3903F59E2F22150() - iLocal_145) > iLocal_146)
	{
		if ((!unk_0xBC2FC12AD0FBF72E(iLocal_67) && unk_0x765F6FEEFF39224F(func_65())) && !unk_0xBC2FC12AD0FBF72E(func_65()))
		{
			if (unk_0x16E00F066AFFEA0D(vLocal_53, unk_0xFBB1F99A825CAB09(func_65(), true), true) < 8f)
			{
				iVar0 = unk_0x9EC3B269A34A2BEE(0, 5);
				func_18(&Local_139, 4);
				func_18(&Local_139, 5);
				func_18(&Local_139, 6);
				func_18(&Local_139, 7);
				switch (iVar0)
				{
					case 0:
						func_17(&Local_139, 4, func_65(), "PAPARAZZO", 0, 1);
						if (unk_0x765F6FEEFF39224F(Local_139[4 /*10*/]) && !unk_0xBC2FC12AD0FBF72E(Local_139[4 /*10*/]))
						{
							if (func_5(&Local_139, cLocal_133, "REPAP_PP", 4, 0, 0, 0))
							{
								iLocal_145 = unk_0xE3903F59E2F22150();
								iLocal_146 = unk_0x9EC3B269A34A2BEE(2000, 3000);
							}
						}
						break;
					
					case 1:
						func_17(&Local_139, 4, func_65(), "PAPARAZZO", 0, 1);
						if (unk_0x765F6FEEFF39224F(Local_139[4 /*10*/]) && !unk_0xBC2FC12AD0FBF72E(Local_139[4 /*10*/]))
						{
							if (func_5(&Local_139, cLocal_133, "REPAP_CALL1", 4, 0, 0, 0))
							{
								iLocal_145 = unk_0xE3903F59E2F22150();
								iLocal_146 = unk_0x9EC3B269A34A2BEE(2000, 3000);
							}
						}
						break;
					
					case 2:
						func_17(&Local_139, 5, func_65(), "PAP2", 0, 1);
						if (unk_0x765F6FEEFF39224F(Local_139[5 /*10*/]) && !unk_0xBC2FC12AD0FBF72E(Local_139[5 /*10*/]))
						{
							if (func_5(&Local_139, cLocal_133, "REPAP_CALL2", 4, 0, 0, 0))
							{
								iLocal_145 = unk_0xE3903F59E2F22150();
								iLocal_146 = unk_0x9EC3B269A34A2BEE(2000, 3000);
							}
						}
						break;
					
					case 3:
						func_17(&Local_139, 6, func_65(), "PAP3", 0, 1);
						if (unk_0x765F6FEEFF39224F(Local_139[6 /*10*/]) && !unk_0xBC2FC12AD0FBF72E(Local_139[6 /*10*/]))
						{
							if (func_5(&Local_139, cLocal_133, "REPAP_CALL3", 4, 0, 0, 0))
							{
								iLocal_145 = unk_0xE3903F59E2F22150();
								iLocal_146 = unk_0x9EC3B269A34A2BEE(2000, 3000);
							}
						}
						break;
					
					case 4:
						func_17(&Local_139, 7, func_65(), "PAP4", 0, 1);
						if (unk_0x765F6FEEFF39224F(Local_139[7 /*10*/]) && !unk_0xBC2FC12AD0FBF72E(Local_139[7 /*10*/]))
						{
							if (func_5(&Local_139, cLocal_133, "REPAP_CALL4", 4, 0, 0, 0))
							{
								iLocal_145 = unk_0xE3903F59E2F22150();
								iLocal_146 = unk_0x9EC3B269A34A2BEE(2000, 3000);
							}
						}
						break;
					}
				}
			}
	}
}

void func_178()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3[24];
	char* sVar4;
	vector3 vVar5[24];
	int iVar6;
	
	if (!unk_0xBC2FC12AD0FBF72E(iLocal_67))
	{
		if (unk_0xE38E3CF1625A4145(iLocal_121))
		{
			unk_0x983D75D9630FD905(iLocal_121, iLocal_194);
		}
		switch (iLocal_130)
		{
			case 0:
				unk_0x0483D0035D6E46FD("random@paparazzi@peek");
				unk_0x0483D0035D6E46FD("random@paparazzi@trans");
				unk_0x0483D0035D6E46FD("random@paparazzi@wait");
				if ((unk_0xE9CCF312047EBEE0("random@paparazzi@peek") && unk_0xE9CCF312047EBEE0("random@paparazzi@trans")) && unk_0xE9CCF312047EBEE0("random@paparazzi@wait"))
				{
					iLocal_174 = unk_0x38A6890195DD00D1(vLocal_187, vLocal_188, 2);
					unk_0x08798CBF817BA887(iLocal_67, iLocal_174, "random@paparazzi@peek", "left_peek_a", 1000f, -8f, 1, 0, 1148846080, 0);
					unk_0xC4A347124F39D998(iLocal_67, unk_0x33CD235DF1E6A94E(), -1, 4, 4);
					sLocal_175[0] = "peek_a";
					sLocal_175[1] = "peek_b";
					sLocal_175[2] = "peek_c";
					unk_0x4B06B5746CBEC99F(0.2f);
					iLocal_172 = 0;
					iLocal_189 = 0;
					bLocal_194 = false;
					iLocal_60 = 1;
					iLocal_190 = 0;
					iLocal_57 = 0;
					fLocal_191 = 0f;
					iLocal_130++;
				}
				break;
			
			case 1:
				if (unk_0x0E4018692D92041D(iLocal_190, 0))
				{
					if (!unk_0x0E4018692D92041D(iLocal_190, 1))
					{
						unk_0x8950ED5730F62EE8(&iLocal_190, 1);
					}
					else
					{
						iLocal_190 = 0;
					}
				}
				iVar2 = 0;
				bVar0 = unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), vLocal_181, vLocal_182, fLocal_183, 0, true, 0);
				bVar1 = unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), vLocal_178, vLocal_179, fLocal_180, 0, true, 0);
				if (unk_0xCE3CFF625BEBAA04(sLocal_177, "right_"))
				{
					if (bVar1)
					{
						sLocal_177 = "left_";
						iVar2 = 1;
					}
				}
				else if (bVar0)
				{
					sLocal_177 = "right_";
					iVar2 = 1;
				}
				if ((unk_0xDB4C79A9697E6A55(iLocal_174) && unk_0x4EDDCE9AAE0FC976(iLocal_174) > 0.9f) || iVar2)
				{
					if (iLocal_190 == 0)
					{
						unk_0xED68CDDDE25A144E(iLocal_67);
						iLocal_176++;
						if (iLocal_176 >= 3)
						{
							iLocal_176 = 0;
						}
						StringCopy(&cVar3, sLocal_177, 24);
						StringConCat(&cVar3, sLocal_175[iLocal_176], 24);
						iLocal_174 = unk_0x38A6890195DD00D1(vLocal_187, vLocal_188, 2);
						unk_0x08798CBF817BA887(iLocal_67, iLocal_174, "random@paparazzi@peek", &cVar3, 4f, -4f, 1, 0, 1148846080, 0);
						unk_0x8950ED5730F62EE8(&iLocal_190, 0);
					}
				}
				if (bVar0 || bVar1)
				{
					if (fLocal_191 <= 20f)
					{
						fLocal_191 = (fLocal_191 + unk_0x7C475FA8D877007F());
					}
					if ((unk_0xE3903F59E2F22150() - iLocal_173) > 5000 && iLocal_190 == 0)
					{
						if (vdist2(vLocal_52, vLocal_53) < (22.2f * 22.2f))
						{
							if (fLocal_191 < 10f)
							{
								if (iLocal_192)
								{
									sVar4 = "REPAP_SHT1";
								}
								else
								{
									sVar4 = "REPAP_SHT2";
								}
							}
							else
							{
								sVar4 = "REPAP_PRT";
							}
							if (func_19() == 1)
							{
								func_17(&Local_139, 1, unk_0x33CD235DF1E6A94E(), "FRANKLIN", 0, 1);
							}
							else if (func_19() == 0)
							{
								func_17(&Local_139, 1, unk_0x33CD235DF1E6A94E(), "MICHAEL", 0, 1);
							}
							else
							{
								func_17(&Local_139, 1, unk_0x33CD235DF1E6A94E(), "TREVOR", 0, 1);
							}
							if (func_5(&Local_139, cLocal_133, sVar4, 4, 0, 0, 0))
							{
								iLocal_192 = 1;
								if (!unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iLocal_67, 7f, 7f, 7f, 0, 1, 0))
								{
									unk_0xED68CDDDE25A144E(iLocal_67);
									StringCopy(&cVar5, sLocal_177, 24);
									StringConCat(&cVar5, "come_here", 24);
									iLocal_174 = unk_0x38A6890195DD00D1(vLocal_187, vLocal_188, 2);
									unk_0x08798CBF817BA887(iLocal_67, iLocal_174, "random@paparazzi@peek", &cVar5, 4f, -4f, 1, 0, 1148846080, 0);
									unk_0x8950ED5730F62EE8(&iLocal_190, 0);
								}
								iLocal_173 = unk_0xE3903F59E2F22150();
							}
						}
					}
				}
				if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), vLocal_184, vLocal_185, fLocal_186, 0, true, 0) && iLocal_190 == 0)
				{
					if (unk_0xE38E3CF1625A4145(iLocal_120))
					{
						unk_0x1ABDB383C83A336A(&iLocal_120);
						if (!unk_0xE38E3CF1625A4145(iLocal_121))
						{
							iLocal_121 = func_183(iLocal_67, 0, 145);
						}
					}
					unk_0xED68CDDDE25A144E(iLocal_67);
					iLocal_174 = unk_0x38A6890195DD00D1(vLocal_187, vLocal_188, 2);
					if (bVar1)
					{
						unk_0x08798CBF817BA887(iLocal_67, iLocal_174, "random@paparazzi@trans", "trans_left_to_wait", 8f, -4f, 1, 0, 1148846080, 0);
					}
					else
					{
						unk_0x08798CBF817BA887(iLocal_67, iLocal_174, "random@paparazzi@trans", "trans_right_to_wait", 8f, -4f, 1, 0, 1148846080, 0);
					}
					unk_0x8950ED5730F62EE8(&iLocal_190, 0);
					iLocal_130++;
				}
				break;
			
			case 2:
				if (unk_0xDB4C79A9697E6A55(iLocal_174) && unk_0x4EDDCE9AAE0FC976(iLocal_174) > 0.9f)
				{
					if (unk_0xD76D6BCC14B95CE1(iLocal_67, 242628503) != 1)
					{
						unk_0xED68CDDDE25A144E(iLocal_67);
						unk_0x108754262311D34F(iLocal_67, "random@paparazzi@wait", "wait_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
						iLocal_170 = 2;
						settimera(0);
					}
					iLocal_130++;
				}
				break;
			
			case 3:
				if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
				{
					if (func_180())
					{
						unk_0x65F544B458249682(&iLocal_70);
						iLocal_70 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
						unk_0x0D21E1FDE062ED99(iLocal_70, true, 1);
						unk_0x1C2B995BA5ADE8FF(iLocal_70, false, 0);
						unk_0xD303E20CB0AE4AD0(iLocal_70, 1);
						bLocal_129 = true;
					}
				}
				if (!bLocal_129)
				{
					unk_0xD303E20CB0AE4AD0(iLocal_70, 1);
					if (func_142(&Local_139, cLocal_133, "REPAP_EXP", "REPAP_EXP_2", 4, 0, 0))
					{
						settimera(0);
						bLocal_194 = true;
						iLocal_130 = 100;
					}
				}
				else if (func_142(&Local_139, cLocal_133, "REPAP_EXPB", "REPAP_EXPB_2", 4, 0, 0))
				{
					settimera(0);
					bLocal_194 = true;
					iLocal_130++;
				}
				if (timera() > 2000)
				{
					func_179(vLocal_68, 1);
				}
				break;
			
			case 4:
				func_49();
				if (unk_0x91D5C8283D19AF49(iLocal_70, 0))
				{
					if (unk_0x335C0645074963FE(iLocal_70, iLocal_67, Global_19 + Vector(2f, 12f, 12f), 0, 1, 0) && !bLocal_129)
					{
						if (unk_0xD76D6BCC14B95CE1(iLocal_67, 242628503) != 1 && !iLocal_189)
						{
							unk_0x99414FB2D30425C1(&iVar6);
							unk_0x7E268975AF5EA74F(0, 259.2552f, 122.2986f, 100.441f, 1f, 20000, 1048576000, 0, 1193033728);
							unk_0x11C4AF4137F2A4B5(0, unk_0x33CD235DF1E6A94E(), 0);
							unk_0xC734F59A13D39AEF(iVar6);
							unk_0x13A2D602CD10CBAC(iLocal_67, iVar6);
							unk_0x880B00F3FAE4C022(iLocal_67, 0, 0);
							unk_0xA7A57E7757ED035E(&iVar6);
							iLocal_189 = 1;
						}
						else
						{
							unk_0xA9E472293522522F(iLocal_67, 1f);
							func_179(259.2552f, 122.2986f, 100.441f, 0);
						}
					}
					else
					{
						func_179(vLocal_68, 1);
					}
					if (!bLocal_129)
					{
						if (unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iLocal_70, 0))
						{
							if (unk_0xE38E3CF1625A4145(iLocal_122))
							{
								unk_0x1ABDB383C83A336A(&iLocal_122);
							}
							if (!unk_0xE38E3CF1625A4145(iLocal_121))
							{
								iLocal_121 = func_183(iLocal_67, 0, 145);
							}
						}
					}
					if ((unk_0x335C0645074963FE(iLocal_70, iLocal_67, Global_19, 0, 1, 0) && func_173(iLocal_70)) && (timera() > 6000 || !bLocal_129))
					{
						if (!iLocal_172)
						{
							func_102();
							if (unk_0xA2F0EA9AB6142D97(unk_0x33CD235DF1E6A94E()))
							{
								if (func_19() == 1)
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_ONF", 4, 0, 0, 0))
									{
										iLocal_172 = 1;
									}
								}
								else if (func_19() == 0)
								{
									if (func_5(&Local_139, cLocal_133, "REPAP_ONM", 4, 0, 0, 0))
									{
										iLocal_172 = 1;
									}
								}
								else if (func_5(&Local_139, cLocal_133, "REPAP_ONT", 4, 0, 0, 0))
								{
									iLocal_172 = 1;
								}
							}
							else if (func_19() == 1)
							{
								if (func_5(&Local_139, cLocal_133, "REPAP_INF", 4, 0, 0, 0))
								{
									iLocal_172 = 1;
								}
							}
							else if (func_19() == 0)
							{
								if (func_5(&Local_139, cLocal_133, "REPAP_INM", 4, 0, 0, 0))
								{
									iLocal_172 = 1;
								}
							}
							else if (func_5(&Local_139, cLocal_133, "REPAP_INT", 4, 0, 0, 0))
							{
								iLocal_172 = 1;
							}
						}
						else
						{
							if (!bLocal_129)
							{
								iLocal_130 = -5;
							}
							else
							{
								iLocal_130++;
							}
							unk_0xED68CDDDE25A144E(iLocal_67);
							unk_0xC838CE9837D0ABAF(iLocal_67, iLocal_70, -1, func_171(iLocal_70), 1f, 8388608, 0);
						}
					}
				}
				break;
			
			case -5:
				if (bLocal_129)
				{
					func_179(vLocal_68, 1);
				}
				else
				{
					func_179(259.2552f, 122.2986f, 100.441f, 0);
				}
				if (unk_0x91D5C8283D19AF49(iLocal_70, 0))
				{
					if (func_155(iLocal_70, 1093140480, 1, 1056964608, 0, 1, 0))
					{
						iLocal_130 = 5;
					}
				}
				break;
			
			case 5:
				if (unk_0x91D5C8283D19AF49(iLocal_70, 0))
				{
					if (!unk_0xBC2FC12AD0FBF72E(iLocal_67) && unk_0x10930B9CAD4111C2(iLocal_67, iLocal_70, 0))
					{
						if (unk_0xE38E3CF1625A4145(iLocal_121))
						{
							unk_0x1ABDB383C83A336A(&iLocal_121);
						}
						unk_0xE0DAC4ABE9900D9A(unk_0x33CD235DF1E6A94E());
						func_181(1);
					}
					else
					{
						if (!Global_3 && !bLocal_56)
						{
							if ((unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iLocal_70, 0) && !unk_0x10930B9CAD4111C2(iLocal_67, iLocal_70, 1)) && !unk_0xD4B4F68F3449CBEC(iLocal_70, 225.1779f, 125.6632f, 113.6647f, 262.3032f, 111.8771f, 97.16339f, 37f, 0, true, 0))
							{
								if (bLocal_129)
								{
									unk_0x33F6BE48E356DA27(iLocal_67, 2, true);
									sLocal_132 = "REPAP_GUP";
									func_181(6);
								}
								else
								{
									unk_0x98F04A4FFB4AD01C(unk_0x95B959F18401C09A(), 1, 0);
									unk_0x33F6BE48E356DA27(iLocal_67, 2, true);
									sLocal_132 = "REPAP_CP";
									func_181(6);
								}
							}
						}
						if (!unk_0x10930B9CAD4111C2(iLocal_67, iLocal_70, 0))
						{
							if (unk_0xD76D6BCC14B95CE1(iLocal_67, -1794415470) != 1)
							{
								unk_0xED68CDDDE25A144E(iLocal_67);
								unk_0xC838CE9837D0ABAF(iLocal_67, iLocal_70, -1, func_171(iLocal_70), 1f, 8388608, 0);
							}
							else if (vdist(vLocal_53, unk_0x2CA911E7569D12EA(iLocal_70, 1f, 0f, 0f)) < 1f)
							{
								unk_0xA9E472293522522F(iLocal_67, 1f);
							}
						}
					}
				}
				break;
			
			case 100:
				if (unk_0x91D5C8283D19AF49(iLocal_70, 0))
				{
					if (!func_73())
					{
						func_102();
						if (func_19() == 1)
						{
							if (func_5(&Local_139, cLocal_133, "REPAP_YSF", 4, 0, 0, 0))
							{
								iLocal_130++;
							}
						}
						else if (func_19() == 0)
						{
							func_102();
							if (func_5(&Local_139, cLocal_133, "REPAP_YSM", 4, 0, 0, 0))
							{
								iLocal_130++;
							}
							iLocal_60 = 0;
						}
						else if (func_5(&Local_139, cLocal_133, "REPAP_YST", 4, 0, 0, 0))
						{
							iLocal_130++;
						}
					}
				}
				if (iLocal_130 == 101)
				{
					fLocal_195 = 0f;
				}
				func_179(vLocal_68, 1);
				break;
			
			case 101:
				if (vdist2(vLocal_52, vLocal_53) < 49f && !unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
				{
					if (unk_0x8BB475EA09C9A0EB(unk_0x33CD235DF1E6A94E()) < 3f)
					{
						fLocal_195 = (fLocal_195 + unk_0x7C475FA8D877007F());
					}
					else
					{
						fLocal_195 = (fLocal_195 - (unk_0x7C475FA8D877007F() * 2f));
					}
					if (fLocal_195 > 10f)
					{
						if (func_5(&Local_139, cLocal_133, "REPAP_PRT", 4, 0, 0, 0))
						{
							fLocal_195 = 0f;
						}
					}
				}
				if (unk_0x91D5C8283D19AF49(iLocal_70, 0))
				{
					if (!unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iLocal_70, 0) && func_180())
					{
						bLocal_129 = true;
						iLocal_60 = 1;
						iLocal_70 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
						unk_0x0D21E1FDE062ED99(iLocal_70, true, 1);
					}
					if (unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iLocal_70, 0))
					{
						if (unk_0xE38E3CF1625A4145(iLocal_122))
						{
							unk_0x1ABDB383C83A336A(&iLocal_122);
						}
						if (!unk_0xE38E3CF1625A4145(iLocal_121))
						{
							iLocal_121 = func_183(iLocal_67, 0, 145);
						}
					}
					else
					{
						if (unk_0xE38E3CF1625A4145(iLocal_121))
						{
							unk_0x1ABDB383C83A336A(&iLocal_121);
						}
						if (!unk_0xE38E3CF1625A4145(iLocal_122))
						{
							iLocal_122 = func_169(iLocal_70, 0, 0);
						}
					}
					if (unk_0xEE984ED4E4A374BE(unk_0x33CD235DF1E6A94E(), iLocal_70))
					{
						if (unk_0xE38E3CF1625A4145(iLocal_122))
						{
							unk_0x1ABDB383C83A336A(&iLocal_122);
						}
						if (!unk_0xE38E3CF1625A4145(iLocal_121))
						{
							iLocal_121 = func_183(iLocal_67, 0, 145);
						}
						func_182("MAG_2_ESCAPE_PAP_CHASE");
						iLocal_130 = 4;
					}
					if (!iLocal_60)
					{
						if (vdist2(vLocal_52, vLocal_54) < 9f && func_19() == 0)
						{
							if (func_5(&Local_139, cLocal_133, "REPAP_MIKE", 4, 0, 0, 0))
							{
								iLocal_60 = 1;
							}
						}
					}
				}
				func_179(vLocal_68, 1);
				break;
		}
		if (!Global_3 && !bLocal_56)
		{
			if (unk_0x91D5C8283D19AF49(iLocal_70, 0))
			{
				if (vdist(vLocal_52, vLocal_68) > 75f)
				{
					func_181(6);
				}
				if (func_194())
				{
					func_181(5);
				}
			}
		}
		if (!bLocal_129)
		{
			if (!unk_0x91D5C8283D19AF49(iLocal_70, 0))
			{
				if (!Global_3 && !bLocal_56)
				{
					func_181(5);
				}
			}
			else
			{
				if (!bLocal_129)
				{
					if (!Global_3 && !bLocal_56)
					{
						if (unk_0xE80842D7B53F8525(iLocal_70) < iLocal_64)
						{
							if (unk_0x91BBD269506D61D2(iLocal_70, unk_0x33CD235DF1E6A94E(), 1))
							{
								iLocal_65 = (iLocal_65 + (iLocal_64 - unk_0xE80842D7B53F8525(iLocal_70)));
							}
							unk_0x0D847D71D9E6142E(iLocal_70);
						}
						if (iLocal_65 > 250)
						{
							if (unk_0xC4BA1231BBAF1161(iLocal_67, iLocal_70) && vdist(vLocal_53, vLocal_54) < 25f)
							{
								func_181(5);
							}
						}
					}
				}
				iLocal_64 = unk_0xE80842D7B53F8525(iLocal_70);
			}
		}
		if (!unk_0xBC2FC12AD0FBF72E(iLocal_67))
		{
			if (unk_0xD82CBCB7E04DDA8A(iLocal_67))
			{
				if (!Global_3 && !bLocal_56)
				{
					func_181(5);
				}
			}
		}
	}
}

void func_179(vector3 vParam0, bool bParam1)
{
	if (vdist(vLocal_53, vParam0) > 2.5f)
	{
		if (unk_0xD76D6BCC14B95CE1(iLocal_67, 713668775) != 1)
		{
			unk_0x7E268975AF5EA74F(iLocal_67, vParam0, 1f, -1, 0.25f, 0, 1193033728);
		}
	}
	else if (unk_0xD76D6BCC14B95CE1(iLocal_67, 713668775) != 1)
	{
		func_139(bParam1);
		unk_0xC4A347124F39D998(iLocal_67, unk_0x33CD235DF1E6A94E(), -1, 16, 2);
	}
}

bool func_180()
{
	return (((((unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0) && unk_0x91D5C8283D19AF49(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), 0)) && (unk_0x0C2E237744BA0026(unk_0x541D5C57194E73C4(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0))) || unk_0x9E374B5F44A76AE2(unk_0x541D5C57194E73C4(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0))))) && unk_0xC92AA0DBDDDE8BB8(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0)) > 0) && func_173(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0))) && !Global_105612);
}

void func_181(int iParam0)
{
	iLocal_45 = iParam0;
	iLocal_130 = 0;
}

void func_182(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_144)
	{
		if (!unk_0xCE3CFF625BEBAA04(iLocal_144[iVar0], sParam0))
		{
			if (unk_0x7C71681384076318(iLocal_144[iVar0]))
			{
				unk_0x7CED302277C0F3D3(iLocal_144[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_144)
	{
		if (unk_0xCE3CFF625BEBAA04(iLocal_144[iVar0], sParam0))
		{
			if (!unk_0x7C71681384076318(iLocal_144[iVar0]))
			{
				unk_0xDEFB5E2E5CBD460A(iLocal_144[iVar0]);
			}
		}
		iVar0++;
	}
}

int func_183(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_170(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xE38E3CF1625A4145(iVar0)) && unk_0xEAF855A7DC28BC8D(&(Global_106565.f_28044[iParam2 /*29*/].f_3)))
	{
		unk_0x1C95CD840303FC37(iVar0, &(Global_106565.f_28044[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_184(int iParam0)
{
	if (func_187())
	{
		Global_106555 = 1;
		Global_106552 = unk_0xE3903F59E2F22150();
		if (func_88(Global_106554))
		{
			func_185(0);
		}
		unk_0xF72C40745AA793F1(1, "RE_TITLE");
		if (iParam0 && func_88(Global_106554))
		{
			unk_0x0B1FD891620F7745();
		}
		return 1;
	}
	return 0;
}

void func_185(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_106565.f_24989.f_2 < 3)
			{
				if (!unk_0x6B59932722922B69())
				{
					func_166(func_186(iParam0), -1);
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
					func_166(func_186(iParam0), -1);
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
					func_166(func_186(iParam0), -1);
					Global_106565.f_24989.f_4++;
					unk_0x8950ED5730F62EE8(&Global_106561, 2);
				}
			}
			break;
	}
}

char* func_186(int iParam0)
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

int func_187()
{
	switch (func_188(&Global_25824, 0, 5, 0, unk_0x8C40DC84EDF05997()))
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

int func_188(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_192(0))
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
		if (!func_190(iParam2))
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
			func_189(uParam0, iParam4);
		}
	}
	return 2;
}

void func_189(var uParam0, int iParam1)
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

bool func_190(int iParam0)
{
	return func_191(iParam0, Global_36425);
}

int func_191(int iParam0, int iParam1)
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

int func_192(int iParam0)
{
	if (Global_36425 == 15)
	{
		return 0;
	}
	if (func_190(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_193()
{
	int iVar0;
	
	if (!unk_0xBC2FC12AD0FBF72E(iLocal_67))
	{
		unk_0x33F6BE48E356DA27(iLocal_67, 2, false);
		unk_0xECCD4FDA45197F97(iLocal_67, unk_0x33CD235DF1E6A94E(), 300f, -1, 0, 0);
	}
	iVar0 = 0;
	while (iVar0 < Local_109)
	{
		if (!unk_0xBC2FC12AD0FBF72E(Local_109[iVar0 /*18*/]))
		{
			unk_0xECCD4FDA45197F97(Local_109[iVar0 /*18*/], unk_0x33CD235DF1E6A94E(), 300f, -1, 0, 0);
			unk_0x0648A75D3F60E864(Local_109[iVar0 /*18*/], -2065892691);
			unk_0x4A852F02088ECC9D(Local_109[iVar0 /*18*/], false);
		}
		iVar0++;
	}
}

int func_194()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < Local_109)
	{
		if (unk_0x765F6FEEFF39224F(Local_109[iVar1 /*18*/]) && !unk_0xBC2FC12AD0FBF72E(Local_109[iVar1 /*18*/]))
		{
			if (unk_0x042B0E494045A7DF(Local_109[iVar1 /*18*/]))
			{
				if (((unk_0x416C37C19CCE0077(Local_109[iVar1 /*18*/].f_6, 5f, 1) || unk_0xCA12322D8FBBDBEE(-1, Local_109[iVar1 /*18*/].f_6, 10f)) || unk_0xD82CBCB7E04DDA8A(Local_109[iVar1 /*18*/])) || (iLocal_138[iVar1] > 10 && iLocal_45 == 0))
				{
					iVar0 = 1;
				}
			}
		}
		iVar1++;
	}
	if (iLocal_110 > 1)
	{
		iVar0 = 1;
	}
	iVar1 = 0;
	while (iVar1 < Local_108)
	{
		if (unk_0x765F6FEEFF39224F(Local_108[iVar1 /*18*/]))
		{
			if (unk_0x91D5C8283D19AF49(Local_108[iVar1 /*18*/], 0) && unk_0x042B0E494045A7DF(Local_108[iVar1 /*18*/]))
			{
				if (unk_0x17260B4EA0652E1C(Local_108[iVar1 /*18*/]))
				{
					iVar0 = 1;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_195()
{
	if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()) && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		if (vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), vLocal_43) < (75f * 75f))
		{
			return 1;
		}
		if (vmag2(unk_0x43D8A2CCB19FE8A8(unk_0x33CD235DF1E6A94E())) > 1369f && !func_206())
		{
			return 0;
		}
	}
	if (func_202())
	{
		return 1;
	}
	if (func_196(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_196(float fParam0, bool bParam1)
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
		if (func_21(func_19()))
		{
			iVar5 = func_93();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0x0E4018692D92041D(Global_106565.f_18568[iVar1 /*6*/], 2) && !unk_0x0E4018692D92041D(Global_106565.f_18568[iVar1 /*6*/], 3))
				{
					func_197(iVar1, &Var0);
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

void func_197(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_198(uParam1, "Abigail1", func_200(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_199(iParam0), 1, 0);
			break;
		
		case 1:
			func_198(uParam1, "Abigail2", func_200(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_199(iParam0), 1, 0);
			break;
		
		case 2:
			func_198(uParam1, "Barry1", func_200(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_199(iParam0), 1, 0);
			break;
		
		case 3:
			func_198(uParam1, "Barry2", func_200(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_199(iParam0), 1, 1);
			break;
		
		case 4:
			func_198(uParam1, "Barry3", func_200(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_199(iParam0), 0, 0);
			break;
		
		case 5:
			func_198(uParam1, "Barry3A", func_200(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 6:
			func_198(uParam1, "Barry3C", func_200(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 7:
			func_198(uParam1, "Barry4", func_200(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_199(iParam0), 0, 0);
			break;
		
		case 8:
			func_198(uParam1, "Dreyfuss1", func_200(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_199(iParam0), 0, 0);
			break;
		
		case 9:
			func_198(uParam1, "Epsilon1", func_200(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_199(iParam0), 0, 0);
			break;
		
		case 10:
			func_198(uParam1, "Epsilon2", func_200(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_199(iParam0), 1, 0);
			break;
		
		case 11:
			func_198(uParam1, "Epsilon3", func_200(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_199(iParam0), 0, 0);
			break;
		
		case 12:
			func_198(uParam1, "Epsilon4", func_200(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_199(iParam0), 0, 0);
			break;
		
		case 13:
			func_198(uParam1, "Epsilon5", func_200(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_199(iParam0), 1, 0);
			break;
		
		case 14:
			func_198(uParam1, "Epsilon6", func_200(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 15:
			func_198(uParam1, "Epsilon7", func_200(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_199(iParam0), 0, 0);
			break;
		
		case 16:
			func_198(uParam1, "Epsilon8", func_200(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_199(iParam0), 1, 0);
			break;
		
		case 17:
			func_198(uParam1, "Extreme1", func_200(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 18:
			func_198(uParam1, "Extreme2", func_200(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 19:
			func_198(uParam1, "Extreme3", func_200(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 20:
			func_198(uParam1, "Extreme4", func_200(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_199(iParam0), 0, 0);
			break;
		
		case 21:
			func_198(uParam1, "Fanatic1", func_200(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_199(iParam0), 1, 0);
			break;
		
		case 22:
			func_198(uParam1, "Fanatic2", func_200(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_199(iParam0), 1, 0);
			break;
		
		case 23:
			func_198(uParam1, "Fanatic3", func_200(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_199(iParam0), 0, 1);
			break;
		
		case 24:
			func_198(uParam1, "Hao1", func_200(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_199(iParam0), 0, 1);
			break;
		
		case 25:
			func_198(uParam1, "Hunting1", func_200(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 26:
			func_198(uParam1, "Hunting2", func_200(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 27:
			func_198(uParam1, "Josh1", func_200(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_199(iParam0), 1, 0);
			break;
		
		case 28:
			func_198(uParam1, "Josh2", func_200(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_199(iParam0), 1, 1);
			break;
		
		case 29:
			func_198(uParam1, "Josh3", func_200(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_199(iParam0), 1, 1);
			break;
		
		case 30:
			func_198(uParam1, "Josh4", func_200(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_199(iParam0), 1, 0);
			break;
		
		case 31:
			func_198(uParam1, "Maude1", func_200(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 32:
			func_198(uParam1, "Minute1", func_200(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 33:
			func_198(uParam1, "Minute2", func_200(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 34:
			func_198(uParam1, "Minute3", func_200(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 35:
			func_198(uParam1, "MrsPhilips1", func_200(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_199(iParam0), 0, 0);
			break;
		
		case 36:
			func_198(uParam1, "MrsPhilips2", func_200(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_199(iParam0), 0, 0);
			break;
		
		case 37:
			func_198(uParam1, "Nigel1", func_200(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_199(iParam0), 1, 0);
			break;
		
		case 38:
			func_198(uParam1, "Nigel1A", func_200(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_199(iParam0), 1, 1);
			break;
		
		case 39:
			func_198(uParam1, "Nigel1B", func_200(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_199(iParam0), 1, 1);
			break;
		
		case 40:
			func_198(uParam1, "Nigel1C", func_200(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_199(iParam0), 1, 1);
			break;
		
		case 41:
			func_198(uParam1, "Nigel1D", func_200(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_199(iParam0), 1, 1);
			break;
		
		case 42:
			func_198(uParam1, "Nigel2", func_200(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_199(iParam0), 1, 1);
			break;
		
		case 43:
			func_198(uParam1, "Nigel3", func_200(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_199(iParam0), 1, 1);
			break;
		
		case 44:
			func_198(uParam1, "Omega1", func_200(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_199(iParam0), 0, 0);
			break;
		
		case 45:
			func_198(uParam1, "Omega2", func_200(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_199(iParam0), 0, 0);
			break;
		
		case 46:
			func_198(uParam1, "Paparazzo1", func_200(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 47:
			func_198(uParam1, "Paparazzo2", func_200(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 48:
			func_198(uParam1, "Paparazzo3", func_200(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_199(iParam0), 0, 0);
			break;
		
		case 49:
			func_198(uParam1, "Paparazzo3A", func_200(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 50:
			func_198(uParam1, "Paparazzo3B", func_200(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 51:
			func_198(uParam1, "Paparazzo4", func_200(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_199(iParam0), 0, 0);
			break;
		
		case 52:
			func_198(uParam1, "Rampage1", func_200(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_199(iParam0), 0, 0);
			break;
		
		case 54:
			func_198(uParam1, "Rampage3", func_200(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_199(iParam0), 1, 0);
			break;
		
		case 55:
			func_198(uParam1, "Rampage4", func_200(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_199(iParam0), 1, 0);
			break;
		
		case 56:
			func_198(uParam1, "Rampage5", func_200(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_199(iParam0), 0, 0);
			break;
		
		case 53:
			func_198(uParam1, "Rampage2", func_200(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_199(iParam0), 1, 0);
			break;
		
		case 57:
			func_198(uParam1, "TheLastOne", func_200(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 58:
			func_198(uParam1, "Tonya1", func_200(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 59:
			func_198(uParam1, "Tonya2", func_200(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 60:
			func_198(uParam1, "Tonya3", func_200(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 61:
			func_198(uParam1, "Tonya4", func_200(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 62:
			func_198(uParam1, "Tonya5", func_200(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_198(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_199(int iParam0)
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

struct<2> func_200(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_201(iParam0) };
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

struct<2> func_201(int iParam0)
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

int func_202()
{
	if (func_205() && !func_206())
	{
		return 1;
	}
	if (func_204() && func_203())
	{
		return 1;
	}
	return 0;
}

bool func_203()
{
	return Global_106283 > 0;
}

int func_204()
{
	if (Global_90634 != -1)
	{
		return 1;
	}
	return 0;
}

int func_205()
{
	if (Global_90634 != -1)
	{
		return unk_0x0E4018692D92041D(Global_84500[Global_90634 /*34*/].f_15, 20);
	}
	return 0;
}

int func_206()
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

void func_207()
{
	func_209(39, 1);
	func_209(40, 1);
	func_209(41, 1);
	func_209(42, 1);
	func_209(43, 1);
	func_209(44, 1);
	iLocal_120 = func_208(vLocal_68);
	iLocal_67 = unk_0x9BA5CF280376EEA4(26, joaat("a_f_y_bevhills_03"), vLocal_68, fLocal_69, 1, true);
	unk_0x28F648743D7DE312(iLocal_67, 1, true);
	unk_0x28F648743D7DE312(iLocal_67, 17, true);
	unk_0x33F6BE48E356DA27(iLocal_67, 128, true);
	unk_0x897EF720254BBEA3(iLocal_67, true);
	unk_0x7D1F395C3A7A37BE(iLocal_67, 0);
	unk_0x93AA93DA1B137032(iLocal_67, 0, 0, 1, 0);
	unk_0x93AA93DA1B137032(iLocal_67, 2, 0, 0, 0);
	unk_0x93AA93DA1B137032(iLocal_67, 3, 0, 0, 0);
	unk_0x93AA93DA1B137032(iLocal_67, 4, 0, 0, 0);
	unk_0x93AA93DA1B137032(iLocal_67, 7, 1, 0, 0);
	unk_0x93AA93DA1B137032(iLocal_67, 8, 0, 0, 0);
	unk_0x02A7958A2E0496B2(iLocal_67, 1);
	unk_0x4A852F02088ECC9D(iLocal_67, true);
	unk_0xF0BE7CB40DE62A2F(iLocal_67, false);
	unk_0x5464B9731013E08C(iLocal_67, "LACEY");
	if (Global_3 || bLocal_56)
	{
		unk_0x9611832841071B69(iLocal_67, true);
	}
	if (unk_0x9315FCF6CFE2AB41("CELEBRITY", &iLocal_55))
	{
		unk_0x0648A75D3F60E864(iLocal_67, iLocal_55);
	}
	iLocal_70 = unk_0xC651C43AB13A15E5(joaat("surano"), vLocal_71, fLocal_72, true, true, false);
	unk_0xC7C47D4054903839(iLocal_70, vLocal_71, 0, 0, 1);
	unk_0x6FBC94381B016AB4(iLocal_70, 0.1293f, -0.0323f, -0.1606f, 0.978f);
	unk_0x1C2B995BA5ADE8FF(iLocal_70, false, 0);
	unk_0xD6D2420F0051065A(iLocal_70, 10);
	unk_0x1B2303F9DC2D90D5(iLocal_70, 1084227584);
	unk_0xD303E20CB0AE4AD0(iLocal_70, 3);
	unk_0x23F395CF89089EB2(iLocal_70, 1);
	unk_0xAE949FBD474D8C74(iLocal_70, 1);
	unk_0xE3040995362DF6F7(iLocal_70, unk_0xF0895A7452078524(1));
	if (func_19() == 1)
	{
		func_17(&Local_139, 1, unk_0x33CD235DF1E6A94E(), "FRANKLIN", 0, 1);
	}
	else if (func_19() == 0)
	{
		func_17(&Local_139, 1, unk_0x33CD235DF1E6A94E(), "MICHAEL", 0, 1);
	}
	else
	{
		func_17(&Local_139, 1, unk_0x33CD235DF1E6A94E(), "TREVOR", 0, 1);
	}
	func_17(&Local_139, 3, iLocal_67, "LACEY", 0, 1);
	iLocal_136[0] = "idle_a";
	iLocal_136[1] = "idle_b";
	iLocal_136[2] = "idle_c";
	iLocal_136[3] = "idle_d";
	iLocal_136[4] = "idle_e";
	iLocal_136[5] = "idle_f";
	iLocal_136[6] = "idle_g";
	iLocal_136[7] = "idle_h";
	iLocal_136[8] = "idle_i";
	iLocal_144[0] = "MAG_2_ESCAPE_PAP_GET_CAR";
	iLocal_144[1] = "MAG_2_ESCAPE_PAP_CHASE";
	iLocal_144[2] = "MAG_2_ESCAPE_PAP_TAKE_ACTRESS_HOME";
	unk_0x8C4EA5F6857553AE(joaat("vader"), true);
	unk_0x8C4EA5F6857553AE(joaat("surano"), true);
	unk_0x8C4EA5F6857553AE(joaat("cavalcade2"), true);
}

int func_208(vector3 vParam0)
{
	int iVar0;
	
	iVar0 = unk_0x2C0ED4741A007C6A(vParam0);
	unk_0xE447A1B9434714F3(iVar0, 0);
	unk_0xAE71BEA7BBBFB78F(iVar0, 0);
	return iVar0;
}

void func_209(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_213(iParam0, 2, 1))
		{
			func_212(iParam0, 2, 1);
		}
	}
	else if (func_213(iParam0, 2, 1))
	{
		func_210(iParam0, 2, 1);
	}
}

void func_210(int iParam0, int iParam1, bool bParam2)
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
		if (func_83() == 0)
		{
			iVar0 = func_118(func_211(iParam0), -1, 0);
			unk_0xCE689A8E8C42ED78(&iVar0, iParam1);
			func_114(func_211(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xCE689A8E8C42ED78(&(Global_106565.f_668[iParam0]), iParam1);
	}
}

int func_211(int iParam0)
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

void func_212(int iParam0, int iParam1, bool bParam2)
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
		if (func_83() == 0)
		{
			iVar0 = func_118(func_211(iParam0), -1, 0);
			unk_0x8950ED5730F62EE8(&iVar0, iParam1);
			func_114(func_211(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x8950ED5730F62EE8(&(Global_106565.f_668[iParam0]), iParam1);
	}
}

int func_213(int iParam0, int iParam1, bool bParam2)
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
		if (func_83() == 0)
		{
			return unk_0x0E4018692D92041D(func_118(func_211(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x0E4018692D92041D(Global_106565.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_214()
{
	if (!iLocal_73)
	{
		func_222(&uLocal_74, joaat("surano"));
		func_222(&uLocal_74, joaat("prop_ld_test_01"));
		func_222(&uLocal_74, joaat("a_f_y_bevhills_03"));
		func_222(&uLocal_74, joaat("a_m_y_genstreet_02"));
		func_222(&uLocal_74, joaat("vader"));
		func_222(&uLocal_74, joaat("cavalcade2"));
		func_222(&uLocal_74, joaat("prop_pap_camera_01"));
		func_219(&uLocal_74);
		iLocal_73 = 1;
	}
	if (!func_215(&uLocal_74))
	{
		return 0;
	}
	unk_0x0483D0035D6E46FD("random@escape_paparazzi@standing@");
	unk_0x0483D0035D6E46FD("random@paparazzi@pap_anims");
	unk_0x0483D0035D6E46FD("random@paparazzi@peek");
	unk_0x0483D0035D6E46FD("random@paparazzi@trans");
	unk_0x0483D0035D6E46FD("random@paparazzi@wait");
	unk_0x0483D0035D6E46FD("veh@std@ps@idle_panic");
	unk_0x0483D0035D6E46FD("veh@low@front_ps@idle_panic");
	unk_0x0483D0035D6E46FD(sLocal_135);
	unk_0x2EE8D1440C9060EF("ESCPAP", 0);
	if (((((((((unk_0xE9CCF312047EBEE0("random@escape_paparazzi@standing@") && unk_0xE9CCF312047EBEE0("random@paparazzi@pap_anims")) && unk_0xE9CCF312047EBEE0("random@paparazzi@peek")) && unk_0xE9CCF312047EBEE0("random@paparazzi@trans")) && unk_0xE9CCF312047EBEE0("random@paparazzi@wait")) && unk_0xE9CCF312047EBEE0("veh@std@ps@idle_panic")) && unk_0xE9CCF312047EBEE0("veh@low@front_ps@idle_panic")) && unk_0xE9CCF312047EBEE0(sLocal_135)) && unk_0x8A7F864DAB908749(0)) && unk_0x3C05A6D663EA1B6A("Distant_Camera_Flash", false, -1))
	{
		return 1;
	}
	return 0;
}

int func_215(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_31)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x0E4018692D92041D((*uParam0)[iVar0 /*2*/], 30))
		{
			if (!unk_0x0E4018692D92041D((*uParam0)[iVar0 /*2*/], 29))
			{
				return 0;
			}
			if (!func_216(uParam0[iVar0 /*2*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_31 = 0;
	return 1;
}

bool func_216(var uParam0)
{
	return func_217(*uParam0, "NULL", uParam0->f_1);
}

int func_217(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0x0E4018692D92041D(iParam0, 30))
	{
		if (unk_0x0E4018692D92041D(iParam0, 29))
		{
			switch (func_218(iParam0))
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

int func_218(int iParam0)
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

void func_219(var uParam0)
{
	func_220(uParam0, 9, -1, 0);
}

void func_220(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (!func_221(iParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x0E4018692D92041D((*uParam0)[iVar0 /*2*/], 30))
		{
			if (unk_0x0E4018692D92041D((*uParam0)[iVar0 /*2*/], iParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*2*/])->f_1 == iParam2)
					{
						return;
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
	if (!uParam0->f_31)
	{
		uParam0->f_31 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!unk_0x0E4018692D92041D((*uParam0)[iVar0 /*2*/], 30))
		{
			(uParam0[iVar0 /*2*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*2*/] = iParam3;
			unk_0x8950ED5730F62EE8(uParam0[iVar0 /*2*/], iParam1);
			unk_0x8950ED5730F62EE8(uParam0[iVar0 /*2*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_221(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 1;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 0;
			break;
		
		case 9:
			return 1;
			break;
	}
	return 0;
}

void func_222(var uParam0, int iParam1)
{
	func_220(uParam0, 0, iParam1, 0);
}

int func_223()
{
	if (!func_190(5))
	{
		return 1;
	}
	if (func_202())
	{
		return 1;
	}
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		if (vmag2(unk_0x43D8A2CCB19FE8A8(unk_0x33CD235DF1E6A94E())) > 1369f && !func_206())
		{
			return 0;
		}
	}
	if (func_196(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_224()
{
	if ((Global_106554 == func_97() && unk_0x40AC0B9EFCB6A65B()) && Global_106555)
	{
		return 1;
	}
	return 0;
}

void func_225(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_31)
	{
		if ((unk_0xE77FA521699F639C() >= (uParam0->f_32 + uParam0->f_33) || unk_0x0E4018692D92041D(Global_93682.f_20, 2)) || unk_0x0E4018692D92041D(Global_93682.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (unk_0x0E4018692D92041D((*uParam0)[iVar0 /*2*/], 30))
				{
					if (!unk_0x0E4018692D92041D((*uParam0)[iVar0 /*2*/], 29))
					{
						func_226(uParam0[iVar0 /*2*/]);
						uParam0->f_32 = unk_0xE77FA521699F639C();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_226(int iParam0)
{
	func_227(iParam0, "NULL", iParam0->f_1);
}

void func_227(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0x0E4018692D92041D(*iParam0, 30))
	{
		switch (func_218(*iParam0))
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

void func_228(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_97();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_230(iParam0);
	unk_0x88B04627B159D024(0);
	unk_0xDCCE32451D4E5521(1);
	Global_106551 = 0;
	func_229();
}

void func_229()
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

void func_230(int iParam0)
{
	Global_106554 = iParam0;
}

int func_231(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
		iParam1 = func_97();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_272())
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
			if (vmag2(unk_0x43D8A2CCB19FE8A8(unk_0x33CD235DF1E6A94E())) > 1369f && !func_206())
			{
				return 0;
			}
		}
		if (!Global_106565.f_9079)
		{
			return 0;
		}
		if (func_78(0))
		{
			return 0;
		}
		if (func_202())
		{
			return 0;
		}
		if (func_271())
		{
			return 0;
		}
		if (Global_106554 != -1)
		{
			return 0;
		}
		if (func_21(func_19()))
		{
			if (func_196(100f, 1) != -1)
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
		if (!func_270(iParam1))
		{
			return 0;
		}
		if (func_21(func_19()))
		{
			if (func_269(func_19()) == 4 || func_269(func_19()) == 5)
			{
				return 0;
			}
		}
		if (func_21(func_19()))
		{
			if (!func_268(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_267(Global_106565.f_24989.f_43[iParam1]))
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
		if (func_266())
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
		if (!func_257(4))
		{
			return 0;
		}
		if (!func_190(5))
		{
			return 0;
		}
		if (func_256(iParam1, iParam2) && !bParam3)
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
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_256(0, 0))
		{
			return 0;
		}
		if (Global_25911)
		{
			return 0;
		}
		if (func_270(30) && !func_256(30, 0))
		{
			if (iParam1 != 30)
			{
				if (vdist2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_21(func_19()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				vVar3 = { Global_106565.f_2357.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_106565.f_2357.f_539.f_2296[iVar2];
				if (func_255(iVar4))
				{
					if (func_233(iVar2))
					{
						if (!func_232(vVar3, 0f, 0f, 0f, 0))
						{
							if (vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false), vVar3) < (210f * 210f))
							{
								if (func_19() != iVar2)
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

bool func_232(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_233(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_106565.f_2357.f_539.f_2296[iParam0];
	return func_234(iVar0);
}

int func_234(int iParam0)
{
	return func_235(iParam0, 1);
}

int func_235(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_255(iParam0))
	{
		return 0;
	}
	func_236(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_236(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_237(func_248(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_237(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_247(iParam0, iParam1))
	{
		iVar0 = func_246(iParam1);
		iVar1 = func_244(iParam0);
		iVar2 = (func_244(iParam0) - func_244(iParam1));
		iVar3 = (func_246(iParam0) - func_246(iParam1));
		iVar4 = (func_243(iParam0) - func_243(iParam1));
		iVar5 = (func_242(iParam0) - func_242(iParam1));
		iVar6 = (func_241(iParam0) - func_241(iParam1));
		iVar7 = (func_240(iParam0) - func_240(iParam1));
	}
	else
	{
		iVar0 = func_246(iParam0);
		iVar1 = func_244(iParam1);
		iVar2 = (func_244(iParam1) - func_244(iParam0));
		iVar3 = (func_246(iParam1) - func_246(iParam0));
		iVar4 = (func_243(iParam1) - func_243(iParam0));
		iVar5 = (func_242(iParam1) - func_242(iParam0));
		iVar6 = (func_241(iParam1) - func_241(iParam0));
		iVar7 = (func_240(iParam1) - func_240(iParam0));
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
		iVar4 = (iVar4 + func_239(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_238(to_float(iVar0 + 1), 0f, 12f));
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

float func_238(float fParam0, float fParam1, float fParam2)
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

int func_239(int iParam0, int iParam1)
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

int func_240(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_241(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_242(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_243(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_244(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_245(unk_0x0E4018692D92041D(iParam0, 31), -1, 1)) + 2011;
}

int func_245(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_246(int iParam0)
{
	return iParam0 & 15;
}

int func_247(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_255(iParam1) || !func_255(iParam0))
	{
		return 1;
	}
	iVar0 = func_244(iParam0);
	iVar1 = func_244(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_246(iParam0);
	iVar1 = func_246(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_243(iParam0);
	iVar1 = func_243(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_242(iParam0);
	iVar1 = func_242(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_241(iParam0);
	iVar1 = func_241(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_240(iParam0);
	iVar1 = func_240(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_248()
{
	var uVar0;
	
	func_254(&uVar0, unk_0xE6A7CE90720B9037());
	func_253(&uVar0, unk_0x7EA67BD818402745());
	func_252(&uVar0, unk_0x13348E86D5B8A052());
	func_251(&uVar0, unk_0x020A28FAE1C09250());
	func_250(&uVar0, unk_0x2C02CAA9C4127339());
	func_249(&uVar0, unk_0xED3F08F762AAA55A());
	return uVar0;
}

void func_249(var uParam0, int iParam1)
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

void func_250(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_251(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_246(*uParam0);
	iVar1 = func_244(*uParam0);
	if (iParam1 < 1 || iParam1 > func_239(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_252(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_253(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_254(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_255(int iParam0)
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
	iVar0 = func_240(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_241(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_242(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_244(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_246(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_243(iParam0);
	if (iVar5 < 1 || iVar5 > func_239(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_256(int iParam0, int iParam1)
{
	if (unk_0x0E4018692D92041D(Global_106565.f_24989.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_257(int iParam0)
{
	int iVar0;
	
	if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
	{
		if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
		{
			if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
			{
				iVar0 = func_19();
				if (!func_21(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0xE027064B1C47E424(unk_0x95B959F18401C09A()) || unk_0x7DD221C91135596A(unk_0x33CD235DF1E6A94E())) || unk_0x707FFB0E65C1C546(unk_0x33CD235DF1E6A94E())) || unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E())) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || unk_0x63E238348058FF52(unk_0x95B959F18401C09A())) || unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0)) || func_265()) || Global_105612) || Global_25767) || func_264()) || func_14(8, -1)) || func_263()) || func_262()) || func_261()) || func_260()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1) || func_265()) || Global_25767) || func_264()) || func_14(8, -1)) || func_261()) || func_263()) || func_262()) || func_260()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xE027064B1C47E424(unk_0x95B959F18401C09A()) || unk_0x7DD221C91135596A(unk_0x33CD235DF1E6A94E())) || unk_0x707FFB0E65C1C546(unk_0x33CD235DF1E6A94E())) || unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E())) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || unk_0x63E238348058FF52(unk_0x95B959F18401C09A())) || unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0)) || func_265()) || Global_105612) || Global_25767) || func_264()) || func_14(8, -1)) || func_261()) || func_263()) || func_262()) || func_260()) || Global_106565.f_7682.f_919[iVar0] == 5) || Global_36972 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E()) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0)) || func_265()) || Global_105612) || Global_25767) || func_264()) || func_14(8, -1)) || func_263()) || func_262()) || func_260()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_265() || unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) > 0) || func_14(8, -1)) || func_260()) || func_259()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_14(8, -1) || func_263()) || func_262()) || func_259()) || func_258())
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
							if ((((((((((((((unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0) || unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) > 0) || unk_0x7DD221C91135596A(unk_0x33CD235DF1E6A94E())) || unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E())) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || unk_0x63E238348058FF52(unk_0x95B959F18401C09A())) || func_265()) || Global_25767) || func_264()) || func_14(8, -1)) || func_262()) || func_261()) || func_260()) || Global_106565.f_7682.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0) || !unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A())) || !unk_0xE027064B1C47E424(unk_0x95B959F18401C09A())) || !unk_0x73DA1542B2F0C458()) || unk_0x7DD221C91135596A(unk_0x33CD235DF1E6A94E())) || unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E())) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || func_265()) || func_262()) || Global_105612) || Global_25767) || func_264()) || Global_37584) || func_14(8, -1)) || func_261()) || func_259()) || func_260()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0) || !unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A())) || !unk_0xE027064B1C47E424(unk_0x95B959F18401C09A())) || !unk_0x73DA1542B2F0C458()) || unk_0x09287BFEE1D9F6EF(unk_0x95B959F18401C09A(), 0)) || unk_0x7DD221C91135596A(unk_0x33CD235DF1E6A94E())) || unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1)) || unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E())) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0x04571D88090E0F77(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || unk_0x63E238348058FF52(unk_0x95B959F18401C09A())) || func_265()) || Global_105612) || Global_25767) || func_264()) || func_14(8, -1)) || func_261()) || func_259()) || func_263()) || func_262()) || func_260())
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

var func_258()
{
	return Global_93721.f_1;
}

int func_259()
{
	if (Global_90634 != -1)
	{
		return unk_0x0E4018692D92041D(Global_84500[Global_90634 /*34*/].f_15, 13);
	}
	return 0;
}

int func_260()
{
	if (unk_0x1BCDA92AD0A7835B(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_261()
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

bool func_262()
{
	return Global_93734.f_340 > 0;
}

bool func_263()
{
	return Global_93734.f_339 > 0;
}

var func_264()
{
	return Global_1312867;
}

int func_265()
{
	if (!unk_0xB331FCEB94EB05C8())
	{
		return Global_91190.f_44 == 1;
	}
	return 0;
}

int func_266()
{
	func_11();
	if (Global_3228[Global_14553 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_267(int iParam0)
{
	return func_247(func_248(), iParam0);
}

int func_268(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_19();
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

int func_269(int iParam0)
{
	if (!func_21(iParam0))
	{
		return 7;
	}
	return Global_106565.f_7682.f_919[iParam0];
}

bool func_270(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_272())
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

int func_271()
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

int func_272()
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

void func_273(var uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		uParam0->f_33 = iParam1;
	}
}

void func_274()
{
	func_292(0);
	unk_0xF699E61158861D53(-90f, -1488f, -50f, 55f, -1470f, 50f, true);
	unk_0xCC323859A8DA2B88("WORLD_VEHICLE_DRIVE_SOLO", true);
	func_287(&uLocal_74, 0);
	unk_0xFF2DEA68E2D3602E("random@escape_paparazzi@standing@");
	unk_0xFF2DEA68E2D3602E("random@paparazzi@pap_anims");
	unk_0xFF2DEA68E2D3602E("random@paparazzi@peek");
	unk_0xFF2DEA68E2D3602E("random@paparazzi@trans");
	unk_0xFF2DEA68E2D3602E("random@paparazzi@wait");
	unk_0xFF2DEA68E2D3602E("veh@std@ps@idle_panic");
	unk_0xFF2DEA68E2D3602E("veh@low@front_ps@idle_panic");
	unk_0xFF2DEA68E2D3602E(sLocal_135);
	unk_0xC16C998D785ABF3A();
	if (func_224())
	{
		unk_0x4B06B5746CBEC99F(1f);
	}
	if (unk_0x765F6FEEFF39224F(iLocal_67) && !unk_0xBC2FC12AD0FBF72E(iLocal_67))
	{
		if (unk_0xE214B9FCEDF6364A(iLocal_67))
		{
			unk_0x5D94F4D6FE7DA516(iLocal_67);
		}
		if (unk_0xF0D230FB550CD6EB(iLocal_67, 1))
		{
			if (!unk_0xD82CBCB7E04DDA8A(iLocal_67))
			{
				unk_0x07C339D4328CA16C(iLocal_67, 0, 0);
			}
		}
	}
	func_276(-1);
	unk_0x739FD1CAC998D66A();
	unk_0x4E609369225EFC41(0);
	unk_0x8C4EA5F6857553AE(joaat("vader"), false);
	unk_0x8C4EA5F6857553AE(joaat("surano"), false);
	unk_0x8C4EA5F6857553AE(joaat("cavalcade2"), false);
	unk_0xF1CFA0046BB67893(iLocal_126, 0);
	unk_0xF1CFA0046BB67893(iLocal_127, 0);
	unk_0xF1CFA0046BB67893(iLocal_128, 0);
	unk_0x5856B9BF2B4E98C4(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), true, 1);
	if (Global_26004)
	{
		unk_0x65BA35D6D61F1574("AC_STOP");
	}
	func_275();
	unk_0x5894DC159447E10A();
}

void func_275()
{
	Global_26000 = 0;
	Global_26001 = 0;
	Global_26003 = 0;
	Global_26004 = 0;
	Global_26005 = 0;
}

void func_276(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_97();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_224())
	{
		func_280(iParam0);
		unk_0xF72C40745AA793F1(0, 0);
		Global_106556 = unk_0xE3903F59E2F22150();
		func_279(30000);
		StringCopy(&cVar0, func_278(Global_106554, 1), 64);
		if (func_96(Global_106554) > 0)
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
	func_277(&Global_25824);
	Global_106555 = 0;
	func_230(-1);
}

void func_277(var uParam0)
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

char* func_278(int iParam0, bool bParam1)
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

void func_279(int iParam0)
{
	Global_36976 = (unk_0xE3903F59E2F22150() + iParam0);
}

void func_280(int iParam0)
{
	func_281(iParam0, 0, func_286(iParam0));
}

void func_281(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_248();
	func_284(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_283(iParam0, &uVar0);
	Var1 = { func_282(&uVar0) };
}

struct<16> func_282(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_242(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_241(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_240(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_243(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_246(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_244(*uParam0), 64);
	return Var0;
}

void func_283(int iParam0, var uParam1)
{
	Global_106565.f_24989.f_43[iParam0] = *uParam1;
}

void func_284(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_244(*uParam0);
	iVar1 = func_246(*uParam0);
	iVar2 = func_243(*uParam0);
	iVar3 = func_242(*uParam0);
	iVar4 = func_241(*uParam0);
	iVar5 = func_240(*uParam0);
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
	iVar6 = func_239(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_239(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_285(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_285(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_254(uParam0, iParam1);
	func_253(uParam0, iParam2);
	func_252(uParam0, iParam3);
	func_250(uParam0, iParam5);
	func_251(uParam0, iParam4);
	func_249(uParam0, iParam6);
}

int func_286(int iParam0)
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

void func_287(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_289(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_288(uParam0[iVar0 /*2*/]);
		iVar0++;
	}
	uParam0->f_31 = 0;
	uParam0->f_32 = -1;
	uParam0->f_33 = 1;
}

void func_288(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
}

void func_289(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x0E4018692D92041D((*uParam0)[iVar0 /*2*/], 30))
		{
			func_290(uParam0[iVar0 /*2*/]);
		}
		iVar0++;
	}
	uParam0->f_31 = 1;
}

void func_290(var uParam0)
{
	func_291(*uParam0, "NULL", uParam0->f_1);
}

void func_291(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0x0E4018692D92041D(iParam0, 30))
	{
		switch (func_218(iParam0))
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

void func_292(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 52)
	{
		func_209(iVar0, bParam0);
		iVar0++;
	}
}

