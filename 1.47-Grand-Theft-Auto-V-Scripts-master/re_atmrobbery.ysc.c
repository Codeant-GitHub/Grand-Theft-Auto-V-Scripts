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
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	struct<4> Local_49[10];
	bool bLocal_50 = 0;
	vector3 vLocal_51 = { 0f, 0f, 0f };
	int iLocal_52 = 0;
	vector3 vLocal_53 = { 0f, 0f, 0f };
	float fLocal_54 = 0f;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	var uLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	vector3 vLocal_74 = { 0f, 0f, 0f };
	vector3 vLocal_75 = { 0f, 0f, 0f };
	float fLocal_76 = 0f;
	float fLocal_77 = 0f;
	vector3 vLocal_78 = { 0f, 0f, 0f };
	vector3 vLocal_79 = { 0f, 0f, 0f };
	bool bLocal_80 = 0;
	int iLocal_81 = 0;
	float fLocal_82 = 0f;
	float fLocal_83 = 0f;
	float fLocal_84 = 0f;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	bool bLocal_90 = 0;
	int iLocal_91 = 0;
	char[] cLocal_92[8] = 0;
	char[] cLocal_93[8] = 0;
	char* sLocal_94 = NULL;
	bool bLocal_95 = 0;
	bool bLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	bool bLocal_99 = 0;
	bool bLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	struct<10> Local_107[16];
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	char* sLocal_112 = NULL;
	char* sLocal_113 = NULL;
	char* sLocal_114 = NULL;
	char* sLocal_115 = NULL;
	char* sLocal_116 = NULL;
	char* sLocal_117 = NULL;
	char* sLocal_118 = NULL;
	char* sLocal_119 = NULL;
	char[] cLocal_120[8] = 0;
	char* sLocal_121 = NULL;
	char* sLocal_122 = NULL;
	char[] cLocal_123[8] = 0;
	char* sLocal_124 = NULL;
	char* sLocal_125 = NULL;
	int iLocal_126 = 0;
	bool bLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	bool bLocal_130 = 0;
	int iLocal_131 = 0;
	float fLocal_132 = 0f;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	vector3 vLocal_136 = { 0f, 0f, 0f };
	vector3 vLocal_137 = { 0f, 0f, 0f };
	vector3 vLocal_138 = { 0f, 0f, 0f };
	float fLocal_139 = 0f;
	vector3 vLocal_140 = { 0f, 0f, 0f };
	float fLocal_141 = 0f;
	char[] cLocal_142[8] = 0;
	char* sLocal_143 = NULL;
	char* sLocal_144 = NULL;
	char* sLocal_145 = NULL;
	char* sLocal_146 = NULL;
	char* sLocal_147 = NULL;
	char[] cLocal_148[8] = 0;
	char* sLocal_149 = NULL;
	char* sLocal_150 = NULL;
	char* sLocal_151 = NULL;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = -1;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 1000;
	var uLocal_162 = 1000;
	var uLocal_163 = 0;
	struct<147> Local_164 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_165 = 1;
	struct<18> Local_166 = { 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5 } ;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
#endregion

void __EntryFunction__()
{
	vector3 vVar0;
	
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
	iLocal_46 = unk_0xFD411B1045595D7D();
	iLocal_47 = unk_0x5E82627D2AFEFEE1();
	iLocal_65 = 3;
	bLocal_80 = true;
	cLocal_92 = "RANDOM@ATMROBBERYGEN";
	cLocal_93 = "RANDOM@ATMROBBERYGEN";
	iLocal_101 = joaat("prop_ld_wallet_01_s");
	iLocal_102 = joaat("prop_ld_wallet_01_s");
	iLocal_133 = 500;
	iLocal_134 = -1;
	iLocal_135 = -1;
	fLocal_139 = 0f;
	fLocal_141 = 0f;
	vLocal_53 = { ScriptParam_166.f_1[0 /*3*/] };
	fLocal_54 = ScriptParam_166.f_17[0];
	if (unk_0x9EC5BDC006623C42(11))
	{
		if (bLocal_95)
		{
			bLocal_96 = true;
			func_289(0);
		}
		else
		{
			func_271();
		}
	}
	if (vdist(vLocal_53, -203.758f, -861.738f, 29.2684f) < 5f)
	{
		iLocal_65 = 1;
	}
	else if (vdist(vLocal_53, -2957.61f, 488.29f, 14.47f) < 5f)
	{
		iLocal_65 = 1;
	}
	else if (vdist(vLocal_53, 288.973f, -1256.79f, 28.4407f) < 5f)
	{
		iLocal_65 = 2;
	}
	else if (vdist(vLocal_53, -3043.93f, 594.84f, 6.6115f) < 5f)
	{
		iLocal_65 = 3;
	}
	else if (vdist(vLocal_53, 174.715f, 6637.77f, 30.5733f) < 5f)
	{
		iLocal_65 = 4;
	}
	else
	{
		iLocal_65 = 5;
	}
	if (func_229(vLocal_53, 1, iLocal_65, 1, 0))
	{
		func_226(-1);
	}
	else
	{
		unk_0x5894DC159447E10A();
	}
	settimera(0);
	func_225();
	while (true)
	{
		wait(0);
		func_224();
		func_223(iLocal_58, &uLocal_64);
		func_220(&Local_164);
		if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
		{
			unk_0x4AE93B307FDB2941(unk_0x95B959F18401C09A());
		}
		if (!func_217())
		{
			if (func_216())
			{
				func_271();
			}
			if (unk_0xA80721FDC3BDCCDB())
			{
				switch (iLocal_52)
				{
					case 0:
						if (func_190())
						{
							iLocal_52 = 1;
						}
						break;
					
					case 1:
						func_189();
						if (iLocal_69 == 0)
						{
							iLocal_69 = unk_0x4381C79571201852(99, vLocal_53, 30000f);
						}
						if (unk_0x765F6FEEFF39224F(iLocal_55))
						{
						}
						if (unk_0x765F6FEEFF39224F(iLocal_56))
						{
						}
						if (!unk_0xBC2FC12AD0FBF72E(iLocal_55))
						{
							if (unk_0xBC2FC12AD0FBF72E(iLocal_56))
							{
								unk_0x6DA4DBA91F234052(iLocal_55, vLocal_53, 200f, -1, 0, 0);
								unk_0x897EF720254BBEA3(iLocal_55, true);
								wait(0);
								func_271();
							}
							if (!unk_0xBC2FC12AD0FBF72E(iLocal_56))
							{
								if (unk_0x73E7A21FD53144AB(vLocal_53, 2.5f))
								{
									if (iLocal_65 == 2)
									{
										if (unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iLocal_56, 120f, 120f, 8f, 0, 1, 0) || func_188())
										{
											func_179();
										}
									}
									else if (iLocal_65 == 1)
									{
										if (vdist(vLocal_53, -203.758f, -861.738f, 29.2684f) < 5f)
										{
											if (unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iLocal_56, 100f, 100f, 8f, 0, 1, 0) || func_188())
											{
												func_179();
											}
										}
										else if (unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iLocal_56, 170f, 170f, 8f, 0, 1, 0) || func_188())
										{
											func_179();
										}
									}
									else if (vdist(vLocal_53, -3044.06f, 594.93f, 6.74f) < 5f)
									{
										if (unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iLocal_56, 65f, 65f, 5f, 0, 1, 0) || func_188())
										{
											func_179();
										}
									}
									else if (unk_0x16E00F066AFFEA0D(vLocal_53, -712.9f, -819.32f, 22.73f, true) < 5f)
									{
										if (unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iLocal_56, 50f, 50f, 5f, 0, 1, 0) || func_188())
										{
											func_179();
										}
									}
									else if (unk_0x16E00F066AFFEA0D(vLocal_53, 24.13f, -946.84f, 28.36f, true) < 5f)
									{
										if (unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iLocal_56, 60f, 60f, 5f, 0, 1, 0) || func_188())
										{
											func_179();
										}
									}
									else if (unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iLocal_56, 30f, 30f, 8f, 0, 1, 0) || func_188())
									{
										func_179();
									}
								}
							}
						}
						else
						{
							if (Local_107[2 /*10*/].f_7)
							{
								func_178(&Local_107, 2);
							}
							if (!unk_0xBC2FC12AD0FBF72E(iLocal_56))
							{
								unk_0x6DA4DBA91F234052(iLocal_56, vLocal_53, 200f, -1, 0, 0);
								unk_0x897EF720254BBEA3(iLocal_56, true);
								wait(0);
							}
							func_271();
						}
						break;
				}
			}
			else
			{
				func_176("IF NOT IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE()\n");
				func_271();
			}
		}
		else
		{
			if (unk_0x765F6FEEFF39224F(iLocal_55))
			{
				if (!unk_0xBC2FC12AD0FBF72E(iLocal_55))
				{
					if (func_175(iLocal_55, -251125078))
					{
						if (func_174(iLocal_55, vLocal_53, 1) >= 190f)
						{
							unk_0xED68CDDDE25A144E(iLocal_55);
							unk_0xECCD4FDA45197F97(iLocal_55, unk_0x33CD235DF1E6A94E(), 300f, -1, 0, 0);
						}
					}
					else if (func_175(iLocal_55, -982327190))
					{
						unk_0xED68CDDDE25A144E(iLocal_55);
						unk_0xECCD4FDA45197F97(iLocal_55, unk_0x33CD235DF1E6A94E(), 300f, -1, 0, 0);
					}
				}
			}
			if (unk_0x765F6FEEFF39224F(iLocal_56))
			{
			}
			if (unk_0xE3903F59E2F22150() > iLocal_66 + 3000)
			{
				func_144();
			}
			if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
			{
				if (!func_124() && !func_121())
				{
					unk_0xD19E4D92930D6413(unk_0x95B959F18401C09A());
					if (!iLocal_85 && !bLocal_90)
					{
						if (unk_0x765F6FEEFF39224F(iLocal_56))
						{
							if (vdist(unk_0xFBB1F99A825CAB09(iLocal_56, false), -2956.26f, 487.97f, 15.46f) < 5f)
							{
								if (unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iLocal_56, 100f, 100f, 15f, 0, 1, 0))
								{
									if (func_119(&Local_107, cLocal_123, sLocal_115, 3, 0, 0, 0))
									{
										iLocal_85 = 1;
									}
								}
							}
							else if (unk_0x16E00F066AFFEA0D(vLocal_53, -203.72f, -861.8f, 29.27f, true) < 5f)
							{
								if (unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iLocal_56, 40f, 40f, 15f, 0, 1, 0))
								{
									if (func_119(&Local_107, cLocal_123, sLocal_115, 3, 0, 0, 0))
									{
										iLocal_85 = 1;
									}
								}
							}
							else if (unk_0x16E00F066AFFEA0D(vLocal_53, 288.46f, -1256.71f, 28.44f, true) < 5f)
							{
								if (unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iLocal_56, 50f, 50f, 15f, 0, 1, 0))
								{
									if (func_119(&Local_107, cLocal_123, sLocal_115, 3, 0, 0, 0))
									{
										iLocal_85 = 1;
									}
								}
							}
							else if (unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iLocal_56, 50f, 50f, 15f, 0, 1, 0))
							{
								if (func_119(&Local_107, cLocal_123, sLocal_115, 3, 0, 0, 0))
								{
									iLocal_85 = 1;
								}
							}
						}
					}
					if (unk_0xE38E3CF1625A4145(iLocal_59))
					{
						if (!unk_0xBC2FC12AD0FBF72E(iLocal_55))
						{
							if (iLocal_126)
							{
								if (unk_0x335C0645074963FE(iLocal_55, unk_0x33CD235DF1E6A94E(), fLocal_132, fLocal_132, fLocal_132, 0, 1, 0))
								{
									if (!unk_0xF0D230FB550CD6EB(iLocal_55, 0))
									{
										if (timera() > 1000)
										{
											if (unk_0xC2ECB90E2DFA5802(unk_0x95B959F18401C09A(), iLocal_55))
											{
												fLocal_132 = vdist(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), unk_0xFBB1F99A825CAB09(iLocal_55, true));
												fLocal_132 = (fLocal_132 * 1.5f);
												settimera(0);
											}
											unk_0x28F648743D7DE312(iLocal_55, 17, false);
										}
									}
								}
								else if (!iLocal_128)
								{
									if (unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iLocal_55, 25f, 25f, 25f, 0, 1, 0))
									{
										if (!unk_0xF0D230FB550CD6EB(iLocal_55, 0))
										{
											unk_0x28F648743D7DE312(iLocal_55, 17, true);
											unk_0x28F648743D7DE312(iLocal_55, 13, false);
											func_118();
											iLocal_128 = 1;
										}
									}
								}
							}
							else if (!iLocal_87)
							{
								if ((unk_0xAC6A512C64D9A9C0(unk_0x95B959F18401C09A(), iLocal_55) || unk_0xC2ECB90E2DFA5802(unk_0x95B959F18401C09A(), iLocal_55)) || unk_0x91BBD269506D61D2(iLocal_55, unk_0x33CD235DF1E6A94E(), 0))
								{
									func_119(&Local_107, cLocal_123, sLocal_113, 4, 0, 0, 0);
									settimera(0);
									fLocal_132 = vdist(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), unk_0xFBB1F99A825CAB09(iLocal_55, true));
									fLocal_132 = (fLocal_132 * 1.5f);
									iLocal_126 = 1;
									iLocal_87 = 1;
								}
								if (unk_0x91D5C8283D19AF49(iLocal_73, 0))
								{
									if (unk_0x91BBD269506D61D2(iLocal_73, unk_0x33CD235DF1E6A94E(), 1))
									{
										unk_0x28F648743D7DE312(iLocal_55, 17, false);
										if (unk_0x5C415D10D5CBF689(iLocal_55))
										{
											unk_0x48B8A6610EAA0C89(iLocal_55, iLocal_73, unk_0x33CD235DF1E6A94E(), 8, 35f, 4, 10f, 10f, 1);
										}
										else
										{
											unk_0xECCD4FDA45197F97(iLocal_55, unk_0x33CD235DF1E6A94E(), 300f, -1, 0, 0);
										}
										func_119(&Local_107, cLocal_123, sLocal_113, 4, 0, 0, 0);
										settimera(0);
										fLocal_132 = vdist(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), unk_0xFBB1F99A825CAB09(iLocal_55, true));
										fLocal_132 = (fLocal_132 * 1.5f);
										iLocal_126 = 1;
										iLocal_87 = 1;
									}
								}
							}
							if ((iLocal_128 || iLocal_126) || bLocal_130)
							{
								if (unk_0xE38E3CF1625A4145(iLocal_59))
								{
									if (unk_0x2694E4096D4C697C(iLocal_59) == 1)
									{
									}
									else
									{
										unk_0xBF11C8A43770C598(iLocal_59, false);
										unk_0xB9E84A421C105943(iLocal_59, 1);
									}
								}
								if (!iLocal_128)
								{
									func_118();
									iLocal_128 = 1;
								}
							}
							else
							{
								if (unk_0x71E0DAA57FE7D5C7(iLocal_55, unk_0x33CD235DF1E6A94E()))
								{
									bLocal_130 = true;
								}
								func_116(iLocal_59, &uLocal_70);
							}
							if (unk_0x765F6FEEFF39224F(iLocal_56))
							{
								if (!iLocal_87)
								{
									if (unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iLocal_56, 15f, 15f, 10f, 0, 1, 0))
									{
										if (func_119(&Local_107, cLocal_123, sLocal_116, 4, 0, 0, 0))
										{
											unk_0x99414FB2D30425C1(&iLocal_61);
											unk_0x108754262311D34F(0, cLocal_148, sLocal_149, 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0x108754262311D34F(0, cLocal_148, sLocal_150, 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0x108754262311D34F(0, cLocal_148, sLocal_151, 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0x108754262311D34F(0, cLocal_148, sLocal_149, 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0x108754262311D34F(0, cLocal_148, sLocal_150, 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0x108754262311D34F(0, cLocal_148, sLocal_151, 8f, -4f, -1, 1, 0, 0, 0, 0);
											unk_0xC734F59A13D39AEF(iLocal_61);
											unk_0x13A2D602CD10CBAC(iLocal_56, iLocal_61);
											unk_0xA7A57E7757ED035E(&iLocal_61);
											settimera(0);
											iLocal_87 = 1;
										}
									}
								}
								else if (!iLocal_88)
								{
									if (unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iLocal_56, 15f, 15f, 10f, 0, 1, 0))
									{
										if (((!unk_0xAC6A512C64D9A9C0(unk_0x95B959F18401C09A(), iLocal_55) && !unk_0xC2ECB90E2DFA5802(unk_0x95B959F18401C09A(), iLocal_55)) && !unk_0x5DACF31D3AC5ED8D(unk_0x33CD235DF1E6A94E())) && func_115(iLocal_56, iLocal_55, 1) > 30f)
										{
											if (func_119(&Local_107, cLocal_123, sLocal_117, 4, 0, 0, 0))
											{
												settimera(0);
												iLocal_88 = 1;
											}
										}
									}
								}
								else if (!unk_0x8B76D954998C9E96(iLocal_56))
								{
									func_113(iLocal_56, "GENERIC_CURSE_MED", 24);
								}
							}
							if (func_111())
							{
								func_110();
								if (unk_0x765F6FEEFF39224F(iLocal_56))
								{
									vVar0 = { unk_0xFBB1F99A825CAB09(iLocal_56, true) };
								}
								if (!unk_0x18FB647D79B09657(iLocal_55, vVar0, 25f, 25f, 25f, false, true, 0) && unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iLocal_55, 12f, 12f, 12f, 0, 1, 0))
								{
									if (timera() > 20000)
									{
										if (func_109(iLocal_55) && !unk_0x3AF2B3B68DD52355(iLocal_55))
										{
											if (func_119(&Local_107, cLocal_123, sLocal_118, 4, 0, 0, 0))
											{
												bLocal_130 = true;
												settimera(0);
											}
										}
									}
								}
							}
							else if (func_109(iLocal_56))
							{
								if (unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iLocal_56, Global_19, 0, 1, 0))
								{
									if (func_119(&Local_107, cLocal_123, sLocal_121, 4, 0, 0, 0))
									{
										unk_0x99414FB2D30425C1(&iLocal_61);
										unk_0x11C4AF4137F2A4B5(0, unk_0x33CD235DF1E6A94E(), 3000);
										unk_0xBD4591245C650283(0, 1193033728, 0);
										unk_0xC734F59A13D39AEF(iLocal_61);
										unk_0x13A2D602CD10CBAC(iLocal_56, iLocal_61);
										unk_0xA7A57E7757ED035E(&iLocal_61);
										bLocal_127 = true;
										func_271();
									}
								}
								else if (bLocal_130)
								{
									if (func_119(&Local_107, cLocal_123, sLocal_122, 4, 0, 0, 0))
									{
										unk_0xBD4591245C650283(iLocal_56, 1193033728, 0);
										unk_0x13C3FE558ED056EE(iLocal_56, -668482597, false, 0, 0);
										bLocal_127 = true;
										func_271();
									}
								}
								else
								{
									unk_0xBD4591245C650283(iLocal_56, 1193033728, 0);
									unk_0x13C3FE558ED056EE(iLocal_56, -668482597, false, 0, 0);
									bLocal_127 = true;
									func_271();
								}
							}
							else
							{
								bLocal_127 = true;
								func_271();
							}
						}
						else if (func_111())
						{
							if ((unk_0xBC2FC12AD0FBF72E(iLocal_55) || unk_0xDFB97818AD6C09CC(iLocal_55, 1)) || func_175(iLocal_55, -1899872703))
							{
								func_119(&Local_107, cLocal_123, sLocal_125, 4, 0, 0, 0);
								func_106();
								func_178(&Local_107, 2);
								unk_0x1ABDB383C83A336A(&iLocal_59);
							}
						}
					}
					else if (!unk_0xE38E3CF1625A4145(iLocal_58))
					{
						if (bLocal_95)
						{
							if (unk_0xE38E3CF1625A4145(iLocal_60))
							{
								unk_0x1ABDB383C83A336A(&iLocal_60);
							}
							iLocal_60 = 0;
							unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), true, 0);
							iLocal_58 = func_102(iLocal_56, 0, 0);
							func_101(&uLocal_64);
							if (unk_0x765F6FEEFF39224F(iLocal_56))
							{
								fLocal_82 = vdist(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), unk_0xFBB1F99A825CAB09(iLocal_56, false));
								unk_0x0D847D71D9E6142E(iLocal_56);
							}
							if (fLocal_82 > 750f)
							{
								func_289(0);
							}
						}
						else
						{
							func_98();
						}
					}
					else
					{
						if (unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) > 0)
						{
							if (bLocal_95)
							{
								func_289(0);
							}
							else
							{
								func_271();
							}
						}
						if (bLocal_100)
						{
						}
						else
						{
							func_2();
						}
						if (!bLocal_100)
						{
							if (!unk_0xBC2FC12AD0FBF72E(iLocal_56))
							{
								if (vdist(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), unk_0xFBB1F99A825CAB09(iLocal_56, false)) > (fLocal_82 + 100f))
								{
									if (bLocal_95)
									{
										func_289(0);
									}
									else
									{
										unk_0xECCD4FDA45197F97(iLocal_56, unk_0x33CD235DF1E6A94E(), 100f, -1, 0, 0);
										func_271();
									}
								}
								else if (vdist(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), unk_0xFBB1F99A825CAB09(iLocal_56, false)) < fLocal_82)
								{
									fLocal_82 = vdist(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), unk_0xFBB1F99A825CAB09(iLocal_56, false));
								}
								if (unk_0x91BBD269506D61D2(iLocal_56, unk_0x33CD235DF1E6A94E(), 1))
								{
									if (bLocal_95)
									{
										func_289(0);
									}
								}
							}
						}
					}
				}
				else
				{
					func_1();
				}
			}
			else
			{
				func_1();
			}
		}
	}
}

void func_1()
{
	if (!unk_0xBC2FC12AD0FBF72E(iLocal_56))
	{
		unk_0xECCD4FDA45197F97(iLocal_56, unk_0x33CD235DF1E6A94E(), 100f, -1, 0, 0);
		func_113(iLocal_56, "GENERIC_FRIGHTENED_HIGH", 24);
		unk_0x897EF720254BBEA3(iLocal_56, true);
		unk_0x4A852F02088ECC9D(iLocal_56, false);
		unk_0xF0BE7CB40DE62A2F(iLocal_56, true);
		unk_0x1F45B4626AC4A4C0(&iLocal_56);
	}
	func_98();
	if (bLocal_90)
	{
		if (unk_0xE38E3CF1625A4145(iLocal_60))
		{
			if (unk_0xECCFCAB0A094EB5B(iLocal_89))
			{
				if (vdist(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), unk_0x0F77516D457A04F5(iLocal_89)) > 100f)
				{
					func_271();
				}
			}
		}
		else if (bLocal_95)
		{
			func_289(0);
		}
		else if (unk_0xBC2FC12AD0FBF72E(iLocal_55))
		{
			func_271();
		}
	}
	if (unk_0xE38E3CF1625A4145(iLocal_59))
	{
		if (unk_0xBC2FC12AD0FBF72E(iLocal_55))
		{
			unk_0x1ABDB383C83A336A(&iLocal_59);
		}
		else if (!func_111())
		{
			func_271();
		}
	}
}

