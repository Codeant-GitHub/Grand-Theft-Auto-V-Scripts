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
	var uLocal_60 = 0;
	struct<3> Local_61 = { 0, 0, 0 } ;
	struct<3> Local_62 = { 0, 0, 0 } ;
	int iLocal_63 = 0;
	var uLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	struct<18> Local_71 = { 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4 } ;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 4;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 4;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 4;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 4;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 4;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 4;
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
	var uLocal_116 = 8;
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
	var uLocal_157 = 21;
	var uLocal_158 = 6;
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
	var uLocal_170 = -1;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	int iLocal_178[3] = { 0, 0, 0 };
	int iLocal_179[3] = { 0, 0, 0 };
	int iLocal_180[3] = { 0, 0, 0 };
	struct<3> Local_181[9];
	var uLocal_182[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_183[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_184 = 0;
	int iLocal_185 = 0;
	bool bLocal_186 = 0;
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	bool bLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	char cLocal_195[32] = "";
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	int iLocal_200 = 0;
	int iLocal_201 = 0;
	int iLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	int iLocal_207 = 0;
	int iLocal_208 = 0;
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
	Local_61 = { 0f, 0f, 0f };
	Local_62 = { 0f, 0f, 0f };
	iLocal_63 = -1;
	iLocal_202 = 0;
	if (unk_0x4210287E2833D44B(2))
	{
		func_693();
	}
	func_692();
	func_687(&uLocal_163);
	while (true)
	{
		switch (iLocal_65)
		{
			case 0:
				func_671();
				break;
			
			case 1:
				func_661();
				if (!Global_3)
				{
					func_381();
					func_264();
					func_238();
					func_237();
				}
				break;
		}
		func_165(&uLocal_163);
		func_164();
		func_151();
		func_91();
		func_89();
		if (Global_112293.f_2361.f_539.f_2353 == 0)
		{
			func_1();
		}
		wait(0);
	}
}

void func_1()
{
	int iVar0;
	
	wait(0);
	iVar0 = func_88(0);
	func_2(iVar0, 13, 31, 1, 1, 0, 1);
	func_2(iVar0, 14, 0, 1, 1, 0, 1);
	func_2(iVar0, 14, 1, 1, 1, 0, 1);
	func_2(iVar0, 14, 2, 1, 1, 0, 1);
	func_2(iVar0, 14, 3, 1, 1, 0, 1);
	func_2(iVar0, 14, 4, 1, 1, 0, 1);
	func_2(iVar0, 14, 5, 1, 1, 0, 1);
	func_2(iVar0, 14, 6, 1, 1, 0, 1);
	func_2(iVar0, 14, 7, 1, 1, 0, 1);
	func_2(iVar0, 14, 8, 1, 1, 0, 1);
	func_2(iVar0, 0, 0, 1, 1, 0, 0);
	func_2(iVar0, 0, 1, 1, 1, 0, 0);
	func_2(iVar0, 0, 2, 1, 1, 0, 0);
	func_2(iVar0, 0, 3, 1, 1, 0, 0);
	func_2(iVar0, 0, 4, 1, 1, 0, 0);
	func_2(iVar0, 0, 5, 1, 1, 0, 0);
	func_2(iVar0, 0, 6, 1, 1, 0, 0);
	func_2(iVar0, 2, 0, 1, 1, 0, 0);
	func_2(iVar0, 2, 2, 1, 1, 0, 0);
	func_2(iVar0, 2, 3, 1, 1, 0, 0);
	func_2(iVar0, 2, 4, 1, 1, 0, 0);
	func_2(iVar0, 2, 5, 1, 1, 0, 0);
	func_2(iVar0, 3, 0, 1, 1, 0, 1);
	func_2(iVar0, 3, 1, 1, 1, 0, 1);
	func_2(iVar0, 3, 2, 1, 0, 0, 0);
	func_2(iVar0, 3, 4, 1, 1, 0, 1);
	func_2(iVar0, 3, 5, 1, 0, 0, 0);
	func_2(iVar0, 3, 6, 1, 0, 0, 0);
	func_2(iVar0, 3, 7, 1, 0, 0, 0);
	func_2(iVar0, 3, 8, 1, 0, 0, 0);
	func_2(iVar0, 3, 9, 1, 0, 0, 0);
	func_2(iVar0, 3, 10, 1, 0, 0, 0);
	func_2(iVar0, 3, 11, 1, 0, 0, 0);
	func_2(iVar0, 3, 12, 1, 0, 0, 0);
	func_2(iVar0, 3, 13, 1, 0, 0, 0);
	func_2(iVar0, 3, 14, 1, 0, 0, 0);
	func_2(iVar0, 3, 15, 1, 0, 0, 0);
	func_2(iVar0, 3, 16, 1, 0, 0, 0);
	func_2(iVar0, 3, 17, 1, 0, 0, 0);
	func_2(iVar0, 3, 18, 1, 0, 0, 0);
	func_2(iVar0, 3, 19, 1, 0, 0, 0);
	func_2(iVar0, 3, 20, 1, 0, 0, 0);
	func_2(iVar0, 3, 21, 1, 0, 0, 0);
	func_2(iVar0, 3, 22, 1, 0, 0, 0);
	func_2(iVar0, 3, 23, 1, 0, 0, 0);
	func_2(iVar0, 3, 24, 1, 0, 0, 0);
	func_2(iVar0, 3, 25, 1, 0, 0, 0);
	func_2(iVar0, 3, 26, 1, 0, 0, 0);
	func_2(iVar0, 3, 27, 1, 0, 0, 0);
	func_2(iVar0, 3, 28, 1, 0, 0, 0);
	func_2(iVar0, 3, 29, 1, 0, 0, 0);
	func_2(iVar0, 3, 30, 1, 0, 0, 0);
	func_2(iVar0, 3, 31, 1, 0, 0, 0);
	func_2(iVar0, 3, 32, 1, 0, 0, 0);
	func_2(iVar0, 3, 33, 1, 0, 0, 0);
	func_2(iVar0, 3, 34, 1, 0, 0, 0);
	func_2(iVar0, 3, 35, 1, 0, 0, 0);
	func_2(iVar0, 3, 36, 1, 0, 0, 0);
	func_2(iVar0, 3, 37, 1, 0, 0, 0);
	func_2(iVar0, 3, 38, 1, 0, 0, 0);
	func_2(iVar0, 3, 39, 1, 0, 0, 0);
	func_2(iVar0, 3, 40, 1, 0, 0, 0);
	func_2(iVar0, 3, 41, 1, 0, 0, 0);
	func_2(iVar0, 3, 42, 1, 0, 0, 0);
	func_2(iVar0, 3, 43, 1, 0, 0, 0);
	func_2(iVar0, 3, 44, 1, 1, 0, 1);
	func_2(iVar0, 3, 45, 1, 0, 0, 0);
	func_2(iVar0, 3, 46, 1, 0, 0, 0);
	func_2(iVar0, 3, 47, 1, 0, 0, 0);
	func_2(iVar0, 3, 48, 1, 0, 0, 0);
	func_2(iVar0, 3, 49, 1, 0, 0, 0);
	func_2(iVar0, 3, 50, 1, 0, 0, 0);
	func_2(iVar0, 3, 51, 1, 0, 0, 0);
	func_2(iVar0, 3, 52, 1, 0, 0, 0);
	func_2(iVar0, 3, 53, 1, 0, 0, 0);
	func_2(iVar0, 3, 54, 1, 0, 0, 0);
	func_2(iVar0, 3, 55, 1, 0, 0, 0);
	func_2(iVar0, 3, 56, 1, 0, 0, 0);
	func_2(iVar0, 3, 57, 1, 0, 0, 0);
	func_2(iVar0, 3, 58, 1, 0, 0, 0);
	func_2(iVar0, 3, 59, 1, 0, 0, 0);
	func_2(iVar0, 3, 60, 1, 0, 0, 0);
	func_2(iVar0, 3, 61, 1, 0, 0, 0);
	func_2(iVar0, 3, 62, 1, 0, 0, 0);
	func_2(iVar0, 3, 63, 1, 0, 0, 0);
	func_2(iVar0, 3, 64, 1, 0, 0, 0);
	func_2(iVar0, 3, 65, 1, 0, 0, 0);
	func_2(iVar0, 3, 66, 1, 0, 0, 0);
	func_2(iVar0, 3, 67, 1, 0, 0, 0);
	func_2(iVar0, 3, 68, 1, 0, 0, 0);
	func_2(iVar0, 3, 69, 1, 0, 0, 0);
	func_2(iVar0, 3, 70, 1, 0, 0, 0);
	func_2(iVar0, 3, 71, 1, 0, 0, 0);
	func_2(iVar0, 3, 72, 1, 0, 0, 0);
	func_2(iVar0, 3, 73, 1, 0, 0, 0);
	func_2(iVar0, 3, 74, 1, 0, 0, 0);
	func_2(iVar0, 3, 75, 1, 0, 0, 0);
	func_2(iVar0, 3, 76, 1, 0, 0, 0);
	func_2(iVar0, 3, 77, 1, 0, 0, 0);
	func_2(iVar0, 3, 78, 1, 0, 0, 0);
	func_2(iVar0, 3, 79, 1, 0, 0, 0);
	func_2(iVar0, 3, 80, 1, 0, 0, 0);
	func_2(iVar0, 3, 81, 1, 0, 0, 0);
	func_2(iVar0, 3, 82, 1, 0, 0, 0);
	func_2(iVar0, 3, 83, 1, 0, 0, 0);
	func_2(iVar0, 3, 84, 1, 0, 0, 0);
	func_2(iVar0, 3, 85, 1, 1, 0, 1);
	func_2(iVar0, 3, 86, 1, 1, 0, 1);
	func_2(iVar0, 3, 87, 1, 1, 0, 1);
	func_2(iVar0, 3, 88, 1, 0, 0, 0);
	func_2(iVar0, 3, 89, 1, 0, 0, 0);
	func_2(iVar0, 3, 90, 1, 0, 0, 0);
	func_2(iVar0, 3, 91, 1, 0, 0, 0);
	func_2(iVar0, 3, 92, 1, 1, 0, 1);
	func_2(iVar0, 3, 93, 1, 0, 0, 0);
	func_2(iVar0, 3, 94, 1, 0, 0, 0);
	func_2(iVar0, 3, 95, 1, 0, 0, 0);
	func_2(iVar0, 3, 96, 1, 0, 0, 0);
	func_2(iVar0, 3, 97, 1, 1, 0, 1);
	func_2(iVar0, 3, 98, 1, 0, 0, 0);
	func_2(iVar0, 3, 99, 1, 0, 0, 0);
	func_2(iVar0, 3, 100, 1, 0, 0, 0);
	func_2(iVar0, 3, 101, 1, 0, 0, 0);
	func_2(iVar0, 3, 102, 1, 0, 0, 0);
	func_2(iVar0, 3, 103, 1, 0, 0, 0);
	func_2(iVar0, 3, 104, 1, 0, 0, 0);
	func_2(iVar0, 3, 105, 1, 0, 0, 0);
	func_2(iVar0, 3, 106, 1, 0, 0, 0);
	func_2(iVar0, 3, 107, 1, 0, 0, 0);
	func_2(iVar0, 3, 108, 1, 0, 0, 0);
	func_2(iVar0, 3, 109, 1, 0, 0, 0);
	func_2(iVar0, 3, 110, 1, 0, 0, 0);
	func_2(iVar0, 3, 111, 1, 0, 0, 0);
	func_2(iVar0, 3, 112, 1, 0, 0, 0);
	func_2(iVar0, 3, 113, 1, 0, 0, 0);
	func_2(iVar0, 3, 114, 1, 0, 0, 0);
	func_2(iVar0, 3, 115, 1, 0, 0, 0);
	func_2(iVar0, 3, 116, 1, 0, 0, 0);
	func_2(iVar0, 3, 117, 1, 0, 0, 0);
	func_2(iVar0, 3, 118, 1, 0, 0, 0);
	func_2(iVar0, 3, 119, 1, 0, 0, 0);
	func_2(iVar0, 3, 120, 1, 0, 0, 0);
	func_2(iVar0, 3, 121, 1, 0, 0, 0);
	func_2(iVar0, 3, 122, 1, 0, 0, 0);
	func_2(iVar0, 3, 123, 1, 0, 0, 0);
	func_2(iVar0, 3, 124, 1, 0, 0, 0);
	func_2(iVar0, 3, 125, 1, 0, 0, 0);
	func_2(iVar0, 3, 126, 1, 0, 0, 0);
	func_2(iVar0, 3, 127, 1, 0, 0, 0);
	func_2(iVar0, 3, 128, 1, 0, 0, 0);
	func_2(iVar0, 3, 129, 1, 1, 0, 1);
	func_2(iVar0, 3, 130, 1, 0, 0, 0);
	func_2(iVar0, 3, 131, 1, 0, 0, 0);
	func_2(iVar0, 3, 132, 1, 0, 0, 0);
	func_2(iVar0, 3, 133, 1, 0, 0, 0);
	func_2(iVar0, 3, 134, 1, 0, 0, 0);
	func_2(iVar0, 3, 135, 1, 0, 0, 0);
	func_2(iVar0, 3, 136, 1, 0, 0, 0);
	func_2(iVar0, 3, 137, 1, 0, 0, 0);
	func_2(iVar0, 3, 138, 1, 0, 0, 0);
	func_2(iVar0, 3, 139, 1, 0, 0, 0);
	func_2(iVar0, 3, 140, 1, 0, 0, 0);
	func_2(iVar0, 3, 141, 1, 0, 0, 0);
	func_2(iVar0, 3, 142, 1, 0, 0, 0);
	func_2(iVar0, 3, 143, 1, 0, 0, 0);
	func_2(iVar0, 3, 144, 1, 0, 0, 0);
	func_2(iVar0, 3, 145, 1, 0, 0, 0);
	func_2(iVar0, 3, 146, 1, 0, 0, 0);
	func_2(iVar0, 3, 147, 1, 0, 0, 0);
	func_2(iVar0, 3, 148, 1, 0, 0, 0);
	func_2(iVar0, 3, 149, 1, 0, 0, 0);
	func_2(iVar0, 3, 150, 1, 0, 0, 0);
	func_2(iVar0, 3, 151, 1, 0, 0, 0);
	func_2(iVar0, 3, 152, 1, 0, 0, 0);
	func_2(iVar0, 3, 153, 1, 0, 0, 0);
	func_2(iVar0, 3, 154, 1, 0, 0, 0);
	func_2(iVar0, 3, 155, 1, 0, 0, 0);
	func_2(iVar0, 3, 156, 1, 0, 0, 0);
	func_2(iVar0, 3, 157, 1, 0, 0, 0);
	func_2(iVar0, 3, 158, 1, 0, 0, 0);
	func_2(iVar0, 3, 159, 1, 0, 0, 0);
	func_2(iVar0, 3, 160, 1, 0, 0, 0);
	func_2(iVar0, 3, 161, 1, 0, 0, 0);
	func_2(iVar0, 3, 162, 1, 0, 0, 0);
	func_2(iVar0, 3, 163, 1, 0, 0, 0);
	func_2(iVar0, 3, 164, 1, 0, 0, 0);
	func_2(iVar0, 3, 165, 1, 0, 0, 0);
	func_2(iVar0, 3, 166, 1, 0, 0, 0);
	func_2(iVar0, 3, 167, 1, 0, 0, 0);
	func_2(iVar0, 3, 168, 1, 0, 0, 0);
	func_2(iVar0, 3, 169, 1, 1, 0, 1);
	func_2(iVar0, 3, 170, 1, 0, 0, 0);
	func_2(iVar0, 3, 171, 1, 0, 0, 0);
	func_2(iVar0, 3, 172, 1, 0, 0, 0);
	func_2(iVar0, 3, 173, 1, 0, 0, 0);
	func_2(iVar0, 3, 174, 1, 0, 0, 0);
	func_2(iVar0, 3, 176, 1, 0, 0, 0);
	func_2(iVar0, 3, 177, 1, 0, 0, 0);
	func_2(iVar0, 3, 178, 1, 0, 0, 0);
	func_2(iVar0, 3, 179, 1, 0, 0, 0);
	func_2(iVar0, 3, 180, 1, 0, 0, 0);
	func_2(iVar0, 4, 0, 1, 1, 0, 1);
	func_2(iVar0, 4, 1, 1, 1, 0, 1);
	func_2(iVar0, 4, 2, 1, 0, 0, 0);
	func_2(iVar0, 4, 4, 1, 1, 0, 1);
	func_2(iVar0, 4, 5, 1, 0, 0, 0);
	func_2(iVar0, 4, 6, 1, 0, 0, 0);
	func_2(iVar0, 4, 7, 1, 0, 0, 0);
	func_2(iVar0, 4, 8, 1, 0, 0, 0);
	func_2(iVar0, 4, 9, 1, 0, 0, 0);
	func_2(iVar0, 4, 10, 1, 0, 0, 0);
	func_2(iVar0, 4, 11, 1, 0, 0, 0);
	func_2(iVar0, 4, 12, 1, 0, 0, 0);
	func_2(iVar0, 4, 13, 1, 0, 0, 0);
	func_2(iVar0, 4, 14, 1, 0, 0, 0);
	func_2(iVar0, 4, 15, 1, 0, 0, 0);
	func_2(iVar0, 4, 16, 1, 0, 0, 0);
	func_2(iVar0, 4, 17, 1, 0, 0, 0);
	func_2(iVar0, 4, 18, 1, 0, 0, 0);
	func_2(iVar0, 4, 19, 1, 0, 0, 0);
	func_2(iVar0, 4, 20, 1, 0, 0, 0);
	func_2(iVar0, 4, 21, 1, 0, 0, 0);
	func_2(iVar0, 4, 22, 1, 0, 0, 0);
	func_2(iVar0, 4, 23, 1, 0, 0, 0);
	func_2(iVar0, 4, 24, 1, 0, 0, 0);
	func_2(iVar0, 4, 25, 1, 0, 0, 0);
	func_2(iVar0, 4, 26, 1, 0, 0, 0);
	func_2(iVar0, 4, 27, 1, 0, 0, 0);
	func_2(iVar0, 4, 28, 1, 0, 0, 0);
	func_2(iVar0, 4, 29, 1, 0, 0, 0);
	func_2(iVar0, 4, 30, 1, 0, 0, 0);
	func_2(iVar0, 4, 31, 1, 0, 0, 0);
	func_2(iVar0, 4, 32, 1, 0, 0, 0);
	func_2(iVar0, 4, 33, 1, 0, 0, 0);
	func_2(iVar0, 4, 34, 1, 0, 0, 0);
	func_2(iVar0, 4, 35, 1, 0, 0, 0);
	func_2(iVar0, 4, 36, 1, 0, 0, 0);
	func_2(iVar0, 4, 37, 1, 0, 0, 0);
	func_2(iVar0, 4, 38, 1, 0, 0, 0);
	func_2(iVar0, 4, 39, 1, 0, 0, 0);
	func_2(iVar0, 4, 40, 1, 0, 0, 0);
	func_2(iVar0, 4, 41, 1, 0, 0, 0);
	func_2(iVar0, 4, 42, 1, 0, 0, 0);
	func_2(iVar0, 4, 43, 1, 0, 0, 0);
	func_2(iVar0, 4, 44, 1, 0, 0, 0);
	func_2(iVar0, 4, 45, 1, 0, 0, 0);
	func_2(iVar0, 4, 46, 1, 0, 0, 0);
	func_2(iVar0, 4, 47, 1, 0, 0, 0);
	func_2(iVar0, 4, 48, 1, 0, 0, 0);
	func_2(iVar0, 4, 49, 1, 0, 0, 0);
	func_2(iVar0, 4, 50, 1, 0, 0, 0);
	func_2(iVar0, 4, 51, 1, 0, 0, 0);
	func_2(iVar0, 4, 52, 1, 0, 0, 0);
	func_2(iVar0, 4, 53, 1, 0, 0, 0);
	func_2(iVar0, 4, 54, 1, 0, 0, 0);
	func_2(iVar0, 4, 55, 1, 1, 0, 1);
	func_2(iVar0, 4, 56, 1, 0, 0, 0);
	func_2(iVar0, 4, 57, 1, 0, 0, 0);
	func_2(iVar0, 4, 58, 1, 0, 0, 0);
	func_2(iVar0, 4, 59, 1, 0, 0, 0);
	func_2(iVar0, 4, 60, 1, 0, 0, 0);
	func_2(iVar0, 4, 61, 1, 0, 0, 0);
	func_2(iVar0, 4, 62, 1, 0, 0, 0);
	func_2(iVar0, 4, 63, 1, 0, 0, 0);
	func_2(iVar0, 4, 64, 1, 0, 0, 0);
	func_2(iVar0, 4, 65, 1, 0, 0, 0);
	func_2(iVar0, 4, 66, 1, 0, 0, 0);
	func_2(iVar0, 4, 67, 1, 0, 0, 0);
	func_2(iVar0, 4, 68, 1, 0, 0, 0);
	func_2(iVar0, 4, 69, 1, 0, 0, 0);
	func_2(iVar0, 4, 70, 1, 0, 0, 0);
	func_2(iVar0, 4, 71, 1, 0, 0, 0);
	func_2(iVar0, 4, 72, 1, 1, 0, 1);
	func_2(iVar0, 4, 73, 1, 0, 0, 0);
	func_2(iVar0, 4, 74, 1, 0, 0, 0);
	func_2(iVar0, 4, 75, 1, 0, 0, 0);
	func_2(iVar0, 4, 76, 1, 0, 0, 0);
	func_2(iVar0, 4, 77, 1, 0, 0, 0);
	func_2(iVar0, 4, 78, 1, 0, 0, 0);
	func_2(iVar0, 4, 79, 1, 0, 0, 0);
	func_2(iVar0, 4, 80, 1, 0, 0, 0);
	func_2(iVar0, 4, 81, 1, 1, 0, 1);
	func_2(iVar0, 4, 82, 1, 0, 0, 0);
	func_2(iVar0, 4, 83, 1, 0, 0, 0);
	func_2(iVar0, 4, 84, 1, 1, 0, 1);
	func_2(iVar0, 4, 85, 1, 0, 0, 0);
	func_2(iVar0, 4, 86, 1, 0, 0, 0);
	func_2(iVar0, 4, 87, 1, 0, 0, 0);
	func_2(iVar0, 4, 88, 1, 0, 0, 0);
	func_2(iVar0, 4, 89, 1, 0, 0, 0);
	func_2(iVar0, 4, 90, 1, 0, 0, 0);
	func_2(iVar0, 4, 91, 1, 0, 0, 0);
	func_2(iVar0, 4, 92, 1, 0, 0, 0);
	func_2(iVar0, 4, 93, 1, 0, 0, 0);
	func_2(iVar0, 4, 94, 1, 0, 0, 0);
	func_2(iVar0, 4, 95, 1, 1, 0, 1);
	func_2(iVar0, 4, 96, 1, 0, 0, 0);
	func_2(iVar0, 4, 97, 1, 1, 0, 1);
	func_2(iVar0, 4, 98, 1, 0, 0, 0);
	func_2(iVar0, 4, 99, 1, 0, 0, 0);
	func_2(iVar0, 4, 100, 1, 0, 0, 0);
	func_2(iVar0, 4, 101, 1, 0, 0, 0);
	func_2(iVar0, 4, 102, 1, 0, 0, 0);
	func_2(iVar0, 4, 103, 1, 0, 0, 0);
	func_2(iVar0, 4, 104, 1, 0, 0, 0);
	func_2(iVar0, 4, 105, 1, 0, 0, 0);
	func_2(iVar0, 4, 106, 1, 0, 0, 0);
	func_2(iVar0, 4, 107, 1, 0, 0, 0);
	func_2(iVar0, 4, 108, 1, 0, 0, 0);
	func_2(iVar0, 4, 109, 1, 0, 0, 0);
	func_2(iVar0, 4, 110, 1, 0, 0, 0);
	func_2(iVar0, 4, 111, 1, 0, 0, 0);
	func_2(iVar0, 4, 112, 1, 1, 0, 1);
	func_2(iVar0, 6, 0, 1, 1, 0, 1);
	func_2(iVar0, 6, 1, 1, 0, 0, 0);
	func_2(iVar0, 6, 2, 1, 0, 0, 0);
	func_2(iVar0, 6, 3, 1, 0, 0, 0);
	func_2(iVar0, 6, 4, 1, 0, 0, 0);
	func_2(iVar0, 6, 5, 1, 0, 0, 0);
	func_2(iVar0, 6, 6, 1, 1, 0, 1);
	func_2(iVar0, 6, 7, 1, 1, 0, 1);
	func_2(iVar0, 6, 8, 1, 0, 0, 0);
	func_2(iVar0, 6, 9, 1, 0, 0, 0);
	func_2(iVar0, 6, 10, 1, 0, 0, 0);
	func_2(iVar0, 6, 11, 1, 0, 0, 0);
	func_2(iVar0, 6, 12, 1, 1, 0, 1);
	func_2(iVar0, 6, 13, 1, 0, 0, 0);
	func_2(iVar0, 6, 14, 1, 0, 0, 0);
	func_2(iVar0, 6, 15, 1, 0, 0, 0);
	func_2(iVar0, 6, 16, 1, 0, 0, 0);
	func_2(iVar0, 6, 17, 1, 0, 0, 0);
	func_2(iVar0, 6, 18, 1, 0, 0, 0);
	func_2(iVar0, 6, 19, 1, 0, 0, 0);
	func_2(iVar0, 6, 20, 1, 1, 0, 1);
	func_2(iVar0, 6, 21, 1, 0, 0, 0);
	func_2(iVar0, 6, 22, 1, 0, 0, 0);
	func_2(iVar0, 6, 23, 1, 0, 0, 0);
	func_2(iVar0, 6, 24, 1, 0, 0, 0);
	func_2(iVar0, 6, 25, 1, 0, 0, 0);
	func_2(iVar0, 6, 26, 1, 0, 0, 0);
	func_2(iVar0, 6, 27, 1, 0, 0, 0);
	func_2(iVar0, 6, 28, 1, 0, 0, 0);
	func_2(iVar0, 6, 29, 1, 0, 0, 0);
	func_2(iVar0, 6, 30, 1, 0, 0, 0);
	func_2(iVar0, 6, 31, 1, 0, 0, 0);
	func_2(iVar0, 6, 32, 1, 0, 0, 0);
	func_2(iVar0, 6, 33, 1, 0, 0, 0);
	func_2(iVar0, 6, 34, 1, 0, 0, 0);
	func_2(iVar0, 6, 35, 1, 0, 0, 0);
	func_2(iVar0, 6, 36, 1, 0, 0, 0);
	func_2(iVar0, 6, 37, 1, 0, 0, 0);
	func_2(iVar0, 6, 38, 1, 0, 0, 0);
	func_2(iVar0, 6, 39, 1, 0, 0, 0);
	func_2(iVar0, 6, 40, 1, 0, 0, 0);
	func_2(iVar0, 6, 41, 1, 0, 0, 0);
	func_2(iVar0, 6, 42, 1, 0, 0, 0);
	func_2(iVar0, 6, 43, 1, 0, 0, 0);
	func_2(iVar0, 6, 44, 1, 0, 0, 0);
	func_2(iVar0, 6, 45, 1, 0, 0, 0);
	func_2(iVar0, 6, 46, 1, 0, 0, 0);
	func_2(iVar0, 6, 47, 1, 0, 0, 0);
	func_2(iVar0, 6, 48, 1, 0, 0, 0);
	func_2(iVar0, 6, 49, 1, 0, 0, 0);
	func_2(iVar0, 6, 50, 1, 0, 0, 0);
	func_2(iVar0, 6, 51, 1, 0, 0, 0);
	func_2(iVar0, 6, 52, 1, 0, 0, 0);
	func_2(iVar0, 6, 53, 1, 0, 0, 0);
	func_2(iVar0, 6, 54, 1, 0, 0, 0);
	func_2(iVar0, 6, 55, 1, 0, 0, 0);
	func_2(iVar0, 6, 56, 1, 0, 0, 0);
	func_2(iVar0, 6, 57, 1, 0, 0, 0);
	func_2(iVar0, 6, 58, 1, 0, 0, 0);
	func_2(iVar0, 6, 59, 1, 0, 0, 0);
	func_2(iVar0, 6, 60, 1, 0, 0, 0);
	func_2(iVar0, 6, 61, 1, 0, 0, 0);
	func_2(iVar0, 6, 62, 1, 0, 0, 0);
	func_2(iVar0, 6, 63, 1, 0, 0, 0);
	func_2(iVar0, 6, 64, 1, 0, 0, 0);
	func_2(iVar0, 6, 65, 1, 0, 0, 0);
	func_2(iVar0, 6, 66, 1, 0, 0, 0);
	func_2(iVar0, 6, 67, 1, 0, 0, 0);
	func_2(iVar0, 6, 68, 1, 0, 0, 0);
	func_2(iVar0, 6, 69, 1, 0, 0, 0);
	func_2(iVar0, 6, 70, 1, 0, 0, 0);
	func_2(iVar0, 6, 71, 1, 0, 0, 0);
	func_2(iVar0, 6, 72, 1, 0, 0, 0);
	func_2(iVar0, 6, 73, 1, 0, 0, 0);
	func_2(iVar0, 6, 74, 1, 0, 0, 0);
	func_2(iVar0, 6, 75, 1, 0, 0, 0);
	func_2(iVar0, 6, 76, 1, 0, 0, 0);
	func_2(iVar0, 6, 77, 1, 0, 0, 0);
	func_2(iVar0, 6, 78, 1, 0, 0, 0);
	func_2(iVar0, 6, 79, 1, 0, 0, 0);
	func_2(iVar0, 6, 80, 1, 0, 0, 0);
	func_2(iVar0, 6, 81, 1, 0, 0, 0);
	func_2(iVar0, 6, 82, 1, 0, 0, 0);
	func_2(iVar0, 6, 83, 1, 0, 0, 0);
	func_2(iVar0, 6, 84, 1, 0, 0, 0);
	func_2(iVar0, 6, 85, 1, 0, 0, 0);
	func_2(iVar0, 6, 86, 1, 0, 0, 0);
	func_2(iVar0, 6, 87, 1, 0, 0, 0);
	func_2(iVar0, 6, 88, 1, 0, 0, 0);
	func_2(iVar0, 6, 89, 1, 0, 0, 0);
	func_2(iVar0, 6, 90, 1, 0, 0, 0);
	func_2(iVar0, 6, 91, 1, 0, 0, 0);
	func_2(iVar0, 6, 92, 1, 0, 0, 0);
	func_2(iVar0, 6, 93, 1, 0, 0, 0);
	func_2(iVar0, 6, 94, 1, 0, 0, 0);
	func_2(iVar0, 6, 95, 1, 0, 0, 0);
	func_2(iVar0, 6, 96, 1, 0, 0, 0);
	func_2(iVar0, 6, 97, 1, 0, 0, 0);
	func_2(iVar0, 6, 98, 1, 0, 0, 0);
	wait(0);
	func_2(iVar0, 5, 0, 1, 1, 0, 1);
	func_2(iVar0, 5, 1, 1, 0, 0, 0);
	func_2(iVar0, 5, 2, 1, 0, 0, 0);
	func_2(iVar0, 5, 3, 1, 0, 0, 0);
	func_2(iVar0, 5, 4, 1, 0, 0, 0);
	func_2(iVar0, 5, 5, 1, 0, 0, 0);
	func_2(iVar0, 5, 6, 1, 0, 0, 0);
	func_2(iVar0, 5, 7, 1, 0, 0, 0);
	func_2(iVar0, 5, 8, 1, 0, 0, 0);
	func_2(iVar0, 5, 9, 1, 0, 0, 0);
	func_2(iVar0, 5, 10, 1, 0, 0, 0);
	func_2(iVar0, 5, 11, 1, 0, 0, 0);
	func_2(iVar0, 5, 12, 1, 0, 0, 0);
	func_2(iVar0, 5, 13, 1, 0, 0, 0);
	func_2(iVar0, 8, 0, 1, 1, 0, 1);
	func_2(iVar0, 8, 1, 1, 0, 0, 0);
	func_2(iVar0, 8, 2, 1, 0, 0, 0);
	func_2(iVar0, 8, 3, 1, 0, 0, 0);
	func_2(iVar0, 8, 4, 1, 0, 0, 0);
	func_2(iVar0, 8, 5, 1, 0, 0, 0);
	func_2(iVar0, 8, 6, 1, 0, 0, 0);
	func_2(iVar0, 8, 7, 1, 0, 0, 0);
	func_2(iVar0, 8, 8, 1, 0, 0, 0);
	func_2(iVar0, 8, 9, 1, 0, 0, 0);
	func_2(iVar0, 8, 10, 1, 1, 0, 1);
	func_2(iVar0, 8, 11, 1, 0, 0, 0);
	func_2(iVar0, 8, 12, 1, 0, 0, 0);
	func_2(iVar0, 8, 13, 1, 0, 0, 0);
	func_2(iVar0, 8, 14, 1, 0, 0, 0);
	func_2(iVar0, 8, 15, 1, 0, 0, 0);
	func_2(iVar0, 8, 16, 1, 1, 0, 0);
	func_2(iVar0, 8, 17, 1, 0, 0, 0);
	func_2(iVar0, 8, 18, 1, 0, 0, 0);
	func_2(iVar0, 8, 19, 1, 0, 0, 0);
	func_2(iVar0, 8, 20, 1, 0, 0, 0);
	func_2(iVar0, 8, 21, 1, 0, 0, 0);
	func_2(iVar0, 8, 22, 1, 0, 0, 0);
	func_2(iVar0, 8, 23, 1, 0, 0, 0);
	func_2(iVar0, 9, 0, 1, 1, 0, 1);
	func_2(iVar0, 9, 1, 1, 0, 0, 0);
	func_2(iVar0, 9, 2, 1, 0, 0, 0);
	func_2(iVar0, 9, 3, 1, 0, 0, 0);
	func_2(iVar0, 9, 4, 1, 0, 0, 0);
	func_2(iVar0, 9, 5, 1, 0, 0, 0);
	func_2(iVar0, 9, 6, 1, 0, 0, 0);
	func_2(iVar0, 9, 7, 1, 0, 0, 0);
	func_2(iVar0, 9, 8, 1, 0, 0, 0);
	func_2(iVar0, 9, 9, 1, 0, 0, 0);
	func_2(iVar0, 9, 10, 1, 0, 0, 0);
	func_2(iVar0, 9, 11, 1, 0, 0, 0);
	func_2(iVar0, 9, 12, 1, 0, 0, 0);
	func_2(iVar0, 9, 13, 1, 0, 0, 0);
	func_2(iVar0, 9, 14, 1, 0, 0, 0);
	func_2(iVar0, 9, 15, 1, 0, 0, 0);
	func_2(iVar0, 9, 16, 1, 0, 0, 0);
	func_2(iVar0, 9, 17, 1, 0, 0, 0);
	func_2(iVar0, 9, 18, 1, 0, 0, 0);
	func_2(iVar0, 9, 19, 1, 0, 0, 0);
	func_2(iVar0, 10, 0, 1, 1, 0, 1);
	func_2(iVar0, 10, 1, 1, 0, 0, 0);
	func_2(iVar0, 10, 2, 1, 0, 0, 0);
	func_2(iVar0, 10, 3, 1, 0, 0, 0);
	func_2(iVar0, 10, 4, 1, 1, 0, 1);
	func_2(iVar0, 10, 5, 1, 0, 0, 0);
	func_2(iVar0, 10, 6, 1, 0, 0, 0);
	func_2(iVar0, 10, 7, 1, 0, 0, 0);
	func_2(iVar0, 10, 8, 1, 0, 0, 0);
	func_2(iVar0, 10, 9, 1, 0, 0, 0);
	func_2(iVar0, 10, 10, 1, 0, 0, 0);
	func_2(iVar0, 10, 11, 1, 0, 0, 0);
	func_2(iVar0, 10, 12, 1, 0, 0, 0);
	func_2(iVar0, 10, 13, 1, 0, 0, 0);
	func_2(iVar0, 10, 14, 1, 0, 0, 0);
	func_2(iVar0, 10, 15, 1, 0, 0, 0);
	func_2(iVar0, 10, 16, 1, 0, 0, 0);
	func_2(iVar0, 10, 17, 1, 0, 0, 0);
	func_2(iVar0, 10, 18, 1, 0, 0, 0);
	func_2(iVar0, 10, 19, 1, 0, 0, 0);
	func_2(iVar0, 10, 20, 1, 0, 0, 0);
	func_2(iVar0, 10, 21, 1, 0, 0, 0);
	func_2(iVar0, 10, 22, 1, 0, 0, 0);
	func_2(iVar0, 10, 23, 1, 0, 0, 0);
	func_2(iVar0, 10, 24, 1, 0, 0, 0);
	func_2(iVar0, 10, 25, 1, 0, 0, 0);
	func_2(iVar0, 10, 26, 1, 0, 0, 0);
	func_2(iVar0, 10, 27, 1, 0, 0, 0);
	func_2(iVar0, 10, 28, 1, 0, 0, 0);
	func_2(iVar0, 10, 29, 1, 0, 0, 0);
	func_2(iVar0, 10, 30, 1, 0, 0, 0);
	func_2(iVar0, 10, 31, 1, 0, 0, 0);
	func_2(iVar0, 10, 32, 1, 0, 0, 0);
	func_2(iVar0, 10, 33, 1, 0, 0, 0);
	func_2(iVar0, 10, 34, 1, 0, 0, 0);
	func_2(iVar0, 10, 35, 1, 0, 0, 0);
	func_2(iVar0, 10, 36, 1, 0, 0, 0);
	func_2(iVar0, 10, 37, 1, 0, 0, 0);
	func_2(iVar0, 10, 38, 1, 0, 0, 0);
	func_2(iVar0, 10, 39, 1, 0, 0, 0);
	func_2(iVar0, 10, 40, 1, 0, 0, 0);
	func_2(iVar0, 10, 41, 1, 0, 0, 0);
	func_2(iVar0, 10, 42, 1, 0, 0, 0);
	func_2(iVar0, 10, 43, 1, 0, 0, 0);
	func_2(iVar0, 10, 44, 1, 0, 0, 0);
	func_2(iVar0, 10, 45, 1, 0, 0, 0);
	func_2(iVar0, 10, 46, 1, 0, 0, 0);
	func_2(iVar0, 10, 47, 1, 0, 0, 0);
	func_2(iVar0, 1, 0, 1, 1, 0, 0);
	func_2(iVar0, 1, 1, 1, 1, 0, 0);
	func_2(iVar0, 1, 2, 1, 1, 0, 0);
	func_2(iVar0, 1, 3, 1, 1, 0, 0);
	func_2(iVar0, 7, 0, 1, 1, 0, 0);
	func_2(iVar0, 11, 0, 1, 1, 0, 1);
	func_2(iVar0, 11, 1, 1, 1, 0, 1);
	func_2(iVar0, 11, 2, 1, 1, 0, 1);
	func_2(iVar0, 11, 3, 1, 1, 0, 1);
	func_2(iVar0, 11, 4, 1, 1, 0, 1);
	func_2(iVar0, 11, 5, 1, 1, 0, 1);
	func_2(iVar0, 11, 6, 1, 1, 0, 1);
	func_2(iVar0, 11, 7, 1, 1, 0, 1);
	func_2(iVar0, 11, 8, 1, 0, 0, 0);
	func_2(iVar0, 11, 9, 1, 0, 0, 0);
	func_2(iVar0, 11, 10, 1, 0, 0, 0);
	func_2(iVar0, 11, 11, 1, 0, 0, 0);
	func_2(iVar0, 11, 12, 1, 0, 0, 0);
	func_2(iVar0, 11, 13, 1, 0, 0, 0);
	func_2(iVar0, 11, 14, 1, 0, 0, 0);
	func_2(iVar0, 11, 15, 1, 0, 0, 0);
	func_2(iVar0, 11, 16, 1, 0, 0, 0);
	func_2(iVar0, 11, 17, 1, 0, 0, 0);
	func_2(iVar0, 11, 18, 1, 0, 0, 0);
	func_2(iVar0, 11, 19, 1, 0, 0, 0);
	func_2(iVar0, 11, 20, 1, 0, 0, 0);
	func_2(iVar0, 11, 21, 1, 0, 0, 0);
	func_2(iVar0, 11, 22, 1, 0, 0, 0);
	func_2(iVar0, 11, 23, 1, 0, 0, 0);
	func_2(iVar0, 11, 24, 1, 0, 0, 0);
	func_2(iVar0, 11, 25, 1, 0, 0, 0);
	func_2(iVar0, 11, 26, 1, 0, 0, 0);
	func_2(iVar0, 11, 27, 1, 0, 0, 0);
	func_2(iVar0, 11, 28, 1, 1, 0, 1);
	func_2(iVar0, 11, 29, 1, 0, 0, 0);
	func_2(iVar0, 11, 30, 1, 0, 0, 0);
	func_2(iVar0, 11, 31, 1, 0, 0, 0);
	func_2(iVar0, 11, 32, 1, 0, 0, 0);
	func_2(iVar0, 11, 33, 1, 0, 0, 0);
	func_2(iVar0, 11, 34, 1, 0, 0, 0);
	func_2(iVar0, 11, 35, 1, 0, 0, 0);
	func_2(iVar0, 11, 36, 1, 0, 0, 0);
	func_2(iVar0, 11, 37, 1, 0, 0, 0);
	func_2(iVar0, 11, 38, 1, 0, 0, 0);
	func_2(iVar0, 11, 39, 1, 0, 0, 0);
	func_2(iVar0, 11, 40, 1, 0, 0, 0);
	func_2(iVar0, 11, 41, 1, 0, 0, 0);
	func_2(iVar0, 11, 42, 1, 0, 0, 0);
	func_2(iVar0, 11, 43, 1, 0, 0, 0);
	func_2(iVar0, 11, 44, 1, 1, 0, 1);
	func_2(iVar0, 12, 0, 1, 1, 0, 1);
	func_2(iVar0, 12, 1, 1, 0, 0, 0);
	func_2(iVar0, 12, 2, 1, 0, 0, 0);
	func_2(iVar0, 12, 3, 1, 0, 0, 0);
	func_2(iVar0, 12, 4, 1, 0, 0, 0);
	func_2(iVar0, 12, 5, 1, 0, 0, 0);
	func_2(iVar0, 12, 6, 1, 1, 0, 1);
	func_2(iVar0, 12, 7, 1, 1, 0, 0);
	func_2(iVar0, 12, 8, 1, 0, 0, 0);
	func_2(iVar0, 12, 9, 1, 0, 0, 0);
	func_2(iVar0, 12, 11, 1, 0, 0, 0);
	func_2(iVar0, 12, 10, 1, 0, 0, 0);
	func_2(iVar0, 12, 12, 1, 0, 0, 0);
	func_2(iVar0, 12, 13, 1, 0, 0, 0);
	func_2(iVar0, 12, 14, 1, 0, 0, 0);
	func_2(iVar0, 12, 15, 1, 0, 0, 0);
	func_2(iVar0, 12, 16, 0, 0, 0, 0);
	func_2(iVar0, 12, 17, 1, 0, 0, 0);
	func_2(iVar0, 12, 18, 1, 0, 0, 0);
	func_2(iVar0, 12, 19, 1, 0, 0, 0);
	func_2(iVar0, 12, 20, 0, 0, 0, 0);
	func_2(iVar0, 12, 21, 0, 0, 0, 0);
	func_2(iVar0, 12, 22, 0, 0, 0, 0);
	func_2(iVar0, 12, 23, 1, 0, 0, 0);
	func_2(iVar0, 12, 24, 1, 0, 0, 0);
	func_2(iVar0, 12, 25, 1, 1, 0, 1);
	func_2(iVar0, 12, 27, 1, 1, 0, 1);
	func_2(iVar0, 12, 28, 1, 0, 0, 0);
	func_2(iVar0, 12, 29, 1, 0, 0, 0);
	func_2(iVar0, 12, 30, 1, 0, 0, 0);
	func_2(iVar0, 12, 31, 1, 0, 0, 0);
	func_2(iVar0, 12, 32, 1, 1, 0, 1);
	func_2(iVar0, 12, 33, 1, 1, 0, 1);
	func_2(iVar0, 12, 34, 1, 1, 0, 1);
	func_2(iVar0, 12, 35, 1, 1, 0, 1);
	func_2(iVar0, 12, 36, 1, 1, 0, 1);
	func_2(iVar0, 12, 37, 1, 0, 0, 0);
	func_2(iVar0, 12, 38, 1, 0, 0, 0);
	func_2(iVar0, 12, 39, 1, 0, 0, 0);
	func_2(iVar0, 12, 40, 1, 0, 0, 0);
	func_2(iVar0, 12, 41, 1, 0, 0, 0);
	func_2(iVar0, 12, 42, 1, 0, 0, 0);
	func_2(iVar0, 12, 43, 1, 0, 0, 0);
	func_2(iVar0, 12, 44, 1, 0, 0, 0);
	func_2(iVar0, 12, 45, 1, 0, 0, 0);
	func_2(iVar0, 12, 46, 1, 0, 0, 0);
	func_2(iVar0, 12, 47, 1, 0, 0, 0);
	func_2(iVar0, 12, 48, 1, 0, 0, 0);
	func_2(iVar0, 12, 49, 1, 0, 0, 0);
	func_2(iVar0, 12, 50, 1, 0, 0, 0);
	func_2(iVar0, 12, 51, 1, 0, 0, 0);
	func_2(iVar0, 12, 52, 1, 1, 0, 1);
	func_2(iVar0, 13, 0, 1, 0, 0, 0);
	func_2(iVar0, 13, 1, 1, 0, 0, 0);
	func_2(iVar0, 13, 2, 1, 0, 0, 0);
	func_2(iVar0, 13, 3, 1, 0, 0, 0);
	func_2(iVar0, 13, 4, 1, 0, 0, 0);
	func_2(iVar0, 13, 5, 1, 0, 0, 0);
	func_2(iVar0, 13, 6, 1, 0, 0, 0);
	func_2(iVar0, 13, 7, 1, 0, 0, 0);
	func_2(iVar0, 13, 8, 1, 0, 0, 0);
	func_2(iVar0, 13, 9, 1, 0, 0, 0);
	func_2(iVar0, 14, 10, 1, 0, 0, 0);
	func_2(iVar0, 14, 11, 1, 0, 0, 0);
	func_2(iVar0, 14, 58, 1, 0, 0, 0);
	func_2(iVar0, 14, 14, 1, 0, 0, 0);
	func_2(iVar0, 14, 62, 1, 0, 0, 0);
	func_2(iVar0, 14, 63, 1, 0, 0, 0);
	func_2(iVar0, 14, 64, 1, 0, 0, 0);
	func_2(iVar0, 14, 65, 1, 0, 0, 0);
	func_2(iVar0, 14, 66, 1, 0, 0, 0);
	func_2(iVar0, 14, 67, 1, 0, 0, 0);
	func_2(iVar0, 14, 68, 1, 0, 0, 0);
	func_2(iVar0, 14, 69, 1, 0, 0, 0);
	func_2(iVar0, 14, 18, 1, 0, 0, 0);
	func_2(iVar0, 14, 112, 1, 1, 0, 1);
	func_2(iVar0, 14, 59, 1, 0, 0, 0);
	func_2(iVar0, 14, 20, 1, 0, 0, 0);
	func_2(iVar0, 14, 21, 1, 0, 0, 0);
	func_2(iVar0, 14, 22, 1, 0, 0, 0);
	func_2(iVar0, 14, 23, 1, 0, 0, 0);
	func_2(iVar0, 14, 24, 1, 0, 0, 0);
	func_2(iVar0, 14, 25, 1, 0, 0, 0);
	func_2(iVar0, 14, 26, 1, 0, 0, 0);
	func_2(iVar0, 14, 27, 1, 0, 0, 0);
	func_2(iVar0, 14, 28, 1, 0, 0, 0);
	func_2(iVar0, 14, 15, 1, 0, 0, 0);
	func_2(iVar0, 14, 60, 1, 0, 0, 0);
	func_2(iVar0, 14, 61, 1, 0, 0, 0);
	func_2(iVar0, 14, 70, 1, 0, 0, 0);
	func_2(iVar0, 14, 71, 1, 0, 0, 0);
	func_2(iVar0, 14, 72, 1, 0, 0, 0);
	func_2(iVar0, 14, 73, 1, 0, 0, 0);
	func_2(iVar0, 14, 74, 1, 0, 0, 0);
	func_2(iVar0, 14, 75, 1, 0, 0, 0);
	func_2(iVar0, 14, 76, 1, 0, 0, 0);
	func_2(iVar0, 14, 77, 1, 0, 0, 0);
	func_2(iVar0, 14, 78, 1, 0, 0, 0);
	func_2(iVar0, 14, 79, 1, 1, 0, 1);
	func_2(iVar0, 14, 80, 1, 0, 0, 0);
	func_2(iVar0, 14, 81, 1, 0, 0, 0);
	func_2(iVar0, 14, 82, 1, 0, 0, 0);
	func_2(iVar0, 14, 83, 1, 0, 0, 0);
	func_2(iVar0, 14, 84, 1, 0, 0, 0);
	func_2(iVar0, 14, 85, 1, 0, 0, 0);
	func_2(iVar0, 14, 86, 1, 0, 0, 0);
	func_2(iVar0, 14, 87, 1, 0, 0, 0);
	func_2(iVar0, 14, 88, 1, 0, 0, 0);
	func_2(iVar0, 14, 89, 1, 0, 0, 0);
	func_2(iVar0, 14, 90, 1, 0, 0, 0);
	func_2(iVar0, 14, 91, 1, 0, 0, 0);
	func_2(iVar0, 14, 92, 1, 0, 0, 0);
	func_2(iVar0, 14, 93, 1, 0, 0, 0);
	func_2(iVar0, 14, 94, 1, 0, 0, 0);
	func_2(iVar0, 14, 95, 1, 0, 0, 0);
	func_2(iVar0, 14, 96, 1, 0, 0, 0);
	func_2(iVar0, 14, 97, 1, 0, 0, 0);
	func_2(iVar0, 14, 98, 1, 0, 0, 0);
	func_2(iVar0, 14, 99, 1, 0, 0, 0);
	func_2(iVar0, 14, 100, 1, 0, 0, 0);
	func_2(iVar0, 14, 101, 1, 0, 0, 0);
	func_2(iVar0, 14, 102, 1, 0, 0, 0);
	func_2(iVar0, 14, 103, 1, 0, 0, 0);
	func_2(iVar0, 14, 104, 1, 0, 0, 0);
	func_2(iVar0, 14, 105, 1, 0, 0, 0);
	func_2(iVar0, 14, 106, 1, 0, 0, 0);
	func_2(iVar0, 14, 107, 1, 0, 0, 0);
	func_2(iVar0, 14, 108, 1, 0, 0, 0);
	func_2(iVar0, 14, 109, 1, 0, 0, 0);
	func_2(iVar0, 14, 110, 1, 0, 0, 0);
	func_2(iVar0, 14, 13, 1, 0, 0, 0);
	func_2(iVar0, 14, 16, 1, 0, 0, 0);
	func_2(iVar0, 14, 17, 1, 0, 0, 0);
	func_2(iVar0, 14, 19, 1, 0, 0, 0);
	func_2(iVar0, 14, 29, 1, 0, 0, 0);
	func_2(iVar0, 14, 30, 1, 0, 0, 0);
	func_2(iVar0, 14, 31, 0, 0, 0, 0);
	func_2(iVar0, 14, 32, 0, 0, 0, 0);
	func_2(iVar0, 14, 33, 0, 0, 0, 0);
	func_2(iVar0, 14, 34, 0, 0, 0, 0);
	func_2(iVar0, 14, 35, 0, 0, 0, 0);
	func_2(iVar0, 14, 36, 0, 0, 0, 0);
	func_2(iVar0, 14, 37, 0, 0, 0, 0);
	func_2(iVar0, 14, 38, 0, 0, 0, 0);
	func_2(iVar0, 14, 39, 0, 0, 0, 0);
	func_2(iVar0, 14, 40, 0, 0, 0, 0);
	func_2(iVar0, 14, 41, 0, 0, 0, 0);
	func_2(iVar0, 14, 42, 0, 0, 0, 0);
	func_2(iVar0, 14, 43, 0, 0, 0, 0);
	func_2(iVar0, 14, 44, 0, 0, 0, 0);
	func_2(iVar0, 14, 45, 1, 0, 0, 0);
	func_2(iVar0, 14, 46, 1, 0, 0, 0);
	func_2(iVar0, 14, 47, 1, 0, 0, 0);
	func_2(iVar0, 14, 48, 1, 0, 0, 0);
	func_2(iVar0, 14, 49, 1, 0, 0, 0);
	func_2(iVar0, 14, 50, 1, 0, 0, 0);
	func_2(iVar0, 14, 51, 1, 0, 0, 0);
	func_2(iVar0, 14, 52, 1, 0, 0, 0);
	func_2(iVar0, 14, 53, 1, 0, 0, 0);
	func_2(iVar0, 14, 54, 1, 0, 0, 0);
	func_2(iVar0, 14, 55, 1, 0, 0, 0);
	func_2(iVar0, 14, 56, 1, 0, 0, 0);
	func_2(iVar0, 14, 57, 1, 0, 0, 0);
	wait(0);
	iVar0 = func_88(2);
	func_2(iVar0, 13, 31, 1, 1, 0, 1);
	func_2(iVar0, 14, 0, 1, 1, 0, 1);
	func_2(iVar0, 14, 1, 1, 1, 0, 1);
	func_2(iVar0, 14, 2, 1, 1, 0, 1);
	func_2(iVar0, 14, 3, 1, 1, 0, 1);
	func_2(iVar0, 14, 4, 1, 1, 0, 1);
	func_2(iVar0, 14, 5, 1, 1, 0, 1);
	func_2(iVar0, 14, 6, 1, 1, 0, 1);
	func_2(iVar0, 14, 7, 1, 1, 0, 1);
	func_2(iVar0, 14, 8, 1, 1, 0, 1);
	func_2(iVar0, 0, 0, 1, 1, 0, 0);
	func_2(iVar0, 0, 1, 1, 1, 0, 0);
	func_2(iVar0, 0, 2, 1, 1, 0, 0);
	func_2(iVar0, 0, 3, 1, 1, 0, 0);
	func_2(iVar0, 0, 4, 1, 1, 0, 0);
	func_2(iVar0, 0, 5, 1, 1, 0, 0);
	func_2(iVar0, 0, 6, 1, 1, 0, 0);
	func_2(iVar0, 2, 0, 1, 1, 0, 0);
	func_2(iVar0, 2, 1, 1, 1, 0, 0);
	func_2(iVar0, 2, 2, 1, 1, 0, 0);
	func_2(iVar0, 2, 4, 0, 0, 0, 0);
	func_2(iVar0, 2, 5, 1, 1, 0, 0);
	func_2(iVar0, 2, 6, 1, 1, 0, 0);
	func_2(iVar0, 2, 7, 1, 1, 0, 0);
	func_2(iVar0, 2, 8, 1, 1, 0, 0);
	func_2(iVar0, 3, 0, 1, 1, 0, 1);
	func_2(iVar0, 3, 1, 1, 0, 0, 0);
	func_2(iVar0, 3, 2, 1, 1, 0, 1);
	func_2(iVar0, 3, 3, 1, 0, 0, 0);
	func_2(iVar0, 3, 4, 1, 0, 0, 0);
	func_2(iVar0, 3, 5, 1, 0, 0, 0);
	func_2(iVar0, 3, 6, 1, 0, 0, 0);
	func_2(iVar0, 3, 7, 1, 0, 0, 0);
	func_2(iVar0, 3, 8, 1, 0, 0, 0);
	func_2(iVar0, 3, 9, 1, 0, 0, 0);
	func_2(iVar0, 3, 10, 1, 0, 0, 0);
	func_2(iVar0, 3, 11, 1, 0, 0, 0);
	func_2(iVar0, 3, 12, 1, 0, 0, 0);
	func_2(iVar0, 3, 13, 1, 0, 0, 0);
	func_2(iVar0, 3, 14, 1, 0, 0, 0);
	func_2(iVar0, 3, 15, 1, 0, 0, 0);
	func_2(iVar0, 3, 16, 1, 0, 0, 0);
	func_2(iVar0, 3, 17, 1, 0, 0, 0);
	func_2(iVar0, 3, 18, 1, 0, 0, 0);
	func_2(iVar0, 3, 19, 1, 0, 0, 0);
	func_2(iVar0, 3, 20, 1, 0, 0, 0);
	func_2(iVar0, 3, 21, 1, 0, 0, 0);
	func_2(iVar0, 3, 27, 1, 0, 0, 0);
	func_2(iVar0, 3, 28, 1, 0, 0, 0);
	func_2(iVar0, 3, 29, 1, 0, 0, 0);
	func_2(iVar0, 3, 30, 1, 0, 0, 0);
	func_2(iVar0, 3, 31, 1, 0, 0, 0);
	func_2(iVar0, 3, 32, 1, 0, 0, 0);
	func_2(iVar0, 3, 33, 1, 0, 0, 0);
	func_2(iVar0, 3, 34, 1, 0, 0, 0);
	func_2(iVar0, 3, 35, 1, 0, 0, 0);
	func_2(iVar0, 3, 36, 1, 0, 0, 0);
	func_2(iVar0, 3, 37, 1, 0, 0, 0);
	func_2(iVar0, 3, 38, 1, 0, 0, 0);
	func_2(iVar0, 3, 39, 1, 0, 0, 0);
	func_2(iVar0, 3, 40, 1, 0, 0, 0);
	func_2(iVar0, 3, 41, 1, 0, 0, 0);
	func_2(iVar0, 3, 42, 1, 0, 0, 0);
	func_2(iVar0, 3, 43, 1, 0, 0, 0);
	func_2(iVar0, 3, 44, 1, 0, 0, 0);
	func_2(iVar0, 3, 45, 1, 0, 0, 0);
	func_2(iVar0, 3, 46, 1, 0, 0, 0);
	func_2(iVar0, 3, 47, 1, 0, 0, 0);
	func_2(iVar0, 3, 48, 1, 0, 0, 0);
	func_2(iVar0, 3, 49, 1, 0, 0, 0);
	func_2(iVar0, 3, 50, 1, 0, 0, 0);
	func_2(iVar0, 3, 51, 1, 0, 0, 0);
	func_2(iVar0, 3, 52, 1, 0, 0, 0);
	func_2(iVar0, 3, 53, 1, 0, 0, 0);
	func_2(iVar0, 3, 54, 1, 0, 0, 0);
	func_2(iVar0, 3, 55, 1, 1, 0, 1);
	func_2(iVar0, 3, 56, 1, 0, 0, 0);
	func_2(iVar0, 3, 57, 1, 0, 0, 0);
	func_2(iVar0, 3, 58, 1, 0, 0, 0);
	func_2(iVar0, 3, 59, 1, 0, 0, 0);
	func_2(iVar0, 3, 60, 1, 0, 0, 0);
	func_2(iVar0, 3, 61, 1, 0, 0, 0);
	func_2(iVar0, 3, 62, 1, 0, 0, 0);
	func_2(iVar0, 3, 63, 1, 0, 0, 0);
	func_2(iVar0, 3, 64, 1, 0, 0, 0);
	func_2(iVar0, 3, 65, 1, 1, 0, 1);
	func_2(iVar0, 3, 66, 1, 0, 0, 0);
	func_2(iVar0, 3, 67, 1, 0, 0, 0);
	func_2(iVar0, 3, 68, 1, 0, 0, 0);
	func_2(iVar0, 3, 69, 1, 0, 0, 0);
	func_2(iVar0, 3, 70, 1, 0, 0, 0);
	func_2(iVar0, 3, 71, 1, 0, 0, 0);
	func_2(iVar0, 3, 72, 1, 0, 0, 0);
	func_2(iVar0, 3, 73, 1, 0, 0, 0);
	func_2(iVar0, 3, 74, 1, 0, 0, 0);
	func_2(iVar0, 3, 75, 1, 0, 0, 0);
	func_2(iVar0, 3, 79, 1, 0, 0, 0);
	func_2(iVar0, 3, 80, 1, 0, 0, 0);
	func_2(iVar0, 3, 81, 1, 0, 0, 0);
	func_2(iVar0, 3, 82, 1, 0, 0, 0);
	func_2(iVar0, 3, 83, 1, 0, 0, 0);
	func_2(iVar0, 3, 84, 1, 0, 0, 0);
	func_2(iVar0, 3, 85, 1, 0, 0, 0);
	func_2(iVar0, 3, 86, 1, 0, 0, 0);
	func_2(iVar0, 3, 87, 1, 0, 0, 0);
	func_2(iVar0, 3, 88, 1, 0, 0, 0);
	func_2(iVar0, 3, 89, 1, 0, 0, 0);
	func_2(iVar0, 3, 90, 1, 0, 0, 0);
	func_2(iVar0, 3, 91, 1, 0, 0, 0);
	func_2(iVar0, 3, 92, 1, 0, 0, 0);
	func_2(iVar0, 3, 93, 1, 0, 0, 0);
	func_2(iVar0, 3, 94, 1, 0, 0, 0);
	func_2(iVar0, 3, 95, 1, 0, 0, 0);
	func_2(iVar0, 3, 96, 1, 1, 0, 1);
	func_2(iVar0, 3, 97, 1, 0, 0, 0);
	func_2(iVar0, 3, 99, 1, 0, 0, 0);
	func_2(iVar0, 3, 100, 1, 0, 0, 0);
	func_2(iVar0, 3, 101, 1, 0, 0, 0);
	func_2(iVar0, 3, 102, 1, 0, 0, 0);
	func_2(iVar0, 3, 103, 1, 0, 0, 0);
	func_2(iVar0, 3, 104, 1, 0, 0, 0);
	func_2(iVar0, 3, 105, 1, 0, 0, 0);
	func_2(iVar0, 3, 106, 1, 0, 0, 0);
	func_2(iVar0, 3, 107, 1, 0, 0, 0);
	func_2(iVar0, 3, 108, 1, 0, 0, 0);
	func_2(iVar0, 3, 109, 1, 0, 0, 0);
	func_2(iVar0, 3, 110, 1, 0, 0, 0);
	func_2(iVar0, 3, 111, 1, 0, 0, 0);
	func_2(iVar0, 3, 112, 1, 0, 0, 0);
	func_2(iVar0, 3, 113, 1, 0, 0, 0);
	func_2(iVar0, 3, 114, 1, 0, 0, 0);
	func_2(iVar0, 3, 115, 1, 0, 0, 0);
	func_2(iVar0, 3, 116, 1, 0, 0, 0);
	func_2(iVar0, 3, 117, 1, 0, 0, 0);
	func_2(iVar0, 3, 118, 1, 0, 0, 0);
	func_2(iVar0, 3, 119, 1, 0, 0, 0);
	func_2(iVar0, 3, 120, 1, 0, 0, 0);
	func_2(iVar0, 3, 121, 1, 0, 0, 0);
	func_2(iVar0, 3, 122, 1, 0, 0, 0);
	func_2(iVar0, 3, 123, 1, 0, 0, 0);
	func_2(iVar0, 3, 125, 1, 0, 0, 0);
	func_2(iVar0, 3, 126, 1, 0, 0, 0);
	func_2(iVar0, 3, 127, 1, 0, 0, 0);
	func_2(iVar0, 3, 128, 1, 0, 0, 0);
	func_2(iVar0, 3, 129, 1, 0, 0, 0);
	func_2(iVar0, 3, 130, 1, 0, 0, 0);
	func_2(iVar0, 3, 131, 1, 0, 0, 0);
	func_2(iVar0, 3, 132, 1, 0, 0, 0);
	func_2(iVar0, 3, 133, 1, 0, 0, 0);
	func_2(iVar0, 3, 134, 1, 0, 0, 0);
	func_2(iVar0, 3, 135, 1, 0, 0, 0);
	func_2(iVar0, 3, 136, 1, 0, 0, 0);
	func_2(iVar0, 3, 137, 1, 0, 0, 0);
	func_2(iVar0, 3, 138, 1, 0, 0, 0);
	func_2(iVar0, 3, 139, 1, 0, 0, 0);
	func_2(iVar0, 3, 140, 1, 0, 0, 0);
	func_2(iVar0, 3, 141, 1, 0, 0, 0);
	func_2(iVar0, 3, 142, 1, 0, 0, 0);
	func_2(iVar0, 3, 143, 1, 0, 0, 0);
	func_2(iVar0, 3, 144, 1, 0, 0, 0);
	func_2(iVar0, 3, 145, 1, 0, 0, 0);
	func_2(iVar0, 3, 146, 1, 0, 0, 0);
	func_2(iVar0, 3, 147, 1, 0, 0, 0);
	func_2(iVar0, 3, 148, 1, 0, 0, 0);
	func_2(iVar0, 3, 149, 1, 0, 0, 0);
	func_2(iVar0, 3, 150, 1, 0, 0, 0);
	func_2(iVar0, 3, 151, 1, 0, 0, 0);
	func_2(iVar0, 3, 152, 1, 0, 0, 0);
	func_2(iVar0, 3, 153, 1, 0, 0, 0);
	func_2(iVar0, 3, 154, 1, 0, 0, 0);
	func_2(iVar0, 3, 155, 1, 0, 0, 0);
	func_2(iVar0, 3, 156, 1, 0, 0, 0);
	func_2(iVar0, 3, 157, 1, 1, 0, 1);
	func_2(iVar0, 3, 158, 1, 0, 0, 0);
	func_2(iVar0, 3, 159, 1, 0, 0, 0);
	func_2(iVar0, 3, 160, 1, 0, 0, 0);
	func_2(iVar0, 3, 161, 1, 0, 0, 0);
	func_2(iVar0, 3, 162, 1, 0, 0, 0);
	func_2(iVar0, 3, 163, 1, 0, 0, 0);
	func_2(iVar0, 3, 164, 1, 0, 0, 0);
	func_2(iVar0, 3, 165, 1, 0, 0, 0);
	func_2(iVar0, 3, 166, 1, 0, 0, 0);
	func_2(iVar0, 3, 167, 1, 0, 0, 0);
	func_2(iVar0, 3, 168, 1, 0, 0, 0);
	func_2(iVar0, 3, 169, 1, 0, 0, 0);
	func_2(iVar0, 3, 170, 1, 0, 0, 0);
	func_2(iVar0, 3, 171, 1, 0, 0, 0);
	func_2(iVar0, 3, 172, 1, 0, 0, 0);
	func_2(iVar0, 3, 173, 1, 0, 0, 0);
	func_2(iVar0, 3, 174, 1, 0, 0, 0);
	func_2(iVar0, 3, 175, 1, 0, 0, 0);
	func_2(iVar0, 3, 176, 1, 0, 0, 0);
	func_2(iVar0, 3, 177, 1, 0, 0, 0);
	func_2(iVar0, 3, 178, 1, 0, 0, 0);
	func_2(iVar0, 3, 179, 1, 0, 0, 0);
	func_2(iVar0, 3, 180, 1, 0, 0, 0);
	func_2(iVar0, 3, 181, 1, 0, 0, 0);
	func_2(iVar0, 3, 182, 1, 0, 0, 0);
	func_2(iVar0, 3, 183, 1, 0, 0, 0);
	func_2(iVar0, 3, 184, 1, 0, 0, 0);
	func_2(iVar0, 3, 185, 1, 0, 0, 0);
	func_2(iVar0, 3, 186, 1, 0, 0, 0);
	func_2(iVar0, 3, 187, 1, 0, 0, 0);
	func_2(iVar0, 3, 188, 1, 0, 0, 0);
	func_2(iVar0, 3, 189, 1, 0, 0, 0);
	func_2(iVar0, 3, 190, 1, 0, 0, 0);
	func_2(iVar0, 3, 191, 1, 0, 0, 0);
	func_2(iVar0, 3, 192, 1, 0, 0, 0);
	func_2(iVar0, 3, 193, 1, 0, 0, 0);
	func_2(iVar0, 3, 194, 1, 0, 0, 0);
	func_2(iVar0, 3, 195, 1, 0, 0, 0);
	func_2(iVar0, 3, 196, 1, 0, 0, 0);
	func_2(iVar0, 3, 197, 1, 0, 0, 0);
	func_2(iVar0, 3, 198, 1, 0, 0, 0);
	func_2(iVar0, 3, 199, 1, 0, 0, 0);
	func_2(iVar0, 3, 200, 1, 0, 0, 0);
	func_2(iVar0, 3, 201, 1, 0, 0, 0);
	func_2(iVar0, 3, 202, 1, 0, 0, 0);
	func_2(iVar0, 3, 203, 1, 0, 0, 0);
	func_2(iVar0, 3, 204, 1, 0, 0, 0);
	func_2(iVar0, 3, 205, 1, 0, 0, 0);
	func_2(iVar0, 3, 206, 1, 0, 0, 0);
	func_2(iVar0, 3, 207, 1, 0, 0, 0);
	func_2(iVar0, 3, 208, 1, 0, 0, 0);
	func_2(iVar0, 3, 209, 1, 0, 0, 0);
	func_2(iVar0, 3, 210, 1, 0, 0, 0);
	func_2(iVar0, 3, 211, 1, 0, 0, 0);
	func_2(iVar0, 3, 212, 1, 0, 0, 0);
	func_2(iVar0, 3, 213, 1, 0, 0, 0);
	func_2(iVar0, 3, 214, 1, 0, 0, 0);
	func_2(iVar0, 3, 215, 1, 0, 0, 0);
	func_2(iVar0, 3, 216, 1, 0, 0, 0);
	func_2(iVar0, 3, 217, 1, 0, 0, 0);
	func_2(iVar0, 3, 218, 1, 0, 0, 0);
	func_2(iVar0, 3, 219, 1, 0, 0, 0);
	func_2(iVar0, 3, 220, 1, 0, 0, 0);
	func_2(iVar0, 3, 221, 1, 0, 0, 0);
	func_2(iVar0, 3, 222, 1, 0, 0, 0);
	func_2(iVar0, 3, 223, 1, 0, 0, 0);
	func_2(iVar0, 3, 224, 1, 0, 0, 0);
	func_2(iVar0, 3, 225, 1, 0, 0, 0);
	func_2(iVar0, 3, 226, 1, 0, 0, 0);
	func_2(iVar0, 3, 227, 1, 0, 0, 0);
	func_2(iVar0, 3, 228, 1, 0, 0, 0);
	func_2(iVar0, 3, 229, 1, 0, 0, 0);
	func_2(iVar0, 3, 230, 1, 0, 0, 0);
	func_2(iVar0, 3, 231, 1, 0, 0, 0);
	func_2(iVar0, 3, 232, 1, 0, 0, 0);
	func_2(iVar0, 3, 233, 1, 0, 0, 0);
	func_2(iVar0, 3, 234, 1, 0, 0, 0);
	func_2(iVar0, 3, 235, 1, 0, 0, 0);
	func_2(iVar0, 3, 236, 1, 0, 0, 0);
	func_2(iVar0, 3, 237, 1, 0, 0, 0);
	func_2(iVar0, 3, 238, 1, 0, 0, 0);
	func_2(iVar0, 3, 239, 1, 0, 0, 0);
	func_2(iVar0, 3, 240, 1, 0, 0, 0);
	func_2(iVar0, 3, 241, 1, 0, 0, 0);
	func_2(iVar0, 4, 0, 1, 1, 0, 1);
	func_2(iVar0, 4, 1, 1, 0, 0, 0);
	func_2(iVar0, 4, 2, 1, 0, 0, 0);
	func_2(iVar0, 4, 3, 1, 0, 0, 0);
	func_2(iVar0, 4, 4, 1, 0, 0, 0);
	func_2(iVar0, 4, 5, 1, 0, 0, 0);
	func_2(iVar0, 4, 6, 1, 0, 0, 0);
	func_2(iVar0, 4, 7, 1, 0, 0, 0);
	func_2(iVar0, 4, 8, 1, 0, 0, 0);
	func_2(iVar0, 4, 9, 1, 0, 0, 0);
	func_2(iVar0, 4, 10, 1, 0, 0, 0);
	func_2(iVar0, 4, 11, 1, 0, 0, 0);
	func_2(iVar0, 4, 12, 1, 0, 0, 0);
	func_2(iVar0, 4, 13, 1, 0, 0, 0);
	func_2(iVar0, 4, 14, 1, 0, 0, 0);
	func_2(iVar0, 4, 15, 1, 0, 0, 0);
	func_2(iVar0, 4, 16, 1, 0, 0, 0);
	func_2(iVar0, 4, 17, 1, 0, 0, 0);
	func_2(iVar0, 4, 18, 1, 0, 0, 0);
	func_2(iVar0, 4, 19, 1, 0, 0, 0);
	func_2(iVar0, 4, 20, 1, 0, 0, 0);
	func_2(iVar0, 4, 21, 1, 0, 0, 0);
	func_2(iVar0, 4, 22, 1, 0, 0, 0);
	func_2(iVar0, 4, 23, 1, 0, 0, 0);
	func_2(iVar0, 4, 24, 1, 0, 0, 0);
	func_2(iVar0, 4, 25, 1, 0, 0, 0);
	func_2(iVar0, 4, 26, 1, 0, 0, 0);
	func_2(iVar0, 4, 27, 1, 0, 0, 0);
	func_2(iVar0, 4, 28, 1, 0, 0, 0);
	func_2(iVar0, 4, 29, 1, 0, 0, 0);
	func_2(iVar0, 4, 30, 1, 0, 0, 0);
	func_2(iVar0, 4, 31, 1, 0, 0, 0);
	func_2(iVar0, 4, 32, 1, 0, 0, 0);
	func_2(iVar0, 4, 33, 1, 0, 0, 0);
	func_2(iVar0, 4, 34, 1, 0, 0, 0);
	func_2(iVar0, 4, 35, 1, 0, 0, 0);
	func_2(iVar0, 4, 36, 1, 0, 0, 0);
	func_2(iVar0, 4, 37, 1, 0, 0, 0);
	func_2(iVar0, 4, 38, 1, 0, 0, 0);
	func_2(iVar0, 4, 39, 1, 0, 0, 0);
	func_2(iVar0, 4, 40, 1, 0, 0, 0);
	func_2(iVar0, 4, 41, 1, 0, 0, 0);
	func_2(iVar0, 4, 42, 1, 0, 0, 0);
	func_2(iVar0, 4, 43, 1, 1, 0, 1);
	func_2(iVar0, 4, 44, 1, 1, 0, 1);
	func_2(iVar0, 4, 45, 1, 0, 0, 0);
	func_2(iVar0, 4, 46, 1, 0, 0, 0);
	func_2(iVar0, 4, 47, 1, 0, 0, 0);
	func_2(iVar0, 4, 48, 1, 0, 0, 0);
	func_2(iVar0, 4, 49, 1, 0, 0, 0);
	func_2(iVar0, 4, 50, 1, 0, 0, 0);
	func_2(iVar0, 4, 51, 1, 0, 0, 0);
	func_2(iVar0, 4, 52, 1, 1, 0, 1);
	func_2(iVar0, 4, 53, 1, 0, 0, 0);
	func_2(iVar0, 4, 54, 1, 0, 0, 0);
	func_2(iVar0, 4, 55, 1, 0, 0, 0);
	func_2(iVar0, 4, 56, 1, 0, 0, 0);
	func_2(iVar0, 4, 57, 1, 0, 0, 0);
	func_2(iVar0, 4, 58, 1, 0, 0, 0);
	func_2(iVar0, 4, 59, 1, 0, 0, 0);
	func_2(iVar0, 4, 60, 1, 0, 0, 0);
	func_2(iVar0, 4, 61, 1, 0, 0, 0);
	func_2(iVar0, 4, 62, 1, 0, 0, 0);
	func_2(iVar0, 4, 63, 1, 0, 0, 0);
	func_2(iVar0, 4, 64, 1, 0, 0, 0);
	func_2(iVar0, 4, 65, 1, 0, 0, 0);
	func_2(iVar0, 4, 66, 1, 0, 0, 0);
	func_2(iVar0, 4, 67, 1, 0, 0, 0);
	func_2(iVar0, 4, 68, 1, 0, 0, 0);
	func_2(iVar0, 4, 69, 1, 0, 0, 0);
	func_2(iVar0, 4, 70, 1, 0, 0, 0);
	func_2(iVar0, 4, 71, 1, 0, 0, 0);
	func_2(iVar0, 4, 72, 1, 0, 0, 0);
	func_2(iVar0, 4, 73, 1, 0, 0, 0);
	func_2(iVar0, 4, 74, 1, 0, 0, 0);
	func_2(iVar0, 4, 75, 1, 0, 0, 0);
	func_2(iVar0, 4, 76, 1, 0, 0, 0);
	func_2(iVar0, 4, 77, 1, 0, 0, 0);
	func_2(iVar0, 4, 78, 1, 0, 0, 0);
	func_2(iVar0, 4, 79, 1, 0, 0, 0);
	func_2(iVar0, 4, 80, 1, 0, 0, 0);
	func_2(iVar0, 4, 81, 1, 1, 0, 1);
	func_2(iVar0, 4, 82, 1, 0, 0, 0);
	func_2(iVar0, 4, 83, 1, 0, 0, 0);
	func_2(iVar0, 4, 84, 1, 0, 0, 0);
	func_2(iVar0, 4, 85, 1, 0, 0, 0);
	func_2(iVar0, 4, 86, 1, 0, 0, 0);
	func_2(iVar0, 4, 91, 1, 1, 0, 1);
	func_2(iVar0, 4, 92, 1, 0, 0, 0);
	func_2(iVar0, 4, 93, 1, 0, 0, 0);
	func_2(iVar0, 4, 94, 1, 1, 0, 1);
	func_2(iVar0, 4, 95, 1, 0, 0, 0);
	func_2(iVar0, 4, 96, 1, 0, 0, 0);
	func_2(iVar0, 6, 0, 1, 1, 0, 1);
	func_2(iVar0, 6, 1, 1, 0, 0, 0);
	func_2(iVar0, 6, 2, 1, 0, 0, 0);
	func_2(iVar0, 6, 3, 1, 0, 0, 0);
	func_2(iVar0, 6, 4, 1, 0, 0, 0);
	func_2(iVar0, 6, 5, 1, 0, 0, 0);
	func_2(iVar0, 6, 6, 1, 0, 0, 0);
	func_2(iVar0, 6, 7, 1, 0, 0, 0);
	func_2(iVar0, 6, 8, 1, 1, 0, 1);
	func_2(iVar0, 6, 9, 1, 0, 0, 0);
	func_2(iVar0, 6, 10, 1, 0, 0, 0);
	func_2(iVar0, 6, 11, 1, 0, 0, 0);
	func_2(iVar0, 6, 12, 1, 1, 0, 1);
	func_2(iVar0, 6, 13, 1, 0, 0, 0);
	func_2(iVar0, 6, 14, 1, 0, 0, 0);
	func_2(iVar0, 6, 15, 0, 0, 0, 0);
	func_2(iVar0, 6, 16, 1, 0, 0, 0);
	func_2(iVar0, 6, 17, 1, 0, 0, 0);
	func_2(iVar0, 6, 18, 1, 0, 0, 0);
	func_2(iVar0, 6, 19, 1, 0, 0, 0);
	func_2(iVar0, 6, 20, 1, 0, 0, 0);
	func_2(iVar0, 6, 21, 1, 0, 0, 0);
	func_2(iVar0, 6, 22, 1, 0, 0, 0);
	func_2(iVar0, 6, 23, 1, 0, 0, 0);
	func_2(iVar0, 6, 24, 1, 0, 0, 0);
	func_2(iVar0, 6, 25, 1, 0, 0, 0);
	func_2(iVar0, 6, 26, 1, 0, 0, 0);
	func_2(iVar0, 6, 27, 1, 0, 0, 0);
	func_2(iVar0, 6, 28, 1, 1, 0, 1);
	func_2(iVar0, 6, 29, 1, 0, 0, 0);
	func_2(iVar0, 6, 30, 1, 0, 0, 0);
	func_2(iVar0, 6, 31, 1, 0, 0, 0);
	func_2(iVar0, 6, 32, 1, 0, 0, 0);
	func_2(iVar0, 6, 33, 1, 0, 0, 0);
	func_2(iVar0, 6, 34, 1, 1, 0, 1);
	func_2(iVar0, 6, 35, 1, 1, 0, 1);
	func_2(iVar0, 6, 36, 1, 0, 0, 0);
	func_2(iVar0, 6, 37, 1, 0, 0, 0);
	func_2(iVar0, 6, 38, 1, 0, 0, 0);
	func_2(iVar0, 6, 39, 1, 0, 0, 0);
	func_2(iVar0, 6, 40, 1, 0, 0, 0);
	func_2(iVar0, 6, 41, 1, 0, 0, 0);
	func_2(iVar0, 6, 42, 1, 0, 0, 0);
	func_2(iVar0, 6, 43, 1, 0, 0, 0);
	func_2(iVar0, 6, 44, 1, 0, 0, 0);
	func_2(iVar0, 6, 45, 1, 0, 0, 0);
	func_2(iVar0, 6, 46, 1, 0, 0, 0);
	func_2(iVar0, 6, 47, 1, 0, 0, 0);
	func_2(iVar0, 6, 48, 1, 0, 0, 0);
	func_2(iVar0, 6, 49, 1, 0, 0, 0);
	func_2(iVar0, 6, 50, 1, 0, 0, 0);
	func_2(iVar0, 6, 51, 1, 0, 0, 0);
	func_2(iVar0, 6, 52, 1, 0, 0, 0);
	func_2(iVar0, 6, 53, 1, 0, 0, 0);
	func_2(iVar0, 6, 54, 1, 0, 0, 0);
	func_2(iVar0, 6, 55, 1, 0, 0, 0);
	func_2(iVar0, 6, 56, 1, 0, 0, 0);
	func_2(iVar0, 6, 57, 1, 0, 0, 0);
	func_2(iVar0, 6, 58, 1, 0, 0, 0);
	func_2(iVar0, 6, 59, 1, 0, 0, 0);
	func_2(iVar0, 6, 60, 1, 0, 0, 0);
	func_2(iVar0, 6, 61, 1, 0, 0, 0);
	func_2(iVar0, 6, 62, 1, 0, 0, 0);
	func_2(iVar0, 6, 63, 1, 0, 0, 0);
	func_2(iVar0, 6, 64, 1, 0, 0, 0);
	func_2(iVar0, 6, 65, 1, 0, 0, 0);
	func_2(iVar0, 6, 66, 1, 0, 0, 0);
	func_2(iVar0, 6, 67, 1, 0, 0, 0);
	func_2(iVar0, 6, 68, 1, 0, 0, 0);
	func_2(iVar0, 6, 69, 1, 0, 0, 0);
	func_2(iVar0, 6, 70, 1, 0, 0, 0);
	func_2(iVar0, 6, 71, 1, 0, 0, 0);
	func_2(iVar0, 6, 72, 1, 0, 0, 0);
	func_2(iVar0, 6, 73, 1, 0, 0, 0);
	func_2(iVar0, 6, 74, 1, 0, 0, 0);
	func_2(iVar0, 6, 75, 1, 0, 0, 0);
	func_2(iVar0, 6, 76, 1, 0, 0, 0);
	func_2(iVar0, 6, 77, 1, 0, 0, 0);
	func_2(iVar0, 6, 78, 1, 0, 0, 0);
	func_2(iVar0, 6, 79, 1, 0, 0, 0);
	func_2(iVar0, 6, 80, 1, 0, 0, 0);
	func_2(iVar0, 6, 81, 1, 0, 0, 0);
	func_2(iVar0, 6, 82, 1, 0, 0, 0);
	func_2(iVar0, 6, 83, 1, 0, 0, 0);
	wait(0);
	func_2(iVar0, 5, 0, 1, 1, 0, 1);
	func_2(iVar0, 5, 1, 1, 0, 0, 0);
	func_2(iVar0, 5, 2, 1, 0, 0, 0);
	func_2(iVar0, 5, 3, 1, 0, 0, 0);
	func_2(iVar0, 5, 4, 1, 0, 0, 0);
	func_2(iVar0, 5, 5, 1, 0, 0, 0);
	func_2(iVar0, 5, 6, 1, 0, 0, 0);
	func_2(iVar0, 8, 0, 1, 1, 0, 1);
	func_2(iVar0, 8, 1, 1, 0, 0, 0);
	func_2(iVar0, 8, 2, 1, 0, 0, 0);
	func_2(iVar0, 8, 3, 1, 0, 0, 0);
	func_2(iVar0, 8, 4, 1, 0, 0, 0);
	func_2(iVar0, 8, 5, 1, 0, 0, 0);
	func_2(iVar0, 8, 6, 1, 0, 0, 0);
	func_2(iVar0, 8, 7, 1, 0, 0, 0);
	func_2(iVar0, 8, 8, 1, 0, 0, 0);
	func_2(iVar0, 8, 9, 1, 0, 0, 0);
	func_2(iVar0, 8, 10, 1, 0, 0, 0);
	func_2(iVar0, 8, 11, 1, 0, 0, 0);
	func_2(iVar0, 8, 12, 1, 0, 0, 0);
	func_2(iVar0, 8, 13, 1, 0, 0, 0);
	func_2(iVar0, 8, 14, 1, 0, 0, 0);
	func_2(iVar0, 8, 15, 1, 1, 0, 1);
	func_2(iVar0, 8, 16, 1, 0, 0, 0);
	func_2(iVar0, 8, 17, 1, 0, 0, 0);
	func_2(iVar0, 9, 0, 1, 1, 0, 1);
	func_2(iVar0, 9, 1, 1, 0, 0, 0);
	func_2(iVar0, 9, 2, 1, 0, 0, 0);
	func_2(iVar0, 9, 3, 1, 0, 0, 0);
	func_2(iVar0, 9, 4, 1, 0, 0, 0);
	func_2(iVar0, 9, 5, 1, 0, 0, 0);
	func_2(iVar0, 9, 6, 1, 0, 0, 0);
	func_2(iVar0, 9, 7, 1, 1, 0, 1);
	func_2(iVar0, 9, 8, 1, 0, 0, 0);
	func_2(iVar0, 9, 9, 1, 0, 0, 0);
	func_2(iVar0, 9, 10, 1, 0, 0, 0);
	func_2(iVar0, 9, 11, 1, 0, 0, 0);
	func_2(iVar0, 9, 12, 1, 0, 0, 0);
	func_2(iVar0, 9, 13, 1, 0, 0, 0);
	func_2(iVar0, 9, 14, 1, 0, 0, 0);
	func_2(iVar0, 9, 15, 1, 0, 0, 0);
	func_2(iVar0, 9, 16, 1, 0, 0, 0);
	func_2(iVar0, 10, 0, 1, 1, 0, 1);
	func_2(iVar0, 10, 1, 1, 0, 0, 0);
	func_2(iVar0, 10, 2, 1, 0, 0, 0);
	func_2(iVar0, 10, 3, 1, 0, 0, 0);
	func_2(iVar0, 10, 4, 1, 0, 0, 0);
	func_2(iVar0, 10, 5, 1, 0, 0, 0);
	func_2(iVar0, 10, 6, 1, 0, 0, 0);
	func_2(iVar0, 10, 7, 1, 0, 0, 0);
	func_2(iVar0, 10, 8, 1, 0, 0, 0);
	func_2(iVar0, 10, 9, 1, 0, 0, 0);
	func_2(iVar0, 10, 10, 1, 0, 0, 0);
	func_2(iVar0, 10, 11, 1, 0, 0, 0);
	func_2(iVar0, 10, 12, 1, 0, 0, 0);
	func_2(iVar0, 10, 13, 1, 0, 0, 0);
	func_2(iVar0, 10, 14, 1, 0, 0, 0);
	func_2(iVar0, 10, 15, 1, 0, 0, 0);
	func_2(iVar0, 10, 16, 1, 0, 0, 0);
	func_2(iVar0, 10, 17, 1, 0, 0, 0);
	func_2(iVar0, 10, 18, 1, 0, 0, 0);
	func_2(iVar0, 10, 19, 1, 0, 0, 0);
	func_2(iVar0, 10, 20, 1, 0, 0, 0);
	func_2(iVar0, 10, 21, 1, 0, 0, 0);
	func_2(iVar0, 10, 22, 1, 0, 0, 0);
	func_2(iVar0, 10, 23, 1, 0, 0, 0);
	func_2(iVar0, 10, 24, 1, 0, 0, 0);
	func_2(iVar0, 10, 25, 1, 0, 0, 0);
	func_2(iVar0, 10, 26, 1, 0, 0, 0);
	func_2(iVar0, 10, 27, 1, 0, 0, 0);
	func_2(iVar0, 10, 28, 1, 0, 0, 0);
	func_2(iVar0, 10, 29, 1, 0, 0, 0);
	func_2(iVar0, 10, 30, 1, 0, 0, 0);
	func_2(iVar0, 10, 31, 1, 0, 0, 0);
	func_2(iVar0, 10, 32, 1, 0, 0, 0);
	func_2(iVar0, 1, 0, 1, 1, 0, 0);
	func_2(iVar0, 1, 1, 1, 1, 0, 0);
	func_2(iVar0, 1, 2, 1, 1, 0, 0);
	func_2(iVar0, 1, 3, 1, 1, 0, 0);
	func_2(iVar0, 1, 5, 1, 1, 0, 0);
	func_2(iVar0, 7, 0, 1, 1, 0, 0);
	func_2(iVar0, 11, 0, 1, 1, 0, 1);
	func_2(iVar0, 12, 0, 1, 1, 0, 1);
	func_2(iVar0, 12, 1, 1, 0, 0, 0);
	func_2(iVar0, 12, 2, 1, 0, 0, 0);
	func_2(iVar0, 12, 3, 1, 0, 0, 0);
	func_2(iVar0, 12, 4, 1, 0, 0, 0);
	func_2(iVar0, 12, 5, 1, 0, 0, 0);
	func_2(iVar0, 12, 6, 1, 0, 0, 0);
	func_2(iVar0, 12, 7, 1, 0, 0, 0);
	func_2(iVar0, 12, 8, 1, 0, 0, 0);
	func_2(iVar0, 12, 9, 1, 0, 0, 0);
	func_2(iVar0, 12, 10, 1, 1, 0, 1);
	func_2(iVar0, 12, 11, 1, 0, 0, 0);
	func_2(iVar0, 12, 12, 1, 0, 0, 0);
	func_2(iVar0, 12, 13, 1, 0, 0, 0);
	func_2(iVar0, 12, 14, 1, 0, 0, 0);
	func_2(iVar0, 12, 15, 1, 0, 0, 0);
	func_2(iVar0, 12, 16, 1, 0, 0, 0);
	func_2(iVar0, 12, 17, 0, 0, 0, 0);
	func_2(iVar0, 12, 18, 0, 0, 0, 0);
	func_2(iVar0, 12, 19, 0, 0, 0, 0);
	func_2(iVar0, 12, 20, 1, 0, 0, 0);
	func_2(iVar0, 12, 21, 1, 1, 0, 1);
	func_2(iVar0, 12, 23, 1, 0, 0, 0);
	func_2(iVar0, 12, 24, 1, 0, 0, 0);
	func_2(iVar0, 12, 25, 1, 0, 0, 0);
	func_2(iVar0, 12, 26, 1, 0, 0, 0);
	func_2(iVar0, 12, 27, 1, 0, 0, 0);
	func_2(iVar0, 12, 28, 1, 0, 0, 0);
	func_2(iVar0, 12, 29, 1, 0, 0, 0);
	func_2(iVar0, 12, 30, 1, 0, 0, 0);
	func_2(iVar0, 12, 31, 1, 0, 0, 0);
	func_2(iVar0, 12, 32, 1, 0, 0, 0);
	func_2(iVar0, 12, 33, 1, 0, 0, 0);
	func_2(iVar0, 12, 34, 1, 0, 0, 0);
	func_2(iVar0, 12, 35, 1, 0, 0, 0);
	func_2(iVar0, 12, 36, 1, 0, 0, 0);
	func_2(iVar0, 12, 37, 1, 0, 0, 0);
	func_2(iVar0, 12, 38, 1, 0, 0, 0);
	func_2(iVar0, 12, 39, 1, 0, 0, 0);
	func_2(iVar0, 12, 40, 1, 0, 0, 0);
	func_2(iVar0, 12, 41, 1, 1, 0, 1);
	func_2(iVar0, 12, 42, 1, 1, 0, 1);
	func_2(iVar0, 12, 43, 1, 1, 0, 1);
	func_2(iVar0, 12, 44, 1, 0, 0, 0);
	func_2(iVar0, 12, 45, 1, 0, 0, 0);
	func_2(iVar0, 12, 46, 1, 1, 0, 1);
	func_2(iVar0, 12, 47, 1, 1, 0, 1);
	func_2(iVar0, 13, 0, 1, 0, 0, 0);
	func_2(iVar0, 13, 1, 1, 0, 0, 0);
	func_2(iVar0, 13, 2, 1, 0, 0, 0);
	func_2(iVar0, 13, 3, 1, 0, 0, 0);
	func_2(iVar0, 13, 4, 1, 0, 0, 0);
	func_2(iVar0, 13, 5, 1, 0, 0, 0);
	func_2(iVar0, 13, 6, 1, 0, 0, 0);
	func_2(iVar0, 13, 7, 1, 1, 0, 1);
	func_2(iVar0, 13, 8, 1, 0, 0, 0);
	func_2(iVar0, 14, 10, 1, 0, 0, 0);
	func_2(iVar0, 14, 11, 1, 0, 0, 0);
	func_2(iVar0, 14, 12, 1, 0, 0, 0);
	func_2(iVar0, 14, 13, 1, 0, 0, 0);
	func_2(iVar0, 14, 14, 1, 0, 0, 0);
	func_2(iVar0, 14, 15, 1, 0, 0, 0);
	func_2(iVar0, 14, 16, 1, 0, 0, 0);
	func_2(iVar0, 14, 17, 1, 0, 0, 0);
	func_2(iVar0, 14, 18, 1, 0, 0, 0);
	func_2(iVar0, 14, 19, 1, 0, 0, 0);
	func_2(iVar0, 14, 20, 1, 0, 0, 0);
	func_2(iVar0, 14, 21, 1, 0, 0, 0);
	func_2(iVar0, 14, 22, 1, 0, 0, 0);
	func_2(iVar0, 14, 23, 1, 0, 0, 0);
	func_2(iVar0, 14, 24, 1, 0, 0, 0);
	func_2(iVar0, 14, 25, 1, 0, 0, 0);
	func_2(iVar0, 14, 26, 1, 0, 0, 0);
	func_2(iVar0, 14, 27, 1, 0, 0, 0);
	func_2(iVar0, 14, 28, 1, 0, 0, 0);
	func_2(iVar0, 14, 29, 1, 0, 0, 0);
	func_2(iVar0, 14, 30, 1, 0, 0, 0);
	func_2(iVar0, 14, 31, 1, 0, 0, 0);
	func_2(iVar0, 14, 32, 1, 0, 0, 0);
	func_2(iVar0, 14, 33, 1, 0, 0, 0);
	func_2(iVar0, 14, 34, 1, 0, 0, 0);
	func_2(iVar0, 14, 35, 1, 0, 0, 0);
	func_2(iVar0, 14, 36, 1, 0, 0, 0);
	func_2(iVar0, 14, 37, 1, 0, 0, 0);
	func_2(iVar0, 14, 38, 1, 0, 0, 0);
	func_2(iVar0, 14, 39, 1, 0, 0, 0);
	func_2(iVar0, 14, 40, 1, 0, 0, 0);
	func_2(iVar0, 14, 41, 1, 0, 0, 0);
	func_2(iVar0, 14, 42, 1, 0, 0, 0);
	func_2(iVar0, 14, 43, 1, 0, 0, 0);
	func_2(iVar0, 14, 44, 1, 0, 0, 0);
	func_2(iVar0, 14, 45, 1, 0, 0, 0);
	func_2(iVar0, 14, 46, 1, 0, 0, 0);
	func_2(iVar0, 14, 47, 0, 0, 0, 0);
	func_2(iVar0, 14, 48, 0, 0, 0, 0);
	func_2(iVar0, 14, 49, 0, 0, 0, 0);
	func_2(iVar0, 14, 50, 0, 0, 0, 0);
	func_2(iVar0, 14, 51, 0, 0, 0, 0);
	func_2(iVar0, 14, 52, 0, 0, 0, 0);
	func_2(iVar0, 14, 53, 0, 0, 0, 0);
	func_2(iVar0, 14, 54, 0, 0, 0, 0);
	func_2(iVar0, 14, 55, 0, 0, 0, 0);
	func_2(iVar0, 14, 56, 0, 0, 0, 0);
	func_2(iVar0, 14, 57, 0, 0, 0, 0);
	func_2(iVar0, 14, 58, 0, 0, 0, 0);
	func_2(iVar0, 14, 59, 0, 0, 0, 0);
	func_2(iVar0, 14, 60, 0, 0, 0, 0);
	func_2(iVar0, 14, 61, 1, 0, 0, 0);
	func_2(iVar0, 14, 62, 1, 0, 0, 0);
	func_2(iVar0, 14, 63, 1, 0, 0, 0);
	func_2(iVar0, 14, 64, 1, 0, 0, 0);
	func_2(iVar0, 14, 65, 1, 0, 0, 0);
	func_2(iVar0, 14, 66, 1, 0, 0, 0);
	func_2(iVar0, 14, 67, 1, 0, 0, 0);
	func_2(iVar0, 14, 68, 1, 0, 0, 0);
	func_2(iVar0, 14, 69, 1, 0, 0, 0);
	func_2(iVar0, 14, 70, 1, 0, 0, 0);
	func_2(iVar0, 14, 71, 1, 0, 0, 0);
	func_2(iVar0, 14, 72, 1, 0, 0, 0);
	func_2(iVar0, 14, 73, 1, 0, 0, 0);
	func_2(iVar0, 14, 74, 1, 0, 0, 0);
	func_2(iVar0, 14, 75, 1, 0, 0, 0);
	func_2(iVar0, 14, 76, 1, 0, 0, 0);
	func_2(iVar0, 14, 77, 1, 0, 0, 0);
	func_2(iVar0, 14, 78, 1, 0, 0, 0);
	func_2(iVar0, 14, 79, 1, 0, 0, 0);
	func_2(iVar0, 14, 80, 1, 0, 0, 0);
	func_2(iVar0, 14, 81, 1, 0, 0, 0);
	func_2(iVar0, 14, 82, 1, 0, 0, 0);
	func_2(iVar0, 14, 83, 1, 0, 0, 0);
	func_2(iVar0, 14, 84, 1, 0, 0, 0);
	func_2(iVar0, 14, 85, 1, 0, 0, 0);
	func_2(iVar0, 14, 86, 1, 0, 0, 0);
	func_2(iVar0, 14, 87, 1, 0, 0, 0);
	func_2(iVar0, 14, 88, 1, 0, 0, 0);
	func_2(iVar0, 14, 89, 1, 0, 0, 0);
	func_2(iVar0, 14, 90, 1, 0, 0, 0);
	func_2(iVar0, 14, 91, 1, 0, 0, 0);
	func_2(iVar0, 14, 92, 1, 0, 0, 0);
	func_2(iVar0, 14, 93, 1, 0, 0, 0);
	func_2(iVar0, 14, 94, 1, 0, 0, 0);
	func_2(iVar0, 14, 95, 1, 0, 0, 0);
	func_2(iVar0, 14, 96, 1, 0, 0, 0);
	func_2(iVar0, 14, 97, 1, 0, 0, 0);
	func_2(iVar0, 14, 98, 1, 0, 0, 0);
	func_2(iVar0, 14, 99, 1, 0, 0, 0);
	func_2(iVar0, 14, 100, 1, 0, 0, 0);
	func_2(iVar0, 14, 101, 1, 0, 0, 0);
	func_2(iVar0, 14, 102, 1, 0, 0, 0);
	func_2(iVar0, 14, 103, 1, 0, 0, 0);
	func_2(iVar0, 14, 104, 1, 0, 0, 0);
	func_2(iVar0, 14, 105, 1, 0, 0, 0);
	func_2(iVar0, 14, 106, 1, 0, 0, 0);
	func_2(iVar0, 14, 107, 1, 0, 0, 0);
	func_2(iVar0, 14, 108, 1, 0, 0, 0);
	func_2(iVar0, 14, 109, 1, 0, 0, 0);
	func_2(iVar0, 14, 113, 1, 0, 0, 0);
	func_2(iVar0, 14, 114, 1, 0, 0, 0);
	func_2(iVar0, 14, 115, 1, 0, 0, 0);
	func_2(iVar0, 14, 116, 1, 0, 0, 0);
	func_2(iVar0, 14, 117, 1, 0, 0, 0);
	func_2(iVar0, 14, 118, 1, 0, 0, 0);
	func_2(iVar0, 14, 119, 1, 0, 0, 0);
	func_2(iVar0, 14, 120, 1, 0, 0, 0);
	func_2(iVar0, 14, 121, 1, 0, 0, 0);
	func_2(iVar0, 14, 122, 1, 0, 0, 0);
	func_2(iVar0, 14, 123, 1, 1, 0, 1);
	func_2(iVar0, 14, 124, 1, 0, 0, 0);
	func_2(iVar0, 14, 125, 1, 0, 0, 0);
	func_2(iVar0, 14, 126, 1, 0, 0, 0);
	func_2(iVar0, 14, 127, 1, 0, 0, 0);
	func_2(iVar0, 14, 128, 1, 0, 0, 0);
	func_2(iVar0, 14, 129, 1, 0, 0, 0);
	func_2(iVar0, 14, 130, 1, 0, 0, 0);
	func_2(iVar0, 14, 131, 1, 0, 0, 0);
	func_2(iVar0, 14, 132, 1, 0, 0, 0);
	func_2(iVar0, 14, 133, 1, 0, 0, 0);
	func_2(iVar0, 14, 134, 1, 0, 0, 0);
	func_2(iVar0, 14, 135, 1, 0, 0, 0);
	func_2(iVar0, 14, 136, 1, 0, 0, 0);
	func_2(iVar0, 14, 137, 1, 0, 0, 0);
	func_2(iVar0, 14, 138, 1, 0, 0, 0);
	func_2(iVar0, 14, 139, 1, 0, 0, 0);
	func_2(iVar0, 14, 140, 1, 0, 0, 0);
	func_2(iVar0, 14, 141, 1, 0, 0, 0);
	func_2(iVar0, 14, 142, 1, 0, 0, 0);
	func_2(iVar0, 14, 143, 1, 0, 0, 0);
	func_2(iVar0, 14, 144, 1, 0, 0, 0);
	func_2(iVar0, 14, 145, 1, 0, 0, 0);
	func_2(iVar0, 14, 146, 1, 0, 0, 0);
	func_2(iVar0, 14, 147, 1, 0, 0, 0);
	func_2(iVar0, 14, 148, 1, 0, 0, 0);
	func_2(iVar0, 14, 149, 1, 0, 0, 0);
	func_2(iVar0, 14, 150, 1, 0, 0, 0);
	func_2(iVar0, 14, 151, 1, 0, 0, 0);
	func_2(iVar0, 14, 152, 1, 0, 0, 0);
	func_2(iVar0, 14, 154, 1, 1, 0, 1);
	wait(0);
	iVar0 = func_88(1);
	func_2(iVar0, 13, 31, 1, 1, 0, 1);
	func_2(iVar0, 14, 0, 1, 1, 0, 1);
	func_2(iVar0, 14, 1, 1, 1, 0, 1);
	func_2(iVar0, 14, 2, 1, 1, 0, 1);
	func_2(iVar0, 14, 3, 1, 1, 0, 1);
	func_2(iVar0, 14, 4, 1, 1, 0, 1);
	func_2(iVar0, 14, 5, 1, 1, 0, 1);
	func_2(iVar0, 14, 6, 1, 1, 0, 1);
	func_2(iVar0, 14, 7, 1, 1, 0, 1);
	func_2(iVar0, 14, 8, 1, 1, 0, 1);
	func_2(iVar0, 0, 0, 1, 1, 0, 0);
	func_2(iVar0, 0, 1, 1, 1, 0, 0);
	func_2(iVar0, 0, 2, 1, 1, 0, 0);
	func_2(iVar0, 0, 3, 1, 1, 0, 0);
	func_2(iVar0, 0, 4, 1, 1, 0, 0);
	func_2(iVar0, 0, 5, 1, 1, 0, 0);
	func_2(iVar0, 0, 6, 1, 1, 0, 0);
	func_2(iVar0, 0, 7, 1, 1, 0, 0);
	func_2(iVar0, 0, 8, 1, 1, 0, 0);
	func_2(iVar0, 0, 9, 1, 1, 0, 0);
	func_2(iVar0, 2, 0, 1, 1, 0, 0);
	func_2(iVar0, 2, 1, 1, 1, 0, 0);
	func_2(iVar0, 2, 2, 1, 1, 0, 0);
	func_2(iVar0, 2, 3, 1, 1, 0, 0);
	func_2(iVar0, 2, 4, 1, 1, 0, 0);
	func_2(iVar0, 2, 5, 1, 1, 0, 0);
	func_2(iVar0, 2, 6, 1, 1, 0, 0);
	func_2(iVar0, 2, 7, 1, 1, 0, 0);
	func_2(iVar0, 2, 8, 1, 1, 0, 0);
	func_2(iVar0, 2, 9, 1, 1, 0, 0);
	func_2(iVar0, 2, 10, 1, 1, 0, 0);
	func_2(iVar0, 2, 11, 1, 1, 0, 0);
	func_2(iVar0, 2, 12, 1, 1, 0, 0);
	func_2(iVar0, 2, 13, 1, 1, 0, 0);
	func_2(iVar0, 2, 14, 1, 1, 0, 0);
	func_2(iVar0, 2, 15, 1, 1, 0, 0);
	func_2(iVar0, 2, 16, 1, 1, 0, 0);
	func_2(iVar0, 2, 18, 1, 1, 0, 0);
	func_2(iVar0, 2, 19, 1, 1, 0, 0);
	func_2(iVar0, 2, 20, 1, 1, 0, 0);
	func_2(iVar0, 3, 0, 1, 1, 0, 1);
	func_2(iVar0, 3, 1, 1, 1, 0, 1);
	func_2(iVar0, 3, 2, 1, 0, 0, 0);
	func_2(iVar0, 3, 3, 1, 0, 0, 0);
	func_2(iVar0, 3, 4, 1, 0, 0, 0);
	func_2(iVar0, 3, 5, 1, 0, 0, 0);
	func_2(iVar0, 3, 6, 1, 0, 0, 0);
	func_2(iVar0, 3, 7, 1, 0, 0, 0);
	func_2(iVar0, 3, 8, 1, 0, 0, 0);
	func_2(iVar0, 3, 9, 1, 0, 0, 0);
	func_2(iVar0, 3, 10, 1, 0, 0, 0);
	func_2(iVar0, 3, 11, 1, 0, 0, 0);
	func_2(iVar0, 3, 12, 1, 0, 0, 0);
	func_2(iVar0, 3, 13, 1, 0, 0, 0);
	func_2(iVar0, 3, 14, 1, 0, 0, 0);
	func_2(iVar0, 3, 15, 1, 0, 0, 0);
	func_2(iVar0, 3, 16, 1, 0, 0, 0);
	func_2(iVar0, 3, 17, 1, 0, 0, 0);
	func_2(iVar0, 3, 18, 1, 0, 0, 0);
	func_2(iVar0, 3, 19, 1, 0, 0, 0);
	func_2(iVar0, 3, 20, 1, 0, 0, 0);
	func_2(iVar0, 3, 21, 1, 0, 0, 0);
	func_2(iVar0, 3, 22, 1, 0, 0, 0);
	func_2(iVar0, 3, 23, 1, 0, 0, 0);
	func_2(iVar0, 3, 24, 1, 1, 0, 1);
	func_2(iVar0, 3, 25, 1, 1, 0, 1);
	func_2(iVar0, 3, 26, 1, 0, 0, 0);
	func_2(iVar0, 3, 27, 1, 0, 0, 0);
	func_2(iVar0, 3, 28, 1, 0, 0, 0);
	func_2(iVar0, 3, 29, 1, 0, 0, 0);
	func_2(iVar0, 3, 30, 1, 0, 0, 0);
	func_2(iVar0, 3, 31, 1, 0, 0, 0);
	func_2(iVar0, 3, 32, 1, 0, 0, 0);
	func_2(iVar0, 3, 33, 1, 0, 0, 0);
	func_2(iVar0, 3, 34, 1, 0, 0, 0);
	func_2(iVar0, 3, 35, 1, 0, 0, 0);
	func_2(iVar0, 3, 36, 1, 0, 0, 0);
	func_2(iVar0, 3, 37, 1, 0, 0, 0);
	func_2(iVar0, 3, 38, 1, 0, 0, 0);
	func_2(iVar0, 3, 39, 1, 0, 0, 0);
	func_2(iVar0, 3, 40, 1, 0, 0, 0);
	func_2(iVar0, 3, 41, 1, 0, 0, 0);
	func_2(iVar0, 3, 42, 1, 0, 0, 0);
	func_2(iVar0, 3, 43, 1, 0, 0, 0);
	func_2(iVar0, 3, 44, 1, 0, 0, 0);
	func_2(iVar0, 3, 45, 1, 0, 0, 0);
	func_2(iVar0, 3, 46, 1, 0, 0, 0);
	func_2(iVar0, 3, 47, 1, 0, 0, 0);
	func_2(iVar0, 3, 48, 1, 0, 0, 0);
	func_2(iVar0, 3, 49, 1, 0, 0, 0);
	func_2(iVar0, 3, 50, 1, 0, 0, 0);
	func_2(iVar0, 3, 51, 1, 0, 0, 0);
	func_2(iVar0, 3, 52, 1, 0, 0, 0);
	func_2(iVar0, 3, 53, 1, 0, 0, 0);
	func_2(iVar0, 3, 54, 1, 0, 0, 0);
	func_2(iVar0, 3, 55, 1, 0, 0, 0);
	func_2(iVar0, 3, 56, 1, 0, 0, 0);
	func_2(iVar0, 3, 57, 1, 0, 0, 0);
	func_2(iVar0, 3, 58, 1, 0, 0, 0);
	func_2(iVar0, 3, 59, 1, 0, 0, 0);
	func_2(iVar0, 3, 60, 1, 0, 0, 0);
	func_2(iVar0, 3, 61, 1, 0, 0, 0);
	func_2(iVar0, 3, 62, 1, 0, 0, 0);
	func_2(iVar0, 3, 63, 1, 0, 0, 0);
	func_2(iVar0, 3, 64, 1, 0, 0, 0);
	func_2(iVar0, 3, 65, 1, 0, 0, 0);
	func_2(iVar0, 3, 66, 1, 0, 0, 0);
	func_2(iVar0, 3, 67, 1, 0, 0, 0);
	func_2(iVar0, 3, 68, 1, 0, 0, 0);
	func_2(iVar0, 3, 69, 1, 0, 0, 0);
	func_2(iVar0, 3, 70, 1, 0, 0, 0);
	func_2(iVar0, 3, 71, 1, 0, 0, 0);
	func_2(iVar0, 3, 72, 1, 0, 0, 0);
	func_2(iVar0, 3, 73, 1, 1, 0, 1);
	func_2(iVar0, 3, 74, 1, 1, 0, 1);
	func_2(iVar0, 3, 75, 1, 1, 0, 1);
	func_2(iVar0, 3, 76, 1, 1, 0, 1);
	func_2(iVar0, 3, 77, 1, 0, 0, 0);
	func_2(iVar0, 3, 78, 1, 0, 0, 0);
	func_2(iVar0, 3, 79, 1, 0, 0, 0);
	func_2(iVar0, 3, 80, 1, 0, 0, 0);
	func_2(iVar0, 3, 81, 1, 0, 0, 0);
	func_2(iVar0, 3, 82, 1, 0, 0, 0);
	func_2(iVar0, 3, 83, 1, 0, 0, 0);
	func_2(iVar0, 3, 84, 1, 0, 0, 0);
	func_2(iVar0, 3, 85, 1, 0, 0, 0);
	func_2(iVar0, 3, 86, 1, 0, 0, 0);
	func_2(iVar0, 3, 87, 1, 0, 0, 0);
	func_2(iVar0, 3, 88, 1, 0, 0, 0);
	func_2(iVar0, 3, 89, 1, 0, 0, 0);
	func_2(iVar0, 3, 90, 1, 0, 0, 0);
	func_2(iVar0, 3, 91, 1, 1, 0, 1);
	func_2(iVar0, 3, 92, 1, 0, 0, 0);
	func_2(iVar0, 3, 93, 1, 1, 0, 1);
	func_2(iVar0, 3, 94, 1, 0, 0, 0);
	func_2(iVar0, 3, 95, 1, 0, 0, 0);
	func_2(iVar0, 3, 96, 1, 0, 0, 0);
	func_2(iVar0, 3, 97, 1, 0, 0, 0);
	func_2(iVar0, 3, 98, 1, 0, 0, 0);
	func_2(iVar0, 3, 99, 1, 0, 0, 0);
	func_2(iVar0, 3, 100, 1, 0, 0, 0);
	func_2(iVar0, 3, 101, 1, 0, 0, 0);
	func_2(iVar0, 3, 102, 1, 0, 0, 0);
	func_2(iVar0, 3, 103, 1, 0, 0, 0);
	func_2(iVar0, 3, 104, 1, 0, 0, 0);
	func_2(iVar0, 3, 105, 1, 0, 0, 0);
	func_2(iVar0, 3, 106, 1, 0, 0, 0);
	func_2(iVar0, 3, 107, 1, 0, 0, 0);
	func_2(iVar0, 3, 108, 1, 0, 0, 0);
	func_2(iVar0, 3, 109, 1, 0, 0, 0);
	func_2(iVar0, 3, 110, 1, 0, 0, 0);
	func_2(iVar0, 3, 111, 1, 0, 0, 0);
	func_2(iVar0, 3, 112, 1, 0, 0, 0);
	func_2(iVar0, 3, 113, 1, 0, 0, 0);
	func_2(iVar0, 3, 114, 1, 0, 0, 0);
	func_2(iVar0, 3, 115, 1, 0, 0, 0);
	func_2(iVar0, 3, 116, 1, 0, 0, 0);
	func_2(iVar0, 3, 117, 1, 0, 0, 0);
	func_2(iVar0, 3, 118, 1, 0, 0, 0);
	func_2(iVar0, 3, 119, 1, 0, 0, 0);
	func_2(iVar0, 3, 120, 1, 0, 0, 0);
	func_2(iVar0, 3, 121, 1, 0, 0, 0);
	func_2(iVar0, 3, 122, 1, 0, 0, 0);
	func_2(iVar0, 3, 123, 1, 1, 0, 1);
	func_2(iVar0, 3, 124, 1, 1, 0, 1);
	func_2(iVar0, 3, 125, 1, 1, 0, 1);
	func_2(iVar0, 3, 126, 1, 0, 0, 0);
	func_2(iVar0, 3, 127, 1, 0, 0, 0);
	func_2(iVar0, 3, 128, 1, 0, 0, 0);
	func_2(iVar0, 3, 129, 1, 0, 0, 0);
	func_2(iVar0, 3, 130, 1, 0, 0, 0);
	func_2(iVar0, 3, 131, 1, 0, 0, 0);
	func_2(iVar0, 3, 132, 1, 0, 0, 0);
	func_2(iVar0, 3, 134, 1, 0, 0, 0);
	func_2(iVar0, 3, 136, 1, 0, 0, 0);
	func_2(iVar0, 3, 137, 1, 0, 0, 0);
	func_2(iVar0, 3, 138, 1, 0, 0, 0);
	func_2(iVar0, 3, 139, 1, 0, 0, 0);
	func_2(iVar0, 3, 140, 1, 0, 0, 0);
	func_2(iVar0, 3, 141, 1, 0, 0, 0);
	func_2(iVar0, 3, 142, 1, 0, 0, 0);
	func_2(iVar0, 3, 143, 1, 0, 0, 0);
	func_2(iVar0, 3, 144, 1, 0, 0, 0);
	func_2(iVar0, 3, 145, 1, 0, 0, 0);
	func_2(iVar0, 3, 146, 1, 0, 0, 0);
	func_2(iVar0, 3, 147, 1, 0, 0, 0);
	func_2(iVar0, 3, 148, 1, 0, 0, 0);
	func_2(iVar0, 3, 149, 1, 0, 0, 0);
	func_2(iVar0, 3, 150, 1, 0, 0, 0);
	func_2(iVar0, 3, 151, 1, 0, 0, 0);
	func_2(iVar0, 3, 152, 1, 0, 0, 0);
	func_2(iVar0, 3, 153, 1, 0, 0, 0);
	func_2(iVar0, 3, 154, 1, 0, 0, 0);
	func_2(iVar0, 3, 155, 1, 0, 0, 0);
	func_2(iVar0, 3, 156, 1, 0, 0, 0);
	func_2(iVar0, 3, 157, 1, 0, 0, 0);
	func_2(iVar0, 3, 158, 1, 0, 0, 0);
	func_2(iVar0, 3, 159, 1, 0, 0, 0);
	func_2(iVar0, 3, 160, 1, 0, 0, 0);
	func_2(iVar0, 3, 161, 1, 0, 0, 0);
	func_2(iVar0, 3, 162, 1, 1, 0, 1);
	func_2(iVar0, 3, 163, 1, 0, 0, 0);
	func_2(iVar0, 3, 164, 1, 0, 0, 0);
	func_2(iVar0, 3, 165, 1, 0, 0, 0);
	func_2(iVar0, 3, 166, 1, 0, 0, 0);
	func_2(iVar0, 3, 167, 1, 0, 0, 0);
	func_2(iVar0, 3, 168, 1, 0, 0, 0);
	func_2(iVar0, 3, 169, 1, 0, 0, 0);
	func_2(iVar0, 3, 170, 1, 0, 0, 0);
	func_2(iVar0, 3, 171, 1, 0, 0, 0);
	func_2(iVar0, 3, 172, 1, 0, 0, 0);
	func_2(iVar0, 3, 173, 1, 0, 0, 0);
	func_2(iVar0, 3, 174, 1, 0, 0, 0);
	func_2(iVar0, 3, 175, 1, 0, 0, 0);
	func_2(iVar0, 3, 176, 1, 0, 0, 0);
	func_2(iVar0, 3, 177, 1, 0, 0, 0);
	func_2(iVar0, 3, 178, 1, 0, 0, 0);
	func_2(iVar0, 3, 179, 1, 0, 0, 0);
	func_2(iVar0, 3, 180, 1, 0, 0, 0);
	func_2(iVar0, 3, 181, 1, 0, 0, 0);
	func_2(iVar0, 3, 182, 1, 0, 0, 0);
	func_2(iVar0, 3, 183, 1, 0, 0, 0);
	func_2(iVar0, 3, 184, 1, 0, 0, 0);
	func_2(iVar0, 3, 185, 1, 0, 0, 0);
	func_2(iVar0, 3, 186, 1, 0, 0, 0);
	func_2(iVar0, 3, 187, 1, 0, 0, 0);
	func_2(iVar0, 3, 188, 1, 0, 0, 0);
	func_2(iVar0, 3, 189, 1, 0, 0, 0);
	func_2(iVar0, 3, 190, 1, 0, 0, 0);
	func_2(iVar0, 3, 191, 1, 0, 0, 0);
	func_2(iVar0, 3, 192, 1, 0, 0, 0);
	func_2(iVar0, 3, 193, 1, 0, 0, 0);
	func_2(iVar0, 3, 194, 1, 0, 0, 0);
	func_2(iVar0, 3, 195, 1, 0, 0, 0);
	func_2(iVar0, 3, 196, 1, 0, 0, 0);
	func_2(iVar0, 3, 197, 1, 0, 0, 0);
	func_2(iVar0, 3, 198, 1, 0, 0, 0);
	func_2(iVar0, 3, 199, 1, 0, 0, 0);
	func_2(iVar0, 3, 200, 1, 0, 0, 0);
	func_2(iVar0, 3, 201, 1, 0, 0, 0);
	func_2(iVar0, 3, 202, 1, 0, 0, 0);
	func_2(iVar0, 3, 203, 1, 0, 0, 0);
	func_2(iVar0, 3, 204, 1, 0, 0, 0);
	func_2(iVar0, 3, 205, 1, 0, 0, 0);
	func_2(iVar0, 3, 206, 1, 0, 0, 0);
	func_2(iVar0, 3, 207, 1, 0, 0, 0);
	func_2(iVar0, 3, 208, 1, 0, 0, 0);
	func_2(iVar0, 3, 209, 1, 0, 0, 0);
	func_2(iVar0, 3, 210, 1, 0, 0, 0);
	func_2(iVar0, 3, 211, 1, 0, 0, 0);
	func_2(iVar0, 3, 212, 1, 0, 0, 0);
	func_2(iVar0, 3, 213, 1, 0, 0, 0);
	func_2(iVar0, 3, 214, 1, 0, 0, 0);
	func_2(iVar0, 3, 215, 1, 0, 0, 0);
	func_2(iVar0, 3, 216, 1, 0, 0, 0);
	func_2(iVar0, 3, 217, 1, 0, 0, 0);
	func_2(iVar0, 3, 218, 1, 0, 0, 0);
	func_2(iVar0, 3, 219, 1, 0, 0, 0);
	func_2(iVar0, 3, 220, 1, 0, 0, 0);
	func_2(iVar0, 3, 221, 1, 0, 0, 0);
	func_2(iVar0, 3, 222, 1, 0, 0, 0);
	func_2(iVar0, 3, 223, 1, 0, 0, 0);
	func_2(iVar0, 3, 224, 1, 0, 0, 0);
	func_2(iVar0, 3, 225, 1, 0, 0, 0);
	func_2(iVar0, 3, 226, 1, 0, 0, 0);
	func_2(iVar0, 3, 227, 1, 0, 0, 0);
	func_2(iVar0, 3, 228, 1, 0, 0, 0);
	func_2(iVar0, 3, 229, 1, 0, 0, 0);
	func_2(iVar0, 3, 230, 1, 0, 0, 0);
	func_2(iVar0, 3, 231, 1, 0, 0, 0);
	func_2(iVar0, 3, 232, 1, 0, 0, 0);
	func_2(iVar0, 3, 233, 1, 0, 0, 0);
	func_2(iVar0, 3, 234, 1, 0, 0, 0);
	func_2(iVar0, 3, 235, 1, 0, 0, 0);
	func_2(iVar0, 3, 236, 1, 0, 0, 0);
	func_2(iVar0, 3, 237, 1, 0, 0, 0);
	func_2(iVar0, 3, 238, 1, 0, 0, 0);
	func_2(iVar0, 3, 239, 1, 0, 0, 0);
	func_2(iVar0, 3, 240, 1, 0, 0, 0);
	func_2(iVar0, 3, 241, 1, 0, 0, 0);
	func_2(iVar0, 3, 242, 1, 0, 0, 0);
	func_2(iVar0, 3, 243, 1, 0, 0, 0);
	func_2(iVar0, 3, 244, 1, 0, 0, 0);
	func_2(iVar0, 3, 245, 1, 0, 0, 0);
	func_2(iVar0, 3, 246, 1, 0, 0, 0);
	func_2(iVar0, 3, 247, 1, 0, 0, 0);
	func_2(iVar0, 3, 248, 1, 0, 0, 0);
	func_2(iVar0, 3, 249, 1, 0, 0, 0);
	func_2(iVar0, 3, 250, 1, 0, 0, 0);
	func_2(iVar0, 3, 251, 1, 0, 0, 0);
	func_2(iVar0, 3, 252, 1, 0, 0, 0);
	func_2(iVar0, 3, 253, 1, 0, 0, 0);
	func_2(iVar0, 3, 254, 1, 0, 0, 0);
	func_2(iVar0, 3, 255, 1, 0, 0, 0);
	func_2(iVar0, 3, 256, 1, 0, 0, 0);
	func_2(iVar0, 3, 257, 1, 0, 0, 0);
	func_2(iVar0, 3, 258, 1, 0, 0, 0);
	func_2(iVar0, 3, 259, 1, 0, 0, 0);
	func_2(iVar0, 3, 260, 1, 1, 0, 1);
	func_2(iVar0, 3, 261, 1, 0, 0, 0);
	func_2(iVar0, 3, 262, 1, 0, 0, 0);
	func_2(iVar0, 3, 263, 1, 0, 0, 0);
	func_2(iVar0, 3, 264, 1, 0, 0, 0);
	func_2(iVar0, 3, 265, 1, 0, 0, 0);
	func_2(iVar0, 3, 266, 1, 0, 0, 0);
	func_2(iVar0, 3, 267, 1, 0, 0, 0);
	func_2(iVar0, 3, 268, 1, 0, 0, 0);
	func_2(iVar0, 3, 269, 1, 0, 0, 0);
	func_2(iVar0, 3, 270, 1, 0, 0, 0);
	func_2(iVar0, 3, 271, 1, 0, 0, 0);
	func_2(iVar0, 3, 272, 1, 0, 0, 0);
	func_2(iVar0, 3, 273, 1, 0, 0, 0);
	func_2(iVar0, 3, 274, 1, 0, 0, 0);
	func_2(iVar0, 3, 275, 1, 0, 0, 0);
	func_2(iVar0, 3, 276, 1, 0, 0, 0);
	func_2(iVar0, 3, 277, 1, 0, 0, 0);
	func_2(iVar0, 3, 278, 1, 0, 0, 0);
	func_2(iVar0, 3, 279, 1, 0, 0, 0);
	func_2(iVar0, 3, 280, 1, 0, 0, 0);
	func_2(iVar0, 3, 281, 1, 0, 0, 0);
	func_2(iVar0, 3, 282, 1, 0, 0, 0);
	func_2(iVar0, 3, 283, 1, 0, 0, 0);
	func_2(iVar0, 3, 284, 1, 0, 0, 0);
	func_2(iVar0, 3, 285, 1, 0, 0, 0);
	func_2(iVar0, 3, 286, 1, 0, 0, 0);
	func_2(iVar0, 3, 287, 1, 0, 0, 0);
	func_2(iVar0, 3, 288, 1, 0, 0, 0);
	func_2(iVar0, 3, 289, 1, 0, 0, 0);
	func_2(iVar0, 3, 290, 1, 0, 0, 0);
	func_2(iVar0, 3, 291, 1, 0, 0, 0);
	func_2(iVar0, 3, 292, 1, 0, 0, 0);
	func_2(iVar0, 3, 293, 1, 0, 0, 0);
	func_2(iVar0, 3, 294, 1, 0, 0, 0);
	func_2(iVar0, 3, 295, 1, 0, 0, 0);
	func_2(iVar0, 3, 296, 1, 0, 0, 0);
	func_2(iVar0, 3, 297, 1, 0, 0, 0);
	func_2(iVar0, 3, 298, 1, 0, 0, 0);
	func_2(iVar0, 3, 299, 1, 0, 0, 0);
	func_2(iVar0, 3, 300, 1, 0, 0, 0);
	func_2(iVar0, 3, 301, 1, 0, 0, 0);
	func_2(iVar0, 3, 302, 1, 0, 0, 0);
	func_2(iVar0, 3, 303, 1, 0, 0, 0);
	func_2(iVar0, 3, 304, 1, 0, 0, 0);
	func_2(iVar0, 3, 305, 1, 0, 0, 0);
	func_2(iVar0, 3, 306, 1, 0, 0, 0);
	func_2(iVar0, 3, 307, 1, 0, 0, 0);
	func_2(iVar0, 3, 308, 1, 0, 0, 0);
	func_2(iVar0, 3, 309, 1, 0, 0, 0);
	func_2(iVar0, 3, 310, 1, 0, 0, 0);
	func_2(iVar0, 3, 311, 1, 0, 0, 0);
	func_2(iVar0, 3, 312, 1, 0, 0, 0);
	func_2(iVar0, 3, 313, 1, 0, 0, 0);
	func_2(iVar0, 3, 314, 1, 1, 0, 1);
	func_2(iVar0, 3, 315, 1, 1, 0, 1);
	func_2(iVar0, 3, 316, 1, 0, 0, 0);
	func_2(iVar0, 3, 317, 1, 0, 0, 0);
	func_2(iVar0, 4, 0, 1, 1, 0, 1);
	func_2(iVar0, 4, 1, 1, 0, 0, 0);
	func_2(iVar0, 4, 2, 1, 0, 0, 0);
	func_2(iVar0, 4, 3, 1, 0, 0, 0);
	func_2(iVar0, 4, 4, 1, 0, 0, 0);
	func_2(iVar0, 4, 5, 1, 0, 0, 0);
	func_2(iVar0, 4, 6, 1, 0, 0, 0);
	func_2(iVar0, 4, 7, 1, 0, 0, 0);
	func_2(iVar0, 4, 8, 1, 0, 0, 0);
	func_2(iVar0, 4, 9, 1, 0, 0, 0);
	func_2(iVar0, 4, 10, 1, 0, 0, 0);
	func_2(iVar0, 4, 11, 1, 0, 0, 0);
	func_2(iVar0, 4, 12, 1, 0, 0, 0);
	func_2(iVar0, 4, 13, 1, 0, 0, 0);
	func_2(iVar0, 4, 14, 1, 0, 0, 0);
	func_2(iVar0, 4, 15, 1, 0, 0, 0);
	func_2(iVar0, 4, 16, 1, 0, 0, 0);
	func_2(iVar0, 4, 17, 1, 0, 0, 0);
	func_2(iVar0, 4, 18, 1, 0, 0, 0);
	func_2(iVar0, 4, 19, 1, 0, 0, 0);
	func_2(iVar0, 4, 20, 1, 0, 0, 0);
	func_2(iVar0, 4, 21, 1, 0, 0, 0);
	func_2(iVar0, 4, 22, 1, 0, 0, 0);
	func_2(iVar0, 4, 23, 1, 0, 0, 0);
	func_2(iVar0, 4, 24, 1, 1, 0, 1);
	func_2(iVar0, 4, 25, 1, 0, 0, 0);
	func_2(iVar0, 4, 26, 1, 0, 0, 0);
	func_2(iVar0, 4, 27, 1, 0, 0, 0);
	func_2(iVar0, 4, 28, 1, 0, 0, 0);
	func_2(iVar0, 4, 29, 1, 0, 0, 0);
	func_2(iVar0, 4, 30, 1, 0, 0, 0);
	func_2(iVar0, 4, 31, 0, 0, 0, 0);
	func_2(iVar0, 4, 32, 1, 0, 0, 0);
	func_2(iVar0, 4, 33, 1, 0, 0, 0);
	func_2(iVar0, 4, 34, 1, 0, 0, 0);
	func_2(iVar0, 4, 35, 1, 0, 0, 0);
	func_2(iVar0, 4, 36, 1, 0, 0, 0);
	func_2(iVar0, 4, 37, 1, 0, 0, 0);
	func_2(iVar0, 4, 38, 1, 0, 0, 0);
	func_2(iVar0, 4, 39, 0, 0, 0, 0);
	func_2(iVar0, 4, 40, 1, 1, 0, 1);
	func_2(iVar0, 4, 41, 1, 0, 0, 0);
	func_2(iVar0, 4, 42, 1, 0, 0, 0);
	func_2(iVar0, 4, 43, 1, 0, 0, 0);
	func_2(iVar0, 4, 44, 1, 0, 0, 0);
	func_2(iVar0, 4, 45, 1, 0, 0, 0);
	func_2(iVar0, 4, 46, 1, 0, 0, 0);
	func_2(iVar0, 4, 47, 1, 0, 0, 0);
	func_2(iVar0, 4, 48, 1, 0, 0, 0);
	func_2(iVar0, 4, 49, 1, 0, 0, 0);
	func_2(iVar0, 4, 50, 1, 0, 0, 0);
	func_2(iVar0, 4, 51, 1, 0, 0, 0);
	func_2(iVar0, 4, 52, 1, 0, 0, 0);
	func_2(iVar0, 4, 54, 1, 0, 0, 0);
	func_2(iVar0, 4, 55, 1, 0, 0, 0);
	func_2(iVar0, 4, 56, 1, 0, 0, 0);
	func_2(iVar0, 4, 57, 1, 0, 0, 0);
	func_2(iVar0, 4, 58, 1, 0, 0, 0);
	func_2(iVar0, 4, 59, 1, 0, 0, 0);
	func_2(iVar0, 4, 60, 1, 0, 0, 0);
	func_2(iVar0, 4, 61, 1, 0, 0, 0);
	func_2(iVar0, 4, 62, 1, 0, 0, 0);
	func_2(iVar0, 4, 63, 1, 0, 0, 0);
	func_2(iVar0, 4, 64, 1, 0, 0, 0);
	func_2(iVar0, 4, 65, 1, 0, 0, 0);
	func_2(iVar0, 4, 66, 1, 0, 0, 0);
	func_2(iVar0, 4, 67, 1, 0, 0, 0);
	func_2(iVar0, 4, 68, 1, 0, 0, 0);
	func_2(iVar0, 4, 69, 1, 0, 0, 0);
	func_2(iVar0, 4, 70, 1, 0, 0, 0);
	func_2(iVar0, 4, 71, 1, 0, 0, 0);
	func_2(iVar0, 4, 72, 1, 1, 0, 1);
	func_2(iVar0, 4, 73, 1, 0, 0, 0);
	func_2(iVar0, 4, 74, 1, 0, 0, 0);
	func_2(iVar0, 4, 75, 1, 0, 0, 0);
	func_2(iVar0, 4, 76, 1, 0, 0, 0);
	func_2(iVar0, 4, 77, 1, 0, 0, 0);
	func_2(iVar0, 4, 78, 0, 0, 0, 0);
	func_2(iVar0, 4, 79, 1, 0, 0, 0);
	func_2(iVar0, 4, 80, 1, 0, 0, 0);
	func_2(iVar0, 4, 81, 1, 0, 0, 0);
	func_2(iVar0, 4, 82, 1, 0, 0, 0);
	func_2(iVar0, 4, 83, 1, 0, 0, 0);
	func_2(iVar0, 4, 84, 1, 0, 0, 0);
	func_2(iVar0, 4, 85, 1, 0, 0, 0);
	func_2(iVar0, 4, 86, 1, 0, 0, 0);
	func_2(iVar0, 4, 87, 1, 0, 0, 0);
	func_2(iVar0, 4, 88, 1, 0, 0, 0);
	func_2(iVar0, 4, 89, 1, 0, 0, 0);
	func_2(iVar0, 4, 90, 1, 0, 0, 0);
	func_2(iVar0, 4, 91, 1, 0, 0, 0);
	func_2(iVar0, 4, 92, 1, 0, 0, 0);
	func_2(iVar0, 4, 93, 1, 0, 0, 0);
	func_2(iVar0, 4, 94, 1, 0, 0, 0);
	func_2(iVar0, 4, 95, 1, 0, 0, 0);
	func_2(iVar0, 4, 96, 1, 0, 0, 0);
	func_2(iVar0, 4, 97, 1, 0, 0, 0);
	func_2(iVar0, 4, 98, 1, 0, 0, 0);
	func_2(iVar0, 4, 99, 1, 0, 0, 0);
	func_2(iVar0, 4, 100, 1, 0, 0, 0);
	func_2(iVar0, 4, 101, 1, 0, 0, 0);
	func_2(iVar0, 4, 102, 1, 1, 0, 1);
	func_2(iVar0, 4, 103, 1, 1, 0, 1);
	func_2(iVar0, 4, 104, 1, 0, 0, 0);
	func_2(iVar0, 4, 105, 1, 0, 0, 0);
	func_2(iVar0, 4, 106, 1, 0, 0, 0);
	func_2(iVar0, 4, 107, 1, 0, 0, 0);
	func_2(iVar0, 4, 108, 1, 0, 0, 0);
	func_2(iVar0, 4, 109, 1, 0, 0, 0);
	func_2(iVar0, 4, 110, 1, 0, 0, 0);
	func_2(iVar0, 4, 111, 1, 1, 0, 1);
	func_2(iVar0, 4, 112, 1, 1, 0, 1);
	func_2(iVar0, 4, 113, 1, 0, 0, 0);
	func_2(iVar0, 4, 114, 1, 0, 0, 0);
	func_2(iVar0, 4, 115, 1, 0, 0, 0);
	func_2(iVar0, 4, 116, 1, 0, 0, 0);
	func_2(iVar0, 6, 0, 1, 1, 0, 1);
	func_2(iVar0, 6, 1, 1, 0, 0, 0);
	func_2(iVar0, 6, 2, 1, 0, 0, 0);
	func_2(iVar0, 6, 3, 1, 0, 0, 0);
	func_2(iVar0, 6, 4, 1, 0, 0, 0);
	func_2(iVar0, 6, 5, 1, 0, 0, 0);
	func_2(iVar0, 6, 6, 1, 0, 0, 0);
	func_2(iVar0, 6, 7, 1, 0, 0, 0);
	func_2(iVar0, 6, 8, 1, 0, 0, 0);
	func_2(iVar0, 6, 9, 1, 0, 0, 0);
	func_2(iVar0, 6, 10, 1, 0, 0, 0);
	func_2(iVar0, 6, 11, 1, 0, 0, 0);
	func_2(iVar0, 6, 12, 1, 0, 0, 0);
	func_2(iVar0, 6, 13, 1, 0, 0, 0);
	func_2(iVar0, 6, 14, 1, 0, 0, 0);
	func_2(iVar0, 6, 15, 1, 0, 0, 0);
	func_2(iVar0, 6, 16, 1, 0, 0, 0);
	func_2(iVar0, 6, 17, 1, 1, 0, 1);
	func_2(iVar0, 6, 18, 1, 1, 0, 1);
	func_2(iVar0, 6, 19, 1, 0, 0, 0);
	func_2(iVar0, 6, 20, 1, 0, 0, 0);
	func_2(iVar0, 6, 21, 1, 0, 0, 0);
	func_2(iVar0, 6, 22, 1, 0, 0, 0);
	func_2(iVar0, 6, 23, 1, 0, 0, 0);
	func_2(iVar0, 6, 24, 1, 0, 0, 0);
	func_2(iVar0, 6, 25, 1, 0, 0, 0);
	func_2(iVar0, 6, 26, 1, 0, 0, 0);
	func_2(iVar0, 6, 27, 1, 0, 0, 0);
	func_2(iVar0, 6, 28, 1, 0, 0, 0);
	func_2(iVar0, 6, 29, 1, 0, 0, 0);
	func_2(iVar0, 6, 30, 1, 0, 0, 0);
	func_2(iVar0, 6, 31, 1, 0, 0, 0);
	func_2(iVar0, 6, 32, 1, 0, 0, 0);
	func_2(iVar0, 6, 33, 1, 0, 0, 0);
	func_2(iVar0, 6, 34, 1, 0, 0, 0);
	func_2(iVar0, 6, 35, 1, 0, 0, 0);
	func_2(iVar0, 6, 36, 1, 1, 0, 1);
	func_2(iVar0, 6, 37, 1, 0, 0, 0);
	func_2(iVar0, 6, 38, 1, 0, 0, 0);
	func_2(iVar0, 6, 39, 1, 0, 0, 0);
	func_2(iVar0, 6, 40, 1, 0, 0, 0);
	func_2(iVar0, 6, 41, 1, 0, 0, 0);
	func_2(iVar0, 6, 42, 1, 0, 0, 0);
	func_2(iVar0, 6, 43, 1, 0, 0, 0);
	func_2(iVar0, 6, 44, 1, 0, 0, 0);
	func_2(iVar0, 6, 45, 1, 0, 0, 0);
	func_2(iVar0, 6, 46, 1, 0, 0, 0);
	func_2(iVar0, 6, 47, 1, 0, 0, 0);
	func_2(iVar0, 6, 48, 1, 0, 0, 0);
	func_2(iVar0, 6, 49, 1, 0, 0, 0);
	func_2(iVar0, 6, 50, 1, 0, 0, 0);
	func_2(iVar0, 6, 51, 1, 0, 0, 0);
	func_2(iVar0, 6, 52, 1, 1, 0, 1);
	func_2(iVar0, 6, 53, 1, 0, 0, 0);
	func_2(iVar0, 6, 54, 1, 0, 0, 0);
	func_2(iVar0, 6, 55, 1, 0, 0, 0);
	func_2(iVar0, 6, 56, 1, 0, 0, 0);
	func_2(iVar0, 6, 57, 1, 0, 0, 0);
	func_2(iVar0, 6, 58, 1, 0, 0, 0);
	func_2(iVar0, 6, 59, 1, 0, 0, 0);
	func_2(iVar0, 6, 60, 1, 0, 0, 0);
	func_2(iVar0, 6, 61, 1, 0, 0, 0);
	func_2(iVar0, 6, 62, 1, 0, 0, 0);
	func_2(iVar0, 6, 63, 1, 0, 0, 0);
	func_2(iVar0, 6, 64, 1, 0, 0, 0);
	func_2(iVar0, 6, 65, 1, 0, 0, 0);
	func_2(iVar0, 6, 66, 1, 0, 0, 0);
	func_2(iVar0, 6, 67, 1, 0, 0, 0);
	func_2(iVar0, 6, 68, 1, 0, 0, 0);
	func_2(iVar0, 6, 69, 1, 0, 0, 0);
	func_2(iVar0, 6, 70, 1, 0, 0, 0);
	func_2(iVar0, 6, 71, 1, 0, 0, 0);
	func_2(iVar0, 6, 72, 1, 0, 0, 0);
	func_2(iVar0, 6, 73, 1, 1, 0, 1);
	func_2(iVar0, 6, 74, 1, 0, 0, 0);
	func_2(iVar0, 6, 75, 1, 0, 0, 0);
	func_2(iVar0, 6, 76, 1, 0, 0, 0);
	func_2(iVar0, 6, 77, 1, 0, 0, 0);
	func_2(iVar0, 6, 78, 1, 0, 0, 0);
	func_2(iVar0, 6, 79, 1, 0, 0, 0);
	func_2(iVar0, 6, 80, 1, 0, 0, 0);
	func_2(iVar0, 6, 81, 1, 0, 0, 0);
	func_2(iVar0, 6, 82, 1, 0, 0, 0);
	func_2(iVar0, 6, 83, 1, 0, 0, 0);
	func_2(iVar0, 6, 84, 1, 0, 0, 0);
	func_2(iVar0, 6, 85, 1, 0, 0, 0);
	func_2(iVar0, 6, 86, 1, 0, 0, 0);
	func_2(iVar0, 6, 87, 1, 0, 0, 0);
	func_2(iVar0, 6, 88, 1, 0, 0, 0);
	func_2(iVar0, 6, 89, 1, 0, 0, 0);
	func_2(iVar0, 6, 90, 1, 0, 0, 0);
	func_2(iVar0, 6, 91, 1, 0, 0, 0);
	func_2(iVar0, 6, 92, 1, 0, 0, 0);
	func_2(iVar0, 6, 93, 1, 0, 0, 0);
	func_2(iVar0, 6, 94, 1, 0, 0, 0);
	func_2(iVar0, 6, 95, 1, 0, 0, 0);
	func_2(iVar0, 6, 96, 1, 0, 0, 0);
	func_2(iVar0, 6, 97, 1, 0, 0, 0);
	func_2(iVar0, 6, 98, 1, 0, 0, 0);
	func_2(iVar0, 6, 99, 1, 0, 0, 0);
	func_2(iVar0, 6, 100, 1, 0, 0, 0);
	func_2(iVar0, 6, 101, 1, 0, 0, 0);
	func_2(iVar0, 6, 102, 1, 0, 0, 0);
	func_2(iVar0, 6, 103, 1, 0, 0, 0);
	func_2(iVar0, 6, 104, 1, 0, 0, 0);
	func_2(iVar0, 6, 105, 1, 0, 0, 0);
	func_2(iVar0, 6, 106, 1, 0, 0, 0);
	func_2(iVar0, 6, 107, 1, 0, 0, 0);
	func_2(iVar0, 6, 108, 1, 0, 0, 0);
	func_2(iVar0, 6, 109, 1, 0, 0, 0);
	func_2(iVar0, 6, 110, 1, 0, 0, 0);
	func_2(iVar0, 6, 111, 1, 0, 0, 0);
	func_2(iVar0, 6, 112, 1, 0, 0, 0);
	func_2(iVar0, 6, 113, 1, 0, 0, 0);
	func_2(iVar0, 6, 114, 1, 0, 0, 0);
	func_2(iVar0, 6, 115, 1, 0, 0, 0);
	func_2(iVar0, 6, 116, 1, 0, 0, 0);
	func_2(iVar0, 6, 117, 1, 0, 0, 0);
	func_2(iVar0, 6, 118, 1, 0, 0, 0);
	func_2(iVar0, 6, 119, 1, 0, 0, 0);
	func_2(iVar0, 6, 120, 1, 0, 0, 0);
	func_2(iVar0, 6, 121, 1, 0, 0, 0);
	func_2(iVar0, 6, 122, 1, 0, 0, 0);
	func_2(iVar0, 6, 123, 1, 0, 0, 0);
	func_2(iVar0, 6, 124, 1, 0, 0, 0);
	func_2(iVar0, 6, 125, 1, 0, 0, 0);
	func_2(iVar0, 6, 126, 1, 0, 0, 0);
	func_2(iVar0, 6, 127, 1, 0, 0, 0);
	func_2(iVar0, 6, 128, 1, 0, 0, 0);
	func_2(iVar0, 6, 129, 1, 0, 0, 0);
	func_2(iVar0, 6, 130, 1, 0, 0, 0);
	func_2(iVar0, 6, 131, 1, 0, 0, 0);
	func_2(iVar0, 6, 132, 1, 0, 0, 0);
	func_2(iVar0, 6, 133, 1, 0, 0, 0);
	wait(0);
	func_2(iVar0, 5, 0, 1, 1, 0, 1);
	func_2(iVar0, 5, 1, 1, 0, 0, 0);
	func_2(iVar0, 5, 2, 1, 0, 0, 0);
	func_2(iVar0, 5, 3, 1, 1, 0, 1);
	func_2(iVar0, 5, 4, 1, 0, 0, 0);
	func_2(iVar0, 5, 5, 1, 0, 0, 0);
	func_2(iVar0, 5, 6, 1, 0, 0, 0);
	func_2(iVar0, 8, 0, 1, 1, 0, 1);
	func_2(iVar0, 8, 1, 1, 1, 0, 1);
	func_2(iVar0, 8, 2, 1, 0, 0, 0);
	func_2(iVar0, 8, 3, 1, 0, 0, 0);
	func_2(iVar0, 8, 4, 1, 0, 0, 0);
	func_2(iVar0, 8, 5, 1, 0, 0, 0);
	func_2(iVar0, 8, 7, 1, 0, 0, 0);
	func_2(iVar0, 8, 8, 1, 0, 0, 0);
	func_2(iVar0, 8, 9, 1, 0, 0, 0);
	func_2(iVar0, 8, 10, 1, 0, 0, 0);
	func_2(iVar0, 8, 11, 1, 0, 0, 0);
	func_2(iVar0, 8, 12, 1, 0, 0, 0);
	func_2(iVar0, 8, 13, 1, 0, 0, 0);
	func_2(iVar0, 8, 14, 1, 0, 0, 0);
	func_2(iVar0, 8, 15, 1, 0, 0, 0);
	func_2(iVar0, 8, 16, 1, 0, 0, 0);
	func_2(iVar0, 8, 17, 1, 0, 0, 0);
	func_2(iVar0, 8, 18, 1, 0, 0, 0);
	func_2(iVar0, 8, 19, 1, 0, 0, 0);
	func_2(iVar0, 8, 20, 1, 0, 0, 0);
	func_2(iVar0, 8, 21, 1, 0, 0, 0);
	func_2(iVar0, 8, 22, 1, 0, 0, 0);
	func_2(iVar0, 8, 23, 1, 0, 0, 0);
	func_2(iVar0, 8, 24, 1, 0, 0, 0);
	func_2(iVar0, 8, 25, 1, 0, 0, 0);
	func_2(iVar0, 8, 26, 1, 1, 0, 1);
	func_2(iVar0, 8, 27, 1, 0, 0, 0);
	func_2(iVar0, 8, 28, 1, 0, 0, 0);
	func_2(iVar0, 8, 29, 1, 0, 0, 0);
	func_2(iVar0, 8, 30, 1, 0, 0, 0);
	func_2(iVar0, 8, 31, 1, 0, 0, 0);
	func_2(iVar0, 8, 32, 1, 0, 0, 0);
	func_2(iVar0, 8, 33, 1, 0, 0, 0);
	func_2(iVar0, 8, 34, 1, 0, 0, 0);
	func_2(iVar0, 8, 35, 1, 0, 0, 0);
	func_2(iVar0, 8, 36, 1, 0, 0, 0);
	func_2(iVar0, 8, 37, 1, 0, 0, 0);
	func_2(iVar0, 8, 38, 1, 0, 0, 0);
	func_2(iVar0, 8, 39, 1, 0, 0, 0);
	func_2(iVar0, 8, 40, 1, 0, 0, 0);
	func_2(iVar0, 8, 41, 1, 0, 0, 0);
	func_2(iVar0, 8, 42, 1, 0, 0, 0);
	func_2(iVar0, 8, 43, 1, 0, 0, 0);
	func_2(iVar0, 8, 44, 1, 0, 0, 0);
	func_2(iVar0, 8, 45, 1, 0, 0, 0);
	func_2(iVar0, 8, 46, 1, 0, 0, 0);
	func_2(iVar0, 8, 47, 1, 0, 0, 0);
	func_2(iVar0, 8, 48, 1, 0, 0, 0);
	func_2(iVar0, 8, 49, 1, 0, 0, 0);
	func_2(iVar0, 8, 50, 1, 0, 0, 0);
	func_2(iVar0, 8, 51, 1, 0, 0, 0);
	func_2(iVar0, 8, 52, 1, 0, 0, 0);
	func_2(iVar0, 8, 53, 1, 0, 0, 0);
	func_2(iVar0, 8, 54, 1, 0, 0, 0);
	func_2(iVar0, 8, 55, 1, 0, 0, 0);
	func_2(iVar0, 8, 56, 1, 0, 0, 0);
	func_2(iVar0, 8, 57, 1, 0, 0, 0);
	func_2(iVar0, 8, 58, 1, 0, 0, 0);
	func_2(iVar0, 8, 59, 1, 0, 0, 0);
	func_2(iVar0, 8, 60, 1, 0, 0, 0);
	func_2(iVar0, 8, 61, 1, 0, 0, 0);
	func_2(iVar0, 8, 62, 1, 0, 0, 0);
	func_2(iVar0, 8, 63, 1, 0, 0, 0);
	func_2(iVar0, 8, 64, 1, 0, 0, 0);
	func_2(iVar0, 8, 65, 1, 0, 0, 0);
	func_2(iVar0, 8, 66, 1, 0, 0, 0);
	func_2(iVar0, 8, 67, 1, 0, 0, 0);
	func_2(iVar0, 8, 68, 1, 0, 0, 0);
	func_2(iVar0, 8, 69, 1, 0, 0, 0);
	func_2(iVar0, 8, 70, 1, 0, 0, 0);
	func_2(iVar0, 8, 71, 1, 0, 0, 0);
	func_2(iVar0, 8, 72, 1, 0, 0, 0);
	func_2(iVar0, 8, 73, 1, 0, 0, 0);
	func_2(iVar0, 8, 74, 1, 0, 0, 0);
	func_2(iVar0, 8, 75, 1, 0, 0, 0);
	func_2(iVar0, 8, 76, 1, 0, 0, 0);
	func_2(iVar0, 9, 0, 1, 1, 0, 1);
	func_2(iVar0, 9, 1, 1, 0, 0, 0);
	func_2(iVar0, 9, 2, 1, 0, 0, 0);
	func_2(iVar0, 9, 3, 1, 0, 0, 0);
	func_2(iVar0, 9, 4, 1, 0, 0, 0);
	func_2(iVar0, 9, 5, 1, 0, 0, 0);
	func_2(iVar0, 9, 6, 1, 0, 0, 0);
	func_2(iVar0, 9, 7, 1, 0, 0, 0);
	func_2(iVar0, 9, 8, 1, 0, 0, 0);
	func_2(iVar0, 9, 9, 1, 0, 0, 0);
	func_2(iVar0, 9, 10, 1, 0, 0, 0);
	func_2(iVar0, 9, 11, 1, 0, 0, 0);
	func_2(iVar0, 10, 0, 1, 1, 0, 1);
	func_2(iVar0, 10, 1, 1, 0, 0, 0);
	func_2(iVar0, 10, 2, 1, 0, 0, 0);
	func_2(iVar0, 10, 3, 1, 0, 0, 0);
	func_2(iVar0, 10, 4, 1, 0, 0, 0);
	func_2(iVar0, 10, 5, 1, 0, 0, 0);
	func_2(iVar0, 10, 6, 1, 0, 0, 0);
	func_2(iVar0, 10, 7, 1, 0, 0, 0);
	func_2(iVar0, 10, 8, 1, 0, 0, 0);
	func_2(iVar0, 10, 9, 1, 0, 0, 0);
	func_2(iVar0, 10, 10, 1, 0, 0, 0);
	func_2(iVar0, 10, 11, 1, 0, 0, 0);
	func_2(iVar0, 10, 12, 1, 0, 0, 0);
	func_2(iVar0, 10, 13, 1, 0, 0, 0);
	func_2(iVar0, 10, 14, 1, 0, 0, 0);
	func_2(iVar0, 10, 15, 1, 0, 0, 0);
	func_2(iVar0, 10, 16, 1, 0, 0, 0);
	func_2(iVar0, 10, 17, 1, 0, 0, 0);
	func_2(iVar0, 10, 18, 1, 0, 0, 0);
	func_2(iVar0, 10, 19, 1, 0, 0, 0);
	func_2(iVar0, 10, 20, 1, 0, 0, 0);
	func_2(iVar0, 10, 21, 1, 0, 0, 0);
	func_2(iVar0, 10, 22, 1, 0, 0, 0);
	func_2(iVar0, 10, 23, 1, 0, 0, 0);
	func_2(iVar0, 10, 24, 1, 0, 0, 0);
	func_2(iVar0, 10, 25, 1, 0, 0, 0);
	func_2(iVar0, 10, 26, 1, 0, 0, 0);
	func_2(iVar0, 10, 27, 1, 0, 0, 0);
	func_2(iVar0, 10, 28, 1, 0, 0, 0);
	func_2(iVar0, 10, 29, 1, 0, 0, 0);
	func_2(iVar0, 10, 30, 1, 0, 0, 0);
	func_2(iVar0, 10, 31, 1, 0, 0, 0);
	func_2(iVar0, 10, 32, 1, 0, 0, 0);
	func_2(iVar0, 10, 33, 1, 0, 0, 0);
	func_2(iVar0, 10, 34, 1, 0, 0, 0);
	func_2(iVar0, 10, 35, 1, 0, 0, 0);
	func_2(iVar0, 10, 36, 1, 0, 0, 0);
	func_2(iVar0, 10, 37, 1, 0, 0, 0);
	func_2(iVar0, 10, 38, 1, 0, 0, 0);
	func_2(iVar0, 10, 39, 1, 0, 0, 0);
	func_2(iVar0, 10, 40, 1, 0, 0, 0);
	func_2(iVar0, 10, 41, 1, 0, 0, 0);
	func_2(iVar0, 10, 42, 1, 0, 0, 0);
	func_2(iVar0, 10, 43, 1, 0, 0, 0);
	func_2(iVar0, 10, 44, 1, 0, 0, 0);
	func_2(iVar0, 10, 45, 1, 0, 0, 0);
	func_2(iVar0, 10, 46, 1, 0, 0, 0);
	func_2(iVar0, 10, 47, 1, 0, 0, 0);
	func_2(iVar0, 10, 48, 1, 0, 0, 0);
	func_2(iVar0, 10, 49, 1, 0, 0, 0);
	func_2(iVar0, 10, 50, 1, 0, 0, 0);
	func_2(iVar0, 10, 51, 1, 0, 0, 0);
	func_2(iVar0, 10, 52, 1, 0, 0, 0);
	func_2(iVar0, 1, 0, 1, 1, 0, 0);
	func_2(iVar0, 1, 2, 1, 1, 0, 0);
	func_2(iVar0, 1, 3, 1, 1, 0, 0);
	func_2(iVar0, 1, 4, 1, 1, 0, 0);
	func_2(iVar0, 7, 0, 1, 1, 0, 0);
	func_2(iVar0, 11, 0, 1, 1, 0, 1);
	func_2(iVar0, 11, 1, 1, 1, 0, 1);
	func_2(iVar0, 11, 2, 1, 1, 0, 1);
	func_2(iVar0, 11, 3, 1, 1, 0, 1);
	func_2(iVar0, 11, 4, 1, 1, 0, 1);
	func_2(iVar0, 11, 5, 1, 1, 0, 1);
	func_2(iVar0, 11, 6, 1, 1, 0, 1);
	func_2(iVar0, 11, 7, 1, 1, 0, 1);
	func_2(iVar0, 11, 8, 1, 1, 0, 1);
	func_2(iVar0, 11, 9, 1, 0, 0, 0);
	func_2(iVar0, 11, 10, 1, 0, 0, 0);
	func_2(iVar0, 11, 11, 1, 0, 0, 0);
	func_2(iVar0, 11, 12, 1, 0, 0, 0);
	func_2(iVar0, 11, 13, 1, 0, 0, 0);
	func_2(iVar0, 11, 14, 1, 0, 0, 0);
	func_2(iVar0, 11, 15, 1, 0, 0, 0);
	func_2(iVar0, 11, 16, 1, 0, 0, 0);
	func_2(iVar0, 11, 17, 1, 0, 0, 0);
	func_2(iVar0, 11, 18, 1, 0, 0, 0);
	func_2(iVar0, 11, 19, 1, 0, 0, 0);
	func_2(iVar0, 11, 20, 1, 0, 0, 0);
	func_2(iVar0, 11, 21, 1, 0, 0, 0);
	func_2(iVar0, 11, 22, 1, 0, 0, 0);
	func_2(iVar0, 11, 23, 1, 0, 0, 0);
	func_2(iVar0, 11, 24, 1, 0, 0, 0);
	func_2(iVar0, 11, 25, 1, 0, 0, 0);
	func_2(iVar0, 11, 26, 1, 0, 0, 0);
	func_2(iVar0, 11, 27, 1, 0, 0, 0);
	func_2(iVar0, 11, 28, 1, 0, 0, 0);
	func_2(iVar0, 11, 29, 1, 0, 0, 0);
	func_2(iVar0, 11, 30, 1, 0, 0, 0);
	func_2(iVar0, 11, 31, 1, 0, 0, 0);
	func_2(iVar0, 11, 32, 1, 0, 0, 0);
	func_2(iVar0, 11, 33, 1, 0, 0, 0);
	func_2(iVar0, 11, 34, 1, 0, 0, 0);
	func_2(iVar0, 11, 35, 1, 0, 0, 0);
	func_2(iVar0, 11, 36, 1, 0, 0, 0);
	func_2(iVar0, 11, 37, 1, 0, 0, 0);
	func_2(iVar0, 11, 38, 1, 0, 0, 0);
	func_2(iVar0, 11, 39, 1, 0, 0, 0);
	func_2(iVar0, 11, 40, 1, 0, 0, 0);
	func_2(iVar0, 11, 41, 1, 1, 0, 1);
	func_2(iVar0, 11, 42, 1, 1, 0, 1);
	func_2(iVar0, 11, 43, 1, 1, 0, 1);
	func_2(iVar0, 11, 44, 1, 1, 0, 1);
	func_2(iVar0, 11, 45, 1, 1, 0, 1);
	func_2(iVar0, 11, 46, 1, 1, 0, 1);
	func_2(iVar0, 11, 47, 1, 1, 0, 1);
	func_2(iVar0, 11, 48, 1, 0, 0, 0);
	func_2(iVar0, 11, 49, 1, 0, 0, 0);
	func_2(iVar0, 11, 50, 1, 0, 0, 0);
	func_2(iVar0, 11, 51, 1, 0, 0, 0);
	func_2(iVar0, 11, 52, 1, 0, 0, 0);
	func_2(iVar0, 11, 53, 1, 0, 0, 0);
	func_2(iVar0, 11, 54, 1, 0, 0, 0);
	func_2(iVar0, 11, 55, 1, 0, 0, 0);
	func_2(iVar0, 11, 56, 1, 0, 0, 0);
	func_2(iVar0, 11, 57, 1, 0, 0, 0);
	func_2(iVar0, 11, 58, 1, 0, 0, 0);
	func_2(iVar0, 11, 59, 1, 0, 0, 0);
	func_2(iVar0, 11, 60, 1, 0, 0, 0);
	func_2(iVar0, 11, 61, 1, 0, 0, 0);
	func_2(iVar0, 11, 62, 1, 0, 0, 0);
	func_2(iVar0, 12, 0, 1, 1, 0, 1);
	func_2(iVar0, 12, 1, 1, 0, 0, 0);
	func_2(iVar0, 12, 2, 1, 0, 0, 0);
	func_2(iVar0, 12, 3, 1, 0, 0, 0);
	func_2(iVar0, 12, 4, 1, 0, 0, 0);
	func_2(iVar0, 12, 5, 1, 0, 0, 0);
	func_2(iVar0, 12, 6, 1, 0, 0, 0);
	func_2(iVar0, 12, 7, 1, 0, 0, 0);
	func_2(iVar0, 12, 8, 1, 0, 0, 0);
	func_2(iVar0, 12, 9, 1, 0, 0, 0);
	func_2(iVar0, 12, 10, 1, 0, 0, 0);
	func_2(iVar0, 12, 11, 0, 0, 0, 0);
	func_2(iVar0, 12, 12, 1, 0, 0, 0);
	func_2(iVar0, 12, 13, 0, 0, 0, 0);
	func_2(iVar0, 12, 14, 0, 0, 0, 0);
	func_2(iVar0, 12, 15, 0, 0, 0, 0);
	func_2(iVar0, 12, 17, 1, 1, 0, 1);
	func_2(iVar0, 12, 18, 1, 0, 0, 0);
	func_2(iVar0, 12, 19, 1, 1, 0, 1);
	func_2(iVar0, 12, 20, 1, 1, 0, 1);
	func_2(iVar0, 12, 21, 1, 1, 0, 1);
	func_2(iVar0, 12, 22, 1, 0, 0, 0);
	func_2(iVar0, 12, 23, 1, 0, 0, 0);
	func_2(iVar0, 12, 24, 1, 0, 0, 0);
	func_2(iVar0, 12, 25, 1, 0, 0, 0);
	func_2(iVar0, 12, 26, 1, 0, 0, 0);
	func_2(iVar0, 12, 27, 1, 0, 0, 0);
	func_2(iVar0, 12, 28, 1, 0, 0, 0);
	func_2(iVar0, 12, 29, 1, 0, 0, 0);
	func_2(iVar0, 12, 30, 1, 0, 0, 0);
	func_2(iVar0, 12, 31, 1, 0, 0, 0);
	func_2(iVar0, 12, 32, 1, 0, 0, 0);
	func_2(iVar0, 12, 33, 1, 0, 0, 0);
	func_2(iVar0, 12, 34, 1, 0, 0, 0);
	func_2(iVar0, 12, 35, 1, 0, 0, 0);
	func_2(iVar0, 12, 36, 1, 0, 0, 0);
	func_2(iVar0, 12, 37, 1, 0, 0, 0);
	func_2(iVar0, 12, 38, 1, 1, 0, 1);
	func_2(iVar0, 12, 39, 1, 1, 0, 1);
	func_2(iVar0, 12, 40, 1, 1, 0, 1);
	func_2(iVar0, 12, 41, 1, 0, 0, 0);
	func_2(iVar0, 12, 42, 1, 0, 0, 0);
	func_2(iVar0, 12, 43, 1, 0, 0, 0);
	func_2(iVar0, 12, 44, 1, 0, 0, 0);
	func_2(iVar0, 12, 45, 1, 0, 0, 0);
	func_2(iVar0, 12, 46, 1, 0, 0, 0);
	func_2(iVar0, 13, 0, 1, 0, 0, 0);
	func_2(iVar0, 13, 1, 1, 0, 0, 0);
	func_2(iVar0, 13, 2, 1, 0, 0, 0);
	func_2(iVar0, 13, 3, 1, 0, 0, 0);
	func_2(iVar0, 13, 4, 1, 0, 0, 0);
	func_2(iVar0, 13, 5, 1, 0, 0, 0);
	func_2(iVar0, 13, 6, 1, 0, 0, 0);
	func_2(iVar0, 13, 7, 1, 0, 0, 0);
	func_2(iVar0, 13, 8, 1, 0, 0, 0);
	func_2(iVar0, 14, 10, 1, 0, 0, 0);
	func_2(iVar0, 14, 158, 1, 1, 0, 1);
	func_2(iVar0, 14, 159, 1, 0, 0, 0);
	func_2(iVar0, 14, 160, 1, 0, 0, 0);
	func_2(iVar0, 14, 161, 1, 0, 0, 0);
	func_2(iVar0, 14, 162, 1, 0, 0, 0);
	func_2(iVar0, 14, 163, 1, 0, 0, 0);
	func_2(iVar0, 14, 164, 1, 0, 0, 0);
	func_2(iVar0, 14, 165, 1, 0, 0, 0);
	func_2(iVar0, 14, 166, 1, 0, 0, 0);
	func_2(iVar0, 14, 167, 1, 0, 0, 0);
	func_2(iVar0, 14, 168, 1, 0, 0, 0);
	func_2(iVar0, 14, 169, 1, 0, 0, 0);
	func_2(iVar0, 14, 170, 1, 0, 0, 0);
	func_2(iVar0, 14, 171, 1, 0, 0, 0);
	func_2(iVar0, 14, 172, 1, 0, 0, 0);
	func_2(iVar0, 14, 173, 1, 0, 0, 0);
	func_2(iVar0, 14, 174, 1, 0, 0, 0);
	func_2(iVar0, 14, 14, 1, 0, 0, 0);
	func_2(iVar0, 14, 13, 1, 0, 0, 0);
	func_2(iVar0, 14, 16, 1, 0, 0, 0);
	func_2(iVar0, 14, 17, 1, 0, 0, 0);
	func_2(iVar0, 14, 18, 1, 0, 0, 0);
	func_2(iVar0, 14, 19, 1, 0, 0, 0);
	func_2(iVar0, 14, 20, 1, 0, 0, 0);
	func_2(iVar0, 14, 21, 1, 0, 0, 0);
	func_2(iVar0, 14, 22, 1, 0, 0, 0);
	func_2(iVar0, 14, 23, 1, 0, 0, 0);
	func_2(iVar0, 14, 24, 1, 0, 0, 0);
	func_2(iVar0, 14, 15, 1, 0, 0, 0);
	func_2(iVar0, 14, 82, 1, 0, 0, 0);
	func_2(iVar0, 14, 83, 1, 0, 0, 0);
	func_2(iVar0, 14, 84, 1, 0, 0, 0);
	func_2(iVar0, 14, 85, 1, 0, 0, 0);
	func_2(iVar0, 14, 86, 1, 0, 0, 0);
	func_2(iVar0, 14, 87, 1, 0, 0, 0);
	func_2(iVar0, 14, 88, 1, 0, 0, 0);
	func_2(iVar0, 14, 89, 1, 0, 0, 0);
	func_2(iVar0, 14, 90, 1, 0, 0, 0);
	func_2(iVar0, 14, 91, 1, 0, 0, 0);
	func_2(iVar0, 14, 92, 1, 0, 0, 0);
	func_2(iVar0, 14, 93, 1, 0, 0, 0);
	func_2(iVar0, 14, 94, 1, 0, 0, 0);
	func_2(iVar0, 14, 95, 1, 1, 0, 1);
	func_2(iVar0, 14, 96, 1, 0, 0, 0);
	func_2(iVar0, 14, 97, 1, 0, 0, 0);
	func_2(iVar0, 14, 98, 1, 0, 0, 0);
	func_2(iVar0, 14, 99, 1, 0, 0, 0);
	func_2(iVar0, 14, 100, 1, 0, 0, 0);
	func_2(iVar0, 14, 101, 1, 0, 0, 0);
	func_2(iVar0, 14, 102, 1, 0, 0, 0);
	func_2(iVar0, 14, 103, 1, 0, 0, 0);
	func_2(iVar0, 14, 104, 1, 0, 0, 0);
	func_2(iVar0, 14, 105, 1, 0, 0, 0);
	func_2(iVar0, 14, 106, 1, 0, 0, 0);
	func_2(iVar0, 14, 107, 1, 0, 0, 0);
	func_2(iVar0, 14, 108, 1, 0, 0, 0);
	func_2(iVar0, 14, 109, 1, 0, 0, 0);
	func_2(iVar0, 14, 110, 1, 0, 0, 0);
	func_2(iVar0, 14, 111, 1, 0, 0, 0);
	func_2(iVar0, 14, 112, 1, 0, 0, 0);
	func_2(iVar0, 14, 113, 1, 0, 0, 0);
	func_2(iVar0, 14, 114, 1, 0, 0, 0);
	func_2(iVar0, 14, 115, 1, 0, 0, 0);
	func_2(iVar0, 14, 116, 1, 0, 0, 0);
	func_2(iVar0, 14, 117, 1, 0, 0, 0);
	func_2(iVar0, 14, 118, 1, 0, 0, 0);
	func_2(iVar0, 14, 119, 1, 0, 0, 0);
	func_2(iVar0, 14, 120, 1, 0, 0, 0);
	func_2(iVar0, 14, 121, 1, 0, 0, 0);
	func_2(iVar0, 14, 122, 1, 0, 0, 0);
	func_2(iVar0, 14, 123, 1, 0, 0, 0);
	func_2(iVar0, 14, 124, 1, 0, 0, 0);
	func_2(iVar0, 14, 125, 1, 0, 0, 0);
	func_2(iVar0, 14, 126, 1, 0, 0, 0);
	func_2(iVar0, 14, 127, 1, 0, 0, 0);
	func_2(iVar0, 14, 128, 1, 0, 0, 0);
	func_2(iVar0, 14, 129, 1, 0, 0, 0);
	func_2(iVar0, 14, 130, 1, 0, 0, 0);
	func_2(iVar0, 14, 131, 1, 0, 0, 0);
	func_2(iVar0, 14, 132, 1, 0, 0, 0);
	func_2(iVar0, 14, 133, 1, 0, 0, 0);
	func_2(iVar0, 14, 134, 1, 0, 0, 0);
	func_2(iVar0, 14, 135, 1, 0, 0, 0);
	func_2(iVar0, 14, 136, 1, 0, 0, 0);
	func_2(iVar0, 14, 137, 1, 0, 0, 0);
	func_2(iVar0, 14, 138, 1, 0, 0, 0);
	func_2(iVar0, 14, 139, 1, 0, 0, 0);
	func_2(iVar0, 14, 140, 1, 0, 0, 0);
	func_2(iVar0, 14, 141, 1, 0, 0, 0);
	func_2(iVar0, 14, 142, 1, 0, 0, 0);
	func_2(iVar0, 14, 143, 1, 0, 0, 0);
	func_2(iVar0, 14, 144, 1, 0, 0, 0);
	func_2(iVar0, 14, 145, 1, 0, 0, 0);
	func_2(iVar0, 14, 146, 1, 0, 0, 0);
	func_2(iVar0, 14, 147, 1, 0, 0, 0);
	func_2(iVar0, 14, 148, 1, 0, 0, 0);
	func_2(iVar0, 14, 149, 1, 0, 0, 0);
	func_2(iVar0, 14, 150, 1, 0, 0, 0);
	func_2(iVar0, 14, 151, 1, 0, 0, 0);
	func_2(iVar0, 14, 152, 1, 0, 0, 0);
	func_2(iVar0, 14, 153, 1, 0, 0, 0);
	func_2(iVar0, 14, 154, 1, 0, 0, 0);
	func_2(iVar0, 14, 155, 1, 0, 0, 0);
	func_2(iVar0, 14, 156, 1, 0, 0, 0);
	func_2(iVar0, 14, 11, 1, 0, 0, 0);
	func_2(iVar0, 14, 12, 1, 0, 0, 0);
	func_2(iVar0, 14, 25, 1, 0, 0, 0);
	func_2(iVar0, 14, 26, 0, 0, 0, 0);
	func_2(iVar0, 14, 27, 0, 0, 0, 0);
	func_2(iVar0, 14, 28, 0, 0, 0, 0);
	func_2(iVar0, 14, 29, 0, 0, 0, 0);
	func_2(iVar0, 14, 30, 0, 0, 0, 0);
	func_2(iVar0, 14, 31, 0, 0, 0, 0);
	func_2(iVar0, 14, 32, 0, 0, 0, 0);
	func_2(iVar0, 14, 33, 0, 0, 0, 0);
	func_2(iVar0, 14, 34, 0, 0, 0, 0);
	func_2(iVar0, 14, 35, 0, 0, 0, 0);
	func_2(iVar0, 14, 36, 0, 0, 0, 0);
	func_2(iVar0, 14, 37, 0, 0, 0, 0);
	func_2(iVar0, 14, 38, 0, 0, 0, 0);
	func_2(iVar0, 14, 39, 0, 0, 0, 0);
	func_2(iVar0, 14, 40, 1, 0, 0, 0);
	func_2(iVar0, 14, 41, 1, 1, 0, 1);
	func_2(iVar0, 14, 42, 1, 0, 0, 0);
	func_2(iVar0, 14, 43, 1, 0, 0, 0);
	func_2(iVar0, 14, 44, 1, 0, 0, 0);
	func_2(iVar0, 14, 45, 1, 0, 0, 0);
	func_2(iVar0, 14, 46, 1, 0, 0, 0);
	func_2(iVar0, 14, 47, 1, 0, 0, 0);
	func_2(iVar0, 14, 48, 1, 0, 0, 0);
	func_2(iVar0, 14, 49, 1, 0, 0, 0);
	func_2(iVar0, 14, 50, 1, 0, 0, 0);
	func_2(iVar0, 14, 51, 1, 0, 0, 0);
	func_2(iVar0, 14, 52, 1, 0, 0, 0);
	func_2(iVar0, 14, 53, 1, 0, 0, 0);
	func_2(iVar0, 14, 54, 1, 0, 0, 0);
	func_2(iVar0, 14, 55, 1, 0, 0, 0);
	func_2(iVar0, 14, 56, 1, 0, 0, 0);
	func_2(iVar0, 14, 57, 1, 0, 0, 0);
	func_2(iVar0, 14, 58, 1, 0, 0, 0);
	func_2(iVar0, 14, 59, 1, 0, 0, 0);
	func_2(iVar0, 14, 60, 1, 0, 0, 0);
	func_2(iVar0, 14, 61, 1, 0, 0, 0);
	func_2(iVar0, 14, 63, 1, 0, 0, 0);
	func_2(iVar0, 14, 64, 1, 1, 0, 1);
	func_2(iVar0, 14, 65, 1, 0, 0, 0);
	func_2(iVar0, 14, 66, 1, 0, 0, 0);
	func_2(iVar0, 14, 67, 1, 0, 0, 0);
	func_2(iVar0, 14, 68, 1, 0, 0, 0);
	func_2(iVar0, 14, 69, 1, 0, 0, 0);
	func_2(iVar0, 14, 70, 1, 0, 0, 0);
	func_2(iVar0, 14, 71, 1, 0, 0, 0);
	func_2(iVar0, 14, 72, 1, 0, 0, 0);
	func_2(iVar0, 14, 73, 1, 0, 0, 0);
	func_2(iVar0, 14, 74, 1, 0, 0, 0);
	func_2(iVar0, 14, 75, 1, 0, 0, 0);
	func_2(iVar0, 14, 76, 1, 0, 0, 0);
	func_2(iVar0, 14, 77, 1, 0, 0, 0);
	func_2(iVar0, 14, 78, 1, 0, 0, 0);
	func_2(iVar0, 14, 79, 1, 0, 0, 0);
	func_2(iVar0, 14, 80, 1, 0, 0, 0);
	func_2(iVar0, 14, 81, 1, 0, 0, 0);
	Global_112293.f_2361.f_539.f_2353 = 1;
}

void func_2(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	func_87(iParam0, iParam1, iParam2, bParam3);
	func_76(iParam0, iParam1, iParam2, bParam4, 1);
	if (bParam5)
	{
		func_75(iParam0, iParam1, iParam2, 0);
	}
	if (iParam6 == 1)
	{
		func_3(iParam0, iParam1, iParam2, 0);
	}
}

int func_3(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	Global_77059[1 /*14*/] = { func_5(iParam0, iParam1, iParam2, -1) };
	if (unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 0) && !unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 6))
	{
		if (bParam3)
		{
			func_4(iParam1, Global_77059[1 /*14*/].f_5, Global_77059[1 /*14*/].f_2, 2, Global_77059[1 /*14*/].f_1, 0, 1);
		}
		else
		{
			func_4(iParam1, Global_77059[1 /*14*/].f_5, Global_77059[1 /*14*/].f_2, 2, Global_77059[1 /*14*/].f_1, 1, 0);
		}
		return 1;
	}
	return 0;
}

int func_4(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/][iParam3]), iParam4);
		}
		return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}
	return 0;
}

struct<14> func_5(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_74();
	if (iParam0 == joaat("player_zero"))
	{
		func_56(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_one"))
	{
		func_37(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_two"))
	{
		func_6(iParam1, iParam2);
	}
	return Global_77059[0 /*14*/];
}

void func_6(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_36(iParam1);
			break;
		
		case 2:
			func_35(iParam1);
			break;
		
		case 3:
			func_32(iParam1);
			break;
		
		case 4:
			func_31(iParam1);
			break;
		
		case 6:
			func_30(iParam1);
			break;
		
		case 5:
			func_29(iParam1);
			break;
		
		case 8:
			func_28(iParam1);
			break;
		
		case 9:
			func_27(iParam1);
			break;
		
		case 10:
			func_26(iParam1);
			break;
		
		case 1:
			func_25(iParam1);
			break;
		
		case 7:
			func_24(iParam1);
			break;
		
		case 11:
			func_23(iParam1);
			break;
		
		case 12:
			func_22(iParam1);
			break;
		
		case 13:
			func_21(iParam1);
			break;
		
		case 14:
			func_7(iParam1);
			break;
	}
}

void func_7(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	Global_77059[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 154:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P2_E1", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 45;
			iVar5 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P2_E2", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P2_E2_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P2_E2_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P2_E2_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 52;
			iVar5 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P2_E2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 54;
			iVar5 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P2_E2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 54;
			iVar5 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P2_E2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P2_E2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P2_E2_8", 16);
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P2_E2_9", 16);
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P2_E3", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P2_E3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P2_E3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P2_E3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P2_E3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P2_E3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P2_E3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P2_E3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P2_E3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P2_E3_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P2_E7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P2_E7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P2_E7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P2_E7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 59;
			iVar5 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P2_E7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P2_E7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P2_E7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P2_E7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 59;
			iVar5 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P2_E7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 79;
			iVar5 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P2_E7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 79;
			iVar5 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P2_E8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 150;
			iVar5 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P2_E8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 150;
			iVar5 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P2_E8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P2_E8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P2_E8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 180;
			iVar5 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P2_E8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P2_E8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P2_E8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P2_E8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 210;
			iVar5 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P2_E8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 215;
			iVar5 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P2_E9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P2_E9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P2_E9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 169;
			iVar5 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P2_E9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 169;
			iVar5 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P2_E9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P2_E9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P2_E9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P2_E9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P2_E9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P2_E9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P2_E10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 49;
			iVar5 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P2_E10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P2_E10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 52;
			iVar5 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P2_E10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P2_E10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P2_E10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P2_E10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P2_E10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 63;
			iVar5 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P2_E10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P2_E10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 100;
			iVar5 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P2_H2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 320;
			iVar5 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "PROPS_P2_H7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "PROPS_P2_H7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar5 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar5 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 10;
			iVar5 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 11;
			iVar5 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 12;
			iVar5 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 13;
			iVar5 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 14;
			iVar5 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 15;
			iVar5 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 450;
			iVar5 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H26_0", 16);
			iVar3 = 26;
			iVar4 = 0;
			iVar1 = 20;
			iVar5 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H26_1", 16);
			iVar3 = 26;
			iVar4 = 1;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H26_2", 16);
			iVar3 = 26;
			iVar4 = 2;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H26_3", 16);
			iVar3 = 26;
			iVar4 = 3;
			iVar1 = 22;
			iVar5 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H26_4", 16);
			iVar3 = 26;
			iVar4 = 4;
			iVar1 = 20;
			iVar5 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H26_5", 16);
			iVar3 = 26;
			iVar4 = 5;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H26_6", 16);
			iVar3 = 26;
			iVar4 = 6;
			iVar1 = 28;
			iVar5 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H26_7", 16);
			iVar3 = 26;
			iVar4 = 7;
			iVar1 = 24;
			iVar5 = 0;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "PROPS_P1_H26_8", 16);
			iVar3 = 26;
			iVar4 = 8;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P1_H26_9", 16);
			iVar3 = 26;
			iVar4 = 9;
			iVar1 = 22;
			iVar5 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P1_H26_10", 16);
			iVar3 = 26;
			iVar4 = 10;
			iVar1 = 18;
			iVar5 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P1_H26_11", 16);
			iVar3 = 26;
			iVar4 = 11;
			iVar1 = 20;
			iVar5 = 0;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_H26_12", 16);
			iVar3 = 26;
			iVar4 = 12;
			iVar1 = 24;
			iVar5 = 0;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_H26_13", 16);
			iVar3 = 26;
			iVar4 = 13;
			iVar1 = 22;
			iVar5 = 0;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_H26_14", 16);
			iVar3 = 26;
			iVar4 = 14;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_H26_15", 16);
			iVar3 = 26;
			iVar4 = 15;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 87:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		default:
			func_19(iVar7, iParam0, 155, -1);
			return;
			break;
	}
	func_8(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_8(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	var uVar0;
	int iVar1;
	
	uParam0->f_6 = 0;
	*uParam0 = iParam9;
	uParam0->f_1 = (iParam2 % 32);
	uParam0->f_2 = (iParam2 / 32);
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&(uParam0->f_8), sParam3, 16);
	uParam0->f_13 = iParam8;
	uParam0->f_12 = func_18(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (unk_0x15173FB88ABC94F9(sParam3) != unk_0x15173FB88ABC94F9("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		unk_0x191DDA30577F440A(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		unk_0x191DDA30577F440A(&(uParam0->f_6), 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			unk_0x191DDA30577F440A(&(uParam0->f_6), 5);
		}
		unk_0x191DDA30577F440A(&(uParam0->f_6), 1);
		unk_0x191DDA30577F440A(&(uParam0->f_6), 2);
		unk_0x191DDA30577F440A(&(uParam0->f_6), 6);
		if (func_17(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (unk_0x01758128AAB0BA8F(Global_2621444, joaat("REBREATHER"), 0))
			{
				unk_0x191DDA30577F440A(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_15(Global_2621444, 1, 1, 1, -1))
			{
				unk_0xC664C0067EEAB8D1(&(uParam0->f_6), 2);
			}
			if (!func_15(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x191DDA30577F440A(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_15(Global_2621444, 1, 1, 1, -1))
			{
				unk_0xC664C0067EEAB8D1(&(uParam0->f_6), 2);
			}
			if (!func_15(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x191DDA30577F440A(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_15(Global_2621444, 1, 1, 1, -1))
			{
				unk_0xC664C0067EEAB8D1(&(uParam0->f_6), 2);
			}
			if (!func_15(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x191DDA30577F440A(&(uParam0->f_6), 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		unk_0x191DDA30577F440A(&(uParam0->f_6), 0);
		unk_0x191DDA30577F440A(&(uParam0->f_6), 5);
		if (func_4(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			unk_0x191DDA30577F440A(&(uParam0->f_6), 1);
		}
		if (func_4(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			unk_0x191DDA30577F440A(&(uParam0->f_6), 2);
		}
		if (!func_4(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			unk_0x191DDA30577F440A(&(uParam0->f_6), 4);
		}
	}
	else
	{
		unk_0x191DDA30577F440A(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_17(14))
			{
				return;
			}
			uVar0 = func_11(func_14(iParam1, uParam0->f_2), Global_77056, 0);
			if (unk_0x234B68AC2E35ED5A(uVar0, uParam0->f_1))
			{
				unk_0x191DDA30577F440A(&(uParam0->f_6), 1);
			}
			iVar0 = func_11(func_10(iParam1, uParam0->f_2), Global_77056, 0);
			if (unk_0x234B68AC2E35ED5A(iVar0, uParam0->f_1))
			{
				unk_0x191DDA30577F440A(&(uParam0->f_6), 2);
			}
			if (func_9(iParam1, uParam0->f_2, &iVar1))
			{
				iVar0 = func_11(iVar1, Global_77056, 0);
				if (!unk_0x234B68AC2E35ED5A(iVar0, uParam0->f_1))
				{
					unk_0x191DDA30577F440A(&(uParam0->f_6), 4);
				}
			}
		}
		else
		{
			unk_0x191DDA30577F440A(&(uParam0->f_6), 1);
			unk_0x191DDA30577F440A(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			unk_0x191DDA30577F440A(&(uParam0->f_6), 1);
			unk_0x191DDA30577F440A(&(uParam0->f_6), 2);
		}
	}
}

bool func_9(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = 979;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 980;
					break;
				
				case 3:
					*uParam2 = 1430;
					break;
				
				case 4:
					*uParam2 = 996;
					break;
				
				case 6:
					*uParam2 = 1004;
					break;
				
				case 8:
					*uParam2 = 1431;
					break;
				
				case 9:
					*uParam2 = 1439;
					break;
				
				case 10:
					*uParam2 = 1441;
					break;
				
				case 1:
					*uParam2 = 1012;
					break;
				
				case 7:
					*uParam2 = 1442;
					break;
				
				case 11:
					*uParam2 = 988;
					break;
				
				case 14:
					*uParam2 = 1020;
					break;
				
				case 12:
					*uParam2 = 1031;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 981;
					break;
				
				case 4:
					*uParam2 = 997;
					break;
				
				case 6:
					*uParam2 = 1005;
					break;
				
				case 8:
					*uParam2 = 1432;
					break;
				
				case 9:
					*uParam2 = 1440;
					break;
				
				case 7:
					*uParam2 = 1443;
					break;
				
				case 11:
					*uParam2 = 989;
					break;
				
				case 14:
					*uParam2 = 1021;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 982;
					break;
				
				case 4:
					*uParam2 = 998;
					break;
				
				case 6:
					*uParam2 = 1006;
					break;
				
				case 8:
					*uParam2 = 1433;
					break;
				
				case 7:
					*uParam2 = 1444;
					break;
				
				case 11:
					*uParam2 = 990;
					break;
				
				case 14:
					*uParam2 = 1022;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 999;
					break;
				
				case 6:
					*uParam2 = 1007;
					break;
				
				case 8:
					*uParam2 = 1434;
					break;
				
				case 11:
					*uParam2 = 991;
					break;
				
				case 14:
					*uParam2 = 1023;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1000;
					break;
				
				case 6:
					*uParam2 = 1008;
					break;
				
				case 8:
					*uParam2 = 1435;
					break;
				
				case 11:
					*uParam2 = 992;
					break;
				
				case 14:
					*uParam2 = 1024;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1001;
					break;
				
				case 6:
					*uParam2 = 1009;
					break;
				
				case 8:
					*uParam2 = 1436;
					break;
				
				case 11:
					*uParam2 = 993;
					break;
				
				case 14:
					*uParam2 = 1025;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1002;
					break;
				
				case 6:
					*uParam2 = 1010;
					break;
				
				case 8:
					*uParam2 = 1437;
					break;
				
				case 11:
					*uParam2 = 994;
					break;
				
				case 14:
					*uParam2 = 1026;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1003;
					break;
				
				case 6:
					*uParam2 = 1011;
					break;
				
				case 8:
					*uParam2 = 1438;
					break;
				
				case 11:
					*uParam2 = 995;
					break;
				
				case 14:
					*uParam2 = 1027;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1028;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1029;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1030;
					break;
			}
			break;
	}
	return *uParam2 != 979;
}

int func_10(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 928;
					break;
				
				case 3:
					return 1415;
					break;
				
				case 4:
					return 944;
					break;
				
				case 6:
					return 952;
					break;
				
				case 8:
					return 1416;
					break;
				
				case 9:
					return 1424;
					break;
				
				case 10:
					return 1426;
					break;
				
				case 1:
					return 960;
					break;
				
				case 7:
					return 1427;
					break;
				
				case 11:
					return 936;
					break;
				
				case 14:
					return 968;
					break;
				
				case 12:
					return 979;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 929;
					break;
				
				case 4:
					return 945;
					break;
				
				case 6:
					return 953;
					break;
				
				case 8:
					return 1417;
					break;
				
				case 9:
					return 1425;
					break;
				
				case 7:
					return 1428;
					break;
				
				case 11:
					return 937;
					break;
				
				case 14:
					return 969;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 930;
					break;
				
				case 4:
					return 946;
					break;
				
				case 6:
					return 954;
					break;
				
				case 8:
					return 1418;
					break;
				
				case 7:
					return 1429;
					break;
				
				case 11:
					return 938;
					break;
				
				case 14:
					return 970;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 947;
					break;
				
				case 6:
					return 955;
					break;
				
				case 8:
					return 1419;
					break;
				
				case 11:
					return 939;
					break;
				
				case 14:
					return 971;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 948;
					break;
				
				case 6:
					return 956;
					break;
				
				case 8:
					return 1420;
					break;
				
				case 11:
					return 940;
					break;
				
				case 14:
					return 972;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 949;
					break;
				
				case 6:
					return 957;
					break;
				
				case 8:
					return 1421;
					break;
				
				case 11:
					return 941;
					break;
				
				case 14:
					return 973;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 950;
					break;
				
				case 6:
					return 958;
					break;
				
				case 8:
					return 1422;
					break;
				
				case 11:
					return 942;
					break;
				
				case 14:
					return 974;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 951;
					break;
				
				case 6:
					return 959;
					break;
				
				case 8:
					return 1423;
					break;
				
				case 11:
					return 943;
					break;
				
				case 14:
					return 975;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 976;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 977;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 978;
					break;
			}
			break;
	}
	return 936;
}

int func_11(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 12074)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2555716[iParam0 /*3*/][func_12(iParam1)];
		if (unk_0xD885BEFA31A18D47(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_12(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_13();
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

int func_13()
{
	return Global_1312763;
}

int func_14(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 876;
					break;
				
				case 3:
					return 1400;
					break;
				
				case 4:
					return 892;
					break;
				
				case 6:
					return 900;
					break;
				
				case 8:
					return 1401;
					break;
				
				case 9:
					return 1409;
					break;
				
				case 10:
					return 1411;
					break;
				
				case 1:
					return 908;
					break;
				
				case 7:
					return 1412;
					break;
				
				case 11:
					return 884;
					break;
				
				case 14:
					return 916;
					break;
				
				case 12:
					return 927;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 877;
					break;
				
				case 4:
					return 893;
					break;
				
				case 6:
					return 901;
					break;
				
				case 8:
					return 1402;
					break;
				
				case 9:
					return 1410;
					break;
				
				case 7:
					return 1413;
					break;
				
				case 11:
					return 885;
					break;
				
				case 14:
					return 917;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 878;
					break;
				
				case 4:
					return 894;
					break;
				
				case 6:
					return 902;
					break;
				
				case 8:
					return 1403;
					break;
				
				case 7:
					return 1414;
					break;
				
				case 11:
					return 886;
					break;
				
				case 14:
					return 918;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 895;
					break;
				
				case 6:
					return 903;
					break;
				
				case 8:
					return 1404;
					break;
				
				case 11:
					return 887;
					break;
				
				case 14:
					return 919;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 896;
					break;
				
				case 6:
					return 904;
					break;
				
				case 8:
					return 1405;
					break;
				
				case 11:
					return 888;
					break;
				
				case 14:
					return 920;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 897;
					break;
				
				case 6:
					return 905;
					break;
				
				case 8:
					return 1406;
					break;
				
				case 11:
					return 889;
					break;
				
				case 14:
					return 921;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 898;
					break;
				
				case 6:
					return 906;
					break;
				
				case 8:
					return 1407;
					break;
				
				case 11:
					return 890;
					break;
				
				case 14:
					return 922;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 899;
					break;
				
				case 6:
					return 907;
					break;
				
				case 8:
					return 1408;
					break;
				
				case 11:
					return 891;
					break;
				
				case 14:
					return 923;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 924;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 925;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 926;
					break;
			}
			break;
	}
	return 884;
}

int func_15(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = Global_77056;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_16(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		uVar3 = func_11(iVar2, iVar0, 0);
		return unk_0x234B68AC2E35ED5A(uVar3, iVar1);
	}
	return 0;
}

bool func_16(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	*uParam2 = 12074;
	if ((bParam4 && Global_4269693) || (!bParam4 && bParam5))
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
						*uParam2 = 972;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
						*uParam2 = 972;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
						*uParam2 = 972;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
						*uParam2 = 972;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
						*uParam2 = 972;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
						*uParam2 = 972;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
						*uParam2 = 972;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
						*uParam2 = 972;
						*uParam3 = 26;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_0"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_0"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_0"):
						*uParam2 = 936;
						*uParam3 = 0;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_1"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_1"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_1"):
						*uParam2 = 936;
						*uParam3 = 1;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_2"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_2"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_2"):
						*uParam2 = 936;
						*uParam3 = 2;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_3"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_3"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_3"):
						*uParam2 = 936;
						*uParam3 = 3;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_4"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_4"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_4"):
						*uParam2 = 936;
						*uParam3 = 4;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_5"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_5"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_5"):
						*uParam2 = 936;
						*uParam3 = 5;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_7"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_7"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_7"):
						*uParam2 = 936;
						*uParam3 = 7;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_8"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_8"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_8"):
						*uParam2 = 936;
						*uParam3 = 8;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_11"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_11"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_11"):
						*uParam2 = 936;
						*uParam3 = 11;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
						*uParam2 = 1024;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
						*uParam2 = 1024;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
						*uParam2 = 1024;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
						*uParam2 = 1024;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
						*uParam2 = 1024;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
						*uParam2 = 1024;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
						*uParam2 = 1024;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
						*uParam2 = 1024;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
						*uParam2 = 972;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
						*uParam2 = 972;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
						*uParam2 = 972;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
						*uParam2 = 972;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
						*uParam2 = 972;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
						*uParam2 = 972;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
						*uParam2 = 972;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
						*uParam2 = 972;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
						*uParam2 = 1024;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
						*uParam2 = 1024;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
						*uParam2 = 1024;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
						*uParam2 = 1024;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
						*uParam2 = 1024;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
						*uParam2 = 1024;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
						*uParam2 = 1024;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
						*uParam2 = 1024;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			}
	}
	iVar0 = -1;
	if (bParam4)
	{
		if (Global_4269693)
		{
			iVar0 = unk_0x374867C10614D333(iParam0);
		}
		else
		{
			iVar0 = unk_0x281588E106E4EDA3(iParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = unk_0x374867C10614D333(iParam0);
	}
	else
	{
		iVar0 = unk_0x281588E106E4EDA3(iParam0);
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1761;
					break;
				
				case 1:
					*uParam2 = 1762;
					break;
				
				case 2:
					*uParam2 = 1763;
					break;
				
				case 3:
					*uParam2 = 1764;
					break;
				
				case 4:
					*uParam2 = 1765;
					break;
				
				case 5:
					*uParam2 = 1766;
					break;
				
				case 6:
					*uParam2 = 1773;
					break;
				
				case 7:
					*uParam2 = 1774;
					break;
				
				case 8:
					*uParam2 = 1775;
					break;
				
				case 9:
					*uParam2 = 1776;
					break;
				
				case 10:
					*uParam2 = 1777;
					break;
				
				case 11:
					*uParam2 = 1778;
					break;
				
				case 12:
					*uParam2 = 1779;
					break;
				
				case 13:
					*uParam2 = 1787;
					break;
				
				case 14:
					*uParam2 = 1788;
					break;
				
				case 15:
					*uParam2 = 1889;
					break;
				
				case 16:
					*uParam2 = 1890;
					break;
				
				case 17:
					*uParam2 = 1921;
					break;
				
				case 18:
					*uParam2 = 1935;
					break;
				
				case 19:
					*uParam2 = 1936;
					break;
				
				case 20:
					*uParam2 = 1937;
					break;
				
				case 21:
					*uParam2 = 1938;
					break;
				
				case 22:
					*uParam2 = 1939;
					break;
				
				case 23:
					*uParam2 = 2043;
					break;
				
				case 24:
					*uParam2 = 2044;
					break;
				
				case 25:
					*uParam2 = 2070;
					break;
				
				case 26:
					*uParam2 = 2071;
					break;
				
				case 27:
					*uParam2 = 2072;
					break;
				
				case 28:
					*uParam2 = 2073;
					break;
				
				case 29:
					*uParam2 = 2074;
					break;
				
				case 30:
					*uParam2 = 2075;
					break;
				
				case 31:
					*uParam2 = 2076;
					break;
				
				case 32:
					*uParam2 = 2077;
					break;
				
				case 33:
					*uParam2 = 2078;
					break;
				
				case 34:
					*uParam2 = 2079;
					break;
				
				case 35:
					*uParam2 = 2326;
					break;
				
				case 36:
					*uParam2 = 2327;
					break;
				
				case 37:
					*uParam2 = 2391;
					break;
				
				case 38:
					*uParam2 = 2392;
					break;
				
				case 39:
					*uParam2 = 2393;
					break;
				
				case 40:
					*uParam2 = 2394;
					break;
				
				case 41:
					*uParam2 = 2453;
					break;
				
				case 42:
					*uParam2 = 2454;
					break;
				
				case 43:
					*uParam2 = 2455;
					break;
				
				case 44:
					*uParam2 = 2456;
					break;
				
				case 45:
					*uParam2 = 2457;
					break;
				
				case 46:
					*uParam2 = 2458;
					break;
				
				case 47:
					*uParam2 = 2459;
					break;
				
				case 48:
					*uParam2 = 2460;
					break;
				
				case 49:
					*uParam2 = 2461;
					break;
				
				case 50:
					*uParam2 = 2462;
					break;
				
				case 51:
					*uParam2 = 2591;
					break;
				
				case 52:
					*uParam2 = 2592;
					break;
				
				case 53:
					*uParam2 = 2593;
					break;
				
				case 54:
					*uParam2 = 2594;
					break;
				
				case 55:
					*uParam2 = 2595;
					break;
				
				case 56:
					*uParam2 = 2596;
					break;
				
				case 57:
					*uParam2 = 2597;
					break;
				
				case 58:
					*uParam2 = 2598;
					break;
				
				case 59:
					*uParam2 = 2599;
					break;
				
				case 60:
					*uParam2 = 2600;
					break;
				
				case 61:
					*uParam2 = 2601;
					break;
				
				case 62:
					*uParam2 = 3198;
					break;
				
				case 63:
					*uParam2 = 3199;
					break;
				
				case 64:
					*uParam2 = 3200;
					break;
				
				case 65:
					*uParam2 = 3201;
					break;
				
				case 66:
					*uParam2 = 3202;
					break;
				
				case 67:
					*uParam2 = 3203;
					break;
				
				case 68:
					*uParam2 = 3671;
					break;
				
				case 69:
					*uParam2 = 3672;
					break;
				
				case 70:
					*uParam2 = 3673;
					break;
				
				case 71:
					*uParam2 = 3674;
					break;
				
				case 72:
					*uParam2 = 3675;
					break;
				
				case 73:
					*uParam2 = 3676;
					break;
				
				case 74:
					*uParam2 = 3677;
					break;
				
				case 75:
					*uParam2 = 3678;
					break;
				
				case 76:
					*uParam2 = 3679;
					break;
				
				case 77:
					*uParam2 = 3680;
					break;
				
				case 78:
					*uParam2 = 3794;
					break;
				
				case joaat("mpsv_lp0_31"):
					*uParam2 = 3795;
					break;
				
				case 80:
					*uParam2 = 3796;
					break;
				
				case 81:
					*uParam2 = 3797;
					break;
				
				case 82:
					*uParam2 = 3798;
					break;
				
				case 83:
					*uParam2 = 3799;
					break;
				
				case 84:
					*uParam2 = 3800;
					break;
				
				case 85:
					*uParam2 = 3801;
					break;
				
				case 86:
					*uParam2 = 3904;
					break;
				
				case 87:
					*uParam2 = 3905;
					break;
				
				case 88:
					*uParam2 = 3906;
					break;
				
				case 89:
					*uParam2 = 5339;
					break;
				
				case 90:
					*uParam2 = 5340;
					break;
				
				case 91:
					*uParam2 = 5341;
					break;
				
				case 92:
					*uParam2 = 5342;
					break;
				
				case 93:
					*uParam2 = 5343;
					break;
				
				case 94:
					*uParam2 = 5344;
					break;
				
				case 95:
					*uParam2 = 5345;
					break;
				
				case 96:
					*uParam2 = 5346;
					break;
				
				case 97:
					*uParam2 = 5347;
					break;
				
				case 98:
					*uParam2 = 5348;
					break;
				
				case 99:
					*uParam2 = 5349;
					break;
			}
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 100:
					*uParam2 = 5350;
					break;
				
				case 101:
					*uParam2 = 5396;
					break;
				
				case 102:
					*uParam2 = 5397;
					break;
				
				case 103:
					*uParam2 = 5398;
					break;
				
				case 104:
					*uParam2 = 5399;
					break;
				
				case 105:
					*uParam2 = 5400;
					break;
				
				case 106:
					*uParam2 = 5401;
					break;
				
				case 107:
					*uParam2 = 5402;
					break;
				
				case 108:
					*uParam2 = 5403;
					break;
				
				case 109:
					*uParam2 = 5404;
					break;
				
				case 110:
					*uParam2 = 5405;
					break;
				
				case 111:
					*uParam2 = 5406;
					break;
				
				case 112:
					*uParam2 = 5407;
					break;
				
				case 113:
					*uParam2 = 5408;
					break;
				
				case 114:
					*uParam2 = 5409;
					break;
				
				case 115:
					*uParam2 = 5410;
					break;
				
				case 116:
					*uParam2 = 5411;
					break;
				
				case 117:
					*uParam2 = 5412;
					break;
				
				case 118:
					*uParam2 = 5413;
					break;
				
				case 119:
					*uParam2 = 5414;
					break;
				
				case 120:
					*uParam2 = 5415;
					break;
				
				case 121:
					*uParam2 = 5416;
					break;
				
				case 122:
					*uParam2 = 5417;
					break;
				
				case 123:
					*uParam2 = 5418;
					break;
				
				case 124:
					*uParam2 = 6124;
					break;
				
				case 125:
					*uParam2 = 6125;
					break;
				
				case 126:
					*uParam2 = 6126;
					break;
				
				case 127:
					*uParam2 = 6127;
					break;
				
				case 128:
					*uParam2 = 6128;
					break;
				
				case 129:
					*uParam2 = 6129;
					break;
				
				case 130:
					*uParam2 = 6130;
					break;
				
				case 131:
					*uParam2 = 6131;
					break;
				
				case 132:
					*uParam2 = 6132;
					break;
				
				case 133:
					*uParam2 = 6133;
					break;
				
				case 134:
					*uParam2 = 6134;
					break;
				
				case 135:
					*uParam2 = 6135;
					break;
				
				case 136:
					*uParam2 = 6136;
					break;
				
				case 137:
					*uParam2 = 6137;
					break;
				
				case 138:
					*uParam2 = 6138;
					break;
				
				case 139:
					*uParam2 = 6437;
					break;
				
				case 140:
					*uParam2 = 6438;
					break;
				
				case 141:
					*uParam2 = 6439;
					break;
				
				case 142:
					*uParam2 = 6440;
					break;
				
				case 143:
					*uParam2 = 6441;
					break;
				
				case 144:
					*uParam2 = 6442;
					break;
				
				case 145:
					*uParam2 = 6443;
					break;
				
				case 146:
					*uParam2 = 6444;
					break;
				
				case 147:
					*uParam2 = 6445;
					break;
				
				case 148:
					*uParam2 = 6446;
					break;
				
				case 149:
					*uParam2 = 6447;
					break;
				
				case 150:
					*uParam2 = 6448;
					break;
				
				case 151:
					*uParam2 = 6449;
					break;
				
				case 152:
					*uParam2 = 6450;
					break;
				
				case 153:
					*uParam2 = 6451;
					break;
				
				case 154:
					*uParam2 = 7268;
					break;
				
				case 155:
					*uParam2 = 7269;
					break;
				
				case 156:
					*uParam2 = 7270;
					break;
				
				case 157:
					*uParam2 = 7271;
					break;
				
				case 158:
					*uParam2 = 7272;
					break;
				
				case 159:
					*uParam2 = 7273;
					break;
				
				case 160:
					*uParam2 = 7274;
					break;
				
				case 161:
					*uParam2 = 7881;
					break;
				
				case 162:
					*uParam2 = 7882;
					break;
				
				case 163:
					*uParam2 = 7883;
					break;
				
				case 164:
					*uParam2 = 7884;
					break;
				
				case 165:
					*uParam2 = 7885;
					break;
				
				case 166:
					*uParam2 = 7886;
					break;
				
				case 167:
					*uParam2 = 7887;
					break;
				
				case 168:
					*uParam2 = 7888;
					break;
				
				case 169:
					*uParam2 = 7889;
					break;
				
				case 170:
					*uParam2 = 7890;
					break;
				
				case 171:
					*uParam2 = 7891;
					break;
				
				case 172:
					*uParam2 = 7892;
					break;
				
				case 173:
					*uParam2 = 7893;
					break;
				
				case 174:
					*uParam2 = 7894;
					break;
				
				case 175:
					*uParam2 = 7895;
					break;
				
				case 176:
					*uParam2 = 8301;
					break;
				
				case 177:
					*uParam2 = 8302;
					break;
				
				case 178:
					*uParam2 = 8303;
					break;
				
				case 179:
					*uParam2 = 8304;
					break;
				
				case 180:
					*uParam2 = 8305;
					break;
				
				case 181:
					*uParam2 = 8306;
					break;
				
				case 182:
					*uParam2 = 8307;
					break;
				
				case 183:
					*uParam2 = 8308;
					break;
				
				case 184:
					*uParam2 = 8309;
					break;
				
				case 185:
					*uParam2 = 8310;
					break;
				
				case 186:
					*uParam2 = 8311;
					break;
				
				case 187:
					*uParam2 = 8312;
					break;
				
				case 188:
					*uParam2 = 8313;
					break;
				
				case 189:
					*uParam2 = 8314;
					break;
				
				case 190:
					*uParam2 = 8315;
					break;
				
				case 191:
					*uParam2 = 8316;
					break;
				
				case 192:
					*uParam2 = 8317;
					break;
				
				case 193:
					*uParam2 = 8318;
					break;
				
				case 194:
					*uParam2 = 8319;
					break;
				
				case 195:
					*uParam2 = 8320;
					break;
				
				case 196:
					*uParam2 = 8321;
					break;
				
				case 197:
					*uParam2 = 8322;
					break;
				
				case 198:
					*uParam2 = 8323;
					break;
				
				case 199:
					*uParam2 = 8324;
					break;
			}
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 200:
					*uParam2 = 8325;
					break;
				
				case 201:
					*uParam2 = 8940;
					break;
				
				case 202:
					*uParam2 = 8941;
					break;
				
				case 203:
					*uParam2 = 8942;
					break;
				
				case 204:
					*uParam2 = 8943;
					break;
				
				case 205:
					*uParam2 = 8944;
					break;
				
				case 206:
					*uParam2 = 9423;
					break;
				
				case 207:
					*uParam2 = 9424;
					break;
				
				case 208:
					*uParam2 = 9425;
					break;
				
				case 209:
					*uParam2 = 9426;
					break;
				
				case 210:
					*uParam2 = 9427;
					break;
				
				case 211:
					*uParam2 = 9428;
					break;
				
				case 212:
					*uParam2 = 9429;
					break;
				
				case 213:
					*uParam2 = 9430;
					break;
				
				case 214:
					*uParam2 = 9431;
					break;
				
				case 215:
					*uParam2 = 9432;
					break;
				
				case 216:
					*uParam2 = 9433;
					break;
				
				case 217:
					*uParam2 = 9434;
					break;
				
				case 218:
					*uParam2 = 9435;
					break;
				
				case 219:
					*uParam2 = 9436;
					break;
				
				case 220:
					*uParam2 = 9437;
					break;
				
				case 221:
					*uParam2 = 9438;
					break;
				
				case 222:
					*uParam2 = 9439;
					break;
				
				case 223:
					*uParam2 = 9440;
					break;
				
				case 224:
					*uParam2 = 9441;
					break;
				
				case 225:
					*uParam2 = 9442;
					break;
				
				case 226:
					*uParam2 = 9443;
					break;
				
				case 227:
					*uParam2 = 9444;
					break;
				
				case 228:
					*uParam2 = 9445;
					break;
				
				case 229:
					*uParam2 = 9446;
					break;
				
				case 230:
					*uParam2 = 9447;
					break;
			}
			break;
		
		case 2:
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1767;
					break;
				
				case 1:
					*uParam2 = 1768;
					break;
				
				case 2:
					*uParam2 = 1769;
					break;
				
				case 3:
					*uParam2 = 1770;
					break;
				
				case 4:
					*uParam2 = 1771;
					break;
				
				case 5:
					*uParam2 = 1772;
					break;
				
				case 6:
					*uParam2 = 1780;
					break;
				
				case 7:
					*uParam2 = 1781;
					break;
				
				case 8:
					*uParam2 = 1782;
					break;
				
				case 9:
					*uParam2 = 1783;
					break;
				
				case 10:
					*uParam2 = 1784;
					break;
				
				case 11:
					*uParam2 = 1785;
					break;
				
				case 12:
					*uParam2 = 1786;
					break;
				
				case 13:
					*uParam2 = 1789;
					break;
				
				case 14:
					*uParam2 = 1790;
					break;
				
				case 15:
					*uParam2 = 1891;
					break;
				
				case 16:
					*uParam2 = 1892;
					break;
				
				case 17:
					*uParam2 = 1922;
					break;
				
				case 18:
					*uParam2 = 1940;
					break;
				
				case 19:
					*uParam2 = 1941;
					break;
				
				case 20:
					*uParam2 = 1942;
					break;
				
				case 21:
					*uParam2 = 1943;
					break;
				
				case 22:
					*uParam2 = 1944;
					break;
				
				case 23:
					*uParam2 = 2045;
					break;
				
				case 24:
					*uParam2 = 2046;
					break;
				
				case 25:
					*uParam2 = 2080;
					break;
				
				case 26:
					*uParam2 = 2081;
					break;
				
				case 27:
					*uParam2 = 2082;
					break;
				
				case 28:
					*uParam2 = 2083;
					break;
				
				case 29:
					*uParam2 = 2084;
					break;
				
				case 30:
					*uParam2 = 2085;
					break;
				
				case 31:
					*uParam2 = 2086;
					break;
				
				case 32:
					*uParam2 = 2087;
					break;
				
				case 33:
					*uParam2 = 2088;
					break;
				
				case 34:
					*uParam2 = 2089;
					break;
				
				case 35:
					*uParam2 = 2328;
					break;
				
				case 36:
					*uParam2 = 2329;
					break;
				
				case 37:
					*uParam2 = 2395;
					break;
				
				case 38:
					*uParam2 = 2396;
					break;
				
				case 39:
					*uParam2 = 2397;
					break;
				
				case 40:
					*uParam2 = 2398;
					break;
				
				case 41:
					*uParam2 = 2463;
					break;
				
				case 42:
					*uParam2 = 2464;
					break;
				
				case 43:
					*uParam2 = 2465;
					break;
				
				case 44:
					*uParam2 = 2466;
					break;
				
				case 45:
					*uParam2 = 2467;
					break;
				
				case 46:
					*uParam2 = 2468;
					break;
				
				case 47:
					*uParam2 = 2469;
					break;
				
				case 48:
					*uParam2 = 2470;
					break;
				
				case 49:
					*uParam2 = 2471;
					break;
				
				case 50:
					*uParam2 = 2472;
					break;
				
				case 51:
					*uParam2 = 2602;
					break;
				
				case 52:
					*uParam2 = 2603;
					break;
				
				case 53:
					*uParam2 = 2604;
					break;
				
				case 54:
					*uParam2 = 2605;
					break;
				
				case 55:
					*uParam2 = 2606;
					break;
				
				case 56:
					*uParam2 = 2607;
					break;
				
				case 57:
					*uParam2 = 2608;
					break;
				
				case 58:
					*uParam2 = 2609;
					break;
				
				case 59:
					*uParam2 = 2610;
					break;
				
				case 60:
					*uParam2 = 2611;
					break;
				
				case 61:
					*uParam2 = 2612;
					break;
				
				case 62:
					*uParam2 = 3204;
					break;
				
				case 63:
					*uParam2 = 3205;
					break;
				
				case 64:
					*uParam2 = 3206;
					break;
				
				case 65:
					*uParam2 = 3207;
					break;
				
				case 66:
					*uParam2 = 3208;
					break;
				
				case 67:
					*uParam2 = 3209;
					break;
				
				case 68:
					*uParam2 = 3681;
					break;
				
				case 69:
					*uParam2 = 3682;
					break;
				
				case 70:
					*uParam2 = 3683;
					break;
				
				case 71:
					*uParam2 = 3684;
					break;
				
				case 72:
					*uParam2 = 3685;
					break;
				
				case 73:
					*uParam2 = 3686;
					break;
				
				case 74:
					*uParam2 = 3687;
					break;
				
				case 75:
					*uParam2 = 3688;
					break;
				
				case 76:
					*uParam2 = 3689;
					break;
				
				case 77:
					*uParam2 = 3690;
					break;
				
				case 78:
					*uParam2 = 3802;
					break;
				
				case joaat("mpsv_lp0_31"):
					*uParam2 = 3803;
					break;
				
				case 80:
					*uParam2 = 3804;
					break;
				
				case 81:
					*uParam2 = 3805;
					break;
				
				case 82:
					*uParam2 = 3806;
					break;
				
				case 83:
					*uParam2 = 3807;
					break;
				
				case 84:
					*uParam2 = 3808;
					break;
				
				case 85:
					*uParam2 = 3809;
					break;
				
				case 86:
					*uParam2 = 3907;
					break;
				
				case 87:
					*uParam2 = 3908;
					break;
				
				case 88:
					*uParam2 = 3909;
					break;
				
				case 89:
					*uParam2 = 5351;
					break;
				
				case 90:
					*uParam2 = 5352;
					break;
				
				case 91:
					*uParam2 = 5353;
					break;
				
				case 92:
					*uParam2 = 5354;
					break;
				
				case 93:
					*uParam2 = 5355;
					break;
				
				case 94:
					*uParam2 = 5356;
					break;
				
				case 95:
					*uParam2 = 5357;
					break;
				
				case 96:
					*uParam2 = 5358;
					break;
				
				case 97:
					*uParam2 = 5359;
					break;
				
				case 98:
					*uParam2 = 5360;
					break;
				
				case 99:
					*uParam2 = 5361;
					break;
			}
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 100:
					*uParam2 = 5362;
					break;
				
				case 101:
					*uParam2 = 5419;
					break;
				
				case 102:
					*uParam2 = 5420;
					break;
				
				case 103:
					*uParam2 = 5421;
					break;
				
				case 104:
					*uParam2 = 5422;
					break;
				
				case 105:
					*uParam2 = 5423;
					break;
				
				case 106:
					*uParam2 = 5424;
					break;
				
				case 107:
					*uParam2 = 5425;
					break;
				
				case 108:
					*uParam2 = 5426;
					break;
				
				case 109:
					*uParam2 = 5427;
					break;
				
				case 110:
					*uParam2 = 5428;
					break;
				
				case 111:
					*uParam2 = 5429;
					break;
				
				case 112:
					*uParam2 = 5430;
					break;
				
				case 113:
					*uParam2 = 5431;
					break;
				
				case 114:
					*uParam2 = 5432;
					break;
				
				case 115:
					*uParam2 = 5433;
					break;
				
				case 116:
					*uParam2 = 5434;
					break;
				
				case 117:
					*uParam2 = 5435;
					break;
				
				case 118:
					*uParam2 = 5436;
					break;
				
				case 119:
					*uParam2 = 5437;
					break;
				
				case 120:
					*uParam2 = 5438;
					break;
				
				case 121:
					*uParam2 = 5439;
					break;
				
				case 122:
					*uParam2 = 5440;
					break;
				
				case 123:
					*uParam2 = 5441;
					break;
				
				case 124:
					*uParam2 = 6139;
					break;
				
				case 125:
					*uParam2 = 6140;
					break;
				
				case 126:
					*uParam2 = 6141;
					break;
				
				case 127:
					*uParam2 = 6142;
					break;
				
				case 128:
					*uParam2 = 6143;
					break;
				
				case 129:
					*uParam2 = 6144;
					break;
				
				case 130:
					*uParam2 = 6145;
					break;
				
				case 131:
					*uParam2 = 6146;
					break;
				
				case 132:
					*uParam2 = 6147;
					break;
				
				case 133:
					*uParam2 = 6148;
					break;
				
				case 134:
					*uParam2 = 6149;
					break;
				
				case 135:
					*uParam2 = 6150;
					break;
				
				case 136:
					*uParam2 = 6151;
					break;
				
				case 137:
					*uParam2 = 6152;
					break;
				
				case 138:
					*uParam2 = 6153;
					break;
				
				case 139:
					*uParam2 = 6452;
					break;
				
				case 140:
					*uParam2 = 6453;
					break;
				
				case 141:
					*uParam2 = 6454;
					break;
				
				case 142:
					*uParam2 = 6455;
					break;
				
				case 143:
					*uParam2 = 6456;
					break;
				
				case 144:
					*uParam2 = 6457;
					break;
				
				case 145:
					*uParam2 = 6458;
					break;
				
				case 146:
					*uParam2 = 6459;
					break;
				
				case 147:
					*uParam2 = 6460;
					break;
				
				case 148:
					*uParam2 = 6461;
					break;
				
				case 149:
					*uParam2 = 6462;
					break;
				
				case 150:
					*uParam2 = 6463;
					break;
				
				case 151:
					*uParam2 = 6464;
					break;
				
				case 152:
					*uParam2 = 6465;
					break;
				
				case 153:
					*uParam2 = 6466;
					break;
				
				case 154:
					*uParam2 = 7275;
					break;
				
				case 155:
					*uParam2 = 7276;
					break;
				
				case 156:
					*uParam2 = 7277;
					break;
				
				case 157:
					*uParam2 = 7278;
					break;
				
				case 158:
					*uParam2 = 7279;
					break;
				
				case 159:
					*uParam2 = 7280;
					break;
				
				case 160:
					*uParam2 = 7281;
					break;
				
				case 161:
					*uParam2 = 7896;
					break;
				
				case 162:
					*uParam2 = 7897;
					break;
				
				case 163:
					*uParam2 = 7898;
					break;
				
				case 164:
					*uParam2 = 7899;
					break;
				
				case 165:
					*uParam2 = 7900;
					break;
				
				case 166:
					*uParam2 = 7901;
					break;
				
				case 167:
					*uParam2 = 7902;
					break;
				
				case 168:
					*uParam2 = 7903;
					break;
				
				case 169:
					*uParam2 = 7904;
					break;
				
				case 170:
					*uParam2 = 7905;
					break;
				
				case 171:
					*uParam2 = 7906;
					break;
				
				case 172:
					*uParam2 = 7907;
					break;
				
				case 173:
					*uParam2 = 7908;
					break;
				
				case 174:
					*uParam2 = 7909;
					break;
				
				case 175:
					*uParam2 = 7910;
					break;
				
				case 176:
					*uParam2 = 8326;
					break;
				
				case 177:
					*uParam2 = 8327;
					break;
				
				case 178:
					*uParam2 = 8328;
					break;
				
				case 179:
					*uParam2 = 8329;
					break;
				
				case 180:
					*uParam2 = 8330;
					break;
				
				case 181:
					*uParam2 = 8331;
					break;
				
				case 182:
					*uParam2 = 8332;
					break;
				
				case 183:
					*uParam2 = 8333;
					break;
				
				case 184:
					*uParam2 = 8334;
					break;
				
				case 185:
					*uParam2 = 8335;
					break;
				
				case 186:
					*uParam2 = 8336;
					break;
				
				case 187:
					*uParam2 = 8337;
					break;
				
				case 188:
					*uParam2 = 8338;
					break;
				
				case 189:
					*uParam2 = 8339;
					break;
				
				case 190:
					*uParam2 = 8340;
					break;
				
				case 191:
					*uParam2 = 8341;
					break;
				
				case 192:
					*uParam2 = 8342;
					break;
				
				case 193:
					*uParam2 = 8343;
					break;
				
				case 194:
					*uParam2 = 8344;
					break;
				
				case 195:
					*uParam2 = 8345;
					break;
				
				case 196:
					*uParam2 = 8346;
					break;
				
				case 197:
					*uParam2 = 8347;
					break;
				
				case 198:
					*uParam2 = 8348;
					break;
				
				case 199:
					*uParam2 = 8349;
					break;
			}
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 200:
					*uParam2 = 8350;
					break;
				
				case 201:
					*uParam2 = 8945;
					break;
				
				case 202:
					*uParam2 = 8946;
					break;
				
				case 203:
					*uParam2 = 8947;
					break;
				
				case 204:
					*uParam2 = 8948;
					break;
				
				case 205:
					*uParam2 = 8949;
					break;
				
				case 206:
					*uParam2 = 9448;
					break;
				
				case 207:
					*uParam2 = 9449;
					break;
				
				case 208:
					*uParam2 = 9450;
					break;
				
				case 209:
					*uParam2 = 9451;
					break;
				
				case 210:
					*uParam2 = 9452;
					break;
				
				case 211:
					*uParam2 = 9453;
					break;
				
				case 212:
					*uParam2 = 9454;
					break;
				
				case 213:
					*uParam2 = 9455;
					break;
				
				case 214:
					*uParam2 = 9456;
					break;
				
				case 215:
					*uParam2 = 9457;
					break;
				
				case 216:
					*uParam2 = 9458;
					break;
				
				case 217:
					*uParam2 = 9459;
					break;
				
				case 218:
					*uParam2 = 9460;
					break;
				
				case 219:
					*uParam2 = 9461;
					break;
				
				case 220:
					*uParam2 = 9462;
					break;
				
				case 221:
					*uParam2 = 9463;
					break;
				
				case 222:
					*uParam2 = 9464;
					break;
				
				case 223:
					*uParam2 = 9465;
					break;
				
				case 224:
					*uParam2 = 9466;
					break;
				
				case 225:
					*uParam2 = 9467;
					break;
				
				case 226:
					*uParam2 = 9468;
					break;
				
				case 227:
					*uParam2 = 9469;
					break;
				
				case 228:
					*uParam2 = 9470;
					break;
				
				case 229:
					*uParam2 = 9471;
					break;
				
				case 230:
					*uParam2 = 9472;
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 12074;
}

bool func_17(int iParam0)
{
	return Global_42009 == iParam0;
}

int func_18(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 0;
			break;
		
		case 13:
			return 0;
			break;
	}
	return 0;
}

void func_19(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	var uVar1;
	struct<8> Var2;
	int iVar3;
	int iVar4;
	struct<10> Var5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<10> Var9;
	int iVar10;
	int iVar11;
	
	iVar0 = (iParam1 - iParam2);
	iVar0 = iVar0;
	if (iVar0 < 0)
	{
		return;
	}
	uVar1 = Global_77059[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar3 = (iParam1 - iParam2);
		if (iVar3 >= 0)
		{
			iVar4 = unk_0xE619DE4F72F76E79(uVar1, 0);
			if (iVar4 > iVar3)
			{
				unk_0x4ECDF1AC3EC9ADF1(iVar3, &Var2);
				Global_2621444 = Var2.f_1;
				Global_2621445 = Var2;
				func_8(&(Global_77059[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
				return;
			}
		}
	}
	else if (iParam0 == 13)
	{
		func_8(&(Global_77059[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		unk_0x71794FDA9361403E(&Var5);
		iVar7 = (iParam1 - iParam2);
		if (iVar7 >= 0)
		{
			iVar8 = unk_0x44C4C2E7417F5E29(iVar1, 8, -1, 1, -1, -1);
			if (iVar8 > iVar7)
			{
				unk_0x9404A07A08FA1D0F(iVar7, &Var5);
				if (Var5.f_6 == 0)
				{
					iVar6 = 9;
				}
				else if (Var5.f_6 == 1)
				{
					iVar6 = 10;
				}
				else if (Var5.f_6 == 2)
				{
					iVar6 = 2;
				}
				else if (Var5.f_6 == 3)
				{
					iVar6 = 3;
				}
				else if (Var5.f_6 == 4)
				{
					iVar6 = 4;
				}
				else if (Var5.f_6 == 5)
				{
					iVar6 = 5;
				}
				else if (Var5.f_6 == 6)
				{
					iVar6 = 6;
				}
				else if (Var5.f_6 == 7)
				{
					iVar6 = 7;
				}
				else if (Var5.f_6 == 8)
				{
					iVar6 = 8;
				}
				else
				{
					iVar6 = -1;
				}
				Global_2621444 = Var5.f_1;
				Global_2621445 = Var5;
				func_8(&(Global_77059[0 /*14*/]), iParam0, iParam1, &(Var5.f_9), Var5.f_3, Var5.f_4, Var5.f_5, unk_0x01758128AAB0BA8F(Var5.f_1, joaat("OUTFIT_ONLY"), 0), iVar6, 2, Var5.f_1 != 0);
				return;
			}
		}
	}
	else
	{
		unk_0xFE9B2B065B8931FE(&Var9);
		if (iParam3 != -1 && Global_77229)
		{
			unk_0x3BA50B117757EA3E(iParam3, &Var9);
			Global_2621444 = Var9.f_1;
			Global_2621445 = Var9;
			func_8(&(Global_77059[0 /*14*/]), iParam0, iParam1, &(Var9.f_9), Var9.f_3, Var9.f_4, Var9.f_5, unk_0x01758128AAB0BA8F(Var9.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var9.f_1 != 0);
			return;
		}
		iVar10 = (iParam1 - iParam2);
		if (iVar10 >= 0)
		{
			iVar11 = unk_0x44C4C2E7417F5E29(iVar1, 8, -1, 0, -1, func_20(iParam0));
			if (iVar11 > iVar10)
			{
				unk_0xDF9AB3C346705246(iVar10, &Var9);
				Global_2621444 = Var9.f_1;
				Global_2621445 = Var9;
				func_8(&(Global_77059[0 /*14*/]), iParam0, iParam1, &(Var9.f_9), Var9.f_3, Var9.f_4, Var9.f_5, unk_0x01758128AAB0BA8F(Var9.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var9.f_1 != 0);
				return;
			}
		}
	}
}

int func_20(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

void func_21(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 13;
	Global_77059[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_19(iVar7, iParam0, 9, -1);
			return;
			break;
	}
	func_8(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_22(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 12;
	Global_77059[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P2_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P2_5", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P2_6", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P2_7", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P2_8", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P2_9", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P2_10", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P2_13", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P2_14", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P2_15", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P2_16", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P2_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P2_18", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P2_19", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P2_20", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P2_21", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P2_22", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P2_23", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P2_24", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P2_25", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P2_26", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P2_27", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P2_28", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 119;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P2_29", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 99;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P2_30", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 129;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P2_44", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P2_45", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 120;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P2_46", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 139;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P2_47", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 149;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P2_48", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 145;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P2_49", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 140;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P2_50", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 135;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P2_31", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P2_32", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P2_33", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P2_34", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P2_35", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P2_36", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P2_37", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P2_38", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P2_39", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P2_40", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P2_41", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P2_42", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P2_43", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_19(iVar7, iParam0, 48, -1);
			return;
			break;
	}
	func_8(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_23(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	Global_77059[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_19(iVar7, iParam0, 1, -1);
			return;
			break;
	}
	func_8(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_24(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	Global_77059[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_19(iVar7, iParam0, 1, -1);
			return;
			break;
	}
	func_8(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_25(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 1;
	Global_77059[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P2_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P2_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P2_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P2_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "BERD_P2_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		default:
			func_19(iVar7, iParam0, 6, -1);
			return;
			break;
	}
	func_8(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_26(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 10;
	Global_77059[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 5;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 2;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 4;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 5;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 6;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 7;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 8;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 9;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 4;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 5;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 6;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 1;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 3;
			break;
		
		default:
			func_19(iVar7, iParam0, 33, -1);
			return;
			break;
	}
	func_8(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_27(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 9;
	Global_77059[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 270;
			break;
		
		case 16:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 270;
			break;
		
		default:
			func_19(iVar7, iParam0, 17, -1);
			return;
			break;
	}
	func_8(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_28(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	Global_77059[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "SPEC_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "SPEC_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 16;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_19(iVar7, iParam0, 18, -1);
			return;
			break;
	}
	func_8(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_29(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	Global_77059[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_19(iVar7, iParam0, 7, -1);
			return;
			break;
	}
	func_8(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_30(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	Global_77059[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 22;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P2_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 45;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P2_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 65;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P2_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 58;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P2_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 72;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P2_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 68;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P2_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 60;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P2_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "FEET_P2_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "FEET_P2_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "FEET_P2_9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 680;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P2_9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P2_9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 670;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P2_9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 700;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P2_9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 680;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P2_9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 720;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P2_9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 740;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P2_9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 760;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P2_9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 780;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P2_9_10", 16);
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 750;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P2_9_11", 16);
			iVar3 = 9;
			iVar4 = 11;
			iVar1 = 700;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P2_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P2_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 790;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P2_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P2_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 860;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P2_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 750;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P2_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 790;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P2_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P2_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 820;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P2_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 800;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P2_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 850;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P2_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 870;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P2_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 720;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P2_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar1 = 740;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P2_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar1 = 800;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P2_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar1 = 750;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P2_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar1 = 770;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P2_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar1 = 860;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P2_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P2_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 800;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P2_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 780;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P2_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P2_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P2_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P2_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 870;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P2_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 930;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P2_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 880;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P2_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 900;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P2_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 920;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P2_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 970;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P2_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 990;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P2_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 960;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P2_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 980;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P2_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 950;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P2_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 110;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P2_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P2_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P2_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P2_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P2_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P2_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 135;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P2_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P2_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 145;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P2_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 110;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P2_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 120;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "FEET_P2_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P2_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 125;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P2_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P2_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 130;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P2_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_19(iVar7, iParam0, 84, -1);
			return;
			break;
	}
	func_8(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_31(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	Global_77059[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 95;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P2_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 129;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P2_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 115;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P2_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P2_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P2_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P2_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 850;
			break;
		
		case 22:
			StringCopy(&Var2, "LEGS_P2_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 850;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P2_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 750;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P2_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 690;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P2_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 820;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P2_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 650;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P2_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 690;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P2_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 690;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P2_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 820;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "LEGS_P2_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P2_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P2_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P2_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 58;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P2_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 68;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P2_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar1 = 65;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P2_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 60;
			break;
		
		case 39:
			StringCopy(&Var2, "LEGS_P2_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 65;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P2_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 63;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P2_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 60;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P2_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 58;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P2_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P2_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P2_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 99;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P2_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 105;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P2_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 110;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P2_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 110;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P2_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 99;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P2_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 110;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P2_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 110;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P2_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 105;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P2_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 105;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P2_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 15;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P2_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 15;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P2_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 15;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P2_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 15;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P2_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P2_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 15;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P2_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 15;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P2_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 15;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P2_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 600;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P2_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 600;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P2_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 600;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P2_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 600;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P2_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 600;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P2_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 600;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P2_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 600;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P2_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 600;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P2_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 600;
			break;
		
		case 71:
			StringCopy(&Var2, "LEGS_P2_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 80;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P2_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 80;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P2_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 80;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P2_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P2_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 80;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P2_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P2_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 80;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P2_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 80;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "LEGS_P2_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 80;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P2_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 80;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P2_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P2_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 12;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P2_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 12;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P2_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P2_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 18;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P2_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 20;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P2_22_6", 16);
			iVar3 = 22;
			iVar4 = 6;
			iVar1 = 30;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P2_22_7", 16);
			iVar3 = 22;
			iVar4 = 7;
			iVar1 = 30;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P2_22_8", 16);
			iVar3 = 22;
			iVar4 = 8;
			iVar1 = 30;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P2_22_9", 16);
			iVar3 = 22;
			iVar4 = 9;
			iVar1 = 30;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P2_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P2_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			break;
		
		case 95:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 1;
			break;
		
		case 96:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 2;
			break;
		
		case 97:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 3;
			break;
		
		case 98:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 4;
			break;
		
		case 99:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 5;
			break;
		
		case 100:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 6;
			break;
		
		case 101:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 7;
			break;
		
		case 102:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 8;
			break;
		
		case 103:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 9;
			break;
		
		default:
			func_19(iVar7, iParam0, 104, -1);
			return;
			break;
	}
	func_8(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_32(int iParam0)
{
	if (iParam0 < 136)
	{
		func_34(iParam0);
	}
	else
	{
		func_33(iParam0);
	}
	if (Global_77059[0 /*14*/].f_2 == -1)
	{
		func_19(3, iParam0, 242, -1);
	}
}

void func_33(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_77059[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 136:
			StringCopy(&Var2, "TORSO_P2_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 32;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P2_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 39;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P2_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 40;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P2_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 42;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P2_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 45;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P2_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 48;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P2_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 52;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P2_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 55;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P2_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 390;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P2_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 390;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P2_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 560;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P2_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 390;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P2_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 390;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P2_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 390;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P2_22_6", 16);
			iVar3 = 22;
			iVar4 = 6;
			iVar1 = 560;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P2_22_7", 16);
			iVar3 = 22;
			iVar4 = 7;
			iVar1 = 390;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P2_22_8", 16);
			iVar3 = 22;
			iVar4 = 8;
			iVar1 = 390;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P2_22_9", 16);
			iVar3 = 22;
			iVar4 = 9;
			iVar1 = 390;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P2_22_10", 16);
			iVar3 = 22;
			iVar4 = 10;
			iVar1 = 390;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P2_22_11", 16);
			iVar3 = 22;
			iVar4 = 11;
			iVar1 = 3950;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P2_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar1 = 150;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P2_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P2_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 150;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P2_23_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P2_23_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P2_23_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P2_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar1 = 19;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P2_24_1", 16);
			iVar3 = 24;
			iVar4 = 1;
			iVar1 = 20;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P2_24_2", 16);
			iVar3 = 24;
			iVar4 = 2;
			iVar1 = 19;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P2_24_3", 16);
			iVar3 = 24;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P2_24_4", 16);
			iVar3 = 24;
			iVar4 = 4;
			iVar1 = 20;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P2_24_5", 16);
			iVar3 = 24;
			iVar4 = 5;
			iVar1 = 28;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P2_24_6", 16);
			iVar3 = 24;
			iVar4 = 6;
			iVar1 = 28;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P2_24_7", 16);
			iVar3 = 24;
			iVar4 = 7;
			iVar1 = 25;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P2_24_8", 16);
			iVar3 = 24;
			iVar4 = 8;
			iVar1 = 22;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P2_24_9", 16);
			iVar3 = 24;
			iVar4 = 9;
			iVar1 = 19;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P2_24_10", 16);
			iVar3 = 24;
			iVar4 = 10;
			iVar1 = 22;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P2_24_11", 16);
			iVar3 = 24;
			iVar4 = 11;
			iVar1 = 19;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P2_24_12", 16);
			iVar3 = 24;
			iVar4 = 12;
			iVar1 = 20;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P2_24_13", 16);
			iVar3 = 24;
			iVar4 = 13;
			iVar1 = 25;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P2_24_14", 16);
			iVar3 = 24;
			iVar4 = 14;
			iVar1 = 20;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P2_24_15", 16);
			iVar3 = 24;
			iVar4 = 15;
			iVar1 = 28;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P2_25_0", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar1 = 35;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P2_25_1", 16);
			iVar3 = 25;
			iVar4 = 1;
			iVar1 = 40;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P2_25_2", 16);
			iVar3 = 25;
			iVar4 = 2;
			iVar1 = 45;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P2_25_3", 16);
			iVar3 = 25;
			iVar4 = 3;
			iVar1 = 45;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P2_25_4", 16);
			iVar3 = 25;
			iVar4 = 4;
			iVar1 = 49;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P2_25_5", 16);
			iVar3 = 25;
			iVar4 = 5;
			iVar1 = 820;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P2_25_6", 16);
			iVar3 = 25;
			iVar4 = 6;
			iVar1 = 790;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P2_25_7", 16);
			iVar3 = 25;
			iVar4 = 7;
			iVar1 = 820;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P2_25_8", 16);
			iVar3 = 25;
			iVar4 = 8;
			iVar1 = 929;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P2_25_9", 16);
			iVar3 = 25;
			iVar4 = 9;
			iVar1 = 40;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P2_25_10", 16);
			iVar3 = 25;
			iVar4 = 10;
			iVar1 = 850;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P2_25_11", 16);
			iVar3 = 25;
			iVar4 = 11;
			iVar1 = 790;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P2_26_0", 16);
			iVar3 = 26;
			iVar4 = 0;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P2_26_1", 16);
			iVar3 = 26;
			iVar4 = 1;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P2_26_2", 16);
			iVar3 = 26;
			iVar4 = 2;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P2_26_3", 16);
			iVar3 = 26;
			iVar4 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P2_26_4", 16);
			iVar3 = 26;
			iVar4 = 4;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P2_26_5", 16);
			iVar3 = 26;
			iVar4 = 5;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P2_26_6", 16);
			iVar3 = 26;
			iVar4 = 6;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P2_26_7", 16);
			iVar3 = 26;
			iVar4 = 7;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P2_26_8", 16);
			iVar3 = 26;
			iVar4 = 8;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P2_26_9", 16);
			iVar3 = 26;
			iVar4 = 9;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P2_27_0", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar1 = 2200;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P2_27_1", 16);
			iVar3 = 27;
			iVar4 = 1;
			iVar1 = 2500;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P2_27_2", 16);
			iVar3 = 27;
			iVar4 = 2;
			iVar1 = 2500;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P2_27_3", 16);
			iVar3 = 27;
			iVar4 = 3;
			iVar1 = 2200;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P2_27_4", 16);
			iVar3 = 27;
			iVar4 = 4;
			iVar1 = 2500;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P2_27_5", 16);
			iVar3 = 27;
			iVar4 = 5;
			iVar1 = 2500;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P2_27_6", 16);
			iVar3 = 27;
			iVar4 = 6;
			iVar1 = 2200;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P2_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar1 = 1100;
			break;
		
		case 208:
			StringCopy(&Var2, "TORSO_P2_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 1200;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P2_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 1220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P2_28_3", 16);
			iVar3 = 28;
			iVar4 = 3;
			iVar1 = 1250;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P2_28_4", 16);
			iVar3 = 28;
			iVar4 = 4;
			iVar1 = 1300;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P2_28_5", 16);
			iVar3 = 28;
			iVar4 = 5;
			iVar1 = 1360;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P2_28_6", 16);
			iVar3 = 28;
			iVar4 = 6;
			iVar1 = 35;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P2_28_7", 16);
			iVar3 = 28;
			iVar4 = 7;
			iVar1 = 38;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P2_28_8", 16);
			iVar3 = 28;
			iVar4 = 8;
			iVar1 = 40;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P2_28_9", 16);
			iVar3 = 28;
			iVar4 = 9;
			iVar1 = 42;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P2_28_10", 16);
			iVar3 = 28;
			iVar4 = 10;
			iVar1 = 50;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P2_28_11", 16);
			iVar3 = 28;
			iVar4 = 11;
			iVar1 = 45;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P2_28_12", 16);
			iVar3 = 28;
			iVar4 = 12;
			iVar1 = 45;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P2_28_13", 16);
			iVar3 = 28;
			iVar4 = 13;
			iVar1 = 44;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P2_28_14", 16);
			iVar3 = 28;
			iVar4 = 14;
			iVar1 = 46;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P2_28_15", 16);
			iVar3 = 28;
			iVar4 = 15;
			iVar1 = 52;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P2_29_0", 16);
			iVar3 = 29;
			iVar4 = 0;
			iVar1 = 3200;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P2_29_1", 16);
			iVar3 = 29;
			iVar4 = 1;
			iVar1 = 3200;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P2_29_2", 16);
			iVar3 = 29;
			iVar4 = 2;
			iVar1 = 2550;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P2_29_3", 16);
			iVar3 = 29;
			iVar4 = 3;
			iVar1 = 2750;
			break;
		
		case 227:
			StringCopy(&Var2, "TORSO_P2_29_4", 16);
			iVar3 = 29;
			iVar4 = 4;
			iVar1 = 2590;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P2_29_5", 16);
			iVar3 = 29;
			iVar4 = 5;
			iVar1 = 2750;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P2_29_6", 16);
			iVar3 = 29;
			iVar4 = 6;
			iVar1 = 2550;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P2_29_7", 16);
			iVar3 = 29;
			iVar4 = 7;
			iVar1 = 2590;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P2_29_8", 16);
			iVar3 = 29;
			iVar4 = 8;
			iVar1 = 2720;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P2_29_9", 16);
			iVar3 = 29;
			iVar4 = 9;
			iVar1 = 2750;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P2_30_0", 16);
			iVar3 = 30;
			iVar4 = 0;
			iVar1 = 3250;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P2_30_1", 16);
			iVar3 = 30;
			iVar4 = 1;
			iVar1 = 2950;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P2_30_2", 16);
			iVar3 = 30;
			iVar4 = 2;
			iVar1 = 3100;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P2_30_3", 16);
			iVar3 = 30;
			iVar4 = 3;
			iVar1 = 3150;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P2_30_4", 16);
			iVar3 = 30;
			iVar4 = 4;
			iVar1 = 3240;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P2_30_5", 16);
			iVar3 = 30;
			iVar4 = 5;
			iVar1 = 3350;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P2_30_6", 16);
			iVar3 = 30;
			iVar4 = 6;
			iVar1 = 3400;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P2_30_7", 16);
			iVar3 = 30;
			iVar4 = 7;
			iVar1 = 3280;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P2_31_0", 16);
			iVar3 = 31;
			iVar4 = 0;
			break;
		
		default:
			return;
			break;
	}
	func_8(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_34(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_77059[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 25;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P2_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P2_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 15;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P2_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 25;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P2_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 25;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P2_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 22;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P2_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P2_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P2_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 20;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P2_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 24;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P2_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 26;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P2_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 28;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P2_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 29;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P2_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 22;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P2_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 20;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "TORSO_P2_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 35;
			break;
		
		case 19:
			StringCopy(&Var2, "TORSO_P2_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "TORSO_P2_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P2_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 38;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P2_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 40;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P2_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 40;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P2_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 40;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P2_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 40;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P2_3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 40;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P2_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P2_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 500;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P2_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 560;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P2_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 600;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P2_4_4tu", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 650;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P2_4_5tu", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 500;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P2_4_6tu", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 560;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P2_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 500;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P2_4_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 650;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P2_4_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 540;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P2_4_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 690;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P2_4_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 560;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P2_4_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 590;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P2_4_13", 16);
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 690;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P2_4_14", 16);
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 540;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P2_4_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 500;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P2_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P2_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P2_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P2_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P2_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 22;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P2_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 350;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P2_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 27;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P2_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 370;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P2_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 25;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P2_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 22;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P2_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 25;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P2_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P2_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 22;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P2_11_13", 16);
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 27;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P2_11_14", 16);
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 25;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P2_11_15", 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 27;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 1;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P2_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P2_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 39;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P2_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 42;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P2_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 49;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P2_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 35;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P2_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 50;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P2_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 50;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P2_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 50;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "TORSO_P2_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P2_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 88;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P2_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 60;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P2_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P2_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 70;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P2_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P2_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 70;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P2_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 90;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P2_14_8", 16);
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 95;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P2_14_9", 16);
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 105;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P2_14_10", 16);
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 95;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P2_14_11", 16);
			iVar3 = 14;
			iVar4 = 11;
			iVar1 = 110;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P2_14_12", 16);
			iVar3 = 14;
			iVar4 = 12;
			iVar1 = 98;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P2_14_13", 16);
			iVar3 = 14;
			iVar4 = 13;
			iVar1 = 88;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P2_14_14", 16);
			iVar3 = 14;
			iVar4 = 14;
			iVar1 = 98;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P2_14_15", 16);
			iVar3 = 14;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P2_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P2_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P2_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P2_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P2_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 520;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P2_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 490;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P2_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 450;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P2_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 420;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P2_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 420;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P2_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 85;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P2_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 85;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P2_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P2_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 68;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P2_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 68;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P2_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 78;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P2_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 85;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P2_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 68;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P2_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 75;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P2_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 75;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P2_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 78;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P2_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 75;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P2_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 75;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P2_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 75;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P2_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 78;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P2_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 78;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P2_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 40;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P2_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 32;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P2_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 32;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P2_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 32;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P2_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P2_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 38;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P2_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 35;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P2_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 38;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P2_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 29;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P2_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 32;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P2_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 29;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P2_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 35;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P2_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 32;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P2_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 35;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P2_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 32;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P2_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 40;
			break;
		
		default:
			return;
			break;
	}
	func_8(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_35(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 2;
	Global_77059[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P2_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P2_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P2_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P2_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P2_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P2_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P2_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		default:
			func_19(iVar7, iParam0, 9, -1);
			return;
			break;
	}
	func_8(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_36(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 0;
	Global_77059[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		default:
			func_19(iVar7, iParam0, 7, -1);
			return;
			break;
	}
	func_8(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_37(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_55(iParam1);
			break;
		
		case 2:
			func_54(iParam1);
			break;
		
		case 3:
			func_50(iParam1);
			break;
		
		case 4:
			func_49(iParam1);
			break;
		
		case 6:
			func_48(iParam1);
			break;
		
		case 5:
			func_47(iParam1);
			break;
		
		case 8:
			func_46(iParam1);
			break;
		
		case 9:
			func_45(iParam1);
			break;
		
		case 10:
			func_44(iParam1);
			break;
		
		case 1:
			func_43(iParam1);
			break;
		
		case 7:
			func_42(iParam1);
			break;
		
		case 11:
			func_41(iParam1);
			break;
		
		case 12:
			func_40(iParam1);
			break;
		
		case 13:
			func_39(iParam1);
			break;
		
		case 14:
			func_38(iParam1);
			break;
	}
}

void func_38(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	Global_77059[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 158:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 2;
			break;
		
		case 159:
			StringCopy(&Var2, "PROPS_P1_EA1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 4590;
			iVar5 = 2;
			break;
		
		case 160:
			StringCopy(&Var2, "PROPS_P1_EA1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 4100;
			iVar5 = 2;
			break;
		
		case 161:
			StringCopy(&Var2, "PROPS_P1_EA1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 3850;
			iVar5 = 2;
			break;
		
		case 162:
			StringCopy(&Var2, "PROPS_P1_EA1_3", 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 1850;
			iVar5 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "PROPS_P1_EA1_4", 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 5250;
			iVar5 = 2;
			break;
		
		case 164:
			StringCopy(&Var2, "PROPS_P1_EA1_5", 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 2700;
			iVar5 = 2;
			break;
		
		case 165:
			StringCopy(&Var2, "PROPS_P1_EA1_6", 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 3100;
			iVar5 = 2;
			break;
		
		case 166:
			StringCopy(&Var2, "PROPS_P1_EA1_7", 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 5050;
			iVar5 = 2;
			break;
		
		case 167:
			StringCopy(&Var2, "PROPS_P1_EA2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 2500;
			iVar5 = 2;
			break;
		
		case 168:
			StringCopy(&Var2, "PROPS_P1_EA2_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 1950;
			iVar5 = 2;
			break;
		
		case 169:
			StringCopy(&Var2, "PROPS_P1_EA2_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 3900;
			iVar5 = 2;
			break;
		
		case 170:
			StringCopy(&Var2, "PROPS_P1_EA2_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 3550;
			iVar5 = 2;
			break;
		
		case 171:
			StringCopy(&Var2, "PROPS_P1_EA2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 4500;
			iVar5 = 2;
			break;
		
		case 172:
			StringCopy(&Var2, "PROPS_P1_EA2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 2700;
			iVar5 = 2;
			break;
		
		case 173:
			StringCopy(&Var2, "PROPS_P1_EA2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 3100;
			iVar5 = 2;
			break;
		
		case 174:
			StringCopy(&Var2, "PROPS_P1_EA2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 2950;
			iVar5 = 2;
			break;
		
		case 82:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_E1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_E1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_E1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_E1_3", 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P1_E1_4", 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P1_E1_5", 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P1_E1_6", 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P1_E1_7", 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P1_E1_8", 16);
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P1_E1_9", 16);
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P1_E2", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P1_E3", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 110;
			iVar5 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P1_E4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 120;
			iVar5 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P1_E4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 128;
			iVar5 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P1_E4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 130;
			iVar5 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P1_E4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P1_E4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P1_E4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 135;
			iVar5 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P1_E4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 138;
			iVar5 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P1_E5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 110;
			iVar5 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P1_E5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 112;
			iVar5 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P1_E5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 115;
			iVar5 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P1_E5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 118;
			iVar5 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P1_E5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 120;
			iVar5 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P1_E5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 125;
			iVar5 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P1_E5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 128;
			iVar5 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P1_E5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 138;
			iVar5 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P1_E5_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "PROPS_P1_E5_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 155;
			iVar5 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "PROPS_P1_E6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P1_E6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P1_E6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P1_E6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P1_E6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P1_E6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 62;
			iVar5 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P1_E6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P1_E6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P1_E6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P1_E6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 72;
			iVar5 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P1_E7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P1_E7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 149;
			iVar5 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P1_E7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 139;
			iVar5 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P1_E7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 149;
			iVar5 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P1_E7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 135;
			iVar5 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P1_E7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 138;
			iVar5 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P1_E7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P1_E7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P1_E7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 159;
			iVar5 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P1_E7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 155;
			iVar5 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P1_E8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 198;
			iVar5 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P1_E8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 210;
			iVar5 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P1_E8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P1_E8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 220;
			iVar5 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P1_E8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 190;
			iVar5 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P1_E8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 200;
			iVar5 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P1_E8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 208;
			iVar5 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P1_E8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 210;
			iVar5 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P1_E9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P1_E9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P1_E9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 190;
			iVar5 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P1_E9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 178;
			iVar5 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P1_E9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 180;
			iVar5 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P1_E9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 168;
			iVar5 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P1_E9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P1_E9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P1_E9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P1_E9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 178;
			iVar5 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P1_E10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P1_E10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P1_E10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 150;
			iVar5 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "PROPS_P1_E10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 154:
			StringCopy(&Var2, "PROPS_P1_E10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 168;
			iVar5 = 10;
			break;
		
		case 155:
			StringCopy(&Var2, "PROPS_P1_E10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 178;
			iVar5 = 10;
			break;
		
		case 156:
			StringCopy(&Var2, "PROPS_P1_E10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 160;
			iVar5 = 10;
			break;
		
		case 157:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 100;
			iVar5 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "PROPS_P1_H0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 320;
			iVar5 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "PROPS_P1_H3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar5 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 450;
			iVar5 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			iVar5 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			iVar5 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			iVar5 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			iVar5 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar3 = 16;
			iVar4 = 12;
			iVar5 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar3 = 16;
			iVar4 = 13;
			iVar5 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar3 = 16;
			iVar4 = 14;
			iVar5 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar3 = 16;
			iVar4 = 15;
			iVar5 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 30;
			iVar5 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 30;
			iVar5 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 32;
			iVar5 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 35;
			iVar5 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 38;
			iVar5 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 42;
			iVar5 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 42;
			iVar5 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 40;
			iVar5 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 45;
			iVar5 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 48;
			iVar5 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 28;
			iVar5 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 28;
			iVar5 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 30;
			iVar5 = 0;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 35;
			iVar5 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		default:
			func_19(iVar7, iParam0, 175, -1);
			return;
			break;
	}
	func_8(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_39(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 13;
	Global_77059[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_19(iVar7, iParam0, 9, -1);
			return;
			break;
	}
	func_8(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_40(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 12;
	Global_77059[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P1_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P1_2", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P1_4", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P1_7", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P1_11", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P1_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P1_13", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P1_15", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P1_16", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P1_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P1_18", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P1_19", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P1_20", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P1_21", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P1_22", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P1_23", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P1_24", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P1_25", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P1_26", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P1_27", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P1_28", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4000;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P1_29", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P1_30", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P1_31", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4650;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P1_32", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P1_33", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5000;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P1_34", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4750;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P1_35", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4750;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P1_36", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5200;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P1_37", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5200;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P1_38", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P1_39", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P1_40", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P1_41", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P1_42", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P1_43", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P1_47", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P1_48", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3000;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P1_49", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3000;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P1_50", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P1_51", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P1_52", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P1_53", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P1_54", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_19(iVar7, iParam0, 47, -1);
			return;
			break;
	}
	func_8(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_41(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	Global_77059[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P1_1_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P1_1_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P1_1_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P1_1_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar3 = 3;
			iVar4 = 10;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar3 = 3;
			iVar4 = 11;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar3 = 3;
			iVar4 = 12;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar3 = 3;
			iVar4 = 13;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar3 = 3;
			iVar4 = 14;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar3 = 3;
			iVar4 = 15;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar3 = 4;
			iVar4 = 13;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar3 = 4;
			iVar4 = 14;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P1_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P1_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P1_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P1_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "JBIB_P1_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "JBIB_P1_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "JBIB_P1_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "JBIB_P1_10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 49:
			StringCopy(&Var2, "JBIB_P1_10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 35;
			break;
		
		case 50:
			StringCopy(&Var2, "JBIB_P1_10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 32;
			break;
		
		case 51:
			StringCopy(&Var2, "JBIB_P1_10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 35;
			break;
		
		case 52:
			StringCopy(&Var2, "JBIB_P1_10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 48;
			break;
		
		case 53:
			StringCopy(&Var2, "JBIB_P1_10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 52;
			break;
		
		case 54:
			StringCopy(&Var2, "JBIB_P1_10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 38;
			break;
		
		case 55:
			StringCopy(&Var2, "JBIB_P1_10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 42;
			break;
		
		case 56:
			StringCopy(&Var2, "JBIB_P1_10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 38;
			break;
		
		case 57:
			StringCopy(&Var2, "JBIB_P1_10_10", 16);
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 58:
			StringCopy(&Var2, "JBIB_P1_10_11", 16);
			iVar3 = 10;
			iVar4 = 11;
			iVar1 = 48;
			break;
		
		case 59:
			StringCopy(&Var2, "JBIB_P1_10_12", 16);
			iVar3 = 10;
			iVar4 = 12;
			iVar1 = 42;
			break;
		
		case 60:
			StringCopy(&Var2, "JBIB_P1_10_13", 16);
			iVar3 = 10;
			iVar4 = 13;
			iVar1 = 45;
			break;
		
		case 61:
			StringCopy(&Var2, "JBIB_P1_10_14", 16);
			iVar3 = 10;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 62:
			StringCopy(&Var2, "JBIB_P1_10_15", 16);
			iVar3 = 10;
			iVar4 = 15;
			iVar1 = 49;
			break;
		
		default:
			func_19(iVar7, iParam0, 63, -1);
			return;
			break;
	}
	func_8(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_42(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	Global_77059[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_19(iVar7, iParam0, 1, -1);
			return;
			break;
	}
	func_8(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_43(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 1;
	Global_77059[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P1_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P1_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P1_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		default:
			func_19(iVar7, iParam0, 5, -1);
			return;
			break;
	}
	func_8(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_44(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 10;
	Global_77059[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 2;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 4;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 5;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 5;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 6;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 7;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 8;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 9;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 10;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 11;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 12;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 13;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 14;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 15;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 1;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 3;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 4;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 5;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 6;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 1;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 2;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 4;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 5;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 6;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 7;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		default:
			func_19(iVar7, iParam0, 53, -1);
			return;
			break;
	}
	func_8(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_45(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 9;
	Global_77059[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 6:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 7:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 175;
			break;
		
		case 8:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 85;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 175;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		default:
			func_19(iVar7, iParam0, 12, -1);
			return;
			break;
	}
	func_8(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_46(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	Global_77059[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC_P1_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 195;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 195;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 195;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 250;
			break;
		
		case 15:
			StringCopy(&Var2, "SPEC_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 250;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 250;
			break;
		
		case 17:
			StringCopy(&Var2, "SPEC_P1_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 195;
			break;
		
		case 18:
			StringCopy(&Var2, "SPEC_P1_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 250;
			break;
		
		case 19:
			StringCopy(&Var2, "SPEC_P1_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 250;
			break;
		
		case 20:
			StringCopy(&Var2, "SPEC_P1_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 250;
			break;
		
		case 21:
			StringCopy(&Var2, "SPEC_P1_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 250;
			break;
		
		case 22:
			StringCopy(&Var2, "SPEC_P1_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 195;
			break;
		
		case 23:
			StringCopy(&Var2, "SPEC_P1_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 250;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			break;
		
		case 29:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			break;
		
		case 31:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			break;
		
		case 32:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			break;
		
		case 33:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			break;
		
		case 34:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			break;
		
		case 35:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			break;
		
		case 36:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			break;
		
		case 37:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 15;
			iVar4 = 10;
			break;
		
		case 38:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 15;
			iVar4 = 11;
			break;
		
		case 39:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 15;
			iVar4 = 12;
			break;
		
		case 40:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 15;
			iVar4 = 13;
			break;
		
		case 41:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 15;
			iVar4 = 14;
			break;
		
		case 42:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 15;
			iVar4 = 15;
			break;
		
		case 43:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			break;
		
		case 46:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			break;
		
		case 48:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			break;
		
		case 49:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			break;
		
		case 50:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			break;
		
		case 51:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			break;
		
		case 52:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			break;
		
		case 53:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			break;
		
		case 54:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			break;
		
		case 55:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 16;
			iVar4 = 12;
			break;
		
		case 56:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 16;
			iVar4 = 13;
			break;
		
		case 57:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 16;
			iVar4 = 14;
			break;
		
		case 58:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 16;
			iVar4 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			break;
		
		case 62:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			break;
		
		case 63:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			break;
		
		case 64:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			break;
		
		case 65:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			break;
		
		case 66:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			break;
		
		case 67:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 17;
			iVar4 = 8;
			break;
		
		case 68:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 17;
			iVar4 = 9;
			break;
		
		case 69:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 17;
			iVar4 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 17;
			iVar4 = 11;
			break;
		
		case 71:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 17;
			iVar4 = 12;
			break;
		
		case 72:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 17;
			iVar4 = 13;
			break;
		
		case 73:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 17;
			iVar4 = 14;
			break;
		
		case 74:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 17;
			iVar4 = 15;
			break;
		
		case 75:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 19;
			iVar4 = 0;
			break;
		
		default:
			func_19(iVar7, iParam0, 77, -1);
			return;
			break;
	}
	func_8(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_47(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	Global_77059[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_19(iVar7, iParam0, 7, -1);
			return;
			break;
	}
	func_8(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_48(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	Global_77059[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P1_00_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P1_00_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 80;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P1_00_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 80;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P1_00_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 89;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P1_00_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 45;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P1_00_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 35;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P1_00_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 89;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P1_00_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 95;
			break;
		
		case 8:
			StringCopy(&Var2, "FEET_P1_00_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 115;
			break;
		
		case 9:
			StringCopy(&Var2, "FEET_P1_00_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			StringCopy(&Var2, "FEET_P1_00_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 145;
			break;
		
		case 11:
			StringCopy(&Var2, "FEET_P1_00_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 145;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P1_01_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P1_06_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P1_06_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 180;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P1_06_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 80;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P1_06_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 200;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P1_06_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 220;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P1_06_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 235;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P1_08_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 870;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P1_08_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 870;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P1_08_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 870;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P1_08_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 1275;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P1_08_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 1275;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P1_08_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 1275;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P1_08_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 1275;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P1_08_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 1275;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P1_08_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 1275;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P1_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 50;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 50;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 50;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 50;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 50;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P1_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 50;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P1_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 50;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P1_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 50;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P1_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 50;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P1_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 50;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P1_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 50;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P1_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 50;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P1_11_13", 16);
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 50;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P1_11_14", 16);
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 50;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P1_11_15", 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 50;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P1_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P1_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 25;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P1_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 20;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P1_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 24;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P1_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P1_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P1_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 29;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P1_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 27;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P1_12_8", 16);
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 25;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P1_12_9", 16);
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 30;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P1_12_10", 16);
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 28;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P1_12_11", 16);
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 30;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P1_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P1_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 155;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P1_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 155;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P1_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 165;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P1_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 170;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P1_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P1_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 165;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P1_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 170;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P1_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 160;
			break;
		
		case 73:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P1_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 720;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P1_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 680;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P1_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P1_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 670;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P1_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 700;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "FEET_P1_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 680;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P1_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 720;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P1_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 740;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P1_16_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			iVar1 = 760;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P1_16_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			iVar1 = 780;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P1_16_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			iVar1 = 750;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P1_16_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			iVar1 = 700;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P1_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 790;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P1_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P1_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar1 = 860;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P1_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 750;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P1_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 790;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P1_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P1_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 820;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P1_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 800;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P1_17_8", 16);
			iVar3 = 17;
			iVar4 = 8;
			iVar1 = 850;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P1_17_9", 16);
			iVar3 = 17;
			iVar4 = 9;
			iVar1 = 870;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P1_17_10", 16);
			iVar3 = 17;
			iVar4 = 10;
			iVar1 = 720;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P1_17_11", 16);
			iVar3 = 17;
			iVar4 = 11;
			iVar1 = 740;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P1_17_12", 16);
			iVar3 = 17;
			iVar4 = 12;
			iVar1 = 800;
			break;
		
		case 99:
			StringCopy(&Var2, "FEET_P1_17_13", 16);
			iVar3 = 17;
			iVar4 = 13;
			iVar1 = 750;
			break;
		
		case 100:
			StringCopy(&Var2, "FEET_P1_17_14", 16);
			iVar3 = 17;
			iVar4 = 14;
			iVar1 = 770;
			break;
		
		case 101:
			StringCopy(&Var2, "FEET_P1_17_15", 16);
			iVar3 = 17;
			iVar4 = 15;
			iVar1 = 860;
			break;
		
		case 102:
			StringCopy(&Var2, "FEET_P1_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 103:
			StringCopy(&Var2, "FEET_P1_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 800;
			break;
		
		case 104:
			StringCopy(&Var2, "FEET_P1_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 780;
			break;
		
		case 105:
			StringCopy(&Var2, "FEET_P1_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 106:
			StringCopy(&Var2, "FEET_P1_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 107:
			StringCopy(&Var2, "FEET_P1_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 108:
			StringCopy(&Var2, "FEET_P1_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 870;
			break;
		
		case 109:
			StringCopy(&Var2, "FEET_P1_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 930;
			break;
		
		case 110:
			StringCopy(&Var2, "FEET_P1_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 880;
			break;
		
		case 111:
			StringCopy(&Var2, "FEET_P1_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 900;
			break;
		
		case 112:
			StringCopy(&Var2, "FEET_P1_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 920;
			break;
		
		case 113:
			StringCopy(&Var2, "FEET_P1_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar1 = 970;
			break;
		
		case 114:
			StringCopy(&Var2, "FEET_P1_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar1 = 990;
			break;
		
		case 115:
			StringCopy(&Var2, "FEET_P1_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar1 = 960;
			break;
		
		case 116:
			StringCopy(&Var2, "FEET_P1_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar1 = 980;
			break;
		
		case 117:
			StringCopy(&Var2, "FEET_P1_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar1 = 950;
			break;
		
		case 118:
			StringCopy(&Var2, "FEET_P1_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 110;
			break;
		
		case 119:
			StringCopy(&Var2, "FEET_P1_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 120:
			StringCopy(&Var2, "FEET_P1_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 121:
			StringCopy(&Var2, "FEET_P1_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 122:
			StringCopy(&Var2, "FEET_P1_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 123:
			StringCopy(&Var2, "FEET_P1_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 124:
			StringCopy(&Var2, "FEET_P1_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 135;
			break;
		
		case 125:
			StringCopy(&Var2, "FEET_P1_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case 126:
			StringCopy(&Var2, "FEET_P1_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 145;
			break;
		
		case 127:
			StringCopy(&Var2, "FEET_P1_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "FEET_P1_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 120;
			break;
		
		case 129:
			StringCopy(&Var2, "FEET_P1_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 130:
			StringCopy(&Var2, "FEET_P1_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 125;
			break;
		
		case 131:
			StringCopy(&Var2, "FEET_P1_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 120;
			break;
		
		case 132:
			StringCopy(&Var2, "FEET_P1_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 130;
			break;
		
		case 133:
			StringCopy(&Var2, "FEET_P1_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_19(iVar7, iParam0, 134, -1);
			return;
			break;
	}
	func_8(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_49(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	Global_77059[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P1_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 32;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P1_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 38;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P1_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 44;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P1_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P1_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 690;
			break;
		
		case 16:
			StringCopy(&Var2, "LEGS_P1_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 720;
			break;
		
		case 17:
			StringCopy(&Var2, "LEGS_P1_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 850;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P1_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P1_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 740;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P1_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 750;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P1_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 790;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P1_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P1_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 145;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P1_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 140;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P1_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 148;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P1_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P1_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 154;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P1_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 158;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 820;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 820;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 850;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 850;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 920;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 950;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P1_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P1_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 45;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P1_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 48;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P1_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 45;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P1_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 48;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P1_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P1_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 55;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P1_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 58;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P1_13_8", 16);
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 60;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P1_13_9", 16);
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P1_13_10", 16);
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 62;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P1_13_11", 16);
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 65;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P1_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P1_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P1_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P1_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P1_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P1_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P1_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P1_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P1_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P1_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P1_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P1_15_10", 16);
			iVar3 = 15;
			iVar4 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P1_15_11", 16);
			iVar3 = 15;
			iVar4 = 11;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P1_15_12", 16);
			iVar3 = 15;
			iVar4 = 12;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P1_15_13", 16);
			iVar3 = 15;
			iVar4 = 13;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P1_15_14", 16);
			iVar3 = 15;
			iVar4 = 14;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P1_15_15", 16);
			iVar3 = 15;
			iVar4 = 15;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P1_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 16;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P1_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P1_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 160;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P1_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 180;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P1_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 180;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P1_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P1_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P1_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "LEGS_P1_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 118;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P1_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 120;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P1_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 128;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P1_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 128;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P1_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 130;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P1_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 145;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P1_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 138;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P1_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 132;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P1_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 148;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P1_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 118;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P1_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 118;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P1_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 118;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P1_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 129;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P1_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 135;
			break;
		
		case 93:
			StringCopy(&Var2, "LEGS_P1_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 135;
			break;
		
		case 94:
			StringCopy(&Var2, "LEGS_P1_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 118;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P1_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 118;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P1_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 118;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P1_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 55;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P1_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 55;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P1_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 59;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P1_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 59;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P1_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 65;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P1_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 65;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P1_22_6", 16);
			iVar3 = 22;
			iVar4 = 6;
			iVar1 = 69;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P1_22_7", 16);
			iVar3 = 22;
			iVar4 = 7;
			iVar1 = 69;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P1_22_8", 16);
			iVar3 = 22;
			iVar4 = 8;
			iVar1 = 75;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P1_22_9", 16);
			iVar3 = 22;
			iVar4 = 9;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P1_22_10", 16);
			iVar3 = 22;
			iVar4 = 10;
			iVar1 = 65;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P1_22_11", 16);
			iVar3 = 22;
			iVar4 = 11;
			iVar1 = 65;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P1_22_12", 16);
			iVar3 = 22;
			iVar4 = 12;
			iVar1 = 65;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P1_22_13", 16);
			iVar3 = 22;
			iVar4 = 13;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P1_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar1 = 38;
			break;
		
		case 112:
			StringCopy(&Var2, "LEGS_P1_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar1 = 38;
			break;
		
		case 113:
			StringCopy(&Var2, "LEGS_P1_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 28;
			break;
		
		case 114:
			StringCopy(&Var2, "LEGS_P1_23_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar1 = 34;
			break;
		
		case 115:
			StringCopy(&Var2, "LEGS_P1_23_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar1 = 36;
			break;
		
		case 116:
			StringCopy(&Var2, "LEGS_P1_23_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar1 = 32;
			break;
		
		default:
			func_19(iVar7, iParam0, 117, -1);
			return;
			break;
	}
	func_8(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_50(int iParam0)
{
	if (iParam0 < 107)
	{
		func_53(iParam0);
	}
	else if (iParam0 < 227)
	{
		func_52(iParam0);
	}
	else
	{
		func_51(iParam0);
	}
	if (Global_77059[0 /*14*/].f_2 == -1)
	{
		func_19(3, iParam0, 318, -1);
	}
}

void func_51(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_77059[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 227:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar6 = 3;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar6 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar6 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar6 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar6 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar3 = 23;
			iVar4 = 6;
			iVar6 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar3 = 23;
			iVar4 = 7;
			iVar6 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar3 = 23;
			iVar4 = 8;
			iVar6 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar3 = 23;
			iVar4 = 9;
			iVar6 = 3;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar3 = 23;
			iVar4 = 10;
			iVar6 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar3 = 23;
			iVar4 = 11;
			iVar6 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar3 = 23;
			iVar4 = 12;
			iVar6 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar3 = 23;
			iVar4 = 13;
			iVar6 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar3 = 23;
			iVar4 = 14;
			iVar6 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar3 = 23;
			iVar4 = 15;
			iVar6 = 3;
			break;
		
		case 243:
			StringCopy(&Var2, "TORSO_P1_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "TORSO_P1_24_1", 16);
			iVar3 = 24;
			iVar4 = 1;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 245:
			StringCopy(&Var2, "TORSO_P1_24_2", 16);
			iVar3 = 24;
			iVar4 = 2;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 246:
			StringCopy(&Var2, "TORSO_P1_24_3", 16);
			iVar3 = 24;
			iVar4 = 3;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 247:
			StringCopy(&Var2, "TORSO_P1_24_4", 16);
			iVar3 = 24;
			iVar4 = 4;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 248:
			StringCopy(&Var2, "TORSO_P1_24_5", 16);
			iVar3 = 24;
			iVar4 = 5;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 249:
			StringCopy(&Var2, "TORSO_P1_24_6", 16);
			iVar3 = 24;
			iVar4 = 6;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 250:
			StringCopy(&Var2, "TORSO_P1_24_7", 16);
			iVar3 = 24;
			iVar4 = 7;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 251:
			StringCopy(&Var2, "TORSO_P1_24_8", 16);
			iVar3 = 24;
			iVar4 = 8;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "TORSO_P1_24_9", 16);
			iVar3 = 24;
			iVar4 = 9;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "TORSO_P1_24_10", 16);
			iVar3 = 24;
			iVar4 = 10;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "TORSO_P1_24_11", 16);
			iVar3 = 24;
			iVar4 = 11;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "TORSO_P1_24_12", 16);
			iVar3 = 24;
			iVar4 = 12;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "TORSO_P1_24_13", 16);
			iVar3 = 24;
			iVar4 = 13;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "TORSO_P1_24_14", 16);
			iVar3 = 24;
			iVar4 = 14;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "TORSO_P1_24_15", 16);
			iVar3 = 24;
			iVar4 = 15;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "TORSO_P1_25_0", 16);
			iVar3 = 25;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			iVar6 = 1;
			break;
		
		case 261:
			StringCopy(&Var2, "TORSO_P1_27_0", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar1 = 150;
			break;
		
		case 262:
			StringCopy(&Var2, "TORSO_P1_27_1", 16);
			iVar3 = 27;
			iVar4 = 1;
			iVar1 = 160;
			break;
		
		case 263:
			StringCopy(&Var2, "TORSO_P1_27_2", 16);
			iVar3 = 27;
			iVar4 = 2;
			iVar1 = 150;
			break;
		
		case 264:
			StringCopy(&Var2, "TORSO_P1_27_3", 16);
			iVar3 = 27;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 265:
			StringCopy(&Var2, "TORSO_P1_27_4", 16);
			iVar3 = 27;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 266:
			StringCopy(&Var2, "TORSO_P1_27_5", 16);
			iVar3 = 27;
			iVar4 = 5;
			iVar1 = 160;
			break;
		
		case 267:
			StringCopy(&Var2, "TORSO_P1_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar1 = 88;
			break;
		
		case 268:
			StringCopy(&Var2, "TORSO_P1_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 60;
			break;
		
		case 269:
			StringCopy(&Var2, "TORSO_P1_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 70;
			break;
		
		case 270:
			StringCopy(&Var2, "TORSO_P1_28_3", 16);
			iVar3 = 28;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 271:
			StringCopy(&Var2, "TORSO_P1_28_4", 16);
			iVar3 = 28;
			iVar4 = 4;
			iVar1 = 90;
			break;
		
		case 272:
			StringCopy(&Var2, "TORSO_P1_28_5", 16);
			iVar3 = 28;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 273:
			StringCopy(&Var2, "TORSO_P1_28_6", 16);
			iVar3 = 28;
			iVar4 = 6;
			iVar1 = 70;
			break;
		
		case 274:
			StringCopy(&Var2, "TORSO_P1_28_7", 16);
			iVar3 = 28;
			iVar4 = 7;
			iVar1 = 95;
			break;
		
		case 275:
			StringCopy(&Var2, "TORSO_P1_28_8", 16);
			iVar3 = 28;
			iVar4 = 8;
			iVar1 = 105;
			break;
		
		case 276:
			StringCopy(&Var2, "TORSO_P1_28_9", 16);
			iVar3 = 28;
			iVar4 = 9;
			iVar1 = 95;
			break;
		
		case 277:
			StringCopy(&Var2, "TORSO_P1_28_10", 16);
			iVar3 = 28;
			iVar4 = 10;
			iVar1 = 110;
			break;
		
		case 278:
			StringCopy(&Var2, "TORSO_P1_28_11", 16);
			iVar3 = 28;
			iVar4 = 11;
			iVar1 = 98;
			break;
		
		case 279:
			StringCopy(&Var2, "TORSO_P1_28_12", 16);
			iVar3 = 28;
			iVar4 = 12;
			iVar1 = 88;
			break;
		
		case 280:
			StringCopy(&Var2, "TORSO_P1_28_13", 16);
			iVar3 = 28;
			iVar4 = 13;
			iVar1 = 98;
			break;
		
		case 281:
			StringCopy(&Var2, "TORSO_P1_28_14", 16);
			iVar3 = 28;
			iVar4 = 14;
			iVar1 = 110;
			break;
		
		case 282:
			StringCopy(&Var2, "TORSO_P1_28_15", 16);
			iVar3 = 28;
			iVar4 = 15;
			iVar1 = 98;
			break;
		
		case 283:
			StringCopy(&Var2, "TORSO_P1_29_0", 16);
			iVar3 = 29;
			iVar4 = 0;
			iVar1 = 250;
			break;
		
		case 284:
			StringCopy(&Var2, "TORSO_P1_29_1", 16);
			iVar3 = 29;
			iVar4 = 1;
			iVar1 = 270;
			break;
		
		case 285:
			StringCopy(&Var2, "TORSO_P1_29_2", 16);
			iVar3 = 29;
			iVar4 = 2;
			iVar1 = 280;
			break;
		
		case 286:
			StringCopy(&Var2, "TORSO_P1_29_3", 16);
			iVar3 = 29;
			iVar4 = 3;
			iVar1 = 275;
			break;
		
		case 287:
			StringCopy(&Var2, "TORSO_P1_29_4", 16);
			iVar3 = 29;
			iVar4 = 4;
			iVar1 = 290;
			break;
		
		case 288:
			StringCopy(&Var2, "TORSO_P1_29_5", 16);
			iVar3 = 29;
			iVar4 = 5;
			iVar1 = 35;
			break;
		
		case 289:
			StringCopy(&Var2, "TORSO_P1_29_6", 16);
			iVar3 = 29;
			iVar4 = 6;
			iVar1 = 35;
			break;
		
		case 290:
			StringCopy(&Var2, "TORSO_P1_29_7", 16);
			iVar3 = 29;
			iVar4 = 7;
			iVar1 = 35;
			break;
		
		case 291:
			StringCopy(&Var2, "TORSO_P1_29_8", 16);
			iVar3 = 29;
			iVar4 = 8;
			iVar1 = 295;
			break;
		
		case 292:
			StringCopy(&Var2, "TORSO_P1_29_9", 16);
			iVar3 = 29;
			iVar4 = 9;
			iVar1 = 35;
			break;
		
		case 293:
			StringCopy(&Var2, "TORSO_P1_29_10", 16);
			iVar3 = 29;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 294:
			StringCopy(&Var2, "TORSO_P1_29_11", 16);
			iVar3 = 29;
			iVar4 = 11;
			iVar1 = 35;
			break;
		
		case 295:
			StringCopy(&Var2, "TORSO_P1_29_12", 16);
			iVar3 = 29;
			iVar4 = 12;
			break;
		
		case 296:
			StringCopy(&Var2, "TORSO_P1_30_0", 16);
			iVar3 = 30;
			iVar4 = 0;
			iVar1 = 1750;
			break;
		
		case 297:
			StringCopy(&Var2, "TORSO_P1_30_1", 16);
			iVar3 = 30;
			iVar4 = 1;
			iVar1 = 1920;
			break;
		
		case 298:
			StringCopy(&Var2, "TORSO_P1_30_2", 16);
			iVar3 = 30;
			iVar4 = 2;
			iVar1 = 1890;
			break;
		
		case 299:
			StringCopy(&Var2, "TORSO_P1_30_3", 16);
			iVar3 = 30;
			iVar4 = 3;
			iVar1 = 1850;
			break;
		
		case 300:
			StringCopy(&Var2, "TORSO_P1_30_4", 16);
			iVar3 = 30;
			iVar4 = 4;
			iVar1 = 1750;
			break;
		
		case 301:
			StringCopy(&Var2, "TORSO_P1_30_5", 16);
			iVar3 = 30;
			iVar4 = 5;
			iVar1 = 1990;
			break;
		
		case 302:
			StringCopy(&Var2, "TORSO_P1_30_6", 16);
			iVar3 = 30;
			iVar4 = 6;
			iVar1 = 1820;
			break;
		
		case 303:
			StringCopy(&Var2, "TORSO_P1_30_7", 16);
			iVar3 = 30;
			iVar4 = 7;
			iVar1 = 1990;
			break;
		
		case 304:
			StringCopy(&Var2, "TORSO_P1_30_8", 16);
			iVar3 = 30;
			iVar4 = 8;
			iVar1 = 1920;
			break;
		
		case 305:
			StringCopy(&Var2, "TORSO_P1_30_9", 16);
			iVar3 = 30;
			iVar4 = 9;
			iVar1 = 1850;
			break;
		
		case 306:
			StringCopy(&Var2, "TORSO_P1_30_10", 16);
			iVar3 = 30;
			iVar4 = 10;
			iVar1 = 1990;
			break;
		
		case 307:
			StringCopy(&Var2, "TORSO_P1_30_11", 16);
			iVar3 = 30;
			iVar4 = 11;
			iVar1 = 1790;
			break;
		
		case 308:
			StringCopy(&Var2, "TORSO_P1_30_12", 16);
			iVar3 = 30;
			iVar4 = 12;
			iVar1 = 1790;
			break;
		
		case 309:
			StringCopy(&Var2, "TORSO_P1_31_0", 16);
			iVar3 = 31;
			iVar4 = 0;
			iVar1 = 69;
			break;
		
		case 310:
			StringCopy(&Var2, "TORSO_P1_31_1", 16);
			iVar3 = 31;
			iVar4 = 1;
			iVar1 = 75;
			break;
		
		case 311:
			StringCopy(&Var2, "TORSO_P1_31_2", 16);
			iVar3 = 31;
			iVar4 = 2;
			iVar1 = 75;
			break;
		
		case 312:
			StringCopy(&Var2, "TORSO_P1_31_3", 16);
			iVar3 = 31;
			iVar4 = 3;
			iVar1 = 79;
			break;
		
		case 313:
			StringCopy(&Var2, "TORSO_P1_31_4", 16);
			iVar3 = 31;
			iVar4 = 4;
			iVar1 = 79;
			break;
		
		case 314:
			StringCopy(&Var2, "TORSO_P1_31_5", 16);
			iVar3 = 31;
			iVar4 = 5;
			iVar1 = 89;
			break;
		
		case 315:
			StringCopy(&Var2, "TORSO_P1_31_6", 16);
			iVar3 = 31;
			iVar4 = 6;
			iVar1 = 85;
			break;
		
		case 316:
			StringCopy(&Var2, "TORSO_P1_31_7", 16);
			iVar3 = 31;
			iVar4 = 7;
			iVar1 = 85;
			break;
		
		case 317:
			StringCopy(&Var2, "TORSO_P1_31_8", 16);
			iVar3 = 31;
			iVar4 = 8;
			break;
		
		default:
			return;
			break;
	}
	func_8(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_52(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_77059[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 107:
			StringCopy(&Var2, "TORSO_P1_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 195;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P1_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 420;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P1_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 390;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P1_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 450;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P1_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 400;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P1_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 390;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P1_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 570;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P1_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 390;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P1_12_8", 16);
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 470;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P1_12_9", 16);
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 390;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P1_12_10", 16);
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 520;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P1_12_11", 16);
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 490;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P1_12_12", 16);
			iVar3 = 12;
			iVar4 = 12;
			iVar1 = 490;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P1_12_13", 16);
			iVar3 = 12;
			iVar4 = 13;
			iVar1 = 590;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P1_12_14", 16);
			iVar3 = 12;
			iVar4 = 14;
			iVar1 = 560;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P1_12_15", 16);
			iVar3 = 12;
			iVar4 = 15;
			iVar1 = 520;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P1_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P1_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P1_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P1_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 90;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P1_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 85;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P1_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 45;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P1_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 90;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P1_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 47;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P1_13_8", 16);
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 45;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P1_13_9", 16);
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 48;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P1_13_10", 16);
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 45;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P1_13_11", 16);
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 85;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P1_13_12", 16);
			iVar3 = 13;
			iVar4 = 12;
			iVar1 = 45;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P1_13_13", 16);
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 47;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P1_13_14", 16);
			iVar3 = 13;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P1_13_15", 16);
			iVar3 = 13;
			iVar4 = 15;
			iVar1 = 48;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P1_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 290;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P1_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 290;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P1_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 290;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P1_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 290;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P1_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 290;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P1_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 290;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P1_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 65;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P1_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 65;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P1_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P1_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 220;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P1_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 220;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P1_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 240;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P1_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P1_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 250;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P1_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 260;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P1_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 40;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P1_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 50;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P1_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 45;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P1_15_10", 16);
			iVar3 = 15;
			iVar4 = 10;
			iVar1 = 40;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P1_15_11", 16);
			iVar3 = 15;
			iVar4 = 11;
			iVar1 = 55;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P1_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P1_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 40;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P1_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 50;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P1_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P1_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 50;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P1_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 50;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P1_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 50;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P1_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 50;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P1_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 50;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P1_17_8", 16);
			iVar3 = 17;
			iVar4 = 8;
			iVar1 = 50;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P1_17_9", 16);
			iVar3 = 17;
			iVar4 = 9;
			iVar1 = 50;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P1_17_10", 16);
			iVar3 = 17;
			iVar4 = 10;
			iVar1 = 50;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P1_17_11", 16);
			iVar3 = 17;
			iVar4 = 11;
			iVar1 = 50;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P1_17_12", 16);
			iVar3 = 17;
			iVar4 = 12;
			iVar1 = 50;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P1_17_13", 16);
			iVar3 = 17;
			iVar4 = 13;
			iVar1 = 50;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P1_17_14", 16);
			iVar3 = 17;
			iVar4 = 14;
			iVar1 = 50;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P1_17_15", 16);
			iVar3 = 17;
			iVar4 = 15;
			iVar1 = 50;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar6 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar6 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar6 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar6 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar6 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar6 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar6 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar6 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar6 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar6 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar6 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar6 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar6 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar6 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar6 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P1_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P1_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P1_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P1_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P1_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P1_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P1_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P1_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P1_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P1_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P1_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P1_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P1_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P1_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P1_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P1_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 20;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P1_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P1_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 200;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P1_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 240;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P1_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 240;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P1_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 260;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P1_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 275;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P1_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 275;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P1_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 280;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P1_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 280;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P1_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 280;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P1_21_10", 16);
			iVar3 = 21;
			iVar4 = 10;
			iVar1 = 280;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P1_21_11", 16);
			iVar3 = 21;
			iVar4 = 11;
			iVar1 = 280;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P1_21_12", 16);
			iVar3 = 21;
			iVar4 = 12;
			iVar1 = 280;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P1_21_13", 16);
			iVar3 = 21;
			iVar4 = 13;
			iVar1 = 280;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P1_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 3100;
			iVar6 = 3;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P1_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 2800;
			iVar6 = 3;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P1_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 2500;
			iVar6 = 3;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P1_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 3000;
			iVar6 = 3;
			break;
		
		default:
			return;
			break;
	}
	func_8(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_53(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_77059[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P1_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P1_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 180;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P1_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P1_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 20;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P1_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 18;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P1_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 19;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P1_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P1_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P1_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 19;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P1_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 19;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P1_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 18;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P1_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 20;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P1_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 22;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P1_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 19;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P1_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 22;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 4;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 5;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 3;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P1_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 20;
			iVar6 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P1_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 22;
			iVar6 = 2;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P1_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 20;
			iVar6 = 2;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P1_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 25;
			iVar6 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P1_4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 23;
			iVar6 = 2;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P1_4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 25;
			iVar6 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P1_4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 28;
			iVar6 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P1_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 26;
			iVar6 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P1_4_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 24;
			iVar6 = 2;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P1_4_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 27;
			iVar6 = 2;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P1_4_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 29;
			iVar6 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P1_4_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 28;
			iVar6 = 2;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P1_4_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 25;
			iVar6 = 2;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P1_4_13", 16);
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 22;
			iVar6 = 2;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P1_4_14", 16);
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 27;
			iVar6 = 2;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P1_4_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 29;
			iVar6 = 2;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P1_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P1_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 1270;
			iVar6 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P1_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 1270;
			iVar6 = 3;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P1_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 1270;
			iVar6 = 3;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P1_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 1090;
			iVar6 = 3;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P1_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 1090;
			iVar6 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P1_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 1120;
			iVar6 = 3;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P1_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 1120;
			iVar6 = 3;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P1_6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 1290;
			iVar6 = 3;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P1_6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 1290;
			iVar6 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P1_6_10", 16);
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 1320;
			iVar6 = 3;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P1_6_11", 16);
			iVar3 = 6;
			iVar4 = 11;
			iVar1 = 1320;
			iVar6 = 3;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P1_6_12", 16);
			iVar3 = 6;
			iVar4 = 12;
			iVar1 = 1590;
			iVar6 = 3;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P1_6_13", 16);
			iVar3 = 6;
			iVar4 = 13;
			iVar1 = 1590;
			iVar6 = 3;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P1_6_14", 16);
			iVar3 = 6;
			iVar4 = 14;
			iVar1 = 1590;
			iVar6 = 3;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P1_6_15", 16);
			iVar3 = 6;
			iVar4 = 15;
			iVar1 = 1320;
			iVar6 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P1_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 98;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P1_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 98;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P1_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P1_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P1_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 118;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P1_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 120;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P1_7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 120;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P1_7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 129;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P1_7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 125;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P1_7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 125;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P1_7_10", 16);
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 129;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P1_7_11", 16);
			iVar3 = 7;
			iVar4 = 11;
			iVar1 = 129;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P1_7_12", 16);
			iVar3 = 7;
			iVar4 = 12;
			iVar1 = 135;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P1_7_13", 16);
			iVar3 = 7;
			iVar4 = 13;
			iVar1 = 139;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P1_7_14", 16);
			iVar3 = 7;
			iVar4 = 14;
			iVar1 = 145;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P1_7_15", 16);
			iVar3 = 7;
			iVar4 = 15;
			iVar1 = 145;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P1_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P1_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P1_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P1_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P1_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 30;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P1_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 38;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "TORSO_P1_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 32;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P1_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 30;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P1_8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 33;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P1_8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 35;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P1_8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P1_8_11", 16);
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 38;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P1_8_12", 16);
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 33;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P1_8_13", 16);
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 35;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P1_8_14", 16);
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 38;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P1_8_15", 16);
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 32;
			break;
		
		case 89:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 59;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 25;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 29;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 27;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P1_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 25;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P1_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 27;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P1_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 28;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P1_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 30;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P1_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 29;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P1_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 27;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P1_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 29;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P1_11_13", 16);
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 32;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P1_11_14", 16);
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 30;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P1_11_15", 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 28;
			break;
		
		default:
			return;
			break;
	}
	func_8(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_54(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 2;
	Global_77059[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P1_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P1_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P1_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar6 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P1_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar6 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P1_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar6 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P1_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar6 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P1_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar6 = 3;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P1_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar6 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "HAIR_P1_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar6 = 3;
			break;
		
		case 10:
			StringCopy(&Var2, "HAIR_P1_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar6 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "HAIR_P1_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar6 = 3;
			break;
		
		case 12:
			StringCopy(&Var2, "HAIR_P1_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar6 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "HAIR_P1_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "HAIR_P1_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar6 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "HAIR_P1_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar6 = 3;
			break;
		
		case 16:
			StringCopy(&Var2, "HAIR_P1_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 17:
			StringCopy(&Var2, "HAIR_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 18:
			StringCopy(&Var2, "HAIR_P1_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "HAIR_P1_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_19(iVar7, iParam0, 21, -1);
			return;
			break;
	}
	func_8(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_55(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 0;
	Global_77059[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 9;
			break;
		
		default:
			func_19(iVar7, iParam0, 10, -1);
			return;
			break;
	}
	func_8(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_56(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_73(iParam1);
			break;
		
		case 2:
			func_72(iParam1);
			break;
		
		case 3:
			func_69(iParam1);
			break;
		
		case 4:
			func_68(iParam1);
			break;
		
		case 6:
			func_67(iParam1);
			break;
		
		case 5:
			func_66(iParam1);
			break;
		
		case 8:
			func_65(iParam1);
			break;
		
		case 9:
			func_64(iParam1);
			break;
		
		case 10:
			func_63(iParam1);
			break;
		
		case 1:
			func_62(iParam1);
			break;
		
		case 7:
			func_61(iParam1);
			break;
		
		case 11:
			func_60(iParam1);
			break;
		
		case 12:
			func_59(iParam1);
			break;
		
		case 13:
			func_58(iParam1);
			break;
		
		case 14:
			func_57(iParam1);
			break;
	}
}

void func_57(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	Global_77059[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "PROPS_P0_H1", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P0_H2", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 320;
			iVar5 = 11;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P0_H12", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 450;
			iVar5 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P0_E0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 45;
			iVar5 = 10;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 61:
			StringCopy(&Var2, "PROPS_P0_E3", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 62:
			StringCopy(&Var2, "PROPS_P0_E4", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 63:
			StringCopy(&Var2, "PROPS_P0_E4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 56;
			iVar5 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P0_E4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P0_E4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P0_E4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 62;
			iVar5 = 10;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P0_E4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P0_E4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P0_E4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P0_E5", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P0_E5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P0_E5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 72;
			iVar5 = 10;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P0_E5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 70;
			iVar5 = 10;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P0_E5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 74;
			iVar5 = 10;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P0_E5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 78;
			iVar5 = 10;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P0_E5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 82;
			iVar5 = 10;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P0_E5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 85;
			iVar5 = 10;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P0_E5_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 85;
			iVar5 = 10;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "PROPS_P0_E5_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar5 = 10;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P0_E6", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P0_E6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P0_E6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P0_E6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P0_E6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P0_E6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P0_E6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P0_E6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P0_E6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P0_E6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P0_E7", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P0_E8", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P0_E8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P0_E8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 180;
			iVar5 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P0_E8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P0_E8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P0_E8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P0_E8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 235;
			iVar5 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P0_E8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 245;
			iVar5 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P0_E8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 250;
			iVar5 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P0_E8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 275;
			iVar5 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P0_E8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 280;
			iVar5 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P0_E8_11", 16);
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 295;
			iVar5 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P0_E9", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 179;
			iVar5 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P0_E9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 159;
			iVar5 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P0_E9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P0_E9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 155;
			iVar5 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P0_E9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P0_E9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P0_E9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P0_E9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 225;
			iVar5 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 100;
			iVar5 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 2;
			break;
		
		default:
			func_19(iVar7, iParam0, 113, -1);
			return;
			break;
	}
	func_8(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_58(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 13;
	Global_77059[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_19(iVar7, iParam0, 10, -1);
			return;
			break;
	}
	func_8(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_59(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 12;
	Global_77059[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P0_1", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P0_4", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P0_7", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P0_8", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P0_9", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P0_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P0_14", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P0_18", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P0_19", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P0_20", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P0_22", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P0_23", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P0_24", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P0_26", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P0_28", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P0_29", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P0_30", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P0_31", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P0_32", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P0_33", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P0_34", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P0_35", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P0_36", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P0_37", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 840;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P0_38", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P0_39", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P0_40", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P0_41", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P0_42", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P0_43", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P0_44", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P0_45", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P0_46", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P0_47", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4600;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P0_48", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P0_49", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4400;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P0_50", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4400;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P0_51", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P0_52", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P0_53", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P0_54", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 48:
			StringCopy(&Var2, "OUTFIT_P0_55", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_19(iVar7, iParam0, 53, -1);
			return;
			break;
	}
	func_8(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_60(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	Global_77059[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "JBIB_P0_02_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "JBIB_P0_02_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			break;
		
		case 4:
			StringCopy(&Var2, "JBIB_P0_02_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P0_02_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P0_02_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P0_02_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P0_03_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 390;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P0_03_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 390;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P0_03_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 420;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P0_03_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 420;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P0_03_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 490;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P0_03_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 490;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P0_03_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 540;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P0_03_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 540;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P0_03_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 550;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P0_03_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 540;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P0_04_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P0_04_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 850;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P0_04_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 890;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P0_04_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P0_04_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 920;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P0_04_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 920;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P0_04_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 950;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P0_04_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 980;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P0_04_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 1050;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P0_04_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 1100;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P0_05_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 1890;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P0_05_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 1820;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P0_05_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 1820;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P0_05_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 1850;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P0_05_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 1850;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P0_05_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 1900;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P0_05_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 1920;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P0_05_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 1980;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P0_05_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 2100;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P0_05_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 2120;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P0_05_10", 16);
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 2000;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P0_05_11", 16);
			iVar3 = 5;
			iVar4 = 11;
			iVar1 = 2200;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P0_05_12", 16);
			iVar3 = 5;
			iVar4 = 12;
			iVar1 = 2280;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P0_05_13", 16);
			iVar3 = 5;
			iVar4 = 13;
			iVar1 = 2300;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P0_05_14", 16);
			iVar3 = 5;
			iVar4 = 14;
			iVar1 = 2350;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P0_05_15", 16);
			iVar3 = 5;
			iVar4 = 15;
			iVar1 = 2280;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P0_06_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		default:
			func_19(iVar7, iParam0, 45, -1);
			return;
			break;
	}
	func_8(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_61(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	Global_77059[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_19(iVar7, iParam0, 1, -1);
			return;
			break;
	}
	func_8(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_62(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 1;
	Global_77059[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P0_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P0_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P0_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P0_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		default:
			func_19(iVar7, iParam0, 5, -1);
			return;
			break;
	}
	func_8(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_63(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 10;
	Global_77059[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 1;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 2;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 4;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 5;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 6;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 7;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 5;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 1;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 2;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 3;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 4;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 5;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 6;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 1;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 3;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 4;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 5;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 6;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 7;
			break;
		
		case 36:
			StringCopy(&Var2, "DECL_P0_10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			break;
		
		case 37:
			StringCopy(&Var2, "DECL_P0_10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			break;
		
		case 38:
			StringCopy(&Var2, "DECL_P0_10_10", 16);
			iVar3 = 10;
			iVar4 = 10;
			break;
		
		case 39:
			StringCopy(&Var2, "DECL_P0_10_11", 16);
			iVar3 = 10;
			iVar4 = 11;
			break;
		
		case 40:
			StringCopy(&Var2, "DECL_P0_10_12", 16);
			iVar3 = 10;
			iVar4 = 12;
			break;
		
		case 41:
			StringCopy(&Var2, "DECL_P0_10_13", 16);
			iVar3 = 10;
			iVar4 = 13;
			break;
		
		case 42:
			StringCopy(&Var2, "DECL_P0_10_14", 16);
			iVar3 = 10;
			iVar4 = 14;
			break;
		
		case 43:
			StringCopy(&Var2, "DECL_P0_10_15", 16);
			iVar3 = 10;
			iVar4 = 15;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			break;
		
		default:
			func_19(iVar7, iParam0, 48, -1);
			return;
			break;
	}
	func_8(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_64(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 9;
	Global_77059[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_19(iVar7, iParam0, 20, -1);
			return;
			break;
	}
	func_8(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_65(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	Global_77059[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC_P0_10", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P0_16", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 19;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 20;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 22;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_19(iVar7, iParam0, 24, -1);
			return;
			break;
	}
	func_8(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_66(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	Global_77059[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_19(iVar7, iParam0, 14, -1);
			return;
			break;
	}
	func_8(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_67(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	Global_77059[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P0_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 665;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P0_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 620;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P0_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 540;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P0_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 580;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P0_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 650;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P0_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P0_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P0_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 64;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P0_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 56;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P0_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 69;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P0_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 59;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P0_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 62;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P0_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 74;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P0_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 68;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P0_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 72;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P0_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 70;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P0_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 48;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P0_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P0_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 55;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P0_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 75;
			break;
		
		case 34:
			StringCopy(&Var2, "FEET_P0_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 65;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P0_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 68;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P0_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 58;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P0_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 68;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P0_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 790;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P0_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P0_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 860;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P0_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 750;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P0_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 790;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P0_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P0_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 820;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P0_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 800;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P0_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 850;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P0_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 870;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P0_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 720;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P0_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar1 = 740;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P0_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar1 = 800;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P0_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar1 = 750;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P0_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar1 = 770;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P0_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar1 = 860;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P0_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P0_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 800;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P0_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 780;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P0_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P0_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P0_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P0_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 870;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P0_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 930;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P0_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 880;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P0_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 900;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P0_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 920;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P0_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 970;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P0_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 990;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P0_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 960;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P0_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 980;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P0_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 950;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P0_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P0_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P0_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P0_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P0_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P0_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P0_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 135;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P0_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "FEET_P0_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 145;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P0_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 110;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P0_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P0_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P0_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 125;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P0_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 120;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P0_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 130;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P0_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P0_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 720;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P0_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 680;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P0_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P0_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 670;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P0_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 700;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P0_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 680;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P0_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 720;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P0_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 740;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P0_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 760;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P0_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 780;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P0_21_10", 16);
			iVar3 = 21;
			iVar4 = 10;
			iVar1 = 750;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P0_21_11", 16);
			iVar3 = 21;
			iVar4 = 11;
			iVar1 = 700;
			break;
		
		default:
			func_19(iVar7, iParam0, 99, -1);
			return;
			break;
	}
	func_8(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_68(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	Global_77059[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P0_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P0_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "LEGS_P0_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "LEGS_P0_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "LEGS_P0_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "LEGS_P0_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "LEGS_P0_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "LEGS_P0_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P0_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "LEGS_P0_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "LEGS_P0_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "LEGS_P0_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P0_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P0_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P0_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 115;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P0_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P0_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 128;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P0_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 118;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P0_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P0_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P0_7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 128;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P0_7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 125;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P0_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 68;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P0_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 68;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P0_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 68;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P0_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 68;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P0_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 68;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P0_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P0_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 550;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P0_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P0_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 875;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P0_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P0_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 720;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P0_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 750;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P0_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 850;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P0_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P0_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P0_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 48;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P0_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 38;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P0_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 38;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P0_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 42;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P0_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 58;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P0_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 46;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P0_16_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			iVar1 = 46;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P0_16_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			iVar1 = 46;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P0_16_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			iVar1 = 68;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P0_16_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			iVar1 = 58;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P0_16_12", 16);
			iVar3 = 16;
			iVar4 = 12;
			iVar1 = 50;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P0_16_13", 16);
			iVar3 = 16;
			iVar4 = 13;
			iVar1 = 68;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P0_16_14", 16);
			iVar3 = 16;
			iVar4 = 14;
			iVar1 = 68;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P0_16_15", 16);
			iVar3 = 16;
			iVar4 = 15;
			iVar1 = 42;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P0_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P0_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 250;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P0_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 250;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P0_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 290;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P0_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 270;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P0_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 270;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P0_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 15;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "LEGS_P0_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 12;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 19;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P0_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P0_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 118;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P0_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P0_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 88;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P0_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 95;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P0_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 95;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P0_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 98;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P0_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 140;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P0_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P0_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P0_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 130;
			break;
		
		case 92:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 24;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P0_27_0", 16);
			iVar3 = 27;
			iVar4 = 0;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P0_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar1 = 45;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P0_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P0_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 48;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P0_28_3", 16);
			iVar3 = 28;
			iVar4 = 3;
			iVar1 = 52;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P0_28_4", 16);
			iVar3 = 28;
			iVar4 = 4;
			iVar1 = 52;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P0_28_5", 16);
			iVar3 = 28;
			iVar4 = 5;
			iVar1 = 55;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P0_28_6", 16);
			iVar3 = 28;
			iVar4 = 6;
			iVar1 = 55;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P0_28_7", 16);
			iVar3 = 28;
			iVar4 = 7;
			iVar1 = 55;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P0_28_8", 16);
			iVar3 = 28;
			iVar4 = 8;
			iVar1 = 58;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P0_28_9", 16);
			iVar3 = 28;
			iVar4 = 9;
			iVar1 = 58;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P0_28_10", 16);
			iVar3 = 28;
			iVar4 = 10;
			iVar1 = 60;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P0_28_11", 16);
			iVar3 = 28;
			iVar4 = 11;
			iVar1 = 60;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P0_28_12", 16);
			iVar3 = 28;
			iVar4 = 12;
			iVar1 = 62;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P0_28_13", 16);
			iVar3 = 28;
			iVar4 = 13;
			iVar1 = 62;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P0_28_14", 16);
			iVar3 = 28;
			iVar4 = 14;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P0_28_15", 16);
			iVar3 = 28;
			iVar4 = 15;
			iVar1 = 65;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 29;
			iVar4 = 0;
			break;
		
		default:
			func_19(iVar7, iParam0, 113, -1);
			return;
			break;
	}
	func_8(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_69(int iParam0)
{
	if (iParam0 < 60)
	{
		func_71(iParam0);
	}
	else
	{
		func_70(iParam0);
	}
	if (Global_77059[0 /*14*/].f_2 == -1)
	{
		func_19(3, iParam0, 181, -1);
	}
}

void func_70(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_77059[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P0_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P0_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 120;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P0_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P0_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P0_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 120;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P0_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 120;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P0_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P0_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 20;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "TORSO_P0_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 24;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P0_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P0_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 25;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P0_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 25;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P0_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 22;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P0_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 27;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P0_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P0_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P0_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P0_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 48;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P0_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 40;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P0_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 45;
			break;
		
		case 91:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P0_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P0_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 190;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P0_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 190;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P0_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 190;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P0_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 210;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P0_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P0_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P0_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 55;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P0_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P0_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 99;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P0_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 49;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P0_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 120;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P0_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 45;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P0_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 115;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P0_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 105;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P0_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 90;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P0_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 95;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P0_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 39;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P0_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 95;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P0_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 35;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P0_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 95;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P0_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 88;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P0_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 60;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P0_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 70;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P0_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P0_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 90;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P0_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P0_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 70;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P0_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 95;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P0_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 105;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P0_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 95;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P0_21_10", 16);
			iVar3 = 21;
			iVar4 = 10;
			iVar1 = 110;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P0_21_11", 16);
			iVar3 = 21;
			iVar4 = 11;
			iVar1 = 98;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P0_21_12", 16);
			iVar3 = 21;
			iVar4 = 12;
			iVar1 = 88;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P0_21_13", 16);
			iVar3 = 21;
			iVar4 = 13;
			iVar1 = 98;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P0_21_14", 16);
			iVar3 = 21;
			iVar4 = 14;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P0_21_15", 16);
			iVar3 = 21;
			iVar4 = 15;
			iVar1 = 98;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P0_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P0_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 4950;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P0_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 4195;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P0_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 3195;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P0_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 2950;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P0_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 3950;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P0_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar1 = 3200;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P0_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar1 = 3200;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P0_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 3200;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P0_23_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar1 = 3200;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P0_23_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar1 = 3200;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P0_23_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar1 = 3200;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P0_23_6", 16);
			iVar3 = 23;
			iVar4 = 6;
			iVar1 = 3200;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P0_23_7", 16);
			iVar3 = 23;
			iVar4 = 7;
			iVar1 = 3200;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P0_23_8", 16);
			iVar3 = 23;
			iVar4 = 8;
			iVar1 = 3200;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P0_23_9", 16);
			iVar3 = 23;
			iVar4 = 9;
			iVar1 = 3200;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P0_23_10", 16);
			iVar3 = 23;
			iVar4 = 10;
			iVar1 = 3200;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P0_23_11", 16);
			iVar3 = 23;
			iVar4 = 11;
			iVar1 = 3200;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P0_23_12", 16);
			iVar3 = 23;
			iVar4 = 12;
			iVar1 = 3200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P0_23_13", 16);
			iVar3 = 23;
			iVar4 = 13;
			iVar1 = 3200;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P0_23_14", 16);
			iVar3 = 23;
			iVar4 = 14;
			iVar1 = 3200;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P0_23_15", 16);
			iVar3 = 23;
			iVar4 = 15;
			iVar1 = 3200;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P0_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar1 = 1350;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P0_24_1", 16);
			iVar3 = 24;
			iVar4 = 1;
			iVar1 = 1400;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P0_24_2", 16);
			iVar3 = 24;
			iVar4 = 2;
			iVar1 = 1200;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P0_24_3", 16);
			iVar3 = 24;
			iVar4 = 3;
			iVar1 = 1250;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P0_24_4", 16);
			iVar3 = 24;
			iVar4 = 4;
			iVar1 = 1350;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P0_24_5", 16);
			iVar3 = 24;
			iVar4 = 5;
			iVar1 = 1300;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P0_24_6", 16);
			iVar3 = 24;
			iVar4 = 6;
			iVar1 = 1380;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P0_24_7", 16);
			iVar3 = 24;
			iVar4 = 7;
			iVar1 = 1340;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P0_24_8", 16);
			iVar3 = 24;
			iVar4 = 8;
			iVar1 = 1380;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P0_24_9", 16);
			iVar3 = 24;
			iVar4 = 9;
			iVar1 = 1250;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P0_25_0", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar1 = 840;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P0_25_1", 16);
			iVar3 = 25;
			iVar4 = 1;
			iVar1 = 840;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P0_25_2", 16);
			iVar3 = 25;
			iVar4 = 2;
			iVar1 = 840;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P0_25_3", 16);
			iVar3 = 25;
			iVar4 = 3;
			iVar1 = 840;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P0_25_4", 16);
			iVar3 = 25;
			iVar4 = 4;
			iVar1 = 840;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P0_25_5", 16);
			iVar3 = 25;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P0_25_6", 16);
			iVar3 = 25;
			iVar4 = 6;
			iVar1 = 840;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P0_25_7", 16);
			iVar3 = 25;
			iVar4 = 7;
			iVar1 = 840;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P0_26_0", 16);
			iVar3 = 26;
			iVar4 = 0;
			break;
		
		case 170:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 27;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P0_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P0_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 130;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P0_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P0_29_0", 16);
			iVar3 = 29;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P0_30_0", 16);
			iVar3 = 30;
			iVar4 = 0;
			iVar1 = 290;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P0_30_1", 16);
			iVar3 = 30;
			iVar4 = 1;
			iVar1 = 320;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P0_31_0", 16);
			iVar3 = 31;
			iVar4 = 0;
			iVar1 = 59;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P0_31_1", 16);
			iVar3 = 31;
			iVar4 = 1;
			iVar1 = 55;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P0_31_2", 16);
			iVar3 = 31;
			iVar4 = 2;
			iVar1 = 59;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P0_31_3", 16);
			iVar3 = 31;
			iVar4 = 3;
			iVar1 = 49;
			break;
		
		default:
			return;
			break;
	}
	func_8(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_71(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_77059[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P0_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 3500;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P0_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P0_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P0_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P0_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P0_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P0_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P0_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P0_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P0_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P0_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P0_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P0_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P0_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 20;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 18;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P0_2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 19;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P0_2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 20;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P0_2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 22;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P0_2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 18;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P0_2_8", 16);
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 39;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P0_2_9", 16);
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 32;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P0_2_10", 16);
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P0_2_11", 16);
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 35;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P0_2_12", 16);
			iVar3 = 2;
			iVar4 = 12;
			iVar1 = 210;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P0_2_13", 16);
			iVar3 = 2;
			iVar4 = 13;
			iVar1 = 250;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P0_2_14", 16);
			iVar3 = 2;
			iVar4 = 14;
			iVar1 = 290;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P0_2_15", 16);
			iVar3 = 2;
			iVar4 = 15;
			iVar1 = 310;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P0_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 150;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P0_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 160;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P0_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 150;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P0_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P0_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P0_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 160;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P0_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P0_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P0_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 52;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P0_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 55;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P0_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 55;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P0_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P0_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 58;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P0_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 62;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P0_8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 65;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P0_8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 65;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P0_8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 68;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P0_8_11", 16);
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 68;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P0_8_12", 16);
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 55;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P0_8_13", 16);
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 62;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P0_8_14", 16);
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 58;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P0_8_15", 16);
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 58;
			break;
		
		default:
			return;
			break;
	}
	func_8(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_72(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 2;
	Global_77059[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P0_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P0_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P0_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P0_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		default:
			func_19(iVar7, iParam0, 6, -1);
			return;
			break;
	}
	func_8(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_73(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 0;
	Global_77059[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		default:
			func_19(iVar7, iParam0, 7, -1);
			return;
			break;
	}
	func_8(&(Global_77059[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_74()
{
	Global_77059[0 /*14*/].f_1 = -1;
	Global_77059[0 /*14*/].f_2 = -1;
	Global_77059[0 /*14*/].f_5 = -1;
	Global_77059[0 /*14*/].f_3 = -1;
	Global_77059[0 /*14*/].f_4 = -1;
	Global_77059[0 /*14*/].f_7 = 0;
	Global_77059[0 /*14*/].f_6 = 0;
	Global_77059[0 /*14*/].f_13 = -1;
	Global_77059[0 /*14*/].f_12 = 0;
	Global_77059[0 /*14*/] = 0;
	StringCopy(&(Global_77059[0 /*14*/].f_8), "NO_LABEL", 16);
}

void func_75(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam2 == -99)
	{
		return;
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (!bParam3 || unk_0x234B68AC2E35ED5A(Global_112293.f_7227[1], 0))
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361.f_539.f_3816[0 /*166*/][iParam1 /*11*/][(iParam2 / 32)]), (iParam2 % 32));
			}
			break;
		
		case joaat("player_two"):
			if (!bParam3 || unk_0x234B68AC2E35ED5A(Global_112293.f_7227[3], 0))
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361.f_539.f_3816[1 /*166*/][iParam1 /*11*/][(iParam2 / 32)]), (iParam2 % 32));
			}
			if (!bParam3 || unk_0x234B68AC2E35ED5A(Global_112293.f_7227[4], 0))
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361.f_539.f_3816[2 /*166*/][iParam1 /*11*/][(iParam2 / 32)]), (iParam2 % 32));
			}
			break;
	}
}

int func_76(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	
	Global_77059[1 /*14*/] = { func_5(iParam0, iParam1, iParam2, -1) };
	if (unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 0) && !unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 6))
	{
		if (bParam3)
		{
			func_4(iParam1, Global_77059[1 /*14*/].f_5, Global_77059[1 /*14*/].f_2, 1, Global_77059[1 /*14*/].f_1, 1, 0);
			if (iParam1 == 12)
			{
				iVar0 = 1;
				if (iParam0 == joaat("player_zero"))
				{
					if (iParam2 == 31)
					{
						iVar0 = 0;
					}
				}
				if (iVar0 == 1)
				{
					uVar3 = { func_83(iParam0, iParam2) };
					iVar1 = 0;
					while (iVar1 <= 14)
					{
						if ((uVar3[iVar1] != -99 && iVar1 != 12) && iVar1 != 14)
						{
							if (iVar1 != 13)
							{
								func_76(iParam0, iVar1, uVar3[iVar1], 1, 1);
								func_87(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { func_77(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_76(iParam0, 14, uVar4[iVar2], 1, 1);
									func_87(iParam0, 14, uVar4[iVar2], 1);
									iVar2++;
								}
							}
						}
						iVar1++;
					}
				}
			}
		}
		else
		{
			func_4(iParam1, Global_77059[1 /*14*/].f_5, Global_77059[1 /*14*/].f_2, 1, Global_77059[1 /*14*/].f_1, 0, 1);
		}
		if (iParam4 == 1 && bParam3 == 1)
		{
			switch (iParam0)
			{
				case joaat("player_zero"):
					break;
				
				case joaat("player_one"):
					switch (iParam1)
					{
						case 3:
							if (iParam2 >= 176 && iParam2 <= 191)
							{
								iVar5 = (227 + Global_77059[1 /*14*/].f_4);
								func_76(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_77059[1 /*14*/].f_4);
								func_76(iParam0, 3, iVar5, 1, 0);
							}
							break;
						
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_77059[1 /*14*/].f_4);
								func_76(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_77059[1 /*14*/].f_4);
								func_76(iParam0, 11, iVar5, 1, 0);
							}
							break;
						
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_77059[1 /*14*/].f_4);
								func_76(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_77059[1 /*14*/].f_4);
								func_76(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_77059[1 /*14*/].f_4);
								func_76(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_77059[1 /*14*/].f_4);
								func_76(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_77059[1 /*14*/].f_4);
								func_76(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_77059[1 /*14*/].f_4);
								func_76(iParam0, 8, iVar5, 1, 0);
							}
							break;
						
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_77059[1 /*14*/].f_4);
								func_76(iParam0, 14, iVar5, 1, 0);
							}
							break;
					}
					break;
				
				case joaat("player_two"):
					switch (iParam1)
					{
						case 4:
							if (iParam2 >= 81 && iParam2 <= 90)
							{
								iVar5 = (94 + Global_77059[1 /*14*/].f_4);
								func_76(iParam0, 4, iVar5, 1, 0);
							}
							break;
						
						case 12:
							if (iParam2 == 2)
							{
								func_76(iParam0, 14, 17, 1, 0);
							}
							break;
					}
					break;
				}
		}
		return 1;
	}
	return 0;
}

struct<10> func_77(int iParam0, int iParam1)
{
	int iVar0;
	struct<10> Var1;
	
	Var1 = 9;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 31:
					func_82(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_82(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_82(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_82(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_82(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_82(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_82(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_82(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_82(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_82(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_82(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_78(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 31:
					func_82(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_82(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_82(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_82(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_82(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_82(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_82(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_82(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_82(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_82(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_78(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 31:
					func_82(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_82(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_82(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_82(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_82(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_82(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_82(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_82(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_82(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_82(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_78(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_82(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_82(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_82(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_82(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_82(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_82(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_82(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_82(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_82(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_82(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_82(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_82(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_82(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_82(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_82(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 14:
					func_82(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_82(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_82(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_82(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_82(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_82(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_82(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_82(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_82(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_82(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 24:
					func_82(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_78(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_82(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_82(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_82(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_82(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_82(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_82(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_82(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_82(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_82(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_82(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_82(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_82(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_82(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_82(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_82(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				
				case 14:
					func_82(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_82(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_82(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_82(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_82(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_82(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_82(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_82(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_82(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_82(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_78(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_78(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<4> Var1;
	struct<3> Var2;
	int iVar3;
	
	if (iParam2 != 0 && iParam2 != -99)
	{
		(*iParam0)[0] = 0;
		(*iParam0)[1] = 1;
		(*iParam0)[2] = 2;
		(*iParam0)[3] = 3;
		(*iParam0)[4] = 4;
		(*iParam0)[5] = 5;
		(*iParam0)[6] = 6;
		(*iParam0)[7] = 7;
		(*iParam0)[8] = 8;
		iVar0 = 0;
		if (iParam1 == joaat("player_zero"))
		{
			iVar0 = 0;
		}
		else if (iParam1 == joaat("player_one"))
		{
			iVar0 = 1;
		}
		else if (iParam1 == joaat("player_two"))
		{
			iVar0 = 2;
		}
		else if (iParam1 == joaat("mp_m_freemode_01"))
		{
			iVar0 = 3;
		}
		else if (iParam1 == joaat("mp_f_freemode_01"))
		{
			iVar0 = 4;
		}
		unk_0x03178B32FA4F2AC2(iParam2, &Var1);
		if (!unk_0xD1ABD511D9C326A3(Var1))
		{
			iVar3 = 0;
			while (iVar3 < Var1.f_3)
			{
				if (unk_0x637C66DB5E571C4D(Var1.f_1, iVar3, &Var2) && Var2.f_2 != -1)
				{
					if ((Var2.x != 0 && Var2.x != -1) && Var2.x != joaat("0"))
					{
						(*iParam0)[Var2.f_2] = func_79(iParam1, Var2.x, 14, iVar0);
					}
					else if (Var2.f_1 != -1)
					{
						(*iParam0)[Var2.f_2] = Var2.f_1;
					}
				}
				iVar3++;
			}
		}
	}
}

int func_79(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0x44C4C2E7417F5E29(iParam3, 8, -1, 1, -1, -1);
		iVar0 = unk_0xBCEF29BBAC16D038(iParam1);
		if (iVar0 != -1)
		{
			return (func_81(iParam0) + iVar0);
		}
	}
	else
	{
		unk_0x44C4C2E7417F5E29(iParam3, 8, -1, 0, -1, func_20(iParam2));
		iVar1 = unk_0x5BBDCA451CB08E45(iParam1);
		if (iVar1 != -1)
		{
			return (func_80(iParam0, func_20(iParam2)) + iVar1);
		}
	}
	return -99;
}

int func_80(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 181;
					break;
				
				case 4:
					return 113;
					break;
				
				case 5:
					return 14;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 24;
					break;
				
				case 9:
					return 20;
					break;
				
				case 10:
					return 48;
					break;
				
				case 11:
					return 45;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 318;
					break;
				
				case 4:
					return 117;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 134;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 77;
					break;
				
				case 9:
					return 12;
					break;
				
				case 10:
					return 53;
					break;
				
				case 11:
					return 63;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 6;
					break;
				
				case 2:
					return 9;
					break;
				
				case 3:
					return 242;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 84;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 17;
					break;
				
				case 10:
					return 33;
					break;
				
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 92;
					break;
				
				case 8:
					return 241;
					break;
				
				case 9:
					return 46;
					break;
				
				case 10:
					return 7;
					break;
				
				case 11:
					return 237;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 92;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 55;
					break;
				
				case 8:
					return 136;
					break;
				
				case 9:
					return 36;
					break;
				
				case 10:
					return 6;
					break;
				
				case 11:
					return 256;
					break;
			}
			break;
	}
	return -99;
}

int func_81(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 113;
			break;
		
		case joaat("player_one"):
			return 175;
			break;
		
		case joaat("player_two"):
			return 155;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 327;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 327;
			break;
	}
	return -99;
}

void func_82(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	(*iParam0)[0] = iParam1;
	(*iParam0)[1] = iParam2;
	(*iParam0)[2] = iParam3;
	(*iParam0)[3] = iParam4;
	(*iParam0)[4] = iParam5;
	(*iParam0)[5] = iParam6;
	(*iParam0)[6] = iParam7;
	(*iParam0)[7] = iParam8;
	(*iParam0)[8] = iParam9;
}

struct<17> func_83(int iParam0, int iParam1)
{
	int iVar0;
	struct<17> Var1;
	
	Var1 = 15;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	Var1.f_16 = 0;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					if (Global_112293.f_9083.f_99.f_58[120])
					{
						func_86(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						func_86(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				
				case 1:
					func_86(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				
				case 2:
					func_86(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				
				case 3:
					func_86(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				
				case 4:
					func_86(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				
				case 5:
					func_86(&Var1, -99, -99, Global_112293.f_2361.f_539.f_196[0], Global_112293.f_2361.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				
				case 6:
					func_86(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_86(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 8:
					func_86(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_86(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_86(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				
				case 11:
					func_86(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_86(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_86(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_86(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				
				case 15:
					func_86(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				
				case 16:
					func_86(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_86(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_86(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				
				case 19:
					func_86(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_86(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_86(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_86(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_86(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_86(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_86(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_86(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_86(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_86(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_86(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_86(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_86(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				
				case 32:
					func_86(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_86(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_86(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				
				case 35:
					func_86(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_86(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_86(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_86(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_86(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_86(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_86(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_86(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_86(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_86(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_86(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 46:
					func_86(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_86(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 48:
					func_86(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 49:
					func_86(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 50:
					func_86(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				
				case 51:
					func_86(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 52:
					func_86(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_84(&Var1, iParam0, iParam1, 53);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					func_86(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_86(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 2:
					func_86(&Var1, -99, -99, Global_112293.f_2361.f_539.f_196[1], Global_112293.f_2361.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				
				case 3:
					func_86(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				
				case 4:
					func_86(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				
				case 5:
					func_86(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 6:
					func_86(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_86(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				
				case 8:
					func_86(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				
				case 9:
					func_86(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_86(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_86(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 12:
					func_86(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_86(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_86(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_86(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_86(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_86(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_86(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				
				case 19:
					func_86(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_86(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_86(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				
				case 22:
					func_86(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				
				case 23:
					func_86(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				
				case 24:
					func_86(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				
				case 25:
					func_86(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				
				case 26:
					func_86(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				
				case 27:
					func_86(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				
				case 28:
					func_86(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				
				case 29:
					func_86(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				
				case 30:
					func_86(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				
				case 31:
					func_86(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				
				case 32:
					func_86(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				
				case 33:
					func_86(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				
				case 34:
					func_86(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				
				case 35:
					func_86(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				
				case 36:
					func_86(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				
				case 37:
					func_86(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				
				case 38:
					func_86(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_86(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_86(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_86(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_86(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_86(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				
				case 44:
					func_86(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 45:
					func_86(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				
				case 46:
					func_86(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				
				default:
					func_84(&Var1, iParam0, iParam1, 47);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					func_86(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_86(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				
				case 2:
					func_86(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				
				case 3:
					func_86(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				
				case 4:
					func_86(&Var1, -99, -99, Global_112293.f_2361.f_539.f_196[2], Global_112293.f_2361.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 5:
					func_86(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				
				case 6:
					func_86(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				
				case 7:
					func_86(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				
				case 8:
					func_86(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_86(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_86(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_86(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_86(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_86(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_86(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_86(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_86(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_86(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_86(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 19:
					func_86(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_86(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_86(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_86(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_86(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_86(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_86(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_86(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_86(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_86(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_86(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_86(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_86(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 32:
					func_86(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_86(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_86(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 35:
					func_86(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_86(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_86(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_86(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_86(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_86(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_86(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_86(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_86(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_86(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_86(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 46:
					func_86(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_86(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_84(&Var1, iParam0, iParam1, 48);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_86(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				
				case 1:
					func_86(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				
				case 2:
					func_86(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				
				case 3:
					func_86(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				
				case 4:
					func_86(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				
				case 5:
					func_86(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				
				case 6:
					func_86(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				
				case 7:
					func_86(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				
				case 8:
					func_86(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				
				case 9:
					func_86(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				
				case 10:
					func_86(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				
				case 11:
					func_86(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				
				case 12:
					func_86(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				
				case 13:
					func_86(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				
				case 14:
					func_86(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				
				case 15:
					func_86(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				
				case 16:
					func_86(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				
				case 17:
					func_86(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				
				case 18:
					func_86(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				
				case 19:
					func_86(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				
				case 20:
					func_86(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				
				case 21:
					func_86(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				
				case 22:
					func_86(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				
				case 23:
					func_86(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				
				case 24:
					func_86(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				
				case 25:
					func_86(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				
				default:
					func_84(&Var1, iParam0, iParam1, 26);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_86(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				
				case 1:
					func_86(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				
				case 2:
					func_86(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				
				case 3:
					func_86(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				
				case 4:
					func_86(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				
				case 5:
					func_86(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				
				case 6:
					func_86(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				
				case 7:
					func_86(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				
				case 8:
					func_86(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				
				case 9:
					func_86(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				
				case 10:
					func_86(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				
				case 11:
					func_86(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				
				case 12:
					func_86(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				
				case 13:
					func_86(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				
				case 14:
					func_86(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				
				case 15:
					func_86(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				
				case 16:
					func_86(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				
				case 17:
					func_86(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				
				case 18:
					func_86(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				
				case 19:
					func_86(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				
				case 20:
					func_86(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				
				case 21:
					func_86(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				
				case 22:
					func_86(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				
				case 23:
					func_86(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				
				case 24:
					func_86(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				
				case 25:
					func_86(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				
				case 26:
					func_86(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				
				case 27:
					func_86(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				
				default:
					func_84(&Var1, iParam0, iParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_84(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<5> Var1;
	struct<3> Var2;
	struct<2> Var3;
	int iVar4;
	
	(*uParam0)[0] = 0;
	(*uParam0)[2] = -99;
	(*uParam0)[3] = 0;
	(*uParam0)[4] = 0;
	(*uParam0)[6] = 0;
	(*uParam0)[5] = 0;
	(*uParam0)[8] = 0;
	(*uParam0)[9] = 0;
	(*uParam0)[10] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[7] = 0;
	(*uParam0)[11] = 0;
	(*uParam0)[13] = -99;
	(*uParam0)[14] = -99;
	uParam0->f_16 = 0;
	iVar0 = 0;
	if (iParam1 == joaat("player_zero"))
	{
		iVar0 = 0;
		(*uParam0)[13] = (10 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_one"))
	{
		iVar0 = 1;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_two"))
	{
		iVar0 = 2;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("mp_m_freemode_01"))
	{
		iVar0 = 3;
	}
	else if (iParam1 == joaat("mp_f_freemode_01"))
	{
		iVar0 = 4;
	}
	unk_0xE619DE4F72F76E79(iVar0, 0);
	unk_0x4ECDF1AC3EC9ADF1((iParam2 - iParam3), &Var1);
	if (!unk_0xD1ABD511D9C326A3(Var1))
	{
		iVar4 = 0;
		while (iVar4 < Var1.f_4)
		{
			if (unk_0x04E5165F663D7983(Var1.f_1, iVar4, &Var2))
			{
				if ((Var2.x != 0 && Var2.x != -1) && Var2.x != joaat("0"))
				{
					if (Var2.f_2 == 10)
					{
						unk_0xFE9B2B065B8931FE(&Var3);
						unk_0x3BA50B117757EA3E(Var2.x, &Var3);
						if (Var2.x != Var3.f_1)
						{
							uParam0->f_16 = 1;
						}
					}
					if (Var2.f_2 == 10 && uParam0->f_16)
					{
						(*uParam0)[func_85(Var2.f_2)] = Var2.x;
						uParam0->f_16 = 1;
					}
					else
					{
						(*uParam0)[func_85(Var2.f_2)] = func_79(iParam1, Var2.x, func_85(Var2.f_2), iVar0);
					}
				}
				else if (Var2.f_1 != -1)
				{
					(*uParam0)[func_85(Var2.f_2)] = Var2.f_1;
				}
			}
			iVar4++;
		}
		if (Var1.f_3 == 0)
		{
			(*uParam0)[13] = -99;
		}
		else
		{
			(*uParam0)[13] = Var1.f_1;
		}
	}
}

int func_85(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

void func_86(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	(*uParam0)[0] = iParam1;
	(*uParam0)[2] = iParam2;
	(*uParam0)[3] = iParam3;
	(*uParam0)[4] = iParam4;
	(*uParam0)[6] = iParam5;
	(*uParam0)[5] = iParam6;
	(*uParam0)[8] = iParam7;
	(*uParam0)[9] = iParam8;
	(*uParam0)[10] = iParam9;
	(*uParam0)[1] = iParam10;
	(*uParam0)[7] = iParam11;
	(*uParam0)[11] = iParam12;
	(*uParam0)[13] = iParam13;
	(*uParam0)[14] = -99;
}

int func_87(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	Global_77059[1 /*14*/] = { func_5(iParam0, iParam1, iParam2, -1) };
	if (unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 0) && !unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 6))
	{
		if (bParam3)
		{
			func_4(iParam1, Global_77059[1 /*14*/].f_5, Global_77059[1 /*14*/].f_2, 0, Global_77059[1 /*14*/].f_1, 1, 0);
		}
		else
		{
			func_4(iParam1, Global_77059[1 /*14*/].f_5, Global_77059[1 /*14*/].f_2, 0, Global_77059[1 /*14*/].f_1, 0, 1);
		}
		return 1;
	}
	return 0;
}

int func_88(int iParam0)
{
	return Global_1878[iParam0 /*29*/];
}

void func_89()
{
	if (!func_90())
	{
		iLocal_65 = 0;
		return;
	}
}

bool func_90()
{
	return Global_112293.f_2361.f_539.f_2352;
}

void func_91()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<7> Var5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<2> Var9;
	int iVar10;
	struct<222> Var11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	struct<2> Var17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	char* sVar22;
	char* sVar23;
	char* sVar24;
	
	if (iLocal_194)
	{
		if (unk_0xDC39E4D9D73B0D14() || unk_0xE22116C6D321FECA())
		{
			set_warning_message("CONT_REM_PS", 16384, 0, false, -1, 0, 0, true, 0);
		}
		else if (unk_0x60FF5ED57C36A351() || unk_0x2322DD4FBF5E4E2F())
		{
			set_warning_message("CONT_REM_XB", 16384, 0, false, -1, 0, 0, true, 0);
		}
		else
		{
			set_warning_message("CONT_REM_PC", 16384, 0, false, -1, 0, 0, true, 0);
		}
		if (func_150())
		{
			func_149();
		}
		if (unk_0x86AF801D34E482FF(2, 201))
		{
			iLocal_194 = 0;
		}
	}
	if (((!unk_0x02BFF15CAA701972() && (unk_0xDFB7BFA6482FEE1E() - iLocal_192) > 10000) && !func_147(1)) && !func_17(13))
	{
		if (!func_142())
		{
			iLocal_191 = 11;
			iLocal_192 = unk_0xDFB7BFA6482FEE1E();
			iLocal_207 = 0;
		}
		else
		{
			switch (iLocal_191)
			{
				case 0:
					if (!unk_0x234B68AC2E35ED5A(Global_112293.f_668.f_1315, 0))
					{
						if (func_141())
						{
							unk_0x191DDA30577F440A(&(Global_112293.f_668.f_1315), 0);
							func_138(1);
							func_137(1);
						}
					}
					break;
				
				case 1:
					if (!unk_0x234B68AC2E35ED5A(Global_112293.f_668.f_1315, 1))
					{
						if (func_136())
						{
							unk_0x191DDA30577F440A(&(Global_112293.f_668.f_1315), 1);
							func_138(1);
							func_137(1);
						}
					}
					break;
				
				case 2:
					if (!unk_0x234B68AC2E35ED5A(Global_112293.f_668.f_1315, 2))
					{
						if (func_135(0, 1) || (((unk_0x678E959F60C0DB94() && unk_0x0B4295B1608BB934()) && !unk_0xDC39E4D9D73B0D14()) && !unk_0xE22116C6D321FECA()))
						{
							func_133(&(Global_112293.f_668.f_1315), 2, "CONTENT_NEW_SC");
							func_2(func_132(0), 2, 1, 1, 1, 0, 0);
							func_2(func_132(1), 2, 17, 1, 1, 0, 0);
							func_2(func_132(2), 2, 3, 1, 1, 0, 0);
							func_2(func_132(0), 1, 4, 1, 1, 0, 0);
							func_2(func_132(1), 1, 1, 1, 1, 0, 0);
							func_2(func_132(2), 1, 4, 1, 1, 0, 0);
						}
					}
					break;
				
				case 3:
					if (!unk_0x234B68AC2E35ED5A(Global_112293.f_668.f_1315, 3))
					{
						if ((((func_131() || func_136()) || func_141()) || func_130()) || func_129())
						{
							if (!unk_0x314B0D9D224ABE3A("BLIMP"))
							{
								unk_0xC1085DC8A8C1737B("BLIMP", 1);
							}
							unk_0x191DDA30577F440A(&(Global_112293.f_668.f_1315), 3);
						}
					}
					break;
				
				case 4:
					if (!unk_0x234B68AC2E35ED5A(iLocal_207, 1))
					{
						iVar6 = 0;
						iVar7 = unk_0xB3E2CBD7C8448401();
						iVar8 = 0;
						while (iVar8 < iVar7)
						{
							if (unk_0x0466DAD8CA6C1EAD(iVar8, &Var9))
							{
								if (!unk_0xD1ABD511D9C326A3(Var9) && !func_128(Var9.f_1))
								{
									iVar10 = Var9.f_1;
									if (((iVar10 != joaat("weapon_hammer") && iVar10 != joaat("weapon_pistol50")) && iVar10 != joaat("weapon_bullpupshotgun")) && iVar10 != joaat("weapon_assaultsmg"))
									{
										iVar6++;
									}
								}
							}
							iVar8++;
						}
						if (iVar6 != Global_112293.f_668.f_1311)
						{
							Var11 = 44;
							Var11.f_221 = 51;
							func_112(&Var11, &Var9);
							if (iVar6 > Global_112293.f_668.f_1311)
							{
								if ((iVar6 - Global_112293.f_668.f_1311) == 1)
								{
									if (!unk_0x02BFF15CAA701972())
									{
										StringCopy(&cLocal_195, "CONTENT_NEW_W0", 32);
									}
									else
									{
										StringCopy(&cLocal_195, "CONTENT_NEW_WM0", 32);
									}
								}
								else if (!unk_0x02BFF15CAA701972())
								{
									StringCopy(&cLocal_195, "CONTENT_NEW_W1", 32);
								}
								else
								{
									StringCopy(&cLocal_195, "CONTENT_NEW_WM1", 32);
								}
							}
							Global_112293.f_668.f_1311 = iVar6;
							iLocal_193 = 1;
							if (unk_0x3640D836D145B814())
							{
								iLocal_193 = 0;
							}
						}
						else if (iVar6 < Global_112293.f_668.f_1311)
						{
							Global_112293.f_668.f_1311 = iVar6;
							iLocal_194 = 1;
						}
						unk_0x191DDA30577F440A(&iLocal_207, 1);
					}
					break;
				
				case 5:
					if (!unk_0x234B68AC2E35ED5A(iLocal_207, 0))
					{
						iVar12 = 0;
						iVar13 = 0;
						iVar14 = 0;
						iVar15 = 0;
						iVar16 = 0;
						while (iVar16 < unk_0xE4F2BC3D40737711())
						{
							if (unk_0x953EAC8A463313E4(iVar16, &Var17))
							{
								if ((Var17.f_1 != joaat("hotknife") && Var17.f_1 != joaat("carbonrs")) && Var17.f_1 != joaat("elegy2"))
								{
									if (!unk_0xD1ABD511D9C326A3(Var17) && !func_111(Var17.f_1))
									{
										iVar18 = func_108(func_109(Var17.f_1));
										switch (iVar18)
										{
											case 0:
												iVar12++;
												break;
											
											case 1:
												iVar13++;
												break;
											
											case 2:
												iVar14++;
												break;
											
											case 3:
												iVar15++;
												break;
											}
										}
									}
							}
							iVar16++;
						}
						unk_0xD885BEFA31A18D47(joaat("content_hanger_veh"), &iVar19, -1);
						unk_0xD885BEFA31A18D47(joaat("content_marina_veh"), &iVar20, -1);
						unk_0xD885BEFA31A18D47(joaat("content_heli_veh"), &iVar21, -1);
						if ((iVar19 < 0 || iVar20 < 0) || iVar21 < 0)
						{
							unk_0xAC4FD27671081628(joaat("content_hanger_veh"), iVar13, 1);
							iVar19 = iVar13;
							unk_0xAC4FD27671081628(joaat("content_marina_veh"), iVar14, 1);
							iVar20 = iVar14;
							unk_0xAC4FD27671081628(joaat("content_heli_veh"), iVar15, 1);
							iVar21 = iVar15;
							Global_112293.f_668.f_1310 = (iVar12 - ((iVar13 + iVar14) + iVar15));
							func_106();
						}
						if (((iVar12 + iVar13) + iVar14) + iVar15) > (((Global_112293.f_668.f_1310 + iVar19) + iVar20) + iVar21)
						{
							if ((((((((iVar12 + iVar13) + iVar14) + iVar15) - Global_112293.f_668.f_1310) + iVar19) + iVar20) + iVar21) == 1)
							{
								if (!unk_0x02BFF15CAA701972())
								{
									if (iVar12 == 1)
									{
										StringCopy(&cLocal_195, "CONT_NEW_V", 32);
									}
									else if (iVar13 == 1)
									{
										StringCopy(&cLocal_195, "CONT_NEW_VH", 32);
									}
									else if (iVar14 == 1)
									{
										StringCopy(&cLocal_195, "CONT_NEW_VM", 32);
									}
									else if (iVar15 == 1)
									{
										StringCopy(&cLocal_195, "CONT_NEW_VC", 32);
									}
									else
									{
										StringCopy(&cLocal_195, "CONT_NEW_V", 32);
									}
								}
								else
								{
									StringCopy(&cLocal_195, "CONTENT_NEW_VW1", 32);
								}
							}
							else if (!unk_0x02BFF15CAA701972())
							{
								StringCopy(&cLocal_195, "CONT_NEW_V", 32);
								if (iVar12 > Global_112293.f_668.f_1310)
								{
									StringConCat(&cLocal_195, "G", 32);
								}
								if (iVar13 > iVar19)
								{
									StringConCat(&cLocal_195, "H", 32);
								}
								if (iVar14 > iVar20)
								{
									StringConCat(&cLocal_195, "M", 32);
								}
								if (iVar15 > iVar21)
								{
									StringConCat(&cLocal_195, "C", 32);
								}
								StringConCat(&cLocal_195, "1", 32);
							}
							else
							{
								StringCopy(&cLocal_195, "CONTENT_NEW_VW2", 32);
							}
							Global_112293.f_668.f_1310 = iVar12;
							unk_0xAC4FD27671081628(joaat("content_hanger_veh"), iVar13, 1);
							unk_0xAC4FD27671081628(joaat("content_marina_veh"), iVar14, 1);
							unk_0xAC4FD27671081628(joaat("content_heli_veh"), iVar15, 1);
							iLocal_193 = 0;
							func_106();
						}
						else if (((iVar12 + iVar13) + iVar14) + iVar15) < (((Global_112293.f_668.f_1310 + iVar19) + iVar20) + iVar21)
						{
							Global_112293.f_668.f_1310 = iVar12;
							unk_0xAC4FD27671081628(joaat("content_hanger_veh"), iVar13, 1);
							unk_0xAC4FD27671081628(joaat("content_marina_veh"), iVar14, 1);
							unk_0xAC4FD27671081628(joaat("content_heli_veh"), iVar15, 1);
							func_106();
						}
						unk_0x191DDA30577F440A(&iLocal_207, 0);
					}
					break;
				
				case 6:
					if (!unk_0x234B68AC2E35ED5A(iLocal_207, 2))
					{
						unk_0xFE9B2B065B8931FE(&Var5);
						iVar2 = 0;
						iVar1 = 0;
						iVar4 = func_102();
						iVar0 = unk_0x2AD3045712160011(iVar4, 0, 11, 0);
						iVar1 = 0;
						while (iVar1 < iVar0)
						{
							unk_0xDF9AB3C346705246(iVar1, &Var5);
							if (!unk_0xD1ABD511D9C326A3(Var5))
							{
								if (Var5.f_6 == 3)
								{
									iVar2++;
								}
							}
							iVar1++;
						}
						if (iVar2 > Global_112293.f_668.f_1312)
						{
							Global_112293.f_668.f_1312 = iVar2;
							StringCopy(&cLocal_195, "CONTENT_NEW_C", 32);
							iLocal_193 = 1;
						}
						unk_0x191DDA30577F440A(&iLocal_207, 2);
					}
					break;
				
				case 7:
					if (!unk_0x234B68AC2E35ED5A(iLocal_207, 4))
					{
						unk_0xFE9B2B065B8931FE(&Var5);
						iVar3 = 0;
						iVar1 = 0;
						iVar4 = func_102();
						iVar0 = unk_0x2AD3045712160011(iVar4, 0, 11, 0);
						iVar1 = 0;
						while (iVar1 < iVar0)
						{
							unk_0xDF9AB3C346705246(iVar1, &Var5);
							if (!unk_0xD1ABD511D9C326A3(Var5))
							{
								if (Var5.f_6 == 2)
								{
									iVar3++;
								}
							}
							iVar1++;
						}
						if (iVar3 > Global_112293.f_668.f_1313)
						{
							Global_112293.f_668.f_1313 = iVar3;
							StringCopy(&cLocal_195, "CONTENT_NEW_H", 32);
							iLocal_193 = 1;
						}
						unk_0x191DDA30577F440A(&iLocal_207, 4);
					}
					break;
				
				case 8:
					if (!unk_0x234B68AC2E35ED5A(iLocal_207, 3))
					{
						switch (func_102())
						{
							case 0:
								if (!unk_0x234B68AC2E35ED5A(Global_112293.f_668.f_1314, 0))
								{
									if (func_97(&sVar22, 21, 0, unk_0x7D2B9E6A64637269(), -1))
									{
										func_133(&(Global_112293.f_668.f_1314), 0, "CONTENT_NEW_T");
									}
								}
								break;
							
							case 1:
								if (!unk_0x234B68AC2E35ED5A(Global_112293.f_668.f_1314, 1))
								{
									if (func_97(&sVar23, 40, 1, unk_0x7D2B9E6A64637269(), -1))
									{
										func_133(&(Global_112293.f_668.f_1314), 1, "CONTENT_NEW_T");
									}
								}
								break;
							
							case 2:
								if (!unk_0x234B68AC2E35ED5A(Global_112293.f_668.f_1314, 2))
								{
									if (func_97(&sVar24, 34, 2, unk_0x7D2B9E6A64637269(), -1))
									{
										func_133(&(Global_112293.f_668.f_1314), 2, "CONTENT_NEW_T");
									}
								}
								break;
						}
						unk_0x191DDA30577F440A(&iLocal_207, 3);
					}
					break;
				
				case 9:
					if (!func_96(0, 10))
					{
						if ((func_141() || func_136()) || func_130())
						{
							if (func_95(0))
							{
								func_94(16, 0);
							}
						}
					}
					break;
				
				case 10:
					break;
				
				case 11:
					if (!unk_0x234B68AC2E35ED5A(Global_112293.f_668.f_1315, 6))
					{
						if (func_93())
						{
							func_133(&(Global_112293.f_668.f_1315), 6, "CONT_NG_PREOR");
							func_94(157, 0);
							iLocal_192 = unk_0xDFB7BFA6482FEE1E();
						}
					}
					break;
				
				case 12:
					if (!unk_0x234B68AC2E35ED5A(Global_112293.f_668.f_1315, 7))
					{
						if (func_129())
						{
							func_133(&(Global_112293.f_668.f_1315), 7, "CONT_CG_TO_NG");
						}
					}
					break;
				
				case 13:
					if (!unk_0x234B68AC2E35ED5A(Global_112293.f_668.f_1315, 8))
					{
						if (func_92())
						{
							func_133(&(Global_112293.f_668.f_1315), 8, "CONT_HEISTS");
						}
					}
					break;
				
				case 14:
					if (Global_2464795 > 0)
					{
						break;
					}
					if (Global_2464792 == 0)
					{
						if (Global_2464793 == 0)
						{
							if (Global_2464758 == 99)
							{
								StringCopy(&cLocal_195, "HUD_1_CASHGIFT", 32);
								iLocal_191 = 2;
								iLocal_200 = Global_2464757;
								iLocal_193 = 1;
								Global_2464792 = 0;
								Global_2464793 = 1;
							}
							else if (Global_2464758 == -99)
							{
								StringCopy(&cLocal_195, "HUD_2_CASHGIFT", 32);
								iLocal_191 = 2;
								iLocal_193 = 1;
								Global_2464792 = 0;
								Global_2464793 = 1;
							}
							else if (Global_2464758 > 0)
							{
								StringCopy(&cLocal_195, "HUD_1_CASHGIFT", 32);
								iLocal_191 = 2;
								iLocal_200 = Global_2464757;
								iLocal_193 = 1;
								Global_2464792 = 0;
								Global_2464793 = 1;
							}
							else if (Global_2464758 < 0)
							{
								StringCopy(&cLocal_195, "HUD_1_CASHGIFTN", 32);
								iLocal_191 = 2;
								iLocal_200 = Global_2464757;
								if (iLocal_200 < 0)
								{
									iLocal_200 = (iLocal_200 * -1);
								}
								iLocal_193 = 1;
								Global_2464792 = 0;
								Global_2464793 = 1;
							}
						}
					}
					else
					{
						Global_2464792 = 0;
						Global_2464758 = 0;
						Global_2464757 = 0;
					}
					break;
				
				case 15:
					iLocal_191 = 0;
					return;
					break;
			}
			if (iLocal_193)
			{
				if (iLocal_191 == 2)
				{
					if (iLocal_200 == 0)
					{
						unk_0xAD97A7EDCF347FBB(&cLocal_195);
						unk_0x1664AA1696810AD6("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, "CONTENT_TICK", 0);
					}
					else
					{
						unk_0xAD97A7EDCF347FBB(&cLocal_195);
						unk_0x38CD3C04C877C35F(iLocal_200);
						unk_0x1664AA1696810AD6("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, "CONTENT_TICK", 0);
					}
				}
				else
				{
					unk_0xAD97A7EDCF347FBB(&cLocal_195);
					unk_0x02B23FCAC192C764(0, 1);
				}
				iLocal_193 = 0;
			}
			iLocal_191++;
		}
	}
}

bool func_92()
{
	return unk_0x14FA206D9CE730A9(-1932191089);
}

int func_93()
{
	if (unk_0x14FA206D9CE730A9(-65181770))
	{
		return 1;
	}
	return 0;
}

void func_94(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_112293.f_8611[iParam0] = 1;
	Global_112293.f_8611.f_236[iParam0] = (unk_0xDFB7BFA6482FEE1E() + iParam1);
}

int func_95(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_112293.f_9083.f_330[iParam0 /*6*/];
}

bool func_96(int iParam0, int iParam1)
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
	bVar0 = unk_0x234B68AC2E35ED5A(Global_112293.f_9083.f_99.f_219[iParam0], iParam1);
	return bVar0;
}

bool func_97(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	func_101(sParam0, -1, 0, "", "", "", "", iParam2, -1, 0);
	if (unk_0x419E13582192CFEA(iParam3) && !unk_0xECEC7528A52B4EE8(iParam3))
	{
		iVar0 = unk_0x6471F4759775FCA4(iParam3);
	}
	switch (iParam2)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					func_101(sParam0, iParam1, iParam3, "TAT_MIC_01", "singleplayer_overlays", "MK_000", "", iParam2, 300, 3);
					break;
				
				case 1:
					func_101(sParam0, iParam1, iParam3, "TAT_MIC_02", "singleplayer_overlays", "MK_001", "", iParam2, 450, 0);
					break;
				
				case 2:
					func_101(sParam0, iParam1, iParam3, "TAT_MIC_03", "singleplayer_overlays", "MK_002", "", iParam2, 250, 4);
					break;
				
				case 3:
					func_101(sParam0, iParam1, iParam3, "TAT_MIC_04", "singleplayer_overlays", "MK_003", "", iParam2, 175, 0);
					break;
				
				case 4:
					func_101(sParam0, iParam1, iParam3, "TAT_MIC_06", "singleplayer_overlays", "MK_005", "", iParam2, 380, 0);
					break;
				
				case 5:
					func_101(sParam0, iParam1, iParam3, "TAT_MIC_07", "singleplayer_overlays", "MK_006", "", iParam2, 180, 0);
					break;
				
				case 6:
					func_101(sParam0, iParam1, iParam3, "TAT_MIC_08", "singleplayer_overlays", "MK_007", "", iParam2, 240, 0);
					break;
				
				case 7:
					func_101(sParam0, iParam1, iParam3, "TAT_MIC_10", "singleplayer_overlays", "MK_009", "", iParam2, 195, 0);
					break;
				
				case 8:
					func_101(sParam0, iParam1, iParam3, "TAT_MIC_11", "singleplayer_overlays", "MK_010", "", iParam2, 280, 6);
					break;
				
				case 9:
					if (func_141() || func_136())
					{
						iVar1 = 400;
						if (func_129() && (func_100() || func_99()))
						{
							iVar1 = 0;
						}
						func_101(sParam0, iParam1, iParam3, "TAT_MIC_12", "singleplayer_overlays", "MK_011", "", iParam2, iVar1, 2);
					}
					break;
				
				case 10:
					func_101(sParam0, iParam1, iParam3, "TAT_MIC_13", "singleplayer_overlays", "MK_012", "", iParam2, 320, 3);
					break;
				
				case 11:
					func_101(sParam0, iParam1, iParam3, "TAT_MIC_14", "singleplayer_overlays", "MK_013", "", iParam2, 500, 2);
					break;
				
				case 12:
					func_101(sParam0, iParam1, iParam3, "TAT_MIC_16", "singleplayer_overlays", "MK_015", "", iParam2, 220, 0);
					break;
				
				case 13:
					func_101(sParam0, iParam1, iParam3, "TAT_MIC_17", "singleplayer_overlays", "MK_016", "", iParam2, 320, 4);
					break;
				
				case 14:
					func_101(sParam0, iParam1, iParam3, "TAT_MIC_18", "singleplayer_overlays", "MK_017", "", iParam2, 140, 2);
					break;
				
				case 15:
					func_101(sParam0, iParam1, iParam3, "TAT_MIC_20", "singleplayer_overlays", "MK_019", "", iParam2, 350, 0);
					break;
				
				case 16:
					func_101(sParam0, iParam1, iParam3, "TAT_MIC_21", "singleplayer_overlays", "MK_020", "", iParam2, 350, 0);
					break;
				
				case 17:
					func_101(sParam0, iParam1, iParam3, "TAT_MIC_05", "singleplayer_overlays", "MK_004", "", iParam2, 120, 1);
					break;
				
				case 18:
					func_101(sParam0, iParam1, iParam3, "TAT_MIC_09", "singleplayer_overlays", "MK_008", "", iParam2, 99, 1);
					break;
				
				case 19:
					func_101(sParam0, iParam1, iParam3, "TAT_MIC_15", "singleplayer_overlays", "MK_014", "", iParam2, 400, 1);
					break;
				
				case 20:
					func_101(sParam0, iParam1, iParam3, "TAT_MIC_19", "singleplayer_overlays", "MK_018", "", iParam2, 420, 1);
					break;
				
				default:
					func_98(sParam0, iParam2, iParam1, 21);
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					if (func_141() || func_136())
					{
						iVar1 = 450;
						if (func_129() && (func_100() || func_99()))
						{
							iVar1 = 0;
						}
						func_101(sParam0, iParam1, iParam3, "TAT_FRA_01", "singleplayer_overlays", "fr_000", "", iParam2, iVar1, 0);
					}
					break;
				
				case 1:
					func_101(sParam0, iParam1, iParam3, "TAT_FRA_02", "singleplayer_overlays", "fr_001", "", iParam2, 230, 0);
					break;
				
				case 2:
					func_101(sParam0, iParam1, iParam3, "TAT_FRA_03", "singleplayer_overlays", "fr_002", "", iParam2, 310, 0);
					break;
				
				case 3:
					func_101(sParam0, iParam1, iParam3, "TAT_FRA_04", "singleplayer_overlays", "fr_003", "", iParam2, 260, 0);
					break;
				
				case 4:
					func_101(sParam0, iParam1, iParam3, "TAT_FRA_07", "singleplayer_overlays", "fr_006", "", iParam2, 240, 2);
					break;
				
				case 5:
					func_101(sParam0, iParam1, iParam3, "TAT_FRA_08", "singleplayer_overlays", "fr_007", "", iParam2, 190, 3);
					break;
				
				case 6:
					func_101(sParam0, iParam1, iParam3, "TAT_FRA_09", "singleplayer_overlays", "fr_008", "", iParam2, 200, 2);
					break;
				
				case 7:
					func_101(sParam0, iParam1, iParam3, "TAT_FRA_10", "singleplayer_overlays", "fr_009", "", iParam2, 225, 0);
					break;
				
				case 8:
					func_101(sParam0, iParam1, iParam3, "TAT_FRA_12", "singleplayer_overlays", "fr_011", "", iParam2, 195, 0);
					break;
				
				case 9:
					func_101(sParam0, iParam1, iParam3, "TAT_FRA_13", "singleplayer_overlays", "fr_012", "", iParam2, 275, 2);
					break;
				
				case 10:
					func_101(sParam0, iParam1, iParam3, "TAT_FRA_14", "singleplayer_overlays", "fr_013", "", iParam2, 80, 0);
					break;
				
				case 11:
					func_101(sParam0, iParam1, iParam3, "TAT_FRA_15", "singleplayer_overlays", "fr_014", "", iParam2, 95, 0);
					break;
				
				case 12:
					func_101(sParam0, iParam1, iParam3, "TAT_FRA_16", "singleplayer_overlays", "fr_015", "", iParam2, 300, 3);
					break;
				
				case 13:
					func_101(sParam0, iParam1, iParam3, "TAT_FRA_17", "singleplayer_overlays", "fr_016", "", iParam2, 450, 3);
					break;
				
				case 14:
					func_101(sParam0, iParam1, iParam3, "TAT_FRA_18", "singleplayer_overlays", "fr_017", "", iParam2, 345, 3);
					break;
				
				case 15:
					func_101(sParam0, iParam1, iParam3, "TAT_FRA_19", "singleplayer_overlays", "fr_018", "", iParam2, 550, 0);
					break;
				
				case 16:
					func_101(sParam0, iParam1, iParam3, "TAT_FRA_20", "singleplayer_overlays", "fr_019", "", iParam2, 200, 0);
					break;
				
				case 17:
					func_101(sParam0, iParam1, iParam3, "TAT_FRA_21", "singleplayer_overlays", "fr_020", "", iParam2, 180, 0);
					break;
				
				case 18:
					func_101(sParam0, iParam1, iParam3, "TAT_FRA_22", "singleplayer_overlays", "fr_021", "", iParam2, 140, 0);
					break;
				
				case 19:
					func_101(sParam0, iParam1, iParam3, "TAT_FRA_24", "singleplayer_overlays", "fr_023", "", iParam2, 245, 0);
					break;
				
				case 20:
					break;
				
				case 21:
					func_101(sParam0, iParam1, iParam3, "TAT_FRA_26", "singleplayer_overlays", "fr_025", "", iParam2, 370, 0);
					break;
				
				case 22:
					func_101(sParam0, iParam1, iParam3, "TAT_FRA_27", "singleplayer_overlays", "fr_026", "", iParam2, 350, 0);
					break;
				
				case 23:
					func_101(sParam0, iParam1, iParam3, "TAT_FRA_28", "singleplayer_overlays", "fr_027", "", iParam2, 310, 0);
					break;
				
				case 24:
					func_101(sParam0, iParam1, iParam3, "TAT_FRA_29", "singleplayer_overlays", "fr_028", "", iParam2, 210, 0);
					break;
				
				case 25:
					func_101(sParam0, iParam1, iParam3, "TAT_FRA_30", "singleplayer_overlays", "fr_029", "", iParam2, 245, 0);
					break;
				
				case 26:
					func_101(sParam0, iParam1, iParam3, "TAT_FRA_31", "singleplayer_overlays", "fr_030", "", iParam2, 85, 0);
					break;
				
				case 27:
					func_101(sParam0, iParam1, iParam3, "TAT_FRA_32", "singleplayer_overlays", "fr_031", "", iParam2, 210, 0);
					break;
				
				case 28:
					func_101(sParam0, iParam1, iParam3, "TAT_FRA_33", "singleplayer_overlays", "fr_032", "", iParam2, 225, 0);
					break;
				
				case 29:
					func_101(sParam0, iParam1, iParam3, "TAT_FRA_34", "singleplayer_overlays", "fr_033", "", iParam2, 145, 0);
					break;
				
				case 30:
					func_101(sParam0, iParam1, iParam3, "TAT_FRA_35", "singleplayer_overlays", "fr_034", "", iParam2, 230, 0);
					break;
				
				case 31:
					func_101(sParam0, iParam1, iParam3, "TAT_FRA_36", "singleplayer_overlays", "fr_035", "", iParam2, 195, 0);
					break;
				
				case 32:
					func_101(sParam0, iParam1, iParam3, "TAT_FRA_37", "singleplayer_overlays", "fr_036", "", iParam2, 255, 0);
					break;
				
				case 33:
					func_101(sParam0, iParam1, iParam3, "TAT_FRA_38", "singleplayer_overlays", "fr_037", "", iParam2, 300, 0);
					break;
				
				case 34:
					func_101(sParam0, iParam1, iParam3, "TAT_FRA_40", "singleplayer_overlays", "fr_039", "", iParam2, 300, 0);
					break;
				
				case 35:
					func_101(sParam0, iParam1, iParam3, "TAT_FRA_05", "singleplayer_overlays", "fr_004", "", iParam2, 255, 1);
					break;
				
				case 36:
					func_101(sParam0, iParam1, iParam3, "TAT_FRA_06", "singleplayer_overlays", "fr_005", "", iParam2, 175, 1);
					break;
				
				case 37:
					func_101(sParam0, iParam1, iParam3, "TAT_FRA_11", "singleplayer_overlays", "fr_010", "", iParam2, 520, 1);
					break;
				
				case 38:
					func_101(sParam0, iParam1, iParam3, "TAT_FRA_23", "singleplayer_overlays", "fr_022", "", iParam2, 125, 1);
					break;
				
				case 39:
					func_101(sParam0, iParam1, iParam3, "TAT_FRA_39", "singleplayer_overlays", "fr_038", "", iParam2, 365, 1);
					break;
				
				default:
					func_98(sParam0, iParam2, iParam1, 40);
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					func_101(sParam0, iParam1, iParam3, "TAT_TRV_01", "singleplayer_overlays", "tp_000", "", iParam2, 120, 0);
					break;
				
				case 1:
					func_101(sParam0, iParam1, iParam3, "TAT_TRV_02", "singleplayer_overlays", "tp_001", "", iParam2, 150, 3);
					break;
				
				case 2:
					func_101(sParam0, iParam1, iParam3, "TAT_TRV_03", "singleplayer_overlays", "tp_002", "", iParam2, 100, 0);
					break;
				
				case 3:
					func_101(sParam0, iParam1, iParam3, "TAT_TRV_04", "singleplayer_overlays", "tp_003", "", iParam2, 140, 0);
					break;
				
				case 4:
					func_101(sParam0, iParam1, iParam3, "TAT_TRV_05", "singleplayer_overlays", "tp_004", "", iParam2, 250, 0);
					break;
				
				case 5:
					if (func_141() || func_136())
					{
						iVar1 = 380;
						if (func_129() && (func_100() || func_99()))
						{
							iVar1 = 0;
						}
						func_101(sParam0, iParam1, iParam3, "TAT_TRV_06", "singleplayer_overlays", "tp_005", "", iParam2, iVar1, 3);
					}
					break;
				
				case 6:
					func_101(sParam0, iParam1, iParam3, "TAT_TRV_07", "singleplayer_overlays", "tp_006", "", iParam2, 120, 0);
					break;
				
				case 7:
					func_101(sParam0, iParam1, iParam3, "TAT_TRV_08", "singleplayer_overlays", "tp_007", "", iParam2, 250, 0);
					break;
				
				case 8:
					func_101(sParam0, iParam1, iParam3, "TAT_TRV_09", "singleplayer_overlays", "tp_008", "", iParam2, 50, 3);
					break;
				
				case 9:
					func_101(sParam0, iParam1, iParam3, "TAT_TRV_10", "singleplayer_overlays", "tp_009", "", iParam2, 135, 2);
					break;
				
				case 10:
					func_101(sParam0, iParam1, iParam3, "TAT_TRV_11", "singleplayer_overlays", "tp_010", "", iParam2, 245, 0);
					break;
				
				case 11:
					func_101(sParam0, iParam1, iParam3, "TAT_TRV_12", "singleplayer_overlays", "tp_011", "", iParam2, 280, 0);
					break;
				
				case 12:
					func_101(sParam0, iParam1, iParam3, "TAT_TRV_13", "singleplayer_overlays", "tp_012", "", iParam2, 65, 0);
					break;
				
				case 13:
					func_101(sParam0, iParam1, iParam3, "TAT_TRV_14", "singleplayer_overlays", "tp_013", "", iParam2, 150, 6);
					break;
				
				case 14:
					func_101(sParam0, iParam1, iParam3, "TAT_TRV_15", "singleplayer_overlays", "tp_014", "", iParam2, 200, 0);
					break;
				
				case 15:
					func_101(sParam0, iParam1, iParam3, "TAT_TRV_16", "singleplayer_overlays", "tp_015", "", iParam2, 145, 0);
					break;
				
				case 16:
					func_101(sParam0, iParam1, iParam3, "TAT_TRV_17", "singleplayer_overlays", "tp_016", "", iParam2, 290, 0);
					break;
				
				case 17:
					func_101(sParam0, iParam1, iParam3, "TAT_TRV_18", "singleplayer_overlays", "tp_017", "", iParam2, 350, 3);
					break;
				
				case 18:
					func_101(sParam0, iParam1, iParam3, "TAT_TRV_19", "singleplayer_overlays", "tp_018", "", iParam2, 70, 0);
					break;
				
				case 19:
					func_101(sParam0, iParam1, iParam3, "TAT_TRV_20", "singleplayer_overlays", "tp_019", "", iParam2, 180, 6);
					break;
				
				case 20:
					func_101(sParam0, iParam1, iParam3, "TAT_TRV_21", "singleplayer_overlays", "tp_020", "", iParam2, 230, 0);
					break;
				
				case 21:
					func_101(sParam0, iParam1, iParam3, "TAT_TRV_22", "singleplayer_overlays", "tp_021", "", iParam2, 200, 0);
					break;
				
				case 22:
					func_101(sParam0, iParam1, iParam3, "TAT_TRV_24", "singleplayer_overlays", "tp_023", "", iParam2, 240, 0);
					break;
				
				case 23:
					func_101(sParam0, iParam1, iParam3, "TAT_TRV_25", "singleplayer_overlays", "tp_024", "", iParam2, 195, 0);
					break;
				
				case 24:
					func_101(sParam0, iParam1, iParam3, "TAT_TRV_26", "singleplayer_overlays", "tp_025", "", iParam2, 225, 2);
					break;
				
				case 25:
					func_101(sParam0, iParam1, iParam3, "TAT_TRV_28", "singleplayer_overlays", "tp_027", "", iParam2, 175, 0);
					break;
				
				case 26:
					func_101(sParam0, iParam1, iParam3, "TAT_TRV_29", "singleplayer_overlays", "tp_028", "", iParam2, 65, 0);
					break;
				
				case 27:
					func_101(sParam0, iParam1, iParam3, "TAT_TRV_30", "singleplayer_overlays", "tp_029", "", iParam2, 50, 0);
					break;
				
				case 28:
					func_101(sParam0, iParam1, iParam3, "TAT_TRV_31", "singleplayer_overlays", "tp_030", "", iParam2, 70, 0);
					break;
				
				case 29:
					func_101(sParam0, iParam1, iParam3, "TAT_TRV_34", "singleplayer_overlays", "tp_033", "", iParam2, 70, 0);
					break;
				
				case 30:
					func_101(sParam0, iParam1, iParam3, "TAT_TRV_23", "singleplayer_overlays", "tp_022", "", iParam2, 500, 1);
					break;
				
				case 31:
					func_101(sParam0, iParam1, iParam3, "TAT_TRV_27", "singleplayer_overlays", "tp_026", "", iParam2, 300, 1);
					break;
				
				case 32:
					func_101(sParam0, iParam1, iParam3, "TAT_TRV_32", "singleplayer_overlays", "tp_031", "", iParam2, 190, 1);
					break;
				
				case 33:
					func_101(sParam0, iParam1, iParam3, "TAT_TRV_33", "singleplayer_overlays", "tp_032", "", iParam2, 129, 1);
					break;
				
				default:
					func_98(sParam0, iParam2, iParam1, 34);
					break;
			}
			break;
		
		case 3:
		case 4:
			switch (iParam1)
			{
				case 0:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_008", "multiplayer_overlays", "000", "", iParam2, round((to_float(20000) * Global_262145.f_2907)), 0);
					break;
				
				case 1:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_009", "multiplayer_overlays", "001", "", iParam2, round((to_float(1400) * Global_262145.f_2908)), 2);
					break;
				
				case 2:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_010", "multiplayer_overlays", "002", "", iParam2, round((to_float(9750) * Global_262145.f_2909)), 3);
					break;
				
				case 3:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_011", "multiplayer_overlays", "003", "", iParam2, round((to_float(2150) * Global_262145.f_2910)), 0);
					break;
				
				case 4:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_012", "multiplayer_overlays", "004", "", iParam2, round((to_float(10000) * Global_262145.f_2911)), 0);
					break;
				
				case 54:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_013", "multiplayer_overlays", "005", "", iParam2, round((to_float(12400) * Global_262145.f_2912)), 1);
					break;
				
				case 5:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_014", "multiplayer_overlays", "006", "", iParam2, round((to_float(3500) * Global_262145.f_2913)), 0);
					break;
				
				case 6:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_015", "multiplayer_overlays", "007", "", iParam2, round((to_float(4950) * Global_262145.f_2914)), 2);
					break;
				
				case 55:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_016", "multiplayer_overlays", "008", "", iParam2, round((to_float(1350) * Global_262145.f_2915)), 1);
					break;
				
				case 7:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_017", "multiplayer_overlays", "009", "", iParam2, round((to_float(1450) * Global_262145.f_2916)), 0);
					break;
				
				case 8:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_018", "multiplayer_overlays", "010", "", iParam2, round((to_float(2700) * Global_262145.f_2917)), 7);
					break;
				
				case 9:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_019", "multiplayer_overlays", "011", "rank", iParam2, round((to_float(1200) * Global_262145.f_2918)), 0);
					break;
				
				case 10:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_020", "multiplayer_overlays", "012", "rank", iParam2, round((to_float(1500) * Global_262145.f_2919)), 0);
					break;
				
				case 11:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_021", "multiplayer_overlays", "013", "rank", iParam2, round((to_float(2650) * Global_262145.f_2920)), 0);
					break;
				
				case 56:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_022", "multiplayer_overlays", "014", "", iParam2, round((to_float(1900) * Global_262145.f_2921)), 1);
					break;
				
				case 12:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_023", "multiplayer_overlays", "015", "", iParam2, round((to_float(4950) * Global_262145.f_2922)), 2);
					break;
				
				case 57:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_024", "multiplayer_overlays", "016", "", iParam2, round((to_float(2400) * Global_262145.f_2923)), 1);
					break;
				
				case 58:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_025", "multiplayer_overlays", "017", "", iParam2, round((to_float(5100) * Global_262145.f_2924)), 1);
					break;
				
				case 59:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_026", "multiplayer_overlays", "018", "", iParam2, round((to_float(7400) * Global_262145.f_2925)), 1);
					break;
				
				case 60:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_027", "multiplayer_overlays", "019", "", iParam2, round((to_float(10000) * Global_262145.f_2926)), 1);
					break;
				
				case 17:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_201", "multiplayer_overlays", "005", "", iParam2, round((to_float(2400) * Global_262145.f_2931)), 2);
					break;
				
				case 18:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_202", "multiplayer_overlays", "006", "", iParam2, round((to_float(5100) * Global_262145.f_2932)), 2);
					break;
				
				case 19:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_203", "multiplayer_overlays", "015", "", iParam2, round((to_float(3600) * Global_262145.f_2933)), 2);
					break;
				
				case 20:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_204", "multiplayer_overlays", "000", "", iParam2, round((to_float(10000) * Global_262145.f_2934)), 3);
					break;
				
				case 21:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_205", "multiplayer_overlays", "001", "", iParam2, round((to_float(12500) * Global_262145.f_2935)), 3);
					break;
				
				case 22:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_206", "multiplayer_overlays", "003", "", iParam2, round((to_float(10000) * Global_262145.f_2936)), 3);
					break;
				
				case 23:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_207", "multiplayer_overlays", "014", "", iParam2, round((to_float(5000) * Global_262145.f_2937)), 3);
					break;
				
				case 24:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_208", "multiplayer_overlays", "018", "", iParam2, round((to_float(7500) * Global_262145.f_2938)), 3);
					break;
				
				case 25:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_209", "multiplayer_overlays", "002", "", iParam2, round((to_float(3750) * Global_262145.f_2939)), 2);
					break;
				
				case 26:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_210", "multiplayer_overlays", "007", "", iParam2, round((to_float(3750) * Global_262145.f_2940)), 3);
					break;
				
				case 27:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_211", "multiplayer_overlays", "008", "", iParam2, round((to_float(4800) * Global_262145.f_2941)), 3);
					break;
				
				case 28:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_212", "multiplayer_overlays", "017", "", iParam2, round((to_float(3500) * Global_262145.f_2942)), 3);
					break;
				
				case 61:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_213", "multiplayer_overlays", "009", "", iParam2, round((to_float(12350) * Global_262145.f_2943)), 1);
					break;
				
				case 62:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_214", "multiplayer_overlays", "011", "", iParam2, round((to_float(1900) * Global_262145.f_2944)), 1);
					break;
				
				case 63:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_215", "multiplayer_overlays", "013", "", iParam2, round((to_float(4500) * Global_262145.f_2945)), 1);
					break;
				
				case 64:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_216", "multiplayer_overlays", "016", "", iParam2, round((to_float(12250) * Global_262145.f_2946)), 1);
					break;
				
				case 65:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_217", "multiplayer_overlays", "019", "", iParam2, round((to_float(12300) * Global_262145.f_2947)), 1);
					break;
				
				case 29:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_218", "multiplayer_overlays", "010", "", iParam2, round((to_float(2500) * Global_262145.f_2948)), 0);
					break;
				
				case 30:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_219", "multiplayer_overlays", "004", "", iParam2, round((to_float(10000) * Global_262145.f_2949)), 0);
					break;
				
				case 31:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_220", "multiplayer_overlays", "012", "", iParam2, round((to_float(10000) * Global_262145.f_2950)), 0);
					break;
				
				case 66:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_221", "multiplayer_overlays", "020", "", iParam2, round((to_float(7500) * Global_262145.f_2951)), 1);
					break;
				
				case 32:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_222", "multiplayer_overlays", "021", "", iParam2, round((to_float(5000) * Global_262145.f_2952)), 2);
					break;
				
				case 33:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_223", "multiplayer_overlays", "022", "", iParam2, round((to_float(7300) * Global_262145.f_2953)), 3);
					break;
				
				case 34:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_224", "multiplayer_overlays", "023", "", iParam2, round((to_float(7250) * Global_262145.f_2954)), 2);
					break;
				
				case 35:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_225", "multiplayer_overlays", "024", "", iParam2, round((to_float(11900) * Global_262145.f_2955)), 0);
					break;
				
				case 36:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_226", "multiplayer_overlays", "025", "", iParam2, round((to_float(2750) * Global_262145.f_2956)), 0);
					break;
				
				case 37:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_227", "multiplayer_overlays", "026", "", iParam2, round((to_float(1750) * Global_262145.f_2957)), 0);
					break;
				
				case 38:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_228", "multiplayer_overlays", "027", "", iParam2, round((to_float(7300) * Global_262145.f_2958)), 3);
					break;
				
				case 39:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_229", "multiplayer_overlays", "028", "", iParam2, round((to_float(3250) * Global_262145.f_2959)), 2);
					break;
				
				case 40:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_230", "multiplayer_overlays", "029", "", iParam2, round((to_float(1000) * Global_262145.f_2960)), 0);
					break;
				
				case 67:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_231", "multiplayer_overlays", "030", "", iParam2, round((to_float(5000) * Global_262145.f_2961)), 1);
					break;
				
				case 41:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_232", "multiplayer_overlays", "031", "", iParam2, round((to_float(7500) * Global_262145.f_2962)), 2);
					break;
				
				case 68:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_233", "multiplayer_overlays", "032", "", iParam2, round((to_float(5100) * Global_262145.f_2963)), 1);
					break;
				
				case 42:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_234", "multiplayer_overlays", "033", "", iParam2, round((to_float(5050) * Global_262145.f_2964)), 0);
					break;
				
				case 43:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_235", "multiplayer_overlays", "034", "", iParam2, round((to_float(2450) * Global_262145.f_2965)), 2);
					break;
				
				case 44:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_236", "multiplayer_overlays", "035", "", iParam2, round((to_float(4950) * Global_262145.f_2966)), 0);
					break;
				
				case 45:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_237", "multiplayer_overlays", "036", "", iParam2, round((to_float(5100) * Global_262145.f_2967)), 0);
					break;
				
				case 46:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_238", "multiplayer_overlays", "037", "", iParam2, round((to_float(12250) * Global_262145.f_2968)), 0);
					break;
				
				case 47:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_239", "multiplayer_overlays", "038", "", iParam2, round((to_float(1150) * Global_262145.f_2969)), 3);
					break;
				
				case 48:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_240", "multiplayer_overlays", "039", "", iParam2, round((to_float(7500) * Global_262145.f_2970)), 3);
					break;
				
				case 49:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_241", "multiplayer_overlays", "040", "", iParam2, round((to_float(7600) * Global_262145.f_2971)), 3);
					break;
				
				case 50:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_242", "multiplayer_overlays", "041", "", iParam2, round((to_float(2600) * Global_262145.f_2972)), 2);
					break;
				
				case 51:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_243", "multiplayer_overlays", "042", "", iParam2, round((to_float(2500) * Global_262145.f_2973)), 3);
					break;
				
				case 52:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_244", "multiplayer_overlays", "043", "", iParam2, round((to_float(7450) * Global_262145.f_2974)), 3);
					break;
				
				case 53:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_245", "multiplayer_overlays", "044", "", iParam2, round((to_float(7500) * Global_262145.f_2975)), 0);
					break;
				
				case 69:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_246", "multiplayer_overlays", "045", "", iParam2, round((to_float(10000) * Global_262145.f_2976)), 1);
					break;
				
				case 70:
					func_101(sParam0, iParam1, iParam3, "TAT_FM_247", "multiplayer_overlays", "047", "", iParam2, round((to_float(2500) * Global_262145.f_2977)), 2);
					break;
			}
			if (iVar0 == joaat("mp_m_freemode_01"))
			{
				switch (iParam1)
				{
					case 73:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_001", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 74:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_002", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 75:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_003", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 76:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_004", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 77:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_005", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 78:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_006", "torsoDecal", iParam2, 100, 0);
						break;
					
					case joaat("mpsv_lp0_31"):
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_009", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 80:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_013", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 81:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_014", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 82:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_015", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 83:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_016", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 84:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_019", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 85:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_020", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 86:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 90:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_017", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 91:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_018", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 124:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_046", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 125:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_045", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 87:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_000", "torsoDecal", iParam2, round((to_float(100) * Global_262145.f_2978)), 0);
						break;
					
					case 88:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_001", "torsoDecal", iParam2, round((to_float(100) * Global_262145.f_2979)), 0);
						break;
					
					case 89:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_002", "torsoDecal", iParam2, round((to_float(100) * Global_262145.f_2980)), 0);
						break;
					
					case 93:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 94:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_002", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 95:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_003", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 96:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_004", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 97:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_005", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 98:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_006", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 99:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_007", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 100:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_008", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 101:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_009", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 102:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_010", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 103:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_011", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 104:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_012", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 105:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_013", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 106:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_014", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 107:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_015", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 108:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 109:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 110:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 111:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 112:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 113:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 114:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 115:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 116:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 117:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 123:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 13:
						func_101(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_A", "crewLogo", iParam2, round((to_float(5000) * Global_262145.f_2927)), 0);
						break;
					
					case 14:
						func_101(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_B", "crewLogo", iParam2, round((to_float(10000) * Global_262145.f_2928)), 0);
						break;
					
					case 15:
						func_101(sParam0, iParam1, iParam3, "TAT_FMM_CLB", "multiplayer_overlays", "000_C", "crewLogo", iParam2, round((to_float(10000) * Global_262145.f_2929)), 2);
						break;
					
					case 16:
						func_101(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_D", "crewLogo", iParam2, round((to_float(5000) * Global_262145.f_2930)), 0);
						break;
					
					case 71:
						func_101(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_E", "crewLogo", iParam2, round((to_float(10000) * Global_262145.f_2930)), 0);
						break;
					
					case 72:
						func_101(sParam0, iParam1, iParam3, "TAT_FMM_CLB", "multiplayer_overlays", "000_F", "crewLogo", iParam2, round((to_float(10000) * Global_262145.f_2930)), 0);
						break;
				}
			}
			else if (iVar0 == joaat("mp_f_freemode_01"))
			{
				switch (iParam1)
				{
					case 73:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_027_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 74:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_028_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 75:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_034_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 76:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 77:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_048", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 78:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_052", "torsoDecal", iParam2, 100, 0);
						break;
					
					case joaat("mpsv_lp0_31"):
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_053", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 80:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_054", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 81:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_055", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 82:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_056", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 83:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_058", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 84:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_067", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 85:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_068", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 92:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_051", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 87:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_000", "torsoDecal", iParam2, round((to_float(100) * Global_262145.f_2978)), 0);
						break;
					
					case 88:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_001", "torsoDecal", iParam2, round((to_float(100) * Global_262145.f_2979)), 0);
						break;
					
					case 89:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_002", "torsoDecal", iParam2, round((to_float(100) * Global_262145.f_2980)), 0);
						break;
					
					case 93:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 94:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_002", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 95:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_003", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 96:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_004", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 97:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_005", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 98:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_006", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 99:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_007", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 100:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_008", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 101:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_009", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 102:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_010", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 103:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_011", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 104:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_012", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 105:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_013", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 106:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_014", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 107:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_015", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 108:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 109:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 110:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 111:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 112:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 113:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 114:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 115:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 116:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 117:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 118:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 119:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 120:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 121:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 122:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 123:
						func_101(sParam0, iParam1, iParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 13:
						func_101(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_A", "crewLogo", iParam2, round((to_float(5000) * Global_262145.f_2927)), 0);
						break;
					
					case 14:
						func_101(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_B", "crewLogo", iParam2, round((to_float(5000) * Global_262145.f_2928)), 0);
						break;
					
					case 15:
						func_101(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_C", "crewLogo", iParam2, round((to_float(10000) * Global_262145.f_2929)), 2);
						break;
					
					case 16:
						func_101(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_D", "crewLogo", iParam2, round((to_float(10000) * Global_262145.f_2930)), 0);
						break;
					}
			}
			break;
	}
	if ((iParam2 == 3 || iParam2 == 4) && iParam1 >= 129)
	{
		func_98(sParam0, iParam2, iParam1, 129);
	}
	if (iParam4 == 22)
	{
		sParam0->f_7 *= 2;
	}
	return sParam0->f_11 != -1;
}

void func_98(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	
	iVar0 = (iParam2 - iParam3);
	iVar1 = unk_0x534A9B3C6415526C(iParam1);
	if (iVar1 > 0 && iVar0 < iVar1)
	{
		if (unk_0x37A11A039E429460(iParam1, iVar0, &Var2))
		{
			if (!unk_0xD1ABD511D9C326A3(Var2))
			{
				sParam0->f_11 = iParam2;
				MemCopy(sParam0, {Var2.f_7}, 4);
				sParam0->f_5 = Var2.f_3;
				sParam0->f_4 = Var2.f_2;
				sParam0->f_8 = Var2.f_6;
				sParam0->f_6 = iParam1;
				sParam0->f_7 = Var2.f_4;
				sParam0->f_9 = (iParam2 / 32);
				sParam0->f_10 = (iParam2 % 32);
				sParam0->f_12 = Var2.f_5;
			}
		}
	}
}

int func_99()
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	
	if (unk_0x234B68AC2E35ED5A(Global_25, 5))
	{
		if (unk_0x234B68AC2E35ED5A(Global_25, 1) || unk_0x234B68AC2E35ED5A(Global_25, 3))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xD885BEFA31A18D47(joaat("sp_unlock_exclus_content"), &uVar0, -1))
	{
		if (unk_0x234B68AC2E35ED5A(uVar0, 5))
		{
			if (unk_0x234B68AC2E35ED5A(iVar0, 1) || unk_0x234B68AC2E35ED5A(iVar0, 3))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (unk_0x5F80FF59AFD5E62D(0))
	{
		if (Global_151131.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (unk_0xD885BEFA31A18D47(iVar2, &uVar1, -1))
			{
				if (unk_0x234B68AC2E35ED5A(uVar1, 5))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0xF7701A907195ED86())
	{
		uVar3 = unk_0xC82CD1DB42480082(866);
		if (unk_0x234B68AC2E35ED5A(uVar3, 1) || unk_0x234B68AC2E35ED5A(iVar3, 3))
		{
			return 1;
		}
	}
	if (unk_0xB2EC8B4970766623())
	{
		if (unk_0x1D0F0A8090E1551E())
		{
			if (unk_0xBF892E860FFE77C6())
			{
				unk_0xD885BEFA31A18D47(joaat("sp_unlock_exclus_content"), &uVar4, -1);
				unk_0x191DDA30577F440A(&uVar4, 1);
				unk_0x191DDA30577F440A(&uVar4, 3);
				unk_0x191DDA30577F440A(&uVar4, 5);
				unk_0x191DDA30577F440A(&Global_25, 1);
				unk_0x191DDA30577F440A(&Global_25, 3);
				unk_0x191DDA30577F440A(&Global_25, 5);
				unk_0xAC4FD27671081628(joaat("sp_unlock_exclus_content"), uVar4, 1);
				if (unk_0xF7701A907195ED86())
				{
					iVar4 = unk_0xC82CD1DB42480082(866);
					unk_0x191DDA30577F440A(&iVar4, 1);
					unk_0x191DDA30577F440A(&iVar4, 3);
					unk_0x0E32F508F8A14DE9(iVar4);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_100()
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	
	if (unk_0x234B68AC2E35ED5A(Global_25, 6))
	{
		if (unk_0x234B68AC2E35ED5A(Global_25, 2) || unk_0x234B68AC2E35ED5A(Global_25, 4))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xD885BEFA31A18D47(joaat("sp_unlock_exclus_content"), &uVar0, -1))
	{
		if (unk_0x234B68AC2E35ED5A(uVar0, 6))
		{
			if (unk_0x234B68AC2E35ED5A(iVar0, 2) || unk_0x234B68AC2E35ED5A(iVar0, 4))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (unk_0x5F80FF59AFD5E62D(0))
	{
		if (Global_151131.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (unk_0xD885BEFA31A18D47(iVar2, &uVar1, -1))
			{
				if (unk_0x234B68AC2E35ED5A(uVar1, 8))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0xF7701A907195ED86())
	{
		uVar3 = unk_0xC82CD1DB42480082(866);
		if (unk_0x234B68AC2E35ED5A(uVar3, 2) || unk_0x234B68AC2E35ED5A(iVar3, 4))
		{
			return 1;
		}
	}
	return 0;
}

void func_101(char* sParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7, int iParam8, int iParam9)
{
	char cVar0[32];
	
	sParam0->f_11 = iParam1;
	StringCopy(sParam0, sParam3, 16);
	sParam0->f_4 = unk_0x15173FB88ABC94F9(sParam4);
	sParam0->f_5 = unk_0x15173FB88ABC94F9(sParam5);
	sParam0->f_8 = unk_0x15173FB88ABC94F9(sParam6);
	sParam0->f_6 = iParam7;
	sParam0->f_7 = iParam8;
	sParam0->f_9 = (iParam1 / 32);
	sParam0->f_10 = (iParam1 % 32);
	sParam0->f_12 = iParam9;
	if (unk_0x419E13582192CFEA(iParam2) && !unk_0xECEC7528A52B4EE8(iParam2))
	{
		if ((sParam0->f_6 == 0 || sParam0->f_6 == 1) || sParam0->f_6 == 2)
		{
		}
		else if (sParam0->f_6 == 3 || sParam0->f_6 == 4)
		{
			StringCopy(&cVar0, "", 32);
			if (((((sParam0->f_11 == 13 || sParam0->f_11 == 14) || sParam0->f_11 == 15) || sParam0->f_11 == 16) || sParam0->f_11 == 71) || sParam0->f_11 == 72)
			{
				StringConCat(&cVar0, "FM_", 32);
				StringConCat(&cVar0, "CREW_", 32);
				if (unk_0x6471F4759775FCA4(iParam2) == joaat("mp_m_freemode_01"))
				{
					StringConCat(&cVar0, "M_", 32);
				}
				else
				{
					StringConCat(&cVar0, "F_", 32);
				}
				StringConCat(&cVar0, sParam5, 32);
			}
			else if (unk_0xDA654EB115F9FF7D(sParam6, "torsoDecal") || unk_0xDA654EB115F9FF7D(sParam6, "hairOverlay"))
			{
				StringCopy(&cVar0, sParam5, 32);
			}
			else
			{
				if (((((((((((((((((((sParam0->f_11 == 0 || sParam0->f_11 == 1) || sParam0->f_11 == 2) || sParam0->f_11 == 4) || sParam0->f_11 == 3) || sParam0->f_11 == 54) || sParam0->f_11 == 5) || sParam0->f_11 == 6) || sParam0->f_11 == 55) || sParam0->f_11 == 7) || sParam0->f_11 == 8) || sParam0->f_11 == 9) || sParam0->f_11 == 10) || sParam0->f_11 == 11) || sParam0->f_11 == 56) || sParam0->f_11 == 12) || sParam0->f_11 == 57) || sParam0->f_11 == 58) || sParam0->f_11 == 59) || sParam0->f_11 == 60)
				{
					StringConCat(&cVar0, "FM_Tat_Award_", 32);
				}
				else
				{
					StringConCat(&cVar0, "FM_Tat_", 32);
				}
				if (unk_0x6471F4759775FCA4(iParam2) == joaat("mp_m_freemode_01") || sParam0->f_11 == 20)
				{
					StringConCat(&cVar0, "M_", 32);
				}
				else
				{
					StringConCat(&cVar0, "F_", 32);
				}
				StringConCat(&cVar0, sParam5, 32);
			}
			sParam0->f_5 = unk_0x15173FB88ABC94F9(&cVar0);
			if (unk_0x3FCD41FDB4395083(sParam0->f_4, sParam0->f_5) == 7)
			{
				sParam0->f_11 = -1;
			}
		}
	}
}

int func_102()
{
	func_103();
	return Global_112293.f_2361.f_539.f_4321;
}

void func_103()
{
	int iVar0;
	
	if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()))
	{
		if (func_132(Global_112293.f_2361.f_539.f_4321) != unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()))
		{
			iVar0 = func_105(unk_0x7D2B9E6A64637269());
			if (func_104(iVar0) && (!func_17(14) || Global_111244))
			{
				if (Global_112293.f_2361.f_539.f_4321 != iVar0 && func_104(Global_112293.f_2361.f_539.f_4321))
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

bool func_104(int iParam0)
{
	return iParam0 < 3;
}

int func_105(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x419E13582192CFEA(iParam0))
	{
		iVar1 = unk_0x6471F4759775FCA4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_132(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_106()
{
	if (func_107(0))
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

bool func_107(bool bParam0)
{
	if (!bParam0 && unk_0x636F1F53CC61D2C9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x234B68AC2E35ED5A(Global_77496, 0);
}

int func_108(int iParam0)
{
	switch (iParam0)
	{
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 17:
		case 22:
		case 21:
		case 113:
		case 162:
		case 163:
		case 177:
		case 188:
		case 199:
		case 200:
		case 215:
		case 257:
		case 253:
			return 1;
		
		case 20:
		case 19:
		case 15:
		case 16:
		case 164:
		case 185:
		case 187:
		case 217:
		case 243:
		case 244:
		case 254:
			return 3;
		
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
		case 102:
		case 173:
		case 201:
		case 224:
		case 258:
		case 533:
		case 525:
			return 2;
		
		default:
	}
	return 0;
}

int func_109(int iParam0)
{
	switch (iParam0)
	{
		case joaat("ztype"):
			return 0;
		
		case joaat("stinger"):
			return 1;
		
		case joaat("jb700"):
			return 2;
		
		case joaat("cheetah"):
			return 3;
		
		case joaat("entityxf"):
			return 4;
		
		case joaat("adder"):
			return 5;
		
		case joaat("monroe"):
			return 6;
		
		case joaat("cogcabrio"):
			return 7;
		
		case joaat("shamal"):
			return 10;
		
		case joaat("stunt"):
			return 11;
		
		case joaat("cuban800"):
			return 12;
		
		case joaat("duster"):
			return 13;
		
		case joaat("luxor"):
			return 14;
		
		case joaat("frogger"):
			return 15;
		
		case joaat("maverick"):
			return 16;
		
		case joaat("rhino"):
			return 17;
		
		case joaat("titan"):
			return 18;
		
		case joaat("cargobob"):
			return 19;
		
		case joaat("buzzard"):
			return 20;
		
		case joaat("crusader"):
			return 21;
		
		case joaat("barracks"):
			return 22;
		
		case joaat("marquis"):
			return 24;
		
		case joaat("jetmax"):
			return 25;
		
		case joaat("squalo"):
			return 27;
		
		case joaat("tropic"):
			return 29;
		
		case joaat("seashark"):
			return 30;
		
		case joaat("submersible"):
			return 31;
		
		case joaat("suntrap"):
			return 32;
		
		case joaat("tug"):
			return 258;
		
		case joaat("bmx"):
			return 33;
		
		case joaat("scorcher"):
			return 34;
		
		case joaat("tribike"):
			return 35;
		
		case joaat("tribike2"):
			return 36;
		
		case joaat("tribike3"):
			return 37;
		
		case joaat("cruiser"):
			return 38;
		
		case joaat("schwarzer"):
			return 39;
		
		case joaat("zion"):
			return 40;
		
		case joaat("gauntlet"):
			return 41;
		
		case joaat("vigero"):
			return 42;
		
		case joaat("issi2"):
			return 43;
		
		case joaat("infernus"):
			return 44;
		
		case joaat("surano"):
			return 45;
		
		case joaat("vacca"):
			return 46;
		
		case joaat("ninef"):
			return 47;
		
		case joaat("comet2"):
			return 48;
		
		case joaat("banshee"):
			return 49;
		
		case joaat("feltzer2"):
			return 50;
		
		case joaat("bfinjection"):
			return 51;
		
		case joaat("sandking"):
			return 52;
		
		case joaat("fugitive"):
			return 53;
		
		case joaat("dilettante"):
			return 54;
		
		case joaat("superd"):
			return 55;
		
		case joaat("exemplar"):
			return 56;
		
		case joaat("baller2"):
			return 57;
		
		case joaat("cavalcade"):
			return 58;
		
		case joaat("rocoto"):
			return 59;
		
		case joaat("felon"):
			return 60;
		
		case joaat("oracle2"):
			return 61;
		
		case joaat("bati"):
			return 62;
		
		case joaat("akuma"):
			return 63;
		
		case joaat("ruffian"):
			return 64;
		
		case joaat("vader"):
			return 65;
		
		case joaat("blazer"):
			return 66;
		
		case joaat("pcj"):
			return 67;
		
		case joaat("sanchez"):
			return 68;
		
		case joaat("faggio2"):
			return 69;
		
		case joaat("airbus"):
			return 82;
		
		case joaat("annihilator"):
			return 78;
		
		case joaat("bati2"):
			return 94;
		
		case joaat("bison"):
			return 89;
		
		case joaat("bullet"):
			return 70;
		
		case joaat("bus"):
			return 83;
		
		case joaat("carbonizzare"):
			return 71;
		
		case joaat("coach"):
			return 84;
		
		case joaat("coquette"):
			return 72;
		
		case joaat("double"):
			return 90;
		
		case joaat("dump"):
			return 81;
		
		case joaat("felon2"):
			return 91;
		
		case joaat("hexer"):
			return 92;
		
		case joaat("journey"):
			return 85;
		
		case joaat("mammatus"):
			return 79;
		
		case joaat("mule"):
			return 86;
		
		case joaat("ninef2"):
			return 73;
		
		case joaat("rapidgt"):
			return 74;
		
		case joaat("rapidgt2"):
			return 75;
		
		case joaat("rentalbus"):
			return 87;
		
		case joaat("stingergt"):
			return 76;
		
		case joaat("stretch"):
			return 88;
		
		case joaat("velum"):
			return 80;
		
		case joaat("voltic"):
			return 77;
		
		case joaat("zion2"):
			return 93;
		
		case joaat("elegy2"):
			return 95;
		
		case joaat("khamelion"):
			return 96;
		
		case joaat("hotknife"):
			return 97;
		
		case joaat("carbonrs"):
			return 98;
		
		case joaat("bodhi2"):
			return 103;
		
		case joaat("dune"):
			return 104;
		
		case joaat("rebel"):
			return 105;
		
		case joaat("sadler"):
			return 106;
		
		case joaat("sanchez2"):
			return 107;
		
		case joaat("sandking2"):
			return 108;
		
		case joaat("asea"):
			return 128;
		
		case joaat("asterope"):
			return 129;
		
		case joaat("bobcatxl"):
			return 130;
		
		case joaat("cavalcade2"):
			return 131;
		
		case joaat("granger"):
			return 132;
		
		case joaat("ingot"):
			return 133;
		
		case joaat("intruder"):
			return 134;
		
		case joaat("minivan"):
			return 135;
		
		case joaat("premier"):
			return 136;
		
		case joaat("radi"):
			return 137;
		
		case joaat("rancherxl"):
			return 138;
		
		case joaat("ratloader"):
			return 139;
		
		case joaat("stanier"):
			return 140;
		
		case joaat("stratum"):
			return 141;
		
		case joaat("washington"):
			return 142;
		
		case joaat("dominator"):
			return 122;
		
		case joaat("f620"):
			return 123;
		
		case joaat("fusilade"):
			return 124;
		
		case joaat("penumbra"):
			return 125;
		
		case joaat("sentinel"):
			return 126;
		
		case joaat("sentinel2"):
			return 127;
		
		case joaat("picador"):
			return 150;
		
		case joaat("regina"):
			return 151;
		
		case joaat("surfer"):
			return 152;
		
		case joaat("youga"):
			return 153;
		
		case joaat("blazer3"):
			return 154;
		
		case joaat("rebel2"):
			return 155;
		
		case joaat("primo"):
			return 156;
		
		case joaat("buffalo"):
			return 157;
		
		case joaat("buffalo2"):
			return 158;
		
		case joaat("tailgater"):
			return 159;
		
		default:
	}
	if (iParam0 == joaat("bifta"))
	{
		return 99;
	}
	else if (iParam0 == joaat("kalahari"))
	{
		return 100;
	}
	else if (iParam0 == joaat("paradise"))
	{
		return 101;
	}
	else if (iParam0 == joaat("speeder"))
	{
		return 102;
	}
	else if (iParam0 == joaat("ROOSEVELT") || iParam0 == joaat("btype"))
	{
		return 109;
	}
	else if (iParam0 == joaat("jester"))
	{
		return 111;
	}
	else if (iParam0 == joaat("massacro"))
	{
		return 114;
	}
	else if (iParam0 == joaat("turismor"))
	{
		return 112;
	}
	else if (iParam0 == joaat("zentorno"))
	{
		return 115;
	}
	else if (iParam0 == joaat("huntley"))
	{
		return 116;
	}
	else if (iParam0 == joaat("alpha"))
	{
		return 110;
	}
	else if (iParam0 == joaat("vestra"))
	{
		return 113;
	}
	else if (iParam0 == joaat("coquette"))
	{
		return 117;
	}
	else if (iParam0 == joaat("banshee"))
	{
		return 118;
	}
	else if (iParam0 == joaat("stinger"))
	{
		return 119;
	}
	else if (iParam0 == joaat("voltic"))
	{
		return 120;
	}
	else if (iParam0 == joaat("thrust"))
	{
		return 121;
	}
	else if (iParam0 == joaat("blade"))
	{
		return 143;
	}
	else if (iParam0 == joaat("warrener"))
	{
		return 144;
	}
	else if (iParam0 == joaat("glendale"))
	{
		return 145;
	}
	else if (iParam0 == joaat("rhapsody"))
	{
		return 146;
	}
	else if (iParam0 == joaat("panto"))
	{
		return 147;
	}
	else if (iParam0 == joaat("dubsta3"))
	{
		return 148;
	}
	else if (iParam0 == joaat("pigalle"))
	{
		return 149;
	}
	else if (iParam0 == joaat("monster"))
	{
		return 160;
	}
	else if (iParam0 == joaat("sovereign"))
	{
		return 161;
	}
	else if (iParam0 == joaat("miljet"))
	{
		return 162;
	}
	else if (iParam0 == joaat("besra"))
	{
		return 163;
	}
	else if (iParam0 == joaat("swift"))
	{
		return 164;
	}
	else if (iParam0 == joaat("coquette2"))
	{
		return 165;
	}
	else if (iParam0 == joaat("coquette2"))
	{
		return 166;
	}
	else if (iParam0 == joaat("innovation"))
	{
		return 167;
	}
	else if (iParam0 == joaat("hakuchou"))
	{
		return 168;
	}
	else if (iParam0 == joaat("furoregt"))
	{
		return 169;
	}
	else if (iParam0 == joaat("kalahari"))
	{
		return 170;
	}
	else if (iParam0 == joaat("valkyrie"))
	{
		return 187;
	}
	else if (iParam0 == joaat("hydra"))
	{
		return 177;
	}
	else if (iParam0 == joaat("savage"))
	{
		return 185;
	}
	else if (iParam0 == joaat("enduro"))
	{
		return 174;
	}
	else if (iParam0 == joaat("boxville4"))
	{
		return 171;
	}
	else if (iParam0 == joaat("casco"))
	{
		return 172;
	}
	else if (iParam0 == joaat("dinghy3"))
	{
		return 173;
	}
	else if (iParam0 == joaat("gburrito2"))
	{
		return 175;
	}
	else if (iParam0 == joaat("guardian"))
	{
		return 176;
	}
	else if (iParam0 == joaat("insurgent"))
	{
		return 178;
	}
	else if (iParam0 == joaat("mule3"))
	{
		return 183;
	}
	else if (iParam0 == joaat("insurgent2"))
	{
		return 179;
	}
	else if (iParam0 == joaat("lectro"))
	{
		return 182;
	}
	else if (iParam0 == joaat("pbus"))
	{
		return 184;
	}
	else if (iParam0 == joaat("technical"))
	{
		return 186;
	}
	else if (iParam0 == joaat("velum2"))
	{
		return 188;
	}
	else if (iParam0 == joaat("gresley"))
	{
		return 189;
	}
	else if (iParam0 == joaat("jackal"))
	{
		return 190;
	}
	else if (iParam0 == joaat("kuruma"))
	{
		return 180;
	}
	else if (iParam0 == joaat("kuruma2"))
	{
		return 181;
	}
	else if (iParam0 == joaat("landstalker"))
	{
		return 191;
	}
	else if (iParam0 == joaat("mesa3"))
	{
		return 192;
	}
	else if (iParam0 == joaat("nemesis"))
	{
		return 193;
	}
	else if (iParam0 == joaat("oracle"))
	{
		return 194;
	}
	else if (iParam0 == joaat("rumpo"))
	{
		return 195;
	}
	else if (iParam0 == joaat("schafter2"))
	{
		return 196;
	}
	else if (iParam0 == joaat("seminole"))
	{
		return 197;
	}
	else if (iParam0 == joaat("surge"))
	{
		return 198;
	}
	else if (iParam0 == joaat("dodo"))
	{
		return 199;
	}
	else if (iParam0 == joaat("marshall"))
	{
		return 200;
	}
	else if (iParam0 == joaat("submersible2"))
	{
		return 201;
	}
	else if (iParam0 == joaat("blista2"))
	{
		return 202;
	}
	else if (iParam0 == joaat("stalion"))
	{
		return 203;
	}
	else if (iParam0 == joaat("dukes"))
	{
		return 204;
	}
	else if (iParam0 == joaat("dukes2"))
	{
		return 205;
	}
	else if (iParam0 == joaat("stalion2"))
	{
		return 206;
	}
	else if (iParam0 == joaat("dominator2"))
	{
		return 207;
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		return 208;
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		return 209;
	}
	else if (iParam0 == joaat("slamvan"))
	{
		return 210;
	}
	else if (iParam0 == joaat("ratloader2"))
	{
		return 211;
	}
	else if (iParam0 == joaat("jester2"))
	{
		return 212;
	}
	else if (iParam0 == joaat("massacro2"))
	{
		return 213;
	}
	else if (iParam0 == joaat("feltzer3"))
	{
		return 214;
	}
	else if (iParam0 == joaat("luxor2"))
	{
		return 215;
	}
	else if (iParam0 == joaat("osiris"))
	{
		return 216;
	}
	else if (iParam0 == joaat("swift2"))
	{
		return 217;
	}
	else if (iParam0 == joaat("virgo"))
	{
		return 218;
	}
	else if (iParam0 == joaat("windsor"))
	{
		return 219;
	}
	else if (iParam0 == joaat("brawler"))
	{
		return 220;
	}
	else if (iParam0 == joaat("chino"))
	{
		return 221;
	}
	else if (iParam0 == joaat("coquette3"))
	{
		return 222;
	}
	else if (iParam0 == joaat("t20"))
	{
		return 223;
	}
	else if (iParam0 == joaat("toro"))
	{
		return 224;
	}
	else if (iParam0 == joaat("vindicator"))
	{
		return 225;
	}
	else if (iParam0 == joaat("primo"))
	{
		return 229;
	}
	else if (iParam0 == joaat("moonbeam"))
	{
		return 228;
	}
	else if (iParam0 == joaat("faction"))
	{
		return 227;
	}
	else if (iParam0 == joaat("buccaneer"))
	{
		return 226;
	}
	else if (iParam0 == joaat("voodoo2"))
	{
		return 230;
	}
	else if (iParam0 == joaat("btype2"))
	{
		return 231;
	}
	else if (iParam0 == joaat("lurcher"))
	{
		return 232;
	}
	else if (iParam0 == joaat("minivan"))
	{
		return 135;
	}
	else if (iParam0 == joaat("virgo3"))
	{
		return 251;
	}
	else if (iParam0 == joaat("tornado"))
	{
		return 250;
	}
	else if (iParam0 == joaat("sabregt"))
	{
		return 249;
	}
	else if (iParam0 == joaat("slamvan"))
	{
		return 210;
	}
	else if (iParam0 == joaat("faction"))
	{
		return 252;
	}
	else if (iParam0 == joaat("baller3") || iParam0 == joaat("baller5"))
	{
		return 233;
	}
	else if (iParam0 == joaat("baller4") || iParam0 == joaat("baller6"))
	{
		return 234;
	}
	else if (iParam0 == joaat("cog55"))
	{
		return 235;
	}
	else if (iParam0 == joaat("cognoscenti"))
	{
		return 236;
	}
	else if (iParam0 == joaat("limo2"))
	{
		return 237;
	}
	else if (iParam0 == joaat("mamba"))
	{
		return 238;
	}
	else if (iParam0 == joaat("nightshade"))
	{
		return 239;
	}
	else if (iParam0 == joaat("schafter3") || iParam0 == joaat("schafter5"))
	{
		return 240;
	}
	else if (iParam0 == joaat("schafter4") || iParam0 == joaat("schafter6"))
	{
		return 241;
	}
	else if (iParam0 == joaat("verlierer2"))
	{
		return 242;
	}
	else if (iParam0 == joaat("supervolito"))
	{
		return 243;
	}
	else if (iParam0 == joaat("supervolito2"))
	{
		return 244;
	}
	else if (iParam0 == Global_74390)
	{
		return 245;
	}
	else if (iParam0 == joaat("tampa"))
	{
		return 246;
	}
	else if (iParam0 == joaat("sultan"))
	{
		return 247;
	}
	else if (iParam0 == joaat("banshee"))
	{
		return 49;
	}
	else if (iParam0 == joaat("ROOSEVELT2") || iParam0 == joaat("btype3"))
	{
		return 248;
	}
	else if (iParam0 == joaat("volatus"))
	{
		return 253;
	}
	else if (iParam0 == joaat("cargobob2"))
	{
		return 254;
	}
	else if (iParam0 == joaat("rumpo3"))
	{
		return 255;
	}
	else if (iParam0 == joaat("brickade"))
	{
		return 256;
	}
	else if (iParam0 == joaat("nimbus"))
	{
		return 257;
	}
	else if (iParam0 == joaat("windsor2"))
	{
		return 259;
	}
	else if (iParam0 == joaat("prototipo"))
	{
		return 260;
	}
	else if (iParam0 == joaat("fmj"))
	{
		return 261;
	}
	else if (iParam0 == joaat("bestiagts"))
	{
		return 262;
	}
	else if (iParam0 == joaat("xls") || iParam0 == joaat("xls2"))
	{
		return 263;
	}
	else if (iParam0 == joaat("seven70"))
	{
		return 264;
	}
	else if (iParam0 == joaat("pfister811"))
	{
		return 265;
	}
	else if (iParam0 == joaat("reaper"))
	{
		return 266;
	}
	else if (iParam0 == joaat("le7b"))
	{
		return 267;
	}
	else if (iParam0 == joaat("omnis"))
	{
		return 268;
	}
	else if (iParam0 == joaat("tropos"))
	{
		return 269;
	}
	else if (iParam0 == joaat("brioso"))
	{
		return 270;
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		return 271;
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		return 272;
	}
	else if (iParam0 == joaat("contender"))
	{
		return 273;
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		return 274;
	}
	else if (iParam0 == joaat("bf400"))
	{
		return 275;
	}
	else if (iParam0 == joaat("tyrus"))
	{
		return 279;
	}
	else if (iParam0 == joaat("lynx"))
	{
		return 280;
	}
	else if (iParam0 == joaat("sheava"))
	{
		return 281;
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		return 276;
	}
	else if (iParam0 == joaat("tampa2"))
	{
		return 277;
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		return 278;
	}
	else if (iParam0 == joaat("bagger"))
	{
		return 282;
	}
	else if (iParam0 == joaat("esskey"))
	{
		return 283;
	}
	else if (iParam0 == joaat("nightblade"))
	{
		return 284;
	}
	else if (iParam0 == joaat("defiler"))
	{
		return 285;
	}
	else if (iParam0 == joaat("avarus"))
	{
		return 286;
	}
	else if (iParam0 == joaat("zombiea"))
	{
		return 287;
	}
	else if (iParam0 == joaat("zombieb"))
	{
		return 288;
	}
	else if (iParam0 == joaat("chimera"))
	{
		return 289;
	}
	else if (iParam0 == joaat("daemon2"))
	{
		return 290;
	}
	else if (iParam0 == joaat("ratbike"))
	{
		return 291;
	}
	else if (iParam0 == joaat("shotaro"))
	{
		return 292;
	}
	else if (iParam0 == joaat("raptor"))
	{
		return 293;
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		return 294;
	}
	else if (iParam0 == joaat("blazer4"))
	{
		return 296;
	}
	else if (iParam0 == joaat("sanctus"))
	{
		return 297;
	}
	else if (iParam0 == joaat("vortex"))
	{
		return 295;
	}
	else if (iParam0 == joaat("manchez"))
	{
		return 298;
	}
	else if (iParam0 == joaat("tornado6"))
	{
		return 299;
	}
	else if (iParam0 == joaat("youga2"))
	{
		return 300;
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		return 301;
	}
	else if (iParam0 == joaat("faggio3"))
	{
		return 302;
	}
	else if (iParam0 == joaat("faggio"))
	{
		return 303;
	}
	else if (iParam0 == joaat("dune5"))
	{
		return 304;
	}
	else if (iParam0 == joaat("phantom2"))
	{
		return 305;
	}
	else if (iParam0 == joaat("technical2"))
	{
		return 306;
	}
	else if (iParam0 == joaat("blazer5"))
	{
		return 307;
	}
	else if (iParam0 == joaat("boxville5"))
	{
		return 308;
	}
	else if (iParam0 == joaat("wastelander"))
	{
		return 309;
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		return 310;
	}
	else if (iParam0 == joaat("voltic2"))
	{
		return 311;
	}
	else if (iParam0 == joaat("penetrator"))
	{
		return 312;
	}
	else if (iParam0 == joaat("tempesta"))
	{
		return 313;
	}
	else if (iParam0 == joaat("italigtb"))
	{
		return 314;
	}
	else if (iParam0 == joaat("nero"))
	{
		return 315;
	}
	else if (iParam0 == joaat("diablous"))
	{
		return 316;
	}
	else if (iParam0 == joaat("fcr"))
	{
		return 317;
	}
	else if (iParam0 == joaat("specter"))
	{
		return 318;
	}
	else if (iParam0 == joaat("gp1"))
	{
		return 319;
	}
	else if (iParam0 == joaat("infernus2"))
	{
		return 320;
	}
	else if (iParam0 == joaat("ruston"))
	{
		return 321;
	}
	else if (iParam0 == joaat("turismo2"))
	{
		return 322;
	}
	else if (iParam0 == Global_74390)
	{
		return 245;
	}
	else if (iParam0 == Global_74392)
	{
		return 324;
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		return 325;
	}
	else if (iParam0 == joaat("torero"))
	{
		return 326;
	}
	else if (iParam0 == joaat("vagner"))
	{
		return 327;
	}
	else if (iParam0 == joaat("xa21"))
	{
		return 328;
	}
	else if (iParam0 == joaat("apc"))
	{
		return 329;
	}
	else if (iParam0 == joaat("dune3"))
	{
		return 330;
	}
	else if (iParam0 == joaat("halftrack"))
	{
		return 331;
	}
	else if (iParam0 == joaat("oppressor"))
	{
		return 332;
	}
	else if (iParam0 == joaat("tampa3"))
	{
		return 333;
	}
	else if (iParam0 == joaat("trailersmall2"))
	{
		return 334;
	}
	else if (iParam0 == joaat("ardent"))
	{
		return 335;
	}
	else if (iParam0 == joaat("nightshark"))
	{
		return 336;
	}
	else if (iParam0 == joaat("lazer"))
	{
		return 337;
	}
	else if (iParam0 == joaat("microlight"))
	{
		return 338;
	}
	else if (iParam0 == joaat("mogul"))
	{
		return 339;
	}
	else if (iParam0 == joaat("rogue"))
	{
		return 340;
	}
	else if (iParam0 == joaat("starling"))
	{
		return 341;
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		return 342;
	}
	else if (iParam0 == joaat("tula"))
	{
		return 343;
	}
	else if (iParam0 == joaat("pyro"))
	{
		return 344;
	}
	else if (iParam0 == joaat("molotok"))
	{
		return 345;
	}
	else if (iParam0 == joaat("nokota"))
	{
		return 346;
	}
	else if (iParam0 == joaat("bombushka"))
	{
		return 347;
	}
	else if (iParam0 == joaat("hunter"))
	{
		return 348;
	}
	else if (iParam0 == joaat("havok"))
	{
		return 349;
	}
	else if (iParam0 == joaat("howard"))
	{
		return 350;
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		return 351;
	}
	else if (iParam0 == joaat("cyclone"))
	{
		return 352;
	}
	else if (iParam0 == joaat("visione"))
	{
		return 353;
	}
	else if (iParam0 == joaat("retinue"))
	{
		return 354;
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		return 355;
	}
	else if (iParam0 == joaat("vigilante"))
	{
		return 356;
	}
	else if (iParam0 == joaat("deluxo"))
	{
		return 358;
	}
	else if (iParam0 == joaat("stromberg"))
	{
		return 359;
	}
	else if (iParam0 == joaat("riot2"))
	{
		return 360;
	}
	else if (iParam0 == joaat("chernobog"))
	{
		return 361;
	}
	else if (iParam0 == joaat("khanjali"))
	{
		return 362;
	}
	else if (iParam0 == joaat("akula"))
	{
		return 363;
	}
	else if (iParam0 == joaat("thruster"))
	{
		return 364;
	}
	else if (iParam0 == joaat("barrage"))
	{
		return 365;
	}
	else if (iParam0 == joaat("volatol"))
	{
		return 366;
	}
	else if (iParam0 == joaat("comet4"))
	{
		return 367;
	}
	else if (iParam0 == joaat("neon"))
	{
		return 368;
	}
	else if (iParam0 == joaat("streiter"))
	{
		return 369;
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		return 370;
	}
	else if (iParam0 == joaat("yosemite"))
	{
		return 371;
	}
	else if (iParam0 == joaat("sc1"))
	{
		return 372;
	}
	else if (iParam0 == joaat("autarch"))
	{
		return 373;
	}
	else if (iParam0 == joaat("gt500"))
	{
		return 374;
	}
	else if (iParam0 == joaat("hustler"))
	{
		return 375;
	}
	else if (iParam0 == joaat("revolter"))
	{
		return 376;
	}
	else if (iParam0 == joaat("pariah"))
	{
		return 377;
	}
	else if (iParam0 == joaat("raiden"))
	{
		return 378;
	}
	else if (iParam0 == joaat("savestra"))
	{
		return 379;
	}
	else if (iParam0 == joaat("riata"))
	{
		return 380;
	}
	else if (iParam0 == joaat("hermes"))
	{
		return 381;
	}
	else if (iParam0 == joaat("comet5"))
	{
		return 382;
	}
	else if (iParam0 == joaat("z190"))
	{
		return 383;
	}
	else if (iParam0 == joaat("viseris"))
	{
		return 384;
	}
	else if (iParam0 == joaat("kamacho"))
	{
		return 385;
	}
	else if (iParam0 == joaat("gb200"))
	{
		return 386;
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		return 387;
	}
	else if (iParam0 == joaat("ellie"))
	{
		return 388;
	}
	else if (iParam0 == joaat("issi3"))
	{
		return 389;
	}
	else if (iParam0 == joaat("michelli"))
	{
		return 390;
	}
	else if (iParam0 == joaat("flashgt"))
	{
		return 391;
	}
	else if (iParam0 == joaat("hotring"))
	{
		return 392;
	}
	else if (iParam0 == joaat("tezeract"))
	{
		return 393;
	}
	else if (iParam0 == joaat("tyrant"))
	{
		return 394;
	}
	else if (iParam0 == joaat("dominator3"))
	{
		return 395;
	}
	else if (iParam0 == joaat("taipan"))
	{
		return 396;
	}
	else if (iParam0 == joaat("entity2"))
	{
		return 397;
	}
	else if (iParam0 == joaat("jester3"))
	{
		return 398;
	}
	else if (iParam0 == joaat("cheburek"))
	{
		return 399;
	}
	else if (iParam0 == joaat("caracara"))
	{
		return 400;
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		return 401;
	}
	else if (iParam0 == joaat("mule4"))
	{
		return 403;
	}
	else if (iParam0 == joaat("pounder2"))
	{
		return 404;
	}
	else if (iParam0 == joaat("swinger"))
	{
		return 405;
	}
	else if (iParam0 == joaat("menacer"))
	{
		return 406;
	}
	else if (iParam0 == joaat("scramjet"))
	{
		return 407;
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		return 408;
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		return 409;
	}
	else if (iParam0 == joaat("patriot2"))
	{
		return 410;
	}
	else if (iParam0 == joaat("stafford"))
	{
		return 411;
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		return 412;
	}
	else if (iParam0 == joaat("futo"))
	{
		return 415;
	}
	else if (iParam0 == joaat("ruiner"))
	{
		return 416;
	}
	else if (iParam0 == joaat("romero"))
	{
		return 417;
	}
	else if (iParam0 == joaat("prairie"))
	{
		return 418;
	}
	else if (iParam0 == joaat("baller"))
	{
		return 419;
	}
	else if (iParam0 == joaat("serrano"))
	{
		return 420;
	}
	else if (iParam0 == joaat("bjxl"))
	{
		return 421;
	}
	else if (iParam0 == joaat("habanero"))
	{
		return 422;
	}
	else if (iParam0 == joaat("fq2"))
	{
		return 423;
	}
	else if (iParam0 == joaat("patriot"))
	{
		return 424;
	}
	else if (iParam0 == joaat("blimp3"))
	{
		return 413;
	}
	else if (iParam0 == joaat("pbus2"))
	{
		return 414;
	}
	else if (iParam0 == joaat("cerberus"))
	{
		return 425;
	}
	else if (iParam0 == joaat("cerberus2"))
	{
		return 426;
	}
	else if (iParam0 == joaat("cerberus3"))
	{
		return 427;
	}
	else if (iParam0 == joaat("brutus"))
	{
		return 428;
	}
	else if (iParam0 == joaat("brutus2"))
	{
		return 429;
	}
	else if (iParam0 == joaat("brutus3"))
	{
		return 430;
	}
	else if (iParam0 == joaat("scarab"))
	{
		return 431;
	}
	else if (iParam0 == joaat("scarab2"))
	{
		return 432;
	}
	else if (iParam0 == joaat("scarab3"))
	{
		return 433;
	}
	else if (iParam0 == joaat("imperator"))
	{
		return 434;
	}
	else if (iParam0 == joaat("imperator2"))
	{
		return 435;
	}
	else if (iParam0 == joaat("imperator3"))
	{
		return 436;
	}
	else if (iParam0 == joaat("zr380"))
	{
		return 437;
	}
	else if (iParam0 == joaat("zr3802"))
	{
		return 438;
	}
	else if (iParam0 == joaat("zr3803"))
	{
		return 439;
	}
	else if (iParam0 == joaat("impaler"))
	{
		return 440;
	}
	else if (iParam0 == joaat("taxi"))
	{
		return 450;
	}
	else if (iParam0 == joaat("bulldozer"))
	{
		return 451;
	}
	else if (iParam0 == joaat("speedo2"))
	{
		return 452;
	}
	else if (iParam0 == joaat("trash2"))
	{
		return 453;
	}
	else if (iParam0 == joaat("barracks2"))
	{
		return 454;
	}
	else if (iParam0 == joaat("mixer"))
	{
		return 455;
	}
	else if (iParam0 == joaat("dune2"))
	{
		return 456;
	}
	else if (iParam0 == joaat("tractor"))
	{
		return 457;
	}
	else if (iParam0 == joaat("blista3"))
	{
		return 458;
	}
	else if (iParam0 == joaat("vamos"))
	{
		return 441;
	}
	else if (iParam0 == joaat("tulip"))
	{
		return 442;
	}
	else if (iParam0 == joaat("deveste"))
	{
		return 443;
	}
	else if (iParam0 == joaat("schlagen"))
	{
		return 444;
	}
	else if (iParam0 == joaat("toros"))
	{
		return 445;
	}
	else if (iParam0 == joaat("deviant"))
	{
		return 446;
	}
	else if (iParam0 == joaat("clique"))
	{
		return 447;
	}
	else if (iParam0 == joaat("italigto"))
	{
		return 448;
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		return 449;
	}
	else if (iParam0 == joaat("thrax"))
	{
		return 459;
	}
	else if (iParam0 == joaat("drafter"))
	{
		return 460;
	}
	else if (iParam0 == joaat("locust"))
	{
		return 461;
	}
	else if (iParam0 == joaat("novak"))
	{
		return 462;
	}
	else if (iParam0 == joaat("zorrusso"))
	{
		return 463;
	}
	else if (iParam0 == joaat("gauntlet3"))
	{
		return 464;
	}
	else if (iParam0 == joaat("issi7"))
	{
		return 465;
	}
	else if (iParam0 == joaat("zion3"))
	{
		return 466;
	}
	else if (iParam0 == joaat("nebula"))
	{
		return 467;
	}
	else if (iParam0 == joaat("hellion"))
	{
		return 468;
	}
	else if (iParam0 == joaat("dynasty"))
	{
		return 469;
	}
	else if (iParam0 == joaat("rrocket"))
	{
		return 470;
	}
	else if (iParam0 == joaat("peyote2"))
	{
		return 471;
	}
	else if (iParam0 == joaat("gauntlet4"))
	{
		return 472;
	}
	else if (iParam0 == joaat("caracara2"))
	{
		return 473;
	}
	else if (iParam0 == joaat("jugular"))
	{
		return 474;
	}
	else if (iParam0 == joaat("s80"))
	{
		return 475;
	}
	else if (iParam0 == joaat("krieger"))
	{
		return 476;
	}
	else if (iParam0 == joaat("emerus"))
	{
		return 477;
	}
	else if (iParam0 == joaat("neo"))
	{
		return 478;
	}
	else if (iParam0 == joaat("paragon"))
	{
		return 479;
	}
	else if (iParam0 == joaat("firetruk"))
	{
		return 480;
	}
	else if (iParam0 == joaat("burrito2"))
	{
		return 481;
	}
	else if (iParam0 == joaat("boxville"))
	{
		return 482;
	}
	else if (iParam0 == joaat("stockade"))
	{
		return 483;
	}
	else if (iParam0 == joaat("lguard"))
	{
		return 484;
	}
	else if (iParam0 == joaat("blazer2"))
	{
		return 485;
	}
	else if (iParam0 == joaat("jb7002"))
	{
		return 488;
	}
	else if (iParam0 == joaat("zhaba"))
	{
		return 486;
	}
	else if (iParam0 == joaat("minitank"))
	{
		return 487;
	}
	else if (iParam0 == joaat("stryder"))
	{
		return 489;
	}
	else if (iParam0 == joaat("vstr"))
	{
		return 490;
	}
	else if (iParam0 == joaat("formula"))
	{
		return 491;
	}
	else if (iParam0 == joaat("imorgon"))
	{
		return 492;
	}
	else if (iParam0 == joaat("formula2"))
	{
		return 493;
	}
	else if (iParam0 == joaat("furia"))
	{
		return 494;
	}
	else if (iParam0 == joaat("rebla"))
	{
		return 495;
	}
	else if (iParam0 == joaat("vagrant"))
	{
		return 496;
	}
	else if (iParam0 == joaat("retinue2"))
	{
		return 497;
	}
	else if (iParam0 == joaat("yosemite2"))
	{
		return 498;
	}
	else if (iParam0 == joaat("komoda"))
	{
		return 499;
	}
	else if (iParam0 == joaat("sultan2"))
	{
		return 500;
	}
	else if (iParam0 == joaat("sugoi"))
	{
		return 501;
	}
	else if (iParam0 == joaat("everon"))
	{
		return 502;
	}
	else if (iParam0 == joaat("asbo"))
	{
		return 503;
	}
	else if (iParam0 == joaat("kanjo"))
	{
		return 504;
	}
	else if (iParam0 == joaat("outlaw"))
	{
		return 505;
	}
	else if (iParam0 == joaat("club"))
	{
		return 506;
	}
	else if (iParam0 == joaat("dukes3"))
	{
		return 507;
	}
	else if (iParam0 == joaat("yosemite3"))
	{
		return 508;
	}
	else if (iParam0 == joaat("penumbra2"))
	{
		return 509;
	}
	else if (iParam0 == joaat("landstalker2"))
	{
		return 510;
	}
	else if (iParam0 == joaat("seminole2"))
	{
		return 511;
	}
	else if (iParam0 == joaat("tigon"))
	{
		return 512;
	}
	else if (iParam0 == joaat("openwheel1"))
	{
		return 513;
	}
	else if (iParam0 == joaat("openwheel2"))
	{
		return 514;
	}
	else if (iParam0 == joaat("coquette4"))
	{
		return 515;
	}
	else if (iParam0 == joaat("peyote"))
	{
		return 517;
	}
	else if (iParam0 == joaat("manana"))
	{
		return 516;
	}
	else if (iParam0 == func_110())
	{
		return 518;
	}
	else if (iParam0 == joaat("italirsx"))
	{
		return 519;
	}
	else if (iParam0 == joaat("slamtruck"))
	{
		return 520;
	}
	else if (iParam0 == joaat("brioso2"))
	{
		return 521;
	}
	else if (iParam0 == joaat("weevil"))
	{
		return 522;
	}
	else if (iParam0 == joaat("alkonost"))
	{
		return 523;
	}
	else if (iParam0 == joaat("annihilator2"))
	{
		return 524;
	}
	else if (iParam0 == joaat("dinghy5"))
	{
		return 525;
	}
	else if (iParam0 == joaat("manchez2"))
	{
		return 526;
	}
	else if (iParam0 == joaat("patrolboat"))
	{
		return 527;
	}
	else if (iParam0 == joaat("squaddie"))
	{
		return 528;
	}
	else if (iParam0 == joaat("toreador"))
	{
		return 529;
	}
	else if (iParam0 == joaat("verus"))
	{
		return 530;
	}
	else if (iParam0 == joaat("vetir"))
	{
		return 531;
	}
	else if (iParam0 == joaat("winky"))
	{
		return 532;
	}
	else if (iParam0 == joaat("longfin"))
	{
		return 533;
	}
	else if (iParam0 == joaat("veto"))
	{
		return 534;
	}
	else if (iParam0 == joaat("veto2"))
	{
		return 535;
	}
	else if (iParam0 == joaat("calico"))
	{
		return 536;
	}
	else if (iParam0 == joaat("comet6"))
	{
		return 537;
	}
	else if (iParam0 == joaat("cypher"))
	{
		return 538;
	}
	else if (iParam0 == joaat("dominator7"))
	{
		return 539;
	}
	else if (iParam0 == joaat("jester4"))
	{
		return 540;
	}
	else if (iParam0 == joaat("remus"))
	{
		return 541;
	}
	else if (iParam0 == joaat("vectre"))
	{
		return 542;
	}
	else if (iParam0 == joaat("zr350"))
	{
		return 543;
	}
	else if (iParam0 == joaat("warrener2"))
	{
		return 544;
	}
	else if (iParam0 == joaat("rt3000"))
	{
		return 545;
	}
	else if (iParam0 == joaat("futo2"))
	{
		return 546;
	}
	else if (iParam0 == joaat("sultan3"))
	{
		return 547;
	}
	else if (iParam0 == joaat("tailgater2"))
	{
		return 548;
	}
	else if (iParam0 == joaat("dominator8"))
	{
		return 549;
	}
	else if (iParam0 == joaat("euros"))
	{
		return 550;
	}
	else if (iParam0 == joaat("growler"))
	{
		return 551;
	}
	else if (iParam0 == joaat("previon"))
	{
		return 552;
	}
	return -1;
}

int func_110()
{
	return joaat("kosatka");
}

int func_111(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case joaat("casco"):
		case joaat("enduro"):
		case joaat("gburrito2"):
		case joaat("guardian"):
		case joaat("hydra"):
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("kuruma"):
		case joaat("kuruma2"):
		case joaat("lectro"):
		case joaat("savage"):
		case joaat("technical"):
		case joaat("valkyrie"):
		case joaat("velum2"):
			return 1;
			break;
	}
	iVar0 = iParam0;
	switch (iVar0)
	{
		case joaat("dodo"):
		case joaat("dukes"):
		case joaat("dukes2"):
		case joaat("dominator2"):
		case joaat("buffalo3"):
		case joaat("gauntlet2"):
		case 1079210360:
		case joaat("blimp2"):
		case joaat("stalion"):
			return 1;
			break;
	}
	switch (iParam0)
	{
		case joaat("buffalo3"):
		case joaat("dominator2"):
		case joaat("gauntlet2"):
		case joaat("stalion2"):
			return 1;
			break;
	}
	switch (iParam0)
	{
		case joaat("buffalo3"):
		case joaat("dominator2"):
		case joaat("gauntlet2"):
		case joaat("stalion2"):
			return 1;
			break;
	}
	switch (iParam0)
	{
		case 538225385:
		case joaat("slamvan2"):
			return 1;
			break;
	}
	switch (iParam0)
	{
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("faction2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
		case joaat("faction"):
		case joaat("moonbeam"):
			return 1;
			break;
		
		case joaat("btype2"):
		case joaat("lurcher"):
			return 1;
			break;
		
		case joaat("banshee2"):
		case joaat("sultanrs"):
			return 1;
			break;
		
		case joaat("btype3"):
			return 1;
			break;
		
		case joaat("faction3"):
		case joaat("minivan2"):
		case joaat("sabregt2"):
		case joaat("slamvan3"):
		case joaat("tornado5"):
		case joaat("virgo2"):
		case joaat("virgo3"):
			return 1;
			break;
	}
	return 0;
}

void func_112(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = unk_0xB3E2CBD7C8448401();
	iVar2 = 0;
	while (iVar2 < 3)
	{
		*uParam0 = { Global_112293.f_2361.f_539.f_298[iVar2 /*477*/] };
		iVar4 = 0;
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			if (((iVar4 < iVar0 && unk_0x0466DAD8CA6C1EAD(iVar1, uParam1)) && !unk_0xD1ABD511D9C326A3(*uParam1)) && !func_128(uParam1->f_1))
			{
				iVar5 = 1;
				iVar3 = 0;
				while (iVar5 && iVar3 < uParam0->f_221)
				{
					if (uParam0->f_221[iVar3 /*5*/] == uParam1->f_1)
					{
						Global_112293.f_2361.f_539.f_298[iVar2 /*477*/].f_221[iVar4 /*5*/] = { uParam0->f_221[iVar3 /*5*/] };
						iVar4++;
						iVar5 = 0;
					}
					iVar3++;
				}
				if (iVar5 && (unk_0x60FF5ED57C36A351() || unk_0xDC39E4D9D73B0D14()))
				{
					Global_112293.f_2361.f_539.f_298[iVar2 /*477*/].f_221[iVar4 /*5*/].f_1 = uParam1->f_6 * 2;
					Global_112293.f_2361.f_539.f_298[iVar2 /*477*/].f_221[iVar4 /*5*/] = uParam1->f_1;
					Global_112293.f_2361.f_539.f_298[iVar2 /*477*/].f_221[iVar4 /*5*/].f_2 = 0;
					Global_112293.f_2361.f_539.f_298[iVar2 /*477*/].f_221[iVar4 /*5*/].f_3 = 0;
					Global_112293.f_2361.f_539.f_298[iVar2 /*477*/].f_221[iVar4 /*5*/].f_4 = 0;
					iVar4++;
				}
			}
			iVar1++;
		}
		iVar1 = iVar4;
		while (iVar1 <= 50)
		{
			Global_112293.f_2361.f_539.f_298[iVar2 /*477*/].f_221[iVar1 /*5*/] = 0;
			Global_112293.f_2361.f_539.f_298[iVar2 /*477*/].f_221[iVar1 /*5*/].f_2 = 0;
			Global_112293.f_2361.f_539.f_298[iVar2 /*477*/].f_221[iVar1 /*5*/].f_3 = 0;
			Global_112293.f_2361.f_539.f_298[iVar2 /*477*/].f_221[iVar1 /*5*/].f_4 = 0;
			iVar1++;
		}
		if (func_127() == iVar2)
		{
			func_113(unk_0x7D2B9E6A64637269(), 1, 0);
		}
		iVar2++;
	}
}

void func_113(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = func_105(iParam0);
	if (func_104(iVar0) && !unk_0xECEC7528A52B4EE8(iParam0))
	{
		func_114(iParam0, &(Global_112293.f_2361.f_539.f_298[iVar0 /*477*/]), bParam1);
		iVar1 = 0;
		while (iVar1 <= (8 - 1))
		{
			unk_0xDD456D7F1AC1F8D9(Global_112293.f_2361.f_539.f_1730[iVar1 /*4*/][iVar0]);
			if (bParam2)
			{
				if (iVar1 == Global_112293.f_2361.f_539.f_1763 || (Global_112293.f_2361.f_539.f_1763 == -1 && iVar1 == 4))
				{
					if (Global_112293.f_2361.f_539.f_1730[iVar1 /*4*/][iVar0] != 0 && Global_112293.f_2361.f_539.f_1730[iVar1 /*4*/][iVar0] != joaat("weapon_molotov"))
					{
						if (unk_0x6CEA35622FBD9702(iParam0, Global_112293.f_2361.f_539.f_1730[iVar1 /*4*/][iVar0], 0))
						{
							unk_0x2FF622571073AA69(iParam0, Global_112293.f_2361.f_539.f_1730[iVar1 /*4*/][iVar0], 1);
						}
					}
				}
			}
			iVar1++;
		}
		if (iVar0 == 0)
		{
			unk_0xD885BEFA31A18D47(joaat("sp0_parachute_current_tint"), &uVar2, -1);
		}
		else if (iVar0 == 1)
		{
			unk_0xD885BEFA31A18D47(joaat("sp1_parachute_current_tint"), &uVar2, -1);
		}
		else if (iVar0 == 2)
		{
			unk_0xD885BEFA31A18D47(joaat("sp2_parachute_current_tint"), &uVar2, -1);
		}
		unk_0x2CD796D9868722DB(unk_0x1146A9AE09CE2B14(), uVar2);
	}
}

void func_114(int iParam0, var uParam1, bool bParam2)
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
	struct<2> Var9;
	struct<4> Var10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14[44];
	int iVar15[51];
	
	if (!unk_0xECEC7528A52B4EE8(uParam0))
	{
		iVar13 = unk_0x4D6FB5FCCA634B35();
		iVar7 = 0;
		while (iVar7 < 2)
		{
			iVar5 = 0;
			while (iVar5 <= (44 - 1))
			{
				iVar1 = func_126(iVar5);
				if (iVar1 != 0 && iVar1 != 1993361168)
				{
					iVar2 = unk_0x2CBBA235A635CC58(iParam0, iVar1);
					if (iVar2 != 0 && iVar2 != joaat("weapon_unarmed"))
					{
						if (func_124(iVar2))
						{
							if (iVar7 == 0)
							{
								iVar14[iVar5] = unk_0x0F6DF91234DB95B0(iParam0, iVar2);
							}
							else
							{
								unk_0xE63C77B605D7BE3D(iParam0, iVar2, 0, 0);
								unk_0x184595D8795BDAB7(iParam0, iVar2, 0);
							}
						}
						else
						{
							iVar14[iVar5] = 0;
							unk_0xE63C77B605D7BE3D(iParam0, iVar2, 0, 0);
							unk_0x184595D8795BDAB7(iParam0, iVar2, 0);
						}
					}
				}
				iVar5++;
			}
			iVar8 = 0;
			while (iVar8 < iVar13)
			{
				if (iVar8 < 51)
				{
					if (unk_0xF98B272A945FAE61(iVar8, &Var9))
					{
						if (!unk_0xD1ABD511D9C326A3(Var9) && !func_128(Var9.f_1))
						{
							if (iVar7 == 0)
							{
								iVar15[iVar8] = unk_0x0F6DF91234DB95B0(iParam0, Var9.f_1);
							}
							else
							{
								unk_0xE63C77B605D7BE3D(iParam0, Var9.f_1, 0, 0);
								unk_0x184595D8795BDAB7(iParam0, Var9.f_1, 0);
							}
						}
						else
						{
							iVar15[iVar8] = 0;
							unk_0xE63C77B605D7BE3D(iParam0, Var9.f_1, 0, 0);
							unk_0x184595D8795BDAB7(iParam0, Var9.f_1, 0);
						}
					}
				}
			else
			{
				}
				else
				{
					iVar8++;
				}
			}
			iVar7++;
		}
		iVar5 = 0;
		while (iVar5 <= (44 - 1))
		{
			iVar1 = func_126(iVar5);
			if (iVar1 != 0 && iVar1 != 1993361168)
			{
				iVar2 = unk_0x2CBBA235A635CC58(iParam0, iVar1);
				iVar3 = (*uParam1)[iVar5 /*5*/];
				iVar0 = (uParam1[iVar5 /*5*/])->f_1;
				if (!func_124(iVar3))
				{
					(*uParam1)[iVar5 /*5*/] = 0;
					iVar3 = 0;
				}
				if (iVar3 != 0)
				{
					if (iVar3 != joaat("weapon_unarmed"))
					{
						if (!unk_0x6CEA35622FBD9702(iParam0, iVar3, 0))
						{
							unk_0xD82D50E4AC0D46B9(iParam0, iVar3, 0, 0, 0);
						}
						if (unk_0x0F6DF91234DB95B0(iParam0, iVar3) < iVar0)
						{
							unk_0xE63C77B605D7BE3D(iParam0, iVar3, iVar0, 0);
						}
						if (iVar3 != joaat("weapon_petrolcan") && unk_0x6CEA35622FBD9702(iParam0, iVar3, 0))
						{
							unk_0xF1B29AC1D252AE2E(iParam0, iVar3, (uParam1[iVar5 /*5*/])->f_3);
						}
						iVar6 = 0;
						iVar4 = func_122(iVar3, iVar6);
						while (iVar4 != 0)
						{
							if (unk_0x234B68AC2E35ED5A((uParam1[iVar5 /*5*/])->f_2, iVar6))
							{
								if (!unk_0x2B8CB30532811E62(iParam0, iVar3, iVar4))
								{
									unk_0x2DA7EDA3305A5996(iParam0, iVar3, iVar4);
									func_121(iParam0, iVar3, iVar4);
									if (func_120(iVar4))
									{
										unk_0x7FB4033815BC3A23(iParam0, iVar3, iVar4, (uParam1[iVar5 /*5*/])->f_4);
										func_119(iParam0, iVar3, iVar4, (uParam1[iVar5 /*5*/])->f_4);
									}
								}
							}
							else if (unk_0x2B8CB30532811E62(iParam0, iVar3, iVar4))
							{
								unk_0xB966251859431487(iParam0, iVar3, iVar4);
								func_117(iParam0, iVar3, iVar4);
							}
							iVar6++;
							iVar4 = func_122(iVar3, iVar6);
						}
					}
				}
				else if (bParam2)
				{
					if ((iVar2 != 0 && iVar2 != joaat("weapon_unarmed")) && iVar2 != joaat("object"))
					{
						unk_0x04BC2951833EF44D(iParam0, iVar2);
						iVar6 = 0;
						iVar4 = func_122(iVar2, iVar6);
						while (iVar4 != 0)
						{
							if (unk_0x2B8CB30532811E62(iParam0, iVar2, iVar4))
							{
								unk_0xB966251859431487(iParam0, iVar2, iVar4);
								func_117(iParam0, iVar2, iVar4);
							}
							iVar6++;
							iVar4 = func_122(iVar2, iVar6);
						}
					}
				}
				if (!bParam2)
				{
					if (iVar2 != 0 && iVar2 != joaat("weapon_unarmed"))
					{
						if (unk_0x0F6DF91234DB95B0(iParam0, iVar2) < iVar14[iVar5])
						{
							unk_0xE63C77B605D7BE3D(iParam0, iVar2, iVar14[iVar5], 0);
						}
					}
				}
			}
			iVar5++;
		}
		iVar11 = 0;
		while (iVar11 < uParam1->f_221)
		{
			iVar3 = uParam1->f_221[iVar11 /*5*/];
			iVar0 = uParam1->f_221[iVar11 /*5*/].f_1;
			iVar8 = func_116(iVar3, &Var9);
			if ((iVar8 != -1 && iVar8 < 51) && !func_128(Var9.f_1))
			{
				if (unk_0xD1ABD511D9C326A3(Var9) || func_128(Var9.f_1))
				{
					uParam1->f_221[iVar11 /*5*/] = 0;
					iVar3 = 0;
				}
				if (iVar3 != 0)
				{
					if (iVar3 != joaat("weapon_unarmed"))
					{
						if (!unk_0x6CEA35622FBD9702(iParam0, iVar3, 0))
						{
							unk_0xD82D50E4AC0D46B9(iParam0, iVar3, 0, 0, 0);
						}
						if (unk_0x0F6DF91234DB95B0(iParam0, iVar3) < iVar0)
						{
							unk_0xE63C77B605D7BE3D(iParam0, iVar3, iVar0, 0);
						}
						if (unk_0x6CEA35622FBD9702(iParam0, iVar3, 0))
						{
							unk_0xF1B29AC1D252AE2E(iParam0, iVar3, uParam1->f_221[iVar11 /*5*/].f_3);
						}
						iVar12 = 0;
						iVar6 = 0;
						while (iVar6 < unk_0x314A1AB56764C12D(iVar8))
						{
							if (unk_0x57CE058547D78C25(iVar8, iVar6, &Var10))
							{
								if (!func_115(Var10.f_3))
								{
									if (unk_0x234B68AC2E35ED5A(uParam1->f_221[iVar11 /*5*/].f_2, iVar12))
									{
										if (!unk_0x2B8CB30532811E62(iParam0, iVar3, Var10.f_3))
										{
											unk_0x2DA7EDA3305A5996(iParam0, iVar3, Var10.f_3);
											func_121(iParam0, iVar3, Var10.f_3);
											if (func_120(Var10.f_3))
											{
												unk_0x7FB4033815BC3A23(iParam0, iVar3, Var10.f_3, uParam1->f_221[iVar11 /*5*/].f_4);
												func_119(iParam0, iVar3, Var10.f_3, uParam1->f_221[iVar11 /*5*/].f_4);
											}
										}
									}
									else if (unk_0x2B8CB30532811E62(iParam0, iVar3, Var10.f_3))
									{
										unk_0xB966251859431487(iParam0, iVar3, Var10.f_3);
										func_117(iParam0, iVar3, Var10.f_3);
									}
									iVar12++;
								}
							}
							iVar6++;
						}
					}
				}
				else if (bParam2)
				{
					if ((iVar2 != 0 && iVar2 != joaat("weapon_unarmed")) && iVar2 != joaat("object"))
					{
						unk_0x04BC2951833EF44D(iParam0, iVar2);
						iVar6 = 0;
						while (iVar6 < unk_0x314A1AB56764C12D(iVar8))
						{
							if (unk_0x57CE058547D78C25(iVar8, iVar6, &Var10))
							{
								if (unk_0x2B8CB30532811E62(iParam0, iVar2, Var10.f_3))
								{
									unk_0xB966251859431487(iParam0, iVar2, Var10.f_3);
									func_117(iParam0, iVar2, Var10.f_3);
								}
							}
							iVar6++;
						}
					}
				}
				if (!bParam2)
				{
					if (iVar3 != 0 && iVar3 != joaat("weapon_unarmed"))
					{
						if (unk_0x0F6DF91234DB95B0(iParam0, iVar3) < iVar15[iVar8])
						{
							unk_0xE63C77B605D7BE3D(iParam0, iVar3, iVar15[iVar8], 0);
						}
					}
				}
			}
			iVar11++;
		}
		if (((unk_0xBDC364B886846D11(iParam0, &iVar2, 1) && iVar2 != 0) && iVar2 != joaat("weapon_unarmed")) && iVar2 != joaat("object"))
		{
			iVar0 = unk_0x0F6DF91234DB95B0(iParam0, iVar2);
			if (iVar0 > 1 && iVar0 > unk_0xB31CB7A737F771D3(iParam0, iVar2, 1))
			{
				unk_0xE63C77B605D7BE3D(iParam0, iVar2, (iVar0 - unk_0xB31CB7A737F771D3(iParam0, iVar2, 1)), 0);
				unk_0x184595D8795BDAB7(iParam0, iVar2, unk_0xB31CB7A737F771D3(iParam0, iVar2, 1));
			}
		}
	}
}

int func_115(int iParam0)
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01_SLIDE"):
			return 1;
			break;
	}
	return 0;
}

int func_116(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x4D6FB5FCCA634B35();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0xF98B272A945FAE61(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_117(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_118(iParam2);
	if (iVar0 != 0)
	{
		if (unk_0x2B8CB30532811E62(uParam0, iParam1, iVar0))
		{
			unk_0xB966251859431487(iParam0, iParam1, iVar0);
		}
	}
}

int func_118(int iParam0)
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_02"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_02_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_03"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_03_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_04"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_04_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_05"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_05_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_06"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_06_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_07"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_07_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_08"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_08_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_09"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_09_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_10"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_10_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE");
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_SLIDE");
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02_SLIDE");
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03_SLIDE");
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04_SLIDE");
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05_SLIDE");
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06_SLIDE");
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07_SLIDE");
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08_SLIDE");
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09_SLIDE");
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10_SLIDE");
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01_SLIDE");
			break;
	}
	return 0;
}

void func_119(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	
	iVar0 = func_118(iParam2);
	if (iVar0 != 0)
	{
		unk_0x7FB4033815BC3A23(uParam0, iParam1, iVar0, uParam3);
	}
}

int func_120(int iParam0)
{
	switch (iParam0)
	{
		case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO"):
		case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_02"):
		case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_03"):
		case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_04"):
		case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_05"):
		case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_06"):
		case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_07"):
		case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_08"):
		case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_09"):
		case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_10"):
		case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO"):
		case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_02"):
		case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_03"):
		case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_04"):
		case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_05"):
		case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_06"):
		case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_07"):
		case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_08"):
		case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_09"):
		case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_10"):
		case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_COMBATMG_MK2_CAMO"):
		case joaat("COMPONENT_COMBATMG_MK2_CAMO_02"):
		case joaat("COMPONENT_COMBATMG_MK2_CAMO_03"):
		case joaat("COMPONENT_COMBATMG_MK2_CAMO_04"):
		case joaat("COMPONENT_COMBATMG_MK2_CAMO_05"):
		case joaat("COMPONENT_COMBATMG_MK2_CAMO_06"):
		case joaat("COMPONENT_COMBATMG_MK2_CAMO_07"):
		case joaat("COMPONENT_COMBATMG_MK2_CAMO_08"):
		case joaat("COMPONENT_COMBATMG_MK2_CAMO_09"):
		case joaat("COMPONENT_COMBATMG_MK2_CAMO_10"):
		case joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO"):
		case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_02"):
		case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_03"):
		case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_04"):
		case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_05"):
		case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_06"):
		case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_07"):
		case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_08"):
		case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_09"):
		case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_10"):
		case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_02"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_03"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_04"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_05"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_06"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_07"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_08"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_09"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_10"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_SMG_MK2_CAMO"):
		case joaat("COMPONENT_SMG_MK2_CAMO_02"):
		case joaat("COMPONENT_SMG_MK2_CAMO_03"):
		case joaat("COMPONENT_SMG_MK2_CAMO_04"):
		case joaat("COMPONENT_SMG_MK2_CAMO_05"):
		case joaat("COMPONENT_SMG_MK2_CAMO_06"):
		case joaat("COMPONENT_SMG_MK2_CAMO_07"):
		case joaat("COMPONENT_SMG_MK2_CAMO_08"):
		case joaat("COMPONENT_SMG_MK2_CAMO_09"):
		case joaat("COMPONENT_SMG_MK2_CAMO_10"):
		case joaat("COMPONENT_SMG_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO"):
		case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_02"):
		case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_03"):
		case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_04"):
		case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_05"):
		case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_06"):
		case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_07"):
		case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_08"):
		case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_09"):
		case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_10"):
		case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_REVOLVER_MK2_CAMO"):
		case joaat("COMPONENT_REVOLVER_MK2_CAMO_02"):
		case joaat("COMPONENT_REVOLVER_MK2_CAMO_03"):
		case joaat("COMPONENT_REVOLVER_MK2_CAMO_04"):
		case joaat("COMPONENT_REVOLVER_MK2_CAMO_05"):
		case joaat("COMPONENT_REVOLVER_MK2_CAMO_06"):
		case joaat("COMPONENT_REVOLVER_MK2_CAMO_07"):
		case joaat("COMPONENT_REVOLVER_MK2_CAMO_08"):
		case joaat("COMPONENT_REVOLVER_MK2_CAMO_09"):
		case joaat("COMPONENT_REVOLVER_MK2_CAMO_10"):
		case joaat("COMPONENT_REVOLVER_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO"):
		case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_02"):
		case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_03"):
		case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_04"):
		case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_05"):
		case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_06"):
		case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_07"):
		case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_08"):
		case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_09"):
		case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_10"):
		case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO"):
		case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_02"):
		case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_03"):
		case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_04"):
		case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_05"):
		case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_06"):
		case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_07"):
		case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_08"):
		case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_09"):
		case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_10"):
		case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO"):
		case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_02"):
		case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_03"):
		case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_04"):
		case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_05"):
		case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_06"):
		case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_07"):
		case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_08"):
		case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_09"):
		case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_10"):
		case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"):
			return 1;
			break;
	}
	return 0;
}

void func_121(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_118(iParam2);
	if (iVar0 != 0)
	{
		unk_0x2DA7EDA3305A5996(uParam0, iParam1, iVar0);
	}
}

int func_122(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<4> Var5;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 8:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 8:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 7:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 8:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 9:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		case joaat("weapon_minismg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minismg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_minismg_clip_02");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_123(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0x0846333BC725A766(iVar1))
					{
						if (unk_0x9C54B5A3D8EE1518(iVar1, iVar2, &Var5))
						{
							if (!func_115(Var5.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var5.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_123(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0xB3E2CBD7C8448401();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x0466DAD8CA6C1EAD(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_124(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == -61829581)
	{
		if (unk_0x02BFF15CAA701972() && func_125())
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (iParam0 == joaat("weapon_firework") && !unk_0x02BFF15CAA701972())
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("weapon_assaultsmg"):
			if (!unk_0x02BFF15CAA701972())
			{
				if (!func_135(1, 1))
				{
					return 0;
				}
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			if (unk_0x02BFF15CAA701972())
			{
				if (!func_135(1, 1))
				{
					return 0;
				}
			}
			break;
		
		case joaat("weapon_railgun"):
			if (!func_129() || unk_0x02BFF15CAA701972())
			{
				return 0;
			}
			break;
		
		case joaat("weapon_hatchet"):
			if (!unk_0x02BFF15CAA701972())
			{
				if (!func_129() && !Global_262145.f_19931)
				{
					return 0;
				}
			}
			break;
		
		case joaat("weapon_knuckle"):
		case joaat("weapon_marksmanpistol"):
			break;
	}
	iVar0 = 0;
	while (iVar0 < unk_0xB3E2CBD7C8448401())
	{
		if (unk_0x0466DAD8CA6C1EAD(iVar0, &Var1))
		{
			if (Var1.f_1 == iParam0)
			{
				if (unk_0xD1ABD511D9C326A3(Var1) || func_128(Var1.f_1))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return unk_0x770FA19E296094F2(iParam0);
}

bool func_125()
{
	return unk_0x14FA206D9CE730A9(-1691188696);
}

int func_126(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

int func_127()
{
	func_103();
	return Global_112293.f_2361.f_539.f_4321;
}

int func_128(int iParam0)
{
	if (unk_0x02BFF15CAA701972())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return 0;
				break;
			
			case -947031628:
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
			case joaat("weapon_flashlight"):
			case joaat("weapon_switchblade"):
			case joaat("weapon_revolver"):
			case joaat("weapon_dbshotgun"):
			case joaat("weapon_compactrifle"):
			case joaat("weapon_autoshotgun"):
			case joaat("weapon_minismg"):
			case joaat("weapon_compactlauncher"):
			case joaat("weapon_battleaxe"):
			case joaat("weapon_pipebomb"):
			case joaat("weapon_poolcue"):
			case joaat("weapon_wrench"):
			case joaat("weapon_doubleaction"):
			case joaat("weapon_raycarbine"):
			case joaat("weapon_rayminigun"):
			case joaat("weapon_raypistol"):
			case joaat("weapon_navyrevolver"):
			case joaat("weapon_ceramicpistol"):
			case joaat("weapon_gadgetpistol"):
			case joaat("weapon_militaryrifle"):
			case joaat("weapon_combatshotgun"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_129()
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

int func_130()
{
	return 0;
}

int func_131()
{
	if (unk_0x14FA206D9CE730A9(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_132(int iParam0)
{
	if (func_104(iParam0))
	{
		return func_88(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_133(var uParam0, int iParam1, char* sParam2)
{
	unk_0x191DDA30577F440A(uParam0, iParam1);
	StringCopy(&cLocal_195, func_134(sParam2), 32);
	iLocal_193 = 1;
}

var func_134(var uParam0)
{
	return uParam0;
}

int func_135(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (unk_0x234B68AC2E35ED5A(Global_112293.f_668.f_1315, 2))
		{
			return 1;
		}
	}
	if (unk_0x678E959F60C0DB94())
	{
		if (!bParam1 || unk_0x0B4295B1608BB934())
		{
			if (!unk_0xDC39E4D9D73B0D14() && !unk_0xE22116C6D321FECA())
			{
				return 1;
			}
		}
	}
	if (bParam1)
	{
		if (unk_0xF54628B8295E0CFD())
		{
			return 0;
		}
	}
	if (unk_0x678E959F60C0DB94())
	{
		return 1;
	}
	return 0;
}

int func_136()
{
	return 1;
}

void func_137(bool bParam0)
{
	func_2(func_132(0), 3, 175, bParam0, bParam0, bParam0, 0);
	func_2(func_132(0), 3, 3, bParam0, bParam0, bParam0, 0);
	func_2(func_132(0), 4, 3, bParam0, bParam0, bParam0, 0);
	func_2(func_132(0), 12, 26, bParam0, bParam0, bParam0, 0);
	func_2(func_132(2), 3, 98, bParam0, bParam0, bParam0, 0);
	func_2(func_132(2), 3, 124, bParam0, bParam0, bParam0, 0);
	func_2(func_132(2), 12, 22, bParam0, bParam0, bParam0, 0);
	func_2(func_132(1), 3, 133, bParam0, bParam0, bParam0, 0);
	func_2(func_132(1), 3, 135, bParam0, bParam0, bParam0, 0);
	func_2(func_132(1), 12, 16, bParam0, bParam0, bParam0, 0);
}

void func_138(bool bParam0)
{
	func_139(0, 9, bParam0);
	func_139(2, 5, bParam0);
	func_139(1, 0, bParam0);
}

void func_139(int iParam0, int iParam1, bool bParam2)
{
	struct<11> Var0;
	
	if (func_104(iParam0))
	{
		if (func_97(&Var0, iParam1, func_140(iParam0), 0, -1))
		{
			if (bParam2)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361.f_493[iParam0 /*15*/][Var0.f_9]), Var0.f_10);
			}
			else
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361.f_493[iParam0 /*15*/][Var0.f_9]), Var0.f_10);
			}
		}
	}
}

int func_140(int iParam0)
{
	switch (iParam0)
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
	}
	return 0;
}

int func_141()
{
	return 1;
}

int func_142()
{
	if (unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		return 0;
	}
	if (unk_0xF471787D45ADC2C1())
	{
		return 0;
	}
	if (func_146())
	{
		return 0;
	}
	if (unk_0x2CA4B93E310C1860())
	{
		return 0;
	}
	if (!unk_0xDF02DA324F934755(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if (Global_77246)
	{
		return 0;
	}
	if (iLocal_191 > 15)
	{
		return 0;
	}
	if (unk_0x4E38E404B98F3D9A() || unk_0x8B6A925F148E0E94())
	{
		return 0;
	}
	if (func_17(0))
	{
		return 0;
	}
	if (func_17(3))
	{
		return 0;
	}
	if (func_17(4))
	{
		return 0;
	}
	if (func_107(0))
	{
		return 0;
	}
	if (unk_0xDC2776C9C8195355())
	{
		return 0;
	}
	if (func_145())
	{
		return 0;
	}
	if (!func_143())
	{
		return 0;
	}
	return 1;
}

int func_143()
{
	if (func_144() == 0)
	{
		return 1;
	}
	return 0;
}

int func_144()
{
	return Global_1312485.f_18;
}

bool func_145()
{
	return Global_74428;
}

int func_146()
{
	if (!unk_0x02BFF15CAA701972())
	{
		return Global_96848.f_44 == 1;
	}
	return 0;
}

int func_147(bool bParam0)
{
	if (bParam0)
	{
		if (func_148())
		{
			return 1;
		}
	}
	if (func_17(14))
	{
		return 1;
	}
	return 0;
}

int func_148()
{
	if (Global_111238)
	{
		return 1;
	}
	if (!func_17(14) && unk_0x636F1F53CC61D2C9(joaat("director_mode")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_149()
{
	Global_99409 = 1;
}

bool func_150()
{
	return Global_99409.f_1;
}

void func_151()
{
	int iVar0;
	
	iVar0 = 3;
	if (timerb() > 250)
	{
		if (func_102() == 2)
		{
			if (Global_31582)
			{
				iVar0 = 1;
			}
			if (unk_0x16371AB7527A7757())
			{
				if (unk_0x636F1F53CC61D2C9(joaat("docks_setup")) > 0)
				{
					iVar0 = 1;
				}
			}
			if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
			{
				if (vdist2(Global_41132[iLocal_208 /*31*/].f_2, unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1)) < Global_41132[iLocal_208 /*31*/].f_6)
				{
					if (func_163(iLocal_208, unk_0x7D2B9E6A64637269()))
					{
						if (!func_154(unk_0x7D2B9E6A64637269(), 12, 2))
						{
							func_153(iLocal_208, unk_0x7D2B9E6A64637269(), 0);
						}
					}
					else if (func_154(unk_0x7D2B9E6A64637269(), 12, 2))
					{
						func_152(iLocal_208, unk_0x7D2B9E6A64637269());
					}
				}
				iLocal_208++;
				if (iLocal_208 > iVar0)
				{
					iLocal_208 = 0;
				}
			}
		}
		settimerb(0);
	}
}

void func_152(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (!unk_0x419E13582192CFEA(iParam1))
	{
		return;
	}
	if (func_163(iParam0, iParam1))
	{
		return;
	}
	if (Global_41132[iParam0 /*31*/].f_24 < 5)
	{
		Global_41132[iParam0 /*31*/].f_25[Global_41132[iParam0 /*31*/].f_24] = iParam1;
		Global_41132[iParam0 /*31*/].f_24++;
	}
	else
	{
		bVar2 = false;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iVar1 = Global_41132[iParam0 /*31*/].f_25[iVar0];
			if (!unk_0x419E13582192CFEA(iVar1) || unk_0xECEC7528A52B4EE8(iVar1))
			{
				Global_41132[iParam0 /*31*/].f_25[iVar0] = iParam1;
				bVar2 = true;
				iVar0 = 6;
			}
			iVar0++;
		}
		if (!bVar2)
		{
		}
	}
}

void func_153(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	
	if (!bParam2)
	{
		if (!unk_0x419E13582192CFEA(iParam1))
		{
			return;
		}
	}
	if (Global_41132[iParam0 /*31*/].f_24 == 0)
	{
		return;
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < Global_41132[iParam0 /*31*/].f_24)
	{
		if (bVar1)
		{
			Global_41132[iParam0 /*31*/].f_25[(iVar0 - 1)] = Global_41132[iParam0 /*31*/].f_25[iVar0];
			Global_41132[iParam0 /*31*/].f_25[iVar0] = 0;
		}
		else if (iParam1 == Global_41132[iParam0 /*31*/].f_25[iVar0])
		{
			Global_41132[iParam0 /*31*/].f_25[iVar0] = 0;
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		Global_41132[iParam0 /*31*/].f_24 = (Global_41132[iParam0 /*31*/].f_24 - 1);
	}
}

int func_154(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	var uVar8;
	
	if (unk_0xECEC7528A52B4EE8(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x6471F4759775FCA4(iParam0);
	Global_77059[1 /*14*/] = { func_5(iVar0, iParam1, iParam2, -1) };
	if (!unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { func_83(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_154(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { func_77(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_154(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_77059[2 /*14*/] = { func_5(iVar0, 14, iVar4, -1) };
									if (Global_77059[2 /*14*/].f_12 == iVar3)
									{
										if (func_154(iParam0, 14, iVar4))
										{
											if (!func_157(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_77059[2 /*14*/])))
											{
												return 0;
											}
										}
									}
									iVar4++;
								}
							}
							iVar3++;
						}
					}
					else
					{
						iVar1 = func_155(iParam0, iVar2);
						Global_77059[2 /*14*/] = { func_5(iVar0, iVar2, iVar1, -1) };
						if (!func_157(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_77059[2 /*14*/])))
						{
							return 0;
						}
					}
				}
			}
			iVar2++;
		}
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar8 = { func_77(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 <= 8)
		{
			if (!func_154(iParam0, 14, uVar8[iVar7]))
			{
				return 0;
			}
			iVar7++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (unk_0x228A4ED518554B3F(iParam0, Global_77059[1 /*14*/].f_12) == Global_77059[1 /*14*/].f_3 && (unk_0x64F7E3FF8F40315D(iParam0, Global_77059[1 /*14*/].f_12) == Global_77059[1 /*14*/].f_4 || Global_77059[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
	}
	else if (Global_77059[1 /*14*/].f_3 == unk_0x094C1D2DFE050D6E(iParam0, func_20(iParam1)) && Global_77059[1 /*14*/].f_4 == unk_0x288277F22D527487(iParam0, func_20(iParam1)))
	{
		return 1;
	}
	return 0;
}

int func_155(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || unk_0xECEC7528A52B4EE8(iParam0))
	{
		return -99;
	}
	iVar0 = func_20(iParam1);
	iVar1 = unk_0x094C1D2DFE050D6E(iParam0, iVar0);
	iVar2 = unk_0x288277F22D527487(iParam0, iVar0);
	return func_156(iParam0, iVar1, iVar2, iParam1);
}

int func_156(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_20(iParam3);
	iVar1 = unk_0x1AAA5445D3C56366(iParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		iVar5 = unk_0x1887979EFA1D3BF6(iParam0, iVar0, iVar3);
		if (iVar3 != iParam1)
		{
			iVar2 = (iVar2 + iVar5);
		}
		else
		{
			iVar4 = 0;
			while (iVar4 <= (iVar5 - 1))
			{
				if (iVar3 == iParam1 && iVar4 == iParam2)
				{
					return iVar2;
				}
				else
				{
					iVar2++;
				}
				iVar4++;
			}
		}
		iVar3++;
	}
	return -99;
}

int func_157(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
{
	var uVar0;
	int iVar1;
	
	if ((*uParam4)[iParam2] == iParam3)
	{
		return 1;
	}
	if (((*uParam4)[iParam2] == -99 && iParam2 != 14) && iParam2 != 13)
	{
		return 1;
	}
	if (iParam2 == 13 || (iParam2 == 14 && (*uParam4)[13] == 31))
	{
		if ((((((((iParam3 == 0 || iParam3 == 1) || iParam3 == 2) || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 6) || iParam3 == 7) || iParam3 == 8)
		{
			return 1;
		}
	}
	if (iParam3 == -99 || uParam5->f_1 == -1)
	{
		return 1;
	}
	if (iParam2 == 14)
	{
		uVar0 = { func_77(iParam0, (*uParam4)[13]) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			if (uVar0[iVar1] == iParam3)
			{
				return 1;
			}
			iVar1++;
		}
	}
	if (func_162(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_161(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
		else if (func_160(iParam0, iParam2, iParam3, -1))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 0)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_158(iParam0, iParam2, iParam3, -1))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (func_161(iParam0, iParam2, iParam3, -1))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return 0;
			}
			return 1;
		}
		else if (func_160(iParam0, iParam2, iParam3, -1))
		{
			if ((((iParam1 == 3 || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				if (iParam2 == 8)
				{
					if (iParam3 == 9)
					{
						if (iParam1 == 8 || iParam1 == 21)
						{
							return 1;
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
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 26)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 5 && iParam3 <= 10)
					{
						return 0;
					}
				}
			}
			else if (iParam2 == 14)
			{
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 26 && iParam3 <= 39)
					{
						return 0;
					}
				}
			}
			return 1;
		}
		else if (func_158(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 3 || iParam1 == 3) || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				return 0;
			}
			return 1;
		}
		else if (iParam2 == 14)
		{
			if (iParam3 >= 159 && iParam3 <= 174)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 14 && iParam3 == 0)
			{
				return 1;
			}
		}
		if (func_161(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
		else if (func_160(iParam0, iParam2, iParam3, -1))
		{
			if (((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 15)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_158(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

int func_158(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 == 16)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 == 40 || (iParam2 >= 41 && iParam2 <= 56)) || (iParam2 >= 64 && iParam2 <= 79))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 >= 17 && iParam2 <= 18) || (iParam2 >= 71 && iParam2 <= 86))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_159(iParam0, iParam2, 14, 3);
						}
						return (unk_0x01758128AAB0BA8F(iParam3, joaat("HAT"), 1) || unk_0x01758128AAB0BA8F(func_159(iParam0, iParam2, 14, 3), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_159(iParam0, iParam2, 1, 3);
						}
						return (unk_0x01758128AAB0BA8F(iParam3, joaat("HAT"), 0) || unk_0x01758128AAB0BA8F(func_159(iParam0, iParam2, 1, 3), -1842686353, 0));
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_159(iParam0, iParam2, 14, 4);
						}
						return (unk_0x01758128AAB0BA8F(iParam3, joaat("HAT"), 1) || unk_0x01758128AAB0BA8F(func_159(iParam0, iParam2, 14, 4), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_159(iParam0, iParam2, 1, 4);
						}
						return (unk_0x01758128AAB0BA8F(iParam3, joaat("HAT"), 0) || unk_0x01758128AAB0BA8F(func_159(iParam0, iParam2, 1, 4), -1842686353, 0));
					}
					break;
			}
			break;
	}
	return 0;
}

int func_159(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	int iVar4;
	int iVar5;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0x71794FDA9361403E(&Var0);
		iVar1 = (iParam1 - func_81(iParam0));
		if (iVar1 < 0)
		{
			return -1;
		}
		iVar2 = unk_0x44C4C2E7417F5E29(iParam3, 8, -1, 1, -1, -1);
		if (iVar2 <= iVar1)
		{
			return -1;
		}
		unk_0x9404A07A08FA1D0F(iVar1, &Var0);
		return Var0.f_1;
	}
	else
	{
		unk_0xFE9B2B065B8931FE(&Var3);
		iVar4 = (iParam1 - func_80(iParam0, func_20(iParam2)));
		if (iVar4 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_77181.f_26[iParam2] && iParam1 == Global_77181[iParam2]) && Global_77181.f_13[iParam2] != 0)
		{
			return Global_77181.f_13[iParam2];
		}
		iVar5 = unk_0x44C4C2E7417F5E29(iParam3, 8, -1, 0, -1, func_20(iParam2));
		if (iVar5 <= iVar4)
		{
			return -1;
		}
		unk_0xDF9AB3C346705246(iVar4, &Var3);
		Global_77181.f_13[iParam2] = Var3.f_1;
		Global_77181[iParam2] = iParam1;
		Global_77181.f_26[iParam2] = iParam0;
		return Var3.f_1;
	}
	return -1;
}

int func_160(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 6)
		{
			if (iParam2 == 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 9 || iParam2 == 7) || iParam2 == 23)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 9 && iParam2 <= 14)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if ((((((((((((((((iParam2 == 12 || iParam2 == 59) || iParam2 == 60) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || iParam2 == 37) || iParam2 == 38) || iParam2 == 39) || iParam2 == 40) || iParam2 == 41) || (iParam2 >= 42 && iParam2 <= 44)) || iParam2 == 54) || iParam2 == 55)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 20)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 3 || iParam2 == 5) || iParam2 == 9)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 5 && iParam2 <= 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 82 || iParam2 == 10) || iParam2 == 26) || iParam2 == 27) || iParam2 == 28) || iParam2 == 29) || iParam2 == 30) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || (iParam2 >= 37 && iParam2 <= 39))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 8)
		{
			if (iParam2 == 14 || iParam2 == 7)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (((iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14)) || iParam2 == 15) || iParam2 == 16)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 88 || iParam2 == 12) || iParam2 == 47) || iParam2 == 48) || iParam2 == 49) || iParam2 == 50) || iParam2 == 51) || iParam2 == 52) || iParam2 == 53) || iParam2 == 54) || iParam2 == 55) || iParam2 == 56) || iParam2 == 57) || (iParam2 >= 58 && iParam2 <= 60))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_159(iParam0, iParam2, 1, 3);
					}
					if (unk_0x01758128AAB0BA8F(iParam3, joaat("HAT"), 0) || unk_0x01758128AAB0BA8F(iParam3, joaat("HAIR_SHRINK"), 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_159(iParam0, iParam2, 1, 4);
					}
					if (unk_0x01758128AAB0BA8F(iParam3, joaat("HAT"), 0) || unk_0x01758128AAB0BA8F(iParam3, joaat("HAIR_SHRINK"), 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_161(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 14)
			{
				if ((((((((iParam2 == 58 || iParam2 == 61) || (iParam2 >= 62 && iParam2 <= 69)) || (iParam2 >= 70 && iParam2 <= 79)) || (iParam2 >= 80 && iParam2 <= 89)) || iParam2 == 90) || (iParam2 >= 91 && iParam2 <= 102)) || (iParam2 >= 103 && iParam2 <= 110)) || iParam2 == 111)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 == 14)
			{
				if (((((((((((iParam2 >= 83 && iParam2 <= 92) || iParam2 == 93) || iParam2 == 94) || (iParam2 >= 95 && iParam2 <= 101)) || (iParam2 >= 102 && iParam2 <= 111)) || (iParam2 >= 112 && iParam2 <= 121)) || (iParam2 >= 122 && iParam2 <= 131)) || (iParam2 >= 132 && iParam2 <= 139)) || (iParam2 >= 140 && iParam2 <= 149)) || (iParam2 >= 150 && iParam2 <= 156)) || iParam2 == 157)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 14)
			{
				if (((((((((iParam2 == 89 || (iParam2 >= 90 && iParam2 <= 99)) || (iParam2 >= 100 && iParam2 <= 109)) || iParam2 == 111) || iParam2 == 112) || (iParam2 >= 113 && iParam2 <= 122)) || (iParam2 >= 123 && iParam2 <= 132)) || (iParam2 >= 133 && iParam2 <= 142)) || (iParam2 >= 143 && iParam2 <= 152)) || iParam2 == 153)
				{
					return 1;
				}
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_159(iParam0, iParam2, 14, 3);
					}
					return unk_0x01758128AAB0BA8F(iParam3, joaat("GLASSES"), 1);
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_159(iParam0, iParam2, 14, 4);
					}
					return unk_0x01758128AAB0BA8F(iParam3, joaat("GLASSES"), 1);
				}
			}
			break;
	}
	return 0;
}

int func_162(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 15)
					{
						return 1;
					}
					break;
				
				case 9:
					if (iParam2 == 6)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 1 || iParam2 == 10)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 4)
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_163(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_41132[iParam0 /*31*/].f_24)
	{
		if (iParam1 == Global_41132[iParam0 /*31*/].f_25[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_164()
{
	if (iLocal_188 > 0)
	{
		if (unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()) || !Global_96655)
		{
			iLocal_188 = 99;
		}
	}
	switch (iLocal_188)
	{
		case 0:
			if (Global_96655)
			{
				iLocal_188++;
			}
			break;
		
		case 1:
			unk_0x498685EB9132AF88(0, "END_MARTIN_1");
			bLocal_189 = true;
			if (!unk_0x2CA4B93E310C1860() && unk_0x636F1F53CC61D2C9(joaat("martin1")) == 0)
			{
				if (unk_0x9CF7186A344D26A9(0, "END_MARTIN_1"))
				{
					if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
					{
						iLocal_190 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
					}
					if (unk_0x419E13582192CFEA(iLocal_190) && unk_0xBFCE58B2B3249999(iLocal_190, 0))
					{
						unk_0x069557E67CC67C29(iLocal_190, 0, "END_MARTIN_1", 1);
						iLocal_188++;
					}
					else
					{
						iLocal_188 = 99;
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0x419E13582192CFEA(iLocal_190))
			{
				iLocal_188++;
			}
			else if (!unk_0xBFCE58B2B3249999(iLocal_190, 0))
			{
				iLocal_188++;
			}
			else if (!unk_0xAB0BB1BDD76B67DC(iLocal_190))
			{
				iLocal_188++;
			}
			break;
		
		case 3:
			if (bLocal_189)
			{
				unk_0x7B6B41ECBE4B733F(0, "END_MARTIN_1");
			}
			iLocal_190 = 0;
			iLocal_188 = 0;
			Global_96655 = 0;
			break;
		
		case 99:
			if (bLocal_189)
			{
				unk_0x7B6B41ECBE4B733F(0, "END_MARTIN_1");
			}
			iLocal_190 = 0;
			iLocal_188 = 0;
			Global_96655 = 0;
			break;
	}
}

void func_165(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (func_236())
	{
		if (!func_235(Global_109040, 1024))
		{
			func_231(uParam0);
			func_230(&Global_109040, 1024);
		}
	}
	else
	{
		return;
	}
	bVar0 = func_228(uParam0);
	if (!bVar0)
	{
		if (unk_0x419E13582192CFEA(uParam0->f_14) || unk_0x419E13582192CFEA(uParam0->f_13))
		{
			if (!func_17(13) || !func_227() == func_226())
			{
				func_225(uParam0, 1);
			}
		}
		if (uParam0->f_3)
		{
		}
	}
	else if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
	{
		if (!uParam0->f_3)
		{
			if (func_224(0) || !uParam0->f_4)
			{
				func_223(255, 0);
				uParam0->f_2 = 2000;
			}
			Var1 = { func_222("til_P_", "Exec_U", "xer_Scene", "B_Mi") };
			if (!unk_0xB30CD10E2CD1B67D(&Var1))
			{
				unk_0xB84B43B766630B5C(&Var1);
			}
		}
		iVar3 = func_221();
		iVar4 = func_219();
		iVar5 = func_218(*uParam0);
		if (uParam0->f_2 > 0)
		{
			uParam0->f_2 = (uParam0->f_2 - floor((unk_0x7FF6ACE380ED166C() * 1000f)));
			if (uParam0->f_2 <= 0)
			{
				func_223(0, 800);
			}
		}
		func_217();
		func_192(uParam0);
		func_190();
		if (func_189(uParam0, iVar5))
		{
			fVar2 = vdist2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), Global_109045[iVar4 /*3*/]);
			if (fVar2 < (35f * 35f) && unk_0x234B68AC2E35ED5A(*uParam0, 4))
			{
				func_185(uParam0);
				func_184(uParam0);
				func_183(uParam0, 4000);
				unk_0xC664C0067EEAB8D1(uParam0, 4);
				if (iVar4 == 10)
				{
					unk_0x191DDA30577F440A(&(Global_112293.f_10014.f_25), 8);
					unk_0x191DDA30577F440A(uParam0, 5);
					func_184(uParam0);
					func_182(uParam0, 1108082688, 0);
					func_181(1);
					return;
				}
				else
				{
					unk_0xC664C0067EEAB8D1(&(Global_112293.f_10014.f_25), 9);
				}
			}
			else if (fVar2 > uParam0->f_5)
			{
				func_184(uParam0);
				func_182(uParam0, 1108082688, 0);
			}
			func_171(uParam0, Global_109045[iVar4 /*3*/], 1);
		}
		else if (func_169(uParam0, iVar5))
		{
			fVar2 = vdist2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), func_168(uParam0, iVar5));
			if (fVar2 < (35f * 35f) && unk_0x234B68AC2E35ED5A(*uParam0, 4))
			{
				func_166(uParam0, func_167(uParam0, iVar5));
				func_183(uParam0, 4000);
				func_182(uParam0, 1108082688, 0);
				unk_0xC664C0067EEAB8D1(uParam0, 4);
			}
			else if (fVar2 > uParam0->f_5)
			{
				func_182(uParam0, 1108082688, 0);
			}
			func_171(uParam0, Global_109045[iVar3 /*3*/], 1);
		}
		else
		{
			fVar2 = vdist2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), func_168(uParam0, iVar5));
			if (fVar2 < (17f * 17f))
			{
				func_166(uParam0, func_167(uParam0, iVar5));
				func_183(uParam0, 0);
				func_182(uParam0, 1108082688, 0);
			}
			else if (fVar2 > uParam0->f_5 && !func_169(uParam0, iVar5))
			{
				func_184(uParam0);
				func_182(uParam0, 1108082688, 0);
			}
			func_171(uParam0, func_168(uParam0, iVar5), 0);
		}
	}
	uParam0->f_3 = bVar0;
	uParam0->f_4 = func_227() == func_226();
}

void func_166(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - *uParam0 & 33423360);
	*uParam0 = (*uParam0 || shift_left(iParam1, 17));
}

int func_167(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = func_221();
	iVar1 = func_219();
	uVar2 = Global_109508[iVar0 /*12*/][iVar1];
	uVar2 = uVar2;
	if (func_189(uParam0, iParam1))
	{
		return iParam1;
	}
	if (Global_109641[iVar0 /*12*/][iVar1])
	{
		return (iParam1 - 1);
	}
	return iParam1 + 1;
}

Vector3 func_168(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	
	iVar0 = func_221();
	iVar1 = func_219();
	iVar2 = Global_109508[iVar0 /*12*/][iVar1];
	if (func_189(uParam0, iParam1))
	{
		Var3 = { Global_109045[iVar1 /*3*/] };
	}
	else if (func_169(uParam0, iParam1))
	{
		Var3 = { Global_109045[iVar0 /*3*/] };
	}
	else
	{
		Var3 = { Global_109774[iVar2 /*14*/].f_1[(iParam1 - 1) /*3*/] };
	}
	return Var3;
}

bool func_169(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	*uParam0 = *uParam0;
	iVar2 = func_170(uParam0, &iVar0, &iVar1);
	if (!Global_109641[iVar0 /*12*/][iVar1])
	{
		return iParam1 == 0;
	}
	return iParam1 == Global_109774[iVar2 /*14*/] + 1;
}

var func_170(var uParam0, var uParam1, var uParam2)
{
	if (func_221() == func_219())
	{
		func_185(uParam0);
	}
	*uParam1 = func_221();
	*uParam2 = func_219();
	return Global_109508[*uParam1 /*12*/][*uParam2];
}

void func_171(var uParam0, struct<3> Param1, bool bParam2)
{
	float fVar0;
	struct<16> Var1;
	struct<6> Var2;
	
	if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
	{
		if (func_180())
		{
			uParam0->f_8 = func_179(uParam0->f_8, (unk_0xDFB7BFA6482FEE1E() + unk_0xB36B8558948EA7A8(2000, 4000)));
		}
		fVar0 = vdist2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), Param1);
		if ((fVar0 < uParam0->f_5 && (fVar0 > (35f * 35f) || !bParam2)) && fVar0 < 9000000f)
		{
			if (unk_0xDFB7BFA6482FEE1E() > uParam0->f_8)
			{
				if (func_177(uParam0))
				{
					uParam0->f_8 = (unk_0xDFB7BFA6482FEE1E() + 4000 + unk_0xB36B8558948EA7A8(0, 4000));
					Var1 = { func_176("C_SF", "DL", "AST", "X1/BE") };
					if (unk_0x952AB441FA24BF16(&Var1, 0, -1))
					{
						func_181(0);
						uParam0->f_12 = func_174(30f, func_175(60f, vdist(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), Param1)));
						uParam0->f_9 = { func_173(Param1 - unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), uParam0->f_12) };
						uParam0->f_7 = unk_0x5AD02BBC63E31E46();
						Var2 = { func_172("st_C", "Bea", "ls", "al") };
						Var1 = { func_176("nts_S", "FM_Eve", "atch_Sounds", "asqu") };
						unk_0x4569EA65F1B056ED(uParam0->f_7, &Var2, unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) + uParam0->f_9, &Var1, 0, 0, 0);
						unk_0x191DDA30577F440A(uParam0, 1);
						func_182(uParam0, 35f, 1);
					}
				}
			}
		}
		if (unk_0x234B68AC2E35ED5A(*uParam0, 1) && uParam0->f_7 != -1)
		{
			if (unk_0x964C4D363AF812CB(uParam0->f_7))
			{
				unk_0xBAB6F7501A822416(uParam0->f_7);
				unk_0xC664C0067EEAB8D1(uParam0, 1);
				uParam0->f_7 = -1;
			}
			else
			{
				unk_0x790D5A7482DF438C(uParam0->f_7, unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) + uParam0->f_9);
			}
		}
	}
}

struct<6> func_172(char* sParam0, char* sParam1, char* sParam2, char* sParam3)
{
	struct<6> Var0;
	
	StringCopy(&Var0, sParam1, 24);
	StringConCat(&Var0, sParam0, 24);
	StringConCat(&Var0, sParam3, 24);
	StringConCat(&Var0, sParam2, 24);
	return Var0;
}

Vector3 func_173(struct<3> Param0, float fParam1)
{
	float fVar0;
	
	if (fParam1 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = vmag(Param0);
	if (fVar0 != 0f)
	{
		return Param0 * FtoV((fParam1 / fVar0));
	}
	return 0f, 0f, 0f;
}

float func_174(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

float func_175(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

struct<16> func_176(char* sParam0, char* sParam1, char* sParam2, char* sParam3)
{
	struct<16> Var0;
	
	StringCopy(&Var0, sParam1, 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, sParam3, 64);
	StringConCat(&Var0, sParam2, 64);
	return Var0;
}

int func_177(var uParam0)
{
	if (unk_0x234B68AC2E35ED5A(*uParam0, 1) || !func_178(0, 0))
	{
		return 0;
	}
	return 1;
}

bool func_178(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (unk_0x96DF114B59E81B9C(0, 36))
	{
		unk_0x191DDA30577F440A(&(Global_112293.f_10014.f_25), 22);
	}
	bVar0 = unk_0x234B68AC2E35ED5A(Global_112293.f_10014.f_25, 22);
	if (iParam0 && bVar0)
	{
		unk_0xC664C0067EEAB8D1(&(Global_112293.f_10014.f_25), 22);
	}
	iParam1 = iParam1;
	return bVar0;
}

int func_179(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool func_180()
{
	bool bVar0;
	
	bVar0 = unk_0x234B68AC2E35ED5A(Global_112293.f_10014.f_25, 22);
	return (func_178(0, 0) && !bVar0);
}

void func_181(bool bParam0)
{
	if (bParam0)
	{
		unk_0x191DDA30577F440A(&(Global_112293.f_10014.f_25), 22);
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&(Global_112293.f_10014.f_25), 22);
	}
}

void func_182(var uParam0, float fParam1, bool bParam2)
{
	float fVar0;
	
	fVar0 = uParam0->f_5;
	if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
	{
		uParam0->f_5 = (vdist(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), func_168(uParam0, func_218(*uParam0))) + (fParam1 * 2f));
		uParam0->f_5 = func_174(uParam0->f_5, (35f * 3f));
		uParam0->f_5 = (uParam0->f_5 * uParam0->f_5);
	}
	if (bParam2)
	{
		uParam0->f_5 = func_175(uParam0->f_5, fVar0);
	}
}

void func_183(var uParam0, int iParam1)
{
	uParam0->f_8 = (unk_0xDFB7BFA6482FEE1E() + iParam1);
}

void func_184(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_221();
	iVar1 = func_219();
	iVar2 = Global_109508[iVar0 /*12*/][iVar1];
	iVar3 = 0;
	if (unk_0x234B68AC2E35ED5A(*uParam0, 5))
	{
		iVar3 = 1;
		unk_0xC664C0067EEAB8D1(uParam0, 5);
	}
	if (Global_109641[iVar0 /*12*/][iVar1])
	{
		iVar3 = (Global_109774[iVar2 /*14*/] + 1 - iVar3);
	}
	func_166(uParam0, iVar3);
}

void func_185(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_221();
	iVar1 = func_219();
	iVar2 = iVar0;
	iVar3 = 50;
	while ((iVar2 == iVar0 || iVar2 == iVar1) || Global_109508[iVar1 /*12*/][iVar2] == -1)
	{
		iVar2 = unk_0xB36B8558948EA7A8(0, 11);
		iVar3 = (iVar3 - 1);
	}
	func_188(iVar1);
	func_186(iVar2);
}

void func_186(int iParam0)
{
	func_187(&(Global_112293.f_10014.f_25), iParam0, 3932160, 18);
}

void func_187(var uParam0, int iParam1, int iParam2, int iParam3)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam2));
	*uParam0 = (*uParam0 || shift_left(iParam1, iParam3));
}

void func_188(int iParam0)
{
	func_187(&(Global_112293.f_10014.f_25), iParam0, 245760, 14);
}

bool func_189(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	*uParam0 = *uParam0;
	iVar2 = func_170(uParam0, &iVar0, &iVar1);
	if (Global_109641[iVar0 /*12*/][iVar1])
	{
		return iParam1 == 0;
	}
	return iParam1 == Global_109774[iVar2 /*14*/] + 1;
}

void func_190()
{
	unk_0xDA81FB7770247CC0();
	func_191();
}

void func_191()
{
	Global_22531.f_134 = 1;
}

void func_192(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	float fVar4;
	
	func_170(uParam0, &iVar0, &iVar1);
	if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
	{
		Var2 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) };
		fVar3 = vdist(Var2, Global_109045[iVar0 /*3*/]);
		fVar4 = vdist(Var2, Global_109045[iVar1 /*3*/]);
		if (fVar3 < 200f && fVar3 < fVar4)
		{
			func_193(uParam0, Global_109045[iVar0 /*3*/], Global_109496[iVar0], 1);
		}
		if (fVar4 < 200f)
		{
			func_193(uParam0, Global_109045[iVar1 /*3*/], Global_109496[iVar1], 1);
		}
		if (fVar3 > (200f + 10f) && fVar4 > (200f + 10f))
		{
			func_225(uParam0, 0);
		}
	}
}

void func_193(var uParam0, struct<3> Param1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	bool bVar3;
	
	if (iParam2 == 49)
	{
		if (unk_0x234B68AC2E35ED5A(*uParam0, 3))
		{
			iParam2 = 25;
		}
	}
	iVar0 = func_216(iParam2);
	iVar1 = func_215(iParam2);
	Var2 = { 0f, 0f, 0f };
	if (!unk_0x419E13582192CFEA(uParam0->f_13) && !unk_0x419E13582192CFEA(uParam0->f_14))
	{
		if (!unk_0x234B68AC2E35ED5A(*uParam0, 2))
		{
			if (iVar0 != 0)
			{
				unk_0x16E516CA9C88FF48(iVar0);
			}
			if (iVar1 != 0)
			{
				unk_0x16E516CA9C88FF48(iVar1);
			}
			unk_0x191DDA30577F440A(uParam0, 2);
		}
		else
		{
			bVar3 = true;
			if (iVar0 != 0)
			{
				if (!unk_0xA9C0BBFB9CBB66F1(iVar0))
				{
					bVar3 = false;
				}
			}
			if (iVar1 != 0)
			{
				if (!unk_0xA9C0BBFB9CBB66F1(iVar1))
				{
					bVar3 = false;
				}
			}
			if (bVar3)
			{
				func_201(iParam2, &(uParam0->f_13), &(uParam0->f_14), Param1, 0, 0);
				unk_0xC664C0067EEAB8D1(uParam0, 4);
				if (uParam0->f_1 != 0)
				{
					unk_0xAEBEF7AEA5E74A38(uParam0->f_1);
					uParam0->f_1 = 0;
				}
				uParam0->f_1 = unk_0x200BB4DD7C4DB741();
				unk_0x60C60FC4CCF9DF77(uParam0->f_1, Param1, func_195(iVar0));
			}
		}
	}
	else
	{
		if (unk_0x419E13582192CFEA(uParam0->f_13))
		{
			Var2 = { unk_0xD6E677FAD7521410(uParam0->f_13, 0) };
		}
		else if (unk_0x419E13582192CFEA(uParam0->f_14))
		{
			Var2 = { unk_0xD6E677FAD7521410(uParam0->f_14, 0) };
		}
		if (bParam3)
		{
			if (!func_194(Var2, Param1, 10f, 1) && vdist(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), Var2) > 200f)
			{
				func_225(uParam0, 0);
			}
		}
	}
	if (!unk_0x234B68AC2E35ED5A(*uParam0, 4))
	{
		if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0) && !func_224(0))
		{
			if (uParam0->f_1 != 0)
			{
				if (vdist(Param1, unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1)) < 5f)
				{
					unk_0x60C60FC4CCF9DF77(uParam0->f_1, Var2, func_195(iVar0));
					if (unk_0xB0307F369363B547(uParam0->f_1))
					{
						unk_0x5FACB8A2F85D58B4(Var2, 2000, 2000, 2000, 0);
						unk_0x191DDA30577F440A(uParam0, 4);
						if (iParam2 == 49)
						{
							unk_0x191DDA30577F440A(uParam0, 3);
						}
						func_181(1);
					}
				}
			}
		}
	}
}

int func_194(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (unk_0x0BCA9ADE67DF9DD8((Param0.x - Param1.x)) <= fParam2)
		{
			if (unk_0x0BCA9ADE67DF9DD8((Param0.f_1 - Param1.f_1)) <= fParam2)
			{
				if (unk_0x0BCA9ADE67DF9DD8((Param0.f_2 - Param1.f_2)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x0BCA9ADE67DF9DD8((Param0.x - Param1.x)) <= fParam2)
	{
		if (unk_0x0BCA9ADE67DF9DD8((Param0.f_1 - Param1.f_1)) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

float func_195(int iParam0)
{
	struct<2> Var0;
	struct<2> Var1;
	
	func_196(iParam0, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
	return unk_0x0BCA9ADE67DF9DD8((Var0.f_1 - Var1.f_1));
}

void func_196(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (unk_0x3F1DFD4C1BC6827A(iParam0))
	{
		unk_0xC78A38E5FBC66080(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_199(iParam0);
		if (iVar0 != 0)
		{
			func_197(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}
	if (vmag(*uParam1) <= 0.01f || vmag(*uParam2) <= 0.01f)
	{
		if (iParam0 == joaat("kosatka"))
		{
			if (fParam4 < 20.7f)
			{
				fParam4 = 20.7f;
			}
			if (fParam3 < 137.2f)
			{
				fParam3 = 137.2f;
			}
			if (fParam5 < 21.1f)
			{
				fParam5 = 21.1f;
			}
		}
		*uParam1 = (0f - (fParam4 * 0.5f));
		*uParam2 = (0f + (fParam4 * 0.5f));
		uParam1->f_1 = (0f - (fParam3 * 0.5f));
		uParam2->f_1 = (0f + (fParam3 * 0.5f));
		uParam1->f_2 = (0f - (fParam5 * 0.5f));
		uParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_197(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_198(iParam0, &Global_1315836);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x3F1DFD4C1BC6827A(Global_1315836[iVar0]))
		{
			unk_0xC78A38E5FBC66080(Global_1315836[iVar0], &(Global_1315840[iVar0 /*3*/]), &(Global_1315847[iVar0 /*3*/]));
		}
		if (vmag(Global_1315840[iVar0 /*3*/]) <= 0.01f || vmag(Global_1315847[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1315840[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1315847[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1315840[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1315847[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1315840[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1315847[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1315854[iVar0] = (Global_1315847[iVar0 /*3*/] - Global_1315840[iVar0 /*3*/]);
		Global_1315857[iVar0] = (Global_1315847[iVar0 /*3*/].f_1 - Global_1315840[iVar0 /*3*/].f_1);
		Global_1315860[iVar0] = (Global_1315847[iVar0 /*3*/].f_2 - Global_1315840[iVar0 /*3*/].f_2);
		if (Global_1315854[iVar0] > Global_1315863)
		{
			Global_1315863 = Global_1315854[iVar0];
		}
		if (Global_1315860[iVar0] > Global_1315864)
		{
			Global_1315864 = Global_1315860[iVar0];
		}
		iVar0++;
	}
	Global_1315865 = (Global_1315863 * -0.5f);
	Global_1315868 = (Global_1315863 * 0.5f);
	Global_1315865.f_1 = ((((0.5f * Global_1315857[0]) + Global_1315857[1]) + Global_1315836.f_3) * -1f);
	Global_1315868.f_1 = (0.5f * Global_1315857[0]);
	Global_1315865.f_2 = (Global_1315860[0] * -0.5f);
	Global_1315868.f_2 = (Global_1315860[0] * 0.5f);
	*uParam1 = { Global_1315865 };
	*uParam2 = { Global_1315868 };
}

void func_198(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = joaat("hauler2");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 2:
			(*uParam1)[0] = joaat("phantom3");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 3:
			(*uParam1)[0] = joaat("nightshark");
			(*uParam1)[1] = joaat("trailersmall2");
			uParam1->f_3 = 0.5f;
			break;
	}
}

int func_199(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_200(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_200(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_201(int iParam0, var uParam1, var uParam2, struct<3> Param3, int iParam4, bool bParam5)
{
	switch (iParam0)
	{
		case 12:
			func_214(uParam1, Param3, iParam4, bParam5);
			break;
		
		case 109:
			func_213(uParam1, Param3, iParam4, bParam5);
			break;
		
		case 43:
			func_212(uParam1, Param3, iParam4, bParam5);
			break;
		
		case 35:
			func_211(uParam2, Param3, iParam4, bParam5);
			break;
		
		case 28:
			func_210(uParam1, Param3, iParam4, bParam5);
			break;
		
		case 17:
			func_209(uParam1, uParam2, Param3, iParam4, bParam5);
			break;
		
		case 49:
			func_207(uParam1, uParam2, Param3, iParam4);
			break;
		
		case 25:
			func_206(uParam1, Param3, iParam4);
			break;
		
		case 14:
			func_205(uParam1, Param3, iParam4);
			break;
		
		case 86:
			func_202(uParam1, Param3, iParam4);
			break;
	}
}

void func_202(var uParam0, struct<3> Param1, var uParam2)
{
	int iVar0;
	
	iVar0 = func_216(86);
	if (unk_0xA9C0BBFB9CBB66F1(iVar0))
	{
		*uParam0 = unk_0x0FDCFECB2EF2BC1C(5, iVar0, Param1, uParam2, 1, 1);
		unk_0xDBF5BCD703020A83(*uParam0, 1);
		unk_0x7B28A83A0D3DD0F9(*uParam0, 227, 1);
		unk_0x824F744352C8BC82(iVar0);
		unk_0xC595907BB71C921D(*uParam0, 0, 0);
		unk_0xC5DE9743D6DA2C15(*uParam0);
		unk_0x6EE2AE2D8DD2827E(1110, (Param1.x + 0.1f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_204(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x6EE2AE2D8DD2827E(1110, (Param1.x - 0.03f), (Param1.f_1 + 0.3f), Param1.f_2, 0f, 0f, -1f, func_204(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x6EE2AE2D8DD2827E(1110, (Param1.x - 0.2f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_204(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x6EE2AE2D8DD2827E(1110, (Param1.x - 0.5f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_204(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x6EE2AE2D8DD2827E(1110, (Param1.x + 0.01f), (Param1.f_1 - 0.4f), Param1.f_2, 0f, 0f, -1f, func_204(0f, 1f, 0f), 1.4f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x6EE2AE2D8DD2827E(1110, (Param1.x + 0.01f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_204(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x6EE2AE2D8DD2827E(1110, (Param1.x - 0.6f), (Param1.f_1 - 0.35f), Param1.f_2, 0f, 0f, -1f, func_204(0f, 1f, 0f), 1.5f, 1.2f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		func_203(*uParam0);
		return;
	}
}

void func_203(var uParam0)
{
	unk_0x6C8A8DADCB013067(uParam0, 1, 0.431f, 0.667f, 179.593f, 0.889f, 2, 0f, "BasicSlash");
	unk_0x6C8A8DADCB013067(uParam0, 1, 0.556f, 0.292f, 161.805f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x6C8A8DADCB013067(uParam0, 1, 0.708f, 0.688f, 167.897f, 0f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x6C8A8DADCB013067(uParam0, 2, 0.472f, 0.347f, 146.133f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x6C8A8DADCB013067(uParam0, 2, 0.799f, 0.451f, 158.294f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x6C8A8DADCB013067(uParam0, 0, 0.681f, 0.507f, 158.707f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x6C8A8DADCB013067(uParam0, 0, 0.819f, 0.813f, 174.811f, 0.056f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x6C8A8DADCB013067(uParam0, 0, 0.174f, 0.438f, 211.521f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x6C8A8DADCB013067(uParam0, 0, 0.174f, 0.486f, 213.237f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x6C8A8DADCB013067(uParam0, 0, 0.174f, 0.542f, 215.168f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	unk_0x6C8A8DADCB013067(uParam0, 0, 0.236f, 0.542f, 213.752f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	unk_0x6C8A8DADCB013067(uParam0, 0, 0.278f, 0.542f, 212.851f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	unk_0x6C8A8DADCB013067(uParam0, 0, 0.313f, 0.542f, 212.127f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	unk_0x6C8A8DADCB013067(uParam0, 5, 0.639f, 0.313f, 149.248f, 1f, 1, 0f, "stab");
	unk_0x6C8A8DADCB013067(uParam0, 5, 0.792f, 0.424f, 182.625f, 1f, 1, 0f, "stab");
	unk_0x6C8A8DADCB013067(uParam0, 5, 0.792f, 0.424f, 182.625f, 1f, 1, 0f, "BasicSlash");
	unk_0x6C8A8DADCB013067(uParam0, 3, 0.618f, 0.451f, 204.207f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x6C8A8DADCB013067(uParam0, 3, 0.785f, 0.597f, 206.103f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x6C8A8DADCB013067(uParam0, 4, 0.688f, 0.438f, 202.91f, 1f, 1, 0f, "BasicSlash");
	unk_0x6C8A8DADCB013067(uParam0, 4, 0.688f, 0.424f, 202.492f, 1f, 1, 0f, "BasicSlash");
	unk_0x6C8A8DADCB013067(uParam0, 4, 0.688f, 0.347f, 200.181f, 1f, 1, 0f, "BasicSlash");
	unk_0x6C8A8DADCB013067(uParam0, 4, 0.688f, 0.278f, 198.043f, 1f, 1, 0f, "BasicSlash");
	unk_0x6C8A8DADCB013067(uParam0, 4, 0.688f, 0.222f, 196.275f, 1f, 1, 0f, "BasicSlash");
	unk_0x6C8A8DADCB013067(uParam0, 4, 0.653f, 0.222f, 196.609f, 1f, 3, 0f, "BasicSlash");
	unk_0x6C8A8DADCB013067(uParam0, 4, 0.75f, 0.222f, 195.716f, 1f, 2, 0f, "BasicSlash");
	unk_0x6C8A8DADCB013067(uParam0, 4, 1f, 0.326f, 196.621f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	unk_0x6C8A8DADCB013067(uParam0, 4, 0.93f, 0.451f, 200.584f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x6C8A8DADCB013067(uParam0, 4, 0.618f, 0.451f, 204.207f, 1f, 0, 0f, "ShotgunLargeMonolithic");
}

Vector3 func_204(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = vmag(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.x = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

void func_205(var uParam0, struct<3> Param1, var uParam2)
{
	int iVar0;
	
	iVar0 = func_216(14);
	if (unk_0xA9C0BBFB9CBB66F1(iVar0))
	{
		*uParam0 = unk_0x0FDCFECB2EF2BC1C(5, iVar0, Param1, uParam2, 1, 1);
		unk_0xDBF5BCD703020A83(*uParam0, 1);
		unk_0x7B28A83A0D3DD0F9(*uParam0, 227, 1);
		unk_0x824F744352C8BC82(iVar0);
		unk_0xC595907BB71C921D(*uParam0, 0, 0);
		unk_0xC5DE9743D6DA2C15(*uParam0);
		unk_0x6EE2AE2D8DD2827E(1110, (Param1.x + 0.1f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_204(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x6EE2AE2D8DD2827E(1110, (Param1.x - 0.03f), (Param1.f_1 + 0.3f), Param1.f_2, 0f, 0f, -1f, func_204(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x6EE2AE2D8DD2827E(1110, (Param1.x - 0.2f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_204(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x6EE2AE2D8DD2827E(1110, (Param1.x - 0.5f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_204(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x6EE2AE2D8DD2827E(1110, (Param1.x + 0.01f), (Param1.f_1 - 0.4f), Param1.f_2, 0f, 0f, -1f, func_204(0f, 1f, 0f), 1.4f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x6EE2AE2D8DD2827E(1110, (Param1.x + 0.01f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_204(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x6EE2AE2D8DD2827E(1110, (Param1.x - 0.6f), (Param1.f_1 - 0.35f), Param1.f_2, 0f, 0f, -1f, func_204(0f, 1f, 0f), 1.5f, 1.2f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		func_203(*uParam0);
		return;
	}
}

void func_206(var uParam0, struct<3> Param1, var uParam2)
{
	int iVar0;
	
	iVar0 = func_216(25);
	if (unk_0xA9C0BBFB9CBB66F1(iVar0))
	{
		*uParam0 = unk_0x0FDCFECB2EF2BC1C(4, iVar0, Param1, uParam2, 1, 1);
		unk_0xDBF5BCD703020A83(*uParam0, 1);
		unk_0x7B28A83A0D3DD0F9(*uParam0, 227, 1);
		unk_0x824F744352C8BC82(iVar0);
		unk_0xC595907BB71C921D(*uParam0, 0, 0);
		unk_0xC5DE9743D6DA2C15(*uParam0);
		unk_0x6EE2AE2D8DD2827E(1110, (Param1.x + 0.02f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_204(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x6EE2AE2D8DD2827E(1110, (Param1.x - 0.23f), (Param1.f_1 + 0.04f), Param1.f_2, 0f, 0f, -1f, func_204(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x6EE2AE2D8DD2827E(1110, (Param1.x - 0.05f), (Param1.f_1 - 0.01f), Param1.f_2, 0f, 0f, -1f, func_204(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x6EE2AE2D8DD2827E(1110, (Param1.x - 0.05f), (Param1.f_1 - 0.11f), Param1.f_2, 0f, 0f, -1f, func_204(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x6EE2AE2D8DD2827E(1110, (Param1.x + 0.09f), (Param1.f_1 - 0.06f), Param1.f_2, 0f, 0f, -1f, func_204(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		func_203(*uParam0);
		return;
	}
}

void func_207(var uParam0, var uParam1, struct<3> Param2, var uParam3)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = func_216(49);
	iVar1 = func_215(49);
	if (unk_0xA9C0BBFB9CBB66F1(iVar0) && unk_0xA9C0BBFB9CBB66F1(iVar1))
	{
		*uParam0 = unk_0x0FDCFECB2EF2BC1C(4, iVar0, Param2, uParam3, 1, 1);
		unk_0xDBF5BCD703020A83(*uParam0, 1);
		unk_0x7B28A83A0D3DD0F9(*uParam0, 227, 1);
		unk_0x824F744352C8BC82(iVar0);
		unk_0xC595907BB71C921D(*uParam0, 0, 0);
		unk_0xC5DE9743D6DA2C15(*uParam0);
		unk_0x6EE2AE2D8DD2827E(1110, ((Param2.x + 0.12f) - 0.3f), ((Param2.f_1 - 0.01f) - 0.07f), Param2.f_2, 0f, 0f, -1f, func_204(0f, 1f, 0f), 1f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x6EE2AE2D8DD2827E(1110, ((Param2.x - 0.03f) - 0.3f), ((Param2.f_1 + 0.04f) - 0.07f), Param2.f_2, 0f, 0f, -1f, func_204(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x6EE2AE2D8DD2827E(1110, ((Param2.x - 0.2f) - 0.3f), ((Param2.f_1 - 0.01f) - 0.07f), Param2.f_2, 0f, 0f, -1f, func_204(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x6EE2AE2D8DD2827E(1110, ((Param2.x - 0.05f) - 0.3f), ((Param2.f_1 - 0.15f) - 0.07f), Param2.f_2, 0f, 0f, -1f, func_204(0f, 1f, 0f), 0.9f, 0.7f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x6EE2AE2D8DD2827E(1110, ((Param2.x + 0.01f) - 0.3f), ((Param2.f_1 - 0.06f) - 0.07f), Param2.f_2, 0f, 0f, -1f, func_204(0f, 1f, 0f), 0.8f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		func_203(*uParam0);
		Var2 = { 9.9929f, 4.6946f, -7.1469f };
		*uParam1 = unk_0x170478CC84C8AE2F(iVar1, Param2 + Var2, uParam3, 1, 1, 0);
		unk_0x824F744352C8BC82(iVar1);
		unk_0xEBF08082D648C482(*uParam1, 2f);
		unk_0x47D0DDD8833C5E5F(*uParam1, 1084227584);
		unk_0xFA657401A11FF221(*uParam1, 2f);
		unk_0x7456A265E82B99E9(*uParam1, 1f);
		unk_0x66B785A2E38AFE05(*uParam1, 0, func_208());
		unk_0x66B785A2E38AFE05(*uParam1, 1, func_208());
		unk_0x66B785A2E38AFE05(*uParam1, 2, func_208());
		unk_0x66B785A2E38AFE05(*uParam1, 3, func_208());
		unk_0x66B785A2E38AFE05(*uParam1, 4, func_208());
		unk_0x66B785A2E38AFE05(*uParam1, 5, func_208());
		unk_0x4544B07E5BF6339C(*uParam1, 15f);
		unk_0x610E47A3444BAD86(*uParam1, 3);
		unk_0xC55DA02D18D77322(*uParam1, 2);
		unk_0x84AD61D029E3B23C(*uParam1, 1);
		unk_0xC5DE9743D6DA2C15(*uParam1);
		return;
	}
}

int func_208()
{
	if (unk_0x234B68AC2E35ED5A(unk_0xB36B8558948EA7A8(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_209(var uParam0, var uParam1, struct<3> Param2, var uParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = func_216(17);
	iVar1 = func_215(17);
	if (unk_0xA9C0BBFB9CBB66F1(iVar0) && unk_0xA9C0BBFB9CBB66F1(iVar1))
	{
		*uParam0 = unk_0x0FDCFECB2EF2BC1C(4, iVar1, Param2, uParam3, 1, 1);
		unk_0xDBF5BCD703020A83(*uParam0, 1);
		unk_0x7B28A83A0D3DD0F9(*uParam0, 227, 1);
		unk_0x824F744352C8BC82(iVar1);
		unk_0xC595907BB71C921D(*uParam0, 0, 0);
		unk_0xC5DE9743D6DA2C15(*uParam0);
		Var2 = { 0.02f, -0.01f, 0f };
		unk_0x6EE2AE2D8DD2827E(1110, Param2 + Var2, 0f, 0f, -1f, func_204(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var2 = { 0.23f, 0.04f, 0f };
		unk_0x6EE2AE2D8DD2827E(1110, Param2 + Var2, 0f, 0f, -1f, func_204(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var2 = { -0.05f, -0.01f, 0f };
		unk_0x6EE2AE2D8DD2827E(1110, Param2 + Var2, 0f, 0f, -1f, func_204(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var2 = { -0.05f, -0.11f, 0f };
		unk_0x6EE2AE2D8DD2827E(1110, Param2 + Var2, 0f, 0f, -1f, func_204(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var2 = { 0.09f, -0.06f, 0f };
		unk_0x6EE2AE2D8DD2827E(1110, Param2 + Var2, 0f, 0f, -1f, func_204(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam4)
		{
			Var2 = { 0.5783f, 0.1357f, -0.0683f };
			unk_0x6EE2AE2D8DD2827E(2020, Param2 + Var2, 0f, 0f, -1f, 0.4484f, -0.8938f, 0f, 0.19f, 0.33f, 0.09f, 0f, 0f, 1f, -1f, 1, 0, 0);
			Var2 = { 1.0477f, 0.1103f, -0.1388f };
			unk_0x6EE2AE2D8DD2827E(2020, Param2 + Var2, 0f, 0f, -1f, 0.4484f, -0.8938f, 0f, 0.19f, 0.33f, 0.09f, 0f, 0f, 1f, -1f, 1, 0, 0);
			Var2 = { 1.5048f, 0.4595f, -0.1953f };
			unk_0x6EE2AE2D8DD2827E(2020, Param2 + Var2, 0f, 0f, -1f, 0.4484f, -0.8938f, 0f, 0.19f, 0.33f, 0.09f, 0f, 0f, 1f, -1f, 1, 0, 0);
		}
		func_203(*uParam0);
		*uParam1 = unk_0x170478CC84C8AE2F(iVar0, (Param2.x - 0.4f), (Param2.f_1 - 0.5f), Param2.f_2, uParam3, 1, 1, 0);
		unk_0x824F744352C8BC82(iVar0);
		unk_0xBDDCDEC7B6205897(*uParam1, 0f, 85f, 0f, 2, 1);
		unk_0xFA657401A11FF221(*uParam1, 20.5f);
		unk_0x4544B07E5BF6339C(*uParam1, 15f);
		unk_0xC5DE9743D6DA2C15(*uParam1);
		return;
	}
}

void func_210(var uParam0, struct<3> Param1, var uParam2, bool bParam3)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_216(28);
	if (unk_0xA9C0BBFB9CBB66F1(iVar0))
	{
		*uParam0 = unk_0x0FDCFECB2EF2BC1C(28, iVar0, Param1, uParam2, 1, 1);
		unk_0xDBF5BCD703020A83(*uParam0, 1);
		unk_0x7B28A83A0D3DD0F9(*uParam0, 227, 1);
		unk_0x824F744352C8BC82(iVar0);
		unk_0xC595907BB71C921D(*uParam0, 0, 0);
		unk_0xC5DE9743D6DA2C15(*uParam0);
		Var1 = { 0.02f, -0.01f, 0f };
		unk_0x6EE2AE2D8DD2827E(1110, Param1 + Var1, 0f, 0f, -1f, func_204(0f, 1f, 0f), 0.6f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.03f, 0.04f, 0f };
		unk_0x6EE2AE2D8DD2827E(1110, Param1 + Var1, 0f, 0f, -1f, func_204(0f, 1f, 0f), 0.8f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.05f, -0.01f, 0f };
		unk_0x6EE2AE2D8DD2827E(1110, Param1 + Var1, 0f, 0f, -1f, func_204(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { 0.01f, -0.06f, 0f };
		unk_0x6EE2AE2D8DD2827E(1110, Param1 + Var1, 0f, 0f, -1f, func_204(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam3)
		{
			Var1 = { 0.5206f, 0f, 0.003f };
			unk_0x6EE2AE2D8DD2827E(2020, Param1 + Var1, 0f, 0f, -1f, 0.309f, -0.9511f, 0f, 0.19f, 0.33f, 0.113f, 0f, 0f, 1f, -1f, 1, 0, 0);
			Var1 = { 1.1258f, 0.0362f, -0.0837f };
			unk_0x6EE2AE2D8DD2827E(2020, Param1 + Var1, 0f, 0f, -1f, 0.5036f, -0.8639f, 0f, 0.19f, 0.33f, 0.119f, 0f, 0f, 1f, -1f, 1, 0, 0);
			Var1 = { 1.6107f, 0.4678f, -0.0815f };
			unk_0x6EE2AE2D8DD2827E(2020, Param1 + Var1, 0f, 0f, -1f, 0.5036f, -0.8639f, 0f, 0.19f, 0.33f, 0.119f, 0f, 0f, 0.8f, -1f, 1, 0, 0);
		}
		return;
	}
}

void func_211(var uParam0, struct<3> Param1, var uParam2, bool bParam3)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_216(35);
	if (unk_0xA9C0BBFB9CBB66F1(iVar0))
	{
		*uParam0 = unk_0x170478CC84C8AE2F(iVar0, Param1, uParam2, 1, 1, 0);
		unk_0x824F744352C8BC82(iVar0);
		unk_0xBDDCDEC7B6205897(*uParam0, 0f, 170f, 0f, 2, 1);
		unk_0xEBF08082D648C482(*uParam0, 1f);
		unk_0xFA657401A11FF221(*uParam0, 1f);
		unk_0x4544B07E5BF6339C(*uParam0, 15f);
		unk_0x66B785A2E38AFE05(*uParam0, 0, func_208());
		unk_0x66B785A2E38AFE05(*uParam0, 1, func_208());
		unk_0x66B785A2E38AFE05(*uParam0, 2, func_208());
		unk_0x66B785A2E38AFE05(*uParam0, 3, func_208());
		unk_0x66B785A2E38AFE05(*uParam0, 4, func_208());
		unk_0x66B785A2E38AFE05(*uParam0, 5, func_208());
		unk_0x610E47A3444BAD86(*uParam0, 3);
		unk_0xC55DA02D18D77322(*uParam0, 2);
		unk_0x84AD61D029E3B23C(*uParam0, 1);
		unk_0xC5DE9743D6DA2C15(*uParam0);
		if (bParam3)
		{
			Var1 = { 0.4947f, 2.3632f, 0.1294f };
			unk_0x6EE2AE2D8DD2827E(2020, Param1 + Var1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.7f, -1f, 1, 0, 0);
			Var1 = { 0.9243f, 2.6606f, 0.1951f };
			unk_0x6EE2AE2D8DD2827E(2020, Param1 + Var1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.66f, -1f, 1, 0, 0);
			Var1 = { 1.5467f, 2.5044f, 0.2418f };
			unk_0x6EE2AE2D8DD2827E(2020, Param1 + Var1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.58f, -1f, 1, 0, 0);
			Var1 = { 1.357f, 3.8779f, 0.3259f };
			unk_0x6EE2AE2D8DD2827E(2020, Param1 + Var1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.48f, -1f, 1, 0, 0);
		}
		return;
	}
}

void func_212(var uParam0, struct<3> Param1, var uParam2, bool bParam3)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_216(43);
	if (unk_0xA9C0BBFB9CBB66F1(iVar0))
	{
		*uParam0 = unk_0x0FDCFECB2EF2BC1C(28, iVar0, Param1, uParam2, 1, 1);
		unk_0xDBF5BCD703020A83(*uParam0, 1);
		unk_0x7B28A83A0D3DD0F9(*uParam0, 227, 1);
		unk_0x824F744352C8BC82(iVar0);
		unk_0xC595907BB71C921D(*uParam0, 0, 0);
		unk_0xC5DE9743D6DA2C15(*uParam0);
		Var1 = { 0.12f, -0.01f, 0f };
		unk_0x6EE2AE2D8DD2827E(1110, Param1 + Var1, 0f, 0f, -1f, func_204(0f, 1f, 0f), 1f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.03f, 0.04f, 0f };
		unk_0x6EE2AE2D8DD2827E(1110, Param1 + Var1, 0f, 0f, -1f, func_204(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.2f, -0.01f, 0f };
		unk_0x6EE2AE2D8DD2827E(1110, Param1 + Var1, 0f, 0f, -1f, func_204(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.05f, -0.15f, 0f };
		unk_0x6EE2AE2D8DD2827E(1110, Param1 + Var1, 0f, 0f, -1f, func_204(0f, 1f, 0f), 0.9f, 0.7f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam3)
		{
			Var1 = { 0.4125f, -0.5815f, -0.2056f };
			unk_0x6EE2AE2D8DD2827E(2020, Param1 + Var1, 0f, 0f, -1f, -0.5358f, -0.8443f, 0f, 0.19f, 0.33f, 0.234f, 0f, 0f, 0.9f, -1f, 1, 0, 0);
			Var1 = { 0.6332f, -1.1758f, -0.7106f };
			unk_0x6EE2AE2D8DD2827E(2020, Param1 + Var1, 0f, 0f, -1f, -0.7026f, -0.7115f, 0f, 0.19f, 0.33f, 0.26f, 0f, 0f, 0.75f, -1f, 1, 0, 0);
		}
		return;
	}
}

void func_213(var uParam0, struct<3> Param1, var uParam2, bool bParam3)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_216(109);
	if (unk_0xA9C0BBFB9CBB66F1(iVar0))
	{
		*uParam0 = unk_0x0FDCFECB2EF2BC1C(28, iVar0, Param1, uParam2, 1, 1);
		unk_0xDBF5BCD703020A83(*uParam0, 1);
		unk_0x824F744352C8BC82(iVar0);
		unk_0xC595907BB71C921D(*uParam0, 0, 0);
		unk_0xC5DE9743D6DA2C15(*uParam0);
		Var1 = { 0.12f, -0.01f, 0f };
		unk_0x6EE2AE2D8DD2827E(1110, Param1 + Var1, 0f, 0f, -1f, func_204(0f, 1f, 0f), 1f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.03f, 0.04f, 0f };
		unk_0x6EE2AE2D8DD2827E(1110, Param1 + Var1, 0f, 0f, -1f, func_204(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.2f, -0.01f, 0f };
		unk_0x6EE2AE2D8DD2827E(1110, Param1 + Var1, 0f, 0f, -1f, func_204(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.05f, -0.15f, 0f };
		unk_0x6EE2AE2D8DD2827E(1110, Param1 + Var1, 0f, 0f, -1f, func_204(0f, 1f, 0f), 0.9f, 0.7f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { 0.01f, -0.06f, 0f };
		unk_0x6EE2AE2D8DD2827E(1110, Param1 + Var1, 0f, 0f, -1f, func_204(0f, 1f, 0f), 0.8f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam3)
		{
			Var1 = { 0.4936f, -0.1763f, -0.0522f };
			unk_0x6EE2AE2D8DD2827E(2020, Param1 + Var1, 0f, 0f, -1f, 0f, -1f, 0f, 0.19f, 0.33f, 0.144f, 0f, 0f, 1f, -1f, 1, 0, 0);
			Var1 = { 1.0645f, 0.0483f, -0.0698f };
			unk_0x6EE2AE2D8DD2827E(2020, Param1 + Var1, 0f, 0f, -1f, 0f, -1f, 0f, 0.19f, 0.33f, 0.144f, 0f, 0f, 1f, -1f, 1, 0, 0);
			Var1 = { 1.6011f, -0.1704f, -0.1473f };
			unk_0x6EE2AE2D8DD2827E(2020, Param1 + Var1, 0f, 0f, -1f, 0f, -1f, 0f, 0.19f, 0.33f, 0.144f, 0f, 0f, 0.808f, -1f, 1, 0, 0);
		}
		func_203(*uParam0);
		return;
	}
}

void func_214(var uParam0, struct<3> Param1, var uParam2, bool bParam3)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_216(12);
	if (unk_0xA9C0BBFB9CBB66F1(iVar0))
	{
		*uParam0 = unk_0x0FDCFECB2EF2BC1C(28, iVar0, Param1, uParam2, 1, 1);
		unk_0xDBF5BCD703020A83(*uParam0, 1);
		unk_0x824F744352C8BC82(iVar0);
		unk_0xC595907BB71C921D(*uParam0, 0, 0);
		unk_0xC5DE9743D6DA2C15(*uParam0);
		Var1 = { 0.04f, 0.02f, 0f };
		unk_0x6EE2AE2D8DD2827E(1110, Param1 + Var1, 0f, 0f, -1f, func_204(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.01f, 0.05f, 0f };
		unk_0x6EE2AE2D8DD2827E(1110, Param1 + Var1, 0f, 0f, -1f, func_204(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		Var1 = { -0.03f, -0.01f, 0f };
		unk_0x6EE2AE2D8DD2827E(1110, Param1 + Var1, 0f, 0f, -1f, func_204(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam3)
		{
			Var1 = { 0.2417f, -0.3975f, -0.2282f };
			unk_0x6EE2AE2D8DD2827E(2020, Param1 + Var1, 0f, 0f, -1f, -0.9471f, -0.3209f, 0f, 0.19f, 0.33f, 0.106f, 0f, 0f, 1f, -1f, 1, 0, 0);
			Var1 = { 0.0747f, -0.8188f, -0.2576f };
			unk_0x6EE2AE2D8DD2827E(2020, Param1 + Var1, 0f, 0f, -1f, -0.9471f, -0.3209f, 0f, 0.19f, 0.33f, 0.106f, 0f, 0f, 1f, -1f, 1, 0, 0);
			Var1 = { 0.4322f, -1.1548f, -0.4902f };
			unk_0x6EE2AE2D8DD2827E(2020, Param1 + Var1, 0f, 0f, -1f, -0.9471f, -0.3209f, 0f, 0.19f, 0.33f, 0.106f, 0f, 0f, 0.802f, -1f, 1, 0, 0);
		}
		func_203(*uParam0);
		return;
	}
}

int func_215(int iParam0)
{
	switch (iParam0)
	{
		case 17:
			return joaat("u_m_y_cyclist_01");
		
		case 49:
			return joaat("dune");
		
		default:
	}
	return 0;
}

int func_216(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return joaat("a_c_rabbit_01");
		
		case 109:
			return joaat("a_c_boar");
		
		case 43:
			return joaat("a_c_deer");
		
		case 35:
			return joaat("emperor2");
		
		case 17:
			return joaat("scorcher");
		
		case 28:
			return joaat("a_c_mtlion");
		
		case 49:
			return joaat("cs_hunter");
		
		case 25:
			return joaat("a_m_y_hiker_01");
		
		case 14:
			return joaat("a_f_y_hippie_01");
		
		case 86:
			return joaat("a_m_m_hillbilly_01");
		
		default:
	}
	return 0;
}

void func_217()
{
	if (Global_109041.f_3 == unk_0x2053F6ACFD4ED4BC())
	{
		return;
	}
	Global_109041.f_3 = unk_0x2053F6ACFD4ED4BC();
	if (Global_109041.f_2 == 0f && Global_109041.f_1 == 0f)
	{
		return;
	}
	if (Global_109041.f_2 != Global_109041.f_1)
	{
		Global_109041.f_2 = (Global_109041.f_2 + Global_109041);
		if (Global_109041 <= 0f)
		{
			if (Global_109041.f_2 < Global_109041.f_1)
			{
				Global_109041.f_2 = Global_109041.f_1;
			}
		}
		else if (Global_109041.f_2 > Global_109041.f_1)
		{
			Global_109041.f_2 = Global_109041.f_1;
		}
	}
	unk_0x80B2E30CC8B794C0(0.5f, 0.5f, 1f, 1f, 255, 255, 255, round(Global_109041.f_2), 0);
}

int func_218(var uParam0)
{
	int iVar0;
	
	iVar0 = shift_right(uParam0 & 33423360, 17);
	return iVar0;
}

int func_219()
{
	var uVar0;
	
	uVar0 = func_220(Global_112293.f_10014.f_25, 3932160, 18);
	return uVar0;
}

int func_220(var uParam0, int iParam1, int iParam2)
{
	return shift_right((uParam0 && iParam1), iParam2);
}

int func_221()
{
	var uVar0;
	
	uVar0 = func_220(Global_112293.f_10014.f_25, 245760, 14);
	return uVar0;
}

struct<8> func_222(char* sParam0, char* sParam1, char* sParam2, char* sParam3)
{
	struct<8> Var0;
	
	StringCopy(&Var0, sParam1, 32);
	StringConCat(&Var0, sParam0, 32);
	StringConCat(&Var0, sParam3, 32);
	StringConCat(&Var0, sParam2, 32);
	return Var0;
}

void func_223(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = to_float(iParam0);
	if (iParam1 <= 0)
	{
		Global_109041 = 0f;
		Global_109041.f_1 = fVar0;
		Global_109041.f_2 = fVar0;
	}
	else
	{
		fVar1 = (fVar0 - Global_109041.f_2);
		fVar2 = (to_float(iParam1) / (unk_0x7FF6ACE380ED166C() * 1000f));
		Global_109041 = (fVar1 / fVar2);
		Global_109041.f_1 = fVar0;
	}
}

bool func_224(bool bParam0)
{
	if (bParam0)
	{
		return Global_109041.f_2 > 0.5f;
	}
	return Global_109041.f_2 >= 255f;
}

void func_225(var uParam0, bool bParam1)
{
	struct<8> Var0;
	
	if (unk_0x419E13582192CFEA(uParam0->f_14))
	{
		if (bParam1)
		{
			unk_0x5420D0D520CF44D0(&(uParam0->f_14));
		}
		else
		{
			unk_0x795957CD3A0042C8(&(uParam0->f_14));
		}
	}
	if (unk_0x419E13582192CFEA(uParam0->f_13))
	{
		if (bParam1)
		{
			unk_0xC606AE2A3209945E(&(uParam0->f_13));
		}
		else
		{
			unk_0x0F3BD19FF11738D3(&(uParam0->f_13));
		}
	}
	if (unk_0x234B68AC2E35ED5A(*uParam0, 2))
	{
		unk_0x824F744352C8BC82(func_216(49));
		unk_0x824F744352C8BC82(func_215(49));
		unk_0x824F744352C8BC82(func_216(25));
		unk_0x824F744352C8BC82(func_216(14));
		unk_0x824F744352C8BC82(func_216(86));
		unk_0x824F744352C8BC82(func_216(43));
		unk_0x824F744352C8BC82(func_216(28));
		unk_0x824F744352C8BC82(func_216(109));
		unk_0x824F744352C8BC82(func_216(35));
		unk_0xC664C0067EEAB8D1(uParam0, 2);
	}
	if (uParam0->f_1 != 0)
	{
		unk_0xAEBEF7AEA5E74A38(uParam0->f_1);
		uParam0->f_1 = 0;
	}
	Var0 = { func_222("til_P_", "Exec_U", "xer_Scene", "B_Mi") };
	if (unk_0xB30CD10E2CD1B67D(&Var0))
	{
		unk_0xC0BBE340BE2AA02D(&Var0);
	}
}

int func_226()
{
	return joaat("ig_orleans");
}

int func_227()
{
	return unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269());
}

bool func_228(var uParam0)
{
	var uVar0;
	
	*uParam0 = *uParam0;
	return ((((unk_0x234B68AC2E35ED5A(Global_112293.f_10014.f_25, 7) && !unk_0x234B68AC2E35ED5A(Global_112293.f_10014.f_25, 8)) && func_17(13)) && func_227() == func_226()) && !func_229(&uVar0));
}

int func_229(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
	{
		if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
		{
			iVar0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
			if (unk_0x419E13582192CFEA(iVar0))
			{
				if (!unk_0xE50EB54E0F21BED0(iVar0, 0))
				{
					iVar2 = unk_0x6471F4759775FCA4(iVar0);
					if (!(((unk_0x2F040F7AF0534E16(iVar2) || iVar2 == joaat("voltic")) || iVar2 == joaat("dilettante")) || iVar2 == joaat("dilettante2")))
					{
						iVar1 = 1;
					}
				}
			}
		}
	}
	*uParam0 = iVar0;
	return iVar1;
}

void func_230(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_231(var uParam0)
{
	func_234(uParam0, 0, 1, 1, Global_109079[0 /*13*/][0 /*3*/], Global_109079[0 /*13*/][1 /*3*/], Global_109079[0 /*13*/][2 /*3*/], Global_109079[0 /*13*/][3 /*3*/]);
	func_232(uParam0, 0, 3, 1, Global_109079[1 /*13*/][0 /*3*/], Global_109079[1 /*13*/][1 /*3*/], Global_109079[1 /*13*/][2 /*3*/]);
	func_232(uParam0, 0, 4, 1, Global_109079[2 /*13*/][0 /*3*/], Global_109079[2 /*13*/][1 /*3*/], Global_109079[2 /*13*/][2 /*3*/]);
	func_232(uParam0, 1, 2, 1, Global_109079[3 /*13*/][0 /*3*/], Global_109079[3 /*13*/][1 /*3*/], Global_109079[3 /*13*/][2 /*3*/]);
	func_232(uParam0, 1, 5, 1, Global_109079[4 /*13*/][0 /*3*/], Global_109079[4 /*13*/][1 /*3*/], Global_109079[4 /*13*/][2 /*3*/]);
	func_232(uParam0, 2, 3, 1, Global_109079[5 /*13*/][0 /*3*/], Global_109079[5 /*13*/][1 /*3*/], Global_109079[5 /*13*/][2 /*3*/]);
	func_232(uParam0, 3, 5, 1, Global_109079[6 /*13*/][0 /*3*/], Global_109079[6 /*13*/][1 /*3*/], Global_109079[6 /*13*/][2 /*3*/]);
	func_232(uParam0, 3, 6, 1, Global_109079[7 /*13*/][0 /*3*/], Global_109079[7 /*13*/][1 /*3*/], Global_109079[7 /*13*/][2 /*3*/]);
	func_232(uParam0, 4, 5, 1, Global_109079[8 /*13*/][0 /*3*/], Global_109079[8 /*13*/][1 /*3*/], Global_109079[8 /*13*/][2 /*3*/]);
	func_232(uParam0, 4, 6, 1, Global_109079[9 /*13*/][0 /*3*/], Global_109079[9 /*13*/][1 /*3*/], Global_109079[9 /*13*/][2 /*3*/]);
	func_232(uParam0, 5, 6, 1, Global_109079[10 /*13*/][0 /*3*/], Global_109079[10 /*13*/][1 /*3*/], Global_109079[10 /*13*/][2 /*3*/]);
	func_234(uParam0, 5, 8, 1, Global_109079[11 /*13*/][0 /*3*/], Global_109079[11 /*13*/][1 /*3*/], Global_109079[11 /*13*/][2 /*3*/], Global_109079[11 /*13*/][3 /*3*/]);
	func_232(uParam0, 6, 7, 1, Global_109079[12 /*13*/][0 /*3*/], Global_109079[12 /*13*/][1 /*3*/], Global_109079[12 /*13*/][2 /*3*/]);
	func_232(uParam0, 6, 8, 1, Global_109079[13 /*13*/][0 /*3*/], Global_109079[13 /*13*/][1 /*3*/], Global_109079[13 /*13*/][2 /*3*/]);
	func_232(uParam0, 7, 8, 1, Global_109079[14 /*13*/][0 /*3*/], Global_109079[14 /*13*/][1 /*3*/], Global_109079[14 /*13*/][2 /*3*/]);
	func_234(uParam0, 7, 9, 1, Global_109079[15 /*13*/][0 /*3*/], Global_109079[15 /*13*/][1 /*3*/], Global_109079[15 /*13*/][2 /*3*/], Global_109079[15 /*13*/][3 /*3*/]);
	func_232(uParam0, 7, 10, 1, Global_109079[16 /*13*/][0 /*3*/], Global_109079[16 /*13*/][1 /*3*/], Global_109079[16 /*13*/][2 /*3*/]);
	func_232(uParam0, 8, 9, 1, Global_109079[17 /*13*/][0 /*3*/], Global_109079[17 /*13*/][1 /*3*/], Global_109079[17 /*13*/][2 /*3*/]);
	func_232(uParam0, 8, 10, 1, Global_109079[18 /*13*/][0 /*3*/], Global_109079[18 /*13*/][1 /*3*/], Global_109079[18 /*13*/][2 /*3*/]);
	func_232(uParam0, 9, 10, 1, Global_109079[19 /*13*/][0 /*3*/], Global_109079[19 /*13*/][1 /*3*/], Global_109079[19 /*13*/][2 /*3*/]);
	if (func_221() == func_219())
	{
		func_185(uParam0);
	}
	func_166(uParam0, 0);
}

void func_232(var uParam0, int iParam1, int iParam2, bool bParam3, struct<3> Param4, struct<3> Param5, struct<3> Param6)
{
	func_233(uParam0, iParam1, iParam2, bParam3, Param4.x, Param4.f_1, Param4.f_2, Param5.x, Param5.f_1, Param5.f_2, Param6.x, Param6.f_1, Param6.f_2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}

void func_233(var uParam0, int iParam1, int iParam2, bool bParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, float fParam13, float fParam14, float fParam15, float fParam16, float fParam17, float fParam18, float fParam19, float fParam20, float fParam21, float fParam22, float fParam23, float fParam24, float fParam25, float fParam26, float fParam27)
{
	int iVar0;
	
	if (uParam0->f_6 >= 64)
	{
		return;
	}
	if (((iParam1 >= 11 || iParam2 >= 11) || iParam1 < 0) || iParam2 < 0)
	{
		return;
	}
	Global_109508[iParam1 /*12*/][iParam2] = uParam0->f_6;
	Global_109641[iParam1 /*12*/][iParam2] = 0;
	if (bParam3)
	{
		Global_109641[iParam2 /*12*/][iParam1] = 1;
		Global_109508[iParam2 /*12*/][iParam1] = uParam0->f_6;
	}
	else
	{
		Global_109641[iParam2 /*12*/][iParam1] = 0;
		Global_109508[iParam2 /*12*/][iParam1] = -1;
	}
	iVar0 = 0;
	if ((fParam4 != 0f && fParam5 != 0f) && fParam6 != 0f)
	{
		Global_109774[uParam0->f_6 /*14*/].f_1[iVar0 /*3*/] = { fParam4, fParam5, fParam6 };
		iVar0++;
	}
	if ((fParam7 != 0f && fParam8 != 0f) && fParam9 != 0f)
	{
		Global_109774[uParam0->f_6 /*14*/].f_1[iVar0 /*3*/] = { fParam7, fParam8, fParam9 };
		iVar0++;
	}
	if ((fParam10 != 0f && fParam11 != 0f) && fParam12 != 0f)
	{
		Global_109774[uParam0->f_6 /*14*/].f_1[iVar0 /*3*/] = { fParam10, fParam11, fParam12 };
		iVar0++;
	}
	if ((fParam13 != 0f && fParam14 != 0f) && fParam15 != 0f)
	{
		Global_109774[uParam0->f_6 /*14*/].f_1[iVar0 /*3*/] = { fParam13, fParam14, fParam15 };
		iVar0++;
	}
	if ((fParam16 != 0f && fParam17 != 0f) && fParam18 != 0f)
	{
		Global_109774[uParam0->f_6 /*14*/].f_1[iVar0 /*3*/] = { fParam16, fParam17, fParam18 };
		iVar0++;
	}
	if ((fParam19 != 0f && fParam20 != 0f) && fParam21 != 0f)
	{
		Global_109774[uParam0->f_6 /*14*/].f_1[iVar0 /*3*/] = { fParam19, fParam20, fParam21 };
		iVar0++;
	}
	if ((fParam22 != 0f && fParam23 != 0f) && fParam24 != 0f)
	{
		Global_109774[uParam0->f_6 /*14*/].f_1[iVar0 /*3*/] = { fParam22, fParam23, fParam24 };
		iVar0++;
	}
	if ((fParam25 != 0f && fParam26 != 0f) && fParam27 != 0f)
	{
		Global_109774[uParam0->f_6 /*14*/].f_1[iVar0 /*3*/] = { fParam25, fParam26, fParam27 };
		iVar0++;
	}
	Global_109774[uParam0->f_6 /*14*/] = iVar0;
	uParam0->f_6++;
}

void func_234(var uParam0, int iParam1, int iParam2, bool bParam3, struct<3> Param4, struct<3> Param5, struct<3> Param6, struct<3> Param7)
{
	func_233(uParam0, iParam1, iParam2, bParam3, Param4.x, Param4.f_1, Param4.f_2, Param5.x, Param5.f_1, Param5.f_2, Param6.x, Param6.f_1, Param6.f_2, Param7.x, Param7.f_1, Param7.f_2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}

bool func_235(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_236()
{
	return Global_109040 & 511 == 511;
}

void func_237()
{
	switch (func_102())
	{
		case 1:
			if (!iLocal_70)
			{
				if (unk_0xA12BCF836724905A(unk_0x1146A9AE09CE2B14(), 0))
				{
					unk_0x78B2DF314748056B(5, 1166638144, joaat("COP"));
					iLocal_70 = 1;
				}
			}
			else if (!unk_0xA12BCF836724905A(unk_0x1146A9AE09CE2B14(), 0))
			{
				unk_0x78B2DF314748056B(255, 1166638144, joaat("COP"));
				iLocal_70 = 0;
			}
			break;
	}
}

void func_238()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	struct<27> Var7;
	int iVar8;
	int iVar9;
	bool bVar10;
	bool bVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	
	if (unk_0xDFB7BFA6482FEE1E() > iLocal_66)
	{
		iVar0 = 0;
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = Global_96683[iLocal_68];
		Global_96683[iLocal_68] = 0;
		Global_96691[iLocal_68] = 0;
		Global_96695[iLocal_68] = 0;
		iVar0 = 0;
		while (iVar0 < 7)
		{
			iVar1 = Global_90122[iVar0 /*5*/];
			iVar2 = Global_90122[iVar0 /*5*/].f_2;
			if (!iVar1 == -1)
			{
				if (!iVar2 == -1)
				{
					if (!Global_96303[iVar2 /*17*/].f_2)
					{
						iVar4 = Global_77517.f_109[iVar1 /*4*/];
						if (!unk_0x234B68AC2E35ED5A(Global_90158[iVar4 /*34*/].f_15, 12))
						{
							iVar5 = func_263(iVar4);
							if (func_262(iVar5, iLocal_68))
							{
								if (iVar2 != -1)
								{
									Global_96687[iLocal_68] = iVar4;
									Global_96683[iLocal_68]++;
									func_260(iLocal_68, func_261(iVar4), 0, 0, 0);
								}
								else
								{
									Global_96687[iLocal_68] = iVar4;
									Global_96683[iLocal_68]++;
									func_260(iLocal_68, func_261(iVar4), 1, 0, 0);
								}
							}
							else if (iLocal_68 == 1)
							{
								if (iVar4 == 15)
								{
									Global_96687[iLocal_68] = iVar4;
									Global_96683[iLocal_68]++;
									func_260(iLocal_68, func_261(iVar4), 0, 0, 0);
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < Global_112293.f_7686.f_136)
		{
			if (unk_0x234B68AC2E35ED5A(Global_112293.f_7686[iVar0 /*15*/].f_1, 2) || unk_0x234B68AC2E35ED5A(Global_112293.f_7686[iVar0 /*15*/].f_1, 3))
			{
				if (unk_0x234B68AC2E35ED5A(Global_112293.f_7686[iVar0 /*15*/].f_2, iLocal_68))
				{
					Global_96691[iLocal_68]++;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < Global_112293.f_7686.f_764)
		{
			if (unk_0x234B68AC2E35ED5A(Global_112293.f_7686.f_651[iVar0 /*14*/].f_1, 2) || unk_0x234B68AC2E35ED5A(Global_112293.f_7686.f_651[iVar0 /*14*/].f_1, 3))
			{
				if (unk_0x234B68AC2E35ED5A(Global_112293.f_7686.f_651[iVar0 /*14*/].f_2, iLocal_68))
				{
					Global_96695[iLocal_68]++;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < Global_112293.f_7686.f_866)
		{
			if (unk_0x234B68AC2E35ED5A(Global_112293.f_7686.f_765[iVar0 /*10*/].f_1, 2) || unk_0x234B68AC2E35ED5A(Global_112293.f_7686.f_765[iVar0 /*10*/].f_1, 3))
			{
				if (unk_0x234B68AC2E35ED5A(Global_112293.f_7686.f_765[iVar0 /*10*/].f_2, iLocal_68))
				{
					Global_96695[iLocal_68]++;
				}
			}
			iVar0++;
		}
		if (!func_259(45))
		{
			if (unk_0x636F1F53CC61D2C9(joaat("fbi4_prep3amb")) > 0)
			{
				Global_96683[iLocal_68]++;
				func_260(iLocal_68, func_261(35), 0, 0, 1);
			}
		}
		if (!func_259(12))
		{
			if (unk_0x636F1F53CC61D2C9(joaat("agency_prep2amb")) > 0)
			{
				if (iLocal_68 != 2)
				{
					Global_96683[iLocal_68]++;
					func_260(iLocal_68, func_261(67), 0, 0, 1);
				}
			}
		}
		if (!func_259(34))
		{
			if (unk_0x636F1F53CC61D2C9(joaat("finale_heist_prepeamb")) > 0)
			{
				Global_96683[iLocal_68]++;
				func_260(iLocal_68, func_261(83), 0, 0, 1);
			}
		}
		iVar0 = 0;
		while (iVar0 < 63)
		{
			iVar6 = iVar0;
			if (((unk_0x234B68AC2E35ED5A(Global_112293.f_18572[iVar0 /*6*/], 0) && unk_0x234B68AC2E35ED5A(Global_112293.f_18572[iVar0 /*6*/], 1)) && unk_0x234B68AC2E35ED5A(Global_112293.f_18572[iVar0 /*6*/], 2)) && !unk_0x234B68AC2E35ED5A(Global_112293.f_18572[iVar0 /*6*/], 3))
			{
				iVar8 = iVar0;
				iVar9 = 0;
				while (iVar8 > 31)
				{
					iVar8 = (iVar8 - 32);
					iVar9++;
				}
				if (unk_0x234B68AC2E35ED5A(Global_112293.f_18572.f_390[iVar9], iVar8))
				{
					func_256(iVar6, &Var7);
					if (unk_0x234B68AC2E35ED5A(Var7.f_26, iLocal_68))
					{
						func_260(iLocal_68, func_254(iVar6), 0, 1, 0);
						Global_96683[iLocal_68]++;
					}
				}
			}
			iVar0++;
		}
		if (iVar3 != Global_96683[iLocal_68])
		{
		}
		iLocal_68++;
		if (iLocal_68 >= 3)
		{
			iLocal_68 = 0;
			iLocal_66 = unk_0xDFB7BFA6482FEE1E() + 2000;
		}
	}
	bVar10 = func_253();
	if ((!func_252(9) || !func_252(10)) || !func_252(11))
	{
		if (!bVar10)
		{
			if (func_95(62))
			{
				if (func_95(64))
				{
					func_251(9);
					func_251(10);
					func_251(11);
				}
				else if (func_250(1))
				{
					if (iLocal_67 != -1)
					{
						if (unk_0xDFB7BFA6482FEE1E() > iLocal_67)
						{
							switch (func_248("AM_H_SWTCH4"))
							{
								case 2:
									func_246("AM_H_SWTCH4", 1, 0, 1000, 10000, 7, 0, 0, 0);
									break;
								
								case 1:
									if (!func_252(9))
									{
										func_251(9);
										iLocal_67 = -1;
										StringCopy(&Global_110936, "", 16);
									}
									else if (!func_252(10))
									{
										func_251(10);
										iLocal_67 = -1;
										StringCopy(&Global_110936, "", 16);
									}
									else if (!func_252(11))
									{
										func_251(11);
										iLocal_67 = -1;
										StringCopy(&Global_110936, "", 16);
									}
									break;
								}
							}
					}
				}
				else if (iLocal_67 == -1)
				{
					iLocal_67 = unk_0xDFB7BFA6482FEE1E() + 15000;
				}
			}
		}
	}
	if (!func_252(12))
	{
		if (!bVar10)
		{
			if (func_95(45))
			{
				if (func_95(14))
				{
					func_251(12);
				}
				else if (func_250(1))
				{
					if (iLocal_67 != -1)
					{
						if (unk_0xDFB7BFA6482FEE1E() > iLocal_67)
						{
							switch (func_248("AM_H_SWTCH8"))
							{
								case 2:
									func_246("AM_H_SWTCH8", 1, 0, 1000, 10000, 7, 0, 0, 0);
									break;
								
								case 1:
									if (!func_252(12))
									{
										func_251(12);
										iLocal_67 = -1;
										StringCopy(&Global_110936, "", 16);
									}
									break;
								}
							}
					}
				}
				else if (iLocal_67 == -1)
				{
					iLocal_67 = unk_0xDFB7BFA6482FEE1E() + 15000;
				}
			}
		}
	}
	if (!bVar10)
	{
		if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
		{
			if (unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) > 0)
			{
				if (!func_252(13))
				{
					if (func_104(func_102()))
					{
						if (func_95(2))
						{
							switch (func_248("AM_H_SWTCH7"))
							{
								case 2:
									if (func_250(1))
									{
										func_246("AM_H_SWTCH7", 1, 0, 1000, 10000, func_245(), 0, 0, 0);
									}
									break;
								
								case 1:
									func_251(13);
									break;
								}
							}
						}
				}
			}
			else if (!func_252(7))
			{
				if (func_95(2))
				{
					bVar11 = false;
					iVar12 = 0;
					while (iVar12 < 3)
					{
						if (Global_96683[iVar12] > 0)
						{
							bVar11 = true;
						}
						iVar12++;
					}
					if (bVar11)
					{
						if (func_250(1))
						{
							func_240("AM_H_SWTCH0", 1);
							switch (func_248("AM_H_SWTCH1"))
							{
								case 2:
									func_246("AM_H_SWTCH1", 1, 0, 1000, 4000, 7, 0, 0, 0);
									func_239();
									break;
								
								case 1:
									func_251(7);
									break;
								}
							}
						}
				}
			}
			else if (!func_252(8))
			{
				if (func_95(2))
				{
					bVar13 = false;
					iVar14 = 0;
					while (iVar14 < 3)
					{
						if (Global_96683[iVar14] > 0)
						{
							bVar13 = true;
						}
						iVar14++;
					}
					if (bVar13)
					{
						switch (func_248("AM_H_SWTCH9"))
						{
							case 2:
								func_246("AM_H_SWTCH9", 1, 0, 1000, 10000, 7, 0, 0, 0);
								break;
							
							case 1:
								func_251(8);
								break;
							}
						}
					}
				}
			}
	}
}

void func_239()
{
	Global_110935 = unk_0xDFB7BFA6482FEE1E();
}

void func_240(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_110933 && iParam1)
	{
		if (func_244(sParam0) && !unk_0x48AD110DC0A6BE25())
		{
			unk_0x66AE54CE92457FEE(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_112293.f_20408.f_145)
	{
		if (unk_0xDA654EB115F9FF7D(sParam0, &(Global_112293.f_20408[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_112293.f_20408.f_145 - 2))
			{
				func_243(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_242((Global_112293.f_20408.f_145 - 1));
			Global_112293.f_20408.f_145 = (Global_112293.f_20408.f_145 - 1);
			func_241();
			return;
		}
		iVar0++;
	}
}

void func_241()
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

void func_242(int iParam0)
{
	StringCopy(&(Global_112293.f_20408[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_112293.f_20408[iParam0 /*16*/].f_4), "", 16);
	Global_112293.f_20408[iParam0 /*16*/].f_8 = 0;
	Global_112293.f_20408[iParam0 /*16*/].f_9 = 0;
	Global_112293.f_20408[iParam0 /*16*/].f_11 = 0;
	Global_112293.f_20408[iParam0 /*16*/].f_10 = -1;
	Global_112293.f_20408[iParam0 /*16*/].f_12 = 0;
	Global_112293.f_20408[iParam0 /*16*/].f_13 = 0;
	Global_112293.f_20408[iParam0 /*16*/].f_14 = 0;
	Global_112293.f_20408[iParam0 /*16*/].f_15 = 0;
}

void func_243(int iParam0, int iParam1)
{
	Global_112293.f_20408[iParam0 /*16*/] = { Global_112293.f_20408[iParam1 /*16*/] };
	Global_112293.f_20408[iParam0 /*16*/].f_4 = { Global_112293.f_20408[iParam1 /*16*/].f_4 };
	Global_112293.f_20408[iParam0 /*16*/].f_8 = Global_112293.f_20408[iParam1 /*16*/].f_8;
	Global_112293.f_20408[iParam0 /*16*/].f_10 = Global_112293.f_20408[iParam1 /*16*/].f_10;
	Global_112293.f_20408[iParam0 /*16*/].f_9 = Global_112293.f_20408[iParam1 /*16*/].f_9;
	Global_112293.f_20408[iParam0 /*16*/].f_11 = Global_112293.f_20408[iParam1 /*16*/].f_11;
	Global_112293.f_20408[iParam0 /*16*/].f_12 = Global_112293.f_20408[iParam1 /*16*/].f_12;
	Global_112293.f_20408[iParam0 /*16*/].f_13 = Global_112293.f_20408[iParam1 /*16*/].f_13;
	Global_112293.f_20408[iParam0 /*16*/].f_14 = Global_112293.f_20408[iParam1 /*16*/].f_14;
	Global_112293.f_20408[iParam0 /*16*/].f_15 = Global_112293.f_20408[iParam1 /*16*/].f_15;
}

var func_244(var uParam0)
{
	unk_0x4A4799828818A508(uParam0);
	return unk_0x0222F263F70347A8(0);
}

int func_245()
{
	func_103();
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

void func_246(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_247(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_247(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_241();
	}
}

int func_248(char* sParam0)
{
	if (unk_0xDA654EB115F9FF7D(sParam0, &Global_110936))
	{
		return 1;
	}
	if (func_249(sParam0))
	{
		return 0;
	}
	return 2;
}

int func_249(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_112293.f_20408.f_145)
	{
		if (unk_0xDA654EB115F9FF7D(sParam0, &(Global_112293.f_20408[iVar0 /*16*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_250(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22531.f_4 && Global_22531.f_104 == 4);
	}
	return Global_22531.f_4;
}

void func_251(int iParam0)
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

int func_252(int iParam0)
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

int func_253()
{
	if (Global_42009 == 15)
	{
		return 0;
	}
	return 1;
}

struct<2> func_254(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_255(iParam0) };
	if (unk_0xAB6A270F84A8781E(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_255(int iParam0)
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

void func_256(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_257(uParam1, "Abigail1", func_254(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_258(iParam0), 1, 0);
			break;
		
		case 1:
			func_257(uParam1, "Abigail2", func_254(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_258(iParam0), 1, 0);
			break;
		
		case 2:
			func_257(uParam1, "Barry1", func_254(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_258(iParam0), 1, 0);
			break;
		
		case 3:
			func_257(uParam1, "Barry2", func_254(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_258(iParam0), 1, 1);
			break;
		
		case 4:
			func_257(uParam1, "Barry3", func_254(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_258(iParam0), 0, 0);
			break;
		
		case 5:
			func_257(uParam1, "Barry3A", func_254(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_258(iParam0), 0, 1);
			break;
		
		case 6:
			func_257(uParam1, "Barry3C", func_254(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_258(iParam0), 0, 1);
			break;
		
		case 7:
			func_257(uParam1, "Barry4", func_254(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_258(iParam0), 0, 0);
			break;
		
		case 8:
			func_257(uParam1, "Dreyfuss1", func_254(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_258(iParam0), 0, 0);
			break;
		
		case 9:
			func_257(uParam1, "Epsilon1", func_254(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_258(iParam0), 0, 0);
			break;
		
		case 10:
			func_257(uParam1, "Epsilon2", func_254(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_258(iParam0), 1, 0);
			break;
		
		case 11:
			func_257(uParam1, "Epsilon3", func_254(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_258(iParam0), 0, 0);
			break;
		
		case 12:
			func_257(uParam1, "Epsilon4", func_254(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_258(iParam0), 0, 0);
			break;
		
		case 13:
			func_257(uParam1, "Epsilon5", func_254(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_258(iParam0), 1, 0);
			break;
		
		case 14:
			func_257(uParam1, "Epsilon6", func_254(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_258(iParam0), 0, 1);
			break;
		
		case 15:
			func_257(uParam1, "Epsilon7", func_254(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_258(iParam0), 0, 0);
			break;
		
		case 16:
			func_257(uParam1, "Epsilon8", func_254(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_258(iParam0), 1, 0);
			break;
		
		case 17:
			func_257(uParam1, "Extreme1", func_254(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_258(iParam0), 0, 1);
			break;
		
		case 18:
			func_257(uParam1, "Extreme2", func_254(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_258(iParam0), 0, 1);
			break;
		
		case 19:
			func_257(uParam1, "Extreme3", func_254(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_258(iParam0), 0, 1);
			break;
		
		case 20:
			func_257(uParam1, "Extreme4", func_254(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_258(iParam0), 0, 0);
			break;
		
		case 21:
			func_257(uParam1, "Fanatic1", func_254(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_258(iParam0), 1, 0);
			break;
		
		case 22:
			func_257(uParam1, "Fanatic2", func_254(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_258(iParam0), 1, 0);
			break;
		
		case 23:
			func_257(uParam1, "Fanatic3", func_254(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_258(iParam0), 0, 1);
			break;
		
		case 24:
			func_257(uParam1, "Hao1", func_254(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_258(iParam0), 0, 1);
			break;
		
		case 25:
			func_257(uParam1, "Hunting1", func_254(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_258(iParam0), 0, 1);
			break;
		
		case 26:
			func_257(uParam1, "Hunting2", func_254(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_258(iParam0), 0, 1);
			break;
		
		case 27:
			func_257(uParam1, "Josh1", func_254(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_258(iParam0), 1, 0);
			break;
		
		case 28:
			func_257(uParam1, "Josh2", func_254(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_258(iParam0), 1, 1);
			break;
		
		case 29:
			func_257(uParam1, "Josh3", func_254(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_258(iParam0), 1, 1);
			break;
		
		case 30:
			func_257(uParam1, "Josh4", func_254(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_258(iParam0), 1, 0);
			break;
		
		case 31:
			func_257(uParam1, "Maude1", func_254(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_258(iParam0), 0, 1);
			break;
		
		case 32:
			func_257(uParam1, "Minute1", func_254(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_258(iParam0), 0, 1);
			break;
		
		case 33:
			func_257(uParam1, "Minute2", func_254(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_258(iParam0), 0, 1);
			break;
		
		case 34:
			func_257(uParam1, "Minute3", func_254(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_258(iParam0), 0, 1);
			break;
		
		case 35:
			func_257(uParam1, "MrsPhilips1", func_254(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_258(iParam0), 0, 0);
			break;
		
		case 36:
			func_257(uParam1, "MrsPhilips2", func_254(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_258(iParam0), 0, 0);
			break;
		
		case 37:
			func_257(uParam1, "Nigel1", func_254(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_258(iParam0), 1, 0);
			break;
		
		case 38:
			func_257(uParam1, "Nigel1A", func_254(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_258(iParam0), 1, 1);
			break;
		
		case 39:
			func_257(uParam1, "Nigel1B", func_254(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_258(iParam0), 1, 1);
			break;
		
		case 40:
			func_257(uParam1, "Nigel1C", func_254(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_258(iParam0), 1, 1);
			break;
		
		case 41:
			func_257(uParam1, "Nigel1D", func_254(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_258(iParam0), 1, 1);
			break;
		
		case 42:
			func_257(uParam1, "Nigel2", func_254(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_258(iParam0), 1, 1);
			break;
		
		case 43:
			func_257(uParam1, "Nigel3", func_254(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_258(iParam0), 1, 1);
			break;
		
		case 44:
			func_257(uParam1, "Omega1", func_254(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_258(iParam0), 0, 0);
			break;
		
		case 45:
			func_257(uParam1, "Omega2", func_254(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_258(iParam0), 0, 0);
			break;
		
		case 46:
			func_257(uParam1, "Paparazzo1", func_254(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_258(iParam0), 0, 1);
			break;
		
		case 47:
			func_257(uParam1, "Paparazzo2", func_254(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_258(iParam0), 0, 1);
			break;
		
		case 48:
			func_257(uParam1, "Paparazzo3", func_254(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_258(iParam0), 0, 0);
			break;
		
		case 49:
			func_257(uParam1, "Paparazzo3A", func_254(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_258(iParam0), 0, 1);
			break;
		
		case 50:
			func_257(uParam1, "Paparazzo3B", func_254(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_258(iParam0), 0, 1);
			break;
		
		case 51:
			func_257(uParam1, "Paparazzo4", func_254(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_258(iParam0), 0, 0);
			break;
		
		case 52:
			func_257(uParam1, "Rampage1", func_254(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_258(iParam0), 0, 0);
			break;
		
		case 54:
			func_257(uParam1, "Rampage3", func_254(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_258(iParam0), 1, 0);
			break;
		
		case 55:
			func_257(uParam1, "Rampage4", func_254(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_258(iParam0), 1, 0);
			break;
		
		case 56:
			func_257(uParam1, "Rampage5", func_254(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_258(iParam0), 0, 0);
			break;
		
		case 53:
			func_257(uParam1, "Rampage2", func_254(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_258(iParam0), 1, 0);
			break;
		
		case 57:
			func_257(uParam1, "TheLastOne", func_254(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_258(iParam0), 0, 1);
			break;
		
		case 58:
			func_257(uParam1, "Tonya1", func_254(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_258(iParam0), 0, 1);
			break;
		
		case 59:
			func_257(uParam1, "Tonya2", func_254(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_258(iParam0), 0, 1);
			break;
		
		case 60:
			func_257(uParam1, "Tonya3", func_254(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_258(iParam0), 0, 1);
			break;
		
		case 61:
			func_257(uParam1, "Tonya4", func_254(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_258(iParam0), 0, 1);
			break;
		
		case 62:
			func_257(uParam1, "Tonya5", func_254(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_258(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_257(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
{
	uParam0->f_4 = iParam4;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam3;
	uParam0->f_5 = iParam5;
	uParam0->f_6 = { Param6 };
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

int func_258(int iParam0)
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

int func_259(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_112293.f_9083.f_99.f_58[iParam0];
}

void func_260(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5)
{
}

struct<2> func_261(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "M_", 8);
	StringConCat(&Var0, &(Global_90158[iParam0 /*34*/].f_8), 8);
	if (iParam0 == 90)
	{
		switch (Global_112293.f_9083.f_99.f_205[7])
		{
			case 1:
				StringConCat(&Var0, "A", 8);
				break;
			
			case 2:
				StringConCat(&Var0, "B", 8);
				break;
			
			default:
				StringConCat(&Var0, "A", 8);
				break;
			}
	}
	return Var0;
}

int func_262(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
			return unk_0x234B68AC2E35ED5A(iParam0, iParam1);
		
		default:
	}
	return 0;
}

int func_263(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_90158[iParam0 /*34*/].f_11;
}

void func_264()
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	var uVar4[5];
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	struct<2> Var19;
	
	iVar7 = func_102();
	if (!func_104(iVar7))
	{
		return;
	}
	if (((Global_112293.f_20116.f_130[iVar7 /*41*/].f_36 && Global_112293.f_20116.f_130[iVar7 /*41*/].f_35) && !Global_112293.f_20116.f_130[iVar7 /*41*/].f_34) && !unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		iVar0 = 0;
		iVar6 = Global_112293.f_2361.f_539.f_4317[iVar7];
		while (func_380(iVar7, iVar0, &sVar3, &iVar5))
		{
			if (iVar5 == iVar6)
			{
				iVar1 = unk_0xBC28F9DB06EBE19C(unk_0x7D2B9E6A64637269(), &uVar4);
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					if (((((unk_0x419E13582192CFEA(uVar4[iVar2]) && unk_0xBFCE58B2B3249999(uVar4[iVar2], 0)) && unk_0xC5C459033A48B1E4(&sVar3, uVar4[iVar2])) && !func_379(uVar4[iVar2])) && !func_378(uVar4[iVar2])) && Global_112293.f_20116.f_130[iVar7 /*41*/] == unk_0x6471F4759775FCA4(uVar4[iVar2]))
					{
						if (!Global_112293.f_20116.f_130[iVar7 /*41*/].f_40)
						{
							uLocal_184 = Global_112293.f_20116.f_130[iVar7 /*41*/];
							iLocal_185 = 1;
							bLocal_186 = (!Global_112293.f_20116.f_281[iVar7] && iVar7 == 1);
							if (!bLocal_186)
							{
								func_347(iVar7, 80, Global_112293.f_20116.f_130[iVar7 /*41*/].f_27);
							}
							Global_112293.f_20116.f_130[iVar7 /*41*/].f_40 = 1;
						}
						func_344(uVar4[iVar2], &(Global_112293.f_20116.f_130[iVar7 /*41*/]));
						func_342(&(Global_112293.f_20116.f_130[iVar7 /*41*/]), iVar7);
						func_338(&(Global_112293.f_20116.f_130[iVar7 /*41*/].f_28));
						iVar11 = -1;
						iVar12 = -1;
						unk_0x63316D59F2B56D9A(uVar4[iVar2], &uLocal_203, &uLocal_204);
						unk_0x39A17B456BB9800A(uVar4[iVar2], &uLocal_205, &uLocal_206);
						switch (Global_112293.f_20116.f_130[iVar7 /*41*/].f_3)
						{
							case 0:
								iVar11 = 0;
								break;
							
							case 1:
								iVar11 = 1;
								break;
							
							case 2:
								iVar11 = 3;
								break;
							
							case 3:
								iVar11 = 4;
								break;
							
							case 4:
								iVar11 = 5;
								break;
						}
						switch (Global_112293.f_20116.f_130[iVar7 /*41*/].f_4)
						{
							case 0:
								iVar12 = 0;
								break;
							
							case 1:
								iVar12 = 1;
								break;
							
							case 2:
								iVar12 = 3;
								break;
							
							case 3:
								iVar12 = 4;
								break;
							
							case 4:
								iVar12 = 5;
								break;
						}
						if (iVar11 != 6 && iVar11 != 2)
						{
							unk_0x73156EBB4802E831(uVar4[iVar2], iVar11, 0, 0);
						}
						if (iVar12 != 6 && iVar12 != 2)
						{
							unk_0x4C282482B986CA53(uVar4[iVar2], iVar12, 0);
						}
						unk_0xC612552622E74D36(uVar4[iVar2], uLocal_203, uLocal_204);
						unk_0xA2FEFE3BBCD9FB23(uVar4[iVar2], uLocal_205, uLocal_206);
						if (func_379(uVar4[iVar2]))
						{
							iVar13 = 0;
							if (unk_0x69AF387D1A91914C(unk_0x6471F4759775FCA4(uVar4[iVar2])))
							{
								iVar13 = 1;
							}
							func_305(iVar7, &(uVar4[iVar2]), iVar13, 1);
						}
						else
						{
							func_305(iVar7, &(uVar4[iVar2]), 3, 1);
						}
						iVar2 = 100;
					}
					iVar2++;
				}
				iVar0 = 100;
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (Global_96711[iVar0] != 145 && Global_96721[iVar0] != 0)
		{
			if (unk_0x419E13582192CFEA(Global_96701[iVar0]) && unk_0xBFCE58B2B3249999(Global_96701[iVar0], 0))
			{
				Local_181[iVar0 /*3*/] = { unk_0xD6E677FAD7521410(Global_96701[iVar0], 1) };
				uLocal_182[iVar0] = unk_0xA8D713A937F31250(Global_96701[iVar0]);
				bVar9 = false;
				while (!bVar9 && func_380(Global_96711[iVar0], iVar10, &sVar3, &iVar5))
				{
					if (unk_0xC5C459033A48B1E4(&sVar3, Global_96701[iVar0]))
					{
						bVar9 = true;
						func_304(Global_96711[iVar0], iVar10, &(Local_181[iVar0 /*3*/]));
					}
					iVar10++;
				}
				iLocal_183[iVar0] = bVar9;
				if ((Global_112293.f_20116.f_130[iVar7 /*41*/].f_36 && Global_112293.f_20116.f_130[iVar7 /*41*/].f_35) && Global_112293.f_20116.f_130[iVar7 /*41*/] == Global_96721[iVar0])
				{
					if (!Global_112293.f_20116.f_130[iVar7 /*41*/].f_40)
					{
						uLocal_184 = Global_112293.f_20116.f_130[iVar7 /*41*/];
						iLocal_185 = 1;
						bLocal_186 = (!Global_112293.f_20116.f_281[iVar7] && iVar7 == 1);
						if (!bLocal_186)
						{
							func_347(iVar7, 80, Global_112293.f_20116.f_130[iVar7 /*41*/].f_27);
						}
						Global_112293.f_20116.f_130[iVar7 /*41*/].f_40 = 1;
					}
					func_344(Global_96701[iVar0], &(Global_112293.f_20116.f_130[iVar7 /*41*/]));
					func_342(&(Global_112293.f_20116.f_130[iVar7 /*41*/]), iVar7);
					func_338(&(Global_112293.f_20116.f_130[iVar7 /*41*/].f_28));
					iVar14 = -1;
					iVar15 = -1;
					unk_0x63316D59F2B56D9A(Global_96701[iVar0], &uLocal_203, &uLocal_204);
					unk_0x39A17B456BB9800A(Global_96701[iVar0], &uLocal_205, &uLocal_206);
					switch (Global_112293.f_20116.f_130[iVar7 /*41*/].f_3)
					{
						case 0:
							iVar14 = 0;
							break;
						
						case 1:
							iVar14 = 1;
							break;
						
						case 2:
							iVar14 = 3;
							break;
						
						case 3:
							iVar14 = 4;
							break;
						
						case 4:
							iVar14 = 5;
							break;
					}
					switch (Global_112293.f_20116.f_130[iVar7 /*41*/].f_4)
					{
						case 0:
							iVar15 = 0;
							break;
						
						case 1:
							iVar15 = 1;
							break;
						
						case 2:
							iVar15 = 3;
							break;
						
						case 3:
							iVar15 = 4;
							break;
						
						case 4:
							iVar15 = 5;
							break;
					}
					if (iVar14 != 6 && iVar14 != 2)
					{
						unk_0x73156EBB4802E831(Global_96701[iVar0], iVar14, 0, 0);
					}
					if (iVar15 != 6 && iVar15 != 2)
					{
						unk_0x4C282482B986CA53(Global_96701[iVar0], iVar15, 0);
					}
					unk_0xC612552622E74D36(Global_96701[iVar0], uLocal_203, uLocal_204);
					unk_0xA2FEFE3BBCD9FB23(Global_96701[iVar0], uLocal_205, uLocal_206);
					iVar16 = 0;
					if (unk_0x69AF387D1A91914C(unk_0x6471F4759775FCA4(Global_96701[iVar0])))
					{
						iVar16 = 1;
					}
					func_305(iVar7, &(Global_96701[iVar0]), iVar16, 1);
				}
			}
			else if (!unk_0x419E13582192CFEA(Global_96701[iVar0]) || !unk_0xBFCE58B2B3249999(Global_96701[iVar0], 0))
			{
				bVar8 = false;
				iVar6 = func_302(Local_181[iVar0 /*3*/], Global_96711[iVar0], 1);
				if (iVar6 != 10 && unk_0x0BABEFEA577FCFA4(Local_181[iVar0 /*3*/], Global_94408[iVar6 /*10*/].f_3, 1) > 200f)
				{
					bVar8 = true;
					if (unk_0x69AF387D1A91914C(Global_96721[iVar0]))
					{
						Global_96749[Global_96711[iVar0] /*3*/][1] = unk_0xDFB7BFA6482FEE1E();
					}
					else
					{
						Global_96749[Global_96711[iVar0] /*3*/][0] = unk_0xDFB7BFA6482FEE1E();
					}
				}
				if (iVar6 == 3 || iVar6 == 4)
				{
					bVar8 = true;
				}
				if (!iLocal_183[iVar0])
				{
					bVar8 = true;
				}
				if (bVar8)
				{
					if (unk_0x69AF387D1A91914C(Global_96721[iVar0]))
					{
						Global_112293.f_2361.f_539.f_3588[1 /*10*/][Global_96711[iVar0] /*3*/] = { 0f, 0f, 0f };
					}
					else
					{
						Global_112293.f_2361.f_539.f_3588[0 /*10*/][Global_96711[iVar0] /*3*/] = { 0f, 0f, 0f };
					}
					if (Global_96711[iVar0] == func_102())
					{
						Global_76066.f_584 = { 0f, 0f, 0f };
						Global_76066.f_587 = { 0f, 0f, 0f };
					}
				}
				else
				{
					if (unk_0x69AF387D1A91914C(Global_96721[iVar0]))
					{
						Global_112293.f_2361.f_539.f_3588[1 /*10*/][Global_96711[iVar0] /*3*/] = { Local_181[iVar0 /*3*/] };
						Global_112293.f_2361.f_539.f_3609[1 /*4*/][Global_96711[iVar0]] = uLocal_182[iVar0];
					}
					else
					{
						Global_112293.f_2361.f_539.f_3588[0 /*10*/][Global_96711[iVar0] /*3*/] = { Local_181[iVar0 /*3*/] };
						Global_112293.f_2361.f_539.f_3609[0 /*4*/][Global_96711[iVar0]] = uLocal_182[iVar0];
					}
					if (Global_96711[iVar0] == func_102())
					{
						Global_76066.f_584 = { 0f, 0f, 0f };
						Global_76066.f_587 = { 0f, 0f, 0f };
					}
				}
				Local_181[iVar0 /*3*/] = { 0f, 0f, 0f };
				iLocal_183[iVar0] = 0;
				Global_96701[iVar0] = 0;
				Global_96711[iVar0] = 145;
				Global_96721[iVar0] = 0;
			}
		}
		iVar0++;
	}
	if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
		{
			Global_99073[iVar7] = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
		}
		else
		{
			iLocal_187 = 0;
		}
		if (unk_0x419E13582192CFEA(Global_99073[iVar7]) && unk_0xBFCE58B2B3249999(Global_99073[iVar7], 0))
		{
			if (!Global_112293.f_32747.f_5588 && unk_0xDFB7BFA6482FEE1E() > iLocal_69)
			{
				if (func_301(Global_99073[iVar7], iVar7, 1))
				{
					iLocal_187 = 1;
				}
				else
				{
					if (iLocal_187)
					{
						func_287(Global_99073[iVar7], iVar7);
					}
					iLocal_187 = 0;
				}
				iLocal_69 = unk_0xDFB7BFA6482FEE1E() + 1000;
			}
			if (Global_99073[iVar7] != Global_96735[iVar7])
			{
				if (!Global_112293.f_20116[iVar7 /*43*/].f_40)
				{
					if (Global_112293.f_20116[iVar7 /*43*/] != unk_0x6471F4759775FCA4(Global_99073[iVar7]) || !unk_0xDA654EB115F9FF7D(&(Global_112293.f_20116[iVar7 /*43*/].f_19), unk_0x0B676D4511ABB729(Global_99073[iVar7])))
					{
						if (func_379(Global_99073[iVar7]))
						{
							bVar17 = true;
							if (iVar7 != func_286(Global_99073[iVar7]))
							{
								bVar17 = false;
							}
							else if ((iVar7 == 1 && unk_0x6471F4759775FCA4(Global_99073[iVar7]) == joaat("bagger")) && !Global_112293.f_9083.f_99.f_58[118])
							{
								bVar17 = false;
							}
							else if (!Global_112293.f_20116.f_277[iVar7] && unk_0x6471F4759775FCA4(Global_99073[iVar7]) == func_284(iVar7, 1))
							{
								bVar17 = false;
							}
							if (bVar17)
							{
								iVar18 = 0;
								if (unk_0x69AF387D1A91914C(unk_0x6471F4759775FCA4(Global_99073[iVar7])))
								{
									iVar18 = 1;
								}
								func_305(iVar7, &(Global_99073[iVar7]), iVar18, 1);
								Global_96735[iVar7] = Global_99073[iVar7];
							}
						}
						else if (func_301(Global_99073[iVar7], iVar7, 1))
						{
							func_305(iVar7, &(Global_99073[iVar7]), 2, 1);
							Global_96735[iVar7] = Global_99073[iVar7];
							Global_112293.f_2361.f_539.f_4317[iVar7] = func_302(unk_0xD6E677FAD7521410(Global_96735[iVar7], 1), iVar7, 1);
						}
					}
				}
			}
		}
	}
	if (((((Global_112293.f_20116.f_130[iVar7 /*41*/].f_36 && Global_112293.f_20116.f_130[iVar7 /*41*/].f_35) && !Global_112293.f_20116.f_130[iVar7 /*41*/].f_40) && !func_17(0)) && !func_17(3)) && !func_17(2))
	{
		uLocal_184 = Global_112293.f_20116.f_130[iVar7 /*41*/];
		iLocal_185 = 1;
		bLocal_186 = (!Global_112293.f_20116.f_281[iVar7] && iVar7 == 1);
		if (!bLocal_186)
		{
			func_347(iVar7, 80, Global_112293.f_20116.f_130[iVar7 /*41*/].f_27);
		}
		Global_112293.f_20116.f_130[iVar7 /*41*/].f_40 = 1;
	}
	else if (iLocal_185)
	{
		if ((!func_17(0) && !func_17(3)) && !func_17(2))
		{
			StringCopy(&Var19, "SOCIAL_CARAPP1", 16);
			if (bLocal_186)
			{
				StringCopy(&Var19, "SOCIAL_FREE1", 16);
			}
			if (func_265(96, &Var19, 2, unk_0x3A2A8DAFDBEC4CFE(unk_0x3FCA3350E87E4DB8(uLocal_184)), -99, "NULL", 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0))
			{
				iLocal_185 = 0;
			}
		}
	}
}

int func_265(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	unk_0xC664C0067EEAB8D1(&Global_7668, 10);
	iVar0 = 3;
	if (func_267(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, iParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8375 = iParam10;
			Global_8278[3 /*6*/] = { func_266(iParam0) };
			Global_8355 = iParam0;
			StringCopy(&Global_8356, sParam5, 64);
			unk_0x191DDA30577F440A(&Global_7668, 1);
			unk_0x191DDA30577F440A(&Global_7668, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_266(int iParam0)
{
	return Global_1878[iParam0 /*29*/].f_3;
}

int func_267(var uParam0, char* sParam1, int iParam2, var uParam3, char* sParam4, char* sParam5, var uParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0xDA654EB115F9FF7D(sParam14, sParam15))
	{
	}
	func_283();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_19798 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_19798 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_19798 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
		{
			if (unk_0x0A0080A9EB535EC7(unk_0x7D2B9E6A64637269()))
			{
				return 0;
			}
		}
		if (Global_112293.f_14049[Global_19798 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x636F1F53CC61D2C9(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x636F1F53CC61D2C9(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_282() == 0)
	{
		func_280();
		return 0;
	}
	func_279(Global_22192);
	StringCopy(&(Global_112293.f_14139[Global_22192 /*104*/]), sParam1, 64);
	Global_112293.f_14139[Global_22192 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_112293.f_14139[Global_22192 /*104*/].f_24 = iParam2;
	}
	Global_112293.f_14139[Global_22192 /*104*/].f_25 = iParam7;
	Global_112293.f_14139[Global_22192 /*104*/].f_26 = uParam8;
	Global_112293.f_14139[Global_22192 /*104*/].f_29 = uParam9;
	Global_112293.f_14139[Global_22192 /*104*/].f_30 = uParam12;
	Global_112293.f_14139[Global_22192 /*104*/].f_31 = uParam11;
	Global_112293.f_14139[Global_22192 /*104*/].f_28 = 0;
	Global_112293.f_14139[Global_22192 /*104*/].f_32 = uParam3;
	StringCopy(&(Global_112293.f_14139[Global_22192 /*104*/].f_33), sParam4, 64);
	Global_112293.f_14139[Global_22192 /*104*/].f_49 = uParam6;
	StringCopy(&(Global_112293.f_14139[Global_22192 /*104*/].f_50), sParam5, 64);
	Global_112293.f_14139[Global_22192 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_112293.f_14139[Global_22192 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_112293.f_14139[Global_22192 /*104*/].f_83), sParam15, 64);
	if (unk_0x234B68AC2E35ED5A(Global_7668, 10))
	{
		Global_112293.f_14139[Global_22192 /*104*/].f_99[0] = 1;
		Global_112293.f_14139[Global_22192 /*104*/].f_99[1] = 1;
		Global_112293.f_14139[Global_22192 /*104*/].f_99[2] = 1;
		Global_8374 = 4;
		func_278(0);
		func_278(2);
		func_278(1);
	}
	else
	{
		func_283();
		switch (iParam16)
		{
			case 3:
				Global_112293.f_14139[Global_22192 /*104*/].f_99[Global_19798] = 1;
				break;
			
			case 0:
				Global_112293.f_14139[Global_22192 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_112293.f_14139[Global_22192 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_112293.f_14139[Global_22192 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_19798)
			{
				case 0:
					func_278(0);
					Global_8374 = 0;
					break;
				
				case 1:
					func_278(1);
					Global_8374 = 1;
					break;
				
				case 2:
					func_278(2);
					Global_8374 = 2;
					break;
				
				case 3:
					func_278(3);
					Global_8374 = 3;
					break;
				
				default:
					Global_8374 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0x234B68AC2E35ED5A(Global_7668, 10))
		{
			Global_112293.f_14049[0 /*20*/].f_17 = 1;
			Global_112293.f_14049[1 /*20*/].f_17 = 1;
			Global_112293.f_14049[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_112293.f_14049[Global_19798 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_112293.f_14049[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_112293.f_14049[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_112293.f_14049[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_22194[Global_22192] = 0;
	if (bParam10)
	{
		func_283();
		if (Global_19741)
		{
			StringCopy(&Global_19787, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_19798)
			{
				case 0:
					StringCopy(&Global_19787, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_19787, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_19787, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_19787, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8473[Global_19798 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_277())
			{
				unk_0x9B0169E27978C1A2(-1, "Text_Arrive_Tone", &Global_19787, 1);
			}
		}
	}
	if (!Global_19985)
	{
		if (Global_19798.f_1 == 6)
		{
			func_276(Global_19779, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_273(1);
			func_276(Global_19779, "DISPLAY_VIEW", 1f, to_float(Global_19778), -1082130432, -1082130432, -1082130432);
		}
	}
	func_268(uParam0, sParam1);
	return 1;
}

void func_268(var uParam0, char* sParam1)
{
	if (!func_269())
	{
		return;
	}
	unk_0xE02F4C3522882D1E(uParam0, 1654525105, unk_0x15173FB88ABC94F9(sParam1), 0);
}

int func_269()
{
	if (!Global_262145.f_28376)
	{
		return 0;
	}
	if (!Global_77248)
	{
		return 0;
	}
	if (unk_0x1146A9AE09CE2B14() == func_272())
	{
		return 0;
	}
	if (func_270(unk_0x1146A9AE09CE2B14()))
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

bool func_270(int iParam0)
{
	return func_271(iParam0, 20);
}

bool func_271(int iParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_11.f_4, iParam1);
}

int func_272()
{
	return -1;
}

void func_273(int iParam0)
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
	
	Global_22193 = 0;
	Global_8273 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_8237[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_17(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7675[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7675[iVar1 /*15*/].f_4)
					{
						if (Global_8237[iVar0] == 0)
						{
							Global_8201[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0x234B68AC2E35ED5A(Global_7669, 3))
								{
									iVar2 = 42;
									Global_19988 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_19988 = 0;
								}
								unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
								unk_0x9E3D03981E2E9AD9(1);
								unk_0x9E3D03981E2E9AD9(iVar0);
								unk_0x9E3D03981E2E9AD9(Global_7675[iVar1 /*15*/].f_10);
								unk_0x9E3D03981E2E9AD9(0);
								func_275(&(Global_7675[iVar1 /*15*/]));
								unk_0x9E3D03981E2E9AD9(iVar2);
								unk_0x392841D58D2EED1D();
							}
							if (Global_2463492)
							{
								if (iVar1 == 14)
								{
									func_274(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(Global_22188), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_8237[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7675[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7675[iVar1 /*15*/].f_4)
					{
						if (Global_8237[iVar0] == 0)
						{
							Global_8201[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_112293.f_14139[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_112293.f_14139[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_112293.f_14139[iVar3 /*104*/].f_99[Global_19798] == 1)
											{
												Global_22193++;
											}
										}
									}
									iVar3++;
								}
								func_274(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(Global_22193), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_77248)
								{
									iVar4 = 0;
									iVar4 = Global_4271213;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4271214[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4271214[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4271214[iVar5 /*104*/].f_99[Global_19798] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_274(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_19798)
									{
										case 0:
											iVar6 = Global_43193;
											break;
										
										case 1:
											iVar6 = Global_43194;
											break;
										
										case 2:
											iVar6 = Global_43195;
											break;
										
										default:
											break;
									}
									func_274(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(iVar6), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_274(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(Global_22188), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
								unk_0x9E3D03981E2E9AD9(1);
								unk_0x9E3D03981E2E9AD9(iVar0);
								unk_0x9E3D03981E2E9AD9(Global_7675[iVar1 /*15*/].f_10);
								unk_0x9E3D03981E2E9AD9(0);
								func_275(&(Global_7675[iVar1 /*15*/]));
								unk_0x9E3D03981E2E9AD9(Global_7674);
								unk_0x392841D58D2EED1D();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x234B68AC2E35ED5A(Global_7669, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
								unk_0x9E3D03981E2E9AD9(1);
								unk_0x9E3D03981E2E9AD9(iVar0);
								unk_0x9E3D03981E2E9AD9(Global_7675[iVar1 /*15*/].f_10);
								unk_0x9E3D03981E2E9AD9(0);
								func_275(&(Global_7675[iVar1 /*15*/]));
								unk_0x9E3D03981E2E9AD9(iVar7);
								unk_0x392841D58D2EED1D();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x234B68AC2E35ED5A(Global_7669, 3))
								{
									iVar8 = 42;
									Global_19988 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_19988 = 0;
								}
								unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
								unk_0x9E3D03981E2E9AD9(1);
								unk_0x9E3D03981E2E9AD9(iVar0);
								unk_0x9E3D03981E2E9AD9(Global_7675[iVar1 /*15*/].f_10);
								unk_0x9E3D03981E2E9AD9(0);
								func_275(&(Global_7675[iVar1 /*15*/]));
								unk_0x9E3D03981E2E9AD9(iVar8);
								unk_0x392841D58D2EED1D();
							}
							else if (iVar1 == 8)
							{
								unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
								unk_0x9E3D03981E2E9AD9(1);
								unk_0x9E3D03981E2E9AD9(iVar0);
								unk_0x9E3D03981E2E9AD9(Global_7675[iVar1 /*15*/].f_10);
								unk_0x9E3D03981E2E9AD9(0);
								func_275(&(Global_7675[iVar1 /*15*/]));
								unk_0x9E3D03981E2E9AD9(42);
								unk_0x392841D58D2EED1D();
							}
							else if ((iVar1 == 23 && unk_0xDA654EB115F9FF7D(&(Global_7675[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0x234B68AC2E35ED5A(Global_7669, 6))
							{
								unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
								unk_0x9E3D03981E2E9AD9(1);
								unk_0x9E3D03981E2E9AD9(iVar0);
								unk_0x9E3D03981E2E9AD9(Global_7675[iVar1 /*15*/].f_10);
								unk_0x9E3D03981E2E9AD9(0);
								func_275(&(Global_7675[iVar1 /*15*/]));
								unk_0x9E3D03981E2E9AD9(42);
								unk_0x392841D58D2EED1D();
							}
							else if (Global_7675[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1627190.f_1;
								func_274(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(iVar9), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_274(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(0), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_8237[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_274(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0x704F8697BB515627(uParam0, sParam1);
	unk_0x9E3D03981E2E9AD9(round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x9E3D03981E2E9AD9(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x9E3D03981E2E9AD9(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x9E3D03981E2E9AD9(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x9E3D03981E2E9AD9(round(fParam6));
	}
	if (!unk_0xAB6A270F84A8781E(sParam7))
	{
		func_275(sParam7);
	}
	if (!unk_0xAB6A270F84A8781E(sParam8))
	{
		func_275(sParam8);
	}
	if (!unk_0xAB6A270F84A8781E(sParam9))
	{
		func_275(sParam9);
	}
	if (!unk_0xAB6A270F84A8781E(sParam10))
	{
		func_275(sParam10);
	}
	if (!unk_0xAB6A270F84A8781E(sParam11))
	{
		func_275(sParam11);
	}
	unk_0x392841D58D2EED1D();
}

void func_275(char* sParam0)
{
	unk_0x35CA0C119E6A2A27(sParam0);
	unk_0xD4B2C39F7AD5A6A6();
}

void func_276(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x704F8697BB515627(uParam0, sParam1);
	unk_0x9E3D03981E2E9AD9(round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x9E3D03981E2E9AD9(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x9E3D03981E2E9AD9(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x9E3D03981E2E9AD9(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x9E3D03981E2E9AD9(round(fParam6));
	}
	unk_0x392841D58D2EED1D();
}

bool func_277()
{
	return Global_1312902;
}

void func_278(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_112293.f_14049[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_279(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = unk_0x1947D86A2BB06F8D();
	iVar1 = unk_0x942C8DFFBBCB3EB4();
	iVar2 = unk_0xCA86FAB7FADC8353();
	iVar3 = unk_0x9E6858A319A1F6F2();
	uVar4 = unk_0xA91C851005050418() + 1;
	iVar5 = unk_0x77D50D8E8FF785AC();
	Global_112293.f_14139[iParam0 /*104*/].f_18 = iVar0;
	Global_112293.f_14139[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_112293.f_14139[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_112293.f_14139[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_112293.f_14139[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_112293.f_14139[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_280()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_77248)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_22192 = 34;
	Global_112293.f_14139[Global_22192 /*104*/].f_18 = -1;
	Global_112293.f_14139[Global_22192 /*104*/].f_18.f_1 = 0;
	Global_112293.f_14139[Global_22192 /*104*/].f_18.f_2 = 0;
	Global_112293.f_14139[Global_22192 /*104*/].f_18.f_3 = 0;
	Global_112293.f_14139[Global_22192 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_281(Global_112293.f_14139[iVar2 /*104*/].f_18, Global_112293.f_14139[Global_22192 /*104*/].f_18))
		{
			Global_22192 = iVar2;
		}
		iVar2++;
	}
	Global_112293.f_14139[Global_22192 /*104*/].f_24 = 1;
}

int func_281(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1 = Param1;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_282()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_77248)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_112293.f_14139[iVar2 /*104*/].f_24 == 0)
		{
			Global_22192 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_22192 = 34;
	Global_112293.f_14139[Global_22192 /*104*/].f_18 = -1;
	Global_112293.f_14139[Global_22192 /*104*/].f_18.f_1 = 0;
	Global_112293.f_14139[Global_22192 /*104*/].f_18.f_2 = 0;
	Global_112293.f_14139[Global_22192 /*104*/].f_18.f_3 = 0;
	Global_112293.f_14139[Global_22192 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_112293.f_14139[iVar2 /*104*/].f_24 == 0 || Global_112293.f_14139[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_281(Global_112293.f_14139[iVar2 /*104*/].f_18, Global_112293.f_14139[Global_22192 /*104*/].f_18))
			{
				Global_22192 = iVar2;
			}
		}
		if (Global_112293.f_14139[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_22192 == 34)
	{
		return 0;
	}
	Global_112293.f_14139[Global_22192 /*104*/].f_99[0] = 0;
	Global_112293.f_14139[Global_22192 /*104*/].f_99[1] = 0;
	Global_112293.f_14139[Global_22192 /*104*/].f_99[2] = 0;
	return 1;
}

void func_283()
{
	if (func_17(14))
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
		Global_19798 = func_102();
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

int func_284(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_104(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_285(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_285(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_112293.f_9083.f_99.f_58[128] && !Global_112293.f_9083.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_112293.f_9083.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_112293.f_9083.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

int func_286(int iParam0)
{
	int iVar0;
	
	if (!unk_0x419E13582192CFEA(iParam0))
	{
		return 145;
	}
	if (!unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x419E13582192CFEA(Global_96701[iVar0]))
		{
			if (Global_96701[iVar0] == iParam0)
			{
				return Global_96711[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

void func_287(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_293(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0x27FC1B0077581B37(iParam0, -1, 0);
		if (!unk_0x419E13582192CFEA(iVar0))
		{
			iVar0 = unk_0xC6F40BA22FFB861E(iParam0, -1);
		}
		if (unk_0x419E13582192CFEA(iVar0) && !unk_0xECEC7528A52B4EE8(iVar0))
		{
			if (unk_0x6471F4759775FCA4(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x6471F4759775FCA4(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x6471F4759775FCA4(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_112293.f_2361.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x6471F4759775FCA4(iParam0) == Global_112293.f_32747.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0xAB6A270F84A8781E(&(Global_112293.f_32747.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0xDA654EB115F9FF7D(unk_0x0B676D4511ABB729(iParam0), &(Global_112293.f_32747.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_112293.f_32747.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_112293.f_32747.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0x6471F4759775FCA4(iParam0) == Global_112293.f_32747.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0xAB6A270F84A8781E(&(Global_112293.f_32747.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0xDA654EB115F9FF7D(unk_0x0B676D4511ABB729(iParam0), &(Global_112293.f_32747.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_112293.f_32747.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_112293.f_32747.f_5590 = iParam1;
	Global_76971 = iParam0;
	Global_112293.f_32747.f_5588 = 1;
	func_288(iParam0, &(Global_112293.f_32747.f_5510));
}

void func_288(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		func_292(uParam1);
		uParam1->f_66 = unk_0x6471F4759775FCA4(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x0B676D4511ABB729(iParam0), 16);
		*uParam1 = unk_0x8F77FF37B3B66EE9(iParam0);
		unk_0x63316D59F2B56D9A(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x39A17B456BB9800A(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xDCC81D0196B6BB05(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x3763A95FD16BF2D0(iParam0);
		uParam1->f_67 = unk_0x91A6237658B4DA68(iParam0);
		uParam1->f_69 = unk_0x1D74385CEC17951D(iParam0);
		uParam1->f_70 = unk_0xAFD2714E8B5AEB9F(iParam0);
		unk_0x67CF1352CC692A08(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x0CC8B4C581022F66(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x0602C700974DF696(iParam0, 2))
		{
			unk_0x191DDA30577F440A(&(uParam1->f_77), 28);
		}
		if (unk_0x0602C700974DF696(iParam0, 3))
		{
			unk_0x191DDA30577F440A(&(uParam1->f_77), 29);
		}
		if (unk_0x0602C700974DF696(iParam0, 0))
		{
			unk_0x191DDA30577F440A(&(uParam1->f_77), 30);
		}
		if (unk_0x0602C700974DF696(iParam0, 1))
		{
			unk_0x191DDA30577F440A(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_291(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0xCBD5BF9FD895F81F(iParam0, 0))
		{
			uParam1->f_68 = unk_0x334291A8490E5BCB(iParam0);
		}
		if (unk_0x48E10529AEAE00F9(uParam1->f_66))
		{
			if (unk_0x4D79903AC2C62A29(iParam0))
			{
				switch (unk_0xC504A6173BF90791(iParam0))
				{
					case 3:
					case 0:
						unk_0xC664C0067EEAB8D1(&(uParam1->f_77), 23);
						unk_0x191DDA30577F440A(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						unk_0xC664C0067EEAB8D1(&(uParam1->f_77), 23);
						unk_0xC664C0067EEAB8D1(&(uParam1->f_77), 22);
						break;
					
					case 5:
						unk_0x191DDA30577F440A(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x191DDA30577F440A(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x7EB56EF7F2EC63A6(iParam0))
		{
			unk_0x191DDA30577F440A(&(uParam1->f_77), 9);
		}
		if (unk_0x44CD355F587F467C(iParam0))
		{
			unk_0x191DDA30577F440A(&(uParam1->f_77), 10);
		}
		if (unk_0x06B95C5D3415375D(iParam0))
		{
			unk_0x191DDA30577F440A(&(uParam1->f_77), 13);
			unk_0xD1C8CE12A38AA6D0(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x89FF0171FDDB2246(iParam0))
		{
			unk_0x191DDA30577F440A(&(uParam1->f_77), 12);
		}
		func_290(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xE3C9546BB1ECEC04(iParam0, iVar0 + 1))
			{
				unk_0x191DDA30577F440A(&(uParam1->f_77), func_289(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x88CF23F322C9687A(iParam0, 0))
		{
			unk_0x191DDA30577F440A(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0xC664C0067EEAB8D1(&(uParam1->f_77), 11);
		}
		if (unk_0x5B38E054B758C032(iParam0, "IgnoredByQuickSave") && unk_0xCDB2D643EC18E75E(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x191DDA30577F440A(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0xC664C0067EEAB8D1(&(uParam1->f_77), 27);
		}
	}
}

int func_289(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_290(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xBFCE58B2B3249999(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xCF1FE5DEA3E2E135(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0x0350660BE3973FF3(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (unk_0x0350660BE3973FF3(*iParam0, iVar1))
			{
				switch (unk_0x64CF0B1FED5D2D23(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0xB51972B58BF40F96(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xB7A74982A8F639B9(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xB7A74982A8F639B9(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_291(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

void func_292(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_293(int iParam0)
{
	if ((((((((((!unk_0x419E13582192CFEA(iParam0) || !unk_0xBFCE58B2B3249999(iParam0, 0)) || func_301(iParam0, 0, 0)) || func_301(iParam0, 1, 0)) || func_301(iParam0, 2, 0)) || func_286(iParam0) != 145) || func_300(iParam0)) || func_379(iParam0)) || func_378(iParam0)) || func_299(iParam0)) || !func_294(unk_0x6471F4759775FCA4(iParam0)))
	{
		if (func_379(iParam0))
		{
		}
		if (func_379(iParam0))
		{
		}
		if (func_301(iParam0, 0, 0))
		{
		}
		if (func_301(iParam0, 1, 0))
		{
		}
		if (func_301(iParam0, 2, 0))
		{
		}
		if (func_286(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_294(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_295(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0x8D367F0B53916265(iParam0) || unk_0x48E10529AEAE00F9(iParam0)) || unk_0xE267416B80E7921F(iParam0)) || unk_0x8C6BE3ED9638F314(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_295(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xB4DD528ED76ED647(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !unk_0x02BFF15CAA701972()) || (iParam0 == joaat("buffalo3") && !unk_0x02BFF15CAA701972())) || (iParam0 == joaat("gauntlet2") && !unk_0x02BFF15CAA701972())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x02BFF15CAA701972()))
	{
		if (!func_129())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0xE4F2BC3D40737711())
		{
			if (unk_0x953EAC8A463313E4(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0xD1ABD511D9C326A3(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_131() && !func_141()) && !func_136()) && !func_130()) && !func_129())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x2322DD4FBF5E4E2F() || unk_0x3640D836D145B814()) || unk_0xE22116C6D321FECA())
		{
		}
		else if (!func_136())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_298(iParam0))
		{
			return 0;
		}
	}
	if (!func_296(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_296(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_297())
	{
		return 1;
	}
	unk_0xB4989F41D2C06478(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0x14D8BAC5AEFB49EB(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_297()
{
	if (unk_0x3640D836D145B814())
	{
		return unk_0x57FB3D94D590E8BC();
	}
	return 0;
}

int func_298(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2518293)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x666C16A4ED8F3098();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_6770 && !Global_262145.f_13100) && iVar1 < Global_262145.f_13101)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14400 && iVar1 < Global_262145.f_14412)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14396 && iVar1 < Global_262145.f_14408)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14397 && iVar1 < Global_262145.f_14409)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14398 && iVar1 < Global_262145.f_14410)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14399 && iVar1 < Global_262145.f_14411)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14401 && iVar1 < Global_262145.f_14413)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14402 && iVar1 < Global_262145.f_14405)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14403 && iVar1 < Global_262145.f_14406)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14404 && iVar1 < Global_262145.f_14407)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_17032 && iVar1 < Global_262145.f_16997)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_17027 && iVar1 < Global_262145.f_16992)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_17031 && iVar1 < Global_262145.f_16996)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_17030 && iVar1 < Global_262145.f_16995)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_17024 && iVar1 < Global_262145.f_16989)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_17025 && iVar1 < Global_262145.f_16990)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_17028 && iVar1 < Global_262145.f_16993)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_17029 && iVar1 < Global_262145.f_16994)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_17026 && iVar1 < Global_262145.f_16991)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_17034 && iVar1 < Global_262145.f_16999)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_17035 && iVar1 < Global_262145.f_17000)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_17023 && iVar1 < Global_262145.f_16988)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_17022 && iVar1 < Global_262145.f_16987)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_17021 && iVar1 < Global_262145.f_16986)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_17033 && iVar1 < Global_262145.f_16998)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_17036 && iVar1 < Global_262145.f_17001)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_17037 && iVar1 < Global_262145.f_17002)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_17038 && iVar1 < Global_262145.f_17003)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_17039 && iVar1 < Global_262145.f_17004)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_17186 && iVar1 < Global_262145.f_17208)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_17187 && iVar1 < Global_262145.f_17209)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_17188 && iVar1 < Global_262145.f_17210)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_17189 && iVar1 < Global_262145.f_17211)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_17190 && iVar1 < Global_262145.f_17212)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_17191 && iVar1 < Global_262145.f_17213)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_17193 && iVar1 < Global_262145.f_17214)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_17194 && iVar1 < Global_262145.f_17215)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_17195 && iVar1 < Global_262145.f_17216)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_17196 && iVar1 < Global_262145.f_17217)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_17197 && iVar1 < Global_262145.f_17218)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_17198 && iVar1 < Global_262145.f_17219)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_17199 && iVar1 < Global_262145.f_17220)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_17205 && iVar1 < Global_262145.f_17227)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_17202 && iVar1 < Global_262145.f_17223)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_17203 && iVar1 < Global_262145.f_17224)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_17204 && iVar1 < Global_262145.f_17225)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_17192 && iVar1 < Global_262145.f_17226)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_17206 && iVar1 < Global_262145.f_17228)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_17200 && iVar1 < Global_262145.f_17221)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_17201 && iVar1 < Global_262145.f_17222)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_17207 && iVar1 < Global_262145.f_17229)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_18838 && iVar1 < Global_262145.f_18935)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_18839 && iVar1 < Global_262145.f_18936)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_18840 && iVar1 < Global_262145.f_18937)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_18841 && iVar1 < Global_262145.f_18938)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_18842 && iVar1 < Global_262145.f_18939)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_18843 && iVar1 < Global_262145.f_18940)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_18844 && iVar1 < Global_262145.f_18941)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_18845 && iVar1 < Global_262145.f_18942)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_18846 && iVar1 < Global_262145.f_18943)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_18847 && iVar1 < Global_262145.f_18944)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_18848 && iVar1 < Global_262145.f_18945)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_18849 && iVar1 < Global_262145.f_18946)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_18850 && iVar1 < Global_262145.f_18947)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_18851 && iVar1 < Global_262145.f_18948)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_18852 && iVar1 < Global_262145.f_18949)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_18853 && iVar1 < Global_262145.f_18950)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_18854 && iVar1 < Global_262145.f_18951)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_18855 && iVar1 < Global_262145.f_18952)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_18856 && iVar1 < Global_262145.f_18953)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_18857 && iVar1 < Global_262145.f_18954)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_18858 && iVar1 < Global_262145.f_18955)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18859 && iVar1 < Global_262145.f_18956)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_18860 && iVar1 < Global_262145.f_18957)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_18861 && iVar1 < Global_262145.f_18958)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_18862 && iVar1 < Global_262145.f_18959)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_19919 && iVar1 < Global_262145.f_19915)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_19920 && iVar1 < Global_262145.f_19916)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_19921 && iVar1 < Global_262145.f_19917)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_19922 && iVar1 < Global_262145.f_19918)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_20800 && iVar1 < Global_262145.f_20808)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_20801 && iVar1 < Global_262145.f_20809)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_20802 && iVar1 < Global_262145.f_20810)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_20803 && iVar1 < Global_262145.f_20811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_20804 && iVar1 < Global_262145.f_20812)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_20805 && iVar1 < Global_262145.f_20813)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_21580 && iVar1 < Global_262145.f_21600)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_21592 && iVar1 < Global_262145.f_21612)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_21583 && iVar1 < Global_262145.f_21603)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_21593 && iVar1 < Global_262145.f_21613)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_21581 && iVar1 < Global_262145.f_21601)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_21597 && iVar1 < Global_262145.f_21617)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_21595 && iVar1 < Global_262145.f_21615)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_21596 && iVar1 < Global_262145.f_21616)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_21591 && iVar1 < Global_262145.f_21611)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_21598 && iVar1 < Global_262145.f_21618)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_21594 && iVar1 < Global_262145.f_21614)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_21590 && iVar1 < Global_262145.f_21610)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_21582 && iVar1 < Global_262145.f_21602)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_21584 && iVar1 < Global_262145.f_21604)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_21585 && iVar1 < Global_262145.f_21605)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_21586 && iVar1 < Global_262145.f_21606)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_21587 && iVar1 < Global_262145.f_21607)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_21588 && iVar1 < Global_262145.f_21608)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_21589 && iVar1 < Global_262145.f_21609)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_22541 && iVar1 < Global_262145.f_22569)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_22542 && iVar1 < Global_262145.f_22570)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_22543 && iVar1 < Global_262145.f_22571)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_22544 && iVar1 < Global_262145.f_22572)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_22545 && iVar1 < Global_262145.f_22573)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_22546 && iVar1 < Global_262145.f_22574)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_22547 && iVar1 < Global_262145.f_22575)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_22548 && iVar1 < Global_262145.f_22576)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_22549 && iVar1 < Global_262145.f_22577)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_22550 && iVar1 < Global_262145.f_22578)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_22551 && iVar1 < Global_262145.f_22579)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_22552 && iVar1 < Global_262145.f_22580)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_22553 && iVar1 < Global_262145.f_22581)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_22554 && iVar1 < Global_262145.f_22582)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_22555 && iVar1 < Global_262145.f_22583)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_22556 && iVar1 < Global_262145.f_22584)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_22557 && iVar1 < Global_262145.f_22585)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_22558 && iVar1 < Global_262145.f_22586)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_22559 && iVar1 < Global_262145.f_22587)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_22560 && iVar1 < Global_262145.f_22588)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_22561 && iVar1 < Global_262145.f_22589)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_22562 && iVar1 < Global_262145.f_22590)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_22563 && iVar1 < Global_262145.f_22591)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_22564 && iVar1 < Global_262145.f_22592)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_22565 && iVar1 < Global_262145.f_22593)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_22566 && iVar1 < Global_262145.f_22594)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_22567 && iVar1 < Global_262145.f_22595)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_22568 && iVar1 < Global_262145.f_22596)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_23761 && iVar1 < Global_262145.f_23777)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_23762 && iVar1 < Global_262145.f_23778)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_23766 && iVar1 < Global_262145.f_23782)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_23769 && iVar1 < Global_262145.f_23785)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_23774 && iVar1 < Global_262145.f_23790)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_23768 && iVar1 < Global_262145.f_23784)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_23760 && iVar1 < Global_262145.f_23776)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_23767 && iVar1 < Global_262145.f_23783)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_23773 && iVar1 < Global_262145.f_23789)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_23772 && iVar1 < Global_262145.f_23788)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_23763 && iVar1 < Global_262145.f_23779)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_23765 && iVar1 < Global_262145.f_23781)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_23775 && iVar1 < Global_262145.f_23791)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_23771 && iVar1 < Global_262145.f_23787)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_23764 && iVar1 < Global_262145.f_23780)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_23770 && iVar1 < Global_262145.f_23786)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_23851 && iVar1 < Global_262145.f_23838)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_23852 && iVar1 < Global_262145.f_23839)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_23857 && iVar1 < Global_262145.f_23844)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_23856 && iVar1 < Global_262145.f_23843)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_23854 && iVar1 < Global_262145.f_23841)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_23860 && iVar1 < Global_262145.f_23847)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_23862 && iVar1 < Global_262145.f_23849)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_23863 && iVar1 < Global_262145.f_23850)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_23861 && iVar1 < Global_262145.f_23848)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_23853 && iVar1 < Global_262145.f_23840)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_23855 && iVar1 < Global_262145.f_23842)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_23859 && iVar1 < Global_262145.f_23846)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_23858 && iVar1 < Global_262145.f_23845)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("monster3"))
	{
	}
	else if (iParam0 == joaat("cerberus"))
	{
	}
	else if (iParam0 == joaat("cerberus2"))
	{
	}
	else if (iParam0 == joaat("cerberus3"))
	{
	}
	else if (iParam0 == joaat("brutus"))
	{
	}
	else if (iParam0 == joaat("brutus2"))
	{
	}
	else if (iParam0 == joaat("brutus3"))
	{
	}
	else if (iParam0 == joaat("scarab"))
	{
	}
	else if (iParam0 == joaat("scarab2"))
	{
	}
	else if (iParam0 == joaat("scarab3"))
	{
	}
	else if (iParam0 == joaat("imperator"))
	{
	}
	else if (iParam0 == joaat("imperator2"))
	{
	}
	else if (iParam0 == joaat("imperator3"))
	{
	}
	else if (iParam0 == joaat("zr380"))
	{
	}
	else if (iParam0 == joaat("zr3802"))
	{
	}
	else if (iParam0 == joaat("zr3803"))
	{
	}
	else if (iParam0 == joaat("impaler"))
	{
	}
	else if (iParam0 == joaat("deveste"))
	{
		if (!Global_262145.f_26267 && iVar1 < Global_262145.f_26269)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toros"))
	{
		if (!Global_262145.f_25280 && iVar1 < Global_262145.f_25273)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique"))
	{
		if (!Global_262145.f_25281 && iVar1 < Global_262145.f_25274)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_25282 && iVar1 < Global_262145.f_25275)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_25283 && iVar1 < Global_262145.f_25276)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_26268 && iVar1 < Global_262145.f_26270)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_25284 && iVar1 < Global_262145.f_25277)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_25285 && iVar1 < Global_262145.f_25278)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_25286 && iVar1 < Global_262145.f_25279)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thrax"))
	{
		if (!Global_262145.f_25291 && iVar1 < Global_262145.f_25312)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("drafter"))
	{
		if (!Global_262145.f_25292 && iVar1 < Global_262145.f_25313)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("locust"))
	{
		if (!Global_262145.f_25293 && iVar1 < Global_262145.f_25314)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("novak"))
	{
		if (!Global_262145.f_25294 && iVar1 < Global_262145.f_25315)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zorrusso"))
	{
		if (!Global_262145.f_25295 && iVar1 < Global_262145.f_25316)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet3"))
	{
		if (!Global_262145.f_25296 && iVar1 < Global_262145.f_25317)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi7"))
	{
		if (!Global_262145.f_25297 && iVar1 < Global_262145.f_25318)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion3"))
	{
		if (!Global_262145.f_25298 && iVar1 < Global_262145.f_25319)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nebula"))
	{
		if (!Global_262145.f_25299 && iVar1 < Global_262145.f_25320)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hellion"))
	{
		if (!Global_262145.f_25300 && iVar1 < Global_262145.f_25321)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dynasty"))
	{
		if (!Global_262145.f_25301 && iVar1 < Global_262145.f_25322)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rrocket"))
	{
		if (!Global_262145.f_25302 && iVar1 < Global_262145.f_25323)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote2"))
	{
		if (!Global_262145.f_25303 && iVar1 < Global_262145.f_25324)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet4"))
	{
		if (!Global_262145.f_25304 && iVar1 < Global_262145.f_25325)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara2"))
	{
		if (!Global_262145.f_25305 && iVar1 < Global_262145.f_25326)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jugular"))
	{
		if (!Global_262145.f_25306 && iVar1 < Global_262145.f_25327)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("s80"))
	{
		if (!Global_262145.f_25307 && iVar1 < Global_262145.f_25328)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("krieger"))
	{
		if (!Global_262145.f_25308 && iVar1 < Global_262145.f_25329)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("emerus"))
	{
		if (!Global_262145.f_25309 && iVar1 < Global_262145.f_25330)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neo"))
	{
		if (!Global_262145.f_25310 && iVar1 < Global_262145.f_25331)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("paragon"))
	{
		if (!Global_262145.f_25311 && iVar1 < Global_262145.f_25332)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asbo"))
	{
		if (!Global_262145.f_28111 && iVar1 < Global_262145.f_28132)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjo"))
	{
		if (!Global_262145.f_28112 && iVar1 < Global_262145.f_28133)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("everon"))
	{
		if (!Global_262145.f_28113 && iVar1 < Global_262145.f_28134)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue2"))
	{
		if (!Global_262145.f_28114 && iVar1 < Global_262145.f_28135)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite2"))
	{
		if (!Global_262145.f_28115 && iVar1 < Global_262145.f_28136)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sugoi"))
	{
		if (!Global_262145.f_28116 && iVar1 < Global_262145.f_28137)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan2"))
	{
		if (!Global_262145.f_28117 && iVar1 < Global_262145.f_28138)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("outlaw"))
	{
		if (!Global_262145.f_28118 && iVar1 < Global_262145.f_28139)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagrant"))
	{
		if (!Global_262145.f_28119 && iVar1 < Global_262145.f_28140)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("komoda"))
	{
		if (!Global_262145.f_28120 && iVar1 < Global_262145.f_28141)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stryder"))
	{
		if (!Global_262145.f_28121 && iVar1 < Global_262145.f_28142)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("furia"))
	{
		if (!Global_262145.f_28122 && iVar1 < Global_262145.f_28143)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zhaba"))
	{
		if (!Global_262145.f_28123 && iVar1 < Global_262145.f_28144)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jb7002"))
	{
		if (!Global_262145.f_28124 && iVar1 < Global_262145.f_28145)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("firetruk"))
	{
		if (!Global_262145.f_28125 && iVar1 < Global_262145.f_28146)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_28126 && iVar1 < Global_262145.f_28147)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_28127 && iVar1 < Global_262145.f_28148)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_28128 && iVar1 < Global_262145.f_28149)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minitank"))
	{
		if (!Global_262145.f_28129 && iVar1 < Global_262145.f_28150)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_28130 && iVar1 < Global_262145.f_28151)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_28131 && iVar1 < Global_262145.f_28152)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula"))
	{
		if ((!Global_262145.f_28154 && iVar1 < Global_262145.f_28155) && !Global_262145.f_28109)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula2"))
	{
		if ((!Global_262145.f_28157 && iVar1 < Global_262145.f_28158) && !Global_262145.f_28110)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("imorgon"))
	{
		if (!Global_262145.f_28162 && iVar1 < Global_262145.f_28165)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebla"))
	{
		if (!Global_262145.f_28163 && iVar1 < Global_262145.f_28166)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vstr"))
	{
		if (!Global_262145.f_28164 && iVar1 < Global_262145.f_28167)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet5"))
	{
		if (!Global_262145.f_29178 && iVar1 < Global_262145.f_28843)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("club"))
	{
		if (!Global_262145.f_28829 && iVar1 < Global_262145.f_28850)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dukes3"))
	{
		if (!Global_262145.f_28830 && iVar1 < Global_262145.f_28836)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite3"))
	{
		if (!Global_262145.f_29176 && iVar1 < Global_262145.f_28844)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote3"))
	{
		if (!Global_262145.f_29177 && iVar1 < Global_262145.f_28845)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("glendale2"))
	{
		if (!Global_262145.f_28823 && iVar1 < Global_262145.f_28842)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penumbra2"))
	{
		if (!Global_262145.f_28824 && iVar1 < Global_262145.f_28851)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("landstalker2"))
	{
		if (!Global_262145.f_28825 && iVar1 < Global_262145.f_28841)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seminole2"))
	{
		if (!Global_262145.f_28826 && iVar1 < Global_262145.f_28839)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tigon"))
	{
		if (!Global_262145.f_29172 && iVar1 < Global_262145.f_28846)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel1"))
	{
		if (!Global_262145.f_29173 && iVar1 < Global_262145.f_28847)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel2"))
	{
		if (!Global_262145.f_29174 && iVar1 < Global_262145.f_28848)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette4"))
	{
		if (!Global_262145.f_29175 && iVar1 < Global_262145.f_28849)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manana2"))
	{
		if (!Global_262145.f_28827 && iVar1 < Global_262145.f_28838)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga3"))
	{
		if (!Global_262145.f_28828 && iVar1 < Global_262145.f_28840)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toreador"))
	{
		if (!Global_262145.f_29620 && iVar1 < Global_262145.f_29603)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("annihilator2"))
	{
		if (!Global_262145.f_29621 && iVar1 < Global_262145.f_29604)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alkonost"))
	{
		if (!Global_262145.f_29622 && iVar1 < Global_262145.f_29605)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patrolboat"))
	{
		if (!Global_262145.f_29623 && iVar1 < Global_262145.f_29606)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("longfin"))
	{
		if (!Global_262145.f_29624 && iVar1 < Global_262145.f_29607)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("winky"))
	{
		if (!Global_262145.f_29625 && iVar1 < Global_262145.f_29608)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto"))
	{
		if (!Global_262145.f_29626 && iVar1 < Global_262145.f_29609)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto2"))
	{
		if (!Global_262145.f_29627 && iVar1 < Global_262145.f_29610)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italirsx"))
	{
		if (!Global_262145.f_29628 && iVar1 < Global_262145.f_29611)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("weevil"))
	{
		if (Global_262145.f_29637)
		{
		}
		else if (!Global_262145.f_29629 && iVar1 < Global_262145.f_29612)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez2"))
	{
		if (!Global_262145.f_29630 && iVar1 < Global_262145.f_29613)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamtruck"))
	{
		if (!Global_262145.f_29631 && iVar1 < Global_262145.f_29614)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vetir"))
	{
		if (!Global_262145.f_29632 && iVar1 < Global_262145.f_29615)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("squaddie"))
	{
		if (!Global_262145.f_29633 && iVar1 < Global_262145.f_29616)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso2"))
	{
		if (Global_262145.f_29638)
		{
		}
		else if (!Global_262145.f_29634 && iVar1 < Global_262145.f_29617)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dinghy5"))
	{
		if (!Global_262145.f_29635 && iVar1 < Global_262145.f_29618)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("verus"))
	{
		if (!Global_262145.f_29636 && iVar1 < Global_262145.f_29619)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tailgater2"))
	{
		if (!Global_262145.f_30484 && iVar1 < Global_262145.f_30467)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("euros"))
	{
		if (!Global_262145.f_30485 && iVar1 < Global_262145.f_30468)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan3"))
	{
		if (!Global_262145.f_30486 && iVar1 < Global_262145.f_30469)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rt3000"))
	{
		if (!Global_262145.f_30487 && iVar1 < Global_262145.f_30470)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vectre"))
	{
		if (!Global_262145.f_30488 && iVar1 < Global_262145.f_30471)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zr350"))
	{
		if (!Global_262145.f_30489 && iVar1 < Global_262145.f_30472)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("warrener2"))
	{
		if (!Global_262145.f_30490 && iVar1 < Global_262145.f_30473)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("calico"))
	{
		if (!Global_262145.f_30491 && iVar1 < Global_262145.f_30474)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("remus"))
	{
		if (!Global_262145.f_30492 && iVar1 < Global_262145.f_30475)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cypher"))
	{
		if (!Global_262145.f_30493 && iVar1 < Global_262145.f_30476)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator7"))
	{
		if (!Global_262145.f_30494 && iVar1 < Global_262145.f_30477)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester4"))
	{
		if (!Global_262145.f_30495 && iVar1 < Global_262145.f_30478)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("futo2"))
	{
		if (!Global_262145.f_30496 && iVar1 < Global_262145.f_30479)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator8"))
	{
		if (!Global_262145.f_30497 && iVar1 < Global_262145.f_30480)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("previon"))
	{
		if (!Global_262145.f_30498 && iVar1 < Global_262145.f_30481)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("growler"))
	{
		if (!Global_262145.f_30499 && iVar1 < Global_262145.f_30482)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet6"))
	{
		if (!Global_262145.f_30500 && iVar1 < Global_262145.f_30483)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_299(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x6471F4759775FCA4(iParam0);
	sVar1 = unk_0x0B676D4511ABB729(iParam0);
	if (iVar0 == joaat("speedo") && unk_0xDA654EB115F9FF7D(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_295(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_300(int iParam0)
{
	int iVar0;
	
	if (unk_0x419E13582192CFEA(Global_76066.f_484[24]))
	{
		if (iParam0 == Global_76066.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x419E13582192CFEA(Global_76066.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_76066.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_301(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0x419E13582192CFEA(iParam0) || !unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_380(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || unk_0x234B68AC2E35ED5A(Global_112293.f_7227[iVar2], 0))
		{
			if (unk_0xC5C459033A48B1E4(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_302(struct<3> Param0, int iParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (Global_94408[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_94408[iVar0 /*10*/].f_9 == iParam1 || iParam1 == 145)
			{
				if (func_303(iVar0) || iParam2 == 0)
				{
					fVar1 = unk_0x0BABEFEA577FCFA4(Param0, Global_94408[iVar0 /*10*/].f_3, 1);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

bool func_303(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_112293.f_7227[iParam0], 0);
}

void func_304(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				uParam2->f_2 = 71.47866f;
			}
			else if (iParam1 == 1)
			{
				uParam2->f_2 = 31.39692f;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				uParam2->f_2 = 29.65688f;
			}
			else if (iParam1 == 1)
			{
				uParam2->f_2 = 175.0277f;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				uParam2->f_2 = 31.39692f;
			}
			else if (iParam1 == 1)
			{
				uParam2->f_2 = 3.24864f;
			}
			else if (iParam1 == 2)
			{
			}
			break;
	}
}

void func_305(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	
	if ((func_104(iParam0) && unk_0x419E13582192CFEA(*iParam1)) && unk_0xBFCE58B2B3249999(*iParam1, 0))
	{
		if (iParam2 > Global_112293.f_2361.f_539.f_2407)
		{
			return;
		}
		if (iParam2 == 0)
		{
		}
		else if (iParam2 == 1)
		{
		}
		else if (iParam2 == 2)
		{
		}
		else if (iParam2 == 3)
		{
			func_287(*iParam1, iParam0);
		}
		if (unk_0xCF1FE5DEA3E2E135(*iParam1) != 0)
		{
			unk_0x7D867CDA26E248C7(*iParam1, 0);
		}
		Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/] = unk_0x6471F4759775FCA4(*iParam1);
		if (unk_0xE66018878024055F(*iParam1, &iVar1))
		{
			Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_1 = unk_0x6471F4759775FCA4(iVar1);
		}
		Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_2 = unk_0xE1C9109AA0B04165(*iParam1);
		Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_3 = unk_0x5E7C0A485B91DB87(*iParam1);
		Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[0] = unk_0xE3C9546BB1ECEC04(*iParam1, 1);
		Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[1] = unk_0xE3C9546BB1ECEC04(*iParam1, 2);
		Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[2] = unk_0xE3C9546BB1ECEC04(*iParam1, 3);
		Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[3] = unk_0xE3C9546BB1ECEC04(*iParam1, 4);
		Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[4] = unk_0xE3C9546BB1ECEC04(*iParam1, 5);
		Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[5] = unk_0xE3C9546BB1ECEC04(*iParam1, 6);
		Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[6] = unk_0xE3C9546BB1ECEC04(*iParam1, 7);
		Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[7] = unk_0xE3C9546BB1ECEC04(*iParam1, 8);
		Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[8] = unk_0xE3C9546BB1ECEC04(*iParam1, 9);
		Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[9] = unk_0xE3C9546BB1ECEC04(*iParam1, 10);
		Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[10] = unk_0xE3C9546BB1ECEC04(*iParam1, 11);
		Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[11] = unk_0xE3C9546BB1ECEC04(*iParam1, 12);
		if (unk_0xCBD5BF9FD895F81F(*iParam1, 0))
		{
			iVar2 = unk_0x334291A8490E5BCB(*iParam1);
			if (iVar2 == 0 || iVar2 == 5)
			{
				Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24 = 1;
			}
			else
			{
				Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
			}
		}
		else
		{
			Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
		}
		Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_25 = unk_0x35A1BC0F4035B2F2();
		StringCopy(&(Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_27), unk_0x0B676D4511ABB729(*iParam1), 16);
		Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_26 = unk_0x8F77FF37B3B66EE9(*iParam1);
		unk_0x63316D59F2B56D9A(*iParam1, &(Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_5), &(Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_6));
		unk_0x39A17B456BB9800A(*iParam1, &(Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_7), &(Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_8));
		unk_0xDCC81D0196B6BB05(*iParam1, &(Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_84), &(Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_85), &(Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_86));
		Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_88 = unk_0x7EB56EF7F2EC63A6(*iParam1);
		Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_87 = unk_0x3763A95FD16BF2D0(*iParam1);
		Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_89 = unk_0x91A6237658B4DA68(*iParam1);
		Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_90 = unk_0x1D74385CEC17951D(*iParam1);
		unk_0x0CC8B4C581022F66(*iParam1, &(Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_93), &(Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_94), &(Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_95));
		if (unk_0x0602C700974DF696(*iParam1, 2))
		{
			unk_0x191DDA30577F440A(&(Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		else
		{
			unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		if (unk_0x0602C700974DF696(*iParam1, 3))
		{
			unk_0x191DDA30577F440A(&(Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		else
		{
			unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		if (unk_0x0602C700974DF696(*iParam1, 0))
		{
			unk_0x191DDA30577F440A(&(Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		else
		{
			unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		if (unk_0x0602C700974DF696(*iParam1, 1))
		{
			unk_0x191DDA30577F440A(&(Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		else
		{
			unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		Global_112293.f_2361.f_539.f_4317[iParam0] = 10;
		if (unk_0x3BBFB91FC84F6C2A(*iParam1) >= 0 && func_309(*iParam1, 0, &uVar0))
		{
			func_290(iParam1, &(Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31), &(Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_81));
			if (bParam3)
			{
				Global_112293.f_20116[iParam0 /*43*/].f_40 = 1;
				Global_112293.f_20116[iParam0 /*43*/] = Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/];
				Global_112293.f_20116[iParam0 /*43*/].f_3 = Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_87;
				Global_112293.f_20116[iParam0 /*43*/].f_4 = Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_84;
				Global_112293.f_20116[iParam0 /*43*/].f_5 = Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_85;
				Global_112293.f_20116[iParam0 /*43*/].f_6 = Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_86;
				Global_112293.f_20116[iParam0 /*43*/].f_10 = Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_90;
				Global_112293.f_20116[iParam0 /*43*/].f_16 = !Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_88;
				Global_112293.f_20116[iParam0 /*43*/].f_19 = { Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_27 };
				Global_112293.f_20116[iParam0 /*43*/].f_23 = Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_26;
				Global_112293.f_20116[iParam0 /*43*/].f_7 = Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[11];
				Global_112293.f_20116[iParam0 /*43*/].f_8 = Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[12];
				Global_112293.f_20116[iParam0 /*43*/].f_9 = Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[23];
				Global_112293.f_20116[iParam0 /*43*/].f_11 = Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[4];
				Global_112293.f_20116[iParam0 /*43*/].f_12 = Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[15];
				Global_112293.f_20116[iParam0 /*43*/].f_13 = Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[16];
				Global_112293.f_20116[iParam0 /*43*/].f_14 = Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[14];
				Global_112293.f_20116[iParam0 /*43*/].f_15 = Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[22];
				Global_112293.f_20116[iParam0 /*43*/].f_18 = Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[20];
				Global_112293.f_20116[iParam0 /*43*/].f_17 = Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[18];
				Global_112293.f_20116[iParam0 /*43*/].f_24 = unk_0x622E46C9F30FB60D(*iParam1, 11) + 1;
				Global_112293.f_20116[iParam0 /*43*/].f_25 = unk_0x622E46C9F30FB60D(*iParam1, 12) + 1;
				Global_112293.f_20116[iParam0 /*43*/].f_26 = unk_0x622E46C9F30FB60D(*iParam1, 4) + 1;
				Global_112293.f_20116[iParam0 /*43*/].f_27 = unk_0x622E46C9F30FB60D(*iParam1, 23) + 1;
				Global_112293.f_20116[iParam0 /*43*/].f_28 = unk_0x622E46C9F30FB60D(*iParam1, 14) + 1;
				Global_112293.f_20116[iParam0 /*43*/].f_29 = unk_0x622E46C9F30FB60D(*iParam1, 16) + 1;
				Global_112293.f_20116[iParam0 /*43*/].f_30 = unk_0x622E46C9F30FB60D(*iParam1, 15) + 1;
				Global_112293.f_20116[iParam0 /*43*/].f_32 = unk_0x2F5D527CB51AE553(*iParam1);
				Global_112293.f_20116[iParam0 /*43*/].f_33[0] = unk_0x708D5E68CCCC32AE(*iParam1);
				Global_112293.f_20116[iParam0 /*43*/].f_33[1] = unk_0x6C18ABC0D4C9AAEC(*iParam1, 14, 0);
				Global_112293.f_20116[iParam0 /*43*/].f_33[2] = unk_0x6C18ABC0D4C9AAEC(*iParam1, 14, 1);
				Global_112293.f_20116[iParam0 /*43*/].f_33[3] = unk_0x6C18ABC0D4C9AAEC(*iParam1, 14, 2);
				Global_112293.f_20116[iParam0 /*43*/].f_33[4] = unk_0x6C18ABC0D4C9AAEC(*iParam1, 14, 3);
				Global_112293.f_20116[iParam0 /*43*/].f_39 = unk_0xA1CC0998BBC30533(*iParam1);
				Global_112293.f_20116[iParam0 /*43*/].f_31 = func_308(*iParam1);
				Global_112293.f_20116[iParam0 /*43*/].f_33[0] = unk_0x63FE990BAB40116A(*iParam1);
				unk_0xE592AEEF07F5ACB2(*iParam1, &iVar4, &uVar5, &uVar6);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_306(Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_5, Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_7, iVar3, 1, &(Global_112293.f_20116[iParam0 /*43*/].f_1));
				unk_0x78738F6D30171534(*iParam1, &iVar4, &uVar5);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_306(Global_112293.f_2361.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_6, -1, iVar3, 0, &(Global_112293.f_20116[iParam0 /*43*/].f_2));
			}
		}
	}
}

int func_306(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (func_307(iVar0, &sVar2, &iVar1, &iVar3, &iVar4))
	{
		if ((iParam0 == iVar3 && (!bParam3 || iParam1 == iVar4)) && ((iParam2 == iVar1 || iParam2 == -1) || iParam2 == 255))
		{
			*uParam4 = iVar0;
			return 1;
		}
		iVar0++;
	}
	iParam0 = -1;
	iParam1 = -1;
	*uParam4 = -1;
	return 0;
}

bool func_307(int iParam0, char* sParam1, int iParam2, var uParam3, var uParam4)
{
	*iParam2 = -1;
	*uParam3 = -1;
	*uParam4 = -1;
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "BR BLACK_STEEL", 16);
			*iParam2 = 3;
			*uParam3 = 118;
			*uParam4 = 3;
			break;
		
		case 1:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*iParam2 = 0;
			*uParam3 = 147;
			*uParam4 = 4;
			break;
		
		case 2:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*iParam2 = 1;
			*uParam3 = 96;
			*uParam4 = 0;
			break;
		
		case 3:
			StringCopy(sParam1, "PURPLE", 16);
			*iParam2 = 0;
			*uParam3 = 71;
			*uParam4 = 145;
			break;
		
		case 4:
			StringCopy(sParam1, "HOT PINK", 16);
			*iParam2 = 0;
			*uParam3 = 135;
			*uParam4 = 135;
			break;
		
		case 5:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*iParam2 = 0;
			*uParam3 = 29;
			*uParam4 = 28;
			break;
		
		case 6:
			StringCopy(sParam1, "BLUE", 16);
			*iParam2 = 0;
			*uParam3 = 64;
			*uParam4 = 68;
			break;
		
		case 7:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*iParam2 = 1;
			*uParam3 = 70;
			*uParam4 = 0;
			break;
		
		case 8:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*iParam2 = 1;
			*uParam3 = 50;
			*uParam4 = 0;
			break;
		
		case 9:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*iParam2 = 2;
			*uParam3 = 55;
			*uParam4 = 0;
			break;
		
		case 10:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*iParam2 = 1;
			*uParam3 = 89;
			*uParam4 = 0;
			break;
		
		case 11:
			StringCopy(sParam1, "ORANGE", 16);
			*iParam2 = 1;
			*uParam3 = 38;
			*uParam4 = 0;
			break;
		
		case 12:
			StringCopy(sParam1, "GOLD", 16);
			*iParam2 = 0;
			*uParam3 = 37;
			*uParam4 = 106;
			break;
		
		case 13:
			StringCopy(sParam1, "SILVER", 16);
			*iParam2 = 0;
			*uParam3 = 4;
			*uParam4 = 111;
			break;
		
		case 14:
			StringCopy(sParam1, "CHROME", 16);
			*iParam2 = 4;
			*uParam3 = 120;
			*uParam4 = 0;
			break;
		
		case 15:
			StringCopy(sParam1, "WHITE", 16);
			*iParam2 = 1;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 16:
			StringCopy(sParam1, "BLACK", 16);
			*iParam2 = 0;
			*uParam3 = 0;
			*uParam4 = 10;
			break;
		
		case 17:
			StringCopy(sParam1, "GRAPHITE", 16);
			*iParam2 = 0;
			*uParam3 = 1;
			*uParam4 = 5;
			break;
		
		case 18:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*iParam2 = 0;
			*uParam3 = 11;
			*uParam4 = 2;
			break;
		
		case 19:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*iParam2 = 0;
			*uParam3 = 2;
			*uParam4 = 5;
			break;
		
		case 20:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*iParam2 = 0;
			*uParam3 = 3;
			*uParam4 = 6;
			break;
		
		case 21:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*iParam2 = 0;
			*uParam3 = 5;
			*uParam4 = 111;
			break;
		
		case 22:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*iParam2 = 0;
			*uParam3 = 6;
			*uParam4 = 4;
			break;
		
		case 23:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*iParam2 = 0;
			*uParam3 = 7;
			*uParam4 = 5;
			break;
		
		case 24:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*iParam2 = 0;
			*uParam3 = 8;
			*uParam4 = 5;
			break;
		
		case 25:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*iParam2 = 0;
			*uParam3 = 9;
			*uParam4 = 7;
			break;
		
		case 26:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*iParam2 = 0;
			*uParam3 = 10;
			*uParam4 = 7;
			break;
		
		case 27:
			StringCopy(sParam1, "RED", 16);
			*iParam2 = 0;
			*uParam3 = 27;
			*uParam4 = 36;
			break;
		
		case 28:
			StringCopy(sParam1, "TORINO_RED", 16);
			*iParam2 = 0;
			*uParam3 = 28;
			*uParam4 = 28;
			break;
		
		case 29:
			StringCopy(sParam1, "LAVA_RED", 16);
			*iParam2 = 0;
			*uParam3 = 150;
			*uParam4 = 42;
			break;
		
		case 30:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*iParam2 = 0;
			*uParam3 = 30;
			*uParam4 = 36;
			break;
		
		case 31:
			StringCopy(sParam1, "GRACE_RED", 16);
			*iParam2 = 0;
			*uParam3 = 31;
			*uParam4 = 27;
			break;
		
		case 32:
			StringCopy(sParam1, "GARNET_RED", 16);
			*iParam2 = 0;
			*uParam3 = 32;
			*uParam4 = 25;
			break;
		
		case 33:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*iParam2 = 0;
			*uParam3 = 33;
			*uParam4 = 47;
			break;
		
		case 34:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*iParam2 = 0;
			*uParam3 = 34;
			*uParam4 = 47;
			break;
		
		case 35:
			StringCopy(sParam1, "WINE_RED", 16);
			*iParam2 = 0;
			*uParam3 = 143;
			*uParam4 = 31;
			break;
		
		case 36:
			StringCopy(sParam1, "CANDY_RED", 16);
			*iParam2 = 0;
			*uParam3 = 35;
			*uParam4 = 25;
			break;
		
		case 37:
			StringCopy(sParam1, "PINK", 16);
			*iParam2 = 0;
			*uParam3 = 137;
			*uParam4 = 3;
			break;
		
		case 38:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*iParam2 = 0;
			*uParam3 = 136;
			*uParam4 = 5;
			break;
		
		case 39:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*iParam2 = 0;
			*uParam3 = 36;
			*uParam4 = 26;
			break;
		
		case 40:
			StringCopy(sParam1, "ORANGE", 16);
			*iParam2 = 0;
			*uParam3 = 38;
			*uParam4 = 37;
			break;
		
		case 41:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*iParam2 = 0;
			*uParam3 = 138;
			*uParam4 = 89;
			break;
		
		case 42:
			StringCopy(sParam1, "BRONZE", 16);
			*iParam2 = 0;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 43:
			StringCopy(sParam1, "YELLOW", 16);
			*iParam2 = 0;
			*uParam3 = 88;
			*uParam4 = 88;
			break;
		
		case 44:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*iParam2 = 0;
			*uParam3 = 89;
			*uParam4 = 88;
			break;
		
		case 45:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*iParam2 = 0;
			*uParam3 = 91;
			*uParam4 = 91;
			break;
		
		case 46:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*iParam2 = 0;
			*uParam3 = 49;
			*uParam4 = 52;
			break;
		
		case 47:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*iParam2 = 0;
			*uParam3 = 50;
			*uParam4 = 53;
			break;
		
		case 48:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*iParam2 = 0;
			*uParam3 = 51;
			*uParam4 = 66;
			break;
		
		case 49:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*iParam2 = 0;
			*uParam3 = 52;
			*uParam4 = 59;
			break;
		
		case 50:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*iParam2 = 0;
			*uParam3 = 53;
			*uParam4 = 59;
			break;
		
		case 51:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*iParam2 = 0;
			*uParam3 = 54;
			*uParam4 = 60;
			break;
		
		case 52:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*iParam2 = 0;
			*uParam3 = 92;
			*uParam4 = 92;
			break;
		
		case 53:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*iParam2 = 0;
			*uParam3 = 141;
			*uParam4 = 73;
			break;
		
		case 54:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*iParam2 = 0;
			*uParam3 = 61;
			*uParam4 = 63;
			break;
		
		case 55:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*iParam2 = 0;
			*uParam3 = 62;
			*uParam4 = 68;
			break;
		
		case 56:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*iParam2 = 0;
			*uParam3 = 63;
			*uParam4 = 87;
			break;
		
		case 57:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*iParam2 = 0;
			*uParam3 = 65;
			*uParam4 = 87;
			break;
		
		case 58:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*iParam2 = 0;
			*uParam3 = 66;
			*uParam4 = 60;
			break;
		
		case 59:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*iParam2 = 0;
			*uParam3 = 67;
			*uParam4 = 67;
			break;
		
		case 60:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*iParam2 = 0;
			*uParam3 = 68;
			*uParam4 = 68;
			break;
		
		case 61:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*iParam2 = 0;
			*uParam3 = 69;
			*uParam4 = 74;
			break;
		
		case 62:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*iParam2 = 0;
			*uParam3 = 73;
			*uParam4 = 73;
			break;
		
		case 63:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*iParam2 = 0;
			*uParam3 = 70;
			*uParam4 = 70;
			break;
		
		case 64:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*iParam2 = 0;
			*uParam3 = 74;
			*uParam4 = 74;
			break;
		
		case 65:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*iParam2 = 0;
			*uParam3 = 96;
			*uParam4 = 95;
			break;
		
		case 66:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*iParam2 = 0;
			*uParam3 = 101;
			*uParam4 = 95;
			break;
		
		case 67:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*iParam2 = 0;
			*uParam3 = 95;
			*uParam4 = 97;
			break;
		
		case 68:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*iParam2 = 0;
			*uParam3 = 94;
			*uParam4 = 104;
			break;
		
		case 69:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*iParam2 = 0;
			*uParam3 = 97;
			*uParam4 = 98;
			break;
		
		case 70:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*iParam2 = 0;
			*uParam3 = 103;
			*uParam4 = 104;
			break;
		
		case 71:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*iParam2 = 0;
			*uParam3 = 104;
			*uParam4 = 104;
			break;
		
		case 72:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*iParam2 = 0;
			*uParam3 = 98;
			*uParam4 = 95;
			break;
		
		case 73:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*iParam2 = 0;
			*uParam3 = 100;
			*uParam4 = 100;
			break;
		
		case 74:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*iParam2 = 0;
			*uParam3 = 102;
			*uParam4 = 105;
			break;
		
		case 75:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*iParam2 = 0;
			*uParam3 = 99;
			*uParam4 = 106;
			break;
		
		case 76:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*iParam2 = 0;
			*uParam3 = 105;
			*uParam4 = 105;
			break;
		
		case 77:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*iParam2 = 0;
			*uParam3 = 106;
			*uParam4 = 106;
			break;
		
		case 78:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*iParam2 = 0;
			*uParam3 = 72;
			*uParam4 = 64;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*iParam2 = 0;
			*uParam3 = 146;
			*uParam4 = 145;
			break;
		
		case 80:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*iParam2 = 0;
			*uParam3 = 145;
			*uParam4 = 74;
			break;
		
		case 81:
			StringCopy(sParam1, "CREAM", 16);
			*iParam2 = 0;
			*uParam3 = 107;
			*uParam4 = 107;
			break;
		
		case 82:
			StringCopy(sParam1, "WHITE", 16);
			*iParam2 = 0;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 83:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*iParam2 = 0;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 84:
			StringCopy(sParam1, "BLACK", 16);
			*iParam2 = 1;
			*uParam3 = 0;
			*uParam4 = 0;
			break;
		
		case 85:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*iParam2 = 1;
			*uParam3 = 147;
			*uParam4 = 0;
			break;
		
		case 86:
			StringCopy(sParam1, "GRAPHITE", 16);
			*iParam2 = 1;
			*uParam3 = 1;
			*uParam4 = 0;
			break;
		
		case 87:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*iParam2 = 1;
			*uParam3 = 11;
			*uParam4 = 0;
			break;
		
		case 88:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*iParam2 = 1;
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 89:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*iParam2 = 1;
			*uParam3 = 3;
			*uParam4 = 2;
			break;
		
		case 90:
			StringCopy(sParam1, "SILVER", 16);
			*iParam2 = 1;
			*uParam3 = 4;
			*uParam4 = 4;
			break;
		
		case 91:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*iParam2 = 1;
			*uParam3 = 5;
			*uParam4 = 5;
			break;
		
		case 92:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*iParam2 = 1;
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		
		case 93:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*iParam2 = 1;
			*uParam3 = 7;
			*uParam4 = 0;
			break;
		
		case 94:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*iParam2 = 1;
			*uParam3 = 8;
			*uParam4 = 0;
			break;
		
		case 95:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*iParam2 = 1;
			*uParam3 = 9;
			*uParam4 = 0;
			break;
		
		case 96:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*iParam2 = 1;
			*uParam3 = 10;
			*uParam4 = 0;
			break;
		
		case 97:
			StringCopy(sParam1, "RED", 16);
			*iParam2 = 1;
			*uParam3 = 27;
			*uParam4 = 0;
			break;
		
		case 98:
			StringCopy(sParam1, "TORINO_RED", 16);
			*iParam2 = 1;
			*uParam3 = 28;
			*uParam4 = 0;
			break;
		
		case 99:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*iParam2 = 1;
			*uParam3 = 29;
			*uParam4 = 0;
			break;
		
		case 100:
			StringCopy(sParam1, "LAVA_RED", 16);
			*iParam2 = 1;
			*uParam3 = 150;
			*uParam4 = 0;
			break;
		
		case 101:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*iParam2 = 1;
			*uParam3 = 30;
			*uParam4 = 0;
			break;
		
		case 102:
			StringCopy(sParam1, "GRACE_RED", 16);
			*iParam2 = 1;
			*uParam3 = 31;
			*uParam4 = 0;
			break;
		
		case 103:
			StringCopy(sParam1, "GARNET_RED", 16);
			*iParam2 = 1;
			*uParam3 = 32;
			*uParam4 = 0;
			break;
		
		case 104:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*iParam2 = 1;
			*uParam3 = 33;
			*uParam4 = 0;
			break;
		
		case 105:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*iParam2 = 1;
			*uParam3 = 34;
			*uParam4 = 0;
			break;
		
		case 106:
			StringCopy(sParam1, "WINE_RED", 16);
			*iParam2 = 1;
			*uParam3 = 143;
			*uParam4 = 0;
			break;
		
		case 107:
			StringCopy(sParam1, "CANDY_RED", 16);
			*iParam2 = 1;
			*uParam3 = 35;
			*uParam4 = 0;
			break;
		
		case 108:
			StringCopy(sParam1, "HOT PINK", 16);
			*iParam2 = 1;
			*uParam3 = 135;
			*uParam4 = 0;
			break;
		
		case 109:
			StringCopy(sParam1, "PINK", 16);
			*iParam2 = 1;
			*uParam3 = 137;
			*uParam4 = 0;
			break;
		
		case 110:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*iParam2 = 1;
			*uParam3 = 136;
			*uParam4 = 0;
			break;
		
		case 111:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*iParam2 = 1;
			*uParam3 = 36;
			*uParam4 = 0;
			break;
		
		case 112:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*iParam2 = 1;
			*uParam3 = 138;
			*uParam4 = 0;
			break;
		
		case 113:
			StringCopy(sParam1, "GOLD", 16);
			*iParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 99;
			break;
		
		case 114:
			StringCopy(sParam1, "BRONZE", 16);
			*iParam2 = 1;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 115:
			StringCopy(sParam1, "YELLOW", 16);
			*iParam2 = 1;
			*uParam3 = 88;
			*uParam4 = 0;
			break;
		
		case 116:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*iParam2 = 1;
			*uParam3 = 91;
			*uParam4 = 0;
			break;
		
		case 117:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*iParam2 = 1;
			*uParam3 = 49;
			*uParam4 = 0;
			break;
		
		case 118:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*iParam2 = 1;
			*uParam3 = 51;
			*uParam4 = 0;
			break;
		
		case 119:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*iParam2 = 1;
			*uParam3 = 52;
			*uParam4 = 0;
			break;
		
		case 120:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*iParam2 = 1;
			*uParam3 = 53;
			*uParam4 = 0;
			break;
		
		case 121:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*iParam2 = 1;
			*uParam3 = 54;
			*uParam4 = 0;
			break;
		
		case 122:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*iParam2 = 1;
			*uParam3 = 92;
			*uParam4 = 0;
			break;
		
		case 123:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*iParam2 = 1;
			*uParam3 = 141;
			*uParam4 = 0;
			break;
		
		case 124:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*iParam2 = 1;
			*uParam3 = 61;
			*uParam4 = 0;
			break;
		
		case 125:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*iParam2 = 1;
			*uParam3 = 62;
			*uParam4 = 0;
			break;
		
		case 126:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*iParam2 = 1;
			*uParam3 = 63;
			*uParam4 = 0;
			break;
		
		case 127:
			StringCopy(sParam1, "BLUE", 16);
			*iParam2 = 1;
			*uParam3 = 64;
			*uParam4 = 0;
			break;
		
		case 128:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*iParam2 = 1;
			*uParam3 = 65;
			*uParam4 = 0;
			break;
		
		case 129:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*iParam2 = 1;
			*uParam3 = 66;
			*uParam4 = 0;
			break;
		
		case 130:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*iParam2 = 1;
			*uParam3 = 67;
			*uParam4 = 0;
			break;
		
		case 131:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*iParam2 = 1;
			*uParam3 = 68;
			*uParam4 = 0;
			break;
		
		case 132:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*iParam2 = 1;
			*uParam3 = 69;
			*uParam4 = 0;
			break;
		
		case 133:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*iParam2 = 1;
			*uParam3 = 73;
			*uParam4 = 0;
			break;
		
		case 134:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*iParam2 = 1;
			*uParam3 = 74;
			*uParam4 = 0;
			break;
		
		case 135:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*iParam2 = 1;
			*uParam3 = 101;
			*uParam4 = 0;
			break;
		
		case 136:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*iParam2 = 1;
			*uParam3 = 95;
			*uParam4 = 0;
			break;
		
		case 137:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*iParam2 = 1;
			*uParam3 = 94;
			*uParam4 = 0;
			break;
		
		case 138:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*iParam2 = 1;
			*uParam3 = 97;
			*uParam4 = 0;
			break;
		
		case 139:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*iParam2 = 1;
			*uParam3 = 103;
			*uParam4 = 0;
			break;
		
		case 140:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*iParam2 = 1;
			*uParam3 = 104;
			*uParam4 = 0;
			break;
		
		case 141:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*iParam2 = 1;
			*uParam3 = 98;
			*uParam4 = 0;
			break;
		
		case 142:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*iParam2 = 1;
			*uParam3 = 100;
			*uParam4 = 0;
			break;
		
		case 143:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*iParam2 = 1;
			*uParam3 = 102;
			*uParam4 = 0;
			break;
		
		case 144:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*iParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 0;
			break;
		
		case 145:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*iParam2 = 1;
			*uParam3 = 105;
			*uParam4 = 0;
			break;
		
		case 146:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*iParam2 = 1;
			*uParam3 = 106;
			*uParam4 = 0;
			break;
		
		case 147:
			StringCopy(sParam1, "PURPLE", 16);
			*iParam2 = 1;
			*uParam3 = 71;
			*uParam4 = 0;
			break;
		
		case 148:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*iParam2 = 1;
			*uParam3 = 72;
			*uParam4 = 0;
			break;
		
		case 149:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*iParam2 = 1;
			*uParam3 = 142;
			*uParam4 = 0;
			break;
		
		case 150:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*iParam2 = 1;
			*uParam3 = 145;
			*uParam4 = 0;
			break;
		
		case 151:
			StringCopy(sParam1, "CREAM", 16);
			*iParam2 = 1;
			*uParam3 = 107;
			*uParam4 = 0;
			break;
		
		case 152:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*iParam2 = 1;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 153:
			StringCopy(sParam1, "BLACK", 16);
			*iParam2 = 2;
			*uParam3 = 12;
			*uParam4 = 0;
			break;
		
		case 154:
			StringCopy(sParam1, "GREY", 16);
			*iParam2 = 2;
			*uParam3 = 13;
			*uParam4 = 0;
			break;
		
		case 155:
			StringCopy(sParam1, "LIGHT_GREY", 16);
			*iParam2 = 2;
			*uParam3 = 14;
			*uParam4 = 0;
			break;
		
		case 156:
			StringCopy(sParam1, "WHITE", 16);
			*iParam2 = 2;
			*uParam3 = 131;
			*uParam4 = 0;
			break;
		
		case 157:
			StringCopy(sParam1, "BLUE", 16);
			*iParam2 = 2;
			*uParam3 = 83;
			*uParam4 = 0;
			break;
		
		case 158:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*iParam2 = 2;
			*uParam3 = 82;
			*uParam4 = 0;
			break;
		
		case 159:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*iParam2 = 2;
			*uParam3 = 84;
			*uParam4 = 0;
			break;
		
		case 160:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*iParam2 = 2;
			*uParam3 = 149;
			*uParam4 = 0;
			break;
		
		case 161:
			StringCopy(sParam1, "Purple", 16);
			*iParam2 = 2;
			*uParam3 = 148;
			*uParam4 = 0;
			break;
		
		case 162:
			StringCopy(sParam1, "RED", 16);
			*iParam2 = 2;
			*uParam3 = 39;
			*uParam4 = 0;
			break;
		
		case 163:
			StringCopy(sParam1, "DARK_RED", 16);
			*iParam2 = 2;
			*uParam3 = 40;
			*uParam4 = 0;
			break;
		
		case 164:
			StringCopy(sParam1, "ORANGE", 16);
			*iParam2 = 2;
			*uParam3 = 41;
			*uParam4 = 0;
			break;
		
		case 165:
			StringCopy(sParam1, "YELLOW", 16);
			*iParam2 = 2;
			*uParam3 = 42;
			*uParam4 = 0;
			break;
		
		case 166:
			StringCopy(sParam1, "GREEN", 16);
			*iParam2 = 2;
			*uParam3 = 128;
			*uParam4 = 0;
			break;
		
		case 167:
			StringCopy(sParam1, "MATTE_FOR", 16);
			*iParam2 = 2;
			*uParam3 = 151;
			*uParam4 = 0;
			break;
		
		case 168:
			StringCopy(sParam1, "MATTE_FOIL", 16);
			*iParam2 = 2;
			*uParam3 = 155;
			*uParam4 = 0;
			break;
		
		case 169:
			StringCopy(sParam1, "MATTE_OD", 16);
			*iParam2 = 2;
			*uParam3 = 152;
			*uParam4 = 0;
			break;
		
		case 170:
			StringCopy(sParam1, "MATTE_DIRT", 16);
			*iParam2 = 2;
			*uParam3 = 153;
			*uParam4 = 0;
			break;
		
		case 171:
			StringCopy(sParam1, "MATTE_DESERT", 16);
			*iParam2 = 2;
			*uParam3 = 154;
			*uParam4 = 0;
			break;
		
		case 172:
			StringCopy(sParam1, "BR_STEEL", 16);
			*iParam2 = 3;
			*uParam3 = 117;
			*uParam4 = 18;
			break;
		
		case 173:
			StringCopy(sParam1, "BR_ALUMINIUM", 16);
			*iParam2 = 3;
			*uParam3 = 119;
			*uParam4 = 5;
			break;
		
		case 174:
			StringCopy(sParam1, "GOLD_P", 16);
			*iParam2 = 3;
			*uParam3 = 158;
			*uParam4 = 160;
			break;
		
		case 175:
			StringCopy(sParam1, "GOLD_S", 16);
			*iParam2 = 3;
			*uParam3 = 159;
			*uParam4 = 160;
			break;
	}
	return *iParam2 != -1;
}

float func_308(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	iVar0 = 100000;
	iVar1 = 65000;
	iVar2 = 50000;
	iVar3 = 20000;
	iVar4 = 20000;
	iVar5 = iVar4;
	if ((unk_0x419E13582192CFEA(iParam0) && unk_0xBFCE58B2B3249999(iParam0, 0)) && unk_0x3BBFB91FC84F6C2A(iParam0) >= 0)
	{
		if (unk_0xA1CC0998BBC30533(iParam0) == 3)
		{
			iVar5 = iVar0;
		}
		else if (unk_0xA1CC0998BBC30533(iParam0) == 1)
		{
			iVar5 = iVar1;
		}
		else if (unk_0xA1CC0998BBC30533(iParam0) == 2)
		{
			iVar5 = iVar2;
		}
		else if (unk_0xA1CC0998BBC30533(iParam0) == 0)
		{
			if (unk_0x69AF387D1A91914C(unk_0x6471F4759775FCA4(iParam0)))
			{
				iVar5 = iVar3;
			}
			else
			{
				iVar5 = iVar4;
			}
		}
	}
	fVar6 = (to_float(iVar5) / to_float(iVar4));
	return fVar6;
}

int func_309(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;
	bool bVar1;
	
	*uParam2 = 0;
	if (!unk_0x419E13582192CFEA(iParam0))
	{
		return 0;
	}
	if (!unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0xB4DD528ED76ED647(unk_0x6471F4759775FCA4(iParam0)))
	{
		return 0;
	}
	iVar0 = unk_0x6471F4759775FCA4(iParam0);
	if ((!func_336(iVar0, bParam1, uParam2) && !func_335(unk_0x1146A9AE09CE2B14())) && !func_318(iParam0))
	{
		return 0;
	}
	if (func_335(unk_0x1146A9AE09CE2B14()))
	{
		if (func_317(iVar0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	bVar1 = false;
	if (func_316(unk_0x1146A9AE09CE2B14()) && (unk_0xE267416B80E7921F(iVar0) || unk_0x48E10529AEAE00F9(iVar0)))
	{
		bVar1 = true;
	}
	if (((unk_0x9AAA60D60CB4E5C7(iParam0) && !func_314(iParam0)) && !bVar1) && !(func_313(unk_0x6471F4759775FCA4(iParam0)) && func_310(unk_0x1146A9AE09CE2B14())))
	{
		switch (unk_0x6471F4759775FCA4(iParam0))
		{
			case joaat("cerberus"):
			case joaat("cerberus2"):
			case joaat("cerberus3"):
			case joaat("monster3"):
			case joaat("monster4"):
			case joaat("monster5"):
				*uParam2 = 16;
				break;
			
			default:
				*uParam2 = 2;
				break;
		}
		return 0;
	}
	if (!unk_0x02BFF15CAA701972())
	{
		if ((func_378(iParam0) && unk_0x6471F4759775FCA4(iParam0) != joaat("sentinel2")) && unk_0x6471F4759775FCA4(iParam0) != joaat("issi2"))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	return 1;
}

int func_310(int iParam0)
{
	if (iParam0 != func_272())
	{
		if (func_312(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_311(Global_2426865[iParam0 /*449*/].f_319.f_6) == 11;
			}
		}
	}
	return 0;
}

int func_311(int iParam0)
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
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
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
		case joaat("mpsv_lp0_31"):
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
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
		
		case 148:
		case 150:
		case 152:
		case 151:
		case 149:
			return 21;
			break;
		
		case 153:
			return 22;
			break;
	}
	return -1;
}

int func_312(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x8CFC2F41A749E236(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xCAD1755E530A6012(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2441237.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_313(int iParam0)
{
	if (((iParam0 == joaat("mule4") || iParam0 == joaat("pounder2")) || iParam0 == joaat("speedo4")) || iParam0 == joaat("terbyte"))
	{
		return 1;
	}
	return 0;
}

int func_314(int iParam0)
{
	switch (unk_0x6471F4759775FCA4(iParam0))
	{
		case joaat("halftrack"):
		case joaat("phantom3"):
		case joaat("hauler2"):
		case joaat("trailerlarge"):
		case joaat("trailersmall2"):
		case joaat("bruiser"):
		case joaat("scarab"):
		case joaat("scarab2"):
		case joaat("scarab3"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			return 1;
			break;
		
		case joaat("cerberus"):
		case joaat("cerberus2"):
		case joaat("cerberus3"):
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (func_315(unk_0x1146A9AE09CE2B14()))
			{
				return 1;
			}
			break;
		
		case joaat("minitank"):
		case joaat("burrito2"):
			return 1;
	}
	return 0;
}

int func_315(int iParam0)
{
	if (iParam0 != func_272())
	{
		if (func_312(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_311(Global_2426865[iParam0 /*449*/].f_319.f_6) == 13;
			}
		}
	}
	return 0;
}

int func_316(int iParam0)
{
	if (iParam0 != func_272())
	{
		if (func_312(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_311(Global_2426865[iParam0 /*449*/].f_319.f_6) == 7;
			}
		}
	}
	return 0;
}

int func_317(int iParam0)
{
	switch (iParam0)
	{
		case joaat("avenger"):
		case joaat("thruster"):
		case joaat("riot2"):
		case joaat("chernobog"):
		case joaat("khanjali"):
			return 1;
			break;
	}
	return 0;
}

int func_318(int iParam0)
{
	if (func_334(unk_0x1146A9AE09CE2B14()) || func_333(unk_0x1146A9AE09CE2B14()))
	{
		if (func_319(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_319(int iParam0)
{
	if ((!unk_0x419E13582192CFEA(iParam0) || !unk_0xBFCE58B2B3249999(iParam0, 0)) || unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
		return 0;
	}
	if (func_322(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x5B38E054B758C032(iParam0, "Player_Vehicle"))
	{
		if (unk_0x05351AF95891EE5C(iParam0, "Player_Vehicle") == unk_0x17114A8CCDEB9E3D(unk_0x1146A9AE09CE2B14()))
		{
			if (func_320(iParam0))
			{
				return 1;
			}
			switch (unk_0x6471F4759775FCA4(iParam0))
			{
				case joaat("ardent"):
				case joaat("nightshark"):
				case joaat("deluxo"):
				case joaat("stromberg"):
				case joaat("comet4"):
				case joaat("revolter"):
				case joaat("savestra"):
				case joaat("viseris"):
				case joaat("caracara"):
				case joaat("paragon2"):
					return 1;
					break;
				}
			}
	}
	return 0;
}

int func_320(int iParam0)
{
	if (!unk_0x419E13582192CFEA(iParam0) || !unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		return 0;
	}
	if (func_321(unk_0x6471F4759775FCA4(iParam0)))
	{
		return 1;
	}
	return 0;
}

int func_321(int iParam0)
{
	switch (iParam0)
	{
		case joaat("apc"):
		case joaat("dune3"):
		case joaat("halftrack"):
		case joaat("oppressor"):
		case joaat("oppressor2"):
		case joaat("tampa3"):
		case joaat("technical3"):
		case joaat("insurgent3"):
		case joaat("vigilante"):
		case joaat("barrage"):
		case joaat("menacer"):
		case joaat("scramjet"):
			return 1;
			break;
	}
	return 0;
}

int func_322(int iParam0, bool bParam1)
{
	switch (unk_0x6471F4759775FCA4(iParam0))
	{
		case joaat("technical"):
		case joaat("insurgent"):
			if (func_324(unk_0x6471F4759775FCA4(iParam0), 0))
			{
				if (Global_2544210.f_303 == iParam0)
				{
					return 1;
				}
				else if (func_323(iParam0) != -1 && !bParam1)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_323(int iParam0)
{
	int iVar0;
	
	if (unk_0x419E13582192CFEA(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Global_2441237.f_647[iVar0] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_324(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		if (func_332(iParam0, 0))
		{
			return 1;
		}
	}
	switch (iParam0)
	{
		case joaat("faction"):
		case joaat("buccaneer"):
		case joaat("chino"):
		case joaat("moonbeam"):
		case joaat("primo"):
		case joaat("voodoo2"):
			return func_331();
			break;
		
		case joaat("sabregt"):
			if (Global_262145.f_14397)
			{
				return func_330();
			}
			break;
		
		case joaat("tornado"):
		case joaat("tornado2"):
		case joaat("tornado3"):
			if (Global_262145.f_14398)
			{
				return func_330();
			}
			break;
		
		case joaat("virgo3"):
			if (Global_262145.f_14396)
			{
				return func_330();
			}
			break;
		
		case joaat("minivan"):
			if (Global_262145.f_14399)
			{
				return func_330();
			}
			break;
		
		case joaat("slamvan"):
			if (Global_262145.f_14401)
			{
				return func_330();
			}
			break;
		
		case joaat("sultan"):
		case joaat("banshee"):
			return func_329();
			break;
		
		case joaat("comet2"):
			if (Global_262145.f_18848)
			{
				return func_328();
			}
			break;
		
		case joaat("diablous"):
			if (Global_262145.f_18850)
			{
				return func_328();
			}
			break;
		
		case joaat("fcr"):
			if (Global_262145.f_18854)
			{
				return func_328();
			}
			break;
		
		case joaat("elegy2"):
			if (Global_262145.f_18851)
			{
				return func_328();
			}
			break;
		
		case joaat("nero"):
			if (Global_262145.f_18858)
			{
				return func_328();
			}
			break;
		
		case joaat("italigtb"):
			if (Global_262145.f_18856)
			{
				return func_328();
			}
			break;
		
		case joaat("specter"):
			if (Global_262145.f_18861)
			{
				return func_328();
			}
			break;
		
		case joaat("technical"):
			if (Global_262145.f_20806)
			{
				return func_327();
			}
			break;
		
		case joaat("insurgent"):
			if (Global_262145.f_20807)
			{
				return func_327();
			}
			break;
		
		case joaat("ratloader"):
		case joaat("ratloader2"):
			return func_326();
			break;
		
		case joaat("glendale"):
			if (func_326() || func_325())
			{
				return 1;
			}
			break;
		
		case joaat("impaler"):
			return func_326();
			break;
		
		case joaat("issi3"):
			return func_326();
			break;
		
		case joaat("gargoyle"):
			return func_326();
			break;
		
		case joaat("dominator"):
			return func_326();
			break;
		
		case joaat("dominator2"):
			return func_326();
			break;
		
		case joaat("imperator"):
			return func_326();
			break;
		
		case joaat("imperator2"):
			return func_326();
			break;
		
		case joaat("imperator3"):
			return func_326();
			break;
		
		case joaat("deathbike"):
			return func_326();
			break;
		
		case joaat("deathbike2"):
			return func_326();
			break;
		
		case joaat("deathbike3"):
			return func_326();
			break;
		
		case joaat("impaler2"):
		case joaat("brutus"):
		case joaat("bruiser"):
		case joaat("slamvan4"):
		case joaat("issi4"):
		case joaat("monster3"):
		case joaat("scarab"):
		case joaat("cerberus"):
		case joaat("dominator4"):
		case joaat("zr380"):
		case joaat("impaler3"):
		case joaat("brutus2"):
		case joaat("bruiser2"):
		case joaat("slamvan5"):
		case joaat("issi5"):
		case joaat("monster4"):
		case joaat("scarab2"):
		case joaat("cerberus2"):
		case joaat("dominator5"):
		case joaat("zr3802"):
		case joaat("impaler4"):
		case joaat("brutus3"):
		case joaat("bruiser3"):
		case joaat("slamvan6"):
		case joaat("issi6"):
		case joaat("monster5"):
		case joaat("scarab3"):
		case joaat("cerberus3"):
		case joaat("dominator6"):
		case joaat("zr3803"):
			return func_326();
			break;
		
		case joaat("youga2"):
			if (Global_262145.f_28828)
			{
				return func_325();
			}
			break;
		
		case joaat("gauntlet3"):
			if (Global_262145.f_29178)
			{
				return func_325();
			}
			break;
		
		case joaat("manana"):
			if (Global_262145.f_28827)
			{
				return func_325();
			}
			break;
		
		case joaat("peyote"):
			if (Global_262145.f_29177)
			{
				return func_325();
			}
			break;
		
		case joaat("yosemite"):
			if (Global_262145.f_29176)
			{
				return func_325();
			}
			break;
	}
	return 0;
}

bool func_325()
{
	return unk_0x14FA206D9CE730A9(1815791016);
}

bool func_326()
{
	return unk_0x14FA206D9CE730A9(1927191088);
}

bool func_327()
{
	return unk_0x14FA206D9CE730A9(2067165443);
}

bool func_328()
{
	return unk_0x14FA206D9CE730A9(-957277403);
}

bool func_329()
{
	return unk_0x14FA206D9CE730A9(210122941);
}

bool func_330()
{
	return unk_0x14FA206D9CE730A9(-1894522408);
}

bool func_331()
{
	return unk_0x14FA206D9CE730A9(1630677557);
}

int func_332(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_14397)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14398)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14396)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14399)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14401)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14400)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_18848)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_18850)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_18854)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_18851)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_18858)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_18856)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_18861)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("technical3"):
			if (Global_262145.f_20806)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("insurgent3"):
			if (Global_262145.f_20807)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("issi4"):
		case joaat("issi5"):
		case joaat("issi6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("yosemite3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("glendale2"):
			return 1;
			break;
	}
	return 0;
}

int func_333(int iParam0)
{
	if (iParam0 != func_272())
	{
		if (func_312(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1 && Global_2426865[iParam0 /*449*/].f_319.f_9 != func_272())
			{
				return func_311(Global_2426865[iParam0 /*449*/].f_319.f_6) == 5;
			}
		}
	}
	return 0;
}

int func_334(int iParam0)
{
	if (iParam0 != func_272())
	{
		if (func_312(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1 && Global_2426865[iParam0 /*449*/].f_319.f_9 != func_272())
			{
				return func_311(Global_2426865[iParam0 /*449*/].f_319.f_6) == 8;
			}
		}
	}
	return 0;
}

int func_335(int iParam0)
{
	if (iParam0 != func_272())
	{
		if (func_312(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_311(Global_2426865[iParam0 /*449*/].f_319.f_6) == 9;
			}
		}
	}
	return 0;
}

int func_336(int iParam0, bool bParam1, var uParam2)
{
	bool bVar0;
	
	if (!bParam1)
	{
		if ((((((((((((((iParam0 == joaat("police") || iParam0 == joaat("policeold1")) || iParam0 == joaat("policeold2")) || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("polmav")) || iParam0 == joaat("policeb")) || iParam0 == joaat("policet")) || iParam0 == joaat("riot")) || iParam0 == joaat("sheriff")) || iParam0 == joaat("pranger")) || iParam0 == joaat("sheriff2"))
		{
			*uParam2 = 1;
			return 0;
		}
	}
	if (((((((iParam0 == joaat("ambulance") || iParam0 == joaat("firetruk")) || iParam0 == joaat("taxi")) || iParam0 == joaat("lguard")) || iParam0 == joaat("ripley")) || iParam0 == joaat("dilettante2")) || iParam0 == joaat("airbus")) || iParam0 == joaat("airtug"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("burrito") || iParam0 == joaat("rumpo2")) || iParam0 == joaat("speedo")) || iParam0 == joaat("speedo2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("scorcher") || iParam0 == joaat("bmx")) || iParam0 == joaat("cruiser")) || iParam0 == joaat("fixter"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((((((((((((((((((iParam0 == joaat("caddy") || iParam0 == joaat("forklift")) || iParam0 == joaat("caddy2")) || iParam0 == joaat("crusader")) || iParam0 == joaat("tribike")) || iParam0 == joaat("tribike2")) || iParam0 == joaat("tribike3")) || iParam0 == joaat("tractor")) || iParam0 == joaat("tractor2")) || iParam0 == joaat("mower")) || iParam0 == joaat("tornado4")) || iParam0 == joaat("docktug")) || iParam0 == joaat("stretch")) || iParam0 == joaat("bison2")) || iParam0 == joaat("bison3")) || iParam0 == joaat("benson")) || iParam0 == joaat("pounder")) || iParam0 == joaat("submersible")) || iParam0 == joaat("emperor3")) || iParam0 == joaat("dune2"))
	{
		*uParam2 = 2;
		return 0;
	}
	bVar0 = false;
	if (func_316(unk_0x1146A9AE09CE2B14()) && (unk_0xE267416B80E7921F(iParam0) || unk_0x48E10529AEAE00F9(iParam0)))
	{
		bVar0 = true;
	}
	if (((((((((((((!unk_0xB480C9C35514775A(iParam0) && !unk_0x69AF387D1A91914C(iParam0)) && iParam0 != joaat("blazer")) && iParam0 != joaat("blazer2")) && iParam0 != joaat("blazer3")) && iParam0 != joaat("blazer4")) && iParam0 != joaat("blazer5")) && iParam0 != joaat("chimera")) && iParam0 != joaat("trailerlarge")) && iParam0 != joaat("trailersmall2")) && iParam0 != joaat("rrocket")) && iParam0 != joaat("stryder")) && iParam0 != joaat("verus")) && !bVar0)
	{
		*uParam2 = 2;
		return 0;
	}
	if (iParam0 == joaat("monster"))
	{
		*uParam2 = 2;
		return 0;
	}
	if ((iParam0 == joaat("insurgent") || iParam0 == joaat("technical")) || iParam0 == joaat("limo2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (unk_0x02BFF15CAA701972())
	{
		if (func_337(iParam0))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	if (!unk_0x02BFF15CAA701972())
	{
		if (iParam0 == joaat("insurgent") || iParam0 == joaat("insurgent2"))
		{
			*uParam2 = 2;
		}
	}
	return 1;
}

int func_337(int iParam0)
{
	switch (iParam0)
	{
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("forklift"):
			return 1;
			break;
	}
	return 0;
}

int func_338(char* sParam0)
{
	int iVar0;
	var uVar1[8];
	int iVar2;
	int iVar3;
	
	iVar3 = unk_0xA3A3E3B836DB6D5B(sParam0);
	iVar0 = 0;
	while (iVar0 < Global_108979)
	{
		if (unk_0xAB6A270F84A8781E(&(Global_108979[iVar0 /*4*/])))
		{
			StringCopy(&(Global_108979[iVar0 /*4*/]), sParam0, 16);
			Global_108988[iVar0] = unk_0x02BFF15CAA701972();
			Global_108991 = 1;
			Global_108992 = 1;
			if (unk_0x02BFF15CAA701972())
			{
				iVar2 = 0;
				while (iVar2 < 8)
				{
					if (iVar2 < iVar3)
					{
						uVar1[iVar2] = func_341(unk_0xE803430E29ABF0DE(sParam0, iVar2, iVar2 + 1));
					}
					else
					{
						uVar1[iVar2] = func_341("");
					}
					iVar2++;
				}
				func_340(1362, uVar1[0], -1, 1);
				func_340(1363, uVar1[1], -1, 1);
				func_340(1364, uVar1[2], -1, 1);
				func_340(1365, uVar1[3], -1, 1);
				func_340(1366, uVar1[4], -1, 1);
				func_340(1367, uVar1[5], -1, 1);
				func_340(1368, uVar1[6], -1, 1);
				func_340(1369, uVar1[7], -1, 1);
				func_339(3763, 1, -1, 1);
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_108979)
	{
		iVar0++;
	}
	return 0;
}

int func_339(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_13();
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

var func_340(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_13();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0x7DAFCA3E4EC9113B((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0x5A0258255BDE2FB1((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x7DAFCA3E4EC9113B((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0x5A0258255BDE2FB1((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x7DAFCA3E4EC9113B((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0x5A0258255BDE2FB1((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x7DAFCA3E4EC9113B((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0x5A0258255BDE2FB1((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x83F92F0DDD94A22D((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0x5A0258255BDE2FB1((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x83F92F0DDD94A22D((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0x5A0258255BDE2FB1((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0x5A0258255BDE2FB1((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0x5A0258255BDE2FB1((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0x5A0258255BDE2FB1((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0x5A0258255BDE2FB1((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0x5A0258255BDE2FB1((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0x5A0258255BDE2FB1((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0x5A0258255BDE2FB1((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - unk_0x5A0258255BDE2FB1((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - unk_0x5A0258255BDE2FB1((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - unk_0x5A0258255BDE2FB1((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 19018), 0, 1, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - unk_0x5A0258255BDE2FB1((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 22194), 0, 1, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - unk_0x5A0258255BDE2FB1((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 25538), 0, 1, iParam2, "_CASINOPSTAT_INT");
		iVar1 = ((iParam0 - 25538) - unk_0x5A0258255BDE2FB1((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 27258), 0, 1, iParam2, "_CASINOHSTPSTAT_INT");
		iVar1 = ((iParam0 - 27258) - unk_0x5A0258255BDE2FB1((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 28483), 0, 1, iParam2, "_SU20PSTAT_INT");
		iVar1 = ((iParam0 - 28483) - unk_0x5A0258255BDE2FB1((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 30483), 0, 1, iParam2, "_HISLANDPSTAT_INT");
		iVar1 = ((iParam0 - 30483) - unk_0x5A0258255BDE2FB1((iParam0 - 30483)) * 8) * 8;
	}
	else if (iParam0 >= 30707 && iParam0 < 31707)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 30707), 0, 1, iParam2, "_TUNERPSTAT_INT");
		iVar1 = ((iParam0 - 30707) - unk_0x5A0258255BDE2FB1((iParam0 - 30707)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0x5A0258255BDE2FB1((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0x5A0258255BDE2FB1((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0xD99D30290D6BDAC2(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_341(char* sParam0)
{
	if (unk_0xAB6A270F84A8781E(sParam0))
	{
		return 37;
	}
	if (unk_0x15173FB88ABC94F9(sParam0) == unk_0x15173FB88ABC94F9("A"))
	{
		return 0;
	}
	else if (unk_0x15173FB88ABC94F9(sParam0) == unk_0x15173FB88ABC94F9("B"))
	{
		return 1;
	}
	else if (unk_0x15173FB88ABC94F9(sParam0) == unk_0x15173FB88ABC94F9("C"))
	{
		return 2;
	}
	else if (unk_0x15173FB88ABC94F9(sParam0) == unk_0x15173FB88ABC94F9("D"))
	{
		return 3;
	}
	else if (unk_0x15173FB88ABC94F9(sParam0) == unk_0x15173FB88ABC94F9("E"))
	{
		return 4;
	}
	else if (unk_0x15173FB88ABC94F9(sParam0) == unk_0x15173FB88ABC94F9("F"))
	{
		return 5;
	}
	else if (unk_0x15173FB88ABC94F9(sParam0) == unk_0x15173FB88ABC94F9("G"))
	{
		return 6;
	}
	else if (unk_0x15173FB88ABC94F9(sParam0) == unk_0x15173FB88ABC94F9("H"))
	{
		return 7;
	}
	else if (unk_0x15173FB88ABC94F9(sParam0) == unk_0x15173FB88ABC94F9("I"))
	{
		return 8;
	}
	else if (unk_0x15173FB88ABC94F9(sParam0) == unk_0x15173FB88ABC94F9("J"))
	{
		return 9;
	}
	else if (unk_0x15173FB88ABC94F9(sParam0) == unk_0x15173FB88ABC94F9("K"))
	{
		return 10;
	}
	else if (unk_0x15173FB88ABC94F9(sParam0) == unk_0x15173FB88ABC94F9("L"))
	{
		return 11;
	}
	else if (unk_0x15173FB88ABC94F9(sParam0) == unk_0x15173FB88ABC94F9("M"))
	{
		return 12;
	}
	else if (unk_0x15173FB88ABC94F9(sParam0) == unk_0x15173FB88ABC94F9("N"))
	{
		return 13;
	}
	else if (unk_0x15173FB88ABC94F9(sParam0) == unk_0x15173FB88ABC94F9("O"))
	{
		return 14;
	}
	else if (unk_0x15173FB88ABC94F9(sParam0) == unk_0x15173FB88ABC94F9("P"))
	{
		return 15;
	}
	else if (unk_0x15173FB88ABC94F9(sParam0) == unk_0x15173FB88ABC94F9("Q"))
	{
		return 16;
	}
	else if (unk_0x15173FB88ABC94F9(sParam0) == unk_0x15173FB88ABC94F9("R"))
	{
		return 17;
	}
	else if (unk_0x15173FB88ABC94F9(sParam0) == unk_0x15173FB88ABC94F9("S"))
	{
		return 18;
	}
	else if (unk_0x15173FB88ABC94F9(sParam0) == unk_0x15173FB88ABC94F9("T"))
	{
		return 19;
	}
	else if (unk_0x15173FB88ABC94F9(sParam0) == unk_0x15173FB88ABC94F9("U"))
	{
		return 20;
	}
	else if (unk_0x15173FB88ABC94F9(sParam0) == unk_0x15173FB88ABC94F9("V"))
	{
		return 21;
	}
	else if (unk_0x15173FB88ABC94F9(sParam0) == unk_0x15173FB88ABC94F9("W"))
	{
		return 22;
	}
	else if (unk_0x15173FB88ABC94F9(sParam0) == unk_0x15173FB88ABC94F9("X"))
	{
		return 23;
	}
	else if (unk_0x15173FB88ABC94F9(sParam0) == unk_0x15173FB88ABC94F9("Y"))
	{
		return 24;
	}
	else if (unk_0x15173FB88ABC94F9(sParam0) == unk_0x15173FB88ABC94F9("Z"))
	{
		return 25;
	}
	else if (unk_0x15173FB88ABC94F9(sParam0) == unk_0x15173FB88ABC94F9("0"))
	{
		return 26;
	}
	else if (unk_0x15173FB88ABC94F9(sParam0) == unk_0x15173FB88ABC94F9("1"))
	{
		return 27;
	}
	else if (unk_0x15173FB88ABC94F9(sParam0) == unk_0x15173FB88ABC94F9("2"))
	{
		return 28;
	}
	else if (unk_0x15173FB88ABC94F9(sParam0) == unk_0x15173FB88ABC94F9("3"))
	{
		return 29;
	}
	else if (unk_0x15173FB88ABC94F9(sParam0) == unk_0x15173FB88ABC94F9("4"))
	{
		return 30;
	}
	else if (unk_0x15173FB88ABC94F9(sParam0) == unk_0x15173FB88ABC94F9("5"))
	{
		return 31;
	}
	else if (unk_0x15173FB88ABC94F9(sParam0) == unk_0x15173FB88ABC94F9("6"))
	{
		return 32;
	}
	else if (unk_0x15173FB88ABC94F9(sParam0) == unk_0x15173FB88ABC94F9("7"))
	{
		return 33;
	}
	else if (unk_0x15173FB88ABC94F9(sParam0) == unk_0x15173FB88ABC94F9("8"))
	{
		return 34;
	}
	else if (unk_0x15173FB88ABC94F9(sParam0) == unk_0x15173FB88ABC94F9("9"))
	{
		return 35;
	}
	else if (unk_0x15173FB88ABC94F9(sParam0) == unk_0x15173FB88ABC94F9(" "))
	{
		return 36;
	}
	return 37;
}

void func_342(var uParam0, int iParam1)
{
	uParam0->f_36 = 0;
	uParam0->f_35 = 0;
	if (unk_0x02BFF15CAA701972())
	{
		Global_2097152[func_343() /*5557*/].f_587.f_54 = 1;
		Global_2097152[func_343() /*5557*/].f_587.f_55 = 1;
		Global_2097152[func_343() /*5557*/].f_587.f_60 = uParam0->f_32;
		Global_2097152[func_343() /*5557*/].f_587.f_56 = { uParam0->f_28 };
		Global_2097152[func_343() /*5557*/].f_587.f_61++;
	}
	else
	{
		Global_112293.f_20116.f_265 = 1;
		Global_112293.f_20116.f_266 = iParam1;
		Global_112293.f_20116.f_261 = 1;
		Global_112293.f_20116.f_271 = uParam0->f_32;
		Global_112293.f_20116.f_267 = { uParam0->f_28 };
		if ((iParam1 == 0 || iParam1 == 1) || iParam1 == 2)
		{
			Global_112293.f_20116.f_281[iParam1] = 1;
			Global_112293.f_20116.f_285[iParam1]++;
			unk_0x39255E004257D303(joaat("sp_car_app_order_count"), 1f);
		}
	}
}

int func_343()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_344(int iParam0, var uParam1)
{
	int iVar0;
	char* sVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	if (unk_0xBFCE58B2B3249999(iParam0, 0) && *uParam1 == unk_0x6471F4759775FCA4(iParam0))
	{
		if (!unk_0x02BFF15CAA701972())
		{
			if (*uParam1 == joaat("patriot"))
			{
				uParam1->f_13 = -1;
			}
			if (*uParam1 == joaat("prairie"))
			{
				if (uParam1->f_13 > 1)
				{
					uParam1->f_13 = 1;
				}
			}
		}
		unk_0xFA4E6005E549B59C(iParam0, &(uParam1->f_28));
		if (uParam1->f_32 >= 0 && uParam1->f_32 < unk_0xF8A80F26627AA333())
		{
			unk_0xCF882B151A34557C(iParam0, uParam1->f_32);
		}
		unk_0x63316D59F2B56D9A(iParam0, &uVar4, &uVar5);
		unk_0x39A17B456BB9800A(iParam0, &uVar6, &uVar7);
		if (func_307(uParam1->f_1, &sVar1, &iVar0, &uVar2, &uVar3) && *uParam1 != joaat("sovereign"))
		{
			uVar4 = uVar2;
			uVar6 = uVar3;
			unk_0xF03ACE54462622C9(iParam0);
			iVar8 = 6;
			if (iVar0 == 0)
			{
				iVar8 = 0;
			}
			else if (iVar0 == 1)
			{
				iVar8 = 1;
			}
			else if (iVar0 == 2)
			{
				iVar8 = 3;
			}
			else if (iVar0 == 3)
			{
				iVar8 = 4;
			}
			else if (iVar0 == 4)
			{
				iVar8 = 5;
			}
			unk_0x73156EBB4802E831(iParam0, iVar8, 0, 0);
		}
		if (func_307(uParam1->f_2, &sVar1, &iVar0, &uVar2, &uVar3) && *uParam1 != joaat("sovereign"))
		{
			uVar5 = uVar2;
			unk_0x9327D4C0D6DF2D4A(iParam0);
			iVar9 = 6;
			if (iVar0 == 0)
			{
				iVar9 = 0;
			}
			else if (iVar0 == 1)
			{
				iVar9 = 1;
			}
			else if (iVar0 == 2)
			{
				iVar9 = 3;
			}
			else if (iVar0 == 3)
			{
				iVar9 = 4;
			}
			else if (iVar0 == 4)
			{
				iVar9 = 5;
			}
			unk_0x4C282482B986CA53(iParam0, iVar9, 0);
		}
		unk_0xC612552622E74D36(iParam0, uVar4, uVar5);
		unk_0xA2FEFE3BBCD9FB23(iParam0, uVar6, uVar7);
		unk_0x4544B07E5BF6339C(iParam0, 0f);
		unk_0xD18C8678B41DB690(iParam0, uParam1->f_6, uParam1->f_7, uParam1->f_8);
		unk_0xED4E91A1FC7ABBF6(iParam0, !uParam1->f_18);
		if (uParam1->f_5 == -1 && unk_0x6471F4759775FCA4(iParam0) != joaat("granger"))
		{
			unk_0x64058BD9F4A43D49(iParam0, 0);
		}
		else
		{
			unk_0x64058BD9F4A43D49(iParam0, uParam1->f_5);
		}
		if (uParam1->f_13 != -1 && uParam1->f_13 != unk_0xB51972B58BF40F96(iParam0, 4) + 1)
		{
			unk_0xD6844D3104C3ABBF(iParam0, 4);
			if (uParam1->f_13 > 0)
			{
				unk_0x6895CB0D4F2E7CDC(iParam0, 4, (uParam1->f_13 - 1), false);
			}
		}
		if (uParam1->f_9 != -1 && uParam1->f_9 != unk_0xB51972B58BF40F96(iParam0, 11) + 1)
		{
			unk_0xD6844D3104C3ABBF(iParam0, 11);
			if (uParam1->f_9 > 0)
			{
				unk_0x6895CB0D4F2E7CDC(iParam0, 11, (uParam1->f_9 - 1), false);
			}
		}
		if (uParam1->f_10 != -1 && uParam1->f_10 != unk_0xB51972B58BF40F96(iParam0, 12) + 1)
		{
			unk_0xD6844D3104C3ABBF(iParam0, 12);
			if (uParam1->f_10 > 0)
			{
				unk_0x6895CB0D4F2E7CDC(iParam0, 12, (uParam1->f_10 - 1), false);
			}
		}
		if ((uParam1->f_16 != -1 && uParam1->f_16 != unk_0xB51972B58BF40F96(iParam0, 14) + 1) && uParam1->f_16 < 9)
		{
			unk_0xD6844D3104C3ABBF(iParam0, 14);
			if (uParam1->f_16 > 0)
			{
				unk_0x6895CB0D4F2E7CDC(iParam0, 14, (uParam1->f_16 - 1), false);
			}
		}
		if (uParam1->f_14 != -1 && uParam1->f_14 != unk_0xB51972B58BF40F96(iParam0, 15) + 1)
		{
			unk_0xD6844D3104C3ABBF(iParam0, 15);
			if (uParam1->f_14 > 0)
			{
				unk_0x6895CB0D4F2E7CDC(iParam0, 15, (uParam1->f_14 - 1), false);
			}
		}
		if (uParam1->f_15 != -1 && uParam1->f_15 != unk_0xB51972B58BF40F96(iParam0, 16) + 1)
		{
			unk_0xD6844D3104C3ABBF(iParam0, 16);
			if (uParam1->f_15 > 0)
			{
				unk_0x6895CB0D4F2E7CDC(iParam0, 16, (uParam1->f_15 - 1), false);
			}
		}
		if ((uParam1->f_11 != -1 && uParam1->f_11 != unk_0xB51972B58BF40F96(iParam0, 23) + 1) && func_346(uParam1->f_12))
		{
			iVar10 = unk_0xB7A74982A8F639B9(iParam0, 23);
			if (uParam1->f_11 > 0)
			{
				unk_0x6895CB0D4F2E7CDC(iParam0, 23, (uParam1->f_11 - 1), iVar10 > 0);
			}
			else
			{
				func_345(iParam0, -1);
				func_345(iParam0, unk_0x1D74385CEC17951D(iParam0));
				unk_0xD6844D3104C3ABBF(iParam0, 23);
			}
		}
		if (uParam1->f_19 != -1)
		{
			unk_0xC6A2E001AEBB5B7F(iParam0, 18, uParam1->f_19 > 0);
		}
		if (uParam1->f_17 != -1)
		{
			unk_0xC6A2E001AEBB5B7F(iParam0, 22, uParam1->f_17 > 0);
		}
		if (uParam1->f_20 != -1)
		{
			unk_0xC6A2E001AEBB5B7F(iParam0, 20, uParam1->f_20 > 0);
		}
		return 1;
	}
	return 0;
}

void func_345(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xCF1FE5DEA3E2E135(iParam0) > 0)
	{
		unk_0x7D867CDA26E248C7(iParam0, 0);
		iVar0 = unk_0xB51972B58BF40F96(iParam0, 24);
		iVar1 = unk_0xB7A74982A8F639B9(iParam0, 24);
		unk_0x29CE559068C8CC1D(iParam0, iParam1);
		if (unk_0x6471F4759775FCA4(iParam0) == joaat("tornado6") || unk_0x6471F4759775FCA4(iParam0) == joaat("peyote2"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			unk_0xD6844D3104C3ABBF(iParam0, 24);
		}
		else
		{
			unk_0x6895CB0D4F2E7CDC(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

int func_346(int iParam0)
{
	switch (iParam0)
	{
		case -1:
		case 8:
		case 9:
			return 0;
			break;
	}
	return 1;
}

int func_347(int iParam0, int iParam1, int iParam2)
{
	if (func_377(iParam0) == 3)
	{
		return 0;
	}
	if (func_377(iParam0) == 4)
	{
		return 0;
	}
	return func_348(func_377(iParam0), 0, iParam1, iParam2, 0);
}

int func_348(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_376();
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
					func_375(99, 1);
					func_374(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_374(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_374(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_359(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_355(5))
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
							func_374(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_374(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_374(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_355(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_374(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_374(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_374(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_374(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_374(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_374(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_374(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_374(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_374(joaat("sp2_money_spent_property"), iParam3);
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
									func_374(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_374(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_374(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_374(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_374(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_374(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_355(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_374(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_374(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_374(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_374(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_374(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_374(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_354(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_375(95, iParam3);
					break;
				
				case 1:
					func_375(97, iParam3);
					break;
				
				case 2:
					func_375(96, iParam3);
					break;
			}
			func_375(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor((fVar0 * to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_351(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_351(iVar1);
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
					func_374(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_374(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_374(joaat("sp2_total_cash_earned"), iParam3);
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
	func_350(iParam0);
	if (Global_42009 == 15)
	{
		func_349(0);
	}
	return 1;
}

void func_349(bool bParam0)
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

void func_350(int iParam0)
{
	var uVar0;
	
	uVar0 = Global_59272[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xAC4FD27671081628(joaat("sp0_total_cash"), uVar0, 1);
			break;
		
		case 1:
			unk_0xAC4FD27671081628(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0xAC4FD27671081628(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_351(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_339(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_339(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_339(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_339(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_353(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_353(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_353(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_353(8274, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_353(8275, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_353(8276, 0, -1, 1, 0);
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
	else if (unk_0x234B68AC2E35ED5A(Global_112293.f_20562.f_471, iParam0) || unk_0x234B68AC2E35ED5A(Global_2097152[func_343() /*5557*/].f_675.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xC664C0067EEAB8D1(&(Global_112293.f_20562.f_471), iParam0);
		unk_0xC664C0067EEAB8D1(&(Global_2097152[func_343() /*5557*/].f_675.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xAD97A7EDCF347FBB("COUP_RED");
		unk_0x1896EC0B030A48A2(func_352(iParam0));
		unk_0x1664AA1696810AD6(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_352(int iParam0)
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

void func_353(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2555716[iParam0 /*3*/][func_12(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xAC4FD27671081628(iVar0, iParam1, iParam3);
	}
}

void func_354(int iParam0)
{
	func_375(93, iParam0);
	func_375(29, iParam0);
	func_375(30, iParam0);
}

bool func_355(int iParam0)
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
		return func_356(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_356(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_356(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_356(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0x666C16A4ED8F3098();
		iVar1 = func_11(8271, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0x666C16A4ED8F3098();
		iVar3 = func_11(8272, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0x666C16A4ED8F3098();
		iVar5 = func_11(8273, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0x666C16A4ED8F3098();
		iVar7 = func_11(8274, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0x666C16A4ED8F3098();
		iVar9 = func_11(8275, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0x666C16A4ED8F3098();
		iVar11 = func_11(8276, -1, 0);
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
	return unk_0x234B68AC2E35ED5A(Global_2097152[func_343() /*5557*/].f_675.f_10, iParam0);
}

int func_356(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_13();
	}
	iVar1 = func_358(iParam0, iParam1);
	uVar2 = func_357(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xE51D1C588E8D869E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_357(int iParam0)
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

int func_358(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_13();
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

int func_359(bool bParam0)
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
		func_373(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_360(27, 1);
	return 1;
}

int func_360(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_361(iParam0, iParam1);
}

int func_361(int iParam0, int iParam1)
{
	if (func_17(14) && !func_372(iParam0))
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
	if (func_371(&Global_4272779))
	{
		if (func_369(&Global_4272779, iParam0))
		{
			return 0;
		}
		if (func_362(&Global_4272779, iParam0))
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

int func_362(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x4999364EFF3B7CFC(iParam1))
	{
		return 0;
	}
	if (func_17(14) && !func_372(iParam1))
	{
		return 0;
	}
	if (func_369(uParam0, iParam1))
	{
		return 0;
	}
	if (func_368(uParam0) < 0f)
	{
		func_367(uParam0, 0);
	}
	func_365(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_363(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_363(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x4999364EFF3B7CFC(iParam1))
	{
		return 0;
	}
	if (func_17(14) && !func_372(iParam1))
	{
		return 0;
	}
	if (func_369(uParam0, iParam1))
	{
		return 0;
	}
	if (func_368(uParam0) < 0f)
	{
		func_367(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_364(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_364(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_365(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_366(uParam0, iVar0);
		iVar0++;
	}
	func_367(uParam0, (Global_4272778 - 0.5f));
}

void func_366(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_367(var uParam0, float fParam1)
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

float func_368(var uParam0)
{
	return uParam0->f_80;
}

bool func_369(var uParam0, int iParam1)
{
	return func_370(uParam0, iParam1) != -1;
}

int func_370(var uParam0, int iParam1)
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

bool func_371(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_372(int iParam0)
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

int func_373(int iParam0, int iParam1)
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

void func_374(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xD885BEFA31A18D47(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xAC4FD27671081628(iParam0, iVar0, 1);
}

void func_375(int iParam0, int iParam1)
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

void func_376()
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

int func_377(int iParam0)
{
	return Global_1878[iParam0 /*29*/].f_17;
}

int func_378(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x419E13582192CFEA(Global_96731[iVar0]))
		{
			if (Global_96731[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_379(int iParam0)
{
	int iVar0;
	
	if (unk_0x419E13582192CFEA(iParam0) && unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x419E13582192CFEA(Global_96701[iVar0]) && unk_0xBFCE58B2B3249999(Global_96701[iVar0], 0))
			{
				if (Global_96701[iVar0] == iParam0 && unk_0x6471F4759775FCA4(Global_96701[iVar0]) == unk_0x6471F4759775FCA4(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_380(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*iParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*iParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*iParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*iParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*iParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*iParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*iParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

void func_381()
{
	func_660();
	if (func_146() || unk_0xF471787D45ADC2C1())
	{
		return;
	}
	if (func_657(0) || func_657(14))
	{
		func_656();
		return;
	}
	if (Global_77248)
	{
		func_656();
		return;
	}
	func_382();
}

void func_382()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	int iVar8;
	int iVar9;
	
	iVar0 = func_655(iLocal_202);
	if (!func_654(iVar0))
	{
		if (Local_71.f_17[iLocal_202] != Global_96848[iLocal_202])
		{
			if (unk_0x419E13582192CFEA(Local_71.f_17[iLocal_202]))
			{
				if (!unk_0x419E13582192CFEA(Global_96848[iLocal_202]))
				{
					Global_96848[iLocal_202] = Local_71.f_17[iLocal_202];
				}
			}
			Local_71.f_17[iLocal_202] = Global_96848[iLocal_202];
			if (!unk_0xE50EB54E0F21BED0(Local_71.f_17[iLocal_202], 0))
			{
				func_644(Local_71.f_17[iLocal_202]);
				Global_112293.f_2361.f_539.f_2296[iVar0] = func_637();
				if (unk_0xC49311A2A500FF09(Local_71.f_17[iLocal_202], 0))
				{
					iVar1 = unk_0x75B58B38E45C6F9A(Local_71.f_17[iLocal_202], 0);
					if (unk_0x419E13582192CFEA(iVar1))
					{
						unk_0x4985CD0720AFD468(iVar1, 1, 1);
						func_634(Local_71.f_17[iLocal_202], &(Global_98774[iVar0 /*98*/]), &(Global_99077[iVar0 /*3*/]), &(Global_99087[iVar0]), &(Global_99069[iVar0]), &(Global_4272772[iVar0]));
						func_633(iVar0);
						unk_0x795957CD3A0042C8(&iVar1);
					}
				}
			}
			func_632(iVar0);
			if (Global_98774[iVar0 /*98*/] != 0)
			{
				unk_0x824F744352C8BC82(Global_98774[iVar0 /*98*/]);
			}
			return;
		}
		if (!unk_0x419E13582192CFEA(Local_71.f_17[iLocal_202]))
		{
			iVar2 = 26;
			if (!func_615(iVar0, &iVar2))
			{
				if (Global_96848[iLocal_202] != 0)
				{
					Global_96848[iLocal_202] = 0;
				}
			}
			else
			{
				iVar3 = 0;
				if (func_386(&iVar3, iVar0, Global_98774[iVar0 /*98*/], 1))
				{
					Global_96848[iLocal_202] = iVar3;
					func_385(&Global_96848);
				}
			}
		}
		else
		{
			iVar4 = unk_0xDFB7BFA6482FEE1E();
			if (Global_42561[iVar0] < iVar4 + 1000)
			{
				func_384(iVar0);
			}
			if (unk_0xA2CCAAC7F5CA3F49(Local_71.f_17[iLocal_202]))
			{
				if (!unk_0xE50EB54E0F21BED0(Local_71.f_17[iLocal_202], 0))
				{
					iVar5 = 26;
					if (func_383(Local_71.f_17[iLocal_202], iVar0, iLocal_202, &iVar5))
					{
						if (unk_0x9984C023D4E57C2E(Local_71.f_17[iLocal_202], 1))
						{
							func_644(Local_71.f_17[iLocal_202]);
							Global_112293.f_2361.f_539.f_2296[iVar0] = func_637();
							if (unk_0xC49311A2A500FF09(Local_71.f_17[iLocal_202], 0))
							{
								iVar6 = unk_0x75B58B38E45C6F9A(Local_71.f_17[iLocal_202], 0);
							}
							else if (unk_0x419E13582192CFEA(Global_99073[iVar0]))
							{
								if (!unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), Global_99073[iVar0], 0))
								{
									iVar6 = Global_99073[iVar0];
								}
							}
							if (unk_0x419E13582192CFEA(iVar6))
							{
								unk_0x4985CD0720AFD468(iVar6, 1, 1);
								func_634(Local_71.f_17[iLocal_202], &(Global_98774[iVar0 /*98*/]), &(Global_99077[iVar0 /*3*/]), &(Global_99087[iVar0]), &(Global_99069[iVar0]), &(Global_4272772[iVar0]));
								func_633(iVar0);
								unk_0x78CDDD1E6367978D(Local_71.f_17[iLocal_202], unk_0xD6E677FAD7521410(Local_71.f_17[iLocal_202], 1), 1, 0, 0, 1);
								unk_0x5420D0D520CF44D0(&iVar6);
							}
							unk_0xC606AE2A3209945E(&(Local_71.f_17[iLocal_202]));
							if (unk_0x419E13582192CFEA(Global_96848[iLocal_202]))
							{
								unk_0xC606AE2A3209945E(&(Global_96848[iLocal_202]));
							}
						}
						else
						{
							sVar7 = "";
							iVar8 = 0;
							sVar7 = unk_0xDB42E53EE0542D82(Local_71.f_17[iLocal_202], &iVar8);
							if (unk_0xAB6A270F84A8781E(sVar7))
							{
								unk_0x4985CD0720AFD468(Local_71.f_17[iLocal_202], 1, 1);
								return;
							}
							if (unk_0xDA654EB115F9FF7D(sVar7, "player_controller_b"))
							{
								unk_0x4985CD0720AFD468(Local_71.f_17[iLocal_202], 1, 1);
								return;
							}
							if (unk_0xDA654EB115F9FF7D(sVar7, "friends_controller"))
							{
								return;
							}
							if (unk_0xDA654EB115F9FF7D(sVar7, "FriendActivity") || unk_0xDA654EB115F9FF7D(sVar7, "family_scene_t0"))
							{
								return;
							}
							if (((unk_0xDA654EB115F9FF7D(sVar7, "mission_triggerer_a") || unk_0xDA654EB115F9FF7D(sVar7, "mission_triggerer_b")) || unk_0xDA654EB115F9FF7D(sVar7, "mission_triggerer_c")) || unk_0xDA654EB115F9FF7D(sVar7, "mission_triggerer_d"))
							{
								return;
							}
							if (unk_0xDA654EB115F9FF7D(sVar7, "selector_example"))
							{
								return;
							}
						}
					}
					else
					{
						if (!unk_0xF471787D45ADC2C1())
						{
							func_634(Local_71.f_17[iLocal_202], &(Global_98774[iVar0 /*98*/]), &(Global_99077[iVar0 /*3*/]), &(Global_99087[iVar0]), &(Global_99069[iVar0]), &(Global_4272772[iVar0]));
							func_633(iVar0);
						}
						if (Local_71.f_17[iLocal_202] != unk_0x7D2B9E6A64637269())
						{
							if ((unk_0x480609C7D10E7F3E(Local_71.f_17[iLocal_202]) && iVar5 != 22) && iVar5 != 21)
							{
								unk_0x78CDDD1E6367978D(Local_71.f_17[iLocal_202], Global_112293.f_2361.f_539.f_2300[iLocal_202 /*3*/], 1, 0, 0, 1);
								unk_0xCD37A28258D70638(Local_71.f_17[iLocal_202], Global_112293.f_2361.f_539.f_2310[iLocal_202]);
								unk_0x8B58E7AC53EED9F1(Local_71.f_17[iLocal_202], 1);
							}
						}
					}
				}
				else if (Global_112293.f_18531[iVar0] != 0)
				{
					Global_112293.f_18531[iVar0] = 0;
					func_644(Local_71.f_17[iLocal_202]);
					Global_112293.f_2361.f_539.f_2296[iVar0] = func_637();
					unk_0x4985CD0720AFD468(Local_71.f_17[iLocal_202], 1, 1);
					unk_0x0F3BD19FF11738D3(&(Local_71.f_17[iLocal_202]));
					Local_71.f_17[iLocal_202] = 0;
				}
			}
		}
	}
	else if (Global_96848[iLocal_202] != 0)
	{
		Global_96848[iLocal_202] = 0;
	}
	iVar9 = iLocal_202;
	iVar9++;
	if (iVar9 >= 3)
	{
		iVar9 = 0;
	}
	iLocal_202 = iVar9;
}

int func_383(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	int iVar4;
	
	if (!unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
	{
		*iParam3 = 16;
		return 0;
	}
	if (Global_112293.f_18531[iParam1] == 0)
	{
		*iParam3 = 17;
		return 0;
	}
	if (Global_96848.f_7 == iParam2)
	{
		*iParam3 = 19;
		return 0;
	}
	if (unk_0xF471787D45ADC2C1())
	{
		*iParam3 = 20;
		return 0;
	}
	if (Global_96848.f_44 == 1)
	{
		*iParam3 = 23;
		return 0;
	}
	if (func_657(14))
	{
		*iParam3 = 25;
		return 1;
	}
	Var0 = { unk_0xD6E677FAD7521410(iParam0, 0) };
	Var1 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) };
	fVar2 = vdist2(Var0, Var1);
	if (unk_0x1CAD2A287D454E0C(iParam0))
	{
		if (fVar2 < (200f * 200f))
		{
			*iParam3 = 21;
			return 0;
		}
	}
	if (unk_0x3D6C3476988DE6E1(Var0, 5f))
	{
		if (fVar2 < (40f * 40f))
		{
			*iParam3 = 22;
			return 0;
		}
	}
	iVar3 = Global_96291;
	if (iVar3 != -1)
	{
		iVar4 = 4;
		if (iParam1 == 0)
		{
			iVar4 = 0;
		}
		else if (iParam1 == 2)
		{
			iVar4 = 2;
		}
		else if (iParam1 == 1)
		{
			iVar4 = 1;
		}
		else if (iParam1 == 145)
		{
			iVar4 = 3;
			return 0;
		}
		if (unk_0x234B68AC2E35ED5A(Global_96848.f_47, iVar4))
		{
			*iParam3 = 24;
			return 0;
		}
	}
	*iParam3 = 15;
	return 1;
}

void func_384(int iParam0)
{
	if (((((iParam0 == 144 || iParam0 == 145) || iParam0 == 161) || iParam0 == 175) || iParam0 == 162) || iParam0 == 176)
	{
		return;
	}
	Global_42561[iParam0] = unk_0xDFB7BFA6482FEE1E() + 20000;
}

void func_385(var uParam0)
{
	if (!unk_0xECEC7528A52B4EE8((*uParam0)[uParam0->f_5]))
	{
		unk_0x1D7A4E9E23D306D6((*uParam0)[uParam0->f_5], 0);
		unk_0x2271ED1E65FB75EE((*uParam0)[uParam0->f_5], 1862763509);
	}
}

int func_386(int iParam0, int iParam1, struct<98> Param2, bool bParam3)
{
	int iVar0;
	struct<3> Var1;
	var uVar2;
	struct<3> Var3;
	struct<3> Var4;
	var uVar5;
	int iVar6;
	var uVar7;
	
	iVar0 = Global_99069[iParam1];
	if (Param2 != 0 && iVar0 != 0)
	{
		unk_0x16E516CA9C88FF48(Param2);
		func_614(iParam1);
		if (Param2.f_1 != 0)
		{
			unk_0x16E516CA9C88FF48(Param2.f_1);
			if (!unk_0xA9C0BBFB9CBB66F1(Param2.f_1))
			{
				return 0;
			}
		}
		if (!unk_0xA9C0BBFB9CBB66F1(Param2) || !func_613(iParam1))
		{
			return 0;
		}
		Var1 = { Global_112293.f_2361.f_539.f_2300[iParam1 /*3*/] };
		uVar2 = Global_112293.f_2361.f_539.f_2310[iParam1];
		if (iVar0 == 1)
		{
			Var1 = { Global_99077[iParam1 /*3*/] };
			uVar2 = Global_99087[iParam1];
		}
		Var3 = { 2f, 2f, 2f };
		if (unk_0xC18B7B2430ACA41E(Var1 - Var3, Var1 + Var3, 0, 1, 1, 0, 0, 0, 0))
		{
			if (func_611(Var1, uVar2, 0f, 0, &Var4, &uVar5))
			{
				if (iVar0 == 1)
				{
					Global_99077[iParam1 /*3*/] = { Var4 };
					Global_99087[iParam1] = uVar5;
				}
				else
				{
					Global_112293.f_2361.f_539.f_2300[iParam1 /*3*/] = { Var4 };
					Global_112293.f_2361.f_539.f_2310[iParam1] = uVar5;
				}
				return 0;
			}
		}
		iVar6 = unk_0x170478CC84C8AE2F(Param2, Var1, uVar2, 1, 1, 0);
		unk_0xDC252CD3A5DA5F65(iVar6, 0);
		unk_0x9F6498B97F642B82(iVar6, 0);
		unk_0xD4DF29F3D7B97053(iVar6, 1);
		func_605(&iVar6, Param2);
		unk_0x8B58E7AC53EED9F1(iVar6, 1);
		if (Param2.f_97)
		{
			func_604(iVar6, iParam1);
		}
		if (Param2.f_1 != 0)
		{
			uVar7 = unk_0x170478CC84C8AE2F(Param2.f_1, Var1 + Vector(5f, 0f, 0f), uVar2, 1, 1, 0);
			unk_0xC08E749A208F1CB3(iVar6, uVar7, 1065353216);
		}
		if (bParam3)
		{
			unk_0x824F744352C8BC82(Param2);
			if (Param2.f_1 != 0)
			{
				unk_0x824F744352C8BC82(Param2.f_1);
			}
		}
		if (iVar0 == 2)
		{
			if (func_603(iParam0, iParam1, iVar6, -1, bParam3, 0, 0))
			{
				unk_0x795957CD3A0042C8(&iVar6);
				return 1;
			}
		}
		else if (iVar0 == 1)
		{
			if (func_387(iParam0, iParam1, bParam3))
			{
				unk_0x795957CD3A0042C8(&iVar6);
				return 1;
			}
		}
		else
		{
			return 0;
		}
		return 0;
	}
	return func_387(iParam0, iParam1, bParam3);
}

int func_387(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (func_104(iParam1))
	{
		iVar0 = func_132(iParam1);
		unk_0x16E516CA9C88FF48(iVar0);
		if (unk_0xA9C0BBFB9CBB66F1(iVar0))
		{
			if (unk_0x419E13582192CFEA(*uParam0))
			{
				unk_0xC606AE2A3209945E(uParam0);
			}
			*uParam0 = unk_0x0FDCFECB2EF2BC1C(26, iVar0, Global_112293.f_2361.f_539.f_2300[iParam1 /*3*/], Global_112293.f_2361.f_539.f_2310[iParam1], 0, 0);
			unk_0xDB8D6815E13996A9(*uParam0, Global_112293.f_2361.f_539.f_2300[iParam1 /*3*/], 0, 0, 1);
			func_602(*uParam0, iParam1, 0);
			unk_0x1C06C3F7F238CC14(*uParam0, 0, 0);
			func_592(*uParam0);
			func_389(*uParam0, 0);
			func_388(*uParam0);
			if (bParam2)
			{
				unk_0x824F744352C8BC82(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

void func_388(int iParam0)
{
	int iVar0;
	
	if (unk_0xECEC7528A52B4EE8(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x419E13582192CFEA(Global_96739[iVar0]) && Global_96739[iVar0] == iParam0)
		{
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0x419E13582192CFEA(Global_96739[iVar0]))
		{
			Global_96739[iVar0] = iParam0;
			return;
		}
		iVar0++;
	}
}

int func_389(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = func_105(iParam0);
	if (func_591(iVar0))
	{
		func_590(iVar0, 0);
		func_576(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		func_393(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (func_391(iParam0))
		{
			func_590(iVar0, 0);
			func_576(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			func_393(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_112293.f_9083.f_99.f_58[120] && !Global_112293.f_9083.f_99.f_58[122])
			{
				func_576(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_112293.f_9083.f_99.f_58[121] = 1;
				return 1;
			}
			if (Global_112293.f_9083.f_99.f_58[123])
			{
				Global_112293.f_9083.f_99.f_58[123] = 0;
				if (!unk_0xECEC7528A52B4EE8(iParam0))
				{
					if (func_154(iParam0, 3, 169))
					{
						func_576(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						return 1;
					}
				}
			}
			if (func_154(iParam0, 12, 6))
			{
				func_576(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_154(iParam0, 12, 17))
			{
				if (!func_390(unk_0x6471F4759775FCA4(iParam0), 12, 17))
				{
					func_576(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_154(iParam0, 12, 20))
			{
				if (!func_390(unk_0x6471F4759775FCA4(iParam0), 12, 20))
				{
					func_576(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_154(iParam0, 12, 21))
			{
				if (!func_390(unk_0x6471F4759775FCA4(iParam0), 12, 21))
				{
					func_576(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_154(iParam0, 12, 22))
			{
				if (!func_390(unk_0x6471F4759775FCA4(iParam0), 12, 22))
				{
					func_576(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_154(iParam0, 12, 11))
			{
				func_576(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_154(iParam0, 12, 10))
			{
				func_576(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_154(iParam0, 12, 50))
			{
				func_576(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_154(iParam0, 14, 59))
			{
				func_576(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_154(iParam0, 8, 22))
			{
				func_576(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_154(iParam0, 12, 14))
			{
				func_576(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		
		case 1:
			if (func_154(iParam0, 12, 13))
			{
				if (!func_390(unk_0x6471F4759775FCA4(iParam0), 12, 13))
				{
					func_576(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_154(iParam0, 12, 14))
			{
				if (!func_390(unk_0x6471F4759775FCA4(iParam0), 12, 14))
				{
					func_576(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_154(iParam0, 12, 15))
			{
				if (!func_390(unk_0x6471F4759775FCA4(iParam0), 12, 15))
				{
					func_576(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_154(iParam0, 12, 4))
			{
				func_576(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_154(iParam0, 12, 3))
			{
				func_576(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_154(iParam0, 14, 82))
			{
				func_576(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_154(iParam0, 8, 76))
			{
				func_576(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_154(iParam0, 12, 1))
			{
				func_576(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		
		case 2:
			if (func_154(iParam0, 12, 12))
			{
				func_576(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_154(iParam0, 12, 15))
			{
				func_576(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (func_154(iParam0, 3, 71))
				{
					func_576(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_154(iParam0, 12, 17))
			{
				if (!func_390(unk_0x6471F4759775FCA4(iParam0), 12, 17))
				{
					func_576(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_154(iParam0, 12, 18))
			{
				if (!func_390(unk_0x6471F4759775FCA4(iParam0), 12, 18))
				{
					func_576(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_154(iParam0, 12, 19))
			{
				if (!func_390(unk_0x6471F4759775FCA4(iParam0), 12, 19))
				{
					func_576(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_154(iParam0, 12, 7))
			{
				func_576(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_154(iParam0, 12, 6))
			{
				func_576(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_154(iParam0, 14, 88))
			{
				func_576(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_154(iParam0, 8, 17))
			{
				func_576(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_154(iParam0, 12, 11))
			{
				func_576(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

bool func_390(int iParam0, int iParam1, int iParam2)
{
	Global_77059[1 /*14*/] = { func_5(iParam0, iParam1, iParam2, -1) };
	return unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 1);
}

bool func_391(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x6471F4759775FCA4(iParam0);
	iVar0 = func_155(iParam0, 4);
	return func_392(iVar1, 4, iVar0);
}

int func_392(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 72 && iParam2 <= 79)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 169 || (iParam2 >= 92 && iParam2 <= 96))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 72 && iParam2 <= 77)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 260)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 4)
		{
			if ((iParam2 >= 81 && iParam2 <= 90) || (iParam2 >= 94 && iParam2 <= 103))
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 96)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_393(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<65> Var2;
	int iVar3;
	
	if (!unk_0xECEC7528A52B4EE8(iParam0))
	{
		iVar0 = func_105(iParam0);
		if (func_104(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = func_575(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					func_574(iVar0);
					func_403(iParam0, &(Global_112293.f_2361.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			func_399(iParam0, &Var2, 1, -1);
			Global_99095[iVar0 /*65*/] = { Var2 };
			if (iParam0 == unk_0x7D2B9E6A64637269())
			{
				func_395();
			}
			if (unk_0x15173FB88ABC94F9(unk_0x471C98FD94C0A5FD()) != unk_0x15173FB88ABC94F9("clothes_shop_sp") || (unk_0x636F1F53CC61D2C9(joaat("lester1")) == 0 && unk_0x636F1F53CC61D2C9(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!func_17(0) && !func_17(1)) && !func_17(2)) && !func_17(3)) && !func_17(4)) && !func_17(9)) && !func_17(10)))
				{
					Global_112293.f_2361.f_539[iVar0 /*65*/] = { Var2 };
					Global_112293.f_2361.f_539.f_2391[iVar0] = func_394(iParam0);
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_112293.f_2361.f_539.f_204[iVar3 /*4*/][iVar0] = func_155(iParam0, func_85(iVar3));
						iVar3++;
					}
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_112293.f_2361.f_539.f_204[iVar3 /*4*/][iVar0] = func_155(iParam0, func_85(iVar3));
						iVar3++;
					}
					if (iVar0 == 0)
					{
						if (Global_112293.f_9083.f_99.f_58[121])
						{
							Global_112293.f_9083.f_99.f_58[122] = 1;
						}
					}
				}
			}
		}
	}
}

int func_394(int iParam0)
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
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar4 = iVar1;
		iVar3 = unk_0x1AAA5445D3C56366(iParam0, iVar4);
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			iVar0 = (iVar0 + unk_0x1887979EFA1D3BF6(iParam0, iVar4, iVar2));
			iVar2++;
		}
		iVar1++;
	}
	iVar5 = 0;
	while (iVar5 < 9)
	{
		iVar8 = iVar5;
		iVar7 = unk_0xED24814ADAB539B1(iParam0, iVar8);
		iVar6 = 0;
		while (iVar6 < iVar7)
		{
			iVar0 = (iVar0 + unk_0x1A46D74ECB10E7F8(iParam0, iVar8, iVar6));
			iVar6++;
		}
		iVar5++;
	}
	return iVar0;
}

void func_395()
{
	struct<50> Var0;
	
	if ((unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()) || !func_104(func_102())) || !func_396())
	{
		return;
	}
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	func_399(unk_0x7D2B9E6A64637269(), &Var0, 1, -1);
	func_340(1306, Var0[0], -1, 1);
	func_340(1307, Var0[1], -1, 1);
	func_340(1308, Var0[2], -1, 1);
	func_340(1309, Var0[3], -1, 1);
	func_340(1310, Var0[4], -1, 1);
	func_340(1311, Var0[5], -1, 1);
	func_340(1312, Var0[6], -1, 1);
	func_340(1313, Var0[7], -1, 1);
	func_340(1314, Var0[8], -1, 1);
	func_340(1315, Var0[9], -1, 1);
	func_340(1316, Var0[10], -1, 1);
	func_340(1317, Var0[11], -1, 1);
	func_340(1318, Var0.f_13[0], -1, 1);
	func_340(1319, Var0.f_13[1], -1, 1);
	func_340(1320, Var0.f_13[2], -1, 1);
	func_340(1321, Var0.f_13[3], -1, 1);
	func_340(1322, Var0.f_13[4], -1, 1);
	func_340(1323, Var0.f_13[5], -1, 1);
	func_340(1324, Var0.f_13[6], -1, 1);
	func_340(1325, Var0.f_13[7], -1, 1);
	func_340(1326, Var0.f_13[8], -1, 1);
	func_340(1327, Var0.f_13[9], -1, 1);
	func_340(1328, Var0.f_13[10], -1, 1);
	func_340(1329, Var0.f_13[11], -1, 1);
	func_340(1330, Var0.f_26[0], -1, 1);
	func_340(1331, Var0.f_26[1], -1, 1);
	func_340(1332, Var0.f_26[2], -1, 1);
	func_340(1333, Var0.f_26[3], -1, 1);
	func_340(1334, Var0.f_26[4], -1, 1);
	func_340(1335, Var0.f_26[5], -1, 1);
	func_340(1336, Var0.f_26[6], -1, 1);
	func_340(1337, Var0.f_26[7], -1, 1);
	func_340(1338, Var0.f_26[8], -1, 1);
	func_340(1339, Var0.f_26[9], -1, 1);
	func_340(1340, Var0.f_26[10], -1, 1);
	func_340(1341, Var0.f_26[11], -1, 1);
	func_340(1342, Var0.f_39[0], -1, 1);
	func_340(1343, Var0.f_39[1], -1, 1);
	func_340(1344, Var0.f_39[2], -1, 1);
	func_340(1345, Var0.f_39[3], -1, 1);
	func_340(1346, Var0.f_39[4], -1, 1);
	func_340(1347, Var0.f_39[5], -1, 1);
	func_340(1348, Var0.f_39[6], -1, 1);
	func_340(1349, Var0.f_39[7], -1, 1);
	func_340(1350, Var0.f_39[8], -1, 1);
	func_340(1351, Var0.f_49[0], -1, 1);
	func_340(1352, Var0.f_49[1], -1, 1);
	func_340(1353, Var0.f_49[2], -1, 1);
	func_340(1354, Var0.f_49[3], -1, 1);
	func_340(1355, Var0.f_49[4], -1, 1);
	func_340(1356, Var0.f_49[5], -1, 1);
	func_340(1357, Var0.f_49[6], -1, 1);
	func_340(1358, Var0.f_49[7], -1, 1);
	func_340(1359, Var0.f_49[8], -1, 1);
	func_340(1360, func_102(), -1, 1);
	unk_0x6ACB137CE7852248(joaat("clo_stored_initial"), 1, 1);
	Global_112293.f_2361.f_539.f_4315 = 1;
}

int func_396()
{
	if (func_398() && func_397(0))
	{
		return 1;
	}
	return 0;
}

var func_397(int iParam0)
{
	return Global_1312392[iParam0];
}

var func_398()
{
	return func_397(func_13() + 1);
}

void func_399(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xECEC7528A52B4EE8(iParam0))
	{
		iVar0 = func_105(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_402(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_401(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_104(iVar0))
		{
			uParam1->f_59 = Global_112293.f_2361.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_112293.f_2361.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_112293.f_2361.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_112293.f_2361.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_112293.f_2361.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_112293.f_2361.f_539[iVar0 /*65*/].f_64;
		}
		else if (unk_0x02BFF15CAA701972() && unk_0x6471F4759775FCA4(iParam0) == unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()))
		{
			if (func_400(161, iParam3))
			{
				uParam1->f_59 = func_11(2053, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_11(753, iParam3, 0);
			}
			uParam1->f_60 = func_11(754, iParam3, 0);
			uParam1->f_61 = func_11(755, iParam3, 0);
		}
		if (unk_0x02BFF15CAA701972() && iParam0 == unk_0x7D2B9E6A64637269())
		{
			if (func_400(161, iParam3))
			{
				uParam1->f_59 = func_11(2053, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_11(753, iParam3, 0);
			}
		}
	}
}

int func_400(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2592627[iParam0 /*3*/][func_12(iParam1)];
	if (unk_0xEB399571DCA129A9(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_401(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_105(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x228A4ED518554B3F(iParam0, iParam1);
		*uParam3 = unk_0x64F7E3FF8F40315D(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (unk_0xB22628F56B3EAA2E(iParam0) && unk_0xEABC48138FE58714(iParam0) != -1)
				{
					*uParam2 = unk_0xEABC48138FE58714(iParam0);
					*uParam3 = unk_0x79D810B8C4DF88FC(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_402(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_105(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x094C1D2DFE050D6E(iParam0, iParam1);
		*uParam3 = unk_0x288277F22D527487(iParam0, iParam1);
		*uParam4 = unk_0xEE2FD6984DD352B8(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

void func_403(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	struct<5> Var12;
	
	if (!unk_0xECEC7528A52B4EE8(iParam0) || iParam5)
	{
		iVar0 = func_105(iParam0);
		iVar1 = unk_0x6471F4759775FCA4(iParam0);
		iVar3 = 0;
		while (iVar3 < 12)
		{
			if (iVar3 != 1 || (iVar3 == 1 && !bParam2))
			{
				if (bParam4)
				{
					if (uParam1->f_13[iVar3] != 0 && uParam1->f_13[iVar3] >= unk_0x1AAA5445D3C56366(iParam0, iVar3))
					{
						uParam1->f_13[iVar3] = 0;
					}
					if ((*uParam1)[iVar3] != 0 && (*uParam1)[iVar3] >= unk_0x1887979EFA1D3BF6(iParam0, iVar3, uParam1->f_13[iVar3]))
					{
						(*uParam1)[iVar3] = 0;
					}
				}
				unk_0x4170FE884DF7426D(iParam0, iVar3, uParam1->f_13[iVar3], (*uParam1)[iVar3], uParam1->f_26[iVar3]);
			}
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 < 9)
		{
			if (bParam4)
			{
				if (uParam1->f_39[iVar3] != -1 && uParam1->f_39[iVar3] != 255)
				{
					if (uParam1->f_39[iVar3] >= unk_0xED24814ADAB539B1(iParam0, iVar3))
					{
						uParam1->f_39[iVar3] = -1;
					}
					else if (uParam1->f_49[iVar3] >= unk_0x1A46D74ECB10E7F8(iParam0, iVar3, uParam1->f_39[iVar3]))
					{
						uParam1->f_49[iVar3] = 0;
					}
				}
			}
			if (uParam1->f_39[iVar3] != -1 && uParam1->f_39[iVar3] != 255)
			{
				unk_0xC8749D706BBF16E1(iParam0, iVar3, uParam1->f_39[iVar3], uParam1->f_49[iVar3], false);
			}
			else
			{
				unk_0x7EDC239EB46006D5(iParam0, iVar3);
			}
			iVar3++;
		}
		if (func_104(iVar0))
		{
			Global_112293.f_2361.f_539[iVar0 /*65*/].f_59 = uParam1->f_59;
			Global_112293.f_2361.f_539[iVar0 /*65*/].f_60 = uParam1->f_60;
			Global_112293.f_2361.f_539[iVar0 /*65*/].f_61 = uParam1->f_61;
			if (func_573(iParam0, iVar1, &iVar2, 0))
			{
				func_576(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_112293.f_2361.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_112293.f_2361.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_112293.f_2361.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_571(iParam0, iVar1, &iVar2))
			{
				func_576(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (unk_0x02BFF15CAA701972() && unk_0x6471F4759775FCA4(iParam0) == unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()))
		{
			bVar4 = func_569(iParam0);
			func_353(754, uParam1->f_60, Global_77056, 1, 0);
			func_353(755, uParam1->f_61, Global_77056, 1, 0);
			iVar5 = func_156(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			if (iVar5 != -99)
			{
				iVar6 = -99;
				if (iVar1 == joaat("mp_m_freemode_01"))
				{
					iVar6 = func_567(iVar5);
				}
				else if (iVar1 == joaat("mp_f_freemode_01"))
				{
					iVar6 = func_565(iVar5);
				}
				if (iVar6 != -99 && iVar5 != iVar6)
				{
					iVar5 = iVar6;
				}
			}
			func_409(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_77056, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = func_156(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_409(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_77056, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = func_406(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_409(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_77056, bVar4, 0, 0);
			}
		}
		if (unk_0x02BFF15CAA701972() && iParam0 == unk_0x7D2B9E6A64637269())
		{
			iVar9 = uParam1->f_59;
			if (iVar1 == joaat("mp_m_freemode_01"))
			{
				iVar9 = func_567(iVar9);
			}
			else
			{
				iVar9 = func_565(iVar9);
			}
			func_353(753, iVar9, Global_77056, 1, 0);
			func_353(2053, iVar9, Global_77056, 1, 0);
			func_404(161, 1, -1, 1);
		}
		if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
		{
			iVar10 = unk_0xF94D55021DC59203(iParam0, 1, unk_0x094C1D2DFE050D6E(iParam0, 1), unk_0x288277F22D527487(iParam0, 1));
			iVar11 = unk_0x6F6F7115068877E4(iParam0, 1, unk_0x228A4ED518554B3F(iParam0, 1), unk_0x64F7E3FF8F40315D(iParam0, 1));
			if (iVar10 == joaat("DLC_MP_ARENA_M_BERD_13_0") || iVar10 == joaat("DLC_MP_ARENA_F_BERD_13_0"))
			{
				if (!unk_0x01758128AAB0BA8F(iVar11, joaat("ARENA_DRAW_0"), 1))
				{
					unk_0x71794FDA9361403E(&Var12);
					if (iVar10 == joaat("DLC_MP_ARENA_M_BERD_13_0"))
					{
						unk_0x9404A07A08FA1D0F(joaat("DLC_MP_ARENA_M_PEYES_0_0"), &Var12);
					}
					else
					{
						unk_0x9404A07A08FA1D0F(joaat("DLC_MP_ARENA_F_PEYES_0_0"), &Var12);
					}
					unk_0xC8749D706BBF16E1(iParam0, 1, Var12.f_3, Var12.f_4, false);
				}
			}
			else if (unk_0x01758128AAB0BA8F(iVar11, joaat("ARENA_DRAW_0"), 1))
			{
				unk_0x7EDC239EB46006D5(iParam0, 1);
			}
		}
	}
}

void func_404(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_405())
	{
		iVar0 = Global_2592627[iParam0 /*3*/][func_12(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x6ACB137CE7852248(iVar0, iParam1, iParam3);
		}
	}
}

int func_405()
{
	return 1;
	return 0;
}

int func_406(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iParam1 == -1)
	{
		return func_408(iParam3);
	}
	iVar0 = unk_0x6471F4759775FCA4(iParam0);
	iVar1 = unk_0x6F6F7115068877E4(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			return func_79(unk_0x6471F4759775FCA4(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			return func_79(unk_0x6471F4759775FCA4(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = unk_0xED24814ADAB539B1(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= (iVar2 - 1))
	{
		iVar6 = unk_0x1A46D74ECB10E7F8(iParam0, iParam3, iVar4);
		if (iVar4 != iParam1)
		{
			iVar3 = (iVar3 + iVar6);
		}
		else
		{
			iVar5 = 0;
			while (iVar5 <= (iVar6 - 1))
			{
				if (iVar4 == iParam1 && iVar5 == iParam2)
				{
					iVar3 = (iVar3 + func_407(iParam0, iParam3));
					return iVar3;
				}
				else
				{
					iVar3++;
				}
				iVar5++;
			}
		}
		iVar4++;
	}
	return func_408(iParam3);
}

int func_407(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x6471F4759775FCA4(uParam0);
	switch (iVar0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 58;
					break;
				
				case 2:
					return 112;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 82;
					break;
				
				case 2:
					return 158;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 88;
					break;
				
				case 2:
					return 154;
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
	}
	return -99;
}

int func_408(int iParam0)
{
	switch (iParam0)
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
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
	}
	return 0;
}

int func_409(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	int iVar18;
	var uVar19;
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
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	var uVar57;
	int iVar58;
	int iVar59;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	int iVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	var uVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	var uVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	int iVar86;
	
	if (!unk_0x02BFF15CAA701972())
	{
		if ((Global_1312835 != 4 && Global_1312835 != 5) && Global_1312835 != 7)
		{
			return 0;
		}
	}
	if (unk_0xECEC7528A52B4EE8(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	if (iParam0 == unk_0x7D2B9E6A64637269() && Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_231 == 2)
	{
		if (!bParam12)
		{
			return 0;
		}
	}
	if (iParam10 == -1)
	{
		iParam10 = Global_77056;
	}
	Global_77057++;
	iVar5 = unk_0x6471F4759775FCA4(iParam0);
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -1;
	iVar9 = -99;
	iVar10 = -99;
	iVar11 = -1;
	iVar12 = -1;
	if (iParam5 == 0)
	{
		Global_77059[1 /*14*/] = { func_532(iVar5, iParam1, iParam2, -1) };
		if (!func_531(iParam3))
		{
			Global_77057 = (Global_77057 - 1);
			return 0;
		}
		if (iParam1 == 11 && Global_77057 > 1)
		{
		}
		else
		{
			func_528(iVar5, iParam1, iParam2, 1);
		}
	}
	if (iParam1 == 12)
	{
		uVar13 = Global_2621444;
		uVar14 = Global_2621445;
		unk_0xA7E55BCB7431698B(iParam0);
		uVar15 = 15;
		if (iParam5 == 1)
		{
			uVar15 = { Global_77102 };
		}
		else
		{
			uVar15 = { func_83(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar15[iVar0] != -99)
			{
				if (iVar0 == 10 && uVar15.f_16)
				{
					Global_77059[1 /*14*/] = { func_532(iVar5, 10, 0, -1) };
					if (iParam4 == -1)
					{
						unk_0x4170FE884DF7426D(iParam0, func_20(iVar0), Global_77059[1 /*14*/].f_3, Global_77059[1 /*14*/].f_4, unk_0xEE2FD6984DD352B8(iParam0, func_20(iVar0)));
					}
					else
					{
						unk_0x4170FE884DF7426D(iParam0, func_20(iVar0), Global_77059[1 /*14*/].f_3, Global_77059[1 /*14*/].f_4, iParam4);
					}
					if (unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 1))
					{
						func_528(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_77059[1 /*14*/] = { func_532(iVar5, iVar0, uVar15[iVar0], -1) };
					if (unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 0) || iVar0 == 13)
					{
						if (iVar0 == 13)
						{
							uVar16 = 9;
							if (iParam5 == 1)
							{
								uVar16 = { Global_77119 };
							}
							else
							{
								uVar16 = { func_77(iVar5, uVar15[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_77059[1 /*14*/] = { func_532(iVar5, 14, uVar16[iVar1], -1) };
								func_527(iParam0, Global_77059[1 /*14*/].f_12, Global_77059[1 /*14*/].f_3, Global_77059[1 /*14*/].f_4);
								if (unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 1))
								{
									func_528(iVar5, iVar0, uVar15[iVar0], 1);
								}
								iVar1++;
							}
						}
						else if (iVar0 != 14 && iVar0 != 12)
						{
							if (iVar0 != 1)
							{
								if (iParam4 == -1)
								{
									unk_0x4170FE884DF7426D(iParam0, func_20(iVar0), Global_77059[1 /*14*/].f_3, Global_77059[1 /*14*/].f_4, unk_0xEE2FD6984DD352B8(iParam0, func_20(iVar0)));
								}
								else
								{
									unk_0x4170FE884DF7426D(iParam0, func_20(iVar0), Global_77059[1 /*14*/].f_3, Global_77059[1 /*14*/].f_4, iParam4);
								}
							}
							else
							{
								func_409(iParam0, iVar0, uVar15[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 1))
							{
								func_528(iVar5, iVar0, uVar15[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_77059[1 /*14*/] = { func_532(iVar5, iVar0, func_525(iParam0, iVar0, -1), -1) };
				if (unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 3))
				{
					uVar17 = { func_83(iVar5, 0) };
					func_409(iParam0, iVar0, uVar17[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		unk_0x4170FE884DF7426D(iParam0, 1, unk_0x094C1D2DFE050D6E(iParam0, 1), unk_0x288277F22D527487(iParam0, 1), 0);
		Global_2621444 = uVar13;
		Global_2621445 = uVar14;
		if (iParam5 == 0)
		{
			iVar18 = func_524();
			if (iVar18 != -1)
			{
				func_521(iVar18, 0, iParam10);
			}
			func_519(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar19 = { func_77(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_77059[1 /*14*/] = { func_532(iVar5, 14, uVar19[iVar1], -1) };
			func_527(iParam0, Global_77059[1 /*14*/].f_12, Global_77059[1 /*14*/].f_3, Global_77059[1 /*14*/].f_4);
			if (unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 1))
			{
				func_528(iVar5, 14, uVar19[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_77057 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = func_517(iParam0, iVar5, 14, uVar19[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_409(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
						iVar2++;
					}
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		func_527(iParam0, Global_77059[1 /*14*/].f_12, Global_77059[1 /*14*/].f_3, Global_77059[1 /*14*/].f_4);
		if (unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 1))
		{
			func_528(iVar5, iParam1, iParam2, 1);
		}
		if (Global_77059[1 /*14*/].f_12 == 0)
		{
			if (unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 6) && unk_0x01758128AAB0BA8F(Global_2621444, joaat("SHRINK_HAIR"), 1))
			{
			}
			else
			{
				iVar20 = unk_0xF94D55021DC59203(iParam0, 1, unk_0x094C1D2DFE050D6E(iParam0, 1), unk_0x288277F22D527487(iParam0, 1));
				if (unk_0x01758128AAB0BA8F(iVar20, joaat("HAIR_SHRINK"), 0))
				{
					func_409(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					Global_77059[1 /*14*/] = { func_532(iVar5, iParam1, iParam2, -1) };
				}
			}
		}
		if (Global_77059[1 /*14*/].f_12 == 0)
		{
			func_510(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_77057 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_517(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_409(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = func_517(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_409(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else
	{
		iVar21 = func_20(iParam1);
		if (unk_0x094C1D2DFE050D6E(iParam0, iVar21) != Global_77059[1 /*14*/].f_3 || unk_0x288277F22D527487(iParam0, iVar21) != Global_77059[1 /*14*/].f_4)
		{
			iVar22 = unk_0xF94D55021DC59203(iParam0, 8, unk_0x094C1D2DFE050D6E(iParam0, 8), unk_0x288277F22D527487(iParam0, 8));
			iVar23 = unk_0xF94D55021DC59203(iParam0, 7, unk_0x094C1D2DFE050D6E(iParam0, 7), unk_0x288277F22D527487(iParam0, 7));
			if (((iParam1 == 11 && unk_0x01758128AAB0BA8F(iVar23, 307252627, 0)) || (iParam1 == 8 && unk_0x01758128AAB0BA8F(iVar23, 1552218390, 0))) || (iParam1 == 4 && unk_0x01758128AAB0BA8F(iVar23, -2095729091, 0)))
			{
				unk_0x4170FE884DF7426D(iParam0, 7, 0, 0, unk_0xEE2FD6984DD352B8(iParam0, 7));
			}
			if ((iParam1 == 11 && unk_0x01758128AAB0BA8F(iVar22, 307252627, 0)) || (iParam1 == 4 && unk_0x01758128AAB0BA8F(iVar22, -2095729091, 0)))
			{
				if (iVar5 == joaat("mp_m_freemode_01"))
				{
					unk_0x4170FE884DF7426D(iParam0, 8, 15, 0, unk_0xEE2FD6984DD352B8(iParam0, 8));
				}
				else if (iVar5 == joaat("mp_f_freemode_01"))
				{
					unk_0x4170FE884DF7426D(iParam0, 8, 2, 0, unk_0xEE2FD6984DD352B8(iParam0, 8));
				}
			}
		}
		if (iParam1 == 11)
		{
			if (iParam5 == 0)
			{
				iVar24 = -1;
				if (unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 6) && unk_0x01758128AAB0BA8F(Global_2621444, joaat("CREW_COL"), 11))
				{
					unk_0x21F9691A2B528C26(iParam0, Global_1314059, Global_1314060, Global_1314061, 0);
					unk_0x21F9691A2B528C26(iParam0, Global_1314059, Global_1314060, Global_1314061, 1);
					unk_0x21F9691A2B528C26(iParam0, Global_1314059, Global_1314060, Global_1314061, 2);
					unk_0x21F9691A2B528C26(iParam0, Global_1314059, Global_1314060, Global_1314061, 3);
				}
				iVar25 = func_155(iParam0, 11);
				iVar26 = func_155(iParam0, 8);
				iVar27 = func_155(iParam0, 4);
				iVar8 = unk_0xF94D55021DC59203(iParam0, 8, unk_0x094C1D2DFE050D6E(iParam0, 8), unk_0x288277F22D527487(iParam0, 8));
				if (unk_0x01758128AAB0BA8F(iVar8, joaat("OVER_JACKET"), 8))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						iVar24 = func_159(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						iVar24 = func_159(iVar5, iParam2, 11, 4);
					}
					if ((((((unk_0x01758128AAB0BA8F(iVar24, joaat("SILK_ROBE"), 0) || unk_0x01758128AAB0BA8F(iVar24, joaat("SILK_PYJAMAS"), 0)) || unk_0x01758128AAB0BA8F(iVar24, joaat("SMOKING_JACKET"), 0)) || unk_0x01758128AAB0BA8F(iVar24, -826135203, 0)) || unk_0x01758128AAB0BA8F(iVar24, joaat("MORPH_SUIT"), 0)) || unk_0x01758128AAB0BA8F(iVar24, joaat("GORKA_SUIT"), 0)) || unk_0x01758128AAB0BA8F(iVar24, joaat("CAT_SUIT"), 0))
					{
					}
					else
					{
						iVar9 = func_155(iParam0, 8);
					}
				}
				iVar28 = unk_0xF94D55021DC59203(iParam0, 3, unk_0x094C1D2DFE050D6E(iParam0, 3), 0);
				if (unk_0x01758128AAB0BA8F(iVar28, joaat("GLOVES"), 0))
				{
					iVar29 = func_509(iVar5, iVar26, iVar25, iVar27);
					if (iVar29 == -99)
					{
						iVar29 = func_517(iParam0, iVar5, 11, iVar25, 3, 0);
					}
					switch (iVar28)
					{
						case joaat("DLC_MP_VAL_F_UPPR0_0"):
						case joaat("DLC_MP_VAL_F_UPPR0_1"):
						case joaat("DLC_MP_VAL_F_UPPR0_2"):
						case joaat("DLC_MP_VAL_F_UPPR0_3"):
						case joaat("DLC_MP_VAL_F_UPPR0_4"):
						case joaat("DLC_MP_VAL_F_UPPR0_5"):
							iVar29 = 11;
							iVar24 = func_159(iVar5, iParam2, 11, 4);
							if (!unk_0x01758128AAB0BA8F(iVar24, joaat("DRESS"), 0))
							{
								iVar29 = -99;
							}
							break;
					}
					if (iVar29 != -99)
					{
						iVar30 = 0;
						while (iVar30 < 18)
						{
							if (func_508(iVar5, iVar29, iVar30) == iVar28)
							{
								iVar11 = iVar30;
								iVar12 = unk_0x288277F22D527487(iParam0, 3);
							}
							iVar30++;
						}
					}
				}
				iVar24 = -1;
				if ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 256) && unk_0x01758128AAB0BA8F(func_159(iVar5, iParam2, 11, 4), joaat("VEST"), 0))
				{
					iVar25 = func_155(iParam0, 11);
					if (iVar25 >= 256)
					{
						iVar24 = func_159(iVar5, iVar25, 11, 4);
					}
					if (iVar25 >= 256 && unk_0x01758128AAB0BA8F(iVar24, joaat("VEST_SHIRT"), 0))
					{
						iVar31 = func_506(iVar5, iVar25, iParam2, unk_0x288277F22D527487(iParam0, 11));
						if (iVar31 != -99)
						{
							func_409(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_77059[1 /*14*/] = { func_532(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				else if (func_505(iVar5, iParam2, -1))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						if (iVar25 >= 237)
						{
							iVar24 = func_159(iVar5, iVar25, 11, 3);
						}
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						if (iVar25 >= 256)
						{
							iVar24 = func_159(iVar5, iVar25, 11, 4);
						}
					}
					iVar9 = -99;
					if (!func_505(iVar5, iVar25, -1))
					{
						if ((iVar5 == joaat("mp_f_freemode_01") && iVar25 >= 256) && (unk_0x01758128AAB0BA8F(iVar24, joaat("VEST"), 0) || unk_0x01758128AAB0BA8F(iVar24, joaat("VEST_SHIRT"), 0)))
						{
						}
						else if ((iVar5 == joaat("mp_f_freemode_01") && iVar25 >= 256) && ((((((((unk_0x01758128AAB0BA8F(iVar24, joaat("HEIST_DRAW_5"), 0) || unk_0x01758128AAB0BA8F(iVar24, joaat("HEIST_DRAW_6"), 0)) || unk_0x01758128AAB0BA8F(iVar24, joaat("HEIST_DRAW_7"), 0)) || unk_0x01758128AAB0BA8F(iVar24, joaat("HEIST_DRAW_11"), 0)) || unk_0x01758128AAB0BA8F(iVar24, joaat("HEIST_DRAW_12"), 0)) || unk_0x01758128AAB0BA8F(iVar24, -872449705, 0)) || unk_0x01758128AAB0BA8F(iVar24, joaat("APART_DRAW_9"), 0)) || unk_0x01758128AAB0BA8F(iVar24, joaat("STUNT_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar24, joaat("STUNT_DRAW_9"), 0)))
						{
						}
						else
						{
							iVar32 = func_504(iParam0, iParam2);
							iVar33 = func_506(iVar5, iVar25, iParam2, unk_0x288277F22D527487(iParam0, 11));
							if (iVar33 != -99)
							{
								func_409(iParam0, 8, iVar33, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_77059[1 /*14*/] = { func_532(iVar5, iParam1, iParam2, -1) };
								iVar9 = -99;
							}
							else if (iVar32 != -99 && (iParam0 == unk_0x7D2B9E6A64637269() || iParam0 == Global_4269998))
							{
								func_409(iParam0, 8, iVar32, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_77059[1 /*14*/] = { func_532(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar34 = func_503(iVar5, 11, -1);
									Global_77059[1 /*14*/] = { func_532(iVar5, 11, iVar34, -1) };
									iVar33 = func_506(iVar5, iVar34, iParam2, Global_77059[1 /*14*/].f_4);
									iVar35 = func_159(iVar5, iParam2, 11, 3);
									if ((iVar33 == -99 || unk_0x01758128AAB0BA8F(iVar35, joaat("BIKER_VEST"), 0)) || unk_0x01758128AAB0BA8F(iVar35, 1170568373, 0))
									{
										iVar33 = 240;
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									{
					}