void func_2()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	vector3 vVar7;
	bool bVar8;
	float fVar9;
	float fVar10;
	char cVar11[16];
	char cVar12[16];
	var uVar13;
	int iVar14;
	
	if (!unk_0xBC2FC12AD0FBF72E(iLocal_56))
	{
		if (!bLocal_99)
		{
			if (iLocal_129)
			{
				if (!iLocal_131)
				{
					if (unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iLocal_56, 15f, 15f, 20f, 0, 1, 0))
					{
						func_113(iLocal_56, "GENERIC_HI", 5);
						iLocal_131 = 1;
					}
				}
				if (unk_0x16E00F066AFFEA0D(vLocal_53, 296.13f, -894.01f, 28.23f, true) < 5f)
				{
					if (fLocal_83 == 6f)
					{
						fLocal_83 = 5f;
					}
				}
				else if (unk_0x16E00F066AFFEA0D(vLocal_53, -2072.88f, -317.19f, 12.32f, true) < 5f)
				{
					if (fLocal_83 == 6f)
					{
						fLocal_83 = 4f;
					}
				}
				if (unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iLocal_56, fLocal_83, fLocal_83, fLocal_83, 0, 1, 0) && !func_97())
				{
					if (func_94(2))
					{
						unk_0xEDF90B96BED57BCE(1);
					}
					if (!func_121())
					{
						if (unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A()))
						{
							if (func_93(1, 0, 1))
							{
								if (!unk_0x0E4018692D92041D(Global_2423, 11) || func_92())
								{
									if (!unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E()))
									{
										unk_0xEDF90B96BED57BCE(1);
										if (func_91())
										{
											func_90();
										}
										if (iLocal_101 == joaat("prop_ld_wallet_pickup"))
										{
											iLocal_57 = unk_0x7CA67831169E8AA6(iLocal_102, unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), true, true, false);
										}
										else
										{
											iLocal_57 = unk_0x7CA67831169E8AA6(iLocal_101, unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), true, true, false);
										}
										if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
										{
											unk_0x2F0A6390D863D337(iLocal_57, unk_0x33CD235DF1E6A94E(), unk_0xFCAF61876D23D31D(unk_0x33CD235DF1E6A94E(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
										}
										unk_0x0CDD28A9DFCE2FCE(iLocal_57, false, 0);
										func_82(1, 1, 1, 0, 0, 0);
										if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
										{
											if (unk_0x765F6FEEFF39224F(iLocal_57))
											{
												while ((!func_80(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), fLocal_84, 1, 1056964608, 0, 1, 0) || func_91()) || !unk_0x11D8E875F068E371(iLocal_57))
												{
													if (!func_80(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), fLocal_84, 1, 1056964608, 0, 1, 0))
													{
													}
													if (func_91())
													{
													}
													if (!unk_0x11D8E875F068E371(iLocal_57))
													{
													}
													wait(0);
												}
												if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
												{
													unk_0x07C339D4328CA16C(unk_0x33CD235DF1E6A94E(), 0, 0);
												}
											}
										}
										else if (unk_0x765F6FEEFF39224F(iLocal_57))
										{
											while (func_91() || !unk_0x11D8E875F068E371(iLocal_57))
											{
												wait(0);
											}
										}
										unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), false, 0);
										if (!unk_0xBC2FC12AD0FBF72E(iLocal_56))
										{
											unk_0xC2A270E9C5578803(iLocal_56, 0);
										}
										unk_0x4BF7869DAE52CA15(0);
										unk_0x6C6FE09E055D0855(iLocal_69);
										unk_0xB5FEFF716515EF9E(unk_0x33CD235DF1E6A94E(), 0, 0);
										func_78();
										func_73(0);
										wait(0);
										if (func_109(iLocal_56))
										{
											if (unk_0x28C4F998CC33B00F(iLocal_56))
											{
												sLocal_94 = "move_m@hurry@b";
											}
											else
											{
												sLocal_94 = "move_f@hurry@a";
											}
										}
										unk_0x1FCB57E33CEA24E8(sLocal_94);
										bLocal_99 = true;
										settimera(0);
									}
								}
							}
						}
					}
				}
				else
				{
					func_71(unk_0xFBB1F99A825CAB09(iLocal_56, true), &fLocal_83, &fLocal_84);
					if (!func_97())
					{
						if (!func_175(iLocal_56, 1227113341) && !unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
						{
							unk_0xED68CDDDE25A144E(iLocal_56);
							unk_0x3C0F6044C54799A8(iLocal_56, unk_0x33CD235DF1E6A94E(), 20000, 0.5f, 1f, 1073741824, 0);
						}
					}
					else if (func_175(iLocal_56, 1227113341))
					{
						unk_0xED68CDDDE25A144E(iLocal_56);
						unk_0xA7A57E7757ED035E(&iLocal_61);
						unk_0x99414FB2D30425C1(&iLocal_61);
						unk_0xC4A347124F39D998(0, unk_0x33CD235DF1E6A94E(), -1, 2048, 2);
						unk_0x11C4AF4137F2A4B5(0, unk_0x33CD235DF1E6A94E(), 0);
						unk_0x108754262311D34F(0, cLocal_148, sLocal_149, 8f, -8f, -1, 0, 0, 0, 0, 0);
						unk_0x108754262311D34F(0, cLocal_148, sLocal_151, 8f, -8f, -1, 0, 0, 0, 0, 0);
						unk_0x108754262311D34F(0, cLocal_148, sLocal_150, 8f, -8f, -1, 1, 0, 0, 0, 0);
						unk_0xC734F59A13D39AEF(iLocal_61);
						unk_0x13A2D602CD10CBAC(iLocal_56, iLocal_61);
						unk_0xA7A57E7757ED035E(&iLocal_61);
						unk_0x880B00F3FAE4C022(iLocal_56, 0, 0);
					}
				}
			}
			else if (unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iLocal_56, 25f, 25f, 20f, 0, 1, 1) || unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iLocal_56, 30f, 30f, 20f, 0, 1, 2))
			{
				if (!func_97())
				{
					if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
					{
						unk_0xED68CDDDE25A144E(iLocal_56);
						unk_0xA7A57E7757ED035E(&iLocal_61);
						unk_0x99414FB2D30425C1(&iLocal_61);
						unk_0xC4A347124F39D998(0, unk_0x33CD235DF1E6A94E(), -1, 2048, 2);
						unk_0x3C0F6044C54799A8(0, unk_0x33CD235DF1E6A94E(), 20000, 0.5f, 1f, 1073741824, 0);
						unk_0xC734F59A13D39AEF(iLocal_61);
						unk_0x13A2D602CD10CBAC(iLocal_56, iLocal_61);
						unk_0xA7A57E7757ED035E(&iLocal_61);
					}
					iLocal_129 = 1;
				}
			}
		}
		if (bLocal_99)
		{
			switch (iLocal_98)
			{
				case 0:
					if (((!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1) && !unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E())) && !unk_0x96154DF4E29A9998(unk_0x33CD235DF1E6A94E())) && !unk_0xF7C907E9E8E2BB22(unk_0x33CD235DF1E6A94E()))
					{
						if (bLocal_80)
						{
							if (unk_0x16E00F066AFFEA0D(vLocal_53, -712.9f, -819.32f, 22.73f, true) < 5f && unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -709.9229f, -824.0863f, 22.0751f, -715.2137f, -824.2247f, 25.01217f, 3.25f, 0, true, 0))
							{
								vLocal_78 = { -710.1279f, -821.3084f, 22.6169f };
								vLocal_79 = { 0f, 0f, 266.962f };
							}
							else if (!unk_0xBC2FC12AD0FBF72E(iLocal_56))
							{
								vVar7 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false) };
								func_68(iLocal_56, &vLocal_78, &vLocal_79, cLocal_142, sLocal_144);
								if ((vLocal_78.z - vVar7.z) > 20f)
								{
									vLocal_78 = { vVar7 };
								}
								vLocal_78.z = (vLocal_78.z + 2f);
								unk_0x8C1596BAD35D957A(vLocal_78, &(vLocal_78.f_2), 0, 0);
								if (vLocal_78.z == 0f)
								{
									vLocal_78 = { vLocal_138 };
									vLocal_79.z = fLocal_139;
								}
								if (unk_0x16E00F066AFFEA0D(vLocal_53, -203.72f, -861.8f, 29.27f, true) < 5f)
								{
									if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -202.4218f, -864.449f, 27.88059f, -211.4486f, -861.5274f, 31.75401f, 9.5f, 0, true, 0))
									{
										if (vLocal_79.z > 315f && vLocal_79.z < 360f)
										{
											vLocal_79.z = 251.4238f;
										}
										else if (vLocal_79.z > 120f && vLocal_79.z < 212f)
										{
											vLocal_79.z = 67.2304f;
										}
										vLocal_78 = { -205.81f, -865.2f, 28.5f };
									}
								}
								else if (unk_0x16E00F066AFFEA0D(vLocal_53, -821.33f, -1082.43f, 10.14f, true) < 5f && unk_0xC2F708DE8AD68197(vLocal_78, -826.1744f, -1083.943f, 9.137519f, -811.6559f, -1075.567f, 13.88779f, 6f, 0, true))
								{
									vLocal_78 = { -814.0593f, -1082.483f, 10.0671f };
									vLocal_79.z = 275.5752f;
								}
								else if (unk_0x16E00F066AFFEA0D(vLocal_53, -387.12f, 6045.79f, 30.5f, true) < 5f && unk_0xC2F708DE8AD68197(vLocal_78, -377.5788f, 6033.821f, 29.29119f, -373.0138f, 6029.14f, 33.75382f, 4.75f, 0, true))
								{
									vLocal_78 = { -375.0627f, 6030.533f, 30.5313f };
									vLocal_79.z = 222.9049f;
								}
								else if (unk_0x16E00F066AFFEA0D(vLocal_53, -387.12f, 6045.79f, 30.5f, true) < 5f && unk_0xC2F708DE8AD68197(vLocal_78, -381.4607f, 6031.481f, 29.24971f, -376.6766f, 6026.68f, 33.76656f, 3f, 0, true))
								{
									vLocal_78 = { -379.7835f, 6029.472f, 30.5014f };
									vLocal_79.z = 213.2611f;
								}
								else if (unk_0x16E00F066AFFEA0D(vLocal_53, 89.39f, 2f, 67.34f, true) < 5f)
								{
									if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), 73.30347f, 4.781172f, 66.79439f, 107.6572f, -8.330787f, 69.16833f, 9.75f, 0, true, 0))
									{
										if (vLocal_79.z > 128f && vLocal_79.z < 195f)
										{
											if (vLocal_79.z > 162f)
											{
												vLocal_79.z = 220f;
											}
											else
											{
												vLocal_79.z = 107f;
											}
										}
									}
								}
								else if (unk_0x16E00F066AFFEA0D(vLocal_53, 174.53f, 6637.64f, 30.57f, true) < 5f)
								{
									if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), 176.3895f, 6635.983f, 29.87799f, 181.7585f, 6641.302f, 33.556f, 7.75f, 0, true, 0))
									{
										if (vLocal_79.z > 244.444f && vLocal_79.z < 326.2103f)
										{
											vLocal_79.z = 343.1367f;
										}
									}
								}
								else if (unk_0x16E00F066AFFEA0D(vLocal_53, -3044.11f, 594.34f, 6.73f, true) < 5f)
								{
									if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -3042.549f, 597.1118f, 6.612578f, -3046.965f, 595.6973f, 9.065809f, 5f, 0, true, 0))
									{
										vLocal_78 = { -3045.4f, 598.65f, 6.51f };
									}
								}
								vVar4 = { unk_0xF666CBF66A90975A(cLocal_142, sLocal_144, vLocal_78, vLocal_79, 0f, 2) };
								vVar5 = { vVar4 - vLocal_78 };
								vVar5.z = 0f;
								fVar10 = vmag(vVar5);
								unk_0x8C1596BAD35D957A(vVar4, &(vVar4.f_2), 0, 0);
								fVar9 = (vLocal_78.z - vVar4.z);
								vLocal_79.x = unk_0xB92C3C556226E8F9(fVar9, fVar10);
								if (vLocal_79.x > 20f || vLocal_79.x < -330f)
								{
									vLocal_78 = { vLocal_138 };
									vLocal_79.x = 0f;
									vLocal_79.z = fLocal_139;
									vVar4 = { unk_0xF666CBF66A90975A(cLocal_142, sLocal_144, vLocal_78, vLocal_79, 0f, 2) };
									vVar5 = { vVar4 - vLocal_78 };
									vVar5.z = 0f;
									fVar10 = vmag(vVar5);
									unk_0x8C1596BAD35D957A(vVar4, &(vVar4.f_2), 0, 0);
									fVar9 = (vLocal_78.z - vVar4.z);
								}
							}
							if (func_67(vLocal_53, -526.58f, -1222.79f, 17.46f, 10f, 0))
							{
								if (unk_0xC2F708DE8AD68197(vLocal_78, -538.4412f, -1214.903f, 16.79794f, -520.3268f, -1223.249f, 20.556f, 6.5f, 0, true))
								{
									if (vLocal_79.z < 35f || vLocal_79.z > 275f)
									{
										if (vLocal_79.z < 335f)
										{
											vLocal_79.z = 260f;
										}
										else
										{
											vLocal_79.z = 55f;
										}
									}
									else if (vLocal_79.z > 107.2072f && vLocal_79.z < 210f)
									{
										if (vLocal_79.z > 154.6742f)
										{
											vLocal_79.z = 233f;
										}
										else
										{
											vLocal_79.z = 73f;
										}
									}
								}
							}
						}
						else if (iLocal_65 == 4)
						{
							if (vdist(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false), 183.6065f, 6636.653f, 30.6299f) < vdist(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false), 172.2291f, 6631.007f, 30.7398f))
							{
								vLocal_78 = { 183.6065f, 6636.653f, 30.6299f };
								vLocal_79 = { 0f, 0f, 265f };
							}
							else
							{
								vLocal_78 = { 172.2291f, 6631.007f, 30.7398f };
								vLocal_79 = { 0f, 0f, 132f };
							}
						}
						else
						{
							vVar1 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true) };
							if (!unk_0xBC2FC12AD0FBF72E(iLocal_56))
							{
								vVar2 = { unk_0xFBB1F99A825CAB09(iLocal_56, true) };
							}
							vVar3 = { vVar1 - vVar2 };
							vLocal_78 = { vVar1 };
							vLocal_78 = { vLocal_78.x, vLocal_78.y, (vLocal_78.z - 1f) };
							vLocal_79 = { 0f, 0f, unk_0x174C48E9E544E9A8(vVar3.x, vVar3.y) };
						}
						if (unk_0x16E00F066AFFEA0D(vLocal_78, -535.795f, -1222.23f, 17.4567f, true) < 5f)
						{
							vLocal_78 = { -521.475f, -1210.47f, 17.1848f };
							vLocal_79 = { 0f, 0f, 308.502f };
						}
						if (unk_0x91D5C8283D19AF49(iLocal_73, 0))
						{
							unk_0x65F544B458249682(&iLocal_73);
						}
						if (unk_0x91D5C8283D19AF49(unk_0x8918EC905FC8975D(), 0))
						{
							if (!unk_0x91D5C8283D19AF49(iVar0, 0))
							{
								iVar0 = unk_0x8918EC905FC8975D();
								unk_0xFEF5F9BB57EA2E8D(unk_0x541D5C57194E73C4(iVar0), &vLocal_136, &vLocal_137);
								if (unk_0x18FB647D79B09657(iVar0, vLocal_78, (vLocal_137.y + 1f), (vLocal_137.y + 1f), 3f, false, true, 0) || unk_0x18FB647D79B09657(iVar0, unk_0xF666CBF66A90975A(cLocal_142, sLocal_144, vLocal_78, vLocal_79, 0, 2), (vLocal_137.y + 1f), (vLocal_137.y + 1f), 3f, false, true, 0))
								{
									if (func_67(vLocal_53, -526.58f, -1222.79f, 17.46f, 10f, 0) && (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -529.7477f, -1218.399f, 16.78482f, -538.9778f, -1213.756f, 20.53685f, 7.5f, 0, true, 0) || unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -529.7477f, -1218.399f, 16.78482f, -520.9798f, -1222.305f, 20.55204f, 7.5f, 0, true, 0)))
									{
										if (unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -529.7477f, -1218.399f, 16.78482f, -538.9778f, -1213.756f, 20.53685f, 7.5f, 0, true, 0))
										{
											vVar6 = { 2.9f, 12f, 8f };
											vLocal_75 = { -543.34f, -1216.8f, 17.96f };
											fLocal_77 = 337.5f;
											bVar8 = true;
										}
										else
										{
											vVar6 = { 2.9f, 12f, 8f };
											vLocal_75 = { -522.4418f, -1214.57f, 17.1848f };
											fLocal_77 = 246.7714f;
											bVar8 = true;
										}
										if ((vLocal_137.x - vLocal_136.x) > vVar6.x)
										{
											bVar8 = false;
										}
										else if ((vLocal_137.y - vLocal_136.y) > vVar6.y)
										{
											bVar8 = false;
										}
										else if ((vLocal_137.z - vLocal_136.z) > vVar6.z)
										{
											bVar8 = false;
										}
										if (bVar8)
										{
											if (func_66(iVar0))
											{
												unk_0xBEADAF07D2339505(iVar0, vLocal_75, 1, false, 0, 1);
												unk_0x3C990C409B3845DE(iVar0, fLocal_77);
												unk_0x7E67DEA07DB29899(iVar0, 0, 1, 1, 1);
												unk_0x1B2303F9DC2D90D5(iVar0, 1084227584);
											}
										}
										else if (unk_0x765F6FEEFF39224F(iVar0))
										{
											if (!unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iVar0, 0))
											{
												unk_0x7AC8DF0B83EB4C6B(&iVar0);
											}
										}
									}
									else if (unk_0x16E00F066AFFEA0D(vLocal_53, -203.72f, -861.8f, 29.27f, true) < 5f && unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -197.7616f, -865.9772f, 27.31116f, -191.161f, -849.0546f, 32.89275f, 10.25f, 0, true, 0))
									{
										vVar6 = { 2.9f, 12f, 8f };
										vLocal_75 = { -187f, -855.51f, 29.02f };
										fLocal_77 = 158.28f;
										bVar8 = true;
										if ((vLocal_137.x - vLocal_136.x) > vVar6.x)
										{
											bVar8 = false;
										}
										else if ((vLocal_137.y - vLocal_136.y) > vVar6.y)
										{
											bVar8 = false;
										}
										else if ((vLocal_137.z - vLocal_136.z) > vVar6.z)
										{
											bVar8 = false;
										}
										if (bVar8)
										{
											if (func_66(iVar0))
											{
												unk_0xBEADAF07D2339505(iVar0, vLocal_75, 1, false, 0, 1);
												unk_0x3C990C409B3845DE(iVar0, fLocal_77);
												unk_0x1B2303F9DC2D90D5(iVar0, 1084227584);
											}
										}
										else if (unk_0x765F6FEEFF39224F(iVar0))
										{
											if (!unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iVar0, 0))
											{
												unk_0x7AC8DF0B83EB4C6B(&iVar0);
											}
										}
									}
									else if (unk_0x16E00F066AFFEA0D(vLocal_53, -387.12f, 6045.79f, 30.5f, true) < 5f && unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -390.4536f, 6044.05f, 29.99868f, -380.4771f, 6032.985f, 33.24879f, 6f, 0, true, 0))
									{
										vVar6 = { 2.9f, 12f, 8f };
										vLocal_75 = { -395.84f, 6051.16f, 31.19f };
										fLocal_77 = 139.92f;
										bVar8 = true;
										if ((vLocal_137.x - vLocal_136.x) > vVar6.x)
										{
											bVar8 = false;
										}
										else if ((vLocal_137.y - vLocal_136.y) > vVar6.y)
										{
											bVar8 = false;
										}
										else if ((vLocal_137.z - vLocal_136.z) > vVar6.z)
										{
											bVar8 = false;
										}
										if (bVar8)
										{
											if (func_66(iVar0))
											{
												unk_0xBEADAF07D2339505(iVar0, vLocal_75, 1, false, 0, 1);
												unk_0x3C990C409B3845DE(iVar0, fLocal_77);
												unk_0x1B2303F9DC2D90D5(iVar0, 1084227584);
											}
										}
										else if (unk_0x765F6FEEFF39224F(iVar0))
										{
											if (!unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iVar0, 0))
											{
												unk_0x7AC8DF0B83EB4C6B(&iVar0);
											}
										}
									}
									else if (unk_0x16E00F066AFFEA0D(vLocal_53, -2956.78f, 488.19f, 14.47f, true) < 5f && unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -2955.234f, 492.4626f, 13.80307f, -2967.116f, 493.0511f, 17.05663f, 9.75f, 0, true, 0))
									{
										vVar6 = { 2.9f, 12f, 8f };
										vLocal_75 = { -2972.31f, 490.07f, 15.03f };
										fLocal_77 = 357.64f;
										bVar8 = true;
										if ((vLocal_137.x - vLocal_136.x) > vVar6.x)
										{
											bVar8 = false;
										}
										else if ((vLocal_137.y - vLocal_136.y) > vVar6.y)
										{
											bVar8 = false;
										}
										else if ((vLocal_137.z - vLocal_136.z) > vVar6.z)
										{
											bVar8 = false;
										}
										if (bVar8)
										{
											if (func_66(iVar0))
											{
												unk_0xBEADAF07D2339505(iVar0, vLocal_75, 1, false, 0, 1);
												unk_0x3C990C409B3845DE(iVar0, fLocal_77);
												unk_0x1B2303F9DC2D90D5(iVar0, 1084227584);
											}
										}
										else if (unk_0x765F6FEEFF39224F(iVar0))
										{
											if (!unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iVar0, 0))
											{
												unk_0x7AC8DF0B83EB4C6B(&iVar0);
											}
										}
									}
									else if ((unk_0x16E00F066AFFEA0D(vLocal_53, 174.53f, 6637.64f, 30.57f, true) < 5f && unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), 178.246f, 6638.824f, 30.5274f, 173.4713f, 6634.083f, 33.6823f, 6f, 0, true, 0)) && unk_0xD4B4F68F3449CBEC(iVar0, 180.1225f, 6640.33f, 30.78129f, 171.623f, 6631.794f, 33.69934f, 8f, 0, true, 0))
									{
										vVar6 = { 2.9f, 12f, 8f };
										vLocal_75 = { 184.05f, 6628.75f, 31.27f };
										fLocal_77 = 89.37f;
										bVar8 = true;
										if ((vLocal_137.x - vLocal_136.x) > vVar6.x)
										{
											bVar8 = false;
										}
										else if ((vLocal_137.y - vLocal_136.y) > vVar6.y)
										{
											bVar8 = false;
										}
										else if ((vLocal_137.z - vLocal_136.z) > vVar6.z)
										{
											bVar8 = false;
										}
										if (bVar8)
										{
											if (func_66(iVar0))
											{
												unk_0xBEADAF07D2339505(iVar0, vLocal_75, 1, false, 0, 1);
												unk_0x3C990C409B3845DE(iVar0, fLocal_77);
												unk_0x1B2303F9DC2D90D5(iVar0, 1084227584);
											}
										}
										else if (unk_0x765F6FEEFF39224F(iVar0))
										{
											if (!unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iVar0, 0))
											{
												unk_0x7AC8DF0B83EB4C6B(&iVar0);
											}
										}
									}
									else
									{
										vVar6 = { 2.9f, 12f, 8f };
										fLocal_77 = unk_0xC472E34C8FBEC678(iVar0);
										vLocal_75 = { func_64(vLocal_78, unk_0xF666CBF66A90975A(cLocal_142, sLocal_144, vLocal_78, vLocal_79, 0, 2)) };
										if (func_63(0f, 0f, 0f, vLocal_75, 0))
										{
											vLocal_75 = { unk_0xFBB1F99A825CAB09(iVar0, true) };
										}
										if (unk_0x097E7778E3E162E8(unk_0x541D5C57194E73C4(iVar0)))
										{
											vLocal_137.x = (vLocal_137.x + 3f);
											vLocal_137.y = (vLocal_137.y + 3f);
										}
										bVar8 = true;
										if ((vLocal_137.x - vLocal_136.x) > vVar6.x)
										{
											bVar8 = false;
										}
										else if ((vLocal_137.y - vLocal_136.y) > vVar6.y)
										{
											bVar8 = false;
										}
										else if ((vLocal_137.z - vLocal_136.z) > vVar6.z)
										{
											bVar8 = false;
										}
										if (bVar8)
										{
											if (func_66(iVar0))
											{
												unk_0xBEADAF07D2339505(iVar0, vLocal_75, 1, false, 0, 1);
												unk_0x3C990C409B3845DE(iVar0, fLocal_77);
												unk_0x1B2303F9DC2D90D5(iVar0, 1084227584);
											}
										}
										else if (unk_0x765F6FEEFF39224F(iVar0))
										{
											if (!unk_0x10930B9CAD4111C2(unk_0x33CD235DF1E6A94E(), iVar0, 0))
											{
												unk_0x7AC8DF0B83EB4C6B(&iVar0);
											}
										}
									}
								}
							}
						}
						if (func_66(iVar0))
						{
							unk_0xFEF5F9BB57EA2E8D(unk_0x541D5C57194E73C4(iVar0), &vLocal_136, &vLocal_137);
							if (unk_0x18FB647D79B09657(iVar0, vLocal_78, (vLocal_137.y + 1f), (vLocal_137.y + 1f), 1f, false, true, 0) || unk_0x18FB647D79B09657(iVar0, unk_0xF666CBF66A90975A(cLocal_142, sLocal_144, vLocal_78, vLocal_79, 0, 2), (vLocal_137.y + 1f), (vLocal_137.y + 1f), 1f, false, true, 0))
							{
								unk_0xBEADAF07D2339505(iVar0, vLocal_140, 1, false, 0, 1);
								unk_0x3C990C409B3845DE(iVar0, fLocal_141);
								unk_0x1B2303F9DC2D90D5(iVar0, 1084227584);
							}
						}
						if (unk_0x765F6FEEFF39224F(iLocal_57))
						{
							unk_0x0CDD28A9DFCE2FCE(iLocal_57, true, 0);
						}
						unk_0x7F327D8D184FAB7F(vLocal_78 - Vector(10f, 10f, 10f), vLocal_78 + Vector(10f, 10f, 10f), 0);
						unk_0x9FDF63945C690003(vLocal_78, 20f, 0);
						unk_0x9C47E5CDFB45F474(vLocal_78, 10f, 0);
						unk_0xCE04CE961AF41AB9(vLocal_78, (vLocal_137.y + 1f), 1, 0, 0, false);
						unk_0x87A1F7523B14E2C9(vLocal_78, 25f);
						unk_0x098757942E2F9D44(unk_0x33CD235DF1E6A94E(), true);
						unk_0x98F04A4FFB4AD01C(unk_0x95B959F18401C09A(), 0, 0);
						iLocal_68 = unk_0x38A6890195DD00D1(vLocal_78, vLocal_79, 2);
						unk_0x34C803C2BC1CAFB2(iLocal_68, false);
						iLocal_97 = unk_0x00E62F31D05EB2AC("DEFAULT_ANIMATED_CAMERA", false);
						unk_0x63B608CD1957089E(iLocal_97, 15f);
						unk_0x76909D790DDFDCE9(iLocal_97, iLocal_68, sLocal_145, cLocal_142);
						unk_0x31826EF4A8BC8E9F(unk_0x33CD235DF1E6A94E());
						unk_0xE0DAC4ABE9900D9A(unk_0x33CD235DF1E6A94E());
						unk_0x08798CBF817BA887(unk_0x33CD235DF1E6A94E(), iLocal_68, cLocal_142, sLocal_143, 1000f, -1000f, 1024, 0, 1148846080, 0);
						unk_0x880B00F3FAE4C022(unk_0x33CD235DF1E6A94E(), 0, 0);
						if (!unk_0xBC2FC12AD0FBF72E(iLocal_56))
						{
							unk_0x31826EF4A8BC8E9F(iLocal_56);
							unk_0x08798CBF817BA887(iLocal_56, iLocal_68, cLocal_142, sLocal_144, 1000f, -4f, 0, 0, 1148846080, 0);
						}
						unk_0x189377BFBDC9127F(iLocal_97, true);
						unk_0x63F0B040CE6EDF0F(true, false, 3000, 1, 0, 0);
						StringCopy(&cVar11, sLocal_124, 16);
						StringConCat(&cVar11, "_1", 16);
						StringCopy(&cVar12, cLocal_120, 16);
						StringConCat(&cVar12, "_1", 16);
						func_51(&Local_107, cLocal_123, sLocal_124, &cVar11, cLocal_120, &cVar12, 7, 0, 0);
						settimera(0);
						unk_0x4BF7869DAE52CA15(0);
						func_50(joaat("rc_wallets_returned"), 1);
						unk_0x75D54ED6C1AD1642(joaat("rc_wallets_returned"), &uVar13, -1);
						iLocal_98++;
					}
					else
					{
						if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
						{
						}
						if (unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E()))
						{
						}
						if (unk_0x96154DF4E29A9998(unk_0x33CD235DF1E6A94E()))
						{
						}
						if (unk_0xF7C907E9E8E2BB22(unk_0x33CD235DF1E6A94E()))
						{
						}
					}
					unk_0xF3F3DC87D7163212();
					break;
				
				case 1:
					if ((unk_0xDB4C79A9697E6A55(iLocal_68) && unk_0x4EDDCE9AAE0FC976(iLocal_68) == 1f) || func_47())
					{
						unk_0x117A9E054B0F10FB(unk_0x95B959F18401C09A());
						unk_0xAC1D3DA2FFE0570F(unk_0x95B959F18401C09A(), 0);
						if (!unk_0xBC2FC12AD0FBF72E(iLocal_56))
						{
							unk_0xF8E07C228A90E953(iLocal_56, (iLocal_133 - (iLocal_133 / 10)));
							unk_0x4A852F02088ECC9D(iLocal_56, false);
							unk_0x511559F67646F1C0(iLocal_56, sLocal_94, 1048576000);
						}
						if (unk_0xBB5E373390A5F824())
						{
							unk_0x31826EF4A8BC8E9F(iLocal_56);
							vVar4 = { unk_0xF666CBF66A90975A(cLocal_142, sLocal_144, vLocal_78, vLocal_79, 1f, 2) };
							unk_0x8C1596BAD35D957A(vVar4, &(vVar4.f_2), 0, 0);
							unk_0xBEADAF07D2339505(iLocal_56, vVar4, 1, false, 0, 1);
							vVar4 = { unk_0xFC7404297ED3CF49(cLocal_142, sLocal_144, vLocal_78, vLocal_79, 1f, 2) };
							unk_0x3C990C409B3845DE(iLocal_56, vVar4.z);
						}
						vVar4 = { unk_0xFC7404297ED3CF49(cLocal_142, sLocal_144, vLocal_78, vLocal_79, 1f, 2) };
						if (func_67(vLocal_53, -526.58f, -1222.79f, 17.46f, 10f, 0))
						{
							if (func_46(unk_0x33CD235DF1E6A94E(), 215.68f, 60f))
							{
								unk_0x99414FB2D30425C1(&iLocal_61);
								unk_0x7E268975AF5EA74F(0, unk_0x2CA911E7569D12EA(iLocal_56, 0f, 3.5f, 0f), 1f, 20000, 1048576000, 5, 1193033728);
								unk_0x7E268975AF5EA74F(0, -503.46f, -1199.39f, 19.02f, 1f, 20000, 1048576000, 5, 1193033728);
								unk_0xBD4591245C650283(0, unk_0xC472E34C8FBEC678(iLocal_56), 1);
								unk_0xC734F59A13D39AEF(iLocal_61);
								unk_0x13A2D602CD10CBAC(iLocal_56, iLocal_61);
								unk_0xA7A57E7757ED035E(&iLocal_61);
							}
							else if (func_46(unk_0x33CD235DF1E6A94E(), 122.0371f, 60f))
							{
								unk_0x99414FB2D30425C1(&iLocal_61);
								unk_0x7E268975AF5EA74F(0, unk_0x2CA911E7569D12EA(iLocal_56, 0f, 3.5f, 0f), 1f, 20000, 1048576000, 5, 1193033728);
								unk_0x7E268975AF5EA74F(0, -543.35f, -1208.09f, 16.73f, 1f, 20000, 1048576000, 5, 1193033728);
								unk_0xBD4591245C650283(0, unk_0xC472E34C8FBEC678(iLocal_56), 1);
								unk_0xC734F59A13D39AEF(iLocal_61);
								unk_0x13A2D602CD10CBAC(iLocal_56, iLocal_61);
								unk_0xA7A57E7757ED035E(&iLocal_61);
							}
							else
							{
								unk_0x99414FB2D30425C1(&iLocal_61);
								unk_0x7E268975AF5EA74F(0, unk_0x2CA911E7569D12EA(iLocal_56, 0f, 3.5f, 0f), 1f, 20000, 1048576000, 5, 1193033728);
								unk_0xBD4591245C650283(0, unk_0xC472E34C8FBEC678(iLocal_56), 1);
								unk_0xC734F59A13D39AEF(iLocal_61);
								unk_0x13A2D602CD10CBAC(iLocal_56, iLocal_61);
								unk_0xA7A57E7757ED035E(&iLocal_61);
							}
						}
						else if (unk_0x16E00F066AFFEA0D(vLocal_53, 288.46f, -1256.71f, 28.44f, true) < 5f)
						{
							if (func_46(unk_0x33CD235DF1E6A94E(), 200.8887f, 60f))
							{
								unk_0x99414FB2D30425C1(&iLocal_61);
								unk_0x7E268975AF5EA74F(0, unk_0x2CA911E7569D12EA(iLocal_56, 0f, 3.5f, 0f), 1f, 20000, 1048576000, 5, 1193033728);
								unk_0x7E268975AF5EA74F(0, 289.08f, -1286.56f, 28.68f, 1f, 20000, 1048576000, 5, 1193033728);
								unk_0xBD4591245C650283(0, unk_0xC472E34C8FBEC678(iLocal_56), 1);
								unk_0xC734F59A13D39AEF(iLocal_61);
								unk_0x13A2D602CD10CBAC(iLocal_56, iLocal_61);
								unk_0xA7A57E7757ED035E(&iLocal_61);
							}
							else if (func_46(unk_0x33CD235DF1E6A94E(), 347.8599f, 60f))
							{
								unk_0x99414FB2D30425C1(&iLocal_61);
								unk_0x7E268975AF5EA74F(0, unk_0x2CA911E7569D12EA(iLocal_56, 0f, 3.5f, 0f), 1f, 20000, 1048576000, 5, 1193033728);
								unk_0x7E268975AF5EA74F(0, 241.22f, -1236.76f, 28.26f, 1f, 20000, 1048576000, 5, 1193033728);
								unk_0xBD4591245C650283(0, unk_0xC472E34C8FBEC678(iLocal_56), 1);
								unk_0xC734F59A13D39AEF(iLocal_61);
								unk_0x13A2D602CD10CBAC(iLocal_56, iLocal_61);
								unk_0xA7A57E7757ED035E(&iLocal_61);
							}
							else
							{
								unk_0x99414FB2D30425C1(&iLocal_61);
								unk_0x7E268975AF5EA74F(0, unk_0x2CA911E7569D12EA(iLocal_56, 0f, 3.5f, 0f), 1f, 20000, 1048576000, 5, 1193033728);
								unk_0xBD4591245C650283(0, unk_0xC472E34C8FBEC678(iLocal_56), 1);
								unk_0xC734F59A13D39AEF(iLocal_61);
								unk_0x13A2D602CD10CBAC(iLocal_56, iLocal_61);
								unk_0xA7A57E7757ED035E(&iLocal_61);
							}
						}
						else
						{
							unk_0x99414FB2D30425C1(&iLocal_61);
							unk_0x7E268975AF5EA74F(0, unk_0x2CA911E7569D12EA(iLocal_56, 0f, 2.5f, 0f), 1f, 20000, 1048576000, 5, 1193033728);
							unk_0xBD4591245C650283(0, unk_0xC472E34C8FBEC678(iLocal_56), 1);
							unk_0xC734F59A13D39AEF(iLocal_61);
							unk_0x13A2D602CD10CBAC(iLocal_56, iLocal_61);
							unk_0xA7A57E7757ED035E(&iLocal_61);
						}
						unk_0x13C3FE558ED056EE(iLocal_56, -668482597, true, 0, 0);
						unk_0xC2A270E9C5578803(iLocal_56, 1);
						unk_0x897EF720254BBEA3(iLocal_56, true);
						func_45(&iLocal_73);
						settimerb(0);
						unk_0x3754CDF254D9F523(0);
						if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
						{
							unk_0x31826EF4A8BC8E9F(unk_0x33CD235DF1E6A94E());
							if (!func_44())
							{
								unk_0x880B00F3FAE4C022(unk_0x33CD235DF1E6A94E(), 0, 0);
							}
						}
						if (unk_0x765F6FEEFF39224F(iLocal_57))
						{
							unk_0xEC26F4BFC9942A0C(&iLocal_57);
						}
						if (!unk_0xBC2FC12AD0FBF72E(iLocal_56))
						{
							unk_0xF8E07C228A90E953(iLocal_56, (iLocal_133 - (iLocal_133 / 10)));
						}
						unk_0x098757942E2F9D44(unk_0x33CD235DF1E6A94E(), false);
						unk_0xC7E6A5D90DED6E0B(0f);
						unk_0x189377BFBDC9127F(iLocal_97, false);
						func_43();
						unk_0x2F8A4DF7D0DFF0A8(iLocal_97, 0);
						unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), true, 0);
						if (unk_0xBB5E373390A5F824())
						{
							unk_0xACCDA78123DB57B0(500);
							while (unk_0xD33DAC8D0D70A78C())
							{
								wait(0);
							}
						}
						iVar14 = (iLocal_133 / 100);
						iVar14 *= 90;
						wait(0);
						unk_0x3AAF29F17A3F9825(0, 0, 3, 0);
						func_82(0, 1, 1, 0, 0, 0);
						func_3(func_38(), 1, iVar14);
						func_289(1);
					}
					else
					{
						unk_0xF3F3DC87D7163212();
						if (unk_0xFBEC827720F84540(unk_0x33CD235DF1E6A94E(), -3856156))
						{
							if (!unk_0xBC2FC12AD0FBF72E(iLocal_56) && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
							{
								if (unk_0x5A4FB33F5B279A76(iLocal_57, unk_0x33CD235DF1E6A94E()))
								{
									unk_0x35F11A916FDFCF32(iLocal_57, 0, true);
									if (unk_0x28C4F998CC33B00F(iLocal_56))
									{
										unk_0x2F0A6390D863D337(iLocal_57, iLocal_56, unk_0xFCAF61876D23D31D(iLocal_56, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
									}
									else
									{
										unk_0x2F0A6390D863D337(iLocal_57, iLocal_56, unk_0xFCAF61876D23D31D(iLocal_56, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
									}
								}
							}
						}
					}
					break;
				}
			}
	}
}

int func_3(int iParam0, int iParam1, int iParam2)
{
	if (Global_106565.f_28044[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_106565.f_28044[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_4(Global_106565.f_28044[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_4(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_37();
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
					func_36(99, 1);
					func_50(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_50(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_50(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_20(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_15(5))
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
							func_50(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_50(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_50(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_15(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_50(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_50(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_50(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_50(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_50(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_50(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_50(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_50(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_50(joaat("sp2_money_spent_property"), iParam3);
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
									func_50(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_50(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_50(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_50(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_50(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_50(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_15(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_50(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_50(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_50(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_50(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_50(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_50(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_14(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_36(95, iParam3);
					break;
				
				case 1:
					func_36(97, iParam3);
					break;
				
				case 2:
					func_36(96, iParam3);
					break;
			}
			func_36(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor((fVar0 * to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_7(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_7(iVar1);
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
					func_50(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_50(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_50(joaat("sp2_total_cash_earned"), iParam3);
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
	func_6(iParam0);
	if (Global_36425 == 15)
	{
		func_5(0);
	}
	return 1;
}

void func_5(bool bParam0)
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

void func_6(int iParam0)
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

void func_7(int iParam0)
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
		func_10(8269, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_10(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_10(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_10(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_10(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_10(8274, 0, -1, 1, 0);
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
	else if (unk_0x0E4018692D92041D(Global_106565.f_20558.f_471, iParam0) || unk_0x0E4018692D92041D(Global_2097152[func_9() /*10778*/].f_6165.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xCE689A8E8C42ED78(&(Global_106565.f_20558.f_471), iParam0);
		unk_0xCE689A8E8C42ED78(&(Global_2097152[func_9() /*10778*/].f_6165.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x1F85AD4B26B92795("COUP_RED");
		unk_0xFA6BEE2B1507FF1E(func_8(iParam0));
		unk_0xDE1BA36E3BACF7C1(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_8(int iParam0)
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

int func_9()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_10(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_11(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x12B6E23F244DDB0F(iVar0, iParam1, iParam3);
	}
}

int func_11(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_12();
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

int func_12()
{
	return Global_1312745;
}

int func_13(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_12();
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

void func_14(int iParam0)
{
	func_36(93, iParam0);
	func_36(29, iParam0);
	func_36(30, iParam0);
}

bool func_15(int iParam0)
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
		return func_17(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_17(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_17(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_17(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0xEF4753434B24594D();
		iVar1 = func_16(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0xEF4753434B24594D();
		iVar3 = func_16(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0xEF4753434B24594D();
		iVar5 = func_16(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0xEF4753434B24594D();
		iVar7 = func_16(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0xEF4753434B24594D();
		iVar9 = func_16(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0xEF4753434B24594D();
		iVar11 = func_16(8274, -1, 0);
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
	return unk_0x0E4018692D92041D(Global_2097152[func_9() /*10778*/].f_6165.f_10, iParam0);
}

int func_16(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_11(iParam1)];
	if (unk_0x75D54ED6C1AD1642(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_17(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_12();
	}
	iVar1 = func_19(iParam0, iParam1);
	uVar2 = func_18(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xE35D1055B69473FB(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_18(int iParam0)
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

int func_19(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_12();
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

int func_20(bool bParam0)
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
		func_35(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_21(27, 1);
	return 1;
}

int func_21(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_22(iParam0, iParam1);
}

int func_22(int iParam0, int iParam1)
{
	if (func_34(14) && !func_33(iParam0))
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
	if (func_32(&Global_4269608))
	{
		if (func_30(&Global_4269608, iParam0))
		{
			return 0;
		}
		if (func_23(&Global_4269608, iParam0))
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

int func_23(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x321808B6A32CCA20(iParam1))
	{
		return 0;
	}
	if (func_34(14) && !func_33(iParam1))
	{
		return 0;
	}
	if (func_30(uParam0, iParam1))
	{
		return 0;
	}
	if (func_29(uParam0) < 0f)
	{
		func_28(uParam0, 0);
	}
	func_26(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_24(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_24(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x321808B6A32CCA20(iParam1))
	{
		return 0;
	}
	if (func_34(14) && !func_33(iParam1))
	{
		return 0;
	}
	if (func_30(uParam0, iParam1))
	{
		return 0;
	}
	if (func_29(uParam0) < 0f)
	{
		func_28(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_25(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_25(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_26(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_27(uParam0, iVar0);
		iVar0++;
	}
	func_28(uParam0, (Global_4269607 - 0.5f));
}

void func_27(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_28(var uParam0, float fParam1)
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

float func_29(var uParam0)
{
	return uParam0->f_80;
}

bool func_30(var uParam0, int iParam1)
{
	return func_31(uParam0, iParam1) != -1;
}

int func_31(var uParam0, int iParam1)
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

bool func_32(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_33(int iParam0)
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

bool func_34(int iParam0)
{
	return Global_36425 == iParam0;
}

int func_35(int iParam0, int iParam1)
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

void func_36(int iParam0, int iParam1)
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

void func_37()
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

int func_38()
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
			if (func_40(iVar0) && (!func_34(14) || Global_105516))
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

void func_43()
{
	int iVar0;
	
	iVar0 = unk_0xB1A92B63D6757EEF(26379945, unk_0x2CA911E7569D12EA(unk_0x33CD235DF1E6A94E(), 0.5f, -1f, 0.5f), 0f, 0f, unk_0xC472E34C8FBEC678(unk_0x33CD235DF1E6A94E()), 65f, 1, 2);
	unk_0x189377BFBDC9127F(iVar0, true);
}

int func_44()
{
	if (unk_0xCB75C331DD5DDCCC(unk_0x7B9C4CEB6D33A226()) == 4)
	{
		return 1;
	}
	return 0;
}

void func_45(int iParam0)
{
	if (unk_0x765F6FEEFF39224F(*iParam0))
	{
		unk_0xD62C4419A41F106A(*iParam0, 0);
		if (unk_0x5A04E3BD0B5E7E49(*iParam0) && unk_0x9E08E12414BD4476(*iParam0, 1))
		{
			unk_0x65F544B458249682(iParam0);
		}
	}
}

int func_46(int iParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	
	fVar0 = (fParam1 + (fParam2 / 2f));
	if (fVar0 > 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	fVar1 = (fParam1 - (fParam2 / 2f));
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	if (!unk_0xBC2FC12AD0FBF72E(iParam0))
	{
		if (fVar0 > fVar1)
		{
			if (unk_0xC472E34C8FBEC678(iParam0) < fVar0 && unk_0xC472E34C8FBEC678(iParam0) > fVar1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (unk_0xC472E34C8FBEC678(iParam0) < fVar0 || unk_0xC472E34C8FBEC678(iParam0) > fVar1)
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

int func_47()
{
	if (func_48(1000))
	{
		unk_0x7EDEAEAED85BEE4F(500);
		while (unk_0x75A50A9E5219C397())
		{
			unk_0xF3F3DC87D7163212();
			wait(0);
		}
		return 1;
	}
	return 0;
}

int func_48(int iParam0)
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
			if (func_49())
			{
				Global_27 = unk_0xE3903F59E2F22150();
				return 1;
			}
		}
	}
	return 0;
}

int func_49()
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

void func_50(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x75D54ED6C1AD1642(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x12B6E23F244DDB0F(iParam0, iVar0, 1);
}

int func_51(var uParam0, char* sParam1, char* sParam2, char[4] cParam3, char* sParam4, char[4] cParam5, int iParam6, int iParam7, int iParam8)
{
	var uVar0;
	var uVar1;
	
	func_62(uParam0, 145, sParam1, iParam7, iParam8, 0);
	if (iParam6 > 7)
	{
		if (iParam6 < 12)
		{
			iParam6 = 7;
		}
	}
	uVar0 = 10;
	uVar1 = 10;
	func_61(2, &uVar0, &uVar1, sParam2, cParam3, sParam4, cParam5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_52(&uVar0, &uVar1, iParam6, 0);
}

int func_52(var uParam0, var uParam1, int iParam2, bool bParam3)
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
					func_60();
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
		if (func_59(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_58();
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
				func_57();
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
				if (func_56())
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
			if (func_55())
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
			func_54();
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
		func_53();
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
		func_60();
	}
	return 0;
}

void func_53()
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

void func_54()
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

int func_55()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_56()
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

void func_57()
{
	if (func_34(14))
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

void func_58()
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

bool func_59(int iParam0, int iParam1)
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

void func_60()
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

void func_61(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	Global_15863 = iParam0;
	Global_15873 = 0;
	Global_15880 = 0;
	Global_15875 = 0;
	Global_16857 = 0;
	Global_16863 = 0;
	Global_2621441 = 0;
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

void func_62(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

bool func_63(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

Vector3 func_64(vector3 vParam0, vector3 vParam1)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	vector3 vVar10;
	vector3 vVar11;
	var uVar12;
	int iVar13;
	
	iVar5 = 0;
	iVar6 = 1;
	iVar0 = unk_0x8918EC905FC8975D();
	if (!unk_0x5A04E3BD0B5E7E49(iVar0))
	{
		unk_0x0D21E1FDE062ED99(iVar0, true, 0);
	}
	unk_0xFEF5F9BB57EA2E8D(unk_0x541D5C57194E73C4(iVar0), &vVar3, &vVar4);
	unk_0xC6CDE40F70F13196(vParam0, 3, &vVar2, 1, 3f, 0f);
	if (vdist(vParam0, -3039.655f, 602.4346f, 6.5719f) <= 25f)
	{
		vVar1 = { -3045.49f, 604.46f, 7.02f };
		iVar5 = 8;
	}
	else if (vdist(vParam0, 288.06f, -1257.1f, 28.44f) <= 25f)
	{
		vVar1 = { 278.97f, -1255.06f, 28.88f };
		iVar5 = 8;
	}
	while (iVar5 < 8)
	{
		switch (iVar5)
		{
			case 0:
				if (vdist(vVar2, unk_0x2CA911E7569D12EA(iVar0, 0f, (vVar4.y + IntToFloat(iVar6)), 0f)) < vdist(vVar2, unk_0x2CA911E7569D12EA(iVar0, 0f, -(vVar4.y + IntToFloat(iVar6)), 0f)))
				{
					vVar1 = { unk_0x2CA911E7569D12EA(iVar0, 0f, (vVar4.y + IntToFloat(iVar6)), 0f) };
				}
				else
				{
					vVar1 = { unk_0x2CA911E7569D12EA(iVar0, 0f, -(vVar4.y + IntToFloat(iVar6)), 0f) };
				}
				if (unk_0x765F6FEEFF39224F(iVar0))
				{
					if (!unk_0xD62C4419A41F106A(iVar0, 0))
					{
						vVar10 = { func_65(vVar1, 0f, vVar4) };
						vVar11 = { func_65(vVar1, 0f, vVar3) };
						iVar13 = unk_0x36FB861F8CCF0EA4(vVar10, vVar11, 511, iVar0, 7);
						iVar5++;
					}
					else
					{
						iVar5 = 8;
					}
				}
				else
				{
					iVar5 = 8;
				}
				break;
			
			case 1:
				if (unk_0x819B6E76423AE494(iVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 2)
				{
					if (iVar7 != 0)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 2;
						}
						else
						{
							iVar6++;
							iVar5 = 0;
						}
					}
					else if (unk_0x16E00F066AFFEA0D(vVar1, vParam0, true) <= 5f || unk_0x16E00F066AFFEA0D(vVar1, vParam1, true) <= 5f)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 2;
						}
						else
						{
							iVar6++;
							iVar5 = 0;
						}
					}
					else
					{
						iVar5 = 8;
					}
				}
				break;
			
			case 2:
				if (vdist(vVar2, unk_0x2CA911E7569D12EA(iVar0, 0f, (vVar4.y - IntToFloat(iVar6)), 0f)) < vdist(vVar2, unk_0x2CA911E7569D12EA(iVar0, 0f, -(vVar4.y - IntToFloat(iVar6)), 0f)))
				{
					vVar1 = { unk_0x2CA911E7569D12EA(iVar0, 0f, (vVar4.y - IntToFloat(iVar6)), 0f) };
				}
				else
				{
					vVar1 = { unk_0x2CA911E7569D12EA(iVar0, 0f, -(vVar4.y - IntToFloat(iVar6)), 0f) };
				}
				if (unk_0x765F6FEEFF39224F(iVar0))
				{
					if (!unk_0xD62C4419A41F106A(iVar0, 0))
					{
						vVar10 = { func_65(vVar1, 0f, vVar4) };
						vVar11 = { func_65(vVar1, 0f, vVar3) };
						iVar13 = unk_0x36FB861F8CCF0EA4(vVar10, vVar11, 511, iVar0, 7);
						iVar5++;
					}
					else
					{
						iVar5 = 8;
					}
				}
				else
				{
					iVar5 = 8;
				}
				break;
			
			case 3:
				if (unk_0x819B6E76423AE494(iVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 2)
				{
					if (iVar7 != 0)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 4;
						}
						else
						{
							iVar6++;
							iVar5 = 2;
						}
					}
					else if (unk_0x16E00F066AFFEA0D(vVar1, vParam0, true) <= 5f || unk_0x16E00F066AFFEA0D(vVar1, vParam1, true) <= 5f)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 4;
						}
						else
						{
							iVar6++;
							iVar5 = 2;
						}
					}
					else
					{
						iVar5 = 8;
					}
				}
				break;
			
			case 4:
				if (vdist(vVar2, unk_0x2CA911E7569D12EA(iVar0, (vVar4.x + IntToFloat(iVar6)), 0f, 0f)) < vdist(vVar2, unk_0x2CA911E7569D12EA(iVar0, -(vVar4.x + IntToFloat(iVar6)), 0f, 0f)))
				{
					vVar1 = { unk_0x2CA911E7569D12EA(iVar0, (vVar4.x + IntToFloat(iVar6)), 0f, 0f) };
				}
				else
				{
					vVar1 = { unk_0x2CA911E7569D12EA(iVar0, -(vVar4.x + IntToFloat(iVar6)), 0f, 0f) };
				}
				if (unk_0x765F6FEEFF39224F(iVar0))
				{
					if (!unk_0xD62C4419A41F106A(iVar0, 0))
					{
						vVar10 = { func_65(vVar1, 0f, vVar4) };
						vVar11 = { func_65(vVar1, 0f, vVar3) };
						iVar13 = unk_0x36FB861F8CCF0EA4(vVar10, vVar11, 511, iVar0, 7);
						iVar5++;
					}
					else
					{
						iVar5 = 8;
					}
				}
				else
				{
					iVar5 = 8;
				}
				break;
			
			case 5:
				if (unk_0x819B6E76423AE494(iVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 2)
				{
					if (iVar7 != 0)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 6;
						}
						else
						{
							iVar6++;
							iVar5 = 4;
						}
					}
					else if (unk_0x16E00F066AFFEA0D(vVar1, vParam0, true) <= 5f || unk_0x16E00F066AFFEA0D(vVar1, vParam1, true) <= 5f)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 6;
						}
						else
						{
							iVar6++;
							iVar5 = 4;
						}
					}
					else
					{
						iVar5 = 8;
					}
				}
				break;
			
			case 6:
				if (vdist(vVar2, unk_0x2CA911E7569D12EA(iVar0, (vVar4.x - IntToFloat(iVar6)), 0f, 0f)) < vdist(vVar2, unk_0x2CA911E7569D12EA(iVar0, -(vVar4.x - IntToFloat(iVar6)), 0f, 0f)))
				{
					vVar1 = { unk_0x2CA911E7569D12EA(iVar0, (vVar4.x - IntToFloat(iVar6)), 0f, 0f) };
				}
				else
				{
					vVar1 = { unk_0x2CA911E7569D12EA(iVar0, -(vVar4.x - IntToFloat(iVar6)), 0f, 0f) };
				}
				if (unk_0x765F6FEEFF39224F(iVar0))
				{
					if (!unk_0xD62C4419A41F106A(iVar0, 0))
					{
						vVar10 = { func_65(vVar1, 0f, vVar4) };
						vVar11 = { func_65(vVar1, 0f, vVar3) };
						iVar13 = unk_0x36FB861F8CCF0EA4(vVar10, vVar11, 511, iVar0, 7);
						iVar5++;
					}
					else
					{
						iVar5 = 8;
					}
				}
				else
				{
					iVar5 = 8;
				}
				break;
			
			case 7:
				if (unk_0x819B6E76423AE494(iVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 2)
				{
					if (iVar7 != 0)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 8;
						}
						else
						{
							iVar6++;
							iVar5 = 6;
						}
					}
					else if (unk_0x16E00F066AFFEA0D(vVar1, vParam0, true) <= 5f || unk_0x16E00F066AFFEA0D(vVar1, vParam1, true) <= 5f)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 8;
						}
						else
						{
							iVar6++;
							iVar5 = 6;
						}
					}
					else
					{
						iVar5 = 8;
					}
				}
				break;
			
			case 8:
				break;
		}
		wait(0);
	}
	return vVar1;
}

Vector3 func_65(vector3 vParam0, float fParam1, struct<2> Param2, var uParam3)
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	
	fVar1 = fParam1;
	fVar2 = cos(fVar1);
	fVar3 = sin(fVar1);
	vVar0.x = ((Param2 * fVar2) + (Param2.f_1 * fVar3));
	vVar0.y = ((Param2.f_1 * fVar2) - (Param2 * fVar3));
	vVar4 = { vParam0 + vVar0 };
	return vVar4;
}

int func_66(int iParam0)
{
	if (func_109(iParam0))
	{
		if (unk_0x91D5C8283D19AF49(iParam0, 0))
		{
			if (!unk_0x17260B4EA0652E1C(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_67(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (unk_0x7EECA16E87982278((vParam0.x - vParam1.x)) <= fParam2)
		{
			if (unk_0x7EECA16E87982278((vParam0.y - vParam1.y)) <= fParam2)
			{
				if (unk_0x7EECA16E87982278((vParam0.z - vParam1.z)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x7EECA16E87982278((vParam0.x - vParam1.x)) <= fParam2)
	{
		if (unk_0x7EECA16E87982278((vParam0.y - vParam1.y)) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

void func_68(int iParam0, var uParam1, var uParam2, char* sParam3, char* sParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	vector3 vVar8;
	vector3 vVar9;
	vector3 vVar10;
	var uVar11;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 1;
	*uParam1 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false) };
	uParam2->f_2 = func_70(iParam0, unk_0x33CD235DF1E6A94E(), 1);
	fVar3 = func_70(iParam0, unk_0x33CD235DF1E6A94E(), 1);
	fVar4 = func_70(iParam0, unk_0x33CD235DF1E6A94E(), 1);
	vVar10 = { unk_0xFBB1F99A825CAB09(iParam0, false) - unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false) };
	if (unk_0xE9CCF312047EBEE0(sParam3))
	{
		vVar9 = { unk_0xF666CBF66A90975A(sParam3, sParam4, *uParam1, *uParam2, 0, 2) };
	}
	else
	{
		vVar9 = { *uParam1 + Vector(0f, 5f, 5f) };
	}
	while (iVar0 < 2)
	{
		switch (iVar0)
		{
			case 0:
				if (iVar1 > 20)
				{
					uParam2->f_2 = func_69(unk_0xFBB1F99A825CAB09(iParam0, false), *uParam1, 1);
					*uParam1 = { unk_0xCD1EDCB38767B47C(unk_0xFBB1F99A825CAB09(iParam0, false), uParam2->f_2, vVar10) };
					iVar0 = 2;
				}
				else
				{
					iVar5 = unk_0x0F79DCFDE3D6F778(*uParam1, vVar9 + Vector(-1f, 0f, 0f), 0.5f, 17, 0, 4);
					iVar0++;
				}
				break;
			
			case 1:
				if (unk_0x819B6E76423AE494(iVar5, &iVar6, &vVar8, &uVar7, &uVar11) == 2)
				{
					if (iVar6 != 0)
					{
						if (vVar8.z > (uParam1->f_2 + 8.5f))
						{
							iVar0++;
						}
						else
						{
							if (iVar1 <= 3)
							{
								fVar4 = (fVar4 + 7.5f);
							}
							else
							{
								fVar4 = (fVar3 - (7.5f * IntToFloat(iVar2)));
								iVar2++;
							}
							*uParam1 = { unk_0xCD1EDCB38767B47C(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false), fVar4, vVar10) };
							iVar1++;
							iVar0 = 0;
						}
					}
					else
					{
						if (iVar1 > 0)
						{
							uParam2->f_2 = func_69(vVar9 + Vector(-0.75f, 0f, 0f), *uParam1, 1);
						}
						iVar0++;
					}
				}
				break;
			
			case 2:
				break;
		}
		wait(0);
	}
}

float func_69(struct<2> Param0, float fParam1, struct<2> Param2, var uParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param2 - Param0);
	fVar2 = (Param2.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = unk_0xB92C3C556226E8F9(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam4 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

float func_70(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { unk_0xFBB1F99A825CAB09(iParam0, false) };
	vVar1 = { unk_0xFBB1F99A825CAB09(iParam1, false) };
	return func_69(vVar0, vVar1, iParam2);
}

void func_71(vector3 vParam0, float fParam1, float fParam2)
{
	bool bVar0;
	vector3 vVar1;
	float fVar2;
	
	bVar0 = false;
	if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		vVar1 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true) - vParam0 };
		fVar2 = unk_0x174C48E9E544E9A8(vVar1.x, vVar1.y);
		if (func_72(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), fVar2, 15f))
		{
			bVar0 = true;
		}
		vVar1 = { vParam0 - unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true) };
		fVar2 = unk_0x174C48E9E544E9A8(vVar1.x, vVar1.y);
		if (func_72(unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0), fVar2, 15f))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (unk_0x8BB475EA09C9A0EB(unk_0x33CD235DF1E6A94E()) > 30f)
		{
			*fParam1 = (6f * 4f);
		}
		else if (unk_0x8BB475EA09C9A0EB(unk_0x33CD235DF1E6A94E()) > 20f)
		{
			*fParam1 = (6f * 3f);
		}
		else if (unk_0x8BB475EA09C9A0EB(unk_0x33CD235DF1E6A94E()) > 10f)
		{
			*fParam1 = (6f * 2f);
		}
		else
		{
			*fParam1 = 6f;
		}
		*fParam2 = ((*fParam1 / 1.33f) - 1f);
	}
	else
	{
		*fParam1 = 6f;
		*fParam2 = ((*fParam1 / 1.33f) - 1f);
	}
}

int func_72(int iParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (unk_0x91D5C8283D19AF49(iParam0, 0))
	{
		fVar0 = unk_0xC472E34C8FBEC678(iParam0);
		fVar2 = (fParam1 - fParam2);
		if (fVar2 < 0f)
		{
			fVar2 = (fVar2 + 360f);
		}
		fVar1 = (fParam1 + fParam2);
		if (fVar1 >= 360f)
		{
			fVar1 = (fVar1 - 360f);
		}
		if (fVar1 > fVar2)
		{
			if (fVar0 < fVar1 && fVar0 > fVar2)
			{
				return 1;
			}
		}
		else if (fVar0 < fVar1 || fVar0 > fVar2)
		{
			return 1;
		}
	}
	return 0;
}

void func_73(int iParam0)
{
	if (func_77())
	{
		return;
	}
	if (!Global_14553.f_1 == 1)
	{
		if (func_76(0))
		{
			func_74(iParam0);
		}
		unk_0x8950ED5730F62EE8(&Global_2424, 2);
	}
}

void func_74(int iParam0)
{
	if (func_77())
	{
		return;
	}
	if (Global_14725)
	{
		func_75(0, 0);
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
	if (!func_55())
	{
		Global_14553.f_1 = 3;
	}
}

void func_75(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_76(0))
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

int func_76(int iParam0)
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

bool func_77()
{
	return unk_0x0E4018692D92041D(Global_1681628, 19);
}

void func_78()
{
	Global_14732 = 0;
	func_79();
}

void func_79()
{
	unk_0x3F4DBD0F910C454B();
	Global_16877 = 0;
	if (unk_0x12BF789190D82474())
	{
		unk_0xD92171BC6C48DB90(false);
		Global_15866 = 6;
	}
}

int func_80(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_81(iParam0);
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

void func_81(int iParam0)
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

void func_82(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0xCBE6E2953ED9652D(unk_0x95B959F18401C09A());
		unk_0xF4197686EF83F52A(unk_0x95B959F18401C09A(), 1);
		unk_0x11D1216D8F205785(unk_0x95B959F18401C09A(), 1);
		func_89(1);
		unk_0x9F86AEF7DC996029();
		unk_0x68F7298CC6F16961();
		if (Global_14553.f_1 > 3)
		{
			if (unk_0xA30F14B621E3269D())
			{
				unk_0xD92171BC6C48DB90(false);
			}
			if (!func_55())
			{
				Global_14553.f_1 = 3;
			}
			Global_15866 = 5;
		}
		func_88(1, iParam3, iParam2, 0);
		Global_56500 = 1;
		Global_68810 = 1;
		Global_71588 = 1;
	}
	else
	{
		func_89(0);
		unk_0xD384C2E6BE0D5ABF();
		Global_56500 = 0;
		if (bParam1)
		{
			unk_0x36296F11E96E764D();
		}
		unk_0xF4197686EF83F52A(unk_0x95B959F18401C09A(), 0);
		unk_0x11D1216D8F205785(unk_0x95B959F18401C09A(), 0);
		func_88(0, iParam3, iParam2, 0);
		if (unk_0xB331FCEB94EB05C8())
		{
			if (((((!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()) && !func_86(unk_0x95B959F18401C09A())) && !func_84(unk_0x95B959F18401C09A(), 0)) && !func_83()) && !bParam4) && !bParam5)
			{
				unk_0x9611832841071B69(unk_0x33CD235DF1E6A94E(), false);
			}
		}
		else if (((!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()) && !func_86(unk_0x95B959F18401C09A())) && !bParam4) && !bParam5)
		{
			unk_0x9611832841071B69(unk_0x33CD235DF1E6A94E(), false);
		}
		Global_71588 = 0;
	}
}

bool func_83()
{
	return unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_39.f_18, 14);
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
		iVar1 = func_12();
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

int func_86(int iParam0)
{
	if (func_84(iParam0, 0))
	{
		return 1;
	}
	if (func_87())
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

bool func_87()
{
	return unk_0x0E4018692D92041D(Global_2359302, 3);
}

int func_88(int iParam0, int iParam1, var uParam2, int iParam3)
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

void func_89(int iParam0)
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

void func_90()
{
	Global_14732 = 0;
	func_60();
}

int func_91()
{
	if (Global_15866 != 0 || unk_0x12BF789190D82474())
	{
		return 1;
	}
	return 0;
}

int func_92()
{
	if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		if (func_91())
		{
			return 1;
		}
	}
	return 0;
}

int func_93(bool bParam0, bool bParam1, bool bParam2)
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

bool func_94(int iParam0)
{
	return func_95(func_96(iParam0));
}

int func_95(char* sParam0)
{
	unk_0x6D39881CA5436178(sParam0);
	return unk_0xA32C2C4DF096C08A(0);
}

char* func_96(int iParam0)
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

int func_97()
{
	switch (iLocal_72)
	{
		case 1:
			if (!unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -190.8152f, -801.3224f, 25.45401f, -214.8212f, -866.6472f, 35.0318f, 40f, 0, true, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (!unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), 270.5801f, -1290.954f, 24.16572f, 270.499f, -1238.311f, 34.52738f, 58.25f, 0, true, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if (!unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -3038.987f, 606.4774f, 2.589385f, -3057.039f, 599.7103f, 12.70948f, 19.25f, 0, true, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (!unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), 170.8581f, 6619.894f, 30.31941f, 183.9522f, 6632.882f, 34.06088f, 22.25f, 0, true, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (!unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -9.663248f, -938.2167f, 24.29024f, 48.12534f, -959.4428f, 34.60982f, 7.5f, 0, true, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if (!unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), 283.0487f, -923.3091f, 24.13956f, 301.367f, -871.6924f, 34.4707f, 6.75f, 0, true, 0))
			{
				return 1;
			}
			break;
		
		case 11:
			if (!unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), 1053.799f, -772.7601f, 53.31232f, 1112.018f, -772.2864f, 60.16156f, 14.75f, 0, true, 0))
			{
				return 1;
			}
			break;
		
		case 16:
			if (!unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -2097.21f, -292.7766f, 8.141721f, -2101.908f, -345.41f, 18.23235f, 54.25f, 0, true, 0))
			{
				return 1;
			}
			break;
		
		case 17:
			if (!unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -799.6841f, -1117.781f, 5.659806f, -820.5555f, -1080.585f, 16.38764f, 29.5f, 0, true, 0))
			{
				return 1;
			}
			break;
		
		case 18:
			if (!unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -731.1746f, -820.053f, 18.06713f, -670.6583f, -821.2724f, 29.66125f, 8f, 0, true, 0))
			{
				return 1;
			}
			break;
		
		case 19:
			if (!unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -379.9555f, 6033.261f, 29.74875f, -394.2914f, 6047.678f, 33.9986f, 7f, 0, true, 0) && !unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -393.6422f, 6056.547f, 29.75011f, -402.4834f, 6047.817f, 33.99312f, 17.5f, 0, true, 0))
			{
				return 1;
			}
			break;
		
		case 22:
			if (!unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -294.338f, -833.5905f, 26.65178f, -330.661f, -827.2508f, 38.64983f, 16.5f, 0, true, 0) && !unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -294.1309f, -836.8602f, 26.72095f, -284.6938f, -814.233f, 37.38612f, 11f, 0, true, 0))
			{
				return 1;
			}
			break;
		
		case 23:
			if ((!unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -253.9362f, -689.096f, 28.56934f, -278.4698f, -682.0773f, 38.52502f, 9.5f, 0, true, 0) && !unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -253.3138f, -687.6628f, 28.5611f, -247.2367f, -703.1184f, 38.8144f, 9.5f, 0, true, 0)) && !unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -255.6709f, -726.2742f, 28.5187f, -247.2367f, -703.1184f, 38.8144f, 9.5f, 0, true, 0))
			{
				return 1;
			}
			break;
		
		case 25:
			if (!unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), 114.2641f, -9.324284f, 62.78819f, 75.47891f, 4.897117f, 73.96004f, 7f, 0, true, 0))
			{
				return 1;
			}
			break;
		
		case 30:
			if (!unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -544.5211f, -1200.006f, 12.87966f, -509.3911f, -1216.772f, 23.72543f, 41f, 0, true, 0))
			{
				return 1;
			}
			break;
		
		case 31:
			if (!unk_0xD4B4F68F3449CBEC(unk_0x33CD235DF1E6A94E(), -2945.132f, 491.4792f, 13.2899f, -2971.825f, 492.9101f, 18.0671f, 10f, 0, true, 0))
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	if (unk_0x65F35477FEAD6F0F(unk_0x33CD235DF1E6A94E()) != 0)
	{
		return 1;
	}
	return 0;
}

void func_98()
{
	var uVar0;
	
	if (!bLocal_95)
	{
		if (iLocal_126)
		{
			func_106();
		}
		else
		{
			if (!unk_0xBC2FC12AD0FBF72E(iLocal_55))
			{
				if (unk_0xAC6A512C64D9A9C0(unk_0x95B959F18401C09A(), iLocal_55) || unk_0xC2ECB90E2DFA5802(unk_0x95B959F18401C09A(), iLocal_55))
				{
					if (unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iLocal_55, 25f, 25f, 25f, 0, 1, 0))
					{
						iLocal_126 = 1;
					}
				}
			}
			else
			{
				iLocal_126 = 1;
			}
			func_116(iLocal_59, &uLocal_70);
		}
		if (!bLocal_127)
		{
			if (bLocal_90)
			{
				if (unk_0xC52B92C972695208(iLocal_89))
				{
					func_50(joaat("rc_wallets_recovered"), 1);
					unk_0x75D54ED6C1AD1642(joaat("rc_wallets_recovered"), &uVar0, -1);
					unk_0x61AE8E2B7BB7D8BA(0, 200, 250);
					func_99(2);
					bLocal_95 = true;
				}
				else if (unk_0xE38E3CF1625A4145(iLocal_60))
				{
					if (vdist(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), unk_0x0F77516D457A04F5(iLocal_89)) > 150f)
					{
						if (unk_0xBC2FC12AD0FBF72E(iLocal_56))
						{
							func_271();
						}
						else if (vdist(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), unk_0xFBB1F99A825CAB09(iLocal_56, true)) > 100f)
						{
							func_271();
						}
					}
				}
			}
		}
	}
}

void func_99(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_106565.f_24989.f_2 < 3)
			{
				if (!unk_0x6B59932722922B69())
				{
					func_100(func_96(iParam0), -1);
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
					func_100(func_96(iParam0), -1);
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
					func_100(func_96(iParam0), -1);
					Global_106565.f_24989.f_4++;
					unk_0x8950ED5730F62EE8(&Global_106561, 2);
				}
			}
			break;
	}
}

void func_100(char* sParam0, int iParam1)
{
	unk_0x37621D6689F9E3C3(sParam0);
	unk_0x092150016C06C431(0, 0, true, iParam1);
}

void func_101(var uParam0)
{
	*uParam0 = -99;
}

int func_102(int iParam0, bool bParam1, int iParam2)
{
	iParam2 = iParam2;
	return func_103(iParam0, bParam1, 145);
}

int func_103(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_104(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xE38E3CF1625A4145(iVar0)) && unk_0xEAF855A7DC28BC8D(&(Global_106565.f_28044[iParam2 /*29*/].f_3)))
	{
		unk_0x1C95CD840303FC37(iVar0, &(Global_106565.f_28044[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_104(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0x765F6FEEFF39224F(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x8848A15CBDADDC60(iParam0);
	if (unk_0x680558231C80291D(iParam0))
	{
		unk_0xCE5C49921A521962(iVar0, func_105(unk_0xB331FCEB94EB05C8(), 1f, 1f));
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
		unk_0xCE5C49921A521962(iVar0, func_105(unk_0xB331FCEB94EB05C8(), 0.7f, 0.7f));
		unk_0xBF11C8A43770C598(iVar0, bParam1);
	}
	else if (unk_0xA3A29DB165882310(iParam0))
	{
		unk_0xCE5C49921A521962(iVar0, func_105(unk_0xB331FCEB94EB05C8(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_105(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_106()
{
	int iVar0;
	int iVar1;
	
	iVar0 = joaat("pickup_money_purse");
	if (!bLocal_90)
	{
		unk_0x8950ED5730F62EE8(&iVar1, 3);
		unk_0x8950ED5730F62EE8(&iVar1, 4);
		unk_0x8950ED5730F62EE8(&iVar1, 1);
		iLocal_89 = unk_0x6413BF5F9B062200(iVar0, unk_0xB06F4A08BF57E69A(iLocal_55, 1067030938, 1069547520), iVar1, iLocal_133, 1, iLocal_101);
		bLocal_90 = true;
		iLocal_60 = func_107(iLocal_89);
		func_119(&Local_107, cLocal_123, sLocal_119, 4, 0, 0, 0);
		if (unk_0xE38E3CF1625A4145(iLocal_59))
		{
			unk_0x1ABDB383C83A336A(&iLocal_59);
		}
		if (func_109(iLocal_56))
		{
			unk_0xED68CDDDE25A144E(iLocal_56);
		}
	}
	else
	{
		if (!iLocal_91)
		{
			if (!func_175(iLocal_56, 242628503) && !unk_0xBC2FC12AD0FBF72E(iLocal_56))
			{
				unk_0x99414FB2D30425C1(&iLocal_61);
				if (!unk_0x18FB647D79B09657(iLocal_56, vLocal_138, 0.5f, 0.5f, 0.5f, false, true, 0))
				{
					unk_0x2A25AECBD792A364(0, vLocal_138, 1f, 20000, 1193033728, 1056964608);
				}
				unk_0x11C4AF4137F2A4B5(0, unk_0x33CD235DF1E6A94E(), 0);
				unk_0x108754262311D34F(0, cLocal_148, sLocal_149, 8f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0x108754262311D34F(0, cLocal_148, sLocal_151, 8f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0x108754262311D34F(0, cLocal_148, sLocal_150, 8f, -2f, -1, 1, 0, 0, 0, 0);
				unk_0xC734F59A13D39AEF(iLocal_61);
				unk_0x13A2D602CD10CBAC(iLocal_56, iLocal_61);
				unk_0xA7A57E7757ED035E(&iLocal_61);
			}
		}
		if (iLocal_91)
		{
			if (!bLocal_95)
			{
				if (!unk_0xBC2FC12AD0FBF72E(iLocal_56))
				{
					if (unk_0x1CE8F0A08E65CA6A(iLocal_56, cLocal_93, "pickup_low", 3))
					{
						if (unk_0x204DEACC5BECF723(iLocal_56, cLocal_93, "pickup_low") > 0.35f)
						{
							if (unk_0xECCFCAB0A094EB5B(iLocal_89))
							{
								func_119(&Local_107, cLocal_123, cLocal_120, 4, 0, 0, 0);
								unk_0x40A22CF588A191A1(iLocal_89);
								unk_0xF8E07C228A90E953(iLocal_56, iLocal_133);
								unk_0x4A852F02088ECC9D(iLocal_56, false);
								unk_0x1F45B4626AC4A4C0(&iLocal_56);
								func_289(1);
							}
						}
					}
					else if (unk_0xD76D6BCC14B95CE1(iLocal_56, 242628503) == 7)
					{
						unk_0xED68CDDDE25A144E(iLocal_56);
						unk_0x99414FB2D30425C1(&iLocal_61);
						unk_0x108754262311D34F(0, cLocal_93, "pickup_low", 8f, -8f, -1, 0, 0, 0, 0, 0);
						unk_0xC4A347124F39D998(0, unk_0x33CD235DF1E6A94E(), 3000, 2048, 2);
						unk_0x11C4AF4137F2A4B5(0, unk_0x33CD235DF1E6A94E(), 3000);
						unk_0xBD4591245C650283(0, 1193033728, 0);
						unk_0xC734F59A13D39AEF(iLocal_61);
						unk_0x13A2D602CD10CBAC(iLocal_56, iLocal_61);
						unk_0xA7A57E7757ED035E(&iLocal_61);
						unk_0x897EF720254BBEA3(iLocal_56, true);
					}
				}
			}
		}
		else if (!unk_0xBC2FC12AD0FBF72E(iLocal_56))
		{
			if (unk_0xECCFCAB0A094EB5B(iLocal_89))
			{
				if (unk_0x18FB647D79B09657(iLocal_56, unk_0x0F77516D457A04F5(iLocal_89), 10f, 10f, 7f, false, true, 0))
				{
					unk_0xED68CDDDE25A144E(iLocal_56);
					unk_0x99414FB2D30425C1(&iLocal_61);
					unk_0x7E268975AF5EA74F(0, unk_0x0F77516D457A04F5(iLocal_89), 1f, 20000, 1f, 512, 1193033728);
					unk_0x9F878FE3F23E2C8B(0, unk_0x0F77516D457A04F5(iLocal_89), 0);
					unk_0x108754262311D34F(0, cLocal_93, "pickup_low", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0xC4A347124F39D998(0, unk_0x33CD235DF1E6A94E(), 3000, 2048, 2);
					unk_0x11C4AF4137F2A4B5(0, unk_0x33CD235DF1E6A94E(), 3000);
					unk_0xBD4591245C650283(0, 1193033728, 0);
					unk_0xC734F59A13D39AEF(iLocal_61);
					unk_0x13A2D602CD10CBAC(iLocal_56, iLocal_61);
					unk_0xA7A57E7757ED035E(&iLocal_61);
					unk_0x897EF720254BBEA3(iLocal_56, true);
					iLocal_91 = 1;
				}
			}
		}
	}
}

int func_107(int iParam0)
{
	return func_108(iParam0);
}

int func_108(int iParam0)
{
	int iVar0;
	
	if (!unk_0xECCFCAB0A094EB5B(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0xCB795F691042D011(iParam0);
	unk_0xCE5C49921A521962(iVar0, func_105(unk_0xB331FCEB94EB05C8(), 0.7f, 0.7f));
	return iVar0;
}

int func_109(int iParam0)
{
	if (unk_0x765F6FEEFF39224F(iParam0))
	{
		if (!unk_0xD62C4419A41F106A(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_110()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	switch (iLocal_65)
	{
		case 1:
		case 2:
			if (unk_0x91BBD269506D61D2(iLocal_55, unk_0x33CD235DF1E6A94E(), 1))
			{
				unk_0x0D847D71D9E6142E(iLocal_55);
				bVar0 = true;
			}
			if (unk_0x91D5C8283D19AF49(iLocal_73, 0) && unk_0x10930B9CAD4111C2(iLocal_55, iLocal_73, 0))
			{
				if (unk_0x8EDBE29FEAB08840(iLocal_73))
				{
					if (unk_0x948A37B10533FA15(iLocal_73))
					{
						bVar0 = true;
					}
				}
			}
			else if (!unk_0x91D5C8283D19AF49(iLocal_73, 0) || !func_175(iLocal_55, -1273030092))
			{
				bVar0 = true;
			}
			if (!unk_0xD82CBCB7E04DDA8A(iLocal_55))
			{
				if (unk_0xD76D6BCC14B95CE1(iLocal_55, -1273030092) == 7)
				{
					bVar0 = true;
				}
			}
			if (bVar0)
			{
				if (!iLocal_86)
				{
					if (unk_0x10930B9CAD4111C2(iLocal_55, iLocal_73, 0))
					{
						if (unk_0xD76D6BCC14B95CE1(iLocal_55, 242628503) != 1 && unk_0xD76D6BCC14B95CE1(iLocal_55, 242628503) != 0)
						{
							unk_0x99414FB2D30425C1(&iLocal_62);
							unk_0x07C339D4328CA16C(0, 0, 0);
							unk_0xECCD4FDA45197F97(0, unk_0x33CD235DF1E6A94E(), 300f, -1, 0, 0);
							unk_0xC734F59A13D39AEF(iLocal_62);
							unk_0x13A2D602CD10CBAC(iLocal_55, iLocal_62);
							unk_0xA7A57E7757ED035E(&iLocal_62);
						}
					}
					else if (unk_0xD76D6BCC14B95CE1(iLocal_55, 242628503) != 1 && unk_0xD76D6BCC14B95CE1(iLocal_55, 242628503) != 0)
					{
						unk_0x99414FB2D30425C1(&iLocal_62);
						unk_0xECCD4FDA45197F97(0, unk_0x33CD235DF1E6A94E(), 300f, -1, 0, 0);
						unk_0xC734F59A13D39AEF(iLocal_62);
						unk_0x13A2D602CD10CBAC(iLocal_55, iLocal_62);
						unk_0xA7A57E7757ED035E(&iLocal_62);
					}
					iVar1 = unk_0xE32E5EE0A68EBF7A(iLocal_55);
					if (iVar1 == 2)
					{
						unk_0xED68CDDDE25A144E(iLocal_55);
						if (func_109(unk_0x33CD235DF1E6A94E()))
						{
							unk_0x277716E9E7CC0692(iLocal_55, unk_0x33CD235DF1E6A94E(), 0, 16);
						}
						iLocal_86 = 1;
					}
				}
			}
			break;
	}
}

int func_111()
{
	if (!unk_0xBC2FC12AD0FBF72E(iLocal_55))
	{
		if (unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iLocal_55, 180f, 180f, 50f, 0, 1, 0) || !unk_0xC30D5C4DCAC8020A(iLocal_55))
		{
			func_112(iLocal_59, iLocal_55, 180f, 1061158912, 0);
			return 1;
		}
		else
		{
			if (Local_107[2 /*10*/].f_7)
			{
				func_178(&Local_107, 2);
			}
			unk_0x4B8B69DAE5BAC592(&iLocal_55);
			if (unk_0x91D5C8283D19AF49(iLocal_73, 0))
			{
				if (unk_0xC30D5C4DCAC8020A(iLocal_73))
				{
					unk_0x7AC8DF0B83EB4C6B(&iLocal_73);
				}
			}
		}
	}
	else if (vdist(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false), unk_0xFBB1F99A825CAB09(iLocal_55, false)) < 300f)
	{
		return 1;
	}
	return 0;
}

void func_112(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (unk_0xE38E3CF1625A4145(iParam0))
	{
		if ((unk_0x765F6FEEFF39224F(iParam1) && unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E())) && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
		{
			if (unk_0x680558231C80291D(iParam1))
			{
				if (unk_0x91D5C8283D19AF49(unk_0xEAE1362B9F5C7B18(iParam1), 0))
				{
					fVar1 = unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), unk_0xFBB1F99A825CAB09(iParam1, true), true);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = round((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0x0E734BC61706D976(iParam0, 1);
						unk_0xE447A1B9434714F3(iParam0, (255 - iVar0));
					}
					else
					{
						unk_0x0E734BC61706D976(iParam0, 0);
						unk_0xE447A1B9434714F3(iParam0, 255);
					}
				}
			}
			else if (unk_0x068481DAF84B9654(iParam1))
			{
				if (!unk_0xBC2FC12AD0FBF72E(unk_0x22B02EC53152632C(iParam1)))
				{
					fVar1 = unk_0x16E00F066AFFEA0D(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), unk_0xFBB1F99A825CAB09(iParam1, true), true);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = round(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0x0E734BC61706D976(iParam0, 1);
						unk_0xE447A1B9434714F3(iParam0, (255 - iVar0));
					}
					else
					{
						unk_0x0E734BC61706D976(iParam0, 0);
						unk_0xE447A1B9434714F3(iParam0, 255);
					}
				}
			}
		}
	}
}

void func_113(int iParam0, char* sParam1, int iParam2)
{
	unk_0xAEED0213982928AC(iParam0, sParam1, func_114(iParam2), 1);
}

int func_114(int iParam0)
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

float func_115(int iParam0, int iParam1, bool bParam2)
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

void func_116(int iParam0, var uParam1)
{
	if (unk_0xE38E3CF1625A4145(iParam0))
	{
		if (unk_0xE3903F59E2F22150() > *uParam1 + 500)
		{
			if (unk_0x2694E4096D4C697C(iParam0) == 1)
			{
				unk_0xBF11C8A43770C598(iParam0, true);
			}
			else
			{
				unk_0xBF11C8A43770C598(iParam0, false);
				unk_0xB9E84A421C105943(iParam0, 1);
			}
			*uParam1 = unk_0xE3903F59E2F22150();
		}
		if (!unk_0xFAC8F20FBC764F4D() && func_117(0))
		{
			func_99(1);
		}
	}
}

bool func_117(int iParam0)
{
	return unk_0x0E4018692D92041D(Global_106561, iParam0);
}

void func_118()
{
	switch (iLocal_65)
	{
		case 1:
		case 2:
			if (unk_0x91D5C8283D19AF49(iLocal_73, 0))
			{
				if (iLocal_126)
				{
					if (unk_0xEE984ED4E4A374BE(iLocal_55, iLocal_73) || unk_0xD76D6BCC14B95CE1(iLocal_55, -1273030092) == 1)
					{
						unk_0x6ED1018181C54CFB(iLocal_55, iLocal_73, vLocal_53, 8, 35f, 786469, 10f, 10f, 1);
					}
					else
					{
						unk_0xECCD4FDA45197F97(iLocal_55, unk_0x33CD235DF1E6A94E(), 300f, -1, 0, 0);
					}
				}
				else
				{
					if (!unk_0x8EDBE29FEAB08840(iLocal_73))
					{
						unk_0x1F986633C8E180BA(iLocal_73, 0.1f, 1000, 0, 0, 0, -1);
					}
					unk_0x6ED1018181C54CFB(iLocal_55, iLocal_73, unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false), 8, 35f, 786469, 10f, 10f, 1);
				}
			}
			else
			{
				unk_0xECCD4FDA45197F97(iLocal_55, unk_0x33CD235DF1E6A94E(), 300f, -1, 0, 0);
			}
			break;
		
		case 4:
			if (!iLocal_126)
			{
				unk_0x99414FB2D30425C1(&iLocal_61);
				unk_0x7E268975AF5EA74F(0, 182.61f, 6637.91f, 30.54f, 3f, 20000, 0.25f, 1, 1193033728);
				unk_0x7E268975AF5EA74F(0, 240.53f, 6694.1f, 28.62f, 3f, 20000, 0.25f, 1, 1193033728);
				unk_0xECCD4FDA45197F97(0, unk_0x33CD235DF1E6A94E(), 300f, -1, 0, 0);
				unk_0xC734F59A13D39AEF(iLocal_61);
				unk_0x13A2D602CD10CBAC(iLocal_55, iLocal_61);
				unk_0xA7A57E7757ED035E(&iLocal_61);
			}
			else
			{
				unk_0xECCD4FDA45197F97(iLocal_55, unk_0x33CD235DF1E6A94E(), 300f, -1, 0, 0);
			}
			break;
		
		default:
			if (unk_0x16E00F066AFFEA0D(vLocal_53, -3044.11f, 594.34f, 6.73f, true) < 5f)
			{
				unk_0x6DA4DBA91F234052(iLocal_55, unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false), 300f, -1, 0, 0);
				unk_0xA7A57E7757ED035E(&iLocal_61);
			}
			else if (iLocal_126)
			{
				unk_0xECCD4FDA45197F97(iLocal_55, unk_0x33CD235DF1E6A94E(), 300f, -1, 0, 0);
			}
			else
			{
				unk_0x6DA4DBA91F234052(iLocal_55, unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false), 300f, -1, 0, 0);
			}
			break;
	}
	if (!unk_0xBC2FC12AD0FBF72E(iLocal_55))
	{
		unk_0x897EF720254BBEA3(iLocal_55, true);
	}
}

bool func_119(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
	Global_2621441 = 0;
	return func_120(sParam2, iParam3, 0);
}

int func_120(char* sParam0, int iParam1, bool bParam2)
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
					func_60();
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
		if (func_59(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_58();
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
				func_57();
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
				if (func_56())
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
			if (func_55())
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
			func_54();
			Global_15876 = bParam2;
		}
		Global_15868 = iParam1;
		StringCopy(&Global_15485, sParam0, 24);
		Global_14732 = 0;
		func_53();
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
		func_60();
	}
	return 0;
}

bool func_121()
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	vVar1 = { 6f, 6f, 6f };
	vVar2 = { -6f, -6f, -6f };
	if (!unk_0xBC2FC12AD0FBF72E(iLocal_56))
	{
		if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
		{
			if (unk_0xAC6A512C64D9A9C0(unk_0x95B959F18401C09A(), iLocal_56))
			{
				iLocal_67++;
				if (iLocal_67 > 60)
				{
					bVar0 = true;
				}
			}
			else
			{
				iLocal_67 = 0;
			}
		}
		if (unk_0x416C37C19CCE0077(unk_0x61B226C460A8FCC2(iLocal_56, 31086, 0f, 0f, 0f), 2f, 1))
		{
			bVar0 = true;
		}
		vVar1 = { vVar1 + unk_0x61B226C460A8FCC2(iLocal_56, 31086, 0f, 0f, 0f) };
		vVar2 = { vVar2 + unk_0x61B226C460A8FCC2(iLocal_56, 31086, 0f, 0f, 0f) };
		if ((unk_0x7EEE8B447AB73C25(vVar2, vVar1, joaat("weapon_smokegrenade"), 1) || unk_0x7EEE8B447AB73C25(vVar2, vVar1, joaat("weapon_grenade"), 1)) || unk_0x7EEE8B447AB73C25(vVar2, vVar1, joaat("weapon_stickybomb"), 1))
		{
			bVar0 = true;
		}
		if (unk_0x4141DE783FB62352(unk_0x61B226C460A8FCC2(iLocal_56, 31086, 0f, 0f, 0f), 12f))
		{
			bVar0 = true;
		}
		if (unk_0xCA12322D8FBBDBEE(-1, unk_0x61B226C460A8FCC2(iLocal_56, 31086, 0f, 0f, 0f), 50f))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (!func_123())
		{
		}
		else
		{
			bVar0 = false;
			if (unk_0xD76D6BCC14B95CE1(iLocal_56, 474215631) != 1)
			{
				if (func_122(iLocal_56))
				{
					unk_0xE0345C3A81F4471A(iLocal_56, 2000);
				}
			}
		}
	}
	return bVar0;
}

int func_122(int iParam0)
{
	if (func_109(iParam0))
	{
		if (!unk_0xBC2FC12AD0FBF72E(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_123()
{
	if (func_109(iLocal_55))
	{
		if (func_115(iLocal_56, iLocal_55, 1) < 22f)
		{
			return 1;
		}
	}
	return 0;
}

bool func_124()
{
	bool bVar0;
	
	bVar0 = false;
	if (unk_0x765F6FEEFF39224F(iLocal_56))
	{
		if (unk_0xBC2FC12AD0FBF72E(iLocal_56))
		{
			bVar0 = true;
		}
		else
		{
			if (unk_0x91BBD269506D61D2(iLocal_56, unk_0x33CD235DF1E6A94E(), 1) && unk_0x3AF2B3B68DD52355(iLocal_56))
			{
				bVar0 = true;
				unk_0x0D847D71D9E6142E(iLocal_56);
			}
			if (unk_0x416C37C19CCE0077(unk_0xFBB1F99A825CAB09(iLocal_56, true), 1f, 1))
			{
				bVar0 = true;
			}
			if (func_125(iLocal_56, 0, 1116471296, 1126825984, 0, 1, 0, 0))
			{
				bVar0 = true;
			}
		}
	}
	if (bVar0)
	{
		if (func_123())
		{
			bVar0 = false;
			if (unk_0xD76D6BCC14B95CE1(iLocal_56, 474215631) != 1)
			{
				if (func_122(iLocal_56))
				{
					unk_0xE0345C3A81F4471A(iLocal_56, 2000);
				}
			}
		}
		else if (!unk_0xBC2FC12AD0FBF72E(iLocal_55))
		{
			if (unk_0xD76D6BCC14B95CE1(iLocal_55, 1805844857) == 7)
			{
				unk_0x28F648743D7DE312(iLocal_55, 17, true);
				unk_0x28F648743D7DE312(iLocal_55, 13, false);
				unk_0xECCD4FDA45197F97(iLocal_55, unk_0x33CD235DF1E6A94E(), 300f, -1, 0, 0);
			}
		}
	}
	return bVar0;
}

int func_125(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	vector3 vVar0;
	
	if (func_109(unk_0x33CD235DF1E6A94E()) && func_109(iParam0))
	{
		if (unk_0x91BBD269506D61D2(iParam0, unk_0x33CD235DF1E6A94E(), 1))
		{
			return 1;
		}
		if (func_139(iParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return 1;
		}
		if (!unk_0x9ED464AAA493C8EF(unk_0x33CD235DF1E6A94E(), 6))
		{
			if (unk_0xA08B8AEC5B1A55D6(unk_0x33CD235DF1E6A94E()))
			{
				vVar0 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true) - unk_0xFBB1F99A825CAB09(iParam0, true) };
				if ((((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y)) + (vVar0.z * vVar0.z)) <= 5f)
				{
					return func_138(unk_0x33CD235DF1E6A94E(), iParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0;
		}
		else if (func_126(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_126(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_109(unk_0x33CD235DF1E6A94E()) && func_109(iParam0))
	{
		if (func_137(iParam0) || unk_0xC2ECB90E2DFA5802(unk_0x95B959F18401C09A(), iParam0))
		{
			if (unk_0x9ED464AAA493C8EF(unk_0x33CD235DF1E6A94E(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_127(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_127(int iParam0, float fParam1)
{
	return func_128(iParam0, unk_0x33CD235DF1E6A94E(), fParam1, 1, 250, 7);
}

bool func_128(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	vector3 vVar1;
	int iVar2;
	
	iVar2 = func_136(iParam0, iParam1);
	if (!func_109(iParam0) || !func_109(iParam1))
	{
		if (iVar2 != -1)
		{
			func_135(&(Local_49[iVar2 /*4*/]));
		}
		return 0;
	}
	if (!func_132(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar2 == -1)
	{
		iVar2 = func_131();
		if (iVar2 == -1)
		{
			return 0;
		}
		Local_49[iVar2 /*4*/].f_1 = iParam0;
		Local_49[iVar2 /*4*/].f_2 = iParam1;
	}
	vVar1 = { unk_0x61B226C460A8FCC2(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_129(&(Local_49[iVar2 /*4*/]), vVar1, iParam1, &(Local_49[iVar2 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0xE3903F59E2F22150() - Local_49[iVar2 /*4*/].f_3) < iParam4);
}

int func_129(var uParam0, vector3 vParam1, int iParam2, var uParam3, int iParam4, int iParam5)
{
	var uVar0;
	vector3 vVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = 0;
	if (!func_109(iParam2))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		vVar1 = { func_130(iParam2, iParam5) };
		*uParam0 = unk_0x36FB861F8CCF0EA4(vParam1, vVar1 + vVar1 - vParam1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam4, 7);
		return 0;
	}
	iVar4 = unk_0x819B6E76423AE494(*uParam0, &uVar0, &vVar1, &uVar2, &iVar3);
	if (iVar4 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar4 == 1)
	{
		return 0;
	}
	*uParam0 = 0;
	if (unk_0x068481DAF84B9654(iVar3))
	{
		func_109(iVar3);
		if (unk_0x22B02EC53152632C(iVar3) == iParam2)
		{
			if (bLocal_50)
			{
				unk_0x05968F4D606DF9DF(vParam1, unk_0xFBB1F99A825CAB09(iParam2, true), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam3 = unk_0xE3903F59E2F22150();
			return 1;
		}
		return 0;
	}
	if (unk_0x680558231C80291D(iVar3))
	{
		func_109(iVar3);
		if (unk_0xF0D230FB550CD6EB(iParam2, 0))
		{
			if (unk_0xEAE1362B9F5C7B18(iVar3) == unk_0xF2C96862595654B4(iParam2, 0))
			{
				if (bLocal_50)
				{
					unk_0x05968F4D606DF9DF(vParam1, unk_0xFBB1F99A825CAB09(iParam2, true), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam3 = unk_0xE3903F59E2F22150();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_130(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = unk_0x9EC3B269A34A2BEE(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0xFBB1F99A825CAB09(iParam0, true);
	}
	else if (iParam1 == 1)
	{
		return unk_0x61B226C460A8FCC2(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0x61B226C460A8FCC2(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0x61B226C460A8FCC2(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0x61B226C460A8FCC2(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0x61B226C460A8FCC2(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0x61B226C460A8FCC2(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0xFBB1F99A825CAB09(iParam0, true);
}

int func_131()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_49)
	{
		if ((Local_49[iVar0 /*4*/] == 0 && Local_49[iVar0 /*4*/].f_1 == 0) && Local_49[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_132(int iParam0, int iParam1, float fParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { func_134(unk_0xFBB1F99A825CAB09(iParam1, true) - unk_0xFBB1F99A825CAB09(iParam0, true)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		vVar1 = { unk_0xB969B7304D29679F(iParam0) };
	}
	else
	{
		vVar1 = { func_134(unk_0x61B226C460A8FCC2(iParam0, 31086, 0f, 5f, 0f) - unk_0x61B226C460A8FCC2(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_133(vVar1, vVar0);
	if (fVar2 <= cos((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_133(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_134(vector3 vParam0)
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

void func_135(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_136(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_49)
	{
		if (Local_49[iVar0 /*4*/].f_1 == iParam0 && Local_49[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_137(int iParam0)
{
	if (unk_0xAC6A512C64D9A9C0(unk_0x95B959F18401C09A(), iParam0) && unk_0x9ED464AAA493C8EF(unk_0x33CD235DF1E6A94E(), 6))
	{
		return 1;
	}
	return 0;
}

bool func_138(int iParam0, int iParam1, float fParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { unk_0xB969B7304D29679F(iParam0) };
	vVar1 = { unk_0xFBB1F99A825CAB09(iParam1, true) - unk_0xFBB1F99A825CAB09(iParam0, true) };
	return (((vVar0.x * vVar1.x) + (vVar0.y * vVar1.y)) / vdist(vVar1, 0f, 0f, 0f)) > cos(fParam2);
}

int func_139(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 8f;
	fVar1 = 15f;
	if (bParam1 == 0)
	{
		fVar0 = 1.86f;
		fVar1 = 1.86f;
	}
	if (bParam2)
	{
		fVar0 = 2f;
	}
	if (func_109(unk_0x33CD235DF1E6A94E()) && func_109(iParam0))
	{
		unk_0x96C4B46F194803A7(unk_0x33CD235DF1E6A94E(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_143(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_140(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (unk_0xB15E06E3E9C9AEA5(unk_0x33CD235DF1E6A94E()))
			{
				if (unk_0x5DACF31D3AC5ED8D(unk_0x33CD235DF1E6A94E()))
				{
					if (unk_0x416C37C19CCE0077(unk_0xFBB1F99A825CAB09(iParam0, true), fVar0, 1))
					{
						return 1;
					}
				}
			}
			else
			{
				if (bParam1)
				{
					fVar0 = 1.86f;
					fVar1 = 1.86f;
				}
				if (func_143(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_140(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_140(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { unk_0xFBB1F99A825CAB09(iParam0, true) };
	vVar1 = { vVar0 };
	vVar0.x = (vVar0.x - fParam1);
	vVar0.y = (vVar0.y - fParam1);
	vVar0.z = (vVar0.z - fParam1);
	vVar1.x = (vVar1.x + fParam1);
	vVar1.y = (vVar1.y + fParam1);
	vVar1.z = (vVar1.z + fParam1);
	if (bParam2)
	{
		if (((unk_0x30267FEB358AA2E4(unk_0xFBB1F99A825CAB09(iParam0, true), joaat("weapon_grenade"), fParam1, 1) || unk_0x30267FEB358AA2E4(unk_0xFBB1F99A825CAB09(iParam0, true), joaat("weapon_molotov"), fParam1, 1)) || unk_0x30267FEB358AA2E4(unk_0xFBB1F99A825CAB09(iParam0, true), joaat("weapon_smokegrenade"), fParam1, 1)) || unk_0x30267FEB358AA2E4(unk_0xFBB1F99A825CAB09(iParam0, true), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_141(iParam0, fParam1))
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
	}
	else
	{
		if (bParam3)
		{
			if (func_141(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x34DB0AC28A1FDE20(vVar0, vVar1, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_141(int iParam0, float fParam1)
{
	var uVar0;
	vector3 vVar1;
	
	if ((((unk_0x523F36AF20D6C821(iParam0, joaat("weapon_grenade"), fParam1, &vVar1, &uVar0, 0) || unk_0x523F36AF20D6C821(iParam0, joaat("weapon_smokegrenade"), fParam1, &vVar1, &uVar0, 0)) || unk_0x523F36AF20D6C821(iParam0, joaat("weapon_bzgas"), fParam1, &vVar1, &uVar0, 0)) || unk_0x523F36AF20D6C821(iParam0, joaat("weapon_stickybomb"), fParam1, &vVar1, &uVar0, 0)) || unk_0x523F36AF20D6C821(iParam0, joaat("weapon_molotov"), fParam1, &vVar1, &uVar0, 0))
	{
		if (func_142(iParam0, vVar1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_142(int iParam0, vector3 vParam1, float fParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { func_134(vParam1 - unk_0xFBB1F99A825CAB09(iParam0, true)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		vVar1 = { unk_0xB969B7304D29679F(iParam0) };
	}
	else
	{
		vVar1 = { func_134(unk_0x61B226C460A8FCC2(iParam0, 31086, 0f, 5f, 0f) - unk_0x61B226C460A8FCC2(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_133(vVar1, vVar0);
	if (fVar2 <= cos((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

int func_143(int iParam0, bool bParam1, float fParam2, float fParam3)
{
	if (bParam1)
	{
		if (unk_0x5DACF31D3AC5ED8D(unk_0x33CD235DF1E6A94E()))
		{
			if (unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0x416C37C19CCE0077(unk_0xFBB1F99A825CAB09(iParam0, true), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

void func_144()
{
	if (bLocal_90 || unk_0xD62C4419A41F106A(iLocal_55, 0))
	{
		func_173(&uLocal_152, 0, 0);
	}
	else
	{
		func_145(&uLocal_152, iLocal_55, "ATM_CHASEHINT", 0, 1, 1, 1);
	}
}

void func_145(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_146(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_146(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	func_147(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_147(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	if (!unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
	{
		func_173(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_148(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_148(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
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
	if (func_95(iVar0))
	{
		func_172();
	}
	if (func_171(iParam1) && unk_0x042B0E494045A7DF(iParam1))
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
			if (func_166(uParam0, bParam5, bParam7, 0))
			{
				func_163(uParam0, iParam1, vParam2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_152(iVar0))
				{
					if ((unk_0x6D2E2622CA149402(uParam0->f_3) && !unk_0x6D2E2622CA149402(iVar0)) && unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
					{
						if ((iVar1 && !unk_0xFAC8F20FBC764F4D()) && uParam6)
						{
							if (!func_95(iVar0))
							{
								func_100(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0xCE3CFF625BEBAA04("CMN_HINT", iVar0))
								{
									func_151(1);
								}
							}
						}
					}
				}
			}
			else if (func_152(iVar0))
			{
				if (unk_0x6D2E2622CA149402(uParam0->f_3) && !unk_0x6D2E2622CA149402(iVar0))
				{
					if (((unk_0x3F219400E5FE4B69(iParam1) && iVar1) && !unk_0xFAC8F20FBC764F4D()) && uParam6)
					{
						if (!func_95(iVar0))
						{
							func_100(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0xCE3CFF625BEBAA04("CMN_HINT", iVar0))
							{
								func_151(1);
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
				if (func_95(sParam3))
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
						func_173(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xBEAC9DF5323BB074(unk_0x33CD235DF1E6A94E()))
				{
					if (unk_0xCB75C331DD5DDCCC(6) == 3 || unk_0xCB75C331DD5DDCCC(6) == 4)
					{
						func_173(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xA5C8D37514ACC1FA(unk_0x33CD235DF1E6A94E()))
				{
					if (unk_0xCB75C331DD5DDCCC(4) == 3 || unk_0xCB75C331DD5DDCCC(4) == 4)
					{
						func_173(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xFF29C0328E1D9F8D(unk_0x33CD235DF1E6A94E()))
				{
					if (unk_0xCB75C331DD5DDCCC(5) == 3 || unk_0xCB75C331DD5DDCCC(5) == 4)
					{
						func_173(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xA2F0EA9AB6142D97(unk_0x33CD235DF1E6A94E()))
				{
					if (unk_0xCB75C331DD5DDCCC(2) == 3 || unk_0xCB75C331DD5DDCCC(2) == 4)
					{
						func_173(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8ACF6D19519697BD() == 3 || unk_0x8ACF6D19519697BD() == 4)
				{
					func_173(uParam0, iVar0, 1);
				}
			}
			if (!func_166(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_150(uParam0))
				{
					func_149(uParam0);
				}
			}
		}
	}
	else
	{
		func_173(uParam0, iVar0, 0);
	}
}

void func_149(var uParam0)
{
	if (func_171(unk_0x33CD235DF1E6A94E()))
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

int func_150(var uParam0)
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

int func_151(bool bParam0)
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

int func_152(char* sParam0)
{
	if (!func_153(1, 1, 0))
	{
		if ((!unk_0x786AF4A44E1B5B4B(sParam0) && func_95(sParam0)) || func_95("CMN_HINT"))
		{
			unk_0xEDF90B96BED57BCE(1);
		}
		return 0;
	}
	switch (Global_36425)
	{
		case 0:
		case 3:
			if (func_151(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_151(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_151(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_153(bool bParam0, bool bParam1, bool bParam2)
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
	if (func_76(0))
	{
		return 0;
	}
	if (func_162())
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
	if ((func_161() || func_160(Global_4456448.f_161209)) || func_159())
	{
		if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
		{
			iVar0 = unk_0xF2C96862595654B4(unk_0x33CD235DF1E6A94E(), 0);
			iVar1 = func_158(unk_0x33CD235DF1E6A94E(), 0);
			if (((unk_0x3FCD3FCFAFC3878C(iVar0, iVar1) || (unk_0x541D5C57194E73C4(iVar0) == 562680400 && iVar1 != -1)) || (unk_0x541D5C57194E73C4(iVar0) == 1181327175 && iVar1 != -1)) || (((unk_0x541D5C57194E73C4(iVar0) == -1693015116 && iVar1 == 0) && func_157(iVar0, 10)) && unk_0xEECA910C75BFF02B(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1680665)
	{
		return 0;
	}
	if (func_154(unk_0x95B959F18401C09A()))
	{
		return 0;
	}
	return 1;
}

int func_154(int iParam0)
{
	if (iParam0 != func_156())
	{
		if (func_155(iParam0, 1, 1))
		{
			return Global_2424047[iParam0 /*416*/].f_309.f_5 != -1;
		}
		else if ((Global_1312867 && iParam0 == unk_0x95B959F18401C09A()) && func_155(iParam0, 1, 0))
		{
			return Global_2424047[iParam0 /*416*/].f_309.f_5 != -1;
		}
	}
	return 0;
}

int func_155(int iParam0, bool bParam1, bool bParam2)
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

int func_156()
{
	return -1;
}

int func_157(int iParam0, int iParam1)
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

int func_158(int iParam0, int iParam1)
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

var func_159()
{
	return Global_2448756.f_16;
}

bool func_160(int iParam0)
{
	return iParam0 == 51;
}

var func_161()
{
	return Global_2448756.f_15;
}

bool func_162()
{
	return unk_0xE3903F59E2F22150() <= Global_17411.f_5878 + 100;
}

void func_163(var uParam0, int iParam1, vector3 vParam2, int iParam3)
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
		func_173(uParam0, 0, 0);
	}
	if (func_63(vParam2, 0f, 0f, 0f, 0))
	{
		if (unk_0x068481DAF84B9654(iParam1))
		{
			iVar0 = unk_0x22B02EC53152632C(iParam1);
			if (!unk_0xF0D230FB550CD6EB(iVar0, 0))
			{
				if (unk_0xE09156665EC2D83B(iVar0))
				{
					if (!func_164())
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

bool func_164()
{
	return func_165(unk_0x95B959F18401C09A());
}

int func_165(int iParam0)
{
	if (unk_0x541D5C57194E73C4(unk_0x378BD4B3881338C2(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_166(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
					if (func_170(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xE3903F59E2F22150();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_169(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xE3903F59E2F22150();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_169(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xE3903F59E2F22150();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_170(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xE3903F59E2F22150();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_150(uParam0))
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
						if (!func_170(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0xE3903F59E2F22150();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_169(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xE3903F59E2F22150();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_169(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xE3903F59E2F22150();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_170(bParam1, bParam2, bParam3))
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
					if (!func_170(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_169(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_169(bParam1, bParam2, bParam3) || unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1))
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
				else if (!func_170(bParam1, bParam2, bParam3))
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
						if (func_168(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_167(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1) || func_167(bParam1, bParam2, bParam3))
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
					else if (func_168(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_150(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_153(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_172();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_167(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_153(bParam0, bParam1, bParam2))
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

int func_168(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_153(bParam0, bParam1, bParam2))
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

int func_169(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_153(bParam0, bParam1, bParam2))
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

int func_170(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_153(bParam0, bParam1, bParam2))
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

int func_171(int iParam0)
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

void func_172()
{
	unk_0x8950ED5730F62EE8(&Global_2424, 4);
}

void func_173(var uParam0, int iParam1, int iParam2)
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
		if (func_95(uParam0->f_3))
		{
			unk_0xEDF90B96BED57BCE(1);
		}
	}
	if (!unk_0x6D2E2622CA149402(sVar0))
	{
		if (func_95(sVar0))
		{
			unk_0xEDF90B96BED57BCE(1);
		}
	}
}

float func_174(int iParam0, vector3 vParam1, bool bParam2)
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

int func_175(int iParam0, int iParam1)
{
	if (func_122(iParam0))
	{
		if (unk_0xD76D6BCC14B95CE1(iParam0, iParam1) == 1 || unk_0xD76D6BCC14B95CE1(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_176(char* sParam0)
{
	func_177(sParam0);
}

void func_177(char* sParam0)
{
	if (unk_0xCE3CFF625BEBAA04(sParam0, sParam0))
	{
	}
}

void func_178(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_179()
{
	unk_0x99414FB2D30425C1(&iLocal_61);
	unk_0x11C4AF4137F2A4B5(0, iLocal_55, 750);
	unk_0x108754262311D34F(0, cLocal_148, sLocal_149, 8f, -8f, -1, 0, 0, 0, 0, 0);
	unk_0x108754262311D34F(0, cLocal_148, sLocal_150, 8f, -2f, -1, 0, 0, 0, 0, 0);
	unk_0x108754262311D34F(0, cLocal_148, sLocal_151, 8f, -2f, -1, 0, 0, 0, 0, 0);
	unk_0x108754262311D34F(0, cLocal_148, sLocal_149, 8f, -2f, -1, 0, 0, 0, 0, 0);
	unk_0x108754262311D34F(0, cLocal_148, sLocal_150, 8f, -2f, -1, 0, 0, 0, 0, 0);
	unk_0x108754262311D34F(0, cLocal_148, sLocal_151, 8f, -2f, -1, 1, 0, 0, 0, 0);
	unk_0xC734F59A13D39AEF(iLocal_61);
	unk_0x13A2D602CD10CBAC(iLocal_56, iLocal_61);
	unk_0xA7A57E7757ED035E(&iLocal_61);
	if (unk_0xE38E3CF1625A4145(iLocal_58))
	{
		unk_0x1ABDB383C83A336A(&iLocal_58);
	}
	if (!unk_0xE38E3CF1625A4145(iLocal_59))
	{
		iLocal_59 = func_102(iLocal_55, 1, 0);
	}
	unk_0x983D75D9630FD905(iLocal_59, true);
	unk_0x379324D4CAF6C2D1(0);
	unk_0x4B06B5746CBEC99F(0.1f);
	func_118();
	if ((vdist(unk_0xFBB1F99A825CAB09(iLocal_56, false), -2956.26f, 487.97f, 15.46f) > 5f && unk_0x16E00F066AFFEA0D(vLocal_53, -203.72f, -861.8f, 29.27f, true) > 5f) && unk_0x16E00F066AFFEA0D(vLocal_53, 288.46f, -1256.71f, 28.44f, true) > 5f)
	{
		if (func_115(unk_0x33CD235DF1E6A94E(), iLocal_56, 1) < 50f)
		{
			func_119(&Local_107, cLocal_123, sLocal_115, 3, 0, 0, 0);
			iLocal_85 = 1;
		}
	}
	iLocal_66 = unk_0xE3903F59E2F22150();
	settimera(0);
	if (func_109(unk_0x33CD235DF1E6A94E()))
	{
		unk_0x9FD099B0593CD91D(unk_0x33CD235DF1E6A94E(), true);
	}
	func_180(1);
}

int func_180(int iParam0)
{
	if (func_182())
	{
		Global_106555 = 1;
		Global_106552 = unk_0xE3903F59E2F22150();
		if (func_181(Global_106554))
		{
			func_99(0);
		}
		unk_0xF72C40745AA793F1(1, "RE_TITLE");
		if (iParam0 && func_181(Global_106554))
		{
			unk_0x0B1FD891620F7745();
		}
		return 1;
	}
	return 0;
}

int func_181(int iParam0)
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

int func_182()
{
	switch (func_183(&Global_25824, 0, 5, 0, unk_0x8C40DC84EDF05997()))
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

int func_183(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_187(0))
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
		if (!func_185(iParam2))
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
			func_184(uParam0, iParam4);
		}
	}
	return 2;
}

void func_184(var uParam0, int iParam1)
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

bool func_185(int iParam0)
{
	return func_186(iParam0, Global_36425);
}

int func_186(int iParam0, int iParam1)
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

int func_187(int iParam0)
{
	if (Global_36425 == 15)
	{
		return 0;
	}
	if (func_185(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_188()
{
	if (iLocal_134 == -1)
	{
		if (unk_0xF9FB5255747DBE88())
		{
			if (unk_0x3F219400E5FE4B69(iLocal_55))
			{
				iLocal_134 = unk_0xE3903F59E2F22150();
			}
		}
	}
	else if (unk_0xE3903F59E2F22150() > iLocal_134 + 1000)
	{
		return 1;
	}
	if (unk_0xCA12322D8FBBDBEE(-1, vLocal_53, 50f))
	{
		return 1;
	}
	if ((unk_0xE3903F59E2F22150() - iLocal_135) > 30000)
	{
		if (!unk_0xC30D5C4DCAC8020A(iLocal_55))
		{
			return 1;
		}
		else
		{
			func_271();
		}
	}
	if (unk_0xE38E3CF1625A4145(iLocal_59))
	{
		if ((unk_0x16E00F066AFFEA0D(vLocal_53, -3044.11f, 594.34f, 6.73f, true) > 5f && unk_0x16E00F066AFFEA0D(vLocal_53, -712.9f, -819.32f, 22.73f, true) > 5f) && unk_0x16E00F066AFFEA0D(vLocal_53, 24.13f, -946.84f, 28.36f, true) > 5f)
		{
			if (unk_0x73E7A21FD53144AB(unk_0xFBB1F99A825CAB09(iLocal_55, false), 2.5f))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_189()
{
	if (vdist(vLocal_53, -3044.06f, 594.93f, 6.74f) < 5f)
	{
		if (!unk_0xE38E3CF1625A4145(iLocal_59))
		{
			if (func_109(iLocal_56) && func_109(unk_0x33CD235DF1E6A94E()))
			{
				if (unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iLocal_56, 60f, 90f, 12f, 0, 1, 0))
				{
					iLocal_59 = func_102(iLocal_55, 1, 0);
					unk_0x983D75D9630FD905(iLocal_59, false);
				}
			}
		}
		else
		{
			func_116(iLocal_59, &uLocal_70);
		}
	}
	else if (!unk_0xE38E3CF1625A4145(iLocal_59))
	{
		if (func_109(iLocal_56) && func_109(unk_0x33CD235DF1E6A94E()))
		{
			if (unk_0x335C0645074963FE(unk_0x33CD235DF1E6A94E(), iLocal_56, 90f, 90f, 8f, 0, 1, 0))
			{
				iLocal_59 = func_102(iLocal_55, 1, 0);
				unk_0x983D75D9630FD905(iLocal_59, false);
			}
		}
	}
	else
	{
		func_116(iLocal_59, &uLocal_70);
	}
	if (iLocal_135 == -1)
	{
		iLocal_135 = unk_0xE3903F59E2F22150();
	}
}

int func_190()
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	
	vVar0 = { vLocal_53 };
	vVar1 = { 0f, 0f, fLocal_54 };
	vVar2 = { 10f, 10f, 5f };
	if (iLocal_65 == 1)
	{
		func_214();
		if (vdist(vLocal_53, -203.758f, -861.738f, 29.2684f) < 5f)
		{
			vLocal_74 = { -197.9643f, -868.5554f, 28.2738f };
			fLocal_76 = 196f;
			vLocal_75 = { -187.5415f, -858.1728f, 28.1863f };
			fLocal_77 = 160.391f;
			vLocal_136 = { -259.0351f, -865.7119f, 28f };
			vLocal_137 = { -130.3981f, -908.8096f, 40f };
			unk_0xE27A063F1211C3F5("ATM_1");
			unk_0xB815670C37E03CDE(iLocal_106);
			while (!unk_0x5D98D654CDC2165A(iLocal_106))
			{
				if (func_201())
				{
					func_271();
				}
				wait(0);
			}
			unk_0x8C4EA5F6857553AE(iLocal_106, true);
		}
		else
		{
			vLocal_74 = { -2968.5f, 494.48f, 14.82f };
			fLocal_76 = 55.24f;
			vLocal_75 = { -2973.03f, 496.38f, 14.96f };
			fLocal_77 = 3.18f;
			vLocal_136 = { -259.0351f, -865.7119f, 28f };
			vLocal_137 = { -130.3981f, -908.8096f, 40f };
			unk_0xB815670C37E03CDE(iLocal_106);
			while (!unk_0x5D98D654CDC2165A(iLocal_106))
			{
				if (func_201())
				{
					func_271();
				}
				wait(0);
			}
			unk_0x8C4EA5F6857553AE(iLocal_106, true);
		}
	}
	else if (iLocal_65 == 2)
	{
		func_214();
		vLocal_74 = { 283.31f, -1249.51f, 28.95f };
		fLocal_76 = 78.25f;
		vLocal_75 = { 288.9906f, -1248.443f, 28.2847f };
		fLocal_77 = 75.9756f;
		vLocal_136 = { 266.3643f, -1313.829f, 28.59103f };
		vLocal_137 = { 265.1489f, -1215.932f, 36.20192f };
		unk_0xB815670C37E03CDE(iLocal_106);
		while (!unk_0x5D98D654CDC2165A(iLocal_106))
		{
			if (func_201())
			{
				func_271();
			}
			wait(0);
		}
		unk_0x8C4EA5F6857553AE(iLocal_106, true);
	}
	else if (iLocal_65 == 3)
	{
		func_214();
		vLocal_75 = { -1587.15f, -539.9152f, 34.3644f };
		fLocal_77 = 327f;
		vLocal_136 = { -1596.203f, -474.8844f, 32f };
		vLocal_137 = { -1595.572f, -565.8368f, 48f };
	}
	else if (iLocal_65 == 4)
	{
		func_214();
		vLocal_74 = { 181.2355f, 6632.627f, 30.5732f };
		fLocal_76 = 182f;
		vLocal_75 = { 200.0727f, 6630.587f, 30.517f };
		fLocal_77 = 165f;
		vLocal_136 = { 178.1817f, 6660.375f, 31f };
		vLocal_137 = { 179.1249f, 6530.043f, 38f };
		unk_0x699FD6EF08D81548(0);
		unk_0x5856B9BF2B4E98C4(179.5463f, 6625.689f, 30.2739f, 184.245f, 6635.661f, 31.5188f, false, 1);
		unk_0xB815670C37E03CDE(iLocal_106);
		while (!unk_0x5D98D654CDC2165A(iLocal_106))
		{
			if (func_201())
			{
				func_271();
			}
			wait(0);
		}
		unk_0x8C4EA5F6857553AE(iLocal_106, true);
	}
	else if (iLocal_65 == 5)
	{
		func_214();
	}
	if (func_192())
	{
		unk_0xCE04CE961AF41AB9(vLocal_53, vVar2.x, 0, 0, 0, false);
		iLocal_63 = unk_0x0335D8135051EA56(vLocal_53 - vVar2, vLocal_53 + vVar2, 0, 1, 1, 1);
		iLocal_56 = unk_0x9BA5CF280376EEA4(5, iLocal_105, vLocal_53, fLocal_54, 1, true);
		unk_0x28F648743D7DE312(iLocal_56, 13, false);
		unk_0x28F648743D7DE312(iLocal_56, 11, true);
		unk_0x28F648743D7DE312(iLocal_56, 17, false);
		unk_0x93AA93DA1B137032(iLocal_56, 6, 1, 0, 0);
		unk_0x43D47AD82DA3C6EC(iLocal_56, true, 1);
		unk_0xAD3D24C8070DA056(iLocal_56, true);
		unk_0xF0BE7CB40DE62A2F(iLocal_56, false);
		unk_0x5464B9731013E08C(iLocal_56, sLocal_147);
		unk_0xF8E07C228A90E953(iLocal_56, 0);
		if (iLocal_71 == 1)
		{
			unk_0x93AA93DA1B137032(iLocal_56, 0, 0, 0, 0);
			unk_0x93AA93DA1B137032(iLocal_56, 2, 0, 1, 0);
			unk_0x93AA93DA1B137032(iLocal_56, 3, 0, 1, 0);
			unk_0x93AA93DA1B137032(iLocal_56, 4, 0, 2, 0);
		}
		iLocal_55 = unk_0x9BA5CF280376EEA4(22, iLocal_104, vLocal_53, 0f, 1, true);
		unk_0x28F648743D7DE312(iLocal_55, 17, true);
		unk_0x28F648743D7DE312(iLocal_55, 13, false);
		unk_0x28F648743D7DE312(iLocal_55, 6, true);
		unk_0x33F6BE48E356DA27(iLocal_55, 128, true);
		unk_0x43D47AD82DA3C6EC(iLocal_55, true, 1);
		unk_0x4A852F02088ECC9D(iLocal_55, true);
		unk_0x5FEE418CE11E6DDE(iLocal_55, 42, true);
		unk_0x5FEE418CE11E6DDE(iLocal_55, 281, true);
		unk_0x5FEE418CE11E6DDE(iLocal_55, 172, false);
		unk_0x5FEE418CE11E6DDE(iLocal_55, 137, true);
		unk_0x86DAF422C98B71D3(iLocal_55);
		unk_0x5464B9731013E08C(iLocal_55, sLocal_146);
		unk_0x9E280E42C0773A3A(iLocal_55, 1);
		unk_0xC7C47D4054903839(iLocal_55, unk_0xF666CBF66A90975A(cLocal_92, "b_atm_mugging", vVar0, vVar1, 0, 2), 0, 0, 1);
		vVar3 = { unk_0xFC7404297ED3CF49(cLocal_92, "b_atm_mugging", vVar0, vVar1, 0f, 2) };
		unk_0x3C990C409B3845DE(iLocal_55, vVar3.z);
		if (func_109(iLocal_56))
		{
			if (unk_0x28C4F998CC33B00F(iLocal_56))
			{
				unk_0xC7C47D4054903839(iLocal_56, unk_0xF666CBF66A90975A("random@atmrobberygen@male", "idle_a", vVar0, vVar1, 0, 2), 0, 0, 1);
				vVar3 = { unk_0xFC7404297ED3CF49("random@atmrobberygen@male", "idle_a", vVar0, vVar1, 0f, 2) };
			}
			else
			{
				unk_0xC7C47D4054903839(iLocal_56, unk_0xF666CBF66A90975A("random@atmrobberygen@female", "idle_a", vVar0, vVar1, 0, 2), 0, 0, 1);
				vVar3 = { unk_0xFC7404297ED3CF49("random@atmrobberygen@female", "idle_a", vVar0, vVar1, 0f, 2) };
			}
			unk_0x3C990C409B3845DE(iLocal_56, vVar3.z);
		}
		unk_0x108754262311D34F(iLocal_55, cLocal_92, "b_atm_mugging", 1000f, -4f, -1, 1, 0, 0, 0, 0);
		if (unk_0x28C4F998CC33B00F(iLocal_56))
		{
			unk_0x108754262311D34F(iLocal_56, "random@atmrobberygen@male", "idle_a", 1000f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0xFF2DEA68E2D3602E("random@atmrobberygen@female");
		}
		else
		{
			unk_0x108754262311D34F(iLocal_56, "random@atmrobberygen@female", "idle_a", 1000f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0xFF2DEA68E2D3602E("random@atmrobberygen@male");
		}
		unk_0x083F9B3B112E951F(iLocal_55, 1);
		unk_0x4A852F02088ECC9D(iLocal_56, true);
		unk_0x697EBA5CF1A6AB57(iLocal_55, joaat("weapon_pistol"), -1, true, true);
		unk_0x2EFACEB7CC6076D0(iLocal_55, joaat("weapon_pistol"), 34, 0);
		unk_0x274C6068B660FFB4(iLocal_55, joaat("weapon_pistol"), false);
		unk_0x428C55A965F78103(iLocal_55, 1, 0);
		switch (func_38())
		{
			case 0:
				sLocal_112 = "MICHAEL";
				break;
			
			case 1:
				sLocal_112 = "FRANKLIN";
				break;
			
			case 2:
				sLocal_112 = "TREVOR";
				break;
		}
		func_191(&Local_107, 0, unk_0x33CD235DF1E6A94E(), sLocal_112, 0, 1);
		func_191(&Local_107, 1, iLocal_56, sLocal_114, 0, 1);
		func_191(&Local_107, 2, iLocal_55, "ATMRobber", 0, 1);
		if (iLocal_65 == 1 || iLocal_65 == 2)
		{
			iLocal_73 = unk_0xC651C43AB13A15E5(iLocal_106, vLocal_74, fLocal_76, true, true, false);
			unk_0x9FABD0AB045A5D6E(iLocal_73, true, true, 0);
			unk_0x320D9994786BCA17(iLocal_73);
			unk_0x8A065911C6F917C0(iLocal_73, 1);
			if (iLocal_65 == 2)
			{
				unk_0x4A3BD9D189356B69(iLocal_73, 0, 0, 0);
			}
			else if (iLocal_65 == 1)
			{
				unk_0x2B4A2E9ED65D5C93(iLocal_55, 0);
				unk_0x66CDA3DCBCEDF782(iLocal_55, 3);
			}
			else if (iLocal_65 == 4)
			{
				unk_0xD303E20CB0AE4AD0(iLocal_73, 3);
			}
		}
		unk_0x5FEE418CE11E6DDE(unk_0x33CD235DF1E6A94E(), 32, false);
		return 1;
	}
	else if (func_201())
	{
		func_271();
	}
	return 0;
}

void func_191(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_192()
{
	unk_0x0483D0035D6E46FD("random@atmrobberygen@male");
	unk_0x0483D0035D6E46FD("random@atmrobberygen@female");
	if (!iLocal_81)
	{
		func_200(&Local_164, 3);
		Local_164.f_146 = unk_0xE77FA521699F639C();
		func_199(&Local_164, iLocal_104);
		func_199(&Local_164, iLocal_105);
		func_199(&Local_164, iLocal_101);
		func_199(&Local_164, iLocal_102);
		func_197(&Local_164, cLocal_92);
		func_197(&Local_164, cLocal_148);
		func_197(&Local_164, cLocal_142);
		func_197(&Local_164, cLocal_93);
		iLocal_81 = 1;
	}
	if ((unk_0xE9CCF312047EBEE0("random@atmrobberygen@male") && unk_0xE9CCF312047EBEE0("random@atmrobberygen@female")) && func_193(&Local_164))
	{
		return 1;
	}
	return 0;
}

int func_193(var uParam0)
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
			if (!func_194(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_145 = 0;
	return 1;
}

bool func_194(var uParam0)
{
	return func_195(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_195(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0x0E4018692D92041D(iParam0, 30))
	{
		if (unk_0x0E4018692D92041D(iParam0, 29))
		{
			switch (func_196(iParam0))
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

int func_196(int iParam0)
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

void func_197(var uParam0, char* sParam1)
{
	func_198(uParam0, 1, -1, sParam1, 0);
}

void func_198(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
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

void func_199(var uParam0, int iParam1)
{
	func_198(uParam0, 0, iParam1, "NULL", 0);
}

void func_200(var uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		uParam0->f_147 = iParam1;
	}
}

int func_201()
{
	if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()) && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		if (vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true), vLocal_51) < (75f * 75f))
		{
			return 1;
		}
		if (vmag2(unk_0x43D8A2CCB19FE8A8(unk_0x33CD235DF1E6A94E())) > 1369f && !func_213())
		{
			return 0;
		}
	}
	if (func_209())
	{
		return 1;
	}
	if (func_202(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_202(float fParam0, bool bParam1)
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
		if (func_40(func_38()))
		{
			iVar5 = func_208();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0x0E4018692D92041D(Global_106565.f_18568[iVar1 /*6*/], 2) && !unk_0x0E4018692D92041D(Global_106565.f_18568[iVar1 /*6*/], 3))
				{
					func_203(iVar1, &Var0);
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

void func_203(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_204(uParam1, "Abigail1", func_206(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_205(iParam0), 1, 0);
			break;
		
		case 1:
			func_204(uParam1, "Abigail2", func_206(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_205(iParam0), 1, 0);
			break;
		
		case 2:
			func_204(uParam1, "Barry1", func_206(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_205(iParam0), 1, 0);
			break;
		
		case 3:
			func_204(uParam1, "Barry2", func_206(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_205(iParam0), 1, 1);
			break;
		
		case 4:
			func_204(uParam1, "Barry3", func_206(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 5:
			func_204(uParam1, "Barry3A", func_206(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 6:
			func_204(uParam1, "Barry3C", func_206(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 7:
			func_204(uParam1, "Barry4", func_206(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_205(iParam0), 0, 0);
			break;
		
		case 8:
			func_204(uParam1, "Dreyfuss1", func_206(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 9:
			func_204(uParam1, "Epsilon1", func_206(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 10:
			func_204(uParam1, "Epsilon2", func_206(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_205(iParam0), 1, 0);
			break;
		
		case 11:
			func_204(uParam1, "Epsilon3", func_206(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 12:
			func_204(uParam1, "Epsilon4", func_206(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 13:
			func_204(uParam1, "Epsilon5", func_206(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_205(iParam0), 1, 0);
			break;
		
		case 14:
			func_204(uParam1, "Epsilon6", func_206(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 15:
			func_204(uParam1, "Epsilon7", func_206(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 16:
			func_204(uParam1, "Epsilon8", func_206(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_205(iParam0), 1, 0);
			break;
		
		case 17:
			func_204(uParam1, "Extreme1", func_206(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 18:
			func_204(uParam1, "Extreme2", func_206(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 19:
			func_204(uParam1, "Extreme3", func_206(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 20:
			func_204(uParam1, "Extreme4", func_206(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 21:
			func_204(uParam1, "Fanatic1", func_206(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_205(iParam0), 1, 0);
			break;
		
		case 22:
			func_204(uParam1, "Fanatic2", func_206(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_205(iParam0), 1, 0);
			break;
		
		case 23:
			func_204(uParam1, "Fanatic3", func_206(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_205(iParam0), 0, 1);
			break;
		
		case 24:
			func_204(uParam1, "Hao1", func_206(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_205(iParam0), 0, 1);
			break;
		
		case 25:
			func_204(uParam1, "Hunting1", func_206(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 26:
			func_204(uParam1, "Hunting2", func_206(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 27:
			func_204(uParam1, "Josh1", func_206(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_205(iParam0), 1, 0);
			break;
		
		case 28:
			func_204(uParam1, "Josh2", func_206(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_205(iParam0), 1, 1);
			break;
		
		case 29:
			func_204(uParam1, "Josh3", func_206(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_205(iParam0), 1, 1);
			break;
		
		case 30:
			func_204(uParam1, "Josh4", func_206(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_205(iParam0), 1, 0);
			break;
		
		case 31:
			func_204(uParam1, "Maude1", func_206(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 32:
			func_204(uParam1, "Minute1", func_206(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 33:
			func_204(uParam1, "Minute2", func_206(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 34:
			func_204(uParam1, "Minute3", func_206(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 35:
			func_204(uParam1, "MrsPhilips1", func_206(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 36:
			func_204(uParam1, "MrsPhilips2", func_206(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 37:
			func_204(uParam1, "Nigel1", func_206(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_205(iParam0), 1, 0);
			break;
		
		case 38:
			func_204(uParam1, "Nigel1A", func_206(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_205(iParam0), 1, 1);
			break;
		
		case 39:
			func_204(uParam1, "Nigel1B", func_206(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_205(iParam0), 1, 1);
			break;
		
		case 40:
			func_204(uParam1, "Nigel1C", func_206(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_205(iParam0), 1, 1);
			break;
		
		case 41:
			func_204(uParam1, "Nigel1D", func_206(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_205(iParam0), 1, 1);
			break;
		
		case 42:
			func_204(uParam1, "Nigel2", func_206(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_205(iParam0), 1, 1);
			break;
		
		case 43:
			func_204(uParam1, "Nigel3", func_206(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_205(iParam0), 1, 1);
			break;
		
		case 44:
			func_204(uParam1, "Omega1", func_206(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 45:
			func_204(uParam1, "Omega2", func_206(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 46:
			func_204(uParam1, "Paparazzo1", func_206(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 47:
			func_204(uParam1, "Paparazzo2", func_206(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 48:
			func_204(uParam1, "Paparazzo3", func_206(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 49:
			func_204(uParam1, "Paparazzo3A", func_206(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 50:
			func_204(uParam1, "Paparazzo3B", func_206(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 51:
			func_204(uParam1, "Paparazzo4", func_206(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 52:
			func_204(uParam1, "Rampage1", func_206(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 54:
			func_204(uParam1, "Rampage3", func_206(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_205(iParam0), 1, 0);
			break;
		
		case 55:
			func_204(uParam1, "Rampage4", func_206(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_205(iParam0), 1, 0);
			break;
		
		case 56:
			func_204(uParam1, "Rampage5", func_206(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_205(iParam0), 0, 0);
			break;
		
		case 53:
			func_204(uParam1, "Rampage2", func_206(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_205(iParam0), 1, 0);
			break;
		
		case 57:
			func_204(uParam1, "TheLastOne", func_206(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 58:
			func_204(uParam1, "Tonya1", func_206(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 59:
			func_204(uParam1, "Tonya2", func_206(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 60:
			func_204(uParam1, "Tonya3", func_206(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 61:
			func_204(uParam1, "Tonya4", func_206(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		case 62:
			func_204(uParam1, "Tonya5", func_206(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_205(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_204(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_205(int iParam0)
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

struct<2> func_206(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_207(iParam0) };
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

struct<2> func_207(int iParam0)
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

int func_208()
{
	func_39();
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

int func_209()
{
	if (func_212() && !func_213())
	{
		return 1;
	}
	if (func_211() && func_210())
	{
		return 1;
	}
	return 0;
}

bool func_210()
{
	return Global_106283 > 0;
}

int func_211()
{
	if (Global_90634 != -1)
	{
		return 1;
	}
	return 0;
}

int func_212()
{
	if (Global_90634 != -1)
	{
		return unk_0x0E4018692D92041D(Global_84500[Global_90634 /*34*/].f_15, 20);
	}
	return 0;
}

int func_213()
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

void func_214()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (iLocal_71 == 0 && iLocal_65 == 5)
	{
		iLocal_71 = unk_0x9EC3B269A34A2BEE(1, 5);
	}
	else if (iLocal_65 != 5)
	{
		iLocal_71 = iLocal_65;
	}
	switch (iLocal_71)
	{
		case 1:
			iLocal_104 = joaat("g_m_y_armgoon_02");
			sLocal_146 = "G_M_Y_ArmGoon_02_White_Armenian_MINI_01";
			iLocal_105 = joaat("a_f_m_tourist_01");
			sLocal_147 = "A_F_M_BEVHILLS_02_WHITE_FULL_02";
			iLocal_106 = joaat("sanchez");
			sLocal_115 = "REAR1_ATTR";
			sLocal_116 = "REAR1_HELP";
			sLocal_117 = "REAR1_PROMPT";
			sLocal_118 = "REAR1_CHASE";
			sLocal_119 = "REAR1_FLEE";
			cLocal_120 = "REAR1_THX";
			sLocal_121 = "REAR1_DAMN";
			switch (func_38())
			{
				case 0:
					sLocal_124 = "REAR1_REM";
					sLocal_122 = "REAR1_FKM";
					sLocal_113 = "REAR1_WM";
					sLocal_125 = "REAR1_GYM";
					break;
				
				case 1:
					sLocal_124 = "REAR1_REF";
					sLocal_122 = "REAR1_FKF";
					sLocal_113 = "REAR1_WF";
					sLocal_125 = "REAR1_GYF";
					break;
				
				case 2:
					sLocal_124 = "REAR1_RET";
					sLocal_122 = "REAR1_FKT";
					sLocal_113 = "REAR1_WT";
					sLocal_125 = "REAR1_GYT";
					break;
			}
			sLocal_114 = "ATMRobVictim1";
			cLocal_123 = "REAR1AU";
			if (iLocal_103 == 0)
			{
				iVar0 = unk_0x9EC3B269A34A2BEE(0, 3);
				if (iVar0 == 0)
				{
					iLocal_101 = joaat("prop_ld_purse_01");
				}
				else if (iVar0 == 1)
				{
					iLocal_101 = joaat("prop_ld_wallet_01");
				}
				else if (iVar0 == 2)
				{
					bVar1 = func_215();
					if (bVar1)
					{
						iLocal_101 = joaat("prop_ld_wallet_pickup");
					}
					else
					{
						iLocal_101 = joaat("prop_ld_purse_01");
					}
				}
				iLocal_103 = 1;
			}
			cLocal_142 = "RANDOM@ATMROBBERY1";
			sLocal_143 = "Return_Wallet_Positive_A_Player";
			sLocal_144 = "Return_Wallet_Positive_A_Female";
			sLocal_145 = "Return_Wallet_Positive_A_Cam";
			cLocal_148 = "random@car_thief@waiting_ig_4";
			sLocal_149 = "waiting";
			sLocal_150 = "waiting";
			sLocal_151 = "waiting";
			break;
		
		case 2:
			iLocal_104 = joaat("g_m_y_famfor_01");
			sLocal_146 = "G_M_Y_FamFor_01_BLACK_MINI_01";
			iLocal_105 = joaat("a_m_y_hipster_02");
			sLocal_147 = "A_M_Y_Hipster_02_White_Full_01";
			iLocal_106 = joaat("ruiner");
			sLocal_115 = "REAR2_ATTR";
			sLocal_116 = "REAR2_HELP";
			sLocal_117 = "REAR2_PROMPT";
			sLocal_118 = "REAR2_CHASE";
			sLocal_119 = "REAR2_FLEE";
			cLocal_120 = "REAR2_THX";
			sLocal_121 = "REAR2_DAMN";
			switch (func_38())
			{
				case 0:
					sLocal_124 = "REAR2_REM";
					sLocal_122 = "REAR2_FKM";
					sLocal_113 = "REAR2_WM";
					sLocal_125 = "REAR2_GYM";
					break;
				
				case 1:
					sLocal_124 = "REAR2_REF";
					sLocal_122 = "REAR2_FKF";
					sLocal_113 = "REAR2_WF";
					sLocal_125 = "REAR2_GYF";
					break;
				
				case 2:
					sLocal_124 = "REAR2_RET";
					sLocal_122 = "REAR2_FKT";
					sLocal_113 = "REAR2_WT";
					sLocal_125 = "REAR2_GYT";
					break;
			}
			sLocal_114 = "ATMRobVictim2";
			cLocal_123 = "REAR2AU";
			iLocal_101 = joaat("prop_ld_wallet_pickup");
			cLocal_142 = "RANDOM@ATMROBBERY2";
			sLocal_143 = "Return_Wallet_Positive_A_Player";
			sLocal_144 = "Return_Wallet_Positive_A_Male";
			sLocal_145 = "Return_Wallet_Positive_A_Cam";
			cLocal_148 = "RANDOM@BICYCLE_THIEF@IDLE_A";
			sLocal_149 = "IDLE_A";
			sLocal_150 = "IDLE_B";
			sLocal_151 = "IDLE_C";
			break;
		
		case 3:
			iLocal_105 = joaat("a_f_m_tourist_01");
			sLocal_147 = "A_F_Y_Tourist_01_White_Mini_01";
			iLocal_104 = joaat("g_m_y_salvagoon_02");
			sLocal_146 = "G_M_Y_SalvaGoon_02_SALVADORIAN_MINI_03";
			sLocal_115 = "REAR5_ATTR";
			sLocal_116 = "REAR5_HELP";
			sLocal_117 = "REAR5_PROMPT";
			sLocal_118 = "REAR5_CHASE";
			sLocal_119 = "REAR5_FLEE";
			cLocal_120 = "REAR5_THX";
			sLocal_121 = "REAR5_DAMN";
			switch (func_38())
			{
				case 0:
					sLocal_124 = "REAR5_REM";
					sLocal_122 = "REAR5_FKM";
					sLocal_113 = "REAR5_WM";
					sLocal_125 = "REAR5_GYM";
					break;
				
				case 1:
					sLocal_124 = "REAR5_REF";
					sLocal_122 = "REAR5_FKF";
					sLocal_113 = "REAR5_WF";
					sLocal_125 = "REAR5_GYF";
					break;
				
				case 2:
					sLocal_124 = "REAR5_RET";
					sLocal_122 = "REAR5_FKT";
					sLocal_113 = "REAR5_WT";
					sLocal_125 = "REAR5_GYT";
					break;
			}
			sLocal_114 = "ATMRobVictim5";
			cLocal_123 = "REAR5AU";
			if (iLocal_103 == 0)
			{
				iVar0 = unk_0x9EC3B269A34A2BEE(0, 3);
				if (iVar0 == 0)
				{
					iLocal_101 = joaat("prop_ld_purse_01");
				}
				else if (iVar0 == 1)
				{
					iLocal_101 = joaat("prop_ld_wallet_01");
				}
				else if (iVar0 == 2)
				{
					bVar2 = func_215();
					if (bVar2)
					{
						iLocal_101 = joaat("prop_ld_wallet_pickup");
					}
					else
					{
						iLocal_101 = joaat("prop_ld_wallet_01");
					}
				}
				iLocal_103 = 1;
			}
			cLocal_142 = "RANDOM@ATMROBBERY3";
			sLocal_143 = "Return_Wallet_Positive_B_Player";
			sLocal_144 = "Return_Wallet_Positive_B_Female";
			sLocal_145 = "Return_Wallet_Positive_B_Cam";
			cLocal_148 = "random@car_thief@waiting_ig_4";
			sLocal_149 = "waiting";
			sLocal_150 = "waiting";
			sLocal_151 = "waiting";
			break;
		
		case 4:
			iLocal_105 = joaat("a_f_m_tourist_01");
			sLocal_147 = "A_F_M_BevHills_02_WHITE_FULL_01";
			iLocal_106 = joaat("ruiner");
			iLocal_104 = joaat("g_m_y_azteca_01");
			sLocal_146 = "G_M_Y_Latino01_Latino_MINI_01";
			sLocal_115 = "REAR3_ATTR";
			sLocal_116 = "REAR3_HELP";
			sLocal_117 = "REAR3_PROMPT";
			sLocal_118 = "REAR3_CHASE";
			sLocal_119 = "REAR3_FLEE";
			cLocal_120 = "REAR3_THX";
			sLocal_121 = "REAR3_DAMN";
			switch (func_38())
			{
				case 0:
					sLocal_124 = "REAR3_REM";
					sLocal_122 = "REAR3_FKM";
					sLocal_113 = "REAR3_WM";
					sLocal_125 = "REAR3_GYM";
					break;
				
				case 1:
					sLocal_124 = "REAR3_REF";
					sLocal_122 = "REAR3_FKF";
					sLocal_113 = "REAR3_WF";
					sLocal_125 = "REAR3_GYF";
					break;
				
				case 2:
					sLocal_124 = "REAR3_RET";
					sLocal_122 = "REAR3_FKT";
					sLocal_113 = "REAR3_WT";
					sLocal_125 = "REAR3_GYT";
					break;
			}
			sLocal_114 = "ATMRobVictim3";
			cLocal_123 = "REAR3AU";
			if (iLocal_103 == 0)
			{
				iVar0 = unk_0x9EC3B269A34A2BEE(0, 3);
				if (iVar0 == 0)
				{
					iLocal_101 = joaat("prop_ld_purse_01");
				}
				else if (iVar0 == 1)
				{
					iLocal_101 = joaat("prop_ld_wallet_01");
				}
				else if (iVar0 == 2)
				{
					bVar3 = func_215();
					if (bVar3)
					{
						iLocal_101 = joaat("prop_ld_wallet_pickup");
					}
					else
					{
						iLocal_101 = joaat("prop_ld_purse_01");
					}
				}
				iLocal_103 = 1;
			}
			cLocal_142 = "RANDOM@ATMROBBERY4";
			sLocal_143 = "Return_Wallet_Positive_C_Player";
			sLocal_144 = "Return_Wallet_Positive_C_Female";
			sLocal_145 = "Return_Wallet_Positive_C_Cam";
			cLocal_148 = "random@car_thief@waiting_ig_4";
			sLocal_149 = "waiting";
			sLocal_150 = "waiting";
			sLocal_151 = "waiting";
			break;
	}
	if (unk_0x16E00F066AFFEA0D(vLocal_53, -203.72f, -861.8f, 29.27f, true) < 5f)
	{
		vLocal_138 = { -197.64f, -863.25f, 28.33f };
		fLocal_139 = 334.5007f;
		vLocal_140 = { -187.24f, -856.77f, 28.97f };
		fLocal_141 = 162.69f;
		iLocal_72 = 1;
	}
	else if (unk_0x16E00F066AFFEA0D(vLocal_53, 288.46f, -1256.71f, 28.44f, true) < 5f)
	{
		vLocal_138 = { 286.5f, -1256.73f, 28.29f };
		fLocal_139 = 167.3216f;
		vLocal_140 = { 250.55f, -1239.27f, 28.84f };
		fLocal_141 = 265.51f;
		iLocal_72 = 2;
	}
	else if (unk_0x16E00F066AFFEA0D(vLocal_53, -3044.11f, 594.34f, 6.73f, true) < 5f)
	{
		vLocal_138 = { -3044.66f, 595.7f, 6.59f };
		fLocal_139 = 296.7338f;
		vLocal_140 = { -3037.55f, 608.53f, 7.34f };
		fLocal_141 = 202.3f;
		iLocal_72 = 3;
	}
	else if (unk_0x16E00F066AFFEA0D(vLocal_53, 174.53f, 6637.64f, 30.57f, true) < 5f)
	{
		vLocal_138 = { 175.57f, 6636.58f, 30.57f };
		fLocal_139 = 260.4868f;
		vLocal_140 = { 188.97f, 6616.2f, 31.48f };
		fLocal_141 = 93.97f;
		iLocal_72 = 4;
	}
	else if (unk_0x16E00F066AFFEA0D(vLocal_53, 24.13f, -946.84f, 28.36f, true) < 5f)
	{
		vLocal_138 = { 23.65f, -948.26f, 28.36f };
		fLocal_139 = 258.8732f;
		vLocal_140 = { 22.19f, -955.82f, 28.94f };
		fLocal_141 = 70.66f;
		iLocal_72 = 6;
	}
	else if (unk_0x16E00F066AFFEA0D(vLocal_53, 296.13f, -894.01f, 28.23f, true) < 5f)
	{
		vLocal_138 = { 294.64f, -893.6f, 28.18f };
		fLocal_139 = 156.7222f;
		vLocal_140 = { 286.4f, -897.28f, 28.57f };
		fLocal_141 = 341.97f;
		iLocal_72 = 8;
	}
	else if (unk_0x16E00F066AFFEA0D(vLocal_53, 1077.69f, -775.73f, 57.21f, true) < 5f)
	{
		vLocal_138 = { 1077.64f, -773.86f, 57.09f };
		fLocal_139 = 275.6593f;
		vLocal_140 = { 1081.93f, -764.08f, 57.35f };
		fLocal_141 = 268.57f;
		iLocal_72 = 11;
	}
	else if (unk_0x16E00F066AFFEA0D(vLocal_53, -2072.88f, -317.19f, 12.32f, true) < 5f)
	{
		vLocal_138 = { -2074.93f, -316.75f, 12.16f };
		fLocal_139 = 157.3363f;
		vLocal_140 = { -2101.2f, -293.74f, 12.74f };
		fLocal_141 = 263.12f;
		iLocal_72 = 16;
	}
	else if (unk_0x16E00F066AFFEA0D(vLocal_53, -821.33f, -1082.43f, 10.14f, true) < 5f)
	{
		vLocal_138 = { -819.39f, -1084.12f, 10.03f };
		fLocal_139 = 236.6294f;
		vLocal_140 = { -803.18f, -1075.91f, 11.13f };
		fLocal_141 = 209.53f;
		iLocal_72 = 17;
	}
	else if (unk_0x16E00F066AFFEA0D(vLocal_53, -712.9f, -819.32f, 22.73f, true) < 5f)
	{
		vLocal_138 = { -712.88f, -820.47f, 22.61f };
		fLocal_139 = 268.2568f;
		vLocal_140 = { -721.63f, -826.84f, 22.82f };
		fLocal_141 = 93.14f;
		iLocal_72 = 18;
	}
	else if (unk_0x16E00F066AFFEA0D(vLocal_53, -387.12f, 6045.79f, 30.5f, true) < 5f)
	{
		vLocal_138 = { -389.5633f, 6042.153f, 30.4989f };
		fLocal_139 = 223.2838f;
		vLocal_140 = { -406.23f, 6045.69f, 31.06f };
		fLocal_141 = 229.52f;
		iLocal_72 = 19;
	}
	else if (unk_0x16E00F066AFFEA0D(vLocal_53, -301.84f, -830.39f, 31.38f, true) < 5f)
	{
		vLocal_138 = { -304.1459f, -837.4778f, 30.6799f };
		fLocal_139 = 286.139f;
		vLocal_140 = { -304.56f, -840.76f, 31.26f };
		fLocal_141 = 77.59f;
		iLocal_72 = 22;
	}
	else if (unk_0x16E00F066AFFEA0D(vLocal_53, -254.3f, -691.96f, 32.61f, true) < 5f)
	{
		vLocal_138 = { -253.51f, -689.26f, 32.57f };
		fLocal_139 = 209.9227f;
		vLocal_140 = { -250.91f, -684.01f, 33f };
		fLocal_141 = 230.65f;
		iLocal_72 = 23;
	}
	else if (unk_0x16E00F066AFFEA0D(vLocal_53, 89.39f, 2f, 67.34f, true) < 5f)
	{
		vLocal_138 = { 88.7f, 0.01f, 67.38f };
		fLocal_139 = 71.0114f;
		vLocal_140 = { 91.35f, -7.07f, 67.82f };
		fLocal_141 = 70.28f;
		iLocal_72 = 25;
	}
	else if (unk_0x16E00F066AFFEA0D(vLocal_53, -526.42f, -1222.51f, 17.46f, true) < 5f)
	{
		vLocal_138 = { -530.11f, -1217.33f, 17.26f };
		fLocal_139 = 53.768f;
		vLocal_140 = { -522.45f, -1196.35f, 18.45f };
		fLocal_141 = 297.22f;
		iLocal_72 = 30;
	}
	else if (unk_0x16E00F066AFFEA0D(vLocal_53, -2956.78f, 488.19f, 14.47f, true) < 5f)
	{
		vLocal_138 = { -2956.78f, 488.19f, 14.47f };
		fLocal_139 = 80.0912f;
		vLocal_140 = { -2974.34f, 491.96f, 15f };
		fLocal_141 = 1.95f;
		iLocal_72 = 31;
	}
	else
	{
		vLocal_138 = { vLocal_53 };
	}
}

int func_215()
{
	if (unk_0x0E4018692D92041D(unk_0x9EC3B269A34A2BEE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_216()
{
	if (!func_185(5))
	{
		return 1;
	}
	if (func_209())
	{
		return 1;
	}
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		if (vmag2(unk_0x43D8A2CCB19FE8A8(unk_0x33CD235DF1E6A94E())) > 1369f && !func_213())
		{
			return 0;
		}
	}
	if (func_202(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_217()
{
	if ((Global_106554 == func_218() && unk_0x40AC0B9EFCB6A65B()) && Global_106555)
	{
		return 1;
	}
	return 0;
}

int func_218()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0xD178EF744F20B712(), 64);
	uVar1 = func_219(Var0);
	return uVar1;
}

int func_219(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

void func_220(var uParam0)
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
						func_221(uParam0[iVar0 /*18*/]);
						uParam0->f_146 = unk_0xE77FA521699F639C();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_221(int iParam0)
{
	func_222(iParam0, &(iParam0->f_2), iParam0->f_1);
}

void func_222(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0x0E4018692D92041D(*iParam0, 30))
	{
		switch (func_196(*iParam0))
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

void func_223(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (*uParam1 == -99)
	{
		*uParam1 = unk_0xE3903F59E2F22150();
	}
	if (unk_0xE38E3CF1625A4145(iParam0))
	{
		iVar0 = (unk_0xE3903F59E2F22150() - *uParam1);
		if (iVar0 < 5000)
		{
			iVar1 = ceil((to_float(iVar0) / 1000f));
			if ((iVar1 * 1000 - iVar0) < 500)
			{
				if (unk_0x163940E51B9C8A0D(iParam0) != 255)
				{
					unk_0xE447A1B9434714F3(iParam0, 255);
				}
			}
			else if (unk_0x163940E51B9C8A0D(iParam0) != 0)
			{
				unk_0xE447A1B9434714F3(iParam0, 0);
			}
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
			if (unk_0x163940E51B9C8A0D(iParam0) != 255)
			{
				unk_0xE447A1B9434714F3(iParam0, 255);
			}
		}
	}
}

void func_224()
{
}

void func_225()
{
}

void func_226(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_218();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_228(iParam0);
	unk_0x88B04627B159D024(0);
	unk_0xDCCE32451D4E5521(1);
	Global_106551 = 0;
	func_227();
}

void func_227()
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

void func_228(int iParam0)
{
	Global_106554 = iParam0;
}

int func_229(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
		iParam1 = func_218();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_270())
		{
			return 0;
		}
	}
	vLocal_51 = { vParam0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()) && !unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
		{
			vVar1 = { unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), true) };
			if (vmag2(unk_0x43D8A2CCB19FE8A8(unk_0x33CD235DF1E6A94E())) > 1369f && !func_213())
			{
				return 0;
			}
		}
		if (!Global_106565.f_9079)
		{
			return 0;
		}
		if (func_269(0))
		{
			return 0;
		}
		if (func_209())
		{
			return 0;
		}
		if (func_268())
		{
			return 0;
		}
		if (Global_106554 != -1)
		{
			return 0;
		}
		if (func_40(func_38()))
		{
			if (func_202(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()) && !bParam4)
		{
			if ((vVar1.z - vLocal_51.z) > 50f)
			{
				return 0;
			}
		}
		if (!func_267(iParam1))
		{
			return 0;
		}
		if (func_40(func_38()))
		{
			if (func_266(func_38()) == 4 || func_266(func_38()) == 5)
			{
				return 0;
			}
		}
		if (func_40(func_38()))
		{
			if (!func_265(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_264(Global_106565.f_24989.f_43[iParam1]))
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
		if (func_263())
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
		if (!func_254(4))
		{
			return 0;
		}
		if (!func_185(5))
		{
			return 0;
		}
		if (func_253(iParam1, iParam2) && !bParam3)
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
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_253(0, 0))
		{
			return 0;
		}
		if (Global_25911)
		{
			return 0;
		}
		if (func_267(30) && !func_253(30, 0))
		{
			if (iParam1 != 30)
			{
				if (vdist2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_40(func_38()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				vVar3 = { Global_106565.f_2357.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_106565.f_2357.f_539.f_2296[iVar2];
				if (func_252(iVar4))
				{
					if (func_230(iVar2))
					{
						if (!func_63(vVar3, 0f, 0f, 0f, 0))
						{
							if (vdist2(unk_0xFBB1F99A825CAB09(unk_0x33CD235DF1E6A94E(), false), vVar3) < (210f * 210f))
							{
								if (func_38() != iVar2)
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

bool func_230(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_106565.f_2357.f_539.f_2296[iParam0];
	return func_231(iVar0);
}

int func_231(int iParam0)
{
	return func_232(iParam0, 1);
}

int func_232(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_252(iParam0))
	{
		return 0;
	}
	func_233(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_233(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_234(func_245(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_234(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_244(iParam0, iParam1))
	{
		iVar0 = func_243(iParam1);
		iVar1 = func_241(iParam0);
		iVar2 = (func_241(iParam0) - func_241(iParam1));
		iVar3 = (func_243(iParam0) - func_243(iParam1));
		iVar4 = (func_240(iParam0) - func_240(iParam1));
		iVar5 = (func_239(iParam0) - func_239(iParam1));
		iVar6 = (func_238(iParam0) - func_238(iParam1));
		iVar7 = (func_237(iParam0) - func_237(iParam1));
	}
	else
	{
		iVar0 = func_243(iParam0);
		iVar1 = func_241(iParam1);
		iVar2 = (func_241(iParam1) - func_241(iParam0));
		iVar3 = (func_243(iParam1) - func_243(iParam0));
		iVar4 = (func_240(iParam1) - func_240(iParam0));
		iVar5 = (func_239(iParam1) - func_239(iParam0));
		iVar6 = (func_238(iParam1) - func_238(iParam0));
		iVar7 = (func_237(iParam1) - func_237(iParam0));
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
		iVar4 = (iVar4 + func_236(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_235(to_float(iVar0 + 1), 0f, 12f));
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

float func_235(float fParam0, float fParam1, float fParam2)
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

int func_236(int iParam0, int iParam1)
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

int func_237(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_238(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_239(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_240(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_241(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_242(unk_0x0E4018692D92041D(iParam0, 31), -1, 1)) + 2011;
}

int func_242(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_243(int iParam0)
{
	return iParam0 & 15;
}

int func_244(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_252(iParam1) || !func_252(iParam0))
	{
		return 1;
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
	iVar0 = func_240(iParam0);
	iVar1 = func_240(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_239(iParam0);
	iVar1 = func_239(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_238(iParam0);
	iVar1 = func_238(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_237(iParam0);
	iVar1 = func_237(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_245()
{
	var uVar0;
	
	func_251(&uVar0, unk_0xE6A7CE90720B9037());
	func_250(&uVar0, unk_0x7EA67BD818402745());
	func_249(&uVar0, unk_0x13348E86D5B8A052());
	func_248(&uVar0, unk_0x020A28FAE1C09250());
	func_247(&uVar0, unk_0x2C02CAA9C4127339());
	func_246(&uVar0, unk_0xED3F08F762AAA55A());
	return uVar0;
}

void func_246(var uParam0, int iParam1)
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

void func_247(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_248(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_243(*uParam0);
	iVar1 = func_241(*uParam0);
	if (iParam1 < 1 || iParam1 > func_236(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_249(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_250(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_251(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_252(int iParam0)
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
	iVar0 = func_237(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_238(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_239(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_241(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_243(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_240(iParam0);
	if (iVar5 < 1 || iVar5 > func_236(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_253(int iParam0, int iParam1)
{
	if (unk_0x0E4018692D92041D(Global_106565.f_24989.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_254(int iParam0)
{
	int iVar0;
	
	if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
	{
		if (unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()))
		{
			if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
			{
				iVar0 = func_38();
				if (!func_40(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0xE027064B1C47E424(unk_0x95B959F18401C09A()) || unk_0x7DD221C91135596A(unk_0x33CD235DF1E6A94E())) || unk_0x707FFB0E65C1C546(unk_0x33CD235DF1E6A94E())) || unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E())) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || unk_0x63E238348058FF52(unk_0x95B959F18401C09A())) || unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0)) || func_262()) || Global_105612) || Global_25767) || func_261()) || func_59(8, -1)) || func_260()) || func_259()) || func_258()) || func_257()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1) || func_262()) || Global_25767) || func_261()) || func_59(8, -1)) || func_258()) || func_260()) || func_259()) || func_257()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xE027064B1C47E424(unk_0x95B959F18401C09A()) || unk_0x7DD221C91135596A(unk_0x33CD235DF1E6A94E())) || unk_0x707FFB0E65C1C546(unk_0x33CD235DF1E6A94E())) || unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E())) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || unk_0x63E238348058FF52(unk_0x95B959F18401C09A())) || unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0)) || func_262()) || Global_105612) || Global_25767) || func_261()) || func_59(8, -1)) || func_258()) || func_260()) || func_259()) || func_257()) || Global_106565.f_7682.f_919[iVar0] == 5) || Global_36972 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E()) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0)) || func_262()) || Global_105612) || Global_25767) || func_261()) || func_59(8, -1)) || func_260()) || func_259()) || func_257()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_262() || unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) > 0) || func_59(8, -1)) || func_257()) || func_256()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_59(8, -1) || func_260()) || func_259()) || func_256()) || func_255())
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
							if ((((((((((((((unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0) || unk_0x002F527E1A3238DC(unk_0x95B959F18401C09A()) > 0) || unk_0x7DD221C91135596A(unk_0x33CD235DF1E6A94E())) || unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E())) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || unk_0x63E238348058FF52(unk_0x95B959F18401C09A())) || func_262()) || Global_25767) || func_261()) || func_59(8, -1)) || func_259()) || func_258()) || func_257()) || Global_106565.f_7682.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0) || !unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A())) || !unk_0xE027064B1C47E424(unk_0x95B959F18401C09A())) || !unk_0x73DA1542B2F0C458()) || unk_0x7DD221C91135596A(unk_0x33CD235DF1E6A94E())) || unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E())) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || func_262()) || func_259()) || Global_105612) || Global_25767) || func_261()) || Global_37584) || func_59(8, -1)) || func_258()) || func_256()) || func_257()) || Global_106565.f_7682.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x71E0DAA57FE7D5C7(unk_0x33CD235DF1E6A94E(), 0) || !unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A())) || !unk_0xE027064B1C47E424(unk_0x95B959F18401C09A())) || !unk_0x73DA1542B2F0C458()) || unk_0x09287BFEE1D9F6EF(unk_0x95B959F18401C09A(), 0)) || unk_0x7DD221C91135596A(unk_0x33CD235DF1E6A94E())) || unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1)) || unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E())) || unk_0xE19223B3551F58B8(unk_0x33CD235DF1E6A94E())) || unk_0x04571D88090E0F77(unk_0x33CD235DF1E6A94E())) || unk_0xE51F6AFEA84C2923(unk_0x95B959F18401C09A(), 1)) || unk_0x63E238348058FF52(unk_0x95B959F18401C09A())) || func_262()) || Global_105612) || Global_25767) || func_261()) || func_59(8, -1)) || func_258()) || func_256()) || func_260()) || func_259()) || func_257())
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

var func_255()
{
	return Global_93721.f_1;
}

int func_256()
{
	if (Global_90634 != -1)
	{
		return unk_0x0E4018692D92041D(Global_84500[Global_90634 /*34*/].f_15, 13);
	}
	return 0;
}

int func_257()
{
	if (unk_0x1BCDA92AD0A7835B(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_258()
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

bool func_259()
{
	return Global_93734.f_340 > 0;
}

bool func_260()
{
	return Global_93734.f_339 > 0;
}

var func_261()
{
	return Global_1312867;
}

int func_262()
{
	if (!unk_0xB331FCEB94EB05C8())
	{
		return Global_91190.f_44 == 1;
	}
	return 0;
}

int func_263()
{
	func_57();
	if (Global_3228[Global_14553 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_264(int iParam0)
{
	return func_244(func_245(), iParam0);
}

int func_265(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_38();
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

int func_266(int iParam0)
{
	if (!func_40(iParam0))
	{
		return 7;
	}
	return Global_106565.f_7682.f_919[iParam0];
}

bool func_267(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_270())
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

int func_268()
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

bool func_269(bool bParam0)
{
	if (!bParam0 && unk_0x1BCDA92AD0A7835B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x0E4018692D92041D(Global_71838, 0);
}

int func_270()
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

void func_271()
{
	if (bLocal_127)
	{
		if (unk_0x91D5C8283D19AF49(iLocal_73, 0))
		{
			if (unk_0x8EDBE29FEAB08840(iLocal_73))
			{
				unk_0x6FF8EF6DC21D25B9(iLocal_73);
			}
		}
	}
	if (unk_0x765F6FEEFF39224F(iLocal_55))
	{
		unk_0x1F45B4626AC4A4C0(&iLocal_55);
	}
	unk_0x4BF7869DAE52CA15(0);
	if (iLocal_69 != 0)
	{
		unk_0x6C6FE09E055D0855(iLocal_69);
	}
	unk_0x4BF7869DAE52CA15(0);
	if (!unk_0xBC2FC12AD0FBF72E(iLocal_56))
	{
		unk_0x4A852F02088ECC9D(iLocal_56, false);
		unk_0xF0BE7CB40DE62A2F(iLocal_56, true);
		unk_0x1F45B4626AC4A4C0(&iLocal_56);
	}
	if (iLocal_65 == 4)
	{
		unk_0x5856B9BF2B4E98C4(179.5463f, 6625.689f, 30.2739f, 184.245f, 6635.661f, 31.5188f, true, 1);
	}
	func_173(&uLocal_152, 0, 0);
	if (func_217())
	{
		unk_0x4B06B5746CBEC99F(1f);
	}
	if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
	{
		unk_0x9FD099B0593CD91D(unk_0x33CD235DF1E6A94E(), false);
	}
	func_284(&Local_164, 0);
	func_272(-1);
	unk_0x699FD6EF08D81548(1);
	unk_0xF1CFA0046BB67893(iLocal_63, 0);
	unk_0x5894DC159447E10A();
}

void func_272(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_218();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_217())
	{
		func_277(iParam0);
		unk_0xF72C40745AA793F1(0, 0);
		Global_106556 = unk_0xE3903F59E2F22150();
		func_276(30000);
		StringCopy(&cVar0, func_275(Global_106554, 1), 64);
		if (func_274(Global_106554) > 0)
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
	func_273(&Global_25824);
	Global_106555 = 0;
	func_228(-1);
}

void func_273(var uParam0)
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

int func_274(int iParam0)
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

char* func_275(int iParam0, bool bParam1)
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

void func_276(int iParam0)
{
	Global_36976 = (unk_0xE3903F59E2F22150() + iParam0);
}

void func_277(int iParam0)
{
	func_278(iParam0, 0, func_283(iParam0));
}

void func_278(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_245();
	func_281(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_280(iParam0, &uVar0);
	Var1 = { func_279(&uVar0) };
}

struct<16> func_279(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_239(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_238(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_237(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_240(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_243(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_241(*uParam0), 64);
	return Var0;
}

void func_280(int iParam0, var uParam1)
{
	Global_106565.f_24989.f_43[iParam0] = *uParam1;
}

void func_281(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_241(*uParam0);
	iVar1 = func_243(*uParam0);
	iVar2 = func_240(*uParam0);
	iVar3 = func_239(*uParam0);
	iVar4 = func_238(*uParam0);
	iVar5 = func_237(*uParam0);
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
	iVar6 = func_236(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_236(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_282(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_282(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_251(uParam0, iParam1);
	func_250(uParam0, iParam2);
	func_249(uParam0, iParam3);
	func_247(uParam0, iParam5);
	func_248(uParam0, iParam4);
	func_246(uParam0, iParam6);
}

int func_283(int iParam0)
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

void func_284(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_286(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_285(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_145 = 0;
	uParam0->f_146 = -1;
}

void func_285(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_286(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0x0E4018692D92041D((*uParam0)[iVar0 /*18*/], 30))
		{
			func_287(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_145 = 1;
}

void func_287(var uParam0)
{
	func_288(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_288(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0x0E4018692D92041D(iParam0, 30))
	{
		switch (func_196(iParam0))
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

void func_289(bool bParam0)
{
	Global_106557 = { vLocal_53 };
	if (bParam0)
	{
		func_304(3);
	}
	func_293(1, 0);
	if (!bLocal_96)
	{
		func_292();
	}
	func_290();
	func_271();
}

void func_290()
{
	func_291();
}

int func_291()
{
	if (func_269(0))
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

int func_292()
{
	return 1;
}

void func_293(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_218();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_274(iParam0))
	{
		func_303(iParam0, iParam1);
		if (!func_302(51))
		{
			func_299("RE_REWARD", 1, 0, 4000, 10000, func_208(), 0, 138, 0);
			func_298(51);
		}
		if (func_181(iParam0))
		{
			Global_106565.f_24989.f_2 = 3;
		}
		if (func_297(iParam0, iParam1) != 322)
		{
			func_294(func_297(iParam0, iParam1), vLocal_51.x, vLocal_51.y);
		}
		Global_106553 = iParam1;
		if (Global_106551 == 0)
		{
			if (((Global_106554 == 1 || Global_106554 == 5) || Global_106554 == 11) || Global_106554 == 25)
			{
				func_304(2);
			}
			else if ((Global_106554 == 26 || Global_106554 == 8) || Global_106554 == 17)
			{
				func_304(7);
			}
			else
			{
				func_304(1);
			}
		}
	}
}

void func_294(int iParam0, var uParam1, var uParam2)
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
		func_295();
	}
}

void func_295()
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
		func_35(13, floor(Global_106565.f_10188.f_3853));
	}
	if (!unk_0xDC17890B0B8B5081())
	{
		if (!Global_71590)
		{
			if (func_296() == 2 == 0 && !unk_0xB331FCEB94EB05C8())
			{
				if (unk_0xB16BC34F6CB4A57A())
				{
					Global_106299 = 0;
				}
				if (!Global_56494)
				{
					func_291();
				}
			}
		}
	}
}

int func_296()
{
	return Global_25765;
}

int func_297(int iParam0, int iParam1)
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

void func_298(int iParam0)
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

void func_299(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_300(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_300(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_301();
	}
}

void func_301()
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

int func_302(int iParam0)
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

void func_303(int iParam0, int iParam1)
{
	unk_0x8950ED5730F62EE8(&(Global_106565.f_24989.f_8[iParam0]), iParam1);
}

void func_304(int iParam0)
{
	Global_106551 = iParam0;
}

